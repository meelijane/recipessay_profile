(function ($) {

Drupal.behaviors.imageeditor_inline_revert = {};
Drupal.behaviors.imageeditor_inline_revert.attach = function(context, settings) {
  $('img.imageeditor-inline-revert', context).click(function(event) {
    var revert_style = $(this).attr('src');
    //regexp to detect and remove 'styles/style_name/scheme_name/'
    //Styles are using $scheme . '://styles/' . $style_name . '/' . $scheme . '/' . $path
    var revert_full = revert_style.replace(new RegExp('styles/[0-9a-zA-z_]+/[0-9a-zA-z_]+/','g'), '');
    $.ajax({
      type: 'POST',
      url: Drupal.settings.imageeditor_inline.save_url,
      async: true,
      data: {'image': revert_full, 'fullurl': Drupal.settings.imageeditor_inline.imageeditor_inline_revert, 'origurl': Drupal.settings.imageeditor_inline.imageeditor_inline_revert},
      success: function(data) {alert(data);},
      error: function(msg) {alert("Something went wrong : " + msg);}
    });
  });
};

})(jQuery);