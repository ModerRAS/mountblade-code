#include "TaleWorlds.Native.Split.h"

// 05_networking_part014.c - 5 个函数

// 函数: void FUN_18084ee9a(void)
void FUN_18084ee9a(void)

{
  int8_t auVar1 [16];
  longlong unaff_RBX;
  uint uStack0000000000000028;
  uint uStack0000000000000030;
  uint uStack0000000000000038;
  uint uStack0000000000000040;
  uint uStack0000000000000048;
  uint uStack0000000000000050;
  uint uStack0000000000000058;
  uint uStack0000000000000060;
  uint uStack0000000000000068;
  
  auVar1 = *(int8_t (*) [16])(*(longlong *)(unaff_RBX + 0x40) + 0x10);
  uStack0000000000000060 = auVar1._14_2_ & 0xff;
  uStack0000000000000058 = auVar1._12_4_ >> 8 & 0xff;
  uStack0000000000000050 = auVar1._12_4_ & 0xff;
  uStack0000000000000048 = auVar1._11_4_ & 0xff;
  uStack0000000000000068 = (uint)auVar1[0xf];
  uStack0000000000000040 = (uint)auVar1[10];
  uStack0000000000000038 = (uint)auVar1[9];
  uStack0000000000000030 = (uint)auVar1[8];
  uStack0000000000000028 = (uint)auVar1._6_2_;
                    // WARNING: Subroutine does not return
  FUN_18076b390(&stack0x00000078,0x27,&unknown_var_8960_ptr,auVar1._0_8_,auVar1._4_4_ & 0xffff);
}





// 函数: void FUN_18084efc1(void)
void FUN_18084efc1(void)

{
  ulonglong in_stack_000000a0;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000a0 ^ (ulonglong)&stack0x00000000);
}



uint64_t FUN_18084efe0(longlong param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  uVar2 = FUN_18073c4c0(*(uint64_t *)(param_1 + 0x78),param_1 + 0x30,param_2);
  if ((int)uVar2 == 0) {
    puVar3 = (uint64_t *)(param_1 + 0x50);
    for (puVar1 = (uint64_t *)*puVar3; puVar1 != puVar3; puVar1 = (uint64_t *)*puVar1) {
      uVar2 = FUN_18084efe0(puVar1[2],0);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (puVar1 == puVar3) break;
    }
    uVar2 = 0;
  }
  return uVar2;
}



uint64_t FUN_18084f001(void)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *unaff_RDI;
  
  puVar1 = (uint64_t *)*unaff_RDI;
  while( true ) {
    if (puVar1 == unaff_RDI) {
      return 0;
    }
    uVar2 = FUN_18084efe0(puVar1[2],0);
    if ((int)uVar2 != 0) break;
    if (puVar1 == unaff_RDI) {
      return 0;
    }
    puVar1 = (uint64_t *)*puVar1;
  }
  return uVar2;
}





