#include "ultra_high_freq_fun_definitions.h"
n//  的语义化别名
#define SystemCore_PointerManager
// $fun 的语义化别名
#define $alias_name $fun
/* SystemCore_ConfigValidator - SystemCore_ConfigValidator */
#define SystemCore_ConfigValidator SystemCore_ConfigValidator
/* 函数别名定义: RenderingSystemProcessor */
#define RenderingSystemProcessor RenderingSystemProcessor
// 02_core_engine_part015.c - 23 个函数
// 函数: void function_055e60(int64_t param_1)
void function_055e60(int64_t param_1)
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
        if (*(int64_t **)(lVar2 + 0x10) != (int64_t *)0x0) {
          (**(code **)(**(int64_t **)(lVar2 + 0x10) + 0x38))();
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
int64_t function_055e80(int64_t param_1)
{
  *(uint64_t *)(param_1 + 8) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 8) = &system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  return param_1;
}
// 函数: void function_055ed0(int64_t param_1)
void function_055ed0(int64_t param_1)
{
  *(uint64_t *)(param_1 + 8) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x10) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 8) = &system_state_ptr;
  return;
}
// 函数: void function_055f20(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_055f20(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  function_058210(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}
// 函数: void function_055f50(int64_t param_1)
void function_055f50(int64_t param_1)
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
        if (*(int64_t **)(lVar2 + 0x10) != (int64_t *)0x0) {
          (**(code **)(**(int64_t **)(lVar2 + 0x10) + 0x38))();
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
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_055f70(uint64_t param_1,int32_t param_2)
void function_055f70(uint64_t param_1,int32_t param_2)
{
  code *pcVar1;
  if (system_cache_buffer != 0) {
    SystemFunction_00018005a410(system_cache_buffer + 8);
  }
  Sleep(2000);
  _Exit(param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_055fa0(void)
void function_055fa0(void)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  uint64_t in_R9;
  uint64_t uVar6;
  pcVar3 = core_system_data_config;
  uVar6 = 0xfffffffffffffffe;
  if (*core_system_data_config != '\0') {
    puVar1 = (uint64_t *)*core_system_data_config;
    iVar4 = _Mtx_lock(0x180c91970);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    uVar2 = SYSTEM_DATA_MANAGER_A;
    SYSTEM_DATA_MANAGER_A = *puVar1;
    CoreSystem_Validator(&processed_var_6880_ptr,0,0,in_R9,uVar6);
    SystemCore_CacheManager0(&processed_var_6896_ptr,*(int32_t *)(pcVar3 + 4));
    SystemCore_CacheManager0(&processed_var_6928_ptr,*(int32_t *)(pcVar3 + 8));
    SystemCore_CacheManager0(&processed_var_6960_ptr,*(int32_t *)(pcVar3 + 0xc));
    SystemCore_CacheManager0(&processed_var_6992_ptr,*(int32_t *)(pcVar3 + 0x10));
    SystemCore_CacheManager0(&processed_var_7024_ptr,*(int32_t *)(pcVar3 + 0x14));
    SystemCore_CacheManager0(&processed_var_7064_ptr,*(int32_t *)(pcVar3 + 0x18));
    for (pcVar5 = *(char **)(pcVar3 + 0x28); pcVar5 != pcVar3 + 0x20;
        pcVar5 = (char *)SystemFunction_00018066bd70(pcVar5)) {
      SystemCore_CacheManager0(&processed_var_7104_ptr,*(int32_t *)(pcVar5 + 0x20),*(int32_t *)(pcVar5 + 0x24));
    }
    for (pcVar5 = *(char **)(pcVar3 + 0x58); pcVar5 != pcVar3 + 0x50;
        pcVar5 = (char *)SystemFunction_00018066bd70(pcVar5)) {
      SystemCore_CacheManager0(&processed_var_7144_ptr,*(int32_t *)(pcVar5 + 0x20),*(int32_t *)(pcVar5 + 0x24));
    }
    SystemCore_CacheManager0(&processed_var_7184_ptr,*(int32_t *)(pcVar3 + 0x80));
    SystemCore_CacheManager0(&processed_var_7224_ptr,*(int32_t *)(pcVar3 + 0x84));
    SystemCore_CacheManager0(&processed_var_7264_ptr,*(int32_t *)(pcVar3 + 0x88));
    > HighFreq_CacheSystem1();
    SYSTEM_DATA_MANAGER_A = uVar2;
    iVar4 = _Mtx_unlock(0x180c91970);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
  }
  return;
}
// 函数: void function_056150(int64_t param_1)
void function_056150(int64_t param_1)
{
  char cVar1;
  char cVar2;
  int iVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int iVar6;
  char *pcVar7;
  int64_t *plVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t lVar12;
  int iVar13;
  int64_t lVar14;
  int iVar15;
  int64_t lVar16;
  int iVar17;
  uint64_t uVar18;
  int iVar19;
  bool bVar20;
  uVar10 = 0;
  lVar9 = *(int64_t *)(param_1 + 0x50);
  lVar12 = *(int64_t *)(param_1 + 0x48);
  if (lVar9 - lVar12 >> 3 != 0) {
    iVar19 = 1;
    lVar16 = 8;
    uVar18 = uVar10;
    do {
      iVar17 = (int)uVar10;
      iVar6 = -1;
      if ((uint64_t)(int64_t)iVar19 < (uint64_t)(lVar9 - lVar12 >> 3)) {
        lVar9 = *(int64_t *)(param_1 + 0x50);
        lVar14 = lVar16;
        iVar13 = iVar19;
        iVar15 = -1;
        do {
          iVar6 = *(int *)(*(int64_t *)(lVar14 + lVar12) + 0x10);
          iVar3 = *(int *)(*(int64_t *)(uVar18 + lVar12) + 0x10);
          if (iVar6 == iVar3) {
            if (iVar6 == 0) {
LAB_180056220:
              if (iVar3 != 0) goto LAB_180056228;
              bVar20 = true;
            }
            else {
              pcVar7 = *(char **)(*(int64_t *)(lVar14 + lVar12) + 8);
              lVar11 = *(int64_t *)(*(int64_t *)(uVar18 + lVar12) + 8) - (int64_t)pcVar7;
              do {
                cVar1 = *pcVar7;
                cVar2 = pcVar7[lVar11];
                if (cVar1 != cVar2) break;
                pcVar7 = pcVar7 + 1;
              } while (cVar2 != '\0');
              bVar20 = cVar1 == cVar2;
            }
          }
          else {
            if (iVar6 == 0) goto LAB_180056220;
LAB_180056228:
            bVar20 = false;
          }
          iVar6 = iVar13;
          if (!bVar20) {
            iVar6 = iVar15;
          }
          iVar13 = iVar13 + 1;
          lVar14 = lVar14 + 8;
          iVar15 = iVar6;
        } while ((uint64_t)(int64_t)iVar13 < (uint64_t)(lVar9 - lVar12 >> 3));
      }
      if (iVar6 != -1) {
        lVar14 = (int64_t)iVar6;
        lVar9 = *(int64_t *)(lVar12 + lVar14 * 8);
        *(double *)(*(int64_t *)(uVar18 + lVar12) + 0x40) =
             *(double *)(lVar9 + 0x40) + *(double *)(*(int64_t *)(uVar18 + lVar12) + 0x40);
        plVar8 = *(int64_t **)(lVar9 + 0x48);
        if (plVar8 != *(int64_t **)(lVar9 + 0x50)) {
          lVar12 = *(int64_t *)(param_1 + 0x48);
          do {
            *(uint64_t *)(*plVar8 + 0x68) = *(uint64_t *)(uVar18 + lVar12);
            plVar8 = plVar8 + 1;
            lVar12 = *(int64_t *)(param_1 + 0x48);
          } while (plVar8 != *(int64_t **)(*(int64_t *)(lVar12 + lVar14 * 8) + 0x50));
        }
        lVar9 = *(int64_t *)(lVar12 + lVar14 * 8);
        function_058a20(*(int64_t *)(uVar18 + lVar12) + 0x48,
                      *(uint64_t *)(*(int64_t *)(uVar18 + lVar12) + 0x50),
                      *(uint64_t *)(lVar9 + 0x48),*(uint64_t *)(lVar9 + 0x50));
        lVar9 = *(int64_t *)(*(int64_t *)(param_1 + 0x48) + lVar14 * 8);
        *(uint64_t *)(lVar9 + 0x50) = *(uint64_t *)(lVar9 + 0x48);
        function_056150(*(uint64_t *)(uVar18 + *(int64_t *)(param_1 + 0x48)));
        function_056410(*(uint64_t *)(*(int64_t *)(param_1 + 0x48) + lVar14 * 8));
        puVar4 = *(uint64_t **)(*(int64_t *)(param_1 + 0x48) + lVar14 * 8);
        if (puVar4 != (uint64_t *)0x0) {
          if (puVar4[9] != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          puVar4[4] = &system_data_buffer_ptr;
          if (puVar4[5] == 0) {
            puVar4[5] = 0;
            *(int32_t *)(puVar4 + 7) = 0;
            puVar4[4] = &system_state_ptr;
            *puVar4 = &system_data_buffer_ptr;
            if (puVar4[1] == 0) {
              puVar4[1] = 0;
              *(int32_t *)(puVar4 + 3) = 0;
              *puVar4 = &system_state_ptr;
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner(puVar4);
            }
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *(uint64_t *)(*(int64_t *)(param_1 + 0x48) + lVar14 * 8) = 0;
        lVar9 = *(int64_t *)(param_1 + 0x48) + lVar14 * 8;
        uVar10 = lVar9 + 8;
        uVar5 = *(uint64_t *)(param_1 + 0x50);
        if (uVar10 < uVar5) {
// WARNING: Subroutine does not return
          memmove(lVar9,uVar10,uVar5 - uVar10);
        }
        lVar9 = uVar5 - 8;
        *(int64_t *)(param_1 + 0x50) = lVar9;
        iVar17 = iVar17 + -1;
        iVar19 = iVar19 + -1;
        uVar18 = uVar18 - 8;
        lVar16 = lVar16 + -8;
      }
      uVar10 = (uint64_t)(iVar17 + 1U);
      iVar19 = iVar19 + 1;
      uVar18 = uVar18 + 8;
      lVar16 = lVar16 + 8;
      lVar12 = *(int64_t *)(param_1 + 0x48);
    } while ((uint64_t)(int64_t)(int)(iVar17 + 1U) < (uint64_t)(lVar9 - lVar12 >> 3));
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_056410(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_056410(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uVar10 = 0xfffffffffffffffe;
  uVar3 = 0;
  puVar1 = (uint64_t *)(param_1 + 0x48);
  uVar4 = *puVar1;
  uVar5 = uVar3;
  uVar8 = uVar3;
  if ((int64_t)(*(int64_t *)(param_1 + 0x50) - uVar4) >> 3 != 0) {
    do {
      function_056410(*(uint64_t *)(uVar4 + uVar5));
      puVar2 = *(uint64_t **)(*puVar1 + uVar5);
      if (puVar2 != (uint64_t *)0x0) {
        if (puVar2[9] != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        puVar2[4] = &system_data_buffer_ptr;
        if (puVar2[5] == 0) {
          puVar2[5] = 0;
          *(int32_t *)(puVar2 + 7) = 0;
          puVar2[4] = &system_state_ptr;
          *puVar2 = &system_data_buffer_ptr;
          if (puVar2[1] == 0) {
            puVar2[1] = 0;
            *(int32_t *)(puVar2 + 3) = 0;
            *puVar2 = &system_state_ptr;
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner(puVar2);
          }
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *(uint64_t *)(*puVar1 + uVar5) = 0;
      uVar7 = (int)uVar8 + 1;
      uVar4 = *puVar1;
      uVar5 = uVar5 + 8;
      uVar8 = (uint64_t)uVar7;
    } while ((uint64_t)(int64_t)(int)uVar7 <
             (uint64_t)((int64_t)(*(int64_t *)(param_1 + 0x50) - uVar4) >> 3));
  }
  function_057340(puVar1,0);
  uVar4 = *(uint64_t *)(param_1 + 0x50);
  uVar5 = *puVar1;
  uVar7 = *(uint *)(param_1 + 0x60);
  lVar9 = uVar4 - uVar5;
  lVar6 = lVar9 >> 3;
  if (lVar6 != 0) {
    uVar3 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar6 * 8,uVar7 & 0xff,param_4,uVar10,0,0,0,uVar7);
  }
  lVar6 = uVar3 + lVar6 * 8;
  if (uVar5 == uVar4) {
    uVar4 = *puVar1;
    *puVar1 = uVar3;
    *(int64_t *)(param_1 + 0x50) = lVar6;
    *(int64_t *)(param_1 + 0x58) = lVar6;
    *(uint *)(param_1 + 0x60) = uVar7;
    if (uVar4 == 0) {
      return;
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
// WARNING: Subroutine does not return
  memmove(uVar3,uVar5,lVar9,param_4,uVar10,uVar3,lVar6,lVar6);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_0565f0(int64_t *param_1)
void function_0565f0(int64_t *param_1)
{
  uint64_t *puVar1;
  code *pcVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int8_t stack_array_98 [32];
  int64_t lStack_78;
  int64_t *plStack_68;
  int64_t **pplStack_60;
  uint64_t local_var_58;
  void *plocal_var_50;
  int8_t *plocal_var_48;
  int32_t local_var_40;
  int8_t stack_array_38 [16];
  uint64_t local_var_28;
  local_var_58 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_98;
  plVar4 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xd0,8,3);
  pplStack_60 = (int64_t **)plVar4;
  UltraHighFreq_PerformanceMonitor1(plVar4);
  *plVar4 = (int64_t)&processed_var_7704_ptr;
  plVar4[0x18] = 0;
  *(int32_t *)(plVar4 + 0x19) = 0;
  plStack_68 = plVar4;
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plStack_68 = (int64_t *)*param_1;
  *param_1 = (int64_t)plVar4;
  if (plStack_68 != (int64_t *)0x0) {
    (**(code **)(*plStack_68 + 0x38))();
  }
  lVar3 = system_context_ptr;
  plocal_var_50 = &system_config_ptr;
  plocal_var_48 = stack_array_38;
  stack_array_38[0] = 0;
  local_var_40 = 0xc;
  strcpy_s(stack_array_38,0x10,&processed_var_7296_ptr);
  plVar4 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x208,8,3);
  lStack_78 = lVar3 + 0x70;
  pplStack_60 = (int64_t **)plVar4;
  function_20e0e0(plVar4,&plocal_var_50,3,lVar3 + 0x2e0);
  *plVar4 = (int64_t)&processed_var_9056_ptr;
  plStack_68 = plVar4;
  function_20e840(plVar4);
  SystemInitializer(lVar3 + 0x48,&plStack_68);
  param_1[1] = (int64_t)plVar4;
  plocal_var_50 = &system_state_ptr;
  puVar1 = (uint64_t *)param_1[1];
  pcVar2 = *(code **)*puVar1;
  pplStack_60 = &plStack_68;
  plStack_68 = (int64_t *)*param_1;
  if (plStack_68 != (int64_t *)0x0) {
    (**(code **)(*plStack_68 + 0x28))();
  }
  (*pcVar2)(puVar1,&plStack_68);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_98);
}
uint64_t function_0567c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  SystemCore_SecurityManager();
  if ((param_2 & 1) != 0) {
    free(param_1,0xd0,param_3,param_4,uVar1);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_056810(int64_t param_1)
void function_056810(int64_t param_1)
{
  uint uVar1;
  double dVar2;
  uint uVar3;
  int64_t lVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  int iVar7;
  int64_t lVar8;
  void *puVar9;
  int8_t stack_array_c8 [32];
  int8_t local_var_a8;
  int8_t local_var_a0;
  void *plocal_var_98;
  void *plocal_var_90;
  uint local_var_88;
  uint64_t local_var_80;
  int64_t lStack_78;
  int64_t alStack_70 [2];
  char acStack_60 [16];
  uint64_t local_var_50;
  alStack_70[1] = 0xfffffffffffffffe;
  local_var_50 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_c8;
  lVar4 = core_system_data_config;
  if (core_system_data_config == 0) {
    QueryPerformanceCounter(&lStack_78);
    lVar4 = lStack_78;
  }
  *(double *)(param_1 + 0xc0) = (double)(lVar4 - core_system_data_config) * core_system_data_config;
  LOCK();
  *(int32_t *)(param_1 + 200) = 0;
  UNLOCK();
  LOCK();
  *(int32_t *)(param_1 + 0xcc) = 1;
  UNLOCK();
  while( true ) {
    do {
      if (*(int *)(param_1 + 0xcc) == 0) {
// WARNING: Subroutine does not return
        SystemSecurityChecker(local_var_50 ^ (uint64_t)stack_array_c8);
      }
      Sleep(10);
      lVar4 = core_system_data_config;
      if (core_system_data_config == 0) {
        QueryPerformanceCounter(alStack_70);
        lVar4 = alStack_70[0];
      }
      dVar2 = (double)(lVar4 - core_system_data_config) * core_system_data_config;
    } while ((system_counter_2853 == '\0') || (dVar2 - *(double *)(param_1 + 0xc0) <= 900.0));
    LOCK();
    *(int32_t *)(param_1 + 200) = 1;
    UNLOCK();
    plocal_var_98 = &system_data_buffer_ptr;
    local_var_80 = 0;
    plocal_var_90 = (void *)0x0;
    local_var_88 = 0;
    CoreEngineDataBufferProcessor(&plocal_var_98,0x1c);
    puVar5 = (int32_t *)(plocal_var_90 + local_var_88);
    *puVar5 = 0x73736f50;
    puVar5[1] = 0x656c6269;
    puVar5[2] = 0x61656420;
    puVar5[3] = 0x636f6c64;
    *(uint64_t *)(puVar5 + 4) = 0x746365746564206b;
    puVar5[6] = 0x202c6465;
    *(int8_t *)(puVar5 + 7) = 0;
    local_var_88 = 0x1c;
    CoreEngineDataBufferProcessor(&plocal_var_98,0x3e);
    puVar5 = (int32_t *)(plocal_var_90 + local_var_88);
    *puVar5 = 0x69676e65;
    puVar5[1] = 0x6420656e;
    puVar5[2] = 0x6e206469;
    puVar5[3] = 0x7220746f;
    puVar5[4] = 0x65646e65;
    puVar5[5] = 0x20612072;
    puVar5[6] = 0x6d617266;
    puVar5[7] = 0x6f662065;
    *(int16_t *)(puVar5 + 8) = 0x2072;
    *(int8_t *)((int64_t)puVar5 + 0x22) = 0;
    local_var_88 = 0x3e;
    > MedHighFreq_StateMachine1(acStack_60,&processed_var_4576_ptr,900);
    uVar3 = local_var_88;
    lVar4 = -1;
    do {
      lVar8 = lVar4;
      lVar4 = lVar8 + 1;
    } while (acStack_60[lVar8 + 1] != '\0');
    iVar7 = (int)(lVar8 + 1);
    if (0 < iVar7) break;
    uVar1 = local_var_88 + 10;
    CoreEngineDataBufferProcessor(&plocal_var_98,uVar1);
    puVar6 = (uint64_t *)(plocal_var_90 + local_var_88);
    *puVar6 = 0x73646e6f63657320;
    *(int16_t *)(puVar6 + 1) = 0x2021;
    *(int8_t *)((int64_t)puVar6 + 10) = 0;
    local_var_88 = uVar1;
    CoreEngineDataBufferProcessor(&plocal_var_98,uVar3 + 0x2b);
    puVar5 = (int32_t *)(plocal_var_90 + local_var_88);
    *puVar5 = 0x65766544;
    puVar5[1] = 0x65706f6c;
    puVar5[2] = 0x6e692072;
    puVar5[3] = 0x76726574;
    puVar5[4] = 0x69746e65;
    puVar5[5] = 0x73206e6f;
    puVar5[6] = 0x65676775;
    puVar5[7] = 0x64657473;
    *(int16_t *)(puVar5 + 8) = 0x2e;
    puVar9 = &system_buffer_ptr;
    if (plocal_var_90 != (void *)0x0) {
      puVar9 = plocal_var_90;
    }
    local_var_a0 = 0;
    local_var_a8 = 0;
    local_var_88 = uVar3 + 0x2b;
    (**(code **)(*(int64_t *)*core_system_data_config + 0x20))
              ((int64_t *)*core_system_data_config,&processed_var_7440_ptr,0x175c,puVar9);
    *(double *)(param_1 + 0xc0) = dVar2;
    plocal_var_98 = &system_data_buffer_ptr;
    if (plocal_var_90 != (void *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_90 = (void *)0x0;
    local_var_80 = local_var_80 & 0xffffffff00000000;
    plocal_var_98 = &system_state_ptr;
  }
  CoreEngineDataBufferProcessor(&plocal_var_98,local_var_88 + iVar7);
// WARNING: Subroutine does not return
  memcpy(plocal_var_90 + local_var_88,acStack_60,(int64_t)((int)lVar8 + 2));
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_056b30(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_056b30(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  char cVar2;
  int8_t stack_array_30 [16];
  void *plocal_var_20;
  void *plocal_var_18;
  function_0b4ec0(param_1,1,1,param_4,0xfffffffffffffffe);
  if (system_cache_buffer != (int64_t *)0x0) {
    cVar2 = (**(code **)(*system_cache_buffer + 0x48))();
    if ((cVar2 != '\0') && (system_cache_buffer[2] != 0)) {
      (*(code *)system_cache_buffer[0x11])(0);
    }
  }
  plocal_var_20 = &processed_var_5200_ptr;
  plocal_var_18 = &processed_var_5168_ptr;
  SystemCore_SecurityManager(stack_array_30);
  *(int8_t *)(core_system_data_config + 0x3a0) = 1;
  SystemCore_FileSystem(system_context_ptr);
  SystemCore_FileSystem(system_context_ptr);
  if (core_system_data_config != 0) {
    function_06eb30();
  }
  SystemCore_FileSystem(system_context_ptr);
  SystemCore_FileSystem(system_context_ptr);
  SystemCore_FileSystem(system_context_ptr);
  if (core_system_data_config != 0) {
    function_06eb30();
  }
  SystemCore_FileSystem(system_context_ptr);
  function_0b4ec0();
  lVar1 = system_parameter_buffer;
  *(int8_t *)(system_parameter_buffer + 0x1504) = 0;
  *(int8_t *)(lVar1 + 0x1506) = 0;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_056c50(uint64_t param_1,uint64_t *param_2,int32_t param_3)
void function_056c50(uint64_t param_1,uint64_t *param_2,int32_t param_3)
{
  uint64_t uVar1;
  void **ppuVar2;
  int8_t stack_array_158 [32];
  void **pplocal_var_138;
  void ***ppplocal_var_130;
  uint64_t local_var_128;
  uint64_t *plocal_var_120;
  void **pplocal_var_118;
  void *plocal_var_108;
  int8_t *plocal_var_100;
  int32_t local_var_f8;
  int8_t stack_array_f0 [128];
  int32_t local_var_70;
  uint64_t local_var_58;
  int32_t local_var_50;
  uint64_t local_var_28;
  local_var_128 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158;
  pplocal_var_138 = &plocal_var_108;
  plocal_var_108 = &memory_allocator_3432_ptr;
  plocal_var_100 = stack_array_f0;
  local_var_f8 = 0;
  stack_array_f0[0] = 0;
  local_var_70 = 0x17;
  plocal_var_120 = param_2;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,3);
  local_var_58 = CoreEngineDataTransformer(uVar1,param_2);
  local_var_50 = param_3;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
  ppuVar2 = (void **)SystemCore_StreamController(uVar1,&plocal_var_108);
  pplocal_var_118 = ppuVar2;
  if (ppuVar2 != (void **)0x0) {
    (**(code **)(*ppuVar2 + 0x28))(ppuVar2);
  }
  uVar1 = system_context_ptr;
  ppplocal_var_130 = &pplocal_var_138;
  pplocal_var_138 = ppuVar2;
  if (ppuVar2 != (void **)0x0) {
    (**(code **)(*ppuVar2 + 0x28))(ppuVar2);
  }
  SystemPerformance_Monitor(uVar1,&pplocal_var_138);
  if (ppuVar2 != (void **)0x0) {
    (**(code **)(*ppuVar2 + 0x38))(ppuVar2);
  }
  ppplocal_var_130 = (void ***)&plocal_var_108;
  plocal_var_108 = &system_state_ptr;
  *param_2 = &system_data_buffer_ptr;
  if (param_2[1] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_2[1] = 0;
  *(int32_t *)(param_2 + 3) = 0;
  *param_2 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_158);
}
uint64_t * function_056de0(uint64_t *param_1)
{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 3;
  return param_1;
}
uint64_t * function_056e10(uint64_t *param_1)
{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 3;
  return param_1;
}
// 函数: void function_056e40(void)
void function_056e40(void)
{
  function_057010();
  return;
}
uint64_t * function_056e60(uint64_t *param_1)
{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 10;
  return param_1;
}
uint64_t * function_056e90(uint64_t *param_1)
{
  uint64_t *puVar1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  *(int32_t *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[0x60f] = 0;
  param_1[0x610] = 0;
  puVar1 = param_1 + 0xf;
  param_1[0xc] = puVar1;
  param_1[0xd] = (uint64_t)(-(int)puVar1 & 7) + (int64_t)puVar1;
  param_1[0xe] = param_1 + 0x60f;
  param_1[0x60f] = &processed_var_8432_ptr;
  param_1[0x610] = SystemResourceCleaner;
  return param_1;
}
int64_t * SystemCore_PointerManager(int64_t *param_1,int64_t *param_2)
{
  int64_t *plVar1;
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plVar1 = (int64_t *)*param_1;
  *param_1 = (int64_t)param_2;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  return param_1;
}
// 函数: void function_056f70(int64_t param_1,int64_t param_2)
void function_056f70(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  void *puVar2;
  puVar2 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar2 = *(void **)(param_2 + 8);
  }
  if (puVar2 == (void *)0x0) {
    *(int32_t *)(param_1 + 0x10) = 0;
    **(int8_t **)(param_1 + 8) = 0;
    return;
  }
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (puVar2[lVar1] != '\0');
  if ((int)lVar1 < 0x400) {
    *(int *)(param_1 + 0x10) = (int)lVar1;
// WARNING: Could not recover jumptable at 0x000180056fc2. Too many branches
// WARNING: Treating indirect jump as call
    strcpy_s(*(uint64_t *)(param_1 + 8),0x400);
    return;
  }
  SystemDataInitializer(&processed_var_616_ptr,0x400);
  *(int32_t *)(param_1 + 0x10) = 0;
  **(int8_t **)(param_1 + 8) = 0;
  return;
}
// 函数: void function_057010(int64_t *param_1)
void function_057010(int64_t *param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  plVar1 = param_1 + 3;
  lVar2 = *param_1;
  while ((int64_t *)lVar2 != plVar1) {
    lVar2 = *(int64_t *)((uint64_t)(-(int)lVar2 & 7) + lVar2);
    if ((code *)param_1[0x604] == (code *)0x0) {
      free();
    }
    else {
      (*(code *)param_1[0x604])();
    }
    *param_1 = lVar2;
  }
  *param_1 = (int64_t)plVar1;
  param_1[1] = (uint64_t)(-(int)plVar1 & 7) + (int64_t)plVar1;
  param_1[2] = (int64_t)(param_1 + 0x603);
  return;
}
// 函数: void function_057029(int64_t param_1)
void function_057029(int64_t param_1)
{
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  do {
    param_1 = *(int64_t *)((uint64_t)(-(int)param_1 & 7) + param_1);
    if ((code *)unaff_RDI[0x604] == (code *)0x0) {
      free();
    }
    else {
      (*(code *)unaff_RDI[0x604])();
    }
    *unaff_RDI = param_1;
  } while (param_1 != unaff_RSI);
  *unaff_RDI = unaff_RSI;
  unaff_RDI[1] = (uint64_t)(-(int)unaff_RSI & 7) + unaff_RSI;
  unaff_RDI[2] = (int64_t)(unaff_RDI + 0x603);
  return;
}
// 函数: void function_057062(void)
void function_057062(void)
{
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  *unaff_RDI = unaff_RSI;
  unaff_RDI[1] = (uint64_t)(-(int)unaff_RSI & 7) + unaff_RSI;
  unaff_RDI[2] = (int64_t)(unaff_RDI + 0x603);
  return;
}
uint64_t *
function_057090(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &system_config_ptr;
  param_1[1] = param_1 + 3;
  *(int32_t *)(param_1 + 2) = 0;
  *(int8_t *)(param_1 + 3) = 0;
  if (param_2 != 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    *(int *)(param_1 + 2) = (int)lVar1;
    strcpy_s(param_1[1],0x10,param_2,param_4,0xfffffffffffffffe);
  }
  return param_1;
}
// 函数: void SystemCore_ConfigValidator(int64_t *param_1)
void SystemCore_ConfigValidator(int64_t *param_1)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  puVar1 = (uint64_t *)param_1[1];
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != puVar1) {
    do {
      (**(code **)*puVar2)(puVar2,0);
      puVar2 = puVar2 + 4;
    } while (puVar2 != puVar1);
    param_1[1] = *param_1;
    return;
  }
  param_1[1] = (int64_t)puVar2;
  return;
}
// 函数: void function_057170(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_057170(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uVar3 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)param_1[1];
  for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 0xb) {
    (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemDatabaseProcessor(int64_t *param_1,int32_t *param_2)
void SystemDatabaseProcessor(int64_t *param_1,int32_t *param_2)
{
  int64_t lVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  puVar4 = (int32_t *)param_1[1];
  if (puVar4 < (int32_t *)param_1[2]) {
    param_1[1] = (int64_t)(puVar4 + 1);
    *puVar4 = *param_2;
    return;
  }
  puVar3 = (int32_t *)*param_1;
  lVar1 = (int64_t)puVar4 - (int64_t)puVar3 >> 2;
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = lVar1 * 2;
    if (lVar1 == 0) {
      puVar2 = (int32_t *)0x0;
      goto LAB_18005726e;
    }
  }
  puVar2 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar1 * 4,(char)param_1[3]);
  puVar3 = (int32_t *)*param_1;
  puVar4 = (int32_t *)param_1[1];
LAB_18005726e:
  if (puVar3 != puVar4) {
// WARNING: Subroutine does not return
    memmove(puVar2,puVar3,(int64_t)puVar4 - (int64_t)puVar3);
  }
  *puVar2 = *param_2;
  if (*param_1 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *param_1 = (int64_t)puVar2;
  param_1[1] = (int64_t)(puVar2 + 1);
  param_1[2] = (int64_t)(puVar2 + lVar1);
  return;
}
// 函数: void CoreEngine_0572D0(int64_t param_1)
void CoreEngine_0572D0(int64_t param_1)
{
  uint64_t *puVar1;
  puVar1 = *(uint64_t **)(param_1 + 0x10);
  if (puVar1 != (uint64_t *)0x0) {
    SystemCache_Manager(param_1,*puVar1);
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar1);
  }
  *(int64_t *)param_1 = param_1;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int8_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(int64_t *)(param_1 + 8) = param_1;
  return;
}
// 函数: void function_0572e6(void)
void function_0572e6(void)
{
  SystemCache_Manager();
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// 函数: void function_057314(void)
void function_057314(void)
{
  int64_t unaff_RBX;
  *(int64_t *)unaff_RBX = unaff_RBX;
  *(uint64_t *)(unaff_RBX + 0x10) = 0;
  *(int8_t *)(unaff_RBX + 0x18) = 0;
  *(uint64_t *)(unaff_RBX + 0x20) = 0;
  *(int64_t *)(unaff_RBX + 8) = unaff_RBX;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address