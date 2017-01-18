<?php
/**
 * @file
 * datigov_harvestlist.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function datigov_harvestlist_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'harvest_sources_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Harvest sources export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Harvest sources export';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Machine Name */
  $handler->display->display_options['fields']['field_dkan_harvest_machine_name']['id'] = 'field_dkan_harvest_machine_name';
  $handler->display->display_options['fields']['field_dkan_harvest_machine_name']['table'] = 'field_data_field_dkan_harvest_machine_name';
  $handler->display->display_options['fields']['field_dkan_harvest_machine_name']['field'] = 'field_dkan_harvest_machine_name';
  $handler->display->display_options['fields']['field_dkan_harvest_machine_name']['label'] = 'machine_name';
  $handler->display->display_options['fields']['field_dkan_harvest_machine_name']['click_sort_column'] = 'human';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_dkan_harveset_type']['id'] = 'field_dkan_harveset_type';
  $handler->display->display_options['fields']['field_dkan_harveset_type']['table'] = 'field_data_field_dkan_harveset_type';
  $handler->display->display_options['fields']['field_dkan_harveset_type']['field'] = 'field_dkan_harveset_type';
  $handler->display->display_options['fields']['field_dkan_harveset_type']['label'] = 'type';
  $handler->display->display_options['fields']['field_dkan_harveset_type']['type'] = 'list_key';
  /* Field: Content: Source URI */
  $handler->display->display_options['fields']['field_dkan_harvest_source_uri']['id'] = 'field_dkan_harvest_source_uri';
  $handler->display->display_options['fields']['field_dkan_harvest_source_uri']['table'] = 'field_data_field_dkan_harvest_source_uri';
  $handler->display->display_options['fields']['field_dkan_harvest_source_uri']['field'] = 'field_dkan_harvest_source_uri';
  $handler->display->display_options['fields']['field_dkan_harvest_source_uri']['label'] = 'uri';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'harvest_source' => 'harvest_source',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/harvest-sources-export';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'admin/harvest-sources-export/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['harvest_sources_export'] = $view;

  return $export;
}
