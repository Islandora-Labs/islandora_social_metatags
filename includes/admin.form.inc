<?php
/**
 * @file
 * Admin form for Islandora Social Metatags
 */
function islandora_social_metatags_admin_form($form, $form_settings) {
  $form['islandora_social_metatags_title_xpath'] = array(
    '#type' => 'textfield',
    '#title' => t('Title XPath'),
    '#description' => t('MODS XPath for retrieving the title.'),
    '#default_value' => variable_get('islandora_social_metatags_title_xpath', '/mods:mods/mods:titleInfo/mods:title'),
  );

  $form['islandora_social_metatags_abstract_xpath'] = array(
    '#type' => 'textfield',
    '#title' => t('Abstract XPath'),
    '#description' => t('MODS XPath for the Description field. Defaults to mods:abstract.'),
    '#default_value' => variable_get('islandora_social_metatags_abstract_xpath', '/mods:mods/mods:abstract'),
  );

  $form['islandora_social_metatags_twitter_user'] = array(
    '#type' => 'textfield',
    '#title' => t('Site Twitter user'),
    '#description' => t('The Twitter handle for your site or admin. Required. Must begin with @'),
    '#default_value' => variable_get('islandora_social_metatags_twitter_user', '@nobody'),
  );
  $form['islandora_social_metatags_no_description'] = array(
    '#type' => 'textfield',
    '#title' => t('No Description message'),
    '#description' => t('The message to use if no abstract or other desciption element is present.'),
    '#default_value' => variable_get('islandora_social_metatags_no_description', 'No description given.'),
  );
  $form['islandora_social_metatags_largeimage_datastream'] = array(
    '#type' => 'textfield',
    '#title' => t('Large Image Datastream'),
    '#description' => t('Image datastream to use for Large Image objects'),
    '#default_value' => variable_get('islandora_social_metatags_largeimage_datastream', 'JPG'),
  );
  $form['islandora_social_metatags_basicimage_datastream'] = array(
    '#type' => 'textfield',
    '#title' => t('Basic Image Datastream'),
    '#description' => t('Image datastream to use for Basic Image objects'),
    '#default_value' => variable_get('islandora_social_metatags_basicimage_datastream', 'MEDIUM_SIZE'),
  );
  $form['islandora_social_metatags_video_datastream'] = array(
    '#type' => 'textfield',
    '#title' => t('Video image datastream'),
    '#description' => t('Image datastream to use for Video objects'),
    '#default_value' => variable_get('islandora_social_metatags_video_datastream', 'TN'),
  );
  $form['islandora_social_metatags_citation_datastream'] = array(
    '#type' => 'textfield',
    '#title' => t('Citation image datastream'),
    '#description' => t('Image datastream to use for Citation objects'),
    '#default_value' => variable_get('islandora_social_metatags_citation_datastream', 'PREVIEW'),
  );
  $form['islandora_social_metatags_thesis_datastream'] = array(
    '#type' => 'textfield',
    '#title' => t('Thesis image datastream'),
    '#description' => t('Image datastream to use for Thesis objects'),
    '#default_value' => variable_get('islandora_social_metatags_thesis_datastream', 'PREVIEW'),
  );
  $form['islandora_social_metatags_noimage'] = array(
    '#type' => 'textfield',
    '#title' => t('Path to image if image datastream does not exist'),
    '#description' => t('If the above Image datastreams do not exist for a given object, use a basic default. Use a relative path.'),
    '#default_value' => variable_get('islandora_social_metatags_noimage', '/sites/all/modules/islandora/images/folder.png'),
  );
  $form['islandora_social_metatags_compound_title'] = array(
    '#type' => 'select',
    '#title' => t('Compound Object Title Preference'),
    '#description' => t('On all child objects, use either the Parent\'s title, the Child\'s title, or concatenate both. If choosing Child, the first child object\'s title will be used when viewing the parent object.'),
    '#options' => array(
      'child' => t('Child'),
      'parent' => t('Parent'),
      'concatenate' => t('Concatenated'),
    ),
    '#default_value' => variable_get('islandora_social_metatags_compound_title', 'concatenate'),
  );
  $form['islandora_social_metatags_compound_title_delimiter'] = array(
    '#type' => 'textfield',
    '#title' => t('Compound Object Title Concatenation Delimiter'),
    '#description' => t('If displaying both the parent and child title, what characters should delimit them? <em>(No quotes, html tags or special characters permitted.)</em>'),
    '#default_value' => variable_get('islandora_social_metatags_compound_title_delimiter', ': '),
  );
  $form['islandora_social_metatags_compound_abstract'] = array(
    '#type' => 'select',
    '#title' => t('Compound Object Abstract Preference'),
    '#description' => t('On all child objects, use either the Parent\'s abstract, the Child\'s abstract, or concatenate both. If choosing Child, the first child object\'s abstract will be used when viewing the parent object.'),
    '#options' => array(
      'child' => t('Child'),
      'parent' => t('Parent'),
      'concatenate' => t('Both'),
    ),
    '#default_value' => variable_get('islandora_social_metatags_compound_abstract', 'concatenate'),
  );
  $form['islandora_social_metatags_compound_abstract_delimiter'] = array(
    '#type' => 'textfield',
    '#title' => t('Compound Object Abstract Concatenation Delimiter'),
    '#description' => t('If displaying both the parent and child abstract, what characters should delimit them? <em>(No quotes, html tags or special characters permitted.)</em>'),
    '#default_value' => variable_get('islandora_social_metatags_compound_abstract_delimiter', ' :: '),
  );

  return system_settings_form($form);
}
