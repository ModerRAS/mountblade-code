#include "TaleWorlds.Native.Split.h"

// 99_part_13_part016.c - 10 个函数

// 函数: void FUN_1808ad9c0(void)
void FUN_1808ad9c0(void)

{
  return;
}



ulonglong FUN_1808ad9d0(uint64_t *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint auStackX_8 [2];
  uint auStackX_20 [2];
  
  auStackX_20[0] = 0;
  uVar3 = FUN_1808afe30(*param_1,auStackX_20);
  uVar2 = auStackX_20[0];
  if ((int)uVar3 == 0) {
    uVar6 = auStackX_20[0] >> 1;
    uVar4 = auStackX_20[0] & 1;
    uVar3 = FUN_1808afac0(param_2,uVar6);
    if ((int)uVar3 == 0) {
      iVar5 = 0;
      auStackX_8[0] = 0;
      if (uVar2 >> 1 != 0) {
        do {
          uVar3 = FUN_1808dde10(param_1,uVar3 & 0xffffffff);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          lVar1 = *param_2 + (longlong)iVar5 * 0x28;
          uVar3 = FUN_180899360(param_1,lVar1);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          if (*(int *)(param_1[1] + 0x18) == 0) {
            uVar3 = FUN_1808aed00(*param_1,lVar1 + 0x20,4);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            if (*(int *)(param_1[1] + 0x18) == 0) {
              uVar3 = FUN_1808a2740(*param_1,lVar1 + 0x10);
              if ((int)uVar3 != 0) {
                return uVar3;
              }
              if (*(uint *)(param_1 + 8) < 0x79) {
                uVar3 = 0;
              }
              else if (*(int *)(param_1[1] + 0x18) == 0) {
                uVar3 = FUN_1808aed00(*param_1,lVar1 + 0x24,4);
              }
              else {
                uVar3 = 0x1c;
              }
            }
            else {
              uVar3 = 0x1c;
            }
          }
          else {
            uVar3 = 0x1c;
          }
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = FUN_1808de0e0(param_1,auStackX_8);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          iVar5 = iVar5 + 1;
          auStackX_8[0] = auStackX_8[0] & -uVar4;
          uVar3 = (ulonglong)auStackX_8[0];
        } while (iVar5 < (int)uVar6);
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}



uint64_t FUN_1808ad9fb(void)

{
  longlong lVar1;
  uint64_t uVar2;
  uint64_t *unaff_RBX;
  int iVar3;
  longlong *unaff_R15;
  uint in_stack_00000068;
  
  uVar2 = FUN_1808afac0();
  if ((int)uVar2 == 0) {
    iVar3 = 0;
    if (in_stack_00000068 >> 1 != 0) {
      do {
        uVar2 = FUN_1808dde10();
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        lVar1 = *unaff_R15 + (longlong)iVar3 * 0x28;
        uVar2 = FUN_180899360();
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
          uVar2 = FUN_1808aed00(*unaff_RBX,lVar1 + 0x20,4);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
            uVar2 = FUN_1808a2740(*unaff_RBX,lVar1 + 0x10);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            if (*(uint *)(unaff_RBX + 8) < 0x79) {
              uVar2 = 0;
            }
            else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
              uVar2 = FUN_1808aed00(*unaff_RBX,lVar1 + 0x24,4);
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
        uVar2 = FUN_1808de0e0();
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(in_stack_00000068 >> 1));
    }
    uVar2 = 0;
  }
  return uVar2;
}



uint64_t FUN_1808ada25(void)

{
  longlong lVar1;
  uint in_EAX;
  uint64_t uVar2;
  uint64_t *unaff_RBX;
  int unaff_EBP;
  int iVar3;
  int unaff_R14D;
  longlong *unaff_R15;
  uint uStack0000000000000050;
  
  iVar3 = 0;
  uStack0000000000000050 = in_EAX;
  if (unaff_R14D != 0) {
    do {
      uVar2 = FUN_1808dde10();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      lVar1 = *unaff_R15 + (longlong)iVar3 * 0x28;
      uVar2 = FUN_180899360();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
        uVar2 = FUN_1808aed00(*unaff_RBX,lVar1 + 0x20,4);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
          uVar2 = FUN_1808a2740(*unaff_RBX,lVar1 + 0x10);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if (*(uint *)(unaff_RBX + 8) < 0x79) {
            uVar2 = 0;
          }
          else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
            uVar2 = FUN_1808aed00(*unaff_RBX,lVar1 + 0x24,4);
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
      uVar2 = FUN_1808de0e0();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      iVar3 = iVar3 + 1;
      uStack0000000000000050 = uStack0000000000000050 & -unaff_EBP;
    } while (iVar3 < unaff_R14D);
  }
  return 0;
}






// 函数: void FUN_1808adb1e(void)
void FUN_1808adb1e(void)

{
  return;
}






// 函数: void FUN_1808adb28(void)
void FUN_1808adb28(void)

{
  return;
}



uint64_t FUN_1808adb30(longlong *param_1,ulonglong *param_2,uint param_3)

{
  uint *puVar1;
  ulonglong uVar2;
  uint64_t uVar3;
  uint uVar4;
  uint auStackX_8 [2];
  uint auStackX_10 [2];
  uint auStackX_18 [4];
  
  uVar4 = (int)param_2[1] * 2 | param_3;
  if (uVar4 < 0x8000) {
    auStackX_18[0] = CONCAT22(auStackX_18[0]._2_2_,(short)uVar4);
    puVar1 = auStackX_18;
    uVar3 = 2;
  }
  else {
    puVar1 = auStackX_10;
    uVar3 = 4;
    auStackX_10[0] = (uVar4 & 0xffffc000 | 0x4000) * 2 | uVar4 & 0x7fff;
  }
  uVar3 = (**(code **)**(uint64_t **)(*param_1 + 8))(*(uint64_t **)(*param_1 + 8),puVar1,uVar3);
  if ((int)uVar3 == 0) {
    auStackX_8[0] = 0;
    for (uVar2 = *param_2;
        (*param_2 <= uVar2 && (uVar2 < *param_2 + (longlong)(int)param_2[1] * 0x28));
        uVar2 = uVar2 + 0x28) {
      uVar3 = FUN_1808ddf00(param_1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (*(int *)(param_1[1] + 0x18) == 0) {
        uVar3 = FUN_180899ef0(*param_1,uVar2);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        if (*(int *)(param_1[1] + 0x18) != 0) {
          uVar3 = 0x1c;
          goto LAB_1808adcab;
        }
        auStackX_18[0] = *(uint *)(uVar2 + 0x20);
        uVar3 = (**(code **)**(uint64_t **)(*param_1 + 8))
                          (*(uint64_t **)(*param_1 + 8),auStackX_18,4);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        if (*(int *)(param_1[1] + 0x18) != 0) {
          uVar3 = 0x1c;
          goto LAB_1808adcab;
        }
        uVar3 = FUN_1808a27f0(*param_1,uVar2 + 0x10);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        if (*(uint *)(param_1 + 8) < 0x79) {
          uVar3 = 0;
        }
        else if (*(int *)(param_1[1] + 0x18) == 0) {
          auStackX_18[0] = *(uint *)(uVar2 + 0x24);
          uVar3 = (**(code **)**(uint64_t **)(*param_1 + 8))
                            (*(uint64_t **)(*param_1 + 8),auStackX_18,4);
        }
        else {
          uVar3 = 0x1c;
        }
        if ((int)uVar3 != 0) goto LAB_1808adcab;
      }
      else {
        uVar3 = 0x1c;
LAB_1808adcab:
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
      uVar3 = FUN_1808de160(param_1,auStackX_8);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      auStackX_8[0] = auStackX_8[0] & -param_3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



uint64_t FUN_1808adba3(void)

{
  uint64_t uVar1;
  longlong *unaff_RBX;
  int unaff_EBP;
  ulonglong uVar2;
  ulonglong *unaff_R14;
  uint uStack0000000000000050;
  int32_t in_stack_00000060;
  
  uStack0000000000000050 = 0;
  uVar2 = *unaff_R14;
  do {
    if ((uVar2 < *unaff_R14) || (*unaff_R14 + (longlong)(int)unaff_R14[1] * 0x28 <= uVar2)) {
      return 0;
    }
    uVar1 = FUN_1808ddf00();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      uVar1 = FUN_180899ef0(*unaff_RBX,uVar2);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
        uVar1 = 0x1c;
        goto LAB_1808adcab;
      }
      in_stack_00000060 = *(int32_t *)(uVar2 + 0x20);
      uVar1 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                        (*(uint64_t **)(*unaff_RBX + 8),&stack0x00000060,4);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
        uVar1 = 0x1c;
        goto LAB_1808adcab;
      }
      uVar1 = FUN_1808a27f0(*unaff_RBX,uVar2 + 0x10);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if (*(uint *)(unaff_RBX + 8) < 0x79) {
        uVar1 = 0;
      }
      else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
        in_stack_00000060 = *(int32_t *)(uVar2 + 0x24);
        uVar1 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                          (*(uint64_t **)(*unaff_RBX + 8),&stack0x00000060,4);
      }
      else {
        uVar1 = 0x1c;
      }
      if ((int)uVar1 != 0) goto LAB_1808adcab;
    }
    else {
      uVar1 = 0x1c;
LAB_1808adcab:
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    uVar1 = FUN_1808de160();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uStack0000000000000050 = uStack0000000000000050 & -unaff_EBP;
    uVar2 = uVar2 + 0x28;
  } while( true );
}






// 函数: void FUN_1808adcdb(void)
void FUN_1808adcdb(void)

{
  return;
}



uint64_t * FUN_1808adcf0(uint64_t *param_1)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  
  FUN_1808b0200();
  *(int32_t *)((longlong)param_1 + 0x3c) = 0xffffffff;
  param_1[6] = &UNK_180984a60;
  *(int32_t *)(param_1 + 7) = 0;
  puVar5 = (int32_t *)FUN_180847820();
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *(int32_t *)(param_1 + 8) = *puVar5;
  *(int32_t *)((longlong)param_1 + 0x44) = uVar1;
  *(int32_t *)(param_1 + 9) = uVar2;
  *(int32_t *)((longlong)param_1 + 0x4c) = uVar3;
  *param_1 = &UNK_180986ab8;
  param_1[6] = &UNK_180986af0;
  puVar5 = (int32_t *)FUN_180847820();
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *(int32_t *)(param_1 + 10) = *puVar5;
  *(int32_t *)((longlong)param_1 + 0x54) = uVar1;
  *(int32_t *)(param_1 + 0xb) = uVar2;
  *(int32_t *)((longlong)param_1 + 0x5c) = uVar3;
  puVar5 = (int32_t *)FUN_180847820();
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *(int32_t *)(param_1 + 0xc) = *puVar5;
  *(int32_t *)((longlong)param_1 + 100) = uVar1;
  *(int32_t *)(param_1 + 0xd) = uVar2;
  *(int32_t *)((longlong)param_1 + 0x6c) = uVar3;
  puVar6 = (uint64_t *)FUN_180847820();
  uVar4 = puVar6[1];
  param_1[0xe] = *puVar6;
  param_1[0xf] = uVar4;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x42c80000;
  param_1[0x14] = 0;
  param_1[0x15] = 0x3f800000;
  *(int32_t *)(param_1 + 0x16) = 0;
  *(uint64_t *)((longlong)param_1 + 0xb4) = 0x7fffffff;
  *(uint64_t *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(int32_t *)(param_1 + 0x1a) = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808addd0(longlong *param_1)
void FUN_1808addd0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar4 = *(uint *)((longlong)param_1 + 0xc);
  uVar3 = 0;
  uVar5 = (ulonglong)uVar4;
  if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return;
    }
    if ((0 < (int)uVar4) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
    }
    *param_1 = 0;
    *(int32_t *)((longlong)param_1 + 0xc) = 0;
    uVar5 = uVar3;
  }
  uVar4 = (uint)uVar5;
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    lVar2 = *param_1;
    if (iVar1 < 0) {
      do {
        *(uint64_t *)(lVar2 + (longlong)iVar1 * 8 + uVar3 * 8) = 0;
        uVar3 = uVar3 + 1;
      } while ((longlong)uVar3 < (longlong)-iVar1);
      uVar4 = *(uint *)((longlong)param_1 + 0xc);
    }
  }
  *(int32_t *)(param_1 + 1) = 0;
  if (0 < (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f))) {
    FUN_1808af110(param_1,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808ade90(longlong *param_1)
void FUN_1808ade90(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar4 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return;
    }
    if ((0 < (int)uVar4) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
    }
    *param_1 = 0;
    *(int32_t *)((longlong)param_1 + 0xc) = 0;
    uVar4 = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    lVar3 = (longlong)-iVar1;
    if (iVar1 < 0) {
      lVar2 = (longlong)iVar1 * 0x10 + *param_1 + 0xc;
      do {
        *(uint64_t *)(lVar2 + -0xc) = 0;
        *(uint64_t *)(lVar2 + -4) = 0;
        lVar2 = lVar2 + 0x10;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      uVar4 = *(uint *)((longlong)param_1 + 0xc);
    }
  }
  *(int32_t *)(param_1 + 1) = 0;
  if (0 < (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f))) {
    FUN_1807d3f50(param_1,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808adf50(uint64_t *param_1)
void FUN_1808adf50(uint64_t *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  
  iVar3 = FUN_1808af3c0(param_1 + 0x1b,0);
  if ((iVar3 == 0) &&
     (uVar4 = (int)*(uint *)((longlong)param_1 + 0xe4) >> 0x1f,
     *(int *)(param_1 + 0x1c) < (int)((*(uint *)((longlong)param_1 + 0xe4) ^ uVar4) - uVar4))) {
    FUN_1808aeda0(param_1 + 0x1b,*(int *)(param_1 + 0x1c));
  }
  FUN_1808b0fb0(param_1 + 0x19,0);
  *param_1 = &UNK_180986f68;
  plVar1 = param_1 + 4;
  plVar2 = (longlong *)*plVar1;
  if ((plVar2 == plVar1) && ((longlong *)param_1[5] == plVar1)) {
    func_0x00018085dda0(plVar1);
    *param_1 = &UNK_180984ab8;
    *(int32_t *)(param_1 + 1) = 0xdeadf00d;
    return;
  }
  plVar5 = (longlong *)0x0;
  if (plVar2 != plVar1) {
    plVar5 = plVar2;
  }
  *(int32_t *)((longlong)plVar5 + 0x44) = 0xffffffff;
  FUN_18084c220(plVar5 + 4);
  FUN_18084c220(plVar5 + 2);
  *(longlong *)plVar5[1] = *plVar5;
  *(longlong *)(*plVar5 + 8) = plVar5[1];
  plVar5[1] = (longlong)plVar5;
  *plVar5 = (longlong)plVar5;
  *(longlong **)plVar5[1] = plVar5;
  *(longlong *)(*plVar5 + 8) = plVar5[1];
  plVar5[1] = (longlong)plVar5;
  *plVar5 = (longlong)plVar5;
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar5,&UNK_180986f90,0x30,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808adfc0(longlong *param_1)
void FUN_1808adfc0(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  FUN_18084c680(param_1 + 0xc);
  FUN_18084c680(param_1 + 10);
  iVar1 = FUN_1808af810(param_1 + 6,0);
  if ((iVar1 == 0) &&
     (uVar2 = (int)*(uint *)((longlong)param_1 + 0x3c) >> 0x1f,
     (int)param_1[7] < (int)((*(uint *)((longlong)param_1 + 0x3c) ^ uVar2) - uVar2))) {
    FUN_18084d3f0(param_1 + 6,(int)param_1[7]);
  }
  iVar1 = FUN_1808af810(param_1 + 4,0);
  if ((iVar1 == 0) &&
     (uVar2 = (int)*(uint *)((longlong)param_1 + 0x2c) >> 0x1f,
     (int)param_1[5] < (int)((*(uint *)((longlong)param_1 + 0x2c) ^ uVar2) - uVar2))) {
    FUN_18084d3f0(param_1 + 4,(int)param_1[5]);
  }
  FUN_18084c680(param_1 + 2);
  plVar3 = (longlong *)*param_1;
  if (plVar3 != param_1) {
    if (plVar3 != param_1) {
      *(longlong *)plVar3[1] = *plVar3;
      *(longlong *)(*plVar3 + 8) = plVar3[1];
      plVar3[1] = (longlong)plVar3;
      *plVar3 = (longlong)plVar3;
      *(longlong **)plVar3[1] = plVar3;
      *(longlong *)(*plVar3 + 8) = plVar3[1];
      plVar3[1] = (longlong)plVar3;
      *plVar3 = (longlong)plVar3;
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar3,&UNK_180984b50,0xe1,1);
    }
    plVar3 = (longlong *)*param_1;
  }
  *(longlong **)param_1[1] = plVar3;
  *(longlong *)(*param_1 + 8) = param_1[1];
  param_1[1] = (longlong)param_1;
  *param_1 = (longlong)param_1;
  return;
}



uint64_t FUN_1808ae050(uint64_t param_1,ulonglong param_2)

{
  FUN_1808b02a0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x98);
  }
  return param_1;
}



uint64_t * FUN_1808ae090(uint64_t *param_1,ulonglong param_2)

{
  FUN_1808ade90(param_1 + 8);
  *(int32_t *)(param_1 + 1) = 0xdeadf00d;
  *param_1 = &UNK_180984ab8;
  if ((param_2 & 1) != 0) {
    free(param_1,0x50);
  }
  return param_1;
}



uint64_t FUN_1808ae0e0(uint64_t param_1,ulonglong param_2)

{
  FUN_1808d9bd0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x68);
  }
  return param_1;
}



longlong FUN_1808ae120(longlong param_1,uint param_2)

{
  FUN_1808b0fb0(param_1 + 200,0);
  FUN_1808b02a0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xf0);
  }
  return param_1;
}



