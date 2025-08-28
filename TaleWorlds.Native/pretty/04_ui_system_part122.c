#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part122.c - 34 个函数
// 函数: void SystemCore_3ceed(uint64_t param_1,int64_t param_2,int64_t param_3)
void SystemCore_3ceed(uint64_t param_1,int64_t param_2,int64_t param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t in_R11;
  uint64_t unaff_R14;
  int64_t lStack0000000000000030;
  int64_t *local_var_38;
  uint64_t local_var_140;
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R14;
  lStack0000000000000030 = 0;
  iVar1 = SystemFunction_00018074fb10(param_1,&local_buffer_00000038,&local_buffer_00000030);
  if (iVar1 == 0) {
    param_2 = param_2 << 0x14;
    param_3 = param_3 << 0x14;
    iVar1 = (**(code **)(*local_var_38 + 0x100))(local_var_38,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_3cfcb;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = SystemFunction_00018074be80(&local_buffer_00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemFunction_00018074be80(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6616_ptr,&local_buffer_00000040);
  }
SystemCore_3cfcb:
  if (lStack0000000000000030 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3cf53(void)
void SystemCore_3cf53(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  iVar1 = SystemFunction_00018074be80(&local_buffer_00000040,0x100);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  SystemFunction_00018074be80(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,4);
}
// 函数: void SystemCore_3cfcb(void)
void SystemCore_3cfcb(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3cfed(void)
void SystemCore_3cfed(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3d010(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void SystemCore_3d010(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t stack_array_178 [32];
  int8_t *plocal_var_158;
  int64_t lStack_148;
  int64_t *plStack_140;
  int8_t stack_array_138 [256];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  lStack_148 = 0;
  iVar1 = SystemFunction_00018074fb10(param_1,&plStack_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_140 + 0x140))(plStack_140,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_3d103;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = RenderingEngine_FrameBufferHandler(stack_array_138,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    RenderingEngine_FrameBufferHandler(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_158 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6768_ptr);
  }
SystemCore_3d103:
  if (lStack_148 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3d02d(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void SystemCore_3d02d(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t in_R11;
  uint64_t unaff_R14;
  int64_t lStack0000000000000030;
  int64_t *local_var_38;
  uint64_t local_var_140;
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R14;
  lStack0000000000000030 = 0;
  iVar1 = SystemFunction_00018074fb10(param_1,&local_buffer_00000038,&local_buffer_00000030);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*local_var_38 + 0x140))(local_var_38,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_3d103;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = RenderingEngine_FrameBufferHandler(&local_buffer_00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    RenderingEngine_FrameBufferHandler(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6768_ptr,&local_buffer_00000040);
  }
SystemCore_3d103:
  if (lStack0000000000000030 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3d08b(void)
void SystemCore_3d08b(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  iVar1 = RenderingEngine_FrameBufferHandler(&local_buffer_00000040,0x100);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  RenderingEngine_FrameBufferHandler(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,4);
}
// 函数: void SystemCore_3d103(void)
void SystemCore_3d103(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3d125(void)
void SystemCore_3d125(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3d150(uint64_t param_1,int32_t param_2)
void SystemCore_3d150(uint64_t param_1,int32_t param_2)
{
  int iVar1;
  int8_t stack_array_168 [32];
  int8_t *plocal_var_148;
  int64_t lStack_138;
  int64_t *plStack_130;
  int8_t stack_array_128 [256];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  lStack_138 = 0;
  iVar1 = SystemFunction_00018074fb10(param_1,&plStack_130,&lStack_138);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_130 + 0x1c8))(plStack_130,param_2);
    if (iVar1 == 0) goto LAB_18073d1f1;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    SystemFunction_00018074b830(stack_array_128,0x100,param_2);
    plocal_var_148 = stack_array_128;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6800_ptr);
  }
LAB_18073d1f1:
  if (lStack_138 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_168);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3d230(uint64_t param_1,int64_t param_2,int64_t param_3,int8_t param_4)
void SystemCore_3d230(uint64_t param_1,int64_t param_2,int64_t param_3,int8_t param_4)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t stack_array_188 [32];
  int8_t *plocal_var_168;
  int64_t lStack_158;
  int64_t *plStack_150;
  int8_t stack_array_148 [256];
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  lStack_158 = 0;
  iVar1 = SystemFunction_00018074fb10(param_1,&plStack_150,&lStack_158);
  if (iVar1 == 0) {
    param_2 = param_2 << 0x14;
    param_3 = param_3 << 0x14;
    iVar1 = (**(code **)(*plStack_150 + 0xe0))(plStack_150,param_2,param_3,param_4);
    if (iVar1 == 0) goto SystemCore_3d372;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = SystemFunction_00018074be80(stack_array_148,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemFunction_00018074be80(stack_array_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemCore_Cleanup(stack_array_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
    plocal_var_168 = stack_array_148;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6480_ptr);
  }
SystemCore_3d372:
  if (lStack_158 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_188);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3d24d(uint64_t param_1,int64_t param_2,int64_t param_3,int8_t param_4,
void SystemCore_3d24d(uint64_t param_1,int64_t param_2,int64_t param_3,int8_t param_4,
                  uint64_t param_5,uint64_t param_6,int64_t *param_7)
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
  iVar1 = SystemFunction_00018074fb10(param_1,&param_7,&param_6);
  if (iVar1 == 0) {
    param_2 = param_2 << 0x14;
    param_3 = param_3 << 0x14;
    iVar1 = (**(code **)(*param_7 + 0xe0))(param_7,param_2,param_3,param_4);
    if (iVar1 == 0) goto SystemCore_3d372;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = SystemFunction_00018074be80(&local_buffer_00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemFunction_00018074be80(&local_buffer_00000040 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemCore_Cleanup(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6480_ptr,&local_buffer_00000040);
  }
SystemCore_3d372:
  if (param_6 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3d2c3(void)
void SystemCore_3d2c3(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  int8_t unaff_R14B;
  iVar1 = SystemFunction_00018074be80(&local_buffer_00000040,0x100);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemFunction_00018074be80(&local_buffer_00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  SystemCore_Cleanup(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_R14B);
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,4);
}
// 函数: void SystemCore_3d372(void)
void SystemCore_3d372(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3d39c(void)
void SystemCore_3d39c(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3d3c0(uint64_t param_1,int64_t param_2,int32_t param_3)
void SystemCore_3d3c0(uint64_t param_1,int64_t param_2,int32_t param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t stack_array_178 [32];
  int8_t *plocal_var_158;
  int64_t lStack_148;
  int64_t *plStack_140;
  int8_t stack_array_138 [256];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  lStack_148 = 0;
  iVar1 = SystemFunction_00018074fb10(param_1,&plStack_140,&lStack_148);
  if (iVar1 == 0) {
    param_2 = param_2 << 0x14;
    iVar1 = (**(code **)(*plStack_140 + 0xf8))(plStack_140,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_3d4b8;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = SystemFunction_00018074be80(stack_array_138,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemFunction_00018074b830(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_158 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6576_ptr);
  }
SystemCore_3d4b8:
  if (lStack_148 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3d3dd(uint64_t param_1,int64_t param_2,int32_t param_3)
void SystemCore_3d3dd(uint64_t param_1,int64_t param_2,int32_t param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t in_R11;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int64_t lStack0000000000000030;
  int64_t *local_var_38;
  uint64_t local_var_140;
  *(uint64_t *)(in_R11 + 0x20) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBP;
  *(int32_t *)(in_R11 + -0x28) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x24) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x20) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x1c) = unaff_XMM6_Dd;
  lStack0000000000000030 = 0;
  iVar1 = SystemFunction_00018074fb10(param_1,&local_buffer_00000038,&local_buffer_00000030);
  if (iVar1 == 0) {
    param_2 = param_2 << 0x14;
    iVar1 = (**(code **)(*local_var_38 + 0xf8))(local_var_38,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_3d4b8;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = SystemFunction_00018074be80(&local_buffer_00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemFunction_00018074b830(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6576_ptr,&local_buffer_00000040);
  }
SystemCore_3d4b8:
  if (lStack0000000000000030 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3d440(void)
void SystemCore_3d440(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  iVar1 = SystemFunction_00018074be80(&local_buffer_00000040,0x100);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  SystemFunction_00018074b830(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,4);
}
// 函数: void SystemCore_3d4b8(void)
void SystemCore_3d4b8(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3d4da(void)
void SystemCore_3d4da(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3d500(uint64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4,
void SystemCore_3d500(uint64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4,
                  int32_t param_5)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t stack_array_188 [32];
  int8_t *plocal_var_168;
  int8_t local_var_160;
  int64_t lStack_158;
  int64_t *plStack_150;
  int8_t stack_array_148 [256];
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  lStack_158 = 0;
  iVar1 = SystemFunction_00018074fb10(param_1,&plStack_150,&lStack_158);
  if (iVar1 == 0) {
    local_var_160 = 1;
    plocal_var_168 = (int8_t *)CONCAT44(plocal_var_168._4_4_,param_5);
    iVar1 = (**(code **)(*plStack_150 + 200))(plStack_150,param_2,param_3,param_4);
    if (iVar1 == 0) goto SystemCore_3d683;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = SystemCore_4bac0(stack_array_148,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemFunction_00018074b7d0(stack_array_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemFunction_00018074b7d0(stack_array_148 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemFunction_00018074b7d0(stack_array_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_5);
    plocal_var_168 = stack_array_148;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6416_ptr);
  }
SystemCore_3d683:
  if (lStack_158 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_188);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3d51d(uint64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4,
void SystemCore_3d51d(uint64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4,
                  uint64_t param_5,uint64_t param_6,int64_t *param_7)
{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  uint64_t local_var_20;
  int32_t uVar4;
  uint64_t local_var_140;
  int32_t local_var_1b0;
  uVar4 = (int32_t)((uint64_t)local_var_20 >> 0x20);
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  param_6 = 0;
  iVar1 = SystemFunction_00018074fb10(param_1,&param_7,&param_6);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_7 + 200))
                      (param_7,param_2,param_3,param_4,CONCAT44(uVar4,local_var_1b0));
    if (iVar1 == 0) goto SystemCore_3d683;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = SystemCore_4bac0(&local_buffer_00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemFunction_00018074b7d0(&local_buffer_00000040 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemFunction_00018074b7d0(&local_buffer_00000040 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemFunction_00018074b7d0(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),local_var_1b0
                       );
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6416_ptr,&local_buffer_00000040);
  }
SystemCore_3d683:
  if (param_6 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3d59f(void)
void SystemCore_3d59f(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_EBP;
  int32_t unaff_ESI;
  int32_t unaff_R14D;
  int32_t unaff_R15D;
  iVar1 = SystemCore_4bac0(&local_buffer_00000040,0x100);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemFunction_00018074b7d0(&local_buffer_00000040 + iVar1,0x100 - iVar1,unaff_EBP);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemFunction_00018074b7d0(&local_buffer_00000040 + iVar1,0x100 - iVar1,unaff_R14D);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  SystemFunction_00018074b7d0(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_R15D);
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,4);
}
// 函数: void SystemCore_3d683(void)
void SystemCore_3d683(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3d6b5(void)
void SystemCore_3d6b5(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3d6e0(uint64_t param_1,int32_t param_2)
void SystemCore_3d6e0(uint64_t param_1,int32_t param_2)
{
  int iVar1;
  int8_t stack_array_158 [32];
  int8_t *plocal_var_138;
  int64_t lStack_128;
  int64_t *plStack_120;
  int8_t stack_array_118 [256];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158;
  lStack_128 = 0;
  iVar1 = SystemFunction_00018074fb10(param_1,&plStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_120 + 0x90))(plStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073d77c;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    SystemFunction_00018074b800(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6336_ptr);
  }
LAB_18073d77c:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3d7c0(uint64_t param_1,int8_t param_2)
void SystemCore_3d7c0(uint64_t param_1,int8_t param_2)
{
  int iVar1;
  int8_t stack_array_158 [32];
  int8_t *plocal_var_138;
  int64_t lStack_128;
  int64_t *plStack_120;
  int8_t stack_array_118 [256];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158;
  lStack_128 = 0;
  iVar1 = SystemFunction_00018074fb10(param_1,&plStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_120 + 0x58))(plStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073d85d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    SystemCore_Cleanup(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6272_ptr);
  }
LAB_18073d85d:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_StateController(uint64_t param_1,int8_t param_2)
void SystemCore_StateController(uint64_t param_1,int8_t param_2)
{
  int iVar1;
  int8_t stack_array_158 [32];
  int8_t *plocal_var_138;
  int64_t lStack_128;
  int64_t *plStack_120;
  int8_t stack_array_118 [256];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158;
  lStack_128 = 0;
  iVar1 = SystemFunction_00018074fb10(param_1,&plStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_120 + 0x10))(plStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073d93d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    SystemCore_Cleanup(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6016_ptr);
  }
LAB_18073d93d:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3d980(uint64_t param_1,int32_t param_2)
void SystemCore_3d980(uint64_t param_1,int32_t param_2)
{
  int iVar1;
  int8_t stack_array_168 [32];
  int8_t *plocal_var_148;
  int64_t lStack_138;
  int64_t *plStack_130;
  int8_t stack_array_128 [256];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  lStack_138 = 0;
  iVar1 = SystemFunction_00018074fb10(param_1,&plStack_130,&lStack_138);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_130 + 0x48))(plStack_130,param_2);
    if (iVar1 == 0) goto LAB_18073da1e;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    SystemFunction_00018074b830(stack_array_128,0x100,param_2);
    plocal_var_148 = stack_array_128;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6208_ptr);
  }
LAB_18073da1e:
  if (lStack_138 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_168);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3da60(uint64_t param_1,int32_t param_2,int32_t param_3)
void SystemCore_3da60(uint64_t param_1,int32_t param_2,int32_t param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t stack_array_178 [32];
  int8_t *plocal_var_158;
  int64_t lStack_148;
  int64_t *plStack_140;
  int8_t stack_array_138 [256];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  lStack_148 = 0;
  iVar1 = SystemFunction_00018074fb10(param_1,&plStack_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_140 + 0x68))(plStack_140,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_3db4f;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = SystemFunction_00018074b7d0(stack_array_138,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemFunction_00018074b830(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_158 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6296_ptr);
  }
SystemCore_3db4f:
  if (lStack_148 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3da7d(uint64_t param_1,int32_t param_2,int32_t param_3)
void SystemCore_3da7d(uint64_t param_1,int32_t param_2,int32_t param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t in_R11;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int64_t lStack0000000000000030;
  int64_t *local_var_38;
  uint64_t local_var_140;
  *(uint64_t *)(in_R11 + 0x20) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBP;
  *(int32_t *)(in_R11 + -0x28) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x24) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x20) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x1c) = unaff_XMM6_Dd;
  lStack0000000000000030 = 0;
  iVar1 = SystemFunction_00018074fb10(param_1,&local_buffer_00000038,&local_buffer_00000030);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*local_var_38 + 0x68))(local_var_38,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_3db4f;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = SystemFunction_00018074b7d0(&local_buffer_00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemFunction_00018074b830(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6296_ptr,&local_buffer_00000040);
  }
SystemCore_3db4f:
  if (lStack0000000000000030 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3dad7(void)
void SystemCore_3dad7(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  iVar1 = SystemFunction_00018074b7d0(&local_buffer_00000040,0x100,unaff_EBX);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  SystemFunction_00018074b830(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,4);
}
// 函数: void SystemCore_3db4f(void)
void SystemCore_3db4f(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3db71(void)
void SystemCore_3db71(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address