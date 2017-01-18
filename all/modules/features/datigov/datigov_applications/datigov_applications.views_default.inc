<?php
/**
 * @file
 * datigov_applications.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function datigov_applications_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'applications_list_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Applications list view';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seguente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Campo: Contenuto: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['element_wrapper_class'] = 'logo-app';
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'titolo-app';
  /* Campo: Contenuto: Autore */
  $handler->display->display_options['fields']['field_autore']['id'] = 'field_autore';
  $handler->display->display_options['fields']['field_autore']['table'] = 'field_data_field_autore';
  $handler->display->display_options['fields']['field_autore']['field'] = 'field_autore';
  $handler->display->display_options['fields']['field_autore']['element_wrapper_class'] = 'autore-app';
  $handler->display->display_options['fields']['field_autore']['hide_empty'] = TRUE;
  /* Campo: Promossa da */
  $handler->display->display_options['fields']['field_pa_produttrice']['id'] = 'field_pa_produttrice';
  $handler->display->display_options['fields']['field_pa_produttrice']['table'] = 'field_data_field_pa_produttrice';
  $handler->display->display_options['fields']['field_pa_produttrice']['field'] = 'field_pa_produttrice';
  $handler->display->display_options['fields']['field_pa_produttrice']['ui_name'] = 'Promossa da';
  $handler->display->display_options['fields']['field_pa_produttrice']['label'] = 'Promossa da';
  $handler->display->display_options['fields']['field_pa_produttrice']['element_wrapper_class'] = 'promossa-app';
  $handler->display->display_options['fields']['field_pa_produttrice']['hide_empty'] = TRUE;
  /* Campo: Contenuto: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '500';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'body-app';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  /* Campo: Disponibile per */
  $handler->display->display_options['fields']['field_tipo_applicazione']['id'] = 'field_tipo_applicazione';
  $handler->display->display_options['fields']['field_tipo_applicazione']['table'] = 'field_data_field_tipo_applicazione';
  $handler->display->display_options['fields']['field_tipo_applicazione']['field'] = 'field_tipo_applicazione';
  $handler->display->display_options['fields']['field_tipo_applicazione']['ui_name'] = 'Disponibile per';
  $handler->display->display_options['fields']['field_tipo_applicazione']['label'] = '';
  $handler->display->display_options['fields']['field_tipo_applicazione']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tipo_applicazione']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_tipo_applicazione']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tipo_applicazione']['multi_type'] = 'ul';
  /* Sort criterion: Contenuto: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'applicazione' => 'applicazione',
  );

  /* Display: Applications list content pane */
  $handler = $view->new_display('panel_pane', 'Applications list content pane', 'applications_list_content_pane');
  $handler->display->display_options['display_description'] = 'Displays a list of applications';
  $translatables['applications_list_view'] = array(
    t('Master'),
    t('more'),
    t('Applica'),
    t('Ripristina'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« prima'),
    t('‹ precedente'),
    t('seguente ›'),
    t('ultima »'),
    t('Autore'),
    t('Promossa da'),
    t('Applications list content pane'),
    t('Displays a list of applications'),
    t('View panes'),
  );
  $export['applications_list_view'] = $view;

  return $export;
}
