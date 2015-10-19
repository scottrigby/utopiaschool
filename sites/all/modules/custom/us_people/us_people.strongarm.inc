<?php
/**
 * @file
 * us_people.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function us_people_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_user__user';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'ckeditor' => array(
          'weight' => '4',
        ),
        'profile_main' => array(
          'weight' => '1',
        ),
        'account' => array(
          'weight' => '0',
        ),
        'timezone' => array(
          'weight' => '3',
        ),
        'comment_notify_settings' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(
        'profile_main' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'summary' => array(
          'default' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_user__user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_default';
  $strongarm->value = 'public://user-picture-default.jpg';
  $export['user_picture_default'] = $strongarm;

  return $export;
}
