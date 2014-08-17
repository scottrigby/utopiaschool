<?php
/**
 * @file
 * us_people.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function us_people_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'view any main profile'.
  $permissions['view any main profile'] = array(
    'name' => 'view any main profile',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
  );

  return $permissions;
}