uint64_t * FUN_1808ae170(uint64_t *param_1,ulonglong param_2)

{
  *(int32_t *)(param_1 + 1) = 0xdeadf00d;
  *param_1 = &UNK_180984ab8;
  if ((param_2 & 1) != 0) {
    free(param_1,0x48);
  }
  return param_1;
}



uint64_t * FUN_1808ae1b0(uint64_t *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1808af340(param_1 + 6,0);
  if ((iVar1 == 0) &&
     (uVar2 = (int)*(uint *)((longlong)param_1 + 0x3c) >> 0x1f,
     *(int *)(param_1 + 7) < (int)((*(uint *)((longlong)param_1 + 0x3c) ^ uVar2) - uVar2))) {
    FUN_1808676f0(param_1 + 6,*(int *)(param_1 + 7));
  }
  *(int32_t *)(param_1 + 1) = 0xdeadf00d;
  *param_1 = &UNK_180984ab8;
  if ((param_2 & 1) != 0) {
    free(param_1,0x40);
  }
  return param_1;
}



longlong FUN_1808ae230(longlong param_1,uint param_2)

{
  FUN_1808b0fb0(param_1 + 200,0);
  FUN_1808b02a0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xe8);
  }
  return param_1;
}



uint64_t * FUN_1808ae280(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180986938;
  if ((param_2 & 1) != 0) {
    free(param_1,0x18);
  }
  return param_1;
}



