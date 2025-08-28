#include "TaleWorlds.Native.Split.h"

// 99_part_01_part026.c - 12 个函数

// 函数: void FUN_1800b95dd(undefined4 *param_1,undefined4 *param_2,longlong param_3,undefined1 param_4)
void FUN_1800b95dd(undefined4 *param_1,undefined4 *param_2,longlong param_3,undefined1 param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  longlong in_RAX;
  ulonglong uVar13;
  longlong lVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  
  uVar13 = in_RAX - (longlong)param_1;
  while ((0x1c0 < (longlong)(uVar13 & 0xfffffffffffffff0) && (0 < param_3))) {
    dVar2 = *(double *)(param_1 + 2);
    lVar14 = ((longlong)param_2 - (longlong)param_1 >> 4) -
             ((longlong)param_2 - (longlong)param_1 >> 0x3f) >> 1;
    dVar3 = *(double *)(param_1 + lVar14 * 4 + 2);
    dVar12 = dVar3;
    puVar15 = param_1 + lVar14 * 4;
    puVar18 = param_1;
    if (dVar3 < dVar2) {
      dVar12 = dVar2;
      puVar15 = param_1;
      puVar18 = param_1 + lVar14 * 4;
      dVar2 = dVar3;
    }
    if ((dVar2 <= *(double *)(param_2 + -2)) &&
       (puVar18 = puVar15, *(double *)(param_2 + -2) < dVar12)) {
      puVar18 = param_2 + -4;
    }
    uVar4 = *puVar18;
    dVar3 = *(double *)(puVar18 + 2);
    puVar15 = param_2;
    puVar18 = param_1;
    while( true ) {
      for (; dVar3 < *(double *)(puVar18 + 2); puVar18 = puVar18 + 4) {
      }
      puVar17 = puVar15 + -4;
      puVar16 = puVar17;
      if (*(double *)(puVar15 + -2) <= dVar3 && dVar3 != *(double *)(puVar15 + -2)) {
        do {
          puVar17 = puVar16 + -4;
          pdVar1 = (double *)(puVar16 + -2);
          puVar16 = puVar17;
        } while (*pdVar1 <= dVar3 && dVar3 != *pdVar1);
      }
      if (puVar17 <= puVar18) break;
      uVar5 = *puVar18;
      uVar6 = puVar18[1];
      uVar7 = puVar18[2];
      uVar8 = puVar18[3];
      uVar9 = puVar17[1];
      uVar10 = puVar17[2];
      uVar11 = puVar17[3];
      *puVar18 = *puVar17;
      puVar18[1] = uVar9;
      puVar18[2] = uVar10;
      puVar18[3] = uVar11;
      puVar18 = puVar18 + 4;
      *puVar17 = uVar5;
      puVar17[1] = uVar6;
      puVar17[2] = uVar7;
      puVar17[3] = uVar8;
      puVar15 = puVar17;
    }
    param_3 = param_3 + -1;
    FUN_1800b95d0(puVar18,param_2,param_3,param_4,uVar4);
    uVar13 = (longlong)puVar18 - (longlong)param_1;
    param_2 = puVar18;
  }
  if (param_3 == 0) {
    FUN_1800b9870(param_1,param_2,param_2,param_4);
  }
  return;
}






