#include "TaleWorlds.Native.Split.h"

// 99_part_12_part082.c - 5 个函数

// 函数: void FUN_1808a1b24(void)
void FUN_1808a1b24(void)

{
  return;
}



undefined8 FUN_1808a1b40(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [32];
  
  uVar1 = FUN_1808ddd30(param_2,auStack_28,1,0x5453494c,0x46464553);
  if (((int)uVar1 == 0) &&
     (uVar1 = FUN_1808ddd30(param_2,auStack_48,0,0x42464553,0), (int)uVar1 == 0)) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = FUN_180899ef0(*param_2,param_1 + 0x10);
    if ((int)uVar1 == 0) {
      if ((*(uint *)(param_2 + 8) < 0x5b) &&
         (uVar1 = FUN_1808afd90(param_2,param_1 + 0x44), (int)uVar1 != 0)) {
        return uVar1;
      }
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar1 = FUN_180899ef0(*param_2,param_1 + 0x4c);
      if ((((int)uVar1 == 0) && (uVar1 = FUN_180898eb0(param_2,param_1 + 0x48), (int)uVar1 == 0)) &&
         (uVar1 = FUN_1808a7c90(param_2,param_1 + 0x40,0x3d), (int)uVar1 == 0)) {
                    // WARNING: Subroutine does not return
        FUN_1808de000(param_2,auStack_48);
      }
    }
  }
  return uVar1;
}



undefined8 FUN_1808a1c60(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 auStackX_10 [6];
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [32];
  
  if ((0x87 < *(uint *)(param_2 + 8)) &&
     (uVar1 = FUN_1808ddd30(param_2,auStack_28,1,0x5453494c,0x46464353), (int)uVar1 != 0)) {
    return uVar1;
  }
  uVar1 = FUN_1808ddd30(param_2,auStack_48,0,0x46454353,0);
  if ((int)uVar1 == 0) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = FUN_180899ef0(*param_2,param_1 + 0x10);
    if ((int)uVar1 == 0) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      auStackX_10[0] = CONCAT31(auStackX_10[0]._1_3_,*(undefined1 *)(param_1 + 0x6c));
      uVar1 = (**(code **)**(undefined8 **)(*param_2 + 8))
                        (*(undefined8 **)(*param_2 + 8),auStackX_10,1);
      if (((int)uVar1 == 0) && (uVar1 = FUN_1808a7b00(param_2,param_1 + 0x48), (int)uVar1 == 0)) {
        if (((int)param_2[8] - 0x4aU < 0x11) &&
           (uVar1 = FUN_1808afd90(param_2,param_1 + 0x44), (int)uVar1 != 0)) {
          return uVar1;
        }
        if ((0x52 < *(uint *)(param_2 + 8)) &&
           (uVar1 = FUN_1808a7b00(param_2,param_1 + 0x58), (int)uVar1 != 0)) {
          return uVar1;
        }
        if (*(uint *)(param_2 + 8) < 0x88) {
          uVar1 = 0;
        }
        else if (*(int *)(param_2[1] + 0x18) == 0) {
          auStackX_10[0] = *(undefined4 *)(param_1 + 0x68);
          uVar1 = (**(code **)**(undefined8 **)(*param_2 + 8))
                            (*(undefined8 **)(*param_2 + 8),auStackX_10,4);
        }
        else {
          uVar1 = 0x1c;
        }
        if ((int)uVar1 == 0) {
                    // WARNING: Subroutine does not return
          FUN_1808de000(param_2,auStack_48);
        }
      }
    }
  }
  return uVar1;
}



undefined8 FUN_1808a1e20(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 auStackX_18 [4];
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [32];
  
  uVar1 = FUN_1808ddd30(param_2,auStack_28,1,0x5453494c,0x494e4c53);
  if (((int)uVar1 == 0) &&
     (uVar1 = FUN_1808ddd30(param_2,auStack_48,0,0x424e4c53,0), (int)uVar1 == 0)) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = FUN_180899ef0(*param_2,param_1 + 0x10);
    if ((int)uVar1 == 0) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      auStackX_18[0] = *(undefined4 *)(param_1 + 0xd8);
      uVar1 = (**(code **)**(undefined8 **)(*param_2 + 8))
                        (*(undefined8 **)(*param_2 + 8),auStackX_18,4);
      if ((int)uVar1 == 0) {
                    // WARNING: Subroutine does not return
        FUN_1808de000(param_2,auStack_48);
      }
    }
  }
  return uVar1;
}



