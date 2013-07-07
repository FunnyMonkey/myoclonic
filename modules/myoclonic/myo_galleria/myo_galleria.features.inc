<?php
/**
 * @file
 * myo_galleria.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function myo_galleria_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "galleria" && $api == "galleria_default_preset") {
    return array("version" => "1");
  }
}
