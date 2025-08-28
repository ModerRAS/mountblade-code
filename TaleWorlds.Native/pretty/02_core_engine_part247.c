#include "SystemDataAdvancedValidator_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part247.c - 5 个函数
// 函数: void function_2132d0(int64_t param_1)
void function_2132d0(int64_t param_1)
{
  int iVar1;
  int64_t lVar2;
  iVar1 = _Mtx_lock(param_1 + 0x318);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  iVar1 = 0;
  if (*(int64_t *)(param_1 + 0x380) - *(int64_t *)(param_1 + 0x378) >> 3 != 0) {
    lVar2 = 0;
    do {
      function_84b2f0(*(uint64_t *)(lVar2 + *(int64_t *)(param_1 + 0x378)));
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 8;
    } while ((uint64_t)(int64_t)iVar1 <
             (uint64_t)(*(int64_t *)(param_1 + 0x380) - *(int64_t *)(param_1 + 0x378) >> 3));
  }
  function_84b380(*(uint64_t *)(param_1 + 0x368));
  function_849360(*(uint64_t *)(param_1 + 0x368));
  *(uint64_t *)(param_1 + 0x380) = *(uint64_t *)(param_1 + 0x378);
  *(uint64_t *)(param_1 + 0x3c0) = *(uint64_t *)(param_1 + 0x3b8);
  function_218120(param_1 + 0x398);
  *(uint64_t *)(param_1 + 0x370) = 0;
  *(uint64_t *)(param_1 + 0x368) = 0;
  iVar1 = _Mtx_unlock(param_1 + 0x318);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}
int64_t function_2133e0(void)
{
  int aiStackX_10 [2];
  int8_t astack_special_x_18 [16];
  function_738630(aiStackX_10,astack_special_x_18,1);
  return (int64_t)aiStackX_10[0];
}
int64_t function_213410(void)
{
  int aiStackX_10 [2];
  int8_t astack_special_x_18 [16];
  function_738630(astack_special_x_18,aiStackX_10,1);
  return (int64_t)aiStackX_10[0];
}
// WARNING: Removing unreachable block (ram,0x000180213594)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_213440(int64_t param_1,int64_t param_2,char param_3)
{
  uint uVar1;
  int iVar2;
  int32_t uVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  void *puVar6;
  int64_t lVar7;
  int64_t lStackX_8;
  uint64_t stack_special_x_10;
  lStackX_8 = param_1;
  if (*(int *)(core_system_data_memory + 0x9a0) == 0) goto LAB_180213627;
  puVar4 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  uVar1 = CoreEngineSystemCleanup(puVar4);
  *puVar4 = 0x5f746567;
  puVar4[1] = 0x6e657665;
  puVar4[2] = 0x65645f74;
  puVar4[3] = 0x206373;
  iVar2 = *(int *)(param_2 + 0x10);
  if (0 < iVar2) {
    if ((iVar2 != -0xf) && (uVar1 < iVar2 + 0x10U)) {
      puVar4 = (int32_t *)DataValidator(system_memory_pool_ptr,puVar4,iVar2 + 0x10U,0x10,0x13);
      CoreEngineSystemCleanup(puVar4);
      iVar2 = *(int *)(param_2 + 0x10);
    }
// WARNING: Subroutine does not return
    memcpy((int8_t *)((int64_t)puVar4 + 0xf),*(uint64_t *)(param_2 + 8),(int64_t)(iVar2 + 1)
          );
  }
  if (puVar4 == (int32_t *)0x0) {
    puVar4 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x11,0x13);
    *(int8_t *)puVar4 = 0;
LAB_1802135b0:
    CoreEngineSystemCleanup(puVar4);
  }
  else if (uVar1 < 0x11) {
    puVar4 = (int32_t *)DataValidator(system_memory_pool_ptr,puVar4,0x11,0x10,0x13);
    goto LAB_1802135b0;
  }
  *(int16_t *)((int64_t)puVar4 + 0xf) = 10;
  puVar5 = (int32_t *)&system_buffer_ptr;
  if (puVar4 != (int32_t *)0x0) {
    puVar5 = puVar4;
  }
  SystemConfigurationManager(system_message_context,0,0x1000000000000,3,puVar5);
  if (puVar4 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar4);
  }
