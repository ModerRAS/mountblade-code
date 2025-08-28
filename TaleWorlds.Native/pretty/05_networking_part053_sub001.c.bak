#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 05_networking_part053_sub001.c - 20 个函数

#include "TaleWorlds.Native.Split.h"

// 05_networking_part053.c - 20 个函数


// 函数: void FUN_18086accb(void)
void FUN_18086accb(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18086acf0(longlong param_1,uint64_t *param_2)
void FUN_18086acf0(longlong param_1,uint64_t *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int8_t auStack_98 [32];
  uint64_t *puStack_78;
  int8_t auStack_70 [40];
  ulonglong uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_98;
  puStack_78 = param_2;
  lVar3 = (**(code **)(*(longlong *)*param_2 + 0x108))((longlong *)*param_2,0);
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = *(int *)(param_1 + 0x38);
    if (0 < iVar6) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x30));
        if (lVar1 == 0) {
LAB_18086ae40:
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            iVar2 = (iVar6 - iVar5) + -1;
            if (0 < iVar2) {
              lVar3 = *(longlong *)(param_1 + 0x30) + (longlong)iVar5 * 8;
                    // WARNING: Subroutine does not return
              memmove(lVar3,lVar3 + 8,(longlong)iVar2 << 3);
            }
            iVar6 = iVar6 + -1;
            *(int *)(param_1 + 0x38) = iVar6;
          }
        }
        else {
          lVar1 = lVar1 + 0x10;
          lVar4 = (**(code **)(*(longlong *)*param_2 + 0x340))((longlong *)*param_2,lVar1,1);
          if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
            FUN_18084b240(lVar1,auStack_70);
          }
          iVar6 = *(int *)(param_1 + 0x38);
          if (lVar4 == 0) goto LAB_18086ae40;
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            if (iVar5 != 0) {
              iVar2 = memcmp(*(longlong *)(lVar3 + -8 + *(longlong *)(param_1 + 0x30)) + 0x10,
                             lVar4 + 0x10,0x10);
              if (-1 < iVar2) goto LAB_18086ae38;
            }
            if (iVar5 == iVar6 + -1) {
LAB_18086ae2d:
              *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x30)) = lVar4;
              iVar6 = *(int *)(param_1 + 0x38);
            }
            else {
              lVar1 = *(longlong *)(lVar3 + 8 + *(longlong *)(param_1 + 0x30));
              iVar2 = memcmp(lVar1 + 0x10,lVar4 + 0x10,0x10);
              if (-1 < iVar2) {
                iVar2 = memcmp(lVar4 + 0x10,lVar1 + 0x10,0x10);
                if (iVar2 < 0) goto LAB_18086ae2d;
              }
            }
          }
LAB_18086ae38:
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 8;
        }
        param_2 = puStack_78;
      } while (iVar5 < iVar6);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_98);
}






// 函数: void FUN_18086ad32(void)
void FUN_18086ad32(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RBP;
  int iVar4;
  int iVar5;
  uint64_t *unaff_R14;
  longlong lVar6;
  uint64_t *puStackX_20;
  ulonglong in_stack_00000050;
  
  iVar4 = 0;
  iVar5 = *(int *)(unaff_RBP + 0x38);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0x30));
      if (lVar1 == 0) {
LAB_18086ae40:
        if ((-1 < iVar4) && (iVar4 < iVar5)) {
          iVar2 = (iVar5 - iVar4) + -1;
          if (0 < iVar2) {
            lVar6 = *(longlong *)(unaff_RBP + 0x30) + (longlong)iVar4 * 8;
                    // WARNING: Subroutine does not return
            memmove(lVar6,lVar6 + 8,(longlong)iVar2 << 3);
          }
          iVar5 = iVar5 + -1;
          *(int *)(unaff_RBP + 0x38) = iVar5;
        }
      }
      else {
        lVar1 = lVar1 + 0x10;
        lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x340))((longlong *)*unaff_R14,lVar1,1);
        if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
          FUN_18084b240(lVar1,&stack0x00000028);
        }
        iVar5 = *(int *)(unaff_RBP + 0x38);
        if (lVar3 == 0) goto LAB_18086ae40;
        if (((-1 < iVar4) && (iVar4 < iVar5)) &&
           ((iVar4 == 0 ||
            (iVar2 = memcmp(*(longlong *)(lVar6 + -8 + *(longlong *)(unaff_RBP + 0x30)) + 0x10,
                            lVar3 + 0x10,0x10), iVar2 < 0)))) {
          if (iVar4 != iVar5 + -1) {
            lVar1 = *(longlong *)(lVar6 + 8 + *(longlong *)(unaff_RBP + 0x30));
            iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
            if ((iVar2 < 0) || (iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10), -1 < iVar2))
            goto LAB_18086ae38;
          }
          *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0x30)) = lVar3;
          iVar5 = *(int *)(unaff_RBP + 0x38);
        }
