(function($){
Drupal.behaviors.ifollo_custom = {
  attach: function (context, settings) {
      $(window).scroll(function (event) {
 var scroll = $(window).scrollTop();
 var height = $('.grid_8').height();
 var height_offset = $('.grid_9').offset().top;
 var no_listicle = 0;
 if($('.no-listicle').height() !== null) {
     no_listicle = $('.no-listicle').height();
      height = height - no_listicle;
 }
else {
    var not_views_row = $('.view-id-slideshow_pager_view > .view-content').children(':not(.views-row)');
    var total_height = 0;
    $.each(not_views_row, function(index) {
total_height = total_height + $(this).height();
});
height = height - total_height;
}
 height = height - height_offset;
 height = height - 119;
 
 var sharethis = $('.sharethis-wrapper').offset().top;
 if(scroll + 110 >= height ) {
     $('.sharethis-wrapper').css('position', 'absolute');
     $('.sharethis-wrapper').css('margin-top', height);
 }
 else {
     $('.sharethis-wrapper').css('position', 'fixed');
     $('.sharethis-wrapper').css('margin-top', 'calc(0% + 110px)');
 }
  });
}
};
})(jQuery);