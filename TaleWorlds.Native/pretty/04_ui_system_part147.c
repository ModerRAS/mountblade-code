#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 04_ui_system_part147.c - 4 个函数
// 函数: void SystemCore_526e0(uint64_t *param_1,int64_t param_2)
void SystemCore_526e0(uint64_t *param_1,int64_t param_2)
{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t lVar4;
  lVar4 = 0;
  cVar3 = (**(code **)*param_1)();
  if (cVar3 != '\0') {
    lVar4 = param_1[0x30];
  }
  param_1[0x23] = param_2;
  if (lVar4 != 0) {
    *(int64_t *)(lVar4 + 0x118) = param_2;
    param_2 = param_1[0x23];
  }
  if (param_2 == 0) {
    param_1[0x23] = *(uint64_t *)(param_1[0x1b] + 0x11720);
    if (lVar4 != 0) {
      *(uint64_t *)(lVar4 + 0x118) = *(uint64_t *)(param_1[0x1b] + 0x11720);
    }
  }
  SystemMemoryAllocator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x120));
  plVar1 = param_1 + 0x24;
  *(int64_t *)param_1[0x25] = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[0x25];
  param_1[0x25] = plVar1;
  *plVar1 = (int64_t)plVar1;
  lVar4 = param_1[0x23];
  param_1[0x25] = *(uint64_t *)(lVar4 + 0x30);
  *plVar1 = lVar4 + 0x28;
  *(int64_t **)(lVar4 + 0x30) = plVar1;
  *(int64_t **)param_1[0x25] = plVar1;
  plVar1 = (int64_t *)param_1[0x23];
  param_1[0x26] = param_1;
  *(int64_t *)plVar1[1] = *plVar1;
  *(int64_t *)(*plVar1 + 8) = plVar1[1];
  plVar1[1] = (int64_t)plVar1;
  *plVar1 = (int64_t)plVar1;
  lVar4 = param_1[0x1b];
  plVar1 = (int64_t *)param_1[0x23];
  lVar2 = *(int64_t *)(lVar4 + 0x11728);
  *plVar1 = lVar2;
  plVar1[1] = lVar4 + 0x11728;
  *(int64_t **)(lVar2 + 8) = plVar1;
  *(int64_t **)plVar1[1] = plVar1;
