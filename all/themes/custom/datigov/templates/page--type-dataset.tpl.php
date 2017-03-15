<?php
$catalog = _datigov_load_catalog_from_dataset($node);
$node = menu_get_object();
$nid = $node->nid;
$view_mode = 'teaser';


?>
<!-- zona in alto con logo governo italiano -->
<div class="top_nav clearfix">
    <div class="container">
        <div class="row no_iphone">
            <div class="logo_container col-lg-12 col-md-12 col-xs-12">
                <div class="main_slogan"><a href="http://www.agid.gov.it/" target="_blank" >Agenzia per l'Italia Digitale</a></div>
            </div>
        </div>
        <div class="row iphone">
            <div class="logo_container col-lg-12 col-md-12 col-xs-7">
                <div class="main_slogan"><a href="http://www.agid.gov.it/" target="_blank" >Agenzia per l'Italia Digitale</a></div>
            </div>
            <div class="panino_container col-xs-5">
                <div class="sub_nav">
                    <!--zona menu della navigazione -->
                    <header id="navbar" role="banner" class="<?php print $navbar_classes; ?>">
                        <div class="<?php print $container_class; ?>">
                            <div class="navbar-header">
                                <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
                                    <button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#navbar-collapse">
                                        <span class="sr-only"><?php print t('Toggle navigation'); ?></span>
                                        <span class="icon-bar"></span>
                                        <span class="icon-bar"></span>
                                        <span class="icon-bar"></span>
                                        <!--<span class="mn">MENU</span>-->
                                    </button>

                                <?php endif; ?>
                            </div>
                        </div>
                    </header>
                    <!-- fine zona menu della navigazione -->
                </div>
            </div>
            <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
                <div class="navbar-collapse collapse" id="navbar-collapse">
                    <div class="container">
                        <nav role="navigation">
                            <?php if (!empty($page['navigation'])): ?>
                                <?php print render($page['navigation']); ?>
                            <?php endif; ?>
                        </nav>
                    </div>
                </div>
            <?php endif; ?>
        </div>
    </div>
</div>
<!-- fine zona in alto -->
<!-- zona menu -->
<div class="main_nav">     
    <div class="container">       
        <div class="row">
            <div class="logo_container_main clearfix col-lg-9 col-md-9 col-sm-9 col-xs-12">
                <div class="logo_wrapper clearfix">
                    <a href="/" title="Home" rel="home"> 
                        <?php if ($logo): ?>
                            <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
                        <?php endif; ?>
                    </a>
                </div>
                
                <div class="logo_text clearfix">
                    <h1 id="site-name">
                         <a href="/" title="Home Dati.gov.it">dati.gov.it<br/><small>I dati aperti della Pubblica Amministrazione</small></a>
                    </h1>
                </div>
                

            </div><!-- /logo_container -->
            <div class="col-lg-3 col-md-3 col-sm-3 hidden-xs">
                     <div class="nav-social">
                        <div class="segui">
                            <span>Seguici su</span>
                                <a href="https://www.youtube.com/channel/UCHsqR2YhxeKgFT4rAKVcAAQ" target="_blank">
                                    <i class="fa fa-youtube-play" aria-hidden="true"></i>
                                </a>
                                <a href="https://twitter.com/datigovit" target="_blank">
                                    <i class="fa fa-twitter-square" aria-hidden="true"></i>
                                </a>
                                <a href="/notizie.xml" target="_blank">
                                    <i class="fa fa-rss-square" aria-hidden="true"></i>
                                </a>
                            </div>
                    </div>
            </div><!-- /col-3 --> 
            <div class="col-lg-3 col-md-3 col-sm-3 hidden-xs">
                <div class="button-spid">
                    <?php if ($logged_in): ?>
                        <a href="/user/logout">Logout</a>
                    <?php else: ?>
                        <a href="/user">Login</a>
                    <?php endif; ?>
                </div>    
            </div>
        </div><!-- /row --> 
    </div><!-- /container -->
