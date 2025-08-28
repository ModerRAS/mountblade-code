#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part327.c - 28 个函数
// 函数: void NetworkProtocol_49d40(uint64_t param_1,int64_t param_2,int32_t param_3)
void NetworkProtocol_49d40(uint64_t param_1,int64_t param_2,int32_t param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t stack_array_1a8 [32];
  int8_t *plocal_var_188;
  uint64_t local_var_178;
  int64_t lStack_170;
  uint64_t *aplocal_var_168 [2];
  int8_t stack_array_158 [256];
  uint64_t local_var_58;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1a8;
  if ((param_2 == 0) || (iVar1 = Function_055df91e(param_2), 0x7f < iVar1)) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_1a8);
    }
    iVar1 = DataProcessor(stack_array_158,0x100,param_2);
    iVar2 = DataProcessor(stack_array_158 + iVar1,0x100 - iVar1,&system_temp_buffer);
    Function_a18f1749(stack_array_158 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),param_3);
    plocal_var_188 = stack_array_158;
// WARNING: Subroutine does not return
    DataTransformer(0x1f,0xd,param_1,&processed_var_8960_ptr);
  }
  local_var_178 = 0;
  iVar2 = SystemFunction_00018088c590(param_1 & 0xffffffff,&lStack_170);
  if (iVar2 == 0) {
    if ((*(uint *)(lStack_170 + 0x24) >> 1 & 1) == 0) goto LAB_180849dd1;
    iVar3 = SystemSecurityProcessor(&local_var_178);
    if (iVar3 == 0) goto LAB_180849e6f;
  }
  else {
LAB_180849e6f:
    iVar3 = iVar2;
  }
  if ((iVar3 == 0) &&
     (iVar2 = SystemCore_SecurityChecker(*(uint64_t *)(lStack_170 + 0x98),aplocal_var_168,0xa8), iVar2 == 0)) {
    *aplocal_var_168[0] = &processed_var_8856_ptr;
    *(int32_t *)(aplocal_var_168[0] + 1) = 0xa8;
    *(int *)(aplocal_var_168[0] + 2) = (int)param_1;
// WARNING: Subroutine does not return
    memcpy(aplocal_var_168[0] + 5,param_2,(int64_t)(iVar1 + 1));
  }
LAB_180849dd1:
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_var_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_49f40(uint64_t param_1,int64_t param_2,int32_t param_3)
void NetworkProtocol_49f40(uint64_t param_1,int64_t param_2,int32_t param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t stack_array_1a8 [32];
  int8_t *plocal_var_188;
  uint64_t local_var_178;
  int64_t lStack_170;
  uint64_t *aplocal_var_168 [2];
  int8_t stack_array_158 [256];
  uint64_t local_var_58;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1a8;
  if ((param_2 == 0) || (iVar1 = Function_055df91e(param_2), 0x7f < iVar1)) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_1a8);
    }
    iVar1 = DataProcessor(stack_array_158,0x100,param_2);
    iVar2 = DataProcessor(stack_array_158 + iVar1,0x100 - iVar1,&system_temp_buffer);
    Function_a18f1749(stack_array_158 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),param_3);
    plocal_var_188 = stack_array_158;
// WARNING: Subroutine does not return
    DataTransformer(0x1f,0xb,param_1,&ui_system_data_1320_ptr);
  }
  local_var_178 = 0;
  iVar2 = SystemFunction_00018088c590(param_1 & 0xffffffff,&lStack_170);
  if (iVar2 == 0) {
    if ((*(uint *)(lStack_170 + 0x24) >> 1 & 1) == 0) goto LAB_180849fd1;
    iVar3 = SystemSecurityProcessor(&local_var_178);
    if (iVar3 == 0) goto LAB_18084a06f;
  }
  else {
LAB_18084a06f:
    iVar3 = iVar2;
  }
  if ((iVar3 == 0) &&
     (iVar2 = SystemCore_SecurityChecker(*(uint64_t *)(lStack_170 + 0x98),aplocal_var_168,0xa0), iVar2 == 0)) {
    *aplocal_var_168[0] = &ui_system_data_1216_ptr;
    *(int32_t *)(aplocal_var_168[0] + 1) = 0xa0;
// WARNING: Subroutine does not return
    memcpy(aplocal_var_168[0] + 4,param_2,(int64_t)(iVar1 + 1));
  }
