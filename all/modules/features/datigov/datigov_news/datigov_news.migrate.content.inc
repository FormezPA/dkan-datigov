<?php
/**
 * @file
 * datigov_news.migrate.content.inc
 */

/**
 * Defines a dynamic migration to migrate keywords by name.
 */
class DatigovNewsContentMigration extends Migration {

  // Sets the destination ctype.
  private $destinationCtype = 'notizia';

  // Source file directory.
  private $fileSourceDir;
  private $feature = 'datigov_news';

  /**
   * Constructs the migration.
   */
  public function __construct($arguments = array()) {
    parent::__construct($arguments);

    $this->team = array(
      new MigrateTeamMember('M.Marcello Verona', 'marcelloverona@gmail.com', t('Implementor')),
    );

    $this->description = t('Import DatiGov news contents from CSV file.');

    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'nid' => array(
        'not null'    => TRUE,
          'type'        => 'int',
        ),
      ), MigrateDestinationNode::getKeySchema()
    );

    $this->path = drupal_get_path('module', $this->feature) . '/data/news.csv';

    $this->fileSourceDir = drupal_get_path('module', $this->feature) . '/data/files';

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

    // Resouce File.
    $this->addFieldMapping('field_nn_image', 'immagine');
    $this->addFieldMapping('field_nn_image:source_dir')->defaultValue($this->fileSourceDir);

    // Resouce File.
    $this->addFieldMapping('field_allegati', 'allegati')->separator('|');
    $this->addFieldMapping('field_allegati:source_dir')->defaultValue($this->fileSourceDir);
  }

  /**
   * PrepareRow.
   */
  public function prepareRow($row) {

    if (empty($row->image) || strtolower($row->image) == 'null') {
      unset($row->image);
    }
    if (empty($row->attach) || strtolower($row->attach) == 'null') {
      unset($row->attach);
    }
  }

}
