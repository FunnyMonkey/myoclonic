<?php
/**
 * @file
 * myoc_site_perms.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function myoc_site_perms_taxonomy_default_vocabularies() {
  return array(
    'myoc_subject' => array(
      'name' => 'Subject',
      'machine_name' => 'myoc_subject',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
