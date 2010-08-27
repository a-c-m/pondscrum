<?php

/**
 * Implementation of hook_content_default_fields().
 */
function pondscrum_content_default_fields() {
  $fields = array();

  // Exported field: field_ps_userstory_acceptance
  $fields['ps_userstory-field_ps_userstory_acceptance'] = array(
    'field_name' => 'field_ps_userstory_acceptance',
    'type_name' => 'ps_userstory',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
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

  // Exported field: field_ps_userstory_childs_initia
  $fields['ps_userstory-field_ps_userstory_childs_initia'] = array(
    'field_name' => 'field_ps_userstory_childs_initia',
    'type_name' => 'ps_userstory',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
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
    'code' => '// Set required data for the sum field

$view_name = \'ps_sum_storypoints\';
$field_name = \'field_ps_userstory_points_initia\';
$view_arguments = array(
  $node->nid,
);

// Displays are not used for now.
// $display_name = \'default\';



// Load the view
$view = views_get_view($view_name);
// Displays are not used for now.
//$view->set_display($display_name);
$view->set_arguments($view_arguments);
$view->set_items_per_page(0);
$view->execute();

// Uncomment the following line to see the structure of the view content.
// Might be useful if the structure of the $view object changes.
// var_dump($view->result);

// $view_field_name = \'node_data_field_decimal_\' . $field_name . \'_value\';
$view_field_name = $field_name . \'_value\';


// Sum all the rows
$sum = 0;
foreach($view->result as $row) {
  $sum = $sum + $row->{$view_field_name};
}

// Set the value of the sum field
$node_field[0][\'value\'] = $sum;',
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
      'label' => 'Child story points, initial estimate',
      'weight' => '6',
      'description' => 'This field is set by PHP fetched from the database, and should be replaced with a proper module.',
      'type' => 'computed',
      'module' => 'computed_field',
    ),
  );

  // Exported field: field_ps_userstory_owner
  $fields['ps_userstory-field_ps_userstory_owner'] = array(
    'field_name' => 'field_ps_userstory_owner',
    'type_name' => 'ps_userstory',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
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
      'label' => array(
        'format' => 'above',
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
      'weight' => '5',
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
      'label' => array(
        'format' => 'above',
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
    'suffix' => '',
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
      'label' => 'Story points (current estimate)',
      'weight' => '3',
      'description' => 'The story points are relative size estimates of user stories. The story points should be changed only when adding comments to the user story.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_ps_userstory_points_initia
  $fields['ps_userstory-field_ps_userstory_points_initia'] = array(
    'field_name' => 'field_ps_userstory_points_initia',
    'type_name' => 'ps_userstory',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
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
      'label' => 'Story points (initial estimate)',
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
      'label' => array(
        'format' => 'above',
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
      'label' => '…we would like to',
      'weight' => '-3',
      'description' => 'This field should contain a brief and clear of what the feature should do. Some examples are <em>sort t-shirts into categories</em>, <em>easily change the main meny</em> and <em>get a list of all users who have not logged in for three weeks</em>.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_ps_userstory_reason
  $fields['ps_userstory-field_ps_userstory_reason'] = array(
    'field_name' => 'field_ps_userstory_reason',
    'type_name' => 'ps_userstory',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
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
      'label' => '…because',
      'weight' => '-2',
      'description' => 'This field should describe the purpose of adding this feature, to help keeping the development in the right direction.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_ps_userstory_requester
  $fields['ps_userstory-field_ps_userstory_requester'] = array(
    'field_name' => 'field_ps_userstory_requester',
    'type_name' => 'ps_userstory',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
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

  // Exported field: field_ps_userstory_subject
  $fields['ps_userstory-field_ps_userstory_subject'] = array(
    'field_name' => 'field_ps_userstory_subject',
    'type_name' => 'ps_userstory',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
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
      'label' => array(
        'format' => 'above',
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
  t('Child story points, initial estimate');
  t('Owner');
  t('Parent user story');
  t('Requester');
  t('Story points (current estimate)');
  t('Story points (initial estimate)');
  t('Watchers');
  t('…because');
  t('…we would like to');

  return $fields;
}