// WARNING: Subroutine does not return
  SystemMemoryManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x120));
}
uint64_t SystemCore_52820(uint64_t *param_1,int param_2,int64_t param_3,char param_4)
{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  uint64_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  uint64_t local_var_28;
  uint64_t local_var_20;
  bVar2 = false;
  if ((param_2 < 0) || (*(int *)(param_1 + 0x16) <= param_2)) {
    uVar5 = 0x1f;
  }
  else if ((param_3 == 0) || (*(int64_t *)(param_3 + 0xb8) == 0)) {
    if (param_1[0x15] == 0) {
      bVar3 = false;
      cVar4 = (**(code **)*param_1)();
      if (cVar4 != '\0') {
        puVar6 = (uint64_t *)param_1[0x15];
        if ((puVar6 == (uint64_t *)0x0) && (puVar6 = param_1, param_1[0x14] != 0)) {
          puVar6 = *(uint64_t **)(param_1[0x14] + (int64_t)*(int *)(param_1 + 0x18) * 8);
        }
        if (((puVar6 != (uint64_t *)0x0) && ((*(uint *)(puVar6 + 0xb) & 4) != 0)) &&
           ((*(uint *)(puVar6 + 0xb) & 8) == 0)) {
          bVar3 = true;
          Function_571d7c62(param_1[0x1b],9);
        }
      }
      if ((param_4 == '\0') && (*(int *)(param_1 + 5) - 1U < 5)) {
        bVar2 = true;
        Function_571d7c62(param_1[0x1b],3);
      }
      lVar1 = *(int64_t *)((int64_t)param_2 * 8 + param_1[0x14]);
      if ((lVar1 != 0) && (*(int64_t *)(lVar1 + 0xa8) != 0)) {
        local_var_88 = 0;
        local_var_80 = 0;
        local_var_78 = 0;
        local_var_70 = 0;
        local_var_68 = 0;
        local_var_60 = 0;
        local_var_58 = 0;
        (**(code **)(param_1[0xc] + 0x88))(param_1[0xc],param_2,&local_var_88);
      }
      if (param_3 != 0) {
        *(int *)(param_3 + 0xc0) = param_2;
        *(uint64_t **)(param_3 + 0xb8) = param_1;
        if (*(int64_t *)(param_3 + 0xa8) != 0) {
          local_var_50 = 0;
          local_var_48 = 0;
          local_var_40 = 0;
          local_var_38 = 0;
          local_var_30 = 0;
          local_var_28 = 0;
          local_var_20 = 0;
          (**(code **)(*(int64_t *)(param_3 + 0x60) + 0x88))(param_1[0xc],param_2,&local_var_50);
        }
      }
      if (lVar1 == 0) {
        if (param_3 != 0) {
          *(int *)((int64_t)param_1 + 0xb4) = *(int *)((int64_t)param_1 + 0xb4) + 1;
        }
      }
      else {
        cVar4 = (**(code **)*param_1)(param_1);
        if (cVar4 == '\0') {
          if (*(int64_t *)(*(int64_t *)(lVar1 + 0xb8) + 0x60) == *(int64_t *)(lVar1 + 0x60)) {
            *(uint64_t *)(lVar1 + 0x60) = 0;
          }
        }
        else if (param_1[0x30] == *(int64_t *)(lVar1 + 0x180)) {
          *(uint64_t *)(param_1[0x30] + 0xb8) = 0;
        }
        *(uint64_t *)(lVar1 + 0xb8) = 0;
        if (param_3 == 0) {
          *(int *)((int64_t)param_1 + 0xb4) = *(int *)((int64_t)param_1 + 0xb4) + -1;
        }
      }
      *(int64_t *)((int64_t)param_2 * 8 + param_1[0x14]) = param_3;
      *(int32_t *)(param_1 + 10) = *(int32_t *)((int64_t)param_1 + 0x44);
      *(int32_t *)((int64_t)param_1 + 0x4c) = 0;
      cVar4 = (**(code **)*param_1)(param_1);
      if (cVar4 != '\0') {
        (**(code **)(*(int64_t *)param_1[0x2f] + 0x88))
                  ((int64_t *)param_1[0x2f],0,*(int *)((int64_t)param_1 + 0x44) + -1);
      }
      if (bVar2) {
// WARNING: Subroutine does not return
        SystemMemoryProcessor(param_1[0x1b],3);
      }
      cVar4 = (**(code **)*param_1)(param_1);
      if (cVar4 != '\0') {
        if (param_3 != 0) {
          LOCK();
          *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 0x10;
          UNLOCK();
        }
        if (bVar3) {
// WARNING: Subroutine does not return
          SystemMemoryProcessor(param_1[0x1b],9);
        }
      }
      uVar5 = 0;
    }
    else {
      uVar5 = 0x3e;
    }
  }
  else {
    uVar5 = 0x3d;
  }
  return uVar5;
}
uint64_t SystemCore_52889(void)
{
  int64_t lVar1;
  bool bVar2;
  char cVar3;
  uint64_t *in_RAX;
  uint64_t *puVar4;
  uint64_t *unaff_RBX;
  uint64_t unaff_RBP;
  char unaff_SIL;
  int64_t unaff_RDI;
  uint64_t in_R9;
  char unaff_R12B;
  uint64_t local_buffer_58;
  uint64_t local_buffer_60;
  uint64_t local_buffer_68;
  uint64_t local_buffer_70;
  uint64_t local_buffer_78;
  uint64_t local_buffer_80;
  uint64_t local_buffer_88;
  bVar2 = false;
  cVar3 = (*(code *)*in_RAX)();
  if (cVar3 != '\0') {
    puVar4 = (uint64_t *)unaff_RBX[0x15];
    if ((puVar4 == (uint64_t *)0x0) && (puVar4 = unaff_RBX, unaff_RBX[0x14] != 0)) {
      puVar4 = *(uint64_t **)(unaff_RBX[0x14] + (int64_t)*(int *)(unaff_RBX + 0x18) * 8);
    }
    if (((puVar4 != (uint64_t *)0x0) && ((*(uint *)(puVar4 + 0xb) & 4) != 0)) &&
       ((*(uint *)(puVar4 + 0xb) & 8) == 0)) {
      bVar2 = true;
      Function_571d7c62(unaff_RBX[0x1b],9);
    }
  }
  if ((unaff_SIL == '\0') && (*(int *)(unaff_RBX + 5) - 1U < 5)) {
    unaff_R12B = '\x01';
    Function_571d7c62(unaff_RBX[0x1b],3);
  }
  lVar1 = *(int64_t *)(unaff_RBP * 8 + unaff_RBX[0x14]);
  if ((lVar1 != 0) && (*(int64_t *)(lVar1 + 0xa8) != 0)) {
    (**(code **)(unaff_RBX[0xc] + 0x88))
              (unaff_RBX[0xc],unaff_RBP & 0xffffffff,&local_buffer_00000020,in_R9,0);
  }
  if (unaff_RDI != 0) {
    *(int *)(unaff_RDI + 0xc0) = (int)unaff_RBP;
    *(uint64_t **)(unaff_RDI + 0xb8) = unaff_RBX;
    if (*(int64_t *)(unaff_RDI + 0xa8) != 0) {
      local_buffer_58 = 0;
      local_buffer_60 = 0;
      local_buffer_68 = 0;
      local_buffer_70 = 0;
      local_buffer_78 = 0;
      local_buffer_80 = 0;
      local_buffer_88 = 0;
      (**(code **)(*(int64_t *)(unaff_RDI + 0x60) + 0x88))
                (unaff_RBX[0xc],unaff_RBP & 0xffffffff,&local_buffer_00000058);
    }
  }
  if (lVar1 == 0) {
    if (unaff_RDI != 0) {
      *(int *)((int64_t)unaff_RBX + 0xb4) = *(int *)((int64_t)unaff_RBX + 0xb4) + 1;
    }
  }
  else {
    cVar3 = (**(code **)*unaff_RBX)();
    if (cVar3 == '\0') {
      if (*(int64_t *)(*(int64_t *)(lVar1 + 0xb8) + 0x60) == *(int64_t *)(lVar1 + 0x60)) {
        *(uint64_t *)(lVar1 + 0x60) = 0;
      }
    }
    else if (unaff_RBX[0x30] == *(int64_t *)(lVar1 + 0x180)) {
      *(uint64_t *)(unaff_RBX[0x30] + 0xb8) = 0;
    }
    *(uint64_t *)(lVar1 + 0xb8) = 0;
    if (unaff_RDI == 0) {
      *(int *)((int64_t)unaff_RBX + 0xb4) = *(int *)((int64_t)unaff_RBX + 0xb4) + -1;
    }
  }
  *(int64_t *)(unaff_RBP * 8 + unaff_RBX[0x14]) = unaff_RDI;
  *(int32_t *)(unaff_RBX + 10) = *(int32_t *)((int64_t)unaff_RBX + 0x44);
  *(int32_t *)((int64_t)unaff_RBX + 0x4c) = 0;
  cVar3 = (**(code **)*unaff_RBX)();
  if (cVar3 != '\0') {
    (**(code **)(*(int64_t *)unaff_RBX[0x2f] + 0x88))
              ((int64_t *)unaff_RBX[0x2f],0,*(int *)((int64_t)unaff_RBX + 0x44) + -1);
  }
  if (unaff_R12B == '\0') {
    cVar3 = (**(code **)*unaff_RBX)();
    if (cVar3 != '\0') {
      if (unaff_RDI != 0) {
        LOCK();
        *(uint *)(unaff_RBX + 0xb) = *(uint *)(unaff_RBX + 0xb) | 0x10;
        UNLOCK();
      }
      if (bVar2) {
// WARNING: Subroutine does not return
        SystemMemoryProcessor(unaff_RBX[0x1b],9);
      }
    }
    return 0;
  }
// WARNING: Subroutine does not return
  SystemMemoryProcessor(unaff_RBX[0x1b],3);
}
uint64_t SystemCore_52a56(void)
{
  char cVar1;
  uint64_t *unaff_RBX;
  int64_t unaff_RDI;
  char unaff_R12B;
  char unaff_R15B;
  (**(code **)(*(int64_t *)unaff_RBX[0x2f] + 0x88))
            ((int64_t *)unaff_RBX[0x2f],0,*(int *)((int64_t)unaff_RBX + 0x44) + -1);
  if (unaff_R12B != '\0') {
// WARNING: Subroutine does not return
    SystemMemoryProcessor(unaff_RBX[0x1b],3);
  }
  cVar1 = (**(code **)*unaff_RBX)();
  if (cVar1 != '\0') {
    if (unaff_RDI != 0) {
      LOCK();
      *(uint *)(unaff_RBX + 0xb) = *(uint *)(unaff_RBX + 0xb) | 0x10;
      UNLOCK();
    }
    if (unaff_R15B != '\0') {
// WARNING: Subroutine does not return
      SystemMemoryProcessor(unaff_RBX[0x1b],9);
    }
  }
  return 0;
}
uint64_t SystemCore_52abd(void)
{
  return 0x1f;
}
uint64_t SystemCore_52af0(int64_t *param_1)
{
  int iVar1;
  int iVar2;
  int aiStackX_8 [2];
  int64_t lStackX_10;
  iVar2 = 0;
  aiStackX_8[0] = 0;
  iVar1 = (**(code **)(*param_1 + 0xe8))(param_1,aiStackX_8);
  if ((iVar1 == 0) && (0 < aiStackX_8[0])) {
    do {
      iVar1 = (**(code **)(*param_1 + 0xf0))(param_1,iVar2,&lStackX_10);
      if (iVar1 == 0) {
        *(short *)(lStackX_10 + 0x36) = (short)iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < aiStackX_8[0]);
  }
  return 0;
}
uint64_t SystemCore_52b60(int64_t *param_1,uint64_t param_2)
{
  uint *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lStack_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  uint64_t local_var_28;
  uint64_t local_var_20;
  uint64_t local_var_18;
  LOCK();
  *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) & 0xffffffb3;
  UNLOCK();
  if (param_1[0x17] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x17] + 0x58);
    *puVar1 = *puVar1 & 0xffffffb7;
    UNLOCK();
    *(uint *)((int64_t)param_1 + 0x2c) = *(uint *)((int64_t)param_1 + 0x2c) & 0xfffffff8;
    *(uint *)((int64_t)param_1 + 0x2c) =
         *(uint *)((int64_t)param_1 + 0x2c) | *(uint *)(param_1[0x17] + 0x2c) & 7;
  }
  *(int *)(param_1 + 0x18) = (int)param_2;
  lStack_48 = 0;
  local_var_40 = 0;
  local_var_38 = 0;
  local_var_30 = 0;
  local_var_28 = 0;
  local_var_20 = 0;
  local_var_18 = 0;
  uVar3 = (**(code **)(param_1[0xc] + 0x88))(param_1[0xc],param_2,&lStack_48);
  if ((int)uVar3 == 0) {
    param_1[6] = lStack_48;
    *(int32_t *)(param_1 + 5) = (int32_t)local_var_40;
    *(int32_t *)(param_1 + 0xd) = local_var_40._4_4_;
    *(int *)((int64_t)param_1 + 0x4c) = (int)local_var_28;
    *(int32_t *)((int64_t)param_1 + 0x13c) = local_var_18._4_4_;
    *(int *)(param_1 + 10) = (local_var_28._4_4_ - (int)local_var_28) + 1;
    *(int32_t *)((int64_t)param_1 + 0x44) = (int32_t)local_var_30;
    *(float *)((int64_t)param_1 + 0x6c) = (float)(int)local_var_38;
    (**(code **)(*param_1 + 0x138))(param_1,local_var_28 & 0xffffffff,2,local_var_28._4_4_,2);
    lVar2 = param_1[0x30];
    *(int32_t *)(lVar2 + 0x13c) = local_var_18._4_4_;
    *(int32_t *)(lVar2 + 0x68) = local_var_40._4_4_;
    uVar3 = 0;
    *(int *)(lVar2 + 0xc0) = (int)param_2;
  }
  return uVar3;
}
uint64_t SystemCore_52c80(uint64_t param_1,uint64_t *param_2,int64_t *param_3)
{
  int64_t lVar1;
  uint64_t uVar2;
  if (param_2 == (uint64_t *)0x0) {
    return 0x1f;
  }
  *param_2 = param_1;
  if (((param_1 == 0) || ((param_1 & 3) != 0)) || (*(int *)(param_1 + 0x20) != -0x533fe522)) {
    return 0x1e;
  }
  if (((param_3 != (int64_t *)0x0) && (lVar1 = *(int64_t *)(param_1 + 0xd8), lVar1 != 0)) &&
     ((*(uint *)(lVar1 + 0x78) & 0x100000) == 0)) {
    if (*param_3 != 0) {
      return 0x1c;
    }
    uVar2 = Function_571d7c62(lVar1,0xc);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *param_3 = lVar1;
  }
  return 0;
}
uint64_t SystemCore_52cad(int64_t param_1,uint64_t param_2,int64_t *param_3)
{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *unaff_RDI;
  if (((unaff_RDI != (int64_t *)0x0) && (lVar1 = *(int64_t *)(param_1 + 0xd8), lVar1 != 0)) &&
     ((*(uint *)(lVar1 + 0x78) & 0x100000) == 0)) {
    if (*param_3 != 0) {
      return 0x1c;
    }
    uVar2 = Function_571d7c62(lVar1,0xc);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *unaff_RDI = lVar1;
  }
  return 0;
}
uint64_t SystemCore_52cf3(void)
{
  return 0x1c;
}
uint64_t SystemCore_52d03(void)
{
  return 0x1e;
}
uint64_t SystemCore_52eb0(int64_t param_1,uint64_t param_2,uint64_t param_3)
{
  uint64_t uVar1;
  int aiStackX_20 [2];
  aiStackX_20[0] = 0;
  uVar1 = SystemCore_4bf10();
  if ((int)uVar1 == 0) {
    uVar1 = Function_3bf0b02e(param_3,aiStackX_20);
    if ((int)uVar1 == 0) {
      if (aiStackX_20[0] == 0x19) {
        *(uint64_t *)(param_1 + 0x248) = param_3;
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}
int SystemCore_52f00(int64_t *param_1,int64_t *param_2,char param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lStackX_10;
  int64_t lStack_38;
  int64_t lStack_30;
  if ((param_2 == (int64_t *)0x0) || (param_2 == param_1)) {
    return 0x1f;
  }
  if ((int64_t *)param_2[4] == param_1) {
    return 0;
  }
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    Function_571d7c62(lVar2,2);
  }
  plVar1 = param_2 + 0x2f;
  *(int64_t *)param_2[0x30] = *plVar1;
  *(int64_t *)(*plVar1 + 8) = param_2[0x30];
  param_2[0x30] = (int64_t)plVar1;
  *plVar1 = (int64_t)plVar1;
  iVar4 = (**(code **)(*param_2 + 0x120))(param_2,0,&lStack_38);
  if (iVar4 == 0) {
    plVar3 = (int64_t *)param_2[4];
    if (plVar3 != (int64_t *)0x0) {
      lStackX_10 = 0;
      iVar4 = (**(code **)(*plVar3 + 0x120))(plVar3,0xfffffffd,&lStackX_10);
      if (iVar4 != 0) goto LAB_1807530cb;
      if ((*(uint *)(lStackX_10 + 100) >> 10 & 1) == 0) {
        iVar4 = SystemCore_ConfigurationManager(lStackX_10,lStack_38,0,0);
        if (iVar4 != 0) goto LAB_1807530cb;
      }
    }
    param_2[0x30] = param_1[0x33];
    *plVar1 = (int64_t)(param_1 + 0x32);
    param_1[0x33] = (int64_t)plVar1;
    *(int64_t **)param_2[0x30] = plVar1;
    param_2[0x31] = (int64_t)param_2;
    iVar4 = (**(code **)(*param_1 + 0x120))(param_1,0xfffffffd,&lStack_30);
    if (iVar4 == 0) {
      if (lStack_38 != 0) {
        iVar4 = UltraHighFreq_AudioSystem1(lStack_30,lStack_38,param_4,0,0,0);
        if (iVar4 != 0) goto LAB_1807530cb;
        if (param_3 != '\0') {
          iVar4 = SystemCore_54b60(param_2,lStack_30 + 8);
          if (iVar4 != 0) goto LAB_1807530cb;
        }
      }
      param_2[4] = (int64_t)param_1;
      iVar4 = SystemCore_54520(param_2,*(uint *)(param_1 + 9) >> 4 & 0xffffff01);
      if (iVar4 == 0) {
        iVar4 = SystemCore_54850(param_2);
        if (iVar4 == 0) {
          iVar4 = SystemCore_54640(param_2);
        }
      }
    }
  }
LAB_1807530cb:
  if ((lVar2 != 0) && (lVar2 != 0)) {
// WARNING: Subroutine does not return
    SystemMemoryProcessor(lVar2,2);
  }
  return iVar4;
}
int SystemCore_52f3d(int64_t param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t *unaff_RSI;
  int64_t *unaff_RDI;
  char unaff_R12B;
  int64_t local_var_30;
  uint64_t local_var_38;
  int64_t local_buffer_78;
  lVar2 = *(int64_t *)(param_1 + 8);
  if (lVar2 != 0) {
    Function_571d7c62(lVar2,2);
  }
  plVar1 = unaff_RDI + 0x2f;
  *(int64_t *)unaff_RDI[0x30] = *plVar1;
  *(int64_t *)(*plVar1 + 8) = unaff_RDI[0x30];
  unaff_RDI[0x30] = (int64_t)plVar1;
  *plVar1 = (int64_t)plVar1;
  iVar4 = (**(code **)(*unaff_RDI + 0x120))();
  if (iVar4 == 0) {
    plVar3 = (int64_t *)unaff_RDI[4];
    if (plVar3 != (int64_t *)0x0) {
      local_buffer_78 = 0;
      iVar4 = (**(code **)(*plVar3 + 0x120))(plVar3,0xfffffffd,&local_buffer_00000078);
      if (iVar4 != 0) goto LAB_1807530cb;
      if ((*(uint *)(local_buffer_78 + 100) >> 10 & 1) == 0) {
        iVar4 = SystemCore_ConfigurationManager(local_buffer_78,local_var_30,0,0);
        if (iVar4 != 0) goto LAB_1807530cb;
      }
    }
    unaff_RDI[0x30] = unaff_RSI[0x33];
    *plVar1 = (int64_t)(unaff_RSI + 0x32);
    unaff_RSI[0x33] = (int64_t)plVar1;
    *(int64_t **)unaff_RDI[0x30] = plVar1;
    unaff_RDI[0x31] = (int64_t)unaff_RDI;
    iVar4 = (**(code **)(*unaff_RSI + 0x120))();
    if (iVar4 == 0) {
      if (local_var_30 != 0) {
        iVar4 = UltraHighFreq_AudioSystem1(local_var_38);
        if (iVar4 != 0) goto LAB_1807530cb;
        if (unaff_R12B != '\0') {
          iVar4 = SystemCore_54b60();
          if (iVar4 != 0) goto LAB_1807530cb;
        }
      }
      unaff_RDI[4] = (int64_t)unaff_RSI;
      iVar4 = SystemCore_54520();
      if (iVar4 == 0) {
        iVar4 = SystemCore_54850();
        if (iVar4 == 0) {
          iVar4 = SystemCore_54640();
        }
      }
    }
  }
LAB_1807530cb:
  if ((lVar2 != 0) && (lVar2 != 0)) {
// WARNING: Subroutine does not return
    SystemMemoryProcessor(lVar2,2);
  }
  return iVar4;
}
int SystemCore_52f4e(void)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  int64_t *unaff_RDI;
  char unaff_R12B;
  int64_t local_var_30;
  uint64_t local_var_38;
  int64_t local_buffer_78;
  if (unaff_RBP != 0) {
    Function_571d7c62();
  }
  plVar1 = unaff_RDI + 0x2f;
  *(int64_t *)unaff_RDI[0x30] = *plVar1;
  *(int64_t *)(*plVar1 + 8) = unaff_RDI[0x30];
  unaff_RDI[0x30] = (int64_t)plVar1;
  *plVar1 = (int64_t)plVar1;
  iVar3 = (**(code **)(*unaff_RDI + 0x120))();
  if (iVar3 == 0) {
    plVar2 = (int64_t *)unaff_RDI[4];
    if (plVar2 != (int64_t *)0x0) {
      local_buffer_78 = 0;
      iVar3 = (**(code **)(*plVar2 + 0x120))(plVar2,0xfffffffd,&local_buffer_00000078);
      if (iVar3 != 0) goto LAB_1807530cb;
      if ((*(uint *)(local_buffer_78 + 100) >> 10 & 1) == 0) {
        iVar3 = SystemCore_ConfigurationManager(local_buffer_78,local_var_30,0,0);
        if (iVar3 != 0) goto LAB_1807530cb;
      }
    }
    unaff_RDI[0x30] = unaff_RSI[0x33];
    *plVar1 = (int64_t)(unaff_RSI + 0x32);
    unaff_RSI[0x33] = (int64_t)plVar1;
    *(int64_t **)unaff_RDI[0x30] = plVar1;
    unaff_RDI[0x31] = (int64_t)unaff_RDI;
    iVar3 = (**(code **)(*unaff_RSI + 0x120))();
    if (iVar3 == 0) {
      if (local_var_30 != 0) {
        iVar3 = UltraHighFreq_AudioSystem1(local_var_38);
        if (iVar3 != 0) goto LAB_1807530cb;
        if (unaff_R12B != '\0') {
          iVar3 = SystemCore_54b60();
          if (iVar3 != 0) goto LAB_1807530cb;
        }
      }
      unaff_RDI[4] = (int64_t)unaff_RSI;
      iVar3 = SystemCore_54520();
      if (iVar3 == 0) {
        iVar3 = SystemCore_54850();
        if (iVar3 == 0) {
          iVar3 = SystemCore_54640();
        }
      }
    }
  }
LAB_1807530cb:
  if ((unaff_RBP != 0) && (unaff_RBP != 0)) {
// WARNING: Subroutine does not return
    SystemMemoryProcessor();
  }
  return iVar3;
}
int32_t SystemCore_530dd(void)
{
  int32_t unaff_EBX;
  int64_t unaff_RBP;
  if (unaff_RBP != 0) {
// WARNING: Subroutine does not return
    SystemMemoryProcessor();
  }
  return unaff_EBX;
}
uint64_t SystemCore_53109(void)
{
  return 0x1f;
}
// 函数: void SystemCore_53170(int64_t *param_1)
void SystemCore_53170(int64_t *param_1)
{
  int iVar1;
  int iVar2;
  int aiStackX_8 [2];
  uint64_t stack_special_x_10;
  uint64_t stack_special_x_18;
  int64_t lStackX_20;
  uint64_t local_var_38;
  int64_t alStack_30 [3];
  iVar2 = 0;
  stack_special_x_10 = 0;
  iVar1 = (**(code **)(*param_1 + 0x120))(param_1,0xffffffff,&stack_special_x_10);
  if ((iVar1 == 0) &&
     (iVar1 = (**(code **)(*(int64_t *)param_1[4] + 0x120))
                        ((int64_t *)param_1[4],0xfffffffd,alStack_30), iVar1 == 0)) {
    SystemCore_5ec10(stack_special_x_10,aiStackX_8,0,1);
    if (0 < aiStackX_8[0]) {
      do {
        SystemCore_5ef40(stack_special_x_10,iVar2,&lStackX_20,&stack_special_x_18,0,1);
        Function_2cf9b4b3(stack_special_x_18,&local_var_38);
        if (local_var_38 == ((int64_t)*(short *)((int64_t)param_1 + 0x1fc) | 0xfeed0000U)) {
          SystemCore_ConfigurationManager(lStackX_20,stack_special_x_10,stack_special_x_18,4);
          iVar2 = iVar2 + -1;
          aiStackX_8[0] = aiStackX_8[0] + -1;
        }
        else if ((lStackX_20 == alStack_30[0]) && (*(char *)((int64_t)param_1 + 0x1fe) == '\0')) {
          SystemCore_65c40(stack_special_x_18,0x3f800000,0,1,0);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < aiStackX_8[0]);
    }
    SystemCore_865b0(*(uint64_t *)(param_1[1] + 0x670),(int)*(short *)((int64_t)param_1 + 0x1fc));
  }
  return;
}
// 函数: void SystemCore_531d6(void)
void SystemCore_531d6(void)
{
  int unaff_EBX;
  int64_t unaff_RDI;
  int8_t local_var_28;
  uint64_t local_var_30;
  int64_t local_var_38;
  int local_buffer_70;
  uint64_t local_buffer_78;
  uint64_t local_buffer_80;
  int64_t local_buffer_88;
  do {
    local_var_28 = 1;
    SystemCore_5ef40(local_buffer_78,unaff_EBX,&local_buffer_00000088,&local_buffer_00000080,0);
    Function_2cf9b4b3(local_buffer_80,&local_buffer_00000030);
    if (local_var_30 == ((int64_t)*(short *)(unaff_RDI + 0x1fc) | 0xfeed0000U)) {
      SystemCore_ConfigurationManager(local_buffer_88,local_buffer_78,local_buffer_80,4);
      unaff_EBX = unaff_EBX + -1;
      local_buffer_70 = local_buffer_70 + -1;
    }
    else if ((local_buffer_88 == local_var_38) && (*(char *)(unaff_RDI + 0x1fe) == '\0')) {
      SystemCore_65c40(local_buffer_80,0x3f800000,0,1,0);
    }
    unaff_EBX = unaff_EBX + 1;
  } while (unaff_EBX < local_buffer_70);
  SystemCore_865b0(*(uint64_t *)(*(int64_t *)(unaff_RDI + 8) + 0x670),
                (int)*(short *)(unaff_RDI + 0x1fc));
  return;
}
// 函数: void SystemCore_532ab(void)
void SystemCore_532ab(void)
{
  int64_t unaff_RDI;
  SystemCore_865b0(*(uint64_t *)(*(int64_t *)(unaff_RDI + 8) + 0x670),
                (int)*(short *)(unaff_RDI + 0x1fc));
  return;
}
int32_t SystemCore_532f0(int64_t param_1,float *param_2)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  if (param_2 == (float *)0x0) {
    return 0x1f;
  }
  if ((*(byte *)(param_1 + 0x48) & 0x10) != 0) {
    *param_2 = 0.0;
    return 0;
  }
  fVar2 = *(float *)(param_1 + 0x1ec);
  if ((*(byte *)(param_1 + 0x200) & 0x10) != 0) {
    fVar1 = *(float *)(param_1 + 0xf0);
    fVar4 = 1.0 - *(float *)(param_1 + 0xc0);
    fVar5 = 1.0 - *(float *)(param_1 + 0xd0);
    if (1.0 <= fVar1) {
      fVar5 = *(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0x78) * fVar4 * fVar5;
    }
    else {
      fVar3 = 1.0 - fVar1;
      fVar5 = (fVar1 * *(float *)(param_1 + 0xa4) + fVar3) *
              (fVar1 * *(float *)(param_1 + 0x78) + fVar3) * (fVar1 * fVar4 + fVar3) *
              (fVar1 * fVar5 + fVar3);
    }
    fVar2 = fVar2 * fVar5;
  }
  *param_2 = fVar2;
  return 0;
}
uint64_t SystemCore_5334a(float param_1,float *param_2,uint64_t param_3,float param_4)
{
  int64_t in_RCX;
  bool in_CF;
  float in_XMM1_Da;
  float in_XMM4_Da;
  float fVar1;
  float in_XMM5_Da;
  float fVar2;
  float fVar3;
  fVar2 = in_XMM4_Da - *(float *)(in_RCX + 0xc0);
  fVar3 = in_XMM4_Da - *(float *)(in_RCX + 0xd0);
  if (in_CF) {
    fVar1 = in_XMM4_Da - in_XMM5_Da;
    fVar3 = (in_XMM5_Da * param_1 + fVar1) * (in_XMM5_Da * in_XMM1_Da + fVar1) *
            (in_XMM5_Da * fVar2 + fVar1) * (in_XMM5_Da * fVar3 + fVar1);
  }
  else {
    fVar3 = param_1 * in_XMM1_Da * fVar2 * fVar3;
  }
  *param_2 = param_4 * fVar3;
  return 0;
}
uint64_t
SystemCore_533c2(uint64_t param_1,int32_t *param_2,uint64_t param_3,int32_t param_4)
{
  *param_2 = param_4;
  return 0;
}
uint64_t SystemCore_53420(int64_t *param_1,uint64_t *param_2,uint64_t *param_3)
{
  uint64_t uVar1;
  int64_t lStackX_10;
  if (param_2 != (uint64_t *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x120))(param_1,0xfffffffd,&lStackX_10);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *param_2 = *(uint64_t *)(lStackX_10 + 0x10);
  }
  if (param_3 != (uint64_t *)0x0) {
    lStackX_10 = 0;
    if ((int64_t *)param_1[4] == (int64_t *)0x0) {
      uVar1 = (**(code **)(*param_1 + 0x120))(param_1,0xfffffffd,&lStackX_10);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    else {
      uVar1 = (**(code **)(*(int64_t *)param_1[4] + 0x120))();
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    *param_3 = *(uint64_t *)(lStackX_10 + 0x10);
  }
  return 0;
}
uint64_t SystemCore_535b0(int64_t *param_1,int *param_2)
{
  uint64_t uVar1;
  uint64_t astack_special_x_8 [4];
  uVar1 = (**(code **)(*param_1 + 0x120))(param_1,0xfffffffe,astack_special_x_8);
  if ((int)uVar1 == 0) {
    uVar1 = Function_6cfd38f8(astack_special_x_8[0],0,param_2,0);
    if ((int)uVar1 == 0) {
      if (*param_2 == 0) {
        *param_2 = 1;
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}
uint64_t SystemCore_53680(int64_t param_1,char *param_2)
{
  uint64_t *puVar1;
  int iVar2;
  uint64_t uVar3;
  int iVar4;
  uint64_t *puVar5;
  int iVar6;
  int iVar7;
  int64_t *plStackX_10;
  *param_2 = '\0';
  iVar6 = 0;
  iVar7 = *(int *)(param_1 + 0x1dc);
  if (0 < iVar7) {
    do {
      puVar1 = *(uint64_t **)(param_1 + 0x1a8);
      iVar4 = 0;
      while( true ) {
        if (puVar1 == (uint64_t *)(param_1 + 0x1a8)) {
          return 0x1f;
        }
        if (iVar4 == iVar6) break;
        puVar1 = (uint64_t *)*puVar1;
        iVar4 = iVar4 + 1;
      }
      SystemCore_3cd10();
      if (*param_2 != '\0') {
        return 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar7);
  }
  puVar1 = (uint64_t *)(param_1 + 400);
  iVar7 = 0;
  for (puVar5 = (uint64_t *)*puVar1; puVar5 != puVar1; puVar5 = (uint64_t *)*puVar5) {
    iVar7 = iVar7 + 1;
  }
  iVar6 = 0;
  if (0 < iVar7) {
    do {
      iVar4 = 0;
      for (puVar5 = (uint64_t *)*puVar1; puVar5 != puVar1; puVar5 = (uint64_t *)*puVar5) {
        iVar4 = iVar4 + 1;
      }
      if ((iVar6 < 0) || (iVar4 <= iVar6)) {
        return 0x1f;
      }
      puVar5 = (uint64_t *)*puVar1;
      iVar2 = 0;
      if (0 < iVar4) {
        do {
          if (iVar2 == iVar6) {
            plStackX_10 = (int64_t *)puVar5[2];
          }
          puVar5 = (uint64_t *)*puVar5;
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar4);
      }
      uVar3 = (**(code **)(*plStackX_10 + 0xa8))(plStackX_10,param_2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    } while ((*param_2 == (char)uVar3) && (iVar6 = iVar6 + 1, iVar6 < iVar7));
  }
  return 0;
}
uint64_t SystemCore_537b0(int64_t *param_1)
{
  bool bVar1;
  bool bVar2;
  int64_t *plVar3;
  if (((((*(byte *)(param_1 + 9) & 0x40) == 0) && ((*(byte *)(param_1 + 0x40) & 0x10) == 0)) &&
      (plVar3 = param_1 + 0x22, (int64_t *)*plVar3 == plVar3)) &&
     (((int64_t *)param_1[0x23] == plVar3 && (*(int *)(param_1[0xe] + 0x2a4) != 0)))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  bVar1 = false;
  if ((*(uint *)(param_1 + 0x40) & 0x1000000) == 0) {
    bVar1 = bVar2;
  }
  if (bVar1) {
    (**(code **)(*param_1 + 0x208))(param_1);
    return 0;
  }
  if ((char)*(uint *)(param_1 + 9) < '\0') {
    *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xffffff7f;
    return 0;
  }
  plVar3 = param_1 + 0x38;
  *(int64_t *)param_1[0x39] = *plVar3;
  *(int64_t *)(*plVar3 + 8) = param_1[0x39];
  param_1[0x39] = (int64_t)plVar3;
  *plVar3 = (int64_t)plVar3;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address