// 函数: void FUN_1800b9602(undefined4 param_1)
void FUN_1800b9602(undefined4 param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined1 unaff_BL;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *puVar17;
  undefined4 *in_R10;
  
  do {
    puVar17 = in_R10;
    if (unaff_RBP < 1) break;
    dVar2 = *(double *)(unaff_RSI + 2);
    lVar13 = ((longlong)in_R10 - (longlong)unaff_RSI >> 4) -
             ((longlong)in_R10 - (longlong)unaff_RSI >> 0x3f) >> 1;
    dVar3 = *(double *)(unaff_RSI + lVar13 * 4 + 2);
    dVar12 = dVar3;
    puVar17 = unaff_RSI + lVar13 * 4;
    puVar14 = unaff_RSI;
    if (dVar3 < dVar2) {
      dVar12 = dVar2;
      puVar17 = unaff_RSI;
      puVar14 = unaff_RSI + lVar13 * 4;
      dVar2 = dVar3;
    }
    if ((dVar2 <= *(double *)(in_R10 + -2)) &&
       (puVar14 = puVar17, *(double *)(in_R10 + -2) < dVar12)) {
      puVar14 = in_R10 + -4;
    }
    uVar4 = *puVar14;
    dVar3 = *(double *)(puVar14 + 2);
    puVar14 = in_R10;
    puVar17 = unaff_RSI;
    while( true ) {
      for (; dVar3 < *(double *)(puVar17 + 2); puVar17 = puVar17 + 4) {
      }
      puVar16 = puVar14 + -4;
      puVar15 = puVar16;
      if (*(double *)(puVar14 + -2) <= dVar3 && dVar3 != *(double *)(puVar14 + -2)) {
        do {
          puVar16 = puVar15 + -4;
          pdVar1 = (double *)(puVar15 + -2);
          puVar15 = puVar16;
        } while (*pdVar1 <= dVar3 && dVar3 != *pdVar1);
      }
      if (puVar16 <= puVar17) break;
      uVar5 = *puVar17;
      uVar6 = puVar17[1];
      uVar7 = puVar17[2];
      uVar8 = puVar17[3];
      uVar9 = puVar16[1];
      uVar10 = puVar16[2];
      uVar11 = puVar16[3];
      *puVar17 = *puVar16;
      puVar17[1] = uVar9;
      puVar17[2] = uVar10;
      puVar17[3] = uVar11;
      puVar17 = puVar17 + 4;
      *puVar16 = uVar5;
      puVar16[1] = uVar6;
      puVar16[2] = uVar7;
      puVar16[3] = uVar8;
      puVar14 = puVar16;
    }
    unaff_RBP = unaff_RBP + -1;
    param_1 = FUN_1800b95d0(puVar17,in_R10,unaff_RBP,unaff_BL,uVar4);
    in_R10 = puVar17;
  } while (0x1c0 < (longlong)((longlong)puVar17 - (longlong)unaff_RSI & 0xfffffffffffffff0U));
  if (unaff_RBP == 0) {
    FUN_1800b9870(param_1,puVar17,puVar17,unaff_BL);
  }
  return;
}






// 函数: void FUN_1800b96f3(void)
void FUN_1800b96f3(void)

{
  longlong unaff_RBP;
  
  if (unaff_RBP == 0) {
    FUN_1800b9870();
  }
  return;
}






// 函数: void FUN_1800b96fd(void)
void FUN_1800b96fd(void)

{
  FUN_1800b9870();
  return;
}






// 函数: void FUN_1800b9720(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined1 param_4)
void FUN_1800b9720(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined1 param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  uVar9 = (longlong)param_2 - (longlong)param_1;
  while ((0x1c0 < (longlong)(uVar9 & 0xfffffffffffffff0) && (0 < param_3))) {
    fVar2 = *(float *)(param_1 + 1);
    lVar10 = ((longlong)param_2 - (longlong)param_1 >> 4) -
             ((longlong)param_2 - (longlong)param_1 >> 0x3f) >> 1;
    fVar3 = *(float *)(param_1 + lVar10 * 2 + 1);
    fVar8 = fVar3;
    puVar12 = param_1 + lVar10 * 2;
    puVar11 = param_1;
    if (fVar3 < fVar2) {
      fVar8 = fVar2;
      puVar12 = param_1;
      puVar11 = param_1 + lVar10 * 2;
      fVar2 = fVar3;
    }
    if ((fVar2 <= *(float *)(param_2 + -1)) && (puVar11 = puVar12, *(float *)(param_2 + -1) < fVar8)
       ) {
      puVar11 = param_2 + -2;
    }
    uVar4 = *(undefined4 *)puVar11;
    fVar3 = *(float *)(puVar11 + 1);
    puVar12 = param_2;
    puVar11 = param_1;
    while( true ) {
      for (; fVar3 < *(float *)(puVar11 + 1); puVar11 = puVar11 + 2) {
      }
      puVar14 = puVar12 + -2;
      puVar13 = puVar14;
      if (*(float *)(puVar12 + -1) <= fVar3 && fVar3 != *(float *)(puVar12 + -1)) {
        do {
          puVar14 = puVar13 + -2;
          pfVar1 = (float *)(puVar13 + -1);
          puVar13 = puVar14;
        } while (*pfVar1 <= fVar3 && fVar3 != *pfVar1);
      }
      if (puVar14 <= puVar11) break;
      uVar5 = *(undefined4 *)puVar11;
      uVar6 = *(undefined4 *)((longlong)puVar11 + 4);
      uVar7 = *(undefined4 *)(puVar11 + 1);
      *puVar11 = *puVar14;
      *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar14 + 1);
      puVar11 = puVar11 + 2;
      *(undefined4 *)puVar14 = uVar5;
      *(undefined4 *)((longlong)puVar14 + 4) = uVar6;
      *(undefined4 *)(puVar14 + 1) = uVar7;
      puVar12 = puVar14;
    }
    param_3 = param_3 + -1;
    FUN_1800b9720(puVar11,param_2,param_3,param_4,uVar4);
    uVar9 = (longlong)puVar11 - (longlong)param_1;
    param_2 = puVar11;
  }
  if (param_3 == 0) {
    FUN_1800b9b80(param_1,param_2,param_2,param_4);
  }
  return;
}






