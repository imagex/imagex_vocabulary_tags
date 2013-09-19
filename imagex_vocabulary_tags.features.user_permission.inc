<?php
/**
 * @file
 * imagex_vocabulary_tags.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function imagex_vocabulary_tags_user_default_permissions() {
  $permissions = array();

  // Exported permission: add terms in 1.
  $permissions['add terms in 1'] = array(
    'name' => 'add terms in 1',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: delete terms in 1.
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 1.
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