LAB_18086ae38:
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      }
      unaff_R14 = puStackX_20;
    } while (iVar4 < iVar5);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_18086ad4c(void)
void FUN_18086ad4c(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  uint64_t *unaff_R14;
  longlong lVar4;
  uint64_t *puStackX_20;
  ulonglong in_stack_00000050;
  
  lVar4 = 0;
  do {
    lVar1 = *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0x30));
    if (lVar1 == 0) {
LAB_18086ae40:
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        iVar2 = (unaff_EDI - unaff_ESI) + -1;
        if (0 < iVar2) {
          lVar4 = *(longlong *)(unaff_RBP + 0x30) + (longlong)unaff_ESI * 8;
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar4 + 8,(longlong)iVar2 << 3);
        }
        unaff_EDI = unaff_EDI + -1;
        *(int *)(unaff_RBP + 0x38) = unaff_EDI;
      }
    }
    else {
      lVar1 = lVar1 + 0x10;
      lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x340))((longlong *)*unaff_R14,lVar1,1);
      if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18084b240(lVar1,&stack0x00000028);
      }
      unaff_EDI = *(int *)(unaff_RBP + 0x38);
      if (lVar3 == 0) goto LAB_18086ae40;
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        if (unaff_ESI != 0) {
          iVar2 = memcmp(*(longlong *)(lVar4 + -8 + *(longlong *)(unaff_RBP + 0x30)) + 0x10,
                         lVar3 + 0x10,0x10);
          if (-1 < iVar2) goto LAB_18086ae38;
        }
        if (unaff_ESI == unaff_EDI + -1) {
LAB_18086ae2d:
          *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0x30)) = lVar3;
          unaff_EDI = *(int *)(unaff_RBP + 0x38);
        }
        else {
          lVar1 = *(longlong *)(lVar4 + 8 + *(longlong *)(unaff_RBP + 0x30));
          iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
          if (-1 < iVar2) {
            iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10);
            if (iVar2 < 0) goto LAB_18086ae2d;
          }
        }
      }
LAB_18086ae38:
      unaff_ESI = unaff_ESI + 1;
      lVar4 = lVar4 + 8;
    }
    unaff_R14 = puStackX_20;
    if (unaff_EDI <= unaff_ESI) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
    }
  } while( true );
}






