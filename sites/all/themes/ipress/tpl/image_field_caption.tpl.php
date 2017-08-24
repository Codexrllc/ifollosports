<?php
/**
 * $image - contains the image html rendered by Drupal
 * $caption - contains the image field caption string
 */
?>
<?php print $image; ?>
		  <div class="ad-right skyscraper-ad">	  
		  <?php $block = module_invoke('block', 'block_view', '32');
		  print render($block['content']); ?>
		  </div>
<div class="rank">
<blockquote class="image-field-caption">
  <?php print $caption; ?>
</blockquote>
</div>