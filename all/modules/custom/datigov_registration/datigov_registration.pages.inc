<?php

/**
 * @file
 * Performs Registration form submit alter.
 */

function datigov_registration_activation_confirm($account, $token) {

  // TODO: we should set the actual timeout.
  $timeout = 86400;
  $current = REQUEST_TIME;
  $created = 0;

  // Look for the token in the table.
  $result = db_query("SELECT r.created FROM {datigov_registration_tokens} r WHERE r.token = :token", array(':token' => $token));
  foreach ($result as $record) {
    // TODO: check if the token is still valid.
    $created = $record->created;
  }

  // Activate the user.
  datigov_registration_activate_user($account);

  // if ($created <= $current && $current - $created < $timeout) {
  //   datigov_registration_activate_user($account);
  // }
  // else {
  //   // drupal_set_message(t('You have tried to use an account activation link that has expired.'));
  //   drupal_set_message(t('Il collegamento non è più valido o è scaduto.'));
  //   drupal_goto("<front>");
  // }
}

/**
 * The user my datasets page, composed of an HTML menu and the 'administration_group_content' view.
 *
 * @return string The HTML code for the page.
 */
function datigov_registration_my_datasets_page() {

  return _datigov_registration_my_datasets_page_menu()
  . views_embed_view('administration_group_content');
}

/**
 * Returns a user menu with links to add a dataset or edit the user profile.
 *
 * @return string HTML code for the user menu.
 */
function _datigov_registration_my_datasets_page_menu() {

  return t('<ul class="action-links"><li><a href="/node/add/dataset"   class="btn btn-primary btn-sm">' . t('Add dataset') . '</a></li>'
    . '<li><a href="/user/' . $GLOBALS['user']->uid . '/edit"   class="btn btn-primary btn-sm">' . t('Edit profile') . '</a></li>'
    . '</ul>');
}
