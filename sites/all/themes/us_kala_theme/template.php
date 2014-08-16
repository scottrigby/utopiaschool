<?php 
/** 
 * @file 
 * Primary pre/preprocess functions and alterations.
 */ 

function us_kala_theme_process_page(&$variables) {
  $triangle[] = array(
    '#theme' => 'item_list',
    '#items' => array_fill(0, 21, array('data' => '', 'class' => array('triangle'))),
    '#type' => 'ul',
    '#attributes' => array('class' => 'triangles'),
  );
  $variables['triangle'] = drupal_render($triangle);
}

/**
 * Implements theme_field__field_type().
 */
function us_kala_theme_field__taxonomy_term_reference($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . ':&nbsp;</div>';
  }

  // Render the items.
  $output .= '<div class="field-items"' . $variables['content_attributes'] . '>';
  foreach ($variables['items'] as $delta => $item) {
    $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
    $output .= '<div class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
  }
  $output .= '</div>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}
