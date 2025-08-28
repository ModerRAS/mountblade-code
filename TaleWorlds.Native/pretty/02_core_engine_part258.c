#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part258.c - 12 个函数
// 函数: void function_225ee0(uint64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4)
void function_225ee0(uint64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int8_t stack_array_f8 [32];
  void *plocal_var_d8;
  int64_t lStack_d0;
  int32_t local_var_c0;
  uint64_t local_var_b8;
  int64_t alStack_a8 [2];
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
  int32_t local_var_4c;
  int16_t local_var_48;
  int32_t local_var_46;
  int8_t local_var_42;
  uint64_t local_var_38;
  plVar1 = system_message_buffer;
  local_var_b8 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_f8;
  SystemCore_EncryptionEngine0(&plocal_var_d8);
  function_0b2a30();
  plocal_var_d8 = &system_data_buffer_ptr;
  if (lStack_d0 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_d0 = 0;
  local_var_c0 = 0;
  plocal_var_d8 = &system_state_ptr;
  alStack_a8[0] = 0;
  alStack_a8[1] = 0;
  local_var_98 = 0;
  local_var_96 = 3;
  local_var_46 = 0;
  local_var_54 = 0;
  local_var_4c = 0;
  local_var_48 = 0;
  local_var_42 = 0;
  local_var_94 = 0;
  local_var_8c = 0;
  local_var_84 = 0;
  local_var_7c = 0;
  local_var_74 = 0;
  local_var_6c = 0;
  local_var_64 = 0;
  local_var_5c = 0;
  (**(code **)(*plVar1 + 0x108))(plVar1,param_4,alStack_a8);
  function_2a8080(param_2,alStack_a8,param_3);
  if (local_var_98._1_1_ == '\0') {
    if (((char)local_var_98 == '\0') && (alStack_a8[0] != 0)) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    alStack_a8[0] = 0;
    alStack_a8[1] = 0;
    local_var_98 = 0;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_f8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_226020(int64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void function_226020(int64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  void *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  void *puVar7;
  int64_t lVar8;
  int64_t lStackX_18;
  uint64_t uVar9;
  uVar9 = 0xfffffffffffffffe;
  lVar8 = param_1[1];
  lVar5 = *param_1;
  lVar3 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar8 - lVar5),8) + (lVar8 - lVar5);
  puVar2 = (uint64_t *)0x0;
  lStackX_18 = (lVar3 >> 6) - (lVar3 >> 0x3f);
  if (lStackX_18 == 0) {
    lStackX_18 = 1;
  }
  else {
    lStackX_18 = lStackX_18 * 2;
    if (lStackX_18 == 0) goto LAB_1802260bd;
  }
  puVar2 = (uint64_t *)
           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lStackX_18 * 0x78,(char)param_1[3],param_4,
                         0xfffffffffffffffe);
  lVar8 = param_1[1];
  lVar5 = *param_1;
LAB_1802260bd:
  puVar4 = puVar2;
  if (lVar5 != lVar8) {
    puVar6 = puVar2 + 0xd;
    lVar5 = lVar5 - (int64_t)puVar2;
    do {
      *puVar4 = &system_state_ptr;
      puVar6[-0xc] = 0;
      *(int32_t *)(puVar6 + -0xb) = 0;
      *puVar4 = &memory_allocator_3480_ptr;
      puVar6[-0xc] = puVar6 + -10;
      *(int32_t *)(puVar6 + -0xb) = 0;
      *(int8_t *)(puVar6 + -10) = 0;
      *(int32_t *)(puVar6 + -0xb) = *(int32_t *)((int64_t)puVar6 + lVar5 + -0x58);
      puVar1 = *(void **)((int64_t)puVar6 + lVar5 + -0x60);
      puVar7 = &system_buffer_ptr;
      if (puVar1 != (void *)0x0) {
        puVar7 = puVar1;
      }
      strcpy_s(puVar6[-0xc],0x40,puVar7,param_4,uVar9,puVar4);
      puVar6[-2] = &system_state_ptr;
      puVar6[-1] = 0;
      *(int32_t *)puVar6 = 0;
      puVar6[-2] = &system_data_buffer_ptr;
      puVar6[1] = 0;
      puVar6[-1] = 0;
      *(int32_t *)puVar6 = 0;
      *(int32_t *)puVar6 = *(int32_t *)((int64_t)puVar6 + lVar5);
      puVar6[-1] = *(uint64_t *)((int64_t)puVar6 + lVar5 + -8);
      *(int32_t *)((int64_t)puVar6 + 0xc) = *(int32_t *)((int64_t)puVar6 + lVar5 + 0xc);
      *(int32_t *)(puVar6 + 1) = *(int32_t *)((int64_t)puVar6 + lVar5 + 8);
      *(int32_t *)((int64_t)puVar6 + lVar5) = 0;
      *(uint64_t *)((int64_t)puVar6 + lVar5 + -8) = 0;
      *(uint64_t *)((int64_t)puVar6 + lVar5 + 8) = 0;
      puVar4 = puVar4 + 0xf;
      puVar6 = puVar6 + 0xf;
    } while (lVar5 + -0x68 + (int64_t)puVar6 != lVar8);
  }
  SystemCommunicationProcessor(puVar4,param_2);
  CoreEngineDataTransformer(puVar4 + 0xb,param_2 + 0x58);
  lVar8 = param_1[1];
  lVar5 = *param_1;
  if (lVar5 != lVar8) {
    do {
      function_0adb30(lVar5);
      lVar5 = lVar5 + 0x78;
    } while (lVar5 != lVar8);
    lVar5 = *param_1;
  }
  if (lVar5 == 0) {
    *param_1 = (int64_t)puVar2;
    param_1[1] = (int64_t)(puVar4 + 0xf);
    param_1[2] = (int64_t)(puVar2 + lStackX_18 * 0xf);
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(lVar5);
}
int64_t function_226240(int64_t param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  ushort uVar3;
  uint64_t uVar4;
  void *puVar6;
  uint uVar7;
  uint64_t uVar5;
  plVar1 = (int64_t *)(param_1 + 0x18);
  if (*plVar1 == 0) {
    FormatMessageA(0x1300,0,*(int32_t *)(param_1 + 8),0x400,plVar1,0,0);
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      uVar4 = 0xffffffffffffffff;
      do {
        uVar5 = uVar4;
        uVar4 = uVar5 + 1;
      } while (*(char *)(lVar2 + uVar4) != '\0');
      if (uVar4 < 2) {
        return lVar2;
      }
      if (*(char *)(lVar2 + -1 + uVar4) != '\n') {
        return lVar2;
      }
      *(int8_t *)(lVar2 + -1 + uVar4) = 0;
      lVar2 = *plVar1;
      if (*(char *)((uVar5 - 1) + lVar2) != '\r') {
        return lVar2;
      }
      *(int8_t *)((uVar5 - 1) + lVar2) = 0;
      return *plVar1;
    }
    lVar2 = LocalAlloc(0,0x20);
    *plVar1 = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    uVar7 = *(uint *)(param_1 + 8);
    if ((uVar7 + 0x7ffbfe00 < 0xfe00) && (uVar3 = (short)uVar7 - 0x200, uVar3 != 0)) {
      uVar7 = (uint)uVar3;
      puVar6 = &processed_var_6096_ptr;
    }
    else {
      puVar6 = &processed_var_6072_ptr;
    }
    function_0634b0(lVar2,0x20,puVar6,uVar7);
  }
  return *plVar1;
}
// 函数: void function_226360(uint64_t *param_1)
void function_226360(uint64_t *param_1)
{
  *param_1 = &processed_var_6128_ptr;
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[2] + 0x10))();
  }
  if (param_1[3] != 0) {
    LocalFree();
  }
  return;
}
uint64_t *
function_2263b0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &processed_var_6128_ptr;
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[2] + 0x10))();
  }
  if (param_1[3] != 0) {
    LocalFree();
  }
  if ((param_2 & 1) != 0) {
    free(param_1,0x20,param_3,param_4,uVar1);
  }
  return param_1;
}
uint64_t * function_226430(uint64_t *param_1)
{
  int64_t lVar1;
  uint64_t *puVar2;
  puVar2 = param_1 + 0x17;
  lVar1 = 0x10;
  do {
    Function_25df6704(puVar2);
    puVar2 = (uint64_t *)((int64_t)puVar2 + 0xc);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  *param_1 = 0;
  param_1[0x37] = 0;
  param_1[1] = 0xffffffffffffffff;
  *(int32_t *)(param_1 + 8) = 0xe;
  *(int32_t *)((int64_t)param_1 + 0x44) = 0xe;
  param_1[2] = 0xffffffffffffffff;
  *(int32_t *)(param_1 + 9) = 0xe;
  *(int32_t *)((int64_t)param_1 + 0x4c) = 0xe;
  param_1[3] = 0xffffffffffffffff;
  *(int32_t *)(param_1 + 10) = 0xe;
  *(int32_t *)((int64_t)param_1 + 0x54) = 0xe;
  param_1[4] = 0xffffffffffffffff;
  *(int32_t *)(param_1 + 0xb) = 0xe;
  *(int32_t *)((int64_t)param_1 + 0x5c) = 0xe;
  param_1[5] = 0xffffffffffffffff;
  *(int32_t *)(param_1 + 0xc) = 0xe;
  *(int32_t *)((int64_t)param_1 + 100) = 0xe;
  param_1[6] = 0xffffffffffffffff;
  *(int32_t *)(param_1 + 0xd) = 0xe;
  *(int32_t *)((int64_t)param_1 + 0x6c) = 0xe;
  param_1[7] = 0xffffffffffffffff;
  *(int32_t *)(param_1 + 0xe) = 0xe;
  *(int32_t *)((int64_t)param_1 + 0x74) = 0xe;
  param_1[0xf] = 0xffffffffffffffff;
  param_1[0x2f] = 0xffffffffffffffff;
  param_1[0x10] = 0xffffffffffffffff;
  param_1[0x30] = 0xffffffffffffffff;
  param_1[0x11] = 0xffffffffffffffff;
  param_1[0x31] = 0xffffffffffffffff;
  param_1[0x12] = 0xffffffffffffffff;
  param_1[0x32] = 0xffffffffffffffff;
  param_1[0x13] = 0xffffffffffffffff;
  param_1[0x33] = 0xffffffffffffffff;
  param_1[0x14] = 0xffffffffffffffff;
  param_1[0x34] = 0xffffffffffffffff;
  param_1[0x15] = 0xffffffffffffffff;
  param_1[0x35] = 0xffffffffffffffff;
  param_1[0x16] = 0xffffffffffffffff;
  param_1[0x36] = 0xffffffffffffffff;
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2265d0(uint64_t param_1,uint64_t *param_2)
void function_2265d0(uint64_t param_1,uint64_t *param_2)
{
  uint uVar1;
  int8_t stack_array_268 [32];
  int32_t local_var_248;
  uint64_t local_var_240;
  uint64_t local_var_238;
  uint64_t local_var_230;
  uint64_t *plocal_var_228;
  int8_t stack_array_218 [512];
  uint64_t local_var_18;
  local_var_230 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_268;
  local_var_248 = 0;
  local_var_240 = 0;
  local_var_238 = 0;
  plocal_var_228 = param_2;
  uVar1 = (*core_system_config)(1,&system_data_6810,&local_var_240);
  if ((uVar1 & 0xfff00000) != 0xbad00000) {
// WARNING: Subroutine does not return
    memset(stack_array_218,0,0x200);
  }
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  CoreEngineDataBufferProcessor(param_2,0);
  *(int32_t *)(param_2 + 2) = 0;
  if ((int8_t *)param_2[1] != (int8_t *)0x0) {
    *(int8_t *)param_2[1] = 0;
  }
  local_var_248 = 1;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_268);
}
// 函数: void function_226750(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_226750(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  int64_t lVar2;
  if (*param_1 != 0) {
    function_639830(param_1,param_1[1],param_3,param_4,0xfffffffffffffffe);
    puVar1 = (uint64_t *)*param_1;
    if (puVar1 != (uint64_t *)0x0) {
      lVar2 = __RTCastToVoid(puVar1);
      (**(code **)*puVar1)(puVar1,0);
      if (lVar2 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar2);
      }
    }
    *param_1 = 0;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2267d0(int64_t *param_1)
void function_2267d0(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  void *puVar3;
  int8_t stack_array_e8 [32];
  uint64_t local_var_c8;
  uint64_t *plocal_var_c0;
  void *aplocal_var_b8 [20];
  uint64_t local_var_18;
  local_var_c8 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_e8;
  if (*param_1 == 0) {
    plocal_var_c0 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x98,8,3);
    *plocal_var_c0 = &system_state_ptr;
    plocal_var_c0[1] = 0;
    *(int32_t *)(plocal_var_c0 + 2) = 0;
    *plocal_var_c0 = &memory_allocator_3432_ptr;
    plocal_var_c0[1] = plocal_var_c0 + 3;
    *(int32_t *)(plocal_var_c0 + 2) = 0;
    *(int8_t *)(plocal_var_c0 + 3) = 0;
    *param_1 = (int64_t)plocal_var_c0;
    lVar2 = function_6393b0(plocal_var_c0,aplocal_var_b8,param_1[1]);
    lVar1 = *param_1;
    *(int32_t *)(lVar1 + 0x10) = *(int32_t *)(lVar2 + 0x10);
    puVar3 = &system_buffer_ptr;
    if (*(void **)(lVar2 + 8) != (void *)0x0) {
      puVar3 = *(void **)(lVar2 + 8);
    }
    strcpy_s(*(uint64_t *)(lVar1 + 8),0x80,puVar3);
    aplocal_var_b8[0] = &system_state_ptr;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_e8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2268c0(int64_t *param_1,int64_t param_2)
void function_2268c0(int64_t *param_1,int64_t param_2)
{
  int64_t lVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  int iVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  void *puVar10;
  uint64_t *pstack_special_x_8;
  int64_t lStackX_10;
  int8_t astack_special_x_18 [16];
  if (*param_1 == 0) {
    puVar8 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x98,8,3);
    *puVar8 = &system_state_ptr;
    puVar8[1] = 0;
    *(int32_t *)(puVar8 + 2) = 0;
    *puVar8 = &memory_allocator_3432_ptr;
    puVar8[1] = puVar8 + 3;
    *(int32_t *)(puVar8 + 2) = 0;
    *(int8_t *)(puVar8 + 3) = 0;
    *param_1 = (int64_t)puVar8;
    pstack_special_x_8 = puVar8;
  }
  else {
    function_639830(param_1,param_1[1]);
    puVar8 = (uint64_t *)*param_1;
  }
  *(int32_t *)(puVar8 + 2) = *(int32_t *)(param_2 + 0x10);
  puVar10 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar10 = *(void **)(param_2 + 8);
  }
  strcpy_s(puVar8[1],0x80,puVar10);
  lVar6 = core_system_data_config;
  lVar3 = *param_1;
  puVar8 = (uint64_t *)param_1[1];
  lVar1 = core_system_data_config + 200;
  pstack_special_x_8 = puVar8;
  lStackX_10 = lVar1;
  iVar7 = _Mtx_lock(lVar1);
  if (iVar7 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar7);
  }
  puVar2 = (uint64_t *)(lVar6 + 0x98);
  puVar4 = *(uint64_t **)(lVar6 + 0xa8);
  puVar5 = puVar4;
  while (puVar9 = puVar2, puVar5 != (uint64_t *)0x0) {
    if ((uint64_t *)puVar5[4] < puVar8) {
      puVar5 = (uint64_t *)*puVar5;
    }
    else {
      puVar5 = (uint64_t *)puVar5[1];
    }
  }
  while (puVar4 != (uint64_t *)0x0) {
    if ((uint64_t *)puVar4[4] < puVar8) {
      puVar4 = (uint64_t *)*puVar4;
    }
    else {
      puVar9 = puVar4;
      puVar4 = (uint64_t *)puVar4[1];
    }
  }
  if ((puVar9 == puVar2) || (puVar8 < (uint64_t *)puVar9[4])) {
    puVar9 = (uint64_t *)function_639930(puVar2,astack_special_x_18,puVar2,puVar9,&pstack_special_x_8);
    puVar9 = (uint64_t *)*puVar9;
  }
  puVar10 = &system_buffer_ptr;
  if (*(void **)(lVar3 + 8) != (void *)0x0) {
    puVar10 = *(void **)(lVar3 + 8);
  }
  (**(code **)(puVar9[5] + 0x10))(puVar9 + 5,puVar10);
  iVar7 = _Mtx_unlock(lVar1);
  if (iVar7 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar7);
  }
  return;
}
uint64_t *
function_226a50(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  *param_1 = &processed_var_5192_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x20,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}
// 函数: void function_226a90(char *param_1,int64_t *param_2)
void function_226a90(char *param_1,int64_t *param_2)
{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int32_t *puVar4;
  int32_t uVar5;
  puVar4 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  iVar3 = 0;
  pcVar2 = (char *)0x180bf7e28;
  *puVar4 = 0;
  param_2[1] = param_2[1] + 4;
  do {
    if (*pcVar2 == *param_1) {
      UtilitiesSystem_ThreadManager(param_2,*(uint64_t *)((int64_t)iVar3 * 0x10 + 0x180bf7e20));
      break;
    }
    iVar3 = iVar3 + 1;
    pcVar2 = pcVar2 + 0x10;
  } while ((int64_t)pcVar2 < 0x180bf7e68);
  System_QueueProcessor(param_2,*(uint64_t *)(param_1 + 0x58));
  System_QueueProcessor(param_2,*(int64_t *)(param_1 + 0x58) + 0x20);
  System_QueueProcessor(param_2,*(int64_t *)(param_1 + 0x58) + 0x40);
  function_63a050(param_2,param_1 + 0x10);
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    puVar4 = (int32_t *)param_2[1];
    uVar5 = *(int32_t *)(param_1 + 0x30);
    if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
      System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
      puVar4 = (int32_t *)param_2[1];
    }
    *puVar4 = uVar5;
    param_2[1] = param_2[1] + 4;
    uVar5 = *(int32_t *)(param_1 + 0x34);
  }
  else if (cVar1 == '\x01') {
    function_229820();
    function_229820();
    function_229820();
    function_229820();
    function_229820();
    function_229820();
    puVar4 = (int32_t *)param_2[1];
    uVar5 = *(int32_t *)(param_1 + 0x34);
    if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
      System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
      puVar4 = (int32_t *)param_2[1];
    }
    *puVar4 = uVar5;
    param_2[1] = param_2[1] + 4;
    puVar4 = (int32_t *)param_2[1];
    uVar5 = *(int32_t *)(param_1 + 0x3c);
    if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
      System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
      puVar4 = (int32_t *)param_2[1];
    }
    *puVar4 = uVar5;
    param_2[1] = param_2[1] + 4;
    puVar4 = (int32_t *)param_2[1];
    uVar5 = *(int32_t *)(param_1 + 0x40);
    if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
      System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
      puVar4 = (int32_t *)param_2[1];
    }
    *puVar4 = uVar5;
    param_2[1] = param_2[1] + 4;
    puVar4 = (int32_t *)param_2[1];
    uVar5 = *(int32_t *)(param_1 + 0x48);
    if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
      System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
      puVar4 = (int32_t *)param_2[1];
    }
    *puVar4 = uVar5;
    param_2[1] = param_2[1] + 4;
    uVar5 = *(int32_t *)(param_1 + 0x4c);
  }
  else {
    if (cVar1 != '\x02') {
      return;
    }
    puVar4 = (int32_t *)param_2[1];
    uVar5 = *(int32_t *)(param_1 + 0x30);
    if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
      System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
      puVar4 = (int32_t *)param_2[1];
    }
    *puVar4 = uVar5;
    param_2[1] = param_2[1] + 4;
    puVar4 = (int32_t *)param_2[1];
    uVar5 = *(int32_t *)(param_1 + 0x3c);
    if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
      System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
      puVar4 = (int32_t *)param_2[1];
    }
    *puVar4 = uVar5;
    param_2[1] = param_2[1] + 4;
    puVar4 = (int32_t *)param_2[1];
    uVar5 = *(int32_t *)(param_1 + 0x40);
    if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
      System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
      puVar4 = (int32_t *)param_2[1];
    }
    *puVar4 = uVar5;
    param_2[1] = param_2[1] + 4;
    puVar4 = (int32_t *)param_2[1];
    uVar5 = *(int32_t *)(param_1 + 0x34);
    if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
      System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
      puVar4 = (int32_t *)param_2[1];
    }
    *puVar4 = uVar5;
    param_2[1] = param_2[1] + 4;
    uVar5 = *(int32_t *)(param_1 + 0x38);
  }
  puVar4 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = uVar5;
  param_2[1] = param_2[1] + 4;
  return;
}
// 函数: void function_226ce3(int32_t *param_1)
void function_226ce3(int32_t *param_1)
{
  int32_t uVar1;
  int64_t in_RAX;
  int32_t *puVar2;
  int64_t *unaff_RBX;
  int64_t unaff_RDI;
  uVar1 = *(int32_t *)(unaff_RDI + 0x30);
  if ((uint64_t)(in_RAX + unaff_RBX[2]) < 5) {
    System_BufferManager();
    param_1 = (int32_t *)unaff_RBX[1];
  }
  *param_1 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar2 = (int32_t *)unaff_RBX[1];
  uVar1 = *(int32_t *)(unaff_RDI + 0x3c);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar2) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar2 = (int32_t *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar2 = (int32_t *)unaff_RBX[1];
  uVar1 = *(int32_t *)(unaff_RDI + 0x40);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar2) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar2 = (int32_t *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar2 = (int32_t *)unaff_RBX[1];
  uVar1 = *(int32_t *)(unaff_RDI + 0x34);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar2) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar2 = (int32_t *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  uVar1 = *(int32_t *)(unaff_RDI + 0x38);
  puVar2 = (int32_t *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar2) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar2 = (int32_t *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  return;
}
// 函数: void function_226d30(void)
void function_226d30(void)
{
  int32_t uVar1;
  int32_t *puVar2;
  int64_t *unaff_RBX;
  int64_t unaff_RDI;
  int32_t unaff_XMM6_Da;
  System_BufferManager();
  *(int32_t *)unaff_RBX[1] = unaff_XMM6_Da;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar2 = (int32_t *)unaff_RBX[1];
  uVar1 = *(int32_t *)(unaff_RDI + 0x40);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar2) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar2 = (int32_t *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar2 = (int32_t *)unaff_RBX[1];
  uVar1 = *(int32_t *)(unaff_RDI + 0x34);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar2) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar2 = (int32_t *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  uVar1 = *(int32_t *)(unaff_RDI + 0x38);
  puVar2 = (int32_t *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar2) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar2 = (int32_t *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_226e10(char *param_1,int64_t param_2)
void function_226e10(char *param_1,int64_t param_2)
{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  int64_t lVar4;
  byte *pbVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int64_t *plVar9;
  int8_t stack_array_498 [32];
  int8_t local_var_478;
  int32_t local_var_474;
  uint64_t local_var_470;
  char *pcStack_468;
  void *plocal_var_458;
  byte *pbStack_450;
  int iStack_448;
  byte abStack_440 [1032];
  uint64_t local_var_38;
  local_var_470 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_498;
  iVar8 = 0;
  local_var_474 = 0;
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  plocal_var_458 = &memory_allocator_336_ptr;
  pbStack_450 = abStack_440;
  iStack_448 = 0;
  abStack_440[0] = 0;
  uVar3 = **(uint **)(param_2 + 8);
  puVar7 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar7;
  pcStack_468 = param_1;
  if (uVar3 != 0) {
    SystemManager_Executor(&plocal_var_458,puVar7,uVar3);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar3;
  }
  plVar9 = (int64_t *)0x180bf7e20;
  do {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (*(char *)(*plVar9 + lVar4) != '\0');
    iVar6 = (int)lVar4;
    if (iStack_448 == iVar6) {
      if (iStack_448 != 0) {
        pbVar5 = pbStack_450;
        do {
          pbVar1 = pbVar5 + (*plVar9 - (int64_t)pbStack_450);
          iVar6 = (uint)*pbVar5 - (uint)*pbVar1;
          if (iVar6 != 0) break;
          pbVar5 = pbVar5 + 1;
        } while (*pbVar1 != 0);
      }
LAB_180226f1e:
      if (iVar6 == 0) {
        local_var_478 = *(int8_t *)((int64_t)iVar8 * 0x10 + 0x180bf7e28);
        break;
      }
    }
    else if (iStack_448 == 0) goto LAB_180226f1e;
    iVar8 = iVar8 + 1;
    plVar9 = plVar9 + 2;
  } while ((int64_t)plVar9 < 0x180bf7e60);
  plocal_var_458 = &system_state_ptr;
  function_40d750(param_1,local_var_478);
  local_var_474 = 1;
  plVar9 = *(int64_t **)(param_1 + 0x58);
  uVar3 = **(uint **)(param_2 + 8);
  puVar7 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar7;
  if (uVar3 != 0) {
    (**(code **)(*plVar9 + 0x18))(plVar9,puVar7,uVar3);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar3;
    puVar7 = *(uint **)(param_2 + 8);
  }
  lVar4 = *(int64_t *)(param_1 + 0x58);
  uVar3 = *puVar7;
  puVar7 = puVar7 + 1;
  *(uint **)(param_2 + 8) = puVar7;
  if (uVar3 != 0) {
    (**(code **)(*(int64_t *)(lVar4 + 0x20) + 0x18))((int64_t *)(lVar4 + 0x20),puVar7,uVar3);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar3;
    puVar7 = *(uint **)(param_2 + 8);
  }
  lVar4 = *(int64_t *)(param_1 + 0x58);
  uVar3 = *puVar7;
  puVar7 = puVar7 + 1;
  *(uint **)(param_2 + 8) = puVar7;
  if (uVar3 != 0) {
    (**(code **)(*(int64_t *)(lVar4 + 0x40) + 0x18))((int64_t *)(lVar4 + 0x40),puVar7,uVar3);
    puVar7 = (uint *)((uint64_t)uVar3 + *(int64_t *)(param_2 + 8));
  }
  *(uint *)(param_1 + 0x10) = *puVar7;
  *(uint *)(param_1 + 0x14) = puVar7[1];
  *(uint *)(param_1 + 0x18) = puVar7[2];
  *(uint *)(param_1 + 0x1c) = puVar7[3];
  *(uint *)(param_1 + 0x20) = puVar7[4];
  *(uint *)(param_1 + 0x24) = puVar7[5];
  *(uint *)(param_1 + 0x28) = puVar7[6];
  *(uint *)(param_1 + 0x2c) = puVar7[7];
  puVar7 = puVar7 + 8;
  *(uint **)(param_2 + 8) = puVar7;
  cVar2 = *param_1;
  if (cVar2 == '\0') {
    *(uint *)(param_1 + 0x30) = *puVar7;
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
    *(int32_t *)(param_1 + 0x34) = **(int32_t **)(param_2 + 8);
  }
  else if (cVar2 == '\x01') {
    function_2296d0();
    function_2296d0();
    function_2296d0();
    function_2296d0();
    function_2296d0();
    function_2296d0();
    *(int32_t *)(param_1 + 0x34) = **(int32_t **)(param_2 + 8);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
    *(int32_t *)(param_1 + 0x3c) = **(int32_t **)(param_2 + 8);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
    *(int32_t *)(param_1 + 0x40) = **(int32_t **)(param_2 + 8);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
    *(int32_t *)(param_1 + 0x48) = **(int32_t **)(param_2 + 8);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
    *(int32_t *)(param_1 + 0x4c) = **(int32_t **)(param_2 + 8);
  }
  else {
    if (cVar2 != '\x02') goto LAB_1802270fc;
    *(uint *)(param_1 + 0x30) = *puVar7;
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
    *(int32_t *)(param_1 + 0x3c) = **(int32_t **)(param_2 + 8);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
    *(int32_t *)(param_1 + 0x40) = **(int32_t **)(param_2 + 8);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
    *(int32_t *)(param_1 + 0x34) = **(int32_t **)(param_2 + 8);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
    *(int32_t *)(param_1 + 0x38) = **(int32_t **)(param_2 + 8);
  }
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
LAB_1802270fc:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_498);
}
// 函数: void function_227130(int64_t param_1,int64_t *param_2)
void function_227130(int64_t param_1,int64_t *param_2)
{
  int8_t uVar1;
  uint64_t uVar2;
  int8_t *puVar3;
  uint64_t *puVar4;
  int32_t *puVar5;
  puVar5 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar5 + (4 - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = 0;
  puVar3 = (int8_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar3;
  uVar1 = *(int8_t *)(param_1 + 0x18);
  if ((uint64_t)((*param_2 - (int64_t)puVar3) + param_2[2]) < 2) {
    System_BufferManager(param_2,puVar3 + (1 - *param_2));
    puVar3 = (int8_t *)param_2[1];
  }
  *puVar3 = uVar1;
  puVar4 = (uint64_t *)(param_2[1] + 1);
  param_2[1] = (int64_t)puVar4;
  if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 0x11) {
    System_BufferManager(param_2,(int64_t)puVar4 + (0x10 - *param_2));
    puVar4 = (uint64_t *)param_2[1];
  }
  uVar2 = *(uint64_t *)(param_1 + 0x10);
  *puVar4 = *(uint64_t *)(param_1 + 8);
  puVar4[1] = uVar2;
  param_2[1] = param_2[1] + 0x10;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * function_227230(uint64_t param_1,int64_t param_2)
{
  uint64_t uVar1;
  uint64_t *puVar2;
  puVar2 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,3,0xfffffffffffffffe);
  *puVar2 = &processed_var_5192_ptr;
  *puVar2 = &processed_var_7072_ptr;
  *(int8_t *)(puVar2 + 3) = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  if (param_2 != 0) {
    uVar1 = *(uint64_t *)(param_2 + 0x10);
    puVar2[1] = *(uint64_t *)(param_2 + 8);
    puVar2[2] = uVar1;
    *(int8_t *)(puVar2 + 3) = *(int8_t *)(param_2 + 0x18);
  }
  return puVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address