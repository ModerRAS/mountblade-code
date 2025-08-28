/* 此文件包含部分未处理的原始函数，这些函数将在后续处理中完成语义化替换 */
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_14_part007.c - 25 个函数
// 函数: void NetworkProtocol_eccc0(int64_t param_1,uint64_t *param_2,int64_t *param_3)
void NetworkProtocol_eccc0(int64_t param_1,uint64_t *param_2,int64_t *param_3)
{
  char cVar1;
  int iVar2;
  int64_t *plVar3;
  int8_t stack_array_f8 [32];
  uint local_var_d8;
  uint local_var_d0;
  uint local_var_c8;
  uint local_var_c0;
  uint local_var_b8;
  uint local_var_b0;
  uint local_var_a8;
  uint local_var_a0;
  uint local_var_98;
  uint local_var_90;
  int32_t local_var_88;
  ushort local_var_84;
  ushort local_var_82;
  byte bStack_80;
  byte bStack_7f;
  byte bStack_7e;
  byte bStack_7d;
  byte bStack_7c;
  byte bStack_7b;
  byte bStack_7a;
  byte bStack_79;
  int64_t lStack_78;
  int8_t stack_array_70 [16];
  int8_t stack_array_60 [40];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_f8;
  *param_3 = param_1;
  plVar3 = *(int64_t **)(param_1 + 8);
  cVar1 = NetworkProtocol_c5cb0(param_2,plVar3);
  if (cVar1 != '\0') {
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_var_88);
      plVar3 = (int64_t *)
               (**(code **)(*(int64_t *)*param_2 + 0x120))((int64_t *)*param_2,&local_var_88,1);
      if (plVar3 == (int64_t *)0x0) {
        local_var_90 = (uint)bStack_79;
        local_var_98 = (uint)bStack_7a;
        local_var_a0 = (uint)bStack_7b;
        local_var_a8 = (uint)bStack_7c;
        local_var_b0 = (uint)bStack_7d;
        local_var_b8 = (uint)bStack_7e;
        local_var_c0 = (uint)bStack_7f;
        local_var_c8 = (uint)bStack_80;
        local_var_d0 = (uint)local_var_82;
        local_var_d8 = (uint)local_var_84;
// WARNING: Subroutine does not return
        SystemDataValidator(stack_array_60,0x27,&processed_var_8960_ptr,local_var_88);
      }
    }
    lStack_78 = plVar3[4];
    if (lStack_78 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,stack_array_70);
      iVar2 = NetworkProtocol_bf8e0(*(uint64_t *)(param_1 + 0x20),stack_array_70,&lStack_78);
      if (iVar2 != 0) goto LAB_1808ece25;
    }
    *param_3 = lStack_78;
  }