LAB_180849fd1:
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_var_178);
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_4a140(uint64_t param_1,int8_t param_2)
void NetworkProtocol_4a140(uint64_t param_1,int8_t param_2)
{
  int iVar1;
  int iVar2;
  int8_t stack_array_178 [48];
  int64_t alStack_148 [2];
  uint64_t *aplocal_var_138 [34];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  alStack_148[1] = 0;
  iVar1 = SystemFunction_00018088c590(param_1,alStack_148);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_18084a1fa;
    iVar2 = SystemSecurityProcessor(alStack_148 + 1);
    if (iVar2 == 0) goto LAB_18084a1a4;
  }
  else {
LAB_18084a1a4:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = SystemCore_SecurityChecker(*(uint64_t *)(alStack_148[0] + 0x98),aplocal_var_138,0x20), iVar1 == 0))
  {
    *aplocal_var_138[0] = &processed_var_7360_ptr;
    *(int32_t *)(aplocal_var_138[0] + 1) = 0x20;
    *(int *)(aplocal_var_138[0] + 2) = (int)param_1;
    *(int8_t *)(aplocal_var_138[0] + 3) = param_2;
    Function_6f6ce600(*(uint64_t *)(alStack_148[0] + 0x98));
  }
LAB_18084a1fa:
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStack_148 + 1);
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_4a280(uint64_t param_1,int32_t param_2)
void NetworkProtocol_4a280(uint64_t param_1,int32_t param_2)
{
  int iVar1;
  int iVar2;
  int8_t stack_array_178 [48];
  int64_t alStack_148 [2];
  uint64_t *aplocal_var_138 [34];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  alStack_148[1] = 0;
  iVar1 = SystemFunction_00018088c590(param_1,alStack_148);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_18084a346;
    iVar2 = SystemSecurityProcessor(alStack_148 + 1);
    if (iVar2 == 0) goto LAB_18084a2ef;
  }
  else {
LAB_18084a2ef:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = SystemCore_SecurityChecker(*(uint64_t *)(alStack_148[0] + 0x98),aplocal_var_138,0x20), iVar1 == 0))
  {
    *aplocal_var_138[0] = &processed_var_6688_ptr;
    *(int32_t *)(aplocal_var_138[0] + 1) = 0x20;
    *(int32_t *)(aplocal_var_138[0] + 3) = param_2;
    *(int *)(aplocal_var_138[0] + 2) = (int)param_1;
    Function_6f6ce600(*(uint64_t *)(alStack_148[0] + 0x98));
  }
LAB_18084a346:
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStack_148 + 1);
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_4a3d0(uint64_t param_1,int32_t param_2,int32_t param_3)
void NetworkProtocol_4a3d0(uint64_t param_1,int32_t param_2,int32_t param_3)
{
  int iVar1;
  int iVar2;
  int8_t stack_array_188 [48];
  int64_t alStack_158 [2];
  uint64_t *aplocal_var_148 [34];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  alStack_158[1] = 0;
  iVar1 = SystemFunction_00018088c590(param_1,alStack_158);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_158[0] + 0x24) >> 1 & 1) == 0) goto LAB_18084a498;
    iVar2 = SystemSecurityProcessor(alStack_158 + 1);
    if (iVar2 == 0) goto LAB_18084a43e;
  }
  else {
LAB_18084a43e:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = SystemCore_SecurityChecker(*(uint64_t *)(alStack_158[0] + 0x98),aplocal_var_148,0x20), iVar1 == 0))
  {
    *aplocal_var_148[0] = &processed_var_7088_ptr;
    *(int32_t *)(aplocal_var_148[0] + 1) = 0x20;
    *(int32_t *)((int64_t)aplocal_var_148[0] + 0x1c) = param_3;
    *(int *)(aplocal_var_148[0] + 2) = (int)param_1;
    *(int32_t *)(aplocal_var_148[0] + 3) = param_2;
    Function_6f6ce600(*(uint64_t *)(alStack_158[0] + 0x98));
  }
