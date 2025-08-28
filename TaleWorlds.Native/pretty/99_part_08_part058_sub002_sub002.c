/* 函数别名定义: SystemOutputManager */
#define SystemOutputManager SystemOutputManager
#include "SystemOutputManager0_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_08_part058_sub002_sub002.c - 1 个函数
// 函数: void NetworkSystem_b0bb4(void)
void NetworkSystem_b0bb4(void)
{
  uint64_t local_buffer_a0;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_a0 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkSystem_b0d00(uint64_t *param_1,int32_t param_2,int64_t param_3,char param_4,
                       int8_t param_5)
{
  int64_t lVar1;
  uint64_t uVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int iVar6;
  int32_t uVar7;
  float fVar8;
  int32_t uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  uint64_t local_var_c8;
  int32_t local_var_c0;
  int32_t local_var_b8;
  int iStack_b4;
  uint64_t local_var_b0;
  int32_t local_var_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  int32_t local_var_98;
  int32_t local_var_94;
  int8_t local_var_90;
  int8_t local_var_8f;
  int16_t local_var_8e;
  int8_t local_var_8c;
  lVar5 = param_1[0x17];
  if (system_status_flag == 1) {
    fVar12 = (float)(*(double *)(lVar5 + 0x8f0) * 0.001);
  }
  else if ((*(int64_t **)(lVar5 + 0x8e8) == (int64_t *)0x0) ||
          (lVar1 = **(int64_t **)(lVar5 + 0x8e8), lVar1 == 0)) {
    fVar12 = 0.0;
  }
  else {
    fVar12 = (float)(*(double *)(lVar1 + 0x58e8) * 0.001);
  }
  fVar14 = 0.0;
  fVar13 = -0.2;
  fVar10 = 1.0;
  *(char *)((int64_t)param_1 + 0xd4) = param_4;
  if (0.15 <= fVar12) {
    fVar12 = 0.15;
  }
  if (param_4 != '\0') {
    if (param_3 == 0) {
      iVar6 = -1;
LAB_1805b0e08:
      if (iVar6 != -1) {
        fVar10 = 1.0;
        lVar1 = *(int64_t *)(*(int64_t *)(lVar5 + 0x8f8) + 0x9e8);
        if (lVar1 != 0) {
          fVar10 = (float)*(int *)((int64_t)*(int *)(lVar1 + 0xf0) * 0xa0 + 0x6c +
                                  *(int64_t *)(lVar1 + 0xd0)) * 0.01;
        }
        fVar10 = fVar10 * *(float *)(lVar5 + 0x3a8) * system_system_memory;
        if (*(char *)(param_3 + 5) != '\0') {
          fVar10 = fVar10 * system_system_memory;
        }
        if (*(int *)(param_3 + 0x104) == 1) {
          fVar11 = 0.0;
        }
        else if (lVar1 == 0) {
          fVar11 = 1.0;
        }
        else {
          fVar11 = *(float *)((int64_t)*(int *)(lVar1 + 0xf0) * 0xa0 + 0x8c +
                             *(int64_t *)(lVar1 + 0xd0));
        }
        iVar3 = SystemCacheManager(&system_data_5f30,*(int32_t *)(*(int64_t *)(lVar5 + 0x590) + 0xac),
                              iVar6);
        iVar3 = *(int *)(system_system_memory + (int64_t)iVar3 * 4);
        if (iVar3 == -1) {
          lVar5 = 0;
        }
        else {
          lVar5 = *(int64_t *)(system_system_memory + (int64_t)iVar3 * 8);
        }
        fVar8 = *(float *)(lVar5 + 0x188);
        if (*(int *)(lVar5 + 0x1ec) != -1) {
          fVar14 = 0.05;
          if ((0.05 <= fVar11) && (fVar14 = fVar11, 0.95 <= fVar11)) {
            fVar14 = 0.95;
          }
          fVar14 = 1.0 - fVar14;
          iVar3 = SystemCacheManager(&system_data_5f30,
                                *(int32_t *)(*(int64_t *)(param_1[0x17] + 0x590) + 0xac));
          iVar3 = *(int *)(system_system_memory + (int64_t)iVar3 * 4);
          if (iVar3 == -1) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(int64_t *)(system_system_memory + (int64_t)iVar3 * 8);
          }
          fVar8 = fVar14 * *(float *)(lVar5 + 0x188) + (1.0 - fVar14) * fVar8;
        }
        if (((0.0 < fVar12) && (*(int *)(param_1[0x17] + 0x570) == 2)) && (system_status_flag == 1)) {
          fVar10 = fVar10 * (fVar8 / (fVar8 + fVar12));
        }
        goto LAB_1805b10a4;
      }
    }
    else {
      iVar6 = *(int *)(param_1 + 0x19);
      if (iVar6 == 0) {
        iVar6 = *(int *)(param_3 + 0x20);
        goto LAB_1805b0e08;
      }
      if (iVar6 == 1) {
        iVar6 = *(int *)(param_3 + 0x24);
        goto LAB_1805b0e08;
      }
      if (iVar6 == 2) {
        iVar6 = *(int *)(param_3 + 0x28);
        goto LAB_1805b0e08;
      }
      if (iVar6 == 3) {
        iVar6 = *(int *)(param_3 + 0x2c);
        goto LAB_1805b0e08;
      }
    }
    *(int8_t *)((int64_t)param_1 + 0xd4) = 0;
  }
  if (param_3 == 0) {
    iVar6 = -1;
  }
  else {
    iVar6 = *(int *)(param_3 + 0x1c);
  }
  lVar1 = *(int64_t *)(*(int64_t *)(lVar5 + 0x8f8) + 0x9e8);
  if (lVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(int32_t *)(lVar1 + 0x4c);
  }
  uVar7 = Function_1698e45f(lVar5,*(int32_t *)(param_3 + 0x104));
  local_var_e8 = *param_1;
  local_var_e0 = param_1[1];
  local_var_c0 = *(int32_t *)(param_1 + 5);
  local_var_d8 = param_1[2];
  local_var_d0 = param_1[3];
  local_var_c8 = param_1[4];
  fVar8 = (float)NetworkSystem_b2510(0x3e947ae1,uVar7,system_system_memory,&local_var_e8,param_3 + 0x54,uVar9,
                               0x3e947ae1);
  fVar13 = fVar8;
  if (((0.0 < fVar12) && (*(int *)(param_1[0x17] + 0x570) == 2)) &&
     ((system_status_flag == 1 && (fVar13 = fVar8 + fVar12, 1.0 <= fVar13)))) {
    fVar13 = 1.0;
  }
LAB_1805b10a4:
  local_var_90 = param_5;
  local_var_8f = *(int8_t *)((int64_t)param_1 + 0xd4);
  local_var_94 = 0x3ecccccd;
  local_var_b0 = 0;
  local_var_a8 = 0;
  local_var_98 = 0xbe4ccccd;
  local_var_8e = 0x100;
  local_var_8c = 0;
  local_var_b8 = param_2;
  iStack_b4 = iVar6;
  fStack_a4 = fVar14;
  fStack_a0 = fVar10;
  fStack_9c = fVar13;
  uVar4 = CoreSystemThreadManager(param_1[0x17],&local_var_b8);
  if ((char)uVar4 == '\0') {
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  else {
    uVar2 = *(uint64_t *)(param_3 + 0x5c);
    *(uint64_t *)((int64_t)param_1 + 0x2c) = *(uint64_t *)(param_3 + 0x54);
    *(uint64_t *)((int64_t)param_1 + 0x34) = uVar2;
    uVar2 = *(uint64_t *)(param_3 + 0x6c);
    *(uint64_t *)((int64_t)param_1 + 0x3c) = *(uint64_t *)(param_3 + 100);
    *(uint64_t *)((int64_t)param_1 + 0x44) = uVar2;
    *(uint64_t *)((int64_t)param_1 + 0x4c) = *(uint64_t *)(param_3 + 0x74);
    *(int32_t *)((int64_t)param_1 + 0x54) = *(int32_t *)(param_3 + 0x7c);
    uVar2 = *(uint64_t *)(param_3 + 0xb4);
    *(uint64_t *)((int64_t)param_1 + 0x84) = *(uint64_t *)(param_3 + 0xac);
    *(uint64_t *)((int64_t)param_1 + 0x8c) = uVar2;
    uVar2 = *(uint64_t *)(param_3 + 0xc4);
    *(uint64_t *)((int64_t)param_1 + 0x94) = *(uint64_t *)(param_3 + 0xbc);
    *(uint64_t *)((int64_t)param_1 + 0x9c) = uVar2;
    *(uint64_t *)((int64_t)param_1 + 0xa4) = *(uint64_t *)(param_3 + 0xcc);
    uVar9 = *(int32_t *)(param_3 + 0xd4);
    *(int32_t *)((int64_t)param_1 + 0xac) = uVar9;
    uVar4 = CONCAT71((uint7)(uint3)((uint)uVar9 >> 8),1);
    *(float *)(param_1 + 0x16) = fVar8;
    *(int32_t *)((int64_t)param_1 + 0xc4) = 1;
  }
  return uVar4;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkSystem_b0d23(uint64_t param_1,int32_t param_2,int64_t param_3,char param_4)
{
  uint64_t uVar1;
  int iVar2;
  int64_t in_RAX;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t *unaff_RBX;
  uint64_t unaff_RBP;
  int iVar5;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  bool in_ZF;
  int32_t uVar6;
  float fVar7;
  float fVar8;
  uint64_t unaff_XMM6_Qa;
  uint64_t unaff_XMM6_Qb;
  int32_t unaff_XMM8_Da;
  float fVar9;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  float fVar10;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  float fVar11;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  int32_t unaff_XMM13_Da;
  float fVar12;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  uint64_t local_var_40;
  uint64_t local_var_48;
  uint64_t local_buffer_50;
  uint64_t local_buffer_58;
  uint64_t local_buffer_60;
  int32_t local_buffer_68;
  int32_t local_buffer_70;
  int iStack0000000000000074;
  uint64_t local_buffer_78;
  int32_t local_buffer_80;
  float fStack0000000000000084;
  float local_buffer_88;
  float fStack000000000000008c;
  int32_t local_buffer_90;
  int32_t local_buffer_94;
  int8_t local_buffer_98;
  int8_t local_buffer_99;
  int16_t local_buffer_9a;
  int8_t local_buffer_9c;
  int32_t local_buffer_f0;
  int32_t local_buffer_f8;
  int8_t local_var_150;
  *(uint64_t *)(in_RAX + 8) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x18) = unaff_XMM6_Qa;
  *(uint64_t *)(in_RAX + -0x10) = unaff_XMM6_Qb;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM9_Dd;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM10_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM10_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM10_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM10_Dd;
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM11_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM11_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM11_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM11_Dd;
  *(int32_t *)(in_RAX + -0x78) = unaff_XMM12_Da;
  *(int32_t *)(in_RAX + -0x74) = unaff_XMM12_Db;
  *(int32_t *)(in_RAX + -0x70) = unaff_XMM12_Dc;
  *(int32_t *)(in_RAX + -0x6c) = unaff_XMM12_Dd;
  *(int32_t *)(in_RAX + -0x88) = unaff_XMM13_Da;
  *(int32_t *)(in_RAX + -0x84) = unaff_XMM13_Db;
  *(int32_t *)(in_RAX + -0x80) = unaff_XMM13_Dc;
  *(int32_t *)(in_RAX + -0x7c) = unaff_XMM13_Dd;
  if (in_ZF) {
    fVar10 = (float)(*(double *)(param_3 + 0x8f0) * 0.001);
  }
  else if ((*(int64_t **)(param_3 + 0x8e8) == (int64_t *)0x0) ||
          (lVar4 = **(int64_t **)(param_3 + 0x8e8), lVar4 == 0)) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = (float)(*(double *)(lVar4 + 0x58e8) * 0.001);
  }
  fVar12 = 0.0;
  fVar11 = -0.2;
  fVar8 = 1.0;
  *(char *)((int64_t)unaff_RBX + 0xd4) = param_4;
  if (0.15 <= fVar10) {
    fVar10 = 0.15;
  }
  if (param_4 != '\0') {
    if (unaff_RDI == 0) {
      iVar5 = -1;
LAB_1805b0e08:
      if (iVar5 != -1) {
        fVar8 = 1.0;
        lVar4 = *(int64_t *)(*(int64_t *)(param_3 + 0x8f8) + 0x9e8);
        if (lVar4 != 0) {
          fVar8 = (float)*(int *)((int64_t)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x6c +
                                 *(int64_t *)(lVar4 + 0xd0)) * 0.01;
        }
        fVar8 = fVar8 * *(float *)(param_3 + 0x3a8) * system_system_memory;
        if (*(char *)(unaff_RDI + 5) != '\0') {
          fVar8 = fVar8 * system_system_memory;
        }
        if (*(int *)(unaff_RDI + 0x104) == 1) {
          fVar9 = 0.0;
        }
        else if (lVar4 == 0) {
          fVar9 = 1.0;
        }
        else {
          fVar9 = *(float *)((int64_t)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x8c +
                            *(int64_t *)(lVar4 + 0xd0));
        }
        local_buffer_f0 = unaff_XMM8_Da;
        local_buffer_f8 = unaff_XMM8_Dc;
        iVar2 = SystemCacheManager(&system_data_5f30,*(int32_t *)(*(int64_t *)(param_3 + 0x590) + 0xac),
                              iVar5);
        iVar2 = *(int *)(system_system_memory + (int64_t)iVar2 * 4);
        if (iVar2 == -1) {
          lVar4 = 0;
        }
        else {
          lVar4 = *(int64_t *)(system_system_memory + (int64_t)iVar2 * 8);
        }
        fVar7 = *(float *)(lVar4 + 0x188);
        if (*(int *)(lVar4 + 0x1ec) != -1) {
          fVar12 = 0.05;
          if ((0.05 <= fVar9) && (fVar12 = fVar9, 0.95 <= fVar9)) {
            fVar12 = 0.95;
          }
          fVar12 = 1.0 - fVar12;
          iVar2 = SystemCacheManager(&system_data_5f30,
                                *(int32_t *)(*(int64_t *)(unaff_RBX[0x17] + 0x590) + 0xac));
          iVar2 = *(int *)(system_system_memory + (int64_t)iVar2 * 4);
          if (iVar2 == -1) {
            lVar4 = 0;
          }
          else {
            lVar4 = *(int64_t *)(system_system_memory + (int64_t)iVar2 * 8);
          }
          fVar7 = fVar12 * *(float *)(lVar4 + 0x188) + (1.0 - fVar12) * fVar7;
        }
        if (((0.0 < fVar10) && (*(int *)(unaff_RBX[0x17] + 0x570) == 2)) && (system_status_flag == 1)) {
          fVar8 = fVar8 * (fVar7 / (fVar7 + fVar10));
        }
        goto LAB_1805b10a4;
      }
    }
    else {
      iVar5 = *(int *)(unaff_RBX + 0x19);
      if (iVar5 == 0) {
        iVar5 = *(int *)(unaff_RDI + 0x20);
        goto LAB_1805b0e08;
      }
      if (iVar5 == 1) {
        iVar5 = *(int *)(unaff_RDI + 0x24);
        goto LAB_1805b0e08;
      }
      if (iVar5 == 2) {
        iVar5 = *(int *)(unaff_RDI + 0x28);
        goto LAB_1805b0e08;
      }
      if (iVar5 == 3) {
        iVar5 = *(int *)(unaff_RDI + 0x2c);
        goto LAB_1805b0e08;
      }
    }
    *(int8_t *)((int64_t)unaff_RBX + 0xd4) = 0;
  }
  if (unaff_RDI == 0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *(int *)(unaff_RDI + 0x1c);
  }
  uVar6 = Function_1698e45f(param_3,*(int32_t *)(unaff_RDI + 0x104));
  local_var_40 = *unaff_RBX;
  local_var_48 = unaff_RBX[1];
  local_buffer_68 = *(int32_t *)(unaff_RBX + 5);
  local_buffer_50 = unaff_RBX[2];
  local_buffer_58 = unaff_RBX[3];
  local_buffer_60 = unaff_RBX[4];
  fVar7 = (float)NetworkSystem_b2510(0x3e947ae1,uVar6,system_system_memory,&local_buffer_00000040,unaff_RDI + 0x54);
  fVar11 = fVar7;
  if (((0.0 < fVar10) && (*(int *)(unaff_RBX[0x17] + 0x570) == 2)) &&
     ((system_status_flag == 1 && (fVar11 = fVar7 + fVar10, 1.0 <= fVar11)))) {
    fVar11 = 1.0;
  }
LAB_1805b10a4:
  local_buffer_98 = local_var_150;
  local_buffer_99 = *(int8_t *)((int64_t)unaff_RBX + 0xd4);
  local_buffer_94 = 0x3ecccccd;
  local_buffer_78 = 0;
  local_buffer_80 = 0;
  local_buffer_90 = 0xbe4ccccd;
  local_buffer_9a = 0x100;
  local_buffer_9c = 0;
  local_buffer_70 = param_2;
  iStack0000000000000074 = iVar5;
  fStack0000000000000084 = fVar12;
  local_buffer_88 = fVar8;
  fStack000000000000008c = fVar11;
  uVar3 = CoreSystemThreadManager(unaff_RBX[0x17],&local_buffer_00000070);
  if ((char)uVar3 == '\0') {
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    uVar1 = *(uint64_t *)(unaff_RDI + 0x5c);
    *(uint64_t *)((int64_t)unaff_RBX + 0x2c) = *(uint64_t *)(unaff_RDI + 0x54);
    *(uint64_t *)((int64_t)unaff_RBX + 0x34) = uVar1;
    uVar1 = *(uint64_t *)(unaff_RDI + 0x6c);
    *(uint64_t *)((int64_t)unaff_RBX + 0x3c) = *(uint64_t *)(unaff_RDI + 100);
    *(uint64_t *)((int64_t)unaff_RBX + 0x44) = uVar1;
    *(uint64_t *)((int64_t)unaff_RBX + 0x4c) = *(uint64_t *)(unaff_RDI + 0x74);
    *(int32_t *)((int64_t)unaff_RBX + 0x54) = *(int32_t *)(unaff_RDI + 0x7c);
    uVar1 = *(uint64_t *)(unaff_RDI + 0xb4);
    *(uint64_t *)((int64_t)unaff_RBX + 0x84) = *(uint64_t *)(unaff_RDI + 0xac);
    *(uint64_t *)((int64_t)unaff_RBX + 0x8c) = uVar1;
    uVar1 = *(uint64_t *)(unaff_RDI + 0xc4);
    *(uint64_t *)((int64_t)unaff_RBX + 0x94) = *(uint64_t *)(unaff_RDI + 0xbc);
    *(uint64_t *)((int64_t)unaff_RBX + 0x9c) = uVar1;
    *(uint64_t *)((int64_t)unaff_RBX + 0xa4) = *(uint64_t *)(unaff_RDI + 0xcc);
    uVar6 = *(int32_t *)(unaff_RDI + 0xd4);
    *(int32_t *)((int64_t)unaff_RBX + 0xac) = uVar6;
    uVar3 = CONCAT71((uint7)(uint3)((uint)uVar6 >> 8),1);
    *(float *)(unaff_RBX + 0x16) = fVar7;
    *(int32_t *)((int64_t)unaff_RBX + 0xc4) = 1;
  }
  return uVar3;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkSystem_b0e89(uint64_t param_1,int64_t param_2,int64_t param_3)
{
  int32_t uVar1;
  uint64_t uVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t unaff_RBX;
  int32_t unaff_ESI;
  int64_t unaff_RDI;
  bool in_ZF;
  float unaff_XMM6_Da;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  int32_t local_buffer_70;
  uint64_t local_buffer_78;
  int32_t local_buffer_80;
  float fStack0000000000000084;
  float local_buffer_88;
  int32_t local_buffer_90;
  int32_t local_buffer_94;
  int8_t local_buffer_98;
  int8_t local_buffer_99;
  int16_t local_buffer_9a;
  int8_t local_buffer_9c;
  int8_t local_var_150;
  if (in_ZF) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = unaff_XMM9_Da;
    if (param_2 != 0) {
      fVar7 = *(float *)((int64_t)*(int *)(param_2 + 0xf0) * 0xa0 + 0x8c +
                        *(int64_t *)(param_2 + 0xd0));
    }
  }
  iVar3 = SystemCacheManager(&system_data_5f30,*(int32_t *)(*(int64_t *)(param_3 + 0x590) + 0xac),
                        unaff_ESI);
  iVar3 = *(int *)(system_system_memory + (int64_t)iVar3 * 4);
  if (iVar3 == -1) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(int64_t *)(system_system_memory + (int64_t)iVar3 * 8);
  }
  fVar6 = *(float *)(lVar5 + 0x188);
  if (*(int *)(lVar5 + 0x1ec) != -1) {
    fVar8 = 0.05;
    if ((0.05 <= fVar7) && (fVar8 = fVar7, 0.95 <= fVar7)) {
      fVar8 = 0.95;
    }
    unaff_XMM13_Da = unaff_XMM9_Da - fVar8;
    iVar3 = SystemCacheManager(&system_data_5f30,
                          *(int32_t *)
                           (*(int64_t *)(*(int64_t *)(unaff_RBX + 0xb8) + 0x590) + 0xac));
    iVar3 = *(int *)(system_system_memory + (int64_t)iVar3 * 4);
    if (iVar3 == -1) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(int64_t *)(system_system_memory + (int64_t)iVar3 * 8);
    }
    fVar6 = unaff_XMM13_Da * *(float *)(lVar5 + 0x188) + (unaff_XMM9_Da - unaff_XMM13_Da) * fVar6;
  }
  if (((unaff_XMM12_Da < unaff_XMM10_Da) && (*(int *)(*(int64_t *)(unaff_RBX + 0xb8) + 0x570) == 2)
      ) && (system_status_flag == 1)) {
    unaff_XMM6_Da = unaff_XMM6_Da * (fVar6 / (fVar6 + unaff_XMM10_Da));
  }
  local_buffer_98 = local_var_150;
  local_buffer_99 = *(int8_t *)(unaff_RBX + 0xd4);
  local_buffer_94 = 0x3ecccccd;
  local_buffer_78 = 0;
  local_buffer_80 = 0;
  local_buffer_90 = 0xbe4ccccd;
  local_buffer_9a = 0x100;
  local_buffer_9c = 0;
  fStack0000000000000084 = unaff_XMM13_Da;
  local_buffer_88 = unaff_XMM6_Da;
  uVar4 = CoreSystemThreadManager(*(uint64_t *)(unaff_RBX + 0xb8),&local_buffer_00000070);
  if ((char)uVar4 == '\0') {
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  else {
    uVar2 = *(uint64_t *)(unaff_RDI + 0x5c);
    *(uint64_t *)(unaff_RBX + 0x2c) = *(uint64_t *)(unaff_RDI + 0x54);
    *(uint64_t *)(unaff_RBX + 0x34) = uVar2;
    uVar2 = *(uint64_t *)(unaff_RDI + 0x6c);
    *(uint64_t *)(unaff_RBX + 0x3c) = *(uint64_t *)(unaff_RDI + 100);
    *(uint64_t *)(unaff_RBX + 0x44) = uVar2;
    *(uint64_t *)(unaff_RBX + 0x4c) = *(uint64_t *)(unaff_RDI + 0x74);
    *(int32_t *)(unaff_RBX + 0x54) = *(int32_t *)(unaff_RDI + 0x7c);
    uVar2 = *(uint64_t *)(unaff_RDI + 0xb4);
    *(uint64_t *)(unaff_RBX + 0x84) = *(uint64_t *)(unaff_RDI + 0xac);
    *(uint64_t *)(unaff_RBX + 0x8c) = uVar2;
    uVar2 = *(uint64_t *)(unaff_RDI + 0xc4);
    *(uint64_t *)(unaff_RBX + 0x94) = *(uint64_t *)(unaff_RDI + 0xbc);
    *(uint64_t *)(unaff_RBX + 0x9c) = uVar2;
    *(uint64_t *)(unaff_RBX + 0xa4) = *(uint64_t *)(unaff_RDI + 0xcc);
    uVar1 = *(int32_t *)(unaff_RDI + 0xd4);
    *(int32_t *)(unaff_RBX + 0xac) = uVar1;
    uVar4 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
    *(float *)(unaff_RBX + 0xb0) = fVar6;
    *(int32_t *)(unaff_RBX + 0xc4) = 1;
  }
  return uVar4;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkSystem_b0fb3(void)
{
  int32_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM10_Da;
  uint64_t local_buffer_78;
  int32_t local_buffer_80;
  float fStack0000000000000088;
  int32_t local_buffer_90;
  int32_t local_buffer_94;
  int8_t local_buffer_98;
  int8_t local_buffer_99;
  int16_t local_buffer_9a;
  int8_t local_buffer_9c;
  int8_t local_var_150;
  if ((*(int *)(*(int64_t *)(unaff_RBX + 0xb8) + 0x570) == 2) && (system_status_flag == 1)) {
    unaff_XMM6_Da = unaff_XMM6_Da * (unaff_XMM7_Da / (unaff_XMM7_Da + unaff_XMM10_Da));
  }
  local_buffer_98 = local_var_150;
  local_buffer_99 = *(int8_t *)(unaff_RBX + 0xd4);
  local_buffer_94 = 0x3ecccccd;
  local_buffer_78 = 0;
  local_buffer_80 = 0;
  local_buffer_90 = 0xbe4ccccd;
  local_buffer_9a = 0x100;
  local_buffer_9c = 0;
  fStack0000000000000088 = unaff_XMM6_Da;
  uVar3 = CoreSystemThreadManager(*(uint64_t *)(unaff_RBX + 0xb8),&local_buffer_00000070);
  if ((char)uVar3 == '\0') {
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    uVar2 = *(uint64_t *)(unaff_RDI + 0x5c);
    *(uint64_t *)(unaff_RBX + 0x2c) = *(uint64_t *)(unaff_RDI + 0x54);
    *(uint64_t *)(unaff_RBX + 0x34) = uVar2;
    uVar2 = *(uint64_t *)(unaff_RDI + 0x6c);
    *(uint64_t *)(unaff_RBX + 0x3c) = *(uint64_t *)(unaff_RDI + 100);
    *(uint64_t *)(unaff_RBX + 0x44) = uVar2;
    *(uint64_t *)(unaff_RBX + 0x4c) = *(uint64_t *)(unaff_RDI + 0x74);
    *(int32_t *)(unaff_RBX + 0x54) = *(int32_t *)(unaff_RDI + 0x7c);
    uVar2 = *(uint64_t *)(unaff_RDI + 0xb4);
    *(uint64_t *)(unaff_RBX + 0x84) = *(uint64_t *)(unaff_RDI + 0xac);
    *(uint64_t *)(unaff_RBX + 0x8c) = uVar2;
    uVar2 = *(uint64_t *)(unaff_RDI + 0xc4);
    *(uint64_t *)(unaff_RBX + 0x94) = *(uint64_t *)(unaff_RDI + 0xbc);
    *(uint64_t *)(unaff_RBX + 0x9c) = uVar2;
    *(uint64_t *)(unaff_RBX + 0xa4) = *(uint64_t *)(unaff_RDI + 0xcc);
    uVar1 = *(int32_t *)(unaff_RDI + 0xd4);
    *(int32_t *)(unaff_RBX + 0xac) = uVar1;
    uVar3 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
    *(float *)(unaff_RBX + 0xb0) = unaff_XMM7_Da;
    *(int32_t *)(unaff_RBX + 0xc4) = 1;
  }
  return uVar3;
}
uint64_t NetworkSystem_b1182(void)
{
  int32_t uVar1;
  uint64_t uVar2;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  int32_t unaff_XMM7_Da;
  uVar2 = *(uint64_t *)(unaff_RDI + 0x5c);
  *(uint64_t *)(unaff_RBX + 0x2c) = *(uint64_t *)(unaff_RDI + 0x54);
  *(uint64_t *)(unaff_RBX + 0x34) = uVar2;
  uVar2 = *(uint64_t *)(unaff_RDI + 0x6c);
  *(uint64_t *)(unaff_RBX + 0x3c) = *(uint64_t *)(unaff_RDI + 100);
  *(uint64_t *)(unaff_RBX + 0x44) = uVar2;
  *(uint64_t *)(unaff_RBX + 0x4c) = *(uint64_t *)(unaff_RDI + 0x74);
  *(int32_t *)(unaff_RBX + 0x54) = *(int32_t *)(unaff_RDI + 0x7c);
  uVar2 = *(uint64_t *)(unaff_RDI + 0xb4);
  *(uint64_t *)(unaff_RBX + 0x84) = *(uint64_t *)(unaff_RDI + 0xac);
  *(uint64_t *)(unaff_RBX + 0x8c) = uVar2;
  uVar2 = *(uint64_t *)(unaff_RDI + 0xc4);
  *(uint64_t *)(unaff_RBX + 0x94) = *(uint64_t *)(unaff_RDI + 0xbc);
  *(uint64_t *)(unaff_RBX + 0x9c) = uVar2;
  *(uint64_t *)(unaff_RBX + 0xa4) = *(uint64_t *)(unaff_RDI + 0xcc);
  uVar1 = *(int32_t *)(unaff_RDI + 0xd4);
  *(int32_t *)(unaff_RBX + 0xac) = uVar1;
  *(int32_t *)(unaff_RBX + 0xb0) = unaff_XMM7_Da;
  *(int32_t *)(unaff_RBX + 0xc4) = 1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkSystem_b1210(int64_t param_1,int32_t param_2,char param_3,char param_4,
                       int32_t *param_5,uint64_t param_6,int8_t param_7)
{
  float fVar1;
  float fVar2;
  byte bVar3;
  int32_t uVar4;
  int64_t lVar5;
  int64_t *plVar6;
  char cVar7;
  int32_t uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int64_t lVar12;
  int *piVar13;
  uint64_t uVar14;
  int32_t uVar15;
  int64_t lVar16;
  uint64_t uVar17;
  int64_t lVar18;
  uint64_t *puVar19;
  float fVar20;
  int32_t uVar21;
  float fVar22;
  float fVar23;
  int32_t uVar24;
  int32_t uVar25;
  int32_t astack_special_x_20 [2];
  uint64_t local_var_efe58;
  int32_t local_var_178;
  int32_t local_var_174;
  uint64_t local_var_170;
  int32_t local_var_168;
  float fStack_164;
  float fStack_160;
  int32_t local_var_15c;
  float fStack_158;
  float fStack_154;
  int8_t local_var_150;
  int8_t local_var_14f;
  int16_t local_var_14e;
  int8_t local_var_14c;
  uint64_t local_var_148;
  uint64_t local_var_140;
  uint64_t local_var_138;
  uint64_t local_var_130;
  uint64_t local_var_128;
  int32_t local_var_120;
  uint64_t local_var_118;
  uint64_t local_var_110;
  int32_t local_var_108;
  int32_t local_var_104;
  int32_t local_var_100;
  int32_t local_var_fc;
  int64_t lStack_f8;
  int32_t local_var_f0;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  int32_t local_var_d8;
  int32_t local_var_d4;
  int32_t local_var_d0;
  int32_t local_var_cc;
  uint64_t local_var_c8;
  int32_t local_var_c0;
  lVar12 = *(int64_t *)(param_1 + 0xb8);
  fVar22 = 1.0;
  iVar9 = param_5[0x41];
  lVar18 = *(int64_t *)(*(int64_t *)(lVar12 + 0x8f8) + 0x9e8);
  if (lVar18 != 0) {
    lVar16 = (int64_t)*(int *)(lVar18 + 0xf0) * 0xa0;
    if (iVar9 == 0) {
      iVar11 = *(int *)(lVar16 + 0x6c + *(int64_t *)(lVar18 + 0xd0));
    }
    else {
      iVar11 = *(int *)(lVar16 + 0x68 + *(int64_t *)(lVar18 + 0xd0));
    }
    fVar22 = (float)iVar11 * 0.01;
  }
  if (iVar9 == 0) {
    fVar22 = fVar22 * *(float *)(lVar12 + 0x3a8);
  }
  else if (iVar9 == 1) {
    fVar22 = fVar22 * *(float *)(lVar12 + 0x3ac);
  }
  fVar22 = fVar22 * system_system_memory;
  if (*(char *)((int64_t)param_5 + 5) != '\0') {
    fVar22 = fVar22 * system_system_memory;
  }
  uVar24 = 0;
  if (iVar9 == 1) {
    fVar23 = 0.0;
  }
  else {
    if (lVar18 == 0) {
      fVar20 = 1.0;
    }
    else {
      fVar23 = 0.05;
      fVar20 = *(float *)((int64_t)*(int *)(lVar18 + 0xf0) * 0xa0 + 0x8c +
                         *(int64_t *)(lVar18 + 0xd0));
      if (fVar20 < 0.05) goto LAB_1805b135e;
    }
    fVar23 = fVar20;
    if (0.95 <= fVar20) {
      fVar23 = 0.95;
    }
  }
LAB_1805b135e:
  if (param_3 == '\0') {
    uVar15 = param_5[0xc];
  }
  else {
    uVar15 = param_5[0xd];
  }
  uVar8 = SystemCacheManager(&system_data_5f30,*(int32_t *)(*(int64_t *)(lVar12 + 0x590) + 0xac),uVar15)
  ;
  lVar12 = NetworkSystem_8d7f0(&system_data_61e0,uVar8,fVar23);
  uVar25 = 0xbe4ccccd;
  fVar20 = *(float *)(lVar12 + 0x1e8);
  fVar1 = *(float *)(lVar12 + 0x188);
  uVar8 = system_system_memory;
  if (((param_4 == '\0') && (uVar8 = 0, *(char *)(param_1 + 0xd4) != '\0')) && (param_3 == '\0')) {
    uVar8 = system_system_memory;
    uVar25 = system_system_memory;
  }
  cVar7 = function_5b18f0(param_1,param_5,param_3);
  if (cVar7 != '\0') {
    lVar12 = *(int64_t *)(param_1 + 0xb8);
    if ((((*(uint *)(lVar12 + 0x56c) & 0x800) == 0) || (*(int64_t *)(lVar12 + 0x590) == 0)) ||
       (*(char *)(*(int64_t *)(lVar12 + 0x590) + 0x34bc) == '\0')) {
      uVar17 = 1;
    }
    else {
      uVar17 = 0;
    }
    Function_745a0409(lVar12,uVar17);
  }
  uVar4 = *param_5;
  iVar9 = NetworkSystem_b2220(param_1,uVar4,1);
  lVar12 = Function_eed02604(param_1,iVar9,param_6);
  if (lVar12 == 0) {
    uVar14 = 0xffffffff;
  }
  else {
    uVar14 = (uint64_t)*(uint *)(lVar12 + 0xc);
  }
  if ((int)uVar14 == -1) {
    *(uint64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0xb8) + 0x590) + 0x2518) = param_6;
    lVar18 = *(int64_t *)(param_1 + 0xb8);
    lVar16 = *(int64_t *)(lVar18 + 0x590);
    lVar5 = *(int64_t *)(*(int64_t *)(lVar18 + 0x8f8) + 0x9f0);
    if (lVar5 == 0) {
      uVar21 = 0xffffffff;
    }
    else {
      uVar21 = *(int32_t *)
                ((int64_t)*(int *)(lVar5 + 0xf0) * 0xa0 + 100 + *(int64_t *)(lVar5 + 0xd0));
    }
    bVar3 = *(byte *)(lVar16 + 0x3424);
    uVar10 = (bVar3 & 0x10 | 8) >> 3;
    if ((bVar3 & 0x28) == 0) {
      uVar10 = bVar3 >> 3 & 2;
    }
    uVar10 = NetworkSystem_4f810(*(uint64_t *)(lVar16 + 0x2518),uVar21,*(int8_t *)(lVar16 + 0x34bc),
                           uVar10,local_var_efe58 & 0xffffffff00000000);
    uVar14 = (uint64_t)uVar10;
    if (uVar10 == 0xffffffff) {
      astack_special_x_20[0] = 0x3f800000;
      uVar10 = NetworkSystem_0d480(lVar18,astack_special_x_20);
      uVar14 = (uint64_t)uVar10;
      if (uVar10 == 0xffffffff) {
        lVar18 = *(int64_t *)
                  ((int64_t)*(int *)(*(int64_t *)(param_1 + 0xb8) + 0x564) * 0xa60 + 0x3638 +
                  *(int64_t *)(*(int64_t *)(param_1 + 0xb8) + 0x8d8));
        lVar16 = *(int64_t *)(lVar18 + 0xc0);
        for (piVar13 = *(int **)(lVar16 + SUB168((ZEXT816(0) << 0x40 | ZEXT816(1)) %
                                                 ZEXT416(*(uint *)(lVar18 + 200)),0) * 8);
            piVar13 != (int *)0x0; piVar13 = *(int **)(piVar13 + 2)) {
          if (*piVar13 == 1) goto LAB_1805b15b0;
        }
        piVar13 = (int *)0x0;
LAB_1805b15b0:
        if (piVar13 == (int *)0x0) {
          piVar13 = *(int **)(lVar16 + *(int64_t *)(lVar18 + 200) * 8);
        }
        if (piVar13 == *(int **)(lVar16 + *(int64_t *)(lVar18 + 200) * 8)) {
          uVar14 = 0xffffffff;
        }
        else {
          uVar14 = (uint64_t)(uint)piVar13[1];
        }
      }
    }
  }
  if (cVar7 != '\0') {
    lVar18 = *(int64_t *)(param_1 + 0xb8);
    if ((((*(uint *)(lVar18 + 0x56c) & 0x800) == 0) || (*(int64_t *)(lVar18 + 0x590) == 0)) ||
       (*(char *)(*(int64_t *)(lVar18 + 0x590) + 0x34bc) == '\0')) {
      uVar17 = 1;
    }
    else {
      uVar17 = 0;
    }
    Function_745a0409(lVar18,uVar17);
  }
  iVar11 = SystemCacheManager(&system_data_5f30,
                         *(int32_t *)
                          (*(int64_t *)(*(int64_t *)(param_1 + 0xb8) + 0x590) + 0xac),
                         uVar14 & 0xffffffff);
  iVar11 = *(int *)(system_system_memory + (int64_t)iVar11 * 4);
  if (iVar11 == -1) {
    lVar18 = 0;
  }
  else {
    lVar18 = *(int64_t *)(system_system_memory + (int64_t)iVar11 * 8);
  }
  fVar2 = *(float *)(lVar18 + 0x1e4);
  lVar18 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0xb8) + 0x8f8) + 0x9e8);
  if (lVar18 != 0) {
    uVar24 = *(int32_t *)(lVar18 + 0x4c);
  }
  if (lVar12 == 0) {
    puVar19 = &local_var_118;
    local_var_138 = 0;
    local_var_130 = 0;
    local_var_118 = 0;
    local_var_110 = 0;
    local_var_128 = (uint64_t)local_var_128._5_3_ << 0x28;
    local_var_108 = 0;
    local_var_104 = 0;
    local_var_100 = 0;
    local_var_fc = 0;
    local_var_f0 = 0xffffffff;
    lStack_f8 = local_var_128;
  }
  else {
    local_var_148 = *(uint64_t *)(lVar12 + 0x10);
    local_var_140 = *(uint64_t *)(lVar12 + 0x18);
    local_var_120 = *(int32_t *)(lVar12 + 0x38);
    puVar19 = &local_var_148;
    local_var_138 = *(uint64_t *)(lVar12 + 0x20);
    local_var_130 = *(uint64_t *)(lVar12 + 0x28);
    local_var_128 = *(int64_t *)(lVar12 + 0x30);
  }
  uVar21 = Function_1698e45f(*(int64_t *)(param_1 + 0xb8),param_5[0x41]);
  local_var_e8 = *(uint64_t *)(param_5 + 0x20);
  local_var_e0 = *(uint64_t *)(param_5 + 0x22);
  local_var_c0 = param_5[0x2a];
  local_var_d8 = param_5[0x24];
  local_var_d4 = param_5[0x25];
  local_var_d0 = param_5[0x26];
  local_var_cc = param_5[0x27];
  local_var_c8 = *(uint64_t *)(param_5 + 0x28);
  fStack_154 = (float)NetworkSystem_b2510(uVar21,uVar21,0x3f800000,&local_var_e8,puVar19,uVar24,fVar2);
  if (fStack_154 <= fVar2) {
    fStack_154 = fVar2;
  }
  local_var_170 = 0;
  local_var_14e = 0x100;
  local_var_150 = param_7;
  local_var_14f = 1;
  local_var_14c = 1;
  local_var_178 = param_2;
  local_var_174 = uVar15;
  local_var_168 = uVar8;
  fStack_164 = fVar23;
  fStack_160 = fVar22;
  local_var_15c = uVar25;
  fStack_158 = fVar20;
  uVar14 = CoreSystemThreadManager(*(uint64_t *)(param_1 + 0xb8),&local_var_178);
  if ((char)uVar14 == '\0') {
    uVar14 = uVar14 & 0xffffffffffffff00;
  }
  else {
    uVar17 = *(uint64_t *)(param_5 + 0x22);
    *(uint64_t *)(param_1 + 0x2c) = *(uint64_t *)(param_5 + 0x20);
    *(uint64_t *)(param_1 + 0x34) = uVar17;
    uVar17 = *(uint64_t *)(param_5 + 0x26);
    *(uint64_t *)(param_1 + 0x3c) = *(uint64_t *)(param_5 + 0x24);
    *(uint64_t *)(param_1 + 0x44) = uVar17;
    *(uint64_t *)(param_1 + 0x4c) = *(uint64_t *)(param_5 + 0x28);
    *(int32_t *)(param_1 + 0x54) = param_5[0x2a];
    uVar17 = *(uint64_t *)(param_5 + 0x38);
    *(uint64_t *)(param_1 + 0x84) = *(uint64_t *)(param_5 + 0x36);
    *(uint64_t *)(param_1 + 0x8c) = uVar17;
    uVar24 = param_5[0x3b];
    uVar15 = param_5[0x3c];
    uVar8 = param_5[0x3d];
    *(int32_t *)(param_1 + 0x94) = param_5[0x3a];
    *(int32_t *)(param_1 + 0x98) = uVar24;
    *(int32_t *)(param_1 + 0x9c) = uVar15;
    *(int32_t *)(param_1 + 0xa0) = uVar8;
    *(uint64_t *)(param_1 + 0xa4) = *(uint64_t *)(param_5 + 0x3e);
    uVar24 = param_5[0x40];
    *(float *)(param_1 + 0xb0) = fVar1 - fVar20;
    *(int32_t *)(param_1 + 0xac) = uVar24;
    *(int32_t *)(param_1 + 0xc4) = 2;
    *(int *)(param_1 + 0xd0) = iVar9;
    if (iVar9 != -1) {
      Function_5cb4bc73(param_1);
    }
    plVar6 = *(int64_t **)(*(int64_t *)(param_1 + 0xb8) + 0x590);
    uVar24 = (**(code **)(*plVar6 + 0x80))(plVar6,param_2);
    *(int32_t *)(param_1 + 200) = uVar4;
    *(int32_t *)(param_1 + 0xc0) = uVar24;
    uVar24 = param_5[0x41];
    *(int32_t *)(param_1 + 0xcc) = uVar24;
    uVar14 = CONCAT71((uint7)(uint3)((uint)uVar24 >> 8),1);
  }
  return uVar14;
}
int8_t function_5b18f0(int64_t param_1,uint *param_2,char param_3)
{
  uint uVar1;
  int64_t lVar2;
  char cVar3;
  if ((((param_3 != '\0') && (lVar2 = *(int64_t *)(param_1 + 0xb8), *(int *)(lVar2 + 0x564) < 0))
      && ((*(uint *)(lVar2 + 0x56c) & 0x800) != 0)) &&
     ((*(byte *)(*(int64_t *)(lVar2 + 0x590) + 0x3424) & 0x10) == 0)) {
    uVar1 = *param_2;
    if (uVar1 == 3) {
      cVar3 = Function_ae66d806();
      if (cVar3 != '\0') {
        return 0;
      }
    }
    else if (uVar1 == 2) {
      cVar3 = Function_ae66d806();
      if (cVar3 == '\0') {
        return 0;
      }
    }
    else if (1 < uVar1) {
      return 0;
    }
    return 1;
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkSystem_b1960(uint64_t *param_1,uint64_t param_2)
{
  float fVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint uVar6;
  int64_t lVar7;
  int32_t uVar8;
  int iVar9;
  float fVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  int32_t uVar16;
  int32_t uVar17;
  int32_t uVar18;
  int32_t uVar19;
  int32_t uVar20;
  int32_t uVar21;
  uint64_t stack_special_x_8;
  uint64_t local_var_108;
  uint64_t local_var_100;
  uint64_t local_var_f8;
  uint64_t local_var_f0;
  uint64_t local_var_e8;
  int32_t local_var_e0;
  int32_t local_var_d8;
  int iStack_d4;
  uint64_t local_var_d0;
  uint64_t local_var_c8;
  int32_t local_var_c0;
  float fStack_bc;
  int32_t local_var_b8;
  int32_t local_var_b4;
  int32_t local_var_b0;
  int8_t local_var_ac;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  uint64_t local_var_98;
  uint64_t local_var_90;
  uint64_t local_var_88;
  int32_t local_var_80;
  lVar7 = param_1[0x17];
  lVar2 = *(int64_t *)(lVar7 + 0x590);
  lVar4 = *(int64_t *)(lVar2 + 0x24a8);
  if (lVar4 != 0) {
    lVar4 = *(int64_t *)(lVar4 + 0x1d0);
  }
  uVar6 = (uint)lVar4;
  if ((char)*(uint64_t *)(lVar2 + 0x24b8) != '\0') {
    uVar6 = 0;
  }
  uVar5 = 0;
  if (((uVar6 | (uint)*(uint64_t *)(lVar2 + 0x24b8)) & 0xff) < 2) {
    lVar4 = Function_eed02604(param_1,*(int32_t *)(param_1 + 0x1a),param_2);
    uVar8 = 0xffffffff;
    if (lVar4 == 0) {
      iVar9 = -1;
    }
    else {
      iVar9 = *(int *)(lVar4 + 0xc);
    }
    if (*(int *)(lVar2 + 0x2498) == iVar9) {
      uVar5 = NetworkSystem_b1d30(param_1,param_2);
    }
    else {
      stack_special_x_8 = 0;
      iVar3 = iVar9;
      if (iVar9 == -1) {
        *(uint64_t *)(lVar2 + 0x2518) = param_2;
        lVar7 = param_1[0x17];
        stack_special_x_8 = 0x2001;
        lVar2 = *(int64_t *)(*(int64_t *)(lVar7 + 0x8f8) + 0x9f0);
        if (lVar2 == 0) {
          uVar11 = 0xffffffff;
        }
        else {
          uVar11 = *(int32_t *)
                    ((int64_t)*(int *)(lVar2 + 0xf0) * 0xa0 + 100 + *(int64_t *)(lVar2 + 0xd0));
        }
        iVar3 = NetworkSystem_770c0(*(uint64_t *)(lVar7 + 0x590),uVar11);
      }
      iVar3 = SystemCacheManager(&system_data_5f30,*(int32_t *)(*(int64_t *)(lVar7 + 0x590) + 0xac),
                            iVar3);
      iVar3 = *(int *)(system_system_memory + (int64_t)iVar3 * 4);
      if (iVar3 == -1) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(int64_t *)(system_system_memory + (int64_t)iVar3 * 8);
      }
      fVar1 = *(float *)(lVar7 + 0x1e4);
      uVar11 = 0;
      if (lVar4 == 0) {
        uVar12 = 0;
        uVar13 = 0;
        uVar14 = 0;
        uVar15 = 0;
        local_var_98._0_4_ = 0;
        local_var_98._4_4_ = 0;
        local_var_90._0_4_ = 0;
        local_var_90._4_4_ = 0;
        local_var_88 = (uint64_t)local_var_88._5_3_ << 0x28;
        uVar20 = 0;
        uVar21 = (int32_t)((uint64_t)local_var_88 >> 0x20);
        local_var_108 = 0;
        local_var_100 = 0;
        local_var_f8 = 0;
        local_var_f0 = 0;
        local_var_e8 = (uint64_t)local_var_e8._5_3_ << 0x28;
        local_var_e0 = 0xffffffff;
        uVar16 = (int32_t)local_var_98;
        uVar17 = local_var_98._4_4_;
        uVar18 = (int32_t)local_var_90;
        uVar19 = local_var_90._4_4_;
      }
      else {
        local_var_108 = *(uint64_t *)(lVar4 + 0x10);
        local_var_100 = *(uint64_t *)(lVar4 + 0x18);
        local_var_e0 = *(int32_t *)(lVar4 + 0x38);
        local_var_f8 = *(uint64_t *)(lVar4 + 0x20);
        local_var_f0 = *(uint64_t *)(lVar4 + 0x28);
        uVar8 = *(int32_t *)(lVar4 + 100);
        uVar12 = *(int32_t *)(lVar4 + 0x3c);
        uVar13 = *(int32_t *)(lVar4 + 0x40);
        uVar14 = *(int32_t *)(lVar4 + 0x44);
        uVar15 = *(int32_t *)(lVar4 + 0x48);
        uVar20 = (int32_t)*(uint64_t *)(lVar4 + 0x5c);
        uVar21 = (int32_t)((uint64_t)*(uint64_t *)(lVar4 + 0x5c) >> 0x20);
        local_var_e8 = *(int64_t *)(lVar4 + 0x30);
        uVar16 = *(int32_t *)(lVar4 + 0x4c);
        uVar17 = *(int32_t *)(lVar4 + 0x50);
        uVar18 = *(int32_t *)(lVar4 + 0x54);
        uVar19 = *(int32_t *)(lVar4 + 0x58);
      }
      lVar7 = *(int64_t *)(*(int64_t *)(param_1[0x17] + 0x8f8) + 0x9e8);
      if (lVar7 != 0) {
        uVar11 = *(int32_t *)(lVar7 + 0x4c);
      }
      local_var_a8 = *param_1;
      local_var_a0 = param_1[1];
      local_var_80 = *(int32_t *)(param_1 + 5);
      local_var_98 = param_1[2];
      local_var_90 = param_1[3];
      local_var_88 = param_1[4];
      fVar10 = (float)NetworkSystem_b2510((int)local_var_88,lVar7,0x3f800000,&local_var_a8,&local_var_108,uVar11,
                                    fVar1);
      if (fVar10 <= fVar1) {
        fVar10 = fVar1;
      }
      local_var_b8 = 0xbe4ccccd;
      local_var_b4 = 0x3ecccccd;
      local_var_c8 = 0;
      local_var_b0 = 0x1000000;
      local_var_c0 = 0x3f800000;
      local_var_ac = 0;
      local_var_d8 = 1;
      local_var_d0 = stack_special_x_8;
      iStack_d4 = iVar9;
      fStack_bc = fVar10;
      uVar5 = CoreSystemThreadManager(param_1[0x17],&local_var_d8);
      if ((char)uVar5 != '\0') {
        *(int32_t *)((int64_t)param_1 + 0xc4) = 0;
        *(uint64_t *)((int64_t)param_1 + 0x2c) = local_var_108;
        *(uint64_t *)((int64_t)param_1 + 0x34) = local_var_100;
        *(int32_t *)((int64_t)param_1 + 0x84) = uVar12;
        *(int32_t *)(param_1 + 0x11) = uVar13;
        *(int32_t *)((int64_t)param_1 + 0x8c) = uVar14;
        *(int32_t *)(param_1 + 0x12) = uVar15;
        *(uint64_t *)((int64_t)param_1 + 0x3c) = local_var_f8;
        *(uint64_t *)((int64_t)param_1 + 0x44) = local_var_f0;
        *(int32_t *)((int64_t)param_1 + 0x94) = uVar16;
        *(int32_t *)(param_1 + 0x13) = uVar17;
        *(int32_t *)((int64_t)param_1 + 0x9c) = uVar18;
        *(int32_t *)(param_1 + 0x14) = uVar19;
        *(int64_t *)((int64_t)param_1 + 0x4c) = local_var_e8;
        *(int32_t *)((int64_t)param_1 + 0x54) = local_var_e0;
        *(uint64_t *)((int64_t)param_1 + 0xa4) = CONCAT44(uVar21,uVar20);
        *(float *)(param_1 + 0x16) = fVar10;
        *(int32_t *)((int64_t)param_1 + 0xac) = uVar8;
        return CONCAT71((uint7)(uint3)((uint)local_var_e0 >> 8),1);
      }
    }
  }
  return uVar5 & 0xffffffffffffff00;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkSystem_b1a2c(void)
{
  float fVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  int iVar9;
  uint64_t uVar10;
  int64_t lVar11;
  uint64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int unaff_R12D;
  uint64_t unaff_R13;
  int64_t unaff_R14;
  int unaff_R15D;
  float fVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  int32_t uVar16;
  int32_t uVar17;
  int32_t uVar18;
  int32_t uVar19;
  int32_t uVar20;
  uint64_t uVar21;
  uint64_t local_var_40;
  uint64_t local_var_48;
  uint64_t local_buffer_50;
  uint64_t local_buffer_58;
  uint64_t local_buffer_60;
  int local_buffer_68;
  int32_t local_buffer_70;
  uint64_t local_buffer_78;
  *(uint64_t *)(unaff_RBP + 0x50) = 0;
  if (unaff_R15D == unaff_R12D) {
    *(uint64_t *)(unaff_R14 + 0x2518) = unaff_R13;
    unaff_RSI = unaff_RBX[0x17];
    *(uint64_t *)(unaff_RBP + 0x50) = 0x2001;
    lVar11 = *(int64_t *)(*(int64_t *)(unaff_RSI + 0x8f8) + 0x9f0);
    iVar9 = unaff_R12D;
    if (lVar11 != 0) {
      iVar9 = *(int *)((int64_t)*(int *)(lVar11 + 0xf0) * 0xa0 + 100 + *(int64_t *)(lVar11 + 0xd0)
                      );
    }
    unaff_R15D = NetworkSystem_770c0(*(uint64_t *)(unaff_RSI + 0x590),iVar9);
  }
  iVar9 = SystemCacheManager(&system_data_5f30,*(int32_t *)(*(int64_t *)(unaff_RSI + 0x590) + 0xac),
                        unaff_R15D);
  iVar9 = *(int *)(system_system_memory + (int64_t)iVar9 * 4);
  if (iVar9 == unaff_R12D) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(int64_t *)(system_system_memory + (int64_t)iVar9 * 8);
  }
  fVar1 = *(float *)(lVar11 + 0x1e4);
  if (unaff_RDI == 0) {
    *(uint64_t *)(unaff_RBP + -0x50) = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    *(uint64_t *)(unaff_RBP + -0x48) = 0;
    uVar17 = *(int32_t *)(unaff_RBP + -0x50);
    uVar18 = *(int32_t *)(unaff_RBP + -0x4c);
    uVar19 = *(int32_t *)(unaff_RBP + -0x48);
    uVar20 = *(int32_t *)(unaff_RBP + -0x44);
    *(int32_t *)(unaff_RBP + -0x40) = 0;
    *(int8_t *)(unaff_RBP + -0x3c) = 0;
    uVar21 = *(uint64_t *)(unaff_RBP + -0x40);
    local_var_40 = 0;
    local_var_48 = 0;
    local_buffer_50 = 0;
    local_buffer_58 = 0;
    local_buffer_60 = local_buffer_60 & 0xffffff0000000000;
    local_buffer_68 = unaff_R12D;
  }
  else {
    local_var_40 = *(uint64_t *)(unaff_RDI + 0x10);
    local_var_48 = *(uint64_t *)(unaff_RDI + 0x18);
    local_buffer_68 = *(int *)(unaff_RDI + 0x38);
    local_buffer_50 = *(uint64_t *)(unaff_RDI + 0x20);
    local_buffer_58 = *(uint64_t *)(unaff_RDI + 0x28);
    unaff_R12D = *(int *)(unaff_RDI + 100);
    uVar13 = *(int32_t *)(unaff_RDI + 0x3c);
    uVar14 = *(int32_t *)(unaff_RDI + 0x40);
    uVar15 = *(int32_t *)(unaff_RDI + 0x44);
    uVar16 = *(int32_t *)(unaff_RDI + 0x48);
    uVar17 = *(int32_t *)(unaff_RDI + 0x4c);
    uVar18 = *(int32_t *)(unaff_RDI + 0x50);
    uVar19 = *(int32_t *)(unaff_RDI + 0x54);
    uVar20 = *(int32_t *)(unaff_RDI + 0x58);
    uVar21 = *(uint64_t *)(unaff_RDI + 0x5c);
    local_buffer_60 = *(uint64_t *)(unaff_RDI + 0x30);
  }
  uVar3 = *(uint64_t *)(*(int64_t *)(unaff_RBX[0x17] + 0x8f8) + 0x9e8);
  uVar2 = *unaff_RBX;
  uVar8 = unaff_RBX[1];
  uVar4 = *(int32_t *)(unaff_RBX + 2);
  uVar5 = *(int32_t *)((int64_t)unaff_RBX + 0x14);
  uVar6 = *(int32_t *)(unaff_RBX + 3);
  uVar7 = *(int32_t *)((int64_t)unaff_RBX + 0x1c);
  *(int32_t *)(unaff_RBP + -0x38) = *(int32_t *)(unaff_RBX + 5);
  *(uint64_t *)(unaff_RBP + -0x60) = uVar2;
  *(uint64_t *)(unaff_RBP + -0x58) = uVar8;
  uVar2 = unaff_RBX[4];
  *(uint64_t *)(unaff_RBP + -0x40) = uVar2;
  *(int32_t *)(unaff_RBP + -0x50) = uVar4;
  *(int32_t *)(unaff_RBP + -0x4c) = uVar5;
  *(int32_t *)(unaff_RBP + -0x48) = uVar6;
  *(int32_t *)(unaff_RBP + -0x44) = uVar7;
  fVar12 = (float)NetworkSystem_b2510((int)uVar2,uVar3,0x3f800000,unaff_RBP + -0x60,&local_buffer_00000040);
  local_buffer_78 = *(uint64_t *)(unaff_RBP + 0x50);
  if (fVar12 <= fVar1) {
    fVar12 = fVar1;
  }
  uVar2 = unaff_RBX[0x17];
  *(int32_t *)(unaff_RBP + -0x70) = 0xbe4ccccd;
  *(int32_t *)(unaff_RBP + -0x6c) = 0x3ecccccd;
  *(uint64_t *)(unaff_RBP + -0x80) = 0;
  *(float *)(unaff_RBP + -0x74) = fVar12;
  *(int32_t *)(unaff_RBP + -0x68) = 0x1000000;
  *(int32_t *)(unaff_RBP + -0x78) = 0x3f800000;
  *(int8_t *)(unaff_RBP + -100) = 0;
  local_buffer_70 = 1;
  uVar10 = CoreSystemThreadManager(uVar2,&local_buffer_00000070);
  if ((char)uVar10 == '\0') {
    uVar10 = uVar10 & 0xffffffffffffff00;
  }
  else {
    *(int32_t *)((int64_t)unaff_RBX + 0xc4) = 0;
    *(uint64_t *)((int64_t)unaff_RBX + 0x2c) = local_var_40;
    *(uint64_t *)((int64_t)unaff_RBX + 0x34) = local_var_48;
    *(int32_t *)((int64_t)unaff_RBX + 0x84) = uVar13;
    *(int32_t *)(unaff_RBX + 0x11) = uVar14;
    *(int32_t *)((int64_t)unaff_RBX + 0x8c) = uVar15;
    *(int32_t *)(unaff_RBX + 0x12) = uVar16;
    *(uint64_t *)((int64_t)unaff_RBX + 0x3c) = local_buffer_50;
    *(uint64_t *)((int64_t)unaff_RBX + 0x44) = local_buffer_58;
    *(int32_t *)((int64_t)unaff_RBX + 0x94) = uVar17;
    *(int32_t *)(unaff_RBX + 0x13) = uVar18;
    *(int32_t *)((int64_t)unaff_RBX + 0x9c) = uVar19;
    *(int32_t *)(unaff_RBX + 0x14) = uVar20;
    *(uint64_t *)((int64_t)unaff_RBX + 0x4c) = local_buffer_60;
    *(int *)((int64_t)unaff_RBX + 0x54) = local_buffer_68;
    uVar10 = CONCAT71((uint7)(uint3)((uint)local_buffer_68 >> 8),1);
    *(uint64_t *)((int64_t)unaff_RBX + 0xa4) = uVar21;
    *(float *)(unaff_RBX + 0x16) = fVar12;
    *(int *)((int64_t)unaff_RBX + 0xac) = unaff_R12D;
  }
  return uVar10;
}
uint64_t function_5b1c79(void)
{
  int64_t unaff_RBX;
  int32_t unaff_R12D;
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
  int32_t unaff_XMM9_Da;
  uint64_t local_var_40;
  uint64_t local_var_48;
  uint64_t local_buffer_50;
  uint64_t local_buffer_58;
  uint64_t local_buffer_60;
  int32_t local_buffer_68;
  *(int32_t *)(unaff_RBX + 0xc4) = 0;
  *(uint64_t *)(unaff_RBX + 0x2c) = local_var_40;
  *(uint64_t *)(unaff_RBX + 0x34) = local_var_48;
  *(int32_t *)(unaff_RBX + 0x84) = unaff_XMM6_Da;
  *(int32_t *)(unaff_RBX + 0x88) = unaff_XMM6_Db;
  *(int32_t *)(unaff_RBX + 0x8c) = unaff_XMM6_Dc;
  *(int32_t *)(unaff_RBX + 0x90) = unaff_XMM6_Dd;
  *(uint64_t *)(unaff_RBX + 0x3c) = local_buffer_50;
  *(uint64_t *)(unaff_RBX + 0x44) = local_buffer_58;
  *(int32_t *)(unaff_RBX + 0x94) = unaff_XMM7_Da;
  *(int32_t *)(unaff_RBX + 0x98) = unaff_XMM7_Db;
  *(int32_t *)(unaff_RBX + 0x9c) = unaff_XMM7_Dc;
  *(int32_t *)(unaff_RBX + 0xa0) = unaff_XMM7_Dd;
  *(uint64_t *)(unaff_RBX + 0x4c) = local_buffer_60;
  *(int32_t *)(unaff_RBX + 0x54) = local_buffer_68;
  *(uint64_t *)(unaff_RBX + 0xa4) = CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da);
  *(int32_t *)(unaff_RBX + 0xb0) = unaff_XMM9_Da;
  *(int32_t *)(unaff_RBX + 0xac) = unaff_R12D;
  return CONCAT71((uint7)(uint3)((uint)local_buffer_68 >> 8),1);
}