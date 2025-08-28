#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 01_initialization_part017.c - 32 个函数
// 函数: void > HighFreq_ParticleSystem1(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void > HighFreq_ParticleSystem1(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  puVar1 = *(uint64_t **)(param_1 + 0x10);
  if (puVar1 != (uint64_t *)0x0) {
    SystemCache_Manager(param_1,*puVar1,param_3,param_4,0xfffffffffffffffe);
// WARNING: Subroutine does not return
    SystemCoreProcessor(puVar1);
  }
  return;
}
// 函数: void SystemCache_Manager(uint64_t param_1,uint64_t *param_2)
void SystemCache_Manager(uint64_t param_1,uint64_t *param_2)
{
  if (param_2 != (uint64_t *)0x0) {
    SystemCache_Manager(param_1,*param_2);
// WARNING: Subroutine does not return
    SystemCoreProcessor(param_2);
  }
  return;
}
// 函数: void function_04b7a2(uint64_t param_1)
void function_04b7a2(uint64_t param_1)
{
  uint64_t *unaff_RBX;
  SystemCache_Manager(param_1,*unaff_RBX);
// WARNING: Subroutine does not return
  SystemCoreProcessor();
}
// 函数: void function_04b7de(void)
void function_04b7de(void)
{
  return;
}
uint64_t * function_04b7e0(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &memory_allocator_3528_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}
uint64_t * function_04b820(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_04b860(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_04b860(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int iVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t stack_special_x_18;
  uint64_t stack_special_x_20;
  int8_t stack_array_78 [32];
  uint64_t local_var_58;
  uint64_t *plocal_var_50;
  char acStack_48 [32];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_78;
  stack_special_x_18 = param_3;
  stack_special_x_20 = param_4;
  puVar3 = (uint64_t *)Function_6d5908f9();
  local_var_58 = 0;
  plocal_var_50 = &stack_special_x_18;
  __stdio_common_vsprintf(*puVar3 | 1,acStack_48,0x20,param_2);
  lVar1 = -1;
  do {
    lVar4 = lVar1;
    lVar1 = lVar4 + 1;
  } while (acStack_48[lVar4 + 1] != '\0');
  iVar2 = (int)(lVar4 + 1);
  if ((0 < iVar2) && (*(uint *)(param_1 + 0x10) + iVar2 < 0x1f)) {
// WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(param_1 + 0x10) + *(int64_t *)(param_1 + 8),acStack_48,
           (int64_t)((int)lVar4 + 2));
  }
// WARNING: Subroutine does not return
  SystemDataManager(local_var_28 ^ (uint64_t)stack_array_78);
}
uint64_t * function_04b920(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &memory_allocator_3616_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}
uint64_t * function_04b960(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &memory_allocator_3672_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}
int function_04b9b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int iVar1;
  uint64_t *puVar2;
  puVar2 = (uint64_t *)Function_6d5908f9();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 1,param_1,param_2,param_3,0,param_4);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}
// 函数: void function_04ba30(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_04ba30(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  function_0582b0(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}
// 函数: void function_04ba60(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_04ba60(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  function_0582b0(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_04ba90(uint64_t *param_1)
void function_04ba90(uint64_t *param_1)
{
  int iVar1;
  SYSTEM_DATA_MANAGER_A = *param_1;
  iVar1 = _Mtx_unlock(0x180c91970);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}
