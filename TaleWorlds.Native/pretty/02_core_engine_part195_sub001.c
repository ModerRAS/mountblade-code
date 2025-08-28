#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 02_core_engine_part195_sub001.c - 18 个函数
// 02_core_engine_part195.c - 18 个函数
// 函数: void function_1781f0(uint64_t param_1,uint64_t *param_2,int param_3)
void function_1781f0(uint64_t param_1,uint64_t *param_2,int param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int iVar6;
  int32_t uVar7;
  int iVar8;
  void *puVar9;
  int64_t lVar10;
  int8_t stack_array_968 [32];
  uint64_t local_var_948;
  int64_t **pplStack_940;
  void *plocal_var_938;
  int64_t lStack_930;
  int32_t local_var_928;
  uint64_t local_var_920;
  int64_t *plStack_918;
  uint64_t *plocal_var_910;
  uint64_t local_var_908;
  int64_t lStack_900;
  uint64_t *plocal_var_8f8;
  void *plocal_var_8e8;
  void *plocal_var_8e0;
  int iStack_8d8;
  uint8_t stack_array_8d0 [136];
  int8_t stack_array_848 [2048];
  uint64_t local_var_48;
  lVar4 = core_system_data_config;
  local_var_908 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_968;
  iVar8 = (int)(*(int64_t *)(core_system_data_config + 200) - *(int64_t *)(core_system_data_config + 0xc0) >> 3);
  plocal_var_910 = param_2;
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      lVar2 = *(int64_t *)(*(int64_t *)(lVar4 + 0xc0) + lVar10 * 8);
      uVar3 = *(uint64_t *)(lVar4 + 0xf8);
      lVar1 = lVar2 + 8;
      lStack_900 = lVar1;
      iVar6 = _Mtx_lock();
      if (iVar6 != 0) {
        __Throw_C_error_std__YAXH_Z();
      }
      plocal_var_8e8 = &memory_allocator_3432_ptr;
      plocal_var_8e0 = stack_array_8d0;
      iStack_8d8 = 0;
      stack_array_8d0[0] = 0;
      function_2e5050(&plocal_var_8e8,&processed_var_7284_ptr,plocal_var_910);
      plocal_var_938 = &system_data_buffer_ptr;
      local_var_920 = 0;
      lStack_930 = 0;
      local_var_928 = 0;
      puVar9 = &system_buffer_ptr;
      if (plocal_var_8e0 != (void *)0x0) {
        puVar9 = plocal_var_8e0;
      }
      System_DataHandler(&plocal_var_938,&rendering_buffer_216_ptr,puVar9,param_3);
      plStack_918 = (int64_t *)0x0;
      puVar9 = &system_buffer_ptr;
      if (plocal_var_8e0 != (void *)0x0) {
        puVar9 = plocal_var_8e0;
      }
      mbstowcs(stack_array_848,puVar9,(int64_t)(iStack_8d8 + 1));
      pplStack_940 = &plStack_918;
      local_var_948 = uVar3;
      iVar6 = (**(code **)(**(int64_t **)(lVar2 + 0x148) + 0x160))
                        (*(int64_t **)(lVar2 + 0x148),stack_array_848,param_3,4);
      plVar5 = plStack_918;
      if ((iVar6 == 0) && (plStack_918 != (int64_t *)0x0)) {
        (**(code **)(*plStack_918 + 0x80))(plStack_918,0);
        plocal_var_910 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x50,8,3);
        plocal_var_910[2] = 0;
        plocal_var_8f8 = plocal_var_910 + 4;
        *plocal_var_8f8 = &system_state_ptr;
        plocal_var_910[5] = 0;
        *(int32_t *)(plocal_var_910 + 6) = 0;
        *plocal_var_8f8 = &system_data_buffer_ptr;
        plocal_var_910[7] = 0;
        plocal_var_910[5] = 0;
        *(int32_t *)(plocal_var_910 + 6) = 0;
        *plocal_var_910 = plVar5;
        plocal_var_910[1] = lVar2;
        uVar7 = 0x14;
        if (param_3 != 1) {
          uVar7 = 0x12;
        }
        *(int32_t *)(plocal_var_910 + 3) = uVar7;
        *(int32_t *)((int64_t)plocal_var_910 + 0x4c) = 0x10;
        *(uint64_t *)((int64_t)plocal_var_910 + 0x44) = 0xffffffffffffffff;
        *(int32_t *)(plocal_var_910 + 8) = 0;
        plocal_var_938 = &system_data_buffer_ptr;
        if (lStack_930 != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        lStack_930 = 0;
        local_var_920 = local_var_920 & 0xffffffff00000000;
        plocal_var_938 = &system_state_ptr;
        plocal_var_8e8 = &system_state_ptr;
        iVar8 = _Mtx_unlock(lVar1);
        if (iVar8 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar8);
        }
        break;
      }
      plocal_var_938 = &system_data_buffer_ptr;
      if (lStack_930 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lStack_930 = 0;
      local_var_920 = local_var_920 & 0xffffffff00000000;
      plocal_var_938 = &system_state_ptr;
      plocal_var_8e8 = &system_state_ptr;
      iVar6 = _Mtx_unlock(lVar1);
      if (iVar6 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar6);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar8);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_968);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_178500(void)
