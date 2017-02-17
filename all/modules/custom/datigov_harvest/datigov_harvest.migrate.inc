<?php

/**
 * @file dkan_harvest_ckan.migrate.inc
 *
 * Migration File for DKAN Harvest of CKAN file from
 *    /api/3/action/current_package_list_with_resources.
 */

/**
 * Class HarvestMigrationCKAN.
 *
 * Harvest the CKAN API on /api/3/action/current_package_list_with_resources.
 */
class HarvestMigrationCKANDatiGov extends HarvestMigrationCKANPackages {

  public $itemUrl;
  private $topics_taxonomies;
  private $language_taxonomies;
  private $frequency_taxonomies;
  private $license_taxonomies;

  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);
    $topic_parser = DatiGovHarvestSynonyms::init();
    $this->topics_taxonomies = $topic_parser->get_topic_synonyms();
    $this->language_taxonomies = $topic_parser->get_languages_synonyms();
    $this->frequency_taxonomies = $topic_parser->get_frequency_synonyms();
    $this->license_taxonomies = $topic_parser->get_license_synonyms();
  }

  /**
   * {@inheritdoc}
   */
  public function setFieldMappings($version = '') {
    parent::setFieldMappings();
    
    $this->addFieldMapping('field_topic', '_topics');
    $this->addFieldMapping('field_dcatap_license_dataset', '_license_dataset');
    $this->addFieldMapping('field_dcatap_frequency', '_frequency');
    
    $this->addFieldMapping('field_dcatap_rightsholder', '_holder_identifier');
    $this->addFieldMapping('field_dcatap_rightsholder:second', '_holder_name');
    
  }


  /**
   * Implements prepareRow.
   */
  public function prepareRow($row) {
    parent::prepareRow($row);
    
    // Gestione sinonimi dei Topics
    if(isset($row->groups) && is_array($row->groups) && count($row->groups)>0){
      for($i=0; $i<count($row->groups); $i++){
        $row->_topics[] = $this->map_sinonimi($this->topics_taxonomies, $row->groups[$i]->name);
      }
    }
    else{
      unset($row->_topics);
    }
    
    // Gestione sinonimi delle Licenze
    if(isset($row->license_title)){
      $row->_license_dataset = $this->map_sinonimi($this->license_taxonomies, $row->license_title);
    }
    else{
      unset($row->_license_dataset);
    }
    
    // Gestione frequency
    if(isset($row->frequency)){
      $row->_frequency = $this->map_sinonimi($this->frequency_taxonomies, $row->frequency);
    }
    else{
      unset($row->_frequency);
    }
    // disabilita il campo frequency
    unset($row->frequency);
    
    // fallback per Titolare
    if(isset($row->holder_name) && $row->holder_name != ''){
        $row->_holder_name = $row->holder_name;
    }
    else if(isset($row->publisher_name) && $row->publisher_name != '' ){
        $row->_holder_name = $row->publisher_name;
    }
    else {
        $row->_holder_name = null;
    }
    
    // fallback per IPA
    if(isset($row->holder_identifier) && $row->holder_identifier != ''){
        $row->_holder_identifier = $row->holder_identifier;
    }
    else if(isset($row->publisher_identifier) && $row->publisher_identifier != '' ){
        $row->_holder_identifier = $row->publisher_identifier;
    }
    else {
        $row->_holder_identifier = null;
    }
    
  }
  
  /**
   * Map the CKAN fields with the DCAT-AP classification
   * 
   * @param string $group
   *   The CKAN group.
   * @return string
   *   The DCAT-AP category.
   */
  private function map_sinonimi($list_mapped, $label){
    
    foreach($list_mapped as $topic){
      if(in_array(strtolower($label), array_map('strtolower', $topic['syn']))){
        return $topic['name'];
      }
    }
    
    // else
    return null;
  }
}

/**
 * Estensione della classe HarvestMigrationDCATAP
 * con parsing dei sinonimi.
 * 
 */
class HarvestMigrationDCATAPDatiGov extends HarvestMigrationDCATAP {
    
