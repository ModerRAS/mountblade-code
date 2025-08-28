#include "TaleWorlds.Native.Split.h"

// 03_rendering_part559.c - 8 个函数

// 函数: void FUN_1805771cb(undefined8 param_1,longlong param_2)
void FUN_1805771cb(undefined8 param_1,longlong param_2)

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
  longlong in_stack_00000048;
  ulonglong uStack0000000000000050;
  longlong in_stack_00000058;
  undefined8 in_stack_00000060;
  
  lVar15 = *(longlong *)(in_RAX + 0x98);
  lVar5 = *(longlong *)(param_2 + 0xb0);
  iStack0000000000000030 = *(int *)(lVar5 + 0x20);
  uStack0000000000000050 = (ulonglong)iStack0000000000000030;
  if (((ulonglong)(*(longlong *)(in_RAX + 0xa0) - lVar15 >> 3) <= uStack0000000000000050) ||
     (*(longlong *)(lVar15 + uStack0000000000000050 * 8) == 0)) {
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
    lVar15 = *(longlong *)(in_stack_00000048 + 0x98);
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





// 函数: void FUN_1805776ba(undefined4 param_1)
void FUN_1805776ba(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *in_RAX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R15;
  undefined4 uVar8;
  undefined4 unaff_XMM6_Da;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  if (unaff_R15 != 0) {
    uVar5 = *(undefined8 *)(*in_RAX + 0x68);
    uVar6 = *(undefined8 *)(*(longlong *)(*(longlong *)(unaff_R13 + 0x2590) + 0xc78) + 0x38);
    FUN_18040c880(param_1,&stack0x00000070,uVar5,0);
    uVar8 = FUN_18040c880(*(undefined8 *)(unaff_R15 + 0x208),unaff_RBP + -0x70,uVar6,
                          *(undefined1 *)(unaff_R13 + 0x2581));
    uVar8 = FUN_18040c880(uVar8,unaff_RBP + -0x50,uVar5,*(undefined1 *)(unaff_RSI + 0x2602));
    FUN_18040c880(uVar8,unaff_RBP + -0x30,uVar5,*(undefined1 *)(unaff_RSI + 0x2601));
    puVar7 = *(undefined8 **)(unaff_R15 + 0xd8);
    if (puVar7 == (undefined8 *)0x0) {
      *(undefined8 *)(unaff_RSI + 0x2538) = 0x3f8000003f800000;
      *(undefined8 *)(unaff_RSI + 0x2540) = 0x3f800000;
    }
    else {
      uVar5 = puVar7[1];
      *(undefined8 *)(unaff_RSI + 0x2538) = *puVar7;
      *(undefined8 *)(unaff_RSI + 0x2540) = uVar5;
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
    uVar8 = *(undefined4 *)(unaff_RBP + -0x18);
    *(undefined8 *)(unaff_RSI + 0x2528) = in_stack_00000058;
    *(undefined8 *)(unaff_RSI + 0x2530) = in_stack_00000060;
    *(undefined4 *)(unaff_RSI + 0x2554) = *(undefined4 *)(unaff_RBP + -0x38);
    fVar3 = *(float *)(unaff_RBP + -0x80);
    fVar4 = *(float *)(unaff_RBP + -0x40);
    *(float *)(unaff_RSI + 0x254c) = fVar1;
    *(float *)(unaff_RSI + 0x2550) = fVar2;
    *(undefined4 *)(unaff_RSI + 0x2558) = uVar8;
    *(float *)(unaff_RSI + 0x255c) = ABS(fVar3 - fVar4);
    *(float *)(unaff_RSI + 0x2560) =
         ABS(*(float *)(unaff_RBP + -0x20) - *(float *)(unaff_RBP + -0x80));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x290) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1805776ee(longlong param_1)
void FUN_1805776ee(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R15;
  undefined4 uVar7;
  undefined4 unaff_XMM6_Da;
  float in_stack_00000038;
  float fStack000000000000003c;
  float in_stack_00000040;
  undefined4 uStack0000000000000044;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  FUN_18040c880();
  uVar7 = FUN_18040c880(*(undefined8 *)(unaff_R15 + 0x208),unaff_RBP + -0x70,uVar5,
                        *(undefined1 *)(unaff_R13 + 0x2581));
  uVar7 = FUN_18040c880(uVar7,unaff_RBP + -0x50);
  FUN_18040c880(uVar7,unaff_RBP + -0x30);
  puVar6 = *(undefined8 **)(unaff_R15 + 0xd8);
  if (puVar6 == (undefined8 *)0x0) {
    *(undefined8 *)(unaff_RSI + 0x2538) = 0x3f8000003f800000;
    *(undefined8 *)(unaff_RSI + 0x2540) = 0x3f800000;
  }
  else {
    uVar5 = puVar6[1];
    *(undefined8 *)(unaff_RSI + 0x2538) = *puVar6;
    *(undefined8 *)(unaff_RSI + 0x2540) = uVar5;
    unaff_XMM6_Da = *(undefined4 *)(*(longlong *)(unaff_R15 + 0xd8) + 0x10);
  }
  *(undefined4 *)(unaff_RSI + 0x2548) = unaff_XMM6_Da;
  in_stack_00000038 = *(float *)(unaff_RBP + -0x80) - *(float *)(unaff_RBP + -0x60);
  fStack000000000000003c = *(float *)(unaff_RBP + -0x7c) - *(float *)(unaff_RBP + -0x5c);
  fVar1 = *(float *)(unaff_RBP + -0x78);
  fVar2 = *(float *)(unaff_RBP + -0x58);
  uStack0000000000000044 = 0x7f7fffff;
  in_stack_00000040 = (fVar1 - *(float *)(*(longlong *)(unaff_R12 + 0x140) + 0x158) * 1.5) - fVar2;
  FUN_180285b40(unaff_RBP + -0x70,&stack0x00000058,&stack0x00000038);
  uVar7 = *(undefined4 *)(unaff_RBP + -0x18);
  *(undefined8 *)(unaff_RSI + 0x2528) = in_stack_00000058;
  *(undefined8 *)(unaff_RSI + 0x2530) = in_stack_00000060;
  *(undefined4 *)(unaff_RSI + 0x2554) = *(undefined4 *)(unaff_RBP + -0x38);
  fVar3 = *(float *)(unaff_RBP + -0x80);
  fVar4 = *(float *)(unaff_RBP + -0x40);
  *(float *)(unaff_RSI + 0x254c) = fVar1;
  *(float *)(unaff_RSI + 0x2550) = fVar2;
  *(undefined4 *)(unaff_RSI + 0x2558) = uVar7;
  *(float *)(unaff_RSI + 0x255c) = ABS(fVar3 - fVar4);
  *(float *)(unaff_RSI + 0x2560) =
       ABS(*(float *)(unaff_RBP + -0x20) - *(float *)(unaff_RBP + -0x80));
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x290) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18057788a(void)
void FUN_18057788a(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x290) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18057789a(void)
void FUN_18057789a(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x290) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1805778a2(void)
void FUN_1805778a2(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x290) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1805778d0(longlong param_1,longlong param_2)
void FUN_1805778d0(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x2510) != param_2) {
    if (*(longlong *)(param_1 + 0x2510) != 0) {
      if ((*(longlong *)(param_1 + 0x3450) != 0) || (*(longlong *)(param_1 + 0x3458) != 0)) {
        (**(code **)(param_1 + 0x3458))(*(longlong *)(param_1 + 0x3450),&DAT_180a199a0,0);
      }
      *(undefined8 *)(param_1 + 0x3450) = 0;
      *(undefined8 *)(param_1 + 0x3458) = 0;
    }
    *(longlong *)(param_1 + 0x2510) = param_2;
    if (param_2 != 0) {
      *(longlong *)(param_1 + 0x3450) = param_2;
      *(undefined **)(param_1 + 0x3458) = &UNK_18057c600;
    }
  }
  return;
}





// 函数: void FUN_180577da0(longlong *param_1,char param_2)
void FUN_180577da0(longlong *param_1,char param_2)

{
  float fVar1;
  float fVar2;
  
  if (param_2 == '\0') {
    fVar2 = 8.0;
    (**(code **)(*param_1 + 0x150))(param_1,0x41000000,0,0);
  }
  else {
    (**(code **)(*param_1 + 0x150))(param_1,0,0x3f800000,0x3f800000);
    fVar2 = 0.0;
  }
  fVar1 = fVar2 - 1.665;
  *(bool *)(param_1 + 0x4b8) = fVar2 <= 2.0;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar2 = 1.0 - fVar1 * 0.29985008;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *(float *)((longlong)param_1 + 0x25c4) = fVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



