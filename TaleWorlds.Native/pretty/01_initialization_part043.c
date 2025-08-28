/* SystemScheduler - RenderingSystem_ResourceBinder */
#define RenderingSystem_ResourceBinder SystemScheduler
#include "SystemDataAdvancedValidator_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 01_initialization_part043.c - 3 个函数
// 函数: void GenericFunction_180072000(uint64_t param_1,int64_t param_2,int32_t param_3,int64_t param_4,
void GenericFunction_180072000(uint64_t param_1,int64_t param_2,int32_t param_3,int64_t param_4,
                  int8_t param_5,char param_6)
{
  code *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int32_t uVar7;
  uint uVar8;
  int64_t lVar9;
  int8_t *puVar10;
  void **ppuVar11;
  int32_t *puVar12;
  uint64_t *puVar13;
  int8_t *puVar14;
  void *puVar15;
  uint uVar16;
  int64_t lVar17;
  int8_t uVar18;
  uint64_t uVar19;
  int8_t stack_array_168 [32];
  int8_t *plocal_var_148;
  void *plocal_var_138;
  int8_t *plocal_var_130;
  uint local_var_128;
  uint64_t local_var_120;
  char cStack_118;
  char cStack_117;
  int8_t local_var_116;
  uint local_var_114;
  void *plocal_var_110;
  int8_t *plocal_var_108;
  uint local_var_100;
  uint64_t local_var_f8;
  void *plocal_var_f0;
  int64_t lStack_e8;
  int32_t local_var_d8;
  void *plocal_var_d0;
  uint64_t *plocal_var_c8;
  int32_t local_var_c0;
  uint64_t local_var_b8;
  int32_t local_var_b0;
  void *plocal_var_a8;
  void *plocal_var_a0;
  int32_t local_var_90;
  int64_t lStack_88;
  void *plocal_var_80;
  int64_t lStack_78;
  int32_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  local_var_60 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  puVar10 = (int8_t *)0x0;
  local_var_114 = 0;
  local_var_116 = 0;
  local_var_b0 = param_3;
  lStack_88 = param_4;
  if ((system_debug_flag != '\0') || (system_event_handler != '\0')) goto LAB_180072d7b;
  local_var_58 = 0;
  local_var_50 = 0;
  GenericFunction_1800634b0(&local_var_58,0x10,&processed_var_4576_ptr,param_3);
  lVar9 = CoreMemoryPoolValidator(&plocal_var_f0,param_4);
  plocal_var_110 = &system_data_buffer_ptr;
  uVar16 = 0;
  local_var_f8 = 0;
  plocal_var_108 = (int8_t *)0x0;
  local_var_100 = 0;
  local_var_114 = 4;
  uVar6 = *(uint *)(lVar9 + 0x10);
  uVar19 = (uint64_t)uVar6;
  uVar4 = 0;
  if (*(int64_t *)(lVar9 + 8) == 0) {
LAB_180072120:
    uVar16 = uVar4;
    if (uVar6 != 0) {
// WARNING: Subroutine does not return
      memcpy(puVar10,*(uint64_t *)(lVar9 + 8),uVar19);
    }
  }
  else if (uVar6 != 0) {
    iVar3 = uVar6 + 1;
    if (iVar3 < 0x10) {
      iVar3 = 0x10;
    }
    puVar10 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar3,0x13);
    *puVar10 = 0;
    plocal_var_108 = puVar10;
    uVar4 = CoreEngineSystemCleanup(puVar10);
    local_var_f8 = CONCAT44(local_var_f8._4_4_,uVar4);
    goto LAB_180072120;
  }
  if (puVar10 != (int8_t *)0x0) {
    puVar10[uVar19] = 0;
  }
  uVar4 = *(uint *)(lVar9 + 0x1c);
  local_var_100 = uVar6;
  local_var_f8._4_4_ = uVar4;
  if (param_2 != 0) {
    lVar9 = -1;
    do {
      lVar17 = lVar9;
      lVar9 = lVar17 + 1;
    } while (*(char *)(param_2 + lVar9) != '\0');
    if (0 < (int)lVar9) {
      iVar3 = uVar6 + (int)lVar9;
      if (iVar3 != 0) {
        uVar6 = iVar3 + 1;
        if (puVar10 == (int8_t *)0x0) {
          if ((int)uVar6 < 0x10) {
            uVar6 = 0x10;
          }
          puVar10 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar6,0x13);
          *puVar10 = 0;
        }
        else {
          if (uVar6 <= uVar16) goto LAB_1800721e1;
          plocal_var_148 = (int8_t *)CONCAT71(plocal_var_148._1_7_,0x13);
          puVar10 = (int8_t *)DataValidator(system_memory_pool_ptr,puVar10,uVar6,0x10);
        }
        plocal_var_108 = puVar10;
        local_var_f8._0_4_ = CoreEngineSystemCleanup(puVar10);
      }
LAB_1800721e1:
// WARNING: Subroutine does not return
      memcpy(puVar10 + uVar19,param_2,(int64_t)((int)lVar17 + 2));
    }
  }
  UtilitiesSystem_CacheManager(&plocal_var_110,&plocal_var_a8,&local_var_58);
  local_var_114 = 0;
  plocal_var_110 = &system_data_buffer_ptr;
  if (puVar10 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar10);
  }
  plocal_var_108 = (int8_t *)0x0;
  local_var_f8 = (uint64_t)local_var_f8._4_4_ << 0x20;
  plocal_var_110 = &system_state_ptr;
  plocal_var_f0 = &system_data_buffer_ptr;
  if (lStack_e8 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_e8 = 0;
  local_var_d8 = 0;
  plocal_var_f0 = &system_state_ptr;
  puVar15 = &system_buffer_ptr;
  if (plocal_var_a0 != (void *)0x0) {
    puVar15 = plocal_var_a0;
  }
  cVar2 = GenericFunction_1800f9600(puVar15);
  if (cVar2 == '\0') {
    iVar3 = WaitForSingleObject(init_system_memory,0);
    if (iVar3 == 0) {
      cStack_117 = '\x01';
      cVar2 = (**(code **)**(uint64_t **)(init_system_data_memory + 0x18))();
      if ((cVar2 == '\0') && (iVar3 = IsDebuggerPresent(), iVar3 != 0)) {
        cVar2 = '\x01';
      }
      else {
        cVar2 = '\0';
      }
      cStack_118 = cVar2;
      if (system_context_ptr == 0) {
LAB_1800722f5:
        lVar9 = system_operation_state;
        if ((system_operation_state != 0) && (*(char *)(system_operation_state + 0x1609) != '\x01')) {
          CoreEngine_1723A0(*(uint64_t *)(system_main_module_state + 8),
                        *(char *)(init_system_data_memory + 0x2028) != '\0',
                        *(int32_t *)(system_operation_state + 0x160c));
          *(int8_t *)(lVar9 + 0x1609) = 1;
        }
        if (*(int64_t *)(system_main_module_state + 8) != 0) {
          GenericFunction_1801719d0();
        }
      }
      else {
        iVar3 = *(int *)(**(int64_t **)(system_context_ptr + 8) + 0x48);
        iVar5 = _Thrd_id();
        cStack_117 = iVar5 == iVar3;
        if ((bool)cStack_117) goto LAB_1800722f5;
      }
      if (cVar2 != '\0') {
        if ((param_6 == '\0') || (*(int *)(system_main_module_state + 0x340) == 2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_var_116 = 1;
      }
      plocal_var_110 = &system_data_buffer_ptr;
      local_var_f8 = 0;
      plocal_var_108 = (void *)0x0;
      local_var_100 = 0;
      if (cVar2 == '\0') {
        lVar9 = GenericFunction_1800f9ce0(&plocal_var_f0,0);
        local_var_100 = *(uint *)(lVar9 + 0x10);
        plocal_var_108 = *(int8_t **)(lVar9 + 8);
        local_var_f8 = *(uint64_t *)(lVar9 + 0x18);
        *(int32_t *)(lVar9 + 0x10) = 0;
        *(uint64_t *)(lVar9 + 8) = 0;
        *(uint64_t *)(lVar9 + 0x18) = 0;
        plocal_var_f0 = &system_data_buffer_ptr;
        if (lStack_e8 != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        lStack_e8 = 0;
        local_var_d8 = 0;
        plocal_var_f0 = &system_state_ptr;
      }
      puVar10 = plocal_var_108;
      plocal_var_138 = &system_data_buffer_ptr;
      local_var_120 = 0;
      plocal_var_130 = (int8_t *)0x0;
      local_var_128 = 0;
      plocal_var_130 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x15,0x13);
      *plocal_var_130 = 0;
      uVar6 = CoreEngineSystemCleanup(plocal_var_130);
      local_var_120 = CONCAT44(local_var_120._4_4_,uVar6);
      puVar12 = (int32_t *)(plocal_var_130 + local_var_128);
      *puVar12 = 0x69746f4e;
      puVar12[1] = 0x61636966;
      puVar12[2] = 0x6e6f6974;
      puVar12[3] = 0x73734120;
      puVar12[4] = 0x21747265;
      *(int8_t *)(puVar12 + 5) = 0;
      local_var_128 = 0x14;
      if (plocal_var_130 == (int8_t *)0x0) {
        local_var_128 = 0x14;
        plocal_var_130 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x16,0x13);
        *plocal_var_130 = 0;
LAB_180072521:
        uVar7 = CoreEngineSystemCleanup(plocal_var_130);
        local_var_120 = CONCAT44(local_var_120._4_4_,uVar7);
      }
      else if (uVar6 < 0x16) {
        plocal_var_148 = (int8_t *)CONCAT71(plocal_var_148._1_7_,0x13);
        local_var_128 = 0x14;
        plocal_var_130 = (int8_t *)DataValidator(system_memory_pool_ptr,plocal_var_130,0x16,0x10);
        goto LAB_180072521;
      }
      *(int16_t *)(plocal_var_130 + local_var_128) = 10;
      local_var_128 = 0x15;
      uVar6 = 0x16;
      if (plocal_var_130 == (int8_t *)0x0) {
        local_var_128 = 0x15;
        plocal_var_130 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x17,0x13);
        *plocal_var_130 = 0;
LAB_1800725ac:
        uVar7 = CoreEngineSystemCleanup(plocal_var_130);
        local_var_120 = CONCAT44(local_var_120._4_4_,uVar7);
      }
      else if ((uint)local_var_120 < 0x17) {
        plocal_var_148 = (int8_t *)CONCAT71(plocal_var_148._1_7_,0x13);
        local_var_128 = 0x15;
        plocal_var_130 = (int8_t *)DataValidator(system_memory_pool_ptr,plocal_var_130,0x17,0x10);
        goto LAB_1800725ac;
      }
      *(int16_t *)(plocal_var_130 + local_var_128) = 10;
      local_var_128 = 0x16;
      if (param_2 != 0) {
        lVar9 = -1;
        do {
          lVar17 = lVar9;
          lVar9 = lVar17 + 1;
        } while (*(char *)(param_2 + lVar9) != '\0');
        iVar3 = (int)lVar9;
        if (0 < iVar3) {
          uVar4 = uVar6;
          if (iVar3 != -0x16) {
            uVar16 = iVar3 + 0x17;
            if (plocal_var_130 == (int8_t *)0x0) {
              if ((int)uVar16 < 0x10) {
                uVar16 = 0x10;
              }
              local_var_128 = uVar6;
              plocal_var_130 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar16,0x13);
              *plocal_var_130 = 0;
            }
            else {
              uVar4 = local_var_128;
              if (uVar16 <= (uint)local_var_120) goto LAB_180072662;
              plocal_var_148 = (int8_t *)CONCAT71(plocal_var_148._1_7_,0x13);
              local_var_128 = uVar6;
              plocal_var_130 = (int8_t *)DataValidator(system_memory_pool_ptr,plocal_var_130,uVar16,0x10);
            }
            uVar7 = CoreEngineSystemCleanup(plocal_var_130);
            local_var_120 = CONCAT44(local_var_120._4_4_,uVar7);
            uVar4 = local_var_128;
          }
LAB_180072662:
          local_var_128 = uVar4;
// WARNING: Subroutine does not return
          memcpy(plocal_var_130 + local_var_128,param_2,(int64_t)((int)lVar17 + 2));
        }
      }
      if (plocal_var_130 == (int8_t *)0x0) {
        local_var_128 = uVar6;
        plocal_var_130 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x18,0x13);
        *plocal_var_130 = 0;
LAB_1800726e7:
        uVar7 = CoreEngineSystemCleanup(plocal_var_130);
        local_var_120 = CONCAT44(local_var_120._4_4_,uVar7);
      }
      else if ((uint)local_var_120 < 0x18) {
        plocal_var_148 = (int8_t *)CONCAT71(plocal_var_148._1_7_,0x13);
        local_var_128 = uVar6;
        plocal_var_130 = (int8_t *)DataValidator(system_memory_pool_ptr,plocal_var_130,0x18,0x10);
        goto LAB_1800726e7;
      }
      *(int16_t *)(plocal_var_130 + local_var_128) = 0x3a;
      local_var_128 = 0x17;
      > HighFreq_PerformanceMonitor1(&plocal_var_138,local_var_b0);
      uVar6 = local_var_128;
      uVar4 = local_var_128 + 1;
      if (uVar4 != 0) {
        uVar16 = local_var_128 + 2;
        if (plocal_var_130 == (int8_t *)0x0) {
          if ((int)uVar16 < 0x10) {
            uVar16 = 0x10;
          }
          plocal_var_130 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar16,0x13);
          *plocal_var_130 = 0;
        }
        else {
          if (uVar16 <= (uint)local_var_120) goto LAB_180072780;
          plocal_var_148 = (int8_t *)CONCAT71(plocal_var_148._1_7_,0x13);
          plocal_var_130 = (int8_t *)DataValidator(system_memory_pool_ptr,plocal_var_130,uVar16,0x10);
        }
        uVar7 = CoreEngineSystemCleanup(plocal_var_130);
        local_var_120 = CONCAT44(local_var_120._4_4_,uVar7);
      }