// 函数: void FUN_18086ae9c(void)
void FUN_18086ae9c(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_18086aeab(void)
void FUN_18086aeab(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18086aed0(longlong param_1,uint64_t *param_2)
void FUN_18086aed0(longlong param_1,uint64_t *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int8_t auStack_98 [32];
  uint64_t *puStack_78;
  int8_t auStack_70 [40];
  ulonglong uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_98;
  puStack_78 = param_2;
  lVar3 = (**(code **)(*(longlong *)*param_2 + 0x90))((longlong *)*param_2,0);
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = *(int *)(param_1 + 0x138);
    if (0 < iVar6) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x130));
        if (lVar1 == 0) {
LAB_18086b03a:
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            iVar2 = (iVar6 - iVar5) + -1;
            if (0 < iVar2) {
              lVar3 = *(longlong *)(param_1 + 0x130) + (longlong)iVar5 * 8;
                    // WARNING: Subroutine does not return
              memmove(lVar3,lVar3 + 8,(longlong)iVar2 << 3);
            }
            iVar6 = iVar6 + -1;
            *(int *)(param_1 + 0x138) = iVar6;
          }
        }
        else {
          lVar1 = lVar1 + 0x10;
          lVar4 = (**(code **)(*(longlong *)*param_2 + 0x2a8))((longlong *)*param_2,lVar1,1);
          if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
            FUN_18084b240(lVar1,auStack_70);
          }
          iVar6 = *(int *)(param_1 + 0x138);
          if (lVar4 == 0) goto LAB_18086b03a;
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            if (iVar5 != 0) {
              iVar2 = memcmp(*(longlong *)(lVar3 + -8 + *(longlong *)(param_1 + 0x130)) + 0x10,
                             lVar4 + 0x10,0x10);
              if (-1 < iVar2) goto LAB_18086b032;
            }
            if (iVar5 == iVar6 + -1) {
LAB_18086b021:
              *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x130)) = lVar4;
              iVar6 = *(int *)(param_1 + 0x138);
            }
            else {
              lVar1 = *(longlong *)(lVar3 + 8 + *(longlong *)(param_1 + 0x130));
              iVar2 = memcmp(lVar1 + 0x10,lVar4 + 0x10,0x10);
              if (-1 < iVar2) {
                iVar2 = memcmp(lVar4 + 0x10,lVar1 + 0x10,0x10);
                if (iVar2 < 0) goto LAB_18086b021;
              }
            }
          }
LAB_18086b032:
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 8;
        }
        param_2 = puStack_78;
      } while (iVar5 < iVar6);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_98);
}






// 函数: void FUN_18086af12(void)
void FUN_18086af12(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RBP;
  int iVar4;
  int iVar5;
  uint64_t *unaff_R14;
  longlong lVar6;
  uint64_t *puStackX_20;
  ulonglong in_stack_00000050;
  
  iVar4 = 0;
  iVar5 = *(int *)(unaff_RBP + 0x138);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0x130));
      if (lVar1 == 0) {
LAB_18086b03a:
        if ((-1 < iVar4) && (iVar4 < iVar5)) {
          iVar2 = (iVar5 - iVar4) + -1;
          if (0 < iVar2) {
            lVar6 = *(longlong *)(unaff_RBP + 0x130) + (longlong)iVar4 * 8;
                    // WARNING: Subroutine does not return
            memmove(lVar6,lVar6 + 8,(longlong)iVar2 << 3);
          }
          iVar5 = iVar5 + -1;
          *(int *)(unaff_RBP + 0x138) = iVar5;
        }
      }
      else {
        lVar1 = lVar1 + 0x10;
        lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x2a8))((longlong *)*unaff_R14,lVar1,1);
        if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
          FUN_18084b240(lVar1,&stack0x00000028);
        }
        iVar5 = *(int *)(unaff_RBP + 0x138);
        if (lVar3 == 0) goto LAB_18086b03a;
        if (((-1 < iVar4) && (iVar4 < iVar5)) &&
           ((iVar4 == 0 ||
            (iVar2 = memcmp(*(longlong *)(lVar6 + -8 + *(longlong *)(unaff_RBP + 0x130)) + 0x10,
                            lVar3 + 0x10,0x10), iVar2 < 0)))) {
          if (iVar4 != iVar5 + -1) {
            lVar1 = *(longlong *)(lVar6 + 8 + *(longlong *)(unaff_RBP + 0x130));
            iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
            if ((iVar2 < 0) || (iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10), -1 < iVar2))
            goto LAB_18086b032;
          }
          *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0x130)) = lVar3;
          iVar5 = *(int *)(unaff_RBP + 0x138);
        }
LAB_18086b032:
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      }
      unaff_R14 = puStackX_20;
    } while (iVar4 < iVar5);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_18086af2f(void)
