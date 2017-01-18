<?php
/**
 * @file
 * datigov_footer.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function datigov_footer_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'footer_context';
  $context->description = '';
  $context->tag = 'Footer';
  $context->conditions = array(
    'default' => array(
      'values' => array(
        'context_condition_default' => 'context_condition_default',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-cataloghi-nazionali' => array(
          'module' => 'menu',
          'delta' => 'menu-cataloghi-nazionali',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'footer_second',
          'weight' => '-10',
        ),
        'menu-menu-focus' => array(
          'module' => 'menu',
          'delta' => 'menu-focus',
          'region' => 'footer_third',
          'weight' => '-10',
        ),
        'menu-menu-footer-logo' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-logo',
          'region' => 'footer_fourth',
          'weight' => '-10',
        ),
        'menu-menu-social-networks' => array(
          'module' => 'menu',
          'delta' => 'menu-social-networks',
          'region' => 'footer_fourth',
          'weight' => '-9',
        ),
        'menu-menu-copyright' => array(
          'module' => 'menu',
          'delta' => 'menu-copyright',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Footer');
  $export['footer_context'] = $context;

  return $export;
}
