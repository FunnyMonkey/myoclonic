<?php
/**
 * @file
 * myoc_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function myoc_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'myoc_global';
  $context->description = 'Basic nav elements';
  $context->tag = 'Global';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'top_links',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Basic nav elements');
  t('Global');
  $export['myoc_global'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'myoc_node_gallery';
  $context->description = 'Galleries on nodes';
  $context->tag = 'node';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'myoc_post' => 'myoc_post',
        'recipe' => 'recipe',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-myoc_gallery-block' => array(
          'module' => 'views',
          'delta' => 'myoc_gallery-block',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Galleries on nodes');
  t('node');
  $export['myoc_node_gallery'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'myoc_sidebar_nav';
  $context->description = 'Sidebar nav on list pages';
  $context->tag = 'general';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'recipe' => 'recipe',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'views' => array(
      'values' => array(
        'myoc_gall_list:page' => 'myoc_gall_list:page',
        'myoc_notes:page' => 'myoc_notes:page',
        'myoc_posts:page' => 'myoc_posts:page',
        'myoc_recipe_name:page' => 'myoc_recipe_name:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-myoc_random_image-block' => array(
          'module' => 'views',
          'delta' => 'myoc_random_image-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sidebar nav on list pages');
  t('general');
  $export['myoc_sidebar_nav'] = $context;

  return $export;
}
