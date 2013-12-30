<?php
/**
 * @file
 * myoc_group_perms.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function myoc_group_perms_og_features_default_permissions() {
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

  // Exported og permission: 'node:myo_group:create myoc_page content'
  $permissions['node:myo_group:create myoc_page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:myo_group:create myoc_post content'
  $permissions['node:myo_group:create myoc_post content'] = array(
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

  // Exported og permission: 'node:myo_group:delete any myoc_page content'
  $permissions['node:myo_group:delete any myoc_page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:myo_group:delete any myoc_post content'
  $permissions['node:myo_group:delete any myoc_post content'] = array(
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

  // Exported og permission: 'node:myo_group:delete own myoc_page content'
  $permissions['node:myo_group:delete own myoc_page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:myo_group:delete own myoc_post content'
  $permissions['node:myo_group:delete own myoc_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:myo_group:delete own recipe content'
  $permissions['node:myo_group:delete own recipe content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
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
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:myo_group:update any myoc_page content'
  $permissions['node:myo_group:update any myoc_page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:myo_group:update any myoc_post content'
  $permissions['node:myo_group:update any myoc_post content'] = array(
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

  // Exported og permission: 'node:myo_group:update body field'
  $permissions['node:myo_group:update body field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:myo_group:update field_myoc_files field'
  $permissions['node:myo_group:update field_myoc_files field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:myo_group:update field_myoc_image field'
  $permissions['node:myo_group:update field_myoc_image field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:myo_group:update field_myoc_tr_subject field'
  $permissions['node:myo_group:update field_myoc_tr_subject field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:myo_group:update field_myoc_type field'
  $permissions['node:myo_group:update field_myoc_type field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:myo_group:update group'
  $permissions['node:myo_group:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:myo_group:update group_access field'
  $permissions['node:myo_group:update group_access field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:myo_group:update group_content_access field'
  $permissions['node:myo_group:update group_content_access field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:myo_group:update group_group field'
  $permissions['node:myo_group:update group_group field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:myo_group:update og_group_ref field'
  $permissions['node:myo_group:update og_group_ref field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:myo_group:update og_roles_permissions field'
  $permissions['node:myo_group:update og_roles_permissions field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:myo_group:update og_user_node field'
  $permissions['node:myo_group:update og_user_node field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:myo_group:update own myoc_page content'
  $permissions['node:myo_group:update own myoc_page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:myo_group:update own myoc_post content'
  $permissions['node:myo_group:update own myoc_post content'] = array(
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

  // Exported og permission: 'node:myo_group:view body field'
  $permissions['node:myo_group:view body field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:myo_group:view field_myoc_files field'
  $permissions['node:myo_group:view field_myoc_files field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:myo_group:view field_myoc_image field'
  $permissions['node:myo_group:view field_myoc_image field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:myo_group:view field_myoc_tr_subject field'
  $permissions['node:myo_group:view field_myoc_tr_subject field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:myo_group:view field_myoc_type field'
  $permissions['node:myo_group:view field_myoc_type field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:myo_group:view group_access field'
  $permissions['node:myo_group:view group_access field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:myo_group:view group_content_access field'
  $permissions['node:myo_group:view group_content_access field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:myo_group:view group_group field'
  $permissions['node:myo_group:view group_group field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:myo_group:view og_group_ref field'
  $permissions['node:myo_group:view og_group_ref field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:myo_group:view og_roles_permissions field'
  $permissions['node:myo_group:view og_roles_permissions field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:myo_group:view og_user_node field'
  $permissions['node:myo_group:view og_user_node field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
