#include "ultra_high_freq_fun_definitions.h"
n//  的语义化别名
#define SystemCore_DecryptionManager
n//  的语义化别名
#define SystemCore_GarbageCollector
// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: DataTransformer */
#define DataTransformer DataTransformer
// 99_part_07_part048.c - 5 个函数
// 函数: void function_4c97c0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_4c97c0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  uint64_t *puVar5;
  int64_t *aplStackX_10 [3];
  uint64_t local_var_30;
  uint64_t local_var_28;
  code *pcStack_20;
  code *pcStack_18;
  param_1 = (int64_t *)*param_1;
  *(int32_t *)(*(int64_t *)(*param_1 + 0x70 + (int64_t)(int)param_1[1] * 8) + 0x328) = 0;
  SystemCore_NetworkHandler(*(uint64_t *)(*param_1 + 0x70 + (int64_t)(int)param_1[1] * 8),0,param_3,param_4,
                0xfffffffffffffffe);
  puVar5 = (uint64_t *)SystemCore_GarbageCollector(system_resource_state,aplStackX_10,param_1 + 2,1);
  lVar2 = *param_1 + (int64_t)(int)param_1[1] * 8;
  uVar3 = *puVar5;
  *puVar5 = 0;
  plVar4 = *(int64_t **)(lVar2 + 0x70);
  *(uint64_t *)(lVar2 + 0x70) = uVar3;
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  if (aplStackX_10[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  puVar1 = (uint *)(*(int64_t *)(*param_1 + 0x70 + (int64_t)(int)param_1[1] * 8) + 0x328);
  *puVar1 = *puVar1 | 0x20000000;
  local_var_30 = 0;
  local_var_28 = 0;
  pcStack_20 = (code *)0x0;
  pcStack_18 = _guard_check_icall;
  SystemCore_DecryptionManager(*(uint64_t *)(*param_1 + 0x70 + (int64_t)(int)param_1[1] * 8),0,0xffffffff,
                &local_var_30);
  if (pcStack_20 != (code *)0x0) {
    (*pcStack_20)(&local_var_30,0,0);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_4c98d0(int64_t *param_1,int64_t *param_2,int param_3)
{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  if (param_3 == 3) {
    return 0x180c096e0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    lVar2 = *param_1;
    if (lVar2 != 0) {
      *(uint64_t *)(lVar2 + 0x10) = &system_data_buffer_ptr;
      if (*(int64_t *)(lVar2 + 0x18) != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *(uint64_t *)(lVar2 + 0x18) = 0;
      *(int32_t *)(lVar2 + 0x28) = 0;
      *(uint64_t *)(lVar2 + 0x10) = &system_state_ptr;
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar2);
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      *puVar3 = *puVar1;
      *(int32_t *)(puVar3 + 1) = *(int32_t *)(puVar1 + 1);
      CoreEngineDataTransformer(puVar3 + 2,puVar1 + 2);
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}
uint64_t * function_4c9a20(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &ui_system_data_1752_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4c9a60(int64_t param_1)
void function_4c9a60(int64_t param_1)
{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int8_t stack_array_178 [32];
  uint64_t **pplocal_var_158;
  int32_t *plocal_var_150;
  uint64_t *plocal_var_148;
  int64_t *plStack_140;
  int32_t stack_array_138 [2];
  uint64_t local_var_130;
  uint64_t *plocal_var_128;
  uint64_t *plocal_var_120;
  uint *plocal_var_118;
  uint64_t local_var_108;
  int64_t *plStack_f8;
  uint64_t *plocal_var_f0;
  uint64_t local_var_e8;
  uint64_t stack_array_e0 [2];
  int64_t *plStack_d0;
  char cStack_c8;
  char cStack_c7;
  char cStack_c6;
  void *plocal_var_98;
  int8_t *plocal_var_90;
  int32_t local_var_88;
  int8_t stack_array_80 [72];
  uint64_t local_var_38;
  local_var_108 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  plVar7 = (int64_t *)0x0;
  function_093950();
  *(int32_t *)(system_main_module_state + 0x200) = 0x3d088889;
  *(int32_t *)(param_1 + 8) = *(int32_t *)(SYSTEM_STATE_MANAGER + 0x1b90);
  plocal_var_120 = (uint64_t *)0x0;
  plStack_f8 = (int64_t *)&memory_allocator_3480_ptr;
  plocal_var_f0 = stack_array_e0;
  stack_array_e0[0] = stack_array_e0[0] & 0xffffffffffffff00;
  local_var_e8._0_4_ = 0x10;
  strcpy_s(stack_array_e0,0x40,&ui_system_data_1944_ptr);
  RenderingSystem_ShaderCompiler0(system_resource_state,&plocal_var_128,&plStack_f8);
  plStack_f8 = (int64_t *)&system_state_ptr;
  if (plocal_var_128 == (uint64_t *)0x0) {
    SystemDataInitializer(&ui_system_data_1808_ptr);
    uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x300,0x10,3);
    puVar3 = (uint64_t *)FileSystem_Operator(uVar2,1);
    if (puVar3 != (uint64_t *)0x0) {
      plocal_var_148 = puVar3;
      (**(code **)(*puVar3 + 0x28))(puVar3);
    }
    plocal_var_148 = (uint64_t *)0x0;
    plocal_var_120 = puVar3;
    uVar2 = function_0be9a0(system_system_data_memory,&plocal_var_148,0);
    UltraHighFreq_SecurityValidator1(puVar3,uVar2);
    if (plocal_var_148 != (uint64_t *)0x0) {
      (**(code **)(*plocal_var_148 + 0x38))();
    }
    plStack_f8 = (int64_t *)0x0;
    plocal_var_f0 = (uint64_t *)0x0;
    plocal_var_118 = (uint *)&local_var_e8;
    plStack_d0 = (int64_t *)0x0;
    stack_array_e0[0] = 0;
    local_var_e8._0_4_ = (uint)local_var_e8 & 0xffffff00;
    RenderingSystem_MaterialProcessor(&plStack_f8,puVar3,0);
    stack_array_138[0] = 0xffbbbbbb;
    local_var_130._0_4_ = 0x3f800000;
    local_var_130._4_4_ = 0x3f800000;
    plStack_140 = (int64_t *)0x0;
    plocal_var_148 = (uint64_t *)0x3f8000003f800000;
    plocal_var_150 = stack_array_138;
    pplocal_var_158 = (uint64_t **)&local_var_130;
    function_2356b0(&plStack_f8,&system_counter_02f0,&plocal_var_148,&plStack_140);
    if ((plStack_f8 != (int64_t *)0x0) && (plocal_var_f0 != (uint64_t *)0x0)) {
      if (cStack_c6 != '\0') {
        SystemConfig_Manager();
      }
      SystemSecurityManager(&local_var_e8);
      if (cStack_c8 != '\0') {
        SystemInitializer(plStack_f8);
      }
      if (cStack_c7 != '\0') {
        SystemInitializer(plStack_f8);
      }
      puVar5 = plocal_var_f0;
      plocal_var_148 = plocal_var_f0;
      plocal_var_f0 = (uint64_t *)0x0;
      if (puVar5 != (uint64_t *)0x0) {
        (**(code **)(*puVar5 + 0x38))();
      }
    }
    plocal_var_118 = (uint *)&local_var_e8;
    SystemSecurityManager(&local_var_e8);
    if (plStack_d0 != (int64_t *)0x0) {
      (**(code **)(*plStack_d0 + 0x38))();
    }
    plVar6 = plStack_f8;
    if (plocal_var_f0 != (uint64_t *)0x0) {
      (**(code **)(*plocal_var_f0 + 0x38))();
      plVar6 = plStack_f8;
    }
  }
  else {
    puVar4 = (uint64_t *)SystemCore_BufferManager(plocal_var_128,&plStack_140);
    puVar3 = (uint64_t *)*puVar4;
    *puVar4 = 0;
    plocal_var_148 = (uint64_t *)0x0;
    plVar6 = plStack_140;
    plocal_var_120 = puVar3;
  }
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x38))();
  }
  plocal_var_118 = (uint *)0x0;
  plocal_var_98 = &memory_allocator_3480_ptr;
  plocal_var_90 = stack_array_80;
  stack_array_80[0] = 0;
  local_var_88 = 0xd;
  strcpy_s(stack_array_80,0x40,&rendering_buffer_2088_ptr);
  puVar4 = (uint64_t *)RenderingSystem_ShaderCompiler0(system_resource_state,&local_var_130,&plocal_var_98);
  puVar5 = (uint64_t *)*puVar4;
  *puVar4 = 0;
  plocal_var_148 = plocal_var_128;
  if (plocal_var_128 != (uint64_t *)0x0) {
    uVar1 = *plocal_var_128;
    plocal_var_128 = puVar5;
    (**(code **)(uVar1 + 0x38))();
    puVar5 = plocal_var_128;
  }
  plocal_var_128 = puVar5;
  if ((int64_t *)CONCAT44(local_var_130._4_4_,(int32_t)local_var_130) != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)CONCAT44(local_var_130._4_4_,(int32_t)local_var_130) + 0x38))();
  }
  plocal_var_98 = &system_state_ptr;
  if (plocal_var_128 == (uint64_t *)0x0) {
    SystemDataInitializer(&ui_system_data_1968_ptr);
    uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x300,0x10,3);
    puVar5 = (uint64_t *)FileSystem_Operator(uVar2,1);
    if (puVar5 != (uint64_t *)0x0) {
      plocal_var_148 = puVar5;
      (**(code **)(*puVar5 + 0x28))(puVar5);
    }
    plocal_var_120 = puVar5;
    if (puVar3 != (uint64_t *)0x0) {
      plocal_var_148 = puVar3;
      (**(code **)(*puVar3 + 0x38))();
    }
    plStack_f8 = (int64_t *)0x0;
    plocal_var_f0 = (uint64_t *)0x0;
    plocal_var_148 = &local_var_e8;
    plStack_d0 = (int64_t *)0x0;
    stack_array_e0[0] = 0;
    local_var_e8._0_4_ = (uint)local_var_e8 & 0xffffff00;
    RenderingSystem_MaterialProcessor(&plStack_f8,puVar5,0);
    stack_array_138[0] = 0xffbbbbbb;
    plocal_var_148 = (uint64_t *)0x3f8000003f800000;
    plStack_140 = (int64_t *)0x0;
    local_var_130._0_4_ = 0x3f800000;
    local_var_130._4_4_ = 0x3f800000;
    plocal_var_150 = stack_array_138;
    pplocal_var_158 = &plocal_var_148;
    function_2356b0(&plStack_f8,&system_counter_02f0,&local_var_130,&plStack_140);
    uVar2 = function_0be9a0(system_system_data_memory,&plocal_var_148,0);
    UltraHighFreq_SecurityValidator1(puVar5,uVar2);
    if (plocal_var_148 != (uint64_t *)0x0) {
      (**(code **)(*plocal_var_148 + 0x38))();
    }
    if ((plStack_f8 != (int64_t *)0x0) && (plocal_var_f0 != (uint64_t *)0x0)) {
      if (cStack_c6 != '\0') {
        SystemConfig_Manager();
      }
      SystemSecurityManager(&local_var_e8);
      if (cStack_c8 != '\0') {
        SystemInitializer(plStack_f8);
      }
      if (cStack_c7 != '\0') {
        SystemInitializer(plStack_f8);
      }
      puVar3 = plocal_var_f0;
      plocal_var_148 = plocal_var_f0;
      plocal_var_f0 = (uint64_t *)0x0;
      if (puVar3 != (uint64_t *)0x0) {
        (**(code **)(*puVar3 + 0x38))();
      }
    }
    plocal_var_148 = &local_var_e8;
    SystemSecurityManager(&local_var_e8);
    if (plStack_d0 != (int64_t *)0x0) {
      (**(code **)(*plStack_d0 + 0x38))();
    }
    plVar6 = plStack_f8;
    if (plocal_var_f0 != (uint64_t *)0x0) {
      (**(code **)(*plocal_var_f0 + 0x38))();
      plVar6 = plStack_f8;
    }
  }
  else {
    puVar4 = (uint64_t *)SystemCore_BufferManager(plocal_var_128,&plStack_140);
    plVar7 = (int64_t *)*puVar4;
    *puVar4 = 0;
    plocal_var_148 = (uint64_t *)0x0;
    plVar6 = plStack_140;
    puVar5 = puVar3;
    plocal_var_118 = (uint *)plVar7;
  }
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x38))();
  }
  (**(code **)(puVar5[2] + 0x10))(puVar5 + 2,&rendering_buffer_2176_ptr);
  *(uint64_t *)(param_1 + 0x30) = 0;
  function_056b30();
  function_17ee80();
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x38))(plVar7);
  }
  if (plocal_var_128 != (uint64_t *)0x0) {
    (**(code **)(*plocal_var_128 + 0x38))();
  }
  (**(code **)(*puVar5 + 0x38))(puVar5);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4ca020(int64_t *param_1)
