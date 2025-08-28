/* 函数别名定义: MemoryDebugger */
#define MemoryDebugger MemoryDebugger
#include "SystemDataAdvancedValidator_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part250.c - 21 个函数
// 函数: void DataStructure_16250(uint64_t param_1,uint64_t *param_2,int32_t param_3)
void DataStructure_16250(uint64_t param_1,uint64_t *param_2,int32_t param_3)
{
  int8_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int8_t stack_array_268 [32];
  int32_t local_var_248;
  int8_t stack_array_244 [4];
  uint64_t local_var_240;
  uint64_t *plocal_var_238;
  char acStack_228 [512];
  uint64_t local_var_28;
  uint64_t uVar5;
  local_var_240 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_268;
  local_var_248 = 0;
  plocal_var_238 = param_2;
  lVar2 = DataStructure_13700(param_1,param_3,0);
  if (lVar2 == 0) {
    uVar3 = MemoryDebugger0();
    SystemCore_NetworkHandler0(param_2,uVar3);
  }
  else {
    NetworkProtocol_46610(lVar2,acStack_228,0x200,stack_array_244);
    *param_2 = &system_state_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &system_data_buffer_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    uVar4 = 0xffffffffffffffff;
    do {
      uVar5 = uVar4;
      uVar4 = uVar5 + 1;
    } while (acStack_228[uVar5 + 1] != '\0');
    CoreMemoryPoolProcessor(param_2,uVar4 & 0xffffffff);
    puVar1 = (int8_t *)param_2[1];
    if ((int)uVar4 != 0) {
// WARNING: Subroutine does not return
      memcpy(puVar1,acStack_228,(int)uVar5 + 2);
    }
    *(int32_t *)(param_2 + 2) = 0;
    if (puVar1 != (int8_t *)0x0) {
      *puVar1 = 0;
    }
  }
  local_var_248 = 1;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_268);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
bool DataStructure_16360(int64_t param_1,uint64_t param_2,uint64_t param_3)
{
  uint uVar1;
  int64_t lVar2;
  int32_t *puVar3;
  int iVar4;
  int32_t extraout_XMM0_Da;
  void *plocal_var_40;
  int32_t *plocal_var_38;
  uint local_var_30;
  uint64_t local_var_28;
  if ((*(char *)(param_1 + 0x210) != '\0') || (*(int *)(core_system_data_memory + 0xb60) != 1)) {
    return false;
  }
  plocal_var_40 = (void *)0x18021639b;
  lVar2 = DataStructure_13920();
  plocal_var_40 = (void *)0x1802163a9;
  DataStructure_164f0(extraout_XMM0_Da,lVar2,param_3);
  if (lVar2 == 0) {
    plocal_var_40 = (void *)0x180216404;
    SystemConfigurationManager(system_message_context,0,0x1000000000000,3);
    return false;
  }
  if (*(int *)(core_system_data_memory + 0x9a0) == 0) goto LAB_18040698e;
  plocal_var_40 = &system_data_buffer_ptr;
  local_var_28 = 0;
  plocal_var_38 = (int32_t *)0x0;
  local_var_30 = 0;
  plocal_var_38 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x22,0x13);
  *(int8_t *)plocal_var_38 = 0;
  uVar1 = CoreMemoryPoolCleaner(plocal_var_38);
  *plocal_var_38 = 0x53203e20;
  plocal_var_38[1] = 0x444e554f;
  plocal_var_38[2] = 0x74533e20;
  plocal_var_38[3] = 0x20747261;
  plocal_var_38[4] = 0x6e657665;
  plocal_var_38[5] = 0x69772074;
  plocal_var_38[6] = 0x68206874;
  plocal_var_38[7] = 0x6c646e61;
  *(int16_t *)(plocal_var_38 + 8) = 0x65;
  local_var_30 = 0x21;
  local_var_28._0_4_ = uVar1;
  UtilitiesSystem_28570(&plocal_var_40,lVar2);
  iVar4 = local_var_30 + 1;
  if (iVar4 != 0) {
    uVar1 = local_var_30 + 2;
    if (plocal_var_38 == (int32_t *)0x0) {
      if ((int)uVar1 < 0x10) {
        uVar1 = 0x10;
      }
      plocal_var_38 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar1,0x13);
      *(int8_t *)plocal_var_38 = 0;
    }
    else {
      if (uVar1 <= (uint)local_var_28) goto LAB_180406929;
      plocal_var_38 = (int32_t *)DataValidator(system_memory_pool_ptr,plocal_var_38,uVar1,0x10,0x13);
    }
    local_var_28._0_4_ = CoreMemoryPoolCleaner(plocal_var_38);
  }
