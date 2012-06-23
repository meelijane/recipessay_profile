<?php

/**
 * Generates a blank page for menu callbacks
 */
function recipessay_blank_page() {
  return '';
}

/**
 * Implements hook_menu()
 */
function recipessay_global_menu() {
  $items = array();
  
  /* Blank placeholder for the front page */
  $items['home'] = array(
    'title' => 'Home', // Will likely be overriden by page_title module
    'title' => 'Recipessay | Blog', // Will likely be overriden by page_title module
    'page callback' => 'recipessay_blank_page',
    'access callback' => TRUE, // Assume most use-cases require all users to see the front page
    'type' => MENU_CALLBACK,
  );
$items['blog'] = array(
    'title' => 'Recipessay | Blog', // Will likely be overriden by page_title module
    'page callback' => 'recipessay_blank_page',
    'access callback' => TRUE, // Assume most use-cases require all users to see the front page
    'type' => MENU_CALLBACK,
  );
$items['contact'] = array(
    'title' => 'Recipessay | Contact', // Will likely be overriden by page_title module
    'page callback' => 'recipessay_blank_page',
    'access callback' => TRUE, // Assume most use-cases require all users to see the front page
    'type' => MENU_CALLBACK,
  );
$items['lemonsqueezy'] = array(
    'title' => 'Recipessay | Easy recipes', // Will likely be overriden by page_title module
    'page callback' => 'recipessay_blank_page',
    'access callback' => TRUE, // Assume most use-cases require all users to see the front page
    'type' => MENU_CALLBACK,
  );
$items['worthit'] = array(
    'title' => 'Recipessay | Reviews & things worth doing', // Will likely be overriden by page_title module
    'page callback' => 'recipessay_blank_page',
    'access callback' => TRUE, // Assume most use-cases require all users to see the front page
    'type' => MENU_CALLBACK,
  );
  
  return $items;
}