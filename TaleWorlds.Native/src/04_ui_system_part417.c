#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part417.c - 16 个函数

// 函数: void FUN_1808995c0(longlong *param_1,undefined4 *param_2)
void FUN_1808995c0(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  uint auStackX_8 [2];
  undefined4 auStackX_18 [4];
  
  if (*param_1 == 0) {
    iVar1 = 0x1c;
  }
  else {
    if (param_1[2] != 0) {
      auStackX_8[0] = 0;
      iVar1 = func_0x00018076a7d0(*param_1,auStackX_8);
      if (iVar1 != 0) {
        return;
      }
      if ((ulonglong)param_1[2] < (ulonglong)auStackX_8[0] + 4) {
        iVar1 = 0x11;
        goto LAB_18089962f;
      }
    }
    iVar1 = FUN_180769ed0(*param_1,auStackX_18,1,4,0);
  }
LAB_18089962f:
  if (iVar1 == 0) {
    *param_2 = auStackX_18[0];
  }
  return;
}



undefined8 FUN_180899650(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int aiStackX_8 [2];
  uint auStackX_10 [2];
  
  iVar2 = 0;
  aiStackX_8[0] = 0;
  if (*param_1 == 0) {
    uVar1 = 0x1c;
  }
  else {
    if (param_1[2] != 0) {
      auStackX_10[0] = 0;
      uVar1 = func_0x00018076a7d0(*param_1,auStackX_10);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if ((ulonglong)param_1[2] < (ulonglong)auStackX_10[0] + 4) {
        uVar1 = 0x11;
        goto LAB_1808996c5;
      }
    }
    uVar1 = FUN_180769ed0(*param_1,aiStackX_8,1,4,0);
  }
LAB_1808996c5:
  if ((int)uVar1 == 0) {
    if (aiStackX_8[0] < 0) {
      return 0xd;
    }
    uVar1 = FUN_1808af2e0(param_2,aiStackX_8[0]);
    if ((int)uVar1 == 0) {
      if (0 < aiStackX_8[0]) {
        do {
          uVar1 = FUN_180898fc0(param_1,*param_2 + (longlong)iVar2 * 0x14);
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



undefined8 FUN_180899740(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1808aed00(param_1,param_2,4);
  if (((int)uVar1 == 0) && (uVar1 = FUN_1808aed00(param_1,param_2 + 1,4), (int)uVar1 == 0x11)) {
    param_2[1] = *param_2;
    return 0;
  }
  return uVar1;
}



undefined8 FUN_180899763(void)

{
  undefined8 uVar1;
  undefined4 *unaff_RBX;
  
  uVar1 = FUN_1808aed00();
  if ((int)uVar1 != 0x11) {
    return uVar1;
  }
  unaff_RBX[1] = *unaff_RBX;
  return 0;
}





// 函数: void FUN_180899790(void)
void FUN_180899790(void)

{
  return;
}





// 函数: void FUN_180899799(void)
void FUN_180899799(void)

{
  return;
}





// 函数: void FUN_1808997b0(undefined8 param_1,longlong param_2)
void FUN_1808997b0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_1808aed00(param_1,param_2,4);
  if (iVar1 == 0) {
    FUN_1808aed00(param_1,param_2 + 4,4);
  }
  return;
}



undefined8 FUN_1808997f0(undefined8 param_1,longlong *param_2)

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
    *(undefined1 *)(lVar4 + *param_2) = 0;
  }
  return 0;
}



undefined8 FUN_180899816(void)

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
    *(undefined1 *)((longlong)in_stack_00000040 + *unaff_RBX) = 0;
  }
  return 0;
}





// 函数: void FUN_180899891(void)
void FUN_180899891(void)

{
  return;
}