LAB_180406929:
  *(int16_t *)((uint64_t)local_var_30 + (int64_t)plocal_var_38) = 10;
  puVar3 = (int32_t *)&system_buffer_ptr;
  if (plocal_var_38 != (int32_t *)0x0) {
    puVar3 = plocal_var_38;
  }
  local_var_30 = iVar4;
  SystemConfigurationManager(system_message_context,0,0x1000000000000,3,puVar3);
  plocal_var_40 = &system_data_buffer_ptr;
  if (plocal_var_38 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_38 = (int32_t *)0x0;
  local_var_28 = (uint64_t)local_var_28._4_4_ << 0x20;
  plocal_var_40 = &system_state_ptr;
LAB_18040698e:
  iVar4 = NetworkProtocol_4acb0(lVar2);
  SystemCore_NetworkHandler(iVar4,&processed_var_6792_ptr);
  return iVar4 == 0;
}
// WARNING: Removing unreachable block (ram,0x000180406901)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
bool DataStructure_16391(void)
{
  uint uVar1;
  int iVar2;
  int64_t lVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  int32_t extraout_XMM0_Da;
  void *plocal_var_8;
  plocal_var_8 = (void *)0x18021639b;
  lVar3 = DataStructure_13920();
  plocal_var_8 = (void *)0x1802163a9;
  DataStructure_164f0(extraout_XMM0_Da,lVar3);
  if (lVar3 == 0) {
    plocal_var_8 = (void *)0x180216404;
    SystemConfigurationManager(system_message_context,0,0x1000000000000,3,&processed_var_4640_ptr);
    return false;
  }
  if (*(int *)(core_system_data_memory + 0x9a0) == 0) goto LAB_18040698e;
  plocal_var_8 = &system_data_buffer_ptr;
  puVar4 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x22,0x13);
  *(int8_t *)puVar4 = 0;
  uVar1 = CoreMemoryPoolCleaner(puVar4);
  *puVar4 = 0x53203e20;
  puVar4[1] = 0x444e554f;
  puVar4[2] = 0x74533e20;
  puVar4[3] = 0x20747261;
  puVar4[4] = 0x6e657665;
  puVar4[5] = 0x69772074;
  puVar4[6] = 0x68206874;
  puVar4[7] = 0x6c646e61;
  *(int16_t *)(puVar4 + 8) = 0x65;
  UtilitiesSystem_28570(&plocal_var_8,lVar3);
  if (puVar4 == (int32_t *)0x0) {
    puVar4 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x23,0x13);
    *(int8_t *)puVar4 = 0;
