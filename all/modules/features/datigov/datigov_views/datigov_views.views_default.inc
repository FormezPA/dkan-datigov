<?php
/**
 * @file
 * datigov_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function datigov_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'dataset_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Dataset';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Campo: Contenuto: Titolo del dataset */
  $handler->display->display_options['fields']['field_long_title']['id'] = 'field_long_title';
  $handler->display->display_options['fields']['field_long_title']['table'] = 'field_data_field_long_title';
  $handler->display->display_options['fields']['field_long_title']['field'] = 'field_long_title';
  $handler->display->display_options['fields']['field_long_title']['label'] = '';
  $handler->display->display_options['fields']['field_long_title']['element_label_colon'] = FALSE;
  /* Campo: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Livello di apertura del dataset  ';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<span class="stars"></span><span class="stars"></span><span class="stars"></span><span class="stars"></span><span class="stars"></span>';
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'stars-wrapper';
  /* Campo: Contenuto: License */
  $handler->display->display_options['fields']['field_license']['id'] = 'field_license';
  $handler->display->display_options['fields']['field_license']['table'] = 'field_data_field_license';
  $handler->display->display_options['fields']['field_license']['field'] = 'field_license';
  $handler->display->display_options['fields']['field_license']['label'] = 'Licenza';
  $handler->display->display_options['fields']['field_license']['element_wrapper_class'] = 'license-wrapper';
  /* Campo: Contenuto: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Campo: Contenuto: Themes */
  $handler->display->display_options['fields']['field_themes']['id'] = 'field_themes';
  $handler->display->display_options['fields']['field_themes']['table'] = 'field_data_field_themes';
  $handler->display->display_options['fields']['field_themes']['field'] = 'field_themes';
  $handler->display->display_options['fields']['field_themes']['label'] = '';
  $handler->display->display_options['fields']['field_themes']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_themes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_themes']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_themes']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_themes']['multi_type'] = 'ul';
  /* Campo: Contenuto: Genres */
  $handler->display->display_options['fields']['field_genres']['id'] = 'field_genres';
  $handler->display->display_options['fields']['field_genres']['table'] = 'field_data_field_genres';
  $handler->display->display_options['fields']['field_genres']['field'] = 'field_genres';
  $handler->display->display_options['fields']['field_genres']['label'] = '';
  $handler->display->display_options['fields']['field_genres']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_genres']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_genres']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_genres']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_genres']['multi_type'] = 'ul';
  /* Campo: Contenuto: Focus */
  $handler->display->display_options['fields']['field_focus']['id'] = 'field_focus';
  $handler->display->display_options['fields']['field_focus']['table'] = 'field_data_field_focus';
  $handler->display->display_options['fields']['field_focus']['field'] = 'field_focus';
  $handler->display->display_options['fields']['field_focus']['label'] = '';
  $handler->display->display_options['fields']['field_focus']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_focus']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_focus']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_focus']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_focus']['multi_type'] = 'ul';
  /* Campo: Themes, Genres, Focus */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Themes, Genres, Focus';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="themes">[field_themes]</span>