</div>
<!-- fine zona menu -->
<div class="sub_nav no_iphone">
    <!--zona menu della navigazione -->
    <header id="navbar" role="banner" class="<?php print $navbar_classes; ?>">
        <div class="<?php print $container_class; ?>">
            <div class="navbar-header">
                <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
                    <button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#navbar-collapse">
                        <span class="sr-only"><?php print t('Toggle navigation'); ?></span>
                        <span class="icon-bar"></span>
                        <span class="icon-bar"></span>
                        <span class="icon-bar"></span>
                        <span class="mn">MENU</span>
                    </button>

                <?php endif; ?>
            </div>
            <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
                <div class="navbar-collapse collapse" id="navbar-collapse">
                    <div class="container">
                        <nav role="navigation">
                            <?php if (!empty($primary_nav)): ?>

                            <?php endif; ?>
                            <?php if (!empty($page['navigation'])): ?>
                                <?php print render($page['navigation']); ?>
                            <?php endif; ?>
                        </nav>
                    </div>
                </div>
            <?php endif; ?>
        </div>
    </header>
    <!-- fine zona menu della navigazione -->
</div>

<!-- contenuto del content type dataset -->
<?php if ($logged_in): ?>
   <div class="container"> 
       <div class="row">
       <?php print render($tabs); ?>
       </div>
       </div>
<?php endif; ?>
<section id="contenuto_dataset" class="container fix_scroll">
    <header>
        <div class="bread"><span><?php print $breadcrumb; ?></span></div>
        <h1 class="titolo_principale"><?php print $title; ?></h1>
    </header>
    <content>   
        <div class="row">  
            <div class="col-sm-12">
                <div class="primo box row"> 
                    <h2 class="hidden">Metadati Principali</h2>
                    <div class="titolare ma_b">
                        <?php print render($page['content']['system_main']['nodes'][$nid]['field_dcatap_rightsholder']); ?>
                    </div>
                    <div class="pubblicato_da ma_b">
                        <?php if (!empty($page['content']['system_main']['nodes'][$nid]['og_group_ref'])): ?>
                            <span class="field-label">Editore del dataset: </span><?php print render($page['content']['system_main']['nodes'][$nid]['og_group_ref'][0]['#markup']); ?>
                        <?php endif; ?>
                    </div>
                    <div class="pubblicato_da ma_b">
                        <?php if (!empty($page['content']['system_main']['nodes'][$nid]['field_author'])): ?>
                            <span class="field-label">Autore del dataset: </span><?php print render($page['content']['system_main']['nodes'][$nid]['field_author'][0]['#markup']); ?>
                        <?php endif; ?>
                    </div>
                    
                    <div class="licenza ma_b">
                        <?php print render($page['content']['system_main']['nodes'][$nid]['field_dcatap_license_dataset']); ?>
                    </div> 
                    <div class="topics ma_b">
                        <span class="field-label">Temi del dataset: </span>
                        <?php print render($page['content']['system_main']['nodes'][$nid]['field_topic']); ?>
                    </div>
                </div>
                <div class="secondo box row">
                    <div class="body_interna">
                        <?php print render($page['content']['system_main']['nodes'][$nid]['body']); ?>
                    </div>
                </div>
                <div class="terzo box row">
                    <?php if($page['content']['system_main']['nodes'][$nid]['resources']) : ?>
                        <div class="dati_e_risorse">
                            <?php if (!empty($page['content']['system_main']['nodes'][$nid]['resources'])): ?>
                                <h2 class="titolo_dati_e_risorse">Risorse</h2>
                                <?php print render($page['content']['system_main']['nodes'][$nid]['resources']); ?>
                                <h1><?php print render($page['content']['system_main']['nodes'][$nid]['resources']['title']); ?></h1>
                            <?php endif; ?>
                        </div>
                    <?php endif; ?>  
                </div>
                <div class="quarto box row">
                    <div class="catalogo">
                        <?php if ($catalog == null): ?>
                            <h2>CATALOGO</h2>    
                        <?php endif; ?>
                        <?php if ($catalog != null): ?>
                            <h2><?php echo render($catalog->title); ?></h2>
                            <div class="ma_b">
                                <?php print render(field_view_field('node', $catalog, 'body', array('label'=>'hidden', 'type' => 'text_summary_or_trimmed', 'settings'=>array('trim_length' => 150),
    )));  ?>
                            </div>
                            <div class="ref ma_b">
                                <?php print render(field_view_field('node', $catalog, 'field_catalog_referrer')); ?>
                            </div>
                            <div class="e_ref ma_b">
                                <?php print render(field_view_field('node', $catalog, 'field_catalog_email_referrer')); ?>
                            </div>
                            <div class="home_ref ma_b">
                                <?php print render(field_view_field('node', $catalog, 'field_catalog_home_page')); ?>
                            </div>
                            <div class="url_ref ma_b">
                                <?php print render(field_view_field('node', $catalog, 'field_catalog_url_api')); ?>
                            </div> 
                        <?php endif; ?>
                    </div>
                </div>
                <div class="quinto box row">
                    <h2>ULTERIORI METADATI </h2>
                    <div class="tags ma_b">
    <!--                    <span>Parole chiave del dataset:</span>-->
                        <?php print render($page['content']['system_main']['nodes'][$nid]['field_tags']); ?>
                    </div>
                    <div class="data_rilascio ma_b">
                        <span class="mini_t field-label">Data di rilascio: </span>
                        <?php print render($page['content']['system_main']['nodes'][$nid]['release_date']); ?>
                    </div>
                    <div class="identificativo ma_b">
                        <span class="mini_t field-label">Identificativo del dataset: </span> 
                        <?php print render($page['content']['system_main']['nodes'][$nid]['identifier']); ?>
                    </div>
                    <div class="data_modifica ma_b riga">
                        <?php print render($page['content']['system_main']['nodes'][$nid]['field_modified_source_date']); ?>
                    </div>
                    <div class="riga ma_b"> 
                        <?php print render($page['content']['system_main']['nodes'][$nid]['field_language']); ?>
                    </div>
                </div>
                <div class="sesto box row">
                    <div class="contacts">
                        <h2>CONTATTI </h2>
                        <div class="riga ma_b">
                            <?php print render($page['content']['system_main']['nodes'][$nid]['field_contact_name']); ?>
                        </div>
                        <div class="riga ma_b">
                            <?php print render($page['content']['system_main']['nodes'][$nid]['field_contact_email']); ?>
                        </div>
                    </div>
                </div>   
                <div class="settimo box row">
                    <?php if($page['content']['system_main']['nodes'][$nid]['field_additional_info']) : ?>
                        <div class="additional_info">
                            <?php if (!empty($page['content']['system_main']['nodes'][$nid]['field_additional_info'])): ?>
                                <h2 class="titolo_informazioni_addizionali">Informazioni Addizionali</h2>
                                <?php print render($page['content']['system_main']['nodes'][$nid]['field_additional_info']); ?>
                            <?php endif; ?>
                        </div>
                    <?php endif; ?>                    
                </div>
            </div>
        </div> 
    </content>
    <footer>

    </footer>
