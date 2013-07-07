<?php
/**
 * @file
 * myo_menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function myo_menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-myo-add-content.
  $menus['menu-myo-add-content'] = array(
    'menu_name' => 'menu-myo-add-content',
    'title' => 'Add content',
    'description' => 'A menu to hold the links for adding content.',
  );
  // Exported menu: menu-myo-login.
  $menus['menu-myo-login'] = array(
    'menu_name' => 'menu-myo-login',
    'title' => 'Access',
    'description' => 'Login menu options',
  );
  // Exported menu: menu-myo-site-menu.
  $menus['menu-myo-site-menu'] = array(
    'menu_name' => 'menu-myo-site-menu',
    'title' => 'Site menu',
    'description' => 'The main nav for the site. This custom option exists to avoid overwriting any of the default menus, as these overrides can often be problematic with Features.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('A menu to hold the links for adding content.');
  t('Access');
  t('Add content');
  t('Login menu options');
  t('Site menu');
  t('The main nav for the site. This custom option exists to avoid overwriting any of the default menus, as these overrides can often be problematic with Features.');


  return $menus;
}
