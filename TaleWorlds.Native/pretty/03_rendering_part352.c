#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part352.c - 12 个函数
// 函数: void function_459960(uint64_t param_1,uint64_t *param_2,int32_t param_3,uint64_t *param_4,
void function_459960(uint64_t param_1,uint64_t *param_2,int32_t param_3,uint64_t *param_4,
                  int32_t *param_5)
{
  int32_t astack_special_x_10 [6];
  function_15b160(param_1,param_1 & 0xffffffff,*param_2,param_3,*param_4,astack_special_x_10);
  *param_5 = astack_special_x_10[0];
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t * function_4599a0(int32_t *param_1)
{
  int32_t uVar1;
  int64_t *plVar2;
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_14;
  plVar2 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x8b0,0x10,3,0xfffffffffffffffe);
  function_301040(plVar2);
  *plVar2 = (int64_t)&processed_var_9328_ptr;
  *(int32_t *)((int64_t)plVar2 + 0x889) = 0x10000;
  *(int8_t *)((int64_t)plVar2 + 0xde) = 1;
  *(int32_t *)(plVar2 + 0x112) = 0;
  *(int8_t *)((int64_t)plVar2 + 0xdc) = 0;
  plVar2[0x110] = 0;
  *(int8_t *)(plVar2 + 0x111) = 1;
  *(int8_t *)((int64_t)plVar2 + 0x88d) = 0;
  *(int32_t *)((int64_t)plVar2 + 0x894) = 0xffffffff;
  *(uint64_t *)((int64_t)plVar2 + 0x89c) = 0;
  *(uint64_t *)((int64_t)plVar2 + 0x8a4) = 0;
  *(int32_t *)((int64_t)plVar2 + 0x8ac) = 0;
  *(int8_t *)(plVar2 + 3) = 1;
  *(int32_t *)(plVar2 + 0x113) = 2;
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  (**(code **)(*plVar2 + 0x28))(plVar2);
  local_var_20 = SUB84(plVar2,0);
  local_var_1c = (int32_t)((uint64_t)plVar2 >> 0x20);
  *param_1 = local_var_20;
  param_1[1] = local_var_1c;
  param_1[2] = uVar1;
  param_1[3] = local_var_14;
  (**(code **)(*plVar2 + 0x38))(plVar2);
  return param_1;
}
// WARNING: Removing unreachable block (ram,0x000180459b92)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * function_459ae0(uint64_t *param_1)
{
  int64_t *plVar1;
  int64_t *plStackX_8;
  uint64_t uVar2;
  int32_t local_var_38;
  int32_t local_var_34;
  void *plocal_var_30;
  int64_t lStack_28;
  uVar2 = 0xfffffffffffffffe;
  CoreMemoryPoolValidator(&plocal_var_30);
  SystemCore_GarbageCollector(system_resource_state,&plStackX_8,&plocal_var_30,1,uVar2);
  plVar1 = plStackX_8;
  if (plStackX_8 == (int64_t *)0x0) {
    local_var_38 = 0xffffffff;
    plocal_var_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  else {
    local_var_38 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plVar1 + 0x28))(plVar1);
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    plocal_var_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  *param_1 = plVar1;
  param_1[1] = CONCAT44(local_var_34,local_var_38);
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
code * function_459be0(int64_t param_1,char param_2)
{
  int64_t *plVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int iVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t stack_array_70 [2];
  uint64_t stack_array_60 [2];
  uint64_t local_var_50;
  uint64_t local_var_48;
  code *pcStack_40;
  code *pcStack_38;
  uint64_t local_var_30;
  uint64_t local_var_28;
  code *pcStack_20;
  code *pcStack_18;
  uint64_t local_var_10;
  pcStack_38 = (code *)0xfffffffffffffffe;
  if (param_2 == '\0') {
    local_var_30 = 0;
    local_var_28 = 0;
    pcStack_20 = (code *)0x0;
    pcStack_18 = _guard_check_icall;
    stack_array_60[0] = 0x180459c30;
    SystemCore_DecryptionManager(param_1,0,0,&local_var_30);
    if (pcStack_20 != (code *)0x0) {
      stack_array_60[0] = 0x180459c47;
      pcStack_20 = (code *)(*pcStack_20)(&local_var_30,0,0);
    }
    return pcStack_20;
  }
  uVar6 = 0xfffffffffffffffe;
  while( true ) {
    *(int64_t *)(param_1 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    if (*(uint64_t **)(param_1 + 0x1f0) != (uint64_t *)0x0) {
      plVar1 = (int64_t *)**(uint64_t **)(param_1 + 0x1f0);
      (**(code **)(*plVar1 + 0xb0))(plVar1,stack_array_60);
      puVar2 = *(uint64_t **)(param_1 + 0x1f0);
      *(int32_t *)((int64_t)puVar2 + 0x44) = *(int32_t *)(system_parameter_buffer + 0x2ca8);
      iVar4 = (**(code **)(*(int64_t *)*puVar2 + 0xb0))((int64_t *)*puVar2,stack_array_70);
      uVar5 = (**(code **)(*(int64_t *)*puVar2 + 0xa8))();
      *(int32_t *)((int64_t)puVar2 + 0x4c) = uVar5;
      if (iVar4 != 0) {
        UtilitiesSystem_PerformanceMonitor(&ui_system_data_128_ptr,iVar4);
      }
      pcStack_20 = (code *)0x0;
      pcStack_18 = (code *)((uint64_t)pcStack_18 & 0xffffffff00000000);
      local_var_30 = (**(code **)(**(int64_t **)(render_system_data_memory + 0x260) + 0xc0))
                            (*(int64_t **)(render_system_data_memory + 0x260),stack_array_70[0]);
      local_var_28 = function_179480(render_system_data_memory + 0x228,stack_array_70[0],stack_array_70);
      lVar3 = puVar2[2];
      *(uint64_t *)(lVar3 + 0x170) = local_var_30;
      *(uint64_t *)(lVar3 + 0x178) = local_var_28;
      *(code **)(lVar3 + 0x180) = pcStack_20;
      *(code **)(lVar3 + 0x188) = pcStack_18;
      *(uint64_t *)(lVar3 + 400) = local_var_10;
      lVar3 = puVar2[2];
      *(int64_t *)(lVar3 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
      LOCK();
      *(int32_t *)(lVar3 + 0x380) = 2;
      UNLOCK();
      LOCK();
      *(int8_t *)(lVar3 + 900) = 1;
      UNLOCK();
    }
    if ((*(int64_t *)(param_1 + 0x170) != 0) || (*(int64_t *)(param_1 + 0x178) != 0))
    goto LAB_18023ab3f;
    if (*(int64_t *)(param_1 + 0xa8) != 0) break;
    if (*(int *)(param_1 + 0x160) == 2) {
      function_23ab60(param_1);
LAB_18023ab3f:
      return (code *)(param_1 + 0x168);
    }
    param_1 = function_0bd410(render_system_data_memory);
  }
  local_var_50 = 0;
  local_var_48 = 0;
  pcStack_40 = (code *)0x0;
  pcStack_38 = _guard_check_icall;
  SystemCore_DecryptionManager(param_1,1,0xffffffff,&local_var_50,uVar6);
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(&local_var_50,0,0);
  }
  goto LAB_18023ab3f;
}
// WARNING: Removing unreachable block (ram,0x000180459db0)
uint64_t * function_459c50(uint64_t *param_1,uint64_t param_2,uint64_t param_3)
{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t uVar3;
  int64_t *plStackX_8;
  int64_t *plStack_80;
  uint64_t local_var_78;
  code *pcStack_70;
  code *pcStack_68;
  void *plocal_var_60;
  int64_t *plStack_58;
  int32_t local_var_48;
  void *plocal_var_40;
  int64_t lStack_38;
  CoreMemoryPoolValidator(&plocal_var_40);
  uVar2 = CoreMemoryPoolValidator(&plocal_var_60,param_3);
  function_0b2cd0(uVar2,&plStackX_8,&plocal_var_40,&plocal_var_60);
  plVar1 = plStackX_8;
  if (plStackX_8 == (int64_t *)0x0) {
    local_var_78 = CONCAT44(local_var_78._4_4_,0xffffffff);
    plStack_80 = plStackX_8;
    plocal_var_60 = &system_data_buffer_ptr;
    if (plStack_58 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plStack_58 = plStackX_8;
    local_var_48 = 0;
    plocal_var_60 = &system_state_ptr;
    plocal_var_40 = &system_data_buffer_ptr;
    if (lStack_38 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  else {
    uVar3 = (**(code **)(*plStackX_8 + 0x28))(plStackX_8);
    uVar2 = 0xffffffff;
    function_0b4e00(uVar3,plVar1,0xffffffff);
    uVar3 = (**(code **)(*plVar1 + 0x38))(plVar1);
    plStack_80 = (int64_t *)0x0;
    local_var_78 = 0;
    pcStack_70 = (code *)0x0;
    pcStack_68 = _guard_check_icall;
    function_0b6f90(uVar3,plStackX_8,&plStack_80);
    if (pcStack_70 != (code *)0x0) {
      (*pcStack_70)(&plStack_80,0,0);
    }
    plVar1 = plStackX_8;
    if (plStackX_8 != (int64_t *)0x0) {
      uVar2 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    }
    plStack_80 = plVar1;
    local_var_78 = CONCAT44(local_var_78._4_4_,uVar2);
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    plocal_var_60 = &system_data_buffer_ptr;
    if (plStack_58 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plStack_58 = (int64_t *)0x0;
    local_var_48 = 0;
    plocal_var_60 = &system_state_ptr;
    plocal_var_40 = &system_data_buffer_ptr;
    if (lStack_38 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  *param_1 = plStack_80;
  param_1[1] = local_var_78;
  return param_1;
}
// WARNING: Removing unreachable block (ram,0x000180459ee5)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * function_459e30(uint64_t *param_1)
{
  int64_t *plStackX_8;
  int64_t *plStack_38;
  int32_t local_var_30;
  int32_t local_var_2c;
  void *plocal_var_28;
  int64_t lStack_20;
  CoreMemoryPoolValidator(&plocal_var_28);
  SystemCore_GarbageCollector(system_resource_state,&plStackX_8,&plocal_var_28,0);
  plStack_38 = plStackX_8;
  if (plStackX_8 == (int64_t *)0x0) {
    plStack_38 = (int64_t *)0x0;
    local_var_30 = 0xffffffff;
    plocal_var_28 = &system_data_buffer_ptr;
    if (lStack_20 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  else {
    local_var_30 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plStack_38 + 0x28))(plStack_38);
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    plocal_var_28 = &system_data_buffer_ptr;
    if (lStack_20 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  *param_1 = plStack_38;
  param_1[1] = CONCAT44(local_var_2c,local_var_30);
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_459f80(int64_t *param_1)
void function_459f80(int64_t *param_1)
{
  uint64_t uVar1;
  int64_t **pplVar2;
  int64_t **pplStackX_8;
  int64_t **pplStackX_10;
  int64_t ***ppplStackX_18;
  int64_t *aplStack_30 [2];
  void *plocal_var_20;
  code *pcStack_18;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3,0xfffffffffffffffe);
  pplStackX_8 = aplStack_30;
  plocal_var_20 = &processed_var_7840_ptr;
  pcStack_18 = function_45af40;
  aplStack_30[0] = param_1;
  pplVar2 = (int64_t **)SystemCore_ErrorHandler(uVar1,aplStack_30);
  pplStackX_10 = pplVar2;
  if (pplVar2 != (int64_t **)0x0) {
    (*(code *)(*pplVar2)[5])(pplVar2);
  }
  if ((void *)*param_1 == &processed_var_8720_ptr) {
    LOCK();
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    UNLOCK();
  }
  else {
    (**(code **)((void *)*param_1 + 0x28))(param_1);
  }
  uVar1 = system_context_ptr;
  ppplStackX_18 = &pplStackX_8;
  pplStackX_8 = pplVar2;
  if (pplVar2 != (int64_t **)0x0) {
    (*(code *)(*pplVar2)[5])(pplVar2);
  }
  function_05e300(uVar1,&pplStackX_8);
  if (pplVar2 != (int64_t **)0x0) {
    (*(code *)(*pplVar2)[7])(pplVar2);
  }
  return;
}
int function_45a070(int64_t param_1)
{
  int iVar1;
  int iVar2;
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x324);
    iVar1 = SystemFunction_000180225d90(iVar2);
    iVar1 = iVar1 * (uint)*(ushort *)(param_1 + 0x330) * (uint)*(ushort *)(param_1 + 0x32e) *
            (uint)*(ushort *)(param_1 + 0x32c);
    if (iVar2 == 0xe) {
      iVar1 = (int)((double)iVar1 * 0.5);
    }
    if (1 < *(byte *)(param_1 + 0x335)) {
      iVar1 = (int)((double)iVar1 * 1.333333);
    }
    return iVar1;
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_45a100(int32_t *param_1,int64_t param_2,int32_t param_3,int32_t param_4,
void function_45a100(int32_t *param_1,int64_t param_2,int32_t param_3,int32_t param_4,
                  int8_t param_5,char param_6,int8_t param_7,char param_8)
{
  int64_t lVar1;
  int64_t *plVar2;
  int8_t stack_array_158 [32];
  int32_t local_var_138;
  int32_t local_var_134;
  int32_t local_var_130;
  int32_t local_var_12c;
  int32_t local_var_128;
  uint64_t local_var_124;
  uint64_t local_var_11c;
  int8_t local_var_114;
  int32_t local_var_113;
  int16_t local_var_10f;
  int8_t local_var_10d;
  int8_t local_var_10c;
  int32_t local_var_108;
  int8_t local_var_104;
  uint64_t local_var_100;
  int32_t local_var_f8;
  int32_t local_var_f4;
  uint64_t local_var_f0;
  int64_t *plStack_e8;
  void *plocal_var_d8;
  int8_t *plocal_var_d0;
  int32_t local_var_c8;
  int8_t stack_array_c0 [136];
  uint64_t local_var_38;
  local_var_f0 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158;
  local_var_130 = 1;
  local_var_12c = 1;
  local_var_113 = 1;
  local_var_10f = 0;
  local_var_10d = 0;
  local_var_108 = 0xffffffff;
  local_var_104 = 0;
  local_var_128 = 1;
  local_var_114 = param_5;
  local_var_10c = param_7;
  local_var_124 = 0;
  local_var_11c = 0;
  plocal_var_d8 = &memory_allocator_3432_ptr;
  plocal_var_d0 = stack_array_c0;
  local_var_c8 = 0;
  stack_array_c0[0] = 0;
  local_var_138 = param_3;
  local_var_134 = param_4;
  if (param_2 != 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    local_var_c8 = (int32_t)lVar1;
    strcpy_s(stack_array_c0,0x80,param_2);
  }
  plVar2 = (int64_t *)SystemInitializer(system_resource_state,&local_var_100,&plocal_var_d8,&local_var_138);
  plVar2 = (int64_t *)*plVar2;
  plStack_e8 = plVar2;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  if (local_var_100 != (int64_t *)0x0) {
    (**(code **)(*local_var_100 + 0x38))();
  }
  plocal_var_d8 = &system_state_ptr;
  if (param_6 != '\0') {
    *(int32_t *)((int64_t)plVar2 + 0x36c) = 1;
  }
  if (param_8 != '\0') {
    *(uint *)(plVar2 + 0x65) = *(uint *)(plVar2 + 0x65) | 0x20000000;
  }
  local_var_100 = plVar2;
  local_var_f8 = 0xffffffff;
  if (plVar2 != (int64_t *)0x0) {
    local_var_f8 = (**(code **)(*plVar2 + 8))(plVar2);
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  *param_1 = (int32_t)local_var_100;
  param_1[1] = local_var_100._4_4_;
  param_1[2] = local_var_f8;
  param_1[3] = local_var_f4;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_45a2b0(int32_t *param_1,int64_t param_2,int32_t param_3,int32_t param_4)
void function_45a2b0(int32_t *param_1,int64_t param_2,int32_t param_3,int32_t param_4)
{
  int64_t lVar1;
  int64_t *plVar2;
  int32_t uVar3;
  int8_t stack_array_138 [32];
  int32_t local_var_118;
  int32_t local_var_114;
  int32_t local_var_110;
  int32_t local_var_10c;
  int32_t local_var_108;
  int32_t local_var_104;
  int32_t local_var_100;
  uint64_t local_var_f8;
  int32_t local_var_f0;
  int32_t local_var_ec;
  uint64_t local_var_e8;
  int64_t *plStack_e0;
  void *plocal_var_d8;
  int8_t *plocal_var_d0;
  int32_t local_var_c8;
  int8_t stack_array_c0 [136];
  uint64_t local_var_38;
  local_var_e8 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_138;
  local_var_110 = 1;
  local_var_104 = 0x101018a;
  uVar3 = 0;
  local_var_108 = 0;
  local_var_100 = 0xffffffff;
  local_var_10c = 0x19;
  plocal_var_d8 = &memory_allocator_3432_ptr;
  plocal_var_d0 = stack_array_c0;
  local_var_c8 = 0;
  stack_array_c0[0] = 0;
  local_var_118 = param_3;
  local_var_114 = param_4;
  if (param_2 != 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    local_var_c8 = (int32_t)lVar1;
    uVar3 = strcpy_s(stack_array_c0,0x80,param_2);
  }
  plVar2 = (int64_t *)function_0b1d80(uVar3,&local_var_f8,&plocal_var_d8,&local_var_118);
  plVar2 = (int64_t *)*plVar2;
  plStack_e0 = plVar2;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  if (local_var_f8 != (int64_t *)0x0) {
    (**(code **)(*local_var_f8 + 0x38))();
  }
  plocal_var_d8 = &system_state_ptr;
  local_var_f8 = plVar2;
  local_var_f0 = 0xffffffff;
  if (plVar2 != (int64_t *)0x0) {
    local_var_f0 = (**(code **)(*plVar2 + 8))(plVar2);
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  *param_1 = (int32_t)local_var_f8;
  param_1[1] = local_var_f8._4_4_;
  param_1[2] = local_var_f0;
  param_1[3] = local_var_ec;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_138);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_45a410(int64_t *param_1)
void function_45a410(int64_t *param_1)
{
  char cVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint uVar6;
  void *plocal_var_30;
  int64_t lStack_28;
  CoreMemoryPoolValidator(&plocal_var_30);
  (**(code **)(param_1[2] + 0x10))();
  uVar6 = 0;
  if ((int)param_1[4] != 0) {
    lVar4 = 0;
    do {
      cVar1 = *(char *)(param_1[3] + lVar4);
      if ((byte)(cVar1 + 0xbfU) < 0x1a) {
        *(char *)(param_1[3] + lVar4) = cVar1 + ' ';
      }
      uVar6 = uVar6 + 1;
      lVar4 = lVar4 + 1;
    } while (uVar6 < *(uint *)(param_1 + 4));
  }
  lVar2 = system_resource_state;
  lVar4 = system_resource_state + 0x770;
  iVar3 = _Mtx_lock(lVar4);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  for (puVar5 = *(uint64_t **)(lVar2 + 0x6c0);
      (puVar5 != *(uint64_t **)(lVar2 + 0x6c8) && ((int64_t *)*puVar5 != param_1));
      puVar5 = puVar5 + 1) {
  }
  function_0ba050();
  (**(code **)(*param_1 + 0x38))(param_1);
  iVar3 = _Mtx_unlock(lVar4);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  function_2abe00(lVar2 + 0xa0,param_1);
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// 函数: void function_45a570(int64_t param_1)
void function_45a570(int64_t param_1)
{
  int64_t *plVar1;
  if (param_1 != 0) {
    plVar1 = *(int64_t **)(param_1 + 0x370);
    *(uint64_t *)(param_1 + 0x370) = 0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  return;
}
// 函数: void function_45a5b0(int64_t param_1,int64_t *param_2)
void function_45a5b0(int64_t param_1,int64_t *param_2)
{
  int64_t *plVar1;
  if (param_1 != 0) {
    if (param_2 != (int64_t *)0x0) {
      (**(code **)(*param_2 + 0x28))(param_2);
    }
    plVar1 = *(int64_t **)(param_1 + 0x370);
    *(int64_t **)(param_1 + 0x370) = param_2;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  return;
}
int32_t * function_45a610(int32_t *param_1,int64_t param_2)
{
  int64_t *plVar1;
  int32_t uVar2;
  int64_t *plStackX_8;
  int32_t local_var_60;
  int32_t local_var_5c;
  int32_t local_var_54;
  void *plocal_var_50;
  int64_t lStack_48;
  int32_t local_var_38;
  void *plocal_var_30;
  int64_t lStack_28;
  function_0bbc40(&plocal_var_30);
  uVar2 = CoreMemoryPoolValidator(&plocal_var_50,param_2 + 0x204);
  function_0b2cd0(uVar2,&plStackX_8,&plocal_var_50,&plocal_var_30);
  plVar1 = plStackX_8;
  if (plStackX_8 == (int64_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  local_var_60 = SUB84(plVar1,0);
  local_var_5c = (int32_t)((uint64_t)plVar1 >> 0x20);
  *param_1 = local_var_60;
  param_1[1] = local_var_5c;
  param_1[2] = uVar2;
  param_1[3] = local_var_54;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  plocal_var_50 = &system_data_buffer_ptr;
  if (lStack_48 == 0) {
    lStack_48 = 0;
    local_var_38 = 0;
    plocal_var_50 = &system_state_ptr;
    plocal_var_30 = &system_data_buffer_ptr;
    if (lStack_28 == 0) {
      return param_1;
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_45a730(uint64_t param_1,uint64_t *param_2,int16_t param_3,int16_t param_4)
void function_45a730(uint64_t param_1,uint64_t *param_2,int16_t param_3,int16_t param_4)
{
  uint64_t uVar1;
  int8_t stack_array_118 [32];
  int64_t *plStack_f8;
  uint64_t local_var_c0;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  int16_t local_var_98;
  int8_t local_var_96;
  uint64_t local_var_94;
  uint64_t local_var_8c;
  uint64_t local_var_84;
  uint64_t local_var_7c;
  uint64_t local_var_74;
  uint64_t local_var_6c;
  uint64_t local_var_64;
  uint64_t local_var_5c;
  uint64_t local_var_54;
  int16_t local_var_4c;
  int16_t local_var_4a;
  int16_t local_var_48;
  int32_t local_var_46;
  int8_t local_var_42;
  uint64_t local_var_38;
  local_var_c0 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_118;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3b0,0x10,3);
  plStack_f8 = (int64_t *)RenderingSystem_23A2E0(uVar1,0);
  if (plStack_f8 != (int64_t *)0x0) {
    (**(code **)(*plStack_f8 + 0x28))(plStack_f8);
  }
  local_var_a8 = 0;
  local_var_a0 = 0;
  local_var_98 = 0;
  local_var_96 = 3;
  local_var_42 = 0;
  local_var_94 = 0;
  local_var_8c = 0;
  local_var_84 = 0;
  local_var_7c = 0;
  local_var_74 = 0;
  local_var_6c = 0;
  local_var_64 = 0;
  local_var_5c = 0;
  _local_var_4c = CONCAT22(param_4,param_3);
  local_var_46 = 0x1020001;
  local_var_48 = 1;
  local_var_54 = 7;
  function_2a1bc0(&local_var_a8);
// WARNING: Subroutine does not return
  memcpy(local_var_a8,*param_2,(int64_t)*(int *)(param_2 + 1));
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_45a910(int32_t *param_1,uint64_t *param_2)
void function_45a910(int32_t *param_1,uint64_t *param_2)
{
  int64_t *plVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int8_t stack_array_118 [48];
  int32_t local_var_e8;
  int64_t *plStack_d8;
  uint64_t local_var_d0;
  uint64_t local_var_c8;
  int64_t *plStack_c0;
  int64_t **pplStack_b8;
  void *plocal_var_b0;
  code *pcStack_a8;
  uint64_t local_var_a0;
  uint64_t **pplocal_var_98;
  int64_t alStack_88 [2];
  int16_t local_var_78;
  int8_t local_var_76;
  uint64_t local_var_74;
  uint64_t local_var_6c;
  uint64_t local_var_64;
  uint64_t local_var_5c;
  uint64_t local_var_54;
  uint64_t local_var_4c;
  uint64_t local_var_44;
  uint64_t local_var_3c;
  uint64_t local_var_34;
  int32_t local_var_2c;
  int16_t local_var_28;
  int32_t local_var_26;
  int8_t local_var_22;
  uint64_t local_var_18;
  local_var_a0 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_118;
  uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3b0,0x10,3);
  plStack_d8 = (int64_t *)RenderingSystem_23A2E0(uVar3,0);
  if (plStack_d8 != (int64_t *)0x0) {
    (**(code **)(*plStack_d8 + 0x28))(plStack_d8);
  }
  alStack_88[0] = 0;
  alStack_88[1] = 0;
  local_var_78 = 0;
  local_var_76 = 3;
  local_var_26 = 0;
  local_var_34 = 0;
  local_var_2c = 0;
  local_var_28 = 0;
  local_var_22 = 0;
  local_var_74 = 0;
  local_var_6c = 0;
  local_var_64 = 0;
  local_var_5c = 0;
  local_var_54 = 0;
  local_var_4c = 0;
  local_var_44 = 0;
  local_var_3c = 0;
  local_var_e8 = 0;
  function_2a7bf0(*param_2,*(int32_t *)(param_2 + 1),alStack_88);
  function_2a9200(alStack_88);
  pplocal_var_98 = &plStack_c0;
  local_var_d0 = alStack_88;
  local_var_c8 = &plStack_d8;
  plocal_var_b0 = &processed_var_7664_ptr;
  pcStack_a8 = function_45ae70;
  plStack_c0 = local_var_d0;
  pplStack_b8 = local_var_c8;
  SystemCore_SecurityManager(&plStack_c0);
  plVar1 = plStack_d8;
  if (plStack_d8 == (int64_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plStack_d8 + 8))(plStack_d8);
  }
  local_var_d0 = plVar1;
  local_var_c8._0_4_ = uVar2;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  *param_1 = (int32_t)local_var_d0;
  param_1[1] = local_var_d0._4_4_;
  param_1[2] = (int32_t)local_var_c8;
  param_1[3] = local_var_c8._4_4_;
  if (local_var_78._1_1_ == '\0') {
    if (((char)local_var_78 == '\0') && (alStack_88[0] != 0)) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    alStack_88[0] = 0;
    alStack_88[1] = 0;
    local_var_78 = 0;
  }
  if (plStack_d8 != (int64_t *)0x0) {
    (**(code **)(*plStack_d8 + 0x38))();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_118);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_45aad0(void)
void function_45aad0(void)
{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  lVar5 = system_resource_state;
  lVar1 = system_resource_state + 0x900;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  SystemCore_FileSystem(system_context_ptr);
  plVar4 = *(int64_t **)(lVar5 + 0xa0);
  if (plVar4 != *(int64_t **)(lVar5 + 0xa8)) {
    do {
      plVar2 = (int64_t *)*plVar4;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2);
      }
      if (((int)plVar2[0x70] == 2) && ((*(uint *)(plVar2 + 0x65) & 0x20000000) == 0)) {
        SystemCore_NetworkHandler(plVar2,0);
      }
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != *(int64_t **)(lVar5 + 0xa8));
  }
  CoreEngine_SystemInitializer(*(uint64_t *)(*(int64_t *)(system_context_ptr + 8) + 8));
  lVar5 = system_message_buffer + 0x20;
  iVar3 = _Mtx_lock(lVar5);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  iVar3 = _Mtx_unlock(lVar5);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  iVar3 = _Mtx_unlock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}
int32_t function_45ac10(void)
{
  int32_t *puVar1;
  puVar1 = (int32_t *)function_23ced0();
  return *puVar1;
}
int64_t * function_45ac20(int64_t *param_1,int64_t param_2)
{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t local_var_c;
  plVar1 = *(int64_t **)(param_2 + 0x370);
  if (plVar1 == (int64_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  *param_1 = (int64_t)plVar1;
  param_1[1] = CONCAT44(local_var_c,uVar2);
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_45ac90(int64_t *param_1,int64_t param_2)
void function_45ac90(int64_t *param_1,int64_t param_2)
{
  int64_t lVar1;
  uint64_t uVar3;
  void **ppuVar4;
  void *puVar5;
  int8_t stack_array_268 [32];
  void **pplocal_var_248;
  void ***ppplocal_var_240;
  uint64_t local_var_238;
  void **pplocal_var_230;
  void *plocal_var_228;
  int8_t *plocal_var_220;
  int32_t local_var_218;
  int8_t stack_array_210 [128];
  int32_t local_var_190;
  int64_t *plStack_188;
  uint64_t local_var_180;
  int32_t local_var_178;
  void *plocal_var_148;
  void *plocal_var_140;
  uint local_var_138;
  uint64_t local_var_28;
  int64_t lVar2;
  local_var_238 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_268;
  function_6240a0();
  lVar1 = -1;
  do {
    lVar2 = lVar1;
    lVar1 = lVar2 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  if ((0 < (int)lVar1) && (local_var_138 + (int)lVar1 < 0xff)) {
// WARNING: Subroutine does not return
    memcpy(plocal_var_140 + local_var_138,param_2,(int64_t)((int)lVar2 + 2));
  }
  pplocal_var_248 = &plocal_var_228;
  plocal_var_228 = &memory_allocator_3432_ptr;
  plocal_var_220 = stack_array_210;
  local_var_218 = 0;
  stack_array_210[0] = 0;
  local_var_190 = 0x2d;
  local_var_178 = 3;
  uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,3);
  puVar5 = &system_buffer_ptr;
  if (plocal_var_140 != (void *)0x0) {
    puVar5 = plocal_var_140;
  }
  local_var_180 = CoreMemoryPoolValidator(uVar3,puVar5);
  plStack_188 = param_1;
  (**(code **)(*param_1 + 0x28))(param_1);
  uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
  ppuVar4 = (void **)SystemCore_StreamController(uVar3,&plocal_var_228);
  pplocal_var_230 = ppuVar4;
  if (ppuVar4 != (void **)0x0) {
    (**(code **)(*ppuVar4 + 0x28))(ppuVar4);
  }
  uVar3 = system_context_ptr;
  ppplocal_var_240 = &pplocal_var_248;
  pplocal_var_248 = ppuVar4;
  if (ppuVar4 != (void **)0x0) {
    (**(code **)(*ppuVar4 + 0x28))(ppuVar4);
  }
  SystemPerformance_Monitor(uVar3,&pplocal_var_248);
  if (ppuVar4 != (void **)0x0) {
    (**(code **)(*ppuVar4 + 0x38))(ppuVar4);
  }
  ppplocal_var_240 = (void ***)&plocal_var_228;
  plocal_var_228 = &system_state_ptr;
  plocal_var_148 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_268);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_45ae70(uint64_t *param_1)
void function_45ae70(uint64_t *param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  int32_t uVar3;
  int8_t stack_array_68 [32];
  int16_t stack_array_48 [2];
  int16_t local_var_44;
  uint64_t local_var_40;
  int32_t local_var_38;
  uint local_var_20;
  uint64_t local_var_18;
  int32_t local_var_10;
  local_var_10 = 0xffffffff;
  local_var_18 = *(uint64_t *)param_1[1];
  local_var_40 = 0x18045aea3;
  function_0a5810(system_message_buffer,*param_1,1);
  lVar2 = *(int64_t *)param_1[1];
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_68;
  plVar1 = *(int64_t **)(lVar2 + 0x170);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,stack_array_48);
    *(int16_t *)(lVar2 + 0x332) = local_var_40._4_2_;
    *(int16_t *)(lVar2 + 0x330) = 1;
    if ((local_var_20 & 4) != 0) {
      *(uint *)(lVar2 + 0x328) = *(uint *)(lVar2 + 0x328) | 0x2000;
    }
    *(byte *)(lVar2 + 0x355) = (byte)local_var_20 & 1;
    uVar3 = SystemFunction_0001800aada0(local_var_38);
    *(int32_t *)(lVar2 + 0x324) = uVar3;
    *(int16_t *)(lVar2 + 0x32e) = local_var_44;
    *(int8_t *)(lVar2 + 0x335) = (int8_t)local_var_40;
    *(int16_t *)(lVar2 + 0x32c) = stack_array_48[0];
    *(int8_t *)(lVar2 + 0x334) = 2;
  }
  *(uint *)(lVar2 + 0x35c) = (uint)*(byte *)(lVar2 + 0x335);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_68);
}