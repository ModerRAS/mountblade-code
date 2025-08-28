#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 04_ui_system_part119.c - 33 个函数
// 函数: void SystemCore_3a785(void)
void SystemCore_3a785(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  iVar1 = BufferManager_Initialize(&local_buffer_00000040,0x100,unaff_EBX);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  SystemCore_CompressionHandler(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}
// 函数: void SystemCore_3a7fd(void)
void SystemCore_3a7fd(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3a81f(void)
void SystemCore_3a81f(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3a840(uint64_t param_1,int32_t *param_2,int32_t *param_3,int32_t *param_4)
void SystemCore_3a840(uint64_t param_1,int32_t *param_2,int32_t *param_3,int32_t *param_4)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t stack_array_188 [32];
  int8_t *plocal_var_168;
  int64_t lStack_158;
  int64_t lStack_150;
  int8_t stack_array_148 [256];
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  lStack_158 = 0;
  iVar1 = SystemState_Manager(param_1,&lStack_150,&lStack_158);
  if (iVar1 == 0) {
    if (param_2 != (int32_t *)0x0) {
      *param_2 = *(int32_t *)(lStack_150 + 0x6d0);
    }
    if (param_3 != (int32_t *)0x0) {
      *param_3 = *(int32_t *)(lStack_150 + 0x1193c);
    }
    if (param_4 != (int32_t *)0x0) {
      *param_4 = *(int32_t *)(lStack_150 + 0x6d4);
    }
  }
  else if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = UIAnimationController(stack_array_148,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074bda0(stack_array_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    UIAnimationController(stack_array_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
    plocal_var_168 = stack_array_148;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_4904_ptr);
  }
  if (lStack_158 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_188);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3a85d(uint64_t param_1,int32_t *param_2,int32_t *param_3,int32_t *param_4,
void SystemCore_3a85d(uint64_t param_1,int32_t *param_2,int32_t *param_3,int32_t *param_4,
                  uint64_t param_5,uint64_t param_6,int64_t param_7)
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
    if (param_2 != (int32_t *)0x0) {
      *param_2 = *(int32_t *)(param_7 + 0x6d0);
    }
    if (param_3 != (int32_t *)0x0) {
      *param_3 = *(int32_t *)(param_7 + 0x1193c);
    }
    if (param_4 != (int32_t *)0x0) {
      *param_4 = *(int32_t *)(param_7 + 0x6d4);
    }
  }
  else if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = UIAnimationController(&local_buffer_00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074bda0(&local_buffer_00000040 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    UIAnimationController(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_4904_ptr,&local_buffer_00000040);
  }
  if (param_6 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3a8dd(void)
void SystemCore_3a8dd(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  iVar1 = UIAnimationController(&local_buffer_00000040,0x100);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074bda0(&local_buffer_00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  UIAnimationController(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}
// 函数: void SystemCore_3a98b(void)
void SystemCore_3a98b(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3a9b5(void)
void SystemCore_3a9b5(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3a9e0(uint64_t param_1,int32_t param_2,uint64_t param_3)
void SystemCore_3a9e0(uint64_t param_1,int32_t param_2,uint64_t param_3)
{
  int iVar1;
  int8_t stack_array_168 [32];
  int8_t *plocal_var_148;
  int64_t lStack_138;
  uint64_t local_var_130;
  int8_t stack_array_128 [256];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  lStack_138 = 0;
  iVar1 = SystemState_Manager(param_1,&local_var_130,&lStack_138);
  if (iVar1 == 0) {
    iVar1 = func_0x00018074a590(local_var_130,param_2,param_3);
    if (iVar1 == 0) goto LAB_18073aa6e;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    plocal_var_148 = stack_array_128;
    stack_array_128[0] = 0;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5400_ptr);
  }
LAB_18073aa6e:
  if (lStack_138 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_168);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3aab0(uint64_t param_1,uint64_t param_2)
void SystemCore_3aab0(uint64_t param_1,uint64_t param_2)
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
    iVar1 = func_0x000180746bd0(local_var_120,param_2);
    if (iVar1 == 0) goto LAB_18073ab4a;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    SystemCore_CompressionHandler(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5464_ptr);
  }
LAB_18073ab4a:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3ab80(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4)
void SystemCore_3ab80(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t stack_array_188 [32];
  int8_t *plocal_var_168;
  uint64_t stack_array_158 [2];
  int8_t stack_array_148 [256];
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  iVar1 = SystemState_Manager(param_1,stack_array_158,0);
  if (((iVar1 != 0) || (iVar1 = SystemCore_46bf0(stack_array_158[0],param_2,param_3,param_4), iVar1 != 0))
     && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    iVar2 = BufferManager_Initialize(stack_array_148,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = BufferManager_ProcessData(stack_array_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(stack_array_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
    plocal_var_168 = stack_array_148;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5248_ptr);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_188);
}
// 函数: void SystemCore_3abec(void)
void SystemCore_3abec(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_EBP;
  int32_t unaff_ESI;
  iVar1 = BufferManager_Initialize(&local_buffer_00000040,0x100,unaff_EBX);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = BufferManager_ProcessData(&local_buffer_00000040 + iVar1,0x100 - iVar1,unaff_EBP);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074bda0(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}
// 函数: void SystemCore_3ac9a(void)
void SystemCore_3ac9a(void)
{
  uint64_t local_var_140;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3acc0(uint64_t param_1,int32_t param_2,uint64_t param_3)
void SystemCore_3acc0(uint64_t param_1,int32_t param_2,uint64_t param_3)
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
    iVar1 = SystemCore_478a0(local_var_140,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_3adad;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = BufferManager_Initialize(stack_array_138,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemCore_4be30(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_158 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5936_ptr);
  }
SystemCore_3adad:
  if (lStack_148 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3acdd(uint64_t param_1,int32_t param_2,uint64_t param_3)
void SystemCore_3acdd(uint64_t param_1,int32_t param_2,uint64_t param_3)
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
    iVar1 = SystemCore_478a0(local_var_38,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_3adad;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = BufferManager_Initialize(&local_buffer_00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemCore_4be30(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5936_ptr,&local_buffer_00000040);
  }
SystemCore_3adad:
  if (lStack0000000000000030 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3ad35(void)
void SystemCore_3ad35(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  iVar1 = BufferManager_Initialize(&local_buffer_00000040,0x100,unaff_EBX);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  SystemCore_4be30(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}
// 函数: void SystemCore_3adad(void)
void SystemCore_3adad(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3adcf(void)
void SystemCore_3adcf(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3adf0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int8_t param_4,
void SystemCore_3adf0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int8_t param_4,
                  uint64_t param_5)
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
    plocal_var_168 = (int8_t *)param_5;
    iVar1 = SystemCore_479e0(local_var_150,param_2,param_3,param_4);
    if (iVar1 == 0) goto SystemCore_3af6d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(stack_array_148,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074bda0(stack_array_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemCore_Cleanup(stack_array_148 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(stack_array_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_5);
    plocal_var_168 = stack_array_148;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5696_ptr);
  }
SystemCore_3af6d:
  if (lStack_158 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_188);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3ae0d(uint64_t param_1,uint64_t param_2,uint64_t param_3,int8_t param_4,
void SystemCore_3ae0d(uint64_t param_1,uint64_t param_2,uint64_t param_3,int8_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7)
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
  uint64_t local_var_140;
  uint64_t local_var_1b0;
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  param_6 = 0;
  iVar1 = SystemState_Manager(param_1,&param_7,&param_6);
  if (iVar1 == 0) {
    iVar1 = SystemCore_479e0(param_7,param_2,param_3,param_4,local_var_1b0);
    if (iVar1 == 0) goto SystemCore_3af6d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(&local_buffer_00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074bda0(&local_buffer_00000040 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemCore_Cleanup(&local_buffer_00000040 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),local_var_1b0
                       );
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5696_ptr,&local_buffer_00000040);
  }
SystemCore_3af6d:
  if (param_6 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3ae88(void)
void SystemCore_3ae88(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  int8_t unaff_R14B;
  iVar1 = func_0x00018074bda0(&local_buffer_00000040,0x100);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074bda0(&local_buffer_00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemCore_Cleanup(&local_buffer_00000040 + iVar1,0x100 - iVar1,unaff_R14B);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074bda0(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}
// 函数: void SystemCore_3af6d(void)
void SystemCore_3af6d(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3af9f(void)
void SystemCore_3af9f(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3afc0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int8_t param_4,
void SystemCore_3afc0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int8_t param_4,
                  uint64_t param_5)
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
    plocal_var_168 = (int8_t *)param_5;
    iVar1 = SystemCore_47ad0(local_var_150,param_2,param_3,param_4);
    if (iVar1 == 0) goto SystemCore_3b13d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(stack_array_148,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074bda0(stack_array_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemCore_Cleanup(stack_array_148 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(stack_array_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_5);
    plocal_var_168 = stack_array_148;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5672_ptr);
  }
SystemCore_3b13d:
  if (lStack_158 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_188);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3afdd(uint64_t param_1,uint64_t param_2,uint64_t param_3,int8_t param_4,
void SystemCore_3afdd(uint64_t param_1,uint64_t param_2,uint64_t param_3,int8_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7)
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
  uint64_t local_var_140;
  uint64_t local_var_1b0;
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  param_6 = 0;
  iVar1 = SystemState_Manager(param_1,&param_7,&param_6);
  if (iVar1 == 0) {
    iVar1 = SystemCore_47ad0(param_7,param_2,param_3,param_4,local_var_1b0);
    if (iVar1 == 0) goto SystemCore_3b13d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(&local_buffer_00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074bda0(&local_buffer_00000040 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemCore_Cleanup(&local_buffer_00000040 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),local_var_1b0
                       );
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5672_ptr,&local_buffer_00000040);
  }
SystemCore_3b13d:
  if (param_6 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3b058(void)
void SystemCore_3b058(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  int8_t unaff_R14B;
  iVar1 = func_0x00018074bda0(&local_buffer_00000040,0x100);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074bda0(&local_buffer_00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemCore_Cleanup(&local_buffer_00000040 + iVar1,0x100 - iVar1,unaff_R14B);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074bda0(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}
// 函数: void SystemCore_3b13d(void)
void SystemCore_3b13d(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3b16f(void)
void SystemCore_3b16f(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3b190(uint64_t param_1,int32_t param_2,uint64_t param_3,int8_t param_4)
void SystemCore_3b190(uint64_t param_1,int32_t param_2,uint64_t param_3,int8_t param_4)
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
    iVar1 = SystemCore_48100(local_var_150,param_2,param_3,param_4);
    if (iVar1 == 0) goto SystemCore_3b2c4;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = BufferManager_Initialize(stack_array_148,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074bda0(stack_array_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemCore_Cleanup(stack_array_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
    plocal_var_168 = stack_array_148;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5888_ptr);
  }
SystemCore_3b2c4:
  if (lStack_158 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_188);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3b1ad(uint64_t param_1,int32_t param_2,uint64_t param_3,int8_t param_4,
void SystemCore_3b1ad(uint64_t param_1,int32_t param_2,uint64_t param_3,int8_t param_4,
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
    iVar1 = SystemCore_48100(param_7,param_2,param_3,param_4);
    if (iVar1 == 0) goto SystemCore_3b2c4;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = BufferManager_Initialize(&local_buffer_00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074bda0(&local_buffer_00000040 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemCore_Cleanup(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5888_ptr,&local_buffer_00000040);
  }
SystemCore_3b2c4:
  if (param_6 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3b215(void)
void SystemCore_3b215(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  int8_t unaff_R14B;
  iVar1 = BufferManager_Initialize(&local_buffer_00000040,0x100,unaff_EBX);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074bda0(&local_buffer_00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  SystemCore_Cleanup(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_R14B);
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}
// 函数: void SystemCore_3b2c4(void)
void SystemCore_3b2c4(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3b2ee(void)
void SystemCore_3b2ee(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address