LAB_180213627:
  lVar7 = 0;
  stack_special_x_10 = 0;
  puVar6 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar6 = *(void **)(param_2 + 8);
  }
  uVar3 = function_845c40(*(uint64_t *)(lStackX_8 + 0x368),puVar6,&stack_special_x_10);
  puVar6 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar6 = *(void **)(param_2 + 8);
  }
  SystemCore_NetworkHandler(uVar3,puVar6);
  if (param_3 == '\0') {
    if (6 < *(uint *)(param_2 + 0x10)) {
      do {
        if ((&memory_allocator_3520_ptr + lVar7)[*(int64_t *)(param_2 + 8) + -0x180a10500] !=
            (&memory_allocator_3520_ptr)[lVar7]) {
          return stack_special_x_10;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < 7);
      lStackX_8 = 0;
      function_846fe0(stack_special_x_10,&lStackX_8);
    }
  }
  else {
    uVar3 = function_8496c0(stack_special_x_10,&ui_system_data_1504_ptr,0xffffffff);
    puVar6 = &system_buffer_ptr;
    if (*(void **)(param_2 + 8) != (void *)0x0) {
      puVar6 = *(void **)(param_2 + 8);
    }
    SystemCore_NetworkHandler(uVar3,puVar6);
  }
  return stack_special_x_10;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_213700(int64_t param_1,int param_2,char param_3)
{
  uint uVar1;
  int32_t uVar2;
  int32_t *puVar3;
  int iVar4;
  int64_t lStackX_8;
  void *plocal_var_50;
  int32_t *plocal_var_48;
  uint local_var_40;
  uint64_t local_var_38;
  if (*(int *)(core_system_data_memory + 0x9a0) == 0) goto LAB_180213890;
  plocal_var_50 = &system_data_buffer_ptr;
  local_var_38 = 0;
  plocal_var_48 = (int32_t *)0x0;
  local_var_40 = 0;
  plocal_var_48 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)plocal_var_48 = 0;
  uVar1 = CoreEngineSystemCleanup(plocal_var_48);
  *plocal_var_48 = 0x5f746567;
  plocal_var_48[1] = 0x6e657665;
  plocal_var_48[2] = 0x65645f74;
  plocal_var_48[3] = 0x206373;
  local_var_40 = 0xf;
  local_var_38._0_4_ = uVar1;
  RenderingSystem_CameraController(&plocal_var_50,param_2);
  iVar4 = local_var_40 + 1;
  if (iVar4 != 0) {
    uVar1 = local_var_40 + 2;
    if (plocal_var_48 == (int32_t *)0x0) {
      if ((int)uVar1 < 0x10) {
        uVar1 = 0x10;
      }
      plocal_var_48 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar1,0x13);
      *(int8_t *)plocal_var_48 = 0;
    }
    else {
      if (uVar1 <= (uint)local_var_38) goto LAB_180213823;
      plocal_var_48 = (int32_t *)DataValidator(system_memory_pool_ptr,plocal_var_48,uVar1,0x10,0x13);
    }
    local_var_38._0_4_ = CoreEngineSystemCleanup(plocal_var_48);
  }
