#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_13_part082.c - 11 个函数
// 函数: void NetworkProtocol_e20d0(int64_t param_1,uint64_t param_2,uint64_t *param_3)
void NetworkProtocol_e20d0(int64_t param_1,uint64_t param_2,uint64_t *param_3)
{
  uint uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  short sVar5;
  int iVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint uVar9;
  void *puVar10;
  void *puVar11;
  uint64_t *puVar12;
  int8_t stack_array_288 [32];
  int8_t *plocal_var_268;
  int32_t local_var_260;
  uint64_t *plocal_var_250;
  int32_t local_var_248;
  int32_t local_var_244;
  int32_t local_var_240;
  int32_t local_var_23c;
  int8_t stack_array_238 [5];
  int8_t stack_array_233 [2];
  int8_t stack_array_231 [249];
  int8_t stack_array_138 [256];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_288;
  uVar9 = *(uint *)(param_1 + 0x48);
  uVar1 = *(uint *)(param_1 + 0x4c);
  if (uVar1 <= uVar9 + 1) {
    local_var_260 = 0;
    *(uint *)(param_1 + 0x4c) = uVar1 * 2;
    plocal_var_268 = (int8_t *)CONCAT44(plocal_var_268._4_4_,0x161);
    lVar7 = SystemCore_42650(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(uint64_t *)(param_1 + 0x30),
                          uVar1 * 0x250 + 0xc,&processed_var_8576_ptr);
    *(int64_t *)(param_1 + 0x30) = lVar7;
    if (lVar7 == 0) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_288);
    }
    uVar9 = *(uint *)(param_1 + 0x48);
    *(int64_t *)(param_1 + 0x38) = lVar7;
    *(int64_t *)(param_1 + 0x40) = lVar7 + 0xc;
  }
  puVar12 = (uint64_t *)((uint64_t)uVar9 * 0x128 + *(int64_t *)(param_1 + 0x40));
  *(uint *)(param_1 + 0x48) = uVar9 + 1;
  *puVar12 = param_3;
  puVar12[1] = 0;
  *(int32_t *)(puVar12 + 4) = 0;
  plocal_var_250 = puVar12;
  lVar7 = (**(code **)*param_3)(param_3);
  uVar2 = *(int32_t *)(lVar7 + 0x14);
  uVar3 = *(int32_t *)(lVar7 + 0x18);
  uVar4 = *(int32_t *)(lVar7 + 0x1c);
  *(int32_t *)(puVar12 + 2) = *(int32_t *)(lVar7 + 0x10);
  *(int32_t *)((int64_t)puVar12 + 0x14) = uVar2;
  *(int32_t *)(puVar12 + 3) = uVar3;
  *(int32_t *)((int64_t)puVar12 + 0x1c) = uVar4;
  stack_array_238[0] = 0;
  stack_array_138[0] = 0;
  uVar8 = (**(code **)*param_3)(param_3);
  sVar5 = NetworkingSystem_GetConnectionStatus(uVar8);
  if (sVar5 == 0) {
    puVar10 = &ui_system_data_1756_ptr;
  }
  else if (sVar5 == 1) {
    puVar10 = &processed_var_8704_ptr;
  }
  else if (sVar5 == 2) {
    puVar10 = &processed_var_8712_ptr;
  }
  else if (sVar5 == 3) {
    puVar10 = &processed_var_8720_ptr;
  }
  else {
    puVar10 = &processed_var_8728_ptr;
    if (sVar5 != 4) {
      puVar10 = &processed_var_8736_ptr;
    }
  }
  lVar7 = (**(code **)*param_3)(param_3);
  if (((*(byte *)(lVar7 + 0xc4) & 1) == 0) && (lVar7 = param_3[0xe], lVar7 != 0)) {
    lVar7 = (*(code *)**(uint64_t **)(lVar7 + 8))(lVar7 + 8);
    plocal_var_268 = (int8_t *)0x0;
    local_var_248 = *(int32_t *)(lVar7 + 0x10);
    local_var_244 = *(int32_t *)(lVar7 + 0x14);
    local_var_240 = *(int32_t *)(lVar7 + 0x18);
    local_var_23c = *(int32_t *)(lVar7 + 0x1c);
    iVar6 = NetworkProtocol_82160(*(uint64_t *)(param_1 + 0x28),&local_var_248,stack_array_238,0x100);
    if ((iVar6 == 0) || (iVar6 == 0x41)) {
      iVar6 = SystemFunction_00018076b690(stack_array_238);
      if (7 < iVar6) {
        plocal_var_268 = stack_array_231;
// WARNING: Subroutine does not return
        SystemDataValidator(stack_array_138,0x100,&processed_var_8744_ptr,puVar10);
      }
    }
    puVar11 = &processed_var_8756_ptr;
  }
  else {
    plocal_var_268 = (int8_t *)0x0;
    iVar6 = NetworkProtocol_82160(*(uint64_t *)(param_1 + 0x28),puVar12 + 2,stack_array_238,0x100);
    if ((iVar6 == 0) || (iVar6 == 0x41)) {
      iVar6 = SystemFunction_00018076b690(stack_array_238);
      if (5 < iVar6) {
        plocal_var_268 = stack_array_233;
// WARNING: Subroutine does not return
        SystemDataValidator(stack_array_138,0x100,&processed_var_8768_ptr,puVar10);
      }
    }
    puVar11 = &processed_var_8792_ptr;
  }
