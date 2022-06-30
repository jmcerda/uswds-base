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
function oig_base_preprocess(&$variables) {
  // Set the path to the base theme.
  $variables['oig_base_theme_path'] = base_path() . drupal_get_path('theme', 'oig_base');
  $variables['oig_base_theme_img_path'] = base_path() . drupal_get_path('theme', 'oig_base') . '/assets/img';
}
