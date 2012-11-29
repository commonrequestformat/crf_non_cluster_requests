<?php
/**
 * @file
 * crf_non_cluster_requests.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crf_non_cluster_requests_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function crf_non_cluster_requests_node_info() {
  $items = array(
    'non_cluster_request' => array(
      'name' => t('Non-Cluster Request'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
