#include "TaleWorlds.Native.Split.h"

// 99_part_08_part001.c - 17 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_08.c - 500 个函数


// 函数: void FUN_1804dcaf1(int param_1)
void FUN_1804dcaf1(int param_1)

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
  
  puVar6 = (undefined4 *)(unaff_R14 + unaff_R13 * 0x28);
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
LAB_1804dcb65:
        piVar2 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar1 * 4,*(undefined1 *)(unaff_RBP + 0x28));
        piVar3 = *(int **)(unaff_RBP + 0x10);
        piVar5 = *(int **)(unaff_RBP + 0x18);
      }
      else {
        lVar1 = lVar1 * 2;
        if (lVar1 != 0) goto LAB_1804dcb65;
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
    puVar6 = puVar6 + -10;
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






// 函数: void FUN_1804dcbf7(undefined8 param_1,int param_2)
void FUN_1804dcbf7(undefined8 param_1,int param_2)

{
  longlong unaff_RBP;
  
  *(int *)(unaff_RBP + 8) =
       *(int *)(unaff_RBP + 8) +
       (int)(*(longlong *)(unaff_RBP + 0x38) - *(longlong *)(unaff_RBP + 0x30) >> 3) * param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804dcc20(longlong param_1)
void FUN_1804dcc20(longlong param_1)

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
  
  lVar1 = FUN_18062b420(_DAT_180c8ed18,(longlong)*(int *)(param_1 + 0x54) * 0x18,0x17);
  plVar7 = *(longlong **)(param_1 + 0x38);
  plVar5 = *(longlong **)(param_1 + 0x30);
  lVar9 = (longlong)plVar7 - (longlong)plVar5 >> 3;
  if (plVar7 < *(longlong **)(param_1 + 0x40)) {
    *(longlong **)(param_1 + 0x38) = plVar7 + 1;
    *plVar7 = lVar1;
    goto LAB_1804dcd00;
  }
  if (lVar9 == 0) {
    lVar12 = 1;
LAB_1804dcc92:
    plVar2 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar12 * 8,*(undefined1 *)(param_1 + 0x48));
    plVar5 = *(longlong **)(param_1 + 0x30);
    plVar7 = *(longlong **)(param_1 + 0x38);
  }
  else {
    lVar12 = lVar9 * 2;
    if (lVar12 != 0) goto LAB_1804dcc92;
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
LAB_1804dcd00:
  FUN_18014e8b0(param_1 + 0x10,
                (*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 2) +
                (longlong)*(int *)(param_1 + 0x54));
  iVar8 = *(int *)(param_1 + 0x54);
  iVar4 = iVar8 + -1;
  lVar12 = (longlong)iVar4;
  if (-1 < iVar4) {
    puVar11 = (undefined4 *)(lVar1 + lVar12 * 0x18);
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
LAB_1804dcda5:
          piVar3 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar1 * 4,*(undefined1 *)(param_1 + 0x28));
          piVar6 = *(int **)(param_1 + 0x10);
          piVar10 = *(int **)(param_1 + 0x18);
        }
        else {
          lVar1 = lVar1 * 2;
          if (lVar1 != 0) goto LAB_1804dcda5;
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
      puVar11 = puVar11 + -6;
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




// 函数: void FUN_1804dcd31(int param_1)
void FUN_1804dcd31(int param_1)

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
  
  puVar6 = (undefined4 *)(unaff_R14 + unaff_R13 * 0x18);
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
LAB_1804dcda5:
        piVar2 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar1 * 4,*(undefined1 *)(unaff_RBP + 0x28));
        piVar3 = *(int **)(unaff_RBP + 0x10);
        piVar5 = *(int **)(unaff_RBP + 0x18);
      }
      else {
        lVar1 = lVar1 * 2;
        if (lVar1 != 0) goto LAB_1804dcda5;
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
    puVar6 = puVar6 + -6;
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






// 函数: void FUN_1804dce37(undefined8 param_1,int param_2)
void FUN_1804dce37(undefined8 param_1,int param_2)

{
  longlong unaff_RBP;
  
  *(int *)(unaff_RBP + 8) =
       *(int *)(unaff_RBP + 8) +
       (int)(*(longlong *)(unaff_RBP + 0x38) - *(longlong *)(unaff_RBP + 0x30) >> 3) * param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804dce60(longlong param_1)
void FUN_1804dce60(longlong param_1)

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
  
  lVar2 = FUN_18062b420(_DAT_180c8ed18,(longlong)*(int *)(param_1 + 0x54) * 0xc0,0x17);
  plVar7 = *(longlong **)(param_1 + 0x38);
  plVar5 = *(longlong **)(param_1 + 0x30);
  lVar9 = (longlong)plVar7 - (longlong)plVar5 >> 3;
  if (plVar7 < *(longlong **)(param_1 + 0x40)) {
    *(longlong **)(param_1 + 0x38) = plVar7 + 1;
    *plVar7 = lVar2;
    goto LAB_1804dcf40;
  }
  if (lVar9 == 0) {
    lVar12 = 1;
LAB_1804dced2:
    plVar3 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar12 * 8,*(undefined1 *)(param_1 + 0x48));
    plVar5 = *(longlong **)(param_1 + 0x30);
    plVar7 = *(longlong **)(param_1 + 0x38);
  }
  else {
    lVar12 = lVar9 * 2;
    if (lVar12 != 0) goto LAB_1804dced2;
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
LAB_1804dcf40:
  FUN_18014e8b0(param_1 + 0x10,
                (*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 2) +
                (longlong)*(int *)(param_1 + 0x54));
  iVar8 = *(int *)(param_1 + 0x54);
  iVar1 = iVar8 + -1;
  lVar12 = (longlong)iVar1;
  if (-1 < iVar1) {
    puVar11 = (undefined4 *)(lVar12 * 0xc0 + lVar2);
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
LAB_1804dcfe5:
          piVar4 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar2 * 4,*(undefined1 *)(param_1 + 0x28));
          piVar6 = *(int **)(param_1 + 0x10);
          piVar10 = *(int **)(param_1 + 0x18);
        }
        else {
          lVar2 = lVar2 * 2;
          if (lVar2 != 0) goto LAB_1804dcfe5;
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
      puVar11 = puVar11 + -0x30;
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




// 函数: void FUN_1804dcf71(void)
void FUN_1804dcf71(void)

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
  
  puVar6 = (undefined4 *)(unaff_R13 * 0xc0 + unaff_R14);
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
LAB_1804dcfe5:
        piVar2 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar1 * 4,*(undefined1 *)(unaff_RBP + 0x28));
        piVar3 = *(int **)(unaff_RBP + 0x10);
        piVar5 = *(int **)(unaff_RBP + 0x18);
      }
      else {
        lVar1 = lVar1 * 2;
        if (lVar1 != 0) goto LAB_1804dcfe5;
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
    puVar6 = puVar6 + -0x30;
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






// 函数: void FUN_1804dd07a(int param_1)
void FUN_1804dd07a(int param_1)

{
  longlong unaff_RBP;
  
  *(int *)(unaff_RBP + 8) =
       *(int *)(unaff_RBP + 8) +
       (int)(*(longlong *)(unaff_RBP + 0x38) - *(longlong *)(unaff_RBP + 0x30) >> 3) * param_1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804dd0a0(longlong param_1)
void FUN_1804dd0a0(longlong param_1)

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
  
  lVar1 = FUN_18062b420(_DAT_180c8ed18,(longlong)*(int *)(param_1 + 0x54) * 0x48,0x17);
  plVar7 = *(longlong **)(param_1 + 0x38);
  plVar5 = *(longlong **)(param_1 + 0x30);
  lVar9 = (longlong)plVar7 - (longlong)plVar5 >> 3;
  if (plVar7 < *(longlong **)(param_1 + 0x40)) {
    *(longlong **)(param_1 + 0x38) = plVar7 + 1;
    *plVar7 = lVar1;
    goto LAB_1804dd180;
  }
  if (lVar9 == 0) {
    lVar12 = 1;
LAB_1804dd112:
    plVar2 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar12 * 8,*(undefined1 *)(param_1 + 0x48));
    plVar5 = *(longlong **)(param_1 + 0x30);
    plVar7 = *(longlong **)(param_1 + 0x38);
  }
  else {
    lVar12 = lVar9 * 2;
    if (lVar12 != 0) goto LAB_1804dd112;
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
LAB_1804dd180:
  FUN_18014e8b0(param_1 + 0x10,
                (*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 2) +
                (longlong)*(int *)(param_1 + 0x54));
  iVar8 = *(int *)(param_1 + 0x54);
  iVar4 = iVar8 + -1;
  lVar12 = (longlong)iVar4;
  if (-1 < iVar4) {
    puVar11 = (undefined4 *)(lVar1 + lVar12 * 0x48);
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
LAB_1804dd225:
          piVar3 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar1 * 4,*(undefined1 *)(param_1 + 0x28));
          piVar6 = *(int **)(param_1 + 0x10);
          piVar10 = *(int **)(param_1 + 0x18);
        }
        else {
          lVar1 = lVar1 * 2;
          if (lVar1 != 0) goto LAB_1804dd225;
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
      puVar11 = puVar11 + -0x12;
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




// 函数: void FUN_1804dd1b1(int param_1)
void FUN_1804dd1b1(int param_1)

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
  
  puVar6 = (undefined4 *)(unaff_R14 + unaff_R13 * 0x48);
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
LAB_1804dd225:
        piVar2 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar1 * 4,*(undefined1 *)(unaff_RBP + 0x28));
        piVar3 = *(int **)(unaff_RBP + 0x10);
        piVar5 = *(int **)(unaff_RBP + 0x18);
      }
      else {
        lVar1 = lVar1 * 2;
        if (lVar1 != 0) goto LAB_1804dd225;
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
    puVar6 = puVar6 + -0x12;
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






// 函数: void FUN_1804dd2b7(undefined8 param_1,int param_2)
void FUN_1804dd2b7(undefined8 param_1,int param_2)

{
  longlong unaff_RBP;
  
  *(int *)(unaff_RBP + 8) =
       *(int *)(unaff_RBP + 8) +
       (int)(*(longlong *)(unaff_RBP + 0x38) - *(longlong *)(unaff_RBP + 0x30) >> 3) * param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_1804dd2e0(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             ulonglong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar2 = param_5 % (ulonglong)*(uint *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  plVar3 = *(longlong **)(lVar1 + uVar2 * 8);
  if (plVar3 != (longlong *)0x0) {
    do {
      if (*param_4 == *plVar3) {
        *param_2 = plVar3;
        param_2[1] = lVar1 + uVar2 * 8;
        *(undefined1 *)(param_2 + 2) = 0;
        return param_2;
      }
      plVar3 = (longlong *)plVar3[2];
    } while (plVar3 != (longlong *)0x0);
  }
  FUN_18066c220(param_1 + 0x20,&param_5,(ulonglong)*(uint *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18),1);
  plVar3 = (longlong *)FUN_18062b420(_DAT_180c8ed18,0x18,*(undefined1 *)(param_1 + 0x2c));
  *plVar3 = *param_4;
  *(undefined4 *)(plVar3 + 1) = 0;
  plVar3[2] = 0;
  if ((char)param_5 != '\0') {
    uVar4 = FUN_18062b1e0(_DAT_180c8ed18,(ulonglong)param_5._4_4_ * 8 + 8,8,
                          *(undefined1 *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
    memset(uVar4,0,(ulonglong)param_5._4_4_ * 8);
  }
  plVar3[2] = *(longlong *)(*(longlong *)(param_1 + 8) + uVar2 * 8);
  *(longlong **)(*(longlong *)(param_1 + 8) + uVar2 * 8) = plVar3;
  lVar1 = *(longlong *)(param_1 + 8);
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
  *param_2 = plVar3;
  param_2[1] = lVar1 + uVar2 * 8;
  *(undefined1 *)(param_2 + 2) = 1;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804dd33b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1804dd33b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *unaff_RBX;
  longlong unaff_RDI;
  longlong unaff_R13;
  undefined8 *unaff_R15;
  char cStack0000000000000080;
  uint uStack0000000000000084;
  
  FUN_18066c220(param_1,&stack0x00000080,param_3,param_4,1);
  puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x18,*(undefined1 *)(unaff_RDI + 0x2c));
  *puVar2 = *unaff_RBX;
  *(undefined4 *)(puVar2 + 1) = 0;
  puVar2[2] = 0;
  if (cStack0000000000000080 != '\0') {
    uVar3 = FUN_18062b1e0(_DAT_180c8ed18,(ulonglong)uStack0000000000000084 * 8 + 8,8,
                          *(undefined1 *)(unaff_RDI + 0x2c));
                    // WARNING: Subroutine does not return
    memset(uVar3,0,(ulonglong)uStack0000000000000084 * 8);
  }
  puVar2[2] = *(undefined8 *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8);
  *(undefined8 **)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8) = puVar2;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = puVar2;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(undefined1 *)(unaff_R15 + 2) = 1;
  return;
}






// 函数: void FUN_1804dd43e(undefined8 param_1,undefined8 param_2)
void FUN_1804dd43e(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_RAX;
  undefined8 *unaff_R15;
  
  *unaff_R15 = in_RAX;
  unaff_R15[1] = param_2;
  *(undefined1 *)(unaff_R15 + 2) = 0;
  return;
}






// 函数: void FUN_1804dd45a(ulonglong param_1)
void FUN_1804dd45a(ulonglong param_1)

{
  longlong lVar1;
  undefined8 unaff_RBP;
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong *unaff_R15;
  
  if ((1 < param_1) && (*(longlong *)(unaff_RDI + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(*(longlong *)(unaff_RDI + 8));
  }
  *(undefined8 *)(unaff_RDI + 0x10) = unaff_RBP;
  *(longlong *)(unaff_RDI + 8) = unaff_R14;
  *(undefined8 *)(unaff_R12 + 0x10) = *(undefined8 *)(unaff_R14 + unaff_R13 * 8);
  *(longlong *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8) = unaff_R12;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R12;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(undefined1 *)(unaff_R15 + 2) = 1;
  return;
}






// 函数: void FUN_1804dd480(void)
void FUN_1804dd480(void)

{
  longlong lVar1;
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong *unaff_R15;
  
  *(undefined8 *)(unaff_R12 + 0x10) = *(undefined8 *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8);
  *(longlong *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8) = unaff_R12;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R12;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(undefined1 *)(unaff_R15 + 2) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804dd4d0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)
void FUN_1804dd4d0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  lVar5 = FUN_18062b420(_DAT_180c8ed18,0x30,*(undefined1 *)(param_1 + 5));
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  bVar1 = true;
  *(undefined4 *)(lVar5 + 0x20) = *param_3;
  *(undefined4 *)(lVar5 + 0x24) = uVar2;
  *(undefined4 *)(lVar5 + 0x28) = uVar3;
  *(undefined4 *)(lVar5 + 0x2c) = uVar4;
  puVar7 = param_1;
  if ((undefined8 *)param_1[2] != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)param_1[2];
    do {
      puVar7 = puVar6;
      bVar1 = *(int *)(lVar5 + 0x28) < *(int *)(puVar7 + 5);
      if (*(int *)(lVar5 + 0x28) < *(int *)(puVar7 + 5)) {
        puVar6 = (undefined8 *)puVar7[1];
      }
      else {
        puVar6 = (undefined8 *)*puVar7;
      }
    } while (puVar6 != (undefined8 *)0x0);
  }
  puVar6 = puVar7;
  if (bVar1) {
    if (puVar7 == (undefined8 *)param_1[1]) goto LAB_1804dd56e;
    puVar6 = (undefined8 *)func_0x00018066b9a0(puVar7);
  }
  if (*(int *)(lVar5 + 0x28) <= *(int *)(puVar6 + 5)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar5);
  }
LAB_1804dd56e:
  if ((puVar7 == param_1) || (*(int *)(lVar5 + 0x28) < *(int *)(puVar7 + 5))) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar5,puVar7,param_1,uVar8);
}



longlong * FUN_1804dd5d0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar3 = ((((ulonglong)*(byte *)(param_3 + 10) ^
            (((ulonglong)*(byte *)(param_3 + 8) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)*(byte *)(param_3 + 9)) * 0x100000001b3) * 0x100000001b3 ^
           (ulonglong)*(byte *)(param_3 + 0xb)) * 0x100000001b3) %
          (ulonglong)*(uint *)(param_1 + 0x10);
  lVar2 = *(longlong *)(lVar1 + uVar3 * 8);
  if (lVar2 != 0) {
    do {
      if (*(int *)(param_3 + 8) == *(int *)(lVar2 + 8)) goto LAB_1804dd650;
      lVar2 = *(longlong *)(lVar2 + 0x18);
    } while (lVar2 != 0);
  }
  lVar2 = 0;
LAB_1804dd650:
  if (lVar2 == 0) {
    uVar3 = *(ulonglong *)(param_1 + 0x10);
    lVar2 = *(longlong *)(lVar1 + uVar3 * 8);
  }
  *param_2 = lVar2;
  param_2[1] = lVar1 + uVar3 * 8;
  return param_2;
}






