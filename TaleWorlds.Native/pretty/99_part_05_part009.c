#include "TaleWorlds.Native.Split.h"

// 99_part_05_part009.c - 14 个函数

// 函数: void FUN_1802da462(uint *param_1,uint *param_2,longlong param_3,longlong param_4)
void FUN_1802da462(uint *param_1,uint *param_2,longlong param_3,longlong param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  longlong lVar5;
  uint64_t uVar6;
  short sVar7;
  longlong in_RAX;
  ulonglong uVar8;
  longlong lVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  
  uVar8 = in_RAX - (longlong)param_1;
  do {
    if (((longlong)(uVar8 & 0xfffffffffffffff8) < 0xe1) || (param_3 < 1)) {
      if (param_3 == 0) {
        FUN_1802da990(param_1,param_2,param_2,param_4);
      }
      return;
    }
    lVar9 = (longlong)param_2 - (longlong)param_1 >> 3;
    if (lVar9 < 0) {
      lVar9 = lVar9 + 1;
    }
    lVar5 = *(longlong *)(param_4 + 0x58);
    uVar8 = (ulonglong)*param_1;
    puVar10 = param_1 + (lVar9 >> 1) * 2;
    sVar1 = *(short *)(uVar8 * 0x70 + 0x30 + lVar5);
    sVar2 = *(short *)((ulonglong)*puVar10 * 0x70 + 0x30 + lVar5);
    sVar3 = *(short *)((ulonglong)param_2[-2] * 0x70 + 0x30 + lVar5);
    if (sVar1 < sVar2) {
      puVar12 = puVar10;
      if (sVar3 <= sVar2) {
        sVar7 = sVar1 - sVar3;
        puVar10 = param_1;
        sVar2 = sVar1;
LAB_1802da501:
        puVar12 = puVar10;
        if (SBORROW2(sVar2,sVar3) != sVar7 < 0) {
          puVar12 = param_2 + -2;
        }
      }
    }
    else {
      puVar12 = param_1;
      if (sVar3 <= sVar1) {
        sVar7 = sVar2 - sVar3;
        goto LAB_1802da501;
      }
    }
    uVar4 = *puVar12;
    puVar10 = param_2;
    puVar12 = param_1;
    while( true ) {
      while( true ) {
        lVar9 = *(longlong *)(param_4 + 0x58);
        sVar1 = *(short *)(lVar9 + (ulonglong)uVar4 * 0x70 + 0x30);
        if (sVar1 <= *(short *)(uVar8 * 0x70 + 0x30 + lVar9)) break;
        uVar8 = (ulonglong)puVar12[2];
        puVar12 = puVar12 + 2;
      }
      sVar3 = *(short *)((ulonglong)puVar10[-2] * 0x70 + 0x30 + lVar9);
      puVar11 = puVar10;
      while (puVar10 = puVar11 + -2, sVar1 < sVar3) {
        sVar3 = *(short *)((ulonglong)puVar11[-4] * 0x70 + 0x30 + lVar9);
        puVar11 = puVar10;
      }
      if (puVar10 <= puVar12) break;
      uVar6 = *(uint64_t *)puVar12;
      *(uint64_t *)puVar12 = *(uint64_t *)puVar10;
      puVar12 = puVar12 + 2;
      *(uint64_t *)puVar10 = uVar6;
      uVar8 = (ulonglong)*puVar12;
    }
    param_3 = param_3 + -1;
    FUN_1802da450(puVar12,param_2,param_3,param_4);
    uVar8 = (longlong)puVar12 - (longlong)param_1;
    param_2 = puVar12;
  } while( true );
}






