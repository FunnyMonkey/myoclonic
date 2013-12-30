<?php
/**
 * @file
 * myoc_post.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function myoc_post_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_myoc_pi|node|myoc_post|form';
  $field_group->group_name = 'group_myoc_pi';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'myoc_post';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Post Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_myoc_type',
      1 => 'field_myoc_tr_subject',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-myoc-pi field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_myoc_pi|node|myoc_post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_myoc_visibility|node|myoc_post|form';
  $field_group->group_name = 'group_myoc_visibility';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'myoc_post';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Visibility',
    'weight' => '4',
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
  $export['group_myoc_visibility|node|myoc_post|form'] = $field_group;

  return $export;
}
