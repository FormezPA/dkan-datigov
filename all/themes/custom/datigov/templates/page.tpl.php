<?php
/**
 * @file
 * Front page - no container class in main section.
 */
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
<div id="main-wrapper">
    <div id="main" class="main">
        
        <?php print $messages; ?>
        <?php if (!empty($page['help'])): ?>
            <?php print render($page['help']); ?>
        <?php endif; ?>
        <div class="main-row container">
            <section>
                
                <a id="main-content"></a>
                <?php print render($title_prefix); ?>
                <?php print $breadcrumb ?>
                <?php if (!empty($title) && (arg(0) == 'admin' || arg(1) == 'add' || arg(1) == 'edit')): ?>
                    <h1 class="page-header"><?php print $title; ?></h1>
                <?php endif; ?>
                <h1 class="solo_contatti"><?php print $title; ?></h1>
                <?php print render($title_suffix); ?>
                <?php if (!empty($tabs)): ?>
                    <?php print render($tabs); ?>
                <?php endif; ?>
                <?php if (!empty($action_links)): ?>
                    <ul class="action-links"><?php print render($action_links); ?></ul>
                <?php endif; ?>
                <?php print render($page['blocco_eventi']); ?>
                <?php print render($page['content']); ?>
            </section>
        </div>
    </div> <!-- /#main -->
</div> <!-- /#main-wrapper -->
<div class="big_footer">
    <?php print render($page['footer']) ?>
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