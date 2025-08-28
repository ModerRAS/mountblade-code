/* SystemCore_ConfigValidator - SystemCore_ConfigValidator */
#define SystemCore_ConfigValidator SystemCore_ConfigValidator
/* 函数别名定义: DataEncryptionHandler */
#define DataEncryptionHandler DataEncryptionHandler
#include "SystemDataAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_03_part037.c - 6 个函数
// 函数: void GenericFunction_1801f01c0(void)
void GenericFunction_1801f01c0(void)
{
  uint64_t uVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  int8_t stack_array_e8 [32];
  int32_t local_var_c8;
  int32_t local_var_c0;
  int32_t local_var_b8;
  int32_t local_var_b0;
  int32_t local_var_a8;
  int8_t local_var_98;
  int32_t local_var_90;
  int64_t lStack_88;
  int64_t *plStack_80;
  int64_t *plStack_78;
  uint64_t local_var_70;
  int64_t lStack_68;
  void *plocal_var_60;
  int8_t *plocal_var_58;
  int32_t local_var_50;
  int8_t stack_array_48 [32];
  uint64_t local_var_28;
  lVar2 = system_system_data_memory;
  local_var_70 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_e8;
  lVar4 = system_system_data_memory + 0x80;
  lStack_68 = lVar4;
  iVar3 = _Mtx_lock(lVar4);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  if (*(char *)(lVar2 + 0xe9) == '\0') {
    iVar3 = _Mtx_unlock(lVar4);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_e8);
  }
  lVar6 = 0;
  for (lVar4 = *(int64_t *)(lVar2 + 0x28); lVar4 != lVar2 + 0x20;
      lVar4 = Function_7bfb2422(lVar4)) {
    if (*(int64_t *)(lVar4 + 0x40) != 0) {
      *(int *)(lVar4 + 0x5c) = (int)lVar6;
      lVar6 = lVar6 + *(int *)(lVar4 + 0x50);
    }
  }
  for (lVar4 = *(int64_t *)(lVar2 + 0x58); lVar4 != lVar2 + 0x50;
      lVar4 = Function_7bfb2422(lVar4)) {
    if (*(int64_t *)(lVar4 + 0x38) != 0) {
      *(int *)(lVar4 + 0x54) = (int)lVar6;
      lVar6 = lVar6 + *(int *)(lVar4 + 0x48);
    }
  }
  GenericFunction_180081350();
  for (lVar4 = *(int64_t *)(lVar2 + 0x28); lVar4 != lVar2 + 0x20;
      lVar4 = Function_7bfb2422(lVar4,0,iVar3)) {
    iVar3 = *(int *)(lVar4 + 0x50) * 2;
    if (*(int64_t *)(lVar4 + 0x40) != 0) {
// WARNING: Subroutine does not return
      memcpy(*(int64_t *)(lStack_88 + 0x10) + (int64_t)*(int *)(lVar4 + 0x5c) * 2,
             *(int64_t *)(lVar4 + 0x40),(int64_t)iVar3);
    }
  }
  lVar4 = *(int64_t *)(lVar2 + 0x58);
  while( true ) {
    if (lVar4 == lVar2 + 0x50) {
      plocal_var_60 = &processed_var_672_ptr;
      plocal_var_58 = stack_array_48;
      stack_array_48[0] = 0;
      local_var_50 = 0x11;
      strcpy_s(stack_array_48,0x20,&processed_var_4384_ptr);
      local_var_90 = 1;
      local_var_98 = 0;
      local_var_b0 = 2;
      local_var_b8 = 0x2c;
      local_var_c0 = 0;
      local_var_c8 = 1;
      local_var_a8 = (int)lVar6;
      puVar5 = (uint64_t *)SystemCore_ConfigManager();
      uVar1 = *puVar5;
      *puVar5 = 0;
      plStack_80 = *(int64_t **)(lVar2 + 0xe0);
      *(uint64_t *)(lVar2 + 0xe0) = uVar1;
      if (plStack_80 != (int64_t *)0x0) {
        (**(code **)(*plStack_80 + 0x38))();
      }
      if (plStack_78 != (int64_t *)0x0) {
        (**(code **)(*plStack_78 + 0x38))();
      }
      plocal_var_60 = &system_state_ptr;
// WARNING: Subroutine does not return
      SystemParameterHandler(system_message_context,&processed_var_4336_ptr,lVar6);
    }
    iVar3 = *(int *)(lVar4 + 0x48) * 2;
    if (*(int64_t *)(lVar4 + 0x38) != 0) break;
    lVar4 = Function_7bfb2422(lVar4,0,iVar3);
  }