undefined8 FUN_1808a1f20(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 auStackX_18 [4];
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [32];
  
  uVar1 = FUN_1808ddd30(param_2,auStack_28,1,0x5453494c,0x50414e53);
  if (((int)uVar1 == 0) &&
     (uVar1 = FUN_1808ddd30(param_2,auStack_48,0,0x42414e53,0), (int)uVar1 == 0)) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = FUN_180899ef0(*param_2,param_1 + 0x10);
    if ((int)uVar1 == 0) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      auStackX_18[0] = *(undefined4 *)(param_1 + 0x44);
      uVar1 = (**(code **)**(undefined8 **)(*param_2 + 8))
                        (*(undefined8 **)(*param_2 + 8),auStackX_18,4);
      if ((((int)uVar1 == 0) &&
          (uVar1 = FUN_1808a6ff0(param_2,param_1 + 0x30,1,param_1), (int)uVar1 == 0)) &&
         (uVar1 = FUN_1808a2e90(param_2,param_1 + 0x48), (int)uVar1 == 0)) {
        if (*(int *)(param_2[1] + 0x18) != 0) {
          return 0x1c;
        }
        auStackX_18[0] = *(undefined4 *)(param_1 + 0x4c);
        uVar1 = (**(code **)**(undefined8 **)(*param_2 + 8))
                          (*(undefined8 **)(*param_2 + 8),auStackX_18,4);
        if (((int)uVar1 == 0) &&
           (uVar1 = FUN_1808a7c40(param_2,param_1 + 0x40,0x33), (int)uVar1 == 0)) {
                    // WARNING: Subroutine does not return
          FUN_1808de000(param_2,auStack_48);
        }
      }
    }
  }
  return uVar1;
}



ulonglong FUN_1808a20a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined2 auStackX_18 [4];
  undefined2 auStackX_20 [4];
  undefined4 auStack_a8 [2];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [40];
  
  uVar2 = FUN_1808ddd30(param_2,auStack_50,1,0x5453494c,0x4e4c4d54);
  if ((int)uVar2 == 0) {
    uVar4 = 0;
    uVar2 = FUN_1808ddd30(param_2,auStack_70,0,0x424e4c54,0);
    if ((int)uVar2 == 0) {
      if (*(int *)(param_2[1] + 0x18) == 0) {
        uVar5 = FUN_180899ef0(*param_2,param_1 + 0x10);
        if (uVar5 == 0) {
          puVar3 = (undefined4 *)FUN_180847820();
          uVar5 = 0x1c;
          uStack_a0 = *puVar3;
          uStack_9c = puVar3[1];
          uStack_98 = puVar3[2];
          uStack_94 = puVar3[3];
          if (*(uint *)(param_2 + 8) < 0x6d) {
            if (*(int *)(param_2[1] + 0x18) == 0) {
              lVar1 = *param_2;
              auStack_a8[0] = uStack_a0;
              uVar4 = (**(code **)**(undefined8 **)(lVar1 + 8))
                                (*(undefined8 **)(lVar1 + 8),auStack_a8,4);
              if ((int)uVar4 == 0) {
                auStackX_18[0] = (undefined2)uStack_9c;
                uVar4 = (**(code **)**(undefined8 **)(lVar1 + 8))
                                  (*(undefined8 **)(lVar1 + 8),auStackX_18,2);
                if ((int)uVar4 == 0) {
                  auStackX_20[0] = uStack_9c._2_2_;
                  uVar4 = (**(code **)**(undefined8 **)(lVar1 + 8))
                                    (*(undefined8 **)(lVar1 + 8),auStackX_20,2);
                  if ((int)uVar4 == 0) {
                    uVar4 = (**(code **)**(undefined8 **)(lVar1 + 8))
                                      (*(undefined8 **)(lVar1 + 8),&uStack_98,8);
                  }
                }
              }
            }
            else {
              uVar4 = 0x1c;
            }
          }
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          uVar2 = FUN_1808a5c00(param_2,param_1 + 0x38,1,0);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar2 = FUN_1808a5c00(param_2,param_1 + 0x48,1,0);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if (0x83 < *(uint *)(param_2 + 8)) {
            uVar2 = FUN_1808a7460(param_2,param_1 + 0x58,0,0);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            uVar2 = FUN_1808adb30(param_2,param_1 + 0x78,0,0);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            uVar2 = FUN_1808a6480(param_2,param_1 + 0x88,1,0);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
                    // WARNING: Subroutine does not return
            FUN_1808de000(param_2,auStack_70);
          }
          uStack_90 = 0;
          uStack_88 = 0;
          FUN_18084c150(&uStack_90);
        }
      }
      else {
        uVar5 = 0x1c;
      }
      uVar2 = (ulonglong)uVar5;
    }
  }
  return uVar2;
}



