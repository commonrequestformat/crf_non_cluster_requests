<?php
/**
 * @file
 * crf_non_cluster_requests.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function crf_non_cluster_requests_conditional_fields_default_fields() {
  $items = array();

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'non_cluster_request',
    'dependent' => 'field_chf_erf',
    'dependee' => 'field_nc_req_contents',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        218860149 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        200153887 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        52310416 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        30037204 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        218860149 => array(
          1 => '1',
          3 => 0,
        ),
        200153887 => array(
          1 => '1',
          3 => 0,
        ),
        52310416 => array(
          1 => '1',
          3 => 0,
        ),
        30037204 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => 'chf_erf',
      'value' => array(
        0 => array(
          'value' => 'chf_erf',
        ),
      ),
      'values' => array(),
    ),
  );

  return $items;
}
