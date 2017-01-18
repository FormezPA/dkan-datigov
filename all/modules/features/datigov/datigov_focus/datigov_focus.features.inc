<?php
/**
 * @file
 * datigov_focus.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function datigov_focus_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function datigov_focus_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function datigov_focus_node_info() {
  $items = array(
    'focus_intro' => array(
      'name' => t('Focus Intro'),
      'base' => 'node_content',
      'description' => t('The introduction content to show on the Focus pages.'),
      'has_title' => '1',
      'title_label' => t('Titolo'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