ulonglong FUN_1808a20df(undefined4 param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  uint uVar10;
  longlong unaff_R14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  
  uVar9 = 0;
  uVar7 = FUN_1808ddd30(param_1,unaff_RBP + -0x11,0,0x424e4c54,0);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if (*(int *)(unaff_RSI[1] + 0x18) == 0) {
    uVar10 = FUN_180899ef0(*unaff_RSI,unaff_R14 + 0x10);
    if (uVar10 == 0) {
      puVar8 = (undefined4 *)FUN_180847820();
      uVar1 = *(uint *)(unaff_RSI + 8);
      uVar10 = 0x1c;
      uVar11 = *puVar8;
      uVar4 = puVar8[1];
      uVar5 = puVar8[2];
      uVar6 = puVar8[3];
      *(undefined4 *)(unaff_RBP + -0x41) = uVar11;
      *(undefined4 *)(unaff_RBP + -0x3d) = uVar4;
      *(undefined4 *)(unaff_RBP + -0x39) = uVar5;
      *(undefined4 *)(unaff_RBP + -0x35) = uVar6;
      if (uVar1 < 0x6d) {
        if (*(int *)(unaff_RSI[1] + 0x18) == 0) {
          *(undefined4 *)(unaff_RBP + -0x49) = *(undefined4 *)(unaff_RBP + -0x41);
          lVar2 = *unaff_RSI;
          uVar9 = (**(code **)**(undefined8 **)(lVar2 + 8))
                            (*(undefined8 **)(lVar2 + 8),unaff_RBP + -0x49,4);
          uVar11 = extraout_XMM0_Da;
          if ((int)uVar9 == 0) {
            puVar3 = *(undefined8 **)(lVar2 + 8);
            *(undefined2 *)(unaff_RBP + 0x77) = *(undefined2 *)(unaff_RBP + -0x3d);
            uVar9 = (**(code **)*puVar3)(puVar3,unaff_RBP + 0x77,2);
            uVar11 = extraout_XMM0_Da_00;
            if ((int)uVar9 == 0) {
              puVar3 = *(undefined8 **)(lVar2 + 8);
              *(undefined2 *)(unaff_RBP + 0x7f) = *(undefined2 *)(unaff_RBP + -0x3b);
              uVar9 = (**(code **)*puVar3)(puVar3,unaff_RBP + 0x7f,2);
              uVar11 = extraout_XMM0_Da_01;
              if ((int)uVar9 == 0) {
                uVar9 = (**(code **)**(undefined8 **)(lVar2 + 8))
                                  (*(undefined8 **)(lVar2 + 8),unaff_RBP + -0x39,8);
                uVar11 = extraout_XMM0_Da_02;
              }
            }
          }
        }
        else {
          uVar9 = 0x1c;
        }
      }
      if ((int)uVar9 != 0) {
        return uVar9;
      }
      uVar7 = FUN_1808a5c00(uVar11,unaff_R14 + 0x38,1,0);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      uVar7 = FUN_1808a5c00(extraout_XMM0_Da_03,unaff_R14 + 0x48,1,0);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      if (0x83 < *(uint *)(unaff_RSI + 8)) {
        uVar7 = FUN_1808a7460(extraout_XMM0_Da_04,unaff_R14 + 0x58,0,0);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        uVar7 = FUN_1808adb30(extraout_XMM0_Da_05,unaff_R14 + 0x78,0,0);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        uVar7 = FUN_1808a6480(extraout_XMM0_Da_06,unaff_R14 + 0x88,1,0);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
                    // WARNING: Subroutine does not return
        FUN_1808de000(extraout_XMM0_Da_07,unaff_RBP + -0x11);
      }
      *(undefined8 *)(unaff_RBP + -0x31) = 0;
      *(undefined8 *)(unaff_RBP + -0x29) = 0;
      FUN_18084c150(unaff_RBP + -0x31);
    }
  }
  else {
    uVar10 = 0x1c;
  }
  return (ulonglong)uVar10;
}



