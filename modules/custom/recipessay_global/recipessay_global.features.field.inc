<?php
/**
 * @file
 * recipessay_global.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function recipessay_global_field_default_fields() {
  $fields = array();

  // Exported field: 'node-blog_entry-body'
  $fields['node-blog_entry-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'blog_entry',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '31',
      ),
    ),
  );

  // Exported field: 'node-blog_entry-field_blog_image'
  $fields['node-blog_entry-field_blog_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_blog_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'blog_entry',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => 'recipessay_blog_image',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => 'recipessay_blog_image',
          ),
          'type' => 'image',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_blog_image',
      'label' => 'blog_image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'filefield_paths' => array(
          'active_updating' => 0,
          'file_name' => array(
            'options' => array(
              'pathauto' => 0,
              'transliterate' => 0,
            ),
            'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
          ),
          'file_path' => array(
            'options' => array(
              'pathauto' => 0,
              'transliterate' => 0,
            ),
            'value' => 'blog/images/[yyyy]/[mon]',
          ),
          'retroactive_update' => 0,
        ),
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'aviary_falcon_enabled' => 0,
          'aviary_falcon_position' => '0',
          'aviary_feather_enabled' => 0,
          'aviary_feather_position' => '0',
          'aviary_peacock_enabled' => 0,
          'aviary_peacock_position' => '0',
          'aviary_phoenix_enabled' => 0,
          'aviary_phoenix_position' => '0',
          'aviary_raven_enabled' => 0,
          'aviary_raven_position' => '0',
          'filefield_sources' => array(
            'filefield_sources' => array(
              'attach' => 0,
              'imageeditor' => 'imageeditor',
              'reference' => 'reference',
              'remote' => 'remote',
            ),
            'source_attach' => array(
              'absolute' => '0',
              'attach_mode' => 'copy',
              'path' => 'file_attach',
            ),
            'source_imageeditor' => array(
              'source_imageeditor_image' => 0,
            ),
            'source_reference' => array(
              'autocomplete' => '1',
            ),
          ),
          'flauntr_styler_enabled' => 0,
          'flauntr_styler_position' => '0',
          'fotoflexer_enabled' => 0,
          'fotoflexer_position' => '0',
          'imageeditor_icons_position' => '0',
          'imageeditor_replace' => 0,
          'imageshack_upload_enabled' => 0,
          'imageshack_upload_position' => '0',
          'immio_upload_enabled' => 0,
          'immio_upload_position' => '0',
          'paintweb_enabled' => 0,
          'paintweb_position' => '0',
          'picnik_enabled' => 0,
          'picnik_position' => '0',
          'pixlr_editor_enabled' => 0,
          'pixlr_editor_position' => '0',
          'pixlr_express_enabled' => 1,
          'pixlr_express_position' => '0',
          'pixlr_upload_enabled' => 1,
          'pixlr_upload_position' => '0',
          'preview_image_style' => 'recipessay_blog_image',
          'progress_indicator' => 'throbber',
          'snipshot_enabled' => 0,
          'snipshot_position' => '0',
          'sumopaint_enabled' => 0,
          'sumopaint_position' => '0',
          'svgedit_enabled' => 0,
          'svgedit_position' => '0',
        ),
        'type' => 'image_image',
        'weight' => '32',
      ),
    ),
  );

  // Exported field: 'node-favourites-body'
  $fields['node-favourites-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'favourites',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '31',
      ),
    ),
  );

  // Exported field: 'node-favourites-field_favourites_image'
  $fields['node-favourites-field_favourites_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_favourites_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'favourites',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 1,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_favourites_image',
      'label' => 'favourites_image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'filefield_paths' => array(
          'active_updating' => 0,
          'file_name' => array(
            'options' => array(
              'pathauto' => 0,
              'transliterate' => 0,
            ),
            'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
          ),
          'file_path' => array(
            'options' => array(
              'pathauto' => 0,
              'transliterate' => 0,
            ),
            'value' => 'favourites/[yyyy]/[mon]',
          ),
          'retroactive_update' => 0,
        ),
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'aviary_falcon_enabled' => 0,
          'aviary_falcon_position' => '0',
          'aviary_feather_enabled' => 0,
          'aviary_feather_position' => '0',
          'aviary_peacock_enabled' => 0,
          'aviary_peacock_position' => '0',
          'aviary_phoenix_enabled' => 0,
          'aviary_phoenix_position' => '0',
          'aviary_raven_enabled' => 0,
          'aviary_raven_position' => '0',
          'filefield_sources' => array(
            'filefield_sources' => array(
              'attach' => 0,
              'imageeditor' => 'imageeditor',
              'reference' => 'reference',
              'remote' => 'remote',
            ),
            'source_attach' => array(
              'absolute' => '0',
              'attach_mode' => 'copy',
              'path' => 'file_attach',
            ),
            'source_imageeditor' => array(
              'source_imageeditor_image' => 0,
            ),
            'source_reference' => array(
              'autocomplete' => '1',
            ),
          ),
          'flauntr_styler_enabled' => 0,
          'flauntr_styler_position' => '0',
          'fotoflexer_enabled' => 0,
          'fotoflexer_position' => '0',
          'imageeditor_icons_position' => '0',
          'imageeditor_replace' => 1,
          'imageshack_upload_enabled' => 0,
          'imageshack_upload_position' => '0',
          'immio_upload_enabled' => 0,
          'immio_upload_position' => '0',
          'paintweb_enabled' => 0,
          'paintweb_position' => '0',
          'picnik_enabled' => 0,
          'picnik_position' => '0',
          'pixlr_editor_enabled' => 0,
          'pixlr_editor_position' => '0',
          'pixlr_express_enabled' => 1,
          'pixlr_express_position' => '0',
          'pixlr_upload_enabled' => 0,
          'pixlr_upload_position' => '0',
          'preview_image_style' => 'recipessay_small_square',
          'progress_indicator' => 'throbber',
          'snipshot_enabled' => 0,
          'snipshot_position' => '0',
          'sumopaint_enabled' => 0,
          'sumopaint_position' => '0',
          'svgedit_enabled' => 0,
          'svgedit_position' => '0',
        ),
        'type' => 'image_image',
        'weight' => '32',
      ),
    ),
  );

  // Exported field: 'node-favourites-field_favourites_link'
  $fields['node-favourites-field_favourites_link'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_favourites_link',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'favourites',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 2,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_favourites_link',
      'label' => 'favourites_link',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '33',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('blog_image');
  t('favourites_image');
  t('favourites_link');

  return $fields;
}
