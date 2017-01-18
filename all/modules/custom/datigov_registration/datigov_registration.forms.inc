<?php

/**
 * Define the 3 steps of the registration form.
 *
 * @return array An array with 3 step, each step pointing to a different form.
 */
function _datigov_registration_user_register_form_steps() {

  return array(
    1 => array(
      'form' => 'datigov_registration_user_register_form_ipa_code',
    ),
    2 => array(
      'form' => 'datigov_registration_user_register_form_responsible_email',
    ),
    3 => array(
      'form' => 'datigov_registration_user_register_form_personal_information',
    ),
  );

}

function datigov_registration_user_register_form($form, &$form_state) {

  // Initialize a description of the steps for the wizard.
  if (empty($form_state['step'])) {
    $form_state['step'] = 1;

    // This array contains the function to be called at each step to get the
    // relevant form elements. It will also store state information for each
    // step.
    $form_state['step_information'] = _datigov_registration_user_register_form_steps();
  }
  $step = &$form_state['step'];
  drupal_set_title(t('User Registration: step @step', array('@step' => $step)));

  // Call the function named in $form_state['step_information'] to get the
  // form elements to display for this step.
  $form = $form_state['step_information'][$step]['form']($form, $form_state);

  // Show the 'previous' button if appropriate. Note that #submit is set to
  // a special submit handler, and that we use #limit_validation_errors to
  // skip all complaints about validation when using the back button. The
  // values entered will be discarded, but they will not be validated, which
  // would be annoying in a "back" button.
  if ($step > 1) {
    $form['prev'] = array(
      '#type' => 'submit',
      '#value' => t('Previous'),
      '#name' => 'prev',
      '#submit' => array('datigov_registration_user_register_form_previous_submit'),
      '#limit_validation_errors' => array(),
    );
  }
  // Show the Next button only if there are more steps defined.
  if ($step < count($form_state['step_information'])) {
    // The Next button should be included on every step.
    $form['next'] = array(
      '#type' => 'submit',
      '#value' => t('Next'),
      '#name' => 'next',
      '#submit' => array('datigov_registration_user_register_form_next_submit'),
    );
  }
  else {
    // Just in case there are no more steps, we use the default submit handler
    // of the form wizard. Call this button Finish, Submit, or whatever you
    // want to show. When this button is clicked, the
    // form_example_wizard_submit handler will be called.
    $form['finish'] = array(
      '#type' => 'submit',
      '#value' => t('Finish'),
    );
  }

  // Include each validation function defined for the different steps.
  if (function_exists($form_state['step_information'][$step]['form'] . '_validate')) {
    $form['next']['#validate'] = array($form_state['step_information'][$step]['form'] . '_validate');
  }

  return $form;
}

/**
 * Submit handler for the "previous" button.
 *
 * This function:
 * - Stores away $form_state['values']
 * - Decrements the step counter
 * - Replaces $form_state['values'] with the values from the previous state.
 * - Forces form rebuild.
 *
 * You are not required to change this function.
 *
 * @ingroup form_example
 */
function datigov_registration_user_register_form_previous_submit($form, &$form_state) {
  $current_step = &$form_state['step'];
  $form_state['step_information'][$current_step]['stored_values'] = $form_state['values'];
  if ($current_step > 1) {
    $current_step--;
    $form_state['values'] = $form_state['step_information'][$current_step]['stored_values'];
  }
  $form_state['rebuild'] = TRUE;
}

/**
 * Submit handler for the 'next' button.
 *
 * This function:
 * - Saves away $form_state['values']
 * - Increments the step count.
 * - Replace $form_state['values'] from the last time we were at this page
 *   or with array() if we haven't been here before.
 * - Force form rebuild.
 *
 * You are not required to change this function.
 *
 * @ingroup form_example
 */
function datigov_registration_user_register_form_next_submit($form, &$form_state) {
  $current_step = &$form_state['step'];
  $form_state['step_information'][$current_step]['stored_values'] = $form_state['values'];

  if ($current_step < count($form_state['step_information'])) {
    $current_step++;
    if (!empty($form_state['step_information'][$current_step]['stored_values'])) {
      $form_state['values'] = $form_state['step_information'][$current_step]['stored_values'];
    }
    else {
      $form_state['values'] = array();
    }
    // Force rebuild with next step.
    $form_state['rebuild'] = TRUE;
    return;
  }
}

function datigov_registration_user_register_form_ipa_code($form, &$form_state) {

  $form['description']['#markup'] = '<p>Digita il codice IPA della tua amministrazione:</p>';

  // The IPA code field.
  $form['cod_amm'] = array(
    '#type' => 'textfield',
    '#title' => t('Codice IPA'),
    '#description' => t('Inserisci qui il codice IPA della tua amministrazione.'),
    '#required' => TRUE,
  );

//  // The submit button, after submitting the form the "step" value is set programmatically.
//  $form['submit_button'] = array(
//    '#type' => 'submit',
//    '#value' => t('Avanti'),
//  );

  return $form;
}

