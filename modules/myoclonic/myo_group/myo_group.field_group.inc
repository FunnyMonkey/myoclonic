<?php
/**
 * @file
 * myo_group.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function myo_group_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_myo_group_settings|node|myo_group|form';
  $field_group->group_name = 'group_myo_group_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'myo_group';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group settings',
    'weight' => '1',
    'children' => array(
      0 => 'group_group',
      1 => 'og_roles_permissions',
      2 => 'group_access',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_myo_group_settings|node|myo_group|form'] = $field_group;

  return $export;
}
