<?php
/**
 * @file
 * datigov_footer.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function datigov_footer_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-cataloghi-nazionali.
  $menus['menu-cataloghi-nazionali'] = array(
    'menu_name' => 'menu-cataloghi-nazionali',
    'title' => 'Cataloghi Nazionali',
    'description' => 'A menu that links to external web site and is mainly used in the footer 1st column.',
  );
  // Exported menu: menu-copyright.
  $menus['menu-copyright'] = array(
    'menu_name' => 'menu-copyright',
    'title' => 'Copyright',
    'description' => 'Menu copyright',
  );
  // Exported menu: menu-footer-logo.
  $menus['menu-footer-logo'] = array(
    'menu_name' => 'menu-footer-logo',
    'title' => 'Footer logo',
    'description' => '',
  );
  // Exported menu: menu-social-networks.
  $menus['menu-social-networks'] = array(
    'menu_name' => 'menu-social-networks',
    'title' => 'Social Networks',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('A menu that links to external web site and is mainly used in the footer 1st column.');
  t('Cataloghi Nazionali');
  t('Copyright');
  t('Footer logo');
  t('Menu copyright');
  t('Social Networks');


  return $menus;
}
