#include "TaleWorlds.Native.Split.h"

// 99_part_04_part013.c - 9 个函数

// 函数: void FUN_180262bc0(int8_t *param_1,longlong *param_2)
void FUN_180262bc0(int8_t *param_1,longlong *param_2)

{
  int8_t uVar1;
  int *piVar2;
  int8_t *puVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar1 = *param_1;
  puVar3 = (int8_t *)param_2[1];
  if ((ulonglong)((param_2[2] - (longlong)puVar3) + *param_2) < 2) {
    FUN_180639bf0(param_2,puVar3 + (1 - *param_2));
    puVar3 = (int8_t *)param_2[1];
  }
  *puVar3 = uVar1;
  param_2[1] = param_2[1] + 1;
  puVar3 = (int8_t *)param_2[1];
  uVar1 = param_1[1];
  if ((ulonglong)((param_2[2] - (longlong)puVar3) + *param_2) < 2) {
    FUN_180639bf0(param_2,puVar3 + (1 - *param_2));
    puVar3 = (int8_t *)param_2[1];
  }
  *puVar3 = uVar1;
  param_2[1] = param_2[1] + 1;
  puVar3 = (int8_t *)param_2[1];
  uVar1 = param_1[2];
  if ((ulonglong)((param_2[2] - (longlong)puVar3) + *param_2) < 2) {
    FUN_180639bf0(param_2,puVar3 + (1 - *param_2));
    puVar3 = (int8_t *)param_2[1];
  }
  *puVar3 = uVar1;
  param_2[1] = param_2[1] + 1;
  puVar3 = (int8_t *)param_2[1];
  uVar1 = param_1[3];
  if ((ulonglong)((param_2[2] - (longlong)puVar3) + *param_2) < 2) {
    FUN_180639bf0(param_2,puVar3 + (1 - *param_2));
    puVar3 = (int8_t *)param_2[1];
  }
  *puVar3 = uVar1;
  param_2[1] = param_2[1] + 1;
  puVar3 = (int8_t *)param_2[1];
  uVar1 = param_1[4];
  if ((ulonglong)((param_2[2] - (longlong)puVar3) + *param_2) < 2) {
    FUN_180639bf0(param_2,puVar3 + (1 - *param_2));
    puVar3 = (int8_t *)param_2[1];
  }
  *puVar3 = uVar1;
  param_2[1] = param_2[1] + 1;
  puVar3 = (int8_t *)param_2[1];
  uVar1 = param_1[5];
  if ((ulonglong)((param_2[2] - (longlong)puVar3) + *param_2) < 2) {
    FUN_180639bf0(param_2,puVar3 + (1 - *param_2));
    puVar3 = (int8_t *)param_2[1];
  }
  *puVar3 = uVar1;
  param_2[1] = param_2[1] + 1;
  piVar2 = (int *)param_2[1];
  lVar8 = *(longlong *)(param_1 + 0x10);
  lVar9 = *(longlong *)(param_1 + 8);
  if ((ulonglong)((param_2[2] - (longlong)piVar2) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)piVar2 + (4 - *param_2));
    piVar2 = (int *)param_2[1];
  }
  iVar5 = (int)(lVar8 - lVar9 >> 6);
  *piVar2 = iVar5;
  uVar7 = 0;
  param_2[1] = param_2[1] + 4;
  piVar2 = (int *)param_2[1];
  lVar8 = (longlong)iVar5;
  uVar6 = uVar7;
  uVar10 = uVar7;
  if (0 < iVar5) {
    do {
      lVar9 = (longlong)(int)uVar10 * 0x40;
      FUN_180639ec0(param_2,*(longlong *)(param_1 + 8) + lVar9);
      puVar3 = (int8_t *)param_2[1];
      uVar1 = *(int8_t *)(uVar6 + 0x20 + *(longlong *)(param_1 + 8));
      if ((ulonglong)((param_2[2] - (longlong)puVar3) + *param_2) < 2) {
        FUN_180639bf0(param_2,puVar3 + (1 - *param_2));
        puVar3 = (int8_t *)param_2[1];
      }
      *puVar3 = uVar1;
      param_2[1] = param_2[1] + 1;
      puVar3 = (int8_t *)param_2[1];
      uVar1 = *(int8_t *)(uVar6 + 0x21 + *(longlong *)(param_1 + 8));
      if ((ulonglong)((param_2[2] - (longlong)puVar3) + *param_2) < 2) {
        FUN_180639bf0(param_2,puVar3 + (1 - *param_2));
        puVar3 = (int8_t *)param_2[1];
      }
      *puVar3 = uVar1;
      param_2[1] = param_2[1] + 1;
      puVar3 = (int8_t *)param_2[1];
      uVar1 = *(int8_t *)(uVar6 + 0x22 + *(longlong *)(param_1 + 8));
      if ((ulonglong)((param_2[2] - (longlong)puVar3) + *param_2) < 2) {
        FUN_180639bf0(param_2,puVar3 + (1 - *param_2));
        puVar3 = (int8_t *)param_2[1];
      }
      *puVar3 = uVar1;
      param_2[1] = param_2[1] + 1;
      puVar3 = (int8_t *)param_2[1];
      uVar1 = *(int8_t *)(uVar6 + 0x23 + *(longlong *)(param_1 + 8));
      if ((ulonglong)((param_2[2] - (longlong)puVar3) + *param_2) < 2) {
        FUN_180639bf0(param_2,puVar3 + (1 - *param_2));
        puVar3 = (int8_t *)param_2[1];
      }
      *puVar3 = uVar1;
      param_2[1] = param_2[1] + 1;
      puVar3 = (int8_t *)param_2[1];
      uVar1 = *(int8_t *)(uVar6 + 0x24 + *(longlong *)(param_1 + 8));
      if ((ulonglong)((param_2[2] - (longlong)puVar3) + *param_2) < 2) {
        FUN_180639bf0(param_2,puVar3 + (1 - *param_2));
        puVar3 = (int8_t *)param_2[1];
      }
      *puVar3 = uVar1;
      param_2[1] = param_2[1] + 1;
      puVar3 = (int8_t *)param_2[1];
      uVar1 = *(int8_t *)(uVar6 + 0x25 + *(longlong *)(param_1 + 8));
      if ((ulonglong)((param_2[2] - (longlong)puVar3) + *param_2) < 2) {
        FUN_180639bf0(param_2,puVar3 + (1 - *param_2));
        puVar3 = (int8_t *)param_2[1];
      }
      *puVar3 = uVar1;
      param_2[1] = param_2[1] + 1;
      piVar2 = (int *)0x180bf8e98;
      uVar4 = uVar7;
      do {
        if (*piVar2 == *(int *)(uVar6 + 0x28 + *(longlong *)(param_1 + 8))) {
          FUN_180639de0(param_2,*(uint64_t *)(uVar4 * 0x10 + 0x180bf8e90));
          break;
        }
        uVar4 = uVar4 + 1;
        piVar2 = piVar2 + 4;
      } while ((longlong)piVar2 < 0x180bf8eb8);
      FUN_180639fd0(param_2,*(longlong *)(param_1 + 8) + 0x2c + lVar9);
      lVar8 = lVar8 + -1;
      uVar6 = uVar6 + 0x40;
      uVar10 = (ulonglong)((int)uVar10 + 1);
    } while (lVar8 != 0);
    piVar2 = (int *)param_2[1];
  }
  iVar5 = (int)((*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28)) / 0x28);
  if ((ulonglong)((param_2[2] - (longlong)piVar2) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)piVar2 + (4 - *param_2));
    piVar2 = (int *)param_2[1];
  }
  *piVar2 = iVar5;
  param_2[1] = param_2[1] + 4;
  lVar8 = (longlong)iVar5;
  uVar6 = uVar7;
  if (0 < iVar5) {
    do {
      FUN_180639ec0(param_2,*(longlong *)(param_1 + 0x28) + ((longlong)(int)uVar6 * 5 + 1) * 8);
      puVar3 = (int8_t *)param_2[1];
      uVar1 = *(int8_t *)(uVar7 + *(longlong *)(param_1 + 0x28));
      if ((ulonglong)((param_2[2] - (longlong)puVar3) + *param_2) < 2) {
        FUN_180639bf0(param_2,puVar3 + (1 - *param_2));
        puVar3 = (int8_t *)param_2[1];
      }
      *puVar3 = uVar1;
      param_2[1] = param_2[1] + 1;
      uVar7 = uVar7 + 0x28;
      lVar8 = lVar8 + -1;
      uVar6 = (ulonglong)((int)uVar6 + 1);
    } while (lVar8 != 0);
  }
  return;
}






