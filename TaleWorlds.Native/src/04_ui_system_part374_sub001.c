#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part374_sub001.c - 20 个函数

#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part374.c - 20 个函数


// 函数: void FUN_18086bc6e(void)
void FUN_18086bc6e(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18086bc90(longlong param_1,undefined8 *param_2)
void FUN_18086bc90(longlong param_1,undefined8 *param_2)

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
  lVar3 = (**(code **)(*(longlong *)*param_2 + 0x48))((longlong *)*param_2,0);
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = *(int *)(param_1 + 0x1b8);
    if (0 < iVar6) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x1b0));
        if (lVar1 == 0) {
LAB_18086bdfa:
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            iVar2 = (iVar6 - iVar5) + -1;
            if (0 < iVar2) {
              lVar3 = *(longlong *)(param_1 + 0x1b0) + (longlong)iVar5 * 8;
                    // WARNING: Subroutine does not return
              memmove(lVar3,lVar3 + 8,(longlong)iVar2 << 3);
            }
            iVar6 = iVar6 + -1;
            *(int *)(param_1 + 0x1b8) = iVar6;
          }
        }
        else {
          lVar1 = lVar1 + 0x10;
          lVar4 = (**(code **)(*(longlong *)*param_2 + 0x278))((longlong *)*param_2,lVar1,1);
          if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
            FUN_18084b240(lVar1,auStack_70);
          }
          iVar6 = *(int *)(param_1 + 0x1b8);
          if (lVar4 == 0) goto LAB_18086bdfa;
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            if (iVar5 != 0) {
              iVar2 = memcmp(*(longlong *)(lVar3 + -8 + *(longlong *)(param_1 + 0x1b0)) + 0x10,
                             lVar4 + 0x10,0x10);
              if (-1 < iVar2) goto LAB_18086bdf2;
            }
            if (iVar5 == iVar6 + -1) {
LAB_18086bde1:
              *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x1b0)) = lVar4;
              iVar6 = *(int *)(param_1 + 0x1b8);
            }
            else {
              lVar1 = *(longlong *)(lVar3 + 8 + *(longlong *)(param_1 + 0x1b0));
              iVar2 = memcmp(lVar1 + 0x10,lVar4 + 0x10,0x10);
              if (-1 < iVar2) {
                iVar2 = memcmp(lVar4 + 0x10,lVar1 + 0x10,0x10);
                if (iVar2 < 0) goto LAB_18086bde1;
              }
            }
          }
LAB_18086bdf2:
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






// 函数: void FUN_18086bccf(void)
void FUN_18086bccf(void)

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
  iVar5 = *(int *)(unaff_RBP + 0x1b8);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0x1b0));
      if (lVar1 == 0) {
LAB_18086bdfa:
        if ((-1 < iVar4) && (iVar4 < iVar5)) {
          iVar2 = (iVar5 - iVar4) + -1;
          if (0 < iVar2) {
            lVar6 = *(longlong *)(unaff_RBP + 0x1b0) + (longlong)iVar4 * 8;
                    // WARNING: Subroutine does not return
            memmove(lVar6,lVar6 + 8,(longlong)iVar2 << 3);
          }
          iVar5 = iVar5 + -1;
          *(int *)(unaff_RBP + 0x1b8) = iVar5;
        }
      }
      else {
        lVar1 = lVar1 + 0x10;
        lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x278))((longlong *)*unaff_R14,lVar1,1);
        if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
          FUN_18084b240(lVar1,&stack0x00000028);
        }
        iVar5 = *(int *)(unaff_RBP + 0x1b8);
        if (lVar3 == 0) goto LAB_18086bdfa;
        if (((-1 < iVar4) && (iVar4 < iVar5)) &&
           ((iVar4 == 0 ||
            (iVar2 = memcmp(*(longlong *)(lVar6 + -8 + *(longlong *)(unaff_RBP + 0x1b0)) + 0x10,
                            lVar3 + 0x10,0x10), iVar2 < 0)))) {
          if (iVar4 != iVar5 + -1) {
            lVar1 = *(longlong *)(lVar6 + 8 + *(longlong *)(unaff_RBP + 0x1b0));
            iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
            if ((iVar2 < 0) || (iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10), -1 < iVar2))
            goto LAB_18086bdf2;
          }
          *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0x1b0)) = lVar3;
          iVar5 = *(int *)(unaff_RBP + 0x1b8);
        }
