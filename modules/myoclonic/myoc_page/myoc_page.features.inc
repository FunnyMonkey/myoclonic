<?php
/**
 * @file
 * myoc_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function myoc_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function myoc_page_node_info() {
  $items = array(
    'myoc_page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('Use pages to create the general navigation of your site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
