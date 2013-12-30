<?php
/**
 * @file
 * myoc_theme_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function myoc_theme_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_bamboo_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 0,
    'toggle_comment_user_picture' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'breadcrumbs' => 0,
    'bamboo_themelogo' => 1,
    'theme_bg' => 'dark_linen',
    'theme_color_palette' => 'warm_purple',
    'header_font_style' => 'serif',
    'body_font_style' => 'sans_serif',
    'theme_sidebar_location' => 'sidebar_right',
    'bamboo_localcss' => 0,
    'bamboo_tertiarymenu' => 0,
    'bamboo_viewport' => 1,
    'bamboo_custom_css_location' => 0,
    'bamboo_custom_css_path' => '',
  );
  $export['theme_bamboo_settings'] = $strongarm;

  return $export;
}