LAB_18084a498:
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStack_158 + 1);
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_4a550(uint64_t param_1,int32_t param_2)
void NetworkProtocol_4a550(uint64_t param_1,int32_t param_2)
{
  int iVar1;
  int iVar2;
  int8_t stack_array_178 [48];
  int64_t alStack_148 [2];
  uint64_t *aplocal_var_138 [34];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  alStack_148[1] = 0;
  iVar1 = SystemFunction_00018088c590(param_1,alStack_148);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_18084a608;
    iVar2 = SystemSecurityProcessor(alStack_148 + 1);
    if (iVar2 == 0) goto LAB_18084a5b3;
  }
  else {
LAB_18084a5b3:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = SystemCore_SecurityChecker(*(uint64_t *)(alStack_148[0] + 0x98),aplocal_var_138,0x20), iVar1 == 0))
  {
    *aplocal_var_138[0] = &processed_var_7752_ptr;
    *(int32_t *)(aplocal_var_138[0] + 1) = 0x20;
    *(int *)(aplocal_var_138[0] + 2) = (int)param_1;
    *(int32_t *)(aplocal_var_138[0] + 3) = param_2;
    Function_6f6ce600(*(uint64_t *)(alStack_148[0] + 0x98));
  }
LAB_18084a608:
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStack_148 + 1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_4a680(int32_t param_1,uint64_t param_2)
void NetworkProtocol_4a680(int32_t param_1,uint64_t param_2)
{
  int iVar1;
  int8_t stack_array_168 [48];
  uint64_t local_var_138;
  uint64_t local_var_130;
  int64_t lStack_128;
  int64_t alStack_120 [33];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  lStack_128 = 0;
  local_var_138 = 0;
  local_var_130 = 0;
  iVar1 = SystemFunction_00018088c590(0,&local_var_130);
  if (((iVar1 == 0) && (iVar1 = SystemSecurityProcessor(&local_var_138,local_var_130), iVar1 == 0)) &&
     (iVar1 = Function_85b738db(param_1,alStack_120), iVar1 == 0)) {
    lStack_128 = *(int64_t *)(alStack_120[0] + 8);
  }
  else if (iVar1 != 0) goto LAB_18084a719;
  *(uint64_t *)(*(int64_t *)(lStack_128 + 0xd0) + 0x38) = param_2;
LAB_18084a719:
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_var_138);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_4a7a0(int32_t param_1,uint64_t param_2)
void NetworkProtocol_4a7a0(int32_t param_1,uint64_t param_2)
{
  int iVar1;
  int8_t stack_array_168 [48];
  uint64_t local_var_138;
  uint64_t local_var_130;
  int64_t lStack_128;
  int64_t alStack_120 [33];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  lStack_128 = 0;
  local_var_138 = 0;
  local_var_130 = 0;
  iVar1 = SystemFunction_00018088c590(0,&local_var_130);
  if (((iVar1 == 0) && (iVar1 = SystemSecurityProcessor(&local_var_138,local_var_130), iVar1 == 0)) &&
     (iVar1 = Function_85b738db(param_1,alStack_120), iVar1 == 0)) {
    if (alStack_120[0] == 0) {
      lStack_128 = alStack_120[0];
    }
    else {
      lStack_128 = alStack_120[0] + -8;
    }
  }
  else if (iVar1 != 0) goto LAB_18084a83e;
  *(uint64_t *)(lStack_128 + 0x30) = param_2;
LAB_18084a83e:
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_var_138);
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_4a8c0(uint64_t param_1,int32_t param_2)
void NetworkProtocol_4a8c0(uint64_t param_1,int32_t param_2)
{
  int iVar1;
  int iVar2;
  int8_t stack_array_178 [48];
  int64_t alStack_148 [2];
  uint64_t *aplocal_var_138 [34];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  alStack_148[1] = 0;
  iVar1 = SystemFunction_00018088c590(param_1,alStack_148);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_18084a986;
    iVar2 = SystemSecurityProcessor(alStack_148 + 1);
    if (iVar2 == 0) goto LAB_18084a92f;
  }
  else {
LAB_18084a92f:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = SystemCore_SecurityChecker(*(uint64_t *)(alStack_148[0] + 0x98),aplocal_var_138,0x20), iVar1 == 0))
  {
    *aplocal_var_138[0] = &processed_var_9536_ptr;
    *(int32_t *)(aplocal_var_138[0] + 1) = 0x20;
    *(int32_t *)(aplocal_var_138[0] + 3) = param_2;
    *(int *)(aplocal_var_138[0] + 2) = (int)param_1;
    Function_6f6ce600(*(uint64_t *)(alStack_148[0] + 0x98));
  }
