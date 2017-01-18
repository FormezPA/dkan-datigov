<?php
/**
 * @file
 * datigov_counters.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function datigov_counters_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'counters_view';
  $view->description = 'Provides a launch sentence with the counters of all available resources.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Counters view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Referenced resource */
  $handler->display->display_options['relationships']['field_resources_target_id']['id'] = 'field_resources_target_id';
  $handler->display->display_options['relationships']['field_resources_target_id']['table'] = 'field_data_field_resources';
  $handler->display->display_options['relationships']['field_resources_target_id']['field'] = 'field_resources_target_id';
  $handler->display->display_options['relationships']['field_resources_target_id']['ui_name'] = 'Referenced resource';
  $handler->display->display_options['relationships']['field_resources_target_id']['label'] = 'Referenced resource';
  /* Relationship: Referenced organization */
  $handler->display->display_options['relationships']['field_organization_ref_target_id']['id'] = 'field_organization_ref_target_id';
  $handler->display->display_options['relationships']['field_organization_ref_target_id']['table'] = 'field_data_field_organization_ref';
  $handler->display->display_options['relationships']['field_organization_ref_target_id']['field'] = 'field_organization_ref_target_id';
  $handler->display->display_options['relationships']['field_organization_ref_target_id']['ui_name'] = 'Referenced organization';
  $handler->display->display_options['relationships']['field_organization_ref_target_id']['label'] = 'Referenced organization';
  /* Campo: COUNT(DISTINCT Organization) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_organization_ref_target_id';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Organization';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = ' ';
  /* Campo: COUNT(DISTINCT Dataset) */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid_1']['ui_name'] = 'Dataset';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['separator'] = ' ';
  /* Campo: COUNT(DISTINCT Resource) */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['relationship'] = 'field_resources_target_id';
  $handler->display->display_options['fields']['nid_2']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid_2']['ui_name'] = 'Resource';
  $handler->display->display_options['fields']['nid_2']['label'] = '';
  $handler->display->display_options['fields']['nid_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_2']['separator'] = ' ';
  /* Campo: SUM(Total views) */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['group_type'] = 'sum';
  $handler->display->display_options['fields']['totalcount']['ui_name'] = 'Total views';
  $handler->display->display_options['fields']['totalcount']['label'] = '';
  $handler->display->display_options['fields']['totalcount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['totalcount']['element_label_colon'] = FALSE;
  /* Campo: Users count */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Users count';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view']['element_type'] = '0';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['view']['view'] = 'users_count_view';
  /* Campo: Geo Dati count */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['ui_name'] = 'Geo Dati count';
  $handler->display->display_options['fields']['view_1']['label'] = '';
  $handler->display->display_options['fields']['view_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_1']['element_type'] = '0';
  $handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['view_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_1']['view'] = 'counters_by_classifications_view';
  $handler->display->display_options['fields']['view_1']['arguments'] = 'geo-dati';
  /* Campo: Data Statistici count */
  $handler->display->display_options['fields']['view_2']['id'] = 'view_2';
  $handler->display->display_options['fields']['view_2']['table'] = 'views';
  $handler->display->display_options['fields']['view_2']['field'] = 'view';
  $handler->display->display_options['fields']['view_2']['ui_name'] = 'Data Statistici count';
  $handler->display->display_options['fields']['view_2']['label'] = '';
  $handler->display->display_options['fields']['view_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_2']['element_type'] = '0';
  $handler->display->display_options['fields']['view_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_2']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['view_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_2']['view'] = 'counters_by_classifications_view';
  $handler->display->display_options['fields']['view_2']['arguments'] = 'dati-statistici';
  /* Campo: Counters sentence */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Counters sentence';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/dataset">[nid_1] dataset</a> prodotti da [nid] amministrazioni tra cui <a href="/geo-dati">[view_1] Dati Geografici</a> e <a href="/dati-statistici">[view_2] Dati Statistici</a>.';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Filter criterion: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );

  /* Display: Counters launch content pane */
  $handler = $view->new_display('panel_pane', 'Counters launch content pane', 'counters_launch_content_pane');
  $handler->display->display_options['display_description'] = 'Displays a sentence providing some numbers about the web site.';
  $translatables['counters_view'] = array(
    t('Master'),
    t('more'),
    t('Applica'),
    t('Ripristina'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Referenced resource'),
    t('Referenced organization'),
    t('.'),
    t(','),
    t('<a href="/dataset">[nid_1] dataset</a> prodotti da [nid] amministrazioni tra cui <a href="/geo-dati">[view_1] Dati Geografici</a> e <a href="/dati-statistici">[view_2] Dati Statistici</a>.'),
    t('Counters launch content pane'),
    t('Displays a sentence providing some numbers about the web site.'),
    t('View panes'),
  );
  $export['counters_view'] = $view;

  $view = new view();
  $view->name = 'users_count_view';
  $view->description = 'Provides a users count view.';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Users count view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Campo: COUNT(DISTINCT Users) */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['uid']['ui_name'] = 'Users';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['element_type'] = '0';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['uid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uid']['separator'] = ' ';
  /* Filter criterion: Utente: Attivo */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $translatables['users_count_view'] = array(
    t('Master'),
    t('more'),
    t('Applica'),
    t('Ripristina'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
  );
  $export['users_count_view'] = $view;

  return $export;
}
