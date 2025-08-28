#include "TaleWorlds.Native.Split.h"

// 03_rendering_part564.c - 1 个函数

// 函数: void FUN_18057988b(ushort param_1,int64_t param_2)
void FUN_18057988b(ushort param_1,int64_t param_2)

{
  ushort *puVar1;
  float fVar2;
  int8_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t in_RAX;
  uint64_t uVar12;
  int64_t lVar13;
  ushort uVar14;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  uint64_t unaff_R14;
  int32_t unaff_R15D;
  int32_t unaff_000000bc;
  float in_XMM0_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  int32_t in_stack_00000040;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  uint64_t in_stack_00000068;
  uint64_t in_stack_00000070;
  uint64_t in_stack_00000078;
  
  if ((unaff_XMM7_Da < *(float *)(unaff_RBX + 0xa7f0)) &&
     (in_XMM0_Da = *(float *)(unaff_RBX + 0xa7d4) * *(float *)(unaff_RBX + 0xa7d4),
     0.0025000002 <
     *(float *)(unaff_RBX + 0xa7d0) * *(float *)(unaff_RBX + 0xa7d0) + in_XMM0_Da +
     *(float *)(unaff_RBX + 0xa7d8) * *(float *)(unaff_RBX + 0xa7d8))) {
    *(ushort *)(in_RAX + 0x5ac) = *(ushort *)(in_RAX + 0x5ac) | param_1;
    puVar1 = (ushort *)(*(int64_t *)(unaff_RDI + 0x728) + 0x5aa);
    *puVar1 = *puVar1 & ~param_1;
    *(int32_t *)(*(int64_t *)(unaff_RDI + 0x728) + 0x5a4) = 0xffffffff;
    param_2 = *(int64_t *)(unaff_RDI + 0x728);
  }
  uVar14 = *(ushort *)(param_2 + 0x5aa) & 0x3c;
  if (((uVar14 != 0) &&
      ((uVar12 = unaff_R14 & 0x2000000000, (unaff_R14 >> 0x1b & 1) == 0 ||
       ((uVar12 == 0 &&
        (uVar12 = CONCAT44(unaff_000000bc,unaff_R15D), *(int *)(unaff_RBX + 0x2498) != -1)))))) &&
     (((unaff_RSI >> 0x1b & 1) == 0 || (uVar12 != 0)))) {
    *(ushort *)(param_2 + 0x5ac) = *(ushort *)(param_2 + 0x5ac) | uVar14;
    puVar1 = (ushort *)(*(int64_t *)(unaff_RDI + 0x728) + 0x5aa);
    *puVar1 = *puVar1 & ~uVar14;
  }
  if ((((uint)unaff_RSI | (uint)unaff_R14) & 0x8040000) == 0x40000) {
    in_XMM0_Da = *(float *)(unaff_RBX + 0xa608);
    *(float *)(unaff_RBX + 0xa608) = in_XMM0_Da;
    *(int32_t *)(unaff_RBX + 0xa604) = unaff_R15D;
    if ((*(ushort *)(*(int64_t *)(unaff_RDI + 0x728) + 0x5aa) & 0x1000) == 0) {
      in_XMM0_Da = *(float *)(unaff_RBX + 43000);
      *(float *)(unaff_RBX + 43000) = in_XMM0_Da;
      *(int32_t *)(unaff_RBX + 0xa7f4) = unaff_R15D;
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
    uVar14 = *(ushort *)(*(int64_t *)(unaff_RDI + 0x728) + 0x5aa);
    if ((uVar14 & 0x2c0) == 0) {
      if ((uVar14 & 0x100) == 0) {
        if ((*(ushort *)(*(int64_t *)(unaff_RDI + 0x728) + 0x5ac) & 0x3c0) != 0) {
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
    lVar13 = *(int64_t *)(unaff_RDI + 0x728);
    if ((*(ushort *)(lVar13 + 0x5aa) & 0x800) != 0) {
      in_stack_00000040 = CONCAT31(in_stack_00000040._1_3_,*(int8_t *)(unaff_RBX + 0x25fb));
      FUN_180662190(&stack0x00000050,*(int8_t *)(unaff_RBX + 0x25fa),
                    *(int8_t *)(unaff_RBX + 0x25fc),*(int8_t *)(unaff_RBX + 0x2600));
      uVar8 = *(uint64_t *)(unaff_RBP + 0xf0);
      uVar9 = *(uint64_t *)(unaff_RBP + 0xf8);
      *(uint64_t *)(unaff_RBX + 0xa630) = 0;
      *(uint64_t *)(unaff_RBX + 0xa638) = 0;
      uStack0000000000000060 = in_stack_00000040;
      *(int8_t *)(unaff_RBX + 0xa6c4) = *(int8_t *)(unaff_RBP + -0x1c);
      uVar3 = *(int8_t *)(unaff_RBP + -0x1b);
      *(uint64_t *)(unaff_RBX + 0xa7d0) = uVar8;
      *(uint64_t *)(unaff_RBX + 0xa7d8) = uVar9;
      *(int8_t *)(unaff_RBX + 0xa6c5) = uVar3;
      uVar3 = *(int8_t *)(unaff_RBP + -0x1a);
      *(uint64_t *)(unaff_RBX + 0xa640) = CONCAT44(uStack0000000000000064,in_stack_00000040);
      *(uint64_t *)(unaff_RBX + 0xa648) = in_stack_00000068;
      uVar8 = *(uint64_t *)(unaff_RBP + -0x80);
      uVar9 = *(uint64_t *)(unaff_RBP + -0x78);
      *(uint64_t *)(unaff_RBX + 0xa650) = in_stack_00000070;
      *(uint64_t *)(unaff_RBX + 0xa658) = in_stack_00000078;
      uVar10 = *(uint64_t *)(unaff_RBP + -0x70);
      uVar11 = *(uint64_t *)(unaff_RBP + -0x68);
      *(uint64_t *)(unaff_RBX + 0xa660) = uVar8;
      *(uint64_t *)(unaff_RBX + 0xa668) = uVar9;
      uVar8 = *(uint64_t *)(unaff_RBP + -0x60);
      uVar9 = *(uint64_t *)(unaff_RBP + -0x58);
      *(uint64_t *)(unaff_RBX + 0xa670) = uVar10;
      *(uint64_t *)(unaff_RBX + 0xa678) = uVar11;
      uVar10 = *(uint64_t *)(unaff_RBP + -0x50);
      uVar11 = *(uint64_t *)(unaff_RBP + -0x48);
      *(uint64_t *)(unaff_RBX + 0xa680) = uVar8;
      *(uint64_t *)(unaff_RBX + 0xa688) = uVar9;
      in_XMM0_Da = *(float *)(unaff_RBP + -0x40);
      uVar5 = *(int32_t *)(unaff_RBP + -0x3c);
      uVar6 = *(int32_t *)(unaff_RBP + -0x38);
      uVar7 = *(int32_t *)(unaff_RBP + -0x34);
      *(int8_t *)(unaff_RBX + 0xa6c6) = uVar3;
      uVar3 = *(int8_t *)(unaff_RBP + 0x104);
      *(uint64_t *)(unaff_RBX + 0xa690) = uVar10;
      *(uint64_t *)(unaff_RBX + 0xa698) = uVar11;
      uVar8 = *(uint64_t *)(unaff_RBP + -0x30);
      uVar9 = *(uint64_t *)(unaff_RBP + -0x28);
      *(int8_t *)(unaff_RBX + 0xa7e4) = uVar3;
      *(int32_t *)(unaff_RBX + 0xa7e0) = *(int32_t *)(unaff_RBP + 0x100);
      uVar4 = *(int32_t *)(unaff_RBP + 0x108);
      *(float *)(unaff_RBX + 0xa6a0) = in_XMM0_Da;
      *(int32_t *)(unaff_RBX + 0xa6a4) = uVar5;
      *(int32_t *)(unaff_RBX + 0xa6a8) = uVar6;
      *(int32_t *)(unaff_RBX + 0xa6ac) = uVar7;
      *(int32_t *)(unaff_RBX + 0xa7e8) = uVar4;
      *(int32_t *)(unaff_RBX + 0xa6c0) = 5;
      *(uint64_t *)(unaff_RBX + 0xa6b0) = uVar8;
      *(uint64_t *)(unaff_RBX + 0xa6b8) = uVar9;
      *(int8_t *)(unaff_RBX + 0xa800) = 1;
      if (unaff_XMM8_Da != *(float *)(unaff_RBX + 0xa7f4)) {
        *(int32_t *)(unaff_RBX + 0xa7f4) = 0x3f800000;
        *(int32_t *)(unaff_RBX + 43000) = 0x40400000;
      }
      *(int32_t *)(unaff_RBX + 0xa7fc) = 0x42200000;
      lVar13 = *(int64_t *)(unaff_RDI + 0x728);
    }
    if ((*(ushort *)(lVar13 + 0x5aa) & 0xc7d5) == 0) {
      if (unaff_XMM7_Da != *(float *)(unaff_RBX + 0xa604)) {
        in_XMM0_Da = *(float *)(unaff_RBX + 0xa608);
        *(float *)(unaff_RBX + 0xa608) = in_XMM0_Da;
        *(int32_t *)(unaff_RBX + 0xa604) = unaff_R15D;
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
    if ((*(ushort *)(*(int64_t *)(unaff_RDI + 0x728) + 0x5aa) & 0x3c2a) == 0) {
      if (unaff_XMM7_Da != *(float *)(unaff_RBX + 0xa7f4)) {
        in_XMM0_Da = *(float *)(unaff_RBX + 43000);
        *(float *)(unaff_RBX + 43000) = in_XMM0_Da;
        *(int32_t *)(unaff_RBX + 0xa7f4) = unaff_R15D;
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
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x110) ^ (uint64_t)&stack0x00000000);
}





