#include "SystemDataAdvancedValidator_definition.h"
#include "SystemDataAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 01_initialization_part042.c - 2 个函数
// 函数: void GenericFunction_180070930(uint64_t param_1,int64_t param_2,int32_t param_3,int64_t param_4,
void GenericFunction_180070930(uint64_t param_1,int64_t param_2,int32_t param_3,int64_t param_4,
                  char param_5,char param_6)
{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int32_t uVar7;
  int iVar8;
  int64_t lVar9;
  int8_t *puVar10;
  uint64_t *puVar11;
  int8_t *puVar12;
  byte bVar13;
  uint uVar14;
  int64_t lVar15;
  int64_t lVar16;
  void *puVar18;
  uint64_t uVar19;
  int8_t stack_array_188 [32];
  int8_t *plocal_var_168;
  void *plocal_var_160;
  int8_t *plocal_var_158;
  int8_t local_var_148;
  char cStack_147;
  void *plocal_var_140;
  int8_t *plocal_var_138;
  uint local_var_130;
  uint64_t local_var_128;
  char cStack_120;
  char cStack_11f;
  int32_t local_var_11c;
  void *plocal_var_118;
  int8_t *plocal_var_110;
  uint local_var_108;
  uint64_t local_var_100;
  void *plocal_var_f8;
  void *plocal_var_f0;
  int32_t local_var_e0;
  void *plocal_var_d8;
  int64_t lStack_d0;
  int32_t local_var_c0;
  int32_t local_var_98;
  int32_t local_var_94;
  int64_t lStack_90;
  int64_t lStack_88;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  int64_t lVar17;
  local_var_60 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  cStack_120 = param_5;
  puVar10 = (int8_t *)0x0;
  uVar14 = 0;
  local_var_11c = 0;
  local_var_148 = 0;
  local_var_58 = 0;
  local_var_50 = 0;
  local_var_98 = param_3;
  lStack_88 = param_4;
  GenericFunction_1800634b0(&local_var_58,0x10,&processed_var_4576_ptr,param_3);
  lVar9 = DataValidator(&plocal_var_d8,param_4);
  plocal_var_118 = &system_data_buffer_ptr;
  local_var_100 = 0;
  plocal_var_110 = (int8_t *)0x0;
  local_var_108 = 0;
  local_var_11c = 4;
  uVar6 = *(uint *)(lVar9 + 0x10);
  uVar19 = (uint64_t)uVar6;
  uVar5 = 0;
  if (*(int64_t *)(lVar9 + 8) == 0) {
LAB_180070a3f:
    uVar14 = uVar5;
    if (uVar6 != 0) {
// WARNING: Subroutine does not return
      memcpy(puVar10,*(uint64_t *)(lVar9 + 8),uVar19);
    }
  }
  else if (uVar6 != 0) {
    iVar4 = uVar6 + 1;
    if (iVar4 < 0x10) {
      iVar4 = 0x10;
    }
    puVar10 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar4,0x13);
    *puVar10 = 0;
    plocal_var_110 = puVar10;
    uVar5 = CoreEngineSystemCleanup(puVar10);
    local_var_100 = CONCAT44(local_var_100._4_4_,uVar5);
    goto LAB_180070a3f;
  }
  if (puVar10 != (int8_t *)0x0) {
    puVar10[uVar19] = 0;
  }
  uVar5 = *(uint *)(lVar9 + 0x1c);
  local_var_108 = uVar6;
  local_var_100._4_4_ = uVar5;
  if (param_2 != 0) {
    lVar9 = -1;
    do {
      lVar15 = lVar9;
      lVar9 = lVar15 + 1;
    } while (*(char *)(param_2 + lVar9) != '\0');
    if (0 < (int)lVar9) {
      iVar4 = uVar6 + (int)lVar9;
      if (iVar4 != 0) {
        uVar6 = iVar4 + 1;
        if (puVar10 == (int8_t *)0x0) {
          if ((int)uVar6 < 0x10) {
            uVar6 = 0x10;
          }
          puVar10 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar6,0x13);
          *puVar10 = 0;
        }
        else {
          if (uVar6 <= uVar14) goto LAB_180070b00;
          plocal_var_168 = (int8_t *)CONCAT71(plocal_var_168._1_7_,0x13);
          puVar10 = (int8_t *)DataStructureManager(system_memory_pool_ptr,puVar10,uVar6,0x10);
        }
        plocal_var_110 = puVar10;
        local_var_100._0_4_ = CoreEngineSystemCleanup(puVar10);
      }
LAB_180070b00:
// WARNING: Subroutine does not return
      memcpy(puVar10 + uVar19,param_2,(int64_t)((int)lVar15 + 2));
    }
  }
  UtilitiesSystem_CacheManager(&plocal_var_118,&plocal_var_f8,&local_var_58);
  local_var_94 = 0;
  local_var_11c = 0;
  plocal_var_118 = &system_data_buffer_ptr;
  if (puVar10 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar10);
  }
  plocal_var_110 = (int8_t *)0x0;
  local_var_100 = (uint64_t)local_var_100._4_4_ << 0x20;
  plocal_var_118 = &system_state_ptr;
  plocal_var_d8 = &system_data_buffer_ptr;
  if (lStack_d0 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_d0 = 0;
  local_var_c0 = 0;
  plocal_var_d8 = &system_state_ptr;
  puVar18 = &system_buffer_ptr;
  if (plocal_var_f0 != (void *)0x0) {
    puVar18 = plocal_var_f0;
  }
  cVar3 = GenericFunction_1800f9600(puVar18);
  if (cVar3 != '\0') {
    plocal_var_f8 = &system_data_buffer_ptr;
    if (plocal_var_f0 != (void *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    goto LAB_1800718e9;
  }
  iVar4 = WaitForSingleObject(init_system_memory,1);
  lVar9 = system_context_ptr;
  if (iVar4 != 0) {
    plocal_var_f8 = &system_data_buffer_ptr;
    if (plocal_var_f0 != (void *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    goto LAB_1800718e9;
  }
  lStack_90 = system_context_ptr;
  plocal_var_140 = &system_data_buffer_ptr;
  local_var_128 = 0;
  plocal_var_138 = (int8_t *)0x0;
  local_var_130 = 0;
  puVar18 = &system_data_f660;
  if (cStack_120 != '\0') {
    puVar18 = &processed_var_4216_ptr;
  }
  lVar15 = -1;
  do {
    lVar16 = lVar15;
    lVar15 = lVar16 + 1;
  } while (puVar18[lVar15] != '\0');
  iVar4 = (int)lVar15;
  if (0 < iVar4) {
    if (iVar4 != 0) {
      iVar4 = iVar4 + 1;
      if (iVar4 < 0x10) {
        iVar4 = 0x10;
      }
      plocal_var_138 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar4,0x13);
      *plocal_var_138 = 0;
      uVar7 = CoreEngineSystemCleanup(plocal_var_138);
      local_var_128 = CONCAT44(local_var_128._4_4_,uVar7);
    }
// WARNING: Subroutine does not return
    memcpy(plocal_var_138 + local_var_130,puVar18,(int64_t)((int)lVar16 + 2));
  }
  plocal_var_138 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *plocal_var_138 = 0;
  uVar5 = CoreEngineSystemCleanup(plocal_var_138);
  local_var_128 = CONCAT44(local_var_128._4_4_,uVar5);
  *(int16_t *)(plocal_var_138 + local_var_130) = 10;
  local_var_130 = 1;
  uVar6 = 2;
  if (plocal_var_138 == (int8_t *)0x0) {
    local_var_130 = 1;
    plocal_var_138 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *plocal_var_138 = 0;
LAB_180070db8:
    uVar7 = CoreEngineSystemCleanup(plocal_var_138);
    local_var_128 = CONCAT44(local_var_128._4_4_,uVar7);
  }
  else if (uVar5 < 3) {
    plocal_var_168 = (int8_t *)CONCAT71(plocal_var_168._1_7_,0x13);
    local_var_130 = 1;
    plocal_var_138 = (int8_t *)DataStructureManager(system_memory_pool_ptr,plocal_var_138,3,0x10);
    goto LAB_180070db8;
  }
  *(int16_t *)(plocal_var_138 + local_var_130) = 10;
  local_var_130 = 2;
  if (param_2 != 0) {
    lVar15 = -1;
    do {
      lVar16 = lVar15;
      lVar15 = lVar16 + 1;
    } while (*(char *)(param_2 + lVar15) != '\0');
    iVar4 = (int)lVar15;
    if (0 < iVar4) {
      uVar5 = uVar6;
      if (iVar4 != -2) {
        uVar14 = iVar4 + 3;
        if (plocal_var_138 == (int8_t *)0x0) {
          if ((int)uVar14 < 0x10) {
            uVar14 = 0x10;
          }
          local_var_130 = uVar6;
          plocal_var_138 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar14,0x13);
          *plocal_var_138 = 0;
        }
        else {
          uVar5 = local_var_130;
          if (uVar14 <= (uint)local_var_128) goto LAB_180070e64;
          plocal_var_168 = (int8_t *)CONCAT71(plocal_var_168._1_7_,0x13);
          local_var_130 = uVar6;
          plocal_var_138 = (int8_t *)DataStructureManager(system_memory_pool_ptr,plocal_var_138,uVar14,0x10);
        }
        uVar7 = CoreEngineSystemCleanup(plocal_var_138);
        local_var_128 = CONCAT44(local_var_128._4_4_,uVar7);
        uVar5 = local_var_130;
      }
LAB_180070e64:
      local_var_130 = uVar5;
// WARNING: Subroutine does not return
      memcpy(plocal_var_138 + local_var_130,param_2,(int64_t)((int)lVar16 + 2));
    }
  }
  if (plocal_var_138 == (int8_t *)0x0) {
    local_var_130 = uVar6;
    plocal_var_138 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *plocal_var_138 = 0;
LAB_180070ee8:
    uVar7 = CoreEngineSystemCleanup(plocal_var_138);
    local_var_128 = CONCAT44(local_var_128._4_4_,uVar7);
  }
  else if ((uint)local_var_128 < 4) {
    plocal_var_168 = (int8_t *)CONCAT71(plocal_var_168._1_7_,0x13);
    local_var_130 = uVar6;
    plocal_var_138 = (int8_t *)DataStructureManager(system_memory_pool_ptr,plocal_var_138,4,0x10);
    goto LAB_180070ee8;
  }
  *(int16_t *)(plocal_var_138 + local_var_130) = 0x3a;
  local_var_130 = 3;
  > HighFreq_PerformanceMonitor1(&plocal_var_140,local_var_98);
  uVar6 = local_var_130;
  uVar5 = local_var_130 + 1;
  if (uVar5 != 0) {
    uVar14 = local_var_130 + 2;
    if (plocal_var_138 == (int8_t *)0x0) {
      if ((int)uVar14 < 0x10) {
        uVar14 = 0x10;
      }
      plocal_var_138 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar14,0x13);
      *plocal_var_138 = 0;
    }
    else {
      if (uVar14 <= (uint)local_var_128) goto LAB_180070f81;
      plocal_var_168 = (int8_t *)CONCAT71(plocal_var_168._1_7_,0x13);
      plocal_var_138 = (int8_t *)DataStructureManager(system_memory_pool_ptr,plocal_var_138,uVar14,0x10);
    }
    uVar7 = CoreEngineSystemCleanup(plocal_var_138);
    local_var_128 = CONCAT44(local_var_128._4_4_,uVar7);
  }
LAB_180070f81:
  *(int16_t *)(plocal_var_138 + local_var_130) = 10;
  uVar14 = uVar6 + 0xd;
  local_var_130 = uVar5;
  if (uVar14 != 0) {
    uVar5 = uVar6 + 0xe;
    if (plocal_var_138 == (int8_t *)0x0) {
      if ((int)uVar5 < 0x10) {
        uVar5 = 0x10;
      }
      plocal_var_138 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar5,0x13);
      *plocal_var_138 = 0;
    }
    else {
      if (uVar5 <= (uint)local_var_128) goto LAB_180071000;
      plocal_var_168 = (int8_t *)CONCAT71(plocal_var_168._1_7_,0x13);
      plocal_var_138 = (int8_t *)DataStructureManager(system_memory_pool_ptr,plocal_var_138,uVar5,0x10);
    }
    uVar7 = CoreEngineSystemCleanup(plocal_var_138);
    local_var_128 = CONCAT44(local_var_128._4_4_,uVar7);
  }
LAB_180071000:
  lVar15 = lStack_88;
  puVar11 = (uint64_t *)(plocal_var_138 + local_var_130);
  *puVar11 = 0x6973736572707845;
  *(int32_t *)(puVar11 + 1) = 0x203a6e6f;
  *(int8_t *)((int64_t)puVar11 + 0xc) = 0;
  lVar16 = -1;
  local_var_130 = uVar14;
  if (lStack_88 != 0) {
    do {
      lVar17 = lVar16;
      lVar16 = lVar17 + 1;
    } while (*(char *)(lStack_88 + lVar16) != '\0');
    if (0 < (int)lVar16) {
      iVar4 = uVar14 + (int)lVar16;
      if (iVar4 != 0) {
        uVar6 = iVar4 + 1;
        if (plocal_var_138 == (int8_t *)0x0) {
          if ((int)uVar6 < 0x10) {
            uVar6 = 0x10;
          }
          plocal_var_138 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar6,0x13);
          *plocal_var_138 = 0;
        }
        else {
          if (uVar6 <= (uint)local_var_128) goto LAB_1800710b8;
          plocal_var_168 = (int8_t *)CONCAT71(plocal_var_168._1_7_,0x13);
          plocal_var_138 = (int8_t *)DataStructureManager(system_memory_pool_ptr,plocal_var_138,uVar6,0x10);
        }
        uVar7 = CoreEngineSystemCleanup(plocal_var_138);
        local_var_128 = CONCAT44(local_var_128._4_4_,uVar7);
      }
LAB_1800710b8:
// WARNING: Subroutine does not return
      memcpy(plocal_var_138 + local_var_130,lVar15,(int64_t)((int)lVar17 + 2));
    }
  }
  iVar4 = uVar6 + 0xe;
  if (iVar4 != 0) {
    uVar6 = uVar6 + 0xf;
    if (plocal_var_138 == (int8_t *)0x0) {
      if ((int)uVar6 < 0x10) {
        uVar6 = 0x10;
      }
      plocal_var_138 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar6,0x13);
      *plocal_var_138 = 0;
    }
    else {
      if (uVar6 <= (uint)local_var_128) goto LAB_18007113f;
      plocal_var_168 = (int8_t *)CONCAT71(plocal_var_168._1_7_,0x13);
      plocal_var_138 = (int8_t *)DataStructureManager(system_memory_pool_ptr,plocal_var_138,uVar6,0x10);
    }
    uVar7 = CoreEngineSystemCleanup(plocal_var_138);
    local_var_128 = CONCAT44(local_var_128._4_4_,uVar7);
  }
