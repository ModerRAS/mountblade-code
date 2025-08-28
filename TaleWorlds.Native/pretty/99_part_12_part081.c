// 原始函数语义化别名定义
// 本文件包含当前文件中使用的原始函数的语义化别名
// 这些别名提高了代码的可读性和维护性
#include "ultra_high_freq_fun_definitions.h"
/* UISystem_Controller - UISystem_Controller */
#define UISystem_Controller UISystem_Controller
/* 函数别名定义: SystemInputManager */
#define SystemInputManager SystemInputManager
/* 函数别名定义: DataCompressor */
#define DataCompressor DataCompressor
#include "SystemInputManager0_definition.h"
#include "TaleWorlds.Native.Split.h"
// 99_part_12_part081.c - 12 个函数
// 函数: void NetworkProtocol_a0f37(void)
void NetworkProtocol_a0f37(void)
{
  uint uVar1;
  uint in_EAX;
  int iVar2;
  int32_t *puVar3;
  int64_t *unaff_RBX;
  int unaff_EBP;
  int64_t unaff_RSI;
  uint64_t uVar4;
  uint64_t uVar5;
  int unaff_R14D;
  uint local_var_30;
  int16_t local_buffer_b0;
  int local_buffer_b8;
  if (0x8a < in_EAX) {
    uVar1 = *(int *)(unaff_RSI + 0x68) * 2;
    if (uVar1 < 0x8000) {
      local_buffer_b0 = (int16_t)uVar1;
      uVar5 = 2;
      puVar3 = (int32_t *)&local_buffer_000000b0;
    }
    else {
      uVar5 = 4;
      local_var_30 = (uVar1 & 0xffffc000 | 0x4000) * 2 | uVar1 & 0x7fff;
      puVar3 = &local_buffer_00000030;
    }
    iVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                      (*(uint64_t **)(*unaff_RBX + 8),puVar3,uVar5);
    if (iVar2 != 0) {
      return;
    }
    uVar4 = *(uint64_t *)(unaff_RSI + 0x60);
    while( true ) {
      local_buffer_b8 = unaff_R14D;
      if ((uVar4 < *(uint64_t *)(unaff_RSI + 0x60)) ||
         ((int64_t)*(int *)(unaff_RSI + 0x68) * 0x10 + *(uint64_t *)(unaff_RSI + 0x60) <= uVar4))
      goto LAB_1808a1016;
      iVar2 = UltraHighFreq_ResourceLoader1();
      if (iVar2 != 0) {
        return;
      }
      if (*(int *)(unaff_RBX[1] + 0x18) != unaff_R14D) break;
      iVar2 = NetworkProtocol_a27f0(*unaff_RBX,uVar4);
      if (iVar2 != 0) {
        return;
      }
      iVar2 = UISystem_Controller();
      if (iVar2 != 0) {
        return;
      }
      uVar4 = uVar4 + 0x10;
    }
    if (unaff_EBP != 0) {
      return;
    }
  }
LAB_1808a1016:
// WARNING: Subroutine does not return
  SystemThreadManager();
}
// 函数: void NetworkProtocol_a104b(void)
void NetworkProtocol_a104b(void)
{
  return;
}
// 函数: void NetworkProtocol_a1053(void)
void NetworkProtocol_a1053(void)
{
  return;
}
// 函数: void NetworkProtocol_a105b(void)
void NetworkProtocol_a105b(void)
{
  return;
}
uint64_t NetworkProtocol_a1090(int64_t param_1,int64_t *param_2)
{
  int iVar1;
  uint uVar2;
  uint64_t uVar3;
  int iVar4;
  int aiStackX_18 [4];
  int8_t stack_array_38 [32];
  uVar3 = DataCompressor0(param_2,stack_array_38,0,0x46454d50,0);
  if ((int)uVar3 == 0) {
    iVar1 = *(int *)(param_1 + 0x50);
    uVar2 = 0x1c;
    if (*(int *)(param_2[1] + 0x18) == 0) {
      aiStackX_18[0] = iVar1;
      uVar3 = (**(code **)**(uint64_t **)(*param_2 + 8))
                        (*(uint64_t **)(*param_2 + 8),aiStackX_18,4);
    }
    else {
      uVar3 = 0x1c;
    }
    if ((int)uVar3 == 0) {
      iVar4 = 0;
      if (0 < iVar1) {
        do {
          uVar3 = NetworkProtocol_acf30(param_1,param_2,iVar4);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
      if (*(uint *)(param_2 + 8) < 0x6e) {
        uVar2 = 0;
      }
      else if (*(int *)(param_2[1] + 0x18) == 0) {
        aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,*(int8_t *)(param_1 + 0x5c));
        uVar2 = (**(code **)**(uint64_t **)(*param_2 + 8))
                          (*(uint64_t **)(*param_2 + 8),aiStackX_18,1);
      }
      if (uVar2 == 0) {
// WARNING: Subroutine does not return
        SystemThreadManager(param_2,stack_array_38);
      }
      uVar3 = (uint64_t)uVar2;
    }
  }
  return uVar3;
}
uint64_t NetworkProtocol_a10c8(void)
{
  int iVar1;
  uint uVar2;
  int64_t in_RAX;
  uint64_t uVar3;
  int iVar4;
  int64_t *unaff_RSI;
  int64_t unaff_R14;
  int local_var_80;
  iVar1 = *(int *)(unaff_R14 + 0x50);
  uVar2 = 0x1c;
  if (*(int *)(in_RAX + 0x18) == 0) {
    local_var_80 = iVar1;
    uVar3 = (**(code **)**(uint64_t **)(*unaff_RSI + 8))
                      (*(uint64_t **)(*unaff_RSI + 8),&local_buffer_00000080,4);
  }
  else {
    uVar3 = 0x1c;
  }
  if ((int)uVar3 == 0) {
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        uVar3 = NetworkProtocol_acf30();
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    if (*(uint *)(unaff_RSI + 8) < 0x6e) {
      uVar2 = 0;
    }
    else if (*(int *)(unaff_RSI[1] + 0x18) == 0) {
      local_var_80 = CONCAT31(local_var_80._1_3_,*(int8_t *)(unaff_R14 + 0x5c));
      uVar2 = (**(code **)**(uint64_t **)(*unaff_RSI + 8))
                        (*(uint64_t **)(*unaff_RSI + 8),&local_buffer_00000080,1);
    }
    if (uVar2 == 0) {
// WARNING: Subroutine does not return
      SystemThreadManager();
    }
    uVar3 = (uint64_t)uVar2;
  }
  return uVar3;
}
uint64_t NetworkProtocol_a110e(void)
{
  uint64_t uVar1;
  int iVar2;
  int unaff_EBP;
  int64_t *unaff_RSI;
  uint unaff_EDI;
  int64_t unaff_R14;
  int8_t local_var_80;
  iVar2 = 0;
  if (0 < unaff_EBP) {
    do {
      uVar1 = NetworkProtocol_acf30();
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < unaff_EBP);
  }
  if (*(uint *)(unaff_RSI + 8) < 0x6e) {
    unaff_EDI = 0;
  }
  else if (*(int *)(unaff_RSI[1] + 0x18) == 0) {
    local_var_80 = *(int8_t *)(unaff_R14 + 0x5c);
    unaff_EDI = (**(code **)**(uint64_t **)(*unaff_RSI + 8))
                          (*(uint64_t **)(*unaff_RSI + 8),&local_buffer_00000080,1);
  }
  if (unaff_EDI != 0) {
    return (uint64_t)unaff_EDI;
  }
// WARNING: Subroutine does not return
  SystemThreadManager();
}
// 函数: void NetworkProtocol_a11ab(void)
void NetworkProtocol_a11ab(void)
{
  return;
}
// 函数: void NetworkProtocol_a11b5(void)
void NetworkProtocol_a11b5(void)
{
  return;
}
uint64_t NetworkProtocol_a11c0(uint64_t *param_1,int64_t *param_2)
{
  int64_t lVar1;
  uint64_t *puVar2;
  uint uVar3;
  uint64_t uVar4;
  uint *puVar5;
  uint64_t uVar6;
  uint astack_special_x_18 [2];
  int32_t astack_special_x_20 [2];
  uint local_var_48;
  int32_t local_var_44;
  int8_t stack_array_40 [40];
  uVar4 = DataCompressor0(param_2,stack_array_40,0,0x54534c50,0);
  if ((int)uVar4 == 0) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    astack_special_x_18[0] = (uint)param_1[2];
    uVar4 = (**(code **)**(uint64_t **)(*param_2 + 8))
                      (*(uint64_t **)(*param_2 + 8),astack_special_x_18,4);
    if ((int)uVar4 == 0) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      astack_special_x_18[0] = *(uint *)((int64_t)param_1 + 0x14);
      uVar4 = (**(code **)**(uint64_t **)(*param_2 + 8))
                        (*(uint64_t **)(*param_2 + 8),astack_special_x_18,4);
      if ((int)uVar4 == 0) {
        uVar3 = (int)param_1[1] * 2;
        if ((uVar3 | 1) < 0x8000) {
          astack_special_x_18[0] = CONCAT22(astack_special_x_18[0]._2_2_,(short)(uVar3 | 1));
          uVar4 = 2;
          puVar5 = astack_special_x_18;
        }
        else {
          uVar4 = 4;
          local_var_48 = (uVar3 & 0xffffc000 | 0x4000) * 2 | uVar3 & 0x7fff | 1;
          puVar5 = &local_var_48;
        }
        uVar4 = (**(code **)**(uint64_t **)(*param_2 + 8))
                          (*(uint64_t **)(*param_2 + 8),puVar5,uVar4);
        if ((int)uVar4 == 0) {
          uVar6 = *param_1;
          astack_special_x_20[0] = 0;
          while( true ) {
            if ((uVar6 < *param_1) || (*param_1 + (int64_t)(int)param_1[1] * 0x14 <= uVar6)) {
// WARNING: Subroutine does not return
              SystemThreadManager(param_2,stack_array_40);
            }
            uVar4 = UltraHighFreq_ResourceLoader1(param_2,astack_special_x_20[0]);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            if (*(int *)(param_2[1] + 0x18) != 0) break;
            lVar1 = *param_2;
            uVar4 = SystemCleanupProcessor(lVar1,uVar6);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            puVar2 = *(uint64_t **)(lVar1 + 8);
            local_var_44 = *(int32_t *)(uVar6 + 0x10);
            uVar4 = (**(code **)*puVar2)(puVar2,&local_var_44,4);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            uVar4 = UISystem_Controller(param_2,astack_special_x_20);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            uVar6 = uVar6 + 0x14;
          }
          uVar4 = 0x1c;
        }
      }
    }
  }
  return uVar4;
}
// 函数: void NetworkProtocol_a12c6(int32_t param_1)
void NetworkProtocol_a12c6(int32_t param_1)
{
  int64_t lVar1;
  uint64_t *puVar2;
  int in_EAX;
  int iVar3;
  int64_t *unaff_RBX;
  int32_t unaff_EBP;
  uint64_t uVar4;
  uint64_t *unaff_R14;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  uint64_t local_var_30;
  int32_t local_buffer_98;
  if (in_EAX == 0) {
    uVar4 = *unaff_R14;
    local_buffer_98 = unaff_EBP;
    while( true ) {
      if ((uVar4 < *unaff_R14) || (*unaff_R14 + (int64_t)(int)unaff_R14[1] * 0x14 <= uVar4)) {
// WARNING: Subroutine does not return
        SystemThreadManager(param_1,&local_buffer_00000038);
      }
      iVar3 = UltraHighFreq_ResourceLoader1(param_1,local_buffer_98);
      if ((iVar3 != 0) || (*(int *)(unaff_RBX[1] + 0x18) != 0)) break;
      lVar1 = *unaff_RBX;
      iVar3 = SystemCleanupProcessor(lVar1,uVar4);
      if (iVar3 != 0) {
        return;
      }
      puVar2 = *(uint64_t **)(lVar1 + 8);
      local_var_30._4_4_ = *(int32_t *)(uVar4 + 0x10);
      iVar3 = (**(code **)*puVar2)(puVar2,(int64_t)&local_buffer_00000030 + 4,4);
      if (iVar3 != 0) {
        return;
      }
      iVar3 = UISystem_Controller(extraout_XMM0_Da,&local_buffer_00000098);
      if (iVar3 != 0) {
        return;
      }
      uVar4 = uVar4 + 0x14;
      param_1 = extraout_XMM0_Da_00;
    }
  }
  return;
}
// 函数: void NetworkProtocol_a139f(void)
void NetworkProtocol_a139f(void)
{
  return;
}
// 函数: void NetworkProtocol_a13b0(int64_t param_1,uint64_t param_2)
void NetworkProtocol_a13b0(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = NetworkProtocol_a11c0(param_1 + 0xd8);
  if (iVar1 == 0) {
    NetworkProtocol_a00c0(param_1,param_2);
  }
  return;
}
uint64_t NetworkProtocol_a13f0(int64_t param_1,uint64_t *param_2)
{
  uint64_t uVar1;
  int8_t stack_array_48 [32];
  int8_t stack_array_28 [32];
  uVar1 = DataCompressor0(param_2,stack_array_28,1,0x5453494c,0x46464550);
  if (((int)uVar1 == 0) &&
     (uVar1 = DataCompressor0(param_2,stack_array_48,0,0x42464550,0), (int)uVar1 == 0)) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = SystemCleanupProcessor(*param_2,param_1 + 0x10);
    if ((int)uVar1 == 0) {
      if ((*(uint *)(param_2 + 8) < 0x5b) &&
         (uVar1 = NetworkProtocol_afd90(param_2,param_1 + 0x44), (int)uVar1 != 0)) {
        return uVar1;
      }
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar1 = NetworkProtocol_a27f0(*param_2,param_1 + 0x60);
      if ((int)uVar1 == 0) {
        if (*(uint *)(param_2 + 8) < 0x36) {
          uVar1 = 0;
        }
        else if (*(int *)(param_2[1] + 0x18) == 0) {
          uVar1 = NetworkProtocol_a27f0(*param_2,param_1 + 0x70);
        }
        else {
          uVar1 = 0x1c;
        }
        if (((int)uVar1 == 0) &&
           (uVar1 = NetworkProtocol_a7c90(param_2,param_1 + 0x40,0x3d), (int)uVar1 == 0)) {
// WARNING: Subroutine does not return
          SystemThreadManager(param_2,stack_array_48);
        }
      }
    }
  }
  return uVar1;
}
uint64_t NetworkProtocol_a1530(int64_t param_1,uint64_t *param_2)
{
  uint64_t uVar1;
  int8_t stack_array_48 [32];
  int8_t stack_array_28 [32];
  uVar1 = DataCompressor0(param_2,stack_array_28,1,0x5453494c,0x54495250);
  if (((int)uVar1 == 0) &&
     (uVar1 = DataCompressor0(param_2,stack_array_48,0,0x42495250,0), (int)uVar1 == 0)) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = SystemCleanupProcessor(*param_2,param_1 + 0x10);
    if ((int)uVar1 == 0) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar1 = NetworkProtocol_a27f0(*param_2,param_1 + 0xd8);
      if ((int)uVar1 == 0) {
// WARNING: Subroutine does not return
        SystemThreadManager(param_2,stack_array_48);
      }
    }
  }
  return uVar1;
}
uint64_t NetworkProtocol_a1610(int64_t param_1,int64_t *param_2)
{
  bool bVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int iVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int32_t astack_special_x_18 [2];
  int aiStackX_20 [2];
  int8_t stack_array_58 [32];
  int8_t stack_array_38 [32];
  uVar2 = DataCompressor0(param_2,stack_array_38,1,0x5453494c,0x53505250);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  puVar3 = *(uint64_t **)(param_1 + 0x20);
  puVar6 = (uint64_t *)(param_1 + 0x20);
  iVar4 = 0;
  aiStackX_20[0] = 0;
  puVar5 = puVar3;
  if (puVar3 != puVar6) {
    do {
      if (((*(int *)(puVar3 + 5) != 0) || (*(int *)(puVar3 + 3) != 0)) ||
         (*(int *)((int64_t)puVar3 + 0x44) != 0)) {
        iVar4 = iVar4 + 1;
        aiStackX_20[0] = iVar4;
      }
      if (puVar3 != puVar6) {
        puVar3 = (uint64_t *)*puVar3;
        puVar5 = puVar3;
      }
    } while (puVar5 != puVar6);
    if (iVar4 != 0) {
      uVar2 = NetworkProtocol_de6f0(param_2,aiStackX_20);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      for (puVar3 = (uint64_t *)*puVar6; puVar3 != puVar6; puVar3 = (uint64_t *)*puVar3) {
        if (((*(int *)(puVar3 + 5) == 0) && (*(int *)(puVar3 + 3) == 0)) &&
           (*(int *)((int64_t)puVar3 + 0x44) == 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          uVar2 = DataCompressor0(param_2,stack_array_58,0,0x504f5250,0);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if (*(int *)(param_2[1] + 0x18) != 0) {
            return 0x1c;
          }
          astack_special_x_18[0] = *(int32_t *)(puVar3 + 8);
          uVar2 = (**(code **)**(uint64_t **)(*param_2 + 8))
                            (*(uint64_t **)(*param_2 + 8),astack_special_x_18,4);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if (*(int *)(param_2[1] + 0x18) == 0) {
            astack_special_x_18[0] = CONCAT22(astack_special_x_18[0]._2_2_,*(int16_t *)(puVar3 + 9));
            uVar2 = (**(code **)**(uint64_t **)(*param_2 + 8))
                              (*(uint64_t **)(*param_2 + 8),astack_special_x_18,2);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            if (*(int *)(param_2[1] + 0x18) == 0) {
              astack_special_x_18[0] =
                   CONCAT22(astack_special_x_18[0]._2_2_,*(int16_t *)((int64_t)puVar3 + 0x4a));
              uVar2 = (**(code **)**(uint64_t **)(*param_2 + 8))
                                (*(uint64_t **)(*param_2 + 8),astack_special_x_18,2);
              if ((int)uVar2 != 0) {
                return uVar2;
              }
              if (*(int *)(param_2[1] + 0x18) == 0) {
                uVar2 = SystemCleanupProcessor(*param_2,puVar3 + 6);
                if ((int)uVar2 != 0) {
                  return uVar2;
                }
                uVar2 = NetworkProtocol_a7b00(param_2,puVar3 + 4);
                if ((int)uVar2 != 0) {
                  return uVar2;
                }
                uVar2 = NetworkProtocol_a7b00(param_2,puVar3 + 2);
                if ((int)uVar2 == 0) goto LAB_1808a1807;
              }
              else {
                uVar2 = 0x1c;
              }
            }
            else {
              uVar2 = 0x1c;
            }
          }
          else {
            uVar2 = 0x1c;
          }
          if ((int)uVar2 != 0) {
            return uVar2;
          }
LAB_1808a1807:
// WARNING: Subroutine does not return
          SystemThreadManager(param_2,stack_array_58);
        }
      }
    }
  }
// WARNING: Subroutine does not return
  SystemThreadManager(param_2,stack_array_38);
}
uint64_t NetworkProtocol_a164e(uint64_t param_1,uint64_t *param_2)
{
  bool bVar1;
  uint64_t uVar2;
  int iVar3;
  uint64_t *puVar4;
  int64_t *unaff_RBX;
  uint64_t *unaff_RSI;
  int32_t local_var_a0;
  int iStack00000000000000a8;
  iVar3 = 0;
  iStack00000000000000a8 = 0;
  puVar4 = param_2;
  if (param_2 != unaff_RSI) {
    do {
      if (((*(int *)(param_2 + 5) != 0) || (*(int *)(param_2 + 3) != 0)) ||
         (*(int *)((int64_t)param_2 + 0x44) != 0)) {
        iVar3 = iVar3 + 1;
        iStack00000000000000a8 = iVar3;
      }
      if (param_2 != unaff_RSI) {
        param_2 = (uint64_t *)*param_2;
        puVar4 = param_2;
      }
    } while (puVar4 != unaff_RSI);
    if (iVar3 != 0) {
      uVar2 = NetworkProtocol_de6f0();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      for (puVar4 = (uint64_t *)*unaff_RSI; puVar4 != unaff_RSI; puVar4 = (uint64_t *)*puVar4) {
        if (((*(int *)(puVar4 + 5) == 0) && (*(int *)(puVar4 + 3) == 0)) &&
           (*(int *)((int64_t)puVar4 + 0x44) == 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          uVar2 = DataCompressor0();
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
            return 0x1c;
          }
          local_var_a0 = *(int32_t *)(puVar4 + 8);
          uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                            (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_000000a0,4);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
            local_var_a0 = CONCAT22(local_var_a0._2_2_,*(int16_t *)(puVar4 + 9));
            uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                              (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_000000a0,2);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
              local_var_a0 =
                   CONCAT22(local_var_a0._2_2_,*(int16_t *)((int64_t)puVar4 + 0x4a));
              uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                                (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_000000a0,2);
              if ((int)uVar2 != 0) {
                return uVar2;
              }
              if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                uVar2 = SystemCleanupProcessor(*unaff_RBX,puVar4 + 6);
                if ((int)uVar2 != 0) {
                  return uVar2;
                }
                uVar2 = NetworkProtocol_a7b00();
                if ((int)uVar2 != 0) {
                  return uVar2;
                }
                uVar2 = NetworkProtocol_a7b00();
                if ((int)uVar2 == 0) goto LAB_1808a1807;
              }
              else {
                uVar2 = 0x1c;
              }
            }
            else {
              uVar2 = 0x1c;
            }
          }
          else {
            uVar2 = 0x1c;
          }
          if ((int)uVar2 != 0) {
            return uVar2;
          }
LAB_1808a1807:
// WARNING: Subroutine does not return
          SystemThreadManager();
        }
      }
    }
  }
