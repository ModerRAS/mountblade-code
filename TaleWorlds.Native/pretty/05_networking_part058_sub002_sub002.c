#include "TaleWorlds.Native.Split.h"

// 05_networking_part058_sub002_sub002.c - 1 个函数

// 函数: void FUN_18086d44e(void)
void FUN_18086d44e(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}



uint64_t
FUN_18086d470(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
             uint64_t param_5,longlong param_6)

{
  int iVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int8_t auStackX_20 [8];
  longlong lStack_48;
  longlong lStack_40;
  longlong lStack_38;
  
  lStack_38 = (**(code **)(*param_4 + 0x30))(param_4);
  if (lStack_38 == 0) {
    return 0x1c;
  }
  iVar1 = *(int *)(param_1 + 0x1e8);
  if (0 < (longlong)iVar1) {
    lVar6 = 0;
    do {
      lStack_48 = 0;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + lVar6 * 8);
      lStack_40 = lVar2;
      uVar3 = FUN_180885d80(lStack_38,lVar2,param_5,&lStack_48);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if ((lVar2 != 0) && (lVar4 = func_0x00018086dc30(param_6 + 8), lVar4 != 0)) {
        auStackX_20[0] = 1;
        FUN_180879610(lVar4,lVar2 + 0x10,auStackX_20);
      }
      lVar4 = lStack_48;
      if (lVar2 != lStack_48) {
        if (lVar2 != 0) {
          lVar5 = param_6 + 0x530;
          if (param_6 == -0xf8) {
            lVar5 = 0;
          }
          if (lVar5 != 0) {
            auStackX_20[0] = 1;
            FUN_180879610(lVar5,lVar2 + 0x10,auStackX_20);
          }
        }
        lVar5 = FUN_1808761f0(param_2 + 0x1e0);
        if (lVar5 == 0) {
          *(ushort *)(lVar2 + 0xe) = *(ushort *)(lVar2 + 0xe) | 0x4000;
          uVar3 = FUN_18087dc70(param_2 + 0x1e0);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
      }
      if ((lVar4 != 0) && (uVar3 = FUN_18087dc70(param_3 + 0x1e0), (int)uVar3 != 0)) {
        return uVar3;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
  }
  return 0;
}



uint64_t
FUN_18086d620(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
             uint64_t param_5,longlong param_6)

{
  int iVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int8_t auStackX_20 [8];
  longlong lStack_48;
  longlong lStack_40;
  longlong lStack_38;
  
  lStack_38 = (**(code **)(*param_4 + 0x58))(param_4);
  if (lStack_38 == 0) {
    return 0x1c;
  }
  iVar1 = *(int *)(param_1 + 0x1f8);
  if (0 < (longlong)iVar1) {
    lVar6 = 0;
    do {
      lStack_48 = 0;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1f0) + lVar6 * 8);
      lStack_40 = lVar2;
      uVar3 = FUN_180888e80(lStack_38,lVar2,param_5,&lStack_48);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if ((lVar2 != 0) && (lVar4 = func_0x00018086dc30(param_6 + 8), lVar4 != 0)) {
        auStackX_20[0] = 1;
        FUN_180879610(lVar4,lVar2 + 0x10,auStackX_20);
      }
      lVar4 = lStack_48;
      if (lVar2 != lStack_48) {
        if (lVar2 != 0) {
          lVar5 = param_6 + 0x490;
          if (param_6 == -0xf8) {
            lVar5 = 0;
          }
          if (lVar5 != 0) {
            auStackX_20[0] = 1;
            FUN_180879610(lVar5,lVar2 + 0x10,auStackX_20);
          }
        }
        lVar5 = FUN_1808761f0(param_2 + 0x1f0);
        if (lVar5 == 0) {
          *(ushort *)(lVar2 + 0xe) = *(ushort *)(lVar2 + 0xe) | 0x4000;
          uVar3 = FUN_18087dc70(param_2 + 0x1f0);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
      }
      if ((lVar4 != 0) && (uVar3 = FUN_18087dc70(param_3 + 0x1f0), (int)uVar3 != 0)) {
        return uVar3;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18086d7d0(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong *plVar4;
  uint64_t uVar5;
  longlong lVar6;
  longlong lStackX_10;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  
  plVar4 = (longlong *)(**(code **)(*param_2 + 0x60))(param_2,0);
  if (plVar4 == (longlong *)0x0) {
    return 0x1c;
  }
  lVar6 = 0;
  iVar1 = *(int *)(param_1 + 0x1a8);
  if (0 < (longlong)iVar1) {
    do {
      lStackX_10 = 0;
      puVar2 = *(uint64_t **)(*(longlong *)(param_1 + 0x1a0) + lVar6 * 8);
      uStack_38 = *(int32_t *)(puVar2 + 2);
      uStack_34 = *(int32_t *)((longlong)puVar2 + 0x14);
      uStack_30 = *(int32_t *)(puVar2 + 3);
      uStack_2c = *(int32_t *)((longlong)puVar2 + 0x1c);
      uVar5 = FUN_1808801f0(plVar4[1],&uStack_38,puVar2,&lStackX_10);
      lVar3 = lStackX_10;
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      if (lStackX_10 == 0) {
        *(short *)((longlong)puVar2 + 0xe) = *(short *)((longlong)puVar2 + 0xe) + 1;
        uVar5 = (**(code **)*plVar4)(plVar4,puVar2);
        if ((int)uVar5 != 0) goto LAB_18086d8a4;
      }
      else {
        *(short *)(lStackX_10 + 0xe) = *(short *)(lStackX_10 + 0xe) + 1;
        uVar5 = (**(code **)(*plVar4 + 8))(plVar4,puVar2,lStackX_10);
        if ((int)uVar5 != 0) {
LAB_18086d8a4:
          if ((int)uVar5 != 0) {
            return uVar5;
          }
        }
        if (lVar3 != 0) {
          (**(code **)*puVar2)(puVar2,0);
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),puVar2,&UNK_180985b90,0x55d,1);
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18086d930(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong *plVar4;
  uint64_t uVar5;
  longlong lVar6;
  longlong lStackX_10;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  
  plVar4 = (longlong *)(**(code **)(*param_2 + 0x58))(param_2,0);
  if (plVar4 == (longlong *)0x0) {
    return 0x1c;
  }
  lVar6 = 0;
  iVar1 = *(int *)(param_1 + 0x1f8);
  if (0 < (longlong)iVar1) {
    do {
      lStackX_10 = 0;
      puVar2 = *(uint64_t **)(*(longlong *)(param_1 + 0x1f0) + lVar6 * 8);
      uStack_38 = *(int32_t *)(puVar2 + 2);
      uStack_34 = *(int32_t *)((longlong)puVar2 + 0x14);
      uStack_30 = *(int32_t *)(puVar2 + 3);
      uStack_2c = *(int32_t *)((longlong)puVar2 + 0x1c);
      uVar5 = FUN_1808801f0(plVar4[1],&uStack_38,puVar2,&lStackX_10);
      lVar3 = lStackX_10;
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      if (lStackX_10 == 0) {
        *(short *)((longlong)puVar2 + 0xe) = *(short *)((longlong)puVar2 + 0xe) + 1;
        uVar5 = (**(code **)*plVar4)(plVar4,puVar2);
        if ((int)uVar5 != 0) goto LAB_18086da04;
      }
      else {
        *(short *)(lStackX_10 + 0xe) = *(short *)(lStackX_10 + 0xe) + 1;
        uVar5 = (**(code **)(*plVar4 + 8))(plVar4,puVar2,lStackX_10);
        if ((int)uVar5 != 0) {
LAB_18086da04:
          if ((int)uVar5 != 0) {
            return uVar5;
          }
        }
        if (lVar3 != 0) {
          (**(code **)*puVar2)(puVar2,0);
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),puVar2,&UNK_180985b90,0x55d,1);
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
  }
  return 0;
}



uint64_t FUN_18086da90(longlong *param_1,uint64_t *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint64_t *puVar8;
  longlong lVar9;
  int iVar10;
  
  iVar10 = (int)param_1[1];
  iVar3 = 0;
  iVar1 = iVar3;
  if (-1 < iVar10 + -1) {
    lVar7 = *param_1;
    iVar6 = iVar10 + -1;
    do {
      iVar1 = memcmp((longlong)iVar6 * 0x10 + lVar7,param_2,0x10);
      if (iVar1 < 0) {
        iVar1 = iVar6 + 1;
        break;
      }
      iVar1 = (iVar6 + iVar3) / 2;
      lVar9 = (longlong)iVar1 * 0x10 + lVar7;
      iVar2 = memcmp(lVar9,param_2,0x10);
      if (iVar2 < 0) {
        uVar5 = 0xffffffff;
      }
      else {
        iVar2 = memcmp(param_2,lVar9,0x10);
        uVar5 = (uint)(iVar2 < 0);
        if (uVar5 == 0) break;
      }
      iVar2 = iVar1 + -1;
      if ((int)uVar5 < 1) {
        iVar2 = iVar6;
      }
      if ((int)uVar5 < 1) {
        iVar3 = iVar1 + 1;
      }
      iVar1 = iVar3;
      iVar6 = iVar2;
    } while (iVar3 <= iVar2);
  }
  if ((iVar1 < 0) || (iVar10 < iVar1)) {
    return 0x1c;
  }
  iVar10 = iVar10 + 1;
  uVar5 = (int)*(uint *)((longlong)param_1 + 0xc) >> 0x1f;
  iVar3 = (*(uint *)((longlong)param_1 + 0xc) ^ uVar5) - uVar5;
  if (iVar3 < iVar10) {
    iVar6 = (int)((float)iVar3 * 1.5);
    iVar3 = iVar10;
    if (iVar10 <= iVar6) {
      iVar3 = iVar6;
    }
    if (iVar3 < 4) {
      iVar6 = 4;
    }
    else if (iVar6 < iVar10) {
      iVar6 = iVar10;
    }
    uVar4 = FUN_180748010(param_1,iVar6);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
  iVar10 = (int)param_1[1] - iVar1;
  if (0 < iVar10) {
    lVar7 = (longlong)iVar1 * 0x10 + *param_1;
                    // WARNING: Subroutine does not return
    memmove(lVar7 + 0x10,lVar7,(longlong)iVar10 << 4);
  }
  uVar4 = param_2[1];
  puVar8 = (uint64_t *)((longlong)iVar1 * 0x10 + *param_1);
  *puVar8 = *param_2;
  puVar8[1] = uVar4;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return 0;
}



uint64_t FUN_18086daa2(longlong *param_1)

{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  uint uVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *unaff_RBP;
  longlong lVar7;
  int iVar8;
  int unaff_R13D;
  int iVar9;
  uint64_t extraout_XMM0_Qa;
  
  iVar8 = 0;
  iVar9 = unaff_R13D + -1;
  iVar1 = iVar8;
  if (-1 < iVar9) {
    lVar5 = *param_1;
    do {
      iVar1 = memcmp((longlong)iVar9 * 0x10 + lVar5);
      if (iVar1 < 0) {
        iVar1 = iVar9 + 1;
        break;
      }
      iVar1 = (iVar9 + iVar8) / 2;
      lVar7 = (longlong)iVar1 * 0x10 + lVar5;
      iVar2 = memcmp(lVar7);
      if (iVar2 < 0) {
        uVar4 = 0xffffffff;
      }
      else {
        iVar2 = memcmp(extraout_XMM0_Qa,lVar7,0x10);
        uVar4 = (uint)(iVar2 < 0);
        if (uVar4 == 0) break;
      }
      iVar2 = iVar1 + -1;
      if ((int)uVar4 < 1) {
        iVar2 = iVar9;
      }
      iVar9 = iVar2;
      if ((int)uVar4 < 1) {
        iVar8 = iVar1 + 1;
      }
      iVar1 = iVar8;
    } while (iVar8 <= iVar9);
  }
  if ((iVar1 < 0) || (unaff_R13D < iVar1)) {
    return 0x1c;
  }
  iVar8 = unaff_R13D + 1;
  uVar4 = (int)*(uint *)((longlong)param_1 + 0xc) >> 0x1f;
  iVar9 = (*(uint *)((longlong)param_1 + 0xc) ^ uVar4) - uVar4;
  if (iVar9 < iVar8) {
    iVar2 = (int)((float)iVar9 * 1.5);
    iVar9 = iVar8;
    if (iVar8 <= iVar2) {
      iVar9 = iVar2;
    }
    if (iVar9 < 4) {
      iVar2 = 4;
    }
    else if (iVar2 < iVar8) {
      iVar2 = iVar8;
    }
    uVar3 = FUN_180748010(param_1,iVar2);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  iVar8 = (int)param_1[1] - iVar1;
  if (0 < iVar8) {
    lVar5 = (longlong)iVar1 * 0x10 + *param_1;
                    // WARNING: Subroutine does not return
    memmove(lVar5 + 0x10,lVar5,(longlong)iVar8 << 4);
  }
  uVar3 = unaff_RBP[1];
  puVar6 = (uint64_t *)((longlong)iVar1 * 0x10 + *param_1);
  *puVar6 = *unaff_RBP;
  puVar6[1] = uVar3;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return 0;
}



uint64_t FUN_18086db77(void)

{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int unaff_EBX;
  uint64_t *puVar6;
  uint64_t *unaff_RBP;
  int iVar7;
  int unaff_R13D;
  longlong *unaff_R15;
  float fVar8;
  
  if (unaff_R13D < unaff_EBX) {
    return 0x1c;
  }
  iVar7 = unaff_R13D + 1;
  uVar3 = (int)*(uint *)((longlong)unaff_R15 + 0xc) >> 0x1f;
  iVar1 = (*(uint *)((longlong)unaff_R15 + 0xc) ^ uVar3) - uVar3;
  if (iVar1 < iVar7) {
    fVar8 = (float)iVar1 * 1.5;
    iVar4 = (int)fVar8;
    iVar1 = iVar7;
    if (iVar7 <= iVar4) {
      iVar1 = iVar4;
    }
    if (iVar1 < 4) {
      iVar4 = 4;
    }
    else if (iVar4 < iVar7) {
      iVar4 = iVar7;
    }
    uVar2 = FUN_180748010(fVar8,iVar4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  iVar7 = (int)unaff_R15[1] - unaff_EBX;
  if (iVar7 < 1) {
    uVar2 = unaff_RBP[1];
    puVar6 = (uint64_t *)((longlong)unaff_EBX * 0x10 + *unaff_R15);
    *puVar6 = *unaff_RBP;
    puVar6[1] = uVar2;
    *(int *)(unaff_R15 + 1) = (int)unaff_R15[1] + 1;
    return 0;
  }
  lVar5 = (longlong)unaff_EBX * 0x10 + *unaff_R15;
                    // WARNING: Subroutine does not return
  memmove(lVar5 + 0x10,lVar5,(longlong)iVar7 << 4);
}



uint64_t FUN_18086dbb7(void)

{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint64_t *puVar7;
  uint64_t *unaff_RBP;
  int iVar8;
  int unaff_R13D;
  int unaff_R14D;
  longlong *unaff_R15;
  float fVar9;
  
  iVar6 = unaff_R14D + 1;
  if ((iVar6 < 0) || (unaff_R13D < iVar6)) {
    return 0x1c;
  }
  iVar8 = unaff_R13D + 1;
  uVar3 = (int)*(uint *)((longlong)unaff_R15 + 0xc) >> 0x1f;
  iVar1 = (*(uint *)((longlong)unaff_R15 + 0xc) ^ uVar3) - uVar3;
  if (iVar1 < iVar8) {
    fVar9 = (float)iVar1 * 1.5;
    iVar4 = (int)fVar9;
    iVar1 = iVar8;
    if (iVar8 <= iVar4) {
      iVar1 = iVar4;
    }
    if (iVar1 < 4) {
      iVar4 = 4;
    }
    else if (iVar4 < iVar8) {
      iVar4 = iVar8;
    }
    uVar2 = FUN_180748010(fVar9,iVar4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  iVar8 = (int)unaff_R15[1] - iVar6;
  if (iVar8 < 1) {
    uVar2 = unaff_RBP[1];
    puVar7 = (uint64_t *)((longlong)iVar6 * 0x10 + *unaff_R15);
    *puVar7 = *unaff_RBP;
    puVar7[1] = uVar2;
    *(int *)(unaff_R15 + 1) = (int)unaff_R15[1] + 1;
    return 0;
  }
  lVar5 = (longlong)iVar6 * 0x10 + *unaff_R15;
                    // WARNING: Subroutine does not return
  memmove(lVar5 + 0x10,lVar5,(longlong)iVar8 << 4);
}



uint64_t FUN_18086dbbd(int32_t param_1,int param_2)

{
  uint64_t uVar1;
  int in_ECX;
  longlong lVar2;
  int unaff_EBX;
  uint64_t *puVar3;
  uint64_t *unaff_RBP;
  int iVar4;
  longlong *unaff_R15;
  
  if (param_2 < in_ECX) {
    param_2 = in_ECX;
  }
  uVar1 = FUN_180748010(param_1,param_2);
  if ((int)uVar1 == 0) {
    iVar4 = (int)unaff_R15[1] - unaff_EBX;
    if (0 < iVar4) {
      lVar2 = (longlong)unaff_EBX * 0x10 + *unaff_R15;
                    // WARNING: Subroutine does not return
      memmove(lVar2 + 0x10,lVar2,(longlong)iVar4 << 4);
    }
    uVar1 = unaff_RBP[1];
    puVar3 = (uint64_t *)((longlong)unaff_EBX * 0x10 + *unaff_R15);
    *puVar3 = *unaff_RBP;
    puVar3[1] = uVar1;
    *(int *)(unaff_R15 + 1) = (int)unaff_R15[1] + 1;
    return 0;
  }
  return uVar1;
}



uint64_t FUN_18086dc50(longlong param_1,longlong *param_2,uint64_t *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  uint64_t uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = 0;
  iVar9 = 0;
  do {
    while( true ) {
      if ((iVar9 < 0) || (iVar2 = *(int *)(param_1 + 0x1a8), iVar2 <= iVar9)) {
        if (0 < iVar10) {
          *(int *)(param_1 + 0x2f4) = *(int *)(param_1 + 0x2f4) - iVar10;
        }
        return 0;
      }
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + (longlong)iVar9 * 8);
      lVar1 = *(longlong *)(param_1 + 0x1a0) + (longlong)iVar9 * 8;
      if (param_2 != (longlong *)0x0) break;
LAB_18086dd7c:
      iVar9 = iVar9 + 1;
    }
    if (((*(int *)((longlong)param_2 + 0x24) != 0) && ((int)param_2[1] != 0)) &&
       (iVar5 = *(int *)(*param_2 +
                        (longlong)
                        (int)((*(uint *)(lVar3 + 0x1c) ^ *(uint *)(lVar3 + 0x18) ^
                               *(uint *)(lVar3 + 0x14) ^ *(uint *)(lVar3 + 0x10)) &
                             (int)param_2[1] - 1U) * 4), iVar5 != -1)) {
      lVar4 = param_2[2];
      do {
        lVar8 = (longlong)iVar5;
        if ((*(longlong *)(lVar4 + lVar8 * 0x18) == *(longlong *)(lVar3 + 0x10)) &&
           (*(longlong *)(lVar4 + 8 + lVar8 * 0x18) == *(longlong *)(lVar3 + 0x18)))
        goto LAB_18086dd0b;
        iVar5 = *(int *)(lVar4 + 0x10 + lVar8 * 0x18);
      } while (iVar5 != -1);
    }
    iVar5 = -1;
LAB_18086dd0b:
    if (iVar5 == -1) goto LAB_18086dd7c;
    iVar5 = (iVar2 - iVar9) + -1;
    if (0 < iVar5) {
                    // WARNING: Subroutine does not return
      memmove(lVar1,lVar1 + 8,(longlong)iVar5 << 3);
    }
    *(int *)(param_1 + 0x1a8) = iVar2 + -1;
    iVar2 = iVar10 + 1;
    if ((*(byte *)(lVar3 + 0xf8) & 1) == 0) {
      iVar2 = iVar10;
    }
    iVar10 = iVar2;
    plVar6 = (longlong *)(**(code **)(*(longlong *)*param_3 + 0x60))((longlong *)*param_3,lVar3);
    if (plVar6 == (longlong *)0x0) {
      return 0x1c;
    }
    uVar7 = (**(code **)(*plVar6 + 0x20))(plVar6,lVar3,0);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00018086df1b)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18086ddc0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  uint64_t *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = 0;
  do {
    if ((iVar6 < 0) || (iVar2 = *(int *)(param_1 + 0x1a8), iVar2 <= iVar6)) {
      return 0;
    }
    puVar3 = *(uint64_t **)(*(longlong *)(param_1 + 0x1a0) + (longlong)iVar6 * 8);
    lVar1 = *(longlong *)(param_1 + 0x1a0) + (longlong)iVar6 * 8;
    if (param_2 != (longlong *)0x0) {
      if (((*(int *)((longlong)param_2 + 0x24) != 0) && ((int)param_2[1] != 0)) &&
         (iVar5 = *(int *)(*param_2 +
                          (longlong)
                          (int)((*(uint *)((longlong)puVar3 + 0x1c) ^ *(uint *)(puVar3 + 3) ^
                                 *(uint *)((longlong)puVar3 + 0x14) ^ *(uint *)(puVar3 + 2)) &
                               (int)param_2[1] - 1U) * 4), iVar5 != -1)) {
        lVar4 = param_2[2];
        do {
          lVar7 = (longlong)iVar5;
          if ((*(longlong *)(lVar4 + lVar7 * 0x18) == puVar3[2]) &&
             (*(longlong *)(lVar4 + 8 + lVar7 * 0x18) == puVar3[3])) goto LAB_18086de7b;
          iVar5 = *(int *)(lVar4 + 0x10 + lVar7 * 0x18);
        } while (iVar5 != -1);
      }
      iVar5 = -1;
LAB_18086de7b:
      if (iVar5 != -1) {
        iVar6 = (iVar2 - iVar6) + -1;
        if (iVar6 < 1) {
          *(int *)(param_1 + 0x1a8) = iVar2 + -1;
          (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),puVar3,&UNK_180985b90,0xc2f,1);
        }
                    // WARNING: Subroutine does not return
        memmove(lVar1,lVar1 + 8,(longlong)iVar6 << 3);
      }
    }
    iVar6 = iVar6 + 1;
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00018086df1b)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18086ddc8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  uint64_t *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = 0;
  do {
    if ((iVar6 < 0) || (iVar2 = *(int *)(param_1 + 0x1a8), iVar2 <= iVar6)) {
      return 0;
    }
    puVar3 = *(uint64_t **)(*(longlong *)(param_1 + 0x1a0) + (longlong)iVar6 * 8);
    lVar1 = *(longlong *)(param_1 + 0x1a0) + (longlong)iVar6 * 8;
    if (param_2 != (longlong *)0x0) {
      if (((*(int *)((longlong)param_2 + 0x24) != 0) && ((int)param_2[1] != 0)) &&
         (iVar5 = *(int *)(*param_2 +
                          (longlong)
                          (int)((*(uint *)((longlong)puVar3 + 0x1c) ^ *(uint *)(puVar3 + 3) ^
                                 *(uint *)((longlong)puVar3 + 0x14) ^ *(uint *)(puVar3 + 2)) &
                               (int)param_2[1] - 1U) * 4), iVar5 != -1)) {
        lVar4 = param_2[2];
        do {
          lVar7 = (longlong)iVar5;
          if ((*(longlong *)(lVar4 + lVar7 * 0x18) == puVar3[2]) &&
             (*(longlong *)(lVar4 + 8 + lVar7 * 0x18) == puVar3[3])) goto LAB_18086de7b;
          iVar5 = *(int *)(lVar4 + 0x10 + lVar7 * 0x18);
        } while (iVar5 != -1);
      }
      iVar5 = -1;
LAB_18086de7b:
      if (iVar5 != -1) {
        iVar6 = (iVar2 - iVar6) + -1;
        if (iVar6 < 1) {
          *(int *)(param_1 + 0x1a8) = iVar2 + -1;
          (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),puVar3,&UNK_180985b90,0xc2f,1);
        }
                    // WARNING: Subroutine does not return
        memmove(lVar1,lVar1 + 8,(longlong)iVar6 << 3);
      }
    }
    iVar6 = iVar6 + 1;
  } while( true );
}



uint64_t FUN_18086df1b(void)

{
  longlong unaff_RBP;
  int unaff_R15D;
  
  *(int *)(unaff_RBP + 0x2f4) = *(int *)(unaff_RBP + 0x2f4) - unaff_R15D;
  return 0;
}



uint64_t FUN_18086df30(longlong param_1,longlong param_2,uint64_t *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint64_t uVar8;
  longlong lVar9;
  longlong *plVar10;
  
  plVar10 = (longlong *)0x0;
  do {
    while( true ) {
      iVar6 = (int)plVar10;
      if ((iVar6 < 0) || (iVar2 = *(int *)(param_1 + 0xe8), iVar2 <= iVar6)) {
        return 0;
      }
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar6 * 8);
      lVar1 = *(longlong *)(param_1 + 0xe0) + (longlong)iVar6 * 8;
      plVar7 = (longlong *)(param_2 + 0x118);
      if (param_2 == 0) {
        plVar7 = (longlong *)0x0;
      }
      if (plVar7 != (longlong *)0x0) break;
LAB_18086e05a:
      plVar10 = (longlong *)(ulonglong)(iVar6 + 1);
    }
    if (((*(int *)((longlong)plVar7 + 0x24) != 0) && ((int)plVar7[1] != 0)) &&
       (iVar5 = *(int *)(*plVar7 +
                        (longlong)
                        (int)((*(uint *)(lVar3 + 0x1c) ^ *(uint *)(lVar3 + 0x18) ^
                               *(uint *)(lVar3 + 0x14) ^ *(uint *)(lVar3 + 0x10)) &
                             (int)plVar7[1] - 1U) * 4), iVar5 != -1)) {
      lVar4 = plVar7[2];
      do {
        lVar9 = (longlong)iVar5;
        if ((*(longlong *)(lVar4 + lVar9 * 0x18) == *(longlong *)(lVar3 + 0x10)) &&
           (*(longlong *)(lVar4 + 8 + lVar9 * 0x18) == *(longlong *)(lVar3 + 0x18)))
        goto LAB_18086dffb;
        iVar5 = *(int *)(lVar4 + 0x10 + lVar9 * 0x18);
      } while (iVar5 != -1);
    }
    iVar5 = -1;
LAB_18086dffb:
    if (iVar5 == -1) goto LAB_18086e05a;
    iVar6 = (iVar2 - iVar6) + -1;
    if (0 < iVar6) {
                    // WARNING: Subroutine does not return
      memmove(lVar1,lVar1 + 8,(longlong)iVar6 << 3);
    }
    *(int *)(param_1 + 0xe8) = iVar2 + -1;
    plVar7 = (longlong *)(**(code **)(*(longlong *)*param_3 + 0xb0))((longlong *)*param_3,lVar3);
    if (plVar7 == (longlong *)0x0) {
      return 0x1c;
    }
    uVar8 = (**(code **)(*plVar7 + 0x20))(plVar7,lVar3);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18086e090(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint64_t *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)0x0;
  do {
    iVar6 = (int)plVar8;
    if (iVar6 < 0) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0xe8);
    if (iVar2 <= iVar6) {
      return 0;
    }
    puVar3 = *(uint64_t **)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar6 * 8);
    lVar1 = *(longlong *)(param_1 + 0xe0) + (longlong)iVar6 * 8;
    plVar8 = (longlong *)(param_2 + 0x118);
    if (param_2 == 0) {
      plVar8 = (longlong *)0x0;
    }
    if (plVar8 != (longlong *)0x0) {
      if (((*(int *)((longlong)plVar8 + 0x24) != 0) && ((int)plVar8[1] != 0)) &&
         (iVar5 = *(int *)(*plVar8 +
                          (longlong)
                          (int)((*(uint *)((longlong)puVar3 + 0x1c) ^ *(uint *)(puVar3 + 3) ^
                                 *(uint *)((longlong)puVar3 + 0x14) ^ *(uint *)(puVar3 + 2)) &
                               (int)plVar8[1] - 1U) * 4), iVar5 != -1)) {
        lVar4 = plVar8[2];
        do {
          lVar7 = (longlong)iVar5;
          if ((*(longlong *)(lVar4 + lVar7 * 0x18) == puVar3[2]) &&
             (*(longlong *)(lVar4 + 8 + lVar7 * 0x18) == puVar3[3])) goto LAB_18086e15b;
          iVar5 = *(int *)(lVar4 + 0x10 + lVar7 * 0x18);
        } while (iVar5 != -1);
      }
      iVar5 = -1;
LAB_18086e15b:
      if (iVar5 != -1) {
        iVar6 = (iVar2 - iVar6) + -1;
        if (iVar6 < 1) {
          *(int *)(param_1 + 0xe8) = iVar2 + -1;
          (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),puVar3,&UNK_180985b90,0xc2f,1);
        }
                    // WARNING: Subroutine does not return
        memmove(lVar1,lVar1 + 8,(longlong)iVar6 << 3);
      }
    }
    plVar8 = (longlong *)(ulonglong)(iVar6 + 1);
  } while( true );
}



uint64_t FUN_18086e1f0(longlong param_1,longlong param_2,uint64_t *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint64_t uVar8;
  longlong lVar9;
  longlong *plVar10;
  
  plVar10 = (longlong *)0x0;
  do {
    while( true ) {
      iVar6 = (int)plVar10;
      if ((iVar6 < 0) || (iVar2 = *(int *)(param_1 + 0x48), iVar2 <= iVar6)) {
        return 0;
      }
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar6 * 8);
      lVar1 = *(longlong *)(param_1 + 0x40) + (longlong)iVar6 * 8;
      plVar7 = (longlong *)(param_2 + 0xa0);
      if (param_2 == 0) {
        plVar7 = (longlong *)0x0;
      }
      if (plVar7 != (longlong *)0x0) break;
LAB_18086e305:
      plVar10 = (longlong *)(ulonglong)(iVar6 + 1);
    }
    if (((*(int *)((longlong)plVar7 + 0x24) != 0) && ((int)plVar7[1] != 0)) &&
       (iVar5 = *(int *)(*plVar7 +
                        (longlong)
                        (int)((*(uint *)(lVar3 + 0x1c) ^ *(uint *)(lVar3 + 0x18) ^
                               *(uint *)(lVar3 + 0x14) ^ *(uint *)(lVar3 + 0x10)) &
                             (int)plVar7[1] - 1U) * 4), iVar5 != -1)) {
      lVar4 = plVar7[2];
      do {
        lVar9 = (longlong)iVar5;
        if ((*(longlong *)(lVar4 + lVar9 * 0x18) == *(longlong *)(lVar3 + 0x10)) &&
           (*(longlong *)(lVar4 + 8 + lVar9 * 0x18) == *(longlong *)(lVar3 + 0x18)))
        goto LAB_18086e2ac;
        iVar5 = *(int *)(lVar4 + 0x10 + lVar9 * 0x18);
      } while (iVar5 != -1);
    }
    iVar5 = -1;
LAB_18086e2ac:
    if (iVar5 == -1) goto LAB_18086e305;
    iVar6 = (iVar2 - iVar6) + -1;
    if (0 < iVar6) {
                    // WARNING: Subroutine does not return
      memmove(lVar1,lVar1 + 8,(longlong)iVar6 << 3);
    }
    *(int *)(param_1 + 0x48) = iVar2 + -1;
    plVar7 = (longlong *)(**(code **)(*(longlong *)*param_3 + 0x100))((longlong *)*param_3,lVar3);
    if (plVar7 == (longlong *)0x0) {
      return 0x1c;
    }
    uVar8 = (**(code **)(*plVar7 + 0x20))(plVar7,lVar3);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18086e330(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint64_t *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)0x0;
  do {
    iVar6 = (int)plVar8;
    if (iVar6 < 0) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0x48);
    if (iVar2 <= iVar6) {
      return 0;
    }
    puVar3 = *(uint64_t **)(*(longlong *)(param_1 + 0x40) + (longlong)iVar6 * 8);
    lVar1 = *(longlong *)(param_1 + 0x40) + (longlong)iVar6 * 8;
    plVar8 = (longlong *)(param_2 + 0xa0);
    if (param_2 == 0) {
      plVar8 = (longlong *)0x0;
    }
    if (plVar8 != (longlong *)0x0) {
      if (((*(int *)((longlong)plVar8 + 0x24) != 0) && ((int)plVar8[1] != 0)) &&
         (iVar5 = *(int *)(*plVar8 +
                          (longlong)
                          (int)((*(uint *)((longlong)puVar3 + 0x1c) ^ *(uint *)(puVar3 + 3) ^
                                 *(uint *)((longlong)puVar3 + 0x14) ^ *(uint *)(puVar3 + 2)) &
                               (int)plVar8[1] - 1U) * 4), iVar5 != -1)) {
        lVar4 = plVar8[2];
        do {
          lVar7 = (longlong)iVar5;
          if ((*(longlong *)(lVar4 + lVar7 * 0x18) == puVar3[2]) &&
             (*(longlong *)(lVar4 + 8 + lVar7 * 0x18) == puVar3[3])) goto LAB_18086e3eb;
          iVar5 = *(int *)(lVar4 + 0x10 + lVar7 * 0x18);
        } while (iVar5 != -1);
      }
      iVar5 = -1;
LAB_18086e3eb:
      if (iVar5 != -1) {
        iVar6 = (iVar2 - iVar6) + -1;
        if (iVar6 < 1) {
          *(int *)(param_1 + 0x48) = iVar2 + -1;
          (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),puVar3,&UNK_180985b90,0xc2f,1);
        }
                    // WARNING: Subroutine does not return
        memmove(lVar1,lVar1 + 8,(longlong)iVar6 << 3);
      }
    }
    plVar8 = (longlong *)(ulonglong)(iVar6 + 1);
  } while( true );
}



uint64_t FUN_18086e480(longlong param_1,longlong param_2,uint64_t *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint64_t uVar8;
  longlong lVar9;
  longlong *plVar10;
  
  plVar10 = (longlong *)0x0;
  do {
    while( true ) {
      iVar6 = (int)plVar10;
      if ((iVar6 < 0) || (iVar2 = *(int *)(param_1 + 0x38), iVar2 <= iVar6)) {
        return 0;
      }
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar6 * 8);
      lVar1 = *(longlong *)(param_1 + 0x30) + (longlong)iVar6 * 8;
      plVar7 = (longlong *)(param_2 + 0x78);
      if (param_2 == 0) {
        plVar7 = (longlong *)0x0;
      }
      if (plVar7 != (longlong *)0x0) break;
LAB_18086e594:
      plVar10 = (longlong *)(ulonglong)(iVar6 + 1);
    }
    if (((*(int *)((longlong)plVar7 + 0x24) != 0) && ((int)plVar7[1] != 0)) &&
       (iVar5 = *(int *)(*plVar7 +
                        (longlong)
                        (int)((*(uint *)(lVar3 + 0x1c) ^ *(uint *)(lVar3 + 0x18) ^
                               *(uint *)(lVar3 + 0x14) ^ *(uint *)(lVar3 + 0x10)) &
                             (int)plVar7[1] - 1U) * 4), iVar5 != -1)) {
      lVar4 = plVar7[2];
      do {
        lVar9 = (longlong)iVar5;
        if ((*(longlong *)(lVar4 + lVar9 * 0x18) == *(longlong *)(lVar3 + 0x10)) &&
           (*(longlong *)(lVar4 + 8 + lVar9 * 0x18) == *(longlong *)(lVar3 + 0x18)))
        goto LAB_18086e53b;
        iVar5 = *(int *)(lVar4 + 0x10 + lVar9 * 0x18);
      } while (iVar5 != -1);
    }
    iVar5 = -1;
LAB_18086e53b:
    if (iVar5 == -1) goto LAB_18086e594;
    iVar6 = (iVar2 - iVar6) + -1;
    if (0 < iVar6) {
                    // WARNING: Subroutine does not return
      memmove(lVar1,lVar1 + 8,(longlong)iVar6 << 3);
    }
    *(int *)(param_1 + 0x38) = iVar2 + -1;
    plVar7 = (longlong *)(**(code **)(*(longlong *)*param_3 + 0x108))((longlong *)*param_3,lVar3);
    if (plVar7 == (longlong *)0x0) {
      return 0x1c;
    }
    uVar8 = (**(code **)(*plVar7 + 0x28))(plVar7,lVar3);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18086e5c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint64_t *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)0x0;
  do {
    iVar6 = (int)plVar8;
    if (iVar6 < 0) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0x38);
    if (iVar2 <= iVar6) {
      return 0;
    }
    puVar3 = *(uint64_t **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar6 * 8);
    lVar1 = *(longlong *)(param_1 + 0x30) + (longlong)iVar6 * 8;
    plVar8 = (longlong *)(param_2 + 0x78);
    if (param_2 == 0) {
      plVar8 = (longlong *)0x0;
    }
    if (plVar8 != (longlong *)0x0) {
      if (((*(int *)((longlong)plVar8 + 0x24) != 0) && ((int)plVar8[1] != 0)) &&
         (iVar5 = *(int *)(*plVar8 +
                          (longlong)
                          (int)((*(uint *)((longlong)puVar3 + 0x1c) ^ *(uint *)(puVar3 + 3) ^
                                 *(uint *)((longlong)puVar3 + 0x14) ^ *(uint *)(puVar3 + 2)) &
                               (int)plVar8[1] - 1U) * 4), iVar5 != -1)) {
        lVar4 = plVar8[2];
        do {
          lVar7 = (longlong)iVar5;
          if ((*(longlong *)(lVar4 + lVar7 * 0x18) == puVar3[2]) &&
             (*(longlong *)(lVar4 + 8 + lVar7 * 0x18) == puVar3[3])) goto LAB_18086e67b;
          iVar5 = *(int *)(lVar4 + 0x10 + lVar7 * 0x18);
        } while (iVar5 != -1);
      }
      iVar5 = -1;
LAB_18086e67b:
      if (iVar5 != -1) {
        iVar6 = (iVar2 - iVar6) + -1;
        if (iVar6 < 1) {
          *(int *)(param_1 + 0x38) = iVar2 + -1;
          (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),puVar3,&UNK_180985b90,0xc2f,1);
        }
                    // WARNING: Subroutine does not return
        memmove(lVar1,lVar1 + 8,(longlong)iVar6 << 3);
      }
    }
    plVar8 = (longlong *)(ulonglong)(iVar6 + 1);
  } while( true );
}



uint64_t FUN_18086e710(longlong param_1,uint64_t param_2,uint64_t *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  uint64_t uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  do {
    while( true ) {
      if ((iVar8 < 0) || (*(int *)(param_1 + 0x78) <= iVar8)) {
        return 0;
      }
      lVar6 = *(longlong *)((longlong)iVar8 * 8 + *(longlong *)(param_1 + 0x70));
      plVar3 = (longlong *)func_0x00018086dc30(param_2);
      if (plVar3 != (longlong *)0x0) break;
LAB_18086e82b:
      iVar8 = iVar8 + 1;
    }
    if (((*(int *)((longlong)plVar3 + 0x24) != 0) && ((int)plVar3[1] != 0)) &&
       (iVar2 = *(int *)(*plVar3 +
                        (longlong)
                        (int)((*(uint *)(lVar6 + 0x1c) ^ *(uint *)(lVar6 + 0x18) ^
                               *(uint *)(lVar6 + 0x14) ^ *(uint *)(lVar6 + 0x10)) &
                             (int)plVar3[1] - 1U) * 4), iVar2 != -1)) {
      lVar1 = plVar3[2];
      do {
        lVar5 = (longlong)iVar2;
        if ((*(longlong *)(lVar1 + lVar5 * 0x18) == *(longlong *)(lVar6 + 0x10)) &&
           (*(longlong *)(lVar1 + 8 + lVar5 * 0x18) == *(longlong *)(lVar6 + 0x18)))
        goto LAB_18086e7cb;
        iVar2 = *(int *)(lVar1 + 0x10 + lVar5 * 0x18);
      } while (iVar2 != -1);
    }
    iVar2 = -1;
LAB_18086e7cb:
    if (iVar2 == -1) goto LAB_18086e82b;
    iVar2 = *(int *)(param_1 + 0x78);
    if (iVar8 < iVar2) {
      iVar7 = (iVar2 - iVar8) + -1;
      if (0 < iVar7) {
        lVar6 = *(longlong *)(param_1 + 0x70) + (longlong)iVar8 * 8;
                    // WARNING: Subroutine does not return
        memmove(lVar6,lVar6 + 8,(longlong)iVar7 << 3);
      }
      *(int *)(param_1 + 0x78) = iVar2 + -1;
    }
    plVar3 = (longlong *)(**(code **)(*(longlong *)*param_3 + 0xf0))((longlong *)*param_3,lVar6);
    if (plVar3 == (longlong *)0x0) {
      return 0x1c;
    }
    uVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,lVar6);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18086e860(longlong param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  do {
    if ((iVar7 < 0) || (*(int *)(param_1 + 0x78) <= iVar7)) {
      return 0;
    }
    puVar1 = *(uint64_t **)((longlong)iVar7 * 8 + *(longlong *)(param_1 + 0x70));
    plVar3 = (longlong *)func_0x00018086dc30(param_2);
    if (plVar3 != (longlong *)0x0) {
      if (((*(int *)((longlong)plVar3 + 0x24) != 0) && ((int)plVar3[1] != 0)) &&
         (iVar2 = *(int *)(*plVar3 +
                          (longlong)
                          (int)((*(uint *)((longlong)puVar1 + 0x1c) ^ *(uint *)(puVar1 + 3) ^
                                 *(uint *)((longlong)puVar1 + 0x14) ^ *(uint *)(puVar1 + 2)) &
                               (int)plVar3[1] - 1U) * 4), iVar2 != -1)) {
        lVar5 = plVar3[2];
        do {
          lVar4 = (longlong)iVar2;
          if ((*(longlong *)(lVar5 + lVar4 * 0x18) == puVar1[2]) &&
             (*(longlong *)(lVar5 + 8 + lVar4 * 0x18) == puVar1[3])) goto LAB_18086e91b;
          iVar2 = *(int *)(lVar5 + 0x10 + lVar4 * 0x18);
        } while (iVar2 != -1);
      }
      iVar2 = -1;
LAB_18086e91b:
      if (iVar2 != -1) {
        iVar2 = *(int *)(param_1 + 0x78);
        if (iVar7 < iVar2) {
          iVar6 = (iVar2 - iVar7) + -1;
          if (0 < iVar6) {
            lVar5 = *(longlong *)(param_1 + 0x70) + (longlong)iVar7 * 8;
                    // WARNING: Subroutine does not return
            memmove(lVar5,lVar5 + 8,(longlong)iVar6 << 3);
          }
          *(int *)(param_1 + 0x78) = iVar2 + -1;
        }
        (**(code **)*puVar1)(puVar1,0);
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),puVar1,&UNK_180985b90,0xc2f,1);
      }
    }
    iVar7 = iVar7 + 1;
  } while( true );
}



uint64_t FUN_18086e9b0(longlong param_1,longlong param_2,uint64_t *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint64_t uVar8;
  longlong lVar9;
  longlong *plVar10;
  
  plVar10 = (longlong *)0x0;
  do {
    while( true ) {
      iVar6 = (int)plVar10;
      if ((iVar6 < 0) || (iVar2 = *(int *)(param_1 + 0x1c8), iVar2 <= iVar6)) {
        return 0;
      }
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (longlong)iVar6 * 8);
      lVar1 = *(longlong *)(param_1 + 0x1c0) + (longlong)iVar6 * 8;
      plVar7 = (longlong *)(param_2 + 0x140);
      if (param_2 == 0) {
        plVar7 = (longlong *)0x0;
      }
      if (plVar7 != (longlong *)0x0) break;
LAB_18086ead7:
      plVar10 = (longlong *)(ulonglong)(iVar6 + 1);
    }
    if (((*(int *)((longlong)plVar7 + 0x24) != 0) && ((int)plVar7[1] != 0)) &&
       (iVar5 = *(int *)(*plVar7 +
                        (longlong)
                        (int)((*(uint *)(lVar3 + 0x1c) ^ *(uint *)(lVar3 + 0x18) ^
                               *(uint *)(lVar3 + 0x14) ^ *(uint *)(lVar3 + 0x10)) &
                             (int)plVar7[1] - 1U) * 4), iVar5 != -1)) {
      lVar4 = plVar7[2];
      do {
        lVar9 = (longlong)iVar5;
        if ((*(longlong *)(lVar4 + lVar9 * 0x18) == *(longlong *)(lVar3 + 0x10)) &&
           (*(longlong *)(lVar4 + 8 + lVar9 * 0x18) == *(longlong *)(lVar3 + 0x18)))
        goto LAB_18086ea7b;
        iVar5 = *(int *)(lVar4 + 0x10 + lVar9 * 0x18);
      } while (iVar5 != -1);
    }
    iVar5 = -1;
LAB_18086ea7b:
    if (iVar5 == -1) goto LAB_18086ead7;
    iVar6 = (iVar2 - iVar6) + -1;
    if (0 < iVar6) {
                    // WARNING: Subroutine does not return
      memmove(lVar1,lVar1 + 8,(longlong)iVar6 << 3);
    }
    *(int *)(param_1 + 0x1c8) = iVar2 + -1;
    plVar7 = (longlong *)(**(code **)(*(longlong *)*param_3 + 0x40))((longlong *)*param_3,lVar3);
    if (plVar7 == (longlong *)0x0) {
      return 0x1c;
    }
    uVar8 = (**(code **)(*plVar7 + 0x20))(plVar7,lVar3);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18086eb00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint64_t *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)0x0;
  do {
    iVar6 = (int)plVar8;
    if (iVar6 < 0) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0x1c8);
    if (iVar2 <= iVar6) {
      return 0;
    }
    puVar3 = *(uint64_t **)(*(longlong *)(param_1 + 0x1c0) + (longlong)iVar6 * 8);
    lVar1 = *(longlong *)(param_1 + 0x1c0) + (longlong)iVar6 * 8;
    plVar8 = (longlong *)(param_2 + 0x140);
    if (param_2 == 0) {
      plVar8 = (longlong *)0x0;
    }
    if (plVar8 != (longlong *)0x0) {
      if (((*(int *)((longlong)plVar8 + 0x24) != 0) && ((int)plVar8[1] != 0)) &&
         (iVar5 = *(int *)(*plVar8 +
                          (longlong)
                          (int)((*(uint *)((longlong)puVar3 + 0x1c) ^ *(uint *)(puVar3 + 3) ^
                                 *(uint *)((longlong)puVar3 + 0x14) ^ *(uint *)(puVar3 + 2)) &
                               (int)plVar8[1] - 1U) * 4), iVar5 != -1)) {
        lVar4 = plVar8[2];
        do {
          lVar7 = (longlong)iVar5;
          if ((*(longlong *)(lVar4 + lVar7 * 0x18) == puVar3[2]) &&
             (*(longlong *)(lVar4 + 8 + lVar7 * 0x18) == puVar3[3])) goto LAB_18086ebcb;
          iVar5 = *(int *)(lVar4 + 0x10 + lVar7 * 0x18);
        } while (iVar5 != -1);
      }
      iVar5 = -1;
LAB_18086ebcb:
      if (iVar5 != -1) {
        iVar6 = (iVar2 - iVar6) + -1;
        if (iVar6 < 1) {
          *(int *)(param_1 + 0x1c8) = iVar2 + -1;
          (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),puVar3,&UNK_180985b90,0xc2f,1);
        }
                    // WARNING: Subroutine does not return
        memmove(lVar1,lVar1 + 8,(longlong)iVar6 << 3);
      }
    }
    plVar8 = (longlong *)(ulonglong)(iVar6 + 1);
  } while( true );
}



