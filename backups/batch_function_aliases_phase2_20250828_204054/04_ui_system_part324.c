#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part324.c - 25 个函数
// 函数: void NetworkProtocol_45ef0(uint64_t param_1,uint *param_2)
void NetworkProtocol_45ef0(uint64_t param_1,uint *param_2)
{
  int iVar1;
  int64_t lVar2;
  uint *puVar3;
  int8_t stack_array_168 [32];
  int8_t *plocal_var_148;
  uint64_t local_var_138;
  int64_t lStack_130;
  int64_t lStack_128;
  int64_t lStack_120;
  int8_t stack_array_118 [256];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  if (param_2 == (uint *)0x0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_168);
    }
    UIAnimationController(stack_array_118,0x100,0);
    plocal_var_148 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(0x1f,0xc,param_1,&processed_var_736_ptr);
  }
  *param_2 = 0;
  local_var_138 = 0;
  lStack_130 = 0;
  lStack_128 = 0;
  iVar1 = StringDataProcessor_ConvertWide(0,&lStack_130);
  if (((iVar1 == 0) && (iVar1 = SystemSecurityProcessor(&local_var_138,lStack_130), iVar1 == 0)) &&
     (iVar1 = StringDataProcessor_Convert(param_1 & 0xffffffff,&lStack_120), iVar1 == 0)) {
    lStack_128 = *(int64_t *)(lStack_120 + 8);
  }
  else if (iVar1 != 0) {
// WARNING: Subroutine does not return
    AdvancedSystemProcessor(&local_var_138);
  }
  lVar2 = NetworkProtocol_3fbf0(*(uint64_t *)(lStack_130 + 800),lStack_128 + 0x30);
  if (lVar2 != 0) {
    puVar3 = (uint *)NetworkProtocol_4cde0(lVar2,&lStack_120);
    *param_2 = *puVar3 / 0x30;
// WARNING: Subroutine does not return
    AdvancedSystemProcessor(&local_var_138);
  }
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_var_138);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_46050(int32_t param_1,int32_t *param_2,int32_t *param_3)
void NetworkProtocol_46050(int32_t param_1,int32_t *param_2,int32_t *param_3)
{
  int iVar1;
  int8_t stack_array_188 [48];
  uint64_t local_var_158;
  uint64_t local_var_150;
  int64_t lStack_148;
  int64_t alStack_140 [33];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  if (param_2 != (int32_t *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (int32_t *)0x0) {
    *param_3 = 0;
  }
  lStack_148 = 0;
  local_var_158 = 0;
  local_var_150 = 0;
  iVar1 = StringDataProcessor_ConvertWide(0,&local_var_150);
  if (((iVar1 == 0) && (iVar1 = SystemSecurityProcessor(&local_var_158,local_var_150), iVar1 == 0)) &&
     (iVar1 = StringDataProcessor_Convert(param_1,alStack_140), iVar1 == 0)) {
    lStack_148 = *(int64_t *)(alStack_140[0] + 8);
  }
  else if (iVar1 != 0) goto LAB_18084610f;
  if (lStack_148 != 0) {
    if (param_2 != (int32_t *)0x0) {
      *param_2 = *(int32_t *)(lStack_148 + 0xf0);
    }
    if (param_3 != (int32_t *)0x0) {
      *param_3 = *(int32_t *)(lStack_148 + 0xf4);
    }
  }
LAB_18084610f:
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_var_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_46210(uint64_t param_1,int64_t param_2,int32_t *param_3,int32_t *param_4)
void NetworkProtocol_46210(uint64_t param_1,int64_t param_2,int32_t *param_3,int32_t *param_4)
{
  int iVar1;
  int iVar2;
  int8_t stack_array_198 [32];
  int8_t *plocal_var_178;
  int32_t stack_array_168 [2];
  uint64_t local_var_160;
  int64_t alStack_158 [2];
  int8_t stack_array_148 [256];
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_198;
  if (param_3 != (int32_t *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (int32_t *)0x0) {
    *param_4 = 0;
  }
  if (param_2 == 0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
      iVar1 = SystemDataProcessor(stack_array_148,0x100,0);
      iVar2 = SystemDataProcessor(stack_array_148 + iVar1,0x100 - iVar1,&system_temp_buffer);
      iVar1 = iVar1 + iVar2;
      iVar2 = SystemCore_4bac0(stack_array_148 + iVar1,0x100 - iVar1,param_3);
      iVar1 = iVar1 + iVar2;
      iVar2 = SystemDataProcessor(stack_array_148 + iVar1,0x100 - iVar1,&system_temp_buffer);
      SystemCore_4bac0(stack_array_148 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),param_4);
      plocal_var_178 = stack_array_148;
// WARNING: Subroutine does not return
      DataTransformer(0x1f,0xb,param_1,&processed_var_480_ptr);
    }
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_198);
  }
  local_var_160 = 0;
  iVar1 = StringDataProcessor_ConvertWide(param_1,alStack_158);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_158[0] + 0x24) >> 1 & 1) == 0) {
// WARNING: Subroutine does not return
      AdvancedSystemProcessor(&local_var_160);
    }
    iVar2 = SystemSecurityProcessor(&local_var_160);
    if (iVar2 != 0) goto LAB_1808462b2;
  }
  iVar2 = iVar1;
