<?php

/**
 * Implementation of hook_views_default_views().
 */
function pondscrum_views_default_views() {
  $views = array();

  // Exported view: ps_backlog
  $view = new view;
  $view->name = 'ps_backlog';
  $view->description = 'Pond SCRUM : A listing of user stories';
  $view->tag = 'ps';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'nodefield' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'build_mode' => 'teaser',
      'links' => 0,
      'comments' => 0,
      'exclude' => 0,
      'id' => 'nodefield',
      'table' => 'node',
      'field' => 'nodefield',
      'relationship' => 'none',
    ),
    'field_ps_userstory_priority_value' => array(
      'label' => 'Priority',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_ps_userstory_priority_value',
      'table' => 'node_data_field_ps_userstory_priority',
      'field' => 'field_ps_userstory_priority_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'field_ps_userstory_priority_value' => array(
      'order' => 'ASC',
      'delta' => -1,
      'id' => 'field_ps_userstory_priority_value',
      'table' => 'node_data_field_ps_userstory_priority',
      'field' => 'field_ps_userstory_priority_value',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'ps_userstory' => 'ps_userstory',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Product Backlog - Priority');
  $handler->override_option('items_per_page', 25);
  $handler->override_option('style_plugin', 'draggabletable');
  $handler->override_option('style_options', array(
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'columns' => array(
      'nodefield' => 'nodefield',
      'field_ps_userstory_priority_value' => 'field_ps_userstory_priority_value',
    ),
    'info' => array(
      'nodefield' => array(
        'separator' => '',
      ),
      'field_ps_userstory_priority_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
    ),
    'default' => '-1',
    'tabledrag_hierarchy' => array(
      'field' => 'none',
      'handler' => 'native',
    ),
    'tabledrag_order' => array(
      'field' => 'field_ps_userstory_priority_value',
      'handler' => 'cck',
    ),
    'draggableviews_extensions' => array(
      'extension_top' => '3',
      'extension_bottom' => '3',
    ),
    'tabledrag_order_visible' => array(
      'visible' => 0,
    ),
    'tabledrag_hierarchy_visible' => array(
      'visible' => 0,
    ),
    'draggableviews_depth_limit' => '-1',
    'draggableviews_repair' => array(
      'repair' => 'repair',
    ),
    'tabledrag_types_add' => 'Add type',
    'tabledrag_expand' => array(
      'expand_links' => 'expand_links',
      'collapsed' => 0,
      'by_uid' => 0,
    ),
    'tabledrag_lock' => array(
      'lock' => 0,
    ),
    'draggableviews_default_on_top' => '1',
    'draggableviews_button_text' => 'Save order',
    'draggableviews_arguments' => array(
      'use_args' => 0,
    ),
  ));
  $handler = $view->new_display('page', 'Priority', 'page_1');
  $handler->override_option('relationships', array(
    'vid' => array(
      'label' => 'Parent user story reverse reference',
      'required' => 0,
      'delta' => -1,
      'id' => 'vid',
      'table' => 'node_data_field_ps_userstory_parent',
      'field' => 'vid',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'ps_userstory' => 'ps_userstory',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'nid' => array(
      'operator' => 'empty',
      'value' => array(
        'value' => '',
        'min' => '',
        'max' => '',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'nid',
      'table' => 'node',
      'field' => 'nid',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'vid',
    ),
  ));
  $handler->override_option('style_options', array(
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'columns' => array(
      'nodefield' => 'nodefield',
      'field_ps_userstory_priority_value' => 'field_ps_userstory_priority_value',
    ),
    'info' => array(
      'nodefield' => array(
        'separator' => '',
      ),
      'field_ps_userstory_priority_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
    ),
    'default' => '-1',
    'tabledrag_hierarchy' => array(
      'field' => 'none',
      'handler' => 'native',
    ),
    'tabledrag_order' => array(
      'field' => 'field_ps_userstory_priority_value',
      'handler' => 'cck',
    ),
    'draggableviews_extensions' => array(
      'extension_top' => '3',
      'extension_bottom' => '3',
    ),
    'tabledrag_order_visible' => array(
      'visible' => 0,
    ),
    'tabledrag_hierarchy_visible' => array(
      'visible' => 0,
    ),
    'draggableviews_depth_limit' => '-1',
    'draggableviews_repair' => array(
      'repair' => 'repair',
    ),
    'tabledrag_types_add' => 'Add type',
    'tabledrag_expand' => array(
      'expand_links' => 'expand_links',
      'collapsed' => 0,
      'by_uid' => 0,
    ),
    'tabledrag_lock' => array(
      'lock' => 0,
    ),
    'draggableviews_default_on_top' => '0',
    'draggableviews_button_text' => 'Save order',
    'draggableviews_arguments' => array(
      'use_args' => 0,
    ),
  ));
  $handler->override_option('path', 'ps/backlog/priority');
  $handler->override_option('menu', array(
    'type' => 'default tab',
    'title' => 'Priority',
    'description' => 'Ordering user stories by importance',
    'weight' => '0',
    'name' => 'features',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'normal',
    'title' => 'Scrum',
    'description' => 'A list of user stories',
    'weight' => '0',
    'name' => 'features',
  ));
  $handler = $view->new_display('page', 'Structure', 'page_2');
  $handler->override_option('fields', array(
    'nodefield' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'build_mode' => 'teaser',
      'links' => 0,
      'comments' => 0,
      'exclude' => 0,
      'id' => 'nodefield',
      'table' => 'node',
      'field' => 'nodefield',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'field_ps_userstory_parent_nid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_ps_userstory_parent_nid',
      'table' => 'node_data_field_ps_userstory_parent',
      'field' => 'field_ps_userstory_parent_nid',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'value0' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'value0',
      'table' => 'draggableviews_structure_node0',
      'field' => 'value0',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'value0' => array(
      'order' => 'ASC',
      'id' => 'value0',
      'table' => 'draggableviews_structure_node0',
      'field' => 'value0',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('title', 'Product Backlog - Structure');
  $handler->override_option('style_options', array(
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'columns' => array(
      'nodefield' => 'nodefield',
      'field_ps_userstory_parent_nid' => 'field_ps_userstory_parent_nid',
      'value0' => 'value0',
    ),
    'info' => array(
      'nodefield' => array(
        'separator' => '',
      ),
      'field_ps_userstory_parent_nid' => array(
        'separator' => '',
      ),
      'value0' => array(
        'sortable' => 0,
        'separator' => '',
      ),
    ),
    'default' => '-1',
    'tabledrag_hierarchy' => array(
      'field' => 'field_ps_userstory_parent_nid',
      'handler' => 'cck',
    ),
    'tabledrag_order' => array(
      'field' => 'value0',
      'handler' => 'native',
    ),
    'draggableviews_extensions' => array(
      'extension_top' => '3',
      'extension_bottom' => '3',
    ),
    'tabledrag_order_visible' => array(
      'visible' => 0,
    ),
    'tabledrag_hierarchy_visible' => array(
      'visible' => 0,
    ),
    'draggableviews_depth_limit' => '-1',
    'draggableviews_repair' => array(
      'repair' => 'repair',
    ),
    'tabledrag_types_add' => 'Add type',
    'tabledrag_expand' => array(
      'expand_links' => 'expand_links',
      'collapsed' => 0,
      'by_uid' => 0,
    ),
    'tabledrag_lock' => array(
      'lock' => 0,
    ),
    'draggableviews_default_on_top' => '0',
    'draggableviews_button_text' => 'Save order',
    'draggableviews_arguments' => array(
      'use_args' => 0,
    ),
  ));
  $handler->override_option('path', 'ps/backlog/structure');
  $handler->override_option('menu', array(
    'type' => 'tab',
    'title' => 'Structure',
    'description' => 'Change the user story hierarchy',
    'weight' => '1',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $translatables['ps_backlog'] = array(
    t('Defaults'),
    t('Priority'),
    t('Product Backlog - Priority'),
    t('Product Backlog - Structure'),
    t('Structure'),
  );

  $views[$view->name] = $view;

  // Exported view: ps_stories_structure
  $view = new view;
  $view->name = 'ps_stories_structure';
  $view->description = 'Pond Scrum: A draggable view for structuring user stories';
  $view->tag = 'ps';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => 'Title',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
    ),
    'field_ps_userstory_points_initia_value' => array(
      'label' => 'Story points (initial estimate)',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_ps_userstory_points_initia_value',
      'table' => 'node_data_field_ps_userstory_points_initia',
      'field' => 'field_ps_userstory_points_initia_value',
      'relationship' => 'none',
    ),
    'field_ps_userstory_childs_initia_value' => array(
      'label' => 'Initial estimate, this story plus children',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_ps_userstory_childs_initia_value',
      'table' => 'node_data_field_ps_userstory_childs_initia',
      'field' => 'field_ps_userstory_childs_initia_value',
      'relationship' => 'none',
    ),
    'value0' => array(
      'label' => 'Order',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'value0',
      'table' => 'draggableviews_structure_node0',
      'field' => 'value0',
      'relationship' => 'none',
    ),
    'field_ps_userstory_parent_nid' => array(
      'label' => 'Parent user story',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_ps_userstory_parent_nid',
      'table' => 'node_data_field_ps_userstory_parent',
      'field' => 'field_ps_userstory_parent_nid',
      'relationship' => 'none',
    ),
    'edit_node' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'text' => 'edit',
      'exclude' => 0,
      'id' => 'edit_node',
      'table' => 'node',
      'field' => 'edit_node',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'value0' => array(
      'order' => 'ASC',
      'id' => 'value0',
      'table' => 'draggableviews_structure_node0',
      'field' => 'value0',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'User story structure');
  $handler->override_option('header', '<a href="/node/add/ps-userstory">Add another user story</a>');
  $handler->override_option('header_format', '1');
  $handler->override_option('header_empty', 0);
  $handler->override_option('footer', 'Please note that nodes have to be resaved if the computed field should be updated. This can be done by nudging the node and hitting table\'s the save button. Sorry about the inconvenience.');
  $handler->override_option('footer_format', '1');
  $handler->override_option('footer_empty', 1);
  $handler->override_option('items_per_page', 50);
  $handler->override_option('style_plugin', 'draggabletable');
  $handler->override_option('style_options', array(
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'columns' => array(
      'title' => 'title',
      'field_ps_userstory_points_initia_value' => 'field_ps_userstory_points_initia_value',
      'field_ps_userstory_childs_initia_value' => 'field_ps_userstory_childs_initia_value',
      'value0' => 'value0',
      'field_ps_userstory_parent_nid' => 'field_ps_userstory_parent_nid',
      'edit_node' => 'edit_node',
    ),
    'info' => array(
      'title' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_ps_userstory_points_initia_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_ps_userstory_childs_initia_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'value0' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_ps_userstory_parent_nid' => array(
        'separator' => '',
      ),
      'edit_node' => array(
        'separator' => '',
      ),
    ),
    'default' => '-1',
    'tabledrag_hierarchy' => array(
      'field' => 'field_ps_userstory_parent_nid',
      'handler' => 'cck',
    ),
    'tabledrag_order' => array(
      'field' => 'value0',
      'handler' => 'native',
    ),
    'draggableviews_extensions' => array(
      'extension_top' => '3',
      'extension_bottom' => '3',
    ),
    'tabledrag_order_visible' => array(
      'visible' => 0,
    ),
    'tabledrag_hierarchy_visible' => array(
      'visible' => 0,
    ),
    'draggableviews_depth_limit' => '-1',
    'draggableviews_repair' => array(
      'repair' => 'repair',
    ),
    'tabledrag_types_add' => 'Add type',
    'tabledrag_expand' => array(
      'expand_links' => 'expand_links',
      'collapsed' => 'collapsed',
      'by_uid' => 0,
    ),
    'tabledrag_lock' => array(
      'lock' => 0,
    ),
    'draggableviews_default_on_top' => '0',
    'draggableviews_button_text' => 'Save order',
    'draggableviews_arguments' => array(
      'use_args' => 0,
    ),
  ));
  $handler = $view->new_display('page', 'Structure (Page)', 'page_1');
  $handler->override_option('fields', array(
    'nodefield' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'build_mode' => 'teaser',
      'links' => 0,
      'comments' => 0,
      'exclude' => 0,
      'id' => 'nodefield',
      'table' => 'node',
      'field' => 'nodefield',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'field_ps_userstory_parent_nid' => array(
      'label' => 'Parent user story',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_ps_userstory_parent_nid',
      'table' => 'node_data_field_ps_userstory_parent',
      'field' => 'field_ps_userstory_parent_nid',
      'relationship' => 'none',
    ),
    'field_ps_userstory_structure_ord_value' => array(
      'label' => 'Structure order',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_ps_userstory_structure_ord_value',
      'table' => 'node_data_field_ps_userstory_structure_ord',
      'field' => 'field_ps_userstory_structure_ord_value',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'field_ps_userstory_structure_ord_value' => array(
      'order' => 'ASC',
      'delta' => -1,
      'id' => 'field_ps_userstory_structure_ord_value',
      'table' => 'node_data_field_ps_userstory_structure_ord',
      'field' => 'field_ps_userstory_structure_ord_value',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('style_options', array(
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'columns' => array(
      'title' => 'title',
      'field_ps_userstory_points_initia_value' => 'field_ps_userstory_points_initia_value',
      'field_ps_userstory_childs_initia_value' => 'field_ps_userstory_childs_initia_value',
      'field_ps_userstory_parent_nid' => 'field_ps_userstory_parent_nid',
      'edit_node' => 'edit_node',
      'field_ps_userstory_structure_ord_value' => 'field_ps_userstory_structure_ord_value',
    ),
    'info' => array(
      'title' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_ps_userstory_points_initia_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_ps_userstory_childs_initia_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_ps_userstory_parent_nid' => array(
        'separator' => '',
      ),
      'edit_node' => array(
        'separator' => '',
      ),
      'field_ps_userstory_structure_ord_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
    ),
    'default' => '-1',
    'tabledrag_hierarchy' => array(
      'field' => 'field_ps_userstory_parent_nid',
      'handler' => 'cck',
    ),
    'tabledrag_order' => array(
      'field' => 'field_ps_userstory_structure_ord_value',
      'handler' => 'cck',
    ),
    'draggableviews_extensions' => array(
      'extension_top' => '3',
      'extension_bottom' => '3',
    ),
    'tabledrag_order_visible' => array(
      'visible' => 0,
    ),
    'tabledrag_hierarchy_visible' => array(
      'visible' => 0,
    ),
    'draggableviews_depth_limit' => '-1',
    'draggableviews_repair' => array(
      'repair' => 'repair',
    ),
    'tabledrag_types_add' => 'Add type',
    'tabledrag_expand' => array(
      'expand_links' => 'expand_links',
      'collapsed' => 'collapsed',
      'by_uid' => 0,
    ),
    'tabledrag_lock' => array(
      'lock' => 0,
    ),
    'draggableviews_default_on_top' => '0',
    'draggableviews_button_text' => 'Save structure',
    'draggableviews_arguments' => array(
      'use_args' => 0,
    ),
  ));
  $handler->override_option('path', 'userstories/structure');
  $handler->override_option('menu', array(
    'type' => 'tab',
    'title' => 'Structure',
    'description' => 'Manage how epics and user stories relate to each other',
    'weight' => '-3',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'normal',
    'title' => 'User stories',
    'description' => 'Manage user stories',
    'weight' => '0',
    'name' => 'primary-links',
  ));
  $handler = $view->new_display('page', 'Priority (Page)', 'page_3');
  $handler->override_option('fields', array(
    'nodefield' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'build_mode' => 'teaser',
      'links' => 0,
      'comments' => 0,
      'exclude' => 0,
      'id' => 'nodefield',
      'table' => 'node',
      'field' => 'nodefield',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'field_ps_userstory_priority_value' => array(
      'label' => 'Priority',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_ps_userstory_priority_value',
      'table' => 'node_data_field_ps_userstory_priority',
      'field' => 'field_ps_userstory_priority_value',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'field_ps_userstory_priority_value' => array(
      'order' => 'ASC',
      'delta' => -1,
      'id' => 'field_ps_userstory_priority_value',
      'table' => 'node_data_field_ps_userstory_priority',
      'field' => 'field_ps_userstory_priority_value',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('style_options', array(
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'columns' => array(
      'title' => 'title',
      'field_ps_userstory_points_initia_value' => 'field_ps_userstory_points_initia_value',
      'field_ps_userstory_childs_initia_value' => 'field_ps_userstory_childs_initia_value',
      'edit_node' => 'edit_node',
      'field_ps_userstory_priority_value' => 'field_ps_userstory_priority_value',
    ),
    'info' => array(
      'title' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_ps_userstory_points_initia_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_ps_userstory_childs_initia_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'edit_node' => array(
        'separator' => '',
      ),
      'field_ps_userstory_priority_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
    ),
    'default' => '-1',
    'tabledrag_hierarchy' => array(
      'field' => 'none',
      'handler' => 'native',
    ),
    'tabledrag_order' => array(
      'field' => 'field_ps_userstory_priority_value',
      'handler' => 'cck',
    ),
    'draggableviews_extensions' => array(
      'extension_top' => '3',
      'extension_bottom' => '3',
    ),
    'tabledrag_order_visible' => array(
      'visible' => 0,
    ),
    'tabledrag_hierarchy_visible' => array(
      'visible' => 0,
    ),
    'draggableviews_depth_limit' => '-1',
    'draggableviews_repair' => array(
      'repair' => 'repair',
    ),
    'tabledrag_types_add' => 'Add type',
    'tabledrag_expand' => array(
      'expand_links' => 'expand_links',
      'collapsed' => 'collapsed',
      'by_uid' => 0,
    ),
    'tabledrag_lock' => array(
      'lock' => 0,
    ),
    'draggableviews_default_on_top' => '0',
    'draggableviews_button_text' => 'Save priority',
    'draggableviews_arguments' => array(
      'use_args' => 0,
    ),
  ));
  $handler->override_option('path', 'userstories/priority');
  $handler->override_option('menu', array(
    'type' => 'default tab',
    'title' => 'Priority',
    'description' => 'Manage priorities for user stories',
    'weight' => '-5',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'normal',
    'title' => 'User stories',
    'description' => 'Manage user stories',
    'weight' => '0',
    'name' => 'primary-links',
  ));
  $translatables['ps_stories_structure'] = array(
    t('<a href="/node/add/ps-userstory">Add another user story</a>'),
    t('Defaults'),
    t('Please note that nodes have to be resaved if the computed field should be updated. This can be done by nudging the node and hitting table\'s the save button. Sorry about the inconvenience.'),
    t('Priority (Page)'),
    t('Structure (Page)'),
    t('User story structure'),
  );

  $views[$view->name] = $view;

  // Exported view: ps_sum_storypoints
  $view = new view;
  $view->name = 'ps_sum_storypoints';
  $view->description = 'Pond Scrum: A view used to sum story points';
  $view->tag = 'ps, sum';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'field_ps_userstory_childs_initia_value' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_ps_userstory_childs_initia_value',
      'table' => 'node_data_field_ps_userstory_childs_initia',
      'field' => 'field_ps_userstory_childs_initia_value',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('arguments', array(
    'field_ps_userstory_parent_nid' => array(
      'default_action' => 'not found',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => 'Child user stories for %1',
      'breadcrumb' => '',
      'default_argument_type' => 'fixed',
      'default_argument' => '',
      'validate_type' => 'node',
      'validate_fail' => 'not found',
      'break_phrase' => 0,
      'not' => 0,
      'id' => 'field_ps_userstory_parent_nid',
      'table' => 'node_data_field_ps_userstory_parent',
      'field' => 'field_ps_userstory_parent_nid',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        '2' => 0,
        '3' => 0,
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_fixed' => '',
      'default_argument_user' => 0,
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'ps_userstory' => 'ps_userstory',
        'page' => 0,
        'ps_project' => 0,
        'story' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_php' => '',
    ),
  ));
  $handler->override_option('filters', array(
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('items_per_page', 0);
  $handler = $view->new_display('attachment', 'Initial estimation (Attachment)', 'attachment_1');
  $handler->override_option('attachment_position', 'before');
  $handler->override_option('inherit_arguments', TRUE);
  $handler->override_option('inherit_exposed_filters', FALSE);
  $handler->override_option('inherit_pager', FALSE);
  $handler->override_option('render_pager', TRUE);
  $handler->override_option('displays', array());
  $handler = $view->new_display('attachment', 'Current estimation (Attachment)', 'attachment_2');
  $handler->override_option('fields', array(
    'field_ps_userstory_childs_value' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_ps_userstory_childs_value',
      'table' => 'node_data_field_ps_userstory_childs',
      'field' => 'field_ps_userstory_childs_value',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('attachment_position', 'before');
  $handler->override_option('inherit_arguments', TRUE);
  $handler->override_option('inherit_exposed_filters', FALSE);
  $handler->override_option('inherit_pager', FALSE);
  $handler->override_option('render_pager', TRUE);
  $handler->override_option('displays', array());
  $handler = $view->new_display('attachment', 'Completed (Attachment)', 'attachment_3');
  $handler->override_option('fields', array(
    'field_ps_userstory_childs_value' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_ps_userstory_childs_value',
      'table' => 'node_data_field_ps_userstory_childs',
      'field' => 'field_ps_userstory_childs_value',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'field_ps_userstory_status_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(
        'complete' => 'complete',
        'done' => 'done',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'field_ps_userstory_status_value_many_to_one',
      'table' => 'node_data_field_ps_userstory_status',
      'field' => 'field_ps_userstory_status_value_many_to_one',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('attachment_position', 'before');
  $handler->override_option('inherit_arguments', TRUE);
  $handler->override_option('inherit_exposed_filters', FALSE);
  $handler->override_option('inherit_pager', FALSE);
  $handler->override_option('render_pager', TRUE);
  $handler->override_option('displays', array());
  $translatables['ps_sum_storypoints'] = array(
    t('Completed (Attachment)'),
    t('Current estimation (Attachment)'),
    t('Defaults'),
    t('Initial estimation (Attachment)'),
  );

  $views[$view->name] = $view;

  return $views;
}
