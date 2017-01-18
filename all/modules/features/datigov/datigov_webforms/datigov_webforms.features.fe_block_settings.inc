<?php
/**
 * @file
 * datigov_webforms.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function datigov_webforms_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['webform-client-block-2040'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'client-block-2040',
    'module' => 'webform',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'datigov' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'datigov',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
