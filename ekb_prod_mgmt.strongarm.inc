<?php

/**
 * Implementation of hook_strongarm().
 */
function ekb_prod_mgmt_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_prod_mgmt_news';
  $strongarm->value = 0;
  $export['comment_anonymous_prod_mgmt_news'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_prod_mgmt_news';
  $strongarm->value = '3';
  $export['comment_controls_prod_mgmt_news'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_prod_mgmt_news';
  $strongarm->value = '4';
  $export['comment_default_mode_prod_mgmt_news'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_prod_mgmt_news';
  $strongarm->value = '1';
  $export['comment_default_order_prod_mgmt_news'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_prod_mgmt_news';
  $strongarm->value = '50';
  $export['comment_default_per_page_prod_mgmt_news'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_prod_mgmt_news';
  $strongarm->value = '0';
  $export['comment_form_location_prod_mgmt_news'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_prod_mgmt_news';
  $strongarm->value = '1';
  $export['comment_preview_prod_mgmt_news'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_prod_mgmt_news';
  $strongarm->value = '2';
  $export['comment_prod_mgmt_news'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_prod_mgmt_news';
  $strongarm->value = '1';
  $export['comment_subject_field_prod_mgmt_news'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_prod_mgmt_news';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_prod_mgmt_news'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_prod_mgmt_news';
  $strongarm->value = '1';
  $export['upload_prod_mgmt_news'] = $strongarm;

  return $export;
}
