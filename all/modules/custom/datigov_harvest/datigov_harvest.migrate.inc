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
  
  private $QI;
  protected $_args;
  
  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->_args = $arguments;
    
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
  
  public function preImport() {
      parent::preImport();
      
      if(module_exists('datigov_qi')){
        $this->QI = DatigovQI::make_QI(DatigovQI::SCHEMA_CKAN3);
        $this->QI->create_logfile(
          $this->logID,      
          $this->_args['dkan_harvest_source']->machineName, 
          $this->_args['dkan_harvest_source']->uri
        );
      }
  }


  /**
   * Implements prepareRow.
   */
  public function prepareRow($row) {
    parent::prepareRow($row);
    
    if(!is_null($this->QI)){
      $this->QI->check_rules($row);
    }
    
    // Gestione sinonimi dei Topics
    if(isset($row->groups) && is_array($row->groups) && count($row->groups)>0){
      for($i=0; $i<count($row->groups); $i++){
        $topic = $this->map_sinonimi($this->topics_taxonomies, $row->groups[$i]->name);
        if($topic != null) {
            $row->_topics[] = $topic;
        }
        else if(!is_null($this->QI)) {
            $this->QI->add_vocabolary_missed($row, 'topic', 'groups.name', $row->groups[$i]->name);
        }
      }
      
    }
    else{
      unset($row->_topics);
    }
    
    // Gestione sinonimi delle Licenze
    if(isset($row->license_title)){
      $row->_license_dataset = $this->map_sinonimi($this->license_taxonomies, $row->license_title);
      if($row->_license_dataset === null && !is_null($this->QI)) {
          $this->QI->add_vocabolary_missed($row, 'license', 'license_title', $row->license_title);
      }
    }
    else{
      unset($row->_license_dataset);
    }
    
    // Gestione frequency
    if(isset($row->frequency)){
      $row->_frequency = $this->map_sinonimi($this->frequency_taxonomies, $row->frequency);
      if($row->_frequency === null && !is_null($this->QI)) {
          $this->QI->add_vocabolary_missed($row, 'frequency', 'frequency', trim($row->frequency));
      }
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
        if(!is_null($this->QI)) {
            $this->QI->add_notice_field_alias($row, 'holder_name', 'publisher_name');
        }
    }
    else if(isset($row->organization->title) && $row->organization->title != '' ){
        $row->_holder_name = $row->organization->title;
        if(!is_null($this->QI)) {
            $this->QI->add_notice_field_alias($row, 'holder_name', 'organization.title');
        }
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
  
  public function postImport() {
    parent::postImport();
    if(!is_null($this->QI)) {
      $this->QI->closelog();
    }
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

  protected $_args;
  
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
    
    $this->_args = $arguments;
  }

  /**
   * {@inheritdoc}
   */
  public function setFieldMappings($version = '') {
    parent::setFieldMappings();
    
    $this->addFieldMapping('field_topic', '_topics');
    $this->addFieldMapping('field_dcatap_license_dataset', '_license_dataset');
    $this->addFieldMapping('field_dcatap_frequency', '_frequency');
    $this->addFieldMapping('field_frequency', null);
    
  }
  
  
  public function preImport() {
      parent::preImport();
      
      if(module_exists('datigov_qi')){
        $this->QI = DatigovQI::make_QI(DatigovQI::SCHEMA_DCAT);
        $this->QI->create_logfile(
          $this->_args['dkan_harvest_source']->machineName, 
          $this->_args['dkan_harvest_source']->uri
        );
      }
  }


  /**
   * Implements prepareRow.
   */
  public function prepareRow($row) {
    parent::prepareRow($row);
    
    if(!is_null($this->QI)){
      $this->QI->check_rules($row);
    }
    
    // Gestione sinonimi dei Topics
    if(isset($row->theme)){
      for($i=0; $i<count($row->theme); $i++){
        $topic = $this->map_sinonimi($this->topics_taxonomies, $row->theme[$i]);
        if($topic != null) {
            $row->_topics[] = $topic;
        }
        else if(!is_null($this->QI)) {
            $this->QI->add_vocabolary_missed($row, 'topic', 'theme', $row->theme[$i]);
        }
      }
      
    }
    else{
      unset($row->_topics);
    }
    
    // Gestione sinonimi delle Licenze
    if(isset($row->license)){
      $row->_license_dataset = $this->map_sinonimi($this->license_taxonomies, $row->license);
      if($row->_license_dataset === null && !is_null($this->QI)) {
        $this->QI->add_vocabolary_missed($row, 'license', 'license', $row->license);
      }
    }
    else{
      unset($row->_license_dataset);
    }
    
    // Gestione frequency
    if(isset($row->accrualPeriodicity)){
      $row->_frequency = $this->map_sinonimi($this->frequency_taxonomies, $row->accrualPeriodicity);
      if($row->_frequency === null && !is_null($this->QI)) {
        $this->QI->add_vocabolary_missed($row, 'accrualPeriodicity', 'accrualPeriodicity', $row->accrualPeriodicity);
      }
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
  
  public function postImport() {
    parent::postImport();
    if(!is_null($this->QI)) {
      $this->QI->closelog();
    }
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

