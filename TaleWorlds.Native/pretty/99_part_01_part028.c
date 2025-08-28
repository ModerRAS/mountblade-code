/* 原始函数别名定义 */
#define DataValidator_CheckIntegrity DataValidator_CheckIntegrity  // DataValidator_CheckIntegrity 的语义化别名
/* 函数别名定义: MemoryDebugger */
#define MemoryDebugger MemoryDebugger
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_01_part028.c - 5 个函数
// 函数: void function_0babf0(uint64_t param_1)
void function_0babf0(uint64_t param_1)
{
  int iVar1;
  int32_t uVar2;
  uint uVar3;
  int16_t *puVar4;
  int8_t *puVar5;
  int8_t *puVar6;
  int64_t lVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  void **ppuVar10;
  uint uVar11;
  uint uVar12;
  int64_t lVar13;
  uint *puVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint uVar19;
  int8_t stack_array_148 [32];
  int8_t local_var_128;
  uint local_var_118;
  int8_t local_var_114;
  void *plocal_var_110;
  int8_t *plocal_var_108;
  uint local_var_100;
  uint64_t local_var_f8;
  void *plocal_var_f0;
  int8_t *plocal_var_e8;
  uint local_var_e0;
  uint64_t local_var_d8;
  int64_t *plStack_d0;
  void *plocal_var_c8;
  int8_t *plocal_var_c0;
  int32_t local_var_b8;
  uint64_t local_var_b0;
  void *plocal_var_a8;
  int16_t *plocal_var_a0;
  int32_t local_var_98;
  uint64_t local_var_90;
  uint64_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  void *plocal_var_68;
  int8_t *plocal_var_60;
  int iStack_58;
  int8_t stack_array_50 [16];
  uint64_t local_var_40;
  local_var_78 = 0xfffffffffffffffe;
  local_var_40 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_148;
  uVar17 = 0;
  uVar3 = 0;
  local_var_118 = 0;
  local_var_80 = param_1;
  local_var_70 = param_1;
  CoreEngineDataTransformer(&plocal_var_f0);
  plocal_var_68 = &system_config_ptr;
  plocal_var_60 = stack_array_50;
  stack_array_50[0] = 0;
  iStack_58 = 9;
  strcpy_s(stack_array_50,0x10,&system_data_2fe8);
  iVar1 = DataValidator_CheckIntegrity(&plocal_var_f0,&plocal_var_68);
  if (iVar1 < 0) {
    plVar8 = (int64_t *)*system_main_module_state;
    plStack_d0 = plVar8;
    if (plVar8[1] - *plVar8 >> 5 != 0) {
      local_var_88 = 0;
      plocal_var_a8 = &system_data_buffer_ptr;
      local_var_90 = 0;
      plocal_var_a0 = (int16_t *)0x0;
      local_var_98 = 0;
      puVar4 = (int16_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
      *(int8_t *)puVar4 = 0;
      plocal_var_a0 = puVar4;
      uVar2 = CoreEngineSystemCleanup(puVar4);
      local_var_90 = CONCAT44(local_var_90._4_4_,uVar2);
      *puVar4 = 0x2f;
      local_var_98 = 1;
      lVar7 = *plVar8;
      plocal_var_c8 = &system_data_buffer_ptr;
      local_var_b0 = 0;
      plocal_var_c0 = (int8_t *)0x0;
      local_var_b8 = 0;
      local_var_118 = 2;
      puVar5 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
      *puVar5 = 0;
      plocal_var_c0 = puVar5;
      uVar3 = CoreEngineSystemCleanup(puVar5);
      *puVar5 = *(int8_t *)puVar4;
      local_var_b8 = 1;
      puVar5[1] = 0;
      local_var_b0 = (uint64_t)uVar3;
      iVar1 = *(int *)(lVar7 + 0x10);
      if (0 < iVar1) {
        if ((iVar1 != -1) && (uVar3 < iVar1 + 2U)) {
          local_var_128 = 0x13;
          puVar5 = (int8_t *)DataValidator(system_memory_pool_ptr,puVar5,iVar1 + 2U,0x10);
          plocal_var_c0 = puVar5;
          uVar2 = CoreEngineSystemCleanup(puVar5);
          local_var_b0 = CONCAT44(local_var_b0._4_4_,uVar2);
          iVar1 = *(int *)(lVar7 + 0x10);
        }
// WARNING: Subroutine does not return
        memcpy(puVar5 + 1,*(uint64_t *)(lVar7 + 8),(int64_t)(iVar1 + 1));
      }
      plocal_var_110 = &system_data_buffer_ptr;
      local_var_f8._0_4_ = 0;
      local_var_f8._4_4_ = 0;
      puVar6 = (int8_t *)0x0;
      plocal_var_108 = (int8_t *)0x0;
      local_var_100 = 0;
      local_var_118 = 6;
      if (puVar5 != (int8_t *)0x0) {
        puVar6 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
        *puVar6 = 0;
        plocal_var_108 = puVar6;
        local_var_f8._0_4_ = CoreEngineSystemCleanup(puVar6);
      }
// WARNING: Subroutine does not return
      memcpy(puVar6,puVar5,1);
    }
    lVar7 = MemoryDebugger0();
    uVar19 = *(uint *)(lVar7 + 0x10);
    uVar17 = (uint64_t)uVar19;
    if (*(int64_t *)(lVar7 + 8) != 0) {
      CoreEngineDataBufferProcessor(&plocal_var_f0,uVar17);
    }
    if (uVar19 != 0) {
// WARNING: Subroutine does not return
      memcpy(plocal_var_e8,*(uint64_t *)(lVar7 + 8),uVar17);
    }
    if (plocal_var_e8 != (int8_t *)0x0) {
      plocal_var_e8[uVar17] = 0;
    }
  }
  else {
    for (uVar19 = iStack_58 + iVar1;
        (uVar18 = (uint64_t)uVar19, (int)uVar19 < (int)local_var_e0 && (plocal_var_e8[uVar18] == '/'));
        uVar19 = uVar19 + 1) {
    }
    iVar1 = uVar19 - local_var_e0;
    uVar9 = uVar18;
    uVar12 = uVar19;
    while (uVar11 = (uint)uVar9, SBORROW4(uVar12,local_var_e0) != iVar1 < 0) {
      if ((uVar11 != uVar19) && (plocal_var_e8[uVar9] == '/')) {
        if ((int)uVar11 < (int)local_var_e0) {
          if ((int)uVar11 < 0) {
            uVar11 = local_var_e0;
          }
          plocal_var_110 = &system_data_buffer_ptr;
          plocal_var_108 = (int8_t *)0x0;
          local_var_100 = 0;
          local_var_f8 = 0;
          local_var_118 = 8;
          iVar1 = local_var_e0 - uVar19;
          if ((int)(uVar11 - uVar19) < (int)(local_var_e0 - uVar19)) {
            iVar1 = uVar11 - uVar19;
          }
          uVar9 = uVar17;
          if (iVar1 != -1) {
            iVar1 = iVar1 + 2;
            if (iVar1 < 0x10) {
              iVar1 = 0x10;
            }
            plocal_var_108 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar1,0x13);
            *plocal_var_108 = 0;
            uVar15 = (uint64_t)plocal_var_108 & 0xffffffffffc00000;
            if (uVar15 == 0) {
              uVar9 = 0;
            }
            else {
              lVar7 = ((int64_t)plocal_var_108 - uVar15 >> 0x10) * 0x50 + 0x80 + uVar15;
              puVar14 = (uint *)(lVar7 - (uint64_t)*(uint *)(lVar7 + 4));
              uVar9 = (uint64_t)puVar14[7];
              if ((*(byte *)((int64_t)puVar14 + 0xe) & 2) == 0) {
                if (0x3ffffff < uVar9) {
                  uVar9 = (uint64_t)*puVar14 << 0x10;
                }
              }
              else {
                uVar16 = uVar9;
                if (0x3ffffff < uVar9) {
                  uVar16 = (uint64_t)*puVar14 << 0x10;
                }
                if (0x3ffffff < uVar9) {
                  uVar9 = (uint64_t)*puVar14 << 0x10;
                }
                uVar9 = uVar9 - ((int64_t)plocal_var_108 -
                                (((int64_t)((int64_t)puVar14 + (-0x80 - uVar15)) / 0x50) * 0x10000
                                + uVar15)) % uVar16;
              }
            }
            local_var_f8 = CONCAT44(local_var_f8._4_4_,(int)uVar9);
          }
          local_var_d8._0_4_ = (uint)uVar9;
          lVar7 = (int64_t)(int)uVar19;
          plStack_d0 = (int64_t *)(int64_t)(int)uVar11;
          puVar5 = plocal_var_108;
          uVar3 = 0;
          uVar19 = 0;
          if (lVar7 < (int64_t)plStack_d0) goto LAB_1800bb220;
          goto LAB_1800bb37f;
        }
        break;
      }
      uVar12 = uVar11 + 1;
      uVar9 = (uint64_t)uVar12;
      iVar1 = uVar12 - local_var_e0;
    }
    lVar7 = MemoryDebugger0();
    uVar19 = *(uint *)(lVar7 + 0x10);
    if ((*(int64_t *)(lVar7 + 8) != 0) && (uVar19 != 0)) {
      uVar12 = uVar19 + 1;
      if (plocal_var_e8 == (int8_t *)0x0) {
        if ((int)uVar12 < 0x10) {
          uVar12 = 0x10;
        }
        plocal_var_e8 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar12,0x13);
        *plocal_var_e8 = 0;
        uVar2 = CoreEngineSystemCleanup(plocal_var_e8);
        local_var_d8 = CONCAT44(local_var_d8._4_4_,uVar2);
      }
      else if ((uint)local_var_d8 < uVar12) {
        local_var_128 = 0x13;
        plocal_var_e8 = (int8_t *)DataValidator(system_memory_pool_ptr,plocal_var_e8,uVar12,0x10);
        uVar17 = (uint64_t)plocal_var_e8 & 0xffffffffffc00000;
        if (uVar17 == 0) {
          local_var_d8 = local_var_d8 & 0xffffffff00000000;
        }
        else {
          lVar13 = ((int64_t)plocal_var_e8 - uVar17 >> 0x10) * 0x50 + 0x80 + uVar17;
          puVar14 = (uint *)(lVar13 - (uint64_t)*(uint *)(lVar13 + 4));
          if ((*(byte *)((int64_t)puVar14 + 0xe) & 2) == 0) {
            uVar12 = puVar14[7];
            if (0x3ffffff < uVar12) {
              uVar12 = *puVar14 << 0x10;
            }
            local_var_d8 = CONCAT44(local_var_d8._4_4_,uVar12);
          }
          else {
            uVar12 = puVar14[7];
            if (uVar12 < 0x4000000) {
              uVar18 = (uint64_t)uVar12;
            }
            else {
              uVar18 = (uint64_t)*puVar14 << 0x10;
            }
            if (0x3ffffff < uVar12) {
              uVar12 = *puVar14 << 0x10;
            }
            local_var_d8 = CONCAT44(local_var_d8._4_4_,
                                 uVar12 - (int)(((int64_t)plocal_var_e8 -
                                                (((int64_t)((int64_t)puVar14 + (-0x80 - uVar17)) /
                                                 0x50) * 0x10000 + uVar17)) % uVar18));
          }
        }
      }
    }
    if (uVar19 != 0) {
// WARNING: Subroutine does not return
      memcpy(plocal_var_e8,*(uint64_t *)(lVar7 + 8),(uint64_t)uVar19);
    }
    if (plocal_var_e8 != (int8_t *)0x0) {
      plocal_var_e8[uVar19] = 0;
    }
  }
  local_var_e0 = 0;
  local_var_d8._4_4_ = *(uint *)(lVar7 + 0x1c);
  goto LAB_1800bb587;