void FUN_18086af2f(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  uint64_t *unaff_R14;
  longlong lVar4;
  uint64_t *puStackX_20;
  ulonglong in_stack_00000050;
  
  lVar4 = 0;
  do {
    lVar1 = *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0x130));
    if (lVar1 == 0) {
LAB_18086b03a:
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        iVar2 = (unaff_EDI - unaff_ESI) + -1;
        if (0 < iVar2) {
          lVar4 = *(longlong *)(unaff_RBP + 0x130) + (longlong)unaff_ESI * 8;
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar4 + 8,(longlong)iVar2 << 3);
        }
        unaff_EDI = unaff_EDI + -1;
        *(int *)(unaff_RBP + 0x138) = unaff_EDI;
      }
    }
    else {
      lVar1 = lVar1 + 0x10;
      lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x2a8))((longlong *)*unaff_R14,lVar1,1);
      if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18084b240(lVar1,&stack0x00000028);
      }
      unaff_EDI = *(int *)(unaff_RBP + 0x138);
      if (lVar3 == 0) goto LAB_18086b03a;
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        if (unaff_ESI != 0) {
          iVar2 = memcmp(*(longlong *)(lVar4 + -8 + *(longlong *)(unaff_RBP + 0x130)) + 0x10,
                         lVar3 + 0x10,0x10);
          if (-1 < iVar2) goto LAB_18086b032;
        }
        if (unaff_ESI == unaff_EDI + -1) {
LAB_18086b021:
          *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0x130)) = lVar3;
          unaff_EDI = *(int *)(unaff_RBP + 0x138);
        }
        else {
          lVar1 = *(longlong *)(lVar4 + 8 + *(longlong *)(unaff_RBP + 0x130));
          iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
          if (-1 < iVar2) {
            iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10);
            if (iVar2 < 0) goto LAB_18086b021;
          }
        }
      }
LAB_18086b032:
      unaff_ESI = unaff_ESI + 1;
      lVar4 = lVar4 + 8;
    }
    unaff_R14 = puStackX_20;
    if (unaff_EDI <= unaff_ESI) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
    }
  } while( true );
}






// 函数: void FUN_18086b09f(void)
void FUN_18086b09f(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_18086b0ae(void)
void FUN_18086b0ae(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18086b0d0(longlong param_1,uint64_t *param_2)
void FUN_18086b0d0(longlong param_1,uint64_t *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int8_t auStack_98 [32];
  uint64_t *puStack_78;
  int8_t auStack_70 [40];
  ulonglong uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_98;
  puStack_78 = param_2;
  lVar3 = (**(code **)(*(longlong *)*param_2 + 0x30))((longlong *)*param_2,0);
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = *(int *)(param_1 + 0x1e8);
    if (0 < iVar6) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x1e0));
        if (lVar1 == 0) {
LAB_18086b23a:
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            iVar2 = (iVar6 - iVar5) + -1;
            if (0 < iVar2) {
              lVar3 = *(longlong *)(param_1 + 0x1e0) + (longlong)iVar5 * 8;
                    // WARNING: Subroutine does not return
              memmove(lVar3,lVar3 + 8,(longlong)iVar2 << 3);
            }
            iVar6 = iVar6 + -1;
            *(int *)(param_1 + 0x1e8) = iVar6;
          }
        }
        else {
          lVar1 = lVar1 + 0x10;
          lVar4 = (**(code **)(*(longlong *)*param_2 + 0x260))((longlong *)*param_2,lVar1,1);
          if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
            FUN_18084b240(lVar1,auStack_70);
          }
          iVar6 = *(int *)(param_1 + 0x1e8);
          if (lVar4 == 0) goto LAB_18086b23a;
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            if (iVar5 != 0) {
              iVar2 = memcmp(*(longlong *)(lVar3 + -8 + *(longlong *)(param_1 + 0x1e0)) + 0x10,
                             lVar4 + 0x10,0x10);
              if (-1 < iVar2) goto LAB_18086b232;
            }
            if (iVar5 == iVar6 + -1) {
LAB_18086b221:
              *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x1e0)) = lVar4;
              iVar6 = *(int *)(param_1 + 0x1e8);
            }
            else {
              lVar1 = *(longlong *)(lVar3 + 8 + *(longlong *)(param_1 + 0x1e0));
              iVar2 = memcmp(lVar1 + 0x10,lVar4 + 0x10,0x10);
              if (-1 < iVar2) {
                iVar2 = memcmp(lVar4 + 0x10,lVar1 + 0x10,0x10);
                if (iVar2 < 0) goto LAB_18086b221;
              }
            }
          }
