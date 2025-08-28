#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_04_part066.c - 7 个函数
// 函数: void SystemCore_Analyzer(int64_t param_1,int64_t param_2)
void SystemCore_Analyzer(int64_t param_1,int64_t param_2)
{
  uint uVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  void *puVar5;
  uint64_t uVar6;
  int64_t *plStackX_18;
  int64_t lStackX_20;
  int32_t uVar7;
  uint64_t uVar8;
  void *plocal_var_98;
  int64_t lStack_90;
  uint local_var_88;
  uint64_t local_var_80;
  void *plocal_var_78;
  int64_t lStack_70;
  uint local_var_68;
  uint64_t local_var_60;
  void *plocal_var_58;
  int64_t lStack_50;
  int iStack_48;
  int32_t local_var_40;
  uVar8 = 0xfffffffffffffffe;
  uVar7 = 0;
  if ((*(char *)(system_parameter_buffer + 0x12e3) != '\0') || (*(char *)(system_parameter_buffer + 0x12dd) != '\0'))
  {
    lVar2 = function_2c28d0();
    *(int32_t *)(lVar2 + 0x10) = *(int32_t *)(param_2 + 0x10);
    puVar5 = &system_buffer_ptr;
    if (*(void **)(param_2 + 8) != (void *)0x0) {
      puVar5 = *(void **)(param_2 + 8);
    }
    lStackX_20 = lVar2;
    strcpy_s(*(uint64_t *)(lVar2 + 8),0x40,puVar5);
    function_2c2400(lVar2);
    uVar8 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x70,8,3,uVar7,uVar8);
    plVar3 = (int64_t *)function_0a1e20(uVar8);
    puVar5 = &system_buffer_ptr;
    if (*(void **)(param_2 + 8) != (void *)0x0) {
      puVar5 = *(void **)(param_2 + 8);
    }
    plStackX_18 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,puVar5);
    lVar4 = (int64_t)*(int *)(param_1 + 0x168) * 0x20;
    if (*(int64_t *)(lVar4 + 0x1c0 + param_1) - *(int64_t *)(lVar4 + 0x1b8 + param_1) >> 3 == 0) {
      plVar3[0xd] = 0;
      puVar5 = &system_buffer_ptr;
      if (*(void **)(param_2 + 8) != (void *)0x0) {
        puVar5 = *(void **)(param_2 + 8);
      }
      (**(code **)(plVar3[4] + 0x10))(plVar3 + 4,puVar5);
    }
    else {
      lVar4 = *(int64_t *)
               (*(int64_t *)(((int64_t)*(int *)(param_1 + 0x168) + 0xe) * 0x20 + param_1) + -8);
      plVar3[0xd] = lVar4;
      SystemSecurity_Manager(lVar4 + 0x48,&plStackX_18);
      plocal_var_98 = &system_data_buffer_ptr;
      local_var_80 = 0;
      lStack_90 = 0;
      local_var_88 = 0;
      uVar1 = *(uint *)(lVar4 + 0x30);
      uVar6 = (uint64_t)uVar1;
      if (*(int64_t *)(lVar4 + 0x28) != 0) {
        CoreMemoryPoolProcessor(&plocal_var_98,uVar6);
      }
      if (uVar1 != 0) {
// WARNING: Subroutine does not return
        memcpy(lStack_90,*(uint64_t *)(lVar4 + 0x28),uVar6);
      }
      if (lStack_90 != 0) {
        *(int8_t *)(uVar6 + lStack_90) = 0;
      }
      local_var_80 = CONCAT44(*(int32_t *)(lVar4 + 0x3c),(int32_t)local_var_80);
      local_var_88 = uVar1;
      CoreMemoryPoolProcessor(&plocal_var_98,2);
      *(int16_t *)((uint64_t)local_var_88 + lStack_90) = 0x2f2f;
      *(int8_t *)((int16_t *)((uint64_t)local_var_88 + lStack_90) + 1) = 0;
      local_var_88 = 2;
      SystemCore_EncryptionEngine0(&plocal_var_58,param_2);
      uVar1 = local_var_88;
      plocal_var_78 = &system_data_buffer_ptr;
      local_var_60 = 0;
      lStack_70 = 0;
      local_var_68 = 0;
      uVar6 = (uint64_t)local_var_88;
      if (lStack_90 != 0) {
        CoreMemoryPoolProcessor(&plocal_var_78,uVar6);
      }
      if (uVar1 != 0) {
// WARNING: Subroutine does not return
        memcpy(lStack_70,lStack_90,uVar6);
      }
      local_var_68 = uVar1;
      if (lStack_70 != 0) {
        *(int8_t *)(uVar6 + lStack_70) = 0;
      }
      local_var_60._4_4_ = local_var_80._4_4_;
      if (0 < iStack_48) {
        CoreMemoryPoolProcessor(&plocal_var_78,iStack_48);
// WARNING: Subroutine does not return
        memcpy((uint64_t)local_var_68 + lStack_70,lStack_50,(int64_t)(iStack_48 + 1));
      }
      SystemScheduler(plVar3 + 4,&plocal_var_78);
      plocal_var_78 = &system_data_buffer_ptr;
      if (lStack_70 != 0) {
// WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
      lStack_70 = 0;
      local_var_60 = (uint64_t)local_var_60._4_4_ << 0x20;
      plocal_var_78 = &system_state_ptr;
      plocal_var_58 = &system_data_buffer_ptr;
      if (lStack_50 != 0) {
// WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
      lStack_50 = 0;
      local_var_40 = 0;
      plocal_var_58 = &system_state_ptr;
      plocal_var_98 = &system_data_buffer_ptr;
      if (lStack_90 != 0) {
// WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
      lStack_90 = 0;
      local_var_80 = local_var_80 & 0xffffffff00000000;
      plocal_var_98 = &system_state_ptr;
    }
    *(int64_t **)(lVar2 + 0x58) = plVar3;
    SystemSecurity_Manager(param_1 + 0x1b8 + (int64_t)*(int *)(param_1 + 0x168) * 0x20,&plStackX_18);
    SystemSecurity_Manager(param_1 + 200 + (int64_t)*(int *)(param_1 + 0x168) * 0x20,&lStackX_20);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_2c28d0(int64_t param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t *pstack_special_x_8;
  uint64_t *pstack_special_x_10;
  uint64_t *pstack_special_x_18;
  plVar1 = (int64_t *)(param_1 + 0x170);
  uVar5 = *(int64_t *)(param_1 + 0x178) - *plVar1 >> 3;
  uVar4 = 0;
  if (uVar5 != 0) {
    do {
      lVar2 = *(int64_t *)(*plVar1 + uVar4 * 8);
      if ((*(char *)(lVar2 + 0x60) == '\0') && (*(char *)(lVar2 + 0x61) == '\0')) {
        return lVar2;
      }
      uVar4 = (uint64_t)((int)uVar4 + 1);
    } while (uVar4 < uVar5);
  }
  puVar3 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x90,8,3,0xfffffffffffffffe);
  *puVar3 = &system_state_ptr;
  puVar3[1] = 0;
  *(int32_t *)(puVar3 + 2) = 0;
  *puVar3 = &memory_allocator_3480_ptr;
  puVar3[1] = puVar3 + 3;
  *(int8_t *)(puVar3 + 3) = 0;
  *(int32_t *)(puVar3 + 2) = 0;
  pstack_special_x_10 = puVar3;
  pstack_special_x_18 = puVar3;
  strcpy_s(puVar3[1],0x40,&system_buffer_ptr);
  *(int16_t *)(puVar3 + 0xc) = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  pstack_special_x_8 = (uint64_t *)0x3;
  (**(code **)(**(int64_t **)(system_message_buffer + 0x1d78) + 0xc0))
            (*(int64_t **)(system_message_buffer + 0x1d78),&pstack_special_x_8);
  pstack_special_x_8._0_4_ = 2;
  (**(code **)(**(int64_t **)(system_message_buffer + 0x1d78) + 0xc0))
            (*(int64_t **)(system_message_buffer + 0x1d78),&pstack_special_x_8,puVar3 + 0xe);
  (**(code **)(**(int64_t **)(system_message_buffer + 0x1d78) + 0xc0))
            (*(int64_t **)(system_message_buffer + 0x1d78),&pstack_special_x_8,puVar3 + 0xf);
  pstack_special_x_8._0_4_ = 1;
  (**(code **)(**(int64_t **)(system_message_buffer + 0x1d78) + 0xc0))
            (*(int64_t **)(system_message_buffer + 0x1d78),&pstack_special_x_8,puVar3 + 0x10);
  pstack_special_x_8 = (uint64_t *)CONCAT44(pstack_special_x_8._4_4_,4);
  (**(code **)(**(int64_t **)(system_message_buffer + 0x1d78) + 0xc0))
            (*(int64_t **)(system_message_buffer + 0x1d78),&pstack_special_x_8,puVar3 + 0x11);
  pstack_special_x_8 = puVar3;
  SystemSecurity_Manager(plVar1,&pstack_special_x_8);
  return *(int64_t *)(*plVar1 + uVar5 * 8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_Synchronizer(uint64_t *param_1)
void SystemCore_Synchronizer(uint64_t *param_1)
{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t lVar5;
  if (0 < *(int *)(param_1 + 2)) {
    lVar5 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if ((*(char *)(system_parameter_buffer + 0x12e3) != '\0') || (*(char *)(system_parameter_buffer + 0x12dd) != '\0')
       ) {
      plVar4 = (int64_t *)(lVar5 + 0x80d8 + (int64_t)*(int *)(lVar5 + 0x8088) * 0x20);
      lVar1 = *plVar4;
      lVar1 = *(int64_t *)(lVar1 + ((int64_t)(int)(plVar4[1] - lVar1 >> 3) + -1) * 8);
      function_057340();
      if (*(int64_t *)(lVar1 + 0x68) == 0) {
        *(int64_t *)(lVar5 + 0x80b0 + (int64_t)*(int *)(lVar5 + 0x8088) * 8) = lVar1;
      }
      lVar3 = (int64_t)*(int *)(lVar5 + 0x8088) * 0x20;
      lVar1 = *(int64_t *)(lVar3 + 200 + lVar5 + 0x7f20);
      iVar2 = (int)(*(int64_t *)(lVar3 + 0xd0 + lVar5 + 0x7f20) - lVar1 >> 3) + -1;
      if (-1 < iVar2) {
        lVar5 = (int64_t)iVar2;
        do {
          if (*(char *)(*(int64_t *)(lVar1 + lVar5 * 8) + 0x60) == '\x01') {
            if (iVar2 != -1) {
              function_2c24b0(*(uint64_t *)(lVar1 + (int64_t)iVar2 * 8));
            }
            break;
          }
          iVar2 = iVar2 + -1;
          lVar5 = lVar5 + -1;
        } while (-1 < lVar5);
      }
    }
  }
  *param_1 = &system_state_ptr;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2c2be0(int64_t *param_1)
void function_2c2be0(int64_t *param_1)
{
  int64_t lVar1;
  if (*(char *)(system_parameter_buffer + 0x12e7) != '\0') {
    lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
    function_2c24b0(*param_1);
    *(uint64_t *)(lVar1 + 0x80b0 + (int64_t)*(int *)(lVar1 + 0x8088) * 8) =
         *(uint64_t *)(*param_1 + 0x58);
  }
  return;
}
uint64_t * function_2c2c40(uint64_t *param_1)
{
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  uint64_t local_var_98;
  uint64_t local_var_90;
  uint64_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  uint64_t local_var_28;
  uint64_t local_var_20;
  uint64_t local_var_18;
  local_var_18 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(int32_t *)(param_1 + 0x19) = 3;
  local_var_50 = 0;
  local_var_48 = 0;
  local_var_40 = 0;
  local_var_38 = 0;
  local_var_30 = 0;
  local_var_28 = 0;
  local_var_20 = 0;
  local_var_a8 = 0;
  local_var_a0 = 0;
  local_var_98 = 0;
  local_var_90 = 0;
  local_var_88 = 0;
  local_var_80 = 0;
  local_var_78 = 0;
  local_var_70 = 0;
  local_var_68 = 0;
  local_var_60 = 0;
  local_var_58 = 0;
  function_2479e0(param_1,&local_var_a8);
  function_246690(&local_var_a8);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(int32_t *)(param_1 + 0x14) = 0x43480000;
  *(int32_t *)((int64_t)param_1 + 0xa4) = 0x3f800000;
  *(int32_t *)((int64_t)param_1 + 0xac) = 0x411cf5c3;
  *(int32_t *)(param_1 + 0x1a) = 0xffffffff;
  return param_1;
}
// 函数: void function_2c2d80(uint64_t *param_1)
void function_2c2d80(uint64_t *param_1)
{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  puVar2 = (uint64_t *)param_1[1];
  for (puVar4 = (uint64_t *)*param_1; puVar4 != puVar2; puVar4 = puVar4 + 0x22) {
    puVar4[0x16] = &system_state_ptr;
    puVar4[0xb] = &system_state_ptr;
    *puVar4 = &system_state_ptr;
  }
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != (uint64_t *)0x0) {
    uVar5 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((int64_t)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemCore_DebugHandler();
          return;
        }
      }
      else {
        Function_2152bae1(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}
// 函数: void function_2c2da0(int64_t *param_1)
void function_2c2da0(int64_t *param_1)
{
  function_2c3a30();
  function_2c6e70();
  if ((int64_t *)param_1[10] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[10] + 0x38))();
  }
  if ((int64_t *)param_1[9] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[9] + 0x38))();
  }
  if ((int64_t *)param_1[8] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[8] + 0x38))();
  }
  if ((int64_t *)param_1[7] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[7] + 0x38))();
  }
  if ((int64_t *)param_1[6] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[6] + 0x38))();
  }
  if ((int64_t *)param_1[5] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[5] + 0x38))();
  }
  if ((int64_t *)param_1[4] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[4] + 0x38))();
  }
  if ((int64_t *)param_1[3] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[3] + 0x38))();
  }
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[2] + 0x38))();
  }
  if ((int64_t *)param_1[1] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[1] + 0x38))();
  }
  if ((int64_t *)*param_1 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_1 + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2c2de0(int64_t *param_1)
void function_2c2de0(int64_t *param_1)
{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  void *puVar4;
  int8_t stack_array_368 [32];
  int32_t local_var_348;
  int32_t local_var_340;
  int32_t local_var_338;
  int32_t local_var_330;
  int32_t local_var_328;
  uint64_t local_var_320;
  int8_t local_var_318;
  int32_t local_var_310;
  int64_t *plStack_308;
  int64_t *plStack_300;
  int64_t *plStack_2f8;
  uint64_t local_var_2f0;
  int32_t local_var_2e8;
  int32_t local_var_2e4;
  int32_t local_var_2e0;
  int32_t local_var_2dc;
  int32_t local_var_2d8;
  int32_t local_var_2d4;
  int32_t local_var_2d0;
  int64_t *plStack_2c8;
  int32_t local_var_2c0;
  int8_t local_var_2bc;
  uint64_t local_var_2b8;
  int32_t local_var_2b0;
  uint64_t local_var_2ac;
  uint64_t local_var_2a4;
  int32_t local_var_29c;
  int32_t local_var_298;
  int64_t *plStack_290;
  int32_t local_var_288;
  int8_t local_var_284;
  uint64_t local_var_278;
  void *plocal_var_268;
  uint64_t *plocal_var_260;
  uint64_t local_var_258;
  uint64_t stack_array_250 [15];
  void *plocal_var_1d8;
  int8_t *plocal_var_1d0;
  int32_t local_var_1c8;
  int8_t stack_array_1c0 [72];
  void *plocal_var_178;
  int8_t *plocal_var_170;
  int32_t local_var_168;
  int8_t stack_array_160 [136];
  void *plocal_var_d8;
  int8_t *plocal_var_d0;
  int32_t local_var_c8;
  int8_t stack_array_c0 [136];
  uint64_t local_var_38;
  local_var_278 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_368;
  if (*(int *)(SYSTEM_STATE_MANAGER + 0x460) < 1) {
    stack_array_250[8] = 0;
    stack_array_250[9] = 0;
    stack_array_250[10] = 0;
    stack_array_250[0xb] = 0;
    stack_array_250[0xc] = 0;
    stack_array_250[0xd] = 0;
    stack_array_250[0xe] = 0;
    plocal_var_268 = (void *)0x0;
    plocal_var_260 = (uint64_t *)0x0;
    local_var_258 = 0;
    stack_array_250[0] = 0;
    stack_array_250[1] = 0;
    stack_array_250[2] = 0;
    stack_array_250[3] = 0;
    stack_array_250[4] = 0;
    stack_array_250[5] = 0;
    stack_array_250[6] = 0;
    stack_array_250[7] = 0;
    function_2479e0(param_1,&plocal_var_268);
    function_246690(&plocal_var_268);
    plVar2 = (int64_t *)function_0c1420();
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_308 = (int64_t *)param_1[7];
    param_1[7] = lVar1;
    if (plStack_308 != (int64_t *)0x0) {
      (**(code **)(*plStack_308 + 0x38))();
    }
    if (plStack_2f8 != (int64_t *)0x0) {
      (**(code **)(*plStack_2f8 + 0x38))();
    }
    *(uint *)(param_1[7] + 0x328) = *(uint *)(param_1[7] + 0x328) | 0x20000000;
    plVar2 = (int64_t *)function_0c1420();
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_308 = (int64_t *)param_1[8];
    param_1[8] = lVar1;
    if (plStack_308 != (int64_t *)0x0) {
      (**(code **)(*plStack_308 + 0x38))();
    }
    if (plStack_300 != (int64_t *)0x0) {
      (**(code **)(*plStack_300 + 0x38))();
    }
    *(uint *)(param_1[8] + 0x328) = *(uint *)(param_1[8] + 0x328) | 0x20000000;
    local_var_2f0 = 0;
    local_var_2e8 = 0;
    local_var_2e4 = 0;
    local_var_2e0 = 0;
    local_var_2dc = 0;
    local_var_2d8 = 0x80045e90;
    local_var_2d4 = 1;
    SystemCore_DecryptionManager(param_1[7],0,(int)param_1[0x1a],&local_var_2f0);
    if ((code *)CONCAT44(local_var_2dc,local_var_2e0) != (code *)0x0) {
      (*(code *)CONCAT44(local_var_2dc,local_var_2e0))(&local_var_2f0,0,0);
    }
    local_var_2f0 = 0;
    local_var_2e8 = 0;
    local_var_2e4 = 0;
    local_var_2e0 = 0;
    local_var_2dc = 0;
    local_var_2d8 = 0x80045e90;
    local_var_2d4 = 1;
    SystemCore_DecryptionManager(param_1[8],0,(int)param_1[0x1a],&local_var_2f0);
    if ((code *)CONCAT44(local_var_2dc,local_var_2e0) != (code *)0x0) {
      (*(code *)CONCAT44(local_var_2dc,local_var_2e0))(&local_var_2f0,0,0);
    }
  }
  else {
    plocal_var_268 = &memory_allocator_3480_ptr;
    plocal_var_260 = stack_array_250;
    stack_array_250[0] = stack_array_250[0] & 0xffffffffffffff00;
    local_var_258 = CONCAT44((int)((uint64_t)local_var_258 >> 0x20),9);
    strcpy_s(stack_array_250,0x40,&processed_var_7720_ptr);
    local_var_310 = 1;
    local_var_318 = 0;
    local_var_320 = 0;
    local_var_328 = 0x20000;
    local_var_330 = 8;
    local_var_338 = 0;
    local_var_340 = 0;
    local_var_348 = 0x45;
    plVar2 = (int64_t *)SystemCore_ConfigManager();
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_300 = (int64_t *)*param_1;
    *param_1 = lVar1;
    if (plStack_300 != (int64_t *)0x0) {
      (**(code **)(*plStack_300 + 0x38))();
    }
    if (plStack_2f8 != (int64_t *)0x0) {
      (**(code **)(*plStack_2f8 + 0x38))();
    }
    plocal_var_268 = &system_state_ptr;
    plocal_var_1d8 = &memory_allocator_3480_ptr;
    plocal_var_1d0 = stack_array_1c0;
    stack_array_1c0[0] = 0;
    local_var_1c8 = 0xc;
    strcpy_s(stack_array_1c0,0x40,&processed_var_7736_ptr);
    local_var_310 = 1;
    local_var_318 = 0;
    local_var_320 = 0;
    local_var_328 = 0x10000;
    local_var_330 = 4;
    local_var_338 = 0;
    local_var_340 = 0;
    local_var_348 = 0x45;
    plVar2 = (int64_t *)SystemCore_ConfigManager();
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_300 = (int64_t *)param_1[1];
    param_1[1] = lVar1;
    if (plStack_300 != (int64_t *)0x0) {
      (**(code **)(*plStack_300 + 0x38))();
    }
    if (plStack_308 != (int64_t *)0x0) {
      (**(code **)(*plStack_308 + 0x38))();
    }
    plocal_var_1d8 = &system_state_ptr;
    plocal_var_268 = &memory_allocator_3480_ptr;
    plocal_var_260 = stack_array_250;
    stack_array_250[0] = stack_array_250[0] & 0xffffffffffffff00;
    local_var_258 = CONCAT44((int)((uint64_t)local_var_258 >> 0x20),9);
    strcpy_s(stack_array_250,0x40,&processed_var_7800_ptr);
    local_var_310 = 1;
    local_var_318 = 0;
    local_var_320 = 0;
    local_var_328 = 0x30000;
    local_var_330 = 8;
    local_var_338 = 0;
    local_var_340 = 0;
    local_var_348 = 0x45;
    plVar2 = (int64_t *)SystemCore_ConfigManager();
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_2f8 = (int64_t *)param_1[2];
    param_1[2] = lVar1;
    if (plStack_2f8 != (int64_t *)0x0) {
      (**(code **)(*plStack_2f8 + 0x38))();
    }
    if (plStack_300 != (int64_t *)0x0) {
      (**(code **)(*plStack_300 + 0x38))();
    }
    plocal_var_268 = &system_state_ptr;
    plocal_var_1d8 = &memory_allocator_3480_ptr;
    plocal_var_1d0 = stack_array_1c0;
    stack_array_1c0[0] = 0;
    local_var_1c8 = 0x12;
    strcpy_s(stack_array_1c0,0x40,&processed_var_7816_ptr);
    local_var_310 = 1;
    local_var_318 = 0;
    local_var_320 = 0;
    local_var_328 = 0x30000;
    local_var_330 = 8;
    local_var_338 = 0;
    local_var_340 = 0;
    local_var_348 = 0x45;
    plVar2 = (int64_t *)SystemCore_ConfigManager();
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_308 = (int64_t *)param_1[3];
    param_1[3] = lVar1;
    if (plStack_308 != (int64_t *)0x0) {
      (**(code **)(*plStack_308 + 0x38))();
    }
    if (plStack_2f8 != (int64_t *)0x0) {
      (**(code **)(*plStack_2f8 + 0x38))();
    }
    plocal_var_1d8 = &system_state_ptr;
    plocal_var_268 = &memory_allocator_3480_ptr;
    plocal_var_260 = stack_array_250;
    stack_array_250[0] = stack_array_250[0] & 0xffffffffffffff00;
    local_var_258 = CONCAT44((int)((uint64_t)local_var_258 >> 0x20),0x16);
    strcpy_s(stack_array_250,0x40,&processed_var_7752_ptr);
    local_var_310 = 1;
    local_var_318 = 0;
    local_var_320 = 0;
    local_var_328 = 0x30000;
    local_var_330 = 8;
    local_var_338 = 0;
    local_var_340 = 0;
    local_var_348 = 0x45;
    plVar2 = (int64_t *)SystemCore_ConfigManager();
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_308 = (int64_t *)param_1[4];
    param_1[4] = lVar1;
    if (plStack_308 != (int64_t *)0x0) {
      (**(code **)(*plStack_308 + 0x38))();
    }
    if (plStack_300 != (int64_t *)0x0) {
      (**(code **)(*plStack_300 + 0x38))();
    }
    plocal_var_268 = &system_state_ptr;
    plocal_var_1d8 = &memory_allocator_3480_ptr;
    plocal_var_1d0 = stack_array_1c0;
    stack_array_1c0[0] = 0;
    local_var_1c8 = 0x11;
    strcpy_s(stack_array_1c0,0x40,&processed_var_7776_ptr);
    local_var_310 = 1;
    local_var_318 = 0;
    local_var_320 = 0;
    local_var_328 = 1;
    local_var_330 = 0x20;
    local_var_338 = 0;
    local_var_340 = 3;
    local_var_348 = 0x220;
    plVar2 = (int64_t *)SystemCore_ConfigManager();
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_308 = (int64_t *)param_1[5];
    param_1[5] = lVar1;
    if (plStack_308 != (int64_t *)0x0) {
      (**(code **)(*plStack_308 + 0x38))();
    }
    if (plStack_2f8 != (int64_t *)0x0) {
      (**(code **)(*plStack_2f8 + 0x38))();
    }
    plocal_var_1d8 = &system_state_ptr;
    plocal_var_268 = &memory_allocator_3480_ptr;
    plocal_var_260 = stack_array_250;
    stack_array_250[0] = stack_array_250[0] & 0xffffffffffffff00;
    local_var_258 = CONCAT44((int)((uint64_t)local_var_258 >> 0x20),0xb);
    strcpy_s(stack_array_250,0x40,&processed_var_7888_ptr);
    local_var_310 = 1;
    local_var_318 = 0;
    local_var_320 = 0;
    local_var_328 = 1;
    local_var_330 = 0x10;
    local_var_338 = 0;
    local_var_340 = 3;
    local_var_348 = 0x220;
    plVar2 = (int64_t *)SystemCore_ConfigManager();
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_308 = (int64_t *)param_1[6];
    param_1[6] = lVar1;
    if (plStack_308 != (int64_t *)0x0) {
      (**(code **)(*plStack_308 + 0x38))();
    }
    if (plStack_300 != (int64_t *)0x0) {
      (**(code **)(*plStack_300 + 0x38))();
    }
    plocal_var_268 = &system_state_ptr;
    local_var_2b0 = 1;
    local_var_2a4 = 0;
    local_var_29c = 0;
    plStack_308 = (int64_t *)0x0;
    plStack_290 = (int64_t *)0x0;
    local_var_284 = 0;
    local_var_298 = 0x1000001;
    local_var_2b8 = 0x10000000100;
    local_var_2ac = 0x1e00000001;
    local_var_288 = (int32_t)param_1[0x1a];
    plocal_var_1d8 = &processed_var_672_ptr;
    plocal_var_1d0 = stack_array_1c0;
    stack_array_1c0[0] = 0;
    local_var_1c8 = 0x14;
    strcpy_s(stack_array_1c0,0x20,&processed_var_7904_ptr);
    plocal_var_178 = &memory_allocator_3432_ptr;
    plocal_var_170 = stack_array_160;
    stack_array_160[0] = 0;
    local_var_168 = local_var_1c8;
    puVar4 = &system_buffer_ptr;
    if (plocal_var_1d0 != (void *)0x0) {
      puVar4 = plocal_var_1d0;
    }
    strcpy_s(stack_array_160,0x80,puVar4);
    plVar2 = (int64_t *)function_0b2450();
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_2f8 = (int64_t *)param_1[7];
    param_1[7] = lVar1;
    if (plStack_2f8 != (int64_t *)0x0) {
      (**(code **)(*plStack_2f8 + 0x38))();
    }
    if (plStack_308 != (int64_t *)0x0) {
      (**(code **)(*plStack_308 + 0x38))();
    }
    plocal_var_178 = &system_state_ptr;
    plocal_var_1d8 = &system_state_ptr;
    *(uint *)(param_1[7] + 0x328) = *(uint *)(param_1[7] + 0x328) | 0x20000000;
    local_var_2e8 = 1;
    local_var_2dc = 0;
    local_var_2d8 = 0;
    local_var_2d4 = 0;
    plStack_2f8 = (int64_t *)0x0;
    plStack_2c8 = (int64_t *)0x0;
    local_var_2bc = 0;
    local_var_2d0 = 0x1000001;
    local_var_2f0 = 0x10000000100;
    local_var_2e0 = 0x1e;
    local_var_2e4 = 7;
    local_var_2c0 = (int32_t)param_1[0x1a];
    plocal_var_268 = &processed_var_672_ptr;
    plocal_var_260 = stack_array_250;
    stack_array_250[0] = stack_array_250[0] & 0xffffffffffffff00;
    local_var_258 = CONCAT44((int)((uint64_t)local_var_258 >> 0x20),0x18);
    strcpy_s(stack_array_250,0x20,&processed_var_7840_ptr);
    plocal_var_d8 = &memory_allocator_3432_ptr;
    plocal_var_d0 = stack_array_c0;
    stack_array_c0[0] = 0;
    local_var_c8 = (int32_t)local_var_258;
    puVar3 = (uint64_t *)&system_buffer_ptr;
    if (plocal_var_260 != (uint64_t *)0x0) {
      puVar3 = plocal_var_260;
    }
    strcpy_s(stack_array_c0,0x80,puVar3);
    plVar2 = (int64_t *)function_0b2450();
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_300 = (int64_t *)param_1[8];
    param_1[8] = lVar1;
    if (plStack_300 != (int64_t *)0x0) {
      (**(code **)(*plStack_300 + 0x38))();
    }
    if (plStack_2f8 != (int64_t *)0x0) {
      (**(code **)(*plStack_2f8 + 0x38))();
    }
    plocal_var_d8 = &system_state_ptr;
    plocal_var_268 = &system_state_ptr;
    *(uint *)(param_1[8] + 0x328) = *(uint *)(param_1[8] + 0x328) | 0x20000000;
    plocal_var_178 = &memory_allocator_3432_ptr;
    plocal_var_170 = stack_array_160;
    stack_array_160[0] = 0;
    local_var_168 = 0x10;
    strcpy_s(stack_array_160,0x80,&memory_allocator_3008_ptr);
    plVar2 = (int64_t *)SystemCore_EncryptionManager(system_resource_state,&plStack_300,&plocal_var_178,1);
    plVar2 = (int64_t *)*plVar2;
    if (plVar2 != (int64_t *)0x0) {
      plStack_308 = plVar2;
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    plStack_308 = (int64_t *)param_1[10];
    param_1[10] = (int64_t)plVar2;
    if (plStack_308 != (int64_t *)0x0) {
      (**(code **)(*plStack_308 + 0x38))();
    }
    if (plStack_300 != (int64_t *)0x0) {
      (**(code **)(*plStack_300 + 0x38))();
    }
    plocal_var_178 = &system_state_ptr;
    lVar1 = param_1[10];
    function_1c1880(lVar1,&rendering_buffer_2504_ptr);
    function_1c1880(lVar1,&rendering_buffer_2496_ptr);
    function_1c1880(lVar1,&rendering_buffer_2528_ptr);
    function_1c1880(lVar1,&rendering_buffer_2512_ptr);
    function_1c1880(lVar1,&rendering_buffer_2552_ptr);
    function_1c1880(lVar1,&rendering_buffer_2544_ptr);
    function_1c1880(lVar1,&rendering_buffer_2584_ptr);
    if (plStack_2c8 != (int64_t *)0x0) {
      (**(code **)(*plStack_2c8 + 0x38))();
    }
    if (plStack_290 != (int64_t *)0x0) {
      (**(code **)(*plStack_290 + 0x38))();
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_368);
}
// 函数: void function_2c3a30(uint64_t param_1)
void function_2c3a30(uint64_t param_1)
{
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  uint64_t local_var_98;
  uint64_t local_var_90;
  uint64_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  uint64_t local_var_28;
  uint64_t local_var_20;
  uint64_t local_var_18;
  local_var_18 = 0xfffffffffffffffe;
  local_var_50 = 0;
  local_var_48 = 0;
  local_var_40 = 0;
  local_var_38 = 0;
  local_var_30 = 0;
  local_var_28 = 0;
  local_var_20 = 0;
  local_var_a8 = 0;
  local_var_a0 = 0;
  local_var_98 = 0;
  local_var_90 = 0;
  local_var_88 = 0;
  local_var_80 = 0;
  local_var_78 = 0;
  local_var_70 = 0;
  local_var_68 = 0;
  local_var_60 = 0;
  local_var_58 = 0;
  function_2479e0(param_1,&local_var_a8);
  function_246690(&local_var_a8);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address