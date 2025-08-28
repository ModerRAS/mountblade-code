#include "TaleWorlds.Native.Split.h"
// 02_core_engine_part073_sub002_sub002.c - 1 个函数
// 函数: void function_105630(int64_t param_1)
void function_105630(int64_t param_1)
{
  uint64_t uVar1;
  uint64_t stack_special_x_8;
  int8_t stack_array_148 [16];
  code *pcStack_138;
  uint64_t local_var_128;
  int8_t stack_array_120 [32];
  int8_t stack_array_100 [32];
  int8_t stack_array_e0 [32];
  int8_t stack_array_c0 [32];
  int8_t stack_array_a0 [32];
  int8_t stack_array_80 [32];
  int8_t stack_array_60 [32];
  int8_t stack_array_40 [40];
  local_var_128 = 0xfffffffffffffffe;
  SystemFunction_00018010bf60(stack_array_148,0);
  *(int32_t *)(param_1 + 0x198) = 3;
  CoreEngine_StateManager(param_1 + 0x1a0,stack_array_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(stack_array_148,0,0);
  }
  uVar1 = param_1 + 0x150;
  (**(code **)(*(int64_t *)(param_1 + 0x158) + 0x10))((int64_t *)(param_1 + 0x158),&processed_var_8552_ptr)
  ;
  stack_special_x_8._0_4_ = 3;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,3);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  SystemFunction_00018010bf80(stack_array_148,0);
  *(int32_t *)(param_1 + 0x1318) = 1;
  CoreEngine_StateManager(param_1 + 0x1320,stack_array_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(stack_array_148,0,0);
  }
  uVar1 = param_1 + 0x12d0;
  (**(code **)(*(int64_t *)(param_1 + 0x12d8) + 0x10))
            ((int64_t *)(param_1 + 0x12d8),&processed_var_8608_ptr);
  stack_special_x_8._0_4_ = 1;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,1);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  uVar1 = param_1 + 0x17a0;
  (**(code **)(*(int64_t *)(param_1 + 0x17a8) + 0x10))
            ((int64_t *)(param_1 + 0x17a8),&processed_var_8584_ptr);
  stack_special_x_8._0_4_ = 0x3f000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,0x3f000000);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&stack_special_x_8);
  SystemFunction_00018010bfa0(stack_array_148,0);
  *(int32_t *)(param_1 + 0x1778) = 0;
  CoreEngine_StateManager(param_1 + 0x1780,stack_array_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(stack_array_148,0,0);
  }
  uVar1 = param_1 + 0x1730;
  (**(code **)(*(int64_t *)(param_1 + 0x1738) + 0x10))
            ((int64_t *)(param_1 + 0x1738),&processed_var_8664_ptr);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  SystemFunction_00018010bfc0(stack_array_148,0);
  *(int32_t *)(param_1 + 0x128) = 2;
  CoreEngine_StateManager(param_1 + 0x130,stack_array_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(stack_array_148,0,0);
  }
  uVar1 = param_1 + 0xe0;
  (**(code **)(*(int64_t *)(param_1 + 0xe8) + 0x10))((int64_t *)(param_1 + 0xe8),&processed_var_8648_ptr);
  stack_special_x_8._0_4_ = 2;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,2);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  SystemFunction_00018010bfe0(stack_array_148,0);
  *(int32_t *)(param_1 + 0x2e8) = 2;
  CoreEngine_StateManager(param_1 + 0x2f0,stack_array_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(stack_array_148,0,0);
  }
  uVar1 = param_1 + 0x2a0;
  (**(code **)(*(int64_t *)(param_1 + 0x2a8) + 0x10))((int64_t *)(param_1 + 0x2a8),&processed_var_8704_ptr)
  ;
  stack_special_x_8._0_4_ = 2;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,2);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  SystemFunction_00018010c000(stack_array_148,0);
  *(int32_t *)(param_1 + 0x358) = 1;
  CoreEngine_StateManager(param_1 + 0x360,stack_array_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(stack_array_148,0,0);
  }
  uVar1 = param_1 + 0x310;
  (**(code **)(*(int64_t *)(param_1 + 0x318) + 0x10))((int64_t *)(param_1 + 0x318),&processed_var_8680_ptr)
  ;
  stack_special_x_8._0_4_ = 1;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,1);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  uVar1 = param_1 + 0x1810;
  (**(code **)(*(int64_t *)(param_1 + 0x1818) + 0x10))
            ((int64_t *)(param_1 + 0x1818),&processed_var_8736_ptr);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  SystemFunction_00018010c020(stack_array_148,0);
  *(int32_t *)(param_1 + 0x1a88) = 1;
  CoreEngine_StateManager(param_1 + 0x1a90,stack_array_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(stack_array_148,0,0);
  }
  uVar1 = param_1 + 0x1a40;
  (**(code **)(*(int64_t *)(param_1 + 0x1a48) + 0x10))
            ((int64_t *)(param_1 + 0x1a48),&processed_var_8720_ptr);
  stack_special_x_8._0_4_ = 1;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,1);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  uVar1 = param_1 + 0x1ab0;
  (**(code **)(*(int64_t *)(param_1 + 0x1ab8) + 0x10))
            ((int64_t *)(param_1 + 0x1ab8),&processed_var_8776_ptr);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  uVar1 = param_1 + 0x380;
  (**(code **)(*(int64_t *)(param_1 + 0x388) + 0x10))((int64_t *)(param_1 + 0x388),&processed_var_8760_ptr)
  ;
  stack_special_x_8._0_4_ = 2;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,2);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  uVar1 = param_1 + 0x3f0;
  (**(code **)(*(int64_t *)(param_1 + 0x3f8) + 0x10))((int64_t *)(param_1 + 0x3f8),&processed_var_8816_ptr)
  ;
  stack_special_x_8._0_4_ = 1;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,1);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  SystemFunction_00018010c040(stack_array_148,0);
  *(int32_t *)(param_1 + 0x1b68) = 0;
  CoreEngine_StateManager(param_1 + 0x1b70,stack_array_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(stack_array_148,0,0);
  }
  uVar1 = param_1 + 0x1b20;
  (**(code **)(*(int64_t *)(param_1 + 0x1b28) + 0x10))
            ((int64_t *)(param_1 + 0x1b28),&processed_var_8800_ptr);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  uVar1 = param_1 + 0x1b90;
  (**(code **)(*(int64_t *)(param_1 + 0x1b98) + 0x10))
            ((int64_t *)(param_1 + 0x1b98),&processed_var_8848_ptr);
  stack_special_x_8._0_4_ = 200;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,200);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  SystemFunction_00018010c060(stack_array_148,0);
  *(int32_t *)(param_1 + 0x1c48) = 0;
  CoreEngine_StateManager(param_1 + 0x1c50,stack_array_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(stack_array_148,0,0);
  }
  uVar1 = param_1 + 0x1c00;
  (**(code **)(*(int64_t *)(param_1 + 0x1c08) + 0x10))
            ((int64_t *)(param_1 + 0x1c08),&processed_var_8832_ptr);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  SystemFunction_00018010c080(stack_array_148,0);
  *(int32_t *)(param_1 + 0x1cb8) = 0;
  CoreEngine_StateManager(param_1 + 0x1cc0,stack_array_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(stack_array_148,0,0);
  }
  uVar1 = param_1 + 0x1c70;
  (**(code **)(*(int64_t *)(param_1 + 0x1c78) + 0x10))
            ((int64_t *)(param_1 + 0x1c78),&processed_var_8880_ptr);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  SystemFunction_00018010c0a0(stack_array_148,0);
  *(int32_t *)(param_1 + 0x4a8) = 1;
  CoreEngine_StateManager(param_1 + 0x4b0,stack_array_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(stack_array_148,0,0);
  }
  uVar1 = param_1 + 0x460;
  (**(code **)(*(int64_t *)(param_1 + 0x468) + 0x10))((int64_t *)(param_1 + 0x468),&processed_var_8864_ptr)
  ;
  stack_special_x_8._0_4_ = 1;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,1);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  uVar1 = param_1 + 0x1d50;
  (**(code **)(*(int64_t *)(param_1 + 0x1d58) + 0x10))
            ((int64_t *)(param_1 + 0x1d58),&processed_var_8920_ptr);
  stack_special_x_8._0_4_ = 0x500;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,0x500);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  uVar1 = param_1 + 0x1dc0;
  (**(code **)(*(int64_t *)(param_1 + 0x1dc8) + 0x10))
            ((int64_t *)(param_1 + 0x1dc8),&processed_var_8904_ptr);
  stack_special_x_8._0_4_ = 0x2d0;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,0x2d0);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  uVar1 = param_1 + 0x1e30;
  (**(code **)(*(int64_t *)(param_1 + 0x1e38) + 0x10))
            ((int64_t *)(param_1 + 0x1e38),&processed_var_8952_ptr);
  stack_special_x_8._0_4_ = 0x42700000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,0x42700000);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&stack_special_x_8);
  uVar1 = param_1 + 0x1ea0;
  (**(code **)(*(int64_t *)(param_1 + 0x1ea8) + 0x10))
            ((int64_t *)(param_1 + 0x1ea8),&processed_var_8936_ptr);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  uVar1 = param_1 + 0x1f10;
  (**(code **)(*(int64_t *)(param_1 + 0x1f18) + 0x10))
            ((int64_t *)(param_1 + 0x1f18),&processed_var_8992_ptr);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  SystemFunction_00018010c0c0(stack_array_148,0);
  *(int32_t *)(param_1 + 0x1fc8) = 0;
  CoreEngine_StateManager(param_1 + 0x1fd0,stack_array_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(stack_array_148,0,0);
  }
  uVar1 = param_1 + 0x1f80;
  (**(code **)(*(int64_t *)(param_1 + 0x1f88) + 0x10))
            ((int64_t *)(param_1 + 0x1f88),&processed_var_8976_ptr);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  SystemFunction_00018010c0e0(stack_array_148,0);
  *(int32_t *)(param_1 + 0x668) = 0;
  CoreEngine_StateManager(param_1 + 0x670,stack_array_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(stack_array_148,0,0);
  }
  uVar1 = param_1 + 0x620;
  (**(code **)(*(int64_t *)(param_1 + 0x628) + 0x10))((int64_t *)(param_1 + 0x628),&processed_var_9040_ptr)
  ;
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  SystemFunction_00018010c100(stack_array_148,0);
  *(int32_t *)(param_1 + 0x6d8) = 0;
  CoreEngine_StateManager(param_1 + 0x6e0,stack_array_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(stack_array_148,0,0);
  }
  uVar1 = param_1 + 0x690;
  (**(code **)(*(int64_t *)(param_1 + 0x698) + 0x10))((int64_t *)(param_1 + 0x698),&processed_var_9016_ptr)
  ;
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  SystemFunction_00018010c120(stack_array_148,0);
  *(int32_t *)(param_1 + 0x748) = 0;
  CoreEngine_StateManager(param_1 + 0x750,stack_array_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(stack_array_148,0,0);
  }
  uVar1 = param_1 + 0x700;
  (**(code **)(*(int64_t *)(param_1 + 0x708) + 0x10))((int64_t *)(param_1 + 0x708),&processed_var_9080_ptr)
  ;
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  SystemFunction_00018010c140(stack_array_148,0);
  *(int32_t *)(param_1 + 0x898) = 0;
  CoreEngine_StateManager(param_1 + 0x8a0,stack_array_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(stack_array_148,0,0);
  }
  uVar1 = param_1 + 0x850;
  (**(code **)(*(int64_t *)(param_1 + 0x858) + 0x10))((int64_t *)(param_1 + 0x858),&processed_var_9064_ptr)
  ;
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  SystemFunction_00018010c160(stack_array_148,0);
  *(int32_t *)(param_1 + 0x7b8) = 0;
  CoreEngine_StateManager(param_1 + 0x7c0,stack_array_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(stack_array_148,0,0);
  }
  uVar1 = param_1 + 0x770;
  (**(code **)(*(int64_t *)(param_1 + 0x778) + 0x10))((int64_t *)(param_1 + 0x778),&processed_var_9112_ptr)
  ;
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  SystemFunction_00018010c180(stack_array_148,0);
  *(int32_t *)(param_1 + 0x828) = 0;
  CoreEngine_StateManager(param_1 + 0x830,stack_array_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(stack_array_148,0,0);
  }
  uVar1 = param_1 + 0x7e0;
  (**(code **)(*(int64_t *)(param_1 + 0x7e8) + 0x10))((int64_t *)(param_1 + 0x7e8),&processed_var_9096_ptr)
  ;
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  SystemFunction_00018010c1a0(stack_array_148,0);
  *(int32_t *)(param_1 + 0x908) = 0;
  CoreEngine_StateManager(param_1 + 0x910,stack_array_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(stack_array_148,0,0);
  }
  uVar1 = param_1 + 0x8c0;
  (**(code **)(*(int64_t *)(param_1 + 0x8c8) + 0x10))((int64_t *)(param_1 + 0x8c8),&processed_var_9152_ptr)
  ;
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  SystemFunction_00018010c1c0(stack_array_148,0);
  *(int32_t *)(param_1 + 0x978) = 0;
  CoreEngine_StateManager(param_1 + 0x980,stack_array_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(stack_array_148,0,0);
  }
  uVar1 = param_1 + 0x930;
  (**(code **)(*(int64_t *)(param_1 + 0x938) + 0x10))((int64_t *)(param_1 + 0x938),&processed_var_9128_ptr)
  ;
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  SystemFunction_00018010c1e0(stack_array_148,0);
  *(int32_t *)(param_1 + 0xf98) = 0;
  CoreEngine_StateManager(param_1 + 4000,stack_array_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(stack_array_148,0,0);
  }
  uVar1 = param_1 + 0xf50;
  (**(code **)(*(int64_t *)(param_1 + 0xf58) + 0x10))((int64_t *)(param_1 + 0xf58),&processed_var_9192_ptr)
  ;
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  SystemFunction_00018010c200(stack_array_148,0);
  *(int32_t *)(param_1 + 0x1078) = 0;
  CoreEngine_StateManager(param_1 + 0x1080,stack_array_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(stack_array_148,0,0);
  }
  uVar1 = param_1 + 0x1030;
  (**(code **)(*(int64_t *)(param_1 + 0x1038) + 0x10))
            ((int64_t *)(param_1 + 0x1038),&processed_var_9168_ptr);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  SystemFunction_00018010c220(stack_array_148,0);
  *(int32_t *)(param_1 + 0x10e8) = 0;
  CoreEngine_StateManager(param_1 + 0x10f0,stack_array_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(stack_array_148,0,0);
  }
  uVar1 = param_1 + 0x10a0;
  (**(code **)(*(int64_t *)(param_1 + 0x10a8) + 0x10))
            ((int64_t *)(param_1 + 0x10a8),&processed_var_9224_ptr);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  SystemFunction_00018010c240(stack_array_148,0);
  *(int32_t *)(param_1 + 0x9e8) = 0;
  CoreEngine_StateManager(param_1 + 0x9f0,stack_array_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(stack_array_148,0,0);
  }
  uVar1 = param_1 + 0x9a0;
  (**(code **)(*(int64_t *)(param_1 + 0x9a8) + 0x10))((int64_t *)(param_1 + 0x9a8),&processed_var_9208_ptr)
  ;
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  SystemFunction_00018010c260(stack_array_148,0);
  *(int32_t *)(param_1 + 0xf28) = 0;
  CoreEngine_StateManager(param_1 + 0xf30,stack_array_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(stack_array_148,0,0);
  }
  uVar1 = param_1 + 0xee0;
  (**(code **)(*(int64_t *)(param_1 + 0xee8) + 0x10))((int64_t *)(param_1 + 0xee8),&processed_var_9272_ptr)
  ;
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  SystemFunction_00018010c280(stack_array_148,0);
  *(int32_t *)(param_1 + 0x1008) = 0;
  CoreEngine_StateManager(param_1 + 0x1010,stack_array_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(stack_array_148,0,0);
  }
  uVar1 = param_1 + 0xfc0;
  (**(code **)(*(int64_t *)(param_1 + 0xfc8) + 0x10))((int64_t *)(param_1 + 0xfc8),&processed_var_9240_ptr)
  ;
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  SystemFunction_00018010c2a0(stack_array_148,0);
  *(int32_t *)(param_1 + 0xa58) = 0;
  CoreEngine_StateManager(param_1 + 0xa60,stack_array_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(stack_array_148,0,0);
  }
  uVar1 = param_1 + 0xa10;
  (**(code **)(*(int64_t *)(param_1 + 0xa18) + 0x10))((int64_t *)(param_1 + 0xa18),&processed_var_9312_ptr)
  ;
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  SystemFunction_00018010c2c0(stack_array_148,0);
  *(int32_t *)(param_1 + 0xac8) = 0;
  CoreEngine_StateManager(param_1 + 0xad0,stack_array_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(stack_array_148,0,0);
  }
  uVar1 = param_1 + 0xa80;
  (**(code **)(*(int64_t *)(param_1 + 0xa88) + 0x10))((int64_t *)(param_1 + 0xa88),&processed_var_9296_ptr)
  ;
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  SystemFunction_00018010c2e0(stack_array_148,0);
  *(int32_t *)(param_1 + 0xba8) = 0;
  CoreEngine_StateManager(param_1 + 0xbb0,stack_array_148);
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(stack_array_148,0,0);
  }
  uVar1 = param_1 + 0xb60;
  (**(code **)(*(int64_t *)(param_1 + 0xb68) + 0x10))((int64_t *)(param_1 + 0xb68),&processed_var_9352_ptr)
  ;
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  function_10bd80(stack_array_148,0);
  uVar1 = param_1 + 0xaf0;
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  function_10bca0(uVar1,&stack_special_x_8,stack_array_148);
  function_05ab20(stack_array_148);
  SystemFunction_00018010bc90(uVar1,&processed_var_9336_ptr);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  function_10bdb0(stack_array_148,0);
  uVar1 = param_1 + 0xe70;
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  function_10bca0(uVar1,&stack_special_x_8,stack_array_148);
  function_05ab20(stack_array_148);
  SystemFunction_00018010bc90(uVar1,&processed_var_9392_ptr);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  uVar1 = param_1 + 0xc40;
  SystemFunction_00018010bc90(uVar1,&render_data_ptr);
  stack_special_x_8._0_4_ = 2;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,2);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  uVar1 = param_1 + 0xd20;
  SystemFunction_00018010bc90(uVar1,&processed_var_9432_ptr);
  stack_special_x_8._0_4_ = 1;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,1);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  uVar1 = param_1 + 0xcb0;
  SystemFunction_00018010bc90(uVar1,&processed_var_9408_ptr);
  stack_special_x_8._0_4_ = 1;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,1);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  function_10bde0(stack_array_120,0);
  uVar1 = param_1 + 0x1ce0;
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  function_10bca0(uVar1,&stack_special_x_8,stack_array_120);
  function_05ab20(stack_array_120);
  SystemFunction_00018010bc90(uVar1,&processed_var_9472_ptr);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  uVar1 = param_1 + 0x1340;
  SystemFunction_00018010bc90(uVar1,&processed_var_9456_ptr);
  stack_special_x_8._0_4_ = 0x3f800000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,0x3f800000);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&stack_special_x_8);
  uVar1 = param_1 + 0x13b0;
  SystemFunction_00018010bc90(uVar1,&processed_var_9512_ptr);
  stack_special_x_8._0_4_ = 0x3f266666;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,0x3f266666);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&stack_special_x_8);
  uVar1 = param_1 + 0x1420;
  SystemFunction_00018010bc90(uVar1,&processed_var_9488_ptr);
  stack_special_x_8._0_4_ = 0x3f800000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,0x3f800000);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&stack_special_x_8);
  uVar1 = param_1 + 0x1500;
  SystemFunction_00018010bc90(uVar1,&system_string1_ptr);
  stack_special_x_8._0_4_ = 0x3f800000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,0x3f800000);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&stack_special_x_8);
  uVar1 = param_1 + 0x1490;
  SystemFunction_00018010bc90(uVar1,&processed_var_9528_ptr);
  stack_special_x_8._0_4_ = 0x3f800000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,0x3f800000);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&stack_special_x_8);
  uVar1 = param_1 + 0x1570;
  SystemFunction_00018010bc90(uVar1,&system_pattern2_ptr);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  uVar1 = param_1 + 0x15e0;
  SystemFunction_00018010bc90(uVar1,&processed_var_9568_ptr);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  uVar1 = param_1 + 0x16c0;
  SystemFunction_00018010bc90(uVar1,&processed_var_9608_ptr);
  stack_special_x_8._0_4_ = 0x3f000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,0x3f000000);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&stack_special_x_8);
  uVar1 = param_1 + 0x1880;
  SystemFunction_00018010bc90(uVar1,&processed_var_9600_ptr);
  stack_special_x_8._0_4_ = 0x400ccccd;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,0x400ccccd);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&stack_special_x_8);
  uVar1 = param_1 + 0x2060;
  SystemFunction_00018010bc90(uVar1,&processed_var_9672_ptr);
  stack_special_x_8._0_4_ = 0x42200000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,0x42200000);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&stack_special_x_8);
  uVar1 = param_1 + 0x18f0;
  SystemFunction_00018010bc90(uVar1,&processed_var_9640_ptr);
  stack_special_x_8._0_4_ = 0x3fc00000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,0x3fc00000);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&stack_special_x_8);
  uVar1 = param_1 + 0x1960;
  SystemFunction_00018010bc90(uVar1,&processed_var_9736_ptr);
  stack_special_x_8._0_4_ = 0x42200000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,0x42200000);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&stack_special_x_8);
  uVar1 = param_1 + 0x19d0;
  SystemFunction_00018010bc90(uVar1,&processed_var_9688_ptr);
  stack_special_x_8._0_4_ = 0x42c80000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,0x42c80000);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&stack_special_x_8);
  uVar1 = param_1 + 0x1110;
  SystemFunction_00018010bc90(uVar1,&processed_var_9792_ptr);
  stack_special_x_8._0_4_ = 0x42480000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,0x42480000);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&stack_special_x_8);
  uVar1 = param_1 + 0x1180;
  SystemFunction_00018010bc90(uVar1,&system_string2_ptr);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&stack_special_x_8);
  uVar1 = param_1 + 0x11f0;
  SystemFunction_00018010bc90(uVar1,&processed_var_9832_ptr);
  stack_special_x_8._0_4_ = 0x3f800000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,0x3f800000);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&stack_special_x_8);
  uVar1 = param_1 + 0x1260;
  SystemFunction_00018010bc90(uVar1,&processed_var_9808_ptr);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&stack_special_x_8);
  uVar1 = param_1 + 0x20d0;
  SystemFunction_00018010bc90(uVar1,&processed_var_9880_ptr);
  stack_special_x_8._0_4_ = 0x42c80000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,0x42c80000);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&stack_special_x_8);
  uVar1 = param_1 + 0x2140;
  SystemFunction_00018010bc90(uVar1,&processed_var_9848_ptr);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  uVar1 = param_1 + 0x21b0;
  SystemFunction_00018010bc90(uVar1,&processed_var_9936_ptr);
  stack_special_x_8._0_4_ = 0x3c;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,0x3c);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  uVar1 = param_1 + 0x2220;
  SystemFunction_00018010bc90(uVar1,&processed_var_9904_ptr);
  stack_special_x_8._0_4_ = 0x42480000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,0x42480000);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&stack_special_x_8);
  uVar1 = param_1 + 0xbd0;
  SystemFunction_00018010bc90(uVar1,&processed_var_9992_ptr);
  stack_special_x_8._0_4_ = 2;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,2);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  function_10be10(stack_array_100,0);
  uVar1 = param_1 + 0x4d0;
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  function_10bca0(uVar1,&stack_special_x_8,stack_array_100);
  function_05ab20(stack_array_100);
  SystemFunction_00018010bc90(uVar1,&processed_var_7832_ptr);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  function_10be40(stack_array_e0,0);
  uVar1 = param_1 + 0x540;
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  function_10bca0(uVar1,&stack_special_x_8,stack_array_e0);
  function_05ab20(stack_array_e0);
  SystemFunction_00018010bc90(uVar1,&processed_var_7880_ptr);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  uVar1 = param_1 + 0xd90;
  SystemFunction_00018010bc90(uVar1,&processed_var_9968_ptr);
  stack_special_x_8._0_4_ = 4;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,4);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  uVar1 = param_1 + 0xe00;
  SystemFunction_00018010bc90(uVar1,&processed_var_48_ptr);
  stack_special_x_8._0_4_ = 4;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,4);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  function_10be70(stack_array_c0,0);
  uVar1 = param_1 + 0x1c0;
  stack_special_x_8._0_4_ = 1;
  function_10bca0(uVar1,&stack_special_x_8,stack_array_c0);
  function_05ab20(stack_array_c0);
  SystemFunction_00018010bc90(uVar1,&ui_system_data_16_ptr);
  stack_special_x_8._0_4_ = 1;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,1);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  uVar1 = param_1 + 0x230;
  SystemFunction_00018010bc90(uVar1,&processed_var_88_ptr);
  stack_special_x_8._0_4_ = 2;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,2);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  function_10bea0(stack_array_a0,0);
  uVar1 = param_1 + 0x2290;
  stack_special_x_8._0_4_ = 1;
  function_10bca0(uVar1,&stack_special_x_8,stack_array_a0);
  function_05ab20(stack_array_a0);
  SystemFunction_00018010bc90(uVar1,&processed_var_72_ptr);
  stack_special_x_8._0_4_ = 1;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,1);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  function_10bed0(stack_array_80,0);
  uVar1 = param_1 + 0x2300;
  stack_special_x_8._0_4_ = 1;
  function_10bca0(uVar1,&stack_special_x_8,stack_array_80);
  function_05ab20(stack_array_80);
  SystemFunction_00018010bc90(uVar1,&ui_system_data_128_ptr);
  stack_special_x_8._0_4_ = 1;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,1);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  uVar1 = param_1 + 0x24c0;
  SystemFunction_00018010bc90(uVar1,&ui_system_data_104_ptr);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 0x28,&stack_special_x_8);
  function_10bf00(stack_array_60,0);
  uVar1 = param_1 + 0x2530;
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  function_10bca0(uVar1,&stack_special_x_8,stack_array_60);
  function_05ab20(stack_array_60);
  SystemFunction_00018010bc90(uVar1,&ui_system_data_184_ptr);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  function_10bf30(stack_array_40,0);
  uVar1 = param_1 + 0x25a0;
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  function_10bca0(uVar1,&stack_special_x_8,stack_array_40);
  function_05ab20(stack_array_40);
  SystemFunction_00018010bc90(uVar1,&ui_system_data_160_ptr);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  uVar1 = param_1 + 0x2370;
  SystemFunction_00018010bc90(uVar1,&rendering_buffer_224_ptr);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  uVar1 = param_1 + 0x23e0;
  SystemFunction_00018010bc90(uVar1,&rendering_buffer_208_ptr);
  stack_special_x_8._0_4_ = 1;
  SystemAudioManager(uVar1,&stack_special_x_8);
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,1);
  DataValidationEngine(uVar1,&stack_special_x_8);
  stack_special_x_8 = uVar1;
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  *(int32_t *)(param_1 + 0x88) = 1;
  return;
}