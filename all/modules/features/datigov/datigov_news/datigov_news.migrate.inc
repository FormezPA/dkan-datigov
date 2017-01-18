<?php

/**
 * @file
 * Defines migrations for the datigov news data.
 */

/**
 * Implements hook_migrate_api().
 */
function datigov_news_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'datigov_news' => array(
        'title' => t('DatiGov news migration'),
      ),
    ),
    'migrations' => array(
      'datigov_news_content' => array(
        'class_name' => 'DatigovNewsContentMigration',
        'group_name' => 'datigov_news',
      ),
    ),
  );
  return $api;
}
