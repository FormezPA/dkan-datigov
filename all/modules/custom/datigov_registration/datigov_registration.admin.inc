<?php
/**
 * @file
 *  Datigov Registration module admin functions.
 */

define('API_FIELD_FIELD_MAPPING_PATTERN', '/(.+)=(.+)/');

/**
 * Page callback for admin/config/tamauth.
 */
function datigov_registration_settings_form($form, $form_state) {
  $mappings = datigov_registration_field_mappings();
  $mappings_text = '';

  $tokens = array('cod_amm', 'nome_ref', 'cogn_ref', 'tel_ref', 'mail_ref', 'acronimo', 'des_amm', 'regione', 'provincia', 'comune', 'cap', 'indirizzo', 'titolo_resp', 'nome_resp', 'cogn_resp', 'sito_istituzionale', 'liv_accessibili', 'mail1', 'mail2', 'mail3', 'mail4', 'mail5', 'tipologia', 'categoria', 'data_accreditamento', 'cf');

  foreach ($mappings as $api_field => $drupal_field_name) {
    $mappings_text .= $api_field . '=' . $drupal_field_name . "\n";
  }

  $form['datigov_registration_field_mappings'] = array(
    '#title' => t('API / Field Mappings'),
    '#type' => 'textarea',
    '#description' => t('Enter your API to field mappings, one per line in the format:') . '<br />' . t('API_FIELD=drupal_field_name') . '<br /><br />' . t('Available tokens:' . '<br />' . implode(', ', $tokens)),
    '#default_value' => $mappings_text,
  );

  $form['actions'] = array(
    '#type' => 'actions',
    '#weight' => 10,
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Save configuration',
  );

  return $form;
}

/**
 * Validate handler for tamauth_settings_form.
 */
function datigov_registration_settings_form_validate($form, $form_state) {
  $mappings = trim($form_state['values']['datigov_registration_field_mappings']);
  if (!empty($mappings) && !preg_match(API_FIELD_FIELD_MAPPING_PATTERN, $mappings)) {
    form_set_error('datigov_registration_field_mappings', t('API / Field Mappings invalid'));
  }
}

/**
 * Submit handler for tamauth_settings_form.
 */
function datigov_registration_settings_form_submit($form, $form_state) {
  $mappings = trim($form_state['values']['datigov_registration_field_mappings']);
  $api_field_mappings = array();
  if (preg_match_all(API_FIELD_FIELD_MAPPING_PATTERN, $mappings, $matches)) {
    $api_fields = array_map('trim', $matches[1]);
    $drupal_field_names = array_map('trim', $matches[2]);
    $api_field_mappings = array_combine($api_fields, $drupal_field_names);
  }
  variable_set('datigov_registration_field_mappings', $api_field_mappings);
}
