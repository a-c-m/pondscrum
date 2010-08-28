<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function pondscrum_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ps_backlog';
  $context->description = '';
  $context->tag = 'Pond Scrum';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'ps_backlog' => 'ps_backlog',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(),
      'layout' => 'wide',
    ),
    'menu' => 'ps/backlog',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pond Scrum');

  $export['ps_backlog'] = $context;
  return $export;
}
