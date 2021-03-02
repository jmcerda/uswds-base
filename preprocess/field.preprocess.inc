<?php

/**
*
* Implements hook_preprocess_HOOK().
*/
function oig_base_preprocess_field(&$variables) {
  $element = $variables['element'];
  dpm(array_keys($element));
//  dpm($element);
  if($variables['field_name'] === 'field_number_of_columns') {
    /** @var \Drupal\paragraphs\ParagraphInterface $paragraph */
    $paragraph = $element['#object'];
    dpm($paragraph->getEntityTypeId());
  }
}
