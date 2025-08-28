#include "TaleWorlds.Native.Split.h"

// 99_part_12_part086_sub002_sub002.c - 1 个函数

// 函数: void FUN_1808a3cd0(longlong param_1,undefined8 param_2,undefined4 param_3)
void FUN_1808a3cd0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_28 [32];
  
  iVar1 = FUN_1808ddc20(param_2,auStack_28,0,param_3);
  if (iVar1 == 0) {
    iVar1 = FUN_180899360(param_2,param_1 + 0x10);
    if (iVar1 == 0) {
      iVar1 = FUN_1808a5f10(param_2,param_1 + 0x58,0);
      if (iVar1 == 0) {
        iVar1 = FUN_18089bd70(param_1,param_2);
        if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
          FUN_1808ddf80(param_2,auStack_28);
        }
      }
    }
  }
  return;
}



ulonglong FUN_1808a3d50(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  uint auStackX_20 [2];
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [32];
  
  uVar5 = FUN_1808ddd30(param_2,auStack_38,0,param_3,0);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar4 = FUN_180899ef0(*param_2,param_1 + 0x10);
  uVar5 = (ulonglong)uVar4;
  if (uVar4 == 0) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar4 = FUN_180899ef0(*param_2,param_1 + 0x60);
    uVar5 = (ulonglong)uVar4;
    if (uVar4 == 0) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar4 = FUN_180899ef0(*param_2,param_1 + 0x30);
      uVar5 = (ulonglong)uVar4;
      if (uVar4 == 0) {
        if (*(int *)(param_2[1] + 0x18) != 0) {
          return 0x1c;
        }
        uVar4 = FUN_180899ef0(*param_2,param_1 + 0x40);
        uVar5 = (ulonglong)uVar4;
        if (uVar4 == 0) {
          if (*(int *)(param_2[1] + 0x18) != 0) {
            return 0x1c;
          }
          uVar4 = FUN_180899ef0(*param_2,param_1 + 0x50);
          uVar5 = (ulonglong)uVar4;
          if (uVar4 == 0) {
            uVar5 = FUN_180898e70(param_2,param_1 + 0xd8);
            if (((int)uVar5 == 0) &&
               (uVar5 = FUN_180898e70(param_2,param_1 + 0xdc), (int)uVar5 == 0)) {
              uVar4 = 0x1c;
              if (*(int *)(param_2[1] + 0x18) == 0) {
                auStackX_20[0] = CONCAT31(auStackX_20[0]._1_3_,*(int *)(param_1 + 0xe8) == 0);
                uVar5 = (**(code **)**(undefined8 **)(*param_2 + 8))
                                  (*(undefined8 **)(*param_2 + 8),auStackX_20,1);
              }
              else {
                uVar5 = 0x1c;
              }
              if (((int)uVar5 == 0) &&
                 (uVar5 = FUN_180898e70(param_2,param_1 + 0xe4), (int)uVar5 == 0)) {
                uVar3 = *(int *)(param_1 + 0x88) * 2;
                if ((uVar3 | 1) < 0x8000) {
                  auStackX_20[0] = CONCAT22(auStackX_20[0]._2_2_,(short)(uVar3 | 1));
                  uVar8 = 2;
                  puVar7 = auStackX_20;
                }
                else {
                  uVar8 = 4;
                  uStack_44 = (uVar3 & 0xffffc000 | 0x4000) * 2 | uVar3 & 0x7fff | 1;
                  puVar7 = &uStack_44;
                }
                uVar5 = (**(code **)**(undefined8 **)(*param_2 + 8))
                                  (*(undefined8 **)(*param_2 + 8),puVar7,uVar8);
                if ((int)uVar5 == 0) {
                  uVar5 = *(ulonglong *)(param_1 + 0x80);
                  uStack_48 = 0;
                  for (; (*(ulonglong *)(param_1 + 0x80) <= uVar5 &&
                         (uVar5 < (longlong)*(int *)(param_1 + 0x88) * 0x10 +
                                  *(ulonglong *)(param_1 + 0x80))); uVar5 = uVar5 + 0x10) {
                    uVar6 = FUN_1808ddf00(param_2,uStack_48);
                    if ((int)uVar6 != 0) {
                      return uVar6;
                    }
                    if (*(int *)(param_2[1] + 0x18) != 0) {
                      return 0x1c;
                    }
                    uVar6 = FUN_180899ef0(*param_2,uVar5);
                    if ((int)uVar6 != 0) {
                      return uVar6;
                    }
                    uVar6 = FUN_1808de160(param_2,&uStack_48);
                    if ((int)uVar6 != 0) {
                      return uVar6;
                    }
                  }
                  if ((((((0x3b < *(uint *)(param_2 + 8)) ||
                         (uVar5 = FUN_1808de620(param_2), (int)uVar5 == 0)) &&
                        (uVar5 = FUN_1808a68e0(param_2,param_1 + 0xb0,0,0), (int)uVar5 == 0)) &&
                       ((uVar5 = FUN_1808a6d00(param_2,param_1 + 0xc0,0,0), (int)uVar5 == 0 &&
                        (uVar5 = FUN_1808a7c40(param_2,param_1 + 0xe0,0x30), (int)uVar5 == 0)))) &&
                      ((uVar5 = FUN_1808a7bf0(param_2,param_1 + 0xe8,0x34), (int)uVar5 == 0 &&
                       ((uVar5 = FUN_1808a7c40(param_2,param_1 + 0xec,0x4e), (int)uVar5 == 0 &&
                        (uVar5 = FUN_1808a7bf0(param_2,param_1 + 0xf8,0x61), (int)uVar5 == 0))))))
                     && ((*(uint *)(param_2 + 8) < 0x6b ||
                         (uVar5 = FUN_1808a7b00(param_2,param_1 + 0x70), (int)uVar5 == 0)))) {
                    if (0x75 < *(uint *)(param_2 + 8)) {
                      uVar3 = *(int *)(param_1 + 0x98) * 2;
                      if ((uVar3 | 1) < 0x8000) {
                        auStackX_20[0] = CONCAT22(auStackX_20[0]._2_2_,(short)(uVar3 | 1));
                        uVar8 = 2;
                        puVar7 = auStackX_20;
                      }
                      else {
                        uVar8 = 4;
                        uStack_44 = (uVar3 & 0xffffc000 | 0x4000) * 2 | uVar3 & 0x7fff | 1;
                        puVar7 = &uStack_44;
                      }
                      uVar5 = (**(code **)**(undefined8 **)(*param_2 + 8))
                                        (*(undefined8 **)(*param_2 + 8),puVar7,uVar8);
                      if ((int)uVar5 != 0) {
                        return uVar5;
                      }
                      puVar9 = *(undefined4 **)(param_1 + 0x90);
                      uStack_48 = 0;
                      for (; (*(undefined4 **)(param_1 + 0x90) <= puVar9 &&
                             (puVar9 < *(undefined4 **)(param_1 + 0x90) +
                                       (longlong)*(int *)(param_1 + 0x98) * 2)); puVar9 = puVar9 + 2
                          ) {
                        uVar5 = FUN_1808ddf00(param_2,uStack_48);
                        if ((int)uVar5 != 0) {
                          return uVar5;
                        }
                        if (*(int *)(param_2[1] + 0x18) != 0) {
                          return 0x1c;
                        }
                        uStack_40 = *puVar9;
                        lVar1 = *param_2;
                        puVar2 = *(undefined8 **)(lVar1 + 8);
                        uVar5 = (**(code **)*puVar2)(puVar2,&uStack_40,4);
                        if ((int)uVar5 != 0) {
                          return uVar5;
                        }
                        uStack_3c = puVar9[1];
                        puVar2 = *(undefined8 **)(lVar1 + 8);
                        uVar5 = (**(code **)*puVar2)(puVar2,&uStack_3c,4);
                        if ((int)uVar5 != 0) {
                          return uVar5;
                        }
                        uVar5 = FUN_1808de160(param_2,&uStack_48);
                        if ((int)uVar5 != 0) {
                          return uVar5;
                        }
                      }
                    }
                    if ((*(uint *)(param_2 + 8) < 0x83) ||
                       (uVar5 = FUN_1808a7b00(param_2,param_1 + 0xa0), (int)uVar5 == 0)) {
                      if (*(uint *)(param_2 + 8) < 0x89) {
                        uVar4 = 0;
                      }
                      else if (*(int *)(param_2[1] + 0x18) == 0) {
                        auStackX_20[0] = *(uint *)(param_1 + 0xf0);
                        uVar4 = (**(code **)**(undefined8 **)(*param_2 + 8))
                                          (*(undefined8 **)(*param_2 + 8),auStackX_20,4);
                      }
                      if (uVar4 == 0) {
                        uVar5 = FUN_1808a7c40(param_2,param_1 + 0xf4,0x89);
                        if ((int)uVar5 == 0) {
                    // WARNING: Subroutine does not return
                          FUN_1808de000(param_2,auStack_38);
                        }
                      }
                      else {
                        uVar5 = (ulonglong)uVar4;
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



ulonglong FUN_1808a3d87(void)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  longlong in_RAX;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 extraout_XMM0_Da_14;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da_15;
  undefined4 extraout_XMM0_Da_16;
  undefined4 extraout_XMM0_Da_17;
  undefined4 extraout_XMM0_Da_18;
  undefined4 extraout_XMM0_Da_19;
  
  if (*(int *)(in_RAX + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = FUN_180899ef0(*unaff_RBX,unaff_RDI + 0x10);
  uVar4 = (ulonglong)uVar3;
  if (uVar3 == 0) {
    if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar3 = FUN_180899ef0(*unaff_RBX,unaff_RDI + 0x60);
    uVar4 = (ulonglong)uVar3;
    if (uVar3 == 0) {
      if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar3 = FUN_180899ef0(*unaff_RBX,unaff_RDI + 0x30);
      uVar4 = (ulonglong)uVar3;
      if (uVar3 == 0) {
        if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
          return 0x1c;
        }
        uVar3 = FUN_180899ef0(*unaff_RBX,unaff_RDI + 0x40);
        uVar4 = (ulonglong)uVar3;
        if (uVar3 == 0) {
          if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
            return 0x1c;
          }
          uVar3 = FUN_180899ef0(*unaff_RBX,unaff_RDI + 0x50);
          uVar4 = (ulonglong)uVar3;
          if (uVar3 == 0) {
            uVar4 = FUN_180898e70(extraout_XMM0_Da,unaff_RDI + 0xd8);
            if (((int)uVar4 == 0) &&
               (uVar4 = FUN_180898e70(extraout_XMM0_Da_00,unaff_RDI + 0xdc), (int)uVar4 == 0)) {
              uVar3 = 0x1c;
              if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                lVar6 = *unaff_RBX;
                *(bool *)(unaff_RBP + 0x38) = *(int *)(unaff_RDI + 0xe8) == 0;
                uVar4 = (**(code **)**(undefined8 **)(lVar6 + 8))
                                  (*(undefined8 **)(lVar6 + 8),unaff_RBP + 0x38,1);
                uVar10 = extraout_XMM0_Da_02;
              }
              else {
                uVar4 = 0x1c;
                uVar10 = extraout_XMM0_Da_01;
              }
              if (((int)uVar4 == 0) &&
                 (uVar4 = FUN_180898e70(uVar10,unaff_RDI + 0xe4), (int)uVar4 == 0)) {
                uVar2 = *(int *)(unaff_RDI + 0x88) * 2;
                puVar1 = *(undefined8 **)(*unaff_RBX + 8);
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
                  uVar4 = *(ulonglong *)(unaff_RDI + 0x80);
                  uVar10 = 0;
                  *(undefined4 *)(unaff_RBP + -0x30) = 0;
                  uVar9 = extraout_XMM0_Da_03;
                  for (; (*(ulonglong *)(unaff_RDI + 0x80) <= uVar4 &&
                         (uVar4 < (longlong)*(int *)(unaff_RDI + 0x88) * 0x10 +
                                  *(ulonglong *)(unaff_RDI + 0x80))); uVar4 = uVar4 + 0x10) {
                    uVar5 = FUN_1808ddf00(uVar9,uVar10);
                    if ((int)uVar5 != 0) {
                      return uVar5;
                    }
                    if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
                      return 0x1c;
                    }
                    uVar5 = FUN_180899ef0(*unaff_RBX,uVar4);
                    if ((int)uVar5 != 0) {
                      return uVar5;
                    }
                    uVar5 = FUN_1808de160(extraout_XMM0_Da_04,unaff_RBP + -0x30);
                    if ((int)uVar5 != 0) {
                      return uVar5;
                    }
                    uVar10 = *(undefined4 *)(unaff_RBP + -0x30);
                    uVar9 = extraout_XMM0_Da_05;
                  }
                  if ((((((0x3b < *(uint *)(unaff_RBX + 8)) ||
                         (uVar4 = FUN_1808de620(), uVar9 = extraout_XMM0_Da_06, (int)uVar4 == 0)) &&
                        (uVar4 = FUN_1808a68e0(uVar9,unaff_RDI + 0xb0,0,0), (int)uVar4 == 0)) &&
                       ((uVar4 = FUN_1808a6d00(extraout_XMM0_Da_07,unaff_RDI + 0xc0,0,0),
                        (int)uVar4 == 0 &&
                        (uVar4 = FUN_1808a7c40(extraout_XMM0_Da_08,unaff_RDI + 0xe0,0x30),
                        (int)uVar4 == 0)))) &&
                      ((uVar4 = FUN_1808a7bf0(extraout_XMM0_Da_09,unaff_RDI + 0xe8,0x34),
                       (int)uVar4 == 0 &&
                       ((uVar4 = FUN_1808a7c40(extraout_XMM0_Da_10,unaff_RDI + 0xec,0x4e),
                        (int)uVar4 == 0 &&
                        (uVar4 = FUN_1808a7bf0(extraout_XMM0_Da_11,unaff_RDI + 0xf8,0x61),
                        (int)uVar4 == 0)))))) &&
                     ((uVar10 = extraout_XMM0_Da_12, *(uint *)(unaff_RBX + 8) < 0x6b ||
                      (uVar4 = FUN_1808a7b00(extraout_XMM0_Da_12,unaff_RDI + 0x70),
                      uVar10 = extraout_XMM0_Da_13, (int)uVar4 == 0)))) {
                    if (0x75 < *(uint *)(unaff_RBX + 8)) {
                      uVar2 = *(int *)(unaff_RDI + 0x98) * 2;
                      puVar1 = *(undefined8 **)(*unaff_RBX + 8);
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
                      puVar8 = *(undefined4 **)(unaff_RDI + 0x90);
                      uVar9 = 0;
                      *(undefined4 *)(unaff_RBP + -0x30) = 0;
                      uVar10 = extraout_XMM0_Da_14;
                      for (; (*(undefined4 **)(unaff_RDI + 0x90) <= puVar8 &&
                             (puVar8 < *(undefined4 **)(unaff_RDI + 0x90) +
                                       (longlong)*(int *)(unaff_RDI + 0x98) * 2));
                          puVar8 = puVar8 + 2) {
                        uVar4 = FUN_1808ddf00(uVar10,uVar9);
                        if ((int)uVar4 != 0) {
                          return uVar4;
                        }
                        if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
                          return 0x1c;
                        }
                        lVar6 = *unaff_RBX;
                        *(undefined4 *)(unaff_RBP + -0x28) = *puVar8;
                        puVar1 = *(undefined8 **)(lVar6 + 8);
                        uVar4 = (**(code **)*puVar1)(puVar1,unaff_RBP + -0x28,4);
                        if ((int)uVar4 != 0) {
                          return uVar4;
                        }
                        puVar1 = *(undefined8 **)(lVar6 + 8);
                        *(undefined4 *)(unaff_RBP + -0x24) = puVar8[1];
                        uVar4 = (**(code **)*puVar1)(puVar1,unaff_RBP + -0x24,4);
                        if ((int)uVar4 != 0) {
                          return uVar4;
                        }
                        uVar4 = FUN_1808de160(extraout_XMM0_Da_15,unaff_RBP + -0x30);
                        if ((int)uVar4 != 0) {
                          return uVar4;
                        }
                        uVar9 = *(undefined4 *)(unaff_RBP + -0x30);
                        uVar10 = extraout_XMM0_Da_16;
                      }
                    }
                    if ((*(uint *)(unaff_RBX + 8) < 0x83) ||
                       (uVar4 = FUN_1808a7b00(uVar10,unaff_RDI + 0xa0), uVar10 = extraout_XMM0_Da_17
                       , (int)uVar4 == 0)) {
                      if (*(uint *)(unaff_RBX + 8) < 0x89) {
                        uVar3 = 0;
                      }
                      else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                        lVar6 = *unaff_RBX;
                        *(undefined4 *)(unaff_RBP + 0x38) = *(undefined4 *)(unaff_RDI + 0xf0);
                        uVar3 = (**(code **)**(undefined8 **)(lVar6 + 8))
                                          (*(undefined8 **)(lVar6 + 8),unaff_RBP + 0x38,4);
                        uVar10 = extraout_XMM0_Da_18;
                      }
                      if (uVar3 == 0) {
                        uVar4 = FUN_1808a7c40(uVar10,unaff_RDI + 0xf4,0x89);
                        if ((int)uVar4 == 0) {
                    // WARNING: Subroutine does not return
                          FUN_1808de000(extraout_XMM0_Da_19,unaff_RBP + -0x20);
                        }
                      }
                      else {
                        uVar4 = (ulonglong)uVar3;
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



ulonglong FUN_1808a3e1c(void)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 extraout_XMM0_Da_14;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da_15;
  undefined4 extraout_XMM0_Da_16;
  undefined4 extraout_XMM0_Da_17;
  undefined4 extraout_XMM0_Da_18;
  undefined4 extraout_XMM0_Da_19;
  
  uVar3 = FUN_180899ef0(*unaff_RBX,unaff_RDI + 0x50);
  if (uVar3 != 0) {
    return (ulonglong)uVar3;
  }
  uVar4 = FUN_180898e70(extraout_XMM0_Da,unaff_RDI + 0xd8);
  if (((int)uVar4 == 0) &&
     (uVar4 = FUN_180898e70(extraout_XMM0_Da_00,unaff_RDI + 0xdc), (int)uVar4 == 0)) {
    uVar3 = 0x1c;
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      lVar6 = *unaff_RBX;
      *(bool *)(unaff_RBP + 0x38) = *(int *)(unaff_RDI + 0xe8) == 0;
      uVar4 = (**(code **)**(undefined8 **)(lVar6 + 8))
                        (*(undefined8 **)(lVar6 + 8),unaff_RBP + 0x38,1);
      uVar10 = extraout_XMM0_Da_02;
    }
    else {
      uVar4 = 0x1c;
      uVar10 = extraout_XMM0_Da_01;
    }
    if (((int)uVar4 == 0) && (uVar4 = FUN_180898e70(uVar10,unaff_RDI + 0xe4), (int)uVar4 == 0)) {
      uVar2 = *(int *)(unaff_RDI + 0x88) * 2;
      puVar1 = *(undefined8 **)(*unaff_RBX + 8);
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
        uVar4 = *(ulonglong *)(unaff_RDI + 0x80);
        uVar10 = 0;
        *(undefined4 *)(unaff_RBP + -0x30) = 0;
        uVar9 = extraout_XMM0_Da_03;
        for (; (*(ulonglong *)(unaff_RDI + 0x80) <= uVar4 &&
               (uVar4 < (longlong)*(int *)(unaff_RDI + 0x88) * 0x10 +
                        *(ulonglong *)(unaff_RDI + 0x80))); uVar4 = uVar4 + 0x10) {
          uVar5 = FUN_1808ddf00(uVar9,uVar10);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
            return 0x1c;
          }
          uVar5 = FUN_180899ef0(*unaff_RBX,uVar4);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          uVar5 = FUN_1808de160(extraout_XMM0_Da_04,unaff_RBP + -0x30);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          uVar10 = *(undefined4 *)(unaff_RBP + -0x30);
          uVar9 = extraout_XMM0_Da_05;
        }
        if ((((((0x3b < *(uint *)(unaff_RBX + 8)) ||
               (uVar4 = FUN_1808de620(), uVar9 = extraout_XMM0_Da_06, (int)uVar4 == 0)) &&
              (uVar4 = FUN_1808a68e0(uVar9,unaff_RDI + 0xb0,0,0), (int)uVar4 == 0)) &&
             ((uVar4 = FUN_1808a6d00(extraout_XMM0_Da_07,unaff_RDI + 0xc0,0,0), (int)uVar4 == 0 &&
              (uVar4 = FUN_1808a7c40(extraout_XMM0_Da_08,unaff_RDI + 0xe0,0x30), (int)uVar4 == 0))))
            && ((uVar4 = FUN_1808a7bf0(extraout_XMM0_Da_09,unaff_RDI + 0xe8,0x34), (int)uVar4 == 0
                && ((uVar4 = FUN_1808a7c40(extraout_XMM0_Da_10,unaff_RDI + 0xec,0x4e),
                    (int)uVar4 == 0 &&
                    (uVar4 = FUN_1808a7bf0(extraout_XMM0_Da_11,unaff_RDI + 0xf8,0x61),
                    (int)uVar4 == 0)))))) &&
           ((uVar10 = extraout_XMM0_Da_12, *(uint *)(unaff_RBX + 8) < 0x6b ||
            (uVar4 = FUN_1808a7b00(extraout_XMM0_Da_12,unaff_RDI + 0x70),
            uVar10 = extraout_XMM0_Da_13, (int)uVar4 == 0)))) {
          if (0x75 < *(uint *)(unaff_RBX + 8)) {
            uVar2 = *(int *)(unaff_RDI + 0x98) * 2;
            puVar1 = *(undefined8 **)(*unaff_RBX + 8);
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
            puVar8 = *(undefined4 **)(unaff_RDI + 0x90);
            uVar9 = 0;
            *(undefined4 *)(unaff_RBP + -0x30) = 0;
            uVar10 = extraout_XMM0_Da_14;
            for (; (*(undefined4 **)(unaff_RDI + 0x90) <= puVar8 &&
                   (puVar8 < *(undefined4 **)(unaff_RDI + 0x90) +
                             (longlong)*(int *)(unaff_RDI + 0x98) * 2)); puVar8 = puVar8 + 2) {
              uVar4 = FUN_1808ddf00(uVar10,uVar9);
              if ((int)uVar4 != 0) {
                return uVar4;
              }
              if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
                return 0x1c;
              }
              lVar6 = *unaff_RBX;
              *(undefined4 *)(unaff_RBP + -0x28) = *puVar8;
              puVar1 = *(undefined8 **)(lVar6 + 8);
              uVar4 = (**(code **)*puVar1)(puVar1,unaff_RBP + -0x28,4);
              if ((int)uVar4 != 0) {
                return uVar4;
              }
              puVar1 = *(undefined8 **)(lVar6 + 8);
              *(undefined4 *)(unaff_RBP + -0x24) = puVar8[1];
              uVar4 = (**(code **)*puVar1)(puVar1,unaff_RBP + -0x24,4);
              if ((int)uVar4 != 0) {
                return uVar4;
              }
              uVar4 = FUN_1808de160(extraout_XMM0_Da_15,unaff_RBP + -0x30);
              if ((int)uVar4 != 0) {
                return uVar4;
              }
              uVar9 = *(undefined4 *)(unaff_RBP + -0x30);
              uVar10 = extraout_XMM0_Da_16;
            }
          }
          if ((*(uint *)(unaff_RBX + 8) < 0x83) ||
             (uVar4 = FUN_1808a7b00(uVar10,unaff_RDI + 0xa0), uVar10 = extraout_XMM0_Da_17,
             (int)uVar4 == 0)) {
            if (*(uint *)(unaff_RBX + 8) < 0x89) {
              uVar3 = 0;
            }
            else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
              lVar6 = *unaff_RBX;
              *(undefined4 *)(unaff_RBP + 0x38) = *(undefined4 *)(unaff_RDI + 0xf0);
              uVar3 = (**(code **)**(undefined8 **)(lVar6 + 8))
                                (*(undefined8 **)(lVar6 + 8),unaff_RBP + 0x38,4);
              uVar10 = extraout_XMM0_Da_18;
            }
            if (uVar3 == 0) {
              uVar4 = FUN_1808a7c40(uVar10,unaff_RDI + 0xf4,0x89);
              if ((int)uVar4 == 0) {
                    // WARNING: Subroutine does not return
                FUN_1808de000(extraout_XMM0_Da_19,unaff_RBP + -0x20);
              }
            }
            else {
              uVar4 = (ulonglong)uVar3;
            }
          }
        }
      }
    }
  }
  return uVar4;
}



ulonglong FUN_1808a3e40(undefined4 param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da_14;
  undefined4 extraout_XMM0_Da_15;
  undefined4 extraout_XMM0_Da_16;
  undefined4 extraout_XMM0_Da_17;
  undefined4 extraout_XMM0_Da_18;
  
  uVar4 = FUN_180898e70(param_1,unaff_RDI + 0xd8);
  if (((int)uVar4 == 0) &&
     (uVar4 = FUN_180898e70(extraout_XMM0_Da,unaff_RDI + 0xdc), (int)uVar4 == 0)) {
    uVar3 = 0x1c;
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      lVar6 = *unaff_RBX;
      *(bool *)(unaff_RBP + 0x38) = *(int *)(unaff_RDI + 0xe8) == 0;
      uVar4 = (**(code **)**(undefined8 **)(lVar6 + 8))
                        (*(undefined8 **)(lVar6 + 8),unaff_RBP + 0x38,1);
      uVar10 = extraout_XMM0_Da_01;
    }
    else {
      uVar4 = 0x1c;
      uVar10 = extraout_XMM0_Da_00;
    }
    if (((int)uVar4 == 0) && (uVar4 = FUN_180898e70(uVar10,unaff_RDI + 0xe4), (int)uVar4 == 0)) {
      uVar2 = *(int *)(unaff_RDI + 0x88) * 2;
      puVar1 = *(undefined8 **)(*unaff_RBX + 8);
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
        uVar4 = *(ulonglong *)(unaff_RDI + 0x80);
        uVar10 = 0;
        *(undefined4 *)(unaff_RBP + -0x30) = 0;
        uVar9 = extraout_XMM0_Da_02;
        for (; (*(ulonglong *)(unaff_RDI + 0x80) <= uVar4 &&
               (uVar4 < (longlong)*(int *)(unaff_RDI + 0x88) * 0x10 +
                        *(ulonglong *)(unaff_RDI + 0x80))); uVar4 = uVar4 + 0x10) {
          uVar5 = FUN_1808ddf00(uVar9,uVar10);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
            return 0x1c;
          }
          uVar5 = FUN_180899ef0(*unaff_RBX,uVar4);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          uVar5 = FUN_1808de160(extraout_XMM0_Da_03,unaff_RBP + -0x30);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          uVar10 = *(undefined4 *)(unaff_RBP + -0x30);
          uVar9 = extraout_XMM0_Da_04;
        }
        if ((((((0x3b < *(uint *)(unaff_RBX + 8)) ||
               (uVar4 = FUN_1808de620(), uVar9 = extraout_XMM0_Da_05, (int)uVar4 == 0)) &&
              (uVar4 = FUN_1808a68e0(uVar9,unaff_RDI + 0xb0,0,0), (int)uVar4 == 0)) &&
             ((uVar4 = FUN_1808a6d00(extraout_XMM0_Da_06,unaff_RDI + 0xc0,0,0), (int)uVar4 == 0 &&
              (uVar4 = FUN_1808a7c40(extraout_XMM0_Da_07,unaff_RDI + 0xe0,0x30), (int)uVar4 == 0))))
            && ((uVar4 = FUN_1808a7bf0(extraout_XMM0_Da_08,unaff_RDI + 0xe8,0x34), (int)uVar4 == 0
                && ((uVar4 = FUN_1808a7c40(extraout_XMM0_Da_09,unaff_RDI + 0xec,0x4e),
                    (int)uVar4 == 0 &&
                    (uVar4 = FUN_1808a7bf0(extraout_XMM0_Da_10,unaff_RDI + 0xf8,0x61),
                    (int)uVar4 == 0)))))) &&
           ((uVar10 = extraout_XMM0_Da_11, *(uint *)(unaff_RBX + 8) < 0x6b ||
            (uVar4 = FUN_1808a7b00(extraout_XMM0_Da_11,unaff_RDI + 0x70),
            uVar10 = extraout_XMM0_Da_12, (int)uVar4 == 0)))) {
          if (0x75 < *(uint *)(unaff_RBX + 8)) {
            uVar2 = *(int *)(unaff_RDI + 0x98) * 2;
            puVar1 = *(undefined8 **)(*unaff_RBX + 8);
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
            puVar8 = *(undefined4 **)(unaff_RDI + 0x90);
            uVar9 = 0;
            *(undefined4 *)(unaff_RBP + -0x30) = 0;
            uVar10 = extraout_XMM0_Da_13;
            for (; (*(undefined4 **)(unaff_RDI + 0x90) <= puVar8 &&
                   (puVar8 < *(undefined4 **)(unaff_RDI + 0x90) +
                             (longlong)*(int *)(unaff_RDI + 0x98) * 2)); puVar8 = puVar8 + 2) {
              uVar4 = FUN_1808ddf00(uVar10,uVar9);
              if ((int)uVar4 != 0) {
                return uVar4;
              }
              if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
                return 0x1c;
              }
              lVar6 = *unaff_RBX;
              *(undefined4 *)(unaff_RBP + -0x28) = *puVar8;
              puVar1 = *(undefined8 **)(lVar6 + 8);
              uVar4 = (**(code **)*puVar1)(puVar1,unaff_RBP + -0x28,4);
              if ((int)uVar4 != 0) {
                return uVar4;
              }
              puVar1 = *(undefined8 **)(lVar6 + 8);
              *(undefined4 *)(unaff_RBP + -0x24) = puVar8[1];
              uVar4 = (**(code **)*puVar1)(puVar1,unaff_RBP + -0x24,4);
              if ((int)uVar4 != 0) {
                return uVar4;
              }
              uVar4 = FUN_1808de160(extraout_XMM0_Da_14,unaff_RBP + -0x30);
              if ((int)uVar4 != 0) {
                return uVar4;
              }
              uVar9 = *(undefined4 *)(unaff_RBP + -0x30);
              uVar10 = extraout_XMM0_Da_15;
            }
          }
          if ((*(uint *)(unaff_RBX + 8) < 0x83) ||
             (uVar4 = FUN_1808a7b00(uVar10,unaff_RDI + 0xa0), uVar10 = extraout_XMM0_Da_16,
             (int)uVar4 == 0)) {
            if (*(uint *)(unaff_RBX + 8) < 0x89) {
              uVar3 = 0;
            }
            else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
              lVar6 = *unaff_RBX;
              *(undefined4 *)(unaff_RBP + 0x38) = *(undefined4 *)(unaff_RDI + 0xf0);
              uVar3 = (**(code **)**(undefined8 **)(lVar6 + 8))
                                (*(undefined8 **)(lVar6 + 8),unaff_RBP + 0x38,4);
              uVar10 = extraout_XMM0_Da_17;
            }
            if (uVar3 == 0) {
              uVar4 = FUN_1808a7c40(uVar10,unaff_RDI + 0xf4,0x89);
              if ((int)uVar4 == 0) {
                    // WARNING: Subroutine does not return
                FUN_1808de000(extraout_XMM0_Da_18,unaff_RBP + -0x20);
              }
            }
            else {
              uVar4 = (ulonglong)uVar3;
            }
          }
        }
      }
    }
  }
  return uVar4;
}