function datigov_registration_user_register_form_responsible_email($form, &$form_state) {

  $form['description']['#markup'] = '<p>Seleziona l\'indirizzo e-mail del responsabile:</p>';

  // Get the e-mail references set during validation of step 0 (after calling the IPA code web service).
  $reference_email_options = array();
  foreach ($form_state['storage']['references'] as $key => $reference) {
    $reference_email_options[$key] = format_string('!name (!email)', array(
      '!email' => $reference->mail_ref,
      '!name' => $reference->nome_ref . ' ' . $reference->cogn_ref
    ));
  }

  // Allow the user to select ONE e-mail address using INPUT RADIOs.
  $form['reference_email'] = array(
    '#type' => 'radios',
    '#title' => t('Seleziona l’email del referente IPA della tua amministrazione'),
    '#options' => $reference_email_options,
    '#required' => TRUE,
  );

//  $form['submit_button'] = array(
//    '#type' => 'submit',
//    '#value' => t('Avanti'),
//  );

  return $form;
}

function datigov_registration_user_register_form_personal_information($form, &$form_state) {

  $form['description']['#markup'] = '<p>Completa la registrazione fornendo i tuoi dati:</p>';

  $form['email'] = array(
    '#type' => 'textfield',
    '#title' => t('Email'),
    '#description' => t('Inserisci il tuo indirizzo e-mail'),
    '#required' => TRUE,
  );

  $form['username'] = array(
    '#type' => 'textfield',
    '#title' => t('Nome utente'),
    '#description' => t('Inserisci il nome utente che vuoi utilizzare (solo lettere e numeri, senza spazi)'),
    '#required' => TRUE,
  );

  $form['name'] = array(
    '#type' => 'textfield',
    '#title' => t('Nome e Cognome'),
    '#description' => t('Inserisci il tuo nome e cognome'),
    '#required' => TRUE,
  );

//  $form['submit_button'] = array(
//    '#type' => 'submit',
//    '#value' => t('Registrati'),
//  );

  return $form;
}

/**
 * Wizard form submit handler.
 *
 * This function:
 * - Saves away $form_state['values']
 * - Process all the form values.
 *
 * And now comes the magic of the wizard, the function that should handle all
 * the inputs from the user on each different step.
 *
 * This demonstration handler just do a drupal_set_message() with the
 * information collected on each different step of the wizard.
 *
 * @ingroup form_example
 */
function datigov_registration_user_register_form_submit($form, &$form_state) {
  $current_step = &$form_state['step'];
  $form_state['step_information'][$current_step]['stored_values'] = $form_state['values'];

//  // In this case we've completed the final page of the wizard, so process the
//  // submitted information.
//  drupal_set_message(t('This information was collected by this wizard:'));
//  foreach ($form_state['step_information'] as $index => $value) {
//    // Remove FAPI fields included in the values (form_token, form_id and
//    // form_build_id. This is not required, you may access the values using
//    // $value['stored_values'] but I'm removing them to make a more clear
//    // representation of the collected information as the complete array will
//    // be passed through drupal_set_message().
//    unset($value['stored_values']['form_id']);
//    unset($value['stored_values']['form_build_id']);
//    unset($value['stored_values']['form_token']);
//
//    // Now show all the values.
//    drupal_set_message(t('Step @num collected the following values: <pre>@result</pre>',
//      array(
//        '@num' => $index,
//        '@result' => print_r($value['stored_values'], TRUE),
//      )
//    ));
//  }

  // Create account and set to not active, we need to flip roles IDs/names to
  // conform to Drupal's specs.
  $roles_flipped = array_flip(user_roles());

  // Gather all the data.
  $ipa_code = $form_state['step_information'][1]['stored_values']['cod_amm'];
  $username = $form_state['step_information'][3]['stored_values']['username'];
  $name = $form_state['step_information'][3]['stored_values']['name'];
  $ref_email_idx = $form_state['step_information'][2]['stored_values']['reference_email'];
  $email = $form_state['step_information'][3]['stored_values']['email'];

  // Reload the email addresses from the remote web service (this avoid form hacks)
  // and get the e-mail address using the selected index.
  $response = _datigov_registration_pa_ref($ipa_code);
  $ref = $response->data[$ref_email_idx];

  // TODO: comment out if not testing.
  drupal_set_message(t('Using the @email instead of @ref_email (for testing purposes)', array(
    '@email' => 'sonano@formez.it',
    '@ref_email' => $ref->mail_ref
  )));
  $ref_email = 'sonano@formez.it';

  // Create the user using the anonymous user template as a start, then send
  // the e-mail.
  $account = user_save(drupal_anonymous_user(), array(
    'name' => $username,
    'mail' => $email,
    'pass' => user_password(),
    'init' => $email,
    'status' => 0, // This user is not active yet.
    'access' => REQUEST_TIME,
    'roles' => array($roles_flipped['org_admin'] => 'org_admin'),
  ));
  $op = 'register_pending_approval';
  _user_mail_notify($op, $account);

  // Get the data about the PA and merge it with the referral.
  $response = _datigov_registration_pa_amm($ipa_code);
  $data = array_merge((array) $ref, (array) $response->data);

  // Create an organization (group) if it doesn't exist, then retrieve the group ID.
  $group_entity = 'node';
  //$group_bundle = 'organization';
  $group_bundle = 'group';
  $group_id = datigov_registration_group_create_group($data, $group_bundle, $group_entity);

  // Update organisation node data.
  datigov_registration_set_group_mapped_api_fields(node_load($group_id), $data);

  // Create membership for user in group
  og_group($group_entity, $group_id, array(
    'entity_type' => 'user',
    'entity' => $account->uid,
    'field_name' => FALSE,
    // Use the only OG available field (no need to specify a name, since we have only one).
    'state' => OG_STATE_ACTIVE
  ));

  // Create user token and send the activation e-mail to the responsible person.
  $token = drupal_random_key();
  datigov_registration_token_save(array(
    'uid' => $account->uid,
    'token' => $token,
    'cod_amm' => $ipa_code
  ));
  $activate_url = url("user/$account->uid/activate/confirm/$token", array('absolute' => TRUE));
  $params = array(
    'activate_url' => $activate_url,
    'fullname' => $name,
  );

  drupal_mail('datigov_registration', 'notice', $ref_email, language_default(), $params);

  // Finalise form submission
  drupal_set_message(t('La tua richiesta di registrazione è stata inviata al referente IPA.'));

  // Redirect to the home page.
  $form_state['redirect'] = '<front>';
}