// 函数: void FUN_1802da486(void)
void FUN_1802da486(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  longlong lVar5;
  uint64_t uVar6;
  short sVar7;
  longlong lVar8;
  uint *puVar9;
  uint *puVar10;
  longlong unaff_RBX;
  uint *unaff_RBP;
  uint *unaff_RSI;
  uint *puVar11;
  ulonglong uVar12;
  longlong unaff_R14;
  
  do {
    if (unaff_R14 < 1) break;
    lVar8 = (longlong)unaff_RBP - (longlong)unaff_RSI >> 3;
    if (lVar8 < 0) {
      lVar8 = lVar8 + 1;
    }
    lVar5 = *(longlong *)(unaff_RBX + 0x58);
    uVar12 = (ulonglong)*unaff_RSI;
    puVar9 = unaff_RSI + (lVar8 >> 1) * 2;
    sVar1 = *(short *)(uVar12 * 0x70 + 0x30 + lVar5);
    sVar2 = *(short *)((ulonglong)*puVar9 * 0x70 + 0x30 + lVar5);
    sVar3 = *(short *)((ulonglong)unaff_RBP[-2] * 0x70 + 0x30 + lVar5);
    if (sVar1 < sVar2) {
      puVar11 = puVar9;
      if (sVar3 <= sVar2) {
        sVar7 = sVar1 - sVar3;
        puVar9 = unaff_RSI;
        sVar2 = sVar1;
LAB_1802da501:
        puVar11 = puVar9;
        if (SBORROW2(sVar2,sVar3) != sVar7 < 0) {
          puVar11 = unaff_RBP + -2;
        }
      }
    }
    else {
      puVar11 = unaff_RSI;
      if (sVar3 <= sVar1) {
        sVar7 = sVar2 - sVar3;
        goto LAB_1802da501;
      }
    }
    uVar4 = *puVar11;
    puVar9 = unaff_RBP;
    puVar11 = unaff_RSI;
    while( true ) {
      while( true ) {
        lVar8 = *(longlong *)(unaff_RBX + 0x58);
        sVar1 = *(short *)(lVar8 + (ulonglong)uVar4 * 0x70 + 0x30);
        if (sVar1 <= *(short *)(uVar12 * 0x70 + 0x30 + lVar8)) break;
        uVar12 = (ulonglong)puVar11[2];
        puVar11 = puVar11 + 2;
      }
      sVar3 = *(short *)((ulonglong)puVar9[-2] * 0x70 + 0x30 + lVar8);
      puVar10 = puVar9;
      while (puVar9 = puVar10 + -2, sVar1 < sVar3) {
        sVar3 = *(short *)((ulonglong)puVar10[-4] * 0x70 + 0x30 + lVar8);
        puVar10 = puVar9;
      }
      if (puVar9 <= puVar11) break;
      uVar6 = *(uint64_t *)puVar11;
      *(uint64_t *)puVar11 = *(uint64_t *)puVar9;
      puVar11 = puVar11 + 2;
      *(uint64_t *)puVar9 = uVar6;
      uVar12 = (ulonglong)*puVar11;
    }
    unaff_R14 = unaff_R14 + -1;
    FUN_1802da450(puVar11,unaff_RBP,unaff_R14);
    unaff_RBP = puVar11;
  } while (0xe0 < (longlong)((longlong)puVar11 - (longlong)unaff_RSI & 0xfffffffffffffff8U));
  if (unaff_R14 == 0) {
    FUN_1802da990();
  }
  return;
}






// 函数: void FUN_1802da5b2(void)
void FUN_1802da5b2(void)

{
  longlong unaff_R14;
  
  if (unaff_R14 == 0) {
    FUN_1802da990();
  }
  return;
}






// 函数: void FUN_1802da5bc(void)
void FUN_1802da5bc(void)

{
  FUN_1802da990();
  return;
}






// 函数: void FUN_1802da5e0(uint64_t *param_1,uint64_t *param_2,longlong param_3,int8_t param_4)
void FUN_1802da5e0(uint64_t *param_1,uint64_t *param_2,longlong param_3,int8_t param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint64_t uVar4;
  float fVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  float fStackX_c;
  
  uVar6 = (longlong)param_2 - (longlong)param_1;
  while ((0xe0 < (longlong)(uVar6 & 0xfffffffffffffff8) && (0 < param_3))) {
    lVar7 = (longlong)param_2 - (longlong)param_1 >> 3;
    if (lVar7 < 0) {
      lVar7 = lVar7 + 1;
    }
    fVar2 = *(float *)((longlong)param_1 + 4);
    fVar3 = *(float *)((longlong)param_1 + (lVar7 >> 1) * 8 + 4);
    fVar5 = fVar3;
    puVar9 = param_1 + (lVar7 >> 1);
    puVar8 = param_1;
    if (fVar3 < fVar2) {
      fVar5 = fVar2;
      puVar9 = param_1;
      puVar8 = param_1 + (lVar7 >> 1);
      fVar2 = fVar3;
    }
    if ((fVar2 <= *(float *)((longlong)param_2 + -4)) &&
       (puVar8 = puVar9, *(float *)((longlong)param_2 + -4) < fVar5)) {
      puVar8 = param_2 + -1;
    }
    fStackX_c = (float)((ulonglong)*puVar8 >> 0x20);
    puVar9 = param_2;
    puVar8 = param_1;
    while( true ) {
      for (; fStackX_c < *(float *)((longlong)puVar8 + 4); puVar8 = puVar8 + 1) {
      }
      puVar11 = puVar9 + -1;
      puVar10 = puVar11;
      if (*(float *)((longlong)puVar9 + -4) <= fStackX_c &&
          fStackX_c != *(float *)((longlong)puVar9 + -4)) {
        do {
          puVar11 = puVar10 + -1;
          pfVar1 = (float *)((longlong)puVar10 + -4);
          puVar10 = puVar11;
        } while (*pfVar1 <= fStackX_c && fStackX_c != *pfVar1);
      }
      if (puVar11 <= puVar8) break;
      uVar4 = *puVar8;
      *puVar8 = *puVar11;
      puVar8 = puVar8 + 1;
      *puVar11 = uVar4;
      puVar9 = puVar11;
    }
    param_3 = param_3 + -1;
    FUN_1802da5e0(puVar8,param_2,param_3,param_4);
    uVar6 = (longlong)puVar8 - (longlong)param_1;
    param_2 = puVar8;
  }
  if (param_3 == 0) {
    FUN_1802dab70(param_1,param_2,param_2,param_4);
  }
  return;
}






