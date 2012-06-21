<?php
/**
 * @file
 * recipessay_global.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function recipessay_global_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blog_entry|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blog_entry';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'sharing' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'author',
    ),
    'post_date' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'ds_post_date_medium',
    ),
  );
  $export['node|blog_entry|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function recipessay_global_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'recipessay_blog_favsblock';
  $ds_field->label = 'blog_favs';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'block' => 'views|recipessay_favs-block',
    'block_render' => '1',
  );
  $export['recipessay_blog_favsblock'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'sharing';
  $ds_field->label = 'sharing';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'block' => 'sharethis|sharethis_block',
    'block_render' => '1',
  );
  $export['sharing'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function recipessay_global_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog_entry|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog_entry';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_blog_image',
        2 => 'post_date',
        3 => 'author',
        4 => 'body',
        5 => 'sharing',
        6 => 'comments',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_blog_image' => 'ds_content',
      'post_date' => 'ds_content',
      'author' => 'ds_content',
      'body' => 'ds_content',
      'sharing' => 'ds_content',
      'comments' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|blog_entry|full'] = $ds_layout;

  return $export;
}
