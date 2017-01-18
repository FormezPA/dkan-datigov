<?php
/**
 * @file
 * datigov_user.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function datigov_user_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_user_kind'
  $field_bases['field_user_kind'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_user_kind',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'user_kind',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