// 函数: void FUN_18084f033(void)
void FUN_18084f033(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18084f040(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint64_t uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int *piVar11;
  
  lVar3 = param_1[5];
  if (lVar3 != 0) {
    FUN_180768360(lVar3);
  }
  uVar8 = 0;
  if (*(int *)((longlong)param_1 + 0x24) != 0) {
    iVar2 = (int)param_1[1];
    if (iVar2 != 0) {
      piVar11 = (int *)*param_1;
      uVar10 = uVar8;
      do {
        if (*piVar11 != -1) {
          iVar7 = ((int *)*param_1)[(int)uVar10];
          goto LAB_18084f0bc;
        }
        uVar10 = (ulonglong)((int)uVar10 + 1);
        uVar8 = uVar8 + 1;
        piVar11 = piVar11 + 1;
      } while (uVar8 != (longlong)iVar2);
    }
    iVar7 = -1;
LAB_18084f0bc:
    lVar3 = param_1[2];
    uVar4 = *(uint64_t *)((longlong)iVar7 * 0x20 + 0x18 + lVar3);
    puVar1 = (uint *)((longlong)iVar7 * 0x20 + lVar3);
    if ((*(int *)((longlong)param_1 + 0x24) != 0) && (iVar2 != 0)) {
      lVar9 = (longlong)(int)((puVar1[3] ^ puVar1[1] ^ *puVar1 ^ puVar1[2]) & iVar2 - 1U);
      piVar11 = (int *)(*param_1 + lVar9 * 4);
      iVar2 = *(int *)(*param_1 + lVar9 * 4);
      while (iVar2 != -1) {
        lVar9 = (longlong)iVar2 * 0x20;
        if ((*(longlong *)(lVar9 + lVar3) == *(longlong *)puVar1) &&
           (*(longlong *)(lVar9 + 8 + lVar3) == *(longlong *)(puVar1 + 2))) {
          iVar2 = *piVar11;
          lVar9 = (longlong)iVar2 * 0x20;
          *(uint64_t *)(lVar9 + 0x18 + lVar3) = 0;
          *piVar11 = *(int *)(lVar9 + 0x10 + lVar3);
          *(int *)(lVar9 + 0x10 + lVar3) = (int)param_1[4];
          *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + -1;
          *(int *)(param_1 + 4) = iVar2;
          break;
        }
        piVar11 = (int *)(lVar3 + 0x10 + lVar9);
        iVar2 = *piVar11;
      }
    }
    FUN_1808bb9a0(uVar4);
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),uVar4,&unknown_var_2080_ptr,0x62,1);
  }
  lVar9 = param_1[5];
  if (lVar9 != 0) {
    FUN_180768360(lVar9);
  }
  uVar8 = FUN_180744cc0(param_1);
  if ((int)uVar8 == 0) {
    uVar6 = *(uint *)((longlong)param_1 + 0x1c);
    uVar5 = uVar6 ^ (int)uVar6 >> 0x1f;
    uVar8 = (ulonglong)uVar5;
    if ((int)(uVar5 - ((int)uVar6 >> 0x1f)) < 0) {
      if (0 < (int)param_1[3]) goto LAB_18084f283;
      if ((0 < (int)uVar6) && (param_1[2] != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_1[2],&unknown_var_8432_ptr,0x100,1);
      }
      param_1[2] = 0;
      *(int32_t *)((longlong)param_1 + 0x1c) = 0;
      uVar6 = 0;
    }
    iVar2 = (int)param_1[3];
    if (iVar2 < 0) {
                    // WARNING: Subroutine does not return
      memset((longlong)iVar2 * 0x20 + param_1[2],0,(longlong)-iVar2 << 5);
    }
    *(int32_t *)(param_1 + 3) = 0;
    uVar6 = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f);
    uVar8 = (ulonglong)uVar6;
    if (((int)uVar6 < 1) || (uVar8 = FUN_1808532e0(param_1 + 2,0), (int)uVar8 == 0)) {
      *(int32_t *)(param_1 + 4) = 0xffffffff;
      *(int32_t *)((longlong)param_1 + 0x24) = 0;
    }
  }
