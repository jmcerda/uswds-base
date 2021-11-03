<?php

/**
 * Implements hook_preprocess_field().
 */
function oig_base_preprocess_field_recommendations (&$variables) {
  $controls = 'uswds-accordion-' . $variables['node']->id();
  $variables['controls'] = $controls;
}
