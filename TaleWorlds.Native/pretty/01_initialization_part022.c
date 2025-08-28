#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// $fun 的语义化别名
#define $alias_name $fun


// $fun 的语义化别名
#define $alias_name $fun


// 01_initialization_part022.c - 25 个函数

// 外部函数别名定义
#define FUN_180058a20 SystemDataMerger
#define SystemCore_ResourceLoader SystemMemoryInitializer
#define FUN_18020e0e0 SystemResourceInitializer
#define FUN_18020e840 SystemConfigInitializer
#define SystemCore_SecurityManager SystemSecurityInitializer
#define > MedHighFreq_StateMachine1 SystemDataValidator
#define FUN_1800b4ec0 SystemContextManager
#define SystemCore_SecurityManager SystemStateValidator
#define SystemCore_FileSystem SystemContextHandler
#define FUN_18006eb30 SystemFinalizer
#define SystemCore_StreamController SystemResourceHandler
#define SystemPerformance_Monitor SystemDataHandler
#define FUN_180058210 SystemProcessor
#define FUN_180058c20 SystemCleaner
#define FUN_1800582b0 SystemContextInitializer
#define RenderingSystem_CameraSystem SystemManager
#define SystemCache_Manager SystemExecutor
#define FUN_180056de0 SystemDataAllocator
#define FUN_180056e10 SystemMemoryAllocator
#define FUN_180056e60 SystemResourceAllocator
#define FUN_180056e90 SystemStateAllocator
#define SystemCore_PointerManager SystemContextAllocator
#define FUN_180057090 SystemDataProcessor

// 函数: void SystemInitializer(int64_t param_1)
void SystemInitializer(int64_t param_1)

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
        SystemDataMerger(*(int64_t *)(uVar18 + lVar12) + 0x48,
                      *(uint64_t *)(*(int64_t *)(uVar18 + lVar12) + 0x50),
                      *(uint64_t *)(lVar9 + 0x48),*(uint64_t *)(lVar9 + 0x50));
        lVar9 = *(int64_t *)(*(int64_t *)(param_1 + 0x48) + lVar14 * 8);
        *(uint64_t *)(lVar9 + 0x50) = *(uint64_t *)(lVar9 + 0x48);
        SystemInitializer(*(uint64_t *)(uVar18 + *(int64_t *)(param_1 + 0x48)));
        SystemDataProcessor(*(uint64_t *)(*(int64_t *)(param_1 + 0x48) + lVar14 * 8));
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



// 函数: void SystemDataProcessor(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void SystemDataProcessor(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

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
      SystemDataProcessor(*(uint64_t *)(uVar4 + uVar5));
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
  SystemMemoryCleaner(puVar1,0);
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



// 函数: void SystemMemoryManager(int64_t *param_1)
void SystemMemoryManager(int64_t *param_1)

{
  uint64_t *puVar1;
  code *pcVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int8_t auStack_98 [32];
  int64_t lStack_78;
  int64_t *plStack_68;
  int64_t **pplStack_60;
  uint64_t uStack_58;
  void *puStack_50;
  int8_t *puStack_48;
  int32_t uStack_40;
  int8_t auStack_38 [16];
  uint64_t uStack_28;
  
  uStack_58 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  plVar4 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xd0,8,3);
  pplStack_60 = (int64_t **)plVar4;
  SystemMemoryInitializer(plVar4);
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
  puStack_50 = &system_config_ptr;
  puStack_48 = auStack_38;
  auStack_38[0] = 0;
  uStack_40 = 0xc;
  strcpy_s(auStack_38,0x10,&processed_var_7296_ptr);
  plVar4 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x208,8,3);
  lStack_78 = lVar3 + 0x70;
  pplStack_60 = (int64_t **)plVar4;
  SystemResourceInitializer(plVar4,&puStack_50,3,lVar3 + 0x2e0);
  *plVar4 = (int64_t)&processed_var_9056_ptr;
  plStack_68 = plVar4;
  SystemConfigInitializer(plVar4);
  SystemInitializer(lVar3 + 0x48,&plStack_68);
  param_1[1] = (int64_t)plVar4;
  puStack_50 = &system_state_ptr;
  puVar1 = (uint64_t *)param_1[1];
  pcVar2 = *(code **)*puVar1;
  pplStack_60 = &plStack_68;
  plStack_68 = (int64_t *)*param_1;
  if (plStack_68 != (int64_t *)0x0) {
    (**(code **)(*plStack_68 + 0x28))();
  }
  (*pcVar2)(puVar1,&plStack_68);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_98);
}



