<?php
/**
 * @file
 * us_classes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function us_classes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function us_classes_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_date_custom_date_formats().
 */
function us_classes_fe_date_custom_date_formats() {
  $custom_date_formats = array();
  $custom_date_formats['D, M j'] = 'D, M j';
  $custom_date_formats['g:ia'] = 'g:ia';
  $custom_date_formats['l, F j'] = 'l, F j';
  return $custom_date_formats;
}

/**
 * Implements hook_date_format_types().
 */
function us_classes_date_format_types() {
  $format_types = array();
  // Exported date format type: date_no_time
  $format_types['date_no_time'] = 'Date no time';
  // Exported date format type: long_no_year
  $format_types['long_no_year'] = 'Long no year';
  // Exported date format type: time_only
  $format_types['time_only'] = 'Time only';
  return $format_types;
}

/**
 * Implements hook_flag_default_flags().
 */
function us_classes_flag_default_flags() {
  $flags = array();
  // Exported flag: "Subscribe Class".
  $flags['subscribe_class'] = array(
    'entity_type' => 'node',
    'title' => 'Subscribe Class',
    'global' => 0,
    'types' => array(
      0 => 'class',
    ),
    'flag_short' => '+ Get involved',
    'flag_long' => '',
    'flag_message' => 'You are now involved in the class',
    'unflag_short' => '+ Change my involvement',
    'unflag_long' => 'Change your involvement in the class: [node:title]',
    'unflag_message' => 'You are no longer involved in the class',
    'unflag_denied_text' => '',
    'link_type' => 'form',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'form_flagging_help' => '',
    'form_flagging_button' => 'Confirm',
    'form_flagging_delete_button' => '- Remove me',
    'form_unflagging_help' => 'Are you sure you want to be removed from this class?',
    'form_unflagging_button' => 'Confirm',
    'form_unflag_link_leads_to_edit' => 1,
    'form_interaction' => 'flagging_inline',
    'module' => 'us_classes',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function us_classes_node_info() {
  $items = array(
    'class' => array(
      'name' => t('Class'),
      'base' => 'node_content',
      'description' => t('Propose a class'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'session' => array(
      'name' => t('Session'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
