#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_02_part036.c - 10 个函数
// 函数: void function_1a91f0(int64_t *param_1)
void function_1a91f0(int64_t *param_1)
{
  char cVar1;
  int iVar2;
  int64_t lVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint64_t *puVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  int64_t *plVar10;
  int64_t lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t *plVar17;
  int8_t auVar18 [16];
  int8_t auVar19 [16];
  int8_t auVar20 [16];
  float fVar21;
  uint64_t stack_special_x_10;
  uint64_t local_var_fffffffffffffec8;
  int32_t uVar22;
  int64_t lStack_128;
  int64_t lStack_120;
  int64_t lStack_118;
  uint64_t local_var_110;
  void *plocal_var_100;
  code *pcStack_f8;
  int64_t *plStack_f0;
  int64_t *plStack_e8;
  uint64_t local_var_d8;
  int32_t local_var_d0;
  int32_t local_var_cc;
  int16_t local_var_c8;
  int8_t local_var_c6;
  int32_t local_var_c4;
  int8_t local_var_c0;
  uint64_t local_var_b8;
  int64_t lStack_b0;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  int32_t local_var_98;
  uint64_t local_var_90;
  uint64_t local_var_88;
  int8_t stack_array_80 [64];
  local_var_88 = 0xfffffffffffffffe;
  if (*(char *)(*param_1 + 0x48) == '\0') {
    lVar16 = param_1[1];
    lVar3 = *(int64_t *)(lVar16 + 0x60b80);
    if (lVar3 == 0) {
      puVar7 = (uint64_t *)function_1a4e70(lVar16,stack_array_80);
      uVar9 = puVar7[1];
      *(uint64_t *)(lVar16 + 0x454) = *puVar7;
      *(uint64_t *)(lVar16 + 0x45c) = uVar9;
      uVar9 = puVar7[3];
      *(uint64_t *)(lVar16 + 0x464) = puVar7[2];
      *(uint64_t *)(lVar16 + 0x46c) = uVar9;
      uVar9 = puVar7[5];
      *(uint64_t *)(lVar16 + 0x474) = puVar7[4];
      *(uint64_t *)(lVar16 + 0x47c) = uVar9;
      *(int32_t *)(lVar16 + 0x484) = *(int32_t *)(puVar7 + 6);
      lVar16 = param_1[1];
      local_var_110 = (int64_t *)
                   CONCAT44(*(float *)(lVar16 + 0x468) - *(float *)(lVar16 + 0x458),
                            *(float *)(lVar16 + 0x464) - *(float *)(lVar16 + 0x454));
      plVar8 = local_var_110;
    }
    else {
      stack_special_x_10 = (int64_t *)
                   CONCAT44((float)*(int *)(lVar3 + 0x18) * *(float *)(lVar3 + 0x1c),
                            (float)*(int *)(lVar3 + 0x14) * *(float *)(lVar3 + 0x1c));
      plVar8 = stack_special_x_10;
    }
    if (*(int64_t *)(lVar16 + 0x448) == 0) {
      uVar9 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x2370,8);
      uVar9 = function_373a60(uVar9,lVar16);
      *(uint64_t *)(lVar16 + 0x448) = uVar9;
      lVar16 = param_1[1];
    }
    lVar3 = *(int64_t *)(lVar16 + 0x448);
    cVar1 = *(char *)(lVar16 + 0x2964);
    function_374e60(lVar3);
    stack_special_x_10._4_4_ = (float)((uint64_t)plVar8 >> 0x20);
    stack_special_x_10._0_4_ = SUB84(plVar8,0);
    if (((float)stack_special_x_10 != 0.0) || (stack_special_x_10._4_4_ != 0.0)) {
      fVar21 = stack_special_x_10._4_4_;
      if (stack_special_x_10._4_4_ <= (float)stack_special_x_10) {
        fVar21 = (float)stack_special_x_10;
      }
      auVar20._0_4_ = (*(float *)(system_main_module_state + 0x388) + 1.0) * 10.0;
      if (cVar1 == '\0') {
        auVar20._0_4_ = auVar20._0_4_ * 0.1;
      }
      auVar20._0_4_ = fVar21 / auVar20._0_4_;
      iVar12 = (int)auVar20._0_4_;
      if ((iVar12 != -0x80000000) && ((float)iVar12 != auVar20._0_4_)) {
        auVar20._4_4_ = auVar20._0_4_;
        auVar20._8_8_ = 0;
        uVar5 = movmskps((int)system_main_module_state,auVar20);
        auVar20._0_4_ = (float)(int)(iVar12 - (uVar5 & 1));
      }
      uVar5 = (int)auVar20._0_4_;
      if (0x40 < (int)auVar20._0_4_) {
        uVar5 = 0x40;
      }
      auVar20._0_4_ = (float)(int)uVar5;
      auVar18._0_4_ = 1.0 / (fVar21 / auVar20._0_4_);
      auVar19._0_4_ = (float)stack_special_x_10 * auVar18._0_4_;
      iVar12 = (int)auVar19._0_4_;
      if ((iVar12 != -0x80000000) && ((float)iVar12 != auVar19._0_4_)) {
        auVar19._4_4_ = auVar19._0_4_;
        auVar19._8_8_ = 0;
        uVar5 = movmskps(uVar5,auVar19);
        uVar5 = uVar5 & 1;
        auVar19._0_4_ = (float)(int)(iVar12 - uVar5);
      }
      auVar18._0_4_ = stack_special_x_10._4_4_ * auVar18._0_4_;
      iVar12 = (int)auVar18._0_4_;
      if ((iVar12 != -0x80000000) && ((float)iVar12 != auVar18._0_4_)) {
        auVar18._4_4_ = auVar18._0_4_;
        auVar18._8_8_ = 0;
        uVar5 = movmskps(uVar5,auVar18);
        auVar18._0_4_ = (float)(int)(iVar12 - (uVar5 & 1));
      }
      uVar5 = 0x40;
      if ((int)auVar19._0_4_ < 0x40) {
        uVar5 = (int)auVar19._0_4_;
      }
      *(uint *)(lVar3 + 0x2154) = uVar5;
      uVar13 = 0x40;
      if ((int)auVar18._0_4_ < 0x40) {
        uVar13 = (int)auVar18._0_4_;
      }
      *(uint *)(lVar3 + 0x2158) = uVar13;
      if (uVar5 == 0) {
        *(int32_t *)(lVar3 + 0x2154) = 4;
        uVar5 = 4;
      }
      if (uVar13 == 0) {
        *(int32_t *)(lVar3 + 0x2158) = 4;
        uVar13 = 4;
      }
      uVar6 = uVar5 & 0x80000003;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
      }
      if (uVar6 != 0) {
        *(uint *)(lVar3 + 0x2154) = (uVar5 - uVar6) + 4;
      }
      uVar5 = uVar13 & 0x80000003;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
      }
      if (uVar5 != 0) {
        *(uint *)(lVar3 + 0x2158) = (uVar13 - uVar5) + 4;
      }
      *(float *)(lVar3 + 0x215c) = fVar21 / auVar20._0_4_;
    }
    plVar8 = (int64_t *)param_1[1];
    if (*(char *)((int64_t)plVar8 + 0x2964) == '\0') {
      function_1af730(plVar8);
      plVar8 = (int64_t *)param_1[1];
    }
    uVar22 = (int32_t)((uint64_t)local_var_fffffffffffffec8 >> 0x20);
    iVar12 = 0;
    if (plVar8[0xc165] - plVar8[0xc164] >> 3 != 0) {
      lStack_118 = 0;
      do {
        plVar10 = *(int64_t **)(lStack_118 + plVar8[0xc164]);
        lVar3 = plVar8[0x89];
        lStack_128 = 0;
        iVar2 = *(int *)(*(int64_t *)(lVar3 + 0x2148) + 0x3054);
        lVar16 = 0;
        plVar8 = (int64_t *)(lVar3 + 0x2160);
        lStack_120 = 4;
        local_var_110 = plVar10;
        plVar17 = plVar10;
        do {
          plVar17 = plVar17 + 1;
          if (iVar2 == lStack_128) {
            lVar15 = 0;
            iVar14 = (int)(*(int64_t *)(*plVar17 + 0x368) - *(int64_t *)(*plVar17 + 0x360) >> 3);
            if (0 < iVar14) {
              plStack_e8 = plVar10 + 5;
              do {
                plVar10 = plStack_e8;
                uVar9 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x38,8,3);
                plVar10 = (int64_t *)function_3739d0(uVar9,iVar12,plVar10);
                piVar4 = *(int **)(*(int64_t *)(*plVar17 + 0x360) + lVar15 * 8);
                if ((-1 < *piVar4) &&
                   (*piVar4 < (int)(*(int64_t *)(system_system_data_memory + 0xd0) -
                                    *(int64_t *)(system_system_data_memory + 200) >> 3))) {
                  plVar10[1] = (int64_t)piVar4;
                  uVar9 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x150,8,3);
                  lVar11 = function_372600(uVar9,lVar3);
                  *plVar10 = lVar11;
                  *(int *)(lVar11 + 0x50) = *piVar4;
                }
                plStack_f0 = plVar10;
                if ((uint64_t)(plVar8[1] - *plVar8 >> 3) < 0x100) {
                  SystemInitializer(lVar3 + 0x2160 + lVar16,&plStack_f0);
                }
                lVar15 = lVar15 + 1;
                plVar10 = local_var_110;
              } while (lVar15 < iVar14);
            }
          }
          uVar22 = (int32_t)((uint64_t)local_var_fffffffffffffec8 >> 0x20);
          lVar16 = lVar16 + 0x20;
          lStack_128 = lStack_128 + 1;
          plVar8 = plVar8 + 4;
          lStack_120 = lStack_120 + -1;
        } while (lStack_120 != 0);
        plVar8 = (int64_t *)param_1[1];
        iVar12 = iVar12 + 1;
        lStack_118 = lStack_118 + 8;
      } while ((uint64_t)(int64_t)iVar12 < (uint64_t)(plVar8[0xc165] - plVar8[0xc164] >> 3));
    }
    lVar3 = plVar8[0xc165];
    lVar16 = plVar8[0xc164];
    if (plVar8[0xc170] != 0) {
      function_39cb40(*(int64_t *)param_1[2],plVar8,plVar8 + 0x103a,plVar8 + 0x1036,
                    CONCAT44(uVar22,*(int32_t *)(*(int64_t *)param_1[2] + 0x3c)));
      lVar15 = param_1[1];
      lVar11 = *(int64_t *)(lVar15 + 0x448);
      function_37fb10(lVar11 + 0x21e0,*(uint64_t *)(lVar11 + 0x21e8),
                    *(uint64_t *)(lVar15 + 0x81b0),*(uint64_t *)(lVar15 + 0x81b8));
      *(int *)(lVar11 + 0x2368) =
           *(int *)(lVar11 + 0x2368) +
           (int)(*(int64_t *)(lVar15 + 0x81b8) - *(int64_t *)(lVar15 + 0x81b0) >> 3);
      plVar8 = (int64_t *)param_1[1];
    }
    if ((*(char *)((int64_t)plVar8 + 0x2964) != '\0') || ((int)plVar8[0xc142] == 0)) {
      plocal_var_100 = &rendering_buffer_224_ptr;
      pcStack_f8 = function_1bbc00;
      puVar7 = &local_var_110;
      uVar9 = 0xffffffffffffffff;
      local_var_110 = plVar8;
      SystemCore_DataTransformer();
      lVar15 = param_1[1];
      lVar11 = *(int64_t *)(lVar15 + 0x448);
      if (lVar11 == 0) {
        uVar9 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x2370,8,3,uVar9,puVar7);
        lVar11 = function_373a60(uVar9,lVar15);
        lVar15 = param_1[1];
      }
      function_3786b0(lVar11,*(uint64_t *)(lVar15 + 0x60b80),lVar3 - lVar16 >> 3 & 0xffffffff);
      plVar8 = (int64_t *)param_1[1];
    }
    lVar3 = plVar8[0x89];
    if (lVar3 != 0) {
      *(int32_t *)(lVar3 + 0x2150) = *(int32_t *)(*(int64_t *)(lVar3 + 0x2148) + 0x3054);
      function_379810(lVar3);
      function_3769d0(lVar3);
      SystemCore_Controller(plVar8[0x89] + 0x21e0);
      SystemCore_Controller(plVar8 + 0x1036);
    }
    local_var_d8 = 0;
    local_var_d0 = 0;
    local_var_cc = 0xffffffff;
    local_var_c8 = 1;
    local_var_c6 = 0;
    local_var_c4 = 0xffffffff;
    local_var_c0 = 1;
    local_var_b8 = 0;
    lStack_b0 = 0;
    local_var_a8 = 0;
    local_var_a0 = 0;
    local_var_98 = 3;
    local_var_90 = 0;
    lVar3 = param_1[1];
    lVar16 = *(int64_t *)(lVar3 + 0x448);
    if (lVar16 == 0) {
      uVar9 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x2370,8,3);
      lVar16 = function_373a60(uVar9,lVar3);
    }
    function_3796b0(lVar16,&local_var_d8);
    *(int *)(param_1[1] + 0x28b4) = *(int *)(param_1[1] + 0x28b4) + 1;
    if (lStack_b0 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  if ((*(char *)(*param_1 + 0x46) == '\0') &&
     (*(int64_t **)(system_operation_state + 0x1860) != (int64_t *)0x0)) {
    (**(code **)(**(int64_t **)(system_operation_state + 0x1860) + 0x28))();
  }
  return;
}
// 函数: void function_1a9950(int64_t *param_1)
void function_1a9950(int64_t *param_1)
{
  int64_t lVar1;
  function_1c0510();
  if (param_1[4] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lVar1 = *param_1;
  while( true ) {
    if (lVar1 == param_1[1]) {
      if (*param_1 == 0) {
        return;
      }
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    if (*(int64_t *)(lVar1 + 0x48) != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    if (*(int64_t *)(lVar1 + 0x28) != 0) break;
    if (*(int64_t *)(lVar1 + 8) != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lVar1 = lVar1 + 0x78;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// 函数: void function_1a99b0(int64_t *param_1)
void function_1a99b0(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    if (*(int64_t **)(lVar2 + 8) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(lVar2 + 8) + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1a99d0(int64_t param_1)
void function_1a99d0(int64_t param_1)
{
  uint64_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t *plocal_var_d8;
  uint64_t *plocal_var_d0;
  uint64_t local_var_c8;
  int32_t local_var_c0;
  int32_t stack_array_b8 [2];
  uint64_t local_var_b0;
  int64_t lStack_a8;
  uint64_t local_var_a0;
  int32_t local_var_98;
  void *plocal_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  int32_t local_var_70;
  int32_t local_var_6c;
  int32_t local_var_68;
  int64_t *plStack_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  int64_t *plStack_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  uint64_t local_var_28;
  int64_t *plStack_20;
  uint64_t local_var_18;
  local_var_18 = 0xfffffffffffffffe;
  if (((*(char *)(param_1 + 0x4c8) != '\0') && (0 < *(int *)(SYSTEM_STATE_MANAGER + 0xbd0))) &&
     (*(char *)(param_1 + 0x2968) == '\0')) {
    plocal_var_d8 = (uint64_t *)0x0;
    plocal_var_d0 = (uint64_t *)0x0;
    uVar4 = 0;
    local_var_c8 = 0;
    local_var_c0 = 3;
    function_1b84e0(param_1 + 0x60300,&plocal_var_d8);
    uVar1 = *(uint64_t *)(param_1 + 800);
    lStack_a8 = 0;
    lStack_a8 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x800000,0x21);
    LOCK();
    local_var_a0 = 0;
    UNLOCK();
    local_var_98 = 0;
    local_var_70 = 0x3f800000;
    local_var_6c = 0x40000000;
    plStack_60 = &lStack_a8;
    local_var_80 = 1;
    plocal_var_88 = &system_data_0000;
    local_var_78 = 0;
    local_var_68 = 0;
    local_var_58 = 0;
    local_var_50 = 0;
    local_var_48 = 0;
    plStack_40 = &lStack_a8;
    local_var_38 = 0;
    local_var_30 = 0;
    local_var_28 = 0;
    plStack_20 = &lStack_a8;
    stack_array_b8[0] = 0;
    local_var_b0 = uVar1;
    function_3c2600(stack_array_b8,param_1 + 0x60b48,&plocal_var_d8);
    puVar3 = plocal_var_d0;
    puVar2 = plocal_var_d8;
    if (local_var_80 != 0) {
      do {
        *(uint64_t *)(plocal_var_88 + uVar4 * 8) = 0;
        uVar4 = uVar4 + 1;
      } while (uVar4 < local_var_80);
    }
    local_var_78 = 0;
    if (lStack_a8 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_a8 = 0;
    for (puVar5 = plocal_var_d8; puVar5 != puVar3; puVar5 = puVar5 + 4) {
      (**(code **)*puVar5)(puVar5,0);
    }
    if (puVar2 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar2);
    }
  }
  return;
}
// 函数: void function_1a9ba0(int64_t param_1)
void function_1a9ba0(int64_t param_1)
{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uVar1 = *(uint64_t *)(param_1 + 0x38);
  lVar2 = *(int64_t *)(param_1 + 0x30);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      *(uint64_t *)(lVar2 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  *(uint64_t *)(param_1 + 0x40) = 0;
  if (*(int64_t *)(param_1 + 0x10) == 0) {
    *(uint64_t *)(param_1 + 0x10) = 0;
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1a9c10(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_1a9c10(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int32_t uVar1;
  void *puVar2;
  int32_t uVar3;
  uint64_t uVar4;
  void *plocal_var_58;
  uint64_t *plocal_var_50;
  int32_t local_var_48;
  uint64_t local_var_40;
  void *plocal_var_38;
  uint64_t *plocal_var_30;
  int32_t local_var_28;
  uint64_t local_var_20;
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (*(int64_t *)(system_message_buffer + 8) != 0) {
    plocal_var_38 = &system_data_buffer_ptr;
    local_var_20 = 0;
    plocal_var_30 = (uint64_t *)0x0;
    local_var_28 = 0;
    plocal_var_30 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13,param_4,0,0xfffffffffffffffe);
    *(int8_t *)plocal_var_30 = 0;
    uVar1 = CoreEngineSystemCleanup(plocal_var_30);
    local_var_20 = CONCAT44(local_var_20._4_4_,uVar1);
    *plocal_var_30 = 0x3a3a656e656353;
    local_var_28 = 7;
    puVar2 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x4e0) != (void *)0x0) {
      puVar2 = *(void **)(param_1 + 0x4e0);
    }
    System_DataHandler(&plocal_var_38,&memory_allocator_3888_ptr,puVar2);
    *(int32_t *)(param_1 + 0xa0) = 0xffffffff;
    plocal_var_58 = &system_data_buffer_ptr;
    local_var_40 = 0;
    plocal_var_50 = (uint64_t *)0x0;
    local_var_48 = 0;
    plocal_var_50 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13,param_4,uVar3,uVar4);
    *(int8_t *)plocal_var_50 = 0;
    uVar3 = CoreEngineSystemCleanup(plocal_var_50);
    *plocal_var_50 = 0x3a3a656e656353;
    local_var_48 = 7;
    puVar2 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x4e0) != (void *)0x0) {
      puVar2 = *(void **)(param_1 + 0x4e0);
    }
    local_var_40._0_4_ = uVar3;
    System_DataHandler(&plocal_var_58,&memory_allocator_3936_ptr,puVar2);
    *(int32_t *)(param_1 + 0xa4) = 0xffffffff;
    plocal_var_58 = &system_data_buffer_ptr;
    if (plocal_var_50 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_50 = (uint64_t *)0x0;
    local_var_40 = (uint64_t)local_var_40._4_4_ << 0x20;
    plocal_var_58 = &system_state_ptr;
    plocal_var_38 = &system_data_buffer_ptr;
    if (plocal_var_30 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  *(int32_t *)(*(int64_t *)(param_1 + 0x260) + 0x300) = *(int32_t *)(param_1 + 0xa0);
  return;
}
int64_t function_1a9dd0(int64_t param_1,int64_t param_2)
{
  byte *pbVar1;
  int iVar2;
  int64_t lVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *plVar9;
  function_3986d0(param_1 + 0x607e0);
  plVar9 = *(int64_t **)(param_1 + 0x60858);
  iVar4 = (int)(*(int64_t *)(param_1 + 0x60860) - (int64_t)plVar9 >> 3);
  if (0 < iVar4) {
    iVar2 = *(int *)(param_2 + 0x10);
    lVar8 = 0;
    do {
      lVar3 = *plVar9;
      iVar6 = *(int *)(lVar3 + 0x298);
      if (iVar2 == iVar6) {
        if (iVar2 != 0) {
          pbVar5 = *(byte **)(param_2 + 8);
          lVar7 = *(int64_t *)(lVar3 + 0x290) - (int64_t)pbVar5;
          do {
            pbVar1 = pbVar5 + lVar7;
            iVar6 = (uint)*pbVar5 - (uint)*pbVar1;
            if (iVar6 != 0) break;
            pbVar5 = pbVar5 + 1;
          } while (*pbVar1 != 0);
        }
LAB_1801a9e5d:
        if (iVar6 == 0) {
          return lVar3;
        }
      }
      else if (iVar2 == 0) goto LAB_1801a9e5d;
      lVar8 = lVar8 + 1;
      plVar9 = plVar9 + 1;
    } while (lVar8 < iVar4);
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1a9e90(int64_t param_1,int32_t *param_2,uint64_t param_3,int32_t *param_4,
void function_1a9e90(int64_t param_1,int32_t *param_2,uint64_t param_3,int32_t *param_4,
                  uint64_t *param_5)
{
  int64_t *plVar1;
  int8_t stack_array_108 [32];
  int32_t local_var_e8;
  int32_t local_var_e4;
  float fStack_e0;
  int32_t local_var_dc;
  int32_t local_var_c8;
  void *plocal_var_c0;
  int32_t local_var_b8;
  int32_t local_var_b4;
  int8_t local_var_b0;
  uint64_t local_var_a8;
  int32_t local_var_a0;
  int32_t local_var_9c;
  float fStack_98;
  int32_t local_var_94;
  uint64_t local_var_90;
  uint64_t local_var_88;
  int32_t local_var_80;
  int8_t local_var_7c;
  void **pplocal_var_78;
  int8_t stack_array_68 [28];
  int32_t local_var_4c;
  int32_t local_var_48;
  int32_t local_var_44;
  int32_t local_var_40;
  uint64_t local_var_3c;
  uint64_t local_var_34;
  int iStack_28;
  uint64_t local_var_18;
  local_var_a8 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_108;
  iStack_28 = 0;
  plocal_var_c0 = &processed_var_6432_ptr;
  local_var_b4 = 0x39b189;
  local_var_b8 = 2;
  local_var_b0 = 0;
  local_var_e8 = *param_2;
  local_var_e4 = param_2[1];
  fStack_e0 = (float)param_2[2];
  local_var_dc = param_2[3];
  plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0x28f8) + 0x318);
  if (plVar1 != (int64_t *)0x0) {
    fStack_98 = fStack_e0 + 1.5;
    local_var_c8 = 0x461c4000;
    local_var_94 = 0x7f7fffff;
    local_var_90 = 0;
    local_var_88 = 0x7f7fffffbf800000;
    local_var_80 = 0x461c4000;
    local_var_7c = 0;
    pplocal_var_78 = &plocal_var_c0;
    local_var_a0 = local_var_e8;
    local_var_9c = local_var_e4;
    (**(code **)(*plVar1 + 0x118))(plVar1,&local_var_a0,stack_array_68);
  }
  if (0 < iStack_28) {
    *param_4 = local_var_4c;
    param_4[1] = local_var_48;
    param_4[2] = local_var_44;
    param_4[3] = local_var_40;
    *param_5 = local_var_3c;
    param_5[1] = local_var_34;
  }
  iStack_28 = 0;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_108);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1a9fd0(int64_t param_1,int32_t *param_2,int32_t param_3,int32_t *param_4)
void function_1a9fd0(int64_t param_1,int32_t *param_2,int32_t param_3,int32_t *param_4)
{
  int64_t *plVar1;
  int8_t stack_array_118 [48];
  void *plocal_var_e8;
  int32_t local_var_e0;
  int32_t local_var_dc;
  int8_t local_var_d8;
  uint64_t local_var_d0;
  int32_t local_var_c8;
  int32_t local_var_c4;
  int32_t local_var_c0;
  int32_t local_var_bc;
  int32_t local_var_b8;
  int32_t local_var_b4;
  int32_t local_var_b0;
  int32_t local_var_ac;
  int32_t local_var_a8;
  int8_t local_var_a4;
  void **pplocal_var_a0;
  int32_t local_var_78;
  int8_t stack_array_68 [36];
  int32_t local_var_44;
  int iStack_28;
  uint64_t local_var_18;
  local_var_d0 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_118;
  iStack_28 = 0;
  plocal_var_e8 = &processed_var_6432_ptr;
  local_var_e0 = 2;
  local_var_d8 = 0;
  plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0x28f8) + 0x318);
  local_var_dc = param_3;
  if (plVar1 != (int64_t *)0x0) {
    local_var_78 = 0x461c4000;
    local_var_c0 = 0x459c4c00;
    local_var_bc = 0x7f7fffff;
    local_var_b8 = 0;
    local_var_b4 = 0;
    local_var_b0 = 0xbf800000;
    local_var_ac = 0x7f7fffff;
    local_var_a8 = 0x461c4000;
    local_var_a4 = 0;
    pplocal_var_a0 = &plocal_var_e8;
    local_var_c8 = *param_2;
    local_var_c4 = param_2[1];
    (**(code **)(*plVar1 + 0x118))(plVar1,&local_var_c8,stack_array_68);
  }
  if (0 < iStack_28) {
    *param_4 = local_var_44;
  }
  iStack_28 = 0;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_118);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void PhysicsSystem_JointManager(int64_t param_1,int64_t *param_2,float param_3,int32_t *param_4,
void PhysicsSystem_JointManager(int64_t param_1,int64_t *param_2,float param_3,int32_t *param_4,
                  int32_t param_5,int8_t param_6)
{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t uVar3;
  int8_t stack_array_168 [32];
  void **pplocal_var_148;
  float fStack_140;
  int32_t local_var_13c;
  int32_t local_var_138;
  int32_t local_var_134;
  float fStack_130;
  int32_t local_var_12c;
  uint64_t local_var_128;
  uint64_t local_var_120;
  uint64_t local_var_118;
  uint64_t local_var_110;
  int32_t local_var_104;
  int32_t local_var_f4;
  int32_t local_var_f0;
  int32_t local_var_ec;
  float fStack_e8;
  int32_t local_var_e4;
  int32_t local_var_d0;
  void *plocal_var_c8;
  int32_t local_var_c0;
  int32_t local_var_bc;
  int8_t local_var_b8;
  int8_t local_var_b0;
  uint64_t local_var_a8;
  uint64_t local_var_98;
  void **pplocal_var_90;
  int iStack_84;
  int32_t local_var_7c;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  int32_t local_var_68;
  float fStack_64;
  int32_t local_var_60;
  int iStack_58;
  uint64_t local_var_48;
  local_var_a8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  iStack_58 = 0;
  local_var_b8 = 0;
  plocal_var_c8 = &processed_var_6408_ptr;
  local_var_b0 = param_6;
  local_var_bc = param_5;
  local_var_c0 = 2;
  local_var_f0 = (int32_t)*param_2;
  local_var_ec = *(int32_t *)((int64_t)param_2 + 4);
  fStack_e8 = *(float *)(param_2 + 1);
  local_var_e4 = *(int32_t *)((int64_t)param_2 + 0xc);
  plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0x28f8) + 0x318);
  if (plVar1 != (int64_t *)0x0) {
    fStack_140 = fStack_e8 + 1.5;
    local_var_13c = 0x7f7fffff;
    local_var_d0 = 0x461c4000;
    local_var_12c = 0x7f7fffff;
    local_var_128 = 0;
    local_var_120 = 0x7f7fffffbf800000;
    local_var_110 = &plocal_var_c8;
    pplocal_var_148 = (void **)*param_2;
    local_var_138 = local_var_f0;
    local_var_134 = local_var_ec;
    fStack_130 = fStack_140;
    if (param_3 <= 0.0001) {
      local_var_118 = CONCAT35(local_var_118._5_3_,0x461c4000);
      (**(code **)(*plVar1 + 0x118))(plVar1,&local_var_138,&local_var_98);
    }
    else {
      local_var_118 = CONCAT44(param_3,0x461c4000);
      (**(code **)(*plVar1 + 0x148))();
    }
  }
  if (iStack_58 < 1) {
    if ((*(int64_t *)(param_1 + 0x2908) == 0) || (*(char *)(param_1 + 0x2960) == '\0'))
    goto LAB_1801aa310;
    uVar3 = function_3a56a0(*(int64_t *)(param_1 + 0x2908),param_2,0);
    pplocal_var_148 = (void **)0x0;
    function_3a5440(*(uint64_t *)(param_1 + 0x2908),&local_var_f0,param_2,&pplocal_var_148);
    uVar2 = *(int32_t *)((int64_t)param_2 + 4);
    local_var_f4 = 0x7f7fffff;
    local_var_118 = 0;
    local_var_104 = CONCAT31(local_var_104._1_3_,1);
    *param_4 = (int)*param_2;
    param_4[1] = uVar2;
    param_4[2] = uVar3;
    param_4[3] = 0x7f7fffff;
    pplocal_var_90 = pplocal_var_148;
    local_var_6c = local_var_f0;
    local_var_68 = local_var_ec;
    fStack_64 = fStack_e8;
    local_var_60 = local_var_e4;
  }
  else {
    local_var_118 = local_var_98;
    local_var_104 = CONCAT31(local_var_104._1_3_,(iStack_84 != 1) + '\x01');
    *param_4 = local_var_7c;
    param_4[1] = local_var_78;
    param_4[2] = local_var_74;
    param_4[3] = local_var_70;
    uVar3 = local_var_74;
  }
  param_4[4] = local_var_6c;
  param_4[5] = local_var_68;
  param_4[6] = fStack_64;
  param_4[7] = local_var_60;
  local_var_110._0_4_ = SUB84(pplocal_var_90,0);
  local_var_110._4_4_ = (int32_t)((uint64_t)pplocal_var_90 >> 0x20);
  param_4[8] = (int32_t)local_var_118;
  param_4[9] = local_var_118._4_4_;
  param_4[10] = (int32_t)local_var_110;
  param_4[0xb] = local_var_110._4_4_;
  *(uint64_t *)(param_4 + 0xc) = CONCAT44(local_var_104,uVar3);
  local_var_110 = pplocal_var_90;
LAB_1801aa310:
  iStack_58 = 0;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_168);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1aa3d0(int64_t param_1)
void function_1aa3d0(int64_t param_1)
{
  int64_t lVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int8_t astack_special_x_8 [8];
  int8_t *pstack_special_x_10;
  int64_t *plStack_60;
  uint64_t local_var_58;
  int64_t lStack_48;
  if (*(int *)(SYSTEM_STATE_MANAGER + 0xe4) != *(int *)(SYSTEM_STATE_MANAGER + 0xe0)) {
    function_1ac450();
  }
  if (*(int64_t *)(param_1 + 0x380) != 0) {
    function_2c2de0();
    pstack_special_x_10 = astack_special_x_8;
    uVar3 = SystemCore_PerformanceMonitor(system_resource_state,astack_special_x_8,*(int64_t *)(param_1 + 0x388) + 0x10,1);
    function_1ae990(param_1,uVar3);
  }
  lVar6 = SYSTEM_STATE_MANAGER;
  if (*(int64_t *)(param_1 + 0x60b80) != 0) {
    SystemFunction_0001803b0980();
  }
  if ((*(int *)(lVar6 + 0xb64) != *(int *)(lVar6 + 0xb60)) && (*(int64_t *)(param_1 + 0x260) != 0))
  {
    function_1be9f0(*(int64_t *)(param_1 + 0x260) + 0x58);
    lVar6 = SYSTEM_STATE_MANAGER;
  }
  if ((*(int64_t *)(param_1 + 800) != 0) && (*(int *)(lVar6 + 0xbd4) != *(int *)(lVar6 + 0xbd0))) {
    *(int *)(param_1 + 0x3358) = *(int *)(param_1 + 0x3358) + 1;
    if (*(int *)(lVar6 + 0xbd0) < 1) {
      function_31dfa0(*(uint64_t *)(param_1 + 800));
      lVar6 = SYSTEM_STATE_MANAGER;
    }
    else {
      SystemFunction_00018031cb70();
      function_1a99d0(param_1);
      function_31e050(*(uint64_t *)(param_1 + 800));
      lVar6 = SYSTEM_STATE_MANAGER;
    }
  }
  uVar9 = 0;
  uVar5 = uVar9;
  uVar8 = uVar9;
  if (*(int64_t *)(param_1 + 0xe8) - *(int64_t *)(param_1 + 0xe0) >> 3 != 0) {
    do {
      (**(code **)(**(int64_t **)(uVar5 + *(int64_t *)(param_1 + 0xe0)) + 0x40))();
      uVar7 = (int)uVar8 + 1;
      uVar5 = uVar5 + 8;
      uVar8 = (uint64_t)uVar7;
      lVar6 = SYSTEM_STATE_MANAGER;
    } while ((uint64_t)(int64_t)(int)uVar7 <
             (uint64_t)(*(int64_t *)(param_1 + 0xe8) - *(int64_t *)(param_1 + 0xe0) >> 3));
  }
  if ((*(int *)(lVar6 + 0x694) != *(int *)(lVar6 + 0x690)) &&
     (*(int64_t *)(param_1 + 0x60b80) != 0)) {
    if ((*(char *)(param_1 + 0x2964) == '\0') || (*(int *)(lVar6 + 0x690) == 0)) {
      function_1af730(param_1);
    }
    else {
      function_1af6d0(param_1);
    }
  }
  lVar6 = *(int64_t *)(param_1 + 0x358);
  if (lVar6 != 0) {
    *(int32_t *)(lVar6 + 0x78) = 0;
    *(int8_t *)(lVar6 + 0x7c) = 1;
    *(int32_t *)(lVar6 + 0x80) = 0;
    *(uint64_t *)(lVar6 + 0x98) = 0;
  }
  if (*(int64_t *)(param_1 + 0x60830) != 0) {
    function_1be910(param_1 + 0x607e0,&plStack_60);
    uVar5 = local_var_58;
    lVar6 = lStack_48;
LAB_1801aa610:
    if (uVar5 != *(uint64_t *)(param_1 + 0x60838)) {
      iVar2 = (int)(*(int64_t *)(lVar6 + 0xf8) - *(int64_t *)(lVar6 + 0xf0) >> 3);
      uVar8 = uVar9;
      if (0 < iVar2) {
        do {
          (**(code **)(**(int64_t **)(*(int64_t *)(lVar6 + 0xf0) + uVar8 * 8) + 0x188))();
          uVar8 = uVar8 + 1;
        } while ((int64_t)uVar8 < (int64_t)iVar2);
      }
      lVar1 = *(int64_t *)(lVar6 + 0x260);
      if ((lVar1 != 0) &&
         (iVar2 = (int)(*(int64_t *)(lVar1 + 0x1b0) - *(int64_t *)(lVar1 + 0x1a8) >> 3),
         uVar8 = uVar9, 0 < iVar2)) {
        do {
          (**(code **)(**(int64_t **)
                         (*(int64_t *)(*(int64_t *)(lVar6 + 0x260) + 0x1a8) + uVar8 * 8) + 0x188))
                    ();
          uVar8 = uVar8 + 1;
        } while ((int64_t)uVar8 < (int64_t)iVar2);
      }
      lVar1 = *plStack_60;
      do {
        uVar5 = uVar5 + 1;
        lVar4 = (uVar5 & 0xffffffff) * 0x10;
        uVar8 = lVar4 + 8 + lVar1;
        if ((*(uint64_t *)(lVar4 + lVar1) & 0xffffffff00000000) == 0) {
          uVar8 = uVar9;
        }
        if (uVar8 != 0) {
          lVar6 = *(int64_t *)(lVar1 + 8 + (uVar5 & 0xffffffff) * 0x10);
          break;
        }
      } while (uVar5 != plStack_60[1]);
      goto LAB_1801aa610;
    }
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x0001801aa98d)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address