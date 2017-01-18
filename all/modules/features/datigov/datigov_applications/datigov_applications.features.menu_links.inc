<?php
/**
 * @file
 * datigov_applications.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function datigov_applications_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_applicazioni:applicazioni
  $menu_links['main-menu_applicazioni:applicazioni'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'applicazioni',
    'router_path' => 'applicazioni',
    'link_title' => 'Applicazioni',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_applicazioni:applicazioni',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Applicazioni');


  return $menu_links;
}
