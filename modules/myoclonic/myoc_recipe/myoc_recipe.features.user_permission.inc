<?php
/**
 * @file
 * myoc_recipe.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function myoc_recipe_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create recipe content'.
  $permissions['create recipe content'] = array(
    'name' => 'create recipe content',
    'roles' => array(
      'admin' => 'admin',
      'content creator' => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any recipe content'.
  $permissions['delete any recipe content'] = array(
    'name' => 'delete any recipe content',
    'roles' => array(
      'admin' => 'admin',
      'content creator' => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own recipe content'.
  $permissions['delete own recipe content'] = array(
    'name' => 'delete own recipe content',
    'roles' => array(
      'admin' => 'admin',
      'content creator' => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any recipe content'.
  $permissions['edit any recipe content'] = array(
    'name' => 'edit any recipe content',
    'roles' => array(
      'admin' => 'admin',
      'content creator' => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own recipe content'.
  $permissions['edit own recipe content'] = array(
    'name' => 'edit own recipe content',
    'roles' => array(
      'admin' => 'admin',
      'content creator' => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'export recipes'.
  $permissions['export recipes'] = array(
    'name' => 'export recipes',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'recipe',
  );

  // Exported permission: 'import recipes'.
  $permissions['import recipes'] = array(
    'name' => 'import recipes',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'recipe',
  );

  return $permissions;
}
