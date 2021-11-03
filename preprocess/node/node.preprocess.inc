<?php

/**
 * Implements hook_preprocess_node().
 */
function oig_base_preprocess_node__recommendation (&$variables) {
  $controls = 'uswds-accordion-recommendation' . $variables['node']->id();
  $variables['controls'] = $controls;
}
