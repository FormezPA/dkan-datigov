<?php
/**
 * @file
 * Eiponaha_ctracker_tax.migrate.tax.inc.
 */

/**
 * Defines a dynamic migration to migrate AG by name.
 */
class DatigovFocusTaxMigration extends Migration {

  // Sets the destination vocabulary.
  private $destinationVocabulary = 'focus';

  /**
   * Constructs the migration.
   */
  public function __construct($arguments = array()) {
    parent::__construct($arguments);

    $this->team = array(
      new MigrateTeamMember('M.Marcello Verona', 'mverona@open-evidence.com',
        t('Implementor')),
    );

    $this->description = t('Import Datigov Focus taxonomy from CSV file.');

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

    $this->path = drupal_get_path('module', 'datigov_focus') . '/data/tax_focus.csv';

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
    $this->addFieldMapping('weight', 'weight');

    // Defines unmapped destination fields.
    $this->addUnmigratedDestinations(array());
  }

}

/**
 * Defines a dynamic migration to migrate AG by name.
 */
class EiponahaOrganisationFieldMigration extends Migration {

  // Sets the destination vocabulary.
  private $destinationVocabulary = 'organisation_field';

  /**
   * Constructs the migration.
   */
  public function __construct($arguments = array()) {
    parent::__construct($arguments);

    $this->team = array(
      new MigrateTeamMember('M.Marcello Verona', 'mverona@open-evidence.com',
        t('Implementor')),
    );

    $this->description = t('Import EIPonAHA Organisational Field migration from CSV file.');

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

    $this->path = drupal_get_path('module', 'eiponaha_ctracker_tax') . '/data/organisation_field.csv';

    $this->source = new MigrateSourceCSV(
      $this->path,
      array(),
      array(
        'header_rows' => 1,
        'delimiter' => ',',
        'enclosure' => '"',
      ));

    // Creates a destination object that receives the data.
    $this->destination = new MigrateDestinationTerm($this->destinationVocabulary);

    // Defines mapped source and destination fields.
    $this->addFieldMapping('name', 'term');
    $this->addFieldMapping('weight', 'weight');

    // Defines unmapped destination fields.
    $this->addUnmigratedDestinations(array());
  }

}

/**
 * Defines a dynamic migration to migrate AG by name.
 */
class EiponahaTypeActivityMigration extends Migration {

  // Sets the destination vocabulary.
  private $destinationVocabulary = 'type_of_activity';

  /**
   * Constructs the migration.
   */
  public function __construct($arguments = array()) {
    parent::__construct($arguments);

    $this->team = array(
      new MigrateTeamMember('M.Marcello Verona', 'mverona@open-evidence.com',
        t('Implementor')),
    );

    $this->description = t('Import EIPonAHA Type of Activity migration from CSV file.');

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

    $this->path = drupal_get_path('module', 'eiponaha_ctracker_tax') . '/data/type_of_activity.csv';

    $this->source = new MigrateSourceCSV(
      $this->path,
      array(),
      array(
        'header_rows' => 1,
        'delimiter' => ',',
        'enclosure' => '"',
      ));

    // Creates a destination object that receives the data.
    $this->destination = new MigrateDestinationTerm($this->destinationVocabulary);

    // Defines mapped source and destination fields.
    $this->addFieldMapping('name', 'term');
    $this->addFieldMapping('weight', 'weight');

    // Defines unmapped destination fields.
    $this->addUnmigratedDestinations(array());
  }

}

/**
 * Defines a dynamic migration to migrate AG by name.
 */
class EiponahaCategoryResultsMigration extends Migration {

  // Sets the destination vocabulary.
  private $destinationVocabulary = 'category_of_results';

  /**
   * Constructs the migration.
   */
  public function __construct($arguments = array()) {
    parent::__construct($arguments);

    $this->team = array(
      new MigrateTeamMember('M.Marcello Verona', 'mverona@open-evidence.com',
        t('Implementor')),
    );

    $this->description = t('Import EIPonAHA Category of Results migration from CSV file.');

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

    $this->path = drupal_get_path('module', 'eiponaha_ctracker_tax') . '/data/category_of_results.csv';

    $this->source = new MigrateSourceCSV(
      $this->path,
      array(),
      array(
        'header_rows' => 1,
        'delimiter' => ',',
        'enclosure' => '"',
      ));

    // Creates a destination object that receives the data.
    $this->destination = new MigrateDestinationTerm($this->destinationVocabulary);

    // Defines mapped source and destination fields.
    $this->addFieldMapping('name', 'term');
    $this->addFieldMapping('weight', 'weight');

    // Defines unmapped destination fields.
    $this->addUnmigratedDestinations(array());
  }

}

/**
 * Defines a dynamic migration to migrate AG by name.
 */
