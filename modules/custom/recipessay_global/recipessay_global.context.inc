<?php
/**
 * @file
 * recipessay_global.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function recipessay_global_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'recipessay_blog';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog' => 'blog',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'panels_mini-recipessay_specials' => array(
          'module' => 'panels_mini',
          'delta' => 'recipessay_specials',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-recipessay_blog-block_1' => array(
          'module' => 'views',
          'delta' => 'recipessay_blog-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['recipessay_blog'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'recipessay_blog_entry';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog_entry' => 'blog_entry',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-recipessay_favs-block' => array(
          'module' => 'views',
          'delta' => 'recipessay_favs-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['recipessay_blog_entry'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'recipessay_contact';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact' => 'contact',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'panels_mini-recipessay_contact_block' => array(
          'module' => 'panels_mini',
          'delta' => 'recipessay_contact_block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'panels_mini-recipessay_branding' => array(
          'module' => 'panels_mini',
          'delta' => 'recipessay_branding',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'views-recipessay_favs-block' => array(
          'module' => 'views',
          'delta' => 'recipessay_favs-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['recipessay_contact'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'recipessay_lemon_squeezy';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'lemonsqueezy' => 'lemonsqueezy',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'panels_mini-recipessay_lemonsqueezy_banner' => array(
          'module' => 'panels_mini',
          'delta' => 'recipessay_lemonsqueezy_banner',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-recipessay_blog-block_2' => array(
          'module' => 'views',
          'delta' => 'recipessay_blog-block_2',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['recipessay_lemon_squeezy'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'recipessay_sitewide_context';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'panels_mini-recipessay_branding' => array(
          'module' => 'panels_mini',
          'delta' => 'recipessay_branding',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'panels_mini-recipessay_about' => array(
          'module' => 'panels_mini',
          'delta' => 'recipessay_about',
          'region' => 'sidebar_first',
          'weight' => '-16',
        ),
        'views-recipessay_favs-block' => array(
          'module' => 'views',
          'delta' => 'recipessay_favs-block',
          'region' => 'sidebar_first',
          'weight' => '-15',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['recipessay_sitewide_context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'recipessay_worthit';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'worthit' => 'worthit',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'panels_mini-recipessay_worthit_banner' => array(
          'module' => 'panels_mini',
          'delta' => 'recipessay_worthit_banner',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-recipessay_blog-block_3' => array(
          'module' => 'views',
          'delta' => 'recipessay_blog-block_3',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['recipessay_worthit'] = $context;

  return $export;
}
