<?php
/**
 * @file
 * myo_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function myo_roles_user_default_roles() {
  $roles = array();

  // Exported role: admin.
  $roles['admin'] = array(
    'name' => 'admin',
    'weight' => 4,
  );

  // Exported role: maintainer.
  $roles['maintainer'] = array(
    'name' => 'maintainer',
    'weight' => 3,
  );

  // Exported role: member.
  $roles['member'] = array(
    'name' => 'member',
    'weight' => 2,
  );

  return $roles;
}
