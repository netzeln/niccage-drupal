<?php
/**
 * @file
 * fan_art.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function fan_art_taxonomy_default_vocabularies() {
  return array(
    'cage_art_types' => array(
      'name' => 'cage art types',
      'machine_name' => 'cage_art_types',
      'description' => 'types of cage art',
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
