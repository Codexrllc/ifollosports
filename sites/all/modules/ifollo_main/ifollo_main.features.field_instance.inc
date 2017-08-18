<?php
/**
 * @file
 * ifollo_main.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ifollo_main_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-article_list-field_count'.
  $field_instances['node-article_list-field_count'] = array(
    'bundle' => 'article_list',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'amp' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_count',
    'label' => 'Listicle Count',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => 1,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 14,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Listicle Count');

  return $field_instances;
}