LAB_1808462b2:
  if (iVar2 != 0) {
// WARNING: Subroutine does not return
    AdvancedSystemProcessor(&local_var_160);
  }
  stack_array_168[0] = 0;
  iVar1 = NetworkProtocol_40af0(alStack_158[0],param_2,stack_array_168);
  if (iVar1 != 0) {
// WARNING: Subroutine does not return
    AdvancedSystemProcessor(&local_var_160);
  }
  RenderingSystem_ProcessTransform(alStack_158[0] + 0x60,stack_array_168[0],param_3,param_4);
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_var_160);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_46410(uint64_t param_1,int32_t param_2,uint64_t param_3)
void NetworkProtocol_46410(uint64_t param_1,int32_t param_2,uint64_t param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t stack_array_168 [32];
  int8_t *plocal_var_148;
  int8_t stack_array_138 [256];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  iVar1 = NetworkProtocol_40600();
  if ((iVar1 != 0) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    iVar2 = BufferManager_Initialize(stack_array_138,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_148 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,0xc,param_1,&processed_var_640_ptr);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_168);
}
// 函数: void NetworkProtocol_46453(void)
void NetworkProtocol_46453(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  iVar1 = BufferManager_Initialize(&local_buffer_00000030,0x100,unaff_EBX);
  iVar2 = SystemDataProcessor(&local_buffer_00000030 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074bda0(&local_buffer_00000030 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,0xc);
}
// 函数: void NetworkProtocol_464cb(void)
void NetworkProtocol_464cb(void)
{
  uint64_t local_var_130;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_130 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_464f0(uint64_t param_1,int32_t *param_2)
void NetworkProtocol_464f0(uint64_t param_1,int32_t *param_2)
{
  int iVar1;
  int8_t stack_array_168 [32];
  int8_t *plocal_var_148;
  uint64_t local_var_138;
  uint64_t local_var_130;
  int64_t lStack_128;
  int64_t lStack_120;
  int8_t stack_array_118 [256];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  if (param_2 == (int32_t *)0x0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_168);
    }
    UIAnimationController(stack_array_118,0x100,0);
    plocal_var_148 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(0x1f,0xc,param_1,&processed_var_592_ptr);
  }
  *param_2 = 0;
  local_var_138 = 0;
  local_var_130 = 0;
  lStack_128 = 0;
  iVar1 = StringDataProcessor_ConvertWide(0,&local_var_130);
  if (((iVar1 == 0) && (iVar1 = SystemSecurityProcessor(&local_var_138,local_var_130), iVar1 == 0)) &&
     (iVar1 = StringDataProcessor_Convert(param_1 & 0xffffffff,&lStack_120), iVar1 == 0)) {
    lStack_128 = *(int64_t *)(lStack_120 + 8);
  }
  else if (iVar1 != 0) {
// WARNING: Subroutine does not return
    AdvancedSystemProcessor(&local_var_138);
  }
  *param_2 = *(int32_t *)(lStack_128 + 0x88);
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_var_138);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_46610(uint64_t param_1,int8_t *param_2,int param_3,int32_t *param_4)
void NetworkProtocol_46610(uint64_t param_1,int8_t *param_2,int param_3,int32_t *param_4)
{
  int iVar1;
  int iVar2;
  int8_t stack_array_1a8 [32];
  int32_t *plocal_var_188;
  uint64_t local_var_178;
  uint64_t local_var_170;
  int64_t lStack_168;
  int64_t lStack_160;
  int32_t local_var_158;
  int32_t local_var_154;
  int32_t local_var_150;
  int32_t local_var_14c;
  int8_t stack_array_148 [256];
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1a8;
  if (param_2 != (int8_t *)0x0) {
    *param_2 = 0;
  }
  if (param_4 != (int32_t *)0x0) {
    *param_4 = 0;
  }
  if (((param_2 != (int8_t *)0x0) || (param_3 == 0)) && (-1 < param_3)) {
    lStack_168 = 0;
    local_var_178 = 0;
    local_var_170 = 0;
    iVar1 = StringDataProcessor_ConvertWide(0,&local_var_170);
    if (((iVar1 == 0) && (iVar1 = SystemSecurityProcessor(&local_var_178,local_var_170), iVar1 == 0)) &&
       (iVar1 = StringDataProcessor_Convert(param_1 & 0xffffffff,&lStack_160), iVar1 == 0)) {
      lStack_168 = *(int64_t *)(lStack_160 + 8);
    }
    else if (iVar1 != 0) {
// WARNING: Subroutine does not return
      AdvancedSystemProcessor(&local_var_178);
    }
    local_var_158 = *(int32_t *)(lStack_168 + 0x10);
    local_var_154 = *(int32_t *)(lStack_168 + 0x14);
    local_var_150 = *(int32_t *)(lStack_168 + 0x18);
    local_var_14c = *(int32_t *)(lStack_168 + 0x1c);
    plocal_var_188 = param_4;
    NetworkProtocol_82160(local_var_170,&local_var_158,param_2,param_3);
// WARNING: Subroutine does not return
    AdvancedSystemProcessor(&local_var_178);
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_1a8);
  }
  iVar1 = SystemDataProcessor(stack_array_148,0x100,param_2);
  iVar2 = SystemDataProcessor(stack_array_148 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = BufferManager_Initialize(stack_array_148 + iVar1,0x100 - iVar1,param_3);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(stack_array_148 + iVar1,0x100 - iVar1,&system_temp_buffer);
  UIAnimationController(stack_array_148 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),param_4);
  plocal_var_188 = (int32_t *)stack_array_148;
