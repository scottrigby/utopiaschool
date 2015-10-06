<?php
/**
 * @file
 * us_contact.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function us_contact_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'edit any entityform'.
  $permissions['edit any entityform'] = array(
    'name' => 'edit any entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'committee' => 'committee',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'view any entityform'.
  $permissions['view any entityform'] = array(
    'name' => 'view any entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'committee' => 'committee',
    ),
    'module' => 'entityform',
  );

  return $permissions;
}
