#include "TaleWorlds.Native.Split.h"

// 99_part_12_part080.c - 1 个函数

// 函数: void FUN_1808a0a15(void)
void FUN_1808a0a15(void)

{
  return;
}



ulonglong FUN_1808a0a1f(void)

{
  longlong lVar1;
  uint uVar2;
  int32_t *puVar3;
  ulonglong uVar4;
  longlong unaff_RBP;
  uint unaff_ESI;
  longlong *unaff_RDI;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  int32_t uVar5;
  int32_t in_stack_00000030;
  int32_t in_stack_00000038;
  int16_t uStack000000000000003c;
  int16_t uStack000000000000003e;
  int32_t in_stack_00000040;
  int32_t uStack0000000000000044;
  int16_t in_stack_000000c0;
  int16_t in_stack_000000c8;
  
  uVar2 = FUN_180899ef0(*unaff_RDI,unaff_RBP + 0x10);
  uVar4 = (ulonglong)uVar2;
  if (uVar2 == 0) {
    if (*(uint *)(unaff_RDI[1] + 0x18) == unaff_ESI) {
      uVar2 = FUN_180899ef0(*unaff_RDI,unaff_RBP + 0x38);
      uVar4 = (ulonglong)uVar2;
      if (uVar2 == 0) {
        puVar3 = (int32_t *)FUN_180847820();
        uVar5 = *puVar3;
        _uStack000000000000003c = puVar3[1];
        in_stack_00000040 = puVar3[2];
        uStack0000000000000044 = puVar3[3];
        in_stack_00000038 = uVar5;
        if (*(uint *)(unaff_RDI + 8) < 0x6d) {
          if (*(uint *)(unaff_RDI[1] + 0x18) == unaff_ESI) {
            lVar1 = *unaff_RDI;
            in_stack_00000030 = uVar5;
            unaff_ESI = (**(code **)**(uint64_t **)(lVar1 + 8))
                                  (*(uint64_t **)(lVar1 + 8),&stack0x00000030,4);
            uVar5 = extraout_XMM0_Da;
            if (unaff_ESI == 0) {
              in_stack_000000c0 = uStack000000000000003c;
              unaff_ESI = (**(code **)**(uint64_t **)(lVar1 + 8))
                                    (*(uint64_t **)(lVar1 + 8),&stack0x000000c0,2);
              uVar5 = extraout_XMM0_Da_00;
              if (unaff_ESI == 0) {
                in_stack_000000c8 = uStack000000000000003e;
                unaff_ESI = (**(code **)**(uint64_t **)(lVar1 + 8))
                                      (*(uint64_t **)(lVar1 + 8),&stack0x000000c8,2);
                uVar5 = extraout_XMM0_Da_01;
                if (unaff_ESI == 0) {
                  unaff_ESI = (**(code **)**(uint64_t **)(lVar1 + 8))
                                        (*(uint64_t **)(lVar1 + 8),&stack0x00000040,8);
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
            uVar4 = FUN_1808a5900(uVar5,unaff_RBP + 0x48,1);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            uVar5 = extraout_XMM0_Da_05;
            for (uVar4 = *(ulonglong *)(unaff_RBP + 0x48);
                (*(ulonglong *)(unaff_RBP + 0x48) <= uVar4 &&
                (uVar4 < (longlong)*(int *)(unaff_RBP + 0x50) * 0x1c +
                         *(ulonglong *)(unaff_RBP + 0x48))); uVar4 = uVar4 + 0x1c) {
              uVar5 = FUN_1807d3e20(unaff_RBP + 0x58);
            }
          }
          else {
            uVar4 = FUN_1808a7b00(uVar5,unaff_RBP + 0x58);
            uVar5 = extraout_XMM0_Da_03;
            if ((int)uVar4 != 0) {
              return uVar4;
            }
          }
          uVar4 = FUN_1808a7bf0(uVar5,unaff_RBP + 0x68,0x71);
          if ((int)uVar4 == 0) {
                    // WARNING: Subroutine does not return
            FUN_1808de000(extraout_XMM0_Da_04,&stack0x00000048);
          }
        }
        else {
          uVar4 = (ulonglong)unaff_ESI;
        }
      }
    }
    else {
      uVar4 = 0x1c;
    }
  }
  return uVar4;
}



ulonglong FUN_1808a0a8b(void)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  longlong *unaff_RDI;
  uint64_t in_stack_00000038;
  int16_t in_stack_000000c0;
  int16_t in_stack_000000c8;
  
  lVar1 = *unaff_RDI;
  uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))();
  if (uVar2 == 0) {
    in_stack_000000c0 = in_stack_00000038._4_2_;
    uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))
                      (*(uint64_t **)(lVar1 + 8),&stack0x000000c0,2);
    if (uVar2 == 0) {
      in_stack_000000c8 = in_stack_00000038._6_2_;
      uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))
                        (*(uint64_t **)(lVar1 + 8),&stack0x000000c8,2);
      if (uVar2 == 0) {
        uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))
                          (*(uint64_t **)(lVar1 + 8),&stack0x00000040,8);
      }
    }
  }
  if (uVar2 != 0) {
    return (ulonglong)uVar2;
  }
  if (*(uint *)(unaff_RDI + 8) < 0x82) {
    if (*(uint *)(unaff_RDI + 8) < 0x6a) {
      return unaff_RBX & 0xffffffff;
    }
    uVar3 = FUN_1808a5900();
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    for (uVar3 = *(ulonglong *)(unaff_RBP + 0x48);
        (*(ulonglong *)(unaff_RBP + 0x48) <= uVar3 &&
        (uVar3 < (longlong)*(int *)(unaff_RBP + 0x50) * 0x1c + *(ulonglong *)(unaff_RBP + 0x48)));
        uVar3 = uVar3 + 0x1c) {
      FUN_1807d3e20(unaff_RBP + 0x58);
    }
  }
  else {
    uVar3 = FUN_1808a7b00();
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  uVar3 = FUN_1808a7bf0();
  if ((int)uVar3 != 0) {
    return uVar3;
  }
                    // WARNING: Subroutine does not return
  FUN_1808de000();
}



