#include "TaleWorlds.Native.Split.h"

// 03_rendering_part007.c - 4 个函数

// 函数: void FUN_1802719da(undefined4 *param_1,longlong *param_2)
void FUN_1802719da(undefined4 *param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  longlong lVar6;
  longlong *unaff_RBX;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  puVar4 = (undefined4 *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (undefined4 *)unaff_RBX[1];
  }
  *puVar4 = 1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  FUN_180272d60(&UNK_18098de80,*param_1);
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  lVar6 = (*(longlong *)(param_1 + 0x4c) - *(longlong *)(param_1 + 0x4a)) / 6 +
          (*(longlong *)(param_1 + 0x4c) - *(longlong *)(param_1 + 0x4a) >> 0x3f);
  piVar5 = (int *)unaff_RBX[1];
  iVar8 = (int)(lVar6 >> 4) - (int)(lVar6 >> 0x3f);
  if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = iVar8;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = (longlong)iVar8;
  if (0 < iVar8) {
    lVar9 = 0;
    do {
      FUN_180639ec0();
      puVar4 = (undefined4 *)unaff_RBX[1];
      uVar2 = *(undefined4 *)(lVar9 + 0x58 + *(longlong *)(param_1 + 0x4a));
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar4 = (undefined4 *)unaff_RBX[1];
      }
      *puVar4 = uVar2;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar4 = (undefined4 *)unaff_RBX[1];
      uVar2 = *(undefined4 *)(lVar9 + 0x5c + *(longlong *)(param_1 + 0x4a));
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar4 = (undefined4 *)unaff_RBX[1];
      }
      *puVar4 = uVar2;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      lVar9 = lVar9 + 0x60;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  lVar6 = 0x10;
  do {
    FUN_180639ec0();
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  FUN_18025a940(&UNK_18098dfd0,param_1[0x1f2]);
  puVar3 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(param_1 + 499);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar3 = (undefined1 *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  if (*(char *)(param_1 + 499) == '\0') {
    return;
  }
  puVar4 = (undefined4 *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (undefined4 *)unaff_RBX[1];
  }
  iVar8 = 0;
  *puVar4 = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  piVar5 = (int *)unaff_RBX[1];
  lVar6 = (*(longlong *)(param_1 + 0x1fe) - *(longlong *)(param_1 + 0x1fc)) / 0x26 +
          (*(longlong *)(param_1 + 0x1fe) - *(longlong *)(param_1 + 0x1fc) >> 0x3f);
  if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(longlong *)(param_1 + 0x1fe) - *(longlong *)(param_1 + 0x1fc) >> 0x3f;
  iVar7 = iVar8;
  if ((*(longlong *)(param_1 + 0x1fe) - *(longlong *)(param_1 + 0x1fc)) / 0x98 + lVar6 != lVar6) {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)((*(longlong *)(param_1 + 0x1fe) - *(longlong *)(param_1 + 0x1fc)) / 0x98));
  }
  FUN_180639ec0();
  puVar3 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(param_1 + 0x22a);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar3 = (undefined1 *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar4 = (undefined4 *)unaff_RBX[1];
  uVar2 = param_1[0x22b];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (undefined4 *)unaff_RBX[1];
  }
  *puVar4 = uVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  FUN_180639ec0();
  lVar6 = (*(longlong *)(param_1 + 0x254) - *(longlong *)(param_1 + 0x252)) / 0x26 +
          (*(longlong *)(param_1 + 0x254) - *(longlong *)(param_1 + 0x252) >> 0x3f);
  piVar5 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(longlong *)(param_1 + 0x254) - *(longlong *)(param_1 + 0x252) >> 0x3f;
  iVar7 = iVar8;
  if ((*(longlong *)(param_1 + 0x254) - *(longlong *)(param_1 + 0x252)) / 0x98 + lVar6 != lVar6) {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)((*(longlong *)(param_1 + 0x254) - *(longlong *)(param_1 + 0x252)) / 0x98));
  }
  lVar6 = 5;
  do {
    FUN_180639ec0();
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  lVar6 = (*(longlong *)(param_1 + 0x31a) - *(longlong *)(param_1 + 0x318)) / 0x26 +
          (*(longlong *)(param_1 + 0x31a) - *(longlong *)(param_1 + 0x318) >> 0x3f);
  piVar5 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(longlong *)(param_1 + 0x31a) - *(longlong *)(param_1 + 0x318) >> 0x3f;
  iVar7 = iVar8;
  if ((*(longlong *)(param_1 + 0x31a) - *(longlong *)(param_1 + 0x318)) / 0x98 + lVar6 != lVar6) {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)((*(longlong *)(param_1 + 0x31a) - *(longlong *)(param_1 + 0x318)) / 0x98));
  }
  lVar6 = 9;
  do {
    FUN_180639ec0();
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  FUN_180639ec0();
  FUN_180639ec0();
  lVar6 = (*(longlong *)(param_1 + 0x624) - *(longlong *)(param_1 + 0x622)) / 0x26 +
          (*(longlong *)(param_1 + 0x624) - *(longlong *)(param_1 + 0x622) >> 0x3f);
  piVar5 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(longlong *)(param_1 + 0x624) - *(longlong *)(param_1 + 0x622) >> 0x3f;
  iVar7 = iVar8;
  if ((*(longlong *)(param_1 + 0x624) - *(longlong *)(param_1 + 0x622)) / 0x98 + lVar6 != lVar6) {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)((*(longlong *)(param_1 + 0x624) - *(longlong *)(param_1 + 0x622)) / 0x98));
  }
  FUN_180639ec0();
  puVar3 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)((longlong)param_1 + 0x18c9);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar3 = (undefined1 *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar4 = (undefined4 *)unaff_RBX[1];
  if (*(char *)((longlong)param_1 + 0x18c9) != '\0') {
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    puVar4 = (undefined4 *)unaff_RBX[1];
  }
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (undefined4 *)unaff_RBX[1];
  }
  *puVar4 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  do {
    piVar5 = (int *)unaff_RBX[1];
    if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      piVar5 = (int *)unaff_RBX[1];
    }
    *piVar5 = iVar8;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    FUN_180639ec0();
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x10);
  return;
}





