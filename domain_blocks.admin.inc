<?php

/**
 * @file
 * Domain block options.
 *
 * Provides admin screens for block display overrides.
 * @ingroup domain_blocks
 */

/**
 * The domain blocks page callback router.
 *
 * @param $domain
 *  The $domain object created by domain_lookup().
 * @return
 * The appropriate form or an error message.
 */
 
function domain_blocks_page($domain) {
    //include_once drupal_get_path('module', 'domain_conf') .'/domain_conf.admin.inc';    
    //return domain_conf_page($domain);   
    
   if ($domain == -1) {
    return t('Invalid page requested.');
  }
   
  global $custom_theme;
  // Load the block file.
  include_once drupal_get_path('module', 'block') .'/block.admin.inc';

  // If non-default theme configuration has been selected, set the custom theme.
  $custom_theme = isset($theme) ? $theme : variable_get('theme_default', 'garland');

  // Fetch and sort blocks
  
  

  if ($domain['domain_id'] > 0) {
    // Ensure we are on the proper domain.
    domain_goto($domain);
    
    $domain_blocks = _domain_blocks_rehash($domain);	 
    
    drupal_set_title(t('!site : Domain block settings', array('!site' => $domain['sitename'])));
    return drupal_get_form('block_admin_display_form', $domain_blocks, $custom_theme);
  }
  else if ($domain['domain_id'] == 0) {
  	usort($blocks, '_block_compare');
    return drupal_get_form('block_admin_display_form', $blocks, $custom_theme);
  }
     

}


function domain_blocks_add($domain) {
	
	
	//include_once drupal_get_path('module', 'domain_conf') .'/domain_conf.admin.inc';    
    //return domain_conf_page($domain);
    
  include_once '/'.drupal_get_path('module', 'block') .'/block.admin.inc';

  return drupal_get_form('block_add_block_form');
     

}

function domain_blocks_admin_configure() {
	
	
	//include_once drupal_get_path('module', 'domain_conf') .'/domain_conf.admin.inc';    
    //return domain_conf_page($domain);
    
  include_once '/'.drupal_get_path('module', 'block') .'/block.admin.inc';

  return drupal_get_form('block_admin_configure');
     

}

function domain_blocks_box_delete() {
	
	
	//include_once drupal_get_path('module', 'domain_conf') .'/domain_conf.admin.inc';    
    //return domain_conf_page($domain);
    
  include_once '/'.drupal_get_path('module', 'block') .'/block.admin.inc';

  return drupal_get_form('block_box_delete');
     

}






