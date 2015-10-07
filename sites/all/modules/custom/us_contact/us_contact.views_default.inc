<?php
/**
 * @file
 * us_contact.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function us_contact_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'committee_members';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Committee members';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    4 => '4',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['committee_members'] = $view;

  $view = new view();
  $view->name = 'entityreference_classes_2015_cph';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Entityreference classes 2015 CPH';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  /* Filter criterion: Field: Session(s) (field_session_s_) */
  $handler->display->display_options['filters']['field_session_s__target_id']['id'] = 'field_session_s__target_id';
  $handler->display->display_options['filters']['field_session_s__target_id']['table'] = 'field_data_field_session_s_';
  $handler->display->display_options['filters']['field_session_s__target_id']['field'] = 'field_session_s__target_id';
  $handler->display->display_options['filters']['field_session_s__target_id']['value'] = array(
    174 => '174',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['entityreference_classes_2015_cph'] = $view;

  $view = new view();
  $view->name = 'us_contact_submissions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'US contact submissions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contact form submissions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'created' => 'created',
    'field_name' => 'field_name',
    'field_email' => 'field_email',
    'field_message' => 'field_message',
    'field_internal_contact_editable' => 'field_internal_contact_editable',
    'field_internal_notes_editable' => 'field_internal_notes_editable',
    'field_internal_status_editable' => 'field_internal_status_editable',
    'field_related_classes_editable' => 'field_related_classes_editable',
    'field_internal_contact' => 'field_internal_contact',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_message' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_internal_contact_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_internal_notes_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_internal_status_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_classes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_internal_contact' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Entityform: Date submitted */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'entityform';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Field: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  /* Field: Entityform: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  /* Field: Entityform: Message */
  $handler->display->display_options['fields']['field_message']['id'] = 'field_message';
  $handler->display->display_options['fields']['field_message']['table'] = 'field_data_field_message';
  $handler->display->display_options['fields']['field_message']['field'] = 'field_message';
  /* Field: Entityform: Internal contact */
  $handler->display->display_options['fields']['field_internal_contact']['id'] = 'field_internal_contact';
  $handler->display->display_options['fields']['field_internal_contact']['table'] = 'field_data_field_internal_contact';
  $handler->display->display_options['fields']['field_internal_contact']['field'] = 'field_internal_contact';
  $handler->display->display_options['fields']['field_internal_contact']['type'] = 'editable';
  $handler->display->display_options['fields']['field_internal_contact']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'entityreference_label',
    'fallback_settings' => array(
      'link' => 1,
    ),
  );
  /* Field: Entityform: Internal notes */
  $handler->display->display_options['fields']['field_internal_notes']['id'] = 'field_internal_notes';
  $handler->display->display_options['fields']['field_internal_notes']['table'] = 'field_data_field_internal_notes';
  $handler->display->display_options['fields']['field_internal_notes']['field'] = 'field_internal_notes';
  $handler->display->display_options['fields']['field_internal_notes']['type'] = 'editable';
  $handler->display->display_options['fields']['field_internal_notes']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Field: Entityform: Internal status */
  $handler->display->display_options['fields']['field_internal_status']['id'] = 'field_internal_status';
  $handler->display->display_options['fields']['field_internal_status']['table'] = 'field_data_field_internal_status';
  $handler->display->display_options['fields']['field_internal_status']['field'] = 'field_internal_status';
  $handler->display->display_options['fields']['field_internal_status']['type'] = 'editable';
  $handler->display->display_options['fields']['field_internal_status']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Field: Entityform: Related classes */
  $handler->display->display_options['fields']['field_related_classes']['id'] = 'field_related_classes';
  $handler->display->display_options['fields']['field_related_classes']['table'] = 'field_data_field_related_classes';
  $handler->display->display_options['fields']['field_related_classes']['field'] = 'field_related_classes';
  $handler->display->display_options['fields']['field_related_classes']['type'] = 'editable';
  $handler->display->display_options['fields']['field_related_classes']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'entityreference_label',
    'fallback_settings' => array(
      'link' => 1,
    ),
  );
  $handler->display->display_options['fields']['field_related_classes']['delta_offset'] = '0';
  /* Field: Field: Session(s) */
  $handler->display->display_options['fields']['field_session_s_']['id'] = 'field_session_s_';
  $handler->display->display_options['fields']['field_session_s_']['table'] = 'field_data_field_session_s_';
  $handler->display->display_options['fields']['field_session_s_']['field'] = 'field_session_s_';
  $handler->display->display_options['fields']['field_session_s_']['label'] = 'Related session(s)';
  $handler->display->display_options['fields']['field_session_s_']['type'] = 'editable';
  $handler->display->display_options['fields']['field_session_s_']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'entityreference_label',
    'fallback_settings' => array(
      'link' => 1,
    ),
  );
  $handler->display->display_options['fields']['field_session_s_']['delta_offset'] = '0';
  /* Sort criterion: Entityform: Date submitted */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'entityform';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Entityform: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Session(s) (field_session_s_) */
  $handler->display->display_options['filters']['field_session_s__target_id']['id'] = 'field_session_s__target_id';
  $handler->display->display_options['filters']['field_session_s__target_id']['table'] = 'field_data_field_session_s_';
  $handler->display->display_options['filters']['field_session_s__target_id']['field'] = 'field_session_s__target_id';
  $handler->display->display_options['filters']['field_session_s__target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_session_s__target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_session_s__target_id']['expose']['operator_id'] = 'field_session_s__target_id_op';
  $handler->display->display_options['filters']['field_session_s__target_id']['expose']['label'] = 'Related sessions';
  $handler->display->display_options['filters']['field_session_s__target_id']['expose']['operator'] = 'field_session_s__target_id_op';
  $handler->display->display_options['filters']['field_session_s__target_id']['expose']['identifier'] = 'field_session_s__target_id';
  $handler->display->display_options['filters']['field_session_s__target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Entityform: Internal status (field_internal_status) */
  $handler->display->display_options['filters']['field_internal_status_value']['id'] = 'field_internal_status_value';
  $handler->display->display_options['filters']['field_internal_status_value']['table'] = 'field_data_field_internal_status';
  $handler->display->display_options['filters']['field_internal_status_value']['field'] = 'field_internal_status_value';
  $handler->display->display_options['filters']['field_internal_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_internal_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_internal_status_value']['expose']['operator_id'] = 'field_internal_status_value_op';
  $handler->display->display_options['filters']['field_internal_status_value']['expose']['label'] = 'Internal status';
  $handler->display->display_options['filters']['field_internal_status_value']['expose']['operator'] = 'field_internal_status_value_op';
  $handler->display->display_options['filters']['field_internal_status_value']['expose']['identifier'] = 'field_internal_status_value';
  $handler->display->display_options['filters']['field_internal_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Entityform: Internal contact (field_internal_contact) */
  $handler->display->display_options['filters']['field_internal_contact_target_id']['id'] = 'field_internal_contact_target_id';
  $handler->display->display_options['filters']['field_internal_contact_target_id']['table'] = 'field_data_field_internal_contact';
  $handler->display->display_options['filters']['field_internal_contact_target_id']['field'] = 'field_internal_contact_target_id';
  $handler->display->display_options['filters']['field_internal_contact_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_internal_contact_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_internal_contact_target_id']['expose']['operator_id'] = 'field_internal_contact_target_id_op';
  $handler->display->display_options['filters']['field_internal_contact_target_id']['expose']['label'] = 'Internal contact';
  $handler->display->display_options['filters']['field_internal_contact_target_id']['expose']['operator'] = 'field_internal_contact_target_id_op';
  $handler->display->display_options['filters']['field_internal_contact_target_id']['expose']['identifier'] = 'field_internal_contact_target_id';
  $handler->display->display_options['filters']['field_internal_contact_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/contact-submissions';
  $export['us_contact_submissions'] = $view;

  return $export;
}
