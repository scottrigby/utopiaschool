/**
 * Javascript to handle the flagging_inline ajax requests.
 */
(function ($) {

  Drupal.flagging_form_inline = Drupal.flagging_form_inline || {};

  Drupal.behaviors.flagging_form_inline = {
    attach: function (context, settings) {
      // Create the jQuery UI elements to handle events.
      $(".flagging-inline").once("flagging_form_inline", function() {
        Drupal.flagging_form_inline = $('<div class="flagging-inline-content"></div>').hide();
        $(this).parent().append(Drupal.flagging_form_inline);
      });
    }
  };

  /**
   * Ajax command to display flagging form.
   */
  Drupal.ajax.prototype.commands.flagging_inline_display = function(ajax, response, status) {
    var $flag_wrapper = $('.flag-wrapper.flag-' + response.flagName.flagNameToCSS() + '-' + response.contentId);
    var $flag_link = $flag_wrapper.find('.flagging-inline');
    var $flag_content = $flag_wrapper.find('.flagging-inline-content');
    // Assign the currently active flag content to Drupal.flagging_form_inline.
    Drupal.flagging_form_inline = $flag_content;
    // Add class on link so we know it is active.
    $flag_link.addClass('flagging-inline-active');
    Drupal.flagging_form_inline.html(response.content).slideDown(200, function() {
      // When the user presses ENTER (in textfields or selects), the browser
      // submits the form. We want this submission to occur via ajax. So we
      // intercept a normal form submission and instead trigger the first
      // ajaxified action button.
      $(this).find('form').submit(function() {
        if ($('#autocomplete').size() == 0) { // Pressing ENTER in autocompletes shouldn't submit the form.
          $('.form-actions input:submit:first', this).mousedown();
        }
        return false;
      });

      // We handle "Cancel" buttons directly through JavaScript to save
      // a roundtrip to the server.
      $(this).find('.form-actions input[id*=cancel]').bind("click", function() {
        Drupal.ajax.prototype.commands.flagging_inline_dismiss(ajax, response, status);
        return false;
      });
    });
    // Apply any settings from the returned JSON if available.
    var settings = response.settings || ajax.settings || Drupal.settings;
    // Process any other behaviors on the content, and display the inline form.
    Drupal.attachBehaviors(Drupal.flagging_form_inline, settings);
  };

  /**
   * Ajax command to close flagging form.
   */
  Drupal.ajax.prototype.commands.flagging_inline_dismiss = function(ajax, response, status) {
    var $flag_wrapper = $('.flag-wrapper.flag-' + response.flagName.flagNameToCSS() + '-' + response.contentId);
    var $flag_link = $flag_wrapper.find('.flagging-inline');
    var $flag_content = $flag_wrapper.find('.flagging-inline-content');
    // Assign the currently active flag content to Drupal.flagging_form_inline.
    Drupal.flagging_form_inline = $flag_content;
    // Slide up the inline content then empty and hide it.
    Drupal.flagging_form_inline.slideUp(200, function() {
      $(this).empty().hide();
      // Remove class on link so we know it is no longer active.
      var $flag_wrapper = $(this).parent();
      var $flag_link = $flag_wrapper.find('.flagging-inline');
      $flag_link.removeClass('flagging-inline-active');
    });
    Drupal.detachBehaviors(Drupal.flagging_form_inline);
  };

  /**
   * Ajax command to update a flag link.
   */
  Drupal.ajax.prototype.commands.flagging_inline_update_link = function(ajax, response, status) {
    Drupal.flagUtils.updateContentIdLinks(response);
    // @see flagging_inline_command_update_link().
    $.event.trigger('flagGlobalAfterLinkUpdate', [response]);
  };

  /**
   * Command to use the xLazyLoader to load additional JavaScript, CSS and images.
   *
   * http://code.google.com/p/ajaxsoft/wiki/xLazyLoader
   */
  Drupal.ajax.prototype.commands.xlazyloader = function(ajax, response, status) {
    var settings = {
      name: 'lazy',
      success: function() {
      // When it's complete loading the new JavaScript and CSS, make sure to run
      // the behaviors on the object.
      Drupal.attachBehaviors(Drupal.flagging_form_inline);
      }
    };
    // Merge in the settings, allowing the loading of CSS and JavaScript.
    jQuery.extend(settings, response.options);
    // Load the scripts.
    $.xLazyLoader(settings);
  };

  Drupal.flagUtils = Drupal.flagUtils || {};

/**
 * Updates all links of a certain content ID.
 *
 * @param data
 *   A parcel of info usually returned from the server; at a minimum it should
 *   contain:
 *   - flagName
 *   - contentId
 *   - newLink
 *
 * @todo: The masses are clamoring for this utility function (see
 * http://drupal.org/node/843308#comment-3308744), so move it to Flag's core.
 */
Drupal.flagUtils.updateContentIdLinks = function(data) {
  var $wrappers = $('.flag-wrapper.flag-' + data.flagName.flagNameToCSS() + '-' + data.contentId);
  var $newLink = $(data.newLink);
  // Initially hide the message so we can fade it in.
  $('.flag-message', $newLink).css('display', 'none');
  $wrappers = $newLink.replaceAll($wrappers);
  $('.flag-message', $wrappers).fadeIn();
  Drupal.attachBehaviors($wrappers.parent());
  setTimeout(function() { $('.flag-message', $wrappers).fadeOut() }, 3000);
  // A short treatise on Replacing Things.
  //
  //   $olds.replaceWith($new)
  //
  // This replaces all $olds with a single $new. The $olds variable now contains
  // a collection of elements that are no longer in the document.
  //
  //   $new.replaceAll($olds)
  //
  // This replaces all $olds with clones of $new. The value of this expression is
  // a collection of all new $new's.
  //
  // @todo: Remove this explanation?
}

})(jQuery);