LAB_18086b232:
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 8;
        }
        param_2 = puStack_78;
      } while (iVar5 < iVar6);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_98);
}






// 函数: void FUN_18086b10f(void)
void FUN_18086b10f(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RBP;
  int iVar4;
  int iVar5;
  uint64_t *unaff_R14;
  longlong lVar6;
  uint64_t *puStackX_20;
  ulonglong in_stack_00000050;
  
  iVar4 = 0;
  iVar5 = *(int *)(unaff_RBP + 0x1e8);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0x1e0));
      if (lVar1 == 0) {
LAB_18086b23a:
        if ((-1 < iVar4) && (iVar4 < iVar5)) {
          iVar2 = (iVar5 - iVar4) + -1;
          if (0 < iVar2) {
            lVar6 = *(longlong *)(unaff_RBP + 0x1e0) + (longlong)iVar4 * 8;
                    // WARNING: Subroutine does not return
            memmove(lVar6,lVar6 + 8,(longlong)iVar2 << 3);
          }
          iVar5 = iVar5 + -1;
          *(int *)(unaff_RBP + 0x1e8) = iVar5;
        }
      }
      else {
        lVar1 = lVar1 + 0x10;
        lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x260))((longlong *)*unaff_R14,lVar1,1);
        if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
          FUN_18084b240(lVar1,&stack0x00000028);
        }
        iVar5 = *(int *)(unaff_RBP + 0x1e8);
        if (lVar3 == 0) goto LAB_18086b23a;
        if (((-1 < iVar4) && (iVar4 < iVar5)) &&
           ((iVar4 == 0 ||
            (iVar2 = memcmp(*(longlong *)(lVar6 + -8 + *(longlong *)(unaff_RBP + 0x1e0)) + 0x10,
                            lVar3 + 0x10,0x10), iVar2 < 0)))) {
          if (iVar4 != iVar5 + -1) {
            lVar1 = *(longlong *)(lVar6 + 8 + *(longlong *)(unaff_RBP + 0x1e0));
            iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
            if ((iVar2 < 0) || (iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10), -1 < iVar2))
            goto LAB_18086b232;
          }
          *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0x1e0)) = lVar3;
          iVar5 = *(int *)(unaff_RBP + 0x1e8);
        }
LAB_18086b232:
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      }
      unaff_R14 = puStackX_20;
    } while (iVar4 < iVar5);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_18086b12c(void)
void FUN_18086b12c(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  uint64_t *unaff_R14;
  longlong lVar4;
  uint64_t *puStackX_20;
  ulonglong in_stack_00000050;
  
  lVar4 = 0;
  do {
    lVar1 = *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0x1e0));
    if (lVar1 == 0) {
LAB_18086b23a:
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        iVar2 = (unaff_EDI - unaff_ESI) + -1;
        if (0 < iVar2) {
          lVar4 = *(longlong *)(unaff_RBP + 0x1e0) + (longlong)unaff_ESI * 8;
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar4 + 8,(longlong)iVar2 << 3);
        }
        unaff_EDI = unaff_EDI + -1;
        *(int *)(unaff_RBP + 0x1e8) = unaff_EDI;
      }
    }
    else {
      lVar1 = lVar1 + 0x10;
      lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x260))((longlong *)*unaff_R14,lVar1,1);
      if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18084b240(lVar1,&stack0x00000028);
      }
      unaff_EDI = *(int *)(unaff_RBP + 0x1e8);
      if (lVar3 == 0) goto LAB_18086b23a;
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        if (unaff_ESI != 0) {
          iVar2 = memcmp(*(longlong *)(lVar4 + -8 + *(longlong *)(unaff_RBP + 0x1e0)) + 0x10,
                         lVar3 + 0x10,0x10);
          if (-1 < iVar2) goto LAB_18086b232;
        }
        if (unaff_ESI == unaff_EDI + -1) {
LAB_18086b221:
          *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0x1e0)) = lVar3;
          unaff_EDI = *(int *)(unaff_RBP + 0x1e8);
        }
        else {
          lVar1 = *(longlong *)(lVar4 + 8 + *(longlong *)(unaff_RBP + 0x1e0));
          iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
          if (-1 < iVar2) {
            iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10);
            if (iVar2 < 0) goto LAB_18086b221;
          }
        }
      }