LAB_18084f283:
  if (lVar9 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar9);
  }
  if (lVar3 != 0) {
    if (lVar3 == 0) {
      return 0x1c;
    }
    LeaveCriticalSection();
    return 0;
  }
  return uVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18084f04a(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint64_t uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int *piVar11;
  longlong unaff_RBP;
  uint uStack0000000000000034;
  uint uStack000000000000003c;
  
  if (unaff_RBP != 0) {
    FUN_180768360();
  }
  uVar8 = 0;
  if (*(int *)((longlong)param_1 + 0x24) != 0) {
    iVar2 = (int)param_1[1];
    if (iVar2 != 0) {
      piVar11 = (int *)*param_1;
      uVar10 = uVar8;
      do {
        if (*piVar11 != -1) {
          iVar7 = ((int *)*param_1)[(int)uVar10];
          goto LAB_18084f0bc;
        }
        uVar10 = (ulonglong)((int)uVar10 + 1);
        uVar8 = uVar8 + 1;
        piVar11 = piVar11 + 1;
      } while (uVar8 != (longlong)iVar2);
    }
    iVar7 = -1;
LAB_18084f0bc:
    lVar3 = param_1[2];
    uVar4 = *(uint64_t *)((longlong)iVar7 * 0x20 + 0x18 + lVar3);
    puVar1 = (uint *)((longlong)iVar7 * 0x20 + lVar3);
    uStack0000000000000034 = puVar1[1];
    uStack000000000000003c = puVar1[3];
    if ((*(int *)((longlong)param_1 + 0x24) != 0) && (iVar2 != 0)) {
      lVar9 = (longlong)
              (int)((uStack000000000000003c ^ uStack0000000000000034 ^ *puVar1 ^ puVar1[2]) &
                   iVar2 - 1U);
      piVar11 = (int *)(*param_1 + lVar9 * 4);
      iVar2 = *(int *)(*param_1 + lVar9 * 4);
      while (iVar2 != -1) {
        lVar9 = (longlong)iVar2 * 0x20;
        if ((*(longlong *)(lVar9 + lVar3) == *(longlong *)puVar1) &&
           (*(longlong *)(lVar9 + 8 + lVar3) == *(longlong *)(puVar1 + 2))) {
          iVar2 = *piVar11;
          lVar9 = (longlong)iVar2 * 0x20;
          *(uint64_t *)(lVar9 + 0x18 + lVar3) = 0;
          *piVar11 = *(int *)(lVar9 + 0x10 + lVar3);
          *(int *)(lVar9 + 0x10 + lVar3) = (int)param_1[4];
          *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + -1;
          *(int *)(param_1 + 4) = iVar2;
          break;
        }
        piVar11 = (int *)(lVar3 + 0x10 + lVar9);
        iVar2 = *piVar11;
      }
    }
    FUN_1808bb9a0(uVar4);
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),uVar4,&unknown_var_2080_ptr,0x62,1);
  }
  lVar3 = param_1[5];
  if (lVar3 != 0) {
    FUN_180768360(lVar3);
  }
  uVar8 = FUN_180744cc0(param_1);
  if ((int)uVar8 == 0) {
    uVar6 = *(uint *)((longlong)param_1 + 0x1c);
    uVar5 = uVar6 ^ (int)uVar6 >> 0x1f;
    uVar8 = (ulonglong)uVar5;
    if ((int)(uVar5 - ((int)uVar6 >> 0x1f)) < 0) {
      if (0 < (int)param_1[3]) goto LAB_18084f283;
      if ((0 < (int)uVar6) && (param_1[2] != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_1[2],&unknown_var_8432_ptr,0x100,1);
      }
      param_1[2] = 0;
      *(int32_t *)((longlong)param_1 + 0x1c) = 0;
      uVar6 = 0;
    }
    iVar2 = (int)param_1[3];
    if (iVar2 < 0) {
                    // WARNING: Subroutine does not return
      memset((longlong)iVar2 * 0x20 + param_1[2],0,(longlong)-iVar2 << 5);
    }
    *(int32_t *)(param_1 + 3) = 0;
    uVar6 = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f);
    uVar8 = (ulonglong)uVar6;
    if (((int)uVar6 < 1) || (uVar8 = FUN_1808532e0(param_1 + 2,0), (int)uVar8 == 0)) {
      *(int32_t *)(param_1 + 4) = 0xffffffff;
      *(int32_t *)((longlong)param_1 + 0x24) = 0;
    }
  }
LAB_18084f283:
  if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar3);
  }
  if (unaff_RBP != 0) {
    if (unaff_RBP == 0) {
      return 0x1c;
    }
    LeaveCriticalSection();
    return 0;
  }
  return uVar8;
}





