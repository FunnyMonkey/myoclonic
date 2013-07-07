<?php
/**
 * @file
 * Base install profile setup for Myoclonic.
 */

/**
 * Implements hook_install_tasks().
 */
function myoclonic_install_tasks() {
  return array(
    'myoclonic_install_cleanup' => array(
      'display_name' => t('Install Cleanup'),
    ),
  );
}

/**
 * Perform any necessary additional cleanup steps.
 */
function myoclonic_install_cleanup() {
  // Enable problematic modules
  // $modules = array(
  //  'fences',        // See http://drupal.org/node/1561244#comment-6423458
  // );
  // module_enable($modules);

  // Enable skeletontheme as default
  // variable_set('theme_default', 'mlc');
  // theme_enable(array('zoundation', 'mlc'));
  variable_set('theme_default', 'skeletontheme');
  theme_enable(array('skeletontheme', 'seven'));

  // Disable bartik
  // theme_disable(array('bartik'));

  // Avoid node_access_rebuild message on install.
  node_access_rebuild();

}
