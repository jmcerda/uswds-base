<?php

/**
 * Implements hook_preprocess_HOOK().
 */
function oig_base_preprocess_paragraph(&$variables) {
  if(isset($variables['content']['field_view'])) {
    dpm($variables['content']['field_column_layout']);
  }
}
