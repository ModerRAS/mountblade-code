#include "FUN_1808de000_definition.h"
#include "TaleWorlds.Native.Split.h"

// 99_part_12_part081.c - 12 个函数

// 函数: void FUN_1808a0f37(void)
void FUN_1808a0f37(void)

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
  uint in_stack_00000030;
  int16_t in_stack_000000b0;
  int in_stack_000000b8;
  
  if (0x8a < in_EAX) {
    uVar1 = *(int *)(unaff_RSI + 0x68) * 2;
    if (uVar1 < 0x8000) {
      in_stack_000000b0 = (int16_t)uVar1;
      uVar5 = 2;
      puVar3 = (int32_t *)&stack0x000000b0;
    }
    else {
      uVar5 = 4;
      in_stack_00000030 = (uVar1 & 0xffffc000 | 0x4000) * 2 | uVar1 & 0x7fff;
      puVar3 = &stack0x00000030;
    }
    iVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                      (*(uint64_t **)(*unaff_RBX + 8),puVar3,uVar5);
    if (iVar2 != 0) {
      return;
    }
    uVar4 = *(uint64_t *)(unaff_RSI + 0x60);
    while( true ) {
      in_stack_000000b8 = unaff_R14D;
      if ((uVar4 < *(uint64_t *)(unaff_RSI + 0x60)) ||
         ((int64_t)*(int *)(unaff_RSI + 0x68) * 0x10 + *(uint64_t *)(unaff_RSI + 0x60) <= uVar4))
      goto LAB_1808a1016;
      iVar2 = FUN_1808ddf00();
      if (iVar2 != 0) {
        return;
      }
      if (*(int *)(unaff_RBX[1] + 0x18) != unaff_R14D) break;
      iVar2 = FUN_1808a27f0(*unaff_RBX,uVar4);
      if (iVar2 != 0) {
        return;
      }
      iVar2 = FUN_1808de160();
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






// 函数: void FUN_1808a104b(void)
void FUN_1808a104b(void)

{
  return;
}






// 函数: void FUN_1808a1053(void)
void FUN_1808a1053(void)

{
  return;
}






// 函数: void FUN_1808a105b(void)
void FUN_1808a105b(void)

{
  return;
}



uint64_t FUN_1808a1090(int64_t param_1,int64_t *param_2)

{
  int iVar1;
  uint uVar2;
  uint64_t uVar3;
  int iVar4;
  int aiStackX_18 [4];
  int8_t auStack_38 [32];
  
  uVar3 = FUN_1808ddd30(param_2,auStack_38,0,0x46454d50,0);
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
          uVar3 = FUN_1808acf30(param_1,param_2,iVar4);
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
        SystemThreadManager(param_2,auStack_38);
      }
      uVar3 = (uint64_t)uVar2;
    }
  }
  return uVar3;
}



uint64_t FUN_1808a10c8(void)

{
  int iVar1;
  uint uVar2;
  int64_t in_RAX;
  uint64_t uVar3;
  int iVar4;
  int64_t *unaff_RSI;
  int64_t unaff_R14;
  int in_stack_00000080;
  
  iVar1 = *(int *)(unaff_R14 + 0x50);
  uVar2 = 0x1c;
  if (*(int *)(in_RAX + 0x18) == 0) {
    in_stack_00000080 = iVar1;
    uVar3 = (**(code **)**(uint64_t **)(*unaff_RSI + 8))
                      (*(uint64_t **)(*unaff_RSI + 8),&stack0x00000080,4);
  }
  else {
    uVar3 = 0x1c;
  }
  if ((int)uVar3 == 0) {
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        uVar3 = FUN_1808acf30();
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
      in_stack_00000080 = CONCAT31(in_stack_00000080._1_3_,*(int8_t *)(unaff_R14 + 0x5c));
      uVar2 = (**(code **)**(uint64_t **)(*unaff_RSI + 8))
                        (*(uint64_t **)(*unaff_RSI + 8),&stack0x00000080,1);
    }
    if (uVar2 == 0) {
                    // WARNING: Subroutine does not return
      SystemThreadManager();
    }
    uVar3 = (uint64_t)uVar2;
  }
  return uVar3;
}



uint64_t FUN_1808a110e(void)

