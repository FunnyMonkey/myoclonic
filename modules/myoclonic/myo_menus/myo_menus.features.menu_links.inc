<?php
/**
 * @file
 * myo_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function myo_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-myo-add-content:node/add/myo-group
  $menu_links['menu-myo-add-content:node/add/myo-group'] = array(
    'menu_name' => 'menu-myo-add-content',
    'link_path' => 'node/add/myo-group',
    'router_path' => 'node/add/myo-group',
    'link_title' => 'Add a Group',
    'options' => array(
      'attributes' => array(
        'title' => 'Add new groups to the site',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -12,
  );
  // Exported menu link: menu-myo-add-content:node/add/myo-page
  $menu_links['menu-myo-add-content:node/add/myo-page'] = array(
    'menu_name' => 'menu-myo-add-content',
    'link_path' => 'node/add/myo-page',
    'router_path' => 'node/add/myo-page',
    'link_title' => 'Add a Page',
    'options' => array(
      'attributes' => array(
        'title' => 'Add a page',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
  );
  // Exported menu link: menu-myo-add-content:node/add/myo-post
  $menu_links['menu-myo-add-content:node/add/myo-post'] = array(
    'menu_name' => 'menu-myo-add-content',
    'link_path' => 'node/add/myo-post',
    'router_path' => 'node/add/myo-post',
    'link_title' => 'Create a Post',
    'options' => array(
      'attributes' => array(
        'title' => 'Add a new post to the site.',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -16,
  );
  // Exported menu link: menu-myo-add-content:node/add/recipe
  $menu_links['menu-myo-add-content:node/add/recipe'] = array(
    'menu_name' => 'menu-myo-add-content',
    'link_path' => 'node/add/recipe',
    'router_path' => 'node/add/recipe',
    'link_title' => 'Share a Recipe',
    'options' => array(
      'attributes' => array(
        'title' => 'Add a recipe to the site.',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -14,
  );
  // Exported menu link: menu-myo-login:user
  $menu_links['menu-myo-login:user'] = array(
    'menu_name' => 'menu-myo-login',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Account',
    'options' => array(
      'attributes' => array(
        'title' => 'Login and Account links',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-myo-login:user/logout
  $menu_links['menu-myo-login:user/logout'] = array(
    'menu_name' => 'menu-myo-login',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(
        'title' => 'Log out',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
  );
  // Exported menu link: menu-myo-site-menu:<front>
  $menu_links['menu-myo-site-menu:<front>'] = array(
    'menu_name' => 'menu-myo-site-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => 'Return to the Home Page',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -16,
  );
  // Exported menu link: menu-myo-site-menu:groups-admin
  $menu_links['menu-myo-site-menu:groups-admin'] = array(
    'menu_name' => 'menu-myo-site-menu',
    'link_path' => 'groups-admin',
    'router_path' => 'groups-admin',
    'link_title' => 'Group Admin',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer Groups within the site',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
  );
  // Exported menu link: menu-myo-site-menu:image-gallery
  $menu_links['menu-myo-site-menu:image-gallery'] = array(
    'menu_name' => 'menu-myo-site-menu',
    'link_path' => 'image-gallery',
    'router_path' => 'image-gallery',
    'link_title' => 'Image Galleries',
    'options' => array(
      'attributes' => array(
        'title' => 'All images stored on the site',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -14,
  );
  // Exported menu link: menu-myo-site-menu:recipe-list
  $menu_links['menu-myo-site-menu:recipe-list'] = array(
    'menu_name' => 'menu-myo-site-menu',
    'link_path' => 'recipe-list',
    'router_path' => 'recipe-list',
    'link_title' => 'Recipes',
    'options' => array(
      'attributes' => array(
        'title' => 'All recipes added to the site.',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -12,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Account');
  t('Add a Group');
  t('Add a Page');
  t('Create a Post');
  t('Group Admin');
  t('Home');
  t('Image Galleries');
  t('Logout');
  t('Recipes');
  t('Share a Recipe');


  return $menu_links;
}
