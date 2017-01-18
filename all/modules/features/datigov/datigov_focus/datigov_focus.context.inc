<?php
/**
 * @file
 * datigov_focus.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function datigov_focus_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'agenda_open_data_menu';
  $context->description = '';
  $context->tag = 'Focus, menu';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'focus/agenda-open-data' => 'focus/agenda-open-data',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => array(
      0 => 'main-menu:focus/agenda-open-data',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Focus, menu');
  $export['agenda_open_data_menu'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'data_journalism_menu';
  $context->description = '';
  $context->tag = 'Focus, menu';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'focus/data-journalism' => 'focus/data-journalism',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => array(
      0 => 'main-menu:focus/data-journalism',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Focus, menu');
  $export['data_journalism_menu'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'geo_dati_menu';
  $context->description = '';
  $context->tag = 'Focus, menu';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'focus/geo-dati' => 'focus/geo-dati',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => array(
      0 => 'main-menu:focus/geo-dati',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Focus, menu');
  $export['geo_dati_menu'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'open_data_for_all';
  $context->description = '';
  $context->tag = 'Focus, menu';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'focus/open-data-for-all' => 'focus/open-data-for-all',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => array(
      0 => 'main-menu:focus/open-data-for-all',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Focus, menu');
  $export['open_data_for_all'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'smart_city_menu';
  $context->description = '';
  $context->tag = 'Focus, menu';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'focus/smart-city' => 'focus/smart-city',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => array(
      0 => 'main-menu:focus/smart-city',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Focus, menu');
  $export['smart_city_menu'] = $context;

  return $export;
}
