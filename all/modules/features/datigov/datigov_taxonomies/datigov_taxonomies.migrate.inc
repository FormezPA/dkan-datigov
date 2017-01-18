<?php

/**
 * @file
 * Defines migrations for the datigov news data.
 */

/**
 * Implements hook_migrate_api().
 */
function datigov_taxonomies_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'datigov_taxonomies' => array(
        'title' => t('DatiGov taxonomies migration'),
      ),
    ),
    'migrations' => array(
      'datigov_taxonomies_topics' => array(
        'class_name' => 'DatigovTaxonomiesTaxTopicMigration',
        'group_name' => 'datigov_taxonomies',
      ),
      'datigov_taxonomies_frequency' => array(
        'class_name' => 'DatigovTaxonomiesTaxFrequencyMigration',
        'group_name' => 'datigov_taxonomies',
      ),
      'datigov_taxonomies_languages' => array(
        'class_name' => 'DatigovTaxonomiesTaxLanguageMigration',
        'group_name' => 'datigov_taxonomies',
      ),
      'datigov_taxonomies_license_types' => array(
        'class_name' => 'DatigovTaxonomiesTaxLicenseTypeMigration',
        'group_name' => 'datigov_taxonomies',
      ),
      'datigov_taxonomies_licenses' => array(
        'class_name' => 'DatigovTaxonomiesTaxLicensesMigration',
        'group_name' => 'datigov_taxonomies',
      ),
      
    ),
  );
  return $api;
}
