<?php
/**
 * @file
 * datigov_footer.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function datigov_footer_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-cataloghi-nazionali_camera-dei-deputari:http://www.camera.it
  $menu_links['menu-cataloghi-nazionali_camera-dei-deputari:http://www.camera.it'] = array(
    'menu_name' => 'menu-cataloghi-nazionali',
    'link_path' => 'http://www.camera.it',
    'router_path' => '',
    'link_title' => 'Camera dei deputari',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-cataloghi-nazionali_camera-dei-deputari:http://www.camera.it',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-cataloghi-nazionali_camera-dei-deputati:http://dati.camera.it/it/
  $menu_links['menu-cataloghi-nazionali_camera-dei-deputati:http://dati.camera.it/it/'] = array(
    'menu_name' => 'menu-cataloghi-nazionali',
    'link_path' => 'http://dati.camera.it/it/',
    'router_path' => '',
    'link_title' => 'Camera dei deputati',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-cataloghi-nazionali_camera-dei-deputati:http://dati.camera.it/it/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-cataloghi-nazionali_cnr:http://data.cnr.it
  $menu_links['menu-cataloghi-nazionali_cnr:http://data.cnr.it'] = array(
    'menu_name' => 'menu-cataloghi-nazionali',
    'link_path' => 'http://data.cnr.it',
    'router_path' => '',
    'link_title' => 'CNR',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-cataloghi-nazionali_cnr:http://data.cnr.it',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-cataloghi-nazionali_funzione-pubblica:http://www.perlapa.gov.it/web/guest/open-data
  $menu_links['menu-cataloghi-nazionali_funzione-pubblica:http://www.perlapa.gov.it/web/guest/open-data'] = array(
    'menu_name' => 'menu-cataloghi-nazionali',
    'link_path' => 'http://www.perlapa.gov.it/web/guest/open-data',
    'router_path' => '',
    'link_title' => 'Funzione Pubblica',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-cataloghi-nazionali_funzione-pubblica:http://www.perlapa.gov.it/web/guest/open-data',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-cataloghi-nazionali_inail:http://dati.inail.it/opendata/default/Qualidati/index.html
  $menu_links['menu-cataloghi-nazionali_inail:http://dati.inail.it/opendata/default/Qualidati/index.html'] = array(
    'menu_name' => 'menu-cataloghi-nazionali',
    'link_path' => 'http://dati.inail.it/opendata/default/Qualidati/index.html',
    'router_path' => '',
    'link_title' => 'INAIL',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-cataloghi-nazionali_inail:http://dati.inail.it/opendata/default/Qualidati/index.html',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-cataloghi-nazionali_inps:http://www.inps.it/portale/default.aspx?sID=%3b0%3b7719%3b&amp;lastMenu=7719&amp;iMenu=1&amp;iNodo=7719&amp;p4=2
  $menu_links['menu-cataloghi-nazionali_inps:http://www.inps.it/portale/default.aspx?sID=%3b0%3b7719%3b&amp;lastMenu=7719&amp;iMenu=1&amp;iNodo=7719&amp;p4=2'] = array(
    'menu_name' => 'menu-cataloghi-nazionali',
    'link_path' => 'http://www.inps.it/portale/default.aspx?sID=%3b0%3b7719%3b&amp;lastMenu=7719&amp;iMenu=1&amp;iNodo=7719&amp;p4=2',
    'router_path' => '',
    'link_title' => 'INPS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-cataloghi-nazionali_inps:http://www.inps.it/portale/default.aspx?sID=%3b0%3b7719%3b&amp;lastMenu=7719&amp;iMenu=1&amp;iNodo=7719&amp;p4=2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-cataloghi-nazionali_istat:http://dati.istat.it/
  $menu_links['menu-cataloghi-nazionali_istat:http://dati.istat.it/'] = array(
    'menu_name' => 'menu-cataloghi-nazionali',
    'link_path' => 'http://dati.istat.it/',
    'router_path' => '',
    'link_title' => 'ISTAT',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-cataloghi-nazionali_istat:http://dati.istat.it/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-cataloghi-nazionali_ministero-della-salute:http://www.dati.salute.gov.it
  $menu_links['menu-cataloghi-nazionali_ministero-della-salute:http://www.dati.salute.gov.it'] = array(
    'menu_name' => 'menu-cataloghi-nazionali',
    'link_path' => 'http://www.dati.salute.gov.it',
    'router_path' => '',
    'link_title' => 'Ministero della salute',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-cataloghi-nazionali_ministero-della-salute:http://www.dati.salute.gov.it',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-copyright_note-legali:http://www.agid.gov.it/note-legali
  $menu_links['menu-copyright_note-legali:http://www.agid.gov.it/note-legali'] = array(
    'menu_name' => 'menu-copyright',
    'link_path' => 'http://www.agid.gov.it/note-legali',
    'router_path' => '',
    'link_title' => 'Note legali',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-copyright_note-legali:http://www.agid.gov.it/note-legali',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-copyright_privacy-policy:http://www.agid.gov.it/privacy-policy
  $menu_links['menu-copyright_privacy-policy:http://www.agid.gov.it/privacy-policy'] = array(
    'menu_name' => 'menu-copyright',
    'link_path' => 'http://www.agid.gov.it/privacy-policy',
    'router_path' => '',
    'link_title' => 'Privacy Policy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-copyright_privacy-policy:http://www.agid.gov.it/privacy-policy',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-logo_agenda-digitale-italiana:<front>
  $menu_links['menu-footer-logo_agenda-digitale-italiana:<front>'] = array(
    'menu_name' => 'menu-footer-logo',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Agenda digitale italiana',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-logo_agenda-digitale-italiana:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-logo_agenda-digitale-italiana:http://www.agid.gov.it/
  $menu_links['menu-footer-logo_agenda-digitale-italiana:http://www.agid.gov.it/'] = array(
    'menu_name' => 'menu-footer-logo',
    'link_path' => 'http://www.agid.gov.it/',
    'router_path' => '',
    'link_title' => 'Agenda digitale italiana',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-logo_agenda-digitale-italiana:http://www.agid.gov.it/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-social-networks_rss:<front>
  $menu_links['menu-social-networks_rss:<front>'] = array(
    'menu_name' => 'menu-social-networks',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Rss',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-social-networks_rss:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-social-networks_twitter:http://www.twitter.com
  $menu_links['menu-social-networks_twitter:http://www.twitter.com'] = array(
    'menu_name' => 'menu-social-networks',
    'link_path' => 'http://www.twitter.com',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-social-networks_twitter:http://www.twitter.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Agenda digitale italiana');
  t('CNR');
  t('Camera dei deputari');
  t('Camera dei deputati');
  t('Funzione Pubblica');
  t('INAIL');
  t('INPS');
  t('ISTAT');
  t('Ministero della salute');
  t('Note legali');
  t('Privacy Policy');
  t('Rss');
  t('Twitter');


  return $menu_links;
}