ulonglong FUN_1808a210e(void)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong in_RAX;
  undefined4 *puVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  uint uVar10;
  longlong unaff_R14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  
  iVar9 = (int)unaff_RBX;
  if (*(int *)(in_RAX + 0x18) == iVar9) {
    uVar10 = FUN_180899ef0(*unaff_RSI,unaff_R14 + 0x10);
    if (uVar10 == 0) {
      puVar7 = (undefined4 *)FUN_180847820();
      uVar1 = *(uint *)(unaff_RSI + 8);
      uVar10 = 0x1c;
      uVar11 = *puVar7;
      uVar4 = puVar7[1];
      uVar5 = puVar7[2];
      uVar6 = puVar7[3];
      *(undefined4 *)(unaff_RBP + -0x41) = uVar11;
      *(undefined4 *)(unaff_RBP + -0x3d) = uVar4;
      *(undefined4 *)(unaff_RBP + -0x39) = uVar5;
      *(undefined4 *)(unaff_RBP + -0x35) = uVar6;
      if (uVar1 < 0x6d) {
        if (*(int *)(unaff_RSI[1] + 0x18) == iVar9) {
          *(undefined4 *)(unaff_RBP + -0x49) = *(undefined4 *)(unaff_RBP + -0x41);
          lVar2 = *unaff_RSI;
          uVar8 = (**(code **)**(undefined8 **)(lVar2 + 8))
                            (*(undefined8 **)(lVar2 + 8),unaff_RBP + -0x49,4);
          uVar11 = extraout_XMM0_Da;
          if ((int)uVar8 == 0) {
            puVar3 = *(undefined8 **)(lVar2 + 8);
            *(undefined2 *)(unaff_RBP + 0x77) = *(undefined2 *)(unaff_RBP + -0x3d);
            uVar8 = (**(code **)*puVar3)(puVar3,unaff_RBP + 0x77,2);
            uVar11 = extraout_XMM0_Da_00;
            if ((int)uVar8 == 0) {
              puVar3 = *(undefined8 **)(lVar2 + 8);
              *(undefined2 *)(unaff_RBP + 0x7f) = *(undefined2 *)(unaff_RBP + -0x3b);
              uVar8 = (**(code **)*puVar3)(puVar3,unaff_RBP + 0x7f,2);
              uVar11 = extraout_XMM0_Da_01;
              if ((int)uVar8 == 0) {
                uVar8 = (**(code **)**(undefined8 **)(lVar2 + 8))
                                  (*(undefined8 **)(lVar2 + 8),unaff_RBP + -0x39,8);
                uVar11 = extraout_XMM0_Da_02;
              }
            }
          }
        }
        else {
          uVar8 = 0x1c;
        }
      }
      else {
        uVar8 = unaff_RBX & 0xffffffff;
      }
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      uVar8 = FUN_1808a5c00(uVar11,unaff_R14 + 0x38,1,0);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      uVar8 = FUN_1808a5c00(extraout_XMM0_Da_03,unaff_R14 + 0x48,1,0);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      if (0x83 < *(uint *)(unaff_RSI + 8)) {
        uVar8 = FUN_1808a7460(extraout_XMM0_Da_04,unaff_R14 + 0x58,0,0);
        if ((int)uVar8 != 0) {
          return uVar8;
        }
        uVar8 = FUN_1808adb30(extraout_XMM0_Da_05,unaff_R14 + 0x78,0,0);
        if ((int)uVar8 != 0) {
          return uVar8;
        }
        uVar8 = FUN_1808a6480(extraout_XMM0_Da_06,unaff_R14 + 0x88,1,0);
        if ((int)uVar8 != 0) {
          return uVar8;
        }
                    // WARNING: Subroutine does not return
        FUN_1808de000(extraout_XMM0_Da_07,unaff_RBP + -0x11);
      }
      *(ulonglong *)(unaff_RBP + -0x31) = unaff_RBX;
      *(ulonglong *)(unaff_RBP + -0x29) = unaff_RBX;
      FUN_18084c150(unaff_RBP + -0x31);
    }
  }
  else {
    uVar10 = iVar9 + 0x1c;
  }
  return (ulonglong)uVar10;
}



