<?php

/**
 * @file
 * Defines migrations for the datigov harvestlist sources.
 */

/**
 * Implements hook_migrate_api().
 */
function datigov_harvestlist_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'datigov_harvestlist' => array(
        'title' => t('DatiGov list of source for the harvester'),
      ),
    ),
    'migrations' => array(
      'datigov_harvestlist_sources' => array(
        'class_name' => 'DatigovHarvestContentMigration',
        'group_name' => 'datigov_harvestlist',
      ),
    ),
  );
  return $api;
}