{
  uint64_t uVar1;
  int iVar2;
  int unaff_EBP;
  int64_t *unaff_RSI;
  uint unaff_EDI;
  int64_t unaff_R14;
  int8_t in_stack_00000080;
  
  iVar2 = 0;
  if (0 < unaff_EBP) {
    do {
      uVar1 = FUN_1808acf30();
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
    in_stack_00000080 = *(int8_t *)(unaff_R14 + 0x5c);
    unaff_EDI = (**(code **)**(uint64_t **)(*unaff_RSI + 8))
                          (*(uint64_t **)(*unaff_RSI + 8),&stack0x00000080,1);
  }
  if (unaff_EDI != 0) {
    return (uint64_t)unaff_EDI;
  }
                    // WARNING: Subroutine does not return
  SystemThreadManager();
}






// 函数: void FUN_1808a11ab(void)
void FUN_1808a11ab(void)

{
  return;
}






// 函数: void FUN_1808a11b5(void)
void FUN_1808a11b5(void)

{
  return;
}



uint64_t FUN_1808a11c0(uint64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint uVar3;
  uint64_t uVar4;
  uint *puVar5;
  uint64_t uVar6;
  uint auStackX_18 [2];
  int32_t auStackX_20 [2];
  uint uStack_48;
  int32_t uStack_44;
  int8_t auStack_40 [40];
  
  uVar4 = FUN_1808ddd30(param_2,auStack_40,0,0x54534c50,0);
  if ((int)uVar4 == 0) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    auStackX_18[0] = (uint)param_1[2];
    uVar4 = (**(code **)**(uint64_t **)(*param_2 + 8))
                      (*(uint64_t **)(*param_2 + 8),auStackX_18,4);
    if ((int)uVar4 == 0) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      auStackX_18[0] = *(uint *)((int64_t)param_1 + 0x14);
      uVar4 = (**(code **)**(uint64_t **)(*param_2 + 8))
                        (*(uint64_t **)(*param_2 + 8),auStackX_18,4);
      if ((int)uVar4 == 0) {
        uVar3 = (int)param_1[1] * 2;
        if ((uVar3 | 1) < 0x8000) {
          auStackX_18[0] = CONCAT22(auStackX_18[0]._2_2_,(short)(uVar3 | 1));
          uVar4 = 2;
          puVar5 = auStackX_18;
        }
        else {
          uVar4 = 4;
          uStack_48 = (uVar3 & 0xffffc000 | 0x4000) * 2 | uVar3 & 0x7fff | 1;
          puVar5 = &uStack_48;
        }
        uVar4 = (**(code **)**(uint64_t **)(*param_2 + 8))
                          (*(uint64_t **)(*param_2 + 8),puVar5,uVar4);
        if ((int)uVar4 == 0) {
          uVar6 = *param_1;
          auStackX_20[0] = 0;
          while( true ) {
            if ((uVar6 < *param_1) || (*param_1 + (int64_t)(int)param_1[1] * 0x14 <= uVar6)) {
                    // WARNING: Subroutine does not return
              SystemThreadManager(param_2,auStack_40);
            }
            uVar4 = FUN_1808ddf00(param_2,auStackX_20[0]);
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
            uStack_44 = *(int32_t *)(uVar6 + 0x10);
            uVar4 = (**(code **)*puVar2)(puVar2,&uStack_44,4);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            uVar4 = FUN_1808de160(param_2,auStackX_20);
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






// 函数: void FUN_1808a12c6(int32_t param_1)
void FUN_1808a12c6(int32_t param_1)

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
  uint64_t in_stack_00000030;
  int32_t uStack0000000000000098;
  
  if (in_EAX == 0) {
    uVar4 = *unaff_R14;
    uStack0000000000000098 = unaff_EBP;
    while( true ) {
      if ((uVar4 < *unaff_R14) || (*unaff_R14 + (int64_t)(int)unaff_R14[1] * 0x14 <= uVar4)) {
                    // WARNING: Subroutine does not return
        SystemThreadManager(param_1,&stack0x00000038);
      }
      iVar3 = FUN_1808ddf00(param_1,uStack0000000000000098);
      if ((iVar3 != 0) || (*(int *)(unaff_RBX[1] + 0x18) != 0)) break;
      lVar1 = *unaff_RBX;
      iVar3 = SystemCleanupProcessor(lVar1,uVar4);
      if (iVar3 != 0) {
        return;
      }
      puVar2 = *(uint64_t **)(lVar1 + 8);
      in_stack_00000030._4_4_ = *(int32_t *)(uVar4 + 0x10);
      iVar3 = (**(code **)*puVar2)(puVar2,(int64_t)&stack0x00000030 + 4,4);
      if (iVar3 != 0) {
        return;
      }
      iVar3 = FUN_1808de160(extraout_XMM0_Da,&stack0x00000098);
      if (iVar3 != 0) {
        return;
      }
      uVar4 = uVar4 + 0x14;
      param_1 = extraout_XMM0_Da_00;
    }
  }
  return;
}






// 函数: void FUN_1808a139f(void)
void FUN_1808a139f(void)

{
  return;
}






// 函数: void FUN_1808a13b0(int64_t param_1,uint64_t param_2)
void FUN_1808a13b0(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_1808a11c0(param_1 + 0xd8);
  if (iVar1 == 0) {
    FUN_1808a00c0(param_1,param_2);
  }
  return;
}



uint64_t FUN_1808a13f0(int64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  int8_t auStack_48 [32];
  int8_t auStack_28 [32];
  
  uVar1 = FUN_1808ddd30(param_2,auStack_28,1,0x5453494c,0x46464550);
  if (((int)uVar1 == 0) &&
     (uVar1 = FUN_1808ddd30(param_2,auStack_48,0,0x42464550,0), (int)uVar1 == 0)) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = SystemCleanupProcessor(*param_2,param_1 + 0x10);
    if ((int)uVar1 == 0) {
      if ((*(uint *)(param_2 + 8) < 0x5b) &&
         (uVar1 = FUN_1808afd90(param_2,param_1 + 0x44), (int)uVar1 != 0)) {
        return uVar1;
      }
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar1 = FUN_1808a27f0(*param_2,param_1 + 0x60);
      if ((int)uVar1 == 0) {
        if (*(uint *)(param_2 + 8) < 0x36) {
          uVar1 = 0;
        }
        else if (*(int *)(param_2[1] + 0x18) == 0) {
          uVar1 = FUN_1808a27f0(*param_2,param_1 + 0x70);
        }
        else {
          uVar1 = 0x1c;
        }
        if (((int)uVar1 == 0) &&
           (uVar1 = FUN_1808a7c90(param_2,param_1 + 0x40,0x3d), (int)uVar1 == 0)) {
                    // WARNING: Subroutine does not return
          SystemThreadManager(param_2,auStack_48);
        }
      }
    }
  }
  return uVar1;
}



uint64_t FUN_1808a1530(int64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  int8_t auStack_48 [32];
  int8_t auStack_28 [32];
  
  uVar1 = FUN_1808ddd30(param_2,auStack_28,1,0x5453494c,0x54495250);
  if (((int)uVar1 == 0) &&
     (uVar1 = FUN_1808ddd30(param_2,auStack_48,0,0x42495250,0), (int)uVar1 == 0)) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = SystemCleanupProcessor(*param_2,param_1 + 0x10);
    if ((int)uVar1 == 0) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar1 = FUN_1808a27f0(*param_2,param_1 + 0xd8);
      if ((int)uVar1 == 0) {
                    // WARNING: Subroutine does not return
        SystemThreadManager(param_2,auStack_48);
      }
    }
  }
  return uVar1;
}



uint64_t FUN_1808a1610(int64_t param_1,int64_t *param_2)

{
  bool bVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int iVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int32_t auStackX_18 [2];
  int aiStackX_20 [2];
  int8_t auStack_58 [32];
  int8_t auStack_38 [32];
  
  uVar2 = FUN_1808ddd30(param_2,auStack_38,1,0x5453494c,0x53505250);
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
      uVar2 = FUN_1808de6f0(param_2,aiStackX_20);
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
          uVar2 = FUN_1808ddd30(param_2,auStack_58,0,0x504f5250,0);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if (*(int *)(param_2[1] + 0x18) != 0) {
            return 0x1c;
          }
          auStackX_18[0] = *(int32_t *)(puVar3 + 8);
          uVar2 = (**(code **)**(uint64_t **)(*param_2 + 8))
                            (*(uint64_t **)(*param_2 + 8),auStackX_18,4);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if (*(int *)(param_2[1] + 0x18) == 0) {
            auStackX_18[0] = CONCAT22(auStackX_18[0]._2_2_,*(int16_t *)(puVar3 + 9));
            uVar2 = (**(code **)**(uint64_t **)(*param_2 + 8))
                              (*(uint64_t **)(*param_2 + 8),auStackX_18,2);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            if (*(int *)(param_2[1] + 0x18) == 0) {
              auStackX_18[0] =
                   CONCAT22(auStackX_18[0]._2_2_,*(int16_t *)((int64_t)puVar3 + 0x4a));
              uVar2 = (**(code **)**(uint64_t **)(*param_2 + 8))
                                (*(uint64_t **)(*param_2 + 8),auStackX_18,2);
              if ((int)uVar2 != 0) {
                return uVar2;
              }
              if (*(int *)(param_2[1] + 0x18) == 0) {
                uVar2 = SystemCleanupProcessor(*param_2,puVar3 + 6);
                if ((int)uVar2 != 0) {
                  return uVar2;
                }
                uVar2 = FUN_1808a7b00(param_2,puVar3 + 4);
                if ((int)uVar2 != 0) {
                  return uVar2;
                }
                uVar2 = FUN_1808a7b00(param_2,puVar3 + 2);
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
          SystemThreadManager(param_2,auStack_58);
        }
      }
    }
  }
                    // WARNING: Subroutine does not return
  SystemThreadManager(param_2,auStack_38);
}