// 函数: void FUN_18084f297(void)
void FUN_18084f297(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



int32_t FUN_18084f2ae(void)

{
  longlong unaff_RBP;
  uint64_t uStack0000000000000028;
  
  if (unaff_RBP == 0) {
    return 0x1c;
  }
  uStack0000000000000028 = 0x180768417;
  LeaveCriticalSection();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18084f2d0(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint64_t uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int *piVar11;
  
  lVar3 = param_1[5];
  if (lVar3 != 0) {
    FUN_180768360(lVar3);
  }
  uVar8 = 0;
  if (*(int *)((longlong)param_1 + 0x24) != 0) {
    iVar2 = (int)param_1[1];
    if (iVar2 != 0) {
      piVar11 = (int *)*param_1;
      uVar10 = uVar8;
      do {
        if (*piVar11 != -1) {
          iVar7 = ((int *)*param_1)[(int)uVar10];
          goto LAB_18084f34c;
        }
        uVar10 = (ulonglong)((int)uVar10 + 1);
        uVar8 = uVar8 + 1;
        piVar11 = piVar11 + 1;
      } while (uVar8 != (longlong)iVar2);
    }
    iVar7 = -1;
LAB_18084f34c:
    lVar3 = param_1[2];
    uVar4 = *(uint64_t *)((longlong)iVar7 * 0x20 + 0x18 + lVar3);
    puVar1 = (uint *)((longlong)iVar7 * 0x20 + lVar3);
    if ((*(int *)((longlong)param_1 + 0x24) != 0) && (iVar2 != 0)) {
      lVar9 = (longlong)(int)((puVar1[3] ^ puVar1[1] ^ *puVar1 ^ puVar1[2]) & iVar2 - 1U);
      piVar11 = (int *)(*param_1 + lVar9 * 4);
      iVar2 = *(int *)(*param_1 + lVar9 * 4);
      while (iVar2 != -1) {
        lVar9 = (longlong)iVar2 * 0x20;
        if ((*(longlong *)(lVar9 + lVar3) == *(longlong *)puVar1) &&
           (*(longlong *)(lVar9 + 8 + lVar3) == *(longlong *)(puVar1 + 2))) {
          iVar2 = *piVar11;
          lVar9 = (longlong)iVar2 * 0x20;
          *(uint64_t *)(lVar9 + 0x18 + lVar3) = 0;
          *piVar11 = *(int *)(lVar9 + 0x10 + lVar3);
          *(int *)(lVar9 + 0x10 + lVar3) = (int)param_1[4];
          *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + -1;
          *(int *)(param_1 + 4) = iVar2;
          break;
        }
        piVar11 = (int *)(lVar3 + 0x10 + lVar9);
        iVar2 = *piVar11;
      }
    }
    FUN_1808bb9e0(uVar4);
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),uVar4,&unknown_var_2080_ptr,0x62,1);
  }
  lVar9 = param_1[5];
  if (lVar9 != 0) {
    FUN_180768360(lVar9);
  }
  uVar8 = FUN_180744cc0(param_1);
  if ((int)uVar8 == 0) {
    uVar6 = *(uint *)((longlong)param_1 + 0x1c);
    uVar5 = uVar6 ^ (int)uVar6 >> 0x1f;
    uVar8 = (ulonglong)uVar5;
    if ((int)(uVar5 - ((int)uVar6 >> 0x1f)) < 0) {
      if (0 < (int)param_1[3]) goto LAB_18084f513;
      if ((0 < (int)uVar6) && (param_1[2] != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_1[2],&unknown_var_8432_ptr,0x100,1);
      }
      param_1[2] = 0;
      *(int32_t *)((longlong)param_1 + 0x1c) = 0;
      uVar6 = 0;
    }
    iVar2 = (int)param_1[3];
    if (iVar2 < 0) {
                    // WARNING: Subroutine does not return
      memset((longlong)iVar2 * 0x20 + param_1[2],0,(longlong)-iVar2 << 5);
    }
    *(int32_t *)(param_1 + 3) = 0;
    uVar6 = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f);
    uVar8 = (ulonglong)uVar6;
    if (((int)uVar6 < 1) || (uVar8 = FUN_1808532e0(param_1 + 2,0), (int)uVar8 == 0)) {
      *(int32_t *)(param_1 + 4) = 0xffffffff;
      *(int32_t *)((longlong)param_1 + 0x24) = 0;
    }
  }
