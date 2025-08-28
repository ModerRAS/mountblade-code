#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part255.c - 核心引擎组件初始化和资源管理

// 函数: 初始化引擎组件并管理资源
// 原函数名: FUN_18021fbb0
void initialize_engine_components(longlong engine_context)

{
  uint64_t temp_var1;
  uint64_t *temp_ptr2;
  int8_t temp_buffer_168 [32];
  int32_t stack_val_148;
  int32_t stack_val_140;
  int32_t stack_val_138;
  int32_t stack_val_130;
  int32_t stack_val_128;
  uint64_t stack_val_120;
  int8_t stack_val_118;
  int32_t stack_val_110;
  longlong *resource_ptr_108;
  longlong *resource_ptr_100;
  longlong *resource_ptr_f8;
  uint64_t stack_val_f0;
  void *resource_ptr_e8;
  int8_t *resource_ptr_e0;
  int32_t stack_val_d8;
  int8_t temp_buffer_d0 [72];
  void *resource_ptr_88;
  int8_t *resource_ptr_80;
  int32_t stack_val_78;
  int8_t temp_buffer_70 [72];
  ulonglong checksum_val_28;
  
  // 初始化栈变量
  stack_val_f0 = 0xfffffffffffffffe;
  checksum_val_28 = ENGINE_DATA_CHECKSUM ^ (ulonglong)temp_buffer_168;
  resource_ptr_e8 = &ENGINE_RESOURCE_TABLE;
  resource_ptr_e0 = temp_buffer_d0;
  temp_buffer_d0[0] = 0;
  stack_val_d8 = 9;
  strcpy_s(temp_buffer_d0,0x40,&RESOURCE_NAME_TEXTURE);
  stack_val_110 = 1;
  stack_val_118 = 0;
  stack_val_120 = 0;
  stack_val_128 = 1;
  stack_val_130 = 0x6d0;
  stack_val_138 = 0;
  stack_val_140 = 3;
  stack_val_148 = 0x220;
  temp_ptr2 = (uint64_t *)get_engine_state();
  temp_var1 = *temp_ptr2;
  *temp_ptr2 = 0;
  resource_ptr_100 = *(longlong **)(engine_context + 0x1c70);
  *(uint64_t *)(engine_context + 0x1c70) = temp_var1;
  if (resource_ptr_100 != (longlong *)0x0) {
    (**(code **)(*resource_ptr_100 + 0x38))();
  }
  if (resource_ptr_f8 != (longlong *)0x0) {
    (**(code **)(*resource_ptr_f8 + 0x38))();
  }
  resource_ptr_e8 = &ENGINE_CALLBACK_TABLE;
  resource_ptr_88 = &ENGINE_RESOURCE_TABLE;
  resource_ptr_80 = temp_buffer_70;
  temp_buffer_70[0] = 0;
  stack_val_78 = 0xd;
  strcpy_s(temp_buffer_70,0x40,&RESOURCE_NAME_SHADER);
  stack_val_110 = 1;
  stack_val_118 = 0;
  stack_val_120 = 0;
  stack_val_128 = 1;
  stack_val_130 = 0x210;
  stack_val_138 = 0;
  stack_val_140 = 3;
  stack_val_148 = 0x220;
  temp_ptr2 = (uint64_t *)get_engine_state();
  temp_var1 = *temp_ptr2;
  *temp_ptr2 = 0;
  resource_ptr_100 = *(longlong **)(engine_context + 0x1cb8);
  *(uint64_t *)(engine_context + 0x1cb8) = temp_var1;
  if (resource_ptr_100 != (longlong *)0x0) {
    (**(code **)(*resource_ptr_100 + 0x38))();
  }
  if (resource_ptr_108 != (longlong *)0x0) {
    (**(code **)(*resource_ptr_108 + 0x38))();
  }
  resource_ptr_88 = &ENGINE_CALLBACK_TABLE;
  resource_ptr_e8 = &ENGINE_RESOURCE_TABLE;
  resource_ptr_e0 = temp_buffer_d0;
  temp_buffer_d0[0] = 0;
  stack_val_d8 = 0x14;
  strcpy_s(temp_buffer_d0,0x40,&RESOURCE_NAME_MEMORY);
  stack_val_110 = 1;
  stack_val_118 = 0;
  stack_val_120 = 0;
  stack_val_128 = 1;
  stack_val_130 = 0x1000;
  stack_val_138 = 0;
  stack_val_140 = 3;
  stack_val_148 = 0x220;
  temp_ptr2 = (uint64_t *)get_engine_state();
  temp_var1 = *temp_ptr2;
  *temp_ptr2 = 0;
  resource_ptr_f8 = *(longlong **)(engine_context + 0x1c78);
  *(uint64_t *)(engine_context + 0x1c78) = temp_var1;
  if (resource_ptr_f8 != (longlong *)0x0) {
    (**(code **)(*resource_ptr_f8 + 0x38))();
  }
  if (resource_ptr_100 != (longlong *)0x0) {
    (**(code **)(*resource_ptr_100 + 0x38))();
  }
  resource_ptr_e8 = &ENGINE_CALLBACK_TABLE;
  resource_ptr_88 = &ENGINE_RESOURCE_TABLE;
  resource_ptr_80 = temp_buffer_70;
  temp_buffer_70[0] = 0;
  stack_val_78 = 0x1c;
  strcpy_s(temp_buffer_70,0x40,&RESOURCE_NAME_AUDIO);
  stack_val_110 = 1;
  stack_val_118 = 0;
  stack_val_120 = 0;
  stack_val_128 = 1;
  stack_val_130 = 0x140;
  stack_val_138 = 0;
  stack_val_140 = 3;
  stack_val_148 = 0x220;
  temp_ptr2 = (uint64_t *)get_engine_state();
  temp_var1 = *temp_ptr2;
  *temp_ptr2 = 0;
  resource_ptr_108 = *(longlong **)(engine_context + 0x1cb0);
  *(uint64_t *)(engine_context + 0x1cb0) = temp_var1;
  if (resource_ptr_108 != (longlong *)0x0) {
    (**(code **)(*resource_ptr_108 + 0x38))();
  }
  if (resource_ptr_f8 != (longlong *)0x0) {
    (**(code **)(*resource_ptr_f8 + 0x38))();
  }
  resource_ptr_88 = &ENGINE_CALLBACK_TABLE;
  resource_ptr_e8 = &ENGINE_RESOURCE_TABLE;
  resource_ptr_e0 = temp_buffer_d0;
  temp_buffer_d0[0] = 0;
  stack_val_d8 = 0x10;
  strcpy_s(temp_buffer_d0,0x40,&RESOURCE_NAME_PHYSICS);
  stack_val_110 = 1;
  stack_val_118 = 0;
  stack_val_120 = 0;
  stack_val_128 = 1;
  stack_val_130 = 0x200;
  stack_val_138 = 0;
  stack_val_140 = 3;
  stack_val_148 = 0x220;
  temp_ptr2 = (uint64_t *)get_engine_state();
  temp_var1 = *temp_ptr2;
  *temp_ptr2 = 0;
  resource_ptr_108 = *(longlong **)(engine_context + 0x1c80);
  *(uint64_t *)(engine_context + 0x1c80) = temp_var1;
  if (resource_ptr_108 != (longlong *)0x0) {
    (**(code **)(*resource_ptr_108 + 0x38))();
  }
  if (resource_ptr_100 != (longlong *)0x0) {
    (**(code **)(*resource_ptr_100 + 0x38))();
  }
  resource_ptr_e8 = &ENGINE_CALLBACK_TABLE;
  resource_ptr_88 = &ENGINE_RESOURCE_TABLE;
  resource_ptr_80 = temp_buffer_70;
  temp_buffer_70[0] = 0;
  stack_val_78 = 10;
  strcpy_s(temp_buffer_70,0x40,&RESOURCE_NAME_NETWORK);
  stack_val_110 = 1;
  stack_val_118 = 0;
  stack_val_120 = 0;
  stack_val_128 = 1;
  stack_val_130 = 0x230;
  stack_val_138 = 0;
  stack_val_140 = 3;
  stack_val_148 = 0x220;
  temp_ptr2 = (uint64_t *)get_engine_state();
  temp_var1 = *temp_ptr2;
  *temp_ptr2 = 0;
  resource_ptr_108 = *(longlong **)(engine_context + 0x1c88);
  *(uint64_t *)(engine_context + 0x1c88) = temp_var1;
  if (resource_ptr_108 != (longlong *)0x0) {
    (**(code **)(*resource_ptr_108 + 0x38))();
  }
  if (resource_ptr_f8 != (longlong *)0x0) {
    (**(code **)(*resource_ptr_f8 + 0x38))();
  }
  resource_ptr_88 = &ENGINE_CALLBACK_TABLE;
  resource_ptr_e8 = &ENGINE_RESOURCE_TABLE;
  resource_ptr_e0 = temp_buffer_d0;
  temp_buffer_d0[0] = 0;
  stack_val_d8 = 0xf;
  strcpy_s(temp_buffer_d0,0x40,&RESOURCE_NAME_SCRIPT);
  stack_val_110 = 1;
  stack_val_118 = 0;
  stack_val_120 = 0;
  stack_val_128 = 1;
  stack_val_130 = 0x8000;
  stack_val_138 = 0;
  stack_val_140 = 3;
  stack_val_148 = 0x220;
  temp_ptr2 = (uint64_t *)get_engine_state();
  temp_var1 = *temp_ptr2;
  *temp_ptr2 = 0;
  resource_ptr_108 = *(longlong **)(engine_context + 0x1c90);
  *(uint64_t *)(engine_context + 0x1c90) = temp_var1;
  if (resource_ptr_108 != (longlong *)0x0) {
    (**(code **)(*resource_ptr_108 + 0x38))();
  }
  if (resource_ptr_100 != (longlong *)0x0) {
    (**(code **)(*resource_ptr_100 + 0x38))();
  }
  resource_ptr_e8 = &ENGINE_CALLBACK_TABLE;
  resource_ptr_88 = &ENGINE_RESOURCE_TABLE;
  resource_ptr_80 = temp_buffer_70;
  temp_buffer_70[0] = 0;
  stack_val_78 = 0xb;
  strcpy_s(temp_buffer_70,0x40,&RESOURCE_NAME_UI);
  stack_val_110 = 1;
  stack_val_118 = 0;
  stack_val_120 = 0;
  stack_val_128 = 1;
  stack_val_130 = 0x70;
  stack_val_138 = 0;
  stack_val_140 = 3;
  stack_val_148 = 0x220;
  temp_ptr2 = (uint64_t *)get_engine_state();
  temp_var1 = *temp_ptr2;
  *temp_ptr2 = 0;
  resource_ptr_108 = *(longlong **)(engine_context + 0x1ca0);
  *(uint64_t *)(engine_context + 0x1ca0) = temp_var1;
  if (resource_ptr_108 != (longlong *)0x0) {
    (**(code **)(*resource_ptr_108 + 0x38))();
  }
  if (resource_ptr_f8 != (longlong *)0x0) {
    (**(code **)(*resource_ptr_f8 + 0x38))();
  }
  resource_ptr_88 = &ENGINE_CALLBACK_TABLE;
  resource_ptr_e8 = &ENGINE_RESOURCE_TABLE;
  resource_ptr_e0 = temp_buffer_d0;
  temp_buffer_d0[0] = 0;
  stack_val_d8 = 0xe;
  strcpy_s(temp_buffer_d0,0x40,&RESOURCE_NAME_INPUT);
  stack_val_110 = 1;
  stack_val_118 = 0;
  stack_val_120 = 0;
  stack_val_128 = 1;
  stack_val_130 = 0x6000;
  stack_val_138 = 0;
  stack_val_140 = 3;
  stack_val_148 = 0x220;
  temp_ptr2 = (uint64_t *)get_engine_state();
  temp_var1 = *temp_ptr2;
  *temp_ptr2 = 0;
  resource_ptr_108 = *(longlong **)(engine_context + 0x1c98);
  *(uint64_t *)(engine_context + 0x1c98) = temp_var1;
  if (resource_ptr_108 != (longlong *)0x0) {
    (**(code **)(*resource_ptr_108 + 0x38))();
  }
  if (resource_ptr_100 != (longlong *)0x0) {
    (**(code **)(*resource_ptr_100 + 0x38))();
  }
  resource_ptr_e8 = &ENGINE_CALLBACK_TABLE;
  resource_ptr_88 = &ENGINE_RESOURCE_TABLE;
  resource_ptr_80 = temp_buffer_70;
  temp_buffer_70[0] = 0;
  stack_val_78 = 9;
  strcpy_s(temp_buffer_70,0x40,&RESOURCE_NAME_SCENE);
  stack_val_110 = 1;
  stack_val_118 = 0;
  stack_val_120 = 0;
  stack_val_128 = 1;
  stack_val_130 = 0x80;
  stack_val_138 = 0;
  stack_val_140 = 3;
  stack_val_148 = 0x220;
  temp_ptr2 = (uint64_t *)get_engine_state();
  temp_var1 = *temp_ptr2;
  *temp_ptr2 = 0;
  resource_ptr_108 = *(longlong **)(engine_context + 0x1ca8);
  *(uint64_t *)(engine_context + 0x1ca8) = temp_var1;
  if (resource_ptr_108 != (longlong *)0x0) {
    (**(code **)(*resource_ptr_108 + 0x38))();
  }
  if (resource_ptr_f8 != (longlong *)0x0) {
    (**(code **)(*resource_ptr_f8 + 0x38))();
  }
  resource_ptr_88 = &ENGINE_CALLBACK_TABLE;
  resource_ptr_e8 = &ENGINE_RESOURCE_TABLE;
  resource_ptr_e0 = temp_buffer_d0;
  temp_buffer_d0[0] = 0;
  stack_val_d8 = 0x16;
  strcpy_s(temp_buffer_d0,0x40,&RESOURCE_NAME_DATABASE);
  stack_val_110 = 1;
  stack_val_118 = 0;
  stack_val_120 = 0;
  stack_val_128 = 1;
  stack_val_130 = 0x30;
  stack_val_138 = 0;
  stack_val_140 = 3;
  stack_val_148 = 0x220;
  temp_ptr2 = (uint64_t *)get_engine_state();
  temp_var1 = *temp_ptr2;
  *temp_ptr2 = 0;
  resource_ptr_108 = *(longlong **)(engine_context + 0x1cc8);
  *(uint64_t *)(engine_context + 0x1cc8) = temp_var1;
  if (resource_ptr_108 != (longlong *)0x0) {
    (**(code **)(*resource_ptr_108 + 0x38))();
  }
  if (resource_ptr_100 != (longlong *)0x0) {
    (**(code **)(*resource_ptr_100 + 0x38))();
  }
  resource_ptr_e8 = &ENGINE_CALLBACK_TABLE;
  resource_ptr_88 = &ENGINE_RESOURCE_TABLE;
  resource_ptr_80 = temp_buffer_70;
  temp_buffer_70[0] = 0;
  stack_val_78 = 0x14;
  strcpy_s(temp_buffer_70,0x40,&RESOURCE_NAME_SAVEGAME);
  stack_val_110 = 1;
  stack_val_118 = 0;
  stack_val_120 = 0;
  stack_val_128 = 1;
  stack_val_130 = 0xe0;
  stack_val_138 = 0;
  stack_val_140 = 3;
  stack_val_148 = 0x220;
  temp_ptr2 = (uint64_t *)get_engine_state();
  temp_var1 = *temp_ptr2;
  *temp_ptr2 = 0;
  resource_ptr_108 = *(longlong **)(engine_context + 0x1cc0);
  *(uint64_t *)(engine_context + 0x1cc0) = temp_var1;
  if (resource_ptr_108 != (longlong *)0x0) {
    (**(code **)(*resource_ptr_108 + 0x38))();
  }
  if (resource_ptr_f8 != (longlong *)0x0) {
    (**(code **)(*resource_ptr_f8 + 0x38))();
  }
  resource_ptr_88 = &ENGINE_CALLBACK_TABLE;
  resource_ptr_e8 = &ENGINE_RESOURCE_TABLE;
  resource_ptr_e0 = temp_buffer_d0;
  temp_buffer_d0[0] = 0;
  stack_val_d8 = 0x1a;
  strcpy_s(temp_buffer_d0,0x40,&RESOURCE_NAME_DEBUG);
  stack_val_110 = 1;
  stack_val_118 = 0;
  stack_val_120 = 0;
  stack_val_128 = 1;
  stack_val_130 = 0x1a00;
  stack_val_138 = 0;
  stack_val_140 = 3;
  stack_val_148 = 0x220;
  temp_ptr2 = (uint64_t *)get_engine_state();
  temp_var1 = *temp_ptr2;
  *temp_ptr2 = 0;
  resource_ptr_108 = *(longlong **)(engine_context + 0x1cd0);
  *(uint64_t *)(engine_context + 0x1cd0) = temp_var1;
  if (resource_ptr_108 != (longlong *)0x0) {
    (**(code **)(*resource_ptr_108 + 0x38))();
  }
  if (resource_ptr_100 != (longlong *)0x0) {
    (**(code **)(*resource_ptr_100 + 0x38))();
  }
  resource_ptr_e8 = &ENGINE_CALLBACK_TABLE;
                    // WARNING: Subroutine does not return
  finalize_engine_initialization(checksum_val_28 ^ (ulonglong)temp_buffer_168);
}


// 函数: 启动引擎系统
// 原函数名: FUN_180220810
void start_engine_system(void)

{
                    // WARNING: Subroutine does not return
  execute_engine_startup();
}

/* 
 * 简化实现说明：
 * 原始实现包含复杂的原始代码，包括多个资源管理器的初始化和回调函数调用。
 * 简化实现使用了更有意义的变量名和函数名，保留了核心功能结构。
 * 
 * 原始实现中的关键部分：
 * - FUN_18021fbb0: 复杂的资源管理器初始化，包括纹理、着色器、内存等
 * - FUN_180220810: 简单的引擎启动函数
 * 
 * 简化实现改进：
 * - 使用描述性变量名替换DAT_和UNK_前缀
 * - 添加了中文注释说明功能
 * - 保持了原有的代码结构和逻辑流程
 */