uint64_t FUN_1808a164e(uint64_t param_1,uint64_t *param_2)

{
  bool bVar1;
  uint64_t uVar2;
  int iVar3;
  uint64_t *puVar4;
  int64_t *unaff_RBX;
  uint64_t *unaff_RSI;
  int32_t in_stack_000000a0;
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
      uVar2 = FUN_1808de6f0();
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
          uVar2 = FUN_1808ddd30();
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
            return 0x1c;
          }
          in_stack_000000a0 = *(int32_t *)(puVar4 + 8);
          uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                            (*(uint64_t **)(*unaff_RBX + 8),&stack0x000000a0,4);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
            in_stack_000000a0 = CONCAT22(in_stack_000000a0._2_2_,*(int16_t *)(puVar4 + 9));
            uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                              (*(uint64_t **)(*unaff_RBX + 8),&stack0x000000a0,2);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
              in_stack_000000a0 =
                   CONCAT22(in_stack_000000a0._2_2_,*(int16_t *)((int64_t)puVar4 + 0x4a));
              uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                                (*(uint64_t **)(*unaff_RBX + 8),&stack0x000000a0,2);
              if ((int)uVar2 != 0) {
                return uVar2;
              }
              if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                uVar2 = SystemCleanupProcessor(*unaff_RBX,puVar4 + 6);
                if ((int)uVar2 != 0) {
                  return uVar2;
                }
                uVar2 = FUN_1808a7b00();
                if ((int)uVar2 != 0) {
                  return uVar2;
                }
                uVar2 = FUN_1808a7b00();
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