// WARNING: Subroutine does not return
  SystemThreadManager();
}
// 函数: void NetworkProtocol_a1841(void)
void NetworkProtocol_a1841(void)
{
  return;
}
uint64_t NetworkProtocol_a1848(void)
{
  return 0x1c;
}
// 函数: void NetworkProtocol_a1850(uint64_t param_1,uint64_t param_2)
void NetworkProtocol_a1850(uint64_t param_1,uint64_t param_2)
{
  NetworkProtocol_9f530(param_1,param_2,0x53554252,0x42534252,1);
  return;
}
uint64_t NetworkProtocol_a1870(int64_t param_1,int64_t *param_2)
{
  uint64_t uVar1;
  int32_t astack_special_x_18 [4];
  uVar1 = UltraHighFreq_ResourceLoader1(param_2,0);
  if ((int)uVar1 == 0) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = SystemCleanupProcessor(*param_2,param_1 + 0x10);
    if (((int)uVar1 == 0) && (uVar1 = NetworkProtocol_afd90(param_2,param_1 + 8), (int)uVar1 == 0)) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      astack_special_x_18[0] = *(int32_t *)(param_1 + 0xc);
      uVar1 = (**(code **)**(uint64_t **)(*param_2 + 8))
                        (*(uint64_t **)(*param_2 + 8),astack_special_x_18,4);
      if ((int)uVar1 == 0) {
        uVar1 = UISystem_Controller(param_2,0);
      }
    }
  }
  return uVar1;
}
uint64_t NetworkProtocol_a1910(int64_t param_1,int64_t *param_2)
{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int32_t astack_special_x_18 [2];
  int aiStackX_20 [2];
  int8_t stack_array_48 [32];
  int8_t stack_array_28 [32];
  uVar3 = DataCompressor0(param_2,stack_array_28,1,0x5453494c,0x54495053);
  if (((int)uVar3 == 0) &&
     (uVar3 = DataCompressor0(param_2,stack_array_48,0,0x42495053,0), (int)uVar3 == 0)) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar3 = SystemCleanupProcessor(*param_2,param_1 + 0x10);
    if ((int)uVar3 == 0) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      astack_special_x_18[0] = *(int32_t *)(param_1 + 0xf0);
      uVar3 = (**(code **)**(uint64_t **)(*param_2 + 8))
                        (*(uint64_t **)(*param_2 + 8),astack_special_x_18,4);
      if (((int)uVar3 == 0) && (uVar3 = UISystem_WindowManager(param_2,param_1 + 0xf8), (int)uVar3 == 0)) {
        if (((*(uint *)(param_2 + 8) < 0x8a) && (*(int *)(param_1 + 0xf8) == 0)) ||
           ((*(uint *)(param_2 + 8) < 0x8e && (*(int *)(param_1 + 0xf8) == 0x7fffffff)))) {
          *(int32_t *)(param_1 + 0xf8) = 0x21;
        }
        uVar3 = NetworkProtocol_98f40(param_2,param_1 + 0x100);
        if ((int)uVar3 == 0) {
          if (*(uint *)(param_2 + 8) < 0x68) {
            if (*(int *)(param_2[1] + 0x18) == 0) {
              lVar1 = *param_2;
              astack_special_x_18[0] = 0;
              puVar2 = *(uint64_t **)(lVar1 + 8);
              uVar3 = (**(code **)*puVar2)(puVar2,astack_special_x_18,4);
              aiStackX_20[0] = (int)uVar3;
              if (aiStackX_20[0] != 0) {
                return uVar3;
              }
              puVar2 = *(uint64_t **)(lVar1 + 8);
              uVar3 = (**(code **)*puVar2)(puVar2,aiStackX_20,4);
            }
            else {
              uVar3 = 0x1c;
            }
          }
          else {
            uVar3 = 0;
          }
          if (((((int)uVar3 == 0) &&
               (uVar3 = NetworkProtocol_a7bf0(param_2,param_1 + 0xf4,0x39), (int)uVar3 == 0)) &&
              (uVar3 = UISystem_LayoutProcessor(param_2,param_1 + 0xfc,0x5e), (int)uVar3 == 0)) &&
             ((*(uint *)(param_2 + 8) < 0x85 ||
              (uVar3 = NetworkProtocol_992f0(param_2,param_1 + 0x108), (int)uVar3 == 0)))) {
// WARNING: Subroutine does not return
            SystemThreadManager(param_2,stack_array_48);
          }
        }
      }
    }
  }
  return uVar3;
}
// 函数: void NetworkProtocol_a19dc(void)
void NetworkProtocol_a19dc(void)
{
  int64_t lVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *unaff_RBX;
  int64_t unaff_RDI;
  int32_t local_var_90;
  int local_var_98;
  iVar3 = UISystem_WindowManager();
  if (iVar3 == 0) {
    if (((*(uint *)(unaff_RBX + 8) < 0x8a) && (*(int *)(unaff_RDI + 0xf8) == 0)) ||
       ((*(uint *)(unaff_RBX + 8) < 0x8e && (*(int *)(unaff_RDI + 0xf8) == 0x7fffffff)))) {
      *(int32_t *)(unaff_RDI + 0xf8) = 0x21;
    }
    iVar3 = NetworkProtocol_98f40();
    if (iVar3 == 0) {
      if (*(uint *)(unaff_RBX + 8) < 0x68) {
        if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
          lVar1 = *unaff_RBX;
          local_var_90 = 0;
          puVar2 = *(uint64_t **)(lVar1 + 8);
          local_var_98 = (**(code **)*puVar2)(puVar2,&local_buffer_00000090,4);
          if (local_var_98 != 0) {
            return;
          }
          puVar2 = *(uint64_t **)(lVar1 + 8);
          iVar3 = (**(code **)*puVar2)(puVar2,&local_buffer_00000098,4);
        }
        else {
          iVar3 = 0x1c;
        }
      }
      else {
        iVar3 = 0;
      }
      if (((iVar3 == 0) && (iVar3 = NetworkProtocol_a7bf0(), iVar3 == 0)) &&
         (iVar3 = UISystem_LayoutProcessor(), iVar3 == 0)) {
        if ((0x84 < *(uint *)(unaff_RBX + 8)) && (iVar3 = NetworkProtocol_992f0(), iVar3 != 0)) {
          return;
        }
// WARNING: Subroutine does not return
        SystemThreadManager();
      }
    }
  }
  return;
}