LAB_180213823:
  *(int16_t *)((uint64_t)local_var_40 + (int64_t)plocal_var_48) = 10;
  puVar3 = (int32_t *)&system_buffer_ptr;
  if (plocal_var_48 != (int32_t *)0x0) {
    puVar3 = plocal_var_48;
  }
  local_var_40 = iVar4;
  SystemConfigurationManager(system_message_context,0,0x1000000000000,3,puVar3);
  plocal_var_50 = &system_data_buffer_ptr;
  if (plocal_var_48 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_48 = (int32_t *)0x0;
  local_var_38 = (uint64_t)local_var_38._4_4_ << 0x20;
  plocal_var_50 = &system_state_ptr;
LAB_180213890:
  lStackX_8 = 0;
  uVar2 = function_845d20(*(uint64_t *)(param_1 + 0x368),
                        (int64_t)param_2 * 0x10 + *(int64_t *)(param_1 + 0x3b8),&lStackX_8);
  SystemCore_NetworkHandler(uVar2,&system_buffer_ptr);
  if ((lStackX_8 != 0) && (param_3 != '\0')) {
    uVar2 = function_8496c0(lStackX_8,&ui_system_data_1504_ptr,0xffffffff);
    SystemCore_NetworkHandler(uVar2,&system_buffer_ptr);
  }
  return lStackX_8;
}
// WARNING: Removing unreachable block (ram,0x000180213a8e)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_213920(int64_t param_1,int64_t param_2)
{
  uint uVar1;
  int iVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  uint64_t uVar5;
  void *puVar6;
  uint64_t stack_special_x_8;
  uint64_t uVar7;
  uVar7 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x210) != '\0') {
    return 0;
  }
  if (*(int *)(core_system_data_memory + 0x9a0) == 0) goto LAB_180213b20;
  puVar3 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x16,0x13);
  *(int8_t *)puVar3 = 0;
  uVar1 = CoreEngineSystemCleanup(puVar3);
  *puVar3 = 0x61657263;
  puVar3[1] = 0x6f5f6574;
  puVar3[2] = 0x6873656e;
  puVar3[3] = 0x655f746f;
  puVar3[4] = 0x746e6576;
  *(int16_t *)(puVar3 + 5) = 0x20;
  iVar2 = *(int *)(param_2 + 0x10);
  if (0 < iVar2) {
    if ((iVar2 != -0x15) && (uVar1 < iVar2 + 0x16U)) {
      puVar3 = (int32_t *)DataValidator(system_memory_pool_ptr,puVar3,iVar2 + 0x16U,0x10,0x13);
      CoreEngineSystemCleanup(puVar3);
      iVar2 = *(int *)(param_2 + 0x10);
    }
// WARNING: Subroutine does not return
    memcpy((int8_t *)((int64_t)puVar3 + 0x15),*(uint64_t *)(param_2 + 8),
           (int64_t)(iVar2 + 1));
  }
  if (puVar3 == (int32_t *)0x0) {
    puVar3 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x17,0x13);
    *(int8_t *)puVar3 = 0;
LAB_180213aaa:
    CoreEngineSystemCleanup(puVar3);
  }
  else if (uVar1 < 0x17) {
    puVar3 = (int32_t *)DataValidator(system_memory_pool_ptr,puVar3,0x17,0x10,0x13);
    goto LAB_180213aaa;
  }
  *(int16_t *)((int64_t)puVar3 + 0x15) = 10;
  puVar4 = (int32_t *)&system_buffer_ptr;
  if (puVar3 != (int32_t *)0x0) {
    puVar4 = puVar3;
  }
  SystemConfigurationManager(system_message_context,0,0x1000000000000,3,puVar4);
  if (puVar3 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar3);
  }
LAB_180213b20:
  uVar5 = function_213440(param_1,param_2,0);
  iVar2 = function_840490(uVar5,&stack_special_x_8);
  puVar6 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar6 = *(void **)(param_2 + 8);
  }
  SystemCore_NetworkHandler(iVar2,puVar6);
  if (iVar2 != 0) {
    SystemConfigurationManager(system_message_context,0,0,3,&memory_allocator_3528_ptr,stack_special_x_8,uVar7);
    return 0;
  }
  return stack_special_x_8;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_213bb0(int64_t param_1,int32_t param_2)
{
  int iVar1;
  uint uVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  uint64_t stack_special_x_8;
  void *plocal_var_60;
  int32_t *plocal_var_58;
  uint local_var_50;
  uint64_t local_var_48;
  if (*(char *)(param_1 + 0x210) != '\0') {
    return 0;
  }
  iVar1 = _Mtx_lock(param_1 + 0x318);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  if (*(int *)(core_system_data_memory + 0x9a0) == 0) goto LAB_180213d73;
  plocal_var_60 = &system_data_buffer_ptr;
  local_var_48 = 0;
  plocal_var_58 = (int32_t *)0x0;
  local_var_50 = 0;
  plocal_var_58 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x16,0x13);
  *(int8_t *)plocal_var_58 = 0;
  uVar2 = CoreEngineSystemCleanup(plocal_var_58);
  *plocal_var_58 = 0x61657263;
  plocal_var_58[1] = 0x6f5f6574;
  plocal_var_58[2] = 0x6873656e;
  plocal_var_58[3] = 0x655f746f;
  plocal_var_58[4] = 0x746e6576;
  *(int16_t *)(plocal_var_58 + 5) = 0x20;
  local_var_50 = 0x15;
  local_var_48._0_4_ = uVar2;
  RenderingSystem_CameraController(&plocal_var_60,param_2);
  iVar1 = local_var_50 + 1;
  if (iVar1 != 0) {
    uVar2 = local_var_50 + 2;
    if (plocal_var_58 == (int32_t *)0x0) {
      if ((int)uVar2 < 0x10) {
        uVar2 = 0x10;
      }
      plocal_var_58 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar2,0x13);
      *(int8_t *)plocal_var_58 = 0;
    }
    else {
      if (uVar2 <= (uint)local_var_48) goto LAB_180213d0d;
      plocal_var_58 = (int32_t *)DataValidator(system_memory_pool_ptr,plocal_var_58,uVar2,0x10,0x13);
    }
    local_var_48._0_4_ = CoreEngineSystemCleanup(plocal_var_58);
  }
