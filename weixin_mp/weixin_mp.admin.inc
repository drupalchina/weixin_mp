<?php

/**
 * Form builder; 
 *
 * @ingroup forms
 * @see system_settings_form()
 */
function weixin_mp_admin_settings() {
  $form['weixin_mp_url'] = array(
    '#type' => 'textfield',
    '#title' => t('URL'),
    '#description' => t('请填写接口的URL，请阅读 !keylink 。',
      array('!keylink' => l(t('消息接口使用指南'), 
      'http://mp.weixin.qq.com/wiki/index.php?title=%E6%B6%88%E6%81%AF%E6%8E%A5%E5%8F%A3%E6%8C%87%E5%8D%97', 
      array('attributes' => array('target' => '_blank'))
    ))),
    '#default_value' => variable_get('weixin_mp_url', ''),
  );
   
  $form['weixin_mp_token'] = array(
    '#type' => 'textfield',
    '#title' => t('Token'),
    '#description' => t('请填写接口的Token。'),
    '#default_value' => variable_get('weixin_mp_token', ''),
  );
 
  return system_settings_form($form);
}