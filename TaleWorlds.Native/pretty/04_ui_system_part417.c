/* 此文件包含部分未处理的原始函数，这些函数将在后续处理中完成语义化替换 */
#include "TaleWorlds.Native.Split.h"
// 04_ui_system_part417.c - 16 个函数
// 函数: void SystemConfigManager(int64_t *param_1,int32_t *param_2)
void SystemConfigManager(int64_t *param_1,int32_t *param_2)
{
  int iVar1;
  uint astack_special_x_8 [2];
  int32_t astack_special_x_18 [4];
  if (*param_1 == 0) {
    iVar1 = 0x1c;
  }
  else {
    if (param_1[2] != 0) {
      astack_special_x_8[0] = 0;
      iVar1 = Function_49365015(*param_1,astack_special_x_8);
      if (iVar1 != 0) {
        return;
      }
      if ((uint64_t)param_1[2] < (uint64_t)astack_special_x_8[0] + 4) {
        iVar1 = 0x11;
        goto LAB_18089962f;
      }
    }
    iVar1 = SystemDataAnalyzer(*param_1,astack_special_x_18,1,4,0);
  }
LAB_18089962f:
  if (iVar1 == 0) {
    *param_2 = astack_special_x_18[0];
  }
  return;
}
uint64_t NetworkProtocol_99650(int64_t *param_1,int64_t *param_2)
{
  uint64_t uVar1;
  int iVar2;
  int aiStackX_8 [2];
  uint astack_special_x_10 [2];
  iVar2 = 0;
  aiStackX_8[0] = 0;
  if (*param_1 == 0) {
    uVar1 = 0x1c;
  }
  else {
    if (param_1[2] != 0) {
      astack_special_x_10[0] = 0;
      uVar1 = Function_49365015(*param_1,astack_special_x_10);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if ((uint64_t)param_1[2] < (uint64_t)astack_special_x_10[0] + 4) {
        uVar1 = 0x11;
        goto LAB_1808996c5;
      }
    }
    uVar1 = SystemDataAnalyzer(*param_1,aiStackX_8,1,4,0);
  }
LAB_1808996c5:
  if ((int)uVar1 == 0) {
    if (aiStackX_8[0] < 0) {
      return 0xd;
    }
    uVar1 = NetworkProtocol_af2e0(param_2,aiStackX_8[0]);
    if ((int)uVar1 == 0) {
      if (0 < aiStackX_8[0]) {
        do {
          uVar1 = NetworkProtocol_98fc0(param_1,*param_2 + (int64_t)iVar2 * 0x14);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < aiStackX_8[0]);
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}
uint64_t NetworkProtocol_99740(uint64_t param_1,int32_t *param_2)
{
  uint64_t uVar1;
  uVar1 = SystemErrorHandler(param_1,param_2,4);
  if (((int)uVar1 == 0) && (uVar1 = SystemErrorHandler(param_1,param_2 + 1,4), (int)uVar1 == 0x11)) {
    param_2[1] = *param_2;
    return 0;
  }
  return uVar1;
}
uint64_t NetworkProtocol_99763(void)
{
  uint64_t uVar1;
  int32_t *unaff_RBX;
  uVar1 = SystemErrorHandler();
  if ((int)uVar1 != 0x11) {
    return uVar1;
  }
  unaff_RBX[1] = *unaff_RBX;
  return 0;
}
// 函数: void NetworkProtocol_99790(void)
void NetworkProtocol_99790(void)
{
  return;
}
// 函数: void NetworkProtocol_99799(void)
void NetworkProtocol_99799(void)
{
  return;
}
// 函数: void NetworkProtocol_997b0(uint64_t param_1,int64_t param_2)
void NetworkProtocol_997b0(uint64_t param_1,int64_t param_2)
{
  int iVar1;
  iVar1 = SystemErrorHandler(param_1,param_2,4);
  if (iVar1 == 0) {
    SystemErrorHandler(param_1,param_2 + 4,4);
  }
  return;
}
uint64_t NetworkProtocol_997f0(uint64_t param_1,int64_t *param_2)
{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  int64_t lVar4;
  int iVar5;
  int aiStackX_18 [2];
  aiStackX_18[0] = 0;
  uVar2 = SystemCore_Manager(param_1,aiStackX_18);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  lVar4 = (int64_t)aiStackX_18[0];
  if (aiStackX_18[0] == 0) {
    SystemCore_MemoryManager(param_2);
  }
  else {
    iVar5 = aiStackX_18[0] + 1;
    uVar3 = (int)*(uint *)((int64_t)param_2 + 0xc) >> 0x1f;
    if (((int)((*(uint *)((int64_t)param_2 + 0xc) ^ uVar3) - uVar3) < iVar5) &&
       (uVar2 = SystemDeallocationProcessor(param_2,iVar5), (int)uVar2 != 0)) {
      return uVar2;
    }
    iVar1 = (int)param_2[1];
    if (iVar1 < iVar5) {
// WARNING: Subroutine does not return
      memset((int64_t)iVar1 + *param_2,0,(int64_t)(iVar5 - iVar1));
    }
    *(int *)(param_2 + 1) = iVar5;
    uVar2 = SystemErrorHandler(param_1,*param_2,lVar4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *(int8_t *)(lVar4 + *param_2) = 0;
  }
  return 0;
}
uint64_t NetworkProtocol_99816(void)
{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  int64_t *unaff_RBX;
  int iVar4;
  int local_var_40;
  if (local_var_40 == 0) {
    SystemCore_MemoryManager();
  }
  else {
    iVar4 = local_var_40 + 1;
    uVar3 = (int)*(uint *)((int64_t)unaff_RBX + 0xc) >> 0x1f;
    if (((int)((*(uint *)((int64_t)unaff_RBX + 0xc) ^ uVar3) - uVar3) < iVar4) &&
       (uVar2 = SystemDeallocationProcessor(), (int)uVar2 != 0)) {
      return uVar2;
    }
    iVar1 = (int)unaff_RBX[1];
    if (iVar1 < iVar4) {
// WARNING: Subroutine does not return
      memset((int64_t)iVar1 + *unaff_RBX,0,(int64_t)(iVar4 - iVar1));
    }
    *(int *)(unaff_RBX + 1) = iVar4;
    uVar2 = SystemErrorHandler();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *(int8_t *)((int64_t)local_var_40 + *unaff_RBX) = 0;
  }
  return 0;
}
// 函数: void NetworkProtocol_99891(void)
void NetworkProtocol_99891(void)
{
  return;
}
uint64_t NetworkProtocol_998a0(int64_t param_1,int64_t *param_2)
{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int aiStackX_8 [2];
  iVar1 = (int)param_2[1];
  aiStackX_8[0] = iVar1;
  uVar3 = (**(code **)**(uint64_t **)(param_1 + 8))(*(uint64_t **)(param_1 + 8),aiStackX_8,4);
  if ((int)uVar3 == 0) {
    if (0 < iVar1) {
      lVar4 = 0;
      lVar5 = lVar4;
      do {
        lVar2 = *param_2;
        uVar3 = SystemCleanupProcessor(param_1,lVar2 + lVar5);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        aiStackX_8[0] = *(int *)(lVar2 + lVar5 + 0x10);
        uVar3 = (**(code **)**(uint64_t **)(param_1 + 8))
                          (*(uint64_t **)(param_1 + 8),aiStackX_8,4);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        lVar4 = lVar4 + 1;
        lVar5 = lVar5 + 0x14;
      } while (lVar4 < iVar1);
    }
    uVar3 = 0;
  }
  return uVar3;
}
// 函数: void NetworkProtocol_99950(int64_t param_1,int32_t *param_2)
void NetworkProtocol_99950(int64_t param_1,int32_t *param_2)
{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  uint64_t stack_special_x_8;
  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,*param_2);
  iVar1 = (**(code **)**(uint64_t **)(param_1 + 8))(*(uint64_t **)(param_1 + 8),&stack_special_x_8,4);
  if (iVar1 == 0) {
    stack_special_x_8 = *(uint64_t *)(param_2 + 2);
    iVar1 = (**(code **)**(uint64_t **)(param_1 + 8))(*(uint64_t **)(param_1 + 8),&stack_special_x_8,8);
    if ((iVar1 == 0) && (iVar1 = NetworkProtocol_ac750(param_1,param_2 + 4), iVar1 == 0)) {
      iVar1 = param_2[10];
      stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,iVar1);
      iVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                        (*(uint64_t **)(param_1 + 8),&stack_special_x_8,4);
      uVar6 = 0;
      if (iVar2 == 0) {
        uVar4 = uVar6;
        if (0 < iVar1) {
          do {
            iVar2 = NetworkProtocol_99c60(param_1,(int64_t)(int)uVar4 * 0x6c + *(int64_t *)(param_2 + 8));
            if (iVar2 != 0) {
              return;
            }
            uVar3 = (int)uVar4 + 1;
            uVar4 = (uint64_t)uVar3;
          } while ((int)uVar3 < iVar1);
        }
        iVar1 = param_2[0xe];
        stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,iVar1);
        iVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                          (*(uint64_t **)(param_1 + 8),&stack_special_x_8,4);
        if (iVar2 == 0) {
          uVar4 = uVar6;
          if (0 < iVar1) {
            do {
              iVar2 = SystemCleanupProcessor(param_1,(int64_t)(int)uVar4 * 0x10 +
                                            *(int64_t *)(param_2 + 0xc));
              if (iVar2 != 0) {
                return;
              }
              uVar3 = (int)uVar4 + 1;
              uVar4 = (uint64_t)uVar3;
            } while ((int)uVar3 < iVar1);
          }
          iVar1 = param_2[0x12];
          stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,iVar1);
          iVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                            (*(uint64_t **)(param_1 + 8),&stack_special_x_8,4);
          if (iVar2 == 0) {
            uVar4 = uVar6;
            if (0 < iVar1) {
              do {
                stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,
                                     *(int32_t *)(*(int64_t *)(param_2 + 0x10) + uVar4 * 4));
                iVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                                  (*(uint64_t **)(param_1 + 8),&stack_special_x_8,4);
                if (iVar2 != 0) {
                  return;
                }
                uVar4 = uVar4 + 1;
              } while ((int64_t)uVar4 < (int64_t)iVar1);
            }
            iVar1 = param_2[0x16];
            stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,iVar1);
            iVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                              (*(uint64_t **)(param_1 + 8),&stack_special_x_8,4);
            if (iVar2 == 0) {
              uVar4 = uVar6;
              uVar8 = uVar6;
              if (0 < iVar1) {
                do {
                  lVar5 = *(int64_t *)(param_2 + 0x14) + uVar4;
                  iVar2 = SystemCleanupProcessor(param_1,lVar5);
                  if (iVar2 != 0) {
                    return;
                  }
                  uVar3 = *(uint *)(lVar5 + 0x10);
                  if (uVar3 < 0x8000) {
                    stack_special_x_8 = CONCAT62(stack_special_x_8._2_6_,(short)uVar3);
                    uVar7 = 2;
                  }
                  else {
                    uVar7 = 4;
                    stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,
                                         (uVar3 & 0xffffc000 | 0x4000) * 2 | uVar3 & 0x7fff);
                  }
                  iVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                                    (*(uint64_t **)(param_1 + 8),&stack_special_x_8,uVar7);
                  if (iVar2 != 0) {
                    return;
                  }
                  iVar2 = ScriptSystem_Interpreter(param_1,lVar5 + 0x14);
                  if (iVar2 != 0) {
                    return;
                  }
                  uVar8 = uVar8 + 1;
                  uVar4 = uVar4 + 0x18;
                } while ((int64_t)uVar8 < (int64_t)iVar1);
              }
              iVar1 = NetworkProtocol_aca30(param_1,param_2 + 0x18);
              if (iVar1 == 0) {
                iVar1 = param_2[0x1e];
                stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,iVar1);
                iVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                                  (*(uint64_t **)(param_1 + 8),&stack_special_x_8,4);
                if (iVar2 == 0) {
                  if (0 < iVar1) {
                    do {
                      lVar5 = *(int64_t *)(param_2 + 0x1c);
                      stack_special_x_8._0_4_ = *(int32_t *)(lVar5 + uVar6 * 8);
                      iVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                                        (*(uint64_t **)(param_1 + 8),&stack_special_x_8,4);
                      if (iVar2 != 0) {
                        return;
                      }
                      stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,*(int32_t *)(lVar5 + 4 + uVar6 * 8));
                      iVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                                        (*(uint64_t **)(param_1 + 8),&stack_special_x_8,4);
                      if (iVar2 != 0) {
                        return;
                      }
                      uVar6 = uVar6 + 1;
                    } while ((int64_t)uVar6 < (int64_t)iVar1);
                  }
                  stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,param_2[0x20]);
                  (**(code **)**(uint64_t **)(param_1 + 8))
                            (*(uint64_t **)(param_1 + 8),&stack_special_x_8,4);
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}
// 函数: void NetworkProtocol_999c1(uint64_t *param_1,uint64_t param_2)
void NetworkProtocol_999c1(uint64_t *param_1,uint64_t param_2)
{
  uint64_t *puVar1;
  int iVar2;
  int iVar3;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t unaff_R14;
  uint64_t uVar8;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  int32_t uVar9;
  iVar3 = *(int *)(unaff_R14 + 0x28);
  *(int *)(unaff_RBP + 0x20) = iVar3;
  iVar2 = (**(code **)*param_1)(param_1,param_2,4);
  uVar7 = 0;
  if (iVar2 == 0) {
    uVar5 = uVar7;
    uVar9 = extraout_XMM0_Da;
    if (0 < iVar3) {
      do {
        iVar2 = NetworkProtocol_99c60(uVar9,(int64_t)(int)uVar5 * 0x6c + *(int64_t *)(unaff_R14 + 0x20));
        if (iVar2 != 0) {
          return;
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (uint64_t)uVar4;
        uVar9 = extraout_XMM0_Da_00;
      } while ((int)uVar4 < iVar3);
    }
    puVar1 = *(uint64_t **)(unaff_RBX + 8);
    iVar3 = *(int *)(unaff_R14 + 0x38);
    *(int *)(unaff_RBP + 0x20) = iVar3;
    iVar2 = (**(code **)*puVar1)(puVar1,unaff_RBP + 0x20,4);
    if (iVar2 == 0) {
      uVar5 = uVar7;
      uVar9 = extraout_XMM0_Da_01;
      if (0 < iVar3) {
        do {
          iVar2 = SystemCleanupProcessor(uVar9,(int64_t)(int)uVar5 * 0x10 + *(int64_t *)(unaff_R14 + 0x30))
          ;
          if (iVar2 != 0) {
            return;
          }
          uVar4 = (int)uVar5 + 1;
          uVar5 = (uint64_t)uVar4;
          uVar9 = extraout_XMM0_Da_02;
        } while ((int)uVar4 < iVar3);
      }
      puVar1 = *(uint64_t **)(unaff_RBX + 8);
      iVar3 = *(int *)(unaff_R14 + 0x48);
      *(int *)(unaff_RBP + 0x20) = iVar3;
      iVar2 = (**(code **)*puVar1)(puVar1,unaff_RBP + 0x20,4);
      if (iVar2 == 0) {
        uVar5 = uVar7;
        if (0 < iVar3) {
          do {
            puVar1 = *(uint64_t **)(unaff_RBX + 8);
            *(int32_t *)(unaff_RBP + 0x20) =
                 *(int32_t *)(*(int64_t *)(unaff_R14 + 0x40) + uVar5 * 4);
            iVar2 = (**(code **)*puVar1)(puVar1,unaff_RBP + 0x20,4);
            if (iVar2 != 0) {
              return;
            }
            uVar5 = uVar5 + 1;
          } while ((int64_t)uVar5 < (int64_t)iVar3);
        }
        puVar1 = *(uint64_t **)(unaff_RBX + 8);
        iVar3 = *(int *)(unaff_R14 + 0x58);
        *(int *)(unaff_RBP + 0x20) = iVar3;
        iVar2 = (**(code **)*puVar1)(puVar1,unaff_RBP + 0x20,4);
        if (iVar2 == 0) {
          uVar5 = uVar7;
          uVar8 = uVar7;
          uVar9 = extraout_XMM0_Da_03;
          if (0 < iVar3) {
            do {
              lVar6 = *(int64_t *)(unaff_R14 + 0x50) + uVar5;
              iVar2 = SystemCleanupProcessor(uVar9,lVar6);
              if (iVar2 != 0) {
                return;
              }
              uVar4 = *(uint *)(lVar6 + 0x10);
              puVar1 = *(uint64_t **)(unaff_RBX + 8);
              if (uVar4 < 0x8000) {
                *(short *)(unaff_RBP + 0x20) = (short)uVar4;
                uVar9 = 2;
              }
              else {
                uVar9 = 4;
                *(uint *)(unaff_RBP + 0x20) = (uVar4 & 0xffffc000 | 0x4000) * 2 | uVar4 & 0x7fff;
              }
              iVar2 = (**(code **)*puVar1)(puVar1,unaff_RBP + 0x20,uVar9);
              if (iVar2 != 0) {
                return;
              }
              iVar2 = ScriptSystem_Interpreter(extraout_XMM0_Da_04,lVar6 + 0x14);
              if (iVar2 != 0) {
                return;
              }
              uVar8 = uVar8 + 1;
              uVar5 = uVar5 + 0x18;
              uVar9 = extraout_XMM0_Da_05;
            } while ((int64_t)uVar8 < (int64_t)iVar3);
          }
          iVar3 = NetworkProtocol_aca30(uVar9,unaff_R14 + 0x60);
          if (iVar3 == 0) {
            puVar1 = *(uint64_t **)(unaff_RBX + 8);
            iVar3 = *(int *)(unaff_R14 + 0x78);
            *(int *)(unaff_RBP + 0x20) = iVar3;
            iVar2 = (**(code **)*puVar1)(puVar1,unaff_RBP + 0x20,4);
            if (iVar2 == 0) {
              if (0 < iVar3) {
                do {
                  lVar6 = *(int64_t *)(unaff_R14 + 0x70);
                  puVar1 = *(uint64_t **)(unaff_RBX + 8);
                  *(int32_t *)(unaff_RBP + 0x20) = *(int32_t *)(lVar6 + uVar7 * 8);
                  iVar2 = (**(code **)*puVar1)(puVar1,unaff_RBP + 0x20,4);
                  if (iVar2 != 0) {
                    return;
                  }
                  puVar1 = *(uint64_t **)(unaff_RBX + 8);
                  *(int32_t *)(unaff_RBP + 0x20) = *(int32_t *)(lVar6 + 4 + uVar7 * 8);
                  iVar2 = (**(code **)*puVar1)(puVar1,unaff_RBP + 0x20,4);
                  if (iVar2 != 0) {
                    return;
                  }
                  uVar7 = uVar7 + 1;
                } while ((int64_t)uVar7 < (int64_t)iVar3);
              }
              puVar1 = *(uint64_t **)(unaff_RBX + 8);
              *(int32_t *)(unaff_RBP + 0x20) = *(int32_t *)(unaff_R14 + 0x80);
              (**(code **)*puVar1)(puVar1,unaff_RBP + 0x20,4);
            }
          }
        }
      }
    }
  }
  return;
}
// 函数: void NetworkProtocol_99ae6(uint64_t *param_1)
void NetworkProtocol_99ae6(uint64_t *param_1)
{
  uint uVar1;
  uint64_t *puVar2;
  int iVar3;
  int iVar4;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t lVar5;
  int64_t unaff_RDI;
  int64_t lVar6;
  int64_t unaff_R14;
  int64_t lVar7;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t uVar8;
  iVar3 = (**(code **)*param_1)();
  if (iVar3 == 0) {
    lVar6 = unaff_RDI;
    lVar7 = unaff_RDI;
    uVar8 = extraout_XMM0_Da;
    if (0 < (int)unaff_RSI) {
      do {
        lVar5 = *(int64_t *)(unaff_R14 + 0x50) + lVar6;
        iVar3 = SystemCleanupProcessor(uVar8,lVar5);
        if (iVar3 != 0) {
          return;
        }
        uVar1 = *(uint *)(lVar5 + 0x10);
        puVar2 = *(uint64_t **)(unaff_RBX + 8);
        if (uVar1 < 0x8000) {
          *(short *)(unaff_RBP + 0x20) = (short)uVar1;
          uVar8 = 2;
        }
        else {
          uVar8 = 4;
          *(uint *)(unaff_RBP + 0x20) = (uVar1 & 0xffffc000 | 0x4000) * 2 | uVar1 & 0x7fff;
        }
        iVar3 = (**(code **)*puVar2)(puVar2,unaff_RBP + 0x20,uVar8);
        if (iVar3 != 0) {
          return;
        }
        iVar3 = ScriptSystem_Interpreter(extraout_XMM0_Da_00,lVar5 + 0x14);
        if (iVar3 != 0) {
          return;
        }
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + 0x18;
        uVar8 = extraout_XMM0_Da_01;
      } while (lVar7 < unaff_RSI);
    }
    iVar3 = NetworkProtocol_aca30(uVar8,unaff_R14 + 0x60);
    if (iVar3 == 0) {
      puVar2 = *(uint64_t **)(unaff_RBX + 8);
      iVar3 = *(int *)(unaff_R14 + 0x78);
      *(int *)(unaff_RBP + 0x20) = iVar3;
      iVar4 = (**(code **)*puVar2)(puVar2,unaff_RBP + 0x20,4);
      if (iVar4 == 0) {
        if (0 < iVar3) {
          do {
            lVar6 = *(int64_t *)(unaff_R14 + 0x70);
            puVar2 = *(uint64_t **)(unaff_RBX + 8);
            *(int32_t *)(unaff_RBP + 0x20) = *(int32_t *)(lVar6 + unaff_RDI * 8);
            iVar4 = (**(code **)*puVar2)(puVar2,unaff_RBP + 0x20,4);
            if (iVar4 != 0) {
              return;
            }
            puVar2 = *(uint64_t **)(unaff_RBX + 8);
            *(int32_t *)(unaff_RBP + 0x20) = *(int32_t *)(lVar6 + 4 + unaff_RDI * 8);
            iVar4 = (**(code **)*puVar2)(puVar2,unaff_RBP + 0x20,4);
            if (iVar4 != 0) {
              return;
            }
            unaff_RDI = unaff_RDI + 1;
          } while (unaff_RDI < iVar3);
        }
        puVar2 = *(uint64_t **)(unaff_RBX + 8);
        *(int32_t *)(unaff_RBP + 0x20) = *(int32_t *)(unaff_R14 + 0x80);
        (**(code **)*puVar2)(puVar2,unaff_RBP + 0x20,4);
      }
    }
  }
  return;
}
// 函数: void NetworkProtocol_99c45(void)
void NetworkProtocol_99c45(void)
{
  return;
}
// 函数: void NetworkProtocol_99c54(void)
void NetworkProtocol_99c54(void)
{
  return;
}
// 函数: void NetworkProtocol_99c60(int64_t param_1,int32_t *param_2)
void NetworkProtocol_99c60(int64_t param_1,int32_t *param_2)
{
  int iVar1;
  int32_t astack_special_x_8 [2];
  astack_special_x_8[0] = *param_2;
  iVar1 = (**(code **)**(uint64_t **)(param_1 + 8))(*(uint64_t **)(param_1 + 8),astack_special_x_8,4);
  if (((((iVar1 == 0) && (iVar1 = ScriptSystem_Interpreter(param_1,param_2 + 1), iVar1 == 0)) &&
       (((*(byte *)(param_2 + 1) & 0x20) == 0 ||
        (iVar1 = NetworkProtocol_99040(param_1,param_2 + 2), iVar1 == 0)))) &&
      (((iVar1 = ResourceLoadingManager(param_1,param_2 + 0xe), iVar1 == 0 &&
        (iVar1 = ResourceLoadingManager(param_1,param_2 + 0xf), iVar1 == 0)) &&
       (iVar1 = ResourceLoadingManager(param_1,param_2 + 0x10), iVar1 == 0)))) &&
     (iVar1 = ResourceLoadingManager(param_1,param_2 + 0x11), iVar1 == 0)) {
    if ((param_2[1] & 0x100) != 0) {
      astack_special_x_8[0] = param_2[0x12];
      iVar1 = (**(code **)**(uint64_t **)(param_1 + 8))
                        (*(uint64_t **)(param_1 + 8),astack_special_x_8,4);
      if (iVar1 != 0) {
        return;
      }
      iVar1 = SystemCleanupProcessor(param_1,param_2 + 0x13);
      if (iVar1 != 0) {
        return;
      }
    }
    if (((param_2[1] & 0x800) == 0) ||
       ((iVar1 = ResourceLoadingManager(param_1,param_2 + 0x18), iVar1 == 0 &&
        (iVar1 = ResourceLoadingManager(param_1,param_2 + 0x17), iVar1 == 0)))) {
      NetworkProtocol_9a750(param_1,param_2 + 0x19);
    }
  }
  return;
}
// 函数: void NetworkProtocol_99c96(void)
void NetworkProtocol_99c96(void)
{
  int iVar1;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  int32_t local_var_30;
  iVar1 = ScriptSystem_Interpreter();
  if (iVar1 == 0) {
    if (((*(byte *)(unaff_RBX + 4) & 0x20) != 0) && (iVar1 = NetworkProtocol_99040(), iVar1 != 0)) {
      return;
    }
    iVar1 = ResourceLoadingManager();
    if ((((iVar1 == 0) && (iVar1 = ResourceLoadingManager(), iVar1 == 0)) &&
        (iVar1 = ResourceLoadingManager(), iVar1 == 0)) && (iVar1 = ResourceLoadingManager(), iVar1 == 0)) {
      if ((*(uint *)(unaff_RBX + 4) & 0x100) != 0) {
        local_var_30 = *(int32_t *)(unaff_RBX + 0x48);
        iVar1 = (**(code **)**(uint64_t **)(unaff_RDI + 8))
                          (*(uint64_t **)(unaff_RDI + 8),&local_buffer_00000030,4);
        if (iVar1 != 0) {
          return;
        }
        iVar1 = SystemCleanupProcessor();
        if (iVar1 != 0) {
          return;
        }
      }
      if ((*(uint *)(unaff_RBX + 4) & 0x800) != 0) {
        iVar1 = ResourceLoadingManager();
        if (iVar1 != 0) {
          return;
        }
        iVar1 = ResourceLoadingManager();
        if (iVar1 != 0) {
          return;
        }
      }
      NetworkProtocol_9a750();
    }
  }
  return;
}
// 函数: void NetworkProtocol_99d7f(void)
void NetworkProtocol_99d7f(void)
{
  return;
}
uint64_t NetworkProtocol_99d90(int64_t param_1,int64_t param_2)
{
  uint64_t uVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  int16_t astack_special_x_8 [4];
  astack_special_x_8[0] = CONCAT11(astack_special_x_8[0]._1_1_,*(int8_t *)(param_2 + 0x104));
  uVar1 = (**(code **)**(uint64_t **)(param_1 + 8))(*(uint64_t **)(param_1 + 8),astack_special_x_8,1);
  if ((int)uVar1 == 0) {
    iVar3 = 0;
    if (0 < *(short *)(param_2 + 0x104)) {
      pfVar2 = (float *)(param_2 + 0x84);
      do {
        fVar4 = pfVar2[-0x20] * 0.25;
        if (0.0 <= fVar4) {
          if (1.0 <= fVar4) {
            fVar4 = 1.0;
          }
        }
        else {
          fVar4 = 0.0;
        }
        astack_special_x_8[0] = (int16_t)(int)(fVar4 * 65535.0);
        uVar1 = (**(code **)**(uint64_t **)(param_1 + 8))
                          (*(uint64_t **)(param_1 + 8),astack_special_x_8,2);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        fVar4 = *pfVar2 * 0.25;
        if (0.0 <= fVar4) {
          if (1.0 <= fVar4) {
            fVar4 = 1.0;
          }
        }
        else {
          fVar4 = 0.0;
        }
        astack_special_x_8[0] = (int16_t)(int)(fVar4 * 65535.0);
        uVar1 = (**(code **)**(uint64_t **)(param_1 + 8))
                          (*(uint64_t **)(param_1 + 8),astack_special_x_8,2);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        iVar3 = iVar3 + 1;
        pfVar2 = pfVar2 + 1;
      } while (iVar3 < *(short *)(param_2 + 0x104));
    }
    uVar1 = 0;
  }
  return uVar1;
}
uint64_t NetworkProtocol_99dc7(void)
{
  uint64_t uVar1;
  float *pfVar2;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int iVar3;
  float fVar4;
  int16_t local_buffer_70;
  iVar3 = 0;
  if (0 < *(short *)(unaff_RSI + 0x104)) {
    pfVar2 = (float *)(unaff_RSI + 0x84);
    do {
      fVar4 = pfVar2[-0x20] * 0.25;
      if (0.0 <= fVar4) {
        if (1.0 <= fVar4) {
          fVar4 = 1.0;
        }
      }
      else {
        fVar4 = 0.0;
      }
      local_buffer_70 = (int16_t)(int)(fVar4 * 65535.0);
      uVar1 = (**(code **)**(uint64_t **)(unaff_RBP + 8))
                        (*(uint64_t **)(unaff_RBP + 8),&local_buffer_00000070,2);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      fVar4 = *pfVar2 * 0.25;
      if (0.0 <= fVar4) {
        if (1.0 <= fVar4) {
          fVar4 = 1.0;
        }
      }
      else {
        fVar4 = 0.0;
      }
      local_buffer_70 = (int16_t)(int)(fVar4 * 65535.0);
      uVar1 = (**(code **)**(uint64_t **)(unaff_RBP + 8))
                        (*(uint64_t **)(unaff_RBP + 8),&local_buffer_00000070,2);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      iVar3 = iVar3 + 1;
      pfVar2 = pfVar2 + 1;
    } while (iVar3 < *(short *)(unaff_RSI + 0x104));
  }
  return 0;
}
// 函数: void NetworkProtocol_99ed5(void)
void NetworkProtocol_99ed5(void)
{
  return;
}
// 函数: void SystemCleanupProcessor(int64_t param_1,int32_t *param_2)
void SystemCleanupProcessor(int64_t param_1,int32_t *param_2)
{
  int iVar1;
  int32_t astack_special_x_8 [2];
  astack_special_x_8[0] = *param_2;
  iVar1 = (**(code **)**(uint64_t **)(param_1 + 8))(*(uint64_t **)(param_1 + 8),astack_special_x_8,4);
  if (iVar1 == 0) {
    astack_special_x_8[0]._0_2_ = *(int16_t *)(param_2 + 1);
    iVar1 = (**(code **)**(uint64_t **)(param_1 + 8))(*(uint64_t **)(param_1 + 8),astack_special_x_8,2);
    if (iVar1 == 0) {
      astack_special_x_8[0] = CONCAT22(astack_special_x_8[0]._2_2_,*(int16_t *)((int64_t)param_2 + 6));
      iVar1 = (**(code **)**(uint64_t **)(param_1 + 8))
                        (*(uint64_t **)(param_1 + 8),astack_special_x_8,2);
      if (iVar1 == 0) {
        (**(code **)**(uint64_t **)(param_1 + 8))(*(uint64_t **)(param_1 + 8),param_2 + 2,8);
      }
    }
  }
  return;
}
// 函数: void NetworkProtocol_99f80(int64_t param_1,int32_t *param_2)
void NetworkProtocol_99f80(int64_t param_1,int32_t *param_2)
{
  int iVar1;
  int32_t astack_special_x_8 [2];
  astack_special_x_8[0] = *param_2;
  iVar1 = (**(code **)**(uint64_t **)(param_1 + 8))(*(uint64_t **)(param_1 + 8),astack_special_x_8,4);
  if (iVar1 == 0) {
    astack_special_x_8[0] = param_2[1];
    (**(code **)**(uint64_t **)(param_1 + 8))(*(uint64_t **)(param_1 + 8),astack_special_x_8,4);
  }
  return;
}