<?php if ($content['#node']->comment and !($content['#node']->comment == 1 and $content['#node']->comment_count)) { ?>
<div id="comments" class="news_comments <?php print $classes; ?>"<?php print $attributes; ?>>
			<div class="dividerLatest">
				<h4>Comments (<?php print $content['#node']->comment_count; ?>)</h4>
				<div class="gDot"></div>
			</div>
			
			<div id="comment">
				<ul id="comment-list">
					<?php print render($content['comments']); ?>
				</ul>
			</div>
			<!-- /#comments -->
			<div class="dividerLatest">
				<h4>Leave a comment</h4>
				<div class="gDot"></div>
			</div>
                        <?php print render($content['comment_form']); ?>
</div>
<?php } ?>