ulonglong FUN_1808a2174(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  ulonglong unaff_RDI;
  
  lVar1 = *unaff_RSI;
  uVar3 = (**(code **)**(undefined8 **)(lVar1 + 8))();
  if ((int)uVar3 == 0) {
    puVar2 = *(undefined8 **)(lVar1 + 8);
    *(undefined2 *)(unaff_RBP + 0x77) = *(undefined2 *)(unaff_RBP + -0x3d);
    uVar3 = (**(code **)*puVar2)(puVar2,unaff_RBP + 0x77,2);
    if ((int)uVar3 == 0) {
      puVar2 = *(undefined8 **)(lVar1 + 8);
      *(undefined2 *)(unaff_RBP + 0x7f) = *(undefined2 *)(unaff_RBP + -0x3b);
      uVar3 = (**(code **)*puVar2)(puVar2,unaff_RBP + 0x7f,2);
      if ((int)uVar3 == 0) {
        uVar3 = (**(code **)**(undefined8 **)(lVar1 + 8))
                          (*(undefined8 **)(lVar1 + 8),unaff_RBP + -0x39,8);
      }
    }
  }
  if ((int)uVar3 == 0) {
    uVar3 = FUN_1808a5c00();
    if ((int)uVar3 == 0) {
      uVar3 = FUN_1808a5c00();
      if ((int)uVar3 == 0) {
        if (*(uint *)(unaff_RSI + 8) < 0x84) {
          *(undefined8 *)(unaff_RBP + -0x31) = unaff_RBX;
          *(undefined8 *)(unaff_RBP + -0x29) = unaff_RBX;
          FUN_18084c150(unaff_RBP + -0x31);
          uVar3 = unaff_RDI & 0xffffffff;
        }
        else {
          uVar3 = FUN_1808a7460();
          if ((int)uVar3 == 0) {
            uVar3 = FUN_1808adb30();
            if ((int)uVar3 == 0) {
              uVar3 = FUN_1808a6480();
              if ((int)uVar3 == 0) {
                    // WARNING: Subroutine does not return
                FUN_1808de000();
              }
            }
          }
        }
      }
    }
  }
  return uVar3;
}



ulonglong FUN_1808a21e7(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  
  uVar1 = unaff_RBX & 0xffffffff;
  if ((int)unaff_RBX == 0) {
    uVar1 = FUN_1808a5c00();
    if ((int)uVar1 == 0) {
      uVar1 = FUN_1808a5c00();
      if ((int)uVar1 == 0) {
        if (*(uint *)(unaff_RSI + 0x40) < 0x84) {
          *(ulonglong *)(unaff_RBP + -0x31) = unaff_RBX;
          *(ulonglong *)(unaff_RBP + -0x29) = unaff_RBX;
          FUN_18084c150(unaff_RBP + -0x31);
          uVar1 = unaff_RDI & 0xffffffff;
        }
        else {
          uVar1 = FUN_1808a7460();
          if ((int)uVar1 == 0) {
            uVar1 = FUN_1808adb30();
            if ((int)uVar1 == 0) {
              uVar1 = FUN_1808a6480();
              if ((int)uVar1 == 0) {
                    // WARNING: Subroutine does not return
                FUN_1808de000();
              }
            }
          }
        }
      }
    }
  }
  return uVar1;
}






// 函数: void FUN_1808a2365(void)
void FUN_1808a2365(void)

{
  return;
}






// 函数: void FUN_1808a236d(void)
void FUN_1808a236d(void)

{
  return;
}



