<?php
/**
 * @file
 * datigov_subscriptions.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function datigov_subscriptions_default_rules_configuration() {
  $items = array();
  $items['rules_send_datasets_updates_to_subscribers'] = entity_import('rules_config', '{ "rules_send_datasets_updates_to_subscribers" : {
      "LABEL" : "Send Datasets Updates to Subscribers",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "flag", "message_notify" ],
      "ON" : { "node_update" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "dataset" : "dataset" } }
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "dataset_updated_message_type",
              "param_user" : [ "node:author" ]
            },
            "PROVIDE" : { "entity_created" : { "message" : "Dataset Updated message" } }
          }
        },
        { "data_set" : { "data" : [ "message:field-node-ref" ], "value" : [ "node" ] } },
        { "flag_fetch_users_node" : {
            "USING" : { "flag" : "subscribe_node", "node" : [ "node" ] },
            "PROVIDE" : { "users" : { "subscribers" : "Subscribers" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "subscribers" ] },
            "ITEM" : { "subscriber" : "Subscriber" },
            "DO" : [
              { "message_notify_process" : { "message" : [ "message" ], "mail" : "[subscriber:mail]" } }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
