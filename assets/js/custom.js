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

  Drupal.behaviors.ThatsNotYoChild = {
    attach: function (context, settings) {
      thatsNotYoChild('cta');
    },
  };

})(jQuery);
