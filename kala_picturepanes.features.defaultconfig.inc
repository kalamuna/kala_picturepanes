<?php
/**
 * @file
 * kala_picturepanes.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function kala_picturepanes_defaultconfig_features() {
  return array(
    'kala_picturepanes' => array(
      'field_default_fields' => 'field_default_fields',
      'strongarm' => 'strongarm',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function kala_picturepanes_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'fieldable_panels_pane-kala_picturepanes_full-field_kala_picturepanes_caption'.
  $fields['fieldable_panels_pane-kala_picturepanes_full-field_kala_picturepanes_caption'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_kala_picturepanes_caption',
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
      'locked' => 0,
      'module' => 'text',
      'settings' => array(),
      'translatable' => 0,
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'kala_picturepanes_full',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '<p>Provide optional text here using the <code><figcaption></code> element.</p>',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_kala_picturepanes_caption',
      'label' => 'Caption',
      'required' => 0,
      'settings' => array(
        'linkit' => array(
          'enable' => 0,
          'insert_plugin' => '',
        ),
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => 2,
        ),
        'type' => 'text_textarea',
        'weight' => -3,
      ),
    ),
  );

  // Exported field: 'fieldable_panels_pane-kala_picturepanes_full-field_kala_picturepanes_image'.
  $fields['fieldable_panels_pane-kala_picturepanes_full-field_kala_picturepanes_image'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_kala_picturepanes_image',
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
      'locked' => 0,
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => 0,
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'kala_picturepanes_full',
      'deleted' => 0,
      'description' => '<ul>
<li>Provide alternative text, WebAIM Article: <em><a href="http://webaim.org/techniques/alttext/">Alternative Text</a></em></li>
<li>Use this pane in 12 column region or container width region.</li>
<li>Minimum 2280px wide for best results.</li>
</ul>',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'picture',
          'settings' => array(
            'colorbox' => 'kalapicture_12',
            'fallback_image_style' => 'kalapicture_12',
            'image_link' => '',
            'picture_group' => 'kalapicture_12',
          ),
          'type' => 'picture',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_kala_picturepanes_image',
      'label' => 'Full Image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'file_directory' => 'images/kala_picturepanes_full',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '50 MB',
        'max_resolution' => '',
        'min_resolution' => '1140x1',
        'title_field' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => -4,
      ),
    ),
  );

  // Exported field: 'fieldable_panels_pane-kala_picturepanes_half-field_kala_picturepanes_caption'.
  $fields['fieldable_panels_pane-kala_picturepanes_half-field_kala_picturepanes_caption'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_kala_picturepanes_caption',
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
      'locked' => 0,
      'module' => 'text',
      'settings' => array(),
      'translatable' => 0,
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'kala_picturepanes_half',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '<p>Provide optional text here using the <code><figcaption></code> element.</p>',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_kala_picturepanes_caption',
      'label' => 'Caption',
      'required' => 0,
      'settings' => array(
        'linkit' => array(
          'enable' => 0,
          'insert_plugin' => '',
        ),
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => 2,
        ),
        'type' => 'text_textarea',
        'weight' => 2,
      ),
    ),
  );

  // Exported field: 'fieldable_panels_pane-kala_picturepanes_half-field_kala_picturepanes_image'.
  $fields['fieldable_panels_pane-kala_picturepanes_half-field_kala_picturepanes_image'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_kala_picturepanes_image',
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
      'locked' => 0,
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => 0,
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'kala_picturepanes_half',
      'deleted' => 0,
      'description' => '<ul>
<li>Provide alternative text, WebAIM Article: <em><a href="http://webaim.org/techniques/alttext/">Alternative Text</a></em></li>
<li>Use this pane in 6 column region or container width region.</li>
<li>Minimum 1110px wide for best results.</li>
</ul>',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'picture',
          'settings' => array(
            'colorbox' => 'kalapicture_12',
            'fallback_image_style' => 'kalapicture_6',
            'image_link' => '',
            'picture_group' => 'kalapicture_6',
          ),
          'type' => 'picture',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_kala_picturepanes_image',
      'label' => 'Half Image',
      'required' => 1,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'file_directory' => 'images/kala_picturepanes_half',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '50 MB',
        'max_resolution' => '',
        'min_resolution' => '555x1',
        'title_field' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => 1,
      ),
    ),
  );

  // Exported field: 'fieldable_panels_pane-kala_picturepanes_quarter-field_kala_picturepanes_caption'.
  $fields['fieldable_panels_pane-kala_picturepanes_quarter-field_kala_picturepanes_caption'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_kala_picturepanes_caption',
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
      'locked' => 0,
      'module' => 'text',
      'settings' => array(),
      'translatable' => 0,
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'kala_picturepanes_quarter',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '<p>Provide optional text here using the <code><figcaption></code> element.</p>',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_kala_picturepanes_caption',
      'label' => 'Caption',
      'required' => 0,
      'settings' => array(
        'linkit' => array(
          'enable' => 0,
          'insert_plugin' => '',
        ),
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => 2,
        ),
        'type' => 'text_textarea',
        'weight' => 2,
      ),
    ),
  );

  // Exported field: 'fieldable_panels_pane-kala_picturepanes_quarter-field_kala_picturepanes_image'.
  $fields['fieldable_panels_pane-kala_picturepanes_quarter-field_kala_picturepanes_image'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_kala_picturepanes_image',
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
      'locked' => 0,
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => 0,
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'kala_picturepanes_quarter',
      'deleted' => 0,
      'description' => '<ul>
<li>Provide alternative text, WebAIM Article: <em><a href="http://webaim.org/techniques/alttext/">Alternative Text</a></em></li>
<li>Use this pane in 3 column region or container width region.</li>
<li>Minimum 526px wide for best results.</li>
</ul>',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'picture',
          'settings' => array(
            'colorbox' => 'kalapicture_12',
            'fallback_image_style' => 'kalapicture_3',
            'image_link' => '',
            'picture_group' => 'kalapicture_3',
          ),
          'type' => 'picture',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_kala_picturepanes_image',
      'label' => 'Quarter Image',
      'required' => 1,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'file_directory' => 'images/kala_picturepanes_quarter',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '50 MB',
        'max_resolution' => '',
        'min_resolution' => '263x1',
        'title_field' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => 1,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<p>Provide optional text here using the <code><figcaption></code> element.</p>');
  t('<ul>
<li>Provide alternative text, WebAIM Article: <em><a href="http://webaim.org/techniques/alttext/">Alternative Text</a></em></li>
<li>Use this pane in 12 column region or container width region.</li>
<li>Minimum 2280px wide for best results.</li>
</ul>');
  t('<ul>
<li>Provide alternative text, WebAIM Article: <em><a href="http://webaim.org/techniques/alttext/">Alternative Text</a></em></li>
<li>Use this pane in 3 column region or container width region.</li>
<li>Minimum 526px wide for best results.</li>
</ul>');
  t('<ul>
<li>Provide alternative text, WebAIM Article: <em><a href="http://webaim.org/techniques/alttext/">Alternative Text</a></em></li>
<li>Use this pane in 6 column region or container width region.</li>
<li>Minimum 1110px wide for best results.</li>
</ul>');
  t('Caption');
  t('Full Image');
  t('Half Image');
  t('Quarter Image');

  return $fields;
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function kala_picturepanes_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_fieldable_panels_pane__kala_picturepanes_full';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_fieldable_panels_pane__kala_picturepanes_full'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_fieldable_panels_pane__kala_picturepanes_half';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_fieldable_panels_pane__kala_picturepanes_half'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_fieldable_panels_pane__kala_picturepanes_jumbotron';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_fieldable_panels_pane__kala_picturepanes_jumbotron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_fieldable_panels_pane__kala_picturepanes_quarter';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_fieldable_panels_pane__kala_picturepanes_quarter'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function kala_picturepanes_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fieldable kala_picturepanes_full'.
  $permissions['create fieldable kala_picturepanes_full'] = array(
    'name' => 'create fieldable kala_picturepanes_full',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable kala_picturepanes_half'.
  $permissions['create fieldable kala_picturepanes_half'] = array(
    'name' => 'create fieldable kala_picturepanes_half',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable kala_picturepanes_jumbotron'.
  $permissions['create fieldable kala_picturepanes_jumbotron'] = array(
    'name' => 'create fieldable kala_picturepanes_jumbotron',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable kala_picturepanes_quarter'.
  $permissions['create fieldable kala_picturepanes_quarter'] = array(
    'name' => 'create fieldable kala_picturepanes_quarter',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable kala_picturepanes_full'.
  $permissions['delete fieldable kala_picturepanes_full'] = array(
    'name' => 'delete fieldable kala_picturepanes_full',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable kala_picturepanes_half'.
  $permissions['delete fieldable kala_picturepanes_half'] = array(
    'name' => 'delete fieldable kala_picturepanes_half',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable kala_picturepanes_jumbotron'.
  $permissions['delete fieldable kala_picturepanes_jumbotron'] = array(
    'name' => 'delete fieldable kala_picturepanes_jumbotron',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable kala_picturepanes_quarter'.
  $permissions['delete fieldable kala_picturepanes_quarter'] = array(
    'name' => 'delete fieldable kala_picturepanes_quarter',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable kala_picturepanes_full'.
  $permissions['edit fieldable kala_picturepanes_full'] = array(
    'name' => 'edit fieldable kala_picturepanes_full',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable kala_picturepanes_half'.
  $permissions['edit fieldable kala_picturepanes_half'] = array(
    'name' => 'edit fieldable kala_picturepanes_half',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable kala_picturepanes_jumbotron'.
  $permissions['edit fieldable kala_picturepanes_jumbotron'] = array(
    'name' => 'edit fieldable kala_picturepanes_jumbotron',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable kala_picturepanes_quarter'.
  $permissions['edit fieldable kala_picturepanes_quarter'] = array(
    'name' => 'edit fieldable kala_picturepanes_quarter',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  return $permissions;
}
