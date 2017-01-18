<?php
/**
 * @file
 * datigov_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function datigov_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'datasets_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_datasets';
  $view->human_name = 'Datasets Search';
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
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Cerca';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Rimuovi filtri';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seguente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Intestazione: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<h2>Sono stati trovati @total dataset</h2>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Nessun dataset trovato.';
  $handler->display->display_options['empty']['area']['format'] = 'html';
  /* Campo: Indexed Contenuto: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_datasets';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Campo: Indexed Contenuto: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_datasets';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Campo: Indexed Contenuto: Geographic Type */
  $handler->display->display_options['fields']['field_geographic_type']['id'] = 'field_geographic_type';
  $handler->display->display_options['fields']['field_geographic_type']['table'] = 'search_api_index_datasets';
  $handler->display->display_options['fields']['field_geographic_type']['field'] = 'field_geographic_type';
  $handler->display->display_options['fields']['field_geographic_type']['label'] = '';
  $handler->display->display_options['fields']['field_geographic_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_geographic_type']['alter']['text'] = '<div class="ribbon ribbon-[field_geographic_type]">
    <div class="banner">
        <div class="text">[field_geographic_type]</div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_geographic_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geographic_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_geographic_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_geographic_type']['bypass_access'] = 1;
  /* Campo: Indexed Contenuto: Genres */
  $handler->display->display_options['fields']['field_genres']['id'] = 'field_genres';
  $handler->display->display_options['fields']['field_genres']['table'] = 'search_api_index_datasets';
  $handler->display->display_options['fields']['field_genres']['field'] = 'field_genres';
  $handler->display->display_options['fields']['field_genres']['label'] = '';
  $handler->display->display_options['fields']['field_genres']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_genres']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_genres']['list']['mode'] = 'list';
  $handler->display->display_options['fields']['field_genres']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_genres']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_genres']['bypass_access'] = 1;
  /* Campo: Indexed Contenuto: Themes */
  $handler->display->display_options['fields']['field_themes']['id'] = 'field_themes';
  $handler->display->display_options['fields']['field_themes']['table'] = 'search_api_index_datasets';
  $handler->display->display_options['fields']['field_themes']['field'] = 'field_themes';
  $handler->display->display_options['fields']['field_themes']['label'] = '';
  $handler->display->display_options['fields']['field_themes']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_themes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_themes']['list']['mode'] = 'list';
  $handler->display->display_options['fields']['field_themes']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_themes']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_themes']['bypass_access'] = 1;
  /* Campo: Indexed Contenuto: Focus */
  $handler->display->display_options['fields']['field_focus']['id'] = 'field_focus';
  $handler->display->display_options['fields']['field_focus']['table'] = 'search_api_index_datasets';
  $handler->display->display_options['fields']['field_focus']['field'] = 'field_focus';
  $handler->display->display_options['fields']['field_focus']['label'] = '';
  $handler->display->display_options['fields']['field_focus']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_focus']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_focus']['list']['mode'] = 'list';
  $handler->display->display_options['fields']['field_focus']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_focus']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_focus']['bypass_access'] = 1;
  /* Campo: Indexed Contenuto: Titolo del dataset */
  $handler->display->display_options['fields']['field_long_title']['id'] = 'field_long_title';
  $handler->display->display_options['fields']['field_long_title']['table'] = 'search_api_index_datasets';
  $handler->display->display_options['fields']['field_long_title']['field'] = 'field_long_title';
  $handler->display->display_options['fields']['field_long_title']['label'] = '';
  $handler->display->display_options['fields']['field_long_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_long_title']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_long_title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_long_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_long_title']['hide_alter_empty'] = FALSE;
  /* Campo: Indexed Contenuto: Openness */
  $handler->display->display_options['fields']['field_openness']['id'] = 'field_openness';
  $handler->display->display_options['fields']['field_openness']['table'] = 'search_api_index_datasets';
  $handler->display->display_options['fields']['field_openness']['field'] = 'field_openness';
  $handler->display->display_options['fields']['field_openness']['label'] = '';
  $handler->display->display_options['fields']['field_openness']['element_class'] = 'openness--[field_openness]';
  $handler->display->display_options['fields']['field_openness']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_openness']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_openness']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_openness']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_openness']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_openness']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Campo: Indexed Contenuto: Organization */
  $handler->display->display_options['fields']['field_organization_ref']['id'] = 'field_organization_ref';
  $handler->display->display_options['fields']['field_organization_ref']['table'] = 'search_api_index_datasets';
  $handler->display->display_options['fields']['field_organization_ref']['field'] = 'field_organization_ref';
  $handler->display->display_options['fields']['field_organization_ref']['label'] = 'Pubblicato da';
  $handler->display->display_options['fields']['field_organization_ref']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_organization_ref']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_organization_ref']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_organization_ref']['bypass_access'] = 1;
  /* Campo: Indexed Contenuto: Data cambiata */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'search_api_index_datasets';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Aggiornato il';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'd/m/Y';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['changed']['timezone'] = 'Europe/Rome';
  $handler->display->display_options['fields']['changed']['link_to_entity'] = 0;
  /* Campo: Indexed Contenuto: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_datasets';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Campo: Themes, Genres and Focus */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Themes, Genres and Focus';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="themes">[field_themes]</span>
