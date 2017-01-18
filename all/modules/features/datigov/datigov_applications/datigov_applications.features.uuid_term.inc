<?php
/**
 * @file
 * datigov_applications.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function datigov_applications_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Web',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '23d37277-2622-48d8-b2f7-893c8ab55c7c',
    'vocabulary_machine_name' => 'tipo_di_applicazione',
  );
  $terms[] = array(
    'name' => 'Windows',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '27c2688f-2aba-4150-8469-642e0d74ee5d',
    'vocabulary_machine_name' => 'tipo_di_applicazione',
  );
  $terms[] = array(
    'name' => 'Ovi',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '4bf42c74-963c-437b-a441-d5b4fe123f04',
    'vocabulary_machine_name' => 'tipo_di_applicazione',
  );
  $terms[] = array(
    'name' => 'Privato',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '50dfee3e-3b61-47a9-9480-6fb5b6da23d5',
    'vocabulary_machine_name' => 'produttore_dell_applicazione',
  );
  $terms[] = array(
    'name' => 'App World',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '608e6a02-4e1b-4d8d-ac60-29b5bf93aac2',
    'vocabulary_machine_name' => 'tipo_di_applicazione',
  );
  $terms[] = array(
    'name' => 'Android',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '967b2108-2c31-47ee-a7c0-3fc4a394efa8',
    'vocabulary_machine_name' => 'tipo_di_applicazione',
  );
  $terms[] = array(
    'name' => 'Samsung',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a5897986-f539-4e81-aa8e-ee7a9e8d14e8',
    'vocabulary_machine_name' => 'tipo_di_applicazione',
  );
  $terms[] = array(
    'name' => 'Pubblica Amministrazione',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a5992e1e-f24a-4dc5-a052-f8fb6bc368ad',
    'vocabulary_machine_name' => 'produttore_dell_applicazione',
  );
  $terms[] = array(
    'name' => 'iPhone',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e23c603f-fb9b-4963-8743-0c5d8bd72eaa',
    'vocabulary_machine_name' => 'tipo_di_applicazione',
  );
  return $terms;
}