void function_178500(void)
{
  int64_t *plVar1;
  uint64_t astack_special_x_18 [2];
  astack_special_x_18[0] = 0;
  plVar1 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
  (**(code **)(*plVar1 + 0x40))(plVar1,0x2f,1,astack_special_x_18);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_178540(void)
void function_178540(void)
{
  int64_t lVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t in_R9;
  void *plocal_var_30;
  uint64_t *plocal_var_28;
  int32_t local_var_20;
  uint64_t local_var_18;
  lVar1 = core_system_data_config;
  if (*(int64_t *)(core_system_data_config + 0xf0) == 0) {
    plocal_var_30 = &system_data_buffer_ptr;
    local_var_18 = 0;
    plocal_var_28 = (uint64_t *)0x0;
    local_var_20 = 0;
    puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13,in_R9,0xfffffffffffffffe);
    *(int8_t *)puVar3 = 0;
    plocal_var_28 = puVar3;
    uVar2 = CoreEngineSystemCleanup(puVar3);
    local_var_18 = CONCAT44(local_var_18._4_4_,uVar2);
    *puVar3 = 0x6f6c72656e6e6142;
    *(int16_t *)(puVar3 + 1) = 0x6472;
    *(int8_t *)((int64_t)puVar3 + 10) = 0;
    local_var_20 = 10;
    uVar4 = function_177c00(lVar1,&plocal_var_30);
    *(uint64_t *)(lVar1 + 0xf0) = uVar4;
    plocal_var_30 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar3);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_178650(uint64_t param_1,int64_t param_2)
void function_178650(uint64_t param_1,int64_t param_2)
{
  int64_t *plVar1;
  int64_t lVar2;
  uint uVar3;
  uint64_t uVar4;
  uint uVar5;
  uint64_t *puVar6;
  int8_t stack_array_68 [32];
  uint64_t local_var_48;
  uint64_t stack_array_40 [4];
  uint64_t local_var_20;
  lVar2 = core_system_data_config;
  local_var_20 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_68;
  uVar3 = (**(code **)(**(int64_t **)(param_2 + 0x148) + 0x20))();
  uVar5 = 0;
  if (uVar3 != 0) {
    puVar6 = stack_array_40;
    do {
      uVar4 = (**(code **)(**(int64_t **)(param_2 + 0x148) + 0xa0))
                        (*(int64_t **)(param_2 + 0x148),uVar5);
      uVar4 = function_179480(lVar2 + 0x228,uVar4,0);
      uVar5 = uVar5 + 1;
      *puVar6 = uVar4;
      puVar6 = puVar6 + 1;
    } while (uVar5 < uVar3);
  }
  plVar1 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
  (**(code **)(*plVar1 + 0x40))(plVar1,0x2c,uVar3,stack_array_40);
  uVar4 = (**(code **)(**(int64_t **)(param_2 + 0x148) + 0xb0))(*(int64_t **)(param_2 + 0x148),0);
  local_var_48 = function_179480(lVar2 + 0x228,uVar4,0);
  plVar1 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
  (**(code **)(*plVar1 + 0x40))(plVar1,0x2f,1,&local_var_48);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_20 ^ (uint64_t)stack_array_68);
}
// 函数: void function_178770(void)
void function_178770(void)
{
// WARNING: Subroutine does not return
  SystemEventProcessor();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_1790a0(uint64_t param_1,uint64_t *param_2)
{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t *plStackX_18;
  int64_t *plStackX_20;
  if (*(int *)(core_system_data_config + 0x380) == 0) {
    plVar2 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,200,8,3,0xfffffffffffffffe);
    plStackX_18 = plVar2;
    UltraHighFreq_PerformanceMonitor1(plVar2);
    *plVar2 = (int64_t)&processed_var_4624_ptr;
    plVar2[0x18] = (int64_t)param_2;
    plVar2[3] = -4;
    plStackX_20 = plVar2;
    (**(code **)(*plVar2 + 0x28))(plVar2);
    uVar1 = system_context_ptr;
    plStackX_18 = plVar2;
    (**(code **)(*plVar2 + 0x28))(plVar2);
    SystemCore_TimerManager(uVar1,&plStackX_18);
    (**(code **)(*plVar2 + 0x38))(plVar2);
    return 1;
  }
  (**(code **)*param_2)(param_2);
  return 1;
}
uint64_t function_179180(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4,
                       uint64_t param_5,int64_t param_6,uint64_t param_7,uint64_t *param_8)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  int64_t *plVar6;
  uint64_t stack_special_x_10;
  int64_t *plStack_38;
  int8_t stack_array_30 [8];
  uint64_t local_var_28;
  int32_t local_var_20;
  uVar4 = (**(code **)(*param_2 + 0x28))(param_2,param_3,param_4,param_8);
  if ((int)uVar4 == 0) {
    plVar6 = (int64_t *)*param_8;
    uVar4 = uVar4 & 0xffffffff;
    plStack_38 = plVar6;
    if (param_6 != 0) {
      stack_special_x_10 = 0;
      uVar3 = (**(code **)(*param_2 + 0x38))(param_2,plVar6,param_6,&stack_special_x_10);
      uVar4 = (uint64_t)uVar3;
      puVar1 = (uint64_t *)(param_1 + 8);
      local_var_28 = stack_special_x_10;
      local_var_20 = *(int32_t *)(param_6 + 8);
      puVar5 = puVar1;
      puVar2 = *(uint64_t **)(param_1 + 0x18);
      while (puVar2 != (uint64_t *)0x0) {
        if ((int64_t *)puVar2[4] < plVar6) {
          puVar2 = (uint64_t *)*puVar2;
        }
        else {
          puVar5 = puVar2;
          puVar2 = (uint64_t *)puVar2[1];
        }
      }
      if ((puVar5 == puVar1) || (plVar6 < (int64_t *)puVar5[4])) {
        puVar5 = (uint64_t *)function_179770(puVar1,stack_array_30,puVar1,puVar5,&plStack_38);
        puVar5 = (uint64_t *)*puVar5;
        plVar6 = plStack_38;
      }
      AudioMixer(puVar5 + 5,&local_var_28);
    }
    (**(code **)(*plVar6 + 0x28))(plVar6,&processed_var_7240_ptr,7,&system_data_89b0);
  }
  return uVar4;
}
int32_t function_1791c0(void)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int32_t unaff_ESI;
  int64_t *unaff_R14;
  uint64_t local_var_40;
  int32_t local_var_48;
  int64_t local_buffer_98;
  if (local_buffer_98 != 0) {
    unaff_ESI = (**(code **)(*unaff_R14 + 0x38))();
    puVar1 = (uint64_t *)(unaff_RBP + 8);
    local_var_40 = 0;
    local_var_48 = *(int32_t *)(local_buffer_98 + 8);
    puVar3 = puVar1;
    puVar2 = *(uint64_t **)(unaff_RBP + 0x18);
    while (puVar2 != (uint64_t *)0x0) {
      if ((int64_t *)puVar2[4] < unaff_RBX) {
        puVar2 = (uint64_t *)*puVar2;
      }
      else {
        puVar3 = puVar2;
        puVar2 = (uint64_t *)puVar2[1];
      }
    }
    if ((puVar3 == puVar1) || (unaff_RBX < (int64_t *)puVar3[4])) {
      puVar3 = (uint64_t *)function_179770(puVar1,&local_buffer_00000038,puVar1,puVar3,&local_buffer_00000030);
      puVar3 = (uint64_t *)*puVar3;
    }
    AudioMixer(puVar3 + 5,&local_buffer_00000040);
  }
  (**(code **)(*unaff_RBX + 0x28))(unaff_RBX,&processed_var_7240_ptr,7,&system_data_89b0);
  return unaff_ESI;
}
// 函数: void function_179296(void)
void function_179296(void)
{
  return;
}
// 函数: void function_1792c0(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_1792c0(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uVar7 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)(param_1 + 8);
  puVar2 = *(uint64_t **)(param_1 + 0x18);
  puVar3 = puVar1;
  if (puVar2 != (uint64_t *)0x0) {
    do {
      if ((int64_t *)puVar2[4] < param_2) {
        puVar2 = (uint64_t *)*puVar2;
      }
      else {
        puVar3 = puVar2;
        puVar2 = (uint64_t *)puVar2[1];
      }
    } while (puVar2 != (uint64_t *)0x0);
    if ((puVar3 != puVar1) && ((int64_t *)puVar3[4] <= param_2)) goto LAB_18017931c;
  }
  puVar3 = puVar1;
