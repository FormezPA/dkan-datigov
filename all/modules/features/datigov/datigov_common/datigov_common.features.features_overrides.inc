<?php
/**
 * @file
 * datigov_common.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function datigov_common_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: search_api_index
  $overrides["search_api_index.datasets.options|data_alter_callbacks|panelizer"] = array(
    'status' => 0,
    'weight' => 0,
    'settings' => array(),
  );
  $overrides["search_api_index.datasets.options|data_alter_callbacks|search_api_alter_add_viewed_entity|status"] = 0;
  $overrides["search_api_index.datasets.options|data_alter_callbacks|search_api_alter_bundle_filter"] = array(
    'status' => 0,
    'weight' => -10,
    'settings' => array(
      'default' => 1,
      'bundles' => array(),
    ),
  );
  $overrides["search_api_index.datasets.options|fields|search_api_viewed"]["DELETED"] = TRUE;
  $overrides["search_api_index.datasets.rdf_mapping"] = array();
  $overrides["search_api_index.datasets.server"] = 'solr_localhost';

  // Exported overrides for: search_api_server
  $overrides["search_api_server.datasets.options|indexes|datasets"]["DELETED"] = TRUE;
  $overrides["search_api_server.datasets.rdf_mapping"] = array();

  // Exported overrides for: views_view
  $overrides["views_view.dkan_harvest_dashboard.display|default|display_options|pager|options|items_per_page"]["DELETED"] = TRUE;
  $overrides["views_view.dkan_harvest_dashboard.display|default|display_options|pager|options|offset"] = 0;
  $overrides["views_view.dkan_harvest_dashboard.display|default|display_options|pager|type"] = 'none';

 return $overrides;
}
