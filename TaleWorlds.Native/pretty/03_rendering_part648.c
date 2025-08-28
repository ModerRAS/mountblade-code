#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part648.c - 2 个函数
// 函数: void function_634a60(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void function_634a60(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int32_t *param_5,int8_t param_6,int32_t param_7)
{
  int iVar1;
  int8_t stack_array_f8 [32];
  int32_t local_var_d8;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  int8_t stack_array_b8 [128];
  uint64_t local_var_38;
  local_var_c8 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_f8;
  local_var_c0 = param_1;
  iVar1 = _Mtx_lock();
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  Function_dd627547(stack_array_b8,param_2,param_3,param_4);
  local_var_d8 = param_7;
  function_633220(param_1,stack_array_b8,*param_5,param_6);
  iVar1 = _Mtx_unlock(param_1);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_f8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_634b20(int64_t param_1)
void function_634b20(int64_t param_1)
{
  int32_t *puVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int iVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  int64_t lVar14;
  uint64_t *puVar15;
  int64_t lVar16;
  uint64_t *puVar17;
  uint uVar18;
  uint64_t *puVar19;
  lVar7 = render_system_data_ui;
  iVar8 = _Mtx_lock();
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  iVar8 = _Mtx_lock(lVar7);
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  puVar13 = (uint64_t *)0x0;
  lVar14 = *(int64_t *)(lVar7 + 0x98);
  lVar10 = *(int64_t *)(lVar7 + 0xa0) - lVar14;
  lVar16 = lVar10 >> 0x3f;
  puVar15 = puVar13;
  puVar19 = puVar13;
  if (lVar10 / 0x30 + lVar16 != lVar16) {
    do {
      puVar17 = *(uint64_t **)(param_1 + 0xa0);
      if (puVar17 < *(uint64_t **)(param_1 + 0xa8)) {
        *(uint64_t **)(param_1 + 0xa0) = puVar17 + 6;
        puVar17[4] = 0xffffffffffffffff;
        uVar6 = ((uint64_t *)((int64_t)puVar19 + lVar14))[1];
        *puVar17 = *(uint64_t *)((int64_t)puVar19 + lVar14);
        puVar17[1] = uVar6;
        puVar1 = (int32_t *)((int64_t)puVar19 + lVar14 + 0x10);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(int32_t *)(puVar17 + 2) = *puVar1;
        *(int32_t *)((int64_t)puVar17 + 0x14) = uVar3;
        *(int32_t *)(puVar17 + 3) = uVar4;
        *(int32_t *)((int64_t)puVar17 + 0x1c) = uVar5;
        *(int32_t *)(puVar17 + 4) = *(int32_t *)((int64_t)puVar19 + lVar14 + 0x20);
        *(int32_t *)((int64_t)puVar17 + 0x24) =
             *(int32_t *)((int64_t)puVar19 + lVar14 + 0x24);
        *(int32_t *)((int64_t)puVar17 + 0x2c) =
             *(int32_t *)((int64_t)puVar19 + lVar14 + 0x2c);
        *(int32_t *)(puVar17 + 5) = *(int32_t *)((int64_t)puVar19 + lVar14 + 0x28);
      }
      else {
        puVar12 = *(uint64_t **)(param_1 + 0x98);
        lVar16 = ((int64_t)puVar17 - (int64_t)puVar12) / 0x30;
        if (lVar16 == 0) {
          lVar16 = 1;
LAB_180634c56:
          puVar9 = (uint64_t *)
                   CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar16 * 0x30,*(int8_t *)(param_1 + 0xb0));
          puVar17 = *(uint64_t **)(param_1 + 0xa0);
          puVar12 = *(uint64_t **)(param_1 + 0x98);
        }
        else {
          lVar16 = lVar16 * 2;
          puVar9 = puVar13;
          if (lVar16 != 0) goto LAB_180634c56;
        }
        puVar11 = puVar9;
        if (puVar12 != puVar17) {
          lVar10 = (int64_t)puVar9 - (int64_t)puVar12;
          puVar12 = puVar12 + 4;
          do {
            *(uint64_t *)(lVar10 + (int64_t)puVar12) = 0xffffffffffffffff;
            uVar6 = puVar12[-3];
            *puVar11 = puVar12[-4];
            puVar11[1] = uVar6;
            uVar6 = puVar12[-1];
            puVar2 = (uint64_t *)(lVar10 + -0x10 + (int64_t)puVar12);
            *puVar2 = puVar12[-2];
            puVar2[1] = uVar6;
            *(int32_t *)(lVar10 + (int64_t)puVar12) = *(int32_t *)puVar12;
            *(int32_t *)(lVar10 + 4 + (int64_t)puVar12) = *(int32_t *)((int64_t)puVar12 + 4)
            ;
            *(int32_t *)(lVar10 + 0xc + (int64_t)puVar12) =
                 *(int32_t *)((int64_t)puVar12 + 0xc);
            *(int32_t *)(lVar10 + 8 + (int64_t)puVar12) = *(int32_t *)(puVar12 + 1);
            puVar11 = puVar11 + 6;
            puVar2 = puVar12 + 2;
            puVar12 = puVar12 + 6;
          } while (puVar2 != puVar17);
        }
        puVar11[4] = 0xffffffffffffffff;
        uVar6 = ((uint64_t *)((int64_t)puVar19 + lVar14))[1];
        *puVar11 = *(uint64_t *)((int64_t)puVar19 + lVar14);
        puVar11[1] = uVar6;
        puVar1 = (int32_t *)((int64_t)puVar19 + lVar14 + 0x10);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(int32_t *)(puVar11 + 2) = *puVar1;
        *(int32_t *)((int64_t)puVar11 + 0x14) = uVar3;
        *(int32_t *)(puVar11 + 3) = uVar4;
        *(int32_t *)((int64_t)puVar11 + 0x1c) = uVar5;
        *(int32_t *)(puVar11 + 4) = *(int32_t *)((int64_t)puVar19 + lVar14 + 0x20);
        *(int32_t *)((int64_t)puVar11 + 0x24) =
             *(int32_t *)((int64_t)puVar19 + lVar14 + 0x24);
        *(int32_t *)((int64_t)puVar11 + 0x2c) =
             *(int32_t *)((int64_t)puVar19 + lVar14 + 0x2c);
        *(int32_t *)(puVar11 + 5) = *(int32_t *)((int64_t)puVar19 + lVar14 + 0x28);
        if (*(int64_t *)(param_1 + 0x98) != 0) {
// WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        *(uint64_t **)(param_1 + 0x98) = puVar9;
        *(uint64_t **)(param_1 + 0xa0) = puVar11 + 6;
        *(uint64_t **)(param_1 + 0xa8) = puVar9 + lVar16 * 6;
      }
      uVar18 = (int)puVar15 + 1;
      lVar14 = *(int64_t *)(lVar7 + 0x98);
      puVar15 = (uint64_t *)(uint64_t)uVar18;
      puVar19 = puVar19 + 6;
    } while ((uint64_t)(int64_t)(int)uVar18 <
             (uint64_t)((*(int64_t *)(lVar7 + 0xa0) - lVar14) / 0x30));
  }
  lVar14 = *(int64_t *)(lVar7 + 0xb8);
  lVar10 = *(int64_t *)(lVar7 + 0xc0) - lVar14;
  lVar16 = lVar10 >> 0x3f;
  puVar15 = puVar13;
  puVar19 = puVar13;
  if (lVar10 / 0x30 + lVar16 != lVar16) {
    do {
      puVar17 = *(uint64_t **)(param_1 + 0xc0);
      if (puVar17 < *(uint64_t **)(param_1 + 200)) {
        *(uint64_t **)(param_1 + 0xc0) = puVar17 + 6;
        puVar17[4] = 0xffffffffffffffff;
        uVar6 = ((uint64_t *)((int64_t)puVar19 + lVar14))[1];
        *puVar17 = *(uint64_t *)((int64_t)puVar19 + lVar14);
        puVar17[1] = uVar6;
        puVar1 = (int32_t *)((int64_t)puVar19 + lVar14 + 0x10);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(int32_t *)(puVar17 + 2) = *puVar1;
        *(int32_t *)((int64_t)puVar17 + 0x14) = uVar3;
        *(int32_t *)(puVar17 + 3) = uVar4;
        *(int32_t *)((int64_t)puVar17 + 0x1c) = uVar5;
        *(int32_t *)(puVar17 + 4) = *(int32_t *)((int64_t)puVar19 + lVar14 + 0x20);
        *(int32_t *)((int64_t)puVar17 + 0x24) =
             *(int32_t *)((int64_t)puVar19 + lVar14 + 0x24);
        *(int32_t *)((int64_t)puVar17 + 0x2c) =
             *(int32_t *)((int64_t)puVar19 + lVar14 + 0x2c);
        *(int32_t *)(puVar17 + 5) = *(int32_t *)((int64_t)puVar19 + lVar14 + 0x28);
      }
      else {
        puVar12 = *(uint64_t **)(param_1 + 0xb8);
        lVar16 = ((int64_t)puVar17 - (int64_t)puVar12) / 0x30;
        if (lVar16 == 0) {
          lVar16 = 1;
LAB_180634e66:
          puVar9 = (uint64_t *)
                   CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar16 * 0x30,*(int8_t *)(param_1 + 0xd0));
          puVar17 = *(uint64_t **)(param_1 + 0xc0);
          puVar12 = *(uint64_t **)(param_1 + 0xb8);
        }
        else {
          lVar16 = lVar16 * 2;
          puVar9 = puVar13;
          if (lVar16 != 0) goto LAB_180634e66;
        }
        puVar11 = puVar9;
        if (puVar12 != puVar17) {
          lVar10 = (int64_t)puVar9 - (int64_t)puVar12;
          puVar12 = puVar12 + 4;
          do {
            *(uint64_t *)(lVar10 + (int64_t)puVar12) = 0xffffffffffffffff;
            uVar6 = puVar12[-3];
            *puVar11 = puVar12[-4];
            puVar11[1] = uVar6;
            uVar6 = puVar12[-1];
            puVar2 = (uint64_t *)(lVar10 + -0x10 + (int64_t)puVar12);
            *puVar2 = puVar12[-2];
            puVar2[1] = uVar6;
            *(int32_t *)(lVar10 + (int64_t)puVar12) = *(int32_t *)puVar12;
            *(int32_t *)(lVar10 + 4 + (int64_t)puVar12) = *(int32_t *)((int64_t)puVar12 + 4)
            ;
            *(int32_t *)(lVar10 + 0xc + (int64_t)puVar12) =
                 *(int32_t *)((int64_t)puVar12 + 0xc);
            *(int32_t *)(lVar10 + 8 + (int64_t)puVar12) = *(int32_t *)(puVar12 + 1);
            puVar11 = puVar11 + 6;
            puVar2 = puVar12 + 2;
            puVar12 = puVar12 + 6;
          } while (puVar2 != puVar17);
        }
        puVar11[4] = 0xffffffffffffffff;
        uVar6 = ((uint64_t *)((int64_t)puVar19 + lVar14))[1];
        *puVar11 = *(uint64_t *)((int64_t)puVar19 + lVar14);
        puVar11[1] = uVar6;
        puVar1 = (int32_t *)((int64_t)puVar19 + lVar14 + 0x10);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(int32_t *)(puVar11 + 2) = *puVar1;
        *(int32_t *)((int64_t)puVar11 + 0x14) = uVar3;
        *(int32_t *)(puVar11 + 3) = uVar4;
        *(int32_t *)((int64_t)puVar11 + 0x1c) = uVar5;
        *(int32_t *)(puVar11 + 4) = *(int32_t *)((int64_t)puVar19 + lVar14 + 0x20);
        *(int32_t *)((int64_t)puVar11 + 0x24) =
             *(int32_t *)((int64_t)puVar19 + lVar14 + 0x24);
        *(int32_t *)((int64_t)puVar11 + 0x2c) =
             *(int32_t *)((int64_t)puVar19 + lVar14 + 0x2c);
        *(int32_t *)(puVar11 + 5) = *(int32_t *)((int64_t)puVar19 + lVar14 + 0x28);
        if (*(int64_t *)(param_1 + 0xb8) != 0) {
// WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        *(uint64_t **)(param_1 + 0xb8) = puVar9;
        *(uint64_t **)(param_1 + 0xc0) = puVar11 + 6;
        *(uint64_t **)(param_1 + 200) = puVar9 + lVar16 * 6;
      }
      uVar18 = (int)puVar15 + 1;
      lVar14 = *(int64_t *)(lVar7 + 0xb8);
      puVar15 = (uint64_t *)(uint64_t)uVar18;
      puVar19 = puVar19 + 6;
    } while ((uint64_t)(int64_t)(int)uVar18 <
             (uint64_t)((*(int64_t *)(lVar7 + 0xc0) - lVar14) / 0x30));
  }
  lVar14 = *(int64_t *)(lVar7 + 0x118);
  lVar10 = *(int64_t *)(lVar7 + 0x120) - lVar14;
  lVar16 = lVar10 >> 0x3f;
  puVar15 = puVar13;
  puVar19 = puVar13;
  if (lVar10 / 0x44 + lVar16 != lVar16) {
    do {
      puVar17 = *(uint64_t **)(param_1 + 0x120);
      if (puVar17 < *(uint64_t **)(param_1 + 0x128)) {
        *(uint64_t *)(param_1 + 0x120) = (int64_t)puVar17 + 0x44;
        uVar6 = ((uint64_t *)((int64_t)puVar15 + lVar14))[1];
        *puVar17 = *(uint64_t *)((int64_t)puVar15 + lVar14);
        puVar17[1] = uVar6;
        puVar12 = (uint64_t *)((int64_t)puVar15 + lVar14 + 0x10);
        uVar6 = puVar12[1];
        puVar17[2] = *puVar12;
        puVar17[3] = uVar6;
        puVar1 = (int32_t *)((int64_t)puVar15 + lVar14 + 0x20);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(int32_t *)(puVar17 + 4) = *puVar1;
        *(int32_t *)((int64_t)puVar17 + 0x24) = uVar3;
        *(int32_t *)(puVar17 + 5) = uVar4;
        *(int32_t *)((int64_t)puVar17 + 0x2c) = uVar5;
        puVar12 = (uint64_t *)((int64_t)puVar15 + lVar14 + 0x30);
        uVar6 = puVar12[1];
        puVar17[6] = *puVar12;
        puVar17[7] = uVar6;
        *(int32_t *)(puVar17 + 8) = *(int32_t *)((int64_t)puVar15 + lVar14 + 0x40);
      }
      else {
        puVar12 = *(uint64_t **)(param_1 + 0x118);
        lVar16 = ((int64_t)puVar17 - (int64_t)puVar12) / 0x44;
        if (lVar16 == 0) {
          lVar16 = 1;
LAB_180635074:
          puVar9 = (uint64_t *)
                   CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar16 * 0x44,*(int8_t *)(param_1 + 0x130));
          puVar17 = *(uint64_t **)(param_1 + 0x120);
          puVar12 = *(uint64_t **)(param_1 + 0x118);
          puVar11 = puVar9;
        }
        else {
          lVar16 = lVar16 * 2;
          puVar9 = puVar13;
          puVar11 = puVar13;
          if (lVar16 != 0) goto LAB_180635074;
        }
        for (; puVar12 != puVar17; puVar12 = (uint64_t *)((int64_t)puVar12 + 0x44)) {
          uVar6 = puVar12[1];
          *puVar9 = *puVar12;
          puVar9[1] = uVar6;
          uVar6 = puVar12[3];
          puVar9[2] = puVar12[2];
          puVar9[3] = uVar6;
          uVar6 = puVar12[5];
          puVar9[4] = puVar12[4];
          puVar9[5] = uVar6;
          uVar6 = puVar12[7];
          puVar9[6] = puVar12[6];
          puVar9[7] = uVar6;
          *(int32_t *)(puVar9 + 8) = *(int32_t *)(puVar12 + 8);
          puVar9 = (uint64_t *)((int64_t)puVar9 + 0x44);
        }
        uVar6 = ((uint64_t *)((int64_t)puVar15 + lVar14))[1];
        *puVar9 = *(uint64_t *)((int64_t)puVar15 + lVar14);
        puVar9[1] = uVar6;
        puVar17 = (uint64_t *)((int64_t)puVar15 + lVar14 + 0x10);
        uVar6 = puVar17[1];
        puVar9[2] = *puVar17;
        puVar9[3] = uVar6;
        puVar1 = (int32_t *)((int64_t)puVar15 + lVar14 + 0x20);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(int32_t *)(puVar9 + 4) = *puVar1;
        *(int32_t *)((int64_t)puVar9 + 0x24) = uVar3;
        *(int32_t *)(puVar9 + 5) = uVar4;
        *(int32_t *)((int64_t)puVar9 + 0x2c) = uVar5;
        puVar1 = (int32_t *)((int64_t)puVar15 + lVar14 + 0x30);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(int32_t *)(puVar9 + 6) = *puVar1;
        *(int32_t *)((int64_t)puVar9 + 0x34) = uVar3;
        *(int32_t *)(puVar9 + 7) = uVar4;
        *(int32_t *)((int64_t)puVar9 + 0x3c) = uVar5;
        *(int32_t *)(puVar9 + 8) = *(int32_t *)((int64_t)puVar15 + lVar14 + 0x40);
        if (*(int64_t *)(param_1 + 0x118) != 0) {
// WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        *(uint64_t **)(param_1 + 0x118) = puVar11;
        *(int32_t **)(param_1 + 0x120) = (int32_t *)((int64_t)puVar9 + 0x44);
        *(int32_t **)(param_1 + 0x128) = (int32_t *)(lVar16 * 0x44 + (int64_t)puVar11);
      }
      uVar18 = (int)puVar19 + 1;
      lVar14 = *(int64_t *)(lVar7 + 0x118);
      puVar15 = (uint64_t *)((int64_t)puVar15 + 0x44);
      puVar19 = (uint64_t *)(uint64_t)uVar18;
    } while ((uint64_t)(int64_t)(int)uVar18 <
             (uint64_t)((*(int64_t *)(lVar7 + 0x120) - lVar14) / 0x44));
  }
  lVar14 = *(int64_t *)(lVar7 + 0xf8);
  lVar10 = *(int64_t *)(lVar7 + 0x100) - lVar14;
  lVar16 = lVar10 >> 0x3f;
  puVar15 = puVar13;
  puVar19 = puVar13;
  if (lVar10 / 0x44 + lVar16 != lVar16) {
    do {
      puVar17 = *(uint64_t **)(param_1 + 0x100);
      if (puVar17 < *(uint64_t **)(param_1 + 0x108)) {
        *(uint64_t *)(param_1 + 0x100) = (int64_t)puVar17 + 0x44;
        uVar6 = ((uint64_t *)((int64_t)puVar15 + lVar14))[1];
        *puVar17 = *(uint64_t *)((int64_t)puVar15 + lVar14);
        puVar17[1] = uVar6;
        puVar12 = (uint64_t *)((int64_t)puVar15 + lVar14 + 0x10);
        uVar6 = puVar12[1];
        puVar17[2] = *puVar12;
        puVar17[3] = uVar6;
        puVar1 = (int32_t *)((int64_t)puVar15 + lVar14 + 0x20);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(int32_t *)(puVar17 + 4) = *puVar1;
        *(int32_t *)((int64_t)puVar17 + 0x24) = uVar3;
        *(int32_t *)(puVar17 + 5) = uVar4;
        *(int32_t *)((int64_t)puVar17 + 0x2c) = uVar5;
        puVar12 = (uint64_t *)((int64_t)puVar15 + lVar14 + 0x30);
        uVar6 = puVar12[1];
        puVar17[6] = *puVar12;
        puVar17[7] = uVar6;
        *(int32_t *)(puVar17 + 8) = *(int32_t *)((int64_t)puVar15 + lVar14 + 0x40);
      }
      else {
        puVar12 = *(uint64_t **)(param_1 + 0xf8);
        lVar16 = ((int64_t)puVar17 - (int64_t)puVar12) / 0x44;
        if (lVar16 == 0) {
          lVar16 = 1;
LAB_180635234:
          puVar9 = (uint64_t *)
                   CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar16 * 0x44,*(int8_t *)(param_1 + 0x110));
          puVar17 = *(uint64_t **)(param_1 + 0x100);
          puVar12 = *(uint64_t **)(param_1 + 0xf8);
          puVar11 = puVar9;
        }
        else {
          lVar16 = lVar16 * 2;
          puVar9 = puVar13;
          puVar11 = puVar13;
          if (lVar16 != 0) goto LAB_180635234;
        }
        for (; puVar12 != puVar17; puVar12 = (uint64_t *)((int64_t)puVar12 + 0x44)) {
          uVar6 = puVar12[1];
          *puVar9 = *puVar12;
          puVar9[1] = uVar6;
          uVar6 = puVar12[3];
          puVar9[2] = puVar12[2];
          puVar9[3] = uVar6;
          uVar6 = puVar12[5];
          puVar9[4] = puVar12[4];
          puVar9[5] = uVar6;
          uVar6 = puVar12[7];
          puVar9[6] = puVar12[6];
          puVar9[7] = uVar6;
          *(int32_t *)(puVar9 + 8) = *(int32_t *)(puVar12 + 8);
          puVar9 = (uint64_t *)((int64_t)puVar9 + 0x44);
        }
        uVar6 = ((uint64_t *)((int64_t)puVar15 + lVar14))[1];
        *puVar9 = *(uint64_t *)((int64_t)puVar15 + lVar14);
        puVar9[1] = uVar6;
        puVar17 = (uint64_t *)((int64_t)puVar15 + lVar14 + 0x10);
        uVar6 = puVar17[1];
        puVar9[2] = *puVar17;
        puVar9[3] = uVar6;
        puVar1 = (int32_t *)((int64_t)puVar15 + lVar14 + 0x20);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(int32_t *)(puVar9 + 4) = *puVar1;
        *(int32_t *)((int64_t)puVar9 + 0x24) = uVar3;
        *(int32_t *)(puVar9 + 5) = uVar4;
        *(int32_t *)((int64_t)puVar9 + 0x2c) = uVar5;
        puVar1 = (int32_t *)((int64_t)puVar15 + lVar14 + 0x30);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(int32_t *)(puVar9 + 6) = *puVar1;
        *(int32_t *)((int64_t)puVar9 + 0x34) = uVar3;
        *(int32_t *)(puVar9 + 7) = uVar4;
        *(int32_t *)((int64_t)puVar9 + 0x3c) = uVar5;
        *(int32_t *)(puVar9 + 8) = *(int32_t *)((int64_t)puVar15 + lVar14 + 0x40);
        if (*(int64_t *)(param_1 + 0xf8) != 0) {
// WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        *(uint64_t **)(param_1 + 0xf8) = puVar11;
        *(int32_t **)(param_1 + 0x100) = (int32_t *)((int64_t)puVar9 + 0x44);
        *(int32_t **)(param_1 + 0x108) = (int32_t *)(lVar16 * 0x44 + (int64_t)puVar11);
      }
      uVar18 = (int)puVar19 + 1;
      lVar14 = *(int64_t *)(lVar7 + 0xf8);
      puVar15 = (uint64_t *)((int64_t)puVar15 + 0x44);
      puVar19 = (uint64_t *)(uint64_t)uVar18;
    } while ((uint64_t)(int64_t)(int)uVar18 <
             (uint64_t)((*(int64_t *)(lVar7 + 0x100) - lVar14) / 0x44));
  }
  lVar14 = *(int64_t *)(lVar7 + 0x138);
  lVar10 = *(int64_t *)(lVar7 + 0x140) - lVar14;
  lVar16 = lVar10 >> 0x3f;
  puVar15 = puVar13;
  puVar19 = puVar13;
  if (lVar10 / 0x44 + lVar16 != lVar16) {
    do {
      puVar17 = *(uint64_t **)(param_1 + 0x140);
      if (puVar17 < *(uint64_t **)(param_1 + 0x148)) {
        *(uint64_t *)(param_1 + 0x140) = (int64_t)puVar17 + 0x44;
        uVar6 = ((uint64_t *)(lVar14 + (int64_t)puVar15))[1];
        *puVar17 = *(uint64_t *)(lVar14 + (int64_t)puVar15);
        puVar17[1] = uVar6;
        puVar12 = (uint64_t *)(lVar14 + 0x10 + (int64_t)puVar15);
        uVar6 = puVar12[1];
        puVar17[2] = *puVar12;
        puVar17[3] = uVar6;
        puVar1 = (int32_t *)(lVar14 + 0x20 + (int64_t)puVar15);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(int32_t *)(puVar17 + 4) = *puVar1;
        *(int32_t *)((int64_t)puVar17 + 0x24) = uVar3;
        *(int32_t *)(puVar17 + 5) = uVar4;
        *(int32_t *)((int64_t)puVar17 + 0x2c) = uVar5;
        puVar12 = (uint64_t *)(lVar14 + 0x30 + (int64_t)puVar15);
        uVar6 = puVar12[1];
        puVar17[6] = *puVar12;
        puVar17[7] = uVar6;
        *(int32_t *)(puVar17 + 8) = *(int32_t *)(lVar14 + 0x40 + (int64_t)puVar15);
      }
      else {
        puVar12 = *(uint64_t **)(param_1 + 0x138);
        lVar16 = ((int64_t)puVar17 - (int64_t)puVar12) / 0x44;
        if (lVar16 == 0) {
          lVar16 = 1;
LAB_1806353f4:
          puVar9 = (uint64_t *)
                   CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar16 * 0x44,*(int8_t *)(param_1 + 0x150));
          puVar17 = *(uint64_t **)(param_1 + 0x140);
          puVar12 = *(uint64_t **)(param_1 + 0x138);
          puVar11 = puVar9;
        }
        else {
          lVar16 = lVar16 * 2;
          puVar9 = puVar13;
          puVar11 = puVar13;
          if (lVar16 != 0) goto LAB_1806353f4;
        }
        for (; puVar12 != puVar17; puVar12 = (uint64_t *)((int64_t)puVar12 + 0x44)) {
          uVar6 = puVar12[1];
          *puVar9 = *puVar12;
          puVar9[1] = uVar6;
          uVar6 = puVar12[3];
          puVar9[2] = puVar12[2];
          puVar9[3] = uVar6;
          uVar6 = puVar12[5];
          puVar9[4] = puVar12[4];
          puVar9[5] = uVar6;
          uVar6 = puVar12[7];
          puVar9[6] = puVar12[6];
          puVar9[7] = uVar6;
          *(int32_t *)(puVar9 + 8) = *(int32_t *)(puVar12 + 8);
          puVar9 = (uint64_t *)((int64_t)puVar9 + 0x44);
        }
        uVar6 = ((uint64_t *)(lVar14 + (int64_t)puVar15))[1];
        *puVar9 = *(uint64_t *)(lVar14 + (int64_t)puVar15);
        puVar9[1] = uVar6;
        puVar17 = (uint64_t *)(lVar14 + 0x10 + (int64_t)puVar15);
        uVar6 = puVar17[1];
        puVar9[2] = *puVar17;
        puVar9[3] = uVar6;
        puVar1 = (int32_t *)(lVar14 + 0x20 + (int64_t)puVar15);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(int32_t *)(puVar9 + 4) = *puVar1;
        *(int32_t *)((int64_t)puVar9 + 0x24) = uVar3;
        *(int32_t *)(puVar9 + 5) = uVar4;
        *(int32_t *)((int64_t)puVar9 + 0x2c) = uVar5;
        puVar1 = (int32_t *)(lVar14 + 0x30 + (int64_t)puVar15);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(int32_t *)(puVar9 + 6) = *puVar1;
        *(int32_t *)((int64_t)puVar9 + 0x34) = uVar3;
        *(int32_t *)(puVar9 + 7) = uVar4;
        *(int32_t *)((int64_t)puVar9 + 0x3c) = uVar5;
        *(int32_t *)(puVar9 + 8) = *(int32_t *)(lVar14 + 0x40 + (int64_t)puVar15);
        if (*(int64_t *)(param_1 + 0x138) != 0) {
// WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        *(uint64_t **)(param_1 + 0x138) = puVar11;
        *(int32_t **)(param_1 + 0x140) = (int32_t *)((int64_t)puVar9 + 0x44);
        *(int32_t **)(param_1 + 0x148) = (int32_t *)(lVar16 * 0x44 + (int64_t)puVar11);
      }
      uVar18 = (int)puVar19 + 1;
      lVar14 = *(int64_t *)(lVar7 + 0x138);
      puVar15 = (uint64_t *)((int64_t)puVar15 + 0x44);
      puVar19 = (uint64_t *)(uint64_t)uVar18;
    } while ((uint64_t)(int64_t)(int)uVar18 <
             (uint64_t)((*(int64_t *)(lVar7 + 0x140) - lVar14) / 0x44));
  }
  lVar14 = *(int64_t *)(lVar7 + 0x158);
  lVar10 = *(int64_t *)(lVar7 + 0x160) - lVar14;
  lVar16 = lVar10 >> 0x3f;
  puVar15 = puVar13;
  puVar19 = puVar13;
  if (lVar10 / 0x14 + lVar16 != lVar16) {
    do {
      puVar17 = *(uint64_t **)(param_1 + 0x160);
      if (puVar17 < *(uint64_t **)(param_1 + 0x168)) {
        *(int32_t **)(param_1 + 0x160) = (int32_t *)((int64_t)puVar17 + 0x14);
        puVar1 = (int32_t *)(lVar14 + (int64_t)puVar15);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(int32_t *)puVar17 = *puVar1;
        *(int32_t *)((int64_t)puVar17 + 4) = uVar3;
        *(int32_t *)(puVar17 + 1) = uVar4;
        *(int32_t *)((int64_t)puVar17 + 0xc) = uVar5;
        *(int32_t *)(puVar17 + 2) = *(int32_t *)(lVar14 + 0x10 + (int64_t)puVar15);
      }
      else {
        puVar12 = *(uint64_t **)(param_1 + 0x158);
        lVar16 = ((int64_t)puVar17 - (int64_t)puVar12) / 0x14;
        if (lVar16 == 0) {
          lVar16 = 1;
LAB_1806355a6:
          puVar9 = (uint64_t *)
                   CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar16 * 0x14,*(int8_t *)(param_1 + 0x170));
          puVar17 = *(uint64_t **)(param_1 + 0x160);
          puVar12 = *(uint64_t **)(param_1 + 0x158);
          puVar11 = puVar9;
        }
        else {
          lVar16 = lVar16 * 2;
          puVar9 = puVar13;
          puVar11 = puVar13;
          if (lVar16 != 0) goto LAB_1806355a6;
        }
        for (; puVar12 != puVar17; puVar12 = (uint64_t *)((int64_t)puVar12 + 0x14)) {
          uVar6 = puVar12[1];
          *puVar9 = *puVar12;
          puVar9[1] = uVar6;
          *(int32_t *)(puVar9 + 2) = *(int32_t *)(puVar12 + 2);
          puVar9 = (uint64_t *)((int64_t)puVar9 + 0x14);
        }
        puVar1 = (int32_t *)(lVar14 + (int64_t)puVar15);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(int32_t *)puVar9 = *puVar1;
        *(int32_t *)((int64_t)puVar9 + 4) = uVar3;
        *(int32_t *)(puVar9 + 1) = uVar4;
        *(int32_t *)((int64_t)puVar9 + 0xc) = uVar5;
        *(int32_t *)(puVar9 + 2) = *(int32_t *)(lVar14 + 0x10 + (int64_t)puVar15);
        if (*(int64_t *)(param_1 + 0x158) != 0) {
// WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        *(uint64_t **)(param_1 + 0x158) = puVar11;
        *(int32_t **)(param_1 + 0x160) = (int32_t *)((int64_t)puVar9 + 0x14);
        *(int32_t **)(param_1 + 0x168) = (int32_t *)((int64_t)puVar11 + lVar16 * 0x14);
      }
      uVar18 = (int)puVar19 + 1;
      lVar14 = *(int64_t *)(lVar7 + 0x158);
      puVar15 = (uint64_t *)((int64_t)puVar15 + 0x14);
      puVar19 = (uint64_t *)(uint64_t)uVar18;
    } while ((uint64_t)(int64_t)(int)uVar18 <
             (uint64_t)((*(int64_t *)(lVar7 + 0x160) - lVar14) / 0x14));
  }
  lVar14 = *(int64_t *)(lVar7 + 0x178);
  puVar15 = puVar13;
  if ((*(int64_t *)(lVar7 + 0x180) - lVar14) / 0x50 != 0) {
    do {
      if (*(uint64_t *)(param_1 + 0x180) < *(uint64_t *)(param_1 + 0x188)) {
        *(uint64_t *)(param_1 + 0x180) = *(uint64_t *)(param_1 + 0x180) + 0x50;
        function_0940b0();
      }
      else {
        function_093d90(param_1 + 0x178,(int64_t)puVar13 * 0x50 + lVar14);
      }
      uVar18 = (int)puVar15 + 1;
      lVar14 = *(int64_t *)(lVar7 + 0x178);
      puVar13 = (uint64_t *)(int64_t)(int)uVar18;
      puVar15 = (uint64_t *)(uint64_t)uVar18;
    } while (puVar13 < (uint64_t *)((*(int64_t *)(lVar7 + 0x180) - lVar14) / 0x50));
  }
  iVar8 = _Mtx_unlock(lVar7);
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  iVar8 = _Mtx_unlock(param_1);
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  return;
}