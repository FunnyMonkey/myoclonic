<?php
/**
 * @file
 * myo_galleria.galleria_default_preset.inc
 */

/**
 * Implements hook_galleria_default_presets().
 */
function myo_galleria_galleria_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'myo_settings';
  $preset->title = 'Myoclonic settings';
  $preset->theme = 'classic';
  $preset->plugins = array();
  $preset->imagestyle_thumb = 'galleria_thumb';
  $preset->imagestyle_normal = 'large';
  $preset->imagestyle_big = 'myo_lightbox';
  $preset->options = array(
    'height' => 500,
    'width' => 750,
    'swipe' => TRUE,
    'fullscreenDoubleTap' => TRUE,
    'responsive' => TRUE,
    'lightbox' => TRUE,
  );
  $export['myo_settings'] = $preset;

  return $export;
}
