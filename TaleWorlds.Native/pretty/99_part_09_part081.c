#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_09_part081.c - 11 个函数
// 函数: void function_5f2840(uint64_t *param_1,uint param_2)
void function_5f2840(uint64_t *param_1,uint param_2)
{
  int64_t lVar1;
  ushort uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  void *puVar5;
  uint64_t local_var_78;
  int64_t lStack_70;
  uint64_t local_var_60;
  int64_t lStack_58;
  uint64_t local_var_50;
  int16_t local_var_48;
  int8_t local_var_46;
  void *plocal_var_40;
  void *plocal_var_38;
  function_159730(param_1,&plocal_var_40);
  local_var_78 = 0;
  lStack_70 = 0;
  puVar5 = &system_buffer_ptr;
  if (plocal_var_38 != (void *)0x0) {
    puVar5 = plocal_var_38;
  }
  SystemCore_Validator(&local_var_78,puVar5,&processed_var_4880_ptr);
  lVar1 = lStack_70;
  if (lStack_70 != 0) {
    local_var_60 = 0;
    lStack_58 = 0;
    local_var_50 = 0;
    local_var_48 = 0;
    local_var_46 = 3;
    uVar3 = _ftelli64(lStack_70);
    _fseeki64(lVar1,0,2);
    uVar4 = _ftelli64(lVar1);
    _fseeki64(lVar1,uVar3,0);
    System_BufferManager(&local_var_60,uVar4);
    fread(lStack_58,1,uVar4,lVar1);
    fclose(lVar1);
    lStack_70 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
    lVar1 = lStack_58 + 0x32;
    uVar2 = *(ushort *)(lStack_58 + 0x30);
    lStack_58 = lVar1;
    if (uVar2 != param_2) {
      function_6270c0(&processed_var_4640_ptr,&processed_var_4848_ptr);
    }
// WARNING: Subroutine does not return
    memcpy(*param_1,lVar1,((uint)uVar2 + (uint)uVar2 * 4) * 4);
  }
  puVar5 = &system_buffer_ptr;
  if (plocal_var_38 != (void *)0x0) {
    puVar5 = plocal_var_38;
  }
  SystemDataInitializer(&processed_var_5040_ptr,puVar5);
  plocal_var_40 = &system_data_buffer_ptr;
  if (plocal_var_38 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_5f2a20(uint64_t param_1,uint64_t param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  void *puVar3;
  void *plocal_var_98;
  void *plocal_var_90;
  int32_t local_var_80;
  void *plocal_var_78;
  void *plocal_var_70;
  uint64_t local_var_50;
  int64_t lStack_48;
  uint64_t local_var_38;
  int64_t lStack_30;
  uint64_t local_var_20;
  local_var_20 = 0xfffffffffffffffe;
  function_159730(param_1,&plocal_var_98);
  local_var_50 = 0;
  lStack_48 = 0;
  puVar3 = &system_buffer_ptr;
  if (plocal_var_90 != (void *)0x0) {
    puVar3 = plocal_var_90;
  }
  SystemCore_Validator(&local_var_50,puVar3,&processed_var_4880_ptr);
  lVar1 = lStack_48;
  if (lStack_48 == 0) {
    plocal_var_98 = &system_data_buffer_ptr;
    if (plocal_var_90 != (void *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    uVar2 = 0;
  }
  else {
    fread(param_2,0x30,1,lStack_48);
    fclose(lVar1);
    lStack_48 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
    plocal_var_98 = &system_data_buffer_ptr;
    if (plocal_var_90 != (void *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_90 = (void *)0x0;
    local_var_80 = 0;
    plocal_var_98 = &system_state_ptr;
    function_1597a0(0,&plocal_var_78);
    local_var_38 = 0;
    lStack_30 = 0;
    puVar3 = &system_buffer_ptr;
    if (plocal_var_70 != (void *)0x0) {
      puVar3 = plocal_var_70;
    }
    SystemCore_Validator(&local_var_38,puVar3,&processed_var_4880_ptr);
    if (lStack_30 == 0) {
      plocal_var_78 = &system_data_buffer_ptr;
      if (plocal_var_70 != (void *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      uVar2 = 0;
    }
    else {
      fclose();
      lStack_30 = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
      UNLOCK();
      plocal_var_78 = &system_data_buffer_ptr;
      if (plocal_var_70 != (void *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_5f2bd0(uint64_t param_1,int *param_2)
void function_5f2bd0(uint64_t param_1,int *param_2)
{
  int8_t stack_array_48 [32];
  uint64_t local_var_28;
  uint64_t local_var_20;
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_48;
  local_var_28 = 0;
  local_var_20 = 0;
  function_15a900(param_1,param_2,&local_var_28);
  if ((((*param_2 == (int)local_var_28) && (param_2[1] == local_var_28._4_4_)) &&
      (param_2[2] == (int)local_var_20)) && (param_2[3] == local_var_20._4_4_)) {
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_48);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_48);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_5f2c50(int64_t *param_1)
void function_5f2c50(int64_t *param_1)
{
  uint64_t *puVar1;
  int64_t lVar2;
  short sVar3;
  uint uVar4;
  uint64_t uVar5;
  int64_t **pplVar6;
  int32_t *puVar7;
  int64_t lVar8;
  ushort uVar9;
  int iVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint64_t uVar13;
  int64_t *aplStack_58 [2];
  void *plocal_var_48;
  code *pcStack_40;
  int64_t **pplStack_38;
  uint64_t local_var_30;
  int64_t **pplStack_28;
  int64_t ***ppplStack_20;
  local_var_30 = 0xfffffffffffffffe;
  uVar5 = *(uint64_t *)(system_system_data_memory[0x3f] + 0x18);
  sVar3 = (**(code **)(*system_system_data_memory + 0xe8))();
  uVar9 = sVar3 - (short)uVar5;
  *(short *)(param_1 + 1) = sVar3;
  uVar13 = (uint64_t)uVar9;
  uVar4 = ((uint)uVar5 & 0xffff) + (uint)uVar9;
  uVar11 = (uint64_t)uVar4;
  if (uVar4 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar4 * 0x14);
    iVar10 = 0;
    puVar7 = (int32_t *)(lVar8 + 8);
    do {
      *(uint64_t *)(puVar7 + -2) = 0;
      *puVar7 = 0x3f800000;
      puVar7[1] = 0xffffffff;
      puVar7[2] = 0xffff;
      iVar10 = iVar10 + 1;
      puVar7 = puVar7 + 5;
    } while ((uint64_t)(int64_t)iVar10 < uVar11);
  }
  *param_1 = lVar8;
  uVar5 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
  pplStack_38 = aplStack_58;
  plocal_var_48 = &render_data_ptr;
  pcStack_40 = function_5f3060;
  aplStack_58[0] = param_1;
  pplVar6 = (int64_t **)SystemCore_ErrorHandler(uVar5,aplStack_58);
  pplStack_28 = pplVar6;
  if (pplVar6 != (int64_t **)0x0) {
    (*(code *)(*pplVar6)[5])(pplVar6);
  }
  uVar5 = system_context_ptr;
  ppplStack_20 = &pplStack_38;
  pplStack_38 = pplVar6;
  if (pplVar6 != (int64_t **)0x0) {
    (*(code *)(*pplVar6)[5])(pplVar6);
  }
  SystemCore_TimerManager(uVar5,&pplStack_38);
  if (pplVar6 != (int64_t **)0x0) {
    (*(code *)(*pplVar6)[7])(pplVar6);
  }
  function_5f2840(param_1,(uint)uVar9);
  if (uVar13 < uVar11) {
    lVar8 = uVar13 * 0x14;
    lVar12 = uVar11 - uVar13;
    do {
      lVar2 = *param_1;
      puVar1 = (uint64_t *)(lVar8 + lVar2);
      *puVar1 = 0x461c400000000000;
      puVar1[1] = 0xffffffff3f800000;
      *(int32_t *)(lVar8 + 0x10 + lVar2) = 0xffff;
      lVar8 = lVar8 + 0x14;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}
// 函数: void function_5f2e20(int64_t param_1,int64_t param_2)
void function_5f2e20(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  if (param_2 == 0) {
    *(int32_t *)(param_1 + 0x10) = 0;
    **(int8_t **)(param_1 + 8) = 0;
    return;
  }
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  if ((int)lVar1 < 10) {
    *(int *)(param_1 + 0x10) = (int)lVar1;
// WARNING: Could not recover jumptable at 0x0001805f2e57. Too many branches
// WARNING: Treating indirect jump as call
    strcpy_s(*(uint64_t *)(param_1 + 8),10);
    return;
  }
  SystemDataInitializer(&processed_var_616_ptr,10,param_2);
  *(int32_t *)(param_1 + 0x10) = 0;
  **(int8_t **)(param_1 + 8) = 0;
  return;
}
// 函数: void function_5f2ea0(int64_t param_1,uint64_t param_2,int param_3)
void function_5f2ea0(int64_t param_1,uint64_t param_2,int param_3)
{
  if (param_3 + 1 < 10) {
// WARNING: Subroutine does not return
    memcpy(*(int8_t **)(param_1 + 8),param_2,(int64_t)param_3);
  }
  **(int8_t **)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  return;
}
// 函数: void function_5f2ebf(void)
void function_5f2ebf(void)
{
// WARNING: Subroutine does not return
  memcpy();
}
// 函数: void function_5f2ee4(int8_t *param_1)
void function_5f2ee4(int8_t *param_1)
{
  int64_t unaff_RDI;
  *param_1 = 0;
  *(int32_t *)(unaff_RDI + 0x10) = 0;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_5f2f00(int64_t param_1,int64_t param_2,int64_t param_3)
void function_5f2f00(int64_t param_1,int64_t param_2,int64_t param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int8_t stack_array_98 [32];
  uint64_t local_var_78;
  void *plocal_var_70;
  int8_t *plocal_var_68;
  int32_t local_var_60;
  int8_t stack_array_58 [16];
  uint64_t local_var_48;
  local_var_78 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_98;
  plocal_var_70 = &processed_var_5352_ptr;
  plocal_var_68 = stack_array_58;
  local_var_60 = 0;
  stack_array_58[0] = 0;
  lVar1 = strstr(*(uint64_t *)(param_1 + 8));
  if (lVar1 != 0) {
    lVar2 = -1;
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar3) != '\0');
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(lVar2 + param_3) != '\0');
// WARNING: Subroutine does not return
    memcpy(plocal_var_68,*(int64_t *)(param_1 + 8),lVar1 - *(int64_t *)(param_1 + 8));
  }
  plocal_var_70 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_98);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_5f3060(uint64_t param_1)
void function_5f3060(uint64_t param_1)
{
  char cVar1;
  void *puVar2;
  void *puVar3;
  int8_t stack_array_68 [32];
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  uint64_t local_var_28;
  uint64_t local_var_20;
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_68;
  local_var_48 = 0;
  local_var_40 = 0;
  local_var_38 = 0;
  local_var_30 = 0;
  local_var_28 = 0;
  local_var_20 = 0;
  cVar1 = function_5f2a20(param_1,&local_var_48);
  if (cVar1 == '\0') {
    puVar3 = &processed_var_4848_ptr;
    puVar2 = &processed_var_4864_ptr;
  }
  else {
    cVar1 = function_5f2bd0();
    if (cVar1 != '\0') goto LAB_1805f30ce;
    puVar3 = &processed_var_5272_ptr;
    puVar2 = &processed_var_5072_ptr;
  }
  function_6270c0(puVar2,puVar3);
LAB_1805f30ce:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_68);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_5f3120(int64_t param_1)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t uVar4;
  *(int64_t *)(param_1 + 8) = 0;
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 0x28) = 0;
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(uint64_t *)(param_1 + 0x38) = 0;
  *(uint64_t *)(param_1 + 0x40) = 0;
  *(uint64_t *)(param_1 + 0x48) = 0;
  *(uint64_t *)(param_1 + 0x50) = 0;
  *(int32_t *)(param_1 + 0x58) = 3;
  *(uint64_t *)(param_1 + 0x10) = 8;
  lVar3 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x40,*(int8_t *)(param_1 + 0x58));
  *(int64_t *)(param_1 + 8) = lVar3;
  plVar1 = (int64_t *)(lVar3 + (*(int64_t *)(param_1 + 0x10) - 1U >> 1) * 8);
  plVar2 = plVar1;
  for (uVar4 = (uint64_t)(plVar1 <= plVar1 + 1); uVar4 != 0; uVar4 = uVar4 - 1) {
    lVar3 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0xe0,*(int8_t *)(param_1 + 0x58));
    *plVar2 = lVar3;
    plVar2 = plVar2 + 1;
  }
  *(int64_t **)(param_1 + 0x30) = plVar1;
  lVar3 = *plVar1;
  *(int64_t *)(param_1 + 0x20) = lVar3;
  *(int64_t *)(param_1 + 0x28) = lVar3 + 0xe0;
  *(uint64_t *)(param_1 + 0x18) = *(uint64_t *)(param_1 + 0x20);
  *(int64_t **)(param_1 + 0x50) = plVar1;
  lVar3 = *plVar1;
  *(int64_t *)(param_1 + 0x40) = lVar3;
  *(int64_t *)(param_1 + 0x48) = lVar3 + 0xe0;
  *(uint64_t *)(param_1 + 0x38) = *(uint64_t *)(param_1 + 0x40);
  function_5f4e90(param_1 + 0x60);
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(param_1 + 0x310,2);
  DataStructureManager(param_1 + 0x360,0xcc8,8,function_5f32b0,function_4aa030);
  *(int32_t *)(param_1 + 4) = 0x40000000;
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t * function_5f32b0(int64_t *param_1)
{
  int64_t lVar1;
  int64_t *plVar2;
  *param_1 = system_system_data_memory + 0x1b8;
  lVar1 = 0x18;
  DataStructureManager(param_1 + 1,8,0x18,&SUB_18005d5f0,SystemTimer);
  DataStructureManager(param_1 + 0x19,0x20,0x18,function_056de0,function_046860);
  plVar2 = param_1 + 0xf1;
  do {
    SystemFunction_0001805f5f90(plVar2);
    plVar2 = plVar2 + 7;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_5f3360(int64_t param_1)
void function_5f3360(int64_t param_1)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  char cVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int8_t stack_array_2b8 [32];
  uint64_t local_var_298;
  int64_t lStack_290;
  int32_t local_var_288;
  uint64_t local_var_280;
  uint64_t local_var_278;
  uint64_t local_var_270;
  uint64_t local_var_268;
  int32_t local_var_34;
  int32_t local_var_30;
  uint64_t local_var_28;
  local_var_298 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2b8;
  lVar12 = param_1 + 0x360;
  plVar10 = (int64_t *)(param_1 + 0x368);
  lVar13 = 8;
  do {
    lVar11 = 0x18;
    plVar9 = plVar10;
    do {
      if (((int64_t *)*plVar9 != (int64_t *)0x0) &&
         (cVar8 = (**(code **)(*(int64_t *)*plVar9 + 0xd8))(), cVar8 != '\0')) {
        (**(code **)(*(int64_t *)*plVar9 + 0x68))();
      }
      plVar9 = plVar9 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    SystemFunction_0001805f3b80(lVar12);
    lVar12 = lVar12 + 0xcc8;
    plVar10 = plVar10 + 0x199;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  function_5f4e90(&lStack_290);
  plVar10 = (int64_t *)(param_1 + 0x60);
  if (plVar10 != &lStack_290) {
    lVar12 = *plVar10;
    *plVar10 = lStack_290;
    uVar1 = *(int32_t *)(param_1 + 0x68);
    *(int32_t *)(param_1 + 0x68) = local_var_288;
    uVar4 = *(uint64_t *)(param_1 + 0x70);
    *(uint64_t *)(param_1 + 0x70) = local_var_280;
    uVar5 = *(uint64_t *)(param_1 + 0x78);
    *(uint64_t *)(param_1 + 0x78) = local_var_278;
    uVar6 = *(uint64_t *)(param_1 + 0x80);
    *(uint64_t *)(param_1 + 0x80) = local_var_270;
    uVar7 = *(uint64_t *)(param_1 + 0x88);
    *(uint64_t *)(param_1 + 0x88) = local_var_268;
    uVar2 = *(int32_t *)(param_1 + 700);
    *(int32_t *)(param_1 + 700) = local_var_34;
    uVar3 = *(int32_t *)(param_1 + 0x2c0);
    *(int32_t *)(param_1 + 0x2c0) = local_var_30;
    lStack_290 = lVar12;
    local_var_288 = uVar1;
    local_var_280 = uVar4;
    local_var_278 = uVar5;
    local_var_270 = uVar6;
    local_var_268 = uVar7;
    local_var_34 = uVar2;
    local_var_30 = uVar3;
    function_5f4fe0(plVar10);
    lVar12 = *plVar10;
    while (lVar13 = lStack_290, lVar12 != 0) {
      *(int64_t **)(lVar12 + 0x50) = plVar10;
      plVar9 = (int64_t *)(lVar12 + 8);
      lVar12 = *plVar9 + -8;
      if (*plVar9 == 0) {
        lVar12 = 0;
      }
    }
    while (lVar13 != 0) {
      *(int64_t **)(lVar13 + 0x50) = &lStack_290;
      plVar10 = (int64_t *)(lVar13 + 8);
      lVar13 = *plVar10 + -8;
      if (*plVar10 == 0) {
        lVar13 = 0;
      }
    }
  }
  function_4a9f00(&lStack_290);
  if ((*(int64_t **)(param_1 + 0x30) != *(int64_t **)(param_1 + 0x50)) &&
     (*(int64_t *)(param_1 + 0x40) != 0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plVar10 = *(int64_t **)(param_1 + 0x30) + 1;
  if (plVar10 < *(int64_t **)(param_1 + 0x50)) {
    do {
      if (*plVar10 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 < *(int64_t **)(param_1 + 0x50));
  }
  *(int32_t *)(param_1 + 0x38) = *(int32_t *)(param_1 + 0x18);
  *(int32_t *)(param_1 + 0x3c) = *(int32_t *)(param_1 + 0x1c);
  *(int32_t *)(param_1 + 0x40) = *(int32_t *)(param_1 + 0x20);
  *(int32_t *)(param_1 + 0x44) = *(int32_t *)(param_1 + 0x24);
  *(int32_t *)(param_1 + 0x48) = *(int32_t *)(param_1 + 0x28);
  *(int32_t *)(param_1 + 0x4c) = *(int32_t *)(param_1 + 0x2c);
  *(int32_t *)(param_1 + 0x50) = *(int32_t *)(param_1 + 0x30);
  *(int32_t *)(param_1 + 0x54) = *(int32_t *)(param_1 + 0x34);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_2b8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_5f35b0(int8_t *param_1,float param_2)
void function_5f35b0(int8_t *param_1,float param_2)
{
  int64_t *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int *piVar9;
  int8_t *puVar10;
  int64_t lVar11;
  int64_t lVar12;
  float *pfVar13;
  int *piVar14;
  float *pfVar15;
  uint64_t *puVar16;
  int64_t lVar17;
  float *pfVar18;
  uint64_t *puVar19;
  uint64_t *puVar20;
  uint uVar21;
  int *piVar22;
  float fVar23;
  float fVar24;
  uint stack_special_x_8;
  int64_t lStackX_18;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  fVar23 = *(float *)(param_1 + 4);
  *param_1 = 1;
  *(float *)(param_1 + 4) = fVar23 - param_2;
  if (fVar23 - param_2 <= 0.0) {
    puVar10 = param_1 + 0x360;
    lVar12 = 8;
    *(int32_t *)(param_1 + 4) = 0x40000000;
    do {
      SystemFunction_0001805f3b80(puVar10);
      puVar10 = puVar10 + 0xcc8;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    cVar8 = function_5f5130(param_1 + 0x60,&fStack_a8);
    while (cVar8 != '\0') {
      function_5f5ac0(param_1 + 8,&fStack_a8);
      cVar8 = function_5f5130(param_1 + 0x60,&fStack_a8);
    }
    lVar12 = *(int64_t *)(param_1 + 0x18);
    piVar22 = (int *)0x0;
    lVar17 = *(int64_t *)(param_1 + 0x30);
    bVar6 = false;
    bVar7 = false;
    stack_special_x_8 = 0;
    lVar11 = *(int64_t *)(param_1 + 0x38) - *(int64_t *)(param_1 + 0x40) >> 0x3f;
    if ((*(int64_t *)(param_1 + 0x38) - *(int64_t *)(param_1 + 0x40)) / 0x1c + lVar11 +
        (*(int64_t *)(param_1 + 0x28) - lVar12) / 0x1c +
        ((*(int64_t *)(param_1 + 0x50) - lVar17 >> 3) + -1) * 8 != lVar11) {
      lStackX_18 = 0;
      piVar9 = piVar22;
      do {
        lVar11 = (lVar12 - *(int64_t *)(param_1 + 0x20)) / 0x1c + lStackX_18;
        lVar12 = lVar11 + 0x1000000;
        lVar12 = ((int64_t)(lVar12 + (uint64_t)((uint)(lVar12 >> 0x3f) & 7)) >> 3) * 8 +
                 -0x1000000;
        piVar14 = (int *)((lVar11 - lVar12) * 0x1c + *(int64_t *)(lVar12 + lVar17));
        puVar20 = (uint64_t *)(param_1 + (int64_t)*piVar14 * 0xcc8 + 0x360);
        fVar23 = (float)atan2f(((float *)*puVar20)[1] - (float)piVar14[2],
                               *(float *)*puVar20 - (float)piVar14[1]);
        fVar24 = fVar23 - 0.1308997;
        if (fVar23 < 0.1308997) {
          fVar24 = fVar23 + 6.1522856;
        }
        lVar12 = (int64_t)(int)(fVar24 * 3.8197186 - 0.0001);
        puVar16 = (uint64_t *)puVar20[lVar12 * 4 + 0x1a];
        if (puVar16 < (uint64_t *)puVar20[lVar12 * 4 + 0x1b]) {
          puVar20[lVar12 * 4 + 0x1a] = (int64_t)puVar16 + 0x1c;
          uVar5 = *(uint64_t *)(piVar14 + 2);
          *puVar16 = *(uint64_t *)piVar14;
          puVar16[1] = uVar5;
          puVar16[2] = *(uint64_t *)(piVar14 + 4);
          *(int *)(puVar16 + 3) = piVar14[6];
          stack_special_x_8 = (uint)piVar9;
        }
        else {
          puVar19 = (uint64_t *)puVar20[lVar12 * 4 + 0x19];
          lVar17 = ((int64_t)puVar16 - (int64_t)puVar19) / 0x1c;
          if (lVar17 == 0) {
            lVar17 = 1;
LAB_1805f3837:
            piVar9 = (int *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar17 * 0x1c,
                                          *(int8_t *)(puVar20 + lVar12 * 4 + 0x1c));
            puVar19 = (uint64_t *)puVar20[lVar12 * 4 + 0x19];
            puVar16 = (uint64_t *)puVar20[lVar12 * 4 + 0x1a];
          }
          else {
            lVar17 = lVar17 * 2;
            piVar9 = piVar22;
            if (lVar17 != 0) goto LAB_1805f3837;
          }
          if (puVar19 != puVar16) {
// WARNING: Subroutine does not return
            memmove(piVar9,puVar19,(int64_t)puVar16 - (int64_t)puVar19);
          }
          iVar2 = piVar14[1];
          iVar3 = piVar14[2];
          iVar4 = piVar14[3];
          *piVar9 = *piVar14;
          piVar9[1] = iVar2;
          piVar9[2] = iVar3;
          piVar9[3] = iVar4;
          *(uint64_t *)(piVar9 + 4) = *(uint64_t *)(piVar14 + 4);
          piVar9[6] = piVar14[6];
          if (puVar20[lVar12 * 4 + 0x19] != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          puVar20[lVar12 * 4 + 0x19] = piVar9;
          puVar20[lVar12 * 4 + 0x1b] = piVar9 + lVar17 * 7;
          puVar20[lVar12 * 4 + 0x1a] = piVar9 + 7;
          bVar6 = bVar7;
        }
        fVar23 = (float)system_error_code * 1e-05 - (float)piVar14[6];
        if (fVar23 < (float)piVar14[5] || fVar23 == (float)piVar14[5]) {
          bVar6 = true;
          bVar7 = true;
        }
        else if (!bVar6) {
          if (*(int64_t *)(param_1 + 0x18) + 0x1c == *(int64_t *)(param_1 + 0x28)) {
            if (*(int64_t *)(param_1 + 0x20) != 0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            lVar12 = *(int64_t *)(param_1 + 0x30);
            *(int64_t **)(param_1 + 0x30) = (int64_t *)(lVar12 + 8);
            lVar12 = *(int64_t *)(lVar12 + 8);
            *(int64_t *)(param_1 + 0x20) = lVar12;
            *(int64_t *)(param_1 + 0x28) = lVar12 + 0xe0;
            *(uint64_t *)(param_1 + 0x18) = *(uint64_t *)(param_1 + 0x20);
          }
          else {
            *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + 0x1c;
          }
        }
        lVar12 = *(int64_t *)(param_1 + 0x18);
        stack_special_x_8 = stack_special_x_8 + 1;
        piVar9 = (int *)(uint64_t)stack_special_x_8;
        lVar17 = *(int64_t *)(param_1 + 0x30);
        lStackX_18 = lStackX_18 + 1;
      } while ((uint64_t)(int64_t)(int)stack_special_x_8 <
               (uint64_t)
               ((*(int64_t *)(param_1 + 0x38) - *(int64_t *)(param_1 + 0x40)) / 0x1c +
               (*(int64_t *)(param_1 + 0x28) - lVar12) / 0x1c +
               ((*(int64_t *)(param_1 + 0x50) - lVar17 >> 3) + -1) * 8));
    }
    puVar10 = param_1 + 0x360;
    do {
      function_5f3ce0(puVar10,piVar22);
      uVar21 = (int)piVar22 + 1;
      piVar22 = (int *)(uint64_t)uVar21;
      puVar10 = puVar10 + 0xcc8;
    } while ((int)uVar21 < 8);
  }
  lVar12 = 8;
  pfVar15 = (float *)(param_1 + 0xb18);
  do {
    pfVar18 = pfVar15 + -0x1ec;
    lVar17 = 0x18;
    pfVar13 = pfVar15;
    do {
      if ((*(int64_t **)pfVar18 != (int64_t *)0x0) &&
         (cVar8 = (**(code **)(**(int64_t **)pfVar18 + 0xd8))(), cVar8 != '\0')) {
        plVar1 = *(int64_t **)pfVar18;
        lVar11 = *plVar1;
        if (pfVar13[-4] < 1.0) {
          fVar23 = pfVar13[-4] + 0.1;
          fStack_9c = 3.4028235e+38;
          pfVar13[-4] = fVar23;
          fVar24 = (3.0 - (fVar23 + fVar23)) * fVar23 * fVar23;
          fVar23 = pfVar13[-3];
          fStack_a8 = fVar24 * pfVar13[-2] * fVar23 + pfVar13[-0xc];
          fStack_a4 = fVar24 * pfVar13[-1] * fVar23 + pfVar13[-0xb];
          fStack_a0 = fVar24 * *pfVar13 * fVar23 + pfVar13[-10];
        }
        else {
          fStack_a8 = pfVar13[-8];
          fStack_a4 = pfVar13[-7];
          fStack_a0 = pfVar13[-6];
          fStack_9c = pfVar13[-5];
        }
        (**(code **)(lVar11 + 0xa8))(plVar1,&fStack_a8);
      }
      pfVar18 = pfVar18 + 2;
      pfVar13 = pfVar13 + 0xe;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    pfVar15 = pfVar15 + 0x332;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address