LAB_18086bdf2:
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      }
      unaff_R14 = puStackX_20;
    } while (iVar4 < iVar5);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_18086bcec(void)
void FUN_18086bcec(void)

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
    lVar1 = *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0x1b0));
    if (lVar1 == 0) {
LAB_18086bdfa:
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        iVar2 = (unaff_EDI - unaff_ESI) + -1;
        if (0 < iVar2) {
          lVar4 = *(longlong *)(unaff_RBP + 0x1b0) + (longlong)unaff_ESI * 8;
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar4 + 8,(longlong)iVar2 << 3);
        }
        unaff_EDI = unaff_EDI + -1;
        *(int *)(unaff_RBP + 0x1b8) = unaff_EDI;
      }
    }
    else {
      lVar1 = lVar1 + 0x10;
      lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x278))((longlong *)*unaff_R14,lVar1,1);
      if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18084b240(lVar1,&stack0x00000028);
      }
      unaff_EDI = *(int *)(unaff_RBP + 0x1b8);
      if (lVar3 == 0) goto LAB_18086bdfa;
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        if (unaff_ESI != 0) {
          iVar2 = memcmp(*(longlong *)(lVar4 + -8 + *(longlong *)(unaff_RBP + 0x1b0)) + 0x10,
                         lVar3 + 0x10,0x10);
          if (-1 < iVar2) goto LAB_18086bdf2;
        }
        if (unaff_ESI == unaff_EDI + -1) {
LAB_18086bde1:
          *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0x1b0)) = lVar3;
          unaff_EDI = *(int *)(unaff_RBP + 0x1b8);
        }
        else {
          lVar1 = *(longlong *)(lVar4 + 8 + *(longlong *)(unaff_RBP + 0x1b0));
          iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
          if (-1 < iVar2) {
            iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10);
            if (iVar2 < 0) goto LAB_18086bde1;
          }
        }
      }
LAB_18086bdf2:
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






// 函数: void FUN_18086be5f(void)
void FUN_18086be5f(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_18086be6e(void)
void FUN_18086be6e(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18086be90(longlong param_1,undefined8 *param_2)
void FUN_18086be90(longlong param_1,undefined8 *param_2)

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
  lVar3 = (**(code **)(*(longlong *)*param_2 + 0xd8))((longlong *)*param_2,0);
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = *(int *)(param_1 + 0x98);
    if (0 < iVar6) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x90));
        if (lVar1 == 0) {
LAB_18086bffa:
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            iVar2 = (iVar6 - iVar5) + -1;
            if (0 < iVar2) {
              lVar3 = *(longlong *)(param_1 + 0x90) + (longlong)iVar5 * 8;
                    // WARNING: Subroutine does not return
              memmove(lVar3,lVar3 + 8,(longlong)iVar2 << 3);
            }
            iVar6 = iVar6 + -1;
            *(int *)(param_1 + 0x98) = iVar6;
          }
        }
        else {
          lVar1 = lVar1 + 0x10;
          lVar4 = (**(code **)(*(longlong *)*param_2 + 0x310))((longlong *)*param_2,lVar1,1);
          if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
            FUN_18084b240(lVar1,auStack_70);
          }
          iVar6 = *(int *)(param_1 + 0x98);
          if (lVar4 == 0) goto LAB_18086bffa;
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            if (iVar5 != 0) {
              iVar2 = memcmp(*(longlong *)(lVar3 + -8 + *(longlong *)(param_1 + 0x90)) + 0x10,
                             lVar4 + 0x10,0x10);
              if (-1 < iVar2) goto LAB_18086bff2;
            }
            if (iVar5 == iVar6 + -1) {
LAB_18086bfe1:
              *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x90)) = lVar4;
              iVar6 = *(int *)(param_1 + 0x98);
            }
            else {
              lVar1 = *(longlong *)(lVar3 + 8 + *(longlong *)(param_1 + 0x90));
              iVar2 = memcmp(lVar1 + 0x10,lVar4 + 0x10,0x10);
              if (-1 < iVar2) {
                iVar2 = memcmp(lVar4 + 0x10,lVar1 + 0x10,0x10);
                if (iVar2 < 0) goto LAB_18086bfe1;
              }
            }
          }
