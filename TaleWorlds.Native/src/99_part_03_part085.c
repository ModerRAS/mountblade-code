#include "TaleWorlds.Native.Split.h"

// 99_part_03_part085.c - 6 个函数

// 函数: void FUN_18024b1b0(longlong param_1,char param_2,char param_3)
void FUN_18024b1b0(longlong param_1,char param_2,char param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 auStack_a8 [32];
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  int iStack_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_a8;
  lVar3 = FUN_180244ff0();
  if (lVar3 != 0) {
    lVar4 = FUN_180244ff0(param_1);
    lVar3 = _DAT_180c86870;
    iVar10 = *(int *)(param_1 + 0x3578);
    if (*(longlong *)(lVar4 + 0x1d8) != 0) {
      if (_DAT_180c86870 != 0) {
        *(longlong *)(lVar4 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
      }
      plVar8 = (longlong *)
               ((longlong)(int)((uint)*(byte *)(lVar4 + 0x335) * iVar10) * 0x10 +
               *(longlong *)(lVar4 + 0x1d8));
      goto LAB_18024b24e;
    }
  }
  plVar8 = (longlong *)0x0;
  lVar3 = _DAT_180c86870;
LAB_18024b24e:
  plVar9 = *(longlong **)(_DAT_180c86938 + 0x1cd8);
  if ((plVar8 != (longlong *)0x0) && (*plVar8 != 0)) {
    (**(code **)(*plVar9 + 0x70))(plVar9,*plVar8,1);
    lVar3 = _DAT_180c86870;
  }
  plVar9[0x1077] = (longlong)plVar8;
  iVar10 = 0;
  lVar4 = 0;
  do {
    if ((ulonglong)(*(longlong *)(param_1 + 0x96b8) - *(longlong *)(param_1 + 0x96b0) >> 3) <=
        (ulonglong)(longlong)iVar10) break;
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x96b0) + lVar4);
    plVar8 = *(longlong **)(lVar5 + 0x1d8);
    plVar9 = *(longlong **)(_DAT_180c86938 + 0x1cd8);
    if (plVar8 != (longlong *)0x0) {
      if (lVar3 != 0) {
        *(longlong *)(lVar5 + 0x340) = (longlong)*(int *)(lVar3 + 0x224);
      }
      if (*plVar8 != 0) {
        (**(code **)(*plVar9 + 0x70))(plVar9,*plVar8,1);
        lVar3 = _DAT_180c86870;
      }
    }
    *(longlong **)((longlong)plVar9 + lVar4 + 0x83c0) = plVar8;
    iVar10 = iVar10 + 1;
    lVar4 = lVar4 + 8;
  } while (iVar10 < 4);
  lVar3 = FUN_180245280(param_1);
  if (((*(char *)(param_1 + 0x20) != '\0') || (*(char *)(param_1 + 0x21) != '\0')) &&
     ((lVar4 = *(longlong *)(_DAT_180c86938 + 0x1cd8), *(longlong *)(lVar4 + 0x8550) != 0 ||
      ((*(int *)(lVar4 + 0x88c4) != -1 || (*(int *)(lVar4 + 0x8ac4) != 0x10)))))) {
    uStack_78 = 0;
    (**(code **)(**(longlong **)(lVar4 + 0x8400) + 0x40))
              (*(longlong **)(lVar4 + 0x8400),0x23,1,&uStack_78);
    *(undefined8 *)(lVar4 + 0x8550) = 0;
    *(undefined4 *)(lVar4 + 0x88c4) = 0xffffffff;
    *(undefined4 *)(lVar4 + 0x8ac4) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  plVar9 = (longlong *)0x0;
  plVar8 = *(longlong **)(_DAT_180c86938 + 0x1cd8);
  if (lVar3 != 0) {
    iVar10 = *(int *)(param_1 + 0x357c);
    if (*(longlong *)(lVar3 + 0x1e0) != 0) {
      if (_DAT_180c86870 != 0) {
        *(longlong *)(lVar3 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
      }
      plVar9 = (longlong *)((longlong)(iVar10 * 2 + 1) * 0x10 + *(longlong *)(lVar3 + 0x1e0));
      if ((plVar9 != (longlong *)0x0) && (*plVar9 != 0)) {
        (**(code **)(*plVar8 + 0x70))(plVar8,*plVar9,4);
      }
    }
  }
  lVar4 = _DAT_180c86938;
  plVar8[0x107e] = (longlong)plVar9;
  FUN_18029de40(*(undefined8 *)(lVar4 + 0x1cd8),
                (int)(*(longlong *)(param_1 + 0x96b8) - *(longlong *)(param_1 + 0x96b0) >> 3) + 1);
  if (*(int *)(param_1 + 8) == -1) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x18);
  }
  if ((uVar7 & 2) != 0) {
    uStack_80._0_1_ = 1;
    uStack_88 = 0xffffffff;
    FUN_18029d760(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),1,0,*(undefined8 *)(param_1 + 0x98d0));
    uStack_80._0_1_ = 1;
    uStack_88 = 0xffffffff;
    FUN_18029d760(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),2,0,*(undefined8 *)(param_1 + 0x98d8));
    uStack_80 = CONCAT31(uStack_80._1_3_,1);
    uStack_88 = 0xffffffff;
    FUN_18029d760(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),3,0,*(undefined8 *)(param_1 + 0x98e0));
    FUN_18029d930(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),4,0,*(undefined8 *)(param_1 + 0x98f0));
    lVar4 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    if (((*(longlong *)(lVar4 + 0x8558) != 0) || (*(int *)(lVar4 + 0x88c8) != -1)) ||
       (lVar5 = _DAT_180c86938, *(int *)(lVar4 + 0x8ac8) != 0x10)) {
      uStack_78 = 0;
      (**(code **)(**(longlong **)(lVar4 + 0x8400) + 0x40))
                (*(longlong **)(lVar4 + 0x8400),0x24,1,&uStack_78);
      lVar5 = _DAT_180c86938;
      *(undefined8 *)(lVar4 + 0x8558) = 0;
      *(undefined4 *)(lVar4 + 0x88c8) = 0xffffffff;
      *(undefined4 *)(lVar4 + 0x8ac8) = 0x10;
      *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
    }
    uStack_70 = 0;
    plVar8 = *(longlong **)(*(longlong *)(lVar5 + 0x1cd8) + 0x8400);
    (**(code **)(*plVar8 + 0x40))(plVar8,0x42,1,&uStack_70);
  }
  uStack_60 = *(undefined8 *)(param_1 + 0x11c18);
  uStack_58 = *(undefined8 *)(param_1 + 0x11c20);
  uStack_4c = *(undefined4 *)(param_1 + 0x11c2c);
  lVar4 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  fVar1 = *(float *)(param_1 + 0x11c24);
  plVar8 = *(longlong **)(lVar4 + 0x8400);
  fVar2 = *(float *)(param_1 + 0x11c20);
  uStack_50 = *(undefined4 *)(param_1 + 0x11c28);
  (**(code **)(*plVar8 + 0x160))(plVar8,1,&uStack_60);
  plVar8 = *(longlong **)(lVar4 + 0x8400);
  uVar7 = 0;
  uVar6 = 0;
  uStack_70 = 0;
  iStack_68 = (int)fVar2;
  iStack_64 = (int)fVar1;
  (**(code **)(*plVar8 + 0x168))(plVar8,1,&uStack_70);
  if (param_3 == '\0') {
    if (((*(uint *)(param_1 + 4) & 1) != 0) || (*(char *)(param_1 + 0x12c0a) != '\0')) {
      uVar6 = 1;
    }
    if ((param_2 == '\x01') && ((*(uint *)(param_1 + 4) & 2) != 0)) {
      uVar6 = uVar6 | 2;
    }
    if (((((*(byte *)(param_1 + 0x1bd8) & 0x20) == 0) && ((*(byte *)(param_1 + 0x1bd9) & 2) == 0))
        || (*(int *)(_DAT_180c8a9c8 + 0xa10) == 0)) || (*(char *)(param_1 + 0x130) == '\0')) {
      uVar11 = 0x3f800000;
    }
    else {
      uVar11 = 0;
    }
    if (uVar6 != 0) {
      uStack_80 = 0;
      uStack_88 = 0x8a;
      FUN_18029c8a0(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),uVar6,
                    *(undefined4 *)(param_1 + 0x11cf0),uVar11);
    }
    lVar4 = _DAT_180c86938;
    if (((lVar3 != 0) && (*(char *)(lVar3 + 0x357) != '\0')) && (*(char *)(lVar3 + 0x358) == '\0'))
    {
      *(undefined1 *)(lVar3 + 0x358) = 1;
      uStack_80 = 0;
      uStack_88 = 0x8a;
      FUN_18029c8a0(*(undefined8 *)(lVar4 + 0x1cd8),2,*(undefined4 *)(param_1 + 0x11cf0),uVar11);
    }
  }
  if (*(int *)(param_1 + 8) != -1) {
    uVar7 = *(uint *)(param_1 + 0x18);
  }
  if ((uVar7 & 2) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x98d0);
    uStack_78._0_4_ = 0xffffffff;
    lVar4 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    *(longlong *)(lVar3 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    plVar8 = *(longlong **)(lVar4 + 0x8400);
    (**(code **)(*plVar8 + 0x198))(plVar8,*(undefined8 *)(lVar3 + 0x208),&uStack_78);
    lVar3 = *(longlong *)(param_1 + 0x98d8);
    uStack_78 = (ulonglong)uStack_78._4_4_ << 0x20;
    lVar4 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    *(longlong *)(lVar3 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    plVar8 = *(longlong **)(lVar4 + 0x8400);
    (**(code **)(*plVar8 + 0x198))(plVar8,*(undefined8 *)(lVar3 + 0x208),&uStack_78);
    lVar3 = *(longlong *)(param_1 + 0x98e0);
    lVar4 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    *(longlong *)(lVar3 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    plVar8 = *(longlong **)(lVar4 + 0x8400);
    (**(code **)(*plVar8 + 0x198))(plVar8,*(undefined8 *)(lVar3 + 0x208),&uStack_78);
    lVar3 = *(longlong *)(param_1 + 0x98f0);
    lVar4 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    *(undefined4 *)(lVar3 + 0x16c) = *(undefined4 *)(_DAT_180c86870 + 0x224);
    plVar8 = *(longlong **)(lVar4 + 0x8400);
    (**(code **)(*plVar8 + 0x198))(plVar8,*(undefined8 *)(lVar3 + 0x20),&uStack_78);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18024b1d0(longlong param_1,char param_2,char param_3)
void FUN_18024b1d0(longlong param_1,char param_2,char param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  int iVar11;
  undefined8 unaff_RDI;
  longlong in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  undefined4 uVar12;
  
  *(undefined8 *)(in_R11 + 0x10) = unaff_RSI;
  *(undefined8 *)(in_R11 + 0x18) = unaff_RDI;
  *(undefined8 *)(in_R11 + 0x20) = unaff_R12;
  *(undefined8 *)(in_R11 + -0x20) = unaff_R13;
  *(undefined8 *)(in_R11 + -0x28) = unaff_R15;
  lVar4 = FUN_180244ff0();
  if (lVar4 != 0) {
    lVar5 = FUN_180244ff0(param_1);
    lVar4 = _DAT_180c86870;
    iVar11 = *(int *)(param_1 + 0x3578);
    if (*(longlong *)(lVar5 + 0x1d8) != 0) {
      if (_DAT_180c86870 != 0) {
        *(longlong *)(lVar5 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
      }
      plVar9 = (longlong *)
               ((longlong)(int)((uint)*(byte *)(lVar5 + 0x335) * iVar11) * 0x10 +
               *(longlong *)(lVar5 + 0x1d8));
      goto LAB_18024b24e;
    }
  }
  plVar9 = (longlong *)0x0;
  lVar4 = _DAT_180c86870;
LAB_18024b24e:
  plVar10 = *(longlong **)(_DAT_180c86938 + 0x1cd8);
  if ((plVar9 != (longlong *)0x0) && (*plVar9 != 0)) {
    (**(code **)(*plVar10 + 0x70))(plVar10,*plVar9,1);
    lVar4 = _DAT_180c86870;
  }
  plVar10[0x1077] = (longlong)plVar9;
  iVar11 = 0;
  lVar5 = 0;
  do {
    if ((ulonglong)(*(longlong *)(param_1 + 0x96b8) - *(longlong *)(param_1 + 0x96b0) >> 3) <=
        (ulonglong)(longlong)iVar11) break;
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x96b0) + lVar5);
    plVar9 = *(longlong **)(lVar6 + 0x1d8);
    plVar10 = *(longlong **)(_DAT_180c86938 + 0x1cd8);
    if (plVar9 != (longlong *)0x0) {
      if (lVar4 != 0) {
        *(longlong *)(lVar6 + 0x340) = (longlong)*(int *)(lVar4 + 0x224);
      }
      if (*plVar9 != 0) {
        (**(code **)(*plVar10 + 0x70))(plVar10,*plVar9,1);
        lVar4 = _DAT_180c86870;
      }
    }
    *(longlong **)((longlong)plVar10 + lVar5 + 0x83c0) = plVar9;
    iVar11 = iVar11 + 1;
    lVar5 = lVar5 + 8;
  } while (iVar11 < 4);
  lVar4 = FUN_180245280(param_1);
  if (((*(char *)(param_1 + 0x20) != '\0') || (*(char *)(param_1 + 0x21) != '\0')) &&
     ((lVar5 = *(longlong *)(_DAT_180c86938 + 0x1cd8), *(longlong *)(lVar5 + 0x8550) != 0 ||
      ((*(int *)(lVar5 + 0x88c4) != -1 || (*(int *)(lVar5 + 0x8ac4) != 0x10)))))) {
    plVar9 = *(longlong **)(lVar5 + 0x8400);
    *(undefined8 *)(unaff_RBP + -0x19) = 0;
    (**(code **)(*plVar9 + 0x40))(plVar9,0x23,1,unaff_RBP + -0x19);
    *(undefined8 *)(lVar5 + 0x8550) = 0;
    *(undefined4 *)(lVar5 + 0x88c4) = 0xffffffff;
    *(undefined4 *)(lVar5 + 0x8ac4) = 0x10;
    *(int *)(lVar5 + 0x82b4) = *(int *)(lVar5 + 0x82b4) + 1;
  }
  plVar10 = (longlong *)0x0;
  plVar9 = *(longlong **)(_DAT_180c86938 + 0x1cd8);
  if (lVar4 != 0) {
    iVar11 = *(int *)(param_1 + 0x357c);
    if (*(longlong *)(lVar4 + 0x1e0) != 0) {
      if (_DAT_180c86870 != 0) {
        *(longlong *)(lVar4 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
      }
      plVar10 = (longlong *)((longlong)(iVar11 * 2 + 1) * 0x10 + *(longlong *)(lVar4 + 0x1e0));
      if ((plVar10 != (longlong *)0x0) && (*plVar10 != 0)) {
        (**(code **)(*plVar9 + 0x70))(plVar9,*plVar10,4);
      }
    }
  }
  lVar5 = _DAT_180c86938;
  plVar9[0x107e] = (longlong)plVar10;
  FUN_18029de40(*(undefined8 *)(lVar5 + 0x1cd8),
                (int)(*(longlong *)(param_1 + 0x96b8) - *(longlong *)(param_1 + 0x96b0) >> 3) + 1);
  if (*(int *)(param_1 + 8) == -1) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x18);
  }
  if ((uVar8 & 2) != 0) {
    FUN_18029d760(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),1,0,*(undefined8 *)(param_1 + 0x98d0),
                  0xffffffff);
    FUN_18029d760(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),2,0,*(undefined8 *)(param_1 + 0x98d8),
                  0xffffffff);
    FUN_18029d760(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),3,0,*(undefined8 *)(param_1 + 0x98e0),
                  0xffffffff);
    FUN_18029d930(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),4,0,*(undefined8 *)(param_1 + 0x98f0));
    lVar5 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    if (((*(longlong *)(lVar5 + 0x8558) != 0) || (*(int *)(lVar5 + 0x88c8) != -1)) ||
       (lVar6 = _DAT_180c86938, *(int *)(lVar5 + 0x8ac8) != 0x10)) {
      plVar9 = *(longlong **)(lVar5 + 0x8400);
      *(undefined8 *)(unaff_RBP + -0x19) = 0;
      (**(code **)(*plVar9 + 0x40))(plVar9,0x24,1,unaff_RBP + -0x19);
      lVar6 = _DAT_180c86938;
      *(undefined8 *)(lVar5 + 0x8558) = 0;
      *(undefined4 *)(lVar5 + 0x88c8) = 0xffffffff;
      *(undefined4 *)(lVar5 + 0x8ac8) = 0x10;
      *(int *)(lVar5 + 0x82b4) = *(int *)(lVar5 + 0x82b4) + 1;
    }
    lVar5 = *(longlong *)(lVar6 + 0x1cd8);
    *(undefined8 *)(unaff_RBP + -0x11) = 0;
    plVar9 = *(longlong **)(lVar5 + 0x8400);
    (**(code **)(*plVar9 + 0x40))(plVar9,0x42,1,unaff_RBP + -0x11);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x11c20);
  uVar12 = *(undefined4 *)(param_1 + 0x11c2c);
  lVar5 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  fVar1 = *(float *)(param_1 + 0x11c24);
  plVar9 = *(longlong **)(lVar5 + 0x8400);
  fVar2 = *(float *)(param_1 + 0x11c20);
  *(undefined8 *)(unaff_RBP + -1) = *(undefined8 *)(param_1 + 0x11c18);
  *(undefined8 *)(unaff_RBP + 7) = uVar3;
  *(undefined4 *)(unaff_RBP + 0xf) = *(undefined4 *)(param_1 + 0x11c28);
  *(undefined4 *)(unaff_RBP + 0x13) = uVar12;
  (**(code **)(*plVar9 + 0x160))(plVar9,1,unaff_RBP + -1);
  plVar9 = *(longlong **)(lVar5 + 0x8400);
  *(int *)(unaff_RBP + -5) = (int)fVar1;
  uVar8 = 0;
  uVar7 = 0;
  *(undefined8 *)(unaff_RBP + -0x11) = 0;
  *(int *)(unaff_RBP + -9) = (int)fVar2;
  (**(code **)(*plVar9 + 0x168))(plVar9,1,unaff_RBP + -0x11);
  if (param_3 == '\0') {
    if (((*(uint *)(param_1 + 4) & 1) != 0) || (*(char *)(param_1 + 0x12c0a) != '\0')) {
      uVar7 = 1;
    }
    if ((param_2 == '\x01') && ((*(uint *)(param_1 + 4) & 2) != 0)) {
      uVar7 = uVar7 | 2;
    }
    if (((((*(byte *)(param_1 + 0x1bd8) & 0x20) == 0) && ((*(byte *)(param_1 + 0x1bd9) & 2) == 0))
        || (*(int *)(_DAT_180c8a9c8 + 0xa10) == 0)) || (*(char *)(param_1 + 0x130) == '\0')) {
      uVar12 = 0x3f800000;
    }
    else {
      uVar12 = 0;
    }
    if (uVar7 != 0) {
      FUN_18029c8a0(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),uVar7,
                    *(undefined4 *)(param_1 + 0x11cf0),uVar12,0x8a);
    }
    lVar5 = _DAT_180c86938;
    if (((lVar4 != 0) && (*(char *)(lVar4 + 0x357) != '\0')) && (*(char *)(lVar4 + 0x358) == '\0'))
    {
      *(undefined1 *)(lVar4 + 0x358) = 1;
      FUN_18029c8a0(*(undefined8 *)(lVar5 + 0x1cd8),2,*(undefined4 *)(param_1 + 0x11cf0),uVar12,0x8a
                   );
    }
  }
  lVar4 = _DAT_180c86938;
  if (*(int *)(param_1 + 8) != -1) {
    uVar8 = *(uint *)(param_1 + 0x18);
  }
  if ((uVar8 & 2) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x98d0);
    *(undefined4 *)(unaff_RBP + -0x19) = 0xffffffff;
    lVar4 = *(longlong *)(lVar4 + 0x1cd8);
    *(longlong *)(lVar5 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    plVar9 = *(longlong **)(lVar4 + 0x8400);
    (**(code **)(*plVar9 + 0x198))(plVar9,*(undefined8 *)(lVar5 + 0x208),unaff_RBP + -0x19);
    lVar5 = _DAT_180c86938;
    lVar4 = *(longlong *)(param_1 + 0x98d8);
    *(undefined4 *)(unaff_RBP + -0x19) = 0;
    lVar5 = *(longlong *)(lVar5 + 0x1cd8);
    *(longlong *)(lVar4 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    plVar9 = *(longlong **)(lVar5 + 0x8400);
    (**(code **)(*plVar9 + 0x198))(plVar9,*(undefined8 *)(lVar4 + 0x208),unaff_RBP + -0x19);
    lVar4 = *(longlong *)(param_1 + 0x98e0);
    lVar5 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    *(longlong *)(lVar4 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    plVar9 = *(longlong **)(lVar5 + 0x8400);
    (**(code **)(*plVar9 + 0x198))(plVar9,*(undefined8 *)(lVar4 + 0x208),unaff_RBP + -0x19);
    lVar4 = *(longlong *)(param_1 + 0x98f0);
    lVar5 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    *(undefined4 *)(lVar4 + 0x16c) = *(undefined4 *)(_DAT_180c86870 + 0x224);
    plVar9 = *(longlong **)(lVar5 + 0x8400);
    (**(code **)(*plVar9 + 0x198))(plVar9,*(undefined8 *)(lVar4 + 0x20),unaff_RBP + -0x19);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x17) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18024b635(void)
void FUN_18024b635(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  char cVar5;
  uint unaff_EBX;
  longlong unaff_RBP;
  char unaff_R12B;
  longlong unaff_R14;
  longlong unaff_R15;
  undefined4 uVar6;
  
  cVar5 = (char)unaff_EBX;
  if (((*(uint *)(unaff_R14 + 4) & 1) != 0) ||
     (uVar4 = unaff_EBX, *(char *)(unaff_R14 + 0x12c0a) != cVar5)) {
    uVar4 = 1;
  }
  if ((unaff_R12B == '\x01') && ((*(uint *)(unaff_R14 + 4) & 2) != 0)) {
    uVar4 = uVar4 | 2;
  }
  if (((((*(byte *)(unaff_R14 + 0x1bd8) & 0x20) == 0) && ((*(byte *)(unaff_R14 + 0x1bd9) & 2) == 0))
      || (*(uint *)(_DAT_180c8a9c8 + 0xa10) == unaff_EBX)) ||
     (*(char *)(unaff_R14 + 0x130) == cVar5)) {
    uVar6 = 0x3f800000;
  }
  else {
    uVar6 = 0;
  }
  if (uVar4 != 0) {
    FUN_18029c8a0(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),uVar4,
                  *(undefined4 *)(unaff_R14 + 0x11cf0),uVar6,0x8a);
  }
  lVar2 = _DAT_180c86938;
  if (((unaff_R15 != 0) && (*(char *)(unaff_R15 + 0x357) != cVar5)) &&
     (*(char *)(unaff_R15 + 0x358) == cVar5)) {
    *(undefined1 *)(unaff_R15 + 0x358) = 1;
    FUN_18029c8a0(*(undefined8 *)(lVar2 + 0x1cd8),2,*(undefined4 *)(unaff_R14 + 0x11cf0),uVar6,0x8a)
    ;
  }
  lVar2 = _DAT_180c86938;
  uVar4 = unaff_EBX;
  if (*(int *)(unaff_R14 + 8) != -1) {
    uVar4 = *(uint *)(unaff_R14 + 0x18);
  }
  if ((uVar4 & 2) != 0) {
    lVar1 = *(longlong *)(unaff_R14 + 0x98d0);
    *(undefined4 *)(unaff_RBP + -0x19) = 0xffffffff;
    lVar2 = *(longlong *)(lVar2 + 0x1cd8);
    *(longlong *)(lVar1 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    plVar3 = *(longlong **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(lVar1 + 0x208),unaff_RBP + -0x19);
    lVar1 = _DAT_180c86938;
    lVar2 = *(longlong *)(unaff_R14 + 0x98d8);
    *(uint *)(unaff_RBP + -0x19) = unaff_EBX;
    lVar1 = *(longlong *)(lVar1 + 0x1cd8);
    *(longlong *)(lVar2 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    plVar3 = *(longlong **)(lVar1 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(lVar2 + 0x208),unaff_RBP + -0x19);
    lVar2 = *(longlong *)(unaff_R14 + 0x98e0);
    lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    *(longlong *)(lVar2 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    plVar3 = *(longlong **)(lVar1 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(lVar2 + 0x208),unaff_RBP + -0x19);
    lVar2 = *(longlong *)(unaff_R14 + 0x98f0);
    lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    *(undefined4 *)(lVar2 + 0x16c) = *(undefined4 *)(_DAT_180c86870 + 0x224);
    plVar3 = *(longlong **)(lVar1 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(lVar2 + 0x20),unaff_RBP + -0x19);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x17) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18024b662(undefined8 param_1,undefined8 param_2)
void FUN_18024b662(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  char cVar5;
  uint unaff_EBX;
  longlong unaff_RBP;
  longlong unaff_R14;
  longlong unaff_R15;
  bool in_ZF;
  undefined4 uVar6;
  
  cVar5 = (char)unaff_EBX;
  if ((((in_ZF) && ((*(byte *)(unaff_R14 + 0x1bd9) & 2) == 0)) ||
      (*(uint *)(_DAT_180c8a9c8 + 0xa10) == unaff_EBX)) || (*(char *)(unaff_R14 + 0x130) == cVar5))
  {
    uVar6 = 0x3f800000;
  }
  else {
    uVar6 = 0;
  }
  if ((int)param_2 != 0) {
    FUN_18029c8a0(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),param_2,
                  *(undefined4 *)(unaff_R14 + 0x11cf0),uVar6,0x8a);
  }
  lVar2 = _DAT_180c86938;
  if (((unaff_R15 != 0) && (*(char *)(unaff_R15 + 0x357) != cVar5)) &&
     (*(char *)(unaff_R15 + 0x358) == cVar5)) {
    *(undefined1 *)(unaff_R15 + 0x358) = 1;
    FUN_18029c8a0(*(undefined8 *)(lVar2 + 0x1cd8),2,*(undefined4 *)(unaff_R14 + 0x11cf0),uVar6,0x8a)
    ;
  }
  lVar2 = _DAT_180c86938;
  uVar4 = unaff_EBX;
  if (*(int *)(unaff_R14 + 8) != -1) {
    uVar4 = *(uint *)(unaff_R14 + 0x18);
  }
  if ((uVar4 & 2) != 0) {
    lVar1 = *(longlong *)(unaff_R14 + 0x98d0);
    *(undefined4 *)(unaff_RBP + -0x19) = 0xffffffff;
    lVar2 = *(longlong *)(lVar2 + 0x1cd8);
    *(longlong *)(lVar1 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    plVar3 = *(longlong **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(lVar1 + 0x208),unaff_RBP + -0x19);
    lVar1 = _DAT_180c86938;
    lVar2 = *(longlong *)(unaff_R14 + 0x98d8);
    *(uint *)(unaff_RBP + -0x19) = unaff_EBX;
    lVar1 = *(longlong *)(lVar1 + 0x1cd8);
    *(longlong *)(lVar2 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    plVar3 = *(longlong **)(lVar1 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(lVar2 + 0x208),unaff_RBP + -0x19);
    lVar2 = *(longlong *)(unaff_R14 + 0x98e0);
    lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    *(longlong *)(lVar2 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    plVar3 = *(longlong **)(lVar1 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(lVar2 + 0x208),unaff_RBP + -0x19);
    lVar2 = *(longlong *)(unaff_R14 + 0x98f0);
    lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    *(undefined4 *)(lVar2 + 0x16c) = *(undefined4 *)(_DAT_180c86870 + 0x224);
    plVar3 = *(longlong **)(lVar1 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(lVar2 + 0x20),unaff_RBP + -0x19);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x17) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18024b717(void)
void FUN_18024b717(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  uint unaff_EBX;
  longlong unaff_RBP;
  longlong unaff_R14;
  
  lVar2 = _DAT_180c86938;
  uVar4 = unaff_EBX;
  if (*(int *)(unaff_R14 + 8) != -1) {
    uVar4 = *(uint *)(unaff_R14 + 0x18);
  }
  if ((uVar4 & 2) != 0) {
    lVar1 = *(longlong *)(unaff_R14 + 0x98d0);
    *(undefined4 *)(unaff_RBP + -0x19) = 0xffffffff;
    lVar2 = *(longlong *)(lVar2 + 0x1cd8);
    *(longlong *)(lVar1 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    plVar3 = *(longlong **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(lVar1 + 0x208),unaff_RBP + -0x19);
    lVar1 = _DAT_180c86938;
    lVar2 = *(longlong *)(unaff_R14 + 0x98d8);
    *(uint *)(unaff_RBP + -0x19) = unaff_EBX;
    lVar1 = *(longlong *)(lVar1 + 0x1cd8);
    *(longlong *)(lVar2 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    plVar3 = *(longlong **)(lVar1 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(lVar2 + 0x208),unaff_RBP + -0x19);
    lVar2 = *(longlong *)(unaff_R14 + 0x98e0);
    lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    *(longlong *)(lVar2 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    plVar3 = *(longlong **)(lVar1 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(lVar2 + 0x208),unaff_RBP + -0x19);
    lVar2 = *(longlong *)(unaff_R14 + 0x98f0);
    lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    *(undefined4 *)(lVar2 + 0x16c) = *(undefined4 *)(_DAT_180c86870 + 0x224);
    plVar3 = *(longlong **)(lVar1 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(lVar2 + 0x20),unaff_RBP + -0x19);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x17) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18024b72e(void)
void FUN_18024b72e(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 unaff_EBX;
  longlong unaff_RBP;
  longlong unaff_R14;
  
  lVar2 = _DAT_180c86938;
  if ((*(uint *)(unaff_R14 + 0x18) & 2) != 0) {
    lVar1 = *(longlong *)(unaff_R14 + 0x98d0);
    *(undefined4 *)(unaff_RBP + -0x19) = 0xffffffff;
    lVar2 = *(longlong *)(lVar2 + 0x1cd8);
    *(longlong *)(lVar1 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    plVar3 = *(longlong **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(lVar1 + 0x208),unaff_RBP + -0x19);
    lVar1 = _DAT_180c86938;
    lVar2 = *(longlong *)(unaff_R14 + 0x98d8);
    *(undefined4 *)(unaff_RBP + -0x19) = unaff_EBX;
    lVar1 = *(longlong *)(lVar1 + 0x1cd8);
    *(longlong *)(lVar2 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    plVar3 = *(longlong **)(lVar1 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(lVar2 + 0x208),unaff_RBP + -0x19);
    lVar2 = *(longlong *)(unaff_R14 + 0x98e0);
    lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    *(longlong *)(lVar2 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    plVar3 = *(longlong **)(lVar1 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(lVar2 + 0x208),unaff_RBP + -0x19);
    lVar2 = *(longlong *)(unaff_R14 + 0x98f0);
    lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    *(undefined4 *)(lVar2 + 0x16c) = *(undefined4 *)(_DAT_180c86870 + 0x224);
    plVar3 = *(longlong **)(lVar1 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(lVar2 + 0x20),unaff_RBP + -0x19);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x17) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




