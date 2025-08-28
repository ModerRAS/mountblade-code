#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_05_part016.c - 3 个函数
// 函数: void function_2e05a0(int8_t *param_1,int64_t param_2,int64_t param_3,int64_t *param_4,
void function_2e05a0(int8_t *param_1,int64_t param_2,int64_t param_3,int64_t *param_4,
                  uint64_t *param_5,char param_6,int64_t *param_7)
{
  void *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int32_t uVar8;
  int32_t uVar9;
  bool bVar10;
  int64_t *plVar11;
  int8_t uVar12;
  char cVar13;
  uint uVar14;
  uint64_t *puVar15;
  uint64_t uVar16;
  uint64_t *puVar17;
  uint64_t *puVar18;
  uint64_t uVar19;
  uint64_t *puVar20;
  int64_t *plVar21;
  uint64_t *puVar22;
  int64_t lVar23;
  uint uVar24;
  uint uVar26;
  uint64_t *puVar27;
  int32_t uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int8_t stack_array_1f8 [32];
  uint local_var_1d8;
  char cStack_1c8;
  char cStack_1c7;
  byte bStack_1c6;
  uint local_var_1c4;
  int64_t lStack_1c0;
  void **pplocal_var_1b8;
  int64_t *aplStack_1b0 [2];
  uint64_t local_var_1a0;
  uint64_t local_var_198;
  uint local_var_190;
  int32_t local_var_18c;
  uint64_t *plocal_var_188;
  uint64_t local_var_180;
  uint64_t local_var_178;
  uint64_t local_var_170;
  uint64_t local_var_168;
  uint64_t *plocal_var_158;
  uint64_t local_var_150;
  uint local_var_148;
  int32_t local_var_144;
  uint local_var_140;
  int64_t *plStack_138;
  void *plocal_var_130;
  int64_t lStack_128;
  uint local_var_120;
  uint64_t local_var_118;
  int32_t local_var_110;
  int32_t local_var_10c;
  int32_t local_var_108;
  int32_t local_var_104;
  int64_t *plStack_100;
  uint64_t *plocal_var_f8;
  uint64_t local_var_f0;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  int64_t *plStack_d8;
  uint64_t local_var_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  uint local_var_b8;
  int32_t local_var_b4;
  uint64_t local_var_b0;
  uint64_t local_var_a8;
  int64_t *plStack_a0;
  uint64_t local_var_98;
  int64_t *plStack_90;
  uint local_var_58;
  int32_t local_var_50;
  uint64_t local_var_48;
  int iVar25;
  local_var_168 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1f8;
  *param_1 = 0;
  plocal_var_f8 = (uint64_t *)*param_5;
  local_var_f0 = param_5[1];
  local_var_e8 = param_5[2];
  local_var_e0 = param_5[3];
  plStack_d8 = (int64_t *)param_5[4];
  local_var_d0 = param_5[5];
  local_var_c8 = param_5[6];
  local_var_c0 = param_5[7];
  local_var_b0 = param_5[9];
  local_var_a8 = param_5[10];
  plStack_a0 = (int64_t *)param_5[0xb];
  local_var_98 = param_5[0xc];
  plStack_90 = (int64_t *)param_5[0xd];
  puVar27 = (uint64_t *)0x0;
  uVar26 = 0;
  uVar24 = uVar26;
  if (*(int *)(param_3 + 8) != -1) {
    uVar24 = *(uint *)(param_3 + 0x18);
  }
  local_var_1c4 = uVar26;
  if ((param_6 == '\0') && (local_var_b8 = (uint)param_5[8], local_var_1c4 = local_var_b8, (uVar24 & 1) != 0)
     ) {
    local_var_1c4 = 1;
  }
  _local_var_b8 = CONCAT44((int)((uint64_t)param_5[8] >> 0x20),local_var_1c4);
  puVar18 = (uint64_t *)(param_2 + 0x2c0);
  lVar23 = 4;
  puVar15 = (uint64_t *)(param_1 + 0xd0);
  do {
    uVar6 = puVar18[1];
    *puVar15 = *puVar18;
    puVar15[1] = uVar6;
    uVar6 = puVar18[3];
    puVar15[2] = puVar18[2];
    puVar15[3] = uVar6;
    uVar6 = puVar18[5];
    puVar15[4] = puVar18[4];
    puVar15[5] = uVar6;
    uVar6 = puVar18[7];
    puVar15[6] = puVar18[6];
    puVar15[7] = uVar6;
    uVar6 = puVar18[9];
    puVar15[8] = puVar18[8];
    puVar15[9] = uVar6;
    uVar6 = puVar18[0xb];
    puVar15[10] = puVar18[10];
    puVar15[0xb] = uVar6;
    uVar6 = puVar18[0xd];
    puVar15[0xc] = puVar18[0xc];
    puVar15[0xd] = uVar6;
    uVar6 = puVar18[0xf];
    puVar15[0xe] = puVar18[0xe];
    puVar15[0xf] = uVar6;
    puVar18 = puVar18 + 0x10;
    lVar23 = lVar23 + -1;
    puVar15 = puVar15 + 0x10;
  } while (lVar23 != 0);
  lVar23 = param_4[1];
  *(int64_t *)(param_1 + 0xd0) = *param_4;
  *(int64_t *)(param_1 + 0xd8) = lVar23;
  lVar23 = param_4[3];
  *(int64_t *)(param_1 + 0xe0) = param_4[2];
  *(int64_t *)(param_1 + 0xe8) = lVar23;
  lVar23 = param_4[5];
  *(int64_t *)(param_1 + 0xf0) = param_4[4];
  *(int64_t *)(param_1 + 0xf8) = lVar23;
  lVar23 = param_4[7];
  *(int64_t *)(param_1 + 0x100) = param_4[6];
  *(int64_t *)(param_1 + 0x108) = lVar23;
  if (*(char *)(param_2 + 0x561) == '\0') {
    *(uint64_t *)(param_1 + 0x70) = 0;
    *(uint64_t *)(param_1 + 0x78) = 0;
    param_1[0xc0] = 0;
  }
  else {
    *(uint64_t *)(param_1 + 0x70) = *(uint64_t *)(param_2 + 0x568);
    *(uint64_t *)(param_1 + 0x78) = *(uint64_t *)(param_2 + 0x570);
    param_1[0xc0] = 1;
  }
  *(int *)(param_1 + 0x30) = (int)*(float *)(param_2 + 0x308);
  *(int32_t *)(param_1 + 0x34) = *(int32_t *)(param_2 + 800);
  *(int32_t *)(param_1 + 0x38) = *(int32_t *)(param_2 + 0x554);
  *(int32_t *)(param_1 + 0x3c) = *(int32_t *)(param_2 + 0x558);
  uVar6 = *(uint64_t *)(param_2 + 0x4c8);
  *(uint64_t *)(param_1 + 0x80) = *(uint64_t *)(param_2 + 0x4c0);
  *(uint64_t *)(param_1 + 0x88) = uVar6;
  uVar6 = *(uint64_t *)(param_2 + 0x4d8);
  *(uint64_t *)(param_1 + 0x90) = *(uint64_t *)(param_2 + 0x4d0);
  *(uint64_t *)(param_1 + 0x98) = uVar6;
  uVar28 = *(int32_t *)(param_2 + 0x4e4);
  uVar8 = *(int32_t *)(param_2 + 0x4e8);
  uVar9 = *(int32_t *)(param_2 + 0x4ec);
  *(int32_t *)(param_1 + 0xa0) = *(int32_t *)(param_2 + 0x4e0);
  *(int32_t *)(param_1 + 0xa4) = uVar28;
  *(int32_t *)(param_1 + 0xa8) = uVar8;
  *(int32_t *)(param_1 + 0xac) = uVar9;
  uVar28 = *(int32_t *)(param_2 + 0x4f4);
  uVar8 = *(int32_t *)(param_2 + 0x4f8);
  uVar9 = *(int32_t *)(param_2 + 0x4fc);
  *(int32_t *)(param_1 + 0xb0) = *(int32_t *)(param_2 + 0x4f0);
  *(int32_t *)(param_1 + 0xb4) = uVar28;
  *(int32_t *)(param_1 + 0xb8) = uVar8;
  *(int32_t *)(param_1 + 0xbc) = uVar9;
  *(int32_t *)(param_1 + 0x40) = *(int32_t *)(param_2 + 0x55c);
  lVar23 = *(int64_t *)(param_1 + 0x98);
  if (lVar23 == 0) {
    lVar23 = *(int64_t *)(param_2 + 0xb8);
  }
  else if ((*(int64_t *)(param_1 + 0x90) != 0) && (*(char *)(param_2 + 0x5e0) == '\0')) {
    lVar23 = 0;
  }
  *(int64_t *)(param_1 + 0x60) = lVar23;
  *(uint64_t *)(param_1 + 0x68) = *(uint64_t *)(param_2 + 0x140);
  lStack_1c0 = param_3;
  aplStack_1b0[0] = param_4;
  if ((*(char *)(param_3 + 0x20) == '\0') && (*(char *)(param_3 + 0x21) == '\0')) {
    *(uint64_t *)(param_1 + 0x10) = *(uint64_t *)(param_1 + 8);
  }
  else {
    plVar7 = (int64_t *)(param_1 + 8);
    if (plVar7 != plStack_90) {
      lVar23 = plStack_90[1];
      lVar3 = *plStack_90;
      local_var_1a0 = (uint64_t *)(lVar23 - lVar3);
      uVar19 = (int64_t)local_var_1a0 >> 2;
      lVar4 = *plVar7;
      if ((uint64_t)(*(int64_t *)(param_1 + 0x18) - lVar4 >> 2) < uVar19) {
        pplocal_var_1b8 = (void **)puVar27;
        if (uVar19 != 0) {
          pplocal_var_1b8 = (void **)CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar19 * 4,param_1[0x20]);
        }
        if (lVar3 != lVar23) {
// WARNING: Subroutine does not return
          memmove(pplocal_var_1b8,lVar3,local_var_1a0);
        }
        if (*plVar7 != 0) {
// WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        *plVar7 = (int64_t)pplocal_var_1b8;
        puVar1 = (void *)((int64_t)pplocal_var_1b8 + uVar19 * 4);
        *(void **)(param_1 + 0x10) = puVar1;
        *(void **)(param_1 + 0x18) = puVar1;
      }
      else {
        lVar5 = *(int64_t *)(param_1 + 0x10);
        uVar16 = lVar5 - lVar4 >> 2;
        if (uVar16 < uVar19) {
          lVar2 = lVar3 + uVar16 * 4;
          if (lVar3 != lVar2) {
// WARNING: Subroutine does not return
            memmove(lVar4,lVar3);
          }
          if (lVar2 != lVar23) {
// WARNING: Subroutine does not return
            memmove(lVar5,lVar2,lVar23 - lVar2);
          }
          *(int64_t *)(param_1 + 0x10) = lVar5;
        }
        else {
          if (lVar3 != lVar23) {
// WARNING: Subroutine does not return
            memmove(lVar4,lVar3,local_var_1a0);
          }
          *(int64_t *)(param_1 + 0x10) = lVar4;
        }
      }
    }
  }
  *(uint64_t *)(param_1 + 0x2d8) = *(uint64_t *)(param_1 + 0x2d0);
  local_var_1a0 = (uint64_t *)((uint64_t)local_var_1a0._4_4_ << 0x20);
  lVar23 = *(int64_t *)(param_2 + 0x148);
  if (*(int64_t *)(param_2 + 0x150) - lVar23 >> 3 != 0) {
    pplocal_var_1b8 = (void **)0x0;
    puVar18 = puVar27;
    do {
      uVar6 = *(uint64_t *)(lVar23 + (int64_t)pplocal_var_1b8);
      puVar15 = *(uint64_t **)(param_1 + 0x2d8);
      if (puVar15 < *(uint64_t **)(param_1 + 0x2e0)) {
        *(uint64_t **)(param_1 + 0x2d8) = puVar15 + 1;
        *puVar15 = uVar6;
        iVar25 = (int)puVar18;
      }
      else {
        puVar18 = *(uint64_t **)(param_1 + 0x2d0);
        lVar23 = (int64_t)puVar15 - (int64_t)puVar18 >> 3;
        if (lVar23 == 0) {
          lVar23 = 1;
LAB_1802e099e:
          puVar17 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar23 * 8,param_1[0x2e8]);
          puVar15 = *(uint64_t **)(param_1 + 0x2d8);
          puVar18 = *(uint64_t **)(param_1 + 0x2d0);
        }
        else {
          lVar23 = lVar23 * 2;
          puVar17 = puVar27;
          if (lVar23 != 0) goto LAB_1802e099e;
        }
        if (puVar18 != puVar15) {
// WARNING: Subroutine does not return
          memmove(puVar17,puVar18,(int64_t)puVar15 - (int64_t)puVar18);
        }
        *puVar17 = uVar6;
        if (*(int64_t *)(param_1 + 0x2d0) != 0) {
// WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        *(uint64_t **)(param_1 + 0x2d0) = puVar17;
        *(uint64_t **)(param_1 + 0x2d8) = puVar17 + 1;
        *(uint64_t **)(param_1 + 0x2e0) = puVar17 + lVar23;
        iVar25 = (int)local_var_1a0;
      }
      uVar24 = iVar25 + 1;
      puVar18 = (uint64_t *)(uint64_t)uVar24;
      local_var_1a0 = (uint64_t *)CONCAT44(local_var_1a0._4_4_,uVar24);
      pplocal_var_1b8 = pplocal_var_1b8 + 1;
      lVar23 = *(int64_t *)(param_2 + 0x148);
    } while ((uint64_t)(int64_t)(int)uVar24 <
             (uint64_t)(*(int64_t *)(param_2 + 0x150) - lVar23 >> 3));
  }
  lVar23 = lStack_1c0;
  if (((((*(int64_t *)(lStack_1c0 + 0x123f0) == 0) || (*(int64_t *)(lStack_1c0 + 0x12400) == 0))
       || (*(int64_t *)(lStack_1c0 + 0x123f8) == 0)) ||
      (((local_var_1c4 != 0 || (*(char *)(param_2 + 0x5e0) != '\0')) ||
       (((*(byte *)(lStack_1c0 + 0x1bd9) & 2) != 0 ||
        ((*(int64_t *)(param_1 + 0xa0) != 0 || (*(int64_t *)(param_1 + 0x90) != 0)))))))) ||
     (fVar30 = (float)*(int *)(param_1 + 0x30) * *(float *)(param_1 + 0x34),
     fVar29 = *(float *)(lStack_1c0 + 0x124) -
              (*(float *)((int64_t)aplStack_1b0[0] + 0x34) + fVar30 * 0.5),
     fVar31 = *(float *)(lStack_1c0 + 0x120) - (*(float *)(aplStack_1b0[0] + 6) + fVar30 * 0.5),
     fVar30 = (fVar30 * fVar30 + fVar30 * fVar30) * *(float *)(system_main_module_state + 0x388),
     fVar31 * fVar31 + fVar29 * fVar29 <= fVar30 + fVar30)) {
    uVar12 = 0;
  }
  else {
    uVar12 = 1;
  }
  param_1[0x2c] = uVar12;
  puVar18 = (uint64_t *)function_0bfec0();
  if (param_6 == '\0') {
    iVar25 = *(int *)(lVar23 + 8);
    puVar15 = puVar18;
    if (((iVar25 != -1) &&
        (puVar15 = (uint64_t *)puVar18[(int64_t)iVar25 + 0x2cf],
        (uint64_t *)puVar18[(int64_t)iVar25 + 0x2cf] == (uint64_t *)0x0)) &&
       (puVar15 = (uint64_t *)0x0, iVar25 - 4U < 2)) {
      puVar15 = *(uint64_t **)(lVar23 + 0x10);
    }
  }
  else {
    puVar15 = (uint64_t *)puVar18[(int64_t)*(int *)(system_parameter_buffer + 0x13e0) + 0x2cf];
    if (((uint64_t *)puVar18[(int64_t)*(int *)(system_parameter_buffer + 0x13e0) + 0x2cf] ==
         (uint64_t *)0x0) && (puVar15 = puVar27, *(int *)(system_parameter_buffer + 0x13e0) - 4U < 2)) {
      puVar15 = *(uint64_t **)(system_parameter_buffer + 0x13e8);
    }
  }
  uVar19 = function_2e11c0(param_1,lVar23,&plocal_var_f8,param_2);
  uVar24 = *(uint *)(lVar23 + 0x1c64);
  uVar14 = function_24c250(lVar23,0);
  uVar14 = *(uint *)(lVar23 + 0x1b8) & (uVar24 | uVar14);
  uVar24 = uVar14 & 0xff7ffdff;
  if (local_var_1c4 == 0) {
    uVar24 = uVar14;
  }
  uVar14 = uVar24 & 0x7f5fd98f;
  if (param_1[0x2c] == '\0') {
    uVar14 = uVar24 & 0x7f5fdb9f;
  }
  if (local_var_1c4 == 0) {
    uVar14 = uVar14 & *(uint *)(lStack_1c0 + 0x1bc);
  }
  bStack_1c6 = *(byte *)(lStack_1c0 + 6) & 1;
  local_var_198._0_6_ = CONCAT24(9,uVar14);
  plStack_138 = (int64_t *)0x0;
  pplocal_var_1b8 = &plocal_var_130;
  plocal_var_130 = &system_data_buffer_ptr;
  local_var_118 = 0;
  lStack_128 = 0;
  local_var_120 = 0;
  plStack_100 = (int64_t *)0x0;
  local_var_144 = local_var_198._4_4_;
  local_var_140 = (uint)bStack_1c6;
  local_var_110 = 0;
  local_var_10c = 0;
  local_var_108 = 0;
  local_var_104 = 0;
  aplStack_1b0[0] = param_7;
  local_var_1a0 = (uint64_t *)uVar19;
  plocal_var_158 = puVar15;
  local_var_150 = uVar19;
  local_var_148 = uVar14;
  if (param_7 != (int64_t *)0x0) {
    (**(code **)(*param_7 + 0x28))(param_7);
  }
  plVar7 = plStack_138;
  aplStack_1b0[0] = plStack_138;
  plStack_138 = param_7;
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x38))();
  }
  uVar24 = uVar26;
  if (*(int *)(lStack_1c0 + 8) != -1) {
    uVar24 = *(uint *)(lStack_1c0 + 0x18);
  }
  if (((uVar24 & 1) != 0) || (cStack_1c8 = '\x01', param_1[0x2c] != '\0')) {
    cStack_1c8 = '\0';
  }
  puVar27 = (uint64_t *)(param_2 + 0x578);
  puVar18 = *(uint64_t **)(param_2 + 0x588);
  puVar17 = puVar27;
  if (puVar18 == (uint64_t *)0x0) {
LAB_1802e0d97:
    puVar20 = puVar27;
  }
  else {
    do {
      puVar22 = (uint64_t *)puVar18[4];
      if (((puVar22 < puVar15) || ((puVar22 <= puVar15 && ((uint64_t)puVar18[5] < uVar19)))) ||
         ((puVar22 <= puVar15 &&
          (((uint64_t)puVar18[5] <= uVar19 && (*(uint *)(puVar18 + 6) < uVar14)))))) {
        bVar10 = true;
        puVar22 = (uint64_t *)*puVar18;
      }
      else {
        bVar10 = false;
        puVar22 = (uint64_t *)puVar18[1];
      }
      puVar20 = puVar18;
      if (bVar10) {
        puVar20 = puVar17;
      }
      puVar17 = puVar20;
      puVar18 = puVar22;
    } while (puVar22 != (uint64_t *)0x0);
    if ((((puVar20 == puVar27) || (puVar18 = (uint64_t *)puVar20[4], puVar15 < puVar18)) ||
        ((puVar15 <= puVar18 && (uVar19 < (uint64_t)puVar20[5])))) ||
       (((puVar15 <= puVar18 && (uVar19 <= (uint64_t)puVar20[5])) &&
        (uVar14 < *(uint *)(puVar20 + 6))))) goto LAB_1802e0d97;
  }
  local_var_1a0 = puVar15;
  local_var_198 = uVar19;
  local_var_190 = uVar14;
  if (puVar20 == puVar27) {
    function_1eb9b0(&plocal_var_f8);
    plVar7 = plStack_138;
    plocal_var_f8 = plocal_var_158;
    local_var_f0 = local_var_150;
    local_var_e8 = CONCAT44(local_var_144,local_var_148);
    local_var_e0 = CONCAT44(local_var_e0._4_4_,local_var_140);
    aplStack_1b0[0] = plStack_138;
    if (plStack_138 != (int64_t *)0x0) {
      (**(code **)(*plStack_138 + 0x28))(plStack_138);
    }
    plVar21 = plStack_d8;
    aplStack_1b0[0] = plStack_d8;
    plStack_d8 = plVar7;
    if (plVar21 != (int64_t *)0x0) {
      (**(code **)(*plVar21 + 0x38))();
    }
    SystemCore_ConfigurationHandler0(&local_var_d0,&plocal_var_130);
    plVar7 = plStack_100;
    local_var_b0 = CONCAT44(local_var_10c,local_var_110);
    local_var_a8 = CONCAT44(local_var_104,local_var_108);
    aplStack_1b0[0] = plStack_100;
    uVar28 = local_var_110;
    if (plStack_100 != (int64_t *)0x0) {
      uVar28 = (**(code **)(*plStack_100 + 0x28))(plStack_100);
    }
    plVar21 = plStack_a0;
    aplStack_1b0[0] = plStack_a0;
    plStack_a0 = plVar7;
    if (plVar21 != (int64_t *)0x0) {
      uVar28 = (**(code **)(*plVar21 + 0x38))();
    }
    local_var_50 = 0x11;
    local_var_58 = uVar26;
    if (cStack_1c8 != '\0') {
      local_var_58 = *(uint *)(param_2 + 0x628);
    }
    plVar7 = *(int64_t **)(param_2 + 0x5d8);
    if (plVar7 != (int64_t *)0x0) {
      aplStack_1b0[0] = plVar7;
      uVar28 = (**(code **)(*plVar7 + 0x28))(plVar7);
    }
    aplStack_1b0[0] = plStack_d8;
    if (plStack_d8 != (int64_t *)0x0) {
      lVar23 = *plStack_d8;
      plStack_d8 = plVar7;
      uVar28 = (**(code **)(lVar23 + 0x38))();
      plVar7 = plStack_d8;
    }
    plStack_d8 = plVar7;
    cVar13 = function_1d83e0(uVar28,&plocal_var_f8);
    cStack_1c7 = cVar13 == '\0';
    if (cVar13 != '\0') {
      plVar7 = (int64_t *)(param_2 + 0x578);
      bVar10 = true;
      plVar21 = plVar7;
      plVar11 = *(int64_t **)(param_2 + 0x588);
      while (plVar11 != (int64_t *)0x0) {
        puVar27 = (uint64_t *)plVar11[4];
        plVar21 = plVar11;
        if (((puVar15 < puVar27) || ((puVar15 <= puVar27 && (uVar19 < (uint64_t)plVar11[5])))) ||
           ((puVar15 <= puVar27 &&
            ((uVar19 <= (uint64_t)plVar11[5] && (uVar14 < *(uint *)(plVar11 + 6))))))) {
          bVar10 = true;
          plVar11 = (int64_t *)plVar11[1];
        }
        else {
          bVar10 = false;
          plVar11 = (int64_t *)*plVar11;
        }
      }
      aplStack_1b0[0] = plVar21;
      if (bVar10) {
        if (plVar21 == *(int64_t **)(param_2 + 0x580)) goto LAB_1802e0f33;
        plVar21 = (int64_t *)Function_e2d50782(plVar21);
      }
      puVar27 = (uint64_t *)plVar21[4];
      if (((puVar27 < puVar15) || ((puVar27 <= puVar15 && ((uint64_t)plVar21[5] < uVar19)))) ||
         ((puVar27 <= puVar15 &&
          (((uint64_t)plVar21[5] <= uVar19 && (*(uint *)(plVar21 + 6) < uVar14)))))) {
LAB_1802e0f33:
        lVar23 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x38,*(int8_t *)(param_2 + 0x5a0));
        *(uint64_t **)(lVar23 + 0x20) = puVar15;
        *(uint64_t *)(lVar23 + 0x28) = uVar19;
        *(uint *)(lVar23 + 0x30) = uVar14;
        if ((((aplStack_1b0[0] == plVar7) ||
             (puVar27 = (uint64_t *)aplStack_1b0[0][4], puVar15 < puVar27)) ||
            ((puVar15 <= puVar27 && (uVar19 < (uint64_t)aplStack_1b0[0][5])))) ||
           ((puVar15 <= puVar27 &&
            ((uVar19 <= (uint64_t)aplStack_1b0[0][5] && (uVar14 < *(uint *)(aplStack_1b0[0] + 6))))
            ))) {
          uVar28 = 0;
        }
        else {
          uVar28 = 1;
        }
// WARNING: Subroutine does not return
        SystemStateController(lVar23,aplStack_1b0[0],plVar7,uVar28);
      }
    }
    function_1c92a0(&plocal_var_f8);
    if (cStack_1c7 != '\0') {
      SystemCore_ConfigurationHandler0(&plocal_var_130,*(uint64_t *)(param_2 + 0x168));
      aplStack_1b0[0] =
           (int64_t *)function_3d0880(param_2,&plocal_var_188,*(uint64_t *)(param_2 + 0x170));
      if (0 < (int)aplStack_1b0[0][2]) {
        CoreMemoryPoolProcessor(&plocal_var_130,local_var_120 + (int)aplStack_1b0[0][2]);
// WARNING: Subroutine does not return
        memcpy((uint64_t)local_var_120 + lStack_128,aplStack_1b0[0][1],
               (int64_t)((int)aplStack_1b0[0][2] + 1));
      }
      plocal_var_188 = (uint64_t *)&system_data_buffer_ptr;
      if (local_var_180 != 0) {
// WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
      local_var_180 = 0;
      local_var_170 = (uint64_t)local_var_170._4_4_ << 0x20;
      plocal_var_188 = (uint64_t *)&system_state_ptr;
    }
  }
  puVar27 = (uint64_t *)(param_2 + 0x5a8);
  puVar18 = puVar27;
  puVar17 = *(uint64_t **)(param_2 + 0x5b8);
  if (*(uint64_t **)(param_2 + 0x5b8) == (uint64_t *)0x0) {
LAB_1802e10c7:
    puVar18 = puVar27;
  }
  else {
    do {
      puVar22 = (uint64_t *)puVar17[4];
      if (((puVar22 < puVar15) || ((puVar22 <= puVar15 && ((uint64_t)puVar17[5] < uVar19)))) ||
         ((puVar22 <= puVar15 &&
          (((uint64_t)puVar17[5] <= uVar19 && (*(uint *)(puVar17 + 6) < uVar14)))))) {
        bVar10 = true;
        puVar22 = (uint64_t *)*puVar17;
      }
      else {
        bVar10 = false;
        puVar22 = (uint64_t *)puVar17[1];
      }
      if (bVar10) {
        puVar17 = puVar18;
      }
      puVar18 = puVar17;
      puVar17 = puVar22;
    } while (puVar22 != (uint64_t *)0x0);
    if ((((puVar18 == puVar27) || (puVar17 = (uint64_t *)puVar18[4], puVar15 < puVar17)) ||
        ((puVar15 <= puVar17 && (uVar19 < (uint64_t)puVar18[5])))) ||
       (((puVar15 <= puVar17 && (uVar19 <= (uint64_t)puVar18[5])) &&
        (uVar14 < *(uint *)(puVar18 + 6))))) goto LAB_1802e10c7;
  }
  if (puVar18 == puVar27) {
    if (cStack_1c8 != '\0') {
      uVar26 = *(uint *)(param_2 + 0x628);
    }
    local_var_1d8 = uVar26;
    lVar23 = function_3d1940(lStack_1c0,&plocal_var_158);
    *(int64_t *)(param_1 + 0x58) = lVar23;
    if (lVar23 == 0) goto LAB_1802e117b;
    plocal_var_188 = local_var_1a0;
    local_var_180 = local_var_198;
    local_var_178 = CONCAT44(local_var_18c,local_var_190);
    local_var_170 = lVar23;
    function_2e13b0(puVar27,aplStack_1b0);
  }
  else {
    *(uint64_t *)(param_1 + 0x58) = puVar18[7];
  }
  if (local_var_1c4 == 1) {
    param_1[0x51] = 2;
  }
  else {
    param_1[0x51] = 3 < local_var_1c4 - 2;
  }
  param_1[0x50] = *(char *)(lStack_1c0 + 0x170) != '\0';
  if (local_var_1c4 - 3 < 3) {
    *(uint *)(param_1 + 0x44) = local_var_1c4 - 3;
  }
  else {
    *(int32_t *)(param_1 + 0x44) = 0xffffffff;
  }
