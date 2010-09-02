<?php

/**
 * Implementation of hook_content_default_fields().
 */
function pondscrum_content_default_fields() {
  $fields = array();

  // Exported field: field_ps_sprint_dates
  $fields['ps_sprint-field_ps_sprint_dates'] = array(
    'field_name' => 'field_ps_sprint_dates',
    'type_name' => 'ps_sprint',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '1',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
    ),
    'timezone_db' => 'UTC',
    'tz_handling' => 'user',
    'todate' => 'required',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'short',
    'widget' => array(
      'default_value' => 'now',
      'default_value_code' => '',
      'default_value2' => 'strtotime',
      'default_value_code2' => '+2 weeks',
      'input_format' => 'Y-m-d',
      'input_format_custom' => '',
      'increment' => '15',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Start and End',
      'weight' => '-4',
      'description' => 'The dates the sprint starts and ends.',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_ps_global_status
  $fields['ps_task-field_ps_global_status'] = array(
    'field_name' => 'field_ps_global_status',
    'type_name' => 'ps_task',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'In progress
Complete
Done',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Status',
      'weight' => '9',
      'description' => 'The current state of the task',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_ps_task_assignedto
  $fields['ps_task-field_ps_task_assignedto'] = array(
    'field_name' => 'field_ps_task_assignedto',
    'type_name' => 'ps_task',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '2' => 0,
      '3' => 0,
      '4' => 0,
    ),
    'referenceable_status' => '',
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'reverse_link' => 0,
      'default_value' => array(
        '0' => array(
          'uid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Assigned to',
      'weight' => '11',
      'description' => 'Who is going to do the work on this ticket',
      'type' => 'userreference_select',
      'module' => 'userreference',
    ),
  );

  // Exported field: field_ps_task_burnttime
  $fields['ps_task-field_ps_task_burnttime'] = array(
    'field_name' => 'field_ps_task_burnttime',
    'type_name' => 'ps_task',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_decimal',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => ' hours',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'precision' => '10',
    'scale' => '2',
    'decimal' => '.',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_ps_task_burnttime][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Burnt time',
      'weight' => '15',
      'description' => 'The number of hours spent working (or burned) on this task so far.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_ps_task_currenttime
  $fields['ps_task-field_ps_task_currenttime'] = array(
    'field_name' => 'field_ps_task_currenttime',
    'type_name' => 'ps_task',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_decimal',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => ' hours',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'precision' => '10',
    'scale' => '2',
    'decimal' => '.',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_ps_task_currenttime][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Current time estimate',
      'weight' => '14',
      'description' => 'How many hours the task (in total) is expected to take to complete.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_ps_task_initialtime
  $fields['ps_task-field_ps_task_initialtime'] = array(
    'field_name' => 'field_ps_task_initialtime',
    'type_name' => 'ps_task',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_decimal',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => ' hours',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'precision' => '10',
    'scale' => '2',
    'decimal' => '.',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_ps_task_initialtime][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Initial time estimate',
      'weight' => '13',
      'description' => 'The time expected to complete this task, before its started.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_ps_userstory_acceptance
  $fields['ps_userstory-field_ps_userstory_acceptance'] = array(
    'field_name' => 'field_ps_userstory_acceptance',
    'type_name' => 'ps_userstory',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '2',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_ps_userstory_acceptance][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Acceptance requirements',
      'weight' => '-1',
      'description' => 'These field should describe how to check that this feature is done or not. What is entered here is very important, since it will be used as the formal separator between bugs and feature requests.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_ps_userstory_category
  $fields['ps_userstory-field_ps_userstory_category'] = array(
    'field_name' => 'field_ps_userstory_category',
    'type_name' => 'ps_userstory',
    'display_settings' => array(
      'weight' => '8',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'link',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'link',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '1',
    'module' => 'content_taxonomy',
    'active' => '1',
    'save_term_node' => 1,
    'vid' => '1',
    'parent' => '0',
    'parent_php_code' => '',
    'depth' => '',
    'widget' => array(
      'new_terms' => 'insert',
      'extra_parent' => '0',
      'maxlength' => '255',
      'active_tags' => NULL,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Categories',
      'weight' => '8',
      'description' => 'Enter any number of tags, used to group user stories into categories.',
      'type' => 'content_taxonomy_autocomplete',
      'module' => 'content_taxonomy_autocomplete',
    ),
  );

  // Exported field: field_ps_userstory_childs
  $fields['ps_userstory-field_ps_userstory_childs'] = array(
    'field_name' => 'field_ps_userstory_childs',
    'type_name' => 'ps_userstory',
    'display_settings' => array(
      'weight' => '6',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'computed',
    'required' => '0',
    'multiple' => '0',
    'module' => 'computed_field',
    'active' => '1',
    'code' => '// Return the sum of children\'s story points, plus this user story\'s
$node_field[0][\'value\'] = $node->field_ps_userstory_points[0][\'value\']
  + ccksum_compute(\'ps_sum_storypoints\', \'\', $node->nid, \'field_ps_userstory_childs\');',
    'display_format' => '$display = $node_field_item[\'value\'];',
    'store' => 1,
    'data_type' => 'int',
    'data_length' => '10',
    'data_not_NULL' => 0,
    'data_default' => '',
    'data_sortable' => 1,
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Child stories points - Current estimate',
      'weight' => '6',
      'description' => 'This field is set by adding up all the points from this stories child stories.',
      'type' => 'computed',
      'module' => 'computed_field',
    ),
  );

  // Exported field: field_ps_userstory_childs_initia
  $fields['ps_userstory-field_ps_userstory_childs_initia'] = array(
    'field_name' => 'field_ps_userstory_childs_initia',
    'type_name' => 'ps_userstory',
    'display_settings' => array(
      'weight' => '5',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'computed',
    'required' => '0',
    'multiple' => '0',
    'module' => 'computed_field',
    'active' => '1',
    'code' => '// Return the sum of children\'s story points, plus this user story\'s
$node_field[0][\'value\'] = $node->field_ps_userstory_points_initia[0][\'value\']
  + ccksum_compute(\'ps_sum_storypoints\', \'\', $node->nid, \'field_ps_userstory_childs_initia\');',
    'display_format' => '$display = $node_field_item[\'value\'];',
    'store' => 1,
    'data_type' => 'int',
    'data_length' => '10',
    'data_not_NULL' => 0,
    'data_default' => '',
    'data_sortable' => 1,
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Child stories points - Initial estimate',
      'weight' => '5',
      'description' => 'This field is set by adding up all the points from this stories child stories.',
      'type' => 'computed',
      'module' => 'computed_field',
    ),
  );

  // Exported field: field_ps_userstory_dependency
  $fields['ps_userstory-field_ps_userstory_dependency'] = array(
    'field_name' => 'field_ps_userstory_dependency',
    'type_name' => 'ps_userstory',
    'display_settings' => array(
      'weight' => '11',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'ps_userstory' => 'ps_userstory',
      'page' => 0,
      'story' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_ps_userstory_dependency][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Dependency',
      'weight' => '11',
      'description' => 'Dependencies denote which user stories must be completed before another user story can be done. They are usually managed via the drag-and-drop interface.',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_ps_userstory_owner
  $fields['ps_userstory-field_ps_userstory_owner'] = array(
    'field_name' => 'field_ps_userstory_owner',
    'type_name' => 'ps_userstory',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '2' => 0,
      '3' => 0,
    ),
    'referenceable_status' => '',
    'advanced_view' => '',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'reverse_link' => 0,
      'default_value' => array(
        '0' => array(
          'uid' => NULL,
          '_error_element' => 'default_value_widget][field_ps_userstory_owner][0][uid][uid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Owner',
      'weight' => '1',
      'description' => 'The owner is the person who has skills enough to approve the feature, once completed.',
      'type' => 'userreference_autocomplete',
      'module' => 'userreference',
    ),
  );

  // Exported field: field_ps_userstory_parent
  $fields['ps_userstory-field_ps_userstory_parent'] = array(
    'field_name' => 'field_ps_userstory_parent',
    'type_name' => 'ps_userstory',
    'display_settings' => array(
      'weight' => '12',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'ps_userstory' => 'ps_userstory',
      'page' => 0,
      'ps_project' => 0,
      'story' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_ps_userstory_parent][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Parent user story',
      'weight' => '12',
      'description' => 'User stories can be put in a tree structure by setting parent user stories. The tree structure is most easily managed using the drag-and-drop table.',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_ps_userstory_points
  $fields['ps_userstory-field_ps_userstory_points'] = array(
    'field_name' => 'field_ps_userstory_points',
    'type_name' => 'ps_userstory',
    'display_settings' => array(
      'weight' => '3',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => ' story points',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_ps_userstory_points][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Story points - Current estimate',
      'weight' => '3',
      'description' => 'The story points are relative size estimates of user stories. The story points should be changed only when adding comments to the user story.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_ps_userstory_points_comple
  $fields['ps_userstory-field_ps_userstory_points_comple'] = array(
    'field_name' => 'field_ps_userstory_points_comple',
    'type_name' => 'ps_userstory',
    'display_settings' => array(
      'weight' => '7',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'computed',
    'required' => '0',
    'multiple' => '0',
    'module' => 'computed_field',
    'active' => '1',
    'code' => '// Get all the complete story points for child stories
$complete = ccksum_compute(\'ps_sum_storypoints\', \'attachment_3\', $node->nid, \'field_ps_userstory_points_comple\');

// Add the story points of this user story, if it is complete
$ok = array(\'complete\', \'done\');
if (in_array($node->field_ps_userstory_status[0][\'value\'], $ok)) {
  $complete += $node_field[0][\'value\'] = $node->field_ps_userstory_points[0][\'value\'];
}

$node_field[0][\'value\'] = $complete;',
    'display_format' => '$display = $node_field_item[\'value\'];',
    'store' => 1,
    'data_type' => 'int',
    'data_length' => '10',
    'data_not_NULL' => 0,
    'data_default' => '',
    'data_sortable' => 1,
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Child stories points - Completed points',
      'weight' => '7',
      'description' => 'This field is set by adding up all the points from this stories child stories.',
      'type' => 'computed',
      'module' => 'computed_field',
    ),
  );

  // Exported field: field_ps_userstory_points_initia
  $fields['ps_userstory-field_ps_userstory_points_initia'] = array(
    'field_name' => 'field_ps_userstory_points_initia',
    'type_name' => 'ps_userstory',
    'display_settings' => array(
      'weight' => '4',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => ' story points',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_ps_userstory_points_initia][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Story points - Initial estimate',
      'weight' => '4',
      'description' => 'The story points are relative size estimates of user stories. The initial story point estimate should not be changed.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_ps_userstory_predicate
  $fields['ps_userstory-field_ps_userstory_predicate'] = array(
    'field_name' => 'field_ps_userstory_predicate',
    'type_name' => 'ps_userstory',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '2',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_ps_userstory_predicate][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'we would like to',
      'weight' => '-3',
      'description' => 'This field should contain a brief and clear description of what the feature should do. Some examples are <em>sort t-shirts into categories</em>, <em>easily change the main menu</em> and <em>get a list of all users who have not logged in for three weeks</em>. They should start with a lowercased word.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_ps_userstory_priority
  $fields['ps_userstory-field_ps_userstory_priority'] = array(
    'field_name' => 'field_ps_userstory_priority',
    'type_name' => 'ps_userstory',
    'display_settings' => array(
      'weight' => '14',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '50',
          '_error_element' => 'default_value_widget][field_ps_userstory_priority][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Priority',
      'weight' => '14',
      'description' => 'The priority is usually changed using the drag-and-trop table – the is little need to change it here.

<em>Note that lower priority number means greater importance.</em> So, item with priority 0 will come before an item with priority 100.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_ps_userstory_reason
  $fields['ps_userstory-field_ps_userstory_reason'] = array(
    'field_name' => 'field_ps_userstory_reason',
    'type_name' => 'ps_userstory',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '2',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_ps_userstory_reason][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'because',
      'weight' => '-2',
      'description' => 'This field should describe the purpose of adding this feature, to help keeping the development in the right direction and allowing developers to understand the business case for this feature. The reason should start with a lowercase word.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_ps_userstory_related
  $fields['ps_userstory-field_ps_userstory_related'] = array(
    'field_name' => 'field_ps_userstory_related',
    'type_name' => 'ps_userstory',
    'display_settings' => array(
      'weight' => '9',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'ps_userstory' => 'ps_userstory',
      'page' => 0,
      'story' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_ps_userstory_related][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Related user stories',
      'weight' => '9',
      'description' => 'Add any user stories you want this user story to connected with. The relation will not have any other function than user stories being displayed in association with this user story.',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_ps_userstory_requester
  $fields['ps_userstory-field_ps_userstory_requester'] = array(
    'field_name' => 'field_ps_userstory_requester',
    'type_name' => 'ps_userstory',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '2' => 0,
      '3' => 0,
    ),
    'referenceable_status' => '',
    'advanced_view' => '',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'reverse_link' => 0,
      'default_value' => array(
        '0' => array(
          'uid' => NULL,
          '_error_element' => 'default_value_widget][field_ps_userstory_requester][0][uid][uid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Requester',
      'weight' => 0,
      'description' => 'The requester is the person who has proposed the feature, and will hopefully be able to answer any questions about how it should work.',
      'type' => 'userreference_autocomplete',
      'module' => 'userreference',
    ),
  );

  // Exported field: field_ps_userstory_status
  $fields['ps_userstory-field_ps_userstory_status'] = array(
    'field_name' => 'field_ps_userstory_status',
    'type_name' => 'ps_userstory',
    'display_settings' => array(
      'weight' => '10',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'incomplete|Not started
in progress|In progress
complete|Complete
done|Done
halted|Halted',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'incomplete',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Status',
      'weight' => '10',
      'description' => 'The status should only be changed by writing comments, to assure that it is recorded when status changes (and by whom).',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_ps_userstory_subject
  $fields['ps_userstory-field_ps_userstory_subject'] = array(
    'field_name' => 'field_ps_userstory_subject',
    'type_name' => 'ps_userstory',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_ps_userstory_subject][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'As',
      'weight' => '-4',
      'description' => 'This field should describe which kind of product users have the benefit of this feature. Could for example be <em>anonymous visitor</em>, <em>editor</em> or <em>third-party service provider</em>.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_ps_userstory_watcher
  $fields['ps_userstory-field_ps_userstory_watcher'] = array(
    'field_name' => 'field_ps_userstory_watcher',
    'type_name' => 'ps_userstory',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '2' => 0,
      '3' => 0,
    ),
    'referenceable_status' => '',
    'advanced_view' => '',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'reverse_link' => 0,
      'default_value' => array(
        '0' => array(
          'uid' => NULL,
          '_error_element' => 'default_value_widget][field_ps_userstory_watcher][0][uid][uid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Watchers',
      'weight' => '2',
      'description' => 'Watchers are people who have interest in this feature, and might want to be notified about progress, problems and discussions.',
      'type' => 'userreference_autocomplete',
      'module' => 'userreference',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Acceptance requirements');
  t('As');
  t('Assigned to');
  t('Burnt time');
  t('Categories');
  t('Child stories points - Completed points');
  t('Child stories points - Current estimate');
  t('Child stories points - Initial estimate');
  t('Current time estimate');
  t('Dependency');
  t('Initial time estimate');
  t('Owner');
  t('Parent user story');
  t('Priority');
  t('Related user stories');
  t('Requester');
  t('Start and End');
  t('Status');
  t('Story points - Current estimate');
  t('Story points - Initial estimate');
  t('Watchers');
  t('because');
  t('we would like to');

  return $fields;
}
