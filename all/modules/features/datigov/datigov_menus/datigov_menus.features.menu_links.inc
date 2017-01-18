<?php
/**
 * @file
 * datigov_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function datigov_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about:uuid/node/513718be-f943-495d-a254-21fd0f51142e
  $menu_links['main-menu_about:uuid/node/513718be-f943-495d-a254-21fd0f51142e'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/513718be-f943-495d-a254-21fd0f51142e',
    'router_path' => 'uuid',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_about:uuid/node/513718be-f943-495d-a254-21fd0f51142e',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_add-dataset:node/add/dataset
  $menu_links['main-menu_add-dataset:node/add/dataset'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/dataset',
    'router_path' => 'node/add/dataset',
    'link_title' => 'Add Dataset',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add-dataset:node/add/dataset',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_amministrazioni:<front>
  $menu_links['main-menu_amministrazioni:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Amministrazioni',
    'options' => array(
      'identifier' => 'main-menu_amministrazioni:<front>',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_dati:dataset',
  );
  // Exported menu link: main-menu_datasets:dataset
  $menu_links['main-menu_datasets:dataset'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'dataset',
    'router_path' => 'dataset',
    'link_title' => 'Datasets',
    'options' => array(
      'identifier' => 'main-menu_datasets:dataset',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: main-menu_dati:dataset
  $menu_links['main-menu_dati:dataset'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'dataset',
    'router_path' => 'dataset',
    'link_title' => 'Dati',
    'options' => array(
      'identifier' => 'main-menu_dati:dataset',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_groups:groups
  $menu_links['main-menu_groups:groups'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'groups',
    'router_path' => 'groups',
    'link_title' => 'Groups',
    'options' => array(
      'identifier' => 'main-menu_groups:groups',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_ricerca-geografica:dataset
  $menu_links['main-menu_ricerca-geografica:dataset'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'dataset',
    'router_path' => 'dataset',
    'link_title' => 'Ricerca Geografica',
    'options' => array(
      'identifier' => 'main-menu_ricerca-geografica:dataset',
      'attributes' => array(
        'title' => '',
      ),
      'query' => array(
        'geo' => 'yes',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_dati:dataset',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Add Dataset');
  t('Amministrazioni');
  t('Datasets');
  t('Dati');
  t('Groups');
  t('Home');
  t('Ricerca Geografica');


  return $menu_links;
}
