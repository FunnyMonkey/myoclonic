<?php
/**
 * @file
 * myoc_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function myoc_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create myoc_page content'.
  $permissions['create myoc_page content'] = array(
    'name' => 'create myoc_page content',
    'roles' => array(
      'admin' => 'admin',
      'content creator' => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any myoc_page content'.
  $permissions['delete any myoc_page content'] = array(
    'name' => 'delete any myoc_page content',
    'roles' => array(
      'admin' => 'admin',
      'content creator' => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own myoc_page content'.
  $permissions['delete own myoc_page content'] = array(
    'name' => 'delete own myoc_page content',
    'roles' => array(
      'admin' => 'admin',
      'content creator' => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any myoc_page content'.
  $permissions['edit any myoc_page content'] = array(
    'name' => 'edit any myoc_page content',
    'roles' => array(
      'admin' => 'admin',
      'content creator' => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own myoc_page content'.
  $permissions['edit own myoc_page content'] = array(
    'name' => 'edit own myoc_page content',
    'roles' => array(
      'admin' => 'admin',
      'content creator' => 'content creator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
