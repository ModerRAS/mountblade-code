#include "ultra_high_freq_fun_definitions.h"
/* UISystem_Controller - UISystem_Controller */
#define UISystem_Controller UISystem_Controller
/* 函数别名定义: SystemInputManager */
#define SystemInputManager SystemInputManager
/* 函数别名定义: DataCompressor */
#define DataCompressor DataCompressor
#include "SystemInputManager0_definition.h"
#include "TaleWorlds.Native.Split.h"
// 99_part_12_part086_sub002_sub002.c - 1 个函数
// 函数: void function_8a3cd0(int64_t param_1,uint64_t param_2,int32_t param_3)
void function_8a3cd0(int64_t param_1,uint64_t param_2,int32_t param_3)
{
  int iVar1;
  int8_t stack_array_28 [32];
  iVar1 = DataFlowProcessor(param_2,stack_array_28,0,param_3);
  if (iVar1 == 0) {
    iVar1 = SystemCore_ConfigManager(param_2,param_1 + 0x10);
    if (iVar1 == 0) {
      iVar1 = function_8a5f10(param_2,param_1 + 0x58,0);
      if (iVar1 == 0) {
        iVar1 = function_89bd70(param_1,param_2);
        if (iVar1 == 0) {
// WARNING: Subroutine does not return
          AdvancedSystemManager(param_2,stack_array_28);
        }
      }
    }
  }
  return;
}
uint64_t function_8a3d50(int64_t param_1,int64_t *param_2,int32_t param_3)
{
  int64_t lVar1;
  uint64_t *puVar2;
  uint uVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint *puVar7;
  uint64_t uVar8;
  int32_t *puVar9;
  uint astack_special_x_20 [2];
  int32_t local_var_48;
  uint local_var_44;
  int32_t local_var_40;
  int32_t local_var_3c;
  int8_t stack_array_38 [32];
  uVar5 = DataCompressor0(param_2,stack_array_38,0,param_3,0);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar4 = SystemCleanupProcessor(*param_2,param_1 + 0x10);
  uVar5 = (uint64_t)uVar4;
  if (uVar4 == 0) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar4 = SystemCleanupProcessor(*param_2,param_1 + 0x60);
    uVar5 = (uint64_t)uVar4;
    if (uVar4 == 0) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar4 = SystemCleanupProcessor(*param_2,param_1 + 0x30);
      uVar5 = (uint64_t)uVar4;
      if (uVar4 == 0) {
        if (*(int *)(param_2[1] + 0x18) != 0) {
          return 0x1c;
        }
        uVar4 = SystemCleanupProcessor(*param_2,param_1 + 0x40);
        uVar5 = (uint64_t)uVar4;
        if (uVar4 == 0) {
          if (*(int *)(param_2[1] + 0x18) != 0) {
            return 0x1c;
          }
          uVar4 = SystemCleanupProcessor(*param_2,param_1 + 0x50);
          uVar5 = (uint64_t)uVar4;
          if (uVar4 == 0) {
            uVar5 = UISystem_WindowManager(param_2,param_1 + 0xd8);
            if (((int)uVar5 == 0) &&
               (uVar5 = UISystem_WindowManager(param_2,param_1 + 0xdc), (int)uVar5 == 0)) {
              uVar4 = 0x1c;
              if (*(int *)(param_2[1] + 0x18) == 0) {
                astack_special_x_20[0] = CONCAT31(astack_special_x_20[0]._1_3_,*(int *)(param_1 + 0xe8) == 0);
                uVar5 = (**(code **)**(uint64_t **)(*param_2 + 8))
                                  (*(uint64_t **)(*param_2 + 8),astack_special_x_20,1);
              }
              else {
                uVar5 = 0x1c;
              }
              if (((int)uVar5 == 0) &&
                 (uVar5 = UISystem_WindowManager(param_2,param_1 + 0xe4), (int)uVar5 == 0)) {
                uVar3 = *(int *)(param_1 + 0x88) * 2;
                if ((uVar3 | 1) < 0x8000) {
                  astack_special_x_20[0] = CONCAT22(astack_special_x_20[0]._2_2_,(short)(uVar3 | 1));
                  uVar8 = 2;
                  puVar7 = astack_special_x_20;
                }
                else {
                  uVar8 = 4;
                  local_var_44 = (uVar3 & 0xffffc000 | 0x4000) * 2 | uVar3 & 0x7fff | 1;
                  puVar7 = &local_var_44;
                }
                uVar5 = (**(code **)**(uint64_t **)(*param_2 + 8))
                                  (*(uint64_t **)(*param_2 + 8),puVar7,uVar8);
                if ((int)uVar5 == 0) {
                  uVar5 = *(uint64_t *)(param_1 + 0x80);
                  local_var_48 = 0;
                  for (; (*(uint64_t *)(param_1 + 0x80) <= uVar5 &&
                         (uVar5 < (int64_t)*(int *)(param_1 + 0x88) * 0x10 +
                                  *(uint64_t *)(param_1 + 0x80))); uVar5 = uVar5 + 0x10) {
                    uVar6 = UltraHighFreq_ResourceLoader1(param_2,local_var_48);
                    if ((int)uVar6 != 0) {
                      return uVar6;
                    }
                    if (*(int *)(param_2[1] + 0x18) != 0) {
                      return 0x1c;
                    }
                    uVar6 = SystemCleanupProcessor(*param_2,uVar5);
                    if ((int)uVar6 != 0) {
                      return uVar6;
                    }
                    uVar6 = UISystem_Controller(param_2,&local_var_48);
                    if ((int)uVar6 != 0) {
                      return uVar6;
                    }
                  }
                  if ((((((0x3b < *(uint *)(param_2 + 8)) ||
                         (uVar5 = function_8de620(param_2), (int)uVar5 == 0)) &&
                        (uVar5 = function_8a68e0(param_2,param_1 + 0xb0,0,0), (int)uVar5 == 0)) &&
                       ((uVar5 = function_8a6d00(param_2,param_1 + 0xc0,0,0), (int)uVar5 == 0 &&
                        (uVar5 = UISystem_LayoutProcessor(param_2,param_1 + 0xe0,0x30), (int)uVar5 == 0)))) &&
                      ((uVar5 = function_8a7bf0(param_2,param_1 + 0xe8,0x34), (int)uVar5 == 0 &&
                       ((uVar5 = UISystem_LayoutProcessor(param_2,param_1 + 0xec,0x4e), (int)uVar5 == 0 &&
                        (uVar5 = function_8a7bf0(param_2,param_1 + 0xf8,0x61), (int)uVar5 == 0))))))
                     && ((*(uint *)(param_2 + 8) < 0x6b ||
                         (uVar5 = function_8a7b00(param_2,param_1 + 0x70), (int)uVar5 == 0)))) {
                    if (0x75 < *(uint *)(param_2 + 8)) {
                      uVar3 = *(int *)(param_1 + 0x98) * 2;
                      if ((uVar3 | 1) < 0x8000) {
                        astack_special_x_20[0] = CONCAT22(astack_special_x_20[0]._2_2_,(short)(uVar3 | 1));
                        uVar8 = 2;
                        puVar7 = astack_special_x_20;
                      }
                      else {
                        uVar8 = 4;
                        local_var_44 = (uVar3 & 0xffffc000 | 0x4000) * 2 | uVar3 & 0x7fff | 1;
                        puVar7 = &local_var_44;
                      }
                      uVar5 = (**(code **)**(uint64_t **)(*param_2 + 8))
                                        (*(uint64_t **)(*param_2 + 8),puVar7,uVar8);
                      if ((int)uVar5 != 0) {
                        return uVar5;
                      }
                      puVar9 = *(int32_t **)(param_1 + 0x90);
                      local_var_48 = 0;
                      for (; (*(int32_t **)(param_1 + 0x90) <= puVar9 &&
                             (puVar9 < *(int32_t **)(param_1 + 0x90) +
                                       (int64_t)*(int *)(param_1 + 0x98) * 2)); puVar9 = puVar9 + 2
                          ) {
                        uVar5 = UltraHighFreq_ResourceLoader1(param_2,local_var_48);
                        if ((int)uVar5 != 0) {
                          return uVar5;
                        }
                        if (*(int *)(param_2[1] + 0x18) != 0) {
                          return 0x1c;
                        }
                        local_var_40 = *puVar9;
                        lVar1 = *param_2;
                        puVar2 = *(uint64_t **)(lVar1 + 8);
                        uVar5 = (**(code **)*puVar2)(puVar2,&local_var_40,4);
                        if ((int)uVar5 != 0) {
                          return uVar5;
                        }
                        local_var_3c = puVar9[1];
                        puVar2 = *(uint64_t **)(lVar1 + 8);
                        uVar5 = (**(code **)*puVar2)(puVar2,&local_var_3c,4);
                        if ((int)uVar5 != 0) {
                          return uVar5;
                        }
                        uVar5 = UISystem_Controller(param_2,&local_var_48);
                        if ((int)uVar5 != 0) {
                          return uVar5;
                        }
                      }
                    }
                    if ((*(uint *)(param_2 + 8) < 0x83) ||
                       (uVar5 = function_8a7b00(param_2,param_1 + 0xa0), (int)uVar5 == 0)) {
                      if (*(uint *)(param_2 + 8) < 0x89) {
                        uVar4 = 0;
                      }
                      else if (*(int *)(param_2[1] + 0x18) == 0) {
                        astack_special_x_20[0] = *(uint *)(param_1 + 0xf0);
                        uVar4 = (**(code **)**(uint64_t **)(*param_2 + 8))
                                          (*(uint64_t **)(*param_2 + 8),astack_special_x_20,4);
                      }
                      if (uVar4 == 0) {
                        uVar5 = UISystem_LayoutProcessor(param_2,param_1 + 0xf4,0x89);
                        if ((int)uVar5 == 0) {
// WARNING: Subroutine does not return
                          SystemThreadManager(param_2,stack_array_38);
                        }
                      }
                      else {
                        uVar5 = (uint64_t)uVar4;
                      }
                    }
                  }
                }
              }
            }
            return uVar5;
          }
        }
      }
    }
  }
  return uVar5;
}
uint64_t function_8a3d87(void)
{
  uint64_t *puVar1;
  uint uVar2;
  uint uVar3;
  int64_t in_RAX;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  uint64_t uVar7;
  int32_t *puVar8;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t uVar9;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  int32_t extraout_XMM0_Da_06;
  int32_t extraout_XMM0_Da_07;
  int32_t extraout_XMM0_Da_08;
  int32_t extraout_XMM0_Da_09;
  int32_t extraout_XMM0_Da_10;
  int32_t extraout_XMM0_Da_11;
  int32_t extraout_XMM0_Da_12;
  int32_t extraout_XMM0_Da_13;
  int32_t extraout_XMM0_Da_14;
  int32_t uVar10;
  int32_t extraout_XMM0_Da_15;
  int32_t extraout_XMM0_Da_16;
  int32_t extraout_XMM0_Da_17;
  int32_t extraout_XMM0_Da_18;
  int32_t extraout_XMM0_Da_19;
  if (*(int *)(in_RAX + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = SystemCleanupProcessor(*unaff_RBX,unaff_RDI + 0x10);
  uVar4 = (uint64_t)uVar3;
  if (uVar3 == 0) {
    if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar3 = SystemCleanupProcessor(*unaff_RBX,unaff_RDI + 0x60);
    uVar4 = (uint64_t)uVar3;
    if (uVar3 == 0) {
      if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar3 = SystemCleanupProcessor(*unaff_RBX,unaff_RDI + 0x30);
      uVar4 = (uint64_t)uVar3;
      if (uVar3 == 0) {
        if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
          return 0x1c;
        }
        uVar3 = SystemCleanupProcessor(*unaff_RBX,unaff_RDI + 0x40);
        uVar4 = (uint64_t)uVar3;
        if (uVar3 == 0) {
          if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
            return 0x1c;
          }
          uVar3 = SystemCleanupProcessor(*unaff_RBX,unaff_RDI + 0x50);
          uVar4 = (uint64_t)uVar3;
          if (uVar3 == 0) {
            uVar4 = UISystem_WindowManager(extraout_XMM0_Da,unaff_RDI + 0xd8);
            if (((int)uVar4 == 0) &&
               (uVar4 = UISystem_WindowManager(extraout_XMM0_Da_00,unaff_RDI + 0xdc), (int)uVar4 == 0)) {
              uVar3 = 0x1c;
              if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                lVar6 = *unaff_RBX;
                *(bool *)(unaff_RBP + 0x38) = *(int *)(unaff_RDI + 0xe8) == 0;
                uVar4 = (**(code **)**(uint64_t **)(lVar6 + 8))
                                  (*(uint64_t **)(lVar6 + 8),unaff_RBP + 0x38,1);
                uVar10 = extraout_XMM0_Da_02;
              }
              else {
                uVar4 = 0x1c;
                uVar10 = extraout_XMM0_Da_01;
              }
              if (((int)uVar4 == 0) &&
                 (uVar4 = UISystem_WindowManager(uVar10,unaff_RDI + 0xe4), (int)uVar4 == 0)) {
                uVar2 = *(int *)(unaff_RDI + 0x88) * 2;
                puVar1 = *(uint64_t **)(*unaff_RBX + 8);
                if ((uVar2 | 1) < 0x8000) {
                  *(short *)(unaff_RBP + 0x38) = (short)(uVar2 | 1);
                  uVar7 = 2;
                  lVar6 = unaff_RBP + 0x38;
                }
                else {
                  uVar7 = 4;
                  lVar6 = unaff_RBP + -0x2c;
                  *(uint *)(unaff_RBP + -0x2c) =
                       (uVar2 & 0xffffc000 | 0x4000) * 2 | uVar2 & 0x7fff | 1;
                }
                uVar4 = (**(code **)*puVar1)(puVar1,lVar6,uVar7);
                if ((int)uVar4 == 0) {
                  uVar4 = *(uint64_t *)(unaff_RDI + 0x80);
                  uVar10 = 0;
                  *(int32_t *)(unaff_RBP + -0x30) = 0;
                  uVar9 = extraout_XMM0_Da_03;
                  for (; (*(uint64_t *)(unaff_RDI + 0x80) <= uVar4 &&
                         (uVar4 < (int64_t)*(int *)(unaff_RDI + 0x88) * 0x10 +
                                  *(uint64_t *)(unaff_RDI + 0x80))); uVar4 = uVar4 + 0x10) {
                    uVar5 = UltraHighFreq_ResourceLoader1(uVar9,uVar10);
                    if ((int)uVar5 != 0) {
                      return uVar5;
                    }
                    if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
                      return 0x1c;
                    }
                    uVar5 = SystemCleanupProcessor(*unaff_RBX,uVar4);
                    if ((int)uVar5 != 0) {
                      return uVar5;
                    }
                    uVar5 = UISystem_Controller(extraout_XMM0_Da_04,unaff_RBP + -0x30);
                    if ((int)uVar5 != 0) {
                      return uVar5;
                    }
                    uVar10 = *(int32_t *)(unaff_RBP + -0x30);
                    uVar9 = extraout_XMM0_Da_05;
                  }
                  if ((((((0x3b < *(uint *)(unaff_RBX + 8)) ||
                         (uVar4 = function_8de620(), uVar9 = extraout_XMM0_Da_06, (int)uVar4 == 0)) &&
                        (uVar4 = function_8a68e0(uVar9,unaff_RDI + 0xb0,0,0), (int)uVar4 == 0)) &&
                       ((uVar4 = function_8a6d00(extraout_XMM0_Da_07,unaff_RDI + 0xc0,0,0),
                        (int)uVar4 == 0 &&
                        (uVar4 = UISystem_LayoutProcessor(extraout_XMM0_Da_08,unaff_RDI + 0xe0,0x30),
                        (int)uVar4 == 0)))) &&
                      ((uVar4 = function_8a7bf0(extraout_XMM0_Da_09,unaff_RDI + 0xe8,0x34),
                       (int)uVar4 == 0 &&
                       ((uVar4 = UISystem_LayoutProcessor(extraout_XMM0_Da_10,unaff_RDI + 0xec,0x4e),
                        (int)uVar4 == 0 &&
                        (uVar4 = function_8a7bf0(extraout_XMM0_Da_11,unaff_RDI + 0xf8,0x61),
                        (int)uVar4 == 0)))))) &&
                     ((uVar10 = extraout_XMM0_Da_12, *(uint *)(unaff_RBX + 8) < 0x6b ||
                      (uVar4 = function_8a7b00(extraout_XMM0_Da_12,unaff_RDI + 0x70),
                      uVar10 = extraout_XMM0_Da_13, (int)uVar4 == 0)))) {
                    if (0x75 < *(uint *)(unaff_RBX + 8)) {
                      uVar2 = *(int *)(unaff_RDI + 0x98) * 2;
                      puVar1 = *(uint64_t **)(*unaff_RBX + 8);
                      if ((uVar2 | 1) < 0x8000) {
                        *(short *)(unaff_RBP + 0x38) = (short)(uVar2 | 1);
                        uVar7 = 2;
                        lVar6 = unaff_RBP + 0x38;
                      }
                      else {
                        uVar7 = 4;
                        lVar6 = unaff_RBP + -0x2c;
                        *(uint *)(unaff_RBP + -0x2c) =
                             (uVar2 & 0xffffc000 | 0x4000) * 2 | uVar2 & 0x7fff | 1;
                      }
                      uVar4 = (**(code **)*puVar1)(puVar1,lVar6,uVar7);
                      if ((int)uVar4 != 0) {
                        return uVar4;
                      }
                      puVar8 = *(int32_t **)(unaff_RDI + 0x90);
                      uVar9 = 0;
                      *(int32_t *)(unaff_RBP + -0x30) = 0;
                      uVar10 = extraout_XMM0_Da_14;
                      for (; (*(int32_t **)(unaff_RDI + 0x90) <= puVar8 &&
                             (puVar8 < *(int32_t **)(unaff_RDI + 0x90) +
                                       (int64_t)*(int *)(unaff_RDI + 0x98) * 2));
                          puVar8 = puVar8 + 2) {
                        uVar4 = UltraHighFreq_ResourceLoader1(uVar10,uVar9);
                        if ((int)uVar4 != 0) {
                          return uVar4;
                        }
                        if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
                          return 0x1c;
                        }
                        lVar6 = *unaff_RBX;
                        *(int32_t *)(unaff_RBP + -0x28) = *puVar8;
                        puVar1 = *(uint64_t **)(lVar6 + 8);
                        uVar4 = (**(code **)*puVar1)(puVar1,unaff_RBP + -0x28,4);
                        if ((int)uVar4 != 0) {
                          return uVar4;
                        }
                        puVar1 = *(uint64_t **)(lVar6 + 8);
                        *(int32_t *)(unaff_RBP + -0x24) = puVar8[1];
                        uVar4 = (**(code **)*puVar1)(puVar1,unaff_RBP + -0x24,4);
                        if ((int)uVar4 != 0) {
                          return uVar4;
                        }
                        uVar4 = UISystem_Controller(extraout_XMM0_Da_15,unaff_RBP + -0x30);
                        if ((int)uVar4 != 0) {
                          return uVar4;
                        }
                        uVar9 = *(int32_t *)(unaff_RBP + -0x30);
                        uVar10 = extraout_XMM0_Da_16;
                      }
                    }
                    if ((*(uint *)(unaff_RBX + 8) < 0x83) ||
                       (uVar4 = function_8a7b00(uVar10,unaff_RDI + 0xa0), uVar10 = extraout_XMM0_Da_17
                       , (int)uVar4 == 0)) {
                      if (*(uint *)(unaff_RBX + 8) < 0x89) {
                        uVar3 = 0;
                      }
                      else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                        lVar6 = *unaff_RBX;
                        *(int32_t *)(unaff_RBP + 0x38) = *(int32_t *)(unaff_RDI + 0xf0);
                        uVar3 = (**(code **)**(uint64_t **)(lVar6 + 8))
                                          (*(uint64_t **)(lVar6 + 8),unaff_RBP + 0x38,4);
                        uVar10 = extraout_XMM0_Da_18;
                      }
                      if (uVar3 == 0) {
                        uVar4 = UISystem_LayoutProcessor(uVar10,unaff_RDI + 0xf4,0x89);
                        if ((int)uVar4 == 0) {
// WARNING: Subroutine does not return
                          SystemThreadManager(extraout_XMM0_Da_19,unaff_RBP + -0x20);
                        }
                      }
                      else {
                        uVar4 = (uint64_t)uVar3;
                      }
                    }
                  }
                }
              }
            }
            return uVar4;
          }
        }
      }
    }
  }
  return uVar4;
}
uint64_t function_8a3e1c(void)
{
  uint64_t *puVar1;
  uint uVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  uint64_t uVar7;
  int32_t *puVar8;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t uVar9;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  int32_t extraout_XMM0_Da_06;
  int32_t extraout_XMM0_Da_07;
  int32_t extraout_XMM0_Da_08;
  int32_t extraout_XMM0_Da_09;
  int32_t extraout_XMM0_Da_10;
  int32_t extraout_XMM0_Da_11;
  int32_t extraout_XMM0_Da_12;
  int32_t extraout_XMM0_Da_13;
  int32_t extraout_XMM0_Da_14;
  int32_t uVar10;
  int32_t extraout_XMM0_Da_15;
  int32_t extraout_XMM0_Da_16;
  int32_t extraout_XMM0_Da_17;
  int32_t extraout_XMM0_Da_18;
  int32_t extraout_XMM0_Da_19;
  uVar3 = SystemCleanupProcessor(*unaff_RBX,unaff_RDI + 0x50);
  if (uVar3 != 0) {
    return (uint64_t)uVar3;
  }
  uVar4 = UISystem_WindowManager(extraout_XMM0_Da,unaff_RDI + 0xd8);
  if (((int)uVar4 == 0) &&
     (uVar4 = UISystem_WindowManager(extraout_XMM0_Da_00,unaff_RDI + 0xdc), (int)uVar4 == 0)) {
    uVar3 = 0x1c;
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      lVar6 = *unaff_RBX;
      *(bool *)(unaff_RBP + 0x38) = *(int *)(unaff_RDI + 0xe8) == 0;
      uVar4 = (**(code **)**(uint64_t **)(lVar6 + 8))
                        (*(uint64_t **)(lVar6 + 8),unaff_RBP + 0x38,1);
      uVar10 = extraout_XMM0_Da_02;
    }
    else {
      uVar4 = 0x1c;
      uVar10 = extraout_XMM0_Da_01;
    }
    if (((int)uVar4 == 0) && (uVar4 = UISystem_WindowManager(uVar10,unaff_RDI + 0xe4), (int)uVar4 == 0)) {
      uVar2 = *(int *)(unaff_RDI + 0x88) * 2;
      puVar1 = *(uint64_t **)(*unaff_RBX + 8);
      if ((uVar2 | 1) < 0x8000) {
        *(short *)(unaff_RBP + 0x38) = (short)(uVar2 | 1);
        uVar7 = 2;
        lVar6 = unaff_RBP + 0x38;
      }
      else {
        uVar7 = 4;
        lVar6 = unaff_RBP + -0x2c;
        *(uint *)(unaff_RBP + -0x2c) = (uVar2 & 0xffffc000 | 0x4000) * 2 | uVar2 & 0x7fff | 1;
      }
      uVar4 = (**(code **)*puVar1)(puVar1,lVar6,uVar7);
      if ((int)uVar4 == 0) {
        uVar4 = *(uint64_t *)(unaff_RDI + 0x80);
        uVar10 = 0;
        *(int32_t *)(unaff_RBP + -0x30) = 0;
        uVar9 = extraout_XMM0_Da_03;
        for (; (*(uint64_t *)(unaff_RDI + 0x80) <= uVar4 &&
               (uVar4 < (int64_t)*(int *)(unaff_RDI + 0x88) * 0x10 +
                        *(uint64_t *)(unaff_RDI + 0x80))); uVar4 = uVar4 + 0x10) {
          uVar5 = UltraHighFreq_ResourceLoader1(uVar9,uVar10);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
            return 0x1c;
          }
          uVar5 = SystemCleanupProcessor(*unaff_RBX,uVar4);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          uVar5 = UISystem_Controller(extraout_XMM0_Da_04,unaff_RBP + -0x30);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          uVar10 = *(int32_t *)(unaff_RBP + -0x30);
          uVar9 = extraout_XMM0_Da_05;
        }
        if ((((((0x3b < *(uint *)(unaff_RBX + 8)) ||
               (uVar4 = function_8de620(), uVar9 = extraout_XMM0_Da_06, (int)uVar4 == 0)) &&
              (uVar4 = function_8a68e0(uVar9,unaff_RDI + 0xb0,0,0), (int)uVar4 == 0)) &&
             ((uVar4 = function_8a6d00(extraout_XMM0_Da_07,unaff_RDI + 0xc0,0,0), (int)uVar4 == 0 &&
              (uVar4 = UISystem_LayoutProcessor(extraout_XMM0_Da_08,unaff_RDI + 0xe0,0x30), (int)uVar4 == 0))))
            && ((uVar4 = function_8a7bf0(extraout_XMM0_Da_09,unaff_RDI + 0xe8,0x34), (int)uVar4 == 0
                && ((uVar4 = UISystem_LayoutProcessor(extraout_XMM0_Da_10,unaff_RDI + 0xec,0x4e),
                    (int)uVar4 == 0 &&
                    (uVar4 = function_8a7bf0(extraout_XMM0_Da_11,unaff_RDI + 0xf8,0x61),
                    (int)uVar4 == 0)))))) &&
           ((uVar10 = extraout_XMM0_Da_12, *(uint *)(unaff_RBX + 8) < 0x6b ||
            (uVar4 = function_8a7b00(extraout_XMM0_Da_12,unaff_RDI + 0x70),
            uVar10 = extraout_XMM0_Da_13, (int)uVar4 == 0)))) {
          if (0x75 < *(uint *)(unaff_RBX + 8)) {
            uVar2 = *(int *)(unaff_RDI + 0x98) * 2;
            puVar1 = *(uint64_t **)(*unaff_RBX + 8);
            if ((uVar2 | 1) < 0x8000) {
              *(short *)(unaff_RBP + 0x38) = (short)(uVar2 | 1);
              uVar7 = 2;
              lVar6 = unaff_RBP + 0x38;
            }
            else {
              uVar7 = 4;
              lVar6 = unaff_RBP + -0x2c;
              *(uint *)(unaff_RBP + -0x2c) = (uVar2 & 0xffffc000 | 0x4000) * 2 | uVar2 & 0x7fff | 1;
            }
            uVar4 = (**(code **)*puVar1)(puVar1,lVar6,uVar7);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            puVar8 = *(int32_t **)(unaff_RDI + 0x90);
            uVar9 = 0;
            *(int32_t *)(unaff_RBP + -0x30) = 0;
            uVar10 = extraout_XMM0_Da_14;
            for (; (*(int32_t **)(unaff_RDI + 0x90) <= puVar8 &&
                   (puVar8 < *(int32_t **)(unaff_RDI + 0x90) +
                             (int64_t)*(int *)(unaff_RDI + 0x98) * 2)); puVar8 = puVar8 + 2) {
              uVar4 = UltraHighFreq_ResourceLoader1(uVar10,uVar9);
              if ((int)uVar4 != 0) {
                return uVar4;
              }
              if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
                return 0x1c;
              }
              lVar6 = *unaff_RBX;
              *(int32_t *)(unaff_RBP + -0x28) = *puVar8;
              puVar1 = *(uint64_t **)(lVar6 + 8);
              uVar4 = (**(code **)*puVar1)(puVar1,unaff_RBP + -0x28,4);
              if ((int)uVar4 != 0) {
                return uVar4;
              }
              puVar1 = *(uint64_t **)(lVar6 + 8);
              *(int32_t *)(unaff_RBP + -0x24) = puVar8[1];
              uVar4 = (**(code **)*puVar1)(puVar1,unaff_RBP + -0x24,4);
              if ((int)uVar4 != 0) {
                return uVar4;
              }
              uVar4 = UISystem_Controller(extraout_XMM0_Da_15,unaff_RBP + -0x30);
              if ((int)uVar4 != 0) {
                return uVar4;
              }
              uVar9 = *(int32_t *)(unaff_RBP + -0x30);
              uVar10 = extraout_XMM0_Da_16;
            }
          }
          if ((*(uint *)(unaff_RBX + 8) < 0x83) ||
             (uVar4 = function_8a7b00(uVar10,unaff_RDI + 0xa0), uVar10 = extraout_XMM0_Da_17,
             (int)uVar4 == 0)) {
            if (*(uint *)(unaff_RBX + 8) < 0x89) {
              uVar3 = 0;
            }
            else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
              lVar6 = *unaff_RBX;
              *(int32_t *)(unaff_RBP + 0x38) = *(int32_t *)(unaff_RDI + 0xf0);
              uVar3 = (**(code **)**(uint64_t **)(lVar6 + 8))
                                (*(uint64_t **)(lVar6 + 8),unaff_RBP + 0x38,4);
              uVar10 = extraout_XMM0_Da_18;
            }
            if (uVar3 == 0) {
              uVar4 = UISystem_LayoutProcessor(uVar10,unaff_RDI + 0xf4,0x89);
              if ((int)uVar4 == 0) {
// WARNING: Subroutine does not return
                SystemThreadManager(extraout_XMM0_Da_19,unaff_RBP + -0x20);
              }
            }
            else {
              uVar4 = (uint64_t)uVar3;
            }
          }
        }
      }
    }
  }
  return uVar4;
}
uint64_t function_8a3e40(int32_t param_1)
{
  uint64_t *puVar1;
  uint uVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  uint64_t uVar7;
  int32_t *puVar8;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t uVar9;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  int32_t extraout_XMM0_Da_06;
  int32_t extraout_XMM0_Da_07;
  int32_t extraout_XMM0_Da_08;
  int32_t extraout_XMM0_Da_09;
  int32_t extraout_XMM0_Da_10;
  int32_t extraout_XMM0_Da_11;
  int32_t extraout_XMM0_Da_12;
  int32_t extraout_XMM0_Da_13;
  int32_t uVar10;
  int32_t extraout_XMM0_Da_14;
  int32_t extraout_XMM0_Da_15;
  int32_t extraout_XMM0_Da_16;
  int32_t extraout_XMM0_Da_17;
  int32_t extraout_XMM0_Da_18;
  uVar4 = UISystem_WindowManager(param_1,unaff_RDI + 0xd8);
  if (((int)uVar4 == 0) &&
     (uVar4 = UISystem_WindowManager(extraout_XMM0_Da,unaff_RDI + 0xdc), (int)uVar4 == 0)) {
    uVar3 = 0x1c;
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      lVar6 = *unaff_RBX;
      *(bool *)(unaff_RBP + 0x38) = *(int *)(unaff_RDI + 0xe8) == 0;
      uVar4 = (**(code **)**(uint64_t **)(lVar6 + 8))
                        (*(uint64_t **)(lVar6 + 8),unaff_RBP + 0x38,1);
      uVar10 = extraout_XMM0_Da_01;
    }
    else {
      uVar4 = 0x1c;
      uVar10 = extraout_XMM0_Da_00;
    }
    if (((int)uVar4 == 0) && (uVar4 = UISystem_WindowManager(uVar10,unaff_RDI + 0xe4), (int)uVar4 == 0)) {
      uVar2 = *(int *)(unaff_RDI + 0x88) * 2;
      puVar1 = *(uint64_t **)(*unaff_RBX + 8);
      if ((uVar2 | 1) < 0x8000) {
        *(short *)(unaff_RBP + 0x38) = (short)(uVar2 | 1);
        uVar7 = 2;
        lVar6 = unaff_RBP + 0x38;
      }
      else {
        uVar7 = 4;
        lVar6 = unaff_RBP + -0x2c;
        *(uint *)(unaff_RBP + -0x2c) = (uVar2 & 0xffffc000 | 0x4000) * 2 | uVar2 & 0x7fff | 1;
      }
      uVar4 = (**(code **)*puVar1)(puVar1,lVar6,uVar7);
      if ((int)uVar4 == 0) {
        uVar4 = *(uint64_t *)(unaff_RDI + 0x80);
        uVar10 = 0;
        *(int32_t *)(unaff_RBP + -0x30) = 0;
        uVar9 = extraout_XMM0_Da_02;
        for (; (*(uint64_t *)(unaff_RDI + 0x80) <= uVar4 &&
               (uVar4 < (int64_t)*(int *)(unaff_RDI + 0x88) * 0x10 +
                        *(uint64_t *)(unaff_RDI + 0x80))); uVar4 = uVar4 + 0x10) {
          uVar5 = UltraHighFreq_ResourceLoader1(uVar9,uVar10);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
            return 0x1c;
          }
          uVar5 = SystemCleanupProcessor(*unaff_RBX,uVar4);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          uVar5 = UISystem_Controller(extraout_XMM0_Da_03,unaff_RBP + -0x30);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          uVar10 = *(int32_t *)(unaff_RBP + -0x30);
          uVar9 = extraout_XMM0_Da_04;
        }
        if ((((((0x3b < *(uint *)(unaff_RBX + 8)) ||
               (uVar4 = function_8de620(), uVar9 = extraout_XMM0_Da_05, (int)uVar4 == 0)) &&
              (uVar4 = function_8a68e0(uVar9,unaff_RDI + 0xb0,0,0), (int)uVar4 == 0)) &&
             ((uVar4 = function_8a6d00(extraout_XMM0_Da_06,unaff_RDI + 0xc0,0,0), (int)uVar4 == 0 &&
              (uVar4 = UISystem_LayoutProcessor(extraout_XMM0_Da_07,unaff_RDI + 0xe0,0x30), (int)uVar4 == 0))))
            && ((uVar4 = function_8a7bf0(extraout_XMM0_Da_08,unaff_RDI + 0xe8,0x34), (int)uVar4 == 0
                && ((uVar4 = UISystem_LayoutProcessor(extraout_XMM0_Da_09,unaff_RDI + 0xec,0x4e),
                    (int)uVar4 == 0 &&
                    (uVar4 = function_8a7bf0(extraout_XMM0_Da_10,unaff_RDI + 0xf8,0x61),
                    (int)uVar4 == 0)))))) &&
           ((uVar10 = extraout_XMM0_Da_11, *(uint *)(unaff_RBX + 8) < 0x6b ||
            (uVar4 = function_8a7b00(extraout_XMM0_Da_11,unaff_RDI + 0x70),
            uVar10 = extraout_XMM0_Da_12, (int)uVar4 == 0)))) {
          if (0x75 < *(uint *)(unaff_RBX + 8)) {
            uVar2 = *(int *)(unaff_RDI + 0x98) * 2;
            puVar1 = *(uint64_t **)(*unaff_RBX + 8);
            if ((uVar2 | 1) < 0x8000) {
              *(short *)(unaff_RBP + 0x38) = (short)(uVar2 | 1);
              uVar7 = 2;
              lVar6 = unaff_RBP + 0x38;
            }
            else {
              uVar7 = 4;
              lVar6 = unaff_RBP + -0x2c;
              *(uint *)(unaff_RBP + -0x2c) = (uVar2 & 0xffffc000 | 0x4000) * 2 | uVar2 & 0x7fff | 1;
            }
            uVar4 = (**(code **)*puVar1)(puVar1,lVar6,uVar7);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            puVar8 = *(int32_t **)(unaff_RDI + 0x90);
            uVar9 = 0;
            *(int32_t *)(unaff_RBP + -0x30) = 0;
            uVar10 = extraout_XMM0_Da_13;
            for (; (*(int32_t **)(unaff_RDI + 0x90) <= puVar8 &&
                   (puVar8 < *(int32_t **)(unaff_RDI + 0x90) +
                             (int64_t)*(int *)(unaff_RDI + 0x98) * 2)); puVar8 = puVar8 + 2) {
              uVar4 = UltraHighFreq_ResourceLoader1(uVar10,uVar9);
              if ((int)uVar4 != 0) {
                return uVar4;
              }
              if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
                return 0x1c;
              }
              lVar6 = *unaff_RBX;
              *(int32_t *)(unaff_RBP + -0x28) = *puVar8;
              puVar1 = *(uint64_t **)(lVar6 + 8);
              uVar4 = (**(code **)*puVar1)(puVar1,unaff_RBP + -0x28,4);
              if ((int)uVar4 != 0) {
                return uVar4;
              }
              puVar1 = *(uint64_t **)(lVar6 + 8);
              *(int32_t *)(unaff_RBP + -0x24) = puVar8[1];
              uVar4 = (**(code **)*puVar1)(puVar1,unaff_RBP + -0x24,4);
              if ((int)uVar4 != 0) {
                return uVar4;
              }
              uVar4 = UISystem_Controller(extraout_XMM0_Da_14,unaff_RBP + -0x30);
              if ((int)uVar4 != 0) {
                return uVar4;
              }
              uVar9 = *(int32_t *)(unaff_RBP + -0x30);
              uVar10 = extraout_XMM0_Da_15;
            }
          }
          if ((*(uint *)(unaff_RBX + 8) < 0x83) ||
             (uVar4 = function_8a7b00(uVar10,unaff_RDI + 0xa0), uVar10 = extraout_XMM0_Da_16,
             (int)uVar4 == 0)) {
            if (*(uint *)(unaff_RBX + 8) < 0x89) {
              uVar3 = 0;
            }
            else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
              lVar6 = *unaff_RBX;
              *(int32_t *)(unaff_RBP + 0x38) = *(int32_t *)(unaff_RDI + 0xf0);
              uVar3 = (**(code **)**(uint64_t **)(lVar6 + 8))
                                (*(uint64_t **)(lVar6 + 8),unaff_RBP + 0x38,4);
              uVar10 = extraout_XMM0_Da_17;
            }
            if (uVar3 == 0) {
              uVar4 = UISystem_LayoutProcessor(uVar10,unaff_RDI + 0xf4,0x89);
              if ((int)uVar4 == 0) {
// WARNING: Subroutine does not return
                SystemThreadManager(extraout_XMM0_Da_18,unaff_RBP + -0x20);
              }
            }
            else {
              uVar4 = (uint64_t)uVar3;
            }
          }
        }
      }
    }
  }
  return uVar4;
}