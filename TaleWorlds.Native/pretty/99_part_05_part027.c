#include "TaleWorlds.Native.Split.h"

// 99_part_05_part027.c - 7 个函数

// 函数: void FUN_1802e9180(longlong param_1,undefined8 param_2,char param_3,undefined4 param_4)
void FUN_1802e9180(longlong param_1,undefined8 param_2,char param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  
  uVar7 = 0;
  uVar6 = uVar7;
  uVar12 = uVar7;
  if (*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3 != 0) {
    do {
      plVar1 = *(longlong **)(uVar6 + *(longlong *)(param_1 + 0xf0));
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2,param_4);
      uVar11 = (int)uVar12 + 1;
      uVar6 = uVar6 + 8;
      uVar12 = (ulonglong)uVar11;
    } while ((ulonglong)(longlong)(int)uVar11 <
             (ulonglong)(*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3));
  }
  if ((param_3 != '\0') &&
     (uVar6 = uVar7, *(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3 != 0)) {
    do {
      FUN_1802e9180(*(undefined8 *)(uVar7 + *(longlong *)(param_1 + 0x1c0)),param_2,1,param_4);
      uVar7 = uVar7 + 8;
      uVar11 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar11;
    } while ((ulonglong)(longlong)(int)uVar11 <
             (ulonglong)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3));
  }
  lVar2 = *(longlong *)(param_1 + 0x260);
  if (lVar2 == 0) {
    return;
  }
  iVar5 = 0;
  if (*(longlong *)(lVar2 + 0x1b0) - *(longlong *)(lVar2 + 0x1a8) >> 3 != 0) {
    lVar9 = 0;
    do {
      plVar1 = *(longlong **)(lVar9 + *(longlong *)(lVar2 + 0x1a8));
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2,param_4);
      lVar9 = lVar9 + 8;
      iVar5 = iVar5 + 1;
    } while ((ulonglong)(longlong)iVar5 <
             (ulonglong)(*(longlong *)(lVar2 + 0x1b0) - *(longlong *)(lVar2 + 0x1a8) >> 3));
  }
  iVar5 = 0;
  if ('\0' < *(char *)(lVar2 + 0x20)) {
    lVar9 = *(longlong *)(lVar2 + 0x18);
    lVar8 = 0;
    do {
      lVar3 = *(longlong *)(lVar8 + 0xb0 + lVar9);
      iVar4 = 0;
      if (*(longlong *)(lVar8 + 0xb8 + lVar9) - lVar3 >> 3 != 0) {
        lVar10 = 0;
        do {
          (**(code **)(**(longlong **)(lVar10 + lVar3) + 0x170))
                    (*(longlong **)(lVar10 + lVar3),param_2,param_4);
          lVar9 = *(longlong *)(lVar2 + 0x18);
          lVar10 = lVar10 + 8;
          iVar4 = iVar4 + 1;
          lVar3 = *(longlong *)(lVar8 + 0xb0 + lVar9);
        } while ((ulonglong)(longlong)iVar4 <
                 (ulonglong)(*(longlong *)(lVar8 + 0xb8 + lVar9) - lVar3 >> 3));
      }
      iVar5 = iVar5 + 1;
      lVar8 = lVar8 + 0x100;
    } while (iVar5 < *(char *)(lVar2 + 0x20));
  }
  return;
}






