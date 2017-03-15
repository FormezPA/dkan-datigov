<?php
/**
 * @file
 * The primary PHP file for this theme.
 */

/**
 * Variables preprocess function for the "page" theming hook.
 */
function datigov_preprocess_page(&$vars) {
  
 
  if (isset($vars['node'])) {
  
    $suggests = &$vars['theme_hook_suggestions'];
    // Get path arguments.
    $args = arg();
    // Remove first argument of "node".
    unset($args[0]);
    // Set type.
    $type = "page__type_{$vars['node']->type}";
    // Bring it all together.
    $suggests = array_merge(
      $suggests,
      array($type),
      theme_get_suggestions($args, $type)
    );
  }

}



function datigov_preprocess_node(&$variables) {
  //dpm($variables);
}

/**
 * Recupera il nodo di tipo catalogo dal campo field_harvest_source_ref
 *    del dataset (passando per l'ID harvester).
 * 
 * @param stdClass $node_dataset
 * @return stdClass
 */
function _datigov_load_catalog_from_dataset($node_dataset){
  
  $catalog = null;

  $harvest_ref = (isset($node_dataset->field_harvest_source_ref[LANGUAGE_NONE][0]['target_id'])) 
    ? $node_dataset->field_harvest_source_ref[LANGUAGE_NONE][0]['target_id'] : null;

  if($harvest_ref != null) {

    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'node')
      ->entityCondition('bundle', 'catalog')
      ->propertyCondition('status', NODE_PUBLISHED)
      ->fieldCondition('field_harvester_reference', 'target_id', $harvest_ref, '=')
      ->range(0,1)
      ->addMetaData('account', user_load(1));

    $result = $query->execute();

    if (isset($result['node'])) {
      $news_items_nids = array_keys($result['node']);
      $news_items = entity_load('node', $news_items_nids);
      list($catalog) = array_values($news_items);
    }
    
  }
  
  return $catalog;

}


