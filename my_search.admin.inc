<?php

/*
 * Implements hook_settings for Custom search
 */
 function my_search_settings() {
   $form['my_search'] = array(
     '#type' => 'fieldset',
     '#title' => t('Configure Google Custom Search Engine'),
   );

   $form['my_search']['my_search_id_key'] = array(
     '#type' => 'textfield',
     '#title' => t('Google Custom Search Engine ID'),
     '#default_value' => variable_get('my_search_id_key'),
     '#description' => t('This is the Search Engine ID for the Google Custom Search Engine.'),
   );
   $form['my_search']['my_search_narrow_search_text'] = array(
     '#type' => 'textfield',
     '#title' => t('Narrow Search Text'),
     '#default_value' => variable_get('my_search_narrow_search_text'),
     '#description' => t('This is the string that will be displayed with the radio to select narrow search. The sitename was automatically added to the end when the module was installed. Current site name: \'') . variable_get('site_name') . t('\''),
   );
   $form['my_search']['my_search_wide_search_text'] = array(
     '#type' => 'textfield',
     '#title' => t('Wide Search Text'),
     '#default_value' => variable_get('my_search_wide_search_text'),
     '#description' => t('This is the string that will be displayed with the radio to select wide search.'),
   );
   $form['my_search']['my_search_url_text'] = array(
     '#type' => 'textfield',
     '#title' => t('Query Url Text'),
     '#default_value' => variable_get('my_search_url_text'),
     '#description' => t('This is the parameter that will be used in the URL as the query for Google Custom Search'),
   );
   $form['my_search']['my_search_results_page_name'] = array(
     '#type' => 'textfield',
     '#title' => t('Search Results Page Name'),
     '#default_value' => variable_get('my_search_results_page_name'),
     '#description' => t('This will be the name of the page that the results will be displayed on.')
   );
   $page = system_settings_form($form);
   $page['#submit'][] = 'my_search_settings_submit';
   return $page;
 }

 function my_search_settings_submit($form, &$form_state) {
   menu_rebuild();
 }
