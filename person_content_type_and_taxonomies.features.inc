<?php
/**
 * @file
 * person_content_type_and_taxonomies.features.inc
 */

/**
 * Implements hook_node_info().
 */
function person_content_type_and_taxonomies_node_info() {
  $items = array(
    'person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => t('Corresponding to a Person in the Dragomans Database'),
      'has_title' => '1',
      'title_label' => t('Display Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
