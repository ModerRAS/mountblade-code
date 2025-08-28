#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part376.c - 20 个函数

// 函数: void FUN_18086cc4e(void)
void FUN_18086cc4e(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18086cc70(longlong param_1,undefined8 *param_2)
void FUN_18086cc70(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  undefined8 *puStack_78;
  undefined1 auStack_70 [40];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  puStack_78 = param_2;
  lVar3 = (**(code **)(*(longlong *)*param_2 + 0x58))((longlong *)*param_2,0);
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = *(int *)(param_1 + 0x1f8);
    if (0 < iVar6) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x1f0));
        if (lVar1 == 0) {
LAB_18086cdda:
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            iVar2 = (iVar6 - iVar5) + -1;
            if (0 < iVar2) {
              lVar3 = *(longlong *)(param_1 + 0x1f0) + (longlong)iVar5 * 8;
                    // WARNING: Subroutine does not return
              memmove(lVar3,lVar3 + 8,(longlong)iVar2 << 3);
            }
            iVar6 = iVar6 + -1;
            *(int *)(param_1 + 0x1f8) = iVar6;
          }
        }
        else {
          lVar1 = lVar1 + 0x10;
          lVar4 = (**(code **)(*(longlong *)*param_2 + 0x280))((longlong *)*param_2,lVar1,1);
          if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
            FUN_18084b240(lVar1,auStack_70);
          }
          iVar6 = *(int *)(param_1 + 0x1f8);
          if (lVar4 == 0) goto LAB_18086cdda;
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            if (iVar5 != 0) {
              iVar2 = memcmp(*(longlong *)(lVar3 + -8 + *(longlong *)(param_1 + 0x1f0)) + 0x10,
                             lVar4 + 0x10,0x10);
              if (-1 < iVar2) goto LAB_18086cdd2;
            }
            if (iVar5 == iVar6 + -1) {
LAB_18086cdc1:
              *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x1f0)) = lVar4;
              iVar6 = *(int *)(param_1 + 0x1f8);
            }
            else {
              lVar1 = *(longlong *)(lVar3 + 8 + *(longlong *)(param_1 + 0x1f0));
              iVar2 = memcmp(lVar1 + 0x10,lVar4 + 0x10,0x10);
              if (-1 < iVar2) {
                iVar2 = memcmp(lVar4 + 0x10,lVar1 + 0x10,0x10);
                if (iVar2 < 0) goto LAB_18086cdc1;
              }
            }
          }
LAB_18086cdd2:
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





// 函数: void FUN_18086ccaf(void)
void FUN_18086ccaf(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RBP;
  int iVar4;
  int iVar5;
  undefined8 *unaff_R14;
  longlong lVar6;
  undefined8 *puStackX_20;
  ulonglong in_stack_00000050;
  
  iVar4 = 0;
  iVar5 = *(int *)(unaff_RBP + 0x1f8);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0x1f0));
      if (lVar1 == 0) {
LAB_18086cdda:
        if ((-1 < iVar4) && (iVar4 < iVar5)) {
          iVar2 = (iVar5 - iVar4) + -1;
          if (0 < iVar2) {
            lVar6 = *(longlong *)(unaff_RBP + 0x1f0) + (longlong)iVar4 * 8;
                    // WARNING: Subroutine does not return
            memmove(lVar6,lVar6 + 8,(longlong)iVar2 << 3);
          }
          iVar5 = iVar5 + -1;
          *(int *)(unaff_RBP + 0x1f8) = iVar5;
        }
      }
      else {
        lVar1 = lVar1 + 0x10;
        lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x280))((longlong *)*unaff_R14,lVar1,1);
        if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
          FUN_18084b240(lVar1,&stack0x00000028);
        }
        iVar5 = *(int *)(unaff_RBP + 0x1f8);
        if (lVar3 == 0) goto LAB_18086cdda;
        if (((-1 < iVar4) && (iVar4 < iVar5)) &&
           ((iVar4 == 0 ||
            (iVar2 = memcmp(*(longlong *)(lVar6 + -8 + *(longlong *)(unaff_RBP + 0x1f0)) + 0x10,
                            lVar3 + 0x10,0x10), iVar2 < 0)))) {
          if (iVar4 != iVar5 + -1) {
            lVar1 = *(longlong *)(lVar6 + 8 + *(longlong *)(unaff_RBP + 0x1f0));
            iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
            if ((iVar2 < 0) || (iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10), -1 < iVar2))
            goto LAB_18086cdd2;
          }
          *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0x1f0)) = lVar3;
          iVar5 = *(int *)(unaff_RBP + 0x1f8);
        }
