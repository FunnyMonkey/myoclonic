<?php
/**
 * @file
 * myoc_post.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function myoc_post_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create myoc_post content'.
  $permissions['create myoc_post content'] = array(
    'name' => 'create myoc_post content',
    'roles' => array(
      'admin' => 'admin',
      'content creator' => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any myoc_post content'.
  $permissions['delete any myoc_post content'] = array(
    'name' => 'delete any myoc_post content',
    'roles' => array(
      'admin' => 'admin',
      'content creator' => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own myoc_post content'.
  $permissions['delete own myoc_post content'] = array(
    'name' => 'delete own myoc_post content',
    'roles' => array(
      'admin' => 'admin',
      'content creator' => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any myoc_post content'.
  $permissions['edit any myoc_post content'] = array(
    'name' => 'edit any myoc_post content',
    'roles' => array(
      'admin' => 'admin',
      'content creator' => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own myoc_post content'.
  $permissions['edit own myoc_post content'] = array(
    'name' => 'edit own myoc_post content',
    'roles' => array(
      'admin' => 'admin',
      'content creator' => 'content creator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
