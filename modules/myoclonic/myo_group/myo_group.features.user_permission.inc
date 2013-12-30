<?php
/**
 * @file
 * myo_group.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function myo_group_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create myo_group content'.
  $permissions['create myo_group content'] = array(
    'name' => 'create myo_group content',
    'roles' => array(
      'admin' => 'admin',
      'content creator' => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any myo_group content'.
  $permissions['delete any myo_group content'] = array(
    'name' => 'delete any myo_group content',
    'roles' => array(
      'admin' => 'admin',
      'content creator' => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own myo_group content'.
  $permissions['delete own myo_group content'] = array(
    'name' => 'delete own myo_group content',
    'roles' => array(
      'admin' => 'admin',
      'content creator' => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any myo_group content'.
  $permissions['edit any myo_group content'] = array(
    'name' => 'edit any myo_group content',
    'roles' => array(
      'admin' => 'admin',
      'content creator' => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own myo_group content'.
  $permissions['edit own myo_group content'] = array(
    'name' => 'edit own myo_group content',
    'roles' => array(
      'admin' => 'admin',
      'content creator' => 'content creator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
