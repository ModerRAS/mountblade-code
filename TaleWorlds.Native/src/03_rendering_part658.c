#include "TaleWorlds.Native.Split.h"

// 03_rendering_part658.c - 2 个函数

// 函数: void FUN_180640660(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)
void FUN_180640660(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined8 *apuStackX_10 [2];
  undefined8 uStackX_20;
  
  lVar7 = (longlong)param_2 - (longlong)param_1 >> 3;
  apuStackX_10[0] = param_2;
  uStackX_20 = param_4;
  if (1 < lVar7) {
    lVar2 = (lVar7 + -2 >> 1) + 1;
    lVar6 = lVar2 * 2 + 2;
    do {
      uStackX_20 = param_1[lVar2 + -1];
      lVar2 = lVar2 + -1;
      lVar6 = lVar6 + -2;
      lVar4 = lVar2;
      for (lVar5 = lVar6; lVar5 < lVar7; lVar5 = lVar5 * 2 + 2) {
        cVar1 = func_0x00018063e940(param_1 + lVar5,param_1 + lVar5 + -1);
        if (cVar1 != '\0') {
          lVar5 = lVar5 + -1;
        }
        param_1[lVar4] = param_1[lVar5];
        lVar4 = lVar5;
      }
      if (lVar5 == lVar7) {
        param_1[lVar4] = param_1[lVar5 + -1];
        lVar4 = lVar5 + -1;
      }
      while (lVar2 < lVar4) {
        lVar5 = lVar4 + -1 >> 1;
        cVar1 = func_0x00018063e940(param_1 + lVar5,&uStackX_20);
        if (cVar1 == '\0') break;
        param_1[lVar4] = param_1[lVar5];
        lVar4 = lVar5;
      }
      param_1[lVar4] = uStackX_20;
      param_2 = apuStackX_10[0];
    } while (lVar2 != 0);
  }
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    cVar1 = func_0x00018063e940(param_2,param_1);
    if (cVar1 != '\0') {
      uStackX_20 = *param_2;
      lVar6 = 0;
      lVar2 = 2;
      *param_2 = *param_1;
      bVar8 = lVar7 == 2;
      lVar4 = lVar6;
      if (2 < lVar7) {
        do {
          cVar1 = func_0x00018063e940(param_1 + lVar2,param_1 + lVar2 + -1);
          lVar6 = lVar2;
          if (cVar1 != '\0') {
            lVar6 = lVar2 + -1;
          }
          param_1[lVar4] = param_1[lVar6];
          lVar2 = lVar6 * 2 + 2;
          bVar8 = lVar2 == lVar7;
          lVar4 = lVar6;
        } while (lVar2 < lVar7);
      }
      if (bVar8) {
        param_1[lVar6] = param_1[lVar2 + -1];
        lVar6 = lVar2 + -1;
      }
      while (0 < lVar6) {
        lVar2 = lVar6 + -1 >> 1;
        cVar1 = func_0x00018063e940(param_1 + lVar2,&uStackX_20);
        if (cVar1 == '\0') break;
        param_1[lVar6] = param_1[lVar2];
        lVar6 = lVar2;
      }
      param_1[lVar6] = uStackX_20;
    }
  }
  if (1 < lVar7) {
    puVar3 = apuStackX_10[0] + -1;
    do {
      apuStackX_10[0] = (undefined8 *)*puVar3;
      lVar7 = lVar7 + -1;
      lVar6 = 0;
      lVar2 = 2;
      *puVar3 = *param_1;
      bVar8 = lVar7 == 2;
      lVar4 = lVar6;
      if (2 < lVar7) {
        do {
          cVar1 = func_0x00018063e940(param_1 + lVar2,param_1 + lVar2 + -1);
          lVar6 = lVar2;
          if (cVar1 != '\0') {
            lVar6 = lVar2 + -1;
          }
          param_1[lVar4] = param_1[lVar6];
          lVar2 = lVar6 * 2 + 2;
          bVar8 = lVar2 == lVar7;
          lVar4 = lVar6;
        } while (lVar2 < lVar7);
      }
      if (bVar8) {
        param_1[lVar6] = param_1[lVar2 + -1];
        lVar6 = lVar2 + -1;
      }
      while (0 < lVar6) {
        lVar7 = lVar6 + -1 >> 1;
        cVar1 = func_0x00018063e940(param_1 + lVar7,apuStackX_10);
        if (cVar1 == '\0') break;
        param_1[lVar6] = param_1[lVar7];
        lVar6 = lVar7;
      }
      puVar3 = puVar3 + -1;
      param_1[lVar6] = apuStackX_10[0];
      lVar7 = (8 - (longlong)param_1) + (longlong)puVar3 >> 3;
    } while (1 < lVar7);
  }
  return;
}