LAB_18086cdd2:
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      }
      unaff_R14 = puStackX_20;
    } while (iVar4 < iVar5);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18086cccc(void)
void FUN_18086cccc(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  undefined8 *unaff_R14;
  longlong lVar4;
  undefined8 *puStackX_20;
  ulonglong in_stack_00000050;
  
  lVar4 = 0;
  do {
    lVar1 = *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0x1f0));
    if (lVar1 == 0) {
LAB_18086cdda:
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        iVar2 = (unaff_EDI - unaff_ESI) + -1;
        if (0 < iVar2) {
          lVar4 = *(longlong *)(unaff_RBP + 0x1f0) + (longlong)unaff_ESI * 8;
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar4 + 8,(longlong)iVar2 << 3);
        }
        unaff_EDI = unaff_EDI + -1;
        *(int *)(unaff_RBP + 0x1f8) = unaff_EDI;
      }
    }
    else {
      lVar1 = lVar1 + 0x10;
      lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x280))((longlong *)*unaff_R14,lVar1,1);
      if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18084b240(lVar1,&stack0x00000028);
      }
      unaff_EDI = *(int *)(unaff_RBP + 0x1f8);
      if (lVar3 == 0) goto LAB_18086cdda;
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        if (unaff_ESI != 0) {
          iVar2 = memcmp(*(longlong *)(lVar4 + -8 + *(longlong *)(unaff_RBP + 0x1f0)) + 0x10,
                         lVar3 + 0x10,0x10);
          if (-1 < iVar2) goto LAB_18086cdd2;
        }
        if (unaff_ESI == unaff_EDI + -1) {
LAB_18086cdc1:
          *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0x1f0)) = lVar3;
          unaff_EDI = *(int *)(unaff_RBP + 0x1f8);
        }
        else {
          lVar1 = *(longlong *)(lVar4 + 8 + *(longlong *)(unaff_RBP + 0x1f0));
          iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
          if (-1 < iVar2) {
            iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10);
            if (iVar2 < 0) goto LAB_18086cdc1;
          }
        }
      }
LAB_18086cdd2:
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





// 函数: void FUN_18086ce3f(void)
void FUN_18086ce3f(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18086ce4e(void)
void FUN_18086ce4e(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18086ce70(longlong param_1,undefined8 *param_2)
void FUN_18086ce70(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  undefined8 *puStack_78;
  undefined1 auStack_70 [40];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  puStack_78 = param_2;
  lVar3 = (**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,0);
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = *(int *)(param_1 + 0xd8);
    if (0 < iVar6) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0xd0));
        if (lVar1 == 0) {
LAB_18086cfda:
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            iVar2 = (iVar6 - iVar5) + -1;
            if (0 < iVar2) {
              lVar3 = *(longlong *)(param_1 + 0xd0) + (longlong)iVar5 * 8;
                    // WARNING: Subroutine does not return
              memmove(lVar3,lVar3 + 8,(longlong)iVar2 << 3);
            }
            iVar6 = iVar6 + -1;
            *(int *)(param_1 + 0xd8) = iVar6;
          }
        }
        else {
          lVar1 = lVar1 + 0x10;
          lVar4 = (**(code **)(*(longlong *)*param_2 + 0x2f0))((longlong *)*param_2,lVar1,1);
          if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
            FUN_18084b240(lVar1,auStack_70);
          }
          iVar6 = *(int *)(param_1 + 0xd8);
          if (lVar4 == 0) goto LAB_18086cfda;
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            if (iVar5 != 0) {
              iVar2 = memcmp(*(longlong *)(lVar3 + -8 + *(longlong *)(param_1 + 0xd0)) + 0x10,
                             lVar4 + 0x10,0x10);
              if (-1 < iVar2) goto LAB_18086cfd2;
            }
            if (iVar5 == iVar6 + -1) {
LAB_18086cfc1:
              *(longlong *)(lVar3 + *(longlong *)(param_1 + 0xd0)) = lVar4;
              iVar6 = *(int *)(param_1 + 0xd8);
            }
            else {
              lVar1 = *(longlong *)(lVar3 + 8 + *(longlong *)(param_1 + 0xd0));
              iVar2 = memcmp(lVar1 + 0x10,lVar4 + 0x10,0x10);
              if (-1 < iVar2) {
                iVar2 = memcmp(lVar4 + 0x10,lVar1 + 0x10,0x10);
                if (iVar2 < 0) goto LAB_18086cfc1;
              }
            }
          }
