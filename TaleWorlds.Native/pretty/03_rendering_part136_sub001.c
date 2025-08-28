#include "ultra_high_freq_fun_definitions.h"
// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: MathOptimizationEngine */
#define MathOptimizationEngine MathOptimizationEngine
// 03_rendering_part136_sub001.c - 11 个函数
// 03_rendering_part136.c - 11 个函数
// 函数: void function_34b910(uint64_t param_1)
void function_34b910(uint64_t param_1)
{
  int8_t stack_array_248 [32];
  int32_t local_var_228;
  void **applocal_var_220 [2];
  uint64_t local_var_210;
  void *aplocal_var_208 [11];
  int32_t local_var_1b0;
  void *plocal_var_1a8;
  int8_t *plocal_var_1a0;
  int32_t local_var_198;
  int8_t stack_array_190 [72];
  void *plocal_var_148;
  int8_t *plocal_var_140;
  int32_t local_var_138;
  int8_t stack_array_130 [72];
  void *plocal_var_e8;
  int8_t *plocal_var_e0;
  int32_t local_var_d8;
  int8_t stack_array_d0 [72];
  void *plocal_var_88;
  int8_t *plocal_var_80;
  int32_t local_var_78;
  int8_t stack_array_70 [72];
  uint64_t local_var_28;
  local_var_210 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_248;
  local_var_228 = 0;
  plocal_var_1a8 = &memory_allocator_3480_ptr;
  plocal_var_1a0 = stack_array_190;
  stack_array_190[0] = 0;
  local_var_198 = 0xe;
  strcpy_s(stack_array_190,0x40,&system_data_d8a0);
  SystemCommunicationProcessor(aplocal_var_208,&plocal_var_1a8);
  local_var_1b0 = 0;
  local_var_228 = 1;
  MathOptimizationEngine0(param_1,applocal_var_220,aplocal_var_208);
  local_var_228 = 0;
  applocal_var_220[0] = aplocal_var_208;
  aplocal_var_208[0] = &system_state_ptr;
  plocal_var_1a8 = &system_state_ptr;
  plocal_var_148 = &memory_allocator_3480_ptr;
  plocal_var_140 = stack_array_130;
  stack_array_130[0] = 0;
  local_var_138 = 0xc;
  strcpy_s(stack_array_130,0x40,&system_data_d890);
  SystemCommunicationProcessor(aplocal_var_208,&plocal_var_148);
  local_var_1b0 = 0;
  local_var_228 = 2;
  MathOptimizationEngine0(param_1,applocal_var_220,aplocal_var_208);
  local_var_228 = 0;
  applocal_var_220[0] = aplocal_var_208;
  aplocal_var_208[0] = &system_state_ptr;
  plocal_var_148 = &system_state_ptr;
  plocal_var_e8 = &memory_allocator_3480_ptr;
  plocal_var_e0 = stack_array_d0;
  stack_array_d0[0] = 0;
  local_var_d8 = 0xe;
  strcpy_s(stack_array_d0,0x40,&system_data_d880);
  SystemCommunicationProcessor(aplocal_var_208,&plocal_var_e8);
  local_var_1b0 = 0;
  local_var_228 = 4;
  MathOptimizationEngine0(param_1,applocal_var_220,aplocal_var_208);
  local_var_228 = 0;
  applocal_var_220[0] = aplocal_var_208;
  aplocal_var_208[0] = &system_state_ptr;
  plocal_var_e8 = &system_state_ptr;
  plocal_var_88 = &memory_allocator_3480_ptr;
  plocal_var_80 = stack_array_70;
  stack_array_70[0] = 0;
  local_var_78 = 0xe;
  strcpy_s(stack_array_70,0x40,&system_data_d988);
  SystemCommunicationProcessor(aplocal_var_208,&plocal_var_88);
  local_var_1b0 = 0;
  local_var_228 = 8;
  MathOptimizationEngine0(param_1,applocal_var_220,aplocal_var_208);
  local_var_228 = 0;
  applocal_var_220[0] = aplocal_var_208;
  aplocal_var_208[0] = &system_state_ptr;
  plocal_var_88 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_248);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_34bbd0(int64_t param_1,int64_t param_2)
