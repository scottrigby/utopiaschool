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

  // Get our 65x65 square thumbnail image style.
  // @todo Add this logo to it's own template.
  $triangle = '
  <svg id="logo" width="130" height="112">
        <pattern id="1" patternUnits="userSpaceOnUse" width="65" height="65">
            <image xlink:href="/sites/all/themes/us_kalatheme/images/8.jpg" x="0" y="0" width="65" height="65" />
        </pattern>
        <pattern id="2" patternUnits="userSpaceOnUse" width="65" height="65">
            <image xlink:href="/sites/all/themes/us_kalatheme/images/2.jpg" x="0" y="0" width="65" height="65" />
        </pattern>
        <pattern id="3" patternUnits="userSpaceOnUse" width="65" height="65" patternTransform="rotate(180)">
            <image xlink:href="/sites/all/themes/us_kalatheme/images/3.jpg" x="0" y="0" width="65" height="65" />
        </pattern>
        <pattern id="4" patternUnits="userSpaceOnUse" width="65" height="86">
            <image xlink:href="/sites/all/themes/us_kalatheme/images/4.jpg" x="0" y="0" width="65" height="85" />
        </pattern>
        <path class="tri one" d="M 32.5,0 L 65,56 L 0,56 z" fill="url(#1)" transform="translate(32.5,0)" stroke="black" stroke-width="0.5" />
        <path class="tri two" d="M 32.5,0 L 65,56 L 0,56 z" fill="url(#2)" transform="translate(0,56)" stroke="black" stroke-width="0.5" />
        <path class="tri three" d="M 32.5,0 L 65,56 L 0,56 z" fill="url(#3)" transform="rotate(180,65,65)  translate(32.5,18)" stroke="black" stroke-width="0.5" />
        <path class="tri four" d="M 32.5,0 L 65,56 L 0,56 z" fill="url(#4)" transform="translate(65,56)" stroke="black" stroke-width="0.5" />
    </svg>
  ';
  $variables['triangle'] = $triangle;
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
    $default = 'public://default_images/600.jpeg';
    if ($items = field_get_items('user', $user, 'field_avatar')) {
      if (!empty($items[0]['uri'])) {
        $uri = $items[0]['uri'];
      }
    }
    $uri = !empty($uri) ? $uri : $default;
    $avatar = theme_image_style(
      array(
        'style_name' => 'thumbnail',
        'path' => $uri,
        'attributes' => array('class' => 'avatar'),
        'width' => NULL,
        'height' => NULL
      )
    );
    $variables['submitted'] = t('!avatar Proposed by !username', array('!username' => $variables['name'], '!avatar' => $avatar));
  }
}
