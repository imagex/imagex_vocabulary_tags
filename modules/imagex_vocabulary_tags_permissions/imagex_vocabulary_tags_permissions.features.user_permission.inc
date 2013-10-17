<?php
/**
 * @file
 * imagex_vocabulary_tags_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function imagex_vocabulary_tags_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in 2'.
  /* $permissions['add terms in 2'] = array(
    'name' => 'add terms in 2',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
      'Content Moderator' => 'Content Moderator',
    ),
    'module' => 'taxonomy_access_fix',
  ); */

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
      'Content Moderator' => 'Content Moderator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