LAB_180406921:
    CoreMemoryPoolCleaner(puVar4);
  }
  else if (uVar1 < 0x23) {
    puVar4 = (int32_t *)DataValidator(system_memory_pool_ptr,puVar4,0x23,0x10,0x13);
    goto LAB_180406921;
  }
  *(int16_t *)((int64_t)puVar4 + 0x21) = 10;
  puVar5 = (int32_t *)&system_buffer_ptr;
  if (puVar4 != (int32_t *)0x0) {
    puVar5 = puVar4;
  }
  SystemConfigurationManager(system_message_context,0,0x1000000000000,3,puVar5);
  plocal_var_8 = &system_data_buffer_ptr;
  if (puVar4 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_8 = &system_state_ptr;
LAB_18040698e:
  iVar2 = NetworkProtocol_4acb0(lVar3);
  SystemCore_NetworkHandler(iVar2,&processed_var_6792_ptr);
  return iVar2 == 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t DataStructure_163c5(void)
{
  uint64_t uVar1;
  int64_t unaff_RDI;
  void *plocal_buffer_28;
  plocal_buffer_28 = &system_buffer_ptr;
  if (*(void **)(unaff_RDI + 8) != (void *)0x0) {
    plocal_buffer_28 = *(void **)(unaff_RDI + 8);
  }
  uVar1 = SystemConfigurationManager(system_message_context,0,0x1000000000000,3,&processed_var_4640_ptr);
  return uVar1 & 0xffffffffffffff00;
}
int8_t DataStructure_16416(void)
{
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
bool DataStructure_16430(int64_t param_1,int param_2,uint64_t param_3)
{
  uint uVar1;
  int64_t lVar2;
  int32_t *puVar3;
  int iVar4;
  int32_t extraout_XMM0_Da;
  void *plocal_var_40;
  int32_t *plocal_var_38;
  uint local_var_30;
  uint64_t local_var_28;
  if (((param_2 < 0) || (*(char *)(param_1 + 0x210) != '\0')) ||
     (*(int *)(core_system_data_memory + 0xb60) != 1)) {
    return false;
  }
  plocal_var_40 = (void *)0x18021646e;
  lVar2 = DataStructure_13bb0();
  plocal_var_40 = (void *)0x18021647c;
  DataStructure_164f0(extraout_XMM0_Da,lVar2,param_3);
  if (lVar2 == 0) {
    plocal_var_40 = (void *)0x1802164c4;
    SystemConfigurationManager(system_message_context,0,0x1000000000000,3);
    return false;
  }
  if (*(int *)(core_system_data_memory + 0x9a0) == 0) goto LAB_18040698e;
  plocal_var_40 = &system_data_buffer_ptr;
  local_var_28 = 0;
  plocal_var_38 = (int32_t *)0x0;
  local_var_30 = 0;
  plocal_var_38 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x22,0x13);
  *(int8_t *)plocal_var_38 = 0;
  uVar1 = CoreMemoryPoolCleaner(plocal_var_38);
  *plocal_var_38 = 0x53203e20;
  plocal_var_38[1] = 0x444e554f;
  plocal_var_38[2] = 0x74533e20;
  plocal_var_38[3] = 0x20747261;
  plocal_var_38[4] = 0x6e657665;
  plocal_var_38[5] = 0x69772074;
  plocal_var_38[6] = 0x68206874;
  plocal_var_38[7] = 0x6c646e61;
  *(int16_t *)(plocal_var_38 + 8) = 0x65;
  local_var_30 = 0x21;
  local_var_28._0_4_ = uVar1;
  UtilitiesSystem_28570(&plocal_var_40,lVar2);
  iVar4 = local_var_30 + 1;
  if (iVar4 != 0) {
    uVar1 = local_var_30 + 2;
    if (plocal_var_38 == (int32_t *)0x0) {
      if ((int)uVar1 < 0x10) {
        uVar1 = 0x10;
      }
      plocal_var_38 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar1,0x13);
      *(int8_t *)plocal_var_38 = 0;
    }
    else {
      if (uVar1 <= (uint)local_var_28) goto LAB_180406929;
      plocal_var_38 = (int32_t *)DataValidator(system_memory_pool_ptr,plocal_var_38,uVar1,0x10,0x13);
    }
    local_var_28._0_4_ = CoreMemoryPoolCleaner(plocal_var_38);
  }
LAB_180406929:
  *(int16_t *)((uint64_t)local_var_30 + (int64_t)plocal_var_38) = 10;
  puVar3 = (int32_t *)&system_buffer_ptr;
  if (plocal_var_38 != (int32_t *)0x0) {
    puVar3 = plocal_var_38;
  }
  local_var_30 = iVar4;
  SystemConfigurationManager(system_message_context,0,0x1000000000000,3,puVar3);
  plocal_var_40 = &system_data_buffer_ptr;
  if (plocal_var_38 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_38 = (int32_t *)0x0;
  local_var_28 = (uint64_t)local_var_28._4_4_ << 0x20;
  plocal_var_40 = &system_state_ptr;
LAB_18040698e:
  iVar4 = NetworkProtocol_4acb0(lVar2);
  SystemCore_NetworkHandler(iVar4,&processed_var_6792_ptr);
  return iVar4 == 0;
}
// WARNING: Removing unreachable block (ram,0x000180406901)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
bool DataStructure_16464(void)
{
  uint uVar1;
  int iVar2;
  int64_t lVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  int32_t extraout_XMM0_Da;
  void *plocal_var_8;
  plocal_var_8 = (void *)0x18021646e;
  lVar3 = DataStructure_13bb0();
  plocal_var_8 = (void *)0x18021647c;
  DataStructure_164f0(extraout_XMM0_Da,lVar3);
  if (lVar3 == 0) {
    plocal_var_8 = (void *)0x1802164c4;
    SystemConfigurationManager(system_message_context,0,0x1000000000000,3,&processed_var_4832_ptr);
    return false;
  }
  if (*(int *)(core_system_data_memory + 0x9a0) == 0) goto LAB_18040698e;
  plocal_var_8 = &system_data_buffer_ptr;
  puVar4 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x22,0x13);
  *(int8_t *)puVar4 = 0;
  uVar1 = CoreMemoryPoolCleaner(puVar4);
  *puVar4 = 0x53203e20;
  puVar4[1] = 0x444e554f;
  puVar4[2] = 0x74533e20;
  puVar4[3] = 0x20747261;
  puVar4[4] = 0x6e657665;
  puVar4[5] = 0x69772074;
  puVar4[6] = 0x68206874;
  puVar4[7] = 0x6c646e61;
  *(int16_t *)(puVar4 + 8) = 0x65;
  UtilitiesSystem_28570(&plocal_var_8,lVar3);
  if (puVar4 == (int32_t *)0x0) {
    puVar4 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x23,0x13);
    *(int8_t *)puVar4 = 0;
LAB_180406921:
    CoreMemoryPoolCleaner(puVar4);
  }
  else if (uVar1 < 0x23) {
    puVar4 = (int32_t *)DataValidator(system_memory_pool_ptr,puVar4,0x23,0x10,0x13);
    goto LAB_180406921;
  }
  *(int16_t *)((int64_t)puVar4 + 0x21) = 10;
  puVar5 = (int32_t *)&system_buffer_ptr;
  if (puVar4 != (int32_t *)0x0) {
    puVar5 = puVar4;
  }
  SystemConfigurationManager(system_message_context,0,0x1000000000000,3,puVar5);
  plocal_var_8 = &system_data_buffer_ptr;
  if (puVar4 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_8 = &system_state_ptr;
LAB_18040698e:
  iVar2 = NetworkProtocol_4acb0(lVar3);
  SystemCore_NetworkHandler(iVar2,&processed_var_6792_ptr);
  return iVar2 == 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t DataStructure_16498(void)
{
  uint64_t uVar1;
  uVar1 = SystemConfigurationManager(system_message_context,0,0x1000000000000,3,&processed_var_4832_ptr);
  return uVar1 & 0xffffffffffffff00;
}
int8_t DataStructure_164d6(void)
{
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_164f0(uint64_t param_1,uint64_t param_2,int64_t param_3)
void DataStructure_164f0(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  int32_t uVar1;
  uint64_t *puVar2;
  void *puVar3;
  int32_t *puVar4;
  int iVar5;
  if ((param_3 != 0) && (iVar5 = 0, 0 < *(int *)(param_3 + 0xc0))) {
    puVar4 = (int32_t *)(param_3 + 0x24);
    do {
      uVar1 = *puVar4;
      if ((int)puVar4[-1] < 0) {
        puVar3 = &system_buffer_ptr;
        if (*(void **)(puVar4 + -7) != (void *)0x0) {
          puVar3 = *(void **)(puVar4 + -7);
        }
        NetworkProtocol_49d40(param_2,puVar3,uVar1);
      }
      else {
        puVar2 = (uint64_t *)(**(code **)(*core_system_data_memory + 0x1f8))();
        NetworkProtocol_49bb0(param_2,*puVar2,uVar1,0);
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 0xc;
    } while (iVar5 < *(int *)(param_3 + 0xc0));
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_16508(uint64_t param_1,uint64_t param_2,int64_t param_3)
void DataStructure_16508(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  int32_t uVar1;
  uint64_t *puVar2;
  void *puVar3;
  int32_t *puVar4;
  int iVar5;
  iVar5 = 0;
  if (0 < *(int *)(param_3 + 0xc0)) {
    puVar4 = (int32_t *)(param_3 + 0x24);
    do {
      uVar1 = *puVar4;
      if ((int)puVar4[-1] < 0) {
        puVar3 = &system_buffer_ptr;
        if (*(void **)(puVar4 + -7) != (void *)0x0) {
          puVar3 = *(void **)(puVar4 + -7);
        }
        NetworkProtocol_49d40(param_2,puVar3,uVar1);
      }
      else {
        puVar2 = (uint64_t *)(**(code **)(*core_system_data_memory + 0x1f8))();
        NetworkProtocol_49bb0(param_2,*puVar2,uVar1,0);
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 0xc;
    } while (iVar5 < *(int *)(param_3 + 0xc0));
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_16522(uint64_t param_1,uint64_t param_2,int64_t param_3)
void DataStructure_16522(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  int64_t unaff_RSI;
  int unaff_EDI;
  param_3 = param_3 + 0x24;
  do {
    if (*(int *)(param_3 + -4) < 0) {
      NetworkProtocol_49d40();
    }
    else {
      (**(code **)(*core_system_data_memory + 0x1f8))();
      NetworkProtocol_49bb0();
    }
    unaff_EDI = unaff_EDI + 1;
    param_3 = param_3 + 0x30;
  } while (unaff_EDI < *(int *)(unaff_RSI + 0xc0));
  return;
}
// 函数: void DataStructure_165a5(void)
void DataStructure_165a5(void)
{
  return;
}
// 函数: void DataStructure_165b4(void)
void DataStructure_165b4(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_165c0(int64_t param_1,float param_2)
void DataStructure_165c0(int64_t param_1,float param_2)
{
  int iVar1;
  float fVar2;
  uint64_t astack_special_x_8 [4];
  fVar2 = 0.0;
  if ((0.0 <= param_2) && (fVar2 = param_2, 1.0 <= param_2)) {
    fVar2 = 1.0;
  }
  if (fVar2 != *(float *)(param_1 + 0x200)) {
    NetworkProtocol_47310(*(uint64_t *)(param_1 + 0x368),&processed_var_4872_ptr,astack_special_x_8);
    iVar1 = NetworkProtocol_4ab60(astack_special_x_8[0],fVar2);
    if (iVar1 != 0) {
      SystemConfigurationManager(system_message_context,0,0x1000000000000,3,&processed_var_4760_ptr);
    }
    *(float *)(param_1 + 0x200) = fVar2;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_16650(int64_t param_1,float param_2)
void DataStructure_16650(int64_t param_1,float param_2)
{
  int iVar1;
  float fVar2;
  uint64_t astack_special_x_8 [4];
  fVar2 = 0.0;
  if ((0.0 <= param_2) && (fVar2 = param_2, 1.0 <= param_2)) {
    fVar2 = 1.0;
  }
  if (fVar2 != *(float *)(param_1 + 0x204)) {
    NetworkProtocol_47310(*(uint64_t *)(param_1 + 0x368),&processed_var_4816_ptr,astack_special_x_8);
    iVar1 = NetworkProtocol_4ab60(astack_special_x_8[0],fVar2);
    if (iVar1 != 0) {
      SystemConfigurationManager(system_message_context,0,0x1000000000000,3,&processed_var_4960_ptr);
    }
    *(float *)(param_1 + 0x204) = fVar2;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_166e0(int64_t param_1,float param_2)
void DataStructure_166e0(int64_t param_1,float param_2)
{
  int iVar1;
  float fVar2;
  uint64_t astack_special_x_8 [4];
  fVar2 = 0.0;
  if ((0.0 <= param_2) && (fVar2 = param_2, 1.0 <= param_2)) {
    fVar2 = 1.0;
  }
  if (fVar2 != *(float *)(param_1 + 0x208)) {
    NetworkProtocol_47310(*(uint64_t *)(param_1 + 0x368),&processed_var_5008_ptr,astack_special_x_8);
    iVar1 = NetworkProtocol_4ab60(astack_special_x_8[0],fVar2);
    if (iVar1 != 0) {
      SystemConfigurationManager(system_message_context,0,0x1000000000000,3,&processed_var_4888_ptr);
    }
    *(float *)(param_1 + 0x208) = fVar2;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_16770(int64_t param_1,float param_2)
void DataStructure_16770(int64_t param_1,float param_2)
{
  int iVar1;
  float fVar2;
  uint64_t astack_special_x_8 [4];
  fVar2 = 0.0;
  if ((0.0 <= param_2) && (fVar2 = param_2, 1.0 <= param_2)) {
    fVar2 = 1.0;
  }
  if (fVar2 != *(float *)(param_1 + 0x20c)) {
    NetworkProtocol_47310(*(uint64_t *)(param_1 + 0x368),&processed_var_4944_ptr,astack_special_x_8);
    iVar1 = NetworkProtocol_4ab60(astack_special_x_8[0],fVar2);
    if (iVar1 != 0) {
      SystemConfigurationManager(system_message_context,0,0x1000000000000,3,&processed_var_5192_ptr);
    }
    *(float *)(param_1 + 0x20c) = fVar2;
  }
  return;
}
// 函数: void DataStructure_16800(int64_t param_1)
void DataStructure_16800(int64_t param_1)
{
  uint64_t stack_special_x_8;
  uint64_t astack_special_x_10 [3];
  NetworkProtocol_451c0(*(uint64_t *)(param_1 + 0x368),&processed_var_5248_ptr,&stack_special_x_8);
  NetworkProtocol_4a8c0(stack_special_x_8,0);
  NetworkProtocol_451c0(*(uint64_t *)(param_1 + 0x368),&processed_var_5024_ptr,astack_special_x_10);
  NetworkProtocol_4a8c0(astack_special_x_10[0],0);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_16860(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void DataStructure_16860(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  void *puVar5;
  uint uVar6;
  uint *puVar7;
  int32_t *puVar8;
  uint64_t uVar9;
  int32_t uVar10;
  void *plocal_var_d0;
  int64_t lStack_c8;
  int32_t local_var_c0;
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  int64_t lStack_a8;
  uint *plocal_var_a0;
  uint64_t local_var_98;
  int16_t local_var_90;
  int8_t local_var_8e;
  void *plocal_var_88;
  int64_t lStack_80;
  uint local_var_78;
  int32_t local_var_70;
  void *plocal_var_68;
  void *plocal_var_60;
  uint64_t local_var_48;
  int64_t lStack_40;
  uint64_t local_var_30;
  local_var_30 = 0xfffffffffffffffe;
  GenericFunction_1801597a0(param_1,&plocal_var_68,param_3,param_4,0);
  local_var_48 = 0;
  lStack_40 = 0;
  puVar5 = &system_buffer_ptr;
  if (plocal_var_60 != (void *)0x0) {
    puVar5 = plocal_var_60;
  }
  uVar10 = SystemCore_Validator(&local_var_48,puVar5,&processed_var_4880_ptr);
  lVar2 = lStack_40;
  if (lStack_40 == 0) {
    lVar2 = GenericFunction_1801595d0(uVar10,&plocal_var_88);
    uVar6 = local_var_78 + 0x13;
    CoreMemoryPoolProcessor(&plocal_var_88,uVar6);
    puVar8 = (int32_t *)((uint64_t)local_var_78 + lStack_80);
    *puVar8 = 0x6e756f53;
    puVar8[1] = 0x74614464;
    puVar8[2] = 0x672e7361;
    puVar8[3] = 0x732e6e65;
    puVar8[4] = 0x666465;
    puVar5 = &system_buffer_ptr;
    if (*(void **)(lVar2 + 8) != (void *)0x0) {
      puVar5 = *(void **)(lVar2 + 8);
    }
    local_var_78 = uVar6;
    SystemOptimizationProcessor(&processed_var_5040_ptr,puVar5);
    plocal_var_88 = &system_data_buffer_ptr;
    if (lStack_80 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_80 = 0;
    local_var_70 = 0;
    plocal_var_88 = &system_state_ptr;
  }
  else {
    lStack_a8 = 0;
    plocal_var_a0 = (uint *)0x0;
    local_var_98 = 0;
    local_var_90 = 0;
    local_var_8e = 3;
    uVar3 = _ftelli64(lStack_40);
    _fseeki64(lVar2,0,2);
    uVar4 = _ftelli64(lVar2);
    _fseeki64(lVar2,uVar3,0);
    System_BufferManager(&lStack_a8,uVar4);
    fread(plocal_var_a0,1,uVar4,lVar2);
    fclose(lVar2);
    lStack_40 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
    uVar6 = *plocal_var_a0;
    puVar7 = (uint *)((int64_t)plocal_var_a0 + 2);
    plocal_var_a0 = puVar7;
    if ((ushort)uVar6 != 0) {
      uVar9 = (uint64_t)(ushort)uVar6;
      do {
        plocal_var_d0 = &system_data_buffer_ptr;
        local_var_b8 = 0;
        lStack_c8 = 0;
        local_var_c0 = 0;
        local_var_b0 = 0;
        uVar6 = *puVar7;
        puVar7 = puVar7 + 1;
        if (uVar6 != 0) {
          plocal_var_a0 = puVar7;
          UtilitiesSystem_28f30(&plocal_var_d0,puVar7,uVar6);
          puVar7 = (uint *)((int64_t)puVar7 + (uint64_t)uVar6);
        }
        local_var_b0 = *(uint64_t *)puVar7;
        puVar7 = puVar7 + 2;
        uVar1 = *(uint64_t *)(param_1 + 0x3e0);
        plocal_var_a0 = puVar7;
        if (uVar1 < *(uint64_t *)(param_1 + 1000)) {
          *(uint64_t *)(param_1 + 0x3e0) = uVar1 + 0x28;
          SystemCore_NetworkHandler0(uVar1);
          *(uint64_t *)(uVar1 + 0x20) = local_var_b0;
        }
        else {
          DataStructure_195b0(param_1 + 0x3d8,&plocal_var_d0);
        }
        plocal_var_d0 = &system_data_buffer_ptr;
        if (lStack_c8 != 0) {
// WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        lStack_c8 = 0;
        local_var_b8 = local_var_b8 & 0xffffffff00000000;
        plocal_var_d0 = &system_state_ptr;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    DataStructure_187b0(param_1 + 0x3d8);
    if (((char)local_var_90 == '\0') && (lStack_a8 != 0)) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  plocal_var_68 = &system_data_buffer_ptr;
  if (plocal_var_60 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return;
}
// 函数: void DataStructure_16bb0(int64_t param_1,int param_2,uint64_t param_3)
void DataStructure_16bb0(int64_t param_1,int param_2,uint64_t param_3)
{
  int64_t *plVar1;
  if (*(char *)(param_1 + 0x430) != '\0') {
    plVar1 = (int64_t *)(*(int64_t *)(param_1 + 0x438 + (int64_t)param_2 * 8) + 0x18);
    (**(code **)(*plVar1 + 0x10))(plVar1,param_3);
    *(int8_t *)((int64_t)param_2 + 0x3f8 + param_1) = 1;
  }
  return;
}
// 函数: void DataStructure_16bc2(int64_t param_1,int param_2,uint64_t param_3)
void DataStructure_16bc2(int64_t param_1,int param_2,uint64_t param_3)
{
  int64_t *plVar1;
  int64_t unaff_RDI;
  plVar1 = (int64_t *)(*(int64_t *)(param_1 + 0x438 + (int64_t)param_2 * 8) + 0x18);
  (**(code **)(*plVar1 + 0x10))(plVar1,param_3);
  *(int8_t *)((int64_t)param_2 + 0x3f8 + unaff_RDI) = 1;
  return;
}
// 函数: void DataStructure_16bec(void)
void DataStructure_16bec(void)
{
  return;
}
// 函数: void DataStructure_16c00(int64_t param_1,int param_2)
void DataStructure_16c00(int64_t param_1,int param_2)
{
  int64_t *plVar1;
  if (*(char *)(param_1 + 0x430) != '\0') {
    plVar1 = (int64_t *)(*(int64_t *)(param_1 + 0x438 + (int64_t)param_2 * 8) + 0x18);
    (**(code **)(*plVar1 + 0x10))(plVar1,&system_buffer_ptr);
    *(int8_t *)((int64_t)param_2 + 0x3f8 + param_1) = 0;
  }
  return;
}
// 函数: void DataStructure_16c12(int64_t param_1,int param_2)
void DataStructure_16c12(int64_t param_1,int param_2)
{
  int64_t *plVar1;
  int64_t unaff_RDI;
  plVar1 = (int64_t *)(*(int64_t *)(param_1 + 0x438 + (int64_t)param_2 * 8) + 0x18);
  (**(code **)(*plVar1 + 0x10))(plVar1,&system_buffer_ptr);
  *(int8_t *)((int64_t)param_2 + 0x3f8 + unaff_RDI) = 0;
  return;
}
// 函数: void DataStructure_16c40(void)
void DataStructure_16c40(void)
{
  return;
}
// 函数: void DataStructure_16c80(int64_t param_1,int param_2,int param_3)
void DataStructure_16c80(int64_t param_1,int param_2,int param_3)
{
  uint uVar1;
  uVar1 = timeGetTime();
  *(uint64_t *)(param_1 + 0x490 + (int64_t)param_2 * 8) = (uint64_t)uVar1 + (int64_t)param_3;
  return;
}
uint64_t DataStructure_16cc0(int64_t param_1,int param_2)
{
  char cVar1;
  if (*(char *)(param_1 + 0x430) != '\0') {
    cVar1 = (**(code **)(**(int64_t **)(param_1 + 0x438 + (int64_t)param_2 * 8) + 0x80))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t DataStructure_16d70(uint64_t param_1,int64_t param_2,uint param_3)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uVar12 = 0xfffffffffffffffe;
  lVar11 = core_system_data_memory + 0x260;
  iVar4 = _Mtx_lock(lVar11);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  puVar10 = (uint64_t *)(core_system_data_memory + 0x2d0);
  puVar6 = *(uint64_t **)(core_system_data_memory + 0x2e0);
  puVar5 = puVar10;
  if (puVar6 != (uint64_t *)0x0) {
    do {
      if ((uint64_t)puVar6[4] < param_1) {
        puVar6 = (uint64_t *)*puVar6;
      }
      else {
        puVar5 = puVar6;
        puVar6 = (uint64_t *)puVar6[1];
      }
    } while (puVar6 != (uint64_t *)0x0);
    if ((puVar5 != puVar10) && ((uint64_t)puVar5[4] <= param_1)) goto LAB_180216e0c;
  }
  puVar5 = puVar10;
LAB_180216e0c:
  if (puVar5 != puVar10) {
    plVar1 = *(int64_t **)
              (*(int64_t *)(core_system_data_memory + 0x2b0) + (int64_t)*(int *)(puVar5 + 5) * 0x10);
    lVar3 = plVar1[1];
    lVar8 = *plVar1;
    uVar7 = 0;
    iVar4 = 0;
    if (param_3 != 0) {
      uVar9 = uVar7;
      puVar10 = (uint64_t *)(uint64_t)param_3;
      do {
        if ((int64_t)uVar7 < (int64_t)((int)lVar3 - (int)lVar8)) {
          *(int8_t *)(uVar7 + param_2) = *(int8_t *)(uVar7 + *plVar1);
          uVar9 = (uint64_t)((int)uVar9 + 1);
        }
        else {
          *(int8_t *)(uVar7 + param_2) = 0;
        }
        iVar4 = (int)uVar9;
        uVar7 = uVar7 + 1;
        puVar10 = (uint64_t *)((int64_t)puVar10 + -1);
      } while (puVar10 != (uint64_t *)0x0);
    }
    lVar3 = *plVar1;
    lVar8 = iVar4 + lVar3;
    if (lVar3 != lVar8) {
      lVar2 = plVar1[1];
      if (lVar8 != lVar2) {
// WARNING: Subroutine does not return
        memmove(lVar3,lVar8,lVar2 - lVar8,puVar10,uVar12);
      }
      plVar1[1] = (lVar2 - lVar8) + lVar3;
    }
  }
  iVar4 = _Mtx_unlock(lVar11);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  return 0;
}
// 函数: void DataStructure_16ec0(int64_t param_1,int param_2)
void DataStructure_16ec0(int64_t param_1,int param_2)
{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int iVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t *plVar11;
  lVar10 = (int64_t)param_2 * 0x10;
  plVar2 = *(int64_t **)(lVar10 + 8 + *(int64_t *)(param_1 + 0x2b0));
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  iVar6 = _Mtx_lock(param_1 + 0x260);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  plVar11 = *(int64_t **)(*(int64_t *)(param_1 + 0x2b0) + lVar10);
  if (plVar11 != (int64_t *)0x0) {
    if (*plVar11 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(plVar11);
  }
  *(uint64_t *)(lVar10 + *(int64_t *)(param_1 + 0x2b0)) = 0;
  lVar10 = lVar10 + *(int64_t *)(param_1 + 0x2b0);
  uVar1 = lVar10 + 0x10;
  uVar7 = *(uint64_t *)(param_1 + 0x2b8);
  if ((uVar1 < uVar7) && (lVar9 = (int64_t)(uVar7 - uVar1) >> 4, 0 < lVar9)) {
    plVar11 = (int64_t *)(lVar10 + 8);
    do {
      plVar11[-1] = plVar11[1];
      plVar3 = (int64_t *)plVar11[2];
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3);
      }
      plVar4 = (int64_t *)*plVar11;
      *plVar11 = (int64_t)plVar3;
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x38))();
      }
      lVar9 = lVar9 + -1;
      plVar11 = plVar11 + 2;
    } while (0 < lVar9);
    uVar7 = *(uint64_t *)(param_1 + 0x2b8);
  }
  *(uint64_t *)(param_1 + 0x2b8) = uVar7 - 0x10;
  if (*(int64_t **)(uVar7 - 8) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(uVar7 - 8) + 0x38))();
  }
  lVar10 = param_1 + 0x2d0;
  lVar9 = *(int64_t *)(param_1 + 0x2d8);
  lVar5 = lVar10;
  while (lVar9 != lVar10) {
    iVar6 = *(int *)(lVar9 + 0x28);
    lVar8 = lVar9;
    if ((iVar6 != param_2) && (lVar8 = lVar5, param_2 < iVar6)) {
      *(int *)(lVar9 + 0x28) = iVar6 + -1;
    }
    lVar9 = Function_7bfb2422(lVar9);
    lVar5 = lVar8;
  }
  *(int64_t *)(param_1 + 0x2f0) = *(int64_t *)(param_1 + 0x2f0) + -1;
  Function_7bfb2422(lVar5);
  RenderingSystem_BufferHandler(lVar5,lVar10);
  if (lVar5 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(lVar5);
  }
  iVar6 = _Mtx_unlock(param_1 + 0x260);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  SystemCore_3ebd0(plVar2[0xc]);
// WARNING: Could not recover jumptable at 0x00018021709f. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*plVar2 + 0x38))(plVar2);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_170b0(int64_t param_1)
void DataStructure_170b0(int64_t param_1)
{
  uint64_t uVar1;
  int64_t lVar2;
  int8_t stack_array_118 [224];
  uVar1 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xb8,8,3);
  lVar2 = DataStructure_11930(uVar1);
  *(int32_t *)(lVar2 + 0x60) = 0;
  *(int32_t *)(lVar2 + 100) = 0;
  *(int32_t *)(lVar2 + 0x68) = 0;
  *(int32_t *)(lVar2 + 0x6c) = 0;
  *(int32_t *)(param_1 + 0x480) = 0;
// WARNING: Subroutine does not return
  memset(stack_array_118,0,0xe0);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address