// 函数: void FUN_1802e919c(longlong param_1,undefined8 param_2,char param_3)
void FUN_1802e919c(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  longlong in_RAX;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar6 = 0;
  uVar5 = uVar6;
  uVar11 = uVar6;
  if (in_RAX >> 3 != 0) {
    do {
      (**(code **)(**(longlong **)(uVar5 + *(longlong *)(param_1 + 0xf0)) + 0x170))();
      uVar10 = (int)uVar11 + 1;
      uVar5 = uVar5 + 8;
      uVar11 = (ulonglong)uVar10;
    } while ((ulonglong)(longlong)(int)uVar10 <
             (ulonglong)(*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3));
  }
  if ((param_3 != '\0') &&
     (uVar5 = uVar6, *(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3 != 0)) {
    do {
      FUN_1802e9180(*(undefined8 *)(uVar6 + *(longlong *)(param_1 + 0x1c0)));
      uVar6 = uVar6 + 8;
      uVar10 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar10;
    } while ((ulonglong)(longlong)(int)uVar10 <
             (ulonglong)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3));
  }
  lVar1 = *(longlong *)(param_1 + 0x260);
  if (lVar1 == 0) {
    return;
  }
  iVar4 = 0;
  if (*(longlong *)(lVar1 + 0x1b0) - *(longlong *)(lVar1 + 0x1a8) >> 3 != 0) {
    lVar8 = 0;
    do {
      (**(code **)(**(longlong **)(lVar8 + *(longlong *)(lVar1 + 0x1a8)) + 0x170))();
      lVar8 = lVar8 + 8;
      iVar4 = iVar4 + 1;
    } while ((ulonglong)(longlong)iVar4 <
             (ulonglong)(*(longlong *)(lVar1 + 0x1b0) - *(longlong *)(lVar1 + 0x1a8) >> 3));
  }
  iVar4 = 0;
  if ('\0' < *(char *)(lVar1 + 0x20)) {
    lVar8 = *(longlong *)(lVar1 + 0x18);
    lVar7 = 0;
    do {
      lVar2 = *(longlong *)(lVar7 + 0xb0 + lVar8);
      iVar3 = 0;
      if (*(longlong *)(lVar7 + 0xb8 + lVar8) - lVar2 >> 3 != 0) {
        lVar9 = 0;
        do {
          (**(code **)(**(longlong **)(lVar9 + lVar2) + 0x170))();
          lVar8 = *(longlong *)(lVar1 + 0x18);
          lVar9 = lVar9 + 8;
          iVar3 = iVar3 + 1;
          lVar2 = *(longlong *)(lVar7 + 0xb0 + lVar8);
        } while ((ulonglong)(longlong)iVar3 <
                 (ulonglong)(*(longlong *)(lVar7 + 0xb8 + lVar8) - lVar2 >> 3));
      }
      iVar4 = iVar4 + 1;
      lVar7 = lVar7 + 0x100;
    } while (iVar4 < *(char *)(lVar1 + 0x20));
  }
  return;
}






// 函数: void FUN_1802e91b0(undefined8 param_1,undefined8 param_2,char param_3)
void FUN_1802e91b0(undefined8 param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  longlong in_RAX;
  longlong lVar2;
  longlong unaff_RBX;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong unaff_RDI;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar7 = unaff_RDI & 0xffffffff;
  if (in_RAX >> 3 != 0) {
    uVar5 = unaff_RDI & 0xffffffff;
    do {
      (**(code **)(**(longlong **)(uVar5 + *(longlong *)(unaff_RBX + 0xf0)) + 0x170))();
      uVar5 = uVar5 + 8;
      uVar10 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar10;
    } while ((ulonglong)(longlong)(int)uVar10 <
             (ulonglong)(*(longlong *)(unaff_RBX + 0xf8) - *(longlong *)(unaff_RBX + 0xf0) >> 3));
  }
  if ((param_3 != '\0') &&
     (uVar7 = unaff_RDI,
     *(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3 != 0)) {
    do {
      FUN_1802e9180(*(undefined8 *)(unaff_RDI + *(longlong *)(unaff_RBX + 0x1c0)));
      unaff_RDI = unaff_RDI + 8;
      uVar10 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar10;
    } while ((ulonglong)(longlong)(int)uVar10 <
             (ulonglong)(*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3));
  }
  lVar1 = *(longlong *)(unaff_RBX + 0x260);
  if (lVar1 == 0) {
    return;
  }
  iVar4 = 0;
  if (*(longlong *)(lVar1 + 0x1b0) - *(longlong *)(lVar1 + 0x1a8) >> 3 != 0) {
    lVar8 = 0;
    do {
      (**(code **)(**(longlong **)(lVar8 + *(longlong *)(lVar1 + 0x1a8)) + 0x170))();
      lVar8 = lVar8 + 8;
      iVar4 = iVar4 + 1;
    } while ((ulonglong)(longlong)iVar4 <
             (ulonglong)(*(longlong *)(lVar1 + 0x1b0) - *(longlong *)(lVar1 + 0x1a8) >> 3));
  }
  iVar4 = 0;
  if ('\0' < *(char *)(lVar1 + 0x20)) {
    lVar8 = *(longlong *)(lVar1 + 0x18);
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(lVar6 + 0xb0 + lVar8);
      iVar3 = 0;
      if (*(longlong *)(lVar6 + 0xb8 + lVar8) - lVar2 >> 3 != 0) {
        lVar9 = 0;
        do {
          (**(code **)(**(longlong **)(lVar9 + lVar2) + 0x170))();
          lVar8 = *(longlong *)(lVar1 + 0x18);
          lVar9 = lVar9 + 8;
          iVar3 = iVar3 + 1;
          lVar2 = *(longlong *)(lVar6 + 0xb0 + lVar8);
        } while ((ulonglong)(longlong)iVar3 <
                 (ulonglong)(*(longlong *)(lVar6 + 0xb8 + lVar8) - lVar2 >> 3));
      }
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 0x100;
    } while (iVar4 < *(char *)(lVar1 + 0x20));
  }
  return;
}