LAB_18086bff2:
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






// 函数: void FUN_18086bed2(void)
void FUN_18086bed2(void)

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
  iVar5 = *(int *)(unaff_RBP + 0x98);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0x90));
      if (lVar1 == 0) {
LAB_18086bffa:
        if ((-1 < iVar4) && (iVar4 < iVar5)) {
          iVar2 = (iVar5 - iVar4) + -1;
          if (0 < iVar2) {
            lVar6 = *(longlong *)(unaff_RBP + 0x90) + (longlong)iVar4 * 8;
                    // WARNING: Subroutine does not return
            memmove(lVar6,lVar6 + 8,(longlong)iVar2 << 3);
          }
          iVar5 = iVar5 + -1;
          *(int *)(unaff_RBP + 0x98) = iVar5;
        }
      }
      else {
        lVar1 = lVar1 + 0x10;
        lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x310))((longlong *)*unaff_R14,lVar1,1);
        if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
          FUN_18084b240(lVar1,&stack0x00000028);
        }
        iVar5 = *(int *)(unaff_RBP + 0x98);
        if (lVar3 == 0) goto LAB_18086bffa;
        if (((-1 < iVar4) && (iVar4 < iVar5)) &&
           ((iVar4 == 0 ||
            (iVar2 = memcmp(*(longlong *)(lVar6 + -8 + *(longlong *)(unaff_RBP + 0x90)) + 0x10,
                            lVar3 + 0x10,0x10), iVar2 < 0)))) {
          if (iVar4 != iVar5 + -1) {
            lVar1 = *(longlong *)(lVar6 + 8 + *(longlong *)(unaff_RBP + 0x90));
            iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
            if ((iVar2 < 0) || (iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10), -1 < iVar2))
            goto LAB_18086bff2;
          }
          *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0x90)) = lVar3;
          iVar5 = *(int *)(unaff_RBP + 0x98);
        }
LAB_18086bff2:
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      }
      unaff_R14 = puStackX_20;
    } while (iVar4 < iVar5);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_18086beef(void)
void FUN_18086beef(void)

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
    lVar1 = *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0x90));
    if (lVar1 == 0) {
LAB_18086bffa:
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        iVar2 = (unaff_EDI - unaff_ESI) + -1;
        if (0 < iVar2) {
          lVar4 = *(longlong *)(unaff_RBP + 0x90) + (longlong)unaff_ESI * 8;
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar4 + 8,(longlong)iVar2 << 3);
        }
        unaff_EDI = unaff_EDI + -1;
        *(int *)(unaff_RBP + 0x98) = unaff_EDI;
      }
    }
    else {
      lVar1 = lVar1 + 0x10;
      lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x310))((longlong *)*unaff_R14,lVar1,1);
      if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18084b240(lVar1,&stack0x00000028);
      }
      unaff_EDI = *(int *)(unaff_RBP + 0x98);
      if (lVar3 == 0) goto LAB_18086bffa;
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        if (unaff_ESI != 0) {
          iVar2 = memcmp(*(longlong *)(lVar4 + -8 + *(longlong *)(unaff_RBP + 0x90)) + 0x10,
                         lVar3 + 0x10,0x10);
          if (-1 < iVar2) goto LAB_18086bff2;
        }
        if (unaff_ESI == unaff_EDI + -1) {
LAB_18086bfe1:
          *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0x90)) = lVar3;
          unaff_EDI = *(int *)(unaff_RBP + 0x98);
        }
        else {
          lVar1 = *(longlong *)(lVar4 + 8 + *(longlong *)(unaff_RBP + 0x90));
          iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
          if (-1 < iVar2) {
            iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10);
            if (iVar2 < 0) goto LAB_18086bfe1;
          }
        }
      }