uint64_t FUN_18086ec60(longlong param_1,longlong param_2,uint64_t *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint64_t uVar8;
  longlong lVar9;
  longlong *plVar10;
  
  plVar10 = (longlong *)0x0;
  do {
    while( true ) {
      iVar6 = (int)plVar10;
      if ((iVar6 < 0) || (iVar2 = *(int *)(param_1 + 0x58), iVar2 <= iVar6)) {
        return 0;
      }
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar6 * 8);
      lVar1 = *(longlong *)(param_1 + 0x50) + (longlong)iVar6 * 8;
      plVar7 = (longlong *)(param_2 + 200);
      if (param_2 == 0) {
        plVar7 = (longlong *)0x0;
      }
      if (plVar7 != (longlong *)0x0) break;
LAB_18086ed75:
      plVar10 = (longlong *)(ulonglong)(iVar6 + 1);
    }
    if (((*(int *)((longlong)plVar7 + 0x24) != 0) && ((int)plVar7[1] != 0)) &&
       (iVar5 = *(int *)(*plVar7 +
                        (longlong)
                        (int)((*(uint *)(lVar3 + 0x1c) ^ *(uint *)(lVar3 + 0x18) ^
                               *(uint *)(lVar3 + 0x14) ^ *(uint *)(lVar3 + 0x10)) &
                             (int)plVar7[1] - 1U) * 4), iVar5 != -1)) {
      lVar4 = plVar7[2];
      do {
        lVar9 = (longlong)iVar5;
        if ((*(longlong *)(lVar4 + lVar9 * 0x18) == *(longlong *)(lVar3 + 0x10)) &&
           (*(longlong *)(lVar4 + 8 + lVar9 * 0x18) == *(longlong *)(lVar3 + 0x18)))
        goto LAB_18086ed1c;
        iVar5 = *(int *)(lVar4 + 0x10 + lVar9 * 0x18);
      } while (iVar5 != -1);
    }
    iVar5 = -1;
LAB_18086ed1c:
    if (iVar5 == -1) goto LAB_18086ed75;
    iVar6 = (iVar2 - iVar6) + -1;
    if (0 < iVar6) {
                    // WARNING: Subroutine does not return
      memmove(lVar1,lVar1 + 8,(longlong)iVar6 << 3);
    }
    *(int *)(param_1 + 0x58) = iVar2 + -1;
    plVar7 = (longlong *)(**(code **)(*(longlong *)*param_3 + 0xe8))((longlong *)*param_3,lVar3);
    if (plVar7 == (longlong *)0x0) {
      return 0x1c;
    }
    uVar8 = (**(code **)(*plVar7 + 0x20))(plVar7,lVar3);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18086eda0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint64_t *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)0x0;
  do {
    iVar6 = (int)plVar8;
    if (iVar6 < 0) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0x58);
    if (iVar2 <= iVar6) {
      return 0;
    }
    puVar3 = *(uint64_t **)(*(longlong *)(param_1 + 0x50) + (longlong)iVar6 * 8);
    lVar1 = *(longlong *)(param_1 + 0x50) + (longlong)iVar6 * 8;
    plVar8 = (longlong *)(param_2 + 200);
    if (param_2 == 0) {
      plVar8 = (longlong *)0x0;
    }
    if (plVar8 != (longlong *)0x0) {
      if (((*(int *)((longlong)plVar8 + 0x24) != 0) && ((int)plVar8[1] != 0)) &&
         (iVar5 = *(int *)(*plVar8 +
                          (longlong)
                          (int)((*(uint *)((longlong)puVar3 + 0x1c) ^ *(uint *)(puVar3 + 3) ^
                                 *(uint *)((longlong)puVar3 + 0x14) ^ *(uint *)(puVar3 + 2)) &
                               (int)plVar8[1] - 1U) * 4), iVar5 != -1)) {
        lVar4 = plVar8[2];
        do {
          lVar7 = (longlong)iVar5;
          if ((*(longlong *)(lVar4 + lVar7 * 0x18) == puVar3[2]) &&
             (*(longlong *)(lVar4 + 8 + lVar7 * 0x18) == puVar3[3])) goto LAB_18086ee5b;
          iVar5 = *(int *)(lVar4 + 0x10 + lVar7 * 0x18);
        } while (iVar5 != -1);
      }
      iVar5 = -1;
LAB_18086ee5b:
      if (iVar5 != -1) {
        iVar6 = (iVar2 - iVar6) + -1;
        if (iVar6 < 1) {
          *(int *)(param_1 + 0x58) = iVar2 + -1;
          (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),puVar3,&UNK_180985b90,0xc2f,1);
        }
                    // WARNING: Subroutine does not return
        memmove(lVar1,lVar1 + 8,(longlong)iVar6 << 3);
      }
    }
    plVar8 = (longlong *)(ulonglong)(iVar6 + 1);
  } while( true );
}



