<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function pondscrum_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function pondscrum_node_info() {
  $items = array(
    'ps_userstory' => array(
      'name' => t('User story'),
      'module' => 'features',
      'description' => t('User stories are units of development that brings new features to a product.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function pondscrum_views_api() {
  return array(
    'api' => '2',
  );
}
