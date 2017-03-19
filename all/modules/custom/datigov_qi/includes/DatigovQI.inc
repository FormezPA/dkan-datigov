<?php

class DatigovQI  {
  
  const SCHEMA_CKAN3 = 1;
  const SCHEMA_DCAT = 2;
  const SCHEMA_CKAN1 = 3;
    
    public static function make_QI($schema_name) {
      
      switch($schema_name) {
          
          case self::SCHEMA_CKAN3 : 
              return new Datigov_QI_CKANv3();
          break;
      
          case self::SCHEMA_DCAT : 
              return new Datigov_QI_DCAT();
          break;
      
          case self::SCHEMA_CKAN1 : 
              return new Datigov_QI_CKANv3();
          break;
      
          default: 
              return false;
      
      }
  }
}



class Datigov_QI_CKANv3 extends DatigovQIAbstractFactory{
  
  public function __construct(){
    
    $this->identifier = 'id';
    
    $this->mandatory_fields = array(
      'title',
      'metadata_modified',
      'notes',
      'organization.title',
      //'organization.email',
      'frequency',
      'holder_name',
    );
    
    $this->mandatory_arrays = array(
      'groups',
      'resources',
    );
    
    $this->voc_mandatory = array(
        
    );
    
  }

}

class Datigov_QI_DCAT extends DatigovQIAbstractFactory{
  
  public function __construct(){
    
    $this->identifier = 'identifier';
    
    $this->mandatory_fields = array(
      'title',
      'modified',
      'description',
      'publisher.name',
    );
    
    $this->mandatory_arrays = array(
      'theme',
      'distribution',
    );
    
    $this->voc_mandatory = array(
      'license',
    );
  }
}


abstract class DatigovQIAbstractFactory {

  const ERR_LEVEL_ALERT = 'Alert';
  const ERR_LEVEL_WARNING = 'Warning';
  const ERR_LEVEL_NOTICE = 'Notice';
  
  const ERR_TYPE_NAME_MISSED = 'FIELD_MISSED';
  const ERR_TYPE_CODE_MISSED = 1010;
  
  const ERR_TYPE_NAME_EMPTY = 'FIELD_EMPTY';
  const ERR_TYPE_CODE_EMPTY = 1011;
  
  const ERR_TYPE_NAME_ARRAY_EMPTY= 'ARRAY_EMPTY_OR_MISSED';
  const ERR_TYPE_CODE_ARRAY_EMPTY= 1012;
  
  const ERR_TYPE_NAME_VOCAB_TERM_MISSED= 'VOCABULARY_TERM_MISSED';
  const ERR_TYPE_CODE_VOCAB_TERM_MISSED = 1020;
  
  const NOTICE_ALIAS_NAME = 'NOTICE_ALIAS';
  const NOTICE_ALIAS_CODE = 901;
  
  private $fp;
  private $n = 0;
  
  private $T0;
  
  protected $mandatory_fields;
  protected $mandatory_arrays;
  
  
  /** 
   * Add a custom text to the log.
   * 
   * @param string $text
   */
  public function add_custom_text($text) {
      
      fwrite($this->fp, preg_replace("/\s+/mu", " ", $text));
  }
  
  /**
   * Add a line about the field aliases.
   * 
   * @param object $row
   * @param string $field
   * @param string $alias
   */
  public function add_notice_field_alias($row, $field, $alias){
      
    $e = new DatigovQI_Error;
    $e->ref_id = $row->{$this->identifier};
    $e->level = self::ERR_LEVEL_NOTICE;
    $e->type = self::NOTICE_ALIAS_NAME;
    $e->code = self::NOTICE_ALIAS_CODE;
    $e->field = $field;
    $e->description = t('The field "@alias" was used to populate the "@field" '
            . 'field with potential inconsistencies or inaccuracies '
            . 'in the dataset identified by @uuid',
      array(
        '@alias' => $alias,
        '@field' => $e->field,
        '@uuid' => $e->ref_id,
      ));

    $this->logline($e);
  }
  
  /**
   * Add a line about the vocabulary missed.
   * 
   * @param object $row
   * @param string $vocabulary
   * @param string $field
   * @param string $value
   */
  public function add_vocabolary_missed($row, $vocabulary, $field, $value) {
    
    $e = new DatigovQI_Error;
    $e->ref_id = $row->{$this->identifier};
    $e->level = self::ERR_LEVEL_WARNING;
    $e->type = self::ERR_TYPE_NAME_VOCAB_TERM_MISSED;
    $e->code = self::ERR_TYPE_CODE_VOCAB_TERM_MISSED;
    $e->field = $field;
    $e->description = t('The value "@value" for the @field field is not among those '
            . 'in controlled vocabulary "@voc" or its synonyms '
            . 'in the dataset identified by @uuid',
      array(
        '@value' => $value,
        '@field' => $e->field,
        '@voc' => $vocabulary,
        '@uuid' => $e->ref_id,
      ));

    $this->logline($e);
  }
  
  
  /**
   * Create the file and the pointer.
   * 
   * @param string $harvest_id
   * @param string $catalog_uri
   */
  public function create_logfile($logID, $harvest_id, $catalog_uri=''){
      
    $fname = $logID."_hlog_".$harvest_id. "_" . date("Ymd-His") . ".log";
    $report_header = t("Log of catalog's harvesting  @uri", array('@uri'=>$catalog_uri));
    
    $fpath = drupal_realpath("public://datigov_qi/$fname");
    
    $this->T0 = microtime(true);
    $this->fp=fopen($fpath, 'w');
    
    $out = '';
    $out.="-- $report_header\n";
    $out.="-- Log opened at ".date('c')."\n\n";
    
    fwrite($this->fp, $out);
    
  }
  
