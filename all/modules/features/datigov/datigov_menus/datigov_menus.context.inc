<?php
/**
 * @file
 * datigov_menus.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function datigov_menus_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'dataset_menu';
  $context->description = 'Imposta il menu per le pagine nella sezione dati';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'dataset/*' => 'dataset/*',
        'content/richiedi-un-dataset/*' => 'content/richiedi-un-dataset/*',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => array(
      0 => 'main-menu:dataset',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Imposta il menu per le pagine nella sezione dati');
  $export['dataset_menu'] = $context;

  return $export;
}