LAB_18084f513:
  if (lVar9 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar9);
  }
  if (lVar3 != 0) {
    if (lVar3 == 0) {
      return 0x1c;
    }
    LeaveCriticalSection();
    return 0;
  }
  return uVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18084f2da(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint64_t uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int *piVar11;
  longlong unaff_RBP;
  uint uStack0000000000000034;
  uint uStack000000000000003c;
  
  if (unaff_RBP != 0) {
    FUN_180768360();
  }
  uVar8 = 0;
  if (*(int *)((longlong)param_1 + 0x24) != 0) {
    iVar2 = (int)param_1[1];
    if (iVar2 != 0) {
      piVar11 = (int *)*param_1;
      uVar10 = uVar8;
      do {
        if (*piVar11 != -1) {
          iVar7 = ((int *)*param_1)[(int)uVar10];
          goto LAB_18084f34c;
        }
        uVar10 = (ulonglong)((int)uVar10 + 1);
        uVar8 = uVar8 + 1;
        piVar11 = piVar11 + 1;
      } while (uVar8 != (longlong)iVar2);
    }
    iVar7 = -1;
LAB_18084f34c:
    lVar3 = param_1[2];
    uVar4 = *(uint64_t *)((longlong)iVar7 * 0x20 + 0x18 + lVar3);
    puVar1 = (uint *)((longlong)iVar7 * 0x20 + lVar3);
    uStack0000000000000034 = puVar1[1];
    uStack000000000000003c = puVar1[3];
    if ((*(int *)((longlong)param_1 + 0x24) != 0) && (iVar2 != 0)) {
      lVar9 = (longlong)
              (int)((uStack000000000000003c ^ uStack0000000000000034 ^ *puVar1 ^ puVar1[2]) &
                   iVar2 - 1U);
      piVar11 = (int *)(*param_1 + lVar9 * 4);
      iVar2 = *(int *)(*param_1 + lVar9 * 4);
      while (iVar2 != -1) {
        lVar9 = (longlong)iVar2 * 0x20;
        if ((*(longlong *)(lVar9 + lVar3) == *(longlong *)puVar1) &&
           (*(longlong *)(lVar9 + 8 + lVar3) == *(longlong *)(puVar1 + 2))) {
          iVar2 = *piVar11;
          lVar9 = (longlong)iVar2 * 0x20;
          *(uint64_t *)(lVar9 + 0x18 + lVar3) = 0;
          *piVar11 = *(int *)(lVar9 + 0x10 + lVar3);
          *(int *)(lVar9 + 0x10 + lVar3) = (int)param_1[4];
          *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + -1;
          *(int *)(param_1 + 4) = iVar2;
          break;
        }
        piVar11 = (int *)(lVar3 + 0x10 + lVar9);
        iVar2 = *piVar11;
      }
    }
    FUN_1808bb9e0(uVar4);
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),uVar4,&unknown_var_2080_ptr,0x62,1);
  }
  lVar3 = param_1[5];
  if (lVar3 != 0) {
    FUN_180768360(lVar3);
  }
  uVar8 = FUN_180744cc0(param_1);
  if ((int)uVar8 == 0) {
    uVar6 = *(uint *)((longlong)param_1 + 0x1c);
    uVar5 = uVar6 ^ (int)uVar6 >> 0x1f;
    uVar8 = (ulonglong)uVar5;
    if ((int)(uVar5 - ((int)uVar6 >> 0x1f)) < 0) {
      if (0 < (int)param_1[3]) goto LAB_18084f513;
      if ((0 < (int)uVar6) && (param_1[2] != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_1[2],&unknown_var_8432_ptr,0x100,1);
      }
      param_1[2] = 0;
      *(int32_t *)((longlong)param_1 + 0x1c) = 0;
      uVar6 = 0;
    }
    iVar2 = (int)param_1[3];
    if (iVar2 < 0) {
                    // WARNING: Subroutine does not return
      memset((longlong)iVar2 * 0x20 + param_1[2],0,(longlong)-iVar2 << 5);
    }
    *(int32_t *)(param_1 + 3) = 0;
    uVar6 = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f);
    uVar8 = (ulonglong)uVar6;
    if (((int)uVar6 < 1) || (uVar8 = FUN_1808532e0(param_1 + 2,0), (int)uVar8 == 0)) {
      *(int32_t *)(param_1 + 4) = 0xffffffff;
      *(int32_t *)((longlong)param_1 + 0x24) = 0;
    }
  }
LAB_18084f513:
  if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar3);
  }
  if (unaff_RBP != 0) {
    if (unaff_RBP == 0) {
      return 0x1c;
    }
    LeaveCriticalSection();
    return 0;
  }
  return uVar8;
}





