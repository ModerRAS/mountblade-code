#include "TaleWorlds.Native.Split.h"

// 99_part_11_part027.c - 9 个函数

// 函数: void FUN_1806f7490(longlong param_1,int param_2,longlong param_3,float *param_4,int param_5,
void FUN_1806f7490(longlong param_1,int param_2,longlong param_3,float *param_4,int param_5,
                  int param_6,int param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  longlong lVar5;
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
  
  lVar5 = 0;
  lVar1 = (longlong)param_5;
  fVar10 = param_4[1];
  fVar6 = *param_4;
  fVar17 = ((float)param_2 * 4.0) / (float)param_7;
  fVar18 = 1.0 - fVar17;
  if (param_6 == 2) {
    fVar7 = param_4[3];
    fVar8 = param_4[2];
    if (3 < lVar1) {
      pfVar4 = (float *)(param_3 + 4);
      lVar3 = param_1 - param_3;
      lVar2 = (lVar1 - 4U >> 2) + 1;
      lVar5 = lVar2 * 4;
      do {
        fVar9 = *(float *)(lVar3 + -4 + (longlong)pfVar4);
        fVar13 = *(float *)(lVar3 + (longlong)pfVar4);
        fVar11 = fVar9 - fVar6;
        fVar14 = fVar13 - fVar8;
        pfVar4[-1] = fVar11 - fVar10;
        *pfVar4 = fVar14 - fVar7;
        fVar12 = *(float *)(lVar3 + 4 + (longlong)pfVar4);
        fVar11 = fVar11 * fVar17 + 1e-30 + fVar10 * fVar18;
        fVar10 = *(float *)(lVar3 + 8 + (longlong)pfVar4);
        fVar6 = fVar9 * fVar17 + 1e-30 + fVar6 * fVar18;
        fVar14 = fVar14 * fVar17 + 1e-30 + fVar7 * fVar18;
        fVar8 = fVar13 * fVar17 + 1e-30 + fVar8 * fVar18;
        fVar13 = fVar12 - fVar6;
        fVar15 = fVar10 - fVar8;
        fVar7 = fVar12 * fVar17 + 1e-30 + fVar6 * fVar18;
        fVar9 = fVar10 * fVar17 + 1e-30 + fVar8 * fVar18;
        pfVar4[1] = fVar13 - fVar11;
        pfVar4[2] = fVar15 - fVar14;
        fVar10 = *(float *)(lVar3 + 0xc + (longlong)pfVar4);
        fVar6 = *(float *)(lVar3 + 0x10 + (longlong)pfVar4);
        fVar11 = fVar13 * fVar17 + 1e-30 + fVar11 * fVar18;
        fVar16 = fVar15 * fVar17 + 1e-30 + fVar14 * fVar18;
        fVar13 = fVar10 - fVar7;
        fVar14 = fVar6 - fVar9;
        fVar8 = fVar10 * fVar17 + 1e-30 + fVar7 * fVar18;
        fVar9 = fVar6 * fVar17 + 1e-30 + fVar9 * fVar18;
        fVar12 = fVar13 * fVar17 + 1e-30 + fVar11 * fVar18;
        fVar15 = fVar14 * fVar17 + 1e-30 + fVar16 * fVar18;
        pfVar4[3] = fVar13 - fVar11;
        pfVar4[4] = fVar14 - fVar16;
        fVar10 = *(float *)(lVar3 + 0x14 + (longlong)pfVar4);
        fVar7 = *(float *)(lVar3 + 0x18 + (longlong)pfVar4);
        fVar13 = fVar10 - fVar8;
        fVar11 = fVar7 - fVar9;
        pfVar4[5] = fVar13 - fVar12;
        pfVar4[6] = fVar11 - fVar15;
        fVar6 = fVar10 * fVar17 + 1e-30 + fVar8 * fVar18;
        pfVar4 = pfVar4 + 8;
        fVar8 = fVar7 * fVar17 + 1e-30 + fVar9 * fVar18;
        fVar10 = fVar13 * fVar17 + 1e-30 + fVar12 * fVar18;
        fVar7 = fVar11 * fVar17 + 1e-30 + fVar15 * fVar18;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (lVar5 < lVar1) {
      pfVar4 = (float *)(param_3 + 4 + lVar5 * 8);
      lVar1 = lVar1 - lVar5;
      do {
        fVar9 = *(float *)((longlong)pfVar4 + (param_1 - param_3) + -4);
        fVar13 = *(float *)((longlong)pfVar4 + (param_1 - param_3));
        fVar12 = fVar9 - fVar6;
        fVar11 = fVar13 - fVar8;
        fVar6 = fVar9 * fVar17 + 1e-30 + fVar6 * fVar18;
        fVar8 = fVar13 * fVar17 + 1e-30 + fVar8 * fVar18;
        *pfVar4 = fVar11 - fVar7;
        pfVar4[-1] = fVar12 - fVar10;
        pfVar4 = pfVar4 + 2;
        fVar10 = fVar12 * fVar17 + 1e-30 + fVar10 * fVar18;
        fVar7 = fVar11 * fVar17 + 1e-30 + fVar7 * fVar18;
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
    }
    param_4[2] = fVar8;
    param_4[3] = fVar7;
    *param_4 = fVar6;
    param_4[1] = fVar10;
  }
  else {
    if (3 < lVar1) {
      pfVar4 = (float *)(param_3 + 4);
      lVar2 = param_1 - param_3;
      lVar3 = (lVar1 - 4U >> 2) + 1;
      lVar5 = lVar3 * 4;
      do {
        fVar7 = *(float *)((longlong)pfVar4 + lVar2 + -4);
        fVar8 = fVar7 - fVar6;
        fVar6 = fVar7 * fVar17 + 1e-30 + fVar6 * fVar18;
        pfVar4[-1] = fVar8 - fVar10;
        fVar7 = fVar8 * fVar17 + 1e-30 + fVar10 * fVar18;
        fVar8 = *(float *)((longlong)pfVar4 + lVar2) - fVar6;
        fVar6 = *(float *)((longlong)pfVar4 + lVar2) * fVar17 + 1e-30 + fVar6 * fVar18;
        *pfVar4 = fVar8 - fVar7;
        fVar10 = *(float *)((longlong)pfVar4 + lVar2 + 4);
        fVar8 = fVar8 * fVar17 + 1e-30 + fVar7 * fVar18;
        fVar7 = fVar10 - fVar6;
        fVar6 = fVar10 * fVar17 + 1e-30 + fVar6 * fVar18;
        pfVar4[1] = fVar7 - fVar8;
        fVar10 = *(float *)((longlong)pfVar4 + lVar2 + 8);
        fVar9 = fVar10 - fVar6;
        fVar7 = fVar7 * fVar17 + 1e-30 + fVar8 * fVar18;
        fVar6 = fVar10 * fVar17 + 1e-30 + fVar6 * fVar18;
        pfVar4[2] = fVar9 - fVar7;
        pfVar4 = pfVar4 + 4;
        fVar10 = fVar9 * fVar17 + 1e-30 + fVar7 * fVar18;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (lVar5 < lVar1) {
      pfVar4 = (float *)(param_3 + lVar5 * 4);
      lVar1 = lVar1 - lVar5;
      do {
        fVar7 = *(float *)((longlong)pfVar4 + (param_1 - param_3));
        fVar8 = fVar7 - fVar6;
        fVar6 = fVar7 * fVar17 + 1e-30 + fVar6 * fVar18;
        *pfVar4 = fVar8 - fVar10;
        pfVar4 = pfVar4 + 1;
        fVar10 = fVar8 * fVar17 + 1e-30 + fVar10 * fVar18;
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
    }
    *param_4 = fVar6;
    param_4[1] = fVar10;
  }
  return;
}






// 函数: void FUN_1806f750a(longlong param_1,uint64_t param_2,longlong param_3,float *param_4)
void FUN_1806f750a(longlong param_1,uint64_t param_2,longlong param_3,float *param_4)

{
  longlong in_RAX;
  longlong lVar1;
  longlong unaff_RBX;
  float *pfVar2;
  longlong in_R10;
  longlong in_R11;
  float fVar3;
  float fVar4;
  float in_XMM5_Da;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_XMM7_Da;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float fVar12;
  
  fVar4 = param_4[3];
  fVar12 = param_4[2];
  if (3 < in_RAX) {
    pfVar2 = (float *)(param_3 + 4);
    param_1 = param_1 - unaff_RBX;
    lVar1 = (in_RAX - 4U >> 2) + 1;
    in_R11 = lVar1 * 4;
    do {
      fVar3 = *(float *)(param_1 + -4 + (longlong)pfVar2);
      fVar5 = *(float *)(param_1 + (longlong)pfVar2);
      fVar6 = fVar3 - unaff_XMM7_Da;
      fVar9 = fVar5 - fVar12;
      pfVar2[-1] = fVar6 - in_XMM5_Da;
      *pfVar2 = fVar9 - fVar4;
      fVar8 = *(float *)(param_1 + 4 + (longlong)pfVar2);
      fVar7 = fVar6 * unaff_XMM10_Da + 1e-30 + in_XMM5_Da * unaff_XMM11_Da;
      fVar6 = *(float *)(param_1 + 8 + (longlong)pfVar2);
      fVar3 = fVar3 * unaff_XMM10_Da + 1e-30 + unaff_XMM7_Da * unaff_XMM11_Da;
      fVar10 = fVar9 * unaff_XMM10_Da + 1e-30 + fVar4 * unaff_XMM11_Da;
      fVar4 = fVar5 * unaff_XMM10_Da + 1e-30 + fVar12 * unaff_XMM11_Da;
      fVar9 = fVar8 - fVar3;
      fVar11 = fVar6 - fVar4;
      fVar3 = fVar8 * unaff_XMM10_Da + 1e-30 + fVar3 * unaff_XMM11_Da;
      fVar5 = fVar6 * unaff_XMM10_Da + 1e-30 + fVar4 * unaff_XMM11_Da;
      pfVar2[1] = fVar9 - fVar7;
      pfVar2[2] = fVar11 - fVar10;
      fVar4 = *(float *)(param_1 + 0xc + (longlong)pfVar2);
      fVar12 = *(float *)(param_1 + 0x10 + (longlong)pfVar2);
      fVar7 = fVar9 * unaff_XMM10_Da + 1e-30 + fVar7 * unaff_XMM11_Da;
      fVar11 = fVar11 * unaff_XMM10_Da + 1e-30 + fVar10 * unaff_XMM11_Da;
      fVar8 = fVar4 - fVar3;
      fVar9 = fVar12 - fVar5;
      fVar3 = fVar4 * unaff_XMM10_Da + 1e-30 + fVar3 * unaff_XMM11_Da;
      fVar5 = fVar12 * unaff_XMM10_Da + 1e-30 + fVar5 * unaff_XMM11_Da;
      fVar6 = fVar8 * unaff_XMM10_Da + 1e-30 + fVar7 * unaff_XMM11_Da;
      fVar10 = fVar9 * unaff_XMM10_Da + 1e-30 + fVar11 * unaff_XMM11_Da;
      pfVar2[3] = fVar8 - fVar7;
      pfVar2[4] = fVar9 - fVar11;
      fVar4 = *(float *)(param_1 + 0x14 + (longlong)pfVar2);
      fVar12 = *(float *)(param_1 + 0x18 + (longlong)pfVar2);
      fVar8 = fVar4 - fVar3;
      fVar7 = fVar12 - fVar5;
      pfVar2[5] = fVar8 - fVar6;
      pfVar2[6] = fVar7 - fVar10;
      unaff_XMM7_Da = fVar4 * unaff_XMM10_Da + 1e-30 + fVar3 * unaff_XMM11_Da;
      pfVar2 = pfVar2 + 8;
      fVar12 = fVar12 * unaff_XMM10_Da + 1e-30 + fVar5 * unaff_XMM11_Da;
      in_XMM5_Da = fVar8 * unaff_XMM10_Da + 1e-30 + fVar6 * unaff_XMM11_Da;
      fVar4 = fVar7 * unaff_XMM10_Da + 1e-30 + fVar10 * unaff_XMM11_Da;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  if (in_R11 < in_RAX) {
    pfVar2 = (float *)(unaff_RBX + 4 + in_R11 * 8);
    lVar1 = in_RAX - in_R11;
    do {
      fVar3 = *(float *)((longlong)pfVar2 + (in_R10 - unaff_RBX) + -4);
      fVar5 = *(float *)((longlong)pfVar2 + (in_R10 - unaff_RBX));
      fVar8 = fVar3 - unaff_XMM7_Da;
      fVar6 = fVar5 - fVar12;
      unaff_XMM7_Da = fVar3 * unaff_XMM10_Da + 1e-30 + unaff_XMM7_Da * unaff_XMM11_Da;
      fVar12 = fVar5 * unaff_XMM10_Da + 1e-30 + fVar12 * unaff_XMM11_Da;
      *pfVar2 = fVar6 - fVar4;
      pfVar2[-1] = fVar8 - in_XMM5_Da;
      pfVar2 = pfVar2 + 2;
      in_XMM5_Da = fVar8 * unaff_XMM10_Da + 1e-30 + in_XMM5_Da * unaff_XMM11_Da;
      fVar4 = fVar6 * unaff_XMM10_Da + 1e-30 + fVar4 * unaff_XMM11_Da;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  param_4[2] = fVar12;
  param_4[3] = fVar4;
  *param_4 = unaff_XMM7_Da;
  param_4[1] = in_XMM5_Da;
  return;
}






// 函数: void FUN_1806f753d(uint64_t param_1,longlong param_2,longlong param_3,float *param_4)
void FUN_1806f753d(uint64_t param_1,longlong param_2,longlong param_3,float *param_4)

{
  longlong in_RAX;
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RBX;
  float *pfVar3;
  longlong in_R10;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_XMM5_Da;
  float fVar7;
  float fVar8;
  float unaff_XMM7_Da;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_XMM9_Da;
  float fVar12;
  float fVar13;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  
  pfVar3 = (float *)(param_3 + 4);
  param_2 = param_2 - unaff_RBX;
  lVar1 = (in_RAX - 4U >> 2) + 1;
  lVar2 = lVar1;
  do {
    fVar4 = *(float *)(param_2 + -4 + (longlong)pfVar3);
    fVar6 = *(float *)(param_2 + (longlong)pfVar3);
    fVar7 = fVar4 - unaff_XMM7_Da;
    fVar10 = fVar6 - unaff_XMM12_Da;
    pfVar3[-1] = fVar7 - in_XMM5_Da;
    *pfVar3 = fVar10 - unaff_XMM9_Da;
    fVar5 = *(float *)(param_2 + 4 + (longlong)pfVar3);
    fVar8 = fVar7 * unaff_XMM10_Da + unaff_XMM13_Da + in_XMM5_Da * unaff_XMM11_Da;
    fVar7 = *(float *)(param_2 + 8 + (longlong)pfVar3);
    fVar4 = fVar4 * unaff_XMM10_Da + unaff_XMM13_Da + unaff_XMM7_Da * unaff_XMM11_Da;
    fVar11 = fVar10 * unaff_XMM10_Da + unaff_XMM13_Da + unaff_XMM9_Da * unaff_XMM11_Da;
    fVar6 = fVar6 * unaff_XMM10_Da + unaff_XMM13_Da + unaff_XMM12_Da * unaff_XMM11_Da;
    fVar10 = fVar5 - fVar4;
    fVar12 = fVar7 - fVar6;
    fVar5 = fVar5 * unaff_XMM10_Da + unaff_XMM13_Da + fVar4 * unaff_XMM11_Da;
    fVar7 = fVar7 * unaff_XMM10_Da + unaff_XMM13_Da + fVar6 * unaff_XMM11_Da;
    pfVar3[1] = fVar10 - fVar8;
    pfVar3[2] = fVar12 - fVar11;
    fVar4 = *(float *)(param_2 + 0xc + (longlong)pfVar3);
    fVar6 = *(float *)(param_2 + 0x10 + (longlong)pfVar3);
    fVar9 = fVar10 * unaff_XMM10_Da + unaff_XMM13_Da + fVar8 * unaff_XMM11_Da;
    fVar13 = fVar12 * unaff_XMM10_Da + unaff_XMM13_Da + fVar11 * unaff_XMM11_Da;
    fVar8 = fVar4 - fVar5;
    fVar11 = fVar6 - fVar7;
    fVar5 = fVar4 * unaff_XMM10_Da + unaff_XMM13_Da + fVar5 * unaff_XMM11_Da;
    fVar7 = fVar6 * unaff_XMM10_Da + unaff_XMM13_Da + fVar7 * unaff_XMM11_Da;
    fVar10 = fVar8 * unaff_XMM10_Da + unaff_XMM13_Da + fVar9 * unaff_XMM11_Da;
    fVar12 = fVar11 * unaff_XMM10_Da + unaff_XMM13_Da + fVar13 * unaff_XMM11_Da;
    pfVar3[3] = fVar8 - fVar9;
    pfVar3[4] = fVar11 - fVar13;
    fVar4 = *(float *)(param_2 + 0x14 + (longlong)pfVar3);
    fVar6 = *(float *)(param_2 + 0x18 + (longlong)pfVar3);
    fVar8 = fVar4 - fVar5;
    fVar9 = fVar6 - fVar7;
    pfVar3[5] = fVar8 - fVar10;
    pfVar3[6] = fVar9 - fVar12;
    unaff_XMM7_Da = fVar4 * unaff_XMM10_Da + unaff_XMM13_Da + fVar5 * unaff_XMM11_Da;
    pfVar3 = pfVar3 + 8;
    unaff_XMM12_Da = fVar6 * unaff_XMM10_Da + unaff_XMM13_Da + fVar7 * unaff_XMM11_Da;
    in_XMM5_Da = fVar8 * unaff_XMM10_Da + unaff_XMM13_Da + fVar10 * unaff_XMM11_Da;
    unaff_XMM9_Da = fVar9 * unaff_XMM10_Da + unaff_XMM13_Da + fVar12 * unaff_XMM11_Da;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  if (lVar1 * 4 < in_RAX) {
    pfVar3 = (float *)(unaff_RBX + 4 + lVar1 * 0x20);
    lVar2 = in_RAX + lVar1 * -4;
    do {
      fVar4 = *(float *)((longlong)pfVar3 + (in_R10 - unaff_RBX) + -4);
      fVar6 = *(float *)((longlong)pfVar3 + (in_R10 - unaff_RBX));
      fVar5 = fVar4 - unaff_XMM7_Da;
      fVar7 = fVar6 - unaff_XMM12_Da;
      unaff_XMM7_Da = fVar4 * unaff_XMM10_Da + unaff_XMM13_Da + unaff_XMM7_Da * unaff_XMM11_Da;
      unaff_XMM12_Da = fVar6 * unaff_XMM10_Da + unaff_XMM13_Da + unaff_XMM12_Da * unaff_XMM11_Da;
      *pfVar3 = fVar7 - unaff_XMM9_Da;
      pfVar3[-1] = fVar5 - in_XMM5_Da;
      pfVar3 = pfVar3 + 2;
      in_XMM5_Da = fVar5 * unaff_XMM10_Da + unaff_XMM13_Da + in_XMM5_Da * unaff_XMM11_Da;
      unaff_XMM9_Da = fVar7 * unaff_XMM10_Da + unaff_XMM13_Da + unaff_XMM9_Da * unaff_XMM11_Da;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  param_4[2] = unaff_XMM12_Da;
  param_4[3] = unaff_XMM9_Da;
  *param_4 = unaff_XMM7_Da;
  param_4[1] = in_XMM5_Da;
  return;
}






// 函数: void FUN_1806f7790(void)
void FUN_1806f7790(void)

{
  float fVar1;
  float fVar2;
  longlong in_RAX;
  longlong lVar3;
  float *pfVar4;
  longlong unaff_RBX;
  float *in_R9;
  longlong in_R10;
  longlong in_R11;
  float fVar5;
  float fVar6;
  float in_XMM5_Da;
  float unaff_XMM7_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  
  if (in_R11 < in_RAX) {
    pfVar4 = (float *)(unaff_RBX + 4 + in_R11 * 8);
    lVar3 = in_RAX - in_R11;
    do {
      fVar1 = *(float *)((longlong)pfVar4 + (in_R10 - unaff_RBX) + -4);
      fVar2 = *(float *)((longlong)pfVar4 + (in_R10 - unaff_RBX));
      fVar5 = fVar1 - unaff_XMM7_Da;
      fVar6 = fVar2 - unaff_XMM12_Da;
      unaff_XMM7_Da = fVar1 * unaff_XMM10_Da + unaff_XMM13_Da + unaff_XMM7_Da * unaff_XMM11_Da;
      unaff_XMM12_Da = fVar2 * unaff_XMM10_Da + unaff_XMM13_Da + unaff_XMM12_Da * unaff_XMM11_Da;
      *pfVar4 = fVar6 - unaff_XMM9_Da;
      pfVar4[-1] = fVar5 - in_XMM5_Da;
      pfVar4 = pfVar4 + 2;
      in_XMM5_Da = fVar5 * unaff_XMM10_Da + unaff_XMM13_Da + in_XMM5_Da * unaff_XMM11_Da;
      unaff_XMM9_Da = fVar6 * unaff_XMM10_Da + unaff_XMM13_Da + unaff_XMM9_Da * unaff_XMM11_Da;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  in_R9[2] = unaff_XMM12_Da;
  in_R9[3] = unaff_XMM9_Da;
  *in_R9 = unaff_XMM7_Da;
  in_R9[1] = in_XMM5_Da;
  return;
}






// 函数: void FUN_1806f7880(uint64_t param_1,uint64_t param_2,longlong param_3,float *param_4)
void FUN_1806f7880(uint64_t param_1,uint64_t param_2,longlong param_3,float *param_4)

{
  longlong in_RAX;
  float *pfVar1;
  longlong lVar2;
  longlong unaff_RBX;
  longlong lVar3;
  longlong in_R10;
  longlong in_R11;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_XMM5_Da;
  float fVar8;
  float unaff_XMM7_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  
  if (3 < in_RAX) {
    pfVar1 = (float *)(param_3 + 4);
    lVar2 = in_R10 - unaff_RBX;
    lVar3 = (in_RAX - 4U >> 2) + 1;
    in_R11 = lVar3 * 4;
    do {
      fVar4 = *(float *)((longlong)pfVar1 + lVar2 + -4);
      fVar5 = fVar4 - unaff_XMM7_Da;
      fVar4 = fVar4 * unaff_XMM10_Da + 1e-30 + unaff_XMM7_Da * unaff_XMM11_Da;
      pfVar1[-1] = fVar5 - in_XMM5_Da;
      fVar6 = fVar5 * unaff_XMM10_Da + 1e-30 + in_XMM5_Da * unaff_XMM11_Da;
      fVar7 = *(float *)((longlong)pfVar1 + lVar2) - fVar4;
      fVar5 = *(float *)((longlong)pfVar1 + lVar2) * unaff_XMM10_Da + 1e-30 + fVar4 * unaff_XMM11_Da
      ;
      *pfVar1 = fVar7 - fVar6;
      fVar4 = *(float *)((longlong)pfVar1 + lVar2 + 4);
      fVar7 = fVar7 * unaff_XMM10_Da + 1e-30 + fVar6 * unaff_XMM11_Da;
      fVar6 = fVar4 - fVar5;
      fVar5 = fVar4 * unaff_XMM10_Da + 1e-30 + fVar5 * unaff_XMM11_Da;
      pfVar1[1] = fVar6 - fVar7;
      fVar4 = *(float *)((longlong)pfVar1 + lVar2 + 8);
      fVar8 = fVar4 - fVar5;
      fVar6 = fVar6 * unaff_XMM10_Da + 1e-30 + fVar7 * unaff_XMM11_Da;
      unaff_XMM7_Da = fVar4 * unaff_XMM10_Da + 1e-30 + fVar5 * unaff_XMM11_Da;
      pfVar1[2] = fVar8 - fVar6;
      pfVar1 = pfVar1 + 4;
      in_XMM5_Da = fVar8 * unaff_XMM10_Da + 1e-30 + fVar6 * unaff_XMM11_Da;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (in_R11 < in_RAX) {
    pfVar1 = (float *)(unaff_RBX + in_R11 * 4);
    lVar2 = in_RAX - in_R11;
    do {
      fVar4 = *(float *)((longlong)pfVar1 + (in_R10 - unaff_RBX));
      fVar5 = fVar4 - unaff_XMM7_Da;
      unaff_XMM7_Da = fVar4 * unaff_XMM10_Da + 1e-30 + unaff_XMM7_Da * unaff_XMM11_Da;
      *pfVar1 = fVar5 - in_XMM5_Da;
      pfVar1 = pfVar1 + 1;
      in_XMM5_Da = fVar5 * unaff_XMM10_Da + 1e-30 + in_XMM5_Da * unaff_XMM11_Da;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  *param_4 = unaff_XMM7_Da;
  param_4[1] = in_XMM5_Da;
  return;
}






// 函数: void FUN_1806f7a40(longlong param_1,longlong param_2,int param_3,int param_4,int param_5,int param_6
void FUN_1806f7a40(longlong param_1,longlong param_2,int param_3,int param_4,int param_5,int param_6
                  ,int param_7)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  short *psVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  float fVar17;
  
  lVar12 = 0;
  lVar10 = (longlong)param_3;
  iVar15 = 0;
  lVar11 = lVar12;
  iVar5 = iVar15;
  if (3 < lVar10) {
    iVar14 = (param_4 + 1) * param_7 + param_5;
    iVar7 = param_4 - (param_4 + 1);
    lVar16 = (lVar10 - 4U >> 2) + 1;
    iVar5 = (int)lVar16 * 4;
    lVar11 = lVar16 * 4;
    pfVar9 = (float *)(param_2 + 8);
    do {
      pfVar9[-2] = (float)(int)*(short *)(param_1 + (longlong)(iVar7 * param_7 + iVar14) * 2);
      iVar2 = (iVar7 + 2) * param_7 + iVar14;
      pfVar9[-1] = (float)(int)*(short *)(param_1 + (longlong)iVar14 * 2);
      iVar3 = iVar14 + (iVar7 + 3) * param_7;
      iVar14 = iVar14 + param_7 * 4;
      *pfVar9 = (float)(int)*(short *)(param_1 + (longlong)iVar2 * 2);
      pfVar9[1] = (float)(int)*(short *)(param_1 + (longlong)iVar3 * 2);
      lVar16 = lVar16 + -1;
      pfVar9 = pfVar9 + 4;
    } while (lVar16 != 0);
  }
  if (lVar11 < lVar10) {
    param_5 = (iVar5 + param_4) * param_7 + param_5;
    do {
      lVar16 = (longlong)param_5;
      param_5 = param_5 + param_7;
      *(float *)(param_2 + lVar11 * 4) = (float)(int)*(short *)(param_1 + lVar16 * 2);
      lVar11 = lVar11 + 1;
    } while (lVar11 < lVar10);
  }
  if (param_6 < 0) {
    if ((param_6 == -2) && (0 < lVar10)) {
      param_4 = param_4 * param_7;
      do {
        iVar5 = 1;
        if (1 < param_7) {
          if (4 < param_7) {
            fVar17 = *(float *)(param_2 + lVar12 * 4);
            uVar6 = (param_7 - 5U >> 2) + 1;
            uVar13 = (ulonglong)uVar6;
            psVar8 = (short *)(param_1 + ((longlong)param_4 + 3) * 2);
            iVar5 = uVar6 * 4 + 1;
            do {
              sVar4 = psVar8[-2];
              *(float *)(param_2 + lVar12 * 4) = (float)(int)sVar4 + fVar17;
              fVar17 = (float)(int)psVar8[-1] + (float)(int)sVar4 + fVar17;
              *(float *)(param_2 + lVar12 * 4) = fVar17;
              fVar17 = (float)(int)*psVar8 + fVar17;
              *(float *)(param_2 + lVar12 * 4) = fVar17;
              psVar1 = psVar8 + 1;
              psVar8 = psVar8 + 4;
              fVar17 = (float)(int)*psVar1 + fVar17;
              *(float *)(param_2 + lVar12 * 4) = fVar17;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          if (iVar5 < param_7) {
            fVar17 = *(float *)(param_2 + lVar12 * 4);
            psVar8 = (short *)(param_1 + (longlong)(param_4 + iVar5) * 2);
            uVar13 = (ulonglong)(uint)(param_7 - iVar5);
            do {
              sVar4 = *psVar8;
              psVar8 = psVar8 + 1;
              fVar17 = fVar17 + (float)(int)sVar4;
              *(float *)(param_2 + lVar12 * 4) = fVar17;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
        }
        param_4 = param_4 + param_7;
        lVar12 = lVar12 + 1;
      } while (lVar12 < lVar10);
    }
  }
  else {
    if (3 < lVar10) {
      iVar5 = param_4 - (param_4 + 1);
      pfVar9 = (float *)(param_2 + 8);
      iVar7 = (param_4 + 1) * param_7 + param_6;
      lVar11 = (lVar10 - 4U >> 2) + 1;
      iVar15 = (int)lVar11 * 4;
      lVar12 = lVar11 * 4;
      do {
        pfVar9[-2] = (float)(int)*(short *)(param_1 + (longlong)(iVar7 + iVar5 * param_7) * 2) +
                     pfVar9[-2];
        iVar14 = iVar7 + (iVar5 + 2) * param_7;
        pfVar9[-1] = (float)(int)*(short *)(param_1 + (longlong)iVar7 * 2) + pfVar9[-1];
        iVar2 = iVar7 + (iVar5 + 3) * param_7;
        iVar7 = iVar7 + param_7 * 4;
        *pfVar9 = (float)(int)*(short *)(param_1 + (longlong)iVar14 * 2) + *pfVar9;
        pfVar9[1] = (float)(int)*(short *)(param_1 + (longlong)iVar2 * 2) + pfVar9[1];
        pfVar9 = pfVar9 + 4;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (lVar12 < lVar10) {
      param_6 = (iVar15 + param_4) * param_7 + param_6;
      do {
        lVar11 = (longlong)param_6;
        param_6 = param_6 + param_7;
        *(float *)(param_2 + lVar12 * 4) =
             (float)(int)*(short *)(param_1 + lVar11 * 2) + *(float *)(param_2 + lVar12 * 4);
        lVar12 = lVar12 + 1;
      } while (lVar12 < lVar10);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1806f7de0(longlong param_1,uint64_t param_2,int param_3,int param_4,uint64_t param_5,
void FUN_1806f7de0(longlong param_1,uint64_t param_2,int param_3,int param_4,uint64_t param_5,
                  int param_6)

{
  int iVar1;
  int iVar2;
  int iStack_68;
  int iStack_64;
  uint64_t uStack_48;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)&iStack_68;
  iVar2 = 3;
  if (param_3 != 2) {
    iVar2 = param_3 * 2;
  }
  iStack_68 = param_6;
  if (((*(int *)(param_1 + 0x94) == 0) && (*(int *)(param_1 + 0xa4) != -1)) &&
     (iVar1 = (*(int *)(param_1 + 0xa0) * 3) /
              ((*(int *)(param_1 + 0x90) * 0x18) / (param_3 * param_4)), iVar1 < param_6)) {
    iStack_68 = iVar1;
  }
  iVar1 = (iStack_68 - iVar2) / param_3 + 1;
  if (0x4fc < iVar1) {
    iVar1 = 0x4fc;
  }
  iStack_64 = param_4;
  uStack_48 = param_2;
                    // WARNING: Subroutine does not return
  FUN_1808fd200((longlong)(iVar1 * param_3),
                (longlong)(iStack_68 - iVar2) % (longlong)param_3 & 0xffffffff);
}






// 函数: void FUN_1806f8170(longlong param_1,longlong param_2,float param_3,float param_4,int param_5,
void FUN_1806f8170(longlong param_1,longlong param_2,float param_3,float param_4,int param_5,
                  int param_6,int param_7,longlong param_8,int param_9)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  float *pfVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  float fVar14;
  
  uVar5 = 0;
  iVar9 = 0;
  iVar8 = (int)(48000 / (longlong)param_9);
  uVar1 = param_5 / iVar8;
  uVar10 = (ulonglong)(int)uVar1;
  uVar11 = uVar10;
  if (param_7 == 1) {
    uVar3 = uVar5;
    if (3 < (longlong)uVar10) {
      iVar12 = iVar8 * 2;
      lVar13 = param_1 - param_2;
      pfVar6 = (float *)(param_2 + 4);
      lVar7 = (uVar10 - 4 >> 2) + 1;
      uVar3 = lVar7 * 4;
      iVar9 = (int)lVar7 * 4;
      do {
        fVar14 = *(float *)(param_8 + (longlong)(iVar8 * -2 + iVar12) * 4);
        fVar14 = fVar14 * fVar14;
        pfVar6[-1] = ((1.0 - fVar14) * param_3 + fVar14 * param_4) *
                     *(float *)((longlong)pfVar6 + lVar13 + -4);
        fVar14 = *(float *)(param_8 + (longlong)(iVar12 - iVar8) * 4);
        fVar14 = fVar14 * fVar14;
        *pfVar6 = ((1.0 - fVar14) * param_3 + fVar14 * param_4) *
                  *(float *)((longlong)pfVar6 + lVar13);
        fVar14 = *(float *)(param_8 + (longlong)iVar12 * 4);
        iVar2 = iVar12 + iVar8;
        fVar14 = fVar14 * fVar14;
        iVar12 = iVar12 + iVar8 * 4;
        pfVar6[1] = ((1.0 - fVar14) * param_3 + fVar14 * param_4) *
                    *(float *)((longlong)pfVar6 + lVar13 + 4);
        fVar14 = *(float *)(param_8 + (longlong)iVar2 * 4);
        fVar14 = fVar14 * fVar14;
        pfVar6[2] = ((1.0 - fVar14) * param_3 + fVar14 * param_4) *
                    *(float *)((longlong)pfVar6 + lVar13 + 8);
        pfVar6 = pfVar6 + 4;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      uVar11 = (ulonglong)uVar1;
    }
    if ((longlong)uVar3 < (longlong)uVar10) {
      iVar9 = iVar9 * iVar8;
      pfVar6 = (float *)(param_2 + uVar3 * 4);
      lVar7 = uVar10 - uVar3;
      do {
        lVar13 = (longlong)iVar9;
        iVar9 = iVar9 + iVar8;
        fVar14 = *(float *)(param_8 + lVar13 * 4);
        fVar14 = fVar14 * fVar14;
        *pfVar6 = ((1.0 - fVar14) * param_3 + fVar14 * param_4) *
                  *(float *)((longlong)pfVar6 + (param_1 - param_2));
        pfVar6 = pfVar6 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  else {
    uVar3 = uVar5;
    if (3 < (longlong)uVar10) {
      pfVar6 = (float *)(param_2 + 4);
      lVar13 = param_1 - param_2;
      iVar12 = iVar8 * 2;
      lVar7 = (uVar10 - 4 >> 2) + 1;
      iVar9 = (int)lVar7 * 4;
      uVar3 = lVar7 * 4;
      do {
        fVar14 = *(float *)(param_8 + (longlong)(iVar12 + iVar8 * -2) * 4);
        fVar14 = fVar14 * fVar14;
        fVar14 = (1.0 - fVar14) * param_3 + fVar14 * param_4;
        pfVar6[-1] = fVar14 * *(float *)(lVar13 + -4 + (longlong)pfVar6);
        *pfVar6 = fVar14 * *(float *)(lVar13 + (longlong)pfVar6);
        fVar14 = *(float *)(param_8 + (longlong)(iVar12 - iVar8) * 4);
        fVar14 = fVar14 * fVar14;
        fVar14 = (1.0 - fVar14) * param_3 + fVar14 * param_4;
        pfVar6[1] = fVar14 * *(float *)(lVar13 + 4 + (longlong)pfVar6);
        pfVar6[2] = fVar14 * *(float *)(lVar13 + 8 + (longlong)pfVar6);
        fVar14 = *(float *)(param_8 + (longlong)iVar12 * 4);
        iVar2 = iVar12 + iVar8;
        fVar14 = fVar14 * fVar14;
        iVar12 = iVar12 + iVar8 * 4;
        fVar14 = (1.0 - fVar14) * param_3 + fVar14 * param_4;
        pfVar6[3] = fVar14 * *(float *)(lVar13 + 0xc + (longlong)pfVar6);
        pfVar6[4] = fVar14 * *(float *)(lVar13 + 0x10 + (longlong)pfVar6);
        fVar14 = *(float *)(param_8 + (longlong)iVar2 * 4);
        fVar14 = fVar14 * fVar14;
        fVar14 = (1.0 - fVar14) * param_3 + fVar14 * param_4;
        pfVar6[5] = fVar14 * *(float *)(lVar13 + 0x14 + (longlong)pfVar6);
        pfVar6[6] = fVar14 * *(float *)(lVar13 + 0x18 + (longlong)pfVar6);
        pfVar6 = pfVar6 + 8;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      uVar11 = (ulonglong)uVar1;
    }
    uVar5 = 0;
    if ((longlong)uVar3 < (longlong)uVar10) {
      iVar9 = iVar9 * iVar8;
      lVar7 = uVar10 - uVar3;
      pfVar6 = (float *)(param_2 + 4 + uVar3 * 8);
      do {
        lVar13 = (longlong)iVar9;
        iVar9 = iVar9 + iVar8;
        fVar14 = *(float *)(param_8 + lVar13 * 4);
        fVar14 = fVar14 * fVar14;
        fVar14 = (1.0 - fVar14) * param_3 + fVar14 * param_4;
        pfVar6[-1] = fVar14 * *(float *)((longlong)pfVar6 + (param_1 - param_2) + -4);
        *pfVar6 = fVar14 * *(float *)((longlong)pfVar6 + (param_1 - param_2));
        pfVar6 = pfVar6 + 2;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  do {
    iVar9 = (int)uVar11;
    iVar8 = (int)uVar5;
    if (iVar9 < param_6) {
      if (3 < param_6 - iVar9) {
        lVar4 = (longlong)((iVar9 + 1) * param_7 + iVar8);
        pfVar6 = (float *)(param_2 + lVar4 * 4);
        lVar7 = ((iVar9 + 2) * param_7 + iVar8) - lVar4;
        lVar13 = ((iVar9 + 3) * param_7 + iVar8) - lVar4;
        lVar4 = (iVar9 * param_7 + iVar8) - lVar4;
        uVar1 = ((param_6 - iVar9) - 4U >> 2) + 1;
        uVar5 = (ulonglong)uVar1;
        iVar9 = iVar9 + uVar1 * 4;
        do {
          pfVar6[lVar4] = param_4 * *(float *)((lVar4 * 4 - param_2) + param_1 + (longlong)pfVar6);
          *pfVar6 = param_4 * *(float *)((param_1 - param_2) + (longlong)pfVar6);
          pfVar6[lVar7] = param_4 * *(float *)((lVar7 * 4 - param_2) + param_1 + (longlong)pfVar6);
          pfVar6[lVar13] = param_4 * *(float *)((longlong)pfVar6 + (lVar13 * 4 - param_2) + param_1)
          ;
          pfVar6 = pfVar6 + param_7 * 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if (iVar9 < param_6) {
        pfVar6 = (float *)(param_2 + (longlong)(iVar9 * param_7 + iVar8) * 4);
        lVar7 = (longlong)(param_6 - iVar9);
        do {
          *pfVar6 = param_4 * *(float *)((longlong)pfVar6 + (param_1 - param_2));
          pfVar6 = pfVar6 + param_7;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
    }
    uVar5 = (ulonglong)(iVar8 + 1U);
  } while ((int)(iVar8 + 1U) < param_7);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1806f8750(longlong param_1,uint64_t param_2,int32_t param_3)
void FUN_1806f8750(longlong param_1,uint64_t param_2,int32_t param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong auStack_28 [2];
  
  auStack_28[0] = _DAT_180bf00a8 ^ (ulonglong)auStack_28;
  iVar1 = func_0x0001806f80a0(param_3,*(int32_t *)(param_1 + 0x9c),
                              *(int32_t *)(param_1 + 0x90));
  if (iVar1 < 1) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(auStack_28[0] ^ (ulonglong)auStack_28);
  }
  uVar2 = (longlong)(*(int *)(param_1 + 0x70) * iVar1) * 4;
  uVar3 = uVar2 + 0xf;
  if (uVar3 <= uVar2) {
    uVar3 = 0xffffffffffffff0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fd200(uVar3 & 0xfffffffffffffff0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




