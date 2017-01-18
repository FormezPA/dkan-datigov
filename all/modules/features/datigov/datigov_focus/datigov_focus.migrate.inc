<?php

/**
 * @file
 * Defines migrations for the datigov news data.
 */

/**
 * Implements hook_migrate_api().
 */
function datigov_focus_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'datigov_focus' => array(
        'title' => t('DatiGov focus migration'),
      ),
    ),
    'migrations' => array(
      'datigov_focus_tax' => array(
        'class_name' => 'DatigovFocusTaxMigration',
        'group_name' => 'datigov_focus',
      ),
      'datigov_focus_content' => array(
        'class_name' => 'DatigovFocusContentMigration',
        'group_name' => 'datigov_focus',
      ),
    ),
  );
  return $api;
}