// 函数: void FUN_1800b972d(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined1 param_4)
void FUN_1800b972d(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined1 param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  longlong in_RAX;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  uVar9 = in_RAX - (longlong)param_1;
  while ((0x1c0 < (longlong)(uVar9 & 0xfffffffffffffff0) && (0 < param_3))) {
    fVar2 = *(float *)(param_1 + 1);
    lVar10 = ((longlong)param_2 - (longlong)param_1 >> 4) -
             ((longlong)param_2 - (longlong)param_1 >> 0x3f) >> 1;
    fVar3 = *(float *)(param_1 + lVar10 * 2 + 1);
    fVar8 = fVar3;
    puVar12 = param_1 + lVar10 * 2;
    puVar11 = param_1;
    if (fVar3 < fVar2) {
      fVar8 = fVar2;
      puVar12 = param_1;
      puVar11 = param_1 + lVar10 * 2;
      fVar2 = fVar3;
    }
    if ((fVar2 <= *(float *)(param_2 + -1)) && (puVar11 = puVar12, *(float *)(param_2 + -1) < fVar8)
       ) {
      puVar11 = param_2 + -2;
    }
    uVar4 = *(undefined4 *)puVar11;
    fVar3 = *(float *)(puVar11 + 1);
    puVar12 = param_2;
    puVar11 = param_1;
    while( true ) {
      for (; fVar3 < *(float *)(puVar11 + 1); puVar11 = puVar11 + 2) {
      }
      puVar14 = puVar12 + -2;
      puVar13 = puVar14;
      if (*(float *)(puVar12 + -1) <= fVar3 && fVar3 != *(float *)(puVar12 + -1)) {
        do {
          puVar14 = puVar13 + -2;
          pfVar1 = (float *)(puVar13 + -1);
          puVar13 = puVar14;
        } while (*pfVar1 <= fVar3 && fVar3 != *pfVar1);
      }
      if (puVar14 <= puVar11) break;
      uVar5 = *(undefined4 *)puVar11;
      uVar6 = *(undefined4 *)((longlong)puVar11 + 4);
      uVar7 = *(undefined4 *)(puVar11 + 1);
      *puVar11 = *puVar14;
      *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar14 + 1);
      puVar11 = puVar11 + 2;
      *(undefined4 *)puVar14 = uVar5;
      *(undefined4 *)((longlong)puVar14 + 4) = uVar6;
      *(undefined4 *)(puVar14 + 1) = uVar7;
      puVar12 = puVar14;
    }
    param_3 = param_3 + -1;
    FUN_1800b9720(puVar11,param_2,param_3,param_4,uVar4);
    uVar9 = (longlong)puVar11 - (longlong)param_1;
    param_2 = puVar11;
  }
  if (param_3 == 0) {
    FUN_1800b9b80(param_1,param_2,param_2,param_4);
  }
  return;
}