</section>
<!-- fine content type dataset -->
<div class="big_footer">
    <div class="container">
        <div class="row zona_loghino">
            <div class="col-xs-12 col-sm-6 col-md-4 col-lg-4 loghino">
                <img alt="logo-agid" src="/<?php echo $directory; ?>/images/agid-logo.svg"/>
            </div>
            <div class="col-sm-6"></div>
        </div>
        <div class="row zona_contatti">
            <div class="col-xs-12 col-sm-6 col-md-4 col-lg-4 contatti">
                <h2>dati.gov.it</h2> 
                <p>
                    Il Portale <a href="http://dati.gov.it">dati.gov.it</a> è il catalogo nazionale dei metadati relativi ai dati rilasciati in formato aperto dalle pubbliche amministrazioni italiane. Il Portale è promosso dal Governo Italiano e gestito dall’Agenzia per l’Italia digitale con il supporto di FormezPA.
                </p>
            </div>
            <div class="col-xs-12 col-sm-6 col-md-4 col-lg-3 amministrazione">
                <?php print render($page['footer_amministrazione']) ?>
            </div>
            <div class="col-xs-12 col-sm-6 col-md-4 col-lg-2 siti_tematici">
                <?php print render($page['footer_tematici']) ?>
            </div>
            <div class="col-xs-12 col-sm-6 col-md-6 col-lg-3 contatti">
                <?php print render($page['footer_contatti']) ?>

            </div>
        </div>
        <div class="row zona_legacy">
            <div class="col-sm-12 col-md-12 col-lg-12 legacy">
                <?php print render($page['footer_privacy']) ?>
            </div>            
        </div>
    </div>
</div>
