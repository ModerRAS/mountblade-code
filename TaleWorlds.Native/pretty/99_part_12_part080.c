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
// 99_part_12_part080.c - 1 个函数
// 函数: void NetworkProtocol_a0a15(void)
void NetworkProtocol_a0a15(void)
{
  return;
}
uint64_t NetworkProtocol_a0a1f(void)
{
  int64_t lVar1;
  uint uVar2;
  int32_t *puVar3;
  uint64_t uVar4;
  int64_t unaff_RBP;
  uint unaff_ESI;
  int64_t *unaff_RDI;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  int32_t uVar5;
  int32_t local_var_30;
  int32_t local_var_38;
  int16_t local_buffer_3c;
  int16_t local_buffer_3e;
  int32_t local_var_40;
  int32_t local_buffer_44;
  int16_t local_var_c0;
  int16_t local_var_c8;
  uVar2 = SystemCleanupProcessor(*unaff_RDI,unaff_RBP + 0x10);
  uVar4 = (uint64_t)uVar2;
  if (uVar2 == 0) {
    if (*(uint *)(unaff_RDI[1] + 0x18) == unaff_ESI) {
      uVar2 = SystemCleanupProcessor(*unaff_RDI,unaff_RBP + 0x38);
      uVar4 = (uint64_t)uVar2;
      if (uVar2 == 0) {
        puVar3 = (int32_t *)SystemCoreProcessor();
        uVar5 = *puVar3;
        _local_buffer_3c = puVar3[1];
        local_var_40 = puVar3[2];
        local_buffer_44 = puVar3[3];
        local_var_38 = uVar5;
        if (*(uint *)(unaff_RDI + 8) < 0x6d) {
          if (*(uint *)(unaff_RDI[1] + 0x18) == unaff_ESI) {
            lVar1 = *unaff_RDI;
            local_var_30 = uVar5;
            unaff_ESI = (**(code **)**(uint64_t **)(lVar1 + 8))
                                  (*(uint64_t **)(lVar1 + 8),&local_buffer_00000030,4);
            uVar5 = extraout_XMM0_Da;
            if (unaff_ESI == 0) {
              local_var_c0 = local_buffer_3c;
              unaff_ESI = (**(code **)**(uint64_t **)(lVar1 + 8))
                                    (*(uint64_t **)(lVar1 + 8),&local_buffer_000000c0,2);
              uVar5 = extraout_XMM0_Da_00;
              if (unaff_ESI == 0) {
                local_var_c8 = local_buffer_3e;
                unaff_ESI = (**(code **)**(uint64_t **)(lVar1 + 8))
                                      (*(uint64_t **)(lVar1 + 8),&local_buffer_000000c8,2);
                uVar5 = extraout_XMM0_Da_01;
                if (unaff_ESI == 0) {
                  unaff_ESI = (**(code **)**(uint64_t **)(lVar1 + 8))
                                        (*(uint64_t **)(lVar1 + 8),&local_buffer_00000040,8);
                  uVar5 = extraout_XMM0_Da_02;
                }
              }
            }
          }
          else {
            unaff_ESI = 0x1c;
          }
        }
        if (unaff_ESI == 0) {
          if (*(uint *)(unaff_RDI + 8) < 0x82) {
            if (*(uint *)(unaff_RDI + 8) < 0x6a) {
              return 0x1c;
            }
            uVar4 = NetworkProtocol_a5900(uVar5,unaff_RBP + 0x48,1);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            uVar5 = extraout_XMM0_Da_05;
            for (uVar4 = *(uint64_t *)(unaff_RBP + 0x48);
                (*(uint64_t *)(unaff_RBP + 0x48) <= uVar4 &&
                (uVar4 < (int64_t)*(int *)(unaff_RBP + 0x50) * 0x1c +
                         *(uint64_t *)(unaff_RBP + 0x48))); uVar4 = uVar4 + 0x1c) {
              uVar5 = SystemCore_d3e20(unaff_RBP + 0x58);
            }
          }
          else {
            uVar4 = NetworkProtocol_a7b00(uVar5,unaff_RBP + 0x58);
            uVar5 = extraout_XMM0_Da_03;
            if ((int)uVar4 != 0) {
              return uVar4;
            }
          }
          uVar4 = NetworkProtocol_a7bf0(uVar5,unaff_RBP + 0x68,0x71);
          if ((int)uVar4 == 0) {
// WARNING: Subroutine does not return
            SystemThreadManager(extraout_XMM0_Da_04,&local_buffer_00000048);
          }
        }
        else {
          uVar4 = (uint64_t)unaff_ESI;
        }
      }
    }
    else {
      uVar4 = 0x1c;
    }
  }
  return uVar4;
}
uint64_t NetworkProtocol_a0a8b(void)
{
  int64_t lVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t *unaff_RDI;
  uint64_t local_var_38;
  int16_t local_var_c0;
  int16_t local_var_c8;
  lVar1 = *unaff_RDI;
  uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))();
  if (uVar2 == 0) {
    local_var_c0 = local_var_38._4_2_;
    uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))
                      (*(uint64_t **)(lVar1 + 8),&local_buffer_000000c0,2);
    if (uVar2 == 0) {
      local_var_c8 = local_var_38._6_2_;
      uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))
                        (*(uint64_t **)(lVar1 + 8),&local_buffer_000000c8,2);
      if (uVar2 == 0) {
        uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))
                          (*(uint64_t **)(lVar1 + 8),&local_buffer_00000040,8);
      }
    }
  }
  if (uVar2 != 0) {
    return (uint64_t)uVar2;
  }
  if (*(uint *)(unaff_RDI + 8) < 0x82) {
    if (*(uint *)(unaff_RDI + 8) < 0x6a) {
      return unaff_RBX & 0xffffffff;
    }
    uVar3 = NetworkProtocol_a5900();
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    for (uVar3 = *(uint64_t *)(unaff_RBP + 0x48);
        (*(uint64_t *)(unaff_RBP + 0x48) <= uVar3 &&
        (uVar3 < (int64_t)*(int *)(unaff_RBP + 0x50) * 0x1c + *(uint64_t *)(unaff_RBP + 0x48)));
        uVar3 = uVar3 + 0x1c) {
      SystemCore_d3e20(unaff_RBP + 0x58);
    }
  }
  else {
    uVar3 = NetworkProtocol_a7b00();
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  uVar3 = NetworkProtocol_a7bf0();
  if ((int)uVar3 != 0) {
    return uVar3;
  }
// WARNING: Subroutine does not return
  SystemThreadManager();
}
uint64_t NetworkProtocol_a0b11(void)
{
  uint64_t uVar1;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  uint unaff_ESI;
  int64_t unaff_RDI;
  if (unaff_ESI != 0) {
    return (uint64_t)unaff_ESI;
  }
  if (*(uint *)(unaff_RDI + 0x40) < 0x82) {
    if (*(uint *)(unaff_RDI + 0x40) < 0x6a) {
      return unaff_RBX & 0xffffffff;
    }
    uVar1 = NetworkProtocol_a5900();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    for (uVar1 = *(uint64_t *)(unaff_RBP + 0x48);
        (*(uint64_t *)(unaff_RBP + 0x48) <= uVar1 &&
        (uVar1 < (int64_t)*(int *)(unaff_RBP + 0x50) * 0x1c + *(uint64_t *)(unaff_RBP + 0x48)));
        uVar1 = uVar1 + 0x1c) {
      SystemCore_d3e20(unaff_RBP + 0x58);
    }
  }
  else {
    uVar1 = NetworkProtocol_a7b00();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  uVar1 = NetworkProtocol_a7bf0();
  if ((int)uVar1 != 0) {
    return uVar1;
  }
// WARNING: Subroutine does not return
  SystemThreadManager();
}
uint64_t NetworkProtocol_a0bf0(int64_t param_1,int64_t *param_2)
{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint *puVar4;
  uint64_t uVar5;
  uint astack_special_x_18 [2];
  int32_t astack_special_x_20 [2];
  uint stack_array_68 [2];
  int8_t stack_array_60 [32];
  int8_t stack_array_40 [40];
  uVar2 = DataCompressor0(param_2,stack_array_40,1,0x5453494c,0x4d524150);
  if (((int)uVar2 == 0) &&
     (uVar2 = DataCompressor0(param_2,stack_array_60,0,0x424d5250,0), (int)uVar2 == 0)) {
    if (*(int *)(param_2[1] + 0x18) == 0) {
      uVar1 = SystemCleanupProcessor(*param_2,param_1 + 0x10);
      uVar2 = (uint64_t)uVar1;
      if (uVar1 == 0) {
        if (*(uint *)(param_2 + 8) < 0x70) {
          uVar2 = 0;
        }
        else if (*(int *)(param_2[1] + 0x18) == 0) {
          astack_special_x_18[0] = *(uint *)(param_1 + 0x34);
          uVar2 = (**(code **)**(uint64_t **)(*param_2 + 8))
                            (*(uint64_t **)(*param_2 + 8),astack_special_x_18,4);
        }
        else {
          uVar2 = 0x1c;
        }
        if ((int)uVar2 == 0) {
          if (*(uint *)(param_2 + 8) < 0x70) {
            if (*(int *)(param_2[1] + 0x18) == 0) {
              astack_special_x_18[0] = astack_special_x_18[0] & 0xffffff00;
              uVar2 = (**(code **)**(uint64_t **)(*param_2 + 8))
                                (*(uint64_t **)(*param_2 + 8),astack_special_x_18,1);
            }
            else {
              uVar2 = 0x1c;
            }
          }
          else {
            uVar2 = 0;
          }
          if (((int)uVar2 == 0) && (uVar2 = 0x1c, *(int *)(param_2[1] + 0x18) == 0)) {
            switch(*(int32_t *)(param_1 + 0x30)) {
            case 0:
              astack_special_x_18[0] = 0;
              break;
            case 1:
              astack_special_x_18[0] = 1;
              break;
            case 2:
              astack_special_x_18[0] = 2;
              break;
            case 3:
              astack_special_x_18[0] = 3;
              break;
            case 4:
              astack_special_x_18[0] = 4;
              break;
            case 5:
              astack_special_x_18[0] = 5;
              break;
            case 6:
              astack_special_x_18[0] = 6;
              break;
            case 7:
              astack_special_x_18[0] = 7;
              break;
            case 8:
              astack_special_x_18[0] = 8;
              break;
            case 9:
              astack_special_x_18[0] = 9;
              break;
            default:
              astack_special_x_18[0] = 10;
            }
            uVar2 = (**(code **)**(uint64_t **)(*param_2 + 8))
                              (*(uint64_t **)(*param_2 + 8),astack_special_x_18,4);
            if ((((((int)uVar2 == 0) && (uVar2 = 0x1c, *(int *)(param_2[1] + 0x18) == 0)) &&
                 (uVar2 = NetworkProtocol_a27f0(*param_2,param_1 + 0x50), (int)uVar2 == 0)) &&
                ((uVar2 = NetworkSecurityManager(param_2,param_1 + 0x38), (int)uVar2 == 0 &&
                 (uVar2 = NetworkSecurityManager(param_2,param_1 + 0x3c), (int)uVar2 == 0)))) &&
               ((uVar2 = NetworkSecurityManager(param_2,param_1 + 0x4c), (int)uVar2 == 0 &&
                ((uVar2 = NetworkSecurityManager(param_2,param_1 + 0x40), (int)uVar2 == 0 &&
                 (uVar2 = NetworkSecurityManager(param_2,param_1 + 0x44), (int)uVar2 == 0)))))) {
              if (*(uint *)(param_2 + 8) < 0x70) {
                if (*(int *)(param_2[1] + 0x18) == 0) {
                  astack_special_x_18[0] = astack_special_x_18[0] & 0xffffff00;
                  uVar2 = (**(code **)**(uint64_t **)(*param_2 + 8))
                                    (*(uint64_t **)(*param_2 + 8),astack_special_x_18,1);
                }
                else {
                  uVar2 = 0x1c;
                }
              }
              else {
                uVar2 = 0;
              }
              if (((int)uVar2 == 0) &&
                 ((0x5f < *(uint *)(param_2 + 8) ||
                  (uVar2 = NetworkProtocol_de620(param_2), (int)uVar2 == 0)))) {
                if (*(uint *)(param_2 + 8) < 0x52) {
                  uVar2 = 0;
                }
                else if (*(int *)(param_2[1] + 0x18) == 0) {
                  astack_special_x_18[0] = *(uint *)(param_1 + 0x48);
                  uVar2 = (**(code **)**(uint64_t **)(*param_2 + 8))
                                    (*(uint64_t **)(*param_2 + 8),astack_special_x_18,4);
                }
                else {
                  uVar2 = 0x1c;
                }
                if ((int)uVar2 == 0) {
                  if ((int)param_2[8] - 0x52U < 0x1e) {
                    if (*(int *)(param_2[1] + 0x18) == 0) {
                      astack_special_x_18[0] = astack_special_x_18[0] & 0xffffff00;
                      uVar2 = (**(code **)**(uint64_t **)(*param_2 + 8))
                                        (*(uint64_t **)(*param_2 + 8),astack_special_x_18,1);
                    }
                    else {
                      uVar2 = 0x1c;
                    }
                  }
                  else {
                    uVar2 = 0;
                  }
                  if ((int)uVar2 == 0) {
                    uVar1 = *(uint *)(param_2 + 8);
                    if (uVar1 < 0x70) {
                      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xfffffff8;
                      uVar1 = *(uint *)(param_2 + 8);
                    }
                    if (0x8a < uVar1) {
                      uVar1 = *(int *)(param_1 + 0x68) * 2;
                      if (uVar1 < 0x8000) {
                        astack_special_x_18[0] = CONCAT22(astack_special_x_18[0]._2_2_,(short)uVar1);
                        uVar5 = 2;
                        puVar4 = astack_special_x_18;
                      }
                      else {
                        uVar5 = 4;
                        stack_array_68[0] = (uVar1 & 0xffffc000 | 0x4000) * 2 | uVar1 & 0x7fff;
                        puVar4 = stack_array_68;
                      }
                      uVar2 = (**(code **)**(uint64_t **)(*param_2 + 8))
                                        (*(uint64_t **)(*param_2 + 8),puVar4,uVar5);
                      if ((int)uVar2 != 0) {
                        return uVar2;
                      }
                      uVar2 = *(uint64_t *)(param_1 + 0x60);
                      while( true ) {
                        astack_special_x_20[0] = 0;
                        if ((uVar2 < *(uint64_t *)(param_1 + 0x60)) ||
                           ((int64_t)*(int *)(param_1 + 0x68) * 0x10 +
                            *(uint64_t *)(param_1 + 0x60) <= uVar2)) break;
                        uVar3 = UltraHighFreq_ResourceLoader1(param_2,0);
                        if ((int)uVar3 != 0) {
                          return uVar3;
                        }
                        if (*(int *)(param_2[1] + 0x18) != 0) {
                          return 0x1c;
                        }
                        uVar3 = NetworkProtocol_a27f0(*param_2,uVar2);
                        if ((int)uVar3 != 0) {
                          return uVar3;
                        }
                        uVar3 = UISystem_Controller(param_2,astack_special_x_20);
                        if ((int)uVar3 != 0) {
                          return uVar3;
                        }
                        uVar2 = uVar2 + 0x10;
                      }
                    }
// WARNING: Subroutine does not return
                    SystemThreadManager(param_2,stack_array_60);
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar2 = 0x1c;
    }
  }
  return uVar2;
}
uint64_t NetworkProtocol_a0c29(int32_t param_1)
{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  int64_t *unaff_RBX;
  int64_t unaff_RSI;
  uint64_t uVar5;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  int32_t extraout_XMM0_Da_06;
  int32_t extraout_XMM0_Da_07;
  int32_t extraout_XMM0_Da_08;
  int32_t extraout_XMM0_Da_09;
  int32_t uVar6;
  int32_t extraout_XMM0_Da_10;
  int32_t extraout_XMM0_Da_11;
  uint local_var_30;
  uint local_buffer_b0;
  int32_t local_var_b8;
  uVar2 = DataCompressor0(param_1,&local_buffer_00000038,0,0x424d5250,0);
  if ((int)uVar2 == 0) {
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      uVar1 = SystemCleanupProcessor(*unaff_RBX,unaff_RSI + 0x10);
      uVar2 = (uint64_t)uVar1;
      if (uVar1 == 0) {
        if (*(uint *)(unaff_RBX + 8) < 0x70) {
          uVar2 = 0;
        }
        else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
          local_buffer_b0 = *(uint *)(unaff_RSI + 0x34);
          uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                            (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_000000b0,4);
        }
        else {
          uVar2 = 0x1c;
        }
        if ((int)uVar2 == 0) {
          if (*(uint *)(unaff_RBX + 8) < 0x70) {
            if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
              local_buffer_b0 = local_buffer_b0 & 0xffffff00;
              uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                                (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_000000b0,1);
            }
            else {
              uVar2 = 0x1c;
            }
          }
          else {
            uVar2 = 0;
          }
          if (((int)uVar2 == 0) && (uVar2 = 0x1c, *(int *)(unaff_RBX[1] + 0x18) == 0)) {
            switch(*(int32_t *)(unaff_RSI + 0x30)) {
            case 0:
              local_buffer_b0 = 0;
              break;
            case 1:
              local_buffer_b0 = 1;
              break;
            case 2:
              local_buffer_b0 = 2;
              break;
            case 3:
              local_buffer_b0 = 3;
              break;
            case 4:
              local_buffer_b0 = 4;
              break;
            case 5:
              local_buffer_b0 = 5;
              break;
            case 6:
              local_buffer_b0 = 6;
              break;
            case 7:
              local_buffer_b0 = 7;
              break;
            case 8:
              local_buffer_b0 = 8;
              break;
            case 9:
              local_buffer_b0 = 9;
              break;
            default:
              local_buffer_b0 = 10;
            }
            uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                              (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_000000b0,4);
            if ((((((int)uVar2 == 0) && (uVar2 = 0x1c, *(int *)(unaff_RBX[1] + 0x18) == 0)) &&
                 (uVar2 = NetworkProtocol_a27f0(*unaff_RBX,unaff_RSI + 0x50), (int)uVar2 == 0)) &&
                ((uVar2 = NetworkSecurityManager(extraout_XMM0_Da,unaff_RSI + 0x38), (int)uVar2 == 0 &&
                 (uVar2 = NetworkSecurityManager(extraout_XMM0_Da_00,unaff_RSI + 0x3c), (int)uVar2 == 0))))
               && ((uVar2 = NetworkSecurityManager(extraout_XMM0_Da_01,unaff_RSI + 0x4c), (int)uVar2 == 0 &&
                   ((uVar2 = NetworkSecurityManager(extraout_XMM0_Da_02,unaff_RSI + 0x40), (int)uVar2 == 0 &&
                    (uVar2 = NetworkSecurityManager(extraout_XMM0_Da_03,unaff_RSI + 0x44), (int)uVar2 == 0)))
                   ))) {
              uVar6 = extraout_XMM0_Da_04;
              if (*(uint *)(unaff_RBX + 8) < 0x70) {
                if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                  local_buffer_b0 = local_buffer_b0 & 0xffffff00;
                  uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                                    (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_000000b0,1);
                  uVar6 = extraout_XMM0_Da_05;
                }
                else {
                  uVar2 = 0x1c;
                }
              }
              else {
                uVar2 = 0;
              }
              if (((int)uVar2 == 0) &&
                 ((0x5f < *(uint *)(unaff_RBX + 8) ||
                  (uVar2 = NetworkProtocol_de620(), uVar6 = extraout_XMM0_Da_06, (int)uVar2 == 0)))) {
                if (*(uint *)(unaff_RBX + 8) < 0x52) {
                  uVar2 = 0;
                }
                else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                  local_buffer_b0 = *(uint *)(unaff_RSI + 0x48);
                  uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                                    (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_000000b0,4);
                  uVar6 = extraout_XMM0_Da_07;
                }
                else {
                  uVar2 = 0x1c;
                }
                if ((int)uVar2 == 0) {
                  if ((int)unaff_RBX[8] - 0x52U < 0x1e) {
                    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                      local_buffer_b0 = local_buffer_b0 & 0xffffff00;
                      uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                                        (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_000000b0,1);
                      uVar6 = extraout_XMM0_Da_08;
                    }
                    else {
                      uVar2 = 0x1c;
                    }
                  }
                  else {
                    uVar2 = 0;
                  }
                  if ((int)uVar2 == 0) {
                    uVar1 = *(uint *)(unaff_RBX + 8);
                    if (uVar1 < 0x70) {
                      *(uint *)(unaff_RSI + 0x34) = *(uint *)(unaff_RSI + 0x34) & 0xfffffff8;
                      uVar1 = *(uint *)(unaff_RBX + 8);
                    }
                    if (0x8a < uVar1) {
                      uVar1 = *(int *)(unaff_RSI + 0x68) * 2;
                      if (uVar1 < 0x8000) {
                        local_buffer_b0 = CONCAT22(local_buffer_b0._2_2_,(short)uVar1);
                        uVar5 = 2;
                        puVar4 = &local_buffer_000000b0;
                      }
                      else {
                        uVar5 = 4;
                        local_var_30 = (uVar1 & 0xffffc000 | 0x4000) * 2 | uVar1 & 0x7fff;
                        puVar4 = &local_buffer_00000030;
                      }
                      uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                                        (*(uint64_t **)(*unaff_RBX + 8),puVar4,uVar5);
                      if ((int)uVar2 != 0) {
                        return uVar2;
                      }
                      uVar2 = *(uint64_t *)(unaff_RSI + 0x60);
                      uVar6 = extraout_XMM0_Da_09;
                      while( true ) {
                        local_var_b8 = 0;
                        if ((uVar2 < *(uint64_t *)(unaff_RSI + 0x60)) ||
                           ((int64_t)*(int *)(unaff_RSI + 0x68) * 0x10 +
                            *(uint64_t *)(unaff_RSI + 0x60) <= uVar2)) break;
                        uVar3 = UltraHighFreq_ResourceLoader1(uVar6,0);
                        if ((int)uVar3 != 0) {
                          return uVar3;
                        }
                        if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
                          return 0x1c;
                        }
                        uVar3 = NetworkProtocol_a27f0(*unaff_RBX,uVar2);
                        if ((int)uVar3 != 0) {
                          return uVar3;
                        }
                        uVar3 = UISystem_Controller(extraout_XMM0_Da_10,&local_buffer_000000b8);
                        if ((int)uVar3 != 0) {
                          return uVar3;
                        }
                        uVar2 = uVar2 + 0x10;
                        uVar6 = extraout_XMM0_Da_11;
                      }
                    }
// WARNING: Subroutine does not return
                    SystemThreadManager(uVar6,&local_buffer_00000038);
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar2 = 0x1c;
    }
  }
  return uVar2;
}
uint64_t NetworkProtocol_a0c5b(void)
{
  uint uVar1;
  int64_t in_RAX;
  uint64_t uVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  int64_t *unaff_RBX;
  int64_t unaff_RSI;
  uint64_t uVar5;
  int8_t uVar6;
  uint unaff_R14D;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  int32_t extraout_XMM0_Da_06;
  int32_t extraout_XMM0_Da_07;
  int32_t extraout_XMM0_Da_08;
  int32_t extraout_XMM0_Da_09;
  int32_t uVar7;
  int32_t extraout_XMM0_Da_10;
  int32_t extraout_XMM0_Da_11;
  uint local_var_30;
  uint local_buffer_b0;
  uint local_var_b8;
  if (*(uint *)(in_RAX + 0x18) == unaff_R14D) {
    uVar1 = SystemCleanupProcessor(*unaff_RBX,unaff_RSI + 0x10);
    uVar2 = (uint64_t)uVar1;
    if (uVar1 == 0) {
      if (*(uint *)(unaff_RBX + 8) < 0x70) {
        uVar2 = (uint64_t)unaff_R14D;
      }
      else if (*(uint *)(unaff_RBX[1] + 0x18) == unaff_R14D) {
        local_buffer_b0 = *(int32_t *)(unaff_RSI + 0x34);
        uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                          (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_000000b0,4);
      }
      else {
        uVar2 = 0x1c;
      }
      if ((int)uVar2 == 0) {
        uVar6 = (int8_t)unaff_R14D;
        if (*(uint *)(unaff_RBX + 8) < 0x70) {
          if (*(uint *)(unaff_RBX[1] + 0x18) == unaff_R14D) {
            local_buffer_b0 = CONCAT31(local_buffer_b0._1_3_,uVar6);
            uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                              (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_000000b0,1);
          }
          else {
            uVar2 = 0x1c;
          }
        }
        else {
          uVar2 = (uint64_t)unaff_R14D;
        }
        if (((int)uVar2 == 0) && (uVar2 = 0x1c, *(uint *)(unaff_RBX[1] + 0x18) == unaff_R14D)) {
          switch(*(int32_t *)(unaff_RSI + 0x30)) {
          case 0:
            local_buffer_b0 = unaff_R14D;
            break;
          case 1:
            local_buffer_b0 = 1;
            break;
          case 2:
            local_buffer_b0 = 2;
            break;
          case 3:
            local_buffer_b0 = 3;
            break;
          case 4:
            local_buffer_b0 = 4;
            break;
          case 5:
            local_buffer_b0 = 5;
            break;
          case 6:
            local_buffer_b0 = 6;
            break;
          case 7:
            local_buffer_b0 = 7;
            break;
          case 8:
            local_buffer_b0 = 8;
            break;
          case 9:
            local_buffer_b0 = 9;
            break;
          default:
            local_buffer_b0 = 10;
          }
          uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                            (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_000000b0,4);
          if ((((((int)uVar2 == 0) && (uVar2 = 0x1c, *(uint *)(unaff_RBX[1] + 0x18) == unaff_R14D))
               && (uVar2 = NetworkProtocol_a27f0(*unaff_RBX,unaff_RSI + 0x50), (int)uVar2 == 0)) &&
              ((uVar2 = NetworkSecurityManager(extraout_XMM0_Da,unaff_RSI + 0x38), (int)uVar2 == 0 &&
               (uVar2 = NetworkSecurityManager(extraout_XMM0_Da_00,unaff_RSI + 0x3c), (int)uVar2 == 0)))) &&
             ((uVar2 = NetworkSecurityManager(extraout_XMM0_Da_01,unaff_RSI + 0x4c), (int)uVar2 == 0 &&
              ((uVar2 = NetworkSecurityManager(extraout_XMM0_Da_02,unaff_RSI + 0x40), (int)uVar2 == 0 &&
               (uVar2 = NetworkSecurityManager(extraout_XMM0_Da_03,unaff_RSI + 0x44), (int)uVar2 == 0)))))) {
            uVar7 = extraout_XMM0_Da_04;
            if (*(uint *)(unaff_RBX + 8) < 0x70) {
              if (*(uint *)(unaff_RBX[1] + 0x18) == unaff_R14D) {
                local_buffer_b0 = CONCAT31(local_buffer_b0._1_3_,uVar6);
                uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                                  (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_000000b0,1);
                uVar7 = extraout_XMM0_Da_05;
              }
              else {
                uVar2 = 0x1c;
              }
            }
            else {
              uVar2 = (uint64_t)unaff_R14D;
            }
            if (((int)uVar2 == 0) &&
               ((0x5f < *(uint *)(unaff_RBX + 8) ||
                (uVar2 = NetworkProtocol_de620(), uVar7 = extraout_XMM0_Da_06, (int)uVar2 == 0)))) {
              if (*(uint *)(unaff_RBX + 8) < 0x52) {
                uVar2 = (uint64_t)unaff_R14D;
              }
              else if (*(uint *)(unaff_RBX[1] + 0x18) == unaff_R14D) {
                local_buffer_b0 = *(uint *)(unaff_RSI + 0x48);
                uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                                  (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_000000b0,4);
                uVar7 = extraout_XMM0_Da_07;
              }
              else {
                uVar2 = 0x1c;
              }
              if ((int)uVar2 == 0) {
                if ((int)unaff_RBX[8] - 0x52U < 0x1e) {
                  if (*(uint *)(unaff_RBX[1] + 0x18) == unaff_R14D) {
                    local_buffer_b0 = CONCAT31(local_buffer_b0._1_3_,uVar6);
                    uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                                      (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_000000b0,1);
                    uVar7 = extraout_XMM0_Da_08;
                  }
                  else {
                    uVar2 = 0x1c;
                  }
                }
                else {
                  uVar2 = (uint64_t)unaff_R14D;
                }
                if ((int)uVar2 == 0) {
                  uVar1 = *(uint *)(unaff_RBX + 8);
                  if (uVar1 < 0x70) {
                    *(uint *)(unaff_RSI + 0x34) = *(uint *)(unaff_RSI + 0x34) & 0xfffffff8;
                    uVar1 = *(uint *)(unaff_RBX + 8);
                  }
                  if (0x8a < uVar1) {
                    uVar1 = *(int *)(unaff_RSI + 0x68) * 2;
                    if (uVar1 < 0x8000) {
                      local_buffer_b0 = CONCAT22(local_buffer_b0._2_2_,(short)uVar1);
                      uVar5 = 2;
                      puVar4 = &local_buffer_000000b0;
                    }
                    else {
                      uVar5 = 4;
                      local_var_30 = (uVar1 & 0xffffc000 | 0x4000) * 2 | uVar1 & 0x7fff;
                      puVar4 = &local_buffer_00000030;
                    }
                    uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                                      (*(uint64_t **)(*unaff_RBX + 8),puVar4,uVar5);
                    if ((int)uVar2 != 0) {
                      return uVar2;
                    }
                    uVar7 = extraout_XMM0_Da_09;
                    for (uVar2 = *(uint64_t *)(unaff_RSI + 0x60);
                        (local_var_b8 = unaff_R14D, *(uint64_t *)(unaff_RSI + 0x60) <= uVar2
                        && (uVar2 < (int64_t)*(int *)(unaff_RSI + 0x68) * 0x10 +
                                    *(uint64_t *)(unaff_RSI + 0x60))); uVar2 = uVar2 + 0x10) {
                      uVar3 = UltraHighFreq_ResourceLoader1(uVar7,0);
                      if ((int)uVar3 != 0) {
                        return uVar3;
                      }
                      if (*(uint *)(unaff_RBX[1] + 0x18) != unaff_R14D) {
                        return 0x1c;
                      }
                      uVar3 = NetworkProtocol_a27f0(*unaff_RBX,uVar2);
                      if ((int)uVar3 != 0) {
                        return uVar3;
                      }
                      uVar3 = UISystem_Controller(extraout_XMM0_Da_10,&local_buffer_000000b8);
                      if ((int)uVar3 != 0) {
                        return uVar3;
                      }
                      uVar7 = extraout_XMM0_Da_11;
                    }
                  }
// WARNING: Subroutine does not return
                  SystemThreadManager(uVar7,&local_buffer_00000038);
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar2 = 0x1c;
  }
  return uVar2;
}