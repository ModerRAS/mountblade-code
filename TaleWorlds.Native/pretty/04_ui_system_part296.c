#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part296.c - 9 个函数

// 函数: void FUN_180830338(void)
void FUN_180830338(void)

{
                    // WARNING: Subroutine does not return
  FUN_1807c41d0();
}



int FUN_180830370(void)

{
  longlong lVar1;
  longlong unaff_RSI;
  int unaff_R14D;
  int iVar2;
  undefined8 unaff_R15;
  
  iVar2 = (int)unaff_R15;
  if (*(int *)(unaff_RSI + 0x68) != 0) {
    lVar1 = FUN_1807c4260();
    *(longlong *)(unaff_RSI + 0x58) = lVar1;
    *(int *)(unaff_RSI + 100) = *(int *)(unaff_RSI + 100) + *(int *)(unaff_RSI + 0x68);
    *(int *)(unaff_RSI + 0x68) = iVar2;
    unaff_R14D = -0x8b;
    if (lVar1 != 0) {
      unaff_R14D = iVar2;
    }
  }
  *(int *)(unaff_RSI + 0x60) = iVar2;
  *(undefined8 *)(unaff_RSI + 0x70) = unaff_R15;
  if (unaff_R14D != 0) {
    return unaff_R14D;
  }
  if (*(longlong *)(unaff_RSI + 0x58) != 0) {
                    // WARNING: Subroutine does not return
    FUN_1807c41d0();
  }
                    // WARNING: Subroutine does not return
  memset();
}



int FUN_18083037c(void)

{
  longlong lVar1;
  longlong unaff_RSI;
  int iVar2;
  int iVar3;
  undefined8 unaff_R15;
  
  lVar1 = FUN_1807c4260();
  *(longlong *)(unaff_RSI + 0x58) = lVar1;
  *(int *)(unaff_RSI + 100) = *(int *)(unaff_RSI + 100) + *(int *)(unaff_RSI + 0x68);
  iVar3 = (int)unaff_R15;
  *(int *)(unaff_RSI + 0x68) = iVar3;
  iVar2 = -0x8b;
  if (lVar1 != 0) {
    iVar2 = iVar3;
  }
  *(int *)(unaff_RSI + 0x60) = iVar3;
  *(undefined8 *)(unaff_RSI + 0x70) = unaff_R15;
  if (iVar2 != 0) {
    return iVar2;
  }
  if (*(longlong *)(unaff_RSI + 0x58) != 0) {
                    // WARNING: Subroutine does not return
    FUN_1807c41d0();
  }
                    // WARNING: Subroutine does not return
  memset();
}



undefined4 FUN_1808303bf(void)

{
  undefined4 unaff_R14D;
  
  return unaff_R14D;
}





// 函数: void FUN_180830400(undefined8 param_1,undefined8 param_2,undefined8 param_3)
void FUN_180830400(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    // WARNING: Subroutine does not return
  memset(param_3,0,0x88);
}





