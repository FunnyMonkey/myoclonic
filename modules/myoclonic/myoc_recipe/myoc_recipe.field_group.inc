<?php
/**
 * @file
 * myoc_recipe.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function myoc_recipe_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_myoc_visibility|node|recipe|form';
  $field_group->group_name = 'group_myoc_visibility';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Visibility',
    'weight' => '2',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'group_content_access',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-myoc-visibility field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_myoc_visibility|node|recipe|form'] = $field_group;

  return $export;
}
