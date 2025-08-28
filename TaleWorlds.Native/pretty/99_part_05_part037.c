#include "TaleWorlds.Native.Split.h"

// 99_part_05_part037.c - 10 个函数

// 函数: void FUN_1802ef740(longlong param_1,char param_2)
void FUN_1802ef740(longlong param_1,char param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar4 = 0;
  iVar1 = (int)(*(longlong *)(param_1 + 0x1e8) - *(longlong *)(param_1 + 0x1e0) >> 3);
  uVar3 = uVar4;
  if (0 < iVar1) {
    do {
      iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x1e0) + uVar3 * 8) + 0x98))();
      if (iVar2 == 4) {
        *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x1e0) + uVar3 * 8) + 0x159) = 1;
      }
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)iVar1);
  }
  if ((param_2 != '\0') &&
     (uVar3 = uVar4, *(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3 != 0)) {
    do {
      FUN_1802ef740(*(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + uVar4),param_2);
      uVar4 = uVar4 + 8;
      uVar5 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar5;
    } while ((ulonglong)(longlong)(int)uVar5 <
             (ulonglong)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3));
  }
  return;
}






// 函数: void FUN_1802ef770(void)
void FUN_1802ef770(void)

{
  int in_EAX;
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  char unaff_R14B;
  
  if (0 < in_EAX) {
    uVar2 = unaff_RSI & 0xffffffff;
    do {
      iVar1 = (**(code **)(**(longlong **)(*(longlong *)(unaff_RDI + 0x1e0) + uVar2 * 8) + 0x98))();
      if (iVar1 == 4) {
        *(undefined1 *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x1e0) + uVar2 * 8) + 0x159) = 1;
      }
      uVar2 = uVar2 + 1;
    } while ((longlong)uVar2 < (longlong)in_EAX);
  }
  if ((unaff_R14B != '\0') &&
     (uVar2 = unaff_RSI,
     *(longlong *)(unaff_RDI + 0x1c8) - *(longlong *)(unaff_RDI + 0x1c0) >> 3 != 0)) {
    do {
      FUN_1802ef740(*(undefined8 *)(*(longlong *)(unaff_RDI + 0x1c0) + unaff_RSI),unaff_R14B);
      unaff_RSI = unaff_RSI + 8;
      uVar3 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar3;
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)(*(longlong *)(unaff_RDI + 0x1c8) - *(longlong *)(unaff_RDI + 0x1c0) >> 3));
  }
  return;
}






// 函数: void FUN_1802ef7bd(void)
void FUN_1802ef7bd(void)

{
  uint uVar1;
  ulonglong unaff_RSI;
  ulonglong uVar2;
  longlong unaff_RDI;
  undefined1 unaff_R14B;
  
  uVar2 = unaff_RSI;
  if (*(longlong *)(unaff_RDI + 0x1c8) - *(longlong *)(unaff_RDI + 0x1c0) >> 3 != 0) {
    do {
      FUN_1802ef740(*(undefined8 *)(*(longlong *)(unaff_RDI + 0x1c0) + unaff_RSI),unaff_R14B);
      unaff_RSI = unaff_RSI + 8;
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while ((ulonglong)(longlong)(int)uVar1 <
             (ulonglong)(*(longlong *)(unaff_RDI + 0x1c8) - *(longlong *)(unaff_RDI + 0x1c0) >> 3));
  }
  return;
}






// 函数: void FUN_1802ef830(longlong param_1,char param_2)
void FUN_1802ef830(longlong param_1,char param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar4 = 0;
  iVar1 = (int)(*(longlong *)(param_1 + 0x1e8) - *(longlong *)(param_1 + 0x1e0) >> 3);
  uVar3 = uVar4;
  if (0 < iVar1) {
    do {
      iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x1e0) + uVar3 * 8) + 0x98))();
      if (iVar2 == 4) {
        FUN_1802ae420(*(undefined8 *)(*(longlong *)(param_1 + 0x1e0) + uVar3 * 8));
      }
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)iVar1);
  }
  if ((param_2 != '\0') &&
     (uVar3 = uVar4, *(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3 != 0)) {
    do {
      FUN_1802ef830(*(undefined8 *)(uVar4 + *(longlong *)(param_1 + 0x1c0)),param_2);
      uVar4 = uVar4 + 8;
      uVar5 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar5;
    } while ((ulonglong)(longlong)(int)uVar5 <
             (ulonglong)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3));
  }
  return;
}






// 函数: void FUN_1802ef860(void)
void FUN_1802ef860(void)

