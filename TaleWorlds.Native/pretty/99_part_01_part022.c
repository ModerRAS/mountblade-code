#define SystemInitializer System_Initializer2  // 系统初始化器
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_01_part022.c - 5 个函数
// 函数: void function_0b5f00(int64_t param_1)
void function_0b5f00(int64_t param_1)
{
  int32_t *puVar1;
  uint uVar2;
  int iVar3;
  int32_t uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int8_t *puVar8;
  int8_t *puVar9;
  int8_t *puVar10;
  int8_t *puVar11;
  uint64_t uVar12;
  void *puVar13;
  uint64_t uVar14;
  int32_t extraout_XMM0_Da;
  void *plocal_var_100;
  int8_t *plocal_var_f8;
  uint local_var_f0;
  uint64_t local_var_e8;
  void *plocal_var_e0;
  int8_t *plocal_var_d8;
  uint local_var_d0;
  uint64_t local_var_c8;
  void *plocal_var_c0;
  int8_t *plocal_var_b8;
  uint local_var_b0;
  uint64_t local_var_a8;
  void *plocal_var_a0;
  int8_t *plocal_var_98;
  uint local_var_90;
  uint64_t local_var_88;
  void *plocal_var_80;
  int8_t *plocal_var_78;
  int32_t local_var_70;
  uint64_t local_var_68;
  void *plocal_var_60;
  int64_t lStack_58;
  int iStack_50;
  int32_t local_var_48;
  uint64_t local_var_40;
  local_var_40 = 0xfffffffffffffffe;
  puVar10 = (int8_t *)0x0;
  plocal_var_100 = &system_data_buffer_ptr;
  local_var_e8 = 0;
  plocal_var_f8 = (int8_t *)0x0;
  local_var_f0 = 0;
  puVar13 = &system_buffer_ptr;
  if (*(void **)(*system_main_module_state + 0x440) != (void *)0x0) {
    puVar13 = *(void **)(*system_main_module_state + 0x440);
  }
  CoreSystem_ConfigValidator0(&plocal_var_100,puVar13);
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) +
               0x48) < system_system_config_memory) && (SystemInitializer(&system_ptr_9238), system_system_config_memory == -1)) {
    system_system_config_memory = &system_data_buffer_ptr;
    system_system_config_memory = 0;
    system_system_config_memory = (int32_t *)0x0;
    system_system_config_memory = 0;
    system_system_config_memory = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x13,0x13);
    *(int8_t *)system_system_config_memory = 0;
    uVar4 = CoreEngineSystemCleanup(system_system_config_memory);
    puVar1 = system_system_config_memory;
    system_system_config_memory = CONCAT44(system_system_config_memory,uVar4);
    *system_system_config_memory = 0x656e6547;
    puVar1[1] = 0x65746172;
    puVar1[2] = 0x78655464;
    puVar1[3] = 0x65727574;
    *(int16_t *)(puVar1 + 4) = 0x2f73;
    *(int8_t *)((int64_t)puVar1 + 0x12) = 0;
    system_system_config_memory = 0x12;
    function_8fc820(function_941a30);
    SystemCore_StateController(&system_ptr_9238);
  }
  plocal_var_80 = &system_data_buffer_ptr;
  local_var_68 = 0;
  plocal_var_78 = (int8_t *)0x0;
  local_var_70 = 0;
  puVar8 = puVar10;
  if (system_system_config_memory != 0) {
    iVar3 = system_system_config_memory + 1;
    if (iVar3 < 0x10) {
      iVar3 = 0x10;
    }
    puVar8 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar3,0x13);
    *puVar8 = 0;
    plocal_var_78 = puVar8;
    uVar4 = CoreEngineSystemCleanup(puVar8);
    local_var_68 = CONCAT44(local_var_68._4_4_,uVar4);
    if (system_system_config_memory != 0) {
// WARNING: Subroutine does not return
      memcpy(puVar8,system_system_config_memory,system_system_config_memory + 1);
    }
  }
  uVar2 = local_var_f0;
  if (system_system_config_memory != (int32_t *)0x0) {
    local_var_70 = 0;
    if (puVar8 != (int8_t *)0x0) {
      *puVar8 = 0;
    }
    local_var_68 = local_var_68 & 0xffffffff;
  }
  plocal_var_a0 = &system_data_buffer_ptr;
  uVar6 = 0;
  local_var_88 = 0;
  plocal_var_98 = (int8_t *)0x0;
  local_var_90 = 0;
  uVar14 = (uint64_t)local_var_f0;
  puVar9 = puVar10;
  if (plocal_var_f8 == (int8_t *)0x0) {
LAB_1800b60e2:
    if (uVar2 != 0) {
// WARNING: Subroutine does not return
      memcpy(puVar9,plocal_var_f8,uVar14);
    }
  }
  else if (local_var_f0 != 0) {
    iVar3 = local_var_f0 + 1;
    if (iVar3 < 0x10) {
      iVar3 = 0x10;
    }
    puVar9 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar3,0x13);
    *puVar9 = 0;
    plocal_var_98 = puVar9;
    uVar4 = CoreEngineSystemCleanup(puVar9);
    local_var_88 = CONCAT44(local_var_88._4_4_,uVar4);
    goto LAB_1800b60e2;
  }
  local_var_90 = uVar2;
  if (puVar9 != (int8_t *)0x0) {
    puVar9[uVar14] = 0;
  }
  uVar4 = local_var_e8._4_4_;
  local_var_88 = CONCAT44(local_var_e8._4_4_,(int32_t)local_var_88);
  SystemCore_EncryptionEngine0(&plocal_var_60,param_1 + 0x10);
  plocal_var_c0 = &system_data_buffer_ptr;
  local_var_a8 = 0;
  plocal_var_b8 = (int8_t *)0x0;
  puVar11 = (int8_t *)0x0;
  uVar7 = 0;
  local_var_b0 = 0;
  uVar5 = 0;
  if (puVar9 == (int8_t *)0x0) {
LAB_1800b6221:
    uVar6 = uVar5;
    if (uVar2 != 0) {
// WARNING: Subroutine does not return
      memcpy(puVar10,puVar9,uVar14);
    }
  }
  else if (uVar2 != 0) {
    iVar3 = uVar2 + 1;
    if (iVar3 < 0x10) {
      iVar3 = 0x10;
    }
    puVar10 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar3,0x13);
    *puVar10 = 0;
    plocal_var_b8 = puVar10;
    uVar5 = CoreEngineSystemCleanup(puVar10);
    local_var_a8 = CONCAT44(local_var_a8._4_4_,uVar5);
    goto LAB_1800b6221;
  }
  local_var_b0 = uVar2;
  if (puVar10 != (int8_t *)0x0) {
    puVar10[uVar14] = 0;
  }
  local_var_a8 = CONCAT44(uVar4,(int32_t)local_var_a8);
  if (0 < iStack_50) {
    iVar3 = iStack_50 + uVar2;
    if (iVar3 != 0) {
      if (puVar10 == (int8_t *)0x0) {
        iVar3 = iVar3 + 1;
        if (iVar3 < 0x10) {
          iVar3 = 0x10;
        }
        puVar10 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar3,0x13);
        *puVar10 = 0;
      }
      else {
        if (iVar3 + 1U <= uVar6) goto LAB_1800b62bf;
        puVar10 = (int8_t *)DataValidator(system_memory_pool_ptr,puVar10,iVar3 + 1U,0x10,0x13);
      }
      plocal_var_b8 = puVar10;
      uVar4 = CoreEngineSystemCleanup(puVar10);
      local_var_a8 = CONCAT44(local_var_a8._4_4_,uVar4);
    }
