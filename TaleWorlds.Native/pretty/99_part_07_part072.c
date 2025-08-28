#include "TaleWorlds.Native.Split.h"

// 99_part_07_part072.c - 13 个函数

// 函数: void FUN_1804dc0f0(longlong param_1)
void FUN_1804dc0f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  longlong *plVar5;
  int *piVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  undefined4 *puVar11;
  longlong lVar12;
  
  lVar2 = FUN_18062b420(_DAT_180c8ed18,(longlong)*(int *)(param_1 + 0x54) * 0x68,0x17);
  plVar7 = *(longlong **)(param_1 + 0x38);
  plVar5 = *(longlong **)(param_1 + 0x30);
  lVar9 = (longlong)plVar7 - (longlong)plVar5 >> 3;
  if (plVar7 < *(longlong **)(param_1 + 0x40)) {
    *(longlong **)(param_1 + 0x38) = plVar7 + 1;
    *plVar7 = lVar2;
    goto LAB_1804dc1cc;
  }
  if (lVar9 == 0) {
    lVar12 = 1;
LAB_1804dc15e:
    plVar3 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar12 * 8,*(undefined1 *)(param_1 + 0x48));
    plVar5 = *(longlong **)(param_1 + 0x30);
    plVar7 = *(longlong **)(param_1 + 0x38);
  }
  else {
    lVar12 = lVar9 * 2;
    if (lVar12 != 0) goto LAB_1804dc15e;
    plVar3 = (longlong *)0x0;
  }
  if (plVar5 != plVar7) {
                    // WARNING: Subroutine does not return
    memmove(plVar3,plVar5,(longlong)plVar7 - (longlong)plVar5);
  }
  *plVar3 = lVar2;
  if (*(longlong *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(longlong **)(param_1 + 0x30) = plVar3;
  *(longlong **)(param_1 + 0x40) = plVar3 + lVar12;
  *(longlong **)(param_1 + 0x38) = plVar3 + 1;
LAB_1804dc1cc:
  FUN_18014e8b0(param_1 + 0x10,
                (*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 2) +
                (longlong)*(int *)(param_1 + 0x54));
  iVar8 = *(int *)(param_1 + 0x54);
  iVar1 = iVar8 + -1;
  lVar12 = (longlong)iVar1;
  if (-1 < iVar1) {
    puVar11 = (undefined4 *)(lVar12 * 0x68 + lVar2);
    do {
      *puVar11 = 0xffffffff;
      iVar8 = (int)lVar9 * *(int *)(param_1 + 0x54) + iVar1;
      puVar11[1] = iVar8;
      piVar10 = *(int **)(param_1 + 0x18);
      if (piVar10 < *(int **)(param_1 + 0x20)) {
        *(int **)(param_1 + 0x18) = piVar10 + 1;
        *piVar10 = iVar8;
      }
      else {
        piVar6 = *(int **)(param_1 + 0x10);
        lVar2 = (longlong)piVar10 - (longlong)piVar6 >> 2;
        if (lVar2 == 0) {
          lVar2 = 1;
LAB_1804dc265:
          piVar4 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar2 * 4,*(undefined1 *)(param_1 + 0x28));
          piVar6 = *(int **)(param_1 + 0x10);
          piVar10 = *(int **)(param_1 + 0x18);
        }
        else {
          lVar2 = lVar2 * 2;
          if (lVar2 != 0) goto LAB_1804dc265;
          piVar4 = (int *)0x0;
        }
        if (piVar6 != piVar10) {
                    // WARNING: Subroutine does not return
          memmove(piVar4,piVar6,(longlong)piVar10 - (longlong)piVar6);
        }
        *piVar4 = iVar8;
        if (*(longlong *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(int **)(param_1 + 0x10) = piVar4;
        *(int **)(param_1 + 0x20) = piVar4 + lVar2;
        *(int **)(param_1 + 0x18) = piVar4 + 1;
      }
      puVar11 = puVar11 + -0x1a;
      iVar1 = iVar1 + -1;
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
    iVar8 = *(int *)(param_1 + 0x54);
  }
  *(int *)(param_1 + 8) =
       *(int *)(param_1 + 8) +
       (int)(*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 3) * iVar8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804dc1fd(void)
void FUN_1804dc1fd(void)

{
  int in_EAX;
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  longlong unaff_RBP;
  int iVar4;
  int unaff_EDI;
  int *piVar5;
  undefined4 *puVar6;
  longlong unaff_R13;
  longlong unaff_R14;
  int in_stack_00000060;
  int in_stack_00000068;
  
  puVar6 = (undefined4 *)(unaff_R13 * 0x68 + unaff_R14);
  do {
    *puVar6 = 0xffffffff;
    iVar4 = unaff_EDI * *(int *)(unaff_RBP + 0x54) + in_EAX;
    puVar6[1] = iVar4;
    piVar5 = *(int **)(unaff_RBP + 0x18);
    if (piVar5 < *(int **)(unaff_RBP + 0x20)) {
      *(int **)(unaff_RBP + 0x18) = piVar5 + 1;
      *piVar5 = iVar4;
    }
    else {
      piVar3 = *(int **)(unaff_RBP + 0x10);
      lVar1 = (longlong)piVar5 - (longlong)piVar3 >> 2;
      if (lVar1 == 0) {
        lVar1 = 1;
LAB_1804dc265:
        piVar2 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar1 * 4,*(undefined1 *)(unaff_RBP + 0x28));
        piVar3 = *(int **)(unaff_RBP + 0x10);
        piVar5 = *(int **)(unaff_RBP + 0x18);
      }
      else {
        lVar1 = lVar1 * 2;
        if (lVar1 != 0) goto LAB_1804dc265;
        piVar2 = (int *)0x0;
      }
      if (piVar3 != piVar5) {
                    // WARNING: Subroutine does not return
        memmove(piVar2,piVar3,(longlong)piVar5 - (longlong)piVar3);
      }
      *piVar2 = iVar4;
      if (*(longlong *)(unaff_RBP + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(int **)(unaff_RBP + 0x10) = piVar2;
      *(int **)(unaff_RBP + 0x20) = piVar2 + lVar1;
      *(int **)(unaff_RBP + 0x18) = piVar2 + 1;
    }
    puVar6 = puVar6 + -0x1a;
    in_EAX = in_stack_00000060 + -1;
    unaff_R13 = unaff_R13 + -1;
    in_stack_00000060 = in_EAX;
    unaff_EDI = in_stack_00000068;
    if (unaff_R13 < 0) {
      *(int *)(unaff_RBP + 8) =
           *(int *)(unaff_RBP + 8) +
           (int)(*(longlong *)(unaff_RBP + 0x38) - *(longlong *)(unaff_RBP + 0x30) >> 3) *
           *(int *)(unaff_RBP + 0x54);
      return;
    }
  } while( true );
}






// 函数: void FUN_1804dc2f7(int param_1)
void FUN_1804dc2f7(int param_1)

{
  longlong unaff_RBP;
  
  *(int *)(unaff_RBP + 8) =
       *(int *)(unaff_RBP + 8) +
       (int)(*(longlong *)(unaff_RBP + 0x38) - *(longlong *)(unaff_RBP + 0x30) >> 3) * param_1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804dc320(longlong param_1)
void FUN_1804dc320(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  longlong *plVar5;
  int *piVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  undefined4 *puVar11;
  longlong lVar12;
  
  lVar2 = FUN_18062b420(_DAT_180c8ed18,(longlong)*(int *)(param_1 + 0x54) * 0xd8,0x17);
  plVar7 = *(longlong **)(param_1 + 0x38);
  plVar5 = *(longlong **)(param_1 + 0x30);
  lVar9 = (longlong)plVar7 - (longlong)plVar5 >> 3;
  if (plVar7 < *(longlong **)(param_1 + 0x40)) {
    *(longlong **)(param_1 + 0x38) = plVar7 + 1;
    *plVar7 = lVar2;
    goto LAB_1804dc3ff;
  }
  if (lVar9 == 0) {
    lVar12 = 1;
LAB_1804dc391:
    plVar3 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar12 * 8,*(undefined1 *)(param_1 + 0x48));
    plVar5 = *(longlong **)(param_1 + 0x30);
    plVar7 = *(longlong **)(param_1 + 0x38);
  }
  else {
    lVar12 = lVar9 * 2;
    if (lVar12 != 0) goto LAB_1804dc391;
    plVar3 = (longlong *)0x0;
  }
  if (plVar5 != plVar7) {
                    // WARNING: Subroutine does not return
    memmove(plVar3,plVar5,(longlong)plVar7 - (longlong)plVar5);
  }
  *plVar3 = lVar2;
  if (*(longlong *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(longlong **)(param_1 + 0x30) = plVar3;
  *(longlong **)(param_1 + 0x40) = plVar3 + lVar12;
  *(longlong **)(param_1 + 0x38) = plVar3 + 1;
LAB_1804dc3ff:
  FUN_18014e8b0(param_1 + 0x10,
                (*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 2) +
                (longlong)*(int *)(param_1 + 0x54));
  iVar8 = *(int *)(param_1 + 0x54);
  iVar1 = iVar8 + -1;
  lVar12 = (longlong)iVar1;
  if (-1 < iVar1) {
    puVar11 = (undefined4 *)(lVar12 * 0xd8 + lVar2);
    do {
      *puVar11 = 0xffffffff;
      iVar8 = (int)lVar9 * *(int *)(param_1 + 0x54) + iVar1;
      puVar11[1] = iVar8;
      piVar10 = *(int **)(param_1 + 0x18);
      if (piVar10 < *(int **)(param_1 + 0x20)) {
        *(int **)(param_1 + 0x18) = piVar10 + 1;
        *piVar10 = iVar8;
      }
      else {
        piVar6 = *(int **)(param_1 + 0x10);
        lVar2 = (longlong)piVar10 - (longlong)piVar6 >> 2;
        if (lVar2 == 0) {
          lVar2 = 1;
LAB_1804dc4a5:
          piVar4 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar2 * 4,*(undefined1 *)(param_1 + 0x28));
          piVar6 = *(int **)(param_1 + 0x10);
          piVar10 = *(int **)(param_1 + 0x18);
        }
        else {
          lVar2 = lVar2 * 2;
          if (lVar2 != 0) goto LAB_1804dc4a5;
          piVar4 = (int *)0x0;
        }
        if (piVar6 != piVar10) {
                    // WARNING: Subroutine does not return
          memmove(piVar4,piVar6,(longlong)piVar10 - (longlong)piVar6);
        }
        *piVar4 = iVar8;
        if (*(longlong *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(int **)(param_1 + 0x10) = piVar4;
        *(int **)(param_1 + 0x20) = piVar4 + lVar2;
        *(int **)(param_1 + 0x18) = piVar4 + 1;
      }
      puVar11 = puVar11 + -0x36;
      iVar1 = iVar1 + -1;
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
    iVar8 = *(int *)(param_1 + 0x54);
  }
  *(int *)(param_1 + 8) =
       *(int *)(param_1 + 8) +
       (int)(*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 3) * iVar8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804dc430(void)
void FUN_1804dc430(void)

{
  int in_EAX;
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  longlong unaff_RBP;
  int iVar4;
  int unaff_EDI;
  int *piVar5;
  undefined4 *puVar6;
  longlong unaff_R13;
  longlong unaff_R14;
  int in_stack_00000060;
  int in_stack_00000068;
  
  puVar6 = (undefined4 *)(unaff_R13 * 0xd8 + unaff_R14);
  do {
    *puVar6 = 0xffffffff;
    iVar4 = unaff_EDI * *(int *)(unaff_RBP + 0x54) + in_EAX;
    puVar6[1] = iVar4;
    piVar5 = *(int **)(unaff_RBP + 0x18);
    if (piVar5 < *(int **)(unaff_RBP + 0x20)) {
      *(int **)(unaff_RBP + 0x18) = piVar5 + 1;
      *piVar5 = iVar4;
    }
    else {
      piVar3 = *(int **)(unaff_RBP + 0x10);
      lVar1 = (longlong)piVar5 - (longlong)piVar3 >> 2;
      if (lVar1 == 0) {
        lVar1 = 1;
LAB_1804dc4a5:
        piVar2 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar1 * 4,*(undefined1 *)(unaff_RBP + 0x28));
        piVar3 = *(int **)(unaff_RBP + 0x10);
        piVar5 = *(int **)(unaff_RBP + 0x18);
      }
      else {
        lVar1 = lVar1 * 2;
        if (lVar1 != 0) goto LAB_1804dc4a5;
        piVar2 = (int *)0x0;
      }
      if (piVar3 != piVar5) {
                    // WARNING: Subroutine does not return
        memmove(piVar2,piVar3,(longlong)piVar5 - (longlong)piVar3);
      }
      *piVar2 = iVar4;
      if (*(longlong *)(unaff_RBP + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(int **)(unaff_RBP + 0x10) = piVar2;
      *(int **)(unaff_RBP + 0x20) = piVar2 + lVar1;
      *(int **)(unaff_RBP + 0x18) = piVar2 + 1;
    }
    puVar6 = puVar6 + -0x36;
    in_EAX = in_stack_00000060 + -1;
    unaff_R13 = unaff_R13 + -1;
    in_stack_00000060 = in_EAX;
    unaff_EDI = in_stack_00000068;
    if (unaff_R13 < 0) {
      *(int *)(unaff_RBP + 8) =
           *(int *)(unaff_RBP + 8) +
           (int)(*(longlong *)(unaff_RBP + 0x38) - *(longlong *)(unaff_RBP + 0x30) >> 3) *
           *(int *)(unaff_RBP + 0x54);
      return;
    }
  } while( true );
}






// 函数: void FUN_1804dc53a(int param_1)
void FUN_1804dc53a(int param_1)

{
  longlong unaff_RBP;
  
  *(int *)(unaff_RBP + 8) =
       *(int *)(unaff_RBP + 8) +
       (int)(*(longlong *)(unaff_RBP + 0x38) - *(longlong *)(unaff_RBP + 0x30) >> 3) * param_1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804dc560(longlong param_1)
void FUN_1804dc560(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  longlong *plVar5;
  int *piVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  undefined4 *puVar11;
  longlong lVar12;
  
  lVar2 = FUN_18062b420(_DAT_180c8ed18,(longlong)*(int *)(param_1 + 0x54) * 0x30,0x17);
  plVar7 = *(longlong **)(param_1 + 0x38);
  plVar5 = *(longlong **)(param_1 + 0x30);
  lVar9 = (longlong)plVar7 - (longlong)plVar5 >> 3;
  if (plVar7 < *(longlong **)(param_1 + 0x40)) {
    *(longlong **)(param_1 + 0x38) = plVar7 + 1;
    *plVar7 = lVar2;
    goto LAB_1804dc640;
  }
  if (lVar9 == 0) {
    lVar12 = 1;
LAB_1804dc5d2:
    plVar3 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar12 * 8,*(undefined1 *)(param_1 + 0x48));
    plVar5 = *(longlong **)(param_1 + 0x30);
    plVar7 = *(longlong **)(param_1 + 0x38);
  }
  else {
    lVar12 = lVar9 * 2;
    if (lVar12 != 0) goto LAB_1804dc5d2;
    plVar3 = (longlong *)0x0;
  }
  if (plVar5 != plVar7) {
                    // WARNING: Subroutine does not return
    memmove(plVar3,plVar5,(longlong)plVar7 - (longlong)plVar5);
  }
  *plVar3 = lVar2;
  if (*(longlong *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(longlong **)(param_1 + 0x30) = plVar3;
  *(longlong **)(param_1 + 0x40) = plVar3 + lVar12;
  *(longlong **)(param_1 + 0x38) = plVar3 + 1;
LAB_1804dc640:
  FUN_18014e8b0(param_1 + 0x10,
                (*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 2) +
                (longlong)*(int *)(param_1 + 0x54));
  iVar8 = *(int *)(param_1 + 0x54);
  iVar1 = iVar8 + -1;
  lVar12 = (longlong)iVar1;
  if (-1 < iVar1) {
    puVar11 = (undefined4 *)(lVar12 * 0x30 + lVar2);
    do {
      *puVar11 = 0xffffffff;
      iVar8 = (int)lVar9 * *(int *)(param_1 + 0x54) + iVar1;
      puVar11[1] = iVar8;
      piVar10 = *(int **)(param_1 + 0x18);
      if (piVar10 < *(int **)(param_1 + 0x20)) {
        *(int **)(param_1 + 0x18) = piVar10 + 1;
        *piVar10 = iVar8;
      }
      else {
        piVar6 = *(int **)(param_1 + 0x10);
        lVar2 = (longlong)piVar10 - (longlong)piVar6 >> 2;
        if (lVar2 == 0) {
          lVar2 = 1;
LAB_1804dc6e5:
          piVar4 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar2 * 4,*(undefined1 *)(param_1 + 0x28));
          piVar6 = *(int **)(param_1 + 0x10);
          piVar10 = *(int **)(param_1 + 0x18);
        }
        else {
          lVar2 = lVar2 * 2;
          if (lVar2 != 0) goto LAB_1804dc6e5;
          piVar4 = (int *)0x0;
        }
        if (piVar6 != piVar10) {
                    // WARNING: Subroutine does not return
          memmove(piVar4,piVar6,(longlong)piVar10 - (longlong)piVar6);
        }
        *piVar4 = iVar8;
        if (*(longlong *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(int **)(param_1 + 0x10) = piVar4;
        *(int **)(param_1 + 0x20) = piVar4 + lVar2;
        *(int **)(param_1 + 0x18) = piVar4 + 1;
      }
      puVar11 = puVar11 + -0xc;
      iVar1 = iVar1 + -1;
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
    iVar8 = *(int *)(param_1 + 0x54);
  }
  *(int *)(param_1 + 8) =
       *(int *)(param_1 + 8) +
       (int)(*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 3) * iVar8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804dc671(void)
void FUN_1804dc671(void)

{
  int in_EAX;
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  longlong unaff_RBP;
  int iVar4;
  int unaff_EDI;
  int *piVar5;
  undefined4 *puVar6;
  longlong unaff_R13;
  longlong unaff_R14;
  int in_stack_00000060;
  int in_stack_00000068;
  
  puVar6 = (undefined4 *)(unaff_R13 * 0x30 + unaff_R14);
  do {
    *puVar6 = 0xffffffff;
    iVar4 = unaff_EDI * *(int *)(unaff_RBP + 0x54) + in_EAX;
    puVar6[1] = iVar4;
    piVar5 = *(int **)(unaff_RBP + 0x18);
    if (piVar5 < *(int **)(unaff_RBP + 0x20)) {
      *(int **)(unaff_RBP + 0x18) = piVar5 + 1;
      *piVar5 = iVar4;
    }
    else {
      piVar3 = *(int **)(unaff_RBP + 0x10);
      lVar1 = (longlong)piVar5 - (longlong)piVar3 >> 2;
      if (lVar1 == 0) {
        lVar1 = 1;
LAB_1804dc6e5:
        piVar2 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar1 * 4,*(undefined1 *)(unaff_RBP + 0x28));
        piVar3 = *(int **)(unaff_RBP + 0x10);
        piVar5 = *(int **)(unaff_RBP + 0x18);
      }
      else {
        lVar1 = lVar1 * 2;
        if (lVar1 != 0) goto LAB_1804dc6e5;
        piVar2 = (int *)0x0;
      }
      if (piVar3 != piVar5) {
                    // WARNING: Subroutine does not return
        memmove(piVar2,piVar3,(longlong)piVar5 - (longlong)piVar3);
      }
      *piVar2 = iVar4;
      if (*(longlong *)(unaff_RBP + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(int **)(unaff_RBP + 0x10) = piVar2;
      *(int **)(unaff_RBP + 0x20) = piVar2 + lVar1;
      *(int **)(unaff_RBP + 0x18) = piVar2 + 1;
    }
    puVar6 = puVar6 + -0xc;
    in_EAX = in_stack_00000060 + -1;
    unaff_R13 = unaff_R13 + -1;
    in_stack_00000060 = in_EAX;
    unaff_EDI = in_stack_00000068;
    if (unaff_R13 < 0) {
      *(int *)(unaff_RBP + 8) =
           *(int *)(unaff_RBP + 8) +
           (int)(*(longlong *)(unaff_RBP + 0x38) - *(longlong *)(unaff_RBP + 0x30) >> 3) *
           *(int *)(unaff_RBP + 0x54);
      return;
    }
  } while( true );
}






// 函数: void FUN_1804dc777(int param_1)
void FUN_1804dc777(int param_1)

{
  longlong unaff_RBP;
  
  *(int *)(unaff_RBP + 8) =
       *(int *)(unaff_RBP + 8) +
       (int)(*(longlong *)(unaff_RBP + 0x38) - *(longlong *)(unaff_RBP + 0x30) >> 3) * param_1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804dc7a0(longlong param_1)
void FUN_1804dc7a0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  undefined4 *puVar11;
  longlong lVar12;
  
  lVar1 = FUN_18062b420(_DAT_180c8ed18,(longlong)*(int *)(param_1 + 0x54) * 0xc,0x17);
  plVar7 = *(longlong **)(param_1 + 0x38);
  plVar5 = *(longlong **)(param_1 + 0x30);
  lVar9 = (longlong)plVar7 - (longlong)plVar5 >> 3;
  if (plVar7 < *(longlong **)(param_1 + 0x40)) {
    *(longlong **)(param_1 + 0x38) = plVar7 + 1;
    *plVar7 = lVar1;
    goto LAB_1804dc880;
  }
  if (lVar9 == 0) {
    lVar12 = 1;
LAB_1804dc812:
    plVar2 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar12 * 8,*(undefined1 *)(param_1 + 0x48));
    plVar5 = *(longlong **)(param_1 + 0x30);
    plVar7 = *(longlong **)(param_1 + 0x38);
  }
  else {
    lVar12 = lVar9 * 2;
    if (lVar12 != 0) goto LAB_1804dc812;
    plVar2 = (longlong *)0x0;
  }
  if (plVar5 != plVar7) {
                    // WARNING: Subroutine does not return
    memmove(plVar2,plVar5,(longlong)plVar7 - (longlong)plVar5);
  }
  *plVar2 = lVar1;
  if (*(longlong *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(longlong **)(param_1 + 0x30) = plVar2;
  *(longlong **)(param_1 + 0x40) = plVar2 + lVar12;
  *(longlong **)(param_1 + 0x38) = plVar2 + 1;
LAB_1804dc880:
  FUN_18014e8b0(param_1 + 0x10,
                (*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 2) +
                (longlong)*(int *)(param_1 + 0x54));
  iVar8 = *(int *)(param_1 + 0x54);
  iVar4 = iVar8 + -1;
  lVar12 = (longlong)iVar4;
  if (-1 < iVar4) {
    puVar11 = (undefined4 *)(lVar1 + lVar12 * 0xc);
    do {
      *puVar11 = 0xffffffff;
      iVar8 = (int)lVar9 * *(int *)(param_1 + 0x54) + iVar4;
      puVar11[1] = iVar8;
      piVar10 = *(int **)(param_1 + 0x18);
      if (piVar10 < *(int **)(param_1 + 0x20)) {
        *(int **)(param_1 + 0x18) = piVar10 + 1;
        *piVar10 = iVar8;
      }
      else {
        piVar6 = *(int **)(param_1 + 0x10);
        lVar1 = (longlong)piVar10 - (longlong)piVar6 >> 2;
        if (lVar1 == 0) {
          lVar1 = 1;
LAB_1804dc925:
          piVar3 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar1 * 4,*(undefined1 *)(param_1 + 0x28));
          piVar6 = *(int **)(param_1 + 0x10);
          piVar10 = *(int **)(param_1 + 0x18);
        }
        else {
          lVar1 = lVar1 * 2;
          if (lVar1 != 0) goto LAB_1804dc925;
          piVar3 = (int *)0x0;
        }
        if (piVar6 != piVar10) {
                    // WARNING: Subroutine does not return
          memmove(piVar3,piVar6,(longlong)piVar10 - (longlong)piVar6);
        }
        *piVar3 = iVar8;
        if (*(longlong *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(int **)(param_1 + 0x20) = piVar3 + lVar1;
        *(int **)(param_1 + 0x10) = piVar3;
        *(int **)(param_1 + 0x18) = piVar3 + 1;
      }
      iVar4 = iVar4 + -1;
      puVar11 = puVar11 + -3;
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
    iVar8 = *(int *)(param_1 + 0x54);
  }
  *(int *)(param_1 + 8) =
       *(int *)(param_1 + 8) +
       (int)(*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 3) * iVar8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804dc8b1(int param_1)
void FUN_1804dc8b1(int param_1)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  longlong unaff_RBP;
  int iVar4;
  int unaff_EDI;
  int *piVar5;
  undefined4 *puVar6;
  longlong unaff_R13;
  longlong unaff_R14;
  int in_stack_00000060;
  int in_stack_00000068;
  
  puVar6 = (undefined4 *)(unaff_R14 + unaff_R13 * 0xc);
  do {
    *puVar6 = 0xffffffff;
    iVar4 = unaff_EDI * *(int *)(unaff_RBP + 0x54) + param_1;
    puVar6[1] = iVar4;
    piVar5 = *(int **)(unaff_RBP + 0x18);
    if (piVar5 < *(int **)(unaff_RBP + 0x20)) {
      *(int **)(unaff_RBP + 0x18) = piVar5 + 1;
      *piVar5 = iVar4;
    }
    else {
      piVar3 = *(int **)(unaff_RBP + 0x10);
      lVar1 = (longlong)piVar5 - (longlong)piVar3 >> 2;
      if (lVar1 == 0) {
        lVar1 = 1;
LAB_1804dc925:
        piVar2 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar1 * 4,*(undefined1 *)(unaff_RBP + 0x28));
        piVar3 = *(int **)(unaff_RBP + 0x10);
        piVar5 = *(int **)(unaff_RBP + 0x18);
      }
      else {
        lVar1 = lVar1 * 2;
        if (lVar1 != 0) goto LAB_1804dc925;
        piVar2 = (int *)0x0;
      }
      if (piVar3 != piVar5) {
                    // WARNING: Subroutine does not return
        memmove(piVar2,piVar3,(longlong)piVar5 - (longlong)piVar3);
      }
      *piVar2 = iVar4;
      if (*(longlong *)(unaff_RBP + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(int **)(unaff_RBP + 0x20) = piVar2 + lVar1;
      *(int **)(unaff_RBP + 0x10) = piVar2;
      *(int **)(unaff_RBP + 0x18) = piVar2 + 1;
      param_1 = in_stack_00000060;
    }
    param_1 = param_1 + -1;
    puVar6 = puVar6 + -3;
    unaff_R13 = unaff_R13 + -1;
    in_stack_00000060 = param_1;
    unaff_EDI = in_stack_00000068;
    if (unaff_R13 < 0) {
      *(int *)(unaff_RBP + 8) =
           *(int *)(unaff_RBP + 8) +
           (int)(*(longlong *)(unaff_RBP + 0x38) - *(longlong *)(unaff_RBP + 0x30) >> 3) *
           *(int *)(unaff_RBP + 0x54);
      return;
    }
  } while( true );
}






// 函数: void FUN_1804dc9b7(undefined8 param_1,int param_2)
void FUN_1804dc9b7(undefined8 param_1,int param_2)

{
  longlong unaff_RBP;
  
  *(int *)(unaff_RBP + 8) =
       *(int *)(unaff_RBP + 8) +
       (int)(*(longlong *)(unaff_RBP + 0x38) - *(longlong *)(unaff_RBP + 0x30) >> 3) * param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804dc9e0(longlong param_1)
void FUN_1804dc9e0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  undefined4 *puVar11;
  longlong lVar12;
  
  lVar1 = FUN_18062b420(_DAT_180c8ed18,(longlong)*(int *)(param_1 + 0x54) * 0x28,0x17);
  plVar7 = *(longlong **)(param_1 + 0x38);
  plVar5 = *(longlong **)(param_1 + 0x30);
  lVar9 = (longlong)plVar7 - (longlong)plVar5 >> 3;
  if (plVar7 < *(longlong **)(param_1 + 0x40)) {
    *(longlong **)(param_1 + 0x38) = plVar7 + 1;
    *plVar7 = lVar1;
    goto LAB_1804dcac0;
  }
  if (lVar9 == 0) {
    lVar12 = 1;
LAB_1804dca52:
    plVar2 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar12 * 8,*(undefined1 *)(param_1 + 0x48));
    plVar5 = *(longlong **)(param_1 + 0x30);
    plVar7 = *(longlong **)(param_1 + 0x38);
  }
  else {
    lVar12 = lVar9 * 2;
    if (lVar12 != 0) goto LAB_1804dca52;
    plVar2 = (longlong *)0x0;
  }
  if (plVar5 != plVar7) {
                    // WARNING: Subroutine does not return
    memmove(plVar2,plVar5,(longlong)plVar7 - (longlong)plVar5);
  }
  *plVar2 = lVar1;
  if (*(longlong *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(longlong **)(param_1 + 0x30) = plVar2;
  *(longlong **)(param_1 + 0x40) = plVar2 + lVar12;
  *(longlong **)(param_1 + 0x38) = plVar2 + 1;
LAB_1804dcac0:
  FUN_18014e8b0(param_1 + 0x10,
                (*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 2) +
                (longlong)*(int *)(param_1 + 0x54));
  iVar8 = *(int *)(param_1 + 0x54);
  iVar4 = iVar8 + -1;
  lVar12 = (longlong)iVar4;
  if (-1 < iVar4) {
    puVar11 = (undefined4 *)(lVar1 + lVar12 * 0x28);
    do {
      *puVar11 = 0xffffffff;
      iVar8 = (int)lVar9 * *(int *)(param_1 + 0x54) + iVar4;
      puVar11[1] = iVar8;
      piVar10 = *(int **)(param_1 + 0x18);
      if (piVar10 < *(int **)(param_1 + 0x20)) {
        *(int **)(param_1 + 0x18) = piVar10 + 1;
        *piVar10 = iVar8;
      }
      else {
        piVar6 = *(int **)(param_1 + 0x10);
        lVar1 = (longlong)piVar10 - (longlong)piVar6 >> 2;
        if (lVar1 == 0) {
          lVar1 = 1;
LAB_1804dcb65:
          piVar3 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar1 * 4,*(undefined1 *)(param_1 + 0x28));
          piVar6 = *(int **)(param_1 + 0x10);
          piVar10 = *(int **)(param_1 + 0x18);
        }
        else {
          lVar1 = lVar1 * 2;
          if (lVar1 != 0) goto LAB_1804dcb65;
          piVar3 = (int *)0x0;
        }
        if (piVar6 != piVar10) {
                    // WARNING: Subroutine does not return
          memmove(piVar3,piVar6,(longlong)piVar10 - (longlong)piVar6);
        }
        *piVar3 = iVar8;
        if (*(longlong *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(int **)(param_1 + 0x20) = piVar3 + lVar1;
        *(int **)(param_1 + 0x10) = piVar3;
        *(int **)(param_1 + 0x18) = piVar3 + 1;
      }
      iVar4 = iVar4 + -1;
      puVar11 = puVar11 + -10;
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
    iVar8 = *(int *)(param_1 + 0x54);
  }
  *(int *)(param_1 + 8) =
       *(int *)(param_1 + 8) +
       (int)(*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 3) * iVar8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