LAB_18017931c:
  if (puVar3 != puVar1) {
    iVar5 = 0;
    lVar4 = puVar3[5];
    if (puVar3[6] - lVar4 >> 4 != 0) {
      lVar6 = 0;
      do {
        (**(code **)(**(int64_t **)(lVar6 + lVar4) + 0x10))();
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 0x10;
        lVar4 = puVar3[5];
      } while ((uint64_t)(int64_t)iVar5 < (uint64_t)(puVar3[6] - lVar4 >> 4));
    }
  }
  (**(code **)(*param_2 + 0x10))(param_2);
  puVar3 = puVar1;
  puVar2 = *(uint64_t **)(param_1 + 0x18);
  while (puVar2 != (uint64_t *)0x0) {
    if ((int64_t *)puVar2[4] < param_2) {
      puVar2 = (uint64_t *)*puVar2;
    }
    else {
      puVar3 = puVar2;
      puVar2 = (uint64_t *)puVar2[1];
    }
  }
  if ((puVar3 == puVar1) || (param_2 < (int64_t *)puVar3[4])) {
    puVar3 = puVar1;
  }
  if (puVar3 != puVar1) {
    *(int64_t *)(param_1 + 0x28) = *(int64_t *)(param_1 + 0x28) + -1;
    SystemFunction_00018066bd70(puVar3);
    RenderingSystem_BufferHandler(puVar3,puVar1,param_3,param_4,uVar7);
    if (puVar3[5] != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    if (puVar3 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar3);
    }
  }
  return;
}
int32_t
function_179410(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4,
             uint64_t *param_5)
{
  int32_t uVar1;
  uVar1 = (**(code **)(*param_2 + 0x18))(param_2,param_3,param_4,param_5);
  (**(code **)(*(int64_t *)*param_5 + 0x28))((int64_t *)*param_5,&processed_var_7240_ptr,7,&system_data_89b0);
  return uVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_179480(int64_t param_1,uint64_t param_2,int64_t param_3)
void function_179480(int64_t param_1,uint64_t param_2,int64_t param_3)
{
  int64_t *plVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int *piVar5;
  int iVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  int8_t stack_array_c8 [32];
  int64_t **pplStack_a8;
  int64_t *plStack_98;
  uint64_t local_var_90;
  uint64_t local_var_88;
  int32_t local_var_80;
  int8_t stack_array_78 [8];
  uint64_t local_var_70;
  int8_t stack_array_68 [8];
  int32_t local_var_60;
  int32_t local_var_5c;
  int8_t stack_array_50 [48];
  uint64_t local_var_20;
  local_var_20 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_c8;
  plVar1 = (int64_t *)(**(code **)(**(int64_t **)(param_1 + 0x38) + 0xc0))();
  puVar7 = (uint64_t *)(param_1 + 8);
  puVar4 = *(uint64_t **)(param_1 + 0x18);
  puVar2 = puVar7;
  if (*(uint64_t **)(param_1 + 0x18) != (uint64_t *)0x0) {
    do {
      if ((int64_t *)puVar4[4] < plVar1) {
        puVar3 = (uint64_t *)*puVar4;
      }
      else {
        puVar3 = (uint64_t *)puVar4[1];
        puVar2 = puVar4;
      }
      puVar4 = puVar3;
    } while (puVar3 != (uint64_t *)0x0);
    if ((puVar2 != puVar7) && ((int64_t *)puVar2[4] <= plVar1)) goto LAB_1801794f5;
  }
  puVar2 = puVar7;
LAB_1801794f5:
  plStack_98 = plVar1;
  if (puVar2 == puVar7) {
    local_var_70 = 0;
    (**(code **)(**(int64_t **)(system_message_buffer + 0x1d78) + 0x38))
              (*(int64_t **)(system_message_buffer + 0x1d78),plVar1,0,&local_var_70);
    local_var_88 = local_var_70;
    if (param_3 == 0) {
      local_var_80 = 0;
    }
    else {
      local_var_80 = *(int32_t *)(param_3 + 8);
    }
    puVar2 = puVar7;
    puVar4 = *(uint64_t **)(param_1 + 0x18);
    while (puVar4 != (uint64_t *)0x0) {
      if ((int64_t *)puVar4[4] < plVar1) {
        puVar4 = (uint64_t *)*puVar4;
      }
      else {
        puVar2 = puVar4;
        puVar4 = (uint64_t *)puVar4[1];
      }
    }
    if ((puVar2 == puVar7) || (plVar1 < (int64_t *)puVar2[4])) {
      pplStack_a8 = &plStack_98;
      puVar2 = (uint64_t *)function_179770(puVar7,stack_array_78);
      puVar2 = (uint64_t *)*puVar2;
      plVar1 = plStack_98;
    }
    AudioMixer(puVar2 + 5,&local_var_88);
  }
  else {
    iVar6 = 0;
    uVar8 = (int64_t)(puVar2[6] - puVar2[5]) >> 4;
    if (uVar8 != 0) {
      piVar5 = (int *)(puVar2[5] + 8);
      do {
        if ((param_3 == 0) || (*piVar5 == *(int *)(param_3 + 8))) goto LAB_180179745;
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 4;
      } while ((uint64_t)(int64_t)iVar6 < uVar8);
    }
  }
  local_var_90 = 0;
  puVar4 = puVar7;
  if (param_3 == 0) {
    (**(code **)(**(int64_t **)(system_message_buffer + 0x1d78) + 0x38))
              (*(int64_t **)(system_message_buffer + 0x1d78),plVar1,0,&local_var_90);
    local_var_88 = local_var_90;
    local_var_80 = 0;
    puVar2 = *(uint64_t **)(param_1 + 0x18);
    while (puVar2 != (uint64_t *)0x0) {
      if ((int64_t *)puVar2[4] < plVar1) {
        puVar2 = (uint64_t *)*puVar2;
      }
      else {
        puVar4 = puVar2;
        puVar2 = (uint64_t *)puVar2[1];
      }
    }
  }
  else {
    (**(code **)(*plVar1 + 0x50))(plVar1,stack_array_50);
    puVar3 = puVar7;
    puVar2 = *(uint64_t **)(param_1 + 0x18);
    while (puVar2 != (uint64_t *)0x0) {
      if ((int64_t *)puVar2[4] < plVar1) {
        puVar2 = (uint64_t *)*puVar2;
      }
      else {
        puVar3 = puVar2;
        puVar2 = (uint64_t *)puVar2[1];
      }
    }
    if ((puVar3 == puVar7) || (plVar1 < (int64_t *)puVar3[4])) {
      pplStack_a8 = &plStack_98;
      puVar3 = (uint64_t *)function_179770(puVar7,stack_array_78);
      puVar3 = (uint64_t *)*puVar3;
      plVar1 = plStack_98;
    }
    (**(code **)(**(int64_t **)puVar3[5] + 0x40))(*(int64_t **)puVar3[5],stack_array_68);
    local_var_60 = *(int32_t *)(param_3 + 8);
    local_var_5c = 0xffffffff;
    (**(code **)(**(int64_t **)(system_message_buffer + 0x1d78) + 0x38))
              (*(int64_t **)(system_message_buffer + 0x1d78),plVar1,stack_array_68,&local_var_90);
    local_var_88 = local_var_90;
    local_var_80 = *(int32_t *)(param_3 + 8);
    puVar2 = *(uint64_t **)(param_1 + 0x18);
    while (puVar2 != (uint64_t *)0x0) {
      if ((int64_t *)puVar2[4] < plVar1) {
        puVar2 = (uint64_t *)*puVar2;
      }
      else {
        puVar4 = puVar2;
        puVar2 = (uint64_t *)puVar2[1];
      }
    }
  }
  local_var_90 = local_var_88;
  if ((puVar4 == puVar7) || (plVar1 < (int64_t *)puVar4[4])) {
    pplStack_a8 = &plStack_98;
    puVar4 = (uint64_t *)function_179770(puVar7,stack_array_78);
    puVar4 = (uint64_t *)*puVar4;
  }
  AudioMixer(puVar4 + 5,&local_var_88);
LAB_180179745:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_20 ^ (uint64_t)stack_array_c8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
function_179770(int64_t *param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             uint64_t *param_5)
{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  bool bVar6;
  plVar1 = (int64_t *)*param_1;
  if ((param_4 == plVar1) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (param_4 = plVar1, (uint64_t)plVar1[4] < *param_5)) {
LAB_1801797e2:
      uVar5 = 0;
      goto LAB_1801797e5;
    }
  }
  else {
    plVar1 = (int64_t *)SystemFunction_00018066bd70(param_4);
    if (((uint64_t)param_4[4] < *param_5) && (*param_5 < (uint64_t)plVar1[4])) {
      if (*param_4 == 0) goto LAB_1801797e2;
      uVar5 = 1;
      param_4 = plVar1;
LAB_1801797e5:
      if (param_4 != (int64_t *)0x0) {
        function_179c00(param_1,param_2,param_4,uVar5,param_5);
        return param_2;
      }
    }
  }
  bVar6 = true;
  plVar1 = param_1;
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    plVar2 = (int64_t *)param_1[2];
    do {
      plVar1 = plVar2;
      bVar6 = *param_5 < (uint64_t)plVar1[4];
      if (bVar6) {
        plVar2 = (int64_t *)plVar1[1];
      }
      else {
        plVar2 = (int64_t *)*plVar1;
      }
    } while (plVar2 != (int64_t *)0x0);
  }
  plVar2 = plVar1;
  if (bVar6) {
    if (plVar1 == (int64_t *)param_1[1]) {
      uVar3 = *param_5;
      goto LAB_180179852;
    }
    plVar2 = (int64_t *)SystemFunction_00018066b9a0(plVar1);
  }
  uVar3 = *param_5;
  if (uVar3 <= (uint64_t)plVar2[4]) {
    *param_2 = plVar2;
    return param_2;
  }
LAB_180179852:
  if ((plVar1 == param_1) || (uVar3 < (uint64_t)plVar1[4])) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x48,(char)param_1[5]);
  *(uint64_t *)(lVar4 + 0x20) = *param_5;
  *(uint64_t *)(lVar4 + 0x28) = 0;
  *(uint64_t *)(lVar4 + 0x30) = 0;
  *(uint64_t *)(lVar4 + 0x38) = 0;
  *(int32_t *)(lVar4 + 0x40) = 3;
