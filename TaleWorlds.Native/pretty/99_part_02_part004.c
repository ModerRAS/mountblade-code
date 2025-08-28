// 原始函数语义化别名定义
// 本文件包含当前文件中使用的原始函数的语义化别名
// 这些别名提高了代码的可读性和维护性
#include "TaleWorlds.Native.Split.h"
// 99_part_02_part004.c - 7 个函数
// 函数: void GenericFunction_1800eae10(int64_t *param_1,int64_t *param_2,int64_t param_3)
void GenericFunction_1800eae10(int64_t *param_1,int64_t *param_2,int64_t param_3)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint uVar3;
  char cVar4;
  int64_t lVar5;
  uint uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint uVar9;
  int64_t lVar10;
  int64_t lVar11;
  int32_t local_var_d8;
  int32_t local_var_d4;
  int32_t local_var_d0;
  int32_t local_var_cc;
  int32_t local_var_c8;
  int32_t local_var_c4;
  int32_t local_var_c0;
  int32_t local_var_bc;
  int64_t lStack_b8;
  int64_t lStack_b0;
  int32_t local_var_a8;
  int32_t local_var_a4;
  int32_t local_var_a0;
  int32_t local_var_9c;
  int64_t lStack_98;
  int64_t lStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  int64_t lStack_78;
  int64_t lStack_70;
  int32_t local_var_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_5c;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  lVar10 = (int64_t)(int)param_2[1];
  uVar3 = *(uint *)(param_1 + 1);
  lVar11 = (int64_t)(int)uVar3;
  lVar5 = lVar10 - lVar11;
  do {
    if ((lVar5 < 0x1d) || (param_3 < 1)) {
      if (param_3 == 0) {
        lStack_88 = *param_2;
        lStack_80 = param_2[1];
        local_var_68 = (int32_t)*param_1;
        local_var_64 = *(int32_t *)((int64_t)param_1 + 4);
        local_var_60 = (int32_t)param_1[1];
        local_var_5c = *(int32_t *)((int64_t)param_1 + 0xc);
        lStack_78 = lStack_88;
        lStack_70 = lStack_80;
        GenericFunction_1800ebb40(&local_var_68,&lStack_78,&lStack_88);
      }
      return;
    }
    uVar9 = (int)lVar10 - 1;
    uVar6 = uVar9 >> 0xb;
    puVar1 = (uint64_t *)
             (*(int64_t *)(*param_2 + 8 + (uint64_t)uVar6 * 8) +
             (uint64_t)(uVar9 + uVar6 * -0x800) * 0x18);
    uVar6 = (int)(((int)lVar10 - lVar11) / 2) + uVar3;
    uVar9 = uVar6 >> 0xb;
    puVar7 = (uint64_t *)
             (*(int64_t *)(*param_1 + 8 + (uint64_t)uVar9 * 8) +
             (uint64_t)(uVar6 + uVar9 * -0x800) * 0x18);
    puVar2 = (uint64_t *)
             (*(int64_t *)(*param_1 + 8 + (uint64_t)(uVar3 >> 0xb) * 8) +
             (uint64_t)(uVar3 + (uVar3 >> 0xb) * -0x800) * 0x18);
    cVar4 = Function_c47b5959(puVar2[2],puVar7[2]);
    if (cVar4 == '\0') {
      cVar4 = Function_c47b5959(puVar2[2],puVar1[2]);
      puVar8 = puVar2;
      if (cVar4 == '\0') {
        cVar4 = Function_c47b5959(puVar7[2],puVar1[2]);
        goto LAB_1800eaf28;
      }
    }
    else {
      cVar4 = Function_c47b5959(puVar7[2],puVar1[2]);
      puVar8 = puVar7;
      if (cVar4 == '\0') {
        cVar4 = Function_c47b5959(puVar2[2],puVar1[2]);
        puVar7 = puVar2;
LAB_1800eaf28:
        puVar8 = puVar7;
        if (cVar4 != '\0') {
          puVar8 = puVar1;
        }
      }
    }
    local_var_58 = *puVar8;
    local_var_50 = puVar8[1];
    local_var_48 = puVar8[2];
    local_var_d8 = (int32_t)*param_2;
    local_var_d4 = *(int32_t *)((int64_t)param_2 + 4);
    local_var_d0 = (int32_t)param_2[1];
    local_var_cc = *(int32_t *)((int64_t)param_2 + 0xc);
    local_var_c8 = (int32_t)*param_1;
    local_var_c4 = *(int32_t *)((int64_t)param_1 + 4);
    local_var_c0 = (int32_t)param_1[1];
    local_var_bc = *(int32_t *)((int64_t)param_1 + 0xc);
    GenericFunction_1800ec740(&lStack_b8,&local_var_c8,&local_var_d8,&local_var_58);
    lVar5 = lStack_b0;
    lVar10 = lStack_b8;
    local_var_a8 = (int32_t)*param_2;
    local_var_a4 = *(int32_t *)((int64_t)param_2 + 4);
    local_var_a0 = (int32_t)param_2[1];
    local_var_9c = *(int32_t *)((int64_t)param_2 + 0xc);
    param_3 = param_3 + -1;
    lStack_98 = lStack_b8;
    lStack_90 = lStack_b0;
    GenericFunction_1800eae10(&lStack_98,&local_var_a8,param_3,&SUB_1800d4090);
    *param_2 = lVar10;
    param_2[1] = lVar5;
    lVar10 = (int64_t)(int)param_2[1];
    lVar5 = lVar10 - lVar11;
  } while( true );
}
// 函数: void GenericFunction_1800eae25(int64_t *param_1,uint64_t param_2,int64_t param_3,int64_t param_4,
void GenericFunction_1800eae25(int64_t *param_1,uint64_t param_2,int64_t param_3,int64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  uint64_t param_9,int64_t param_10,int64_t param_11,uint64_t param_12,
                  uint64_t param_13,int64_t param_14,int64_t param_15,int64_t param_16,
                  int64_t param_17,int64_t param_18,int64_t param_19,int32_t param_20,
                  int32_t param_21,uint64_t param_22,uint64_t param_23,uint64_t param_24)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t lVar5;
  char cVar6;
  uint uVar7;
  uint64_t unaff_RBX;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint uVar10;
  int64_t in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  int64_t lVar11;
  int64_t *unaff_R14;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t local_buffer_a4;
  int32_t local_buffer_ac;
  *(uint64_t *)(in_R11 + 0x10) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x20) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R13;
  uVar3 = *(uint *)(param_1 + 1);
  lVar11 = (int64_t)(int)uVar3;
  if (0x1c < param_4 - lVar11) {
    *(uint64_t *)(in_R11 + 8) = unaff_RBX;
    *(uint64_t *)(in_R11 + 0x18) = unaff_RSI;
    *(uint64_t *)(in_R11 + -0x18) = unaff_RDI;
    *(int32_t *)(in_R11 + -0x38) = unaff_XMM6_Da;
    *(int32_t *)(in_R11 + -0x34) = unaff_XMM6_Db;
    *(int32_t *)(in_R11 + -0x30) = unaff_XMM6_Dc;
    *(int32_t *)(in_R11 + -0x2c) = unaff_XMM6_Dd;
    do {
      if (param_3 < 1) break;
      uVar10 = (int)param_4 - 1;
      uVar7 = uVar10 >> 0xb;
      puVar1 = (uint64_t *)
               (*(int64_t *)(*unaff_R14 + 8 + (uint64_t)uVar7 * 8) +
               (uint64_t)(uVar10 + uVar7 * -0x800) * 0x18);
      uVar7 = (int)(((int)param_4 - lVar11) / 2) + uVar3;
      uVar10 = uVar7 >> 0xb;
      puVar8 = (uint64_t *)
               (*(int64_t *)(*param_1 + 8 + (uint64_t)uVar10 * 8) +
               (uint64_t)(uVar7 + uVar10 * -0x800) * 0x18);
      puVar2 = (uint64_t *)
               (*(int64_t *)(*param_1 + 8 + (uint64_t)(uVar3 >> 0xb) * 8) +
               (uint64_t)(uVar3 + (uVar3 >> 0xb) * -0x800) * 0x18);
      cVar6 = Function_c47b5959(puVar2[2],puVar8[2]);
      if (cVar6 == '\0') {
        cVar6 = Function_c47b5959(puVar2[2],puVar1[2]);
        puVar9 = puVar2;
        if (cVar6 == '\0') {
          cVar6 = Function_c47b5959(puVar8[2],puVar1[2]);
          goto LAB_1800eaf28;
        }
      }
      else {
        cVar6 = Function_c47b5959(puVar8[2],puVar1[2]);
        puVar9 = puVar8;
        if (cVar6 == '\0') {
          cVar6 = Function_c47b5959(puVar2[2],puVar1[2]);
          puVar8 = puVar2;
LAB_1800eaf28:
          puVar9 = puVar8;
          if (cVar6 != '\0') {
            puVar9 = puVar1;
          }
        }
      }
      param_22 = *puVar9;
      param_23 = puVar9[1];
      param_24 = puVar9[2];
      param_6._0_4_ = (int32_t)*unaff_R14;
      param_6._4_4_ = *(int32_t *)((int64_t)unaff_R14 + 4);
      param_7._0_4_ = (int32_t)unaff_R14[1];
      param_7._4_4_ = *(int32_t *)((int64_t)unaff_R14 + 0xc);
      param_8._0_4_ = (int32_t)*param_1;
      param_8._4_4_ = *(int32_t *)((int64_t)param_1 + 4);
      param_9._0_4_ = (int32_t)param_1[1];
      param_9._4_4_ = *(int32_t *)((int64_t)param_1 + 0xc);
      GenericFunction_1800ec740(&param_10,&param_8,&param_6,&param_22);
      lVar5 = param_11;
      lVar4 = param_10;
      param_12._0_4_ = (int32_t)*unaff_R14;
      param_12._4_4_ = *(int32_t *)((int64_t)unaff_R14 + 4);
      param_13._0_4_ = (int32_t)unaff_R14[1];
      param_13._4_4_ = *(int32_t *)((int64_t)unaff_R14 + 0xc);
      param_3 = param_3 + -1;
      param_14 = param_10;
      param_15 = param_11;
      GenericFunction_1800eae10(&param_14,&param_12,param_3,&SUB_1800d4090);
      *unaff_R14 = lVar4;
      unaff_R14[1] = lVar5;
      param_4 = (int64_t)(int)unaff_R14[1];
    } while (0x1c < param_4 - lVar11);
  }
  if (param_3 == 0) {
    param_16 = *unaff_R14;
    param_17 = unaff_R14[1];
    param_20 = (int32_t)*param_1;
    local_buffer_a4 = *(int32_t *)((int64_t)param_1 + 4);
    param_21 = (int32_t)param_1[1];
    local_buffer_ac = *(int32_t *)((int64_t)param_1 + 0xc);
    param_18 = param_16;
    param_19 = param_17;
    GenericFunction_1800ebb40(&param_20,&param_18,&param_16);
  }
  return;
}
// 函数: void GenericFunction_1800eae4b(void)
void GenericFunction_1800eae4b(void)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  uint uVar6;
  uint64_t uVar7;
  uint64_t unaff_RBX;
  uint64_t *puVar8;
  uint64_t *puVar9;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint uVar10;
  int64_t in_R9;
  int64_t in_R11;
  uint64_t unaff_R13;
  int64_t *unaff_R14;
  int64_t *unaff_R15;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t local_buffer_30;
  int32_t local_buffer_34;
  int32_t local_buffer_38;
  int32_t local_buffer_3c;
  int32_t local_buffer_40;
  int32_t local_buffer_44;
  int32_t local_buffer_48;
  int32_t local_buffer_4c;
  int64_t local_buffer_50;
  int64_t local_var_58;
  int32_t local_buffer_60;
  int32_t local_buffer_64;
  int32_t local_buffer_68;
  int32_t local_buffer_6c;
  int64_t local_var_70;
  int64_t local_var_78;
  int64_t local_var_80;
  int64_t local_var_88;
  int64_t local_var_90;
  int64_t local_var_98;
  int32_t local_var_a0;
  int32_t local_buffer_a4;
  int32_t local_var_a8;
  int32_t local_buffer_ac;
  uint64_t local_buffer_b0;
  uint64_t local_buffer_b8;
  uint64_t local_buffer_c0;
  *(uint64_t *)(in_R11 + 8) = unaff_RBX;
  *(uint64_t *)(in_R11 + 0x18) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RDI;
  *(int32_t *)(in_R11 + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x2c) = unaff_XMM6_Dd;
  do {
    if (unaff_RBP < 1) break;
    uVar10 = (int)in_R9 - 1;
    uVar6 = uVar10 >> 0xb;
    puVar1 = (uint64_t *)
             (*(int64_t *)(*unaff_R14 + 8 + (uint64_t)uVar6 * 8) +
             (uint64_t)(uVar10 + uVar6 * -0x800) * 0x18);
    uVar6 = (int)((int64_t)((int64_t)(int)in_R9 - unaff_R13) / 2) + (int)unaff_R13;
    uVar10 = uVar6 >> 0xb;
    puVar8 = (uint64_t *)
             (*(int64_t *)(*unaff_R15 + 8 + (uint64_t)uVar10 * 8) +
             (uint64_t)(uVar6 + uVar10 * -0x800) * 0x18);
    uVar7 = unaff_R13 >> 0xb & 0x1fffff;
    puVar2 = (uint64_t *)
             (*(int64_t *)(*unaff_R15 + 8 + uVar7 * 8) +
             (uint64_t)(uint)((int)unaff_R13 + (int)uVar7 * -0x800) * 0x18);
    cVar5 = Function_c47b5959(puVar2[2],puVar8[2]);
    if (cVar5 == '\0') {
      cVar5 = Function_c47b5959(puVar2[2],puVar1[2]);
      puVar9 = puVar2;
      if (cVar5 == '\0') {
        cVar5 = Function_c47b5959(puVar8[2],puVar1[2]);
        goto LAB_1800eaf28;
      }
    }
    else {
      cVar5 = Function_c47b5959(puVar8[2],puVar1[2]);
      puVar9 = puVar8;
      if (cVar5 == '\0') {
        cVar5 = Function_c47b5959(puVar2[2],puVar1[2]);
        puVar8 = puVar2;
LAB_1800eaf28:
        puVar9 = puVar8;
        if (cVar5 != '\0') {
          puVar9 = puVar1;
        }
      }
    }
    local_buffer_b0 = *puVar9;
    local_buffer_b8 = puVar9[1];
    local_buffer_c0 = puVar9[2];
    local_buffer_30 = (int32_t)*unaff_R14;
    local_buffer_34 = *(int32_t *)((int64_t)unaff_R14 + 4);
    local_buffer_38 = (int32_t)unaff_R14[1];
    local_buffer_3c = *(int32_t *)((int64_t)unaff_R14 + 0xc);
    local_buffer_40 = (int32_t)*unaff_R15;
    local_buffer_44 = *(int32_t *)((int64_t)unaff_R15 + 4);
    local_buffer_48 = (int32_t)unaff_R15[1];
    local_buffer_4c = *(int32_t *)((int64_t)unaff_R15 + 0xc);
    GenericFunction_1800ec740(&local_buffer_00000050,&local_buffer_00000040,&local_buffer_00000030,&local_buffer_000000b0);
    lVar4 = local_var_58;
    lVar3 = local_buffer_50;
    local_buffer_60 = (int32_t)*unaff_R14;
    local_buffer_64 = *(int32_t *)((int64_t)unaff_R14 + 4);
    local_buffer_68 = (int32_t)unaff_R14[1];
    local_buffer_6c = *(int32_t *)((int64_t)unaff_R14 + 0xc);
    unaff_RBP = unaff_RBP + -1;
    local_var_70 = local_buffer_50;
    local_var_78 = local_var_58;
    GenericFunction_1800eae10(&local_buffer_00000070,&local_buffer_00000060,unaff_RBP,&SUB_1800d4090);
    *unaff_R14 = lVar3;
    unaff_R14[1] = lVar4;
    in_R9 = (int64_t)(int)unaff_R14[1];
  } while (0x1c < (int64_t)(in_R9 - unaff_R13));
  if (unaff_RBP == 0) {
    local_var_80 = *unaff_R14;
    local_var_88 = unaff_R14[1];
    local_var_a0 = (int32_t)*unaff_R15;
    local_buffer_a4 = *(int32_t *)((int64_t)unaff_R15 + 4);
    local_var_a8 = (int32_t)unaff_R15[1];
    local_buffer_ac = *(int32_t *)((int64_t)unaff_R15 + 0xc);
    local_var_90 = local_var_80;
    local_var_98 = local_var_88;
    GenericFunction_1800ebb40(&local_buffer_000000a0,&local_buffer_00000090,&local_buffer_00000080);
  }
  return;
}
// 函数: void GenericFunction_1800eafdd(void)
void GenericFunction_1800eafdd(void)
{
  int64_t unaff_RBP;
  uint64_t *unaff_R14;
  int32_t *unaff_R15;
  uint64_t local_buffer_80;
  uint64_t local_buffer_88;
  uint64_t local_buffer_90;
  uint64_t local_buffer_98;
  int32_t local_buffer_a0;
  int32_t local_buffer_a4;
  int32_t local_buffer_a8;
  int32_t local_buffer_ac;
  if (unaff_RBP == 0) {
    local_buffer_80 = *unaff_R14;
    local_buffer_88 = unaff_R14[1];
    local_buffer_a0 = *unaff_R15;
    local_buffer_a4 = unaff_R15[1];
    local_buffer_a8 = unaff_R15[2];
    local_buffer_ac = unaff_R15[3];
    local_buffer_90 = local_buffer_80;
    local_buffer_98 = local_buffer_88;
    GenericFunction_1800ebb40(&local_buffer_000000a0,&local_buffer_00000090,&local_buffer_00000080);
  }
  return;
}
// 函数: void GenericFunction_1800eaffa(void)
void GenericFunction_1800eaffa(void)
{
  uint64_t *unaff_R14;
  int32_t *unaff_R15;
  uint64_t local_buffer_80;
  uint64_t local_buffer_88;
  uint64_t local_buffer_90;
  uint64_t local_buffer_98;
  int32_t local_buffer_a0;
  int32_t local_buffer_a4;
  int32_t local_buffer_a8;
  int32_t local_buffer_ac;
  local_buffer_80 = *unaff_R14;
  local_buffer_88 = unaff_R14[1];
  local_buffer_a0 = *unaff_R15;
  local_buffer_a4 = unaff_R15[1];
  local_buffer_a8 = unaff_R15[2];
  local_buffer_ac = unaff_R15[3];
  local_buffer_90 = local_buffer_80;
  local_buffer_98 = local_buffer_88;
  GenericFunction_1800ebb40(&local_buffer_000000a0,&local_buffer_00000090,&local_buffer_00000080);
  return;
}
// 函数: void GenericFunction_1800eb050(int64_t *param_1,int64_t *param_2,int64_t param_3)
void GenericFunction_1800eb050(int64_t *param_1,int64_t *param_2,int64_t param_3)
{
  int32_t *puVar1;
  int iVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  char cVar11;
  uint64_t uVar12;
  uint uVar13;
  uint64_t *puVar14;
  uint64_t *puVar15;
  uint64_t *puVar16;
  uint64_t *puVar17;
  uint uVar18;
  int64_t lVar19;
  int64_t lVar20;
  uint local_var_c0;
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  int64_t lStack_a8;
  int64_t lStack_a0;
  int64_t lStack_98;
  int64_t lStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  int64_t lStack_78;
  int64_t lStack_70;
  int32_t local_var_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_5c;
  iVar2 = (int)param_1[1];
  lVar20 = (int64_t)(int)param_2[1];
  lVar19 = lVar20 - iVar2;
  do {
    if ((lVar19 < 0x1d) || (param_3 < 1)) {
      if (param_3 == 0) {
        lStack_88 = *param_2;
        lStack_80 = param_2[1];
        local_var_68 = (int32_t)*param_1;
        local_var_64 = *(int32_t *)((int64_t)param_1 + 4);
        local_var_60 = (int32_t)param_1[1];
        local_var_5c = *(int32_t *)((int64_t)param_1 + 0xc);
        lStack_78 = lStack_88;
        lStack_70 = lStack_80;
        GenericFunction_1800ebe90(&local_var_68,&lStack_78,&lStack_88);
      }
      return;
    }
    uVar18 = (int)lVar20 - 1;
    uVar13 = uVar18 >> 0xb;
    puVar17 = (uint64_t *)
              (*(int64_t *)(*param_2 + 8 + (uint64_t)uVar13 * 8) +
              (uint64_t)(uVar18 + uVar13 * -0x800) * 0x10);
    uVar13 = (int)(((int64_t)(int)lVar20 - (int64_t)iVar2) / 2) + iVar2;
    uVar18 = uVar13 >> 0xb;
    puVar14 = (uint64_t *)
              (*(int64_t *)(*param_1 + 8 + (uint64_t)uVar18 * 8) +
              (uint64_t)(uVar13 + uVar18 * -0x800) * 0x10);
    uVar12 = (uint64_t)(int64_t)iVar2 >> 0xb & 0x1fffff;
    puVar16 = (uint64_t *)
              (*(int64_t *)(*param_1 + 8 + uVar12 * 8) +
              (uint64_t)(uint)(iVar2 + (int)uVar12 * -0x800) * 0x10);
    cVar11 = Function_e0ba81c1(puVar16,puVar14);
    if (cVar11 == '\0') {
      cVar11 = Function_e0ba81c1(puVar16,puVar17);
      puVar15 = puVar16;
      if (cVar11 == '\0') {
        cVar11 = Function_e0ba81c1(puVar14,puVar17);
        goto LAB_1800eb177;
      }
    }
    else {
      cVar11 = Function_e0ba81c1(puVar14,puVar17);
      puVar15 = puVar14;
      if (cVar11 == '\0') {
        cVar11 = Function_e0ba81c1(puVar16,puVar17);
        puVar14 = puVar16;
LAB_1800eb177:
        puVar15 = puVar14;
        if (cVar11 != '\0') {
          puVar15 = puVar17;
        }
      }
    }
    local_var_b8 = *puVar15;
    local_var_b0 = puVar15[1];
    lVar20 = *param_2;
    lStack_a0 = param_2[1];
    lVar10 = *param_1;
    lVar19 = *param_1;
    local_var_c0 = *(uint *)(param_1 + 1);
    uVar4 = *(int32_t *)((int64_t)param_1 + 0xc);
    uVar13 = (uint)lStack_a0;
    lStack_a8 = lVar20;
    while( true ) {
      while( true ) {
        uVar18 = local_var_c0 >> 0xb;
        cVar11 = Function_e0ba81c1(*(int64_t *)(lVar19 + 8 + (uint64_t)uVar18 * 8) +
                                     (uint64_t)(local_var_c0 + uVar18 * -0x800) * 0x10,&local_var_b8);
        if (cVar11 == '\0') break;
        local_var_c0 = local_var_c0 + 1;
      }
      uVar13 = uVar13 - 1;
      cVar11 = Function_e0ba81c1(&local_var_b8,
                                   (uint64_t)(uVar13 + (uVar13 >> 0xb) * -0x800) * 0x10 +
                                   *(int64_t *)(lVar20 + 8 + (uint64_t)(uVar13 >> 0xb) * 8));
      while (cVar11 != '\0') {
        uVar13 = uVar13 - 1;
        cVar11 = Function_e0ba81c1(&local_var_b8,
                                     (uint64_t)(uVar13 + (uVar13 >> 0xb) * -0x800) * 0x10 +
                                     *(int64_t *)(lVar20 + 8 + (uint64_t)(uVar13 >> 0xb) * 8));
      }
      if ((int)uVar13 <= (int)local_var_c0) break;
      uVar12 = (uint64_t)(local_var_c0 + uVar18 * -0x800);
      puVar16 = (uint64_t *)
                ((uint64_t)(uVar13 + (uVar13 >> 0xb) * -0x800) * 0x10 +
                *(int64_t *)(lVar20 + 8 + (uint64_t)(uVar13 >> 0xb) * 8));
      lVar3 = *(int64_t *)(lVar19 + 8 + (uint64_t)uVar18 * 8);
      local_var_c0 = local_var_c0 + 1;
      uVar5 = *(int32_t *)((int64_t)puVar16 + 4);
      uVar6 = *(int32_t *)(puVar16 + 1);
      uVar7 = *(int32_t *)((int64_t)puVar16 + 0xc);
      puVar14 = (uint64_t *)(lVar3 + uVar12 * 0x10);
      uVar8 = *puVar14;
      uVar9 = puVar14[1];
      puVar1 = (int32_t *)(lVar3 + uVar12 * 0x10);
      *puVar1 = *(int32_t *)puVar16;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      *puVar16 = uVar8;
      puVar16[1] = uVar9;
    }
    lVar20 = CONCAT44(uVar4,local_var_c0);
    param_3 = param_3 + -1;
    lStack_a8 = *param_2;
    lStack_a0 = param_2[1];
    lStack_98 = lVar10;
    lStack_90 = lVar20;
    GenericFunction_1800eb050(&lStack_98,&lStack_a8,param_3,&SUB_1800d40c0);
    *param_2 = lVar10;
    param_2[1] = lVar20;
    lVar20 = (int64_t)(int)param_2[1];
    lVar19 = lVar20 - iVar2;
  } while( true );
}
// 函数: void GenericFunction_1800eb07f(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4,
void GenericFunction_1800eb07f(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,int64_t param_8,
                  int64_t param_9,int64_t param_10,int64_t param_11,int64_t param_12,
                  int64_t param_13,int64_t param_14,int64_t param_15,int32_t param_16,
                  int32_t param_17)
{
  int32_t *puVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int64_t lVar11;
  char cVar12;
  int64_t in_RAX;
  uint64_t uVar13;
  uint uVar14;
  uint64_t unaff_RBX;
  uint64_t *puVar15;
  uint64_t *puVar16;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t *puVar17;
  uint64_t unaff_RDI;
  uint64_t *puVar18;
  uint uVar19;
  int64_t in_R10;
  int iVar20;
  uint64_t in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  int64_t *unaff_R14;
  int64_t *unaff_R15;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t local_buffer_84;
  int32_t local_buffer_8c;
  int64_t *local_var_f0;
  int64_t *local_var_f8;
  int64_t local_var_100;
  int iStack0000000000000108;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RBX;
  iStack0000000000000108 = (int)in_R11;
  if (0x1c < (int64_t)(param_4 - in_R11)) {
    *(uint64_t *)(in_RAX + -0x20) = unaff_RBP;
    *(uint64_t *)(in_RAX + -0x28) = unaff_RSI;
    *(uint64_t *)(in_RAX + -0x30) = unaff_RDI;
    *(uint64_t *)(in_RAX + -0x38) = unaff_R12;
    *(uint64_t *)(in_RAX + -0x40) = unaff_R13;
    *(int32_t *)(in_RAX + -0x58) = unaff_XMM6_Da;
    *(int32_t *)(in_RAX + -0x54) = unaff_XMM6_Db;
    *(int32_t *)(in_RAX + -0x50) = unaff_XMM6_Dc;
    *(int32_t *)(in_RAX + -0x4c) = unaff_XMM6_Dd;
    do {
      if (param_3 < 1) break;
      uVar19 = (int)in_R10 - 1;
      uVar14 = uVar19 >> 0xb;
      iVar20 = (int)in_R11;
      puVar18 = (uint64_t *)
                (*(int64_t *)(*unaff_R14 + 8 + (uint64_t)uVar14 * 8) +
                (uint64_t)(uVar19 + uVar14 * -0x800) * 0x10);
      uVar14 = (int)(((int64_t)(int)in_R10 - (int64_t)iVar20) / 2) + iVar20;
      uVar19 = uVar14 >> 0xb;
      puVar15 = (uint64_t *)
                (*(int64_t *)(*unaff_R15 + 8 + (uint64_t)uVar19 * 8) +
                (uint64_t)(uVar14 + uVar19 * -0x800) * 0x10);
      uVar13 = in_R11 >> 0xb & 0x1fffff;
      puVar17 = (uint64_t *)
                (*(int64_t *)(*unaff_R15 + 8 + uVar13 * 8) +
                (uint64_t)(uint)(iVar20 + (int)uVar13 * -0x800) * 0x10);
      cVar12 = Function_e0ba81c1(puVar17,puVar15);
      if (cVar12 == '\0') {
        cVar12 = Function_e0ba81c1(puVar17,puVar18);
        puVar16 = puVar17;
        if (cVar12 == '\0') {
          cVar12 = Function_e0ba81c1(puVar15,puVar18);
          goto LAB_1800eb177;
        }
      }
      else {
        cVar12 = Function_e0ba81c1(puVar15,puVar18);
        puVar16 = puVar15;
        if (cVar12 == '\0') {
          cVar12 = Function_e0ba81c1(puVar17,puVar18);
          puVar15 = puVar17;
LAB_1800eb177:
          puVar16 = puVar15;
          if (cVar12 != '\0') {
            puVar16 = puVar18;
          }
        }
      }
      param_6 = *puVar16;
      param_7 = puVar16[1];
      lVar7 = *unaff_R14;
      param_9 = unaff_R14[1];
      lVar11 = *unaff_R15;
      lVar10 = *unaff_R15;
      param_5._0_4_ = *(uint *)(unaff_R15 + 1);
      uVar3 = *(int32_t *)((int64_t)unaff_R15 + 0xc);
      uVar14 = (uint)param_9;
      param_8 = lVar7;
      while( true ) {
        while( true ) {
          uVar19 = (uint)param_5 >> 0xb;
          cVar12 = Function_e0ba81c1(*(int64_t *)(lVar10 + 8 + (uint64_t)uVar19 * 8) +
                                       (uint64_t)((uint)param_5 + uVar19 * -0x800) * 0x10,&param_6)
          ;
          if (cVar12 == '\0') break;
          param_5._0_4_ = (uint)param_5 + 1;
        }
        uVar14 = uVar14 - 1;
        cVar12 = Function_e0ba81c1(&param_6,(uint64_t)(uVar14 + (uVar14 >> 0xb) * -0x800) * 0x10
                                              + *(int64_t *)
                                                 (lVar7 + 8 + (uint64_t)(uVar14 >> 0xb) * 8));
        unaff_R14 = local_var_f8;
        while (local_var_f8 = unaff_R14, cVar12 != '\0') {
          uVar14 = uVar14 - 1;
          cVar12 = Function_e0ba81c1(&param_6,(uint64_t)(uVar14 + (uVar14 >> 0xb) * -0x800) *
                                                0x10 + *(int64_t *)
                                                        (lVar7 + 8 + (uint64_t)(uVar14 >> 0xb) * 8)
                                      );
          unaff_R14 = local_var_f8;
        }
        if ((int)uVar14 <= (int)(uint)param_5) break;
        uVar13 = (uint64_t)((uint)param_5 + uVar19 * -0x800);
        puVar17 = (uint64_t *)
                  ((uint64_t)(uVar14 + (uVar14 >> 0xb) * -0x800) * 0x10 +
                  *(int64_t *)(lVar7 + 8 + (uint64_t)(uVar14 >> 0xb) * 8));
        lVar2 = *(int64_t *)(lVar10 + 8 + (uint64_t)uVar19 * 8);
        param_5._0_4_ = (uint)param_5 + 1;
        uVar4 = *(int32_t *)((int64_t)puVar17 + 4);
        uVar5 = *(int32_t *)(puVar17 + 1);
        uVar6 = *(int32_t *)((int64_t)puVar17 + 0xc);
        puVar15 = (uint64_t *)(lVar2 + uVar13 * 0x10);
        uVar8 = *puVar15;
        uVar9 = puVar15[1];
        puVar1 = (int32_t *)(lVar2 + uVar13 * 0x10);
        *puVar1 = *(int32_t *)puVar17;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        *puVar17 = uVar8;
        puVar17[1] = uVar9;
      }
      lVar7 = CONCAT44(uVar3,(uint)param_5);
      param_3 = local_var_100 + -1;
      param_8 = *unaff_R14;
      param_9 = unaff_R14[1];
      param_10 = lVar11;
      param_11 = lVar7;
      local_var_100 = param_3;
      GenericFunction_1800eb050(&param_10,&param_8,param_3,&SUB_1800d40c0);
      in_R11 = (uint64_t)iStack0000000000000108;
      *unaff_R14 = lVar11;
      unaff_R14[1] = lVar7;
      in_R10 = (int64_t)(int)unaff_R14[1];
      unaff_R15 = local_var_f0;
    } while (0x1c < (int64_t)(in_R10 - in_R11));
  }
  if (param_3 == 0) {
    param_12 = *unaff_R14;
    param_13 = unaff_R14[1];
    param_16 = (int32_t)*unaff_R15;
    local_buffer_84 = *(int32_t *)((int64_t)unaff_R15 + 4);
    param_17 = (int32_t)unaff_R15[1];
    local_buffer_8c = *(int32_t *)((int64_t)unaff_R15 + 0xc);
    param_14 = param_12;
    param_15 = param_13;
    GenericFunction_1800ebe90(&param_16,&param_14,&param_12);
  }
  return;
}