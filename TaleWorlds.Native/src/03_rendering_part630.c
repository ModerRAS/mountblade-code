#include "TaleWorlds.Native.Split.h"

// 03_rendering_part630.c - 1 个函数

// 函数: void FUN_18061d2b5(longlong param_1,undefined8 param_2,ulonglong param_3,longlong param_4)
void FUN_18061d2b5(longlong param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined4 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  int iVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong unaff_RDI;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Dc;
  longlong *plStackX_20;
  ulonglong in_stack_00000078;
  undefined4 in_stack_00000080;
  undefined4 in_stack_00000088;
  
  if ((ulonglong)(param_1 / 0x60) < param_3) {
    FUN_180622130(unaff_RDI + 0x28,param_3 - param_1 / 0x60);
  }
  else {
    *(ulonglong *)(unaff_RDI + 0x30) = param_3 * 0x60 + param_4;
  }
  iVar21 = *(int *)(unaff_RDI + 0x1a8);
  uVar24 = 0;
  uVar20 = uVar24;
  uVar25 = uVar24;
  uVar28 = unaff_XMM6_Da;
  uVar4 = unaff_XMM6_Dc;
  if (0 < iVar21) {
    do {
      in_stack_00000088 = uVar4;
      in_stack_00000080 = uVar28;
      plVar3 = *(longlong **)(uVar20 + *(longlong *)(unaff_RDI + 0x48));
      puVar11 = (undefined4 *)(**(code **)(*plVar3 + 0x130))(plVar3,&plStackX_20);
      lVar14 = *(longlong *)(unaff_RDI + 0x28);
      *(undefined4 *)(uVar24 + lVar14) = *puVar11;
      *(undefined4 *)(uVar24 + 4 + lVar14) = puVar11[1];
      *(undefined4 *)(uVar24 + 8 + lVar14) = puVar11[2];
      puVar11 = (undefined4 *)(**(code **)(*plVar3 + 0x140))(plVar3,&stack0x00000030);
      lVar14 = *(longlong *)(unaff_RDI + 0x28);
      *(undefined4 *)(lVar14 + 0x10 + uVar24) = *puVar11;
      *(undefined4 *)(lVar14 + 0x14 + uVar24) = puVar11[1];
      *(undefined4 *)(lVar14 + 0x18 + uVar24) = puVar11[2];
      uVar28 = (**(code **)(*plVar3 + 0xf0))(plVar3);
      *(undefined4 *)(*(longlong *)(unaff_RDI + 0x28) + 0xc + uVar24) = uVar28;
      puVar11 = (undefined4 *)(**(code **)(*plVar3 + 0x108))(plVar3,&stack0x0000003c);
      lVar14 = *(longlong *)(unaff_RDI + 0x28);
      *(undefined4 *)(lVar14 + 0x20 + uVar24) = *puVar11;
      *(undefined4 *)(lVar14 + 0x24 + uVar24) = puVar11[1];
      *(undefined4 *)(lVar14 + 0x28 + uVar24) = puVar11[2];
      puVar11 = (undefined4 *)(**(code **)(*plVar3 + 0x90))(plVar3,&stack0x00000048);
      lVar14 = *(longlong *)(unaff_RDI + 0x28);
      *(undefined4 *)(lVar14 + 0x30 + uVar24) = *puVar11;
      *(undefined4 *)(lVar14 + 0x34 + uVar24) = puVar11[1];
      *(undefined4 *)(lVar14 + 0x38 + uVar24) = puVar11[2];
      *(undefined4 *)(lVar14 + 0x3c + uVar24) = puVar11[3];
      *(undefined4 *)(lVar14 + 0x40 + uVar24) = puVar11[4];
      *(undefined4 *)(lVar14 + 0x44 + uVar24) = puVar11[5];
      *(undefined4 *)(lVar14 + 0x48 + uVar24) = puVar11[6];
      uVar28 = (**(code **)(*plVar3 + 0x1c8))(plVar3);
      *(undefined4 *)(*(longlong *)(unaff_RDI + 0x28) + 0x1c + uVar24) = uVar28;
      uVar28 = (**(code **)(*plVar3 + 0x1d8))(plVar3);
      *(undefined4 *)(*(longlong *)(unaff_RDI + 0x28) + 0x2c + uVar24) = uVar28;
      uVar28 = (**(code **)(*plVar3 + 0x118))(plVar3);
      *(undefined4 *)(*(longlong *)(unaff_RDI + 0x28) + 0x4c + uVar24) = uVar28;
      uVar28 = (**(code **)(*plVar3 + 0x128))(plVar3);
      *(undefined4 *)(*(longlong *)(unaff_RDI + 0x28) + 0x50 + uVar24) = uVar28;
      fVar29 = (float)(**(code **)(*plVar3 + 0x168))(plVar3);
      fVar30 = (float)(**(code **)(*plVar3 + 0x168))(plVar3);
      *(float *)(*(longlong *)(unaff_RDI + 0x28) + 0x54 + uVar24) = fVar29 * fVar30;
      fVar29 = (float)(**(code **)(*plVar3 + 0x158))(plVar3);
      fVar30 = (float)(**(code **)(*plVar3 + 0x158))(plVar3);
      uVar24 = uVar24 + 0x60;
      *(float *)(*(longlong *)(unaff_RDI + 0x28) + -8 + uVar24) = fVar29 * fVar30;
      uVar27 = (int)uVar25 + 1;
      plVar3[2] = (longlong)(int)uVar25;
      iVar21 = *(int *)(unaff_RDI + 0x1a8);
      uVar20 = uVar20 + 8;
      uVar25 = (ulonglong)uVar27;
      uVar28 = in_stack_00000080;
      uVar4 = in_stack_00000088;
    } while ((int)uVar27 < iVar21);
  }
  uVar24 = 0;
  iVar17 = *(int *)(unaff_RDI + 0x1ac);
  if (iVar21 < *(int *)(unaff_RDI + 0x1b0) + iVar17 + iVar21) {
    lVar23 = (longlong)iVar21 * 0x60;
    lVar14 = (longlong)iVar21 * 8;
    do {
      plVar3 = *(longlong **)(lVar14 + *(longlong *)(unaff_RDI + 0x48));
      *(undefined4 *)(*(longlong *)(unaff_RDI + 0x28) + 0xc + lVar23) = 0;
      lVar12 = *(longlong *)(unaff_RDI + 0x28);
      *(undefined8 *)(lVar12 + 0x10 + lVar23) = 0;
      *(undefined4 *)(lVar12 + 0x18 + lVar23) = 0;
      *(undefined8 *)(lVar12 + lVar23) = 0;
      *(undefined4 *)(lVar12 + 8 + lVar23) = 0;
      *(undefined4 *)(lVar12 + 0x1c + lVar23) = 0x7f7fffff;
      lVar12 = *(longlong *)(unaff_RDI + 0x28);
      *(undefined8 *)(lVar12 + 0x20 + lVar23) = 0;
      *(undefined4 *)(lVar12 + 0x28 + lVar23) = 0;
      *(undefined4 *)(lVar12 + 0x2c + lVar23) = 0x7f7fffff;
      puVar11 = (undefined4 *)(**(code **)(*plVar3 + 0x90))(plVar3,&stack0x00000048);
      lVar12 = *(longlong *)(unaff_RDI + 0x28);
      lVar14 = lVar14 + 8;
      lVar23 = lVar23 + 0x60;
      *(undefined4 *)(lVar12 + -0x30 + lVar23) = *puVar11;
      *(undefined4 *)(lVar12 + -0x2c + lVar23) = puVar11[1];
      *(undefined4 *)(lVar12 + -0x28 + lVar23) = puVar11[2];
      *(undefined4 *)(lVar12 + -0x24 + lVar23) = puVar11[3];
      *(undefined4 *)(lVar12 + -0x20 + lVar23) = puVar11[4];
      *(undefined4 *)(lVar12 + -0x1c + lVar23) = puVar11[5];
      *(undefined4 *)(lVar12 + -0x18 + lVar23) = puVar11[6];
      *(undefined4 *)(lVar12 + -0x14 + lVar23) = 0;
      *(undefined4 *)(*(longlong *)(unaff_RDI + 0x28) + -0x10 + lVar23) = 0;
      *(undefined4 *)(*(longlong *)(unaff_RDI + 0x28) + -0xc + lVar23) = 0x7f7fffff;
      *(undefined4 *)(*(longlong *)(unaff_RDI + 0x28) + -8 + lVar23) = 0x7f7fffff;
      lVar12 = (longlong)iVar21;
      iVar21 = iVar21 + 1;
      plVar3[2] = lVar12;
      iVar17 = *(int *)(unaff_RDI + 0x1ac);
    } while (iVar21 < *(int *)(unaff_RDI + 0x1b0) + iVar17 + *(int *)(unaff_RDI + 0x1a8));
  }
  FUN_180621d60(unaff_RDI + 8,(longlong)iVar17);
  lVar23 = *(longlong *)(unaff_RDI + 0x10) - *(longlong *)(unaff_RDI + 8);
  lVar14 = lVar23 >> 0x3f;
  uVar20 = uVar24;
  uVar25 = uVar24;
  if (lVar23 / 0x1c + lVar14 != lVar14) {
    do {
      plVar3 = *(longlong **)
                (*(longlong *)(unaff_RDI + 0x48) +
                (longlong)(*(int *)(unaff_RDI + 0x1a8) + (int)uVar25) * 8);
      puVar11 = (undefined4 *)(**(code **)(*plVar3 + 0x90))(plVar3,&stack0x00000048);
      lVar14 = *(longlong *)(unaff_RDI + 8);
      uVar20 = uVar20 + 0x1c;
      uVar27 = (int)uVar25 + 1;
      *(undefined4 *)(lVar14 + -0x1c + uVar20) = *puVar11;
      *(undefined4 *)(lVar14 + -0x18 + uVar20) = puVar11[1];
      *(undefined4 *)(lVar14 + -0x14 + uVar20) = puVar11[2];
      *(undefined4 *)(lVar14 + -0x10 + uVar20) = puVar11[3];
      *(undefined4 *)(lVar14 + -0xc + uVar20) = puVar11[4];
      *(undefined4 *)(lVar14 + -8 + uVar20) = puVar11[5];
      *(undefined4 *)(lVar14 + -4 + uVar20) = puVar11[6];
      uVar25 = (ulonglong)uVar27;
    } while ((ulonglong)(longlong)(int)uVar27 <
             (ulonglong)((*(longlong *)(unaff_RDI + 0x10) - lVar14) / 0x1c));
  }
  FUN_18033a920(unaff_RDI + 0x200,
                *(longlong *)(unaff_RDI + 0x50) - *(longlong *)(unaff_RDI + 0x48) >> 3);
  lVar14 = *(longlong *)(unaff_RDI + 0xb0) - *(longlong *)(unaff_RDI + 0xa8);
  uVar27 = *(int *)(unaff_RDI + 0x1b0) + *(int *)(unaff_RDI + 0x1ac) + *(int *)(unaff_RDI + 0x1a8);
  lVar14 = lVar14 / 6 + (lVar14 >> 0x3f);
  uVar20 = (ulonglong)(int)uVar27;
  uVar25 = (lVar14 >> 2) - (lVar14 >> 0x3f);
  if (uVar25 < uVar20) {
    FUN_1806223a0(unaff_RDI + 0xa8,uVar20 - uVar25);
  }
  else {
    *(ulonglong *)(unaff_RDI + 0xb0) = *(longlong *)(unaff_RDI + 0xa8) + uVar20 * 0x18;
  }
  lVar14 = *(longlong *)(unaff_RDI + 200);
  uVar25 = *(longlong *)(unaff_RDI + 0xd0) - lVar14 >> 5;
  if (uVar25 < uVar20) {
    FUN_180622500((longlong *)(unaff_RDI + 200),uVar20 - uVar25);
  }
  else {
    *(ulonglong *)(unaff_RDI + 0xd0) = uVar20 * 0x20 + lVar14;
  }
  uVar25 = (*(longlong *)(unaff_RDI + 0xf0) - *(longlong *)(unaff_RDI + 0xe8)) / 0x70;
  if (uVar25 < uVar20) {
    FUN_1806226d0(unaff_RDI + 0xe8,uVar20 - uVar25);
  }
  else {
    *(ulonglong *)(unaff_RDI + 0xf0) = uVar20 * 0x70 + *(longlong *)(unaff_RDI + 0xe8);
  }
  uVar18 = *(ulonglong *)(unaff_RDI + 0x128);
  uVar25 = *(ulonglong *)(unaff_RDI + 0x130);
  uVar15 = (longlong)(uVar25 - uVar18) >> 3;
  if (uVar15 < uVar20) {
    uVar22 = uVar20 - uVar15;
    if ((ulonglong)((longlong)(*(longlong *)(unaff_RDI + 0x138) - uVar25) >> 3) < uVar22) {
      uVar26 = uVar15 * 2;
      if (uVar15 == 0) {
        uVar26 = 1;
      }
      if (uVar26 < uVar20) {
        uVar26 = uVar20;
      }
      uVar15 = uVar25;
      uVar25 = uVar24;
      if (uVar26 != 0) {
        uVar25 = FUN_18062b420(_DAT_180c8ed18,uVar26 * 8,*(undefined1 *)(unaff_RDI + 0x140));
        uVar18 = *(ulonglong *)(unaff_RDI + 0x128);
        uVar15 = *(ulonglong *)(unaff_RDI + 0x130);
      }
      if (uVar18 != uVar15) {
                    // WARNING: Subroutine does not return
        memmove(uVar25,uVar18,uVar15 - uVar18);
      }
      if (uVar22 != 0) {
                    // WARNING: Subroutine does not return
        memset(uVar25,0,uVar22 * 8);
      }
      if (*(longlong *)(unaff_RDI + 0x128) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(ulonglong *)(unaff_RDI + 0x128) = uVar25;
      *(ulonglong *)(unaff_RDI + 0x138) = uVar25 + uVar26 * 8;
    }
    else if (uVar22 != 0) {
                    // WARNING: Subroutine does not return
      memset(uVar25,0,uVar22 * 8);
    }
  }
  else {
    uVar25 = uVar18 + uVar20 * 8;
  }
  *(ulonglong *)(unaff_RDI + 0x130) = uVar25;
  uVar24 = (*(longlong *)(unaff_RDI + 0x110) - *(longlong *)(unaff_RDI + 0x108)) / 0x30;
  if (uVar24 < uVar20) {
    FUN_180622920(unaff_RDI + 0x108,uVar20 - uVar24);
  }
  else {
    *(ulonglong *)(unaff_RDI + 0x110) = uVar20 * 0x30 + *(longlong *)(unaff_RDI + 0x108);
  }
  lVar14 = *(longlong *)(unaff_RDI + 0x68);
  uVar24 = (ulonglong)(int)(uVar27 * 4);
  if ((ulonglong)(*(longlong *)(unaff_RDI + 0x78) - lVar14 >> 5) < uVar24) {
    if (uVar24 == 0) {
      lVar23 = 0;
    }
    else {
      lVar23 = FUN_18062b420(_DAT_180c8ed18,uVar24 << 5,*(undefined1 *)(unaff_RDI + 0x80));
      lVar14 = *(longlong *)(unaff_RDI + 0x68);
    }
    if (lVar14 != *(longlong *)(unaff_RDI + 0x70)) {
                    // WARNING: Subroutine does not return
      memmove(lVar23,lVar14,*(longlong *)(unaff_RDI + 0x70) - lVar14);
    }
    if (lVar14 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(longlong *)(unaff_RDI + 0x68) = lVar23;
    *(longlong *)(unaff_RDI + 0x70) = lVar23;
    *(ulonglong *)(unaff_RDI + 0x78) = uVar24 * 0x20 + lVar23;
  }
  lVar14 = *(longlong *)(unaff_RDI + 0x88);
  if ((ulonglong)(*(longlong *)(unaff_RDI + 0x98) - lVar14 >> 6) < uVar24) {
    if (uVar24 == 0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      puVar11 = (undefined4 *)
                FUN_18062b420(_DAT_180c8ed18,uVar24 << 6,*(undefined1 *)(unaff_RDI + 0xa0));
      lVar14 = *(longlong *)(unaff_RDI + 0x88);
    }
    lVar23 = *(longlong *)(unaff_RDI + 0x90);
    puVar13 = puVar11;
    if (lVar14 != lVar23) {
      lVar14 = lVar14 - (longlong)puVar11;
      puVar19 = puVar11 + 5;
      do {
        puVar1 = puVar19 + 0x10;
        *puVar13 = *(undefined4 *)(lVar14 + -0x14 + (longlong)puVar19);
        puVar13 = puVar13 + 0x10;
        puVar19[-4] = *(undefined4 *)(lVar14 + -0x50 + (longlong)puVar1);
        puVar19[-3] = *(undefined4 *)(lVar14 + -0x4c + (longlong)puVar1);
        puVar19[-2] = *(undefined4 *)(lVar14 + -0x48 + (longlong)puVar1);
        puVar19[-1] = *(undefined4 *)(lVar14 + -0x44 + (longlong)puVar1);
        *puVar19 = *(undefined4 *)(lVar14 + -0x40 + (longlong)puVar1);
        puVar19[1] = *(undefined4 *)(lVar14 + -0x3c + (longlong)puVar1);
        puVar19[2] = *(undefined4 *)(lVar14 + -0x38 + (longlong)puVar1);
        puVar19[3] = *(undefined4 *)(lVar14 + -0x34 + (longlong)puVar1);
        puVar19[4] = *(undefined4 *)(lVar14 + -0x30 + (longlong)puVar1);
        puVar19[5] = *(undefined4 *)(lVar14 + -0x2c + (longlong)puVar1);
        puVar19[6] = *(undefined4 *)(lVar14 + -0x28 + (longlong)puVar1);
        *(undefined1 *)(puVar19 + 7) = *(undefined1 *)(lVar14 + -0x24 + (longlong)puVar1);
        *(undefined2 *)((longlong)puVar19 + 0x1e) =
             *(undefined2 *)(lVar14 + -0x22 + (longlong)puVar1);
        puVar19[8] = *(undefined4 *)(lVar14 + -0x20 + (longlong)puVar1);
        puVar19[9] = *(undefined4 *)(lVar14 + -0x1c + (longlong)puVar1);
        puVar19[10] = *(undefined4 *)(lVar14 + -0x18 + (longlong)puVar1);
        lVar12 = (longlong)puVar19 + lVar14 + 0x2c;
        puVar19 = puVar1;
      } while (lVar12 != lVar23);
      lVar14 = *(longlong *)(unaff_RDI + 0x88);
    }
    if (lVar14 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar14);
    }
    *(undefined4 **)(unaff_RDI + 0x88) = puVar11;
    *(undefined4 **)(unaff_RDI + 0x90) = puVar13;
    *(undefined4 **)(unaff_RDI + 0x98) = puVar11 + uVar24 * 0x10;
  }
  lVar14 = *(longlong *)(unaff_RDI + 0x188);
  uVar20 = (*(longlong *)(unaff_RDI + 0x1c8) - *(longlong *)(unaff_RDI + 0x1c0) >> 3) + uVar24;
  if ((ulonglong)((*(longlong *)(unaff_RDI + 0x198) - lVar14) / 0x30) < uVar20) {
    if (uVar20 == 0) {
      lVar23 = 0;
    }
    else {
      lVar23 = FUN_18062b420(_DAT_180c8ed18,uVar20 * 0x30,*(undefined1 *)(unaff_RDI + 0x1a0));
      lVar14 = *(longlong *)(unaff_RDI + 0x188);
    }
    if (lVar14 != *(longlong *)(unaff_RDI + 400)) {
                    // WARNING: Subroutine does not return
      memmove(lVar23,lVar14,*(longlong *)(unaff_RDI + 400) - lVar14);
    }
    if (lVar14 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar14);
    }
    *(longlong *)(unaff_RDI + 0x188) = lVar23;
    *(longlong *)(unaff_RDI + 400) = lVar23;
    *(ulonglong *)(unaff_RDI + 0x198) = uVar20 * 0x30 + lVar23;
  }
  lVar14 = *(longlong *)(unaff_RDI + 0x148);
  uVar24 = (*(longlong *)(unaff_RDI + 0x1c8) - *(longlong *)(unaff_RDI + 0x1c0) >> 3) + uVar24;
  if ((ulonglong)(*(longlong *)(unaff_RDI + 0x158) - lVar14 >> 3) < uVar24) {
    if (uVar24 == 0) {
      lVar23 = 0;
    }
    else {
      lVar23 = FUN_18062b420(_DAT_180c8ed18,uVar24 * 8,*(undefined1 *)(unaff_RDI + 0x160));
      lVar14 = *(longlong *)(unaff_RDI + 0x148);
    }
    if (lVar14 != *(longlong *)(unaff_RDI + 0x150)) {
                    // WARNING: Subroutine does not return
      memmove(lVar23,lVar14,*(longlong *)(unaff_RDI + 0x150) - lVar14);
    }
    if (lVar14 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(longlong *)(unaff_RDI + 0x148) = lVar23;
    *(ulonglong *)(unaff_RDI + 0x158) = lVar23 + uVar24 * 8;
    *(longlong *)(unaff_RDI + 0x150) = lVar23;
  }
  if (uVar27 != 0) {
    uVar24 = (ulonglong)uVar27;
    lVar14 = 0;
    lVar23 = 0;
    do {
      plVar3 = *(longlong **)(lVar14 + *(longlong *)(unaff_RDI + 0x48));
      cVar10 = (**(code **)(*plVar3 + 0x20))(plVar3,&UNK_180a3bea0);
      plVar16 = (longlong *)0x0;
      if (cVar10 != '\0') {
        plVar16 = plVar3;
      }
      (**(code **)(*plVar16 + 0xb8))(plVar16,&plStackX_20,1);
      *(longlong **)(lVar14 + *(longlong *)(unaff_RDI + 0x128)) = plStackX_20;
      puVar13 = (undefined4 *)(**(code **)(*plStackX_20 + 0x48))(plStackX_20,&stack0x00000048);
      lVar14 = lVar14 + 8;
      uVar28 = puVar13[1];
      uVar4 = puVar13[2];
      uVar5 = puVar13[3];
      uVar6 = *(undefined8 *)(puVar13 + 4);
      uVar7 = *(undefined8 *)(puVar13 + 6);
      uVar8 = *(undefined8 *)(puVar13 + 8);
      uVar9 = *(undefined8 *)(puVar13 + 10);
      lVar12 = *(longlong *)(unaff_RDI + 0x108);
      puVar11 = (undefined4 *)(lVar23 + lVar12);
      *puVar11 = *puVar13;
      puVar11[1] = uVar28;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar2 = (undefined8 *)(lVar23 + 0x10 + lVar12);
      *puVar2 = uVar6;
      puVar2[1] = uVar7;
      puVar2 = (undefined8 *)(lVar23 + 0x20 + lVar12);
      *puVar2 = uVar8;
      puVar2[1] = uVar9;
      uVar24 = uVar24 - 1;
      lVar23 = lVar23 + 0x30;
    } while (uVar24 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000078 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