// 函数: void FUN_180830440(undefined8 param_1,longlong *param_2)
void FUN_180830440(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int *piVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  uVar4 = 0;
  lVar1 = *param_2;
  uVar5 = uVar4;
  if (lVar1 != 0) {
    uVar5 = *(ulonglong *)(lVar1 + 0x20);
  }
  lVar2 = param_2[0xe];
  if (lVar2 != 0) {
    if (*(undefined8 **)(lVar2 + 8) != (undefined8 *)0x0) {
      FUN_18083dff0(param_1,**(undefined8 **)(lVar2 + 8));
                    // WARNING: Subroutine does not return
      FUN_1807c41d0(param_1,**(undefined8 **)(lVar2 + 8));
    }
    if (*(undefined8 **)(lVar2 + 0x10) != (undefined8 *)0x0) {
      FUN_18083dff0(param_1,**(undefined8 **)(lVar2 + 0x10));
                    // WARNING: Subroutine does not return
      FUN_1807c41d0(param_1,**(undefined8 **)(lVar2 + 0x10));
    }
    lVar3 = *(longlong *)(lVar2 + 0x20);
    if (lVar3 != 0) {
      if ((uVar5 != 0) && (0 < *(int *)(uVar5 + 0x10))) {
        piVar6 = (int *)(uVar5 + 0x520);
        uVar8 = uVar4;
        do {
          (**(code **)(*(longlong *)(&UNK_180980708 + (longlong)*piVar6 * 8) + 0x20))
                    (param_1,*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + uVar8));
          uVar7 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar7;
          piVar6 = piVar6 + 1;
          uVar8 = uVar8 + 8;
        } while ((int)uVar7 < *(int *)(uVar5 + 0x10));
        lVar3 = *(longlong *)(lVar2 + 0x20);
      }
                    // WARNING: Subroutine does not return
      FUN_1807c41d0(param_1,lVar3);
    }
    lVar3 = *(longlong *)(lVar2 + 0x28);
    if (lVar3 != 0) {
      if ((uVar5 != 0) && (0 < *(int *)(uVar5 + 0x14))) {
        piVar6 = (int *)(uVar5 + 0x820);
        uVar8 = uVar4;
        do {
          (**(code **)(*(longlong *)(&UNK_180980718 + (longlong)*piVar6 * 8) + 0x20))
                    (param_1,*(undefined8 *)(uVar8 + *(longlong *)(lVar2 + 0x28)));
          uVar7 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar7;
          piVar6 = piVar6 + 1;
          uVar8 = uVar8 + 8;
        } while ((int)uVar7 < *(int *)(uVar5 + 0x14));
        lVar3 = *(longlong *)(lVar2 + 0x28);
      }
                    // WARNING: Subroutine does not return
      FUN_1807c41d0(param_1,lVar3);
    }
  }
  lVar3 = param_2[1];
  if (lVar3 == 0) {
    if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
      memset(param_2,0,0x78);
    }
                    // WARNING: Subroutine does not return
    FUN_1807c41d0(param_1,lVar2);
  }
  if ((lVar1 != 0) && (uVar5 = uVar4, 0 < *(int *)(lVar1 + 4))) {
    do {
      if (*(longlong *)(uVar5 + lVar3) != 0) {
                    // WARNING: Subroutine does not return
        FUN_1807c41d0(param_1);
      }
      uVar7 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar7;
      uVar5 = uVar5 + 8;
    } while ((int)uVar7 < *(int *)(lVar1 + 4));
  }
                    // WARNING: Subroutine does not return
  FUN_1807c41d0(param_1,lVar3);
}





// 函数: void FUN_180830455(undefined8 param_1,longlong *param_2)
void FUN_180830455(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int *piVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lStack0000000000000078;
  
  uVar3 = 0;
  lStack0000000000000078 = *param_2;
  uVar4 = uVar3;
  if (lStack0000000000000078 != 0) {
    uVar4 = *(ulonglong *)(lStack0000000000000078 + 0x20);
  }
  lVar1 = param_2[0xe];
  if (lVar1 != 0) {
    if (*(undefined8 **)(lVar1 + 8) != (undefined8 *)0x0) {
      FUN_18083dff0(param_1,**(undefined8 **)(lVar1 + 8));
                    // WARNING: Subroutine does not return
      FUN_1807c41d0(param_1,**(undefined8 **)(lVar1 + 8));
    }
    if (*(undefined8 **)(lVar1 + 0x10) != (undefined8 *)0x0) {
      FUN_18083dff0(param_1,**(undefined8 **)(lVar1 + 0x10));
                    // WARNING: Subroutine does not return
      FUN_1807c41d0(param_1,**(undefined8 **)(lVar1 + 0x10));
    }
    lVar2 = *(longlong *)(lVar1 + 0x20);
    if (lVar2 != 0) {
      if ((uVar4 != 0) && (0 < *(int *)(uVar4 + 0x10))) {
        piVar5 = (int *)(uVar4 + 0x520);
        uVar7 = uVar3;
        do {
          (**(code **)(*(longlong *)(&UNK_180980708 + (longlong)*piVar5 * 8) + 0x20))
                    (param_1,*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + uVar7));
          uVar6 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar6;
          piVar5 = piVar5 + 1;
          uVar7 = uVar7 + 8;
        } while ((int)uVar6 < *(int *)(uVar4 + 0x10));
        lVar2 = *(longlong *)(lVar1 + 0x20);
      }
                    // WARNING: Subroutine does not return
      FUN_1807c41d0(param_1,lVar2);
    }
    lVar2 = *(longlong *)(lVar1 + 0x28);
    if (lVar2 != 0) {
      if ((uVar4 != 0) && (0 < *(int *)(uVar4 + 0x14))) {
        piVar5 = (int *)(uVar4 + 0x820);
        uVar7 = uVar3;
        do {
          (**(code **)(*(longlong *)(&UNK_180980718 + (longlong)*piVar5 * 8) + 0x20))
                    (param_1,*(undefined8 *)(uVar7 + *(longlong *)(lVar1 + 0x28)));
          uVar6 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar6;
          piVar5 = piVar5 + 1;
          uVar7 = uVar7 + 8;
        } while ((int)uVar6 < *(int *)(uVar4 + 0x14));
        lVar2 = *(longlong *)(lVar1 + 0x28);
      }
                    // WARNING: Subroutine does not return
      FUN_1807c41d0(param_1,lVar2);
    }
  }
  lVar2 = param_2[1];
  if (lVar2 == 0) {
    if (lVar1 == 0) {
                    // WARNING: Subroutine does not return
      memset(param_2,0,0x78);
    }
                    // WARNING: Subroutine does not return
    FUN_1807c41d0(param_1,lVar1);
  }
  if ((lStack0000000000000078 != 0) && (uVar4 = uVar3, 0 < *(int *)(lStack0000000000000078 + 4))) {
    do {
      if (*(longlong *)(uVar4 + lVar2) != 0) {
                    // WARNING: Subroutine does not return
        FUN_1807c41d0(param_1);
      }
      uVar6 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar6;
      uVar4 = uVar4 + 8;
    } while ((int)uVar6 < *(int *)(lStack0000000000000078 + 4));
  }
                    // WARNING: Subroutine does not return
  FUN_1807c41d0(param_1,lVar2);
}





