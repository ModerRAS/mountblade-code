#include "TaleWorlds.Native.Split.h"

// 03_rendering_part114.c - 16 个函数

// 函数: void FUN_1803370b0(undefined4 *param_1,longlong *param_2)
void FUN_1803370b0(undefined4 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  uVar1 = *param_1;
  puVar4 = (undefined4 *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (undefined4 *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar4 = (undefined4 *)param_2[1];
  uVar1 = param_1[1];
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (undefined4 *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar4 = (undefined4 *)param_2[1];
  uVar1 = param_1[2];
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (undefined4 *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 4;
  FUN_180639ec0(param_2,param_1 + 4);
  piVar5 = (int *)param_2[1];
  iVar6 = (int)((*(longlong *)(param_1 + 0x1c) - *(longlong *)(param_1 + 0x1a)) / 0xb0);
  if ((ulonglong)((*param_2 - (longlong)piVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)piVar5 + (4 - *param_2));
    piVar5 = (int *)param_2[1];
  }
  *piVar5 = iVar6;
  lVar11 = 0;
  piVar5 = (int *)(param_2[1] + 4);
  lVar10 = (longlong)iVar6;
  param_2[1] = (longlong)piVar5;
  lVar9 = lVar11;
  if (0 < iVar6) {
    do {
      piVar7 = (int *)(*(longlong *)(param_1 + 0x1a) + lVar9);
      iVar6 = *piVar7;
      if ((ulonglong)((*param_2 - (longlong)piVar5) + param_2[2]) < 5) {
        FUN_180639bf0(param_2,(longlong)piVar5 + (4 - *param_2));
        piVar5 = (int *)param_2[1];
      }
      *piVar5 = iVar6;
      param_2[1] = param_2[1] + 4;
      FUN_18063a050(param_2,piVar7 + 4);
      FUN_180639ec0(param_2,piVar7 + 0xc);
      lVar8 = *(longlong *)(piVar7 + 0x24);
      lVar2 = *(longlong *)(piVar7 + 0x22);
      piVar5 = (int *)param_2[1];
      if ((ulonglong)((*param_2 - (longlong)piVar5) + param_2[2]) < 5) {
        FUN_180639bf0(param_2,(longlong)piVar5 + (4 - *param_2));
        piVar5 = (int *)param_2[1];
      }
      iVar6 = (int)(lVar8 - lVar2 >> 3);
      *piVar5 = iVar6;
      param_2[1] = param_2[1] + 4;
      piVar5 = (int *)param_2[1];
      lVar8 = lVar11;
      if (0 < (longlong)iVar6) {
        do {
          plVar3 = *(longlong **)(*(longlong *)(piVar7 + 0x22) + lVar8 * 8);
          (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar6);
        piVar5 = (int *)param_2[1];
      }
      lVar10 = lVar10 + -1;
      lVar9 = lVar9 + 0xb0;
    } while (lVar10 != 0);
  }
  lVar9 = *(longlong *)(param_1 + 0x24);
  lVar10 = *(longlong *)(param_1 + 0x22);
  if ((ulonglong)((*param_2 - (longlong)piVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)piVar5 + (4 - *param_2));
    piVar5 = (int *)param_2[1];
  }
  iVar6 = (int)(lVar9 - lVar10 >> 3);
  *piVar5 = iVar6;
  param_2[1] = param_2[1] + 4;
  puVar4 = (undefined4 *)param_2[1];
  if (0 < (longlong)iVar6) {
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x22) + lVar11 * 8);
      (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar6);
    puVar4 = (undefined4 *)param_2[1];
  }
  uVar1 = param_1[0x2a];
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (undefined4 *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar4 = (undefined4 *)param_2[1];
  uVar1 = param_1[0x2b];
  if (4 < (ulonglong)((*param_2 - (longlong)puVar4) + param_2[2])) {
    *puVar4 = uVar1;
    param_2[1] = param_2[1] + 4;
    return;
  }
  FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
  *(undefined4 *)param_2[1] = uVar1;
  param_2[1] = param_2[1] + 4;
  return;
}





// 函数: void FUN_1803370bc(longlong param_1,longlong *param_2)
void FUN_1803370bc(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int *piVar4;
  longlong *unaff_RBX;
  int iVar5;
  int *piVar6;
  undefined4 unaff_EDI;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  puVar3 = (undefined4 *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (undefined4 *)unaff_RBX[1];
  }
  *puVar3 = unaff_EDI;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (undefined4 *)unaff_RBX[1];
  uVar1 = *(undefined4 *)(param_1 + 4);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (undefined4 *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (undefined4 *)unaff_RBX[1];
  uVar1 = *(undefined4 *)(param_1 + 8);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (undefined4 *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  FUN_180639ec0();
  piVar4 = (int *)unaff_RBX[1];
  iVar5 = (int)((*(longlong *)(param_1 + 0x70) - *(longlong *)(param_1 + 0x68)) / 0xb0);
  if ((ulonglong)((*unaff_RBX - (longlong)piVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar4 = (int *)unaff_RBX[1];
  }
  *piVar4 = iVar5;
  lVar10 = 0;
  piVar4 = (int *)(unaff_RBX[1] + 4);
  lVar9 = (longlong)iVar5;
  unaff_RBX[1] = (longlong)piVar4;
  lVar8 = lVar10;
  if (0 < iVar5) {
    do {
      piVar6 = (int *)(*(longlong *)(param_1 + 0x68) + lVar8);
      iVar5 = *piVar6;
      if ((ulonglong)((*unaff_RBX - (longlong)piVar4) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        piVar4 = (int *)unaff_RBX[1];
      }
      *piVar4 = iVar5;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      FUN_18063a050();
      FUN_180639ec0();
      lVar7 = *(longlong *)(piVar6 + 0x24);
      lVar2 = *(longlong *)(piVar6 + 0x22);
      piVar4 = (int *)unaff_RBX[1];
      if ((ulonglong)((*unaff_RBX - (longlong)piVar4) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        piVar4 = (int *)unaff_RBX[1];
      }
      iVar5 = (int)(lVar7 - lVar2 >> 3);
      *piVar4 = iVar5;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      piVar4 = (int *)unaff_RBX[1];
      lVar7 = lVar10;
      if (0 < (longlong)iVar5) {
        do {
          (**(code **)(**(longlong **)(*(longlong *)(piVar6 + 0x22) + lVar7 * 8) + 0x18))();
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar5);
        piVar4 = (int *)unaff_RBX[1];
      }
      lVar9 = lVar9 + -1;
      lVar8 = lVar8 + 0xb0;
    } while (lVar9 != 0);
  }
  lVar8 = *(longlong *)(param_1 + 0x90);
  lVar9 = *(longlong *)(param_1 + 0x88);
  if ((ulonglong)((*unaff_RBX - (longlong)piVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar4 = (int *)unaff_RBX[1];
  }
  iVar5 = (int)(lVar8 - lVar9 >> 3);
  *piVar4 = iVar5;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (undefined4 *)unaff_RBX[1];
  if (0 < (longlong)iVar5) {
    do {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x88) + lVar10 * 8) + 0x18))();
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar5);
    puVar3 = (undefined4 *)unaff_RBX[1];
  }
  uVar1 = *(undefined4 *)(param_1 + 0xa8);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (undefined4 *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  uVar1 = *(undefined4 *)(param_1 + 0xac);
  if (4 < (ulonglong)((*unaff_RBX - unaff_RBX[1]) + unaff_RBX[2])) {
    *(undefined4 *)unaff_RBX[1] = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    return;
  }
  FUN_180639bf0();
  *(undefined4 *)unaff_RBX[1] = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  return;
}





// 函数: void FUN_1803371e1(undefined8 param_1,int *param_2)
void FUN_1803371e1(undefined8 param_1,int *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  undefined4 *puVar5;
  longlong *unaff_RBX;
  int iVar6;
  int *piVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong unaff_R13;
  ulonglong unaff_R14;
  longlong unaff_R15;
  
  uVar9 = unaff_R14 & 0xffffffff;
  do {
    piVar7 = (int *)(*(longlong *)(unaff_R15 + 0x68) + uVar9);
    iVar6 = *piVar7;
    if ((ulonglong)((*unaff_RBX - (longlong)param_2) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      param_2 = (int *)unaff_RBX[1];
    }
    *param_2 = iVar6;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    FUN_18063a050();
    FUN_180639ec0();
    lVar2 = *(longlong *)(piVar7 + 0x24);
    lVar3 = *(longlong *)(piVar7 + 0x22);
    piVar4 = (int *)unaff_RBX[1];
    if ((ulonglong)((*unaff_RBX - (longlong)piVar4) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      piVar4 = (int *)unaff_RBX[1];
    }
    iVar6 = (int)(lVar2 - lVar3 >> 3);
    *piVar4 = iVar6;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    param_2 = (int *)unaff_RBX[1];
    uVar8 = unaff_R14;
    if (0 < (longlong)iVar6) {
      do {
        (**(code **)(**(longlong **)(*(longlong *)(piVar7 + 0x22) + uVar8 * 8) + 0x18))();
        uVar8 = uVar8 + 1;
      } while ((longlong)uVar8 < (longlong)iVar6);
      param_2 = (int *)unaff_RBX[1];
    }
    uVar9 = uVar9 + 0xb0;
    unaff_R13 = unaff_R13 + -1;
  } while (unaff_R13 != 0);
  lVar2 = *(longlong *)(unaff_R15 + 0x90);
  lVar3 = *(longlong *)(unaff_R15 + 0x88);
  if ((ulonglong)((*unaff_RBX - (longlong)param_2) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    param_2 = (int *)unaff_RBX[1];
  }
  iVar6 = (int)(lVar2 - lVar3 >> 3);
  *param_2 = iVar6;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar5 = (undefined4 *)unaff_RBX[1];
  if (0 < (longlong)iVar6) {
    do {
      (**(code **)(**(longlong **)(*(longlong *)(unaff_R15 + 0x88) + unaff_R14 * 8) + 0x18))();
      unaff_R14 = unaff_R14 + 1;
    } while ((longlong)unaff_R14 < (longlong)iVar6);
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  uVar1 = *(undefined4 *)(unaff_R15 + 0xa8);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  *puVar5 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  uVar1 = *(undefined4 *)(unaff_R15 + 0xac);
  if (4 < (ulonglong)((*unaff_RBX - unaff_RBX[1]) + unaff_RBX[2])) {
    *(undefined4 *)unaff_RBX[1] = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    return;
  }
  FUN_180639bf0();
  *(undefined4 *)unaff_RBX[1] = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  return;
}





// 函数: void FUN_1803372f3(undefined8 param_1,int *param_2)
void FUN_1803372f3(undefined8 param_1,int *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong *unaff_RBX;
  int iVar5;
  longlong unaff_R14;
  longlong unaff_R15;
  
  lVar2 = *(longlong *)(unaff_R15 + 0x90);
  lVar3 = *(longlong *)(unaff_R15 + 0x88);
  if ((ulonglong)((*unaff_RBX - (longlong)param_2) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    param_2 = (int *)unaff_RBX[1];
  }
  iVar5 = (int)(lVar2 - lVar3 >> 3);
  *param_2 = iVar5;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (undefined4 *)unaff_RBX[1];
  if (0 < (longlong)iVar5) {
    do {
      (**(code **)(**(longlong **)(*(longlong *)(unaff_R15 + 0x88) + unaff_R14 * 8) + 0x18))();
      unaff_R14 = unaff_R14 + 1;
    } while (unaff_R14 < iVar5);
    puVar4 = (undefined4 *)unaff_RBX[1];
  }
  uVar1 = *(undefined4 *)(unaff_R15 + 0xa8);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (undefined4 *)unaff_RBX[1];
  }
  *puVar4 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  uVar1 = *(undefined4 *)(unaff_R15 + 0xac);
  if (4 < (ulonglong)((*unaff_RBX - unaff_RBX[1]) + unaff_RBX[2])) {
    *(undefined4 *)unaff_RBX[1] = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    return;
  }
  FUN_180639bf0();
  *(undefined4 *)unaff_RBX[1] = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  return;
}





// 函数: void FUN_18033731d(void)
void FUN_18033731d(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong *unaff_RBX;
  int unaff_EDI;
  longlong unaff_R14;
  longlong unaff_R15;
  
  FUN_180639bf0();
  *(int *)unaff_RBX[1] = unaff_EDI;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar2 = (undefined4 *)unaff_RBX[1];
  if (0 < (longlong)unaff_EDI) {
    do {
      (**(code **)(**(longlong **)(*(longlong *)(unaff_R15 + 0x88) + unaff_R14 * 8) + 0x18))();
      unaff_R14 = unaff_R14 + 1;
    } while (unaff_R14 < unaff_EDI);
    puVar2 = (undefined4 *)unaff_RBX[1];
  }
  uVar1 = *(undefined4 *)(unaff_R15 + 0xa8);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar2) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar2 = (undefined4 *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  uVar1 = *(undefined4 *)(unaff_R15 + 0xac);
  if (4 < (ulonglong)((*unaff_RBX - unaff_RBX[1]) + unaff_RBX[2])) {
    *(undefined4 *)unaff_RBX[1] = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    return;
  }
  FUN_180639bf0();
  *(undefined4 *)unaff_RBX[1] = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  return;
}





// 函数: void FUN_18033738f(void)
void FUN_18033738f(void)

{
  undefined4 uVar1;
  longlong *unaff_RBX;
  undefined4 unaff_EDI;
  longlong unaff_R15;
  
  FUN_180639bf0();
  *(undefined4 *)unaff_RBX[1] = unaff_EDI;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  uVar1 = *(undefined4 *)(unaff_R15 + 0xac);
  if ((ulonglong)((*unaff_RBX - unaff_RBX[1]) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    *(undefined4 *)unaff_RBX[1] = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    return;
  }
  *(undefined4 *)unaff_RBX[1] = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  return;
}





// 函数: void FUN_1803373cc(void)
void FUN_1803373cc(void)

{
  longlong unaff_RBX;
  undefined4 unaff_EDI;
  
  FUN_180639bf0();
  **(undefined4 **)(unaff_RBX + 8) = unaff_EDI;
  *(longlong *)(unaff_RBX + 8) = *(longlong *)(unaff_RBX + 8) + 4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180337400(undefined4 *param_1,longlong param_2)
void FUN_180337400(undefined4 *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  *param_1 = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  param_1[1] = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  param_1[2] = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  uVar1 = **(uint **)(param_2 + 8);
  puVar4 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar4;
  if (uVar1 != 0) {
    (**(code **)(*(longlong *)(param_1 + 4) + 0x18))(param_1 + 4,puVar4,uVar1);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar1;
    puVar4 = *(uint **)(param_2 + 8);
  }
  uVar1 = *puVar4;
  uVar6 = (ulonglong)uVar1;
  *(uint **)(param_2 + 8) = puVar4 + 1;
  if (0 < (int)uVar1) {
    FUN_18033ab50(param_1 + 0x1a,(longlong)(int)uVar1);
    lVar7 = 0;
    do {
      FUN_180337600(*(longlong *)(param_1 + 0x1a) + lVar7,param_2);
      lVar7 = lVar7 + 0xb0;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_1 + 0x22);
  uVar1 = **(uint **)(param_2 + 8);
  puVar4 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar4;
  if (0 < (int)uVar1) {
    uVar6 = (ulonglong)uVar1;
    do {
      uVar2 = FUN_180337b40(param_2);
      puVar8 = *(undefined8 **)(param_1 + 0x24);
      if (puVar8 < *(undefined8 **)(param_1 + 0x26)) {
        *(undefined8 **)(param_1 + 0x24) = puVar8 + 1;
        *puVar8 = uVar2;
      }
      else {
        puVar5 = *(undefined8 **)(param_1 + 0x22);
        lVar7 = (longlong)puVar8 - (longlong)puVar5 >> 3;
        if (lVar7 == 0) {
          lVar7 = 1;
LAB_180337537:
          puVar3 = (undefined8 *)
                   FUN_18062b420(_DAT_180c8ed18,lVar7 * 8,*(undefined1 *)(param_1 + 0x28));
          puVar5 = *(undefined8 **)(param_1 + 0x22);
          puVar8 = *(undefined8 **)(param_1 + 0x24);
        }
        else {
          lVar7 = lVar7 * 2;
          if (lVar7 != 0) goto LAB_180337537;
          puVar3 = (undefined8 *)0x0;
        }
        if (puVar5 != puVar8) {
                    // WARNING: Subroutine does not return
          memmove(puVar3,puVar5,(longlong)puVar8 - (longlong)puVar5);
        }
        *puVar3 = uVar2;
        if (*(longlong *)(param_1 + 0x22) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined8 **)(param_1 + 0x22) = puVar3;
        *(undefined8 **)(param_1 + 0x26) = puVar3 + lVar7;
        *(undefined8 **)(param_1 + 0x24) = puVar3 + 1;
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    puVar4 = *(uint **)(param_2 + 8);
  }
  param_1[0x2a] = *puVar4;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  param_1[0x2b] = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803374d0(uint param_1)
void FUN_1803374d0(uint param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong unaff_RBX;
  longlong unaff_RSI;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)param_1;
  do {
    uVar1 = FUN_180337b40();
    puVar5 = *(undefined8 **)(unaff_RBX + 0x90);
    if (puVar5 < *(undefined8 **)(unaff_RBX + 0x98)) {
      *(undefined8 **)(unaff_RBX + 0x90) = puVar5 + 1;
      *puVar5 = uVar1;
    }
    else {
      puVar4 = *(undefined8 **)(unaff_RBX + 0x88);
      lVar2 = (longlong)puVar5 - (longlong)puVar4 >> 3;
      if (lVar2 == 0) {
        lVar2 = 1;
LAB_180337537:
        puVar3 = (undefined8 *)
                 FUN_18062b420(_DAT_180c8ed18,lVar2 * 8,*(undefined1 *)(unaff_RBX + 0xa0));
        puVar4 = *(undefined8 **)(unaff_RBX + 0x88);
        puVar5 = *(undefined8 **)(unaff_RBX + 0x90);
      }
      else {
        lVar2 = lVar2 * 2;
        if (lVar2 != 0) goto LAB_180337537;
        puVar3 = (undefined8 *)0x0;
      }
      if (puVar4 != puVar5) {
                    // WARNING: Subroutine does not return
        memmove(puVar3,puVar4,(longlong)puVar5 - (longlong)puVar4);
      }
      *puVar3 = uVar1;
      if (*(longlong *)(unaff_RBX + 0x88) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(undefined8 **)(unaff_RBX + 0x88) = puVar3;
      *(undefined8 **)(unaff_RBX + 0x98) = puVar3 + lVar2;
      *(undefined8 **)(unaff_RBX + 0x90) = puVar3 + 1;
    }
    uVar6 = uVar6 - 1;
    if (uVar6 == 0) {
      *(undefined4 *)(unaff_RBX + 0xa8) = **(undefined4 **)(unaff_RSI + 8);
      *(longlong *)(unaff_RSI + 8) = *(longlong *)(unaff_RSI + 8) + 4;
      *(undefined4 *)(unaff_RBX + 0xac) = **(undefined4 **)(unaff_RSI + 8);
      *(longlong *)(unaff_RSI + 8) = *(longlong *)(unaff_RSI + 8) + 4;
      return;
    }
  } while( true );
}





// 函数: void FUN_1803375cd(void)
void FUN_1803375cd(void)

{
  undefined4 *in_RAX;
  longlong unaff_RBX;
  longlong unaff_RSI;
  
  *(undefined4 *)(unaff_RBX + 0xa8) = *in_RAX;
  *(longlong *)(unaff_RSI + 8) = *(longlong *)(unaff_RSI + 8) + 4;
  *(undefined4 *)(unaff_RBX + 0xac) = **(undefined4 **)(unaff_RSI + 8);
  *(longlong *)(unaff_RSI + 8) = *(longlong *)(unaff_RSI + 8) + 4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180337600(undefined4 *param_1,longlong param_2)
void FUN_180337600(undefined4 *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  
  *param_1 = **(undefined4 **)(param_2 + 8);
  lVar3 = *(longlong *)(param_2 + 8);
  param_1[4] = *(undefined4 *)(lVar3 + 4);
  param_1[5] = *(undefined4 *)(lVar3 + 8);
  param_1[6] = *(undefined4 *)(lVar3 + 0xc);
  param_1[7] = *(undefined4 *)(lVar3 + 0x10);
  param_1[8] = *(undefined4 *)(lVar3 + 0x14);
  param_1[9] = *(undefined4 *)(lVar3 + 0x18);
  param_1[10] = *(undefined4 *)(lVar3 + 0x1c);
  param_1[0xb] = *(undefined4 *)(lVar3 + 0x20);
  *(uint **)(param_2 + 8) = (uint *)(lVar3 + 0x24);
  uVar1 = *(uint *)(lVar3 + 0x24);
  puVar5 = (uint *)(lVar3 + 0x28);
  *(uint **)(param_2 + 8) = puVar5;
  if (uVar1 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0xc) + 0x18))(param_1 + 0xc,puVar5,uVar1);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar1;
    puVar5 = *(uint **)(param_2 + 8);
  }
  uVar1 = *puVar5;
  *(uint **)(param_2 + 8) = puVar5 + 1;
  if (0 < (int)uVar1) {
    uVar8 = (ulonglong)uVar1;
    do {
      uVar2 = FUN_180337b40(param_2);
      puVar7 = *(undefined8 **)(param_1 + 0x24);
      if (puVar7 < *(undefined8 **)(param_1 + 0x26)) {
        *(undefined8 **)(param_1 + 0x24) = puVar7 + 1;
        *puVar7 = uVar2;
      }
      else {
        puVar6 = *(undefined8 **)(param_1 + 0x22);
        lVar3 = (longlong)puVar7 - (longlong)puVar6 >> 3;
        if (lVar3 == 0) {
          lVar3 = 1;
LAB_180337706:
          puVar4 = (undefined8 *)
                   FUN_18062b420(_DAT_180c8ed18,lVar3 * 8,*(undefined1 *)(param_1 + 0x28));
          puVar6 = *(undefined8 **)(param_1 + 0x22);
          puVar7 = *(undefined8 **)(param_1 + 0x24);
        }
        else {
          lVar3 = lVar3 * 2;
          if (lVar3 != 0) goto LAB_180337706;
          puVar4 = (undefined8 *)0x0;
        }
        if (puVar6 != puVar7) {
                    // WARNING: Subroutine does not return
          memmove(puVar4,puVar6,(longlong)puVar7 - (longlong)puVar6);
        }
        *puVar4 = uVar2;
        if (*(longlong *)(param_1 + 0x22) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined8 **)(param_1 + 0x22) = puVar4;
        *(undefined8 **)(param_1 + 0x26) = puVar4 + lVar3;
        *(undefined8 **)(param_1 + 0x24) = puVar4 + 1;
      }
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180337692(uint param_1)
void FUN_180337692(uint param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong unaff_RBX;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)param_1;
  do {
    uVar1 = FUN_180337b40();
    puVar5 = *(undefined8 **)(unaff_RBX + 0x90);
    if (puVar5 < *(undefined8 **)(unaff_RBX + 0x98)) {
      *(undefined8 **)(unaff_RBX + 0x90) = puVar5 + 1;
      *puVar5 = uVar1;
    }
    else {
      puVar4 = *(undefined8 **)(unaff_RBX + 0x88);
      lVar2 = (longlong)puVar5 - (longlong)puVar4 >> 3;
      if (lVar2 == 0) {
        lVar2 = 1;
LAB_180337706:
        puVar3 = (undefined8 *)
                 FUN_18062b420(_DAT_180c8ed18,lVar2 * 8,*(undefined1 *)(unaff_RBX + 0xa0));
        puVar4 = *(undefined8 **)(unaff_RBX + 0x88);
        puVar5 = *(undefined8 **)(unaff_RBX + 0x90);
      }
      else {
        lVar2 = lVar2 * 2;
        if (lVar2 != 0) goto LAB_180337706;
        puVar3 = (undefined8 *)0x0;
      }
      if (puVar4 != puVar5) {
                    // WARNING: Subroutine does not return
        memmove(puVar3,puVar4,(longlong)puVar5 - (longlong)puVar4);
      }
      *puVar3 = uVar1;
      if (*(longlong *)(unaff_RBX + 0x88) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(undefined8 **)(unaff_RBX + 0x88) = puVar3;
      *(undefined8 **)(unaff_RBX + 0x98) = puVar3 + lVar2;
      *(undefined8 **)(unaff_RBX + 0x90) = puVar3 + 1;
    }
    uVar6 = uVar6 - 1;
    if (uVar6 == 0) {
      return;
    }
  } while( true );
}





// 函数: void FUN_1803377a2(void)
void FUN_1803377a2(void)

{
  return;
}





// 函数: void FUN_1803377b0(longlong param_1,longlong *param_2)
void FUN_1803377b0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 0x8c);
  puVar2 = (undefined4 *)param_2[1];
  if ((ulonglong)((param_2[2] - (longlong)puVar2) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = *(undefined4 *)(param_1 + 8);
  if ((ulonglong)((param_2[2] - (longlong)puVar2) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  if ((ulonglong)((param_2[2] - (longlong)puVar2) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if ((ulonglong)((param_2[2] - (longlong)puVar2) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  if ((ulonglong)((param_2[2] - (longlong)puVar2) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  FUN_18063a110(param_2,param_1 + 0x18);
  FUN_18063aca0(param_1 + 0x58,param_2);
  piVar3 = (int *)param_2[1];
  uVar5 = (*(longlong *)(param_1 + 0x98) - *(longlong *)(param_1 + 0x90)) / 0x1a0;
  if ((ulonglong)((param_2[2] - (longlong)piVar3) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)piVar3 + (4 - *param_2));
    piVar3 = (int *)param_2[1];
  }
  iVar4 = (int)uVar5;
  *piVar3 = iVar4;
  param_2[1] = param_2[1] + 4;
  if (0 < iVar4) {
    lVar6 = 0;
    uVar5 = uVar5 & 0xffffffff;
    do {
      FUN_180338100(*(longlong *)(param_1 + 0x90) + lVar6,param_2);
      lVar6 = lVar6 + 0x1a0;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}





// 函数: void FUN_180337990(longlong param_1,longlong param_2,char param_3)
void FUN_180337990(longlong param_1,longlong param_2,char param_3)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_3 != '\0') {
    uVar1 = **(undefined4 **)(param_2 + 8);
    *(undefined4 **)(param_2 + 8) = *(undefined4 **)(param_2 + 8) + 1;
    *(undefined4 *)(param_1 + 0x8c) = uVar1;
  }
  *(undefined4 *)(param_1 + 8) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xc) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0x10) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0x14) = **(undefined4 **)(param_2 + 8);
  lVar3 = *(longlong *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar3 + 4);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar3 + 8);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar3 + 0xc);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar3 + 0x10);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar3 + 0x14);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(lVar3 + 0x18);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar3 + 0x1c);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(lVar3 + 0x20);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar3 + 0x24);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(lVar3 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(lVar3 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(lVar3 + 0x30);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(lVar3 + 0x34);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(lVar3 + 0x38);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar3 + 0x3c);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(lVar3 + 0x40);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(lVar3 + 0x44);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(lVar3 + 0x48);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar3 + 0x4c);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(lVar3 + 0x50);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(lVar3 + 0x54);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(lVar3 + 0x58);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(lVar3 + 0x5c);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(lVar3 + 0x60);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(lVar3 + 100);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(lVar3 + 0x68);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(lVar3 + 0x6c);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(lVar3 + 0x70);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(lVar3 + 0x74);
  *(uint **)(param_2 + 8) = (uint *)(lVar3 + 0x78);
  uVar2 = *(uint *)(lVar3 + 0x78);
  uVar4 = (ulonglong)uVar2;
  *(longlong *)(param_2 + 8) = lVar3 + 0x7c;
  if (0 < (int)uVar2) {
    FUN_180284580(param_1 + 0x90,(longlong)(int)uVar2);
    lVar3 = 0;
    do {
      FUN_1803387a0(*(longlong *)(param_1 + 0x90) + lVar3,param_2);
      lVar3 = lVar3 + 0x1a0;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}





// 函数: void FUN_180337af0(void)
void FUN_180337af0(void)

{
  longlong lVar1;
  longlong unaff_RDI;
  longlong unaff_R14;
  
  FUN_180284580();
  lVar1 = 0;
  do {
    FUN_1803387a0(*(longlong *)(unaff_R14 + 0x90) + lVar1);
    lVar1 = lVar1 + 0x1a0;
    unaff_RDI = unaff_RDI + -1;
  } while (unaff_RDI != 0);
  return;
}





