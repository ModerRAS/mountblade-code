#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part035.c - 17 个函数

// 函数: void FUN_1801eda00(void)
void FUN_1801eda00(void)

{
  int *piVar1;
  ushort *puVar2;
  float fVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int16_t *puVar11;
  int iVar12;
  uint64_t *puVar13;
  uint64_t *puVar14;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int iVar15;
  int64_t in_R10;
  float fVar16;
  float fVar17;
  float unaff_XMM6_Da;
  float fVar18;
  float unaff_XMM7_Da;
  float fVar19;
  float fVar20;
  float unaff_XMM11_Da;
  
code_r0x0001801eda00:
  puVar13 = *(uint64_t **)(in_R10 + 0x10);
  uVar10 = *puVar13;
  if ((uVar10 == puVar13[1]) && (puVar13[1] = puVar13[8], uVar10 == puVar13[8])) {
    if (puVar13 == *(uint64_t **)(in_R10 + 0x50)) goto LAB_1801edb41;
    puVar13 = *(uint64_t **)(in_R10 + 0x10);
    puVar13[1] = puVar13[8];
    uVar10 = *puVar13;
    if (uVar10 != puVar13[8]) goto LAB_1801eda8e;
    puVar13 = (uint64_t *)puVar13[0x10];
    uVar10 = *puVar13;
    puVar13[1] = puVar13[8];
    *(uint64_t **)(in_R10 + 0x10) = puVar13;
    uVar5 = puVar13[0x11];
    lVar9 = uVar10 * 0x1c;
    uVar7 = ((uint64_t *)(uVar5 + lVar9))[1];
    iVar12 = *(int *)(uVar5 + 0x18 + lVar9);
    uVar4 = *(uint64_t *)(uVar5 + 0x10 + lVar9);
    uVar6 = puVar13[0x12];
    *(uint64_t *)(unaff_RBP + -0x39) = *(uint64_t *)(uVar5 + lVar9);
    *(uint64_t *)(unaff_RBP + -0x31) = uVar7;
    *(int *)(unaff_RBP + -0x21) = iVar12;
    *(uint64_t *)(unaff_RBP + -0x29) = uVar4;
    *puVar13 = uVar6 & uVar10 + 1;
  }
  else {
LAB_1801eda8e:
    uVar5 = puVar13[0x11];
    lVar9 = uVar10 * 0x1c;
    uVar7 = ((uint64_t *)(lVar9 + uVar5))[1];
    iVar12 = *(int *)(lVar9 + 0x18 + uVar5);
    uVar4 = *(uint64_t *)(lVar9 + 0x10 + uVar5);
    uVar6 = puVar13[0x12];
    *(uint64_t *)(unaff_RBP + -0x39) = *(uint64_t *)(lVar9 + uVar5);
    *(uint64_t *)(unaff_RBP + -0x31) = uVar7;
    *(int *)(unaff_RBP + -0x21) = iVar12;
    *(uint64_t *)(unaff_RBP + -0x29) = uVar4;
    *puVar13 = uVar10 + 1 & uVar6;
  }
  if (*(int *)(unaff_RBP + -0x39) == 0) {
    piVar1 = (int *)(*(int64_t *)(unaff_RBX + 0x2010) + 0x60);
    *piVar1 = *piVar1 + *(int *)(unaff_RBP + -0x29);
    piVar1 = (int *)(*(int64_t *)(unaff_RBX + 0x2010) + 100);
    *piVar1 = *piVar1 + (int)((uint64_t)*(uint64_t *)(unaff_RBP + -0x29) >> 0x20);
  }
  else if (*(int *)(unaff_RBP + -0x39) == 3) {
    piVar1 = (int *)(*(int64_t *)(unaff_RBX + 0x2010) + 0x68);
    *piVar1 = *piVar1 + iVar12;
  }
  else {
    *(uint64_t *)(unaff_RBP + 0x67) = *(uint64_t *)(unaff_RBP + -0x31);
    fVar19 = *(float *)(unaff_RBP + 0x67);
    uVar10 = *(uint64_t *)(unaff_RBP + -0x39) >> 0x20 & 0xff;
    *(uint64_t *)(unaff_RBX + 0x1804 + uVar10 * 8) = *(uint64_t *)(unaff_RBP + -0x31);
    *(int8_t *)(unaff_RBX + 0x18 + uVar10 * 0x18) = 0;
    puVar2 = (ushort *)(unaff_RBX + 0x14 + uVar10 * 0x18);
    *puVar2 = *puVar2 | (fVar19 <= unaff_XMM6_Da) + 1;
  }
  goto code_r0x0001801eda00;
LAB_1801edb41:
  *(uint64_t *)(unaff_RBX + 0x2020) = 0;
  lVar9 = system_operation_state;
  if (((-1 < *(int *)(*(int64_t *)(unaff_RBX + 0x2018) + 0x330)) &&
      (*(char *)(system_operation_state + 0x1609) != '\0')) && (*(char *)(unaff_RBX + 0x2028) == '\0')) {
    *(uint64_t *)(unaff_RBP + 0x67) = *(uint64_t *)(unaff_RBX + 0x14d4);
    fVar19 = *(float *)(unaff_RBP + 0x6b);
    fVar20 = *(float *)(unaff_RBP + 0x67);
    if (SQRT(fVar19 * fVar19 + fVar20 * fVar20) != unaff_XMM7_Da) {
      fVar3 = *(float *)(lVar9 + 0x17f0);
      fVar16 = (float)expf(*(float *)(SYSTEM_STATE_MANAGER + 0x16c0) * 4.0);
      fVar18 = *(float *)(unaff_RBX + 0x202c);
      fVar17 = (float)powf();
      lVar8 = system_main_module_state;
      fVar18 = fVar16 * 125.0 * fVar18 * fVar17 * unaff_XMM11_Da;
      fVar20 = fVar20 * fVar18 * *(float *)(lVar9 + 0x17ec) * 0.00052083336;
      fVar19 = fVar19 * fVar18 * fVar3 * -0.0009259259;
      *(float *)(unaff_RBX + 0x2020) = fVar20;
      *(int *)(unaff_RBP + 0x67) = (int)fVar20;
      *(float *)(unaff_RBX + 0x2024) = fVar19;
      uVar4 = *(uint64_t *)(lVar8 + 8);
      *(int *)(unaff_RBP + 0x6b) = (int)fVar19;
      FUN_180174080(uVar4,*(uint64_t *)(unaff_RBP + 0x67));
      lVar9 = *(int64_t *)(system_main_module_state + 8);
      uVar10 = (uint64_t)(*(uint *)(lVar9 + 0x13c) & 1);
      *(int32_t *)(unaff_RBP + -0x79) = *(int32_t *)(lVar9 + 0xac + uVar10 * 0x48);
      *(int32_t *)(unaff_RBP + -0x71) = *(int32_t *)(lVar9 + 0xb4 + uVar10 * 0x48);
      *(int32_t *)(unaff_RBP + -0x75) = *(int32_t *)(lVar9 + 0xb0 + uVar10 * 0x48);
      *(int32_t *)(unaff_RBP + -0x6d) = *(int32_t *)(lVar9 + 0xb8 + uVar10 * 0x48);
      lVar8 = system_main_module_state;
      lVar9 = *(int64_t *)(system_main_module_state + 8);
      uVar10 = (uint64_t)(*(uint *)(lVar9 + 0x13c) & 1);
      iVar12 = *(int *)(lVar9 + 0xf0 + uVar10 * 0x48) + *(int *)(unaff_RBP + -0x75);
      iVar15 = *(int *)(lVar9 + 0xec + uVar10 * 0x48) + *(int *)(unaff_RBP + -0x79);
      *(int *)(unaff_RBP + -0x6d) = *(int *)(unaff_RBP + -0x6d) + iVar12;
      *(int *)(unaff_RBP + -0x71) = *(int *)(unaff_RBP + -0x71) + iVar15;
      uVar4 = *(uint64_t *)(lVar8 + 8);
      *(int *)(unaff_RBP + -0x75) = iVar12;
      *(int *)(unaff_RBP + -0x79) = iVar15;
      FUN_180171fb0(uVar4,unaff_RBP + -0x79);
    }
  }
  if (*(char *)(unaff_RBX + 0x2029) == '\0') {
    if (*(char *)(unaff_RBX + 0x2028) == '\0') goto LAB_1801ede50;
    FUN_180171d50(*(uint64_t *)(system_main_module_state + 8),unaff_RBP + -0x59,0);
    fVar19 = (float)(*(int *)(unaff_RBP + -0x51) - *(int *)(unaff_RBP + -0x59)) *
             *(float *)(system_operation_state + 0x17e0);
    FUN_180093780(fVar19,(int)fVar19 + *(int *)(unaff_RBP + -0x59),
                  (int)((float)(*(int *)(unaff_RBP + -0x4d) - *(int *)(unaff_RBP + -0x55)) *
                       *(float *)(system_operation_state + 0x17e4)) + *(int *)(unaff_RBP + -0x55));
    FUN_1801723a0(*(uint64_t *)(system_main_module_state + 8),*(int8_t *)(system_operation_state + 0x160a),
                  *(int32_t *)(system_operation_state + 0x160c));
    lVar9 = 0;
  }
  else {
    if (*(char *)(unaff_RBX + 0x2028) != '\0') goto LAB_1801ede50;
    FUN_180171d50(*(uint64_t *)(system_main_module_state + 8),unaff_RBP + -0x49,0);
    FUN_1801723a0(*(uint64_t *)(system_main_module_state + 8),0,1);
    lVar9 = unaff_RBP + -0x49;
  }
  FUN_180171fb0(*(uint64_t *)(system_main_module_state + 8),lVar9);
LAB_1801ede50:
  lVar9 = 0x100;
  puVar11 = (int16_t *)(unaff_RBX + 0x16);
  puVar14 = (uint64_t *)(unaff_RBX + 0x1804);
  do {
    *puVar11 = puVar11[-1];
    *(uint64_t *)(puVar11 + -5) = *(uint64_t *)(puVar11 + -9);
    *(uint64_t *)(puVar11 + -9) = *puVar14;
    *(int8_t *)(puVar11 + 1) = 0;
    lVar9 = lVar9 + -1;
    puVar11 = puVar11 + 0xc;
    puVar14 = puVar14 + 1;
  } while (lVar9 != 0);
  *(int8_t *)(unaff_RBX + 0x2029) = *(int8_t *)(unaff_RBX + 0x2028);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801edb8b(void)
void FUN_1801edb8b(void)

{
  float fVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t in_RAX;
  uint64_t uVar4;
  int16_t *puVar5;
  int iVar6;
  uint64_t *puVar7;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int iVar8;
  int64_t lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_XMM7_Da;
  float fVar13;
  float fVar14;
  float unaff_XMM11_Da;
  
  *(uint64_t *)(unaff_RBP + 0x67) = in_RAX;
  fVar13 = *(float *)(unaff_RBP + 0x6b);
  fVar14 = *(float *)(unaff_RBP + 0x67);
  if (SQRT(fVar13 * fVar13 + fVar14 * fVar14) != unaff_XMM7_Da) {
    fVar1 = *(float *)(unaff_RDI + 0x17f0);
    fVar10 = (float)expf(*(float *)(SYSTEM_STATE_MANAGER + 0x16c0) * 4.0);
    fVar12 = *(float *)(unaff_RBX + 0x202c);
    fVar11 = (float)powf();
    lVar9 = system_main_module_state;
    fVar12 = fVar10 * 125.0 * fVar12 * fVar11 * unaff_XMM11_Da;
    fVar14 = fVar14 * fVar12 * *(float *)(unaff_RDI + 0x17ec) * 0.00052083336;
    fVar13 = fVar13 * fVar12 * fVar1 * -0.0009259259;
    *(float *)(unaff_RBX + 0x2020) = fVar14;
    *(int *)(unaff_RBP + 0x67) = (int)fVar14;
    *(float *)(unaff_RBX + 0x2024) = fVar13;
    uVar2 = *(uint64_t *)(lVar9 + 8);
    *(int *)(unaff_RBP + 0x6b) = (int)fVar13;
    FUN_180174080(uVar2,*(uint64_t *)(unaff_RBP + 0x67));
    lVar9 = *(int64_t *)(system_main_module_state + 8);
    uVar4 = (uint64_t)(*(uint *)(lVar9 + 0x13c) & 1);
    *(int32_t *)(unaff_RBP + -0x79) = *(int32_t *)(lVar9 + 0xac + uVar4 * 0x48);
    *(int32_t *)(unaff_RBP + -0x71) = *(int32_t *)(lVar9 + 0xb4 + uVar4 * 0x48);
    *(int32_t *)(unaff_RBP + -0x75) = *(int32_t *)(lVar9 + 0xb0 + uVar4 * 0x48);
    *(int32_t *)(unaff_RBP + -0x6d) = *(int32_t *)(lVar9 + 0xb8 + uVar4 * 0x48);
    lVar3 = system_main_module_state;
    lVar9 = *(int64_t *)(system_main_module_state + 8);
    uVar4 = (uint64_t)(*(uint *)(lVar9 + 0x13c) & 1);
    iVar6 = *(int *)(lVar9 + 0xf0 + uVar4 * 0x48) + *(int *)(unaff_RBP + -0x75);
    iVar8 = *(int *)(lVar9 + 0xec + uVar4 * 0x48) + *(int *)(unaff_RBP + -0x79);
    *(int *)(unaff_RBP + -0x6d) = *(int *)(unaff_RBP + -0x6d) + iVar6;
    *(int *)(unaff_RBP + -0x71) = *(int *)(unaff_RBP + -0x71) + iVar8;
    uVar2 = *(uint64_t *)(lVar3 + 8);
    *(int *)(unaff_RBP + -0x75) = iVar6;
    *(int *)(unaff_RBP + -0x79) = iVar8;
    FUN_180171fb0(uVar2,unaff_RBP + -0x79);
  }
  if (*(char *)(unaff_RBX + 0x2029) == '\0') {
    if (*(char *)(unaff_RBX + 0x2028) == '\0') goto LAB_1801ede50;
    FUN_180171d50(*(uint64_t *)(system_main_module_state + 8),unaff_RBP + -0x59,0);
    fVar13 = (float)(*(int *)(unaff_RBP + -0x51) - *(int *)(unaff_RBP + -0x59)) *
             *(float *)(system_operation_state + 0x17e0);
    FUN_180093780(fVar13,(int)fVar13 + *(int *)(unaff_RBP + -0x59),
                  (int)((float)(*(int *)(unaff_RBP + -0x4d) - *(int *)(unaff_RBP + -0x55)) *
                       *(float *)(system_operation_state + 0x17e4)) + *(int *)(unaff_RBP + -0x55));
    FUN_1801723a0(*(uint64_t *)(system_main_module_state + 8),*(int8_t *)(system_operation_state + 0x160a),
                  *(int32_t *)(system_operation_state + 0x160c));
    lVar9 = 0;
  }
  else {
    if (*(char *)(unaff_RBX + 0x2028) != '\0') goto LAB_1801ede50;
    FUN_180171d50(*(uint64_t *)(system_main_module_state + 8),unaff_RBP + -0x49,0);
    FUN_1801723a0(*(uint64_t *)(system_main_module_state + 8),0,1);
    lVar9 = unaff_RBP + -0x49;
  }
  FUN_180171fb0(*(uint64_t *)(system_main_module_state + 8),lVar9);
LAB_1801ede50:
  lVar9 = 0x100;
  puVar5 = (int16_t *)(unaff_RBX + 0x16);
  puVar7 = (uint64_t *)(unaff_RBX + 0x1804);
  do {
    *puVar5 = puVar5[-1];
    *(uint64_t *)(puVar5 + -5) = *(uint64_t *)(puVar5 + -9);
    *(uint64_t *)(puVar5 + -9) = *puVar7;
    *(int8_t *)(puVar5 + 1) = 0;
    lVar9 = lVar9 + -1;
    puVar5 = puVar5 + 0xc;
    puVar7 = puVar7 + 1;
  } while (lVar9 != 0);
  *(int8_t *)(unaff_RBX + 0x2029) = *(int8_t *)(unaff_RBX + 0x2028);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801edd42(void)
void FUN_1801edd42(void)

{
  int16_t *puVar1;
  uint64_t *puVar2;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t lVar3;
  float fVar4;
  
  if (*(char *)(unaff_RBX + 0x2029) == '\0') {
    if (*(char *)(unaff_RBX + 0x2028) == '\0') goto LAB_1801ede50;
    FUN_180171d50(*(uint64_t *)(system_main_module_state + 8),unaff_RBP + -0x59,0);
    fVar4 = (float)(*(int *)(unaff_RBP + -0x51) - *(int *)(unaff_RBP + -0x59)) *
            *(float *)(system_operation_state + 0x17e0);
    FUN_180093780(fVar4,(int)fVar4 + *(int *)(unaff_RBP + -0x59),
                  (int)((float)(*(int *)(unaff_RBP + -0x4d) - *(int *)(unaff_RBP + -0x55)) *
                       *(float *)(system_operation_state + 0x17e4)) + *(int *)(unaff_RBP + -0x55));
    FUN_1801723a0(*(uint64_t *)(system_main_module_state + 8),*(int8_t *)(system_operation_state + 0x160a),
                  *(int32_t *)(system_operation_state + 0x160c));
    lVar3 = 0;
  }
  else {
    if (*(char *)(unaff_RBX + 0x2028) != '\0') goto LAB_1801ede50;
    FUN_180171d50(*(uint64_t *)(system_main_module_state + 8),unaff_RBP + -0x49,0);
    FUN_1801723a0(*(uint64_t *)(system_main_module_state + 8),0,1);
    lVar3 = unaff_RBP + -0x49;
  }
  FUN_180171fb0(*(uint64_t *)(system_main_module_state + 8),lVar3);
LAB_1801ede50:
  lVar3 = 0x100;
  puVar1 = (int16_t *)(unaff_RBX + 0x16);
  puVar2 = (uint64_t *)(unaff_RBX + 0x1804);
  do {
    *puVar1 = puVar1[-1];
    *(uint64_t *)(puVar1 + -5) = *(uint64_t *)(puVar1 + -9);
    *(uint64_t *)(puVar1 + -9) = *puVar2;
    *(int8_t *)(puVar1 + 1) = 0;
    lVar3 = lVar3 + -1;
    puVar1 = puVar1 + 0xc;
    puVar2 = puVar2 + 1;
  } while (lVar3 != 0);
  *(int8_t *)(unaff_RBX + 0x2029) = *(int8_t *)(unaff_RBX + 0x2028);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801edd6c(void)
void FUN_1801edd6c(void)

{
  int16_t *puVar1;
  uint64_t *puVar2;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t lVar3;
  
  if (*(char *)(unaff_RBX + 0x2028) == '\0') {
    FUN_180171d50(*(uint64_t *)(system_main_module_state + 8),unaff_RBP + -0x49,0);
    FUN_1801723a0(*(uint64_t *)(system_main_module_state + 8),0,1);
    FUN_180171fb0(*(uint64_t *)(system_main_module_state + 8),unaff_RBP + -0x49);
  }
  lVar3 = 0x100;
  puVar1 = (int16_t *)(unaff_RBX + 0x16);
  puVar2 = (uint64_t *)(unaff_RBX + 0x1804);
  do {
    *puVar1 = puVar1[-1];
    *(uint64_t *)(puVar1 + -5) = *(uint64_t *)(puVar1 + -9);
    *(uint64_t *)(puVar1 + -9) = *puVar2;
    *(int8_t *)(puVar1 + 1) = 0;
    lVar3 = lVar3 + -1;
    puVar1 = puVar1 + 0xc;
    puVar2 = puVar2 + 1;
  } while (lVar3 != 0);
  *(int8_t *)(unaff_RBX + 0x2029) = *(int8_t *)(unaff_RBX + 0x2028);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801edeb0(uint64_t param_1,uint64_t *param_2)
void FUN_1801edeb0(uint64_t param_1,uint64_t *param_2)

{
  uint64_t auStackX_8 [4];
  uint64_t uStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  int32_t uStack_10;
  
  switch(*(int32_t *)param_2) {
  case 0:
  case 3:
    uStack_28 = *param_2;
    uStack_20 = param_2[1];
    uStack_10 = *(int32_t *)(param_2 + 3);
    uStack_18 = param_2[2];
    auStackX_8[0] = param_1;
    goto code_r0x0001801edf18;
  case 1:
    uStack_28 = *param_2;
    uStack_18 = param_2[2];
    auStackX_8[0] = 0x3f800000;
    break;
  case 2:
    uStack_28 = *param_2;
    auStackX_8[0] = 0;
    uStack_18 = param_2[2];
    break;
  case 4:
    uStack_28 = *param_2;
    auStackX_8[0] = 0x3f800000;
    goto code_r0x0001801edf82;
  case 5:
    uStack_28 = *param_2;
    auStackX_8[0] = 0;
code_r0x0001801edf82:
    uStack_20 = auStackX_8[0];
    FUN_1801ee230(*(uint64_t *)(system_system_data_config + 0x2008),&uStack_28);
    return;
  case 6:
    auStackX_8[0] = *param_2;
    FUN_1801ee110(*(int64_t *)(system_system_data_config + 0x2008) + 0x50,auStackX_8);
  default:
    return;
  }
  uStack_10 = *(int32_t *)(param_2 + 3);
  uStack_20 = auStackX_8[0];
code_r0x0001801edf18:
  FUN_1801ee360(*(int64_t *)(system_system_data_config + 0x2010) + 0x10,&uStack_28);
  return;
}






// 函数: void FUN_1801edff0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801edff0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
                    // WARNING: Subroutine does not return
  memset(param_1,0,0x58,param_4,0xfffffffffffffffe);
}






// 函数: void FUN_1801ee060(int64_t *param_1)
void FUN_1801ee060(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  
  lVar2 = param_1[2];
  lVar1 = param_1[4];
  plVar3 = (int64_t *)param_1[5];
  while (lVar2 != param_1[6]) {
    lVar2 = lVar2 + 0x10;
    if (lVar2 == lVar1) {
      plVar3 = plVar3 + 1;
      lVar2 = *plVar3;
      lVar1 = lVar2 + 0x100;
    }
  }
  if (*param_1 != 0) {
    plVar3 = (int64_t *)param_1[5];
    while (plVar3 < (int64_t *)(param_1[9] + 8)) {
      lVar1 = *plVar3;
      plVar3 = plVar3 + 1;
      if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = 0;
  }
  return;
}



uint64_t FUN_1801ee110(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  puVar1 = (uint64_t *)param_1[8];
  uVar6 = puVar1[0x12] & puVar1[8] + 1;
  if ((uVar6 == puVar1[9]) && (puVar1[9] = *puVar1, uVar6 == *puVar1)) {
    if (puVar1[0x10] == *param_1) {
      uVar6 = param_1[9];
      if (uVar6 < 0x200) {
        uVar6 = uVar6 * 2;
      }
      uVar5 = FUN_1801ee610(uVar6);
      if (uVar5 == 0) {
        return 0;
      }
      param_1[9] = uVar6;
      **(uint64_t **)(uVar5 + 0x88) = *param_2;
      *(uint64_t *)(uVar5 + 8) = 1;
      *(uint64_t *)(uVar5 + 0x40) = 1;
      uVar4 = puVar1[0x10];
      *(uint64_t *)(uVar5 + 0x80) = uVar4;
      puVar1[0x10] = uVar5;
      param_1[8] = uVar5;
    }
    else {
      puVar2 = (uint64_t *)puVar1[0x10];
      puVar2[9] = *puVar2;
      lVar3 = puVar2[8];
      puVar2[9] = *puVar2;
      *(uint64_t *)(puVar2[0x11] + lVar3 * 8) = *param_2;
      uVar4 = lVar3 + 1U & puVar2[0x12];
      puVar2[8] = uVar4;
      param_1[8] = (uint64_t)puVar2;
    }
  }
  else {
    uVar4 = *param_2;
    *(uint64_t *)(puVar1[0x11] + puVar1[8] * 8) = uVar4;
    puVar1[8] = uVar6;
  }
  return CONCAT71((int7)(uVar4 >> 8),1);
}



uint64_t FUN_1801ee230(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  
  puVar2 = (uint64_t *)param_1[8];
  uVar8 = puVar2[0x12] & puVar2[8] + 1;
  if ((uVar8 == puVar2[9]) && (puVar2[9] = *puVar2, uVar8 == *puVar2)) {
    if (puVar2[0x10] == *param_1) {
      uVar8 = param_1[9];
      if (uVar8 < 0x200) {
        uVar8 = uVar8 * 2;
      }
      uVar7 = FUN_1801ee700(uVar8);
      if (uVar7 == 0) {
        return 0;
      }
      param_1[9] = uVar8;
      puVar1 = *(uint64_t **)(uVar7 + 0x88);
      uVar5 = param_2[1];
      *puVar1 = *param_2;
      puVar1[1] = uVar5;
      *(uint64_t *)(uVar7 + 8) = 1;
      *(uint64_t *)(uVar7 + 0x40) = 1;
      uVar6 = puVar2[0x10];
      *(uint64_t *)(uVar7 + 0x80) = uVar6;
      puVar2[0x10] = uVar7;
      param_1[8] = uVar7;
    }
    else {
      puVar3 = (uint64_t *)puVar2[0x10];
      puVar3[9] = *puVar3;
      lVar4 = puVar3[8];
      puVar3[9] = *puVar3;
      uVar5 = param_2[1];
      puVar1 = (uint64_t *)(puVar3[0x11] + lVar4 * 0x10);
      *puVar1 = *param_2;
      puVar1[1] = uVar5;
      uVar6 = lVar4 + 1U & puVar3[0x12];
      puVar3[8] = uVar6;
      param_1[8] = (uint64_t)puVar3;
    }
  }
  else {
    uVar6 = puVar2[0x11];
    uVar5 = param_2[1];
    puVar1 = (uint64_t *)(uVar6 + puVar2[8] * 0x10);
    *puVar1 = *param_2;
    puVar1[1] = uVar5;
    puVar2[8] = uVar8;
  }
  return CONCAT71((int7)(uVar6 >> 8),1);
}



uint64_t FUN_1801ee360(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  
  puVar1 = (uint64_t *)param_1[8];
  uVar8 = puVar1[0x12] & puVar1[8] + 1;
  if ((uVar8 == puVar1[9]) && (puVar1[9] = *puVar1, uVar8 == *puVar1)) {
    if (puVar1[0x10] == *param_1) {
      uVar8 = param_1[9];
      if (uVar8 < 0x200) {
        uVar8 = uVar8 * 2;
      }
      uVar5 = FUN_1801ee790(uVar8);
      if (uVar5 == 0) {
        return 0;
      }
      param_1[9] = uVar8;
      puVar2 = *(uint64_t **)(uVar5 + 0x88);
      uVar3 = param_2[1];
      *puVar2 = *param_2;
      puVar2[1] = uVar3;
      puVar2[2] = param_2[2];
      *(int32_t *)(puVar2 + 3) = *(int32_t *)(param_2 + 3);
      *(uint64_t *)(uVar5 + 8) = 1;
      *(uint64_t *)(uVar5 + 0x40) = 1;
      uVar4 = puVar1[0x10];
      *(uint64_t *)(uVar5 + 0x80) = uVar4;
      puVar1[0x10] = uVar5;
      param_1[8] = uVar5;
    }
    else {
      puVar2 = (uint64_t *)puVar1[0x10];
      puVar2[9] = *puVar2;
      lVar6 = puVar2[8];
      puVar2[9] = *puVar2;
      uVar3 = param_2[1];
      puVar7 = (uint64_t *)(lVar6 * 0x1c + puVar2[0x11]);
      *puVar7 = *param_2;
      puVar7[1] = uVar3;
      puVar7[2] = param_2[2];
      *(int32_t *)(puVar7 + 3) = *(int32_t *)(param_2 + 3);
      uVar4 = lVar6 + 1U & puVar2[0x12];
      puVar2[8] = uVar4;
      param_1[8] = (uint64_t)puVar2;
    }
  }
  else {
    uVar5 = puVar1[0x11];
    uVar3 = param_2[1];
    lVar6 = puVar1[8] * 0x1c;
    *(uint64_t *)(uVar5 + lVar6) = *param_2;
    ((uint64_t *)(uVar5 + lVar6))[1] = uVar3;
    *(uint64_t *)(uVar5 + 0x10 + lVar6) = param_2[2];
    uVar4 = (uint64_t)*(uint *)(param_2 + 3);
    *(uint *)(uVar5 + 0x18 + lVar6) = *(uint *)(param_2 + 3);
    puVar1[8] = uVar8;
  }
  return CONCAT71((int7)(uVar4 >> 8),1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ee4c0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801ee4c0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  
  LOCK();
  system_system_config_config = 0;
  UNLOCK();
  puVar2 = (uint64_t *)*param_1;
  do {
    plVar1 = puVar2 + 0x10;
    if (puVar2[0x13] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar2[0x13],*puVar2,param_3,param_4,0xfffffffffffffffe);
    }
    puVar2 = (uint64_t *)*plVar1;
  } while ((uint64_t *)*plVar1 != (uint64_t *)*param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ee530(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801ee530(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  
  LOCK();
  system_system_config_config = 0;
  UNLOCK();
  lVar3 = param_1[10];
  do {
    plVar1 = (int64_t *)(lVar3 + 0x80);
    if (*(int64_t *)(lVar3 + 0x98) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lVar3 = *plVar1;
  } while (*plVar1 != param_1[10]);
  LOCK();
  system_system_config_config = 0;
  UNLOCK();
  puVar2 = (uint64_t *)*param_1;
  do {
    plVar1 = puVar2 + 0x10;
    if (puVar2[0x13] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar2[0x13],*puVar2,param_3,param_4,0xfffffffffffffffe);
    }
    puVar2 = (uint64_t *)*plVar1;
  } while ((uint64_t *)*plVar1 != (uint64_t *)*param_1);
  return;
}






// 函数: void FUN_1801ee5e0(int64_t *param_1)
void FUN_1801ee5e0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  
  lVar2 = param_1[2];
  lVar1 = param_1[4];
  plVar3 = (int64_t *)param_1[5];
  while (lVar2 != param_1[6]) {
    lVar2 = lVar2 + 0x10;
    if (lVar2 == lVar1) {
      plVar3 = plVar3 + 1;
      lVar2 = *plVar3;
      lVar1 = lVar2 + 0x100;
    }
  }
  if (*param_1 != 0) {
    plVar3 = (int64_t *)param_1[5];
    while (plVar3 < (int64_t *)(param_1[9] + 8)) {
      lVar1 = *plVar3;
      plVar3 = plVar3 + 1;
      if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ee610(int64_t param_1)
void FUN_1801ee610(int64_t param_1)

{
  int64_t lVar1;
  uint64_t *puVar2;
  
  lVar1 = FUN_18062b420(system_memory_pool_ptr,param_1 * 8 + 0xaa,3);
  if (lVar1 == 0) {
    return;
  }
  puVar2 = (uint64_t *)((uint64_t)(-(int)lVar1 & 7) + lVar1);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[0x10] = 0;
  puVar2[0x13] = lVar1;
  puVar2[0x11] = (uint64_t)(-(int)(puVar2 + 0x14) & 3) + (int64_t)(puVar2 + 0x14);
  puVar2[0x12] = param_1 + -1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ee6a0(int64_t *param_1)
void FUN_1801ee6a0(int64_t *param_1)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  
  LOCK();
  system_system_config_config = 0;
  UNLOCK();
  puVar2 = (uint64_t *)*param_1;
  do {
    plVar1 = puVar2 + 0x10;
    if (puVar2[0x13] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar2[0x13],*puVar2);
    }
    puVar2 = (uint64_t *)*plVar1;
  } while ((uint64_t *)*plVar1 != (uint64_t *)*param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ee700(int64_t param_1)
void FUN_1801ee700(int64_t param_1)

{
  int64_t lVar1;
  uint64_t *puVar2;
  
  lVar1 = FUN_18062b420(system_memory_pool_ptr,param_1 * 0x10 + 0xaa,3);
  if (lVar1 == 0) {
    return;
  }
  puVar2 = (uint64_t *)((uint64_t)(-(int)lVar1 & 7) + lVar1);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[0x10] = 0;
  puVar2[0x13] = lVar1;
  puVar2[0x11] = (uint64_t)(-(int)(puVar2 + 0x14) & 3) + (int64_t)(puVar2 + 0x14);
  puVar2[0x12] = param_1 + -1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ee790(int64_t param_1)
void FUN_1801ee790(int64_t param_1)

{
  int64_t lVar1;
  uint64_t *puVar2;
  
  lVar1 = FUN_18062b420(system_memory_pool_ptr,param_1 * 0x1c + 0xaa,3);
  if (lVar1 == 0) {
    return;
  }
  puVar2 = (uint64_t *)((uint64_t)(-(int)lVar1 & 7) + lVar1);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[0x10] = 0;
  puVar2[0x13] = lVar1;
  puVar2[0x11] = (uint64_t)(-(int)(puVar2 + 0x14) & 3) + (int64_t)(puVar2 + 0x14);
  puVar2[0x12] = param_1 + -1;
  return;
}






// 函数: void FUN_1801ee820(uint64_t *param_1,uint64_t *param_2)
void FUN_1801ee820(uint64_t *param_1,uint64_t *param_2)

{
  int32_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  uVar2 = param_1[2];
  uVar6 = param_2[3];
  uVar3 = param_1[3];
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  param_1[2] = param_2[2];
  param_1[3] = uVar6;
  uVar6 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar6;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  param_2[4] = uVar4;
  param_2[5] = uVar5;
  uVar2 = param_1[6];
  uVar6 = param_2[7];
  uVar3 = param_1[7];
  uVar4 = param_1[8];
  uVar5 = param_1[9];
  param_1[6] = param_2[6];
  param_1[7] = uVar6;
  uVar6 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar6;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  param_2[8] = uVar4;
  param_2[9] = uVar5;
  uVar1 = *(int32_t *)(param_1 + 10);
  *(int32_t *)(param_1 + 10) = *(int32_t *)(param_2 + 10);
  *(int32_t *)(param_2 + 10) = uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ee8e0(int64_t *param_1)
void FUN_1801ee8e0(int64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  param_1[1] = 8;
  lVar3 = FUN_18062b420(system_memory_pool_ptr,0x40,(char)param_1[10]);
  *param_1 = lVar3;
  plVar1 = (int64_t *)(lVar3 + (param_1[1] - 1U >> 1) * 8);
  plVar2 = plVar1;
  for (uVar4 = (uint64_t)(plVar1 <= plVar1 + 1); uVar4 != 0; uVar4 = uVar4 - 1) {
    lVar3 = FUN_18062b420(system_memory_pool_ptr,0x100,(char)param_1[10]);
    *plVar2 = lVar3;
    plVar2 = plVar2 + 1;
  }
  param_1[5] = (int64_t)plVar1;
  lVar3 = *plVar1;
  param_1[3] = lVar3;
  param_1[4] = lVar3 + 0x100;
  param_1[2] = lVar3;
  param_1[9] = (int64_t)plVar1;
  lVar3 = *plVar1;
  param_1[7] = lVar3;
  param_1[8] = lVar3 + 0x100;
  param_1[6] = lVar3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ee9c0(int64_t *param_1,uint64_t param_2,int param_3)
void FUN_1801ee9c0(int64_t *param_1,uint64_t param_2,int param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  
  uVar6 = param_1[1];
  lVar4 = param_1[5];
  lVar2 = param_1[9] - lVar4 >> 3;
  lVar3 = lVar2 + 1;
  uVar7 = lVar4 - *param_1 >> 3;
  uVar5 = (uVar6 - lVar3) - uVar7;
  lVar3 = lVar3 * 8;
  if (param_3 == 1) {
    if (param_2 <= uVar7) {
      if (param_2 < uVar7 >> 1) {
        param_2 = uVar7 >> 1;
      }
                    // WARNING: Subroutine does not return
      memmove(*param_1 + (uVar7 - param_2) * 8,lVar4,lVar3);
    }
  }
  else if ((param_3 == 0) && (param_2 <= uVar5)) {
    uVar5 = uVar5 >> 1;
    if (param_2 < uVar5) {
      param_2 = uVar5;
    }
                    // WARNING: Subroutine does not return
    memmove(lVar4 + param_2 * 8,lVar4,lVar3);
  }
  uVar5 = uVar6;
  if (uVar6 < param_2) {
    uVar5 = param_2;
  }
  lVar8 = uVar6 + 2 + uVar5;
  lVar4 = FUN_18062b420(system_memory_pool_ptr,lVar8 * 8,(char)param_1[10]);
  uVar6 = 0;
  if (param_3 == 0) {
    uVar6 = param_2;
  }
  plVar1 = (int64_t *)(lVar4 + ((param_1[5] - *param_1 >> 3) + uVar6) * 8);
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(plVar1,param_1[5],lVar3);
  }
  *param_1 = lVar4;
  param_1[1] = lVar8;
  param_1[5] = (int64_t)plVar1;
  lVar3 = *plVar1;
  param_1[3] = lVar3;
  param_1[4] = lVar3 + 0x100;
  param_1[9] = (int64_t)(plVar1 + lVar2);
  lVar3 = plVar1[lVar2];
  param_1[7] = lVar3;
  param_1[8] = lVar3 + 0x100;
  return;
}