// 函数: void FUN_1802719f1(undefined4 *param_1)
void FUN_1802719f1(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong in_RAX;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  longlong lVar6;
  longlong *unaff_RBX;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined4 *unaff_RDI;
  
  if ((ulonglong)((in_RAX - (longlong)param_1) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    param_1 = (undefined4 *)unaff_RBX[1];
  }
  *param_1 = 1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  FUN_180272d60(&UNK_18098de80,*unaff_RDI);
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  lVar6 = (*(longlong *)(unaff_RDI + 0x4c) - *(longlong *)(unaff_RDI + 0x4a)) / 6 +
          (*(longlong *)(unaff_RDI + 0x4c) - *(longlong *)(unaff_RDI + 0x4a) >> 0x3f);
  piVar5 = (int *)unaff_RBX[1];
  iVar8 = (int)(lVar6 >> 4) - (int)(lVar6 >> 0x3f);
  if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = iVar8;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = (longlong)iVar8;
  if (0 < iVar8) {
    lVar9 = 0;
    do {
      FUN_180639ec0();
      puVar4 = (undefined4 *)unaff_RBX[1];
      uVar2 = *(undefined4 *)(lVar9 + 0x58 + *(longlong *)(unaff_RDI + 0x4a));
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar4 = (undefined4 *)unaff_RBX[1];
      }
      *puVar4 = uVar2;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar4 = (undefined4 *)unaff_RBX[1];
      uVar2 = *(undefined4 *)(lVar9 + 0x5c + *(longlong *)(unaff_RDI + 0x4a));
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar4 = (undefined4 *)unaff_RBX[1];
      }
      *puVar4 = uVar2;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      lVar9 = lVar9 + 0x60;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  lVar6 = 0x10;
  do {
    FUN_180639ec0();
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  FUN_18025a940(&UNK_18098dfd0,unaff_RDI[0x1f2]);
  puVar3 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(unaff_RDI + 499);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar3 = (undefined1 *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  if (*(char *)(unaff_RDI + 499) == '\0') {
    return;
  }
  puVar4 = (undefined4 *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (undefined4 *)unaff_RBX[1];
  }
  iVar8 = 0;
  *puVar4 = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  piVar5 = (int *)unaff_RBX[1];
  lVar6 = (*(longlong *)(unaff_RDI + 0x1fe) - *(longlong *)(unaff_RDI + 0x1fc)) / 0x26 +
          (*(longlong *)(unaff_RDI + 0x1fe) - *(longlong *)(unaff_RDI + 0x1fc) >> 0x3f);
  if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(longlong *)(unaff_RDI + 0x1fe) - *(longlong *)(unaff_RDI + 0x1fc) >> 0x3f;
  iVar7 = iVar8;
  if ((*(longlong *)(unaff_RDI + 0x1fe) - *(longlong *)(unaff_RDI + 0x1fc)) / 0x98 + lVar6 != lVar6)
  {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x1fe) - *(longlong *)(unaff_RDI + 0x1fc)) / 0x98));
  }
  FUN_180639ec0();
  puVar3 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(unaff_RDI + 0x22a);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar3 = (undefined1 *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar4 = (undefined4 *)unaff_RBX[1];
  uVar2 = unaff_RDI[0x22b];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (undefined4 *)unaff_RBX[1];
  }
  *puVar4 = uVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  FUN_180639ec0();
  lVar6 = (*(longlong *)(unaff_RDI + 0x254) - *(longlong *)(unaff_RDI + 0x252)) / 0x26 +
          (*(longlong *)(unaff_RDI + 0x254) - *(longlong *)(unaff_RDI + 0x252) >> 0x3f);
  piVar5 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(longlong *)(unaff_RDI + 0x254) - *(longlong *)(unaff_RDI + 0x252) >> 0x3f;
  iVar7 = iVar8;
  if ((*(longlong *)(unaff_RDI + 0x254) - *(longlong *)(unaff_RDI + 0x252)) / 0x98 + lVar6 != lVar6)
  {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x254) - *(longlong *)(unaff_RDI + 0x252)) / 0x98));
  }
  lVar6 = 5;
  do {
    FUN_180639ec0();
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  lVar6 = (*(longlong *)(unaff_RDI + 0x31a) - *(longlong *)(unaff_RDI + 0x318)) / 0x26 +
          (*(longlong *)(unaff_RDI + 0x31a) - *(longlong *)(unaff_RDI + 0x318) >> 0x3f);
  piVar5 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(longlong *)(unaff_RDI + 0x31a) - *(longlong *)(unaff_RDI + 0x318) >> 0x3f;
  iVar7 = iVar8;
  if ((*(longlong *)(unaff_RDI + 0x31a) - *(longlong *)(unaff_RDI + 0x318)) / 0x98 + lVar6 != lVar6)
  {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x31a) - *(longlong *)(unaff_RDI + 0x318)) / 0x98));
  }
  lVar6 = 9;
  do {
    FUN_180639ec0();
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  FUN_180639ec0();
  FUN_180639ec0();
  lVar6 = (*(longlong *)(unaff_RDI + 0x624) - *(longlong *)(unaff_RDI + 0x622)) / 0x26 +
          (*(longlong *)(unaff_RDI + 0x624) - *(longlong *)(unaff_RDI + 0x622) >> 0x3f);
  piVar5 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(longlong *)(unaff_RDI + 0x624) - *(longlong *)(unaff_RDI + 0x622) >> 0x3f;
  iVar7 = iVar8;
  if ((*(longlong *)(unaff_RDI + 0x624) - *(longlong *)(unaff_RDI + 0x622)) / 0x98 + lVar6 != lVar6)
  {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x624) - *(longlong *)(unaff_RDI + 0x622)) / 0x98));
  }
  FUN_180639ec0();
  puVar3 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)((longlong)unaff_RDI + 0x18c9);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar3 = (undefined1 *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar4 = (undefined4 *)unaff_RBX[1];
  if (*(char *)((longlong)unaff_RDI + 0x18c9) != '\0') {
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    puVar4 = (undefined4 *)unaff_RBX[1];
  }
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (undefined4 *)unaff_RBX[1];
  }
  *puVar4 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  do {
    piVar5 = (int *)unaff_RBX[1];
    if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      piVar5 = (int *)unaff_RBX[1];
    }
    *piVar5 = iVar8;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    FUN_180639ec0();
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x10);
  return;
}





