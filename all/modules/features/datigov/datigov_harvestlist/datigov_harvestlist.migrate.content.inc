<?php
/**
 * @file
 * datigov_harvestlist.migrate.content.inc
 */

/**
 * Defines a dynamic migration to migrate harvest sources
 */
class DatigovHarvestContentMigration extends Migration {

  // Sets the destination ctype.
  private $destinationCtype = 'harvest_source';
  // Source file directory.
  private $feature = 'datigov_harvestlist';

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
        'uuid' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => TRUE,
      ),
      ), MigrateDestinationNode::getKeySchema()
    );

    $this->path = drupal_get_path('module', $this->feature) . '/data/harvest_source.csv';

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

    // Creation date.
    $this->addFieldMapping('uuid', 'uuid');
    $this->addFieldMapping('created', 'created');
    $this->addFieldMapping('changed', 'updated');

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('field_dkan_harvest_machine_name', 'machine_name');
    $this->addFieldMapping('field_dkan_harvest_machine_name:machine', 'machine_name');
    $this->addFieldMapping('field_dkan_harvest_source_uri', 'uri');
    $this->addFieldMapping('field_dkan_harveset_type', 'type');
    
    $this->addUnmigratedDestinations(array(
      'body',
      ));

  }
}
