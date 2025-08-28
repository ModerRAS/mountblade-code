#include "TaleWorlds.Native.Split.h"

// 03_rendering_part564.c - 1 个函数

// 函数: void FUN_18057988b(ushort param_1,longlong param_2)
void FUN_18057988b(ushort param_1,longlong param_2)

{
  ushort *puVar1;
  float fVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong in_RAX;
  ulonglong uVar12;
  longlong lVar13;
  ushort uVar14;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong unaff_R14;
  undefined4 unaff_R15D;
  undefined4 unaff_000000bc;
  float in_XMM0_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  undefined4 in_stack_00000040;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  if ((unaff_XMM7_Da < *(float *)(unaff_RBX + 0xa7f0)) &&
     (in_XMM0_Da = *(float *)(unaff_RBX + 0xa7d4) * *(float *)(unaff_RBX + 0xa7d4),
     0.0025000002 <
     *(float *)(unaff_RBX + 0xa7d0) * *(float *)(unaff_RBX + 0xa7d0) + in_XMM0_Da +
     *(float *)(unaff_RBX + 0xa7d8) * *(float *)(unaff_RBX + 0xa7d8))) {
    *(ushort *)(in_RAX + 0x5ac) = *(ushort *)(in_RAX + 0x5ac) | param_1;
    puVar1 = (ushort *)(*(longlong *)(unaff_RDI + 0x728) + 0x5aa);
    *puVar1 = *puVar1 & ~param_1;
    *(undefined4 *)(*(longlong *)(unaff_RDI + 0x728) + 0x5a4) = 0xffffffff;
    param_2 = *(longlong *)(unaff_RDI + 0x728);
  }
  uVar14 = *(ushort *)(param_2 + 0x5aa) & 0x3c;
  if (((uVar14 != 0) &&
      ((uVar12 = unaff_R14 & 0x2000000000, (unaff_R14 >> 0x1b & 1) == 0 ||
       ((uVar12 == 0 &&
        (uVar12 = CONCAT44(unaff_000000bc,unaff_R15D), *(int *)(unaff_RBX + 0x2498) != -1)))))) &&
     (((unaff_RSI >> 0x1b & 1) == 0 || (uVar12 != 0)))) {
    *(ushort *)(param_2 + 0x5ac) = *(ushort *)(param_2 + 0x5ac) | uVar14;
    puVar1 = (ushort *)(*(longlong *)(unaff_RDI + 0x728) + 0x5aa);
    *puVar1 = *puVar1 & ~uVar14;
  }
  if ((((uint)unaff_RSI | (uint)unaff_R14) & 0x8040000) == 0x40000) {
    in_XMM0_Da = *(float *)(unaff_RBX + 0xa608);
    *(float *)(unaff_RBX + 0xa608) = in_XMM0_Da;
    *(undefined4 *)(unaff_RBX + 0xa604) = unaff_R15D;
    if ((*(ushort *)(*(longlong *)(unaff_RDI + 0x728) + 0x5aa) & 0x1000) == 0) {
      in_XMM0_Da = *(float *)(unaff_RBX + 43000);
      *(float *)(unaff_RBX + 43000) = in_XMM0_Da;
      *(undefined4 *)(unaff_RBX + 0xa7f4) = unaff_R15D;
    }
    if ((*(float *)(unaff_RBX + 0xa600) <= unaff_XMM7_Da) &&
       (unaff_XMM7_Da == *(float *)(unaff_RBX + 0xa604))) {
      in_XMM0_Da = (float)FUN_180516e40(in_XMM0_Da,0xc7d5);
    }
    fVar2 = *(float *)(unaff_RBX + 0xa7f0);
joined_r0x000180579c37:
    if ((unaff_XMM7_Da < fVar2) || (unaff_XMM7_Da != *(float *)(unaff_RBX + 0xa7f4)))
    goto LAB_180579c4f;
  }
  else {
    uVar14 = *(ushort *)(*(longlong *)(unaff_RDI + 0x728) + 0x5aa);
    if ((uVar14 & 0x2c0) == 0) {
      if ((uVar14 & 0x100) == 0) {
        if ((*(ushort *)(*(longlong *)(unaff_RDI + 0x728) + 0x5ac) & 0x3c0) != 0) {
          in_XMM0_Da = (float)FUN_1805162e0();
        }
      }
      else {
        in_XMM0_Da = (float)FUN_180515880();
      }
    }
    else {
      in_XMM0_Da = (float)FUN_180514a60();
    }
    lVar13 = *(longlong *)(unaff_RDI + 0x728);
    if ((*(ushort *)(lVar13 + 0x5aa) & 0x800) != 0) {
      in_stack_00000040 = CONCAT31(in_stack_00000040._1_3_,*(undefined1 *)(unaff_RBX + 0x25fb));
      FUN_180662190(&stack0x00000050,*(undefined1 *)(unaff_RBX + 0x25fa),
                    *(undefined1 *)(unaff_RBX + 0x25fc),*(undefined1 *)(unaff_RBX + 0x2600));
      uVar8 = *(undefined8 *)(unaff_RBP + 0xf0);
      uVar9 = *(undefined8 *)(unaff_RBP + 0xf8);
      *(undefined8 *)(unaff_RBX + 0xa630) = 0;
      *(undefined8 *)(unaff_RBX + 0xa638) = 0;
      uStack0000000000000060 = in_stack_00000040;
      *(undefined1 *)(unaff_RBX + 0xa6c4) = *(undefined1 *)(unaff_RBP + -0x1c);
      uVar3 = *(undefined1 *)(unaff_RBP + -0x1b);
      *(undefined8 *)(unaff_RBX + 0xa7d0) = uVar8;
      *(undefined8 *)(unaff_RBX + 0xa7d8) = uVar9;
      *(undefined1 *)(unaff_RBX + 0xa6c5) = uVar3;
      uVar3 = *(undefined1 *)(unaff_RBP + -0x1a);
      *(ulonglong *)(unaff_RBX + 0xa640) = CONCAT44(uStack0000000000000064,in_stack_00000040);
      *(undefined8 *)(unaff_RBX + 0xa648) = in_stack_00000068;
      uVar8 = *(undefined8 *)(unaff_RBP + -0x80);
      uVar9 = *(undefined8 *)(unaff_RBP + -0x78);
      *(undefined8 *)(unaff_RBX + 0xa650) = in_stack_00000070;
      *(undefined8 *)(unaff_RBX + 0xa658) = in_stack_00000078;
      uVar10 = *(undefined8 *)(unaff_RBP + -0x70);
      uVar11 = *(undefined8 *)(unaff_RBP + -0x68);
      *(undefined8 *)(unaff_RBX + 0xa660) = uVar8;
      *(undefined8 *)(unaff_RBX + 0xa668) = uVar9;
      uVar8 = *(undefined8 *)(unaff_RBP + -0x60);
      uVar9 = *(undefined8 *)(unaff_RBP + -0x58);
      *(undefined8 *)(unaff_RBX + 0xa670) = uVar10;
      *(undefined8 *)(unaff_RBX + 0xa678) = uVar11;
      uVar10 = *(undefined8 *)(unaff_RBP + -0x50);
      uVar11 = *(undefined8 *)(unaff_RBP + -0x48);
      *(undefined8 *)(unaff_RBX + 0xa680) = uVar8;
      *(undefined8 *)(unaff_RBX + 0xa688) = uVar9;
      in_XMM0_Da = *(float *)(unaff_RBP + -0x40);
      uVar5 = *(undefined4 *)(unaff_RBP + -0x3c);
      uVar6 = *(undefined4 *)(unaff_RBP + -0x38);
      uVar7 = *(undefined4 *)(unaff_RBP + -0x34);
      *(undefined1 *)(unaff_RBX + 0xa6c6) = uVar3;
      uVar3 = *(undefined1 *)(unaff_RBP + 0x104);
      *(undefined8 *)(unaff_RBX + 0xa690) = uVar10;
      *(undefined8 *)(unaff_RBX + 0xa698) = uVar11;
      uVar8 = *(undefined8 *)(unaff_RBP + -0x30);
      uVar9 = *(undefined8 *)(unaff_RBP + -0x28);
      *(undefined1 *)(unaff_RBX + 0xa7e4) = uVar3;
      *(undefined4 *)(unaff_RBX + 0xa7e0) = *(undefined4 *)(unaff_RBP + 0x100);
      uVar4 = *(undefined4 *)(unaff_RBP + 0x108);
      *(float *)(unaff_RBX + 0xa6a0) = in_XMM0_Da;
      *(undefined4 *)(unaff_RBX + 0xa6a4) = uVar5;
      *(undefined4 *)(unaff_RBX + 0xa6a8) = uVar6;
      *(undefined4 *)(unaff_RBX + 0xa6ac) = uVar7;
      *(undefined4 *)(unaff_RBX + 0xa7e8) = uVar4;
      *(undefined4 *)(unaff_RBX + 0xa6c0) = 5;
      *(undefined8 *)(unaff_RBX + 0xa6b0) = uVar8;
      *(undefined8 *)(unaff_RBX + 0xa6b8) = uVar9;
      *(undefined1 *)(unaff_RBX + 0xa800) = 1;
      if (unaff_XMM8_Da != *(float *)(unaff_RBX + 0xa7f4)) {
        *(undefined4 *)(unaff_RBX + 0xa7f4) = 0x3f800000;
        *(undefined4 *)(unaff_RBX + 43000) = 0x40400000;
      }
      *(undefined4 *)(unaff_RBX + 0xa7fc) = 0x42200000;
      lVar13 = *(longlong *)(unaff_RDI + 0x728);
    }
    if ((*(ushort *)(lVar13 + 0x5aa) & 0xc7d5) == 0) {
      if (unaff_XMM7_Da != *(float *)(unaff_RBX + 0xa604)) {
        in_XMM0_Da = *(float *)(unaff_RBX + 0xa608);
        *(float *)(unaff_RBX + 0xa608) = in_XMM0_Da;
        *(undefined4 *)(unaff_RBX + 0xa604) = unaff_R15D;
      }
      if (*(float *)(unaff_RBX + 0xa600) <= unaff_XMM7_Da) {
LAB_180579bd9:
        in_XMM0_Da = (float)FUN_180516e40(in_XMM0_Da,0xc7d5);
      }
    }
    else {
      in_XMM0_Da = *(float *)(unaff_RBX + 0xa600);
      if ((unaff_XMM8_Da <= in_XMM0_Da) ||
         ((in_XMM0_Da <= unaff_XMM7_Da && (unaff_XMM7_Da == *(float *)(unaff_RBX + 0xa604)))))
      goto LAB_180579bd9;
    }
    if ((*(ushort *)(*(longlong *)(unaff_RDI + 0x728) + 0x5aa) & 0x3c2a) == 0) {
      if (unaff_XMM7_Da != *(float *)(unaff_RBX + 0xa7f4)) {
        in_XMM0_Da = *(float *)(unaff_RBX + 43000);
        *(float *)(unaff_RBX + 43000) = in_XMM0_Da;
        *(undefined4 *)(unaff_RBX + 0xa7f4) = unaff_R15D;
      }
      if (unaff_XMM7_Da < *(float *)(unaff_RBX + 0xa7f0)) goto LAB_180579c4f;
    }
    else {
      in_XMM0_Da = *(float *)(unaff_RBX + 0xa7f0);
      fVar2 = in_XMM0_Da;
      if (in_XMM0_Da < unaff_XMM8_Da) goto joined_r0x000180579c37;
    }
  }
  FUN_180516e40(in_XMM0_Da,0x382a);
LAB_180579c4f:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x110) ^ (ulonglong)&stack0x00000000);
}