// 函数: void function_04bad0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_04bad0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  RenderingSystem_CameraSystem(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}
// 函数: void function_04bb00(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_04bb00(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  RenderingSystem_CameraSystem(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}
// 函数: void function_04bb30(int64_t param_1)
void function_04bb30(int64_t param_1)
{
  function_057010(param_1 + 0x60);
  return;
}
// 函数: void function_04bb60(int64_t param_1)
void function_04bb60(int64_t param_1)
{
  function_057010(param_1 + 0x60);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_04bb90(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_04bb90(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  lVar2 = init_system_data_config;
  iVar3 = (int)(*(int64_t *)(init_system_data_config + 0x38) - *(int64_t *)(init_system_data_config + 0x30) >> 3);
  lVar4 = 0;
  if (0 < iVar3) {
    do {
      puVar1 = *(uint64_t **)(*(int64_t *)(lVar2 + 0x30) + lVar4 * 8);
      if (puVar1 != (uint64_t *)0x0) {
        puVar1[4] = &system_data_buffer_ptr;
        if (puVar1[5] != 0) {
// WARNING: Subroutine does not return
          SystemCoreProcessor();
        }
        puVar1[5] = 0;
        *(int32_t *)(puVar1 + 7) = 0;
        puVar1[4] = &system_state_ptr;
        *puVar1 = &system_data_buffer_ptr;
        if (puVar1[1] == 0) {
          puVar1[1] = 0;
          *(int32_t *)(puVar1 + 3) = 0;
          *puVar1 = &system_state_ptr;
// WARNING: Subroutine does not return
          SystemCoreProcessor(puVar1);
        }
// WARNING: Subroutine does not return
        SystemCoreProcessor();
      }
      *(uint64_t *)(*(int64_t *)(lVar2 + 0x30) + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  *(uint64_t *)(lVar2 + 0x38) = *(uint64_t *)(lVar2 + 0x30);
  lVar4 = lVar2 + 0x50;
  RenderingSystem_CameraSystem(lVar4,*(uint64_t *)(lVar2 + 0x60),param_3,param_4,0xfffffffffffffffe);
  *(int64_t *)lVar4 = lVar4;
  *(int64_t *)(lVar2 + 0x58) = lVar4;
  *(uint64_t *)(lVar2 + 0x60) = 0;
  *(int8_t *)(lVar2 + 0x68) = 0;
  *(uint64_t *)(lVar2 + 0x70) = 0;
  return;
}
// 函数: void function_04bcb0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_04bcb0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  function_058420(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}
// 函数: void function_04bce0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_04bce0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  function_058420(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}
uint64_t * function_04bd10(uint64_t *param_1)
{
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &memory_allocator_3480_ptr;
  param_1[1] = param_1 + 3;
  *(int32_t *)(param_1 + 2) = 0;
  *(int8_t *)(param_1 + 3) = 0;
  function_142b20(param_1 + 0xb);
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(int32_t *)(param_1 + 0x77) = 3;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  *(int32_t *)(param_1 + 0x7b) = 3;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  *(int32_t *)(param_1 + 0x7f) = 3;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  *(int32_t *)(param_1 + 0x83) = 3;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  *(int32_t *)(param_1 + 0x87) = 3;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  *(int32_t *)(param_1 + 0x8b) = 3;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  *(int32_t *)(param_1 + 0x8f) = 3;
  return param_1;
}
// 函数: void function_04be50(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_04be50(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uVar3 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)param_1[1];
  for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 0x69) {
    (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  SystemCoreProcessor();
}
// 函数: void function_04be70(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_04be70(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
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
  SystemCoreProcessor();
}
// 函数: void function_04be90(int64_t param_1)
void function_04be90(int64_t param_1)
{
  int iVar1;
  int64_t lVar2;
  uint uVar3;
  uint64_t uVar5;
  uint64_t uVar4;
  iVar1 = _Mtx_lock(param_1 + 0x28);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  uVar4 = 0;
  lVar2 = *(int64_t *)(param_1 + 8);
  uVar5 = uVar4;
  if (*(int64_t *)(param_1 + 0x10) - lVar2 >> 3 != 0) {
    do {
      if (*(int64_t *)(uVar5 + lVar2) != 0) {
// WARNING: Subroutine does not return
        SystemCoreProcessor();
      }
      *(uint64_t *)(uVar5 + *(int64_t *)(param_1 + 8)) = 0;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
      lVar2 = *(int64_t *)(param_1 + 8);
      uVar5 = uVar5 + 8;
    } while ((uint64_t)(int64_t)(int)uVar3 <
             (uint64_t)(*(int64_t *)(param_1 + 0x10) - lVar2 >> 3));
  }
  *(int64_t *)(param_1 + 0x10) = lVar2;
  iVar1 = _Mtx_unlock(param_1 + 0x28);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}
// 函数: void function_04bf50(int64_t *param_1)
void function_04bf50(int64_t *param_1)
{
  int64_t lVar1;
  lVar1 = *param_1;
  if (lVar1 == 0) {
    *param_1 = 0;
    if ((int64_t *)param_1[2] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)param_1[2] + 0x38))();
    }
    if ((int64_t *)param_1[1] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)param_1[1] + 0x38))();
    }
    return;
  }
  if (*(int64_t *)(lVar1 + 8) != 0) {
// WARNING: Subroutine does not return
    SystemCoreProcessor();
  }
  _Mtx_destroy_in_situ();
