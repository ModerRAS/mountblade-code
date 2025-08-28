#include "TaleWorlds.Native.Split.h"

// 03_rendering_part657.c - 16 个函数

// 函数: void FUN_180640330(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)
void FUN_180640330(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 auStackX_18 [2];
  
  if (param_1 != param_2) {
    lVar5 = (longlong)param_2 - (longlong)param_1 >> 3;
    for (lVar2 = lVar5; lVar2 != 0; lVar2 = lVar2 >> 1) {
    }
    auStackX_18[0] = param_3;
    FUN_1806404d0();
    if (lVar5 < 0x1d) {
      if (param_1 != param_2) {
        for (puVar4 = param_1 + 1; puVar4 != param_2; puVar4 = puVar4 + 1) {
          auStackX_18[0] = *puVar4;
          puVar3 = puVar4;
          puVar6 = puVar4;
          while (puVar6 != param_1) {
            puVar6 = puVar6 + -1;
            cVar1 = func_0x00018063e940(auStackX_18,puVar6);
            if (cVar1 == '\0') break;
            *puVar3 = *puVar6;
            puVar3 = puVar3 + -1;
          }
          *puVar3 = auStackX_18[0];
        }
      }
      return;
    }
    puVar4 = param_1 + 0x1c;
    FUN_180640430(param_1,puVar4);
    if (puVar4 != param_2) {
      param_1 = param_1 + 0x1b;
      do {
        auStackX_18[0] = *puVar4;
        cVar1 = func_0x00018063e940(auStackX_18,param_1);
        puVar3 = param_1;
        puVar6 = puVar4;
        while (cVar1 != '\0') {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar6 = puVar6 + -1;
          cVar1 = func_0x00018063e940(auStackX_18,puVar3);
        }
        puVar4 = puVar4 + 1;
        param_1 = param_1 + 1;
        *puVar6 = auStackX_18[0];
      } while (puVar4 != param_2);
    }
  }
  return;
}





// 函数: void FUN_180640345(undefined8 *param_1,undefined8 *param_2)
void FUN_180640345(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 in_stack_00000050;
  
  lVar5 = (longlong)param_2 - (longlong)param_1 >> 3;
  for (lVar2 = lVar5; lVar2 != 0; lVar2 = lVar2 >> 1) {
  }
  FUN_1806404d0();
  if (0x1c < lVar5) {
    puVar4 = param_1 + 0x1c;
    FUN_180640430(param_1,puVar4);
    if (puVar4 != param_2) {
      param_1 = param_1 + 0x1b;
      do {
        in_stack_00000050 = *puVar4;
        cVar1 = func_0x00018063e940(&stack0x00000050,param_1);
        puVar3 = param_1;
        puVar6 = puVar4;
        while (cVar1 != '\0') {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar6 = puVar6 + -1;
          cVar1 = func_0x00018063e940(&stack0x00000050,puVar3);
        }
        puVar4 = puVar4 + 1;
        param_1 = param_1 + 1;
        *puVar6 = in_stack_00000050;
      } while (puVar4 != param_2);
    }
    return;
  }
  if (param_1 != param_2) {
    for (puVar4 = param_1 + 1; puVar4 != param_2; puVar4 = puVar4 + 1) {
      in_stack_00000050 = *puVar4;
      puVar3 = puVar4;
      puVar6 = puVar4;
      while (puVar6 != param_1) {
        puVar6 = puVar6 + -1;
        cVar1 = func_0x00018063e940(&stack0x00000050,puVar6);
        if (cVar1 == '\0') break;
        *puVar3 = *puVar6;
        puVar3 = puVar3 + -1;
      }
      *puVar3 = in_stack_00000050;
    }
  }
  return;
}





// 函数: void FUN_1806403a2(void)
void FUN_1806403a2(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RSI;
  undefined8 *puVar4;
  undefined8 *unaff_R14;
  undefined8 uStack0000000000000050;
  
  puVar3 = unaff_RSI + -1;
  do {
    uStack0000000000000050 = *unaff_RSI;
    cVar1 = func_0x00018063e940(&stack0x00000050,puVar3);
    puVar2 = puVar3;
    puVar4 = unaff_RSI;
    while (cVar1 != '\0') {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + -1;
      puVar4 = puVar4 + -1;
      cVar1 = func_0x00018063e940(&stack0x00000050,puVar2);
    }
    unaff_RSI = unaff_RSI + 1;
    puVar3 = puVar3 + 1;
    *puVar4 = uStack0000000000000050;
  } while (unaff_RSI != unaff_R14);
  return;
}





