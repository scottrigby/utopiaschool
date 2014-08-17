<?php 
/** 
 * @file 
 * Primary pre/preprocess functions and alterations.
 */ 

function us_kalatheme_process_page(&$variables) {
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
  // From kalatheme_preprocess_node().
  if ($variables['view_mode'] == 'full' && node_is_page($variables['node'])) {
    $variables['classes_array'][] = 'node-full';
  }

  // Change submitted by.
  if ($variables['node']->type == 'class') {
    $user = user_load($variables['node']->uid);
    if (!empty($user->picture->uri)) {
      $path = $user->picture->uri;
      $function = 'image_style';
    }
    else {
      $path = variable_get('user_picture_default');
      $function = 'imagecache_external';
    }
    $avatar = array(
      '#theme' => $function,
      '#path' => $path,
      '#attributes' => array('class' => 'avatar'),
      '#style_name' => 'thumbnail',
    );
    $variables['submitted'] = t('!avatar Proposed by !username', array('!username' => $variables['name'], '!avatar' => drupal_render($avatar)));
  }
}
