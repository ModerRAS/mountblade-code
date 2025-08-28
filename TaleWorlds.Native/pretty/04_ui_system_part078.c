#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part078.c - 6 个函数

// 函数: void FUN_180711311(void)
void FUN_180711311(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int64_t lVar8;
  uint uVar9;
  float *pfVar10;
  int64_t lVar11;
  float *pfVar12;
  float *unaff_RBX;
  int64_t unaff_RBP;
  int unaff_ESI;
  float *unaff_RDI;
  int64_t lVar13;
  float *pfVar14;
  uint64_t uVar15;
  uint64_t unaff_R12;
  int64_t unaff_R13;
  float *unaff_R14;
  float *pfVar16;
  int64_t lVar17;
  int64_t in_stack_00000090;
  int in_stack_000000a0;
  int in_stack_000000a8;
  
  FUN_18071fb70();
  lVar17 = (int64_t)in_stack_000000a8;
  lVar13 = (int64_t)(unaff_ESI + 1) >> 1;
  pfVar10 = unaff_RBX + in_stack_00000090 + -2 + lVar17;
  uVar15 = unaff_R12;
  if (3 < lVar13) {
    pfVar14 = (float *)(lVar17 * 4 + -4 + unaff_R13);
    lVar11 = unaff_RBP - lVar17;
    pfVar12 = (float *)(unaff_R13 + 4);
    lVar8 = (lVar13 - 4U >> 2) + 1;
    uVar15 = lVar8 * 4;
    do {
      fVar1 = pfVar12[-1];
      fVar2 = pfVar12[unaff_RBP + -1];
      fVar3 = *unaff_RDI;
      fVar4 = pfVar10[1];
      fVar5 = *pfVar10;
      *unaff_RDI = fVar2 * *unaff_RDI + fVar1 * unaff_RDI[1];
      pfVar10[1] = fVar2 * unaff_RDI[1] - fVar1 * fVar3;
      fVar1 = pfVar14[lVar11];
      fVar2 = *pfVar14;
      *pfVar10 = fVar2 * fVar5 + fVar1 * fVar4;
      unaff_RDI[1] = fVar2 * fVar4 - fVar1 * fVar5;
      fVar1 = *pfVar12;
      fVar2 = pfVar12[unaff_RBP];
      fVar3 = unaff_RDI[2];
      fVar4 = pfVar10[-1];
      fVar5 = pfVar10[-2];
      unaff_RDI[2] = fVar2 * unaff_RDI[2] + fVar1 * unaff_RDI[3];
      pfVar10[-1] = fVar2 * unaff_RDI[3] - fVar1 * fVar3;
      fVar1 = pfVar14[lVar11 + -1];
      fVar2 = pfVar14[-1];
      pfVar10[-2] = fVar2 * fVar5 + fVar1 * fVar4;
      unaff_RDI[3] = fVar2 * fVar4 - fVar1 * fVar5;
      fVar1 = pfVar12[1];
      fVar2 = pfVar12[unaff_RBP + 1];
      fVar3 = unaff_RDI[4];
      fVar4 = pfVar10[-3];
      fVar5 = pfVar10[-4];
      unaff_RDI[4] = fVar2 * unaff_RDI[4] + fVar1 * unaff_RDI[5];
      pfVar10[-3] = fVar2 * unaff_RDI[5] - fVar1 * fVar3;
      fVar1 = pfVar14[-2];
      fVar2 = pfVar14[lVar11 + -2];
      pfVar10[-4] = fVar1 * fVar5 + fVar2 * fVar4;
      unaff_RDI[5] = fVar1 * fVar4 - fVar2 * fVar5;
      fVar1 = pfVar12[unaff_RBP + 2];
      fVar2 = pfVar12[2];
      fVar3 = pfVar10[-5];
      fVar4 = unaff_RDI[6];
      pfVar12 = pfVar12 + 4;
      fVar5 = pfVar10[-6];
      unaff_RDI[6] = fVar1 * unaff_RDI[6] + fVar2 * unaff_RDI[7];
      pfVar10[-5] = fVar1 * unaff_RDI[7] - fVar2 * fVar4;
      fVar1 = pfVar14[lVar11 + -3];
      fVar2 = pfVar14[-3];
      pfVar14 = pfVar14 + -4;
      pfVar10[-6] = fVar2 * fVar5 + fVar1 * fVar3;
      pfVar10 = pfVar10 + -8;
      unaff_RDI[7] = fVar2 * fVar3 - fVar1 * fVar5;
      unaff_RDI = unaff_RDI + 8;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  if ((int64_t)uVar15 < lVar13) {
    pfVar12 = (float *)(uVar15 * 4 + unaff_R13);
    pfVar14 = (float *)((lVar17 - uVar15) * 4 + -4 + unaff_R13);
    lVar13 = lVar13 - uVar15;
    do {
      fVar1 = *pfVar12;
      fVar2 = pfVar12[unaff_RBP];
      pfVar12 = pfVar12 + 1;
      fVar3 = *unaff_RDI;
      fVar4 = pfVar10[1];
      fVar5 = *pfVar10;
      *unaff_RDI = fVar2 * *unaff_RDI + fVar1 * unaff_RDI[1];
      pfVar10[1] = fVar2 * unaff_RDI[1] - fVar1 * fVar3;
      fVar1 = pfVar14[unaff_RBP - lVar17];
      fVar2 = *pfVar14;
      pfVar14 = pfVar14 + -1;
      *pfVar10 = fVar2 * fVar5 + fVar1 * fVar4;
      pfVar10 = pfVar10 + -2;
      unaff_RDI[1] = fVar2 * fVar4 - fVar1 * fVar5;
      unaff_RDI = unaff_RDI + 2;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  pfVar10 = unaff_RBX + (int64_t)in_stack_000000a0 + -1;
  iVar7 = in_stack_000000a0 / 2;
  pfVar12 = unaff_R14 + (int64_t)in_stack_000000a0 + -1;
  pfVar14 = unaff_RBX;
  pfVar16 = unaff_R14;
  if (3 < iVar7) {
    uVar9 = (iVar7 - 4U >> 2) + 1;
    uVar15 = (uint64_t)uVar9;
    unaff_R12 = (uint64_t)(uVar9 * 4);
    do {
      fVar1 = *pfVar10;
      fVar2 = *pfVar14;
      fVar3 = *pfVar12;
      fVar4 = *pfVar16;
      pfVar16 = pfVar16 + 4;
      fVar5 = *(float *)((int64_t)pfVar14 + (int64_t)unaff_R14 + (4 - (int64_t)unaff_RBX));
      *pfVar14 = fVar3 * fVar2 - fVar4 * fVar1;
      *pfVar10 = fVar4 * fVar2 + fVar3 * fVar1;
      fVar1 = pfVar10[-1];
      fVar2 = pfVar14[1];
      fVar3 = pfVar12[-1];
      fVar4 = *(float *)((int64_t)pfVar14 + (int64_t)unaff_R14 + (8 - (int64_t)unaff_RBX));
      pfVar14[1] = fVar3 * fVar2 - fVar5 * fVar1;
      fVar6 = pfVar10[-2];
      pfVar10[-1] = fVar5 * fVar2 + fVar3 * fVar1;
      fVar1 = pfVar14[2];
      fVar2 = pfVar12[-2];
      pfVar14[2] = fVar2 * fVar1 - fVar4 * fVar6;
      fVar3 = pfVar10[-3];
      pfVar10[-2] = fVar4 * fVar1 + fVar2 * fVar6;
      fVar1 = pfVar14[3];
      fVar2 = pfVar12[-3];
      pfVar12 = pfVar12 + -4;
      fVar4 = *(float *)((int64_t)unaff_R14 + (0xc - (int64_t)unaff_RBX) + (int64_t)pfVar14);
      pfVar14[3] = fVar2 * fVar1 - fVar4 * fVar3;
      pfVar14 = pfVar14 + 4;
      pfVar10[-3] = fVar4 * fVar1 + fVar2 * fVar3;
      pfVar10 = pfVar10 + -4;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  if ((int)unaff_R12 < iVar7) {
    lVar13 = (int64_t)pfVar12 - (int64_t)pfVar10;
    lVar17 = (int64_t)pfVar16 - (int64_t)pfVar14;
    uVar15 = (uint64_t)(uint)(iVar7 - (int)unaff_R12);
    do {
      fVar1 = *pfVar10;
      fVar2 = *pfVar14;
      fVar3 = *(float *)(lVar13 + (int64_t)pfVar10);
      fVar4 = *(float *)(lVar17 + (int64_t)pfVar14);
      *pfVar14 = fVar3 * fVar2 - fVar4 * fVar1;
      pfVar14 = pfVar14 + 1;
      *pfVar10 = fVar4 * fVar2 + fVar3 * fVar1;
      pfVar10 = pfVar10 + -1;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  return;
}





// 函数: void FUN_180711351(float *param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
void FUN_180711351(float *param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint uVar10;
  int64_t lVar11;
  float *pfVar12;
  float *unaff_RBX;
  float *pfVar13;
  int64_t unaff_RBP;
  float *unaff_RDI;
  float *pfVar14;
  uint64_t uVar15;
  int unaff_R12D;
  int64_t unaff_R13;
  float *unaff_R14;
  float *pfVar16;
  int64_t unaff_R15;
  int in_stack_000000a0;
  
  pfVar14 = (float *)(unaff_R15 * 4 + -4 + unaff_R13);
  lVar11 = unaff_RBP - unaff_R15;
  pfVar12 = (float *)(unaff_R13 + 4);
  lVar8 = (param_4 - 4U >> 2) + 1;
  lVar9 = lVar8;
  do {
    fVar1 = pfVar12[-1];
    fVar2 = pfVar12[unaff_RBP + -1];
    fVar3 = *unaff_RDI;
    fVar4 = param_1[1];
    fVar5 = *param_1;
    *unaff_RDI = fVar2 * *unaff_RDI + fVar1 * unaff_RDI[1];
    param_1[1] = fVar2 * unaff_RDI[1] - fVar1 * fVar3;
    fVar1 = pfVar14[lVar11];
    fVar2 = *pfVar14;
    *param_1 = fVar2 * fVar5 + fVar1 * fVar4;
    unaff_RDI[1] = fVar2 * fVar4 - fVar1 * fVar5;
    fVar1 = *pfVar12;
    fVar2 = pfVar12[unaff_RBP];
    fVar3 = unaff_RDI[2];
    fVar4 = param_1[-1];
    fVar5 = param_1[-2];
    unaff_RDI[2] = fVar2 * unaff_RDI[2] + fVar1 * unaff_RDI[3];
    param_1[-1] = fVar2 * unaff_RDI[3] - fVar1 * fVar3;
    fVar1 = pfVar14[lVar11 + -1];
    fVar2 = pfVar14[-1];
    param_1[-2] = fVar2 * fVar5 + fVar1 * fVar4;
    unaff_RDI[3] = fVar2 * fVar4 - fVar1 * fVar5;
    fVar1 = pfVar12[1];
    fVar2 = pfVar12[unaff_RBP + 1];
    fVar3 = unaff_RDI[4];
    fVar4 = param_1[-3];
    fVar5 = param_1[-4];
    unaff_RDI[4] = fVar2 * unaff_RDI[4] + fVar1 * unaff_RDI[5];
    param_1[-3] = fVar2 * unaff_RDI[5] - fVar1 * fVar3;
    fVar1 = pfVar14[-2];
    fVar2 = pfVar14[lVar11 + -2];
    param_1[-4] = fVar1 * fVar5 + fVar2 * fVar4;
    unaff_RDI[5] = fVar1 * fVar4 - fVar2 * fVar5;
    fVar1 = pfVar12[unaff_RBP + 2];
    fVar2 = pfVar12[2];
    fVar3 = param_1[-5];
    fVar4 = unaff_RDI[6];
    pfVar12 = pfVar12 + 4;
    fVar5 = param_1[-6];
    unaff_RDI[6] = fVar1 * unaff_RDI[6] + fVar2 * unaff_RDI[7];
    param_1[-5] = fVar1 * unaff_RDI[7] - fVar2 * fVar4;
    fVar1 = pfVar14[lVar11 + -3];
    fVar2 = pfVar14[-3];
    pfVar14 = pfVar14 + -4;
    param_1[-6] = fVar2 * fVar5 + fVar1 * fVar3;
    param_1 = param_1 + -8;
    unaff_RDI[7] = fVar2 * fVar3 - fVar1 * fVar5;
    unaff_RDI = unaff_RDI + 8;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  if (lVar8 * 4 < param_4) {
    pfVar12 = (float *)(lVar8 * 0x10 + unaff_R13);
    pfVar14 = (float *)((unaff_R15 + lVar8 * -4) * 4 + -4 + unaff_R13);
    param_4 = param_4 + lVar8 * -4;
    do {
      fVar1 = *pfVar12;
      fVar2 = pfVar12[unaff_RBP];
      pfVar12 = pfVar12 + 1;
      fVar3 = *unaff_RDI;
      fVar4 = param_1[1];
      fVar5 = *param_1;
      *unaff_RDI = fVar2 * *unaff_RDI + fVar1 * unaff_RDI[1];
      param_1[1] = fVar2 * unaff_RDI[1] - fVar1 * fVar3;
      fVar1 = pfVar14[unaff_RBP - unaff_R15];
      fVar2 = *pfVar14;
      pfVar14 = pfVar14 + -1;
      *param_1 = fVar2 * fVar5 + fVar1 * fVar4;
      param_1 = param_1 + -2;
      unaff_RDI[1] = fVar2 * fVar4 - fVar1 * fVar5;
      unaff_RDI = unaff_RDI + 2;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  pfVar12 = unaff_RBX + (int64_t)in_stack_000000a0 + -1;
  iVar7 = in_stack_000000a0 / 2;
  pfVar14 = unaff_R14 + (int64_t)in_stack_000000a0 + -1;
  pfVar13 = unaff_RBX;
  pfVar16 = unaff_R14;
  if (3 < iVar7) {
    uVar10 = (iVar7 - 4U >> 2) + 1;
    uVar15 = (uint64_t)uVar10;
    unaff_R12D = uVar10 * 4;
    do {
      fVar1 = *pfVar12;
      fVar2 = *pfVar13;
      fVar3 = *pfVar14;
      fVar4 = *pfVar16;
      pfVar16 = pfVar16 + 4;
      fVar5 = *(float *)((int64_t)pfVar13 + (int64_t)unaff_R14 + (4 - (int64_t)unaff_RBX));
      *pfVar13 = fVar3 * fVar2 - fVar4 * fVar1;
      *pfVar12 = fVar4 * fVar2 + fVar3 * fVar1;
      fVar1 = pfVar12[-1];
      fVar2 = pfVar13[1];
      fVar3 = pfVar14[-1];
      fVar4 = *(float *)((int64_t)pfVar13 + (int64_t)unaff_R14 + (8 - (int64_t)unaff_RBX));
      pfVar13[1] = fVar3 * fVar2 - fVar5 * fVar1;
      fVar6 = pfVar12[-2];
      pfVar12[-1] = fVar5 * fVar2 + fVar3 * fVar1;
      fVar1 = pfVar13[2];
      fVar2 = pfVar14[-2];
      pfVar13[2] = fVar2 * fVar1 - fVar4 * fVar6;
      fVar3 = pfVar12[-3];
      pfVar12[-2] = fVar4 * fVar1 + fVar2 * fVar6;
      fVar1 = pfVar13[3];
      fVar2 = pfVar14[-3];
      pfVar14 = pfVar14 + -4;
      fVar4 = *(float *)((int64_t)unaff_R14 + (0xc - (int64_t)unaff_RBX) + (int64_t)pfVar13);
      pfVar13[3] = fVar2 * fVar1 - fVar4 * fVar3;
      pfVar13 = pfVar13 + 4;
      pfVar12[-3] = fVar4 * fVar1 + fVar2 * fVar3;
      pfVar12 = pfVar12 + -4;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  if (unaff_R12D < iVar7) {
    lVar9 = (int64_t)pfVar14 - (int64_t)pfVar12;
    lVar8 = (int64_t)pfVar16 - (int64_t)pfVar13;
    uVar15 = (uint64_t)(uint)(iVar7 - unaff_R12D);
    do {
      fVar1 = *pfVar12;
      fVar2 = *pfVar13;
      fVar3 = *(float *)(lVar9 + (int64_t)pfVar12);
      fVar4 = *(float *)(lVar8 + (int64_t)pfVar13);
      *pfVar13 = fVar3 * fVar2 - fVar4 * fVar1;
      pfVar13 = pfVar13 + 1;
      *pfVar12 = fVar4 * fVar2 + fVar3 * fVar1;
      pfVar12 = pfVar12 + -1;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  return;
}





// 函数: void FUN_180711359(float *param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
void FUN_180711359(float *param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint uVar10;
  int64_t lVar11;
  float *pfVar12;
  float *unaff_RBX;
  float *pfVar13;
  int64_t unaff_RBP;
  float *unaff_RDI;
  int64_t in_R10;
  float *pfVar14;
  uint64_t uVar15;
  int unaff_R12D;
  int64_t unaff_R13;
  float *unaff_R14;
  float *pfVar16;
  int64_t unaff_R15;
  int in_stack_000000a0;
  
  pfVar14 = (float *)(in_R10 + unaff_R13);
  lVar11 = unaff_RBP - unaff_R15;
  pfVar12 = (float *)(unaff_R13 + 4);
  lVar8 = (param_4 - 4U >> 2) + 1;
  lVar9 = lVar8;
  do {
    fVar1 = pfVar12[-1];
    fVar2 = pfVar12[unaff_RBP + -1];
    fVar3 = *unaff_RDI;
    fVar4 = param_1[1];
    fVar5 = *param_1;
    *unaff_RDI = fVar2 * *unaff_RDI + fVar1 * unaff_RDI[1];
    param_1[1] = fVar2 * unaff_RDI[1] - fVar1 * fVar3;
    fVar1 = pfVar14[lVar11];
    fVar2 = *pfVar14;
    *param_1 = fVar2 * fVar5 + fVar1 * fVar4;
    unaff_RDI[1] = fVar2 * fVar4 - fVar1 * fVar5;
    fVar1 = *pfVar12;
    fVar2 = pfVar12[unaff_RBP];
    fVar3 = unaff_RDI[2];
    fVar4 = param_1[-1];
    fVar5 = param_1[-2];
    unaff_RDI[2] = fVar2 * unaff_RDI[2] + fVar1 * unaff_RDI[3];
    param_1[-1] = fVar2 * unaff_RDI[3] - fVar1 * fVar3;
    fVar1 = pfVar14[lVar11 + -1];
    fVar2 = pfVar14[-1];
    param_1[-2] = fVar2 * fVar5 + fVar1 * fVar4;
    unaff_RDI[3] = fVar2 * fVar4 - fVar1 * fVar5;
    fVar1 = pfVar12[1];
    fVar2 = pfVar12[unaff_RBP + 1];
    fVar3 = unaff_RDI[4];
    fVar4 = param_1[-3];
    fVar5 = param_1[-4];
    unaff_RDI[4] = fVar2 * unaff_RDI[4] + fVar1 * unaff_RDI[5];
    param_1[-3] = fVar2 * unaff_RDI[5] - fVar1 * fVar3;
    fVar1 = pfVar14[-2];
    fVar2 = pfVar14[lVar11 + -2];
    param_1[-4] = fVar1 * fVar5 + fVar2 * fVar4;
    unaff_RDI[5] = fVar1 * fVar4 - fVar2 * fVar5;
    fVar1 = pfVar12[unaff_RBP + 2];
    fVar2 = pfVar12[2];
    fVar3 = param_1[-5];
    fVar4 = unaff_RDI[6];
    pfVar12 = pfVar12 + 4;
    fVar5 = param_1[-6];
    unaff_RDI[6] = fVar1 * unaff_RDI[6] + fVar2 * unaff_RDI[7];
    param_1[-5] = fVar1 * unaff_RDI[7] - fVar2 * fVar4;
    fVar1 = pfVar14[lVar11 + -3];
    fVar2 = pfVar14[-3];
    pfVar14 = pfVar14 + -4;
    param_1[-6] = fVar2 * fVar5 + fVar1 * fVar3;
    param_1 = param_1 + -8;
    unaff_RDI[7] = fVar2 * fVar3 - fVar1 * fVar5;
    unaff_RDI = unaff_RDI + 8;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  if (lVar8 * 4 < param_4) {
    pfVar12 = (float *)(lVar8 * 0x10 + unaff_R13);
    pfVar14 = (float *)((unaff_R15 + lVar8 * -4) * 4 + -4 + unaff_R13);
    param_4 = param_4 + lVar8 * -4;
    do {
      fVar1 = *pfVar12;
      fVar2 = pfVar12[unaff_RBP];
      pfVar12 = pfVar12 + 1;
      fVar3 = *unaff_RDI;
      fVar4 = param_1[1];
      fVar5 = *param_1;
      *unaff_RDI = fVar2 * *unaff_RDI + fVar1 * unaff_RDI[1];
      param_1[1] = fVar2 * unaff_RDI[1] - fVar1 * fVar3;
      fVar1 = pfVar14[unaff_RBP - unaff_R15];
      fVar2 = *pfVar14;
      pfVar14 = pfVar14 + -1;
      *param_1 = fVar2 * fVar5 + fVar1 * fVar4;
      param_1 = param_1 + -2;
      unaff_RDI[1] = fVar2 * fVar4 - fVar1 * fVar5;
      unaff_RDI = unaff_RDI + 2;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  pfVar12 = unaff_RBX + (int64_t)in_stack_000000a0 + -1;
  iVar7 = in_stack_000000a0 / 2;
  pfVar14 = unaff_R14 + (int64_t)in_stack_000000a0 + -1;
  pfVar13 = unaff_RBX;
  pfVar16 = unaff_R14;
  if (3 < iVar7) {
    uVar10 = (iVar7 - 4U >> 2) + 1;
    uVar15 = (uint64_t)uVar10;
    unaff_R12D = uVar10 * 4;
    do {
      fVar1 = *pfVar12;
      fVar2 = *pfVar13;
      fVar3 = *pfVar14;
      fVar4 = *pfVar16;
      pfVar16 = pfVar16 + 4;
      fVar5 = *(float *)((int64_t)pfVar13 + (int64_t)unaff_R14 + (4 - (int64_t)unaff_RBX));
      *pfVar13 = fVar3 * fVar2 - fVar4 * fVar1;
      *pfVar12 = fVar4 * fVar2 + fVar3 * fVar1;
      fVar1 = pfVar12[-1];
      fVar2 = pfVar13[1];
      fVar3 = pfVar14[-1];
      fVar4 = *(float *)((int64_t)pfVar13 + (int64_t)unaff_R14 + (8 - (int64_t)unaff_RBX));
      pfVar13[1] = fVar3 * fVar2 - fVar5 * fVar1;
      fVar6 = pfVar12[-2];
      pfVar12[-1] = fVar5 * fVar2 + fVar3 * fVar1;
      fVar1 = pfVar13[2];
      fVar2 = pfVar14[-2];
      pfVar13[2] = fVar2 * fVar1 - fVar4 * fVar6;
      fVar3 = pfVar12[-3];
      pfVar12[-2] = fVar4 * fVar1 + fVar2 * fVar6;
      fVar1 = pfVar13[3];
      fVar2 = pfVar14[-3];
      pfVar14 = pfVar14 + -4;
      fVar4 = *(float *)((int64_t)unaff_R14 + (0xc - (int64_t)unaff_RBX) + (int64_t)pfVar13);
      pfVar13[3] = fVar2 * fVar1 - fVar4 * fVar3;
      pfVar13 = pfVar13 + 4;
      pfVar12[-3] = fVar4 * fVar1 + fVar2 * fVar3;
      pfVar12 = pfVar12 + -4;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  if (unaff_R12D < iVar7) {
    lVar9 = (int64_t)pfVar14 - (int64_t)pfVar12;
    lVar8 = (int64_t)pfVar16 - (int64_t)pfVar13;
    uVar15 = (uint64_t)(uint)(iVar7 - unaff_R12D);
    do {
      fVar1 = *pfVar12;
      fVar2 = *pfVar13;
      fVar3 = *(float *)(lVar9 + (int64_t)pfVar12);
      fVar4 = *(float *)(lVar8 + (int64_t)pfVar13);
      *pfVar13 = fVar3 * fVar2 - fVar4 * fVar1;
      pfVar13 = pfVar13 + 1;
      *pfVar12 = fVar4 * fVar2 + fVar3 * fVar1;
      pfVar12 = pfVar12 + -1;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  return;
}





// 函数: void FUN_180711576(float *param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
void FUN_180711576(float *param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  float *unaff_RBX;
  float *pfVar10;
  int64_t unaff_RBP;
  float *unaff_RDI;
  float *pfVar11;
  int64_t lVar12;
  uint64_t uVar13;
  int64_t in_R11;
  int unaff_R12D;
  int64_t unaff_R13;
  float *unaff_R14;
  float *pfVar14;
  int64_t lVar15;
  int64_t unaff_R15;
  int in_stack_000000a0;
  
  if (in_R11 < param_4) {
    pfVar9 = (float *)(in_R11 * 4 + unaff_R13);
    pfVar11 = (float *)((unaff_R15 - in_R11) * 4 + -4 + unaff_R13);
    param_4 = param_4 - in_R11;
    do {
      fVar1 = *pfVar9;
      fVar2 = pfVar9[unaff_RBP];
      pfVar9 = pfVar9 + 1;
      fVar3 = *unaff_RDI;
      fVar4 = param_1[1];
      fVar5 = *param_1;
      *unaff_RDI = fVar2 * *unaff_RDI + fVar1 * unaff_RDI[1];
      param_1[1] = fVar2 * unaff_RDI[1] - fVar1 * fVar3;
      fVar1 = pfVar11[unaff_RBP - unaff_R15];
      fVar2 = *pfVar11;
      pfVar11 = pfVar11 + -1;
      *param_1 = fVar2 * fVar5 + fVar1 * fVar4;
      param_1 = param_1 + -2;
      unaff_RDI[1] = fVar2 * fVar4 - fVar1 * fVar5;
      unaff_RDI = unaff_RDI + 2;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  pfVar9 = unaff_RBX + (int64_t)in_stack_000000a0 + -1;
  iVar7 = in_stack_000000a0 / 2;
  pfVar11 = unaff_R14 + (int64_t)in_stack_000000a0 + -1;
  pfVar10 = unaff_RBX;
  pfVar14 = unaff_R14;
  if (3 < iVar7) {
    uVar8 = (iVar7 - 4U >> 2) + 1;
    uVar13 = (uint64_t)uVar8;
    unaff_R12D = uVar8 * 4;
    do {
      fVar1 = *pfVar9;
      fVar2 = *pfVar10;
      fVar3 = *pfVar11;
      fVar4 = *pfVar14;
      pfVar14 = pfVar14 + 4;
      fVar5 = *(float *)((int64_t)pfVar10 + (int64_t)unaff_R14 + (4 - (int64_t)unaff_RBX));
      *pfVar10 = fVar3 * fVar2 - fVar4 * fVar1;
      *pfVar9 = fVar4 * fVar2 + fVar3 * fVar1;
      fVar1 = pfVar9[-1];
      fVar2 = pfVar10[1];
      fVar3 = pfVar11[-1];
      fVar4 = *(float *)((int64_t)pfVar10 + (int64_t)unaff_R14 + (8 - (int64_t)unaff_RBX));
      pfVar10[1] = fVar3 * fVar2 - fVar5 * fVar1;
      fVar6 = pfVar9[-2];
      pfVar9[-1] = fVar5 * fVar2 + fVar3 * fVar1;
      fVar1 = pfVar10[2];
      fVar2 = pfVar11[-2];
      pfVar10[2] = fVar2 * fVar1 - fVar4 * fVar6;
      fVar3 = pfVar9[-3];
      pfVar9[-2] = fVar4 * fVar1 + fVar2 * fVar6;
      fVar1 = pfVar10[3];
      fVar2 = pfVar11[-3];
      pfVar11 = pfVar11 + -4;
      fVar4 = *(float *)((int64_t)unaff_R14 + (0xc - (int64_t)unaff_RBX) + (int64_t)pfVar10);
      pfVar10[3] = fVar2 * fVar1 - fVar4 * fVar3;
      pfVar10 = pfVar10 + 4;
      pfVar9[-3] = fVar4 * fVar1 + fVar2 * fVar3;
      pfVar9 = pfVar9 + -4;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  if (unaff_R12D < iVar7) {
    lVar12 = (int64_t)pfVar11 - (int64_t)pfVar9;
    lVar15 = (int64_t)pfVar14 - (int64_t)pfVar10;
    uVar13 = (uint64_t)(uint)(iVar7 - unaff_R12D);
    do {
      fVar1 = *pfVar9;
      fVar2 = *pfVar10;
      fVar3 = *(float *)(lVar12 + (int64_t)pfVar9);
      fVar4 = *(float *)(lVar15 + (int64_t)pfVar10);
      *pfVar10 = fVar3 * fVar2 - fVar4 * fVar1;
      pfVar10 = pfVar10 + 1;
      *pfVar9 = fVar4 * fVar2 + fVar3 * fVar1;
      pfVar9 = pfVar9 + -1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  return;
}





// 函数: void FUN_180711674(uint64_t param_1,uint64_t param_2,float *param_3,float *param_4)
void FUN_180711674(uint64_t param_1,uint64_t param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int in_EAX;
  uint uVar7;
  float *unaff_RBX;
  float *pfVar8;
  int64_t lVar9;
  uint64_t uVar10;
  float *unaff_R14;
  float *pfVar11;
  int64_t lVar12;
  
  uVar7 = (in_EAX - 4U >> 2) + 1;
  uVar10 = (uint64_t)uVar7;
  pfVar8 = unaff_RBX;
  pfVar11 = unaff_R14;
  do {
    fVar1 = *param_3;
    fVar2 = *pfVar8;
    fVar3 = *param_4;
    fVar4 = *pfVar11;
    pfVar11 = pfVar11 + 4;
    fVar5 = *(float *)((int64_t)pfVar8 + (int64_t)unaff_R14 + (4 - (int64_t)unaff_RBX));
    *pfVar8 = fVar3 * fVar2 - fVar4 * fVar1;
    *param_3 = fVar4 * fVar2 + fVar3 * fVar1;
    fVar1 = param_3[-1];
    fVar2 = pfVar8[1];
    fVar3 = param_4[-1];
    fVar4 = *(float *)((int64_t)pfVar8 + (int64_t)unaff_R14 + (8 - (int64_t)unaff_RBX));
    pfVar8[1] = fVar3 * fVar2 - fVar5 * fVar1;
    fVar6 = param_3[-2];
    param_3[-1] = fVar5 * fVar2 + fVar3 * fVar1;
    fVar1 = pfVar8[2];
    fVar2 = param_4[-2];
    pfVar8[2] = fVar2 * fVar1 - fVar4 * fVar6;
    fVar3 = param_3[-3];
    param_3[-2] = fVar4 * fVar1 + fVar2 * fVar6;
    fVar1 = pfVar8[3];
    fVar2 = param_4[-3];
    param_4 = param_4 + -4;
    fVar4 = *(float *)((int64_t)unaff_R14 + (0xc - (int64_t)unaff_RBX) + (int64_t)pfVar8);
    pfVar8[3] = fVar2 * fVar1 - fVar4 * fVar3;
    pfVar8 = pfVar8 + 4;
    param_3[-3] = fVar4 * fVar1 + fVar2 * fVar3;
    param_3 = param_3 + -4;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if ((int)(uVar7 * 4) < in_EAX) {
    lVar9 = (int64_t)param_4 - (int64_t)param_3;
    lVar12 = (int64_t)pfVar11 - (int64_t)pfVar8;
    uVar10 = (uint64_t)(in_EAX + uVar7 * -4);
    do {
      fVar1 = *param_3;
      fVar2 = *pfVar8;
      fVar3 = *(float *)(lVar9 + (int64_t)param_3);
      fVar4 = *(float *)(lVar12 + (int64_t)pfVar8);
      *pfVar8 = fVar3 * fVar2 - fVar4 * fVar1;
      pfVar8 = pfVar8 + 1;
      *param_3 = fVar4 * fVar2 + fVar3 * fVar1;
      param_3 = param_3 + -1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180711810(int *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_180711810(int *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,int param_6)

{
  uint uVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int iVar6;
  int8_t auStack_c8 [16];
  int64_t lStack_b8;
  uint64_t uStack_b0;
  int iStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_40;
  
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_c8;
  iStack_a8 = *param_1;
  lVar4 = 0;
  uStack_90 = *(uint64_t *)(param_1 + (int64_t)param_6 * 2 + 2);
  lVar5 = 0;
  lStack_b8 = *(int64_t *)(param_1 + 10);
  iVar6 = 0;
  if (1 < param_6) {
    uVar1 = (param_6 - 2U >> 1) + 1;
    uVar2 = (uint64_t)uVar1;
    iVar6 = uVar1 * 2;
    do {
      iVar3 = iStack_a8 >> 1;
      iStack_a8 = iStack_a8 >> 2;
      lVar4 = lVar4 + (int64_t)iVar3 * 4;
      lVar5 = lVar5 + (int64_t)iStack_a8 * 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (iVar6 < param_6) {
    iStack_a8 = iStack_a8 >> 1;
    lStack_b8 = lStack_b8 + (int64_t)iStack_a8 * 4;
  }
  lStack_b8 = lStack_b8 + lVar5 + lVar4;
  iStack_a8 = iStack_a8 >> 1;
  uStack_a0 = (int64_t)iStack_a8 * 4;
  uVar2 = uStack_a0 + 0xf;
  if (uVar2 <= uStack_a0) {
    uVar2 = 0xffffffffffffff0;
  }
  uStack_b0 = param_2;
  uStack_98 = param_3;
                    // WARNING: Subroutine does not return
  SystemCore_MemoryManager0(uVar2 & 0xfffffffffffffff0);
}



uint64_t FUN_180712260(int param_1,int param_2,int32_t *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  
  puVar4 = (uint64_t *)&unknown_var_8320_ptr;
  iVar3 = 0;
  do {
    piVar1 = (int *)*puVar4;
    iVar2 = 0;
    do {
      if ((param_1 == *piVar1) && (param_2 << ((byte)iVar2 & 0x1f) == piVar1[0xb] * piVar1[0xc])) {
        if (param_3 != (int32_t *)0x0) {
          *param_3 = 0;
        }
        return *(uint64_t *)(&unknown_var_8320_ptr + (int64_t)iVar3 * 8);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
    if (0x1809530e7 < (int64_t)puVar4) {
      if (param_3 != (int32_t *)0x0) {
        *param_3 = 0xffffffff;
      }
      return 0;
    }
  } while( true );
}





