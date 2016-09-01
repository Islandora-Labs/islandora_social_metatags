<?php
/**
 * @file
 * Admin form for Islandora Twitter Cards
 */
function islandora_twitter_cards_admin_form($form, $form_settings) {
  $form['islandora_twitter_cards_title_xpath'] = array(
    '#type' => 'textfield',
    '#title' => t('Title XPath'),
    '#description' => t('MODS XPath for retrieving the title.'),
    '#default_value' => variable_get('islandora_twitter_cards_title_xpath', '/mods:mods/mods:titleInfo/mods:title'),
  );
  
  $form['islandora_twitter_cards_abstract_xpath'] = array(
    '#type' => 'textfield',
    '#title' => t('Abstract XPath'),
    '#description' => t('MODS XPath for the Description field. Defaults to mods:abstract.'),
    '#default_value' => variable_get('islandora_twitter_cards_abstract_xpath', '/mods:mods/mods:abstract'),
  );
  
  $form['islandora_twitter_cards_twitter_user'] = array(
    '#type' => 'textfield',
    '#title' => t('Site Twitter user'),
    '#description' => t('The Twitter handle for your site or admin. Required. Must begin with @'),
    '#default_value' => variable_get('islandora_twitter_cards_twitter_user', '@nobody'),
  );
  $form['islandora_twitter_cards_no_description'] = array(
    '#type' => 'textfield',
    '#title' => t('No Description message'),
    '#description' => t('The message to use if no abstract or other desciption element is present.'),
    '#default_value' => variable_get('islandora_twitter_cards_no_description', 'No description given.'),
  );
  $form['islandora_twitter_cards_largeimage_datastream'] = array(
    '#type' => 'textfield',
    '#title' => t('Large Image Datastream'),
    '#description' => t('Image datastream to use for Large Image objects'),
    '#default_value' => variable_get('islandora_twitter_cards_largeimage_datastream', 'JPG'),
  );
  $form['islandora_twitter_cards_basicimage_datastream'] = array(
    '#type' => 'textfield',
    '#title' => t('Basic Image Datastream'),
    '#description' => t('Image datastream to use for Basic Image objects'),
    '#default_value' => variable_get('islandora_twitter_cards_basicimage_datastream', 'MEDIUM_SIZE'),
  );
  $form['islandora_twitter_cards_video_datastream'] = array(
    '#type' => 'textfield',
    '#title' => t('Video image datastream'),
    '#description' => t('Image datastream to use for Video objects'),
    '#default_value' => variable_get('islandora_twitter_cards_video_datastream', 'TN'),
  );
  $form['islandora_twitter_cards_citation_datastream'] = array(
    '#type' => 'textfield',
    '#title' => t('Citation image datastream'),
    '#description' => t('Image datastream to use for Citation objects'),
    '#default_value' => variable_get('islandora_twitter_cards_citation_datastream', 'PREVIEW'),
  );
  $form['islandora_twitter_cards_thesis_datastream'] = array(
    '#type' => 'textfield',
    '#title' => t('Thesis image datastream'),
    '#description' => t('Image datastream to use for Thesis objects'),
    '#default_value' => variable_get('islandora_twitter_cards_thesis_datastream', 'PREVIEW'),
  );
  return system_settings_form($form);
}