// 函数: void FUN_1802da5ed(uint64_t *param_1,uint64_t *param_2,longlong param_3,int8_t param_4)
void FUN_1802da5ed(uint64_t *param_1,uint64_t *param_2,longlong param_3,int8_t param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint64_t uVar4;
  float fVar5;
  longlong in_RAX;
  ulonglong uVar6;
  longlong lVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  float fStack0000000000000034;
  
  uVar6 = in_RAX - (longlong)param_1;
  while ((0xe0 < (longlong)(uVar6 & 0xfffffffffffffff8) && (0 < param_3))) {
    lVar7 = (longlong)param_2 - (longlong)param_1 >> 3;
    if (lVar7 < 0) {
      lVar7 = lVar7 + 1;
    }
    fVar2 = *(float *)((longlong)param_1 + 4);
    fVar3 = *(float *)((longlong)param_1 + (lVar7 >> 1) * 8 + 4);
    fVar5 = fVar3;
    puVar9 = param_1 + (lVar7 >> 1);
    puVar8 = param_1;
    if (fVar3 < fVar2) {
      fVar5 = fVar2;
      puVar9 = param_1;
      puVar8 = param_1 + (lVar7 >> 1);
      fVar2 = fVar3;
    }
    if ((fVar2 <= *(float *)((longlong)param_2 + -4)) &&
       (puVar8 = puVar9, *(float *)((longlong)param_2 + -4) < fVar5)) {
      puVar8 = param_2 + -1;
    }
    fStack0000000000000034 = (float)((ulonglong)*puVar8 >> 0x20);
    puVar9 = param_2;
    puVar8 = param_1;
    while( true ) {
      for (; fStack0000000000000034 < *(float *)((longlong)puVar8 + 4); puVar8 = puVar8 + 1) {
      }
      puVar11 = puVar9 + -1;
      puVar10 = puVar11;
      if (*(float *)((longlong)puVar9 + -4) <= fStack0000000000000034 &&
          fStack0000000000000034 != *(float *)((longlong)puVar9 + -4)) {
        do {
          puVar11 = puVar10 + -1;
          pfVar1 = (float *)((longlong)puVar10 + -4);
          puVar10 = puVar11;
        } while (*pfVar1 <= fStack0000000000000034 && fStack0000000000000034 != *pfVar1);
      }
      if (puVar11 <= puVar8) break;
      uVar4 = *puVar8;
      *puVar8 = *puVar11;
      puVar8 = puVar8 + 1;
      *puVar11 = uVar4;
      puVar9 = puVar11;
    }
    param_3 = param_3 + -1;
    FUN_1802da5e0(puVar8,param_2,param_3,param_4);
    uVar6 = (longlong)puVar8 - (longlong)param_1;
    param_2 = puVar8;
  }
  if (param_3 == 0) {
    FUN_1802dab70(param_1,param_2,param_2,param_4);
  }
  return;
}