LAB_18086cfd2:
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





// 函数: void FUN_18086ceaf(void)
void FUN_18086ceaf(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RBP;
  int iVar4;
  int iVar5;
  undefined8 *unaff_R14;
  longlong lVar6;
  undefined8 *puStackX_20;
  ulonglong in_stack_00000050;
  
  iVar4 = 0;
  iVar5 = *(int *)(unaff_RBP + 0xd8);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0xd0));
      if (lVar1 == 0) {
LAB_18086cfda:
        if ((-1 < iVar4) && (iVar4 < iVar5)) {
          iVar2 = (iVar5 - iVar4) + -1;
          if (0 < iVar2) {
            lVar6 = *(longlong *)(unaff_RBP + 0xd0) + (longlong)iVar4 * 8;
                    // WARNING: Subroutine does not return
            memmove(lVar6,lVar6 + 8,(longlong)iVar2 << 3);
          }
          iVar5 = iVar5 + -1;
          *(int *)(unaff_RBP + 0xd8) = iVar5;
        }
      }
      else {
        lVar1 = lVar1 + 0x10;
        lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x2f0))((longlong *)*unaff_R14,lVar1,1);
        if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
          FUN_18084b240(lVar1,&stack0x00000028);
        }
        iVar5 = *(int *)(unaff_RBP + 0xd8);
        if (lVar3 == 0) goto LAB_18086cfda;
        if (((-1 < iVar4) && (iVar4 < iVar5)) &&
           ((iVar4 == 0 ||
            (iVar2 = memcmp(*(longlong *)(lVar6 + -8 + *(longlong *)(unaff_RBP + 0xd0)) + 0x10,
                            lVar3 + 0x10,0x10), iVar2 < 0)))) {
          if (iVar4 != iVar5 + -1) {
            lVar1 = *(longlong *)(lVar6 + 8 + *(longlong *)(unaff_RBP + 0xd0));
            iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
            if ((iVar2 < 0) || (iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10), -1 < iVar2))
            goto LAB_18086cfd2;
          }
          *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0xd0)) = lVar3;
          iVar5 = *(int *)(unaff_RBP + 0xd8);
        }
LAB_18086cfd2:
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      }
      unaff_R14 = puStackX_20;
    } while (iVar4 < iVar5);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18086cecc(void)
void FUN_18086cecc(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  undefined8 *unaff_R14;
  longlong lVar4;
  undefined8 *puStackX_20;
  ulonglong in_stack_00000050;
  
  lVar4 = 0;
  do {
    lVar1 = *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0xd0));
    if (lVar1 == 0) {
LAB_18086cfda:
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        iVar2 = (unaff_EDI - unaff_ESI) + -1;
        if (0 < iVar2) {
          lVar4 = *(longlong *)(unaff_RBP + 0xd0) + (longlong)unaff_ESI * 8;
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar4 + 8,(longlong)iVar2 << 3);
        }
        unaff_EDI = unaff_EDI + -1;
        *(int *)(unaff_RBP + 0xd8) = unaff_EDI;
      }
    }
    else {
      lVar1 = lVar1 + 0x10;
      lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x2f0))((longlong *)*unaff_R14,lVar1,1);
      if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18084b240(lVar1,&stack0x00000028);
      }
      unaff_EDI = *(int *)(unaff_RBP + 0xd8);
      if (lVar3 == 0) goto LAB_18086cfda;
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        if (unaff_ESI != 0) {
          iVar2 = memcmp(*(longlong *)(lVar4 + -8 + *(longlong *)(unaff_RBP + 0xd0)) + 0x10,
                         lVar3 + 0x10,0x10);
          if (-1 < iVar2) goto LAB_18086cfd2;
        }
        if (unaff_ESI == unaff_EDI + -1) {
LAB_18086cfc1:
          *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0xd0)) = lVar3;
          unaff_EDI = *(int *)(unaff_RBP + 0xd8);
        }
        else {
          lVar1 = *(longlong *)(lVar4 + 8 + *(longlong *)(unaff_RBP + 0xd0));
          iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
          if (-1 < iVar2) {
            iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10);
            if (iVar2 < 0) goto LAB_18086cfc1;
          }
        }
      }
LAB_18086cfd2:
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