// WARNING: Subroutine does not return
  SystemDataValidator(stack_array_138,0x100,puVar11,puVar10);
}
// 函数: void NetworkProtocol_e2161(void)
void NetworkProtocol_e2161(void)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  short sVar4;
  int iVar5;
  int64_t in_RAX;
  int64_t lVar6;
  uint64_t uVar7;
  void *puVar8;
  uint64_t *unaff_RSI;
  int64_t unaff_RDI;
  void *puVar9;
  int32_t unaff_R12D;
  int32_t unaff_000000a4;
  uint64_t *puVar10;
  uint64_t *plocal_var_38;
  int32_t local_var_40;
  int32_t local_buffer_44;
  int32_t local_var_48;
  int32_t local_buffer_4c;
  int8_t local_buffer_50;
  int8_t local_var_150;
  puVar10 = (uint64_t *)(in_RAX * 0x128 + *(int64_t *)(unaff_RDI + 0x40));
  *(int *)(unaff_RDI + 0x48) = (int)in_RAX + 1;
  *puVar10 = unaff_RSI;
  puVar10[1] = CONCAT44(unaff_000000a4,unaff_R12D);
  *(int32_t *)(puVar10 + 4) = unaff_R12D;
  plocal_var_38 = puVar10;
  lVar6 = (**(code **)*unaff_RSI)();
  uVar1 = *(int32_t *)(lVar6 + 0x14);
  uVar2 = *(int32_t *)(lVar6 + 0x18);
  uVar3 = *(int32_t *)(lVar6 + 0x1c);
  *(int32_t *)(puVar10 + 2) = *(int32_t *)(lVar6 + 0x10);
  *(int32_t *)((int64_t)puVar10 + 0x14) = uVar1;
  *(int32_t *)(puVar10 + 3) = uVar2;
  *(int32_t *)((int64_t)puVar10 + 0x1c) = uVar3;
  local_buffer_50 = (int8_t)unaff_R12D;
  local_var_150 = local_buffer_50;
  uVar7 = (**(code **)*unaff_RSI)();
  sVar4 = NetworkingSystem_GetConnectionStatus(uVar7);
  if (sVar4 == 0) {
    puVar8 = &ui_system_data_1756_ptr;
  }
  else if (sVar4 == 1) {
    puVar8 = &processed_var_8704_ptr;
  }
  else if (sVar4 == 2) {
    puVar8 = &processed_var_8712_ptr;
  }
  else if (sVar4 == 3) {
    puVar8 = &processed_var_8720_ptr;
  }
  else {
    puVar8 = &processed_var_8728_ptr;
    if (sVar4 != 4) {
      puVar8 = &processed_var_8736_ptr;
    }
  }
  lVar6 = (**(code **)*unaff_RSI)();
  if (((*(byte *)(lVar6 + 0xc4) & 1) == 0) && (lVar6 = unaff_RSI[0xe], lVar6 != 0)) {
    lVar6 = (*(code *)**(uint64_t **)(lVar6 + 8))(lVar6 + 8);
    local_var_40 = *(int32_t *)(lVar6 + 0x10);
    local_buffer_44 = *(int32_t *)(lVar6 + 0x14);
    local_var_48 = *(int32_t *)(lVar6 + 0x18);
    local_buffer_4c = *(int32_t *)(lVar6 + 0x1c);
    iVar5 = NetworkProtocol_82160(*(uint64_t *)(unaff_RDI + 0x28),&local_buffer_00000040,&local_buffer_00000050,0x100)
    ;
    if ((iVar5 == 0) || (iVar5 == 0x41)) {
      iVar5 = SystemFunction_00018076b690(&local_buffer_00000050);
      if (7 < iVar5) {
// WARNING: Subroutine does not return
        SystemDataValidator(&local_buffer_00000150,0x100,&processed_var_8744_ptr,puVar8,&local_buffer_00000057);
      }
    }
    puVar9 = &processed_var_8756_ptr;
  }
  else {
    iVar5 = NetworkProtocol_82160(*(uint64_t *)(unaff_RDI + 0x28),puVar10 + 2,&local_buffer_00000050,0x100);
    if ((iVar5 == 0) || (iVar5 == 0x41)) {
      iVar5 = SystemFunction_00018076b690(&local_buffer_00000050);
      if (5 < iVar5) {
// WARNING: Subroutine does not return
        SystemDataValidator(&local_buffer_00000150,0x100,&processed_var_8768_ptr,puVar8,&local_buffer_00000055);
      }
    }
    puVar9 = &processed_var_8792_ptr;
  }
