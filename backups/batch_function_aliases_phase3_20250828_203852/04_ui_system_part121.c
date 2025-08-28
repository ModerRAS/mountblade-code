#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 04_ui_system_part121.c - 34 个函数
// 函数: void SystemCore_3c111(void)
void SystemCore_3c111(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3c133(void)
void SystemCore_3c133(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3c160(uint64_t param_1,int64_t param_2,int32_t param_3)
void SystemCore_3c160(uint64_t param_1,int64_t param_2,int32_t param_3)
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
  iVar1 = DataSerializer_ProcessFields(param_1,&plStack_140,&lStack_148);
  if (iVar1 == 0) {
    param_2 = param_2 << 0x14;
    iVar1 = (**(code **)(*plStack_140 + 0xf0))(plStack_140,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_3c258;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = BufferManager_ParseMetadata(stack_array_138,0x100,param_2);
    iVar3 = DataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    BufferManager_ProcessDataEx(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_158 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6544_ptr);
  }
SystemCore_3c258:
  if (lStack_148 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3c17d(uint64_t param_1,int64_t param_2,int32_t param_3)
void SystemCore_3c17d(uint64_t param_1,int64_t param_2,int32_t param_3)
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
  iVar1 = DataSerializer_ProcessFields(param_1,&local_buffer_00000038,&local_buffer_00000030);
  if (iVar1 == 0) {
    param_2 = param_2 << 0x14;
    iVar1 = (**(code **)(*local_var_38 + 0xf0))(local_var_38,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_3c258;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = BufferManager_ParseMetadata(&local_buffer_00000040,0x100,param_2);
    iVar3 = DataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    BufferManager_ProcessDataEx(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6544_ptr,&local_buffer_00000040);
  }
SystemCore_3c258:
  if (lStack0000000000000030 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3c1e0(void)
void SystemCore_3c1e0(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  iVar1 = BufferManager_ParseMetadata(&local_buffer_00000040,0x100);
  iVar2 = DataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  BufferManager_ProcessDataEx(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,4);
}
// 函数: void SystemCore_3c258(void)
void SystemCore_3c258(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3c27a(void)
void SystemCore_3c27a(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3c2a0(uint64_t param_1,uint64_t param_2)
void SystemCore_3c2a0(uint64_t param_1,uint64_t param_2)
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
  iVar1 = DataSerializer_ProcessFields(param_1,&plStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_120 + 0x40))(plStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073c33b;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    SystemCore_4bac0(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6176_ptr);
  }
LAB_18073c33b:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UltraHighFreq_PhysicsEngine1(uint64_t param_1,int32_t param_2,uint64_t param_3)
void UltraHighFreq_PhysicsEngine1(uint64_t param_1,int32_t param_2,uint64_t param_3)
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
  iVar1 = DataSerializer_ProcessFields(param_1,&plStack_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_140 + 0x120))(plStack_140,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_3c471;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = BufferManager_Initialize(stack_array_138,0x100,param_2);
    iVar3 = DataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_158 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6656_ptr);
  }
SystemCore_3c471:
  if (lStack_148 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3c39d(uint64_t param_1,int32_t param_2,uint64_t param_3)
void SystemCore_3c39d(uint64_t param_1,int32_t param_2,uint64_t param_3)
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
  iVar1 = DataSerializer_ProcessFields(param_1,&local_buffer_00000038,&local_buffer_00000030);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*local_var_38 + 0x120))(local_var_38,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_3c471;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = BufferManager_Initialize(&local_buffer_00000040,0x100,param_2);
    iVar3 = DataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6656_ptr,&local_buffer_00000040);
  }
SystemCore_3c471:
  if (lStack0000000000000030 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3c3f9(void)
void SystemCore_3c3f9(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  iVar1 = BufferManager_Initialize(&local_buffer_00000040,0x100,unaff_EBX);
  iVar2 = DataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074bda0(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,4);
}
// 函数: void SystemCore_3c471(void)
void SystemCore_3c471(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3c493(void)
void SystemCore_3c493(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_MathCalculator(uint64_t param_1,uint64_t *param_2,uint64_t *param_3)
void UtilitiesSystem_MathCalculator(uint64_t param_1,uint64_t *param_2,uint64_t *param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t stack_array_178 [32];
  int8_t *plocal_var_158;
  int64_t *aplStack_148 [2];
  int8_t stack_array_138 [256];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  iVar1 = DataSerializer_ProcessFields(param_1,aplStack_148,0);
  if ((iVar1 == 0) &&
     (iVar1 = (**(code **)(*aplStack_148[0] + 0xd8))(aplStack_148[0],param_2,param_3), iVar1 == 0))
  {
    if (param_2 != (uint64_t *)0x0) {
      *param_2 = *param_2 >> 0x14;
    }
    if (param_3 != (uint64_t *)0x0) {
      *param_3 = *param_3 >> 0x14;
    }
    iVar1 = DataSerializer_ProcessFields(param_1,aplStack_148,0);
    if (iVar1 == 0) goto LAB_18073c5c9;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = SystemCore_4bdf0(stack_array_138,0x100,param_2);
    iVar3 = DataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemCore_4bdf0(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_158 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6448_ptr);
  }
LAB_18073c5c9:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// 函数: void SystemCore_3c54f(void)
void SystemCore_3c54f(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  iVar1 = SystemCore_4bdf0(&local_buffer_00000040,0x100);
  iVar2 = DataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  SystemCore_4bdf0(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,4);
}
// 函数: void SystemCore_3c5c7(void)
void SystemCore_3c5c7(void)
{
  uint64_t local_var_140;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3c5f0(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void SystemCore_3c5f0(uint64_t param_1,uint64_t param_2,uint64_t param_3)
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
  iVar1 = DataSerializer_ProcessFields(param_1,&plStack_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_140 + 0x138))(plStack_140,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_3c6e3;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(stack_array_138,0x100,param_2);
    iVar3 = DataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    UIAnimationController(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_158 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6736_ptr);
  }
SystemCore_3c6e3:
  if (lStack_148 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3c60d(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void SystemCore_3c60d(uint64_t param_1,uint64_t param_2,uint64_t param_3)
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
  iVar1 = DataSerializer_ProcessFields(param_1,&local_buffer_00000038,&local_buffer_00000030);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*local_var_38 + 0x138))(local_var_38,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_3c6e3;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(&local_buffer_00000040,0x100,param_2);
    iVar3 = DataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    UIAnimationController(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6736_ptr,&local_buffer_00000040);
  }
SystemCore_3c6e3:
  if (lStack0000000000000030 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3c66b(void)
void SystemCore_3c66b(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  iVar1 = func_0x00018074bda0(&local_buffer_00000040,0x100);
  iVar2 = DataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  UIAnimationController(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,4);
}
// 函数: void SystemCore_3c6e3(void)
void SystemCore_3c6e3(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3c705(void)
void SystemCore_3c705(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3c730(uint64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4)
void SystemCore_3c730(uint64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4)
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
  iVar1 = DataSerializer_ProcessFields(param_1,&plStack_150,&lStack_158);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_150 + 0xe8))(plStack_150,param_2,param_3,param_4);
    if (iVar1 == 0) {
      if (param_2 != (uint64_t *)0x0) {
        *param_2 = *param_2 >> 0x14;
      }
      if (param_3 != (uint64_t *)0x0) {
        *param_3 = *param_3 >> 0x14;
      }
      goto SystemCore_3c87f;
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = SystemCore_4bdf0(stack_array_148,0x100,param_2);
    iVar3 = DataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemCore_4bdf0(stack_array_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = DataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemCore_4be30(stack_array_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
    plocal_var_168 = stack_array_148;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6512_ptr);
  }
SystemCore_3c87f:
  if (lStack_158 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_188);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3c74d(uint64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4,
void SystemCore_3c74d(uint64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4,
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
  iVar1 = DataSerializer_ProcessFields(param_1,&param_7,&param_6);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_7 + 0xe8))(param_7,param_2,param_3,param_4);
    if (iVar1 == 0) {
      if (param_2 != (uint64_t *)0x0) {
        *param_2 = *param_2 >> 0x14;
      }
      if (param_3 != (uint64_t *)0x0) {
        *param_3 = *param_3 >> 0x14;
      }
      goto SystemCore_3c87f;
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = SystemCore_4bdf0(&local_buffer_00000040,0x100,param_2);
    iVar3 = DataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemCore_4bdf0(&local_buffer_00000040 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = DataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemCore_4be30(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6512_ptr,&local_buffer_00000040);
  }
SystemCore_3c87f:
  if (param_6 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3c7d1(void)
void SystemCore_3c7d1(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  iVar1 = SystemCore_4bdf0(&local_buffer_00000040,0x100);
  iVar2 = DataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemCore_4bdf0(&local_buffer_00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = DataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  SystemCore_4be30(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,4);
}
// 函数: void SystemCore_3c87f(void)
void SystemCore_3c87f(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_3c8a9(void)
void SystemCore_3c8a9(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3c8d0(uint64_t param_1,uint64_t param_2)
void SystemCore_3c8d0(uint64_t param_1,uint64_t param_2)
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
  iVar1 = DataSerializer_ProcessFields(param_1,&plStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_120 + 0x98))(plStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073c96e;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    SystemCore_CompressionHandler(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6360_ptr);
  }
LAB_18073c96e:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3c9b0(uint64_t param_1,uint64_t param_2)
void SystemCore_3c9b0(uint64_t param_1,uint64_t param_2)
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
  iVar1 = DataSerializer_ProcessFields(param_1,&plStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_120 + 0x18))(plStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073ca4b;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    SystemCore_4be30(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6048_ptr);
  }
LAB_18073ca4b:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3ca90(uint64_t param_1,uint64_t param_2)
void SystemCore_3ca90(uint64_t param_1,uint64_t param_2)
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
  iVar1 = DataSerializer_ProcessFields(param_1,&plStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_120 + 0x50))(plStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073cb2b;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    SystemCore_4bac0(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6240_ptr);
  }
LAB_18073cb2b:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3cb70(uint64_t param_1,uint64_t param_2)
void SystemCore_3cb70(uint64_t param_1,uint64_t param_2)
{
  int iVar1;
  int8_t stack_array_158 [32];
  int8_t *plocal_var_138;
  uint64_t *aplocal_var_128 [2];
  int8_t stack_array_118 [256];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158;
  iVar1 = DataSerializer_ProcessFields(param_1,aplocal_var_128,0);
  if (((iVar1 != 0) || (iVar1 = (**(code **)*aplocal_var_128[0])(aplocal_var_128[0],param_2), iVar1 != 0))
     && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    func_0x00018074bda0(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_5960_ptr);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3cc30(uint64_t param_1,uint64_t param_2)
void SystemCore_3cc30(uint64_t param_1,uint64_t param_2)
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
  iVar1 = DataSerializer_ProcessFields(param_1,&plStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_120 + 0x38))(plStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073cccb;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    SystemCore_4be30(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6144_ptr);
  }
LAB_18073cccb:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3cd10(uint64_t param_1,int8_t *param_2)
void SystemCore_3cd10(uint64_t param_1,int8_t *param_2)
{
  int iVar1;
  int8_t stack_array_158 [32];
  int8_t *plocal_var_138;
  int64_t lStack_128;
  int64_t *plStack_120;
  int8_t stack_array_118 [256];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158;
  if (param_2 != (int8_t *)0x0) {
    *param_2 = 0;
  }
  lStack_128 = 0;
  iVar1 = DataSerializer_ProcessFields(param_1,&plStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_120 + 0xa8))(plStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073cdb6;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    SystemCore_4be30(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6384_ptr);
  }
LAB_18073cdb6:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3cdf0(uint64_t param_1,uint64_t param_2)
void SystemCore_3cdf0(uint64_t param_1,uint64_t param_2)
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
  iVar1 = DataSerializer_ProcessFields(param_1,&plStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_120 + 0x118))(plStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073ce8e;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    func_0x00018074bda0(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6704_ptr);
  }
LAB_18073ce8e:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_3ced0(uint64_t param_1,int64_t param_2,int64_t param_3)
void SystemCore_3ced0(uint64_t param_1,int64_t param_2,int64_t param_3)
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
  iVar1 = DataSerializer_ProcessFields(param_1,&plStack_140,&lStack_148);
  if (iVar1 == 0) {
    param_2 = param_2 << 0x14;
    param_3 = param_3 << 0x14;
    iVar1 = (**(code **)(*plStack_140 + 0x100))(plStack_140,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_3cfcb;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = BufferManager_ParseMetadata(stack_array_138,0x100,param_2);
    iVar3 = DataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    BufferManager_ParseMetadata(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_158 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,4,param_1,&processed_var_6616_ptr);
  }
SystemCore_3cfcb:
  if (lStack_148 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address