// 函数: void FUN_18086d03f(void)
void FUN_18086d03f(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18086d04e(void)
void FUN_18086d04e(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18086d070(longlong param_1,undefined8 *param_2)
void FUN_18086d070(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  undefined8 *puStack_78;
  undefined1 auStack_70 [40];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  puStack_78 = param_2;
  lVar3 = (**(code **)(*(longlong *)*param_2 + 0xc0))((longlong *)*param_2,0);
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = *(int *)(param_1 + 200);
    if (0 < iVar6) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0xc0));
        if (lVar1 == 0) {
LAB_18086d1da:
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            iVar2 = (iVar6 - iVar5) + -1;
            if (0 < iVar2) {
              lVar3 = *(longlong *)(param_1 + 0xc0) + (longlong)iVar5 * 8;
                    // WARNING: Subroutine does not return
              memmove(lVar3,lVar3 + 8,(longlong)iVar2 << 3);
            }
            iVar6 = iVar6 + -1;
            *(int *)(param_1 + 200) = iVar6;
          }
        }
        else {
          lVar1 = lVar1 + 0x10;
          lVar4 = (**(code **)(*(longlong *)*param_2 + 0x2f8))((longlong *)*param_2,lVar1,1);
          if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
            FUN_18084b240(lVar1,auStack_70);
          }
          iVar6 = *(int *)(param_1 + 200);
          if (lVar4 == 0) goto LAB_18086d1da;
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            if (iVar5 != 0) {
              iVar2 = memcmp(*(longlong *)(lVar3 + -8 + *(longlong *)(param_1 + 0xc0)) + 0x10,
                             lVar4 + 0x10,0x10);
              if (-1 < iVar2) goto LAB_18086d1d2;
            }
            if (iVar5 == iVar6 + -1) {
LAB_18086d1c1:
              *(longlong *)(lVar3 + *(longlong *)(param_1 + 0xc0)) = lVar4;
              iVar6 = *(int *)(param_1 + 200);
            }
            else {
              lVar1 = *(longlong *)(lVar3 + 8 + *(longlong *)(param_1 + 0xc0));
              iVar2 = memcmp(lVar1 + 0x10,lVar4 + 0x10,0x10);
              if (-1 < iVar2) {
                iVar2 = memcmp(lVar4 + 0x10,lVar1 + 0x10,0x10);
                if (iVar2 < 0) goto LAB_18086d1c1;
              }
            }
          }
LAB_18086d1d2:
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





// 函数: void FUN_18086d0b2(void)
void FUN_18086d0b2(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RBP;
  int iVar4;
  int iVar5;
  undefined8 *unaff_R14;
  longlong lVar6;
  undefined8 *puStackX_20;
  ulonglong in_stack_00000050;
  
  iVar4 = 0;
  iVar5 = *(int *)(unaff_RBP + 200);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0xc0));
      if (lVar1 == 0) {
LAB_18086d1da:
        if ((-1 < iVar4) && (iVar4 < iVar5)) {
          iVar2 = (iVar5 - iVar4) + -1;
          if (0 < iVar2) {
            lVar6 = *(longlong *)(unaff_RBP + 0xc0) + (longlong)iVar4 * 8;
                    // WARNING: Subroutine does not return
            memmove(lVar6,lVar6 + 8,(longlong)iVar2 << 3);
          }
          iVar5 = iVar5 + -1;
          *(int *)(unaff_RBP + 200) = iVar5;
        }
      }
      else {
        lVar1 = lVar1 + 0x10;
        lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x2f8))((longlong *)*unaff_R14,lVar1,1);
        if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
          FUN_18084b240(lVar1,&stack0x00000028);
        }
        iVar5 = *(int *)(unaff_RBP + 200);
        if (lVar3 == 0) goto LAB_18086d1da;
        if (((-1 < iVar4) && (iVar4 < iVar5)) &&
           ((iVar4 == 0 ||
            (iVar2 = memcmp(*(longlong *)(lVar6 + -8 + *(longlong *)(unaff_RBP + 0xc0)) + 0x10,
                            lVar3 + 0x10,0x10), iVar2 < 0)))) {
          if (iVar4 != iVar5 + -1) {
            lVar1 = *(longlong *)(lVar6 + 8 + *(longlong *)(unaff_RBP + 0xc0));
            iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
            if ((iVar2 < 0) || (iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10), -1 < iVar2))
            goto LAB_18086d1d2;
          }
          *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0xc0)) = lVar3;
          iVar5 = *(int *)(unaff_RBP + 200);
        }
