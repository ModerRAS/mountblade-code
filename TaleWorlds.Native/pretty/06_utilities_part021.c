// 原始函数语义化别名定义
// 本文件包含当前文件中使用的原始函数的语义化别名
// 这些别名提高了代码的可读性和维护性
#include "TaleWorlds.Native.Split.h"
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
// 06_utilities_part021.c - 12 个函数
// 函数: void NetworkProtocol_9cc29(void)
void NetworkProtocol_9cc29(void)
{
  return;
}
// 函数: void NetworkProtocol_9cc31(void)
void NetworkProtocol_9cc31(void)
{
  return;
}
// 函数: void NetworkProtocol_9cc41(void)
void NetworkProtocol_9cc41(void)
{
  return;
}
uint64_t NetworkProtocol_9cc80(int64_t param_1,int64_t *param_2)
{
  int64_t *plVar1;
  uint uVar2;
  uint64_t uVar3;
  int iVar4;
  uint astack_special_x_18 [2];
  uint astack_special_x_20 [2];
  int8_t stack_array_38 [32];
  uVar3 = DataFlowProcessor(param_2,stack_array_38,0,0x46454d50);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  astack_special_x_18[0] = *(uint *)(param_1 + 0x50);
  uVar2 = 0x1c;
  if (*(int *)(param_2[1] + 0x18) == 0) {
    plVar1 = (int64_t *)*param_2;
    if (*plVar1 == 0) {
      uVar3 = 0x1c;
    }
    else {
      if (plVar1[2] != 0) {
        astack_special_x_20[0] = 0;
        uVar3 = Function_49365015(*plVar1,astack_special_x_20);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        if ((uint64_t)plVar1[2] < (uint64_t)astack_special_x_20[0] + 4) {
          uVar3 = 0x11;
          goto LAB_18089cd46;
        }
      }
      uVar3 = SystemDataAnalyzer(*plVar1,astack_special_x_18,1,4,0);
    }
LAB_18089cd46:
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (0x3ff < astack_special_x_18[0]) {
      return 0xd;
    }
    uVar3 = NetworkProtocol_af280(param_1 + 0x48);
    if ((int)uVar3 == 0) goto LAB_18089cd76;
  }
  else {
    uVar3 = 0x1c;
  }
  if ((int)uVar3 != 0) {
    return uVar3;
  }
LAB_18089cd76:
  iVar4 = 0;
  if (0 < (int)astack_special_x_18[0]) {
    do {
      uVar3 = NetworkProtocol_acb90(param_1,param_2,iVar4);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)astack_special_x_18[0]);
  }
  if (*(uint *)(param_2 + 8) < 0x6e) {
    uVar2 = 0;
  }
  else if (*(int *)(param_2[1] + 0x18) == 0) {
    uVar2 = SystemCore_ProtocolProcessor(*param_2,param_1 + 0x5c);
  }
  if (uVar2 == 0) {
// WARNING: Subroutine does not return
    AdvancedSystemManager(param_2,stack_array_38);
  }
  return (uint64_t)uVar2;
}
uint64_t NetworkProtocol_9ccb9(void)
{
  int64_t *plVar1;
  uint uVar2;
  int64_t in_RAX;
  uint64_t uVar3;
  int iVar4;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  uint local_buffer_80;
  uint local_buffer_88;
  uVar2 = 0x1c;
  if (*(int *)(in_RAX + 0x18) == 0) {
    plVar1 = (int64_t *)*unaff_RSI;
    if (*plVar1 == 0) {
      uVar3 = 0x1c;
    }
    else {
      if (plVar1[2] != 0) {
        local_buffer_88 = 0;
        uVar3 = Function_49365015(*plVar1,&local_buffer_00000088);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        if ((uint64_t)plVar1[2] < (uint64_t)local_buffer_88 + 4) {
          uVar3 = 0x11;
          goto LAB_18089cd46;
        }
      }
      uVar3 = SystemDataAnalyzer(*plVar1,&local_buffer_00000080,1,4,0);
    }
LAB_18089cd46:
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (0x3ff < local_buffer_80) {
      return 0xd;
    }
    uVar3 = NetworkProtocol_af280(unaff_RBP + 0x48);
    if ((int)uVar3 == 0) goto LAB_18089cd76;
  }
  else {
    uVar3 = 0x1c;
  }
  if ((int)uVar3 != 0) {
    return uVar3;
  }
LAB_18089cd76:
  iVar4 = 0;
  if (0 < (int)local_buffer_80) {
    do {
      uVar3 = NetworkProtocol_acb90();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)local_buffer_80);
  }
  if (*(uint *)(unaff_RSI + 8) < 0x6e) {
    uVar2 = 0;
  }
  else if (*(int *)(unaff_RSI[1] + 0x18) == 0) {
    uVar2 = SystemCore_ProtocolProcessor(*unaff_RSI,unaff_RBP + 0x5c);
  }
  if (uVar2 != 0) {
    return (uint64_t)uVar2;
  }
