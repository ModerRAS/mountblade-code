#include "TaleWorlds.Native.Split.h"

// 03_rendering_part563.c - 1 个函数

// 函数: void FUN_1805791e0(float param_1,ulonglong param_2)
void FUN_1805791e0(float param_1,ulonglong param_2)

{
  ushort *puVar1;
  uint uVar2;
  float fVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ushort uVar21;
  ulonglong in_RCX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong unaff_R14;
  int unaff_R15D;
  undefined4 unaff_000000bc;
  bool in_ZF;
  float unaff_XMM8_Da;
  uint in_stack_00000040;
  uint uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  if (in_ZF) {
    unaff_RSI = param_2;
  }
  if (*(int *)(unaff_RDI + 0x564) < 0) {
    if ((unaff_R14 >> 0x1c & 1) == 0) {
      if ((unaff_R14 & 0x20000000000) != 0) goto LAB_180579837;
      uVar5 = *(undefined4 *)(unaff_RDI + 0x558);
      if ((unaff_XMM8_Da != *(float *)(unaff_RBX + 0xa9e4)) ||
         (*(int *)(unaff_RBX + 0xa8b0) != unaff_R15D)) {
        *(undefined4 *)(unaff_RBX + 0xa9e4) = 0x3f800000;
        *(undefined4 *)(unaff_RBX + 0xa9e8) = 0x40400000;
        *(undefined4 *)(unaff_RBX + 0xabd4) = 0x3f800000;
        *(undefined4 *)(unaff_RBX + 0xabd8) = 0x40400000;
        FUN_180662190(&stack0x00000050,*(undefined1 *)(unaff_RBX + 0x2603),
                      *(undefined1 *)(unaff_RBX + 0x2605),*(undefined1 *)(unaff_RBX + 0x2607),1);
        uVar4 = *(undefined1 *)(unaff_RBP + -0x1c);
        uVar15 = *(undefined8 *)(unaff_RBP + 0xf0);
        uVar16 = *(undefined8 *)(unaff_RBP + 0xf8);
        *(undefined8 *)(unaff_RBX + 0xa820) = 0;
        *(undefined8 *)(unaff_RBX + 0xa828) = 0;
        *(undefined1 *)(unaff_RBX + 0xa8b4) = uVar4;
        uVar4 = *(undefined1 *)(unaff_RBP + -0x1b);
        *(undefined8 *)(unaff_RBX + 0xa9c0) = uVar15;
        *(undefined8 *)(unaff_RBX + 0xa9c8) = uVar16;
        *(undefined1 *)(unaff_RBX + 0xa8b5) = uVar4;
        uVar4 = *(undefined1 *)(unaff_RBP + -0x1a);
        *(ulonglong *)(unaff_RBX + 0xa830) = CONCAT44(uStack0000000000000064,uStack0000000000000060)
        ;
        *(undefined8 *)(unaff_RBX + 0xa838) = in_stack_00000068;
        uVar15 = *(undefined8 *)(unaff_RBP + -0x80);
        uVar16 = *(undefined8 *)(unaff_RBP + -0x78);
        *(undefined8 *)(unaff_RBX + 0xa840) = in_stack_00000070;
        *(undefined8 *)(unaff_RBX + 0xa848) = in_stack_00000078;
        uVar17 = *(undefined8 *)(unaff_RBP + -0x70);
        uVar18 = *(undefined8 *)(unaff_RBP + -0x68);
        *(undefined8 *)(unaff_RBX + 0xa850) = uVar15;
        *(undefined8 *)(unaff_RBX + 0xa858) = uVar16;
        uVar15 = *(undefined8 *)(unaff_RBP + -0x60);
        uVar16 = *(undefined8 *)(unaff_RBP + -0x58);
        *(undefined8 *)(unaff_RBX + 0xa860) = uVar17;
        *(undefined8 *)(unaff_RBX + 0xa868) = uVar18;
        uVar17 = *(undefined8 *)(unaff_RBP + -0x50);
        uVar18 = *(undefined8 *)(unaff_RBP + -0x48);
        *(undefined8 *)(unaff_RBX + 0xa870) = uVar15;
        *(undefined8 *)(unaff_RBX + 0xa878) = uVar16;
        uVar7 = *(undefined4 *)(unaff_RBP + -0x40);
        uVar8 = *(undefined4 *)(unaff_RBP + -0x3c);
        uVar9 = *(undefined4 *)(unaff_RBP + -0x38);
        uVar10 = *(undefined4 *)(unaff_RBP + -0x34);
        *(undefined1 *)(unaff_RBX + 0xa8b6) = uVar4;
        uVar4 = *(undefined1 *)(unaff_RBP + 0x104);
        *(undefined8 *)(unaff_RBX + 0xa880) = uVar17;
        *(undefined8 *)(unaff_RBX + 0xa888) = uVar18;
        uVar11 = *(undefined4 *)(unaff_RBP + -0x30);
        uVar12 = *(undefined4 *)(unaff_RBP + -0x2c);
        uVar13 = *(undefined4 *)(unaff_RBP + -0x28);
        uVar14 = *(undefined4 *)(unaff_RBP + -0x24);
        *(undefined1 *)(unaff_RBX + 0xa9d4) = uVar4;
        *(undefined4 *)(unaff_RBX + 0xa9d0) = *(undefined4 *)(unaff_RBP + 0x100);
        uVar6 = *(undefined4 *)(unaff_RBP + 0x108);
        *(undefined4 *)(unaff_RBX + 0xa890) = uVar7;
        *(undefined4 *)(unaff_RBX + 0xa894) = uVar8;
        *(undefined4 *)(unaff_RBX + 0xa898) = uVar9;
        *(undefined4 *)(unaff_RBX + 0xa89c) = uVar10;
        *(undefined4 *)(unaff_RBX + 0xa9d8) = uVar6;
        *(undefined4 *)(unaff_RBX + 0xa8a0) = uVar11;
        *(undefined4 *)(unaff_RBX + 0xa8a4) = uVar12;
        *(undefined4 *)(unaff_RBX + 0xa8a8) = uVar13;
        *(undefined4 *)(unaff_RBX + 0xa8ac) = uVar14;
        *(int *)(unaff_RBX + 0xa8b0) = unaff_R15D;
        *(undefined1 *)(unaff_RBX + 0xa9f0) = 1;
        *(undefined4 *)(unaff_RBX + 0xa9c8) = uVar5;
        FUN_180662190(&stack0x00000050,*(undefined1 *)(unaff_RBX + 0x2604),
                      *(undefined1 *)(unaff_RBX + 0x2606),*(undefined1 *)(unaff_RBX + 0x2607),1);
        uVar15 = *(undefined8 *)(unaff_RBP + 0xf0);
        uVar16 = *(undefined8 *)(unaff_RBP + 0xf8);
        *(undefined1 *)(unaff_RBX + 0xaaa4) = *(undefined1 *)(unaff_RBP + -0x1c);
        uVar4 = *(undefined1 *)(unaff_RBP + -0x1b);
        *(undefined8 *)(unaff_RBX + 0xaa10) = 0;
        *(undefined8 *)(unaff_RBX + 0xaa18) = 0;
        *(undefined1 *)(unaff_RBX + 0xaaa5) = uVar4;
        uVar4 = *(undefined1 *)(unaff_RBP + -0x1a);
        *(undefined8 *)(unaff_RBX + 0xabb0) = uVar15;
        *(undefined8 *)(unaff_RBX + 0xabb8) = uVar16;
        *(undefined1 *)(unaff_RBX + 0xaaa6) = uVar4;
        uVar4 = *(undefined1 *)(unaff_RBP + 0x104);
        *(ulonglong *)(unaff_RBX + 0xaa20) = CONCAT44(uStack0000000000000064,uStack0000000000000060)
        ;
        *(undefined8 *)(unaff_RBX + 0xaa28) = in_stack_00000068;
        uVar15 = *(undefined8 *)(unaff_RBP + -0x80);
        uVar16 = *(undefined8 *)(unaff_RBP + -0x78);
        *(undefined8 *)(unaff_RBX + 0xaa30) = in_stack_00000070;
        *(undefined8 *)(unaff_RBX + 0xaa38) = in_stack_00000078;
        uVar17 = *(undefined8 *)(unaff_RBP + -0x70);
        uVar18 = *(undefined8 *)(unaff_RBP + -0x68);
        *(undefined8 *)(unaff_RBX + 0xaa40) = uVar15;
        *(undefined8 *)(unaff_RBX + 0xaa48) = uVar16;
        uVar15 = *(undefined8 *)(unaff_RBP + -0x60);
        uVar16 = *(undefined8 *)(unaff_RBP + -0x58);
        *(undefined1 *)(unaff_RBX + 0xabc4) = uVar4;
        uVar6 = *(undefined4 *)(unaff_RBP + 0x100);
        *(undefined8 *)(unaff_RBX + 0xaa50) = uVar17;
        *(undefined8 *)(unaff_RBX + 0xaa58) = uVar18;
        uVar17 = *(undefined8 *)(unaff_RBP + -0x50);
        uVar18 = *(undefined8 *)(unaff_RBP + -0x48);
        *(undefined4 *)(unaff_RBX + 0xabc0) = uVar6;
        *(undefined4 *)(unaff_RBX + 0xabc8) = *(undefined4 *)(unaff_RBP + 0x108);
        *(int *)(unaff_RBX + 0xaaa0) = unaff_R15D;
        *(undefined8 *)(unaff_RBX + 0xaa60) = uVar15;
        *(undefined8 *)(unaff_RBX + 0xaa68) = uVar16;
        param_1 = *(float *)(unaff_RBP + -0x40);
        uVar6 = *(undefined4 *)(unaff_RBP + -0x3c);
        uVar7 = *(undefined4 *)(unaff_RBP + -0x38);
        uVar8 = *(undefined4 *)(unaff_RBP + -0x34);
        *(undefined8 *)(unaff_RBX + 0xaa70) = uVar17;
        *(undefined8 *)(unaff_RBX + 0xaa78) = uVar18;
        uVar9 = *(undefined4 *)(unaff_RBP + -0x30);
        uVar10 = *(undefined4 *)(unaff_RBP + -0x2c);
        uVar11 = *(undefined4 *)(unaff_RBP + -0x28);
        uVar12 = *(undefined4 *)(unaff_RBP + -0x24);
        *(float *)(unaff_RBX + 0xaa80) = param_1;
        *(undefined4 *)(unaff_RBX + 0xaa84) = uVar6;
        *(undefined4 *)(unaff_RBX + 0xaa88) = uVar7;
        *(undefined4 *)(unaff_RBX + 0xaa8c) = uVar8;
        *(undefined4 *)(unaff_RBX + 0xaa90) = uVar9;
        *(undefined4 *)(unaff_RBX + 0xaa94) = uVar10;
        *(undefined4 *)(unaff_RBX + 0xaa98) = uVar11;
        *(undefined4 *)(unaff_RBX + 0xaa9c) = uVar12;
        *(undefined1 *)(unaff_RBX + 44000) = 1;
        *(undefined4 *)(unaff_RBX + 0xabb8) = uVar5;
      }
    }
    else if ((unaff_XMM8_Da != *(float *)(unaff_RBX + 0xa9e4)) ||
            (*(int *)(unaff_RBX + 0xa8b0) != 1)) {
      FUN_180662190(&stack0x00000050,*(undefined1 *)(unaff_RBX + 0x2603),
                    *(undefined1 *)(unaff_RBX + 0x2605),*(undefined1 *)(unaff_RBX + 0x2607),1);
      uVar4 = *(undefined1 *)(unaff_RBP + -0x1c);
      uVar15 = *(undefined8 *)(unaff_RBP + 0xf0);
      uVar16 = *(undefined8 *)(unaff_RBP + 0xf8);
      *(undefined8 *)(unaff_RBX + 0xa820) = 0;
      *(undefined8 *)(unaff_RBX + 0xa828) = 0;
      *(undefined1 *)(unaff_RBX + 0xa8b4) = uVar4;
      uVar4 = *(undefined1 *)(unaff_RBP + -0x1b);
      *(undefined8 *)(unaff_RBX + 0xa9c0) = uVar15;
      *(undefined8 *)(unaff_RBX + 0xa9c8) = uVar16;
      *(undefined1 *)(unaff_RBX + 0xa8b5) = uVar4;
      uVar4 = *(undefined1 *)(unaff_RBP + -0x1a);
      *(ulonglong *)(unaff_RBX + 0xa830) = CONCAT44(uStack0000000000000064,uStack0000000000000060);
      *(undefined8 *)(unaff_RBX + 0xa838) = in_stack_00000068;
      uVar15 = *(undefined8 *)(unaff_RBP + -0x80);
      uVar16 = *(undefined8 *)(unaff_RBP + -0x78);
      *(undefined8 *)(unaff_RBX + 0xa840) = in_stack_00000070;
      *(undefined8 *)(unaff_RBX + 0xa848) = in_stack_00000078;
      uVar17 = *(undefined8 *)(unaff_RBP + -0x70);
      uVar18 = *(undefined8 *)(unaff_RBP + -0x68);
      *(undefined8 *)(unaff_RBX + 0xa850) = uVar15;
      *(undefined8 *)(unaff_RBX + 0xa858) = uVar16;
      uVar15 = *(undefined8 *)(unaff_RBP + -0x60);
      uVar16 = *(undefined8 *)(unaff_RBP + -0x58);
      *(undefined8 *)(unaff_RBX + 0xa860) = uVar17;
      *(undefined8 *)(unaff_RBX + 0xa868) = uVar18;
      uVar17 = *(undefined8 *)(unaff_RBP + -0x50);
      uVar18 = *(undefined8 *)(unaff_RBP + -0x48);
      *(undefined8 *)(unaff_RBX + 0xa870) = uVar15;
      *(undefined8 *)(unaff_RBX + 0xa878) = uVar16;
      uVar6 = *(undefined4 *)(unaff_RBP + -0x40);
      uVar7 = *(undefined4 *)(unaff_RBP + -0x3c);
      uVar8 = *(undefined4 *)(unaff_RBP + -0x38);
      uVar9 = *(undefined4 *)(unaff_RBP + -0x34);
      *(undefined1 *)(unaff_RBX + 0xa8b6) = uVar4;
      uVar4 = *(undefined1 *)(unaff_RBP + 0x104);
      *(undefined8 *)(unaff_RBX + 0xa880) = uVar17;
      *(undefined8 *)(unaff_RBX + 0xa888) = uVar18;
      uVar10 = *(undefined4 *)(unaff_RBP + -0x30);
      uVar11 = *(undefined4 *)(unaff_RBP + -0x2c);
      uVar12 = *(undefined4 *)(unaff_RBP + -0x28);
      uVar13 = *(undefined4 *)(unaff_RBP + -0x24);
      *(undefined1 *)(unaff_RBX + 0xa9d4) = uVar4;
      *(undefined4 *)(unaff_RBX + 0xa9d0) = *(undefined4 *)(unaff_RBP + 0x100);
      uVar5 = *(undefined4 *)(unaff_RBP + 0x108);
      *(undefined4 *)(unaff_RBX + 0xa890) = uVar6;
      *(undefined4 *)(unaff_RBX + 0xa894) = uVar7;
      *(undefined4 *)(unaff_RBX + 0xa898) = uVar8;
      *(undefined4 *)(unaff_RBX + 0xa89c) = uVar9;
      *(undefined4 *)(unaff_RBX + 0xa9d8) = uVar5;
      *(undefined4 *)(unaff_RBX + 0xa8a0) = uVar10;
      *(undefined4 *)(unaff_RBX + 0xa8a4) = uVar11;
      *(undefined4 *)(unaff_RBX + 0xa8a8) = uVar12;
      *(undefined4 *)(unaff_RBX + 0xa8ac) = uVar13;
      *(undefined4 *)(unaff_RBX + 0xa8b0) = 1;
      *(undefined1 *)(unaff_RBX + 0xa9f0) = 1;
      FUN_180662190(&stack0x00000050,*(undefined1 *)(unaff_RBX + 0x2604),
                    *(undefined1 *)(unaff_RBX + 0x2606),*(undefined1 *)(unaff_RBX + 0x2607),1);
      *(undefined4 *)(unaff_RBX + 0xaaa0) = 1;
      goto LAB_1805793a4;
    }
  }
  else if ((unaff_R14 & 0x20000000000) == 0) {
    uVar2 = *(uint *)(*(longlong *)
                       ((longlong)*(int *)(unaff_RDI + 0x564) * 0xa60 + 0x3778 +
                       *(longlong *)(unaff_RDI + 0x8d8)) + 0x8c0);
    if ((unaff_XMM8_Da != *(float *)(unaff_RBX + 0xa9e4)) || (*(int *)(unaff_RBX + 0xa8b0) != 2)) {
      FUN_180662190(&stack0x00000050,*(undefined1 *)(unaff_RBX + 0x2603),
                    *(undefined1 *)(unaff_RBX + 0x2605),*(undefined1 *)(unaff_RBX + 0x2607),1);
      uVar15 = *(undefined8 *)(unaff_RBP + 0xf0);
      uVar16 = *(undefined8 *)(unaff_RBP + 0xf8);
      *(undefined8 *)(unaff_RBX + 0xa820) = 0;
      *(undefined8 *)(unaff_RBX + 0xa828) = 0;
      *(undefined1 *)(unaff_RBX + 0xa8b4) = *(undefined1 *)(unaff_RBP + -0x1c);
      uVar4 = *(undefined1 *)(unaff_RBP + -0x1b);
      *(undefined8 *)(unaff_RBX + 0xa9c0) = uVar15;
      *(undefined8 *)(unaff_RBX + 0xa9c8) = uVar16;
      *(undefined1 *)(unaff_RBX + 0xa8b5) = uVar4;
      uVar4 = *(undefined1 *)(unaff_RBP + -0x1a);
      *(ulonglong *)(unaff_RBX + 0xa830) = CONCAT44(uStack0000000000000064,uVar2) ^ 0x80000000;
      *(undefined8 *)(unaff_RBX + 0xa838) = in_stack_00000068;
      uVar15 = *(undefined8 *)(unaff_RBP + -0x80);
      uVar16 = *(undefined8 *)(unaff_RBP + -0x78);
      *(undefined8 *)(unaff_RBX + 0xa840) = in_stack_00000070;
      *(undefined8 *)(unaff_RBX + 0xa848) = in_stack_00000078;
      uVar17 = *(undefined8 *)(unaff_RBP + -0x70);
      uVar18 = *(undefined8 *)(unaff_RBP + -0x68);
      *(undefined8 *)(unaff_RBX + 0xa850) = uVar15;
      *(undefined8 *)(unaff_RBX + 0xa858) = uVar16;
      uVar15 = *(undefined8 *)(unaff_RBP + -0x60);
      uVar16 = *(undefined8 *)(unaff_RBP + -0x58);
      *(undefined8 *)(unaff_RBX + 0xa860) = uVar17;
      *(undefined8 *)(unaff_RBX + 0xa868) = uVar18;
      uVar17 = *(undefined8 *)(unaff_RBP + -0x50);
      uVar18 = *(undefined8 *)(unaff_RBP + -0x48);
      *(undefined8 *)(unaff_RBX + 0xa870) = uVar15;
      *(undefined8 *)(unaff_RBX + 0xa878) = uVar16;
      uVar6 = *(undefined4 *)(unaff_RBP + -0x40);
      uVar7 = *(undefined4 *)(unaff_RBP + -0x3c);
      uVar8 = *(undefined4 *)(unaff_RBP + -0x38);
      uVar9 = *(undefined4 *)(unaff_RBP + -0x34);
      *(undefined1 *)(unaff_RBX + 0xa8b6) = uVar4;
      uVar4 = *(undefined1 *)(unaff_RBP + 0x104);
      *(undefined8 *)(unaff_RBX + 0xa880) = uVar17;
      *(undefined8 *)(unaff_RBX + 0xa888) = uVar18;
      uVar10 = *(undefined4 *)(unaff_RBP + -0x30);
      uVar11 = *(undefined4 *)(unaff_RBP + -0x2c);
      uVar12 = *(undefined4 *)(unaff_RBP + -0x28);
      uVar13 = *(undefined4 *)(unaff_RBP + -0x24);
      *(undefined1 *)(unaff_RBX + 0xa9d4) = uVar4;
      *(undefined4 *)(unaff_RBX + 0xa9d0) = *(undefined4 *)(unaff_RBP + 0x100);
      uVar5 = *(undefined4 *)(unaff_RBP + 0x108);
      *(undefined4 *)(unaff_RBX + 0xa890) = uVar6;
      *(undefined4 *)(unaff_RBX + 0xa894) = uVar7;
      *(undefined4 *)(unaff_RBX + 0xa898) = uVar8;
      *(undefined4 *)(unaff_RBX + 0xa89c) = uVar9;
      *(undefined4 *)(unaff_RBX + 0xa9d8) = uVar5;
      *(undefined4 *)(unaff_RBX + 0xa8b0) = 2;
      *(undefined4 *)(unaff_RBX + 0xa8a0) = uVar10;
      *(undefined4 *)(unaff_RBX + 0xa8a4) = uVar11;
      *(undefined4 *)(unaff_RBX + 0xa8a8) = uVar12;
      *(undefined4 *)(unaff_RBX + 0xa8ac) = uVar13;
      *(undefined1 *)(unaff_RBX + 0xa9f0) = 1;
      uStack0000000000000060 = uVar2 ^ 0x80000000;
      FUN_180662190(&stack0x00000050,*(undefined1 *)(unaff_RBX + 0x2604),
                    *(undefined1 *)(unaff_RBX + 0x2606),*(undefined1 *)(unaff_RBX + 0x2607),1);
      *(undefined4 *)(unaff_RBX + 0xaaa0) = 2;
      in_stack_00000040 = uVar2;
      uStack0000000000000060 = uVar2;
LAB_1805793a4:
      uVar15 = *(undefined8 *)(unaff_RBP + 0xf0);
      uVar16 = *(undefined8 *)(unaff_RBP + 0xf8);
      *(undefined1 *)(unaff_RBX + 0xaaa4) = *(undefined1 *)(unaff_RBP + -0x1c);
      *(undefined1 *)(unaff_RBX + 0xaaa5) = *(undefined1 *)(unaff_RBP + -0x1b);
      *(undefined1 *)(unaff_RBX + 0xaaa6) = *(undefined1 *)(unaff_RBP + -0x1a);
      *(undefined1 *)(unaff_RBX + 0xabc4) = *(undefined1 *)(unaff_RBP + 0x104);
      uVar5 = *(undefined4 *)(unaff_RBP + 0x100);
      *(undefined8 *)(unaff_RBX + 0xabb0) = uVar15;
      *(undefined8 *)(unaff_RBX + 0xabb8) = uVar16;
      *(undefined4 *)(unaff_RBX + 0xabc0) = uVar5;
      *(undefined4 *)(unaff_RBX + 0xabc8) = *(undefined4 *)(unaff_RBP + 0x108);
      *(undefined4 *)(unaff_RBX + 0xaa10) = 0;
      *(undefined4 *)(unaff_RBX + 0xaa14) = 0;
      *(undefined4 *)(unaff_RBX + 0xaa18) = 0;
      *(undefined4 *)(unaff_RBX + 0xaa1c) = 0;
      *(ulonglong *)(unaff_RBX + 0xaa20) = CONCAT44(uStack0000000000000064,uStack0000000000000060);
      *(undefined8 *)(unaff_RBX + 0xaa28) = in_stack_00000068;
      uVar15 = *(undefined8 *)(unaff_RBP + -0x80);
      uVar16 = *(undefined8 *)(unaff_RBP + -0x78);
      *(undefined8 *)(unaff_RBX + 0xaa30) = in_stack_00000070;
      *(undefined8 *)(unaff_RBX + 0xaa38) = in_stack_00000078;
      uVar17 = *(undefined8 *)(unaff_RBP + -0x70);
      uVar18 = *(undefined8 *)(unaff_RBP + -0x68);
      *(undefined8 *)(unaff_RBX + 0xaa40) = uVar15;
      *(undefined8 *)(unaff_RBX + 0xaa48) = uVar16;
      uVar15 = *(undefined8 *)(unaff_RBP + -0x60);
      uVar16 = *(undefined8 *)(unaff_RBP + -0x58);
      *(undefined8 *)(unaff_RBX + 0xaa50) = uVar17;
      *(undefined8 *)(unaff_RBX + 0xaa58) = uVar18;
      uVar17 = *(undefined8 *)(unaff_RBP + -0x50);
      uVar18 = *(undefined8 *)(unaff_RBP + -0x48);
      *(undefined8 *)(unaff_RBX + 0xaa60) = uVar15;
      *(undefined8 *)(unaff_RBX + 0xaa68) = uVar16;
      param_1 = *(float *)(unaff_RBP + -0x40);
      uVar5 = *(undefined4 *)(unaff_RBP + -0x3c);
      uVar6 = *(undefined4 *)(unaff_RBP + -0x38);
      uVar7 = *(undefined4 *)(unaff_RBP + -0x34);
      *(undefined8 *)(unaff_RBX + 0xaa70) = uVar17;
      *(undefined8 *)(unaff_RBX + 0xaa78) = uVar18;
      uVar8 = *(undefined4 *)(unaff_RBP + -0x30);
      uVar9 = *(undefined4 *)(unaff_RBP + -0x2c);
      uVar10 = *(undefined4 *)(unaff_RBP + -0x28);
      uVar11 = *(undefined4 *)(unaff_RBP + -0x24);
      *(float *)(unaff_RBX + 0xaa80) = param_1;
      *(undefined4 *)(unaff_RBX + 0xaa84) = uVar5;
      *(undefined4 *)(unaff_RBX + 0xaa88) = uVar6;
      *(undefined4 *)(unaff_RBX + 0xaa8c) = uVar7;
      *(undefined4 *)(unaff_RBX + 0xaa90) = uVar8;
      *(undefined4 *)(unaff_RBX + 0xaa94) = uVar9;
      *(undefined4 *)(unaff_RBX + 0xaa98) = uVar10;
      *(undefined4 *)(unaff_RBX + 0xaa9c) = uVar11;
      *(undefined1 *)(unaff_RBX + 44000) = 1;
      *(undefined4 *)(unaff_RBX + 0xa9e4) = 0x3f800000;
      *(undefined4 *)(unaff_RBX + 0xa9e8) = 0x40400000;
      *(undefined4 *)(unaff_RBX + 0xabd4) = 0x3f800000;
LAB_180579861:
      *(undefined4 *)(unaff_RBX + 0xabd8) = 0x40400000;
    }
  }
  else {
LAB_180579837:
    if (*(float *)(unaff_RBX + 0xa9e4) != 0.0) {
      *(int *)(unaff_RBX + 0xa9e4) = unaff_R15D;
      *(undefined4 *)(unaff_RBX + 0xa9e8) = 0x40400000;
    }
    if (*(float *)(unaff_RBX + 0xabd4) != 0.0) {
      *(int *)(unaff_RBX + 0xabd4) = unaff_R15D;
      goto LAB_180579861;
    }
  }
  lVar20 = *(longlong *)(unaff_RDI + 0x728);
  uVar21 = *(ushort *)(lVar20 + 0x5aa) & 0x40;
  if (((uVar21 != 0) && (0.0 < *(float *)(unaff_RBX + 0xa7f0))) &&
     (param_1 = *(float *)(unaff_RBX + 0xa7d4) * *(float *)(unaff_RBX + 0xa7d4),
     0.0025000002 <
     *(float *)(unaff_RBX + 0xa7d0) * *(float *)(unaff_RBX + 0xa7d0) + param_1 +
     *(float *)(unaff_RBX + 0xa7d8) * *(float *)(unaff_RBX + 0xa7d8))) {
    *(ushort *)(lVar20 + 0x5ac) = *(ushort *)(lVar20 + 0x5ac) | uVar21;
    puVar1 = (ushort *)(*(longlong *)(unaff_RDI + 0x728) + 0x5aa);
    *puVar1 = *puVar1 & ~uVar21;
    *(undefined4 *)(*(longlong *)(unaff_RDI + 0x728) + 0x5a4) = 0xffffffff;
    lVar20 = *(longlong *)(unaff_RDI + 0x728);
  }
  uVar21 = *(ushort *)(lVar20 + 0x5aa) & 0x3c;
  if (((uVar21 != 0) &&
      ((uVar19 = unaff_R14 & 0x2000000000, (unaff_R14 >> 0x1b & 1) == 0 ||
       ((uVar19 == 0 &&
        (uVar19 = CONCAT44(unaff_000000bc,unaff_R15D), *(int *)(unaff_RBX + 0x2498) != -1)))))) &&
     ((((unaff_RSI | in_RCX) >> 0x1b & 1) == 0 || (uVar19 != 0)))) {
    *(ushort *)(lVar20 + 0x5ac) = *(ushort *)(lVar20 + 0x5ac) | uVar21;
    puVar1 = (ushort *)(*(longlong *)(unaff_RDI + 0x728) + 0x5aa);
    *puVar1 = *puVar1 & ~uVar21;
  }
  if ((((uint)(unaff_RSI | in_RCX) | (uint)unaff_R14) & 0x8040000) == 0x40000) {
    param_1 = *(float *)(unaff_RBX + 0xa608);
    *(float *)(unaff_RBX + 0xa608) = param_1;
    *(int *)(unaff_RBX + 0xa604) = unaff_R15D;
    if ((*(ushort *)(*(longlong *)(unaff_RDI + 0x728) + 0x5aa) & 0x1000) == 0) {
      param_1 = *(float *)(unaff_RBX + 43000);
      *(float *)(unaff_RBX + 43000) = param_1;
      *(int *)(unaff_RBX + 0xa7f4) = unaff_R15D;
    }
    if ((*(float *)(unaff_RBX + 0xa600) <= 0.0) && (*(float *)(unaff_RBX + 0xa604) == 0.0)) {
      param_1 = (float)FUN_180516e40(param_1,0xc7d5);
    }
    fVar3 = *(float *)(unaff_RBX + 0xa7f0);
joined_r0x000180579c37:
    if ((0.0 < fVar3) || (*(float *)(unaff_RBX + 0xa7f4) != 0.0)) goto LAB_180579c4f;
  }
  else {
    uVar21 = *(ushort *)(*(longlong *)(unaff_RDI + 0x728) + 0x5aa);
    if ((uVar21 & 0x2c0) == 0) {
      if ((uVar21 & 0x100) == 0) {
        if ((*(ushort *)(*(longlong *)(unaff_RDI + 0x728) + 0x5ac) & 0x3c0) != 0) {
          param_1 = (float)FUN_1805162e0();
        }
      }
      else {
        param_1 = (float)FUN_180515880();
      }
    }
    else {
      param_1 = (float)FUN_180514a60();
    }
    lVar20 = *(longlong *)(unaff_RDI + 0x728);
    if ((*(ushort *)(lVar20 + 0x5aa) & 0x800) != 0) {
      in_stack_00000040 = CONCAT31(in_stack_00000040._1_3_,*(undefined1 *)(unaff_RBX + 0x25fb));
      FUN_180662190(&stack0x00000050,*(undefined1 *)(unaff_RBX + 0x25fa),
                    *(undefined1 *)(unaff_RBX + 0x25fc),*(undefined1 *)(unaff_RBX + 0x2600));
      uVar15 = *(undefined8 *)(unaff_RBP + 0xf0);
      uVar16 = *(undefined8 *)(unaff_RBP + 0xf8);
      *(undefined8 *)(unaff_RBX + 0xa630) = 0;
      *(undefined8 *)(unaff_RBX + 0xa638) = 0;
      uStack0000000000000060 = in_stack_00000040;
      *(undefined1 *)(unaff_RBX + 0xa6c4) = *(undefined1 *)(unaff_RBP + -0x1c);
      uVar4 = *(undefined1 *)(unaff_RBP + -0x1b);
      *(undefined8 *)(unaff_RBX + 0xa7d0) = uVar15;
      *(undefined8 *)(unaff_RBX + 0xa7d8) = uVar16;
      *(undefined1 *)(unaff_RBX + 0xa6c5) = uVar4;
      uVar4 = *(undefined1 *)(unaff_RBP + -0x1a);
      *(ulonglong *)(unaff_RBX + 0xa640) = CONCAT44(uStack0000000000000064,in_stack_00000040);
      *(undefined8 *)(unaff_RBX + 0xa648) = in_stack_00000068;
      uVar15 = *(undefined8 *)(unaff_RBP + -0x80);
      uVar16 = *(undefined8 *)(unaff_RBP + -0x78);
      *(undefined8 *)(unaff_RBX + 0xa650) = in_stack_00000070;
      *(undefined8 *)(unaff_RBX + 0xa658) = in_stack_00000078;
      uVar17 = *(undefined8 *)(unaff_RBP + -0x70);
      uVar18 = *(undefined8 *)(unaff_RBP + -0x68);
      *(undefined8 *)(unaff_RBX + 0xa660) = uVar15;
      *(undefined8 *)(unaff_RBX + 0xa668) = uVar16;
      uVar15 = *(undefined8 *)(unaff_RBP + -0x60);
      uVar16 = *(undefined8 *)(unaff_RBP + -0x58);
      *(undefined8 *)(unaff_RBX + 0xa670) = uVar17;
      *(undefined8 *)(unaff_RBX + 0xa678) = uVar18;
      uVar17 = *(undefined8 *)(unaff_RBP + -0x50);
      uVar18 = *(undefined8 *)(unaff_RBP + -0x48);
      *(undefined8 *)(unaff_RBX + 0xa680) = uVar15;
      *(undefined8 *)(unaff_RBX + 0xa688) = uVar16;
      param_1 = *(float *)(unaff_RBP + -0x40);
      uVar6 = *(undefined4 *)(unaff_RBP + -0x3c);
      uVar7 = *(undefined4 *)(unaff_RBP + -0x38);
      uVar8 = *(undefined4 *)(unaff_RBP + -0x34);
      *(undefined1 *)(unaff_RBX + 0xa6c6) = uVar4;
      uVar4 = *(undefined1 *)(unaff_RBP + 0x104);
      *(undefined8 *)(unaff_RBX + 0xa690) = uVar17;
      *(undefined8 *)(unaff_RBX + 0xa698) = uVar18;
      uVar15 = *(undefined8 *)(unaff_RBP + -0x30);
      uVar16 = *(undefined8 *)(unaff_RBP + -0x28);
      *(undefined1 *)(unaff_RBX + 0xa7e4) = uVar4;
      *(undefined4 *)(unaff_RBX + 0xa7e0) = *(undefined4 *)(unaff_RBP + 0x100);
      uVar5 = *(undefined4 *)(unaff_RBP + 0x108);
      *(float *)(unaff_RBX + 0xa6a0) = param_1;
      *(undefined4 *)(unaff_RBX + 0xa6a4) = uVar6;
      *(undefined4 *)(unaff_RBX + 0xa6a8) = uVar7;
      *(undefined4 *)(unaff_RBX + 0xa6ac) = uVar8;
      *(undefined4 *)(unaff_RBX + 0xa7e8) = uVar5;
      *(undefined4 *)(unaff_RBX + 0xa6c0) = 5;
      *(undefined8 *)(unaff_RBX + 0xa6b0) = uVar15;
      *(undefined8 *)(unaff_RBX + 0xa6b8) = uVar16;
      *(undefined1 *)(unaff_RBX + 0xa800) = 1;
      if (unaff_XMM8_Da != *(float *)(unaff_RBX + 0xa7f4)) {
        *(undefined4 *)(unaff_RBX + 0xa7f4) = 0x3f800000;
        *(undefined4 *)(unaff_RBX + 43000) = 0x40400000;
      }
      *(undefined4 *)(unaff_RBX + 0xa7fc) = 0x42200000;
      lVar20 = *(longlong *)(unaff_RDI + 0x728);
    }
    if ((*(ushort *)(lVar20 + 0x5aa) & 0xc7d5) == 0) {
      if (*(float *)(unaff_RBX + 0xa604) != 0.0) {
        param_1 = *(float *)(unaff_RBX + 0xa608);
        *(float *)(unaff_RBX + 0xa608) = param_1;
        *(int *)(unaff_RBX + 0xa604) = unaff_R15D;
      }
      if (*(float *)(unaff_RBX + 0xa600) <= 0.0) {
LAB_180579bd9:
        param_1 = (float)FUN_180516e40(param_1,0xc7d5);
      }
    }
    else {
      param_1 = *(float *)(unaff_RBX + 0xa600);
      if ((unaff_XMM8_Da <= param_1) ||
         ((param_1 <= 0.0 && (*(float *)(unaff_RBX + 0xa604) == 0.0)))) goto LAB_180579bd9;
    }
    if ((*(ushort *)(*(longlong *)(unaff_RDI + 0x728) + 0x5aa) & 0x3c2a) == 0) {
      if (*(float *)(unaff_RBX + 0xa7f4) != 0.0) {
        param_1 = *(float *)(unaff_RBX + 43000);
        *(float *)(unaff_RBX + 43000) = param_1;
        *(int *)(unaff_RBX + 0xa7f4) = unaff_R15D;
      }
      if (0.0 < *(float *)(unaff_RBX + 0xa7f0)) goto LAB_180579c4f;
    }
    else {
      param_1 = *(float *)(unaff_RBX + 0xa7f0);
      fVar3 = param_1;
      if (param_1 < unaff_XMM8_Da) goto joined_r0x000180579c37;
    }
  }
  FUN_180516e40(param_1,0x382a);
LAB_180579c4f:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x110) ^ (ulonglong)&stack0x00000000);
}





