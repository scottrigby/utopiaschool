<?php
/**
 * @file
 * us_classes.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function us_classes_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_764d1f3b-4ef6-465f-91d3-2854f9563675';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -99;
  $handler->conf = array(
    'title' => 'Session',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'session' => 'session',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'brenham_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'left' => NULL,
      'right' => NULL,
      'footer' => NULL,
      'sidebar' => NULL,
      'content_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '913acc64-851b-4035-8a98-48262f4e21cd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cd8c5655-29e2-4dfa-84a4-087ba471c6f7';
    $pane->panel = 'content_main';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 1,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cd8c5655-29e2-4dfa-84a4-087ba471c6f7';
    $display->content['new-cd8c5655-29e2-4dfa-84a4-087ba471c6f7'] = $pane;
    $display->panels['content_main'][0] = 'new-cd8c5655-29e2-4dfa-84a4-087ba471c6f7';
    $pane = new stdClass();
    $pane->pid = 'new-7495d769-9707-4dee-802a-62aeb7196d77';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'us_classes-easy_add_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7495d769-9707-4dee-802a-62aeb7196d77';
    $display->content['new-7495d769-9707-4dee-802a-62aeb7196d77'] = $pane;
    $display->panels['sidebar'][0] = 'new-7495d769-9707-4dee-802a-62aeb7196d77';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_764d1f3b-4ef6-465f-91d3-2854f9563675'] = $handler;

  return $export;
}