uint64_t * FUN_1808ae2b0(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180986938;
  if ((param_2 & 1) != 0) {
    free(param_1,0x20);
  }
  return param_1;
}



uint64_t FUN_1808ae2e0(uint64_t param_1,ulonglong param_2)

{
  FUN_1808d9ba0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x20);
  }
  return param_1;
}



uint64_t FUN_1808ae320(uint64_t param_1,ulonglong param_2)

{
  FUN_1808b02a0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x80);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1808ae360(uint64_t *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = &UNK_180986b00;
  plVar2 = param_1 + 0x1d;
  param_1[6] = &UNK_180986af0;
  plVar1 = (longlong *)*plVar2;
  if ((plVar1 == plVar2) && ((longlong *)param_1[0x1e] == plVar2)) {
    func_0x00018085dda0(plVar2);
    FUN_1808b0fb0(param_1 + 0x19,0);
    FUN_1808b02a0(param_1);
    if ((param_2 & 1) != 0) {
      free(param_1,0x100);
    }
    return param_1;
  }
  if (plVar1 == plVar2) {
    plVar1 = (longlong *)0x0;
  }
  if (plVar1 != (longlong *)0x0) {
    plVar2 = plVar1;
  }
  *(longlong *)plVar2[1] = *plVar2;
  *(longlong *)(*plVar2 + 8) = plVar2[1];
  plVar2[1] = (longlong)plVar2;
  *plVar2 = (longlong)plVar2;
  *(longlong **)plVar2[1] = plVar2;
  *(longlong *)(*plVar2 + 8) = plVar2[1];
  plVar2[1] = (longlong)plVar2;
  *plVar2 = (longlong)plVar2;
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar2,&UNK_180986b40,0x166,1);
}



