#include "TaleWorlds.Native.Split.h"

// 03_rendering_part008.c - 4 个函数

// 函数: void FUN_180271c54(void)
void FUN_180271c54(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  longlong *unaff_RBX;
  int iVar8;
  longlong unaff_RBP;
  int iVar9;
  longlong unaff_RDI;
  
  do {
    FUN_180639ec0();
    unaff_RBP = unaff_RBP + -1;
  } while (unaff_RBP != 0);
  FUN_18025a940(&UNK_18098dfd0,*(undefined4 *)(unaff_RDI + 0x7c8));
  puVar5 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(unaff_RDI + 0x7cc);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar5 = (undefined1 *)unaff_RBX[1];
  }
  *puVar5 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  if (*(char *)(unaff_RDI + 0x7cc) == '\0') {
    return;
  }
  puVar6 = (undefined4 *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar6) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar6 = (undefined4 *)unaff_RBX[1];
  }
  iVar9 = 0;
  *puVar6 = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar3 = *(longlong *)(unaff_RDI + 0x7f8) - *(longlong *)(unaff_RDI + 0x7f0);
  piVar7 = (int *)unaff_RBX[1];
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  if ((ulonglong)((*unaff_RBX - (longlong)piVar7) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar7 = (int *)unaff_RBX[1];
  }
  *piVar7 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar4 = *(longlong *)(unaff_RDI + 0x7f8) - *(longlong *)(unaff_RDI + 0x7f0);
  lVar3 = lVar4 >> 0x3f;
  iVar8 = iVar9;
  if (lVar4 / 0x98 + lVar3 != lVar3) {
    do {
      FUN_180639ec0();
      iVar8 = iVar8 + 1;
    } while ((ulonglong)(longlong)iVar8 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x7f8) - *(longlong *)(unaff_RDI + 0x7f0)) / 0x98));
  }
  FUN_180639ec0();
  puVar5 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(unaff_RDI + 0x8a8);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar5 = (undefined1 *)unaff_RBX[1];
  }
  *puVar5 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar6 = (undefined4 *)unaff_RBX[1];
  uVar2 = *(undefined4 *)(unaff_RDI + 0x8ac);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar6) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar6 = (undefined4 *)unaff_RBX[1];
  }
  *puVar6 = uVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  FUN_180639ec0();
  lVar3 = *(longlong *)(unaff_RDI + 0x950) - *(longlong *)(unaff_RDI + 0x948);
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  piVar7 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar7) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar7 = (int *)unaff_RBX[1];
  }
  *piVar7 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar4 = *(longlong *)(unaff_RDI + 0x950) - *(longlong *)(unaff_RDI + 0x948);
  lVar3 = lVar4 >> 0x3f;
  iVar8 = iVar9;
  if (lVar4 / 0x98 + lVar3 != lVar3) {
    do {
      FUN_180639ec0();
      iVar8 = iVar8 + 1;
    } while ((ulonglong)(longlong)iVar8 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x950) - *(longlong *)(unaff_RDI + 0x948)) / 0x98));
  }
  lVar3 = 5;
  do {
    FUN_180639ec0();
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar3 = *(longlong *)(unaff_RDI + 0xc68) - *(longlong *)(unaff_RDI + 0xc60);
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  piVar7 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar7) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar7 = (int *)unaff_RBX[1];
  }
  *piVar7 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar4 = *(longlong *)(unaff_RDI + 0xc68) - *(longlong *)(unaff_RDI + 0xc60);
  lVar3 = lVar4 >> 0x3f;
  iVar8 = iVar9;
  if (lVar4 / 0x98 + lVar3 != lVar3) {
    do {
      FUN_180639ec0();
      iVar8 = iVar8 + 1;
    } while ((ulonglong)(longlong)iVar8 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0xc68) - *(longlong *)(unaff_RDI + 0xc60)) / 0x98));
  }
  lVar3 = 9;
  do {
    FUN_180639ec0();
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  FUN_180639ec0();
  FUN_180639ec0();
  lVar3 = *(longlong *)(unaff_RDI + 0x1890) - *(longlong *)(unaff_RDI + 0x1888);
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  piVar7 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar7) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar7 = (int *)unaff_RBX[1];
  }
  *piVar7 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar4 = *(longlong *)(unaff_RDI + 0x1890) - *(longlong *)(unaff_RDI + 0x1888);
  lVar3 = lVar4 >> 0x3f;
  iVar8 = iVar9;
  if (lVar4 / 0x98 + lVar3 != lVar3) {
    do {
      FUN_180639ec0();
      iVar8 = iVar8 + 1;
    } while ((ulonglong)(longlong)iVar8 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x1890) - *(longlong *)(unaff_RDI + 0x1888)) / 0x98));
  }
  FUN_180639ec0();
  puVar5 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(unaff_RDI + 0x18c9);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar5 = (undefined1 *)unaff_RBX[1];
  }
  *puVar5 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar6 = (undefined4 *)unaff_RBX[1];
  if (*(char *)(unaff_RDI + 0x18c9) != '\0') {
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    puVar6 = (undefined4 *)unaff_RBX[1];
  }
  if ((ulonglong)((*unaff_RBX - (longlong)puVar6) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar6 = (undefined4 *)unaff_RBX[1];
  }
  *puVar6 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  do {
    piVar7 = (int *)unaff_RBX[1];
    if ((ulonglong)((*unaff_RBX - (longlong)piVar7) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      piVar7 = (int *)unaff_RBX[1];
    }
    *piVar7 = iVar9;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    FUN_180639ec0();
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x10);
  return;
}





// 函数: void FUN_180271ca1(void)
void FUN_180271ca1(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  longlong *unaff_RBX;
  int iVar8;
  undefined1 unaff_SIL;
  int iVar9;
  longlong unaff_RDI;
  
  FUN_180639bf0();
  *(undefined1 *)unaff_RBX[1] = unaff_SIL;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  if (*(char *)(unaff_RDI + 0x7cc) == '\0') {
    return;
  }
  puVar6 = (undefined4 *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar6) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar6 = (undefined4 *)unaff_RBX[1];
  }
  iVar9 = 0;
  *puVar6 = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar3 = *(longlong *)(unaff_RDI + 0x7f8) - *(longlong *)(unaff_RDI + 0x7f0);
  piVar7 = (int *)unaff_RBX[1];
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  if ((ulonglong)((*unaff_RBX - (longlong)piVar7) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar7 = (int *)unaff_RBX[1];
  }
  *piVar7 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar4 = *(longlong *)(unaff_RDI + 0x7f8) - *(longlong *)(unaff_RDI + 0x7f0);
  lVar3 = lVar4 >> 0x3f;
  iVar8 = iVar9;
  if (lVar4 / 0x98 + lVar3 != lVar3) {
    do {
      FUN_180639ec0();
      iVar8 = iVar8 + 1;
    } while ((ulonglong)(longlong)iVar8 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x7f8) - *(longlong *)(unaff_RDI + 0x7f0)) / 0x98));
  }
  FUN_180639ec0();
  puVar5 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(unaff_RDI + 0x8a8);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar5 = (undefined1 *)unaff_RBX[1];
  }
  *puVar5 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar6 = (undefined4 *)unaff_RBX[1];
  uVar2 = *(undefined4 *)(unaff_RDI + 0x8ac);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar6) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar6 = (undefined4 *)unaff_RBX[1];
  }
  *puVar6 = uVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  FUN_180639ec0();
  lVar3 = *(longlong *)(unaff_RDI + 0x950) - *(longlong *)(unaff_RDI + 0x948);
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  piVar7 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar7) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar7 = (int *)unaff_RBX[1];
  }
  *piVar7 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar4 = *(longlong *)(unaff_RDI + 0x950) - *(longlong *)(unaff_RDI + 0x948);
  lVar3 = lVar4 >> 0x3f;
  iVar8 = iVar9;
  if (lVar4 / 0x98 + lVar3 != lVar3) {
    do {
      FUN_180639ec0();
      iVar8 = iVar8 + 1;
    } while ((ulonglong)(longlong)iVar8 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x950) - *(longlong *)(unaff_RDI + 0x948)) / 0x98));
  }
  lVar3 = 5;
  do {
    FUN_180639ec0();
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar3 = *(longlong *)(unaff_RDI + 0xc68) - *(longlong *)(unaff_RDI + 0xc60);
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  piVar7 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar7) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar7 = (int *)unaff_RBX[1];
  }
  *piVar7 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar4 = *(longlong *)(unaff_RDI + 0xc68) - *(longlong *)(unaff_RDI + 0xc60);
  lVar3 = lVar4 >> 0x3f;
  iVar8 = iVar9;
  if (lVar4 / 0x98 + lVar3 != lVar3) {
    do {
      FUN_180639ec0();
      iVar8 = iVar8 + 1;
    } while ((ulonglong)(longlong)iVar8 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0xc68) - *(longlong *)(unaff_RDI + 0xc60)) / 0x98));
  }
  lVar3 = 9;
  do {
    FUN_180639ec0();
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  FUN_180639ec0();
  FUN_180639ec0();
  lVar3 = *(longlong *)(unaff_RDI + 0x1890) - *(longlong *)(unaff_RDI + 0x1888);
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  piVar7 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar7) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar7 = (int *)unaff_RBX[1];
  }
  *piVar7 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar4 = *(longlong *)(unaff_RDI + 0x1890) - *(longlong *)(unaff_RDI + 0x1888);
  lVar3 = lVar4 >> 0x3f;
  iVar8 = iVar9;
  if (lVar4 / 0x98 + lVar3 != lVar3) {
    do {
      FUN_180639ec0();
      iVar8 = iVar8 + 1;
    } while ((ulonglong)(longlong)iVar8 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x1890) - *(longlong *)(unaff_RDI + 0x1888)) / 0x98));
  }
  FUN_180639ec0();
  puVar5 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(unaff_RDI + 0x18c9);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar5 = (undefined1 *)unaff_RBX[1];
  }
  *puVar5 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar6 = (undefined4 *)unaff_RBX[1];
  if (*(char *)(unaff_RDI + 0x18c9) != '\0') {
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    puVar6 = (undefined4 *)unaff_RBX[1];
  }
  if ((ulonglong)((*unaff_RBX - (longlong)puVar6) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar6 = (undefined4 *)unaff_RBX[1];
  }
  *puVar6 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  do {
    piVar7 = (int *)unaff_RBX[1];
    if ((ulonglong)((*unaff_RBX - (longlong)piVar7) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      piVar7 = (int *)unaff_RBX[1];
    }
    *piVar7 = iVar9;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    FUN_180639ec0();
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x10);
  return;
}





// 函数: void FUN_180271cc9(void)
void FUN_180271cc9(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  longlong *unaff_RBX;
  int iVar8;
  int iVar9;
  longlong unaff_RDI;
  undefined8 in_stack_00000030;
  undefined8 uStack0000000000000040;
  
  uStack0000000000000040 = in_stack_00000030;
  puVar6 = (undefined4 *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar6) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar6 = (undefined4 *)unaff_RBX[1];
  }
  iVar9 = 0;
  *puVar6 = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar3 = *(longlong *)(unaff_RDI + 0x7f8) - *(longlong *)(unaff_RDI + 0x7f0);
  piVar7 = (int *)unaff_RBX[1];
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  if ((ulonglong)((*unaff_RBX - (longlong)piVar7) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar7 = (int *)unaff_RBX[1];
  }
  *piVar7 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar4 = *(longlong *)(unaff_RDI + 0x7f8) - *(longlong *)(unaff_RDI + 0x7f0);
  lVar3 = lVar4 >> 0x3f;
  iVar8 = iVar9;
  if (lVar4 / 0x98 + lVar3 != lVar3) {
    do {
      FUN_180639ec0();
      iVar8 = iVar8 + 1;
    } while ((ulonglong)(longlong)iVar8 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x7f8) - *(longlong *)(unaff_RDI + 0x7f0)) / 0x98));
  }
  FUN_180639ec0();
  puVar5 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(unaff_RDI + 0x8a8);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar5 = (undefined1 *)unaff_RBX[1];
  }
  *puVar5 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar6 = (undefined4 *)unaff_RBX[1];
  uVar2 = *(undefined4 *)(unaff_RDI + 0x8ac);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar6) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar6 = (undefined4 *)unaff_RBX[1];
  }
  *puVar6 = uVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  FUN_180639ec0();
  lVar3 = *(longlong *)(unaff_RDI + 0x950) - *(longlong *)(unaff_RDI + 0x948);
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  piVar7 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar7) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar7 = (int *)unaff_RBX[1];
  }
  *piVar7 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar4 = *(longlong *)(unaff_RDI + 0x950) - *(longlong *)(unaff_RDI + 0x948);
  lVar3 = lVar4 >> 0x3f;
  iVar8 = iVar9;
  if (lVar4 / 0x98 + lVar3 != lVar3) {
    do {
      FUN_180639ec0();
      iVar8 = iVar8 + 1;
    } while ((ulonglong)(longlong)iVar8 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x950) - *(longlong *)(unaff_RDI + 0x948)) / 0x98));
  }
  lVar3 = 5;
  do {
    FUN_180639ec0();
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar3 = *(longlong *)(unaff_RDI + 0xc68) - *(longlong *)(unaff_RDI + 0xc60);
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  piVar7 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar7) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar7 = (int *)unaff_RBX[1];
  }
  *piVar7 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar4 = *(longlong *)(unaff_RDI + 0xc68) - *(longlong *)(unaff_RDI + 0xc60);
  lVar3 = lVar4 >> 0x3f;
  iVar8 = iVar9;
  if (lVar4 / 0x98 + lVar3 != lVar3) {
    do {
      FUN_180639ec0();
      iVar8 = iVar8 + 1;
    } while ((ulonglong)(longlong)iVar8 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0xc68) - *(longlong *)(unaff_RDI + 0xc60)) / 0x98));
  }
  lVar3 = 9;
  do {
    FUN_180639ec0();
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  FUN_180639ec0();
  FUN_180639ec0();
  lVar3 = *(longlong *)(unaff_RDI + 0x1890) - *(longlong *)(unaff_RDI + 0x1888);
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  piVar7 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar7) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar7 = (int *)unaff_RBX[1];
  }
  *piVar7 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar4 = *(longlong *)(unaff_RDI + 0x1890) - *(longlong *)(unaff_RDI + 0x1888);
  lVar3 = lVar4 >> 0x3f;
  iVar8 = iVar9;
  if (lVar4 / 0x98 + lVar3 != lVar3) {
    do {
      FUN_180639ec0();
      iVar8 = iVar8 + 1;
    } while ((ulonglong)(longlong)iVar8 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x1890) - *(longlong *)(unaff_RDI + 0x1888)) / 0x98));
  }
  FUN_180639ec0();
  puVar5 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(unaff_RDI + 0x18c9);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar5 = (undefined1 *)unaff_RBX[1];
  }
  *puVar5 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar6 = (undefined4 *)unaff_RBX[1];
  if (*(char *)(unaff_RDI + 0x18c9) != '\0') {
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    puVar6 = (undefined4 *)unaff_RBX[1];
  }
  if ((ulonglong)((*unaff_RBX - (longlong)puVar6) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar6 = (undefined4 *)unaff_RBX[1];
  }
  *puVar6 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  do {
    piVar7 = (int *)unaff_RBX[1];
    if ((ulonglong)((*unaff_RBX - (longlong)piVar7) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      piVar7 = (int *)unaff_RBX[1];
    }
    *piVar7 = iVar9;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    FUN_180639ec0();
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180271cf0(longlong param_1,longlong param_2)
void FUN_180271cf0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  uint *puVar7;
  undefined *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_118 [32];
  undefined8 uStack_f8;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined4 uStack_d8;
  undefined auStack_d0 [136];
  ulonglong uStack_48;
  
  uStack_f8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_118;
  lVar13 = *(longlong *)(param_2 + 8);
  piVar3 = (int *)(lVar13 + 4);
  *(int **)(param_2 + 8) = piVar3;
  iVar1 = *piVar3;
  *(longlong *)(param_2 + 8) = lVar13 + 8;
  FUN_180272e40(param_1 + 0x20,(longlong)iVar1);
  uVar10 = 0;
  lVar13 = *(longlong *)(param_1 + 0x20);
  lVar5 = *(longlong *)(param_1 + 0x28) - lVar13;
  lVar2 = lVar5 >> 0x3f;
  uVar9 = uVar10;
  uVar12 = uVar10;
  if (lVar5 / 0x98 + lVar2 == lVar2) {
    puVar7 = *(uint **)(param_2 + 8);
  }
  else {
    do {
      uVar11 = **(uint **)(param_2 + 8);
      puVar7 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar7;
      if (uVar11 != 0) {
        (**(code **)(*(longlong *)(uVar9 + lVar13) + 0x18))
                  ((longlong *)(uVar9 + lVar13),puVar7,uVar11);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar11;
        puVar7 = *(uint **)(param_2 + 8);
      }
      uVar11 = (int)uVar12 + 1;
      lVar13 = *(longlong *)(param_1 + 0x20);
      uVar9 = uVar9 + 0x98;
      uVar12 = (ulonglong)uVar11;
    } while ((ulonglong)(longlong)(int)uVar11 <
             (ulonglong)((*(longlong *)(param_1 + 0x28) - lVar13) / 0x98));
  }
  uVar11 = *puVar7;
  puVar7 = puVar7 + 1;
  *(uint **)(param_2 + 8) = puVar7;
  if (uVar11 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x40) + 0x18))((longlong *)(param_1 + 0x40),puVar7,uVar11);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar11;
    puVar7 = *(uint **)(param_2 + 8);
  }
  *(char *)(param_1 + 0xd8) = (char)*puVar7;
  puVar4 = (undefined4 *)(*(longlong *)(param_2 + 8) + 1);
  *(undefined4 **)(param_2 + 8) = puVar4;
  *(undefined4 *)(param_1 + 0xdc) = *puVar4;
  lVar13 = *(longlong *)(param_2 + 8);
  puVar7 = (uint *)(lVar13 + 4);
  *(uint **)(param_2 + 8) = puVar7;
  uVar11 = *puVar7;
  piVar3 = (int *)(lVar13 + 8);
  *(int **)(param_2 + 8) = piVar3;
  if (uVar11 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0xe0) + 0x18))((longlong *)(param_1 + 0xe0),piVar3,uVar11);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar11;
    piVar3 = *(int **)(param_2 + 8);
  }
  iVar1 = *piVar3;
  *(int **)(param_2 + 8) = piVar3 + 1;
  FUN_180272e40(param_1 + 0x178,(longlong)iVar1);
  lVar13 = *(longlong *)(param_1 + 0x178);
  lVar5 = *(longlong *)(param_1 + 0x180) - lVar13;
  lVar2 = lVar5 >> 0x3f;
  uVar9 = uVar10;
  uVar12 = uVar10;
  if (lVar5 / 0x98 + lVar2 != lVar2) {
    do {
      uVar11 = **(uint **)(param_2 + 8);
      puVar7 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar7;
      if (uVar11 != 0) {
        (**(code **)(*(longlong *)(uVar9 + lVar13) + 0x18))
                  ((longlong *)(uVar9 + lVar13),puVar7,uVar11);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar11;
      }
      uVar11 = (int)uVar12 + 1;
      lVar13 = *(longlong *)(param_1 + 0x178);
      uVar9 = uVar9 + 0x98;
      uVar12 = (ulonglong)uVar11;
    } while ((ulonglong)(longlong)(int)uVar11 <
             (ulonglong)((*(longlong *)(param_1 + 0x180) - lVar13) / 0x98));
  }
  plVar6 = (longlong *)(param_1 + 0x198);
  lVar13 = 5;
  do {
    uVar11 = **(uint **)(param_2 + 8);
    puVar7 = *(uint **)(param_2 + 8) + 1;
    *(uint **)(param_2 + 8) = puVar7;
    if (uVar11 != 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6,puVar7,uVar11);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar11;
      puVar7 = *(uint **)(param_2 + 8);
    }
    plVar6 = plVar6 + 0x13;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  lVar13 = (longlong)(int)*puVar7;
  *(uint **)(param_2 + 8) = puVar7 + 1;
  FUN_180272e40(param_1 + 0x490,lVar13);
  uVar9 = uVar10;
  if (0 < lVar13) {
    do {
      plVar6 = (longlong *)(*(longlong *)(param_1 + 0x490) + uVar9);
      uVar11 = **(uint **)(param_2 + 8);
      puVar7 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar7;
      if (uVar11 != 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6,puVar7,uVar11);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar11;
      }
      lVar13 = lVar13 + -1;
      uVar9 = uVar9 + 0x98;
    } while (lVar13 != 0);
  }
  plVar6 = (longlong *)(param_1 + 0xa30);
  lVar13 = 9;
  do {
    uVar11 = **(uint **)(param_2 + 8);
    puVar7 = *(uint **)(param_2 + 8) + 1;
    *(uint **)(param_2 + 8) = puVar7;
    if (uVar11 != 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6,puVar7,uVar11);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar11;
      puVar7 = *(uint **)(param_2 + 8);
    }
    plVar6 = plVar6 + 0x13;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  uVar11 = *puVar7;
  puVar7 = puVar7 + 1;
  *(uint **)(param_2 + 8) = puVar7;
  if (uVar11 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0xf88) + 0x18))(param_1 + 0xf88,puVar7,uVar11);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar11;
    puVar7 = *(uint **)(param_2 + 8);
  }
  uVar11 = *puVar7;
  puVar7 = puVar7 + 1;
  *(uint **)(param_2 + 8) = puVar7;
  if (uVar11 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x1020) + 0x18))(param_1 + 0x1020,puVar7,uVar11);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar11;
    puVar7 = *(uint **)(param_2 + 8);
  }
  lVar13 = (longlong)(int)*puVar7;
  *(uint **)(param_2 + 8) = puVar7 + 1;
  FUN_180272e40(param_1 + 0x10b8,lVar13);
  if (lVar13 < 1) {
    puVar7 = *(uint **)(param_2 + 8);
  }
  else {
    do {
      plVar6 = (longlong *)(*(longlong *)(param_1 + 0x10b8) + uVar10);
      uVar11 = **(uint **)(param_2 + 8);
      puVar7 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar7;
      if (uVar11 != 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6,puVar7,uVar11);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar11;
        puVar7 = *(uint **)(param_2 + 8);
      }
      uVar10 = uVar10 + 0x98;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  uVar11 = *puVar7;
  puVar7 = puVar7 + 1;
  *(uint **)(param_2 + 8) = puVar7;
  if (uVar11 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x10d8) + 0x18))
              ((longlong *)(param_1 + 0x10d8),puVar7,uVar11);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar11;
    puVar7 = *(uint **)(param_2 + 8);
  }
  *(char *)(param_1 + 0x10f9) = (char)*puVar7;
  lVar13 = *(longlong *)(param_2 + 8);
  puVar7 = (uint *)(lVar13 + 1);
  *(uint **)(param_2 + 8) = puVar7;
  if (*(char *)(param_1 + 0x10f9) != '\0') {
    uVar11 = *puVar7;
    puVar7 = (uint *)(lVar13 + 5);
    *(uint **)(param_2 + 8) = puVar7;
    if (uVar11 != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x1100) + 0x18))
                ((longlong *)(param_1 + 0x1100),puVar7,uVar11);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar11;
      puVar7 = *(uint **)(param_2 + 8);
    }
    uVar11 = *puVar7;
    puVar7 = puVar7 + 1;
    *(uint **)(param_2 + 8) = puVar7;
    if (uVar11 != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x1198) + 0x18))
                ((longlong *)(param_1 + 0x1198),puVar7,uVar11);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar11;
      puVar7 = *(uint **)(param_2 + 8);
    }
    uVar11 = *puVar7;
    puVar7 = puVar7 + 1;
    *(uint **)(param_2 + 8) = puVar7;
    if (uVar11 != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x1230) + 0x18))
                ((longlong *)(param_1 + 0x1230),puVar7,uVar11);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar11;
      puVar7 = *(uint **)(param_2 + 8);
    }
    uVar11 = *puVar7;
    puVar7 = puVar7 + 1;
    *(uint **)(param_2 + 8) = puVar7;
    if (uVar11 != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x12c8) + 0x18))
                ((longlong *)(param_1 + 0x12c8),puVar7,uVar11);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar11;
      puVar7 = *(uint **)(param_2 + 8);
    }
    uVar11 = *puVar7;
    puVar7 = puVar7 + 1;
    *(uint **)(param_2 + 8) = puVar7;
    if (uVar11 != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x1360) + 0x18))
                ((longlong *)(param_1 + 0x1360),puVar7,uVar11);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar11;
      puVar7 = *(uint **)(param_2 + 8);
    }
    uVar11 = *puVar7;
    puVar7 = puVar7 + 1;
    *(uint **)(param_2 + 8) = puVar7;
    if (uVar11 != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x13f8) + 0x18))
                ((longlong *)(param_1 + 0x13f8),puVar7,uVar11);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar11;
      puVar7 = *(uint **)(param_2 + 8);
    }
  }
  uVar11 = *puVar7;
  lVar13 = (longlong)(int)uVar11;
  *(uint **)(param_2 + 8) = puVar7 + 1;
  if (0 < (int)uVar11) {
    plVar6 = (longlong *)(param_1 + 0x4b0);
    do {
      iVar1 = **(int **)(param_2 + 8);
      *(int **)(param_2 + 8) = *(int **)(param_2 + 8) + 1;
      puStack_e8 = &UNK_1809fcc28;
      puStack_e0 = auStack_d0;
      uStack_d8 = 0;
      auStack_d0[0] = 0;
      uVar11 = **(uint **)(param_2 + 8);
      puVar7 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar7;
      if (uVar11 != 0) {
        FUN_180049910(&puStack_e8,puVar7,uVar11);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar11;
      }
      if (iVar1 < 0x10) {
        puVar8 = &DAT_18098bc73;
        if (puStack_e0 != (undefined *)0x0) {
          puVar8 = puStack_e0;
        }
        (**(code **)(*plVar6 + 0x10))(plVar6,puVar8);
      }
      puStack_e8 = &UNK_18098bcb0;
      plVar6 = plVar6 + 0xb;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_118);
}





