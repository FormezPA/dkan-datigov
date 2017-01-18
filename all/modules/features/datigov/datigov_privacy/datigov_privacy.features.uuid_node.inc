<?php
/**
 * @file
 * datigov_privacy.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function datigov_privacy_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Privacy',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '20967c79-aba2-4636-9c6a-db552a4148e1',
  'type' => 'page',
  'language' => 'it',
  'created' => 1432393124,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '72a86b11-fada-452b-a587-dac45884bcdf',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '«Ai sensi dell’art. 13 del decreto legislativo 196/03, Formez PA, società in-house del Dipartimento della Funzione Pubblica (DFP), Titolare del trattamento dei dati acquisiti nell\'ambito del portale Dati.gov.it, La informa che i Suoi dati saranno utilizzati, per consentire di effettuare i servizi informativi e di assistenza da Lei richiesti. Il trattamento è effettuato con l’ausilio esclusivo di procedure informatizzate, nei modi e nei limiti necessari a perseguire le predette finalità. I dati personali degli utenti, che non saranno diffusi, potranno essere comunicati al DFP e ad altri enti pubblici per l’esecuzione del servizio richiesto e a soggetti cui la facoltà di accedere ai dati sia riconosciuta da disposizioni di legge e/o di normativa secondaria. Il conferimento di tali dati è necessario per la effettuazione del servizio e la loro mancata indicazione può precludere tale risultato.  I richiedenti il servizio possono esercitare i diritti previsti all’art. 7 del decreto legislativo 196/03 che prevede, tra gli altri, quello di ottenere la cancellazione, la rettifica, l’aggiornamento dei dati. Tali diritti possono essere esercitati rivolgendosi al Titolare o al Responsabile del trattamento».',
        'summary' => '',
        'format' => 'html',
        'safe_value' => '<p>«Ai sensi dell’art. 13 del decreto legislativo 196/03, Formez PA, società in-house del Dipartimento della Funzione Pubblica (DFP), Titolare del trattamento dei dati acquisiti nell\'ambito del portale Dati.gov.it, La informa che i Suoi dati saranno utilizzati, per consentire di effettuare i servizi informativi e di assistenza da Lei richiesti. Il trattamento è effettuato con l’ausilio esclusivo di procedure informatizzate, nei modi e nei limiti necessari a perseguire le predette finalità. I dati personali degli utenti, che non saranno diffusi, potranno essere comunicati al DFP e ad altri enti pubblici per l’esecuzione del servizio richiesto e a soggetti cui la facoltà di accedere ai dati sia riconosciuta da disposizioni di legge e/o di normativa secondaria. Il conferimento di tali dati è necessario per la effettuazione del servizio e la loro mancata indicazione può precludere tale risultato.  I richiedenti il servizio possono esercitare i diritti previsti all’art. 7 del decreto legislativo 196/03 che prevede, tra gli altri, quello di ottenere la cancellazione, la rettifica, l’aggiornamento dei dati. Tali diritti possono essere esercitati rivolgendosi al Titolare o al Responsabile del trattamento».</p>',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
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
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2015-05-23 16:58:44 +0200',
);
  return $nodes;
}