{
  int in_EAX;
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  char unaff_R14B;
  
  if (0 < in_EAX) {
    uVar2 = unaff_RSI & 0xffffffff;
    do {
      iVar1 = (**(code **)(**(longlong **)(*(longlong *)(unaff_RDI + 0x1e0) + uVar2 * 8) + 0x98))();
      if (iVar1 == 4) {
        FUN_1802ae420(*(undefined8 *)(*(longlong *)(unaff_RDI + 0x1e0) + uVar2 * 8));
      }
      uVar2 = uVar2 + 1;
    } while ((longlong)uVar2 < (longlong)in_EAX);
  }
  if ((unaff_R14B != '\0') &&
     (uVar2 = unaff_RSI,
     *(longlong *)(unaff_RDI + 0x1c8) - *(longlong *)(unaff_RDI + 0x1c0) >> 3 != 0)) {
    do {
      FUN_1802ef830(*(undefined8 *)(unaff_RSI + *(longlong *)(unaff_RDI + 0x1c0)),unaff_R14B);
      unaff_RSI = unaff_RSI + 8;
      uVar3 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar3;
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)(*(longlong *)(unaff_RDI + 0x1c8) - *(longlong *)(unaff_RDI + 0x1c0) >> 3));
  }
  return;
}






// 函数: void FUN_1802ef8ab(void)
void FUN_1802ef8ab(void)

{
  uint uVar1;
  ulonglong unaff_RSI;
  ulonglong uVar2;
  longlong unaff_RDI;
  undefined1 unaff_R14B;
  
  uVar2 = unaff_RSI;
  if (*(longlong *)(unaff_RDI + 0x1c8) - *(longlong *)(unaff_RDI + 0x1c0) >> 3 != 0) {
    do {
      FUN_1802ef830(*(undefined8 *)(unaff_RSI + *(longlong *)(unaff_RDI + 0x1c0)),unaff_R14B);
      unaff_RSI = unaff_RSI + 8;
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while ((ulonglong)(longlong)(int)uVar1 <
             (ulonglong)(*(longlong *)(unaff_RDI + 0x1c8) - *(longlong *)(unaff_RDI + 0x1c0) >> 3));
  }
  return;
}






// 函数: void FUN_1802ef920(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)
void FUN_1802ef920(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x268);
  if (param_2 == (longlong *)0x0) {
    FUN_1802ed990(param_1,1,param_3,param_4,0xfffffffffffffffe);
  }
  else {
    (**(code **)(*param_2 + 0x28))(param_2);
    plVar1 = *(longlong **)(param_1 + 0x268);
    *(longlong **)(param_1 + 0x268) = param_2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    FUN_180627be0(param_1 + 0x240,*(longlong *)(param_1 + 0x268) + 0x288);
  }
  if ((lVar5 != *(longlong *)(param_1 + 0x268)) &&
     (iVar3 = (int)(*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3), 0 < iVar3))
  {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x268);
      if (lVar2 == 0) {
        lVar4 = 0;
      }
      else if ((-1 < *(char *)(lVar2 + 0x2e8)) ||
              (lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0xb0) + lVar5 * 8), lVar4 == 0)) {
        lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0xf0) + lVar5 * 8);
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf0) + lVar5 * 8);
      (**(code **)(*plVar1 + 0x88))(plVar1,lVar4);
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  return;
}






// 函数: void FUN_1802efa20(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)
void FUN_1802efa20(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  lVar6 = *(longlong *)(param_1 + 0x1c0);
  uVar7 = 0;
  uVar9 = uVar7;
  if (*(longlong *)(param_1 + 0x1c8) - lVar6 >> 3 != 0) {
    do {
      lVar2 = *(longlong *)(uVar7 + *(longlong *)(param_2 + 0x1c0));
      if (((*(uint *)(lVar2 + 0x2ac) & 0x20000) == 0) && (*(longlong *)(lVar2 + 0x268) != 0)) {
        FUN_1802efa20(*(undefined8 *)(uVar7 + lVar6));
      }
      lVar6 = *(longlong *)(param_1 + 0x1c0);
      uVar8 = (int)uVar9 + 1;
      uVar7 = uVar7 + 8;
      uVar9 = (ulonglong)uVar8;
    } while ((ulonglong)(longlong)(int)uVar8 <
             (ulonglong)(*(longlong *)(param_1 + 0x1c8) - lVar6 >> 3));
  }
  plVar3 = *(longlong **)(param_2 + 0x268);
  lVar2 = *(longlong *)(param_1 + 0x268);
  if (plVar3 == (longlong *)0x0) {
    FUN_1802ed990(param_1,1,lVar6,param_4,0xfffffffffffffffe);
  }
  else {
    (**(code **)(*plVar3 + 0x28))(plVar3);
    plVar1 = *(longlong **)(param_1 + 0x268);
    *(longlong **)(param_1 + 0x268) = plVar3;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    FUN_180627be0(param_1 + 0x240,*(longlong *)(param_1 + 0x268) + 0x288);
  }
  if ((lVar2 != *(longlong *)(param_1 + 0x268)) &&
     (iVar4 = (int)(*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3), 0 < iVar4))
  {
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x268);
      if (lVar2 == 0) {
        lVar5 = 0;
      }
      else if ((-1 < *(char *)(lVar2 + 0x2e8)) ||
              (lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0xb0) + lVar6 * 8), lVar5 == 0)) {
        lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0xf0) + lVar6 * 8);
      }
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xf0) + lVar6 * 8);
      (**(code **)(*plVar3 + 0x88))(plVar3,lVar5);
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar4);
  }
  return;
}