uint64_t FUN_18086eef0(longlong param_1,longlong param_2,uint64_t *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint64_t uVar8;
  longlong lVar9;
  longlong *plVar10;
  
  plVar10 = (longlong *)0x0;
  do {
    while( true ) {
      iVar6 = (int)plVar10;
      if ((iVar6 < 0) || (iVar2 = *(int *)(param_1 + 0x1f8), iVar2 <= iVar6)) {
        return 0;
      }
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1f0) + (longlong)iVar6 * 8);
      lVar1 = *(longlong *)(param_1 + 0x1f0) + (longlong)iVar6 * 8;
      plVar7 = (longlong *)(param_2 + 0x50);
      if (param_2 == 0) {
        plVar7 = (longlong *)0x0;
      }
      if (plVar7 != (longlong *)0x0) break;
LAB_18086f017:
      plVar10 = (longlong *)(ulonglong)(iVar6 + 1);
    }
    if (((*(int *)((longlong)plVar7 + 0x24) != 0) && ((int)plVar7[1] != 0)) &&
       (iVar5 = *(int *)(*plVar7 +
                        (longlong)
                        (int)((*(uint *)(lVar3 + 0x1c) ^ *(uint *)(lVar3 + 0x18) ^
                               *(uint *)(lVar3 + 0x14) ^ *(uint *)(lVar3 + 0x10)) &
                             (int)plVar7[1] - 1U) * 4), iVar5 != -1)) {
      lVar4 = plVar7[2];
      do {
        lVar9 = (longlong)iVar5;
        if ((*(longlong *)(lVar4 + lVar9 * 0x18) == *(longlong *)(lVar3 + 0x10)) &&
           (*(longlong *)(lVar4 + 8 + lVar9 * 0x18) == *(longlong *)(lVar3 + 0x18)))
        goto LAB_18086efbb;
        iVar5 = *(int *)(lVar4 + 0x10 + lVar9 * 0x18);
      } while (iVar5 != -1);
    }
    iVar5 = -1;
