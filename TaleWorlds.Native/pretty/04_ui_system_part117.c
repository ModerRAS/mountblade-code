#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 04_ui_system_part117.c - 35 个函数
// 函数: void function_738e7f(void)
void function_738e7f(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_738ea1(void)
void function_738ea1(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_738ed0(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void function_738ed0(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t stack_array_178 [32];
  int8_t *plocal_var_158;
  int64_t lStack_148;
  uint64_t local_var_140;
  int8_t stack_array_138 [256];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  lStack_148 = 0;
  iVar1 = SystemState_Manager(param_1,&local_var_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = function_745640(local_var_140,param_2,param_3);
    if (iVar1 == 0) goto label_738fbf;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = BufferManager_ResizeBuffer(stack_array_138,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    BufferManager_ResizeBuffer(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_158 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5592_ptr);
  }
label_738fbf:
  if (lStack_148 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_738eed(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void function_738eed(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t in_R11;
  uint64_t unaff_R14;
  int64_t lStack0000000000000030;
  uint64_t local_var_38;
  uint64_t local_var_140;
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R14;
  lStack0000000000000030 = 0;
  iVar1 = SystemState_Manager(param_1,&local_buffer_00000038,&local_buffer_00000030);
  if (iVar1 == 0) {
    iVar1 = function_745640(local_var_38,param_2,param_3);
    if (iVar1 == 0) goto label_738fbf;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = BufferManager_ResizeBuffer(&local_buffer_00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    BufferManager_ResizeBuffer(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5592_ptr,&local_buffer_00000040);
  }
label_738fbf:
  if (lStack0000000000000030 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_738f47(void)
void function_738f47(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  iVar1 = BufferManager_ResizeBuffer(&local_buffer_00000040,0x100);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  BufferManager_ResizeBuffer(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}
// 函数: void function_738fbf(void)
void function_738fbf(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_738fe1(void)
void function_738fe1(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_739010(uint64_t param_1,int32_t param_2,uint64_t param_3)
void function_739010(uint64_t param_1,int32_t param_2,uint64_t param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t stack_array_178 [32];
  int8_t *plocal_var_158;
  int64_t lStack_148;
  uint64_t local_var_140;
  int8_t stack_array_138 [256];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  lStack_148 = 0;
  iVar1 = SystemState_Manager(param_1,&local_var_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = function_7456c0(local_var_140,param_2,param_3);
    if (iVar1 == 0) goto label_7390fd;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = Function_5cdd918c(stack_array_138,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    BufferManager_ResizeBuffer(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_158 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5160_ptr);
  }
label_7390fd:
  if (lStack_148 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_73902d(uint64_t param_1,int32_t param_2,uint64_t param_3)
void function_73902d(uint64_t param_1,int32_t param_2,uint64_t param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t in_R11;
  uint64_t unaff_R14;
  int64_t lStack0000000000000030;
  uint64_t local_var_38;
  uint64_t local_var_140;
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R14;
  lStack0000000000000030 = 0;
  iVar1 = SystemState_Manager(param_1,&local_buffer_00000038,&local_buffer_00000030);
  if (iVar1 == 0) {
    iVar1 = function_7456c0(local_var_38,param_2,param_3);
    if (iVar1 == 0) goto label_7390fd;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = Function_5cdd918c(&local_buffer_00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    BufferManager_ResizeBuffer(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5160_ptr,&local_buffer_00000040);
  }
label_7390fd:
  if (lStack0000000000000030 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_739085(void)
void function_739085(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  iVar1 = Function_5cdd918c(&local_buffer_00000040,0x100,unaff_EBX);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  BufferManager_ResizeBuffer(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}
// 函数: void function_7390fd(void)
void function_7390fd(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_73911f(void)
void function_73911f(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_739140(uint64_t param_1,int32_t param_2,uint64_t param_3)
void function_739140(uint64_t param_1,int32_t param_2,uint64_t param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t stack_array_178 [32];
  int8_t *plocal_var_158;
  int64_t lStack_148;
  uint64_t local_var_140;
  int8_t stack_array_138 [256];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  lStack_148 = 0;
  iVar1 = SystemState_Manager(param_1,&local_var_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = function_745760(local_var_140,param_2,param_3);
    if (iVar1 == 0) goto label_73922d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = Function_fe6d9439(stack_array_138,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    BufferManager_ResizeBuffer(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_158 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5616_ptr);
  }
label_73922d:
  if (lStack_148 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_73915d(uint64_t param_1,int32_t param_2,uint64_t param_3)
void function_73915d(uint64_t param_1,int32_t param_2,uint64_t param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t in_R11;
  uint64_t unaff_R14;
  int64_t lStack0000000000000030;
  uint64_t local_var_38;
  uint64_t local_var_140;
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R14;
  lStack0000000000000030 = 0;
  iVar1 = SystemState_Manager(param_1,&local_buffer_00000038,&local_buffer_00000030);
  if (iVar1 == 0) {
    iVar1 = function_745760(local_var_38,param_2,param_3);
    if (iVar1 == 0) goto label_73922d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = Function_fe6d9439(&local_buffer_00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    BufferManager_ResizeBuffer(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5616_ptr,&local_buffer_00000040);
  }
label_73922d:
  if (lStack0000000000000030 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_7391b5(void)
void function_7391b5(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  iVar1 = Function_fe6d9439(&local_buffer_00000040,0x100,unaff_EBX);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  BufferManager_ResizeBuffer(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}
// 函数: void function_73922d(void)
void function_73922d(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_73924f(void)
void function_73924f(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_739270(uint64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4,
void function_739270(uint64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4,
                  uint64_t param_5)
{
  int iVar1;
  int8_t stack_array_188 [32];
  int8_t *plocal_var_168;
  uint64_t local_var_160;
  uint64_t stack_array_158 [2];
  int8_t stack_array_148 [256];
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  iVar1 = SystemState_Manager(param_1,stack_array_158,0);
  if (iVar1 == 0) {
    plocal_var_168 = (int8_t *)param_5;
    iVar1 = function_745870(stack_array_158[0],param_2,param_3,param_4);
    if (iVar1 == 0) goto LAB_180739325;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    local_var_160 = param_5;
    plocal_var_168 = (int8_t *)param_4;
    function_738b40(stack_array_148,0x100,param_2,param_3);
    plocal_var_168 = stack_array_148;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5568_ptr);
  }
LAB_180739325:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_188);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_739350(uint64_t param_1,uint64_t param_2)
void function_739350(uint64_t param_1,uint64_t param_2)
{
  int iVar1;
  int8_t stack_array_158 [32];
  int8_t *plocal_var_138;
  int64_t lStack_128;
  uint64_t local_var_120;
  int8_t stack_array_118 [256];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158;
  lStack_128 = 0;
  iVar1 = SystemState_Manager(param_1,&local_var_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = function_745f70(local_var_120,param_2);
    if (iVar1 == 0) goto LAB_1807393ea;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    BufferManager_ResizeBuffer(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5816_ptr);
  }
LAB_1807393ea:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_739420(uint64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
void function_739420(uint64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t stack_array_198 [32];
  int8_t *plocal_var_178;
  uint64_t local_var_170;
  int64_t lStack_168;
  uint64_t local_var_160;
  int8_t stack_array_158 [256];
  uint64_t local_var_58;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_198;
  lStack_168 = 0;
  iVar1 = SystemState_Manager(param_1,&local_var_160,&lStack_168);
  if (iVar1 == 0) {
    local_var_170 = param_6;
    plocal_var_178 = (int8_t *)param_5;
    iVar1 = Function_2ae7f540(local_var_160,param_2,param_3,param_4);
    if (iVar1 == 0) goto label_7395df;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = Function_fe6d9439(stack_array_158,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_158 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = RenderingEngine_FrameBufferHandler(stack_array_158 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(stack_array_158 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = RenderingEngine_FrameBufferHandler(stack_array_158 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(stack_array_158 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = RenderingEngine_FrameBufferHandler(stack_array_158 + iVar2,0x100 - iVar2,param_5);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(stack_array_158 + iVar2,0x100 - iVar2,&system_temp_buffer);
    RenderingEngine_FrameBufferHandler(stack_array_158 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_6);
    plocal_var_178 = stack_array_158;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5368_ptr);
  }
label_7395df:
  if (lStack_168 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_198);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_73943d(uint64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
void function_73943d(uint64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7)
{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  uint64_t local_var_140;
  uint64_t local_var_1c0;
  uint64_t local_var_1c8;
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x40) = unaff_R15;
  param_6 = 0;
  iVar1 = SystemState_Manager(param_1,&param_7,&param_6);
  if (iVar1 == 0) {
    iVar1 = Function_2ae7f540(param_7,param_2,param_3,param_4,local_var_1c0);
    if (iVar1 == 0) goto label_7395df;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = Function_fe6d9439(&local_buffer_00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = RenderingEngine_FrameBufferHandler(&local_buffer_00000040 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = RenderingEngine_FrameBufferHandler(&local_buffer_00000040 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = RenderingEngine_FrameBufferHandler(&local_buffer_00000040 + iVar2,0x100 - iVar2,local_var_1c0);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    RenderingEngine_FrameBufferHandler(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),local_var_1c8);
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5368_ptr,&local_buffer_00000040);
  }
label_7395df:
  if (param_6 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_7394c5(void)
void function_7394c5(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  iVar1 = Function_fe6d9439(&local_buffer_00000040,0x100,unaff_EBX);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = RenderingEngine_FrameBufferHandler(&local_buffer_00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = RenderingEngine_FrameBufferHandler(&local_buffer_00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = RenderingEngine_FrameBufferHandler(&local_buffer_00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  RenderingEngine_FrameBufferHandler(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}
// 函数: void function_7395df(void)
void function_7395df(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_739619(void)
void function_739619(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_739640(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_739640(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t stack_array_188 [32];
  int8_t *plocal_var_168;
  int64_t lStack_158;
  uint64_t local_var_150;
  int8_t stack_array_148 [256];
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  lStack_158 = 0;
  iVar1 = SystemState_Manager(param_1,&local_var_150,&lStack_158);
  if (iVar1 == 0) {
    iVar1 = Function_9a22866c(local_var_150,param_2,param_3,param_4);
    if (iVar1 == 0) goto label_739773;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = function_74bac0(stack_array_148,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = function_74bac0(stack_array_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    function_74bac0(stack_array_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
    plocal_var_168 = stack_array_148;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5280_ptr);
  }
label_739773:
  if (lStack_158 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_188);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_73965d(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void function_73965d(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7)
{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t in_R11;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  uint64_t local_var_140;
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R15;
  param_6 = 0;
  iVar1 = SystemState_Manager(param_1,&param_7,&param_6);
  if (iVar1 == 0) {
    iVar1 = Function_9a22866c(param_7,param_2,param_3,param_4);
    if (iVar1 == 0) goto label_739773;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = function_74bac0(&local_buffer_00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = function_74bac0(&local_buffer_00000040 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    function_74bac0(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5280_ptr,&local_buffer_00000040);
  }
label_739773:
  if (param_6 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_7396c5(void)
void function_7396c5(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  iVar1 = function_74bac0(&local_buffer_00000040,0x100);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = function_74bac0(&local_buffer_00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  function_74bac0(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}
// 函数: void function_739773(void)
void function_739773(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_73979d(void)
void function_73979d(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_7397c0(uint64_t param_1,uint64_t param_2)
void function_7397c0(uint64_t param_1,uint64_t param_2)
{
  int iVar1;
  int8_t stack_array_158 [32];
  int8_t *plocal_var_138;
  int64_t lStack_128;
  uint64_t local_var_120;
  int8_t stack_array_118 [256];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158;
  lStack_128 = 0;
  iVar1 = SystemState_Manager(param_1,&local_var_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = function_7460d0(local_var_120,param_2);
    if (iVar1 == 0) goto LAB_18073985a;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    BufferManager_ResizeBuffer(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5032_ptr);
  }
LAB_18073985a:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_739890(uint64_t param_1,uint64_t param_2)
void function_739890(uint64_t param_1,uint64_t param_2)
{
  int iVar1;
  int8_t stack_array_158 [32];
  int8_t *plocal_var_138;
  uint64_t stack_array_128 [2];
  int8_t stack_array_118 [256];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158;
  iVar1 = SystemState_Manager(param_1,stack_array_128,0);
  if (((iVar1 != 0) || (iVar1 = function_746180(stack_array_128[0],param_2), iVar1 != 0)) &&
     ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    BufferManager_ResizeBuffer(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5520_ptr);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_739950(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void function_739950(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t stack_array_178 [32];
  int8_t *plocal_var_158;
  uint64_t stack_array_148 [2];
  int8_t stack_array_138 [256];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  iVar1 = SystemState_Manager(param_1,stack_array_148,0);
  if (((iVar1 != 0) || (iVar1 = function_746320(stack_array_148[0],param_2,param_3), iVar1 != 0)) &&
     ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    iVar2 = UIAnimationController(stack_array_138,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    UIAnimationController(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_158 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5488_ptr);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// 函数: void function_7399b2(void)
void function_7399b2(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  iVar1 = UIAnimationController(&local_buffer_00000040,0x100);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  UIAnimationController(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}
// 函数: void function_739a2a(void)
void function_739a2a(void)
{
  uint64_t local_var_140;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_739a50(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void function_739a50(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t stack_array_178 [32];
  int8_t *plocal_var_158;
  int64_t lStack_148;
  uint64_t local_var_140;
  int8_t stack_array_138 [256];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  lStack_148 = 0;
  iVar1 = SystemState_Manager(param_1,&local_var_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = Function_7d2d2542(local_var_140,param_2,param_3);
    if (iVar1 == 0) goto label_739b3f;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = SystemCore_CompressionHandler(stack_array_138,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    UIAnimationController(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_158 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_4968_ptr);
  }
label_739b3f:
  if (lStack_148 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address