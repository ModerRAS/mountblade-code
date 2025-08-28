#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_01_part051.c - 12 个函数

// 函数: void FUN_1800d7470(uint64_t param_1,longlong param_2)
void FUN_1800d7470(uint64_t param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint64_t uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uint64_t uStackX_8;
  uint64_t uStackX_10;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  int8_t auStack_88 [32];
  int32_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  
  plVar6 = (longlong *)0x0;
  lVar4 = *(longlong *)(system_message_buffer + 0x1cd8);
  if (((*(longlong *)(lVar4 + 0x84b8) != 0) || (*(int *)(lVar4 + 0x8878) != -1)) ||
     (lVar3 = system_message_buffer, uStackX_8 = param_1, *(int *)(lVar4 + 0x8a78) != 0x10)) {
    uStackX_8 = 0;
    uStack_60 = 0x1800d74cb;
    (**(code **)(**(longlong **)(lVar4 + 0x8400) + 0x40))
              (*(longlong **)(lVar4 + 0x8400),0x10,1,&uStackX_8);
    lVar3 = system_message_buffer;
    *(uint64_t *)(lVar4 + 0x84b8) = 0;
    *(int32_t *)(lVar4 + 0x8878) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8a78) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(longlong *)(lVar3 + 0x1cd8);
  if (((*(longlong *)(lVar4 + 0x8540) != 0) || (*(int *)(lVar4 + 0x88bc) != -1)) ||
     (*(int *)(lVar4 + 0x8abc) != 0x10)) {
    uStackX_10 = 0;
    uStack_60 = 0x1800d7535;
    (**(code **)(**(longlong **)(lVar4 + 0x8400) + 0x40))
              (*(longlong **)(lVar4 + 0x8400),0x21,1,&uStackX_10);
    lVar3 = system_message_buffer;
    *(uint64_t *)(lVar4 + 0x8540) = 0;
    *(int32_t *)(lVar4 + 0x88bc) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8abc) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(longlong *)(lVar3 + 0x1cd8);
  if (((*(longlong *)(lVar4 + 0x8590) != 0) || (*(int *)(lVar4 + 0x88e4) != -1)) ||
     (*(int *)(lVar4 + 0x8ae4) != 0x10)) {
    uStackX_18 = 0;
    uStack_60 = 0x1800d759f;
    (**(code **)(**(longlong **)(lVar4 + 0x8400) + 0x40))
              (*(longlong **)(lVar4 + 0x8400),0x2b,1,&uStackX_18);
    lVar3 = system_message_buffer;
    *(uint64_t *)(lVar4 + 0x8590) = 0;
    *(int32_t *)(lVar4 + 0x88e4) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8ae4) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(longlong *)(lVar3 + 0x1cd8);
  if (((*(longlong *)(lVar4 + 0x8440) != 0) || (*(int *)(lVar4 + 0x883c) != -1)) ||
     (*(int *)(lVar4 + 0x8a3c) != 0x10)) {
    uStackX_20 = 0;
    uStack_60 = 0x1800d7608;
    (**(code **)(**(longlong **)(lVar4 + 0x8400) + 0x40))
              (*(longlong **)(lVar4 + 0x8400),1,1,&uStackX_20);
    lVar3 = system_message_buffer;
    *(uint64_t *)(lVar4 + 0x8440) = 0;
    *(int32_t *)(lVar4 + 0x883c) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8a3c) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(longlong *)(lVar3 + 0x1cd8);
  if (((*(longlong *)(lVar4 + 0x8458) != 0) || (*(int *)(lVar4 + 0x8848) != -1)) ||
     (*(int *)(lVar4 + 0x8a48) != 0x10)) {
    uStack_38 = 0;
    uStack_60 = 0x1800d7672;
    (**(code **)(**(longlong **)(lVar4 + 0x8400) + 0x40))
              (*(longlong **)(lVar4 + 0x8400),4,1,&uStack_38);
    lVar3 = system_message_buffer;
    *(uint64_t *)(lVar4 + 0x8458) = 0;
    *(int32_t *)(lVar4 + 0x8848) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8a48) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(longlong *)(lVar3 + 0x1cd8);
  if (((*(longlong *)(lVar4 + 0x8468) != 0) || (*(int *)(lVar4 + 0x8850) != -1)) ||
     (*(int *)(lVar4 + 0x8a50) != 0x10)) {
    uStack_30 = 0;
    uStack_60 = 0x1800d76dc;
    (**(code **)(**(longlong **)(lVar4 + 0x8400) + 0x40))
              (*(longlong **)(lVar4 + 0x8400),6,1,&uStack_30);
    lVar3 = system_message_buffer;
    *(uint64_t *)(lVar4 + 0x8468) = 0;
    *(int32_t *)(lVar4 + 0x8850) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8a50) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  plVar2 = *(longlong **)(lVar3 + 0x1cd8);
  uStack_60 = 0x1800d7713;
  lVar4 = FUN_180244ff0(param_2);
  iVar1 = *(int *)(param_2 + 0x3578);
  plVar7 = plVar6;
  if (*(longlong *)(lVar4 + 0x1d8) != 0) {
    if (system_main_module_state != 0) {
      *(longlong *)(lVar4 + 0x340) = (longlong)*(int *)(system_main_module_state + 0x224);
    }
    plVar7 = (longlong *)
             ((longlong)(int)((uint)*(byte *)(lVar4 + 0x335) * iVar1) * 0x10 +
             *(longlong *)(lVar4 + 0x1d8));
    if ((plVar7 != (longlong *)0x0) && (*plVar7 != 0)) {
      uStack_60 = 0x1800d776e;
      (**(code **)(*plVar2 + 0x70))(plVar2);
    }
  }
  lVar4 = system_message_buffer;
  plVar2[0x1077] = (longlong)plVar7;
  plVar2 = *(longlong **)(lVar4 + 0x1cd8);
  uStack_60 = 0x1800d7790;
  lVar4 = FUN_180245280(param_2);
  iVar1 = *(int *)(param_2 + 0x357c);
  if (*(longlong *)(lVar4 + 0x1e0) != 0) {
    if (system_main_module_state != 0) {
      *(longlong *)(lVar4 + 0x340) = (longlong)*(int *)(system_main_module_state + 0x224);
    }
    plVar6 = (longlong *)((longlong)(iVar1 * 2 + 1) * 0x10 + *(longlong *)(lVar4 + 0x1e0));
    if ((plVar6 != (longlong *)0x0) && (*plVar6 != 0)) {
      uStack_60 = 0x1800d77e8;
      (**(code **)(*plVar2 + 0x70))(plVar2);
    }
  }
  lVar4 = system_message_buffer;
  plVar2[0x107e] = (longlong)plVar6;
  lVar4 = *(longlong *)(lVar4 + 0x1cd8);
  uVar5 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(lVar4 + 0x83b8);
  bVar9 = lVar3 != *(longlong *)(lVar4 + 0x8378);
  if (bVar9) {
    *(longlong *)(lVar4 + 0x8378) = lVar3;
  }
  if (lVar3 == 0) {
    uStack_48 = 0;
  }
  else {
    uStack_48 = *(uint64_t *)(lVar3 + 8);
  }
  lVar3 = *(longlong *)(lVar4 + 0x83c0);
  bVar10 = lVar3 != *(longlong *)(lVar4 + 0x8380);
  if (bVar10) {
    *(longlong *)(lVar4 + 0x8380) = lVar3;
  }
  if (lVar3 == 0) {
    uStack_40 = 0;
  }
  else {
    uStack_40 = *(uint64_t *)(lVar3 + 8);
  }
  lVar3 = *(longlong *)(lVar4 + 0x83c8);
  bVar11 = lVar3 != *(longlong *)(lVar4 + 0x8388);
  if (bVar11) {
    *(longlong *)(lVar4 + 0x8388) = lVar3;
  }
  if (lVar3 == 0) {
    uStack_38 = 0;
  }
  else {
    uStack_38 = *(uint64_t *)(lVar3 + 8);
  }
  lVar3 = *(longlong *)(lVar4 + 0x83d0);
  bVar12 = lVar3 != *(longlong *)(lVar4 + 0x8390);
  if (bVar12) {
    *(longlong *)(lVar4 + 0x8390) = lVar3;
  }
  if (lVar3 == 0) {
    uStack_30 = 0;
  }
  else {
    uStack_30 = *(uint64_t *)(lVar3 + 8);
  }
  lVar3 = *(longlong *)(lVar4 + 0x83d8);
  bVar13 = lVar3 != *(longlong *)(lVar4 + 0x8398);
  if (bVar13) {
    *(longlong *)(lVar4 + 0x8398) = lVar3;
  }
  if (lVar3 == 0) {
    uStack_28 = 0;
  }
  else {
    uStack_28 = *(uint64_t *)(lVar3 + 8);
  }
  lVar3 = *(longlong *)(lVar4 + 0x83e0);
  bVar14 = lVar3 != *(longlong *)(lVar4 + 0x83a0);
  if (bVar14) {
    *(longlong *)(lVar4 + 0x83a0) = lVar3;
  }
  lVar3 = *(longlong *)(lVar4 + 0x83e8);
  bVar15 = lVar3 != *(longlong *)(lVar4 + 0x83a8);
  if (bVar15) {
    *(longlong *)(lVar4 + 0x83a8) = lVar3;
  }
  lVar3 = *(longlong *)(lVar4 + 0x83f0);
  bVar16 = *(longlong *)(lVar4 + 0x83b0) != lVar3;
  if (bVar16) {
    *(longlong *)(lVar4 + 0x83b0) = lVar3;
  }
  if (lVar3 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint64_t *)(lVar3 + 8);
  }
  if ((bVar15 || (bVar14 || (bVar13 || (bVar12 || (bVar11 || (bVar10 || bVar9)))))) || (bVar16)) {
    uStack_50 = 0xffffffffffffffff;
    uStack_58 = 0;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_68 = 1;
    (**(code **)(**(longlong **)(lVar4 + 0x8400) + 0x110))
              (*(longlong **)(lVar4 + 0x8400),1,&uStack_48,uVar8);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uVar5 ^ (ulonglong)auStack_88);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800d7810(void)
