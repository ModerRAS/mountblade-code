#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 01_initialization_part052.c - 4 个函数

// 函数: void FUN_1800786e0(uint64_t *param_1,int64_t param_2)
void FUN_1800786e0(uint64_t *param_1,int64_t param_2)

{
  int64_t lVar1;
  int32_t uVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  float *pfVar5;
  void *puVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int iVar9;
  float fVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int64_t *plStackX_8;
  uint64_t auStackX_10 [2];
  uint64_t uStackX_20;
  uint64_t uStack_58;
  uint64_t uStack_50;
  int32_t uStack_40;
  
  iVar9 = 0;
  plVar8 = param_1 + 1;
  do {
    plVar3 = (int64_t *)FUN_1801fd480(param_2,iVar9);
    if (plVar3 != (int64_t *)0x0) {
      plStackX_8 = plVar3;
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plStackX_8 = (int64_t *)*plVar8;
    *plVar8 = (int64_t)plVar3;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    if ((((*(char *)(param_2 + 0x380) != '\0') && (*(char *)(param_2 + 0x381) == '\0')) &&
        (lVar1 = *plVar8, lVar1 != 0)) && ((*(uint *)(lVar1 + 0x328) & 0x200000) == 0)) {
      puVar6 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x18) != (void *)0x0) {
        puVar6 = *(void **)(lVar1 + 0x18);
      }
      SystemDataInitializer(&unknown_var_5392_ptr,puVar6);
    }
    iVar9 = iVar9 + 1;
    plVar8 = plVar8 + 1;
  } while (iVar9 < 7);
  uVar4 = FUN_1801fc6c0(param_2,&uStack_58);
  lVar1 = init_system_data_config;
  iVar9 = FUN_180191c00(init_system_data_config,uVar4);
  if ((iVar9 == -1) || (lVar7 = (int64_t)iVar9 * 0x68 + *(int64_t *)(lVar1 + 0x38), lVar7 == 0)) {
    lVar7 = *(int64_t *)(lVar1 + 0x28);
  }
  uStack_58 = &system_data_buffer_ptr;
  if (uStack_50 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_58 = &system_state_ptr;
  if (lVar7 == 0) {
    lVar7 = *(int64_t *)(init_system_data_config + 0x38);
  }
  param_1[0x26] = lVar7;
  if ((*(char *)(param_2 + 0x248) == '\0') && (*(int64_t *)(param_2 + 0x3c8) != 0)) {
    uVar2 = func_0x0001801fc730();
  }
  else {
    uVar2 = *(int32_t *)(param_2 + 0x240);
  }
  *(int32_t *)((int64_t)param_1 + 0x114) = uVar2;
  if ((*(char *)(param_2 + 0x254) == '\0') && (*(int64_t *)(param_2 + 0x3c8) != 0)) {
    uVar2 = func_0x0001801fc760();
  }
  else {
    uVar2 = *(int32_t *)(param_2 + 0x24c);
  }
  *(int32_t *)(param_1 + 0x23) = uVar2;
  if ((*(char *)(param_2 + 0x2f0) == '\0') && (*(int64_t *)(param_2 + 0x3c8) != 0)) {
    FUN_1801fca40(*(int64_t *)(param_2 + 0x3c8),&uStack_58);
    uVar2 = (int32_t)uStack_58;
    uVar11 = uStack_58._4_4_;
    uVar12 = (int32_t)uStack_50;
    uVar13 = uStack_50._4_4_;
  }
  else {
    uVar2 = *(int32_t *)(param_2 + 0x2d0);
    uVar11 = *(int32_t *)(param_2 + 0x2d4);
    uVar12 = *(int32_t *)(param_2 + 0x2d8);
    uVar13 = *(int32_t *)(param_2 + 0x2dc);
  }
  *(int32_t *)(param_1 + 0x20) = uVar2;
  *(int32_t *)((int64_t)param_1 + 0x104) = uVar11;
  *(int32_t *)(param_1 + 0x21) = uVar12;
  *(int32_t *)((int64_t)param_1 + 0x10c) = uVar13;
  if ((*(char *)(param_2 + 0x2fc) == '\0') && (*(int64_t *)(param_2 + 0x3c8) != 0)) {
    uVar2 = func_0x0001801fca90();
  }
  else {
    uVar2 = *(int32_t *)(param_2 + 0x2f4);
  }
  *(int32_t *)(param_1 + 0x22) = uVar2;
  if ((*(char *)(param_2 + 0x260) == '\0') && (*(int64_t *)(param_2 + 0x3c8) != 0)) {
    uVar2 = func_0x0001801fcac0();
  }
  else {
    uVar2 = *(int32_t *)(param_2 + 600);
  }
  *(int32_t *)((int64_t)param_1 + 0x11c) = uVar2;
  if ((*(char *)(param_2 + 0x26c) == '\0') && (*(int64_t *)(param_2 + 0x3c8) != 0)) {
    uVar2 = func_0x0001801fcb00();
  }
  else {
    uVar2 = *(int32_t *)(param_2 + 0x264);
  }
  *(int32_t *)(param_1 + 0x24) = uVar2;
  if ((*(char *)(param_2 + 0x278) == '\0') && (*(int64_t *)(param_2 + 0x3c8) != 0)) {
    uVar2 = func_0x0001801fcb40();
  }
  else {
    uVar2 = *(int32_t *)(param_2 + 0x270);
  }
  *(int32_t *)((int64_t)param_1 + 0x124) = uVar2;
  if ((*(char *)(param_2 + 0x284) == '\0') && (*(int64_t *)(param_2 + 0x3c8) != 0)) {
    uVar2 = func_0x0001801fcb80();
  }
  else {
    uVar2 = *(int32_t *)(param_2 + 0x27c);
  }
  *(int32_t *)(param_1 + 0x25) = uVar2;
  if ((*(char *)(param_2 + 0x290) == '\0') && (*(int64_t *)(param_2 + 0x3c8) != 0)) {
    uVar2 = func_0x0001801fc7a0();
  }
  else {
    uVar2 = *(int32_t *)(param_2 + 0x288);
  }
  *(int32_t *)(param_1 + 0x27) = uVar2;
  if ((*(char *)(param_2 + 0x29c) == '\0') && (*(int64_t *)(param_2 + 0x3c8) != 0)) {
    uVar2 = func_0x0001801fc7d0();
  }
  else {
    uVar2 = *(int32_t *)(param_2 + 0x294);
  }
  *(int32_t *)((int64_t)param_1 + 0x13c) = uVar2;
  if ((*(char *)(param_2 + 0x2a8) == '\0') && (*(int64_t *)(param_2 + 0x3c8) != 0)) {
    uVar2 = func_0x0001801fc800();
  }
  else {
    uVar2 = *(int32_t *)(param_2 + 0x2a0);
  }
  *(int32_t *)(param_1 + 0x28) = uVar2;
  if ((*(char *)(param_2 + 0x2b4) == '\0') && (*(int64_t *)(param_2 + 0x3c8) != 0)) {
    uVar2 = func_0x0001801fc840();
  }
  else {
    uVar2 = *(int32_t *)(param_2 + 0x2ac);
  }
  *(int32_t *)((int64_t)param_1 + 0x144) = uVar2;
  if ((*(char *)(param_2 + 0x2c0) == '\0') && (*(int64_t *)(param_2 + 0x3c8) != 0)) {
    uVar2 = func_0x0001801fc880();
  }
  else {
    uVar2 = *(int32_t *)(param_2 + 0x2b8);
  }
  *(int32_t *)(param_1 + 0x29) = uVar2;
  if ((*(char *)(param_2 + 0x2cc) == '\0') && (*(int64_t *)(param_2 + 0x3c8) != 0)) {
    uVar2 = func_0x0001801fc8c0();
  }
  else {
    uVar2 = *(int32_t *)(param_2 + 0x2c4);
  }
  *(int32_t *)((int64_t)param_1 + 0x14c) = uVar2;
  if ((*(char *)(param_2 + 0x29c) == '\0') && (*(int64_t *)(param_2 + 0x3c8) != 0)) {
    uVar2 = func_0x0001801fc7d0();
  }
  else {
    uVar2 = *(int32_t *)(param_2 + 0x294);
  }
  *(int32_t *)((int64_t)param_1 + 0x13c) = uVar2;
  *(int8_t *)((int64_t)param_1 + 0x152) = *(int8_t *)(param_2 + 0x380);
  *(int8_t *)(param_1 + 0x2a) = *(int8_t *)(param_2 + 0x381);
  if ((*(char *)(param_2 + 0x35c) == '\0') && (*(int64_t *)(param_2 + 0x3c8) != 0)) {
    FUN_1801fc9f0(*(int64_t *)(param_2 + 0x3c8),&plStackX_8);
  }
  else {
    plStackX_8 = *(int64_t **)(param_2 + 0x34c);
  }
  if ((*(char *)(param_2 + 0x348) == '\0') && (*(int64_t *)(param_2 + 0x3c8) != 0)) {
    FUN_1801fc9a0(*(int64_t *)(param_2 + 0x3c8),auStackX_10);
  }
  else {
    auStackX_10[0] = *(uint64_t *)(param_2 + 0x338);
  }
  if ((*(char *)(param_2 + 0x334) == '\0') && (*(int64_t *)(param_2 + 0x3c8) != 0)) {
    FUN_1801fc950(*(int64_t *)(param_2 + 0x3c8),&uStackX_20);
  }
  else {
    uStackX_20 = *(uint64_t *)(param_2 + 0x324);
  }
  if ((*(char *)(param_2 + 800) == '\0') && (*(int64_t *)(param_2 + 0x3c8) != 0)) {
    FUN_1801fc900(*(int64_t *)(param_2 + 0x3c8),&uStack_58);
  }
  else {
    uStack_58 = *(void **)(param_2 + 0x300);
    uStack_50 = *(uint64_t *)(param_2 + 0x308);
  }
  FUN_180084c70(param_1 + 8,&uStack_58,&uStackX_20,auStackX_10,&plStackX_8);
  if ((void *)*param_1 == &unknown_var_7192_ptr) {
    pfVar5 = (float *)(param_1 + 0x10);
    *(uint64_t *)pfVar5 = param_1[8];
    param_1[0x11] = param_1[9];
    param_1[0x12] = param_1[10];
    param_1[0x13] = param_1[0xb];
    *(int32_t *)(param_1 + 0x14) = *(int32_t *)(param_1 + 0xc);
    *(int32_t *)((int64_t)param_1 + 0xa4) = *(int32_t *)((int64_t)param_1 + 100);
    *(int32_t *)(param_1 + 0x15) = *(int32_t *)(param_1 + 0xd);
    *(int32_t *)((int64_t)param_1 + 0xac) = *(int32_t *)((int64_t)param_1 + 0x6c);
    *(int32_t *)(param_1 + 0x16) = *(int32_t *)(param_1 + 0xe);
    *(int32_t *)((int64_t)param_1 + 0xb4) = *(int32_t *)((int64_t)param_1 + 0x74);
    *(int32_t *)(param_1 + 0x17) = *(int32_t *)(param_1 + 0xf);
    *(int32_t *)((int64_t)param_1 + 0xbc) = *(int32_t *)((int64_t)param_1 + 0x7c);
    FUN_180084ae0();
    *(int32_t *)((int64_t)param_1 + 0x8c) = 0;
    *(int32_t *)((int64_t)param_1 + 0x9c) = 0;
    *(int32_t *)((int64_t)param_1 + 0xac) = 0;
    *(int32_t *)((int64_t)param_1 + 0xbc) = 0x3f800000;
    fVar18 = pfVar5[6];
    fVar16 = pfVar5[0xd];
    fVar10 = pfVar5[9];
    fVar17 = pfVar5[1];
    fVar15 = pfVar5[0xe];
    fVar23 = pfVar5[2];
    fVar25 = pfVar5[10];
    fVar28 = pfVar5[5];
    fVar24 = fVar15 * fVar10 - fVar16 * fVar25;
    fVar21 = fVar15 * fVar28 - fVar16 * fVar18;
    fVar22 = fVar15 * fVar17 - fVar16 * fVar23;
    fVar29 = fVar28 * fVar25 - fVar10 * fVar18;
    fVar20 = fVar17 * fVar25 - fVar10 * fVar23;
    *(float *)(param_1 + 0x18) = fVar29;
    fVar19 = fVar17 * fVar18 - fVar28 * fVar23;
    fVar30 = fVar23 * pfVar5[9] - fVar25 * pfVar5[1];
    *(float *)((int64_t)param_1 + 0xc4) = fVar30;
    fVar16 = pfVar5[5];
    fVar15 = pfVar5[1];
    *(int32_t *)((int64_t)param_1 + 0xcc) = 0;
    fVar31 = fVar18 * fVar15 - fVar23 * fVar16;
    *(float *)(param_1 + 0x19) = fVar31;
    fVar14 = fVar18 * pfVar5[8] - fVar25 * pfVar5[4];
    *(float *)(param_1 + 0x1a) = fVar14;
    fVar27 = fVar25 * *pfVar5 - fVar23 * pfVar5[8];
    *(float *)((int64_t)param_1 + 0xd4) = fVar27;
    fVar16 = pfVar5[4];
    fVar15 = *pfVar5;
    *(int32_t *)((int64_t)param_1 + 0xdc) = 0;
    fVar26 = fVar23 * fVar16 - fVar18 * fVar15;
    *(float *)(param_1 + 0x1b) = fVar26;
    fVar15 = fVar10 * pfVar5[4] - fVar28 * pfVar5[8];
    *(float *)(param_1 + 0x1c) = fVar15;
    fVar10 = fVar17 * pfVar5[8] - fVar10 * *pfVar5;
    *(float *)((int64_t)param_1 + 0xe4) = fVar10;
    fVar18 = pfVar5[4];
    fVar16 = *pfVar5;
    *(int32_t *)((int64_t)param_1 + 0xec) = 0;
    fVar28 = fVar28 * fVar16 - fVar17 * fVar18;
    *(float *)(param_1 + 0x1d) = fVar28;
    fVar16 = (fVar21 * pfVar5[8] - fVar24 * pfVar5[4]) - fVar29 * pfVar5[0xc];
    *(float *)(param_1 + 0x1e) = fVar16;
    fVar25 = (fVar24 * *pfVar5 - fVar22 * pfVar5[8]) + fVar20 * pfVar5[0xc];
    *(float *)((int64_t)param_1 + 0xf4) = fVar25;
    fVar23 = (fVar22 * pfVar5[4] - fVar21 * *pfVar5) - fVar19 * pfVar5[0xc];
    *(float *)(param_1 + 0x1f) = fVar23;
    fVar17 = (fVar29 * *pfVar5 - fVar20 * pfVar5[4]) + fVar19 * pfVar5[8];
    *(float *)((int64_t)param_1 + 0xfc) = fVar17;
    fVar18 = fVar30 * pfVar5[4] + fVar29 * *pfVar5 + fVar31 * pfVar5[8];
    if (fVar18 != 1.0) {
      fVar18 = 1.0 / fVar18;
      *(float *)(param_1 + 0x1a) = fVar14 * fVar18;
      *(float *)(param_1 + 0x1c) = fVar15 * fVar18;
      *(float *)(param_1 + 0x18) = fVar29 * fVar18;
      *(float *)((int64_t)param_1 + 0xc4) = fVar30 * fVar18;
      *(float *)(param_1 + 0x19) = fVar31 * fVar18;
      *(float *)((int64_t)param_1 + 0xd4) = fVar27 * fVar18;
      *(float *)(param_1 + 0x1b) = fVar26 * fVar18;
      *(float *)((int64_t)param_1 + 0xe4) = fVar10 * fVar18;
      *(float *)(param_1 + 0x1d) = fVar28 * fVar18;
      *(float *)(param_1 + 0x1e) = fVar16 * fVar18;
      *(float *)((int64_t)param_1 + 0xf4) = fVar25 * fVar18;
      *(float *)(param_1 + 0x1f) = fVar23 * fVar18;
      *(float *)((int64_t)param_1 + 0xfc) = fVar17 * fVar18;
    }
    return;
  }
  (**(code **)((void *)*param_1 + 0x10))(param_1);
  return;
}