undefined8 FUN_1808998a0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int aiStackX_8 [2];
  
  iVar1 = (int)param_2[1];
  aiStackX_8[0] = iVar1;
  uVar3 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),aiStackX_8,4);
  if ((int)uVar3 == 0) {
    if (0 < iVar1) {
      lVar4 = 0;
      lVar5 = lVar4;
      do {
        lVar2 = *param_2;
        uVar3 = FUN_180899ef0(param_1,lVar2 + lVar5);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        aiStackX_8[0] = *(int *)(lVar2 + lVar5 + 0x10);
        uVar3 = (**(code **)**(undefined8 **)(param_1 + 8))
                          (*(undefined8 **)(param_1 + 8),aiStackX_8,4);
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





// 函数: void FUN_180899950(longlong param_1,undefined4 *param_2)
void FUN_180899950(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  undefined8 uStackX_8;
  
  uStackX_8 = CONCAT44(uStackX_8._4_4_,*param_2);
  iVar1 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),&uStackX_8,4);
  if (iVar1 == 0) {
    uStackX_8 = *(undefined8 *)(param_2 + 2);
    iVar1 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),&uStackX_8,8);
    if ((iVar1 == 0) && (iVar1 = FUN_1808ac750(param_1,param_2 + 4), iVar1 == 0)) {
      iVar1 = param_2[10];
      uStackX_8 = CONCAT44(uStackX_8._4_4_,iVar1);
      iVar2 = (**(code **)**(undefined8 **)(param_1 + 8))
                        (*(undefined8 **)(param_1 + 8),&uStackX_8,4);
      uVar6 = 0;
      if (iVar2 == 0) {
        uVar4 = uVar6;
        if (0 < iVar1) {
          do {
            iVar2 = FUN_180899c60(param_1,(longlong)(int)uVar4 * 0x6c + *(longlong *)(param_2 + 8));
            if (iVar2 != 0) {
              return;
            }
            uVar3 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar3;
          } while ((int)uVar3 < iVar1);
        }
        iVar1 = param_2[0xe];
        uStackX_8 = CONCAT44(uStackX_8._4_4_,iVar1);
        iVar2 = (**(code **)**(undefined8 **)(param_1 + 8))
                          (*(undefined8 **)(param_1 + 8),&uStackX_8,4);
        if (iVar2 == 0) {
          uVar4 = uVar6;
          if (0 < iVar1) {
            do {
              iVar2 = FUN_180899ef0(param_1,(longlong)(int)uVar4 * 0x10 +
                                            *(longlong *)(param_2 + 0xc));
              if (iVar2 != 0) {
                return;
              }
              uVar3 = (int)uVar4 + 1;
              uVar4 = (ulonglong)uVar3;
            } while ((int)uVar3 < iVar1);
          }
          iVar1 = param_2[0x12];
          uStackX_8 = CONCAT44(uStackX_8._4_4_,iVar1);
          iVar2 = (**(code **)**(undefined8 **)(param_1 + 8))
                            (*(undefined8 **)(param_1 + 8),&uStackX_8,4);
          if (iVar2 == 0) {
            uVar4 = uVar6;
            if (0 < iVar1) {
              do {
                uStackX_8 = CONCAT44(uStackX_8._4_4_,
                                     *(undefined4 *)(*(longlong *)(param_2 + 0x10) + uVar4 * 4));
                iVar2 = (**(code **)**(undefined8 **)(param_1 + 8))
                                  (*(undefined8 **)(param_1 + 8),&uStackX_8,4);
                if (iVar2 != 0) {
                  return;
                }
                uVar4 = uVar4 + 1;
              } while ((longlong)uVar4 < (longlong)iVar1);
            }
            iVar1 = param_2[0x16];
            uStackX_8 = CONCAT44(uStackX_8._4_4_,iVar1);
            iVar2 = (**(code **)**(undefined8 **)(param_1 + 8))
                              (*(undefined8 **)(param_1 + 8),&uStackX_8,4);
            if (iVar2 == 0) {
              uVar4 = uVar6;
              uVar8 = uVar6;
              if (0 < iVar1) {
                do {
                  lVar5 = *(longlong *)(param_2 + 0x14) + uVar4;
                  iVar2 = FUN_180899ef0(param_1,lVar5);
                  if (iVar2 != 0) {
                    return;
                  }
                  uVar3 = *(uint *)(lVar5 + 0x10);
                  if (uVar3 < 0x8000) {
                    uStackX_8 = CONCAT62(uStackX_8._2_6_,(short)uVar3);
                    uVar7 = 2;
                  }
                  else {
                    uVar7 = 4;
                    uStackX_8 = CONCAT44(uStackX_8._4_4_,
                                         (uVar3 & 0xffffc000 | 0x4000) * 2 | uVar3 & 0x7fff);
                  }
                  iVar2 = (**(code **)**(undefined8 **)(param_1 + 8))
                                    (*(undefined8 **)(param_1 + 8),&uStackX_8,uVar7);
                  if (iVar2 != 0) {
                    return;
                  }
                  iVar2 = FUN_1808affb0(param_1,lVar5 + 0x14);
                  if (iVar2 != 0) {
                    return;
                  }
                  uVar8 = uVar8 + 1;
                  uVar4 = uVar4 + 0x18;
                } while ((longlong)uVar8 < (longlong)iVar1);
              }
              iVar1 = FUN_1808aca30(param_1,param_2 + 0x18);
              if (iVar1 == 0) {
                iVar1 = param_2[0x1e];
                uStackX_8 = CONCAT44(uStackX_8._4_4_,iVar1);
                iVar2 = (**(code **)**(undefined8 **)(param_1 + 8))
                                  (*(undefined8 **)(param_1 + 8),&uStackX_8,4);
                if (iVar2 == 0) {
                  if (0 < iVar1) {
                    do {
                      lVar5 = *(longlong *)(param_2 + 0x1c);
                      uStackX_8._0_4_ = *(undefined4 *)(lVar5 + uVar6 * 8);
                      iVar2 = (**(code **)**(undefined8 **)(param_1 + 8))
                                        (*(undefined8 **)(param_1 + 8),&uStackX_8,4);
                      if (iVar2 != 0) {
                        return;
                      }
                      uStackX_8 = CONCAT44(uStackX_8._4_4_,*(undefined4 *)(lVar5 + 4 + uVar6 * 8));
                      iVar2 = (**(code **)**(undefined8 **)(param_1 + 8))
                                        (*(undefined8 **)(param_1 + 8),&uStackX_8,4);
                      if (iVar2 != 0) {
                        return;
                      }
                      uVar6 = uVar6 + 1;
                    } while ((longlong)uVar6 < (longlong)iVar1);
                  }
                  uStackX_8 = CONCAT44(uStackX_8._4_4_,param_2[0x20]);
                  (**(code **)**(undefined8 **)(param_1 + 8))
                            (*(undefined8 **)(param_1 + 8),&uStackX_8,4);
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





// 函数: void FUN_1808999c1(undefined8 *param_1,undefined8 param_2)
void FUN_1808999c1(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong unaff_R14;
  ulonglong uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 uVar9;
  
  iVar3 = *(int *)(unaff_R14 + 0x28);
  *(int *)(unaff_RBP + 0x20) = iVar3;
  iVar2 = (**(code **)*param_1)(param_1,param_2,4);
  uVar7 = 0;
  if (iVar2 == 0) {
    uVar5 = uVar7;
    uVar9 = extraout_XMM0_Da;
    if (0 < iVar3) {
      do {
        iVar2 = FUN_180899c60(uVar9,(longlong)(int)uVar5 * 0x6c + *(longlong *)(unaff_R14 + 0x20));
        if (iVar2 != 0) {
          return;
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        uVar9 = extraout_XMM0_Da_00;
      } while ((int)uVar4 < iVar3);
    }
    puVar1 = *(undefined8 **)(unaff_RBX + 8);
    iVar3 = *(int *)(unaff_R14 + 0x38);
    *(int *)(unaff_RBP + 0x20) = iVar3;
    iVar2 = (**(code **)*puVar1)(puVar1,unaff_RBP + 0x20,4);
    if (iVar2 == 0) {
      uVar5 = uVar7;
      uVar9 = extraout_XMM0_Da_01;
      if (0 < iVar3) {
        do {
          iVar2 = FUN_180899ef0(uVar9,(longlong)(int)uVar5 * 0x10 + *(longlong *)(unaff_R14 + 0x30))
          ;
          if (iVar2 != 0) {
            return;
          }
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
          uVar9 = extraout_XMM0_Da_02;
        } while ((int)uVar4 < iVar3);
      }
      puVar1 = *(undefined8 **)(unaff_RBX + 8);
      iVar3 = *(int *)(unaff_R14 + 0x48);
      *(int *)(unaff_RBP + 0x20) = iVar3;
      iVar2 = (**(code **)*puVar1)(puVar1,unaff_RBP + 0x20,4);
      if (iVar2 == 0) {
        uVar5 = uVar7;
        if (0 < iVar3) {
          do {
            puVar1 = *(undefined8 **)(unaff_RBX + 8);
            *(undefined4 *)(unaff_RBP + 0x20) =
                 *(undefined4 *)(*(longlong *)(unaff_R14 + 0x40) + uVar5 * 4);
            iVar2 = (**(code **)*puVar1)(puVar1,unaff_RBP + 0x20,4);
            if (iVar2 != 0) {
              return;
            }
            uVar5 = uVar5 + 1;
          } while ((longlong)uVar5 < (longlong)iVar3);
        }
        puVar1 = *(undefined8 **)(unaff_RBX + 8);
        iVar3 = *(int *)(unaff_R14 + 0x58);
        *(int *)(unaff_RBP + 0x20) = iVar3;
        iVar2 = (**(code **)*puVar1)(puVar1,unaff_RBP + 0x20,4);
        if (iVar2 == 0) {
          uVar5 = uVar7;
          uVar8 = uVar7;
          uVar9 = extraout_XMM0_Da_03;
          if (0 < iVar3) {
            do {
              lVar6 = *(longlong *)(unaff_R14 + 0x50) + uVar5;
              iVar2 = FUN_180899ef0(uVar9,lVar6);
              if (iVar2 != 0) {
                return;
              }
              uVar4 = *(uint *)(lVar6 + 0x10);
              puVar1 = *(undefined8 **)(unaff_RBX + 8);
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
              iVar2 = FUN_1808affb0(extraout_XMM0_Da_04,lVar6 + 0x14);
              if (iVar2 != 0) {
                return;
              }
              uVar8 = uVar8 + 1;
              uVar5 = uVar5 + 0x18;
              uVar9 = extraout_XMM0_Da_05;
            } while ((longlong)uVar8 < (longlong)iVar3);
          }
          iVar3 = FUN_1808aca30(uVar9,unaff_R14 + 0x60);
          if (iVar3 == 0) {
            puVar1 = *(undefined8 **)(unaff_RBX + 8);
            iVar3 = *(int *)(unaff_R14 + 0x78);
            *(int *)(unaff_RBP + 0x20) = iVar3;
            iVar2 = (**(code **)*puVar1)(puVar1,unaff_RBP + 0x20,4);
            if (iVar2 == 0) {
              if (0 < iVar3) {
                do {
                  lVar6 = *(longlong *)(unaff_R14 + 0x70);
                  puVar1 = *(undefined8 **)(unaff_RBX + 8);
                  *(undefined4 *)(unaff_RBP + 0x20) = *(undefined4 *)(lVar6 + uVar7 * 8);
                  iVar2 = (**(code **)*puVar1)(puVar1,unaff_RBP + 0x20,4);
                  if (iVar2 != 0) {
                    return;
                  }
                  puVar1 = *(undefined8 **)(unaff_RBX + 8);
                  *(undefined4 *)(unaff_RBP + 0x20) = *(undefined4 *)(lVar6 + 4 + uVar7 * 8);
                  iVar2 = (**(code **)*puVar1)(puVar1,unaff_RBP + 0x20,4);
                  if (iVar2 != 0) {
                    return;
                  }
                  uVar7 = uVar7 + 1;
                } while ((longlong)uVar7 < (longlong)iVar3);
              }
              puVar1 = *(undefined8 **)(unaff_RBX + 8);
              *(undefined4 *)(unaff_RBP + 0x20) = *(undefined4 *)(unaff_R14 + 0x80);
              (**(code **)*puVar1)(puVar1,unaff_RBP + 0x20,4);
            }
          }
        }
      }
    }
  }
  return;
}





// 函数: void FUN_180899ae6(undefined8 *param_1)
void FUN_180899ae6(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong lVar5;
  longlong unaff_RDI;
  longlong lVar6;
  longlong unaff_R14;
  longlong lVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar8;
  
  iVar3 = (**(code **)*param_1)();
  if (iVar3 == 0) {
    lVar6 = unaff_RDI;
    lVar7 = unaff_RDI;
    uVar8 = extraout_XMM0_Da;
    if (0 < (int)unaff_RSI) {
      do {
        lVar5 = *(longlong *)(unaff_R14 + 0x50) + lVar6;
        iVar3 = FUN_180899ef0(uVar8,lVar5);
        if (iVar3 != 0) {
          return;
        }
        uVar1 = *(uint *)(lVar5 + 0x10);
        puVar2 = *(undefined8 **)(unaff_RBX + 8);
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
        iVar3 = FUN_1808affb0(extraout_XMM0_Da_00,lVar5 + 0x14);
        if (iVar3 != 0) {
          return;
        }
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + 0x18;
        uVar8 = extraout_XMM0_Da_01;
      } while (lVar7 < unaff_RSI);
    }
    iVar3 = FUN_1808aca30(uVar8,unaff_R14 + 0x60);
    if (iVar3 == 0) {
      puVar2 = *(undefined8 **)(unaff_RBX + 8);
      iVar3 = *(int *)(unaff_R14 + 0x78);
      *(int *)(unaff_RBP + 0x20) = iVar3;
      iVar4 = (**(code **)*puVar2)(puVar2,unaff_RBP + 0x20,4);
      if (iVar4 == 0) {
        if (0 < iVar3) {
          do {
            lVar6 = *(longlong *)(unaff_R14 + 0x70);
            puVar2 = *(undefined8 **)(unaff_RBX + 8);
            *(undefined4 *)(unaff_RBP + 0x20) = *(undefined4 *)(lVar6 + unaff_RDI * 8);
            iVar4 = (**(code **)*puVar2)(puVar2,unaff_RBP + 0x20,4);
            if (iVar4 != 0) {
              return;
            }
            puVar2 = *(undefined8 **)(unaff_RBX + 8);
            *(undefined4 *)(unaff_RBP + 0x20) = *(undefined4 *)(lVar6 + 4 + unaff_RDI * 8);
            iVar4 = (**(code **)*puVar2)(puVar2,unaff_RBP + 0x20,4);
            if (iVar4 != 0) {
              return;
            }
            unaff_RDI = unaff_RDI + 1;
          } while (unaff_RDI < iVar3);
        }
        puVar2 = *(undefined8 **)(unaff_RBX + 8);
        *(undefined4 *)(unaff_RBP + 0x20) = *(undefined4 *)(unaff_R14 + 0x80);
        (**(code **)*puVar2)(puVar2,unaff_RBP + 0x20,4);
      }
    }
  }
  return;
}





// 函数: void FUN_180899c45(void)
void FUN_180899c45(void)

{
  return;
}





// 函数: void FUN_180899c54(void)
void FUN_180899c54(void)

{
  return;
}





// 函数: void FUN_180899c60(longlong param_1,undefined4 *param_2)
void FUN_180899c60(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 auStackX_8 [2];
  
  auStackX_8[0] = *param_2;
  iVar1 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),auStackX_8,4);
  if (((((iVar1 == 0) && (iVar1 = FUN_1808affb0(param_1,param_2 + 1), iVar1 == 0)) &&
       (((*(byte *)(param_2 + 1) & 0x20) == 0 ||
        (iVar1 = FUN_180899040(param_1,param_2 + 2), iVar1 == 0)))) &&
      (((iVar1 = FUN_1808b0010(param_1,param_2 + 0xe), iVar1 == 0 &&
        (iVar1 = FUN_1808b0010(param_1,param_2 + 0xf), iVar1 == 0)) &&
       (iVar1 = FUN_1808b0010(param_1,param_2 + 0x10), iVar1 == 0)))) &&
     (iVar1 = FUN_1808b0010(param_1,param_2 + 0x11), iVar1 == 0)) {
    if ((param_2[1] & 0x100) != 0) {
      auStackX_8[0] = param_2[0x12];
      iVar1 = (**(code **)**(undefined8 **)(param_1 + 8))
                        (*(undefined8 **)(param_1 + 8),auStackX_8,4);
      if (iVar1 != 0) {
        return;
      }
      iVar1 = FUN_180899ef0(param_1,param_2 + 0x13);
      if (iVar1 != 0) {
        return;
      }
    }
    if (((param_2[1] & 0x800) == 0) ||
       ((iVar1 = FUN_1808b0010(param_1,param_2 + 0x18), iVar1 == 0 &&
        (iVar1 = FUN_1808b0010(param_1,param_2 + 0x17), iVar1 == 0)))) {
      FUN_18089a750(param_1,param_2 + 0x19);
    }
  }
  return;
}





// 函数: void FUN_180899c96(void)
void FUN_180899c96(void)

{
  int iVar1;
  longlong unaff_RBX;
  longlong unaff_RDI;
  undefined4 in_stack_00000030;
  
  iVar1 = FUN_1808affb0();
  if (iVar1 == 0) {
    if (((*(byte *)(unaff_RBX + 4) & 0x20) != 0) && (iVar1 = FUN_180899040(), iVar1 != 0)) {
      return;
    }
    iVar1 = FUN_1808b0010();
    if ((((iVar1 == 0) && (iVar1 = FUN_1808b0010(), iVar1 == 0)) &&
        (iVar1 = FUN_1808b0010(), iVar1 == 0)) && (iVar1 = FUN_1808b0010(), iVar1 == 0)) {
      if ((*(uint *)(unaff_RBX + 4) & 0x100) != 0) {
        in_stack_00000030 = *(undefined4 *)(unaff_RBX + 0x48);
        iVar1 = (**(code **)**(undefined8 **)(unaff_RDI + 8))
                          (*(undefined8 **)(unaff_RDI + 8),&stack0x00000030,4);
        if (iVar1 != 0) {
          return;
        }
        iVar1 = FUN_180899ef0();
        if (iVar1 != 0) {
          return;
        }
      }
      if ((*(uint *)(unaff_RBX + 4) & 0x800) != 0) {
        iVar1 = FUN_1808b0010();
        if (iVar1 != 0) {
          return;
        }
        iVar1 = FUN_1808b0010();
        if (iVar1 != 0) {
          return;
        }
      }
      FUN_18089a750();
    }
  }
  return;
}





// 函数: void FUN_180899d7f(void)
void FUN_180899d7f(void)

{
  return;
}



undefined8 FUN_180899d90(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  undefined2 auStackX_8 [4];
  
  auStackX_8[0] = CONCAT11(auStackX_8[0]._1_1_,*(undefined1 *)(param_2 + 0x104));
  uVar1 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),auStackX_8,1);
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
        auStackX_8[0] = (undefined2)(int)(fVar4 * 65535.0);
        uVar1 = (**(code **)**(undefined8 **)(param_1 + 8))
                          (*(undefined8 **)(param_1 + 8),auStackX_8,2);
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
        auStackX_8[0] = (undefined2)(int)(fVar4 * 65535.0);
        uVar1 = (**(code **)**(undefined8 **)(param_1 + 8))
                          (*(undefined8 **)(param_1 + 8),auStackX_8,2);
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



undefined8 FUN_180899dc7(void)

{
  undefined8 uVar1;
  float *pfVar2;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int iVar3;
  float fVar4;
  undefined2 uStack0000000000000070;
  
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
      uStack0000000000000070 = (undefined2)(int)(fVar4 * 65535.0);
      uVar1 = (**(code **)**(undefined8 **)(unaff_RBP + 8))
                        (*(undefined8 **)(unaff_RBP + 8),&stack0x00000070,2);
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
      uStack0000000000000070 = (undefined2)(int)(fVar4 * 65535.0);
      uVar1 = (**(code **)**(undefined8 **)(unaff_RBP + 8))
                        (*(undefined8 **)(unaff_RBP + 8),&stack0x00000070,2);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      iVar3 = iVar3 + 1;
      pfVar2 = pfVar2 + 1;
    } while (iVar3 < *(short *)(unaff_RSI + 0x104));
  }
  return 0;
}





// 函数: void FUN_180899ed5(void)
void FUN_180899ed5(void)

{
  return;
}





// 函数: void FUN_180899ef0(longlong param_1,undefined4 *param_2)
void FUN_180899ef0(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 auStackX_8 [2];
  
  auStackX_8[0] = *param_2;
  iVar1 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),auStackX_8,4);
  if (iVar1 == 0) {
    auStackX_8[0]._0_2_ = *(undefined2 *)(param_2 + 1);
    iVar1 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),auStackX_8,2);
    if (iVar1 == 0) {
      auStackX_8[0] = CONCAT22(auStackX_8[0]._2_2_,*(undefined2 *)((longlong)param_2 + 6));
      iVar1 = (**(code **)**(undefined8 **)(param_1 + 8))
                        (*(undefined8 **)(param_1 + 8),auStackX_8,2);
      if (iVar1 == 0) {
        (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),param_2 + 2,8);
      }
    }
  }
  return;
}





// 函数: void FUN_180899f80(longlong param_1,undefined4 *param_2)
void FUN_180899f80(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 auStackX_8 [2];
  
  auStackX_8[0] = *param_2;
  iVar1 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),auStackX_8,4);
  if (iVar1 == 0) {
    auStackX_8[0] = param_2[1];
    (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),auStackX_8,4);
  }
  return;
}





