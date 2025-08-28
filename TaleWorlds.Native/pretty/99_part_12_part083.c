#include "TaleWorlds.Native.Split.h"
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_12_part083.c - 3 个函数
// 函数: void NetworkProtocol_a27e0(void)
void NetworkProtocol_a27e0(void)
{
  return;
}
uint64_t NetworkProtocol_a27f0(int64_t param_1,uint64_t *param_2)
{
  uint64_t uVar1;
  uint *puVar2;
  uint uVar3;
  int16_t astack_special_x_10 [4];
  uint astack_special_x_18 [4];
  uVar3 = *(int *)(param_2 + 1) - 1;
  if (*(int *)(param_2 + 1) < 1) {
    uVar3 = 0;
  }
  if (uVar3 < 0x8000) {
    astack_special_x_10[0] = (int16_t)uVar3;
    uVar1 = 2;
    puVar2 = (uint *)astack_special_x_10;
  }
  else {
    puVar2 = astack_special_x_18;
    uVar1 = 4;
    astack_special_x_18[0] = (uVar3 & 0xffffc000 | 0x4000) * 2 | uVar3 & 0x7fff;
  }
  uVar1 = (**(code **)**(uint64_t **)(param_1 + 8))(*(uint64_t **)(param_1 + 8),puVar2,uVar1);
  if ((int)uVar1 == 0) {
    if ((uVar3 != 0) &&
       (uVar1 = (**(code **)**(uint64_t **)(param_1 + 8))
                          (*(uint64_t **)(param_1 + 8),*param_2,(int64_t)(int)uVar3),
       (int)uVar1 != 0)) {
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}
uint64_t NetworkProtocol_a2890(int64_t *param_1,int32_t *param_2,int param_3)
{
  uint64_t uVar1;
  int32_t uVar2;
  int aiStackX_8 [2];
  uint astack_special_x_18 [4];
  uVar2 = 0;
  if (*param_1 == 0) {
    uVar1 = 0x1c;
  }
  else {
    if (param_1[2] != 0) {
      astack_special_x_18[0] = 0;
      uVar1 = SystemFunction_00018076a7d0(*param_1,astack_special_x_18);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if ((uint64_t)param_1[2] < (uint64_t)astack_special_x_18[0] + 4) {
        uVar1 = 0x11;
        goto LAB_1808a2902;
      }
    }
    uVar1 = SystemDataAnalyzer(*param_1,aiStackX_8,1,4,0);
  }
LAB_1808a2902:
  if ((int)uVar1 == 0) {
    if ((-1 < aiStackX_8[0]) && (aiStackX_8[0] < param_3)) {
      switch(aiStackX_8[0]) {
      case 1:
        *param_2 = 1;
        return 0;
      case 2:
        *param_2 = 2;
        return 0;
      case 3:
        *param_2 = 3;
        return 0;
      case 4:
        *param_2 = 4;
        return 0;
      case 5:
        *param_2 = 5;
        return 0;
      case 6:
        *param_2 = 6;
        return 0;
      case 7:
        *param_2 = 7;
        return 0;
      case 8:
        *param_2 = 8;
        return 0;
      case 9:
        *param_2 = 9;
        return 0;
      case 10:
        *param_2 = 10;
        return 0;
      case 0xb:
        *param_2 = 0xb;
        return 0;
      case 0xc:
        *param_2 = 0xc;
        return 0;
      case 0xd:
        *param_2 = 0xd;
        return 0;
      case 0xe:
        *param_2 = 0xe;
        return 0;
      case 0xf:
        *param_2 = 0xf;
        return 0;
      case 0x10:
        *param_2 = 0x10;
        return 0;
      case 0x11:
        *param_2 = 0x11;
        return 0;
      case 0x12:
        *param_2 = 0x12;
        return 0;
      case 0x13:
        *param_2 = 0x13;
        return 0;
      case 0x14:
        *param_2 = 0x14;
        return 0;
      case 0x15:
        *param_2 = 0x15;
        return 0;
      case 0x16:
        *param_2 = 0x16;
        return 0;
      case 0x17:
        *param_2 = 0x17;
        return 0;
      case 0x18:
        *param_2 = 0x18;
        return 0;
      case 0x19:
        *param_2 = 0x19;
        return 0;
      case 0x1a:
        *param_2 = 0x1a;
        return 0;
      case 0x1b:
        *param_2 = 0x1b;
        return 0;
      case 0x1c:
        *param_2 = 0x1c;
        return 0;
      case 0x1d:
        *param_2 = 0x1d;
        return 0;
      case 0x1e:
        *param_2 = 0x1e;
        return 0;
      case 0x1f:
        *param_2 = 0x1f;
        return 0;
      case 0x20:
        *param_2 = 0x20;
        return 0;
      case 0x21:
        *param_2 = 0x21;
        return 0;
      case 0x22:
        *param_2 = 0x22;
        return 0;
      case 0x23:
        *param_2 = 0x23;
        return 0;
      case 0x24:
        uVar2 = 0x24;
      }
      *param_2 = uVar2;
      return 0;
    }
    uVar1 = 0xd;
  }
  return uVar1;
}
uint64_t NetworkProtocol_a2d50(int64_t *param_1,uint *param_2)
{
  uint64_t uVar1;
  uint astack_special_x_8 [2];
  uint astack_special_x_18 [2];
  if (*(int *)(param_1[1] + 0x18) != 0) {
    return 0x1c;
  }
  param_1 = (int64_t *)*param_1;
  if (*param_1 == 0) {
    uVar1 = 0x1c;
    goto LAB_1808a2dd3;
  }
  if (param_1[2] != 0) {
    astack_special_x_8[0] = 0;
    uVar1 = SystemFunction_00018076a7d0(*param_1,astack_special_x_8);
    if ((int)uVar1 != 0) goto LAB_1808a2dd3;
    if ((uint64_t)param_1[2] < (uint64_t)astack_special_x_8[0] + 4) {
      uVar1 = 0x11;
      goto LAB_1808a2dd3;
    }
  }
  uVar1 = SystemDataAnalyzer(*param_1,astack_special_x_18,1,4,0);
LAB_1808a2dd3:
  if ((int)uVar1 == 0) {
    *param_2 = astack_special_x_18[0];
    uVar1 = 0xd;
    if (astack_special_x_18[0] < 4) {
      uVar1 = 0;
    }
  }
  return uVar1;
}
uint64_t NetworkProtocol_a2d6e(int64_t *param_1)
{
  uint64_t uVar1;
  uint *unaff_RDI;
  uint local_var_40;
  uint local_buffer_50;
  param_1 = (int64_t *)*param_1;
  if (*param_1 == 0) {
    uVar1 = 0x1c;
    goto LAB_1808a2dd3;
  }
  if (param_1[2] != 0) {
    local_var_40 = 0;
    uVar1 = SystemFunction_00018076a7d0(*param_1,&local_buffer_00000040);
    if ((int)uVar1 != 0) goto LAB_1808a2dd3;
    if ((uint64_t)param_1[2] < (uint64_t)local_var_40 + 4) {
      uVar1 = 0x11;
      goto LAB_1808a2dd3;
    }
  }
  uVar1 = SystemDataAnalyzer(*param_1,&local_buffer_00000050,1,4,0);
LAB_1808a2dd3:
  if ((int)uVar1 == 0) {
    *unaff_RDI = local_buffer_50;
    uVar1 = 0xd;
    if (local_buffer_50 < 4) {
      uVar1 = 0;
    }
  }
  return uVar1;
}
int32_t NetworkProtocol_a2ddc(void)
{
  int32_t uVar1;
  int32_t unaff_ESI;
  uint *unaff_RDI;
  uint local_buffer_50;
  *unaff_RDI = local_buffer_50;
  uVar1 = 0xd;
  if (local_buffer_50 < 4) {
    uVar1 = unaff_ESI;
  }
  return uVar1;
}
// 函数: void SystemCore_ProtocolProcessor(int64_t *param_1,uint64_t param_2)
void SystemCore_ProtocolProcessor(int64_t *param_1,uint64_t param_2)
{
  int iVar1;
  char acStackX_8 [8];
  uint astack_special_x_18 [4];
  if (*param_1 == 0) {
    iVar1 = 0x1c;
  }
  else {
    if (param_1[2] != 0) {
      astack_special_x_18[0] = 0;
      iVar1 = SystemFunction_00018076a7d0(*param_1,astack_special_x_18);
      if (iVar1 != 0) {
        return;
      }
      if ((uint64_t)param_1[2] < (uint64_t)astack_special_x_18[0] + 1) {
        iVar1 = 0x11;
        goto LAB_1808a2e6d;
      }
    }
    iVar1 = SystemDataAnalyzer(*param_1,acStackX_8,1,1,0);
  }
LAB_1808a2e6d:
  if (iVar1 == 0) {
    *(bool *)param_2 = acStackX_8[0] != '\0';
  }
  return;
}
uint64_t NetworkProtocol_a2e90(int64_t *param_1,int8_t *param_2)
{
  uint64_t uVar1;
  int8_t astack_special_x_8 [32];
  if (*(int *)(param_1[1] + 0x18) != 0) {
    return 0x1c;
  }
  astack_special_x_8[0] = *param_2;
  uVar1 = (**(code **)**(uint64_t **)(*param_1 + 8))(*(uint64_t **)(*param_1 + 8),astack_special_x_8,1);
  return uVar1;
}
uint64_t NetworkProtocol_a2ed0(int64_t param_1,int64_t *param_2,int32_t param_3)
{
  int64_t lVar1;
  int64_t *plVar2;
  uint uVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint uVar7;
  bool bVar8;
  char acStackX_20 [8];
  uint stack_array_48 [2];
  int8_t stack_array_40 [40];
  uVar5 = DataFlowProcessor(param_2,stack_array_40,0,param_3);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  uVar5 = SystemCore_ConfigManager(param_2,param_1 + 0x10);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  lVar1 = *param_2;
  uVar3 = SystemErrorHandler(lVar1,param_1 + 0x60,4);
  uVar5 = (uint64_t)uVar3;
  if (uVar3 == 0) {
    uVar3 = SystemErrorHandler(lVar1,param_1 + 100,2);
    uVar5 = (uint64_t)uVar3;
    if (uVar3 == 0) {
      uVar3 = SystemErrorHandler(lVar1,param_1 + 0x66,2);
      uVar5 = (uint64_t)uVar3;
      if (uVar3 == 0) {
        uVar3 = SystemErrorHandler(lVar1,param_1 + 0x68,8);
        uVar5 = (uint64_t)uVar3;
      }
    }
  }
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  uVar5 = SystemCore_ConfigManager(param_2,param_1 + 0x30);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  lVar1 = *param_2;
  uVar3 = SystemErrorHandler(lVar1,param_1 + 0x40,4);
  uVar5 = (uint64_t)uVar3;
  if (uVar3 == 0) {
    uVar3 = SystemErrorHandler(lVar1,param_1 + 0x44,2);
    uVar5 = (uint64_t)uVar3;
    if (uVar3 == 0) {
      uVar3 = SystemErrorHandler(lVar1,param_1 + 0x46,2);
      uVar5 = (uint64_t)uVar3;
      if (uVar3 == 0) {
        uVar3 = SystemErrorHandler(lVar1,param_1 + 0x48,8);
        uVar5 = (uint64_t)uVar3;
      }
    }
  }
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  lVar1 = *param_2;
  uVar3 = SystemErrorHandler(lVar1,param_1 + 0x50,4);
  uVar5 = (uint64_t)uVar3;
  if (uVar3 == 0) {
    uVar3 = SystemErrorHandler(lVar1,param_1 + 0x54,2);
    uVar5 = (uint64_t)uVar3;
    if (uVar3 == 0) {
      uVar3 = SystemErrorHandler(lVar1,param_1 + 0x56,2);
      uVar5 = (uint64_t)uVar3;
      if (uVar3 == 0) {
        uVar3 = SystemErrorHandler(lVar1,param_1 + 0x58,8);
        uVar5 = (uint64_t)uVar3;
      }
    }
  }
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = SystemErrorHandler(*param_2,param_1 + 0xd8,4);
  if (uVar3 != 0) {
    return (uint64_t)uVar3;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = SystemErrorHandler(*param_2,param_1 + 0xdc,4);
  if (uVar3 != 0) {
    return (uint64_t)uVar3;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  plVar2 = (int64_t *)*param_2;
  uVar5 = 0;
  uVar7 = 1;
  uVar3 = 0x1c;
  if (*plVar2 == 0) {
    uVar4 = 0x1c;
  }
  else {
    if (plVar2[2] != 0) {
      stack_array_48[0] = 0;
      uVar4 = SystemFunction_00018076a7d0(*plVar2,stack_array_48);
      bVar8 = uVar4 == 0;
      if (!bVar8) goto LAB_1808a3163;
      if ((uint64_t)plVar2[2] < (uint64_t)stack_array_48[0] + 1) {
        uVar4 = 0x11;
        goto LAB_1808a314e;
      }
    }
    uVar4 = SystemDataAnalyzer(*plVar2,acStackX_20,1,1,0);
  }
LAB_1808a314e:
  bVar8 = uVar4 == 0;
  if (bVar8) {
    uVar7 = (uint)(acStackX_20[0] == '\0');
    bVar8 = true;
  }
LAB_1808a3163:
  uVar6 = (uint64_t)uVar4;
  if (bVar8) {
    uVar6 = uVar5;
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  *(uint *)(param_1 + 0xe8) = uVar7;
  if (*(int *)(param_2[1] + 0x18) == 0) {
    uVar6 = SystemErrorHandler(*param_2,param_1 + 0xe4,4);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar6 = NetworkProtocol_a5f10(param_2,param_1 + 0x80,0);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    if ((*(uint *)(param_2 + 8) < 0x3c) && (uVar6 = SystemFunction_0001808de610(param_2), (int)uVar6 != 0))
    {
      return uVar6;
    }
    uVar6 = NetworkProtocol_a6630(param_2,param_1 + 0xb0,0);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar6 = NetworkProtocol_a6a40(param_2,param_1 + 0xc0,0);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar6 = uVar5;
    if (0x2f < *(uint *)(param_2 + 8)) {
      if (*(int *)(param_2[1] + 0x18) == 0) {
        uVar6 = SystemConfigManager(*param_2,param_1 + 0xe0);
      }
      else {
        uVar6 = 0x1c;
      }
    }
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar6 = uVar5;
    if (0x33 < *(uint *)(param_2 + 8)) {
      if (*(int *)(param_2[1] + 0x18) == 0) {
        uVar6 = SystemErrorHandler(*param_2,param_1 + 0xe8,4);
      }
      else {
        uVar6 = 0x1c;
      }
    }
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar6 = uVar5;
    if (0x4d < *(uint *)(param_2 + 8)) {
      if (*(int *)(param_2[1] + 0x18) == 0) {
        uVar6 = SystemConfigManager(*param_2,param_1 + 0xec);
      }
      else {
        uVar6 = 0x1c;
      }
    }
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar6 = uVar5;
    if (0x60 < *(uint *)(param_2 + 8)) {
      if (*(int *)(param_2[1] + 0x18) == 0) {
        uVar6 = SystemErrorHandler(*param_2,param_1 + 0xf8,4);
      }
      else {
        uVar6 = 0x1c;
      }
    }
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    if ((0x6a < *(uint *)(param_2 + 8)) &&
       (uVar6 = NetworkProtocol_a79f0(param_2,param_1 + 0x70), (int)uVar6 != 0)) {
      return uVar6;
    }
    if ((0x75 < *(uint *)(param_2 + 8)) &&
       (uVar6 = NetworkProtocol_a52a0(param_2,param_1 + 0x90,0), (int)uVar6 != 0)) {
      return uVar6;
    }
    if ((0x82 < *(uint *)(param_2 + 8)) &&
       (uVar6 = NetworkProtocol_a79f0(param_2,param_1 + 0xa0), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (0x88 < *(uint *)(param_2 + 8)) {
      if (*(int *)(param_2[1] + 0x18) == 0) {
        uVar5 = SystemConfigManager(*param_2,param_1 + 0xf0);
      }
      else {
        uVar5 = 0x1c;
      }
    }
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    uVar7 = 0;
    if ((0x88 < *(uint *)(param_2 + 8)) && (uVar7 = uVar3, *(int *)(param_2[1] + 0x18) == 0)) {
      uVar7 = SystemConfigManager(*param_2,param_1 + 0xf4);
    }
    uVar3 = uVar7;
    if (uVar3 == 0) {
// WARNING: Subroutine does not return
      AdvancedSystemManager(param_2,stack_array_40);
    }
  }
  return (uint64_t)uVar3;
}
uint64_t NetworkProtocol_a2f10(void)
{
  int64_t lVar1;
  int64_t *plVar2;
  uint uVar3;
  uint uVar4;
  int64_t in_RAX;
  uint64_t uVar5;
  uint64_t uVar6;
  uint uVar7;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  bool bVar8;
  uint local_var_30;
  char local_buffer_98;
  if (*(int *)(in_RAX + 0x18) != 0) {
    return 0x1c;
  }
  lVar1 = *unaff_RDI;
  uVar3 = SystemErrorHandler(lVar1,unaff_RSI + 0x60,4);
  uVar5 = (uint64_t)uVar3;
  if (uVar3 == 0) {
    uVar3 = SystemErrorHandler(lVar1,unaff_RSI + 100,2);
    uVar5 = (uint64_t)uVar3;
    if (uVar3 == 0) {
      uVar3 = SystemErrorHandler(lVar1,unaff_RSI + 0x66,2);
      uVar5 = (uint64_t)uVar3;
      if (uVar3 == 0) {
        uVar3 = SystemErrorHandler(lVar1,unaff_RSI + 0x68,8);
        uVar5 = (uint64_t)uVar3;
      }
    }
  }
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  uVar5 = SystemCore_ConfigManager();
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if (*(int *)(unaff_RDI[1] + 0x18) != 0) {
    return 0x1c;
  }
  lVar1 = *unaff_RDI;
  uVar3 = SystemErrorHandler(lVar1,unaff_RSI + 0x40,4);
  uVar5 = (uint64_t)uVar3;
  if (uVar3 == 0) {
    uVar3 = SystemErrorHandler(lVar1,unaff_RSI + 0x44,2);
    uVar5 = (uint64_t)uVar3;
    if (uVar3 == 0) {
      uVar3 = SystemErrorHandler(lVar1,unaff_RSI + 0x46,2);
      uVar5 = (uint64_t)uVar3;
      if (uVar3 == 0) {
        uVar3 = SystemErrorHandler(lVar1,unaff_RSI + 0x48,8);
        uVar5 = (uint64_t)uVar3;
      }
    }
  }
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if (*(int *)(unaff_RDI[1] + 0x18) != 0) {
    return 0x1c;
  }
  lVar1 = *unaff_RDI;
  uVar3 = SystemErrorHandler(lVar1,unaff_RSI + 0x50,4);
  uVar5 = (uint64_t)uVar3;
  if (uVar3 == 0) {
    uVar3 = SystemErrorHandler(lVar1,unaff_RSI + 0x54,2);
    uVar5 = (uint64_t)uVar3;
    if (uVar3 == 0) {
      uVar3 = SystemErrorHandler(lVar1,unaff_RSI + 0x56,2);
      uVar5 = (uint64_t)uVar3;
      if (uVar3 == 0) {
        uVar3 = SystemErrorHandler(lVar1,unaff_RSI + 0x58,8);
        uVar5 = (uint64_t)uVar3;
      }
    }
  }
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if (*(int *)(unaff_RDI[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = SystemErrorHandler(*unaff_RDI,unaff_RSI + 0xd8,4);
  if (uVar3 != 0) {
    return (uint64_t)uVar3;
  }
  if (*(int *)(unaff_RDI[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = SystemErrorHandler(*unaff_RDI,unaff_RSI + 0xdc,4);
  if (uVar3 != 0) {
    return (uint64_t)uVar3;
  }
  if (*(int *)(unaff_RDI[1] + 0x18) != 0) {
    return 0x1c;
  }
  plVar2 = (int64_t *)*unaff_RDI;
  uVar5 = 0;
  uVar7 = 1;
  uVar3 = 0x1c;
  if (*plVar2 == 0) {
    uVar4 = 0x1c;
  }
  else {
    if (plVar2[2] != 0) {
      local_var_30 = 0;
      uVar4 = SystemFunction_00018076a7d0(*plVar2,&local_buffer_00000030);
      bVar8 = uVar4 == 0;
      if (!bVar8) goto LAB_1808a3163;
      if ((uint64_t)plVar2[2] < (uint64_t)local_var_30 + 1) {
        uVar4 = 0x11;
        goto LAB_1808a314e;
      }
    }
    uVar4 = SystemDataAnalyzer(*plVar2,&local_buffer_00000098,1,1,0);
  }
LAB_1808a314e:
  bVar8 = uVar4 == 0;
  if (bVar8) {
    uVar7 = (uint)(local_buffer_98 == '\0');
    bVar8 = true;
  }
LAB_1808a3163:
  uVar6 = (uint64_t)uVar4;
  if (bVar8) {
    uVar6 = uVar5;
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  *(uint *)(unaff_RSI + 0xe8) = uVar7;
  if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
    uVar6 = SystemErrorHandler(*unaff_RDI,unaff_RSI + 0xe4,4);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar6 = NetworkProtocol_a5f10();
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    if ((*(uint *)(unaff_RDI + 8) < 0x3c) && (uVar6 = SystemFunction_0001808de610(), (int)uVar6 != 0)) {
      return uVar6;
    }
    uVar6 = NetworkProtocol_a6630();
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar6 = NetworkProtocol_a6a40();
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar6 = uVar5;
    if (0x2f < *(uint *)(unaff_RDI + 8)) {
      if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
        uVar6 = SystemConfigManager(*unaff_RDI,unaff_RSI + 0xe0);
      }
      else {
        uVar6 = 0x1c;
      }
    }
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar6 = uVar5;
    if (0x33 < *(uint *)(unaff_RDI + 8)) {
      if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
        uVar6 = SystemErrorHandler(*unaff_RDI,unaff_RSI + 0xe8,4);
      }
      else {
        uVar6 = 0x1c;
      }
    }
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar6 = uVar5;
    if (0x4d < *(uint *)(unaff_RDI + 8)) {
      if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
        uVar6 = SystemConfigManager(*unaff_RDI,unaff_RSI + 0xec);
      }
      else {
        uVar6 = 0x1c;
      }
    }
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar6 = uVar5;
    if (0x60 < *(uint *)(unaff_RDI + 8)) {
      if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
        uVar6 = SystemErrorHandler(*unaff_RDI,unaff_RSI + 0xf8,4);
      }
      else {
        uVar6 = 0x1c;
      }
    }
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    if ((0x6a < *(uint *)(unaff_RDI + 8)) && (uVar6 = NetworkProtocol_a79f0(), (int)uVar6 != 0)) {
      return uVar6;
    }
    if ((0x75 < *(uint *)(unaff_RDI + 8)) && (uVar6 = NetworkProtocol_a52a0(), (int)uVar6 != 0)) {
      return uVar6;
    }
    if ((0x82 < *(uint *)(unaff_RDI + 8)) && (uVar6 = NetworkProtocol_a79f0(), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (0x88 < *(uint *)(unaff_RDI + 8)) {
      if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
        uVar5 = SystemConfigManager(*unaff_RDI,unaff_RSI + 0xf0);
      }
      else {
        uVar5 = 0x1c;
      }
    }
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    uVar7 = 0;
    if ((0x88 < *(uint *)(unaff_RDI + 8)) && (uVar7 = uVar3, *(int *)(unaff_RDI[1] + 0x18) == 0)) {
      uVar7 = SystemConfigManager(*unaff_RDI,unaff_RSI + 0xf4);
    }
    uVar3 = uVar7;
    if (uVar3 == 0) {
// WARNING: Subroutine does not return
      AdvancedSystemManager();
    }
  }
  return (uint64_t)uVar3;
}
uint64_t NetworkProtocol_a30d8(void)
{
  int64_t *plVar1;
  uint uVar2;
  int64_t in_RAX;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  uint uVar6;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  bool bVar7;
  uint local_var_30;
  char local_buffer_98;
  if (*(int *)(in_RAX + 0x18) != 0) {
    return 0x1c;
  }
  plVar1 = (int64_t *)*unaff_RDI;
  uVar4 = 0;
  uVar6 = 1;
  uVar5 = 0x1c;
  if (*plVar1 == 0) {
    uVar2 = 0x1c;
  }
  else {
    if (plVar1[2] != 0) {
      local_var_30 = 0;
      uVar2 = SystemFunction_00018076a7d0(*plVar1,&local_buffer_00000030);
      bVar7 = uVar2 == 0;
      if (!bVar7) goto LAB_1808a3163;
      if ((uint64_t)plVar1[2] < (uint64_t)local_var_30 + 1) {
        uVar2 = 0x11;
        goto LAB_1808a314e;
      }
    }
    uVar2 = SystemDataAnalyzer(*plVar1,&local_buffer_00000098,1,1,0);
  }
LAB_1808a314e:
  bVar7 = uVar2 == 0;
  if (bVar7) {
    uVar6 = (uint)(local_buffer_98 == '\0');
    bVar7 = true;
  }
LAB_1808a3163:
  uVar3 = (uint64_t)uVar2;
  if (bVar7) {
    uVar3 = uVar4;
  }
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  *(uint *)(unaff_RSI + 0xe8) = uVar6;
  if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
    uVar3 = SystemErrorHandler(*unaff_RDI,unaff_RSI + 0xe4,4);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = NetworkProtocol_a5f10();
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if ((*(uint *)(unaff_RDI + 8) < 0x3c) && (uVar3 = SystemFunction_0001808de610(), (int)uVar3 != 0)) {
      return uVar3;
    }
    uVar3 = NetworkProtocol_a6630();
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = NetworkProtocol_a6a40();
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = uVar4;
    if (0x2f < *(uint *)(unaff_RDI + 8)) {
      if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
        uVar3 = SystemConfigManager(*unaff_RDI,unaff_RSI + 0xe0);
      }
      else {
        uVar3 = 0x1c;
      }
    }
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = uVar4;
    if (0x33 < *(uint *)(unaff_RDI + 8)) {
      if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
        uVar3 = SystemErrorHandler(*unaff_RDI,unaff_RSI + 0xe8,4);
      }
      else {
        uVar3 = 0x1c;
      }
    }
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = uVar4;
    if (0x4d < *(uint *)(unaff_RDI + 8)) {
      if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
        uVar3 = SystemConfigManager(*unaff_RDI,unaff_RSI + 0xec);
      }
      else {
        uVar3 = 0x1c;
      }
    }
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = uVar4;
    if (0x60 < *(uint *)(unaff_RDI + 8)) {
      if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
        uVar3 = SystemErrorHandler(*unaff_RDI,unaff_RSI + 0xf8,4);
      }
      else {
        uVar3 = 0x1c;
      }
    }
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if ((0x6a < *(uint *)(unaff_RDI + 8)) && (uVar3 = NetworkProtocol_a79f0(), (int)uVar3 != 0)) {
      return uVar3;
    }
    if ((0x75 < *(uint *)(unaff_RDI + 8)) && (uVar3 = NetworkProtocol_a52a0(), (int)uVar3 != 0)) {
      return uVar3;
    }
    if ((0x82 < *(uint *)(unaff_RDI + 8)) && (uVar3 = NetworkProtocol_a79f0(), (int)uVar3 != 0)) {
      return uVar3;
    }
    if (0x88 < *(uint *)(unaff_RDI + 8)) {
      if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
        uVar4 = SystemConfigManager(*unaff_RDI,unaff_RSI + 0xf0);
      }
      else {
        uVar4 = 0x1c;
      }
    }
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar6 = 0;
    if ((0x88 < *(uint *)(unaff_RDI + 8)) && (uVar6 = uVar5, *(int *)(unaff_RDI[1] + 0x18) == 0)) {
      uVar6 = SystemConfigManager(*unaff_RDI,unaff_RSI + 0xf4);
    }
    uVar5 = uVar6;
    if (uVar5 == 0) {
// WARNING: Subroutine does not return
      AdvancedSystemManager();
    }
  }
  return (uint64_t)uVar5;
}
// 函数: void NetworkProtocol_a3398(void)
void NetworkProtocol_a3398(void)
{
  return;
}