// WARNING: Subroutine does not return
  SystemConfigProcessor(lVar4,plVar1,param_1,uVar5);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
function_1798f0(int64_t *param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             int32_t *param_5)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int64_t *plVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t lVar7;
  uint64_t uVar8;
  bool bVar9;
  plVar6 = (int64_t *)*param_1;
  if ((param_4 == plVar6) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (iVar5 = memcmp(plVar6 + 4,param_5,0x10), param_4 = plVar6, iVar5 < 0))
    {
LAB_180179981:
      uVar8 = 0;
      goto LAB_180179984;
    }
  }
  else {
    plVar6 = (int64_t *)SystemFunction_00018066bd70(param_4);
    iVar5 = memcmp(param_4 + 4,param_5,0x10);
    if ((iVar5 < 0) && (iVar5 = memcmp(param_5,plVar6 + 4,0x10), iVar5 < 0)) {
      if (*param_4 == 0) goto LAB_180179981;
      uVar8 = 1;
      param_4 = plVar6;
LAB_180179984:
      if (param_4 != (int64_t *)0x0) {
        function_179cd0(param_1,param_2,param_4,uVar8,param_5);
        return param_2;
      }
    }
  }
  bVar9 = true;
  plVar6 = (int64_t *)param_1[2];
  plVar4 = param_1;
  while (plVar6 != (int64_t *)0x0) {
    iVar5 = memcmp(param_5,plVar6 + 4,0x10);
    bVar9 = iVar5 < 0;
    plVar4 = plVar6;
    if (bVar9) {
      plVar6 = (int64_t *)plVar6[1];
    }
    else {
      plVar6 = (int64_t *)*plVar6;
    }
  }
  plVar6 = plVar4;
  if (bVar9) {
    if (plVar4 == (int64_t *)param_1[1]) goto label_179a0a;
    plVar6 = (int64_t *)SystemFunction_00018066b9a0(plVar4);
  }
  iVar5 = memcmp(plVar6 + 4,param_5,0x10);
  if (-1 < iVar5) {
    *param_2 = plVar6;
    return param_2;
  }