LAB_1800bb220:
  do {
    local_var_d8._0_4_ = (uint)uVar9;
    uVar12 = (uint)uVar17;
    uVar3 = local_var_118;
    uVar19 = uVar12;
    if (local_var_e0 <= (uint)uVar18) break;
    local_var_114 = plocal_var_e8[lVar7];
    uVar19 = uVar12 + 1;
    if (uVar19 != 0) {
      uVar12 = uVar12 + 2;
      if (puVar5 == (int8_t *)0x0) {
        if ((int)uVar12 < 0x10) {
          uVar12 = 0x10;
        }
        puVar5 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar12,0x13);
        *puVar5 = 0;
      }
      else {
        if (uVar12 <= (uint)local_var_d8) goto LAB_1800bb353;
        local_var_128 = 0x13;
        puVar5 = (int8_t *)DataValidator(system_memory_pool_ptr,puVar5,uVar12,0x10);
      }
      uVar15 = (uint64_t)puVar5 & 0xffffffffffc00000;
      if (uVar15 == 0) {
        uVar9 = 0;
      }
      else {
        lVar13 = ((int64_t)puVar5 - uVar15 >> 0x10) * 0x50 + 0x80 + uVar15;
        puVar14 = (uint *)(lVar13 - (uint64_t)*(uint *)(lVar13 + 4));
        if ((*(byte *)((int64_t)puVar14 + 0xe) & 2) == 0) {
          uVar9 = (uint64_t)puVar14[7];
          if (0x3ffffff < uVar9) {
            uVar9 = (uint64_t)*puVar14 << 0x10;
          }
        }
        else {
          uVar9 = (uint64_t)puVar14[7];
          if (uVar9 < 0x4000000) {
            uVar16 = (uint64_t)puVar14[7];
          }
          else {
            uVar16 = (uint64_t)*puVar14 << 0x10;
          }
          if (0x3ffffff < uVar9) {
            uVar9 = (uint64_t)*puVar14 << 0x10;
          }
          uVar9 = uVar9 - ((int64_t)puVar5 -
                          (((int64_t)((int64_t)puVar14 + (-0x80 - uVar15)) / 0x50) * 0x10000 +
                          uVar15)) % uVar16;
        }
      }
      local_var_f8 = CONCAT44(local_var_f8._4_4_,(int)uVar9);
      uVar9 = uVar9 & 0xffffffff;
      plocal_var_108 = puVar5;
    }