// 函数: void FUN_1802e921a(void)
void FUN_1802e921a(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RBX;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong unaff_RDI;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar7 = unaff_RDI;
  if (*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3 != 0) {
    do {
      FUN_1802e9180(*(undefined8 *)(unaff_RDI + *(longlong *)(unaff_RBX + 0x1c0)));
      unaff_RDI = unaff_RDI + 8;
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while ((ulonglong)(longlong)(int)uVar6 <
             (ulonglong)(*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3));
  }
  lVar1 = *(longlong *)(unaff_RBX + 0x260);
  if (lVar1 == 0) {
    return;
  }
  iVar4 = 0;
  if (*(longlong *)(lVar1 + 0x1b0) - *(longlong *)(lVar1 + 0x1a8) >> 3 != 0) {
    lVar8 = 0;
    do {
      (**(code **)(**(longlong **)(lVar8 + *(longlong *)(lVar1 + 0x1a8)) + 0x170))();
      lVar8 = lVar8 + 8;
      iVar4 = iVar4 + 1;
    } while ((ulonglong)(longlong)iVar4 <
             (ulonglong)(*(longlong *)(lVar1 + 0x1b0) - *(longlong *)(lVar1 + 0x1a8) >> 3));
  }
  iVar4 = 0;
  if ('\0' < *(char *)(lVar1 + 0x20)) {
    lVar8 = *(longlong *)(lVar1 + 0x18);
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar5 + 0xb0 + lVar8);
      iVar3 = 0;
      if (*(longlong *)(lVar5 + 0xb8 + lVar8) - lVar2 >> 3 != 0) {
        lVar9 = 0;
        do {
          (**(code **)(**(longlong **)(lVar9 + lVar2) + 0x170))();
          lVar8 = *(longlong *)(lVar1 + 0x18);
          lVar9 = lVar9 + 8;
          iVar3 = iVar3 + 1;
          lVar2 = *(longlong *)(lVar5 + 0xb0 + lVar8);
        } while ((ulonglong)(longlong)iVar3 <
                 (ulonglong)(*(longlong *)(lVar5 + 0xb8 + lVar8) - lVar2 >> 3));
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x100;
    } while (iVar4 < *(char *)(lVar1 + 0x20));
  }
  return;
}






