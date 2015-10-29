<?php
/**
 * @file
 * us_classes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function us_classes_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'classes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Classes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Classes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'See all';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* No results behavior: No classes text */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['ui_name'] = 'No classes text';
  $handler->display->display_options['empty']['area']['label'] = 'No classes text';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="alert alert-info">Thanks for coming to the Fall 2014 session! We\'ll add more info to the home page soon – and keep everyone posted on what\'s coming next.</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Status (field_status) */
  $handler->display->display_options['sorts']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['sorts']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['sorts']['field_status_value']['field'] = 'field_status_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'class' => 'class',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search by title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Topics (field_topics) */
  $handler->display->display_options['filters']['field_topics_tid']['id'] = 'field_topics_tid';
  $handler->display->display_options['filters']['field_topics_tid']['table'] = 'field_data_field_topics';
  $handler->display->display_options['filters']['field_topics_tid']['field'] = 'field_topics_tid';
  $handler->display->display_options['filters']['field_topics_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_topics_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_topics_tid']['expose']['operator_id'] = 'field_topics_tid_op';
  $handler->display->display_options['filters']['field_topics_tid']['expose']['label'] = 'Topic';
  $handler->display->display_options['filters']['field_topics_tid']['expose']['operator'] = 'field_topics_tid_op';
  $handler->display->display_options['filters']['field_topics_tid']['expose']['identifier'] = 'topic';
  $handler->display->display_options['filters']['field_topics_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_topics_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_topics_tid']['vocabulary'] = 'topics';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Accepted' => 'Accepted',
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Dates -  start date (field_dates) */
  $handler->display->display_options['filters']['field_dates_value']['id'] = 'field_dates_value';
  $handler->display->display_options['filters']['field_dates_value']['table'] = 'field_data_field_dates';
  $handler->display->display_options['filters']['field_dates_value']['field'] = 'field_dates_value';
  $handler->display->display_options['filters']['field_dates_value']['operator'] = 'not empty';

  /* Display: Scheduled */
  $handler = $view->new_display('page', 'Scheduled', 'page');
  $handler->display->display_options['path'] = 'classes/scheduled';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Scheduled';
  $handler->display->display_options['menu']['weight'] = '-49';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Classes';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';

  /* Display: Proposed */
  $handler = $view->new_display('page', 'Proposed', 'page_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'class' => 'class',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search by title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Topics (field_topics) */
  $handler->display->display_options['filters']['field_topics_tid']['id'] = 'field_topics_tid';
  $handler->display->display_options['filters']['field_topics_tid']['table'] = 'field_data_field_topics';
  $handler->display->display_options['filters']['field_topics_tid']['field'] = 'field_topics_tid';
  $handler->display->display_options['filters']['field_topics_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_topics_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_topics_tid']['expose']['operator_id'] = 'field_topics_tid_op';
  $handler->display->display_options['filters']['field_topics_tid']['expose']['label'] = 'Topic';
  $handler->display->display_options['filters']['field_topics_tid']['expose']['operator'] = 'field_topics_tid_op';
  $handler->display->display_options['filters']['field_topics_tid']['expose']['identifier'] = 'topic';
  $handler->display->display_options['filters']['field_topics_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_topics_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_topics_tid']['vocabulary'] = 'topics';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Proposed' => 'Proposed',
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['path'] = 'classes/proposed';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'More proposals';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block This week */
  $handler = $view->new_display('block', 'Block This week', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'This week';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_dates_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_dates' => 'field_dates',
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['separator'] = ' | ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="alert alert-block alert-success">This curriculum is designed to be flexible. Check back often for updates & sign up for the <a href="/lists">Announcements list</a> to be notified by email. For past and future weeks, see the <a href="/calendar">full schedule</a>.</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Day only */
  $handler->display->display_options['fields']['field_dates_1']['id'] = 'field_dates_1';
  $handler->display->display_options['fields']['field_dates_1']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates_1']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates_1']['ui_name'] = 'Day only';
  $handler->display->display_options['fields']['field_dates_1']['label'] = '';
  $handler->display->display_options['fields']['field_dates_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dates_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dates_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dates_1']['settings'] = array(
    'format_type' => 'long_no_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_dates_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_dates_1']['delta_offset'] = '0';
  /* Field: Time only */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['ui_name'] = 'Time only';
  $handler->display->display_options['fields']['field_dates']['label'] = '';
  $handler->display->display_options['fields']['field_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dates']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_dates']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_dates']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Dates -  start date (field_dates) */
  $handler->display->display_options['sorts']['field_dates_value']['id'] = 'field_dates_value';
  $handler->display->display_options['sorts']['field_dates_value']['table'] = 'field_data_field_dates';
  $handler->display->display_options['sorts']['field_dates_value']['field'] = 'field_dates_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'class' => 'class',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Accepted' => 'Accepted',
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Dates -  start date (field_dates) */
  $handler->display->display_options['filters']['field_dates_value']['id'] = 'field_dates_value';
  $handler->display->display_options['filters']['field_dates_value']['table'] = 'field_data_field_dates';
  $handler->display->display_options['filters']['field_dates_value']['field'] = 'field_dates_value';
  $handler->display->display_options['filters']['field_dates_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_dates_value']['default_date'] = 'monday this week';
  $handler->display->display_options['filters']['field_dates_value']['default_to_date'] = 'sunday this week';

  /* Display: Admin */
  $handler = $view->new_display('page', 'Admin', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Administer classes';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Field: Content: Dates */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_dates']['delta_offset'] = '0';
  /* Field: Field: Sessions attended/attending */
  $handler->display->display_options['fields']['field_session_s_']['id'] = 'field_session_s_';
  $handler->display->display_options['fields']['field_session_s_']['table'] = 'field_data_field_session_s_';
  $handler->display->display_options['fields']['field_session_s_']['field'] = 'field_session_s_';
  $handler->display->display_options['fields']['field_session_s_']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_session_s_']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['path'] = 'admin/content/classes';

  /* Display: Block Fall 2014 Session */
  $handler = $view->new_display('block', 'Block Fall 2014 Session', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Class archive';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_dates_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_dates' => 'field_dates',
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['separator'] = ' | ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="alert alert-block alert-success">This curriculum is designed to be flexible. Check back often for updates & sign up for the <a href="/lists">Announcements list</a> to be notified by email. For past and future weeks, see the <a href="/calendar">full schedule</a>.</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Day only */
  $handler->display->display_options['fields']['field_dates_1']['id'] = 'field_dates_1';
  $handler->display->display_options['fields']['field_dates_1']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates_1']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates_1']['ui_name'] = 'Day only';
  $handler->display->display_options['fields']['field_dates_1']['label'] = '';
  $handler->display->display_options['fields']['field_dates_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dates_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dates_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dates_1']['settings'] = array(
    'format_type' => 'long_no_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_dates_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_dates_1']['delta_offset'] = '0';
  /* Field: Time only */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['ui_name'] = 'Time only';
  $handler->display->display_options['fields']['field_dates']['label'] = '';
  $handler->display->display_options['fields']['field_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dates']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_dates']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_dates']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Dates -  start date (field_dates) */
  $handler->display->display_options['sorts']['field_dates_value']['id'] = 'field_dates_value';
  $handler->display->display_options['sorts']['field_dates_value']['table'] = 'field_data_field_dates';
  $handler->display->display_options['sorts']['field_dates_value']['field'] = 'field_dates_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'class' => 'class',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Accepted' => 'Accepted',
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Field: Sessions attended/attending (field_session_s_) */
  $handler->display->display_options['filters']['field_session_s__target_id']['id'] = 'field_session_s__target_id';
  $handler->display->display_options['filters']['field_session_s__target_id']['table'] = 'field_data_field_session_s_';
  $handler->display->display_options['filters']['field_session_s__target_id']['field'] = 'field_session_s__target_id';
  $handler->display->display_options['filters']['field_session_s__target_id']['value'] = array(
    166 => '166',
  );

  /* Display: Session proposals */
  $handler = $view->new_display('page', 'Session proposals', 'page_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_session_s__target_id']['id'] = 'field_session_s__target_id';
  $handler->display->display_options['relationships']['field_session_s__target_id']['table'] = 'field_data_field_session_s_';
  $handler->display->display_options['relationships']['field_session_s__target_id']['field'] = 'field_session_s__target_id';
  $handler->display->display_options['relationships']['field_session_s__target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_session_s__target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'access denied';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = '%1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'session' => 'session',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'class' => 'class',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search by title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Topics (field_topics) */
  $handler->display->display_options['filters']['field_topics_tid']['id'] = 'field_topics_tid';
  $handler->display->display_options['filters']['field_topics_tid']['table'] = 'field_data_field_topics';
  $handler->display->display_options['filters']['field_topics_tid']['field'] = 'field_topics_tid';
  $handler->display->display_options['filters']['field_topics_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_topics_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_topics_tid']['expose']['operator_id'] = 'field_topics_tid_op';
  $handler->display->display_options['filters']['field_topics_tid']['expose']['label'] = 'Topic';
  $handler->display->display_options['filters']['field_topics_tid']['expose']['operator'] = 'field_topics_tid_op';
  $handler->display->display_options['filters']['field_topics_tid']['expose']['identifier'] = 'topic';
  $handler->display->display_options['filters']['field_topics_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_topics_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_topics_tid']['vocabulary'] = 'topics';
  $handler->display->display_options['path'] = 'node/%/proposals';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'All proposals';
  $handler->display->display_options['menu']['weight'] = '-30';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['classes'] = $view;

  $view = new view();
  $view->name = 'documentation';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Documentation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Documentation';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_video']['type'] = 'vimeo_link_formatter_thumbnail';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'thumb_size' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_video']['delta_offset'] = '0';
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_audio']['id'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['table'] = 'field_data_field_audio';
  $handler->display->display_options['fields']['field_audio']['field'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['label'] = '';
  $handler->display->display_options['fields']['field_audio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_audio']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_audio']['type'] = 'mediaelement_audio';
  $handler->display->display_options['fields']['field_audio']['settings'] = array(
    'controls' => 1,
    'width' => '300',
    'height' => '30',
    'download_link' => 1,
    'download_text' => 'Download',
  );
  $handler->display->display_options['fields']['field_audio']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'class' => 'class',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Video (field_video:url) */
  $handler->display->display_options['filters']['field_video_url']['id'] = 'field_video_url';
  $handler->display->display_options['filters']['field_video_url']['table'] = 'field_data_field_video';
  $handler->display->display_options['filters']['field_video_url']['field'] = 'field_video_url';
  $handler->display->display_options['filters']['field_video_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_video_url']['group'] = 2;
  /* Filter criterion: Content: Audio (field_audio:url) */
  $handler->display->display_options['filters']['field_audio_url']['id'] = 'field_audio_url';
  $handler->display->display_options['filters']['field_audio_url']['table'] = 'field_data_field_audio';
  $handler->display->display_options['filters']['field_audio_url']['field'] = 'field_audio_url';
  $handler->display->display_options['filters']['field_audio_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_audio_url']['group'] = 2;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_video']['type'] = 'vimeo_link_formatter_player';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'width' => '500',
    'height' => '281',
    'color' => '00adef',
    'portrait' => 1,
    'title' => 1,
    'byline' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'js_api' => 0,
  );
  $handler->display->display_options['fields']['field_video']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_video']['separator'] = '<br /><br />';
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_audio']['id'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['table'] = 'field_data_field_audio';
  $handler->display->display_options['fields']['field_audio']['field'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['label'] = '';
  $handler->display->display_options['fields']['field_audio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_audio']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_audio']['type'] = 'mediaelement_audio';
  $handler->display->display_options['fields']['field_audio']['settings'] = array(
    'controls' => 1,
    'width' => '500',
    'height' => '30',
    'download_link' => 1,
    'download_text' => 'Download',
  );
  $handler->display->display_options['fields']['field_audio']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'documentation';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Documentation';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['documentation'] = $view;

  $view = new view();
  $view->name = 'session_schedule';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Session schedule';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Session schedule';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_dates',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_dates_1' => 'field_dates_1',
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['separator'] = '&nbsp;';
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['label'] = 'Schedule text';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'session_schedule_text:default';
  $handler->display->display_options['header']['view']['inherit_arguments'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Scheduled classes</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no classes scheduled for the Session.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_session_s__target_id']['id'] = 'field_session_s__target_id';
  $handler->display->display_options['relationships']['field_session_s__target_id']['table'] = 'field_data_field_session_s_';
  $handler->display->display_options['relationships']['field_session_s__target_id']['field'] = 'field_session_s__target_id';
  $handler->display->display_options['relationships']['field_session_s__target_id']['required'] = TRUE;
  /* Field: Date no time */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['ui_name'] = 'Date no time';
  $handler->display->display_options['fields']['field_dates']['label'] = '';
  $handler->display->display_options['fields']['field_dates']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'format_type' => 'date_no_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_dates']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_dates']['delta_offset'] = '0';
  /* Field: Time no date */
  $handler->display->display_options['fields']['field_dates_1']['id'] = 'field_dates_1';
  $handler->display->display_options['fields']['field_dates_1']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates_1']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates_1']['ui_name'] = 'Time no date';
  $handler->display->display_options['fields']['field_dates_1']['label'] = '';
  $handler->display->display_options['fields']['field_dates_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dates_1']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_dates_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_dates_1']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_session_s__node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Dates -  start date (field_dates) */
  $handler->display->display_options['sorts']['field_dates_value']['id'] = 'field_dates_value';
  $handler->display->display_options['sorts']['field_dates_value']['table'] = 'field_data_field_dates';
  $handler->display->display_options['sorts']['field_dates_value']['field'] = 'field_dates_value';
  /* Sort criterion: Content: Dates - end date (field_dates:value2) */
  $handler->display->display_options['sorts']['field_dates_value2']['id'] = 'field_dates_value2';
  $handler->display->display_options['sorts']['field_dates_value2']['table'] = 'field_data_field_dates';
  $handler->display->display_options['sorts']['field_dates_value2']['field'] = 'field_dates_value2';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_session_s__target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'access denied';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = '%1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'session' => 'session',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'class' => 'class',
  );
  /* Filter criterion: Content: Dates (field_dates:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_dates';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming classes';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['session_schedule'] = $view;

  $view = new view();
  $view->name = 'session_schedule_text';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Session schedule text';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Session schedule text */
  $handler->display->display_options['fields']['field_session_schedule_text']['id'] = 'field_session_schedule_text';
  $handler->display->display_options['fields']['field_session_schedule_text']['table'] = 'field_data_field_session_schedule_text';
  $handler->display->display_options['fields']['field_session_schedule_text']['field'] = 'field_session_schedule_text';
  $handler->display->display_options['fields']['field_session_schedule_text']['label'] = '';
  $handler->display->display_options['fields']['field_session_schedule_text']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $export['session_schedule_text'] = $view;

  $view = new view();
  $view->name = 'sessions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sessions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sessions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'session-listing-image';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Session dates */
  $handler->display->display_options['fields']['field_session_dates']['id'] = 'field_session_dates';
  $handler->display->display_options['fields']['field_session_dates']['table'] = 'field_data_field_session_dates';
  $handler->display->display_options['fields']['field_session_dates']['field'] = 'field_session_dates';
  $handler->display->display_options['fields']['field_session_dates']['label'] = '';
  $handler->display->display_options['fields']['field_session_dates']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_dates']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_session_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_dates']['empty'] = 'Dates TBD';
  $handler->display->display_options['fields']['field_session_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_session_dates']['delta_offset'] = '0';
  /* Field: Content: Main location info */
  $handler->display->display_options['fields']['field_session_location']['id'] = 'field_session_location';
  $handler->display->display_options['fields']['field_session_location']['table'] = 'field_data_field_session_location';
  $handler->display->display_options['fields']['field_session_location']['field'] = 'field_session_location';
  $handler->display->display_options['fields']['field_session_location']['label'] = '';
  $handler->display->display_options['fields']['field_session_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_location']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="session-listing-content">
<h2>[title]</h2>
<h3>[field_session_dates]</h3>
[field_session_location]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Session dates -  start date (field_session_dates) */
  $handler->display->display_options['sorts']['field_session_dates_value']['id'] = 'field_session_dates_value';
  $handler->display->display_options['sorts']['field_session_dates_value']['table'] = 'field_data_field_session_dates';
  $handler->display->display_options['sorts']['field_session_dates_value']['field'] = 'field_session_dates_value';
  $handler->display->display_options['sorts']['field_session_dates_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  /* Filter criterion: Content: Session dates -  start date (field_session_dates) */
  $handler->display->display_options['filters']['field_session_dates_value']['id'] = 'field_session_dates_value';
  $handler->display->display_options['filters']['field_session_dates_value']['table'] = 'field_data_field_session_dates';
  $handler->display->display_options['filters']['field_session_dates_value']['field'] = 'field_session_dates_value';
  $handler->display->display_options['filters']['field_session_dates_value']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'sessions';
  $export['sessions'] = $view;

  return $export;
}