void FUN_1800d7810(void)

{
  longlong lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int32_t *puVar5;
  int32_t uVar6;
  int8_t auStack_288 [32];
  int32_t uStack_268;
  int32_t uStack_260;
  int32_t uStack_258;
  int32_t uStack_250;
  int32_t uStack_248;
  uint64_t uStack_240;
  int8_t uStack_238;
  int32_t uStack_230;
  void *puStack_228;
  int32_t *puStack_220;
  int32_t uStack_218;
  uint64_t uStack_210;
  longlong *plStack_208;
  longlong *aplStack_200 [2];
  uint64_t uStack_1f0;
  void *puStack_1e8;
  int8_t *puStack_1e0;
  int32_t uStack_1d8;
  int8_t auStack_1d0 [32];
  void *puStack_1b0;
  int8_t *puStack_1a8;
  int32_t uStack_1a0;
  int8_t auStack_198 [32];
  void *puStack_178;
  int8_t *puStack_170;
  int32_t uStack_168;
  int8_t auStack_160 [32];
  void *puStack_140;
  int8_t *puStack_138;
  int32_t uStack_130;
  int8_t auStack_128 [32];
  void *puStack_108;
  int8_t *puStack_100;
  int32_t uStack_f8;
  int8_t auStack_f0 [32];
  void *puStack_d0;
  int8_t *puStack_c8;
  int32_t uStack_c0;
  int8_t auStack_b8 [32];
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [32];
  void *puStack_60;
  int8_t *puStack_58;
  int32_t uStack_50;
  int8_t auStack_48 [32];
  ulonglong uStack_28;
  
  lVar1 = system_parameter_buffer;
  uStack_1f0 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_288;
  *(int *)(system_parameter_buffer + 0x1500) = *(int *)(system_parameter_buffer + 0x1500) + 1;
  puStack_1e8 = &unknown_var_672_ptr;
  puStack_1e0 = auStack_1d0;
  auStack_1d0[0] = 0;
  uStack_1d8 = 0xf;
  uVar6 = strcpy_s(auStack_1d0,0x20,&unknown_var_3080_ptr);
  uStack_230 = 1;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_248 = 0x200;
  uStack_250 = 0x50;
  uStack_258 = 0;
  uStack_260 = 3;
  uStack_268 = 0x220;
  puVar2 = (uint64_t *)FUN_1800b0a10(uVar6,aplStack_200,0xffffffff,&puStack_1e8);
  uVar3 = *puVar2;
  *puVar2 = 0;
  plStack_208 = *(longlong **)(lVar1 + 0x1588);
  *(uint64_t *)(lVar1 + 0x1588) = uVar3;
  if (plStack_208 != (longlong *)0x0) {
    (**(code **)(*plStack_208 + 0x38))();
  }
  if (aplStack_200[0] != (longlong *)0x0) {
    (**(code **)(*aplStack_200[0] + 0x38))();
  }
  puStack_1e8 = &system_state_ptr;
  uVar3 = FUN_1800bffe0();
  puStack_1b0 = &unknown_var_672_ptr;
  puStack_1a8 = auStack_198;
  auStack_198[0] = 0;
  uStack_1a0 = 0x11;
  strcpy_s(auStack_198,0x20,&unknown_var_3056_ptr);
  uVar4 = FUN_180240430(uVar3,&puStack_1b0,1);
  *(uint64_t *)(lVar1 + 0x2340) = uVar4;
  puStack_1b0 = &system_state_ptr;
  puStack_178 = &unknown_var_672_ptr;
  puStack_170 = auStack_160;
  auStack_160[0] = 0;
  uStack_168 = 0x10;
  strcpy_s(auStack_160,0x20,&unknown_var_3120_ptr);
  uVar4 = FUN_180240430(uVar3,&puStack_178,1);
  *(uint64_t *)(lVar1 + 0x2348) = uVar4;
  puStack_178 = &system_state_ptr;
  puStack_140 = &unknown_var_672_ptr;
  puStack_138 = auStack_128;
  auStack_128[0] = 0;
  uStack_130 = 0x11;
  strcpy_s(auStack_128,0x20,&unknown_var_3096_ptr);
  uVar4 = FUN_180240430(uVar3,&puStack_140,1);
  *(uint64_t *)(lVar1 + 0x2350) = uVar4;
  puStack_140 = &system_state_ptr;
  puStack_108 = &unknown_var_672_ptr;
  puStack_100 = auStack_f0;
  auStack_f0[0] = 0;
  uStack_f8 = 0x10;
  strcpy_s(auStack_f0,0x20,&unknown_var_3176_ptr);
  uVar4 = FUN_180240430(uVar3,&puStack_108,1);
  *(uint64_t *)(lVar1 + 0x2358) = uVar4;
  puStack_108 = &system_state_ptr;
  puStack_d0 = &unknown_var_672_ptr;
  puStack_c8 = auStack_b8;
  auStack_b8[0] = 0;
  uStack_c0 = 0x19;
  strcpy_s(auStack_b8,0x20,&unknown_var_3144_ptr);
  uVar4 = FUN_180240430(uVar3,&puStack_d0,1);
  *(uint64_t *)(lVar1 + 0x2360) = uVar4;
  puStack_d0 = &system_state_ptr;
  puStack_98 = &unknown_var_672_ptr;
  puStack_90 = auStack_80;
  auStack_80[0] = 0;
  uStack_88 = 0xf;
  strcpy_s(auStack_80,0x20,&unknown_var_3224_ptr);
  uVar4 = FUN_180240430(uVar3,&puStack_98,1);
  *(uint64_t *)(lVar1 + 0x2368) = uVar4;
  puStack_98 = &system_state_ptr;
  puStack_60 = &unknown_var_672_ptr;
  puStack_58 = auStack_48;
  auStack_48[0] = 0;
  uStack_50 = 0x10;
  strcpy_s(auStack_48,0x20,&unknown_var_3200_ptr);
  uVar3 = FUN_180240430(uVar3,&puStack_60,1);
  *(uint64_t *)(lVar1 + 0x2370) = uVar3;
  puStack_60 = &system_state_ptr;
  puStack_228 = &system_data_buffer_ptr;
  uStack_210 = 0;
  puStack_220 = (int32_t *)0x0;
  uStack_218 = 0;
  puVar5 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x16,0x13);
  *(int8_t *)puVar5 = 0;
  puStack_220 = puVar5;
  uVar6 = FUN_18064e990(puVar5);
  uStack_210 = CONCAT44(uStack_210._4_4_,uVar6);
  *puVar5 = 0x5f726270;
  puVar5[1] = 0x64616873;
  puVar5[2] = 0x5f676e69;
  puVar5[3] = 0x64616873;
  puVar5[4] = 0x616d776f;
  *(int16_t *)(puVar5 + 5) = 0x70;
  uStack_218 = 0x15;
  *(int32_t *)(lVar1 + 0x13b0) = 1;
  *(int32_t *)(lVar1 + 0x13c0) = 1;
  puVar2 = (uint64_t *)FUN_1800b4910(system_resource_state,aplStack_200,&puStack_228);
  uVar3 = *puVar2;
  *puVar2 = 0;
  plStack_208 = *(longlong **)(lVar1 + 0x13b8);
  *(uint64_t *)(lVar1 + 0x13b8) = uVar3;
  if (plStack_208 != (longlong *)0x0) {
    (**(code **)(*plStack_208 + 0x38))();
  }
  if (aplStack_200[0] != (longlong *)0x0) {
    (**(code **)(*aplStack_200[0] + 0x38))();
  }
  puStack_228 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar5);
}