LAB_18086bff2:
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






// 函数: void FUN_18086c05f(void)
void FUN_18086c05f(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_18086c06e(void)
void FUN_18086c06e(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18086c090(longlong param_1,undefined8 *param_2)
void FUN_18086c090(longlong param_1,undefined8 *param_2)

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
  lVar3 = (**(code **)(*(longlong *)*param_2 + 0xb8))((longlong *)*param_2,0);
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = *(int *)(param_1 + 0x178);
    if (0 < iVar6) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x170));
        if (lVar1 == 0) {
LAB_18086c1fa:
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            iVar2 = (iVar6 - iVar5) + -1;
            if (0 < iVar2) {
              lVar3 = *(longlong *)(param_1 + 0x170) + (longlong)iVar5 * 8;
                    // WARNING: Subroutine does not return
              memmove(lVar3,lVar3 + 8,(longlong)iVar2 << 3);
            }
            iVar6 = iVar6 + -1;
            *(int *)(param_1 + 0x178) = iVar6;
          }
        }
        else {
          lVar1 = lVar1 + 0x10;
          lVar4 = (**(code **)(*(longlong *)*param_2 + 0x2b0))((longlong *)*param_2,lVar1,1);
          if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
            FUN_18084b240(lVar1,auStack_70);
          }
          iVar6 = *(int *)(param_1 + 0x178);
          if (lVar4 == 0) goto LAB_18086c1fa;
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            if (iVar5 != 0) {
              iVar2 = memcmp(*(longlong *)(lVar3 + -8 + *(longlong *)(param_1 + 0x170)) + 0x10,
                             lVar4 + 0x10,0x10);
              if (-1 < iVar2) goto LAB_18086c1f2;
            }
            if (iVar5 == iVar6 + -1) {
LAB_18086c1e1:
              *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x170)) = lVar4;
              iVar6 = *(int *)(param_1 + 0x178);
            }
            else {
              lVar1 = *(longlong *)(lVar3 + 8 + *(longlong *)(param_1 + 0x170));
              iVar2 = memcmp(lVar1 + 0x10,lVar4 + 0x10,0x10);
              if (-1 < iVar2) {
                iVar2 = memcmp(lVar4 + 0x10,lVar1 + 0x10,0x10);
                if (iVar2 < 0) goto LAB_18086c1e1;
              }
            }
          }
LAB_18086c1f2:
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






// 函数: void FUN_18086c0d2(void)
void FUN_18086c0d2(void)

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
  iVar5 = *(int *)(unaff_RBP + 0x178);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0x170));
      if (lVar1 == 0) {
LAB_18086c1fa:
        if ((-1 < iVar4) && (iVar4 < iVar5)) {
          iVar2 = (iVar5 - iVar4) + -1;
          if (0 < iVar2) {
            lVar6 = *(longlong *)(unaff_RBP + 0x170) + (longlong)iVar4 * 8;
                    // WARNING: Subroutine does not return
            memmove(lVar6,lVar6 + 8,(longlong)iVar2 << 3);
          }
          iVar5 = iVar5 + -1;
          *(int *)(unaff_RBP + 0x178) = iVar5;
        }
      }
      else {
        lVar1 = lVar1 + 0x10;
        lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x2b0))((longlong *)*unaff_R14,lVar1,1);
        if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
          FUN_18084b240(lVar1,&stack0x00000028);
        }
        iVar5 = *(int *)(unaff_RBP + 0x178);
        if (lVar3 == 0) goto LAB_18086c1fa;
        if (((-1 < iVar4) && (iVar4 < iVar5)) &&
           ((iVar4 == 0 ||
            (iVar2 = memcmp(*(longlong *)(lVar6 + -8 + *(longlong *)(unaff_RBP + 0x170)) + 0x10,
                            lVar3 + 0x10,0x10), iVar2 < 0)))) {
          if (iVar4 != iVar5 + -1) {
            lVar1 = *(longlong *)(lVar6 + 8 + *(longlong *)(unaff_RBP + 0x170));
            iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
            if ((iVar2 < 0) || (iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10), -1 < iVar2))
            goto LAB_18086c1f2;
          }
          *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0x170)) = lVar3;
          iVar5 = *(int *)(unaff_RBP + 0x178);
        }
