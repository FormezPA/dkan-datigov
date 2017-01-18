<?php
/**
 * @file
 * datigov_regional.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function datigov_regional_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