// 函数: void FUN_1802da612(int32_t param_1)
void FUN_1802da612(int32_t param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint64_t uVar4;
  float fVar5;
  longlong lVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  int8_t unaff_BL;
  longlong unaff_RBP;
  uint64_t *unaff_RSI;
  uint64_t *puVar10;
  uint64_t *in_R10;
  float fStack0000000000000034;
  
  do {
    puVar10 = in_R10;
    if (unaff_RBP < 1) break;
    lVar6 = (longlong)in_R10 - (longlong)unaff_RSI >> 3;
    if (lVar6 < 0) {
      lVar6 = lVar6 + 1;
    }
    fVar2 = *(float *)((longlong)unaff_RSI + 4);
    fVar3 = *(float *)((longlong)unaff_RSI + (lVar6 >> 1) * 8 + 4);
    fVar5 = fVar3;
    puVar10 = unaff_RSI + (lVar6 >> 1);
    puVar7 = unaff_RSI;
    if (fVar3 < fVar2) {
      fVar5 = fVar2;
      puVar10 = unaff_RSI;
      puVar7 = unaff_RSI + (lVar6 >> 1);
      fVar2 = fVar3;
    }
    if ((fVar2 <= *(float *)((longlong)in_R10 + -4)) &&
       (puVar7 = puVar10, *(float *)((longlong)in_R10 + -4) < fVar5)) {
      puVar7 = in_R10 + -1;
    }
    fStack0000000000000034 = (float)((ulonglong)*puVar7 >> 0x20);
    puVar7 = in_R10;
    puVar10 = unaff_RSI;
    while( true ) {
      for (; fStack0000000000000034 < *(float *)((longlong)puVar10 + 4); puVar10 = puVar10 + 1) {
      }
      puVar9 = puVar7 + -1;
      puVar8 = puVar9;
      if (*(float *)((longlong)puVar7 + -4) <= fStack0000000000000034 &&
          fStack0000000000000034 != *(float *)((longlong)puVar7 + -4)) {
        do {
          puVar9 = puVar8 + -1;
          pfVar1 = (float *)((longlong)puVar8 + -4);
          puVar8 = puVar9;
        } while (*pfVar1 <= fStack0000000000000034 && fStack0000000000000034 != *pfVar1);
      }
      if (puVar9 <= puVar10) break;
      uVar4 = *puVar10;
      *puVar10 = *puVar9;
      puVar10 = puVar10 + 1;
      *puVar9 = uVar4;
      puVar7 = puVar9;
    }
    unaff_RBP = unaff_RBP + -1;
    param_1 = FUN_1802da5e0(puVar10,in_R10,unaff_RBP,unaff_BL);
    in_R10 = puVar10;
  } while (0xe0 < (longlong)((longlong)puVar10 - (longlong)unaff_RSI & 0xfffffffffffffff8U));
  if (unaff_RBP == 0) {
    FUN_1802dab70(param_1,puVar10,puVar10,unaff_BL);
  }
  return;
}






// 函数: void FUN_1802da6f2(void)
void FUN_1802da6f2(void)

{
  longlong unaff_RBP;
  
  if (unaff_RBP == 0) {
    FUN_1802dab70();
  }
  return;
}






// 函数: void FUN_1802da6fc(void)
void FUN_1802da6fc(void)

{
  FUN_1802dab70();
  return;
}






