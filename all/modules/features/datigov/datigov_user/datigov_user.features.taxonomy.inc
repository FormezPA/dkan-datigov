<?php
/**
 * @file
 * datigov_user.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function datigov_user_taxonomy_default_vocabularies() {
  return array(
    'user_kind' => array(
      'name' => 'Tipo utente',
      'machine_name' => 'user_kind',
      'description' => 'The kind of user: company, public administration, professional, citizen, ...',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