// 函数: void FUN_1802efa51(undefined8 param_1,undefined8 param_2,longlong param_3)
void FUN_1802efa51(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong unaff_RBP;
  longlong unaff_RSI;
  uint unaff_EDI;
  
  uVar7 = (ulonglong)unaff_EDI;
  do {
    lVar6 = *(longlong *)(uVar7 + *(longlong *)(unaff_RBP + 0x1c0));
    if (((*(uint *)(lVar6 + 0x2ac) & 0x20000) == 0) && (*(longlong *)(lVar6 + 0x268) != 0)) {
      FUN_1802efa20(*(undefined8 *)(uVar7 + param_3));
    }
    param_3 = *(longlong *)(unaff_RSI + 0x1c0);
    unaff_EDI = unaff_EDI + 1;
    uVar7 = uVar7 + 8;
  } while ((ulonglong)(longlong)(int)unaff_EDI <
           (ulonglong)(*(longlong *)(unaff_RSI + 0x1c8) - param_3 >> 3));
  plVar3 = *(longlong **)(unaff_RBP + 0x268);
  lVar6 = *(longlong *)(unaff_RSI + 0x268);
  if (plVar3 == (longlong *)0x0) {
    FUN_1802ed990();
  }
  else {
    (**(code **)(*plVar3 + 0x28))(plVar3);
    plVar1 = *(longlong **)(unaff_RSI + 0x268);
    *(longlong **)(unaff_RSI + 0x268) = plVar3;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    FUN_180627be0(unaff_RSI + 0x240,*(longlong *)(unaff_RSI + 0x268) + 0x288);
  }
  if ((lVar6 != *(longlong *)(unaff_RSI + 0x268)) &&
     (iVar4 = (int)(*(longlong *)(unaff_RSI + 0xf8) - *(longlong *)(unaff_RSI + 0xf0) >> 3),
     0 < iVar4)) {
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(unaff_RSI + 0x268);
      if (lVar2 == 0) {
        lVar5 = 0;
      }
      else if ((-1 < *(char *)(lVar2 + 0x2e8)) ||
              (lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0xb0) + lVar6 * 8), lVar5 == 0)) {
        lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0xf0) + lVar6 * 8);
      }
      plVar3 = *(longlong **)(*(longlong *)(unaff_RSI + 0xf0) + lVar6 * 8);
      (**(code **)(*plVar3 + 0x88))(plVar3,lVar5);
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar4);
  }
  return;
}






// 函数: void FUN_1802efab2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1802efab2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined8 uVar7;
  undefined8 uStack0000000000000040;
  undefined8 in_stack_00000048;
  
  plVar3 = *(longlong **)(unaff_RBP + 0x268);
  uVar7 = 0xfffffffffffffffe;
  uStack0000000000000040 = in_stack_00000048;
  lVar6 = *(longlong *)(unaff_RSI + 0x268);
  if (plVar3 == (longlong *)0x0) {
    FUN_1802ed990();
  }
  else {
    (**(code **)(*plVar3 + 0x28))(plVar3);
    plVar1 = *(longlong **)(unaff_RSI + 0x268);
    *(longlong **)(unaff_RSI + 0x268) = plVar3;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    FUN_180627be0(unaff_RSI + 0x240,*(longlong *)(unaff_RSI + 0x268) + 0x288,param_3,param_4,uVar7);
  }
  if ((lVar6 != *(longlong *)(unaff_RSI + 0x268)) &&
     (iVar4 = (int)(*(longlong *)(unaff_RSI + 0xf8) - *(longlong *)(unaff_RSI + 0xf0) >> 3),
     0 < iVar4)) {
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(unaff_RSI + 0x268);
      if (lVar2 == 0) {
        lVar5 = 0;
      }
      else if ((-1 < *(char *)(lVar2 + 0x2e8)) ||
              (lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0xb0) + lVar6 * 8), lVar5 == 0)) {
        lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0xf0) + lVar6 * 8);
      }
      plVar3 = *(longlong **)(*(longlong *)(unaff_RSI + 0xf0) + lVar6 * 8);
      (**(code **)(*plVar3 + 0x88))(plVar3,lVar5);
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




