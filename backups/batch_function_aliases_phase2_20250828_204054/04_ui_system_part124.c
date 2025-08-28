#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 04_ui_system_part124.c - 30 个函数
// 函数: void SystemCore_3e95d(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4)
void SystemCore_3e95d(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4)
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
  int64_t *local_var_40;
  int64_t lStack0000000000000048;
  uint64_t local_buffer_50;
  uint64_t local_var_160;
  uint64_t local_var_1e0;
  uint64_t local_var_1e8;
  uint64_t local_var_1f0;
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x40) = unaff_R15;
  lStack0000000000000048 = 0;
  local_buffer_50 = param_1;
  iVar1 = SystemCore_52c80(param_1,&local_buffer_00000040,&local_buffer_00000048);
  if (iVar1 == 0) {
    if (((int)local_var_40[0x22] == 0) || ((int)local_var_40[0x22] == 7)) {
      iVar1 = (**(code **)(*local_var_40 + 0x28))
                        (local_var_40,param_2,param_3,param_4,local_var_1e0);
      if (iVar1 == 0) goto SystemCore_3eb6d;
    }
    else {
      iVar1 = 0x2e;
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = BufferManager_ProcessData(&local_buffer_00000060,0x100,param_2);
    iVar3 = SystemDataProcessor(&local_buffer_00000060 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = BufferManager_ProcessData(&local_buffer_00000060 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&local_buffer_00000060 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074bda0(&local_buffer_00000060 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&local_buffer_00000060 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074bda0(&local_buffer_00000060 + iVar2,0x100 - iVar2,local_var_1e0);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&local_buffer_00000060 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemCore_CompressionHandler(&local_buffer_00000060 + iVar2,0x100 - iVar2,local_var_1e8);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&local_buffer_00000060 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemCore_CompressionHandler(&local_buffer_00000060 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),local_var_1f0);
// WARNING: Subroutine does not return
    DataTransformer(iVar1,5,local_buffer_50,&processed_var_6856_ptr,&local_buffer_00000060);
  }
SystemCore_3eb6d:
  if (lStack0000000000000048 != 0) {
// WARNING: Subroutine does not return
    SystemMemoryProcessor(lStack0000000000000048,0xc);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_160 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3ea1b(void)
void SystemCore_3ea1b(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_EBP;
  int32_t unaff_ESI;
  uint64_t local_buffer_50;
  iVar1 = BufferManager_ProcessData(&local_buffer_00000060,0x100,unaff_EBX);
  iVar2 = SystemDataProcessor(&local_buffer_00000060 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = BufferManager_ProcessData(&local_buffer_00000060 + iVar1,0x100 - iVar1,unaff_EBP);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&local_buffer_00000060 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074bda0(&local_buffer_00000060 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&local_buffer_00000060 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074bda0(&local_buffer_00000060 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&local_buffer_00000060 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemCore_CompressionHandler(&local_buffer_00000060 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&local_buffer_00000060 + iVar1,0x100 - iVar1,&system_temp_buffer);
  SystemCore_CompressionHandler(&local_buffer_00000060 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,5,local_buffer_50,&processed_var_6856_ptr,&local_buffer_00000060);
}
// 函数: void SystemCore_3eb6d(void)
void SystemCore_3eb6d(void)
{
  int64_t local_var_48;
  uint64_t local_var_160;
  if (local_var_48 != 0) {
// WARNING: Subroutine does not return
    SystemMemoryProcessor(local_var_48,0xc);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_160 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3eba7(uint64_t param_1)
void SystemCore_3eba7(uint64_t param_1)
{
// WARNING: Subroutine does not return
  SystemMemoryProcessor(param_1,0xc);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3ebd0(uint64_t param_1)
void SystemCore_3ebd0(uint64_t param_1)
{
  int64_t lVar1;
  int iVar2;
  int8_t stack_array_158 [32];
  int8_t *plocal_var_138;
  int64_t *aplStack_128 [2];
  int8_t stack_array_118 [256];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158;
  iVar2 = SystemCore_52c80(param_1,aplStack_128,0);
  if (iVar2 == 0) {
    lVar1 = aplStack_128[0][0x1b];
    if (lVar1 == 0) {
      iVar2 = 0x1c;
    }
    else {
      iVar2 = SystemCore_43c40(lVar1);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*aplStack_128[0] + 0x18))(aplStack_128[0],1);
        SystemDataProcessor(lVar1);
      }
      if (iVar2 == 0) goto LAB_18073ec81;
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    plocal_var_138 = stack_array_118;
    stack_array_118[0] = 0;
// WARNING: Subroutine does not return
    DataTransformer(iVar2,5,param_1,&processed_var_6840_ptr);
  }
LAB_18073ec81:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3ecb0(uint64_t param_1,int32_t param_2,int32_t param_3)
void SystemCore_3ecb0(uint64_t param_1,int32_t param_2,int32_t param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t stack_array_188 [32];
  int8_t *plocal_var_168;
  int64_t *plStack_158;
  int64_t lStack_150;
  int8_t stack_array_148 [256];
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  lStack_150 = 0;
  iVar1 = SystemCore_52c80(param_1,&plStack_158,&lStack_150);
  if (iVar1 == 0) {
    if (((int)plStack_158[0x22] == 0) || ((int)plStack_158[0x22] == 7)) {
      iVar1 = (**(code **)(*plStack_158 + 0x38))(plStack_158,param_2,param_3);
      if (iVar1 == 0) goto SystemCore_3eddb;
    }
    else {
      iVar1 = 0x2e;
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = BufferManager_ProcessDataEx(stack_array_148,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    BufferManager_Initialize(stack_array_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_168 = stack_array_148;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,5,param_1,&processed_var_6888_ptr);
  }
SystemCore_3eddb:
  if (lStack_150 != 0) {
// WARNING: Subroutine does not return
    SystemMemoryProcessor(lStack_150,0xc);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_188);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3eccd(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4,
void SystemCore_3eccd(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4,
                  uint64_t param_5,int64_t *param_6)
{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t unaff_RBP;
  int64_t in_R11;
  uint64_t unaff_R14;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int64_t lStack0000000000000038;
  uint64_t local_var_140;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R14;
  *(int32_t *)(in_R11 + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x2c) = unaff_XMM6_Dd;
  lStack0000000000000038 = 0;
  iVar1 = SystemCore_52c80(param_1,&param_6,&local_buffer_00000038);
  if (iVar1 == 0) {
    if (((int)param_6[0x22] == 0) || ((int)param_6[0x22] == 7)) {
      iVar1 = (**(code **)(*param_6 + 0x38))(param_6,param_2,param_3);
      if (iVar1 == 0) goto SystemCore_3eddb;
    }
    else {
      iVar1 = 0x2e;
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = BufferManager_ProcessDataEx(&local_buffer_00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    BufferManager_Initialize(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
// WARNING: Subroutine does not return
    DataTransformer(iVar1,5,param_1,&processed_var_6888_ptr,&local_buffer_00000040);
  }
SystemCore_3eddb:
  if (lStack0000000000000038 != 0) {
// WARNING: Subroutine does not return
    SystemMemoryProcessor(lStack0000000000000038,0xc);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3ed53(void)
void SystemCore_3ed53(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_EBP;
  int32_t unaff_ESI;
  iVar1 = BufferManager_ProcessDataEx(&local_buffer_00000040,0x100);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  BufferManager_Initialize(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_EBP);
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,5);
}
// 函数: void SystemCore_3eddb(void)
void SystemCore_3eddb(void)
{
  int64_t local_var_38;
  uint64_t local_var_140;
  if (local_var_38 != 0) {
// WARNING: Subroutine does not return
    SystemMemoryProcessor(local_var_38,0xc);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3edfd(uint64_t param_1)
void SystemCore_3edfd(uint64_t param_1)
{
// WARNING: Subroutine does not return
  SystemMemoryProcessor(param_1,0xc);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3ee30(uint64_t param_1,int32_t param_2)
void SystemCore_3ee30(uint64_t param_1,int32_t param_2)
{
  int iVar1;
  int8_t stack_array_158 [32];
  int8_t *plocal_var_138;
  int64_t *plStack_128;
  int64_t lStack_120;
  int8_t stack_array_118 [256];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158;
  lStack_120 = 0;
  iVar1 = SystemCore_52c80(param_1,&plStack_128,&lStack_120);
  if (iVar1 == 0) {
    if (((int)plStack_128[0x22] == 0) || ((int)plStack_128[0x22] == 7)) {
      iVar1 = (**(code **)(*plStack_128 + 0x118))(plStack_128,param_2);
      if (iVar1 == 0) goto LAB_18073eef2;
    }
    else {
      iVar1 = 0x2e;
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    BufferManager_ProcessData(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,5,param_1,&processed_var_7056_ptr);
  }
LAB_18073eef2:
  if (lStack_120 != 0) {
// WARNING: Subroutine does not return
    SystemMemoryProcessor(lStack_120,0xc);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3ef30(uint64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
void SystemCore_3ef30(uint64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                  int32_t param_5)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t stack_array_188 [32];
  int8_t *plocal_var_168;
  int64_t *plStack_158;
  int64_t lStack_150;
  int8_t stack_array_148 [256];
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  lStack_150 = 0;
  iVar1 = SystemCore_52c80(param_1,&plStack_158,&lStack_150);
  if (iVar1 == 0) {
    if (((int)plStack_158[0x22] == 0) || ((int)plStack_158[0x22] == 7)) {
      plocal_var_168 = (int8_t *)CONCAT44(plocal_var_168._4_4_,param_5);
      iVar1 = (**(code **)(*plStack_158 + 0x30))(plStack_158,param_2,param_3,param_4);
      if (iVar1 == 0) goto SystemCore_3f0d1;
    }
    else {
      iVar1 = 0x2e;
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(stack_array_148,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074bda0(stack_array_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = BufferManager_ProcessData(stack_array_148 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    BufferManager_ProcessData(stack_array_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_5);
    plocal_var_168 = stack_array_148;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,5,param_1,&processed_var_6872_ptr);
  }
SystemCore_3f0d1:
  if (lStack_150 != 0) {
// WARNING: Subroutine does not return
    SystemMemoryProcessor(lStack_150,0xc);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_188);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3ef4d(uint64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
void SystemCore_3ef4d(uint64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                  uint64_t param_5,int64_t *param_6)
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
  int64_t lStack0000000000000038;
  uint64_t local_var_140;
  int32_t local_var_1b0;
  uVar4 = (int32_t)((uint64_t)local_var_20 >> 0x20);
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  lStack0000000000000038 = 0;
  iVar1 = SystemCore_52c80(param_1,&param_6,&local_buffer_00000038);
  if (iVar1 == 0) {
    if (((int)param_6[0x22] == 0) || ((int)param_6[0x22] == 7)) {
      iVar1 = (**(code **)(*param_6 + 0x30))
                        (param_6,param_2,param_3,param_4,CONCAT44(uVar4,local_var_1b0));
      if (iVar1 == 0) goto SystemCore_3f0d1;
    }
    else {
      iVar1 = 0x2e;
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(&local_buffer_00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074bda0(&local_buffer_00000040 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = BufferManager_ProcessData(&local_buffer_00000040 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    BufferManager_ProcessData(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),local_var_1b0
                       );
// WARNING: Subroutine does not return
    DataTransformer(iVar1,5,param_1,&processed_var_6872_ptr,&local_buffer_00000040);
  }
SystemCore_3f0d1:
  if (lStack0000000000000038 != 0) {
// WARNING: Subroutine does not return
    SystemMemoryProcessor(lStack0000000000000038,0xc);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3efed(void)
void SystemCore_3efed(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  int32_t unaff_R14D;
  int32_t unaff_R15D;
  iVar1 = func_0x00018074bda0(&local_buffer_00000040,0x100);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074bda0(&local_buffer_00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = BufferManager_ProcessData(&local_buffer_00000040 + iVar1,0x100 - iVar1,unaff_R14D);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  BufferManager_ProcessData(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_R15D);
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,5);
}
// 函数: void SystemCore_3f0d1(void)
void SystemCore_3f0d1(void)
{
  int64_t local_var_38;
  uint64_t local_var_140;
  if (local_var_38 != 0) {
// WARNING: Subroutine does not return
    SystemMemoryProcessor(local_var_38,0xc);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3f103(uint64_t param_1)
void SystemCore_3f103(uint64_t param_1)
{
// WARNING: Subroutine does not return
  SystemMemoryProcessor(param_1,0xc);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3f130(uint64_t param_1,uint64_t param_2,int8_t param_3,uint64_t param_4)
void SystemCore_3f130(uint64_t param_1,uint64_t param_2,int8_t param_3,uint64_t param_4)
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
  iVar1 = SystemCore_54f10(param_1,&local_var_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = SystemCore_52f00(local_var_140,param_2,param_3,param_4);
    if (iVar1 == 0) goto LAB_18073f20b;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(stack_array_138,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemCore_Cleanup(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_158 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,3,param_1,&processed_var_7136_ptr);
  }
LAB_18073f20b:
  if (lStack_148 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3f240(uint64_t param_1,int32_t param_2,uint64_t param_3)
void SystemCore_3f240(uint64_t param_1,int32_t param_2,uint64_t param_3)
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
  iVar1 = SystemCore_54f10(param_1,&local_var_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = func_0x0001807533d0(local_var_140,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_3f32d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = BufferManager_Initialize(stack_array_138,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_158 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,3,param_1,&processed_var_7280_ptr);
  }
SystemCore_3f32d:
  if (lStack_148 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3f25d(uint64_t param_1,int32_t param_2,uint64_t param_3)
void SystemCore_3f25d(uint64_t param_1,int32_t param_2,uint64_t param_3)
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
  iVar1 = SystemCore_54f10(param_1,&local_buffer_00000038,&local_buffer_00000030);
  if (iVar1 == 0) {
    iVar1 = func_0x0001807533d0(local_var_38,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_3f32d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = BufferManager_Initialize(&local_buffer_00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
// WARNING: Subroutine does not return
    DataTransformer(iVar1,3,param_1,&processed_var_7280_ptr,&local_buffer_00000040);
  }
SystemCore_3f32d:
  if (lStack0000000000000030 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3f2b5(void)
void SystemCore_3f2b5(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  iVar1 = BufferManager_Initialize(&local_buffer_00000040,0x100,unaff_EBX);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074bda0(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,3);
}
// 函数: void SystemCore_3f32d(void)
void SystemCore_3f32d(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3f34f(void)
void SystemCore_3f34f(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3f370(uint64_t param_1,int32_t param_2,uint64_t param_3)
void SystemCore_3f370(uint64_t param_1,int32_t param_2,uint64_t param_3)
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
  iVar1 = SystemCore_54f10(param_1,&local_var_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = func_0x0001807534d0(local_var_140,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_3f45d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = BufferManager_Initialize(stack_array_138,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_158 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,3,param_1,&processed_var_7192_ptr);
  }
SystemCore_3f45d:
  if (lStack_148 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3f38d(uint64_t param_1,int32_t param_2,uint64_t param_3)
void SystemCore_3f38d(uint64_t param_1,int32_t param_2,uint64_t param_3)
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
  iVar1 = SystemCore_54f10(param_1,&local_buffer_00000038,&local_buffer_00000030);
  if (iVar1 == 0) {
    iVar1 = func_0x0001807534d0(local_var_38,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_3f45d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = BufferManager_Initialize(&local_buffer_00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
// WARNING: Subroutine does not return
    DataTransformer(iVar1,3,param_1,&processed_var_7192_ptr,&local_buffer_00000040);
  }
SystemCore_3f45d:
  if (lStack0000000000000030 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3f3e5(void)
void SystemCore_3f3e5(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  iVar1 = BufferManager_Initialize(&local_buffer_00000040,0x100,unaff_EBX);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074bda0(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,3);
}
// 函数: void SystemCore_3f45d(void)
void SystemCore_3f45d(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3f47f(void)
void SystemCore_3f47f(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3f4a0(uint64_t param_1,uint64_t param_2)
void SystemCore_3f4a0(uint64_t param_1,uint64_t param_2)
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
  iVar1 = SystemCore_54f10(param_1,&local_var_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = func_0x000180753560(local_var_120,param_2);
    if (iVar1 == 0) goto LAB_18073f53a;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    UIAnimationController(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,3,param_1,&processed_var_7248_ptr);
  }
LAB_18073f53a:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3f570(uint64_t param_1,uint64_t param_2)
void SystemCore_3f570(uint64_t param_1,uint64_t param_2)
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
  iVar1 = SystemCore_54f10(param_1,&local_var_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = func_0x000180753580(local_var_120,param_2);
    if (iVar1 == 0) goto LAB_18073f60a;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    UIAnimationController(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,3,param_1,&processed_var_7160_ptr);
  }
LAB_18073f60a:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3f640(uint64_t param_1,uint64_t param_2)
void SystemCore_3f640(uint64_t param_1,uint64_t param_2)
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
  iVar1 = SystemCore_54f10(param_1,&local_var_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = func_0x000180753600(local_var_120,param_2);
    if (iVar1 == 0) goto LAB_18073f6da;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    func_0x00018074bda0(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,3,param_1,&processed_var_7216_ptr);
  }
LAB_18073f6da:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address