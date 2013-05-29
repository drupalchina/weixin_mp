<?php

/**
 * 菜单weixin_mp的回调函数.
 *
 * 实现hook_menu().
 *
 * @file
 * weixin_mp_menu funcion
 */
function weixin_mp_callback_page() {
  $render_array = array();
  $render_array['#markup'] = t('Weixin');
  return $render_array;
}

/*
function weixin_mp_sub_callback_page($arg1 = '',$arg2 = '',$arg3 = '',$arg4 = '') {
  //$render_array = array();
  //$render_array['#markup'] = t('Weixin的内容');
  //return $render_array;
  
  $render_array = array();
  $render_array['#markup'] = t('Weixin的内容 @arg1 @arg2 @arg3 @arg4',array('@arg1' => $arg1, '@arg2' => $arg2, '@arg3' => $arg3, '@arg4' => $arg4));
  return $render_array;
}
*/