longlong FUN_1808ae460(longlong param_1,uint param_2)

{
  FUN_1808b0fb0(param_1 + 200,0);
  FUN_1808b02a0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xd8);
  }
  return param_1;
}



uint64_t FUN_1808ae4b0(uint64_t param_1,ulonglong param_2)

{
  FUN_1808b02a0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x68);
  }
  return param_1;
}



uint64_t * FUN_1808ae4f0(uint64_t *param_1,ulonglong param_2)

{
  FUN_180840270(param_1 + 6);
  *(int32_t *)(param_1 + 1) = 0xdeadf00d;
  *param_1 = &UNK_180984ab8;
  if ((param_2 & 1) != 0) {
    free(param_1,0x50);
  }
  return param_1;
}



uint64_t * FUN_1808ae540(uint64_t *param_1,ulonglong param_2)

{
  FUN_1808addd0(param_1 + 4);
  *(int32_t *)(param_1 + 1) = 0xdeadf00d;
  *param_1 = &UNK_180984ab8;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30);
  }
  return param_1;
}



uint64_t FUN_1808ae590(uint64_t param_1,ulonglong param_2)

{
  FUN_1808b02a0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x50);
  }
  return param_1;
}



uint64_t FUN_1808ae5d0(uint64_t param_1,ulonglong param_2)

