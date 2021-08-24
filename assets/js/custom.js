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

  Drupal.behaviors.thatsNotYoChild = {
    attach: function (context, settings) {
      var element = $(".cta-content", context);
      if (element.length) {
        thatsNotYoChild(element[0]);
      }
    },
  };

})(jQuery);
