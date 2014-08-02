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
