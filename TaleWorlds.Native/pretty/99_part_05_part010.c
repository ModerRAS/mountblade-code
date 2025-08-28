#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_05_part010.c - 10 个函数

// 函数: void FUN_1802dadf0(int64_t *param_1,int64_t param_2,int64_t param_3,int64_t param_4,
void FUN_1802dadf0(int64_t *param_1,int64_t param_2,int64_t param_3,int64_t param_4,
                  uint64_t *param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  float *pfVar3;
  float fVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  uint64_t uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint64_t uVar13;
  int64_t lVar14;
  int64_t lVar15;
  uint uVar16;
  int iStack_30;
  
  lVar15 = param_4 * 2 + 2;
  if (lVar15 < param_3) {
    lVar6 = *param_1;
    iVar8 = (int)param_1[1];
    lVar14 = param_4;
    do {
      uVar16 = (int)lVar15 + iVar8;
      uVar12 = (int)lVar15 + iVar8 + -1;
      uVar10 = uVar12 >> 10;
      uVar11 = uVar16 >> 10;
      fVar4 = *(float *)(*(int64_t *)(lVar6 + 8 + (uint64_t)uVar11 * 8) + 8 +
                        (uint64_t)(uVar16 + uVar11 * -0x400) * 0x18);
      pfVar3 = (float *)(*(int64_t *)(lVar6 + 8 + (uint64_t)uVar10 * 8) + 8 +
                        (uint64_t)(uVar12 + uVar10 * -0x400) * 0x18);
      param_4 = lVar15 + -1;
      if (fVar4 < *pfVar3 || fVar4 == *pfVar3) {
        param_4 = lVar15;
      }
      uVar11 = iVar8 + (int)param_4;
      lVar15 = param_4 * 2 + 2;
      uVar10 = uVar11 >> 10;
      uVar13 = (uint64_t)(uVar11 + uVar10 * -0x400);
      lVar7 = *(int64_t *)(lVar6 + 8 + (uint64_t)uVar10 * 8);
      puVar1 = (uint64_t *)(lVar7 + uVar13 * 0x18);
      uVar9 = puVar1[1];
      uVar11 = iVar8 + (int)lVar14;
      uVar5 = *(uint64_t *)(lVar7 + 0x10 + uVar13 * 0x18);
      uVar10 = uVar11 >> 10;
      uVar13 = (uint64_t)(uVar11 + uVar10 * -0x400);
      lVar14 = *(int64_t *)(lVar6 + 8 + (uint64_t)uVar10 * 8);
      puVar2 = (uint64_t *)(lVar14 + uVar13 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar9;
      *(uint64_t *)(lVar14 + 0x10 + uVar13 * 0x18) = uVar5;
      lVar14 = param_4;
    } while (lVar15 < param_3);
  }
  if (lVar15 == param_3) {
    uVar11 = (int)param_1[1] + -1 + (int)lVar15;
    uVar10 = uVar11 >> 10;
    uVar13 = (uint64_t)(uVar11 + uVar10 * -0x400);
    lVar6 = *(int64_t *)(*param_1 + 8 + (uint64_t)uVar10 * 8);
    puVar1 = (uint64_t *)(lVar6 + uVar13 * 0x18);
    uVar9 = puVar1[1];
    uVar11 = (int)param_1[1] + (int)param_4;
    uVar5 = *(uint64_t *)(lVar6 + 0x10 + uVar13 * 0x18);
    param_4 = lVar15 + -1;
    uVar10 = uVar11 >> 10;
    uVar13 = (uint64_t)(uVar11 + uVar10 * -0x400);
    lVar15 = *(int64_t *)(*param_1 + 8 + (uint64_t)uVar10 * 8);
    puVar2 = (uint64_t *)(lVar15 + uVar13 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar9;
    *(uint64_t *)(lVar15 + 0x10 + uVar13 * 0x18) = uVar5;
  }
  lVar15 = *param_1;
  iStack_30 = (int)param_1[1];
  while (iVar8 = (int)param_4, param_2 < param_4) {
    param_4 = param_4 + -1 >> 1;
    uVar11 = (int)param_4 + iStack_30;
    uVar10 = uVar11 >> 10;
    uVar13 = (uint64_t)(uVar11 & 0x3ff);
    if (*(float *)(*(int64_t *)(lVar15 + 8 + (uint64_t)uVar10 * 8) + 8 + uVar13 * 0x18) <=
        *(float *)(param_5 + 1)) break;
    lVar6 = *(int64_t *)(lVar15 + 8 + (uint64_t)uVar10 * 8);
    uVar11 = iVar8 + iStack_30;
    puVar1 = (uint64_t *)(lVar6 + uVar13 * 0x18);
    uVar9 = puVar1[1];
    uVar5 = *(uint64_t *)(lVar6 + 0x10 + uVar13 * 0x18);
    uVar10 = uVar11 >> 10;
    uVar13 = (uint64_t)(uVar11 + uVar10 * -0x400);
    lVar6 = *(int64_t *)(lVar15 + 8 + (uint64_t)uVar10 * 8);
    puVar2 = (uint64_t *)(lVar6 + uVar13 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar9;
    *(uint64_t *)(lVar6 + 0x10 + uVar13 * 0x18) = uVar5;
  }
  uVar9 = param_5[1];
  uVar11 = iVar8 + iStack_30;
  uVar5 = param_5[2];
  uVar10 = uVar11 >> 10;
  uVar13 = (uint64_t)(uVar11 + uVar10 * -0x400);
  lVar15 = *(int64_t *)(lVar15 + 8 + (uint64_t)uVar10 * 8);
  puVar1 = (uint64_t *)(lVar15 + uVar13 * 0x18);
  *puVar1 = *param_5;
  puVar1[1] = uVar9;
  *(uint64_t *)(lVar15 + 0x10 + uVar13 * 0x18) = uVar5;
  return;
}






// 函数: void FUN_1802dadf8(int64_t *param_1,int64_t param_2,int64_t param_3,int64_t param_4)
void FUN_1802dadf8(int64_t *param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  float *pfVar3;
  float fVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  uint64_t uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint64_t uVar13;
  int64_t lVar14;
  int64_t lVar15;
  uint uVar16;
  int iStackX_8;
  uint64_t *in_stack_00000060;
  
  lVar15 = param_4 * 2 + 2;
  if (lVar15 < param_3) {
    lVar6 = *param_1;
    iVar8 = (int)param_1[1];
    lVar14 = param_4;
    do {
      uVar16 = (int)lVar15 + iVar8;
      uVar12 = (int)lVar15 + iVar8 + -1;
      uVar10 = uVar12 >> 10;
      uVar11 = uVar16 >> 10;
      fVar4 = *(float *)(*(int64_t *)(lVar6 + 8 + (uint64_t)uVar11 * 8) + 8 +
                        (uint64_t)(uVar16 + uVar11 * -0x400) * 0x18);
      pfVar3 = (float *)(*(int64_t *)(lVar6 + 8 + (uint64_t)uVar10 * 8) + 8 +
                        (uint64_t)(uVar12 + uVar10 * -0x400) * 0x18);
      param_4 = lVar15 + -1;
      if (fVar4 < *pfVar3 || fVar4 == *pfVar3) {
        param_4 = lVar15;
      }
      uVar11 = iVar8 + (int)param_4;
      lVar15 = param_4 * 2 + 2;
      uVar10 = uVar11 >> 10;
      uVar13 = (uint64_t)(uVar11 + uVar10 * -0x400);
      lVar7 = *(int64_t *)(lVar6 + 8 + (uint64_t)uVar10 * 8);
      puVar1 = (uint64_t *)(lVar7 + uVar13 * 0x18);
      uVar9 = puVar1[1];
      uVar11 = iVar8 + (int)lVar14;
      uVar5 = *(uint64_t *)(lVar7 + 0x10 + uVar13 * 0x18);
      uVar10 = uVar11 >> 10;
      uVar13 = (uint64_t)(uVar11 + uVar10 * -0x400);
      lVar14 = *(int64_t *)(lVar6 + 8 + (uint64_t)uVar10 * 8);
      puVar2 = (uint64_t *)(lVar14 + uVar13 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar9;
      *(uint64_t *)(lVar14 + 0x10 + uVar13 * 0x18) = uVar5;
      lVar14 = param_4;
    } while (lVar15 < param_3);
  }
  if (lVar15 == param_3) {
    uVar11 = (int)param_1[1] + -1 + (int)lVar15;
    uVar10 = uVar11 >> 10;
    uVar13 = (uint64_t)(uVar11 + uVar10 * -0x400);
    lVar6 = *(int64_t *)(*param_1 + 8 + (uint64_t)uVar10 * 8);
    puVar1 = (uint64_t *)(lVar6 + uVar13 * 0x18);
    uVar9 = puVar1[1];
    uVar11 = (int)param_1[1] + (int)param_4;
    uVar5 = *(uint64_t *)(lVar6 + 0x10 + uVar13 * 0x18);
    param_4 = lVar15 + -1;
    uVar10 = uVar11 >> 10;
    uVar13 = (uint64_t)(uVar11 + uVar10 * -0x400);
    lVar15 = *(int64_t *)(*param_1 + 8 + (uint64_t)uVar10 * 8);
    puVar2 = (uint64_t *)(lVar15 + uVar13 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar9;
    *(uint64_t *)(lVar15 + 0x10 + uVar13 * 0x18) = uVar5;
  }
  lVar15 = *param_1;
  iStackX_8 = (int)param_1[1];
  while (iVar8 = (int)param_4, param_2 < param_4) {
    param_4 = param_4 + -1 >> 1;
    uVar11 = (int)param_4 + iStackX_8;
    uVar10 = uVar11 >> 10;
    uVar13 = (uint64_t)(uVar11 & 0x3ff);
    if (*(float *)(*(int64_t *)(lVar15 + 8 + (uint64_t)uVar10 * 8) + 8 + uVar13 * 0x18) <=
        *(float *)(in_stack_00000060 + 1)) break;
    lVar6 = *(int64_t *)(lVar15 + 8 + (uint64_t)uVar10 * 8);
    uVar11 = iVar8 + iStackX_8;
    puVar1 = (uint64_t *)(lVar6 + uVar13 * 0x18);
    uVar9 = puVar1[1];
    uVar5 = *(uint64_t *)(lVar6 + 0x10 + uVar13 * 0x18);
    uVar10 = uVar11 >> 10;
    uVar13 = (uint64_t)(uVar11 + uVar10 * -0x400);
    lVar6 = *(int64_t *)(lVar15 + 8 + (uint64_t)uVar10 * 8);
    puVar2 = (uint64_t *)(lVar6 + uVar13 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar9;
    *(uint64_t *)(lVar6 + 0x10 + uVar13 * 0x18) = uVar5;
  }
  uVar9 = in_stack_00000060[1];
  uVar11 = iVar8 + iStackX_8;
  uVar5 = in_stack_00000060[2];
  uVar10 = uVar11 >> 10;
  uVar13 = (uint64_t)(uVar11 + uVar10 * -0x400);
  lVar15 = *(int64_t *)(lVar15 + 8 + (uint64_t)uVar10 * 8);
  puVar1 = (uint64_t *)(lVar15 + uVar13 * 0x18);
  *puVar1 = *in_stack_00000060;
  puVar1[1] = uVar9;
  *(uint64_t *)(lVar15 + 0x10 + uVar13 * 0x18) = uVar5;
  return;
}






// 函数: void FUN_1802dae05(int64_t *param_1,int64_t param_2,int64_t param_3,int64_t param_4)
void FUN_1802dae05(int64_t *param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  float *pfVar3;
  float fVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  uint64_t uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint64_t uVar13;
  int64_t lVar14;
  int64_t unaff_RDI;
  uint uVar15;
  int iStackX_8;
  uint64_t *in_stack_00000060;
  
  if (unaff_RDI < param_3) {
    lVar6 = *param_1;
    iVar8 = (int)param_1[1];
    lVar14 = param_4;
    do {
      uVar15 = (int)unaff_RDI + iVar8;
      uVar12 = (int)unaff_RDI + iVar8 + -1;
      uVar10 = uVar12 >> 10;
      uVar11 = uVar15 >> 10;
      fVar4 = *(float *)(*(int64_t *)(lVar6 + 8 + (uint64_t)uVar11 * 8) + 8 +
                        (uint64_t)(uVar15 + uVar11 * -0x400) * 0x18);
      pfVar3 = (float *)(*(int64_t *)(lVar6 + 8 + (uint64_t)uVar10 * 8) + 8 +
                        (uint64_t)(uVar12 + uVar10 * -0x400) * 0x18);
      param_4 = unaff_RDI + -1;
      if (fVar4 < *pfVar3 || fVar4 == *pfVar3) {
        param_4 = unaff_RDI;
      }
      uVar11 = iVar8 + (int)param_4;
      unaff_RDI = param_4 * 2 + 2;
      uVar10 = uVar11 >> 10;
      uVar13 = (uint64_t)(uVar11 + uVar10 * -0x400);
      lVar7 = *(int64_t *)(lVar6 + 8 + (uint64_t)uVar10 * 8);
      puVar1 = (uint64_t *)(lVar7 + uVar13 * 0x18);
      uVar9 = puVar1[1];
      uVar11 = iVar8 + (int)lVar14;
      uVar5 = *(uint64_t *)(lVar7 + 0x10 + uVar13 * 0x18);
      uVar10 = uVar11 >> 10;
      uVar13 = (uint64_t)(uVar11 + uVar10 * -0x400);
      lVar14 = *(int64_t *)(lVar6 + 8 + (uint64_t)uVar10 * 8);
      puVar2 = (uint64_t *)(lVar14 + uVar13 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar9;
      *(uint64_t *)(lVar14 + 0x10 + uVar13 * 0x18) = uVar5;
      lVar14 = param_4;
    } while (unaff_RDI < param_3);
  }
  if (unaff_RDI == param_3) {
    uVar11 = (int)param_1[1] + -1 + (int)unaff_RDI;
    uVar10 = uVar11 >> 10;
    uVar13 = (uint64_t)(uVar11 + uVar10 * -0x400);
    lVar6 = *(int64_t *)(*param_1 + 8 + (uint64_t)uVar10 * 8);
    puVar1 = (uint64_t *)(lVar6 + uVar13 * 0x18);
    uVar9 = puVar1[1];
    uVar11 = (int)param_1[1] + (int)param_4;
    uVar5 = *(uint64_t *)(lVar6 + 0x10 + uVar13 * 0x18);
    param_4 = unaff_RDI + -1;
    uVar10 = uVar11 >> 10;
    uVar13 = (uint64_t)(uVar11 + uVar10 * -0x400);
    lVar6 = *(int64_t *)(*param_1 + 8 + (uint64_t)uVar10 * 8);
    puVar2 = (uint64_t *)(lVar6 + uVar13 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar9;
    *(uint64_t *)(lVar6 + 0x10 + uVar13 * 0x18) = uVar5;
  }
  lVar6 = *param_1;
  iStackX_8 = (int)param_1[1];
  while (iVar8 = (int)param_4, param_2 < param_4) {
    param_4 = param_4 + -1 >> 1;
    uVar11 = (int)param_4 + iStackX_8;
    uVar10 = uVar11 >> 10;
    uVar13 = (uint64_t)(uVar11 & 0x3ff);
    if (*(float *)(*(int64_t *)(lVar6 + 8 + (uint64_t)uVar10 * 8) + 8 + uVar13 * 0x18) <=
        *(float *)(in_stack_00000060 + 1)) break;
    lVar14 = *(int64_t *)(lVar6 + 8 + (uint64_t)uVar10 * 8);
    uVar11 = iVar8 + iStackX_8;
    puVar1 = (uint64_t *)(lVar14 + uVar13 * 0x18);
    uVar9 = puVar1[1];
    uVar5 = *(uint64_t *)(lVar14 + 0x10 + uVar13 * 0x18);
    uVar10 = uVar11 >> 10;
    uVar13 = (uint64_t)(uVar11 + uVar10 * -0x400);
    lVar14 = *(int64_t *)(lVar6 + 8 + (uint64_t)uVar10 * 8);
    puVar2 = (uint64_t *)(lVar14 + uVar13 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar9;
    *(uint64_t *)(lVar14 + 0x10 + uVar13 * 0x18) = uVar5;
  }
  uVar9 = in_stack_00000060[1];
  uVar11 = iVar8 + iStackX_8;
  uVar5 = in_stack_00000060[2];
  uVar10 = uVar11 >> 10;
  uVar13 = (uint64_t)(uVar11 + uVar10 * -0x400);
  lVar6 = *(int64_t *)(lVar6 + 8 + (uint64_t)uVar10 * 8);
  puVar1 = (uint64_t *)(lVar6 + uVar13 * 0x18);
  *puVar1 = *in_stack_00000060;
  puVar1[1] = uVar9;
  *(uint64_t *)(lVar6 + 0x10 + uVar13 * 0x18) = uVar5;
  return;
}






// 函数: void FUN_1802dae1f(int64_t *param_1)
void FUN_1802dae1f(int64_t *param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  float *pfVar3;
  float fVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  uint64_t uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint64_t uVar13;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  int64_t unaff_RDI;
  uint uVar14;
  int64_t lVar15;
  int64_t unaff_R14;
  int iStackX_8;
  uint64_t *in_stack_00000060;
  
  lVar6 = *param_1;
  iVar8 = (int)param_1[1];
  do {
    uVar14 = (int)unaff_RDI + iVar8;
    uVar12 = (int)unaff_RDI + iVar8 + -1;
    uVar10 = uVar12 >> 10;
    uVar11 = uVar14 >> 10;
    fVar4 = *(float *)(*(int64_t *)(lVar6 + 8 + (uint64_t)uVar11 * 8) + 8 +
                      (uint64_t)(uVar14 + uVar11 * -0x400) * 0x18);
    pfVar3 = (float *)(*(int64_t *)(lVar6 + 8 + (uint64_t)uVar10 * 8) + 8 +
                      (uint64_t)(uVar12 + uVar10 * -0x400) * 0x18);
    lVar15 = unaff_RDI + -1;
    if (fVar4 < *pfVar3 || fVar4 == *pfVar3) {
      lVar15 = unaff_RDI;
    }
    uVar11 = iVar8 + (int)lVar15;
    unaff_RDI = lVar15 * 2 + 2;
    uVar10 = uVar11 >> 10;
    uVar13 = (uint64_t)(uVar11 + uVar10 * -0x400);
    lVar7 = *(int64_t *)(lVar6 + 8 + (uint64_t)uVar10 * 8);
    puVar1 = (uint64_t *)(lVar7 + uVar13 * 0x18);
    uVar9 = puVar1[1];
    uVar11 = iVar8 + (int)unaff_RBX;
    uVar5 = *(uint64_t *)(lVar7 + 0x10 + uVar13 * 0x18);
    uVar10 = uVar11 >> 10;
    uVar13 = (uint64_t)(uVar11 + uVar10 * -0x400);
    lVar7 = *(int64_t *)(lVar6 + 8 + (uint64_t)uVar10 * 8);
    puVar2 = (uint64_t *)(lVar7 + uVar13 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar9;
    *(uint64_t *)(lVar7 + 0x10 + uVar13 * 0x18) = uVar5;
    unaff_RBX = lVar15;
  } while (unaff_RDI < unaff_R14);
  if (unaff_RDI == unaff_R14) {
    uVar11 = (int)unaff_RSI[1] + -1 + (int)unaff_RDI;
    uVar10 = uVar11 >> 10;
    uVar13 = (uint64_t)(uVar11 + uVar10 * -0x400);
    lVar6 = *(int64_t *)(*unaff_RSI + 8 + (uint64_t)uVar10 * 8);
    puVar1 = (uint64_t *)(lVar6 + uVar13 * 0x18);
    uVar9 = puVar1[1];
    uVar11 = (int)unaff_RSI[1] + (int)lVar15;
    uVar5 = *(uint64_t *)(lVar6 + 0x10 + uVar13 * 0x18);
    lVar15 = lVar15 * 2 + 1;
    uVar10 = uVar11 >> 10;
    uVar13 = (uint64_t)(uVar11 + uVar10 * -0x400);
    lVar6 = *(int64_t *)(*unaff_RSI + 8 + (uint64_t)uVar10 * 8);
    puVar2 = (uint64_t *)(lVar6 + uVar13 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar9;
    *(uint64_t *)(lVar6 + 0x10 + uVar13 * 0x18) = uVar5;
  }
  lVar6 = *unaff_RSI;
  iStackX_8 = (int)unaff_RSI[1];
  while (iVar8 = (int)lVar15, unaff_RBP < lVar15) {
    lVar15 = lVar15 + -1 >> 1;
    uVar11 = (int)lVar15 + iStackX_8;
    uVar10 = uVar11 >> 10;
    uVar13 = (uint64_t)(uVar11 & 0x3ff);
    if (*(float *)(*(int64_t *)(lVar6 + 8 + (uint64_t)uVar10 * 8) + 8 + uVar13 * 0x18) <=
        *(float *)(in_stack_00000060 + 1)) break;
    lVar7 = *(int64_t *)(lVar6 + 8 + (uint64_t)uVar10 * 8);
    uVar11 = iVar8 + iStackX_8;
    puVar1 = (uint64_t *)(lVar7 + uVar13 * 0x18);
    uVar9 = puVar1[1];
    uVar5 = *(uint64_t *)(lVar7 + 0x10 + uVar13 * 0x18);
    uVar10 = uVar11 >> 10;
    uVar13 = (uint64_t)(uVar11 + uVar10 * -0x400);
    lVar7 = *(int64_t *)(lVar6 + 8 + (uint64_t)uVar10 * 8);
    puVar2 = (uint64_t *)(lVar7 + uVar13 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar9;
    *(uint64_t *)(lVar7 + 0x10 + uVar13 * 0x18) = uVar5;
  }
  uVar9 = in_stack_00000060[1];
  uVar11 = iVar8 + iStackX_8;
  uVar5 = in_stack_00000060[2];
  uVar10 = uVar11 >> 10;
  uVar13 = (uint64_t)(uVar11 + uVar10 * -0x400);
  lVar6 = *(int64_t *)(lVar6 + 8 + (uint64_t)uVar10 * 8);
  puVar1 = (uint64_t *)(lVar6 + uVar13 * 0x18);
  *puVar1 = *in_stack_00000060;
  puVar1[1] = uVar9;
  *(uint64_t *)(lVar6 + 0x10 + uVar13 * 0x18) = uVar5;
  return;
}






// 函数: void FUN_1802daef5(void)
void FUN_1802daef5(void)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int iVar6;
  uint64_t uVar7;
  uint uVar8;
  uint64_t uVar9;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  int64_t unaff_RDI;
  uint uVar10;
  int64_t unaff_R14;
  int iStackX_8;
  uint64_t *in_stack_00000060;
  
  if (unaff_RDI == unaff_R14) {
    uVar10 = (int)unaff_RSI[1] + -1 + (int)unaff_RDI;
    uVar8 = uVar10 >> 10;
    uVar9 = (uint64_t)(uVar10 + uVar8 * -0x400);
    lVar4 = *(int64_t *)(*unaff_RSI + 8 + (uint64_t)uVar8 * 8);
    puVar1 = (uint64_t *)(lVar4 + uVar9 * 0x18);
    uVar7 = puVar1[1];
    uVar10 = (int)unaff_RSI[1] + (int)unaff_RBX;
    uVar3 = *(uint64_t *)(lVar4 + 0x10 + uVar9 * 0x18);
    unaff_RBX = unaff_RDI + -1;
    uVar8 = uVar10 >> 10;
    uVar9 = (uint64_t)(uVar10 + uVar8 * -0x400);
    lVar4 = *(int64_t *)(*unaff_RSI + 8 + (uint64_t)uVar8 * 8);
    puVar2 = (uint64_t *)(lVar4 + uVar9 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    *(uint64_t *)(lVar4 + 0x10 + uVar9 * 0x18) = uVar3;
  }
  lVar4 = *unaff_RSI;
  iStackX_8 = (int)unaff_RSI[1];
  while (iVar6 = (int)unaff_RBX, unaff_RBP < unaff_RBX) {
    unaff_RBX = unaff_RBX + -1 >> 1;
    uVar10 = (int)unaff_RBX + iStackX_8;
    uVar8 = uVar10 >> 10;
    uVar9 = (uint64_t)(uVar10 & 0x3ff);
    if (*(float *)(*(int64_t *)(lVar4 + 8 + (uint64_t)uVar8 * 8) + 8 + uVar9 * 0x18) <=
        *(float *)(in_stack_00000060 + 1)) break;
    lVar5 = *(int64_t *)(lVar4 + 8 + (uint64_t)uVar8 * 8);
    uVar10 = iVar6 + iStackX_8;
    puVar1 = (uint64_t *)(lVar5 + uVar9 * 0x18);
    uVar7 = puVar1[1];
    uVar3 = *(uint64_t *)(lVar5 + 0x10 + uVar9 * 0x18);
    uVar8 = uVar10 >> 10;
    uVar9 = (uint64_t)(uVar10 + uVar8 * -0x400);
    lVar5 = *(int64_t *)(lVar4 + 8 + (uint64_t)uVar8 * 8);
    puVar2 = (uint64_t *)(lVar5 + uVar9 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    *(uint64_t *)(lVar5 + 0x10 + uVar9 * 0x18) = uVar3;
  }
  uVar7 = in_stack_00000060[1];
  uVar10 = iVar6 + iStackX_8;
  uVar3 = in_stack_00000060[2];
  uVar8 = uVar10 >> 10;
  uVar9 = (uint64_t)(uVar10 + uVar8 * -0x400);
  lVar4 = *(int64_t *)(lVar4 + 8 + (uint64_t)uVar8 * 8);
  puVar1 = (uint64_t *)(lVar4 + uVar9 * 0x18);
  *puVar1 = *in_stack_00000060;
  puVar1[1] = uVar7;
  *(uint64_t *)(lVar4 + 0x10 + uVar9 * 0x18) = uVar3;
  return;
}






// 函数: void FUN_1802daeff(void)
void FUN_1802daeff(void)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int iVar7;
  uint uVar8;
  uint64_t uVar9;
  int unaff_EBX;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  int64_t unaff_RDI;
  uint uVar10;
  int64_t lVar11;
  int64_t lVar12;
  int iStackX_8;
  uint64_t *in_stack_00000060;
  
  uVar10 = (int)unaff_RSI[1] + -1 + (int)unaff_RDI;
  uVar8 = uVar10 >> 10;
  uVar9 = (uint64_t)(uVar10 + uVar8 * -0x400);
  lVar11 = *(int64_t *)(*unaff_RSI + 8 + (uint64_t)uVar8 * 8);
  puVar1 = (uint64_t *)(lVar11 + uVar9 * 0x18);
  uVar5 = puVar1[1];
  uVar8 = (int)unaff_RSI[1] + unaff_EBX;
  uVar3 = *(uint64_t *)(lVar11 + 0x10 + uVar9 * 0x18);
  lVar11 = unaff_RDI + -1;
  uVar10 = uVar8 >> 10;
  uVar9 = (uint64_t)(uVar8 + uVar10 * -0x400);
  lVar12 = *(int64_t *)(*unaff_RSI + 8 + (uint64_t)uVar10 * 8);
  puVar2 = (uint64_t *)(lVar12 + uVar9 * 0x18);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  *(uint64_t *)(lVar12 + 0x10 + uVar9 * 0x18) = uVar3;
  lVar6 = *unaff_RSI;
  lVar12 = unaff_RDI + -2;
  iStackX_8 = (int)unaff_RSI[1];
  while (iVar7 = (int)lVar11, unaff_RBP < lVar11) {
    lVar11 = lVar12 >> 1;
    uVar10 = (int)lVar11 + iStackX_8;
    uVar8 = uVar10 >> 10;
    uVar9 = (uint64_t)(uVar10 & 0x3ff);
    if (*(float *)(*(int64_t *)(lVar6 + 8 + (uint64_t)uVar8 * 8) + 8 + uVar9 * 0x18) <=
        *(float *)(in_stack_00000060 + 1)) break;
    lVar12 = *(int64_t *)(lVar6 + 8 + (uint64_t)uVar8 * 8);
    uVar10 = iVar7 + iStackX_8;
    puVar1 = (uint64_t *)(lVar12 + uVar9 * 0x18);
    uVar5 = puVar1[1];
    uVar3 = *(uint64_t *)(lVar12 + 0x10 + uVar9 * 0x18);
    uVar8 = uVar10 >> 10;
    uVar9 = (uint64_t)(uVar10 + uVar8 * -0x400);
    lVar4 = *(int64_t *)(lVar6 + 8 + (uint64_t)uVar8 * 8);
    lVar12 = lVar11 + -1;
    puVar2 = (uint64_t *)(lVar4 + uVar9 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    *(uint64_t *)(lVar4 + 0x10 + uVar9 * 0x18) = uVar3;
  }
  uVar5 = in_stack_00000060[1];
  uVar10 = iVar7 + iStackX_8;
  uVar3 = in_stack_00000060[2];
  uVar8 = uVar10 >> 10;
  uVar9 = (uint64_t)(uVar10 + uVar8 * -0x400);
  lVar11 = *(int64_t *)(lVar6 + 8 + (uint64_t)uVar8 * 8);
  puVar1 = (uint64_t *)(lVar11 + uVar9 * 0x18);
  *puVar1 = *in_stack_00000060;
  puVar1[1] = uVar5;
  *(uint64_t *)(lVar11 + 0x10 + uVar9 * 0x18) = uVar3;
  return;
}






// 函数: void FUN_1802daf80(void)
void FUN_1802daf80(void)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int64_t lVar4;
  bool bVar5;
  uint64_t uVar6;
  uint uVar7;
  uint uVar8;
  uint64_t uVar9;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t *unaff_RDI;
  int64_t in_R9;
  int64_t in_R10;
  int in_R11D;
  
  do {
    uVar8 = (int)in_R9 + in_R11D;
    uVar7 = uVar8 >> 10;
    uVar9 = (uint64_t)(uVar8 & 0x3ff);
    if (*(float *)(*(int64_t *)(in_R10 + 8 + (uint64_t)uVar7 * 8) + 8 + uVar9 * 0x18) <=
        *(float *)(unaff_RDI + 1)) break;
    lVar4 = *(int64_t *)(in_R10 + 8 + (uint64_t)uVar7 * 8);
    uVar8 = (int)unaff_RBX + in_R11D;
    puVar1 = (uint64_t *)(lVar4 + uVar9 * 0x18);
    uVar6 = puVar1[1];
    uVar3 = *(uint64_t *)(lVar4 + 0x10 + uVar9 * 0x18);
    uVar7 = uVar8 >> 10;
    uVar9 = (uint64_t)(uVar8 + uVar7 * -0x400);
    lVar4 = *(int64_t *)(in_R10 + 8 + (uint64_t)uVar7 * 8);
    puVar2 = (uint64_t *)(lVar4 + uVar9 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    *(uint64_t *)(lVar4 + 0x10 + uVar9 * 0x18) = uVar3;
    bVar5 = unaff_RBP < in_R9;
    unaff_RBX = in_R9;
    in_R9 = in_R9 + -1 >> 1;
  } while (bVar5);
  uVar6 = unaff_RDI[1];
  uVar8 = (int)unaff_RBX + in_R11D;
  uVar3 = unaff_RDI[2];
  uVar7 = uVar8 >> 10;
  uVar9 = (uint64_t)(uVar8 + uVar7 * -0x400);
  lVar4 = *(int64_t *)(in_R10 + 8 + (uint64_t)uVar7 * 8);
  puVar1 = (uint64_t *)(lVar4 + uVar9 * 0x18);
  *puVar1 = *unaff_RDI;
  puVar1[1] = uVar6;
  *(uint64_t *)(lVar4 + 0x10 + uVar9 * 0x18) = uVar3;
  return;
}






// 函数: void FUN_1802db030(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,uint *param_5
void FUN_1802db030(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,uint *param_5
                  ,int64_t param_6)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  lVar3 = param_4 * 2;
  while (lVar1 = lVar3 + 2, lVar1 < param_3) {
    lVar2 = lVar3 + 1;
    if (*(short *)((uint64_t)*(uint *)(param_1 + -8 + lVar1 * 8) * 0x70 + 0x30 +
                  *(int64_t *)(param_6 + 0x58)) <=
        *(short *)((uint64_t)*(uint *)(param_1 + lVar1 * 8) * 0x70 + 0x30 +
                  *(int64_t *)(param_6 + 0x58))) {
      lVar2 = lVar1;
    }
    *(uint64_t *)(param_1 + param_4 * 8) = *(uint64_t *)(param_1 + lVar2 * 8);
    param_4 = lVar2;
    lVar3 = lVar2 * 2;
  }
  if (lVar1 == param_3) {
    *(uint64_t *)(param_1 + param_4 * 8) = *(uint64_t *)(param_1 + -8 + lVar1 * 8);
    param_4 = lVar3 + 1;
  }
  if (param_2 < param_4) {
    do {
      lVar3 = param_4 + -1 >> 1;
      if (*(short *)((uint64_t)*param_5 * 0x70 + 0x30 + *(int64_t *)(param_6 + 0x58)) <=
          *(short *)((uint64_t)*(uint *)(param_1 + lVar3 * 8) * 0x70 + 0x30 +
                    *(int64_t *)(param_6 + 0x58))) {
        *(uint64_t *)(param_1 + param_4 * 8) = *(uint64_t *)param_5;
        return;
      }
      *(uint64_t *)(param_1 + param_4 * 8) = *(uint64_t *)(param_1 + lVar3 * 8);
      param_4 = lVar3;
    } while (param_2 < lVar3);
    *(uint64_t *)(param_1 + lVar3 * 8) = *(uint64_t *)param_5;
    return;
  }
  *(uint64_t *)(param_1 + param_4 * 8) = *(uint64_t *)param_5;
  return;
}



uint64_t *
FUN_1802db150(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_9592_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t *
FUN_1802db1a0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_9696_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



int8_t * FUN_1802db1f0(int8_t *param_1)

{
  int64_t *plVar1;
  
  *(uint64_t *)(param_1 + 8) = 0;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(int32_t *)(param_1 + 0x20) = 3;
  *(uint64_t *)(param_1 + 0x28) = 0;
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(uint64_t *)(param_1 + 0x38) = 0;
  *(int32_t *)(param_1 + 0x40) = 3;
  *(uint64_t *)(param_1 + 0x48) = 0;
  *(uint64_t *)(param_1 + 0x50) = 0;
  *(uint64_t *)(param_1 + 0x58) = 0;
  *(int32_t *)(param_1 + 0x60) = 3;
  *(uint64_t *)(param_1 + 0x68) = 0;
  *(uint64_t *)(param_1 + 0x70) = 0;
  *(uint64_t *)(param_1 + 0x78) = 0;
  plVar1 = *(int64_t **)(param_1 + 0x68);
  *(uint64_t *)(param_1 + 0x68) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 0x70);
  *(uint64_t *)(param_1 + 0x70) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 0x78);
  *(uint64_t *)(param_1 + 0x78) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *param_1 = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802db2d0(int64_t param_1,uint64_t *param_2,int32_t *param_3,int32_t param_4,
void FUN_1802db2d0(int64_t param_1,uint64_t *param_2,int32_t *param_3,int32_t param_4,
                  int32_t param_5)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  int32_t *puVar13;
  int32_t *puVar14;
  
  uVar1 = *(int32_t *)param_2;
  uVar2 = *(int32_t *)((int64_t)param_2 + 4);
  uVar9 = *param_2;
  uVar3 = *(int32_t *)(param_2 + 1);
  uVar4 = *(int32_t *)((int64_t)param_2 + 0xc);
  uVar10 = param_2[1];
  puVar13 = *(int32_t **)(param_1 + 0x10);
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  if (puVar13 < *(int32_t **)(param_1 + 0x18)) {
    *(int32_t **)(param_1 + 0x10) = puVar13 + 10;
    *puVar13 = uVar1;
    puVar13[1] = uVar2;
    puVar13[2] = uVar3;
    puVar13[3] = uVar4;
    puVar13[4] = uVar5;
    puVar13[5] = uVar6;
    puVar13[6] = uVar7;
    puVar13[7] = uVar8;
    *(uint64_t *)(puVar13 + 8) = CONCAT44(param_5,param_4);
    return;
  }
  puVar14 = *(int32_t **)(param_1 + 8);
  lVar12 = ((int64_t)puVar13 - (int64_t)puVar14) / 0x28;
  if (lVar12 == 0) {
    lVar12 = 1;
  }
  else {
    lVar12 = lVar12 * 2;
    if (lVar12 == 0) {
      puVar11 = (uint64_t *)0x0;
      goto LAB_1802db3a9;
    }
  }
  puVar11 = (uint64_t *)
            FUN_18062b420(system_memory_pool_ptr,lVar12 * 0x28,*(int8_t *)(param_1 + 0x20));
  puVar14 = *(int32_t **)(param_1 + 8);
  puVar13 = *(int32_t **)(param_1 + 0x10);
LAB_1802db3a9:
  if (puVar14 != puVar13) {
                    // WARNING: Subroutine does not return
    memmove(puVar11,puVar14,(int64_t)puVar13 - (int64_t)puVar14);
  }
  *puVar11 = uVar9;
  puVar11[1] = uVar10;
  *(int32_t *)(puVar11 + 2) = uVar5;
  *(int32_t *)((int64_t)puVar11 + 0x14) = uVar6;
  *(int32_t *)(puVar11 + 3) = uVar7;
  *(int32_t *)((int64_t)puVar11 + 0x1c) = uVar8;
  puVar11[4] = CONCAT44(param_5,param_4);
  if (*(int64_t *)(param_1 + 8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t **)(param_1 + 8) = puVar11;
  *(uint64_t **)(param_1 + 0x18) = puVar11 + lVar12 * 5;
  *(uint64_t **)(param_1 + 0x10) = puVar11 + 5;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802db337(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
void FUN_1802db337(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7)

{
  uint64_t *puVar1;
  int64_t unaff_RBX;
  int64_t lVar2;
  int64_t unaff_RDI;
  uint64_t uStackX_20;
  uint64_t in_stack_00000060;
  
  lVar2 = (param_1 - param_4) / 0x28;
  if (lVar2 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = lVar2 * 2;
    if (lVar2 == 0) {
      puVar1 = (uint64_t *)0x0;
      goto LAB_1802db3a9;
    }
  }
  puVar1 = (uint64_t *)
           FUN_18062b420(system_memory_pool_ptr,lVar2 * 0x28,*(int8_t *)(unaff_RBX + 0x20));
  param_4 = *(int64_t *)(unaff_RBX + 8);
  unaff_RDI = *(int64_t *)(unaff_RBX + 0x10);
LAB_1802db3a9:
  if (param_4 != unaff_RDI) {
                    // WARNING: Subroutine does not return
    memmove(puVar1,param_4,unaff_RDI - param_4);
  }
  *puVar1 = uStackX_20;
  puVar1[1] = param_5;
  *(int32_t *)(puVar1 + 2) = (int32_t)param_6;
  *(int32_t *)((int64_t)puVar1 + 0x14) = param_6._4_4_;
  *(int32_t *)(puVar1 + 3) = (int32_t)param_7;
  *(int32_t *)((int64_t)puVar1 + 0x1c) = param_7._4_4_;
  puVar1[4] = in_stack_00000060;
  if (*(int64_t *)(unaff_RBX + 8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t **)(unaff_RBX + 8) = puVar1;
  *(uint64_t **)(unaff_RBX + 0x18) = puVar1 + lVar2 * 5;
  *(uint64_t **)(unaff_RBX + 0x10) = puVar1 + 5;
  return;
}



void thunk_FUN_18064e900(void)

{
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




