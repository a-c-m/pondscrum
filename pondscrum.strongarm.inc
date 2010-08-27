<?php

/**
 * Implementation of hook_strongarm().
 */
function pondscrum_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ps_sprint';
  $strongarm->value = 0;

  $export['comment_anonymous_ps_sprint'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ps_task';
  $strongarm->value = 0;

  $export['comment_anonymous_ps_task'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_ps_sprint';
  $strongarm->value = '3';

  $export['comment_controls_ps_sprint'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_ps_task';
  $strongarm->value = '3';

  $export['comment_controls_ps_task'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ps_sprint';
  $strongarm->value = '4';

  $export['comment_default_mode_ps_sprint'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ps_task';
  $strongarm->value = '4';

  $export['comment_default_mode_ps_task'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_ps_sprint';
  $strongarm->value = '1';

  $export['comment_default_order_ps_sprint'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_ps_task';
  $strongarm->value = '1';

  $export['comment_default_order_ps_task'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ps_sprint';
  $strongarm->value = '50';

  $export['comment_default_per_page_ps_sprint'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ps_task';
  $strongarm->value = '50';

  $export['comment_default_per_page_ps_task'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ps_sprint';
  $strongarm->value = '0';

  $export['comment_form_location_ps_sprint'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ps_task';
  $strongarm->value = '0';

  $export['comment_form_location_ps_task'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ps_sprint';
  $strongarm->value = '1';

  $export['comment_preview_ps_sprint'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ps_task';
  $strongarm->value = '1';

  $export['comment_preview_ps_task'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ps_sprint';
  $strongarm->value = '2';

  $export['comment_ps_sprint'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ps_task';
  $strongarm->value = '2';

  $export['comment_ps_task'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ps_sprint';
  $strongarm->value = '1';

  $export['comment_subject_field_ps_sprint'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ps_task';
  $strongarm->value = '1';

  $export['comment_subject_field_ps_task'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_ps_sprint';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '1',
    'author' => '0',
    'options' => '2',
    'comment_settings' => '4',
    'menu' => '-3',
    'book' => '-1',
    'attachments' => '3',
    'og_nodeapi' => '-2',
  );

  $export['content_extra_weights_ps_sprint'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_ps_task';
  $strongarm->value = array(
    'title' => '10',
    'body_field' => '12',
    'revision_information' => '19',
    'author' => '20',
    'options' => '22',
    'comment_settings' => '23',
    'menu' => '16',
    'book' => '18',
    'attachments' => '21',
    'og_nodeapi' => '17',
  );

  $export['content_extra_weights_ps_task'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ps_sprint';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_ps_sprint'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ps_task';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_ps_task'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_ps_sprint';
  $strongarm->value = '1';

  $export['upload_ps_sprint'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_ps_task';
  $strongarm->value = '1';

  $export['upload_ps_task'] = $strongarm;
  return $export;
}
