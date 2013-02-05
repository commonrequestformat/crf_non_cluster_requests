<?php
/**
 * @file
 * crf_non_cluster_requests.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crf_non_cluster_requests_user_default_permissions() {
  $permissions = array();

  // Exported permission: create non_cluster_request content.
  $permissions['create non_cluster_request content'] = array(
    'name' => 'create non_cluster_request content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any non_cluster_request content.
  $permissions['delete any non_cluster_request content'] = array(
    'name' => 'delete any non_cluster_request content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own non_cluster_request content.
  $permissions['delete own non_cluster_request content'] = array(
    'name' => 'delete own non_cluster_request content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any non_cluster_request content.
  $permissions['edit any non_cluster_request content'] = array(
    'name' => 'edit any non_cluster_request content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own non_cluster_request content.
  $permissions['edit own non_cluster_request content'] = array(
    'name' => 'edit own non_cluster_request content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: view any unpublished non_cluster_request content.
  $permissions['view any unpublished non_cluster_request content'] = array(
    'name' => 'view any unpublished non_cluster_request content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
