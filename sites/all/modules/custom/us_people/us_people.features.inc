<?php
/**
 * @file
 * us_people.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function us_people_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function us_people_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function us_people_image_default_styles() {
  $styles = array();

  // Exported image style: tiny.
  $styles['tiny'] = array(
    'name' => 'tiny',
    'label' => 'tiny',
    'effects' => array(
      11 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 30,
          'height' => 30,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_default_profile2_type().
 */
function us_people_default_profile2_type() {
  $items = array();
  $items['main'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "main",
    "label" : "Public profile",
    "weight" : "0",
    "data" : { "registration" : 1 },
    "rdf_mapping" : []
  }');
  return $items;
}