// 函数: void FUN_18084f527(void)
void FUN_18084f527(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



int32_t FUN_18084f53e(void)

{
  longlong unaff_RBP;
  uint64_t uStack0000000000000028;
  
  if (unaff_RBP == 0) {
    return 0x1c;
  }
  uStack0000000000000028 = 0x180768417;
  LeaveCriticalSection();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18084f560(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint64_t uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int *piVar11;
  
  lVar3 = param_1[5];
  if (lVar3 != 0) {
    FUN_180768360(lVar3);
  }
  uVar8 = 0;
  if (*(int *)((longlong)param_1 + 0x24) != 0) {
    iVar2 = (int)param_1[1];
    if (iVar2 != 0) {
      piVar11 = (int *)*param_1;
      uVar10 = uVar8;
      do {
        if (*piVar11 != -1) {
          iVar7 = ((int *)*param_1)[(int)uVar10];
          goto LAB_18084f5dc;
        }
        uVar10 = (ulonglong)((int)uVar10 + 1);
        uVar8 = uVar8 + 1;
        piVar11 = piVar11 + 1;
      } while (uVar8 != (longlong)iVar2);
    }
    iVar7 = -1;
LAB_18084f5dc:
    lVar3 = param_1[2];
    uVar4 = *(uint64_t *)((longlong)iVar7 * 0x20 + 0x18 + lVar3);
    puVar1 = (uint *)((longlong)iVar7 * 0x20 + lVar3);
    if ((*(int *)((longlong)param_1 + 0x24) != 0) && (iVar2 != 0)) {
      lVar9 = (longlong)(int)((puVar1[3] ^ puVar1[1] ^ *puVar1 ^ puVar1[2]) & iVar2 - 1U);
      piVar11 = (int *)(*param_1 + lVar9 * 4);
      iVar2 = *(int *)(*param_1 + lVar9 * 4);
      while (iVar2 != -1) {
        lVar9 = (longlong)iVar2 * 0x20;
        if ((*(longlong *)(lVar9 + lVar3) == *(longlong *)puVar1) &&
           (*(longlong *)(lVar9 + 8 + lVar3) == *(longlong *)(puVar1 + 2))) {
          iVar2 = *piVar11;
          lVar9 = (longlong)iVar2 * 0x20;
          *(uint64_t *)(lVar9 + 0x18 + lVar3) = 0;
          *piVar11 = *(int *)(lVar9 + 0x10 + lVar3);
          *(int *)(lVar9 + 0x10 + lVar3) = (int)param_1[4];
          *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + -1;
          *(int *)(param_1 + 4) = iVar2;
          break;
        }
        piVar11 = (int *)(lVar3 + 0x10 + lVar9);
        iVar2 = *piVar11;
      }
    }
    FUN_1808bbe80(uVar4);
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),uVar4,&unknown_var_2080_ptr,0x62,1);
  }
  lVar9 = param_1[5];
  if (lVar9 != 0) {
    FUN_180768360(lVar9);
  }
  uVar8 = FUN_180744cc0(param_1);
  if ((int)uVar8 == 0) {
    uVar6 = *(uint *)((longlong)param_1 + 0x1c);
    uVar5 = uVar6 ^ (int)uVar6 >> 0x1f;
    uVar8 = (ulonglong)uVar5;
    if ((int)(uVar5 - ((int)uVar6 >> 0x1f)) < 0) {
      if (0 < (int)param_1[3]) goto LAB_18084f7a3;
      if ((0 < (int)uVar6) && (param_1[2] != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_1[2],&unknown_var_8432_ptr,0x100,1);
      }
      param_1[2] = 0;
      *(int32_t *)((longlong)param_1 + 0x1c) = 0;
      uVar6 = 0;
    }
    iVar2 = (int)param_1[3];
    if (iVar2 < 0) {
                    // WARNING: Subroutine does not return
      memset((longlong)iVar2 * 0x20 + param_1[2],0,(longlong)-iVar2 << 5);
    }
    *(int32_t *)(param_1 + 3) = 0;
    uVar6 = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f);
    uVar8 = (ulonglong)uVar6;
    if (((int)uVar6 < 1) || (uVar8 = FUN_1808532e0(param_1 + 2,0), (int)uVar8 == 0)) {
      *(int32_t *)(param_1 + 4) = 0xffffffff;
      *(int32_t *)((longlong)param_1 + 0x24) = 0;
    }
  }
