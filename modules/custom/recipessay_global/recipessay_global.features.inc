<?php
/**
 * @file
 * recipessay_global.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function recipessay_global_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function recipessay_global_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_fontyourface_features_default_font().
 */
function recipessay_global_fontyourface_features_default_font() {
  return array(
    'Quicksand' => array(
      'name' => 'Quicksand',
      'enabled' => '1',
      'url' => 'http://www.fontsquirrel.com/fonts/Quicksand',
      'provider' => 'fontsquirrel',
      'css_selector' => '',
      'css_family' => 'QuicksandLight',
      'css_style' => '',
      'css_weight' => '',
      'css_fallbacks' => '',
      'foundry' => 'Andrew Paglinawan',
      'foundry_url' => 'http://www.fontsquirrel.com/foundry/Andrew-Paglinawan',
      'license' => 'See Font Squirrel license page',
      'license_url' => 'http://www.fontsquirrel.com/fonts/Quicksand#eula',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:3:{s:2:"id";s:3:"456";s:4:"path";s:9:"Quicksand";s:13:"font_filename";s:19:"Quicksand_Light.otf";}',
    ),
  );
}

/**
 * Implements hook_image_default_styles().
 */
function recipessay_global_image_default_styles() {
  $styles = array();

  // Exported image style: recipessay_blog_image
  $styles['recipessay_blog_image'] = array(
    'name' => 'recipessay_blog_image',
    'effects' => array(
      2 => array(
        'label' => 'Scale and Smart Crop',
        'help' => 'Similar to "Scale And Crop", but preserves the portion of the image with the most entropy.',
        'effect callback' => 'smartcrop_scale_effect',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'smartcrop',
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => '600',
          'height' => '360',
          'upscale' => 1,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: recipessay_small_square
  $styles['recipessay_small_square'] = array(
    'name' => 'recipessay_small_square',
    'effects' => array(
      1 => array(
        'label' => 'Scale and Smart Crop',
        'help' => 'Similar to "Scale And Crop", but preserves the portion of the image with the most entropy.',
        'effect callback' => 'smartcrop_scale_effect',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'smartcrop',
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => '240',
          'height' => '240',
          'upscale' => 1,
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function recipessay_global_node_info() {
  $items = array(
    'blog_entry' => array(
      'name' => t('Blog entry'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'favourites' => array(
      'name' => t('Favourites'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
