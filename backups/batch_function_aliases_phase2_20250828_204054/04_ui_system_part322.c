#include "TaleWorlds.Native.Split.h"
// 04_ui_system_part322.c - 4 个函数
// 函数: void function_8427f0(int64_t param_1,uint64_t param_2,int32_t param_3)
void function_8427f0(int64_t param_1,uint64_t param_2,int32_t param_3)
{
  function_83f9b0(param_2,param_3,&processed_var_9760_ptr,*(int32_t *)(param_1 + 0x10),
                *(int8_t *)(param_1 + 0x18));
  return;
}
int function_842820(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  uVar2 = *(int32_t *)(param_1 + 0x10);
  uVar1 = *(int32_t *)(param_1 + 0x18);
  iVar3 = DataProcessor(param_2,param_3,&processed_var_9640_ptr);
  iVar4 = DataProcessor(param_2 + iVar3,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_ProcessData(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_ProcessDataEx(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}
int function_8428d0(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  uVar1 = *(int32_t *)(param_1 + 0x18);
  uVar2 = *(int32_t *)(param_1 + 0x10);
  iVar3 = DataProcessor(param_2,param_3,&processed_var_0_ptr);
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_ProcessData(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_Initialize(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}
int function_842990(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  uVar1 = *(int32_t *)(param_1 + 0x10);
  iVar2 = DataProcessor(param_2,param_3,&processed_var_9384_ptr);
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = BufferManager_ProcessData(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_842a00(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  uVar1 = *(int32_t *)(param_1 + 0x18);
  uVar2 = *(int32_t *)(param_1 + 0x10);
  iVar3 = DataProcessor(param_2,param_3,&processed_var_5504_ptr);
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_ProcessData(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_ProcessData(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}
int function_842ac0(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  uVar1 = *(int32_t *)(param_1 + 0x18);
  uVar2 = *(int32_t *)(param_1 + 0x10);
  iVar3 = DataProcessor(param_2,param_3,&processed_var_5648_ptr);
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_ProcessData(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_Initialize(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}
int function_842b80(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  int iVar5;
  uVar1 = *(int32_t *)(param_1 + 0x1c);
  uVar2 = *(int32_t *)(param_1 + 0x18);
  uVar3 = *(int32_t *)(param_1 + 0x10);
  iVar4 = DataProcessor(param_2,param_3,&processed_var_5792_ptr);
  iVar5 = DataProcessor(param_2 + iVar4,param_3 - iVar4,&system_temp_buffer);
  iVar4 = iVar4 + iVar5;
  iVar5 = BufferManager_ProcessData(iVar4 + param_2,param_3 - iVar4,uVar3);
  iVar4 = iVar4 + iVar5;
  iVar5 = DataProcessor(iVar4 + param_2,param_3 - iVar4,&system_temp_buffer);
  iVar4 = iVar4 + iVar5;
  iVar5 = BufferManager_Initialize(iVar4 + param_2,param_3 - iVar4,uVar2);
  iVar4 = iVar4 + iVar5;
  iVar5 = DataProcessor(iVar4 + param_2,param_3 - iVar4,&system_temp_buffer);
  iVar4 = iVar4 + iVar5;
  iVar5 = BufferManager_Initialize(iVar4 + param_2,param_3 - iVar4,uVar1);
  return iVar5 + iVar4;
}
int function_842c60(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  int iVar5;
  uVar1 = *(int32_t *)(param_1 + 0x1c);
  uVar2 = *(int32_t *)(param_1 + 0x18);
  uVar3 = *(int32_t *)(param_1 + 0x10);
  iVar4 = DataProcessor(param_2,param_3,&processed_var_5936_ptr);
  iVar5 = DataProcessor(param_2 + iVar4,param_3 - iVar4,&system_temp_buffer);
  iVar4 = iVar4 + iVar5;
  iVar5 = BufferManager_ProcessData(iVar4 + param_2,param_3 - iVar4,uVar3);
  iVar4 = iVar4 + iVar5;
  iVar5 = DataProcessor(iVar4 + param_2,param_3 - iVar4,&system_temp_buffer);
  iVar4 = iVar4 + iVar5;
  iVar5 = BufferManager_Initialize(iVar4 + param_2,param_3 - iVar4,uVar2);
  iVar4 = iVar4 + iVar5;
  iVar5 = DataProcessor(iVar4 + param_2,param_3 - iVar4,&system_temp_buffer);
  iVar4 = iVar4 + iVar5;
  iVar5 = BufferManager_ProcessData(iVar4 + param_2,param_3 - iVar4,uVar1);
  return iVar5 + iVar4;
}
int function_842d40(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  uVar1 = *(int32_t *)(param_1 + 0x18);
  uVar2 = *(int32_t *)(param_1 + 0x10);
  iVar3 = DataProcessor(param_2,param_3,&processed_var_6368_ptr);
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_ProcessData(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_Initialize(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}
int function_842e00(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  uVar1 = *(int32_t *)(param_1 + 0x10);
  iVar2 = DataProcessor(param_2,param_3,&processed_var_6080_ptr);
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = BufferManager_ProcessData(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_842e70(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  uVar1 = *(int32_t *)(param_1 + 0x10);
  iVar2 = DataProcessor(param_2,param_3,&processed_var_6512_ptr);
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = BufferManager_ProcessData(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_842ee0(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  uVar1 = *(int32_t *)(param_1 + 0x10);
  iVar2 = DataProcessor(param_2,param_3,&processed_var_6224_ptr);
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = BufferManager_ProcessData(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_842f50(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  uint64_t uVar2;
  int iVar3;
  int iVar4;
  uVar2 = *(uint64_t *)(param_1 + 0x18);
  uVar1 = *(int32_t *)(param_1 + 0x10);
  iVar3 = DataProcessor(param_2,param_3,&processed_var_8392_ptr);
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_ProcessData(iVar3 + param_2,param_3 - iVar3,uVar1);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074bda0(iVar3 + param_2,param_3 - iVar3,uVar2);
  return iVar4 + iVar3;
}
int function_843010(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  uVar1 = *(int32_t *)(param_1 + 0x18);
  uVar2 = *(int32_t *)(param_1 + 0x10);
  iVar3 = DataProcessor(param_2,param_3,&processed_var_8256_ptr);
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_ProcessData(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_ProcessData(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}
int function_8430d0(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  uVar1 = *(int32_t *)(param_1 + 0x10);
  iVar2 = DataProcessor(param_2,param_3,&processed_var_8000_ptr);
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = BufferManager_ProcessData(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_843140(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  uVar1 = *(int32_t *)(param_1 + 0x10);
  iVar2 = DataProcessor(param_2,param_3,&processed_var_8128_ptr);
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = BufferManager_ProcessData(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_8431b0(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  uint64_t local_var_38;
  uint64_t local_var_30;
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_38 = *(uint64_t *)(param_1 + 0x18);
  local_var_30 = *(uint64_t *)(param_1 + 0x20);
  uVar1 = *(int32_t *)(param_1 + 0x10);
  local_var_28 = *(int32_t *)(param_1 + 0x28);
  local_var_24 = *(int32_t *)(param_1 + 0x2c);
  local_var_20 = *(int32_t *)(param_1 + 0x30);
  local_var_1c = *(int32_t *)(param_1 + 0x34);
  local_var_18 = *(int32_t *)(param_1 + 0x38);
  local_var_14 = *(int32_t *)(param_1 + 0x3c);
  local_var_10 = *(int32_t *)(param_1 + 0x40);
  local_var_c = *(int32_t *)(param_1 + 0x44);
  iVar2 = DataProcessor(param_2,param_3,&processed_var_6920_ptr);
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = BufferManager_ProcessData(iVar2 + param_2,param_3 - iVar2,uVar1);
  iVar2 = iVar2 + iVar3;
  iVar3 = DataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = function_88ebb0(iVar2 + param_2,param_3 - iVar2,&local_var_38);
  return iVar3 + iVar2;
}
int function_843270(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  uVar1 = *(int32_t *)(param_1 + 0x18);
  uVar2 = *(int32_t *)(param_1 + 0x10);
  iVar3 = DataProcessor(param_2,param_3,&processed_var_7056_ptr);
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_ProcessData(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_ProcessData(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}
int function_843330(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int8_t uVar2;
  int32_t uVar3;
  int iVar4;
  int iVar5;
  uint64_t stack_special_x_8;
  stack_special_x_8 = *(uint64_t *)(param_1 + 0x18);
  uVar2 = *(int8_t *)(param_1 + 0x24);
  uVar3 = *(int32_t *)(param_1 + 0x10);
  uVar1 = *(int32_t *)(param_1 + 0x20);
  iVar4 = DataProcessor(param_2,param_3,&processed_var_8528_ptr);
  iVar5 = DataProcessor(iVar4 + param_2,param_3 - iVar4,&system_temp_buffer);
  iVar4 = iVar4 + iVar5;
  iVar5 = BufferManager_ProcessData(iVar4 + param_2,param_3 - iVar4,uVar3);
  iVar4 = iVar4 + iVar5;
  iVar5 = DataProcessor(iVar4 + param_2,param_3 - iVar4,&system_temp_buffer);
  iVar4 = iVar4 + iVar5;
  iVar5 = function_88ece0(iVar4 + param_2,param_3 - iVar4,&stack_special_x_8);
  iVar4 = iVar4 + iVar5;
  iVar5 = DataProcessor(iVar4 + param_2,param_3 - iVar4,&system_temp_buffer);
  iVar4 = iVar4 + iVar5;
  iVar5 = BufferManager_ProcessDataEx(iVar4 + param_2,param_3 - iVar4,uVar1);
  iVar4 = iVar4 + iVar5;
  iVar5 = DataProcessor(iVar4 + param_2,param_3 - iVar4,&system_temp_buffer);
  iVar4 = iVar4 + iVar5;
  iVar5 = SystemCore_Cleanup(iVar4 + param_2,param_3 - iVar4,uVar2);
  return iVar5 + iVar4;
}
int function_843450(int64_t param_1,int64_t param_2,int param_3)
{
  int8_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  uint64_t stack_special_x_8;
  stack_special_x_8 = *(uint64_t *)(param_1 + 0x18);
  uVar1 = *(int8_t *)(param_1 + 0x24);
  uVar2 = *(int32_t *)(param_1 + 0x10);
  iVar3 = DataProcessor(param_2,param_3,&processed_var_8664_ptr);
  iVar4 = DataProcessor(param_2 + iVar3,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_ProcessData(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = function_88ece0(iVar3 + param_2,param_3 - iVar3,&stack_special_x_8);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,param_1 + 0x25);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemCore_Cleanup(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}
int function_843570(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int8_t uVar2;
  int32_t uVar3;
  int iVar4;
  int iVar5;
  uVar2 = *(int8_t *)(param_1 + 0x1c);
  uVar3 = *(int32_t *)(param_1 + 0x10);
  uVar1 = *(int32_t *)(param_1 + 0x18);
  iVar4 = DataProcessor(param_2,param_3,&processed_var_8960_ptr);
  iVar5 = DataProcessor(param_2 + iVar4,param_3 - iVar4,&system_temp_buffer);
  iVar4 = iVar4 + iVar5;
  iVar5 = BufferManager_ProcessData(iVar4 + param_2,param_3 - iVar4,uVar3);
  iVar4 = iVar4 + iVar5;
  iVar5 = DataProcessor(iVar4 + param_2,param_3 - iVar4,&system_temp_buffer);
  iVar4 = iVar4 + iVar5;
  iVar5 = DataProcessor(iVar4 + param_2,param_3 - iVar4,param_1 + 0x28);
  iVar4 = iVar4 + iVar5;
  iVar5 = DataProcessor(iVar4 + param_2,param_3 - iVar4,&system_temp_buffer);
  iVar4 = iVar4 + iVar5;
  iVar5 = BufferManager_ProcessDataEx(iVar4 + param_2,param_3 - iVar4,uVar1);
  iVar4 = iVar4 + iVar5;
  iVar5 = DataProcessor(iVar4 + param_2,param_3 - iVar4,&system_temp_buffer);
  iVar4 = iVar4 + iVar5;
  iVar5 = SystemCore_Cleanup(iVar4 + param_2,param_3 - iVar4,uVar2);
  return iVar5 + iVar4;
}
int function_843690(int64_t param_1,int64_t param_2,int param_3)
{
  int8_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  uVar1 = *(int8_t *)(param_1 + 0x1c);
  uVar2 = *(int32_t *)(param_1 + 0x10);
  iVar3 = DataProcessor(param_2,param_3,&processed_var_9104_ptr);
  iVar4 = DataProcessor(param_2 + iVar3,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_ProcessData(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,param_1 + 0x28);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,param_1 + 0xa8);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemCore_Cleanup(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}
int function_8437b0(int64_t param_1,int64_t param_2,int param_3)
{
  int8_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  uVar1 = *(int8_t *)(param_1 + 0x18);
  uVar2 = *(int32_t *)(param_1 + 0x10);
  iVar3 = DataProcessor(param_2,param_3,&processed_var_7464_ptr);
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_ProcessData(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemCore_Cleanup(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}
// 函数: void function_843870(int64_t param_1,uint64_t param_2,int32_t param_3)
void function_843870(int64_t param_1,uint64_t param_2,int32_t param_3)
{
  function_83fa50(param_2,param_3,&processed_var_6792_ptr,*(int32_t *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x18));
  return;
}
int function_8438a0(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  int iVar5;
  uVar2 = *(int32_t *)(param_1 + 0x18);
  uVar3 = *(int32_t *)(param_1 + 0x10);
  uVar1 = *(int32_t *)(param_1 + 0x1c);
  iVar4 = DataProcessor(param_2,param_3,&processed_var_7192_ptr);
  iVar5 = DataProcessor(iVar4 + param_2,param_3 - iVar4,&system_temp_buffer);
  iVar4 = iVar4 + iVar5;
  iVar5 = BufferManager_ProcessData(iVar4 + param_2,param_3 - iVar4,uVar3);
  iVar4 = iVar4 + iVar5;
  iVar5 = DataProcessor(iVar4 + param_2,param_3 - iVar4,&system_temp_buffer);
  iVar4 = iVar4 + iVar5;
  iVar5 = BufferManager_Initialize(iVar4 + param_2,param_3 - iVar4,uVar2);
  iVar4 = iVar4 + iVar5;
  iVar5 = DataProcessor(iVar4 + param_2,param_3 - iVar4,&system_temp_buffer);
  iVar4 = iVar4 + iVar5;
  iVar5 = BufferManager_ProcessDataEx(iVar4 + param_2,param_3 - iVar4,uVar1);
  return iVar5 + iVar4;
}
int function_843990(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  int iVar5;
  uVar2 = *(int32_t *)(param_1 + 0x18);
  uVar3 = *(int32_t *)(param_1 + 0x10);
  uVar1 = *(int32_t *)(param_1 + 0x1c);
  iVar4 = DataProcessor(param_2,param_3,&processed_var_7328_ptr);
  iVar5 = DataProcessor(iVar4 + param_2,param_3 - iVar4,&system_temp_buffer);
  iVar4 = iVar4 + iVar5;
  iVar5 = BufferManager_ProcessData(iVar4 + param_2,param_3 - iVar4,uVar3);
  iVar4 = iVar4 + iVar5;
  iVar5 = DataProcessor(iVar4 + param_2,param_3 - iVar4,&system_temp_buffer);
  iVar4 = iVar4 + iVar5;
  iVar5 = BufferManager_Initialize(iVar4 + param_2,param_3 - iVar4,uVar2);
  iVar4 = iVar4 + iVar5;
  iVar5 = DataProcessor(iVar4 + param_2,param_3 - iVar4,&system_temp_buffer);
  iVar4 = iVar4 + iVar5;
  iVar5 = BufferManager_ProcessDataEx(iVar4 + param_2,param_3 - iVar4,uVar1);
  return iVar5 + iVar4;
}
int function_843a80(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  uVar1 = *(int32_t *)(param_1 + 0x18);
  uVar2 = *(int32_t *)(param_1 + 0x10);
  iVar3 = DataProcessor(param_2,param_3,&processed_var_7856_ptr);
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_ProcessData(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_Initialize(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}
// 函数: void function_843b40(int64_t param_1,uint64_t param_2,int32_t param_3)
void function_843b40(int64_t param_1,uint64_t param_2,int32_t param_3)
{
  function_83fa50(param_2,param_3,&processed_var_6656_ptr,*(int32_t *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x18));
  return;
}
int function_843b70(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  uVar1 = *(int32_t *)(param_1 + 0x10);
  iVar2 = DataProcessor(param_2,param_3,&processed_var_7600_ptr);
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = BufferManager_ProcessData(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_843be0(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  uVar1 = *(int32_t *)(param_1 + 0x18);
  uVar2 = *(int32_t *)(param_1 + 0x10);
  iVar3 = DataProcessor(param_2,param_3,&processed_var_7728_ptr);
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_ProcessData(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_Initialize(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}
int function_843ce0(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_18 = *(int32_t *)(param_1 + 0x10);
  local_var_14 = *(int32_t *)(param_1 + 0x14);
  local_var_10 = *(int32_t *)(param_1 + 0x18);
  local_var_c = *(int32_t *)(param_1 + 0x1c);
  uVar1 = *(int32_t *)(param_1 + 0x20);
  iVar2 = DataProcessor(param_2,param_3,&processed_var_784_ptr);
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = RenderingSystem_ShaderCompiler(iVar2 + param_2,param_3 - iVar2,&local_var_18);
  iVar2 = iVar2 + iVar3;
  iVar3 = DataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = BufferManager_ProcessData(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_843d90(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_18 = *(int32_t *)(param_1 + 0x10);
  local_var_14 = *(int32_t *)(param_1 + 0x14);
  local_var_10 = *(int32_t *)(param_1 + 0x18);
  local_var_c = *(int32_t *)(param_1 + 0x1c);
  uVar1 = *(int32_t *)(param_1 + 0x20);
  iVar2 = DataProcessor(param_2,param_3,&rendering_buffer_288_ptr);
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = RenderingSystem_ShaderCompiler(iVar2 + param_2,param_3 - iVar2,&local_var_18);
  iVar2 = iVar2 + iVar3;
  iVar3 = DataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = BufferManager_ProcessData(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_843e40(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  uVar1 = *(int32_t *)(param_1 + 0x10);
  iVar2 = DataProcessor(param_2,param_3,&rendering_buffer_2776_ptr);
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = BufferManager_Initialize(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
// 函数: void function_843eb0(int64_t param_1,uint64_t param_2,int32_t param_3)
void function_843eb0(int64_t param_1,uint64_t param_2,int32_t param_3)
{
  function_83f7b0(param_2,param_3,&rendering_buffer_2904_ptr,*(int32_t *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x14));
  return;
}
int function_843ee0(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  uVar1 = *(int32_t *)(param_1 + 0x14);
  uVar2 = *(int32_t *)(param_1 + 0x10);
  iVar3 = DataProcessor(param_2,param_3,&memory_allocator_3320_ptr);
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_Initialize(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_ProcessData(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}
int function_843fa0(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_18 = *(int32_t *)(param_1 + 0x10);
  local_var_14 = *(int32_t *)(param_1 + 0x14);
  local_var_10 = *(int32_t *)(param_1 + 0x18);
  local_var_c = *(int32_t *)(param_1 + 0x1c);
  uVar1 = *(int32_t *)(param_1 + 0x20);
  iVar2 = DataProcessor(param_2,param_3,&processed_var_544_ptr);
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = RenderingSystem_ShaderCompiler(iVar2 + param_2,param_3 - iVar2,&local_var_18);
  iVar2 = iVar2 + iVar3;
  iVar3 = DataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = BufferManager_ProcessData(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_844050(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_18 = *(int32_t *)(param_1 + 0x10);
  local_var_14 = *(int32_t *)(param_1 + 0x14);
  local_var_10 = *(int32_t *)(param_1 + 0x18);
  local_var_c = *(int32_t *)(param_1 + 0x1c);
  uVar1 = *(int32_t *)(param_1 + 0x20);
  iVar2 = DataProcessor(param_2,param_3,&memory_allocator_32_ptr);
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = RenderingSystem_ShaderCompiler(iVar2 + param_2,param_3 - iVar2,&local_var_18);
  iVar2 = iVar2 + iVar3;
  iVar3 = DataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = BufferManager_ProcessData(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_844100(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_18 = *(int32_t *)(param_1 + 0x10);
  local_var_14 = *(int32_t *)(param_1 + 0x14);
  local_var_10 = *(int32_t *)(param_1 + 0x18);
  local_var_c = *(int32_t *)(param_1 + 0x1c);
  uVar1 = *(int32_t *)(param_1 + 0x20);
  iVar2 = DataProcessor(param_2,param_3,&processed_var_416_ptr);
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = RenderingSystem_ShaderCompiler(iVar2 + param_2,param_3 - iVar2,&local_var_18);
  iVar2 = iVar2 + iVar3;
  iVar3 = DataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = BufferManager_ProcessData(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_8441b0(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_18 = *(int32_t *)(param_1 + 0x10);
  local_var_14 = *(int32_t *)(param_1 + 0x14);
  local_var_10 = *(int32_t *)(param_1 + 0x18);
  local_var_c = *(int32_t *)(param_1 + 0x1c);
  uVar1 = *(int32_t *)(param_1 + 0x20);
  iVar2 = DataProcessor(param_2,param_3,&processed_var_9904_ptr);
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = RenderingSystem_ShaderCompiler(iVar2 + param_2,param_3 - iVar2,&local_var_18);
  iVar2 = iVar2 + iVar3;
  iVar3 = DataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = BufferManager_ProcessData(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_844260(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  uVar1 = *(int32_t *)(param_1 + 0x10);
  iVar2 = DataProcessor(param_2,param_3,&memory_allocator_3032_ptr);
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = BufferManager_Initialize(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}