// 函数: void FUN_18064067b(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)
void FUN_18064067b(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong unaff_R15;
  longlong lVar7;
  bool bVar8;
  undefined8 *in_stack_00000068;
  undefined8 in_stack_00000078;
  
  lVar7 = unaff_R15 - (longlong)param_1 >> 3;
  puVar3 = param_2;
  if (1 < lVar7) {
    lVar2 = (lVar7 + -2 >> 1) + 1;
    lVar6 = lVar2 * 2 + 2;
    do {
      in_stack_00000078 = param_1[lVar2 + -1];
      lVar2 = lVar2 + -1;
      lVar6 = lVar6 + -2;
      lVar4 = lVar2;
      for (lVar5 = lVar6; lVar5 < lVar7; lVar5 = lVar5 * 2 + 2) {
        cVar1 = func_0x00018063e940(param_1 + lVar5,param_1 + lVar5 + -1);
        if (cVar1 != '\0') {
          lVar5 = lVar5 + -1;
        }
        param_1[lVar4] = param_1[lVar5];
        lVar4 = lVar5;
      }
      if (lVar5 == lVar7) {
        param_1[lVar4] = param_1[lVar5 + -1];
        lVar4 = lVar5 + -1;
      }
      while (lVar2 < lVar4) {
        lVar5 = lVar4 + -1 >> 1;
        cVar1 = func_0x00018063e940(param_1 + lVar5,&stack0x00000078);
        if (cVar1 == '\0') break;
        param_1[lVar4] = param_1[lVar5];
        lVar4 = lVar5;
      }
      param_1[lVar4] = in_stack_00000078;
      param_2 = in_stack_00000068;
      puVar3 = in_stack_00000068;
    } while (lVar2 != 0);
  }
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    cVar1 = func_0x00018063e940(param_2,param_1);
    if (cVar1 != '\0') {
      in_stack_00000078 = *param_2;
      lVar6 = 0;
      lVar2 = 2;
      *param_2 = *param_1;
      bVar8 = lVar7 == 2;
      lVar4 = lVar6;
      if (2 < lVar7) {
        do {
          cVar1 = func_0x00018063e940(param_1 + lVar2,param_1 + lVar2 + -1);
          lVar6 = lVar2;
          if (cVar1 != '\0') {
            lVar6 = lVar2 + -1;
          }
          param_1[lVar4] = param_1[lVar6];
          lVar2 = lVar6 * 2 + 2;
          bVar8 = lVar2 == lVar7;
          lVar4 = lVar6;
        } while (lVar2 < lVar7);
      }
      if (bVar8) {
        param_1[lVar6] = param_1[lVar2 + -1];
        lVar6 = lVar2 + -1;
      }
      while (0 < lVar6) {
        lVar2 = lVar6 + -1 >> 1;
        cVar1 = func_0x00018063e940(param_1 + lVar2,&stack0x00000078);
        if (cVar1 == '\0') break;
        param_1[lVar6] = param_1[lVar2];
        lVar6 = lVar2;
      }
      param_1[lVar6] = in_stack_00000078;
    }
    puVar3 = in_stack_00000068;
  }
  if (1 < lVar7) {
    puVar3 = puVar3 + -1;
    do {
      in_stack_00000068 = (undefined8 *)*puVar3;
      lVar7 = lVar7 + -1;
      lVar6 = 0;
      lVar2 = 2;
      *puVar3 = *param_1;
      bVar8 = lVar7 == 2;
      lVar4 = lVar6;
      if (2 < lVar7) {
        do {
          cVar1 = func_0x00018063e940(param_1 + lVar2,param_1 + lVar2 + -1);
          lVar6 = lVar2;
          if (cVar1 != '\0') {
            lVar6 = lVar2 + -1;
          }
          param_1[lVar4] = param_1[lVar6];
          lVar2 = lVar6 * 2 + 2;
          bVar8 = lVar2 == lVar7;
          lVar4 = lVar6;
        } while (lVar2 < lVar7);
      }
      if (bVar8) {
        param_1[lVar6] = param_1[lVar2 + -1];
        lVar6 = lVar2 + -1;
      }
      while (0 < lVar6) {
        lVar7 = lVar6 + -1 >> 1;
        cVar1 = func_0x00018063e940(param_1 + lVar7,&stack0x00000068);
        if (cVar1 == '\0') break;
        param_1[lVar6] = param_1[lVar7];
        lVar6 = lVar7;
      }
      puVar3 = puVar3 + -1;
      param_1[lVar6] = in_stack_00000068;
      lVar7 = (8 - (longlong)param_1) + (longlong)puVar3 >> 3;
    } while (1 < lVar7);
  }
  return;
}