// WARNING: Subroutine does not return
  SystemCoreProcessor(lVar1);
}
// 函数: void function_04bff0(int64_t param_1)
void function_04bff0(int64_t param_1)
{
  int *piVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uVar6 = *(uint64_t *)(param_1 + 0x10);
  lVar4 = *(int64_t *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(int64_t *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
// WARNING: Subroutine does not return
        SystemCoreProcessor(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (uint64_t)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((int64_t)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (uint64_t)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemCore_DebugHandler();
          return;
        }
      }
      else {
        Function_2152bae1(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}
// 函数: void function_04c010(int64_t *param_1)
void function_04c010(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    function_04bf50(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  SystemCoreProcessor();
}
// 函数: void function_04c030(int64_t *param_1)
void function_04c030(int64_t *param_1)
{
  int64_t *plVar1;
  int64_t *plVar2;
  plVar1 = (int64_t *)param_1[1];
  for (plVar2 = (int64_t *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 1) {
    if ((int64_t *)*plVar2 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar2 + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  SystemCoreProcessor();
}
uint64_t * function_04c050(uint64_t *param_1)
{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 3;
  return param_1;
}
// 函数: void function_04c090(int64_t *param_1)
void function_04c090(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    function_04bf50(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  SystemCoreProcessor();
}
// 函数: void function_04c0b0(int64_t param_1)
void function_04c0b0(int64_t param_1)
{
  int *piVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uVar6 = *(uint64_t *)(param_1 + 0x10);
  lVar4 = *(int64_t *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(int64_t *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
// WARNING: Subroutine does not return
        SystemCoreProcessor(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (uint64_t)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((int64_t)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (uint64_t)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemCore_DebugHandler();
          return;
        }
      }
      else {
        Function_2152bae1(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}
// 函数: void function_04c0d0(int64_t param_1)
void function_04c0d0(int64_t param_1)
{
  void *puVar1;
  int8_t stack_array_a8 [8];
  void *plocal_var_a0;
  uint local_var_98;
  uint64_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  int32_t local_var_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  int32_t local_var_50;
  void *plocal_var_48;
  int64_t lStack_40;
  int32_t local_var_30;
  uint64_t local_var_28;
  local_var_28 = 0xfffffffffffffffe;
  if (param_1 == 0) {
// 函数: void function_04c260(uint64_t *param_1)
void function_04c260(uint64_t *param_1)
{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
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
      Function_2152bae1(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}
// 函数: void function_04c290(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_04c290(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uVar3 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)param_1[1];
  for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 4) {
    (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  SystemCoreProcessor();
}
// 函数: void function_04c2b0(int64_t param_1)
void function_04c2b0(int64_t param_1)
{
  uint uVar1;
  int64_t lVar2;
  if (param_1 == 0) {
// 函数: void function_04c2c4(int64_t param_1)
void function_04c2c4(int64_t param_1)
{
  uint uVar1;
  int64_t lVar2;
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_1 + lVar2) != '\0');
  uVar1 = (uint)lVar2;
  if (0x1fff < uVar1) {
    uVar1 = 0x1fff;
  }
// WARNING: Subroutine does not return
  memcpy(&system_counter_4870,param_1,(int64_t)(int)uVar1);
}
// 函数: void function_04c31f(void)
void function_04c31f(void)
{
  code *pcVar1;
  UltraHighFreq_ThreadManager1();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
int8_t *
function_04c330(int8_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  plVar3 = (int64_t *)(param_1 + 8);
  *plVar3 = (int64_t)&system_state_ptr;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  *plVar3 = (int64_t)&system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  *(void **)(param_1 + 0x38) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x40) = 0;
  *(int32_t *)(param_1 + 0x48) = 0;
  *(void **)(param_1 + 0x38) = &system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x50) = 0;
  *(uint64_t *)(param_1 + 0x40) = 0;
  *(int32_t *)(param_1 + 0x48) = 0;
  *(void **)(param_1 + 0x58) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x60) = 0;
  *(int32_t *)(param_1 + 0x68) = 0;
  *(void **)(param_1 + 0x58) = &system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x70) = 0;
  *(uint64_t *)(param_1 + 0x60) = 0;
  *(int32_t *)(param_1 + 0x68) = 0;
  plVar1 = (int64_t *)(param_1 + 0x80);
  *plVar1 = (int64_t)&system_state_ptr;
  *(uint64_t *)(param_1 + 0x88) = 0;
  *(int32_t *)(param_1 + 0x90) = 0;
  *plVar1 = (int64_t)&system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x98) = 0;
  *(uint64_t *)(param_1 + 0x88) = 0;
  *(int32_t *)(param_1 + 0x90) = 0;
  plVar2 = (int64_t *)(param_1 + 0xa0);
  *plVar2 = (int64_t)&system_state_ptr;
  *(uint64_t *)(param_1 + 0xa8) = 0;
  *(int32_t *)(param_1 + 0xb0) = 0;
  *plVar2 = (int64_t)&system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0xb8) = 0;
  *(uint64_t *)(param_1 + 0xa8) = 0;
  *(int32_t *)(param_1 + 0xb0) = 0;
  *param_1 = 0;
  (**(code **)(*plVar3 + 0x10))(plVar3,&processed_var_4696_ptr,&system_state_ptr,param_4,0xfffffffffffffffe);
  *(uint64_t *)(param_1 + 0x28) = 0;
  *(int32_t *)(param_1 + 0x30) = 0;
  param_1[0x7c] = 0;
  param_1[0xc9] = 1;
  (**(code **)(*plVar1 + 0x10))(plVar1,&system_counter_d128);
  (**(code **)(*plVar2 + 0x10))(plVar2,&system_buffer_ptr);
  *(int32_t *)(param_1 + 0xc0) = 0x461c4000;
  *(int32_t *)(param_1 + 0xc4) = 0x461c4000;
  param_1[200] = 0;
  *(uint64_t *)(param_1 + 0xd0) = 0;
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * function_04c480(uint64_t *param_1)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  int64_t *plVar7;
  int32_t *puVar8;
  int32_t *puVar9;
  int64_t lVar10;
  uint64_t *apstack_special_x_10 [3];
  *(int8_t *)((int64_t)param_1 + 0x1c) = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(int32_t *)(param_1 + 0x12) = 3;
  param_1[0x17] = &system_state_ptr;
  param_1[0x18] = 0;
  *(int32_t *)(param_1 + 0x19) = 0;
  param_1[0x17] = &system_data_buffer_ptr;
  param_1[0x1a] = 0;
  param_1[0x18] = 0;
  *(int32_t *)(param_1 + 0x19) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(int32_t *)(param_1 + 0x1e) = 3;
  plVar1 = param_1 + 0x21;
  *plVar1 = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(int32_t *)(param_1 + 0x24) = 3;
  param_1[0x29] = &system_state_ptr;
  param_1[0x2a] = 0;
  *(int32_t *)(param_1 + 0x2b) = 0;
  param_1[0x29] = &system_data_buffer_ptr;
  param_1[0x2c] = 0;
  param_1[0x2a] = 0;
  *(int32_t *)(param_1 + 0x2b) = 0;
  plVar2 = param_1 + 0x2e;
  *plVar2 = (int64_t)&system_state_ptr;
  param_1[0x2f] = 0;
  *(int32_t *)(param_1 + 0x30) = 0;
  *plVar2 = (int64_t)&system_data_buffer_ptr;
  param_1[0x31] = 0;
  param_1[0x2f] = 0;
  *(int32_t *)(param_1 + 0x30) = 0;
  plVar3 = param_1 + 0x32;
  *plVar3 = (int64_t)&system_state_ptr;
  param_1[0x33] = 0;
  *(int32_t *)(param_1 + 0x34) = 0;
  *plVar3 = (int64_t)&processed_var_672_ptr;
  param_1[0x33] = param_1 + 0x35;
  *(int32_t *)(param_1 + 0x34) = 0;
  *(int8_t *)(param_1 + 0x35) = 0;
  plVar7 = param_1 + 0x39;
  *plVar7 = (int64_t)&system_state_ptr;
  param_1[0x3a] = 0;
  *(int32_t *)(param_1 + 0x3b) = 0;
  *plVar7 = (int64_t)&system_data_buffer_ptr;
  param_1[0x3c] = 0;
  param_1[0x3a] = 0;
  *(int32_t *)(param_1 + 0x3b) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x254) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x25c) = 0;
  param_1[0x4e] = &system_state_ptr;
  param_1[0x4f] = 0;
  *(int32_t *)(param_1 + 0x50) = 0;
  param_1[0x4e] = &system_data_buffer_ptr;
  param_1[0x51] = 0;
  param_1[0x4f] = 0;
  *(int32_t *)(param_1 + 0x50) = 0;
  param_1[0x52] = &system_state_ptr;
  param_1[0x53] = 0;
  *(int32_t *)(param_1 + 0x54) = 0;
  param_1[0x52] = &system_data_buffer_ptr;
  param_1[0x55] = 0;
  param_1[0x53] = 0;
  *(int32_t *)(param_1 + 0x54) = 0;
  param_1[0x58] = &system_state_ptr;
  param_1[0x59] = 0;
  *(int32_t *)(param_1 + 0x5a) = 0;
  param_1[0x58] = &system_data_buffer_ptr;
  param_1[0x5b] = 0;
  param_1[0x59] = 0;
  *(int32_t *)(param_1 + 0x5a) = 0;
  puVar6 = param_1 + 0x5c;
  param_1[0x5f] = 0;
  *(int32_t *)(param_1 + 0x61) = 3;
  *puVar6 = puVar6;
  param_1[0x5d] = puVar6;
  param_1[0x5e] = 0;
  *(int8_t *)(param_1 + 0x5f) = 0;
  param_1[0x60] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(int32_t *)(param_1 + 0x67) = 3;
  param_1[0x69] = &system_state_ptr;
  param_1[0x6a] = 0;
  *(int32_t *)(param_1 + 0x6b) = 0;
  param_1[0x69] = &system_data_buffer_ptr;
  param_1[0x6c] = 0;
  param_1[0x6a] = 0;
  *(int32_t *)(param_1 + 0x6b) = 0;
  apstack_special_x_10[0] = param_1 + 0x6d;
  *apstack_special_x_10[0] = &system_state_ptr;
  param_1[0x6e] = 0;
  *(int32_t *)(param_1 + 0x6f) = 0;
  *apstack_special_x_10[0] = &system_data_buffer_ptr;
  param_1[0x70] = 0;
  param_1[0x6e] = 0;
  *(int32_t *)(param_1 + 0x6f) = 0;
  *(int32_t *)(param_1 + 4) = 0;
  *param_1 = 0;
  *(int32_t *)(param_1 + 99) = 0;
  (**(code **)(*plVar7 + 0x10))
            (plVar7,&processed_var_4720_ptr,&system_data_buffer_ptr,&system_state_ptr,0xfffffffffffffffe);
  *(int32_t *)(param_1 + 0x3d) = 0;
  *(int32_t *)((int64_t)param_1 + 0x1ed) = 0x1000001;
  param_1[0x62] = 0;
  *(int8_t *)(param_1 + 0xc) = 0;
  *(int32_t *)(param_1 + 0x20) = 0xffffffff;
  *(int8_t *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(int8_t *)((int64_t)param_1 + 0x1ec) = 0;
  LOCK();
  *(int8_t *)(param_1 + 0x79) = 0;
  UNLOCK();
  (**(code **)(*plVar3 + 0x10))(plVar3,&processed_var_4736_ptr);
  (**(code **)(*plVar2 + 0x10))(plVar2,&system_buffer_ptr);
  *(int8_t *)(param_1 + 0x2d) = 0;
  param_1[0x13] = 0;
  *(int32_t *)(param_1 + 0x1f) = 0x1010101;
  *(int16_t *)((int64_t)param_1 + 0xfc) = 0x101;
  *(int32_t *)((int64_t)param_1 + 0x104) = 0xffffffff;
  lVar10 = 8;
  do {
    puVar9 = (int32_t *)param_1[0x22];
    if (puVar9 < (int32_t *)param_1[0x23]) {
      param_1[0x22] = puVar9 + 1;
      *puVar9 = 0;
    }
    else {
      puVar8 = (int32_t *)*plVar1;
      lVar4 = (int64_t)puVar9 - (int64_t)puVar8 >> 2;
      if (lVar4 == 0) {
        lVar4 = 1;
LAB_18004c7ef:
        puVar5 = (int32_t *)
                 SystemMemoryManager(system_memory_pool_ptr,lVar4 * 4,*(int8_t *)(param_1 + 0x24));
        puVar9 = (int32_t *)param_1[0x22];
        puVar8 = (int32_t *)*plVar1;
      }
      else {
        lVar4 = lVar4 * 2;
        puVar5 = (int32_t *)0x0;
        if (lVar4 != 0) goto LAB_18004c7ef;
      }
      if (puVar8 != puVar9) {
// WARNING: Subroutine does not return
        memmove(puVar5,puVar8,(int64_t)puVar9 - (int64_t)puVar8);
      }
      *puVar5 = 0;
      if (*plVar1 != 0) {
// WARNING: Subroutine does not return
        SystemCoreProcessor();
      }
      *plVar1 = (int64_t)puVar5;
      param_1[0x22] = puVar5 + 1;
      param_1[0x23] = puVar5 + lVar4;
    }
    lVar10 = lVar10 + -1;
    if (lVar10 == 0) {
      *(int32_t *)((int64_t)param_1 + 0x24) = 0;
      *(int32_t *)((int64_t)param_1 + 0x29) = 0x1010101;
      *(int8_t *)(param_1 + 5) = 1;
      *(int32_t *)(param_1 + 0x71) = 0x3f800000;
      *(int8_t *)(param_1 + 0x76) = 1;
      *(int32_t *)(param_1 + 0x25) = 0;
      param_1[0x56] = 0;
      *(uint64_t *)((int64_t)param_1 + 0x224) = 0;
      *(int8_t *)((int64_t)param_1 + 0x22c) = 0;
      *(int32_t *)(param_1 + 0x40) = 0;
      param_1[0x41] = 0;
      puVar6 = init_system_data_config;
      if (init_system_data_config == (uint64_t *)0x0) {
        QueryPerformanceCounter(apstack_special_x_10);
        puVar6 = apstack_special_x_10[0];
      }
      param_1[0x42] = (double)((int64_t)puVar6 - init_system_data_config) * init_system_data_config;
      *(int32_t *)(param_1 + 0x44) = 0;
      *(int8_t *)((int64_t)param_1 + 0x264) = 0;
      *(int32_t *)(param_1 + 0x4d) = 0;
      *(uint64_t *)((int64_t)param_1 + 500) = 0;
      *(int8_t *)(param_1 + 0x28) = 0;
      *(int8_t *)((int64_t)param_1 + 0x1fc) = 0;
      param_1[0x7b] = 0;
      param_1[0x57] = 0;
      lVar10 = SystemStateHandler(system_memory_pool_ptr,0xc,4,3);
      *(int8_t *)(lVar10 + 8) = 0;
      param_1[6] = lVar10;
      param_1[0x27] = 0;
      *(int8_t *)(param_1 + 7) = 0;
      *(int32_t *)((int64_t)param_1 + 0x3c) = 0xffffffff;
      param_1[0x43] = 0;
      *(int32_t *)(param_1 + 0x26) = 0xffffffff;
      puVar6 = (uint64_t *)SystemStateHandler(system_memory_pool_ptr,0x30,8,3);
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      *puVar6 = &system_handler1_ptr;
      *puVar6 = &system_handler2_ptr;
      *(int32_t *)(puVar6 + 1) = 0;
      *puVar6 = &processed_var_8624_ptr;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      *(int32_t *)(puVar6 + 5) = 3;
      param_1[0x78] = puVar6;
      return param_1;
    }
  } while( true );
}
// 函数: void function_04ca00(int64_t *param_1)
void function_04ca00(int64_t *param_1)
{
  if ((int64_t *)*param_1 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_1 + 0x38))();
  }
  return;
}
uint64_t *
function_04ca30(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  if (param_1[2] != 0) {
// WARNING: Subroutine does not return
    SystemCoreProcessor();
  }
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}
// 函数: void function_04caa0(uint64_t *param_1)
void function_04caa0(uint64_t *param_1)
{
  if (param_1[2] != 0) {
// WARNING: Subroutine does not return
    SystemCoreProcessor();
  }
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address