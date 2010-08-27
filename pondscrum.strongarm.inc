<?php

/**
 * Implementation of hook_strongarm().
 */
function pondscrum_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ps_userstory';
  $strongarm->value = 0;

  $export['comment_anonymous_ps_userstory'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_ps_userstory';
  $strongarm->value = '3';

  $export['comment_controls_ps_userstory'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ps_userstory';
  $strongarm->value = '4';

  $export['comment_default_mode_ps_userstory'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_ps_userstory';
  $strongarm->value = '1';

  $export['comment_default_order_ps_userstory'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ps_userstory';
  $strongarm->value = '50';

  $export['comment_default_per_page_ps_userstory'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ps_userstory';
  $strongarm->value = '0';

  $export['comment_form_location_ps_userstory'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ps_userstory';
  $strongarm->value = '1';

  $export['comment_preview_ps_userstory'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ps_userstory';
  $strongarm->value = '2';

  $export['comment_ps_userstory'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ps_userstory';
  $strongarm->value = '1';

  $export['comment_subject_field_ps_userstory'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_ps_userstory';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '16',
    'author' => '17',
    'options' => '18',
    'comment_settings' => '19',
    'menu' => '15',
  );

  $export['content_extra_weights_ps_userstory'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ps_userstory';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_ps_userstory'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_ps_userstory';
  $strongarm->value = '1';

  $export['upload_ps_userstory'] = $strongarm;
  return $export;
}