LAB_18086d1d2:
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      }
      unaff_R14 = puStackX_20;
    } while (iVar4 < iVar5);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18086d0cf(void)
void FUN_18086d0cf(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  undefined8 *unaff_R14;
  longlong lVar4;
  undefined8 *puStackX_20;
  ulonglong in_stack_00000050;
  
  lVar4 = 0;
  do {
    lVar1 = *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0xc0));
    if (lVar1 == 0) {
LAB_18086d1da:
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        iVar2 = (unaff_EDI - unaff_ESI) + -1;
        if (0 < iVar2) {
          lVar4 = *(longlong *)(unaff_RBP + 0xc0) + (longlong)unaff_ESI * 8;
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar4 + 8,(longlong)iVar2 << 3);
        }
        unaff_EDI = unaff_EDI + -1;
        *(int *)(unaff_RBP + 200) = unaff_EDI;
      }
    }
    else {
      lVar1 = lVar1 + 0x10;
      lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x2f8))((longlong *)*unaff_R14,lVar1,1);
      if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18084b240(lVar1,&stack0x00000028);
      }
      unaff_EDI = *(int *)(unaff_RBP + 200);
      if (lVar3 == 0) goto LAB_18086d1da;
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        if (unaff_ESI != 0) {
          iVar2 = memcmp(*(longlong *)(lVar4 + -8 + *(longlong *)(unaff_RBP + 0xc0)) + 0x10,
                         lVar3 + 0x10,0x10);
          if (-1 < iVar2) goto LAB_18086d1d2;
        }
        if (unaff_ESI == unaff_EDI + -1) {
LAB_18086d1c1:
          *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0xc0)) = lVar3;
          unaff_EDI = *(int *)(unaff_RBP + 200);
        }
        else {
          lVar1 = *(longlong *)(lVar4 + 8 + *(longlong *)(unaff_RBP + 0xc0));
          iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
          if (-1 < iVar2) {
            iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10);
            if (iVar2 < 0) goto LAB_18086d1c1;
          }
        }
      }
LAB_18086d1d2:
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





// 函数: void FUN_18086d23f(void)
void FUN_18086d23f(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18086d24e(void)
void FUN_18086d24e(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18086d270(longlong param_1,undefined8 *param_2)
void FUN_18086d270(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  undefined8 *puStack_78;
  undefined1 auStack_70 [40];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  puStack_78 = param_2;
  lVar3 = (**(code **)(*(longlong *)*param_2 + 0x78))((longlong *)*param_2,0);
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = *(int *)(param_1 + 0xf8);
    if (0 < iVar6) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0xf0));
        if (lVar1 == 0) {
LAB_18086d3da:
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            iVar2 = (iVar6 - iVar5) + -1;
            if (0 < iVar2) {
              lVar3 = *(longlong *)(param_1 + 0xf0) + (longlong)iVar5 * 8;
                    // WARNING: Subroutine does not return
              memmove(lVar3,lVar3 + 8,(longlong)iVar2 << 3);
            }
            iVar6 = iVar6 + -1;
            *(int *)(param_1 + 0xf8) = iVar6;
          }
        }
        else {
          lVar1 = lVar1 + 0x10;
          lVar4 = (**(code **)(*(longlong *)*param_2 + 0x2c8))((longlong *)*param_2,lVar1,1);
          if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
            FUN_18084b240(lVar1,auStack_70);
          }
          iVar6 = *(int *)(param_1 + 0xf8);
          if (lVar4 == 0) goto LAB_18086d3da;
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            if (iVar5 != 0) {
              iVar2 = memcmp(*(longlong *)(lVar3 + -8 + *(longlong *)(param_1 + 0xf0)) + 0x10,
                             lVar4 + 0x10,0x10);
              if (-1 < iVar2) goto LAB_18086d3d2;
            }
            if (iVar5 == iVar6 + -1) {
LAB_18086d3c1:
              *(longlong *)(lVar3 + *(longlong *)(param_1 + 0xf0)) = lVar4;
              iVar6 = *(int *)(param_1 + 0xf8);
            }
            else {
              lVar1 = *(longlong *)(lVar3 + 8 + *(longlong *)(param_1 + 0xf0));
              iVar2 = memcmp(lVar1 + 0x10,lVar4 + 0x10,0x10);
              if (-1 < iVar2) {
                iVar2 = memcmp(lVar4 + 0x10,lVar1 + 0x10,0x10);
                if (iVar2 < 0) goto LAB_18086d3c1;
              }
            }
          }