// WARNING: Subroutine does not return
  AdvancedSystemManager();
}
uint64_t NetworkProtocol_9ce03(void)
{
  return 0;
}
uint64_t NetworkProtocol_9ce16(void)
{
  return 0xd;
}
// 函数: void NetworkProtocol_9ce25(void)
void NetworkProtocol_9ce25(void)
{
  return;
}
uint64_t NetworkProtocol_9ce30(int64_t param_1,int64_t *param_2)
{
  int64_t *plVar1;
  uint64_t uVar2;
  uint uVar3;
  bool bVar4;
  uint astack_special_x_18 [2];
  uint astack_special_x_20 [2];
  int8_t stack_array_48 [32];
  uVar2 = DataFlowProcessor(param_2,stack_array_48,0,0x54534c50);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  plVar1 = (int64_t *)*param_2;
  uVar3 = 0x1c;
  if (*plVar1 == 0) {
    uVar2 = 0x1c;
  }
  else {
    if (plVar1[2] != 0) {
      astack_special_x_18[0] = 0;
      uVar2 = Function_49365015(*plVar1,astack_special_x_18);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if ((uint64_t)plVar1[2] < (uint64_t)astack_special_x_18[0] + 4) {
        uVar2 = 0x11;
        goto LAB_18089cef2;
      }
    }
    uVar2 = SystemDataAnalyzer(*plVar1,astack_special_x_20,1,4,0);
  }
LAB_18089cef2:
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  *(uint *)(param_1 + 0x10) = astack_special_x_20[0];
  uVar2 = 0xd;
  if (astack_special_x_20[0] < 5) {
    uVar2 = 0;
  }
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  plVar1 = (int64_t *)*param_2;
  if (*plVar1 == 0) {
    uVar2 = 0x1c;
  }
  else {
    if (plVar1[2] != 0) {
      astack_special_x_18[0] = 0;
      uVar2 = Function_49365015(*plVar1,astack_special_x_18);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if ((uint64_t)plVar1[2] < (uint64_t)astack_special_x_18[0] + 4) {
        uVar2 = 0x11;
        goto LAB_18089cf93;
      }
    }
    uVar2 = SystemDataAnalyzer(*plVar1,astack_special_x_20,1,4,0);
  }
LAB_18089cf93:
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  *(uint *)(param_1 + 0x14) = astack_special_x_20[0];
  uVar2 = 0xd;
  if (astack_special_x_20[0] < 3) {
    uVar2 = 0;
  }
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar2 = NetworkProtocol_a5150(param_2,param_1,0);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (2 < (int)param_2[8] - 0x65U) goto LAB_18089d07f;
  bVar4 = false;
  if (*(int *)(param_2[1] + 0x18) != 0) goto LAB_18089d06e;
  plVar1 = (int64_t *)*param_2;
  if (*plVar1 != 0) {
    if (plVar1[2] == 0) {
LAB_18089d034:
      uVar3 = SystemDataAnalyzer(*plVar1,astack_special_x_18,1,1,0);
    }
    else {
      astack_special_x_20[0] = 0;
      uVar3 = Function_49365015(*plVar1,astack_special_x_20);
      if (uVar3 == 0) {
        if ((uint64_t)astack_special_x_20[0] + 1 <= (uint64_t)plVar1[2]) goto LAB_18089d034;
        uVar3 = 0x11;
      }
    }
  }
  if (uVar3 == 0) {
    bVar4 = (char)astack_special_x_18[0] != '\0';
    uVar3 = 0;
  }
  if (uVar3 != 0) {
LAB_18089d06e:
    return (uint64_t)uVar3;
  }
  if (bVar4) {
    *(int32_t *)(param_1 + 0x10) = 3;
  }
LAB_18089d07f:
// WARNING: Subroutine does not return
  AdvancedSystemManager(param_2,stack_array_48);
}
uint64_t NetworkProtocol_9ce60(void)
{
  int64_t *plVar1;
  int64_t in_RAX;
  uint64_t uVar2;
  uint uVar3;
  int64_t *unaff_RDI;
  int64_t unaff_R14;
  bool bVar4;
  char cStack0000000000000090;
  uint local_buffer_98;
  if (*(int *)(in_RAX + 0x18) != 0) {
    return 0x1c;
  }
  plVar1 = (int64_t *)*unaff_RDI;
  uVar3 = 0x1c;
  if (*plVar1 == 0) {
    uVar2 = 0x1c;
  }
  else {
    if (plVar1[2] != 0) {
      _cStack0000000000000090 = 0;
      uVar2 = Function_49365015(*plVar1,&local_buffer_00000090);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if ((uint64_t)plVar1[2] < (uint64_t)_cStack0000000000000090 + 4) {
        uVar2 = 0x11;
        goto LAB_18089cef2;
      }
    }
    uVar2 = SystemDataAnalyzer(*plVar1,&local_buffer_00000098,1,4,0);
  }
LAB_18089cef2:
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  *(uint *)(unaff_R14 + 0x10) = local_buffer_98;
  uVar2 = 0xd;
  if (local_buffer_98 < 5) {
    uVar2 = 0;
  }
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (*(int *)(unaff_RDI[1] + 0x18) != 0) {
    return 0x1c;
  }
  plVar1 = (int64_t *)*unaff_RDI;
  if (*plVar1 == 0) {
    uVar2 = 0x1c;
  }
  else {
    if (plVar1[2] != 0) {
      _cStack0000000000000090 = 0;
      uVar2 = Function_49365015(*plVar1,&local_buffer_00000090);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if ((uint64_t)plVar1[2] < (uint64_t)_cStack0000000000000090 + 4) {
        uVar2 = 0x11;
        goto LAB_18089cf93;
      }
    }
    uVar2 = SystemDataAnalyzer(*plVar1,&local_buffer_00000098,1,4,0);
  }
LAB_18089cf93:
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  *(uint *)(unaff_R14 + 0x14) = local_buffer_98;
  uVar2 = 0xd;
  if (local_buffer_98 < 3) {
    uVar2 = 0;
  }
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar2 = NetworkProtocol_a5150();
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (2 < (int)unaff_RDI[8] - 0x65U) goto LAB_18089d07f;
  bVar4 = false;
  if (*(int *)(unaff_RDI[1] + 0x18) != 0) goto LAB_18089d06e;
  plVar1 = (int64_t *)*unaff_RDI;
  if (*plVar1 != 0) {
    if (plVar1[2] == 0) {
LAB_18089d034:
      uVar3 = SystemDataAnalyzer(*plVar1,&local_buffer_00000090,1,1,0);
    }
    else {
      local_buffer_98 = 0;
      uVar3 = Function_49365015(*plVar1,&local_buffer_00000098);
      if (uVar3 == 0) {
        if ((uint64_t)local_buffer_98 + 1 <= (uint64_t)plVar1[2]) goto LAB_18089d034;
        uVar3 = 0x11;
      }
    }
  }
  if (uVar3 == 0) {
    bVar4 = cStack0000000000000090 != '\0';
    uVar3 = 0;
  }
  if (uVar3 != 0) {
LAB_18089d06e:
    return (uint64_t)uVar3;
  }
  if (bVar4) {
    *(int32_t *)(unaff_R14 + 0x10) = 3;
  }
LAB_18089d07f:
// WARNING: Subroutine does not return
  AdvancedSystemManager();
}
uint64_t NetworkProtocol_9cfd6(void)
{
  int64_t *plVar1;
  uint in_EAX;
  uint uVar2;
  uint64_t unaff_RBX;
  int64_t *unaff_RDI;
  int64_t unaff_R14;
  uint64_t unaff_R15;
  char local_buffer_90;
  uint local_buffer_98;
  uVar2 = (uint)unaff_RBX;
  if (2 < in_EAX) goto LAB_18089d07f;
  if (*(uint *)(unaff_RDI[1] + 0x18) != (uint)unaff_R15) goto LAB_18089d06e;
  plVar1 = (int64_t *)*unaff_RDI;
  if (*plVar1 != 0) {
    if (plVar1[2] == unaff_R15) {
LAB_18089d034:
      uVar2 = SystemDataAnalyzer(*plVar1,&local_buffer_00000090,1);
    }
    else {
      local_buffer_98 = (uint)unaff_R15;
      uVar2 = Function_49365015(*plVar1,&local_buffer_00000098);
      if (uVar2 == 0) {
        if ((uint64_t)local_buffer_98 + 1 <= (uint64_t)plVar1[2]) goto LAB_18089d034;
        uVar2 = 0x11;
      }
    }
  }
  unaff_RBX = (uint64_t)uVar2;
  if (uVar2 == 0) {
    unaff_RBX = unaff_R15 & 0xffffffff;
  }
  if ((int)unaff_RBX != 0) {
LAB_18089d06e:
    return unaff_RBX & 0xffffffff;
  }
  if (uVar2 == 0 && local_buffer_90 != (char)unaff_R15) {
    *(int32_t *)(unaff_R14 + 0x10) = 3;
  }
LAB_18089d07f:
// WARNING: Subroutine does not return
  AdvancedSystemManager();
}
// 函数: void NetworkProtocol_9d091(void)
void NetworkProtocol_9d091(void)
{
  return;
}
// 函数: void NetworkProtocol_9d0a3(void)
void NetworkProtocol_9d0a3(void)
{
  return;
}
// 函数: void NetworkProtocol_9d0b0(int64_t param_1,uint64_t param_2)
void NetworkProtocol_9d0b0(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = NetworkProtocol_9ce30(param_1 + 0xd8);
  if (iVar1 == 0) {
    NetworkProtocol_9b7d0(param_1,param_2);
  }
  return;
}
uint64_t NetworkProtocol_9d0f0(int64_t param_1,uint64_t *param_2)
{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int8_t stack_array_48 [32];
  int8_t stack_array_28 [32];
  uVar2 = DataFlowProcessor(param_2,stack_array_28,1,0x46464550);
  if (((((int)uVar2 != 0) ||
       (uVar2 = DataFlowProcessor(param_2,stack_array_48,0,0x42464550), (int)uVar2 != 0)) ||
      (uVar2 = SystemCore_ConfigManager(param_2,param_1 + 0x10), (int)uVar2 != 0)) ||
     ((*(uint *)(param_2 + 8) < 0x5b &&
      (uVar2 = NetworkProtocol_afc70(param_2,param_1 + 0x44), (int)uVar2 != 0)))) {
    return uVar2;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar1 = SystemCore_Validator(*param_2,param_1 + 0x60);
  uVar2 = (uint64_t)uVar1;
  if (uVar1 == 0) {
    uVar2 = 0x1c;
    if (*(uint *)(param_2 + 8) < 0x36) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar2;
      if (*(int *)(param_2[1] + 0x18) == 0) {
        uVar3 = SystemCore_Validator(*param_2,param_1 + 0x70);
      }
    }
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (*(uint *)(param_2 + 8) < 0x3d) {
      uVar2 = 0;
    }
    else if (*(int *)(param_2[1] + 0x18) == 0) {
      uVar1 = SystemCore_ProtocolProcessor(*param_2,param_1 + 0x40);
      uVar2 = (uint64_t)uVar1;
    }
    if ((int)uVar2 == 0) {
// WARNING: Subroutine does not return
      AdvancedSystemManager(param_2,stack_array_48);
    }
  }
  return uVar2;
}
uint64_t NetworkProtocol_9d171(void)
{
  uint uVar1;
  int64_t in_RAX;
  uint64_t uVar2;
  uint64_t *unaff_RBX;
  int64_t unaff_RSI;
  uint64_t uVar3;
  if (*(int *)(in_RAX + 0x18) != 0) {
    return 0x1c;
  }
  uVar1 = SystemCore_Validator(*unaff_RBX,unaff_RSI + 0x60);
  uVar3 = (uint64_t)uVar1;
  if (uVar1 == 0) {
    uVar3 = 0x1c;
    if (*(uint *)(unaff_RBX + 8) < 0x36) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar3;
      if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
        uVar2 = SystemCore_Validator(*unaff_RBX,unaff_RSI + 0x70);
      }
    }
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*(uint *)(unaff_RBX + 8) < 0x3d) {
      uVar3 = 0;
    }
    else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      uVar1 = SystemCore_ProtocolProcessor(*unaff_RBX,unaff_RSI + 0x40);
      uVar3 = (uint64_t)uVar1;
    }
    if ((int)uVar3 == 0) {
// WARNING: Subroutine does not return
      AdvancedSystemManager();
    }
  }
  return uVar3;
}
uint64_t NetworkProtocol_9d193(void)
{
  uint uVar1;
  uint64_t uVar2;
  uint64_t *unaff_RBX;
  int64_t unaff_RSI;
  uint64_t uVar3;
  uVar1 = SystemCore_Validator(*unaff_RBX,unaff_RSI + 0x60);
  uVar3 = (uint64_t)uVar1;
  if (uVar1 == 0) {
    uVar3 = 0x1c;
    if (*(uint *)(unaff_RBX + 8) < 0x36) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar3;
      if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
        uVar2 = SystemCore_Validator(*unaff_RBX,unaff_RSI + 0x70);
      }
    }
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*(uint *)(unaff_RBX + 8) < 0x3d) {
      uVar3 = 0;
    }
    else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      uVar1 = SystemCore_ProtocolProcessor(*unaff_RBX,unaff_RSI + 0x40);
      uVar3 = (uint64_t)uVar1;
    }
    if ((int)uVar3 == 0) {
// WARNING: Subroutine does not return
      AdvancedSystemManager();
    }
  }
  return uVar3;
}
// 函数: void NetworkProtocol_9d208(void)
void NetworkProtocol_9d208(void)
{
// WARNING: Subroutine does not return
  AdvancedSystemManager();
}
// 函数: void NetworkProtocol_9d23a(void)
void NetworkProtocol_9d23a(void)
{
  return;
}
uint64_t NetworkProtocol_9d250(uint64_t param_1,int64_t *param_2)
{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int aiStackX_18 [2];
  uint astack_special_x_20 [2];
  int32_t stack_array_68 [2];
  int64_t lStack_60;
  int8_t stack_array_58 [32];
  int8_t stack_array_38 [32];
  uVar3 = DataFlowProcessor(param_2,stack_array_38,1,0x53505250);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  aiStackX_18[0] = 0;
  uVar3 = SystemCore_EncryptionManager(param_2,aiStackX_18);
  if ((int)uVar3 == 0x12) {
LAB_18089d455:
// WARNING: Subroutine does not return
    AdvancedSystemManager(param_2,stack_array_38);
  }
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if (aiStackX_18[0] < 1) goto LAB_18089d455;
  uVar3 = DataFlowProcessor(param_2,stack_array_58,0,0x504f5250);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  stack_array_68[0] = 0;
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  plVar1 = (int64_t *)*param_2;
  if (*plVar1 == 0) {
    uVar3 = 0x1c;
  }
  else {
    if (plVar1[2] != 0) {
      astack_special_x_20[0] = 0;
      uVar3 = Function_49365015(*plVar1,astack_special_x_20);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if ((uint64_t)plVar1[2] < (uint64_t)astack_special_x_20[0] + 4) {
        uVar3 = 0x11;
        goto LAB_18089d378;
      }
    }
    uVar3 = SystemDataAnalyzer(*plVar1,stack_array_68,1,4,0);
  }
LAB_18089d378:
  if ((int)uVar3 == 0) {
    lStack_60 = 0;
    uVar3 = NetworkProtocol_b0490(param_1,stack_array_68[0],&lStack_60);
    lVar2 = lStack_60;
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (*(int *)(param_2[1] + 0x18) == 0) {
      uVar3 = SystemErrorHandler(*param_2,lStack_60 + 0x48,2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (*(int *)(param_2[1] + 0x18) == 0) {
        uVar3 = SystemErrorHandler(*param_2,lVar2 + 0x4a,2);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = SystemCore_ConfigManager(param_2,lVar2 + 0x30);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = NetworkProtocol_a79f0(param_2,lVar2 + 0x20);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = NetworkProtocol_a5d60(param_2,lVar2 + 0x10,0);
        if ((int)uVar3 == 0) {
          *(int32_t *)(lVar2 + 0x44) = 0xffffffff;
          goto LAB_18089d435;
        }
      }
      else {
        uVar3 = 0x1c;
      }
    }
    else {
      uVar3 = 0x1c;
    }
    if ((int)uVar3 == 0) {
LAB_18089d435:
// WARNING: Subroutine does not return
      AdvancedSystemManager(param_2,stack_array_58);
    }
  }
  return uVar3;
}
uint64_t NetworkProtocol_9d281(void)
{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *unaff_RBX;
  int32_t local_var_30;
  int64_t local_var_38;
  int iStack00000000000000b0;
  uint local_buffer_b8;
  iStack00000000000000b0 = 0;
  uVar3 = SystemCore_EncryptionManager();
  if ((int)uVar3 == 0x12) {
LAB_18089d455:
// WARNING: Subroutine does not return
    AdvancedSystemManager();
  }
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if (iStack00000000000000b0 < 1) goto LAB_18089d455;
  uVar3 = DataFlowProcessor();
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  local_var_30 = 0;
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  plVar1 = (int64_t *)*unaff_RBX;
  if (*plVar1 == 0) {
    uVar3 = 0x1c;
  }
  else {
    if (plVar1[2] != 0) {
      local_buffer_b8 = 0;
      uVar3 = Function_49365015(*plVar1,&local_buffer_000000b8);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if ((uint64_t)plVar1[2] < (uint64_t)local_buffer_b8 + 4) {
        uVar3 = 0x11;
        goto LAB_18089d378;
      }
    }
    uVar3 = SystemDataAnalyzer(*plVar1,&local_buffer_00000030,1,4,0);
  }
LAB_18089d378:
  if ((int)uVar3 == 0) {
    local_var_38 = 0;
    uVar3 = NetworkProtocol_b0490();
    lVar2 = local_var_38;
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      uVar3 = SystemErrorHandler(*unaff_RBX,local_var_38 + 0x48,2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
        uVar3 = SystemErrorHandler(*unaff_RBX,lVar2 + 0x4a,2);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = SystemCore_ConfigManager();
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = NetworkProtocol_a79f0();
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = NetworkProtocol_a5d60();
        if ((int)uVar3 == 0) {
          *(int32_t *)(lVar2 + 0x44) = 0xffffffff;
          goto LAB_18089d435;
        }
      }
      else {
        uVar3 = 0x1c;
      }
    }
    else {
      uVar3 = 0x1c;
    }
    if ((int)uVar3 == 0) {
LAB_18089d435:
// WARNING: Subroutine does not return
      AdvancedSystemManager();
    }
  }
  return uVar3;
}
// 函数: void NetworkProtocol_9d47a(void)
void NetworkProtocol_9d47a(void)
{
  return;
}
uint64_t NetworkProtocol_9d484(void)
{
  return 0x1c;
}
uint64_t NetworkProtocol_9d490(int64_t param_1,uint64_t *param_2)
{
  uint64_t uVar1;
  uVar1 = UISystemEventHandler(param_2,0);
  if ((int)uVar1 == 0) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = UIEventHandler(*param_2,param_1 + 0x10);
    if (((int)uVar1 == 0) && (uVar1 = NetworkProtocol_afc70(param_2,param_1 + 8), (int)uVar1 == 0)) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar1 = SystemErrorHandler(*param_2,param_1 + 0xc,4);
      if ((int)uVar1 == 0) {
        uVar1 = SystemCore_Initializer(param_2,0);
      }
    }
  }
  return uVar1;
}
// 函数: void NetworkProtocol_9d520(int64_t param_1,uint64_t *param_2)
void NetworkProtocol_9d520(int64_t param_1,uint64_t *param_2)
{
  int iVar1;
  int8_t stack_array_48 [32];
  int8_t stack_array_28 [32];
  iVar1 = DataFlowProcessor(param_2,stack_array_28,1,0x4a4f5250);
  if (((iVar1 == 0) && (iVar1 = DataFlowProcessor(param_2,stack_array_48,0,0x494b4e42), iVar1 == 0)) &&
     (iVar1 = SystemCore_ConfigManager(param_2,param_1 + 0x10), iVar1 == 0)) {
    if (*(uint *)(param_2 + 8) < 0x37) {
      iVar1 = 0;
    }
    else if (*(int *)(param_2[1] + 0x18) == 0) {
      iVar1 = SystemErrorHandler(*param_2,param_1 + 0x210,8);
    }
    else {
      iVar1 = 0x1c;
    }
    if (iVar1 == 0) {
      *(int32_t *)(param_1 + 0x218) = *(int32_t *)(param_2 + 8);
      if (*(uint *)(param_2 + 8) < 0x41) {
        iVar1 = 0;
      }
      else if (*(int *)(param_2[1] + 0x18) == 0) {
        iVar1 = SystemErrorHandler(*param_2,param_1 + 0x2f4,4);
      }
      else {
        iVar1 = 0x1c;
      }
      if (iVar1 == 0) {
        if (*(uint *)(param_2 + 8) < 0x4d) {
          iVar1 = 0;
        }
        else if (*(int *)(param_2[1] + 0x18) == 0) {
          iVar1 = SystemErrorHandler(*param_2,param_1 + 0x21c,4);
        }
        else {
          iVar1 = 0x1c;
        }
        if (iVar1 == 0) {
          *(int32_t *)(param_1 + 0x200) = *(int32_t *)(param_1 + 0x10);
          *(int32_t *)(param_1 + 0x204) = *(int32_t *)(param_1 + 0x14);
          *(int32_t *)(param_1 + 0x208) = *(int32_t *)(param_1 + 0x18);
          *(int32_t *)(param_1 + 0x20c) = *(int32_t *)(param_1 + 0x1c);
// WARNING: Subroutine does not return
          AdvancedSystemManager(param_2,stack_array_48);
        }
      }
    }
  }
  return;
}
// 函数: void NetworkProtocol_9d557(int32_t param_1)
void NetworkProtocol_9d557(int32_t param_1)
{
  int iVar1;
  uint64_t *unaff_RBX;
  int64_t unaff_RDI;
  int32_t extraout_XMM0_Da;
  iVar1 = DataFlowProcessor(param_1,&local_buffer_00000030,0);
  if (iVar1 == 0) {
    iVar1 = SystemCore_ConfigManager(extraout_XMM0_Da,unaff_RDI + 0x10);
    if (iVar1 == 0) {
      if (*(uint *)(unaff_RBX + 8) < 0x37) {
        iVar1 = 0;
      }
      else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
        iVar1 = SystemErrorHandler(*unaff_RBX,unaff_RDI + 0x210,8);
      }
      else {
        iVar1 = 0x1c;
      }
      if (iVar1 == 0) {
        *(int32_t *)(unaff_RDI + 0x218) = *(int32_t *)(unaff_RBX + 8);
        if (*(uint *)(unaff_RBX + 8) < 0x41) {
          iVar1 = 0;
        }
        else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
          iVar1 = SystemErrorHandler(*unaff_RBX,unaff_RDI + 0x2f4,4);
        }
        else {
          iVar1 = 0x1c;
        }
        if (iVar1 == 0) {
          if (*(uint *)(unaff_RBX + 8) < 0x4d) {
            iVar1 = 0;
          }
          else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
            iVar1 = SystemErrorHandler(*unaff_RBX,unaff_RDI + 0x21c,4);
          }
          else {
            iVar1 = 0x1c;
          }
          if (iVar1 == 0) {
            *(int32_t *)(unaff_RDI + 0x200) = *(int32_t *)(unaff_RDI + 0x10);
            *(int32_t *)(unaff_RDI + 0x204) = *(int32_t *)(unaff_RDI + 0x14);
            *(int32_t *)(unaff_RDI + 0x208) = *(int32_t *)(unaff_RDI + 0x18);
            *(int32_t *)(unaff_RDI + 0x20c) = *(int32_t *)(unaff_RDI + 0x1c);
// WARNING: Subroutine does not return
            AdvancedSystemManager(*(int32_t *)(unaff_RDI + 0x10),&local_buffer_00000030);
          }
        }
      }
    }
  }
  return;
}