<?php

/**
 * Implements hook_preprocess_paragraph__accordion_item().
 */
function oig_base_preprocess_paragraph__accordion_item(&$variables) {
  $expanded = (!empty($variables['elements']['#uswds_expand']));
  $variables['expanded'] = ($expanded) ? 'true' : 'false';

  $controls = 'uswds-paragraph-' . $variables['paragraph']->id();
  $variables['controls'] = $controls;
}
