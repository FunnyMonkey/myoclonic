<?php
/**
 * @file
 * myoc_base_settings.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function myoc_base_settings_filter_default_formats() {
  $formats = array();

  // Exported format: Basic.
  $formats['myoc_basic'] = array(
    'format' => 'myoc_basic',
    'name' => 'Basic',
    'cache' => 1,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <abbr> <acronym> <address> <area> <b> <big> <blockquote> <br> <caption> <center> <cite> <code> <dd> <del> <dfn> <dir> <div> <dl> <dt> <em> <fieldset> <h1> <h2> <h3> <h4> <h5> <h6> <hr> <i> <img> <ins> <kbd> <label> <legend> <li> <map> <menu> <ol> <optgroup> <option> <p> <pre> <q> <s> <samp> <select> <small> <span> <strike> <strong> <sub> <sup> <table> <tbody> <td> <textarea> <tfoot> <th> <thead> <tr> <tt> <u> <ul> <var>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'video_filter' => array(
        'weight' => -1,
        'status' => 1,
        'settings' => array(
          'video_filter_width' => 400,
          'video_filter_height' => 400,
          'video_filter_autoplay' => 1,
          'video_filter_related' => 1,
          'video_filter_html5' => 1,
        ),
      ),
      'filter_autop' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['myoc_full_html'] = array(
    'format' => 'myoc_full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -8,
    'filters' => array(
      'video_filter' => array(
        'weight' => -1,
        'status' => 1,
        'settings' => array(
          'video_filter_width' => 400,
          'video_filter_height' => 400,
          'video_filter_autoplay' => 1,
          'video_filter_related' => 1,
          'video_filter_html5' => 1,
        ),
      ),
      'filter_autop' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
