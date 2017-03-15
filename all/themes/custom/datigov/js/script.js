var $h=jQuery.noConflict();
$h(window).load(function() {
    $h('a[href="' + this.location.pathname + '"]').parents('li,ul').addClass('active');
    var wind=$h(window).width();
    var q= $h('.main_nav');
    var offsetq = q.offset();
    var topq=offsetq.top;
    var x, u, a, ah;
    var titolo_vista_search;
    $h("#dkan-sitewide-dataset-search-form #edit-submit").attr("value","");
    $h("#dkan-sitewide-dataset-search-form #edit-submit").addClass("glyphicon");
    $h("#dkan-sitewide-dataset-search-form #edit-submit").addClass("glyphicon-search");
    $h("#dkan-sitewide-dataset-search-form--2 #edit-submit--2").addClass("glyphicon");
    $h("#dkan-sitewide-dataset-search-form--2 #edit-submit--2").addClass("glyphicon-search");
    $h("#dkan-sitewide-dataset-search-form #edit-submit").html("");
    $h("#dkan-sitewide-dataset-search-form--2 #edit-submit--2").html("");
    $h("#dkan-sitewide-dataset-search-form input").attr('placeholder', 'Cerca tra i dati');
    $h("#views-exposed-form-groups-page-page input").attr("placeholder", "Cerca nell'elenco");
    $h("#dkan-sitewide-dataset-search-form--2 input").attr('placeholder', 'Cerca tra i dati');
    $h('#views-exposed-form-dkan-datasets-panel-pane-1 .views-widget-filter-search_api_views_fulltext label').html("Cerca");
    $h('#views-exposed-form-dkan-datasets-panel-pane-1 .views-widget-filter-search_api_views_fulltext input').attr('placeholder', 'Cerca tra i dati');   
    console.log("wind" + wind);
    /* pagina ricerca dataset */
    $h('.view-dkan-datasets .field-name-og-group-ref .field-label').html("Pubblicato da:");
    /* pagina notizie */
    $h('.sinistra .view-header .view-lista-eventi .views-row').each(function(){
        x = $h(this).find('.views-field-field-localit-evento .field-content').html();
        if( x == "" )
        {
            
        }
    });
    titolo_vista_search=$h('.page-search #main .region-content .col-md-9 .view-header').html();
    
    if(wind>=978)
    {
        
        $h(window).on("scroll",function(){
            
            if($h(window).scrollTop()>topq)
            {
               
                $h('.top_nav').css({'transform':'translateY(-100%)'});
                $h('.logo_container_main').css({'height':'70px'});
                $h('.main_nav').css({'position':'fixed', 'transform':'translateY(-48px)'});
                $h('.sub_nav.no_iphone').css({'position':'fixed', 'transform':'translateY(70px)'});
                $h('#main-wrapper').css({'transform':'translateY(200px)','margin-bottom':'200px'});
                $h('.ricerca_home').css({'transform':'translateY(200px)'});
                $h('.fix_scroll').css({'transform':'translateY(200px)','margin-bottom':'250px'});
                $h('.main_nav .logo_wrapper img').css({'width':'64px', 'transition':'0.2s', 'padding-top':'0px'});
                $h('.main_nav .nav-social').css({'opacity':'0', 'transition':'0.2s'});
                
                $h('.navbar').css({'min-height':'46px', 'transition':'0.2s'});
                $h('#site-name a').css({'font-size':'24px', 'transition':'0.2s'});
                $h('#site-name').css({'margin-top':'4px', 'padding-top':'0px', 'transition':'0.2s'});
                
            }
            else
            {
               
                $h('.top_nav').css({'transform':'translateY(0)'});
                $h('.logo_container_main').css({'height':'120px'});
                $h('.ricerca_home').css({'transform':'translateY(0)'});
                $h('.main_nav').css({'position':'relative', 'transform':'translateY(0)'});
                $h('.sub_nav.no_iphone').css({'position':'relative', 'transform':'translateY(0)'});
                $h('#main-wrapper').css({'transform':'translateY(0)','margin-bottom':'0px'});
                $h('.fix_scroll').css({'transform':'translateY(0)','margin-bottom':'0px'});
                $h('.main_nav .logo_wrapper img').css({'width':'71.5px', 'transition':'0.2s', 'padding-top':'20px'});
                $h('.main_nav .nav-social').css({'opacity':'1', 'transition':'0.2s'});
                
                $h('#site-name a').css({'font-size':'32px', 'transition':'0.2s'});
                $h('#site-name').css({'margin-top':'20px', 'padding-top':'12px', 'transition':'0.2s'});
                $h('.navbar').css({'min-height':'50px', 'transition':'0.2s'});
                
            }
        });   
    }
    else if(wind>=753 && wind<=977){
       
        $h(window).on("scroll",function(){
            
            if($h(window).scrollTop()>topq)
            {
               
                $h('.top_nav').css({'transform':'translateY(-100%)'});
                $h('.logo_container_main').css({'height':'70px'});
                $h('.main_nav').css({'position':'fixed', 'transform':'translateY(-48px)'});
                $h('.sub_nav.no_iphone').css({'position':'fixed', 'transform':'translateY(70px)'});
                $h('#main-wrapper').css({'transform':'translateY(230px)','margin-bottom':'200px'});
                $h('.ricerca_home').css({'transform':'translateY(200px)'});
                $h('.fix_scroll').css({'transform':'translateY(200px)','margin-bottom':'250px'});
                $h('.main_nav .logo_wrapper img').css({'width':'64px', 'transition':'0.2s', 'padding-top':'0px'});
                $h('.main_nav .nav-social').css({'opacity':'0', 'transition':'0.2s'});
                
                $h('.navbar').css({'min-height':'46px', 'transition':'0.6s'});
                $h('#site-name a').css({'font-size':'24px', 'transition':'0.2s'});
                $h('#site-name').css({'margin-top':'4px', 'padding-top':'0px', 'transition':'0.2s'});
                
            }
            else
            {
            
                $h('.top_nav').css({'transform':'translateY(0)'});
                $h('.logo_container_main').css({'height':'120px'});
                $h('.ricerca_home').css({'transform':'translateY(0)'});
                $h('.main_nav').css({'position':'relative', 'transform':'translateY(0)'});
                $h('.sub_nav.no_iphone').css({'position':'relative', 'transform':'translateY(0)'});
                $h('#main-wrapper').css({'transform':'translateY(0)','margin-bottom':'0px'});
                $h('.fix_scroll').css({'transform':'translateY(0)','margin-bottom':'0px'});
                $h('.main_nav .logo_wrapper img').css({'width':'71.5px', 'transition':'0.2s', 'padding-top':'20px'});
                $h('.main_nav .nav-social').css({'opacity':'1', 'transition':'0.2s'});
              
                $h('.navbar').css({'min-height':'50px', 'transition':'0.6s'});
                $h('#site-name a').css({'font-size':'32px', 'transition':'0.2s'});
                $h('#site-name').css({'margin-top':'20px', 'padding-top':'12px', 'transition':'0.2s'});
                
            }
        });   
    }
    else if(wind<753) //767 in giù
    {

    }
    //vista news solo prima notizia prima pagina
    u=$h(location).attr('href');
    //console.log("u " + u);
    if(u.includes("?"))
    {
        //console.log("it includes");
        $h('.page-content-notizie .view-news .view-content .views-row').each(function(){
           if( $h(this).hasClass('views-row-1'))
            {
                $h(this).removeClass('views-row-first');
            }
        });
    }
    if(wind>=978 && wind<=1425)
    {
        $h(window).on("scroll",function(){
            
            if($h(window).scrollTop()>topq)
            {
               
            }
            else
            {
                
            }
        });
    }
    console.log("hi");
    
    /*RESIZE*//*RESIZE*//*RESIZE*//*RESIZE*//*RESIZE*//*RESIZE*//*RESIZE*//*RESIZE*//*RESIZE*//*RESIZE*//*RESIZE*//*RESIZE*//*RESIZE*/
    $h( window ).resize(function() {
        wind=$h(window).width();
        q= $h('.main_nav');
        offsetq = q.offset();
        topq=offsetq.top;
        $h(window).unbind("scroll");
        if(wind<753)
        {
            $h('.navbar').css({'min-height':'48px', 'transition':'0.6s'});
            $h('.top_nav').css({'transform':'translateY(0)'});
            $h('.main_nav').css({'position':'fixed', 'transform':'translateY(0)'});
            $h('.navbar').css({'min-height':'48px', 'transition':'0.6s'});
            $h('.ricerca_home').css({'transform':'translateY(0)'});
            $h('#main-wrapper').css({'transform':'translateY(0)','margin-bottom':'0px'});
            $h('.fix_scroll').css({'transform':'translateY(0)','margin-bottom':'0px'});
            $h('.main_nav .logo_wrapper img').css({'width':'71.5px', 'transition':'0.2s', 'padding-top':'0px'});
            $h('#site-name a').css({'font-size':'18px', 'transition':'0.2s'});
        }
        else if(wind>=753 && wind<=977)
        {
            $h('.top_nav').css({'transform':'translateY(0)'});
                $h('.logo_container_main').css({'height':'120px'});
                $h('.ricerca_home').css({'transform':'translateY(0)'});
                $h('.main_nav').css({'position':'relative', 'transform':'translateY(0)'});
                $h('.sub_nav.no_iphone').css({'position':'relative', 'transform':'translateY(0)'});
                $h('#main-wrapper').css({'transform':'translateY(0)','margin-bottom':'0px'});
                $h('.fix_scroll').css({'transform':'translateY(0)','margin-bottom':'0px'});
                $h('.main_nav .logo_wrapper img').css({'width':'71.5px', 'transition':'0.2s', 'padding-top':'20px'});
                $h('.main_nav .nav-social').css({'opacity':'1', 'transition':'0.2s'});
                
                $h('.navbar').css({'min-height':'50px', 'transition':'0.6s'});
                $h('#site-name a').css({'font-size':'24px', 'transition':'0.2s'});
                $h('#site-name').css({'margin-top':'4px', 'padding-top':'0px', 'transition':'0.2s'});
        }
        else if(wind>=978)
        {
            $h('.top_nav').css({'transform':'translateY(0)'});
                $h('.logo_container_main').css({'height':'120px'});
                $h('.ricerca_home').css({'transform':'translateY(0)'});
                $h('.main_nav').css({'position':'relative', 'transform':'translateY(0)'});
                $h('.sub_nav.no_iphone').css({'position':'relative', 'transform':'translateY(0)'});
                $h('#main-wrapper').css({'transform':'translateY(0)','margin-bottom':'0px'});
                $h('.fix_scroll').css({'transform':'translateY(0)','margin-bottom':'0px'});
                $h('.main_nav .logo_wrapper img').css({'width':'71.5px', 'transition':'0.2s', 'padding-top':'20px'});
                $h('.main_nav .nav-social').css({'opacity':'1', 'transition':'0.2s'});
                
                $h('.navbar').css({'min-height':'50px', 'transition':'0.6s'}); 
                $h('#site-name a').css({'font-size':'24px', 'transition':'0.2s'});
                $h('#site-name').css({'margin-top':'4px', 'padding-top':'0px', 'transition':'0.2s'});
        }
        $h(window).on("scroll",function(){
            if($h(window).scrollTop()>topq)
            {
                if(wind>=978)
                {
                   
                    $h('.top_nav').css({'transform':'translateY(-100%)'});
                $h('.logo_container_main').css({'height':'70px'});
                $h('.main_nav').css({'position':'fixed', 'transform':'translateY(-48px)'});
                $h('.sub_nav.no_iphone').css({'position':'fixed', 'transform':'translateY(70px)'});
                $h('#main-wrapper').css({'transform':'translateY(200px)','margin-bottom':'200px'});
                $h('.ricerca_home').css({'transform':'translateY(200px)'});
                $h('.fix_scroll').css({'transform':'translateY(200px)','margin-bottom':'250px'});
                $h('.main_nav .logo_wrapper img').css({'width':'64px', 'transition':'0.2s', 'padding-top':'0px'});
                $h('.main_nav .nav-social').css({'opacity':'0', 'transition':'0.2s'});
                
                $h('.navbar').css({'min-height':'46px', 'transition':'0.6s'});
                $h('#site-name a').css({'font-size':'24px', 'transition':'0.2s'});
                $h('#site-name').css({'margin-top':'4px', 'padding-top':'0px', 'transition':'0.2s'});
                    
                }
                else if(wind>=753 && wind<=977)
                {
                    
                    $h('.top_nav').css({'transform':'translateY(-100%)'});
                $h('.logo_container_main').css({'height':'70px'});
                $h('.main_nav').css({'position':'fixed', 'transform':'translateY(-48px)'});
                $h('.sub_nav.no_iphone').css({'position':'fixed', 'transform':'translateY(70px)'});
                $h('#main-wrapper').css({'transform':'translateY(230px)','margin-bottom':'200px'});
                $h('.ricerca_home').css({'transform':'translateY(200px)'});
                $h('.fix_scroll').css({'transform':'translateY(200px)','margin-bottom':'250px'});
                $h('.main_nav .logo_wrapper img').css({'width':'64px', 'transition':'0.2s', 'padding-top':'0px'});
                $h('.main_nav .nav-social').css({'opacity':'0', 'transition':'0.2s'});
                
                $h('.navbar').css({'min-height':'46px', 'transition':'0.6s'});
                $h('#site-name a').css({'font-size':'24px', 'transition':'0.2s'});
                $h('#site-name').css({'margin-top':'4px', 'padding-top':'0px', 'transition':'0.2s'});
                }
                else if(wind<753)
                {
                   
                    $h('.navbar').css({'min-height':'48px', 'transition':'0.6s'});
                    $h('.main_nav').css({'position':'fixed', 'transform':'translateY(0)'});
                    $h('.top_nav').css({'transform':'translateY(0)'});
                    $h('.ricerca_home').css({'transform':'translateY(0)'});
                    $h('.fix_scroll').css({'transform':'translateY(0)','margin-bottom':'0px'});
                    $h('#main-wrapper').css({'transform':'translateY(0)','margin-bottom':'0px'});
                }
            }
            else
            {
               if(wind>=978)
                {
                    
                    $h('.top_nav').css({'transform':'translateY(0)'});
                $h('.logo_container_main').css({'height':'120px'});
                $h('.ricerca_home').css({'transform':'translateY(0)'});
                $h('.main_nav').css({'position':'relative', 'transform':'translateY(0)'});
                $h('.sub_nav.no_iphone').css({'position':'relative', 'transform':'translateY(0)'});
                $h('#main-wrapper').css({'transform':'translateY(0)','margin-bottom':'0px'});
                $h('.fix_scroll').css({'transform':'translateY(0)','margin-bottom':'0px'});
                $h('.main_nav .logo_wrapper img').css({'width':'71.5px', 'transition':'0.2s', 'padding-top':'20px'});
                $h('.main_nav .nav-social').css({'opacity':'1', 'transition':'0.2s'});
                
                $h('.navbar').css({'min-height':'50px', 'transition':'0.6s'});
                $h('#site-name a').css({'font-size':'32px', 'transition':'0.2s'});
                $h('#site-name').css({'margin-top':'20px', 'padding-top':'12px', 'transition':'0.2s'});
                }
                else if(wind>=753 && wind<=977)
                {
                   
                    $h('.top_nav').css({'transform':'translateY(0)'});
                $h('.logo_container_main').css({'height':'120px'});
                $h('.ricerca_home').css({'transform':'translateY(0)'});
                $h('.main_nav').css({'position':'relative', 'transform':'translateY(0)'});
                $h('.sub_nav.no_iphone').css({'position':'relative', 'transform':'translateY(0)'});
                $h('#main-wrapper').css({'transform':'translateY(0)','margin-bottom':'0px'});
                $h('.fix_scroll').css({'transform':'translateY(0)','margin-bottom':'0px'});
                $h('.main_nav .logo_wrapper img').css({'width':'71.5px', 'transition':'0.2s', 'padding-top':'20px'});
                $h('.main_nav .nav-social').css({'opacity':'1', 'transition':'0.2s'});
                
                $h('.navbar').css({'min-height':'50px', 'transition':'0.6s'});
                $h('#site-name a').css({'font-size':'32px', 'transition':'0.2s'});
                $h('#site-name').css({'margin-top':'20px', 'padding-top':'12px', 'transition':'0.2s'});
                }
                else if(wind<753)
                {
                    
                    $h('.top_nav').css({'transform':'translateY(0)'});
                    $h('.main_nav').css({'position':'fixed', 'transform':'translateY(0)'});
                    $h('.navbar').css({'min-height':'48px', 'transition':'0.6s'});
                    $h('.ricerca_home').css({'transform':'translateY(0)'});
                    $h('#main-wrapper').css({'transform':'translateY(0)','margin-bottom':'0px'});
                    $h('.fix_scroll').css({'transform':'translateY(0)','margin-bottom':'0px'});
                } 
            }
        });

    });
});