void function_4ca020(int64_t *param_1)
{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t lVar4;
  void *puVar5;
  float fVar6;
  int64_t *plStackX_8;
  void *plocal_var_68;
  void *plocal_var_60;
  int32_t local_var_58;
  uint64_t local_var_50;
  void *plocal_var_48;
  int64_t lStack_40;
  int32_t local_var_30;
  plVar2 = system_system_data_memory;
  if (system_system_data_memory == (int64_t *)0x0) {
    QueryPerformanceCounter(&plStackX_8);
    plVar2 = plStackX_8;
  }
  system_interrupt_handler = (double)((int64_t)plVar2 - system_system_data_memory) * system_system_data_memory - system_interrupt_handler;
  function_062340(system_message_context,0,&rendering_buffer_2152_ptr,system_interrupt_handler);
  SystemConfigurationManager(system_message_context,0,0xffffffff00000000,4,&rendering_buffer_2232_ptr,system_interrupt_handler);
  fVar6 = (float)function_623d40();
  SystemConfigurationManager(system_message_context,0,0xffffffff00000000,7,&rendering_buffer_2200_ptr,(double)fVar6);
  plocal_var_68 = &system_data_buffer_ptr;
  local_var_50 = 0;
  plocal_var_60 = (void *)0x0;
  local_var_58 = 0;
  uVar3 = function_623ce0();
  function_05d0e0(uVar3,&plocal_var_68);
  puVar5 = &system_buffer_ptr;
  if (plocal_var_60 != (void *)0x0) {
    puVar5 = plocal_var_60;
  }
  SystemConfigurationManager(system_message_context,0,0xffffffff00000000,7,&rendering_buffer_2128_ptr,&system_counter_d0f8,puVar5);
  lVar1 = system_system_data_memory;
  if ((system_debug_flag != '\0') && (system_counter_2845 == '\0')) {
// 函数: void function_4ca960(uint64_t *param_1)
void function_4ca960(uint64_t *param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uVar6 = 0xfffffffffffffffe;
  *param_1 = &rendering_buffer_2320_ptr;
  function_4cd320();
  _Mtx_destroy_in_situ();
  SystemDataValidator(param_1 + 0x35,0x28,8,function_4ce100,uVar6);
  if (param_1[0x31] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  uVar5 = 0;
  if (param_1[0x2b] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (param_1[0x26] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (param_1[0x21] == 0) {
    lVar2 = param_1[0x1c];
    if (lVar2 != 0) {
      uVar3 = uVar5;
      if (param_1[0x1d] != 0) {
        do {
          lVar2 = param_1[0x1c];
          puVar4 = (uint64_t *)((uVar3 & 0xffffffff) * 0x50 + lVar2);
          if (((*puVar4 & 0xffffffff00000000) != 0) && (puVar4 + 1 != (uint64_t *)0x0)) {
            if ((int64_t *)puVar4[5] != (int64_t *)0x0) {
              (**(code **)(*(int64_t *)puVar4[5] + 0x38))();
            }
            DataTransformer0(puVar4 + 1);
            lVar2 = param_1[0x1c];
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < (uint64_t)param_1[0x1d]);
      }
      if (lVar2 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      param_1[0x1c] = 0;
    }
    if (param_1[0x17] != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    if (param_1[0x12] == 0) {
      lVar2 = param_1[0xd];
      if (lVar2 != 0) {
        if (param_1[0xe] != 0) {
          do {
            puVar4 = (uint64_t *)((uVar5 & 0xffffffff) * 0x38 + param_1[0xd]);
            if ((((*puVar4 & 0xffffffff00000000) != 0) &&
                (puVar4 = puVar4 + 1, puVar4 != (uint64_t *)0x0)) &&
               (plVar1 = (int64_t *)*puVar4, plVar1 != (int64_t *)0x0)) {
              (**(code **)(*plVar1 + 0x38))();
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < (uint64_t)param_1[0xe]);
          lVar2 = param_1[0xd];
        }
        if (lVar2 != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        param_1[0xd] = 0;
      }
      *param_1 = &memory_allocator_3952_ptr;
      if (param_1[1] == 0) {
        return;
      }
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4cab80(int64_t param_1,int64_t param_2,ushort param_3)
void function_4cab80(int64_t param_1,int64_t param_2,ushort param_3)
{
  int64_t lVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int iVar6;
  int iVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  byte bVar13;
  int64_t *plVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t lVar17;
  int iStackX_20;
  int iStack_1b8;
  int64_t lStack_198;
  int64_t lStack_190;
  int8_t stack_array_170 [64];
  int64_t *plStack_130;
  int64_t *plStack_128;
  int8_t stack_array_110 [64];
  int64_t *plStack_d0;
  int64_t *plStack_c8;
  int8_t stack_array_b0 [64];
  int64_t *plStack_70;
  int64_t *plStack_68;
  if ((param_2 != 0) && ('\0' < *(char *)(param_2 + 0x20))) {
    iStack_1b8 = 0;
    lVar17 = *(int64_t *)(param_2 + 0x1a8);
    if (*(int64_t *)(param_2 + 0x1b0) - lVar17 >> 3 != 0) {
      lStack_190 = 0;
      do {
        plVar10 = *(int64_t **)(lStack_190 + lVar17);
        iVar6 = (**(code **)(*plVar10 + 0x98))();
        if (iVar6 == 0) {
          iStackX_20 = 0;
          lVar17 = 0x14;
          plVar14 = (int64_t *)(param_1 + 0x1a8);
          do {
            iVar6 = (int)plVar10[0xb] + -1;
            if (iStackX_20 < 0) {
              iVar7 = 0;
            }
            else {
              iVar7 = iStackX_20;
              if (iVar6 < iStackX_20) {
                iVar7 = iVar6;
              }
            }
            iVar6 = 0;
            lVar15 = plVar10[7];
            if (plVar10[8] - lVar15 >> 4 != 0) {
              lVar16 = 0;
              do {
                if ((*(uint *)(lVar16 + 8 + lVar15) & 1 << ((byte)iVar7 & 0x1f)) != 0) {
                  lVar1 = *plVar14 +
                          (uint64_t)
                          *(ushort *)
                           (lVar17 + (uint64_t)param_3 * 0x38 + *(int64_t *)(param_1 + 0x68)) *
                          0x28;
                  if (*(code **)(*plVar10 + 0x158) == (code *)&rendering_buffer_2528_ptr) {
                    plVar12 = plVar10 + 0x66;
                  }
                  else {
                    plVar12 = (int64_t *)(**(code **)(*plVar10 + 0x158))(plVar10);
                  }
                  puVar8 = (uint64_t *)
                           function_4cdee0(stack_array_170,plVar10,*(uint64_t *)(lVar16 + lVar15),
                                         plVar12);
                  puVar2 = *(uint64_t **)(lVar1 + 0x10);
                  if (puVar2 < *(uint64_t **)(lVar1 + 0x18)) {
                    *(uint64_t **)(lVar1 + 0x10) = puVar2 + 0xc;
                    uVar9 = puVar8[1];
                    *puVar2 = *puVar8;
                    puVar2[1] = uVar9;
                    uVar9 = puVar8[3];
                    puVar2[2] = puVar8[2];
                    puVar2[3] = uVar9;
                    uVar3 = *(int32_t *)((int64_t)puVar8 + 0x24);
                    uVar4 = *(int32_t *)(puVar8 + 5);
                    uVar5 = *(int32_t *)((int64_t)puVar8 + 0x2c);
                    *(int32_t *)(puVar2 + 4) = *(int32_t *)(puVar8 + 4);
                    *(int32_t *)((int64_t)puVar2 + 0x24) = uVar3;
                    *(int32_t *)(puVar2 + 5) = uVar4;
                    *(int32_t *)((int64_t)puVar2 + 0x2c) = uVar5;
                    uVar9 = puVar8[7];
                    puVar2[6] = puVar8[6];
                    puVar2[7] = uVar9;
                    puVar2[8] = puVar8[8];
                    puVar8[8] = 0;
                    puVar2[9] = puVar8[9];
                    puVar8[9] = 0;
                    *(int8_t *)(puVar2 + 10) = *(int8_t *)(puVar8 + 10);
                    *(int32_t *)((int64_t)puVar2 + 0x54) =
                         *(int32_t *)((int64_t)puVar8 + 0x54);
                    *(int32_t *)(puVar2 + 0xb) = *(int32_t *)(puVar8 + 0xb);
                    *(int32_t *)((int64_t)puVar2 + 0x5c) =
                         *(int32_t *)((int64_t)puVar8 + 0x5c);
                  }
                  else {
                    function_4ce730(lVar1 + 8);
                  }
                  if (plStack_128 != (int64_t *)0x0) {
                    (**(code **)(*plStack_128 + 0x38))();
                  }
                  if (plStack_130 != (int64_t *)0x0) {
                    (**(code **)(*plStack_130 + 0x38))();
                  }
                }
                iVar6 = iVar6 + 1;
                lVar16 = lVar16 + 0x10;
                lVar15 = plVar10[7];
              } while ((uint64_t)(int64_t)iVar6 < (uint64_t)(plVar10[8] - lVar15 >> 4));
            }
            iStackX_20 = iStackX_20 + 1;
            plVar14 = plVar14 + 5;
            lVar17 = lVar17 + 2;
          } while (lVar17 < 0x24);
        }
        else {
          iVar6 = (**(code **)(*plVar10 + 0x98))(plVar10);
          if (iVar6 == 3) {
            lVar17 = plVar10[9];
            uVar9 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,0x16);
            plVar10 = (int64_t *)RenderingSystem_ShaderManager(uVar9);
            if (plVar10 != (int64_t *)0x0) {
              (**(code **)(*plVar10 + 0x28))(plVar10);
            }
            RenderingSystem_275A60(lVar17,plVar10,1);
            iStackX_20 = 0;
            lVar17 = 0x14;
            plVar14 = (int64_t *)(param_1 + 0x1a8);
            do {
              iVar6 = (int)plVar10[0xb] + -1;
              if (iStackX_20 < 0) {
                iVar7 = 0;
              }
              else {
                iVar7 = iStackX_20;
                if (iVar6 < iStackX_20) {
                  iVar7 = iVar6;
                }
              }
              iVar6 = 0;
              lVar15 = plVar10[7];
              if (plVar10[8] - lVar15 >> 4 != 0) {
                lVar16 = 0;
                do {
                  if ((*(uint *)(lVar16 + 8 + lVar15) & 1 << ((byte)iVar7 & 0x1f)) != 0) {
                    lVar1 = *plVar14 +
                            (uint64_t)
                            *(ushort *)
                             (lVar17 + (uint64_t)param_3 * 0x38 + *(int64_t *)(param_1 + 0x68)) *
                            0x28;
                    if (*(code **)(*plVar10 + 0x158) == (code *)&rendering_buffer_2528_ptr) {
                      plVar12 = plVar10 + 0x66;
                    }
                    else {
                      plVar12 = (int64_t *)(**(code **)(*plVar10 + 0x158))(plVar10);
                    }
                    puVar8 = (uint64_t *)
                             function_4cdee0(stack_array_110,plVar10,*(uint64_t *)(lVar16 + lVar15),
                                           plVar12);
                    puVar2 = *(uint64_t **)(lVar1 + 0x10);
                    if (puVar2 < *(uint64_t **)(lVar1 + 0x18)) {
                      *(uint64_t **)(lVar1 + 0x10) = puVar2 + 0xc;
                      uVar9 = puVar8[1];
                      *puVar2 = *puVar8;
                      puVar2[1] = uVar9;
                      uVar9 = puVar8[3];
                      puVar2[2] = puVar8[2];
                      puVar2[3] = uVar9;
                      uVar3 = *(int32_t *)((int64_t)puVar8 + 0x24);
                      uVar4 = *(int32_t *)(puVar8 + 5);
                      uVar5 = *(int32_t *)((int64_t)puVar8 + 0x2c);
                      *(int32_t *)(puVar2 + 4) = *(int32_t *)(puVar8 + 4);
                      *(int32_t *)((int64_t)puVar2 + 0x24) = uVar3;
                      *(int32_t *)(puVar2 + 5) = uVar4;
                      *(int32_t *)((int64_t)puVar2 + 0x2c) = uVar5;
                      uVar9 = puVar8[7];
                      puVar2[6] = puVar8[6];
                      puVar2[7] = uVar9;
                      puVar2[8] = puVar8[8];
                      puVar8[8] = 0;
                      puVar2[9] = puVar8[9];
                      puVar8[9] = 0;
                      *(int8_t *)(puVar2 + 10) = *(int8_t *)(puVar8 + 10);
                      *(int32_t *)((int64_t)puVar2 + 0x54) =
                           *(int32_t *)((int64_t)puVar8 + 0x54);
                      *(int32_t *)(puVar2 + 0xb) = *(int32_t *)(puVar8 + 0xb);
                      *(int32_t *)((int64_t)puVar2 + 0x5c) =
                           *(int32_t *)((int64_t)puVar8 + 0x5c);
                    }
                    else {
                      function_4ce730(lVar1 + 8);
                    }
                    if (plStack_c8 != (int64_t *)0x0) {
                      (**(code **)(*plStack_c8 + 0x38))();
                    }
                    if (plStack_d0 != (int64_t *)0x0) {
                      (**(code **)(*plStack_d0 + 0x38))();
                    }
                  }
                  iVar6 = iVar6 + 1;
                  lVar16 = lVar16 + 0x10;
                  lVar15 = plVar10[7];
                } while ((uint64_t)(int64_t)iVar6 < (uint64_t)(plVar10[8] - lVar15 >> 4));
              }
              iStackX_20 = iStackX_20 + 1;
              plVar14 = plVar14 + 5;
              lVar17 = lVar17 + 2;
            } while (lVar17 < 0x24);
            (**(code **)(*plVar10 + 0x38))(plVar10);
          }
          else {
            iVar6 = (**(code **)(*plVar10 + 0x98))();
            if (iVar6 == 6) {
              iVar6 = 0;
              lVar17 = plVar10[0x1c];
              if (plVar10[0x1d] - lVar17 >> 3 != 0) {
                lStack_198 = 0;
                do {
                  plVar14 = *(int64_t **)(lStack_198 + lVar17);
                  iStackX_20 = 0;
                  lVar17 = 0x14;
                  plVar12 = (int64_t *)(param_1 + 0x1a8);
                  do {
                    iVar7 = (int)plVar14[0xb] + -1;
                    if (iStackX_20 < 0) {
                      bVar13 = 0;
                    }
                    else {
                      bVar13 = (byte)iStackX_20;
                      if (iVar7 < iStackX_20) {
                        bVar13 = (byte)iVar7;
                      }
                    }
                    iVar7 = 0;
                    lVar15 = plVar14[7];
                    if (plVar14[8] - lVar15 >> 4 != 0) {
                      lVar16 = 0;
                      do {
                        if ((*(uint *)(lVar16 + 8 + lVar15) & 1 << (bVar13 & 0x1f)) != 0) {
                          lVar1 = *plVar12 +
                                  (uint64_t)
                                  *(ushort *)
                                   ((uint64_t)param_3 * 0x38 + *(int64_t *)(param_1 + 0x68) +
                                   lVar17) * 0x28;
                          if (*(code **)(*plVar14 + 0x158) == (code *)&rendering_buffer_2528_ptr) {
                            plVar11 = plVar14 + 0x66;
                          }
                          else {
                            plVar11 = (int64_t *)(**(code **)(*plVar14 + 0x158))(plVar14);
                          }
                          puVar8 = (uint64_t *)
                                   function_4cdee0(stack_array_b0,plVar14,*(uint64_t *)(lVar16 + lVar15)
                                                 ,plVar11);
                          puVar2 = *(uint64_t **)(lVar1 + 0x10);
                          if (puVar2 < *(uint64_t **)(lVar1 + 0x18)) {
                            *(uint64_t **)(lVar1 + 0x10) = puVar2 + 0xc;
                            uVar9 = puVar8[1];
                            *puVar2 = *puVar8;
                            puVar2[1] = uVar9;
                            uVar9 = puVar8[3];
                            puVar2[2] = puVar8[2];
                            puVar2[3] = uVar9;
                            uVar3 = *(int32_t *)((int64_t)puVar8 + 0x24);
                            uVar4 = *(int32_t *)(puVar8 + 5);
                            uVar5 = *(int32_t *)((int64_t)puVar8 + 0x2c);
                            *(int32_t *)(puVar2 + 4) = *(int32_t *)(puVar8 + 4);
                            *(int32_t *)((int64_t)puVar2 + 0x24) = uVar3;
                            *(int32_t *)(puVar2 + 5) = uVar4;
                            *(int32_t *)((int64_t)puVar2 + 0x2c) = uVar5;
                            uVar9 = puVar8[7];
                            puVar2[6] = puVar8[6];
                            puVar2[7] = uVar9;
                            puVar2[8] = puVar8[8];
                            puVar8[8] = 0;
                            puVar2[9] = puVar8[9];
                            puVar8[9] = 0;
                            *(int8_t *)(puVar2 + 10) = *(int8_t *)(puVar8 + 10);
                            *(int32_t *)((int64_t)puVar2 + 0x54) =
                                 *(int32_t *)((int64_t)puVar8 + 0x54);
                            *(int32_t *)(puVar2 + 0xb) = *(int32_t *)(puVar8 + 0xb);
                            *(int32_t *)((int64_t)puVar2 + 0x5c) =
                                 *(int32_t *)((int64_t)puVar8 + 0x5c);
                          }
                          else {
                            function_4ce730(lVar1 + 8);
                          }
                          if (plStack_68 != (int64_t *)0x0) {
                            (**(code **)(*plStack_68 + 0x38))();
                          }
                          if (plStack_70 != (int64_t *)0x0) {
                            (**(code **)(*plStack_70 + 0x38))();
                          }
                        }
                        iVar7 = iVar7 + 1;
                        lVar16 = lVar16 + 0x10;
                        lVar15 = plVar14[7];
                      } while ((uint64_t)(int64_t)iVar7 < (uint64_t)(plVar14[8] - lVar15 >> 4));
                    }
                    iStackX_20 = iStackX_20 + 1;
                    plVar12 = plVar12 + 5;
                    lVar17 = lVar17 + 2;
                  } while (lVar17 < 0x24);
                  iVar6 = iVar6 + 1;
                  lStack_198 = lStack_198 + 8;
                  lVar17 = plVar10[0x1c];
                } while ((uint64_t)(int64_t)iVar6 < (uint64_t)(plVar10[0x1d] - lVar17 >> 3));
              }
            }
          }
        }
        iStack_1b8 = iStack_1b8 + 1;
        lStack_190 = lStack_190 + 8;
        lVar17 = *(int64_t *)(param_2 + 0x1a8);
      } while ((uint64_t)(int64_t)iStack_1b8 <
               (uint64_t)(*(int64_t *)(param_2 + 0x1b0) - lVar17 >> 3));
    }
  }
  return;
}