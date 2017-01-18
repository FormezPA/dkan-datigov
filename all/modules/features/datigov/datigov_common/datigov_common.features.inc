<?php
/**
 * @file
 * datigov_common.features.inc
 */

/**
 * Implements hook_default_search_api_index_alter().
 */
function datigov_common_default_search_api_index_alter(&$data) {
  if (isset($data['datasets'])) {
    $data['datasets']->options['data_alter_callbacks']['panelizer'] = array(
      'status' => 0,
      'weight' => 0,
      'settings' => array(),
    ); /* WAS: '' */
    $data['datasets']->options['data_alter_callbacks']['search_api_alter_add_viewed_entity']['status'] = 0; /* WAS: 1 */
    $data['datasets']->options['data_alter_callbacks']['search_api_alter_bundle_filter'] = array(
      'status' => 0,
      'weight' => -10,
      'settings' => array(
        'default' => 1,
        'bundles' => array(),
      ),
    ); /* WAS: '' */
    $data['datasets']->rdf_mapping = array(); /* WAS: '' */
    $data['datasets']->server = 'solr_localhost'; /* WAS: 'datasets' */
    unset($data['datasets']->options['fields']['search_api_viewed']);
  }
}

/**
 * Implements hook_default_search_api_server_alter().
 */
function datigov_common_default_search_api_server_alter(&$data) {
  if (isset($data['datasets'])) {
    $data['datasets']->rdf_mapping = array(); /* WAS: '' */
    unset($data['datasets']->options['indexes']['datasets']);
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function datigov_common_views_default_views_alter(&$data) {
  if (isset($data['dkan_harvest_dashboard'])) {
    $data['dkan_harvest_dashboard']->display['default']->display_options['pager']['options']['offset'] = 0; /* WAS: '' */
    $data['dkan_harvest_dashboard']->display['default']->display_options['pager']['type'] = 'none'; /* WAS: 'full' */
    unset($data['dkan_harvest_dashboard']->display['default']->display_options['pager']['options']['items_per_page']);
  }
}

/**
 * Implements hook_default_search_api_server().
 */
function datigov_common_default_search_api_server() {
  $items = array();
  $items['solr_localhost'] = entity_import('search_api_server', '{
    "name" : "Solr localhost",
    "machine_name" : "solr_localhost",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "localhost",
      "port" : "8983",
      "path" : "\\/solr\\/datigovit",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO",
      "log_query" : 0,
      "log_response" : 0
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
