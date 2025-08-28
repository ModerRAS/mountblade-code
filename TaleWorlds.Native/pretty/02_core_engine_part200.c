#include "SystemDataAdvancedOptimizer_definition.h"
// $fun 的语义化别名
#define $alias_name $fun
#define SystemInitializer System_Initializer2  // 系统初始化器
// 02_core_engine_part200.c - 1 个函数
// 函数: void function_17ef40(void)
void function_17ef40(void)
{
  int64_t lVar1;
  code ****ppppcVar2;
  code *pcVar3;
  code ******ppppppcVar4;
  code *****pppppcVar5;
  int32_t uVar6;
  int iVar7;
  uint64_t uVar8;
  int32_t *puVar9;
  int64_t lVar10;
  code *****pppppcVar11;
  code ******ppppppcVar12;
  int64_t lVar13;
  int64_t lVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  void *puVar17;
  int64_t *plVar18;
  int64_t lVar19;
  uint uVar20;
  int8_t stack_array_1b8 [32];
  code ***pppcStack_198;
  code *****pppppcStack_188;
  code *****pppppcStack_180;
  code *****pppppcStack_178;
  code ***pppcStack_170;
  int32_t *plocal_var_168;
  uint64_t local_var_160;
  uint64_t local_var_158;
  int8_t local_var_150;
  void *plocal_var_148;
  int32_t *plocal_var_140;
  int32_t local_var_138;
  uint64_t local_var_130;
  int32_t local_var_128;
  uint64_t local_var_120;
  void *plocal_var_118;
  int8_t *plocal_var_110;
  int32_t local_var_108;
  int8_t stack_array_100 [32];
  void *plocal_var_e0;
  int8_t *plocal_var_d8;
  int32_t local_var_d0;
  int8_t stack_array_c8 [32];
  void *plocal_var_a8;
  int8_t *plocal_var_a0;
  int32_t local_var_98;
  int8_t stack_array_90 [32];
  void *plocal_var_70;
  int8_t *plocal_var_68;
  int32_t local_var_60;
  int8_t stack_array_58 [32];
  uint64_t local_var_38;
  lVar13 = system_main_module_state;
  local_var_120 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1b8;
  uVar15 = 0;
  local_var_128 = 0;
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) +
               0x48) < core_system_config_memory) && (SystemInitializer(&system_ptr_9620), core_system_config_memory == -1)) {
    core_system_config_memory = 0;
    function_8fc820(&processed_var_7184_ptr);
    SystemCore_StateController(&system_ptr_9620);
  }
  local_var_150 = 0;
  iVar7 = *(int *)(lVar13 + 0x318);
  if (iVar7 == 0) {
    uVar8 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
    pppppcStack_178 = (code *****)&pppcStack_170;
    local_var_160 = &processed_var_6112_ptr;
    local_var_158 = &processed_var_6096_ptr;
    pppppcStack_180 = (code *****)SystemCore_ErrorHandler(uVar8,&pppcStack_170);
    pppppcStack_188 = pppppcStack_180;
    if ((code ******)pppppcStack_180 != (code ******)0x0) {
      (*(code *)(*pppppcStack_180)[5])(pppppcStack_180);
    }
    uVar8 = system_context_ptr;
    pppppcStack_178 = (code *****)&pppppcStack_180;
    if ((code ******)pppppcStack_180 != (code ******)0x0) {
      (*(code *)(*pppppcStack_180)[5])(pppppcStack_180);
    }
    SystemCore_TimerManager(uVar8,&pppppcStack_180);
    PhysicsSystem_TriggersProcessor(lVar13 + 800,&pppppcStack_188);
    iVar7 = *(int *)(lVar13 + 0x340);
    if (iVar7 == 2) {
      core_system_memory = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,3);
      *core_system_memory = 0;
      core_system_memory[1] = 0;
      core_system_memory[2] = 0;
      function_6536d0();
      function_653940();
      iVar7 = *(int *)(lVar13 + 0x340);
    }
    if (iVar7 == 3) {
      core_system_memory = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,3);
      function_653ef0();
      lVar13 = core_system_memory;
      pppcStack_170 = (code ***)&system_data_buffer_ptr;
      local_var_158 = (void *)0x0;
      plocal_var_168 = (int32_t *)0x0;
      local_var_160 = (void *)((uint64_t)local_var_160 & 0xffffffff00000000);
      puVar9 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x18,0x13);
      *(int8_t *)puVar9 = 0;
      plocal_var_168 = puVar9;
      uVar6 = CoreMemoryPoolCleaner(puVar9);
      local_var_158 = (void *)CONCAT44(local_var_158._4_4_,uVar6);
      *puVar9 = 0x65726f63;
      puVar9[1] = 0x5f726c63;
      puVar9[2] = 0x61657263;
      puVar9[3] = 0x645f6574;
      *(uint64_t *)(puVar9 + 4) = 0x65746167656c65;
      local_var_160 = (void *)CONCAT44(local_var_160._4_4_,0x17);
      GetProcAddress(*(uint64_t *)(lVar13 + 0x10),puVar9);
      pppcStack_170 = (code ***)&system_data_buffer_ptr;
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(puVar9);
    }
    if (*(int *)(lVar13 + 0x340) != 0) {
      pppppcStack_178 = (code *****)CoreMemoryPoolReallocator(system_memory_pool_ptr,400,8,3);
      *pppppcStack_178 = (code ****)&processed_var_9808_ptr;
      pppppcStack_178[1] = (code ****)&processed_var_9792_ptr;
      pppppcStack_178[2] = (code ****)0x0;
      pppppcStack_180 = pppppcStack_178 + 0x2d;
      *pppppcStack_180 = (code ****)0x0;
      pppppcStack_178[0x2e] = (code ****)0x0;
      pppppcStack_178[0x2f] = (code ****)0x0;
      *(int32_t *)(pppppcStack_178 + 0x30) = 3;
      *(int16_t *)(pppppcStack_178 + 0x31) = 0;
      system_cache_buffer = (code ******)pppppcStack_178;
      *(int32_t *)((int64_t)pppppcStack_178 + 0x18c) = 0;
      *(code ******)(lVar13 + 0x40) = pppppcStack_178;
// WARNING: Subroutine does not return
      SystemParameterHandler(system_message_context,&processed_var_6720_ptr);
    }
    pppppcStack_178 = (code *****)CoreMemoryPoolReallocator(system_memory_pool_ptr,400,8,3);
    *pppppcStack_178 = (code ****)&processed_var_9808_ptr;
    ((code ******)pppppcStack_178)[1] = (code *****)&processed_var_9792_ptr;
    ((code ******)pppppcStack_178)[2] = (code *****)0x0;
    pppppcStack_180 = (code *****)((code ******)pppppcStack_178 + 0x2d);
    *pppppcStack_180 = (code ****)0x0;
    ((code ******)pppppcStack_178)[0x2e] = (code *****)0x0;
    ((code ******)pppppcStack_178)[0x2f] = (code *****)0x0;
    *(int32_t *)((code ******)pppppcStack_178 + 0x30) = 3;
    *(int16_t *)((code ******)pppppcStack_178 + 0x31) = 0;
    system_cache_buffer = (code ******)pppppcStack_178;
    *(int32_t *)((int64_t)pppppcStack_178 + 0x18c) = 0;
    *pppppcStack_178 = (code ****)&processed_var_704_ptr;
    *(code ******)(lVar13 + 0x40) = pppppcStack_178;
    uVar8 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x238,8,3);
    uVar8 = function_1504b0(uVar8);
    (**(code **)(**(int64_t **)(lVar13 + 0x40) + 8))(*(int64_t **)(lVar13 + 0x40),uVar8);
    (**(code **)(**(int64_t **)(lVar13 + 0x2b0) + 0x80))
              (*(int64_t **)(lVar13 + 0x2b0),*(uint64_t *)(lVar13 + 0x40));
    ppppppcVar12 = (code ******)pppppcStack_188;
    if ((*(int *)(lVar13 + 0x3c) == -1) || (*(int *)(lVar13 + 0x318) + 1 < *(int *)(lVar13 + 0x3c)))
    {
      *(int *)(lVar13 + 0x318) = *(int *)(lVar13 + 0x318) + 1;
    }
  }
  else {
    if (iVar7 == 1) {
      function_05e770(system_context_ptr,lVar13 + 800,0);
      SystemCore_Controller(lVar13 + 800);
      lVar1 = system_resource_state;
      plVar18 = *(int64_t **)(system_resource_state + 0x138);
      if (plVar18 != *(int64_t **)(system_resource_state + 0x140)) {
        do {
          lVar14 = *plVar18;
          if ((*(int64_t *)(lVar14 + 0x15b8) == 0) && (*(int *)(lVar14 + 0x16c0) != 0)) {
            lVar10 = function_2aaef0(lVar1 + 0xac0,lVar14 + 0x16b0);
            if (lVar10 == 0) {
              uVar8 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x50,0x10,3);
              lVar10 = function_0ba230(uVar8,lVar14 + 0x16b0);
              function_2ab0c0(lVar1 + 0xac0,lVar10);
            }
            *(int64_t *)(lVar14 + 0x15b8) = lVar10;
          }
          plVar18 = plVar18 + 1;
        } while (plVar18 != *(int64_t **)(lVar1 + 0x140));
      }
      function_0b3cc0(lVar1);
      function_18ee00();
      if (*(int *)(lVar13 + 0x3c) != -1) {
        if (*(int *)(lVar13 + 0x318) + 1 < *(int *)(lVar13 + 0x3c)) {
          *(int *)(lVar13 + 0x318) = *(int *)(lVar13 + 0x318) + 1;
        }
        goto LAB_18018054e;
      }
LAB_180180381:
      *(int *)(lVar13 + 0x318) = *(int *)(lVar13 + 0x318) + 1;
      goto LAB_18018054e;
    }
    if (iVar7 == 2) {
      if ((*(int *)(lVar13 + 0x3c) == -1) || (3 < *(int *)(lVar13 + 0x3c))) {
        *(int32_t *)(lVar13 + 0x318) = 3;
      }
      goto LAB_18018054e;
    }
    if (iVar7 == 3) {
      uVar8 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
      pppppcStack_178 = (code *****)&pppcStack_170;
      local_var_160 = &processed_var_6032_ptr;
      local_var_158 = &processed_var_6016_ptr;
      pppcStack_170 = (code ***)function_21bff0;
      pppppcStack_188 = (code *****)SystemCore_ErrorHandler(uVar8,&pppcStack_170);
      pppppcStack_180 = pppppcStack_188;
      if (pppppcStack_188 != (code *****)0x0) {
        (*(code *)(*pppppcStack_188)[5])(pppppcStack_188);
      }
      uVar8 = system_context_ptr;
      pppppcStack_178 = (code *****)&pppppcStack_188;
      if (pppppcStack_188 != (code *****)0x0) {
        (*(code *)(*pppppcStack_188)[5])(pppppcStack_188);
      }
      SystemCore_TimerManager(uVar8,&pppppcStack_188);
      lVar1 = lVar13 + 800;
      PhysicsSystem_TriggersProcessor(lVar1,&pppppcStack_180);
      uVar8 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
      pppppcStack_188 = (code *****)&pppcStack_170;
      local_var_160 = &processed_var_6032_ptr;
      local_var_158 = &processed_var_6016_ptr;
      pppcStack_170 = (code ***)function_21dc50;
      pppppcVar11 = (code *****)SystemCore_ErrorHandler(uVar8,&pppcStack_170);
      if (pppppcVar11 != (code *****)0x0) {
        pppppcStack_178 = pppppcVar11;
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      pppppcStack_178 = pppppcStack_180;
      pppppcVar5 = pppppcVar11;
      if (pppppcStack_180 != (code *****)0x0) {
        ppppcVar2 = *pppppcStack_180;
        pppppcStack_180 = pppppcVar11;
        (*(code *)ppppcVar2[7])();
        pppppcVar5 = pppppcStack_180;
      }
      pppppcStack_180 = pppppcVar5;
      uVar8 = system_context_ptr;
      pppppcStack_178 = (code *****)&pppppcStack_188;
      pppppcStack_188 = pppppcVar11;
      if (pppppcVar11 != (code *****)0x0) {
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      SystemCore_TimerManager(uVar8,&pppppcStack_188);
      PhysicsSystem_TriggersProcessor(lVar1,&pppppcStack_180);
      uVar8 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
      pppppcStack_188 = (code *****)&pppcStack_170;
      local_var_160 = &processed_var_6032_ptr;
      local_var_158 = &processed_var_6016_ptr;
      pppcStack_170 = (code ***)function_21b090;
      pppppcVar11 = (code *****)SystemCore_ErrorHandler(uVar8,&pppcStack_170);
      if (pppppcVar11 != (code *****)0x0) {
        pppppcStack_178 = pppppcVar11;
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      pppppcStack_178 = pppppcStack_180;
      pppppcVar5 = pppppcVar11;
      if (pppppcStack_180 != (code *****)0x0) {
        ppppcVar2 = *pppppcStack_180;
        pppppcStack_180 = pppppcVar11;
        (*(code *)ppppcVar2[7])();
        pppppcVar5 = pppppcStack_180;
      }
      pppppcStack_180 = pppppcVar5;
      uVar8 = system_context_ptr;
      pppppcStack_178 = (code *****)&pppppcStack_188;
      pppppcStack_188 = pppppcVar11;
      if (pppppcVar11 != (code *****)0x0) {
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      SystemCore_TimerManager(uVar8,&pppppcStack_188);
      PhysicsSystem_TriggersProcessor(lVar1,&pppppcStack_180);
      uVar8 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
      pppppcStack_188 = (code *****)&pppcStack_170;
      local_var_160 = &processed_var_6032_ptr;
      local_var_158 = &processed_var_6016_ptr;
      pppcStack_170 = (code ***)&processed_var_5664_ptr;
      pppppcVar11 = (code *****)SystemCore_ErrorHandler(uVar8,&pppcStack_170);
      if (pppppcVar11 != (code *****)0x0) {
        pppppcStack_178 = pppppcVar11;
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      pppppcStack_178 = pppppcStack_180;
      pppppcVar5 = pppppcVar11;
      if (pppppcStack_180 != (code *****)0x0) {
        ppppcVar2 = *pppppcStack_180;
        pppppcStack_180 = pppppcVar11;
        (*(code *)ppppcVar2[7])();
        pppppcVar5 = pppppcStack_180;
      }
      pppppcStack_180 = pppppcVar5;
      uVar8 = system_context_ptr;
      pppppcStack_178 = (code *****)&pppppcStack_188;
      pppppcStack_188 = pppppcVar11;
      if (pppppcVar11 != (code *****)0x0) {
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      SystemCore_TimerManager(uVar8,&pppppcStack_188);
      PhysicsSystem_TriggersProcessor(lVar1,&pppppcStack_180);
      uVar8 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
      pppppcStack_188 = (code *****)&pppcStack_170;
      local_var_160 = &processed_var_6032_ptr;
      local_var_158 = &processed_var_6016_ptr;
      pppcStack_170 = (code ***)function_21cb50;
      pppppcVar11 = (code *****)SystemCore_ErrorHandler(uVar8,&pppcStack_170);
      if (pppppcVar11 != (code *****)0x0) {
        pppppcStack_178 = pppppcVar11;
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      pppppcStack_178 = pppppcStack_180;
      pppppcVar5 = pppppcVar11;
      if (pppppcStack_180 != (code *****)0x0) {
        ppppcVar2 = *pppppcStack_180;
        pppppcStack_180 = pppppcVar11;
        (*(code *)ppppcVar2[7])();
        pppppcVar5 = pppppcStack_180;
      }
      pppppcStack_180 = pppppcVar5;
      uVar8 = system_context_ptr;
      pppppcStack_178 = (code *****)&pppppcStack_188;
      pppppcStack_188 = pppppcVar11;
      if (pppppcVar11 != (code *****)0x0) {
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      SystemCore_TimerManager(uVar8,&pppppcStack_188);
      PhysicsSystem_TriggersProcessor(lVar1,&pppppcStack_180);
      uVar8 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
      pppppcStack_188 = (code *****)&pppcStack_170;
      local_var_160 = &processed_var_6032_ptr;
      local_var_158 = &processed_var_6016_ptr;
      pppcStack_170 = (code ***)function_21cf80;
      pppppcVar11 = (code *****)SystemCore_ErrorHandler(uVar8,&pppcStack_170);
      if (pppppcVar11 != (code *****)0x0) {
        pppppcStack_178 = pppppcVar11;
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      pppppcStack_178 = pppppcStack_180;
      pppppcVar5 = pppppcVar11;
      if (pppppcStack_180 != (code *****)0x0) {
        ppppcVar2 = *pppppcStack_180;
        pppppcStack_180 = pppppcVar11;
        (*(code *)ppppcVar2[7])();
        pppppcVar5 = pppppcStack_180;
      }
      pppppcStack_180 = pppppcVar5;
      uVar8 = system_context_ptr;
      pppppcStack_178 = (code *****)&pppppcStack_188;
      pppppcStack_188 = pppppcVar11;
      if (pppppcVar11 != (code *****)0x0) {
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      SystemCore_TimerManager(uVar8,&pppppcStack_188);
      PhysicsSystem_TriggersProcessor(lVar1,&pppppcStack_180);
      uVar8 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
      pppppcStack_188 = (code *****)&pppcStack_170;
      local_var_160 = &processed_var_6032_ptr;
      local_var_158 = &processed_var_6016_ptr;
      pppcStack_170 = (code ***)function_21b4f0;
      pppppcVar11 = (code *****)SystemCore_ErrorHandler(uVar8,&pppcStack_170);
      if (pppppcVar11 != (code *****)0x0) {
        pppppcStack_178 = pppppcVar11;
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      pppppcStack_178 = pppppcStack_180;
      pppppcVar5 = pppppcVar11;
      if (pppppcStack_180 != (code *****)0x0) {
        ppppcVar2 = *pppppcStack_180;
        pppppcStack_180 = pppppcVar11;
        (*(code *)ppppcVar2[7])();
        pppppcVar5 = pppppcStack_180;
      }
      pppppcStack_180 = pppppcVar5;
      uVar8 = system_context_ptr;
      pppppcStack_178 = (code *****)&pppppcStack_188;
      pppppcStack_188 = pppppcVar11;
      if (pppppcVar11 != (code *****)0x0) {
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      SystemCore_TimerManager(uVar8,&pppppcStack_188);
      PhysicsSystem_TriggersProcessor(lVar1,&pppppcStack_180);
      uVar8 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
      pppppcStack_188 = (code *****)&pppcStack_170;
      local_var_160 = &processed_var_6032_ptr;
      local_var_158 = &processed_var_6016_ptr;
      pppcStack_170 = (code ***)function_21b070;
      pppppcVar11 = (code *****)SystemCore_ErrorHandler(uVar8,&pppcStack_170);
      if (pppppcVar11 != (code *****)0x0) {
        pppppcStack_178 = pppppcVar11;
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      pppppcStack_178 = pppppcStack_180;
      pppppcVar5 = pppppcVar11;
      if (pppppcStack_180 != (code *****)0x0) {
        ppppcVar2 = *pppppcStack_180;
        pppppcStack_180 = pppppcVar11;
        (*(code *)ppppcVar2[7])();
        pppppcVar5 = pppppcStack_180;
      }
      pppppcStack_180 = pppppcVar5;
      uVar8 = system_context_ptr;
      pppppcStack_178 = (code *****)&pppppcStack_188;
      pppppcStack_188 = pppppcVar11;
      if (pppppcVar11 != (code *****)0x0) {
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      SystemCore_TimerManager(uVar8,&pppppcStack_188);
      PhysicsSystem_TriggersProcessor(lVar1,&pppppcStack_180);
      uVar8 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
      pppppcStack_188 = (code *****)&pppcStack_170;
      local_var_160 = &processed_var_6032_ptr;
      local_var_158 = &processed_var_6016_ptr;
      pppcStack_170 = (code ***)function_21e9c0;
      ppppppcVar12 = (code ******)SystemCore_ErrorHandler(uVar8,&pppcStack_170);
      if (ppppppcVar12 != (code ******)0x0) {
        pppppcStack_178 = (code *****)ppppppcVar12;
        (*(code *)(*ppppppcVar12)[5])(ppppppcVar12);
      }
      pppppcStack_178 = pppppcStack_180;
      ppppppcVar4 = ppppppcVar12;
      if (pppppcStack_180 != (code *****)0x0) {
        ppppcVar2 = *pppppcStack_180;
        pppppcStack_180 = (code *****)ppppppcVar12;
        (*(code *)ppppcVar2[7])();
        ppppppcVar4 = (code ******)pppppcStack_180;
      }
      pppppcStack_180 = (code *****)ppppppcVar4;
      uVar8 = system_context_ptr;
      pppppcStack_178 = (code *****)&pppppcStack_188;
      pppppcStack_188 = (code *****)ppppppcVar12;
      if (ppppppcVar12 != (code ******)0x0) {
        (*(code *)(*ppppppcVar12)[5])(ppppppcVar12);
      }
      SystemCore_TimerManager(uVar8,&pppppcStack_188);
      PhysicsSystem_TriggersProcessor(lVar1,&pppppcStack_180);
      ppppppcVar12 = (code ******)pppppcStack_180;
      if ((*(int *)(lVar13 + 0x3c) == -1) ||
         (*(int *)(lVar13 + 0x318) + 1 < *(int *)(lVar13 + 0x3c))) {
        *(int *)(lVar13 + 0x318) = *(int *)(lVar13 + 0x318) + 1;
      }
    }
    else {
      if (iVar7 == 4) {
        plVar18 = *(int64_t **)(lVar13 + 0x40);
        if (*(code **)(*plVar18 + 0x20) == function_651d20) {
          uVar16 = uVar15;
          if (plVar18[0x2e] - plVar18[0x2d] >> 3 != 0) {
            do {
              (**(code **)**(uint64_t **)(uVar15 + plVar18[0x2d]))();
              uVar20 = (int)uVar16 + 1;
              uVar15 = uVar15 + 8;
              uVar16 = (uint64_t)uVar20;
            } while ((uint64_t)(int64_t)(int)uVar20 <
                     (uint64_t)(plVar18[0x2e] - plVar18[0x2d] >> 3));
          }
          *(int8_t *)(plVar18 + 0x31) = 1;
        }
        else {
          (**(code **)(*plVar18 + 0x20))(plVar18);
        }
        plVar18 = *(int64_t **)(core_system_data_memory + 0x18);
        lVar13 = (**(code **)(core_system_data_memory + 0x30))();
        puVar17 = &system_buffer_ptr;
        if (*(void **)(lVar13 + 8) != (void *)0x0) {
          puVar17 = *(void **)(lVar13 + 8);
        }
        CoreMemoryPoolValidator(&plocal_var_148,puVar17);
        lVar13 = (**(code **)(core_system_data_memory + 0x20))();
        puVar17 = &system_buffer_ptr;
        if (*(void **)(lVar13 + 8) != (void *)0x0) {
          puVar17 = *(void **)(lVar13 + 8);
        }
        CoreMemoryPoolValidator(&pppcStack_170,puVar17);
        pcVar3 = *(code **)(*plVar18 + 0x20);
        plocal_var_e0 = &processed_var_672_ptr;
        plocal_var_d8 = stack_array_c8;
        stack_array_c8[0] = 0;
        local_var_d0 = 0xd;
        strcpy_s(stack_array_c8,0x20,&ui_system_data_144_ptr);
        plocal_var_118 = &processed_var_672_ptr;
        plocal_var_110 = stack_array_100;
        stack_array_100[0] = 0;
        local_var_108 = 7;
        strcpy_s(stack_array_100,0x20,&processed_var_48_ptr);
        plocal_var_70 = &processed_var_672_ptr;
        plocal_var_68 = stack_array_58;
        stack_array_58[0] = 0;
        local_var_60 = 0xe;
        strcpy_s(stack_array_58,0x20,&processed_var_56_ptr);
        pppcStack_198 = (code ***)&plocal_var_148;
        (*pcVar3)(plVar18,&plocal_var_70,&plocal_var_118,&plocal_var_e0);
        plocal_var_70 = &system_state_ptr;
        plocal_var_118 = &system_state_ptr;
        plocal_var_e0 = &system_state_ptr;
        pcVar3 = *(code **)(*plVar18 + 0x20);
        plocal_var_a8 = &processed_var_672_ptr;
        plocal_var_a0 = stack_array_90;
        stack_array_90[0] = 0;
        local_var_98 = 0xe;
        strcpy_s(stack_array_90,0x20,&ui_system_data_128_ptr);
        plocal_var_118 = &processed_var_672_ptr;
        plocal_var_110 = stack_array_100;
        stack_array_100[0] = 0;
        local_var_108 = 7;
        strcpy_s(stack_array_100,0x20,&processed_var_48_ptr);
        plocal_var_e0 = &processed_var_672_ptr;
        plocal_var_d8 = stack_array_c8;
        stack_array_c8[0] = 0;
        local_var_d0 = 0xe;
        strcpy_s(stack_array_c8,0x20,&processed_var_56_ptr);
        pppcStack_198 = (code ***)&pppcStack_170;
        (*pcVar3)(plVar18,&plocal_var_e0,&plocal_var_118,&plocal_var_a8);
        plocal_var_e0 = &system_state_ptr;
        plocal_var_118 = &system_state_ptr;
        plocal_var_a8 = &system_state_ptr;
        pppcStack_170 = (code ***)&system_data_buffer_ptr;
        if (plocal_var_168 == (int32_t *)0x0) {
          plocal_var_168 = (int32_t *)0x0;
          local_var_158 = (void *)((uint64_t)local_var_158._4_4_ << 0x20);
          pppcStack_170 = (code ***)&system_state_ptr;
          plocal_var_148 = &system_data_buffer_ptr;
          if (plocal_var_140 == (int32_t *)0x0) {
            plocal_var_140 = (int32_t *)0x0;
            local_var_130 = (uint64_t)local_var_130._4_4_ << 0x20;
            plocal_var_148 = &system_state_ptr;
// WARNING: Subroutine does not return
            SystemParameterHandler(system_message_context,&processed_var_6880_ptr);
          }
// WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      if (iVar7 != 5) {
        if (iVar7 == 6) {
          function_05e770(system_context_ptr,lVar13 + 800,0);
          SystemCore_Controller(lVar13 + 800);
          (**(code **)(**(int64_t **)(system_main_module_state + 0x2b0) + 0x120))
                    (*(int64_t **)(system_main_module_state + 0x2b0),0);
          function_21e0a0();
          if (*(int *)(lVar13 + 0x3c) != -1) {
            if (*(int *)(lVar13 + 0x318) + 1 < *(int *)(lVar13 + 0x3c)) {
              *(int *)(lVar13 + 0x318) = *(int *)(lVar13 + 0x318) + 1;
            }
            goto LAB_18018054e;
          }
        }
        else {
          if (iVar7 != 7) {
            local_var_150 = 1;
            plocal_var_a8 = &processed_var_672_ptr;
            plocal_var_a0 = stack_array_90;
            stack_array_90[0] = 0;
            local_var_98 = 0xb;
            strcpy_s(stack_array_90,0x20,&processed_var_5080_ptr);
            function_051f00(system_main_module_state,&plocal_var_a8);
            lVar13 = core_system_data_memory;
            plocal_var_a8 = &system_state_ptr;
            pppcStack_170 = (code ***)&system_data_buffer_ptr;
            local_var_158 = (void *)0x0;
            plocal_var_168 = (int32_t *)0x0;
            local_var_160 = (void *)((uint64_t)local_var_160._4_4_ << 0x20);
            plocal_var_148 = &system_data_buffer_ptr;
            local_var_130 = 0;
            plocal_var_140 = (int32_t *)0x0;
            local_var_138 = 0;
            puVar9 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
            *(int8_t *)puVar9 = 0;
            plocal_var_140 = puVar9;
            uVar6 = CoreMemoryPoolCleaner(puVar9);
            local_var_130 = CONCAT44(local_var_130._4_4_,uVar6);
            *puVar9 = 0x646e6572;
            *(int16_t *)(puVar9 + 1) = 0x7265;
            *(int8_t *)((int64_t)puVar9 + 6) = 0;
            local_var_138 = 6;
            local_var_128 = 1;
            HighFreq_AnimationSystem1((code ******)(lVar13 + 0x70),&pppppcStack_178,&plocal_var_148);
            if ((code ******)pppppcStack_178 != (code ******)(lVar13 + 0x70)) {
              SystemCore_ConfigurationHandler0(&pppcStack_170,pppppcStack_178 + 8);
              if ((int)local_var_160 == 3) {
                do {
                  uVar16 = uVar15 + 1;
                  if (*(char *)((int64_t)plocal_var_168 + uVar15) != (&processed_var_8328_ptr)[uVar15]) break;
                  uVar15 = uVar16;
                } while (uVar16 != 4);
              }
            }
            local_var_128 = 0;
            plocal_var_148 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
            CoreMemoryPoolInitializer(puVar9);
          }
          (**(code **)(**(int64_t **)(system_main_module_state + 0x2b0) + 0x120))
                    (*(int64_t **)(system_main_module_state + 0x2b0),1);
          lVar1 = core_system_data_memory;
          *(int8_t *)(core_system_data_memory + 0x130) = 1;
          lVar14 = *(int64_t *)(lVar1 + 0xb8);
          lVar1 = lVar1 + 0xb0;
          if (lVar14 != lVar1) {
            do {
              lVar10 = *(int64_t *)(lVar14 + 0x20);
              iVar7 = (int)(*(int64_t *)(lVar10 + 0x188) - *(int64_t *)(lVar10 + 0x180) >> 3);
              lVar19 = 0;
              if (0 < iVar7) {
                do {
                  (**(code **)(**(int64_t **)(*(int64_t *)(lVar10 + 0x180) + lVar19 * 8) + 0x48))
                            ();
                  lVar19 = lVar19 + 1;
                } while (lVar19 < iVar7);
              }
              lVar14 = Function_7bfb2422(lVar14);
            } while (lVar14 != lVar1);
          }
          (**(code **)(**(int64_t **)(system_main_module_state + 0x2b0) + 0x128))();
          uVar8 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xc0,8,3);
          uVar8 = function_370550(uVar8);
          *(uint64_t *)(lVar13 + 0x3e0) = uVar8;
          if ((*(int *)(lVar13 + 0x3c) != -1) &&
             (*(int *)(lVar13 + 0x3c) <= *(int *)(lVar13 + 0x318) + 1)) goto LAB_18018054e;
        }
        goto LAB_180180381;
      }
      function_05e770(system_context_ptr,lVar13 + 800,0);
      SystemCore_Controller(lVar13 + 800);
      uVar8 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
      pppppcStack_178 = (code *****)&pppcStack_170;
      local_var_160 = &processed_var_6032_ptr;
      local_var_158 = &processed_var_6016_ptr;
      pppcStack_170 = (code ***)function_21b9c0;
      pppppcStack_188 = (code *****)SystemCore_ErrorHandler(uVar8,&pppcStack_170);
      pppppcStack_180 = pppppcStack_188;
      if (pppppcStack_188 != (code *****)0x0) {
        (*(code *)(*pppppcStack_188)[5])(pppppcStack_188);
      }
      uVar8 = system_context_ptr;
      pppppcStack_178 = (code *****)&pppppcStack_188;
      if (pppppcStack_188 != (code *****)0x0) {
        (*(code *)(*pppppcStack_188)[5])(pppppcStack_188);
      }
      SystemCore_TimerManager(uVar8,&pppppcStack_188);
      PhysicsSystem_TriggersProcessor(lVar13 + 800,&pppppcStack_180);
      uVar8 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
      pppppcStack_188 = (code *****)&pppcStack_170;
      local_var_160 = &processed_var_6032_ptr;
      local_var_158 = &processed_var_6016_ptr;
      pppcStack_170 = (code ***)function_21bc50;
      pppppcVar11 = (code *****)SystemCore_ErrorHandler(uVar8,&pppcStack_170);
      if (pppppcVar11 != (code *****)0x0) {
        pppppcStack_178 = pppppcVar11;
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      pppppcStack_178 = pppppcStack_180;
      pppppcVar5 = pppppcVar11;
      if (pppppcStack_180 != (code *****)0x0) {
        ppppcVar2 = *pppppcStack_180;
        pppppcStack_180 = pppppcVar11;
        (*(code *)ppppcVar2[7])();
        pppppcVar5 = pppppcStack_180;
      }
      pppppcStack_180 = pppppcVar5;
      uVar8 = system_context_ptr;
      pppppcStack_178 = (code *****)&pppppcStack_188;
      pppppcStack_188 = pppppcVar11;
      if (pppppcVar11 != (code *****)0x0) {
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      SystemCore_TimerManager(uVar8,&pppppcStack_188);
      PhysicsSystem_TriggersProcessor(lVar13 + 800,&pppppcStack_180);
      uVar8 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
      pppppcStack_188 = (code *****)&pppcStack_170;
      local_var_160 = &processed_var_5952_ptr;
      local_var_158 = &processed_var_5936_ptr;
      pppcStack_170 = (code ***)function_13ea70;
      plocal_var_168 = (int32_t *)core_system_data_memory;
      ppppppcVar12 = (code ******)SystemCore_ErrorHandler(uVar8,&pppcStack_170);
      if (ppppppcVar12 != (code ******)0x0) {
        pppppcStack_178 = (code *****)ppppppcVar12;
        (*(code *)(*ppppppcVar12)[5])(ppppppcVar12);
      }
      pppppcStack_178 = pppppcStack_180;
      ppppppcVar4 = ppppppcVar12;
      if (pppppcStack_180 != (code *****)0x0) {
        ppppcVar2 = *pppppcStack_180;
        pppppcStack_180 = (code *****)ppppppcVar12;
        (*(code *)ppppcVar2[7])();
        ppppppcVar4 = (code ******)pppppcStack_180;
      }
      pppppcStack_180 = (code *****)ppppppcVar4;
      uVar8 = system_context_ptr;
      pppppcStack_178 = (code *****)&pppppcStack_188;
      pppppcStack_188 = (code *****)ppppppcVar12;
      if (ppppppcVar12 != (code ******)0x0) {
        (*(code *)(*ppppppcVar12)[5])(ppppppcVar12);
      }
      SystemCore_TimerManager(uVar8,&pppppcStack_188);
      PhysicsSystem_TriggersProcessor(lVar13 + 800,&pppppcStack_180);
      ppppppcVar12 = (code ******)pppppcStack_180;
      if ((*(int *)(lVar13 + 0x3c) == -1) ||
         (*(int *)(lVar13 + 0x318) + 1 < *(int *)(lVar13 + 0x3c))) {
        *(int *)(lVar13 + 0x318) = *(int *)(lVar13 + 0x318) + 1;
      }
    }
  }
  if (ppppppcVar12 != (code ******)0x0) {
    (*(code *)(*ppppppcVar12)[7])();
  }
LAB_18018054e:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_1b8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address