<?php
/**
 * @file
 * datigov_subscriptions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function datigov_subscriptions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function datigov_subscriptions_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function datigov_subscriptions_flag_default_flags() {
  $flags = array();
  // Exported flag: "Dataset Subscriptions".
  $flags['subscribe_node'] = array(
    'entity_type' => 'node',
    'title' => 'Dataset Subscriptions',
    'global' => 0,
    'types' => array(
      0 => 'dataset',
    ),
    'flag_short' => 'Sottoscrivi',
    'flag_long' => '',
    'flag_message' => 'Hai sottoscritto gli aggiornamenti per questo dataset.',
    'unflag_short' => 'Disiscriviti',
    'unflag_long' => '',
    'unflag_message' => 'Non sei più sottoscritto.',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'datigov_subscriptions',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_default_message_type().
 */
function datigov_subscriptions_default_message_type() {
  $items = array();
  $items['dataset_updated_message_type'] = entity_import('message_type', '{
    "name" : "dataset_updated_message_type",
    "description" : "Dataset Updated message type",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "dataset [message:field-node-ref:field-long-title] aggiornato su dati.gov.it",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003Edataset [message:field-node-ref:field-long-title] aggiornato su dati.gov.it\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Il dataset \\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-node-ref:field-long-title]\\u003C\\/a\\u003E \\u00e8 stato aggiornato.\\r\\n\\r\\nRicevi questo messaggio perch\\u00e9 hai richiesto di ricevere aggiornamenti quando il dataset in oggetto viene aggiornato. Per cancellare la sottoscrizione clicca su \\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-node-ref:field-long-title]\\u003C\\/a\\u003E e clicca su \\u003Cstrong\\u003Edisiscriviti\\u003C\\/strong\\u003E.",
          "format" : "html",
          "safe_value" : "\\u003Cp\\u003EIl dataset \\u003Ca href=\\u0022url]\\u0022\\u003E[message:field-node-ref:field-long-title]\\u003C\\/a\\u003E \\u00e8 stato aggiornato.\\u003C\\/p\\u003E\\n\\n\\u003Cp\\u003ERicevi questo messaggio perch\\u00e9 hai richiesto di ricevere aggiornamenti quando il dataset in oggetto viene aggiornato. Per cancellare la sottoscrizione clicca su \\u003Ca href=\\u0022url]\\u0022\\u003E[message:field-node-ref:field-long-title]\\u003C\\/a\\u003E e clicca su \\u003Cstrong\\u003Edisiscriviti\\u003C\\/strong\\u003E.\\u003C\\/p\\u003E"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}
