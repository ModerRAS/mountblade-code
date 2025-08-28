#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part044.c - 2 个函数

// 函数: void FUN_1801f7d20(int64_t param_1,int64_t param_2,uint *param_3,uint64_t *param_4,uint param_5)
void FUN_1801f7d20(int64_t param_1,int64_t param_2,uint *param_3,uint64_t *param_4,uint param_5)

{
  uint64_t uVar1;
  int iVar2;
  uint64_t uVar3;
  uint uVar4;
  int8_t auStack_b08 [32];
  uint uStack_ae8;
  uint uStack_ae4;
  uint uStack_ae0;
  uint uStack_adc;
  uint uStack_ad8;
  uint uStack_ad4;
  uint64_t uStack_ad0;
  void *puStack_ac8;
  int8_t *puStack_ac0;
  int32_t uStack_ab8;
  int8_t auStack_ab0 [72];
  void *puStack_a68;
  int8_t *puStack_a60;
  int32_t uStack_a58;
  int8_t auStack_a50 [72];
  void *puStack_a08;
  int8_t *puStack_a00;
  int32_t uStack_9f8;
  int8_t auStack_9f0 [72];
  void *puStack_9a8;
  int8_t *puStack_9a0;
  int32_t uStack_998;
  int8_t auStack_990 [72];
  void *puStack_948;
  int8_t *puStack_940;
  int32_t uStack_938;
  int8_t auStack_930 [72];
  void *puStack_8e8;
  int8_t *puStack_8e0;
  int32_t uStack_8d8;
  int8_t auStack_8d0 [72];
  void *puStack_888;
  int8_t *puStack_880;
  int32_t uStack_878;
  int8_t auStack_870 [72];
  void *puStack_828;
  int8_t *puStack_820;
  int32_t uStack_818;
  int8_t auStack_810 [72];
  void *puStack_7c8;
  int8_t *puStack_7c0;
  int32_t uStack_7b8;
  int8_t auStack_7b0 [72];
  void *puStack_768;
  int8_t *puStack_760;
  int32_t uStack_758;
  int8_t auStack_750 [72];
  void *puStack_708;
  int8_t *puStack_700;
  int32_t uStack_6f8;
  int8_t auStack_6f0 [72];
  void *puStack_6a8;
  int8_t *puStack_6a0;
  int32_t uStack_698;
  int8_t auStack_690 [72];
  void *puStack_648;
  int8_t *puStack_640;
  int32_t uStack_638;
  int8_t auStack_630 [72];
  void *puStack_5e8;
  int8_t *puStack_5e0;
  int32_t uStack_5d8;
  int8_t auStack_5d0 [72];
  void *puStack_588;
  int8_t *puStack_580;
  int32_t uStack_578;
  int8_t auStack_570 [72];
  void *puStack_528;
  int8_t *puStack_520;
  int32_t uStack_518;
  int8_t auStack_510 [72];
  void *puStack_4c8;
  int8_t *puStack_4c0;
  int32_t uStack_4b8;
  int8_t auStack_4b0 [72];
  void *puStack_468;
  int8_t *puStack_460;
  int32_t uStack_458;
  int8_t auStack_450 [72];
  void *puStack_408;
  int8_t *puStack_400;
  int32_t uStack_3f8;
  int8_t auStack_3f0 [72];
  void *puStack_3a8;
  int8_t *puStack_3a0;
  int32_t uStack_398;
  int8_t auStack_390 [72];
  void *puStack_348;
  int8_t *puStack_340;
  int32_t uStack_338;
  int8_t auStack_330 [72];
  void *puStack_2e8;
  int8_t *puStack_2e0;
  int32_t uStack_2d8;
  int8_t auStack_2d0 [72];
  void *puStack_288;
  int8_t *puStack_280;
  int32_t uStack_278;
  int8_t auStack_270 [72];
  void *puStack_228;
  int8_t *puStack_220;
  int32_t uStack_218;
  int8_t auStack_210 [72];
  void *puStack_1c8;
  int8_t *puStack_1c0;
  int32_t uStack_1b8;
  int8_t auStack_1b0 [72];
  void *puStack_168;
  int8_t *puStack_160;
  int32_t uStack_158;
  int8_t auStack_150 [72];
  void *puStack_108;
  int8_t *puStack_100;
  int32_t uStack_f8;
  int8_t auStack_f0 [72];
  void *puStack_a8;
  int8_t *puStack_a0;
  int32_t uStack_98;
  int8_t auStack_90 [72];
  uint64_t uStack_48;
  
  uStack_ad0 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_b08;
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
    puStack_ac8 = &unknown_var_3480_ptr;
    puStack_ac0 = auStack_ab0;
    auStack_ab0[0] = 0;
    uStack_ab8 = 7;
    strcpy_s(auStack_ab0,0x40,&unknown_var_1872_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&puStack_ac8,0);
    *param_4 = *param_4 | uVar3;
    puStack_ac8 = &system_state_ptr;
  }
  if ((param_5 & 8) != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    puStack_a68 = &unknown_var_3480_ptr;
    puStack_a60 = auStack_a50;
    auStack_a50[0] = 0;
    uStack_a58 = 7;
    strcpy_s(auStack_a50,0x40,&unknown_var_1808_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&puStack_a68,0);
    *param_4 = *param_4 | uVar3;
    puStack_a68 = &system_state_ptr;
  }
  if ((param_5 & 4) != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    puStack_a08 = &unknown_var_3480_ptr;
    puStack_a00 = auStack_9f0;
    auStack_9f0[0] = 0;
    uStack_9f8 = 0xe;
    strcpy_s(auStack_9f0,0x40,&unknown_var_1792_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&puStack_a08,0);
    *param_4 = *param_4 | uVar3;
    puStack_a08 = &system_state_ptr;
  }
  if ((param_5 >> 0xc & 1) != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    puStack_9a8 = &unknown_var_3480_ptr;
    puStack_9a0 = auStack_990;
    auStack_990[0] = 0;
    uStack_998 = 7;
    strcpy_s(auStack_990,0x40,&unknown_var_8936_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&puStack_9a8,0);
    *param_4 = *param_4 | uVar3;
    puStack_9a8 = &system_state_ptr;
  }
  if ((param_5 & 2) != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    puStack_948 = &unknown_var_3480_ptr;
    puStack_940 = auStack_930;
    auStack_930[0] = 0;
    uStack_938 = 0xd;
    strcpy_s(auStack_930,0x40,&unknown_var_1760_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&puStack_948,0);
    *param_4 = *param_4 | uVar3;
    puStack_948 = &system_state_ptr;
  }
  uStack_ae8 = param_5 & 0x8000;
  if (uStack_ae8 != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    puStack_8e8 = &unknown_var_3480_ptr;
    puStack_8e0 = auStack_8d0;
    auStack_8d0[0] = 0;
    uStack_8d8 = 0xf;
    strcpy_s(auStack_8d0,0x40,&unknown_var_1824_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&puStack_8e8,0);
    *param_4 = *param_4 | uVar3;
    puStack_8e8 = &system_state_ptr;
  }
  uStack_ae4 = param_5 & 0x40000;
  if (uStack_ae4 != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    puStack_888 = &unknown_var_3480_ptr;
    puStack_880 = auStack_870;
    auStack_870[0] = 0;
    uStack_878 = 0xb;
    strcpy_s(auStack_870,0x40,&unknown_var_2000_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&puStack_888,0);
    *param_4 = *param_4 | uVar3;
    puStack_888 = &system_state_ptr;
  }
  if ((param_5 & 0x4000) != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    puStack_828 = &unknown_var_3480_ptr;
    puStack_820 = auStack_810;
    auStack_810[0] = 0;
    uStack_818 = 0xb;
    strcpy_s(auStack_810,0x40,&unknown_var_1776_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&puStack_828,0);
    *param_4 = *param_4 | uVar3;
    puStack_828 = &system_state_ptr;
  }
  uStack_ad8 = param_5 & 0x20000;
  if (uStack_ad8 != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    puStack_7c8 = &unknown_var_3480_ptr;
    puStack_7c0 = auStack_7b0;
    auStack_7b0[0] = 0;
    uStack_7b8 = 0xc;
    strcpy_s(auStack_7b0,0x40,&unknown_var_1840_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&puStack_7c8,0);
    *param_4 = *param_4 | uVar3;
    puStack_7c8 = &system_state_ptr;
  }
  uStack_ad4 = param_5 & 0x80000;
  if (uStack_ad4 != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    puStack_768 = &unknown_var_3480_ptr;
    puStack_760 = auStack_750;
    auStack_750[0] = 0;
    uStack_758 = 9;
    strcpy_s(auStack_750,0x40,&unknown_var_1856_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&puStack_768,0);
    *param_4 = *param_4 | uVar3;
    puStack_768 = &system_state_ptr;
  }
  uStack_ae0 = param_5 & 0x10000;
  if (uStack_ae0 != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    puStack_708 = &unknown_var_3480_ptr;
    puStack_700 = auStack_6f0;
    auStack_6f0[0] = 0;
    uStack_6f8 = 0x18;
    strcpy_s(auStack_6f0,0x40,&unknown_var_1904_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&puStack_708,0);
    *param_4 = *param_4 | uVar3;
    puStack_708 = &system_state_ptr;
  }
  uStack_adc = param_5 & 0x10000000;
  if (uStack_adc != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    puStack_6a8 = &unknown_var_3480_ptr;
    puStack_6a0 = auStack_690;
    auStack_690[0] = 0;
    uStack_698 = 0x14;
    strcpy_s(auStack_690,0x40,&unknown_var_1936_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&puStack_6a8,0);
    *param_4 = *param_4 | uVar3;
    puStack_6a8 = &system_state_ptr;
  }
  if ((param_5 >> 0x14 & 1) != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    puStack_648 = &unknown_var_3480_ptr;
    puStack_640 = auStack_630;
    auStack_630[0] = 0;
    uStack_638 = 8;
    strcpy_s(auStack_630,0x40,&unknown_var_7168_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&puStack_648,0);
    *param_4 = *param_4 | uVar3;
    puStack_648 = &system_state_ptr;
  }
  if (param_2 != 0) {
    if ((*(int64_t *)(param_2 + 0x12498) != 0) && (*(int *)(param_2 + 0x2480) != 0)) {
      uVar1 = *(uint64_t *)(param_1 + 0x30);
      puStack_5e8 = &unknown_var_3480_ptr;
      puStack_5e0 = auStack_5d0;
      auStack_5d0[0] = 0;
      uStack_5d8 = 0xb;
      strcpy_s(auStack_5d0,0x40,&unknown_var_1704_ptr);
      uVar3 = SystemCore_LoggingSystem0(uVar1,&puStack_5e8,0);
      *param_4 = *param_4 | uVar3;
      puStack_5e8 = &system_state_ptr;
    }
    if (((*(char *)(param_2 + 0x11cf4) != '\0') && (*(int64_t *)(param_2 + 0x11d00) != 0)) &&
       ((*(int64_t *)(param_2 + 0x11ec8) != 0 ||
        (*(int64_t *)(*(int64_t *)(param_2 + 0x11d00) + 0x150) != 0)))) {
      uVar1 = *(uint64_t *)(param_1 + 0x30);
      puStack_588 = &unknown_var_3480_ptr;
      puStack_580 = auStack_570;
      auStack_570[0] = 0;
      uStack_578 = 0x10;
      strcpy_s(auStack_570,0x40,&unknown_var_1736_ptr);
      uVar3 = SystemCore_LoggingSystem0(uVar1,&puStack_588,0);
      *param_4 = *param_4 | uVar3;
      puStack_588 = &system_state_ptr;
    }
    if (*(char *)(param_2 + 0x12c09) != '\0') {
      uVar1 = *(uint64_t *)(param_1 + 0x30);
      puStack_528 = &unknown_var_3480_ptr;
      puStack_520 = auStack_510;
      auStack_510[0] = 0;
      uStack_518 = 0xd;
      strcpy_s(auStack_510,0x40,&unknown_var_1688_ptr);
      uVar3 = SystemCore_LoggingSystem0(uVar1,&puStack_528,0);
      *param_4 = *param_4 | uVar3;
      puStack_528 = &system_state_ptr;
    }
  }
  if (*(char *)(system_parameter_buffer + 0x12f8) == '\x01') {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    puStack_4c8 = &unknown_var_3480_ptr;
    puStack_4c0 = auStack_4b0;
    auStack_4b0[0] = 0;
    uStack_4b8 = 0x14;
    strcpy_s(auStack_4b0,0x40,&unknown_var_7096_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&puStack_4c8,0);
    *param_4 = *param_4 | uVar3;
    puStack_4c8 = &system_state_ptr;
  }
  if ((param_5 & 0x4000) != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    puStack_468 = &unknown_var_3480_ptr;
    puStack_460 = auStack_450;
    auStack_450[0] = 0;
    uStack_458 = 0xb;
    strcpy_s(auStack_450,0x40,&unknown_var_1776_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&puStack_468,0);
    *param_4 = *param_4 | uVar3;
    puStack_468 = &system_state_ptr;
  }
  if (uStack_ae8 != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    puStack_408 = &unknown_var_3480_ptr;
    puStack_400 = auStack_3f0;
    auStack_3f0[0] = 0;
    uStack_3f8 = 0xf;
    strcpy_s(auStack_3f0,0x40,&unknown_var_1824_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&puStack_408,0);
    *param_4 = *param_4 | uVar3;
    puStack_408 = &system_state_ptr;
  }
  if (uStack_ae4 != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    puStack_3a8 = &unknown_var_3480_ptr;
    puStack_3a0 = auStack_390;
    auStack_390[0] = 0;
    uStack_398 = 0xb;
    strcpy_s(auStack_390,0x40,&unknown_var_2000_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&puStack_3a8,0);
    *param_4 = *param_4 | uVar3;
    puStack_3a8 = &system_state_ptr;
  }
  if (uStack_ae0 != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    puStack_348 = &unknown_var_3480_ptr;
    puStack_340 = auStack_330;
    auStack_330[0] = 0;
    uStack_338 = 0x18;
    strcpy_s(auStack_330,0x40,&unknown_var_1904_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&puStack_348,0);
    *param_4 = *param_4 | uVar3;
    puStack_348 = &system_state_ptr;
  }
  if (uStack_adc != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    puStack_2e8 = &unknown_var_3480_ptr;
    puStack_2e0 = auStack_2d0;
    auStack_2d0[0] = 0;
    uStack_2d8 = 0x14;
    strcpy_s(auStack_2d0,0x40,&unknown_var_1936_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&puStack_2e8,0);
    *param_4 = *param_4 | uVar3;
    puStack_2e8 = &system_state_ptr;
  }
  if (uStack_ad8 != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    puStack_288 = &unknown_var_3480_ptr;
    puStack_280 = auStack_270;
    auStack_270[0] = 0;
    uStack_278 = 0xc;
    strcpy_s(auStack_270,0x40,&unknown_var_1840_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&puStack_288,0);
    *param_4 = *param_4 | uVar3;
    puStack_288 = &system_state_ptr;
  }
  if (uStack_ad4 != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    puStack_228 = &unknown_var_3480_ptr;
    puStack_220 = auStack_210;
    auStack_210[0] = 0;
    uStack_218 = 9;
    strcpy_s(auStack_210,0x40,&unknown_var_1856_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&puStack_228,0);
    *param_4 = *param_4 | uVar3;
    puStack_228 = &system_state_ptr;
  }
  if ((param_5 & 0x20) != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    puStack_1c8 = &unknown_var_3480_ptr;
    puStack_1c0 = auStack_1b0;
    auStack_1b0[0] = 0;
    uStack_1b8 = 7;
    strcpy_s(auStack_1b0,0x40,&unknown_var_1816_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&puStack_1c8,0);
    *param_4 = *param_4 | uVar3;
    puStack_1c8 = &system_state_ptr;
  }
  if ((param_5 >> 0x15 & 1) != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    puStack_168 = &unknown_var_3480_ptr;
    puStack_160 = auStack_150;
    auStack_150[0] = 0;
    uStack_158 = 0xc;
    strcpy_s(auStack_150,0x40,&unknown_var_7120_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&puStack_168,0);
    *param_4 = *param_4 | uVar3;
    puStack_168 = &system_state_ptr;
  }
  if ((param_5 & 0x780) != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    puStack_108 = &unknown_var_3480_ptr;
    puStack_100 = auStack_f0;
    auStack_f0[0] = 0;
    uStack_f8 = 10;
    strcpy_s(auStack_f0,0x40,&unknown_var_2016_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&puStack_108,0);
    *param_4 = *param_4 | uVar3;
    puStack_108 = &system_state_ptr;
  }
  if (((param_2 != 0) && (*(int64_t *)(param_2 + 0x99b8) != 0)) &&
     (0.0 < *(float *)(*(int64_t *)(param_2 + 0x99b8) + 0x40))) {
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    puStack_a8 = &unknown_var_3480_ptr;
    puStack_a0 = auStack_90;
    auStack_90[0] = 0;
    uStack_98 = 0x10;
    strcpy_s(auStack_90,0x40,&unknown_var_1960_ptr);
    uVar3 = SystemCore_LoggingSystem0(uVar1,&puStack_a8,0);
    *param_4 = *param_4 | uVar3;
    puStack_a8 = &system_state_ptr;
  }
  *param_3 = *param_3 & *(uint *)(*(int64_t *)(param_1 + 0x30) + 0x1610);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_b08);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1801f8e50(uint64_t param_1)

{
  uint64_t uVar1;
  
  uVar1 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x450,8,3);
  uVar1 = FUN_1801fa180(uVar1);
  FUN_1801f8ea0(uVar1,param_1);
  return uVar1;
}



int64_t FUN_1801f8ea0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

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




// 函数: void FUN_1801f9270(int64_t param_1,int64_t param_2)
void FUN_1801f9270(int64_t param_1,int64_t param_2)

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




