#include "TaleWorlds.Native.Split.h"

// 99_part_12_part079.c - 5 个函数

// 函数: void FUN_1808a0634(void)
void FUN_1808a0634(void)

{
  return;
}






// 函数: void FUN_1808a0640(uint64_t param_1,int64_t param_2)
void FUN_1808a0640(uint64_t param_1,int64_t param_2)

{
  FUN_18089f530(param_1,param_2,0x5355424d,0x4253424d,0x48 < *(uint *)(param_2 + 0x40));
  return;
}



uint64_t FUN_1808a0670(int64_t param_1,int64_t *param_2)

{
  uint uVar1;
  uint64_t uVar2;
  uint *puVar3;
  uint64_t uVar4;
  uint auStackX_18 [2];
  int32_t auStackX_20 [2];
  uint auStack_18 [4];
  
  uVar2 = FUN_1808ddf00(param_2,0);
  if ((int)uVar2 == 0) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    auStackX_18[0] = *(uint *)(param_1 + 0x30);
    uVar2 = (**(code **)**(uint64_t **)(*param_2 + 8))
                      (*(uint64_t **)(*param_2 + 8),auStackX_18,4);
    if ((int)uVar2 == 0) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      auStackX_18[0] = *(uint *)(param_1 + 0x34);
      uVar2 = (**(code **)**(uint64_t **)(*param_2 + 8))
                        (*(uint64_t **)(*param_2 + 8),auStackX_18,4);
      if (((int)uVar2 == 0) && (uVar2 = FUN_1808de160(param_2,0), (int)uVar2 == 0)) {
        if (0x6b < *(uint *)(param_2 + 8)) {
          uVar1 = *(int *)(param_1 + 0x40) * 2;
          if ((uVar1 | 1) < 0x8000) {
            auStackX_18[0] = CONCAT22(auStackX_18[0]._2_2_,(short)(uVar1 | 1));
            uVar2 = 2;
            puVar3 = auStackX_18;
          }
          else {
            uVar2 = 4;
            auStack_18[0] = (uVar1 & 0xffffc000 | 0x4000) * 2 | uVar1 & 0x7fff | 1;
            puVar3 = auStack_18;
          }
          uVar2 = (**(code **)**(uint64_t **)(*param_2 + 8))
                            (*(uint64_t **)(*param_2 + 8),puVar3,uVar2);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar4 = *(uint64_t *)(param_1 + 0x38);
          auStackX_20[0] = 0;
          for (; (*(uint64_t *)(param_1 + 0x38) <= uVar4 &&
                 (uVar4 < (int64_t)*(int *)(param_1 + 0x40) * 0x10 + *(uint64_t *)(param_1 + 0x38)
                 )); uVar4 = uVar4 + 0x10) {
            uVar2 = FUN_1808ddf00(param_2,auStackX_20[0]);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            if (*(int *)(param_2[1] + 0x18) != 0) {
              return 0x1c;
            }
            uVar2 = FUN_180899ef0(*param_2,uVar4);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            uVar2 = FUN_1808de160(param_2,auStackX_20);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
          }
        }
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



uint64_t FUN_1808a0720(void)

{
  uint uVar1;
  uint *puVar2;
  int64_t *unaff_RBX;
  int64_t unaff_RSI;
  uint64_t uVar3;
  uint64_t uVar4;
  bool in_CF;
  uint auStackX_20 [2];
  int16_t in_stack_00000050;
  int32_t in_stack_00000058;
  
  if (!in_CF) {
    uVar1 = *(int *)(unaff_RSI + 0x40) * 2;
    if ((uVar1 | 1) < 0x8000) {
      in_stack_00000050 = (int16_t)(uVar1 | 1);
      uVar4 = 2;
      puVar2 = (uint *)&stack0x00000050;
    }
    else {
      uVar4 = 4;
      auStackX_20[0] = (uVar1 & 0xffffc000 | 0x4000) * 2 | uVar1 & 0x7fff | 1;
      puVar2 = auStackX_20;
    }
    uVar4 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                      (*(uint64_t **)(*unaff_RBX + 8),puVar2,uVar4);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar3 = *(uint64_t *)(unaff_RSI + 0x38);
    in_stack_00000058 = 0;
    for (; (*(uint64_t *)(unaff_RSI + 0x38) <= uVar3 &&
           (uVar3 < (int64_t)*(int *)(unaff_RSI + 0x40) * 0x10 + *(uint64_t *)(unaff_RSI + 0x38)))
        ; uVar3 = uVar3 + 0x10) {
      uVar4 = FUN_1808ddf00();
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar4 = FUN_180899ef0(*unaff_RBX,uVar3);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      uVar4 = FUN_1808de160();
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
  }
  return 0;
}






// 函数: void FUN_1808a07f7(void)
void FUN_1808a07f7(void)

{
  return;
}



uint64_t FUN_1808a0810(int64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  int8_t auStack_28 [32];
  
  if (*(uint *)(param_1 + 0x40) < 0x55) {
    uVar1 = FUN_1808a4260(param_1,0x55444f4d,param_2);
    if ((int)uVar1 == 0) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = FUN_1808ddd30(param_1,auStack_28,1,0x5453494c,0x55444f4d);
    if ((int)uVar1 == 0) {
      uVar1 = FUN_1808a4260(param_1,0x42444f4d,param_2);
      if ((int)uVar1 == 0) {
        uVar1 = FUN_1808a1610(*param_2,param_1);
        if ((int)uVar1 == 0) {
                    // WARNING: Subroutine does not return
          FUN_1808de000(param_1,auStack_28);
        }
      }
    }
  }
  return uVar1;
}



uint64_t FUN_1808a08b0(int64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  int8_t auStack_48 [32];
  int8_t auStack_28 [32];
  
  uVar1 = FUN_1808ddd30(param_2,auStack_28,1,0x5453494c,0x5449554d);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_1808ddd30(param_2,auStack_48,0,0x4249554d,0);
    if ((int)uVar1 == 0) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar1 = FUN_180899ef0(*param_2,param_1 + 0x10);
      if ((int)uVar1 == 0) {
                    // WARNING: Subroutine does not return
        FUN_1808de000(param_2,auStack_48);
      }
    }
  }
  return uVar1;
}






// 函数: void FUN_1808a0970(uint64_t param_1,uint64_t param_2)
void FUN_1808a0970(uint64_t param_1,uint64_t param_2)

{
  FUN_18089f530(param_1,param_2,0x54524f50,0x42545250,1);
  return;
}



uint64_t FUN_1808a0990(int64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  uint64_t uVar4;
  int32_t *puVar5;
  int16_t auStackX_18 [4];
  int16_t auStackX_20 [4];
  int32_t auStack_78 [2];
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  int8_t auStack_60 [32];
  int8_t auStack_40 [40];
  
  uVar4 = FUN_1808ddd30(param_2,auStack_40,1,0x5453494c,0x4f4c4d50);
  if ((int)uVar4 == 0) {
    uVar3 = 0;
    uVar4 = FUN_1808ddd30(param_2,auStack_60,0,0x424c4d50,0);
    if ((int)uVar4 == 0) {
      if (*(int *)(param_2[1] + 0x18) == 0) {
        uVar2 = FUN_180899ef0(*param_2,param_1 + 0x10);
        if (uVar2 != 0) {
          return (uint64_t)uVar2;
        }
        if (*(int *)(param_2[1] + 0x18) == 0) {
          uVar2 = FUN_180899ef0(*param_2,param_1 + 0x38);
          if (uVar2 != 0) {
            return (uint64_t)uVar2;
          }
          puVar5 = (int32_t *)FUN_180847820();
          uStack_70 = *puVar5;
          uStack_6c = puVar5[1];
          uStack_68 = puVar5[2];
          uStack_64 = puVar5[3];
          if (*(uint *)(param_2 + 8) < 0x6d) {
            if (*(int *)(param_2[1] + 0x18) == 0) {
              lVar1 = *param_2;
              auStack_78[0] = uStack_70;
              uVar3 = (**(code **)**(uint64_t **)(lVar1 + 8))
                                (*(uint64_t **)(lVar1 + 8),auStack_78,4);
              if (uVar3 == 0) {
                auStackX_18[0] = (int16_t)uStack_6c;
                uVar3 = (**(code **)**(uint64_t **)(lVar1 + 8))
                                  (*(uint64_t **)(lVar1 + 8),auStackX_18,2);
                if (uVar3 == 0) {
                  auStackX_20[0] = uStack_6c._2_2_;
                  uVar3 = (**(code **)**(uint64_t **)(lVar1 + 8))
                                    (*(uint64_t **)(lVar1 + 8),auStackX_20,2);
                  if (uVar3 == 0) {
                    uVar3 = (**(code **)**(uint64_t **)(lVar1 + 8))
                                      (*(uint64_t **)(lVar1 + 8),&uStack_68,8);
                  }
                }
              }
            }
            else {
              uVar3 = 0x1c;
            }
          }
          if (uVar3 != 0) {
            return (uint64_t)uVar3;
          }
          if (*(uint *)(param_2 + 8) < 0x82) {
            if (*(uint *)(param_2 + 8) < 0x6a) {
              return 0x1c;
            }
            uVar4 = FUN_1808a5900(param_2,param_1 + 0x48,1);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            for (uVar4 = *(uint64_t *)(param_1 + 0x48);
                (*(uint64_t *)(param_1 + 0x48) <= uVar4 &&
                (uVar4 < (int64_t)*(int *)(param_1 + 0x50) * 0x1c + *(uint64_t *)(param_1 + 0x48))
                ); uVar4 = uVar4 + 0x1c) {
              FUN_1807d3e20(param_1 + 0x58);
            }
          }
          else {
            uVar4 = FUN_1808a7b00(param_2,param_1 + 0x58);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
          }
          uVar4 = FUN_1808a7bf0(param_2,param_1 + 0x68,0x71);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
                    // WARNING: Subroutine does not return
          FUN_1808de000(param_2,auStack_60);
        }
      }
      uVar4 = 0x1c;
    }
  }
  return uVar4;
}



uint64_t FUN_1808a09c5(int32_t param_1)

{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  uint64_t uVar4;
  int32_t *puVar5;
  int64_t unaff_RBP;
  int64_t *unaff_RDI;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  int32_t uVar6;
  int32_t in_stack_00000030;
  int32_t in_stack_00000038;
  int16_t uStack000000000000003c;
  int16_t uStack000000000000003e;
  int32_t in_stack_00000040;
  int32_t uStack0000000000000044;
  int16_t in_stack_000000c0;
  int16_t in_stack_000000c8;
  
  uVar3 = 0;
  uVar4 = FUN_1808ddd30(param_1,&stack0x00000048,0,0x424c4d50,0);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
    uVar2 = FUN_180899ef0(*unaff_RDI,unaff_RBP + 0x10);
    if (uVar2 != 0) {
      return (uint64_t)uVar2;
    }
    if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
      uVar2 = FUN_180899ef0(*unaff_RDI,unaff_RBP + 0x38);
      if (uVar2 != 0) {
        return (uint64_t)uVar2;
      }
      puVar5 = (int32_t *)FUN_180847820();
      uVar6 = *puVar5;
      _uStack000000000000003c = puVar5[1];
      in_stack_00000040 = puVar5[2];
      uStack0000000000000044 = puVar5[3];
      in_stack_00000038 = uVar6;
      if (*(uint *)(unaff_RDI + 8) < 0x6d) {
        if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
          lVar1 = *unaff_RDI;
          in_stack_00000030 = uVar6;
          uVar3 = (**(code **)**(uint64_t **)(lVar1 + 8))
                            (*(uint64_t **)(lVar1 + 8),&stack0x00000030,4);
          uVar6 = extraout_XMM0_Da;
          if (uVar3 == 0) {
            in_stack_000000c0 = uStack000000000000003c;
            uVar3 = (**(code **)**(uint64_t **)(lVar1 + 8))
                              (*(uint64_t **)(lVar1 + 8),&stack0x000000c0,2);
            uVar6 = extraout_XMM0_Da_00;
            if (uVar3 == 0) {
              in_stack_000000c8 = uStack000000000000003e;
              uVar3 = (**(code **)**(uint64_t **)(lVar1 + 8))
                                (*(uint64_t **)(lVar1 + 8),&stack0x000000c8,2);
              uVar6 = extraout_XMM0_Da_01;
              if (uVar3 == 0) {
                uVar3 = (**(code **)**(uint64_t **)(lVar1 + 8))
                                  (*(uint64_t **)(lVar1 + 8),&stack0x00000040,8);
                uVar6 = extraout_XMM0_Da_02;
              }
            }
          }
        }
        else {
          uVar3 = 0x1c;
        }
      }
      if (uVar3 != 0) {
        return (uint64_t)uVar3;
      }
      if (*(uint *)(unaff_RDI + 8) < 0x82) {
        if (*(uint *)(unaff_RDI + 8) < 0x6a) {
          return 0x1c;
        }
        uVar4 = FUN_1808a5900(uVar6,unaff_RBP + 0x48,1);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        uVar6 = extraout_XMM0_Da_05;
        for (uVar4 = *(uint64_t *)(unaff_RBP + 0x48);
            (*(uint64_t *)(unaff_RBP + 0x48) <= uVar4 &&
            (uVar4 < (int64_t)*(int *)(unaff_RBP + 0x50) * 0x1c + *(uint64_t *)(unaff_RBP + 0x48))
            ); uVar4 = uVar4 + 0x1c) {
          uVar6 = FUN_1807d3e20(unaff_RBP + 0x58);
        }
      }
      else {
        uVar4 = FUN_1808a7b00(uVar6,unaff_RBP + 0x58);
        uVar6 = extraout_XMM0_Da_03;
        if ((int)uVar4 != 0) {
          return uVar4;
        }
      }
      uVar4 = FUN_1808a7bf0(uVar6,unaff_RBP + 0x68,0x71);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
                    // WARNING: Subroutine does not return
      FUN_1808de000(extraout_XMM0_Da_04,&stack0x00000048);
    }
  }
  return 0x1c;
}