LAB_18086b232:
      unaff_ESI = unaff_ESI + 1;
      lVar4 = lVar4 + 8;
    }
    unaff_R14 = puStackX_20;
    if (unaff_EDI <= unaff_ESI) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
    }
  } while( true );
}






// 函数: void FUN_18086b29f(void)
void FUN_18086b29f(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_18086b2ae(void)
void FUN_18086b2ae(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18086b2d0(longlong param_1,uint64_t *param_2)
void FUN_18086b2d0(longlong param_1,uint64_t *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int8_t auStack_98 [32];
  uint64_t *puStack_78;
  int8_t auStack_70 [40];
  ulonglong uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_98;
  puStack_78 = param_2;
  lVar3 = (**(code **)(*(longlong *)*param_2 + 0xf8))((longlong *)*param_2,0);
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = *(int *)(param_1 + 0x68);
    if (0 < iVar6) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x60));
        if (lVar1 == 0) {
LAB_18086b420:
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            iVar2 = (iVar6 - iVar5) + -1;
            if (0 < iVar2) {
              lVar3 = *(longlong *)(param_1 + 0x60) + (longlong)iVar5 * 8;
                    // WARNING: Subroutine does not return
              memmove(lVar3,lVar3 + 8,(longlong)iVar2 << 3);
            }
            iVar6 = iVar6 + -1;
            *(int *)(param_1 + 0x68) = iVar6;
          }
        }
        else {
          lVar1 = lVar1 + 0x10;
          lVar4 = (**(code **)(*(longlong *)*param_2 + 0x330))((longlong *)*param_2,lVar1,1);
          if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
            FUN_18084b240(lVar1,auStack_70);
          }
          iVar6 = *(int *)(param_1 + 0x68);
          if (lVar4 == 0) goto LAB_18086b420;
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            if (iVar5 != 0) {
              iVar2 = memcmp(*(longlong *)(lVar3 + -8 + *(longlong *)(param_1 + 0x60)) + 0x10,
                             lVar4 + 0x10,0x10);
              if (-1 < iVar2) goto LAB_18086b418;
            }
            if (iVar5 == iVar6 + -1) {
LAB_18086b40d:
              *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x60)) = lVar4;
              iVar6 = *(int *)(param_1 + 0x68);
            }
            else {
              lVar1 = *(longlong *)(lVar3 + 8 + *(longlong *)(param_1 + 0x60));
              iVar2 = memcmp(lVar1 + 0x10,lVar4 + 0x10,0x10);
              if (-1 < iVar2) {
                iVar2 = memcmp(lVar4 + 0x10,lVar1 + 0x10,0x10);
                if (iVar2 < 0) goto LAB_18086b40d;
              }
            }
          }
LAB_18086b418:
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 8;
        }
        param_2 = puStack_78;
      } while (iVar5 < iVar6);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_98);
}