// WARNING: Subroutine does not return
  DataTransformer(0x1f,0xc,param_1,&processed_var_560_ptr);
}
// 函数: void NetworkProtocol_46730(void)
void NetworkProtocol_46730(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_EBP;
  int32_t unaff_ESI;
  iVar1 = SystemDataProcessor(&local_buffer_00000060,0x100);
  iVar2 = SystemDataProcessor(&local_buffer_00000060 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = BufferManager_Initialize(&local_buffer_00000060 + iVar1,0x100 - iVar1,unaff_EBP);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&local_buffer_00000060 + iVar1,0x100 - iVar1,&system_temp_buffer);
  UIAnimationController(&local_buffer_00000060 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,0xc);
}
// 函数: void NetworkProtocol_467de(void)
void NetworkProtocol_467de(void)
{
  uint64_t local_var_160;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_160 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_46810(uint64_t param_1,int8_t *param_2)
void NetworkProtocol_46810(uint64_t param_1,int8_t *param_2)
{
  int iVar1;
  int8_t stack_array_178 [32];
  int8_t *plocal_var_158;
  uint64_t local_var_148;
  uint64_t local_var_140;
  int64_t lStack_138;
  int64_t lStack_130;
  int8_t stack_array_128 [256];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  if (param_2 == (int8_t *)0x0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_178);
    }
    SystemCore_4be30(stack_array_128,0x100,0);
    plocal_var_158 = stack_array_128;
// WARNING: Subroutine does not return
    DataTransformer(0x1f,0xd,param_1,&ui_system_data_1176_ptr);
  }
  *param_2 = 0;
  local_var_148 = 0;
  local_var_140 = 0;
  lStack_138 = 0;
  iVar1 = StringDataProcessor_ConvertWide(0,&local_var_140);
  if (((iVar1 == 0) && (iVar1 = SystemSecurityProcessor(&local_var_148,local_var_140), iVar1 == 0)) &&
     (iVar1 = StringDataProcessor_Convert(param_1 & 0xffffffff,&lStack_130), iVar1 == 0)) {
    lStack_138 = 0;
    if (lStack_130 != 0) {
      lStack_138 = lStack_130 + -8;
    }
  }
  else if (iVar1 != 0) {
// WARNING: Subroutine does not return
    AdvancedSystemProcessor(&local_var_148);
  }
  *param_2 = *(int8_t *)(lStack_138 + 0xbc);
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_var_148);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_46930(int32_t param_1,int32_t *param_2,int32_t *param_3)
void NetworkProtocol_46930(int32_t param_1,int32_t *param_2,int32_t *param_3)
{
  int iVar1;
  int8_t stack_array_188 [48];
  uint64_t local_var_158;
  uint64_t local_var_150;
  int64_t lStack_148;
  int64_t alStack_140 [33];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  if (param_2 != (int32_t *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (int32_t *)0x0) {
    *param_3 = 0;
  }
  lStack_148 = 0;
  local_var_158 = 0;
  local_var_150 = 0;
  iVar1 = StringDataProcessor_ConvertWide(0,&local_var_150);
  if (((iVar1 == 0) && (iVar1 = SystemSecurityProcessor(&local_var_158,local_var_150), iVar1 == 0)) &&
     (iVar1 = StringDataProcessor_Convert(param_1,alStack_140), iVar1 == 0)) {
    lStack_148 = 0;
    if (alStack_140[0] != 0) {
      lStack_148 = alStack_140[0] + -8;
    }
  }
  else if (iVar1 != 0) goto LAB_1808469dd;
  NetworkProtocol_68270(lStack_148,param_2,param_3);
LAB_1808469dd:
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_var_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_46a90(uint64_t param_1,int32_t *param_2)
void NetworkProtocol_46a90(uint64_t param_1,int32_t *param_2)
{
  int iVar1;
  int32_t uVar2;
  int8_t stack_array_178 [32];
  int8_t *plocal_var_158;
  uint64_t local_var_148;
  uint64_t local_var_140;
  int64_t lStack_138;
  int64_t lStack_130;
  int8_t stack_array_128 [256];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  if (param_2 == (int32_t *)0x0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_178);
    }
    func_0x00018074bda0(stack_array_128,0x100,0);
    plocal_var_158 = stack_array_128;
// WARNING: Subroutine does not return
    DataTransformer(0x1f,0xd,param_1,&ui_system_data_1248_ptr);
  }
  *param_2 = 2;
  local_var_148 = 0;
  local_var_140 = 0;
  lStack_138 = 0;
  iVar1 = StringDataProcessor_ConvertWide(0,&local_var_140);
  if (((iVar1 == 0) && (iVar1 = SystemSecurityProcessor(&local_var_148,local_var_140), iVar1 == 0)) &&
     (iVar1 = StringDataProcessor_Convert(param_1 & 0xffffffff,&lStack_130), iVar1 == 0)) {
    lStack_138 = 0;
    if (lStack_130 != 0) {
      lStack_138 = lStack_130 + -8;
    }
  }
  else if (iVar1 != 0) {
// WARNING: Subroutine does not return
    AdvancedSystemProcessor(&local_var_148);
  }
  uVar2 = SystemRuntime_GetContext(lStack_138);
  *param_2 = uVar2;
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_var_148);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_46bc0(uint64_t param_1,uint param_2,int32_t *param_3)
void NetworkProtocol_46bc0(uint64_t param_1,uint param_2,int32_t *param_3)
{
  int iVar1;
  int iVar2;
  int8_t stack_array_188 [32];
  int8_t *plocal_var_168;
  uint64_t local_var_158;
  uint64_t local_var_150;
  int64_t lStack_148;
  int64_t lStack_140;
  int8_t stack_array_138 [256];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  if (param_3 != (int32_t *)0x0) {
    *param_3 = 0;
    if (param_2 < 6) {
      lStack_148 = 0;
      local_var_158 = 0;
      local_var_150 = 0;
      iVar1 = StringDataProcessor_ConvertWide(0,&local_var_150);
      if (((iVar1 == 0) && (iVar1 = SystemSecurityProcessor(&local_var_158,local_var_150), iVar1 == 0)) &&
         (iVar1 = StringDataProcessor_Convert(param_1 & 0xffffffff,&lStack_140), iVar1 == 0)) {
        lStack_148 = 0;
        if (lStack_140 != 0) {
          lStack_148 = lStack_140 + -8;
        }
      }
      else if (iVar1 != 0) {
// WARNING: Subroutine does not return
        AdvancedSystemProcessor(&local_var_158);
      }
      *param_3 = *(int32_t *)(lStack_148 + 0xa4 + (int64_t)(int)param_2 * 4);
// WARNING: Subroutine does not return
      AdvancedSystemProcessor(&local_var_158);
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_188);
  }
  iVar1 = BufferManager_Initialize(stack_array_138,0x100,param_2);
  iVar2 = SystemDataProcessor(stack_array_138 + iVar1,0x100 - iVar1,&system_temp_buffer);
  SystemCore_4bac0(stack_array_138 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),param_3);
  plocal_var_168 = stack_array_138;