LAB_1802e117b:
  function_09e960(&plocal_var_158);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_1f8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_2e11c0(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)
{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t *plStackX_8;
  plVar3 = (int64_t *)function_0c0570(system_system_data_memory,&plStackX_8,param_3,param_4,0xfffffffffffffffe);
  uVar5 = *(uint64_t *)(*plVar3 + 0x140);
  if (*(int *)(param_2 + 0x9a3c) == 0) {
    uVar5 = uVar5 & ~*(uint64_t *)(*plVar3 + 0x390);
  }
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  if ((*(char *)(param_2 + 0x11cf4) != '\0') &&
     (((iVar1 = *(int *)(param_3 + 0x40), iVar1 == 2 || (iVar1 < 0)) || (5 < iVar1)))) {
    uVar5 = uVar5 | *(uint64_t *)(param_4 + 0x630);
  }
  if (((*(char *)(param_4 + 0x560) != '\0') && (*(int *)(param_3 + 0x40) != 1)) &&
     (*(char *)(param_1 + 0x2c) == '\0')) {
    uVar5 = uVar5 | *(uint64_t *)(param_4 + 0x640);
  }
  iVar1 = *(int *)(param_3 + 0x40);
  if (iVar1 - 3U < 3) {
    uVar5 = uVar5 | *(uint64_t *)(param_4 + 0x648);
  }
  if (iVar1 == 2) {
    uVar5 = uVar5 | *(uint64_t *)(param_4 + 0x650);
  }
  lVar2 = *(int64_t *)(param_1 + 0x90);
  if (((lVar2 != 0) || (*(int64_t *)(param_1 + 0x98) != 0)) && ((iVar1 - 2U < 4 || (iVar1 == 0))))
  {
    uVar4 = *(uint64_t *)(param_4 + 0x658);
    uVar5 = uVar5 | uVar4;
    if (lVar2 != 0) {
      uVar4 = *(uint64_t *)(param_4 + 0x660);
    }
    uVar5 = uVar5 | uVar4;
  }
  if ((((lVar2 != 0) || (*(int64_t *)(param_1 + 0xa0) != 0)) && (*(int *)(param_1 + 0xa8) != 0)) &&
     ((iVar1 - 2U < 4 || (iVar1 == 0)))) {
    uVar5 = uVar5 | *(uint64_t *)(param_4 + 0x668);
  }
  if (*(char *)(param_4 + 0x561) != '\0') {
    uVar5 = uVar5 | *(uint64_t *)(param_4 + 0x680);
  }
  if (*(char *)(param_1 + 0x2c) != '\0') {
    uVar5 = uVar5 | *(uint64_t *)(param_4 + 0x678);
  }
  return uVar5;
}
uint function_2e1320(int64_t param_1,int64_t param_2,int64_t param_3)
{
  uint uVar1;
  uint uVar2;
  uVar2 = *(uint *)(param_2 + 0x1c64);
  uVar1 = function_24c250(param_2,0);
  uVar1 = *(uint *)(param_2 + 0x1b8) & (uVar2 | uVar1);
  uVar2 = uVar1 & 0xff7ffdff;
  if (*(int *)(param_3 + 0x40) == 0) {
    uVar2 = uVar1;
  }
  uVar1 = 0x7f5fd98f;
  if (*(char *)(param_1 + 0x2c) == '\0') {
    uVar1 = 0x7f5fdb9f;
  }
  uVar2 = uVar2 & uVar1;
  if (*(int *)(param_3 + 0x40) == 0) {
    uVar2 = *(uint *)(param_2 + 0x1bc) & uVar2;
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2e13b0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4)
void function_2e13b0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4)
{
  uint64_t uVar1;
  uint64_t uVar2;
  bool bVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  lVar4 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x40,*(int8_t *)(param_1 + 5));
  *(uint64_t *)(lVar4 + 0x20) = *param_4;
  *(uint64_t *)(lVar4 + 0x28) = param_4[1];
  *(int32_t *)(lVar4 + 0x30) = *(int32_t *)(param_4 + 2);
  *(uint64_t *)(lVar4 + 0x38) = param_4[3];
  bVar3 = true;
  puVar6 = param_1;
  if ((uint64_t *)param_1[2] != (uint64_t *)0x0) {
    uVar1 = *(uint64_t *)(lVar4 + 0x20);
    puVar5 = (uint64_t *)param_1[2];
    do {
      puVar6 = puVar5;
      uVar2 = puVar6[4];
      if (((uVar1 < uVar2) ||
          ((uVar1 <= uVar2 && (*(uint64_t *)(lVar4 + 0x28) < (uint64_t)puVar6[5])))) ||
         ((uVar1 <= uVar2 &&
          ((*(uint64_t *)(lVar4 + 0x28) <= (uint64_t)puVar6[5] &&
           (*(uint *)(lVar4 + 0x30) < *(uint *)(puVar6 + 6))))))) {
        puVar5 = (uint64_t *)puVar6[1];
        bVar3 = true;
      }
      else {
        puVar5 = (uint64_t *)*puVar6;
        bVar3 = false;
      }
    } while (puVar5 != (uint64_t *)0x0);
  }
  puVar5 = puVar6;
  if (bVar3) {
    if (puVar6 != (uint64_t *)param_1[1]) {
      puVar5 = (uint64_t *)Function_e2d50782(puVar6);
      goto LAB_1802e1479;
    }
  }
  else {
LAB_1802e1479:
    uVar1 = puVar5[4];
    uVar2 = *(uint64_t *)(lVar4 + 0x20);
    if (((uVar2 <= uVar1) &&
        ((uVar2 < uVar1 || (*(uint64_t *)(lVar4 + 0x28) <= (uint64_t)puVar5[5])))) &&
       ((uVar2 < uVar1 ||
        ((*(uint64_t *)(lVar4 + 0x28) < (uint64_t)puVar5[5] ||
         (*(uint *)(lVar4 + 0x30) <= *(uint *)(puVar5 + 6))))))) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(lVar4);
    }
  }
  if (puVar6 != param_1) {
    uVar1 = *(uint64_t *)(lVar4 + 0x20);
    uVar2 = puVar6[4];
    if (((uVar2 <= uVar1) &&
        ((uVar2 < uVar1 || ((uint64_t)puVar6[5] <= *(uint64_t *)(lVar4 + 0x28))))) &&
       ((uVar2 < uVar1 ||
        (((uint64_t)puVar6[5] < *(uint64_t *)(lVar4 + 0x28) ||
         (*(uint *)(puVar6 + 6) <= *(uint *)(lVar4 + 0x30))))))) {
      uVar7 = 1;
      goto LAB_1802e14fb;
    }
  }
  uVar7 = 0;
LAB_1802e14fb:
// WARNING: Subroutine does not return
  SystemStateController(lVar4,puVar6,param_1,uVar7);
}
// 函数: void function_2e1540(int64_t param_1)
void function_2e1540(int64_t param_1)
{
  function_095420();
  if (*(int64_t **)(param_1 + 0x18) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x18) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x10) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x10) + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address