ulonglong FUN_1808a0b11(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  uint unaff_ESI;
  longlong unaff_RDI;
  
  if (unaff_ESI != 0) {
    return (ulonglong)unaff_ESI;
  }
  if (*(uint *)(unaff_RDI + 0x40) < 0x82) {
    if (*(uint *)(unaff_RDI + 0x40) < 0x6a) {
      return unaff_RBX & 0xffffffff;
    }
    uVar1 = FUN_1808a5900();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    for (uVar1 = *(ulonglong *)(unaff_RBP + 0x48);
        (*(ulonglong *)(unaff_RBP + 0x48) <= uVar1 &&
        (uVar1 < (longlong)*(int *)(unaff_RBP + 0x50) * 0x1c + *(ulonglong *)(unaff_RBP + 0x48)));
        uVar1 = uVar1 + 0x1c) {
      FUN_1807d3e20(unaff_RBP + 0x58);
    }
  }
  else {
    uVar1 = FUN_1808a7b00();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  uVar1 = FUN_1808a7bf0();
  if ((int)uVar1 != 0) {
    return uVar1;
  }
                    // WARNING: Subroutine does not return
  FUN_1808de000();
}



ulonglong FUN_1808a0bf0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint64_t uVar5;
  uint auStackX_18 [2];
  int32_t auStackX_20 [2];
  uint auStack_68 [2];
  int8_t auStack_60 [32];
  int8_t auStack_40 [40];
  
  uVar2 = FUN_1808ddd30(param_2,auStack_40,1,0x5453494c,0x4d524150);
  if (((int)uVar2 == 0) &&
     (uVar2 = FUN_1808ddd30(param_2,auStack_60,0,0x424d5250,0), (int)uVar2 == 0)) {
    if (*(int *)(param_2[1] + 0x18) == 0) {
      uVar1 = FUN_180899ef0(*param_2,param_1 + 0x10);
      uVar2 = (ulonglong)uVar1;
      if (uVar1 == 0) {
        if (*(uint *)(param_2 + 8) < 0x70) {
          uVar2 = 0;
        }
        else if (*(int *)(param_2[1] + 0x18) == 0) {
          auStackX_18[0] = *(uint *)(param_1 + 0x34);
          uVar2 = (**(code **)**(uint64_t **)(*param_2 + 8))
                            (*(uint64_t **)(*param_2 + 8),auStackX_18,4);
        }
        else {
          uVar2 = 0x1c;
        }
        if ((int)uVar2 == 0) {
          if (*(uint *)(param_2 + 8) < 0x70) {
            if (*(int *)(param_2[1] + 0x18) == 0) {
              auStackX_18[0] = auStackX_18[0] & 0xffffff00;
              uVar2 = (**(code **)**(uint64_t **)(*param_2 + 8))
                                (*(uint64_t **)(*param_2 + 8),auStackX_18,1);
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
              auStackX_18[0] = 0;
              break;
            case 1:
              auStackX_18[0] = 1;
              break;
            case 2:
              auStackX_18[0] = 2;
              break;
            case 3:
              auStackX_18[0] = 3;
              break;
            case 4:
              auStackX_18[0] = 4;
              break;
            case 5:
              auStackX_18[0] = 5;
              break;
            case 6:
              auStackX_18[0] = 6;
              break;
            case 7:
              auStackX_18[0] = 7;
              break;
            case 8:
              auStackX_18[0] = 8;
              break;
            case 9:
              auStackX_18[0] = 9;
              break;
            default:
              auStackX_18[0] = 10;
            }
            uVar2 = (**(code **)**(uint64_t **)(*param_2 + 8))
                              (*(uint64_t **)(*param_2 + 8),auStackX_18,4);
            if ((((((int)uVar2 == 0) && (uVar2 = 0x1c, *(int *)(param_2[1] + 0x18) == 0)) &&
                 (uVar2 = FUN_1808a27f0(*param_2,param_1 + 0x50), (int)uVar2 == 0)) &&
                ((uVar2 = FUN_180898eb0(param_2,param_1 + 0x38), (int)uVar2 == 0 &&
                 (uVar2 = FUN_180898eb0(param_2,param_1 + 0x3c), (int)uVar2 == 0)))) &&
               ((uVar2 = FUN_180898eb0(param_2,param_1 + 0x4c), (int)uVar2 == 0 &&
                ((uVar2 = FUN_180898eb0(param_2,param_1 + 0x40), (int)uVar2 == 0 &&
                 (uVar2 = FUN_180898eb0(param_2,param_1 + 0x44), (int)uVar2 == 0)))))) {
              if (*(uint *)(param_2 + 8) < 0x70) {
                if (*(int *)(param_2[1] + 0x18) == 0) {
                  auStackX_18[0] = auStackX_18[0] & 0xffffff00;
                  uVar2 = (**(code **)**(uint64_t **)(*param_2 + 8))
                                    (*(uint64_t **)(*param_2 + 8),auStackX_18,1);
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
                  (uVar2 = FUN_1808de620(param_2), (int)uVar2 == 0)))) {
                if (*(uint *)(param_2 + 8) < 0x52) {
                  uVar2 = 0;
                }
                else if (*(int *)(param_2[1] + 0x18) == 0) {
                  auStackX_18[0] = *(uint *)(param_1 + 0x48);
                  uVar2 = (**(code **)**(uint64_t **)(*param_2 + 8))
                                    (*(uint64_t **)(*param_2 + 8),auStackX_18,4);
                }
                else {
                  uVar2 = 0x1c;
                }
                if ((int)uVar2 == 0) {
                  if ((int)param_2[8] - 0x52U < 0x1e) {
                    if (*(int *)(param_2[1] + 0x18) == 0) {
                      auStackX_18[0] = auStackX_18[0] & 0xffffff00;
                      uVar2 = (**(code **)**(uint64_t **)(*param_2 + 8))
                                        (*(uint64_t **)(*param_2 + 8),auStackX_18,1);
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
                        auStackX_18[0] = CONCAT22(auStackX_18[0]._2_2_,(short)uVar1);
                        uVar5 = 2;
                        puVar4 = auStackX_18;
                      }
                      else {
                        uVar5 = 4;
                        auStack_68[0] = (uVar1 & 0xffffc000 | 0x4000) * 2 | uVar1 & 0x7fff;
                        puVar4 = auStack_68;
                      }
                      uVar2 = (**(code **)**(uint64_t **)(*param_2 + 8))
                                        (*(uint64_t **)(*param_2 + 8),puVar4,uVar5);
                      if ((int)uVar2 != 0) {
                        return uVar2;
                      }
                      uVar2 = *(ulonglong *)(param_1 + 0x60);
                      while( true ) {
                        auStackX_20[0] = 0;
                        if ((uVar2 < *(ulonglong *)(param_1 + 0x60)) ||
                           ((longlong)*(int *)(param_1 + 0x68) * 0x10 +
                            *(ulonglong *)(param_1 + 0x60) <= uVar2)) break;
                        uVar3 = FUN_1808ddf00(param_2,0);
                        if ((int)uVar3 != 0) {
                          return uVar3;
                        }
                        if (*(int *)(param_2[1] + 0x18) != 0) {
                          return 0x1c;
                        }
                        uVar3 = FUN_1808a27f0(*param_2,uVar2);
                        if ((int)uVar3 != 0) {
                          return uVar3;
                        }
                        uVar3 = FUN_1808de160(param_2,auStackX_20);
                        if ((int)uVar3 != 0) {
                          return uVar3;
                        }
                        uVar2 = uVar2 + 0x10;
                      }
                    }
                    // WARNING: Subroutine does not return
                    FUN_1808de000(param_2,auStack_60);
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



ulonglong FUN_1808a0c29(int32_t param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int32_t *puVar4;
  longlong *unaff_RBX;
  longlong unaff_RSI;
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
  uint in_stack_00000030;
  uint in_stack_000000b0;
  int32_t in_stack_000000b8;
  
  uVar2 = FUN_1808ddd30(param_1,&stack0x00000038,0,0x424d5250,0);
  if ((int)uVar2 == 0) {
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      uVar1 = FUN_180899ef0(*unaff_RBX,unaff_RSI + 0x10);
      uVar2 = (ulonglong)uVar1;
      if (uVar1 == 0) {
        if (*(uint *)(unaff_RBX + 8) < 0x70) {
          uVar2 = 0;
        }
        else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
          in_stack_000000b0 = *(uint *)(unaff_RSI + 0x34);
          uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                            (*(uint64_t **)(*unaff_RBX + 8),&stack0x000000b0,4);
        }
        else {
          uVar2 = 0x1c;
        }
        if ((int)uVar2 == 0) {
          if (*(uint *)(unaff_RBX + 8) < 0x70) {
            if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
              in_stack_000000b0 = in_stack_000000b0 & 0xffffff00;
              uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                                (*(uint64_t **)(*unaff_RBX + 8),&stack0x000000b0,1);
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
              in_stack_000000b0 = 0;
              break;
            case 1:
              in_stack_000000b0 = 1;
              break;
            case 2:
              in_stack_000000b0 = 2;
              break;
            case 3:
              in_stack_000000b0 = 3;
              break;
            case 4:
              in_stack_000000b0 = 4;
              break;
            case 5:
              in_stack_000000b0 = 5;
              break;
            case 6:
              in_stack_000000b0 = 6;
              break;
            case 7:
              in_stack_000000b0 = 7;
              break;
            case 8:
              in_stack_000000b0 = 8;
              break;
            case 9:
              in_stack_000000b0 = 9;
              break;
            default:
              in_stack_000000b0 = 10;
            }
            uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                              (*(uint64_t **)(*unaff_RBX + 8),&stack0x000000b0,4);
            if ((((((int)uVar2 == 0) && (uVar2 = 0x1c, *(int *)(unaff_RBX[1] + 0x18) == 0)) &&
                 (uVar2 = FUN_1808a27f0(*unaff_RBX,unaff_RSI + 0x50), (int)uVar2 == 0)) &&
                ((uVar2 = FUN_180898eb0(extraout_XMM0_Da,unaff_RSI + 0x38), (int)uVar2 == 0 &&
                 (uVar2 = FUN_180898eb0(extraout_XMM0_Da_00,unaff_RSI + 0x3c), (int)uVar2 == 0))))
               && ((uVar2 = FUN_180898eb0(extraout_XMM0_Da_01,unaff_RSI + 0x4c), (int)uVar2 == 0 &&
                   ((uVar2 = FUN_180898eb0(extraout_XMM0_Da_02,unaff_RSI + 0x40), (int)uVar2 == 0 &&
                    (uVar2 = FUN_180898eb0(extraout_XMM0_Da_03,unaff_RSI + 0x44), (int)uVar2 == 0)))
                   ))) {
              uVar6 = extraout_XMM0_Da_04;
              if (*(uint *)(unaff_RBX + 8) < 0x70) {
                if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                  in_stack_000000b0 = in_stack_000000b0 & 0xffffff00;
                  uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                                    (*(uint64_t **)(*unaff_RBX + 8),&stack0x000000b0,1);
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
                  (uVar2 = FUN_1808de620(), uVar6 = extraout_XMM0_Da_06, (int)uVar2 == 0)))) {
                if (*(uint *)(unaff_RBX + 8) < 0x52) {
                  uVar2 = 0;
                }
                else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                  in_stack_000000b0 = *(uint *)(unaff_RSI + 0x48);
                  uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                                    (*(uint64_t **)(*unaff_RBX + 8),&stack0x000000b0,4);
                  uVar6 = extraout_XMM0_Da_07;
                }
                else {
                  uVar2 = 0x1c;
                }
                if ((int)uVar2 == 0) {
                  if ((int)unaff_RBX[8] - 0x52U < 0x1e) {
                    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                      in_stack_000000b0 = in_stack_000000b0 & 0xffffff00;
                      uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                                        (*(uint64_t **)(*unaff_RBX + 8),&stack0x000000b0,1);
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
                        in_stack_000000b0 = CONCAT22(in_stack_000000b0._2_2_,(short)uVar1);
                        uVar5 = 2;
                        puVar4 = &stack0x000000b0;
                      }
                      else {
                        uVar5 = 4;
                        in_stack_00000030 = (uVar1 & 0xffffc000 | 0x4000) * 2 | uVar1 & 0x7fff;
                        puVar4 = &stack0x00000030;
                      }
                      uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                                        (*(uint64_t **)(*unaff_RBX + 8),puVar4,uVar5);
                      if ((int)uVar2 != 0) {
                        return uVar2;
                      }
                      uVar2 = *(ulonglong *)(unaff_RSI + 0x60);
                      uVar6 = extraout_XMM0_Da_09;
                      while( true ) {
                        in_stack_000000b8 = 0;
                        if ((uVar2 < *(ulonglong *)(unaff_RSI + 0x60)) ||
                           ((longlong)*(int *)(unaff_RSI + 0x68) * 0x10 +
                            *(ulonglong *)(unaff_RSI + 0x60) <= uVar2)) break;
                        uVar3 = FUN_1808ddf00(uVar6,0);
                        if ((int)uVar3 != 0) {
                          return uVar3;
                        }
                        if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
                          return 0x1c;
                        }
                        uVar3 = FUN_1808a27f0(*unaff_RBX,uVar2);
                        if ((int)uVar3 != 0) {
                          return uVar3;
                        }
                        uVar3 = FUN_1808de160(extraout_XMM0_Da_10,&stack0x000000b8);
                        if ((int)uVar3 != 0) {
                          return uVar3;
                        }
                        uVar2 = uVar2 + 0x10;
                        uVar6 = extraout_XMM0_Da_11;
                      }
                    }
                    // WARNING: Subroutine does not return
                    FUN_1808de000(uVar6,&stack0x00000038);
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



ulonglong FUN_1808a0c5b(void)

{
  uint uVar1;
  longlong in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  int32_t *puVar4;
  longlong *unaff_RBX;
  longlong unaff_RSI;
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
  uint in_stack_00000030;
  uint in_stack_000000b0;
  uint in_stack_000000b8;
  
  if (*(uint *)(in_RAX + 0x18) == unaff_R14D) {
    uVar1 = FUN_180899ef0(*unaff_RBX,unaff_RSI + 0x10);
    uVar2 = (ulonglong)uVar1;
    if (uVar1 == 0) {
      if (*(uint *)(unaff_RBX + 8) < 0x70) {
        uVar2 = (ulonglong)unaff_R14D;
      }
      else if (*(uint *)(unaff_RBX[1] + 0x18) == unaff_R14D) {
        in_stack_000000b0 = *(int32_t *)(unaff_RSI + 0x34);
        uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                          (*(uint64_t **)(*unaff_RBX + 8),&stack0x000000b0,4);
      }
      else {
        uVar2 = 0x1c;
      }
      if ((int)uVar2 == 0) {
        uVar6 = (int8_t)unaff_R14D;
        if (*(uint *)(unaff_RBX + 8) < 0x70) {
          if (*(uint *)(unaff_RBX[1] + 0x18) == unaff_R14D) {
            in_stack_000000b0 = CONCAT31(in_stack_000000b0._1_3_,uVar6);
            uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                              (*(uint64_t **)(*unaff_RBX + 8),&stack0x000000b0,1);
          }
          else {
            uVar2 = 0x1c;
          }
        }
        else {
          uVar2 = (ulonglong)unaff_R14D;
        }
        if (((int)uVar2 == 0) && (uVar2 = 0x1c, *(uint *)(unaff_RBX[1] + 0x18) == unaff_R14D)) {
          switch(*(int32_t *)(unaff_RSI + 0x30)) {
          case 0:
            in_stack_000000b0 = unaff_R14D;
            break;
          case 1:
            in_stack_000000b0 = 1;
            break;
          case 2:
            in_stack_000000b0 = 2;
            break;
          case 3:
            in_stack_000000b0 = 3;
            break;
          case 4:
            in_stack_000000b0 = 4;
            break;
          case 5:
            in_stack_000000b0 = 5;
            break;
          case 6:
            in_stack_000000b0 = 6;
            break;
          case 7:
            in_stack_000000b0 = 7;
            break;
          case 8:
            in_stack_000000b0 = 8;
            break;
          case 9:
            in_stack_000000b0 = 9;
            break;
          default:
            in_stack_000000b0 = 10;
          }
          uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                            (*(uint64_t **)(*unaff_RBX + 8),&stack0x000000b0,4);
          if ((((((int)uVar2 == 0) && (uVar2 = 0x1c, *(uint *)(unaff_RBX[1] + 0x18) == unaff_R14D))
               && (uVar2 = FUN_1808a27f0(*unaff_RBX,unaff_RSI + 0x50), (int)uVar2 == 0)) &&
              ((uVar2 = FUN_180898eb0(extraout_XMM0_Da,unaff_RSI + 0x38), (int)uVar2 == 0 &&
               (uVar2 = FUN_180898eb0(extraout_XMM0_Da_00,unaff_RSI + 0x3c), (int)uVar2 == 0)))) &&
             ((uVar2 = FUN_180898eb0(extraout_XMM0_Da_01,unaff_RSI + 0x4c), (int)uVar2 == 0 &&
              ((uVar2 = FUN_180898eb0(extraout_XMM0_Da_02,unaff_RSI + 0x40), (int)uVar2 == 0 &&
               (uVar2 = FUN_180898eb0(extraout_XMM0_Da_03,unaff_RSI + 0x44), (int)uVar2 == 0)))))) {
            uVar7 = extraout_XMM0_Da_04;
            if (*(uint *)(unaff_RBX + 8) < 0x70) {
              if (*(uint *)(unaff_RBX[1] + 0x18) == unaff_R14D) {
                in_stack_000000b0 = CONCAT31(in_stack_000000b0._1_3_,uVar6);
                uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                                  (*(uint64_t **)(*unaff_RBX + 8),&stack0x000000b0,1);
                uVar7 = extraout_XMM0_Da_05;
              }
              else {
                uVar2 = 0x1c;
              }
            }
            else {
              uVar2 = (ulonglong)unaff_R14D;
            }
            if (((int)uVar2 == 0) &&
               ((0x5f < *(uint *)(unaff_RBX + 8) ||
                (uVar2 = FUN_1808de620(), uVar7 = extraout_XMM0_Da_06, (int)uVar2 == 0)))) {
              if (*(uint *)(unaff_RBX + 8) < 0x52) {
                uVar2 = (ulonglong)unaff_R14D;
              }
              else if (*(uint *)(unaff_RBX[1] + 0x18) == unaff_R14D) {
                in_stack_000000b0 = *(uint *)(unaff_RSI + 0x48);
                uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                                  (*(uint64_t **)(*unaff_RBX + 8),&stack0x000000b0,4);
                uVar7 = extraout_XMM0_Da_07;
              }
              else {
                uVar2 = 0x1c;
              }
              if ((int)uVar2 == 0) {
                if ((int)unaff_RBX[8] - 0x52U < 0x1e) {
                  if (*(uint *)(unaff_RBX[1] + 0x18) == unaff_R14D) {
                    in_stack_000000b0 = CONCAT31(in_stack_000000b0._1_3_,uVar6);
                    uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                                      (*(uint64_t **)(*unaff_RBX + 8),&stack0x000000b0,1);
                    uVar7 = extraout_XMM0_Da_08;
                  }
                  else {
                    uVar2 = 0x1c;
                  }
                }
                else {
                  uVar2 = (ulonglong)unaff_R14D;
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
                      in_stack_000000b0 = CONCAT22(in_stack_000000b0._2_2_,(short)uVar1);
                      uVar5 = 2;
                      puVar4 = &stack0x000000b0;
                    }
                    else {
                      uVar5 = 4;
                      in_stack_00000030 = (uVar1 & 0xffffc000 | 0x4000) * 2 | uVar1 & 0x7fff;
                      puVar4 = &stack0x00000030;
                    }
                    uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                                      (*(uint64_t **)(*unaff_RBX + 8),puVar4,uVar5);
                    if ((int)uVar2 != 0) {
                      return uVar2;
                    }
                    uVar7 = extraout_XMM0_Da_09;
                    for (uVar2 = *(ulonglong *)(unaff_RSI + 0x60);
                        (in_stack_000000b8 = unaff_R14D, *(ulonglong *)(unaff_RSI + 0x60) <= uVar2
                        && (uVar2 < (longlong)*(int *)(unaff_RSI + 0x68) * 0x10 +
                                    *(ulonglong *)(unaff_RSI + 0x60))); uVar2 = uVar2 + 0x10) {
                      uVar3 = FUN_1808ddf00(uVar7,0);
                      if ((int)uVar3 != 0) {
                        return uVar3;
                      }
                      if (*(uint *)(unaff_RBX[1] + 0x18) != unaff_R14D) {
                        return 0x1c;
                      }
                      uVar3 = FUN_1808a27f0(*unaff_RBX,uVar2);
                      if ((int)uVar3 != 0) {
                        return uVar3;
                      }
                      uVar3 = FUN_1808de160(extraout_XMM0_Da_10,&stack0x000000b8);
                      if ((int)uVar3 != 0) {
                        return uVar3;
                      }
                      uVar7 = extraout_XMM0_Da_11;
                    }
                  }
                    // WARNING: Subroutine does not return
                  FUN_1808de000(uVar7,&stack0x00000038);
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






