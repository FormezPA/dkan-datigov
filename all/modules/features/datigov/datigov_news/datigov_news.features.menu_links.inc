<?php
/**
 * @file
 * datigov_news.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function datigov_news_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_notizie:notizie.
  $menu_links['main-menu_notizie:notizie'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'notizie',
    'router_path' => 'notizie',
    'link_title' => 'Notizie',
    'options' => array(
      'identifier' => 'main-menu_notizie:notizie',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Notizie');

  return $menu_links;
}