// 函数: void FUN_180262bd9(uint64_t param_1,longlong *param_2)
void FUN_180262bd9(uint64_t param_1,longlong *param_2)

{
  int8_t uVar1;
  int *piVar2;
  int8_t *puVar3;
  longlong *unaff_RBX;
  longlong lVar4;
  int8_t unaff_SIL;
  int iVar5;
  longlong lVar6;
  longlong unaff_RDI;
  longlong lVar7;
  
  puVar3 = (int8_t *)param_2[1];
  if ((ulonglong)((unaff_RBX[2] - (longlong)puVar3) + *param_2) < 2) {
    FUN_180639bf0();
    puVar3 = (int8_t *)unaff_RBX[1];
  }
  *puVar3 = unaff_SIL;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar3 = (int8_t *)unaff_RBX[1];
  uVar1 = *(int8_t *)(unaff_RDI + 1);
  if ((ulonglong)((unaff_RBX[2] - (longlong)puVar3) + *unaff_RBX) < 2) {
    FUN_180639bf0();
    puVar3 = (int8_t *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar3 = (int8_t *)unaff_RBX[1];
  uVar1 = *(int8_t *)(unaff_RDI + 2);
  if ((ulonglong)((unaff_RBX[2] - (longlong)puVar3) + *unaff_RBX) < 2) {
    FUN_180639bf0();
    puVar3 = (int8_t *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar3 = (int8_t *)unaff_RBX[1];
  uVar1 = *(int8_t *)(unaff_RDI + 3);
  if ((ulonglong)((unaff_RBX[2] - (longlong)puVar3) + *unaff_RBX) < 2) {
    FUN_180639bf0();
    puVar3 = (int8_t *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar3 = (int8_t *)unaff_RBX[1];
  uVar1 = *(int8_t *)(unaff_RDI + 4);
  if ((ulonglong)((unaff_RBX[2] - (longlong)puVar3) + *unaff_RBX) < 2) {
    FUN_180639bf0();
    puVar3 = (int8_t *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar3 = (int8_t *)unaff_RBX[1];
  uVar1 = *(int8_t *)(unaff_RDI + 5);
  if ((ulonglong)((unaff_RBX[2] - (longlong)puVar3) + *unaff_RBX) < 2) {
    FUN_180639bf0();
    puVar3 = (int8_t *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  piVar2 = (int *)unaff_RBX[1];
  lVar4 = *(longlong *)(unaff_RDI + 0x10);
  lVar6 = *(longlong *)(unaff_RDI + 8);
  if ((ulonglong)((unaff_RBX[2] - (longlong)piVar2) + *unaff_RBX) < 5) {
    FUN_180639bf0();
    piVar2 = (int *)unaff_RBX[1];
  }
  iVar5 = (int)(lVar4 - lVar6 >> 6);
  *piVar2 = iVar5;
  lVar6 = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  piVar2 = (int *)unaff_RBX[1];
  lVar7 = (longlong)iVar5;
  lVar4 = lVar6;
  if (0 < iVar5) {
    do {
      FUN_180639ec0();
      puVar3 = (int8_t *)unaff_RBX[1];
      uVar1 = *(int8_t *)(lVar4 + 0x20 + *(longlong *)(unaff_RDI + 8));
      if ((ulonglong)((unaff_RBX[2] - (longlong)puVar3) + *unaff_RBX) < 2) {
        FUN_180639bf0();
        puVar3 = (int8_t *)unaff_RBX[1];
      }
      *puVar3 = uVar1;
      unaff_RBX[1] = unaff_RBX[1] + 1;
      puVar3 = (int8_t *)unaff_RBX[1];
      uVar1 = *(int8_t *)(lVar4 + 0x21 + *(longlong *)(unaff_RDI + 8));
      if ((ulonglong)((unaff_RBX[2] - (longlong)puVar3) + *unaff_RBX) < 2) {
        FUN_180639bf0();
        puVar3 = (int8_t *)unaff_RBX[1];
      }
      *puVar3 = uVar1;
      unaff_RBX[1] = unaff_RBX[1] + 1;
      puVar3 = (int8_t *)unaff_RBX[1];
      uVar1 = *(int8_t *)(lVar4 + 0x22 + *(longlong *)(unaff_RDI + 8));
      if ((ulonglong)((unaff_RBX[2] - (longlong)puVar3) + *unaff_RBX) < 2) {
        FUN_180639bf0();
        puVar3 = (int8_t *)unaff_RBX[1];
      }
      *puVar3 = uVar1;
      unaff_RBX[1] = unaff_RBX[1] + 1;
      puVar3 = (int8_t *)unaff_RBX[1];
      uVar1 = *(int8_t *)(lVar4 + 0x23 + *(longlong *)(unaff_RDI + 8));
      if ((ulonglong)((unaff_RBX[2] - (longlong)puVar3) + *unaff_RBX) < 2) {
        FUN_180639bf0();
        puVar3 = (int8_t *)unaff_RBX[1];
      }
      *puVar3 = uVar1;
      unaff_RBX[1] = unaff_RBX[1] + 1;
      puVar3 = (int8_t *)unaff_RBX[1];
      uVar1 = *(int8_t *)(lVar4 + 0x24 + *(longlong *)(unaff_RDI + 8));
      if ((ulonglong)((unaff_RBX[2] - (longlong)puVar3) + *unaff_RBX) < 2) {
        FUN_180639bf0();
        puVar3 = (int8_t *)unaff_RBX[1];
      }
      *puVar3 = uVar1;
      unaff_RBX[1] = unaff_RBX[1] + 1;
      puVar3 = (int8_t *)unaff_RBX[1];
      uVar1 = *(int8_t *)(lVar4 + 0x25 + *(longlong *)(unaff_RDI + 8));
      if ((ulonglong)((unaff_RBX[2] - (longlong)puVar3) + *unaff_RBX) < 2) {
        FUN_180639bf0();
        puVar3 = (int8_t *)unaff_RBX[1];
      }
      *puVar3 = uVar1;
      unaff_RBX[1] = unaff_RBX[1] + 1;
      piVar2 = (int *)0x180bf8e98;
      do {
        if (*piVar2 == *(int *)(lVar4 + 0x28 + *(longlong *)(unaff_RDI + 8))) {
          FUN_180639de0();
          break;
        }
        piVar2 = piVar2 + 4;
      } while ((longlong)piVar2 < 0x180bf8eb8);
      FUN_180639fd0();
      lVar7 = lVar7 + -1;
      lVar4 = lVar4 + 0x40;
    } while (lVar7 != 0);
    piVar2 = (int *)unaff_RBX[1];
  }
  iVar5 = (int)((*(longlong *)(unaff_RDI + 0x30) - *(longlong *)(unaff_RDI + 0x28)) / 0x28);
  if ((ulonglong)((unaff_RBX[2] - (longlong)piVar2) + *unaff_RBX) < 5) {
    FUN_180639bf0();
    piVar2 = (int *)unaff_RBX[1];
  }
  *piVar2 = iVar5;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar4 = (longlong)iVar5;
  if (0 < iVar5) {
    do {
      FUN_180639ec0();
      puVar3 = (int8_t *)unaff_RBX[1];
      uVar1 = *(int8_t *)(lVar6 + *(longlong *)(unaff_RDI + 0x28));
      if ((ulonglong)((unaff_RBX[2] - (longlong)puVar3) + *unaff_RBX) < 2) {
        FUN_180639bf0();
        puVar3 = (int8_t *)unaff_RBX[1];
      }
      *puVar3 = uVar1;
      unaff_RBX[1] = unaff_RBX[1] + 1;
      lVar6 = lVar6 + 0x28;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}






// 函数: void FUN_180262d6a(void)
void FUN_180262d6a(void)

{
  int8_t uVar1;
  int iVar2;
  int *piVar3;
  int8_t *puVar4;
  longlong *unaff_RBX;
  longlong lVar5;
  ulonglong uVar6;
  longlong unaff_RDI;
  longlong unaff_R12;
  ulonglong unaff_R15;
  
  uVar6 = unaff_R15 & 0xffffffff;
  do {
    FUN_180639ec0();
    puVar4 = (int8_t *)unaff_RBX[1];
    uVar1 = *(int8_t *)(uVar6 + 0x20 + *(longlong *)(unaff_RDI + 8));
    if ((ulonglong)((unaff_RBX[2] - (longlong)puVar4) + *unaff_RBX) < 2) {
      FUN_180639bf0();
      puVar4 = (int8_t *)unaff_RBX[1];
    }
    *puVar4 = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + 1;
    puVar4 = (int8_t *)unaff_RBX[1];
    uVar1 = *(int8_t *)(uVar6 + 0x21 + *(longlong *)(unaff_RDI + 8));
    if ((ulonglong)((unaff_RBX[2] - (longlong)puVar4) + *unaff_RBX) < 2) {
      FUN_180639bf0();
      puVar4 = (int8_t *)unaff_RBX[1];
    }
    *puVar4 = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + 1;
    puVar4 = (int8_t *)unaff_RBX[1];
    uVar1 = *(int8_t *)(uVar6 + 0x22 + *(longlong *)(unaff_RDI + 8));
    if ((ulonglong)((unaff_RBX[2] - (longlong)puVar4) + *unaff_RBX) < 2) {
      FUN_180639bf0();
      puVar4 = (int8_t *)unaff_RBX[1];
    }
    *puVar4 = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + 1;
    puVar4 = (int8_t *)unaff_RBX[1];
    uVar1 = *(int8_t *)(uVar6 + 0x23 + *(longlong *)(unaff_RDI + 8));
    if ((ulonglong)((unaff_RBX[2] - (longlong)puVar4) + *unaff_RBX) < 2) {
      FUN_180639bf0();
      puVar4 = (int8_t *)unaff_RBX[1];
    }
    *puVar4 = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + 1;
    puVar4 = (int8_t *)unaff_RBX[1];
    uVar1 = *(int8_t *)(uVar6 + 0x24 + *(longlong *)(unaff_RDI + 8));
    if ((ulonglong)((unaff_RBX[2] - (longlong)puVar4) + *unaff_RBX) < 2) {
      FUN_180639bf0();
      puVar4 = (int8_t *)unaff_RBX[1];
    }
    *puVar4 = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + 1;
    puVar4 = (int8_t *)unaff_RBX[1];
    uVar1 = *(int8_t *)(uVar6 + 0x25 + *(longlong *)(unaff_RDI + 8));
    if ((ulonglong)((unaff_RBX[2] - (longlong)puVar4) + *unaff_RBX) < 2) {
      FUN_180639bf0();
      puVar4 = (int8_t *)unaff_RBX[1];
    }
    *puVar4 = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + 1;
    piVar3 = (int *)0x180bf8e98;
    do {
      if (*piVar3 == *(int *)(uVar6 + 0x28 + *(longlong *)(unaff_RDI + 8))) {
        FUN_180639de0();
        break;
      }
      piVar3 = piVar3 + 4;
    } while ((longlong)piVar3 < 0x180bf8eb8);
    FUN_180639fd0();
    uVar6 = uVar6 + 0x40;
    unaff_R12 = unaff_R12 + -1;
    if (unaff_R12 == 0) {
      piVar3 = (int *)unaff_RBX[1];
      iVar2 = (int)((*(longlong *)(unaff_RDI + 0x30) - *(longlong *)(unaff_RDI + 0x28)) / 0x28);
      if ((ulonglong)((unaff_RBX[2] - (longlong)piVar3) + *unaff_RBX) < 5) {
        FUN_180639bf0();
        piVar3 = (int *)unaff_RBX[1];
      }
      *piVar3 = iVar2;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      lVar5 = (longlong)iVar2;
      if (0 < iVar2) {
        do {
          FUN_180639ec0();
          puVar4 = (int8_t *)unaff_RBX[1];
          uVar1 = *(int8_t *)(unaff_R15 + *(longlong *)(unaff_RDI + 0x28));
          if ((ulonglong)((unaff_RBX[2] - (longlong)puVar4) + *unaff_RBX) < 2) {
            FUN_180639bf0();
            puVar4 = (int8_t *)unaff_RBX[1];
          }
          *puVar4 = uVar1;
          unaff_RBX[1] = unaff_RBX[1] + 1;
          unaff_R15 = unaff_R15 + 0x28;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      return;
    }
  } while( true );
}






// 函数: void FUN_180262f55(uint64_t param_1,uint64_t param_2,int *param_3)
void FUN_180262f55(uint64_t param_1,uint64_t param_2,int *param_3)

{
  int8_t uVar1;
  int iVar2;
  int8_t *puVar3;
  longlong *unaff_RBX;
  longlong lVar4;
  longlong unaff_RDI;
  longlong unaff_R15;
  
  iVar2 = (int)((*(longlong *)(unaff_RDI + 0x30) - *(longlong *)(unaff_RDI + 0x28)) / 0x28);
  if ((ulonglong)((unaff_RBX[2] - (longlong)param_3) + *unaff_RBX) < 5) {
    FUN_180639bf0();
    param_3 = (int *)unaff_RBX[1];
  }
  *param_3 = iVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar4 = (longlong)iVar2;
  if (0 < iVar2) {
    do {
      FUN_180639ec0();
      puVar3 = (int8_t *)unaff_RBX[1];
      uVar1 = *(int8_t *)(unaff_R15 + *(longlong *)(unaff_RDI + 0x28));
      if ((ulonglong)((unaff_RBX[2] - (longlong)puVar3) + *unaff_RBX) < 2) {
        FUN_180639bf0();
        puVar3 = (int8_t *)unaff_RBX[1];
      }
      *puVar3 = uVar1;
      unaff_RBX[1] = unaff_RBX[1] + 1;
      unaff_R15 = unaff_R15 + 0x28;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}






// 函数: void FUN_180262f93(void)
void FUN_180262f93(void)

{
  int8_t uVar1;
  int8_t *puVar2;
  longlong *unaff_RBX;
  longlong lVar3;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong unaff_R15;
  
  FUN_180639bf0();
  *(int *)unaff_RBX[1] = unaff_ESI;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar3 = (longlong)unaff_ESI;
  if (0 < unaff_ESI) {
    do {
      FUN_180639ec0();
      puVar2 = (int8_t *)unaff_RBX[1];
      uVar1 = *(int8_t *)(unaff_R15 + *(longlong *)(unaff_RDI + 0x28));
      if ((ulonglong)((unaff_RBX[2] - (longlong)puVar2) + *unaff_RBX) < 2) {
        FUN_180639bf0();
        puVar2 = (int8_t *)unaff_RBX[1];
      }
      *puVar2 = uVar1;
      unaff_RBX[1] = unaff_RBX[1] + 1;
      unaff_R15 = unaff_R15 + 0x28;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180263040(int8_t *param_1,longlong param_2,uint param_3)
void FUN_180263040(int8_t *param_1,longlong param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  int32_t *puVar4;
  int *piVar5;
  int8_t *puVar6;
  longlong lVar7;
  byte *pbVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  uint *puVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  int8_t auStack_498 [32];
  int8_t *puStack_478;
  uint64_t uStack_470;
  void *puStack_468;
  byte *pbStack_460;
  int iStack_458;
  byte abStack_450 [1032];
  ulonglong uStack_48;
  
  uStack_470 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_498;
  *param_1 = **(int8_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
  param_1[1] = **(int8_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
  param_1[2] = **(int8_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
  param_1[3] = **(int8_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
  param_1[4] = **(int8_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
  param_1[5] = **(int8_t **)(param_2 + 8);
  lVar10 = *(longlong *)(param_2 + 8);
  piVar5 = (int *)(lVar10 + 1);
  *(int **)(param_2 + 8) = piVar5;
  lVar9 = (longlong)*piVar5;
  *(longlong *)(param_2 + 8) = lVar10 + 5;
  plVar11 = (longlong *)(param_1 + 8);
  puStack_478 = param_1;
  FUN_180263950(plVar11,lVar9);
  lVar16 = 0;
  lVar10 = lVar16;
  if (0 < lVar9) {
    do {
      lVar3 = *plVar11;
      uVar2 = **(uint **)(param_2 + 8);
      puVar13 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar13;
      if (uVar2 != 0) {
        (**(code **)(*(longlong *)(lVar3 + lVar10) + 0x18))
                  ((longlong *)(lVar3 + lVar10),puVar13,uVar2);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar2;
        puVar13 = *(uint **)(param_2 + 8);
      }
      *(char *)(*plVar11 + 0x20 + lVar10) = (char)*puVar13;
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
      *(int8_t *)(*plVar11 + 0x21 + lVar10) = **(int8_t **)(param_2 + 8);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
      *(int8_t *)(*plVar11 + 0x22 + lVar10) = **(int8_t **)(param_2 + 8);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
      *(int8_t *)(*plVar11 + 0x23 + lVar10) = **(int8_t **)(param_2 + 8);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
      *(int8_t *)(*plVar11 + 0x24 + lVar10) = **(int8_t **)(param_2 + 8);
      puVar6 = (int8_t *)(*(longlong *)(param_2 + 8) + 1);
      *(int8_t **)(param_2 + 8) = puVar6;
      if (param_3 != 0) {
        *(int8_t *)(*plVar11 + 0x25 + lVar10) = *puVar6;
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
      }
      if (1 < param_3) {
        lVar3 = *plVar11;
        puStack_468 = &unknown_var_336_ptr;
        pbStack_460 = abStack_450;
        iStack_458 = 0;
        abStack_450[0] = 0;
        uVar2 = **(uint **)(param_2 + 8);
        puVar13 = *(uint **)(param_2 + 8) + 1;
        *(uint **)(param_2 + 8) = puVar13;
        if (uVar2 != 0) {
          FUN_180045f60(&puStack_468,puVar13,uVar2);
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar2;
        }
        plVar14 = (longlong *)0x180bf8e90;
        lVar15 = lVar16;
        do {
          lVar7 = -1;
          do {
            lVar7 = lVar7 + 1;
          } while (*(char *)(*plVar14 + lVar7) != '\0');
          iVar12 = (int)lVar7;
          if (iStack_458 == iVar12) {
            if (iStack_458 != 0) {
              pbVar8 = pbStack_460;
              do {
                pbVar1 = pbVar8 + (*plVar14 - (longlong)pbStack_460);
                iVar12 = (uint)*pbVar8 - (uint)*pbVar1;
                if (iVar12 != 0) break;
                pbVar8 = pbVar8 + 1;
              } while (*pbVar1 != 0);
            }
LAB_18026328e:
            if (iVar12 == 0) {
              *(int32_t *)(lVar10 + 0x28 + lVar3) = *(int32_t *)(lVar15 * 0x10 + 0x180bf8e98);
              break;
            }
          }
          else if (iStack_458 == 0) goto LAB_18026328e;
          lVar15 = lVar15 + 1;
          plVar14 = plVar14 + 2;
        } while ((longlong)plVar14 < 0x180bf8eb0);
        puStack_468 = &unknown_var_720_ptr;
      }
      if (param_3 != 0) {
        lVar3 = *plVar11;
        puVar4 = *(int32_t **)(param_2 + 8);
        *(int32_t *)(lVar3 + 0x2c + lVar10) = *puVar4;
        *(int32_t *)(lVar3 + 0x30 + lVar10) = puVar4[1];
        *(int32_t *)(lVar3 + 0x34 + lVar10) = puVar4[2];
        *(int32_t *)(lVar3 + 0x38 + lVar10) = puVar4[3];
        *(int32_t **)(param_2 + 8) = puVar4 + 4;
      }
      lVar9 = lVar9 + -1;
      lVar10 = lVar10 + 0x40;
    } while (lVar9 != 0);
  }
  puVar6 = puStack_478;
  lVar10 = (longlong)**(int **)(param_2 + 8);
  *(int **)(param_2 + 8) = *(int **)(param_2 + 8) + 1;
  FUN_180263a20(puStack_478 + 0x28,lVar10);
  if (0 < lVar10) {
    puVar13 = *(uint **)(param_2 + 8);
    do {
      plVar11 = (longlong *)(*(longlong *)(puVar6 + 0x28) + 8 + lVar16);
      uVar2 = *puVar13;
      puVar13 = puVar13 + 1;
      *(uint **)(param_2 + 8) = puVar13;
      if (uVar2 != 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11,puVar13,uVar2);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar2;
        puVar13 = *(uint **)(param_2 + 8);
      }
      *(char *)(lVar16 + *(longlong *)(puVar6 + 0x28)) = (char)*puVar13;
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
      puVar13 = *(uint **)(param_2 + 8);
      lVar16 = lVar16 + 0x28;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_498);
}






// 函数: void FUN_1802633c0(uint64_t param_1,int32_t param_2,longlong *param_3,uint64_t param_4)
void FUN_1802633c0(uint64_t param_1,int32_t param_2,longlong *param_3,uint64_t param_4)

{
  int8_t uVar1;
  int *piVar2;
  int iVar3;
  int8_t *puVar4;
  int32_t *puVar5;
  int iVar6;
  int32_t uStack_78;
  int16_t uStack_74;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  int iStack_30;
  int16_t uStack_2c;
  int iStack_28;
  
  iVar6 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 3;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 3;
  uStack_78 = 0x1010101;
  uStack_74 = 0x101;
  iStack_28 = 0;
  iStack_30 = 0;
  uStack_2c = 0;
  FUN_1802635f0(&uStack_78,param_1,param_2,param_4,0xfffffffffffffffe);
  piVar2 = (int *)0x180bf8e58;
  iVar3 = iVar6;
  do {
    if (*piVar2 == iStack_30) {
      FUN_180639de0(param_3,*(uint64_t *)((longlong)iVar3 * 0x10 + 0x180bf8e50));
      break;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 4;
  } while ((longlong)piVar2 < 0x180bf8e98);
  uVar1 = (int8_t)uStack_2c;
  puVar4 = (int8_t *)param_3[1];
  if ((ulonglong)((param_3[2] - (longlong)puVar4) + *param_3) < 2) {
    FUN_180639bf0(param_3,puVar4 + (1 - *param_3));
    puVar4 = (int8_t *)param_3[1];
  }
  *puVar4 = uVar1;
  param_3[1] = param_3[1] + 1;
  puVar4 = (int8_t *)param_3[1];
  uVar1 = uStack_2c._1_1_;
  if ((ulonglong)((param_3[2] - (longlong)puVar4) + *param_3) < 2) {
    FUN_180639bf0(param_3,puVar4 + (1 - *param_3));
    puVar4 = (int8_t *)param_3[1];
  }
  *puVar4 = uVar1;
  param_3[1] = param_3[1] + 1;
  piVar2 = (int *)0x180bf8db8;
  do {
    if (*piVar2 == iStack_28) {
      FUN_180639de0(param_3,*(uint64_t *)((longlong)iVar6 * 0x10 + 0x180bf8db0));
      break;
    }
    iVar6 = iVar6 + 1;
    piVar2 = piVar2 + 4;
  } while ((longlong)piVar2 < 0x180bf8e58);
  puVar5 = (int32_t *)param_3[1];
  if ((ulonglong)((param_3[2] - (longlong)puVar5) + *param_3) < 5) {
    FUN_180639bf0(param_3,(longlong)puVar5 + (4 - *param_3));
    puVar5 = (int32_t *)param_3[1];
  }
  *puVar5 = 3;
  param_3[1] = param_3[1] + 4;
  FUN_180262bc0(&uStack_78,param_3);
  FUN_18016ce50(&uStack_50);
  FUN_1802638b0(&uStack_70);
  return;
}






// 函数: void FUN_1802635b0(longlong param_1)
void FUN_1802635b0(longlong param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  
  FUN_18016ce50();
  puVar1 = *(uint64_t **)(param_1 + 0x10);
  for (puVar2 = *(uint64_t **)(param_1 + 8); puVar2 != puVar1; puVar2 = puVar2 + 8) {
    *puVar2 = &unknown_var_3456_ptr;
    if (puVar2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar2[1] = 0;
    *(int32_t *)(puVar2 + 3) = 0;
    *puVar2 = &unknown_var_720_ptr;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802635f0(longlong param_1,longlong param_2,uint param_3)
void FUN_1802635f0(longlong param_1,longlong param_2,uint param_3)

{
  uint *puVar1;
  byte *pbVar2;
  char cVar3;
  uint uVar4;
  int32_t uVar5;
  longlong lVar6;
  byte *pbVar7;
  int8_t *puVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  int8_t auStack_498 [32];
  uint64_t uStack_478;
  void *puStack_468;
  byte *pbStack_460;
  int iStack_458;
  byte abStack_450 [1032];
  ulonglong uStack_48;
  
  uStack_478 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_498;
  iVar12 = 0;
  if (param_3 < 3) {
    cVar3 = **(char **)(param_2 + 8);
    *(char **)(param_2 + 8) = *(char **)(param_2 + 8) + 1;
    *(uint *)(param_1 + 0x48) = (uint)(cVar3 == '\0');
  }
  else {
    puStack_468 = &unknown_var_336_ptr;
    pbStack_460 = abStack_450;
    iStack_458 = 0;
    abStack_450[0] = 0;
    uVar4 = **(uint **)(param_2 + 8);
    puVar1 = *(uint **)(param_2 + 8) + 1;
    *(uint **)(param_2 + 8) = puVar1;
    if (uVar4 != 0) {
      FUN_180045f60(&puStack_468,puVar1,uVar4);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar4;
    }
    plVar10 = (longlong *)0x180bf8e50;
    iVar11 = iVar12;
    do {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (*(char *)(*plVar10 + lVar6) != '\0');
      iVar9 = (int)lVar6;
      if (iStack_458 == iVar9) {
        if (iStack_458 != 0) {
          pbVar7 = pbStack_460;
          do {
            pbVar2 = pbVar7 + (*plVar10 - (longlong)pbStack_460);
            iVar9 = (uint)*pbVar7 - (uint)*pbVar2;
            if (iVar9 != 0) break;
            pbVar7 = pbVar7 + 1;
          } while (*pbVar2 != 0);
        }
LAB_18026370e:
        if (iVar9 == 0) {
          *(int32_t *)(param_1 + 0x48) = *(int32_t *)((longlong)iVar11 * 0x10 + 0x180bf8e58);
          break;
        }
      }
      else if (iStack_458 == 0) goto LAB_18026370e;
      iVar11 = iVar11 + 1;
      plVar10 = plVar10 + 2;
    } while ((longlong)plVar10 < 0x180bf8e90);
  }
  puVar8 = *(int8_t **)(param_2 + 8);
  if (1 < param_3) {
    *(int8_t *)(param_1 + 0x4c) = *puVar8;
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
    puVar8 = *(int8_t **)(param_2 + 8);
  }
  if (3 < param_3) {
    *(int8_t *)(param_1 + 0x4d) = *puVar8;
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
  }
  puStack_468 = &unknown_var_336_ptr;
  pbStack_460 = abStack_450;
  iStack_458 = 0;
  abStack_450[0] = 0;
  uVar4 = **(uint **)(param_2 + 8);
  puVar1 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar1;
  if (uVar4 != 0) {
    FUN_180045f60(&puStack_468,puVar1,uVar4);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar4;
  }
  plVar10 = (longlong *)0x180bf8db0;
  do {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (*(char *)(*plVar10 + lVar6) != '\0');
    iVar11 = (int)lVar6;
    if (iStack_458 == iVar11) {
      if (iStack_458 != 0) {
        pbVar7 = pbStack_460;
        do {
          pbVar2 = pbVar7 + (*plVar10 - (longlong)pbStack_460);
          iVar11 = (uint)*pbVar7 - (uint)*pbVar2;
          if (iVar11 != 0) break;
          pbVar7 = pbVar7 + 1;
        } while (*pbVar2 != 0);
      }
LAB_18026383e:
      if (iVar11 == 0) {
        *(int32_t *)(param_1 + 0x50) = *(int32_t *)((longlong)iVar12 * 0x10 + 0x180bf8db8);
        goto LAB_18026384c;
      }
    }
    else if (iStack_458 == 0) goto LAB_18026383e;
    iVar12 = iVar12 + 1;
    plVar10 = plVar10 + 2;
    if (0x180bf8e4f < (longlong)plVar10) {
LAB_18026384c:
      puStack_468 = &unknown_var_720_ptr;
      uVar5 = **(int32_t **)(param_2 + 8);
      *(int32_t **)(param_2 + 8) = *(int32_t **)(param_2 + 8) + 1;
      FUN_180263040(param_1,param_2,uVar5);
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_498);
    }
  } while( true );
}






