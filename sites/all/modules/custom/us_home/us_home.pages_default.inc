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
    $pane->pid = 'new-6ee58bac-318f-4810-b038-8e3f81b8323e';
    $pane->panel = 'content_main';
    $pane->type = 'block';
    $pane->subtype = 'views-classes-block_2';
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
    $pane->uuid = '6ee58bac-318f-4810-b038-8e3f81b8323e';
    $display->content['new-6ee58bac-318f-4810-b038-8e3f81b8323e'] = $pane;
    $display->panels['content_main'][0] = 'new-6ee58bac-318f-4810-b038-8e3f81b8323e';
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
    $pane->pid = 'new-9fe6eea1-5beb-42cc-9507-113a9e59ac8f';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'REVERSE space classes',
      'title' => 'Spring Session 2015 NYC (REVERSE)',
      'body' => '<p><strong>@REVERSE</strong> (in Williamsburg)<br />
28 Frost Street&nbsp;Brooklyn, New York 11211</p>

<p>As part of the&nbsp;exhibition programming for&nbsp;<a href="http://reversespace.org/seastead-at-night/">SEASTEAD AT NIGHT</a>,&nbsp;Utopia School&nbsp;will be hosting 2 classes at REVERSE.</p>

<h3><a href="/node/80">Utopian Response to Ecocrises?</a><br />
SATURDAY, MARCH 14TH, 1:30PM – 3:30PM</h3>

<p>A central focus of this workshop is the relationship between ecosystems and social systems and how it is being re-imagined by folks in the collective housing community. Through multi-media presentation and facilitated discussion, we will explore our own relationships to the ecosystems that support us and all life on the planet in juxtaposition to alternative eco-social relationships theorized by permaculture and specific strains of anarchism. You will leave this presentation with new ideas on how humans could or should relate to each other, to other species, and to ecosystems in an age of impending eco-crises. Dialogue, questions and commentary will follow.</p>

<h3><a href="/node/171">Architectures of Desire: Seasteads and Nomadic Flows</a><br />
SATURDAY, MARCH 21ST, 1:30PM – 3:30PM</h3>

<p>Let us consider the&nbsp;term “utopian&nbsp;architecture” for a moment.&nbsp; Does it sound like an&nbsp;oxymoron?&nbsp; Must it?&nbsp; How might we change the rules of&nbsp;architecture&nbsp;without throwing away its productive aspects? &nbsp; Like goldfish, we grow to fit our containers.&nbsp; Can&nbsp;we imagine an&nbsp;architecture&nbsp;that increases&nbsp;liberty, propagates&nbsp;communalism, stokes mutual aid, and embraces interdependence? What would such an&nbsp;architecture&nbsp;– a desiring&nbsp;architecture&nbsp;– look like, and what might it want from us? Picking up on the work&nbsp;of&nbsp;visionary architect Lebbeus Woods,&nbsp;Architectures&nbsp;of Desire&nbsp;will explore expanded conditions&nbsp;of&nbsp;a built environment beyond those intended by an ideologically-driven definition of urbanism.</p>

<hr />
<p>&nbsp;</p>
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9fe6eea1-5beb-42cc-9507-113a9e59ac8f';
    $display->content['new-9fe6eea1-5beb-42cc-9507-113a9e59ac8f'] = $pane;
    $display->panels['header'][1] = 'new-9fe6eea1-5beb-42cc-9507-113a9e59ac8f';
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
    $pane = new stdClass();
    $pane->pid = 'new-4d33c86d-0e2f-46e6-9c01-78e27b0f738b';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'views-documentation-block';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4d33c86d-0e2f-46e6-9c01-78e27b0f738b';
    $display->content['new-4d33c86d-0e2f-46e6-9c01-78e27b0f738b'] = $pane;
    $display->panels['sidebar'][1] = 'new-4d33c86d-0e2f-46e6-9c01-78e27b0f738b';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
