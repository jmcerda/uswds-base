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
      $(context).on('load', function(){
        var element = $(".cta-content:not(.cta-processed)", context);
        if (element.length) {
          thatsNotYoChild(element[0]);
          element.addClass("cta-processed");
        }
      });
    },
  };

})(jQuery);
