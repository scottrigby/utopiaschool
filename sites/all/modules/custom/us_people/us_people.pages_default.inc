<?php
/**
 * @file
 * us_people.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function us_people_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'people';
  $page->task = 'page';
  $page->admin_title = 'Session people';
  $page->admin_description = '';
  $page->path = 'node/%node/people';
  $page->access = array(
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
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'People',
    'name' => 'navigation',
    'weight' => '-20',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_people__panel_context_0777e584-c7e8-4d67-b7be-c5921919f708';
  $handler->task = 'page';
  $handler->subtask = 'people';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'brenham_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'content_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'e77181e1-d8c0-44de-931c-80b205a1d2f9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b7ac26fe-3356-4964-a92d-0e35fe9e92dd';
    $pane->panel = 'content_main';
    $pane->type = 'views_panes';
    $pane->subtype = 'session_people-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
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
    $pane->uuid = 'b7ac26fe-3356-4964-a92d-0e35fe9e92dd';
    $display->content['new-b7ac26fe-3356-4964-a92d-0e35fe9e92dd'] = $pane;
    $display->panels['content_main'][0] = 'new-b7ac26fe-3356-4964-a92d-0e35fe9e92dd';
    $pane = new stdClass();
    $pane->pid = 'new-4a14a637-220e-403d-a212-b723181f3d14';
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
    $pane->uuid = '4a14a637-220e-403d-a212-b723181f3d14';
    $display->content['new-4a14a637-220e-403d-a212-b723181f3d14'] = $pane;
    $display->panels['sidebar'][0] = 'new-4a14a637-220e-403d-a212-b723181f3d14';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['people'] = $page;

  return $pages;

}
