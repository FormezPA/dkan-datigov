<?php
/**
 * @file
 * datigov_slider.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function datigov_slider_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'carousels';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Carousels';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_carousel_plugin_style';
  $handler->display->display_options['style_options']['interval'] = '5000';
  $handler->display->display_options['style_options']['navigation'] = 1;
  $handler->display->display_options['style_options']['indicators'] = 1;
  $handler->display->display_options['style_options']['pause'] = 1;
  $handler->display->display_options['row_plugin'] = 'views_bootstrap_carousel_plugin_rows';
  $handler->display->display_options['row_options']['image'] = 'field_image';
  $handler->display->display_options['row_options']['title'] = 'title';
  $handler->display->display_options['row_options']['description'] = 'field_slide_subtitle';
  /* Campo: Contenuto: Stile titolo */
  $handler->display->display_options['fields']['field_css_class_title']['id'] = 'field_css_class_title';
  $handler->display->display_options['fields']['field_css_class_title']['table'] = 'field_data_field_css_class_title';
  $handler->display->display_options['fields']['field_css_class_title']['field'] = 'field_css_class_title';
  $handler->display->display_options['fields']['field_css_class_title']['label'] = '';
  $handler->display->display_options['fields']['field_css_class_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_css_class_title']['element_label_colon'] = FALSE;
  /* Campo: Contenuto: Stile sottotitolo */
  $handler->display->display_options['fields']['field_field_css_class_subtitle']['id'] = 'field_field_css_class_subtitle';
  $handler->display->display_options['fields']['field_field_css_class_subtitle']['table'] = 'field_data_field_field_css_class_subtitle';
  $handler->display->display_options['fields']['field_field_css_class_subtitle']['field'] = 'field_field_css_class_subtitle';
  $handler->display->display_options['fields']['field_field_css_class_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_field_css_class_subtitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_field_css_class_subtitle']['alter']['text'] = '<span class="[field_css_class_subtitle]">[subtitle]</span>';
  $handler->display->display_options['fields']['field_field_css_class_subtitle']['element_label_colon'] = FALSE;
  /* Campo: Contenuto: Collegamento URL */
  $handler->display->display_options['fields']['field_collegamento_url']['id'] = 'field_collegamento_url';
  $handler->display->display_options['fields']['field_collegamento_url']['table'] = 'field_data_field_collegamento_url';
  $handler->display->display_options['fields']['field_collegamento_url']['field'] = 'field_collegamento_url';
  $handler->display->display_options['fields']['field_collegamento_url']['label'] = '';
  $handler->display->display_options['fields']['field_collegamento_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_collegamento_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collegamento_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_collegamento_url']['type'] = 'link_plain';
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2 class="[field_css_class_title]">[title]</h2>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_collegamento_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Contenuto: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_collegamento_url]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Campo: Contenuto: Sottotitolo */
  $handler->display->display_options['fields']['field_slide_subtitle']['id'] = 'field_slide_subtitle';
  $handler->display->display_options['fields']['field_slide_subtitle']['table'] = 'field_data_field_slide_subtitle';
  $handler->display->display_options['fields']['field_slide_subtitle']['field'] = 'field_slide_subtitle';
  $handler->display->display_options['fields']['field_slide_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_slide_subtitle']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slide_subtitle']['alter']['text'] = '<span class="[field_field_css_class_subtitle]">[field_slide_subtitle]</span>';
  $handler->display->display_options['fields']['field_slide_subtitle']['element_label_colon'] = FALSE;
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
    'slide' => 'slide',
  );
  $translatables['carousels'] = array(
    t('Master'),
    t('more'),
    t('Applica'),
    t('Ripristina'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<span class="[field_css_class_subtitle]">[subtitle]</span>'),
    t('<h2 class="[field_css_class_title]">[title]</h2>'),
    t('<span class="[field_field_css_class_subtitle]">[field_slide_subtitle]</span>'),
  );
  $export['carousels'] = $view;

  return $export;
}
