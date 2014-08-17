<?php
/**
 * @file
 * us_people.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function us_people_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: committee.
  $roles['committee'] = array(
    'name' => 'committee',
    'weight' => 3,
  );

  // Exported role: resident.
  $roles['resident'] = array(
    'name' => 'resident',
    'weight' => 4,
  );

  return $roles;
}