LAB_18086efbb:
    if (iVar5 == -1) goto LAB_18086f017;
    iVar6 = (iVar2 - iVar6) + -1;
    if (0 < iVar6) {
                    // WARNING: Subroutine does not return
      memmove(lVar1,lVar1 + 8,(longlong)iVar6 << 3);
    }
    *(int *)(param_1 + 0x1f8) = iVar2 + -1;
    plVar7 = (longlong *)(**(code **)(*(longlong *)*param_3 + 0x58))((longlong *)*param_3,lVar3);
    if (plVar7 == (longlong *)0x0) {
      return 0x1c;
    }
    uVar8 = (**(code **)(*plVar7 + 0x20))(plVar7,lVar3);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18086f040(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint64_t *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)0x0;
  do {
    iVar6 = (int)plVar8;
    if (iVar6 < 0) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0x1f8);
    if (iVar2 <= iVar6) {
      return 0;
    }
    puVar3 = *(uint64_t **)(*(longlong *)(param_1 + 0x1f0) + (longlong)iVar6 * 8);
    lVar1 = *(longlong *)(param_1 + 0x1f0) + (longlong)iVar6 * 8;
    plVar8 = (longlong *)(param_2 + 0x50);
    if (param_2 == 0) {
      plVar8 = (longlong *)0x0;
    }
    if (plVar8 != (longlong *)0x0) {
      if (((*(int *)((longlong)plVar8 + 0x24) != 0) && ((int)plVar8[1] != 0)) &&
         (iVar5 = *(int *)(*plVar8 +
                          (longlong)
                          (int)((*(uint *)((longlong)puVar3 + 0x1c) ^ *(uint *)(puVar3 + 3) ^
                                 *(uint *)((longlong)puVar3 + 0x14) ^ *(uint *)(puVar3 + 2)) &
                               (int)plVar8[1] - 1U) * 4), iVar5 != -1)) {
        lVar4 = plVar8[2];
        do {
          lVar7 = (longlong)iVar5;
          if ((*(longlong *)(lVar4 + lVar7 * 0x18) == puVar3[2]) &&
             (*(longlong *)(lVar4 + 8 + lVar7 * 0x18) == puVar3[3])) goto LAB_18086f10b;
          iVar5 = *(int *)(lVar4 + 0x10 + lVar7 * 0x18);
        } while (iVar5 != -1);
      }
      iVar5 = -1;
LAB_18086f10b:
      if (iVar5 != -1) {
        iVar6 = (iVar2 - iVar6) + -1;
        if (iVar6 < 1) {
          *(int *)(param_1 + 0x1f8) = iVar2 + -1;
          (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),puVar3,&UNK_180985b90,0xc2f,1);
        }
                    // WARNING: Subroutine does not return
        memmove(lVar1,lVar1 + 8,(longlong)iVar6 << 3);
      }
    }
    plVar8 = (longlong *)(ulonglong)(iVar6 + 1);
  } while( true );
}



