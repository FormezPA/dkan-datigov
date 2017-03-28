# Feature, tema e moduli Dati.Gov.it

In questo repository sono presenti le features, i temi ed i moduli personalizzati per l'installazione Drupal -DKAN di http://dati.gov.it.

**ATTENZIONE**: questo codice è in dismissione, a favore di una installazione nuova basata su CKAN. Si veda a riguardo [il nuovo repository italia/dati.gov.it](https://github.com/italia/dati.gov.it).

## Installazione

Prima di scaricare questi file, è necessario installare DKAN, seguendo la documentazione del repository https://github.com/FormezPA/dkan

Una volta installato Drupal-DKAN è necessario scaricare il repository dentro $DRUPAL_DIR/sites/
in modo da avere $DRUPAL_DIR/sites/all

I moduli da installare sono (perlomeno) i seguenti:

```shell
drush en 
    datigov_common \
    datigov \ # theme
    datigov_dkan_dcatapit \ # customizations for DCAT-AP_IT
    datigov_qi \ # quality improvement (optional)
    datigov_harvestlist \ # harvest import/export (optional)
    datigov_news \
    datigov_taxonomies \
    datigov_harvest \ # harvest subclasses for Dati.Gov.it
    dkan_harvest_ckan \ # harvest CKAN schema
    dkan_harvest_dcatap \ # harvest DCAT-AP schema


```

E' necessario a questo punto lanciare le migrazioni, per popolare il database delle news, delle tassonomie e di altri parametri:



```shell
# Update the migrations' list
drush mreg

# insert the taxonomies
drush mi --group=datigov_taxonomies

# insert the news
drush mi --group=datigov_news

# get the latest harvest source
wget -O $DRUPAL_DIR/sites/all/features/datigov/datigov_dkan_dcatapit/data/catalog.csv \
 http://www.dati.gov.it/admin/harvest-sources-export/harvest-sources-datigovit.csv
# insert the catalogs in the Harvester
drush mi --group=datigov_dkan_dcatapit_catalogs
```



## Utilizzo

Una volta installati i moduli e le features saranno presenti le nuove sezioni News, le tassonomie di progetto e l'harvester.

@TODO: descrizione dell'importazione delle fonti dell'harvester.

## Supporto

Questo codice è in dismissione, a favore di una installazione di CKAN. Si suggerisce di aprire issue (non-tecniche, ma di progetto) sul [nuovo repository](https://github.com/italia/dati.gov.it/issues).

## Come contribuire

Per contribuire è possibile usare il [Github Flow](https://guides.github.com/introduction/flow/). Crea un branch, aggiungi i commit e [apri una pull request](https://github.com/FormezPA/dkan-datigov/compare).
**Nota** Per essere ammissibile il codice deve seguire i [Drupal coding standards](https://www.drupal.org/coding-standards).
