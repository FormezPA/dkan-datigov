<?php
/**
 * @file
 * datigov_taxonomies.migrate.tax.inc
 */

/**
 * Defines a dynamic migration to migrate keywords by name.
 */
class DatigovTaxonomiesTaxTopicMigration extends Migration {

  // Sets the destination vocabulary.
  private $destinationVocabulary = 'dkan_topics';

  /**
   * Constructs the migration.
   */
  public function __construct($arguments = array()) {
    parent::__construct($arguments);

    $this->team = array(
      new MigrateTeamMember('M.Marcello Verona', 'marcelloverona@gmail.com',
        t('Implementor')),
    );

    $this->description = t('Import DatiGov topics from CSV file.');

    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'term' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ), MigrateDestinationTerm::getKeySchema()
    );

    $this->path = drupal_get_path('module', 'datigov_taxonomies') 
      . '/data/' . $this->destinationVocabulary . '.csv';

    $this->source = new MigrateSourceCSV(
      $this->path,
      array(),
      array(
        'header_rows' => 1,
        'delimiter' => ',',
        'enclosure' => '"',
        'embedded_newlines' => TRUE,
      ));

    // Creates a destination object that receives the data.
    $this->destination = new MigrateDestinationTerm($this->destinationVocabulary);

    // Defines mapped source and destination fields.
    $this->addFieldMapping('name', 'term');
    $this->addFieldMapping('description', 'description');
    $this->addFieldMapping('field_authority_code', 'authority_code');
    $this->addFieldMapping('weight', 'weight');
    $this->addFieldMapping('field_sinonimi_topic', 'sinonimi');
    $this->addFieldMapping('field_icon_type')->defaultValue('font');
    $this->addFieldMapping('field_topic_icon', 'topic_icon');

    // Defines unmapped destination fields.
    $this->addUnmigratedDestinations(array());
  }

}



/**
 * Defines a dynamic migration to migrate keywords by name.
 */
class DatigovTaxonomiesTaxFrequencyMigration extends Migration {

  // Sets the destination vocabulary.
  private $destinationVocabulary = 'frequency';

  /**
   * Constructs the migration.
   */
  public function __construct($arguments = array()) {
    parent::__construct($arguments);

    $this->team = array(
      new MigrateTeamMember('M.Marcello Verona', 'marcelloverona@gmail.com',
        t('Implementor')),
    );

    $this->description = t('Import DatiGov frequency from CSV file.');

    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'term' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ), MigrateDestinationTerm::getKeySchema()
    );

    $this->path = drupal_get_path('module', 'datigov_taxonomies') 
      . '/data/' . $this->destinationVocabulary . '.csv';

    $this->source = new MigrateSourceCSV(
      $this->path,
      array(),
      array(
        'header_rows' => 1,
        'delimiter' => ',',
        'enclosure' => '"',
        'embedded_newlines' => TRUE,
      ));

    // Creates a destination object that receives the data.
    $this->destination = new MigrateDestinationTerm($this->destinationVocabulary);

    // Defines mapped source and destination fields.
    $this->addFieldMapping('name', 'term');
    $this->addFieldMapping('description', 'description');
    $this->addFieldMapping('field_authority_code', 'authority_code');
    $this->addFieldMapping('weight', 'weight');
    $this->addFieldMapping('field_sinonimi_topic', 'sinonimi');

    // Defines unmapped destination fields.
    $this->addUnmigratedDestinations(array());
  }

}


/**
 * Defines a dynamic migration to migrate keywords by name.
 */
class DatigovTaxonomiesTaxLanguageMigration extends Migration {

  // Sets the destination vocabulary.
  private $destinationVocabulary = 'languages';