{
  FUN_1808adf50();
  if ((param_2 & 1) != 0) {
    free(param_1,0xf0);
  }
  return param_1;
}



uint64_t * FUN_1808ae610(uint64_t *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  
  FUN_18084c220(param_1 + 0xb);
  iVar1 = FUN_1808af770(param_1 + 9,0);
  if ((iVar1 == 0) &&
     (uVar2 = (int)*(uint *)((longlong)param_1 + 0x54) >> 0x1f,
     *(int *)(param_1 + 10) < (int)((*(uint *)((longlong)param_1 + 0x54) ^ uVar2) - uVar2))) {
    FUN_180883750(param_1 + 9,*(int *)(param_1 + 10));
  }
  FUN_18084c220(param_1 + 5);
  *(int32_t *)(param_1 + 1) = 0xdeadf00d;
  *param_1 = &UNK_180984ab8;
  if ((param_2 & 1) != 0) {
    free(param_1,0x70);
  }
  return param_1;
}



uint64_t FUN_1808ae6a0(uint64_t param_1,ulonglong param_2)

{
  FUN_1808d9bd0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x60);
  }
  return param_1;
}



longlong FUN_1808ae6e0(longlong param_1,ulonglong param_2)

{
  FUN_180840270(param_1 + 0x70);
  FUN_180840270(param_1 + 0x60);
  FUN_1808d9bd0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x88);
  }
  return param_1;
}



