<?php
/**
 * @file
 * datigov_taxonomies.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function datigov_taxonomies_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-dkan_topics-field_authority_code'.
  $field_instances['taxonomy_term-dkan_topics-field_authority_code'] = array(
    'bundle' => 'dkan_topics',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Etichetta definita su http://publications.europa.eu/mdr/resource/authority/data-theme/html/data-theme-ita.html#description',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_authority_code',
    'label' => 'Authority code',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'taxonomy_term-dkan_topics-field_sinonimi_topic'.
  $field_instances['taxonomy_term-dkan_topics-field_sinonimi_topic'] = array(
    'bueditor_profile' => 0,
    'bundle' => 'dkan_topics',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Inserire, uno per linea, i sinonimi dei topic a cui si vuole far risalire il termine in oggetto. Durante la migrazione i termini saranno ricondotti al termine ufficiale.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_sinonimi_topic',
    'label' => 'Sinonimi',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 8,
      ),
      'type' => 'text_textarea',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'taxonomy_term-frequency-field_authority_code'.
  $field_instances['taxonomy_term-frequency-field_authority_code'] = array(
    'bundle' => 'frequency',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_authority_code',
    'label' => 'Authority code',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'taxonomy_term-frequency-field_sinonimi_topic'.
  $field_instances['taxonomy_term-frequency-field_sinonimi_topic'] = array(
    'bueditor_profile' => 0,
    'bundle' => 'frequency',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_sinonimi_topic',
    'label' => 'Sinonimi',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 34,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-languages-field_lang_mdr_authority_code'.
  $field_instances['taxonomy_term-languages-field_lang_mdr_authority_code'] = array(
    'bundle' => 'languages',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_lang_mdr_authority_code',
    'label' => 'MDR Authority code',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'taxonomy_term-languages-field_language_uri'.
  $field_instances['taxonomy_term-languages-field_language_uri'] = array(
    'bundle' => 'languages',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'La URI relativa alla pagina di classificazione MDR (ad es http://publications.europa.eu/resource/authority/language/ITA)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_language_uri',
    'label' => 'URI',
    'required' => 1,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'taxonomy_term-languages-field_sinonimi_topic'.
  $field_instances['taxonomy_term-languages-field_sinonimi_topic'] = array(
    'bueditor_profile' => -1,
    'bundle' => 'languages',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_sinonimi_topic',
    'label' => 'Sinonimi',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'taxonomy_term-license_type-field_license_family'.
  $field_instances['taxonomy_term-license_type-field_license_family'] = array(
    'bundle' => 'license_type',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_license_family',
    'label' => 'license_family',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 31,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-license_type-field_license_type_uri'.
  $field_instances['taxonomy_term-license_type-field_license_type_uri'] = array(
    'bundle' => 'license_type',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_license_type_uri',
    'label' => 'license_uri',
    'required' => 1,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'taxonomy_term-licenses-field_license_abbr'.
  $field_instances['taxonomy_term-licenses-field_license_abbr'] = array(
    'bundle' => 'licenses',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_license_abbr',
    'label' => 'Abbreviazione',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'taxonomy_term-licenses-field_license_type'.
  $field_instances['taxonomy_term-licenses-field_license_type'] = array(
    'bundle' => 'licenses',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_license_type',
    'label' => 'Tipo di licenza',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'taxonomy_term-licenses-field_license_uri'.
  $field_instances['taxonomy_term-licenses-field_license_uri'] = array(
    'bundle' => 'licenses',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_license_uri',
    'label' => 'URI',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'taxonomy_term-licenses-field_sinonimi_topic'.
  $field_instances['taxonomy_term-licenses-field_sinonimi_topic'] = array(
    'bueditor_profile' => -1,
    'bundle' => 'licenses',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_sinonimi_topic',
    'label' => 'Sinonimi',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 34,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Abbreviazione');
  t('Authority code');
  t('Etichetta definita su http://publications.europa.eu/mdr/resource/authority/data-theme/html/data-theme-ita.html#description');
  t('Inserire, uno per linea, i sinonimi dei topic a cui si vuole far risalire il termine in oggetto. Durante la migrazione i termini saranno ricondotti al termine ufficiale.');
  t('La URI relativa alla pagina di classificazione MDR (ad es http://publications.europa.eu/resource/authority/language/ITA)');
  t('MDR Authority code');
  t('Sinonimi');
  t('Tipo di licenza');
  t('URI');
  t('license_family');
  t('license_uri');

  return $field_instances;
}
