<?php
/**
 * @file
 * datigov_privacy.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function datigov_privacy_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_domain';
  $strongarm->value = '';
  $export['eu_cookie_compliance_domain'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_it';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'popup_clicking_confirmation' => 1,
    'popup_position' => 0,
    'popup_agree_button_message' => 'Ok',
    'popup_disagree_button_message' => 'Privacy policy',
    'popup_info' => array(
      'value' => '<h2>Il sito utilizza cookie tecnici, analytics e di terze parti . Per avere maggiori informazioni su tutti i cookie utilizzati, su come disabilitarli o negare il consenso all’utilizzo <a href="/content/privacy-policy">leggi l’informativa</a>. Proseguendo nella navigazione presti il consenso all’uso di tutti i cookie.</h2>',
      'format' => 'html',
    ),
    'popup_agreed_enabled' => 0,
    'popup_hide_agreed' => 0,
    'popup_find_more_button_message' => 'Ulteriori informazioni',
    'popup_hide_button_message' => 'Chiudi',
    'popup_agreed' => array(
      'value' => '<h2>Grazie per aver dato il consenso</h2><p>Potete ora chiudere questo messaggio o ricevere ulteriori informazioni sui <em>cookie</em>.</p>',
      'format' => 'html',
    ),
    'popup_link' => 'content/privacy-policy',
    'popup_link_new_window' => 0,
    'popup_height' => '',
    'popup_width' => '100%',
    'popup_delay' => '1',
    'popup_bg_hex' => '13A694',
    'popup_text_hex' => 'ffffff',
    'domains_option' => '1',
    'domains_list' => '',
    'exclude_paths' => '',
  );
  $export['eu_cookie_compliance_it'] = $strongarm;

  return $export;
}
