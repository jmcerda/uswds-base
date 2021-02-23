<?php

/**
 * Implements hook_preprocess_HOOK().
 */
function oig_base_preprocess_paragraph(&$variables) {
  $paragraph = $variables ['paragraph'];
  if ($paragraph->hasField('field_view') && !$paragraph->get('field_view')->isEmpty()
    && $paragraph->hasField('field_column_layout') && !$paragraph->get('field_column_layout')->isEmpty()) {
    $rowClass = 'Class:'.$paragraph->get('field_column_layout')->value;
    $variables ['content']['field_view']['#arguments'] = $rowClass;
  }

}

