<?php
/**
 * @file
 * datigov_focus.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function datigov_focus_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__focus_taxonomy';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Focus taxonomy',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'focus_taxonomy',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'focus' => 'focus',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'radix_bryant_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '01789834-6d6b-41c1-bdd6-7571770214da';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-304d7a77-3c61-48f3-aa73-65d7dc43c843';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'focus_intro_view-focus_intro_content_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '304d7a77-3c61-48f3-aa73-65d7dc43c843';
    $display->content['new-304d7a77-3c61-48f3-aa73-65d7dc43c843'] = $pane;
    $display->panels['contentmain'][0] = 'new-304d7a77-3c61-48f3-aa73-65d7dc43c843';
    $pane = new stdClass();
    $pane->pid = 'new-00a0da11-4fcf-4136-9452-259ecc25c1e0';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'datasets_search-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '00a0da11-4fcf-4136-9452-259ecc25c1e0';
    $display->content['new-00a0da11-4fcf-4136-9452-259ecc25c1e0'] = $pane;
    $display->panels['contentmain'][1] = 'new-00a0da11-4fcf-4136-9452-259ecc25c1e0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__focus_taxonomy'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function datigov_focus_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'focus_page';
  $page->task = 'page';
  $page->admin_title = 'Focus page';
  $page->admin_description = 'The page for the Focus terms.';
  $page->path = 'focus/%term';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'term' => array(
      'id' => 1,
      'identifier' => 'Focus taxonomy term',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'term',
        'vids' => array(
          1 => '1',
          2 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
        ),
        'breadcrumb' => 0,
        'transform' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_focus_page__panel_context_baa8188d-473f-4e22-80f3-1a458148fe0b';
  $handler->task = 'page';
  $handler->subtask = 'focus_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Focus panel content',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'radix_bryant_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6875424d-e544-4f76-8108-6b9a7de6b3fb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-095c541d-0acf-4b15-ae5f-35eff0494303';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'focus_intro_view-focus_intro_content_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '095c541d-0acf-4b15-ae5f-35eff0494303';
    $display->content['new-095c541d-0acf-4b15-ae5f-35eff0494303'] = $pane;
    $display->panels['contentmain'][0] = 'new-095c541d-0acf-4b15-ae5f-35eff0494303';
    $pane = new stdClass();
    $pane->pid = 'new-fe05d5c1-e421-434f-862b-2a5200ccdeb0';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'datasets_search-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fe05d5c1-e421-434f-862b-2a5200ccdeb0';
    $display->content['new-fe05d5c1-e421-434f-862b-2a5200ccdeb0'] = $pane;
    $display->panels['contentmain'][1] = 'new-fe05d5c1-e421-434f-862b-2a5200ccdeb0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['focus_page'] = $page;

  return $pages;

}
