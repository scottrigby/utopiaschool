<?php 
/** 
 * @file 
 * Primary pre/preprocess functions and alterations.
 */

function us_kalatheme_process_page(&$variables) {
//  $triangle[] = array(
//    '#theme' => 'item_list',
//    '#items' => array_fill(0, 21, array('data' => '', 'class' => array('triangle'))),
//    '#type' => 'ul',
//    '#attributes' => array('class' => 'triangles'),
//  );
//  $variables['triangle'] = drupal_render($triangle);

  $variables['triangle'] = module_exists('us_theme') ? us_theme_pyramid(134) : '';
}

/**
 * Implements theme_field__field_type().
 */
function us_kalatheme_field__taxonomy_term_reference($variables) {
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

/**
 * Override or insert variables into the node template.
 *
 * Implements template_preprocess_node().
 */
function us_kalatheme_preprocess_node(&$variables) {
  kalatheme_preprocess_node($variables);

  // Change submitted by.
  $verb = $variables['node']->type == 'class' ? 'Proposed' : 'Posted';
  $user_picture = theme('user_picture', array('account' => user_load($variables['node']->uid), 'user_picture_style' => 'tiny'));
  $variables['submitted'] = t('!user_picture !verb by !username', array('!username' => $variables['name'], '!verb' => $verb, '!user_picture' => $user_picture));
}

/**
 * Implements template_preprocess_comment().
 */
function us_kalatheme_preprocess_comment(&$variables) {
  kalatheme_preprocess_comment($variables);

  // Change submitted by.
  $user_picture = theme('user_picture', array('account' => user_load($variables['comment']->uid), 'user_picture_style' => 'tiny'));
  $variables['submitted'] = t('!user_picture Posted by !username on <time datetime="!datetime">!date</time>', array('!username' => $variables['author'], '!user_picture' => $user_picture, '!datetime' => $variables['comment']->created, '!date' => $variables['created']));
}

/**
 * Implements theme_date_display_range().
 *
 * Change 'to' to a hyphen, rather than Drupal string replace for now.
 */
function us_kalatheme_date_display_range($variables) {
  $date1 = $variables['date1'];
  $date2 = $variables['date2'];
  $timezone = $variables['timezone'];
  $attributes_start = $variables['attributes_start'];
  $attributes_end = $variables['attributes_end'];

  $start_date = '<span class="date-display-start"' . drupal_attributes($attributes_start) . '>' . $date1 . '</span>';
  $end_date = '<span class="date-display-end"' . drupal_attributes($attributes_end) . '>' . $date2 . $timezone . '</span>';

  // If microdata attributes for the start date property have been passed in,
  // add the microdata in meta tags.
  if (!empty($variables['add_microdata'])) {
    $start_date .= '<meta' . drupal_attributes($variables['microdata']['value']['#attributes']) . '/>';
    $end_date .= '<meta' . drupal_attributes($variables['microdata']['value2']['#attributes']) . '/>';
  }

  // Wrap the result with the attributes.
  return t('!start-date - !end-date', array(
    '!start-date' => $start_date,
    '!end-date' => $end_date,
  ));
}