// 函数: void FUN_1808a1841(void)
void FUN_1808a1841(void)

{
  return;
}



uint64_t FUN_1808a1848(void)

{
  return 0x1c;
}






// 函数: void FUN_1808a1850(uint64_t param_1,uint64_t param_2)
void FUN_1808a1850(uint64_t param_1,uint64_t param_2)

{
  FUN_18089f530(param_1,param_2,0x53554252,0x42534252,1);
  return;
}



uint64_t FUN_1808a1870(int64_t param_1,int64_t *param_2)

{
  uint64_t uVar1;
  int32_t auStackX_18 [4];
  
  uVar1 = FUN_1808ddf00(param_2,0);
  if ((int)uVar1 == 0) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = SystemCleanupProcessor(*param_2,param_1 + 0x10);
    if (((int)uVar1 == 0) && (uVar1 = FUN_1808afd90(param_2,param_1 + 8), (int)uVar1 == 0)) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      auStackX_18[0] = *(int32_t *)(param_1 + 0xc);
      uVar1 = (**(code **)**(uint64_t **)(*param_2 + 8))
                        (*(uint64_t **)(*param_2 + 8),auStackX_18,4);
      if ((int)uVar1 == 0) {
        uVar1 = FUN_1808de160(param_2,0);
      }
    }
  }
  return uVar1;
}