// 函数: void FUN_1800b9752(undefined4 param_1)
void FUN_1800b9752(undefined4 param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 unaff_BL;
  longlong unaff_RBP;
  undefined8 *unaff_RSI;
  undefined8 *puVar13;
  undefined8 *in_R10;
  
  do {
    puVar13 = in_R10;
    if (unaff_RBP < 1) break;
    fVar2 = *(float *)(unaff_RSI + 1);
    lVar9 = ((longlong)in_R10 - (longlong)unaff_RSI >> 4) -
            ((longlong)in_R10 - (longlong)unaff_RSI >> 0x3f) >> 1;
    fVar3 = *(float *)(unaff_RSI + lVar9 * 2 + 1);
    fVar8 = fVar3;
    puVar13 = unaff_RSI + lVar9 * 2;
    puVar10 = unaff_RSI;
    if (fVar3 < fVar2) {
      fVar8 = fVar2;
      puVar13 = unaff_RSI;
      puVar10 = unaff_RSI + lVar9 * 2;
      fVar2 = fVar3;
    }
    if ((fVar2 <= *(float *)(in_R10 + -1)) && (puVar10 = puVar13, *(float *)(in_R10 + -1) < fVar8))
    {
      puVar10 = in_R10 + -2;
    }
    uVar4 = *(undefined4 *)puVar10;
    fVar3 = *(float *)(puVar10 + 1);
    puVar10 = in_R10;
    puVar13 = unaff_RSI;
    while( true ) {
      for (; fVar3 < *(float *)(puVar13 + 1); puVar13 = puVar13 + 2) {
      }
      puVar12 = puVar10 + -2;
      puVar11 = puVar12;
      if (*(float *)(puVar10 + -1) <= fVar3 && fVar3 != *(float *)(puVar10 + -1)) {
        do {
          puVar12 = puVar11 + -2;
          pfVar1 = (float *)(puVar11 + -1);
          puVar11 = puVar12;
        } while (*pfVar1 <= fVar3 && fVar3 != *pfVar1);
      }
      if (puVar12 <= puVar13) break;
      uVar5 = *(undefined4 *)puVar13;
      uVar6 = *(undefined4 *)((longlong)puVar13 + 4);
      uVar7 = *(undefined4 *)(puVar13 + 1);
      *puVar13 = *puVar12;
      *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar12 + 1);
      puVar13 = puVar13 + 2;
      *(undefined4 *)puVar12 = uVar5;
      *(undefined4 *)((longlong)puVar12 + 4) = uVar6;
      *(undefined4 *)(puVar12 + 1) = uVar7;
      puVar10 = puVar12;
    }
    unaff_RBP = unaff_RBP + -1;
    param_1 = FUN_1800b9720(puVar13,in_R10,unaff_RBP,unaff_BL,uVar4);
    in_R10 = puVar13;
  } while (0x1c0 < (longlong)((longlong)puVar13 - (longlong)unaff_RSI & 0xfffffffffffffff0U));
  if (unaff_RBP == 0) {
    FUN_1800b9b80(param_1,puVar13,puVar13,unaff_BL);
  }
  return;
}






// 函数: void FUN_1800b9842(void)
void FUN_1800b9842(void)

{
  longlong unaff_RBP;
  
  if (unaff_RBP == 0) {
    FUN_1800b9b80();
  }
  return;
}






// 函数: void FUN_1800b984c(void)
void FUN_1800b984c(void)

{
  FUN_1800b9b80();
  return;
}






