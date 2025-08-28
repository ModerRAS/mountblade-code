/* 函数别名定义: RenderingTextureManager */
#define RenderingTextureManager RenderingTextureManager
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_13_part017_sub002_sub002.c - 1 个函数
// 函数: void function_8aece9(void)
void function_8aece9(void)
{
  return;
}
uint64_t SystemErrorHandler(int64_t *param_1,uint64_t param_2,uint64_t param_3)
{
  uint64_t uVar1;
  uint astack_special_x_8 [2];
  if (*param_1 == 0) {
    return 0x1c;
  }
  if (param_1[2] != 0) {
    astack_special_x_8[0] = 0;
    uVar1 = SystemFunction_00018076a7d0(*param_1,astack_special_x_8);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if ((uint64_t)param_1[2] < astack_special_x_8[0] + param_3) {
      return 0x11;
    }
  }
  uVar1 = SystemDataAnalyzer(*param_1,param_2,1,param_3 & 0xffffffff,0);
  return uVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_8aeda0(int64_t *param_1,int param_2)
{
  uint64_t *puVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int32_t *puVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar11 = 0;
  lVar7 = lVar11;
  if (param_2 == 0) {
LAB_1808aeee6:
    if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
    }
    *param_1 = lVar7;
    uVar9 = 0;
    *(int *)((int64_t)param_1 + 0xc) = param_2;
  }
  else {
    if (param_2 * 0x14 - 1U < 0x3fffffff) {
      lVar7 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x14,&processed_var_8432_ptr,
                            0xf4,0,0,1);
      if (lVar7 != 0) {
        lVar8 = (int64_t)(int)param_1[1];
        if ((int)param_1[1] != 0) {
          lVar12 = *param_1;
          if (3 < lVar8) {
            lVar13 = lVar12 - lVar7;
            lVar14 = (lVar8 - 4U >> 2) + 1;
            lVar11 = lVar14 * 4;
            puVar10 = (int32_t *)(lVar7 + 0x24);
            do {
              puVar1 = (uint64_t *)(lVar13 + -0x24 + (int64_t)puVar10);
              uVar9 = puVar1[1];
              puVar3 = puVar10 + 0x14;
              *(uint64_t *)(puVar10 + -9) = *puVar1;
              *(uint64_t *)(puVar10 + -7) = uVar9;
              puVar10[-5] = *(int32_t *)(lVar13 + -100 + (int64_t)puVar3);
              puVar1 = (uint64_t *)(lVar13 + -0x60 + (int64_t)puVar3);
              uVar9 = puVar1[1];
              *(uint64_t *)(puVar10 + -4) = *puVar1;
              *(uint64_t *)(puVar10 + -2) = uVar9;
              *puVar10 = *(int32_t *)(lVar13 + -0x50 + (int64_t)puVar3);
              puVar1 = (uint64_t *)(lVar13 + -0x4c + (int64_t)puVar3);
              uVar9 = puVar1[1];
              *(uint64_t *)(puVar10 + 1) = *puVar1;
              *(uint64_t *)(puVar10 + 3) = uVar9;
              puVar10[5] = *(int32_t *)(lVar13 + -0x3c + (int64_t)puVar3);
              puVar2 = (int32_t *)(lVar13 + -0x38 + (int64_t)puVar3);
              uVar4 = puVar2[1];
              uVar5 = puVar2[2];
              uVar6 = puVar2[3];
              puVar10[6] = *puVar2;
              puVar10[7] = uVar4;
              puVar10[8] = uVar5;
              puVar10[9] = uVar6;
              puVar10[10] = *(int32_t *)(lVar13 + -0x28 + (int64_t)puVar3);
              lVar14 = lVar14 + -1;
              puVar10 = puVar3;
            } while (lVar14 != 0);
          }
          if (lVar11 < lVar8) {
            lVar12 = lVar12 - lVar7;
            lVar8 = lVar8 - lVar11;
            puVar10 = (int32_t *)(lVar7 + lVar11 * 0x14 + 0x10);
            do {
              puVar3 = (int32_t *)((int64_t)puVar10 + lVar12 + -0x10);
              uVar4 = puVar3[1];
              uVar5 = puVar3[2];
              uVar6 = puVar3[3];
              puVar10[-4] = *puVar3;
              puVar10[-3] = uVar4;
              puVar10[-2] = uVar5;
              puVar10[-1] = uVar6;
              *puVar10 = *(int32_t *)((int64_t)puVar10 + lVar12);
              lVar8 = lVar8 + -1;
              puVar10 = puVar10 + 5;
            } while (lVar8 != 0);
          }
        }
        goto LAB_1808aeee6;
      }
    }
    uVar9 = 0x26;
  }
  return uVar9;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_8aedc7(uint64_t param_1,int param_2)
{
  uint64_t *puVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int32_t *puVar10;
  int64_t *unaff_RBX;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  int unaff_R14D;
  lVar11 = 0;
  lVar7 = lVar11;
  if (unaff_R14D == 0) {
LAB_1808aeee6:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&processed_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = lVar7;
    uVar9 = 0;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_R14D;
  }
  else {
    if (param_2 * 0x14 - 1U < 0x3fffffff) {
      lVar7 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x14,&processed_var_8432_ptr,
                            0xf4,0);
      if (lVar7 != 0) {
        lVar8 = (int64_t)(int)unaff_RBX[1];
        if ((int)unaff_RBX[1] != 0) {
          lVar12 = *unaff_RBX;
          if (3 < lVar8) {
            lVar13 = lVar12 - lVar7;
            lVar14 = (lVar8 - 4U >> 2) + 1;
            lVar11 = lVar14 * 4;
            puVar10 = (int32_t *)(lVar7 + 0x24);
            do {
              puVar1 = (uint64_t *)(lVar13 + -0x24 + (int64_t)puVar10);
              uVar9 = puVar1[1];
              puVar3 = puVar10 + 0x14;
              *(uint64_t *)(puVar10 + -9) = *puVar1;
              *(uint64_t *)(puVar10 + -7) = uVar9;
              puVar10[-5] = *(int32_t *)(lVar13 + -100 + (int64_t)puVar3);
              puVar1 = (uint64_t *)(lVar13 + -0x60 + (int64_t)puVar3);
              uVar9 = puVar1[1];
              *(uint64_t *)(puVar10 + -4) = *puVar1;
              *(uint64_t *)(puVar10 + -2) = uVar9;
              *puVar10 = *(int32_t *)(lVar13 + -0x50 + (int64_t)puVar3);
              puVar1 = (uint64_t *)(lVar13 + -0x4c + (int64_t)puVar3);
              uVar9 = puVar1[1];
              *(uint64_t *)(puVar10 + 1) = *puVar1;
              *(uint64_t *)(puVar10 + 3) = uVar9;
              puVar10[5] = *(int32_t *)(lVar13 + -0x3c + (int64_t)puVar3);
              puVar2 = (int32_t *)(lVar13 + -0x38 + (int64_t)puVar3);
              uVar4 = puVar2[1];
              uVar5 = puVar2[2];
              uVar6 = puVar2[3];
              puVar10[6] = *puVar2;
              puVar10[7] = uVar4;
              puVar10[8] = uVar5;
              puVar10[9] = uVar6;
              puVar10[10] = *(int32_t *)(lVar13 + -0x28 + (int64_t)puVar3);
              lVar14 = lVar14 + -1;
              puVar10 = puVar3;
            } while (lVar14 != 0);
          }
          if (lVar11 < lVar8) {
            lVar12 = lVar12 - lVar7;
            lVar8 = lVar8 - lVar11;
            puVar10 = (int32_t *)(lVar7 + lVar11 * 0x14 + 0x10);
            do {
              puVar3 = (int32_t *)((int64_t)puVar10 + lVar12 + -0x10);
              uVar4 = puVar3[1];
              uVar5 = puVar3[2];
              uVar6 = puVar3[3];
              puVar10[-4] = *puVar3;
              puVar10[-3] = uVar4;
              puVar10[-2] = uVar5;
              puVar10[-1] = uVar6;
              *puVar10 = *(int32_t *)((int64_t)puVar10 + lVar12);
              lVar8 = lVar8 + -1;
              puVar10 = puVar10 + 5;
            } while (lVar8 != 0);
          }
        }
        goto LAB_1808aeee6;
      }
    }
    uVar9 = 0x26;
  }
  return uVar9;
}
uint64_t function_8aef38(void)
{
  return 0x26;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkSystem_ConnectionManager(int64_t *param_1,int param_2)
{
  int32_t *puVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int32_t *puVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar12 = 0;
  lVar7 = lVar12;
  if (param_2 == 0) {
LAB_1808af0b2:
    if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
    }
    *param_1 = lVar7;
    uVar9 = 0;
    *(int *)((int64_t)param_1 + 0xc) = param_2;
  }
  else {
    if (param_2 * 0x18 - 1U < 0x3fffffff) {
      lVar7 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x18,&processed_var_8432_ptr,
                            0xf4,0,0,1);
      if (lVar7 != 0) {
        lVar8 = (int64_t)(int)param_1[1];
        if ((int)param_1[1] != 0) {
          lVar11 = *param_1;
          if (3 < lVar8) {
            lVar13 = lVar11 - lVar7;
            lVar14 = (lVar8 - 4U >> 2) + 1;
            lVar12 = lVar14 * 4;
            puVar10 = (int32_t *)(lVar7 + 0x28);
            do {
              puVar2 = (uint64_t *)((int64_t)puVar10 + lVar13 + -0x28);
              uVar9 = puVar2[1];
              puVar1 = puVar10 + 0x18;
              *(uint64_t *)(puVar10 + -10) = *puVar2;
              *(uint64_t *)(puVar10 + -8) = uVar9;
              puVar10[-6] = *(int32_t *)(lVar13 + -0x78 + (int64_t)puVar1);
              puVar10[-5] = *(int32_t *)(lVar13 + -0x74 + (int64_t)puVar1);
              puVar2 = (uint64_t *)(lVar13 + -0x70 + (int64_t)puVar1);
              uVar9 = puVar2[1];
              *(uint64_t *)(puVar10 + -4) = *puVar2;
              *(uint64_t *)(puVar10 + -2) = uVar9;
              *puVar10 = *(int32_t *)(lVar13 + -0x60 + (int64_t)puVar1);
              puVar10[1] = *(int32_t *)(lVar13 + -0x5c + (int64_t)puVar1);
              puVar2 = (uint64_t *)((int64_t)puVar10 + lVar13 + 8);
              uVar9 = puVar2[1];
              *(uint64_t *)(puVar10 + 2) = *puVar2;
              *(uint64_t *)(puVar10 + 4) = uVar9;
              puVar10[6] = *(int32_t *)(lVar13 + -0x48 + (int64_t)puVar1);
              puVar10[7] = *(int32_t *)(lVar13 + -0x44 + (int64_t)puVar1);
              puVar3 = (int32_t *)((int64_t)puVar10 + lVar13 + 0x20);
              uVar4 = puVar3[1];
              uVar5 = puVar3[2];
              uVar6 = puVar3[3];
              puVar10[8] = *puVar3;
              puVar10[9] = uVar4;
              puVar10[10] = uVar5;
              puVar10[0xb] = uVar6;
              puVar10[0xc] = *(int32_t *)(lVar13 + -0x30 + (int64_t)puVar1);
              puVar10[0xd] = *(int32_t *)(lVar13 + -0x2c + (int64_t)puVar1);
              lVar14 = lVar14 + -1;
              puVar10 = puVar1;
            } while (lVar14 != 0);
          }
          if (lVar12 < lVar8) {
            lVar11 = lVar11 - lVar7;
            lVar8 = lVar8 - lVar12;
            puVar10 = (int32_t *)(lVar7 + lVar12 * 0x18 + 0x10);
            do {
              puVar3 = (int32_t *)(lVar11 + -0x10 + (int64_t)puVar10);
              uVar4 = puVar3[1];
              uVar5 = puVar3[2];
              uVar6 = puVar3[3];
              puVar1 = puVar10 + 6;
              puVar10[-4] = *puVar3;
              puVar10[-3] = uVar4;
              puVar10[-2] = uVar5;
              puVar10[-1] = uVar6;
              *puVar10 = *(int32_t *)(lVar11 + -0x18 + (int64_t)puVar1);
              puVar10[1] = *(int32_t *)(lVar11 + -0x14 + (int64_t)puVar1);
              lVar8 = lVar8 + -1;
              puVar10 = puVar1;
            } while (lVar8 != 0);
          }
        }
        goto LAB_1808af0b2;
      }
    }
    uVar9 = 0x26;
  }
  return uVar9;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_8aef67(uint64_t param_1,int param_2)
{
  int32_t *puVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int32_t *puVar10;
  int64_t lVar11;
  int64_t *unaff_RBX;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  int unaff_R14D;
  lVar12 = 0;
  lVar7 = lVar12;
  if (unaff_R14D == 0) {
LAB_1808af0b2:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&processed_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = lVar7;
    uVar9 = 0;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_R14D;
  }
  else {
    if (param_2 * 0x18 - 1U < 0x3fffffff) {
      lVar7 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x18,&processed_var_8432_ptr,
                            0xf4,0);
      if (lVar7 != 0) {
        lVar8 = (int64_t)(int)unaff_RBX[1];
        if ((int)unaff_RBX[1] != 0) {
          lVar11 = *unaff_RBX;
          if (3 < lVar8) {
            lVar13 = lVar11 - lVar7;
            lVar14 = (lVar8 - 4U >> 2) + 1;
            lVar12 = lVar14 * 4;
            puVar10 = (int32_t *)(lVar7 + 0x28);
            do {
              puVar2 = (uint64_t *)((int64_t)puVar10 + lVar13 + -0x28);
              uVar9 = puVar2[1];
              puVar1 = puVar10 + 0x18;
              *(uint64_t *)(puVar10 + -10) = *puVar2;
              *(uint64_t *)(puVar10 + -8) = uVar9;
              puVar10[-6] = *(int32_t *)(lVar13 + -0x78 + (int64_t)puVar1);
              puVar10[-5] = *(int32_t *)(lVar13 + -0x74 + (int64_t)puVar1);
              puVar2 = (uint64_t *)(lVar13 + -0x70 + (int64_t)puVar1);
              uVar9 = puVar2[1];
              *(uint64_t *)(puVar10 + -4) = *puVar2;
              *(uint64_t *)(puVar10 + -2) = uVar9;
              *puVar10 = *(int32_t *)(lVar13 + -0x60 + (int64_t)puVar1);
              puVar10[1] = *(int32_t *)(lVar13 + -0x5c + (int64_t)puVar1);
              puVar2 = (uint64_t *)((int64_t)puVar10 + lVar13 + 8);
              uVar9 = puVar2[1];
              *(uint64_t *)(puVar10 + 2) = *puVar2;
              *(uint64_t *)(puVar10 + 4) = uVar9;
              puVar10[6] = *(int32_t *)(lVar13 + -0x48 + (int64_t)puVar1);
              puVar10[7] = *(int32_t *)(lVar13 + -0x44 + (int64_t)puVar1);
              puVar3 = (int32_t *)((int64_t)puVar10 + lVar13 + 0x20);
              uVar4 = puVar3[1];
              uVar5 = puVar3[2];
              uVar6 = puVar3[3];
              puVar10[8] = *puVar3;
              puVar10[9] = uVar4;
              puVar10[10] = uVar5;
              puVar10[0xb] = uVar6;
              puVar10[0xc] = *(int32_t *)(lVar13 + -0x30 + (int64_t)puVar1);
              puVar10[0xd] = *(int32_t *)(lVar13 + -0x2c + (int64_t)puVar1);
              lVar14 = lVar14 + -1;
              puVar10 = puVar1;
            } while (lVar14 != 0);
          }
          if (lVar12 < lVar8) {
            lVar11 = lVar11 - lVar7;
            lVar8 = lVar8 - lVar12;
            puVar10 = (int32_t *)(lVar7 + lVar12 * 0x18 + 0x10);
            do {
              puVar3 = (int32_t *)(lVar11 + -0x10 + (int64_t)puVar10);
              uVar4 = puVar3[1];
              uVar5 = puVar3[2];
              uVar6 = puVar3[3];
              puVar1 = puVar10 + 6;
              puVar10[-4] = *puVar3;
              puVar10[-3] = uVar4;
              puVar10[-2] = uVar5;
              puVar10[-1] = uVar6;
              *puVar10 = *(int32_t *)(lVar11 + -0x18 + (int64_t)puVar1);
              puVar10[1] = *(int32_t *)(lVar11 + -0x14 + (int64_t)puVar1);
              lVar8 = lVar8 + -1;
              puVar10 = puVar1;
            } while (lVar8 != 0);
          }
        }
        goto LAB_1808af0b2;
      }
    }
    uVar9 = 0x26;
  }
  return uVar9;
}
uint64_t function_8af104(void)
{
  return 0x26;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_8af110(int64_t *param_1,int param_2)
{
  int iVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  puVar3 = (uint64_t *)0x0;
  if (param_2 != 0) {
    if (param_2 * 8 - 1U < 0x3fffffff) {
      puVar3 = (uint64_t *)
               SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 8,&processed_var_8432_ptr,0xf4
                             ,0,0,1);
      if (puVar3 != (uint64_t *)0x0) {
        iVar1 = (int)param_1[1];
        lVar4 = (int64_t)iVar1;
        if ((iVar1 != 0) && (lVar2 = *param_1, 0 < iVar1)) {
          puVar5 = puVar3;
          do {
            *puVar5 = *(uint64_t *)((lVar2 - (int64_t)puVar3) + (int64_t)puVar5);
            puVar5 = puVar5 + 1;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        goto LAB_1808af1b4;
      }
    }
    return 0x26;
  }
LAB_1808af1b4:
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
  }
  *param_1 = (int64_t)puVar3;
  *(int *)((int64_t)param_1 + 0xc) = param_2;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_8af134(uint64_t param_1,int param_2)
{
  int iVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int64_t *unaff_RBX;
  int unaff_EDI;
  puVar3 = (uint64_t *)0x0;
  if (unaff_EDI == 0) {
LAB_1808af1b4:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&processed_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = (int64_t)puVar3;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 8 - 1U < 0x3fffffff) {
    puVar3 = (uint64_t *)
             SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 8,&processed_var_8432_ptr,0xf4,0
                          );
    if (puVar3 != (uint64_t *)0x0) {
      iVar1 = (int)unaff_RBX[1];
      lVar4 = (int64_t)iVar1;
      if ((iVar1 != 0) && (lVar2 = *unaff_RBX, 0 < iVar1)) {
        puVar5 = puVar3;
        do {
          *puVar5 = *(uint64_t *)((lVar2 - (int64_t)puVar3) + (int64_t)puVar5);
          puVar5 = puVar5 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      goto LAB_1808af1b4;
    }
  }
  return 0x26;
}
uint64_t function_8af1ff(void)
{
  return 0x26;
}
uint64_t function_8af220(int64_t *param_1,int param_2)
{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  uVar3 = (int)*(uint *)((int64_t)param_1 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_1 + 0xc) ^ uVar3) - uVar3) < param_2) &&
     (uVar2 = SystemCore_Initializer(param_1,param_2), (int)uVar2 != 0)) {
    return uVar2;
  }
  iVar1 = (int)param_1[1];
  if (param_2 <= iVar1) {
    *(int *)(param_1 + 1) = param_2;
    return 0;
  }