// 函数: void FUN_18083045d(undefined8 param_1,longlong *param_2)
void FUN_18083045d(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int *piVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong unaff_R15;
  longlong lStack0000000000000078;
  
  uVar3 = 0;
  lStack0000000000000078 = *param_2;
  uVar4 = uVar3;
  if (lStack0000000000000078 != 0) {
    uVar4 = *(ulonglong *)(lStack0000000000000078 + 0x20);
  }
  lVar1 = param_2[0xe];
  if (lVar1 != 0) {
    if (*(undefined8 **)(lVar1 + 8) != (undefined8 *)0x0) {
      FUN_18083dff0(param_1,**(undefined8 **)(lVar1 + 8));
                    // WARNING: Subroutine does not return
      FUN_1807c41d0(param_1,**(undefined8 **)(lVar1 + 8));
    }
    if (*(undefined8 **)(lVar1 + 0x10) != (undefined8 *)0x0) {
      FUN_18083dff0(param_1,**(undefined8 **)(lVar1 + 0x10));
                    // WARNING: Subroutine does not return
      FUN_1807c41d0(param_1,**(undefined8 **)(lVar1 + 0x10));
    }
    lVar2 = *(longlong *)(lVar1 + 0x20);
    if (lVar2 != 0) {
      if ((uVar4 != 0) && (0 < *(int *)(uVar4 + 0x10))) {
        piVar5 = (int *)(uVar4 + 0x520);
        uVar7 = uVar3;
        do {
          (**(code **)(*(longlong *)(&UNK_180980708 + (longlong)*piVar5 * 8) + 0x20))
                    (param_1,*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + uVar7));
          uVar6 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar6;
          piVar5 = piVar5 + 1;
          uVar7 = uVar7 + 8;
        } while ((int)uVar6 < *(int *)(uVar4 + 0x10));
        lVar2 = *(longlong *)(lVar1 + 0x20);
      }
                    // WARNING: Subroutine does not return
      FUN_1807c41d0(param_1,lVar2);
    }
    lVar2 = *(longlong *)(lVar1 + 0x28);
    if (lVar2 != 0) {
      if ((uVar4 != 0) && (0 < *(int *)(uVar4 + 0x14))) {
        piVar5 = (int *)(uVar4 + 0x820);
        uVar7 = uVar3;
        do {
          (**(code **)(*(longlong *)(&UNK_180980718 + (longlong)*piVar5 * 8) + 0x20))
                    (param_1,*(undefined8 *)(uVar7 + *(longlong *)(lVar1 + 0x28)));
          uVar6 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar6;
          piVar5 = piVar5 + 1;
          uVar7 = uVar7 + 8;
        } while ((int)uVar6 < *(int *)(uVar4 + 0x14));
        lVar2 = *(longlong *)(lVar1 + 0x28);
      }
                    // WARNING: Subroutine does not return
      FUN_1807c41d0(param_1,lVar2);
    }
  }
  lVar2 = *(longlong *)(unaff_R15 + 8);
  if (lVar2 == 0) {
    if (lVar1 == 0) {
                    // WARNING: Subroutine does not return
      memset();
    }
                    // WARNING: Subroutine does not return
    FUN_1807c41d0(param_1,lVar1);
  }
  if ((lStack0000000000000078 != 0) && (uVar4 = uVar3, 0 < *(int *)(lStack0000000000000078 + 4))) {
    do {
      if (*(longlong *)(uVar4 + lVar2) != 0) {
                    // WARNING: Subroutine does not return
        FUN_1807c41d0(param_1);
      }
      uVar6 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar6;
      uVar4 = uVar4 + 8;
    } while ((int)uVar6 < *(int *)(lStack0000000000000078 + 4));
  }
                    // WARNING: Subroutine does not return
  FUN_1807c41d0(param_1,lVar2);
}





