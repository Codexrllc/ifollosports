<?php
/**
 * @file
 * ifollo_main.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ifollo_main_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'listicle_blocks';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article_list' => 'article_list',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-recent_block-block' => array(
          'module' => 'views',
          'delta' => 'recent_block-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['listicle_blocks'] = $context;

  $context = new stdClass();
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mlb_headlines';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        1 => 1,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-most_popular-block_2' => array(
          'module' => 'views',
          'delta' => 'most_popular-block_2',
          'region' => 'sidebar_first',
          'weight' => '-36',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'sidebar_first',
          'weight' => '-35',
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => '7',
          'region' => 'sidebar_first',
          'weight' => '-34',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['mlb_headlines'] = $context;

  $context = new stdClass();
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nba_headlines';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        4 => 4,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-most_popular-block' => array(
          'module' => 'views',
          'delta' => 'most_popular-block',
          'region' => 'sidebar_first',
          'weight' => '-34',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'sidebar_first',
          'weight' => '-33',
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => '7',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['nba_headlines'] = $context;

  $context = new stdClass();
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ncaa_headlines';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        34 => 34,
        4451 => 4451,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-most_popular-block_4' => array(
          'module' => 'views',
          'delta' => 'most_popular-block_4',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => '7',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['ncaa_headlines'] = $context;

  $context = new stdClass();
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nfl_headlines';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        5 => 5,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-most_popular-block_1' => array(
          'module' => 'views',
          'delta' => 'most_popular-block_1',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => '7',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['nfl_headlines'] = $context;

  $context = new stdClass();
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nhl_headlines';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        6 => 6,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-most_popular-block_3' => array(
          'module' => 'views',
          'delta' => 'most_popular-block_3',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => '7',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['nhl_headlines'] = $context;

  $context = new stdClass();
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'other_headlines';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        2 => 2,
        3 => 3,
        12 => 12,
        14 => 14,
        24 => 24,
        28 => 28,
        30 => 30,
        36 => 36,
        47 => 47,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-recent_block-block_6' => array(
          'module' => 'views',
          'delta' => 'recent_block-block_6',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-most_popular-block_5' => array(
          'module' => 'views',
          'delta' => 'most_popular-block_5',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => '7',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['other_headlines'] = $context;

  $context = new stdClass();
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'wrestling_headlines';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        56 => 56,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-most_popular-block_6' => array(
          'module' => 'views',
          'delta' => 'most_popular-block_6',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => '7',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['wrestling_headlines'] = $context;

  return $export;
}
