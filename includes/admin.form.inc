<?php
/**
 * @file
 * Admin form functions for Islandora Altmetrics.
 */
/**
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
    '#description' => t('MODS XPath for retrieving the abstract.'),
    '#default_value' => variable_get('islandora_twitter_cards_abstract_xpath', '/mods:mods/mods:titleInfo/mods:abstract'),
  );
  
  $form['islandora_twitter_cards_twitter_user'] = array(
    '#type' => 'textfield',
    '#title' => t('Site Twitter user'),
    '#description' => t('The Twitter handle for your site or admin. Required. Must begin with @'),
    '#default_value' => variable_get('islandora_twitter_cards_twitter_user', '@nobody'),
  );
}
