<?php
/**
 * @file
 * myoc_post.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function myoc_post_ctools_plugin_api($module = NULL, $api = NULL) {
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
function myoc_post_node_info() {
  $items = array(
    'myoc_post' => array(
      'name' => t('Post'),
      'base' => 'node_content',
      'description' => t('A post can contain text, images, and/or video embedded from other sources.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
