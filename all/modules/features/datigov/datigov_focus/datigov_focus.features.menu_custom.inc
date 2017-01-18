<?php
/**
 * @file
 * datigov_focus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function datigov_focus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-focus.
  $menus['menu-focus'] = array(
    'menu_name' => 'menu-focus',
    'title' => 'Focus',
    'description' => 'The focus menu.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Focus');
  t('The focus menu.');


  return $menus;
}