LAB_1800bb353:
    local_var_d8._0_4_ = (uint)uVar9;
    puVar5[uVar17] = local_var_114;
    puVar5[uVar19] = 0;
    uVar17 = (uint64_t)uVar19;
    uVar18 = (uint64_t)((uint)uVar18 + 1);
    lVar7 = lVar7 + 1;
    uVar3 = local_var_118;
    local_var_100 = uVar19;
  } while (lVar7 < (int64_t)plStack_d0);
LAB_1800bb37f:
  if (plocal_var_e8 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  local_var_d8._4_4_ = 0;
  local_var_100 = 0;
  uVar3 = uVar3 & 0xfffffff7;
  plocal_var_108 = (int8_t *)0x0;
  local_var_f8 = 0;
  plocal_var_110 = &system_state_ptr;
  local_var_118 = uVar3;
  plocal_var_e8 = puVar5;
  local_var_e0 = uVar19;
LAB_1800bb587:
  lVar7 = *system_main_module_state;
  plVar8 = (int64_t *)HighFreq_AnimationSystem1(lVar7 + 0x938,&plStack_d0,&plocal_var_f0);
  ppuVar10 = &plocal_var_f0;
  if (*plVar8 != lVar7 + 0x938) {
    ppuVar10 = (void **)(*plVar8 + 0x40);
  }
  CoreEngineDataTransformer(local_var_80,ppuVar10);
  local_var_118 = uVar3 | 1;
  plocal_var_68 = &system_state_ptr;
  plocal_var_f0 = &system_data_buffer_ptr;
  if (plocal_var_e8 == (int8_t *)0x0) {
    plocal_var_e8 = (int8_t *)0x0;
    local_var_d8 = (uint64_t)local_var_d8._4_4_ << 0x20;
    plocal_var_f0 = &system_state_ptr;
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_40 ^ (uint64_t)stack_array_148);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Removing unreachable block (ram,0x0001800bb8f2)
// WARNING: Removing unreachable block (ram,0x0001800bb8fa)
// WARNING: Removing unreachable block (ram,0x0001800bb900)
// WARNING: Removing unreachable block (ram,0x0001800bb90d)
// WARNING: Removing unreachable block (ram,0x0001800bb93e)
// WARNING: Removing unreachable block (ram,0x0001800bb946)
// WARNING: Removing unreachable block (ram,0x0001800bb949)
// WARNING: Removing unreachable block (ram,0x0001800bb916)
// WARNING: Removing unreachable block (ram,0x0001800bb91b)
// WARNING: Removing unreachable block (ram,0x0001800bb962)
// WARNING: Removing unreachable block (ram,0x0001800bb973)
// WARNING: Removing unreachable block (ram,0x0001800bb989)
// WARNING: Removing unreachable block (ram,0x0001800bb991)
// WARNING: Removing unreachable block (ram,0x0001800bb9f3)
// WARNING: Removing unreachable block (ram,0x0001800bb9fb)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_0bb630(int64_t param_1)
{
  int64_t *plVar1;
  int32_t uVar2;
  int iVar3;
  uint uVar4;
  uint64_t *puVar5;
  int16_t *puVar6;
  int8_t *puVar7;
  int8_t *puVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  void *plocal_var_e0;
  int16_t *plocal_var_d8;
  int32_t local_var_d0;
  uint64_t local_var_c8;
  void *plocal_var_c0;
  uint64_t *plocal_var_b8;
  int32_t local_var_b0;
  uint64_t local_var_a8;
  void *plocal_var_a0;
  int8_t *plocal_var_98;
  int32_t local_var_90;
  uint64_t local_var_88;
  void *plocal_var_80;
  int8_t *plocal_var_78;
  int32_t local_var_70;
  uint64_t local_var_68;
  int64_t *plStack_60;
  uint64_t local_var_58;
  local_var_58 = 0xfffffffffffffffe;
  CoreEngineDataTransformer();
  plocal_var_c0 = &system_data_buffer_ptr;
  local_var_a8 = 0;
  plocal_var_b8 = (uint64_t *)0x0;
  local_var_b0 = 0;
  puVar5 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar5 = 0;
  plocal_var_b8 = puVar5;
  uVar2 = CoreEngineSystemCleanup(puVar5);
  local_var_a8 = CONCAT44(local_var_a8._4_4_,uVar2);
  *puVar5 = 0x73656c75646f4d2f;
  *(int16_t *)(puVar5 + 1) = 0x2f;
  local_var_b0 = 9;
  iVar3 = DataValidator_CheckIntegrity(param_1,&plocal_var_c0);
  if (-1 < iVar3) {
    uVar10 = NetworkSystem_ProtocolParser(param_1,&plocal_var_80,iVar3 + 9,*(int *)(param_1 + 0x10) + 1);
    SystemScheduler(param_1,uVar10);
    plocal_var_80 = &system_data_buffer_ptr;
    if (plocal_var_78 == (int8_t *)0x0) {
      plocal_var_78 = (int8_t *)0x0;
      local_var_68 = (uint64_t)local_var_68._4_4_ << 0x20;
      plocal_var_80 = &system_state_ptr;
      plocal_var_e0 = &system_data_buffer_ptr;
      local_var_c8 = 0;
      plocal_var_d8 = (int16_t *)0x0;
      local_var_d0 = 0;
      puVar6 = (int16_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
      *(int8_t *)puVar6 = 0;
      plocal_var_d8 = puVar6;
      uVar2 = CoreEngineSystemCleanup(puVar6);
      local_var_c8 = CONCAT44(local_var_c8._4_4_,uVar2);
      *puVar6 = 0x2f;
      local_var_d0 = 1;
      DataValidator_CheckIntegrity(param_1,&plocal_var_e0);
      plocal_var_e0 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar6);
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plVar1 = (int64_t *)*system_main_module_state;
  plStack_60 = plVar1;
  if (plVar1[1] - *plVar1 >> 5 != 0) {
    plocal_var_e0 = &system_data_buffer_ptr;
    local_var_c8 = 0;
    plocal_var_d8 = (int16_t *)0x0;
    local_var_d0 = 0;
    puVar6 = (int16_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar6 = 0;
    plocal_var_d8 = puVar6;
    uVar2 = CoreEngineSystemCleanup(puVar6);
    local_var_c8 = CONCAT44(local_var_c8._4_4_,uVar2);
    *puVar6 = 0x2f;
    local_var_d0 = 1;
    lVar9 = *plVar1;
    plocal_var_80 = &system_data_buffer_ptr;
    local_var_68 = 0;
    plocal_var_78 = (int8_t *)0x0;
    local_var_70 = 0;
    puVar7 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *puVar7 = 0;
    plocal_var_78 = puVar7;
    uVar4 = CoreEngineSystemCleanup(puVar7);
    *puVar7 = *(int8_t *)puVar6;
    local_var_70 = 1;
    puVar7[1] = 0;
    local_var_68 = (uint64_t)uVar4;
    iVar3 = *(int *)(lVar9 + 0x10);
    if (iVar3 < 1) {
      plocal_var_a0 = &system_data_buffer_ptr;
      local_var_88 = 0;
      puVar8 = (int8_t *)0x0;
      plocal_var_98 = (int8_t *)0x0;
      local_var_90 = 0;
      if (puVar7 != (int8_t *)0x0) {
        puVar8 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
        *puVar8 = 0;
        plocal_var_98 = puVar8;
        uVar2 = CoreEngineSystemCleanup(puVar8);
        local_var_88 = CONCAT44(local_var_88._4_4_,uVar2);
      }
// WARNING: Subroutine does not return
      memcpy(puVar8,puVar7,1);
    }
    if ((iVar3 != -1) && (uVar4 < iVar3 + 2U)) {
      puVar7 = (int8_t *)DataValidator(system_memory_pool_ptr,puVar7,iVar3 + 2U,0x10,0x13);
      plocal_var_78 = puVar7;
      uVar2 = CoreEngineSystemCleanup(puVar7);
      local_var_68 = CONCAT44(local_var_68._4_4_,uVar2);
      iVar3 = *(int *)(lVar9 + 0x10);
    }
// WARNING: Subroutine does not return
    memcpy(puVar7 + 1,*(uint64_t *)(lVar9 + 8),(int64_t)(iVar3 + 1));
  }
  lVar9 = MemoryDebugger0();
  uVar4 = *(uint *)(lVar9 + 0x10);
  uVar11 = (uint64_t)uVar4;
  if (*(int64_t *)(lVar9 + 8) != 0) {
    CoreEngineDataBufferProcessor(param_1,uVar11);
  }
  if (uVar4 != 0) {
// WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(param_1 + 8),*(uint64_t *)(lVar9 + 8),uVar11);
  }
  *(int32_t *)(param_1 + 0x10) = 0;
  if (*(int64_t *)(param_1 + 8) != 0) {
    *(int8_t *)(uVar11 + *(int64_t *)(param_1 + 8)) = 0;
  }
  *(int32_t *)(param_1 + 0x1c) = *(int32_t *)(lVar9 + 0x1c);
  plocal_var_c0 = &system_data_buffer_ptr;
  if (puVar5 == (uint64_t *)0x0) {
    return param_1;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar5);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_0bbc40(uint64_t *param_1,int *param_2)
void function_0bbc40(uint64_t *param_1,int *param_2)
{
  int iVar1;
  int64_t lVar2;
  int8_t stack_array_558 [32];
  int8_t *plocal_var_538;
  int32_t local_var_530;
  uint64_t local_var_528;
  uint64_t local_var_520;
  void *plocal_var_518;
  int64_t lStack_510;
  int iStack_508;
  uint64_t local_var_500;
  int32_t local_var_4f8;
  void *plocal_var_4f0;
  int64_t lStack_4e8;
  int32_t local_var_4e0;
  uint64_t local_var_4d8;
  uint64_t local_var_4d0;
  uint64_t *plocal_var_4c8;
  int8_t stack_array_398 [288];
  int8_t stack_array_278 [560];
  uint64_t local_var_48;
  local_var_4d0 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_558;
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &system_data_buffer_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  local_var_4f8 = 1;
  plocal_var_518 = &system_data_buffer_ptr;
  local_var_500 = 0;
  lStack_510 = 0;
  iStack_508 = 0;
  iVar1 = *param_2;
  plocal_var_4c8 = param_1;
  if (iVar1 == 0) {
    lVar2 = function_0ba4b0(&plocal_var_4f0,&processed_var_8996_ptr);
    if (lStack_510 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    iStack_508 = *(int *)(lVar2 + 0x10);
    lStack_510 = *(int64_t *)(lVar2 + 8);
    local_var_500 = *(uint64_t *)(lVar2 + 0x18);
    *(int32_t *)(lVar2 + 0x10) = 0;
    *(uint64_t *)(lVar2 + 8) = 0;
    *(uint64_t *)(lVar2 + 0x18) = 0;
    plocal_var_4f0 = &system_data_buffer_ptr;
    if (lStack_4e8 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        GetTempPathW(0x118,stack_array_278);
        plocal_var_4f0 = &system_data_buffer_ptr;
        local_var_4d8 = 0;
        lStack_4e8 = 0;
        local_var_4e0 = 0;
        local_var_520 = 0;
        local_var_528 = 0;
        local_var_530 = 0x118;
        plocal_var_538 = stack_array_398;
        iVar1 = WideCharToMultiByte(0xfde9,0,stack_array_278,0xffffffff);
        CoreEngineDataBufferProcessor(&plocal_var_4f0,iVar1);
// WARNING: Subroutine does not return
        memcpy(lStack_4e8,stack_array_398,(int64_t)iVar1);
      }
      goto LAB_1800bbf4b;
    }
    lVar2 = function_6242f0(&plocal_var_4f0);
    if (lStack_510 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    iStack_508 = *(int *)(lVar2 + 0x10);
    lStack_510 = *(int64_t *)(lVar2 + 8);
    local_var_500 = *(uint64_t *)(lVar2 + 0x18);
    *(int32_t *)(lVar2 + 0x10) = 0;
    *(uint64_t *)(lVar2 + 8) = 0;
    *(uint64_t *)(lVar2 + 0x18) = 0;
    plocal_var_4f0 = &system_data_buffer_ptr;
    if (lStack_4e8 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  local_var_4d8 = local_var_4d8 & 0xffffffff00000000;
  lStack_4e8 = 0;
  plocal_var_4f0 = &system_state_ptr;
LAB_1800bbf4b:
  if (0 < iStack_508) {
    CoreEngineDataBufferProcessor(param_1,*(int *)(param_1 + 2) + iStack_508);
// WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(param_1 + 2) + param_1[1],lStack_510,(int64_t)(iStack_508 + 1));
  }
  iVar1 = *(int *)(param_1 + 2) + 1;
  CoreEngineDataBufferProcessor(param_1,iVar1);
  *(int16_t *)((uint64_t)*(uint *)(param_1 + 2) + param_1[1]) = 0x2f;
  *(int *)(param_1 + 2) = iVar1;
  function_6281a0(param_1,param_2 + 1);
  plocal_var_518 = &system_data_buffer_ptr;
  if (lStack_510 == 0) {
    lStack_510 = 0;
    local_var_500 = local_var_500 & 0xffffffff00000000;
    plocal_var_518 = &system_state_ptr;
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_558);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
uint64_t *
function_0bc000(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int iVar1;
  int32_t uVar2;
  uint64_t uVar3;
  void *plocal_var_38;
  int64_t lStack_30;
  int iStack_28;
  uVar3 = 0xfffffffffffffffe;
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &system_data_buffer_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  uVar2 = 1;
  function_0bbc40(&plocal_var_38);
  if (0 < iStack_28) {
    CoreEngineDataBufferProcessor(param_1,*(int *)(param_1 + 2) + iStack_28);
// WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(param_1 + 2) + param_1[1],lStack_30,(int64_t)(iStack_28 + 1),
           param_4,uVar2,uVar3);
  }
  iVar1 = *(int *)(param_1 + 2) + 1;
  CoreEngineDataBufferProcessor(param_1,iVar1);
  *(int16_t *)((uint64_t)*(uint *)(param_1 + 2) + param_1[1]) = 0x2f;
  *(int *)(param_1 + 2) = iVar1;
  function_6281a0(param_1,param_2 + 0x204);
  plocal_var_38 = &system_data_buffer_ptr;
  if (lStack_30 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return param_1;
}
// 函数: void function_0bc110(int64_t *param_1)
void function_0bc110(int64_t *param_1)
{
  int64_t *plVar1;
  plVar1 = (int64_t *)*param_1;
  if (plVar1 == (int64_t *)0x0) {
    *param_1 = 0;
    return;
  }
  if (((char)plVar1[3] == '\0') && (*plVar1 != 0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(plVar1);
}
int64_t function_0bc180(int64_t param_1)
{
  *(uint64_t *)(param_1 + 8) = 0;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 0x28) = 0;
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(uint64_t *)(param_1 + 0x38) = 0;
  *(uint64_t *)(param_1 + 0x40) = 0;
  *(uint64_t *)(param_1 + 0x48) = 0;
  *(uint64_t *)(param_1 + 0x50) = 0;
  *(uint64_t *)(param_1 + 0x58) = 0;
  *(uint64_t *)(param_1 + 0x60) = 0;
  *(uint64_t *)(param_1 + 0x68) = 0;
  *(uint64_t *)(param_1 + 0x70) = 0;
  *(uint64_t *)(param_1 + 0x78) = 0;
  *(uint64_t *)(param_1 + 0x80) = 0;
  *(uint64_t *)(param_1 + 0x88) = 0;
  *(uint64_t *)(param_1 + 0x90) = 0;
  *(uint64_t *)(param_1 + 0x98) = 0;
  *(uint64_t *)(param_1 + 0xa0) = 0;
  *(uint64_t *)(param_1 + 0xa8) = 0;
  *(uint64_t *)(param_1 + 0xb0) = 0;
  *(uint64_t *)(param_1 + 0xb8) = 0;
  *(uint64_t *)(param_1 + 0xc0) = 0;
  *(uint64_t *)(param_1 + 200) = 0;
  *(uint64_t *)(param_1 + 0xd0) = 0;
  *(uint64_t *)(param_1 + 0xd8) = 0;
  *(uint64_t *)(param_1 + 0xe0) = 0;
  *(uint64_t *)(param_1 + 0xe8) = 0;
  DataStructureManager(param_1 + 0xf0,8,0x10,&SUB_18005d5f0,DataCacheManager);
  DataStructureManager(param_1 + 0x170,8,0x10,&SUB_18005d5f0,DataCacheManager);
  DataStructureManager(param_1 + 0x1f0,8,0x10,&SUB_18005d5f0,DataCacheManager);
  *(uint64_t *)(param_1 + 0x270) = 0;
  *(uint64_t *)(param_1 + 0x278) = 0;
  *(uint64_t *)(param_1 + 0x280) = 0;
  *(uint64_t *)(param_1 + 0x288) = 0;
  *(uint64_t *)(param_1 + 0x290) = 0;
  *(uint64_t *)(param_1 + 0x298) = 0;
  *(int32_t *)(param_1 + 0x2c0) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x2c4) = 0x40000000;
  *(int32_t *)(param_1 + 0x2cc) = 3;
  *(uint64_t *)(param_1 + 0x2b0) = 1;
  *(void **)(param_1 + 0x2a8) = &system_data_0000;
  *(uint64_t *)(param_1 + 0x2b8) = 0;
  *(int32_t *)(param_1 + 0x2c8) = 0;
  *(uint64_t *)(param_1 + 0x2d0) = 0;
  *(uint64_t *)(param_1 + 0x2e0) = 0;
  *(uint64_t *)(param_1 + 0x2e8) = 0;
  *(uint64_t *)(param_1 + 0x2f0) = 0;
  *(uint64_t *)(param_1 + 0x2f8) = 0;
  *(uint64_t *)(param_1 + 0x300) = 0;
  *(uint64_t *)(param_1 + 0x308) = 0;
  *(uint64_t *)(param_1 + 0x310) = 0;
  *(uint64_t *)(param_1 + 0x318) = 0;
  *(uint64_t *)(param_1 + 800) = 0;
  *(uint64_t *)(param_1 + 0x328) = 0;
  *(uint64_t *)(param_1 + 0x330) = 0;
  *(uint64_t *)(param_1 + 0x338) = 0;
  *(uint64_t *)(param_1 + 0x340) = 0;
  *(uint64_t *)(param_1 + 0x348) = 0;
  *(uint64_t *)(param_1 + 0x350) = 0;
  *(uint64_t *)(param_1 + 0x358) = 0;
  *(uint64_t *)(param_1 + 0x360) = 0;
  *(uint64_t *)(param_1 + 0x368) = 0;
  *(uint64_t *)(param_1 + 0x370) = 0;
  *(uint64_t *)(param_1 + 0x378) = 0;
  *(uint64_t *)(param_1 + 0x380) = 0;
  *(uint64_t *)(param_1 + 0x388) = 0;
  *(uint64_t *)(param_1 + 0x390) = 0;
  *(uint64_t *)(param_1 + 0x398) = 0;
  *(uint64_t *)(param_1 + 0x3a0) = 0;
  *(uint64_t *)(param_1 + 0x3a8) = 0;
  *(uint64_t *)(param_1 + 0x3b0) = 0;
  *(uint64_t *)(param_1 + 0x3b8) = 0;
  *(uint64_t *)(param_1 + 0x3c0) = 0;
  *(uint64_t *)(param_1 + 0x3c8) = 0;
  *(uint64_t *)(param_1 + 0x3d0) = 0;
  *(uint64_t *)(param_1 + 0x3d8) = 0;
  *(uint64_t *)(param_1 + 0x3e0) = 0;
  *(uint64_t *)(param_1 + 1000) = 0;
  *(uint64_t *)(param_1 + 0x3f0) = 0;
  *(uint64_t *)(param_1 + 0x3f8) = 0;
  *(uint64_t *)(param_1 + 0x400) = 0;
  *(uint64_t *)(param_1 + 0x408) = 0;
  *(uint64_t *)(param_1 + 0x410) = 0;
  _Mtx_init_in_situ(param_1 + 0x418,0x102);
  function_0bcab0(param_1);
  return param_1;
}
// 函数: void function_0bc460(int64_t param_1)
void function_0bc460(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uVar3 = *(uint64_t *)(param_1 + 0x10);
  lVar1 = *(int64_t *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      lVar2 = *(int64_t *)(lVar1 + uVar4 * 8);
      if (lVar2 != 0) {
        if (*(int64_t **)(lVar2 + 8) != (int64_t *)0x0) {
          (**(code **)(**(int64_t **)(lVar2 + 8) + 0x38))();
        }
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar2);
      }
      *(uint64_t *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(int64_t *)(param_1 + 8) != 0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
// 函数: void function_0bc480(int64_t param_1)
void function_0bc480(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uVar3 = *(uint64_t *)(param_1 + 0x10);
  lVar1 = *(int64_t *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      lVar2 = *(int64_t *)(lVar1 + uVar4 * 8);
      if (lVar2 != 0) {
        if (*(int64_t **)(lVar2 + 8) != (int64_t *)0x0) {
          (**(code **)(**(int64_t **)(lVar2 + 8) + 0x38))();
        }
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar2);
      }
      *(uint64_t *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(int64_t *)(param_1 + 8) != 0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}