#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_03_part044.c - 2 个函数
// 函数: void function_1f7d20(int64_t param_1,int64_t param_2,uint *param_3,uint64_t *param_4,uint param_5)
void function_1f7d20(int64_t param_1,int64_t param_2,uint *param_3,uint64_t *param_4,uint param_5)
{
  uint64_t uVar1;
  int iVar2;
  uint64_t uVar3;
  uint uVar4;
  int8_t stack_array_b08 [32];
  uint local_var_ae8;
  uint local_var_ae4;
  uint local_var_ae0;
  uint local_var_adc;
  uint local_var_ad8;
  uint local_var_ad4;
  uint64_t local_var_ad0;
  void *plocal_var_ac8;
  int8_t *plocal_var_ac0;
  int32_t local_var_ab8;
  int8_t stack_array_ab0 [72];
  void *plocal_var_a68;
  int8_t *plocal_var_a60;
  int32_t local_var_a58;
  int8_t stack_array_a50 [72];
  void *plocal_var_a08;
  int8_t *plocal_var_a00;
  int32_t local_var_9f8;
  int8_t stack_array_9f0 [72];
  void *plocal_var_9a8;
  int8_t *plocal_var_9a0;
  int32_t local_var_998;
  int8_t stack_array_990 [72];
  void *plocal_var_948;
  int8_t *plocal_var_940;
  int32_t local_var_938;
  int8_t stack_array_930 [72];
  void *plocal_var_8e8;
  int8_t *plocal_var_8e0;
  int32_t local_var_8d8;
  int8_t stack_array_8d0 [72];
  void *plocal_var_888;
  int8_t *plocal_var_880;
  int32_t local_var_878;
  int8_t stack_array_870 [72];
  void *plocal_var_828;
  int8_t *plocal_var_820;
  int32_t local_var_818;
  int8_t stack_array_810 [72];
  void *plocal_var_7c8;
  int8_t *plocal_var_7c0;
  int32_t local_var_7b8;
  int8_t stack_array_7b0 [72];
  void *plocal_var_768;
  int8_t *plocal_var_760;
  int32_t local_var_758;
  int8_t stack_array_750 [72];
  void *plocal_var_708;
  int8_t *plocal_var_700;
  int32_t local_var_6f8;
  int8_t stack_array_6f0 [72];
  void *plocal_var_6a8;
  int8_t *plocal_var_6a0;
  int32_t local_var_698;
  int8_t stack_array_690 [72];
  void *plocal_var_648;
  int8_t *plocal_var_640;
  int32_t local_var_638;
  int8_t stack_array_630 [72];
  void *plocal_var_5e8;
  int8_t *plocal_var_5e0;
  int32_t local_var_5d8;
  int8_t stack_array_5d0 [72];
  void *plocal_var_588;
  int8_t *plocal_var_580;
  int32_t local_var_578;
  int8_t stack_array_570 [72];
  void *plocal_var_528;
  int8_t *plocal_var_520;
  int32_t local_var_518;
  int8_t stack_array_510 [72];
  void *plocal_var_4c8;
  int8_t *plocal_var_4c0;
  int32_t local_var_4b8;
  int8_t stack_array_4b0 [72];
  void *plocal_var_468;
  int8_t *plocal_var_460;
  int32_t local_var_458;
  int8_t stack_array_450 [72];
  void *plocal_var_408;
  int8_t *plocal_var_400;
  int32_t local_var_3f8;
  int8_t stack_array_3f0 [72];
  void *plocal_var_3a8;
  int8_t *plocal_var_3a0;
  int32_t local_var_398;
  int8_t stack_array_390 [72];
  void *plocal_var_348;
  int8_t *plocal_var_340;
  int32_t local_var_338;
  int8_t stack_array_330 [72];
  void *plocal_var_2e8;
  int8_t *plocal_var_2e0;
  int32_t local_var_2d8;
  int8_t stack_array_2d0 [72];
  void *plocal_var_288;
  int8_t *plocal_var_280;
  int32_t local_var_278;
  int8_t stack_array_270 [72];
  void *plocal_var_228;
  int8_t *plocal_var_220;
  int32_t local_var_218;
  int8_t stack_array_210 [72];
  void *plocal_var_1c8;
  int8_t *plocal_var_1c0;
  int32_t local_var_1b8;
  int8_t stack_array_1b0 [72];
  void *plocal_var_168;
  int8_t *plocal_var_160;
  int32_t local_var_158;
  int8_t stack_array_150 [72];
  void *plocal_var_108;
  int8_t *plocal_var_100;
  int32_t local_var_f8;
  int8_t stack_array_f0 [72];
  void *plocal_var_a8;
  int8_t *plocal_var_a0;
  int32_t local_var_98;
  int8_t stack_array_90 [72];
  uint64_t local_var_48;
  local_var_ad0 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_b08;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + 0x9a34);
    if (iVar2 == 2) {
      *param_3 = *param_3 | 0x400;
      iVar2 = *(int *)(param_2 + 0x9a34);
    }
    uVar4 = *param_3;
    if (iVar2 == 0) {
      uVar4 = uVar4 | 0x200;
      *param_3 = uVar4;
    }
    if (((((*(byte *)(param_2 + 0x1bd8) & 0x20) != 0) || ((*(byte *)(param_2 + 0x1bd9) & 2) != 0))
        && (*(int *)(system_system_data_memory + 0xa10) != 0)) && (*(char *)(param_2 + 0x130) != '\0')) {
      *param_3 = uVar4 | 0x200000;
    }
  }
  if ((param_5 & 1) != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    plocal_var_ac8 = &memory_allocator_3480_ptr;
    plocal_var_ac0 = stack_array_ab0;
    stack_array_ab0[0] = 0;
    local_var_ab8 = 7;
    strcpy_s(stack_array_ab0,0x40,&ui_system_data_1872_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&plocal_var_ac8,0);
    *param_4 = *param_4 | uVar3;
    plocal_var_ac8 = &system_state_ptr;
  }
  if ((param_5 & 8) != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    plocal_var_a68 = &memory_allocator_3480_ptr;
    plocal_var_a60 = stack_array_a50;
    stack_array_a50[0] = 0;
    local_var_a58 = 7;
    strcpy_s(stack_array_a50,0x40,&ui_system_data_1808_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&plocal_var_a68,0);
    *param_4 = *param_4 | uVar3;
    plocal_var_a68 = &system_state_ptr;
  }
  if ((param_5 & 4) != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    plocal_var_a08 = &memory_allocator_3480_ptr;
    plocal_var_a00 = stack_array_9f0;
    stack_array_9f0[0] = 0;
    local_var_9f8 = 0xe;
    strcpy_s(stack_array_9f0,0x40,&ui_system_data_1792_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&plocal_var_a08,0);
    *param_4 = *param_4 | uVar3;
    plocal_var_a08 = &system_state_ptr;
  }
  if ((param_5 >> 0xc & 1) != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    plocal_var_9a8 = &memory_allocator_3480_ptr;
    plocal_var_9a0 = stack_array_990;
    stack_array_990[0] = 0;
    local_var_998 = 7;
    strcpy_s(stack_array_990,0x40,&processed_var_8936_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&plocal_var_9a8,0);
    *param_4 = *param_4 | uVar3;
    plocal_var_9a8 = &system_state_ptr;
  }
  if ((param_5 & 2) != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    plocal_var_948 = &memory_allocator_3480_ptr;
    plocal_var_940 = stack_array_930;
    stack_array_930[0] = 0;
    local_var_938 = 0xd;
    strcpy_s(stack_array_930,0x40,&ui_system_data_1760_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&plocal_var_948,0);
    *param_4 = *param_4 | uVar3;
    plocal_var_948 = &system_state_ptr;
  }
  local_var_ae8 = param_5 & 0x8000;
  if (local_var_ae8 != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    plocal_var_8e8 = &memory_allocator_3480_ptr;
    plocal_var_8e0 = stack_array_8d0;
    stack_array_8d0[0] = 0;
    local_var_8d8 = 0xf;
    strcpy_s(stack_array_8d0,0x40,&ui_system_data_1824_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&plocal_var_8e8,0);
    *param_4 = *param_4 | uVar3;
    plocal_var_8e8 = &system_state_ptr;
  }
  local_var_ae4 = param_5 & 0x40000;
  if (local_var_ae4 != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    plocal_var_888 = &memory_allocator_3480_ptr;
    plocal_var_880 = stack_array_870;
    stack_array_870[0] = 0;
    local_var_878 = 0xb;
    strcpy_s(stack_array_870,0x40,&rendering_buffer_2000_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&plocal_var_888,0);
    *param_4 = *param_4 | uVar3;
    plocal_var_888 = &system_state_ptr;
  }
  if ((param_5 & 0x4000) != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    plocal_var_828 = &memory_allocator_3480_ptr;
    plocal_var_820 = stack_array_810;
    stack_array_810[0] = 0;
    local_var_818 = 0xb;
    strcpy_s(stack_array_810,0x40,&ui_system_data_1776_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&plocal_var_828,0);
    *param_4 = *param_4 | uVar3;
    plocal_var_828 = &system_state_ptr;
  }
  local_var_ad8 = param_5 & 0x20000;
  if (local_var_ad8 != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    plocal_var_7c8 = &memory_allocator_3480_ptr;
    plocal_var_7c0 = stack_array_7b0;
    stack_array_7b0[0] = 0;
    local_var_7b8 = 0xc;
    strcpy_s(stack_array_7b0,0x40,&ui_system_data_1840_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&plocal_var_7c8,0);
    *param_4 = *param_4 | uVar3;
    plocal_var_7c8 = &system_state_ptr;
  }
  local_var_ad4 = param_5 & 0x80000;
  if (local_var_ad4 != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    plocal_var_768 = &memory_allocator_3480_ptr;
    plocal_var_760 = stack_array_750;
    stack_array_750[0] = 0;
    local_var_758 = 9;
    strcpy_s(stack_array_750,0x40,&ui_system_data_1856_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&plocal_var_768,0);
    *param_4 = *param_4 | uVar3;
    plocal_var_768 = &system_state_ptr;
  }
  local_var_ae0 = param_5 & 0x10000;
  if (local_var_ae0 != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    plocal_var_708 = &memory_allocator_3480_ptr;
    plocal_var_700 = stack_array_6f0;
    stack_array_6f0[0] = 0;
    local_var_6f8 = 0x18;
    strcpy_s(stack_array_6f0,0x40,&ui_system_data_1904_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&plocal_var_708,0);
    *param_4 = *param_4 | uVar3;
    plocal_var_708 = &system_state_ptr;
  }
  local_var_adc = param_5 & 0x10000000;
  if (local_var_adc != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    plocal_var_6a8 = &memory_allocator_3480_ptr;
    plocal_var_6a0 = stack_array_690;
    stack_array_690[0] = 0;
    local_var_698 = 0x14;
    strcpy_s(stack_array_690,0x40,&ui_system_data_1936_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&plocal_var_6a8,0);
    *param_4 = *param_4 | uVar3;
    plocal_var_6a8 = &system_state_ptr;
  }
  if ((param_5 >> 0x14 & 1) != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    plocal_var_648 = &memory_allocator_3480_ptr;
    plocal_var_640 = stack_array_630;
    stack_array_630[0] = 0;
    local_var_638 = 8;
    strcpy_s(stack_array_630,0x40,&processed_var_7168_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&plocal_var_648,0);
    *param_4 = *param_4 | uVar3;
    plocal_var_648 = &system_state_ptr;
  }
  if (param_2 != 0) {
    if ((*(int64_t *)(param_2 + 0x12498) != 0) && (*(int *)(param_2 + 0x2480) != 0)) {
      uVar1 = *(uint64_t *)(param_1 + 0x30);
      plocal_var_5e8 = &memory_allocator_3480_ptr;
      plocal_var_5e0 = stack_array_5d0;
      stack_array_5d0[0] = 0;
      local_var_5d8 = 0xb;
      strcpy_s(stack_array_5d0,0x40,&ui_system_data_1704_ptr);
      uVar3 = SystemCore_LoggingSystem0(uVar1,&plocal_var_5e8,0);
      *param_4 = *param_4 | uVar3;
      plocal_var_5e8 = &system_state_ptr;
    }
    if (((*(char *)(param_2 + 0x11cf4) != '\0') && (*(int64_t *)(param_2 + 0x11d00) != 0)) &&
       ((*(int64_t *)(param_2 + 0x11ec8) != 0 ||
        (*(int64_t *)(*(int64_t *)(param_2 + 0x11d00) + 0x150) != 0)))) {
      uVar1 = *(uint64_t *)(param_1 + 0x30);
      plocal_var_588 = &memory_allocator_3480_ptr;
      plocal_var_580 = stack_array_570;
      stack_array_570[0] = 0;
      local_var_578 = 0x10;
      strcpy_s(stack_array_570,0x40,&ui_system_data_1736_ptr);
      uVar3 = SystemCore_LoggingSystem0(uVar1,&plocal_var_588,0);
      *param_4 = *param_4 | uVar3;
      plocal_var_588 = &system_state_ptr;
    }
    if (*(char *)(param_2 + 0x12c09) != '\0') {
      uVar1 = *(uint64_t *)(param_1 + 0x30);
      plocal_var_528 = &memory_allocator_3480_ptr;
      plocal_var_520 = stack_array_510;
      stack_array_510[0] = 0;
      local_var_518 = 0xd;
      strcpy_s(stack_array_510,0x40,&ui_system_data_1688_ptr);
      uVar3 = SystemCore_LoggingSystem0(uVar1,&plocal_var_528,0);
      *param_4 = *param_4 | uVar3;
      plocal_var_528 = &system_state_ptr;
    }
  }
  if (*(char *)(system_parameter_buffer + 0x12f8) == '\x01') {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    plocal_var_4c8 = &memory_allocator_3480_ptr;
    plocal_var_4c0 = stack_array_4b0;
    stack_array_4b0[0] = 0;
    local_var_4b8 = 0x14;
    strcpy_s(stack_array_4b0,0x40,&processed_var_7096_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&plocal_var_4c8,0);
    *param_4 = *param_4 | uVar3;
    plocal_var_4c8 = &system_state_ptr;
  }
  if ((param_5 & 0x4000) != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    plocal_var_468 = &memory_allocator_3480_ptr;
    plocal_var_460 = stack_array_450;
    stack_array_450[0] = 0;
    local_var_458 = 0xb;
    strcpy_s(stack_array_450,0x40,&ui_system_data_1776_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&plocal_var_468,0);
    *param_4 = *param_4 | uVar3;
    plocal_var_468 = &system_state_ptr;
  }
  if (local_var_ae8 != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    plocal_var_408 = &memory_allocator_3480_ptr;
    plocal_var_400 = stack_array_3f0;
    stack_array_3f0[0] = 0;
    local_var_3f8 = 0xf;
    strcpy_s(stack_array_3f0,0x40,&ui_system_data_1824_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&plocal_var_408,0);
    *param_4 = *param_4 | uVar3;
    plocal_var_408 = &system_state_ptr;
  }
  if (local_var_ae4 != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    plocal_var_3a8 = &memory_allocator_3480_ptr;
    plocal_var_3a0 = stack_array_390;
    stack_array_390[0] = 0;
    local_var_398 = 0xb;
    strcpy_s(stack_array_390,0x40,&rendering_buffer_2000_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&plocal_var_3a8,0);
    *param_4 = *param_4 | uVar3;
    plocal_var_3a8 = &system_state_ptr;
  }
  if (local_var_ae0 != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    plocal_var_348 = &memory_allocator_3480_ptr;
    plocal_var_340 = stack_array_330;
    stack_array_330[0] = 0;
    local_var_338 = 0x18;
    strcpy_s(stack_array_330,0x40,&ui_system_data_1904_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&plocal_var_348,0);
    *param_4 = *param_4 | uVar3;
    plocal_var_348 = &system_state_ptr;
  }
  if (local_var_adc != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    plocal_var_2e8 = &memory_allocator_3480_ptr;
    plocal_var_2e0 = stack_array_2d0;
    stack_array_2d0[0] = 0;
    local_var_2d8 = 0x14;
    strcpy_s(stack_array_2d0,0x40,&ui_system_data_1936_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&plocal_var_2e8,0);
    *param_4 = *param_4 | uVar3;
    plocal_var_2e8 = &system_state_ptr;
  }
  if (local_var_ad8 != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    plocal_var_288 = &memory_allocator_3480_ptr;
    plocal_var_280 = stack_array_270;
    stack_array_270[0] = 0;
    local_var_278 = 0xc;
    strcpy_s(stack_array_270,0x40,&ui_system_data_1840_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&plocal_var_288,0);
    *param_4 = *param_4 | uVar3;
    plocal_var_288 = &system_state_ptr;
  }
  if (local_var_ad4 != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    plocal_var_228 = &memory_allocator_3480_ptr;
    plocal_var_220 = stack_array_210;
    stack_array_210[0] = 0;
    local_var_218 = 9;
    strcpy_s(stack_array_210,0x40,&ui_system_data_1856_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&plocal_var_228,0);
    *param_4 = *param_4 | uVar3;
    plocal_var_228 = &system_state_ptr;
  }
  if ((param_5 & 0x20) != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    plocal_var_1c8 = &memory_allocator_3480_ptr;
    plocal_var_1c0 = stack_array_1b0;
    stack_array_1b0[0] = 0;
    local_var_1b8 = 7;
    strcpy_s(stack_array_1b0,0x40,&ui_system_data_1816_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&plocal_var_1c8,0);
    *param_4 = *param_4 | uVar3;
    plocal_var_1c8 = &system_state_ptr;
  }
  if ((param_5 >> 0x15 & 1) != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    plocal_var_168 = &memory_allocator_3480_ptr;
    plocal_var_160 = stack_array_150;
    stack_array_150[0] = 0;
    local_var_158 = 0xc;
    strcpy_s(stack_array_150,0x40,&processed_var_7120_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&plocal_var_168,0);
    *param_4 = *param_4 | uVar3;
    plocal_var_168 = &system_state_ptr;
  }
  if ((param_5 & 0x780) != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    plocal_var_108 = &memory_allocator_3480_ptr;
    plocal_var_100 = stack_array_f0;
    stack_array_f0[0] = 0;
    local_var_f8 = 10;
    strcpy_s(stack_array_f0,0x40,&rendering_buffer_2016_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&plocal_var_108,0);
    *param_4 = *param_4 | uVar3;
    plocal_var_108 = &system_state_ptr;
  }
  if (((param_2 != 0) && (*(int64_t *)(param_2 + 0x99b8) != 0)) &&
     (0.0 < *(float *)(*(int64_t *)(param_2 + 0x99b8) + 0x40))) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    plocal_var_a8 = &memory_allocator_3480_ptr;
    plocal_var_a0 = stack_array_90;
    stack_array_90[0] = 0;
    local_var_98 = 0x10;
    strcpy_s(stack_array_90,0x40,&ui_system_data_1960_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&plocal_var_a8,0);
    *param_4 = *param_4 | uVar3;
    plocal_var_a8 = &system_state_ptr;
  }
  *param_3 = *param_3 & *(uint *)(*(int64_t *)(param_1 + 0x30) + 0x1610);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_b08);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_1f8e50(uint64_t param_1)
{
  uint64_t uVar1;
  uVar1 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x450,8,3);
  uVar1 = SystemCore_ConfigValidator(uVar1);
  function_1f8ea0(uVar1,param_1);
  return uVar1;
}
int64_t function_1f8ea0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t *plVar2;
  void *puVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  int32_t *puVar8;
  int64_t *plVar9;
  void *puVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  *(uint64_t *)(param_1 + 8) = *(uint64_t *)(param_2 + 8);
  SystemCore_ConfigurationHandler0(param_1 + 0x10,param_2 + 0x10,param_3,param_4,0xfffffffffffffffe);
  plVar9 = *(int64_t **)(param_2 + 0x30);
  if (plVar9 != (int64_t *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9);
  }
  plVar1 = *(int64_t **)(param_1 + 0x30);
  *(int64_t **)(param_1 + 0x30) = plVar9;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int8_t *)(param_1 + 0x38) = *(int8_t *)(param_2 + 0x38);
  *(uint64_t *)(param_1 + 0x40) = *(uint64_t *)(param_2 + 0x40);
  *(int32_t *)(param_1 + 0x48) = *(int32_t *)(param_2 + 0x48);
  *(int8_t *)(param_1 + 0x4c) = *(int8_t *)(param_2 + 0x4c);
  *(int8_t *)(param_1 + 0x4d) = *(int8_t *)(param_2 + 0x4d);
  *(int8_t *)(param_1 + 0x4e) = *(int8_t *)(param_2 + 0x4e);
  *(int8_t *)(param_1 + 0x4f) = *(int8_t *)(param_2 + 0x4f);
  *(int8_t *)(param_1 + 0x50) = *(int8_t *)(param_2 + 0x50);
  *(uint64_t *)(param_1 + 0x58) = *(uint64_t *)(param_2 + 0x58);
  *(uint64_t *)(param_1 + 0x60) = *(uint64_t *)(param_2 + 0x60);
  *(int32_t *)(param_1 + 0x68) = *(int32_t *)(param_2 + 0x68);
  *(int32_t *)(param_1 + 0x6c) = *(int32_t *)(param_2 + 0x6c);
  *(int32_t *)(param_1 + 0x70) = *(int32_t *)(param_2 + 0x70);
  *(int32_t *)(param_1 + 0x74) = *(int32_t *)(param_2 + 0x74);
  *(int32_t *)(param_1 + 0x78) = *(int32_t *)(param_2 + 0x78);
  *(int32_t *)(param_1 + 0x7c) = *(int32_t *)(param_2 + 0x7c);
  *(int32_t *)(param_1 + 0x80) = *(int32_t *)(param_2 + 0x80);
  *(int32_t *)(param_1 + 0x84) = *(int32_t *)(param_2 + 0x84);
  *(int32_t *)(param_1 + 0x88) = *(int32_t *)(param_2 + 0x88);
  *(int32_t *)(param_1 + 0x8c) = *(int32_t *)(param_2 + 0x8c);
  *(int32_t *)(param_1 + 0x90) = *(int32_t *)(param_2 + 0x90);
  *(int32_t *)(param_1 + 0x94) = *(int32_t *)(param_2 + 0x94);
  *(int32_t *)(param_1 + 0x98) = *(int32_t *)(param_2 + 0x98);
  *(int32_t *)(param_1 + 0x9c) = *(int32_t *)(param_2 + 0x9c);
  *(int32_t *)(param_1 + 0xa0) = *(int32_t *)(param_2 + 0xa0);
  *(int32_t *)(param_1 + 0xa4) = *(int32_t *)(param_2 + 0xa4);
  *(int32_t *)(param_1 + 0xa8) = *(int32_t *)(param_2 + 0xa8);
  *(int32_t *)(param_1 + 0xac) = *(int32_t *)(param_2 + 0xac);
  *(int32_t *)(param_1 + 0xb0) = *(int32_t *)(param_2 + 0xb0);
  *(int32_t *)(param_1 + 0xb4) = *(int32_t *)(param_2 + 0xb4);
  *(int32_t *)(param_1 + 0xb8) = *(int32_t *)(param_2 + 0xb8);
  *(int32_t *)(param_1 + 0xbc) = *(int32_t *)(param_2 + 0xbc);
  *(int32_t *)(param_1 + 0xc0) = *(int32_t *)(param_2 + 0xc0);
  *(int32_t *)(param_1 + 0xc4) = *(int32_t *)(param_2 + 0xc4);
  *(int32_t *)(param_1 + 200) = *(int32_t *)(param_2 + 200);
  *(int32_t *)(param_1 + 0xcc) = *(int32_t *)(param_2 + 0xcc);
  *(int32_t *)(param_1 + 0xd0) = *(int32_t *)(param_2 + 0xd0);
  *(int32_t *)(param_1 + 0xd4) = *(int32_t *)(param_2 + 0xd4);
  *(int32_t *)(param_1 + 0xd8) = *(int32_t *)(param_2 + 0xd8);
  *(int32_t *)(param_1 + 0xdc) = *(int32_t *)(param_2 + 0xdc);
  *(int32_t *)(param_1 + 0xe0) = *(int32_t *)(param_2 + 0xe0);
  *(int32_t *)(param_1 + 0xe4) = *(int32_t *)(param_2 + 0xe4);
  *(int32_t *)(param_1 + 0xe8) = *(int32_t *)(param_2 + 0xe8);
  *(int32_t *)(param_1 + 0xec) = *(int32_t *)(param_2 + 0xec);
  *(int32_t *)(param_1 + 0xf0) = *(int32_t *)(param_2 + 0xf0);
  uVar7 = *(uint64_t *)(param_2 + 0x100);
  *(uint64_t *)(param_1 + 0xf8) = *(uint64_t *)(param_2 + 0xf8);
  *(uint64_t *)(param_1 + 0x100) = uVar7;
  uVar7 = *(uint64_t *)(param_2 + 0x110);
  *(uint64_t *)(param_1 + 0x108) = *(uint64_t *)(param_2 + 0x108);
  *(uint64_t *)(param_1 + 0x110) = uVar7;
  uVar4 = *(int32_t *)(param_2 + 0x11c);
  uVar5 = *(int32_t *)(param_2 + 0x120);
  uVar6 = *(int32_t *)(param_2 + 0x124);
  *(int32_t *)(param_1 + 0x118) = *(int32_t *)(param_2 + 0x118);
  *(int32_t *)(param_1 + 0x11c) = uVar4;
  *(int32_t *)(param_1 + 0x120) = uVar5;
  *(int32_t *)(param_1 + 0x124) = uVar6;
  uVar7 = *(uint64_t *)(param_2 + 0x130);
  *(uint64_t *)(param_1 + 0x128) = *(uint64_t *)(param_2 + 0x128);
  *(uint64_t *)(param_1 + 0x130) = uVar7;
  plVar9 = (int64_t *)(param_1 + 0x138);
  lVar11 = param_2 - param_1;
  lVar12 = 0x10;
  do {
    plVar1 = *(int64_t **)(lVar11 + (int64_t)plVar9);
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plVar2 = (int64_t *)*plVar9;
    *plVar9 = (int64_t)plVar1;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    plVar9 = plVar9 + 1;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  *(int32_t *)(param_1 + 0x1b8) = *(int32_t *)(param_2 + 0x1b8);
  *(int32_t *)(param_1 + 0x1bc) = *(int32_t *)(param_2 + 0x1bc);
  *(int32_t *)(param_1 + 0x1c0) = *(int32_t *)(param_2 + 0x1c0);
  *(int32_t *)(param_1 + 0x1c4) = *(int32_t *)(param_2 + 0x1c4);
  puVar8 = (int32_t *)(param_1 + 0x1d8);
  lVar13 = 4;
  lVar12 = 4;
  do {
    *puVar8 = *(int32_t *)((int64_t)puVar8 + lVar11);
    puVar3 = *(void **)(lVar11 + -8 + (int64_t)puVar8);
    puVar10 = &system_buffer_ptr;
    if (puVar3 != (void *)0x0) {
      puVar10 = puVar3;
    }
    strcpy_s(*(uint64_t *)(puVar8 + -2),0x80,puVar10);
    puVar8 = puVar8 + 0x26;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  plVar9 = (int64_t *)(param_1 + 0x428);
  do {
    plVar1 = *(int64_t **)((int64_t)plVar9 + lVar11);
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plVar2 = (int64_t *)*plVar9;
    *plVar9 = (int64_t)plVar1;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    plVar9 = plVar9 + 1;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  plVar9 = *(int64_t **)(param_2 + 0x448);
  if (plVar9 != (int64_t *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9);
  }
  plVar1 = *(int64_t **)(param_1 + 0x448);
  *(int64_t **)(param_1 + 0x448) = plVar9;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1f9270(int64_t param_1,int64_t param_2)
void function_1f9270(int64_t param_1,int64_t param_2)
{
  double *pdVar1;
  char cVar2;
  double dStack_18;
  double dStack_10;
  if ((*(char *)(param_1 + 0x38) != '\0') && (*(int64_t *)(param_1 + 0x40) != 0)) {
    cVar2 = (**(code **)(**(int64_t **)(param_2 + 0x3580) + 0x78))();
    if (cVar2 != '\0') {
      dStack_18 = 1.0;
      dStack_10 = 1.0;
      if ((*(char *)(*(int64_t *)(param_1 + 0x40) + 0xd9) != '\0') &&
         (*(int *)(SYSTEM_STATE_MANAGER + 0x540) - 1U < 4)) {
        pdVar1 = (double *)
                 ((int64_t)*(int *)(SYSTEM_STATE_MANAGER + 0x540) * 0x10 + -8 +
                 *(int64_t *)(param_1 + 0x40));
        dStack_18 = *pdVar1;
        dStack_10 = pdVar1[1];
      }
      goto LAB_1801f92e9;
    }
  }
  dStack_18 = 1.0;
  dStack_10 = 1.0;
LAB_1801f92e9:
  cVar2 = *(char *)(param_1 + 0x4c);
  dStack_18 = (double)*(float *)(param_1 + 8) * dStack_18;
  if (cVar2 == '\0') {
    dStack_18 = (double)round();
    cVar2 = *(char *)(param_1 + 0x4c);
  }
  *(double *)(param_1 + 0x58) = dStack_18;
  dStack_10 = (double)*(float *)(param_1 + 0xc) * dStack_10;
  if (cVar2 == '\0') {
    dStack_10 = (double)round();
  }
  *(double *)(param_1 + 0x60) = dStack_10;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address