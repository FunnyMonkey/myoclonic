<?php
/**
 * @file
 * myo_group.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function myo_group_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function myo_group_node_info() {
  $items = array(
    'myo_group' => array(
      'name' => t('Group'),
      'base' => 'node_content',
      'description' => t('Group type for members.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
