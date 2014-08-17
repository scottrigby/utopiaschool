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
  $strongarm->name = 'user_picture_default';
  $strongarm->value = 'http://placekitten.com/480/480';
  $export['user_picture_default'] = $strongarm;

  return $export;
}