LAB_18084a986:
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStack_148 + 1);
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_4aa10(uint64_t param_1,int32_t param_2)
void NetworkProtocol_4aa10(uint64_t param_1,int32_t param_2)
{
  int iVar1;
  int iVar2;
  int8_t stack_array_178 [48];
  int64_t alStack_148 [2];
  uint64_t *aplocal_var_138 [34];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  alStack_148[1] = 0;
  iVar1 = SystemFunction_00018088c590(param_1,alStack_148);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_18084aad6;
    iVar2 = SystemSecurityProcessor(alStack_148 + 1);
    if (iVar2 == 0) goto LAB_18084aa7f;
  }
  else {
LAB_18084aa7f:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = SystemCore_SecurityChecker(*(uint64_t *)(alStack_148[0] + 0x98),aplocal_var_138,0x20), iVar1 == 0))
  {
    *aplocal_var_138[0] = &processed_var_6552_ptr;
    *(int32_t *)(aplocal_var_138[0] + 1) = 0x20;
    *(int32_t *)(aplocal_var_138[0] + 3) = param_2;
    *(int *)(aplocal_var_138[0] + 2) = (int)param_1;
    Function_6f6ce600(*(uint64_t *)(alStack_148[0] + 0x98));
  }
LAB_18084aad6:
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStack_148 + 1);
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_4ab60(uint64_t param_1,int32_t param_2)
void NetworkProtocol_4ab60(uint64_t param_1,int32_t param_2)
{
  int iVar1;
  int iVar2;
  int8_t stack_array_178 [48];
  int64_t alStack_148 [2];
  uint64_t *aplocal_var_138 [34];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  alStack_148[1] = 0;
  iVar1 = SystemFunction_00018088c590(param_1,alStack_148);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_18084ac26;
    iVar2 = SystemSecurityProcessor(alStack_148 + 1);
    if (iVar2 == 0) goto LAB_18084abcf;
  }
  else {
LAB_18084abcf:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = SystemCore_SecurityChecker(*(uint64_t *)(alStack_148[0] + 0x98),aplocal_var_138,0x20), iVar1 == 0))
  {
    *aplocal_var_138[0] = &rendering_buffer_24_ptr;
    *(int32_t *)(aplocal_var_138[0] + 1) = 0x20;
    *(int32_t *)(aplocal_var_138[0] + 3) = param_2;
    *(int *)(aplocal_var_138[0] + 2) = (int)param_1;
    Function_6f6ce600(*(uint64_t *)(alStack_148[0] + 0x98));
  }
LAB_18084ac26:
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStack_148 + 1);
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_4acb0(uint64_t param_1)
void NetworkProtocol_4acb0(uint64_t param_1)
{
  int iVar1;
  int iVar2;
  int8_t stack_array_168 [48];
  int64_t alStack_138 [2];
  uint64_t *aplocal_var_128 [34];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  alStack_138[1] = 0;
  iVar1 = SystemFunction_00018088c590(param_1,alStack_138);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_138[0] + 0x24) >> 1 & 1) == 0) goto LAB_18084ad66;
    iVar2 = SystemSecurityProcessor(alStack_138 + 1);
    if (iVar2 == 0) goto LAB_18084ad14;
  }
  else {
LAB_18084ad14:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = SystemCore_SecurityChecker(*(uint64_t *)(alStack_138[0] + 0x98),aplocal_var_128,0x18), iVar1 == 0))
  {
    *aplocal_var_128[0] = &processed_var_7496_ptr;
    *(int32_t *)(aplocal_var_128[0] + 1) = 0x18;
    *(int *)(aplocal_var_128[0] + 2) = (int)param_1;
    Function_6f6ce600(*(uint64_t *)(alStack_138[0] + 0x98));
  }
