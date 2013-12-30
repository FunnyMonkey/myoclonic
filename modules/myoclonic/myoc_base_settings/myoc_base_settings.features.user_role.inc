<?php
/**
 * @file
 * myoc_base_settings.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function myoc_base_settings_user_default_roles() {
  $roles = array();

  // Exported role: admin.
  $roles['admin'] = array(
    'name' => 'admin',
    'weight' => 2,
  );

  // Exported role: content creator.
  $roles['content creator'] = array(
    'name' => 'content creator',
    'weight' => 3,
  );

  return $roles;
}
