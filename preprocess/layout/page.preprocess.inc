<?php

/**
 * @file
 * Preprocess function for this hook.
 */

/**
 * Implements hook_preprocess_page().
 *
 * Overwrote how USWDS got the image path for the Govt Banner so it uses uswds_base image path. Created a new TWIG variable {{ uswds_base_theme_path }}
*/
function uswds_base_preprocess_page(&$variables) {
  // Set the path to the base theme.
  $variables['uswds_base_theme_path'] = base_path() . drupal_get_path('theme', 'uswds_base');
  $variables['uswds_base_theme_img_path'] = base_path() . drupal_get_path('theme', 'uswds_base') . '/assets/img';

  // Show the official U.S. Government banner?
  if (isset($variables['government_banner'])) {
    $variables['government_banner']['#image_base'] = $variables['uswds_base_theme_path'] . '/assets/img';
  }
}
