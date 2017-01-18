<?php
/**
 * @file
 * datigov_webforms.features.webform.inc
 */

/**
 * Implements hook_webform_defaults().
 */
function datigov_webforms_webform_defaults() {
$webforms = array();
  $webforms['scrivi_alla_redazione'] = array(
  'title' => 'Scrivi alla redazione',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '7ce362f2-d966-42fa-941b-060ce7f49edd',
  'type' => 'webform',
  'language' => 'it',
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3deef36a-5146-4d52-9f95-824eb70015cc',
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
      'type' => 'property',
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'next_serial' => 34,
    'confirmation' => '<p><strong>Grazie per aver contattato la redazione!</strong></p>

<p>Abbiamo preso in carico la tua segnalazione e ti risponderemo quanto prima.</p>
',
    'confirmation_format' => 'full_html',
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'confidential' => 0,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => 'html',
    'preview_excluded_components' => array(),
    'machine_name' => 'scrivi_alla_redazione',
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(
      0 => array(
        'email' => 'gandriola@formez.it,sonano@formez.it,info@dati.gov.it,antonio.rotundo@agid.gov.it',
        'subject' => '[dati.gov.it] E\' stata inviata dal sito una segnalazione alla redazione',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => 'Inserito [submission:date:long]

[submission:values]

Vedi la segnalazione su:
[submission:url]',
        'excluded_components' => array(),
        'html' => 0,
        'attachments' => 0,
        'exclude_empty' => 0,
        'extra' => FALSE,
        'components_machine_names' => array(
          'email' => FALSE,
          'subject' => FALSE,
          'from_name' => FALSE,
          'from_address' => FALSE,
        ),
      ),
    ),
    'components' => array(
      'scrivi_alla_redazione__testo_introduttivo' => array(
        'form_key' => 'testo_introduttivo',
        'name' => 'Testo intrduttivo',
        'type' => 'markup',
        'value' => '<h2>Scrivi alla redazione</h2>

<p>Puoi usare questo modulo per entrare in contatto con la redazione di dati.gov.it</p>
',
        'extra' => array(
          'format' => 'full_html',
          'private' => 0,
          'display_on' => 'form',
        ),
        'required' => 0,
        'weight' => 4,
        'machine_name' => 'scrivi_alla_redazione__testo_introduttivo',
        'page_num' => 1,
      ),
      'scrivi_alla_redazione__nome' => array(
        'form_key' => 'nome',
        'name' => 'Nome',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 5,
        'machine_name' => 'scrivi_alla_redazione__nome',
        'page_num' => 1,
      ),
      'scrivi_alla_redazione__cognome' => array(
        'form_key' => 'cognome',
        'name' => 'Cognome',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 6,
        'machine_name' => 'scrivi_alla_redazione__cognome',
        'page_num' => 1,
      ),
      'scrivi_alla_redazione__e_mail' => array(
        'form_key' => 'e_mail',
        'name' => 'E-mail',
        'type' => 'email',
        'value' => '[current-user:mail]',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'multiple' => 0,
          'format' => 'short',
          'width' => '',
          'unique' => 0,
          'disabled' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 7,
        'machine_name' => 'scrivi_alla_redazione__e_mail',
        'page_num' => 1,
      ),
      'scrivi_alla_redazione__perche_vuoi_contattare_la_redazi' => array(
        'form_key' => 'perche_vuoi_contattare_la_redazione',
        'name' => 'Perché vuoi contattare la redazione?',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'cols' => '',
          'rows' => '',
          'resizable' => 1,
          'disabled' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 8,
        'machine_name' => 'scrivi_alla_redazione__perche_vuoi_contattare_la_redazi',
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:7:{s:17:"mimemail_textonly";i:0;s:8:"gravatar";i:1;s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}',
  'webform_features_author' => 'admin',
  'webform_features_revision_author' => '',
);
return $webforms;
}
