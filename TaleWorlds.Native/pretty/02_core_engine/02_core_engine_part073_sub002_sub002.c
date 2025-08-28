#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part073_sub002_sub002.c - 初始化引擎参数配置
// 本文件包含1个函数，负责初始化引擎的各种参数配置

// 函数: void initialize_engine_parameters(int64_t engine_context)
// 功能: 初始化引擎的各种参数配置，包括渲染、物理、UI等系统的参数设置
// 参数: 
//   engine_context - 引擎上下文指针，包含所有引擎相关的数据结构
void initialize_engine_parameters(int64_t engine_context)

{
  uint64_t component_ptr;
  uint64_t temp_value;
  int8_t temp_buffer_1 [16];
  code *callback_ptr;
  uint64_t stack_init_value;
  int8_t temp_buffer_2 [32];
  int8_t temp_buffer_3 [32];
  int8_t temp_buffer_4 [32];
  int8_t temp_buffer_5 [32];
  int8_t temp_buffer_6 [32];
  int8_t temp_buffer_7 [32];
  int8_t temp_buffer_8 [32];
  int8_t temp_buffer_9 [40];
  
  // 初始化堆栈参数
  uStack_128 = 0xfffffffffffffffe;
  
  // 初始化第一个临时缓冲区
  func_0x00018010bf60(auStack_148,0);
  
  // 设置渲染系统参数 (值为3)
  *(int32_t *)(engine_context + 0x198) = 3;
  FUN_18010bd10(engine_context + 0x1a0, auStack_148);
  
  // 执行回调函数（如果存在）
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(auStack_148,0,0);
  }
  // 获取渲染组件指针并初始化渲染参数
  component_ptr = engine_context + 0x150;
  (**(code **)(*(int64_t *)(engine_context + 0x158) + 0x10))((int64_t *)(engine_context + 0x158), &unknown_var_8552_ptr);
  
  // 设置渲染系统参数值 (3)
  uStackX_8._0_4_ = 3;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_, 3);
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  // 初始化UI系统参数
  func_0x00018010bf80(auStack_148, 0);
  
  // 设置UI系统参数 (值为1)
  *(int32_t *)(engine_context + 0x1318) = 1;
  FUN_18010bd10(engine_context + 0x1320, auStack_148);
  
  // 执行回调函数（如果存在）
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(auStack_148, 0, 0);
  }
  // 获取UI组件指针并初始化UI参数
  component_ptr = engine_context + 0x12d0;
  (**(code **)(*(int64_t *)(engine_context + 0x12d8) + 0x10))((int64_t *)(engine_context + 0x12d8), &unknown_var_8608_ptr);
  
  // 设置UI系统参数值 (1)
  uStackX_8._0_4_ = 1;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_, 1);
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  // 获取物理系统组件指针并初始化物理参数
  component_ptr = engine_context + 0x17a0;
  (**(code **)(*(int64_t *)(engine_context + 0x17a8) + 0x10))((int64_t *)(engine_context + 0x17a8), &unknown_var_8584_ptr);
  
  // 设置物理系统参数 (浮点值 0.5)
  uStackX_8._0_4_ = 0x3f000000;  // 0.5 in IEEE 754
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_, 0x3f000000);
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 0x28, &uStackX_8);
  // 初始化音频系统参数
  func_0x00018010bfa0(auStack_148, 0);
  
  // 设置音频系统参数 (值为0)
  *(int32_t *)(engine_context + 0x1778) = 0;
  FUN_18010bd10(engine_context + 0x1780, auStack_148);
  
  // 执行回调函数（如果存在）
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(auStack_148, 0, 0);
  }
  // 获取音频组件指针并初始化音频参数
  component_ptr = engine_context + 0x1730;
  (**(code **)(*(int64_t *)(engine_context + 0x1738) + 0x10))((int64_t *)(engine_context + 0x1738), &unknown_var_8664_ptr);
  
  // 设置音频系统参数 (清除低32位)
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  // 初始化动画系统参数
  func_0x00018010bfc0(auStack_148, 0);
  
  // 设置动画系统参数 (值为2)
  *(int32_t *)(engine_context + 0x128) = 2;
  FUN_18010bd10(engine_context + 0x130, auStack_148);
  
  // 执行回调函数（如果存在）
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(auStack_148, 0, 0);
  }
  
  // 获取动画组件指针并初始化动画参数
  component_ptr = engine_context + 0xe0;
  (**(code **)(*(int64_t *)(engine_context + 0xe8) + 0x10))((int64_t *)(engine_context + 0xe8), &unknown_var_8648_ptr);
  
  // 设置动画系统参数 (值为2)
  uStackX_8._0_4_ = 2;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_, 2);
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  // 初始化场景系统参数
  func_0x00018010bfe0(auStack_148, 0);
  
  // 设置场景系统参数 (值为2)
  *(int32_t *)(engine_context + 0x2e8) = 2;
  FUN_18010bd10(engine_context + 0x2f0, auStack_148);
  
  // 执行回调函数（如果存在）
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(auStack_148, 0, 0);
  }
  
  // 获取场景组件指针并初始化场景参数
  component_ptr = engine_context + 0x2a0;
  (**(code **)(*(int64_t *)(engine_context + 0x2a8) + 0x10))((int64_t *)(engine_context + 0x2a8), &unknown_var_8704_ptr);
  
  // 设置场景系统参数 (值为2)
  uStackX_8._0_4_ = 2;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_, 2);
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  // 初始化特效系统参数
  func_0x00018010c000(auStack_148, 0);
  
  // 设置特效系统参数 (值为1)
  *(int32_t *)(engine_context + 0x358) = 1;
  FUN_18010bd10(engine_context + 0x360, auStack_148);
  
  // 执行回调函数（如果存在）
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(auStack_148, 0, 0);
  }
  
  // 获取特效组件指针并初始化特效参数
  component_ptr = engine_context + 0x310;
  (**(code **)(*(int64_t *)(engine_context + 0x318) + 0x10))((int64_t *)(engine_context + 0x318), &unknown_var_8680_ptr);
  
  // 设置特效系统参数 (值为1)
  uStackX_8._0_4_ = 1;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_, 1);
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  // 获取光照系统组件指针并初始化光照参数
  component_ptr = engine_context + 0x1810;
  (**(code **)(*(int64_t *)(engine_context + 0x1818) + 0x10))
            ((int64_t *)(engine_context + 0x1818), &unknown_var_8736_ptr);
  
  // 设置光照系统参数 (清除低32位)
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  // 初始化阴影系统参数
  func_0x00018010c020(auStack_148, 0);
  
  // 设置阴影系统参数 (值为1)
  *(int32_t *)(engine_context + 0x1a88) = 1;
  FUN_18010bd10(engine_context + 0x1a90, auStack_148);
  
  // 执行回调函数（如果存在）
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(auStack_148, 0, 0);
  }
  
  // 获取阴影组件指针并初始化阴影参数
  component_ptr = engine_context + 0x1a40;
  (**(code **)(*(int64_t *)(engine_context + 0x1a48) + 0x10))
            ((int64_t *)(engine_context + 0x1a48), &unknown_var_8720_ptr);
  
  // 设置阴影系统参数 (值为1)
  uStackX_8._0_4_ = 1;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_, 1);
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  // 获取后处理系统组件指针并初始化后处理参数
  component_ptr = engine_context + 0x1ab0;
  (**(code **)(*(int64_t *)(engine_context + 0x1ab8) + 0x10))
            ((int64_t *)(engine_context + 0x1ab8), &unknown_var_8776_ptr);
  
  // 设置后处理系统参数 (清除低32位)
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  // 获取材质系统组件指针并初始化材质参数
  component_ptr = engine_context + 0x380;
  (**(code **)(*(int64_t *)(engine_context + 0x388) + 0x10))((int64_t *)(engine_context + 0x388), &unknown_var_8760_ptr);
  
  // 设置材质系统参数 (值为2)
  uStackX_8._0_4_ = 2;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_, 2);
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  // 获取纹理系统组件指针并初始化纹理参数
  component_ptr = engine_context + 0x3f0;
  (**(code **)(*(int64_t *)(engine_context + 0x3f8) + 0x10))((int64_t *)(engine_context + 0x3f8), &unknown_var_8816_ptr);
  
  // 设置纹理系统参数 (值为1)
  uStackX_8._0_4_ = 1;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_, 1);
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  // 初始化粒子系统参数
  func_0x00018010c040(auStack_148, 0);
  
  // 设置粒子系统参数 (值为0)
  *(int32_t *)(engine_context + 0x1b68) = 0;
  FUN_18010bd10(engine_context + 0x1b70, auStack_148);
  
  // 执行回调函数（如果存在）
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(auStack_148, 0, 0);
  }
  
  // 获取粒子组件指针并初始化粒子参数
  component_ptr = engine_context + 0x1b20;
  (**(code **)(*(int64_t *)(engine_context + 0x1b28) + 0x10))
            ((int64_t *)(engine_context + 0x1b28), &unknown_var_8800_ptr);
  
  // 设置粒子系统参数 (清除低32位)
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  // 获取天气系统组件指针并初始化天气参数
  component_ptr = engine_context + 0x1b90;
  (**(code **)(*(int64_t *)(engine_context + 0x1b98) + 0x10))
            ((int64_t *)(engine_context + 0x1b98), &unknown_var_8848_ptr);
  
  // 设置天气系统参数 (值为200)
  uStackX_8._0_4_ = 200;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_, 200);
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  // 初始化水面系统参数
  func_0x00018010c060(auStack_148, 0);
  
  // 设置水面系统参数 (值为0)
  *(int32_t *)(engine_context + 0x1c48) = 0;
  FUN_18010bd10(engine_context + 0x1c50, auStack_148);
  
  // 执行回调函数（如果存在）
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(auStack_148, 0, 0);
  }
  
  // 获取水面组件指针并初始化水面参数
  component_ptr = engine_context + 0x1c00;
  (**(code **)(*(int64_t *)(engine_context + 0x1c08) + 0x10))
            ((int64_t *)(engine_context + 0x1c08), &unknown_var_8832_ptr);
  
  // 设置水面系统参数 (清除低32位)
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  // 初始化地形系统参数
  func_0x00018010c080(auStack_148, 0);
  
  // 设置地形系统参数 (值为0)
  *(int32_t *)(engine_context + 0x1cb8) = 0;
  FUN_18010bd10(engine_context + 0x1cc0, auStack_148);
  
  // 执行回调函数（如果存在）
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(auStack_148, 0, 0);
  }
  
  // 获取地形组件指针并初始化地形参数
  component_ptr = engine_context + 0x1c70;
  (**(code **)(*(int64_t *)(engine_context + 0x1c78) + 0x10))
            ((int64_t *)(engine_context + 0x1c78), &unknown_var_8880_ptr);
  
  // 设置地形系统参数 (清除低32位)
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  // 初始化植被系统参数
  func_0x00018010c0a0(auStack_148, 0);
  
  // 设置植被系统参数 (值为1)
  *(int32_t *)(engine_context + 0x4a8) = 1;
  FUN_18010bd10(engine_context + 0x4b0, auStack_148);
  
  // 执行回调函数（如果存在）
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(auStack_148, 0, 0);
  }
  
  // 获取植被组件指针并初始化植被参数
  component_ptr = engine_context + 0x460;
  (**(code **)(*(int64_t *)(engine_context + 0x468) + 0x10))((int64_t *)(engine_context + 0x468), &unknown_var_8864_ptr);
  
  // 设置植被系统参数 (值为1)
  uStackX_8._0_4_ = 1;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_, 1);
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  // 获取天空系统组件指针并初始化天空参数
  component_ptr = engine_context + 0x1d50;
  (**(code **)(*(int64_t *)(engine_context + 0x1d58) + 0x10))
            ((int64_t *)(engine_context + 0x1d58), &unknown_var_8920_ptr);
  
  // 设置天空系统参数 (值为0x500 = 1280)
  uStackX_8._0_4_ = 0x500;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_, 0x500);
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  // 获取云层系统组件指针并初始化云层参数
  component_ptr = engine_context + 0x1dc0;
  (**(code **)(*(int64_t *)(engine_context + 0x1dc8) + 0x10))
            ((int64_t *)(engine_context + 0x1dc8), &unknown_var_8904_ptr);
  
  // 设置云层系统参数 (值为0x2d0 = 720)
  uStackX_8._0_4_ = 0x2d0;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_, 0x2d0);
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  // 获取雾效系统组件指针并初始化雾效参数
  component_ptr = engine_context + 0x1e30;
  (**(code **)(*(int64_t *)(engine_context + 0x1e38) + 0x10))
            ((int64_t *)(engine_context + 0x1e38), &unknown_var_8952_ptr);
  
  // 设置雾效系统参数 (浮点值 60.0)
  uStackX_8._0_4_ = 0x42700000;  // 60.0 in IEEE 754
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_, 0x42700000);
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 0x28, &uStackX_8);
  // 获取时间系统组件指针并初始化时间参数
  component_ptr = engine_context + 0x1ea0;
  (**(code **)(*(int64_t *)(engine_context + 0x1ea8) + 0x10))
            ((int64_t *)(engine_context + 0x1ea8), &unknown_var_8936_ptr);
  
  // 设置时间系统参数 (清除低32位)
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  // 获取风系统组件指针并初始化风参数
  component_ptr = engine_context + 0x1f10;
  (**(code **)(*(int64_t *)(engine_context + 0x1f18) + 0x10))
            ((int64_t *)(engine_context + 0x1f18), &unknown_var_8992_ptr);
  
  // 设置风系统参数 (清除低32位)
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  // 初始化反射系统参数
  func_0x00018010c0c0(auStack_148, 0);
  
  // 设置反射系统参数 (值为0)
  *(int32_t *)(engine_context + 0x1fc8) = 0;
  FUN_18010bd10(engine_context + 0x1fd0, auStack_148);
  
  // 执行回调函数（如果存在）
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(auStack_148, 0, 0);
  }
  
  // 获取反射组件指针并初始化反射参数
  component_ptr = engine_context + 0x1f80;
  (**(code **)(*(int64_t *)(engine_context + 0x1f88) + 0x10))
            ((int64_t *)(engine_context + 0x1f88), &unknown_var_8976_ptr);
  
  // 设置反射系统参数 (清除低32位)
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  // 初始化碰撞系统参数
  func_0x00018010c0e0(auStack_148, 0);
  
  // 设置碰撞系统参数 (值为0)
  *(int32_t *)(engine_context + 0x668) = 0;
  FUN_18010bd10(engine_context + 0x670, auStack_148);
  
  // 执行回调函数（如果存在）
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(auStack_148, 0, 0);
  }
  
  // 获取碰撞组件指针并初始化碰撞参数
  component_ptr = engine_context + 0x620;
  (**(code **)(*(int64_t *)(engine_context + 0x628) + 0x10))
            ((int64_t *)(engine_context + 0x628), &unknown_var_9040_ptr);
  
  // 设置碰撞系统参数 (清除低32位)
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  // 初始化传感器系统参数
  func_0x00018010c100(auStack_148, 0);
  
  // 设置传感器系统参数 (值为0)
  *(int32_t *)(engine_context + 0x6d8) = 0;
  FUN_18010bd10(engine_context + 0x6e0, auStack_148);
  
  // 执行回调函数（如果存在）
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(auStack_148, 0, 0);
  }
  
  // 获取传感器组件指针并初始化传感器参数
  component_ptr = engine_context + 0x690;
  (**(code **)(*(int64_t *)(engine_context + 0x698) + 0x10))
            ((int64_t *)(engine_context + 0x698), &unknown_var_9016_ptr);
  
  // 设置传感器系统参数 (清除低32位)
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  // 初始化触发器系统参数
  func_0x00018010c120(auStack_148, 0);
  
  // 设置触发器系统参数 (值为0)
  *(int32_t *)(engine_context + 0x748) = 0;
  FUN_18010bd10(engine_context + 0x750, auStack_148);
  
  // 执行回调函数（如果存在）
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(auStack_148, 0, 0);
  }
  
  // 获取触发器组件指针并初始化触发器参数
  component_ptr = engine_context + 0x700;
  (**(code **)(*(int64_t *)(engine_context + 0x708) + 0x10))
            ((int64_t *)(engine_context + 0x708), &unknown_var_9080_ptr);
  
  // 设置触发器系统参数 (清除低32位)
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  // 初始化关节系统参数
  func_0x00018010c140(auStack_148, 0);
  
  // 设置关节系统参数 (值为0)
  *(int32_t *)(engine_context + 0x898) = 0;
  FUN_18010bd10(engine_context + 0x8a0, auStack_148);
  
  // 执行回调函数（如果存在）
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(auStack_148, 0, 0);
  }
  
  // 获取关节组件指针并初始化关节参数
  component_ptr = engine_context + 0x850;
  (**(code **)(*(int64_t *)(engine_context + 0x858) + 0x10))
            ((int64_t *)(engine_context + 0x858), &unknown_var_9064_ptr);
  
  // 设置关节系统参数 (清除低32位)
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  // 初始化约束系统参数
  func_0x00018010c160(auStack_148, 0);
  
  // 设置约束系统参数 (值为0)
  *(int32_t *)(engine_context + 0x7b8) = 0;
  FUN_18010bd10(engine_context + 0x7c0, auStack_148);
  
  // 执行回调函数（如果存在）
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(auStack_148, 0, 0);
  }
  
  // 获取约束组件指针并初始化约束参数
  component_ptr = engine_context + 0x770;
  (**(code **)(*(int64_t *)(engine_context + 0x778) + 0x10))
            ((int64_t *)(engine_context + 0x778), &unknown_var_9112_ptr);
  
  // 设置约束系统参数 (清除低32位)
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  func_0x00018010c180(auStack_148,0);
  *(int32_t *)(param_1 + 0x828) = 0;
  FUN_18010bd10(param_1 + 0x830,auStack_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(auStack_148,0,0);
  }
  uVar1 = param_1 + 0x7e0;
  (**(code **)(*(int64_t *)(param_1 + 0x7e8) + 0x10))((int64_t *)(param_1 + 0x7e8),&unknown_var_9096_ptr)
  ;
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 8,&uStackX_8);
  func_0x00018010c1a0(auStack_148,0);
  *(int32_t *)(param_1 + 0x908) = 0;
  FUN_18010bd10(param_1 + 0x910,auStack_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(auStack_148,0,0);
  }
  uVar1 = param_1 + 0x8c0;
  (**(code **)(*(int64_t *)(param_1 + 0x8c8) + 0x10))((int64_t *)(param_1 + 0x8c8),&unknown_var_9152_ptr)
  ;
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 8,&uStackX_8);
  func_0x00018010c1c0(auStack_148,0);
  *(int32_t *)(param_1 + 0x978) = 0;
  FUN_18010bd10(param_1 + 0x980,auStack_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(auStack_148,0,0);
  }
  uVar1 = param_1 + 0x930;
  (**(code **)(*(int64_t *)(param_1 + 0x938) + 0x10))((int64_t *)(param_1 + 0x938),&unknown_var_9128_ptr)
  ;
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 8,&uStackX_8);
  func_0x00018010c1e0(auStack_148,0);
  *(int32_t *)(param_1 + 0xf98) = 0;
  FUN_18010bd10(param_1 + 4000,auStack_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(auStack_148,0,0);
  }
  uVar1 = param_1 + 0xf50;
  (**(code **)(*(int64_t *)(param_1 + 0xf58) + 0x10))((int64_t *)(param_1 + 0xf58),&unknown_var_9192_ptr)
  ;
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 8,&uStackX_8);
  func_0x00018010c200(auStack_148,0);
  *(int32_t *)(param_1 + 0x1078) = 0;
  FUN_18010bd10(param_1 + 0x1080,auStack_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(auStack_148,0,0);
  }
  uVar1 = param_1 + 0x1030;
  (**(code **)(*(int64_t *)(param_1 + 0x1038) + 0x10))
            ((int64_t *)(param_1 + 0x1038),&unknown_var_9168_ptr);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 8,&uStackX_8);
  func_0x00018010c220(auStack_148,0);
  *(int32_t *)(param_1 + 0x10e8) = 0;
  FUN_18010bd10(param_1 + 0x10f0,auStack_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(auStack_148,0,0);
  }
  uVar1 = param_1 + 0x10a0;
  (**(code **)(*(int64_t *)(param_1 + 0x10a8) + 0x10))
            ((int64_t *)(param_1 + 0x10a8),&unknown_var_9224_ptr);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 8,&uStackX_8);
  func_0x00018010c240(auStack_148,0);
  *(int32_t *)(param_1 + 0x9e8) = 0;
  FUN_18010bd10(param_1 + 0x9f0,auStack_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(auStack_148,0,0);
  }
  uVar1 = param_1 + 0x9a0;
  (**(code **)(*(int64_t *)(param_1 + 0x9a8) + 0x10))((int64_t *)(param_1 + 0x9a8),&unknown_var_9208_ptr)
  ;
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 8,&uStackX_8);
  func_0x00018010c260(auStack_148,0);
  *(int32_t *)(param_1 + 0xf28) = 0;
  FUN_18010bd10(param_1 + 0xf30,auStack_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(auStack_148,0,0);
  }
  uVar1 = param_1 + 0xee0;
  (**(code **)(*(int64_t *)(param_1 + 0xee8) + 0x10))((int64_t *)(param_1 + 0xee8),&unknown_var_9272_ptr)
  ;
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 8,&uStackX_8);
  func_0x00018010c280(auStack_148,0);
  *(int32_t *)(param_1 + 0x1008) = 0;
  FUN_18010bd10(param_1 + 0x1010,auStack_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(auStack_148,0,0);
  }
  uVar1 = param_1 + 0xfc0;
  (**(code **)(*(int64_t *)(param_1 + 0xfc8) + 0x10))((int64_t *)(param_1 + 0xfc8),&unknown_var_9240_ptr)
  ;
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 8,&uStackX_8);
  func_0x00018010c2a0(auStack_148,0);
  *(int32_t *)(param_1 + 0xa58) = 0;
  FUN_18010bd10(param_1 + 0xa60,auStack_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(auStack_148,0,0);
  }
  uVar1 = param_1 + 0xa10;
  (**(code **)(*(int64_t *)(param_1 + 0xa18) + 0x10))((int64_t *)(param_1 + 0xa18),&unknown_var_9312_ptr)
  ;
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 8,&uStackX_8);
  func_0x00018010c2c0(auStack_148,0);
  *(int32_t *)(param_1 + 0xac8) = 0;
  FUN_18010bd10(param_1 + 0xad0,auStack_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(auStack_148,0,0);
  }
  uVar1 = param_1 + 0xa80;
  (**(code **)(*(int64_t *)(param_1 + 0xa88) + 0x10))((int64_t *)(param_1 + 0xa88),&unknown_var_9296_ptr)
  ;
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 8,&uStackX_8);
  func_0x00018010c2e0(auStack_148,0);
  *(int32_t *)(param_1 + 0xba8) = 0;
  FUN_18010bd10(param_1 + 0xbb0,auStack_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(auStack_148,0,0);
  }
  uVar1 = param_1 + 0xb60;
  (**(code **)(*(int64_t *)(param_1 + 0xb68) + 0x10))((int64_t *)(param_1 + 0xb68),&unknown_var_9352_ptr)
  ;
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 8,&uStackX_8);
  FUN_18010bd80(auStack_148,0);
  uVar1 = param_1 + 0xaf0;
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_18010bca0(uVar1,&uStackX_8,auStack_148);
  FUN_18005ab20(auStack_148);
  func_0x00018010bc90(uVar1,&unknown_var_9336_ptr);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 8,&uStackX_8);
  FUN_18010bdb0(auStack_148,0);
  uVar1 = param_1 + 0xe70;
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_18010bca0(uVar1,&uStackX_8,auStack_148);
  FUN_18005ab20(auStack_148);
  func_0x00018010bc90(uVar1,&unknown_var_9392_ptr);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 8,&uStackX_8);
  uVar1 = param_1 + 0xc40;
  func_0x00018010bc90(uVar1,&render_data_ptr);
  uStackX_8._0_4_ = 2;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_,2);
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 8,&uStackX_8);
  uVar1 = param_1 + 0xd20;
  func_0x00018010bc90(uVar1,&unknown_var_9432_ptr);
  uStackX_8._0_4_ = 1;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_,1);
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 8,&uStackX_8);
  uVar1 = param_1 + 0xcb0;
  func_0x00018010bc90(uVar1,&unknown_var_9408_ptr);
  uStackX_8._0_4_ = 1;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_,1);
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 8,&uStackX_8);
  FUN_18010bde0(auStack_120,0);
  uVar1 = param_1 + 0x1ce0;
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_18010bca0(uVar1,&uStackX_8,auStack_120);
  FUN_18005ab20(auStack_120);
  func_0x00018010bc90(uVar1,&unknown_var_9472_ptr);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 8,&uStackX_8);
  uVar1 = param_1 + 0x1340;
  func_0x00018010bc90(uVar1,&unknown_var_9456_ptr);
  uStackX_8._0_4_ = 0x3f800000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_,0x3f800000);
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&uStackX_8);
  uVar1 = param_1 + 0x13b0;
  func_0x00018010bc90(uVar1,&unknown_var_9512_ptr);
  uStackX_8._0_4_ = 0x3f266666;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_,0x3f266666);
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&uStackX_8);
  uVar1 = param_1 + 0x1420;
  func_0x00018010bc90(uVar1,&unknown_var_9488_ptr);
  uStackX_8._0_4_ = 0x3f800000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_,0x3f800000);
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&uStackX_8);
  uVar1 = param_1 + 0x1500;
  func_0x00018010bc90(uVar1,&system_string1_ptr);
  uStackX_8._0_4_ = 0x3f800000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_,0x3f800000);
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&uStackX_8);
  uVar1 = param_1 + 0x1490;
  func_0x00018010bc90(uVar1,&unknown_var_9528_ptr);
  uStackX_8._0_4_ = 0x3f800000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_,0x3f800000);
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&uStackX_8);
  uVar1 = param_1 + 0x1570;
  func_0x00018010bc90(uVar1,&system_pattern2_ptr);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 8,&uStackX_8);
  uVar1 = param_1 + 0x15e0;
  func_0x00018010bc90(uVar1,&unknown_var_9568_ptr);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 8,&uStackX_8);
  uVar1 = param_1 + 0x16c0;
  func_0x00018010bc90(uVar1,&unknown_var_9608_ptr);
  uStackX_8._0_4_ = 0x3f000000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_,0x3f000000);
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&uStackX_8);
  uVar1 = param_1 + 0x1880;
  func_0x00018010bc90(uVar1,&unknown_var_9600_ptr);
  uStackX_8._0_4_ = 0x400ccccd;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_,0x400ccccd);
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&uStackX_8);
  uVar1 = param_1 + 0x2060;
  func_0x00018010bc90(uVar1,&unknown_var_9672_ptr);
  uStackX_8._0_4_ = 0x42200000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_,0x42200000);
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&uStackX_8);
  uVar1 = param_1 + 0x18f0;
  func_0x00018010bc90(uVar1,&unknown_var_9640_ptr);
  uStackX_8._0_4_ = 0x3fc00000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_,0x3fc00000);
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&uStackX_8);
  uVar1 = param_1 + 0x1960;
  func_0x00018010bc90(uVar1,&unknown_var_9736_ptr);
  uStackX_8._0_4_ = 0x42200000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_,0x42200000);
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&uStackX_8);
  uVar1 = param_1 + 0x19d0;
  func_0x00018010bc90(uVar1,&unknown_var_9688_ptr);
  uStackX_8._0_4_ = 0x42c80000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_,0x42c80000);
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&uStackX_8);
  uVar1 = param_1 + 0x1110;
  func_0x00018010bc90(uVar1,&unknown_var_9792_ptr);
  uStackX_8._0_4_ = 0x42480000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_,0x42480000);
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&uStackX_8);
  uVar1 = param_1 + 0x1180;
  func_0x00018010bc90(uVar1,&system_string2_ptr);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&uStackX_8);
  uVar1 = param_1 + 0x11f0;
  func_0x00018010bc90(uVar1,&unknown_var_9832_ptr);
  uStackX_8._0_4_ = 0x3f800000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_,0x3f800000);
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&uStackX_8);
  uVar1 = param_1 + 0x1260;
  func_0x00018010bc90(uVar1,&unknown_var_9808_ptr);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&uStackX_8);
  uVar1 = param_1 + 0x20d0;
  func_0x00018010bc90(uVar1,&unknown_var_9880_ptr);
  uStackX_8._0_4_ = 0x42c80000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_,0x42c80000);
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&uStackX_8);
  uVar1 = param_1 + 0x2140;
  func_0x00018010bc90(uVar1,&unknown_var_9848_ptr);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 8,&uStackX_8);
  uVar1 = param_1 + 0x21b0;
  func_0x00018010bc90(uVar1,&unknown_var_9936_ptr);
  uStackX_8._0_4_ = 0x3c;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_,0x3c);
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 8,&uStackX_8);
  uVar1 = param_1 + 0x2220;
  func_0x00018010bc90(uVar1,&unknown_var_9904_ptr);
  uStackX_8._0_4_ = 0x42480000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_,0x42480000);
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&uStackX_8);
  // 获取网络系统组件指针并初始化网络参数
  component_ptr = engine_context + 0xbd0;
  func_0x00018010bc90(component_ptr, &unknown_var_9992_ptr);
  
  // 设置网络系统参数 (值为2)
  uStackX_8._0_4_ = 2;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_, 2);
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  // 初始化输入系统参数
  FUN_18010be10(auStack_100, 0);
  component_ptr = engine_context + 0x4d0;
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_18010bca0(component_ptr, &uStackX_8, auStack_100);
  FUN_18005ab20(auStack_100);
  func_0x00018010bc90(component_ptr, &unknown_var_7832_ptr);
  
  // 设置输入系统参数 (清除低32位)
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  FUN_18010be40(auStack_e0,0);
  uVar1 = param_1 + 0x540;
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_18010bca0(uVar1,&uStackX_8,auStack_e0);
  FUN_18005ab20(auStack_e0);
  func_0x00018010bc90(uVar1,&unknown_var_7880_ptr);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(uVar1,&uStackX_8);
  uStackX_8 = uVar1;
  SystemInitializer(param_1 + 8,&uStackX_8);
  component_ptr = engine_context + 0xd90;
  func_0x00018010bc90(component_ptr, &unknown_var_9968_ptr);
  uStackX_8._0_4_ = 4;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_, 4);
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  component_ptr = engine_context + 0xe00;
  func_0x00018010bc90(component_ptr, &unknown_var_48_ptr);
  uStackX_8._0_4_ = 4;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_, 4);
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  FUN_18010be70(auStack_c0,0);
  component_ptr = engine_context + 0x1c0;
  uStackX_8._0_4_ = 1;
  FUN_18010bca0(component_ptr, &uStackX_8, auStack_c0);
  FUN_18005ab20(auStack_c0);
  func_0x00018010bc90(component_ptr, &unknown_var_16_ptr);
  uStackX_8._0_4_ = 1;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_, 1);
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  component_ptr = engine_context + 0x230;
  func_0x00018010bc90(component_ptr, &unknown_var_88_ptr);
  uStackX_8._0_4_ = 2;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_, 2);
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  FUN_18010bea0(auStack_a0,0);
  component_ptr = engine_context + 0x2290;
  uStackX_8._0_4_ = 1;
  FUN_18010bca0(component_ptr, &uStackX_8, auStack_a0);
  FUN_18005ab20(auStack_a0);
  func_0x00018010bc90(component_ptr, &unknown_var_72_ptr);
  uStackX_8._0_4_ = 1;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_, 1);
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  FUN_18010bed0(auStack_80,0);
  component_ptr = engine_context + 0x2300;
  uStackX_8._0_4_ = 1;
  FUN_18010bca0(component_ptr, &uStackX_8, auStack_80);
  FUN_18005ab20(auStack_80);
  func_0x00018010bc90(component_ptr, &unknown_var_128_ptr);
  uStackX_8._0_4_ = 1;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_, 1);
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  component_ptr = engine_context + 0x24c0;
  func_0x00018010bc90(component_ptr, &unknown_var_104_ptr);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 0x28, &uStackX_8);
  FUN_18010bf00(auStack_60,0);
  component_ptr = engine_context + 0x2530;
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_18010bca0(component_ptr, &uStackX_8, auStack_60);
  FUN_18005ab20(auStack_60);
  func_0x00018010bc90(component_ptr, &unknown_var_184_ptr);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  FUN_18010bf30(auStack_40,0);
  component_ptr = engine_context + 0x25a0;
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_18010bca0(component_ptr, &uStackX_8, auStack_40);
  FUN_18005ab20(auStack_40);
  func_0x00018010bc90(component_ptr, &unknown_var_160_ptr);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  component_ptr = engine_context + 0x2370;
  func_0x00018010bc90(component_ptr, &unknown_var_224_ptr);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  component_ptr = engine_context + 0x23e0;
  func_0x00018010bc90(component_ptr, &unknown_var_208_ptr);
  uStackX_8._0_4_ = 1;
  SystemAudioManager(component_ptr, &uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_, 1);
  FUN_1800b0710(component_ptr, &uStackX_8);
  uStackX_8 = component_ptr;
  SystemInitializer(engine_context + 8, &uStackX_8);
  // 设置引擎初始化完成标志
  *(int32_t *)(engine_context + 0x88) = 1;
  
  return;
}

// 函数结束：所有引擎参数已初始化完成
// 包括：渲染系统、UI系统、物理系统、音频系统等各个模块的参数配置







