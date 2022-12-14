<?php

/**
 *
 * Implements hook_preprocess_HOOK().
 */
function uswds_base_preprocess_paragraph(&$variables) {
  $paragraph = $variables['paragraph'];
  if ($paragraph->hasField('field_view') && !$paragraph->get('field_view')->isEmpty()
    && $paragraph->hasField('field_column_layout') && !$paragraph->get('field_column_layout')->isEmpty()) {
    $rowClass = $paragraph->get('field_column_layout')->value;
    if (isset($variables['content']['field_view'][0]['#content']['#view'])) {
      $view = $variables['content']['field_view'][0]['#content']['#view'];
      if (!isset($view->style_plugin->options['row_class'])) {
        $view->style_plugin->options['row_class'] = '';
      }
      $view->style_plugin->options['row_class'] .= ' ' . $rowClass;
    }
  }
}