// WARNING: Subroutine does not return
  DataTransformer(0x1f,0xd,param_1,&ui_system_data_1144_ptr);
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_46d30(uint64_t param_1,int32_t *param_2)
void NetworkProtocol_46d30(uint64_t param_1,int32_t *param_2)
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
  if (param_2 == (int32_t *)0x0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_178);
    }
    func_0x00018074bda0(stack_array_128,0x100,0);
    plocal_var_158 = stack_array_128;
// WARNING: Subroutine does not return
    DataTransformer(0x1f,0xc,param_1,&processed_var_6368_ptr);
  }
  *param_2 = 1;
  alStack_148[1] = 0;
  iVar1 = StringDataProcessor_ConvertWide(param_1,alStack_148);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_180846d91;
    iVar2 = SystemSecurityProcessor(alStack_148 + 1);
    if (iVar2 == 0) goto LAB_180846df9;
  }
  else {
LAB_180846df9:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = SystemCore_SecurityChecker(*(uint64_t *)(alStack_148[0] + 0x98),aplocal_var_138,0x20), iVar1 == 0))
  {
    *aplocal_var_138[0] = &processed_var_6264_ptr;
    *(int32_t *)(aplocal_var_138[0] + 1) = 0x20;
    *(int *)(aplocal_var_138[0] + 2) = (int)param_1;
    iVar1 = SystemDataResolver_ResolveAddress(*(uint64_t *)(alStack_148[0] + 0x98),aplocal_var_138[0]);
    if (iVar1 == 0) {
      *param_2 = *(int32_t *)(aplocal_var_138[0] + 3);
// WARNING: Subroutine does not return
      AdvancedSystemProcessor(alStack_148 + 1);
    }
  }