uint64_t FUN_18086f1a0(longlong param_1,longlong param_2,uint64_t *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint64_t uVar8;
  longlong lVar9;
  longlong *plVar10;
  
  plVar10 = (longlong *)0x0;
  do {
    while( true ) {
      iVar6 = (int)plVar10;
      if ((iVar6 < 0) || (iVar2 = *(int *)(param_1 + 200), iVar2 <= iVar6)) {
        return 0;
      }
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar6 * 8);
      lVar1 = *(longlong *)(param_1 + 0xc0) + (longlong)iVar6 * 8;
      plVar7 = (longlong *)(param_2 + 0x28);
      if (param_2 == 0) {
        plVar7 = (longlong *)0x0;
      }
      if (plVar7 != (longlong *)0x0) break;
LAB_18086f2ca:
      plVar10 = (longlong *)(ulonglong)(iVar6 + 1);
    }
    if (((*(int *)((longlong)plVar7 + 0x24) != 0) && ((int)plVar7[1] != 0)) &&
       (iVar5 = *(int *)(*plVar7 +
                        (longlong)
                        (int)((*(uint *)(lVar3 + 0x1c) ^ *(uint *)(lVar3 + 0x18) ^
                               *(uint *)(lVar3 + 0x14) ^ *(uint *)(lVar3 + 0x10)) &
                             (int)plVar7[1] - 1U) * 4), iVar5 != -1)) {
      lVar4 = plVar7[2];
      do {
        lVar9 = (longlong)iVar5;
        if ((*(longlong *)(lVar4 + lVar9 * 0x18) == *(longlong *)(lVar3 + 0x10)) &&
           (*(longlong *)(lVar4 + 8 + lVar9 * 0x18) == *(longlong *)(lVar3 + 0x18)))
        goto LAB_18086f26b;
        iVar5 = *(int *)(lVar4 + 0x10 + lVar9 * 0x18);
      } while (iVar5 != -1);
    }
    iVar5 = -1;
LAB_18086f26b:
    if (iVar5 == -1) goto LAB_18086f2ca;
    iVar6 = (iVar2 - iVar6) + -1;
    if (0 < iVar6) {
                    // WARNING: Subroutine does not return
      memmove(lVar1,lVar1 + 8,(longlong)iVar6 << 3);
    }
    *(int *)(param_1 + 200) = iVar2 + -1;
    plVar7 = (longlong *)(**(code **)(*(longlong *)*param_3 + 0xc0))((longlong *)*param_3,lVar3);
    if (plVar7 == (longlong *)0x0) {
      return 0x1c;
    }
    uVar8 = (**(code **)(*plVar7 + 0x20))(plVar7,lVar3);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18086f300(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint64_t *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)0x0;
  do {
    iVar6 = (int)plVar8;
    if (iVar6 < 0) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 200);
    if (iVar2 <= iVar6) {
      return 0;
    }
    puVar3 = *(uint64_t **)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar6 * 8);
    lVar1 = *(longlong *)(param_1 + 0xc0) + (longlong)iVar6 * 8;
    plVar8 = (longlong *)(param_2 + 0x28);
    if (param_2 == 0) {
      plVar8 = (longlong *)0x0;
    }
    if (plVar8 != (longlong *)0x0) {
      if (((*(int *)((longlong)plVar8 + 0x24) != 0) && ((int)plVar8[1] != 0)) &&
         (iVar5 = *(int *)(*plVar8 +
                          (longlong)
                          (int)((*(uint *)((longlong)puVar3 + 0x1c) ^ *(uint *)(puVar3 + 3) ^
                                 *(uint *)((longlong)puVar3 + 0x14) ^ *(uint *)(puVar3 + 2)) &
                               (int)plVar8[1] - 1U) * 4), iVar5 != -1)) {
        lVar4 = plVar8[2];
        do {
          lVar7 = (longlong)iVar5;
          if ((*(longlong *)(lVar4 + lVar7 * 0x18) == puVar3[2]) &&
             (*(longlong *)(lVar4 + 8 + lVar7 * 0x18) == puVar3[3])) goto LAB_18086f3cb;
          iVar5 = *(int *)(lVar4 + 0x10 + lVar7 * 0x18);
        } while (iVar5 != -1);
      }
      iVar5 = -1;
LAB_18086f3cb:
      if (iVar5 != -1) {
        iVar6 = (iVar2 - iVar6) + -1;
        if (iVar6 < 1) {
          *(int *)(param_1 + 200) = iVar2 + -1;
          (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),puVar3,&UNK_180985b90,0xc2f,1);
        }
                    // WARNING: Subroutine does not return
        memmove(lVar1,lVar1 + 8,(longlong)iVar6 << 3);
      }
    }
    plVar8 = (longlong *)(ulonglong)(iVar6 + 1);
  } while( true );
}



