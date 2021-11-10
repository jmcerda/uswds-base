<?php

/**
 * Implements hook_preprocess_node().
 */
function oig_base_preprocess_node (&$variables) {
  $node = $variables['node'];

  if ($node->bundle() == 'recommendation') {
    $expanded = (!empty($variables['elements']['#uswds_expand']));
    $variables['expanded'] = ($expanded) ? 'true' : 'false';

    $controls = 'uswds-accordion-recommendation' . $variables['node']->id();
    $variables['controls'] = $controls;
  }
}