<span class="genres">[field_genres]</span>
<span class="focus">[field_focus]</span>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'classifications';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'classifications-wrapper-search';
  /* Campo: Global: Visualizza */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'dataset_resource_formats';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Campo: Indexed Contenuto: Numero di accessi */
  $handler->display->display_options['fields']['views']['id'] = 'views';
  $handler->display->display_options['fields']['views']['table'] = 'search_api_index_datasets';
  $handler->display->display_options['fields']['views']['field'] = 'views';
  $handler->display->display_options['fields']['views']['label'] = 'Visite';
  $handler->display->display_options['fields']['views']['separator'] = ' ';
  $handler->display->display_options['fields']['views']['link_to_entity'] = 0;
  /* Campo: Indexed Contenuto: License ID */
  $handler->display->display_options['fields']['field_license_id']['id'] = 'field_license_id';
  $handler->display->display_options['fields']['field_license_id']['table'] = 'search_api_index_datasets';
  $handler->display->display_options['fields']['field_license_id']['field'] = 'field_license_id';
  $handler->display->display_options['fields']['field_license_id']['label'] = 'Licenza';
  $handler->display->display_options['fields']['field_license_id']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_license_id']['hide_alter_empty'] = FALSE;
  /* Campo: Indexed Contenuto: ShareThis Link */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'search_api_index_datasets';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['label'] = '';
  $handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
  /* Campo: Global: Visualizza */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['label'] = '';
  $handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_1']['view'] = 'dataset_subscribe_link';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[!nid]';
  /* Sort criterion: Cerca: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_datasets';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  $handler->display->display_options['sorts']['search_api_relevance']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['search_api_relevance']['expose']['label'] = 'Rilevanza';
  /* Sort criterion: Indexed Contenuto: Data cambiata */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'search_api_index_datasets';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['sorts']['changed']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['changed']['expose']['label'] = 'Data';
  /* Sort criterion: Indexed Contenuto: Numero di accessi */
  $handler->display->display_options['sorts']['views']['id'] = 'views';
  $handler->display->display_options['sorts']['views']['table'] = 'search_api_index_datasets';
  $handler->display->display_options['sorts']['views']['field'] = 'views';
  $handler->display->display_options['sorts']['views']['order'] = 'DESC';
  $handler->display->display_options['sorts']['views']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['views']['expose']['label'] = 'Visite';
  /* Sort criterion: Indexed Contenuto: Titolo */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'search_api_index_datasets';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Titolo';
  /* Filter criterion: Spatial / Geographical Coverage Area: Well-known text (indexed) */
  $handler->display->display_options['filters']['field_spatial_geom']['id'] = 'field_spatial_geom';
  $handler->display->display_options['filters']['field_spatial_geom']['table'] = 'search_api_index_datasets';
  $handler->display->display_options['filters']['field_spatial_geom']['field'] = 'field_spatial_geom';
  $handler->display->display_options['filters']['field_spatial_geom']['operator'] = 'Intersects';
  $handler->display->display_options['filters']['field_spatial_geom']['group'] = 1;
  $handler->display->display_options['filters']['field_spatial_geom']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_spatial_geom']['expose']['operator_id'] = 'field_spatial_geom_op';
  $handler->display->display_options['filters']['field_spatial_geom']['expose']['operator'] = 'field_spatial_geom_op';
  $handler->display->display_options['filters']['field_spatial_geom']['expose']['identifier'] = 'field_spatial_geom';
  $handler->display->display_options['filters']['field_spatial_geom']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Cerca: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_datasets';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'field_resources:body:value' => 'field_resources:body:value',
    'field_resources:field_long_title' => 'field_resources:field_long_title',
    'search_api_viewed' => 'search_api_viewed',
  );
  /* Filter criterion: Indexed Contenuto: Stato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_datasets';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'datasets_search_page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'dati';

  /* Display: Focus datasets content pane */
  $handler = $view->new_display('panel_pane', 'Focus datasets content pane', 'panel_pane_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['display_description'] = 'Displays all the datasets bound to a Focus term (provided by the context).';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Contenuto: Data cambiata */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'search_api_index_datasets';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['sorts']['changed']['expose']['label'] = 'Data';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Contenuto: Focus */
  $handler->display->display_options['arguments']['field_focus']['id'] = 'field_focus';
  $handler->display->display_options['arguments']['field_focus']['table'] = 'search_api_index_datasets';
  $handler->display->display_options['arguments']['field_focus']['field'] = 'field_focus';
  $handler->display->display_options['arguments']['field_focus']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['field_focus']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_focus']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_focus']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_focus']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'field_focus' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indexed Nodo: Focus',
    ),
  );
  $translatables['datasets_search'] = array(
    t('Master'),
    t('more'),
    t('Cerca'),
    t('Rimuovi filtri'),
    t('Ordina per'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« prima'),
    t('‹ precedente'),
    t('seguente ›'),
    t('ultima »'),
    t('<h2>Sono stati trovati @total dataset</h2>'),
    t('Nessun dataset trovato.'),
    t('.'),
    t('<div class="ribbon ribbon-[field_geographic_type]">
    <div class="banner">
        <div class="text">[field_geographic_type]</div>
    </div>
</div>'),
    t('Pubblicato da'),
    t('Aggiornato il'),
    t('<span class="themes">[field_themes]</span>
<span class="genres">[field_genres]</span>
<span class="focus">[field_focus]</span>'),
    t('Visite'),
    t(' '),
    t('Licenza'),
    t('Rilevanza'),
    t('Data'),
    t('Titolo'),
    t('Block'),
    t('Page'),
    t('Focus datasets content pane'),
    t('Displays all the datasets bound to a Focus term (provided by the context).'),
    t('Tutti'),
    t('View panes'),
  );
  $export['datasets_search'] = $view;

  return $export;
}