LAB_1808ece25:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_f8);
}
// 函数: void NetworkProtocol_ecd9e(void)
void NetworkProtocol_ecd9e(void)
{
  uint local_buffer_28;
  uint64_t local_buffer_70;
  local_buffer_28 = (uint)local_buffer_70._6_2_;
// WARNING: Subroutine does not return
  SystemDataValidator();
}
// 函数: void NetworkProtocol_ecdd9(void)
void NetworkProtocol_ecdd9(void)
{
  int iVar1;
  int64_t unaff_RBP;
  int64_t *unaff_R14;
  int64_t *unaff_R15;
  int64_t lStack0000000000000080;
  uint64_t local_buffer_c0;
  lStack0000000000000080 = unaff_R14[4];
  if (lStack0000000000000080 == 0) {
    (**(code **)(*unaff_R14 + 0x18))();
    iVar1 = NetworkProtocol_bf8e0(*(uint64_t *)(unaff_RBP + 0x20),&local_buffer_00000088,&local_buffer_00000080);
    if (iVar1 != 0) goto LAB_1808ece25;
  }
  *unaff_R15 = lStack0000000000000080;
LAB_1808ece25:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_c0 ^ (uint64_t)&local_buffer_00000000);
}
uint64_t NetworkProtocol_ece70(int64_t param_1,uint64_t param_2,int8_t *param_3)
{
  uint64_t uVar1;
  int aiStackX_8 [2];
  uint astack_special_x_20 [2];
  aiStackX_8[0] = 8;
  if (*(int64_t *)(param_1 + 0x20) == 0) {
    uVar1 = SystemCore_3e550(*(uint64_t *)(param_1 + 0x18),aiStackX_8,0,0,0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (aiStackX_8[0] < 0) {
      return 0x1c;
    }
    if ((1 < aiStackX_8[0]) && (4 < aiStackX_8[0] - 3U)) {
      return 0x1c;
    }
    if (((aiStackX_8[0] == 0) || (aiStackX_8[0] == 6)) &&
       (uVar1 = SystemCore_3e810(*(uint64_t *)(param_1 + 0x18),*(int32_t *)(param_1 + 0x28),
                              param_1 + 0x20), (int)uVar1 != 0)) {
      return uVar1;
    }
  }
  if (*(int64_t *)(param_1 + 0x20) != 0) {
    uVar1 = SystemCore_3e550(*(int64_t *)(param_1 + 0x20),aiStackX_8,0,0,0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if ((aiStackX_8[0] < 0) || ((1 < aiStackX_8[0] && (4 < aiStackX_8[0] - 3U)))) {
      return 0x1c;
    }
    if ((aiStackX_8[0] == 0) || (aiStackX_8[0] == 6)) {
      astack_special_x_20[0] = 0;
      uVar1 = SystemCore_3e470(*(uint64_t *)(param_1 + 0x20),astack_special_x_20);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if ((astack_special_x_20[0] & 2) == 0) {
        astack_special_x_20[0] = astack_special_x_20[0] & 0xfffffffa | 2;
        uVar1 = SystemCore_3ee30(*(uint64_t *)(param_1 + 0x20));
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        uVar1 = SystemCore_3e550(*(uint64_t *)(param_1 + 0x20),aiStackX_8,0,0,0);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        if (aiStackX_8[0] != 0) {
          return 0x1c;
        }
        goto LAB_1808ecfc9;
      }
    }
  }
  if ((aiStackX_8[0] != 0) && (aiStackX_8[0] != 6)) {
    *param_3 = 0;
    return 0;
  }
LAB_1808ecfc9:
  *param_3 = 1;
  return 0;
}
uint64_t NetworkProtocol_ecfe0(int64_t param_1,uint64_t param_2,int8_t *param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  if ((*(int64_t *)(param_1 + 0x50) == 0) && (lVar1 = *(int64_t *)(param_1 + 0x40), lVar1 != 0)) {
    lVar2 = (**(code **)(**(int64_t **)(param_1 + 8) + 8))();
    if (lVar2 == 0) {
      *(int64_t *)(param_1 + 0x50) = lVar1;
    }
    else {
      uVar3 = SystemCore_3e810(lVar1,0,param_1 + 0x50);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  if (*(int64_t *)(param_1 + 0x50) == 0) {
    if ((2 < *(int *)(param_1 + 0x48) - 1U) && (*(int *)(param_1 + 0x48) != 5)) {
      *param_3 = 0;
      return 0x4c;
    }
    *param_3 = 0;
  }
  else {
    *param_3 = 1;
  }
  return 0;
}
uint64_t NetworkProtocol_ed080(int64_t param_1,int64_t param_2,int8_t *param_3)
{
  uint64_t uVar1;
  int64_t lVar2;
  int aiStackX_10 [2];
  if (param_2 == 0) {
LAB_1808ed18e:
    uVar1 = 0x1c;
  }
  else {
    *param_3 = 0;
    if (*(int64_t *)(param_2 + 0x10) != 0) {
      aiStackX_10[0] = 8;
      if (*(int64_t *)(param_2 + 0x18) == 0) {
        uVar1 = SystemCore_3e550(*(int64_t *)(param_2 + 0x10),aiStackX_10,0,0,0);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        if ((aiStackX_10[0] < 0) || ((1 < aiStackX_10[0] && (4 < aiStackX_10[0] - 3U))))
        goto LAB_1808ed18e;
        if ((aiStackX_10[0] == 0) || (aiStackX_10[0] == 6)) {
          lVar2 = (**(code **)(**(int64_t **)(param_1 + 8) + 8))();
          if (lVar2 == 0) {
            *(uint64_t *)(param_2 + 0x18) = *(uint64_t *)(param_2 + 0x10);
            *param_3 = 1;
            return 0;
          }
          uVar1 = SystemCore_3e810(*(uint64_t *)(param_2 + 0x10),0,param_2 + 0x18);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
        }
      }
      if (*(int64_t *)(param_2 + 0x18) != 0) {
        uVar1 = SystemCore_3e550(*(int64_t *)(param_2 + 0x18),aiStackX_10,0,0,0);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        if ((aiStackX_10[0] < 0) || ((1 < aiStackX_10[0] && (4 < aiStackX_10[0] - 3U))))
        goto LAB_1808ed18e;
        if ((aiStackX_10[0] != 0) && (aiStackX_10[0] != 6)) {
          *param_3 = 0;
          return 0;
        }
        *param_3 = 1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}
uint64_t NetworkProtocol_ed1d0(int64_t *param_1,char param_2)
{
  uint64_t uVar1;
  char acStackX_8 [8];
  if ((((int)param_1[9] == 0) || ((int)param_1[9] == 7)) &&
     (uVar1 = NetworkProtocol_e0ca0(*(uint64_t *)(param_1[4] + 0x790),param_1), (int)uVar1 != 0)) {
    return uVar1;
  }
  if (param_2 != '\0') {
    uVar1 = (**(code **)(*param_1 + 0x10))(param_1,0,acStackX_8);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if ((acStackX_8[0] == (char)uVar1) &&
       (uVar1 = Function_83ac8394(*(uint64_t *)(param_1[4] + 0x790)), (int)uVar1 != 0)) {
      return uVar1;
    }
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t
NetworkProtocol_ed250(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
             int8_t param_5,int32_t param_6,uint64_t *param_7)
{
  int iVar1;
  uint64_t uVar2;
  int8_t stack_array_158 [32];
  int8_t *plocal_var_138;
  int64_t lStack_128;
  uint64_t local_var_120;
  int8_t stack_array_118 [216];
  uint64_t local_var_40;
  uint64_t *plocal_var_18;
  if (*(int64_t *)(param_1 + 8) == 0) {
    return 0x1c;
  }
  plocal_var_18 = param_7;
  local_var_40 = 0x1808ed28f;
  uVar2 = SystemCore_3adf0(param_3,*(uint64_t *)(*(int64_t *)(param_1 + 8) + 0x30),param_4,param_5);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar2 = *param_7;
  plocal_var_18 = (uint64_t *)(GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158);
  lStack_128 = 0;
  iVar1 = SystemCore_58ed0(uVar2,&local_var_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = Function_69cd5f08(local_var_120,param_6);
    if (iVar1 == 0) goto LAB_18073fff8;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    Function_fe6d9439(stack_array_118,0x100,param_6);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,2,uVar2,&processed_var_7336_ptr);
  }
LAB_18073fff8:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker((uint64_t)plocal_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_ed27b(void)
void NetworkProtocol_ed27b(void)
{
  uint64_t uVar1;
  int iVar2;
  uint64_t uVar3;
  int32_t local_buffer_68;
  uint64_t *local_buffer_70;
  int8_t stack_array_120 [32];
  int8_t *plocal_var_100;
  int64_t lStack_f0;
  uint64_t local_var_e8;
  int8_t stack_array_e0 [216];
  uint64_t local_var_8;
  local_var_8 = 0x1808ed28f;
  iVar2 = SystemCore_3adf0();
  if (iVar2 != 0) {
    return;
  }
  uVar1 = *local_buffer_70;
  uVar3 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_120;
  lStack_f0 = 0;
  iVar2 = SystemCore_58ed0(uVar1,&local_var_e8,&lStack_f0);
  if (iVar2 == 0) {
    iVar2 = Function_69cd5f08(local_var_e8,local_buffer_68);
    if (iVar2 == 0) goto LAB_18073fff8;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    Function_fe6d9439(stack_array_e0,0x100,local_buffer_68);
    plocal_var_100 = stack_array_e0;
// WARNING: Subroutine does not return
    DataTransformer(iVar2,2,uVar1,&processed_var_7336_ptr);
  }
LAB_18073fff8:
  if (lStack_f0 != 0) {
    SystemDataProcessor();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(uVar3 ^ (uint64_t)stack_array_120);
}
// 函数: void function_8ed2a8(void)
void function_8ed2a8(void)
{
  return;
}
// 函数: void NetworkProtocol_ed2d0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void NetworkProtocol_ed2d0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int8_t param_5,int32_t param_6,uint64_t param_7)
{
  NetworkProtocol_ed390(*(uint64_t *)(param_1 + 0x20),param_3,param_4,param_5,param_6,param_7);
  return;
}
// 函数: void NetworkProtocol_ed310(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void NetworkProtocol_ed310(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int8_t param_5,int32_t param_6,uint64_t param_7)
{
  NetworkProtocol_ed390(*(uint64_t *)(param_1 + 0x50),param_3,param_4,param_5,param_6,param_7);
  return;
}
// 函数: void NetworkProtocol_ed350(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
void NetworkProtocol_ed350(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
                  int8_t param_5,int32_t param_6,uint64_t param_7)
{
  NetworkProtocol_ed390(*(uint64_t *)(param_2 + 0x18),param_3,param_4,param_5,param_6,param_7);
  return;
}
uint64_t
NetworkProtocol_ed390(int64_t param_1,uint64_t param_2,uint64_t param_3,int8_t param_4,
             int32_t param_5,uint64_t param_6)
{
  uint64_t uVar1;
  int32_t astack_special_x_8 [2];
  if (param_1 == 0) {
    uVar1 = 0x4c;
  }
  else {
    astack_special_x_8[0] = 0;
    uVar1 = SystemCore_3de20(0,astack_special_x_8,0);
    if ((int)uVar1 == 0) {
      uVar1 = SystemCore_3ecb0(param_1,astack_special_x_8[0],param_5);
      if ((int)uVar1 == 0) {
        uVar1 = SystemCore_3afc0(param_2,param_1,param_3,param_4,param_6);
      }
    }
  }
  return uVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_ed440(uint64_t *param_1)
void NetworkProtocol_ed440(uint64_t *param_1)
{
  (**(code **)*param_1)(param_1,0);
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&ui_system_data_1344_ptr,0x24a,1);
}
uint64_t NetworkProtocol_ed480(int64_t *param_1)
{
  int iVar1;
  uint64_t uVar2;
  if ((int)param_1[5] < 1) {
    return 0x1c;
  }
  iVar1 = (int)param_1[5] + -1;
  *(int *)(param_1 + 5) = iVar1;
  if ((iVar1 == 0) && (uVar2 = (**(code **)(*param_1 + 0x60))(), (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_ed4b0(uint64_t *param_1)
void NetworkProtocol_ed4b0(uint64_t *param_1)
{
  (**(code **)*param_1)(param_1,0);
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&ui_system_data_1344_ptr,0x7e,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_ed4f0(uint64_t *param_1)
void NetworkProtocol_ed4f0(uint64_t *param_1)
{
  (**(code **)*param_1)(param_1,0);
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&ui_system_data_1344_ptr,0x32d,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_ed530(uint64_t *param_1)
void NetworkProtocol_ed530(uint64_t *param_1)
{
  (**(code **)*param_1)(param_1,0);
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&ui_system_data_1344_ptr,0xef,1);
}
uint64_t NetworkProtocol_ed570(int64_t *param_1)
{
  int iVar1;
  uint64_t uVar2;
  if ((int)param_1[5] < 1) {
    return 0x1c;
  }
  iVar1 = (int)param_1[5] + -1;
  *(int *)(param_1 + 5) = iVar1;
  if ((iVar1 == 0) && (uVar2 = (**(code **)(*param_1 + 0x60))(param_1,1), (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkProtocol_ed5a0(int64_t param_1,int64_t *param_2)
{
  uint64_t uVar1;
  if (param_2 == (int64_t *)0x0) {
    return 0x1c;
  }
  if (param_2[2] != 0) {
    uVar1 = NetworkProtocol_e0750(*(uint64_t *)(*(int64_t *)(param_1 + 0x20) + 0x788));
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  *(int64_t *)param_2[1] = *param_2;
  *(int64_t *)(*param_2 + 8) = param_2[1];
  param_2[1] = (int64_t)param_2;
  *param_2 = (int64_t)param_2;
  *(int64_t **)param_2[1] = param_2;
  *(int64_t *)(*param_2 + 8) = param_2[1];
  param_2[1] = (int64_t)param_2;
  *param_2 = (int64_t)param_2;
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&ui_system_data_1344_ptr,0x2aa,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_ed680(int64_t *param_1,int param_2)
void NetworkProtocol_ed680(int64_t *param_1,int param_2)
{
  int iVar1;
  int8_t stack_array_c8 [32];
  uint local_var_a8;
  uint local_var_a0;
  uint local_var_98;
  uint local_var_90;
  uint local_var_88;
  uint local_var_80;
  uint local_var_78;
  uint local_var_70;
  uint local_var_68;
  uint local_var_60;
  char acStack_58 [4];
  int32_t local_var_54;
  ushort local_var_50;
  ushort local_var_4e;
  byte bStack_4c;
  byte bStack_4b;
  byte bStack_4a;
  byte bStack_49;
  byte bStack_48;
  byte bStack_47;
  byte bStack_46;
  byte bStack_45;
  int8_t stack_array_40 [40];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_c8;
  if (param_2 != 0) {
    if (1 < param_2 - 1U) {
      acStack_58[0] = '\0';
      iVar1 = (**(code **)(*param_1 + 0x10))(param_1,0,acStack_58);
      if ((iVar1 == 0) && (acStack_58[0] != '\0')) goto NetworkProtocol_ed7b8;
    }
    (**(code **)(*(int64_t *)param_1[1] + 0x18))((int64_t *)param_1[1],&local_var_54);
    local_var_60 = (uint)bStack_45;
    local_var_68 = (uint)bStack_46;
    local_var_70 = (uint)bStack_47;
    local_var_78 = (uint)bStack_48;
    local_var_80 = (uint)bStack_49;
    local_var_88 = (uint)bStack_4a;
    local_var_90 = (uint)bStack_4b;
    local_var_98 = (uint)bStack_4c;
    local_var_a0 = (uint)local_var_4e;
    local_var_a8 = (uint)local_var_50;
// WARNING: Subroutine does not return
    SystemDataValidator(stack_array_40,0x27,&processed_var_8960_ptr,local_var_54);
  }
NetworkProtocol_ed7b8:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_c8);
}
// 函数: void NetworkProtocol_ed6d7(int64_t *param_1)
void NetworkProtocol_ed6d7(int64_t *param_1)
{
  uint64_t local_buffer_70;
  int16_t local_buffer_78;
  (**(code **)(*param_1 + 0x18))();
// WARNING: Subroutine does not return
  SystemDataValidator(&local_buffer_00000088,0x27,&processed_var_8960_ptr,local_buffer_70._4_4_,local_buffer_78);
}
// 函数: void NetworkProtocol_ed7b8(void)
void NetworkProtocol_ed7b8(void)
{
  uint64_t local_buffer_b0;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_b0 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_ed7e0(int64_t param_1,int param_2)
void NetworkProtocol_ed7e0(int64_t param_1,int param_2)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  bool bVar4;
  int iVar5;
  int8_t stack_array_c8 [32];
  uint64_t local_var_a8;
  int aiStack_98 [4];
  int32_t local_var_88;
  int32_t local_var_84;
  int32_t local_var_80;
  int32_t local_var_7c;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  int8_t stack_array_68 [64];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_c8;
  puVar1 = (uint64_t *)(param_1 + 0x30);
  if (param_2 == 0) {
    bVar4 = false;
    for (puVar2 = (uint64_t *)*puVar1; puVar2 != puVar1; puVar2 = (uint64_t *)*puVar2) {
      uVar3 = puVar2[2];
      local_var_a8 = 0;
      iVar5 = SystemCore_3e550(uVar3,aiStack_98,0,0);
      while ((iVar5 == 0 && (aiStack_98[0] == 1))) {
        if (!bVar4) {
          (**(code **)(**(int64_t **)(param_1 + 8) + 0x18))(*(int64_t **)(param_1 + 8),&local_var_78)
          ;
          local_var_88 = local_var_78;
          local_var_84 = local_var_74;
          local_var_80 = local_var_70;
          local_var_7c = local_var_6c;
          RenderingSystem_ShaderCompiler(stack_array_68,0x40);
          bVar4 = true;
        }
        UIComponent_EventHandler(1);
        local_var_a8 = 0;
        iVar5 = SystemCore_3e550(uVar3,aiStack_98,0,0);
      }
      if (puVar2 == puVar1) break;
    }
  }
  else {
    (**(code **)(**(int64_t **)(param_1 + 8) + 0x18))(*(int64_t **)(param_1 + 8),&local_var_88);
    local_var_78 = local_var_88;
    local_var_74 = local_var_84;
    local_var_70 = local_var_80;
    local_var_6c = local_var_7c;
    RenderingSystem_ShaderCompiler(stack_array_68,0x40,&local_var_78);
    for (puVar2 = (uint64_t *)*puVar1; puVar2 != puVar1; puVar2 = (uint64_t *)*puVar2) {
      uVar3 = puVar2[2];
      puVar2[2] = 0;
      puVar2[3] = 0;
      iVar5 = SystemCore_3ebd0(uVar3);
      if ((iVar5 != 0) || (puVar2 == puVar1)) break;
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_c8);
}
// 函数: void NetworkProtocol_ed87f(void)
void NetworkProtocol_ed87f(void)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  bool bVar3;
  int iVar4;
  uint64_t *unaff_RDI;
  int64_t unaff_R15;
  int local_var_30;
  int32_t local_buffer_40;
  int32_t local_buffer_44;
  int32_t local_buffer_48;
  int32_t local_buffer_4c;
  int32_t local_buffer_50;
  int32_t local_buffer_54;
  int32_t local_buffer_58;
  int32_t local_buffer_5c;
  uint64_t local_buffer_a0;
  bVar3 = false;
  for (puVar1 = (uint64_t *)*unaff_RDI; puVar1 != unaff_RDI; puVar1 = (uint64_t *)*puVar1) {
    uVar2 = puVar1[2];
    iVar4 = SystemCore_3e550(uVar2,&local_buffer_00000030,0,0,0);
    while ((iVar4 == 0 && (local_var_30 == 1))) {
      if (!bVar3) {
        (**(code **)(**(int64_t **)(unaff_R15 + 8) + 0x18))
                  (*(int64_t **)(unaff_R15 + 8),&local_buffer_00000050);
        local_buffer_40 = local_buffer_50;
        local_buffer_44 = local_buffer_54;
        local_buffer_48 = local_buffer_58;
        local_buffer_4c = local_buffer_5c;
        RenderingSystem_ShaderCompiler(&local_buffer_00000060,0x40);
        bVar3 = true;
      }
      UIComponent_EventHandler(1);
      iVar4 = SystemCore_3e550(uVar2,&local_buffer_00000030,0,0,0);
    }
    if (puVar1 == unaff_RDI) break;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_a0 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkProtocol_ed895(void)
void NetworkProtocol_ed895(void)
{
  int64_t lVar1;
  int iVar2;
  char unaff_BL;
  int64_t *unaff_RSI;
  int64_t *unaff_RDI;
  int64_t unaff_R15;
  int local_var_30;
  int32_t local_buffer_40;
  int32_t local_buffer_44;
  int32_t local_buffer_48;
  int32_t local_buffer_4c;
  int32_t local_buffer_50;
  int32_t local_buffer_54;
  int32_t local_buffer_58;
  int32_t local_buffer_5c;
  uint64_t local_buffer_a0;
  do {
    lVar1 = unaff_RSI[2];
    iVar2 = SystemCore_3e550(lVar1,&local_buffer_00000030,0,0,0);
    while ((iVar2 == 0 && (local_var_30 == 1))) {
      if (unaff_BL == '\0') {
        (**(code **)(**(int64_t **)(unaff_R15 + 8) + 0x18))
                  (*(int64_t **)(unaff_R15 + 8),&local_buffer_00000050);
        local_buffer_40 = local_buffer_50;
        local_buffer_44 = local_buffer_54;
        local_buffer_48 = local_buffer_58;
        local_buffer_4c = local_buffer_5c;
        RenderingSystem_ShaderCompiler(&local_buffer_00000060,0x40);
        unaff_BL = '\x01';
      }
      UIComponent_EventHandler(1);
      iVar2 = SystemCore_3e550(lVar1,&local_buffer_00000030,0,0,0);
    }
  } while ((unaff_RSI != unaff_RDI) && (unaff_RSI = (int64_t *)*unaff_RSI, unaff_RSI != unaff_RDI))
  ;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_a0 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkProtocol_ed93a(void)
void NetworkProtocol_ed93a(void)
{
  uint64_t local_buffer_a0;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_a0 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkProtocol_ed942(void)
void NetworkProtocol_ed942(void)
{
  uint64_t local_buffer_a0;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_a0 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_ed970(int64_t param_1)
void NetworkProtocol_ed970(int64_t param_1)
{
  int iVar1;
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
  int32_t local_var_48;
  ushort local_var_44;
  ushort local_var_42;
  byte bStack_40;
  byte bStack_3f;
  byte bStack_3e;
  byte bStack_3d;
  byte bStack_3c;
  byte bStack_3b;
  byte bStack_3a;
  byte bStack_39;
  int8_t stack_array_38 [40];
  uint64_t local_var_10;
  local_var_10 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_b8;
  if (*(int *)(param_1 + 0x28) < 1) {
    *(uint64_t *)(param_1 + 0x50) = 0;
    iVar1 = NetworkProtocol_e1d30(*(uint64_t *)(*(int64_t *)(param_1 + 0x20) + 0x790),param_1);
    if (iVar1 == 0) {
      if (*(int64_t *)(param_1 + 8) != 0) {
        *(uint64_t *)(*(int64_t *)(param_1 + 8) + 0x20) = 0;
        *(uint64_t *)(param_1 + 8) = 0;
      }
      if (*(int *)(param_1 + 0x28) == 0) {
        NetworkProtocol_e1b70(*(uint64_t *)(*(int64_t *)(param_1 + 0x20) + 0x790),param_1,0);
      }
    }
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_10 ^ (uint64_t)stack_array_b8);
  }
  (**(code **)(**(int64_t **)(param_1 + 8) + 0x18))(*(int64_t **)(param_1 + 8),&local_var_48);
  local_var_50 = (uint)bStack_39;
  local_var_58 = (uint)bStack_3a;
  local_var_60 = (uint)bStack_3b;
  local_var_68 = (uint)bStack_3c;
  local_var_70 = (uint)bStack_3d;
  local_var_78 = (uint)bStack_3e;
  local_var_80 = (uint)bStack_3f;
  local_var_88 = (uint)bStack_40;
  local_var_90 = (uint)local_var_42;
  local_var_98 = (uint)local_var_44;
// WARNING: Subroutine does not return
  SystemDataValidator(stack_array_38,0x27,&processed_var_8960_ptr,local_var_48);
}
// 函数: void NetworkProtocol_ed9a6(int64_t *param_1)
void NetworkProtocol_ed9a6(int64_t *param_1)
{
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t in_R11;
  int32_t local_buffer_70;
  int16_t local_buffer_74;
  *(uint64_t *)(in_R11 + 0x10) = unaff_RSI;
  *(uint64_t *)(in_R11 + 0x18) = unaff_RDI;
  (**(code **)(*param_1 + 0x18))();
// WARNING: Subroutine does not return
  SystemDataValidator(&local_buffer_00000080,0x27,&processed_var_8960_ptr,local_buffer_70,local_buffer_74);
}
// 函数: void NetworkProtocol_eda44(void)
void NetworkProtocol_eda44(void)
{
  int iVar1;
  int64_t unaff_RBP;
  uint64_t local_buffer_a8;
  *(uint64_t *)(unaff_RBP + 0x50) = 0;
  iVar1 = NetworkProtocol_e1d30(*(uint64_t *)(*(int64_t *)(unaff_RBP + 0x20) + 0x790));
  if (iVar1 == 0) {
    if (*(int64_t *)(unaff_RBP + 8) != 0) {
      *(uint64_t *)(*(int64_t *)(unaff_RBP + 8) + 0x20) = 0;
      *(uint64_t *)(unaff_RBP + 8) = 0;
    }
    if (*(int *)(unaff_RBP + 0x28) == 0) {
      NetworkProtocol_e1b70(*(uint64_t *)(*(int64_t *)(unaff_RBP + 0x20) + 0x790));
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_a8 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_edac0(int64_t param_1)
void NetworkProtocol_edac0(int64_t param_1)
{
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
  int32_t local_var_48;
  ushort local_var_44;
  ushort local_var_42;
  byte bStack_40;
  byte bStack_3f;
  byte bStack_3e;
  byte bStack_3d;
  byte bStack_3c;
  byte bStack_3b;
  byte bStack_3a;
  byte bStack_39;
  int8_t stack_array_38 [40];
  uint64_t local_var_10;
  local_var_10 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_b8;
  (**(code **)(**(int64_t **)(param_1 + 8) + 0x18))(*(int64_t **)(param_1 + 8),&local_var_48);
  local_var_50 = (uint)bStack_39;
  local_var_58 = (uint)bStack_3a;
  local_var_60 = (uint)bStack_3b;
  local_var_68 = (uint)bStack_3c;
  local_var_70 = (uint)bStack_3d;
  local_var_78 = (uint)bStack_3e;
  local_var_80 = (uint)bStack_3f;
  local_var_88 = (uint)bStack_40;
  local_var_90 = (uint)local_var_42;
  local_var_98 = (uint)local_var_44;
// WARNING: Subroutine does not return
  SystemDataValidator(stack_array_38,0x27,&processed_var_8960_ptr,local_var_48);
}
// 函数: void NetworkProtocol_edbf0(int param_1,int32_t param_2,uint *param_3)
void NetworkProtocol_edbf0(int param_1,int32_t param_2,uint *param_3)
{
  uint uVar1;
  float fVar2;
  if (param_1 == 0) {
    uVar1 = sinf(param_2);
    *param_3 = uVar1;
    return;
  }
  if (param_1 == 2) {
    uVar1 = NetworkProtocol_edcf0(param_2);
    *param_3 = uVar1;
    return;
  }
  if (param_1 == 1) {
    fVar2 = (float)sinf(param_2);
    if (fVar2 < 0.0) {
      *param_3 = 0xbf800000;
      return;
    }
    *param_3 = 0x3f800000;
    return;
  }
  if (param_1 == 3) {
    uVar1 = NetworkProtocol_edcb0(param_2);
    *param_3 = uVar1;
    return;
  }
  if (param_1 == 4) {
    uVar1 = NetworkProtocol_edcb0(param_2);
    *param_3 = uVar1 ^ 0x80000000;
    return;
  }
  *param_3 = 0;
  return;
}
float NetworkProtocol_edcb0(float param_1)
{
  float fVar1;
  fVar1 = (float)fmodf(param_1 * 0.31830987 + 1.0);
  if (fVar1 < 0.0) {
    fVar1 = fVar1 + 2.0;
  }
  return fVar1 - 1.0;
}
float NetworkProtocol_edcf0(float param_1)
{
  float fVar1;
  fVar1 = (float)fmodf(param_1 + 1.5707964,0x40c90fdb);
  if (fVar1 < 0.0) {
    fVar1 = fVar1 + 6.2831855;
  }
  fVar1 = fVar1 - 3.1415927;
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
  }
  return 1.0 - fVar1 * 0.63661975;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address