#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_13_part042.c - 4 个函数
// 函数: void NetworkProtocol_c0760(void)
void NetworkProtocol_c0760(void)
{
  int8_t stack_array_94 [108];
// WARNING: Subroutine does not return
  memset(stack_array_94,0,100);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkProtocol_c07f7(int param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int32_t in_EAX;
  int64_t lVar1;
  uint64_t uVar2;
  int64_t unaff_RBX;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint unaff_R12D;
  int32_t unaff_R13D;
  char unaff_R15B;
  uint64_t local_var_20;
  uint64_t uVar3;
  int8_t local_buffer_28;
  uint local_var_110;
  uint64_t local_var_118;
  int32_t local_var_130;
  local_buffer_28 = 0;
  uVar3 = local_var_20 & 0xffffffff00000000;
  *(int32_t *)(unaff_RBX + 0x4f8) = in_EAX;
  *(int *)(unaff_RBX + 0x4fc) = param_1 * -0x57dea137;
  lVar1 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x18,param_3,param_4,uVar3);
  if (lVar1 != 0) {
    uVar2 = SystemFunction_0001808674c0(lVar1);
    *(uint64_t *)(unaff_RBX + 0x788) = uVar2;
    uVar2 = Function_e9e254c0(uVar2);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    local_buffer_28 = 0;
    lVar1 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x1d8,&rendering_buffer_2688_ptr,0x239,
                          uVar3 & 0xffffffff00000000);
    if (lVar1 != 0) {
      uVar2 = NetworkProtocol_e0b30(lVar1);
      *(uint64_t *)(unaff_RBX + 0x790) = uVar2;
      uVar2 = NetworkProtocol_e1880(uVar2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = Function_2939f61f(unaff_RBX + 0x368);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = Function_2939f61f(unaff_RBX + 0x388);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = Function_2939f61f(unaff_RBX + 0x3a8,unaff_RBX + 0x1d8,unaff_RBX + 0x108);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = Function_9b8d2b73(unaff_RBX + 0x3c8,unaff_RBX + 0x38);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = SystemCore_73A200();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = UtilitiesSystem_MathCalculator(0,unaff_RBX + 0x4d0,0);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = SystemCore_3a840();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      *(int32_t *)(unaff_RBX + 0x774) = 0;
      uVar2 = SystemCore_39a50();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      *(uint64_t *)(unaff_RBX + 0x7c0) = local_var_118;
      *(byte *)(unaff_RBX + 0x781) = (byte)(local_var_110 >> 2) & 1;
      *(uint64_t *)(unaff_RBX + 0x4b8) = unaff_RSI;
      *(uint64_t *)(unaff_RBX + 0x4c0) = unaff_RDI;
      if (unaff_R15B == '\0') {
        unaff_R13D = 0x12c0;
      }
      *(char *)(unaff_RBX + 0x782) = unaff_R15B;
      *(int32_t *)(unaff_RBX + 0x77c) = unaff_R13D;
      *(int32_t *)(unaff_RBX + 0x7b8) = local_var_130;
      *(byte *)(unaff_RBX + 0x783) = (byte)(local_var_110 >> 0x15) & 1;
      *(byte *)(unaff_RBX + 0x784) = (byte)(unaff_R12D >> 5) & 1;
      if (*(int64_t *)(unaff_RBX + 0x290) == 0) {
        *(uint64_t *)(unaff_RBX + 0x290) = unaff_RSI;
      }
      *(int32_t *)(unaff_RBX + 0x350) = *(int32_t *)(unaff_RBX + 0x774);
      NetworkProtocol_d52a0(unaff_RBX + 0x338,*(uint64_t *)(unaff_RBX + 0x4d0));
      return 0;
    }
  }
  return 0x26;
}
uint64_t NetworkProtocol_c08e3(void)
{
  uint64_t uVar1;
  int64_t unaff_RBX;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint unaff_R12D;
  int32_t unaff_R13D;
  int64_t unaff_R14;
  char unaff_R15B;
  uint local_var_110;
  uint64_t local_var_118;
  int32_t local_var_130;
  uVar1 = Function_2939f61f();
  if ((int)uVar1 == 0) {
    uVar1 = Function_2939f61f(unaff_RBX + 0x388);
    if ((int)uVar1 == 0) {
      uVar1 = Function_2939f61f(unaff_RBX + 0x3a8,unaff_RBX + 0x1d8,unaff_RBX + 0x108);
      if ((int)uVar1 == 0) {
        uVar1 = Function_9b8d2b73(unaff_RBX + 0x3c8,unaff_RBX + 0x38);
        if ((int)uVar1 == 0) {
          uVar1 = SystemCore_73A200();
          if ((int)uVar1 == 0) {
            uVar1 = UtilitiesSystem_MathCalculator(unaff_R14,unaff_RBX + 0x4d0,0);
            if ((int)uVar1 == 0) {
              uVar1 = SystemCore_3a840();
              if ((int)uVar1 == 0) {
                *(int *)(unaff_RBX + 0x774) = (int)unaff_R14;
                uVar1 = SystemCore_39a50();
                if ((int)uVar1 == 0) {
                  *(uint64_t *)(unaff_RBX + 0x7c0) = local_var_118;
                  *(byte *)(unaff_RBX + 0x781) = (byte)(local_var_110 >> 2) & 1;
                  *(uint64_t *)(unaff_RBX + 0x4b8) = unaff_RSI;
                  *(uint64_t *)(unaff_RBX + 0x4c0) = unaff_RDI;
                  if (unaff_R15B == '\0') {
                    unaff_R13D = 0x12c0;
                  }
                  *(char *)(unaff_RBX + 0x782) = unaff_R15B;
                  *(int32_t *)(unaff_RBX + 0x77c) = unaff_R13D;
                  *(int32_t *)(unaff_RBX + 0x7b8) = local_var_130;
                  *(byte *)(unaff_RBX + 0x783) = (byte)(local_var_110 >> 0x15) & 1;
                  *(byte *)(unaff_RBX + 0x784) = (byte)(unaff_R12D >> 5) & 1;
                  if (*(int64_t *)(unaff_RBX + 0x290) == unaff_R14) {
                    *(uint64_t *)(unaff_RBX + 0x290) = unaff_RSI;
                  }
                  *(int32_t *)(unaff_RBX + 0x350) = *(int32_t *)(unaff_RBX + 0x774);
                  NetworkProtocol_d52a0(unaff_RBX + 0x338,*(uint64_t *)(unaff_RBX + 0x4d0));
                  uVar1 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar1;
}
// 函数: void NetworkProtocol_c0aa7(void)
void NetworkProtocol_c0aa7(void)
{
  return;
}
// 函数: void NetworkProtocol_c0aaf(void)
void NetworkProtocol_c0aaf(void)
{
  return;
}
uint64_t NetworkProtocol_c0ac7(void)
{
  return 0x26;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int NetworkProtocol_c0ad0(int64_t *param_1,int32_t *param_2,uint64_t *param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  bool bVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  int64_t lVar9;
  int iVar10;
  int *piVar11;
  int64_t *plVar12;
  uint64_t *pstack_special_x_18;
  int32_t astack_special_x_20 [2];
  uint local_var_48;
  uint local_var_44;
  uint local_var_40;
  uint local_var_3c;
  pstack_special_x_18 = param_3;
  lVar5 = NetworkProtocol_51c50(param_1,param_2,*(int32_t *)(param_3 + 6));
  if (lVar5 != 0) {
    return 0x1f;
  }
  plVar12 = param_1 + 6;
  if ((int)param_1[0xc] < 1) {
    plVar12 = param_1;
  }
  lVar5 = plVar12[5];
  if (lVar5 != 0) {
    SystemStateManager(lVar5);
  }
  puVar6 = (uint64_t *)Function_357ff8fd(plVar12,param_2);
  if (lVar5 != 0) {
// WARNING: Subroutine does not return
    SystemConfigManager(lVar5);
  }
  bVar4 = false;
  puVar7 = (uint64_t *)0x0;
  if (puVar6 == (uint64_t *)0x0) {
    puVar7 = (uint64_t *)
             SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x38,&rendering_buffer_2080_ptr,0x124,0,0,1);
    if (puVar7 == (uint64_t *)0x0) {
      iVar10 = 0x26;
      puVar7 = (uint64_t *)0x0;
      goto LAB_1808c0d29;
    }
    *puVar7 = 0;
    puVar7[1] = 0;
    bVar4 = true;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(int32_t *)(puVar7 + 4) = 0xffffffff;
    *(int32_t *)((int64_t)puVar7 + 0x24) = 0;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(int32_t *)(puVar7 + 5) = *param_2;
    *(int32_t *)((int64_t)puVar7 + 0x2c) = uVar1;
    *(int32_t *)(puVar7 + 6) = uVar2;
    *(int32_t *)((int64_t)puVar7 + 0x34) = uVar3;
    puVar6 = puVar7;
  }
  astack_special_x_20[0] = *(int32_t *)(param_3 + 6);
  iVar10 = RenderingSystem_Renderer(puVar6,astack_special_x_20,&pstack_special_x_18);
  if (iVar10 != 0) goto LAB_1808c0d29;
  if (!bVar4) {
    return 0;
  }
  local_var_48 = *(uint *)(puVar6 + 5);
  local_var_44 = *(uint *)((int64_t)puVar6 + 0x2c);
  local_var_40 = *(uint *)(puVar6 + 6);
  local_var_3c = *(uint *)((int64_t)puVar6 + 0x34);
  lVar5 = plVar12[5];
  pstack_special_x_18 = puVar6;
  if (lVar5 != 0) {
    SystemStateManager(lVar5);
  }
  iVar10 = NetworkSystem_PacketProcessor(plVar12);
  if (iVar10 == 0) {
    if ((int)plVar12[1] != 0) {
      lVar9 = (int64_t)
              (int)((local_var_48 ^ local_var_44 ^ local_var_40 ^ local_var_3c) & (int)plVar12[1] - 1U);
      piVar11 = (int *)(*plVar12 + lVar9 * 4);
      iVar10 = *(int *)(*plVar12 + lVar9 * 4);
      if (iVar10 != -1) {
        lVar9 = plVar12[2];
        do {
          lVar8 = (int64_t)iVar10 * 0x20;
          if ((*(int64_t *)(lVar8 + lVar9) == CONCAT44(local_var_44,local_var_48)) &&
             (*(int64_t *)(lVar8 + 8 + lVar9) == CONCAT44(local_var_3c,local_var_40)))
          goto NetworkProtocol_c0cf8;
          piVar11 = (int *)(lVar9 + 0x10 + lVar8);
          iVar10 = *piVar11;
        } while (iVar10 != -1);
      }
      iVar10 = NetworkProtocol_4e8f0(plVar12,&local_var_48,&pstack_special_x_18,piVar11);
      if (iVar10 == 0) goto LAB_1808c0cc1;
      goto LAB_1808c0cbd;
    }
NetworkProtocol_c0cf8:
    iVar10 = 0x1c;
  }
  else {
LAB_1808c0cbd:
    if (iVar10 == 0) {
LAB_1808c0cc1:
      if (lVar5 == 0) {
        return 0;
      }
// WARNING: Subroutine does not return
      SystemConfigManager(lVar5);
    }
  }
  if (lVar5 != 0) {
// WARNING: Subroutine does not return
    SystemConfigManager(lVar5);
  }
  if (iVar10 == 0) {
    return 0;
  }
  pstack_special_x_18 = (uint64_t *)CONCAT44(pstack_special_x_18._4_4_,*(int32_t *)(param_3 + 6));
  Function_80f6898d(puVar6,&pstack_special_x_18);
LAB_1808c0d29:
  if (puVar7 == (uint64_t *)0x0) {
    return iVar10;
  }
  iVar10 = SystemLockProcessor(puVar7);
  if ((iVar10 == 0) && (iVar10 = UISystem_ComponentManager(puVar7 + 2), iVar10 == 0)) {
    *(int32_t *)(puVar7 + 4) = 0xffffffff;
    *(int32_t *)((int64_t)puVar7 + 0x24) = 0;
  }
  UISystem_ComponentManager(puVar7 + 2);
  SystemLockProcessor(puVar7);
// WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar7,&rendering_buffer_2144_ptr,0xc6,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int NetworkProtocol_c0b06(void)
{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  bool bVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t *unaff_RBX;
  int32_t *unaff_RBP;
  int iVar10;
  int *piVar11;
  int64_t unaff_R13;
  int64_t *plVar12;
  bool in_ZF;
  char in_SF;
  char in_OF;
  uint local_buffer_40;
  uint local_buffer_44;
  uint local_buffer_48;
  uint local_buffer_4c;
  uint64_t *local_var_a0;
  int32_t local_var_a8;
  plVar12 = unaff_RBX + 6;
  if (in_ZF || in_OF != in_SF) {
    plVar12 = unaff_RBX;
  }
  lVar1 = plVar12[5];
  if (lVar1 != 0) {
    SystemStateManager(lVar1);
  }
  puVar6 = (uint64_t *)Function_357ff8fd(plVar12);
  if (lVar1 != 0) {
// WARNING: Subroutine does not return
    SystemConfigManager(lVar1);
  }
  bVar5 = false;
  puVar7 = (uint64_t *)0x0;
  if (puVar6 == (uint64_t *)0x0) {
    puVar7 = (uint64_t *)
             SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x38,&rendering_buffer_2080_ptr,0x124,0);
    if (puVar7 == (uint64_t *)0x0) {
      iVar10 = 0x26;
      puVar7 = (uint64_t *)0x0;
      goto LAB_1808c0d29;
    }
    *puVar7 = 0;
    puVar7[1] = 0;
    bVar5 = true;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(int32_t *)(puVar7 + 4) = 0xffffffff;
    *(int32_t *)((int64_t)puVar7 + 0x24) = 0;
    uVar2 = unaff_RBP[1];
    uVar3 = unaff_RBP[2];
    uVar4 = unaff_RBP[3];
    *(int32_t *)(puVar7 + 5) = *unaff_RBP;
    *(int32_t *)((int64_t)puVar7 + 0x2c) = uVar2;
    *(int32_t *)(puVar7 + 6) = uVar3;
    *(int32_t *)((int64_t)puVar7 + 0x34) = uVar4;
    puVar6 = puVar7;
  }
  local_var_a8 = *(int32_t *)(unaff_R13 + 0x30);
  iVar10 = RenderingSystem_Renderer(puVar6,&local_buffer_000000a8,&local_buffer_000000a0);
  if (iVar10 != 0) goto LAB_1808c0d29;
  if (!bVar5) {
    return 0;
  }
  local_buffer_40 = *(uint *)(puVar6 + 5);
  local_buffer_44 = *(uint *)((int64_t)puVar6 + 0x2c);
  local_buffer_48 = *(uint *)(puVar6 + 6);
  local_buffer_4c = *(uint *)((int64_t)puVar6 + 0x34);
  lVar1 = plVar12[5];
  local_var_a0 = puVar6;
  if (lVar1 != 0) {
    SystemStateManager(lVar1);
  }
  iVar10 = NetworkSystem_PacketProcessor(plVar12);
  if (iVar10 == 0) {
    if ((int)plVar12[1] != 0) {
      lVar9 = (int64_t)
              (int)((local_buffer_40 ^ local_buffer_44 ^ local_buffer_48 ^
                    local_buffer_4c) & (int)plVar12[1] - 1U);
      piVar11 = (int *)(*plVar12 + lVar9 * 4);
      iVar10 = *(int *)(*plVar12 + lVar9 * 4);
      if (iVar10 != -1) {
        lVar9 = plVar12[2];
        do {
          lVar8 = (int64_t)iVar10 * 0x20;
          if ((*(int64_t *)(lVar8 + lVar9) ==
               CONCAT44(local_buffer_44,local_buffer_40)) &&
             (*(int64_t *)(lVar8 + 8 + lVar9) ==
              CONCAT44(local_buffer_4c,local_buffer_48))) goto NetworkProtocol_c0cf8;
          piVar11 = (int *)(lVar9 + 0x10 + lVar8);
          iVar10 = *piVar11;
        } while (iVar10 != -1);
      }
      iVar10 = NetworkProtocol_4e8f0(plVar12,&local_buffer_00000040,&local_buffer_000000a0,piVar11);
      if (iVar10 == 0) goto LAB_1808c0cc1;
      goto LAB_1808c0cbd;
    }
NetworkProtocol_c0cf8:
    iVar10 = 0x1c;
  }
  else {
LAB_1808c0cbd:
    if (iVar10 == 0) {
LAB_1808c0cc1:
      if (lVar1 == 0) {
        return 0;
      }
// WARNING: Subroutine does not return
      SystemConfigManager(lVar1);
    }
  }
  if (lVar1 != 0) {
// WARNING: Subroutine does not return
    SystemConfigManager(lVar1);
  }
  if (iVar10 == 0) {
    return 0;
  }
  local_var_a0 =
       (uint64_t *)CONCAT44(local_var_a0._4_4_,*(int32_t *)(unaff_R13 + 0x30));
  Function_80f6898d(puVar6,&local_buffer_000000a0);
LAB_1808c0d29:
  if (puVar7 == (uint64_t *)0x0) {
    return iVar10;
  }
  iVar10 = SystemLockProcessor(puVar7);
  if ((iVar10 == 0) && (iVar10 = UISystem_ComponentManager(puVar7 + 2), iVar10 == 0)) {
    *(int32_t *)(puVar7 + 4) = 0xffffffff;
    *(int32_t *)((int64_t)puVar7 + 0x24) = 0;
  }
  UISystem_ComponentManager(puVar7 + 2);
  SystemLockProcessor(puVar7);
// WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar7,&rendering_buffer_2144_ptr,0xc6,1);
}
// WARNING: Removing unreachable block (ram,0x0001808c0cce)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t NetworkProtocol_c0cf8(void)
{
  int iVar1;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int32_t unaff_R12D;
  if (unaff_RBP != 0) {
// WARNING: Subroutine does not return
    SystemConfigManager();
  }
  Function_80f6898d();
  if (unaff_RBX == 0) {
    return 0x1c;
  }
  iVar1 = SystemLockProcessor();
  if ((iVar1 == 0) && (iVar1 = UISystem_ComponentManager(unaff_RBX + 0x10), iVar1 == 0)) {
    *(int32_t *)(unaff_RBX + 0x20) = 0xffffffff;
    *(int32_t *)(unaff_RBX + 0x24) = unaff_R12D;
  }
  UISystem_ComponentManager(unaff_RBX + 0x10);
  SystemLockProcessor();
// WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}
// 函数: void NetworkProtocol_c0e20(int64_t param_1,int64_t param_2)
void NetworkProtocol_c0e20(int64_t param_1,int64_t param_2)
{
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_18 = *(int32_t *)(param_2 + 0x10);
  local_var_14 = *(int32_t *)(param_2 + 0x14);
  local_var_10 = *(int32_t *)(param_2 + 0x18);
  local_var_c = *(int32_t *)(param_2 + 0x1c);
  Function_13116cfe(param_1 + 0x388,&local_var_18);
  return;
}
uint64_t NetworkProtocol_c0e50(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t lVar4;
  bool bVar5;
  uint64_t local_var_30;
  int aiStack_28 [4];
  lVar4 = *(int64_t *)(param_1 + 0x60);
  bVar5 = lVar4 == 0;
  if (bVar5) {
    lVar4 = 0;
  }
  else {
    SystemStateManager(lVar4);
  }
  lVar1 = Function_357ff8fd(param_1 + 0x68,param_2 + 0x10);
  if (lVar1 == 0) {
    lVar1 = Function_357ff8fd(param_1 + 0x38,param_2 + 0x10);
  }
  if (bVar5) {
    if (lVar1 != 0) {
      for (iVar3 = *(int *)(lVar1 + 0x24); 0 < iVar3; iVar3 = iVar3 + -1) {
        local_var_30 = 0xffffffffffffffff;
        aiStack_28[0] = -1;
        NetworkSystem_ConnectionHandler(lVar1,&local_var_30,aiStack_28);
        if ((*(char *)(param_1 + 0x780) == '\0') &&
           (uVar2 = NetworkProtocol_b81c0(param_1 + 0x3c8,
                                  *(uint64_t *)
                                   (*(int64_t *)(lVar1 + 0x10) + 8 + (int64_t)aiStack_28[0] * 0x10
                                   )), (int)uVar2 != 0)) {
          return uVar2;
        }
      }
    }
    return 0;
  }
// WARNING: Subroutine does not return
  SystemConfigManager(lVar4);
}