// WARNING: Subroutine does not return
  memcpy(*(int64_t *)(lStack_88 + 0x10) + (int64_t)*(int *)(lVar4 + 0x54) * 2,
         *(int64_t *)(lVar4 + 0x38),(int64_t)iVar3);
}
uint64_t *
GenericFunction_1801f04c0(int64_t *param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             int32_t *param_5)
{
  int64_t lVar1;
  int64_t *plVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int64_t *plVar6;
  int iVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  int64_t lVar12;
  bool bVar13;
  plVar8 = (int64_t *)*param_1;
  if ((param_4 == plVar8) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (iVar7 = memcmp(plVar8 + 4,param_5,0x10), param_4 = plVar8, iVar7 < 0))
    {
LAB_1801f0551:
      uVar11 = 0;
      goto LAB_1801f0554;
    }
  }
  else {
    plVar8 = (int64_t *)Function_7bfb2422(param_4);
    iVar7 = memcmp(param_4 + 4,param_5,0x10);
    if ((iVar7 < 0) && (iVar7 = memcmp(param_5,plVar8 + 4,0x10), iVar7 < 0)) {
      if (*param_4 == 0) goto LAB_1801f0551;
      uVar11 = 1;
      param_4 = plVar8;
LAB_1801f0554:
      if (param_4 != (int64_t *)0x0) {
        GenericFunction_1801f0690(param_1,param_2,param_4,uVar11,param_5);
        return param_2;
      }
    }
  }
  bVar13 = true;
  plVar8 = (int64_t *)param_1[2];
  plVar6 = param_1;
  while (plVar8 != (int64_t *)0x0) {
    iVar7 = memcmp(param_5,plVar8 + 4,0x10);
    bVar13 = iVar7 < 0;
    plVar6 = plVar8;
    if (bVar13) {
      plVar8 = (int64_t *)plVar8[1];
    }
    else {
      plVar8 = (int64_t *)*plVar8;
    }
  }
  plVar8 = plVar6;
  if (bVar13) {
    if (plVar6 != (int64_t *)param_1[1]) {
      plVar8 = (int64_t *)Function_e2d50782(plVar6);
      goto LAB_1801f05c4;
    }
  }
  else {
LAB_1801f05c4:
    iVar7 = memcmp(plVar8 + 4,param_5,0x10);
    if (-1 < iVar7) {
      *param_2 = plVar8;
      return param_2;
    }
  }
  lVar10 = 0;
  if (plVar6 != param_1) {
    iVar7 = memcmp(param_5,plVar6 + 4,0x10);
    lVar12 = 1;
    if (-1 < iVar7) goto LAB_1801f0606;
  }
  lVar12 = lVar10;
LAB_1801f0606:
  plVar2 = (int64_t *)param_1[5];
  LOCK();
  plVar8 = plVar2 + 1;
  lVar1 = *plVar8;
  *plVar8 = *plVar8 + 0x70;
  UNLOCK();
  uVar9 = lVar1 + 0xfU & 0xfffffffffffffff0;
  if (uVar9 + 0x60 < (uint64_t)plVar2[3]) {
    lVar10 = *plVar2 + uVar9;
  }
  uVar3 = param_5[1];
  uVar4 = param_5[2];
  uVar5 = param_5[3];
  *(int32_t *)(lVar10 + 0x20) = *param_5;
  *(int32_t *)(lVar10 + 0x24) = uVar3;
  *(int32_t *)(lVar10 + 0x28) = uVar4;
  *(int32_t *)(lVar10 + 0x2c) = uVar5;
  *(uint64_t *)(lVar10 + 0x30) = 0;
  *(uint64_t *)(lVar10 + 0x38) = 0;
  *(uint64_t *)(lVar10 + 0x40) = 0;
  *(uint64_t *)(lVar10 + 0x48) = 0;
  *(int32_t *)(lVar10 + 0x50) = 0;
  *(uint64_t *)(lVar10 + 0x54) = 0xffffffffffffffff;
  *(int32_t *)(lVar10 + 0x5c) = 0xffffffff;
