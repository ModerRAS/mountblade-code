#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 04_ui_system_part149.c - 6 个函数
// 函数: void SystemCore_545e0(int64_t *param_1,int32_t param_2)
void SystemCore_545e0(int64_t *param_1,int32_t param_2)
{
  int iVar1;
  uint64_t astack_special_x_18 [2];
  iVar1 = Function_b033bbff();
  if (iVar1 == 0) {
    iVar1 = SystemCore_54640(param_1);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*param_1 + 0x120))(param_1,0,astack_special_x_18);
      if (iVar1 == 0) {
        SystemCore_62b60(astack_special_x_18[0],param_2,1);
      }
    }
  }
  return;
}
uint64_t SystemCore_54640(int64_t param_1)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  float fVar3;
  int32_t astack_special_x_8 [2];
  if (*(int64_t *)(param_1 + 0x20) == 0) {
    fVar3 = 1.0;
  }
  else {
    fVar3 = *(float *)(*(int64_t *)(param_1 + 0x20) + 0x1f8);
  }
  puVar1 = *(uint64_t **)(param_1 + 400);
  *(float *)(param_1 + 0x1f8) = fVar3 * *(float *)(param_1 + 0x34);
  for (; puVar1 != (uint64_t *)(param_1 + 400); puVar1 = (uint64_t *)*puVar1) {
    SystemCore_54640(puVar1[2]);
  }
  for (puVar1 = *(uint64_t **)(param_1 + 0x1a8); puVar1 != (uint64_t *)(param_1 + 0x1a8);
      puVar1 = (uint64_t *)*puVar1) {
    uVar2 = puVar1[2];
    Function_aca92523(uVar2,astack_special_x_8);
    SystemCore_57470(uVar2,astack_special_x_8[0]);
  }
  return 0;
}
uint64_t SystemCore_546f0(int64_t *param_1,int32_t param_2)
{
  uint64_t uVar1;
  if (param_1 == *(int64_t **)(param_1[1] + 0x116e0)) {
    return 5;
  }
  uVar1 = Function_84797891();
  if ((int)uVar1 == 0) {
    uVar1 = (**(code **)(*param_1 + 0x78))(param_1,param_2);
  }
  return uVar1;
}
uint64_t SystemCore_54740(int64_t param_1,float param_2,char param_3)
{
  float fVar1;
  bool bVar2;
  uint64_t uVar3;
  if (((uint)param_2 & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  bVar2 = param_2 == *(float *)(param_1 + 0x30);
  *(float *)(param_1 + 0x30) = param_2;
  if ((*(uint *)(param_1 + 0x48) & 2) != 0) {
    param_2 = 0.0;
  }
  fVar1 = *(float *)(param_1 + 0xf0);
  uVar3 = 0;
  if ((*(uint *)(param_1 + 0x48) & 0x80030) == 0) {
    uVar3 = 0x40;
  }
  uVar3 = Function_8758dfa9(*(uint64_t *)(param_1 + 0x70),
                              (1.0 - *(float *)(param_1 + 0xd0)) *
                              (1.0 - *(float *)(param_1 + 0xc0)) *
                              (fVar1 * *(float *)(param_1 + 0x78) + (1.0 - fVar1)) * param_2 *
                              (fVar1 * *(float *)(param_1 + 0xa4) + (1.0 - fVar1)),uVar3,1,0);
  if (((int)uVar3 == 0) &&
     (((bVar2 && (param_3 == '\0')) || (uVar3 = SystemCore_4f900(param_1,0,0,param_3), (int)uVar3 == 0)
      ))) {
    uVar3 = 0;
  }
  return uVar3;
}
uint64_t SystemCore_54850(int64_t param_1)
{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int iVar4;
  float *pfVar5;
  int64_t *plVar6;
  float fVar7;
  float fVar8;
  if ((*(byte *)(param_1 + 0x48) & 2) == 0) {
    lVar1 = *(int64_t *)(param_1 + 0x20);
    fVar7 = 1.0;
    if (lVar1 == 0) {
      fVar8 = 1.0;
    }
    else {
      fVar8 = *(float *)(lVar1 + 0x1ec);
    }
    fVar8 = fVar8 * *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x5c);
    if (lVar1 != 0) {
      fVar7 = *(float *)(lVar1 + 0x1e8);
    }
    fVar7 = fVar7 * *(float *)(param_1 + 0x30);
  }
  else {
    fVar7 = 0.0;
    fVar8 = 0.0;
  }
  if ((fVar8 != *(float *)(param_1 + 0x1ec)) || (fVar7 != *(float *)(param_1 + 0x1e8))) {
    *(float *)(param_1 + 0x1e8) = fVar7;
    pfVar5 = (float *)(param_1 + 0x13c);
    *(float *)(param_1 + 0x1ec) = fVar8;
    plVar6 = (int64_t *)(param_1 + 0x150);
    iVar4 = 0;
    do {
      if ((*plVar6 != 0) &&
         (uVar3 = SystemCore_65c40(*plVar6,*(float *)(*(int64_t *)(param_1 + 0x20) + 0x1ec) * *pfVar5,
                                0x40,1,0), (int)uVar3 != 0)) {
        return uVar3;
      }
      iVar4 = iVar4 + 1;
      plVar6 = plVar6 + 1;
      pfVar5 = pfVar5 + 1;
    } while (iVar4 < 4);
    for (puVar2 = *(uint64_t **)(param_1 + 400); puVar2 != (uint64_t *)(param_1 + 400);
        puVar2 = (uint64_t *)*puVar2) {
      uVar3 = SystemCore_54850(puVar2[2]);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    for (puVar2 = *(uint64_t **)(param_1 + 0x1a8); puVar2 != (uint64_t *)(param_1 + 0x1a8);
        puVar2 = (uint64_t *)*puVar2) {
      uVar3 = (**(code **)(*(int64_t *)puVar2[2] + 0x200))();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    if (*(int64_t *)(param_1 + 0x248) != 0) {
      *(int32_t *)(*(int64_t *)(param_1 + 0x248) + 0x274) = *(int32_t *)(param_1 + 0x1ec);
    }
  }
  return 0;
}
uint64_t SystemCore_549c0(int64_t param_1)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  for (puVar2 = *(uint64_t **)(param_1 + 400); puVar2 != (uint64_t *)(param_1 + 400);
      puVar2 = (uint64_t *)*puVar2) {
    (**(code **)(*(int64_t *)puVar2[2] + 8))();
  }
  puVar2 = *(uint64_t **)(param_1 + 0x1a8);
  while (puVar2 != (uint64_t *)(param_1 + 0x1a8)) {
    puVar1 = puVar2 + 2;
    puVar2 = (uint64_t *)*puVar2;
    (**(code **)(*(int64_t *)*puVar1 + 8))();
  }
  return 0;
}
uint64_t SystemCore_54a30(int64_t *param_1,uint64_t param_2,uint64_t param_3)
{
  uint64_t uVar1;
  char *pcVar2;
  int64_t lVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int32_t uVar7;
  int aiStackX_20 [2];
  int64_t alStack_28 [4];
  uVar1 = SystemCore_4f900(param_1,param_2,param_3,0);
  if (((int)uVar1 == 0) &&
     ((((*(byte *)(param_1 + 0x40) & 0x10) == 0 ||
       (uVar1 = SystemCore_4dfc0(param_1,param_2 & 0xffffffff,param_3 & 0xff), (int)uVar1 == 0)) &&
      (uVar1 = (**(code **)(*param_1 + 0x128))(param_1,aiStackX_20), (int)uVar1 == 0)))) {
    uVar6 = 0;
    uVar5 = uVar6;
    if (0 < aiStackX_20[0]) {
      do {
        uVar1 = (**(code **)(*param_1 + 0x120))(param_1,uVar5,alStack_28);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        if ((alStack_28[0] != 0) && (*(int *)(alStack_28[0] + 0x100) == 0x23)) {
          if (param_1[4] == 0) {
            uVar7 = 0x3f800000;
          }
          else {
            uVar7 = *(int32_t *)(param_1[4] + 0x1e8);
          }
          Function_9c6a16e1(alStack_28[0],8,uVar7);
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (uint64_t)uVar4;
      } while ((int)uVar4 < aiStackX_20[0]);
    }
    if ((*(uint *)(param_1 + 9) & 4) == 0) {
      lVar3 = (int64_t)*(int *)(param_1[1] + 0x11400);
      if (0 < lVar3) {
        pcVar2 = (char *)(param_1[1] + 0x110ec);
        do {
          if (*pcVar2 != '\0') goto LAB_180754b33;
          uVar6 = uVar6 + 1;
          pcVar2 = pcVar2 + 0x70;
        } while ((int64_t)uVar6 < lVar3);
      }
    }
    else {
LAB_180754b33:
      *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xfffffffb;
    }
    uVar1 = 0;
  }
  return uVar1;
}
uint64_t SystemCore_54a92(void)
{
  uint64_t uVar1;
  char *pcVar2;
  int64_t lVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t unaff_RSI;
  int64_t *unaff_RDI;
  int32_t uVar6;
  int64_t lStackX_20;
  int local_var_68;
  uVar5 = unaff_RSI & 0xffffffff;
  uVar4 = (uint)unaff_RSI;
  while ((int)uVar4 < local_var_68) {
    uVar1 = (**(code **)(*unaff_RDI + 0x120))();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if ((lStackX_20 != 0) && (*(int *)(lStackX_20 + 0x100) == 0x23)) {
      if (unaff_RDI[4] == 0) {
        uVar6 = 0x3f800000;
      }
      else {
        uVar6 = *(int32_t *)(unaff_RDI[4] + 0x1e8);
      }
      Function_9c6a16e1(lStackX_20,8,uVar6);
    }
    uVar4 = (int)uVar5 + 1;
    uVar5 = (uint64_t)uVar4;
  }
  if ((*(uint *)(unaff_RDI + 9) & 4) == 0) {
    lVar3 = (int64_t)*(int *)(unaff_RDI[1] + 0x11400);
    if (0 < lVar3) {
      pcVar2 = (char *)(unaff_RDI[1] + 0x110ec);
      do {
        if (*pcVar2 != '\0') goto LAB_180754b33;
        unaff_RSI = unaff_RSI + 1;
        pcVar2 = pcVar2 + 0x70;
      } while ((int64_t)unaff_RSI < lVar3);
    }
  }
  else {
LAB_180754b33:
    *(uint *)(unaff_RDI + 9) = *(uint *)(unaff_RDI + 9) & 0xfffffffb;
  }
  return 0;
}
// 函数: void SystemCore_54b40(void)
void SystemCore_54b40(void)
{
  return;
}
uint64_t SystemCore_54b60(int64_t param_1,uint64_t *param_2)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int iVar4;
  if (*(int64_t *)(param_1 + 0x10) == 0) {
    *(uint64_t *)(*(int64_t *)(param_1 + 0x60) + 8) = *param_2;
    *(uint64_t *)(*(int64_t *)(param_1 + 0x60) + 0x10) = param_2[1];
  }
  else {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x18)) {
      lVar3 = 0;
      do {
        iVar4 = iVar4 + 1;
        *(uint64_t *)(*(int64_t *)(lVar3 + *(int64_t *)(param_1 + 0x10)) + 8) = *param_2;
        *(uint64_t *)(*(int64_t *)(lVar3 + *(int64_t *)(param_1 + 0x10)) + 0x10) = param_2[1];
        lVar3 = lVar3 + 8;
      } while (iVar4 < *(int *)(param_1 + 0x18));
    }
  }
  puVar1 = *(uint64_t **)(param_1 + 400);
  while( true ) {
    if (puVar1 == (uint64_t *)(param_1 + 400)) {
      return 0;
    }
    uVar2 = SystemCore_54b60(puVar1[2],param_2);
    if ((int)uVar2 != 0) break;
    puVar1 = (uint64_t *)*puVar1;
  }
  return uVar2;
}
uint64_t SystemCore_54c20(int64_t *param_1,int64_t param_2,int64_t param_3)
{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int8_t astack_special_x_20 [8];
  char acStack_48 [8];
  uint64_t local_var_40;
  uint64_t stack_array_38 [2];
  lVar1 = param_1[0xc];
  lVar4 = param_1[0xd];
  lVar3 = param_1[0xe];
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1,acStack_48);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  param_1[0xe] = lVar3;
  lVar3 = lVar1;
  if (param_2 != 0) {
    lVar3 = param_2;
  }
  param_1[0xc] = lVar3;
  if (param_3 != 0) {
    lVar4 = param_3;
  }
  param_1[0xd] = lVar4;
  if (param_2 != 0) {
    uVar2 = Function_93860446(lVar1,stack_array_38,&local_var_40,astack_special_x_20);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = SystemCore_62250(lVar3,stack_array_38[0],local_var_40,astack_special_x_20[0]);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = SystemCore_62b60(lVar3,*(int32_t *)((int64_t)param_1 + 0x34),1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = SystemCore_62250(lVar1,0,0,0);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = SystemCore_62b60(lVar1,0x3f800000,1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = SystemCore_Initializer(lVar3,acStack_48[0] == (char)uVar2,1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = SystemCore_Initializer(lVar1,1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}
uint64_t SystemCore_54c5c(void)
{
  uint64_t uVar1;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t uVar2;
  uint8_t uVar3;
  uint64_t unaff_R12;
  int64_t unaff_R14;
  int64_t unaff_R15;
  bool in_ZF;
  char cStackX_20;
  uint64_t local_var_28;
  uint64_t local_var_30;
  int8_t local_var_88;
  *(uint64_t *)(unaff_RSI + 0x70) = unaff_R12;
  if (!in_ZF) {
    unaff_RBX = unaff_RBP;
  }
  *(int64_t *)(unaff_RSI + 0x60) = unaff_RBX;
  if (unaff_R15 != 0) {
    unaff_R14 = unaff_R15;
  }
  *(int64_t *)(unaff_RSI + 0x68) = unaff_R14;
  if (unaff_RBP != 0) {
    uVar1 = Function_93860446();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = SystemCore_62250(unaff_RBX,local_var_30,local_var_28,local_var_88);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = SystemCore_62b60(unaff_RBX,*(int32_t *)(unaff_RSI + 0x34),1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar2 = 0;
    uVar1 = SystemCore_62250();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar3 = (uint8_t)((uint64_t)uVar2 >> 8);
    uVar1 = SystemCore_62b60();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = SystemCore_Initializer(unaff_RBX,cStackX_20 == (char)uVar1,CONCAT71(uVar3,1));
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = SystemCore_Initializer();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}
// 函数: void SystemCore_54d34(void)
void SystemCore_54d34(void)
{
  return;
}
uint64_t SystemCore_54d50(int64_t *param_1,int param_2)
{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t stack_special_x_8;
  lVar2 = (int64_t)param_2;
  if (*(int64_t *)(param_1[1] + 0x12640 + lVar2 * 0x18) != 0) {
    if (*(float *)((int64_t)param_1 + lVar2 * 4 + 0x13c) != 0.0) {
      if (param_1[lVar2 + 0x2a] == 0) {
        uVar1 = (**(code **)(*param_1 + 0x120))(0,0xfffffffe,&stack_special_x_8);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        uVar1 = UltraHighFreq_AudioSystem1(*(uint64_t *)(param_1[1] + 0x12640 + lVar2 * 0x18),stack_special_x_8,
                              param_1 + lVar2 + 0x2a,2,(char)uVar1,0);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
      uVar1 = SystemCore_54e60(param_1,param_2);
      if ((int)uVar1 == 0) {
        return 0;
      }
      return uVar1;
    }
    if (param_1[lVar2 + 0x2a] == 0) {
      return 0;
    }
    uVar1 = (**(code **)(*param_1 + 0x120))(0,0xfffffffe,&stack_special_x_8);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = SystemCore_ConfigurationManager(*(uint64_t *)(param_1[1] + 0x12640 + lVar2 * 0x18),stack_special_x_8,
                          param_1[lVar2 + 0x2a],4);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  param_1[lVar2 + 0x2a] = 0;
  return 0;
}
uint64_t SystemCore_54e60(int64_t param_1,int param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  lVar1 = *(int64_t *)(param_1 + 0x150 + (int64_t)param_2 * 8);
  if ((lVar1 != 0) &&
     (uVar2 = SystemCore_65c40(lVar1,*(float *)(param_1 + 0x13c + (int64_t)param_2 * 4) *
                                  *(float *)(*(int64_t *)(param_1 + 0x20) + 0x1ec),0x40,1,0),
     (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}
uint64_t SystemCore_54eb0(int64_t *param_1,int32_t param_2)
{
  int64_t *plVar1;
  uint64_t uVar2;
  uVar2 = (**(code **)(*param_1 + 0x78))();
  if ((int)uVar2 == 0) {
    for (plVar1 = (int64_t *)param_1[0x32]; plVar1 != param_1 + 0x32; plVar1 = (int64_t *)*plVar1)
    {
      uVar2 = SystemCore_54eb0(plVar1[2],param_2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}
uint64_t SystemCore_54ed0(void)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  int32_t unaff_ESI;
  uint64_t *unaff_RDI;
  puVar1 = (uint64_t *)*unaff_RDI;
  while( true ) {
    if (puVar1 == unaff_RDI) {
      return 0;
    }
    uVar2 = SystemCore_54eb0(puVar1[2],unaff_ESI);
    if ((int)uVar2 != 0) break;
    puVar1 = (uint64_t *)*puVar1;
  }
  return uVar2;
}
// 函数: void SystemCore_54efe(void)
void SystemCore_54efe(void)
{
  return;
}
uint64_t SystemCore_54f10(uint64_t param_1,uint64_t *param_2,int64_t *param_3)
{
  int64_t lVar1;
  uint64_t uVar2;
  if (param_2 == (uint64_t *)0x0) {
    return 0x1f;
  }
  *param_2 = param_1;
  if (((param_1 != 0) && ((param_1 & 3) == 0)) && (*(int *)(param_1 + 0x1d8) == -0x35a3521b)) {
    if (param_3 != (int64_t *)0x0) {
      if ((*param_3 != 0) || (lVar1 = *(int64_t *)(param_1 + 8), lVar1 == 0)) {
        return 0x1c;
      }
      uVar2 = SystemCore_43c40(lVar1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      *param_3 = lVar1;
    }
    return 0;
  }
  return 0x1e;
}
uint64_t SystemCore_54f40(int64_t param_1,uint64_t param_2,int64_t *param_3)
{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *unaff_RDI;
  if (unaff_RDI != (int64_t *)0x0) {
    if ((*param_3 != 0) || (lVar1 = *(int64_t *)(param_1 + 8), lVar1 == 0)) {
      return 0x1c;
    }
    uVar2 = SystemCore_43c40(lVar1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *unaff_RDI = lVar1;
  }
  return 0;
}
uint64_t SystemCore_54f75(void)
{
  return 0x1c;
}
uint64_t SystemCore_54f85(void)
{
  return 0x1e;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t SystemCore_54fe0(int64_t param_1,int *param_2)
{
  uint64_t *puVar1;
  if (param_2 != (int *)0x0) {
    SystemStateManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x120));
    puVar1 = *(uint64_t **)(param_1 + 0x28);
    *param_2 = 0;
    for (; puVar1 != (uint64_t *)(param_1 + 0x28); puVar1 = (uint64_t *)*puVar1) {
      *param_2 = *param_2 + *(int *)(puVar1[2] + 0x138);
    }
// WARNING: Subroutine does not return
    SystemConfigManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x120));
  }
  return 0x1f;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_55070(int64_t *param_1)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  if (param_1 == *(int64_t **)(param_1[3] + 0x11720)) {
    return 0x1e;
  }
  if (*(int64_t **)(param_1[3] + 0x11720) == (int64_t *)0x0) {
    if (param_1[0xc] == 0) {
      SystemStateManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x120));
      *(int64_t *)param_1[1] = *param_1;
      *(int64_t *)(*param_1 + 8) = param_1[1];
      param_1[1] = (int64_t)param_1;
      *param_1 = (int64_t)param_1;
// WARNING: Subroutine does not return
      SystemConfigManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x120));
    }
// WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1[0xc],&memory_allocator_336_ptr,0xb7,1);
  }
  plVar1 = (int64_t *)param_1[8];
  while (plVar1 != param_1 + 8) {
    plVar3 = (int64_t *)*plVar1;
    lVar4 = plVar1[2];
    plVar2 = (int64_t *)(lVar4 + 0x1b0);
    **(int64_t **)(lVar4 + 0x1b8) = *plVar2;
    *(uint64_t *)(*plVar2 + 8) = *(uint64_t *)(lVar4 + 0x1b8);
    *(int64_t **)(lVar4 + 0x1b8) = plVar2;
    *plVar2 = (int64_t)plVar2;
    *(int32_t *)(lVar4 + 0x1c8) = 0xffffffff;
    *(uint64_t *)(lVar4 + 0x1c0) = 0;
    *(int32_t *)(lVar4 + 0x218) = 0x3f800000;
    *(int32_t *)(lVar4 + 0x21c) = 0x3f800000;
    *(int32_t *)(lVar4 + 0x1e8) = 0;
    *(int64_t *)plVar1[1] = *plVar1;
    *(int64_t *)(*plVar1 + 8) = plVar1[1];
    plVar1[1] = (int64_t)plVar1;
    *plVar1 = (int64_t)plVar1;
    plVar1 = plVar3;
  }
  SystemStateManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x120));
  plVar1 = param_1 + 5;
  plVar2 = (int64_t *)*plVar1;
  while (plVar2 != plVar1) {
    (**(code **)(**(int64_t **)(*plVar1 + 0x10) + 0xd8))
              (*(int64_t **)(*plVar1 + 0x10),*(uint64_t *)(param_1[3] + 0x11720));
    plVar2 = (int64_t *)*plVar1;
  }
// WARNING: Subroutine does not return
  SystemConfigManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x120));
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_550a5(void)
void SystemCore_550a5(void)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t unaff_RDI;
  int64_t *in_R10;
  int64_t *in_R11;
  if (in_R10 != in_R11) {
    do {
      plVar2 = (int64_t *)*in_R10;
      lVar3 = in_R10[2];
      plVar1 = (int64_t *)(lVar3 + 0x1b0);
      **(int64_t **)(lVar3 + 0x1b8) = *plVar1;
      *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(lVar3 + 0x1b8);
      *(int64_t **)(lVar3 + 0x1b8) = plVar1;
      *plVar1 = (int64_t)plVar1;
      *(int32_t *)(lVar3 + 0x1c8) = 0xffffffff;
      *(uint64_t *)(lVar3 + 0x1c0) = 0;
      *(int32_t *)(lVar3 + 0x218) = 0x3f800000;
      *(int32_t *)(lVar3 + 0x21c) = 0x3f800000;
      *(int32_t *)(lVar3 + 0x1e8) = 0;
      *(int64_t *)in_R10[1] = *in_R10;
      *(int64_t *)(*in_R10 + 8) = in_R10[1];
      in_R10[1] = (int64_t)in_R10;
      *in_R10 = (int64_t)in_R10;
      in_R10 = plVar2;
    } while (plVar2 != in_R11);
  }
  SystemStateManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x120));
  plVar1 = (int64_t *)(unaff_RDI + 0x28);
  plVar2 = (int64_t *)*plVar1;
  while (plVar2 != plVar1) {
    (**(code **)(**(int64_t **)(*plVar1 + 0x10) + 0xd8))
              (*(int64_t **)(*plVar1 + 0x10),
               *(uint64_t *)(*(int64_t *)(unaff_RDI + 0x18) + 0x11720));
    plVar2 = (int64_t *)*plVar1;
  }
// WARNING: Subroutine does not return
  SystemConfigManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x120));
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_551c2(void)
void SystemCore_551c2(void)
{
  int64_t *unaff_RDI;
  if (unaff_RDI[0xc] != 0) {
// WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),unaff_RDI[0xc],&memory_allocator_336_ptr,0xb7,1);
  }
  SystemStateManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x120));
  *(int64_t *)unaff_RDI[1] = *unaff_RDI;
  *(int64_t *)(*unaff_RDI + 8) = unaff_RDI[1];
  unaff_RDI[1] = (int64_t)unaff_RDI;
  *unaff_RDI = (int64_t)unaff_RDI;
// WARNING: Subroutine does not return
  SystemConfigManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x120));
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address