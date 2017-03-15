<?php
/**
 * @file
 * datigov_harvestlist.migrate.content.inc
 */

/**
 * Defines a dynamic migration to migrate harvest sources
 */
class DatigovCatalogsContentMigration extends Migration {

  // Sets the destination ctype.
  private $destinationCtype = 'catalog';
  // Source file directory.
  private $feature = 'datigov_dkan_dcatapit';

  /**
   * Constructs the migration.
   */
  public function __construct($arguments = array()) {
    parent::__construct($arguments);

    $this->team = array(
      new MigrateTeamMember('M.Marcello Verona', 'marcelloverona@gmail.com', t('Implementor')),
    );

    $this->description = t('Import DatiGov harvest list contents from CSV file.');

    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'title' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => TRUE,
      ),
      ), MigrateDestinationNode::getKeySchema()
    );

    $this->path = drupal_get_path('module', $this->feature) . '/data/catalog.csv';

    $this->source = new MigrateSourceCSV(
      $this->path,
      array(),
      array(
        'header_rows' => 1,
        'delimiter' => ',',
        'enclosure' => '"',
        'embedded_newlines' => TRUE,
      )
    );

    // Creates a destination object that receives the data.
    $this->destination = new MigrateDestinationNode($this->destinationCtype);

    $this->addFieldMapping('uid')->defaultValue(1);
    $this->addFieldMapping('status')->defaultValue(1);
    $this->addFieldMapping('language')->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('field_catalog_url_api', 'url');
    $this->addFieldMapping('field_catalog_schema', 'schema');
    $this->addFieldMapping('field_dcatap_language', 'lingua')->defaultValue('Italiano');
    $this->addFieldMapping('field_harvester_reference', 'nid');
    $this->addFieldMapping('field_catalog_frequency', 'frequenza')->defaultValue('altro');
    $this->addFieldMapping('field_catalog_referrer', 'referente');
    $this->addFieldMapping('field_catalog_email_referrer', 'email_referente');
    $this->addFieldMapping('field_catalog_editor', 'editore');
    $this->addFieldMapping('field_catalog_home_page', 'home');
    
    $this->addUnmigratedDestinations(array(
      'body',
      ));

  }
}