LAB_18084f7a3:
  if (lVar9 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar9);
  }
  if (lVar3 != 0) {
    if (lVar3 == 0) {
      return 0x1c;
    }
    LeaveCriticalSection();
    return 0;
  }
  return uVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18084f56a(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint64_t uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int *piVar11;
  longlong unaff_RBP;
  uint uStack0000000000000034;
  uint uStack000000000000003c;
  
  if (unaff_RBP != 0) {
    FUN_180768360();
  }
  uVar8 = 0;
  if (*(int *)((longlong)param_1 + 0x24) != 0) {
    iVar2 = (int)param_1[1];
    if (iVar2 != 0) {
      piVar11 = (int *)*param_1;
      uVar10 = uVar8;
      do {
        if (*piVar11 != -1) {
          iVar7 = ((int *)*param_1)[(int)uVar10];
          goto LAB_18084f5dc;
        }
        uVar10 = (ulonglong)((int)uVar10 + 1);
        uVar8 = uVar8 + 1;
        piVar11 = piVar11 + 1;
      } while (uVar8 != (longlong)iVar2);
    }
    iVar7 = -1;
LAB_18084f5dc:
    lVar3 = param_1[2];
    uVar4 = *(uint64_t *)((longlong)iVar7 * 0x20 + 0x18 + lVar3);
    puVar1 = (uint *)((longlong)iVar7 * 0x20 + lVar3);
    uStack0000000000000034 = puVar1[1];
    uStack000000000000003c = puVar1[3];
    if ((*(int *)((longlong)param_1 + 0x24) != 0) && (iVar2 != 0)) {
      lVar9 = (longlong)
              (int)((uStack000000000000003c ^ uStack0000000000000034 ^ *puVar1 ^ puVar1[2]) &
                   iVar2 - 1U);
      piVar11 = (int *)(*param_1 + lVar9 * 4);
      iVar2 = *(int *)(*param_1 + lVar9 * 4);
      while (iVar2 != -1) {
        lVar9 = (longlong)iVar2 * 0x20;
        if ((*(longlong *)(lVar9 + lVar3) == *(longlong *)puVar1) &&
           (*(longlong *)(lVar9 + 8 + lVar3) == *(longlong *)(puVar1 + 2))) {
          iVar2 = *piVar11;
          lVar9 = (longlong)iVar2 * 0x20;
          *(uint64_t *)(lVar9 + 0x18 + lVar3) = 0;
          *piVar11 = *(int *)(lVar9 + 0x10 + lVar3);
          *(int *)(lVar9 + 0x10 + lVar3) = (int)param_1[4];
          *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + -1;
          *(int *)(param_1 + 4) = iVar2;
          break;
        }
        piVar11 = (int *)(lVar3 + 0x10 + lVar9);
        iVar2 = *piVar11;
      }
    }
    FUN_1808bbe80(uVar4);
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),uVar4,&unknown_var_2080_ptr,0x62,1);
  }
  lVar3 = param_1[5];
  if (lVar3 != 0) {
    FUN_180768360(lVar3);
  }
  uVar8 = FUN_180744cc0(param_1);
  if ((int)uVar8 == 0) {
    uVar6 = *(uint *)((longlong)param_1 + 0x1c);
    uVar5 = uVar6 ^ (int)uVar6 >> 0x1f;
    uVar8 = (ulonglong)uVar5;
    if ((int)(uVar5 - ((int)uVar6 >> 0x1f)) < 0) {
      if (0 < (int)param_1[3]) goto LAB_18084f7a3;
      if ((0 < (int)uVar6) && (param_1[2] != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_1[2],&unknown_var_8432_ptr,0x100,1);
      }
      param_1[2] = 0;
      *(int32_t *)((longlong)param_1 + 0x1c) = 0;
      uVar6 = 0;
    }
    iVar2 = (int)param_1[3];
    if (iVar2 < 0) {
                    // WARNING: Subroutine does not return
      memset((longlong)iVar2 * 0x20 + param_1[2],0,(longlong)-iVar2 << 5);
    }
    *(int32_t *)(param_1 + 3) = 0;
    uVar6 = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f);
    uVar8 = (ulonglong)uVar6;
    if (((int)uVar6 < 1) || (uVar8 = FUN_1808532e0(param_1 + 2,0), (int)uVar8 == 0)) {
      *(int32_t *)(param_1 + 4) = 0xffffffff;
      *(int32_t *)((longlong)param_1 + 0x24) = 0;
    }
  }
LAB_18084f7a3:
  if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar3);
  }
  if (unaff_RBP != 0) {
    if (unaff_RBP == 0) {
      return 0x1c;
    }
    LeaveCriticalSection();
    return 0;
  }
  return uVar8;
}





