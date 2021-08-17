<?php

/**
 * @file
 * Preprocess function for this hook.
 */

/**
 * Implements hook_preprocess_page().
 *
 * Overwrote how USWDS got the image path for the Govt Banner so it uses oig_base image path. Created a new TWIG variable {{ oig_base_theme_path }}
*/
function oig_base_preprocess_page(&$variables) {
  // Set the path to the base theme.
  $variables['oig_base_theme_path'] = base_path() . drupal_get_path('theme', 'oig_base');

  // Show the official U.S. Government banner?
  if (isset($variables['government_banner'])) {
    $variables['government_banner']['#image_base'] = $variables['oig_base_theme_path'] . '/assets/img';
  }
}
