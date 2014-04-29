<?php
/**
 * @file
 * kala_picturepanes.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function kala_picturepanes_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fieldable_panels_pane-kala_picturepanes_full-field_kala_picturepanes_caption'
  $field_instances['fieldable_panels_pane-kala_picturepanes_full-field_kala_picturepanes_caption'] = array(
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
  );

  // Exported field_instance: 'fieldable_panels_pane-kala_picturepanes_full-field_kala_picturepanes_image'
  $field_instances['fieldable_panels_pane-kala_picturepanes_full-field_kala_picturepanes_image'] = array(
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
  );

  // Exported field_instance: 'fieldable_panels_pane-kala_picturepanes_half-field_kala_picturepanes_caption'
  $field_instances['fieldable_panels_pane-kala_picturepanes_half-field_kala_picturepanes_caption'] = array(
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
  );

  // Exported field_instance: 'fieldable_panels_pane-kala_picturepanes_half-field_kala_picturepanes_image'
  $field_instances['fieldable_panels_pane-kala_picturepanes_half-field_kala_picturepanes_image'] = array(
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
  );

  // Exported field_instance: 'fieldable_panels_pane-kala_picturepanes_jumbotron-field_kala_picturepanes_caption'
  $field_instances['fieldable_panels_pane-kala_picturepanes_jumbotron-field_kala_picturepanes_caption'] = array(
    'bundle' => 'kala_picturepanes_jumbotron',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
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
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-kala_picturepanes_jumbotron-field_kala_picturepanes_image'
  $field_instances['fieldable_panels_pane-kala_picturepanes_jumbotron-field_kala_picturepanes_image'] = array(
    'bundle' => 'kala_picturepanes_jumbotron',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox' => 'kalapicture_jumbotron',
          'fallback_image_style' => 'kalapicture_jumbotron',
          'image_link' => '',
          'picture_group' => 'kalapicture_jumbotron',
        ),
        'type' => 'picture',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_kala_picturepanes_image',
    'label' => 'Jumbotron Image',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-kala_picturepanes_quarter-field_kala_picturepanes_caption'
  $field_instances['fieldable_panels_pane-kala_picturepanes_quarter-field_kala_picturepanes_caption'] = array(
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
  );

  // Exported field_instance: 'fieldable_panels_pane-kala_picturepanes_quarter-field_kala_picturepanes_image'
  $field_instances['fieldable_panels_pane-kala_picturepanes_quarter-field_kala_picturepanes_image'] = array(
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
  t('Jumbotron Image');
  t('Quarter Image');

  return $field_instances;
}
