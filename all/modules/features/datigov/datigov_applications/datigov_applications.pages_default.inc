<?php
/**
 * @file
 * datigov_applications.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function datigov_applications_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'applications';
  $page->task = 'page';
  $page->admin_title = 'Applications';
  $page->admin_description = 'The applications page shows an intro and the list of applications.';
  $page->path = 'applicazioni';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => 'Applicazioni',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_applications__panel_context_a86497d8-7e92-4c87-8ce8-49173e15c43a';
  $handler->task = 'page';
  $handler->subtask = 'applications';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'radix_bryant_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8207604b-a179-4427-b340-9ea79128f023';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-867ebf41-7fac-44e7-ae77-cf84a4aa64a6';
    $pane->panel = 'contentmain';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '12336',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '867ebf41-7fac-44e7-ae77-cf84a4aa64a6';
    $display->content['new-867ebf41-7fac-44e7-ae77-cf84a4aa64a6'] = $pane;
    $display->panels['contentmain'][0] = 'new-867ebf41-7fac-44e7-ae77-cf84a4aa64a6';
    $pane = new stdClass();
    $pane->pid = 'new-4f36f76f-827b-4e4c-baaf-fea1a3143420';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'applications_list_view-applications_list_content_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4f36f76f-827b-4e4c-baaf-fea1a3143420';
    $display->content['new-4f36f76f-827b-4e4c-baaf-fea1a3143420'] = $pane;
    $display->panels['contentmain'][1] = 'new-4f36f76f-827b-4e4c-baaf-fea1a3143420';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['applications'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'segnala_un_applicazione_page';
  $page->task = 'page';
  $page->admin_title = 'Segnala un applicazione page';
  $page->admin_description = 'The page "Segnala un\'applicazione" provides a handy module to submit an application. Non authenticated users are redirected to the form for registration/login.';
  $page->path = 'applicazioni/segnala';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_segnala_un_applicazione_page__panel_context_9e1999f7-62c6-413b-a197-d052b6c93b8d';
  $handler->task = 'page';
  $handler->subtask = 'segnala_un_applicazione_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Segnala un\'applicazione panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(),
    ),
  );
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b275384e-ac12-460f-8ef1-8310be82b880';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a9a226c3-c66e-4c62-8d5b-6fa9c6ddc9dc';
    $pane->panel = 'contentmain';
    $pane->type = 'block';
    $pane->subtype = 'webform-client-block-6127';
    $pane->shown = TRUE;
    $pane->access = array(
      'logic' => 'and',
    );
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a9a226c3-c66e-4c62-8d5b-6fa9c6ddc9dc';
    $display->content['new-a9a226c3-c66e-4c62-8d5b-6fa9c6ddc9dc'] = $pane;
    $display->panels['contentmain'][0] = 'new-a9a226c3-c66e-4c62-8d5b-6fa9c6ddc9dc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a9a226c3-c66e-4c62-8d5b-6fa9c6ddc9dc';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page-segnala_un_applicazione_page__redirect_non_logged_users';
  $handler->task = 'page';
  $handler->subtask = 'segnala_un_applicazione_page';
  $handler->handler = 'http_response';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Redirect non logged users',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'user/register',
    'name' => 'redirect_non_logged_users',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['segnala_un_applicazione_page'] = $page;

  return $pages;

}
