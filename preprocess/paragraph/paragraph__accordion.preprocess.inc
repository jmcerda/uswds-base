<?php

/**
 * Implements hook_preprocess_paragraph__accordion().
 */
function uswds_base_preprocess_paragraph__accordion(&$variables) {
  $variables['attributes']['class'][] = 'usa-accordion';
  $variables['attributes']['class'][] = 'usa-section';

  $accordion = $variables['paragraph'];

  if ($accordion->field_accordion_multi->value) {
    $variables['attributes']['aria-multiselectable'] = 'true';
  }

  if ($accordion->field_accordion_bordered->value) {
    $variables['attributes']['class'][] = 'usa-accordion--bordered';
  }

  if ($accordion->field_accordion_expand->value) {
    $variables['content']['field_content'][0]['#uswds_expand'] = TRUE;
  }
}
