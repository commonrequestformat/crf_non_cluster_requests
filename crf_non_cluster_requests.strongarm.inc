<?php
/**
 * @file
 * crf_non_cluster_requests.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function crf_non_cluster_requests_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_non_cluster_request';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_non_cluster_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autosave_non_cluster_request';
  $strongarm->value = 1;
  $export['autosave_non_cluster_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_non_cluster_request';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_non_cluster_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_non_cluster_request';
  $strongarm->value = '[node:field_emergencies]: Request from [node:field-crf-req-date:request]';
  $export['auto_entitylabel_pattern_node_non_cluster_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_non_cluster_request';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_non_cluster_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_non_cluster_request';
  $strongarm->value = 0;
  $export['comment_anonymous_non_cluster_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_non_cluster_request';
  $strongarm->value = 1;
  $export['comment_default_mode_non_cluster_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_non_cluster_request';
  $strongarm->value = '50';
  $export['comment_default_per_page_non_cluster_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_non_cluster_request';
  $strongarm->value = 1;
  $export['comment_form_location_non_cluster_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_non_cluster_request';
  $strongarm->value = '1';
  $export['comment_non_cluster_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_non_cluster_request';
  $strongarm->value = '1';
  $export['comment_preview_non_cluster_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_non_cluster_request';
  $strongarm->value = 1;
  $export['comment_subject_field_non_cluster_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_non_cluster_request';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_non_cluster_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_diff_inline_node_non_cluster_request';
  $strongarm->value = 0;
  $export['diff_show_diff_inline_node_non_cluster_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_non_cluster_request';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_non_cluster_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_inline_node_non_cluster_request';
  $strongarm->value = 'diff_complete';
  $export['diff_view_mode_inline_node_non_cluster_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_non_cluster_request';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_non_cluster_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_standard_node_non_cluster_request';
  $strongarm->value = 0;
  $export['diff_view_mode_standard_node_non_cluster_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__non_cluster_request';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__non_cluster_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_non_cluster_request';
  $strongarm->value = '0';
  $export['language_content_type_non_cluster_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_non_cluster_request';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_non_cluster_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_non_cluster_request';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_non_cluster_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_non_cluster_request';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_non_cluster_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_non_cluster_request';
  $strongarm->value = '0';
  $export['node_preview_non_cluster_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_non_cluster_request';
  $strongarm->value = 0;
  $export['node_submitted_non_cluster_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_comment_non_cluster_request';
  $strongarm->value = 0;
  $export['print_display_comment_non_cluster_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_non_cluster_request';
  $strongarm->value = 0;
  $export['print_display_non_cluster_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_urllist_non_cluster_request';
  $strongarm->value = 0;
  $export['print_display_urllist_non_cluster_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_non_cluster_request';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_non_cluster_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_non_cluster_request';
  $strongarm->value = 0;
  $export['workbench_access_node_type_non_cluster_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_non_cluster_request';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_non_cluster_request'] = $strongarm;

  return $export;
}
