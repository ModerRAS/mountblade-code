#include "TaleWorlds.Native.Split.h"

// 99_part_06_part055.c - 4 个函数

// 函数: void FUN_1803deab0(longlong param_1,undefined8 param_2)
void FUN_1803deab0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  undefined4 uStack_19c;
  float fStack_198;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined2 uStack_17c;
  undefined2 uStack_17a;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined1 uStack_164;
  undefined3 uStack_163;
  undefined4 uStack_160;
  undefined8 uStack_15c;
  undefined2 uStack_154;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined1 uStack_134;
  undefined8 uStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1803de8d0(param_1,&fStack_1a8);
    lVar1 = *(longlong *)(param_1 + 0x108);
    fVar22 = *(float *)(param_1 + 0x16c);
    *(float *)(lVar1 + 0x2b8) = fStack_1a8;
    *(float *)(lVar1 + 700) = fStack_1a4;
    *(float *)(lVar1 + 0x2c0) = fStack_1a0;
    *(float *)(lVar1 + 0x2c4) =
         SQRT(fStack_1a8 * fStack_1a8 + fStack_1a4 * fStack_1a4 + fStack_1a0 * fStack_1a0) * fVar22
         * 0.05;
    fVar22 = *(float *)(param_1 + 0x168);
    fVar18 = *(float *)(param_1 + 0xa0);
    fVar15 = *(float *)(param_1 + 0xa4);
    fVar12 = *(float *)(param_1 + 0xa8);
    fVar2 = *(float *)(param_1 + 0xac);
    fVar19 = *(float *)(param_1 + 0x80);
    fVar16 = *(float *)(param_1 + 0x84);
    fVar13 = *(float *)(param_1 + 0x88);
    fVar3 = *(float *)(param_1 + 0x8c);
    fVar20 = *(float *)(param_1 + 0x90);
    fVar17 = *(float *)(param_1 + 0x94);
    fVar14 = *(float *)(param_1 + 0x98);
    fVar4 = *(float *)(param_1 + 0x9c);
    fVar6 = fVar22 * 1.0;
    fStack_d8 = fVar22 * 0.0;
    fVar7 = fVar22 * 0.0;
    fStack_c8 = fVar22 * 0.0;
    fVar8 = fVar22 * 0.0;
    fStack_198 = fVar22 * 1.0;
    fStack_1a8 = fVar22 * 1.0;
    fVar21 = fVar22 * 0.0;
    fVar22 = fVar22 * 0.0;
    fStack_1a4 = 0.0;
    fStack_1a0 = 0.0;
    uStack_19c = 0;
    uStack_d4 = 0x3f800000;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_c4 = 0;
    uStack_c0 = 0x3f800000;
    uStack_bc = 0;
    fVar9 = fVar15 * fVar15 + fVar18 * fVar18 + fVar12 * fVar12;
    auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
    fVar10 = auVar11._0_4_;
    fVar9 = fVar10 * 0.5 * (3.0 - fVar9 * fVar10 * fVar10);
    fVar15 = fVar15 * fVar9;
    fVar12 = fVar12 * fVar9;
    fVar18 = fVar18 * fVar9;
    fVar9 = fVar16 * fVar16 + fVar19 * fVar19 + fVar13 * fVar13;
    auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
    fVar10 = auVar11._0_4_;
    fVar9 = fVar10 * 0.5 * (3.0 - fVar9 * fVar10 * fVar10);
    fVar16 = fVar16 * fVar9;
    fVar13 = fVar13 * fVar9;
    fVar19 = fVar19 * fVar9;
    fVar9 = fVar17 * fVar17 + fVar20 * fVar20 + fVar14 * fVar14;
    auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
    fVar10 = auVar11._0_4_;
    fVar9 = fVar10 * 0.5 * (3.0 - fVar9 * fVar10 * fVar10);
    fVar20 = fVar20 * fVar9;
    fVar17 = fVar17 * fVar9;
    fVar14 = fVar14 * fVar9;
    fVar9 = *(float *)(param_1 + 0x158);
    fVar10 = *(float *)(param_1 + 0x15c);
    fVar5 = *(float *)(param_1 + 0x160);
    fStack_118 = fVar21 * fVar20 + fStack_1a8 * fVar19 + fVar22 * fVar18;
    fStack_114 = fVar21 * fVar17 + fStack_1a8 * fVar16 + fVar22 * fVar15;
    fStack_110 = fVar21 * fVar14 + fStack_1a8 * fVar13 + fVar22 * fVar12;
    fStack_10c = fVar21 * fVar4 + fStack_1a8 * fVar3 + fVar22 * fVar2;
    fStack_108 = fVar6 * fVar20 + fStack_d8 * fVar19 + fVar7 * fVar18;
    fStack_104 = fVar6 * fVar17 + fStack_d8 * fVar16 + fVar7 * fVar15;
    fStack_100 = fVar6 * fVar14 + fStack_d8 * fVar13 + fVar7 * fVar12;
    fStack_fc = fVar6 * fVar4 + fStack_d8 * fVar3 + fVar7 * fVar2;
    uStack_188 = 0;
    fStack_f8 = fVar8 * fVar20 + fStack_c8 * fVar19 + fStack_198 * fVar18;
    fStack_f4 = fVar8 * fVar17 + fStack_c8 * fVar16 + fStack_198 * fVar15;
    fStack_f0 = fVar8 * fVar14 + fStack_c8 * fVar13 + fStack_198 * fVar12;
    fStack_ec = fVar8 * fVar4 + fStack_c8 * fVar3 + fStack_198 * fVar2;
    uStack_180 = 0xffffffff;
    fStack_e8 = fVar10 * fVar20 + fVar9 * fVar19 + fVar5 * fVar18 + *(float *)(param_1 + 0xb0);
    fStack_e4 = fVar10 * fVar17 + fVar9 * fVar16 + fVar5 * fVar15 + *(float *)(param_1 + 0xb4);
    fStack_e0 = fVar10 * fVar14 + fVar9 * fVar13 + fVar5 * fVar12 + *(float *)(param_1 + 0xb8);
    fStack_dc = fVar10 * fVar4 + fVar9 * fVar3 + fVar5 * fVar2 + *(float *)(param_1 + 0xbc);
    uStack_178 = 0;
    uStack_15c = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_134 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    _uStack_17c = CONCAT22((short)((uint)fVar3 >> 0x10),0xff00);
    uStack_170 = 0xffffffffffffffff;
    uStack_168 = 0xffffffff;
    _uStack_164 = CONCAT31((int3)((uint)fVar15 >> 8),0xff);
    uStack_160 = 0xffffffff;
    uStack_154 = 0x400;
    FUN_180077750(*(undefined8 *)(param_1 + 0x108),param_2,&fStack_118,0,&uStack_188);
  }
  return;
}






