#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 04_ui_system_part118.c - 35 个函数
// 函数: void SystemCore_39a6d(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void SystemCore_39a6d(uint64_t param_1,uint64_t param_2,uint64_t param_3)
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
    iVar1 = func_0x000180746360(local_var_38,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_39b3f;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = SystemCore_CompressionHandler(&local_buffer_00000040,0x100,param_2);
    iVar3 = DataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    UIAnimationController(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_4968_ptr,&local_buffer_00000040);
  }
SystemCore_39b3f:
  if (lStack0000000000000030 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_39ac7(void)
void SystemCore_39ac7(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  iVar1 = SystemCore_CompressionHandler(&local_buffer_00000040,0x100);
  iVar2 = DataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  UIAnimationController(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}
// 函数: void SystemCore_39b3f(void)
void SystemCore_39b3f(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_39b61(void)
void SystemCore_39b61(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_39b90(uint64_t param_1,int32_t param_2,uint64_t param_3)
void SystemCore_39b90(uint64_t param_1,int32_t param_2,uint64_t param_3)
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
    iVar1 = SystemCore_46390(local_var_140,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_39c7d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = BufferManager_ProcessData(stack_array_138,0x100,param_2);
    iVar3 = DataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    BufferManager_MigrateMetadata(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_158 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5192_ptr);
  }
SystemCore_39c7d:
  if (lStack_148 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_39bad(uint64_t param_1,int32_t param_2,uint64_t param_3)
void SystemCore_39bad(uint64_t param_1,int32_t param_2,uint64_t param_3)
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
    iVar1 = SystemCore_46390(local_var_38,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_39c7d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = BufferManager_ProcessData(&local_buffer_00000040,0x100,param_2);
    iVar3 = DataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    BufferManager_MigrateMetadata(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5192_ptr,&local_buffer_00000040);
  }
SystemCore_39c7d:
  if (lStack0000000000000030 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_39c05(void)
void SystemCore_39c05(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  iVar1 = BufferManager_ProcessData(&local_buffer_00000040,0x100,unaff_EBX);
  iVar2 = DataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  BufferManager_MigrateMetadata(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}
// 函数: void SystemCore_39c7d(void)
void SystemCore_39c7d(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_39c9f(void)
void SystemCore_39c9f(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_39cc0(uint64_t param_1,int32_t param_2,uint64_t param_3)
void SystemCore_39cc0(uint64_t param_1,int32_t param_2,uint64_t param_3)
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
    iVar1 = SystemCore_463d0(local_var_140,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_39dad;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = BufferManager_Initialize(stack_array_138,0x100,param_2);
    iVar3 = DataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    BufferManager_MigrateMetadata(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_158 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5712_ptr);
  }
SystemCore_39dad:
  if (lStack_148 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_39cdd(uint64_t param_1,int32_t param_2,uint64_t param_3)
void SystemCore_39cdd(uint64_t param_1,int32_t param_2,uint64_t param_3)
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
    iVar1 = SystemCore_463d0(local_var_38,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_39dad;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = BufferManager_Initialize(&local_buffer_00000040,0x100,param_2);
    iVar3 = DataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    BufferManager_MigrateMetadata(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5712_ptr,&local_buffer_00000040);
  }
SystemCore_39dad:
  if (lStack0000000000000030 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_39d35(void)
void SystemCore_39d35(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  iVar1 = BufferManager_Initialize(&local_buffer_00000040,0x100,unaff_EBX);
  iVar2 = DataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  BufferManager_MigrateMetadata(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}
// 函数: void SystemCore_39dad(void)
void SystemCore_39dad(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_39dcf(void)
void SystemCore_39dcf(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_39df0(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4,
void SystemCore_39df0(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4,
                  int32_t param_5)
{
  int iVar1;
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
    plocal_var_158 = (int8_t *)CONCAT44(plocal_var_158._4_4_,param_5);
    iVar1 = SystemCore_4a420(local_var_140,param_2,param_3,param_4);
    if (iVar1 == 0) goto LAB_180739e8e;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    plocal_var_158 = stack_array_138;
    stack_array_138[0] = 0;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5432_ptr);
  }
LAB_180739e8e:
  if (lStack_148 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_39ec0(uint64_t param_1,uint64_t param_2)
void SystemCore_39ec0(uint64_t param_1,uint64_t param_2)
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
    iVar1 = func_0x000180746440(local_var_120,param_2);
    if (iVar1 == 0) goto LAB_180739f5a;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    UIAnimationController(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_4848_ptr);
  }
LAB_180739f5a:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_39f90(uint64_t param_1,int32_t param_2,uint64_t param_3,int32_t param_4,
void SystemCore_39f90(uint64_t param_1,int32_t param_2,uint64_t param_3,int32_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8)
{
  int iVar1;
  int8_t stack_array_1c8 [32];
  int8_t *plocal_var_1a8;
  uint64_t local_var_1a0;
  uint64_t local_var_198;
  uint64_t local_var_190;
  uint64_t local_var_188;
  int64_t lStack_178;
  uint64_t local_var_170;
  uint64_t local_var_168;
  int8_t stack_array_158 [256];
  uint64_t local_var_58;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1c8;
  lStack_178 = 0;
  local_var_168 = param_1;
  iVar1 = SystemState_Manager(param_1,&local_var_170,&lStack_178);
  if (iVar1 == 0) {
    local_var_190 = param_8;
    local_var_198 = param_7;
    local_var_1a0 = param_6;
    plocal_var_1a8 = (int8_t *)param_5;
    iVar1 = SystemCore_46460(local_var_170,param_2,param_3,param_4);
    if (iVar1 == 0) goto LAB_18073a089;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    local_var_188 = param_8;
    local_var_190 = param_7;
    local_var_198 = param_6;
    local_var_1a0 = param_5;
    plocal_var_1a8 = (int8_t *)CONCAT44(plocal_var_1a8._4_4_,param_4);
    SystemCore_389f0(stack_array_158,0x100,param_2,param_3);
    plocal_var_1a8 = stack_array_158;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,local_var_168,&processed_var_4800_ptr);
  }
LAB_18073a089:
  if (lStack_178 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_1c8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3a0c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void SystemCore_3a0c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
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
  if (((iVar1 != 0) ||
      (iVar1 = func_0x000180746640(stack_array_158[0],param_2,param_3,param_4), iVar1 != 0)) &&
     ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    iVar2 = SystemCore_4bdb0(stack_array_148,0x100,param_2);
    iVar3 = DataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemCore_4bdb0(stack_array_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = DataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemCore_4bdb0(stack_array_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
    plocal_var_168 = stack_array_148;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5544_ptr);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_188);
}
// 函数: void SystemCore_3a12e(void)
void SystemCore_3a12e(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  iVar1 = SystemCore_4bdb0(&local_buffer_00000040,0x100);
  iVar2 = DataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemCore_4bdb0(&local_buffer_00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = DataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  SystemCore_4bdb0(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}
// 函数: void SystemCore_3a1dc(void)
void SystemCore_3a1dc(void)
{
  uint64_t local_var_140;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_73A200(uint64_t param_1,uint64_t param_2)
void SystemCore_73A200(uint64_t param_1,uint64_t param_2)
{
  int iVar1;
  int8_t stack_array_158 [32];
  int8_t *plocal_var_138;
  uint64_t stack_array_128 [2];
  int8_t stack_array_118 [256];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158;
  iVar1 = SystemState_Manager(param_1,stack_array_128,0);
  if (((iVar1 != 0) || (iVar1 = func_0x0001807466b0(stack_array_128[0],param_2), iVar1 != 0)) &&
     ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    BufferManager_MigrateMetadata(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5744_ptr);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3a2c0(uint64_t param_1,uint64_t param_2)
void SystemCore_3a2c0(uint64_t param_1,uint64_t param_2)
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
    iVar1 = SystemCore_466e0(local_var_120,param_2);
    if (iVar1 == 0) goto LAB_18073a35a;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    UIAnimationController(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_4776_ptr);
  }
LAB_18073a35a:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3a390(uint64_t param_1,int32_t param_2,uint64_t param_3)
void SystemCore_3a390(uint64_t param_1,int32_t param_2,uint64_t param_3)
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
    iVar1 = SystemCore_46780(local_var_140,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_3a47d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = BufferManager_Initialize(stack_array_138,0x100,param_2);
    iVar3 = DataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    UIAnimationController(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_158 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5112_ptr);
  }
SystemCore_3a47d:
  if (lStack_148 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3a3ad(uint64_t param_1,int32_t param_2,uint64_t param_3)
void SystemCore_3a3ad(uint64_t param_1,int32_t param_2,uint64_t param_3)
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
    iVar1 = SystemCore_46780(local_var_38,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_3a47d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = BufferManager_Initialize(&local_buffer_00000040,0x100,param_2);
    iVar3 = DataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    UIAnimationController(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5112_ptr,&local_buffer_00000040);
  }
SystemCore_3a47d:
  if (lStack0000000000000030 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3a405(void)
void SystemCore_3a405(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  iVar1 = BufferManager_Initialize(&local_buffer_00000040,0x100,unaff_EBX);
  iVar2 = DataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  UIAnimationController(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}
// 函数: void SystemCore_3a47d(void)
void SystemCore_3a47d(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3a49f(void)
void SystemCore_3a49f(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3a4c0(uint64_t param_1,uint64_t param_2)
void SystemCore_3a4c0(uint64_t param_1,uint64_t param_2)
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
    iVar1 = SystemCore_46840(local_var_120,param_2);
    if (iVar1 == 0) goto LAB_18073a55a;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    BufferManager_MigrateMetadata(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_4752_ptr);
  }
LAB_18073a55a:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3a590(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4)
void SystemCore_3a590(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4)
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
    iVar1 = func_0x000180746880(local_var_150,param_2,param_3,param_4);
    if (iVar1 == 0) goto SystemCore_3a6c1;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = BufferManager_Initialize(stack_array_148,0x100,param_2);
    iVar3 = DataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = BufferManager_Initialize(stack_array_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = DataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemCore_CompressionHandler(stack_array_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
    plocal_var_168 = stack_array_148;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5136_ptr);
  }
SystemCore_3a6c1:
  if (lStack_158 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_188);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3a5ad(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4,
void SystemCore_3a5ad(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4,
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
    iVar1 = func_0x000180746880(param_7,param_2,param_3,param_4);
    if (iVar1 == 0) goto SystemCore_3a6c1;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = BufferManager_Initialize(&local_buffer_00000040,0x100,param_2);
    iVar3 = DataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = BufferManager_Initialize(&local_buffer_00000040 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = DataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemCore_CompressionHandler(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5136_ptr,&local_buffer_00000040);
  }
SystemCore_3a6c1:
  if (param_6 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3a613(void)
void SystemCore_3a613(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_EBP;
  int32_t unaff_ESI;
  iVar1 = BufferManager_Initialize(&local_buffer_00000040,0x100,unaff_EBX);
  iVar2 = DataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = BufferManager_Initialize(&local_buffer_00000040 + iVar1,0x100 - iVar1,unaff_EBP);
  iVar1 = iVar1 + iVar2;
  iVar2 = DataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  SystemCore_CompressionHandler(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}
// 函数: void SystemCore_3a6c1(void)
void SystemCore_3a6c1(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3a6eb(void)
void SystemCore_3a6eb(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3a710(uint64_t param_1,int32_t param_2,uint64_t param_3)
void SystemCore_3a710(uint64_t param_1,int32_t param_2,uint64_t param_3)
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
    iVar1 = SystemCore_468d0(local_var_140,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_3a7fd;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = BufferManager_Initialize(stack_array_138,0x100,param_2);
    iVar3 = DataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemCore_CompressionHandler(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_158 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5856_ptr);
  }
SystemCore_3a7fd:
  if (lStack_148 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3a72d(uint64_t param_1,int32_t param_2,uint64_t param_3)
void SystemCore_3a72d(uint64_t param_1,int32_t param_2,uint64_t param_3)
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
    iVar1 = SystemCore_468d0(local_var_38,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_3a7fd;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = BufferManager_Initialize(&local_buffer_00000040,0x100,param_2);
    iVar3 = DataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemCore_CompressionHandler(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
// WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5856_ptr,&local_buffer_00000040);
  }
SystemCore_3a7fd:
  if (lStack0000000000000030 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}