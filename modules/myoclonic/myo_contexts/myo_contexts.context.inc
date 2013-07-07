<?php
/**
 * @file
 * myo_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function myo_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'myo_add_content';
  $context->description = 'Add Content menu';
  $context->tag = 'navigation';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'myo_group' => 'myo_group',
        'myo_post' => 'myo_post',
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
        'menu-menu-myo-add-content' => array(
          'module' => 'menu',
          'delta' => 'menu-myo-add-content',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add Content menu');
  t('navigation');
  $export['myo_add_content'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'myo_add_content_views';
  $context->description = 'Add Content menu for views';
  $context->tag = 'navigation';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'myo_all_posts:page' => 'myo_all_posts:page',
        'myo_image_gallery:page' => 'myo_image_gallery:page',
        'myo_recipe_list:page' => 'myo_recipe_list:page',
        'recipe_ingredient_index:page' => 'recipe_ingredient_index:page',
        'recipe_name_index:page' => 'recipe_name_index:page',
        'recipes_by_ingredient:page' => 'recipes_by_ingredient:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-myo-add-content' => array(
          'module' => 'menu',
          'delta' => 'menu-myo-add-content',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add Content menu for views');
  t('navigation');
  $export['myo_add_content_views'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'myo_login';
  $context->description = 'Login and Logout info';
  $context->tag = 'navigation';
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
        'menu-menu-myo-login' => array(
          'module' => 'menu',
          'delta' => 'menu-myo-login',
          'region' => 'header_top_right',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Login and Logout info');
  t('navigation');
  $export['myo_login'] = $context;

  return $export;
}
