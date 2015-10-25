<?php
/**
 * @file
 * us_theme.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function us_theme_strongarm() {
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
  $strongarm->name = 'theme_us_kalatheme_settings';
  $strongarm->value = array(
    'toggle_logo' => 0,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_comment_user_verification' => 0,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'bootstrap_library' => 'cosmo',
    'fontawesome' => 1,
    'bootstrap_upload' => '',
    'build_subtheme' => 0,
    'magic' => 1,
    'subtheme_name' => '',
    'subtheme_base' => 'kalatheme',
    'always_show_page_title' => 1,
    'responsive_toggle' => 1,
    'pane_styles_toggle' => 1,
    'pane_classes' => array(),
  );
  $export['theme_us_kalatheme_settings'] = $strongarm;

  return $export;
}
