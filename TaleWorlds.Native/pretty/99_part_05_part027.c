#include "TaleWorlds.Native.Split.h"
// 99_part_05_part027.c - 7 个函数
// 函数: void function_2e9180(int64_t param_1,uint64_t param_2,char param_3,int32_t param_4)
void function_2e9180(int64_t param_1,uint64_t param_2,char param_3,int32_t param_4)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint uVar11;
  uint64_t uVar12;
  uVar7 = 0;
  uVar6 = uVar7;
  uVar12 = uVar7;
  if (*(int64_t *)(param_1 + 0xf8) - *(int64_t *)(param_1 + 0xf0) >> 3 != 0) {
    do {
      plVar1 = *(int64_t **)(uVar6 + *(int64_t *)(param_1 + 0xf0));
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2,param_4);
      uVar11 = (int)uVar12 + 1;
      uVar6 = uVar6 + 8;
      uVar12 = (uint64_t)uVar11;
    } while ((uint64_t)(int64_t)(int)uVar11 <
             (uint64_t)(*(int64_t *)(param_1 + 0xf8) - *(int64_t *)(param_1 + 0xf0) >> 3));
  }
  if ((param_3 != '\0') &&
     (uVar6 = uVar7, *(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3 != 0)) {
    do {
      function_2e9180(*(uint64_t *)(uVar7 + *(int64_t *)(param_1 + 0x1c0)),param_2,1,param_4);
      uVar7 = uVar7 + 8;
      uVar11 = (int)uVar6 + 1;
      uVar6 = (uint64_t)uVar11;
    } while ((uint64_t)(int64_t)(int)uVar11 <
             (uint64_t)(*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3));
  }
  lVar2 = *(int64_t *)(param_1 + 0x260);
  if (lVar2 == 0) {
    return;
  }
  iVar5 = 0;
  if (*(int64_t *)(lVar2 + 0x1b0) - *(int64_t *)(lVar2 + 0x1a8) >> 3 != 0) {
    lVar9 = 0;
    do {
      plVar1 = *(int64_t **)(lVar9 + *(int64_t *)(lVar2 + 0x1a8));
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2,param_4);
      lVar9 = lVar9 + 8;
      iVar5 = iVar5 + 1;
    } while ((uint64_t)(int64_t)iVar5 <
             (uint64_t)(*(int64_t *)(lVar2 + 0x1b0) - *(int64_t *)(lVar2 + 0x1a8) >> 3));
  }
  iVar5 = 0;
  if ('\0' < *(char *)(lVar2 + 0x20)) {
    lVar9 = *(int64_t *)(lVar2 + 0x18);
    lVar8 = 0;
    do {
      lVar3 = *(int64_t *)(lVar8 + 0xb0 + lVar9);
      iVar4 = 0;
      if (*(int64_t *)(lVar8 + 0xb8 + lVar9) - lVar3 >> 3 != 0) {
        lVar10 = 0;
        do {
          (**(code **)(**(int64_t **)(lVar10 + lVar3) + 0x170))
                    (*(int64_t **)(lVar10 + lVar3),param_2,param_4);
          lVar9 = *(int64_t *)(lVar2 + 0x18);
          lVar10 = lVar10 + 8;
          iVar4 = iVar4 + 1;
          lVar3 = *(int64_t *)(lVar8 + 0xb0 + lVar9);
        } while ((uint64_t)(int64_t)iVar4 <
                 (uint64_t)(*(int64_t *)(lVar8 + 0xb8 + lVar9) - lVar3 >> 3));
      }
      iVar5 = iVar5 + 1;
      lVar8 = lVar8 + 0x100;
    } while (iVar5 < *(char *)(lVar2 + 0x20));
  }
  return;
}
// 函数: void function_2e919c(int64_t param_1,uint64_t param_2,char param_3)
void function_2e919c(int64_t param_1,uint64_t param_2,char param_3)
{
  int64_t lVar1;
  int64_t in_RAX;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint uVar10;
  uint64_t uVar11;
  uVar6 = 0;
  uVar5 = uVar6;
  uVar11 = uVar6;
  if (in_RAX >> 3 != 0) {
    do {
      (**(code **)(**(int64_t **)(uVar5 + *(int64_t *)(param_1 + 0xf0)) + 0x170))();
      uVar10 = (int)uVar11 + 1;
      uVar5 = uVar5 + 8;
      uVar11 = (uint64_t)uVar10;
    } while ((uint64_t)(int64_t)(int)uVar10 <
             (uint64_t)(*(int64_t *)(param_1 + 0xf8) - *(int64_t *)(param_1 + 0xf0) >> 3));
  }
  if ((param_3 != '\0') &&
     (uVar5 = uVar6, *(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3 != 0)) {
    do {
      function_2e9180(*(uint64_t *)(uVar6 + *(int64_t *)(param_1 + 0x1c0)));
      uVar6 = uVar6 + 8;
      uVar10 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar10;
    } while ((uint64_t)(int64_t)(int)uVar10 <
             (uint64_t)(*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3));
  }
  lVar1 = *(int64_t *)(param_1 + 0x260);
  if (lVar1 == 0) {
    return;
  }
  iVar4 = 0;
  if (*(int64_t *)(lVar1 + 0x1b0) - *(int64_t *)(lVar1 + 0x1a8) >> 3 != 0) {
    lVar8 = 0;
    do {
      (**(code **)(**(int64_t **)(lVar8 + *(int64_t *)(lVar1 + 0x1a8)) + 0x170))();
      lVar8 = lVar8 + 8;
      iVar4 = iVar4 + 1;
    } while ((uint64_t)(int64_t)iVar4 <
             (uint64_t)(*(int64_t *)(lVar1 + 0x1b0) - *(int64_t *)(lVar1 + 0x1a8) >> 3));
  }
  iVar4 = 0;
  if ('\0' < *(char *)(lVar1 + 0x20)) {
    lVar8 = *(int64_t *)(lVar1 + 0x18);
    lVar7 = 0;
    do {
      lVar2 = *(int64_t *)(lVar7 + 0xb0 + lVar8);
      iVar3 = 0;
      if (*(int64_t *)(lVar7 + 0xb8 + lVar8) - lVar2 >> 3 != 0) {
        lVar9 = 0;
        do {
          (**(code **)(**(int64_t **)(lVar9 + lVar2) + 0x170))();
          lVar8 = *(int64_t *)(lVar1 + 0x18);
          lVar9 = lVar9 + 8;
          iVar3 = iVar3 + 1;
          lVar2 = *(int64_t *)(lVar7 + 0xb0 + lVar8);
        } while ((uint64_t)(int64_t)iVar3 <
                 (uint64_t)(*(int64_t *)(lVar7 + 0xb8 + lVar8) - lVar2 >> 3));
      }
      iVar4 = iVar4 + 1;
      lVar7 = lVar7 + 0x100;
    } while (iVar4 < *(char *)(lVar1 + 0x20));
  }
  return;
}
// 函数: void function_2e91b0(uint64_t param_1,uint64_t param_2,char param_3)
void function_2e91b0(uint64_t param_1,uint64_t param_2,char param_3)
{
  int64_t lVar1;
  int64_t in_RAX;
  int64_t lVar2;
  int64_t unaff_RBX;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t unaff_RDI;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint uVar10;
  uVar7 = unaff_RDI & 0xffffffff;
  if (in_RAX >> 3 != 0) {
    uVar5 = unaff_RDI & 0xffffffff;
    do {
      (**(code **)(**(int64_t **)(uVar5 + *(int64_t *)(unaff_RBX + 0xf0)) + 0x170))();
      uVar5 = uVar5 + 8;
      uVar10 = (int)uVar7 + 1;
      uVar7 = (uint64_t)uVar10;
    } while ((uint64_t)(int64_t)(int)uVar10 <
             (uint64_t)(*(int64_t *)(unaff_RBX + 0xf8) - *(int64_t *)(unaff_RBX + 0xf0) >> 3));
  }
  if ((param_3 != '\0') &&
     (uVar7 = unaff_RDI,
     *(int64_t *)(unaff_RBX + 0x1c8) - *(int64_t *)(unaff_RBX + 0x1c0) >> 3 != 0)) {
    do {
      function_2e9180(*(uint64_t *)(unaff_RDI + *(int64_t *)(unaff_RBX + 0x1c0)));
      unaff_RDI = unaff_RDI + 8;
      uVar10 = (int)uVar7 + 1;
      uVar7 = (uint64_t)uVar10;
    } while ((uint64_t)(int64_t)(int)uVar10 <
             (uint64_t)(*(int64_t *)(unaff_RBX + 0x1c8) - *(int64_t *)(unaff_RBX + 0x1c0) >> 3));
  }
  lVar1 = *(int64_t *)(unaff_RBX + 0x260);
  if (lVar1 == 0) {
    return;
  }
  iVar4 = 0;
  if (*(int64_t *)(lVar1 + 0x1b0) - *(int64_t *)(lVar1 + 0x1a8) >> 3 != 0) {
    lVar8 = 0;
    do {
      (**(code **)(**(int64_t **)(lVar8 + *(int64_t *)(lVar1 + 0x1a8)) + 0x170))();
      lVar8 = lVar8 + 8;
      iVar4 = iVar4 + 1;
    } while ((uint64_t)(int64_t)iVar4 <
             (uint64_t)(*(int64_t *)(lVar1 + 0x1b0) - *(int64_t *)(lVar1 + 0x1a8) >> 3));
  }
  iVar4 = 0;
  if ('\0' < *(char *)(lVar1 + 0x20)) {
    lVar8 = *(int64_t *)(lVar1 + 0x18);
    lVar6 = 0;
    do {
      lVar2 = *(int64_t *)(lVar6 + 0xb0 + lVar8);
      iVar3 = 0;
      if (*(int64_t *)(lVar6 + 0xb8 + lVar8) - lVar2 >> 3 != 0) {
        lVar9 = 0;
        do {
          (**(code **)(**(int64_t **)(lVar9 + lVar2) + 0x170))();
          lVar8 = *(int64_t *)(lVar1 + 0x18);
          lVar9 = lVar9 + 8;
          iVar3 = iVar3 + 1;
          lVar2 = *(int64_t *)(lVar6 + 0xb0 + lVar8);
        } while ((uint64_t)(int64_t)iVar3 <
                 (uint64_t)(*(int64_t *)(lVar6 + 0xb8 + lVar8) - lVar2 >> 3));
      }
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 0x100;
    } while (iVar4 < *(char *)(lVar1 + 0x20));
  }
  return;
}
// 函数: void function_2e921a(void)
void function_2e921a(void)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t unaff_RBX;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  uint uVar6;
  uint64_t unaff_RDI;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  uVar7 = unaff_RDI;
  if (*(int64_t *)(unaff_RBX + 0x1c8) - *(int64_t *)(unaff_RBX + 0x1c0) >> 3 != 0) {
    do {
      function_2e9180(*(uint64_t *)(unaff_RDI + *(int64_t *)(unaff_RBX + 0x1c0)));
      unaff_RDI = unaff_RDI + 8;
      uVar6 = (int)uVar7 + 1;
      uVar7 = (uint64_t)uVar6;
    } while ((uint64_t)(int64_t)(int)uVar6 <
             (uint64_t)(*(int64_t *)(unaff_RBX + 0x1c8) - *(int64_t *)(unaff_RBX + 0x1c0) >> 3));
  }
  lVar1 = *(int64_t *)(unaff_RBX + 0x260);
  if (lVar1 == 0) {
    return;
  }
  iVar4 = 0;
  if (*(int64_t *)(lVar1 + 0x1b0) - *(int64_t *)(lVar1 + 0x1a8) >> 3 != 0) {
    lVar8 = 0;
    do {
      (**(code **)(**(int64_t **)(lVar8 + *(int64_t *)(lVar1 + 0x1a8)) + 0x170))();
      lVar8 = lVar8 + 8;
      iVar4 = iVar4 + 1;
    } while ((uint64_t)(int64_t)iVar4 <
             (uint64_t)(*(int64_t *)(lVar1 + 0x1b0) - *(int64_t *)(lVar1 + 0x1a8) >> 3));
  }
  iVar4 = 0;
  if ('\0' < *(char *)(lVar1 + 0x20)) {
    lVar8 = *(int64_t *)(lVar1 + 0x18);
    lVar5 = 0;
    do {
      lVar2 = *(int64_t *)(lVar5 + 0xb0 + lVar8);
      iVar3 = 0;
      if (*(int64_t *)(lVar5 + 0xb8 + lVar8) - lVar2 >> 3 != 0) {
        lVar9 = 0;
        do {
          (**(code **)(**(int64_t **)(lVar9 + lVar2) + 0x170))();
          lVar8 = *(int64_t *)(lVar1 + 0x18);
          lVar9 = lVar9 + 8;
          iVar3 = iVar3 + 1;
          lVar2 = *(int64_t *)(lVar5 + 0xb0 + lVar8);
        } while ((uint64_t)(int64_t)iVar3 <
                 (uint64_t)(*(int64_t *)(lVar5 + 0xb8 + lVar8) - lVar2 >> 3));
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x100;
    } while (iVar4 < *(char *)(lVar1 + 0x20));
  }
  return;
}
// 函数: void function_2e9294(int64_t param_1)
void function_2e9294(int64_t param_1)
{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  iVar3 = 0;
  if (*(int64_t *)(param_1 + 0x1b0) - *(int64_t *)(param_1 + 0x1a8) >> 3 != 0) {
    lVar5 = 0;
    do {
      (**(code **)(**(int64_t **)(lVar5 + *(int64_t *)(param_1 + 0x1a8)) + 0x170))();
      lVar5 = lVar5 + 8;
      iVar3 = iVar3 + 1;
    } while ((uint64_t)(int64_t)iVar3 <
             (uint64_t)(*(int64_t *)(param_1 + 0x1b0) - *(int64_t *)(param_1 + 0x1a8) >> 3));
  }
  iVar3 = 0;
  if ('\0' < *(char *)(param_1 + 0x20)) {
    lVar5 = *(int64_t *)(param_1 + 0x18);
    lVar4 = 0;
    do {
      lVar1 = *(int64_t *)(lVar4 + 0xb0 + lVar5);
      iVar2 = 0;
      if (*(int64_t *)(lVar4 + 0xb8 + lVar5) - lVar1 >> 3 != 0) {
        lVar6 = 0;
        do {
          (**(code **)(**(int64_t **)(lVar6 + lVar1) + 0x170))();
          lVar5 = *(int64_t *)(param_1 + 0x18);
          lVar6 = lVar6 + 8;
          iVar2 = iVar2 + 1;
          lVar1 = *(int64_t *)(lVar4 + 0xb0 + lVar5);
        } while ((uint64_t)(int64_t)iVar2 <
                 (uint64_t)(*(int64_t *)(lVar4 + 0xb8 + lVar5) - lVar1 >> 3));
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x100;
    } while (iVar3 < *(char *)(param_1 + 0x20));
  }
  return;
}
// 函数: void function_2e92b0(uint64_t param_1,int64_t *param_2)
void function_2e92b0(uint64_t param_1,int64_t *param_2)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lStack_28;
  int64_t lStack_20;
  uint64_t local_var_18;
  int32_t local_var_10;
  lStack_28 = 0;
  lStack_20 = 0;
  uVar5 = 0;
  local_var_18 = 0;
  local_var_10 = 3;
  function_2e9180(0,&lStack_28);
  function_0b8630(param_2,lStack_20 - lStack_28 >> 3);
  uVar6 = uVar5;
  if (lStack_20 - lStack_28 >> 3 != 0) {
    do {
      plVar1 = *(int64_t **)(uVar6 + lStack_28);
      lVar2 = *param_2;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      plVar3 = *(int64_t **)(lVar2 + uVar6);
      *(int64_t **)(lVar2 + uVar6) = plVar1;
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x38))();
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar4;
      uVar6 = uVar6 + 8;
    } while ((uint64_t)(int64_t)(int)uVar4 < (uint64_t)(lStack_20 - lStack_28 >> 3));
  }
  if (lStack_28 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// 函数: void function_2e93a0(int64_t param_1,uint64_t param_2)
void function_2e93a0(int64_t param_1,uint64_t param_2)
{
  int64_t *plVar1;
  int iVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  lVar8 = *(int64_t *)(param_1 + 0xf0);
  uVar6 = 0;
  uVar4 = uVar6;
  uVar5 = uVar6;
  uVar7 = uVar6;
  if (*(int64_t *)(param_1 + 0xf8) - lVar8 >> 3 != 0) {
    do {
      iVar2 = (**(code **)(**(int64_t **)(uVar5 + lVar8) + 0x98))();
      if (iVar2 == 0) {
        plVar1 = *(int64_t **)(uVar5 + *(int64_t *)(param_1 + 0xf0));
        (**(code **)(*plVar1 + 0x170))(plVar1,param_2,0xffffffff);
      }
      lVar8 = *(int64_t *)(param_1 + 0xf0);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
      uVar5 = uVar5 + 8;
    } while ((uint64_t)(int64_t)(int)uVar3 <
             (uint64_t)(*(int64_t *)(param_1 + 0xf8) - lVar8 >> 3));
  }
  while( true ) {
    if ((uint64_t)(*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3) <=
        (uint64_t)(int64_t)(int)uVar7) break;
    function_2e93a0(*(uint64_t *)(uVar6 + *(int64_t *)(param_1 + 0x1c0)),param_2,0,1,0xffffffff);
    uVar6 = uVar6 + 8;
    uVar7 = (uint64_t)((int)uVar7 + 1);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address