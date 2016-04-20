<?php
/**
 * @file
 * fan_art.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fan_art_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function fan_art_node_info() {
  $items = array(
    'cage_art' => array(
      'name' => t('Cage Art'),
      'base' => 'node_content',
      'description' => t('for your cage-inspired art'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