label_179a0a:
  if ((plVar4 == param_1) || (iVar5 = memcmp(param_5,plVar4 + 4,0x10), iVar5 < 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  lVar7 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x40,(char)param_1[5]);
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(int32_t *)(lVar7 + 0x20) = *param_5;
  *(int32_t *)(lVar7 + 0x24) = uVar1;
  *(int32_t *)(lVar7 + 0x28) = uVar2;
  *(int32_t *)(lVar7 + 0x2c) = uVar3;
  *(uint64_t *)(lVar7 + 0x30) = 0;
  *(uint64_t *)(lVar7 + 0x38) = 0;
// WARNING: Subroutine does not return
  SystemConfigProcessor(lVar7,plVar4,param_1,uVar8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_179a0a(int32_t param_1)
void function_179a0a(int32_t param_1)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int64_t lVar4;
  int64_t unaff_RBX;
  int32_t *unaff_RBP;
  int64_t unaff_RSI;
  if (unaff_RBX != unaff_RSI) {
    memcmp(param_1,unaff_RBX + 0x20,0x10);
  }
  lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x40,*(int8_t *)(unaff_RSI + 0x28));
  uVar1 = unaff_RBP[1];
  uVar2 = unaff_RBP[2];
  uVar3 = unaff_RBP[3];
  *(int32_t *)(lVar4 + 0x20) = *unaff_RBP;
  *(int32_t *)(lVar4 + 0x24) = uVar1;
  *(int32_t *)(lVar4 + 0x28) = uVar2;
  *(int32_t *)(lVar4 + 0x2c) = uVar3;
  *(uint64_t *)(lVar4 + 0x30) = 0;
  *(uint64_t *)(lVar4 + 0x38) = 0;
// WARNING: Subroutine does not return
  SystemConfigProcessor(lVar4);
}
// 函数: void function_179a7a(void)
void function_179a7a(void)
{
  uint64_t unaff_RDI;
  uint64_t *unaff_R14;
  *unaff_R14 = unaff_RDI;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
function_179aa0(int64_t *param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             int *param_5)
{
  bool bVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t uVar6;
  plVar3 = (int64_t *)*param_1;
  if ((param_4 == plVar3) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (param_4 = plVar3, *(int *)(plVar3 + 4) < *param_5)) {
LAB_180179aff:
      uVar6 = 0;
      goto LAB_180179b02;
    }
  }
  else {
    plVar3 = (int64_t *)SystemFunction_00018066bd70(param_4);
    if (((int)param_4[4] < *param_5) && (*param_5 < (int)plVar3[4])) {
      if (*param_4 == 0) goto LAB_180179aff;
      uVar6 = 1;
      param_4 = plVar3;
LAB_180179b02:
      if (param_4 != (int64_t *)0x0) {
        function_179d80(param_1,param_2,param_4,uVar6,param_5);
        return param_2;
      }
    }
  }
  bVar1 = true;
  plVar3 = param_1;
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    plVar4 = (int64_t *)param_1[2];
    do {
      plVar3 = plVar4;
      bVar1 = *param_5 < (int)plVar3[4];
      if (*param_5 < (int)plVar3[4]) {
        plVar4 = (int64_t *)plVar3[1];
      }
      else {
        plVar4 = (int64_t *)*plVar3;
      }
    } while (plVar4 != (int64_t *)0x0);
  }
  plVar4 = plVar3;
  if (bVar1) {
    if (plVar3 == (int64_t *)param_1[1]) {
      iVar2 = *param_5;
      goto label_179b7a;
    }
    plVar4 = (int64_t *)SystemFunction_00018066b9a0(plVar3);
  }
  iVar2 = *param_5;
  if (iVar2 <= (int)plVar4[4]) {
    *param_2 = plVar4;
    return param_2;
  }