uint64_t FUN_1808a09f1(void)

{
  int64_t lVar1;
  uint uVar2;
  int64_t in_RAX;
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
  int32_t in_stack_00000030;
  int32_t in_stack_00000038;
  int16_t uStack000000000000003c;
  int16_t uStack000000000000003e;
  int32_t in_stack_00000040;
  int32_t uStack0000000000000044;
  int16_t in_stack_000000c0;
  int16_t in_stack_000000c8;
  
  if (*(uint *)(in_RAX + 0x18) == unaff_ESI) {
    uVar2 = FUN_180899ef0(*unaff_RDI,unaff_RBP + 0x10);
    if (uVar2 != 0) {
      return (uint64_t)uVar2;
    }
    if (*(uint *)(unaff_RDI[1] + 0x18) == unaff_ESI) {
      uVar2 = FUN_180899ef0(*unaff_RDI,unaff_RBP + 0x38);
      if (uVar2 != 0) {
        return (uint64_t)uVar2;
      }
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
      if (unaff_ESI != 0) {
        return (uint64_t)unaff_ESI;
      }
      if (*(uint *)(unaff_RDI + 8) < 0x82) {
        if (*(uint *)(unaff_RDI + 8) < 0x6a) {
          return 0x1c;
        }
        uVar4 = FUN_1808a5900(uVar5,unaff_RBP + 0x48,1);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        uVar5 = extraout_XMM0_Da_05;
        for (uVar4 = *(uint64_t *)(unaff_RBP + 0x48);
            (*(uint64_t *)(unaff_RBP + 0x48) <= uVar4 &&
            (uVar4 < (int64_t)*(int *)(unaff_RBP + 0x50) * 0x1c + *(uint64_t *)(unaff_RBP + 0x48))
            ); uVar4 = uVar4 + 0x1c) {
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
      if ((int)uVar4 != 0) {
        return uVar4;
      }
                    // WARNING: Subroutine does not return
      FUN_1808de000(extraout_XMM0_Da_04,&stack0x00000048);
    }
  }
  return 0x1c;
}






// 函数: void FUN_1808a0a0d(void)
void FUN_1808a0a0d(void)

{
  return;
}