undefined8 FUN_1808a2380(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [64];
  undefined1 auStack_28 [32];
  
  uVar1 = FUN_1808ddd30(param_2,auStack_28,1,0x5453494c,0x4e415254);
  if (((int)uVar1 == 0) &&
     (uVar1 = FUN_1808ddd30(param_2,auStack_68,0,0x424e5254,0), (int)uVar1 == 0)) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = FUN_180899ef0(*param_2,param_1 + 0x10);
    if ((int)uVar1 == 0) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar1 = FUN_180899ef0(*param_2,param_1 + 0x20);
      if ((((int)uVar1 == 0) && (uVar1 = FUN_180898e70(param_2,param_1 + 0x30), (int)uVar1 == 0)) &&
         (uVar1 = FUN_180898e70(param_2,param_1 + 0x34), (int)uVar1 == 0)) {
        if (0x81 < *(uint *)(param_2 + 8)) {
          if (*(int *)(param_2[1] + 0x18) != 0) {
            return 0x1c;
          }
          uVar1 = FUN_18089a880(*param_2,param_1 + 0x40);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
        }
        uVar1 = FUN_1808992f0(param_2,param_1 + 0x50);
        if ((((int)uVar1 == 0) && (uVar1 = FUN_180898eb0(param_2,param_1 + 0x58), (int)uVar1 == 0))
           && (uVar1 = FUN_1808a7bf0(param_2,param_1 + 0x38,0x7f), (int)uVar1 == 0)) {
                    // WARNING: Subroutine does not return
          FUN_1808de000(param_2,auStack_68);
        }
      }
    }
  }
  return uVar1;
}



undefined8 FUN_1808a2550(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_28 [32];
  
  if (*(uint *)(param_2 + 0x40) < 0x45) {
    uVar1 = FUN_1808a4730(param_1,param_2,0x20414356);
    if ((int)uVar1 == 0) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = FUN_1808ddd30(param_2,auStack_28,1,0x5453494c,0x20414356);
    if ((int)uVar1 == 0) {
      uVar1 = FUN_1808a4730(param_1,param_2,0x42414356);
      if ((int)uVar1 == 0) {
        uVar1 = FUN_1808a1610(param_1,param_2);
        if ((int)uVar1 == 0) {
                    // WARNING: Subroutine does not return
          FUN_1808de000(param_2,auStack_28);
        }
      }
    }
  }
  return uVar1;
}



ulonglong FUN_1808a25f0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 auStackX_18 [2];
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [32];
  
  uVar2 = FUN_1808ddd30(param_2,auStack_28,1,0x5453494c,0x54494157);
  if ((int)uVar2 == 0) {
    uVar2 = FUN_1808ddd30(param_2,auStack_48,0,0x42494157,0);
    if ((int)uVar2 == 0) {
      if (*(int *)(param_2[1] + 0x18) == 0) {
        uVar1 = FUN_180899ef0(*param_2,param_1 + 0x10);
        uVar2 = (ulonglong)uVar1;
        if (uVar1 == 0) {
          uVar2 = 0x1c;
          uVar1 = 0;
          if ((*(uint *)(param_2 + 8) < 0x46) && (uVar1 = 0x1c, *(int *)(param_2[1] + 0x18) == 0)) {
            auStackX_18[0] = *(undefined4 *)(param_1 + 0xd8);
            uVar1 = (**(code **)**(undefined8 **)(*param_2 + 8))
                              (*(undefined8 **)(*param_2 + 8),auStackX_18,4);
          }
          if (uVar1 == 0) {
            if (*(int *)(param_2[1] + 0x18) == 0) {
              uVar1 = FUN_180899ef0(*param_2,param_1 + 0xdc);
              uVar2 = (ulonglong)uVar1;
              if (uVar1 == 0) {
                    // WARNING: Subroutine does not return
                FUN_1808de000(param_2,auStack_48);
              }
            }
          }
          else {
            uVar2 = (ulonglong)uVar1;
          }
        }
      }
      else {
        uVar2 = 0x1c;
      }
    }
  }
  return uVar2;
}



ulonglong FUN_1808a2629(void)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  undefined4 in_stack_00000090;
  
  uVar2 = FUN_1808ddd30();
  if ((int)uVar2 == 0) {
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      uVar1 = FUN_180899ef0(*unaff_RBX,unaff_RBP + 0x10);
      uVar2 = (ulonglong)uVar1;
      if (uVar1 == 0) {
        uVar2 = 0x1c;
        uVar1 = 0;
        if ((*(uint *)(unaff_RBX + 8) < 0x46) && (uVar1 = 0x1c, *(int *)(unaff_RBX[1] + 0x18) == 0))
        {
          in_stack_00000090 = *(undefined4 *)(unaff_RBP + 0xd8);
          uVar1 = (**(code **)**(undefined8 **)(*unaff_RBX + 8))
                            (*(undefined8 **)(*unaff_RBX + 8),&stack0x00000090,4);
        }
        if (uVar1 == 0) {
          if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
            uVar1 = FUN_180899ef0(*unaff_RBX,unaff_RBP + 0xdc);
            uVar2 = (ulonglong)uVar1;
            if (uVar1 == 0) {
                    // WARNING: Subroutine does not return
              FUN_1808de000();
            }
          }
        }
        else {
          uVar2 = (ulonglong)uVar1;
        }
      }
    }
    else {
      uVar2 = 0x1c;
    }
  }
  return uVar2;
}