label_179b7a:
  if ((plVar3 == param_1) || (iVar2 < (int)plVar3[4])) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  lVar5 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x30,(char)param_1[5]);
  *(int *)(lVar5 + 0x20) = *param_5;
  *(uint64_t *)(lVar5 + 0x28) = 0;
// WARNING: Subroutine does not return
  SystemConfigProcessor(lVar5,plVar3,param_1,uVar6);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_179b7a(void)
void function_179b7a(void)
{
  int64_t lVar1;
  int32_t *unaff_RSI;
  int64_t unaff_RDI;
  lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x30,*(int8_t *)(unaff_RDI + 0x28));
  *(int32_t *)(lVar1 + 0x20) = *unaff_RSI;
  *(uint64_t *)(lVar1 + 0x28) = 0;
// WARNING: Subroutine does not return
  SystemConfigProcessor(lVar1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_179b91(void)
void function_179b91(void)
{
  int64_t lVar1;
  int32_t *unaff_RSI;
  int64_t unaff_RDI;
  lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x30,*(int8_t *)(unaff_RDI + 0x28));
  *(int32_t *)(lVar1 + 0x20) = *unaff_RSI;
  *(uint64_t *)(lVar1 + 0x28) = 0;
// WARNING: Subroutine does not return
  SystemConfigProcessor(lVar1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_179b95(void)
void function_179b95(void)
{
  int64_t lVar1;
  int32_t *unaff_RSI;
  int64_t unaff_RDI;
  lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x30,*(int8_t *)(unaff_RDI + 0x28));
  *(int32_t *)(lVar1 + 0x20) = *unaff_RSI;
  *(uint64_t *)(lVar1 + 0x28) = 0;
// WARNING: Subroutine does not return
  SystemConfigProcessor(lVar1);
}
// 函数: void function_179bd8(void)
void function_179bd8(void)
{
  uint64_t unaff_RBX;
  uint64_t *unaff_R14;
  *unaff_R14 = unaff_RBX;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_179c00(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
void function_179c00(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
                  uint64_t *param_5)
{
  int64_t lVar1;
  int32_t uVar2;
  if ((((char)param_4 == '\0') && (param_3 != param_1)) &&
     (*(uint64_t *)(param_3 + 0x20) <= *param_5)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x48,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  *(uint64_t *)(lVar1 + 0x20) = *param_5;
  *(uint64_t *)(lVar1 + 0x28) = 0;
  *(uint64_t *)(lVar1 + 0x30) = 0;
  *(uint64_t *)(lVar1 + 0x38) = 0;
  *(int32_t *)(lVar1 + 0x40) = 3;
// WARNING: Subroutine does not return
  SystemConfigProcessor(lVar1,param_3,param_1,uVar2);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_179cd0(int64_t param_1,uint64_t param_2,int64_t param_3,char param_4,
void function_179cd0(int64_t param_1,uint64_t param_2,int64_t param_3,char param_4,
                  int32_t *param_5)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  int64_t lVar5;
  int32_t uVar6;
  if ((param_4 == '\0') && (param_3 != param_1)) {
    iVar4 = memcmp(param_5,param_3 + 0x20,0x10);
    if (-1 < iVar4) {
      uVar6 = 1;
      goto LAB_180179d1f;
    }
  }
  uVar6 = 0;
LAB_180179d1f:
  lVar5 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x40,*(int8_t *)(param_1 + 0x28));
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(int32_t *)(lVar5 + 0x20) = *param_5;
  *(int32_t *)(lVar5 + 0x24) = uVar1;
  *(int32_t *)(lVar5 + 0x28) = uVar2;
  *(int32_t *)(lVar5 + 0x2c) = uVar3;
  *(uint64_t *)(lVar5 + 0x30) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
// WARNING: Subroutine does not return
  SystemConfigProcessor(lVar5,param_3,param_1,uVar6);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_179d80(int64_t param_1,uint64_t param_2,int64_t param_3,char param_4,int *param_5)
void function_179d80(int64_t param_1,uint64_t param_2,int64_t param_3,char param_4,int *param_5)
{
  int64_t lVar1;
  int32_t uVar2;
  if (((param_4 == '\0') && (param_3 != param_1)) && (*(int *)(param_3 + 0x20) <= *param_5)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x30,*(int8_t *)(param_1 + 0x28));
  *(int *)(lVar1 + 0x20) = *param_5;
  *(uint64_t *)(lVar1 + 0x28) = 0;
// WARNING: Subroutine does not return
  SystemConfigProcessor(lVar1,param_3,param_1,uVar2);
}