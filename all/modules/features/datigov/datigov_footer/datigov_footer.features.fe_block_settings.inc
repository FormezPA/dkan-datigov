<?php
/**
 * @file
 * datigov_footer.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function datigov_footer_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-cataloghi-nazionali'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-cataloghi-nazionali',
    'module' => 'menu',
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
        'region' => 'footer_first',
        'status' => 1,
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

  $export['menu-menu-focus'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-focus',
    'module' => 'menu',
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
        'region' => 'footer_third',
        'status' => 1,
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

  $export['menu-menu-footer-logo'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-footer-logo',
    'module' => 'menu',
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

  $export['menu-menu-social-networks'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-social-networks',
    'module' => 'menu',
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
        'region' => 'footer_fourth',
        'status' => 1,
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

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
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
        'region' => 'footer_second',
        'status' => 1,
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
    'title' => 'dati.gov.it',
    'visibility' => 0,
  );

  return $export;
}
