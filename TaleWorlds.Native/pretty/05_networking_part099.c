#include "TaleWorlds.Native.Split.h"

// 05_networking_part099.c - 7 个函数

// 函数: void FUN_180899fe0(int64_t param_1,int32_t *param_2)
void FUN_180899fe0(int64_t param_1,int32_t *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t uStackX_8;
  
  uStackX_8 = CONCAT44(uStackX_8._4_4_,*param_2);
  iVar2 = (**(code **)**(uint64_t **)(param_1 + 8))(*(uint64_t **)(param_1 + 8),&uStackX_8,4);
  if (iVar2 == 0) {
    uStackX_8 = *(uint64_t *)(param_2 + 2);
    iVar2 = (**(code **)**(uint64_t **)(param_1 + 8))(*(uint64_t **)(param_1 + 8),&uStackX_8,8);
    if (iVar2 == 0) {
      uStackX_8 = CONCAT71(uStackX_8._1_7_,*(int8_t *)(param_2 + 0x68));
      iVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                        (*(uint64_t **)(param_1 + 8),&uStackX_8,1);
      if (iVar2 == 0) {
        iVar2 = 0;
        if (0 < (int)param_2[0x68]) {
          do {
            iVar3 = FUN_180899100(param_1,param_2 + (int64_t)iVar2 * 0xc + 4);
            if (iVar3 != 0) {
              return;
            }
            iVar3 = FUN_180899100(param_1,param_2 + (int64_t)iVar2 * 0xc + 7);
            if (iVar3 != 0) {
              return;
            }
            iVar3 = FUN_180899100(param_1,param_2 + (int64_t)iVar2 * 0xc + 10);
            if (iVar3 != 0) {
              return;
            }
            iVar3 = FUN_180899100(param_1,param_2 + (int64_t)iVar2 * 0xc + 0xd);
            if (iVar3 != 0) {
              return;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < (int)param_2[0x68]);
        }
        uVar1 = param_2[100];
        if (uVar1 < 0x8000) {
          uStackX_8 = CONCAT62(uStackX_8._2_6_,(short)uVar1);
          uVar4 = 2;
        }
        else {
          uVar4 = 4;
          uStackX_8 = CONCAT44(uStackX_8._4_4_,(uVar1 & 0xffffc000 | 0x4000) * 2 | uVar1 & 0x7fff);
        }
        iVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                          (*(uint64_t **)(param_1 + 8),&uStackX_8,uVar4);
        if (iVar2 == 0) {
          uStackX_8._0_4_ = param_2[0x65];
          iVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                            (*(uint64_t **)(param_1 + 8),&uStackX_8,4);
          if (((iVar2 == 0) && (iVar2 = FUN_1808aff40(param_1,param_2 + 0x66), iVar2 == 0)) &&
             (iVar2 = FUN_1808aff40(param_1,param_2 + 0x67), iVar2 == 0)) {
            uStackX_8._0_4_ = param_2[0x69];
            iVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                              (*(uint64_t **)(param_1 + 8),&uStackX_8,4);
            if (iVar2 == 0) {
              uStackX_8._0_4_ = param_2[0x6a];
              iVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                                (*(uint64_t **)(param_1 + 8),&uStackX_8,4);
              if (iVar2 == 0) {
                uStackX_8._0_4_ = param_2[0x6b];
                iVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                                  (*(uint64_t **)(param_1 + 8),&uStackX_8,4);
                if (iVar2 == 0) {
                  uStackX_8._0_4_ = param_2[0x6d];
                  iVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                                    (*(uint64_t **)(param_1 + 8),&uStackX_8,4);
                  if (iVar2 == 0) {
                    uStackX_8._0_4_ = param_2[0x6e];
                    iVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                                      (*(uint64_t **)(param_1 + 8),&uStackX_8,4);
                    if (iVar2 == 0) {
                      uStackX_8._0_4_ = param_2[0x6c];
                      iVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                                        (*(uint64_t **)(param_1 + 8),&uStackX_8,4);
                      if (iVar2 == 0) {
                        uStackX_8 = CONCAT44(uStackX_8._4_4_,param_2[0x6f]);
                        iVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                                          (*(uint64_t **)(param_1 + 8),&uStackX_8,4);
                        if (iVar2 == 0) {
                          uStackX_8 = *(uint64_t *)(param_2 + 0x70);
                          iVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                                            (*(uint64_t **)(param_1 + 8),&uStackX_8,8);
                          if (iVar2 == 0) {
                            uStackX_8 = *(uint64_t *)(param_2 + 0x72);
                            iVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                                              (*(uint64_t **)(param_1 + 8),&uStackX_8,8);
                            if (iVar2 == 0) {
                              uStackX_8 = *(uint64_t *)(param_2 + 0x74);
                              iVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                                                (*(uint64_t **)(param_1 + 8),&uStackX_8,8);
                              if (iVar2 == 0) {
                                uStackX_8._0_4_ = param_2[0x77];
                                iVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                                                  (*(uint64_t **)(param_1 + 8),&uStackX_8,4);
                                if (iVar2 == 0) {
                                  uStackX_8._0_4_ = param_2[0x76];
                                  iVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                                                    (*(uint64_t **)(param_1 + 8),&uStackX_8,4);
                                  if (iVar2 == 0) {
                                    uStackX_8 = CONCAT44(uStackX_8._4_4_,param_2[0x78]);
                                    (**(code **)**(uint64_t **)(param_1 + 8))
                                              (*(uint64_t **)(param_1 + 8),&uStackX_8,4);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
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





// 函数: void FUN_18089a059(int32_t param_1)
void FUN_18089a059(int32_t param_1)

{
  uint uVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t lVar4;
  int64_t unaff_RDI;
  uint64_t uVar5;
  int iVar6;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  
  iVar6 = 0;
  if (0 < *(int *)(unaff_RDI + 0x1a0)) {
    do {
      lVar4 = (int64_t)iVar6 * 0x30 + unaff_RDI;
      iVar3 = FUN_180899100(param_1,lVar4 + 0x10);
      if (iVar3 != 0) {
        return;
      }
      iVar3 = FUN_180899100(extraout_XMM0_Da,lVar4 + 0x1c);
      if (iVar3 != 0) {
        return;
      }
      iVar3 = FUN_180899100(extraout_XMM0_Da_00,lVar4 + 0x28);
      if (iVar3 != 0) {
        return;
      }
      iVar3 = FUN_180899100(extraout_XMM0_Da_01,lVar4 + 0x34);
      if (iVar3 != 0) {
        return;
      }
      iVar6 = iVar6 + 1;
      param_1 = extraout_XMM0_Da_02;
    } while (iVar6 < *(int *)(unaff_RDI + 0x1a0));
  }
  uVar1 = *(uint *)(unaff_RDI + 400);
  puVar2 = *(uint64_t **)(unaff_RBX + 8);
  if (uVar1 < 0x8000) {
    *(short *)(unaff_RBP + 0x20) = (short)uVar1;
    uVar5 = 2;
  }
  else {
    uVar5 = 4;
    *(uint *)(unaff_RBP + 0x20) = (uVar1 & 0xffffc000 | 0x4000) * 2 | uVar1 & 0x7fff;
  }
  iVar6 = (**(code **)*puVar2)(puVar2,unaff_RBP + 0x20,uVar5);
  if (iVar6 == 0) {
    puVar2 = *(uint64_t **)(unaff_RBX + 8);
    *(int32_t *)(unaff_RBP + 0x20) = *(int32_t *)(unaff_RDI + 0x194);
    iVar6 = (**(code **)*puVar2)(puVar2,unaff_RBP + 0x20,4);
    if (((iVar6 == 0) && (iVar6 = FUN_1808aff40(extraout_XMM0_Da_03,unaff_RDI + 0x198), iVar6 == 0))
       && (iVar6 = FUN_1808aff40(extraout_XMM0_Da_04,unaff_RDI + 0x19c), iVar6 == 0)) {
      puVar2 = *(uint64_t **)(unaff_RBX + 8);
      *(int32_t *)(unaff_RBP + 0x20) = *(int32_t *)(unaff_RDI + 0x1a4);
      iVar6 = (**(code **)*puVar2)(puVar2,unaff_RBP + 0x20,4);
      if (iVar6 == 0) {
        puVar2 = *(uint64_t **)(unaff_RBX + 8);
        *(int32_t *)(unaff_RBP + 0x20) = *(int32_t *)(unaff_RDI + 0x1a8);
        iVar6 = (**(code **)*puVar2)(puVar2,unaff_RBP + 0x20,4);
        if (iVar6 == 0) {
          puVar2 = *(uint64_t **)(unaff_RBX + 8);
          *(int32_t *)(unaff_RBP + 0x20) = *(int32_t *)(unaff_RDI + 0x1ac);
          iVar6 = (**(code **)*puVar2)(puVar2,unaff_RBP + 0x20,4);
          if (iVar6 == 0) {
            puVar2 = *(uint64_t **)(unaff_RBX + 8);
            *(int32_t *)(unaff_RBP + 0x20) = *(int32_t *)(unaff_RDI + 0x1b4);
            iVar6 = (**(code **)*puVar2)(puVar2,unaff_RBP + 0x20,4);
            if (iVar6 == 0) {
              puVar2 = *(uint64_t **)(unaff_RBX + 8);
              *(int32_t *)(unaff_RBP + 0x20) = *(int32_t *)(unaff_RDI + 0x1b8);
              iVar6 = (**(code **)*puVar2)(puVar2,unaff_RBP + 0x20,4);
              if (iVar6 == 0) {
                puVar2 = *(uint64_t **)(unaff_RBX + 8);
                *(int32_t *)(unaff_RBP + 0x20) = *(int32_t *)(unaff_RDI + 0x1b0);
                iVar6 = (**(code **)*puVar2)(puVar2,unaff_RBP + 0x20,4);
                if (iVar6 == 0) {
                  puVar2 = *(uint64_t **)(unaff_RBX + 8);
                  *(int32_t *)(unaff_RBP + 0x20) = *(int32_t *)(unaff_RDI + 0x1bc);
                  iVar6 = (**(code **)*puVar2)(puVar2,unaff_RBP + 0x20,4);
                  if (iVar6 == 0) {
                    puVar2 = *(uint64_t **)(unaff_RBX + 8);
                    *(uint64_t *)(unaff_RBP + 0x20) = *(uint64_t *)(unaff_RDI + 0x1c0);
                    iVar6 = (**(code **)*puVar2)(puVar2,unaff_RBP + 0x20,8);
                    if (iVar6 == 0) {
                      puVar2 = *(uint64_t **)(unaff_RBX + 8);
                      *(uint64_t *)(unaff_RBP + 0x20) = *(uint64_t *)(unaff_RDI + 0x1c8);
                      iVar6 = (**(code **)*puVar2)(puVar2,unaff_RBP + 0x20,8);
                      if (iVar6 == 0) {
                        puVar2 = *(uint64_t **)(unaff_RBX + 8);
                        *(uint64_t *)(unaff_RBP + 0x20) = *(uint64_t *)(unaff_RDI + 0x1d0);
                        iVar6 = (**(code **)*puVar2)(puVar2,unaff_RBP + 0x20,8);
                        if (iVar6 == 0) {
                          puVar2 = *(uint64_t **)(unaff_RBX + 8);
                          *(int32_t *)(unaff_RBP + 0x20) = *(int32_t *)(unaff_RDI + 0x1dc);
                          iVar6 = (**(code **)*puVar2)(puVar2,unaff_RBP + 0x20,4);
                          if (iVar6 == 0) {
                            puVar2 = *(uint64_t **)(unaff_RBX + 8);
                            *(int32_t *)(unaff_RBP + 0x20) = *(int32_t *)(unaff_RDI + 0x1d8);
                            iVar6 = (**(code **)*puVar2)(puVar2,unaff_RBP + 0x20,4);
                            if (iVar6 == 0) {
                              puVar2 = *(uint64_t **)(unaff_RBX + 8);
                              *(int32_t *)(unaff_RBP + 0x20) = *(int32_t *)(unaff_RDI + 0x1e0)
                              ;
                              (**(code **)*puVar2)(puVar2,unaff_RBP + 0x20,4);
                            }
                          }
                        }
                      }
                    }
                  }
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





// 函数: void FUN_18089a365(void)
void FUN_18089a365(void)

{
  return;
}



uint64_t FUN_18089a370(int64_t param_1,int64_t param_2)

{
  short sVar1;
  int iVar2;
  ushort uVar3;
  uint64_t uVar4;
  ushort uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int aiStack_48 [4];
  
  lVar7 = 0;
  uVar5 = (ushort)(*(int *)(param_2 + 0x28) != 0);
  if ((*(int *)(param_2 + 0x2c) != 0) || (*(int *)(param_2 + 0x30) != 0)) {
    uVar5 = uVar5 | 2;
  }
  uVar3 = uVar5 | 4;
  if (*(short *)(param_2 + 0x14c) == 0) {
    uVar3 = uVar5;
  }
  uVar5 = uVar3 | 8;
  if (*(short *)(param_2 + 0x254) == 0) {
    uVar5 = uVar3;
  }
  uVar3 = uVar5 | 0x10;
  if (*(int *)(param_2 + 0x260) == 0) {
    uVar3 = uVar5;
  }
  uVar5 = uVar3 | 0x20;
  if (*(int *)(param_2 + 0x270) == 0) {
    uVar5 = uVar3;
  }
  if ((*(int *)(param_2 + 0x34) != 0) || (*(int *)(param_2 + 0x38) != 0)) {
    uVar5 = uVar5 | 0x40;
  }
  if ((*(int64_t *)(param_2 + 0x10) != 0) || (*(int64_t *)(param_2 + 0x18) != 0)) {
    uVar5 = uVar5 | 0x80;
  }
  if (((*(int *)(param_2 + 0x3c) != 0) || (*(int *)(param_2 + 0x40) != 0)) ||
     (*(int *)(param_2 + 0x44) != 0)) {
    uVar5 = uVar5 | 0x100;
  }
  uVar4 = FUN_180899ef0(param_1);
  if ((int)uVar4 == 0) {
    aiStack_48[0] = *(int *)(param_2 + 0x20);
    uVar4 = (**(code **)**(uint64_t **)(param_1 + 8))(*(uint64_t **)(param_1 + 8),aiStack_48,4);
    if ((int)uVar4 == 0) {
      aiStack_48[0] = CONCAT22(aiStack_48[0]._2_2_,uVar5);
      uVar4 = (**(code **)**(uint64_t **)(param_1 + 8))
                        (*(uint64_t **)(param_1 + 8),aiStack_48,2);
      if (((int)uVar4 == 0) && (uVar4 = FUN_1808b00b0(param_1,param_2 + 0x24), (int)uVar4 == 0)) {
        if ((uVar5 & 1) != 0) {
          aiStack_48[0] = *(int *)(param_2 + 0x28);
          uVar4 = (**(code **)**(uint64_t **)(param_1 + 8))
                            (*(uint64_t **)(param_1 + 8),aiStack_48,4);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
        }
        if (((((uVar5 & 2) == 0) ||
             ((uVar4 = FUN_1808aff40(param_1,param_2 + 0x2c), (int)uVar4 == 0 &&
              (uVar4 = FUN_1808aff40(param_1,param_2 + 0x30), (int)uVar4 == 0)))) &&
            (((uVar5 & 4) == 0 || (uVar4 = FUN_180899d90(param_1,param_2 + 0x48), (int)uVar4 == 0)))
            ) && (((uVar5 & 8) == 0 ||
                  (uVar4 = FUN_180899d90(param_1,param_2 + 0x150), (int)uVar4 == 0)))) {
          if ((uVar5 & 0x10) != 0) {
            iVar2 = *(int *)(param_2 + 0x260);
            aiStack_48[0] = iVar2;
            uVar4 = (**(code **)**(uint64_t **)(param_1 + 8))
                              (*(uint64_t **)(param_1 + 8),aiStack_48,4);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            lVar8 = lVar7;
            if (0 < iVar2) {
              do {
                lVar6 = *(int64_t *)(param_2 + 600) + lVar7;
                sVar1 = *(short *)(lVar6 + 0x114);
                uVar4 = FUN_180899ef0(param_1,lVar6);
                if ((int)uVar4 != 0) {
                  return uVar4;
                }
                aiStack_48[0] = CONCAT31(aiStack_48[0]._1_3_,sVar1 != 0);
                uVar4 = (**(code **)**(uint64_t **)(param_1 + 8))
                                  (*(uint64_t **)(param_1 + 8),aiStack_48,1);
                if ((int)uVar4 != 0) {
                  return uVar4;
                }
                if ((sVar1 != 0) && (uVar4 = FUN_180899d90(param_1,lVar6 + 0x10), (int)uVar4 != 0))
                {
                  return uVar4;
                }
                lVar8 = lVar8 + 1;
                lVar7 = lVar7 + 0x118;
              } while (lVar8 < iVar2);
            }
          }
          if ((((((uVar5 & 0x20) == 0) ||
                (uVar4 = FUN_1808ac8a0(param_1,param_2 + 0x268), (int)uVar4 == 0)) &&
               (((uVar5 & 0x40) == 0 ||
                ((uVar4 = FUN_1808affb0(param_1,param_2 + 0x34), (int)uVar4 == 0 &&
                 (uVar4 = FUN_1808affb0(param_1,param_2 + 0x38), (int)uVar4 == 0)))))) &&
              ((-1 < (char)uVar5 || (uVar4 = FUN_180899ef0(param_1,param_2 + 0x10), (int)uVar4 == 0)
               ))) && (((uVar5 & 0x100) == 0 ||
                       (((uVar4 = FUN_1808aff40(param_1,param_2 + 0x3c), (int)uVar4 == 0 &&
                         (uVar4 = FUN_1808aff40(param_1,param_2 + 0x40), (int)uVar4 == 0)) &&
                        (uVar4 = FUN_1808aff40(param_1,param_2 + 0x44), (int)uVar4 == 0)))))) {
            uVar4 = 0;
          }
        }
      }
    }
  }
  return uVar4;
}



uint64_t FUN_18089a51d(void)

{
  short sVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t unaff_RBX;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  uint64_t in_R9;
  int64_t unaff_R14;
  int64_t lVar4;
  
  if ((unaff_RSI & 0x10) != 0) {
    iVar2 = *(int *)(unaff_RDI + 0x260);
    uVar3 = (**(code **)**(uint64_t **)(unaff_RBX + 8))
                      (*(uint64_t **)(unaff_RBX + 8),&stack0x00000020,4,in_R9,iVar2);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    lVar4 = unaff_R14;
    if (0 < iVar2) {
      do {
        sVar1 = *(short *)(*(int64_t *)(unaff_RDI + 600) + unaff_R14 + 0x114);
        uVar3 = FUN_180899ef0();
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = (**(code **)**(uint64_t **)(unaff_RBX + 8))
                          (*(uint64_t **)(unaff_RBX + 8),&stack0x00000020,1,in_R9,sVar1 != 0);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        if ((sVar1 != 0) && (uVar3 = FUN_180899d90(), (int)uVar3 != 0)) {
          return uVar3;
        }
        lVar4 = lVar4 + 1;
        unaff_R14 = unaff_R14 + 0x118;
      } while (lVar4 < iVar2);
    }
  }
  if ((((((unaff_RSI & 0x20) == 0) || (uVar3 = FUN_1808ac8a0(), (int)uVar3 == 0)) &&
       (((unaff_RSI & 0x40) == 0 ||
        ((uVar3 = FUN_1808affb0(), (int)uVar3 == 0 && (uVar3 = FUN_1808affb0(), (int)uVar3 == 0)))))
       ) && ((-1 < (char)unaff_RSI || (uVar3 = FUN_180899ef0(), (int)uVar3 == 0)))) &&
     (((unaff_RSI & 0x100) == 0 ||
      (((uVar3 = FUN_1808aff40(), (int)uVar3 == 0 && (uVar3 = FUN_1808aff40(), (int)uVar3 == 0)) &&
       (uVar3 = FUN_1808aff40(), (int)uVar3 == 0)))))) {
    uVar3 = 0;
  }
  return uVar3;
}





// 函数: void FUN_18089a685(void)
void FUN_18089a685(void)

{
  return;
}



uint64_t FUN_18089a690(int64_t param_1,int32_t *param_2)

{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  uint64_t uStackX_8;
  
  uStackX_8 = CONCAT44(uStackX_8._4_4_,*param_2);
  uVar2 = (**(code **)**(uint64_t **)(param_1 + 8))(*(uint64_t **)(param_1 + 8),&uStackX_8,4);
  if ((int)uVar2 == 0) {
    uStackX_8 = *(uint64_t *)(param_2 + 2);
    uVar2 = (**(code **)**(uint64_t **)(param_1 + 8))(*(uint64_t **)(param_1 + 8),&uStackX_8,8);
    if ((int)uVar2 == 0) {
      iVar1 = param_2[6];
      uStackX_8 = CONCAT44(uStackX_8._4_4_,iVar1);
      uVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                        (*(uint64_t **)(param_1 + 8),&uStackX_8,4);
      if ((int)uVar2 == 0) {
        iVar3 = 0;
        if (0 < iVar1) {
          do {
            uVar2 = FUN_18089a370(param_1,(int64_t)iVar3 * 0x278 + *(int64_t *)(param_2 + 4));
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar1);
        }
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



uint64_t FUN_18089a6e8(uint64_t *param_1,uint64_t param_2)

{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t unaff_RSI;
  int iStack0000000000000030;
  
  iVar1 = *(int *)(unaff_RSI + 0x18);
  iStack0000000000000030 = iVar1;
  uVar2 = (**(code **)*param_1)(param_1,param_2,4);
  if ((int)uVar2 == 0) {
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        uVar2 = FUN_18089a370();
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    uVar2 = 0;
  }
  return uVar2;
}





// 函数: void FUN_18089a73c(void)
void FUN_18089a73c(void)

{
  return;
}





// 函数: void FUN_18089a750(int64_t param_1,uint *param_2)
void FUN_18089a750(int64_t param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  int32_t uStackX_10;
  
  uVar1 = *param_2;
  if (uVar1 + 0x4000 < 0x8000) {
    uStackX_10 = CONCAT22(uStackX_10._2_2_,(short)uVar1) & 0xffff7fff;
    uVar3 = 2;
  }
  else {
    uStackX_10 = (uVar1 & 0xffffc000 | 0x4000) * 2 | uVar1 & 0x7fff;
    uVar3 = 4;
  }
  iVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                    (*(uint64_t **)(param_1 + 8),&uStackX_10,uVar3);
  if (iVar2 == 0) {
    FUN_1808aff40(param_1,param_2 + 1);
  }
  return;
}



uint64_t FUN_18089a7e0(int64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  uint uVar2;
  uint auStackX_10 [2];
  
  uVar2 = *(int *)(param_2 + 1) - 1;
  if (*(int *)(param_2 + 1) < 1) {
    uVar2 = 0;
  }
  if (uVar2 < 0x8000) {
    auStackX_10[0] = CONCAT22(auStackX_10[0]._2_2_,(short)uVar2);
    uVar1 = 2;
  }
  else {
    uVar1 = 4;
    auStackX_10[0] = (uVar2 & 0xffffc000 | 0x4000) * 2 | uVar2 & 0x7fff;
  }
  uVar1 = (**(code **)**(uint64_t **)(param_1 + 8))
                    (*(uint64_t **)(param_1 + 8),auStackX_10,uVar1);
  if ((int)uVar1 == 0) {
    if ((uVar2 != 0) &&
       (uVar1 = (**(code **)**(uint64_t **)(param_1 + 8))
                          (*(uint64_t **)(param_1 + 8),*param_2,(int64_t)(int)uVar2),
       (int)uVar1 != 0)) {
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_18089a880(int64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int aiStackX_8 [2];
  uint auStackX_10 [2];
  uint auStackX_18 [2];
  uint auStackX_20 [2];
  uint auStack_38 [6];
  
  iVar4 = *(int *)(param_2 + 1);
  aiStackX_8[0] = iVar4;
  uVar1 = (**(code **)**(uint64_t **)(param_1 + 8))(*(uint64_t **)(param_1 + 8),aiStackX_8,4);
  if ((int)uVar1 == 0) {
    puVar5 = (uint *)*param_2;
    for (; 0 < iVar4; iVar4 = iVar4 + iVar3) {
      auStackX_10[0] = *puVar5;
      uVar1 = (**(code **)**(uint64_t **)(param_1 + 8))
                        (*(uint64_t **)(param_1 + 8),auStackX_10,4);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      switch(*puVar5 & 0xff) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 0x12:
      case 0x30:
        lVar2 = 4;
        iVar3 = -4;
        break;
      default:
        return 0x1c;
      case 0x10:
        auStackX_18[0] = puVar5[1];
        uVar1 = (**(code **)**(uint64_t **)(param_1 + 8))
                          (*(uint64_t **)(param_1 + 8),auStackX_18,4);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        lVar2 = 8;
        iVar3 = -8;
        break;
      case 0x11:
        uVar1 = FUN_180899ef0(param_1,puVar5 + 1);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        lVar2 = 0x14;
        iVar3 = -0x14;
        break;
      case 0x20:
        auStackX_20[0] = puVar5[1];
        uVar1 = (**(code **)**(uint64_t **)(param_1 + 8))
                          (*(uint64_t **)(param_1 + 8),auStackX_20,4);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        auStack_38[0] = puVar5[2];
        uVar1 = (**(code **)**(uint64_t **)(param_1 + 8))
                          (*(uint64_t **)(param_1 + 8),auStack_38,4);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        lVar2 = 0xc;
        iVar3 = -0xc;
      }
      puVar5 = (uint *)((int64_t)puVar5 + lVar2);
    }
    uVar1 = (uint64_t)(-(uint)(iVar4 != 0) & 0x1c);
  }
  return uVar1;
}



uint64_t FUN_18089a8b4(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int iVar3;
  int unaff_EBX;
  int64_t unaff_RSI;
  uint *unaff_RDI;
  uint64_t in_R9;
  int32_t extraout_XMM0_Da;
  uint uStack0000000000000068;
  uint in_stack_00000070;
  uint in_stack_00000078;
  
  if (0 < unaff_EBX) {
    do {
      uStack0000000000000068 = *unaff_RDI;
      uVar1 = (**(code **)**(uint64_t **)(unaff_RSI + 8))
                        (*(uint64_t **)(unaff_RSI + 8),&stack0x00000068,4);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      switch(*unaff_RDI & 0xff) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 0x12:
      case 0x30:
        lVar2 = 4;
        iVar3 = -4;
        break;
      default:
        return 0x1c;
      case 0x10:
        in_stack_00000070 = unaff_RDI[1];
        uVar1 = (**(code **)**(uint64_t **)(unaff_RSI + 8))
                          (*(uint64_t **)(unaff_RSI + 8),&stack0x00000070,4);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        lVar2 = 8;
        iVar3 = -8;
        break;
      case 0x11:
        uVar1 = FUN_180899ef0(extraout_XMM0_Da,unaff_RDI + 1);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        lVar2 = 0x14;
        iVar3 = -0x14;
        break;
      case 0x20:
        in_stack_00000078 = unaff_RDI[1];
        uVar1 = (**(code **)**(uint64_t **)(unaff_RSI + 8))
                          (*(uint64_t **)(unaff_RSI + 8),&stack0x00000078,4);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        uVar1 = (**(code **)**(uint64_t **)(unaff_RSI + 8))
                          (*(uint64_t **)(unaff_RSI + 8),&stack0x00000020,4,in_R9,unaff_RDI[2]);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        lVar2 = 0xc;
        iVar3 = -0xc;
      }
      unaff_EBX = unaff_EBX + iVar3;
      unaff_RDI = (uint *)((int64_t)unaff_RDI + lVar2);
    } while (0 < unaff_EBX);
  }
  return (uint64_t)(-(uint)(unaff_EBX != 0) & 0x1c);
}





// 函数: void FUN_18089a9d5(void)
void FUN_18089a9d5(void)

{
  return;
}



uint64_t FUN_18089a9dd(void)

{
  return 0x1c;
}





