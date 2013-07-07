<?php
/**
 * @file
 * myo_og_perms.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function myo_og_perms_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:myo_group:add user'
  $permissions['node:myo_group:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:myo_group:administer group'
  $permissions['node:myo_group:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:myo_group:approve and deny subscription'
  $permissions['node:myo_group:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:myo_group:create myo_post content'
  $permissions['node:myo_group:create myo_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:myo_group:create recipe content'
  $permissions['node:myo_group:create recipe content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:myo_group:delete any myo_post content'
  $permissions['node:myo_group:delete any myo_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:myo_group:delete any recipe content'
  $permissions['node:myo_group:delete any recipe content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:myo_group:delete own myo_post content'
  $permissions['node:myo_group:delete own myo_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:myo_group:delete own recipe content'
  $permissions['node:myo_group:delete own recipe content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:myo_group:manage members'
  $permissions['node:myo_group:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:myo_group:manage permissions'
  $permissions['node:myo_group:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:myo_group:manage roles'
  $permissions['node:myo_group:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:myo_group:subscribe'
  $permissions['node:myo_group:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:myo_group:subscribe without approval'
  $permissions['node:myo_group:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:myo_group:unsubscribe'
  $permissions['node:myo_group:unsubscribe'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:myo_group:update any myo_post content'
  $permissions['node:myo_group:update any myo_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:myo_group:update any recipe content'
  $permissions['node:myo_group:update any recipe content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:myo_group:update group'
  $permissions['node:myo_group:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:myo_group:update own myo_post content'
  $permissions['node:myo_group:update own myo_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:myo_group:update own recipe content'
  $permissions['node:myo_group:update own recipe content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
