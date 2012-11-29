<?php
/**
 * @file
 * crf_non_cluster_requests.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function crf_non_cluster_requests_default_rules_configuration() {
  $items = array();
  $items['rules_new_non_cluster_request'] = entity_import('rules_config', '{ "rules_new_non_cluster_request" : {
      "LABEL" : "New Non-Cluster request",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "non_cluster_request" : "non_cluster_request" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_information_focal_points" } },
        { "entity_has_field" : {
            "entity" : [ "node:field-information-focal-points:0" ],
            "field" : "field_contact_email"
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "node:field-information-focal-points:0:field-contact-email" ],
            "subject" : "New Request for Information (from OCHA)",
            "message" : "Dear $cluster_contact-\\u003Efield_contact_first_name[\\u0027und\\u0027][0][\\u0027value\\u0027] $cluster_contact-\\u003Efield_contact_lastname[\\u0027und\\u0027][0][\\u0027value\\u0027],\\r\\n\\r\\nOCHA ($ocha_focal_point-\\u003Efield_first_name[\\u0027und\\u0027][0][\\u0027value\\u0027] $ocha_focal_point-\\u003Efield_last_name[\\u0027und\\u0027][0][\\u0027value\\u0027]) is requesting that you provide specific information as outlined below in the Information Request $node-\\u003Etitle.\\r\\n\\r\\ntheme(\\u0027item_list\\u0027, array(\\u0027items\\u0027 =\\u003E $content_types))\\r\\n\\r\\nKindly provide your information online: \\u003Cfront\\u003E\\r\\n\\r\\n$append_to_email\\r\\n\\r\\nKind regards,\\r\\nOCHA",
            "from" : [ "node:field-crf-req-contact:0:mail" ],
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
