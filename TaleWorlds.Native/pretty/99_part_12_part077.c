#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_12_part077.c - 4 个函数
// 函数: void SystemCore_ff4ee(void)
void SystemCore_ff4ee(void)
{
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t *unaff_R15;
  int64_t local_var_40;
  *unaff_R15 = unaff_RBX;
  if (local_var_40 != 0) {
    freeaddrinfo();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x198) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_ff500(void)
void SystemCore_ff500(void)
{
  int8_t stack_array_1d8 [32];
  int8_t stack_array_1b8 [416];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1d8;
  WSAStartup(2,stack_array_1b8);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_1d8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_ff550(int16_t param_1,int8_t param_2,int64_t *param_3)
void SystemCore_ff550(int16_t param_1,int8_t param_2,int64_t *param_3)
{
  int16_t uVar1;
  int iVar2;
  int32_t uVar3;
  int64_t lVar4;
  int8_t alocal_var_68 [32];
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)alocal_var_68;
  lVar4 = socket(2,1);
  if ((lVar4 != -1) && (iVar2 = SystemCore_ff700(lVar4,param_2), iVar2 == 0)) {
    local_var_48 = 2;
    local_var_40 = 0;
    uVar1 = htons(param_1);
    local_var_48._0_4_ = CONCAT22(uVar1,(int16_t)local_var_48);
    uVar3 = htonl(0);
    local_var_48 = CONCAT44(uVar3,(int32_t)local_var_48);
    iVar2 = bind(lVar4,&local_var_48,0x10);
    if (iVar2 == -1) {
      WSAGetLastError();
    }
    else {
      iVar2 = listen(lVar4,3);
      if (iVar2 != -1) {
        *param_3 = lVar4;
        goto LAB_1807ff61f;
      }
    }
  }
  if (lVar4 != -1) {
    closesocket(lVar4);
  }
LAB_1807ff61f:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)alocal_var_68);
}
int32_t SystemCore_ff640(uint64_t param_1,int64_t param_2,int param_3,int *param_4)
{
  int iVar1;
  *param_4 = 0;
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    iVar1 = recv(param_1,param_2,param_3,0);
    if (iVar1 == -1) break;
    if (iVar1 == 0) {
      return 0x10;
    }
    *param_4 = *param_4 + iVar1;
    param_3 = param_3 - iVar1;
    param_2 = param_2 + iVar1;
  }
  iVar1 = WSAGetLastError();
  if (iVar1 == 0x2733) {
    return 0x2d;
  }
  if (iVar1 == 0x2746) {
    return 0x10;
  }
  if (iVar1 != 0x2714) {
    return 0x2b;
  }
  return 0x10;
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_ff700(uint64_t param_1,byte param_2)
void SystemCore_ff700(uint64_t param_1,byte param_2)
{
  int iVar1;
  int8_t alocal_var_88 [32];
  uint64_t local_var_68;
  int32_t local_var_60;
  int8_t *plocal_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  uint stack_array_38 [2];
  int8_t stack_array_30 [8];
  int32_t local_var_28;
  int iStack_24;
  int iStack_20;
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)alocal_var_88;
  stack_array_38[0] = (uint)param_2;
  iVar1 = ioctlsocket(param_1,0x8004667e,stack_array_38);
  if (iVar1 != -1) {
    stack_array_38[1] = 1;
    local_var_68 = CONCAT44(local_var_68._4_4_,4);
    iVar1 = setsockopt(param_1,0xffff,8,stack_array_38 + 1);
    if (iVar1 != -1) {
      local_var_28 = 1;
      local_var_48 = 0;
      local_var_50 = 0;
      iStack_24 = system_system_buffer_config / 10;
      plocal_var_58 = stack_array_30;
      local_var_60 = 0;
      local_var_68 = 0;
      iStack_20 = iStack_24;
      WSAIoctl(param_1,0x98000004,&local_var_28,0xc);
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)alocal_var_88);
}
byte SystemCore_ff7f0(void)
{
  int iVar1;
  iVar1 = WSACleanup();
  return -(iVar1 != 0) & 0x1c;
}
uint64_t SystemCore_ff810(uint64_t param_1,int64_t param_2,int param_3,int *param_4)
{
  int iVar1;
  *param_4 = 0;
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    iVar1 = send(param_1,param_2,param_3,0);
    if (iVar1 == -1) break;
    *param_4 = *param_4 + iVar1;
    param_3 = param_3 - iVar1;
    param_2 = param_2 + iVar1;
  }
  iVar1 = WSAGetLastError();
  if (iVar1 != 0x2733) {
    return 0x2b;
  }
  return 0x2d;
}
uint64_t * SystemCore_ff8a0(uint64_t *param_1)
{
  SystemFunction_0001808069a0();
  *param_1 = &processed_var_6584_ptr;
  SystemFunction_000180758fe0(param_1 + 0xe);
  param_1[0xe] = &rendering_buffer_2520_ptr;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[6] = 0;
  param_1[0x5f] = 0;
  *(int32_t *)(param_1 + 0x60) = 0;
  *(int32_t *)((int64_t)param_1 + 0x304) = 0x3f800000;
  return param_1;
}
uint64_t * SystemCore_ff920(uint64_t *param_1,uint64_t param_2)
{
  SystemFunction_000180759110(param_1 + 0x39);
  SystemFunction_000180759110(param_1 + 0x35);
  *param_1 = &processed_var_8200_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x308);
  }
  return param_1;
}
uint64_t SystemCore_ff980(int64_t param_1,int64_t param_2,int param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t alStackX_10 [3];
  if (param_2 == 0) {
    return 0x1f;
  }
  lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x12640 + (int64_t)param_3 * 0x18);
  if (lVar2 != 0) {
    lVar1 = (int64_t)param_3 * 8 + 0x150;
    alStackX_10[0] = *(int64_t *)(lVar1 + *(int64_t *)(param_1 + 0x18));
    if (alStackX_10[0] == 0) {
      uVar3 = UltraHighFreq_AudioSystem1(lVar2,param_2,alStackX_10,2,0,0);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      *(int64_t *)(lVar1 + *(int64_t *)(param_1 + 0x18)) = alStackX_10[0];
    }
  }
  return 0;
}
uint64_t SystemCore_ffa10(int64_t param_1,int64_t param_2)
{
  int64_t *plVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  int iVar5;
  int32_t astack_special_x_8 [2];
  int32_t astack_special_x_10 [2];
  uint64_t stack_special_x_18;
  int64_t lStackX_20;
  int32_t local_var_f68;
  uint uVar6;
  uint64_t local_var_f70;
  int32_t uVar7;
  int32_t local_var_88;
  uint local_var_84;
  int32_t local_var_80;
  int8_t local_var_7c;
  uint64_t local_var_78;
  int32_t *plocal_var_70;
  int32_t *plocal_var_68;
  uint64_t local_var_60;
  int32_t *plocal_var_58;
  uint64_t local_var_50;
  ushort local_var_48;
  int16_t local_var_46;
  int32_t local_var_44;
  int32_t local_var_40;
  int32_t local_var_3c;
  uVar7 = (int32_t)((uint64_t)local_var_f70 >> 0x20);
  iVar5 = 0;
  stack_special_x_18 = 0;
  uVar4 = *(uint64_t *)(*(int64_t *)(param_1 + 0x18) + 0x68);
  if (param_2 == 0) {
    return 0x1f;
  }
  plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 8) + 0x116e0);
  uVar2 = (**(code **)(*plVar1 + 0x120))(plVar1,0,&lStackX_20);
  if ((int)uVar2 == 0) {
    if (param_2 == lStackX_20) {
      *(uint64_t *)(param_1 + 0x30) = 0;
      return 5;
    }
    uVar2 = SystemFunction_000180806a00(param_1);
    if ((int)uVar2 == 0) {
      *(uint64_t *)(param_1 + 0x2e0) = 0;
      if (*(code **)(param_2 + 0x128) != (code *)0x0) {
        plocal_var_68 = astack_special_x_10;
        plocal_var_70 = astack_special_x_8;
        astack_special_x_10[0] = 0;
        astack_special_x_8[0] = 0;
        *(int64_t *)(param_2 + 0xb0) = param_2;
        local_var_78 = 1;
        local_var_60 = 0;
        plocal_var_58 = (int32_t *)0x0;
        local_var_f68 = 0;
        uVar2 = (**(code **)(param_2 + 0x128))
                          ((int64_t *)(param_2 + 0xb0),0,0,&local_var_78,0,CONCAT44(uVar7,1));
        if (0xb < (uint)uVar2) {
          return uVar2;
        }
        if ((0x841U >> ((uint)uVar2 & 0x1f) & 1) == 0) {
          return uVar2;
        }
        *(int16_t *)(param_2 + 0x118) = (int16_t)astack_special_x_8[0];
      }
      if (*(short *)(param_2 + 0x118) == 0) {
        *(int16_t *)(param_2 + 0x118) = 1;
      }
      puVar3 = (uint64_t *)SystemFunction_0001807e5100();
      plocal_var_58 = &local_var_88;
      uVar6 = CONCAT31((int3)((uint)local_var_f68 >> 8),1);
      local_var_78 = *puVar3;
      plocal_var_70 = (int32_t *)puVar3[1];
      plocal_var_68 = (int32_t *)puVar3[2];
      local_var_60 = puVar3[3];
      local_var_50 = puVar3[5];
      local_var_44 = *(int32_t *)((int64_t)puVar3 + 0x34);
      local_var_40 = *(int32_t *)(puVar3 + 7);
      local_var_3c = *(int32_t *)((int64_t)puVar3 + 0x3c);
      _local_var_48 = CONCAT22((short)((uint)*(int32_t *)(puVar3 + 6) >> 0x10),
                            *(ushort *)(param_2 + 0x118));
      local_var_88 = 0;
      local_var_80 = 0;
      local_var_7c = 1;
      local_var_84 = (uint)*(ushort *)(param_2 + 0x118);
      uVar2 = SystemCore_42e00(*(uint64_t *)(param_1 + 8),&local_var_78,0,&stack_special_x_18,uVar6);
      if ((int)uVar2 == 0) {
        *(uint64_t *)(param_1 + 0x2d8) = stack_special_x_18;
        uVar2 = SystemFunction_000180762de0(stack_special_x_18,param_1);
        if ((int)uVar2 == 0) {
          *(float *)(*(int64_t *)(param_1 + 0x2d8) + 0x230) =
               (float)*(int *)(*(int64_t *)(param_1 + 8) + 0x6d0);
          *(int32_t *)(param_1 + 0x68) = 0;
          if ((((*(int64_t *)(param_1 + 0x2e8) == 0) ||
               (uVar2 = SystemCore_ConfigurationManager(*(int64_t *)(param_1 + 0x2e8),0,0,4), (int)uVar2 == 0)) &&
              ((*(int64_t *)(param_1 + 0x2f0) == 0 ||
               (uVar2 = SystemCore_ConfigurationManager(*(int64_t *)(param_1 + 0x2f0),0,0,4), (int)uVar2 == 0)))) &&
             ((*(int64_t *)(param_1 + 0x290) == 0 ||
              (uVar2 = SystemCore_ConfigurationManager(param_1 + 0x70,0,0,4), (int)uVar2 == 0)))) {
            SystemFunction_0001807e6aa0(param_1 + 0x70);
            *(uint64_t *)(*(int64_t *)(param_1 + 0x2d8) + 0x1f8) =
                 *(uint64_t *)(param_1 + 0x18);
            uVar2 = UltraHighFreq_AudioSystem1(uVar4,*(uint64_t *)(param_1 + 0x2d8),0,0,uVar6 & 0xffffff00,0);
            if ((int)uVar2 == 0) {
              if ((*(uint *)(param_1 + 0x3c) & 0x10000) == 0) {
                uVar4 = (**(code **)(**(int64_t **)(param_1 + 0x18) + 0x120))
                                  (*(int64_t **)(param_1 + 0x18),0xfffffffd,param_1 + 0x2f8);
                if ((int)uVar4 != 0) {
                  return uVar4;
                }
                do {
                  uVar4 = SystemCore_ff980(param_1,*(uint64_t *)(param_1 + 0x2f8),iVar5);
                  if ((int)uVar4 != 0) {
                    return uVar4;
                  }
                  iVar5 = iVar5 + 1;
                } while (iVar5 < 4);
              }
              *(int64_t *)(*(int64_t *)(param_1 + 0x2d8) + 0x2a0) = param_2 + 8;
              *(int32_t *)(*(int64_t *)(param_1 + 0x2d8) + 0x2b8) =
                   *(int32_t *)(param_1 + 0x60);
              *(int32_t *)(*(int64_t *)(param_1 + 0x2d8) + 600) =
                   *(int32_t *)(param_1 + 0x54);
              *(int32_t *)(*(int64_t *)(param_1 + 0x2d8) + 0x2c4) =
                   *(int32_t *)(param_1 + 0x58);
              *(int32_t *)(*(int64_t *)(param_1 + 0x2d8) + 0x2c8) =
                   *(int32_t *)(param_1 + 0x5c);
              *(int32_t *)(*(int64_t *)(param_1 + 0x2d8) + 0x2c0) =
                   *(int32_t *)(param_1 + 0x38);
              *(int32_t *)(*(int64_t *)(param_1 + 0x2d8) + 0x25c) = 0xfffffffe;
              *(int32_t *)(*(int64_t *)(param_1 + 0x2d8) + 0xc4) =
                   *(int32_t *)(param_2 + 0xc4);
              *(int16_t *)(param_2 + 0x58) = 0;
              *(int16_t *)(param_2 + 0x5a) =
                   *(int16_t *)(*(int64_t *)(param_1 + 0x2d8) + 0x280);
              (**(code **)(**(int64_t **)(param_1 + 0x2d8) + 0x28))
                        (*(int64_t **)(param_1 + 0x2d8),0,0,0);
              SystemCore_Initializer(*(uint64_t *)(param_1 + 0x2d8),0,1);
              SystemCore_Initializer(param_2,0,1);
              *(int32_t *)(param_1 + 0x300) = 0xffffffff;
              *(int32_t *)(param_1 + 0x304) =
                   *(int32_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x1ec);
              uVar2 = 0;
            }
          }
        }
      }
    }
  }
  return uVar2;
}
uint64_t SystemCore_ffaae(void)
{
  ushort uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  code *in_RAX;
  uint64_t uVar6;
  uint64_t *puVar7;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint uVar8;
  uint64_t uVar9;
  int32_t uVar10;
  uint64_t unaff_R15;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uVar10 = (int32_t)unaff_R15;
  if (in_RAX != (code *)0x0) {
    *(int64_t *)(unaff_RBP + -9) = unaff_RBP + 0x6f;
    *(int32_t *)(unaff_RBP + 0x6f) = uVar10;
    *(int64_t *)(unaff_RBP + -0x11) = unaff_RBP + 0x67;
    *(int32_t *)(unaff_RBP + 0x67) = uVar10;
    *(int64_t *)(unaff_RSI + 0xb0) = unaff_RSI;
    *(uint64_t *)(unaff_RBP + -0x19) = 1;
    *(uint64_t *)(unaff_RBP + -1) = unaff_R15;
    *(uint64_t *)(unaff_RBP + 7) = unaff_R15;
    uVar6 = (*in_RAX)((int64_t *)(unaff_RSI + 0xb0),0,0,unaff_RBP + -0x19);
    if (0xb < (uint)uVar6) {
      return uVar6;
    }
    if ((0x841U >> ((uint)uVar6 & 0x1f) & 1) == 0) {
      return uVar6;
    }
    *(int16_t *)(unaff_RSI + 0x118) = *(int16_t *)(unaff_RBP + 0x67);
  }
  if (*(short *)(unaff_RSI + 0x118) == (short)unaff_R15) {
    *(int16_t *)(unaff_RSI + 0x118) = 1;
  }
  puVar7 = (uint64_t *)SystemFunction_0001807e5100();
  uVar6 = puVar7[1];
  *(uint64_t *)(unaff_RBP + -0x19) = *puVar7;
  *(uint64_t *)(unaff_RBP + -0x11) = uVar6;
  uVar6 = puVar7[3];
  *(uint64_t *)(unaff_RBP + -9) = puVar7[2];
  *(uint64_t *)(unaff_RBP + -1) = uVar6;
  uVar6 = puVar7[5];
  *(uint64_t *)(unaff_RBP + 7) = puVar7[4];
  *(uint64_t *)(unaff_RBP + 0xf) = uVar6;
  uVar2 = *(int32_t *)(puVar7 + 6);
  uVar3 = *(int32_t *)((int64_t)puVar7 + 0x34);
  uVar4 = *(int32_t *)(puVar7 + 7);
  uVar5 = *(int32_t *)((int64_t)puVar7 + 0x3c);
  uVar1 = *(ushort *)(unaff_RSI + 0x118);
  *(int64_t *)(unaff_RBP + 7) = unaff_RBP + -0x29;
  uVar6 = *(uint64_t *)(unaff_RBX + 8);
  *(int32_t *)(unaff_RBP + 0x17) = uVar2;
  *(int32_t *)(unaff_RBP + 0x1b) = uVar3;
  *(int32_t *)(unaff_RBP + 0x1f) = uVar4;
  *(int32_t *)(unaff_RBP + 0x23) = uVar5;
  *(ushort *)(unaff_RBP + 0x17) = uVar1;
  *(int32_t *)(unaff_RBP + -0x29) = uVar10;
  *(int32_t *)(unaff_RBP + -0x21) = uVar10;
  *(int8_t *)(unaff_RBP + -0x1d) = 1;
  *(uint *)(unaff_RBP + -0x25) = (uint)uVar1;
  uVar6 = SystemCore_42e00(uVar6,unaff_RBP + -0x19,0,unaff_RBP + 0x77,1);
  if ((int)uVar6 == 0) {
    *(uint64_t *)(unaff_RBX + 0x2d8) = *(uint64_t *)(unaff_RBP + 0x77);
    uVar6 = SystemFunction_000180762de0();
    if ((int)uVar6 == 0) {
      *(float *)(*(int64_t *)(unaff_RBX + 0x2d8) + 0x230) =
           (float)*(int *)(*(int64_t *)(unaff_RBX + 8) + 0x6d0);
      *(int32_t *)(unaff_RBX + 0x68) = uVar10;
      if ((*(int64_t *)(unaff_RBX + 0x2e8) != 0) &&
         (uVar6 = SystemCore_ConfigurationManager(*(int64_t *)(unaff_RBX + 0x2e8),0,0,4), (int)uVar6 != 0)) {
        return uVar6;
      }
      if ((*(int64_t *)(unaff_RBX + 0x2f0) != 0) &&
         (uVar6 = SystemCore_ConfigurationManager(*(int64_t *)(unaff_RBX + 0x2f0),0,0,4), (int)uVar6 != 0)) {
        return uVar6;
      }
      if ((*(uint64_t *)(unaff_RBX + 0x290) != unaff_R15) &&
         (uVar6 = SystemCore_ConfigurationManager(unaff_RBX + 0x70,0,0,4), (int)uVar6 != 0)) {
        return uVar6;
      }
      uVar6 = SystemFunction_0001807e6aa0(unaff_RBX + 0x70);
      *(uint64_t *)(*(int64_t *)(unaff_RBX + 0x2d8) + 0x1f8) = *(uint64_t *)(unaff_RBX + 0x18);
      uVar6 = UltraHighFreq_AudioSystem1(uVar6,*(uint64_t *)(unaff_RBX + 0x2d8),0,0,(char)unaff_R15);
      if ((int)uVar6 == 0) {
        if ((*(uint *)(unaff_RBX + 0x3c) & 0x10000) == 0) {
          uVar6 = (**(code **)(**(int64_t **)(unaff_RBX + 0x18) + 0x120))
                            (*(int64_t **)(unaff_RBX + 0x18),0xfffffffd,unaff_RBX + 0x2f8);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
          uVar9 = unaff_R15 & 0xffffffff;
          uVar6 = extraout_XMM0_Qa;
          do {
            uVar6 = SystemCore_ff980(uVar6,*(uint64_t *)(unaff_RBX + 0x2f8),uVar9);
            if ((int)uVar6 != 0) {
              return uVar6;
            }
            uVar8 = (int)uVar9 + 1;
            uVar9 = (uint64_t)uVar8;
            uVar6 = extraout_XMM0_Qa_00;
          } while ((int)uVar8 < 4);
        }
        *(int64_t *)(*(int64_t *)(unaff_RBX + 0x2d8) + 0x2a0) = unaff_RSI + 8;
        *(int32_t *)(*(int64_t *)(unaff_RBX + 0x2d8) + 0x2b8) =
             *(int32_t *)(unaff_RBX + 0x60);
        *(int32_t *)(*(int64_t *)(unaff_RBX + 0x2d8) + 600) = *(int32_t *)(unaff_RBX + 0x54);
        *(int32_t *)(*(int64_t *)(unaff_RBX + 0x2d8) + 0x2c4) =
             *(int32_t *)(unaff_RBX + 0x58);
        *(int32_t *)(*(int64_t *)(unaff_RBX + 0x2d8) + 0x2c8) =
             *(int32_t *)(unaff_RBX + 0x5c);
        *(int32_t *)(*(int64_t *)(unaff_RBX + 0x2d8) + 0x2c0) =
             *(int32_t *)(unaff_RBX + 0x38);
        *(int32_t *)(*(int64_t *)(unaff_RBX + 0x2d8) + 0x25c) = 0xfffffffe;
        *(int32_t *)(*(int64_t *)(unaff_RBX + 0x2d8) + 0xc4) = *(int32_t *)(unaff_RSI + 0xc4)
        ;
        *(short *)(unaff_RSI + 0x58) = (short)unaff_R15;
        *(int16_t *)(unaff_RSI + 0x5a) =
             *(int16_t *)(*(int64_t *)(unaff_RBX + 0x2d8) + 0x280);
        (**(code **)(**(int64_t **)(unaff_RBX + 0x2d8) + 0x28))
                  (*(int64_t **)(unaff_RBX + 0x2d8),0,0,0);
        uVar6 = SystemCore_Initializer(*(uint64_t *)(unaff_RBX + 0x2d8),0,1);
        SystemCore_Initializer(uVar6,0,1);
        *(int32_t *)(unaff_RBX + 0x300) = 0xffffffff;
        *(int32_t *)(unaff_RBX + 0x304) =
             *(int32_t *)(*(int64_t *)(*(int64_t *)(unaff_RBX + 0x18) + 0x20) + 0x1ec);
        uVar6 = 0;
      }
    }
  }
  return uVar6;
}