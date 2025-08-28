#include "TaleWorlds.Native.Split.h"

// 03_rendering_part631.c - 2 个函数

// 函数: void FUN_18061d314(void)
void FUN_18061d314(void)

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
  longlong lVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  int iVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong unaff_RDI;
  ulonglong uVar26;
  ulonglong unaff_R12;
  longlong unaff_R13;
  ulonglong uVar27;
  int unaff_R15D;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  longlong *plStackX_20;
  ulonglong in_stack_00000078;
  
  uVar25 = unaff_R12 & 0xffffffff;
  do {
    plVar3 = *(longlong **)(unaff_R12 + *(longlong *)(unaff_RDI + 0x48));
    puVar11 = (undefined4 *)(**(code **)(*plVar3 + 0x130))(plVar3,&plStackX_20);
    lVar12 = *(longlong *)(unaff_RDI + 0x28);
    *(undefined4 *)(uVar25 + lVar12) = *puVar11;
    *(undefined4 *)(uVar25 + 4 + lVar12) = puVar11[1];
    *(undefined4 *)(uVar25 + 8 + lVar12) = puVar11[2];
    puVar11 = (undefined4 *)(**(code **)(*plVar3 + 0x140))(plVar3,&stack0x00000030);
    lVar12 = *(longlong *)(unaff_RDI + 0x28);
    *(undefined4 *)(lVar12 + 0x10 + uVar25) = *puVar11;
    *(undefined4 *)(lVar12 + 0x14 + uVar25) = puVar11[1];
    *(undefined4 *)(lVar12 + 0x18 + uVar25) = puVar11[2];
    uVar28 = (**(code **)(*plVar3 + 0xf0))(plVar3);
    *(undefined4 *)(*(longlong *)(unaff_RDI + 0x28) + 0xc + uVar25) = uVar28;
    puVar11 = (undefined4 *)(**(code **)(*plVar3 + 0x108))(plVar3,&stack0x0000003c);
    lVar12 = *(longlong *)(unaff_RDI + 0x28);
    *(undefined4 *)(lVar12 + 0x20 + uVar25) = *puVar11;
    *(undefined4 *)(lVar12 + 0x24 + uVar25) = puVar11[1];
    *(undefined4 *)(lVar12 + 0x28 + uVar25) = puVar11[2];
    puVar11 = (undefined4 *)(**(code **)(*plVar3 + 0x90))(plVar3,&stack0x00000048);
    lVar12 = *(longlong *)(unaff_RDI + 0x28);
    *(undefined4 *)(lVar12 + 0x30 + uVar25) = *puVar11;
    *(undefined4 *)(lVar12 + 0x34 + uVar25) = puVar11[1];
    *(undefined4 *)(lVar12 + 0x38 + uVar25) = puVar11[2];
    *(undefined4 *)(lVar12 + 0x3c + uVar25) = puVar11[3];
    *(undefined4 *)(lVar12 + 0x40 + uVar25) = puVar11[4];
    *(undefined4 *)(lVar12 + 0x44 + uVar25) = puVar11[5];
    *(undefined4 *)(lVar12 + 0x48 + uVar25) = puVar11[6];
    uVar28 = (**(code **)(*plVar3 + 0x1c8))(plVar3);
    *(undefined4 *)(*(longlong *)(unaff_RDI + 0x28) + 0x1c + uVar25) = uVar28;
    uVar28 = (**(code **)(*plVar3 + 0x1d8))(plVar3);
    *(undefined4 *)(*(longlong *)(unaff_RDI + 0x28) + 0x2c + uVar25) = uVar28;
    uVar28 = (**(code **)(*plVar3 + 0x118))(plVar3);
    *(undefined4 *)(*(longlong *)(unaff_RDI + 0x28) + 0x4c + uVar25) = uVar28;
    uVar28 = (**(code **)(*plVar3 + 0x128))(plVar3);
    *(undefined4 *)(*(longlong *)(unaff_RDI + 0x28) + 0x50 + uVar25) = uVar28;
    fVar29 = (float)(**(code **)(*plVar3 + 0x168))(plVar3);
    fVar30 = (float)(**(code **)(*plVar3 + 0x168))(plVar3);
    *(float *)(*(longlong *)(unaff_RDI + 0x28) + 0x54 + uVar25) = fVar29 * fVar30;
    fVar29 = (float)(**(code **)(*plVar3 + 0x158))(plVar3);
    fVar30 = (float)(**(code **)(*plVar3 + 0x158))(plVar3);
    unaff_R12 = unaff_R12 + 8;
    uVar25 = uVar25 + 0x60;
    *(float *)(*(longlong *)(unaff_RDI + 0x28) + -8 + uVar25) = fVar29 * fVar30;
    lVar12 = (longlong)unaff_R15D;
    unaff_R15D = unaff_R15D + 1;
    plVar3[2] = lVar12;
    iVar21 = *(int *)(unaff_RDI + 0x1a8);
  } while (unaff_R15D < iVar21);
  uVar25 = 0;
  iVar17 = *(int *)(unaff_RDI + 0x1ac);
  if (iVar21 < *(int *)(unaff_RDI + 0x1b0) + iVar17 + iVar21) {
    lVar24 = (longlong)iVar21 * 0x60;
    lVar12 = (longlong)iVar21 * 8;
    do {
      plVar3 = *(longlong **)(lVar12 + *(longlong *)(unaff_RDI + 0x48));
      *(undefined4 *)(*(longlong *)(unaff_RDI + 0x28) + 0xc + lVar24) = 0;
      lVar13 = *(longlong *)(unaff_RDI + 0x28);
      *(undefined8 *)(lVar13 + 0x10 + lVar24) = 0;
      *(undefined4 *)(lVar13 + 0x18 + lVar24) = 0;
      *(undefined8 *)(lVar13 + lVar24) = 0;
      *(undefined4 *)(lVar13 + 8 + lVar24) = 0;
      *(undefined4 *)(lVar13 + 0x1c + lVar24) = 0x7f7fffff;
      lVar13 = *(longlong *)(unaff_RDI + 0x28);
      *(undefined8 *)(lVar13 + 0x20 + lVar24) = 0;
      *(undefined4 *)(lVar13 + 0x28 + lVar24) = 0;
      *(undefined4 *)(lVar13 + 0x2c + lVar24) = 0x7f7fffff;
      puVar11 = (undefined4 *)(**(code **)(*plVar3 + 0x90))(plVar3,&stack0x00000048);
      lVar13 = *(longlong *)(unaff_RDI + 0x28);
      lVar12 = lVar12 + 8;
      lVar24 = lVar24 + 0x60;
      *(undefined4 *)(lVar13 + -0x30 + lVar24) = *puVar11;
      *(undefined4 *)(lVar13 + -0x2c + lVar24) = puVar11[1];
      *(undefined4 *)(lVar13 + -0x28 + lVar24) = puVar11[2];
      *(undefined4 *)(lVar13 + -0x24 + lVar24) = puVar11[3];
      *(undefined4 *)(lVar13 + -0x20 + lVar24) = puVar11[4];
      *(undefined4 *)(lVar13 + -0x1c + lVar24) = puVar11[5];
      *(undefined4 *)(lVar13 + -0x18 + lVar24) = puVar11[6];
      *(undefined4 *)(lVar13 + -0x14 + lVar24) = 0;
      *(undefined4 *)(*(longlong *)(unaff_RDI + 0x28) + -0x10 + lVar24) = 0;
      *(undefined4 *)(*(longlong *)(unaff_RDI + 0x28) + -0xc + lVar24) = 0x7f7fffff;
      *(undefined4 *)(*(longlong *)(unaff_RDI + 0x28) + -8 + lVar24) = 0x7f7fffff;
      lVar13 = (longlong)iVar21;
      iVar21 = iVar21 + 1;
      plVar3[2] = lVar13;
      iVar17 = *(int *)(unaff_RDI + 0x1ac);
    } while (iVar21 < *(int *)(unaff_RDI + 0x1b0) + iVar17 + *(int *)(unaff_RDI + 0x1a8));
  }
  FUN_180621d60(unaff_RDI + 8,(longlong)iVar17);
  lVar24 = *(longlong *)(unaff_RDI + 0x10) - *(longlong *)(unaff_RDI + 8);
  lVar12 = lVar24 >> 0x3f;
  uVar20 = uVar25;
  uVar26 = uVar25;
  if (lVar24 / 0x1c + lVar12 != lVar12) {
    do {
      plVar3 = *(longlong **)
                (*(longlong *)(unaff_RDI + 0x48) +
                (longlong)(*(int *)(unaff_RDI + 0x1a8) + (int)uVar26) * 8);
      puVar11 = (undefined4 *)(**(code **)(*plVar3 + 0x90))(plVar3,&stack0x00000048);
      lVar12 = *(longlong *)(unaff_RDI + 8);
      uVar20 = uVar20 + 0x1c;
      uVar23 = (int)uVar26 + 1;
      *(undefined4 *)(lVar12 + -0x1c + uVar20) = *puVar11;
      *(undefined4 *)(lVar12 + -0x18 + uVar20) = puVar11[1];
      *(undefined4 *)(lVar12 + -0x14 + uVar20) = puVar11[2];
      *(undefined4 *)(lVar12 + -0x10 + uVar20) = puVar11[3];
      *(undefined4 *)(lVar12 + -0xc + uVar20) = puVar11[4];
      *(undefined4 *)(lVar12 + -8 + uVar20) = puVar11[5];
      *(undefined4 *)(lVar12 + -4 + uVar20) = puVar11[6];
      uVar26 = (ulonglong)uVar23;
    } while ((ulonglong)(longlong)(int)uVar23 <
             (ulonglong)((*(longlong *)(unaff_RDI + 0x10) - lVar12) / 0x1c));
  }
  FUN_18033a920(unaff_RDI + 0x200,
                *(longlong *)(unaff_RDI + 0x50) - *(longlong *)(unaff_RDI + 0x48) >> 3);
  uVar23 = *(int *)(unaff_RDI + 0x1b0) + *(int *)(unaff_RDI + 0x1ac) + *(int *)(unaff_RDI + 0x1a8);
  lVar12 = SUB168(SEXT816(unaff_R13) *
                  SEXT816(*(longlong *)(unaff_RDI + 0xb0) - *(longlong *)(unaff_RDI + 0xa8)),8);
  uVar20 = (ulonglong)(int)uVar23;
  uVar26 = (lVar12 >> 2) - (lVar12 >> 0x3f);
  if (uVar26 < uVar20) {
    FUN_1806223a0(unaff_RDI + 0xa8,uVar20 - uVar26);
  }
  else {
    *(ulonglong *)(unaff_RDI + 0xb0) = *(longlong *)(unaff_RDI + 0xa8) + uVar20 * 0x18;
  }
  lVar12 = *(longlong *)(unaff_RDI + 200);
  uVar26 = *(longlong *)(unaff_RDI + 0xd0) - lVar12 >> 5;
  if (uVar26 < uVar20) {
    FUN_180622500((longlong *)(unaff_RDI + 200),uVar20 - uVar26);
  }
  else {
    *(ulonglong *)(unaff_RDI + 0xd0) = uVar20 * 0x20 + lVar12;
  }
  uVar26 = (*(longlong *)(unaff_RDI + 0xf0) - *(longlong *)(unaff_RDI + 0xe8)) / 0x70;
  if (uVar26 < uVar20) {
    FUN_1806226d0(unaff_RDI + 0xe8,uVar20 - uVar26);
  }
  else {
    *(ulonglong *)(unaff_RDI + 0xf0) = uVar20 * 0x70 + *(longlong *)(unaff_RDI + 0xe8);
  }
  uVar18 = *(ulonglong *)(unaff_RDI + 0x128);
  uVar26 = *(ulonglong *)(unaff_RDI + 0x130);
  uVar15 = (longlong)(uVar26 - uVar18) >> 3;
  if (uVar15 < uVar20) {
    uVar22 = uVar20 - uVar15;
    if ((ulonglong)((longlong)(*(longlong *)(unaff_RDI + 0x138) - uVar26) >> 3) < uVar22) {
      uVar27 = uVar15 * 2;
      if (uVar15 == 0) {
        uVar27 = 1;
      }
      if (uVar27 < uVar20) {
        uVar27 = uVar20;
      }
      uVar15 = uVar26;
      uVar26 = uVar25;
      if (uVar27 != 0) {
        uVar26 = FUN_18062b420(_DAT_180c8ed18,uVar27 * 8,*(undefined1 *)(unaff_RDI + 0x140));
        uVar18 = *(ulonglong *)(unaff_RDI + 0x128);
        uVar15 = *(ulonglong *)(unaff_RDI + 0x130);
      }
      if (uVar18 != uVar15) {
                    // WARNING: Subroutine does not return
        memmove(uVar26,uVar18,uVar15 - uVar18);
      }
      if (uVar22 != 0) {
                    // WARNING: Subroutine does not return
        memset(uVar26,0,uVar22 * 8);
      }
      if (*(longlong *)(unaff_RDI + 0x128) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(ulonglong *)(unaff_RDI + 0x128) = uVar26;
      *(ulonglong *)(unaff_RDI + 0x138) = uVar26 + uVar27 * 8;
    }
    else if (uVar22 != 0) {
                    // WARNING: Subroutine does not return
      memset(uVar26,0,uVar22 * 8);
    }
  }
  else {
    uVar26 = uVar18 + uVar20 * 8;
  }
  *(ulonglong *)(unaff_RDI + 0x130) = uVar26;
  uVar25 = (*(longlong *)(unaff_RDI + 0x110) - *(longlong *)(unaff_RDI + 0x108)) / 0x30;
  if (uVar25 < uVar20) {
    FUN_180622920(unaff_RDI + 0x108,uVar20 - uVar25);
  }
  else {
    *(ulonglong *)(unaff_RDI + 0x110) = uVar20 * 0x30 + *(longlong *)(unaff_RDI + 0x108);
  }
  lVar12 = *(longlong *)(unaff_RDI + 0x68);
  uVar25 = (ulonglong)(int)(uVar23 * 4);
  if ((ulonglong)(*(longlong *)(unaff_RDI + 0x78) - lVar12 >> 5) < uVar25) {
    if (uVar25 == 0) {
      lVar24 = 0;
    }
    else {
      lVar24 = FUN_18062b420(_DAT_180c8ed18,uVar25 << 5,*(undefined1 *)(unaff_RDI + 0x80));
      lVar12 = *(longlong *)(unaff_RDI + 0x68);
    }
    if (lVar12 != *(longlong *)(unaff_RDI + 0x70)) {
                    // WARNING: Subroutine does not return
      memmove(lVar24,lVar12,*(longlong *)(unaff_RDI + 0x70) - lVar12);
    }
    if (lVar12 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(longlong *)(unaff_RDI + 0x68) = lVar24;
    *(longlong *)(unaff_RDI + 0x70) = lVar24;
    *(ulonglong *)(unaff_RDI + 0x78) = uVar25 * 0x20 + lVar24;
  }
  lVar12 = *(longlong *)(unaff_RDI + 0x88);
  if ((ulonglong)(*(longlong *)(unaff_RDI + 0x98) - lVar12 >> 6) < uVar25) {
    if (uVar25 == 0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      puVar11 = (undefined4 *)
                FUN_18062b420(_DAT_180c8ed18,uVar25 << 6,*(undefined1 *)(unaff_RDI + 0xa0));
      lVar12 = *(longlong *)(unaff_RDI + 0x88);
    }
    lVar24 = *(longlong *)(unaff_RDI + 0x90);
    puVar14 = puVar11;
    if (lVar12 != lVar24) {
      lVar12 = lVar12 - (longlong)puVar11;
      puVar19 = puVar11 + 5;
      do {
        puVar1 = puVar19 + 0x10;
        *puVar14 = *(undefined4 *)(lVar12 + -0x14 + (longlong)puVar19);
        puVar14 = puVar14 + 0x10;
        puVar19[-4] = *(undefined4 *)(lVar12 + -0x50 + (longlong)puVar1);
        puVar19[-3] = *(undefined4 *)(lVar12 + -0x4c + (longlong)puVar1);
        puVar19[-2] = *(undefined4 *)(lVar12 + -0x48 + (longlong)puVar1);
        puVar19[-1] = *(undefined4 *)(lVar12 + -0x44 + (longlong)puVar1);
        *puVar19 = *(undefined4 *)(lVar12 + -0x40 + (longlong)puVar1);
        puVar19[1] = *(undefined4 *)(lVar12 + -0x3c + (longlong)puVar1);
        puVar19[2] = *(undefined4 *)(lVar12 + -0x38 + (longlong)puVar1);
        puVar19[3] = *(undefined4 *)(lVar12 + -0x34 + (longlong)puVar1);
        puVar19[4] = *(undefined4 *)(lVar12 + -0x30 + (longlong)puVar1);
        puVar19[5] = *(undefined4 *)(lVar12 + -0x2c + (longlong)puVar1);
        puVar19[6] = *(undefined4 *)(lVar12 + -0x28 + (longlong)puVar1);
        *(undefined1 *)(puVar19 + 7) = *(undefined1 *)(lVar12 + -0x24 + (longlong)puVar1);
        *(undefined2 *)((longlong)puVar19 + 0x1e) =
             *(undefined2 *)(lVar12 + -0x22 + (longlong)puVar1);
        puVar19[8] = *(undefined4 *)(lVar12 + -0x20 + (longlong)puVar1);
        puVar19[9] = *(undefined4 *)(lVar12 + -0x1c + (longlong)puVar1);
        puVar19[10] = *(undefined4 *)(lVar12 + -0x18 + (longlong)puVar1);
        lVar13 = (longlong)puVar19 + lVar12 + 0x2c;
        puVar19 = puVar1;
      } while (lVar13 != lVar24);
      lVar12 = *(longlong *)(unaff_RDI + 0x88);
    }
    if (lVar12 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar12);
    }
    *(undefined4 **)(unaff_RDI + 0x88) = puVar11;
    *(undefined4 **)(unaff_RDI + 0x90) = puVar14;
    *(undefined4 **)(unaff_RDI + 0x98) = puVar11 + uVar25 * 0x10;
  }
  lVar12 = *(longlong *)(unaff_RDI + 0x188);
  uVar20 = (*(longlong *)(unaff_RDI + 0x1c8) - *(longlong *)(unaff_RDI + 0x1c0) >> 3) + uVar25;
  if ((ulonglong)((*(longlong *)(unaff_RDI + 0x198) - lVar12) / 0x30) < uVar20) {
    if (uVar20 == 0) {
      lVar24 = 0;
    }
    else {
      lVar24 = FUN_18062b420(_DAT_180c8ed18,uVar20 * 0x30,*(undefined1 *)(unaff_RDI + 0x1a0));
      lVar12 = *(longlong *)(unaff_RDI + 0x188);
    }
    if (lVar12 != *(longlong *)(unaff_RDI + 400)) {
                    // WARNING: Subroutine does not return
      memmove(lVar24,lVar12,*(longlong *)(unaff_RDI + 400) - lVar12);
    }
    if (lVar12 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar12);
    }
    *(longlong *)(unaff_RDI + 0x188) = lVar24;
    *(longlong *)(unaff_RDI + 400) = lVar24;
    *(ulonglong *)(unaff_RDI + 0x198) = uVar20 * 0x30 + lVar24;
  }
  lVar12 = *(longlong *)(unaff_RDI + 0x148);
  uVar25 = (*(longlong *)(unaff_RDI + 0x1c8) - *(longlong *)(unaff_RDI + 0x1c0) >> 3) + uVar25;
  if ((ulonglong)(*(longlong *)(unaff_RDI + 0x158) - lVar12 >> 3) < uVar25) {
    if (uVar25 == 0) {
      lVar24 = 0;
    }
    else {
      lVar24 = FUN_18062b420(_DAT_180c8ed18,uVar25 * 8,*(undefined1 *)(unaff_RDI + 0x160));
      lVar12 = *(longlong *)(unaff_RDI + 0x148);
    }
    if (lVar12 != *(longlong *)(unaff_RDI + 0x150)) {
                    // WARNING: Subroutine does not return
      memmove(lVar24,lVar12,*(longlong *)(unaff_RDI + 0x150) - lVar12);
    }
    if (lVar12 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(longlong *)(unaff_RDI + 0x148) = lVar24;
    *(ulonglong *)(unaff_RDI + 0x158) = lVar24 + uVar25 * 8;
    *(longlong *)(unaff_RDI + 0x150) = lVar24;
  }
  if (uVar23 != 0) {
    uVar25 = (ulonglong)uVar23;
    lVar12 = 0;
    lVar24 = 0;
    do {
      plVar3 = *(longlong **)(lVar12 + *(longlong *)(unaff_RDI + 0x48));
      cVar10 = (**(code **)(*plVar3 + 0x20))(plVar3,&UNK_180a3bea0);
      plVar16 = (longlong *)0x0;
      if (cVar10 != '\0') {
        plVar16 = plVar3;
      }
      (**(code **)(*plVar16 + 0xb8))(plVar16,&plStackX_20,1);
      *(longlong **)(lVar12 + *(longlong *)(unaff_RDI + 0x128)) = plStackX_20;
      puVar14 = (undefined4 *)(**(code **)(*plStackX_20 + 0x48))(plStackX_20,&stack0x00000048);
      lVar12 = lVar12 + 8;
      uVar28 = puVar14[1];
      uVar4 = puVar14[2];
      uVar5 = puVar14[3];
      uVar6 = *(undefined8 *)(puVar14 + 4);
      uVar7 = *(undefined8 *)(puVar14 + 6);
      uVar8 = *(undefined8 *)(puVar14 + 8);
      uVar9 = *(undefined8 *)(puVar14 + 10);
      lVar13 = *(longlong *)(unaff_RDI + 0x108);
      puVar11 = (undefined4 *)(lVar24 + lVar13);
      *puVar11 = *puVar14;
      puVar11[1] = uVar28;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar2 = (undefined8 *)(lVar24 + 0x10 + lVar13);
      *puVar2 = uVar6;
      puVar2[1] = uVar7;
      puVar2 = (undefined8 *)(lVar24 + 0x20 + lVar13);
      *puVar2 = uVar8;
      puVar2[1] = uVar9;
      uVar25 = uVar25 - 1;
      lVar24 = lVar24 + 0x30;
    } while (uVar25 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000078 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18061d4e0(void)
void FUN_18061d4e0(void)

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
  ulonglong uVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  ulonglong uVar20;
  int unaff_EBP;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  longlong unaff_RDI;
  ulonglong uVar24;
  undefined4 uVar25;
  ulonglong unaff_R12;
  longlong unaff_R13;
  ulonglong uVar26;
  longlong *plStackX_20;
  ulonglong in_stack_00000078;
  
  iVar16 = *(int *)(unaff_RDI + 0x1ac);
  uVar25 = (undefined4)unaff_R12;
  if (unaff_EBP < *(int *)(unaff_RDI + 0x1b0) + iVar16 + unaff_EBP) {
    lVar23 = (longlong)unaff_EBP * 0x60;
    lVar17 = (longlong)unaff_EBP * 8;
    do {
      plVar3 = *(longlong **)(lVar17 + *(longlong *)(unaff_RDI + 0x48));
      *(undefined4 *)(*(longlong *)(unaff_RDI + 0x28) + 0xc + lVar23) = uVar25;
      lVar12 = *(longlong *)(unaff_RDI + 0x28);
      *(undefined8 *)(lVar12 + 0x10 + lVar23) = 0;
      *(undefined4 *)(lVar12 + 0x18 + lVar23) = uVar25;
      *(undefined8 *)(lVar12 + lVar23) = 0;
      *(undefined4 *)(lVar12 + 8 + lVar23) = uVar25;
      *(undefined4 *)(lVar12 + 0x1c + lVar23) = 0x7f7fffff;
      lVar12 = *(longlong *)(unaff_RDI + 0x28);
      *(undefined8 *)(lVar12 + 0x20 + lVar23) = 0;
      *(undefined4 *)(lVar12 + 0x28 + lVar23) = uVar25;
      *(undefined4 *)(lVar12 + 0x2c + lVar23) = 0x7f7fffff;
      puVar11 = (undefined4 *)(**(code **)(*plVar3 + 0x90))(plVar3,&stack0x00000048);
      lVar12 = *(longlong *)(unaff_RDI + 0x28);
      lVar17 = lVar17 + 8;
      lVar23 = lVar23 + 0x60;
      *(undefined4 *)(lVar12 + -0x30 + lVar23) = *puVar11;
      *(undefined4 *)(lVar12 + -0x2c + lVar23) = puVar11[1];
      *(undefined4 *)(lVar12 + -0x28 + lVar23) = puVar11[2];
      *(undefined4 *)(lVar12 + -0x24 + lVar23) = puVar11[3];
      *(undefined4 *)(lVar12 + -0x20 + lVar23) = puVar11[4];
      *(undefined4 *)(lVar12 + -0x1c + lVar23) = puVar11[5];
      *(undefined4 *)(lVar12 + -0x18 + lVar23) = puVar11[6];
      *(undefined4 *)(lVar12 + -0x14 + lVar23) = uVar25;
      *(undefined4 *)(*(longlong *)(unaff_RDI + 0x28) + -0x10 + lVar23) = uVar25;
      *(undefined4 *)(*(longlong *)(unaff_RDI + 0x28) + -0xc + lVar23) = 0x7f7fffff;
      *(undefined4 *)(*(longlong *)(unaff_RDI + 0x28) + -8 + lVar23) = 0x7f7fffff;
      lVar12 = (longlong)unaff_EBP;
      unaff_EBP = unaff_EBP + 1;
      plVar3[2] = lVar12;
      iVar16 = *(int *)(unaff_RDI + 0x1ac);
    } while (unaff_EBP < *(int *)(unaff_RDI + 0x1b0) + iVar16 + *(int *)(unaff_RDI + 0x1a8));
  }
  FUN_180621d60(unaff_RDI + 8,(longlong)iVar16);
  lVar23 = *(longlong *)(unaff_RDI + 0x10) - *(longlong *)(unaff_RDI + 8);
  uVar24 = unaff_R12 & 0xffffffff;
  lVar17 = lVar23 >> 0x3f;
  uVar20 = unaff_R12;
  if (lVar23 / 0x1c + lVar17 != lVar17) {
    do {
      plVar3 = *(longlong **)
                (*(longlong *)(unaff_RDI + 0x48) +
                (longlong)(*(int *)(unaff_RDI + 0x1a8) + (int)uVar24) * 8);
      puVar11 = (undefined4 *)(**(code **)(*plVar3 + 0x90))(plVar3,&stack0x00000048);
      lVar17 = *(longlong *)(unaff_RDI + 8);
      uVar20 = uVar20 + 0x1c;
      uVar22 = (int)uVar24 + 1;
      uVar24 = (ulonglong)uVar22;
      *(undefined4 *)(lVar17 + -0x1c + uVar20) = *puVar11;
      *(undefined4 *)(lVar17 + -0x18 + uVar20) = puVar11[1];
      *(undefined4 *)(lVar17 + -0x14 + uVar20) = puVar11[2];
      *(undefined4 *)(lVar17 + -0x10 + uVar20) = puVar11[3];
      *(undefined4 *)(lVar17 + -0xc + uVar20) = puVar11[4];
      *(undefined4 *)(lVar17 + -8 + uVar20) = puVar11[5];
      *(undefined4 *)(lVar17 + -4 + uVar20) = puVar11[6];
    } while ((ulonglong)(longlong)(int)uVar22 <
             (ulonglong)((*(longlong *)(unaff_RDI + 0x10) - lVar17) / 0x1c));
  }
  FUN_18033a920(unaff_RDI + 0x200,
                *(longlong *)(unaff_RDI + 0x50) - *(longlong *)(unaff_RDI + 0x48) >> 3);
  uVar22 = *(int *)(unaff_RDI + 0x1b0) + *(int *)(unaff_RDI + 0x1ac) + *(int *)(unaff_RDI + 0x1a8);
  lVar17 = SUB168(SEXT816(unaff_R13) *
                  SEXT816(*(longlong *)(unaff_RDI + 0xb0) - *(longlong *)(unaff_RDI + 0xa8)),8);
  uVar20 = (ulonglong)(int)uVar22;
  uVar24 = (lVar17 >> 2) - (lVar17 >> 0x3f);
  if (uVar24 < uVar20) {
    FUN_1806223a0(unaff_RDI + 0xa8,uVar20 - uVar24);
  }
  else {
    *(ulonglong *)(unaff_RDI + 0xb0) = *(longlong *)(unaff_RDI + 0xa8) + uVar20 * 0x18;
  }
  lVar17 = *(longlong *)(unaff_RDI + 200);
  uVar24 = *(longlong *)(unaff_RDI + 0xd0) - lVar17 >> 5;
  if (uVar24 < uVar20) {
    FUN_180622500((longlong *)(unaff_RDI + 200),uVar20 - uVar24);
  }
  else {
    *(ulonglong *)(unaff_RDI + 0xd0) = uVar20 * 0x20 + lVar17;
  }
  uVar24 = (*(longlong *)(unaff_RDI + 0xf0) - *(longlong *)(unaff_RDI + 0xe8)) / 0x70;
  if (uVar24 < uVar20) {
    FUN_1806226d0(unaff_RDI + 0xe8,uVar20 - uVar24);
  }
  else {
    *(ulonglong *)(unaff_RDI + 0xf0) = uVar20 * 0x70 + *(longlong *)(unaff_RDI + 0xe8);
  }
  uVar18 = *(ulonglong *)(unaff_RDI + 0x128);
  uVar24 = *(ulonglong *)(unaff_RDI + 0x130);
  uVar14 = (longlong)(uVar24 - uVar18) >> 3;
  if (uVar14 < uVar20) {
    uVar21 = uVar20 - uVar14;
    if ((ulonglong)((longlong)(*(longlong *)(unaff_RDI + 0x138) - uVar24) >> 3) < uVar21) {
      uVar26 = uVar14 * 2;
      if (uVar14 == 0) {
        uVar26 = 1;
      }
      if (uVar26 < uVar20) {
        uVar26 = uVar20;
      }
      uVar14 = uVar24;
      uVar24 = unaff_R12;
      if (uVar26 != 0) {
        uVar24 = FUN_18062b420(_DAT_180c8ed18,uVar26 * 8,*(undefined1 *)(unaff_RDI + 0x140));
        uVar18 = *(ulonglong *)(unaff_RDI + 0x128);
        uVar14 = *(ulonglong *)(unaff_RDI + 0x130);
      }
      if (uVar18 != uVar14) {
                    // WARNING: Subroutine does not return
        memmove(uVar24,uVar18,uVar14 - uVar18);
      }
      if (uVar21 != 0) {
                    // WARNING: Subroutine does not return
        memset(uVar24,0,uVar21 * 8);
      }
      if (*(longlong *)(unaff_RDI + 0x128) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(ulonglong *)(unaff_RDI + 0x128) = uVar24;
      *(ulonglong *)(unaff_RDI + 0x138) = uVar24 + uVar26 * 8;
    }
    else if (uVar21 != 0) {
                    // WARNING: Subroutine does not return
      memset(uVar24,0,uVar21 * 8);
    }
  }
  else {
    uVar24 = uVar18 + uVar20 * 8;
  }
  *(ulonglong *)(unaff_RDI + 0x130) = uVar24;
  uVar24 = (*(longlong *)(unaff_RDI + 0x110) - *(longlong *)(unaff_RDI + 0x108)) / 0x30;
  if (uVar24 < uVar20) {
    FUN_180622920(unaff_RDI + 0x108,uVar20 - uVar24);
  }
  else {
    *(ulonglong *)(unaff_RDI + 0x110) = uVar20 * 0x30 + *(longlong *)(unaff_RDI + 0x108);
  }
  lVar17 = *(longlong *)(unaff_RDI + 0x68);
  uVar20 = (ulonglong)(int)(uVar22 * 4);
  if ((ulonglong)(*(longlong *)(unaff_RDI + 0x78) - lVar17 >> 5) < uVar20) {
    if (uVar20 == 0) {
      lVar23 = 0;
    }
    else {
      lVar23 = FUN_18062b420(_DAT_180c8ed18,uVar20 << 5,*(undefined1 *)(unaff_RDI + 0x80));
      lVar17 = *(longlong *)(unaff_RDI + 0x68);
    }
    if (lVar17 != *(longlong *)(unaff_RDI + 0x70)) {
                    // WARNING: Subroutine does not return
      memmove(lVar23,lVar17,*(longlong *)(unaff_RDI + 0x70) - lVar17);
    }
    if (lVar17 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(longlong *)(unaff_RDI + 0x68) = lVar23;
    *(longlong *)(unaff_RDI + 0x70) = lVar23;
    *(ulonglong *)(unaff_RDI + 0x78) = uVar20 * 0x20 + lVar23;
  }
  lVar17 = *(longlong *)(unaff_RDI + 0x88);
  if ((ulonglong)(*(longlong *)(unaff_RDI + 0x98) - lVar17 >> 6) < uVar20) {
    if (uVar20 == 0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      puVar11 = (undefined4 *)
                FUN_18062b420(_DAT_180c8ed18,uVar20 << 6,*(undefined1 *)(unaff_RDI + 0xa0));
      lVar17 = *(longlong *)(unaff_RDI + 0x88);
    }
    lVar23 = *(longlong *)(unaff_RDI + 0x90);
    puVar13 = puVar11;
    if (lVar17 != lVar23) {
      lVar17 = lVar17 - (longlong)puVar11;
      puVar19 = puVar11 + 5;
      do {
        puVar1 = puVar19 + 0x10;
        *puVar13 = *(undefined4 *)(lVar17 + -0x14 + (longlong)puVar19);
        puVar13 = puVar13 + 0x10;
        puVar19[-4] = *(undefined4 *)(lVar17 + -0x50 + (longlong)puVar1);
        puVar19[-3] = *(undefined4 *)(lVar17 + -0x4c + (longlong)puVar1);
        puVar19[-2] = *(undefined4 *)(lVar17 + -0x48 + (longlong)puVar1);
        puVar19[-1] = *(undefined4 *)(lVar17 + -0x44 + (longlong)puVar1);
        *puVar19 = *(undefined4 *)(lVar17 + -0x40 + (longlong)puVar1);
        puVar19[1] = *(undefined4 *)(lVar17 + -0x3c + (longlong)puVar1);
        puVar19[2] = *(undefined4 *)(lVar17 + -0x38 + (longlong)puVar1);
        puVar19[3] = *(undefined4 *)(lVar17 + -0x34 + (longlong)puVar1);
        puVar19[4] = *(undefined4 *)(lVar17 + -0x30 + (longlong)puVar1);
        puVar19[5] = *(undefined4 *)(lVar17 + -0x2c + (longlong)puVar1);
        puVar19[6] = *(undefined4 *)(lVar17 + -0x28 + (longlong)puVar1);
        *(undefined1 *)(puVar19 + 7) = *(undefined1 *)(lVar17 + -0x24 + (longlong)puVar1);
        *(undefined2 *)((longlong)puVar19 + 0x1e) =
             *(undefined2 *)(lVar17 + -0x22 + (longlong)puVar1);
        puVar19[8] = *(undefined4 *)(lVar17 + -0x20 + (longlong)puVar1);
        puVar19[9] = *(undefined4 *)(lVar17 + -0x1c + (longlong)puVar1);
        puVar19[10] = *(undefined4 *)(lVar17 + -0x18 + (longlong)puVar1);
        lVar12 = (longlong)puVar19 + lVar17 + 0x2c;
        puVar19 = puVar1;
      } while (lVar12 != lVar23);
      lVar17 = *(longlong *)(unaff_RDI + 0x88);
    }
    if (lVar17 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar17);
    }
    *(undefined4 **)(unaff_RDI + 0x88) = puVar11;
    *(undefined4 **)(unaff_RDI + 0x90) = puVar13;
    *(undefined4 **)(unaff_RDI + 0x98) = puVar11 + uVar20 * 0x10;
  }
  lVar17 = *(longlong *)(unaff_RDI + 0x188);
  uVar24 = (*(longlong *)(unaff_RDI + 0x1c8) - *(longlong *)(unaff_RDI + 0x1c0) >> 3) + uVar20;
  if ((ulonglong)((*(longlong *)(unaff_RDI + 0x198) - lVar17) / 0x30) < uVar24) {
    if (uVar24 == 0) {
      lVar23 = 0;
    }
    else {
      lVar23 = FUN_18062b420(_DAT_180c8ed18,uVar24 * 0x30,*(undefined1 *)(unaff_RDI + 0x1a0));
      lVar17 = *(longlong *)(unaff_RDI + 0x188);
    }
    if (lVar17 != *(longlong *)(unaff_RDI + 400)) {
                    // WARNING: Subroutine does not return
      memmove(lVar23,lVar17,*(longlong *)(unaff_RDI + 400) - lVar17);
    }
    if (lVar17 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar17);
    }
    *(longlong *)(unaff_RDI + 0x188) = lVar23;
    *(longlong *)(unaff_RDI + 400) = lVar23;
    *(ulonglong *)(unaff_RDI + 0x198) = uVar24 * 0x30 + lVar23;
  }
  lVar17 = *(longlong *)(unaff_RDI + 0x148);
  uVar20 = (*(longlong *)(unaff_RDI + 0x1c8) - *(longlong *)(unaff_RDI + 0x1c0) >> 3) + uVar20;
  if ((ulonglong)(*(longlong *)(unaff_RDI + 0x158) - lVar17 >> 3) < uVar20) {
    if (uVar20 == 0) {
      lVar23 = 0;
    }
    else {
      lVar23 = FUN_18062b420(_DAT_180c8ed18,uVar20 * 8,*(undefined1 *)(unaff_RDI + 0x160));
      lVar17 = *(longlong *)(unaff_RDI + 0x148);
    }
    if (lVar17 != *(longlong *)(unaff_RDI + 0x150)) {
                    // WARNING: Subroutine does not return
      memmove(lVar23,lVar17,*(longlong *)(unaff_RDI + 0x150) - lVar17);
    }
    if (lVar17 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(longlong *)(unaff_RDI + 0x148) = lVar23;
    *(ulonglong *)(unaff_RDI + 0x158) = lVar23 + uVar20 * 8;
    *(longlong *)(unaff_RDI + 0x150) = lVar23;
  }
  if (uVar22 != 0) {
    uVar20 = (ulonglong)uVar22;
    lVar17 = 0;
    lVar23 = 0;
    do {
      plVar3 = *(longlong **)(lVar17 + *(longlong *)(unaff_RDI + 0x48));
      cVar10 = (**(code **)(*plVar3 + 0x20))(plVar3,&UNK_180a3bea0);
      plVar15 = (longlong *)0x0;
      if (cVar10 != '\0') {
        plVar15 = plVar3;
      }
      (**(code **)(*plVar15 + 0xb8))(plVar15,&plStackX_20,1);
      *(longlong **)(lVar17 + *(longlong *)(unaff_RDI + 0x128)) = plStackX_20;
      puVar13 = (undefined4 *)(**(code **)(*plStackX_20 + 0x48))(plStackX_20,&stack0x00000048);
      lVar17 = lVar17 + 8;
      uVar25 = puVar13[1];
      uVar4 = puVar13[2];
      uVar5 = puVar13[3];
      uVar6 = *(undefined8 *)(puVar13 + 4);
      uVar7 = *(undefined8 *)(puVar13 + 6);
      uVar8 = *(undefined8 *)(puVar13 + 8);
      uVar9 = *(undefined8 *)(puVar13 + 10);
      lVar12 = *(longlong *)(unaff_RDI + 0x108);
      puVar11 = (undefined4 *)(lVar23 + lVar12);
      *puVar11 = *puVar13;
      puVar11[1] = uVar25;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar2 = (undefined8 *)(lVar23 + 0x10 + lVar12);
      *puVar2 = uVar6;
      puVar2[1] = uVar7;
      puVar2 = (undefined8 *)(lVar23 + 0x20 + lVar12);
      *puVar2 = uVar8;
      puVar2[1] = uVar9;
      uVar20 = uVar20 - 1;
      lVar23 = lVar23 + 0x30;
    } while (uVar20 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000078 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



