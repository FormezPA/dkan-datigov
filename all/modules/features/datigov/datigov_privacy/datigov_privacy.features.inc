<?php
/**
 * @file
 * datigov_privacy.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function datigov_privacy_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