class EiponahaOrganisationalScopeMigration extends Migration {

  // Sets the destination vocabulary.
  private $destinationVocabulary = 'organisational_scope';

  /**
   * Constructs the migration.
   */
  public function __construct($arguments = array()) {
    parent::__construct($arguments);

    $this->team = array(
      new MigrateTeamMember('M.Marcello Verona', 'mverona@open-evidence.com',
        t('Implementor')),
    );

    $this->description = t('Import EIPonAHA Organisational Scope migration from CSV file.');

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

    $this->path = drupal_get_path('module', 'eiponaha_ctracker_tax') . '/data/organisational_scope.csv';

    $this->source = new MigrateSourceCSV(
      $this->path,
      array(),
      array(
        'header_rows' => 1,
        'delimiter' => ',',
        'enclosure' => '"',
      ));

    // Creates a destination object that receives the data.
    $this->destination = new MigrateDestinationTerm($this->destinationVocabulary);

    // Defines mapped source and destination fields.
    $this->addFieldMapping('name', 'term');

    // Defines unmapped destination fields.
    $this->addUnmigratedDestinations(array());
  }

}

/**
 * Defines a dynamic migration to migrate AG by name.
 */
class EiponahaTypeOrganisationMigration extends Migration {

  // Sets the destination vocabulary.
  private $destinationVocabulary = 'type_of_organisation';

  /**
   * Constructs the migration.
   */
  public function __construct($arguments = array()) {
    parent::__construct($arguments);

    $this->team = array(
      new MigrateTeamMember('M.Marcello Verona', 'mverona@open-evidence.com',
        t('Implementor')),
    );

    $this->description = t('Import EIPonAHA Type of Organisation migration from CSV file.');

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

    $this->path = drupal_get_path('module', 'eiponaha_ctracker_tax') . '/data/type_of_organisation.csv';

    $this->source = new MigrateSourceCSV(
      $this->path,
      array(),
      array(
        'header_rows' => 1,
        'delimiter' => ',',
        'enclosure' => '"',
      ));

    // Creates a destination object that receives the data.
    $this->destination = new MigrateDestinationTerm($this->destinationVocabulary);

    // Defines mapped source and destination fields.
    $this->addFieldMapping('name', 'term');
    $this->addFieldMapping('weight', 'weight');

    // Defines unmapped destination fields.
    $this->addUnmigratedDestinations(array());
  }

}

/**
 * Defines a dynamic migration to migrate AG by name.
 */
class EiponahaObjectivesMigration extends Migration {

  // Sets the destination vocabulary.
  private $destinationVocabulary = 'objectives';

  /**
   * Constructs the migration.
   */
  public function __construct($arguments = array()) {
    parent::__construct($arguments);

    $this->team = array(
      new MigrateTeamMember('M.Marcello Verona', 'mverona@open-evidence.com',
        t('Implementor')),
    );

    $this->description = t('Import EIPonAHA Objectives migration from CSV file.');

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

    $this->path = drupal_get_path('module', 'eiponaha_ctracker_tax') . '/data/objectives.csv';

    $this->source = new MigrateSourceCSV(
      $this->path,
      array(),
      array(
        'header_rows' => 1,
        'delimiter' => ',',
        'enclosure' => '"',
      ));

    // Creates a destination object that receives the data.
    $this->destination = new MigrateDestinationTerm($this->destinationVocabulary);

    // Defines mapped source and destination fields.
    $this->addFieldMapping('name', 'term');

    // Defines unmapped destination fields.
    $this->addUnmigratedDestinations(array());
  }

}

/**
 * Defines a dynamic migration to migrate AG by name.
 */
class EiponahaTripleWinMigration extends Migration {

  // Sets the destination vocabulary.
  private $destinationVocabulary = 'triple_win';

  /**
   * Constructs the migration.
   */
  public function __construct($arguments = array()) {
    parent::__construct($arguments);

    $this->team = array(
      new MigrateTeamMember('M.Marcello Verona', 'mverona@open-evidence.com',
        t('Implementor')),
    );

    $this->description = t('Import EIPonAHA Triple Win migration from CSV file.');

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

    $this->path = drupal_get_path('module', 'eiponaha_ctracker_tax') . '/data/triple_win.csv';

    $this->source = new MigrateSourceCSV(
      $this->path,
      array(),
      array(
        'header_rows' => 1,
        'delimiter' => ',',
        'enclosure' => '"',
      ));

    // Creates a destination object that receives the data.
    $this->destination = new MigrateDestinationTerm($this->destinationVocabulary);

    // Defines mapped source and destination fields.
    $this->addFieldMapping('name', 'term');
    $this->addFieldMapping('weight', 'weight');

    // Defines unmapped destination fields.
    $this->addUnmigratedDestinations(array());
  }

}