LAB_18084ad66:
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStack_138 + 1);
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_4ade0(uint64_t param_1,int32_t param_2)
void NetworkProtocol_4ade0(uint64_t param_1,int32_t param_2)
{
  int iVar1;
  int iVar2;
  int8_t stack_array_178 [48];
  int64_t alStack_148 [2];
  uint64_t *aplocal_var_138 [34];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  alStack_148[1] = 0;
  iVar1 = SystemFunction_00018088c590(param_1,alStack_148);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_18084ae98;
    iVar2 = SystemSecurityProcessor(alStack_148 + 1);
    if (iVar2 == 0) goto LAB_18084ae43;
  }
  else {
LAB_18084ae43:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = SystemCore_SecurityChecker(*(uint64_t *)(alStack_148[0] + 0x98),aplocal_var_138,0x20), iVar1 == 0))
  {
    *aplocal_var_138[0] = &processed_var_7624_ptr;
    *(int32_t *)(aplocal_var_138[0] + 1) = 0x20;
    *(int *)(aplocal_var_138[0] + 2) = (int)param_1;
    *(int32_t *)(aplocal_var_138[0] + 3) = param_2;
    Function_6f6ce600(*(uint64_t *)(alStack_148[0] + 0x98));
  }
LAB_18084ae98:
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStack_148 + 1);
}
// 函数: void NetworkProtocol_4af10(int32_t param_1,int32_t *param_2)
void NetworkProtocol_4af10(int32_t param_1,int32_t *param_2)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  uint64_t stack_special_x_10;
  int64_t lStackX_18;
  int8_t astack_special_x_20 [8];
  NetworkProtocol_4afc0();
  uVar1 = *param_2;
  stack_special_x_10 = 0;
  iVar2 = SystemFunction_00018088c590(param_1,&lStackX_18);
  if (iVar2 == 0) {
    if ((*(uint *)(lStackX_18 + 0x24) >> 1 & 1) == 0) goto LAB_18084af88;
    iVar3 = SystemSecurityProcessor(&stack_special_x_10);
    if (iVar3 == 0) goto LAB_18084af68;
  }
  else {
LAB_18084af68:
    iVar3 = iVar2;
  }
  if (iVar3 == 0) {
    Function_85b738db(uVar1,astack_special_x_20);
  }