// 函数: void FUN_1800b9870(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)
void FUN_1800b9870(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  
  lVar10 = (longlong)param_2 - (longlong)param_1 >> 4;
  if (1 < lVar10) {
    lVar9 = (lVar10 + -2 >> 1) + 1;
    puVar7 = param_1 + lVar9 * 2;
    lVar8 = lVar9 * 2 + 2;
    do {
      uVar1 = puVar7[-2];
      dVar2 = (double)puVar7[-1];
      lVar9 = lVar9 + -1;
      puVar7 = puVar7 + -2;
      lVar8 = lVar8 + -2;
      lVar6 = lVar9;
      lVar4 = lVar8;
      while (lVar4 < lVar10) {
        lVar5 = lVar4 + -1;
        if ((double)param_1[lVar4 * 2 + 1] < (double)param_1[lVar4 * 2 + -1] ||
            (double)param_1[lVar4 * 2 + 1] == (double)param_1[lVar4 * 2 + -1]) {
          lVar5 = lVar4;
        }
        uVar3 = (param_1 + lVar5 * 2)[1];
        param_1[lVar6 * 2] = param_1[lVar5 * 2];
        (param_1 + lVar6 * 2)[1] = uVar3;
        lVar6 = lVar5;
        lVar4 = lVar5 * 2 + 2;
      }
      if (lVar4 == lVar10) {
        uVar3 = (param_1 + lVar4 * 2 + -2)[1];
        param_1[lVar6 * 2] = param_1[lVar4 * 2 + -2];
        (param_1 + lVar6 * 2)[1] = uVar3;
        lVar6 = lVar4 + -1;
      }
      while ((lVar9 < lVar6 && (lVar4 = lVar6 + -1 >> 1, dVar2 < (double)param_1[lVar4 * 2 + 1]))) {
        uVar3 = (param_1 + lVar4 * 2)[1];
        param_1[lVar6 * 2] = param_1[lVar4 * 2];
        (param_1 + lVar6 * 2)[1] = uVar3;
        lVar6 = lVar4;
      }
      param_1[lVar6 * 2] = uVar1;
      (param_1 + lVar6 * 2)[1] = dVar2;
    } while (lVar9 != 0);
  }
  puVar7 = param_2;
  if (param_2 < param_3) {
    do {
      if ((double)param_1[1] < (double)puVar7[1]) {
        uVar1 = *puVar7;
        dVar2 = (double)puVar7[1];
        lVar8 = 0;
        lVar9 = 2;
        uVar3 = param_1[1];
        *puVar7 = *param_1;
        puVar7[1] = uVar3;
        bVar11 = lVar10 == 2;
        lVar6 = lVar8;
        if (2 < lVar10) {
          do {
            lVar8 = lVar9 + -1;
            if ((double)param_1[lVar9 * 2 + 1] < (double)param_1[lVar9 * 2 + -1] ||
                (double)param_1[lVar9 * 2 + 1] == (double)param_1[lVar9 * 2 + -1]) {
              lVar8 = lVar9;
            }
            lVar9 = lVar8 * 2 + 2;
            uVar3 = (param_1 + lVar8 * 2)[1];
            param_1[lVar6 * 2] = param_1[lVar8 * 2];
            (param_1 + lVar6 * 2)[1] = uVar3;
            bVar11 = lVar9 == lVar10;
            lVar6 = lVar8;
          } while (lVar9 < lVar10);
        }
        if (bVar11) {
          uVar3 = (param_1 + lVar9 * 2 + -2)[1];
          param_1[lVar8 * 2] = param_1[lVar9 * 2 + -2];
          (param_1 + lVar8 * 2)[1] = uVar3;
          lVar8 = lVar9 + -1;
        }
        while ((0 < lVar8 && (lVar9 = lVar8 + -1 >> 1, dVar2 < (double)param_1[lVar9 * 2 + 1]))) {
          uVar3 = (param_1 + lVar9 * 2)[1];
          param_1[lVar8 * 2] = param_1[lVar9 * 2];
          (param_1 + lVar8 * 2)[1] = uVar3;
          lVar8 = lVar9;
        }
        param_1[lVar8 * 2] = uVar1;
        (param_1 + lVar8 * 2)[1] = dVar2;
      }
      puVar7 = puVar7 + 2;
    } while (puVar7 < param_3);
  }
  if (1 < lVar10) {
    param_2 = param_2 + -2;
    do {
      uVar1 = *param_2;
      dVar2 = (double)param_2[1];
      lVar10 = lVar10 + -1;
      lVar8 = 0;
      uVar3 = param_1[1];
      lVar9 = 2;
      *param_2 = *param_1;
      param_2[1] = uVar3;
      bVar11 = lVar10 == 2;
      lVar6 = lVar8;
      if (2 < lVar10) {
        do {
          lVar8 = lVar9 + -1;
          if ((double)param_1[lVar9 * 2 + 1] < (double)param_1[lVar9 * 2 + -1] ||
              (double)param_1[lVar9 * 2 + 1] == (double)param_1[lVar9 * 2 + -1]) {
            lVar8 = lVar9;
          }
          lVar9 = lVar8 * 2 + 2;
          uVar3 = (param_1 + lVar8 * 2)[1];
          param_1[lVar6 * 2] = param_1[lVar8 * 2];
          (param_1 + lVar6 * 2)[1] = uVar3;
          bVar11 = lVar9 == lVar10;
          lVar6 = lVar8;
        } while (lVar9 < lVar10);
      }
      if (bVar11) {
        uVar3 = (param_1 + lVar9 * 2 + -2)[1];
        param_1[lVar8 * 2] = param_1[lVar9 * 2 + -2];
        (param_1 + lVar8 * 2)[1] = uVar3;
        lVar8 = lVar9 + -1;
      }
      while ((0 < lVar8 && (lVar10 = lVar8 + -1 >> 1, dVar2 < (double)param_1[lVar10 * 2 + 1]))) {
        uVar3 = (param_1 + lVar10 * 2)[1];
        param_1[lVar8 * 2] = param_1[lVar10 * 2];
        (param_1 + lVar8 * 2)[1] = uVar3;
        lVar8 = lVar10;
      }
      param_2 = param_2 + -2;
      lVar10 = (longlong)param_2 + (0x10 - (longlong)param_1) >> 4;
      param_1[lVar8 * 2] = uVar1;
      (param_1 + lVar8 * 2)[1] = dVar2;
    } while (1 < lVar10);
  }
  return;
}