LAB_180072780:
      *(int16_t *)(plocal_var_130 + local_var_128) = 10;
      uVar16 = uVar6 + 0xd;
      local_var_128 = uVar4;
      if (uVar16 != 0) {
        uVar4 = uVar6 + 0xe;
        if (plocal_var_130 == (int8_t *)0x0) {
          if ((int)uVar4 < 0x10) {
            uVar4 = 0x10;
          }
          plocal_var_130 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar4,0x13);
          *plocal_var_130 = 0;
        }
        else {
          if (uVar4 <= (uint)local_var_120) goto LAB_1800727ff;
          plocal_var_148 = (int8_t *)CONCAT71(plocal_var_148._1_7_,0x13);
          plocal_var_130 = (int8_t *)DataValidator(system_memory_pool_ptr,plocal_var_130,uVar4,0x10);
        }
        uVar7 = CoreEngineSystemCleanup(plocal_var_130);
        local_var_120 = CONCAT44(local_var_120._4_4_,uVar7);
      }
LAB_1800727ff:
      puVar13 = (uint64_t *)(plocal_var_130 + local_var_128);
      *puVar13 = 0x6973736572707845;
      *(int32_t *)(puVar13 + 1) = 0x203a6e6f;
      *(int8_t *)((int64_t)puVar13 + 0xc) = 0;
      lVar9 = -1;
      local_var_128 = uVar16;
      if (param_4 != 0) {
        do {
          lVar17 = lVar9;
          lVar9 = lVar17 + 1;
        } while (*(char *)(lVar9 + param_4) != '\0');
        if (0 < (int)lVar9) {
          iVar3 = uVar16 + (int)lVar9;
          if (iVar3 != 0) {
            uVar6 = iVar3 + 1;
            if (plocal_var_130 == (int8_t *)0x0) {
              if ((int)uVar6 < 0x10) {
                uVar6 = 0x10;
              }
              plocal_var_130 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar6,0x13);
              *plocal_var_130 = 0;
            }
            else {
              if (uVar6 <= (uint)local_var_120) goto LAB_1800728ad;
              plocal_var_148 = (int8_t *)CONCAT71(plocal_var_148._1_7_,0x13);
              plocal_var_130 = (int8_t *)DataValidator(system_memory_pool_ptr,plocal_var_130,uVar6,0x10);
            }
            uVar7 = CoreEngineSystemCleanup(plocal_var_130);
            local_var_120 = CONCAT44(local_var_120._4_4_,uVar7);
          }
LAB_1800728ad:
// WARNING: Subroutine does not return
          memcpy(plocal_var_130 + local_var_128,param_4,(int64_t)((int)lVar17 + 2));
        }
      }
      uVar4 = uVar6 + 0xf;
      if (uVar4 != 0) {
        uVar8 = uVar6 + 0x10;
        if (plocal_var_130 == (int8_t *)0x0) {
          if ((int)uVar8 < 0x10) {
            uVar8 = 0x10;
          }
          plocal_var_130 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar8,0x13);
          *plocal_var_130 = 0;
        }
        else {
          if (uVar8 <= (uint)local_var_120) goto LAB_180072934;
          plocal_var_148 = (int8_t *)CONCAT71(plocal_var_148._1_7_,0x13);
          plocal_var_130 = (int8_t *)DataValidator(system_memory_pool_ptr,plocal_var_130,uVar8,0x10);
        }
        uVar7 = CoreEngineSystemCleanup(plocal_var_130);
        local_var_120 = CONCAT44(local_var_120._4_4_,uVar7);
      }
