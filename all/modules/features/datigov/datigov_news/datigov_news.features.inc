<?php
/**
 * @file
 * datigov_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function datigov_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function datigov_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function datigov_news_node_info() {
  $items = array(
    'notizia' => array(
      'name' => t('Notizia'),
      'base' => 'node_content',
      'description' => t('Inserisci contenuto di tipo Notizia'),
      'has_title' => '1',
      'title_label' => t('Titolo'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