/**
 * Validate the user_register_form_ipa_code (2nd step) form.
 *
 * @param $form
 * @param $form_state
 */
function datigov_registration_user_register_form_ipa_code_validate($form, &$form_state) {

  $ws_ref_response_data = _datigov_registration_pa_ref($form_state['values']['cod_amm']);
  $ws_ref_valid = isset($ws_ref_response_data->result) && $ws_ref_response_data->result->cod_err == 0;

  // Display an error message if the remote service returned an error.
  if (!$ws_ref_valid) {
    form_set_error('cod_amm', t('!desc_err <span style="font-size:smaller;">(Error !cod_err)</span>', array(
      '!cod_err' => $ws_ref_response_data->cod_err,
      '!desc_err' => $ws_ref_response_data->desc_err
    )));
    return;
  }

  // Set the reference e-mails, they'll be use in building the step 1.
  $form_state['storage']['references'] = array();
  foreach ($ws_ref_response_data->data as $key => $reference) {
    if (isset($reference->mail_ref) && valid_email_address($reference->mail_ref)) {
      $form_state['storage']['references'][] = $reference;
    }
  }

  // // valid if no error received and we have at least one reference with email address defined
  if (count($form_state['storage']['references']) == 0) {
    form_set_error('cod_amm', t('No references email addresses defined.'));
  }

}

function datigov_registration_user_register_form_responsible_email_validate($form, &$form_state) {

  // Nothing to do here.

}

/**
 * Validate the *personal information* form.
 *
 * @since 1.0.0
 *
 * @param $form
 * @param $form_state
 */
function datigov_registration_user_register_form_validate($form, &$form_state) {

  if (!valid_email_address($form_state['values']['email'])) {
    form_set_error('email', t('Invalid Email address'));
  }

  if (user_load_by_mail($form_state['values']['email'])) {
    form_set_error('email', t('Email provided is already registered before.'));
  }

  if (user_load_by_name($form_state['values']['username'])) {
    form_set_error('username', t('Username already exists.'));
  }

}

/**
 * Get the e-mails for the responsible persons of the PA with the specified IPA
 * code.
 *
 * @param string $ipa_code The IPA code.
 * @return object
 */
function _datigov_registration_pa_ref($ipa_code) {

  $response = drupal_http_request('http://www.indicepa.gov.it/public-ws/WR01_REF.php',
    array(
      'method' => 'POST',
      'headers' => array('Content-Type' => 'application/x-www-form-urlencoded; charset=UTF-8',),
      'data' => format_string('AUTH_ID=RS6Y8X9W&COD_AMM=!COD_AMM', array('!COD_AMM' => $ipa_code)),
    )
  );

  return json_decode($response->data);
}

/**
 * Get the information about the PA with the provided IPA code.
 *
 * @param string $ipa_code The PA IPA code.
 * @return mixed
 */
function _datigov_registration_pa_amm($ipa_code) {

  // Get the organization data, in order to create/update the organization.
  $ws_amm_response = drupal_http_request('http://www.indicepa.gov.it/public-ws/WS05_AMM.php',
    array(
      'method' => 'POST',
      'headers' => array('Content-Type' => 'application/x-www-form-urlencoded; charset=UTF-8',),
      'data' => format_string('AUTH_ID=RS6Y8X9W&COD_AMM=!COD_AMM', array('!COD_AMM' => $ipa_code)),
    )
  );

  return json_decode($ws_amm_response->data);
}