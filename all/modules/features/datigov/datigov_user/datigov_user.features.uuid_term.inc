<?php
/**
 * @file
 * datigov_user.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function datigov_user_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Pubblica Amministrazione',
    'description' => '',
    'format' => 'html',
    'weight' => 0,
    'uuid' => '04c6855d-fb15-4f93-9a4b-8d01734ecb30',
    'vocabulary_machine_name' => 'user_kind',
  );
  $terms[] = array(
    'name' => 'Cittadino',
    'description' => '',
    'format' => 'html',
    'weight' => 0,
    'uuid' => '2929b02e-e535-45b9-b229-cb5c43976d0a',
    'vocabulary_machine_name' => 'user_kind',
  );
  $terms[] = array(
    'name' => 'Professionista',
    'description' => '',
    'format' => 'html',
    'weight' => 0,
    'uuid' => '89199aee-6590-42b5-b9e8-d0adbc282de4',
    'vocabulary_machine_name' => 'user_kind',
  );
  $terms[] = array(
    'name' => 'Azienda',
    'description' => '',
    'format' => 'html',
    'weight' => 0,
    'uuid' => 'c8c880b7-96ba-4526-82ba-472c4da572e4',
    'vocabulary_machine_name' => 'user_kind',
  );
  return $terms;
}
