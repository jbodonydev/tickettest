<?php
    
/**
* Implementation of hook_views_default_views().
*/

function ticketmastertest_views_default_views() {
     
$view = new view();
$view->name = 'supporter';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'supporter';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Your supporter';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '3';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'supporter_name' => 'supporter_name',
  'supporter_email' => 'supporter_email',
  'supporter_address' => 'supporter_address',
  'supporter_country' => 'supporter_country',
);
$handler->display->display_options['row_options']['separator'] = '<br>';
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = 'Please contact the following support person if you need help.';
$handler->display->display_options['header']['area']['format'] = 'filtered_html';
/* Field: Content: Name */
$handler->display->display_options['fields']['supporter_name']['id'] = 'supporter_name';
$handler->display->display_options['fields']['supporter_name']['table'] = 'field_data_supporter_name';
$handler->display->display_options['fields']['supporter_name']['field'] = 'supporter_name';
$handler->display->display_options['fields']['supporter_name']['element_label_type'] = 'strong';
/* Field: Content: Email */
$handler->display->display_options['fields']['supporter_email']['id'] = 'supporter_email';
$handler->display->display_options['fields']['supporter_email']['table'] = 'field_data_supporter_email';
$handler->display->display_options['fields']['supporter_email']['field'] = 'supporter_email';
$handler->display->display_options['fields']['supporter_email']['element_label_type'] = 'strong';
/* Field: Content: Address */
$handler->display->display_options['fields']['supporter_address']['id'] = 'supporter_address';
$handler->display->display_options['fields']['supporter_address']['table'] = 'field_data_supporter_address';
$handler->display->display_options['fields']['supporter_address']['field'] = 'supporter_address';
$handler->display->display_options['fields']['supporter_address']['element_label_type'] = 'strong';
/* Field: Content: Country */
$handler->display->display_options['fields']['supporter_country']['id'] = 'supporter_country';
$handler->display->display_options['fields']['supporter_country']['table'] = 'field_data_supporter_country';
$handler->display->display_options['fields']['supporter_country']['field'] = 'supporter_country';
$handler->display->display_options['fields']['supporter_country']['element_label_type'] = 'strong';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Content: Language */
$handler->display->display_options['arguments']['language']['id'] = 'language';
$handler->display->display_options['arguments']['language']['table'] = 'node';
$handler->display->display_options['arguments']['language']['field'] = 'language';
$handler->display->display_options['arguments']['language']['default_action'] = 'default';
$handler->display->display_options['arguments']['language']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['language']['default_argument_options']['argument'] = 'fr';
$handler->display->display_options['arguments']['language']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['language']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['language']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'supporter' => 'supporter',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Email (supporter_email) */
$handler->display->display_options['filters']['supporter_email_value']['id'] = 'supporter_email_value';
$handler->display->display_options['filters']['supporter_email_value']['table'] = 'field_data_supporter_email';
$handler->display->display_options['filters']['supporter_email_value']['field'] = 'supporter_email_value';
$handler->display->display_options['filters']['supporter_email_value']['operator'] = 'not empty';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'supporter');
$handler->display->display_options['field_language_add_to_query'] = 0;
$translatables['supporter'] = array(
  t('Master'),
  t('Your supporter'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('« first'),
  t('‹ previous'),
  t('next ›'),
  t('last »'),
  t('Please contact the following support person if you need help.'),
  t('Name'),
  t('Email'),
  t('Address'),
  t('Country'),
  t('All'),
  t('Block'),
);

 $views[$view->name] = $view;
 
  return $views;
}
     

	