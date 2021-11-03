<?php

/**
 * Implements hook_preprocess_node().
 */
function oig_base_preprocess_node (&$variables) {
  $node = $variables['node'];

  if ($node->bundle() == 'recommendation') {
    $controls = 'uswds-accordion-recommendation' . $variables['node']->id();
    $variables['controls'] = $controls;
  }
}
