<?php
/**
 * @file
 * us_contact.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function us_contact_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function us_contact_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function us_contact_default_entityform_type() {
  $items = array();
  $items['contact'] = entity_import('entityform_type', '{
    "type" : "contact",
    "label" : "Contact",
    "data" : {
      "draftable" : 0,
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submission_rules" : {
        "rules_email_entityform_submitter" : "rules_email_entityform_submitter",
        "rules_email_entityform_admin" : "rules_email_entityform_admin"
      },
      "notification_text" : "OK got it - we\\u0027ll get back to you as soon as possible.",
      "notify_emails" : "organizers@lists.utopiaschool.org, scott@basekamp.com",
      "validation_rules" : [],
      "submit_button_text" : "",
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "filtered_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "entityforms",
      "user_submissions_view" : "user_entityforms",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "3" : 0, "4" : 0, "6" : 0 },
      "resubmit_action" : "new",
      "access_rules" : [],
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003EFeel free to contact us with any questions or proposals for the October Copenhagen slumber party. We look forward to hearing from you!\\u003C\\/p\\u003E\\r\\n",
        "format" : "filtered_html"
      }
    },
    "weight" : "0",
    "paths" : { "submit" : {
        "source" : "eform\\/submit\\/contact",
        "alias" : "contact",
        "language" : "und"
      }
    }
  }');
  return $items;
}