void function_34bbd0(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  void *puVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t lVar10;
  void *puVar11;
  int64_t *plStackX_8;
  lVar8 = 0;
  iVar3 = *(int *)(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x3054);
  iVar5 = *(int *)(param_2 + 0x10);
  if ((iVar5 == 0xc) && (iVar4 = strcmp(*(uint64_t *)(param_2 + 8),&system_data_d890), iVar4 == 0)) {
    lVar8 = 1;
  }
  else if (iVar5 == 0xe) {
    iVar5 = strcmp(*(uint64_t *)(param_2 + 8),&system_data_d880);
    if (iVar5 == 0) {
      lVar8 = 2;
    }
    else {
      iVar5 = strcmp(*(uint64_t *)(param_2 + 8),&system_data_d988);
      lVar8 = 0;
      if (iVar5 == 0) {
        lVar8 = 3;
      }
    }
  }
  plVar9 = (int64_t *)(param_1 + 0x70 + lVar8 * 0x20);
  lVar1 = lVar8 * 0x20 + param_1;
  iVar5 = (int)plVar9[2];
  iVar4 = *(int *)(lVar1 + 0x100);
  if (iVar5 == iVar4) {
    if (iVar5 != 0) {
      pbVar6 = (byte *)plVar9[1];
      lVar10 = *(int64_t *)(lVar1 + 0xf8) - (int64_t)pbVar6;
      do {
        pbVar2 = pbVar6 + lVar10;
        iVar4 = (uint)*pbVar6 - (uint)*pbVar2;
        if (iVar4 != 0) break;
        pbVar6 = pbVar6 + 1;
      } while (*pbVar2 != 0);
    }
  }
  else if (iVar5 != 0) goto LAB_18034bcb4;
  if (iVar4 == 0) {
    return;
  }
LAB_18034bcb4:
  SystemCore_PerformanceMonitor(system_resource_state,&plStackX_8,plVar9,0);
  if (plStackX_8 == (int64_t *)0x0) {
    if ((int)plVar9[2] != 0) {
      lVar10 = function_149750(lVar8);
      puVar11 = &system_buffer_ptr;
      if (*(void **)(lVar10 + 8) != (void *)0x0) {
        puVar11 = *(void **)(lVar10 + 8);
      }
      puVar7 = &system_buffer_ptr;
      if ((void *)plVar9[1] != (void *)0x0) {
        puVar7 = (void *)plVar9[1];
      }
      SystemCore_Allocator(&processed_var_7712_ptr,puVar7,puVar11);
    }
    (**(code **)(*plVar9 + 0x10))(plVar9,&system_buffer_ptr);
  }
  if (iVar3 == (int)lVar8) {
    function_34bd70(param_1,lVar8);
  }
  SystemCore_ConfigurationHandler0(lVar1 + 0xf0,plVar9);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x00018034beec)
