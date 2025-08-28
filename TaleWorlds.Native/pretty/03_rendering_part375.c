#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part375.c - 9 个函数
// 函数: void function_470a70(int64_t param_1,int64_t param_2,uint param_3)
void function_470a70(int64_t param_1,int64_t param_2,uint param_3)
{
  int *piVar1;
  uint64_t uVar2;
  int iVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  uint uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int iVar10;
  uint64_t uVar11;
  float fVar12;
  float fVar13;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  int32_t local_var_98;
  int32_t local_var_94;
  int32_t local_var_90;
  int32_t local_var_8c;
  int64_t lStack_88;
  float fStack_80;
  int8_t stack_array_78 [96];
  uVar11 = (uint64_t)param_3;
  if (*(char *)(param_1 + 0x80) != '\0') {
    function_495970();
  }
  *(int64_t *)(param_1 + 0x1b8 + uVar11 * 8) = param_2;
  fVar13 = *(float *)(param_1 + 0x3b0);
  lVar6 = uVar11 * 0x40;
  puVar4 = (uint64_t *)ErrorRecoverySystem(param_1 + 0x1c8 + lVar6,stack_array_78,param_1 + 0x248 + lVar6);
  local_var_c8 = *puVar4;
  local_var_c0 = puVar4[1];
  local_var_b8 = puVar4[2];
  local_var_b0 = puVar4[3];
  local_var_a8 = puVar4[4];
  local_var_a0 = puVar4[5];
  local_var_98 = *(int32_t *)(puVar4 + 6);
  local_var_94 = *(int32_t *)((int64_t)puVar4 + 0x34);
  local_var_90 = *(int32_t *)(puVar4 + 7);
  local_var_8c = *(int32_t *)((int64_t)puVar4 + 0x3c);
  puVar4 = (uint64_t *)ErrorRecoverySystem(&local_var_c8,stack_array_78,0x180bfbbd0);
  local_var_c8 = *puVar4;
  local_var_c0 = puVar4[1];
  local_var_b8 = puVar4[2];
  local_var_b0 = puVar4[3];
  local_var_a8 = puVar4[4];
  local_var_a0 = puVar4[5];
  local_var_98 = *(int32_t *)(puVar4 + 6);
  local_var_94 = *(int32_t *)((int64_t)puVar4 + 0x34);
  local_var_90 = *(int32_t *)(puVar4 + 7);
  local_var_8c = *(int32_t *)((int64_t)puVar4 + 0x3c);
  lStack_88 = param_2;
  fVar12 = (float)tanf(*(float *)(param_2 + 0x11c) * 0.5);
  atanf(fVar12 / *(float *)(param_2 + 0x120));
  fVar12 = (float)tanf();
  uVar8 = 0;
  fVar12 = fVar12 * fVar13 * fVar13;
  fStack_80 = fVar12;
  if (*(char *)(param_1 + 0x3b4) == '\0') {
    if (*(int *)(param_1 + 0x84) != 0) {
      do {
        iVar3 = (int)uVar8;
        lVar9 = *(int64_t *)(*(int64_t *)(param_1 + 0x60) + uVar8 * 8);
        if (*(char *)(uVar11 + 0xf8 + lVar9) != '\0') {
          puVar5 = (uint64_t *)ErrorRecoverySystem(lVar9 + 0xc,stack_array_78,&local_var_c8);
          uVar2 = puVar5[1];
          puVar4 = (uint64_t *)(lVar6 + 0x4c + lVar9);
          *puVar4 = *puVar5;
          puVar4[1] = uVar2;
          uVar2 = puVar5[3];
          puVar4 = (uint64_t *)(lVar6 + 0x5c + lVar9);
          *puVar4 = puVar5[2];
          puVar4[1] = uVar2;
          uVar2 = puVar5[5];
          puVar4 = (uint64_t *)(lVar6 + 0x6c + lVar9);
          *puVar4 = puVar5[4];
          puVar4[1] = uVar2;
          uVar2 = puVar5[7];
          puVar4 = (uint64_t *)(lVar6 + 0x7c + lVar9);
          *puVar4 = puVar5[6];
          puVar4[1] = uVar2;
          fVar13 = *(float *)(lVar6 + 0x68 + lVar9) * *(float *)(lVar9 + 0x104) +
                   *(float *)(lVar6 + 0x58 + lVar9) * *(float *)(lVar9 + 0x100) +
                   *(float *)(lVar6 + 0x78 + lVar9) * *(float *)(lVar9 + 0x108) +
                   *(float *)(lVar6 + 0x88 + lVar9);
          if (fVar13 <= 1.0) {
            *(int8_t *)(uVar11 + 0xfa + lVar9) = 0;
          }
          else {
            fVar13 = fVar12 * fVar13;
            *(bool *)(uVar11 + 0xfa + lVar9) =
                 *(float *)(lVar9 + 0x110) <= fVar13 && fVar13 != *(float *)(lVar9 + 0x110);
          }
        }
        uVar8 = (uint64_t)(iVar3 + 1U);
      } while (iVar3 + 1U < *(uint *)(param_1 + 0x84));
    }
  }
  else if (*(int *)(param_1 + 0x84) != 0) {
    do {
      iVar10 = (int)uVar8;
      lVar9 = *(int64_t *)(*(int64_t *)(param_1 + 0x60) + uVar8 * 8);
      iVar3 = function_63c760(param_2,lVar9 + 0xd8,*(int32_t *)(lVar9 + 0x110));
      *(bool *)(uVar11 + 0xf8 + lVar9) = iVar3 != 0;
      if (iVar3 != 0) {
        puVar5 = (uint64_t *)ErrorRecoverySystem(lVar9 + 0xc,stack_array_78,&local_var_c8);
        uVar2 = puVar5[1];
        puVar4 = (uint64_t *)(lVar6 + 0x4c + lVar9);
        *puVar4 = *puVar5;
        puVar4[1] = uVar2;
        uVar2 = puVar5[3];
        puVar4 = (uint64_t *)(lVar6 + 0x5c + lVar9);
        *puVar4 = puVar5[2];
        puVar4[1] = uVar2;
        uVar2 = puVar5[5];
        puVar4 = (uint64_t *)(lVar6 + 0x6c + lVar9);
        *puVar4 = puVar5[4];
        puVar4[1] = uVar2;
        uVar2 = puVar5[7];
        puVar4 = (uint64_t *)(lVar6 + 0x7c + lVar9);
        *puVar4 = puVar5[6];
        puVar4[1] = uVar2;
        fVar13 = *(float *)(lVar6 + 0x68 + lVar9) * *(float *)(lVar9 + 0x104) +
                 *(float *)(lVar6 + 0x58 + lVar9) * *(float *)(lVar9 + 0x100) +
                 *(float *)(lVar6 + 0x78 + lVar9) * *(float *)(lVar9 + 0x108) +
                 *(float *)(lVar6 + 0x88 + lVar9);
        if (fVar13 <= 1.0) {
          *(int8_t *)(uVar11 + 0xfa + lVar9) = 0;
        }
        else {
          fVar13 = fVar12 * fVar13;
          *(bool *)(uVar11 + 0xfa + lVar9) =
               *(float *)(lVar9 + 0x110) <= fVar13 && fVar13 != *(float *)(lVar9 + 0x110);
        }
      }
      uVar8 = (uint64_t)(iVar10 + 1U);
    } while (iVar10 + 1U < *(uint *)(param_1 + 0x84));
  }
  *(int32_t *)(param_1 + 0x3a8 + uVar11 * 4) = 0;
  uVar8 = 0;
  *(int32_t *)(param_1 + 0x3a0 + uVar11 * 4) = 0;
  *(int32_t *)(param_1 + 0x398 + uVar11 * 4) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    do {
      iVar3 = (int)uVar8;
      lVar6 = *(int64_t *)(*(int64_t *)(param_1 + 0x60) + uVar8 * 8);
      if ((*(char *)(uVar11 + 0xf8 + lVar6) != '\0') && (*(char *)(uVar11 + 0xfa + lVar6) == '\0'))
      {
        uVar7 = *(uint *)(param_1 + 0x398 + uVar11 * 4);
        *(uint *)(param_1 + 0x398 + uVar11 * 4) = uVar7 + 1;
        *(int *)(*(int64_t *)(param_1 + 0x388 + uVar11 * 8) + (uint64_t)uVar7 * 4) = iVar3;
        piVar1 = (int *)(param_1 + 0x3a0 + uVar11 * 4);
        *piVar1 = *piVar1 + (*(int *)(*(int64_t *)(param_1 + 0x90) + (uint64_t)(iVar3 + 1U) * 4) -
                            *(int *)(*(int64_t *)(param_1 + 0x90) + uVar8 * 4));
        piVar1 = (int *)(param_1 + 0x3a8 + uVar11 * 4);
        *piVar1 = *piVar1 + (*(int *)(*(int64_t *)(param_1 + 0x98) + (uint64_t)(iVar3 + 1U) * 4) -
                            *(int *)(*(int64_t *)(param_1 + 0x98) + uVar8 * 4));
      }
      uVar8 = (uint64_t)(iVar3 + 1U);
    } while (iVar3 + 1U < *(uint *)(param_1 + 0x84));
  }
  function_470e90(param_1,uVar11);
  function_4710e0(param_1,param_3);
  uVar7 = 0;
  do {
    function_471300(param_1,uVar7,uVar11);
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0x20);
  uVar7 = 0;
  if (*(uint *)(param_1 + 0x380) < 10) {
    uVar7 = *(uint *)(param_1 + 0x380);
  }
  *(uint *)(param_1 + 0x380) = uVar7;
  return;
}
// 函数: void function_470e90(int64_t param_1,uint param_2)
void function_470e90(int64_t param_1,uint param_2)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  float *pfVar10;
  uint64_t uVar11;
  uint uVar12;
  uint64_t uVar13;
  uint uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  int64_t *plVar17;
  int64_t lVar18;
  float fVar19;
  float fVar20;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  int32_t local_var_6c;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uVar11 = (uint64_t)param_2;
  uVar13 = 0;
  if (*(int *)(param_1 + 0x398 + uVar11 * 4) != 0) {
    do {
      lVar4 = *(int64_t *)
               (*(int64_t *)(param_1 + 0x60) +
               (uint64_t)*(uint *)(*(int64_t *)(param_1 + 0x388 + uVar11 * 8) + uVar13 * 4) * 8);
      if (((*(char *)(uVar11 + 0xf8 + lVar4) != '\0') && (*(char *)(uVar11 + 0xfa + lVar4) == '\0'))
         && (uVar15 = 0, *(int *)(lVar4 + 8) != 0)) {
        uVar12 = *(uint *)(lVar4 + 0xcc);
        lVar18 = uVar11 * 0x40;
        do {
          plVar17 = (int64_t *)(uVar15 * 0x38 + *(int64_t *)(lVar4 + 0x118));
          lVar8 = plVar17[2];
          lVar5 = *(int64_t *)(*(int64_t *)(*plVar17 + 0xb8) + 0x40);
          lVar9 = 0;
          uVar16 = (uint64_t)uVar12;
          do {
            lVar6 = *(int64_t *)((int64_t)(int)lVar8 * 0x88 + lVar5 + 0x28);
            fVar1 = *(float *)(lVar9 + 4 + lVar6);
            fVar2 = *(float *)(lVar9 + lVar6);
            fVar3 = *(float *)(lVar9 + 8 + lVar6);
            fVar20 = fVar2 * *(float *)(lVar18 + 0x54 + lVar4) +
                     fVar1 * *(float *)(lVar18 + 100 + lVar4) +
                     fVar3 * *(float *)(lVar18 + 0x74 + lVar4) + *(float *)(lVar18 + 0x84 + lVar4);
            fVar19 = fVar2 * *(float *)(lVar18 + 0x58 + lVar4) +
                     fVar1 * *(float *)(lVar18 + 0x68 + lVar4) +
                     fVar3 * *(float *)(lVar18 + 0x78 + lVar4) + *(float *)(lVar18 + 0x88 + lVar4);
            if (fVar19 < fVar20) {
              pfVar10 = (float *)&local_var_68;
              local_var_68 = 0;
              local_var_60 = 0;
            }
            else {
              fStack_78 = (fVar2 * *(float *)(lVar18 + 0x4c + lVar4) +
                           fVar1 * *(float *)(lVar18 + 0x5c + lVar4) +
                           fVar3 * *(float *)(lVar18 + 0x6c + lVar4) +
                          *(float *)(lVar18 + 0x7c + lVar4)) / fVar19;
              fStack_74 = (fVar2 * *(float *)(lVar18 + 0x50 + lVar4) +
                           fVar1 * *(float *)(lVar18 + 0x60 + lVar4) +
                           fVar3 * *(float *)(lVar18 + 0x70 + lVar4) +
                          *(float *)(lVar18 + 0x80 + lVar4)) * (1.0 / fVar19);
              fStack_70 = (1.0 / fVar19) * fVar20;
              local_var_6c = 0x3f800000;
              pfVar10 = &fStack_78;
            }
            lVar6 = plVar17[uVar11 + 5];
            uVar7 = *(uint64_t *)((int64_t)pfVar10 + 8);
            *(uint64_t *)(lVar6 + lVar9) = *(uint64_t *)pfVar10;
            ((uint64_t *)(lVar6 + lVar9))[1] = uVar7;
            lVar9 = lVar9 + 0x10;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
          uVar14 = (int)uVar15 + 1;
          uVar15 = (uint64_t)uVar14;
        } while (uVar14 < *(uint *)(lVar4 + 8));
      }
      uVar12 = (int)uVar13 + 1;
      uVar13 = (uint64_t)uVar12;
    } while (uVar12 < *(uint *)(param_1 + 0x398 + uVar11 * 4));
  }
  return;
}
// 函数: void function_470eaf(void)
void function_470eaf(void)
{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t in_RAX;
  int64_t lVar8;
  uint64_t *puVar9;
  int64_t unaff_RBX;
  uint uVar10;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint uVar11;
  uint64_t unaff_RDI;
  uint64_t uVar12;
  uint64_t uVar13;
  int64_t *plVar14;
  int64_t lVar15;
  uint64_t unaff_R14;
  int64_t unaff_R15;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  uint64_t stack_special_x_10;
  uint64_t stack_special_x_18;
  *(uint64_t *)(in_RAX + 8) = unaff_RSI;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RDI;
  *(uint64_t *)(in_RAX + 0x18) = unaff_R14;
  *(int32_t *)(in_RAX + -0x28) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x24) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x20) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x1c) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM7_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM9_Dd;
  do {
    lVar3 = *(int64_t *)
             (*(int64_t *)(unaff_R15 + 0x60) +
             (uint64_t)*(uint *)(*(int64_t *)(unaff_R15 + 0x388 + unaff_RBX * 8) + unaff_RBP * 4)
             * 8);
    if (((*(char *)(unaff_RBX + 0xf8 + lVar3) != '\0') &&
        (*(char *)(unaff_RBX + 0xfa + lVar3) == '\0')) && (uVar12 = 0, *(int *)(lVar3 + 8) != 0)) {
      uVar10 = *(uint *)(lVar3 + 0xcc);
      lVar15 = unaff_RBX * 0x40;
      do {
        plVar14 = (int64_t *)(uVar12 * 0x38 + *(int64_t *)(lVar3 + 0x118));
        lVar7 = plVar14[2];
        lVar4 = *(int64_t *)(*(int64_t *)(*plVar14 + 0xb8) + 0x40);
        lVar8 = 0;
        uVar13 = (uint64_t)uVar10;
        do {
          lVar5 = *(int64_t *)((int64_t)(int)lVar7 * 0x88 + lVar4 + 0x28);
          fVar1 = *(float *)(lVar8 + 4 + lVar5);
          fVar2 = *(float *)(lVar8 + 8 + lVar5);
          puVar9 = (uint64_t *)register0x00000020;
          if (*(float *)(lVar8 + lVar5) * *(float *)(lVar15 + 0x58 + lVar3) +
              fVar1 * *(float *)(lVar15 + 0x68 + lVar3) + fVar2 * *(float *)(lVar15 + 0x78 + lVar3)
              + *(float *)(lVar15 + 0x88 + lVar3) <
              *(float *)(lVar8 + lVar5) * *(float *)(lVar15 + 0x54 + lVar3) +
              fVar1 * *(float *)(lVar15 + 100 + lVar3) + fVar2 * *(float *)(lVar15 + 0x74 + lVar3) +
              *(float *)(lVar15 + 0x84 + lVar3)) {
            stack_special_x_10 = 0;
            stack_special_x_18 = 0;
            puVar9 = &stack_special_x_10;
          }
          lVar5 = plVar14[unaff_RBX + 5];
          uVar6 = puVar9[1];
          *(uint64_t *)(lVar5 + lVar8) = *puVar9;
          ((uint64_t *)(lVar5 + lVar8))[1] = uVar6;
          lVar8 = lVar8 + 0x10;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
        uVar11 = (int)uVar12 + 1;
        uVar12 = (uint64_t)uVar11;
      } while (uVar11 < *(uint *)(lVar3 + 8));
    }
    uVar10 = (int)unaff_RBP + 1;
    unaff_RBP = (uint64_t)uVar10;
  } while (uVar10 < *(uint *)(unaff_R15 + 0x398 + unaff_RBX * 4));
  return;
}
// 函数: void function_4710d6(void)
void function_4710d6(void)
{
  return;
}
// 函数: void function_4710e0(int64_t param_1,uint param_2)
void function_4710e0(int64_t param_1,uint param_2)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint uVar4;
  uint uVar5;
  uint64_t uVar6;
  uint stack_special_x_18;
  uVar6 = (uint64_t)param_2;
  uVar5 = 0;
  do {
    uVar4 = uVar5 * 8;
    uVar5 = uVar5 + 1;
    *(int32_t *)(*(int64_t *)(param_1 + 0x378 + uVar6 * 8) + (uint64_t)uVar4 * 4) = 0;
    *(int32_t *)(*(int64_t *)(param_1 + 0x378 + uVar6 * 8) + (uint64_t)(uVar4 + 1) * 4) = 0;
    *(int32_t *)(*(int64_t *)(param_1 + 0x378 + uVar6 * 8) + (uint64_t)(uVar4 + 2) * 4) = 0;
    *(int32_t *)(*(int64_t *)(param_1 + 0x378 + uVar6 * 8) + (uint64_t)(uVar4 + 3) * 4) = 0;
    *(int32_t *)(*(int64_t *)(param_1 + 0x378 + uVar6 * 8) + (uint64_t)(uVar4 + 4) * 4) = 0;
    *(int32_t *)(*(int64_t *)(param_1 + 0x378 + uVar6 * 8) + (uint64_t)(uVar4 + 5) * 4) = 0;
    *(int32_t *)(*(int64_t *)(param_1 + 0x378 + uVar6 * 8) + (uint64_t)(uVar4 + 6) * 4) = 0;
    *(int32_t *)(*(int64_t *)(param_1 + 0x378 + uVar6 * 8) + (uint64_t)(uVar4 + 7) * 4) = 0;
  } while (uVar5 < 4);
  stack_special_x_18 = 0;
  if (*(int *)(param_1 + 0x398 + uVar6 * 4) != 0) {
    do {
      uVar4 = 0;
      uVar5 = *(uint *)(*(int64_t *)(param_1 + 0x388 + uVar6 * 8) + (uint64_t)stack_special_x_18 * 4);
      lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x60) + (uint64_t)uVar5 * 8);
      iVar1 = *(int *)(lVar2 + 0xd0);
      if (((*(char *)(uVar6 + 0xf8 + lVar2) != '\0') && (*(char *)(uVar6 + 0xfa + lVar2) == '\0'))
         && (*(int *)(lVar2 + 8) != 0)) {
        do {
          lVar3 = (uint64_t)uVar4 * 0x38 + *(int64_t *)(lVar2 + 0x118);
          if ((*(byte *)(lVar3 + 0x14) & 1) == 0) {
            function_49cc80(lVar3,iVar1 + -1,uVar5,uVar4);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(lVar2 + 8));
      }
      stack_special_x_18 = stack_special_x_18 + 1;
    } while (stack_special_x_18 < *(uint *)(param_1 + 0x398 + uVar6 * 4));
  }
  return;
}
// 函数: void function_4711b1(void)
void function_4711b1(void)
{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint unaff_EBX;
  uint unaff_ESI;
  int64_t in_R11;
  int64_t unaff_R14;
  int iStack0000000000000028;
  uint64_t local_var_30;
  uint64_t local_var_38;
  uint64_t local_var_40;
  uint64_t local_var_48;
  int8_t local_buffer_50;
  int32_t local_buffer_58;
  int64_t local_buffer_68;
  int64_t local_buffer_c0;
  int32_t local_buffer_c8;
  uint local_buffer_d0;
  do {
    uVar3 = *(uint64_t *)(in_R11 + 0x378 + unaff_R14 * 8);
    uVar4 = *(uint64_t *)(in_R11 + 0x370 + unaff_R14 * 8);
    uVar1 = *(uint *)(*(int64_t *)(in_R11 + 0x388 + unaff_R14 * 8) + (uint64_t)unaff_ESI * 4);
    uVar5 = *(uint64_t *)(in_R11 + 0x360 + unaff_R14 * 8);
    lVar6 = *(int64_t *)(*(int64_t *)(in_R11 + 0x60) + (uint64_t)uVar1 * 8);
    uVar7 = *(uint64_t *)(in_R11 + 0x368 + unaff_R14 * 8);
    iVar2 = *(int *)(lVar6 + 0xd0);
    if ((*(char *)(unaff_R14 + 0xf8 + lVar6) != '\0') &&
       (*(char *)(unaff_R14 + 0xfa + lVar6) == '\0')) {
      if (*(int *)(lVar6 + 8) != 0) {
        do {
          lVar8 = (uint64_t)unaff_EBX * 0x38 + *(int64_t *)(lVar6 + 0x118);
          if ((*(byte *)(lVar8 + 0x14) & 1) == 0) {
            iStack0000000000000028 = iVar2 + -1;
            local_buffer_58 = local_buffer_c8;
            local_buffer_50 = *(int8_t *)(lVar6 + 0xfc);
            local_var_30 = uVar5;
            local_var_38 = uVar7;
            local_var_40 = uVar4;
            local_var_48 = uVar3;
            function_49cc80(lVar8,iStack0000000000000028,uVar1,unaff_EBX);
          }
          unaff_EBX = unaff_EBX + 1;
          in_R11 = local_buffer_c0;
          unaff_R14 = local_buffer_68;
          unaff_ESI = local_buffer_d0;
        } while (unaff_EBX < *(uint *)(lVar6 + 8));
      }
      unaff_EBX = 0;
    }
    local_buffer_d0 = unaff_ESI + 1;
    unaff_ESI = local_buffer_d0;
  } while (local_buffer_d0 < *(uint *)(in_R11 + 0x398 + unaff_R14 * 4));
  return;
}
// 函数: void function_4712eb(void)
void function_4712eb(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_471300(int64_t param_1,uint param_2,uint param_3)
void function_471300(int64_t param_1,uint param_2,uint param_3)
{
  uint64_t *puVar1;
  int *piVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int64_t lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint64_t uVar17;
  int64_t lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  float *pfVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  int64_t lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int8_t stack_array_128 [32];
  uint local_var_108;
  uint local_var_104;
  int iStack_100;
  uint local_var_fc;
  uint local_var_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  uint local_var_e8;
  uint local_var_e4;
  uint local_var_e0;
  uint local_var_dc;
  uint local_var_d8;
  uint local_var_d4;
  int iStack_d0;
  float *pfStack_c8;
  int64_t lStack_c0;
  uint64_t local_var_b8;
  int64_t lStack_b0;
  int64_t lStack_a8;
  uint64_t local_var_a0;
  uint64_t local_var_98;
  uint64_t local_var_90;
  uint64_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  uint64_t local_var_68;
  local_var_68 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_128;
  local_var_a0 = (uint64_t)param_3;
  uVar19 = param_2 & 7;
  lStack_c0 = *(int64_t *)(param_1 + 0x348 + local_var_a0 * 8);
  uVar8 = param_2 >> 3;
  local_var_e0 = uVar19 * 0x50;
  local_var_e4 = uVar19 + uVar8 * 8;
  local_var_dc = 0x27f;
  if (local_var_e0 + 0x4f < 0x27f) {
    local_var_dc = local_var_e0 + 0x4f;
  }
  local_var_d8 = uVar8 * 0x60;
  iVar9 = 0x167;
  if ((int)(local_var_d8 + 0x5f) < 0x167) {
    iVar9 = local_var_d8 + 0x5f;
  }
  uVar25 = 0;
  iVar12 = 0;
  local_var_e8 = 0;
  iVar26 = *(int *)(*(int64_t *)(param_1 + 0x378 + local_var_a0 * 8) + (uint64_t)local_var_e4 * 4);
  local_var_d4 = iVar9 + 1;
  lStack_b0 = param_1;
  if ((int)local_var_d8 < (int)local_var_d4) {
// WARNING: Subroutine does not return
    memset(lStack_c0 + (int64_t)(int)(uVar8 * 0xf000 + local_var_e0) * 4,0,
           (int64_t)(int)(local_var_dc + uVar19 * -0x50 + 1) << 2);
  }
  lStack_a8 = local_var_a0 * 0x20 + (uint64_t)param_2;
  *(int *)(param_1 + 0xa8 + lStack_a8 * 4) = iVar26;
  do {
    if (iVar26 == 0) {
      do {
        uVar25 = uVar25 + 1;
        if (uVar25 != 0) break;
        iVar12 = 0;
        iVar26 = *(int *)(*(int64_t *)(param_1 + 0x378 + local_var_a0 * 8) + (uint64_t)local_var_e4 * 4)
        ;
        piVar2 = (int *)(param_1 + 0xa8 + lStack_a8 * 4);
        *piVar2 = *piVar2 + iVar26;
      } while (iVar26 == 0);
      local_var_e8 = uVar25;
      if (iVar26 == 0) break;
    }
    iVar26 = iVar26 + -1;
    uVar17 = (uint64_t)((local_var_e4 + uVar25) * 0x4000 + iVar12);
    iVar12 = iVar12 + 1;
    lVar27 = *(int64_t *)
              (*(int64_t *)(param_1 + 0x60) +
              (uint64_t)*(uint *)(*(int64_t *)(param_1 + 0x368 + local_var_a0 * 8) + uVar17 * 4) * 8)
    ;
    lVar11 = (uint64_t)*(uint *)(*(int64_t *)(param_1 + 0x370 + local_var_a0 * 8) + uVar17 * 4) *
             0x38 + *(int64_t *)(lVar27 + 0x118);
    lVar18 = *(int64_t *)(lVar11 + 0x28 + local_var_a0 * 8);
    uVar8 = *(int *)(*(int64_t *)(param_1 + 0x360 + local_var_a0 * 8) + uVar17 * 4) * 3;
    lVar11 = *(int64_t *)(*(int64_t *)(lVar11 + 8) + 0x48);
    puVar1 = (uint64_t *)(lVar18 + (uint64_t)*(uint *)(lVar11 + (uint64_t)uVar8 * 4) * 0x10);
    uVar3 = *puVar1;
    local_var_90 = puVar1[1];
    puVar1 = (uint64_t *)
             (lVar18 + (uint64_t)*(uint *)(lVar11 + (uint64_t)(uVar8 + 1) * 4) * 0x10);
    uVar4 = *puVar1;
    local_var_80 = puVar1[1];
    local_var_98._4_4_ = (float)((uint64_t)uVar3 >> 0x20);
    uVar19 = (uint)(local_var_98._4_4_ + 0.5);
    puVar1 = (uint64_t *)
             (lVar18 + (uint64_t)*(uint *)(lVar11 + (uint64_t)(uVar8 + 2) * 4) * 0x10);
    uVar5 = *puVar1;
    local_var_70 = puVar1[1];
    local_var_98._0_4_ = (float)uVar3;
    uVar8 = (uint)((float)local_var_98 + 0.5);
    local_var_78._0_4_ = (float)uVar5;
    local_var_78._4_4_ = (float)((uint64_t)uVar5 >> 0x20);
    local_var_88._0_4_ = (float)uVar4;
    local_var_88._4_4_ = (float)((uint64_t)uVar4 >> 0x20);
    fVar32 = (float)local_var_80;
    fVar29 = (float)local_var_70;
    fVar30 = (float)local_var_78;
    fVar31 = local_var_78._4_4_;
    if (*(char *)(lVar27 + 0xfc) != '\0') {
      fVar32 = (float)local_var_70;
      fVar29 = (float)local_var_80;
      fVar30 = (float)local_var_88;
      fVar31 = local_var_88._4_4_;
      local_var_88._0_4_ = (float)local_var_78;
      local_var_88._4_4_ = local_var_78._4_4_;
    }
    uVar14 = (uint)(local_var_88._4_4_ + 0.5);
    uVar15 = (uint)((float)local_var_88 + 0.5);
    iStack_100 = uVar15 - uVar8;
    iVar23 = uVar19 - uVar14;
    uVar16 = (uint)(fVar31 + 0.5);
    uVar21 = (uint)(fVar30 + 0.5);
    iVar9 = (uVar16 - uVar19) * iStack_100 - (uVar8 - uVar21) * iVar23;
    fVar30 = fVar32;
    uVar7 = uVar15;
    uVar20 = uVar14;
    if (((*(byte *)(lVar27 + 0xd4) & 4) != 0) && (iVar9 < 0)) {
      iVar23 = uVar19 - uVar16;
      iStack_100 = uVar21 - uVar8;
      iVar9 = (uVar14 - uVar19) * iStack_100 - (uVar8 - uVar15) * iVar23;
      fVar30 = fVar29;
      fVar29 = fVar32;
      uVar7 = uVar21;
      uVar20 = uVar16;
      uVar16 = uVar14;
      uVar21 = uVar15;
    }
    iVar24 = uVar16 - uVar19;
    iStack_f0 = uVar21 - uVar7;
    iStack_ec = uVar8 - uVar21;
    iVar13 = uVar20 - uVar16;
    uVar14 = uVar7;
    if ((int)uVar8 < (int)uVar7) {
      uVar14 = uVar8;
    }
    uVar15 = uVar21;
    if ((int)uVar14 < (int)uVar21) {
      uVar15 = uVar14;
    }
    local_var_fc = local_var_e0;
    if ((int)local_var_e0 < (int)uVar15) {
      local_var_fc = uVar15;
    }
    local_var_fc = local_var_fc & 0xfffffffe;
    uVar14 = uVar7;
    if ((int)uVar7 < (int)uVar8) {
      uVar14 = uVar8;
    }
    uVar15 = uVar21;
    if ((int)uVar21 < (int)uVar14) {
      uVar15 = uVar14;
    }
    uVar14 = local_var_dc + 1;
    if ((int)uVar15 < (int)(local_var_dc + 1)) {
      uVar14 = uVar15;
    }
    uVar15 = uVar20;
    if ((int)uVar19 < (int)uVar20) {
      uVar15 = uVar19;
    }
    uVar10 = uVar16;
    if ((int)uVar15 < (int)uVar16) {
      uVar10 = uVar15;
    }
    uVar15 = local_var_d8;
    if ((int)local_var_d8 < (int)uVar10) {
      uVar15 = uVar10;
    }
    uVar15 = uVar15 & 0xfffffffe;
    uVar10 = uVar20;
    if ((int)uVar20 < (int)uVar19) {
      uVar10 = uVar19;
    }
    uVar6 = uVar16;
    if ((int)uVar16 < (int)uVar10) {
      uVar6 = uVar10;
    }
    uVar10 = local_var_d4;
    if ((int)uVar6 < (int)local_var_d4) {
      uVar10 = uVar6;
    }
    fVar31 = (fVar30 - (float)local_var_90) * (1.0 / (float)iVar9);
    fVar32 = (fVar29 - (float)local_var_90) * (1.0 / (float)iVar9);
    local_var_108 = (uVar15 * iStack_f0 - uVar21 * uVar20) + local_var_fc * iVar13 + uVar7 * uVar16;
    local_var_104 = (uVar15 * iStack_ec - uVar16 * uVar8) + local_var_fc * iVar24 + uVar21 * uVar19;
    local_var_f8 = (uVar15 * iStack_100 - uVar7 * uVar19) + local_var_fc * iVar23 + uVar8 * uVar20;
    fVar30 = (float)iVar23 * fVar32 + (float)iVar24 * fVar31;
    if ((int)uVar15 < (int)uVar10) {
      lVar27 = (int64_t)(int)(uVar15 * 0x280 + local_var_fc);
      local_var_b8 = (uint64_t)(uVar10 - uVar15);
      pfStack_c8 = (float *)(lStack_c0 + 8 + lVar27 * 4);
      uVar8 = local_var_104;
      do {
        fVar29 = (float)(int)uVar8 * fVar31 + (float)local_var_90 + (float)(int)local_var_f8 * fVar32;
        if ((int)local_var_fc < (int)uVar14) {
          lVar18 = lVar27;
          uVar25 = local_var_108;
          uVar7 = local_var_fc;
          uVar20 = local_var_f8;
          uVar19 = uVar8;
          if (3 < (int)(uVar14 - local_var_fc)) {
            uVar7 = ((uVar14 - local_var_fc) - 4 >> 2) + 1;
            uVar17 = (uint64_t)uVar7;
            lVar18 = lVar27 + (uint64_t)uVar7 * 4;
            uVar7 = local_var_fc + uVar7 * 4;
            pfVar22 = pfStack_c8;
            do {
              fVar28 = pfVar22[-2];
              if ((-1 < (int)(uVar20 | uVar19 | uVar25)) && (fVar28 <= fVar29)) {
                fVar28 = fVar29;
              }
              pfVar22[-2] = fVar28;
              fVar28 = pfVar22[-1];
              fVar29 = fVar29 + fVar30;
              if ((-1 < (int)(uVar20 + iVar23 | uVar19 + iVar24 | uVar25 + iVar13)) &&
                 (fVar28 <= fVar29)) {
                fVar28 = fVar29;
              }
              uVar20 = uVar20 + iVar23 + iVar23;
              pfVar22[-1] = fVar28;
              fVar28 = *pfVar22;
              fVar29 = fVar29 + fVar30;
              uVar19 = uVar19 + iVar24 + iVar24;
              uVar25 = uVar25 + iVar13 + iVar13;
              if ((-1 < (int)(uVar20 | uVar19 | uVar25)) && (fVar28 <= fVar29)) {
                fVar28 = fVar29;
              }
              uVar20 = uVar20 + iVar23;
              *pfVar22 = fVar28;
              fVar28 = pfVar22[1];
              fVar29 = fVar29 + fVar30;
              uVar19 = uVar19 + iVar24;
              uVar25 = uVar25 + iVar13;
              if ((-1 < (int)(uVar20 | uVar19 | uVar25)) && (fVar28 <= fVar29)) {
                fVar28 = fVar29;
              }
              pfVar22[1] = fVar28;
              fVar29 = fVar29 + fVar30;
              pfVar22 = pfVar22 + 4;
              uVar25 = uVar25 + iVar13;
              uVar19 = uVar19 + iVar24;
              uVar20 = uVar20 + iVar23;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
          if ((int)uVar7 < (int)uVar14) {
            pfVar22 = (float *)(lStack_c0 + lVar18 * 4);
            lVar18 = (int64_t)(int)(uVar14 - uVar7);
            do {
              fVar28 = *pfVar22;
              if ((-1 < (int)(uVar20 | uVar19 | uVar25)) && (fVar28 <= fVar29)) {
                fVar28 = fVar29;
              }
              *pfVar22 = fVar28;
              fVar29 = fVar29 + fVar30;
              pfVar22 = pfVar22 + 1;
              uVar25 = uVar25 + iVar13;
              uVar19 = uVar19 + iVar24;
              uVar20 = uVar20 + iVar23;
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
          }
        }
        pfStack_c8 = pfStack_c8 + 0x280;
        local_var_108 = local_var_108 + iStack_f0;
        local_var_f8 = local_var_f8 + iStack_100;
        uVar8 = uVar8 + iStack_ec;
        lVar27 = lVar27 + 0x280;
        local_var_b8 = local_var_b8 - 1;
      } while (local_var_b8 != 0);
      local_var_b8 = 0;
      uVar25 = local_var_e8;
    }
    iStack_f4 = iVar12;
    iStack_d0 = iVar26;
    local_var_98 = uVar3;
    local_var_88 = uVar4;
    local_var_78 = uVar5;
  } while (uVar25 < 0x10);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_68 ^ (uint64_t)stack_array_128);
}
// 函数: void function_4719f0(int64_t param_1,uint64_t param_2)
void function_4719f0(int64_t param_1,uint64_t param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  lVar2 = *(int64_t *)(param_1 + 0x20);
  if (lVar2 != 0) {
    while( true ) {
      lVar6 = *(int64_t *)(lVar2 + 0x200);
      lVar1 = *(int64_t *)(lVar2 + 0x208) - lVar6 >> 3;
      if (lVar1 != 0) break;
      lVar2 = *(int64_t *)(lVar2 + 0x168);
      if (lVar2 == 0) {
        return;
      }
    }
    if ((lVar2 != 0) && (uVar3 = 0, uVar5 = uVar3, lVar1 != 0)) {
      do {
        (**(code **)(**(int64_t **)(uVar3 + lVar6) + 0xd0))(*(int64_t **)(uVar3 + lVar6),param_2);
        lVar6 = *(int64_t *)(lVar2 + 0x200);
        uVar3 = uVar3 + 8;
        uVar4 = (int)uVar5 + 1;
        uVar5 = (uint64_t)uVar4;
      } while ((uint64_t)(int64_t)(int)uVar4 <
               (uint64_t)(*(int64_t *)(lVar2 + 0x208) - lVar6 >> 3));
    }
  }
  return;
}