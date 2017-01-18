<?php
/**
 * @file
 * datigov_footer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function datigov_footer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
