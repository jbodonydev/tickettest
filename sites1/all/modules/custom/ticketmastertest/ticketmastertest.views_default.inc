<?php
    
/**
* Implementation of hook_views_default_views().
*/

function ticketmastertest_views_default_views() {
     
$view = new view();
$view->name = 'supporter_webform_results';
$view->description = '';
$view->tag = 'webform supporter';
$view->base_table = 'webform_submissions';
$view->human_name = 'Supporter Webform';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Your Supporter';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '3';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 50, 100, 200, 500, 1000';
$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'All';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['row_plugin'] = 'fields';
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = 'Please contact the following support person if you need help.';
$handler->display->display_options['header']['area']['format'] = 'filtered_html';
/* No results behavior: Global: Unfiltered text */
$handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
$handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
$handler->display->display_options['empty']['area_text_custom']['content'] = 'There are no submissions for this form. <a href="/node/!1">View this form</a>.';
$handler->display->display_options['empty']['area_text_custom']['tokenize'] = TRUE;
/* Relationship: Webform submissions: Data */
$handler->display->display_options['relationships']['data']['id'] = 'data';
$handler->display->display_options['relationships']['data']['table'] = 'webform_submissions';
$handler->display->display_options['relationships']['data']['field'] = 'data';
$handler->display->display_options['relationships']['data']['webform_nid'] = '2';
$handler->display->display_options['relationships']['data']['webform_cid'] = '6';
/* Field: Webform submission data: Value */
$handler->display->display_options['fields']['value']['id'] = 'value';
$handler->display->display_options['fields']['value']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value']['field'] = 'value';
$handler->display->display_options['fields']['value']['label'] = 'Name';
$handler->display->display_options['fields']['value']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['value']['webform_nid'] = '2';
$handler->display->display_options['fields']['value']['webform_cid'] = '1';
/* Field: Webform submission data: Value */
$handler->display->display_options['fields']['value_1']['id'] = 'value_1';
$handler->display->display_options['fields']['value_1']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_1']['field'] = 'value';
$handler->display->display_options['fields']['value_1']['label'] = 'Email';
$handler->display->display_options['fields']['value_1']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['value_1']['webform_nid'] = '2';
$handler->display->display_options['fields']['value_1']['webform_cid'] = '2';
/* Field: Webform submission data: Value */
$handler->display->display_options['fields']['value_2']['id'] = 'value_2';
$handler->display->display_options['fields']['value_2']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_2']['field'] = 'value';
$handler->display->display_options['fields']['value_2']['label'] = 'Address';
$handler->display->display_options['fields']['value_2']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['value_2']['webform_nid'] = '2';
$handler->display->display_options['fields']['value_2']['webform_cid'] = '5';
/* Field: Webform submission data: Value */
$handler->display->display_options['fields']['value_3']['id'] = 'value_3';
$handler->display->display_options['fields']['value_3']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_3']['field'] = 'value';
$handler->display->display_options['fields']['value_3']['label'] = 'Country';
$handler->display->display_options['fields']['value_3']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['value_3']['webform_nid'] = '2';
$handler->display->display_options['fields']['value_3']['webform_cid'] = '6';
/* Filter criterion: Webform submission data: Data field */
$handler->display->display_options['filters']['data']['id'] = 'data';
$handler->display->display_options['filters']['data']['table'] = 'webform_submitted_data';
$handler->display->display_options['filters']['data']['field'] = 'data';
$handler->display->display_options['filters']['data']['relationship'] = 'data';
$handler->display->display_options['filters']['data']['value'] = 'en';

/* Display: Supporters */
$handler = $view->new_display('block', 'Supporters', 'supporter');
$translatables['supporter_webform_results'] = array(
  t('Master'),
  t('Your Supporter'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('All'),
  t('Offset'),
  t('« first'),
  t('‹ previous'),
  t('next ›'),
  t('last »'),
  t('Please contact the following support person if you need help.'),
  t('There are no submissions for this form. <a href="/node/!1">View this form</a>.'),
  t('Submission Data'),
  t('Name'),
  t('Email'),
  t('Address'),
  t('Country'),
  t('Supporters'),
);
     
  $views[$view->name] = $view;
 
  return $views;
}
     

	