int FUN_1808a2659(void)

{
  int iVar1;
  longlong in_RAX;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  int unaff_ESI;
  undefined4 in_stack_00000090;
  
  if (*(int *)(in_RAX + 0x18) == unaff_ESI) {
    iVar1 = FUN_180899ef0(*unaff_RBX,unaff_RBP + 0x10);
    if (iVar1 == 0) {
      iVar1 = unaff_ESI;
      if ((*(uint *)(unaff_RBX + 8) < 0x46) &&
         (iVar1 = 0x1c, *(int *)(unaff_RBX[1] + 0x18) == unaff_ESI)) {
        in_stack_00000090 = *(undefined4 *)(unaff_RBP + 0xd8);
        iVar1 = (**(code **)**(undefined8 **)(*unaff_RBX + 8))
                          (*(undefined8 **)(*unaff_RBX + 8),&stack0x00000090,4);
      }
      if (((iVar1 == 0) && (iVar1 = 0x1c, *(int *)(unaff_RBX[1] + 0x18) == 0)) &&
         (iVar1 = FUN_180899ef0(*unaff_RBX,unaff_RBP + 0xdc), iVar1 == 0)) {
                    // WARNING: Subroutine does not return
        FUN_1808de000();
      }
    }
  }
  else {
    iVar1 = 0x1c;
  }
  return iVar1;
}






// 函数: void FUN_1808a2723(void)
void FUN_1808a2723(void)

{
  return;
}






// 函数: void FUN_1808a272b(void)
void FUN_1808a272b(void)

{
  return;
}



undefined8 FUN_1808a2740(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int aiStackX_18 [2];
  
  aiStackX_18[0] = 0;
  uVar2 = FUN_1808afe30(param_1,aiStackX_18);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  lVar4 = (longlong)aiStackX_18[0];
  if (aiStackX_18[0] == 0) {
    FUN_180840270(param_2);
  }
  else {
    iVar5 = aiStackX_18[0] + 1;
    uVar3 = (int)*(uint *)((longlong)param_2 + 0xc) >> 0x1f;
    if (((int)((*(uint *)((longlong)param_2 + 0xc) ^ uVar3) - uVar3) < iVar5) &&
       (uVar2 = FUN_180849030(param_2,iVar5), (int)uVar2 != 0)) {
      return uVar2;
    }
    iVar1 = (int)param_2[1];
    if (iVar1 < iVar5) {
                    // WARNING: Subroutine does not return
      memset((longlong)iVar1 + *param_2,0,(longlong)(iVar5 - iVar1));
    }
    *(int *)(param_2 + 1) = iVar5;
    uVar2 = FUN_1808aed00(param_1,*param_2,lVar4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *(char *)(lVar4 + *param_2) = (char)uVar2;
  }
  return 0;
}



undefined8 FUN_1808a2766(void)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong *unaff_RBX;
  int iVar4;
  int in_stack_00000040;
  
  if (in_stack_00000040 == 0) {
    FUN_180840270();
  }
  else {
    iVar4 = in_stack_00000040 + 1;
    uVar3 = (int)*(uint *)((longlong)unaff_RBX + 0xc) >> 0x1f;
    if (((int)((*(uint *)((longlong)unaff_RBX + 0xc) ^ uVar3) - uVar3) < iVar4) &&
       (uVar2 = FUN_180849030(), (int)uVar2 != 0)) {
      return uVar2;
    }
    iVar1 = (int)unaff_RBX[1];
    if (iVar1 < iVar4) {
                    // WARNING: Subroutine does not return
      memset((longlong)iVar1 + *unaff_RBX,0,(longlong)(iVar4 - iVar1));
    }
    *(int *)(unaff_RBX + 1) = iVar4;
    uVar2 = FUN_1808aed00();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *(char *)((longlong)in_stack_00000040 + *unaff_RBX) = (char)uVar2;
  }
  return 0;
}






