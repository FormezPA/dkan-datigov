<?php
/**
 * @file
 * datigov_news.migrate.content.inc
 */

/**
 * Defines a dynamic migration to migrate keywords by name.
 */
class DatigovFocusContentMigration extends Migration {

  // Sets the destination ctype.
  private $destinationCtype = 'focus_intro';
  // Source file directory.
  private $feature = 'datigov_focus';

  /**
   * Constructs the migration.
   */
  public function __construct($arguments = array()) {
    parent::__construct($arguments);

    $this->team = array(
      new MigrateTeamMember('M.Marcello Verona', 'marcelloverona@gmail.com', t('Implementor')),
    );

    $this->description = t('Import DatiGov focus contents from CSV file.');

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

    $this->path = drupal_get_path('module', $this->feature) . '/data/focus.csv';
    //$this->fileSourceDir = drupal_get_path('module', $this->feature) . '/data/files';

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
    $this->addFieldMapping('created', 'created');

    $this->addFieldMapping('title', 'titolo');
    $this->addFieldMapping('body', 'body');
    $this->addfieldMapping('body:format')->defaultValue('html');

  }
}