LAB_180846d91:
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStack_148 + 1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_46e90(uint64_t param_1,uint *param_2)
void NetworkProtocol_46e90(uint64_t param_1,uint *param_2)
{
  int iVar1;
  uint uVar2;
  int8_t stack_array_178 [32];
  int8_t *plocal_var_158;
  uint64_t local_var_148;
  uint64_t local_var_140;
  int64_t lStack_138;
  int64_t lStack_130;
  int8_t stack_array_128 [256];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  if (param_2 == (uint *)0x0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_178);
    }
    UIAnimationController(stack_array_128,0x100,0);
    plocal_var_158 = stack_array_128;
// WARNING: Subroutine does not return
    DataTransformer(0x1f,0xd,param_1,&ui_system_data_1208_ptr);
  }
  uVar2 = 0;
  *param_2 = 0;
  local_var_148 = 0;
  local_var_140 = 0;
  lStack_138 = 0;
  iVar1 = StringDataProcessor_ConvertWide(0,&local_var_140);
  if (((iVar1 == 0) && (iVar1 = SystemSecurityProcessor(&local_var_148,local_var_140), iVar1 == 0)) &&
     (iVar1 = StringDataProcessor_Convert(param_1 & 0xffffffff,&lStack_130), iVar1 == 0)) {
    if (lStack_130 == 0) {
      lStack_138 = 0;
    }
    else {
      lStack_138 = lStack_130 + -8;
    }
  }
  else if (iVar1 != 0) {
// WARNING: Subroutine does not return
    AdvancedSystemProcessor(&local_var_148);
  }
  if (*(int64_t *)(lStack_138 + 0x10) != 0) {
    uVar2 = SystemDataResolver_GetField(*(int64_t *)(lStack_138 + 0x10) + 200);
    uVar2 = uVar2 / 0x30;
  }
  *param_2 = uVar2;
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_var_148);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_46fe0(uint64_t param_1,uint64_t *param_2)
void NetworkProtocol_46fe0(uint64_t param_1,uint64_t *param_2)
{
  int iVar1;
  int8_t stack_array_168 [32];
  int8_t *plocal_var_148;
  uint64_t local_var_138;
  uint64_t local_var_130;
  int64_t lStack_128;
  int64_t lStack_120;
  int8_t stack_array_118 [256];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  if (param_2 == (uint64_t *)0x0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_168);
    }
    func_0x00018074bda0(stack_array_118,0x100,0);
    plocal_var_148 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(0x1f,0xc,param_1,&processed_var_896_ptr);
  }
  *param_2 = 0;
  local_var_138 = 0;
  local_var_130 = 0;
  lStack_128 = 0;
  iVar1 = StringDataProcessor_ConvertWide(0,&local_var_130);
  if (((iVar1 == 0) && (iVar1 = SystemSecurityProcessor(&local_var_138,local_var_130), iVar1 == 0)) &&
     (iVar1 = StringDataProcessor_Convert(param_1 & 0xffffffff,&lStack_120), iVar1 == 0)) {
    lStack_128 = *(int64_t *)(lStack_120 + 8);
  }
  else if (iVar1 != 0) {
// WARNING: Subroutine does not return
    AdvancedSystemProcessor(&local_var_138);
  }
  *param_2 = *(uint64_t *)(*(int64_t *)(lStack_128 + 0xd0) + 0x38);
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_var_138);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_47110(uint64_t param_1,uint64_t *param_2)
void NetworkProtocol_47110(uint64_t param_1,uint64_t *param_2)
{
  int iVar1;
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
    func_0x00018074bda0(stack_array_128,0x100,0);
    plocal_var_158 = stack_array_128;
// WARNING: Subroutine does not return
    DataTransformer(0x1f,0xd,param_1,&ui_system_data_1312_ptr);
  }
  *param_2 = 0;
  local_var_148 = 0;
  local_var_140 = 0;
  lStack_138 = 0;
  iVar1 = StringDataProcessor_ConvertWide(0,&local_var_140);
  if (((iVar1 == 0) && (iVar1 = SystemSecurityProcessor(&local_var_148,local_var_140), iVar1 == 0)) &&
     (iVar1 = StringDataProcessor_Convert(param_1 & 0xffffffff,&lStack_130), iVar1 == 0)) {
    lStack_138 = 0;
    if (lStack_130 != 0) {
      lStack_138 = lStack_130 + -8;
    }
  }
  else if (iVar1 != 0) {
// WARNING: Subroutine does not return
    AdvancedSystemProcessor(&local_var_148);
  }
  *param_2 = *(uint64_t *)(lStack_138 + 0x30);
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_var_148);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_47230(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void NetworkProtocol_47230(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t stack_array_168 [32];
  int8_t *plocal_var_148;
  int8_t stack_array_138 [256];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  iVar1 = NetworkProtocol_40790();
  if ((iVar1 != 0) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    iVar2 = SystemDataProcessor(stack_array_138,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_148 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,0xc,param_1,&processed_var_696_ptr);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_168);
}
// 函数: void NetworkProtocol_47274(void)
void NetworkProtocol_47274(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  iVar1 = SystemDataProcessor(&local_buffer_00000030,0x100);
  iVar2 = SystemDataProcessor(&local_buffer_00000030 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074bda0(&local_buffer_00000030 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,0xc);
}
// 函数: void NetworkProtocol_472ec(void)
void NetworkProtocol_472ec(void)
{
  uint64_t local_var_130;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_130 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_47310(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void NetworkProtocol_47310(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t stack_array_168 [32];
  int8_t *plocal_var_148;
  int8_t stack_array_138 [256];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  iVar1 = NetworkProtocol_3ff70();
  if ((iVar1 != 0) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    iVar2 = SystemDataProcessor(stack_array_138,0x100,param_2);
    iVar3 = SystemDataProcessor(stack_array_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(stack_array_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    plocal_var_148 = stack_array_138;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,0xb,param_1,&processed_var_664_ptr);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_168);
}
// 函数: void NetworkProtocol_47354(void)
void NetworkProtocol_47354(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  iVar1 = SystemDataProcessor(&local_buffer_00000030,0x100);
  iVar2 = SystemDataProcessor(&local_buffer_00000030 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074bda0(&local_buffer_00000030 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,0xb);
}
// 函数: void NetworkProtocol_473cc(void)
void NetworkProtocol_473cc(void)
{
  uint64_t local_var_130;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_130 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_473f0(int32_t param_1,int32_t *param_2,int32_t *param_3)
void NetworkProtocol_473f0(int32_t param_1,int32_t *param_2,int32_t *param_3)
{
  int iVar1;
  int8_t stack_array_188 [48];
  uint64_t local_var_158;
  uint64_t local_var_150;
  int64_t lStack_148;
  int64_t alStack_140 [33];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  if (param_2 != (int32_t *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (int32_t *)0x0) {
    *param_3 = 0;
  }
  lStack_148 = 0;
  local_var_158 = 0;
  local_var_150 = 0;
  iVar1 = StringDataProcessor_ConvertWide(0,&local_var_150);
  if (((iVar1 == 0) && (iVar1 = SystemSecurityProcessor(&local_var_158,local_var_150), iVar1 == 0)) &&
     (iVar1 = StringDataProcessor_Convert(param_1,alStack_140), iVar1 == 0)) {
    lStack_148 = 0;
    if (alStack_140[0] != 0) {
      lStack_148 = alStack_140[0] + -8;
    }
  }
  else if (iVar1 != 0) goto LAB_18084749d;
  NetworkProtocol_682e0(lStack_148,param_2,param_3);
LAB_18084749d:
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_var_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address