// WARNING: Removing unreachable block (ram,0x00018034bf31)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_34bd70(int64_t param_1,int param_2)
void function_34bd70(int64_t param_1,int param_2)
{
  int64_t *plVar1;
  int64_t lVar2;
  void *puVar3;
  uint uVar4;
  void *puVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  uint uVar9;
  uint64_t uVar10;
  int64_t *plStackX_8;
  int64_t *plStackX_20;
  void *plocal_var_78;
  int64_t lStack_70;
  uint local_var_68;
  uint64_t local_var_60;
  int64_t *plStack_58;
  int64_t lStack_50;
  uint64_t local_var_48;
  int32_t local_var_40;
  uint64_t uVar5;
  uVar8 = 0;
  if (*(int64_t *)(param_1 + 0x178) == 0) {
    return;
  }
  plStackX_8 = (int64_t *)0x0;
  plVar1 = (int64_t *)
           SystemCore_PerformanceMonitor(system_resource_state,&plStackX_20,param_1 + 0x70 + (int64_t)param_2 * 0x20,0);
  plVar7 = (int64_t *)*plVar1;
  *plVar1 = 0;
  plStackX_8 = plVar7;
  if (plStackX_20 != (int64_t *)0x0) {
    (**(code **)(*plStackX_20 + 0x38))();
  }
  if (plVar7 == (int64_t *)0x0) {
    lVar2 = function_149750(param_2);
    plocal_var_78 = &system_data_buffer_ptr;
    local_var_60 = 0;
    lStack_70 = 0;
    local_var_68 = 0;
    if (0 < *(int *)(param_1 + 0x80)) {
      CoreMemoryPoolProcessor(&plocal_var_78,*(int *)(param_1 + 0x80));
// WARNING: Subroutine does not return
      memcpy((uint64_t)local_var_68 + lStack_70,*(uint64_t *)(param_1 + 0x78),
             (int64_t)(*(int *)(param_1 + 0x80) + 1));
    }
    CoreMemoryPoolProcessor(&plocal_var_78,1);
    *(int16_t *)((uint64_t)local_var_68 + lStack_70) = 0x5f;
    local_var_68 = 1;
    if (0 < *(int *)(lVar2 + 0x10)) {
      CoreMemoryPoolProcessor(&plocal_var_78,*(int *)(lVar2 + 0x10) + 1);
// WARNING: Subroutine does not return
      memcpy((uint64_t)local_var_68 + lStack_70,*(uint64_t *)(lVar2 + 8),
             (int64_t)(*(int *)(lVar2 + 0x10) + 1));
    }
    plVar1 = (int64_t *)SystemCore_PerformanceMonitor(system_resource_state,&plStackX_20,&plocal_var_78,0);
    plVar7 = (int64_t *)*plVar1;
    *plVar1 = 0;
    plStackX_8 = plVar7;
    if (plStackX_20 != (int64_t *)0x0) {
      (**(code **)(*plStackX_20 + 0x38))();
    }
    plVar1 = plStackX_8;
    if ((plVar7 == (int64_t *)0x0) &&
       (plVar7 = *(int64_t **)(param_1 + 0x178), plVar1 = plVar7, plVar7 != (int64_t *)0x0)) {
      (**(code **)(*plVar7 + 0x28))(plVar7);
    }
    plStackX_8 = plVar1;
    plocal_var_78 = &system_data_buffer_ptr;
    if (lStack_70 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_70 = 0;
    local_var_60 = local_var_60 & 0xffffffff00000000;
    plocal_var_78 = &system_state_ptr;
  }
  plStack_58 = (int64_t *)0x0;
  lStack_50 = 0;
  local_var_48 = 0;
  local_var_40 = 3;
  function_2e93a0(*(uint64_t *)(param_1 + 0x18),&plStack_58);
  uVar10 = lStack_50 - (int64_t)plStack_58 >> 3;
  uVar9 = (uint)uVar10;
  if (uVar9 == 0) {
    puVar3 = *(void **)(*(int64_t *)(param_1 + 0x18) + 0x290);
    puVar6 = &system_buffer_ptr;
    if (puVar3 != (void *)0x0) {
      puVar6 = puVar3;
    }
    puVar3 = &processed_var_7880_ptr;
  }
  else {
    if (uVar9 != 0) {
      uVar5 = uVar8;
      do {
        if (*(int64_t *)(*plStack_58 + 0x1b8) != *(int64_t *)(plStack_58[uVar5] + 0x1b8))
        goto LAB_18034c020;
        uVar4 = (int)uVar5 + 1;
        uVar5 = (uint64_t)uVar4;
      } while (uVar4 < uVar9);
    }
    if (*(int64_t *)(*plStack_58 + 0x1b8) != 0) {
      if (uVar9 != 0) {
        uVar10 = uVar10 & 0xffffffff;
        do {
          UltraHighFreq_SecurityValidator1(*(uint64_t *)(uVar8 + (int64_t)plStack_58),&plStackX_8);
          uVar8 = uVar8 + 8;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      goto LAB_18034bfb2;
    }
LAB_18034c020:
    puVar3 = *(void **)(*(int64_t *)(param_1 + 0x18) + 0x290);
    puVar6 = &system_buffer_ptr;
    if (puVar3 != (void *)0x0) {
      puVar6 = puVar3;
    }
    puVar3 = &processed_var_7792_ptr;
  }
  SystemCore_Allocator(puVar3,puVar6);
LAB_18034bfb2:
  if (plStack_58 == (int64_t *)0x0) {
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*plVar7 + 0x38))(plVar7);
    }
    return;
  }
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}
uint64_t * function_34c080(uint64_t *param_1)
{
  int64_t *plVar1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 3;
  param_1[4] = 0;
  param_1[7] = 0;
  *(int32_t *)(param_1 + 0x109) = 0;
  plVar1 = (int64_t *)param_1[4];
  param_1[4] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  param_1[5] = 0;
  *(int8_t *)(param_1 + 6) = 0;
  plVar1 = (int64_t *)param_1[7];
  param_1[7] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int32_t *)(param_1 + 0x109) = 0;
  *(int16_t *)(param_1 + 8) = 0x100;
  *(int32_t *)((int64_t)param_1 + 0x844) = 0xffffffff;
  return param_1;
}
// 函数: void function_34c130(int64_t *param_1)
void function_34c130(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x78) {
    function_207ea0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_34c150(uint64_t *param_1)
void function_34c150(uint64_t *param_1)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int32_t uVar4;
  uint64_t *puVar5;
  void *plocal_var_128;
  uint64_t *plocal_var_120;
  int32_t local_var_118;
  uint64_t local_var_110;
  uint64_t local_var_48;
  local_var_48 = 0xfffffffffffffffe;
  puVar5 = param_1;
  SystemCore_SyncController();
  *puVar5 = &processed_var_8496_ptr;
  plVar1 = puVar5 + 0xe;
  *plVar1 = (int64_t)&system_state_ptr;
  puVar5[0xf] = 0;
  *(int32_t *)(puVar5 + 0x10) = 0;
  *plVar1 = (int64_t)&system_data_buffer_ptr;
  puVar5[0x11] = 0;
  puVar5[0xf] = 0;
  *(int32_t *)(puVar5 + 0x10) = 0;
  plVar2 = param_1 + 0x12;
  *plVar2 = (int64_t)&system_state_ptr;
  param_1[0x13] = 0;
  *(int32_t *)(param_1 + 0x14) = 0;
  *plVar2 = (int64_t)&system_data_buffer_ptr;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  *(int32_t *)(param_1 + 0x14) = 0;
  plVar3 = param_1 + 0x16;
  *plVar3 = (int64_t)&system_state_ptr;
  param_1[0x17] = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  *plVar3 = (int64_t)&system_data_buffer_ptr;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  param_1[0x1a] = &system_state_ptr;
  param_1[0x1b] = 0;
  *(int32_t *)(param_1 + 0x1c) = 0;
  param_1[0x1a] = &system_data_buffer_ptr;
  param_1[0x1d] = 0;
  param_1[0x1b] = 0;
  *(int32_t *)(param_1 + 0x1c) = 0;
  (**(code **)(*plVar1 + 0x10))(plVar1,&system_buffer_ptr);
  (**(code **)(*plVar2 + 0x10))(plVar2,&system_buffer_ptr);
  (**(code **)(*plVar3 + 0x10))(plVar3,&system_buffer_ptr);
  param_1[0x1e] = 0x3ff0000000000000;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(int8_t *)(param_1 + 0x22) = 0;
  plocal_var_128 = &system_data_buffer_ptr;
  local_var_110 = 0;
  plocal_var_120 = (uint64_t *)0x0;
  local_var_118 = 0;
  puVar5 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar5 = 0;
  plocal_var_120 = puVar5;
  uVar4 = CoreMemoryPoolCleaner(puVar5);
  local_var_110 = CONCAT44(local_var_110._4_4_,uVar4);
  *puVar5 = 0x6e6f74656c656b53;
  *(int32_t *)(puVar5 + 1) = 0x6d614e20;
  *(int16_t *)((int64_t)puVar5 + 0xc) = 0x65;
  local_var_118 = 0xd;
  SystemNetwork_Processor(param_1,&plocal_var_128,plVar1,0);
  plocal_var_128 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(puVar5);
}
uint64_t * function_34c750(uint64_t *param_1,uint64_t param_2)
{
  int64_t lVar1;
  *param_1 = &processed_var_8496_ptr;
  lVar1 = param_1[0x23];
  if (lVar1 != 0) {
    function_34dbe0(lVar1);
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(lVar1);
  }
  param_1[0x23] = 0;
  param_1[0x1a] = &system_data_buffer_ptr;
  if (param_1[0x1b] != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  param_1[0x1b] = 0;
  *(int32_t *)(param_1 + 0x1d) = 0;
  param_1[0x1a] = &system_state_ptr;
  param_1[0x16] = &system_data_buffer_ptr;
  if (param_1[0x17] != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  param_1[0x17] = 0;
  *(int32_t *)(param_1 + 0x19) = 0;
  param_1[0x16] = &system_state_ptr;
  param_1[0x12] = &system_data_buffer_ptr;
  if (param_1[0x13] != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  param_1[0x13] = 0;
  *(int32_t *)(param_1 + 0x15) = 0;
  param_1[0x12] = &system_state_ptr;
  param_1[0xe] = &system_data_buffer_ptr;
  if (param_1[0xf] != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  param_1[0xf] = 0;
  *(int32_t *)(param_1 + 0x11) = 0;
  param_1[0xe] = &system_state_ptr;
  UIComponent_Manager(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x130);
  }
  return param_1;
}
// 函数: void function_34c880(int64_t param_1)
void function_34c880(int64_t param_1)
{
  int64_t lVar1;
  lVar1 = *(int64_t *)(param_1 + 0x118);
  if (lVar1 != 0) {
    function_34dbe0(lVar1);
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(lVar1);
  }
  *(uint64_t *)(param_1 + 0x118) = 0;
  return;
}
// 函数: void function_34c8f0(uint64_t param_1,int32_t param_2)
void function_34c8f0(uint64_t param_1,int32_t param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  bool bVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t *plStackX_8;
  int64_t **pplStackX_18;
  int64_t *plStackX_20;
  int32_t uVar10;
  uint64_t uVar11;
  uVar11 = 0xfffffffffffffffe;
  uVar8 = 0;
  uVar10 = 0;
  lVar1 = *(int64_t *)(param_1 + 0x18);
  uVar5 = param_1;
  if ((*(int64_t *)(lVar1 + 0x260) != 0) &&
     (lVar6 = *(int64_t *)(lVar1 + 0xf0), *(int64_t *)(lVar1 + 0xf8) - lVar6 >> 3 != 0)) {
    pplStackX_18 = &plStackX_8;
    uVar9 = uVar8;
    do {
      plVar4 = *(int64_t **)(uVar9 + lVar6);
      plStackX_20 = plVar4;
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4);
      }
      function_2ee610(lVar1,plVar4);
      uVar2 = *(uint64_t *)(lVar1 + 0x260);
      plStackX_8 = plVar4;
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4);
      }
      function_2fc0f0(uVar2,plStackX_8);
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      if (*(short *)(lVar1 + 0x2b0) != *(short *)(lVar1 + 0x2b4)) {
        if (*(char *)(lVar1 + 0x2d8) == '\0') {
          function_2e7e20(lVar1);
        }
        else {
          UltraHighFreq_DataProcessor1(*(int64_t *)(lVar1 + 0x28),*(int64_t *)(lVar1 + 0x28) + 0xf8,lVar1 + 0x70)
          ;
        }
        *(int16_t *)(lVar1 + 0x2b0) = *(int16_t *)(lVar1 + 0x2b4);
      }
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4);
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (uint64_t)uVar7;
      uVar9 = uVar9 + 8;
      lVar6 = *(int64_t *)(lVar1 + 0xf0);
      uVar5 = *(int64_t *)(lVar1 + 0xf8) - lVar6 >> 3;
    } while ((uint64_t)(int64_t)(int)uVar7 < uVar5);
  }
  plVar4 = (int64_t *)function_0b3590(uVar5,&pplStackX_18,param_1 + 0xb0,1,uVar10,uVar11);
  if ((*plVar4 == 0) || (*(char *)(param_1 + 0x110) != '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (pplStackX_18 != (int64_t **)0x0) {
    (*(code *)(*pplStackX_18)[7])();
  }
  if (bVar3) {
    function_208610(*(uint64_t *)(param_1 + 0x120),param_2);
    function_208720(*(uint64_t *)(param_1 + 0x120));
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_34cae0(uint64_t param_1)
void function_34cae0(uint64_t param_1)
{
  int8_t stack_array_368 [32];
  int32_t local_var_348;
  void **applocal_var_340 [2];
  uint64_t local_var_330;
  void *aplocal_var_328 [11];
  int32_t local_var_2d0;
  void *plocal_var_2c8;
  int8_t *plocal_var_2c0;
  int32_t local_var_2b8;
  int8_t stack_array_2b0 [72];
  void *plocal_var_268;
  int8_t *plocal_var_260;
  int32_t local_var_258;
  int8_t stack_array_250 [72];
  void *plocal_var_208;
  int8_t *plocal_var_200;
  int32_t local_var_1f8;
  int8_t stack_array_1f0 [72];
  void *plocal_var_1a8;
  int8_t *plocal_var_1a0;
  int32_t local_var_198;
  int8_t stack_array_190 [72];
  void *plocal_var_148;
  int8_t *plocal_var_140;
  int32_t local_var_138;
  int8_t stack_array_130 [72];
  void *plocal_var_e8;
  int8_t *plocal_var_e0;
  int32_t local_var_d8;
  int8_t stack_array_d0 [72];
  void *plocal_var_88;
  int8_t *plocal_var_80;
  int32_t local_var_78;
  int8_t stack_array_70 [72];
  uint64_t local_var_28;
  local_var_330 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_368;
  local_var_348 = 0;
  plocal_var_2c8 = &memory_allocator_3480_ptr;
  plocal_var_2c0 = stack_array_2b0;
  stack_array_2b0[0] = 0;
  local_var_2b8 = 0xd;
  strcpy_s(stack_array_2b0,0x40,&system_data_db48);
  SystemCommunicationProcessor(aplocal_var_328,&plocal_var_2c8);
  local_var_2d0 = 0;
  local_var_348 = 1;
  MathOptimizationEngine0(param_1,applocal_var_340,aplocal_var_328);
  local_var_348 = 0;
  applocal_var_340[0] = aplocal_var_328;
  aplocal_var_328[0] = &system_state_ptr;
  plocal_var_2c8 = &system_state_ptr;
  plocal_var_268 = &memory_allocator_3480_ptr;
  plocal_var_260 = stack_array_250;
  stack_array_250[0] = 0;
  local_var_258 = 0xe;
  strcpy_s(stack_array_250,0x40,&system_data_db38);
  SystemCommunicationProcessor(aplocal_var_328,&plocal_var_268);
  local_var_2d0 = 0;
  local_var_348 = 2;
  MathOptimizationEngine0(param_1,applocal_var_340,aplocal_var_328);
  local_var_348 = 0;
  applocal_var_340[0] = aplocal_var_328;
  aplocal_var_328[0] = &system_state_ptr;
  plocal_var_268 = &system_state_ptr;
  plocal_var_208 = &memory_allocator_3480_ptr;
  plocal_var_200 = stack_array_1f0;
  stack_array_1f0[0] = 0;
  local_var_1f8 = 0x14;
  strcpy_s(stack_array_1f0,0x40,&system_data_db20);
  SystemCommunicationProcessor(aplocal_var_328,&plocal_var_208);
  local_var_2d0 = 0;
  local_var_348 = 4;
  MathOptimizationEngine0(param_1,applocal_var_340,aplocal_var_328);
  local_var_348 = 0;
  applocal_var_340[0] = aplocal_var_328;
  aplocal_var_328[0] = &system_state_ptr;
  plocal_var_208 = &system_state_ptr;
  plocal_var_1a8 = &memory_allocator_3480_ptr;
  plocal_var_1a0 = stack_array_190;
  stack_array_190[0] = 0;
  local_var_198 = 0x10;
  strcpy_s(stack_array_190,0x40,&system_data_db08);
  SystemCommunicationProcessor(aplocal_var_328,&plocal_var_1a8);
  local_var_2d0 = 1;
  local_var_348 = 8;
  MathOptimizationEngine0(param_1,applocal_var_340,aplocal_var_328);
  local_var_348 = 0;
  applocal_var_340[0] = aplocal_var_328;
  aplocal_var_328[0] = &system_state_ptr;
  plocal_var_1a8 = &system_state_ptr;
  plocal_var_148 = &memory_allocator_3480_ptr;
  plocal_var_140 = stack_array_130;
  stack_array_130[0] = 0;
  local_var_138 = 0xf;
  strcpy_s(stack_array_130,0x40,&system_data_db98);
  SystemCommunicationProcessor(aplocal_var_328,&plocal_var_148);
  local_var_2d0 = 1;
  local_var_348 = 0x10;
  MathOptimizationEngine0(param_1,applocal_var_340,aplocal_var_328);
  local_var_348 = 0;
  applocal_var_340[0] = aplocal_var_328;
  aplocal_var_328[0] = &system_state_ptr;
  plocal_var_148 = &system_state_ptr;
  plocal_var_e8 = &memory_allocator_3480_ptr;
  plocal_var_e0 = stack_array_d0;
  stack_array_d0[0] = 0;
  local_var_d8 = 0x15;
  strcpy_s(stack_array_d0,0x40,&system_data_db80);
  SystemCommunicationProcessor(aplocal_var_328,&plocal_var_e8);
  local_var_2d0 = 1;
  local_var_348 = 0x20;
  MathOptimizationEngine0(param_1,applocal_var_340,aplocal_var_328);
  local_var_348 = 0;
  applocal_var_340[0] = aplocal_var_328;
  aplocal_var_328[0] = &system_state_ptr;
  plocal_var_e8 = &system_state_ptr;
  plocal_var_88 = &memory_allocator_3480_ptr;
  plocal_var_80 = stack_array_70;
  stack_array_70[0] = 0;
  local_var_78 = 0x10;
  strcpy_s(stack_array_70,0x40,&system_data_db68);
  SystemCommunicationProcessor(aplocal_var_328,&plocal_var_88);
  local_var_2d0 = 3;
  local_var_348 = 0x40;
  MathOptimizationEngine0(param_1,applocal_var_340,aplocal_var_328);
  local_var_348 = 0;
  applocal_var_340[0] = aplocal_var_328;
  aplocal_var_328[0] = &system_state_ptr;
  plocal_var_88 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_368);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_34cfa0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void function_34cfa0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  char *pcVar1;
  int iVar2;
  uint64_t *puVar3;
  char *pcVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uVar6 = 0xfffffffffffffffe;
  if ((*(int *)(param_2 + 0x10) == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&system_data_db48,param_3,param_4,0xfffffffffffffffe)
     , iVar2 == 0)) {
    function_34d530(param_1);
    lVar5 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x260);
    if (lVar5 != 0) {
      function_2fb960(lVar5,*(int64_t *)(param_1 + 0x18) + 0x70,*(int8_t *)(param_1 + 0x110));
    }
    return;
  }
  puVar3 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13,param_4,uVar6,&system_data_buffer_ptr,0,0,0);
  *(int8_t *)puVar3 = 0;
  CoreMemoryPoolCleaner(puVar3);
  *puVar3 = 0x6f6974616d696e41;
  *(int32_t *)(puVar3 + 1) = 0x614e206e;
  *(int16_t *)((int64_t)puVar3 + 0xc) = 0x656d;
  *(int8_t *)((int64_t)puVar3 + 0xe) = 0;
  if (*(int *)(param_2 + 0x10) == 0xe) {
    pcVar4 = *(char **)(param_2 + 8);
    lVar5 = (int64_t)puVar3 - (int64_t)pcVar4;
    do {
      pcVar1 = pcVar4 + lVar5;
      if (*pcVar4 != *pcVar1) break;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar1 != '\0');
  }
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(puVar3);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_34d530(int32_t param_1)
void function_34d530(int32_t param_1)
{
  int64_t lVar1;
  float *pfVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint64_t *puVar6;
  int64_t in_RCX;
  int64_t lVar7;
  uint64_t uVar8;
  uint uVar9;
  int32_t extraout_XMM0_Da;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t *plStackX_18;
  int64_t *plStackX_20;
  void ***pppuVar11;
  int32_t uVar12;
  void **applocal_var_100 [2];
  code *pcStack_f0;
  void *plocal_var_e8;
  void *plocal_var_d8;
  uint64_t local_var_d0;
  int32_t local_var_c8;
  uint64_t local_var_c0;
  int64_t alStack_b8 [3];
  int32_t local_var_a0;
  uint64_t local_var_98;
  uint64_t local_var_90;
  int16_t local_var_88;
  uint64_t local_var_86;
  uint64_t local_var_7e;
  int16_t local_var_76;
  uint64_t local_var_68;
  int64_t **pplStack_60;
  int64_t *plStack_58;
  int64_t **pplStack_50;
  uint64_t uVar10;
  local_var_68 = 0xfffffffffffffffe;
  uVar8 = 0;
  if ((*(int64_t *)(*(int64_t *)(in_RCX + 0x18) + 0x260) == 0) && (0 < *(int *)(in_RCX + 0x80))) {
    plVar3 = (int64_t *)function_0b3970(in_RCX,&plStackX_18,in_RCX + 0x70,1);
    lVar1 = *plVar3;
    param_1 = extraout_XMM0_Da;
    if (plStackX_18 != (int64_t *)0x0) {
      param_1 = (**(code **)(*plStackX_18 + 0x38))();
    }
    if (lVar1 != 0) {
      plVar3 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x70,8,3);
      *plVar3 = (int64_t)&ui_system_data_1864_ptr;
      *plVar3 = (int64_t)&ui_system_data_1608_ptr;
      plVar3[9] = 0;
      plVar3[10] = 0;
      *plVar3 = (int64_t)&ui_system_data_1912_ptr;
      plVar3[0xc] = 0;
      plVar3[0xd] = 0;
      plVar3[0xb] = 0;
      plStackX_10 = plVar3;
      function_2f8a10(plVar3,lVar1);
      uVar4 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x240,0x10,3);
      plVar5 = (int64_t *)function_2fb490(uVar4);
      plStackX_20 = plVar5;
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5);
      }
      function_2fa090(plVar5,lVar1,plVar3);
      param_1 = function_2eeb00(*(uint64_t *)(in_RCX + 0x18),plVar5);
      lVar1 = *(int64_t *)(in_RCX + 0x18);
      lVar7 = *(int64_t *)(lVar1 + 0xf0);
      if (*(int64_t *)(lVar1 + 0xf8) - lVar7 >> 3 != 0) {
        pplStack_60 = &plStackX_10;
        uVar10 = uVar8;
        do {
          plVar3 = *(int64_t **)(uVar8 + lVar7);
          plStack_58 = plVar3;
          if (plVar3 != (int64_t *)0x0) {
            (**(code **)(*plVar3 + 0x28))(plVar3);
          }
          function_2ee610(lVar1,plVar3);
          uVar4 = *(uint64_t *)(lVar1 + 0x260);
          pplStack_50 = &plStackX_10;
          plStackX_10 = plVar3;
          if (plVar3 != (int64_t *)0x0) {
            (**(code **)(*plVar3 + 0x28))(plVar3);
          }
          param_1 = function_2fc0f0(uVar4,plStackX_10);
          if (plStackX_10 != (int64_t *)0x0) {
            param_1 = (**(code **)(*plStackX_10 + 0x38))();
          }
          if (*(short *)(lVar1 + 0x2b0) != *(short *)(lVar1 + 0x2b4)) {
            if (*(char *)(lVar1 + 0x2d8) == '\0') {
              param_1 = function_2e7e20(lVar1);
            }
            else {
              param_1 = UltraHighFreq_DataProcessor1(*(int64_t *)(lVar1 + 0x28),*(int64_t *)(lVar1 + 0x28) + 0xf8
                                      ,lVar1 + 0x70);
            }
            *(int16_t *)(lVar1 + 0x2b0) = *(int16_t *)(lVar1 + 0x2b4);
          }
          if (plVar3 != (int64_t *)0x0) {
            param_1 = (**(code **)(*plVar3 + 0x38))(plVar3);
          }
          uVar9 = (int)uVar10 + 1;
          uVar10 = (uint64_t)uVar9;
          uVar8 = uVar8 + 8;
          lVar7 = *(int64_t *)(lVar1 + 0xf0);
        } while ((uint64_t)(int64_t)(int)uVar9 <
                 (uint64_t)(*(int64_t *)(lVar1 + 0xf8) - lVar7 >> 3));
      }
      if (plVar5 != (int64_t *)0x0) {
        param_1 = (**(code **)(*plVar5 + 0x38))(plVar5);
      }
    }
  }
  lVar1 = *(int64_t *)(*(int64_t *)(in_RCX + 0x18) + 0x260);
  function_0b3510(param_1,&plStackX_8,in_RCX + 0x90);
  if (((lVar1 != 0) && (plStackX_8 != (int64_t *)0x0)) && (0.0 < *(double *)(in_RCX + 0xf0))) {
    plocal_var_d8 = &system_data_buffer_ptr;
    local_var_c0 = 0;
    local_var_d0 = 0;
    local_var_c8 = 0;
    plStackX_10 = alStack_b8;
    alStack_b8[0] = 0;
    alStack_b8[1] = 0;
    alStack_b8[2] = 0;
    local_var_a0 = 3;
    local_var_88 = 0;
    local_var_98 = 0;
    local_var_90 = 0;
    local_var_76 = 0;
    local_var_86 = 0;
    local_var_7e = 0;
    plVar3 = *(int64_t **)(plStackX_8[0x15] + 0x88);
    pcStack_f0 = (code *)&processed_var_5296_ptr;
    plocal_var_e8 = &processed_var_5280_ptr;
    applocal_var_100[0] = &plocal_var_d8;
    pppuVar11 = applocal_var_100;
    (**(code **)(*plVar3 + 0x60))(plVar3,&system_data_c8f0,plStackX_8[0x15] + 0xc,0,pppuVar11);
    uVar12 = (int32_t)((uint64_t)pppuVar11 >> 0x20);
    if (pcStack_f0 != (code *)0x0) {
      (*pcStack_f0)(applocal_var_100,0,0);
    }
    lVar1 = alStack_b8[0];
    uVar4 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x1b0,8,3);
    puVar6 = (uint64_t *)function_34dd90(uVar4);
    *(uint64_t **)(in_RCX + 0x118) = puVar6;
    if ('\0' < (char)plStackX_8[0x17]) {
      *puVar6 = 0;
      puVar6[1] = 0;
      pfVar2 = *(float **)(lVar1 + 8);
      uVar8 = CONCAT44(uVar12,((pfVar2[(uint64_t)*(ushort *)(lVar1 + 0x10) - 1] - *pfVar2) + 1.0) *
                              0.033333335);
      function_404050(*(uint64_t *)(in_RCX + 0x118),&plStackX_8,(int)*pfVar2,
                    (int)pfVar2[(uint64_t)*(ushort *)(lVar1 + 0x10) - 1],uVar8);
      function_300970(*(uint64_t *)(*(int64_t *)(in_RCX + 0x18) + 0x260),0,
                    *(uint64_t *)(in_RCX + 0x118),0x4004,uVar8 & 0xffffffff00000000,
                    (float)*(double *)(in_RCX + 0xf0));
    }
    function_0739f0(&plocal_var_d8);
  }
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}