// 函数: void FUN_1803dead8(undefined8 param_1)
void FUN_1803dead8(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong in_RAX;
  longlong unaff_RBX;
  float *unaff_RBP;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 unaff_XMM6_Da;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  float fVar21;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined4 unaff_XMM8_Da;
  float fVar22;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined4 unaff_XMM10_Da;
  float fVar23;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM10_Dd;
  undefined4 unaff_XMM11_Da;
  undefined4 unaff_XMM11_Db;
  undefined4 unaff_XMM11_Dc;
  undefined4 unaff_XMM11_Dd;
  undefined4 unaff_XMM12_Da;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM12_Dd;
  undefined4 unaff_XMM13_Da;
  undefined4 unaff_XMM13_Db;
  undefined4 unaff_XMM13_Dc;
  undefined4 unaff_XMM13_Dd;
  undefined4 unaff_XMM14_Da;
  float fVar24;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  undefined4 unaff_XMM15_Da;
  float fVar25;
  undefined4 unaff_XMM15_Db;
  undefined4 unaff_XMM15_Dc;
  undefined4 unaff_XMM15_Dd;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  undefined4 uStack000000000000003c;
  float in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 in_stack_00000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined8 uStack000000000000007c;
  
  *(undefined4 *)(in_RAX + -0x28) = unaff_XMM6_Da;
  *(undefined4 *)(in_RAX + -0x24) = unaff_XMM6_Db;
  *(undefined4 *)(in_RAX + -0x20) = unaff_XMM6_Dc;
  *(undefined4 *)(in_RAX + -0x1c) = unaff_XMM6_Dd;
  *(undefined4 *)(in_RAX + -0x38) = unaff_XMM7_Da;
  *(undefined4 *)(in_RAX + -0x34) = unaff_XMM7_Db;
  *(undefined4 *)(in_RAX + -0x30) = unaff_XMM7_Dc;
  *(undefined4 *)(in_RAX + -0x2c) = unaff_XMM7_Dd;
  *(undefined4 *)(in_RAX + -0x48) = unaff_XMM8_Da;
  *(undefined4 *)(in_RAX + -0x44) = unaff_XMM8_Db;
  *(undefined4 *)(in_RAX + -0x40) = unaff_XMM8_Dc;
  *(undefined4 *)(in_RAX + -0x3c) = unaff_XMM8_Dd;
  *(undefined4 *)(in_RAX + -0x58) = unaff_XMM9_Da;
  *(undefined4 *)(in_RAX + -0x54) = unaff_XMM9_Db;
  *(undefined4 *)(in_RAX + -0x50) = unaff_XMM9_Dc;
  *(undefined4 *)(in_RAX + -0x4c) = unaff_XMM9_Dd;
  *(undefined4 *)(in_RAX + -0x68) = unaff_XMM10_Da;
  *(undefined4 *)(in_RAX + -100) = unaff_XMM10_Db;
  *(undefined4 *)(in_RAX + -0x60) = unaff_XMM10_Dc;
  *(undefined4 *)(in_RAX + -0x5c) = unaff_XMM10_Dd;
  *(undefined4 *)(in_RAX + -0x78) = unaff_XMM11_Da;
  *(undefined4 *)(in_RAX + -0x74) = unaff_XMM11_Db;
  *(undefined4 *)(in_RAX + -0x70) = unaff_XMM11_Dc;
  *(undefined4 *)(in_RAX + -0x6c) = unaff_XMM11_Dd;
  *(undefined4 *)(in_RAX + -0x88) = unaff_XMM12_Da;
  *(undefined4 *)(in_RAX + -0x84) = unaff_XMM12_Db;
  *(undefined4 *)(in_RAX + -0x80) = unaff_XMM12_Dc;
  *(undefined4 *)(in_RAX + -0x7c) = unaff_XMM12_Dd;
  *(undefined4 *)(in_RAX + -0x98) = unaff_XMM13_Da;
  *(undefined4 *)(in_RAX + -0x94) = unaff_XMM13_Db;
  *(undefined4 *)(in_RAX + -0x90) = unaff_XMM13_Dc;
  *(undefined4 *)(in_RAX + -0x8c) = unaff_XMM13_Dd;
  *(undefined4 *)(in_RAX + -0xa8) = unaff_XMM14_Da;
  *(undefined4 *)(in_RAX + -0xa4) = unaff_XMM14_Db;
  *(undefined4 *)(in_RAX + -0xa0) = unaff_XMM14_Dc;
  *(undefined4 *)(in_RAX + -0x9c) = unaff_XMM14_Dd;
  *(undefined4 *)(in_RAX + -0xb8) = unaff_XMM15_Da;
  *(undefined4 *)(in_RAX + -0xb4) = unaff_XMM15_Db;
  *(undefined4 *)(in_RAX + -0xb0) = unaff_XMM15_Dc;
  *(undefined4 *)(in_RAX + -0xac) = unaff_XMM15_Dd;
  FUN_1803de8d0(param_1,&stack0x00000030);
  lVar3 = *(longlong *)(unaff_RBX + 0x108);
  fVar11 = *(float *)(unaff_RBX + 0x16c);
  *(float *)(lVar3 + 0x2b8) = fStack0000000000000030;
  *(float *)(lVar3 + 700) = fStack0000000000000034;
  *(float *)(lVar3 + 0x2c0) = in_stack_00000038;
  *(float *)(lVar3 + 0x2c4) =
       SQRT(fStack0000000000000030 * fStack0000000000000030 +
            fStack0000000000000034 * fStack0000000000000034 + in_stack_00000038 * in_stack_00000038)
       * fVar11 * 0.05;
  fVar11 = *(float *)(unaff_RBX + 0x168);
  fVar21 = *(float *)(unaff_RBX + 0xa0);
  fVar18 = *(float *)(unaff_RBX + 0xa4);
  fVar15 = *(float *)(unaff_RBX + 0xa8);
  fVar5 = *(float *)(unaff_RBX + 0xac);
  fVar22 = *(float *)(unaff_RBX + 0x80);
  fVar19 = *(float *)(unaff_RBX + 0x84);
  fVar16 = *(float *)(unaff_RBX + 0x88);
  fVar6 = *(float *)(unaff_RBX + 0x8c);
  fVar23 = *(float *)(unaff_RBX + 0x90);
  fVar20 = *(float *)(unaff_RBX + 0x94);
  fVar17 = *(float *)(unaff_RBX + 0x98);
  fVar7 = *(float *)(unaff_RBX + 0x9c);
  unaff_RBP[-0xc] = 0.0;
  unaff_RBP[-0xb] = 1.0;
  unaff_RBP[-10] = 0.0;
  unaff_RBP[-9] = 0.0;
  unaff_RBP[0x38] = unaff_RBP[-0xb] * fVar11;
  unaff_RBP[-8] = 0.0;
  unaff_RBP[-7] = 0.0;
  unaff_RBP[-6] = 1.0;
  unaff_RBP[-5] = 0.0;
  unaff_RBP[0x3c] = unaff_RBP[-10] * fVar11;
  unaff_RBP[-0x10] = 1.0;
  unaff_RBP[-0xf] = 0.0;
  unaff_RBP[-0xe] = 0.0;
  unaff_RBP[-0xd] = 0.0;
  unaff_RBP[0x3e] = unaff_RBP[-7] * fVar11;
  in_stack_00000040 = unaff_RBP[-6] * fVar11;
  fStack0000000000000030 = fVar11 * 1.0;
  fVar24 = unaff_RBP[-0xf] * fVar11;
  fVar25 = unaff_RBP[-0xe] * fVar11;
  fStack0000000000000034 = 0.0;
  in_stack_00000038 = 0.0;
  uStack000000000000003c = 0;
  *unaff_RBP = fVar11 * 0.0;
  unaff_RBP[1] = 1.0;
  unaff_RBP[2] = 0.0;
  unaff_RBP[3] = 0.0;
  unaff_RBP[4] = fVar11 * 0.0;
  unaff_RBP[5] = 0.0;
  unaff_RBP[6] = 1.0;
  unaff_RBP[7] = 0.0;
  fVar11 = fVar18 * fVar18 + fVar21 * fVar21 + fVar15 * fVar15;
  auVar14 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
  fVar13 = auVar14._0_4_;
  fVar11 = fVar13 * 0.5 * (3.0 - fVar11 * fVar13 * fVar13);
  fVar18 = fVar18 * fVar11;
  fVar15 = fVar15 * fVar11;
  fVar21 = fVar21 * fVar11;
  fVar11 = fVar19 * fVar19 + fVar22 * fVar22 + fVar16 * fVar16;
  auVar14 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
  fVar13 = auVar14._0_4_;
  fVar11 = fVar13 * 0.5 * (3.0 - fVar11 * fVar13 * fVar13);
  fVar19 = fVar19 * fVar11;
  fVar16 = fVar16 * fVar11;
  fVar22 = fVar22 * fVar11;
  fVar11 = fVar20 * fVar20 + fVar23 * fVar23 + fVar17 * fVar17;
  auVar14 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
  fVar13 = auVar14._0_4_;
  fVar11 = fVar13 * 0.5 * (3.0 - fVar11 * fVar13 * fVar13);
  fVar23 = fVar23 * fVar11;
  fVar20 = fVar20 * fVar11;
  fVar17 = fVar17 * fVar11;
  fVar8 = *(float *)(unaff_RBX + 0x158);
  fVar9 = *(float *)(unaff_RBX + 0x15c);
  fVar10 = *(float *)(unaff_RBX + 0x160);
  fVar11 = unaff_RBP[0x38];
  fVar13 = unaff_RBP[0x3e];
  fVar1 = *unaff_RBP;
  fVar12 = unaff_RBP[0x3c];
  fVar2 = unaff_RBP[4];
  in_stack_00000050 = 0;
  unaff_RBP[-0x10] = fVar24 * fVar23 + fStack0000000000000030 * fVar22 + fVar25 * fVar21;
  unaff_RBP[-0xf] = fVar24 * fVar20 + fStack0000000000000030 * fVar19 + fVar25 * fVar18;
  unaff_RBP[-0xe] = fVar24 * fVar17 + fStack0000000000000030 * fVar16 + fVar25 * fVar15;
  unaff_RBP[-0xd] = fVar24 * fVar7 + fStack0000000000000030 * fVar6 + fVar25 * fVar5;
  unaff_RBP[-0xc] = fVar11 * fVar23 + fVar1 * fVar22 + fVar12 * fVar21;
  unaff_RBP[-0xb] = fVar11 * fVar20 + fVar1 * fVar19 + fVar12 * fVar18;
  unaff_RBP[-10] = fVar11 * fVar17 + fVar1 * fVar16 + fVar12 * fVar15;
  unaff_RBP[-9] = fVar11 * fVar7 + fVar1 * fVar6 + fVar12 * fVar5;
  in_stack_00000058 = 0xffffffff;
  unaff_RBP[-8] = fVar13 * fVar23 + fVar2 * fVar22 + in_stack_00000040 * fVar21;
  unaff_RBP[-7] = fVar13 * fVar20 + fVar2 * fVar19 + in_stack_00000040 * fVar18;
  unaff_RBP[-6] = fVar13 * fVar17 + fVar2 * fVar16 + in_stack_00000040 * fVar15;
  unaff_RBP[-5] = fVar13 * fVar7 + fVar2 * fVar6 + in_stack_00000040 * fVar5;
  fVar11 = *(float *)(unaff_RBX + 0xb4);
  fVar13 = *(float *)(unaff_RBX + 0xb8);
  fVar1 = *(float *)(unaff_RBX + 0xbc);
  fVar12 = fVar9 * fVar23 + fVar8 * fVar22 + fVar10 * fVar21 + *(float *)(unaff_RBX + 0xb0);
  unaff_RBP[-4] = fVar12;
  unaff_RBP[-3] = fVar9 * fVar20 + fVar8 * fVar19 + fVar10 * fVar18 + fVar11;
  unaff_RBP[-2] = fVar9 * fVar17 + fVar8 * fVar16 + fVar10 * fVar15 + fVar13;
  unaff_RBP[-1] = fVar9 * fVar7 + fVar8 * fVar6 + fVar10 * fVar5 + fVar1;
  uVar4 = *(undefined8 *)(unaff_RBX + 0x108);
  in_stack_00000060 = 0;
  uStack000000000000007c = 0;
  unaff_RBP[-0x1e] = 0.0;
  unaff_RBP[-0x1d] = 0.0;
  unaff_RBP[-0x1c] = 0.0;
  unaff_RBP[-0x1a] = 0.0;
  unaff_RBP[-0x19] = 0.0;
  *(undefined1 *)(unaff_RBP + -0x17) = 0;
  unaff_RBP[-0x12] = 0.0;
  unaff_RBP[-0x11] = 0.0;
  unaff_RBP[-0x18] = 0.0;
  uStack000000000000005c = CONCAT22((short)((uint)fVar6 >> 0x10),0xff00);
  in_stack_00000068 = 0xffffffffffffffff;
  in_stack_00000070 = 0xffffffff;
  uStack0000000000000074 = CONCAT31((int3)((uint)fVar18 >> 8),0xff);
  in_stack_00000078 = 0xffffffff;
  *(undefined2 *)(unaff_RBP + -0x1f) = 0x400;
  FUN_180077750(uVar4,fVar12,unaff_RBP + -0x10,0,&stack0x00000050);
  return;
}