// 函数: void FUN_180640409(void)
void FUN_180640409(void)

{
  return;
}





// 函数: void FUN_18064041a(void)
void FUN_18064041a(void)

{
  return;
}





// 函数: void FUN_18064041b(undefined8 *param_1)
void FUN_18064041b(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *unaff_R14;
  undefined8 in_stack_00000030;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000050;
  
  if ((param_1 != unaff_R14) && (puVar3 = param_1 + 1, puVar3 != unaff_R14)) {
    uStack0000000000000040 = in_stack_00000030;
    do {
      uStack0000000000000050 = *puVar3;
      puVar2 = puVar3;
      puVar4 = puVar3;
      while (puVar2 != param_1) {
        puVar2 = puVar2 + -1;
        cVar1 = func_0x00018063e940(&stack0x00000050,puVar2);
        if (cVar1 == '\0') break;
        *puVar4 = *puVar2;
        puVar4 = puVar4 + -1;
      }
      puVar3 = puVar3 + 1;
      *puVar4 = uStack0000000000000050;
    } while (puVar3 != unaff_R14);
  }
  return;
}





// 函数: void FUN_180640430(undefined8 *param_1,undefined8 *param_2)
void FUN_180640430(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 auStackX_18 [2];
  
  if (param_1 != param_2) {
    for (puVar3 = param_1 + 1; puVar3 != param_2; puVar3 = puVar3 + 1) {
      auStackX_18[0] = *puVar3;
      puVar4 = puVar3;
      puVar2 = puVar3;
      while (puVar2 != param_1) {
        puVar2 = puVar2 + -1;
        cVar1 = func_0x00018063e940(auStackX_18,puVar2);
        if (cVar1 == '\0') break;
        *puVar4 = *puVar2;
        puVar4 = puVar4 + -1;
      }
      *puVar4 = auStackX_18[0];
    }
  }
  return;
}





// 函数: void FUN_180640445(undefined8 *param_1,undefined8 *param_2)
void FUN_180640445(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack0000000000000050;
  
  puVar3 = param_1 + 1;
  do {
    if (puVar3 == param_2) {
      return;
    }
    uStack0000000000000050 = *puVar3;
    puVar4 = puVar3;
    puVar2 = puVar3;
    while (puVar2 != param_1) {
      puVar2 = puVar2 + -1;
      cVar1 = func_0x00018063e940(&stack0x00000050,puVar2);
      if (cVar1 == '\0') break;
      *puVar4 = *puVar2;
      puVar4 = puVar4 + -1;
    }
    puVar3 = puVar3 + 1;
    *puVar4 = uStack0000000000000050;
  } while( true );
}





// 函数: void FUN_180640459(void)
void FUN_180640459(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined8 *unaff_RSI;
  undefined8 *puVar3;
  undefined8 *unaff_R14;
  undefined8 uStack0000000000000050;
  
  do {
    uStack0000000000000050 = *unaff_RSI;
    puVar2 = unaff_RSI;
    puVar3 = unaff_RSI;
    while (puVar2 != unaff_RBP) {
      puVar2 = puVar2 + -1;
      cVar1 = func_0x00018063e940(&stack0x00000050,puVar2);
      if (cVar1 == '\0') break;
      *puVar3 = *puVar2;
      puVar3 = puVar3 + -1;
    }
    unaff_RSI = unaff_RSI + 1;
    *puVar3 = uStack0000000000000050;
    if (unaff_RSI == unaff_R14) {
      return;
    }
  } while( true );
}





// 函数: void FUN_1806404c2(void)
void FUN_1806404c2(void)

{
  return;
}





// 函数: void FUN_1806404ce(void)
void FUN_1806404ce(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x000180640770)
// WARNING: Removing unreachable block (ram,0x000180640783)
// WARNING: Removing unreachable block (ram,0x0001806407a0)
// WARNING: Removing unreachable block (ram,0x0001806407b1)
// WARNING: Removing unreachable block (ram,0x0001806407b4)
// WARNING: Removing unreachable block (ram,0x0001806407cc)
// WARNING: Removing unreachable block (ram,0x0001806407ce)
// WARNING: Removing unreachable block (ram,0x0001806407db)
// WARNING: Removing unreachable block (ram,0x0001806407e0)
// WARNING: Removing unreachable block (ram,0x0001806407fc)
// WARNING: Removing unreachable block (ram,0x00018064080b)
// WARNING: Removing unreachable block (ram,0x000180640814)
// WARNING: Removing unreachable block (ram,0x000180640821)



