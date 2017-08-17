<?php
/**
 * @file
 * ifollo_main.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ifollo_main_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_count'.
  $field_bases['field_count'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_count',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  return $field_bases;
}