// 函数: void FUN_1808304f8(undefined8 param_1,longlong param_2)
void FUN_1808304f8(undefined8 param_1,longlong param_2)

{
  int iVar1;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int *piVar2;
  uint uVar3;
  longlong unaff_R13;
  ulonglong uVar4;
  longlong unaff_R15;
  
  iVar1 = (int)unaff_RBX;
  if (param_2 != 0) {
    if ((unaff_RBP != 0) && (iVar1 < *(int *)(unaff_RBP + 0x10))) {
      piVar2 = (int *)(unaff_RBP + 0x520);
      uVar4 = unaff_RBX & 0xffffffff;
      do {
        (**(code **)(*(longlong *)(&UNK_180980708 + (longlong)*piVar2 * 8) + 0x20))();
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
        piVar2 = piVar2 + 1;
      } while ((int)uVar3 < *(int *)(unaff_RBP + 0x10));
    }
                    // WARNING: Subroutine does not return
    FUN_1807c41d0();
  }
  if (*(longlong *)(unaff_RSI + 0x28) == 0) {
    if (*(longlong *)(unaff_R15 + 8) == 0) {
      if (unaff_RSI == 0) {
                    // WARNING: Subroutine does not return
        memset();
      }
                    // WARNING: Subroutine does not return
      FUN_1807c41d0();
    }
    if ((unaff_R13 != 0) && (uVar4 = unaff_RBX, iVar1 < *(int *)(unaff_R13 + 4))) {
      do {
        if (*(longlong *)(uVar4 + *(longlong *)(unaff_R15 + 8)) != 0) {
                    // WARNING: Subroutine does not return
          FUN_1807c41d0();
        }
        uVar3 = (int)unaff_RBX + 1;
        unaff_RBX = (ulonglong)uVar3;
        uVar4 = uVar4 + 8;
      } while ((int)uVar3 < *(int *)(unaff_R13 + 4));
    }
                    // WARNING: Subroutine does not return
    FUN_1807c41d0();
  }
  if ((unaff_RBP != 0) && (iVar1 < *(int *)(unaff_RBP + 0x14))) {
    piVar2 = (int *)(unaff_RBP + 0x820);
    uVar4 = unaff_RBX & 0xffffffff;
    do {
      (**(code **)(*(longlong *)(&UNK_180980718 + (longlong)*piVar2 * 8) + 0x20))();
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      piVar2 = piVar2 + 1;
    } while ((int)uVar3 < *(int *)(unaff_RBP + 0x14));
  }
                    // WARNING: Subroutine does not return
  FUN_1807c41d0();
}





// 函数: void FUN_1808305d8(void)
void FUN_1808305d8(void)

{
  uint uVar1;
  ulonglong unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_R13;
  ulonglong uVar2;
  longlong unaff_R15;
  
  if (*(longlong *)(unaff_R15 + 8) == 0) {
    if (unaff_RSI == 0) {
                    // WARNING: Subroutine does not return
      memset();
    }
                    // WARNING: Subroutine does not return
    FUN_1807c41d0();
  }
  if ((unaff_R13 != 0) && (uVar2 = unaff_RBX, (int)unaff_RBX < *(int *)(unaff_R13 + 4))) {
    do {
      if (*(longlong *)(uVar2 + *(longlong *)(unaff_R15 + 8)) != 0) {
                    // WARNING: Subroutine does not return
        FUN_1807c41d0();
      }
      uVar1 = (int)unaff_RBX + 1;
      unaff_RBX = (ulonglong)uVar1;
      uVar2 = uVar2 + 8;
    } while ((int)uVar1 < *(int *)(unaff_R13 + 4));
  }
                    // WARNING: Subroutine does not return
  FUN_1807c41d0();
}





// 函数: void FUN_1808305e6(void)
void FUN_1808305e6(void)

{
  longlong in_RAX;
  uint uVar1;
  ulonglong unaff_RBX;
  longlong unaff_R13;
  ulonglong uVar2;
  
  if ((unaff_R13 != 0) && (uVar2 = unaff_RBX, (int)unaff_RBX < *(int *)(unaff_R13 + 4))) {
    do {
      if (*(longlong *)(uVar2 + in_RAX) != 0) {
                    // WARNING: Subroutine does not return
        FUN_1807c41d0();
      }
      uVar1 = (int)unaff_RBX + 1;
      unaff_RBX = (ulonglong)uVar1;
      uVar2 = uVar2 + 8;
    } while ((int)uVar1 < *(int *)(unaff_R13 + 4));
  }
                    // WARNING: Subroutine does not return
  FUN_1807c41d0();
}





// 函数: void FUN_18083064b(void)
void FUN_18083064b(void)

{
                    // WARNING: Subroutine does not return
  FUN_1807c41d0();
}





