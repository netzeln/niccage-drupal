<?php
/**
 * @file
 * fan_art.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fan_art_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create cage_art content'.
  $permissions['create cage_art content'] = array(
    'name' => 'create cage_art content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderator' => 'moderator',
      'true fan' => 'true fan',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any cage_art content'.
  $permissions['delete any cage_art content'] = array(
    'name' => 'delete any cage_art content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderator' => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own cage_art content'.
  $permissions['delete own cage_art content'] = array(
    'name' => 'delete own cage_art content',
    'roles' => array(
      'administrator' => 'administrator',
      'true fan' => 'true fan',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any cage_art content'.
  $permissions['edit any cage_art content'] = array(
    'name' => 'edit any cage_art content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderator' => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own cage_art content'.
  $permissions['edit own cage_art content'] = array(
    'name' => 'edit own cage_art content',
    'roles' => array(
      'administrator' => 'administrator',
      'true fan' => 'true fan',
    ),
    'module' => 'node',
  );

  return $permissions;
}
