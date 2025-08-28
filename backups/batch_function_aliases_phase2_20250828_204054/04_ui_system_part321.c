#include "TaleWorlds.Native.Split.h"
// 04_ui_system_part321.c - 10 个函数
// 函数: void function_840dd0(int64_t param_1,uint64_t param_2,int32_t param_3)
void function_840dd0(int64_t param_1,uint64_t param_2,int32_t param_3)
{
  function_83faf0(param_2,param_3,*(int32_t *)(param_1 + 0x10),*(int32_t *)(param_1 + 0x18),
                *(int32_t *)(param_1 + 0x1c));
  return;
}
int function_840e00(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_18 = *(int32_t *)(param_1 + 0x1c);
  local_var_14 = *(int32_t *)(param_1 + 0x20);
  local_var_10 = *(int32_t *)(param_1 + 0x24);
  local_var_c = *(int32_t *)(param_1 + 0x28);
  uVar1 = *(int32_t *)(param_1 + 0x2c);
  uVar2 = *(int32_t *)(param_1 + 0x18);
  iVar3 = BufferManager_ProcessData(param_2,param_3,*(int32_t *)(param_1 + 0x10));
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_Initialize(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = RenderingSystem_ShaderCompiler(iVar3 + param_2,param_3 - iVar3,&local_var_18);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_ProcessData(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}
int function_840f10(int64_t param_1,int64_t param_2,int param_3)
{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  uVar1 = *(uint64_t *)(param_1 + 0x18);
  iVar2 = BufferManager_ProcessData(param_2,param_3,*(int32_t *)(param_1 + 0x10));
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074bda0(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_840f80(int64_t param_1,int64_t param_2,int param_3)
{
  int8_t uVar1;
  int iVar2;
  int iVar3;
  uVar1 = *(int8_t *)(param_1 + 0x18);
  iVar2 = BufferManager_ProcessData(param_2,param_3,*(int32_t *)(param_1 + 0x10));
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = SystemCore_Cleanup(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_840ff0(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  uVar1 = *(int32_t *)(param_1 + 0x18);
  iVar2 = BufferManager_ProcessData(param_2,param_3,*(int32_t *)(param_1 + 0x10));
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = BufferManager_ProcessDataEx(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_841060(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  uVar1 = *(int32_t *)(param_1 + 0x18);
  iVar2 = BufferManager_ProcessData(param_2,param_3,*(int32_t *)(param_1 + 0x10));
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = BufferManager_ProcessData(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_8410d0(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  uVar1 = *(int32_t *)(param_1 + 0x1c);
  uVar2 = *(int32_t *)(param_1 + 0x18);
  iVar3 = BufferManager_ProcessData(param_2,param_3,*(int32_t *)(param_1 + 0x10));
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_Initialize(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_Initialize(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}
int function_841180(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  uVar1 = *(int32_t *)(param_1 + 0x1c);
  uVar2 = *(int32_t *)(param_1 + 0x18);
  iVar3 = BufferManager_ProcessData(param_2,param_3,*(int32_t *)(param_1 + 0x10));
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_Initialize(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_ProcessData(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}
int function_841230(int64_t param_1,int64_t param_2,int param_3)
{
  int iVar1;
  int iVar2;
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
  local_var_28 = *(int32_t *)(param_1 + 0x28);
  local_var_24 = *(int32_t *)(param_1 + 0x2c);
  local_var_20 = *(int32_t *)(param_1 + 0x30);
  local_var_1c = *(int32_t *)(param_1 + 0x34);
  local_var_18 = *(int32_t *)(param_1 + 0x38);
  local_var_14 = *(int32_t *)(param_1 + 0x3c);
  local_var_10 = *(int32_t *)(param_1 + 0x40);
  local_var_c = *(int32_t *)(param_1 + 0x44);
  iVar1 = BufferManager_ProcessData(param_2,param_3,*(int32_t *)(param_1 + 0x10));
  iVar2 = DataProcessor(param_2 + iVar1,param_3 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = function_88ebb0(iVar1 + param_2,param_3 - iVar1,&local_var_38);
  return iVar2 + iVar1;
}
int function_8412b0(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  uVar1 = *(int32_t *)(param_1 + 0x18);
  iVar2 = BufferManager_ProcessData(param_2,param_3,*(int32_t *)(param_1 + 0x10));
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = BufferManager_ProcessData(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_841320(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int8_t uVar2;
  int iVar3;
  int iVar4;
  uint64_t stack_special_x_8;
  stack_special_x_8 = *(uint64_t *)(param_1 + 0x18);
  uVar2 = *(int8_t *)(param_1 + 0x24);
  uVar1 = *(int32_t *)(param_1 + 0x20);
  iVar3 = BufferManager_ProcessData(param_2,param_3,*(int32_t *)(param_1 + 0x10));
  iVar4 = DataProcessor(param_2 + iVar3,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = function_88ece0(iVar3 + param_2,param_3 - iVar3,&stack_special_x_8);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_ProcessDataEx(iVar3 + param_2,param_3 - iVar3,uVar1);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemCore_Cleanup(iVar3 + param_2,param_3 - iVar3,uVar2);
  return iVar4 + iVar3;
}
int function_841410(int64_t param_1,int64_t param_2,int param_3)
{
  int8_t uVar1;
  int iVar2;
  int iVar3;
  uint64_t stack_special_x_8;
  stack_special_x_8 = *(uint64_t *)(param_1 + 0x18);
  uVar1 = *(int8_t *)(param_1 + 0x24);
  iVar2 = BufferManager_ProcessData(param_2,param_3,*(int32_t *)(param_1 + 0x10));
  iVar3 = DataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = function_88ece0(iVar2 + param_2,param_3 - iVar2,&stack_special_x_8);
  iVar2 = iVar2 + iVar3;
  iVar3 = DataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = DataProcessor(iVar2 + param_2,param_3 - iVar2,param_1 + 0x25);
  iVar2 = iVar2 + iVar3;
  iVar3 = DataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = SystemCore_Cleanup(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_8414f0(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int8_t uVar2;
  int iVar3;
  int iVar4;
  uVar2 = *(int8_t *)(param_1 + 0x1c);
  uVar1 = *(int32_t *)(param_1 + 0x18);
  iVar3 = BufferManager_ProcessData(param_2,param_3,*(int32_t *)(param_1 + 0x10));
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,param_1 + 0x28);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_ProcessDataEx(iVar3 + param_2,param_3 - iVar3,uVar1);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemCore_Cleanup(iVar3 + param_2,param_3 - iVar3,uVar2);
  return iVar4 + iVar3;
}
int function_8415e0(int64_t param_1,int64_t param_2,int param_3)
{
  int8_t uVar1;
  int iVar2;
  int iVar3;
  uVar1 = *(int8_t *)(param_1 + 0x1c);
  iVar2 = BufferManager_ProcessData(param_2,param_3,*(int32_t *)(param_1 + 0x10));
  iVar3 = DataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = DataProcessor(iVar2 + param_2,param_3 - iVar2,param_1 + 0x28);
  iVar2 = iVar2 + iVar3;
  iVar3 = DataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = DataProcessor(iVar2 + param_2,param_3 - iVar2,param_1 + 0xa8);
  iVar2 = iVar2 + iVar3;
  iVar3 = DataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = SystemCore_Cleanup(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_8416d0(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  uVar2 = *(int32_t *)(param_1 + 0x18);
  uVar1 = *(int32_t *)(param_1 + 0x1c);
  iVar3 = BufferManager_ProcessData(param_2,param_3,*(int32_t *)(param_1 + 0x10));
  iVar4 = DataProcessor(param_2 + iVar3,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_Initialize(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_ProcessDataEx(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}
int function_841790(int64_t param_1,int64_t param_2,int param_3)
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
  iVar2 = RenderingSystem_ShaderCompiler(param_2,param_3,&local_var_18);
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = BufferManager_ProcessData(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_841830(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  uVar1 = *(int32_t *)(param_1 + 0x14);
  iVar2 = BufferManager_Initialize(param_2,param_3,*(int32_t *)(param_1 + 0x10));
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = BufferManager_Initialize(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_8418a0(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  uVar1 = *(int32_t *)(param_1 + 0x14);
  iVar2 = BufferManager_Initialize(param_2,param_3,*(int32_t *)(param_1 + 0x10));
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = BufferManager_ProcessData(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_841910(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  uint64_t local_var_18;
  local_var_48 = *(uint64_t *)(param_1 + 0x10);
  local_var_40 = *(uint64_t *)(param_1 + 0x18);
  uVar1 = *(int32_t *)(param_1 + 0x4c);
  local_var_38 = *(uint64_t *)(param_1 + 0x20);
  local_var_30 = *(uint64_t *)(param_1 + 0x28);
  uVar2 = *(int32_t *)(param_1 + 0x48);
  local_var_28 = *(int32_t *)(param_1 + 0x30);
  local_var_24 = *(int32_t *)(param_1 + 0x34);
  local_var_20 = *(int32_t *)(param_1 + 0x38);
  local_var_1c = *(int32_t *)(param_1 + 0x3c);
  local_var_18 = *(uint64_t *)(param_1 + 0x40);
  iVar3 = func_0x00018088ecd0(param_2,param_3,&local_var_48);
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_ProcessData(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_ProcessData(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}
int function_8419e0(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  uVar1 = *(int32_t *)(param_1 + 0x10);
  uVar2 = *(int32_t *)(param_1 + 0x14);
  iVar3 = DataProcessor(param_2,param_3,param_1 + 0x18);
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_ProcessData(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_ProcessData(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}
int function_841a90(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int iVar5;
  int iVar6;
  uVar1 = *(int32_t *)(param_1 + 0x24);
  uVar2 = *(int32_t *)(param_1 + 0x20);
  uVar3 = *(int32_t *)(param_1 + 0x1c);
  uVar4 = *(int32_t *)(param_1 + 0x18);
  iVar5 = func_0x00018074bda0(param_2,param_3,*(uint64_t *)(param_1 + 0x10));
  iVar6 = DataProcessor(param_2 + iVar5,param_3 - iVar5,&system_temp_buffer);
  iVar5 = iVar5 + iVar6;
  iVar6 = BufferManager_Initialize(iVar5 + param_2,param_3 - iVar5,uVar4);
  iVar5 = iVar5 + iVar6;
  iVar6 = DataProcessor(iVar5 + param_2,param_3 - iVar5,&system_temp_buffer);
  iVar5 = iVar5 + iVar6;
  iVar6 = BufferManager_Initialize(iVar5 + param_2,param_3 - iVar5,uVar3);
  iVar5 = iVar5 + iVar6;
  iVar6 = DataProcessor(iVar5 + param_2,param_3 - iVar5,&system_temp_buffer);
  iVar5 = iVar5 + iVar6;
  iVar6 = BufferManager_ProcessData(iVar5 + param_2,param_3 - iVar5,uVar2);
  iVar5 = iVar5 + iVar6;
  iVar6 = DataProcessor(iVar5 + param_2,param_3 - iVar5,&system_temp_buffer);
  iVar5 = iVar5 + iVar6;
  iVar6 = BufferManager_ProcessData(iVar5 + param_2,param_3 - iVar5,uVar1);
  return iVar6 + iVar5;
}
int function_841bc0(int64_t param_1,int64_t param_2,int param_3)
{
  int8_t uVar1;
  int iVar2;
  int iVar3;
  uint64_t local_var_48;
  int32_t local_var_40;
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
  local_var_48 = *(uint64_t *)(param_1 + 0x44);
  local_var_28 = *(int32_t *)(param_1 + 0x24);
  local_var_24 = *(int32_t *)(param_1 + 0x28);
  local_var_20 = *(int32_t *)(param_1 + 0x2c);
  local_var_1c = *(int32_t *)(param_1 + 0x30);
  local_var_40 = *(int32_t *)(param_1 + 0x4c);
  uVar1 = *(int8_t *)(param_1 + 0x50);
  local_var_38 = *(uint64_t *)(param_1 + 0x14);
  local_var_30 = *(uint64_t *)(param_1 + 0x1c);
  local_var_18 = *(int32_t *)(param_1 + 0x34);
  local_var_14 = *(int32_t *)(param_1 + 0x38);
  local_var_10 = *(int32_t *)(param_1 + 0x3c);
  local_var_c = *(int32_t *)(param_1 + 0x40);
  iVar2 = BufferManager_Initialize(param_2,param_3,*(int32_t *)(param_1 + 0x10));
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = function_88ebb0(iVar2 + param_2,param_3 - iVar2,&local_var_38);
  iVar2 = iVar2 + iVar3;
  iVar3 = DataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = function_74b6f0(iVar2 + param_2,param_3 - iVar2,&local_var_48);
  iVar2 = iVar2 + iVar3;
  iVar3 = DataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = SystemCore_Cleanup(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_841cc0(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  uVar1 = *(int32_t *)(param_1 + 0x14);
  iVar2 = BufferManager_Initialize(param_2,param_3,*(int32_t *)(param_1 + 0x10));
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = BufferManager_ProcessDataEx(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_841d30(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int8_t uVar2;
  int iVar3;
  int iVar4;
  uint64_t stack_special_x_8;
  stack_special_x_8 = *(uint64_t *)(param_1 + 0x10);
  uVar2 = *(int8_t *)(param_1 + 0x1c);
  uVar1 = *(int32_t *)(param_1 + 0x18);
  iVar3 = function_88ece0(param_2,param_3,&stack_special_x_8);
  iVar4 = DataProcessor(param_2 + iVar3,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_ProcessDataEx(iVar3 + param_2,param_3 - iVar3,uVar1);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemCore_Cleanup(iVar3 + param_2,param_3 - iVar3,uVar2);
  return iVar4 + iVar3;
}
int function_841df0(int64_t param_1,int64_t param_2,int param_3)
{
  int8_t uVar1;
  int iVar2;
  int iVar3;
  uint64_t stack_special_x_8;
  stack_special_x_8 = *(uint64_t *)(param_1 + 0x10);
  uVar1 = *(int8_t *)(param_1 + 0x1c);
  iVar2 = function_88ece0(param_2,param_3,&stack_special_x_8);
  iVar3 = DataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = DataProcessor(iVar2 + param_2,param_3 - iVar2,param_1 + 0x1d);
  iVar2 = iVar2 + iVar3;
  iVar3 = DataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = SystemCore_Cleanup(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_841ea0(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int8_t uVar2;
  int iVar3;
  int iVar4;
  uVar2 = *(int8_t *)(param_1 + 0x14);
  uVar1 = *(int32_t *)(param_1 + 0x10);
  iVar3 = DataProcessor(param_2,param_3,param_1 + 0x20);
  iVar4 = DataProcessor(param_2 + iVar3,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_ProcessDataEx(iVar3 + param_2,param_3 - iVar3,uVar1);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemCore_Cleanup(iVar3 + param_2,param_3 - iVar3,uVar2);
  return iVar4 + iVar3;
}
int function_841f50(int64_t param_1,int64_t param_2,int param_3)
{
  int8_t uVar1;
  int iVar2;
  int iVar3;
  uVar1 = *(int8_t *)(param_1 + 0x14);
  iVar2 = DataProcessor(param_2,param_3,param_1 + 0x20);
  iVar3 = DataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = DataProcessor(iVar2 + param_2,param_3 - iVar2,param_1 + 0xa0);
  iVar2 = iVar2 + iVar3;
  iVar3 = DataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = SystemCore_Cleanup(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
// 函数: void function_842030(int64_t param_1,uint64_t param_2,int32_t param_3)
void function_842030(int64_t param_1,uint64_t param_2,int32_t param_3)
{
  function_83f850(param_2,param_3,&processed_var_4736_ptr,*(int32_t *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x18));
  return;
}
// 函数: void function_842060(int64_t param_1,uint64_t param_2,int32_t param_3)
void function_842060(int64_t param_1,uint64_t param_2,int32_t param_3)
{
  function_83f8f0(param_2,param_3,&processed_var_4864_ptr,*(int32_t *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x18),*(int32_t *)(param_1 + 0x1c));
  return;
}
int function_8420a0(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  int iVar5;
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  local_var_28 = *(int32_t *)(param_1 + 0x1c);
  local_var_24 = *(int32_t *)(param_1 + 0x20);
  local_var_20 = *(int32_t *)(param_1 + 0x24);
  local_var_1c = *(int32_t *)(param_1 + 0x28);
  uVar1 = *(int32_t *)(param_1 + 0x2c);
  uVar2 = *(int32_t *)(param_1 + 0x18);
  uVar3 = *(int32_t *)(param_1 + 0x10);
  iVar4 = DataProcessor(param_2,param_3,&processed_var_4992_ptr);
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
  iVar5 = RenderingSystem_ShaderCompiler(iVar4 + param_2,param_3 - iVar4,&local_var_28);
  iVar4 = iVar4 + iVar5;
  iVar5 = DataProcessor(iVar4 + param_2,param_3 - iVar4,&system_temp_buffer);
  iVar4 = iVar4 + iVar5;
  iVar5 = BufferManager_ProcessData(iVar4 + param_2,param_3 - iVar4,uVar1);
  return iVar5 + iVar4;
}
// 函数: void function_8421c0(int64_t param_1,uint64_t param_2,int32_t param_3)
void function_8421c0(int64_t param_1,uint64_t param_2,int32_t param_3)
{
  function_83f850(param_2,param_3,&processed_var_4352_ptr,*(int32_t *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x18));
  return;
}
// 函数: void function_8421f0(int64_t param_1,uint64_t param_2,int32_t param_3)
void function_8421f0(int64_t param_1,uint64_t param_2,int32_t param_3)
{
  function_83f8f0(param_2,param_3,&processed_var_4480_ptr,*(int32_t *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x18),*(int32_t *)(param_1 + 0x1c));
  return;
}
int function_842230(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  int iVar5;
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  local_var_28 = *(int32_t *)(param_1 + 0x1c);
  local_var_24 = *(int32_t *)(param_1 + 0x20);
  local_var_20 = *(int32_t *)(param_1 + 0x24);
  local_var_1c = *(int32_t *)(param_1 + 0x28);
  uVar1 = *(int32_t *)(param_1 + 0x2c);
  uVar2 = *(int32_t *)(param_1 + 0x18);
  uVar3 = *(int32_t *)(param_1 + 0x10);
  iVar4 = DataProcessor(param_2,param_3,&processed_var_4608_ptr);
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
  iVar5 = RenderingSystem_ShaderCompiler(iVar4 + param_2,param_3 - iVar4,&local_var_28);
  iVar4 = iVar4 + iVar5;
  iVar5 = DataProcessor(iVar4 + param_2,param_3 - iVar4,&system_temp_buffer);
  iVar4 = iVar4 + iVar5;
  iVar5 = BufferManager_ProcessData(iVar4 + param_2,param_3 - iVar4,uVar1);
  return iVar5 + iVar4;
}
// 函数: void function_842350(int64_t param_1,uint64_t param_2,int32_t param_3)
void function_842350(int64_t param_1,uint64_t param_2,int32_t param_3)
{
  function_83f850(param_2,param_3,&memory_allocator_3712_ptr,*(int32_t *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x18));
  return;
}
// 函数: void function_842380(int64_t param_1,uint64_t param_2,int32_t param_3)
void function_842380(int64_t param_1,uint64_t param_2,int32_t param_3)
{
  function_83f850(param_2,param_3,&memory_allocator_3840_ptr,*(int32_t *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x18));
  return;
}
// 函数: void function_8423b0(int64_t param_1,uint64_t param_2,int32_t param_3)
void function_8423b0(int64_t param_1,uint64_t param_2,int32_t param_3)
{
  function_83f850(param_2,param_3,&processed_var_5120_ptr,*(int32_t *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x18));
  return;
}
// 函数: void function_8423e0(int64_t param_1,uint64_t param_2,int32_t param_3)
void function_8423e0(int64_t param_1,uint64_t param_2,int32_t param_3)
{
  function_83f8f0(param_2,param_3,&processed_var_5248_ptr,*(int32_t *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x18),*(int32_t *)(param_1 + 0x1c));
  return;
}
int function_842420(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  int iVar5;
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  local_var_28 = *(int32_t *)(param_1 + 0x1c);
  local_var_24 = *(int32_t *)(param_1 + 0x20);
  local_var_20 = *(int32_t *)(param_1 + 0x24);
  local_var_1c = *(int32_t *)(param_1 + 0x28);
  uVar1 = *(int32_t *)(param_1 + 0x2c);
  uVar2 = *(int32_t *)(param_1 + 0x18);
  uVar3 = *(int32_t *)(param_1 + 0x10);
  iVar4 = DataProcessor(param_2,param_3,&processed_var_5376_ptr);
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
  iVar5 = RenderingSystem_ShaderCompiler(iVar4 + param_2,param_3 - iVar4,&local_var_28);
  iVar4 = iVar4 + iVar5;
  iVar5 = DataProcessor(iVar4 + param_2,param_3 - iVar4,&system_temp_buffer);
  iVar4 = iVar4 + iVar5;
  iVar5 = BufferManager_ProcessData(iVar4 + param_2,param_3 - iVar4,uVar1);
  return iVar5 + iVar4;
}
int function_842540(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  uVar1 = *(int32_t *)(param_1 + 0x10);
  iVar2 = DataProcessor(param_2,param_3,&memory_allocator_3976_ptr);
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = BufferManager_ProcessData(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_8425b0(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  uVar1 = *(int32_t *)(param_1 + 0x10);
  iVar2 = DataProcessor(param_2,param_3,&processed_var_4232_ptr);
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = BufferManager_ProcessData(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_842620(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  uVar1 = *(int32_t *)(param_1 + 0x10);
  iVar2 = DataProcessor(param_2,param_3,&processed_var_4104_ptr);
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = BufferManager_ProcessData(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_842690(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  uint64_t uVar2;
  int iVar3;
  int iVar4;
  uVar2 = *(uint64_t *)(param_1 + 0x18);
  uVar1 = *(int32_t *)(param_1 + 0x10);
  iVar3 = DataProcessor(param_2,param_3,&processed_var_9512_ptr);
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = BufferManager_ProcessData(iVar3 + param_2,param_3 - iVar3,uVar1);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074bda0(iVar3 + param_2,param_3 - iVar3,uVar2);
  return iVar4 + iVar3;
}
int function_842750(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  uVar1 = *(int32_t *)(param_1 + 0x10);
  iVar2 = DataProcessor(param_2,param_3,&processed_var_9256_ptr);
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = BufferManager_ProcessData(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
// 函数: void function_8427c0(int64_t param_1,uint64_t param_2,int32_t param_3)
void function_8427c0(int64_t param_1,uint64_t param_2,int32_t param_3)
{
  function_83f9b0(param_2,param_3,&processed_var_9880_ptr,*(int32_t *)(param_1 + 0x10),
                *(int8_t *)(param_1 + 0x18));
  return;
}