<span class="genres">[field_genres]</span>
<span class="focus">[field_focus]</span>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'classifications';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['nothing']['element_label_class'] = 'span-wrapper';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'classifications-wrapper';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Campo: Autore */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['ui_name'] = 'Autore';
  $handler->display->display_options['fields']['field_author']['label'] = 'Autore';
  $handler->display->display_options['fields']['field_author']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_author']['hide_alter_empty'] = FALSE;
  /* Campo: Contenuto: Geographic Type */
  $handler->display->display_options['fields']['field_geographic_type']['id'] = 'field_geographic_type';
  $handler->display->display_options['fields']['field_geographic_type']['table'] = 'field_data_field_geographic_type';
  $handler->display->display_options['fields']['field_geographic_type']['field'] = 'field_geographic_type';
  $handler->display->display_options['fields']['field_geographic_type']['label'] = '';
  $handler->display->display_options['fields']['field_geographic_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_geographic_type']['alter']['text'] = '<div class="ribbon ribbon-[field_geographic_type]">
    <div class="banner">
        <div class="text">[field_geographic_type]</div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_geographic_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geographic_type']['type'] = 'taxonomy_term_reference_plain';
  /* Campo: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="clear"></div>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Sort criterion: Contenuto: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Contenuto: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Titolo del dataset */
  $handler->display->display_options['fields']['field_long_title']['id'] = 'field_long_title';
  $handler->display->display_options['fields']['field_long_title']['table'] = 'field_data_field_long_title';
  $handler->display->display_options['fields']['field_long_title']['field'] = 'field_long_title';
  $handler->display->display_options['fields']['field_long_title']['label'] = '';
  $handler->display->display_options['fields']['field_long_title']['element_label_colon'] = FALSE;
  /* Campo: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Livello di apertura del dataset  ';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<span class="stars"></span><span class="stars"></span><span class="stars"></span><span class="stars"></span><span class="stars"></span>';
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'stars-wrapper';
  /* Campo: Contenuto: License */
  $handler->display->display_options['fields']['field_license']['id'] = 'field_license';
  $handler->display->display_options['fields']['field_license']['table'] = 'field_data_field_license';
  $handler->display->display_options['fields']['field_license']['field'] = 'field_license';
  $handler->display->display_options['fields']['field_license']['label'] = 'Licenza--';
  $handler->display->display_options['fields']['field_license']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_license']['element_wrapper_class'] = 'license-wrapper';
  /* Campo: Contenuto: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Campo: Contenuto: Themes */
  $handler->display->display_options['fields']['field_themes']['id'] = 'field_themes';
  $handler->display->display_options['fields']['field_themes']['table'] = 'field_data_field_themes';
  $handler->display->display_options['fields']['field_themes']['field'] = 'field_themes';
  $handler->display->display_options['fields']['field_themes']['label'] = '';
  $handler->display->display_options['fields']['field_themes']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_themes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_themes']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_themes']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_themes']['multi_type'] = 'ul';
  /* Campo: Contenuto: Genres */
  $handler->display->display_options['fields']['field_genres']['id'] = 'field_genres';
  $handler->display->display_options['fields']['field_genres']['table'] = 'field_data_field_genres';
  $handler->display->display_options['fields']['field_genres']['field'] = 'field_genres';
  $handler->display->display_options['fields']['field_genres']['label'] = '';
  $handler->display->display_options['fields']['field_genres']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_genres']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_genres']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_genres']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_genres']['multi_type'] = 'ul';
  /* Campo: Contenuto: Focus */
  $handler->display->display_options['fields']['field_focus']['id'] = 'field_focus';
  $handler->display->display_options['fields']['field_focus']['table'] = 'field_data_field_focus';
  $handler->display->display_options['fields']['field_focus']['field'] = 'field_focus';
  $handler->display->display_options['fields']['field_focus']['label'] = '';
  $handler->display->display_options['fields']['field_focus']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_focus']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_focus']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_focus']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_focus']['multi_type'] = 'ul';
  /* Campo: Themes, Genres, Focus */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Themes, Genres, Focus';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="themes">[field_themes]</span>
