<?php
/**
 * @file
 * recipessay_global.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function recipessay_global_taxonomy_default_vocabularies() {
  return array(
    'blog_type' => array(
      'name' => 'Blog Type',
      'machine_name' => 'blog_type',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
