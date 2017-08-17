<?php
/**
 * @file
 * ifollo_main.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ifollo_main_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_node_info().
 */
function ifollo_main_node_info() {
  $items = array(
    'article_list' => array(
      'name' => t('Article List'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
