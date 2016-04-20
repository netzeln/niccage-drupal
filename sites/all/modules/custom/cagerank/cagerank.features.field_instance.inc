<?php
/**
 * @file
 * cagerank.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function cagerank_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-cage_rank-body'.
  $field_instances['node-cage_rank-body'] = array(
    'bundle' => 'cage_rank',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'VIP users can review',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 1,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-cage_rank-field_cage_role'.
  $field_instances['node-cage_rank-field_cage_role'] = array(
    'bundle' => 'cage_rank',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What was Nic Cage\'s role?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cage_role',
    'label' => 'Cage Role',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-cage_rank-field_stars'.
  $field_instances['node-cage_rank-field_stars'] = array(
    'bundle' => 'cage_rank',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Your rating from 1 to 5',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_stars',
    'label' => 'Stars',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Cage Role');
  t('Stars');
  t('VIP users can review');
  t('What was Nic Cage\'s role?');
  t('Your rating from 1 to 5');

  return $field_instances;
}
