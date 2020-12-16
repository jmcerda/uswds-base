(function ($) {
  "use strict";

  Drupal.behaviors.equalHeight = {
    attach: function (context, settings) {
      $(".equalHeight").matchHeight({
      });
    },
  };

  Drupal.behaviors.fitty = {
    attach: function (context, settings) {
      fitty(".fittext");
    },
  };

  Drupal.behaviors.header = {
    attach: function (context, settings) {
      $("#showCheckbox").click(function(){
        $(this).parent().siblings().show();
      });
    },
  };

})(jQuery);