uint64_t SystemResourceAllocator(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  SystemSecurityInitializer();
  if ((param_2 & 1) != 0) {
    free(param_1,0xd0,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void SystemConfigurator(int64_t param_1)
void SystemConfigurator(int64_t param_1)

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
  int8_t auStack_c8 [32];
  int8_t uStack_a8;
  int8_t uStack_a0;
  void *puStack_98;
  void *puStack_90;
  uint uStack_88;
  uint64_t uStack_80;
  int64_t lStack_78;
  int64_t alStack_70 [2];
  char acStack_60 [16];
  uint64_t uStack_50;
  
  alStack_70[1] = 0xfffffffffffffffe;
  uStack_50 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_c8;
  lVar4 = init_system_data_config;
  if (init_system_data_config == 0) {
    QueryPerformanceCounter(&lStack_78);
    lVar4 = lStack_78;
  }
  *(double *)(param_1 + 0xc0) = (double)(lVar4 - init_system_data_config) * init_system_data_config;
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
        SystemSecurityChecker(uStack_50 ^ (uint64_t)auStack_c8);
      }
      Sleep(10);
      lVar4 = init_system_data_config;
      if (init_system_data_config == 0) {
        QueryPerformanceCounter(alStack_70);
        lVar4 = alStack_70[0];
      }
      dVar2 = (double)(lVar4 - init_system_data_config) * init_system_data_config;
    } while ((system_counter_2853 == '\0') || (dVar2 - *(double *)(param_1 + 0xc0) <= 900.0));
    LOCK();
    *(int32_t *)(param_1 + 200) = 1;
    UNLOCK();
    puStack_98 = &system_data_buffer_ptr;
    uStack_80 = 0;
    puStack_90 = (void *)0x0;
    uStack_88 = 0;
    CoreEngineDataBufferProcessor(&puStack_98,0x1c);
    puVar5 = (int32_t *)(puStack_90 + uStack_88);
    *puVar5 = 0x73736f50;
    puVar5[1] = 0x656c6269;
    puVar5[2] = 0x61656420;
    puVar5[3] = 0x636f6c64;
    *(uint64_t *)(puVar5 + 4) = 0x746365746564206b;
    puVar5[6] = 0x202c6465;
    *(int8_t *)(puVar5 + 7) = 0;
    uStack_88 = 0x1c;
    CoreEngineDataBufferProcessor(&puStack_98,0x3e);
    puVar5 = (int32_t *)(puStack_90 + uStack_88);
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
    uStack_88 = 0x3e;
    SystemDataValidator(acStack_60,&processed_var_4576_ptr,900);
    uVar3 = uStack_88;
    lVar4 = -1;
    do {
      lVar8 = lVar4;
      lVar4 = lVar8 + 1;
    } while (acStack_60[lVar8 + 1] != '\0');
    iVar7 = (int)(lVar8 + 1);
    if (0 < iVar7) break;
    uVar1 = uStack_88 + 10;
    CoreEngineDataBufferProcessor(&puStack_98,uVar1);
    puVar6 = (uint64_t *)(puStack_90 + uStack_88);
    *puVar6 = 0x73646e6f63657320;
    *(int16_t *)(puVar6 + 1) = 0x2021;
    *(int8_t *)((int64_t)puVar6 + 10) = 0;
    uStack_88 = uVar1;
    CoreEngineDataBufferProcessor(&puStack_98,uVar3 + 0x2b);
    puVar5 = (int32_t *)(puStack_90 + uStack_88);
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
    if (puStack_90 != (void *)0x0) {
      puVar9 = puStack_90;
    }
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_88 = uVar3 + 0x2b;
    (**(code **)(*(int64_t *)*init_system_data_config + 0x20))
              ((int64_t *)*init_system_data_config,&processed_var_7440_ptr,0x175c,puVar9);
    *(double *)(param_1 + 0xc0) = dVar2;
    puStack_98 = &system_data_buffer_ptr;
    if (puStack_90 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    puStack_90 = (void *)0x0;
    uStack_80 = uStack_80 & 0xffffffff00000000;
    puStack_98 = &system_state_ptr;
  }
  CoreEngineDataBufferProcessor(&puStack_98,uStack_88 + iVar7);
                    // WARNING: Subroutine does not return
  memcpy(puStack_90 + uStack_88,acStack_60,(int64_t)((int)lVar8 + 2));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void SystemDataValidator(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void SystemDataValidator(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  char cVar2;
  int8_t auStack_30 [16];
  void *puStack_20;
  void *puStack_18;
  
  FUN_1800b4ec0(param_1,1,1,param_4,0xfffffffffffffffe);
  if (system_cache_buffer != (int64_t *)0x0) {
    cVar2 = (**(code **)(*system_cache_buffer + 0x48))();
    if ((cVar2 != '\0') && (system_cache_buffer[2] != 0)) {
      (*(code *)system_cache_buffer[0x11])(0);
    }
  }
  puStack_20 = &processed_var_5200_ptr;
  puStack_18 = &processed_var_5168_ptr;
  SystemCore_SecurityManager(auStack_30);
  *(int8_t *)(init_system_data_config + 0x3a0) = 1;
  SystemCore_FileSystem(system_context_ptr);
  SystemCore_FileSystem(system_context_ptr);
  if (init_system_data_config != 0) {
    FUN_18006eb30();
  }
  SystemCore_FileSystem(system_context_ptr);
  SystemCore_FileSystem(system_context_ptr);
  SystemCore_FileSystem(system_context_ptr);
  if (init_system_data_config != 0) {
    FUN_18006eb30();
  }
  SystemCore_FileSystem(system_context_ptr);
  FUN_1800b4ec0();
  lVar1 = system_parameter_buffer;
  *(int8_t *)(system_parameter_buffer + 0x1504) = 0;
  *(int8_t *)(lVar1 + 0x1506) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void SystemDataProcessor(uint64_t param_1,uint64_t *param_2,int32_t param_3)
void SystemDataProcessor(uint64_t param_1,uint64_t *param_2,int32_t param_3)

{
  uint64_t uVar1;
  void **ppuVar2;
  int8_t auStack_158 [32];
  void **ppuStack_138;
  void ***pppuStack_130;
  uint64_t uStack_128;
  uint64_t *puStack_120;
  void **ppuStack_118;
  void *puStack_108;
  int8_t *puStack_100;
  int32_t uStack_f8;
  int8_t auStack_f0 [128];
  int32_t uStack_70;
  uint64_t uStack_58;
  int32_t uStack_50;
  uint64_t uStack_28;
  
  uStack_128 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  ppuStack_138 = &puStack_108;
  puStack_108 = &memory_allocator_3432_ptr;
  puStack_100 = auStack_f0;
  uStack_f8 = 0;
  auStack_f0[0] = 0;
  uStack_70 = 0x17;
  puStack_120 = param_2;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,3);
  uStack_58 = CoreEngineDataTransformer(uVar1,param_2);
  uStack_50 = param_3;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
  ppuVar2 = (void **)SystemCore_StreamController(uVar1,&puStack_108);
  ppuStack_118 = ppuVar2;
  if (ppuVar2 != (void **)0x0) {
    (**(code **)(*ppuVar2 + 0x28))(ppuVar2);
  }
  uVar1 = system_context_ptr;
  pppuStack_130 = &ppuStack_138;
  ppuStack_138 = ppuVar2;
  if (ppuVar2 != (void **)0x0) {
    (**(code **)(*ppuVar2 + 0x28))(ppuVar2);
  }
  SystemPerformance_Monitor(uVar1,&ppuStack_138);
  if (ppuVar2 != (void **)0x0) {
    (**(code **)(*ppuVar2 + 0x38))(ppuVar2);
  }
  pppuStack_130 = (void ***)&puStack_108;
  puStack_108 = &system_state_ptr;
  *param_2 = &system_data_buffer_ptr;
  if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_2[1] = 0;
  *(int32_t *)(param_2 + 3) = 0;
  *param_2 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_158);
}



uint64_t * SystemDataAllocator(uint64_t *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 3;
  return param_1;
}



uint64_t * SystemMemoryAllocator(uint64_t *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 3;
  return param_1;
}





// 函数: void SystemCleanup(void)
void SystemCleanup(void)

{
  FUN_180057010();
  return;
}



uint64_t * SystemResourceAllocator(uint64_t *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 10;
  return param_1;
}



uint64_t * SystemStateAllocator(uint64_t *param_1)

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



int64_t * SystemContextAllocator(int64_t *param_1,int64_t *param_2)

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





// 函数: void SystemStateManager(int64_t param_1,int64_t param_2)
void SystemStateManager(int64_t param_1,int64_t param_2)

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





// 函数: void SystemMemoryAllocator(int64_t *param_1)
void SystemMemoryAllocator(int64_t *param_1)

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





// 函数: void SystemDataHandler(int64_t param_1)
void SystemDataHandler(int64_t param_1)

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





// 函数: void SystemInitializer(void)
void SystemInitializer(void)

{
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  
  *unaff_RDI = unaff_RSI;
  unaff_RDI[1] = (uint64_t)(-(int)unaff_RSI & 7) + unaff_RSI;
  unaff_RDI[2] = (int64_t)(unaff_RDI + 0x603);
  return;
}



uint64_t *
SystemDataProcessor(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

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





// 函数: void SystemResourceManager(int64_t *param_1)
void SystemResourceManager(int64_t *param_1)

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





// 函数: void SystemDataAllocator(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void SystemDataAllocator(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

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



// 函数: void SystemConfigHandler(int64_t *param_1,int32_t *param_2)
void SystemConfigHandler(int64_t *param_1,int32_t *param_2)

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





// 函数: void SystemStateProcessor(int64_t param_1)
void SystemStateProcessor(int64_t param_1)

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





// 函数: void SystemFinalizer(void)
void SystemFinalizer(void)

{
  SystemCache_Manager();
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void SystemValidator(void)
void SystemValidator(void)

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



// 函数: void SystemMemoryCleaner(int64_t *param_1,uint64_t param_2)
void SystemMemoryCleaner(int64_t *param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  
  lVar5 = param_1[1];
  lVar6 = *param_1;
  uVar2 = lVar5 - lVar6 >> 3;
  if (param_2 <= uVar2) {
    param_1[1] = lVar6 + param_2 * 8;
    return;
  }
  uVar4 = param_2 - uVar2;
  if (uVar4 <= (uint64_t)(param_1[2] - lVar5 >> 3)) {
    if (uVar4 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar5,0,uVar4 * 8);
    }
    param_1[1] = lVar5;
    return;
  }
  uVar3 = uVar2 * 2;
  if (uVar2 == 0) {
    uVar3 = 1;
  }
  if (uVar3 < param_2) {
    uVar3 = param_2;
  }
  if (uVar3 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar3 * 8,(char)param_1[3]);
    lVar6 = *param_1;
    lVar5 = param_1[1];
  }
  if (lVar6 != lVar5) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,lVar6,lVar5 - lVar6);
  }
  if (uVar4 != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar1,0,uVar4 * 8);
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *param_1 = lVar1;
  param_1[2] = lVar1 + uVar3 * 8;
  param_1[1] = lVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void SystemDataCleaner(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
void SystemDataCleaner(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  int64_t in_RAX;
  int64_t lVar1;
  int64_t *unaff_RBX;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t unaff_RDI;
  
  uVar3 = param_2 - param_1;
  if (uVar3 <= (uint64_t)(in_RAX - unaff_RDI >> 3)) {
    if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
      memset();
    }
    unaff_RBX[1] = unaff_RDI;
    return;
  }
  uVar2 = param_1 * 2;
  if (param_1 == 0) {
    uVar2 = 1;
  }
  if (uVar2 < param_2) {
    uVar2 = param_2;
  }
  if (uVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar2 * 8,(char)unaff_RBX[3]);
    param_4 = *unaff_RBX;
    unaff_RDI = unaff_RBX[1];
  }
  if (param_4 != unaff_RDI) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,param_4,unaff_RDI - param_4);
  }
  if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar1,0,uVar3 * 8);
  }
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *unaff_RBX = lVar1;
  unaff_RBX[2] = lVar1 + uVar2 * 8;
  unaff_RBX[1] = lVar1;
  return;
}





// 函数: void SystemShutdown(void)
void SystemShutdown(void)

{
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  
  if (unaff_RSI != 0) {
                    // WARNING: Subroutine does not return
    memset();
  }
  *(uint64_t *)(unaff_RBX + 8) = unaff_RDI;
  return;
}





// 函数: void SystemResourceCleaner(uint64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)
void SystemResourceCleaner(uint64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)

{
  int64_t unaff_RBX;
  
  *(int64_t *)(unaff_RBX + 8) = param_4 + param_2 * 8;
  return;
}





// 函数: void SystemDataFinalizer(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void SystemDataFinalizer(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180058210(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void SystemMemoryFinalizer(int64_t *param_1)
void SystemMemoryFinalizer(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x48) {
    FUN_180058c20(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void SystemResourceDeallocator(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void SystemResourceDeallocator(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1800582b0(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void SystemDataDeallocator(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void SystemDataDeallocator(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  RenderingSystem_CameraSystem(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