uint64_t FUN_18086f460(longlong param_1,longlong param_2,uint64_t *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint64_t uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar6 = FUN_18086f1a0();
  if ((((((int)uVar6 == 0) && (uVar6 = FUN_18086dc50(param_1,param_2,param_3), (int)uVar6 == 0)) &&
       (uVar6 = FUN_18086eef0(param_1,param_2,param_3), (int)uVar6 == 0)) &&
      ((uVar6 = FUN_18086e480(param_1,param_2,param_3), (int)uVar6 == 0 &&
       (uVar6 = FUN_18086e1f0(param_1,param_2,param_3), (int)uVar6 == 0)))) &&
     (uVar6 = FUN_18086ec60(param_1,param_2,param_3), (int)uVar6 == 0)) {
    uVar9 = 0;
    do {
      while( true ) {
        iVar5 = (int)uVar9;
        if ((iVar5 < 0) || (iVar2 = *(int *)(param_1 + 0x68), iVar2 <= iVar5)) {
          uVar6 = FUN_18086e710(param_1,param_2,param_3);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
          uVar6 = FUN_18086df30(param_1,param_2,param_3);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
          uVar6 = FUN_18086e9b0(param_1,param_2,param_3);
          return uVar6;
        }
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar5 * 8);
        lVar1 = *(longlong *)(param_1 + 0x60) + (longlong)iVar5 * 8;
        uVar8 = param_2 + 0xf0;
        if (param_2 == 0) {
          uVar8 = 0;
        }
        if ((uVar8 != 0) && (cVar4 = func_0x000180875460(uVar8,lVar3 + 0x10), cVar4 != '\0')) break;
        uVar9 = (ulonglong)(iVar5 + 1);
      }
      iVar5 = (iVar2 - iVar5) + -1;
      if (0 < iVar5) {
                    // WARNING: Subroutine does not return
        memmove(lVar1,lVar1 + 8,(longlong)iVar5 << 3);
      }
      *(int *)(param_1 + 0x68) = iVar2 + -1;
      plVar7 = (longlong *)(**(code **)(*(longlong *)*param_3 + 0xf8))((longlong *)*param_3,lVar3);
      if (plVar7 == (longlong *)0x0) {
        return 0x1c;
      }
      uVar6 = (**(code **)(*plVar7 + 0x28))(plVar7,lVar3);
    } while ((int)uVar6 == 0);
  }
  return uVar6;
}