longlong FUN_1808ae730(longlong param_1,ulonglong param_2)

{
  FUN_180840270(param_1 + 0xd8);
  FUN_1808b0fb0(param_1 + 200,0);
  FUN_1808b02a0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xe8);
  }
  return param_1;
}



uint64_t FUN_1808ae790(uint64_t param_1,ulonglong param_2)

{
  FUN_1808b02a0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x60);
  }
  return param_1;
}



uint64_t FUN_1808ae7d0(uint64_t param_1,ulonglong param_2)

{
  FUN_1808adf50();
  if ((param_2 & 1) != 0) {
    free(param_1,0x110);
  }
  return param_1;
}



longlong FUN_1808ae810(longlong param_1,uint param_2)

{
  FUN_1808b0fb0(param_1 + 200,0);
  FUN_1808b02a0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xe0);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1808ae8e0(longlong param_1,int param_2,uint64_t *param_3)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)
           FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x20,&UNK_1809869a0,0x119,0,0,1);
  if (puVar1 == (uint64_t *)0x0) {
    return 0x26;
  }
  puVar1[1] = 0;
  *(int32_t *)(puVar1 + 2) = 1;
  *puVar1 = &UNK_180986940;
  *(int32_t *)(puVar1 + 3) = 0;
  *param_3 = puVar1;
  *(uint64_t **)(*(longlong *)(param_1 + 0x48) + (longlong)param_2 * 8) = puVar1;
  return 0;
}