LAB_1800b62bf:
// WARNING: Subroutine does not return
    memcpy(puVar10 + uVar2,lStack_58,(int64_t)(iStack_50 + 1));
  }
  plocal_var_e0 = &system_data_buffer_ptr;
  local_var_c8 = 0;
  plocal_var_d8 = (int8_t *)0x0;
  local_var_d0 = 0;
  uVar6 = 0;
  if (puVar10 == (int8_t *)0x0) {
LAB_1800b6357:
    uVar7 = uVar6;
    if (uVar2 != 0) {
// WARNING: Subroutine does not return
      memcpy(puVar11,puVar10,uVar2);
    }
  }
  else if (uVar2 != 0) {
    iVar3 = uVar2 + 1;
    if (iVar3 < 0x10) {
      iVar3 = 0x10;
    }
    puVar11 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar3,0x13);
    *puVar11 = 0;
    plocal_var_d8 = puVar11;
    uVar6 = CoreEngineSystemCleanup(puVar11);
    local_var_c8 = CONCAT44(local_var_c8._4_4_,uVar6);
    goto LAB_1800b6357;
  }
  local_var_d0 = uVar2;
  if (puVar11 != (int8_t *)0x0) {
    puVar11[uVar2] = 0;
  }
  local_var_c8 = CONCAT44(uVar4,(int32_t)local_var_c8);
  iVar3 = uVar2 + 4;
  if (iVar3 != 0) {
    uVar6 = uVar2 + 5;
    if (puVar11 == (int8_t *)0x0) {
      if ((int)uVar6 < 0x10) {
        uVar6 = 0x10;
      }
      puVar11 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar6,0x13);
      *puVar11 = 0;
    }
    else {
      if (uVar6 <= uVar7) goto LAB_1800b63ec;
      puVar11 = (int8_t *)DataValidator(system_memory_pool_ptr,puVar11,uVar6,0x10,0x13);
    }
    plocal_var_d8 = puVar11;
    uVar7 = CoreEngineSystemCleanup(puVar11);
    local_var_c8 = CONCAT44(local_var_c8._4_4_,uVar7);
  }
