<?php
/**
 * @file
 * myo_post.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function myo_post_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function myo_post_node_info() {
  $items = array(
    'myo_post' => array(
      'name' => t('Post'),
      'base' => 'node_content',
      'description' => t('Posts are used to add content to the site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