// 函数: void FUN_18086b312(void)
void FUN_18086b312(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RBP;
  int iVar4;
  int iVar5;
  uint64_t *unaff_R14;
  longlong lVar6;
  uint64_t *puStackX_20;
  ulonglong in_stack_00000050;
  
  iVar4 = 0;
  iVar5 = *(int *)(unaff_RBP + 0x68);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0x60));
      if (lVar1 == 0) {
LAB_18086b420:
        if ((-1 < iVar4) && (iVar4 < iVar5)) {
          iVar2 = (iVar5 - iVar4) + -1;
          if (0 < iVar2) {
            lVar6 = *(longlong *)(unaff_RBP + 0x60) + (longlong)iVar4 * 8;
                    // WARNING: Subroutine does not return
            memmove(lVar6,lVar6 + 8,(longlong)iVar2 << 3);
          }
          iVar5 = iVar5 + -1;
          *(int *)(unaff_RBP + 0x68) = iVar5;
        }
      }
      else {
        lVar1 = lVar1 + 0x10;
        lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x330))((longlong *)*unaff_R14,lVar1,1);
        if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
          FUN_18084b240(lVar1,&stack0x00000028);
        }
        iVar5 = *(int *)(unaff_RBP + 0x68);
        if (lVar3 == 0) goto LAB_18086b420;
        if (((-1 < iVar4) && (iVar4 < iVar5)) &&
           ((iVar4 == 0 ||
            (iVar2 = memcmp(*(longlong *)(lVar6 + -8 + *(longlong *)(unaff_RBP + 0x60)) + 0x10,
                            lVar3 + 0x10,0x10), iVar2 < 0)))) {
          if (iVar4 != iVar5 + -1) {
            lVar1 = *(longlong *)(lVar6 + 8 + *(longlong *)(unaff_RBP + 0x60));
            iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
            if ((iVar2 < 0) || (iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10), -1 < iVar2))
            goto LAB_18086b418;
          }
          *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0x60)) = lVar3;
          iVar5 = *(int *)(unaff_RBP + 0x68);
        }
LAB_18086b418:
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      }
      unaff_R14 = puStackX_20;
    } while (iVar4 < iVar5);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_18086b32c(void)
void FUN_18086b32c(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  uint64_t *unaff_R14;
  longlong lVar4;
  uint64_t *puStackX_20;
  ulonglong in_stack_00000050;
  
  lVar4 = 0;
  do {
    lVar1 = *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0x60));
    if (lVar1 == 0) {
LAB_18086b420:
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        iVar2 = (unaff_EDI - unaff_ESI) + -1;
        if (0 < iVar2) {
          lVar4 = *(longlong *)(unaff_RBP + 0x60) + (longlong)unaff_ESI * 8;
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar4 + 8,(longlong)iVar2 << 3);
        }
        unaff_EDI = unaff_EDI + -1;
        *(int *)(unaff_RBP + 0x68) = unaff_EDI;
      }
    }
    else {
      lVar1 = lVar1 + 0x10;
      lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x330))((longlong *)*unaff_R14,lVar1,1);
      if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18084b240(lVar1,&stack0x00000028);
      }
      unaff_EDI = *(int *)(unaff_RBP + 0x68);
      if (lVar3 == 0) goto LAB_18086b420;
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        if (unaff_ESI != 0) {
          iVar2 = memcmp(*(longlong *)(lVar4 + -8 + *(longlong *)(unaff_RBP + 0x60)) + 0x10,
                         lVar3 + 0x10,0x10);
          if (-1 < iVar2) goto LAB_18086b418;
        }
        if (unaff_ESI == unaff_EDI + -1) {
LAB_18086b40d:
          *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0x60)) = lVar3;
          unaff_EDI = *(int *)(unaff_RBP + 0x68);
        }
        else {
          lVar1 = *(longlong *)(lVar4 + 8 + *(longlong *)(unaff_RBP + 0x60));
          iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
          if (-1 < iVar2) {
            iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10);
            if (iVar2 < 0) goto LAB_18086b40d;
          }
        }
      }
LAB_18086b418:
      unaff_ESI = unaff_ESI + 1;
      lVar4 = lVar4 + 8;
    }
    unaff_R14 = puStackX_20;
    if (unaff_EDI <= unaff_ESI) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
    }
  } while( true );
}