LAB_18007113f:
  *(int16_t *)(plocal_var_138 + local_var_130) = 10;
  local_var_130 = iVar4;
  if (lVar9 != 0) {
    GenericFunction_18005dab0(lVar9);
  }
  bVar13 = 1;
  cStack_11f = '\x01';
  cVar3 = (**(code **)**(uint64_t **)(init_system_data_memory + 0x18))();
  if ((cVar3 != '\0') || (iVar4 = IsDebuggerPresent(), iVar4 == 0)) {
    bVar13 = 0;
  }
  if (system_main_module_state == 0) {
    cStack_147 = '\0';
  }
  else {
    cStack_147 = *(char *)(system_main_module_state + 0x24);
  }
  bVar2 = true;
  if (lVar9 != 0) {
    iVar4 = *(int *)(**(int64_t **)(lVar9 + 8) + 0x48);
    iVar8 = _Thrd_id();
    cStack_11f = iVar8 == iVar4;
    bVar2 = (bool)cStack_11f;
  }
  lVar9 = system_operation_state;
  if ((system_debug_flag2 == '\0') && (bVar2)) {
    if ((system_operation_state != 0) && (*(char *)(system_operation_state + 0x1609) != '\x01')) {
      CoreEngine_1723A0(*(uint64_t *)(system_main_module_state + 8),*(char *)(init_system_data_memory + 0x2028) != '\0',
                    *(int32_t *)(system_operation_state + 0x160c));
      *(int8_t *)(lVar9 + 0x1609) = 1;
    }
    if (*(int64_t *)(system_main_module_state + 8) != 0) {
      GenericFunction_1801719d0();
    }
  }
  plocal_var_118 = &system_data_buffer_ptr;
  local_var_100 = 0;
  plocal_var_110 = (int8_t *)0x0;
  local_var_108 = 0;
  if (bVar13 == 0) {
    lVar9 = GenericFunction_1800f9ce0(&plocal_var_d8,0);
    local_var_108 = *(uint *)(lVar9 + 0x10);
    plocal_var_110 = *(int8_t **)(lVar9 + 8);
    local_var_100 = *(uint64_t *)(lVar9 + 0x18);
    *(int32_t *)(lVar9 + 0x10) = 0;
    *(uint64_t *)(lVar9 + 8) = 0;
    *(uint64_t *)(lVar9 + 0x18) = 0;
    plocal_var_d8 = &system_data_buffer_ptr;
    if (lStack_d0 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_d0 = 0;
    local_var_c0 = 0;
    plocal_var_d8 = &system_state_ptr;
  }
  puVar10 = plocal_var_110;
  GenericFunction_180062380(system_message_context,5,0xffffffff00000000,&memory_allocator_3968_ptr);
  plocal_var_168 = &system_buffer_ptr;
  if (plocal_var_138 != (int8_t *)0x0) {
    plocal_var_168 = plocal_var_138;
  }
  GenericFunction_180062380(system_message_context,4,0xffffffff00000000,&processed_var_4064_ptr);
  plocal_var_168 = &system_buffer_ptr;
  if (puVar10 != (int8_t *)0x0) {
    plocal_var_168 = puVar10;
  }
  SystemConfigurationManager(system_message_context,4,0xffffffff00000000,3);
  GenericFunction_1800623e0();
  puVar12 = &system_buffer_ptr;
  if (plocal_var_138 != (int8_t *)0x0) {
    puVar12 = plocal_var_138;
  }
  OutputDebugStringA(puVar12);
  GenericFunction_18004c2b0(lVar15);
  if (system_debug_flag != '\0') {
    if (bVar13 != 0) {
      if (((cStack_147 == '\0') && (param_6 != '\0')) && (*(int *)(system_main_module_state + 0x340) != 2)) {
        local_var_148 = 1;
      }
      else if (system_data_2851 == '\0') {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((init_system_data_memory == 0) || (*(int *)(init_system_data_memory + 0x168) == 2)) {
      GenericFunction_180062380(system_message_context,4,0xffffffff00000000,&processed_var_4280_ptr);
      GenericFunction_1800623e0();
      iVar4 = IsDebuggerPresent();
      if ((iVar4 != 0) && (system_data_2851 == '\0')) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (system_debug_flag2 == '\0') {
    puVar18 = &processed_var_4332_ptr;
    if (cStack_120 != '\0') {
      puVar18 = &processed_var_4320_ptr;
    }
    do {
      while( true ) {
        puVar12 = &system_buffer_ptr;
        if (plocal_var_138 != (int8_t *)0x0) {
          puVar12 = plocal_var_138;
        }
        if (((system_debug_flag == '\0') || (iVar4 = IsDebuggerPresent(), iVar4 != 0)) &&
           (system_debug_flag2 == '\0')) break;
        if (*(char *)(system_message_context + 0x18) != '\0') {
          plocal_var_168 = &processed_var_6936_ptr;
          plocal_var_160 = puVar18;
          plocal_var_158 = puVar12;
          SystemConfigurationManager(system_message_context,3,0xffffffff00000000,0xd);
        }
      }
      uVar7 = MessageBoxA(0,puVar12,puVar18,0x52012);
      switch(uVar7) {
      case 1:
        iVar4 = 0;
        break;
      default:
        iVar4 = 1;
        break;
      case 4:
        iVar4 = 2;
        break;
      case 5:
        iVar4 = 3;
        break;
      case 6:
        iVar4 = 4;
        break;
      case 7:
        iVar4 = 5;
      }
    } while (iVar4 == 1);
    if (iVar4 == 2) {
      if (bVar13 == 0) {
        puVar12 = &system_buffer_ptr;
        if (puVar10 != (int8_t *)0x0) {
          puVar12 = puVar10;
        }
        if (((system_debug_flag == '\0') || (iVar4 = IsDebuggerPresent(), iVar4 != 0)) &&
           (system_debug_flag2 == '\0')) {
          MessageBoxA(0,puVar12,&processed_var_4344_ptr,0x41010);
        }
        else if (*(char *)(system_message_context + 0x18) != '\0') {
          plocal_var_160 = &processed_var_4344_ptr;
          plocal_var_168 = &processed_var_6936_ptr;
          plocal_var_158 = puVar12;
          SystemConfigurationManager(system_message_context,3,0xffffffff00000000,0xd);
        }
      }
      else if (((param_6 == '\0') || (*(int *)(system_main_module_state + 0x340) == 2)) &&
              (system_data_2851 == '\0')) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else if (iVar4 == 3) goto LAB_1800715eb;
    if (system_main_module_state == 0) {
      cVar3 = '\x01';
    }
    else {
      cVar3 = *(char *)(system_main_module_state + 0x29);
    }
    if (cStack_147 != '\0') {
      GenericFunction_180055f70(cVar3,5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (cVar3 != '\0') {
      init_system_data_memory = 5;
    }
    if ((system_debug_flag2 == '\0') && (cStack_11f != '\0')) {
      if (*(int64_t *)(system_main_module_state + 8) != 0) {
        GenericFunction_1801718f0();
      }
      if (system_operation_state != 0) {
        GenericFunction_180092940(system_operation_state,*(int8_t *)(system_operation_state + 0x160a));
      }
    }
    if (lStack_90 != 0) {
      GenericFunction_18005db30();
    }
    do {
      iVar4 = ReleaseSemaphore(init_system_memory,1);
    } while (iVar4 == 0);
    plocal_var_118 = &system_data_buffer_ptr;
    if (puVar10 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar10);
    }
    plocal_var_110 = (int8_t *)0x0;
    local_var_100 = local_var_100 & 0xffffffff00000000;
    plocal_var_118 = &system_state_ptr;
    plocal_var_140 = &system_data_buffer_ptr;
    if (plocal_var_138 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_138 = (int8_t *)0x0;
    local_var_128 = local_var_128 & 0xffffffff00000000;
    plocal_var_140 = &system_state_ptr;
    plocal_var_f8 = &system_data_buffer_ptr;
    if (plocal_var_f0 != (void *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
LAB_1800718e9:
    local_var_e0 = 0;
    plocal_var_f0 = (void *)0x0;
    plocal_var_f8 = &system_state_ptr;
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_188);
  }
LAB_1800715eb:
  puVar18 = &system_buffer_ptr;
  if (plocal_var_f0 != (void *)0x0) {
    puVar18 = plocal_var_f0;
  }
  uVar7 = GenericFunction_1800f98e0(puVar18);
// WARNING: Subroutine does not return
  SystemParameterHandler(system_message_context,&processed_var_4368_ptr,bVar13 ^ 1,uVar7);
}
// WARNING: Removing unreachable block (ram,0x000180071b49)
// WARNING: Removing unreachable block (ram,0x000180071ad3)
// WARNING: Removing unreachable block (ram,0x000180071a52)
// WARNING: Removing unreachable block (ram,0x000180071c73)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_180071940(uint64_t param_1,int64_t param_2,int32_t param_3,int64_t param_4)
void GenericFunction_180071940(uint64_t param_1,int64_t param_2,int32_t param_3,int64_t param_4)
{
  int iVar1;
  uint uVar2;
  int32_t uVar3;
  int64_t lVar4;
  void *puVar5;
  int32_t *puVar6;
  uint64_t *puVar7;
  int8_t *puVar8;
  void *puVar9;
  int64_t lVar10;
  uint uVar11;
  uint uVar12;
  void *plocal_var_90;
  int8_t *plocal_var_88;
  uint local_var_80;
  uint64_t local_var_78;
  void *plocal_var_70;
  void *plocal_var_68;
  int32_t local_var_60;
  uint64_t local_var_58;
  void *plocal_var_50;
  int64_t lStack_48;
  int32_t local_var_38;
  iVar1 = WaitForSingleObject(init_system_memory,0);
  if (iVar1 != 0) {
    return;
  }
  puVar9 = (void *)0x0;
  plocal_var_70 = &system_data_buffer_ptr;
  local_var_58 = 0;
  plocal_var_68 = (void *)0x0;
  local_var_60 = 0;
  iVar1 = IsDebuggerPresent();
  if (iVar1 == 0) {
    lVar4 = GenericFunction_1800f9ce0(&plocal_var_50,0);
    local_var_60 = *(int32_t *)(lVar4 + 0x10);
    puVar9 = *(void **)(lVar4 + 8);
    local_var_58 = *(uint64_t *)(lVar4 + 0x18);
    *(int32_t *)(lVar4 + 0x10) = 0;
    *(uint64_t *)(lVar4 + 8) = 0;
    *(uint64_t *)(lVar4 + 0x18) = 0;
    plocal_var_50 = &system_data_buffer_ptr;
    plocal_var_68 = puVar9;
    if (lStack_48 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_48 = 0;
    local_var_38 = 0;
    plocal_var_50 = &system_state_ptr;
  }
  plocal_var_90 = &system_data_buffer_ptr;
  local_var_78 = 0;
  plocal_var_88 = (int8_t *)0x0;
  local_var_80 = 0;
  plocal_var_88 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x12,0x13);
  *plocal_var_88 = 0;
  uVar2 = CoreEngineSystemCleanup(plocal_var_88);
  local_var_78 = CONCAT44(local_var_78._4_4_,uVar2);
  puVar6 = (int32_t *)(plocal_var_88 + local_var_80);
  *puVar6 = 0x65737341;
  puVar6[1] = 0x6f697472;
  puVar6[2] = 0x6146206e;
  puVar6[3] = 0x64656c69;
  *(int16_t *)(puVar6 + 4) = 0x21;
  local_var_80 = 0x11;
  if (plocal_var_88 == (int8_t *)0x0) {
    local_var_80 = 0x11;
    plocal_var_88 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x13,0x13);
    *plocal_var_88 = 0;
LAB_180071af3:
    uVar3 = CoreEngineSystemCleanup(plocal_var_88);
    local_var_78 = CONCAT44(local_var_78._4_4_,uVar3);
  }
  else if (uVar2 < 0x13) {
    local_var_80 = 0x11;
    plocal_var_88 = (int8_t *)DataStructureManager(system_memory_pool_ptr,plocal_var_88,0x13,0x10,0x13);
    goto LAB_180071af3;
  }
  *(int16_t *)(plocal_var_88 + local_var_80) = 10;
  local_var_80 = 0x12;
  uVar2 = 0x13;
  if (plocal_var_88 == (int8_t *)0x0) {
    local_var_80 = 0x12;
    plocal_var_88 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x14,0x13);
    *plocal_var_88 = 0;
LAB_180071b69:
    uVar3 = CoreEngineSystemCleanup(plocal_var_88);
    local_var_78 = CONCAT44(local_var_78._4_4_,uVar3);
  }
  else if ((uint)local_var_78 < 0x14) {
    local_var_80 = 0x12;
    plocal_var_88 = (int8_t *)DataStructureManager(system_memory_pool_ptr,plocal_var_88,0x14,0x10,0x13);
    goto LAB_180071b69;
  }
  *(int16_t *)(plocal_var_88 + local_var_80) = 10;
  local_var_80 = 0x13;
  if (param_2 != 0) {
    lVar4 = -1;
    do {
      lVar10 = lVar4;
      lVar4 = lVar10 + 1;
    } while (*(char *)(param_2 + lVar4) != '\0');
    iVar1 = (int)lVar4;
    if (0 < iVar1) {
      uVar11 = uVar2;
      if (iVar1 != -0x13) {
        uVar12 = iVar1 + 0x14;
        if (plocal_var_88 == (int8_t *)0x0) {
          if ((int)uVar12 < 0x10) {
            uVar12 = 0x10;
          }
          local_var_80 = uVar2;
          plocal_var_88 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar12,0x13);
          *plocal_var_88 = 0;
        }
        else {
          uVar11 = local_var_80;
          if (uVar12 <= (uint)local_var_78) goto LAB_180071c1a;
          local_var_80 = uVar2;
          plocal_var_88 = (int8_t *)DataStructureManager(system_memory_pool_ptr,plocal_var_88,uVar12,0x10,0x13);
        }
        uVar3 = CoreEngineSystemCleanup(plocal_var_88);
        local_var_78 = CONCAT44(local_var_78._4_4_,uVar3);
        uVar11 = local_var_80;
      }
LAB_180071c1a:
      local_var_80 = uVar11;
// WARNING: Subroutine does not return
      memcpy(plocal_var_88 + local_var_80,param_2,(int64_t)((int)lVar10 + 2));
    }
  }
  if (plocal_var_88 == (int8_t *)0x0) {
    local_var_80 = uVar2;
    plocal_var_88 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x15,0x13);
    *plocal_var_88 = 0;
LAB_180071c93:
    uVar3 = CoreEngineSystemCleanup(plocal_var_88);
    local_var_78 = CONCAT44(local_var_78._4_4_,uVar3);
  }
  else if ((uint)local_var_78 < 0x15) {
    local_var_80 = uVar2;
    plocal_var_88 = (int8_t *)DataStructureManager(system_memory_pool_ptr,plocal_var_88,0x15,0x10,0x13);
    goto LAB_180071c93;
  }
  *(int16_t *)(plocal_var_88 + local_var_80) = 0x3a;
  local_var_80 = 0x14;
  > HighFreq_PerformanceMonitor1(&plocal_var_90,param_3);
  uVar2 = local_var_80;
  uVar11 = local_var_80 + 1;
  if (uVar11 != 0) {
    uVar12 = local_var_80 + 2;
    if (plocal_var_88 == (int8_t *)0x0) {
      if ((int)uVar12 < 0x10) {
        uVar12 = 0x10;
      }
      plocal_var_88 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar12,0x13);
      *plocal_var_88 = 0;
    }
    else {
      if (uVar12 <= (uint)local_var_78) goto LAB_180071d1f;
      plocal_var_88 = (int8_t *)DataStructureManager(system_memory_pool_ptr,plocal_var_88,uVar12,0x10,0x13);
    }
    uVar3 = CoreEngineSystemCleanup(plocal_var_88);
    local_var_78 = CONCAT44(local_var_78._4_4_,uVar3);
  }
LAB_180071d1f:
  *(int16_t *)(plocal_var_88 + local_var_80) = 10;
  uVar12 = uVar2 + 0xd;
  local_var_80 = uVar11;
  if (uVar12 != 0) {
    uVar11 = uVar2 + 0xe;
    if (plocal_var_88 == (int8_t *)0x0) {
      if ((int)uVar11 < 0x10) {
        uVar11 = 0x10;
      }
      plocal_var_88 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar11,0x13);
      *plocal_var_88 = 0;
    }
    else {
      if (uVar11 <= (uint)local_var_78) goto LAB_180071d94;
      plocal_var_88 = (int8_t *)DataStructureManager(system_memory_pool_ptr,plocal_var_88,uVar11,0x10,0x13);
    }
    uVar3 = CoreEngineSystemCleanup(plocal_var_88);
    local_var_78 = CONCAT44(local_var_78._4_4_,uVar3);
  }
LAB_180071d94:
  puVar7 = (uint64_t *)(plocal_var_88 + local_var_80);
  *puVar7 = 0x6973736572707845;
  *(int32_t *)(puVar7 + 1) = 0x203a6e6f;
  *(int8_t *)((int64_t)puVar7 + 0xc) = 0;
  lVar4 = -1;
  local_var_80 = uVar12;
  if (param_4 != 0) {
    do {
      lVar10 = lVar4;
      lVar4 = lVar10 + 1;
    } while (*(char *)(param_4 + lVar4) != '\0');
    if (0 < (int)lVar4) {
      iVar1 = uVar12 + (int)lVar4;
      if (iVar1 != 0) {
        uVar2 = iVar1 + 1;
        if (plocal_var_88 == (int8_t *)0x0) {
          if ((int)uVar2 < 0x10) {
            uVar2 = 0x10;
          }
          plocal_var_88 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar2,0x13);
          *plocal_var_88 = 0;
        }
        else {
          if (uVar2 <= (uint)local_var_78) goto LAB_180071e34;
          plocal_var_88 = (int8_t *)DataStructureManager(system_memory_pool_ptr,plocal_var_88,uVar2,0x10,0x13);
        }
        uVar3 = CoreEngineSystemCleanup(plocal_var_88);
        local_var_78 = CONCAT44(local_var_78._4_4_,uVar3);
      }
LAB_180071e34:
// WARNING: Subroutine does not return
      memcpy(plocal_var_88 + local_var_80,param_4,(int64_t)((int)lVar10 + 2));
    }
  }
  if (uVar2 + 0xe != 0) {
    uVar11 = uVar2 + 0xf;
    if (plocal_var_88 == (int8_t *)0x0) {
      if ((int)uVar11 < 0x10) {
        uVar11 = 0x10;
      }
      plocal_var_88 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar11,0x13);
      *plocal_var_88 = 0;
    }
    else {
      if (uVar11 <= (uint)local_var_78) goto LAB_180071eb0;
      plocal_var_88 = (int8_t *)DataStructureManager(system_memory_pool_ptr,plocal_var_88,uVar11,0x10,0x13);
    }
    uVar3 = CoreEngineSystemCleanup(plocal_var_88);
    local_var_78 = CONCAT44(local_var_78._4_4_,uVar3);
  }
LAB_180071eb0:
  *(int16_t *)(plocal_var_88 + local_var_80) = 10;
  local_var_80 = uVar2 + 0xe;
  GenericFunction_180062380(system_message_context,5,0xffffffff00000000,&memory_allocator_3968_ptr);
  puVar8 = &system_buffer_ptr;
  if (plocal_var_88 != (int8_t *)0x0) {
    puVar8 = plocal_var_88;
  }
  GenericFunction_180062380(system_message_context,4,0xffffffff00000000,&processed_var_4064_ptr,puVar8);
  puVar5 = &system_buffer_ptr;
  if (puVar9 != (void *)0x0) {
    puVar5 = puVar9;
  }
  SystemConfigurationManager(system_message_context,4,0xffffffff00000000,3,puVar5);
  GenericFunction_1800623e0();
  puVar8 = &system_buffer_ptr;
  if (plocal_var_88 != (int8_t *)0x0) {
    puVar8 = plocal_var_88;
  }
  OutputDebugStringA(puVar8);
  do {
    iVar1 = ReleaseSemaphore(init_system_memory,1);
  } while (iVar1 == 0);
  plocal_var_90 = &system_data_buffer_ptr;
  if (plocal_var_88 == (int8_t *)0x0) {
    plocal_var_88 = (int8_t *)0x0;
    local_var_78 = local_var_78 & 0xffffffff00000000;
    plocal_var_90 = &system_state_ptr;
    plocal_var_70 = &system_data_buffer_ptr;
    if (puVar9 == (void *)0x0) {
      return;
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar9);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Removing unreachable block (ram,0x00018007258a)
// WARNING: Removing unreachable block (ram,0x0001800724fe)
// WARNING: Removing unreachable block (ram,0x00018007246a)
// WARNING: Removing unreachable block (ram,0x0001800726c4)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address