uint64_t FUN_1808ae9d0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint64_t uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  
  iVar7 = (int)param_1[1];
  iVar9 = 0;
  if (-1 < iVar7 + -1) {
    lVar1 = *param_1;
    lVar10 = *param_2 + 0x10;
    iVar5 = iVar7 + -1;
    do {
      iVar3 = memcmp(*(longlong *)(lVar1 + (longlong)iVar5 * 8) + 0x10,lVar10,0x10);
      if (iVar3 < 0) {
        iVar9 = iVar5 + 1;
        break;
      }
      iVar3 = (iVar5 + iVar9) / 2;
      lVar2 = *(longlong *)(lVar1 + (longlong)iVar3 * 8);
      iVar4 = memcmp(lVar10,lVar2 + 0x10,0x10);
      if (iVar4 < 0) {
        uVar8 = 0xffffffff;
      }
      else {
        iVar4 = memcmp(lVar2 + 0x10,lVar10,0x10);
        uVar8 = (uint)(iVar4 < 0);
        if (uVar8 == 0) goto LAB_1808aeb35;
      }
      iVar4 = iVar3 + -1;
      if (-1 < (int)uVar8) {
        iVar4 = iVar5;
      }
      if (-1 < (int)uVar8) {
        iVar9 = iVar3 + 1;
      }
      iVar5 = iVar4;
    } while (iVar9 <= iVar4);
  }
  if ((iVar9 < 0) || (iVar7 < iVar9)) {
LAB_1808aeb35:
    uVar6 = 0x1c;
  }
  else {
    iVar7 = iVar7 + 1;
    uVar8 = (int)*(uint *)((longlong)param_1 + 0xc) >> 0x1f;
    iVar5 = (*(uint *)((longlong)param_1 + 0xc) ^ uVar8) - uVar8;
    if (iVar5 < iVar7) {
      iVar3 = (int)((float)iVar5 * 1.5);
      iVar5 = iVar7;
      if (iVar7 <= iVar3) {
        iVar5 = iVar3;
      }
      if (iVar5 < 8) {
        iVar3 = 8;
      }
      else if (iVar3 < iVar7) {
        iVar3 = iVar7;
      }
      uVar6 = FUN_180747f10(param_1,iVar3);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    iVar7 = (int)param_1[1] - iVar9;
    if (0 < iVar7) {
      lVar1 = *param_1 + (longlong)iVar9 * 8;
                    // WARNING: Subroutine does not return
      memmove(lVar1 + 8,lVar1,(longlong)iVar7 << 3);
    }
    *(longlong *)(*param_1 + (longlong)iVar9 * 8) = *param_2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    uVar6 = 0;
  }
  return uVar6;
}



