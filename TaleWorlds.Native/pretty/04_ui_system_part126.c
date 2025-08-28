#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 04_ui_system_part126.c - 35 个函数
// 函数: void SystemCore_406e0(uint64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
void SystemCore_406e0(uint64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,int32_t param_6)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t stack_array_198 [32];
  int8_t *plocal_var_178;
  int32_t local_var_170;
  uint64_t stack_array_168 [2];
  int8_t stack_array_158 [256];
  uint64_t local_var_58;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_198;
  iVar1 = UISystem_LayoutManager(param_1,stack_array_168,0);
  if (iVar1 == 0) {
    local_var_170 = param_6;
    plocal_var_178 = (int8_t *)param_5;
    iVar1 = SystemCore_5f090(stack_array_168[0],param_2,param_3,param_4);
    if (iVar1 == 0) goto LAB_180740886;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = SystemFunction_00018074b7d0(stack_array_158,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_158 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = BufferManager_ResizeBuffer(stack_array_158 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(stack_array_158 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemCore_CompressionHandler(stack_array_158 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(stack_array_158 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(stack_array_158 + iVar2,0x100 - iVar2,param_5);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(stack_array_158 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemFunction_00018074b7d0(stack_array_158 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_6);
    plocal_var_178 = stack_array_158;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,7,param_1,&processed_var_7840_ptr);
  }
LAB_180740886:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_198);
}
// 函数: void SystemCore_4076a(void)
void SystemCore_4076a(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  int32_t unaff_R12D;
  iVar1 = SystemFunction_00018074b7d0(&local_buffer_00000040,0x100,unaff_EBX);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = BufferManager_ResizeBuffer(&local_buffer_00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemCore_CompressionHandler(&local_buffer_00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  SystemFunction_00018074b7d0(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_R12D);
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,7);
}
// 函数: void SystemCore_40884(void)
void SystemCore_40884(void)
{
  uint64_t local_var_140;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_408b0(uint64_t param_1,int32_t param_2,uint64_t param_3)
void SystemCore_408b0(uint64_t param_1,int32_t param_2,uint64_t param_3)
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
  iVar1 = UISystem_LayoutManager(param_1,stack_array_148,0);
  if (((iVar1 != 0) || (iVar1 = SystemFunction_00018075f1a0(stack_array_148[0],param_2,param_3), iVar1 != 0)) &&
     ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    iVar2 = SystemFunction_00018074b7d0(stack_array_138,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    BufferManager_ResizeBuffer(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_158 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,7,param_1,&processed_var_7888_ptr);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// 函数: void SystemCore_40910(void)
void SystemCore_40910(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  iVar1 = SystemFunction_00018074b7d0(&local_buffer_00000040,0x100,unaff_EBX);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  BufferManager_ResizeBuffer(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,7);
}
// 函数: void SystemCore_40988(void)
void SystemCore_40988(void)
{
  uint64_t local_var_140;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_409b0(uint64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
void SystemCore_409b0(uint64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
                  int32_t param_5)
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
  iVar1 = UISystem_LayoutManager(param_1,stack_array_158,0);
  if (iVar1 == 0) {
    plocal_var_168 = (int8_t *)CONCAT44(plocal_var_168._4_4_,param_5);
    iVar1 = SystemCore_5f1e0(stack_array_158[0],param_2,param_3,param_4);
    if (iVar1 == 0) goto LAB_180740b11;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = SystemFunction_00018074b7d0(stack_array_148,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = UIAnimationController(stack_array_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemFunction_00018074b7d0(stack_array_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_5);
    plocal_var_168 = stack_array_148;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,7,param_1,&processed_var_7816_ptr);
  }
LAB_180740b11:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_188);
}
// 函数: void SystemCore_40a2b(void)
void SystemCore_40a2b(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  int32_t unaff_R15D;
  iVar1 = SystemFunction_00018074b7d0(&local_buffer_00000040,0x100,unaff_EBX);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = UIAnimationController(&local_buffer_00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  SystemFunction_00018074b7d0(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_R15D);
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,7);
}
// 函数: void SystemCore_40b0f(void)
void SystemCore_40b0f(void)
{
  uint64_t local_var_140;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_40b40(uint64_t param_1,uint64_t param_2)
void SystemCore_40b40(uint64_t param_1,uint64_t param_2)
{
  int iVar1;
  int8_t stack_array_158 [32];
  int8_t *plocal_var_138;
  uint64_t stack_array_128 [2];
  int8_t stack_array_118 [256];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158;
  iVar1 = UISystem_LayoutManager(param_1,stack_array_128,0);
  if (((iVar1 != 0) || (iVar1 = SystemFunction_00018075f350(stack_array_128[0],param_2), iVar1 != 0)) &&
     ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    BufferManager_ResizeBuffer(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,7,param_1,&processed_var_7560_ptr);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_40c00(uint64_t param_1,uint64_t param_2)
void SystemCore_40c00(uint64_t param_1,uint64_t param_2)
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
  iVar1 = UISystem_LayoutManager(param_1,&local_var_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = SystemFunction_00018075f440(local_var_120,param_2);
    if (iVar1 == 0) goto LAB_180740c9a;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    BufferManager_ResizeBuffer(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,7,param_1,&processed_var_7912_ptr);
  }
LAB_180740c9a:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_40cd0(uint64_t param_1,uint64_t param_2)
void SystemCore_40cd0(uint64_t param_1,uint64_t param_2)
{
  int iVar1;
  int8_t stack_array_158 [32];
  int8_t *plocal_var_138;
  uint64_t stack_array_128 [2];
  int8_t stack_array_118 [256];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158;
  iVar1 = UISystem_LayoutManager(param_1,stack_array_128,0);
  if (((iVar1 != 0) || (iVar1 = SystemFunction_00018075f460(stack_array_128[0],param_2), iVar1 != 0)) &&
     ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    BufferManager_ResizeBuffer(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,7,param_1,&processed_var_7944_ptr);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_40d90(uint64_t param_1)
void SystemCore_40d90(uint64_t param_1)
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
  iVar1 = UISystem_LayoutManager(param_1,&plStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_120 + 0x10))();
    if (iVar1 == 0) goto LAB_180740e13;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    plocal_var_138 = stack_array_118;
    stack_array_118[0] = 0;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,7,param_1,&processed_var_7544_ptr);
  }
LAB_180740e13:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_40e50(uint64_t param_1)
void SystemCore_40e50(uint64_t param_1)
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
  iVar1 = UISystem_LayoutManager(param_1,&local_var_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = SystemCore_603e0(local_var_120);
    if (iVar1 == 0) goto LAB_180740ed2;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    plocal_var_138 = stack_array_118;
    stack_array_118[0] = 0;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,7,param_1,&processed_var_7680_ptr);
  }
LAB_180740ed2:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_40f10(uint64_t param_1,int8_t param_2)
void SystemCore_40f10(uint64_t param_1,int8_t param_2)
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
  iVar1 = UISystem_LayoutManager(param_1,&local_var_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = SystemCore_Initializer(local_var_120,param_2,1);
    if (iVar1 == 0) goto LAB_180740faf;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    SystemCore_Cleanup(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,7,param_1,&processed_var_7624_ptr);
  }
LAB_180740faf:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_40ff0(uint64_t param_1,int8_t param_2)
void SystemCore_40ff0(uint64_t param_1,int8_t param_2)
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
  iVar1 = UISystem_LayoutManager(param_1,&local_var_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = SystemFunction_0001807621a0(local_var_120,param_2);
    if (iVar1 == 0) goto LAB_18074108c;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    SystemCore_Cleanup(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,7,param_1,&processed_var_7640_ptr);
  }
LAB_18074108c:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_410d0(uint64_t param_1,uint64_t param_2)
void SystemCore_410d0(uint64_t param_1,uint64_t param_2)
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
  iVar1 = UISystem_LayoutManager(param_1,&local_var_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = SystemFunction_0001807621e0(local_var_120,param_2);
    if (iVar1 == 0) goto LAB_18074116a;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    BufferManager_ResizeBuffer(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,7,param_1,&processed_var_7696_ptr);
  }
LAB_18074116a:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_411a0(uint64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4)
void SystemCore_411a0(uint64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4)
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
  iVar1 = UISystem_LayoutManager(param_1,&local_var_150,&lStack_158);
  if (iVar1 == 0) {
    iVar1 = SystemCore_621f0(local_var_150,param_2,param_3,param_4);
    if (iVar1 == 0) goto SystemCore_412d1;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = SystemFunction_00018074b800(stack_array_148,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemFunction_00018074b7d0(stack_array_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemFunction_00018074b7d0(stack_array_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
    plocal_var_168 = stack_array_148;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,7,param_1,&processed_var_7656_ptr);
  }
SystemCore_412d1:
  if (lStack_158 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_188);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_411bd(uint64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
void SystemCore_411bd(uint64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
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
  iVar1 = UISystem_LayoutManager(param_1,&param_7,&param_6);
  if (iVar1 == 0) {
    iVar1 = SystemCore_621f0(param_7,param_2,param_3,param_4);
    if (iVar1 == 0) goto SystemCore_412d1;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = SystemFunction_00018074b800(&local_buffer_00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemFunction_00018074b7d0(&local_buffer_00000040 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemFunction_00018074b7d0(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
// WARNING: Subroutine does not return
    DataTransformer(iVar1,7,param_1,&processed_var_7656_ptr,&local_buffer_00000040);
  }
SystemCore_412d1:
  if (param_6 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_41223(void)
void SystemCore_41223(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_EBP;
  int32_t unaff_ESI;
  int32_t unaff_R14D;
  iVar1 = SystemFunction_00018074b800(&local_buffer_00000040,0x100,unaff_EBX);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemFunction_00018074b7d0(&local_buffer_00000040 + iVar1,0x100 - iVar1,unaff_EBP);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  SystemFunction_00018074b7d0(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_R14D);
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,7);
}
// 函数: void SystemCore_412d1(void)
void SystemCore_412d1(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_412fb(void)
void SystemCore_412fb(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_41320(uint64_t param_1,int8_t param_2,int8_t param_3)
void SystemCore_41320(uint64_t param_1,int8_t param_2,int8_t param_3)
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
  iVar1 = UISystem_LayoutManager(param_1,&local_var_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = SystemCore_623d0(local_var_140,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_41413;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = SystemCore_Cleanup(stack_array_138,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemCore_Cleanup(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_158 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,7,param_1,&processed_var_7968_ptr);
  }
SystemCore_41413:
  if (lStack_148 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_4133d(uint64_t param_1,int8_t param_2,int8_t param_3)
void SystemCore_4133d(uint64_t param_1,int8_t param_2,int8_t param_3)
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
  iVar1 = UISystem_LayoutManager(param_1,&local_buffer_00000038,&local_buffer_00000030);
  if (iVar1 == 0) {
    iVar1 = SystemCore_623d0(local_var_38,param_2,param_3);
    if (iVar1 == 0) goto SystemCore_41413;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = SystemCore_Cleanup(&local_buffer_00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&local_buffer_00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemCore_Cleanup(&local_buffer_00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
// WARNING: Subroutine does not return
    DataTransformer(iVar1,7,param_1,&processed_var_7968_ptr,&local_buffer_00000040);
  }
SystemCore_41413:
  if (lStack0000000000000030 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_41399(void)
void SystemCore_41399(void)
{
  int iVar1;
  int iVar2;
  int8_t unaff_BL;
  int8_t unaff_BPL;
  int32_t unaff_ESI;
  iVar1 = SystemCore_Cleanup(&local_buffer_00000040,0x100,unaff_BL);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  SystemCore_Cleanup(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_BPL);
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,7);
}
// 函数: void SystemCore_41413(void)
void SystemCore_41413(void)
{
  int64_t local_var_30;
  uint64_t local_var_140;
  if (local_var_30 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_41435(void)
void SystemCore_41435(void)
{
  uint64_t local_var_140;
  SystemDataProcessor();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_41460(uint64_t param_1,int32_t param_2,int8_t param_3)
void SystemCore_41460(uint64_t param_1,int32_t param_2,int8_t param_3)
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
  iVar1 = UISystem_LayoutManager(param_1,stack_array_148,0);
  if (((iVar1 != 0) || (iVar1 = SystemFunction_000180762600(stack_array_148[0],param_2,param_3), iVar1 != 0)) &&
     ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    iVar2 = SystemFunction_00018074b7d0(stack_array_138,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemCore_Cleanup(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_158 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,7,param_1,&processed_var_7768_ptr);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// 函数: void SystemCore_414c2(void)
void SystemCore_414c2(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int8_t unaff_BPL;
  int32_t unaff_ESI;
  iVar1 = SystemFunction_00018074b7d0(&local_buffer_00000040,0x100,unaff_EBX);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  SystemCore_Cleanup(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_BPL);
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,7);
}
// 函数: void SystemCore_4153b(void)
void SystemCore_4153b(void)
{
  uint64_t local_var_140;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_41560(uint64_t param_1,int32_t param_2,uint64_t param_3,int32_t param_4)
void SystemCore_41560(uint64_t param_1,int32_t param_2,uint64_t param_3,int32_t param_4)
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
  iVar1 = UISystem_LayoutManager(param_1,stack_array_158,0);
  if (((iVar1 != 0) || (iVar1 = SystemCore_62660(stack_array_158[0],param_2,param_3,param_4), iVar1 != 0))
     && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    iVar2 = SystemFunction_00018074b7d0(stack_array_148,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = BufferManager_ResizeBuffer(stack_array_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemFunction_00018074b800(stack_array_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
    plocal_var_168 = stack_array_148;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,7,param_1,&processed_var_7792_ptr);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_188);
}
// 函数: void SystemCore_415cc(void)
void SystemCore_415cc(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  int32_t unaff_R14D;
  iVar1 = SystemFunction_00018074b7d0(&local_buffer_00000040,0x100,unaff_EBX);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = BufferManager_ResizeBuffer(&local_buffer_00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  SystemFunction_00018074b800(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_R14D);
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,7);
}
// 函数: void SystemCore_4167a(void)
void SystemCore_4167a(void)
{
  uint64_t local_var_140;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_416a0(uint64_t param_1,int32_t param_2,int32_t param_3)
void SystemCore_416a0(uint64_t param_1,int32_t param_2,int32_t param_3)
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
  iVar1 = UISystem_LayoutManager(param_1,stack_array_148,0);
  if (((iVar1 != 0) || (iVar1 = SystemFunction_000180762a70(stack_array_148[0],param_2,param_3), iVar1 != 0)) &&
     ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    iVar2 = SystemFunction_00018074b7d0(stack_array_138,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemFunction_00018074b830(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_158 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,7,param_1,&processed_var_7720_ptr);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// 函数: void SystemCore_41706(void)
void SystemCore_41706(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  iVar1 = SystemFunction_00018074b7d0(&local_buffer_00000040,0x100,unaff_EBX);
  iVar2 = SystemDataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  SystemFunction_00018074b830(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,7);
}