// WARNING: Subroutine does not return
  memset(*param_1 + (int64_t)iVar1 * 4,0,(int64_t)(param_2 - iVar1) << 2);
}
uint64_t function_8af280(int64_t *param_1,int param_2)
{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  uVar3 = (int)*(uint *)((int64_t)param_1 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_1 + 0xc) ^ uVar3) - uVar3) < param_2) &&
     (uVar2 = RenderingTextureManager0(param_1,param_2), (int)uVar2 != 0)) {
    return uVar2;
  }
  iVar1 = (int)param_1[1];
  if (param_2 <= iVar1) {
    *(int *)(param_1 + 1) = param_2;
    return 0;
  }
// WARNING: Subroutine does not return
  memset(*param_1 + (int64_t)iVar1 * 8,0,(int64_t)(param_2 - iVar1) << 3);
}
uint64_t function_8af2e0(int64_t *param_1,int param_2)
{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  uVar3 = (int)*(uint *)((int64_t)param_1 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_1 + 0xc) ^ uVar3) - uVar3) < param_2) &&
     (uVar2 = function_849120(param_1,param_2), (int)uVar2 != 0)) {
    return uVar2;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    if (0 < param_2 - iVar1) {
// WARNING: Subroutine does not return
      memset(*param_1 + (int64_t)iVar1 * 0x14,0,(uint64_t)(uint)(param_2 - iVar1) * 0x14);
    }
  }
  *(int *)(param_1 + 1) = param_2;
  return 0;
}
uint64_t function_8af340(int64_t *param_1,int param_2)
{
  int iVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint uVar5;
  uVar5 = (int)*(uint *)((int64_t)param_1 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_1 + 0xc) ^ uVar5) - uVar5) < param_2) &&
     (uVar2 = function_8676f0(param_1,param_2), (int)uVar2 != 0)) {
    return uVar2;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    lVar4 = (int64_t)(param_2 - iVar1);
    if (0 < param_2 - iVar1) {
      lVar3 = *param_1 + 8 + (int64_t)iVar1 * 0x18;
      do {
        *(uint64_t *)(lVar3 + -4) = 0;
        *(int32_t *)(lVar3 + 0xc) = 4;
        *(int32_t *)(lVar3 + -8) = 0;
        *(uint64_t *)(lVar3 + 4) = 0;
        lVar3 = lVar3 + 0x18;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  *(int *)(param_1 + 1) = param_2;
  return 0;
}
uint64_t function_8af3c0(int64_t *param_1,int param_2)
{
  int iVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  uint uVar7;
  int32_t *puVar8;
  int64_t lVar9;
  uVar7 = (int)*(uint *)((int64_t)param_1 + 0xc) >> 0x1f;
  if ((param_2 <= (int)((*(uint *)((int64_t)param_1 + 0xc) ^ uVar7) - uVar7)) ||
     (uVar5 = function_8aeda0(param_1,param_2), (int)uVar5 == 0)) {
    iVar1 = (int)param_1[1];
    if (iVar1 < param_2) {
      puVar8 = (int32_t *)(*param_1 + (int64_t)iVar1 * 0x14);
      lVar9 = (int64_t)(param_2 - iVar1);
      if (0 < param_2 - iVar1) {
        do {
          puVar6 = (int32_t *)SystemCoreProcessor();
          uVar2 = puVar6[1];
          uVar3 = puVar6[2];
          uVar4 = puVar6[3];
          *puVar8 = *puVar6;
          puVar8[1] = uVar2;
          puVar8[2] = uVar3;
          puVar8[3] = uVar4;
          puVar8[4] = 0;
          lVar9 = lVar9 + -1;
          puVar8 = puVar8 + 5;
        } while (lVar9 != 0);
      }
    }
    *(int *)(param_1 + 1) = param_2;
    uVar5 = 0;
  }
  return uVar5;
}
uint64_t function_8af3f6(int64_t param_1,int param_2)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int64_t in_RAX;
  int32_t *puVar4;
  int32_t *puVar5;
  int unaff_ESI;
  int64_t lVar6;
  int64_t unaff_R14;
  puVar5 = (int32_t *)(in_RAX + param_1 * 4);
  lVar6 = (int64_t)(unaff_ESI - param_2);
  if (0 < unaff_ESI - param_2) {
    do {
      puVar4 = (int32_t *)SystemCoreProcessor();
      uVar1 = puVar4[1];
      uVar2 = puVar4[2];
      uVar3 = puVar4[3];
      *puVar5 = *puVar4;
      puVar5[1] = uVar1;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      puVar5[4] = 0;
      lVar6 = lVar6 + -1;
      puVar5 = puVar5 + 5;
    } while (lVar6 != 0);
  }
  *(int *)(unaff_R14 + 8) = unaff_ESI;
  return 0;
}
uint64_t function_8af40f(void)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t *puVar4;
  int32_t *unaff_RBX;
  int32_t unaff_ESI;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  do {
    puVar4 = (int32_t *)SystemCoreProcessor();
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    uVar3 = puVar4[3];
    *unaff_RBX = *puVar4;
    unaff_RBX[1] = uVar1;
    unaff_RBX[2] = uVar2;
    unaff_RBX[3] = uVar3;
    unaff_RBX[4] = 0;
    unaff_RDI = unaff_RDI + -1;
    unaff_RBX = unaff_RBX + 5;
  } while (unaff_RDI != 0);
  *(int32_t *)(unaff_R14 + 8) = unaff_ESI;
  return 0;
}
uint64_t function_8af434(void)
{
  int32_t unaff_ESI;
  int64_t unaff_R14;
  *(int32_t *)(unaff_R14 + 8) = unaff_ESI;
  return 0;
}
uint64_t function_8af43e(void)
{
  int32_t unaff_ESI;
  int64_t unaff_R14;
  *(int32_t *)(unaff_R14 + 8) = unaff_ESI;
  return 0;
}
uint64_t function_8af450(int64_t *param_1,int param_2)
{
  int iVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  uint uVar7;
  int64_t lVar8;
  int64_t lVar9;
  uVar7 = (int)*(uint *)((int64_t)param_1 + 0xc) >> 0x1f;
  if ((param_2 <= (int)((*(uint *)((int64_t)param_1 + 0xc) ^ uVar7) - uVar7)) ||
     (uVar5 = NetworkSystem_ConnectionManager(param_1,param_2), (int)uVar5 == 0)) {
    iVar1 = (int)param_1[1];
    if (iVar1 < param_2) {
      lVar9 = (int64_t)(param_2 - iVar1);
      if (0 < param_2 - iVar1) {
        lVar8 = *param_1 + 0x14 + (int64_t)iVar1 * 0x18;
        do {
          puVar6 = (int32_t *)SystemCoreProcessor();
          uVar2 = puVar6[1];
          uVar3 = puVar6[2];
          uVar4 = puVar6[3];
          *(int32_t *)(lVar8 + -0x14) = *puVar6;
          *(int32_t *)(lVar8 + -0x10) = uVar2;
          *(int32_t *)(lVar8 + -0xc) = uVar3;
          *(int32_t *)(lVar8 + -8) = uVar4;
          *(uint64_t *)(lVar8 + -4) = 0;
          lVar9 = lVar9 + -1;
          lVar8 = lVar8 + 0x18;
        } while (lVar9 != 0);
      }
    }
    *(int *)(param_1 + 1) = param_2;
    uVar5 = 0;
  }
  return uVar5;
}
uint64_t function_8af488(int param_1,int64_t param_2,int64_t param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int in_EAX;
  int32_t *puVar4;
  int64_t lVar5;
  int32_t unaff_ESI;
  int64_t lVar6;
  int64_t unaff_R14;
  lVar6 = (int64_t)(in_EAX - param_1);
  if (0 < in_EAX - param_1) {
    lVar5 = param_3 + 0x14 + param_2 * 8;
    do {
      puVar4 = (int32_t *)SystemCoreProcessor();
      uVar1 = puVar4[1];
      uVar2 = puVar4[2];
      uVar3 = puVar4[3];
      *(int32_t *)(lVar5 + -0x14) = *puVar4;
      *(int32_t *)(lVar5 + -0x10) = uVar1;
      *(int32_t *)(lVar5 + -0xc) = uVar2;
      *(int32_t *)(lVar5 + -8) = uVar3;
      *(uint64_t *)(lVar5 + -4) = 0;
      lVar6 = lVar6 + -1;
      lVar5 = lVar5 + 0x18;
    } while (lVar6 != 0);
  }
  *(int32_t *)(unaff_R14 + 8) = unaff_ESI;
  return 0;
}
uint64_t function_8af496(uint64_t param_1,int64_t param_2,int64_t param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t *puVar4;
  int64_t lVar5;
  int32_t unaff_ESI;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  lVar5 = param_3 + 0x14 + param_2 * 8;
  do {
    puVar4 = (int32_t *)SystemCoreProcessor();
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    uVar3 = puVar4[3];
    *(int32_t *)(lVar5 + -0x14) = *puVar4;
    *(int32_t *)(lVar5 + -0x10) = uVar1;
    *(int32_t *)(lVar5 + -0xc) = uVar2;
    *(int32_t *)(lVar5 + -8) = uVar3;
    *(uint64_t *)(lVar5 + -4) = 0;
    unaff_RDI = unaff_RDI + -1;
    lVar5 = lVar5 + 0x18;
  } while (unaff_RDI != 0);
  *(int32_t *)(unaff_R14 + 8) = unaff_ESI;
  return 0;
}
uint64_t function_8af4d4(void)
{
  int32_t unaff_ESI;
  int64_t unaff_R14;
  *(int32_t *)(unaff_R14 + 8) = unaff_ESI;
  return 0;
}
uint64_t function_8af4d9(void)
{
  int32_t unaff_ESI;
  int64_t unaff_R14;
  *(int32_t *)(unaff_R14 + 8) = unaff_ESI;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_8af4f0(int64_t *param_1,int param_2)
{
  int iVar1;
  int64_t lVar2;
  uint uVar3;
  uint64_t uVar4;
  lVar2 = 0;
  uVar3 = (int)*(uint *)((int64_t)param_1 + 0xc) >> 0x1f;
  if ((int)((*(uint *)((int64_t)param_1 + 0xc) ^ uVar3) - uVar3) < param_2) {
    if (param_2 < (int)param_1[1]) {
      return 0x1c;
    }
    if (param_2 != 0) {
      if ((0x3ffffffe < param_2 * 0x278 - 1U) ||
         (lVar2 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x278,
                                &processed_var_8432_ptr,0xf4,0,0,1), lVar2 == 0)) {
        return 0x26;
      }
      if ((int)param_1[1] != 0) {
// WARNING: Subroutine does not return
        memcpy(lVar2,*param_1,(int64_t)(int)param_1[1] * 0x278);
      }
    }
    if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
    }
    *param_1 = lVar2;
    *(int *)((int64_t)param_1 + 0xc) = param_2;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    if (0 < param_2 - iVar1) {
      lVar2 = (int64_t)iVar1 * 0x278 + 0x264 + *param_1;
      *(uint64_t *)(lVar2 + -0x264) = 0;
      *(uint64_t *)(lVar2 + -0x25c) = 0;
      *(uint64_t *)(lVar2 + -0x254) = 0;
      *(uint64_t *)(lVar2 + -0x24c) = 0;
      *(uint64_t *)(lVar2 + -0x244) = 0;
      *(uint64_t *)(lVar2 + -0x23c) = 0;
      *(uint64_t *)(lVar2 + -0x234) = 0;
      *(uint64_t *)(lVar2 + -0x22c) = 0;
      *(uint64_t *)(lVar2 + -0x224) = 0;
// WARNING: Subroutine does not return
      memset(lVar2 + -0x21c,0,0x108);
    }
  }
  else if (param_2 < iVar1) {
    if (0 < iVar1 - param_2) {
      lVar2 = (int64_t)param_2 * 0x278 + 600 + *param_1;
      uVar4 = (uint64_t)(uint)(iVar1 - param_2);
      do {
        function_8723c0(lVar2 + 0x10);
        function_872300(lVar2);
        lVar2 = lVar2 + 0x278;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  *(int *)(param_1 + 1) = param_2;
  return 0;
}
uint64_t function_8af5d8(int64_t param_1)
{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int iVar4;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  uint64_t unaff_R14;
  iVar4 = (int)unaff_RSI;
  iVar1 = (int)param_1;
  if (iVar1 < iVar4) {
    if (0 < iVar4 - iVar1) {
      lVar2 = param_1 * 0x278 + 0x264 + *unaff_RDI;
      *(uint64_t *)(lVar2 + -0x264) = 0;
      *(uint64_t *)(lVar2 + -0x25c) = 0;
      *(uint64_t *)(lVar2 + -0x254) = 0;
      *(uint64_t *)(lVar2 + -0x24c) = 0;
      *(uint64_t *)(lVar2 + -0x244) = unaff_R14;
      *(uint64_t *)(lVar2 + -0x23c) = unaff_R14;
      *(uint64_t *)(lVar2 + -0x234) = unaff_R14;
      *(uint64_t *)(lVar2 + -0x22c) = unaff_R14;
      *(uint64_t *)(lVar2 + -0x224) = unaff_R14;
// WARNING: Subroutine does not return
      memset(lVar2 + -0x21c,0,0x108);
    }
  }
  else if (iVar4 < iVar1) {
    if (0 < iVar1 - iVar4) {
      lVar2 = unaff_RSI * 0x278 + 600 + *unaff_RDI;
      uVar3 = (uint64_t)(uint)(iVar1 - iVar4);
      do {
        function_8723c0(lVar2 + 0x10);
        function_872300(lVar2);
        lVar2 = lVar2 + 0x278;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  *(int *)(unaff_RDI + 1) = iVar4;
  return 0;
}
uint64_t function_8af69c(void)
{
  return 0x26;
}
uint64_t function_8af6a3(int param_1)
{
  uint uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  if (!in_ZF && in_OF == in_SF) {
    uVar1 = param_1 - (int)unaff_RSI;
    if (0 < (int)uVar1) {
      lVar2 = unaff_RSI * 0x278 + 600 + *unaff_RDI;
      uVar3 = (uint64_t)uVar1;
      do {
        function_8723c0(lVar2 + 0x10);
        function_872300(lVar2);
        lVar2 = lVar2 + 0x278;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  *(int *)(unaff_RDI + 1) = (int)unaff_RSI;
  return 0;
}