LAB_18086c1f2:
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      }
      unaff_R14 = puStackX_20;
    } while (iVar4 < iVar5);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_18086c0ef(void)
void FUN_18086c0ef(void)

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
    lVar1 = *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0x170));
    if (lVar1 == 0) {
LAB_18086c1fa:
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        iVar2 = (unaff_EDI - unaff_ESI) + -1;
        if (0 < iVar2) {
          lVar4 = *(longlong *)(unaff_RBP + 0x170) + (longlong)unaff_ESI * 8;
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar4 + 8,(longlong)iVar2 << 3);
        }
        unaff_EDI = unaff_EDI + -1;
        *(int *)(unaff_RBP + 0x178) = unaff_EDI;
      }
    }
    else {
      lVar1 = lVar1 + 0x10;
      lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x2b0))((longlong *)*unaff_R14,lVar1,1);
      if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18084b240(lVar1,&stack0x00000028);
      }
      unaff_EDI = *(int *)(unaff_RBP + 0x178);
      if (lVar3 == 0) goto LAB_18086c1fa;
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        if (unaff_ESI != 0) {
          iVar2 = memcmp(*(longlong *)(lVar4 + -8 + *(longlong *)(unaff_RBP + 0x170)) + 0x10,
                         lVar3 + 0x10,0x10);
          if (-1 < iVar2) goto LAB_18086c1f2;
        }
        if (unaff_ESI == unaff_EDI + -1) {
LAB_18086c1e1:
          *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0x170)) = lVar3;
          unaff_EDI = *(int *)(unaff_RBP + 0x178);
        }
        else {
          lVar1 = *(longlong *)(lVar4 + 8 + *(longlong *)(unaff_RBP + 0x170));
          iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
          if (-1 < iVar2) {
            iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10);
            if (iVar2 < 0) goto LAB_18086c1e1;
          }
        }
      }
LAB_18086c1f2:
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






// 函数: void FUN_18086c25f(void)
void FUN_18086c25f(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_18086c26e(void)
void FUN_18086c26e(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18086c290(longlong param_1,undefined8 *param_2)
void FUN_18086c290(longlong param_1,undefined8 *param_2)

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
  lVar3 = (**(code **)(*(longlong *)*param_2 + 0xe8))((longlong *)*param_2,0);
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = *(int *)(param_1 + 0x58);
    if (0 < iVar6) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x50));
        if (lVar1 == 0) {
LAB_18086c3e0:
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            iVar2 = (iVar6 - iVar5) + -1;
            if (0 < iVar2) {
              lVar3 = *(longlong *)(param_1 + 0x50) + (longlong)iVar5 * 8;
                    // WARNING: Subroutine does not return
              memmove(lVar3,lVar3 + 8,(longlong)iVar2 << 3);
            }
            iVar6 = iVar6 + -1;
            *(int *)(param_1 + 0x58) = iVar6;
          }
        }
        else {
          lVar1 = lVar1 + 0x10;
          lVar4 = (**(code **)(*(longlong *)*param_2 + 0x328))((longlong *)*param_2,lVar1,1);
          if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
            FUN_18084b240(lVar1,auStack_70);
          }
          iVar6 = *(int *)(param_1 + 0x58);
          if (lVar4 == 0) goto LAB_18086c3e0;
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            if (iVar5 != 0) {
              iVar2 = memcmp(*(longlong *)(lVar3 + -8 + *(longlong *)(param_1 + 0x50)) + 0x10,
                             lVar4 + 0x10,0x10);
              if (-1 < iVar2) goto LAB_18086c3d8;
            }
            if (iVar5 == iVar6 + -1) {
LAB_18086c3cd:
              *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x50)) = lVar4;
              iVar6 = *(int *)(param_1 + 0x58);
            }
            else {
              lVar1 = *(longlong *)(lVar3 + 8 + *(longlong *)(param_1 + 0x50));
              iVar2 = memcmp(lVar1 + 0x10,lVar4 + 0x10,0x10);
              if (-1 < iVar2) {
                iVar2 = memcmp(lVar4 + 0x10,lVar1 + 0x10,0x10);
                if (iVar2 < 0) goto LAB_18086c3cd;
              }
            }
          }
