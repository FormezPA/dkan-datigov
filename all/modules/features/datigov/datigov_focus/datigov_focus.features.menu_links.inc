<?php
/**
 * @file
 * datigov_focus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function datigov_focus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_agenda-open-data:agenda-open-data
  $menu_links['main-menu_agenda-open-data:agenda-open-data'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'agenda-open-data',
    'router_path' => 'agenda-open-data',
    'link_title' => 'Agenda Open Data',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_agenda-open-data:agenda-open-data',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_focus:uuid/node/9036c153-bd29-485a-9d1f-023bf8df428d',
  );
  // Exported menu link: main-menu_data-journalism:data-journalism
  $menu_links['main-menu_data-journalism:data-journalism'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'data-journalism',
    'router_path' => 'data-journalism',
    'link_title' => 'Data Journalism',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_data-journalism:data-journalism',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_focus:uuid/node/9036c153-bd29-485a-9d1f-023bf8df428d',
  );
  // Exported menu link: main-menu_open-data-for-all:focus/open-data-for-all
  $menu_links['main-menu_open-data-for-all:focus/open-data-for-all'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'focus/open-data-for-all',
    'router_path' => 'focus/%',
    'link_title' => 'Open Data for All',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_open-data-for-all:focus/open-data-for-all',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_smart-city:smart-city
  $menu_links['main-menu_smart-city:smart-city'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'smart-city',
    'router_path' => 'smart-city',
    'link_title' => 'Smart City',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_smart-city:smart-city',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_focus:uuid/node/9036c153-bd29-485a-9d1f-023bf8df428d',
  );
  // Exported menu link: menu-focus_agenda-open-data:agenda-open-data
  $menu_links['menu-focus_agenda-open-data:agenda-open-data'] = array(
    'menu_name' => 'menu-focus',
    'link_path' => 'agenda-open-data',
    'router_path' => 'agenda-open-data',
    'link_title' => 'Agenda Open Data',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-focus_agenda-open-data:agenda-open-data',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-focus_data-journalism:data-journalism
  $menu_links['menu-focus_data-journalism:data-journalism'] = array(
    'menu_name' => 'menu-focus',
    'link_path' => 'data-journalism',
    'router_path' => 'data-journalism',
    'link_title' => 'Data Journalism',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-focus_data-journalism:data-journalism',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-focus_dati-geografici:geo-dati
  $menu_links['menu-focus_dati-geografici:geo-dati'] = array(
    'menu_name' => 'menu-focus',
    'link_path' => 'geo-dati',
    'router_path' => 'geo-dati',
    'link_title' => 'Dati Geografici',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-focus_dati-geografici:geo-dati',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-focus_open-data-for-all:focus/open-data-for-all
  $menu_links['menu-focus_open-data-for-all:focus/open-data-for-all'] = array(
    'menu_name' => 'menu-focus',
    'link_path' => 'focus/open-data-for-all',
    'router_path' => 'focus/%',
    'link_title' => 'Open Data for All',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-focus_open-data-for-all:focus/open-data-for-all',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-focus_smart-city:smart-city
  $menu_links['menu-focus_smart-city:smart-city'] = array(
    'menu_name' => 'menu-focus',
    'link_path' => 'smart-city',
    'router_path' => 'smart-city',
    'link_title' => 'Smart City',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-focus_smart-city:smart-city',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Agenda Open Data');
  t('Data Journalism');
  t('Dati Geografici');
  t('Open Data for All');
  t('Smart City');


  return $menu_links;
}
