<?php

/**
*
* Implements hook_preprocess_HOOK().
*/
function oig_base_preprocess_field(&$variables) {
  $element = $variables['element'];
  dpm(array_keys($element));
//  dpm($element);
}