LAB_18086d3d2:
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





// 函数: void FUN_18086d2af(void)
void FUN_18086d2af(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RBP;
  int iVar4;
  int iVar5;
  undefined8 *unaff_R14;
  longlong lVar6;
  undefined8 *puStackX_20;
  ulonglong in_stack_00000050;
  
  iVar4 = 0;
  iVar5 = *(int *)(unaff_RBP + 0xf8);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0xf0));
      if (lVar1 == 0) {
LAB_18086d3da:
        if ((-1 < iVar4) && (iVar4 < iVar5)) {
          iVar2 = (iVar5 - iVar4) + -1;
          if (0 < iVar2) {
            lVar6 = *(longlong *)(unaff_RBP + 0xf0) + (longlong)iVar4 * 8;
                    // WARNING: Subroutine does not return
            memmove(lVar6,lVar6 + 8,(longlong)iVar2 << 3);
          }
          iVar5 = iVar5 + -1;
          *(int *)(unaff_RBP + 0xf8) = iVar5;
        }
      }
      else {
        lVar1 = lVar1 + 0x10;
        lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x2c8))((longlong *)*unaff_R14,lVar1,1);
        if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
          FUN_18084b240(lVar1,&stack0x00000028);
        }
        iVar5 = *(int *)(unaff_RBP + 0xf8);
        if (lVar3 == 0) goto LAB_18086d3da;
        if (((-1 < iVar4) && (iVar4 < iVar5)) &&
           ((iVar4 == 0 ||
            (iVar2 = memcmp(*(longlong *)(lVar6 + -8 + *(longlong *)(unaff_RBP + 0xf0)) + 0x10,
                            lVar3 + 0x10,0x10), iVar2 < 0)))) {
          if (iVar4 != iVar5 + -1) {
            lVar1 = *(longlong *)(lVar6 + 8 + *(longlong *)(unaff_RBP + 0xf0));
            iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
            if ((iVar2 < 0) || (iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10), -1 < iVar2))
            goto LAB_18086d3d2;
          }
          *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0xf0)) = lVar3;
          iVar5 = *(int *)(unaff_RBP + 0xf8);
        }
LAB_18086d3d2:
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      }
      unaff_R14 = puStackX_20;
    } while (iVar4 < iVar5);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18086d2cc(void)
void FUN_18086d2cc(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  undefined8 *unaff_R14;
  longlong lVar4;
  undefined8 *puStackX_20;
  ulonglong in_stack_00000050;
  
  lVar4 = 0;
  do {
    lVar1 = *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0xf0));
    if (lVar1 == 0) {
LAB_18086d3da:
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        iVar2 = (unaff_EDI - unaff_ESI) + -1;
        if (0 < iVar2) {
          lVar4 = *(longlong *)(unaff_RBP + 0xf0) + (longlong)unaff_ESI * 8;
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar4 + 8,(longlong)iVar2 << 3);
        }
        unaff_EDI = unaff_EDI + -1;
        *(int *)(unaff_RBP + 0xf8) = unaff_EDI;
      }
    }
    else {
      lVar1 = lVar1 + 0x10;
      lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x2c8))((longlong *)*unaff_R14,lVar1,1);
      if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18084b240(lVar1,&stack0x00000028);
      }
      unaff_EDI = *(int *)(unaff_RBP + 0xf8);
      if (lVar3 == 0) goto LAB_18086d3da;
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        if (unaff_ESI != 0) {
          iVar2 = memcmp(*(longlong *)(lVar4 + -8 + *(longlong *)(unaff_RBP + 0xf0)) + 0x10,
                         lVar3 + 0x10,0x10);
          if (-1 < iVar2) goto LAB_18086d3d2;
        }
        if (unaff_ESI == unaff_EDI + -1) {
LAB_18086d3c1:
          *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0xf0)) = lVar3;
          unaff_EDI = *(int *)(unaff_RBP + 0xf8);
        }
        else {
          lVar1 = *(longlong *)(lVar4 + 8 + *(longlong *)(unaff_RBP + 0xf0));
          iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
          if (-1 < iVar2) {
            iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10);
            if (iVar2 < 0) goto LAB_18086d3c1;
          }
        }
      }
LAB_18086d3d2:
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





// 函数: void FUN_18086d43f(void)
void FUN_18086d43f(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}





