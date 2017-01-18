<?php

class DatiGovHarvestSynonyms {
  
  protected static $_instance;
  
  private $_synonyms = array();
  
  const VOCABULARY_TOPICS = 'dkan_topics';
  const VOCABULARY_FREQUENCY = 'frequency';
  const VOCABULARY_LANGUAGES = 'languages';
  const VOCABULARY_LICENSES = 'licenses';
  
  private function __construct() {
    
  }
  
  public static function init(){
    
    if(self::$_instance === null){
      self::$_instance = new self();
    }
    return self::$_instance;
  }
  
  public function get_topic_synonyms(){
    return $this->get_synonyms(self::VOCABULARY_TOPICS);
  }
  
  public function get_languages_synonyms(){
    return $this->get_synonyms(self::VOCABULARY_LANGUAGES);
  }
  
  public function get_frequency_synonyms(){
    return $this->get_synonyms(self::VOCABULARY_FREQUENCY);
  }
  
  public function get_license_synonyms(){
    return $this->get_synonyms(self::VOCABULARY_LICENSES);
  }
  
  private function get_synonyms($vocab){
    
    if(isset($this->_synonyms[$vocab]) && is_array($this->_synonyms[$vocab])){
      return $this->_synonyms[$vocab];
    }
    else{
    
      $vocabulary = taxonomy_vocabulary_machine_name_load($vocab);

      if ($terms = taxonomy_get_tree($vocabulary->vid, 0, NULL, TRUE)) {
        
        $i = 0;
        
        foreach ($terms as $term) {
          
          $this->_synonyms[$vocab][$i]['name'] = $term->name;
          $this->_synonyms[$vocab][$i]['syn'] = array();
          
          if(isset($term->field_sinonimi_topic[LANGUAGE_NONE][0]['value'])){
            $syns = explode("\n",$term->field_sinonimi_topic[LANGUAGE_NONE][0]['value']);
          }
          else{
            $syns = array();
          }
          
          $this->_synonyms[$vocab][$i]['syn'] = $this->parse_synonyms($syns);
          $this->_synonyms[$vocab][$i]['syn'][] = $term->name;
          $i++;
        }
      }
      return $this->_synonyms[$vocab];
    }
  }
  
  private function parse_synonyms($syns){
    
    $results = array();
    
    for($i=0;$i<count($syns);$i++){
      if(trim($syns[$i]) == '') continue;
      $results[]=trim($syns[$i]);
    }
    
    return $results;
  }
  
}