LAB_180213d0d:
  *(int16_t *)((uint64_t)local_var_50 + (int64_t)plocal_var_58) = 10;
  puVar4 = (int32_t *)&system_buffer_ptr;
  if (plocal_var_58 != (int32_t *)0x0) {
    puVar4 = plocal_var_58;
  }
  local_var_50 = iVar1;
  SystemConfigurationManager(system_message_context,0,0x1000000000000,3,puVar4);
  plocal_var_60 = &system_data_buffer_ptr;
  if (plocal_var_58 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_58 = (int32_t *)0x0;
  local_var_48 = (uint64_t)local_var_48._4_4_ << 0x20;
  plocal_var_60 = &system_state_ptr;
LAB_180213d73:
  uVar3 = function_213700(param_1,param_2,0);
  iVar1 = function_840490(uVar3,&stack_special_x_8);
  SystemCore_NetworkHandler(iVar1,&system_buffer_ptr);
  uVar3 = stack_special_x_8;
  if (iVar1 != 0) {
    SystemConfigurationManager(system_message_context,0,0x1000000000000,3,&system_handler1_ptr,stack_special_x_8);
    uVar3 = 0;
  }
  iVar1 = _Mtx_unlock(param_1 + 0x318);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return uVar3;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_213e10(int64_t param_1,uint64_t param_2)
void function_213e10(int64_t param_1,uint64_t param_2)
{
  int64_t lVar1;
  int iVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  void *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  int8_t stack_array_2b8 [32];
  uint64_t local_var_298;
  void *plocal_var_290;
  void *plocal_var_288;
  int32_t local_var_278;
  uint64_t local_var_270;
  int64_t lStack_268;
  void *aplocal_var_258 [68];
  uint64_t local_var_38;
  local_var_270 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2b8;
  lVar1 = param_1 + 0x318;
  lStack_268 = lVar1;
  iVar2 = _Mtx_lock(lVar1);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  uVar4 = SystemCore_EncryptionEngine(aplocal_var_258,param_2);
  SystemCore_EncryptionEngine0(&plocal_var_290,uVar4);
  aplocal_var_258[0] = &system_state_ptr;
  local_var_298 = 0;
  puVar7 = &system_buffer_ptr;
  if (plocal_var_288 != (void *)0x0) {
    puVar7 = plocal_var_288;
  }
  iVar2 = function_848090(*(uint64_t *)(param_1 + 0x368),puVar7,0,&local_var_298);
  puVar7 = &system_buffer_ptr;
  if (plocal_var_288 != (void *)0x0) {
    puVar7 = plocal_var_288;
  }
  SystemCore_NetworkHandler(iVar2,puVar7);
  if (iVar2 != 0) {
    puVar7 = &system_buffer_ptr;
    if (plocal_var_288 != (void *)0x0) {
      puVar7 = plocal_var_288;
    }
    SystemDataInitializer(&memory_allocator_3704_ptr,puVar7);
    goto LAB_180214064;
  }
  puVar7 = &system_buffer_ptr;
  if (plocal_var_288 != (void *)0x0) {
    puVar7 = plocal_var_288;
  }
  lVar5 = strstr(puVar7,&memory_allocator_3736_ptr);
  if (lVar5 == 0) {
    puVar7 = &system_buffer_ptr;
    if (plocal_var_288 != (void *)0x0) {
      puVar7 = plocal_var_288;
    }
    lVar5 = strstr(puVar7,&system_data_e358);
    if (lVar5 != 0) goto LAB_180213f5f;
    puVar7 = &system_buffer_ptr;
    if (plocal_var_288 != (void *)0x0) {
      puVar7 = plocal_var_288;
    }
    lVar5 = strstr(puVar7,&memory_allocator_3624_ptr);
    if (lVar5 != 0) goto LAB_180213f5f;
  }
  else {
LAB_180213f5f:
    uVar3 = function_8482f0(local_var_298);
    puVar7 = &system_buffer_ptr;
    if (plocal_var_288 != (void *)0x0) {
      puVar7 = plocal_var_288;
    }
    SystemCore_NetworkHandler(uVar3,puVar7);
    uVar3 = function_840c00(*(uint64_t *)(param_1 + 0x368));
    SystemCore_NetworkHandler(uVar3,&system_buffer_ptr);
  }
  puVar9 = *(uint64_t **)(param_1 + 0x380);
  if (puVar9 < *(uint64_t **)(param_1 + 0x388)) {
    *(uint64_t **)(param_1 + 0x380) = puVar9 + 1;
    *puVar9 = local_var_298;
    goto LAB_180214064;
  }
  puVar8 = *(uint64_t **)(param_1 + 0x378);
  lVar5 = (int64_t)puVar9 - (int64_t)puVar8 >> 3;
  if (lVar5 == 0) {
    lVar5 = 1;
LAB_180213fe6:
    puVar6 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar5 * 8,*(int8_t *)(param_1 + 0x390));
    puVar9 = *(uint64_t **)(param_1 + 0x380);
    puVar8 = *(uint64_t **)(param_1 + 0x378);
  }
  else {
    lVar5 = lVar5 * 2;
    if (lVar5 != 0) goto LAB_180213fe6;
    puVar6 = (uint64_t *)0x0;
  }
  if (puVar8 != puVar9) {
// WARNING: Subroutine does not return
    memmove(puVar6,puVar8,(int64_t)puVar9 - (int64_t)puVar8);
  }
  *puVar6 = local_var_298;
  if (*(int64_t *)(param_1 + 0x378) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t **)(param_1 + 0x378) = puVar6;
  *(uint64_t **)(param_1 + 0x380) = puVar6 + 1;
  *(uint64_t **)(param_1 + 0x388) = puVar6 + lVar5;
LAB_180214064:
  plocal_var_290 = &system_data_buffer_ptr;
  if (plocal_var_288 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_288 = (void *)0x0;
  local_var_278 = 0;
  plocal_var_290 = &system_state_ptr;
  iVar2 = _Mtx_unlock(lVar1);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_2b8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2140e0(int64_t param_1,uint64_t *param_2,int32_t *param_3)
void function_2140e0(int64_t param_1,uint64_t *param_2,int32_t *param_3)
{
  int32_t uVar1;
  uint64_t uVar2;
  int iVar3;
  int8_t stack_array_78 [32];
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_48;
  int32_t local_var_44;
  int32_t local_var_40;
  uint64_t local_var_3c;
  int32_t local_var_34;
  uint local_var_30;
  uint local_var_2c;
  uint local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_78;
  if (*(char *)(param_1 + 0x210) == '\0') {
    uVar2 = param_2[1];
    local_var_3c = 0;
    local_var_34 = 0;
    *(uint64_t *)(param_1 + 0x188) = *param_2;
    *(uint64_t *)(param_1 + 400) = uVar2;
    uVar2 = param_2[3];
    *(uint64_t *)(param_1 + 0x198) = param_2[2];
    *(uint64_t *)(param_1 + 0x1a0) = uVar2;
    uVar2 = param_2[5];
    *(uint64_t *)(param_1 + 0x1a8) = param_2[4];
    *(uint64_t *)(param_1 + 0x1b0) = uVar2;
    local_var_48 = *(int32_t *)(param_2 + 6);
    local_var_40 = *(int32_t *)((int64_t)param_2 + 0x34);
    local_var_44 = *(int32_t *)(param_2 + 7);
    uVar1 = *(int32_t *)((int64_t)param_2 + 0x3c);
    *(int32_t *)(param_1 + 0x1b8) = local_var_48;
    *(int32_t *)(param_1 + 0x1bc) = local_var_40;
    *(int32_t *)(param_1 + 0x1c0) = local_var_44;
    *(int32_t *)(param_1 + 0x1c4) = uVar1;
    local_var_30 = *(uint *)(param_1 + 0x1a8) ^ 0x80000000;
    local_var_2c = *(uint *)(param_1 + 0x1b0) ^ 0x80000000;
    local_var_28 = *(uint *)(param_1 + 0x1ac) ^ 0x80000000;
    local_var_58 = *param_3;
    local_var_50 = param_3[1];
    local_var_54 = param_3[2];
    uVar1 = param_3[3];
    local_var_24 = *(int32_t *)(param_1 + 0x198);
    local_var_1c = *(int32_t *)(param_1 + 0x19c);
    local_var_20 = *(int32_t *)(param_1 + 0x1a0);
    *(int32_t *)(param_1 + 0x1c8) = local_var_58;
    *(int32_t *)(param_1 + 0x1cc) = local_var_50;
    *(int32_t *)(param_1 + 0x1d0) = local_var_54;
    *(int32_t *)(param_1 + 0x1d4) = uVar1;
    iVar3 = function_849990(*(uint64_t *)(param_1 + 0x368),0,&local_var_48,&local_var_58);
    if (iVar3 != 0) {
      SystemDataInitializer(&memory_allocator_3632_ptr);
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_78);
}
// 函数: void function_214230(int64_t param_1,int param_2)
void function_214230(int64_t param_1,int param_2)
{
  int64_t *plVar1;
  int64_t lVar2;
  int *piVar3;
  int *piVar4;
  int64_t lVar5;
  int *piVar6;
  int64_t *plVar7;
  lVar2 = *(int64_t *)(param_1 + 0x38);
  plVar7 = (int64_t *)
           (lVar2 + ((uint64_t)(int64_t)param_2 % (uint64_t)*(uint *)(param_1 + 0x40)) * 8);
  piVar6 = (int *)*plVar7;
  do {
    if (piVar6 == (int *)0x0) {
      lVar5 = *(int64_t *)(param_1 + 0x40);
      plVar7 = (int64_t *)(lVar2 + lVar5 * 8);
      piVar6 = (int *)*plVar7;
LAB_18021428b:
      if (piVar6 != *(int **)(lVar2 + lVar5 * 8)) {
        lVar2 = *(int64_t *)(piVar6 + 2);
        function_849230(*(uint64_t *)(lVar2 + 0x80));
        *(uint64_t *)(lVar2 + 0x80) = 0;
        lVar2 = *(int64_t *)(piVar6 + 4);
        plVar1 = plVar7;
        while (lVar2 == 0) {
          plVar1 = plVar1 + 1;
          lVar2 = *plVar1;
        }
        piVar3 = (int *)*plVar7;
        piVar4 = *(int **)(piVar3 + 4);
        if (piVar3 == piVar6) {
          *plVar7 = (int64_t)piVar4;
        }
        else {
          for (; piVar4 != piVar6; piVar4 = *(int **)(piVar4 + 4)) {
            piVar3 = piVar4;
          }
          *(uint64_t *)(piVar3 + 4) = *(uint64_t *)(piVar4 + 4);
        }
        if (*(int64_t **)(piVar6 + 2) != (int64_t *)0x0) {
          (**(code **)(**(int64_t **)(piVar6 + 2) + 0x38))();
        }
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(piVar6);
      }
      return;
    }
    if (param_2 == *piVar6) {
      lVar5 = *(int64_t *)(param_1 + 0x40);
      goto LAB_18021428b;
    }
    piVar6 = *(int **)(piVar6 + 4);
  } while( true );
}
bool function_214340(int64_t param_1,int param_2)
{
  int64_t lVar1;
  int *piVar2;
  int64_t lVar3;
  int aiStackX_10 [6];
  lVar1 = *(int64_t *)(param_1 + 0x38);
  piVar2 = *(int **)(lVar1 + ((uint64_t)(int64_t)param_2 % (uint64_t)*(uint *)(param_1 + 0x40)) *
                             8);
  do {
    if (piVar2 == (int *)0x0) {
      lVar3 = *(int64_t *)(param_1 + 0x40);
      piVar2 = *(int **)(lVar1 + lVar3 * 8);
LAB_180214378:
      if (piVar2 == *(int **)(lVar1 + lVar3 * 8)) {
        return false;
      }
      function_846d30(*(uint64_t *)(*(int64_t *)(piVar2 + 2) + 0x78),aiStackX_10);
      return aiStackX_10[0] != 2;
    }
    if (param_2 == *piVar2) {
      lVar3 = *(int64_t *)(param_1 + 0x40);
      goto LAB_180214378;
    }
    piVar2 = *(int **)(piVar2 + 4);
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2143e0(int64_t param_1)
void function_2143e0(int64_t param_1)
{
  int8_t stack_array_a8 [32];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  int32_t stack_array_40 [2];
  int32_t local_var_38;
  int32_t local_var_2c;
  int32_t local_var_24;
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_a8;
  function_8452a0(*(uint64_t *)(param_1 + 0x368),&fStack_5c,&fStack_58);
  SystemCore_CacheManager0(&memory_allocator_3776_ptr);
  SystemCore_CacheManager0(&memory_allocator_3800_ptr,(double)fStack_58);
  SystemCore_CacheManager0(&memory_allocator_3744_ptr,(double)fStack_54);
  SystemCore_CacheManager0(&memory_allocator_3760_ptr,(double)fStack_4c);
  SystemCore_CacheManager0(&memory_allocator_3856_ptr,(double)fStack_50);
  SystemCore_CacheManager0(&memory_allocator_3880_ptr,(double)fStack_5c);
  function_845090(*(uint64_t *)(param_1 + 0x368),stack_array_40);
  SystemCore_CacheManager0(&memory_allocator_3816_ptr,local_var_2c);
  SystemCore_CacheManager0(&memory_allocator_3840_ptr,local_var_24);
  SystemCore_CacheManager0(&memory_allocator_3928_ptr,stack_array_40[0]);
  SystemCore_CacheManager0(&memory_allocator_3968_ptr,local_var_38);
  fStack_88 = 0.0;
  function_846210(*(uint64_t *)(param_1 + 0x368),&memory_allocator_3896_ptr,&fStack_88,0);
  fStack_84 = 0.0;
  function_846210(*(uint64_t *)(param_1 + 0x368),&memory_allocator_3912_ptr,&fStack_84,0);
  fStack_80 = 0.0;
  function_846210(*(uint64_t *)(param_1 + 0x368),&processed_var_4048_ptr,&fStack_80,0);
  fStack_7c = 0.0;
  function_846210(*(uint64_t *)(param_1 + 0x368),&processed_var_4064_ptr,&fStack_7c,0);
  fStack_78 = 0.0;
  function_846210(*(uint64_t *)(param_1 + 0x368),&processed_var_7676_ptr,&fStack_78,0);
  fStack_74 = 0.0;
  function_846210(*(uint64_t *)(param_1 + 0x368),&processed_var_4008_ptr,&fStack_74,0);
  fStack_70 = 0.0;
  function_846210(*(uint64_t *)(param_1 + 0x368),&processed_var_4032_ptr,&fStack_70,0);
  fStack_6c = 0.0;
  function_846210(*(uint64_t *)(param_1 + 0x368),&processed_var_4112_ptr,&fStack_6c,0);
  fStack_68 = 0.0;
  function_846210(*(uint64_t *)(param_1 + 0x368),&processed_var_4128_ptr,&fStack_68,0);
  fStack_64 = 0.0;
  function_846210(*(uint64_t *)(param_1 + 0x368),&processed_var_4072_ptr,&fStack_64,0);
  fStack_60 = 0.0;
  function_846210(*(uint64_t *)(param_1 + 0x368),&processed_var_4096_ptr,&fStack_60,0);
  SystemCore_CacheManager0(&processed_var_4184_ptr);
  SystemCore_CacheManager0(&processed_var_4208_ptr);
  SystemCore_CacheManager0(&processed_var_4184_ptr);
  SystemCore_CacheManager0(&processed_var_4152_ptr,(double)fStack_88);
  SystemCore_CacheManager0(&processed_var_4168_ptr,(double)fStack_84);
  SystemCore_CacheManager0(&processed_var_4280_ptr,(double)fStack_80);
  SystemCore_CacheManager0(&processed_var_4304_ptr,(double)fStack_7c);
  SystemCore_CacheManager0(&processed_var_4232_ptr,(double)fStack_78);
  SystemCore_CacheManager0(&processed_var_4248_ptr,(double)fStack_74);
  SystemCore_CacheManager0(&processed_var_4368_ptr,(double)fStack_70);
  SystemCore_CacheManager0(&processed_var_4384_ptr,(double)fStack_6c);
  SystemCore_CacheManager0(&processed_var_4320_ptr,(double)fStack_68);
  SystemCore_CacheManager0(&processed_var_4344_ptr,(double)fStack_64);
  SystemCore_CacheManager0(&processed_var_4440_ptr,(double)fStack_60);
  SystemCore_CacheManager0(&processed_var_4184_ptr);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_a8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address