  public $itemUrl;
  private $topics_taxonomies;
  private $language_taxonomies;
  private $frequency_taxonomies;
  private $license_taxonomies;

  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);
    $topic_parser = DatiGovHarvestSynonyms::init();
    $this->topics_taxonomies = $topic_parser->get_topic_synonyms();
    $this->language_taxonomies = $topic_parser->get_languages_synonyms();
    $this->frequency_taxonomies = $topic_parser->get_frequency_synonyms();
    $this->license_taxonomies = $topic_parser->get_license_synonyms();
  }

  /**
   * {@inheritdoc}
   */
  public function setFieldMappings($version = '') {
    parent::setFieldMappings();
    
    $this->addFieldMapping('field_topic', '_topics');
    $this->addFieldMapping('field_dcatap_license_dataset', '_license_dataset');
    $this->addFieldMapping('field_dcatap_frequency', '_frequency');
    
  }


  /**
   * Implements prepareRow.
   */
  public function prepareRow($row) {
    parent::prepareRow($row);
    
    // Gestione sinonimi dei Topics
    if(isset($row->theme)){
      for($i=0; $i<count($row->theme); $i++){
        $row->_topics[] = $this->map_sinonimi($this->topics_taxonomies, $row->theme[$i]);
      }
    }
    else{
      unset($row->_topics);
    }
    
    // Gestione sinonimi delle Licenze
    if(isset($row->license)){
      $row->_license_dataset = $this->map_sinonimi($this->license_taxonomies, $row->license);
    }
    else{
      unset($row->_license_dataset);
    }
    
    // Gestione frequency
    if(isset($row->accrualPeriodicity)){
      $row->_frequency = $this->map_sinonimi($this->frequency_taxonomies, $row->accrualPeriodicity);
    }
    else{
      unset($row->_frequency);
    }
    // disabilita il campo frequency
    unset($row->frequency);
    
  }
  
  /**
   * Map the CKAN fields with the DCAT-AP classification
   * 
   * @param string $group
   *   The CKAN group.
   * @return string
   *   The DCAT-AP category.
   */
  private function map_sinonimi($list_mapped, $label){
    
    foreach($list_mapped as $topic){
      if(in_array(strtolower($label), array_map('strtolower', $topic['syn']))){
        return $topic['name'];
      }
    }
    
    // else
    return null;
  }
}

class HarvestMigrationCKANDatigov_v1 extends HarvestMigrationCKANDataset {
    
    
  public $itemUrl;
  private $topics_taxonomies;
  private $language_taxonomies;
  private $frequency_taxonomies;
  private $license_taxonomies;

  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);
    $topic_parser = DatiGovHarvestSynonyms::init();
    $this->topics_taxonomies = $topic_parser->get_topic_synonyms();
    $this->language_taxonomies = $topic_parser->get_languages_synonyms();
    $this->frequency_taxonomies = $topic_parser->get_frequency_synonyms();
    $this->license_taxonomies = $topic_parser->get_license_synonyms();
  }

  /**
   * {@inheritdoc}
   */
  public function setFieldMappings($version = '') {
    parent::setFieldMappings();
    
    $this->addFieldMapping('field_topic', '_topics');
    $this->addFieldMapping('field_dcatap_license_dataset', '_license_dataset');
    $this->addFieldMapping('field_dcatap_frequency', '_frequency');
    
  }


  /**
   * Implements prepareRow.
   */
  public function prepareRow($row) {
    parent::prepareRow($row);
    
    // Gestione sinonimi dei Topics
    if(isset($row->groups) && is_array($row->groups) && count($row->groups)>0){
      for($i=0; $i<count($row->groups); $i++){
        $row->_topics[] = $this->map_sinonimi($this->topics_taxonomies, $row->groups[$i]->name);
      }
    }
    else{
      unset($row->_topics);
    }
    
    // Gestione sinonimi delle Licenze
    if(isset($row->license)){
      $row->_license_dataset = $this->map_sinonimi($this->license_taxonomies, $row->license);
    }
    else{
      unset($row->_license_dataset);
    }
    
    // Gestione frequency
    if(isset($row->frequency)){
      $row->_frequency = $this->map_sinonimi($this->frequency_taxonomies, $row->frequency);
    }
    else{
      unset($row->_frequency);
    }
    // disabilita il campo frequency
    unset($row->frequency);
    
  }
  
  /**
   * Map the CKAN fields with the DCAT-AP classification
   * 
   * @param string $group
   *   The CKAN group.
   * @return string
   *   The DCAT-AP category.
   */
  private function map_sinonimi($list_mapped, $label){
    
    foreach($list_mapped as $topic){
      if(in_array(strtolower($label), array_map('strtolower', $topic['syn']))){
        return $topic['name'];
      }
    }
    
    // else
    return null;
  }
}