uint64_t FUN_18086f4ed(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  uint64_t uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong unaff_RBP;
  longlong unaff_RDI;
  uint64_t *unaff_R14;
  
  uVar9 = 0;
  while( true ) {
    while( true ) {
      iVar5 = (int)uVar9;
      if ((iVar5 < 0) || (iVar2 = *(int *)(unaff_RDI + 0x68), iVar2 <= iVar5)) {
        uVar7 = FUN_18086e710();
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        uVar7 = FUN_18086df30();
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        uVar7 = FUN_18086e9b0();
        return uVar7;
      }
      lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 0x60) + (longlong)iVar5 * 8);
      lVar1 = *(longlong *)(unaff_RDI + 0x60) + (longlong)iVar5 * 8;
      uVar8 = unaff_RBP + 0xf0;
      if (unaff_RBP == 0) {
        uVar8 = 0;
      }
      if ((uVar8 != 0) && (cVar4 = func_0x000180875460(uVar8,lVar3 + 0x10), cVar4 != '\0')) break;
      uVar9 = (ulonglong)(iVar5 + 1);
    }
    iVar5 = (iVar2 - iVar5) + -1;
    if (0 < iVar5) {
                    // WARNING: Subroutine does not return
      memmove(lVar1,lVar1 + 8,(longlong)iVar5 << 3);
    }
    *(int *)(unaff_RDI + 0x68) = iVar2 + -1;
    plVar6 = (longlong *)(**(code **)(*(longlong *)*unaff_R14 + 0xf8))((longlong *)*unaff_R14,lVar3)
    ;
    if (plVar6 == (longlong *)0x0) break;
    uVar7 = (**(code **)(*plVar6 + 0x28))(plVar6,lVar3);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
  }
  return 0x1c;
}