LAB_18084af88:
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&stack_special_x_10);
}
// WARNING: Type propagation algorithm not settling
uint64_t NetworkProtocol_4afc0(uint64_t param_1)
{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t alStackX_10 [2];
  uint64_t *pstack_special_x_20;
  uVar1 = SystemFunction_00018088c590(param_1,alStackX_10);
  if ((uVar1 == 0) && ((*(uint *)(alStackX_10[0] + 0x24) >> 1 & 1) == 0)) {
    return 0x4b;
  }
  if (uVar1 != 0) {
    return (uint64_t)uVar1;
  }
  uVar3 = NetworkProtocol_8e0f0(*(uint64_t *)(alStackX_10[0] + 0x98),0);
  if ((int)uVar3 == 0) {
    if (*(int *)(*(int64_t *)(alStackX_10[0] + 0x98) + 0x200) != 0) {
      alStackX_10[1] = 0;
      iVar2 = SystemSecurityProcessor(alStackX_10 + 1);
      if (iVar2 == 0) {
        iVar2 = SystemCore_SecurityChecker(*(uint64_t *)(alStackX_10[0] + 0x98),&pstack_special_x_20,0x10);
        if (iVar2 == 0) {
          *pstack_special_x_20 = &memory_allocator_3344_ptr;
          *(int32_t *)(pstack_special_x_20 + 1) = 0x10;
          iVar2 = Function_6f6ce600(*(uint64_t *)(alStackX_10[0] + 0x98));
          if (iVar2 == 0) {
// WARNING: Subroutine does not return
            AdvancedSystemProcessor(alStackX_10 + 1);
          }
        }
      }
// WARNING: Subroutine does not return
      AdvancedSystemProcessor(alStackX_10 + 1);
    }
    uVar3 = 0;
  }
  return uVar3;
}
uint64_t NetworkProtocol_4b015(uint64_t param_1,int64_t param_2)
{
  int iVar1;
  int64_t local_var_38;
  uint64_t local_buffer_40;
  uint64_t *local_var_48;
  if (*(int *)(*(int64_t *)(param_2 + 0x98) + 0x200) == 0) {
    return 0;
  }
  local_buffer_40 = 0;
  iVar1 = SystemSecurityProcessor(&local_buffer_00000040);
  if (iVar1 == 0) {
    iVar1 = SystemCore_SecurityChecker(*(uint64_t *)(local_var_38 + 0x98),&local_buffer_00000048,0x10);
    if (iVar1 == 0) {
      *local_var_48 = &memory_allocator_3344_ptr;
      *(int32_t *)(local_var_48 + 1) = 0x10;
      iVar1 = Function_6f6ce600(*(uint64_t *)(local_var_38 + 0x98));
      if (iVar1 == 0) {
// WARNING: Subroutine does not return
        AdvancedSystemProcessor(&local_buffer_00000040);
      }
    }
  }
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_buffer_00000040);
}
// 函数: void NetworkProtocol_4b0a1(void)
void NetworkProtocol_4b0a1(void)
{
  return;
}
// 函数: void NetworkProtocol_4b0a6(void)
void NetworkProtocol_4b0a6(void)
{
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_buffer_00000040);
}
// 函数: void NetworkProtocol_4b0c0(int32_t param_1)
void NetworkProtocol_4b0c0(int32_t param_1)
{
  int iVar1;
  int iVar2;
  uint64_t stack_special_x_10;
  int64_t alStackX_18 [2];
  iVar1 = NetworkProtocol_4afc0();
  if (iVar1 != 0) {
    return;
  }
  stack_special_x_10 = 0;
  iVar1 = SystemFunction_00018088c590(param_1,alStackX_18);
  if (iVar1 == 0) {
    if ((*(uint *)(alStackX_18[0] + 0x24) >> 1 & 1) == 0) {
// WARNING: Subroutine does not return
      AdvancedSystemProcessor(&stack_special_x_10);
    }
    iVar2 = SystemSecurityProcessor(&stack_special_x_10);
    if (iVar2 != 0) goto LAB_18084b131;
  }
  iVar2 = iVar1;
LAB_18084b131:
  if (iVar2 == 0) {
    iVar1 = NetworkProtocol_8daf0(*(uint64_t *)(alStackX_18[0] + 0x98));
    if (iVar1 == 0) {
// WARNING: Subroutine does not return
      AdvancedSystemProcessor(&stack_special_x_10);
    }
  }
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&stack_special_x_10);
}
// 函数: void NetworkProtocol_4b0db(void)
void NetworkProtocol_4b0db(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  uint64_t local_buffer_38;
  int64_t local_var_40;
  local_buffer_38 = 0;
  iVar1 = SystemFunction_00018088c590(unaff_EBX);
  if (iVar1 == 0) {
    if ((*(uint *)(local_var_40 + 0x24) >> 1 & 1) == 0) {
// WARNING: Subroutine does not return
      AdvancedSystemProcessor(&local_buffer_00000038);
    }
    iVar2 = SystemSecurityProcessor(&local_buffer_00000038);
    if (iVar2 != 0) goto LAB_18084b131;
  }
  iVar2 = iVar1;
LAB_18084b131:
  if (iVar2 == 0) {
    iVar1 = NetworkProtocol_8daf0(*(uint64_t *)(local_var_40 + 0x98));
    if (iVar1 == 0) {
// WARNING: Subroutine does not return
      AdvancedSystemProcessor(&local_buffer_00000038);
    }
  }
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_buffer_00000038);
}
// 函数: void NetworkProtocol_4b11f(void)
void NetworkProtocol_4b11f(void)
{
  int iVar1;
  int unaff_EDI;
  int64_t local_var_40;
  iVar1 = SystemSecurityProcessor(&local_buffer_00000038);
  if (iVar1 == 0) {
    iVar1 = unaff_EDI;
  }
  if (iVar1 == 0) {
    iVar1 = NetworkProtocol_8daf0(*(uint64_t *)(local_var_40 + 0x98));
    if (iVar1 == 0) {
// WARNING: Subroutine does not return
      AdvancedSystemProcessor(&local_buffer_00000038);
    }
  }
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_buffer_00000038);
}
// 函数: void NetworkProtocol_4b163(void)
void NetworkProtocol_4b163(void)
{
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_buffer_00000038);
}
// 函数: void NetworkProtocol_4b174(void)
void NetworkProtocol_4b174(void)
{
  return;
}
// WARNING: Type propagation algorithm not settling
// 函数: void NetworkProtocol_4b180(uint64_t param_1,int8_t param_2)
void NetworkProtocol_4b180(uint64_t param_1,int8_t param_2)
{
  int iVar1;
  int iVar2;
  int64_t alStackX_18 [2];
  uint64_t *aplocal_var_18 [2];
  alStackX_18[1] = 0;
  iVar1 = SystemFunction_00018088c590(param_1,alStackX_18);
  if ((((iVar1 != 0) ||
       (((*(uint *)(alStackX_18[0] + 0x24) >> 1 & 1) != 0 &&
        (iVar2 = SystemSecurityProcessor(alStackX_18 + 1), iVar2 == 0)))) && (iVar1 == 0)) &&
     (iVar1 = SystemCore_SecurityChecker(*(uint64_t *)(alStackX_18[0] + 0x98),aplocal_var_18,0x18), iVar1 == 0)) {
    *aplocal_var_18[0] = &rendering_buffer_2544_ptr;
    *(int32_t *)(aplocal_var_18[0] + 1) = 0x18;
    *(int8_t *)(aplocal_var_18[0] + 2) = param_2;
    Function_6f6ce600(*(uint64_t *)(alStackX_18[0] + 0x98));
  }
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStackX_18 + 1);
}
// 函数: void SystemStateProcessor(int32_t *param_1,uint64_t param_2)
void SystemStateProcessor(int32_t *param_1,uint64_t param_2)
{
// WARNING: Subroutine does not return
  SystemValidationProcessor(param_2,0x27,&processed_var_8960_ptr,*param_1,*(int16_t *)(param_1 + 1),
                *(int16_t *)((int64_t)param_1 + 6),*(int8_t *)(param_1 + 2),
                *(int8_t *)((int64_t)param_1 + 9),*(int8_t *)((int64_t)param_1 + 10),
                *(int8_t *)((int64_t)param_1 + 0xb),*(int8_t *)(param_1 + 3),
                *(int8_t *)((int64_t)param_1 + 0xd),*(int8_t *)((int64_t)param_1 + 0xe),
                *(int8_t *)((int64_t)param_1 + 0xf));
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_4b2f0(uint64_t param_1)
void NetworkProtocol_4b2f0(uint64_t param_1)
{
  int iVar1;
  int8_t stack_array_148 [32];
  int8_t *plocal_var_128;
  int8_t stack_array_118 [256];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_148;
  iVar1 = NetworkProtocol_401c0();
  if ((iVar1 != 0) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    plocal_var_128 = stack_array_118;
    stack_array_118[0] = 0;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,0x11,param_1,&processed_var_4232_ptr);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_148);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_4b380(uint64_t param_1)
void NetworkProtocol_4b380(uint64_t param_1)
{
  int iVar1;
  int8_t stack_array_148 [32];
  int8_t *plocal_var_128;
  int8_t stack_array_118 [256];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_148;
  iVar1 = NetworkProtocol_4b180(param_1,0);
  if ((iVar1 != 0) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    plocal_var_128 = stack_array_118;
    stack_array_118[0] = 0;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,0xb,param_1,&rendering_buffer_2648_ptr);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_148);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_4b410(uint64_t param_1)
void NetworkProtocol_4b410(uint64_t param_1)
{
  int iVar1;
  int8_t stack_array_158 [32];
  int8_t *plocal_var_138;
  int64_t alStack_128 [2];
  int8_t stack_array_118 [256];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158;
  iVar1 = SystemFunction_00018088c590(param_1,alStack_128);
  if ((iVar1 == 0) && ((*(uint *)(alStack_128[0] + 0x24) >> 1 & 1) == 0)) {
    iVar1 = 0x4b;
LAB_18084b46d:
    if (iVar1 == 0) goto LAB_18084b4a9;
  }
  else if (iVar1 == 0) {
    iVar1 = NetworkProtocol_8e220(*(uint64_t *)(alStack_128[0] + 0x98));
    if (iVar1 == 0) goto LAB_18084b4a9;
    goto LAB_18084b46d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    plocal_var_138 = stack_array_118;
    stack_array_118[0] = 0;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,0xb,param_1,&processed_var_5264_ptr);
  }
LAB_18084b4a9:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_4b5a0(uint64_t param_1,uint64_t *param_2,int64_t *param_3)
void NetworkProtocol_4b5a0(uint64_t param_1,uint64_t *param_2,int64_t *param_3)
{
  int iVar1;
  int64_t *plVar2;
  int32_t *puVar3;
  int8_t stack_array_b8 [32];
  uint local_var_98;
  uint local_var_90;
  uint local_var_88;
  uint local_var_80;
  uint local_var_78;
  uint local_var_70;
  uint local_var_68;
  uint local_var_60;
  uint local_var_58;
  uint local_var_50;
  int8_t stack_array_48 [40];
  uint64_t local_var_20;
  local_var_20 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_b8;
  for (puVar3 = (int32_t *)*param_2;
      ((int32_t *)*param_2 <= puVar3 &&
      (puVar3 < (int32_t *)*param_2 + (int64_t)*(int *)(param_2 + 1) * 4)); puVar3 = puVar3 + 4)
  {
    plVar2 = (int64_t *)(**(code **)(*param_3 + 0x140))(param_3,puVar3,1);
    if (plVar2 == (int64_t *)0x0) {
      local_var_50 = (uint)*(byte *)((int64_t)puVar3 + 0xf);
      local_var_58 = (uint)*(byte *)((int64_t)puVar3 + 0xe);
      local_var_60 = (uint)*(byte *)((int64_t)puVar3 + 0xd);
      local_var_68 = (uint)*(byte *)(puVar3 + 3);
      local_var_70 = (uint)*(byte *)((int64_t)puVar3 + 0xb);
      local_var_78 = (uint)*(byte *)((int64_t)puVar3 + 10);
      local_var_80 = (uint)*(byte *)((int64_t)puVar3 + 9);
      local_var_88 = (uint)*(byte *)(puVar3 + 2);
      local_var_90 = (uint)*(ushort *)((int64_t)puVar3 + 6);
      local_var_98 = (uint)*(ushort *)(puVar3 + 1);
// WARNING: Subroutine does not return
      SystemValidationProcessor(stack_array_48,0x27,&processed_var_8960_ptr,*puVar3);
    }
    iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,param_1);
    if (iVar1 != 0) break;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_20 ^ (uint64_t)stack_array_b8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_4b6c0(int64_t param_1,int64_t param_2)
void NetworkProtocol_4b6c0(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  bool bVar2;
  int8_t stack_array_58 [32];
  int8_t stack_array_38 [40];
  uint64_t local_var_10;
  local_var_10 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_58;
  bVar2 = *(int *)(param_2 + 0xb0) != -1;
  *(bool *)(param_1 + 8) = bVar2;
  if (bVar2) {
    lVar1 = (**(code **)(**(int64_t **)(param_1 + 0x10) + 0x288))
                      (*(int64_t **)(param_1 + 0x10),param_2 + 0xd8,1);
    if (lVar1 == 0) {
// WARNING: Subroutine does not return
      SystemStateProcessor(param_2 + 0xd8,stack_array_38);
    }
    NetworkProtocol_47c60(lVar1,*(uint64_t *)(param_1 + 0x10),param_1 + 8);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_10 ^ (uint64_t)stack_array_58);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address