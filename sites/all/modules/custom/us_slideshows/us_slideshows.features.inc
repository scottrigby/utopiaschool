<?php
/**
 * @file
 * us_slideshows.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function us_slideshows_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function us_slideshows_node_info() {
  $items = array(
    'album' => array(
      'name' => t('Album'),
      'base' => 'node_content',
      'description' => t('A photo Album.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