uint64_t * FUN_1808aeb60(longlong *param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  int8_t auStack_18 [16];
  
  puVar2 = (uint64_t *)(**(code **)(*param_1 + 0x38))(param_1,auStack_18);
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  return param_2;
}



uint64_t * FUN_1808aebb0(longlong *param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  int8_t auStack_18 [16];
  
  puVar2 = (uint64_t *)(**(code **)(*param_1 + 0x40))(param_1,auStack_18);
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  return param_2;
}



uint64_t * FUN_1808aebe0(longlong *param_1,uint64_t *param_2)

{
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  (**(code **)(*param_1 + 0x30))(param_1,&uStack_18);
  *param_2 = uStack_18;
  param_2[1] = uStack_10;
  return param_2;
}






// 函数: void FUN_1808aec50(longlong *param_1,longlong *param_2)
void FUN_1808aec50(longlong *param_1,longlong *param_2)

{
  uint64_t uVar1;
  longlong lVar2;
  int iVar3;
  uint64_t *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  lVar2 = param_1[1];
  iVar5 = (int)lVar2 + 1;
  uVar6 = (int)*(uint *)((longlong)param_1 + 0xc) >> 0x1f;
  iVar3 = (*(uint *)((longlong)param_1 + 0xc) ^ uVar6) - uVar6;
  if (iVar3 < iVar5) {
    iVar7 = (int)((float)iVar3 * 1.5);
    iVar3 = iVar5;
    if (iVar5 <= iVar7) {
      iVar3 = iVar7;
    }
    if (iVar3 < 2) {
      iVar7 = 2;
    }
    else if (iVar7 < iVar5) {
      iVar7 = iVar5;
    }
    iVar3 = FUN_180883750(param_1,iVar7);
    if (iVar3 != 0) {
      return;
    }
  }
  lVar8 = (longlong)(int)lVar2 * 0x1c;
  lVar2 = *param_1;
  puVar4 = (uint64_t *)FUN_180847820();
  uVar1 = puVar4[1];
  *(uint64_t *)(lVar8 + lVar2) = *puVar4;
  ((uint64_t *)(lVar8 + lVar2))[1] = uVar1;
  *(uint64_t *)(lVar8 + 0x10 + lVar2) = 0;
  *(int8_t *)(lVar8 + 0x18 + lVar2) = 0;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  if (param_2 != (longlong *)0x0) {
    *param_2 = *param_1 + lVar8;
  }
  return;
}






// 函数: void FUN_1808aecb0(void)
void FUN_1808aecb0(void)

{
  longlong lVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  longlong unaff_RBX;
  longlong lVar4;
  longlong *unaff_RDI;
  longlong *unaff_R14;
  
  lVar4 = unaff_RBX * 0x1c;
  lVar1 = *unaff_RDI;
  puVar3 = (uint64_t *)FUN_180847820();
  uVar2 = puVar3[1];
  *(uint64_t *)(lVar4 + lVar1) = *puVar3;
  ((uint64_t *)(lVar4 + lVar1))[1] = uVar2;
  *(uint64_t *)(lVar4 + 0x10 + lVar1) = 0;
  *(int8_t *)(lVar4 + 0x18 + lVar1) = 0;
  *(int *)(unaff_RDI + 1) = (int)unaff_RDI[1] + 1;
  if (unaff_R14 != (longlong *)0x0) {
    *unaff_R14 = *unaff_RDI + lVar4;
  }
  return;
}