// 函数: void FUN_1800b9879(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)
void FUN_1800b9879(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong in_R11;
  longlong lVar10;
  bool bVar11;
  
  lVar10 = in_R11 - (longlong)param_1 >> 4;
  if (1 < lVar10) {
    lVar9 = (lVar10 + -2 >> 1) + 1;
    puVar7 = param_1 + lVar9 * 2;
    lVar8 = lVar9 * 2 + 2;
    do {
      uVar1 = puVar7[-2];
      dVar2 = (double)puVar7[-1];
      lVar9 = lVar9 + -1;
      puVar7 = puVar7 + -2;
      lVar8 = lVar8 + -2;
      lVar6 = lVar9;
      lVar4 = lVar8;
      while (lVar4 < lVar10) {
        lVar5 = lVar4 + -1;
        if ((double)param_1[lVar4 * 2 + 1] < (double)param_1[lVar4 * 2 + -1] ||
            (double)param_1[lVar4 * 2 + 1] == (double)param_1[lVar4 * 2 + -1]) {
          lVar5 = lVar4;
        }
        uVar3 = (param_1 + lVar5 * 2)[1];
        param_1[lVar6 * 2] = param_1[lVar5 * 2];
        (param_1 + lVar6 * 2)[1] = uVar3;
        lVar6 = lVar5;
        lVar4 = lVar5 * 2 + 2;
      }
      if (lVar4 == lVar10) {
        uVar3 = (param_1 + lVar4 * 2 + -2)[1];
        param_1[lVar6 * 2] = param_1[lVar4 * 2 + -2];
        (param_1 + lVar6 * 2)[1] = uVar3;
        lVar6 = lVar4 + -1;
      }
      while ((lVar9 < lVar6 && (lVar4 = lVar6 + -1 >> 1, dVar2 < (double)param_1[lVar4 * 2 + 1]))) {
        uVar3 = (param_1 + lVar4 * 2)[1];
        param_1[lVar6 * 2] = param_1[lVar4 * 2];
        (param_1 + lVar6 * 2)[1] = uVar3;
        lVar6 = lVar4;
      }
      param_1[lVar6 * 2] = uVar1;
      (param_1 + lVar6 * 2)[1] = dVar2;
    } while (lVar9 != 0);
  }
  puVar7 = param_2;
  if (param_2 < param_3) {
    do {
      if ((double)param_1[1] < (double)puVar7[1]) {
        uVar1 = *puVar7;
        dVar2 = (double)puVar7[1];
        lVar8 = 0;
        lVar9 = 2;
        uVar3 = param_1[1];
        *puVar7 = *param_1;
        puVar7[1] = uVar3;
        bVar11 = lVar10 == 2;
        lVar6 = lVar8;
        if (2 < lVar10) {
          do {
            lVar8 = lVar9 + -1;
            if ((double)param_1[lVar9 * 2 + 1] < (double)param_1[lVar9 * 2 + -1] ||
                (double)param_1[lVar9 * 2 + 1] == (double)param_1[lVar9 * 2 + -1]) {
              lVar8 = lVar9;
            }
            lVar9 = lVar8 * 2 + 2;
            uVar3 = (param_1 + lVar8 * 2)[1];
            param_1[lVar6 * 2] = param_1[lVar8 * 2];
            (param_1 + lVar6 * 2)[1] = uVar3;
            bVar11 = lVar9 == lVar10;
            lVar6 = lVar8;
          } while (lVar9 < lVar10);
        }
        if (bVar11) {
          uVar3 = (param_1 + lVar9 * 2 + -2)[1];
          param_1[lVar8 * 2] = param_1[lVar9 * 2 + -2];
          (param_1 + lVar8 * 2)[1] = uVar3;
          lVar8 = lVar9 + -1;
        }
        while ((0 < lVar8 && (lVar9 = lVar8 + -1 >> 1, dVar2 < (double)param_1[lVar9 * 2 + 1]))) {
          uVar3 = (param_1 + lVar9 * 2)[1];
          param_1[lVar8 * 2] = param_1[lVar9 * 2];
          (param_1 + lVar8 * 2)[1] = uVar3;
          lVar8 = lVar9;
        }
        param_1[lVar8 * 2] = uVar1;
        (param_1 + lVar8 * 2)[1] = dVar2;
      }
      puVar7 = puVar7 + 2;
    } while (puVar7 < param_3);
  }
  if (1 < lVar10) {
    param_2 = param_2 + -2;
    do {
      uVar1 = *param_2;
      dVar2 = (double)param_2[1];
      lVar10 = lVar10 + -1;
      lVar8 = 0;
      uVar3 = param_1[1];
      lVar9 = 2;
      *param_2 = *param_1;
      param_2[1] = uVar3;
      bVar11 = lVar10 == 2;
      lVar6 = lVar8;
      if (2 < lVar10) {
        do {
          lVar8 = lVar9 + -1;
          if ((double)param_1[lVar9 * 2 + 1] < (double)param_1[lVar9 * 2 + -1] ||
              (double)param_1[lVar9 * 2 + 1] == (double)param_1[lVar9 * 2 + -1]) {
            lVar8 = lVar9;
          }
          lVar9 = lVar8 * 2 + 2;
          uVar3 = (param_1 + lVar8 * 2)[1];
          param_1[lVar6 * 2] = param_1[lVar8 * 2];
          (param_1 + lVar6 * 2)[1] = uVar3;
          bVar11 = lVar9 == lVar10;
          lVar6 = lVar8;
        } while (lVar9 < lVar10);
      }
      if (bVar11) {
        uVar3 = (param_1 + lVar9 * 2 + -2)[1];
        param_1[lVar8 * 2] = param_1[lVar9 * 2 + -2];
        (param_1 + lVar8 * 2)[1] = uVar3;
        lVar8 = lVar9 + -1;
      }
      while ((0 < lVar8 && (lVar10 = lVar8 + -1 >> 1, dVar2 < (double)param_1[lVar10 * 2 + 1]))) {
        uVar3 = (param_1 + lVar10 * 2)[1];
        param_1[lVar8 * 2] = param_1[lVar10 * 2];
        (param_1 + lVar8 * 2)[1] = uVar3;
        lVar8 = lVar10;
      }
      param_2 = param_2 + -2;
      lVar10 = (longlong)param_2 + (0x10 - (longlong)param_1) >> 4;
      param_1[lVar8 * 2] = uVar1;
      (param_1 + lVar8 * 2)[1] = dVar2;
    } while (1 < lVar10);
  }
  return;
}