// 函数: void FUN_180271b17(void)
void FUN_180271b17(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  longlong *unaff_RBX;
  uint unaff_EBP;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  longlong unaff_RDI;
  longlong unaff_R14;
  
  uVar10 = (ulonglong)unaff_EBP;
  do {
    FUN_180639ec0();
    puVar5 = (undefined4 *)unaff_RBX[1];
    uVar2 = *(undefined4 *)(uVar10 + 0x58 + *(longlong *)(unaff_RDI + 0x128));
    if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      puVar5 = (undefined4 *)unaff_RBX[1];
    }
    *puVar5 = uVar2;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar5 = (undefined4 *)unaff_RBX[1];
    uVar2 = *(undefined4 *)(uVar10 + 0x5c + *(longlong *)(unaff_RDI + 0x128));
    if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      puVar5 = (undefined4 *)unaff_RBX[1];
    }
    *puVar5 = uVar2;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    uVar10 = uVar10 + 0x60;
    unaff_R14 = unaff_R14 + -1;
  } while (unaff_R14 != 0);
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  lVar8 = 0x10;
  do {
    FUN_180639ec0();
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  FUN_18025a940(&UNK_18098dfd0,*(undefined4 *)(unaff_RDI + 0x7c8));
  puVar4 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(unaff_RDI + 0x7cc);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar4 = (undefined1 *)unaff_RBX[1];
  }
  *puVar4 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  if (*(char *)(unaff_RDI + 0x7cc) == '\0') {
    return;
  }
  puVar5 = (undefined4 *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  iVar9 = 0;
  *puVar5 = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar8 = *(longlong *)(unaff_RDI + 0x7f8) - *(longlong *)(unaff_RDI + 0x7f0);
  piVar6 = (int *)unaff_RBX[1];
  lVar8 = lVar8 / 0x26 + (lVar8 >> 0x3f);
  if ((ulonglong)((*unaff_RBX - (longlong)piVar6) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar6 = (int *)unaff_RBX[1];
  }
  *piVar6 = (int)(lVar8 >> 2) - (int)(lVar8 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar3 = *(longlong *)(unaff_RDI + 0x7f8) - *(longlong *)(unaff_RDI + 0x7f0);
  lVar8 = lVar3 >> 0x3f;
  iVar7 = iVar9;
  if (lVar3 / 0x98 + lVar8 != lVar8) {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x7f8) - *(longlong *)(unaff_RDI + 0x7f0)) / 0x98));
  }
  FUN_180639ec0();
  puVar4 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(unaff_RDI + 0x8a8);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar4 = (undefined1 *)unaff_RBX[1];
  }
  *puVar4 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar5 = (undefined4 *)unaff_RBX[1];
  uVar2 = *(undefined4 *)(unaff_RDI + 0x8ac);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  *puVar5 = uVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  FUN_180639ec0();
  lVar8 = *(longlong *)(unaff_RDI + 0x950) - *(longlong *)(unaff_RDI + 0x948);
  lVar8 = lVar8 / 0x26 + (lVar8 >> 0x3f);
  piVar6 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar6) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar6 = (int *)unaff_RBX[1];
  }
  *piVar6 = (int)(lVar8 >> 2) - (int)(lVar8 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar3 = *(longlong *)(unaff_RDI + 0x950) - *(longlong *)(unaff_RDI + 0x948);
  lVar8 = lVar3 >> 0x3f;
  iVar7 = iVar9;
  if (lVar3 / 0x98 + lVar8 != lVar8) {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x950) - *(longlong *)(unaff_RDI + 0x948)) / 0x98));
  }
  lVar8 = 5;
  do {
    FUN_180639ec0();
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  lVar8 = *(longlong *)(unaff_RDI + 0xc68) - *(longlong *)(unaff_RDI + 0xc60);
  lVar8 = lVar8 / 0x26 + (lVar8 >> 0x3f);
  piVar6 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar6) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar6 = (int *)unaff_RBX[1];
  }
  *piVar6 = (int)(lVar8 >> 2) - (int)(lVar8 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar3 = *(longlong *)(unaff_RDI + 0xc68) - *(longlong *)(unaff_RDI + 0xc60);
  lVar8 = lVar3 >> 0x3f;
  iVar7 = iVar9;
  if (lVar3 / 0x98 + lVar8 != lVar8) {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0xc68) - *(longlong *)(unaff_RDI + 0xc60)) / 0x98));
  }
  lVar8 = 9;
  do {
    FUN_180639ec0();
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  FUN_180639ec0();
  FUN_180639ec0();
  lVar8 = *(longlong *)(unaff_RDI + 0x1890) - *(longlong *)(unaff_RDI + 0x1888);
  lVar8 = lVar8 / 0x26 + (lVar8 >> 0x3f);
  piVar6 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar6) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar6 = (int *)unaff_RBX[1];
  }
  *piVar6 = (int)(lVar8 >> 2) - (int)(lVar8 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar3 = *(longlong *)(unaff_RDI + 0x1890) - *(longlong *)(unaff_RDI + 0x1888);
  lVar8 = lVar3 >> 0x3f;
  iVar7 = iVar9;
  if (lVar3 / 0x98 + lVar8 != lVar8) {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x1890) - *(longlong *)(unaff_RDI + 0x1888)) / 0x98));
  }
  FUN_180639ec0();
  puVar4 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(unaff_RDI + 0x18c9);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar4 = (undefined1 *)unaff_RBX[1];
  }
  *puVar4 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar5 = (undefined4 *)unaff_RBX[1];
  if (*(char *)(unaff_RDI + 0x18c9) != '\0') {
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  *puVar5 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  do {
    piVar6 = (int *)unaff_RBX[1];
    if ((ulonglong)((*unaff_RBX - (longlong)piVar6) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      piVar6 = (int *)unaff_RBX[1];
    }
    *piVar6 = iVar9;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    FUN_180639ec0();
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x10);
  return;
}





// 函数: void FUN_180271bcb(void)
void FUN_180271bcb(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  longlong *unaff_RBX;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong unaff_RDI;
  
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  lVar8 = 0x10;
  do {
    FUN_180639ec0();
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  FUN_18025a940(&UNK_18098dfd0,*(undefined4 *)(unaff_RDI + 0x7c8));
  puVar4 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(unaff_RDI + 0x7cc);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar4 = (undefined1 *)unaff_RBX[1];
  }
  *puVar4 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  if (*(char *)(unaff_RDI + 0x7cc) == '\0') {
    return;
  }
  puVar5 = (undefined4 *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  iVar9 = 0;
  *puVar5 = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar8 = *(longlong *)(unaff_RDI + 0x7f8) - *(longlong *)(unaff_RDI + 0x7f0);
  piVar6 = (int *)unaff_RBX[1];
  lVar8 = lVar8 / 0x26 + (lVar8 >> 0x3f);
  if ((ulonglong)((*unaff_RBX - (longlong)piVar6) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar6 = (int *)unaff_RBX[1];
  }
  *piVar6 = (int)(lVar8 >> 2) - (int)(lVar8 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar3 = *(longlong *)(unaff_RDI + 0x7f8) - *(longlong *)(unaff_RDI + 0x7f0);
  lVar8 = lVar3 >> 0x3f;
  iVar7 = iVar9;
  if (lVar3 / 0x98 + lVar8 != lVar8) {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x7f8) - *(longlong *)(unaff_RDI + 0x7f0)) / 0x98));
  }
  FUN_180639ec0();
  puVar4 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(unaff_RDI + 0x8a8);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar4 = (undefined1 *)unaff_RBX[1];
  }
  *puVar4 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar5 = (undefined4 *)unaff_RBX[1];
  uVar2 = *(undefined4 *)(unaff_RDI + 0x8ac);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  *puVar5 = uVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  FUN_180639ec0();
  lVar8 = *(longlong *)(unaff_RDI + 0x950) - *(longlong *)(unaff_RDI + 0x948);
  lVar8 = lVar8 / 0x26 + (lVar8 >> 0x3f);
  piVar6 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar6) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar6 = (int *)unaff_RBX[1];
  }
  *piVar6 = (int)(lVar8 >> 2) - (int)(lVar8 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar3 = *(longlong *)(unaff_RDI + 0x950) - *(longlong *)(unaff_RDI + 0x948);
  lVar8 = lVar3 >> 0x3f;
  iVar7 = iVar9;
  if (lVar3 / 0x98 + lVar8 != lVar8) {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x950) - *(longlong *)(unaff_RDI + 0x948)) / 0x98));
  }
  lVar8 = 5;
  do {
    FUN_180639ec0();
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  lVar8 = *(longlong *)(unaff_RDI + 0xc68) - *(longlong *)(unaff_RDI + 0xc60);
  lVar8 = lVar8 / 0x26 + (lVar8 >> 0x3f);
  piVar6 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar6) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar6 = (int *)unaff_RBX[1];
  }
  *piVar6 = (int)(lVar8 >> 2) - (int)(lVar8 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar3 = *(longlong *)(unaff_RDI + 0xc68) - *(longlong *)(unaff_RDI + 0xc60);
  lVar8 = lVar3 >> 0x3f;
  iVar7 = iVar9;
  if (lVar3 / 0x98 + lVar8 != lVar8) {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0xc68) - *(longlong *)(unaff_RDI + 0xc60)) / 0x98));
  }
  lVar8 = 9;
  do {
    FUN_180639ec0();
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  FUN_180639ec0();
  FUN_180639ec0();
  lVar8 = *(longlong *)(unaff_RDI + 0x1890) - *(longlong *)(unaff_RDI + 0x1888);
  lVar8 = lVar8 / 0x26 + (lVar8 >> 0x3f);
  piVar6 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar6) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar6 = (int *)unaff_RBX[1];
  }
  *piVar6 = (int)(lVar8 >> 2) - (int)(lVar8 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar3 = *(longlong *)(unaff_RDI + 0x1890) - *(longlong *)(unaff_RDI + 0x1888);
  lVar8 = lVar3 >> 0x3f;
  iVar7 = iVar9;
  if (lVar3 / 0x98 + lVar8 != lVar8) {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x1890) - *(longlong *)(unaff_RDI + 0x1888)) / 0x98));
  }
  FUN_180639ec0();
  puVar4 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(unaff_RDI + 0x18c9);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar4 = (undefined1 *)unaff_RBX[1];
  }
  *puVar4 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar5 = (undefined4 *)unaff_RBX[1];
  if (*(char *)(unaff_RDI + 0x18c9) != '\0') {
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  *puVar5 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  do {
    piVar6 = (int *)unaff_RBX[1];
    if ((ulonglong)((*unaff_RBX - (longlong)piVar6) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      piVar6 = (int *)unaff_RBX[1];
    }
    *piVar6 = iVar9;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    FUN_180639ec0();
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x10);
  return;
}