  /**
   * Check the rules on mandatory fields.
   * 
   * @param object $row
   */
  public function check_rules($row){
    
    foreach($this->mandatory_fields as $k){
      
      // test isset
      if($this->test_isnotset($row, $k)){
        
        $e = new DatigovQI_Error;
        $e->ref_id = $row->{$this->identifier};
        $e->level = self::ERR_LEVEL_WARNING;
        $e->type = self::ERR_TYPE_NAME_MISSED;
        $e->code = self::ERR_TYPE_CODE_MISSED;
        $e->field = $k;
        $e->description = t('Missed field "@field" for dataset identified by @uuid', 
          array(
            '@field' => $e->field,
            '@uuid' => $e->ref_id,
          ));
        
        $this->logline($e);
      }
      
      // Alternativo a !isset: empty
      else if($this->test_empty($row, $k)) {
        $e = new DatigovQI_Error;
        $e->ref_id = $row->{$this->identifier};
        $e->level = self::ERR_LEVEL_WARNING;
        $e->type = self::ERR_TYPE_NAME_EMPTY;
        $e->code = self::ERR_TYPE_CODE_EMPTY;
        $e->field = $k;
        $e->description = t('Empty field "@field" for dataset identified by @uuid', 
          array(
            '@field' => $e->field,
            '@uuid' => $e->ref_id,
          ));
        
        $this->logline($e);
      }
    }
    
    foreach($this->mandatory_arrays as $k){
      
      if($this->test_empty_array($row, $k)){
        $e = new DatigovQI_Error;
        $e->ref_id = $row->{$this->identifier};
        $e->level = self::ERR_LEVEL_WARNING;
        $e->type = self::ERR_TYPE_NAME_ARRAY_EMPTY;
        $e->code = self::ERR_TYPE_CODE_ARRAY_EMPTY;
        $e->field = $k;
        $e->description = t('Empty array "@field" in the dataset identified by @uuid', 
          array(
            '@field' => $e->field,
            '@uuid' => $e->ref_id,
          ));
        $this->logline($e);
      }
    }
    
  }
  
  /**
   * Close the log file.
   */
  public function closelog(){
    $out="\n--\n-- Elapsed time: " . round(microtime(true) - $this->T0, 4) . "\n";
    fwrite($this->fp, $out);
    fclose($this->fp);
  }
  
  /**
   * Test if a variable is empty.
   * 
   * @param object $row
   * @param string $k
   * @return bool
   */
  private function test_empty($row, $k){

    if(strpos($k, '.')!==false){
      $kk = explode(".", $k);
      return (empty($row->{$kk[0]}->{$kk[1]})) ? true : false;
    }
    else {
      return (empty($row->{$k})) ? true : false;
    }
  }
  
  /**
   * Test if the array field $k in $row is empty.
   * 
   * @param object $row
   * @param string $k
   * @return bool
   */
  private function test_empty_array($row, $k){
    
    return (is_array($row->{$k}) && count($row->{$k})>0 ) ? false : true;
  }
  
  /**
   * Write a line in the log.
   * 
   * @param DatigovQI_Error $E
   */
  private function logline(DatigovQI_Error $E){
    
    $this->n++;
    
    $out = "[%s]\t%s: %d\t(%s)\t%s\n";
    $line = sprintf($out,
        $E->ref_id,
        $E->level,
        $E->code,
        $E->type,
        $E->description
      );
    
    fwrite($this->fp, $line);
  }
  
  /**
   * Test if a variable is set. 
   * 
   * @param object $row
   * @param string $k
   * @return bool
   */
  private function test_isnotset($row, $k){

    if(strpos($k, '.')!==false){
      
      $kk = explode(".", $k);
      return (isset($row->{$kk[0]}->{$kk[1]})) ? false : true;
    }
    else {
      return (isset($row->{$k})) ? false : true;
    }
  }
  
  /**
   * Close the file if an error occurs.
   */
  public function __destruct() {
    if(is_resource($this->fp)){
      fclose($this->fp);
    }
  }
  
}


class DatigovQI_Error {
  
  public $ref_id;
  public $type;
  public $code;
  public $level;
  public $description;
  public $field;
  
}