// 函数: void FUN_180078c10(int64_t param_1)
void FUN_180078c10(int64_t param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  pfVar1 = (float *)(param_1 + 0x80);
  *(uint64_t *)pfVar1 = *(uint64_t *)(param_1 + 0x40);
  *(uint64_t *)(param_1 + 0x88) = *(uint64_t *)(param_1 + 0x48);
  *(uint64_t *)(param_1 + 0x90) = *(uint64_t *)(param_1 + 0x50);
  *(uint64_t *)(param_1 + 0x98) = *(uint64_t *)(param_1 + 0x58);
  *(int32_t *)(param_1 + 0xa0) = *(int32_t *)(param_1 + 0x60);
  *(int32_t *)(param_1 + 0xa4) = *(int32_t *)(param_1 + 100);
  *(int32_t *)(param_1 + 0xa8) = *(int32_t *)(param_1 + 0x68);
  *(int32_t *)(param_1 + 0xac) = *(int32_t *)(param_1 + 0x6c);
  *(int32_t *)(param_1 + 0xb0) = *(int32_t *)(param_1 + 0x70);
  *(int32_t *)(param_1 + 0xb4) = *(int32_t *)(param_1 + 0x74);
  *(int32_t *)(param_1 + 0xb8) = *(int32_t *)(param_1 + 0x78);
  *(int32_t *)(param_1 + 0xbc) = *(int32_t *)(param_1 + 0x7c);
  FUN_180084ae0();
  *(int32_t *)(param_1 + 0xbc) = 0x3f800000;
  *(int32_t *)(param_1 + 0x8c) = 0;
  *(int32_t *)(param_1 + 0x9c) = 0;
  *(int32_t *)(param_1 + 0xac) = 0;
  fVar7 = pfVar1[6];
  fVar5 = pfVar1[0xd];
  fVar2 = pfVar1[9];
  fVar6 = pfVar1[1];
  fVar4 = pfVar1[0xe];
  fVar12 = pfVar1[2];
  fVar14 = pfVar1[10];
  fVar17 = pfVar1[5];
  fVar13 = fVar4 * fVar2 - fVar5 * fVar14;
  fVar10 = fVar4 * fVar17 - fVar5 * fVar7;
  fVar11 = fVar4 * fVar6 - fVar5 * fVar12;
  fVar18 = fVar17 * fVar14 - fVar2 * fVar7;
  fVar9 = fVar6 * fVar14 - fVar2 * fVar12;
  *(float *)(param_1 + 0xc0) = fVar18;
  fVar8 = fVar6 * fVar7 - fVar17 * fVar12;
  fVar19 = fVar12 * pfVar1[9] - fVar14 * pfVar1[1];
  *(float *)(param_1 + 0xc4) = fVar19;
  fVar5 = pfVar1[5];
  fVar4 = pfVar1[1];
  *(int32_t *)(param_1 + 0xcc) = 0;
  fVar20 = fVar7 * fVar4 - fVar12 * fVar5;
  *(float *)(param_1 + 200) = fVar20;
  fVar3 = fVar7 * pfVar1[8] - fVar14 * pfVar1[4];
  *(float *)(param_1 + 0xd0) = fVar3;
  fVar16 = fVar14 * *pfVar1 - fVar12 * pfVar1[8];
  *(float *)(param_1 + 0xd4) = fVar16;
  fVar5 = pfVar1[4];
  fVar4 = *pfVar1;
  *(int32_t *)(param_1 + 0xdc) = 0;
  fVar15 = fVar12 * fVar5 - fVar7 * fVar4;
  *(float *)(param_1 + 0xd8) = fVar15;
  fVar4 = fVar2 * pfVar1[4] - fVar17 * pfVar1[8];
  *(float *)(param_1 + 0xe0) = fVar4;
  fVar2 = fVar6 * pfVar1[8] - fVar2 * *pfVar1;
  *(float *)(param_1 + 0xe4) = fVar2;
  fVar7 = pfVar1[4];
  fVar5 = *pfVar1;
  *(int32_t *)(param_1 + 0xec) = 0;
  fVar17 = fVar17 * fVar5 - fVar6 * fVar7;
  *(float *)(param_1 + 0xe8) = fVar17;
  fVar5 = (fVar10 * pfVar1[8] - fVar13 * pfVar1[4]) - fVar18 * pfVar1[0xc];
  *(float *)(param_1 + 0xf0) = fVar5;
  fVar14 = (fVar13 * *pfVar1 - fVar11 * pfVar1[8]) + fVar9 * pfVar1[0xc];
  *(float *)(param_1 + 0xf4) = fVar14;
  fVar12 = (fVar11 * pfVar1[4] - fVar10 * *pfVar1) - fVar8 * pfVar1[0xc];
  *(float *)(param_1 + 0xf8) = fVar12;
  fVar6 = (fVar18 * *pfVar1 - fVar9 * pfVar1[4]) + fVar8 * pfVar1[8];
  *(float *)(param_1 + 0xfc) = fVar6;
  fVar7 = fVar19 * pfVar1[4] + fVar18 * *pfVar1 + fVar20 * pfVar1[8];
  if (fVar7 != 1.0) {
    fVar7 = 1.0 / fVar7;
    *(float *)(param_1 + 0xd0) = fVar3 * fVar7;
    *(float *)(param_1 + 0xe0) = fVar4 * fVar7;
    *(float *)(param_1 + 0xc0) = fVar18 * fVar7;
    *(float *)(param_1 + 0xc4) = fVar19 * fVar7;
    *(float *)(param_1 + 200) = fVar20 * fVar7;
    *(float *)(param_1 + 0xd4) = fVar16 * fVar7;
    *(float *)(param_1 + 0xd8) = fVar15 * fVar7;
    *(float *)(param_1 + 0xe4) = fVar2 * fVar7;
    *(float *)(param_1 + 0xe8) = fVar17 * fVar7;
    *(float *)(param_1 + 0xf0) = fVar5 * fVar7;
    *(float *)(param_1 + 0xf4) = fVar14 * fVar7;
    *(float *)(param_1 + 0xf8) = fVar12 * fVar7;
    *(float *)(param_1 + 0xfc) = fVar6 * fVar7;
  }
  return;
}





