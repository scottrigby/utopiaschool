<?php
/**
 * @file
 * us_home.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function us_home_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Home',
    'name' => 'main-menu',
    'weight' => '-50',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home';
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
  );
  $display = new panels_display();
  $display->layout = 'brenham_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      11 => NULL,
      12 => NULL,
      13 => NULL,
      21 => NULL,
      22 => NULL,
      23 => NULL,
      31 => NULL,
      32 => NULL,
      33 => NULL,
      41 => NULL,
      42 => NULL,
      43 => NULL,
      44 => NULL,
      51 => NULL,
      52 => NULL,
      53 => NULL,
      54 => NULL,
      61 => NULL,
      62 => NULL,
      63 => NULL,
      64 => NULL,
      71 => NULL,
      72 => NULL,
      73 => NULL,
      74 => NULL,
      'header' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'footer' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
      'sidebar' => NULL,
      'content_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6666d115-8c91-4b51-8fbb-a089956b4de8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e78ecc27-5e9b-4a22-8127-dd95904abd84';
    $pane->panel = 'content_main';
    $pane->type = 'block';
    $pane->subtype = 'views-classes-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e78ecc27-5e9b-4a22-8127-dd95904abd84';
    $display->content['new-e78ecc27-5e9b-4a22-8127-dd95904abd84'] = $pane;
    $display->panels['content_main'][0] = 'new-e78ecc27-5e9b-4a22-8127-dd95904abd84';
    $pane = new stdClass();
    $pane->pid = 'new-2efc186e-ffef-4f88-99f1-3eeb5b7f39c5';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'views-slideshow-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2efc186e-ffef-4f88-99f1-3eeb5b7f39c5';
    $display->content['new-2efc186e-ffef-4f88-99f1-3eeb5b7f39c5'] = $pane;
    $display->panels['header'][0] = 'new-2efc186e-ffef-4f88-99f1-3eeb5b7f39c5';
    $pane = new stdClass();
    $pane->pid = 'new-eda2453f-17d4-4e07-aff9-de44e739a1ee';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'About the school',
      'title' => 'Fall Session 2014 NYC',
      'body' => '<h2>October 1 - 31, 2014</h2>

<p><strong>Open: Wed - Sun, 12-10pm</strong></p>

<p><strong>@Flux Factory</strong> (unless otherwise noted)<br />
<span style="line-height: 20.7999992370605px;">39-31 29th St&nbsp;</span>Long Island City, New York</p>

<h2>What questions&nbsp;are useful for re-imaging the future?</h2>

<p>Utopia School is a month-long <a href="http://en.wikipedia.org/wiki/Social_center">social center</a>&nbsp;hosted at <a href="http://www.fluxfactory.org/">Flux Factory</a>&nbsp;for the purpose of studying Utopian experiments throughout time, as well as practicing our skills towards building new free spaces and practices. These classes, screenings, discussions and games will be connected by an essential question: What questions&nbsp;are useful for re-imaging the future?</p>

<p>To us, utopias take the form of intentional communities, squats, community gardens, communes, and other initiatives geared towards communizing resources, (including those which don’t self-describe as Utopian). We hope these classes and explorations will help to document and further these specific knowledges.</p>

<p>At any given time there will be several Utopians-in-Residence as well as class leaders involved in running the space, co-learning together, and teaching classes. You, too, can propose a residency project which interacts with the space. We hope you will join us!</p>

<p>Utopia School is open from 12pm-10pm Wednesday-Sunday, from October 1-31st on location at Flux Factory, except when&nbsp;otherwise noted. There are a bunch of field trips in the works, and some classes will take place at other venues, so pay attention to the location in “class descriptions”.</p>

<p>It\'s also never too late to&nbsp;<a href="/node/add/class">propose classes</a>&nbsp;– we\'ll help make happen&nbsp;as many as possible during October, but this is an ongoing effort to build open curricula on utopian thought and practice, intended to continue elsewhere after this month. So propose a class, get involved in existing classes, comment, join remotely or&nbsp;come in person if you can. We look forward to connecting with you!<br />
&nbsp;</p>

<p><a class="button" href="/calendar">See the schedule</a></p>

<p><a class="button" href="/classes">Get involved in classes</a></p>

<p><a class="button" href="/node/add/class">Propose a new class</a></p>

<p><a class="button" href="/lists">Stay informed about upcoming events</a></p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'eda2453f-17d4-4e07-aff9-de44e739a1ee';
    $display->content['new-eda2453f-17d4-4e07-aff9-de44e739a1ee'] = $pane;
    $display->panels['sidebar'][0] = 'new-eda2453f-17d4-4e07-aff9-de44e739a1ee';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}