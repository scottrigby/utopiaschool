<?php
/**
 * @file
 * us_classes.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function us_classes_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['us_classes-user_classes_involvement'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'user_classes_involvement',
    'module' => 'us_classes',
    'node_types' => array(),
    'pages' => 'user/*/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'rainbow' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rainbow',
        'weight' => 0,
      ),
      'responsive_bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'responsive_bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'us_kalatheme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'us_kalatheme',
        'weight' => -7,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
