<?php

/**
 * @file
 * Defines migrations for the datigov harvestlist sources.
 */

/**
 * Implements hook_migrate_api().
 */
function datigov_dkan_dcatapit_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'datigov_dkan_dcatapit' => array(
        'title' => t('DatiGov list of catalogs linked to the harvester'),
      ),
    ),
    'migrations' => array(
      'datigov_dkan_dcatapit_catalogs' => array(
        'class_name' => 'DatigovCatalogsContentMigration',
        'group_name' => 'datigov_dkan_dcatapit',
      ),
    ),
  );
  return $api;
}