// 函数: void FUN_1803defe5(void)
void FUN_1803defe5(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803deff0(longlong param_1)
void FUN_1803deff0(longlong param_1)

{
  longlong *plVar1;
  longlong *plStackX_8;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined4 uStack_10;
  
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe8) = 0x41f00000;
  *(undefined8 *)(param_1 + 0xec) = 0x42340000;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0x3f800000;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 1;
  if (*(int *)(_DAT_180c8a9c8 + 0xe0) == 0) {
    plVar1 = _DAT_180c8ed58;
    if (_DAT_180c8ed58 == (longlong *)0x0) {
      QueryPerformanceCounter(&plStackX_8);
      plVar1 = plStackX_8;
    }
    *(int *)(param_1 + 0xf8) =
         (int)((double)((longlong)plVar1 - _DAT_180c8ed48) * _DAT_180c8ed50 * 123.45600128173828);
  }
  else {
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  *(undefined4 *)(param_1 + 0x3f0) = 0;
  *(undefined4 *)(param_1 + 0x3f8) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3a0) = 0;
  *(undefined4 *)(param_1 + 0x3ec) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x40) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x80) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
  plStackX_8 = *(longlong **)(param_1 + 0x400);
  *(undefined8 *)(param_1 + 0x400) = 0;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  plStackX_8 = *(longlong **)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  plStackX_8 = *(longlong **)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x168) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x16c) = 0x3f800000;
  plStackX_8 = *(longlong **)(param_1 + 0x428);
  *(undefined8 *)(param_1 + 0x428) = 0;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  *(undefined1 *)(param_1 + 0x3a1) = 0;
  *(undefined1 *)(param_1 + 1000) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined1 *)(param_1 + 0x430) = 0;
  uStack_40 = 0xbf800000;
  uStack_3c = 0xbf800000;
  uStack_38 = 0xbf800000;
  uStack_34 = 0x7f7fffff;
  uStack_30 = 0x3f800000;
  uStack_2c = 0x3f800000;
  uStack_28 = 0x3f800000;
  uStack_24 = 0x7f7fffff;
  FUN_1800b9f60(&uStack_40);
  *(ulonglong *)(param_1 + 0x434) = CONCAT44(uStack_3c,uStack_40);
  *(ulonglong *)(param_1 + 0x43c) = CONCAT44(uStack_34,uStack_38);
  *(ulonglong *)(param_1 + 0x444) = CONCAT44(uStack_2c,uStack_30);
  *(ulonglong *)(param_1 + 0x44c) = CONCAT44(uStack_24,uStack_28);
  *(undefined8 *)(param_1 + 0x454) = uStack_20;
  *(undefined8 *)(param_1 + 0x45c) = uStack_18;
  *(undefined4 *)(param_1 + 0x464) = uStack_10;
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  return;
}






