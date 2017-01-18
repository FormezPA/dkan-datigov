<?php
/**
 * @file
 * datigov_focus.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function datigov_focus_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'focus_intro_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Focus Intro view';
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
  $handler->display->display_options['row_plugin'] = 'entity';
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Contenuto: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Focus term */
  $handler->display->display_options['arguments']['field_focus_tid']['id'] = 'field_focus_tid';
  $handler->display->display_options['arguments']['field_focus_tid']['table'] = 'field_data_field_focus';
  $handler->display->display_options['arguments']['field_focus_tid']['field'] = 'field_focus_tid';
  $handler->display->display_options['arguments']['field_focus_tid']['ui_name'] = 'Focus term';
  $handler->display->display_options['arguments']['field_focus_tid']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['field_focus_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_focus_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_focus_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_focus_tid']['summary_options']['items_per_page'] = '25';
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
    'focus_intro' => 'focus_intro',
  );

  /* Display: Focus Intro content pane */
  $handler = $view->new_display('panel_pane', 'Focus Intro content pane', 'focus_intro_content_pane');
  $handler->display->display_options['display_description'] = 'This content pane selects a Focus Intro based on the Term Id.';
  $handler->display->display_options['argument_input'] = array(
    'field_focus_tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Focus term',
    ),
  );
  $translatables['focus_intro_view'] = array(
    t('Master'),
    t('more'),
    t('Applica'),
    t('Ripristina'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Tutti'),
    t('Focus Intro content pane'),
    t('This content pane selects a Focus Intro based on the Term Id.'),
    t('View panes'),
  );
  $export['focus_intro_view'] = $view;

  return $export;
}