<span class="genres">[field_genres]</span>
<span class="focus">[field_focus]</span>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'classifications';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['nothing']['element_label_class'] = 'span-wrapper';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'classifications-wrapper';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Campo: Autore */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['ui_name'] = 'Autore';
  $handler->display->display_options['fields']['field_author']['label'] = 'Autore';
  $handler->display->display_options['fields']['field_author']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_author']['hide_alter_empty'] = FALSE;
  /* Campo: Contenuto: Geographic Type */
  $handler->display->display_options['fields']['field_geographic_type']['id'] = 'field_geographic_type';
  $handler->display->display_options['fields']['field_geographic_type']['table'] = 'field_data_field_geographic_type';
  $handler->display->display_options['fields']['field_geographic_type']['field'] = 'field_geographic_type';
  $handler->display->display_options['fields']['field_geographic_type']['label'] = '';
  $handler->display->display_options['fields']['field_geographic_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_geographic_type']['alter']['text'] = '<div class="ribbon ribbon-[field_geographic_type]">
    <div class="banner">
        <div class="text">[field_geographic_type]</div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_geographic_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geographic_type']['type'] = 'taxonomy_term_reference_plain';
  /* Campo: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="clear"></div>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Campo: Contenuto: Temi */
  $handler->display->display_options['fields']['field_data_themes']['id'] = 'field_data_themes';
  $handler->display->display_options['fields']['field_data_themes']['table'] = 'field_data_field_data_themes';
  $handler->display->display_options['fields']['field_data_themes']['field'] = 'field_data_themes';
  $handler->display->display_options['fields']['field_data_themes']['delta_offset'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'panel',
      'context' => 'entity:file.basename',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $translatables['dataset_view'] = array(
    t('Master'),
    t('more'),
    t('Applica'),
    t('Ripristina'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Livello di apertura del dataset  '),
    t('<span class="stars"></span><span class="stars"></span><span class="stars"></span><span class="stars"></span><span class="stars"></span>'),
    t('Licenza'),
    t('<span class="themes">[field_themes]</span>
<span class="genres">[field_genres]</span>
<span class="focus">[field_focus]</span>'),
    t('Autore'),
    t('<div class="ribbon ribbon-[field_geographic_type]">
    <div class="banner">
        <div class="text">[field_geographic_type]</div>
    </div>
</div>'),
    t('<div class="clear"></div>'),
    t('Tutti'),
    t('Content pane'),
    t('Licenza--'),
    t('Temi'),
    t('View panes'),
  );
  $export['dataset_view'] = $view;

  $view = new view();
  $view->name = 'resources';
  $view->description = 'The resources bound to a dataset (to display for example in the dataset page).';
  $view->tag = 'dataset, resource';
  $view->base_table = 'node';
  $view->human_name = 'Resources view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
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
  /* No results behavior: Global: Messages */
  $handler->display->display_options['empty']['messages']['id'] = 'messages';
  $handler->display->display_options['empty']['messages']['table'] = 'views';
  $handler->display->display_options['empty']['messages']['field'] = 'messages';
  $handler->display->display_options['empty']['messages']['label'] = 'Non sono disponibili risorse per questo dataset.';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_resources_target_id']['id'] = 'field_resources_target_id';
  $handler->display->display_options['relationships']['field_resources_target_id']['table'] = 'field_data_field_resources';
  $handler->display->display_options['relationships']['field_resources_target_id']['field'] = 'field_resources_target_id';
  $handler->display->display_options['relationships']['field_resources_target_id']['label'] = 'Referenced Resource';
  $handler->display->display_options['relationships']['field_resources_target_id']['required'] = TRUE;
  /* Campo: Contenuto: Format */
  $handler->display->display_options['fields']['field_format']['id'] = 'field_format';
  $handler->display->display_options['fields']['field_format']['table'] = 'field_data_field_format';
  $handler->display->display_options['fields']['field_format']['field'] = 'field_format';
  $handler->display->display_options['fields']['field_format']['relationship'] = 'field_resources_target_id';
  $handler->display->display_options['fields']['field_format']['label'] = '';
  $handler->display->display_options['fields']['field_format']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_format']['alter']['text'] = '<div>[field_format]</div>';
  $handler->display->display_options['fields']['field_format']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_format']['element_class'] = '[field_format]';
  $handler->display->display_options['fields']['field_format']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_format']['type'] = 'taxonomy_term_reference_plain';
  /* Campo: Contenuto: Link File */
  $handler->display->display_options['fields']['field_link_remote_file']['id'] = 'field_link_remote_file';
  $handler->display->display_options['fields']['field_link_remote_file']['table'] = 'field_data_field_link_remote_file';
  $handler->display->display_options['fields']['field_link_remote_file']['field'] = 'field_link_remote_file';
  $handler->display->display_options['fields']['field_link_remote_file']['relationship'] = 'field_resources_target_id';
  $handler->display->display_options['fields']['field_link_remote_file']['label'] = '';
  $handler->display->display_options['fields']['field_link_remote_file']['element_class'] = 'format--[field_format]';
  $handler->display->display_options['fields']['field_link_remote_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_remote_file']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_link_remote_file']['click_sort_column'] = 'fid';
  /* Campo: Contenuto: Link API */
  $handler->display->display_options['fields']['field_link_api']['id'] = 'field_link_api';
  $handler->display->display_options['fields']['field_link_api']['table'] = 'field_data_field_link_api';
  $handler->display->display_options['fields']['field_link_api']['field'] = 'field_link_api';
  $handler->display->display_options['fields']['field_link_api']['relationship'] = 'field_resources_target_id';
  $handler->display->display_options['fields']['field_link_api']['label'] = '';
  $handler->display->display_options['fields']['field_link_api']['element_class'] = 'format--[field_format]';
  $handler->display->display_options['fields']['field_link_api']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_api']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_link_api']['click_sort_column'] = 'url';
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_resources_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Contenuto: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_resources_target_id';
  $handler->display->display_options['fields']['created']['label'] = 'Pubblicato il';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd/m/Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['created']['timezone'] = 'Europe/Rome';
  /* Campo: Contenuto: Update Frequency */
  $handler->display->display_options['fields']['field_update_frequency_ref']['id'] = 'field_update_frequency_ref';
  $handler->display->display_options['fields']['field_update_frequency_ref']['table'] = 'field_data_field_update_frequency_ref';
  $handler->display->display_options['fields']['field_update_frequency_ref']['field'] = 'field_update_frequency_ref';
  $handler->display->display_options['fields']['field_update_frequency_ref']['relationship'] = 'field_resources_target_id';
  $handler->display->display_options['fields']['field_update_frequency_ref']['label'] = 'Frequenza';
  $handler->display->display_options['fields']['field_update_frequency_ref']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_update_frequency_ref']['type'] = 'taxonomy_term_reference_plain';
  /* Campo: Contenuto: Data di aggiornamento */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'field_resources_target_id';
  $handler->display->display_options['fields']['changed']['label'] = 'Aggiornato il';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'd/m/Y';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['changed']['timezone'] = 'Europe/Rome';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_resources_target_id';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Campo: Esplora il dataset */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Esplora il dataset';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Esplora il dataset';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'esplora-dataset-bt';
  /* Campo: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'clear';
  /* Sort criterion: Contenuto: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Dataset Node Id */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['ui_name'] = 'Dataset Node Id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['argument'] = 'Nessun formato disponibile per questo dataset.';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_resources_target_id';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_resources_target_id';
  $handler->display->display_options['filters']['type']['value'] = array(
    'resource' => 'resource',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Link API not empty */
  $handler->display->display_options['filters']['field_link_api_url']['id'] = 'field_link_api_url';
  $handler->display->display_options['filters']['field_link_api_url']['table'] = 'field_data_field_link_api';
  $handler->display->display_options['filters']['field_link_api_url']['field'] = 'field_link_api_url';
  $handler->display->display_options['filters']['field_link_api_url']['relationship'] = 'field_resources_target_id';
  $handler->display->display_options['filters']['field_link_api_url']['ui_name'] = 'Link API not empty';
  $handler->display->display_options['filters']['field_link_api_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_link_api_url']['group'] = 2;
  /* Filter criterion: File not empty */
  $handler->display->display_options['filters']['field_link_remote_file_fid']['id'] = 'field_link_remote_file_fid';
  $handler->display->display_options['filters']['field_link_remote_file_fid']['table'] = 'field_data_field_link_remote_file';
  $handler->display->display_options['filters']['field_link_remote_file_fid']['field'] = 'field_link_remote_file_fid';
  $handler->display->display_options['filters']['field_link_remote_file_fid']['relationship'] = 'field_resources_target_id';
  $handler->display->display_options['filters']['field_link_remote_file_fid']['ui_name'] = 'File not empty';
  $handler->display->display_options['filters']['field_link_remote_file_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_link_remote_file_fid']['group'] = 2;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Format */
  $handler->display->display_options['fields']['field_format']['id'] = 'field_format';
  $handler->display->display_options['fields']['field_format']['table'] = 'field_data_field_format';
  $handler->display->display_options['fields']['field_format']['field'] = 'field_format';
  $handler->display->display_options['fields']['field_format']['relationship'] = 'field_resources_target_id';
  $handler->display->display_options['fields']['field_format']['label'] = '';
  $handler->display->display_options['fields']['field_format']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_format']['alter']['text'] = '<div>[field_format]</div>';
  $handler->display->display_options['fields']['field_format']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_format']['element_class'] = '[field_format]';
  $handler->display->display_options['fields']['field_format']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_format']['type'] = 'taxonomy_term_reference_plain';
  /* Campo: Contenuto: Link File */
  $handler->display->display_options['fields']['field_link_remote_file']['id'] = 'field_link_remote_file';
  $handler->display->display_options['fields']['field_link_remote_file']['table'] = 'field_data_field_link_remote_file';
  $handler->display->display_options['fields']['field_link_remote_file']['field'] = 'field_link_remote_file';
  $handler->display->display_options['fields']['field_link_remote_file']['relationship'] = 'field_resources_target_id';
  $handler->display->display_options['fields']['field_link_remote_file']['label'] = '';
  $handler->display->display_options['fields']['field_link_remote_file']['element_class'] = 'format--[field_format]';
  $handler->display->display_options['fields']['field_link_remote_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_remote_file']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_link_remote_file']['click_sort_column'] = 'fid';
  /* Campo: Contenuto: Link API */
  $handler->display->display_options['fields']['field_link_api']['id'] = 'field_link_api';
  $handler->display->display_options['fields']['field_link_api']['table'] = 'field_data_field_link_api';
  $handler->display->display_options['fields']['field_link_api']['field'] = 'field_link_api';
  $handler->display->display_options['fields']['field_link_api']['relationship'] = 'field_resources_target_id';
  $handler->display->display_options['fields']['field_link_api']['label'] = '';
  $handler->display->display_options['fields']['field_link_api']['element_class'] = 'format--[field_format]';
  $handler->display->display_options['fields']['field_link_api']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_api']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_link_api']['click_sort_column'] = 'url';
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_resources_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Contenuto: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_resources_target_id';
  $handler->display->display_options['fields']['created']['label'] = 'Pubblicato il';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd/m/Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['created']['timezone'] = 'Europe/Rome';
  /* Campo: Contenuto: Update Frequency */
  $handler->display->display_options['fields']['field_update_frequency_ref']['id'] = 'field_update_frequency_ref';
  $handler->display->display_options['fields']['field_update_frequency_ref']['table'] = 'field_data_field_update_frequency_ref';
  $handler->display->display_options['fields']['field_update_frequency_ref']['field'] = 'field_update_frequency_ref';
  $handler->display->display_options['fields']['field_update_frequency_ref']['relationship'] = 'field_resources_target_id';
  $handler->display->display_options['fields']['field_update_frequency_ref']['label'] = 'Frequenza';
  $handler->display->display_options['fields']['field_update_frequency_ref']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_update_frequency_ref']['type'] = 'taxonomy_term_reference_plain';
  /* Campo: Contenuto: Data di aggiornamento */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'field_resources_target_id';
  $handler->display->display_options['fields']['changed']['label'] = 'Aggiornato il--';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'd/m/Y';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['changed']['timezone'] = 'Europe/Rome';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_resources_target_id';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Campo: Esplora il dataset */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Esplora il dataset';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Esplora il dataset';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'esplora-dataset-bt';
  /* Campo: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'clear';
  /* Campo: Contenuto: Licenza */
  $handler->display->display_options['fields']['field_resource_license']['id'] = 'field_resource_license';
  $handler->display->display_options['fields']['field_resource_license']['table'] = 'field_data_field_resource_license';
  $handler->display->display_options['fields']['field_resource_license']['field'] = 'field_resource_license';
  $handler->display->display_options['fields']['field_resource_license']['relationship'] = 'field_resources_target_id';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'panel',
      'context' => 'entity:file.basename',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Dataset Node Id',
    ),
  );
  $translatables['resources'] = array(
    t('Master'),
    t('more'),
    t('Applica'),
    t('Ripristina'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Non sono disponibili risorse per questo dataset.'),
    t('Referenced Resource'),
    t('<div>[field_format]</div>'),
    t('Pubblicato il'),
    t('Frequenza'),
    t('Aggiornato il'),
    t('Percorso'),
    t('Esplora il dataset'),
    t('Tutti'),
    t('Content pane'),
    t('Aggiornato il--'),
    t('Licenza'),
    t('View panes'),
  );
  $export['resources'] = $view;

  return $export;
}