// WARNING: Subroutine does not return
  SystemStateController(lVar10,plVar6,param_1,lVar12);
}
// 函数: void GenericFunction_1801f05de(int32_t param_1)
void GenericFunction_1801f05de(int32_t param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  int64_t unaff_RBX;
  int32_t *unaff_RBP;
  int64_t unaff_RSI;
  int64_t lVar8;
  lVar8 = 0;
  if (unaff_RBX != unaff_RSI) {
    memcmp(param_1,unaff_RBX + 0x20,0x10);
  }
  plVar3 = *(int64_t **)(unaff_RSI + 0x28);
  LOCK();
  plVar1 = plVar3 + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + 0x70;
  UNLOCK();
  uVar7 = lVar2 + 0xfU & 0xfffffffffffffff0;
  if (uVar7 + 0x60 < (uint64_t)plVar3[3]) {
    lVar8 = *plVar3 + uVar7;
  }
  uVar4 = unaff_RBP[1];
  uVar5 = unaff_RBP[2];
  uVar6 = unaff_RBP[3];
  *(int32_t *)(lVar8 + 0x20) = *unaff_RBP;
  *(int32_t *)(lVar8 + 0x24) = uVar4;
  *(int32_t *)(lVar8 + 0x28) = uVar5;
  *(int32_t *)(lVar8 + 0x2c) = uVar6;
  *(uint64_t *)(lVar8 + 0x30) = 0;
  *(uint64_t *)(lVar8 + 0x38) = 0;
  *(uint64_t *)(lVar8 + 0x40) = 0;
  *(uint64_t *)(lVar8 + 0x48) = 0;
  *(int32_t *)(lVar8 + 0x50) = 0;
  *(uint64_t *)(lVar8 + 0x54) = 0xffffffffffffffff;
  *(int32_t *)(lVar8 + 0x5c) = 0xffffffff;
// WARNING: Subroutine does not return
  SystemStateController(lVar8);
}
// 函数: void GenericFunction_1801f0674(void)
void GenericFunction_1801f0674(void)
{
  uint64_t unaff_RDI;
  uint64_t *unaff_R14;
  *unaff_R14 = unaff_RDI;
  return;
}
// 函数: void GenericFunction_1801f0690(int64_t param_1,uint64_t param_2,int64_t param_3,char param_4,
void GenericFunction_1801f0690(int64_t param_1,uint64_t param_2,int64_t param_3,char param_4,
                  int32_t *param_5)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int iVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t lVar10;
  lVar9 = 0;
  if ((param_4 == '\0') && (param_3 != param_1)) {
    iVar7 = memcmp(param_5,param_3 + 0x20,0x10);
    lVar10 = 1;
    if (-1 < iVar7) goto LAB_1801f06de;
  }
  lVar10 = lVar9;
LAB_1801f06de:
  plVar3 = *(int64_t **)(param_1 + 0x28);
  LOCK();
  plVar1 = plVar3 + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + 0x70;
  UNLOCK();
  uVar8 = lVar2 + 0xfU & 0xfffffffffffffff0;
  if (uVar8 + 0x60 < (uint64_t)plVar3[3]) {
    lVar9 = *plVar3 + uVar8;
  }
  uVar4 = param_5[1];
  uVar5 = param_5[2];
  uVar6 = param_5[3];
  *(int32_t *)(lVar9 + 0x20) = *param_5;
  *(int32_t *)(lVar9 + 0x24) = uVar4;
  *(int32_t *)(lVar9 + 0x28) = uVar5;
  *(int32_t *)(lVar9 + 0x2c) = uVar6;
  *(uint64_t *)(lVar9 + 0x30) = 0;
  *(uint64_t *)(lVar9 + 0x38) = 0;
  *(uint64_t *)(lVar9 + 0x40) = 0;
  *(uint64_t *)(lVar9 + 0x48) = 0;
  *(int32_t *)(lVar9 + 0x50) = 0;
  *(uint64_t *)(lVar9 + 0x54) = 0xffffffffffffffff;
  *(int32_t *)(lVar9 + 0x5c) = 0xffffffff;