// 函数: void FUN_1800b9898(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)
void FUN_1800b9898(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *unaff_RBP;
  undefined8 *unaff_RSI;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong in_R11;
  bool bVar10;
  
  lVar8 = (in_R11 + -2 >> 1) + 1;
  param_1 = lVar8 * 0x10 + param_1;
  lVar7 = lVar8 * 2 + 2;
  do {
    uVar1 = *(undefined8 *)(param_1 + -0x10);
    dVar2 = *(double *)(param_1 + -8);
    lVar8 = lVar8 + -1;
    param_1 = param_1 + -0x10;
    lVar7 = lVar7 + -2;
    lVar6 = lVar8;
    lVar4 = lVar7;
    while (lVar4 < in_R11) {
      lVar5 = lVar4 + -1;
      if ((double)param_4[lVar4 * 2 + 1] < (double)param_4[lVar4 * 2 + -1] ||
          (double)param_4[lVar4 * 2 + 1] == (double)param_4[lVar4 * 2 + -1]) {
        lVar5 = lVar4;
      }
      uVar3 = (param_4 + lVar5 * 2)[1];
      param_4[lVar6 * 2] = param_4[lVar5 * 2];
      (param_4 + lVar6 * 2)[1] = uVar3;
      lVar6 = lVar5;
      lVar4 = lVar5 * 2 + 2;
    }
    if (lVar4 == in_R11) {
      uVar3 = (param_4 + lVar4 * 2 + -2)[1];
      param_4[lVar6 * 2] = param_4[lVar4 * 2 + -2];
      (param_4 + lVar6 * 2)[1] = uVar3;
      lVar6 = lVar4 + -1;
    }
    while ((lVar8 < lVar6 && (lVar4 = lVar6 + -1 >> 1, dVar2 < (double)param_4[lVar4 * 2 + 1]))) {
      uVar3 = (param_4 + lVar4 * 2)[1];
      param_4[lVar6 * 2] = param_4[lVar4 * 2];
      (param_4 + lVar6 * 2)[1] = uVar3;
      lVar6 = lVar4;
    }
    param_4[lVar6 * 2] = uVar1;
    (param_4 + lVar6 * 2)[1] = dVar2;
  } while (lVar8 != 0);
  puVar9 = unaff_RBP;
  if (unaff_RBP < unaff_RSI) {
    do {
      if ((double)param_4[1] < (double)puVar9[1]) {
        uVar1 = *puVar9;
        dVar2 = (double)puVar9[1];
        lVar7 = 0;
        lVar8 = 2;
        uVar3 = param_4[1];
        *puVar9 = *param_4;
        puVar9[1] = uVar3;
        bVar10 = in_R11 == 2;
        lVar6 = lVar7;
        if (2 < in_R11) {
          do {
            lVar7 = lVar8 + -1;
            if ((double)param_4[lVar8 * 2 + 1] < (double)param_4[lVar8 * 2 + -1] ||
                (double)param_4[lVar8 * 2 + 1] == (double)param_4[lVar8 * 2 + -1]) {
              lVar7 = lVar8;
            }
            lVar8 = lVar7 * 2 + 2;
            uVar3 = (param_4 + lVar7 * 2)[1];
            param_4[lVar6 * 2] = param_4[lVar7 * 2];
            (param_4 + lVar6 * 2)[1] = uVar3;
            bVar10 = lVar8 == in_R11;
            lVar6 = lVar7;
          } while (lVar8 < in_R11);
        }
        if (bVar10) {
          uVar3 = (param_4 + lVar8 * 2 + -2)[1];
          param_4[lVar7 * 2] = param_4[lVar8 * 2 + -2];
          (param_4 + lVar7 * 2)[1] = uVar3;
          lVar7 = lVar8 + -1;
        }
        while ((0 < lVar7 && (lVar8 = lVar7 + -1 >> 1, dVar2 < (double)param_4[lVar8 * 2 + 1]))) {
          uVar3 = (param_4 + lVar8 * 2)[1];
          param_4[lVar7 * 2] = param_4[lVar8 * 2];
          (param_4 + lVar7 * 2)[1] = uVar3;
          lVar7 = lVar8;
        }
        param_4[lVar7 * 2] = uVar1;
        (param_4 + lVar7 * 2)[1] = dVar2;
      }
      puVar9 = puVar9 + 2;
    } while (puVar9 < unaff_RSI);
  }
  if (1 < in_R11) {
    puVar9 = unaff_RBP + -2;
    do {
      uVar1 = *puVar9;
      dVar2 = (double)puVar9[1];
      lVar4 = in_R11 + -1;
      lVar7 = 0;
      uVar3 = param_4[1];
      lVar8 = 2;
      *puVar9 = *param_4;
      puVar9[1] = uVar3;
      bVar10 = lVar4 == 2;
      lVar6 = lVar7;
      if (2 < lVar4) {
        do {
          lVar7 = lVar8 + -1;
          if ((double)param_4[lVar8 * 2 + 1] < (double)param_4[lVar8 * 2 + -1] ||
              (double)param_4[lVar8 * 2 + 1] == (double)param_4[lVar8 * 2 + -1]) {
            lVar7 = lVar8;
          }
          lVar8 = lVar7 * 2 + 2;
          uVar3 = (param_4 + lVar7 * 2)[1];
          param_4[lVar6 * 2] = param_4[lVar7 * 2];
          (param_4 + lVar6 * 2)[1] = uVar3;
          bVar10 = lVar8 == lVar4;
          lVar6 = lVar7;
        } while (lVar8 < lVar4);
      }
      if (bVar10) {
        uVar3 = (param_4 + lVar8 * 2 + -2)[1];
        param_4[lVar7 * 2] = param_4[lVar8 * 2 + -2];
        (param_4 + lVar7 * 2)[1] = uVar3;
        lVar7 = lVar8 + -1;
      }
      while ((0 < lVar7 && (lVar8 = lVar7 + -1 >> 1, dVar2 < (double)param_4[lVar8 * 2 + 1]))) {
        uVar3 = (param_4 + lVar8 * 2)[1];
        param_4[lVar7 * 2] = param_4[lVar8 * 2];
        (param_4 + lVar7 * 2)[1] = uVar3;
        lVar7 = lVar8;
      }
      puVar9 = puVar9 + -2;
      in_R11 = (longlong)puVar9 + (0x10 - (longlong)param_4) >> 4;
      param_4[lVar7 * 2] = uVar1;
      (param_4 + lVar7 * 2)[1] = dVar2;
    } while (1 < in_R11);
  }
  return;
}






