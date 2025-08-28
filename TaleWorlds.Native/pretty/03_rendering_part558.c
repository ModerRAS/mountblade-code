#include "TaleWorlds.Native.Split.h"

// 03_rendering_part558.c - 2 个函数

// 函数: void FUN_180577170(longlong param_1,longlong param_2)
void FUN_180577170(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int iVar17;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R15;
  float in_XMM0_Da;
  undefined4 uVar18;
  uint in_stack_00000020;
  uint uVar19;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  undefined4 uStack0000000000000044;
  longlong in_stack_00000048;
  ulonglong in_stack_00000050;
  longlong in_stack_00000058;
  undefined8 in_stack_00000060;
  
  uVar18 = 0;
  if (in_XMM0_Da == 0.0) {
    *(longlong *)(param_1 + 0x2500) = unaff_R13;
  }
  else {
    *(float *)(param_1 + 0x25c8) = in_XMM0_Da;
  }
  *(longlong *)(param_1 + 0x2508) = unaff_R13;
  if (unaff_R13 != 0) {
    in_stack_00000048 = (longlong)*(int *)(param_1 + 0xac) * 0xe0 + _DAT_180c95fb0;
    lVar16 = *(longlong *)(in_stack_00000048 + 0x98);
    lVar6 = *(longlong *)(param_2 + 0xb0);
    iVar5 = *(int *)(lVar6 + 0x20);
    in_stack_00000050 = (ulonglong)iVar5;
    if (((ulonglong)(*(longlong *)(in_stack_00000048 + 0xa0) - lVar16 >> 3) <= in_stack_00000050) ||
       (*(longlong *)(lVar16 + in_stack_00000050 * 8) == 0)) {
      iVar17 = 0;
      lVar16 = 0;
      do {
        bVar10 = 5 < iVar17;
        uVar13 = CONCAT31((int3)(in_stack_00000020 >> 8),bVar10);
        iVar14 = 5;
        if (iVar17 < 5) {
          iVar14 = iVar17;
        }
        uVar11 = FUN_180557990(lVar6,2,iVar14,0xffffffff,uVar13);
        iVar12 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(unaff_RSI + 0xac),uVar11);
        iVar12 = *(int *)(_DAT_180c95f68 + (longlong)iVar12 * 4);
        if (iVar12 == -1) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined8 *)(_DAT_180c95f88 + (longlong)iVar12 * 8);
        }
        *(undefined8 *)(unaff_RBP + 0x140 + lVar16) = uVar15;
        uVar11 = CONCAT31((int3)((uint)uVar13 >> 8),bVar10);
        uVar13 = FUN_180557a10(lVar6,2,iVar14,0xffffffff,uVar11);
        iVar12 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(unaff_RSI + 0xac),uVar13);
        iVar12 = *(int *)(_DAT_180c95f68 + (longlong)iVar12 * 4);
        if (iVar12 == -1) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined8 *)(_DAT_180c95f88 + (longlong)iVar12 * 8);
        }
        *(undefined8 *)(unaff_RBP + -0x10 + lVar16) = uVar15;
        uVar11 = CONCAT31((int3)((uint)uVar11 >> 8),bVar10);
        uVar13 = FUN_180557990(lVar6,1,iVar14,0xffffffff,uVar11);
        iVar12 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(unaff_RSI + 0xac),uVar13);
        iVar12 = *(int *)(_DAT_180c95f68 + (longlong)iVar12 * 4);
        if (iVar12 == -1) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined8 *)(_DAT_180c95f88 + (longlong)iVar12 * 8);
        }
        *(undefined8 *)(unaff_RBP + 0x150 + lVar16) = uVar15;
        uVar11 = CONCAT31((int3)((uint)uVar11 >> 8),bVar10);
        uVar13 = FUN_180557a10(lVar6,1,iVar14,0xffffffff,uVar11);
        iVar12 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(unaff_RSI + 0xac),uVar13);
        iVar12 = *(int *)(_DAT_180c95f68 + (longlong)iVar12 * 4);
        if (iVar12 == -1) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined8 *)(_DAT_180c95f88 + (longlong)iVar12 * 8);
        }
        *(undefined8 *)(unaff_RBP + lVar16) = uVar15;
        uVar11 = CONCAT31((int3)((uint)uVar11 >> 8),bVar10);
        uVar13 = FUN_180557990(lVar6,0,iVar14,0xffffffff,uVar11);
        iVar12 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(unaff_RSI + 0xac),uVar13);
        iVar12 = *(int *)(_DAT_180c95f68 + (longlong)iVar12 * 4);
        if (iVar12 == -1) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined8 *)(_DAT_180c95f88 + (longlong)iVar12 * 8);
        }
        *(undefined8 *)(unaff_RBP + 0x158 + lVar16) = uVar15;
        uVar11 = CONCAT31((int3)((uint)uVar11 >> 8),bVar10);
        uVar13 = FUN_180557a10(lVar6,0,iVar14,0xffffffff,uVar11);
        iVar12 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(unaff_RSI + 0xac),uVar13);
        iVar12 = *(int *)(_DAT_180c95f68 + (longlong)iVar12 * 4);
        if (iVar12 == -1) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined8 *)(_DAT_180c95f88 + (longlong)iVar12 * 8);
        }
        *(undefined8 *)(unaff_RBP + 8 + lVar16) = uVar15;
        uVar11 = CONCAT31((int3)((uint)uVar11 >> 8),bVar10);
        uVar13 = FUN_180557990(lVar6,5,iVar14,0xffffffff,uVar11);
        iVar12 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(unaff_RSI + 0xac),uVar13);
        iVar12 = *(int *)(_DAT_180c95f68 + (longlong)iVar12 * 4);
        if (iVar12 == -1) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined8 *)(_DAT_180c95f88 + (longlong)iVar12 * 8);
        }
        *(undefined8 *)(unaff_RBP + 0x148 + lVar16) = uVar15;
        uVar19 = CONCAT31((int3)((uint)uVar11 >> 8),bVar10);
        uVar13 = FUN_180557a10(lVar6,5,iVar14,0xffffffff,uVar19);
        iVar14 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(unaff_RSI + 0xac),uVar13);
        iVar14 = *(int *)(_DAT_180c95f68 + (longlong)iVar14 * 4);
        if (iVar14 == -1) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined8 *)(_DAT_180c95f88 + (longlong)iVar14 * 8);
        }
        *(undefined8 *)(unaff_RBP + -8 + lVar16) = uVar15;
        uVar19 = uVar19 & 0xffffff00;
        uVar13 = FUN_180557990(lVar6,0xffffffff,1,1,uVar19);
        iVar14 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(unaff_RSI + 0xac),uVar13);
        iVar14 = *(int *)(_DAT_180c95f68 + (longlong)iVar14 * 4);
        if (iVar14 == -1) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined8 *)(_DAT_180c95f88 + (longlong)iVar14 * 8);
        }
        *(undefined8 *)(unaff_RBP + 0x160 + lVar16) = uVar15;
        uVar19 = uVar19 & 0xffffff00;
        uVar13 = FUN_180557a10(lVar6,0xffffffff,1,1,uVar19);
        iVar14 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(unaff_RSI + 0xac),uVar13);
        iVar14 = *(int *)(_DAT_180c95f68 + (longlong)iVar14 * 4);
        if (iVar14 == -1) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined8 *)(_DAT_180c95f88 + (longlong)iVar14 * 8);
        }
        *(undefined8 *)(unaff_RBP + 0x10 + lVar16) = uVar15;
        uVar19 = uVar19 & 0xffffff00;
        uVar13 = FUN_180557990(lVar6,0xffffffff,1,0,uVar19);
        iVar14 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(unaff_RSI + 0xac),uVar13);
        iVar14 = *(int *)(_DAT_180c95f68 + (longlong)iVar14 * 4);
        if (iVar14 == -1) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined8 *)(_DAT_180c95f88 + (longlong)iVar14 * 8);
        }
        *(undefined8 *)(unaff_RBP + 0x168 + lVar16) = uVar15;
        in_stack_00000020 = uVar19 & 0xffffff00;
        uVar13 = FUN_180557a10(lVar6,0xffffffff,1,0,in_stack_00000020);
        iVar14 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(unaff_RSI + 0xac),uVar13);
        iVar14 = *(int *)(_DAT_180c95f68 + (longlong)iVar14 * 4);
        if (iVar14 == -1) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined8 *)(_DAT_180c95f88 + (longlong)iVar14 * 8);
        }
        *(undefined8 *)(unaff_RBP + 0x18 + lVar16) = uVar15;
        iVar17 = iVar17 + 1;
        lVar16 = lVar16 + 0x30;
      } while (iVar17 < 7);
      FUN_18053b400((longlong)*(int *)(unaff_RSI + 0xac) * 0xe0 + _DAT_180c95fb0,iVar5,
                    unaff_RBP + 0x140,unaff_RBP + -0x10);
      unaff_R12 = CONCAT44(fStack000000000000003c,fStack0000000000000038);
      lVar16 = *(longlong *)(in_stack_00000048 + 0x98);
      unaff_R15 = in_stack_00000058;
    }
    plVar7 = *(longlong **)(lVar16 + in_stack_00000050 * 8);
    uVar13 = *(undefined4 *)(unaff_RBP + 0x330);
    *(longlong **)(unaff_RSI + 0xa210) = plVar7;
    *(undefined4 *)(unaff_RSI + 0x2564) = uVar13;
    if ((unaff_R12 != 0) && (unaff_R15 != 0)) {
      uVar15 = *(undefined8 *)(*plVar7 + 0x68);
      uVar8 = *(undefined8 *)(*(longlong *)(*(longlong *)(unaff_R13 + 0x2590) + 0xc78) + 0x38);
      FUN_18040c880(unaff_R12,&stack0x00000070,uVar15,0,0);
      FUN_18040c880(*(undefined8 *)(unaff_R15 + 0x208),unaff_RBP + -0x70,uVar8,
                    *(undefined1 *)(unaff_R13 + 0x2581),0);
      FUN_18040c880(unaff_R12,unaff_RBP + -0x50,uVar15,*(undefined1 *)(unaff_RSI + 0x2602),0);
      FUN_18040c880(unaff_R12,unaff_RBP + -0x30,uVar15,*(undefined1 *)(unaff_RSI + 0x2601),0);
      puVar9 = *(undefined8 **)(unaff_R15 + 0xd8);
      if (puVar9 == (undefined8 *)0x0) {
        *(undefined8 *)(unaff_RSI + 0x2538) = 0x3f8000003f800000;
        *(undefined8 *)(unaff_RSI + 0x2540) = 0x3f800000;
      }
      else {
        uVar15 = puVar9[1];
        *(undefined8 *)(unaff_RSI + 0x2538) = *puVar9;
        *(undefined8 *)(unaff_RSI + 0x2540) = uVar15;
        uVar18 = *(undefined4 *)(*(longlong *)(unaff_R15 + 0xd8) + 0x10);
      }
      *(undefined4 *)(unaff_RSI + 0x2548) = uVar18;
      fStack0000000000000038 = *(float *)(unaff_RBP + -0x80) - *(float *)(unaff_RBP + -0x60);
      fStack000000000000003c = *(float *)(unaff_RBP + -0x7c) - *(float *)(unaff_RBP + -0x5c);
      fVar1 = *(float *)(unaff_RBP + -0x78);
      fVar2 = *(float *)(unaff_RBP + -0x58);
      uStack0000000000000044 = 0x7f7fffff;
      fStack0000000000000040 =
           (fVar1 - *(float *)(*(longlong *)(unaff_R12 + 0x140) + 0x158) * 1.5) - fVar2;
      FUN_180285b40(unaff_RBP + -0x70,&stack0x00000058,&stack0x00000038);
      uVar18 = *(undefined4 *)(unaff_RBP + -0x18);
      *(longlong *)(unaff_RSI + 0x2528) = in_stack_00000058;
      *(undefined8 *)(unaff_RSI + 0x2530) = in_stack_00000060;
      *(undefined4 *)(unaff_RSI + 0x2554) = *(undefined4 *)(unaff_RBP + -0x38);
      fVar3 = *(float *)(unaff_RBP + -0x80);
      fVar4 = *(float *)(unaff_RBP + -0x40);
      *(float *)(unaff_RSI + 0x254c) = fVar1;
      *(float *)(unaff_RSI + 0x2550) = fVar2;
      *(undefined4 *)(unaff_RSI + 0x2558) = uVar18;
      *(float *)(unaff_RSI + 0x255c) = ABS(fVar3 - fVar4);
      *(float *)(unaff_RSI + 0x2560) =
           ABS(*(float *)(unaff_RBP + -0x20) - *(float *)(unaff_RBP + -0x80));
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x290) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805771af(undefined8 param_1,longlong param_2)
void FUN_1805771af(undefined8 param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  longlong in_RAX;
  undefined8 uVar14;
  longlong lVar15;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int iVar16;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R15;
  undefined4 unaff_XMM6_Da;
  uint in_stack_00000020;
  uint uVar17;
  int iStack0000000000000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  undefined4 uStack0000000000000044;
  longlong lStack0000000000000048;
  ulonglong uStack0000000000000050;
  longlong in_stack_00000058;
  undefined8 in_stack_00000060;
  
  lStack0000000000000048 = in_RAX + _DAT_180c95fb0;
  lVar15 = *(longlong *)(lStack0000000000000048 + 0x98);
  lVar5 = *(longlong *)(param_2 + 0xb0);
  iStack0000000000000030 = *(int *)(lVar5 + 0x20);
  uStack0000000000000050 = (ulonglong)iStack0000000000000030;
  if (((ulonglong)(*(longlong *)(lStack0000000000000048 + 0xa0) - lVar15 >> 3) <=
       uStack0000000000000050) || (*(longlong *)(lVar15 + uStack0000000000000050 * 8) == 0)) {
    iVar16 = 0;
    lVar15 = 0;
    do {
      bVar9 = 5 < iVar16;
      uVar12 = CONCAT31((int3)(in_stack_00000020 >> 8),bVar9);
      iVar13 = 5;
      if (iVar16 < 5) {
        iVar13 = iVar16;
      }
      uVar10 = FUN_180557990(lVar5,2,iVar13,0xffffffff,uVar12);
      iVar11 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(unaff_RSI + 0xac),uVar10);
      iVar11 = *(int *)(_DAT_180c95f68 + (longlong)iVar11 * 4);
      if (iVar11 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(_DAT_180c95f88 + (longlong)iVar11 * 8);
      }
      *(undefined8 *)(unaff_RBP + 0x140 + lVar15) = uVar14;
      uVar10 = CONCAT31((int3)((uint)uVar12 >> 8),bVar9);
      uVar12 = FUN_180557a10(lVar5,2,iVar13,0xffffffff,uVar10);
      iVar11 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(unaff_RSI + 0xac),uVar12);
      iVar11 = *(int *)(_DAT_180c95f68 + (longlong)iVar11 * 4);
      if (iVar11 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(_DAT_180c95f88 + (longlong)iVar11 * 8);
      }
      *(undefined8 *)(unaff_RBP + -0x10 + lVar15) = uVar14;
      uVar10 = CONCAT31((int3)((uint)uVar10 >> 8),bVar9);
      uVar12 = FUN_180557990(lVar5,1,iVar13,0xffffffff,uVar10);
      iVar11 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(unaff_RSI + 0xac),uVar12);
      iVar11 = *(int *)(_DAT_180c95f68 + (longlong)iVar11 * 4);
      if (iVar11 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(_DAT_180c95f88 + (longlong)iVar11 * 8);
      }
      *(undefined8 *)(unaff_RBP + 0x150 + lVar15) = uVar14;
      uVar10 = CONCAT31((int3)((uint)uVar10 >> 8),bVar9);
      uVar12 = FUN_180557a10(lVar5,1,iVar13,0xffffffff,uVar10);
      iVar11 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(unaff_RSI + 0xac),uVar12);
      iVar11 = *(int *)(_DAT_180c95f68 + (longlong)iVar11 * 4);
      if (iVar11 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(_DAT_180c95f88 + (longlong)iVar11 * 8);
      }
      *(undefined8 *)(unaff_RBP + lVar15) = uVar14;
      uVar10 = CONCAT31((int3)((uint)uVar10 >> 8),bVar9);
      uVar12 = FUN_180557990(lVar5,0,iVar13,0xffffffff,uVar10);
      iVar11 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(unaff_RSI + 0xac),uVar12);
      iVar11 = *(int *)(_DAT_180c95f68 + (longlong)iVar11 * 4);
      if (iVar11 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(_DAT_180c95f88 + (longlong)iVar11 * 8);
      }
      *(undefined8 *)(unaff_RBP + 0x158 + lVar15) = uVar14;
      uVar10 = CONCAT31((int3)((uint)uVar10 >> 8),bVar9);
      uVar12 = FUN_180557a10(lVar5,0,iVar13,0xffffffff,uVar10);
      iVar11 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(unaff_RSI + 0xac),uVar12);
      iVar11 = *(int *)(_DAT_180c95f68 + (longlong)iVar11 * 4);
      if (iVar11 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(_DAT_180c95f88 + (longlong)iVar11 * 8);
      }
      *(undefined8 *)(unaff_RBP + 8 + lVar15) = uVar14;
      uVar10 = CONCAT31((int3)((uint)uVar10 >> 8),bVar9);
      uVar12 = FUN_180557990(lVar5,5,iVar13,0xffffffff,uVar10);
      iVar11 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(unaff_RSI + 0xac),uVar12);
      iVar11 = *(int *)(_DAT_180c95f68 + (longlong)iVar11 * 4);
      if (iVar11 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(_DAT_180c95f88 + (longlong)iVar11 * 8);
      }
      *(undefined8 *)(unaff_RBP + 0x148 + lVar15) = uVar14;
      uVar17 = CONCAT31((int3)((uint)uVar10 >> 8),bVar9);
      uVar12 = FUN_180557a10(lVar5,5,iVar13,0xffffffff,uVar17);
      iVar13 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(unaff_RSI + 0xac),uVar12);
      iVar13 = *(int *)(_DAT_180c95f68 + (longlong)iVar13 * 4);
      if (iVar13 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(_DAT_180c95f88 + (longlong)iVar13 * 8);
      }
      *(undefined8 *)(unaff_RBP + -8 + lVar15) = uVar14;
      uVar17 = uVar17 & 0xffffff00;
      uVar12 = FUN_180557990(lVar5,0xffffffff,1,1,uVar17);
      iVar13 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(unaff_RSI + 0xac),uVar12);
      iVar13 = *(int *)(_DAT_180c95f68 + (longlong)iVar13 * 4);
      if (iVar13 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(_DAT_180c95f88 + (longlong)iVar13 * 8);
      }
      *(undefined8 *)(unaff_RBP + 0x160 + lVar15) = uVar14;
      uVar17 = uVar17 & 0xffffff00;
      uVar12 = FUN_180557a10(lVar5,0xffffffff,1,1,uVar17);
      iVar13 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(unaff_RSI + 0xac),uVar12);
      iVar13 = *(int *)(_DAT_180c95f68 + (longlong)iVar13 * 4);
      if (iVar13 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(_DAT_180c95f88 + (longlong)iVar13 * 8);
      }
      *(undefined8 *)(unaff_RBP + 0x10 + lVar15) = uVar14;
      uVar17 = uVar17 & 0xffffff00;
      uVar12 = FUN_180557990(lVar5,0xffffffff,1,0,uVar17);
      iVar13 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(unaff_RSI + 0xac),uVar12);
      iVar13 = *(int *)(_DAT_180c95f68 + (longlong)iVar13 * 4);
      if (iVar13 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(_DAT_180c95f88 + (longlong)iVar13 * 8);
      }
      *(undefined8 *)(unaff_RBP + 0x168 + lVar15) = uVar14;
      in_stack_00000020 = uVar17 & 0xffffff00;
      uVar12 = FUN_180557a10(lVar5,0xffffffff,1,0,in_stack_00000020);
      iVar13 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(unaff_RSI + 0xac),uVar12);
      iVar13 = *(int *)(_DAT_180c95f68 + (longlong)iVar13 * 4);
      if (iVar13 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(_DAT_180c95f88 + (longlong)iVar13 * 8);
      }
      *(undefined8 *)(unaff_RBP + 0x18 + lVar15) = uVar14;
      iVar16 = iVar16 + 1;
      lVar15 = lVar15 + 0x30;
    } while (iVar16 < 7);
    FUN_18053b400((longlong)*(int *)(unaff_RSI + 0xac) * 0xe0 + _DAT_180c95fb0,
                  iStack0000000000000030,unaff_RBP + 0x140,unaff_RBP + -0x10);
    unaff_R12 = CONCAT44(fStack000000000000003c,fStack0000000000000038);
    lVar15 = *(longlong *)(lStack0000000000000048 + 0x98);
    unaff_R15 = in_stack_00000058;
  }
  plVar6 = *(longlong **)(lVar15 + uStack0000000000000050 * 8);
  uVar12 = *(undefined4 *)(unaff_RBP + 0x330);
  *(longlong **)(unaff_RSI + 0xa210) = plVar6;
  *(undefined4 *)(unaff_RSI + 0x2564) = uVar12;
  if ((unaff_R12 != 0) && (unaff_R15 != 0)) {
    uVar14 = *(undefined8 *)(*plVar6 + 0x68);
    uVar7 = *(undefined8 *)(*(longlong *)(*(longlong *)(unaff_R13 + 0x2590) + 0xc78) + 0x38);
    FUN_18040c880(unaff_R12,&stack0x00000070,uVar14,0);
    FUN_18040c880(*(undefined8 *)(unaff_R15 + 0x208),unaff_RBP + -0x70,uVar7,
                  *(undefined1 *)(unaff_R13 + 0x2581));
    FUN_18040c880(unaff_R12,unaff_RBP + -0x50,uVar14,*(undefined1 *)(unaff_RSI + 0x2602));
    FUN_18040c880(unaff_R12,unaff_RBP + -0x30,uVar14,*(undefined1 *)(unaff_RSI + 0x2601));
    puVar8 = *(undefined8 **)(unaff_R15 + 0xd8);
    if (puVar8 == (undefined8 *)0x0) {
      *(undefined8 *)(unaff_RSI + 0x2538) = 0x3f8000003f800000;
      *(undefined8 *)(unaff_RSI + 0x2540) = 0x3f800000;
    }
    else {
      uVar14 = puVar8[1];
      *(undefined8 *)(unaff_RSI + 0x2538) = *puVar8;
      *(undefined8 *)(unaff_RSI + 0x2540) = uVar14;
      unaff_XMM6_Da = *(undefined4 *)(*(longlong *)(unaff_R15 + 0xd8) + 0x10);
    }
    *(undefined4 *)(unaff_RSI + 0x2548) = unaff_XMM6_Da;
    fStack0000000000000038 = *(float *)(unaff_RBP + -0x80) - *(float *)(unaff_RBP + -0x60);
    fStack000000000000003c = *(float *)(unaff_RBP + -0x7c) - *(float *)(unaff_RBP + -0x5c);
    fVar1 = *(float *)(unaff_RBP + -0x78);
    fVar2 = *(float *)(unaff_RBP + -0x58);
    uStack0000000000000044 = 0x7f7fffff;
    fStack0000000000000040 =
         (fVar1 - *(float *)(*(longlong *)(unaff_R12 + 0x140) + 0x158) * 1.5) - fVar2;
    FUN_180285b40(unaff_RBP + -0x70,&stack0x00000058,&stack0x00000038);
    uVar12 = *(undefined4 *)(unaff_RBP + -0x18);
    *(longlong *)(unaff_RSI + 0x2528) = in_stack_00000058;
    *(undefined8 *)(unaff_RSI + 0x2530) = in_stack_00000060;
    *(undefined4 *)(unaff_RSI + 0x2554) = *(undefined4 *)(unaff_RBP + -0x38);
    fVar3 = *(float *)(unaff_RBP + -0x80);
    fVar4 = *(float *)(unaff_RBP + -0x40);
    *(float *)(unaff_RSI + 0x254c) = fVar1;
    *(float *)(unaff_RSI + 0x2550) = fVar2;
    *(undefined4 *)(unaff_RSI + 0x2558) = uVar12;
    *(float *)(unaff_RSI + 0x255c) = ABS(fVar3 - fVar4);
    *(float *)(unaff_RSI + 0x2560) =
         ABS(*(float *)(unaff_RBP + -0x20) - *(float *)(unaff_RBP + -0x80));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x290) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