// 函数: void FUN_1802e9294(longlong param_1)
void FUN_1802e9294(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = 0;
  if (*(longlong *)(param_1 + 0x1b0) - *(longlong *)(param_1 + 0x1a8) >> 3 != 0) {
    lVar5 = 0;
    do {
      (**(code **)(**(longlong **)(lVar5 + *(longlong *)(param_1 + 0x1a8)) + 0x170))();
      lVar5 = lVar5 + 8;
      iVar3 = iVar3 + 1;
    } while ((ulonglong)(longlong)iVar3 <
             (ulonglong)(*(longlong *)(param_1 + 0x1b0) - *(longlong *)(param_1 + 0x1a8) >> 3));
  }
  iVar3 = 0;
  if ('\0' < *(char *)(param_1 + 0x20)) {
    lVar5 = *(longlong *)(param_1 + 0x18);
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(lVar4 + 0xb0 + lVar5);
      iVar2 = 0;
      if (*(longlong *)(lVar4 + 0xb8 + lVar5) - lVar1 >> 3 != 0) {
        lVar6 = 0;
        do {
          (**(code **)(**(longlong **)(lVar6 + lVar1) + 0x170))();
          lVar5 = *(longlong *)(param_1 + 0x18);
          lVar6 = lVar6 + 8;
          iVar2 = iVar2 + 1;
          lVar1 = *(longlong *)(lVar4 + 0xb0 + lVar5);
        } while ((ulonglong)(longlong)iVar2 <
                 (ulonglong)(*(longlong *)(lVar4 + 0xb8 + lVar5) - lVar1 >> 3));
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x100;
    } while (iVar3 < *(char *)(param_1 + 0x20));
  }
  return;
}






// 函数: void FUN_1802e92b0(undefined8 param_1,longlong *param_2)
void FUN_1802e92b0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lStack_28;
  longlong lStack_20;
  undefined8 uStack_18;
  undefined4 uStack_10;
  
  lStack_28 = 0;
  lStack_20 = 0;
  uVar5 = 0;
  uStack_18 = 0;
  uStack_10 = 3;
  FUN_1802e9180(0,&lStack_28);
  FUN_1800b8630(param_2,lStack_20 - lStack_28 >> 3);
  uVar6 = uVar5;
  if (lStack_20 - lStack_28 >> 3 != 0) {
    do {
      plVar1 = *(longlong **)(uVar6 + lStack_28);
      lVar2 = *param_2;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      plVar3 = *(longlong **)(lVar2 + uVar6);
      *(longlong **)(lVar2 + uVar6) = plVar1;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x38))();
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar6 = uVar6 + 8;
    } while ((ulonglong)(longlong)(int)uVar4 < (ulonglong)(lStack_20 - lStack_28 >> 3));
  }
  if (lStack_28 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1802e93a0(longlong param_1,undefined8 param_2)
void FUN_1802e93a0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar8 = *(longlong *)(param_1 + 0xf0);
  uVar6 = 0;
  uVar4 = uVar6;
  uVar5 = uVar6;
  uVar7 = uVar6;
  if (*(longlong *)(param_1 + 0xf8) - lVar8 >> 3 != 0) {
    do {
      iVar2 = (**(code **)(**(longlong **)(uVar5 + lVar8) + 0x98))();
      if (iVar2 == 0) {
        plVar1 = *(longlong **)(uVar5 + *(longlong *)(param_1 + 0xf0));
        (**(code **)(*plVar1 + 0x170))(plVar1,param_2,0xffffffff);
      }
      lVar8 = *(longlong *)(param_1 + 0xf0);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar5 = uVar5 + 8;
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)(*(longlong *)(param_1 + 0xf8) - lVar8 >> 3));
  }
  while( true ) {
    if ((ulonglong)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3) <=
        (ulonglong)(longlong)(int)uVar7) break;
    FUN_1802e93a0(*(undefined8 *)(uVar6 + *(longlong *)(param_1 + 0x1c0)),param_2,0,1,0xffffffff);
    uVar6 = uVar6 + 8;
    uVar7 = (ulonglong)((int)uVar7 + 1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




