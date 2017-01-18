<?php
/**
 * @file
 * datigov_base.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function datigov_base_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorizer_datigov_palette';
  $strongarm->value = array(
    'top' => '#12a694',
    'bottom' => '#c53478',
    'toolbarbtn' => '#ffffff',
    'toolbarborder' => '#CDCDCD',
    'bg' => '#ffffff',
    'sidebar' => '#3B3B3B',
    'sidebarborders' => '#12a694',
    'footer' => '#ffffff',
    'titleslogan' => '#3B3B3B',
    'text' => '#3B3B3B',
    'link' => '#c53478',
    'linkactive' => '#c53478',
    'linkhover' => '#c53478',
  );
  $export['colorizer_datigov_palette'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorizer_previewfile';
  $strongarm->value = '';
  $export['colorizer_previewfile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__organization';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_organization';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_organization';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_organization';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_organization';
  $strongarm->value = '1';
  $export['node_preview_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_organization';
  $strongarm->value = 1;
  $export['node_submitted_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'dati.gov.it - i dati aperti della pubblica amministrazione';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_datigov_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 0,
    'logo_path' => 'profiles/dkan/themes/custom/datigov/logo-datigov.png',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'copyright' => array(
      'value' => '<div class=""><a href="http://creativecommons.org/licenses/by/3.0/it/" target="_blank" class="copyright-sx"><img src="/profiles/dkan/themes/custom/datigov/assets/images/logo-cc.png"/></a></div><div class=""><a href="#" target="_blank" class="copyright-sx"><img src="/profiles/dkan/themes/custom/datigov/assets/images/logo-open-data.jpg"/></a></div><div class=""><a href="#" target="_blank" class="powered-by">Powered by insideout10</a></div>',
      'format' => 'html',
    ),
    'hero_path' => 'public://',
    'hero_upload' => '',
    'logo_link_title' => array(
      'value' => 'Torna alla homepage',
      'format' => 'html',
    ),
    'logo_alt' => array(
      'value' => 'Agenzia per l\'Italia Digitale',
      'format' => 'html',
    ),
    'search_text_placeholder' => array(
      'value' => 'Cerca nei dataset',
      'format' => 'html',
    ),
    'jquery_update_jquery_version' => '',
  );
  $export['theme_datigov_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'datigov';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 0,
    'logo_path' => 'profiles/dkan/themes/custom/datigov/logo.jpg',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
  );
  $export['theme_settings'] = $strongarm;

  return $export;
}
