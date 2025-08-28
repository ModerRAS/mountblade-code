#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part651.c - 16 个函数
// 函数: void function_6382d0(int64_t *param_1,float *param_2)
void function_6382d0(int64_t *param_1,float *param_2)
{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  int8_t stack_array_f8 [32];
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  uint64_t local_var_b8;
  int64_t *plStack_b0;
  char acStack_a8 [128];
  uint64_t local_var_28;
  local_var_b8 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_f8;
  plVar1 = param_1 + 0xb;
  plStack_b0 = plVar1;
  iVar3 = _Mtx_lock(plVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  dStack_c8 = (double)*param_2;
  dStack_d0 = (double)param_2[3];
  dStack_d8 = (double)param_2[2];
  SystemCore_CacheManager(acStack_a8,0x80,&processed_var_6048_ptr,(double)param_2[1]);
  lVar2 = -1;
  do {
    lVar4 = lVar2;
    lVar2 = lVar4 + 1;
  } while (acStack_a8[lVar4 + 1] != '\0');
  iVar3 = (int)(lVar4 + 1);
  if (0 < iVar3) {
    CoreMemoryPoolProcessor(param_1 + 7,(int)param_1[9] + iVar3);
// WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(param_1 + 9) + param_1[8],acStack_a8,(int64_t)((int)lVar4 + 2));
  }
  if (*(char *)((int64_t)param_1 + 0x2c) != '\0') {
    (**(code **)(*param_1 + 0x118))(param_1);
  }
  iVar3 = _Mtx_unlock(plVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_f8);
}
int64_t * function_638410(int64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int iVar1;
  uint64_t uVar2;
  uVar2 = 0xfffffffffffffffe;
  iVar1 = _Mtx_lock(param_1 + 0xb);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  (**(code **)(*param_1 + 0x50))(param_1,*(int32_t *)(param_2 + 0x48));
  if (0 < *(int *)(param_2 + 0x48)) {
    CoreMemoryPoolProcessor(param_1 + 7,(int)param_1[9] + *(int *)(param_2 + 0x48));
// WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(param_1 + 9) + param_1[8],*(uint64_t *)(param_2 + 0x40),
           (int64_t)(*(int *)(param_2 + 0x48) + 1),param_4,uVar2);
  }
  if (*(char *)((int64_t)param_1 + 0x2c) != '\0') {
    (**(code **)(*param_1 + 0x118))(param_1);
  }
  iVar1 = _Mtx_unlock(param_1 + 0xb);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return param_1;
}
int64_t function_6384d0(int64_t param_1,int64_t *param_2)
{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  void *puVar4;
  void *plocal_var_70;
  byte *pbStack_68;
  int iStack_60;
  uint64_t local_var_58;
  void *plocal_var_50;
  void *plocal_var_48;
  int32_t local_var_40;
  uint64_t local_var_38;
  iVar2 = _Mtx_lock(param_1 + 0x58);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  plocal_var_70 = &system_data_buffer_ptr;
  local_var_58 = 0;
  pbStack_68 = (byte *)0x0;
  iStack_60 = 0;
  SystemFunction_000180637680(param_1);
  if (*(int *)(param_1 + 0x28) != 1) {
    plocal_var_50 = &system_data_buffer_ptr;
    local_var_38 = 0;
    plocal_var_48 = (void *)0x0;
    local_var_40 = 0;
    function_628780(param_1 + 0x38,&plocal_var_50);
    puVar4 = &system_buffer_ptr;
    if (plocal_var_48 != (void *)0x0) {
      puVar4 = plocal_var_48;
    }
    (**(code **)(*param_2 + 0x10))(param_2,puVar4);
    plocal_var_50 = &system_data_buffer_ptr;
    if (plocal_var_48 != (void *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    plocal_var_48 = (void *)0x0;
    local_var_38 = local_var_38 & 0xffffffff00000000;
    plocal_var_50 = &system_state_ptr;
    goto LAB_180638614;
  }
  function_628780(param_1 + 0x38,&plocal_var_70);
  iVar2 = (int)param_2[2];
  if (iStack_60 == iVar2) {
    if (iStack_60 != 0) {
      pbVar3 = pbStack_68;
      do {
        pbVar1 = pbVar3 + (param_2[1] - (int64_t)pbStack_68);
        iVar2 = (uint)*pbVar3 - (uint)*pbVar1;
        if (iVar2 != 0) break;
        pbVar3 = pbVar3 + 1;
      } while (*pbVar1 != 0);
    }
LAB_18063859d:
    if (iVar2 != 0) goto LAB_18063859f;
  }
  else {
    if (iStack_60 == 0) goto LAB_18063859d;
LAB_18063859f:
    UtilitiesSystem_PerformanceMonitor(&processed_var_6064_ptr);
  }
  *(int32_t *)(param_1 + 0x28) = 0;
LAB_180638614:
  plocal_var_70 = &system_data_buffer_ptr;
  if (pbStack_68 == (byte *)0x0) {
    pbStack_68 = (byte *)0x0;
    local_var_58 = local_var_58 & 0xffffffff00000000;
    plocal_var_70 = &system_state_ptr;
    iVar2 = _Mtx_unlock(param_1 + 0x58);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    return param_1;
  }
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}
int64_t function_638670(int64_t param_1,int64_t param_2)
{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  void *plocal_var_40;
  byte *pbStack_38;
  int iStack_30;
  uint64_t local_var_28;
  iVar2 = _Mtx_lock(param_1 + 0x58);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  plocal_var_40 = &system_data_buffer_ptr;
  local_var_28 = 0;
  pbStack_38 = (byte *)0x0;
  iStack_30 = 0;
  SystemFunction_000180637680(param_1);
  if (*(int *)(param_1 + 0x28) != 1) {
    function_628780(param_1 + 0x38,param_2);
    goto LAB_180638759;
  }
  function_628780(param_1 + 0x38,&plocal_var_40);
  iVar2 = *(int *)(param_2 + 0x10);
  if (iStack_30 == iVar2) {
    if (iStack_30 != 0) {
      pbVar3 = pbStack_38;
      do {
        pbVar1 = pbVar3 + (*(int64_t *)(param_2 + 8) - (int64_t)pbStack_38);
        iVar2 = (uint)*pbVar3 - (uint)*pbVar1;
        if (iVar2 != 0) break;
        pbVar3 = pbVar3 + 1;
      } while (*pbVar1 != 0);
    }
LAB_18063873d:
    if (iVar2 != 0) goto LAB_18063873f;
  }
  else {
    if (iStack_30 == 0) goto LAB_18063873d;
LAB_18063873f:
    UtilitiesSystem_PerformanceMonitor(&processed_var_6064_ptr);
  }
  *(int32_t *)(param_1 + 0x28) = 0;
LAB_180638759:
  plocal_var_40 = &system_data_buffer_ptr;
  if (pbStack_38 == (byte *)0x0) {
    pbStack_38 = (byte *)0x0;
    local_var_28 = local_var_28 & 0xffffffff00000000;
    plocal_var_40 = &system_state_ptr;
    iVar2 = _Mtx_unlock(param_1 + 0x58);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    return param_1;
  }
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}
// 函数: void function_6387b0(void)
void function_6387b0(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// 函数: void function_638880(void)
void function_638880(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// 函数: void function_638950(void)
void function_638950(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// 函数: void function_638a20(void)
void function_638a20(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// 函数: void function_638b40(void)
void function_638b40(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// 函数: void function_638c30(void)
void function_638c30(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// 函数: void function_638d00(void)
void function_638d00(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// 函数: void function_638dd0(void)
void function_638dd0(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
int64_t * function_638ea0(int64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int iVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  uVar3 = 0xfffffffffffffffe;
  iVar1 = _Mtx_lock(param_1 + 0xb);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  plVar2 = (int64_t *)(**(code **)(*param_1 + 0xa0))(param_1,param_2 + 4);
  plVar2 = (int64_t *)
           (**(code **)(*plVar2 + 0xa0))
                     (plVar2,param_2 + 8,*(code **)(*plVar2 + 0xa0),param_4,uVar3);
  plVar2 = (int64_t *)(**(code **)(*plVar2 + 0xa0))(plVar2,param_2 + 0xc);
  (**(code **)(*plVar2 + 0xa0))(plVar2,param_2);
  iVar1 = _Mtx_unlock(param_1 + 0xb);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return param_1;
}
int64_t * function_638f60(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int8_t uVar2;
  int iVar3;
  int aiStackX_8 [2];
  int64_t *plStackX_10;
  uint64_t uVar4;
  uVar4 = 0xfffffffffffffffe;
  plVar1 = param_1 + 0xb;
  plStackX_10 = plVar1;
  iVar3 = _Mtx_lock(plVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  (**(code **)(*param_1 + 200))(param_1,aiStackX_8,param_3,param_4,uVar4);
  iVar3 = 0;
  if (*(code **)(*param_2 + 8) == (code *)&processed_var_5984_ptr) {
    *(int32_t *)(param_2 + 9) = 0;
    if ((int8_t *)param_2[8] != (int8_t *)0x0) {
      *(int8_t *)param_2[8] = 0;
    }
    *(int32_t *)((int64_t)param_2 + 0x54) = 0;
  }
  else {
    (**(code **)(*param_2 + 8))(param_2);
  }
  if (0 < aiStackX_8[0]) {
    do {
      uVar2 = *(int8_t *)((uint64_t)*(uint *)((int64_t)param_1 + 0x54) + param_1[8]);
      *(uint *)((int64_t)param_1 + 0x54) = *(uint *)((int64_t)param_1 + 0x54) + 1;
      CoreMemoryPoolProcessor(param_2 + 7,(int)param_2[9] + 1);
      *(int8_t *)((uint64_t)*(uint *)(param_2 + 9) + param_2[8]) = uVar2;
      *(int8_t *)((uint64_t)((int)param_2[9] + 1) + param_2[8]) = 0;
      *(int *)(param_2 + 9) = (int)param_2[9] + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < aiStackX_8[0]);
  }
  iVar3 = _Mtx_unlock(plVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return param_1;
}
uint64_t *
function_6390d0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &processed_var_6384_ptr;
  if (*(char *)((int64_t)param_1 + 0xb1) != '\0') {
    function_639250();
  }
  _Mtx_destroy_in_situ();
  function_5065c0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xb8,param_3,param_4,uVar1);
  }
  return param_1;
}
// 函数: void function_639150(uint64_t *param_1)
void function_639150(uint64_t *param_1)
{
  *param_1 = &processed_var_6384_ptr;
  if (*(char *)((int64_t)param_1 + 0xb1) != '\0') {
    function_639250();
  }
  _Mtx_destroy_in_situ();
  *param_1 = &processed_var_5224_ptr;
  param_1[7] = &system_data_buffer_ptr;
  if (param_1[8] != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  param_1[8] = 0;
  *(int32_t *)(param_1 + 10) = 0;
  param_1[7] = &system_state_ptr;
  param_1[1] = &system_data_buffer_ptr;
  if (param_1[2] != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  param_1[2] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  param_1[1] = &system_state_ptr;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int function_6391a0(int64_t param_1,uint64_t param_2,char *param_3)
{
  uint64_t *puVar1;
  void *puVar2;
  bool bVar3;
  (**(code **)(*(int64_t *)(param_1 + 8) + 0x10))(param_1 + 8);
  if (*param_3 == '\0') {
    puVar1 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,3);
    puVar2 = &system_data_c7ec;
  }
  else {
    puVar1 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,3);
    puVar2 = &rendering_buffer_24_ptr;
  }
  *(int8_t *)(puVar1 + 2) = 0;
  *puVar1 = 0;
  SystemCore_Validator(puVar1,param_2,puVar2);
  *(uint64_t **)(param_1 + 0xa8) = puVar1;
  bVar3 = puVar1[1] == 0;
  if (!bVar3) {
    *(int8_t *)(param_1 + 0xb1) = 1;
  }
  *(bool *)(param_1 + 0xb0) = bVar3;
  return -(uint)bVar3;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint function_639250(int64_t param_1)
{
  int64_t lVar1;
  byte bVar2;
  uint uVar3;
  if (*(char *)(param_1 + 0xb1) == '\0') {
    return 1;
  }
  uVar3 = function_639300();
  if (uVar3 == 0) {
    bVar2 = function_62de90(*(uint64_t *)(param_1 + 0xa8));
    lVar1 = *(int64_t *)(param_1 + 0xa8);
    uVar3 = (uint)bVar2;
    if (lVar1 != 0) {
      if (*(int64_t *)(lVar1 + 8) != 0) {
        fclose();
        *(uint64_t *)(lVar1 + 8) = 0;
        LOCK();
        SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
        UNLOCK();
      }
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(lVar1);
    }
    *(uint64_t *)(param_1 + 0xa8) = 0;
  }
  *(int16_t *)(param_1 + 0xb0) = 1;
  return uVar3;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint function_639266(void)
{
  int64_t lVar1;
  byte bVar2;
  uint uVar3;
  int64_t unaff_RBX;
  uVar3 = function_639300();
  if (uVar3 == 0) {
    bVar2 = function_62de90(*(uint64_t *)(unaff_RBX + 0xa8));
    lVar1 = *(int64_t *)(unaff_RBX + 0xa8);
    uVar3 = (uint)bVar2;
    if (lVar1 != 0) {
      if (*(int64_t *)(lVar1 + 8) != 0) {
        fclose();
        *(uint64_t *)(lVar1 + 8) = 0;
        LOCK();
        SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
        UNLOCK();
      }
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(lVar1);
    }
    *(uint64_t *)(unaff_RBX + 0xa8) = 0;
  }
  *(int16_t *)(unaff_RBX + 0xb0) = 1;
  return uVar3;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int8_t function_63927d(void)
{
  int64_t lVar1;
  int8_t uVar2;
  int64_t unaff_RBX;
  uVar2 = function_62de90();
  lVar1 = *(int64_t *)(unaff_RBX + 0xa8);
  if (lVar1 != 0) {
    if (*(int64_t *)(lVar1 + 8) != 0) {
      fclose();
      *(uint64_t *)(lVar1 + 8) = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
      UNLOCK();
    }
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(lVar1);
  }
  *(uint64_t *)(unaff_RBX + 0xa8) = 0;
  *(int16_t *)(unaff_RBX + 0xb0) = 1;
  return uVar2;
}
int32_t function_6392d2(void)
{
  int64_t unaff_RBX;
  int32_t unaff_EDI;
  *(int16_t *)(unaff_RBX + 0xb0) = 1;
  return unaff_EDI;
}
uint64_t function_6392e8(void)
{
  return 1;
}
bool function_639300(int64_t param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  void *puVar4;
  if (*(char *)(param_1 + 0xb1) != '\0') {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 < *(int *)(param_1 + 0x48)) {
      puVar4 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        puVar4 = *(void **)(param_1 + 0x40);
      }
      iVar3 = fwrite(puVar4 + iVar1,1,(int64_t)(*(int *)(param_1 + 0x48) - iVar1),
                     *(uint64_t *)(*(int64_t *)(param_1 + 0xa8) + 8));
      iVar1 = *(int *)(param_1 + 0x48);
      iVar2 = *(int *)(param_1 + 0x30);
      fflush(*(uint64_t *)(*(int64_t *)(param_1 + 0xa8) + 8));
      *(int32_t *)(param_1 + 0x48) = 0;
      if (*(int8_t **)(param_1 + 0x40) != (int8_t *)0x0) {
        **(int8_t **)(param_1 + 0x40) = 0;
      }
      *(int32_t *)(param_1 + 0x30) = 0;
      return iVar3 != iVar1 - iVar2;
    }
  }
  return false;
}
bool function_639331(int64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)
{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int64_t unaff_RBX;
  if (*(int64_t *)(unaff_RBX + 0x40) != 0) {
    param_2 = *(int64_t *)(unaff_RBX + 0x40);
  }
  iVar3 = fwrite(param_1 + param_2,1,(int64_t)in_EAX,*(uint64_t *)(param_4 + 8));
  iVar1 = *(int *)(unaff_RBX + 0x48);
  iVar2 = *(int *)(unaff_RBX + 0x30);
  fflush(*(uint64_t *)(*(int64_t *)(unaff_RBX + 0xa8) + 8));
  *(int32_t *)(unaff_RBX + 0x48) = 0;
  if (*(int8_t **)(unaff_RBX + 0x40) != (int8_t *)0x0) {
    **(int8_t **)(unaff_RBX + 0x40) = 0;
  }
  *(int32_t *)(unaff_RBX + 0x30) = 0;
  return iVar3 != iVar1 - iVar2;
}
uint64_t function_63939f(void)
{
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_6393b0(uint64_t param_1,int64_t *param_2,uint64_t param_3)
void function_6393b0(uint64_t param_1,int64_t *param_2,uint64_t param_3)
{
  int64_t lVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int32_t uVar5;
  int iVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  void *puVar9;
  uint64_t astack_special_x_18 [2];
  int8_t stack_array_128 [32];
  uint64_t local_var_108;
  uint local_var_100;
  uint local_var_f8;
  uint local_var_f0;
  uint local_var_e8;
  uint local_var_e0;
  uint local_var_d8;
  uint local_var_d0;
  uint local_var_c8;
  uint local_var_c0;
  int32_t local_var_b8;
  int64_t alStack_b0 [3];
  int64_t *plStack_98;
  int64_t lStack_88;
  int8_t stack_array_80 [4];
  int8_t stack_array_7c [12];
  int8_t stack_array_70 [40];
  uint64_t local_var_48;
  uVar4 = stack_array_7c._4_8_;
  lVar3 = render_system_data_config;
  alStack_b0[1] = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_128;
  local_var_b8 = 0;
  alStack_b0[0] = render_system_data_config;
  lVar1 = render_system_data_config + 200;
  astack_special_x_18[0] = param_3;
  plStack_98 = param_2;
  lStack_88 = lVar1;
  iVar6 = _Mtx_lock(lVar1);
  stack_array_7c._4_8_ = uVar4;
  uVar5 = stack_array_7c._2_4_;
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
    stack_array_7c._2_4_ = uVar5;
    uVar5 = stack_array_7c._2_4_;
  }
  stack_array_7c._2_4_ = uVar5;
  stack_array_7c._0_4_ = stack_array_7c._2_4_;
  puVar2 = *(uint64_t **)(lVar3 + 0xa8);
  while (puVar2 != (uint64_t *)0x0) {
    if ((uint64_t)puVar2[4] < param_3) {
      puVar2 = (uint64_t *)*puVar2;
    }
    else {
      puVar2 = (uint64_t *)puVar2[1];
    }
  }
  CoCreateGuid(stack_array_80);
  *param_2 = (int64_t)&system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = (int64_t)&memory_allocator_3432_ptr;
  param_2[1] = (int64_t)(param_2 + 3);
  *(int32_t *)(param_2 + 2) = 0;
  *(int8_t *)(param_2 + 3) = 0;
  local_var_b8 = 1;
  local_var_c8 = SUB82(stack_array_7c._4_8_,6) & 0xff;
  local_var_d0 = SUB84(stack_array_7c._4_8_,4) >> 8 & 0xff;
  local_var_d8 = SUB84(stack_array_7c._4_8_,4) & 0xff;
  local_var_e0 = SUB84(stack_array_7c._4_8_,3) & 0xff;
  local_var_e8 = SUB84(stack_array_7c._4_8_,2) & 0xff;
  local_var_f0 = SUB84(stack_array_7c._4_8_,1) & 0xff;
  local_var_f8 = (uint)stack_array_7c._4_8_ & 0xff;
  local_var_c0 = (uint)SUB81(stack_array_7c._4_8_,7);
  local_var_100 = (uint)stack_array_7c._0_4_ >> 0x10;
  local_var_108 = (uint64_t *)(CONCAT44(local_var_108._4_4_,stack_array_7c._0_4_) & 0xffffffff0000ffff);
  SystemCore_CacheManager(stack_array_70,0x28,&processed_var_6672_ptr);
  (**(code **)(*param_2 + 0x18))(param_2,stack_array_70,0x26);
  puVar8 = (uint64_t *)(alStack_b0[0] + 0x98);
  puVar7 = puVar8;
  puVar2 = *(uint64_t **)(alStack_b0[0] + 0xa8);
  while (puVar2 != (uint64_t *)0x0) {
    if ((uint64_t)puVar2[4] < param_3) {
      puVar2 = (uint64_t *)*puVar2;
    }
    else {
      puVar7 = puVar2;
      puVar2 = (uint64_t *)puVar2[1];
    }
  }
  if ((puVar7 == puVar8) || (param_3 < (uint64_t)puVar7[4])) {
    local_var_108 = astack_special_x_18;
    puVar7 = (uint64_t *)function_639930(puVar8,alStack_b0,puVar8,puVar7);
    puVar7 = (uint64_t *)*puVar7;
  }
  *(int *)(puVar7 + 7) = (int)param_2[2];
  puVar9 = &system_buffer_ptr;
  if ((void *)param_2[1] != (void *)0x0) {
    puVar9 = (void *)param_2[1];
  }
  strcpy_s(puVar7[6],0x80,puVar9);
  iVar6 = _Mtx_unlock(lVar1);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_128);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_639630(uint8_t *param_1,int64_t *param_2,char param_3,char param_4)
void function_639630(uint8_t *param_1,int64_t *param_2,char param_3,char param_4)
{
  uint64_t uVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  void *puVar4;
  uint64_t uVar5;
  int8_t stack_array_e8 [32];
  uint local_var_c8;
  uint local_var_c0;
  uint local_var_b8;
  uint local_var_b0;
  uint local_var_a8;
  uint local_var_a0;
  uint local_var_98;
  uint local_var_90;
  uint local_var_88;
  uint local_var_80;
  int32_t local_var_78;
  int16_t local_var_74;
  ushort local_var_72;
  int8_t local_var_70;
  byte bStack_6f;
  byte bStack_6e;
  byte bStack_6d;
  int8_t local_var_6c;
  byte bStack_6b;
  byte bStack_6a;
  byte bStack_69;
  int8_t stack_array_68 [40];
  uint64_t local_var_40;
  local_var_40 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_e8;
  local_var_78 = *(int32_t *)param_1;
  local_var_c8 = *(uint *)((int64_t)param_1 + 4);
  local_var_b8 = *(uint *)(param_1 + 1);
  local_var_98 = *(uint *)((int64_t)param_1 + 0xc);
  uVar3 = *(uint8_t *)(param_1 + 1);
  local_var_74 = (int16_t)local_var_c8;
  local_var_72 = (ushort)(local_var_c8 >> 0x10);
  local_var_70 = (int8_t)local_var_b8;
  bStack_6f = (byte)(local_var_b8 >> 8);
  bStack_6e = (byte)(local_var_b8 >> 0x10);
  bStack_6d = (byte)(local_var_b8 >> 0x18);
  local_var_6c = (int8_t)local_var_98;
  bStack_6b = (byte)(local_var_98 >> 8);
  bStack_6a = (byte)(local_var_98 >> 0x10);
  bStack_69 = (byte)(local_var_98 >> 0x18);
  if (param_3 == '\0') {
    if (param_4 == '\0') {
      uVar5 = 0x20;
      puVar4 = &processed_var_6920_ptr;
    }
    else {
      uVar5 = 0x24;
      puVar4 = &processed_var_6768_ptr;
    }
  }
  else {
    if (param_4 != '\0') {
      uVar2 = CONCAT16(bStack_6a,CONCAT15(bStack_6b,uVar3));
      uVar1 = CONCAT17(bStack_69,uVar2);
      uVar5 = 0x26;
      local_var_88 = (ushort)((uint64_t)uVar1 >> 0x30) & 0xff;
      local_var_98 = (uint)((uint64_t)uVar1 >> 0x20);
      local_var_90 = local_var_98 >> 8 & 0xff;
      local_var_98 = local_var_98 & 0xff;
      local_var_a0 = (uint)((uint7)uVar2 >> 0x18) & 0xff;
      local_var_a8 = (uint)(CONCAT15(bStack_6b,uVar3) >> 0x10) & 0xff;
      local_var_b0 = (uint)((uint5)uVar3 >> 8) & 0xff;
      local_var_b8 = (uint)uVar3 & 0xff;
      local_var_80 = (uint)bStack_69;
      local_var_c0 = (uint)local_var_72;
      local_var_c8 = (uint)(CONCAT26(local_var_72,*param_1) >> 0x20) & 0xffff;
      SystemCore_CacheManager(stack_array_68,0x28,&processed_var_6672_ptr);
      goto LAB_1806397f4;
    }
    uVar5 = 0x22;
    puVar4 = &processed_var_6848_ptr;
  }
  local_var_80 = (uint)bStack_69;
  local_var_88 = (uint)bStack_6a;
  local_var_90 = (uint)bStack_6b;
  local_var_98 = local_var_98 & 0xff;
  local_var_a0 = (uint)bStack_6d;
  local_var_a8 = (uint)bStack_6e;
  local_var_b0 = (uint)bStack_6f;
  local_var_b8 = local_var_b8 & 0xff;
  local_var_c0 = (uint)local_var_72;
  local_var_c8 = local_var_c8 & 0xffff;
  SystemCore_CacheManager(stack_array_68,0x28,puVar4,local_var_78);
LAB_1806397f4:
  (**(code **)(*param_2 + 0x18))(param_2,stack_array_68,uVar5);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_40 ^ (uint64_t)stack_array_e8);
}
// 函数: void function_639688(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_639688(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  byte in_AL;
  int64_t unaff_RBP;
  int64_t in_R11;
  int unaff_R12D;
  int64_t *unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  uint local_var_28;
  uint local_var_30;
  uint local_var_38;
  uint local_var_40;
  uint local_var_48;
  uint local_buffer_50;
  uint local_buffer_58;
  uint local_buffer_60;
  uint local_buffer_68;
  *(uint64_t *)(in_R11 + 0x18) = unaff_R14;
  local_buffer_50 = (uint)((uint64_t)param_1 >> 0x20);
  local_buffer_58 = local_buffer_50 >> 8 & 0xff;
  local_buffer_50 = local_buffer_50 & 0xff;
  local_var_48 = (uint)((uint64_t)param_1 >> 0x18) & 0xff;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  local_var_40 = (uint)((uint64_t)param_1 >> 0x10) & 0xff;
  local_var_38 = (uint)((uint64_t)param_1 >> 8) & 0xff;
  local_var_30 = (uint)param_1 & 0xff;
  local_buffer_68 = (uint)(byte)((uint64_t)param_1 >> 0x38);
  local_buffer_60 = (uint)in_AL;
  local_var_28 = (uint)(ushort)((uint64_t)param_2 >> 0x30);
  SystemCore_CacheManager(unaff_RBP + -9,unaff_R12D + 2,&processed_var_6672_ptr,param_4,
                (uint)((uint64_t)param_4 >> 0x20) & 0xffff);
  (**(code **)(*unaff_R13 + 0x18))();
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1f) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_639738(void)
void function_639738(void)
{
  int64_t unaff_RBP;
  int64_t *unaff_R13;
  uint local_var_28;
  uint local_var_30;
  uint local_var_38;
  uint local_var_40;
  uint local_var_48;
  uint local_buffer_50;
  uint local_buffer_58;
  uint local_buffer_60;
  uint local_buffer_68;
  local_buffer_68 = (uint)*(byte *)(unaff_RBP + -10);
  local_buffer_60 = (uint)*(byte *)(unaff_RBP + -0xb);
  local_buffer_58 = (uint)*(byte *)(unaff_RBP + -0xc);
  local_buffer_50 = (uint)*(byte *)(unaff_RBP + -0xd);
  local_var_48 = (uint)*(byte *)(unaff_RBP + -0xe);
  local_var_40 = (uint)*(byte *)(unaff_RBP + -0xf);
  local_var_38 = (uint)*(byte *)(unaff_RBP + -0x10);
  local_var_30 = (uint)*(byte *)(unaff_RBP + -0x11);
  local_var_28 = (uint)*(ushort *)(unaff_RBP + -0x13);
  SystemCore_CacheManager(unaff_RBP + -9,0x28,&processed_var_6848_ptr,*(int32_t *)(unaff_RBP + -0x19),
                *(int16_t *)(unaff_RBP + -0x15));
  (**(code **)(*unaff_R13 + 0x18))();
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1f) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_639830(uint64_t param_1,uint64_t param_2)
void function_639830(uint64_t param_1,uint64_t param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  lVar2 = render_system_data_config;
  lVar1 = render_system_data_config + 200;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  puVar6 = (uint64_t *)(lVar2 + 0x98);
  puVar4 = *(uint64_t **)(lVar2 + 0xa8);
  puVar5 = puVar6;
  if (puVar4 != (uint64_t *)0x0) {
    do {
      if ((uint64_t)puVar4[4] < param_2) {
        puVar4 = (uint64_t *)*puVar4;
      }
      else {
        puVar5 = puVar4;
        puVar4 = (uint64_t *)puVar4[1];
      }
    } while (puVar4 != (uint64_t *)0x0);
    if ((puVar5 != puVar6) && ((uint64_t)puVar5[4] <= param_2)) goto LAB_1806398bc;
  }
  puVar5 = puVar6;
LAB_1806398bc:
  if (puVar5 != puVar6) {
    *(int64_t *)(lVar2 + 0xb8) = *(int64_t *)(lVar2 + 0xb8) + -1;
    SystemFunction_00018066bd70(puVar5);
    RenderingSystem_BufferHandler(puVar5,puVar6);
    puVar5[5] = &system_state_ptr;
    if (puVar5 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(puVar5);
    }
  }
  iVar3 = _Mtx_unlock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
function_639930(int64_t *param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
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
LAB_1806399a2:
      uVar5 = 0;
      goto LAB_1806399a5;
    }
  }
  else {
    plVar1 = (int64_t *)SystemFunction_00018066bd70(param_4);
    if (((uint64_t)param_4[4] < *param_5) && (*param_5 < (uint64_t)plVar1[4])) {
      if (*param_4 == 0) goto LAB_1806399a2;
      uVar5 = 1;
      param_4 = plVar1;
LAB_1806399a5:
      if (param_4 != (int64_t *)0x0) {
        function_639ad0(param_1,param_2,param_4,uVar5,param_5);
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
      goto LAB_180639a12;
    }
    plVar2 = (int64_t *)SystemFunction_00018066b9a0(plVar1);
  }
  uVar3 = *param_5;
  if (uVar3 <= (uint64_t)plVar2[4]) {
    *param_2 = plVar2;
    return param_2;
  }
LAB_180639a12:
  if ((plVar1 == param_1) || (uVar3 < (uint64_t)plVar1[4])) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  lVar4 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0xc0,(char)param_1[5]);
  *(uint64_t *)(lVar4 + 0x20) = *param_5;
  *(uint64_t *)(lVar4 + 0x28) = &system_state_ptr;
  *(uint64_t *)(lVar4 + 0x30) = 0;
  *(int32_t *)(lVar4 + 0x38) = 0;
  *(uint64_t *)(lVar4 + 0x28) = &memory_allocator_3432_ptr;
  *(int8_t **)(lVar4 + 0x30) = (int8_t *)(lVar4 + 0x40);
  *(int32_t *)(lVar4 + 0x38) = 0;
  *(int8_t *)(lVar4 + 0x40) = 0;
// WARNING: Subroutine does not return
  SystemNetworkHandler(lVar4,plVar1,param_1,uVar5);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_639ad0(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
void function_639ad0(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
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
  lVar1 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0xc0,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  *(uint64_t *)(lVar1 + 0x20) = *param_5;
  *(uint64_t *)(lVar1 + 0x28) = &system_state_ptr;
  *(uint64_t *)(lVar1 + 0x30) = 0;
  *(int32_t *)(lVar1 + 0x38) = 0;
  *(uint64_t *)(lVar1 + 0x28) = &memory_allocator_3432_ptr;
  *(int8_t **)(lVar1 + 0x30) = (int8_t *)(lVar1 + 0x40);
  *(int32_t *)(lVar1 + 0x38) = 0;
  *(int8_t *)(lVar1 + 0x40) = 0;
// WARNING: Subroutine does not return
  SystemNetworkHandler(lVar1,param_3,param_1,uVar2);
}