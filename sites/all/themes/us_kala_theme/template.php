<?php 
/** 
 * @file 
 * Primary pre/preprocess functions and alterations.
 */ 

function us_kala_theme_process_page(&$variables) {
  #kalatheme_process_page(&$variables);

//  $triangle = array(
//    '#theme'  => 'item_list',
//    '#items'  => array_fill(0, 21, array('data' => '', 'class' => 'triangle')),
//    '#attributes' => array('class' => 'triangles'),
//  );
//
//  #$variables['triangle'] = drupal_render($triangle);
//
//  $variables['triangle'] = $triangle;

  $variables['triangle'] = '
  <ul class="triangles">
    <li class="triangle"></li>
    <li class="triangle"></li>
    <li class="triangle"></li>
    <li class="triangle"></li>
    <li class="triangle"></li>
    <li class="triangle"></li>
    <li class="triangle"></li>
    <li class="triangle"></li>
    <li class="triangle"></li>
    <li class="triangle"></li>
    <li class="triangle"></li>
    <li class="triangle"></li>
    <li class="triangle"></li>
    <li class="triangle"></li>
    <li class="triangle"></li>
    <li class="triangle"></li>
    <li class="triangle"></li>
    <li class="triangle"></li>
    <li class="triangle"></li>
    <li class="triangle"></li>
    <li class="triangle"></li>
  </ul>
  ';
}