// WARNING: Subroutine does not return
  SystemStateController(lVar9,param_3,param_1,lVar10);
}
uint64_t *
GenericFunction_1801f0780(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  CoreMemoryPoolProcessor(param_2,0,param_3,param_4,0,0xfffffffffffffffe);
  *(int32_t *)(param_2 + 2) = 0;
  if ((int8_t *)param_2[1] != (int8_t *)0x0) {
    *(int8_t *)param_2[1] = 0;
  }
  return param_2;
}
int64_t GenericFunction_1801f0810(uint64_t param_1,int64_t param_2)
{
  *(uint64_t *)(param_2 + 0x18) = 0;
  *(int32_t *)(param_2 + 0x28) = 3;
  *(int64_t *)param_2 = param_2;
  *(int64_t *)(param_2 + 8) = param_2;
  *(uint64_t *)(param_2 + 0x10) = 0;
  *(int8_t *)(param_2 + 0x18) = 0;
  *(uint64_t *)(param_2 + 0x20) = 0;
  return param_2;
}
int64_t GenericFunction_1801f0860(uint64_t param_1,int64_t param_2)
{
  *(uint64_t *)(param_2 + 0x18) = 0;
  *(int32_t *)(param_2 + 0x28) = 3;
  *(int64_t *)param_2 = param_2;
  *(int64_t *)(param_2 + 8) = param_2;
  *(uint64_t *)(param_2 + 0x10) = 0;
  *(int8_t *)(param_2 + 0x18) = 0;
  *(uint64_t *)(param_2 + 0x20) = 0;
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1801f08b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void GenericFunction_1801f08b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int32_t uVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  void *plocal_var_60;
  uint64_t *plocal_var_58;
  int32_t local_var_50;
  uint64_t local_var_48;
  void *plocal_var_40;
  uint64_t *plocal_var_38;
  int32_t local_var_30;
  uint64_t local_var_28;
  uVar4 = 0xfffffffffffffffe;
  SystemCore_ConfigValidator(param_2);
  plocal_var_60 = &system_data_buffer_ptr;
  local_var_48 = 0;
  plocal_var_58 = (uint64_t *)0x0;
  local_var_50 = 0;
  puVar2 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13,param_4,uVar4);
  *(int8_t *)puVar2 = 0;
  plocal_var_58 = (uint64_t *)puVar2;
  uVar1 = CoreMemoryPoolCleaner(puVar2);
  *puVar2 = 0x6974614e;
  *(int16_t *)(puVar2 + 1) = 0x6576;
  *(int8_t *)((int64_t)puVar2 + 6) = 0;
  local_var_50 = 6;
  local_var_48._0_4_ = uVar1;
  DataEncryptionHandler0(param_2,&plocal_var_60);
  plocal_var_60 = &system_data_buffer_ptr;
  if (plocal_var_58 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  plocal_var_58 = (uint64_t *)0x0;
  local_var_48 = (uint64_t)local_var_48._4_4_ << 0x20;
  plocal_var_60 = &system_state_ptr;
  plocal_var_40 = &system_data_buffer_ptr;
  local_var_28 = 0;
  plocal_var_38 = (uint64_t *)0x0;
  local_var_30 = 0;
  puVar3 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13,param_4,uVar4);
  *(int8_t *)puVar3 = 0;
  plocal_var_38 = puVar3;
  uVar1 = CoreMemoryPoolCleaner(puVar3);
  *puVar3 = 0x786f62646e6153;
  local_var_30 = 7;
  local_var_28._0_4_ = uVar1;
  DataEncryptionHandler0(param_2,&plocal_var_40);
  plocal_var_40 = &system_data_buffer_ptr;
  if (plocal_var_38 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  plocal_var_38 = (uint64_t *)0x0;
  local_var_28 = (uint64_t)local_var_28._4_4_ << 0x20;
  plocal_var_40 = &system_state_ptr;
  plocal_var_60 = &system_data_buffer_ptr;
  local_var_48 = 0;
  plocal_var_58 = (uint64_t *)0x0;
  local_var_50 = 0;
  puVar3 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  plocal_var_58 = puVar3;
  uVar1 = CoreMemoryPoolCleaner(puVar3);
  *puVar3 = 0x43786f62646e6153;
  *(int32_t *)(puVar3 + 1) = 0x65726f;
  local_var_50 = 0xb;
  local_var_48._0_4_ = uVar1;
  DataEncryptionHandler0(param_2,&plocal_var_60);
  plocal_var_60 = &system_data_buffer_ptr;
  if (plocal_var_58 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  plocal_var_58 = (uint64_t *)0x0;
  local_var_48 = (uint64_t)local_var_48._4_4_ << 0x20;
  plocal_var_60 = &system_state_ptr;
  plocal_var_40 = &system_data_buffer_ptr;
  local_var_28 = 0;
  plocal_var_38 = (uint64_t *)0x0;
  local_var_30 = 0;
  puVar2 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar2 = 0;
  plocal_var_38 = (uint64_t *)puVar2;
  uVar1 = CoreMemoryPoolCleaner(puVar2);
  local_var_28 = CONCAT44(local_var_28._4_4_,uVar1);
  *puVar2 = 0x74736554;
  *(int8_t *)(puVar2 + 1) = 0;
  local_var_30 = 4;
  DataEncryptionHandler0(param_2,&plocal_var_40);
  plocal_var_40 = &system_data_buffer_ptr;
  if (plocal_var_38 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1801f0b30(void)
void GenericFunction_1801f0b30(void)
{
  int64_t lVar1;
  uint uVar2;
  int32_t uVar3;
  int32_t *puVar4;
  int iVar5;
  int8_t stack_array_e8 [32];
  int8_t local_var_c8;
  void *plocal_var_b8;
  int32_t *plocal_var_b0;
  int32_t local_var_a8;
  uint64_t local_var_a0;
  int32_t local_var_98;
  void *plocal_var_90;
  int8_t *plocal_var_88;
  uint local_var_80;
  uint local_var_78;
  void *plocal_var_70;
  int32_t *plocal_var_68;
  int32_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  void *plocal_var_48;
  int8_t *plocal_var_40;
  int32_t local_var_38;
  int8_t stack_array_30 [16];
  uint64_t local_var_20;
  lVar1 = system_operation_state;
  local_var_50 = 0xfffffffffffffffe;
  local_var_20 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_e8;
  local_var_98 = 0;
  if (*(char *)(system_operation_state + 0x1609) != '\x01') {
    CoreEngine_1723A0(*(uint64_t *)(system_main_module_state + 8),*(char *)(system_system_data_memory + 0x2028) != '\0',
                  *(int32_t *)(system_operation_state + 0x160c));
    *(int8_t *)(lVar1 + 0x1609) = 1;
  }
  plocal_var_b8 = &system_data_buffer_ptr;
  local_var_a0 = 0;
  plocal_var_b0 = (int32_t *)0x0;
  local_var_a8 = 0;
  puVar4 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  plocal_var_b0 = puVar4;
  uVar2 = CoreMemoryPoolCleaner(puVar4);
  *puVar4 = 0x61746144;
  puVar4[1] = 0x6e616c2f;
  puVar4[2] = 0x67617567;
  puVar4[3] = 0x2f7365;
  local_var_a8 = 0xf;
  if (uVar2 < 0x12) {
    local_var_c8 = 0x13;
    local_var_a0._0_4_ = uVar2;
    puVar4 = (int32_t *)DataValidator(system_memory_pool_ptr,puVar4,0x12,0x10);
    plocal_var_b0 = puVar4;
    uVar2 = CoreMemoryPoolCleaner(puVar4);
  }
  *(int16_t *)((int64_t)puVar4 + 0xf) = 0x6e65;
  *(int8_t *)((int64_t)puVar4 + 0x11) = 0;
  local_var_a8 = 0x11;
  local_var_a0._0_4_ = uVar2;
  if (puVar4 == (int32_t *)0x0) {
    puVar4 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x20,0x13);
    *(int8_t *)puVar4 = 0;
LAB_1801f0caa:
    plocal_var_b0 = puVar4;
    local_var_a0._0_4_ = CoreMemoryPoolCleaner(puVar4);
  }
  else if (uVar2 < 0x20) {
    local_var_c8 = 0x13;
    puVar4 = (int32_t *)DataValidator(system_memory_pool_ptr,puVar4,0x20,0x10);
    goto LAB_1801f0caa;
  }
  *(uint64_t *)((int64_t)puVar4 + 0x11) = 0x61645f746e6f662f;
  *(int32_t *)((int64_t)puVar4 + 0x19) = 0x782e6174;
  *(int16_t *)((int64_t)puVar4 + 0x1d) = 0x6c6d;
  *(int8_t *)((int64_t)puVar4 + 0x1f) = 0;
  local_var_a8 = 0x1f;
  plocal_var_48 = &system_config_ptr;
  plocal_var_40 = stack_array_30;
  stack_array_30[0] = 0;
  local_var_38 = 6;
  strcpy_s(stack_array_30,0x10,&rendering_buffer_2588_ptr);
  local_var_98 = 1;
  SystemCore_EncryptionEngine0(&plocal_var_90,&plocal_var_48);
  local_var_98 = 0;
  plocal_var_48 = &system_state_ptr;
  iVar5 = local_var_80 + 0x12;
  if (iVar5 != 0) {
    uVar2 = local_var_80 + 0x13;
    if (plocal_var_88 == (int8_t *)0x0) {
      if ((int)uVar2 < 0x10) {
        uVar2 = 0x10;
      }
      plocal_var_88 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar2,0x13);
      *plocal_var_88 = 0;
    }
    else {
      if (uVar2 <= local_var_78) goto LAB_1801f0db0;
      local_var_c8 = 0x13;
      plocal_var_88 = (int8_t *)DataValidator(system_memory_pool_ptr,plocal_var_88,uVar2,0x10);
    }
    local_var_78 = CoreMemoryPoolCleaner(plocal_var_88);
  }
LAB_1801f0db0:
  puVar4 = (int32_t *)(plocal_var_88 + local_var_80);
  *puVar4 = 0x61746144;
  puVar4[1] = 0x6e6f662f;
  puVar4[2] = 0x61645f74;
  puVar4[3] = 0x782e6174;
  *(int16_t *)(puVar4 + 4) = 0x6c6d;
  *(int8_t *)((int64_t)puVar4 + 0x12) = 0;
  plocal_var_70 = &system_data_buffer_ptr;
  local_var_58 = 0;
  plocal_var_68 = (int32_t *)0x0;
  local_var_60 = 0;
  local_var_80 = iVar5;
  puVar4 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  plocal_var_68 = puVar4;
  uVar3 = CoreMemoryPoolCleaner(puVar4);
  *puVar4 = 0x6974614e;
  *(int16_t *)(puVar4 + 1) = 0x6576;
  *(int8_t *)((int64_t)puVar4 + 6) = 0;
  local_var_60 = 6;
  local_var_58._0_4_ = uVar3;
  GenericFunction_180180ad0(0,&plocal_var_70,&plocal_var_b8,&plocal_var_90);
  plocal_var_70 = &system_data_buffer_ptr;
  if (plocal_var_68 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  plocal_var_68 = (int32_t *)0x0;
  local_var_58 = (uint64_t)local_var_58._4_4_ << 0x20;
  plocal_var_70 = &system_state_ptr;
  plocal_var_90 = &system_data_buffer_ptr;
  if (plocal_var_88 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  plocal_var_88 = (int8_t *)0x0;
  local_var_78 = 0;
  plocal_var_90 = &system_state_ptr;
  plocal_var_b8 = &system_data_buffer_ptr;
  if (plocal_var_b0 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  plocal_var_b0 = (int32_t *)0x0;
  local_var_a0 = (uint64_t)local_var_a0._4_4_ << 0x20;
  plocal_var_b8 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_20 ^ (uint64_t)stack_array_e8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address