LAB_18086c3d8:
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






// 函数: void FUN_18086c2d2(void)
void FUN_18086c2d2(void)

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
  iVar5 = *(int *)(unaff_RBP + 0x58);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0x50));
      if (lVar1 == 0) {
LAB_18086c3e0:
        if ((-1 < iVar4) && (iVar4 < iVar5)) {
          iVar2 = (iVar5 - iVar4) + -1;
          if (0 < iVar2) {
            lVar6 = *(longlong *)(unaff_RBP + 0x50) + (longlong)iVar4 * 8;
                    // WARNING: Subroutine does not return
            memmove(lVar6,lVar6 + 8,(longlong)iVar2 << 3);
          }
          iVar5 = iVar5 + -1;
          *(int *)(unaff_RBP + 0x58) = iVar5;
        }
      }
      else {
        lVar1 = lVar1 + 0x10;
        lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x328))((longlong *)*unaff_R14,lVar1,1);
        if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
          FUN_18084b240(lVar1,&stack0x00000028);
        }
        iVar5 = *(int *)(unaff_RBP + 0x58);
        if (lVar3 == 0) goto LAB_18086c3e0;
        if (((-1 < iVar4) && (iVar4 < iVar5)) &&
           ((iVar4 == 0 ||
            (iVar2 = memcmp(*(longlong *)(lVar6 + -8 + *(longlong *)(unaff_RBP + 0x50)) + 0x10,
                            lVar3 + 0x10,0x10), iVar2 < 0)))) {
          if (iVar4 != iVar5 + -1) {
            lVar1 = *(longlong *)(lVar6 + 8 + *(longlong *)(unaff_RBP + 0x50));
            iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
            if ((iVar2 < 0) || (iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10), -1 < iVar2))
            goto LAB_18086c3d8;
          }
          *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0x50)) = lVar3;
          iVar5 = *(int *)(unaff_RBP + 0x58);
        }
LAB_18086c3d8:
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      }
      unaff_R14 = puStackX_20;
    } while (iVar4 < iVar5);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_18086c2ec(void)
void FUN_18086c2ec(void)

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
    lVar1 = *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0x50));
    if (lVar1 == 0) {
LAB_18086c3e0:
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        iVar2 = (unaff_EDI - unaff_ESI) + -1;
        if (0 < iVar2) {
          lVar4 = *(longlong *)(unaff_RBP + 0x50) + (longlong)unaff_ESI * 8;
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar4 + 8,(longlong)iVar2 << 3);
        }
        unaff_EDI = unaff_EDI + -1;
        *(int *)(unaff_RBP + 0x58) = unaff_EDI;
      }
    }
    else {
      lVar1 = lVar1 + 0x10;
      lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x328))((longlong *)*unaff_R14,lVar1,1);
      if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18084b240(lVar1,&stack0x00000028);
      }
      unaff_EDI = *(int *)(unaff_RBP + 0x58);
      if (lVar3 == 0) goto LAB_18086c3e0;
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        if (unaff_ESI != 0) {
          iVar2 = memcmp(*(longlong *)(lVar4 + -8 + *(longlong *)(unaff_RBP + 0x50)) + 0x10,
                         lVar3 + 0x10,0x10);
          if (-1 < iVar2) goto LAB_18086c3d8;
        }
        if (unaff_ESI == unaff_EDI + -1) {
LAB_18086c3cd:
          *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0x50)) = lVar3;
          unaff_EDI = *(int *)(unaff_RBP + 0x58);
        }
        else {
          lVar1 = *(longlong *)(lVar4 + 8 + *(longlong *)(unaff_RBP + 0x50));
          iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
          if (-1 < iVar2) {
            iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10);
            if (iVar2 < 0) goto LAB_18086c3cd;
          }
        }
      }
LAB_18086c3d8:
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






