<?php
/**
 * @file
 * datigov_webforms.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function datigov_webforms_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_richiedi-un-dataset:richiedi-dataset
  $menu_links['main-menu_richiedi-un-dataset:richiedi-dataset'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'richiedi-dataset',
    'router_path' => 'richiedi-dataset',
    'link_title' => 'Richiedi un dataset',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_richiedi-un-dataset:richiedi-dataset',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_dati:dataset',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Richiedi un dataset');


  return $menu_links;
}