// WARNING: Removing unreachable block (ram,0x0001800d8456)
// WARNING: Removing unreachable block (ram,0x0001800d8519)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800d82a0(ulonglong param_1,ulonglong param_2,longlong param_3)
void FUN_1800d82a0(ulonglong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uStackX_8;
  ulonglong uStackX_10;
  
  uStackX_8 = param_1;
  uStackX_10 = param_2;
  FUN_18029d150(*(uint64_t *)(system_message_buffer + 0x1cd8),0x5e,*(uint64_t *)(param_3 + 0x68),1,
                0xffffffff);
  if (*(longlong *)(param_3 + 0x90) == 0) {
    FUN_18029d150(*(uint64_t *)(system_message_buffer + 0x1cd8),0x5d,*(uint64_t *)(param_3 + 0x60),0x12
                  ,0xffffffff);
    FUN_18029d150(*(uint64_t *)(system_message_buffer + 0x1cd8),0x5f,*(uint64_t *)(param_3 + 0xa0),0x10
                  ,0xffffffff);
  }
  if (*(longlong *)(param_3 + 0x88) != 0) {
    FUN_18029d150(*(uint64_t *)(system_message_buffer + 0x1cd8),0x11,*(longlong *)(param_3 + 0x88),0x10,
                  0xffffffff);
    FUN_18029d150(*(uint64_t *)(system_message_buffer + 0x1cd8),0x12,*(uint64_t *)(param_3 + 0x80),0x10
                  ,0xffffffff);
  }
  uVar5 = 0;
  uVar4 = uVar5;
  uVar2 = uVar5;
  if (*(longlong *)(param_3 + 0x2d8) - *(longlong *)(param_3 + 0x2d0) >> 3 != 0) {
    do {
      FUN_18029d150(*(uint64_t *)(system_message_buffer + 0x1cd8),(int)uVar4 + 0x60,
                    *(uint64_t *)(*(longlong *)(param_3 + 0x2d0) + uVar2),0x10,0xffffffff);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar2 = uVar2 + 8;
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)(*(longlong *)(param_3 + 0x2d8) - *(longlong *)(param_3 + 0x2d0) >> 3));
  }
  if (*(char *)(param_3 + 0xc0) != '\0') {
    lVar1 = *(longlong *)(system_message_buffer + 0x1cd8);
    uVar4 = uVar5;
    if ((((*(longlong *)(param_3 + 0x78) != 0) && (uVar2 = FUN_18023a940(), uVar2 != 0)) &&
        (uVar4 = uVar2, *(longlong *)(uVar2 + 8) == 0)) && (*(longlong *)(uVar2 + 0x10) == 0)) {
      uVar4 = 0;
    }
    if ((((*(ulonglong *)(lVar1 + 0x84a8) != uVar4) || (*(int *)(lVar1 + 0x8870) != -1)) ||
        (*(int *)(lVar1 + 0x8a70) != 0x10)) &&
       (((uVar4 == 0 || (*(longlong *)(uVar4 + 8) != 0)) || (*(longlong *)(uVar4 + 0x10) != 0)))) {
      uStackX_10 = uVar5;
      if (uVar4 != 0) {
        uStackX_10 = *(ulonglong *)(uVar4 + 0x10);
      }
      (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
                (*(longlong **)(lVar1 + 0x8400),0xe,1,&uStackX_10);
      *(ulonglong *)(lVar1 + 0x84a8) = uVar4;
      *(int32_t *)(lVar1 + 0x8870) = 0xffffffff;
      *(int32_t *)(lVar1 + 0x8a70) = 0x10;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
    lVar1 = *(longlong *)(system_message_buffer + 0x1cd8);
    uVar4 = uVar5;
    if ((((*(longlong *)(param_3 + 0x70) != 0) && (uVar2 = FUN_18023a940(), uVar2 != 0)) &&
        (uVar4 = uVar2, *(longlong *)(uVar2 + 8) == 0)) && (*(longlong *)(uVar2 + 0x10) == 0)) {
      uVar4 = 0;
    }
    if (((*(ulonglong *)(lVar1 + 0x84b0) != uVar4) || (*(int *)(lVar1 + 0x8874) != -1)) ||
       (*(int *)(lVar1 + 0x8a74) != 0x10)) {
      if (uVar4 != 0) {
        if ((*(longlong *)(uVar4 + 8) == 0) && (*(longlong *)(uVar4 + 0x10) == 0))
        goto LAB_1800d85a5;
        if (uVar4 != 0) {
          uVar5 = *(ulonglong *)(uVar4 + 0x10);
        }
      }
      uStackX_8 = uVar5;
      (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
                (*(longlong **)(lVar1 + 0x8400),0xf,1,&uStackX_8);
      *(ulonglong *)(lVar1 + 0x84b0) = uVar4;
      *(int32_t *)(lVar1 + 0x8874) = 0xffffffff;
      *(int32_t *)(lVar1 + 0x8a74) = 0x10;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
  }
LAB_1800d85a5:
  if (*(longlong *)(param_3 + 0x90) != 0) {
    FUN_180178650();
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001800d8456)
// WARNING: Removing unreachable block (ram,0x0001800d8519)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800d82bb(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4)
void FUN_1800d82bb(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong in_stack_00000050;
  ulonglong in_stack_00000058;
  
  FUN_18029d150(*(uint64_t *)(param_1 + 0x1cd8),(int)param_4 + 0x5d,
                *(uint64_t *)(param_3 + 0x68),param_4,0xffffffff);
  if (*(longlong *)(param_3 + 0x90) == 0) {
    FUN_18029d150(*(uint64_t *)(system_message_buffer + 0x1cd8),0x5d,*(uint64_t *)(param_3 + 0x60),0x12
                  ,0xffffffff);
    FUN_18029d150(*(uint64_t *)(system_message_buffer + 0x1cd8),0x5f,*(uint64_t *)(param_3 + 0xa0),0x10
                  ,0xffffffff);
  }
  if (*(longlong *)(param_3 + 0x88) != 0) {
    FUN_18029d150(*(uint64_t *)(system_message_buffer + 0x1cd8),0x11,*(longlong *)(param_3 + 0x88),0x10,
                  0xffffffff);
    FUN_18029d150(*(uint64_t *)(system_message_buffer + 0x1cd8),0x12,*(uint64_t *)(param_3 + 0x80),0x10
                  ,0xffffffff);
  }
  uVar5 = 0;
  uVar4 = uVar5;
  uVar2 = uVar5;
  if (*(longlong *)(param_3 + 0x2d8) - *(longlong *)(param_3 + 0x2d0) >> 3 != 0) {
    do {
      FUN_18029d150(*(uint64_t *)(system_message_buffer + 0x1cd8),(int)uVar4 + 0x60,
                    *(uint64_t *)(*(longlong *)(param_3 + 0x2d0) + uVar2),0x10,0xffffffff);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar2 = uVar2 + 8;
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)(*(longlong *)(param_3 + 0x2d8) - *(longlong *)(param_3 + 0x2d0) >> 3));
  }
  if (*(char *)(param_3 + 0xc0) != '\0') {
    lVar1 = *(longlong *)(system_message_buffer + 0x1cd8);
    uVar4 = uVar5;
    if ((((*(longlong *)(param_3 + 0x78) != 0) && (uVar2 = FUN_18023a940(), uVar2 != 0)) &&
        (uVar4 = uVar2, *(longlong *)(uVar2 + 8) == 0)) && (*(longlong *)(uVar2 + 0x10) == 0)) {
      uVar4 = 0;
    }
    if ((((*(ulonglong *)(lVar1 + 0x84a8) != uVar4) || (*(int *)(lVar1 + 0x8870) != -1)) ||
        (*(int *)(lVar1 + 0x8a70) != 0x10)) &&
       (((uVar4 == 0 || (*(longlong *)(uVar4 + 8) != 0)) || (*(longlong *)(uVar4 + 0x10) != 0)))) {
      in_stack_00000058 = uVar5;
      if (uVar4 != 0) {
        in_stack_00000058 = *(ulonglong *)(uVar4 + 0x10);
      }
      (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
                (*(longlong **)(lVar1 + 0x8400),0xe,1,&stack0x00000058);
      *(ulonglong *)(lVar1 + 0x84a8) = uVar4;
      *(int32_t *)(lVar1 + 0x8870) = 0xffffffff;
      *(int32_t *)(lVar1 + 0x8a70) = 0x10;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
    lVar1 = *(longlong *)(system_message_buffer + 0x1cd8);
    uVar4 = uVar5;
    if ((((*(longlong *)(param_3 + 0x70) != 0) && (uVar2 = FUN_18023a940(), uVar2 != 0)) &&
        (uVar4 = uVar2, *(longlong *)(uVar2 + 8) == 0)) && (*(longlong *)(uVar2 + 0x10) == 0)) {
      uVar4 = 0;
    }
    if (((*(ulonglong *)(lVar1 + 0x84b0) != uVar4) || (*(int *)(lVar1 + 0x8874) != -1)) ||
       (*(int *)(lVar1 + 0x8a74) != 0x10)) {
      if (uVar4 != 0) {
        if ((*(longlong *)(uVar4 + 8) == 0) && (*(longlong *)(uVar4 + 0x10) == 0))
        goto LAB_1800d85a5;
        if (uVar4 != 0) {
          uVar5 = *(ulonglong *)(uVar4 + 0x10);
        }
      }
      in_stack_00000050 = uVar5;
      (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
                (*(longlong **)(lVar1 + 0x8400),0xf,1,&stack0x00000050);
      *(ulonglong *)(lVar1 + 0x84b0) = uVar4;
      *(int32_t *)(lVar1 + 0x8874) = 0xffffffff;
      *(int32_t *)(lVar1 + 0x8a74) = 0x10;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
  }
LAB_1800d85a5:
  if (*(longlong *)(param_3 + 0x90) != 0) {
    FUN_180178650();
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001800d8456)
// WARNING: Removing unreachable block (ram,0x0001800d8519)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800d83ba(void)
void FUN_1800d83ba(void)

{
  longlong lVar1;
  longlong in_RAX;
  ulonglong uVar2;
  int unaff_EBX;
  ulonglong uVar3;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong in_stack_00000050;
  ulonglong in_stack_00000058;
  
  if (in_RAX != 0) {
    uVar3 = unaff_RSI & 0xffffffff;
    do {
      FUN_18029d150(*(uint64_t *)(system_message_buffer + 0x1cd8),unaff_EBX + 0x60,
                    *(uint64_t *)(*(longlong *)(unaff_RDI + 0x2d0) + uVar3),0x10,0xffffffff);
      uVar3 = uVar3 + 8;
      unaff_EBX = unaff_EBX + 1;
    } while ((ulonglong)(longlong)unaff_EBX <
             (ulonglong)(*(longlong *)(unaff_RDI + 0x2d8) - *(longlong *)(unaff_RDI + 0x2d0) >> 3));
  }
  if (*(char *)(unaff_RDI + 0xc0) != (char)unaff_RSI) {
    lVar1 = *(longlong *)(system_message_buffer + 0x1cd8);
    uVar3 = unaff_RSI;
    if ((((*(longlong *)(unaff_RDI + 0x78) != 0) && (uVar2 = FUN_18023a940(), uVar2 != 0)) &&
        (uVar3 = uVar2, *(ulonglong *)(uVar2 + 8) == unaff_RSI)) &&
       (*(ulonglong *)(uVar2 + 0x10) == unaff_RSI)) {
      uVar3 = unaff_RSI;
    }
    if ((((*(ulonglong *)(lVar1 + 0x84a8) != uVar3) || (*(int *)(lVar1 + 0x8870) != -1)) ||
        (*(int *)(lVar1 + 0x8a70) != 0x10)) &&
       (((uVar3 == 0 || (*(ulonglong *)(uVar3 + 8) != unaff_RSI)) ||
        (*(ulonglong *)(uVar3 + 0x10) != unaff_RSI)))) {
      in_stack_00000058 = unaff_RSI;
      if (uVar3 != 0) {
        in_stack_00000058 = *(ulonglong *)(uVar3 + 0x10);
      }
      (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
                (*(longlong **)(lVar1 + 0x8400),0xe,1,&stack0x00000058);
      *(ulonglong *)(lVar1 + 0x84a8) = uVar3;
      *(int32_t *)(lVar1 + 0x8870) = 0xffffffff;
      *(int32_t *)(lVar1 + 0x8a70) = 0x10;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
    lVar1 = *(longlong *)(system_message_buffer + 0x1cd8);
    uVar3 = unaff_RSI;
    if ((((*(longlong *)(unaff_RDI + 0x70) != 0) && (uVar2 = FUN_18023a940(), uVar2 != 0)) &&
        (uVar3 = uVar2, *(ulonglong *)(uVar2 + 8) == unaff_RSI)) &&
       (*(ulonglong *)(uVar2 + 0x10) == unaff_RSI)) {
      uVar3 = unaff_RSI;
    }
    if (((*(ulonglong *)(lVar1 + 0x84b0) != uVar3) || (*(int *)(lVar1 + 0x8874) != -1)) ||
       (*(int *)(lVar1 + 0x8a74) != 0x10)) {
      if (uVar3 != 0) {
        if ((*(ulonglong *)(uVar3 + 8) == unaff_RSI) && (*(ulonglong *)(uVar3 + 0x10) == unaff_RSI))
        goto LAB_1800d85a5;
        if (uVar3 != 0) {
          unaff_RSI = *(ulonglong *)(uVar3 + 0x10);
        }
      }
      in_stack_00000050 = unaff_RSI;
      (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
                (*(longlong **)(lVar1 + 0x8400),0xf,1,&stack0x00000050);
      *(ulonglong *)(lVar1 + 0x84b0) = uVar3;
      *(int32_t *)(lVar1 + 0x8874) = 0xffffffff;
      *(int32_t *)(lVar1 + 0x8a74) = 0x10;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
  }
LAB_1800d85a5:
  if (*(longlong *)(unaff_RDI + 0x90) != 0) {
    FUN_180178650();
  }
  return;
}






// 函数: void FUN_1800d85c5(void)
void FUN_1800d85c5(void)

{
  FUN_180178650();
  return;
}






// 函数: void FUN_1800d8a40(longlong param_1)
void FUN_1800d8a40(longlong param_1)

{
  FUN_1808fc8a8(param_1 + 8,0x18,2,FUN_1800e7f20,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800d8a80(longlong param_1)
void FUN_1800d8a80(longlong param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x38))();
  }
  FUN_180080df0();
  if (*(longlong *)(param_1 + 0x28) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puVar2 = *(uint64_t **)(param_1 + 8);
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(uint64_t *)(lVar3 + 0x20);
      *(uint64_t **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}






// 函数: void FUN_1800d8b10(uint64_t param_1)
void FUN_1800d8b10(uint64_t param_1)

{
  FUN_1808fc8a8(param_1,0x488,2,FUN_1800e7ca0,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800d8b40(uint64_t param_1)
void FUN_1800d8b40(uint64_t param_1)

{
  FUN_1808fc8a8(param_1,0x248,2,FUN_1800e7b80,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800d8b70(uint64_t param_1)
void FUN_1800d8b70(uint64_t param_1)

{
  FUN_1808fc8a8(param_1,0x908,2,FUN_1800e7d00,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800d8ba0(uint64_t param_1)
void FUN_1800d8ba0(uint64_t param_1)

{
  FUN_1808fc8a8(param_1,0x50,2,FUN_1800e7c40,0xfffffffffffffffe);
  return;
}