// 函数: void FUN_1802da720(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)
void FUN_1802da720(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  
  uVar9 = (longlong)param_2 - (longlong)param_1 >> 3;
  if (1 < (longlong)uVar9) {
    uVar8 = ((longlong)(uVar9 - 2) >> 1) + 1;
    uVar4 = uVar8 * 2 + 2;
    do {
      uVar2 = param_1[uVar8 - 1];
      uVar8 = uVar8 - 1;
      uVar4 = uVar4 - 2;
      uVar5 = uVar8;
      uVar1 = uVar4;
      while ((longlong)uVar1 < (longlong)uVar9) {
        uVar7 = uVar1 - 1;
        if (param_1[uVar1 - 1] <= param_1[uVar1]) {
          uVar7 = uVar1;
        }
        param_1[uVar5] = param_1[uVar7];
        uVar5 = uVar7;
        uVar1 = uVar7 * 2 + 2;
      }
      if (uVar1 == uVar9) {
        param_1[uVar5] = param_1[uVar1 - 1];
        uVar5 = uVar1 - 1;
      }
      while ((longlong)uVar8 < (longlong)uVar5) {
        uVar1 = (longlong)(uVar5 - 1) >> 1;
        if (uVar2 <= param_1[uVar1]) break;
        param_1[uVar5] = param_1[uVar1];
        uVar5 = uVar1;
      }
      param_1[uVar5] = uVar2;
    } while (uVar8 != 0);
  }
  uVar8 = 0;
  uVar4 = (ulonglong)((longlong)param_3 + (7 - (longlong)param_2)) >> 3;
  if (param_3 < param_2) {
    uVar4 = uVar8;
  }
  puVar3 = param_2;
  uVar5 = uVar8;
  if (uVar4 != 0) {
    do {
      uVar1 = *puVar3;
      if (uVar1 < *param_1) {
        uVar7 = 2;
        *puVar3 = *param_1;
        bVar10 = uVar9 == 2;
        uVar6 = uVar8;
        uVar2 = uVar8;
        if (2 < (longlong)uVar9) {
          do {
            uVar2 = uVar7 - 1;
            if (param_1[uVar7 - 1] <= param_1[uVar7]) {
              uVar2 = uVar7;
            }
            uVar7 = uVar2 * 2 + 2;
            param_1[uVar6] = param_1[uVar2];
            bVar10 = uVar7 == uVar9;
            uVar6 = uVar2;
          } while ((longlong)uVar7 < (longlong)uVar9);
        }
        if (bVar10) {
          param_1[uVar2] = param_1[uVar7 - 1];
          uVar2 = uVar7 - 1;
        }
        while (0 < (longlong)uVar2) {
          uVar7 = (longlong)(uVar2 - 1) >> 1;
          if (uVar1 <= param_1[uVar7]) break;
          param_1[uVar2] = param_1[uVar7];
          uVar2 = uVar7;
        }
        param_1[uVar2] = uVar1;
      }
      puVar3 = puVar3 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  if (1 < (longlong)uVar9) {
    param_2 = param_2 + -1;
    do {
      uVar9 = uVar9 - 1;
      uVar1 = *param_2;
      uVar5 = 2;
      *param_2 = *param_1;
      bVar10 = uVar9 == 2;
      uVar4 = uVar8;
      uVar2 = uVar8;
      if (2 < (longlong)uVar9) {
        do {
          uVar4 = uVar5 - 1;
          if (param_1[uVar5 - 1] <= param_1[uVar5]) {
            uVar4 = uVar5;
          }
          uVar5 = uVar4 * 2 + 2;
          param_1[uVar2] = param_1[uVar4];
          bVar10 = uVar5 == uVar9;
          uVar2 = uVar4;
        } while ((longlong)uVar5 < (longlong)uVar9);
      }
      if (bVar10) {
        param_1[uVar4] = param_1[uVar5 - 1];
        uVar4 = uVar5 - 1;
      }
      while (0 < (longlong)uVar4) {
        uVar9 = (longlong)(uVar4 - 1) >> 1;
        if (uVar1 <= param_1[uVar9]) break;
        param_1[uVar4] = param_1[uVar9];
        uVar4 = uVar9;
      }
      param_2 = param_2 + -1;
      param_1[uVar4] = uVar1;
      uVar9 = (8 - (longlong)param_1) + (longlong)param_2 >> 3;
    } while (1 < (longlong)uVar9);
  }
  return;
}






// 函数: void FUN_1802da990(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,longlong param_4)
void FUN_1802da990(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  ulonglong uStackX_8;
  
  lVar2 = (longlong)param_2 - (longlong)param_1 >> 3;
  if (1 < lVar2) {
    lVar3 = (lVar2 + -2 >> 1) + 1;
    do {
      uStackX_8 = param_1[lVar3 + -1];
      lVar3 = lVar3 + -1;
      FUN_1802db030(param_1,lVar3,lVar2,lVar3,&uStackX_8,param_4);
    } while (lVar3 != 0);
  }
  puVar4 = param_2;
  if (param_2 < param_3) {
    do {
      if (*(short *)((ulonglong)(uint)*puVar4 * 0x70 + 0x30 + *(longlong *)(param_4 + 0x58)) <
          *(short *)((ulonglong)(uint)*param_1 * 0x70 + 0x30 + *(longlong *)(param_4 + 0x58))) {
        uStackX_8 = *puVar4;
        *puVar4 = *param_1;
        FUN_1802db030(param_1,0,lVar2,0,&uStackX_8,param_4);
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 < param_3);
  }
  if (1 < lVar2) {
    param_2 = param_2 + -1;
    do {
      lVar2 = lVar2 + -1;
      uVar1 = *param_2;
      lVar3 = 0;
      lVar6 = 2;
      *param_2 = *param_1;
      bVar7 = lVar2 == 2;
      lVar5 = lVar3;
      if (2 < lVar2) {
        do {
          lVar3 = lVar6 + -1;
          if (*(short *)((ulonglong)(uint)param_1[lVar6 + -1] * 0x70 + 0x30 +
                        *(longlong *)(param_4 + 0x58)) <=
              *(short *)((ulonglong)(uint)param_1[lVar6] * 0x70 + 0x30 +
                        *(longlong *)(param_4 + 0x58))) {
            lVar3 = lVar6;
          }
          lVar6 = lVar3 * 2 + 2;
          param_1[lVar5] = param_1[lVar3];
          bVar7 = lVar6 == lVar2;
          lVar5 = lVar3;
        } while (lVar6 < lVar2);
      }
      if (bVar7) {
        param_1[lVar3] = param_1[lVar6 + -1];
        lVar3 = lVar6 + -1;
      }
      if (0 < lVar3) {
        do {
          lVar2 = lVar3 + -1 >> 1;
          if (*(short *)((uVar1 & 0xffffffff) * 0x70 + 0x30 + *(longlong *)(param_4 + 0x58)) <=
              *(short *)((ulonglong)(uint)param_1[lVar2] * 0x70 + 0x30 +
                        *(longlong *)(param_4 + 0x58))) break;
          param_1[lVar3] = param_1[lVar2];
          lVar3 = lVar2;
        } while (0 < lVar2);
      }
      param_2 = param_2 + -1;
      param_1[lVar3] = uVar1;
      lVar2 = (8 - (longlong)param_1) + (longlong)param_2 >> 3;
    } while (1 < lVar2);
  }
  return;
}






// 函数: void FUN_1802dab70(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)
void FUN_1802dab70(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)

{
  float *pfVar1;
  float fVar2;
  uint64_t uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint64_t *puVar10;
  bool bVar11;
  float fStackX_c;
  
  lVar6 = (longlong)param_2 - (longlong)param_1 >> 3;
  if (1 < lVar6) {
    lVar9 = (lVar6 + -2 >> 1) + 1;
    lVar7 = lVar9 * 2 + 2;
    do {
      uVar3 = param_1[lVar9 + -1];
      lVar9 = lVar9 + -1;
      lVar7 = lVar7 + -2;
      lVar8 = lVar9;
      lVar5 = lVar7;
      while (lVar5 < lVar6) {
        fVar2 = *(float *)((longlong)param_1 + lVar5 * 8 + 4);
        pfVar1 = (float *)((longlong)param_1 + lVar5 * 8 + -4);
        lVar4 = lVar5 + -1;
        if (fVar2 < *pfVar1 || fVar2 == *pfVar1) {
          lVar4 = lVar5;
        }
        param_1[lVar8] = param_1[lVar4];
        lVar8 = lVar4;
        lVar5 = lVar4 * 2 + 2;
      }
      if (lVar5 == lVar6) {
        param_1[lVar8] = param_1[lVar5 + -1];
        lVar8 = lVar5 + -1;
      }
      if (lVar9 < lVar8) {
        fStackX_c = (float)((ulonglong)uVar3 >> 0x20);
        do {
          lVar5 = lVar8 + -1 >> 1;
          if (*(float *)((longlong)param_1 + lVar5 * 8 + 4) <= fStackX_c) break;
          param_1[lVar8] = param_1[lVar5];
          lVar8 = lVar5;
        } while (lVar9 < lVar5);
      }
      param_1[lVar8] = uVar3;
    } while (lVar9 != 0);
  }
  puVar10 = param_2;
  if (param_2 < param_3) {
    do {
      if (*(float *)((longlong)param_1 + 4) < *(float *)((longlong)puVar10 + 4)) {
        uVar3 = *puVar10;
        lVar7 = 0;
        lVar9 = 2;
        *puVar10 = *param_1;
        bVar11 = lVar6 == 2;
        lVar8 = lVar7;
        if (2 < lVar6) {
          do {
            fVar2 = *(float *)((longlong)param_1 + lVar9 * 8 + 4);
            pfVar1 = (float *)((longlong)param_1 + lVar9 * 8 + -4);
            lVar7 = lVar9 + -1;
            if (fVar2 < *pfVar1 || fVar2 == *pfVar1) {
              lVar7 = lVar9;
            }
            lVar9 = lVar7 * 2 + 2;
            param_1[lVar8] = param_1[lVar7];
            bVar11 = lVar9 == lVar6;
            lVar8 = lVar7;
          } while (lVar9 < lVar6);
        }
        if (bVar11) {
          param_1[lVar7] = param_1[lVar9 + -1];
          lVar7 = lVar9 + -1;
        }
        if (0 < lVar7) {
          fStackX_c = (float)((ulonglong)uVar3 >> 0x20);
          do {
            lVar9 = lVar7 + -1 >> 1;
            if (*(float *)((longlong)param_1 + lVar9 * 8 + 4) <= fStackX_c) break;
            param_1[lVar7] = param_1[lVar9];
            lVar7 = lVar9;
          } while (0 < lVar9);
        }
        param_1[lVar7] = uVar3;
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 < param_3);
  }
  if (1 < lVar6) {
    param_2 = param_2 + -1;
    do {
      uVar3 = *param_2;
      lVar6 = lVar6 + -1;
      lVar7 = 0;
      lVar9 = 2;
      *param_2 = *param_1;
      bVar11 = lVar6 == 2;
      lVar8 = lVar7;
      if (2 < lVar6) {
        do {
          fVar2 = *(float *)((longlong)param_1 + lVar9 * 8 + 4);
          pfVar1 = (float *)((longlong)param_1 + lVar9 * 8 + -4);
          lVar7 = lVar9 + -1;
          if (fVar2 < *pfVar1 || fVar2 == *pfVar1) {
            lVar7 = lVar9;
          }
          lVar9 = lVar7 * 2 + 2;
          param_1[lVar8] = param_1[lVar7];
          bVar11 = lVar9 == lVar6;
          lVar8 = lVar7;
        } while (lVar9 < lVar6);
      }
      if (bVar11) {
        param_1[lVar7] = param_1[lVar9 + -1];
        lVar7 = lVar9 + -1;
      }
      if (0 < lVar7) {
        fStackX_c = (float)((ulonglong)uVar3 >> 0x20);
        do {
          lVar6 = lVar7 + -1 >> 1;
          if (*(float *)((longlong)param_1 + lVar6 * 8 + 4) <= fStackX_c) break;
          param_1[lVar7] = param_1[lVar6];
          lVar7 = lVar6;
        } while (0 < lVar6);
      }
      param_2 = param_2 + -1;
      param_1[lVar7] = uVar3;
      lVar6 = (8 - (longlong)param_1) + (longlong)param_2 >> 3;
    } while (1 < lVar6);
  }
  return;
}






// 函数: void FUN_1802dab7e(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)
void FUN_1802dab7e(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)

{
  float *pfVar1;
  float fVar2;
  uint64_t uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RBX;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint64_t *puVar10;
  bool bVar11;
  float fStackX_14;
  
  lVar6 = unaff_RBX - (longlong)param_1 >> 3;
  if (1 < lVar6) {
    lVar9 = (lVar6 + -2 >> 1) + 1;
    lVar7 = lVar9 * 2 + 2;
    do {
      uVar3 = param_1[lVar9 + -1];
      lVar9 = lVar9 + -1;
      lVar7 = lVar7 + -2;
      lVar8 = lVar9;
      lVar5 = lVar7;
      while (lVar5 < lVar6) {
        fVar2 = *(float *)((longlong)param_1 + lVar5 * 8 + 4);
        pfVar1 = (float *)((longlong)param_1 + lVar5 * 8 + -4);
        lVar4 = lVar5 + -1;
        if (fVar2 < *pfVar1 || fVar2 == *pfVar1) {
          lVar4 = lVar5;
        }
        param_1[lVar8] = param_1[lVar4];
        lVar8 = lVar4;
        lVar5 = lVar4 * 2 + 2;
      }
      if (lVar5 == lVar6) {
        param_1[lVar8] = param_1[lVar5 + -1];
        lVar8 = lVar5 + -1;
      }
      if (lVar9 < lVar8) {
        fStackX_14 = (float)((ulonglong)uVar3 >> 0x20);
        do {
          lVar5 = lVar8 + -1 >> 1;
          if (*(float *)((longlong)param_1 + lVar5 * 8 + 4) <= fStackX_14) break;
          param_1[lVar8] = param_1[lVar5];
          lVar8 = lVar5;
        } while (lVar9 < lVar5);
      }
      param_1[lVar8] = uVar3;
    } while (lVar9 != 0);
  }
  puVar10 = param_2;
  if (param_2 < param_3) {
    do {
      if (*(float *)((longlong)param_1 + 4) < *(float *)((longlong)puVar10 + 4)) {
        uVar3 = *puVar10;
        lVar7 = 0;
        lVar9 = 2;
        *puVar10 = *param_1;
        bVar11 = lVar6 == 2;
        lVar8 = lVar7;
        if (2 < lVar6) {
          do {
            fVar2 = *(float *)((longlong)param_1 + lVar9 * 8 + 4);
            pfVar1 = (float *)((longlong)param_1 + lVar9 * 8 + -4);
            lVar7 = lVar9 + -1;
            if (fVar2 < *pfVar1 || fVar2 == *pfVar1) {
              lVar7 = lVar9;
            }
            lVar9 = lVar7 * 2 + 2;
            param_1[lVar8] = param_1[lVar7];
            bVar11 = lVar9 == lVar6;
            lVar8 = lVar7;
          } while (lVar9 < lVar6);
        }
        if (bVar11) {
          param_1[lVar7] = param_1[lVar9 + -1];
          lVar7 = lVar9 + -1;
        }
        if (0 < lVar7) {
          fStackX_14 = (float)((ulonglong)uVar3 >> 0x20);
          do {
            lVar9 = lVar7 + -1 >> 1;
            if (*(float *)((longlong)param_1 + lVar9 * 8 + 4) <= fStackX_14) break;
            param_1[lVar7] = param_1[lVar9];
            lVar7 = lVar9;
          } while (0 < lVar9);
        }
        param_1[lVar7] = uVar3;
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 < param_3);
  }
  if (1 < lVar6) {
    param_2 = param_2 + -1;
    do {
      uVar3 = *param_2;
      lVar6 = lVar6 + -1;
      lVar7 = 0;
      lVar9 = 2;
      *param_2 = *param_1;
      bVar11 = lVar6 == 2;
      lVar8 = lVar7;
      if (2 < lVar6) {
        do {
          fVar2 = *(float *)((longlong)param_1 + lVar9 * 8 + 4);
          pfVar1 = (float *)((longlong)param_1 + lVar9 * 8 + -4);
          lVar7 = lVar9 + -1;
          if (fVar2 < *pfVar1 || fVar2 == *pfVar1) {
            lVar7 = lVar9;
          }
          lVar9 = lVar7 * 2 + 2;
          param_1[lVar8] = param_1[lVar7];
          bVar11 = lVar9 == lVar6;
          lVar8 = lVar7;
        } while (lVar9 < lVar6);
      }
      if (bVar11) {
        param_1[lVar7] = param_1[lVar9 + -1];
        lVar7 = lVar9 + -1;
      }
      if (0 < lVar7) {
        fStackX_14 = (float)((ulonglong)uVar3 >> 0x20);
        do {
          lVar6 = lVar7 + -1 >> 1;
          if (*(float *)((longlong)param_1 + lVar6 * 8 + 4) <= fStackX_14) break;
          param_1[lVar7] = param_1[lVar6];
          lVar7 = lVar6;
        } while (0 < lVar6);
      }
      param_2 = param_2 + -1;
      param_1[lVar7] = uVar3;
      lVar6 = (8 - (longlong)param_1) + (longlong)param_2 >> 3;
    } while (1 < lVar6);
  }
  return;
}






// 函数: void FUN_1802dad1e(void)
void FUN_1802dad1e(void)

{
  float *pfVar1;
  float fVar2;
  uint64_t uVar3;
  longlong lVar4;
  longlong unaff_RBX;
  longlong lVar5;
  longlong unaff_RBP;
  longlong lVar6;
  uint64_t *in_R9;
  longlong lVar7;
  uint64_t *puVar8;
  bool bVar9;
  float fStackX_14;
  
  puVar8 = (uint64_t *)(unaff_RBP + -8);
  do {
    uVar3 = *puVar8;
    lVar5 = unaff_RBX + -1;
    lVar4 = 0;
    lVar7 = 2;
    *puVar8 = *in_R9;
    bVar9 = lVar5 == 2;
    lVar6 = lVar4;
    if (2 < lVar5) {
      do {
        fVar2 = *(float *)((longlong)in_R9 + lVar7 * 8 + 4);
        pfVar1 = (float *)((longlong)in_R9 + lVar7 * 8 + -4);
        lVar4 = lVar7 + -1;
        if (fVar2 < *pfVar1 || fVar2 == *pfVar1) {
          lVar4 = lVar7;
        }
        lVar7 = lVar4 * 2 + 2;
        in_R9[lVar6] = in_R9[lVar4];
        bVar9 = lVar7 == lVar5;
        lVar6 = lVar4;
      } while (lVar7 < lVar5);
    }
    if (bVar9) {
      in_R9[lVar4] = in_R9[lVar7 + -1];
      lVar4 = lVar7 + -1;
    }
    if (0 < lVar4) {
      fStackX_14 = (float)((ulonglong)uVar3 >> 0x20);
      do {
        lVar7 = lVar4 + -1 >> 1;
        if (*(float *)((longlong)in_R9 + lVar7 * 8 + 4) <= fStackX_14) break;
        in_R9[lVar4] = in_R9[lVar7];
        lVar4 = lVar7;
      } while (0 < lVar7);
    }
    puVar8 = puVar8 + -1;
    in_R9[lVar4] = uVar3;
    unaff_RBX = (8 - (longlong)in_R9) + (longlong)puVar8 >> 3;
    if (unaff_RBX < 2) {
      return;
    }
  } while( true );
}






