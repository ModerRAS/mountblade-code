#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part323.c - 16 个函数
// 函数: void function_8442d0(int64_t param_1,uint64_t param_2,int32_t param_3)
void function_8442d0(int64_t param_1,uint64_t param_2,int32_t param_3)
{
  function_83f7b0(param_2,param_3,&memory_allocator_3176_ptr,*(int32_t *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x14));
  return;
}
int function_844300(int64_t param_1,int64_t param_2,int param_3)
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
  iVar2 = SystemDataProcessor(param_2,param_3,&processed_var_664_ptr);
  iVar3 = SystemDataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = RenderingSystem_ShaderCompiler(iVar2 + param_2,param_3 - iVar2,&local_var_18);
  iVar2 = iVar2 + iVar3;
  iVar3 = SystemDataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = Function_5cdd918c(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_8443b0(int64_t param_1,int64_t param_2,int param_3)
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
  iVar2 = SystemDataProcessor(param_2,param_3,&ui_system_data_160_ptr);
  iVar3 = SystemDataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = RenderingSystem_ShaderCompiler(iVar2 + param_2,param_3 - iVar2,&local_var_18);
  iVar2 = iVar2 + iVar3;
  iVar3 = SystemDataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = Function_5cdd918c(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_844460(int64_t param_1,int64_t param_2,int param_3)
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
  iVar3 = SystemDataProcessor(param_2,param_3,&rendering_buffer_2256_ptr);
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = Function_6ed31084(iVar3 + param_2,param_3 - iVar3,&local_var_48);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = Function_5cdd918c(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = Function_5cdd918c(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}
int function_844570(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  uVar1 = *(int32_t *)(param_1 + 0x10);
  uVar2 = *(int32_t *)(param_1 + 0x14);
  iVar3 = SystemDataProcessor(param_2,param_3,&rendering_buffer_2000_ptr);
  iVar4 = SystemDataProcessor(param_2 + iVar3,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,param_1 + 0x18);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = Function_5cdd918c(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = Function_5cdd918c(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}
int function_844650(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int iVar6;
  int iVar7;
  uVar1 = *(int32_t *)(param_1 + 0x24);
  uVar2 = *(int32_t *)(param_1 + 0x20);
  uVar3 = *(int32_t *)(param_1 + 0x1c);
  uVar4 = *(int32_t *)(param_1 + 0x18);
  uVar5 = *(uint64_t *)(param_1 + 0x10);
  iVar6 = SystemDataProcessor(param_2,param_3,&rendering_buffer_2128_ptr);
  iVar7 = SystemDataProcessor(param_2 + iVar6,param_3 - iVar6,&system_temp_buffer);
  iVar6 = iVar6 + iVar7;
  iVar7 = BufferManager_ResizeBuffer(iVar6 + param_2,param_3 - iVar6,uVar5);
  iVar6 = iVar6 + iVar7;
  iVar7 = SystemDataProcessor(iVar6 + param_2,param_3 - iVar6,&system_temp_buffer);
  iVar6 = iVar6 + iVar7;
  iVar7 = Function_fe6d9439(iVar6 + param_2,param_3 - iVar6,uVar4);
  iVar6 = iVar6 + iVar7;
  iVar7 = SystemDataProcessor(iVar6 + param_2,param_3 - iVar6,&system_temp_buffer);
  iVar6 = iVar6 + iVar7;
  iVar7 = Function_fe6d9439(iVar6 + param_2,param_3 - iVar6,uVar3);
  iVar6 = iVar6 + iVar7;
  iVar7 = SystemDataProcessor(iVar6 + param_2,param_3 - iVar6,&system_temp_buffer);
  iVar6 = iVar6 + iVar7;
  iVar7 = Function_5cdd918c(iVar6 + param_2,param_3 - iVar6,uVar2);
  iVar6 = iVar6 + iVar7;
  iVar7 = SystemDataProcessor(iVar6 + param_2,param_3 - iVar6,&system_temp_buffer);
  iVar6 = iVar6 + iVar7;
  iVar7 = Function_5cdd918c(iVar6 + param_2,param_3 - iVar6,uVar1);
  return iVar7 + iVar6;
}
int function_8447d0(int64_t param_1,int64_t param_2,int param_3)
{
  int8_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
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
  uVar2 = *(int32_t *)(param_1 + 0x10);
  local_var_38 = *(uint64_t *)(param_1 + 0x14);
  local_var_30 = *(uint64_t *)(param_1 + 0x1c);
  local_var_18 = *(int32_t *)(param_1 + 0x34);
  local_var_14 = *(int32_t *)(param_1 + 0x38);
  local_var_10 = *(int32_t *)(param_1 + 0x3c);
  local_var_c = *(int32_t *)(param_1 + 0x40);
  iVar3 = SystemDataProcessor(param_2,param_3,&ui_system_data_1728_ptr);
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = Function_fe6d9439(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = function_88ebb0(iVar3 + param_2,param_3 - iVar3,&local_var_38);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = function_74b6f0(iVar3 + param_2,param_3 - iVar3,&local_var_48);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemCore_Cleanup(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}
int function_844910(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  uVar2 = *(int32_t *)(param_1 + 0x10);
  uVar1 = *(int32_t *)(param_1 + 0x14);
  iVar3 = SystemDataProcessor(param_2,param_3,&ui_system_data_1864_ptr);
  iVar4 = SystemDataProcessor(param_2 + iVar3,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = Function_fe6d9439(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = Function_a18f1749(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}
int function_8449c0(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  uVar1 = *(int32_t *)(param_1 + 0x10);
  iVar2 = SystemDataProcessor(param_2,param_3,&ui_system_data_1600_ptr);
  iVar3 = SystemDataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = Function_fe6d9439(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_844a30(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int8_t uVar2;
  int iVar3;
  int iVar4;
  uint64_t stack_special_x_8;
  stack_special_x_8 = *(uint64_t *)(param_1 + 0x10);
  uVar2 = *(int8_t *)(param_1 + 0x1c);
  uVar1 = *(int32_t *)(param_1 + 0x18);
  iVar3 = SystemDataProcessor(param_2,param_3,&processed_var_904_ptr);
  iVar4 = SystemDataProcessor(param_2 + iVar3,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = function_88ece0(iVar3 + param_2,param_3 - iVar3,&stack_special_x_8);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = Function_a18f1749(iVar3 + param_2,param_3 - iVar3,uVar1);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemCore_Cleanup(iVar3 + param_2,param_3 - iVar3,uVar2);
  return iVar4 + iVar3;
}
int function_844b20(int64_t param_1,int64_t param_2,int param_3)
{
  int8_t uVar1;
  int iVar2;
  int iVar3;
  uint64_t stack_special_x_8;
  stack_special_x_8 = *(uint64_t *)(param_1 + 0x10);
  uVar1 = *(int8_t *)(param_1 + 0x1c);
  iVar2 = SystemDataProcessor(param_2,param_3,&ui_system_data_1040_ptr);
  iVar3 = SystemDataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = function_88ece0(iVar2 + param_2,param_3 - iVar2,&stack_special_x_8);
  iVar2 = iVar2 + iVar3;
  iVar3 = SystemDataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = SystemDataProcessor(iVar2 + param_2,param_3 - iVar2,param_1 + 0x1d);
  iVar2 = iVar2 + iVar3;
  iVar3 = SystemDataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = SystemCore_Cleanup(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_844c00(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int8_t uVar2;
  int iVar3;
  int iVar4;
  uVar2 = *(int8_t *)(param_1 + 0x14);
  uVar1 = *(int32_t *)(param_1 + 0x10);
  iVar3 = SystemDataProcessor(param_2,param_3,&ui_system_data_1320_ptr);
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,param_1 + 0x20);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = Function_a18f1749(iVar3 + param_2,param_3 - iVar3,uVar1);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemCore_Cleanup(iVar3 + param_2,param_3 - iVar3,uVar2);
  return iVar4 + iVar3;
}
int function_844d00(int64_t param_1,int64_t param_2,int param_3)
{
  int8_t uVar1;
  int iVar2;
  int iVar3;
  uVar1 = *(int8_t *)(param_1 + 0x14);
  iVar2 = SystemDataProcessor(param_2,param_3,&ui_system_data_1456_ptr);
  iVar3 = SystemDataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = SystemDataProcessor(iVar2 + param_2,param_3 - iVar2,param_1 + 0x20);
  iVar2 = iVar2 + iVar3;
  iVar3 = SystemDataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = SystemDataProcessor(iVar2 + param_2,param_3 - iVar2,param_1 + 0xa0);
  iVar2 = iVar2 + iVar3;
  iVar3 = SystemDataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = SystemCore_Cleanup(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_844e10(int64_t param_1,int64_t param_2,int param_3)
{
  int iVar1;
  int iVar2;
  iVar1 = SystemDataProcessor(param_2,param_3,&rendering_buffer_2512_ptr);
  iVar2 = SystemDataProcessor(param_2 + iVar1,param_3 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(iVar1 + param_2,param_3 - iVar1,param_1 + 0x10);
  return iVar2 + iVar1;
}
int function_844e90(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  uVar2 = *(int32_t *)(param_1 + 0x10);
  uVar1 = *(int32_t *)(param_1 + 0x18);
  iVar3 = SystemDataProcessor(param_2,param_3,&ui_system_data_128_ptr);
  iVar4 = SystemDataProcessor(param_2 + iVar3,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = Function_5cdd918c(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = Function_a18f1749(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_844f40(uint64_t param_1,uint64_t *param_2)
void function_844f40(uint64_t param_1,uint64_t *param_2)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int iVar5;
  int8_t stack_array_178 [32];
  int8_t *plocal_var_158;
  uint64_t local_var_148;
  uint64_t local_var_140;
  int64_t lStack_138;
  int64_t lStack_130;
  int8_t stack_array_128 [256];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  if (param_2 == (uint64_t *)0x0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_178);
    }
    BufferManager_ResizeBuffer(stack_array_128,0x100,0);
    plocal_var_158 = stack_array_128;
// WARNING: Subroutine does not return
    DataTransformer(0x1f,0xd,param_1,&ui_system_data_1112_ptr);
  }
  local_var_148 = 0;
  local_var_140 = 0;
  lStack_138 = 0;
  iVar5 = SystemFunction_00018088c590(0,&local_var_140);
  if (((iVar5 == 0) && (iVar5 = SystemSecurityProcessor(&local_var_148,local_var_140), iVar5 == 0)) &&
     (iVar5 = SystemFunction_00018088c530(param_1 & 0xffffffff,&lStack_130), iVar5 == 0)) {
    lStack_138 = 0;
    if (lStack_130 != 0) {
      lStack_138 = lStack_130 + -8;
    }
  }
  else if (iVar5 != 0) {
// WARNING: Subroutine does not return
    AdvancedSystemProcessor(&local_var_148);
  }
  uVar4 = *(uint64_t *)(lStack_138 + 0x40);
  *param_2 = *(uint64_t *)(lStack_138 + 0x38);
  param_2[1] = uVar4;
  uVar1 = *(int32_t *)(lStack_138 + 0x4c);
  uVar2 = *(int32_t *)(lStack_138 + 0x50);
  uVar3 = *(int32_t *)(lStack_138 + 0x54);
  *(int32_t *)(param_2 + 2) = *(int32_t *)(lStack_138 + 0x48);
  *(int32_t *)((int64_t)param_2 + 0x14) = uVar1;
  *(int32_t *)(param_2 + 3) = uVar2;
  *(int32_t *)((int64_t)param_2 + 0x1c) = uVar3;
  uVar1 = *(int32_t *)(lStack_138 + 0x5c);
  uVar2 = *(int32_t *)(lStack_138 + 0x60);
  uVar3 = *(int32_t *)(lStack_138 + 100);
  *(int32_t *)(param_2 + 4) = *(int32_t *)(lStack_138 + 0x58);
  *(int32_t *)((int64_t)param_2 + 0x24) = uVar1;
  *(int32_t *)(param_2 + 5) = uVar2;
  *(int32_t *)((int64_t)param_2 + 0x2c) = uVar3;
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_var_148);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_845090(uint64_t param_1,int64_t param_2)
void function_845090(uint64_t param_1,int64_t param_2)
{
  int iVar1;
  int iVar2;
  int8_t stack_array_168 [32];
  int8_t *plocal_var_148;
  uint64_t local_var_138;
  int64_t lStack_130;
  int8_t stack_array_128 [256];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  if (param_2 == 0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
      BufferManager_ResizeBuffer(stack_array_128,0x100,0);
      plocal_var_148 = stack_array_128;
// WARNING: Subroutine does not return
      DataTransformer(0x1f,0xb,param_1,&processed_var_512_ptr);
    }
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_168);
  }
  local_var_138 = 0;
  iVar1 = SystemFunction_00018088c590(param_1,&lStack_130);
  if (iVar1 == 0) {
    if ((*(uint *)(lStack_130 + 0x24) >> 1 & 1) == 0) {
// WARNING: Subroutine does not return
      AdvancedSystemProcessor(&local_var_138);
    }
    iVar2 = SystemSecurityProcessor(&local_var_138);
    if (iVar2 != 0) goto LAB_18084510c;
  }
  iVar2 = iVar1;
LAB_18084510c:
  if (iVar2 != 0) {
// WARNING: Subroutine does not return
    AdvancedSystemProcessor(&local_var_138);
  }
  Function_4a0608a8(lStack_130,param_2);
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_var_138);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_8451c0(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void function_8451c0(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t stack_array_168 [32];
  int8_t *plocal_var_148;
  int8_t stack_array_138 [256];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  iVar1 = function_83fc50();
  if ((iVar1 != 0) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    iVar2 = SystemDataProcessor(stack_array_138,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    BufferManager_ResizeBuffer(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_148 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,0xb,param_1,&processed_var_544_ptr);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_168);
}
// 函数: void function_845204(void)
void function_845204(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  iVar1 = SystemDataProcessor(&local_buffer_00000030,0x100);
  iVar2 = SystemDataProcessor(&local_buffer_00000030 + iVar1,0x100 - iVar1,&system_temp_buffer);
  BufferManager_ResizeBuffer(&local_buffer_00000030 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,0xb);
}
// 函数: void function_84527c(void)
void function_84527c(void)
{
  uint64_t local_var_130;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_130 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_8452a0(uint64_t param_1,int32_t *param_2,uint64_t param_3)
void function_8452a0(uint64_t param_1,int32_t *param_2,uint64_t param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t stack_array_178 [32];
  int8_t *plocal_var_158;
  int64_t alStack_148 [2];
  int8_t stack_array_138 [256];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  iVar1 = SystemFunction_00018088c590(param_1,alStack_148);
  if ((iVar1 == 0) && ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0)) {
    iVar1 = 0x4b;
  }
  else if ((iVar1 == 0) && (iVar1 = function_879a60(alStack_148[0],param_2,param_3), iVar1 == 0))
  goto LAB_1808453a2;
  if (param_2 != (int32_t *)0x0) {
    *param_2 = 0;
  }
  if ((iVar1 != 0) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    iVar2 = BufferManager_ResizeBuffer(stack_array_138,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    BufferManager_ResizeBuffer(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_158 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,0xb,param_1,&processed_var_5520_ptr);
  }
LAB_1808453a2:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// 函数: void function_845324(void)
void function_845324(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  iVar1 = BufferManager_ResizeBuffer(&local_buffer_00000040,0x100);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  BufferManager_ResizeBuffer(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,0xb);
}
// 函数: void function_84539c(void)
void function_84539c(void)
{
  uint64_t local_var_140;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_8453c0(uint64_t param_1,uint64_t *param_2)
void function_8453c0(uint64_t param_1,uint64_t *param_2)
{
  int iVar1;
  int iVar2;
  int8_t stack_array_178 [32];
  int8_t *plocal_var_158;
  int64_t alStack_148 [2];
  uint64_t *aplocal_var_138 [2];
  int8_t stack_array_128 [256];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  if (param_2 == (uint64_t *)0x0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_178);
    }
    BufferManager_ResizeBuffer(stack_array_128,0x100,0);
    plocal_var_158 = stack_array_128;
// WARNING: Subroutine does not return
    DataTransformer(0x1f,0xf,param_1,&processed_var_9512_ptr);
  }
  *param_2 = 0;
  alStack_148[1] = 0;
  iVar1 = SystemFunction_00018088c590(param_1,alStack_148);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_18084541c;
    iVar2 = SystemSecurityProcessor(alStack_148 + 1);
    if (iVar2 == 0) goto LAB_180845484;
  }
  else {
LAB_180845484:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = SystemCore_SecurityChecker(*(uint64_t *)(alStack_148[0] + 0x98),aplocal_var_138,0x20), iVar1 == 0))
  {
    *aplocal_var_138[0] = &processed_var_9408_ptr;
    *(int32_t *)(aplocal_var_138[0] + 1) = 0x20;
    *(int *)(aplocal_var_138[0] + 2) = (int)param_1;
    iVar1 = Function_6f6ce600(*(uint64_t *)(alStack_148[0] + 0x98),aplocal_var_138[0]);
    if (iVar1 == 0) {
      *param_2 = aplocal_var_138[0][3];
// WARNING: Subroutine does not return
      AdvancedSystemProcessor(alStack_148 + 1);
    }
  }
LAB_18084541c:
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStack_148 + 1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_845520(uint64_t param_1,uint64_t *param_2)
void function_845520(uint64_t param_1,uint64_t *param_2)
{
  int iVar1;
  int8_t stack_array_158 [32];
  int8_t *plocal_var_138;
  int64_t alStack_128 [2];
  int8_t stack_array_118 [256];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158;
  if (param_2 == (uint64_t *)0x0) {
    iVar1 = 0x1f;
  }
  else {
    *param_2 = 0;
    iVar1 = SystemFunction_00018088c590(param_1,alStack_128);
    if (iVar1 == 0) {
      *param_2 = *(uint64_t *)(alStack_128[0] + 0x78);
      goto LAB_1808455bc;
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    BufferManager_ResizeBuffer(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,0xb,param_1,&processed_var_408_ptr);
  }
LAB_1808455bc:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_8455f0(uint64_t param_1,uint64_t *param_2)
void function_8455f0(uint64_t param_1,uint64_t *param_2)
{
  int iVar1;
  int iVar2;
  int8_t stack_array_178 [32];
  int8_t *plocal_var_158;
  int64_t alStack_148 [2];
  uint64_t *aplocal_var_138 [2];
  int8_t stack_array_128 [256];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  if (param_2 == (uint64_t *)0x0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_178);
    }
    BufferManager_ResizeBuffer(stack_array_128,0x100,0);
    plocal_var_158 = stack_array_128;
// WARNING: Subroutine does not return
    DataTransformer(0x1f,0xd,param_1,&processed_var_8256_ptr);
  }
  *param_2 = 0;
  alStack_148[1] = 0;
  iVar1 = SystemFunction_00018088c590(param_1,alStack_148);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_180845652;
    iVar2 = SystemSecurityProcessor(alStack_148 + 1);
    if (iVar2 == 0) goto LAB_1808456ba;
  }
  else {
LAB_1808456ba:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = SystemCore_SecurityChecker(*(uint64_t *)(alStack_148[0] + 0x98),aplocal_var_138,0x20), iVar1 == 0))
  {
    *aplocal_var_138[0] = &processed_var_8152_ptr;
    *(int32_t *)(aplocal_var_138[0] + 3) = 0;
    *(int32_t *)(aplocal_var_138[0] + 1) = 0x20;
    *(int *)(aplocal_var_138[0] + 2) = (int)param_1;
    iVar1 = Function_6f6ce600(*(uint64_t *)(alStack_148[0] + 0x98),aplocal_var_138[0]);
    if (iVar1 == 0) {
      *param_2 = (uint64_t)*(uint *)(aplocal_var_138[0] + 3);
// WARNING: Subroutine does not return
      AdvancedSystemProcessor(alStack_148 + 1);
    }
  }
LAB_180845652:
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStack_148 + 1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_845c40(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void function_845c40(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t stack_array_168 [32];
  int8_t *plocal_var_148;
  int8_t stack_array_138 [256];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  iVar1 = function_83fde0();
  if ((iVar1 != 0) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    iVar2 = SystemDataProcessor(stack_array_138,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    BufferManager_ResizeBuffer(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_148 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,0xb,param_1,&processed_var_416_ptr);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_168);
}
// 函数: void function_845c84(void)
void function_845c84(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  iVar1 = SystemDataProcessor(&local_buffer_00000030,0x100);
  iVar2 = SystemDataProcessor(&local_buffer_00000030 + iVar1,0x100 - iVar1,&system_temp_buffer);
  BufferManager_ResizeBuffer(&local_buffer_00000030 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,0xb);
}
// 函数: void function_845cfc(void)
void function_845cfc(void)
{
  uint64_t local_var_130;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_130 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_845d20(uint64_t param_1,int32_t *param_2,uint64_t *param_3)
void function_845d20(uint64_t param_1,int32_t *param_2,uint64_t *param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  int iVar5;
  int8_t stack_array_188 [32];
  int8_t *plocal_var_168;
  int64_t alStack_158 [2];
  uint64_t *aplocal_var_148 [2];
  int8_t stack_array_138 [256];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  if ((param_3 == (uint64_t *)0x0) || (*param_3 = 0, param_2 == (int32_t *)0x0)) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_188);
    }
    iVar4 = function_74bc50(stack_array_138,0x100,param_2);
    iVar5 = SystemDataProcessor(stack_array_138 + iVar4,0x100 - iVar4,&system_temp_buffer);
    BufferManager_ResizeBuffer(stack_array_138 + (iVar4 + iVar5),0x100 - (iVar4 + iVar5),param_3);
    plocal_var_168 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(0x1f,0xb,param_1,&processed_var_9904_ptr);
  }
  alStack_158[1] = 0;
  iVar4 = SystemFunction_00018088c590(param_1,alStack_158);
  if (iVar4 == 0) {
    if ((*(uint *)(alStack_158[0] + 0x24) >> 1 & 1) == 0) goto LAB_180845d97;
    iVar5 = SystemSecurityProcessor(alStack_158 + 1);
    if (iVar5 == 0) goto LAB_180845e35;
  }
  else {
LAB_180845e35:
    iVar5 = iVar4;
  }
  if ((iVar5 == 0) &&
     (iVar4 = SystemCore_SecurityChecker(*(uint64_t *)(alStack_158[0] + 0x98),aplocal_var_148,0x28), iVar4 == 0))
  {
    *aplocal_var_148[0] = &processed_var_9800_ptr;
    *(int32_t *)(aplocal_var_148[0] + 4) = 0;
    *(int32_t *)(aplocal_var_148[0] + 1) = 0x28;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(int32_t *)(aplocal_var_148[0] + 2) = *param_2;
    *(int32_t *)((int64_t)aplocal_var_148[0] + 0x14) = uVar1;
    *(int32_t *)(aplocal_var_148[0] + 3) = uVar2;
    *(int32_t *)((int64_t)aplocal_var_148[0] + 0x1c) = uVar3;
    iVar4 = Function_6f6ce600(*(uint64_t *)(alStack_158[0] + 0x98),aplocal_var_148[0]);
    if (iVar4 == 0) {
      *param_3 = (uint64_t)*(uint *)(aplocal_var_148[0] + 4);
// WARNING: Subroutine does not return
      AdvancedSystemProcessor(alStack_158 + 1);
    }
  }
LAB_180845d97:
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStack_158 + 1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address