LAB_180072934:
      *(int16_t *)(plocal_var_130 + local_var_128) = 0xa0a;
      *(int8_t *)((int64_t)(plocal_var_130 + local_var_128) + 2) = 0;
      local_var_128 = uVar4;
      if (uVar6 + 0x6d != 0) {
        uVar4 = uVar6 + 0x6e;
        if (plocal_var_130 == (int8_t *)0x0) {
          if ((int)uVar4 < 0x10) {
            uVar4 = 0x10;
          }
          plocal_var_130 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar4,0x13);
          *plocal_var_130 = 0;
        }
        else {
          if (uVar4 <= (uint)local_var_120) goto LAB_1800729bd;
          plocal_var_148 = (int8_t *)CONCAT71(plocal_var_148._1_7_,0x13);
          plocal_var_130 = (int8_t *)DataValidator(system_memory_pool_ptr,plocal_var_130,uVar4,0x10);
        }
        uVar7 = CoreEngineSystemCleanup(plocal_var_130);
        local_var_120 = CONCAT44(local_var_120._4_4_,uVar7);
      }
LAB_1800729bd:
      puVar13 = (uint64_t *)(plocal_var_130 + local_var_128);
      *puVar13 = 0x232323232323233c;
      puVar13[1] = 0x2323232323232323;
      puVar13[2] = 0x2323232323232323;
      puVar13[3] = 0x2323232323232323;
      puVar13[4] = 0x2323232323232323;
      puVar13[5] = 0x2323232323232323;
      puVar13[6] = 0x2323232323232323;
      puVar13[7] = 0x2323232323232323;
      *(int32_t *)(puVar13 + 8) = 0x23232323;
      *(int32_t *)((int64_t)puVar13 + 0x44) = 0x23232323;
      *(int32_t *)(puVar13 + 9) = 0x23232323;
      *(int32_t *)((int64_t)puVar13 + 0x4c) = 0x23232323;
      puVar13[10] = 0x2323232323232323;
      *(int32_t *)(puVar13 + 0xb) = 0x3e232323;
      *(int16_t *)((int64_t)puVar13 + 0x5c) = 0xa0a;
      *(int8_t *)((int64_t)puVar13 + 0x5e) = 0;
      plocal_var_148 = &system_buffer_ptr;
      if (plocal_var_130 != (int8_t *)0x0) {
        plocal_var_148 = plocal_var_130;
      }
      local_var_128 = uVar6 + 0x6d;
      GenericFunction_180062380(system_message_context,4,0xffffffff00000000,&processed_var_4064_ptr);
      plocal_var_148 = &system_buffer_ptr;
      if (puVar10 != (void *)0x0) {
        plocal_var_148 = puVar10;
      }
      SystemConfigurationManager(system_message_context,4,0xffffffff00000000,3);
      GenericFunction_1800623e0();
      puVar14 = &system_buffer_ptr;
      if (plocal_var_130 != (int8_t *)0x0) {
        puVar14 = plocal_var_130;
      }
      OutputDebugStringA(puVar14);
      GenericFunction_18004c2b0(param_4);
      puVar15 = &system_buffer_ptr;
      if (plocal_var_a0 != (void *)0x0) {
        puVar15 = plocal_var_a0;
      }
      iVar3 = GenericFunction_1800f98e0(puVar15);
      if ((cStack_118 == '\0') && (iVar3 == 0)) {
        if ((system_main_module_state == 0) || (*(char *)(system_main_module_state + 0x141) == '\0')) {
          uVar18 = 0;
        }
        else {
          uVar18 = 1;
        }
        if (system_main_module_state == 0) {
          plocal_var_d0 = &system_data_buffer_ptr;
          local_var_b8 = 0;
          plocal_var_c8 = (uint64_t *)0x0;
          local_var_c0 = 0;
          puVar13 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x34,0x13);
          *(int8_t *)puVar13 = 0;
          plocal_var_c8 = puVar13;
          uVar7 = CoreEngineSystemCleanup(puVar13);
          local_var_b8 = CONCAT44(local_var_b8._4_4_,uVar7);
          *puVar13 = 0x7270706d75645c5c;
          puVar13[1] = 0x2e726f737365636f;
          puVar13[2] = 0x6c726f77656c6174;
          puVar13[3] = 0x445c6d6f632e7364;
          *(int32_t *)(puVar13 + 4) = 0x50706d75;
          *(int32_t *)((int64_t)puVar13 + 0x24) = 0x65636f72;
          *(int32_t *)(puVar13 + 5) = 0x6e697373;
          *(int32_t *)((int64_t)puVar13 + 0x2c) = 0x6c6f4667;
          *(int32_t *)(puVar13 + 6) = 0x726564;
          local_var_c0 = 0x33;
          ppuVar11 = &plocal_var_d0;
          uVar6 = 2;
          local_var_114 = 2;
        }
        else {
          ppuVar11 = (void **)CoreEngineDataTransformer(&plocal_var_80,system_main_module_state + 0x148);
          uVar6 = 1;
          local_var_114 = 1;
          puVar13 = plocal_var_c8;
        }
        uVar7 = CoreEngineDataTransformer(&plocal_var_f0,ppuVar11);
        if ((uVar6 & 2) != 0) {
          uVar6 = uVar6 & 0xfffffffd;
          plocal_var_d0 = &system_data_buffer_ptr;
          local_var_114 = uVar6;
          if (puVar13 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner(puVar13);
          }
          plocal_var_c8 = (uint64_t *)0x0;
          local_var_b8 = local_var_b8 & 0xffffffff00000000;
          plocal_var_d0 = &system_state_ptr;
        }
        if ((uVar6 & 1) != 0) {
          local_var_114 = uVar6 & 0xfffffffe;
          plocal_var_80 = &system_data_buffer_ptr;
          if (lStack_78 != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          lStack_78 = 0;
          local_var_68 = 0;
          plocal_var_80 = &system_state_ptr;
        }
        plocal_var_148 = &system_buffer_ptr;
        if (puVar10 != (void *)0x0) {
          plocal_var_148 = puVar10;
        }
        GenericFunction_1800669c0(uVar7,&plocal_var_f0,uVar18,param_5);
        plocal_var_f0 = &system_data_buffer_ptr;
        if (lStack_e8 != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        lStack_e8 = 0;
        local_var_d8 = 0;
        plocal_var_f0 = &system_state_ptr;
      }
      puVar15 = &system_buffer_ptr;
      if (plocal_var_a0 != (void *)0x0) {
        puVar15 = plocal_var_a0;
      }
      GenericFunction_1800f96b0(puVar15,1);
      if (cStack_117 != '\0') {
        if (*(int64_t *)(system_main_module_state + 8) != 0) {
          GenericFunction_1801718f0();
        }
        if (system_operation_state != 0) {
          GenericFunction_180092940(system_operation_state,*(int8_t *)(system_operation_state + 0x160a));
        }
      }
// 函数: void GenericFunction_180072e80(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void GenericFunction_180072e80(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  uint64_t uVar2;
  void *plocal_var_30;
  int64_t lStack_28;
  plVar1 = *(int64_t **)(system_main_module_state + 0x2b0);
  if (plVar1 != (int64_t *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x110))(plVar1,&plocal_var_30,param_3,param_4,0xfffffffffffffffe);
    RenderingSystem_ResourceBinder(param_2,uVar2);
    plocal_var_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
bool GenericFunction_180072f00(uint64_t param_1,uint64_t *param_2)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t **ppuVar7;
  int8_t *puVar8;
  uint64_t uVar9;
  int16_t *puVar10;
  uint uVar11;
  uint64_t *puVar12;
  void *puVar13;
  void *puVar14;
  char cStackX_10;
  uint uVar15;
  void *plocal_var_110;
  uint64_t *plocal_var_108;
  int iStack_100;
  uint64_t local_var_f8;
  void *plocal_var_f0;
  int16_t *plocal_var_e8;
  int32_t local_var_e0;
  uint64_t local_var_d8;
  void *plocal_var_d0;
  void *plocal_var_c8;
  int32_t local_var_c0;
  uint64_t local_var_b8;
  void *plocal_var_b0;
  uint64_t *plocal_var_a8;
  int32_t local_var_a0;
  uint64_t local_var_98;
  void *plocal_var_90;
  int8_t *plocal_var_88;
  int32_t local_var_80;
  uint64_t local_var_78;
  void *plocal_var_70;
  uint64_t *plocal_var_68;
  uint64_t *plocal_var_60;
  int64_t lStack_48;
  uint64_t local_var_40;
  local_var_40 = 0xfffffffffffffffe;
  puVar5 = (uint64_t *)0x0;
  iVar3 = 0;
  WaitForSingleObject(init_system_memory,300000);
  lStack_48 = system_context_ptr;
  if (system_context_ptr != 0) {
    GenericFunction_18005dab0(system_context_ptr);
  }
  plocal_var_f0 = &system_data_buffer_ptr;
  local_var_d8 = 0;
  plocal_var_e8 = (int16_t *)0x0;
  local_var_e0 = 0;
  plocal_var_e8 = (int16_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)plocal_var_e8 = 0;
  uVar1 = CoreEngineSystemCleanup(plocal_var_e8);
  local_var_d8 = CONCAT44(local_var_d8._4_4_,uVar1);
  *plocal_var_e8 = 0xa0a;
  *(int8_t *)(plocal_var_e8 + 1) = 0;
  local_var_e0 = 2;
  plocal_var_d0 = &system_data_buffer_ptr;
  local_var_b8 = 0;
  plocal_var_c8 = (void *)0x0;
  local_var_c0 = 0;
  GenericFunction_1800a32b0(system_message_buffer,&plocal_var_68);
  if (plocal_var_68 != plocal_var_60) {
    System_DataHandler(&plocal_var_f0,&processed_var_92_ptr,&processed_var_4592_ptr);
    puVar6 = puVar5;
    puVar12 = puVar5;
    if ((int64_t)plocal_var_60 - (int64_t)plocal_var_68 >> 5 != 0) {
      do {
        puVar13 = &system_buffer_ptr;
        if (*(void **)((int64_t)(puVar6 + 1) + (int64_t)plocal_var_68) != (void *)0x0) {
          puVar13 = *(void **)((int64_t)(puVar6 + 1) + (int64_t)plocal_var_68);
        }
        System_DataHandler(&plocal_var_f0,&processed_var_92_ptr,puVar13);
        uVar11 = (int)puVar12 + 1;
        puVar6 = puVar6 + 4;
        puVar12 = (uint64_t *)(uint64_t)uVar11;
      } while ((uint64_t)(int64_t)(int)uVar11 <
               (uint64_t)((int64_t)plocal_var_60 - (int64_t)plocal_var_68 >> 5));
    }
    System_DataHandler(&plocal_var_f0,&processed_var_4720_ptr,&processed_var_4656_ptr);
    GenericFunction_18006f590(&plocal_var_110);
    if (iStack_100 != 0) {
      System_DataHandler(&plocal_var_f0,&processed_var_92_ptr,&processed_var_4728_ptr);
      puVar6 = (uint64_t *)&system_buffer_ptr;
      if (plocal_var_108 != (uint64_t *)0x0) {
        puVar6 = plocal_var_108;
      }
      System_DataHandler(&plocal_var_f0,&processed_var_4792_ptr,puVar6);
      System_DataHandler(&plocal_var_f0,&processed_var_4720_ptr,&processed_var_4656_ptr);
    }
    plocal_var_110 = &system_data_buffer_ptr;
    if (plocal_var_108 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_108 = (uint64_t *)0x0;
    local_var_f8 = (uint64_t)local_var_f8._4_4_ << 0x20;
    plocal_var_110 = &system_state_ptr;
  }
  lVar4 = GenericFunction_1800f9ce0(&plocal_var_110,param_2[1]);
  local_var_c0 = *(int32_t *)(lVar4 + 0x10);
  puVar13 = *(void **)(lVar4 + 8);
  local_var_b8 = *(uint64_t *)(lVar4 + 0x18);
  *(int32_t *)(lVar4 + 0x10) = 0;
  *(uint64_t *)(lVar4 + 8) = 0;
  *(uint64_t *)(lVar4 + 0x18) = 0;
  plocal_var_110 = &system_data_buffer_ptr;
  plocal_var_c8 = puVar13;
  plocal_var_70 = puVar13;
  if (plocal_var_108 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_108 = (uint64_t *)0x0;
  local_var_f8 = local_var_f8 & 0xffffffff00000000;
  plocal_var_110 = &system_state_ptr;
  System_DataHandler(&plocal_var_f0,&processed_var_4824_ptr,*(int32_t *)*param_2,
                *(uint64_t *)((int32_t *)*param_2 + 4));
  System_DataHandler(&plocal_var_f0,&processed_var_92_ptr,&processed_var_4872_ptr);
  puVar14 = &system_buffer_ptr;
  if (puVar13 != (void *)0x0) {
    puVar14 = puVar13;
  }
  System_DataHandler(&plocal_var_f0,&processed_var_92_ptr,puVar14);
  puVar10 = (int16_t *)&system_buffer_ptr;
  if (plocal_var_e8 != (int16_t *)0x0) {
    puVar10 = plocal_var_e8;
  }
  SystemConfigurationManager(system_message_context,5,0xffffffff00000000,3,&processed_var_92_ptr,puVar10);
  GenericFunction_1800623e0();
  lVar4 = system_main_module_state;
  if (system_main_module_state == 0) {
    cStackX_10 = '\0';
    plocal_var_110 = &system_data_buffer_ptr;
    local_var_f8 = 0;
    plocal_var_108 = (uint64_t *)0x0;
    iStack_100 = 0;
    puVar6 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x34,0x13);
    *(int8_t *)puVar6 = 0;
    plocal_var_108 = puVar6;
    uVar1 = CoreEngineSystemCleanup(puVar6);
    local_var_f8 = CONCAT44(local_var_f8._4_4_,uVar1);
    *puVar6 = 0x7270706d75645c5c;
    puVar6[1] = 0x2e726f737365636f;
    puVar6[2] = 0x6c726f77656c6174;
    puVar6[3] = 0x445c6d6f632e7364;
    *(int32_t *)(puVar6 + 4) = 0x50706d75;
    *(int32_t *)((int64_t)puVar6 + 0x24) = 0x65636f72;
    *(int32_t *)(puVar6 + 5) = 0x6e697373;
    *(int32_t *)((int64_t)puVar6 + 0x2c) = 0x6c6f4667;
    *(int32_t *)(puVar6 + 6) = 0x726564;
    iVar3 = 0x33;
    iStack_100 = 0x33;
    uVar11 = 2;
    uVar15 = 2;
    ppuVar7 = &plocal_var_108;
    puVar5 = plocal_var_a8;
  }
  else {
    cStackX_10 = *(char *)(system_main_module_state + 0x141);
    plocal_var_b0 = &system_data_buffer_ptr;
    local_var_98 = 0;
    plocal_var_a8 = (uint64_t *)0x0;
    local_var_a0 = 0;
    if (*(int *)(system_main_module_state + 0x158) != 0) {
      iVar2 = *(int *)(system_main_module_state + 0x158) + 1;
      if (iVar2 < 0x10) {
        iVar2 = 0x10;
      }
      puVar5 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar2,0x13);
      *(int8_t *)puVar5 = 0;
      plocal_var_a8 = puVar5;
      uVar1 = CoreEngineSystemCleanup(puVar5);
      local_var_98 = CONCAT44(local_var_98._4_4_,uVar1);
      if (*(int *)(lVar4 + 0x158) != 0) {
// WARNING: Subroutine does not return
        memcpy(puVar5,*(uint64_t *)(lVar4 + 0x150),*(int *)(lVar4 + 0x158) + 1);
      }
    }
    if (*(int64_t *)(lVar4 + 0x150) != 0) {
      local_var_a0 = 0;
      if (puVar5 != (uint64_t *)0x0) {
        *(int8_t *)puVar5 = 0;
      }
      local_var_98 = local_var_98 & 0xffffffff;
    }
    uVar11 = 1;
    uVar15 = 1;
    ppuVar7 = &plocal_var_a8;
    puVar6 = plocal_var_108;
  }
  plocal_var_90 = &system_data_buffer_ptr;
  local_var_78 = 0;
  plocal_var_88 = (int8_t *)0x0;
  local_var_80 = 0;
  if (iVar3 != 0) {
    uVar15 = iVar3 + 1;
    uVar11 = uVar15;
    if (uVar15 < 0x10) {
      uVar11 = 0x10;
    }
    puVar8 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar11,0x13);
    *puVar8 = 0;
    plocal_var_88 = puVar8;
    uVar1 = CoreEngineSystemCleanup(puVar8);
    local_var_78 = CONCAT44(local_var_78._4_4_,uVar1);
// WARNING: Subroutine does not return
    memcpy(puVar8,*ppuVar7,uVar15);
  }
  local_var_78 = 0;
  local_var_80 = 0;
  if ((uVar11 & 2) != 0) {
    uVar15 = uVar11 & 0xfffffffd;
    plocal_var_110 = &system_data_buffer_ptr;
    if (puVar6 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar6);
    }
    plocal_var_108 = (uint64_t *)0x0;
    local_var_f8 = local_var_f8 & 0xffffffff00000000;
    plocal_var_110 = &system_state_ptr;
    uVar11 = uVar15;
  }
  if ((uVar11 & 1) != 0) {
    uVar15 = uVar11 & 0xfffffffe;
    plocal_var_b0 = &system_data_buffer_ptr;
    if (puVar5 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar5);
    }
    plocal_var_a8 = (uint64_t *)0x0;
    local_var_98 = local_var_98 & 0xffffffff00000000;
    plocal_var_b0 = &system_state_ptr;
  }
  puVar14 = &system_buffer_ptr;
  if (puVar13 != (void *)0x0) {
    puVar14 = puVar13;
  }
  GenericFunction_180066320(0,&plocal_var_90,cStackX_10,1,puVar14,puVar10,uVar15);
  if (lStack_48 != 0) {
    GenericFunction_18005db30();
  }
  do {
    iVar3 = ReleaseSemaphore(init_system_memory,1);
  } while (iVar3 == 0);
  uVar9 = __acrt_iob_func(1);
  fflush(uVar9);
  uVar9 = __acrt_iob_func(2);
  fflush(uVar9);
  plocal_var_90 = &system_data_buffer_ptr;
  if (plocal_var_88 == (int8_t *)0x0) {
    plocal_var_88 = (int8_t *)0x0;
    local_var_78 = local_var_78 & 0xffffffff00000000;
    plocal_var_90 = &system_state_ptr;
    for (puVar5 = plocal_var_68; puVar5 != plocal_var_60; puVar5 = puVar5 + 4) {
      (**(code **)*puVar5)(puVar5,0);
    }
    if (plocal_var_68 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_d0 = &system_data_buffer_ptr;
    if (plocal_var_70 != (void *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_c8 = (void *)0x0;
    local_var_b8 = local_var_b8 & 0xffffffff00000000;
    plocal_var_d0 = &system_state_ptr;
    plocal_var_f0 = &system_data_buffer_ptr;
    if (plocal_var_e8 == (int16_t *)0x0) {
      return cStackX_10 != '\0';
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_180073630(uint64_t param_1,uint64_t param_2)
void GenericFunction_180073630(uint64_t param_1,uint64_t param_2)
{
  void *puVar1;
  char cVar2;
  int32_t astack_special_x_18 [4];
  void *plocal_var_30;
  int64_t lStack_28;
  SystemConfigurationManager(system_message_context,0,0x100000000,0,&processed_var_4936_ptr,param_2,0xfffffffffffffffe);
  if (system_debug_flag == '\0') {
    astack_special_x_18[0] = 0xffff0000;
    CoreMemoryPoolValidator(&plocal_var_30,param_2);
    puVar1 = *(void **)*init_system_data_memory;
    if (puVar1 == &processed_var_424_ptr) {
      cVar2 = *(int *)(init_system_data_memory + 0xc40) != 0;
    }
    else {
      cVar2 = (**(code **)(puVar1 + 0x50))((uint64_t *)*init_system_data_memory);
    }
    if (cVar2 == '\0') {
      (**(code **)(*(int64_t *)init_system_data_memory[1] + 0x18))
                ((int64_t *)init_system_data_memory[1],&plocal_var_30,astack_special_x_18);
    }
    plocal_var_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address