// 函数: void FUN_1806404d0(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined1 *param_4)
void FUN_1806404d0(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 *puStackX_20;
  
  uVar3 = (longlong)param_2 - (longlong)param_1;
  puStackX_20 = param_4;
  do {
    if (((longlong)(uVar3 & 0xfffffffffffffff8) < 0xe1) || (param_3 < 1)) {
      if (param_3 != 0) {
        return;
      }
      lVar4 = (longlong)param_2 - (longlong)param_1 >> 3;
      puStackX_20 = param_4;
      if (1 < lVar4) {
        lVar8 = (lVar4 + -2 >> 1) + 1;
        lVar11 = lVar8 * 2 + 2;
        do {
          puStackX_20 = (undefined1 *)param_1[lVar8 + -1];
          lVar8 = lVar8 + -1;
          lVar11 = lVar11 + -2;
          lVar9 = lVar8;
          for (lVar10 = lVar11; lVar10 < lVar4; lVar10 = lVar10 * 2 + 2) {
            cVar2 = func_0x00018063e940(param_1 + lVar10,param_1 + lVar10 + -1);
            if (cVar2 != '\0') {
              lVar10 = lVar10 + -1;
            }
            param_1[lVar9] = param_1[lVar10];
            lVar9 = lVar10;
          }
          if (lVar10 == lVar4) {
            param_1[lVar9] = param_1[lVar10 + -1];
            lVar9 = lVar10 + -1;
          }
          while (lVar8 < lVar9) {
            lVar10 = lVar9 + -1 >> 1;
            cVar2 = func_0x00018063e940(param_1 + lVar10,&puStackX_20);
            if (cVar2 == '\0') break;
            param_1[lVar9] = param_1[lVar10];
            lVar9 = lVar10;
          }
          param_1[lVar9] = puStackX_20;
        } while (lVar8 != 0);
      }
      if (1 < lVar4) {
        param_2 = param_2 + -1;
        do {
          uVar1 = *param_2;
          lVar4 = lVar4 + -1;
          lVar11 = 0;
          lVar8 = 2;
          *param_2 = *param_1;
          bVar12 = lVar4 == 2;
          lVar9 = lVar11;
          if (2 < lVar4) {
            do {
              cVar2 = func_0x00018063e940(param_1 + lVar8,param_1 + lVar8 + -1);
              lVar11 = lVar8;
              if (cVar2 != '\0') {
                lVar11 = lVar8 + -1;
              }
              param_1[lVar9] = param_1[lVar11];
              lVar8 = lVar11 * 2 + 2;
              bVar12 = lVar8 == lVar4;
              lVar9 = lVar11;
            } while (lVar8 < lVar4);
          }
          if (bVar12) {
            param_1[lVar11] = param_1[lVar8 + -1];
            lVar11 = lVar8 + -1;
          }
          while (0 < lVar11) {
            lVar4 = lVar11 + -1 >> 1;
            cVar2 = func_0x00018063e940(param_1 + lVar4,&stack0x00000010);
            if (cVar2 == '\0') break;
            param_1[lVar11] = param_1[lVar4];
            lVar11 = lVar4;
          }
          param_2 = param_2 + -1;
          param_1[lVar11] = uVar1;
          lVar4 = (8 - (longlong)param_1) + (longlong)param_2 >> 3;
        } while (1 < lVar4);
      }
      return;
    }
    puVar7 = param_2 + -1;
    lVar4 = (longlong)param_2 - (longlong)param_1 >> 3;
    if (lVar4 < 0) {
      lVar4 = lVar4 + 1;
    }
    puVar5 = param_1 + (lVar4 >> 1);
    cVar2 = func_0x00018063e940(param_1,puVar5);
    if (cVar2 == '\0') {
      cVar2 = func_0x00018063e940(param_1,puVar7);
      puVar6 = param_1;
      if (cVar2 == '\0') {
        cVar2 = func_0x00018063e940(puVar5,puVar7);
        goto LAB_180640580;
      }
    }
    else {
      cVar2 = func_0x00018063e940(puVar5,puVar7);
      puVar6 = puVar5;
      if (cVar2 == '\0') {
        cVar2 = func_0x00018063e940(param_1,puVar7);
        puVar5 = param_1;
LAB_180640580:
        puVar6 = puVar5;
        if (cVar2 != '\0') {
          puVar6 = puVar7;
        }
      }
    }
    puStackX_20 = (undefined1 *)*puVar6;
    puVar7 = param_2;
    puVar5 = param_1;
    while( true ) {
      while (cVar2 = func_0x00018063e940(puVar5,&puStackX_20), cVar2 != '\0') {
        puVar5 = puVar5 + 1;
      }
      puVar7 = puVar7 + -1;
      cVar2 = func_0x00018063e940(&puStackX_20,puVar7);
      while (cVar2 != '\0') {
        puVar7 = puVar7 + -1;
        cVar2 = func_0x00018063e940(&puStackX_20,puVar7);
      }
      if (puVar7 <= puVar5) break;
      uVar1 = *puVar5;
      *puVar5 = *puVar7;
      puVar5 = puVar5 + 1;
      *puVar7 = uVar1;
    }
    param_3 = param_3 + -1;
    param_4 = &SUB_18063e940;
    FUN_1806404d0(puVar5,param_2,param_3);
    uVar3 = (longlong)puVar5 - (longlong)param_1;
    param_2 = puVar5;
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x000180640770)
// WARNING: Removing unreachable block (ram,0x000180640783)
// WARNING: Removing unreachable block (ram,0x0001806407a0)
// WARNING: Removing unreachable block (ram,0x0001806407b1)
// WARNING: Removing unreachable block (ram,0x0001806407b4)
// WARNING: Removing unreachable block (ram,0x0001806407cc)
// WARNING: Removing unreachable block (ram,0x0001806407ce)
// WARNING: Removing unreachable block (ram,0x0001806407db)
// WARNING: Removing unreachable block (ram,0x0001806407e0)
// WARNING: Removing unreachable block (ram,0x0001806407fc)
// WARNING: Removing unreachable block (ram,0x00018064080b)
// WARNING: Removing unreachable block (ram,0x000180640814)
// WARNING: Removing unreachable block (ram,0x000180640821)



// 函数: void FUN_1806404de(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined1 *param_4)
void FUN_1806404de(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong in_RAX;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 *in_stack_00000058;
  
  uVar3 = in_RAX - (longlong)param_1;
  do {
    if (((longlong)(uVar3 & 0xfffffffffffffff8) < 0xe1) || (param_3 < 1)) {
      if (param_3 != 0) {
        return;
      }
      lVar4 = (longlong)param_2 - (longlong)param_1 >> 3;
      in_stack_00000058 = param_4;
      if (1 < lVar4) {
        lVar8 = (lVar4 + -2 >> 1) + 1;
        lVar11 = lVar8 * 2 + 2;
        do {
          in_stack_00000058 = (undefined1 *)param_1[lVar8 + -1];
          lVar8 = lVar8 + -1;
          lVar11 = lVar11 + -2;
          lVar9 = lVar8;
          for (lVar10 = lVar11; lVar10 < lVar4; lVar10 = lVar10 * 2 + 2) {
            cVar2 = func_0x00018063e940(param_1 + lVar10,param_1 + lVar10 + -1);
            if (cVar2 != '\0') {
              lVar10 = lVar10 + -1;
            }
            param_1[lVar9] = param_1[lVar10];
            lVar9 = lVar10;
          }
          if (lVar10 == lVar4) {
            param_1[lVar9] = param_1[lVar10 + -1];
            lVar9 = lVar10 + -1;
          }
          while (lVar8 < lVar9) {
            lVar10 = lVar9 + -1 >> 1;
            cVar2 = func_0x00018063e940(param_1 + lVar10,&stack0x00000058);
            if (cVar2 == '\0') break;
            param_1[lVar9] = param_1[lVar10];
            lVar9 = lVar10;
          }
          param_1[lVar9] = in_stack_00000058;
        } while (lVar8 != 0);
      }
      if (1 < lVar4) {
        param_2 = param_2 + -1;
        do {
          uVar1 = *param_2;
          lVar4 = lVar4 + -1;
          lVar11 = 0;
          lVar8 = 2;
          *param_2 = *param_1;
          bVar12 = lVar4 == 2;
          lVar9 = lVar11;
          if (2 < lVar4) {
            do {
              cVar2 = func_0x00018063e940(param_1 + lVar8,param_1 + lVar8 + -1);
              lVar11 = lVar8;
              if (cVar2 != '\0') {
                lVar11 = lVar8 + -1;
              }
              param_1[lVar9] = param_1[lVar11];
              lVar8 = lVar11 * 2 + 2;
              bVar12 = lVar8 == lVar4;
              lVar9 = lVar11;
            } while (lVar8 < lVar4);
          }
          if (bVar12) {
            param_1[lVar11] = param_1[lVar8 + -1];
            lVar11 = lVar8 + -1;
          }
          while (0 < lVar11) {
            lVar4 = lVar11 + -1 >> 1;
            cVar2 = func_0x00018063e940(param_1 + lVar4,&stack0x00000048);
            if (cVar2 == '\0') break;
            param_1[lVar11] = param_1[lVar4];
            lVar11 = lVar4;
          }
          param_2 = param_2 + -1;
          param_1[lVar11] = uVar1;
          lVar4 = (8 - (longlong)param_1) + (longlong)param_2 >> 3;
        } while (1 < lVar4);
      }
      return;
    }
    puVar7 = param_2 + -1;
    lVar4 = (longlong)param_2 - (longlong)param_1 >> 3;
    if (lVar4 < 0) {
      lVar4 = lVar4 + 1;
    }
    puVar5 = param_1 + (lVar4 >> 1);
    cVar2 = func_0x00018063e940(param_1,puVar5);
    if (cVar2 == '\0') {
      cVar2 = func_0x00018063e940(param_1,puVar7);
      puVar6 = param_1;
      if (cVar2 == '\0') {
        cVar2 = func_0x00018063e940(puVar5,puVar7);
        goto LAB_180640580;
      }
    }
    else {
      cVar2 = func_0x00018063e940(puVar5,puVar7);
      puVar6 = puVar5;
      if (cVar2 == '\0') {
        cVar2 = func_0x00018063e940(param_1,puVar7);
        puVar5 = param_1;
LAB_180640580:
        puVar6 = puVar5;
        if (cVar2 != '\0') {
          puVar6 = puVar7;
        }
      }
    }
    in_stack_00000058 = (undefined1 *)*puVar6;
    puVar7 = param_2;
    puVar5 = param_1;
    while( true ) {
      while (cVar2 = func_0x00018063e940(puVar5,&stack0x00000058), cVar2 != '\0') {
        puVar5 = puVar5 + 1;
      }
      puVar7 = puVar7 + -1;
      cVar2 = func_0x00018063e940(&stack0x00000058,puVar7);
      while (cVar2 != '\0') {
        puVar7 = puVar7 + -1;
        cVar2 = func_0x00018063e940(&stack0x00000058,puVar7);
      }
      if (puVar7 <= puVar5) break;
      uVar1 = *puVar5;
      *puVar5 = *puVar7;
      puVar5 = puVar5 + 1;
      *puVar7 = uVar1;
    }
    param_3 = param_3 + -1;
    param_4 = &SUB_18063e940;
    FUN_1806404d0(puVar5,param_2,param_3);
    uVar3 = (longlong)puVar5 - (longlong)param_1;
    param_2 = puVar5;
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x000180640770)
// WARNING: Removing unreachable block (ram,0x000180640783)
// WARNING: Removing unreachable block (ram,0x0001806407a0)
// WARNING: Removing unreachable block (ram,0x0001806407b1)
// WARNING: Removing unreachable block (ram,0x0001806407b4)
// WARNING: Removing unreachable block (ram,0x0001806407cc)
// WARNING: Removing unreachable block (ram,0x0001806407ce)
// WARNING: Removing unreachable block (ram,0x0001806407db)
// WARNING: Removing unreachable block (ram,0x0001806407e0)
// WARNING: Removing unreachable block (ram,0x0001806407fc)
// WARNING: Removing unreachable block (ram,0x00018064080b)
// WARNING: Removing unreachable block (ram,0x000180640814)
// WARNING: Removing unreachable block (ram,0x000180640821)



// 函数: void FUN_1806404ff(void)
void FUN_1806404ff(void)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *unaff_RBP;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *unaff_RSI;
  longlong lVar8;
  longlong lVar9;
  undefined1 *in_R9;
  longlong lVar10;
  longlong unaff_R14;
  bool bVar11;
  undefined1 *in_stack_00000058;
  
  do {
    puVar7 = unaff_RBP;
    if (unaff_R14 < 1) break;
    puVar7 = unaff_RBP + -1;
    lVar3 = (longlong)unaff_RBP - (longlong)unaff_RSI >> 3;
    if (lVar3 < 0) {
      lVar3 = lVar3 + 1;
    }
    puVar5 = unaff_RSI + (lVar3 >> 1);
    cVar2 = func_0x00018063e940();
    if (cVar2 == '\0') {
      cVar2 = func_0x00018063e940();
      puVar4 = unaff_RSI;
      if (cVar2 == '\0') {
        cVar2 = func_0x00018063e940(puVar5,puVar7);
        goto LAB_180640580;
      }
    }
    else {
      cVar2 = func_0x00018063e940(puVar5,puVar7);
      puVar4 = puVar5;
      if (cVar2 == '\0') {
        cVar2 = func_0x00018063e940();
        puVar5 = unaff_RSI;
LAB_180640580:
        puVar4 = puVar5;
        if (cVar2 != '\0') {
          puVar4 = puVar7;
        }
      }
    }
    in_stack_00000058 = (undefined1 *)*puVar4;
    puVar5 = unaff_RBP;
    puVar7 = unaff_RSI;
    while( true ) {
      while (cVar2 = func_0x00018063e940(puVar7,&stack0x00000058), cVar2 != '\0') {
        puVar7 = puVar7 + 1;
      }
      puVar5 = puVar5 + -1;
      cVar2 = func_0x00018063e940(&stack0x00000058,puVar5);
      while (cVar2 != '\0') {
        puVar5 = puVar5 + -1;
        cVar2 = func_0x00018063e940(&stack0x00000058,puVar5);
      }
      if (puVar5 <= puVar7) break;
      uVar1 = *puVar7;
      *puVar7 = *puVar5;
      puVar7 = puVar7 + 1;
      *puVar5 = uVar1;
    }
    unaff_R14 = unaff_R14 + -1;
    in_R9 = &SUB_18063e940;
    FUN_1806404d0(puVar7,unaff_RBP,unaff_R14);
    unaff_RBP = puVar7;
  } while (0xe0 < (longlong)((longlong)puVar7 - (longlong)unaff_RSI & 0xfffffffffffffff8U));
  if (unaff_R14 != 0) {
    return;
  }
  lVar3 = (longlong)puVar7 - (longlong)unaff_RSI >> 3;
  in_stack_00000058 = in_R9;
  if (1 < lVar3) {
    lVar6 = (lVar3 + -2 >> 1) + 1;
    lVar10 = lVar6 * 2 + 2;
    do {
      in_stack_00000058 = (undefined1 *)unaff_RSI[lVar6 + -1];
      lVar6 = lVar6 + -1;
      lVar10 = lVar10 + -2;
      lVar8 = lVar6;
      for (lVar9 = lVar10; lVar9 < lVar3; lVar9 = lVar9 * 2 + 2) {
        cVar2 = func_0x00018063e940(unaff_RSI + lVar9,unaff_RSI + lVar9 + -1);
        if (cVar2 != '\0') {
          lVar9 = lVar9 + -1;
        }
        unaff_RSI[lVar8] = unaff_RSI[lVar9];
        lVar8 = lVar9;
      }
      if (lVar9 == lVar3) {
        unaff_RSI[lVar8] = unaff_RSI[lVar9 + -1];
        lVar8 = lVar9 + -1;
      }
      while (lVar6 < lVar8) {
        lVar9 = lVar8 + -1 >> 1;
        cVar2 = func_0x00018063e940(unaff_RSI + lVar9,&stack0x00000058);
        if (cVar2 == '\0') break;
        unaff_RSI[lVar8] = unaff_RSI[lVar9];
        lVar8 = lVar9;
      }
      unaff_RSI[lVar8] = in_stack_00000058;
    } while (lVar6 != 0);
  }
  if (1 < lVar3) {
    puVar7 = puVar7 + -1;
    do {
      uVar1 = *puVar7;
      lVar3 = lVar3 + -1;
      lVar10 = 0;
      lVar6 = 2;
      *puVar7 = *unaff_RSI;
      bVar11 = lVar3 == 2;
      lVar8 = lVar10;
      if (2 < lVar3) {
        do {
          cVar2 = func_0x00018063e940(unaff_RSI + lVar6,unaff_RSI + lVar6 + -1);
          lVar10 = lVar6;
          if (cVar2 != '\0') {
            lVar10 = lVar6 + -1;
          }
          unaff_RSI[lVar8] = unaff_RSI[lVar10];
          lVar6 = lVar10 * 2 + 2;
          bVar11 = lVar6 == lVar3;
          lVar8 = lVar10;
        } while (lVar6 < lVar3);
      }
      if (bVar11) {
        unaff_RSI[lVar10] = unaff_RSI[lVar6 + -1];
        lVar10 = lVar6 + -1;
      }
      while (0 < lVar10) {
        lVar3 = lVar10 + -1 >> 1;
        cVar2 = func_0x00018063e940(unaff_RSI + lVar3,&stack0x00000048);
        if (cVar2 == '\0') break;
        unaff_RSI[lVar10] = unaff_RSI[lVar3];
        lVar10 = lVar3;
      }
      puVar7 = puVar7 + -1;
      unaff_RSI[lVar10] = uVar1;
      lVar3 = (8 - (longlong)unaff_RSI) + (longlong)puVar7 >> 3;
    } while (1 < lVar3);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000180640770)
// WARNING: Removing unreachable block (ram,0x000180640783)
// WARNING: Removing unreachable block (ram,0x0001806407a0)
// WARNING: Removing unreachable block (ram,0x0001806407b1)
// WARNING: Removing unreachable block (ram,0x0001806407b4)
// WARNING: Removing unreachable block (ram,0x0001806407cc)
// WARNING: Removing unreachable block (ram,0x0001806407ce)
// WARNING: Removing unreachable block (ram,0x0001806407db)
// WARNING: Removing unreachable block (ram,0x0001806407e0)
// WARNING: Removing unreachable block (ram,0x0001806407fc)
// WARNING: Removing unreachable block (ram,0x00018064080b)
// WARNING: Removing unreachable block (ram,0x000180640814)
// WARNING: Removing unreachable block (ram,0x000180640821)



// 函数: void FUN_180640635(void)
void FUN_180640635(void)

{
  undefined8 uVar1;
  char cVar2;
  longlong unaff_RBP;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RSI;
  longlong lVar5;
  longlong lVar6;
  undefined8 in_R9;
  longlong lVar7;
  longlong unaff_R14;
  longlong lVar8;
  bool bVar9;
  undefined8 uStack0000000000000058;
  
  if (unaff_R14 != 0) {
    return;
  }
  lVar8 = unaff_RBP - (longlong)unaff_RSI >> 3;
  uStack0000000000000058 = in_R9;
  if (1 < lVar8) {
    lVar3 = (lVar8 + -2 >> 1) + 1;
    lVar7 = lVar3 * 2 + 2;
    do {
      uStack0000000000000058 = unaff_RSI[lVar3 + -1];
      lVar3 = lVar3 + -1;
      lVar7 = lVar7 + -2;
      lVar5 = lVar3;
      for (lVar6 = lVar7; lVar6 < lVar8; lVar6 = lVar6 * 2 + 2) {
        cVar2 = func_0x00018063e940(unaff_RSI + lVar6,unaff_RSI + lVar6 + -1);
        if (cVar2 != '\0') {
          lVar6 = lVar6 + -1;
        }
        unaff_RSI[lVar5] = unaff_RSI[lVar6];
        lVar5 = lVar6;
      }
      if (lVar6 == lVar8) {
        unaff_RSI[lVar5] = unaff_RSI[lVar6 + -1];
        lVar5 = lVar6 + -1;
      }
      while (lVar3 < lVar5) {
        lVar6 = lVar5 + -1 >> 1;
        cVar2 = func_0x00018063e940(unaff_RSI + lVar6,&stack0x00000058);
        if (cVar2 == '\0') break;
        unaff_RSI[lVar5] = unaff_RSI[lVar6];
        lVar5 = lVar6;
      }
      unaff_RSI[lVar5] = uStack0000000000000058;
    } while (lVar3 != 0);
  }
  if (1 < lVar8) {
    puVar4 = (undefined8 *)(unaff_RBP + -8);
    do {
      uVar1 = *puVar4;
      lVar8 = lVar8 + -1;
      lVar7 = 0;
      lVar3 = 2;
      *puVar4 = *unaff_RSI;
      bVar9 = lVar8 == 2;
      lVar5 = lVar7;
      if (2 < lVar8) {
        do {
          cVar2 = func_0x00018063e940(unaff_RSI + lVar3,unaff_RSI + lVar3 + -1);
          lVar7 = lVar3;
          if (cVar2 != '\0') {
            lVar7 = lVar3 + -1;
          }
          unaff_RSI[lVar5] = unaff_RSI[lVar7];
          lVar3 = lVar7 * 2 + 2;
          bVar9 = lVar3 == lVar8;
          lVar5 = lVar7;
        } while (lVar3 < lVar8);
      }
      if (bVar9) {
        unaff_RSI[lVar7] = unaff_RSI[lVar3 + -1];
        lVar7 = lVar3 + -1;
      }
      while (0 < lVar7) {
        lVar8 = lVar7 + -1 >> 1;
        cVar2 = func_0x00018063e940(unaff_RSI + lVar8,&stack0x00000048);
        if (cVar2 == '\0') break;
        unaff_RSI[lVar7] = unaff_RSI[lVar8];
        lVar7 = lVar8;
      }
      puVar4 = puVar4 + -1;
      unaff_RSI[lVar7] = uVar1;
      lVar8 = (8 - (longlong)unaff_RSI) + (longlong)puVar4 >> 3;
    } while (1 < lVar8);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000180640770)
// WARNING: Removing unreachable block (ram,0x000180640783)
// WARNING: Removing unreachable block (ram,0x0001806407a0)
// WARNING: Removing unreachable block (ram,0x0001806407b1)
// WARNING: Removing unreachable block (ram,0x0001806407b4)
// WARNING: Removing unreachable block (ram,0x0001806407cc)
// WARNING: Removing unreachable block (ram,0x0001806407ce)
// WARNING: Removing unreachable block (ram,0x0001806407db)
// WARNING: Removing unreachable block (ram,0x0001806407e0)
// WARNING: Removing unreachable block (ram,0x0001806407fc)
// WARNING: Removing unreachable block (ram,0x00018064080b)
// WARNING: Removing unreachable block (ram,0x000180640814)
// WARNING: Removing unreachable block (ram,0x000180640821)



// 函数: void FUN_18064063f(void)
void FUN_18064063f(void)

{
  undefined8 uVar1;
  char cVar2;
  longlong unaff_RBP;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RSI;
  longlong lVar5;
  longlong lVar6;
  undefined8 in_R9;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined8 uStack0000000000000058;
  
  lVar8 = unaff_RBP - (longlong)unaff_RSI >> 3;
  uStack0000000000000058 = in_R9;
  if (1 < lVar8) {
    lVar3 = (lVar8 + -2 >> 1) + 1;
    lVar7 = lVar3 * 2 + 2;
    do {
      uStack0000000000000058 = unaff_RSI[lVar3 + -1];
      lVar3 = lVar3 + -1;
      lVar7 = lVar7 + -2;
      lVar5 = lVar3;
      for (lVar6 = lVar7; lVar6 < lVar8; lVar6 = lVar6 * 2 + 2) {
        cVar2 = func_0x00018063e940(unaff_RSI + lVar6,unaff_RSI + lVar6 + -1);
        if (cVar2 != '\0') {
          lVar6 = lVar6 + -1;
        }
        unaff_RSI[lVar5] = unaff_RSI[lVar6];
        lVar5 = lVar6;
      }
      if (lVar6 == lVar8) {
        unaff_RSI[lVar5] = unaff_RSI[lVar6 + -1];
        lVar5 = lVar6 + -1;
      }
      while (lVar3 < lVar5) {
        lVar6 = lVar5 + -1 >> 1;
        cVar2 = func_0x00018063e940(unaff_RSI + lVar6,&stack0x00000058);
        if (cVar2 == '\0') break;
        unaff_RSI[lVar5] = unaff_RSI[lVar6];
        lVar5 = lVar6;
      }
      unaff_RSI[lVar5] = uStack0000000000000058;
    } while (lVar3 != 0);
  }
  if (1 < lVar8) {
    puVar4 = (undefined8 *)(unaff_RBP + -8);
    do {
      uVar1 = *puVar4;
      lVar8 = lVar8 + -1;
      lVar7 = 0;
      lVar3 = 2;
      *puVar4 = *unaff_RSI;
      bVar9 = lVar8 == 2;
      lVar5 = lVar7;
      if (2 < lVar8) {
        do {
          cVar2 = func_0x00018063e940(unaff_RSI + lVar3,unaff_RSI + lVar3 + -1);
          lVar7 = lVar3;
          if (cVar2 != '\0') {
            lVar7 = lVar3 + -1;
          }
          unaff_RSI[lVar5] = unaff_RSI[lVar7];
          lVar3 = lVar7 * 2 + 2;
          bVar9 = lVar3 == lVar8;
          lVar5 = lVar7;
        } while (lVar3 < lVar8);
      }
      if (bVar9) {
        unaff_RSI[lVar7] = unaff_RSI[lVar3 + -1];
        lVar7 = lVar3 + -1;
      }
      while (0 < lVar7) {
        lVar8 = lVar7 + -1 >> 1;
        cVar2 = func_0x00018063e940(unaff_RSI + lVar8,&stack0x00000048);
        if (cVar2 == '\0') break;
        unaff_RSI[lVar7] = unaff_RSI[lVar8];
        lVar7 = lVar8;
      }
      puVar4 = puVar4 + -1;
      unaff_RSI[lVar7] = uVar1;
      lVar8 = (8 - (longlong)unaff_RSI) + (longlong)puVar4 >> 3;
    } while (1 < lVar8);
  }
  return;
}





