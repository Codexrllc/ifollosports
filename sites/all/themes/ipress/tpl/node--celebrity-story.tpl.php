<?php

/**
 * @file
 * Default theme implementation to display a node.
 */
?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php print $user_picture; ?>

  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h1<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h1>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
		<div>
  		<?php $block = module_invoke('block', 'block_view', '37');
		print render($block['content']); ?>
		</div>
  
  <?php if ($display_submitted): ?>
    <div class="submitted">
      <?php //print $submitted; 
	    $node_author = ($node->name);               
	    if ($submitted) { 
            echo "By " . $node_author . "   " . date( "F j, Y",$node->created);  
   }  
        ?>
    </div>
  <?php endif; ?>

    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>

  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</div>
