<?php
/**
 * @file
 * datigov_user.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function datigov_user_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_user_kind'
  $field_instances['user-user-field_user_kind'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'tid' => 471,
      ),
    ),
    'deleted' => 0,
    'description' => 'Selezionate il tipo di utente',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_kind',
    'label' => 'Tipo',
    'required' => 1,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Selezionate il tipo di utente');
  t('Tipo');

  return $field_instances;
}
