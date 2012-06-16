<?php

/**
 * Generates a blank page for menu callbacks
 */
function template_d7_blank_page() {
  return '';
}

/**
 * Implements hook_menu()
 */
function template_d7_global_menu() {
  $items = array();
  
  /* Blank placeholder for the front page */
  $items['home'] = array(
    'title' => 'Home', // Will likely be overriden by page_title module
    'page callback' => 'template_d7_blank_page',
    'access callback' => TRUE, // Assume most use-cases require all users to see the front page
    'type' => MENU_CALLBACK,
  );
  
  return $items;
}