LAB_1800b63ec:
  *(int32_t *)(puVar11 + uVar2) = 0x7364642e;
  puVar11[(uint64_t)uVar2 + 4] = 0;
  if (plocal_var_f8 != (int8_t *)0x0) {
    local_var_d0 = iVar3;
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  local_var_e8 = CONCAT44(uVar4,uVar7);
  local_var_d0 = 0;
  plocal_var_d8 = (int8_t *)0x0;
  local_var_c8 = 0;
  plocal_var_e0 = &system_state_ptr;
  plocal_var_c0 = &system_data_buffer_ptr;
  plocal_var_f8 = puVar11;
  local_var_f0 = iVar3;
  if (puVar10 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar10);
  }
  plocal_var_b8 = (int8_t *)0x0;
  local_var_a8 = local_var_a8 & 0xffffffff00000000;
  plocal_var_c0 = &system_state_ptr;
  plocal_var_60 = &system_data_buffer_ptr;
  if (lStack_58 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_58 = 0;
  local_var_48 = 0;
  plocal_var_60 = &system_state_ptr;
  plocal_var_a0 = &system_data_buffer_ptr;
  if (puVar9 == (int8_t *)0x0) {
    plocal_var_98 = (int8_t *)0x0;
    local_var_88 = local_var_88 & 0xffffffff00000000;
    plocal_var_a0 = &system_state_ptr;
    plocal_var_80 = &system_data_buffer_ptr;
    if (puVar8 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar8);
    }
    plocal_var_78 = (int8_t *)0x0;
    local_var_68 = local_var_68 & 0xffffffff00000000;
    plocal_var_80 = &system_state_ptr;
    uVar12 = SystemCore_Scheduler(param_1);
    function_225ee0(extraout_XMM0_Da,&plocal_var_100,4,uVar12);
    plocal_var_100 = &system_data_buffer_ptr;
    if (plocal_var_f8 == (int8_t *)0x0) {
      return;
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar9);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_0b6620(void)
void function_0b6620(void)
{
  code *pcVar1;
  bool bVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  char cVar11;
  int64_t lStackX_8;
  int64_t lStackX_10;
  lStackX_10 = 9;
  lStackX_8 = 0;
  lVar10 = 0x5a0;
  do {
    lVar4 = system_resource_state;
    uVar3 = system_context_ptr;
    lVar7 = *(int64_t *)(lVar10 + 8 + system_resource_state);
    lVar6 = *(int64_t *)(lVar10 + system_resource_state);
    do {
      bVar2 = false;
      uVar8 = 0;
      if (lVar7 - lVar6 >> 3 == 0) break;
      uVar9 = 0;
      do {
        plVar5 = *(int64_t **)(uVar9 * 8 + lVar6);
        pcVar1 = *(code **)(*plVar5 + 0x68);
        if (pcVar1 == (code *)&processed_var_9696_ptr) {
          cVar11 = (char)plVar5[2] != '\0';
        }
        else {
          cVar11 = (*pcVar1)();
        }
        if (cVar11 == '\0') {
          bVar2 = true;
          plVar5 = (int64_t *)PerformanceOptimizer(uVar3);
          cVar11 = (**(code **)(*plVar5 + 0x20))(plVar5,0);
          if (cVar11 == '\0') {
            plVar5 = *(int64_t **)(uVar9 * 8 + *(int64_t *)(lVar10 + lVar4));
            pcVar1 = *(code **)(*plVar5 + 0x80);
            if (pcVar1 == (code *)&ui_system_data_1840_ptr) {
              function_0496b0(plVar5 + 4);
            }
            else {
              (*pcVar1)();
            }
          }
        }
        lVar7 = *(int64_t *)(lVar10 + 8 + lVar4);
        uVar8 = uVar8 + 1;
        lVar6 = *(int64_t *)(lVar10 + lVar4);
        uVar9 = (uint64_t)uVar8;
      } while (uVar9 < (uint64_t)(lVar7 - lVar6 >> 3));
    } while (bVar2);
    SystemCore_Controller(lVar4 + 0x5a0 + lStackX_8);
    lStackX_8 = lStackX_8 + 0x20;
    lVar10 = lVar10 + 0x20;
    lStackX_10 = lStackX_10 + -1;
    if (lStackX_10 == 0) {
      return;
    }
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_0b6780(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_0b6780(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  lVar2 = system_resource_state;
  uVar9 = 0xfffffffffffffffe;
  SystemCore_Controller(param_2);
  function_0b8cb0(param_2,*(int64_t *)(lVar2 + 0x4d0) - *(int64_t *)(lVar2 + 0x4c8) >> 3 &
                        0xffffffff);
  plVar8 = *(int64_t **)(lVar2 + 0x4c8);
  if (plVar8 < *(int64_t **)(lVar2 + 0x4d0)) {
    do {
      plVar1 = (int64_t *)*plVar8;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      plVar3 = (int64_t *)0x0;
      plVar5 = (int64_t *)param_2[1];
      if (plVar5 < (int64_t *)param_2[2]) {
        param_2[1] = (int64_t)(plVar5 + 1);
        *plVar5 = (int64_t)plVar1;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x28))(plVar1);
        }
      }
      else {
        plVar6 = (int64_t *)*param_2;
        lVar4 = (int64_t)plVar5 - (int64_t)plVar6 >> 3;
        if (lVar4 == 0) {
          lVar4 = 1;
LAB_1800b685e:
          plVar3 = (int64_t *)
                   CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar4 * 8,(char)param_2[3],param_4,uVar9);
          plVar5 = (int64_t *)param_2[1];
          plVar6 = (int64_t *)*param_2;
          plVar7 = plVar3;
        }
        else {
          lVar4 = lVar4 * 2;
          plVar7 = plVar3;
          if (lVar4 != 0) goto LAB_1800b685e;
        }
        for (; plVar6 != plVar5; plVar6 = plVar6 + 1) {
          *plVar3 = *plVar6;
          *plVar6 = 0;
          plVar3 = plVar3 + 1;
        }
        *plVar3 = (int64_t)plVar1;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x28))(plVar1);
        }
        plVar5 = (int64_t *)param_2[1];
        plVar6 = (int64_t *)*param_2;
        if (plVar6 != plVar5) {
          do {
            if ((int64_t *)*plVar6 != (int64_t *)0x0) {
              (**(code **)(*(int64_t *)*plVar6 + 0x38))();
            }
            plVar6 = plVar6 + 1;
          } while (plVar6 != plVar5);
          plVar6 = (int64_t *)*param_2;
        }
        if (plVar6 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(plVar6);
        }
        *param_2 = (int64_t)plVar7;
        param_2[1] = (int64_t)(plVar3 + 1);
        param_2[2] = (int64_t)(plVar7 + lVar4);
      }
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1);
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 < *(int64_t **)(lVar2 + 0x4d0));
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_0b6940(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_0b6940(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  lVar1 = system_resource_state;
  uVar9 = 0xfffffffffffffffe;
  plVar8 = (int64_t *)param_2[1];
  plVar5 = (int64_t *)*param_2;
  if (plVar5 != plVar8) {
    do {
      if ((int64_t *)*plVar5 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar5 + 0x38))();
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar8);
    plVar5 = (int64_t *)*param_2;
  }
  param_2[1] = (int64_t)plVar5;
  function_0b8cb0(param_2,*(int64_t *)(lVar1 + 0x1d8) - *(int64_t *)(lVar1 + 0x1d0) >> 3 &
                        0xffffffff);
  plVar8 = *(int64_t **)(lVar1 + 0x1d0);
  if (plVar8 < *(int64_t **)(lVar1 + 0x1d8)) {
    do {
      plVar5 = (int64_t *)*plVar8;
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5);
      }
      plVar2 = (int64_t *)0x0;
      plVar4 = (int64_t *)param_2[1];
      if (plVar4 < (int64_t *)param_2[2]) {
        param_2[1] = (int64_t)(plVar4 + 1);
        *plVar4 = (int64_t)plVar5;
        if (plVar5 != (int64_t *)0x0) {
          (**(code **)(*plVar5 + 0x28))(plVar5);
        }
      }
      else {
        plVar6 = (int64_t *)*param_2;
        lVar3 = (int64_t)plVar4 - (int64_t)plVar6 >> 3;
        if (lVar3 == 0) {
          lVar3 = 1;
LAB_1800b6a3c:
          plVar2 = (int64_t *)
                   CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar3 * 8,(char)param_2[3],param_4,uVar9);
          plVar4 = (int64_t *)param_2[1];
          plVar6 = (int64_t *)*param_2;
          plVar7 = plVar2;
        }
        else {
          lVar3 = lVar3 * 2;
          plVar7 = plVar2;
          if (lVar3 != 0) goto LAB_1800b6a3c;
        }
        for (; plVar6 != plVar4; plVar6 = plVar6 + 1) {
          *plVar2 = *plVar6;
          *plVar6 = 0;
          plVar2 = plVar2 + 1;
        }
        *plVar2 = (int64_t)plVar5;
        if (plVar5 != (int64_t *)0x0) {
          (**(code **)(*plVar5 + 0x28))(plVar5);
        }
        plVar4 = (int64_t *)param_2[1];
        plVar6 = (int64_t *)*param_2;
        if (plVar6 != plVar4) {
          do {
            if ((int64_t *)*plVar6 != (int64_t *)0x0) {
              (**(code **)(*(int64_t *)*plVar6 + 0x38))();
            }
            plVar6 = plVar6 + 1;
          } while (plVar6 != plVar4);
          plVar6 = (int64_t *)*param_2;
        }
        if (plVar6 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(plVar6);
        }
        *param_2 = (int64_t)plVar7;
        param_2[1] = (int64_t)(plVar2 + 1);
        param_2[2] = (int64_t)(plVar7 + lVar3);
      }
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5);
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 < *(int64_t **)(lVar1 + 0x1d8));
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_0b6b20(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_0b6b20(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  lVar1 = system_resource_state;
  uVar10 = 0xfffffffffffffffe;
  SystemCore_Controller();
  uVar9 = *(int64_t *)(lVar1 + 0xa8) - *(int64_t *)(lVar1 + 0xa0) >> 3 & 0xffffffff;
  plVar7 = (int64_t *)*param_2;
  plVar2 = (int64_t *)0x0;
  if ((uint64_t)(param_2[2] - (int64_t)plVar7 >> 3) < uVar9) {
    if (uVar9 != 0) {
      plVar2 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar9 * 8,(char)param_2[3],param_4,uVar10);
      plVar7 = (int64_t *)*param_2;
    }
    plVar3 = (int64_t *)param_2[1];
    plVar5 = plVar2;
    if (plVar7 != plVar3) {
      do {
        *plVar5 = *plVar7;
        *plVar7 = 0;
        plVar7 = plVar7 + 1;
        plVar5 = plVar5 + 1;
      } while (plVar7 != plVar3);
      plVar3 = (int64_t *)param_2[1];
      plVar7 = (int64_t *)*param_2;
      if (plVar7 != plVar3) {
        do {
          if ((int64_t *)*plVar7 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar7 + 0x38))();
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar3);
        plVar7 = (int64_t *)*param_2;
      }
    }
    if (plVar7 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(plVar7);
    }
    *param_2 = (int64_t)plVar2;
    param_2[1] = (int64_t)plVar5;
    param_2[2] = (int64_t)(plVar2 + uVar9);
  }
  plVar7 = *(int64_t **)(lVar1 + 0xa0);
  if (plVar7 < *(int64_t **)(lVar1 + 0xa8)) {
    do {
      plVar3 = (int64_t *)0x0;
      plVar2 = (int64_t *)*plVar7;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2);
      }
      plVar5 = (int64_t *)param_2[1];
      if (plVar5 < (int64_t *)param_2[2]) {
        param_2[1] = (int64_t)(plVar5 + 1);
        *plVar5 = (int64_t)plVar2;
        if (plVar2 != (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x28))(plVar2);
        }
      }
      else {
        plVar6 = (int64_t *)*param_2;
        lVar4 = (int64_t)plVar5 - (int64_t)plVar6 >> 3;
        if (lVar4 == 0) {
          lVar4 = 1;
LAB_1800b6c99:
          plVar3 = (int64_t *)
                   CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar4 * 8,(char)param_2[3],param_4,uVar10);
          plVar5 = (int64_t *)param_2[1];
          plVar6 = (int64_t *)*param_2;
          plVar8 = plVar3;
        }
        else {
          lVar4 = lVar4 * 2;
          plVar8 = plVar3;
          if (lVar4 != 0) goto LAB_1800b6c99;
        }
        for (; plVar6 != plVar5; plVar6 = plVar6 + 1) {
          *plVar3 = *plVar6;
          *plVar6 = 0;
          plVar3 = plVar3 + 1;
        }
        *plVar3 = (int64_t)plVar2;
        if (plVar2 != (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x28))(plVar2);
        }
        plVar5 = (int64_t *)param_2[1];
        plVar6 = (int64_t *)*param_2;
        if (plVar6 != plVar5) {
          do {
            if ((int64_t *)*plVar6 != (int64_t *)0x0) {
              (**(code **)(*(int64_t *)*plVar6 + 0x38))();
            }
            plVar6 = plVar6 + 1;
          } while (plVar6 != plVar5);
          plVar6 = (int64_t *)*param_2;
        }
        if (plVar6 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(plVar6);
        }
        *param_2 = (int64_t)plVar8;
        param_2[1] = (int64_t)(plVar3 + 1);
        param_2[2] = (int64_t)(plVar8 + lVar4);
      }
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2);
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 < *(int64_t **)(lVar1 + 0xa8));
  }
  return;
}