uint64_t FUN_1808a1910(int64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int32_t auStackX_18 [2];
  int aiStackX_20 [2];
  int8_t auStack_48 [32];
  int8_t auStack_28 [32];
  
  uVar3 = FUN_1808ddd30(param_2,auStack_28,1,0x5453494c,0x54495053);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1808ddd30(param_2,auStack_48,0,0x42495053,0), (int)uVar3 == 0)) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar3 = SystemCleanupProcessor(*param_2,param_1 + 0x10);
    if ((int)uVar3 == 0) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      auStackX_18[0] = *(int32_t *)(param_1 + 0xf0);
      uVar3 = (**(code **)**(uint64_t **)(*param_2 + 8))
                        (*(uint64_t **)(*param_2 + 8),auStackX_18,4);
      if (((int)uVar3 == 0) && (uVar3 = FUN_180898e70(param_2,param_1 + 0xf8), (int)uVar3 == 0)) {
        if (((*(uint *)(param_2 + 8) < 0x8a) && (*(int *)(param_1 + 0xf8) == 0)) ||
           ((*(uint *)(param_2 + 8) < 0x8e && (*(int *)(param_1 + 0xf8) == 0x7fffffff)))) {
          *(int32_t *)(param_1 + 0xf8) = 0x21;
        }
        uVar3 = FUN_180898f40(param_2,param_1 + 0x100);
        if ((int)uVar3 == 0) {
          if (*(uint *)(param_2 + 8) < 0x68) {
            if (*(int *)(param_2[1] + 0x18) == 0) {
              lVar1 = *param_2;
              auStackX_18[0] = 0;
              puVar2 = *(uint64_t **)(lVar1 + 8);
              uVar3 = (**(code **)*puVar2)(puVar2,auStackX_18,4);
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
               (uVar3 = FUN_1808a7bf0(param_2,param_1 + 0xf4,0x39), (int)uVar3 == 0)) &&
              (uVar3 = FUN_1808a7c40(param_2,param_1 + 0xfc,0x5e), (int)uVar3 == 0)) &&
             ((*(uint *)(param_2 + 8) < 0x85 ||
              (uVar3 = FUN_1808992f0(param_2,param_1 + 0x108), (int)uVar3 == 0)))) {
                    // WARNING: Subroutine does not return
            SystemThreadManager(param_2,auStack_48);
          }
        }
      }
    }
  }
  return uVar3;
}






// 函数: void FUN_1808a19dc(void)
void FUN_1808a19dc(void)

{
  int64_t lVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *unaff_RBX;
  int64_t unaff_RDI;
  int32_t in_stack_00000090;
  int in_stack_00000098;
  
  iVar3 = FUN_180898e70();
  if (iVar3 == 0) {
    if (((*(uint *)(unaff_RBX + 8) < 0x8a) && (*(int *)(unaff_RDI + 0xf8) == 0)) ||
       ((*(uint *)(unaff_RBX + 8) < 0x8e && (*(int *)(unaff_RDI + 0xf8) == 0x7fffffff)))) {
      *(int32_t *)(unaff_RDI + 0xf8) = 0x21;
    }
    iVar3 = FUN_180898f40();
    if (iVar3 == 0) {
      if (*(uint *)(unaff_RBX + 8) < 0x68) {
        if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
          lVar1 = *unaff_RBX;
          in_stack_00000090 = 0;
          puVar2 = *(uint64_t **)(lVar1 + 8);
          in_stack_00000098 = (**(code **)*puVar2)(puVar2,&stack0x00000090,4);
          if (in_stack_00000098 != 0) {
            return;
          }
          puVar2 = *(uint64_t **)(lVar1 + 8);
          iVar3 = (**(code **)*puVar2)(puVar2,&stack0x00000098,4);
        }
        else {
          iVar3 = 0x1c;
        }
      }
      else {
        iVar3 = 0;
      }
      if (((iVar3 == 0) && (iVar3 = FUN_1808a7bf0(), iVar3 == 0)) &&
         (iVar3 = FUN_1808a7c40(), iVar3 == 0)) {
        if ((0x84 < *(uint *)(unaff_RBX + 8)) && (iVar3 = FUN_1808992f0(), iVar3 != 0)) {
          return;
        }
                    // WARNING: Subroutine does not return
        SystemThreadManager();
      }
    }
  }
  return;
}






