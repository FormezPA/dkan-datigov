<?php
/**
 * @file
 * datigov_dkan_dcatapit.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function datigov_dkan_dcatapit_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function datigov_dkan_dcatapit_node_info() {
  $items = array(
    'catalog' => array(
      'name' => t('Catalogo'),
      'base' => 'node_content',
      'description' => t('Catalogo o fonte dati'),
      'has_title' => '1',
      'title_label' => t('Titolo del catalogo'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