// 函数: void FUN_180078c70(int32_t *param_1,int64_t *param_2)
void FUN_180078c70(int32_t *param_1,int64_t *param_2)

{
  int32_t uVar1;
  int32_t *puVar2;
  
  uVar1 = *param_1;
  puVar2 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  uVar1 = param_1[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  uVar1 = param_1[2];
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  uVar1 = param_1[3];
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = 0x3f800000;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  uVar1 = param_1[5];
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  uVar1 = param_1[6];
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  uVar1 = param_1[7];
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = 0x3f800000;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  uVar1 = param_1[9];
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  uVar1 = param_1[10];
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  uVar1 = param_1[0xb];
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = 0x3f800000;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  uVar1 = param_1[0xd];
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  uVar1 = param_1[0xe];
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  uVar1 = param_1[0xf];
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = 0x3f800000;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  uVar1 = param_1[0x11];
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  uVar1 = param_1[0x12];
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  uVar1 = param_1[0x13];
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  uVar1 = param_1[0x14];
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  uVar1 = param_1[0x15];
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  uVar1 = param_1[0x16];
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    *(int32_t *)param_2[1] = uVar1;
  }
  else {
    *puVar2 = uVar1;
  }
  param_2[1] = param_2[1] + 4;
  return;
}





// 函数: void FUN_1800791a0(int64_t param_1)
void FUN_1800791a0(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  byte bVar3;
  
  lVar2 = *(int64_t *)(param_1 + 0x210);
  *(int32_t *)(param_1 + 0x1f8) = *(int32_t *)(lVar2 + 0x10);
  *(int32_t *)(param_1 + 0x1fc) = *(int32_t *)(lVar2 + 0x88);
  *(int32_t *)(param_1 + 0x200) = *(int32_t *)(lVar2 + 0x60);
  bVar3 = *(byte *)(param_1 + 0xfd) & 0x40;
  if ((((bVar3 != 0) && (lVar2 != 0)) || (*(int64_t *)(param_1 + 0x1b0) == 0)) ||
     (lVar1 = FUN_180085900(), param_1 == lVar1)) {
    *(int32_t *)(param_1 + 0x204) = *(int32_t *)(lVar2 + 200);
  }
  if (((bVar3 == 0) || (lVar2 == 0)) &&
     ((*(int64_t *)(param_1 + 0x1b0) != 0 && (lVar1 = FUN_180085900(), param_1 != lVar1)))) {
    return;
  }
  *(uint *)(param_1 + 0x208) = (uint)*(ushort *)(lVar2 + 0xc0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