// WARNING: Subroutine does not return
  SystemDataValidator(&local_buffer_00000150,0x100,puVar9,puVar8);
}
// 函数: void NetworkProtocol_e21de(void)
void NetworkProtocol_e21de(void)
{
  uint64_t local_var_250;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_250 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkProtocol_e21e8(void)
void NetworkProtocol_e21e8(void)
{
  short in_AX;
  int iVar1;
  int64_t lVar2;
  void *puVar3;
  uint64_t *unaff_RSI;
  int64_t unaff_RDI;
  void *puVar4;
  int64_t unaff_R14;
  int32_t local_var_40;
  int32_t local_buffer_44;
  int32_t local_var_48;
  int32_t local_buffer_4c;
  if (in_AX == 1) {
    puVar3 = &processed_var_8704_ptr;
  }
  else if (in_AX == 2) {
    puVar3 = &processed_var_8712_ptr;
  }
  else if (in_AX == 3) {
    puVar3 = &processed_var_8720_ptr;
  }
  else {
    puVar3 = &processed_var_8728_ptr;
    if (in_AX != 4) {
      puVar3 = &processed_var_8736_ptr;
    }
  }
  lVar2 = (**(code **)*unaff_RSI)();
  if (((*(byte *)(lVar2 + 0xc4) & 1) == 0) && (lVar2 = unaff_RSI[0xe], lVar2 != 0)) {
    lVar2 = (*(code *)**(uint64_t **)(lVar2 + 8))(lVar2 + 8);
    local_var_40 = *(int32_t *)(lVar2 + 0x10);
    local_buffer_44 = *(int32_t *)(lVar2 + 0x14);
    local_var_48 = *(int32_t *)(lVar2 + 0x18);
    local_buffer_4c = *(int32_t *)(lVar2 + 0x1c);
    iVar1 = NetworkProtocol_82160(*(uint64_t *)(unaff_RDI + 0x28),&local_buffer_00000040,&local_buffer_00000050,0x100)
    ;
    if ((iVar1 == 0) || (iVar1 == 0x41)) {
      iVar1 = SystemFunction_00018076b690(&local_buffer_00000050);
      if (7 < iVar1) {
// WARNING: Subroutine does not return
        SystemDataValidator(&local_buffer_00000150,0x100,&processed_var_8744_ptr,puVar3,&local_buffer_00000057);
      }
    }
    puVar4 = &processed_var_8756_ptr;
  }
  else {
    iVar1 = NetworkProtocol_82160(*(uint64_t *)(unaff_RDI + 0x28),unaff_R14 + 0x10,&local_buffer_00000050,0x100)
    ;
    if ((iVar1 == 0) || (iVar1 == 0x41)) {
      iVar1 = SystemFunction_00018076b690(&local_buffer_00000050);
      if (5 < iVar1) {
// WARNING: Subroutine does not return
        SystemDataValidator(&local_buffer_00000150,0x100,&processed_var_8768_ptr,puVar3,&local_buffer_00000055);
      }
    }
    puVar4 = &processed_var_8792_ptr;
  }
// WARNING: Subroutine does not return
  SystemDataValidator(&local_buffer_00000150,0x100,puVar4,puVar3);
}
// 函数: void NetworkProtocol_e2355(void)
void NetworkProtocol_e2355(void)
{
  int64_t unaff_RBP;
  int64_t unaff_R14;
  float local_var_30;
  if (unaff_RBP != 0) {
    local_var_30 = -1.0;
    SystemCore_3c2a0(0xbf800000,&local_buffer_00000030);
// WARNING: Subroutine does not return
    SystemDataValidator(unaff_R14 + 0x24,0x100,&processed_var_8808_ptr,&local_buffer_00000150,(double)local_var_30);
  }
// WARNING: Subroutine does not return
  SystemDataValidator(unaff_R14 + 0x24,0x100,&processed_var_552_ptr,&local_buffer_00000150);
}
// 函数: void NetworkProtocol_e23cd(void)
void NetworkProtocol_e23cd(void)
{
  int iVar1;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int32_t unaff_R12D;
  uint64_t *local_var_38;
  uint64_t local_var_250;
  iVar1 = NetworkProtocol_e2e40();
  if (iVar1 == 0) {
    *local_var_38 = unaff_RBP;
    local_var_38[1] = unaff_RSI;
    *(int32_t *)(local_var_38 + 4) = unaff_R12D;
    local_var_38[2] = 0;
    local_var_38[3] = 0;
    *(int8_t *)((int64_t)local_var_38 + 0x24) = 0;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_250 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkProtocol_e2405(void)
void NetworkProtocol_e2405(void)
{
  uint64_t local_var_250;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_250 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_e2430(int64_t param_1,int64_t param_2,int64_t param_3)
void NetworkProtocol_e2430(int64_t param_1,int64_t param_2,int64_t param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  int64_t lVar5;
  int64_t *plVar6;
  uint uVar7;
  int8_t stack_array_168 [32];
  uint64_t local_var_148;
  int64_t *aplStack_138 [2];
  int8_t stack_array_128 [7];
  int8_t stack_array_121 [249];
  uint64_t local_var_28;
  int64_t *plVar8;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  plVar6 = (int64_t *)0x0;
  aplStack_138[0] = plVar6;
  if (*(int *)(param_1 + 0x48) != 1) {
    plVar8 = plVar6;
    do {
      aplStack_138[0] = (int64_t *)((int64_t)plVar8 * 0x128 + *(int64_t *)(param_1 + 0x40));
      if (*aplStack_138[0] == param_3) break;
      uVar7 = (int)plVar8 + 1;
      plVar8 = (int64_t *)(uint64_t)uVar7;
      aplStack_138[0] = plVar6;
    } while (uVar7 < *(int *)(param_1 + 0x48) - 1U);
  }
  if (aplStack_138[0] == (int64_t *)0x0) {
    iVar4 = NetworkProtocol_e2e40(param_1,aplStack_138);
    plVar6 = aplStack_138[0];
    if (iVar4 == 0) {
      *aplStack_138[0] = param_3;
      aplStack_138[0][1] = 0;
      *(int32_t *)(aplStack_138[0] + 4) = 0;
      lVar5 = (*(code *)**(uint64_t **)(param_3 + 8))();
      local_var_148 = 0;
      uVar1 = *(int32_t *)(lVar5 + 0x14);
      uVar2 = *(int32_t *)(lVar5 + 0x18);
      uVar3 = *(int32_t *)(lVar5 + 0x1c);
      *(int32_t *)(plVar6 + 2) = *(int32_t *)(lVar5 + 0x10);
      *(int32_t *)((int64_t)plVar6 + 0x14) = uVar1;
      *(int32_t *)(plVar6 + 3) = uVar2;
      *(int32_t *)((int64_t)plVar6 + 0x1c) = uVar3;
      iVar4 = NetworkProtocol_82160(*(uint64_t *)(param_1 + 0x28),plVar6 + 2,stack_array_128,0x100);
      if (((iVar4 == 0) || (iVar4 == 0x41)) && (iVar4 = SystemFunction_00018076b690(stack_array_128), 7 < iVar4)
         ) {
// WARNING: Subroutine does not return
        SystemDataValidator((int64_t)plVar6 + 0x24,0x100,&processed_var_8824_ptr,stack_array_121);
      }
// WARNING: Subroutine does not return
      SystemDataValidator((int64_t)plVar6 + 0x24,0x100,&processed_var_8836_ptr);
    }
  }
  else if (aplStack_138[0][1] == 0) {
    aplStack_138[0][1] = param_2;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_168);
}
// 函数: void NetworkProtocol_e24c0(uint64_t *param_1)
void NetworkProtocol_e24c0(uint64_t *param_1)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  int64_t lVar5;
  int32_t unaff_EBX;
  int32_t unaff_0000001c;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t *local_var_30;
  *local_var_30 = unaff_RDI;
  local_var_30[1] = CONCAT44(unaff_0000001c,unaff_EBX);
  *(int32_t *)(local_var_30 + 4) = unaff_EBX;
  lVar5 = (**(code **)*param_1)();
  uVar1 = *(int32_t *)(lVar5 + 0x14);
  uVar2 = *(int32_t *)(lVar5 + 0x18);
  uVar3 = *(int32_t *)(lVar5 + 0x1c);
  *(int32_t *)(local_var_30 + 2) = *(int32_t *)(lVar5 + 0x10);
  *(int32_t *)((int64_t)local_var_30 + 0x14) = uVar1;
  *(int32_t *)(local_var_30 + 3) = uVar2;
  *(int32_t *)((int64_t)local_var_30 + 0x1c) = uVar3;
  iVar4 = NetworkProtocol_82160(*(uint64_t *)(unaff_RSI + 0x28),local_var_30 + 2,&local_buffer_00000040,
                        0x100);
  if ((iVar4 == 0) || (iVar4 == 0x41)) {
    iVar4 = SystemFunction_00018076b690(&local_buffer_00000040);
    if (7 < iVar4) {
// WARNING: Subroutine does not return
      SystemDataValidator((int64_t)local_var_30 + 0x24,0x100,&processed_var_8824_ptr,&local_buffer_00000047);
    }
  }
// WARNING: Subroutine does not return
  SystemDataValidator((int64_t)local_var_30 + 0x24,0x100,&processed_var_8836_ptr);
}
// 函数: void NetworkProtocol_e2561(uint64_t param_1,uint param_2,uint64_t param_3,int64_t param_4)
void NetworkProtocol_e2561(uint64_t param_1,uint param_2,uint64_t param_3,int64_t param_4)
{
  uint unaff_EBX;
  int64_t unaff_RSI;
  uint64_t local_var_140;
  do {
    if (*(int64_t *)((uint64_t)unaff_EBX * 0x128 + *(int64_t *)(unaff_RSI + 0x40)) == param_4)
    break;
    unaff_EBX = unaff_EBX + 1;
  } while (unaff_EBX < param_2);
  NetworkProtocol_e25d0();
  NetworkProtocol_e25d0();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkProtocol_e25d0(int64_t param_1,uint64_t param_2,int64_t param_3)
{
  uint uVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint uVar6;
  uint64_t *puVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  float afStackX_18 [2];
  int64_t *plStackX_20;
  plVar9 = (int64_t *)0x0;
  plVar8 = (int64_t *)(*(int64_t *)(param_3 + 8) + -0x20);
  if (*(int64_t *)(param_3 + 8) == 0) {
    plVar8 = plVar9;
  }
  plVar2 = plVar9;
  if (plVar8 != (int64_t *)0x0) {
    plVar2 = plVar8 + 4;
  }
  while( true ) {
    if (plVar2 == (int64_t *)(param_3 + 8)) {
      return 0;
    }
    plVar8 = plVar2 + -4;
    if (plVar2 == (int64_t *)0x0) {
      plVar8 = plVar9;
    }
    lVar4 = (**(code **)(*plVar8 + 0xa0))(plVar8);
    if (lVar4 != 0) {
      uVar5 = (**(code **)(*plVar8 + 0xa0))(plVar8);
      iVar3 = SystemCore_58ed0(uVar5,&plStackX_20,0);
      if (iVar3 == 0) {
        uVar6 = *(uint *)(param_1 + 0x48);
        uVar1 = *(uint *)(param_1 + 0x4c);
        if (uVar1 <= uVar6 + 1) {
          *(uint *)(param_1 + 0x4c) = uVar1 * 2;
          lVar4 = SystemCore_42650(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                *(uint64_t *)(param_1 + 0x30),uVar1 * 0x250 + 0xc,&processed_var_8576_ptr,
                                0x161,0);
          *(int64_t *)(param_1 + 0x30) = lVar4;
          if (lVar4 == 0) {
            return 0x26;
          }
          uVar6 = *(uint *)(param_1 + 0x48);
          *(int64_t *)(param_1 + 0x38) = lVar4;
          *(int64_t *)(param_1 + 0x40) = lVar4 + 0xc;
        }
        puVar7 = (uint64_t *)((uint64_t)uVar6 * 0x128 + *(int64_t *)(param_1 + 0x40));
        *(uint *)(param_1 + 0x48) = uVar6 + 1;
        *puVar7 = plStackX_20;
        puVar7[1] = param_2;
        *(int32_t *)(puVar7 + 4) = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        if (*(int *)(param_1 + 0x50) != 1) {
// WARNING: Subroutine does not return
          SystemDataValidator((int64_t)puVar7 + 0x24,0x100,&processed_var_6680_ptr);
        }
        afStackX_18[0] = -1.0;
        (**(code **)(*plStackX_20 + 0x40))(plStackX_20,afStackX_18);
// WARNING: Subroutine does not return
        SystemDataValidator((int64_t)puVar7 + 0x24,0x100,&processed_var_8848_ptr,(double)afStackX_18[0]);
      }
    }
    lVar4 = (**(code **)(*plVar8 + 0xa8))(plVar8);
    if ((lVar4 != 0) && (uVar5 = NetworkProtocol_e2430(param_1,param_2), (int)uVar5 != 0)) {
      return uVar5;
    }
    lVar4 = (**(code **)(*plVar8 + 0x98))(plVar8);
    if ((lVar4 != 0) && (uVar5 = NetworkProtocol_e25d0(param_1,param_2), (int)uVar5 != 0)) break;
    if (plVar2 == (int64_t *)(param_3 + 8)) {
      return 0;
    }
    plVar8 = (int64_t *)(*plVar2 + -0x20);
    if (*plVar2 == 0) {
      plVar8 = plVar9;
    }
    plVar2 = plVar9;
    if (plVar8 != (int64_t *)0x0) {
      plVar2 = plVar8 + 4;
    }
  }
  return uVar5;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t NetworkProtocol_e27f0(int64_t *param_1,int64_t param_2,uint64_t *param_3)
{
  int iVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  if (param_3 == (uint64_t *)0x0) {
    return 0x1c;
  }
  plVar2 = (int64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x58,&processed_var_8576_ptr,0x18,0,0,1);
  if (plVar2 != (int64_t *)0x0) {
    plVar2[3] = 0;
    plVar3 = plVar2 + 1;
    plVar2[2] = (int64_t)plVar3;
    *plVar3 = (int64_t)plVar3;
    *plVar2 = (int64_t)&processed_var_8464_ptr;
    plVar2[6] = 0;
    plVar2[7] = 0;
    plVar2[8] = 0;
    *(int32_t *)(plVar2 + 9) = 0;
    *(uint64_t *)((int64_t)plVar2 + 0x4c) = 300;
    plVar2[4] = (int64_t)param_1;
    plVar2[5] = param_2;
    iVar1 = NetworkProtocol_e2d90(plVar2);
    if ((iVar1 == 0) && (iVar1 = (**(code **)(*param_1 + 8))(param_1,plVar2), iVar1 == 0)) {
      *param_3 = plVar2;
      return 0;
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,0);
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar2,&rendering_buffer_2144_ptr,0xc6,1);
  }
  return 0x26;
}
uint64_t NetworkProtocol_e2920(int64_t *param_1)
{
  int64_t *plVar1;
  uint64_t uVar2;
  if (param_1 != (int64_t *)0x0) {
    plVar1 = param_1 + 1;
    *(int64_t *)param_1[2] = *plVar1;
    *(int64_t *)(*plVar1 + 8) = param_1[2];
    param_1[2] = (int64_t)plVar1;
    *plVar1 = (int64_t)plVar1;
    uVar2 = (**(code **)(*param_1 + 0x10))();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}
// 函数: void NetworkProtocol_e2960(int64_t param_1)
void NetworkProtocol_e2960(int64_t param_1)
{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  uint64_t local_var_70;
  int aiStack_68 [2];
  int64_t *plStack_60;
  uint64_t local_var_58;
  int aiStack_50 [4];
  *(int32_t *)(param_1 + 0x48) = 0;
  uVar1 = *(uint64_t *)(*(int64_t *)(param_1 + 0x28) + 0xa0);
  SystemMemoryAllocator(uVar1);
  lVar3 = *(int64_t *)(param_1 + 0x28);
  local_var_70 = 0xffffffffffffffff;
  aiStack_68[0] = -1;
  lVar5 = *(int64_t *)(lVar3 + 0x90);
  SystemResource_Manager((int64_t *)(lVar5 + 0x108),&local_var_70,aiStack_68);
  if (aiStack_68[0] != -1) {
    iVar8 = aiStack_68[0];
    iVar9 = (int)local_var_70;
    do {
      do {
        local_var_58 = 0xffffffffffffffff;
        aiStack_50[0] = -1;
        plStack_60 = *(int64_t **)(*(int64_t *)(lVar5 + 0x118) + 0x18 + (int64_t)iVar8 * 0x20);
        NetworkSystem_ConnectionHandler(plStack_60,&local_var_58,aiStack_50);
        plVar2 = plStack_60;
        if (aiStack_50[0] != -1) {
          iVar7 = aiStack_50[0];
          iVar6 = (int)local_var_58;
          do {
            do {
              if (*(int64_t *)(plVar2[2] + 8 + (int64_t)iVar7 * 0x10) != 0) {
                NetworkProtocol_e20d0(param_1,0);
              }
            } while ((iVar7 != -1) &&
                    (iVar7 = *(int *)(plVar2[2] + 4 + (int64_t)iVar7 * 0x10), iVar7 != -1));
            iVar7 = iVar6 + 1;
            bVar10 = iVar6 != -1;
            iVar6 = 0;
            if (bVar10) {
              iVar6 = iVar7;
            }
            if (iVar6 != (int)plVar2[1]) {
              lVar3 = (int64_t)iVar6;
              do {
                if (*(int *)(*plVar2 + lVar3 * 4) != -1) {
                  iVar7 = *(int *)(*plVar2 + (int64_t)iVar6 * 4);
                  goto LAB_1808e2abb;
                }
                iVar6 = iVar6 + 1;
                lVar3 = lVar3 + 1;
              } while (lVar3 != (int)plVar2[1]);
            }
            iVar7 = -1;
            iVar6 = iVar7;
LAB_1808e2abb:
          } while (iVar7 != -1);
        }
      } while ((iVar8 != -1) &&
              (iVar8 = *(int *)(*(int64_t *)(lVar5 + 0x118) + 0x10 + (int64_t)iVar8 * 0x20),
              iVar8 != -1));
      iVar8 = iVar9 + 1;
      bVar10 = iVar9 != -1;
      iVar9 = 0;
      if (bVar10) {
        iVar9 = iVar8;
      }
      if (iVar9 != *(int *)(lVar5 + 0x110)) {
        lVar3 = *(int64_t *)(lVar5 + 0x108);
        lVar4 = (int64_t)iVar9;
        do {
          if (*(int *)(lVar3 + lVar4 * 4) != -1) {
            iVar8 = *(int *)(lVar3 + (int64_t)iVar9 * 4);
            goto LAB_1808e2b22;
          }
          iVar9 = iVar9 + 1;
          lVar4 = lVar4 + 1;
        } while (lVar4 != *(int *)(lVar5 + 0x110));
      }
      iVar8 = -1;
      iVar9 = iVar8;
LAB_1808e2b22:
    } while (iVar8 != -1);
    lVar3 = *(int64_t *)(param_1 + 0x28);
  }
  lVar3 = *(int64_t *)(lVar3 + 0x90);
  local_var_70 = 0xffffffffffffffff;
  aiStack_68[0] = -1;
  SystemResource_Manager((int64_t *)(lVar3 + 0x38),&local_var_70,aiStack_68);
  if (aiStack_68[0] != -1) {
    iVar8 = aiStack_68[0];
    iVar9 = (int)local_var_70;
    do {
      local_var_58 = 0xffffffffffffffff;
      aiStack_50[0] = -1;
      plStack_60 = *(int64_t **)(*(int64_t *)(lVar3 + 0x48) + 0x18 + (int64_t)iVar8 * 0x20);
      NetworkSystem_ConnectionHandler(plStack_60,&local_var_58,aiStack_50);
      plVar2 = plStack_60;
      if (aiStack_50[0] != -1) {
        iVar7 = aiStack_50[0];
        iVar6 = (int)local_var_58;
        do {
          do {
            if (*(int64_t *)(plVar2[2] + 8 + (int64_t)iVar7 * 0x10) != 0) {
              NetworkProtocol_e2430(param_1,0);
            }
          } while ((iVar7 != -1) &&
                  (iVar7 = *(int *)(plVar2[2] + 4 + (int64_t)iVar7 * 0x10), iVar7 != -1));
          iVar7 = iVar6 + 1;
          bVar10 = iVar6 != -1;
          iVar6 = 0;
          if (bVar10) {
            iVar6 = iVar7;
          }
          if (iVar6 != (int)plVar2[1]) {
            lVar5 = (int64_t)iVar6;
            do {
              if (*(int *)(*plVar2 + lVar5 * 4) != -1) {
                iVar7 = *(int *)(*plVar2 + (int64_t)iVar6 * 4);
                goto LAB_1808e2c3b;
              }
              iVar6 = iVar6 + 1;
              lVar5 = lVar5 + 1;
            } while (lVar5 != (int)plVar2[1]);
          }
          iVar7 = -1;
          iVar6 = iVar7;
LAB_1808e2c3b:
        } while (iVar7 != -1);
      }
      if ((iVar8 == -1) ||
         (iVar8 = *(int *)(*(int64_t *)(lVar3 + 0x48) + 0x10 + (int64_t)iVar8 * 0x20), iVar8 == -1
         )) {
        iVar8 = iVar9 + 1;
        bVar10 = iVar9 != -1;
        iVar9 = 0;
        if (bVar10) {
          iVar9 = iVar8;
        }
        if (iVar9 != *(int *)(lVar3 + 0x40)) {
          lVar5 = *(int64_t *)(lVar3 + 0x38);
          lVar4 = (int64_t)iVar9;
          do {
            if (*(int *)(lVar5 + lVar4 * 4) != -1) {
              iVar8 = *(int *)(lVar5 + (int64_t)iVar9 * 4);
              goto LAB_1808e2cc7;
            }
            iVar9 = iVar9 + 1;
            lVar4 = lVar4 + 1;
          } while (lVar4 != *(int *)(lVar3 + 0x40));
        }
        iVar8 = -1;
        iVar9 = iVar8;
      }
LAB_1808e2cc7:
    } while (iVar8 != -1);
  }
// WARNING: Subroutine does not return
  SystemMemoryManager(uVar1);
}