  /**
   * Constructs the migration.
   */
  public function __construct($arguments = array()) {
    parent::__construct($arguments);

    $this->team = array(
      new MigrateTeamMember('M.Marcello Verona', 'marcelloverona@gmail.com',
        t('Implementor')),
    );

    $this->description = t('Import DatiGov languages from CSV file.');

    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'term' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ), MigrateDestinationTerm::getKeySchema()
    );

    $this->path = drupal_get_path('module', 'datigov_taxonomies') 
      . '/data/' . $this->destinationVocabulary . '.csv';

    $this->source = new MigrateSourceCSV(
      $this->path,
      array(),
      array(
        'header_rows' => 1,
        'delimiter' => ',',
        'enclosure' => '"',
        'embedded_newlines' => TRUE,
      ));

    // Creates a destination object that receives the data.
    $this->destination = new MigrateDestinationTerm($this->destinationVocabulary);

    // Defines mapped source and destination fields.
    $this->addFieldMapping('name', 'term');
    $this->addFieldMapping('description', 'description');
    $this->addFieldMapping('field_lang_mdr_authority_code', 'authority_code');
    $this->addFieldMapping('field_language_uri', 'uri');
    $this->addFieldMapping('field_sinonimi_topic', 'sinonimi');
    $this->addFieldMapping('weight', 'weight');

    // Defines unmapped destination fields.
    $this->addUnmigratedDestinations(array());
  }

}

/**
 * Defines a dynamic migration to migrate keywords by name.
 */
class DatigovTaxonomiesTaxLicensesMigration extends Migration {

  // Sets the destination vocabulary.
  private $destinationVocabulary = 'licenses';

  /**
   * Constructs the migration.
   */
  public function __construct($arguments = array()) {
    parent::__construct($arguments);

    $this->team = array(
      new MigrateTeamMember('M.Marcello Verona', 'marcelloverona@gmail.com',
        t('Implementor')),
    );

    $this->description = t('Import DatiGov licenses from CSV file.');

    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'term' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ), MigrateDestinationTerm::getKeySchema()
    );

    $this->path = drupal_get_path('module', 'datigov_taxonomies') 
      . '/data/' . $this->destinationVocabulary . '.csv';

    $this->source = new MigrateSourceCSV(
      $this->path,
      array(),
      array(
        'header_rows' => 1,
        'delimiter' => ',',
        'enclosure' => '"',
        'embedded_newlines' => TRUE,
      ));

    // Creates a destination object that receives the data.
    $this->destination = new MigrateDestinationTerm($this->destinationVocabulary);

    // Defines mapped source and destination fields.
    $this->addFieldMapping('name', 'term');
    $this->addFieldMapping('description', 'description');
    $this->addFieldMapping('field_license_uri', 'license_uri');
    $this->addFieldMapping('field_license_abbr', 'license_id');
    $this->addFieldMapping('field_sinonimi_topic', 'sinonimi');
    $this->addFieldMapping('field_license_type', 'license_type');
    $this->addFieldMapping('weight', 'weight');

    // Defines unmapped destination fields.
    $this->addUnmigratedDestinations(array());
  }

}


/**
 * Defines a dynamic migration to migrate keywords by name.
 */
class DatigovTaxonomiesTaxLicenseTypeMigration extends Migration {

  // Sets the destination vocabulary.
  private $destinationVocabulary = 'license_type';

  /**
   * Constructs the migration.
   */
  public function __construct($arguments = array()) {
    parent::__construct($arguments);

    $this->team = array(
      new MigrateTeamMember('M.Marcello Verona', 'marcelloverona@gmail.com',
        t('Implementor')),
    );

    $this->description = t('Import DatiGov licenses types from CSV file.');

    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'term' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ), MigrateDestinationTerm::getKeySchema()
    );

    $this->path = drupal_get_path('module', 'datigov_taxonomies') 
      . '/data/' . $this->destinationVocabulary . '.csv';

    $this->source = new MigrateSourceCSV(
      $this->path,
      array(),
      array(
        'header_rows' => 1,
        'delimiter' => ',',
        'enclosure' => '"',
        'embedded_newlines' => TRUE,
      ));

    // Creates a destination object that receives the data.
    $this->destination = new MigrateDestinationTerm($this->destinationVocabulary);

    // Defines mapped source and destination fields.
    $this->addFieldMapping('name', 'term');
    $this->addFieldMapping('field_license_type_uri', 'license_uri');
    $this->addFieldMapping('field_license_family', 'license_family');
    $this->addFieldMapping('weight', 'weight');

    // Defines unmapped destination fields.
    $this->addUnmigratedDestinations(array(
      'description'
      ));
  }

}

