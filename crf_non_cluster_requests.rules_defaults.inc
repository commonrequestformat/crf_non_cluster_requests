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
        },
        { "entity_has_field" : {
            "entity" : [ "node:field-information-focal-points:0" ],
            "field" : "field_contact_first_name"
          }
        },
        { "entity_has_field" : {
            "entity" : [ "node:field-information-focal-points:0" ],
            "field" : "field_contact_lastname"
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "node:field-information-focal-points:0:field-contact-email" ],
            "subject" : "New Request for Information (from OCHA)",
            "message" : "Dear [node:field-information-focal-points:0:field-contact-first-name] [node:field-information-focal-points:0:field-contact-lastname],\\r\\n\\r\\nOCHA ([node:field-crf-req-contact:0:field-first-name] [node:field-crf-req-contact:0:field-last-name]) is requesting that you provide [node:field-nc-req-contents] information in the Information Request [node:title].\\r\\n\\r\\nKindly provide your information online: [node:url]\\r\\n\\r\\n[node:field-append-to-alert-email]\\r\\n\\r\\nKind regards,\\r\\nOCHA",
            "from" : [ "node:field-crf-req-contact:0:mail" ],
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
