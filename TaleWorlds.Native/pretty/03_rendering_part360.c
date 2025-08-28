#include "TaleWorlds.Native.Split.h"

// 03_rendering_part360.c - 4 个函数

// 函数: void FUN_180463ca4(void)
void FUN_180463ca4(void)

{
  return;
}



float * FUN_180463cd0(float *param_1,longlong param_2,longlong param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  
  fVar3 = *(float *)(param_3 + 0x70);
  fVar4 = *(float *)(param_3 + 0x74);
  fVar15 = 1.0 - param_4;
  fVar5 = *(float *)(param_3 + 0x30);
  fVar6 = *(float *)(param_3 + 0x34);
  fVar7 = *(float *)(param_2 + 0xb0);
  fVar8 = *(float *)(param_2 + 0xb4);
  fVar9 = *(float *)(param_2 + 0xb8);
  fVar28 = fVar15 * fVar15 * fVar15;
  fVar10 = *(float *)(param_2 + 0x30);
  fVar11 = *(float *)(param_2 + 0x34);
  fVar12 = *(float *)(param_2 + 0x38);
  fVar16 = fVar15 * 3.0 * fVar15 * param_4;
  fVar31 = fVar15 * 3.0 * param_4 * param_4;
  fVar29 = param_4 * param_4 * param_4;
  fVar13 = *(float *)(param_3 + 0x78);
  fVar14 = *(float *)(param_3 + 0x38);
  fVar19 = param_4 * 3.0 * param_4;
  fVar17 = fVar15 * 6.0 * param_4;
  fVar36 = (*(float *)(param_2 + 0xb0) - fVar10) * 3.0 * fVar15 * fVar15 +
           (*(float *)(param_3 + 0x70) - *(float *)(param_2 + 0xb0)) * fVar17 +
           (*(float *)(param_3 + 0x30) - *(float *)(param_3 + 0x70)) * fVar19;
  fVar22 = (fVar8 - fVar11) * 3.0 * fVar15 * fVar15 + (fVar4 - fVar8) * fVar17 +
           (fVar6 - fVar4) * fVar19;
  fVar17 = (fVar9 - fVar12) * 3.0 * fVar15 * fVar15 + (fVar13 - fVar9) * fVar17 +
           (fVar14 - fVar13) * fVar19;
  fVar23 = fVar22 * fVar22 + fVar36 * fVar36 + fVar17 * fVar17;
  auVar18 = rsqrtss(ZEXT416((uint)fVar23),ZEXT416((uint)fVar23));
  fVar19 = auVar18._0_4_;
  fVar34 = param_4 * *(float *)(param_3 + 0x20) + fVar15 * *(float *)(param_2 + 0x20);
  fVar23 = fVar19 * 0.5 * (3.0 - fVar23 * fVar19 * fVar19);
  fVar20 = param_4 * *(float *)(param_3 + 0x28) + fVar15 * *(float *)(param_2 + 0x28);
  fVar24 = fVar15 * *(float *)(param_2 + 0x24) + param_4 * *(float *)(param_3 + 0x24);
  fVar25 = fVar24 * fVar24 + fVar34 * fVar34 + fVar20 * fVar20;
  auVar18 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
  fVar19 = auVar18._0_4_;
  fVar19 = fVar19 * 0.5 * (3.0 - fVar25 * fVar19 * fVar19);
  fVar24 = fVar24 * fVar19;
  fVar20 = fVar20 * fVar19;
  fVar34 = fVar34 * fVar19;
  fVar30 = fVar22 * fVar23 * fVar20 - fVar24 * fVar17 * fVar23;
  fVar35 = fVar34 * fVar17 * fVar23 - fVar20 * fVar36 * fVar23;
  fVar33 = fVar24 * fVar36 * fVar23 - fVar34 * fVar22 * fVar23;
  fVar17 = fVar30 * fVar30 + fVar35 * fVar35 + fVar33 * fVar33;
  auVar18 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
  fVar19 = auVar18._0_4_;
  fVar17 = fVar19 * 0.5 * (3.0 - fVar17 * fVar19 * fVar19);
  fVar30 = fVar30 * fVar17;
  fVar35 = fVar35 * fVar17;
  fVar33 = fVar33 * fVar17;
  fVar32 = fVar33 * fVar24 - fVar35 * fVar20;
  fVar21 = fVar35 * fVar34 - fVar30 * fVar24;
  fVar26 = fVar30 * fVar20 - fVar33 * fVar34;
  fVar22 = fVar26 * fVar26 + fVar32 * fVar32 + fVar21 * fVar21;
  auVar18 = rsqrtss(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22));
  fVar19 = auVar18._0_4_;
  fVar17 = *(float *)(param_2 + 0xc0);
  fVar27 = fVar19 * 0.5 * (3.0 - fVar22 * fVar19 * fVar19);
  fVar19 = *(float *)(param_3 + 0xc0);
  fVar22 = *(float *)(param_2 + 200);
  fVar23 = *(float *)(param_2 + 0xcc);
  fVar25 = *(float *)(param_2 + 0xc4);
  fVar36 = *(float *)(param_3 + 0xc4);
  fVar1 = *(float *)(param_3 + 0xcc);
  fVar2 = *(float *)(param_3 + 200);
  param_1[0x11] = 1.0;
  param_1[0x12] = 1.0;
  param_1[0x13] = 3.4028235e+38;
  *param_1 = fVar30;
  param_1[1] = fVar35;
  param_1[2] = fVar33;
  param_1[3] = 0.0;
  param_1[4] = fVar32 * fVar27;
  param_1[5] = fVar26 * fVar27;
  param_1[6] = fVar21 * fVar27;
  param_1[7] = 0.0;
  *(ulonglong *)(param_1 + 8) = CONCAT44(fVar24,fVar34);
  *(ulonglong *)(param_1 + 10) = (ulonglong)(uint)fVar20;
  *(ulonglong *)(param_1 + 0xc) =
       CONCAT44(fVar11 * fVar28 + fVar8 * fVar16 + fVar4 * fVar31 + fVar6 * fVar29,
                fVar10 * fVar28 + fVar7 * fVar16 + fVar3 * fVar31 + fVar5 * fVar29);
  *(ulonglong *)(param_1 + 0xe) =
       CONCAT44(0x3f800000,fVar12 * fVar28 + fVar9 * fVar16 + fVar13 * fVar31 + fVar14 * fVar29);
  param_1[0x10] = fVar15 * fVar17 + param_4 * fVar19;
  param_1[0x11] = fVar15 * fVar25 + param_4 * fVar36;
  param_1[0x12] = fVar15 * fVar22 + param_4 * fVar2;
  param_1[0x13] = fVar15 * fVar23 + param_4 * fVar1;
  return param_1;
}



float * FUN_1804643c0(float *param_1,longlong param_2,longlong param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  fVar20 = param_4 * param_4;
  fVar3 = *(float *)(param_2 + 0xb0);
  fVar4 = *(float *)(param_2 + 0xb4);
  fVar5 = *(float *)(param_2 + 0xb8);
  fVar6 = *(float *)(param_3 + 0x30);
  fVar7 = *(float *)(param_3 + 0x34);
  fVar8 = *(float *)(param_3 + 0x38);
  fVar9 = *(float *)(param_2 + 0x30);
  fVar10 = *(float *)(param_2 + 0x34);
  fVar11 = *(float *)(param_2 + 0x38);
  fVar12 = 1.0 - param_4;
  fVar23 = fVar12 * fVar12;
  fVar14 = (fVar12 + fVar12) * param_4;
  fVar13 = fVar12 * -2.0;
  fVar15 = param_4 + param_4;
  fVar31 = (1.0 - fVar15) + (1.0 - fVar15);
  fVar32 = fVar9 * fVar13 + fVar3 * fVar31 + fVar6 * fVar15;
  fVar30 = fVar10 * fVar13 + fVar4 * fVar31 + fVar7 * fVar15;
  fVar27 = fVar11 * fVar13 + fVar5 * fVar31 + fVar8 * fVar15;
  fVar13 = fVar32 * fVar32 + fVar30 * fVar30 + fVar27 * fVar27;
  auVar18 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
  fVar15 = auVar18._0_4_;
  fVar24 = fVar12 * *(float *)(param_2 + 0x20) + param_4 * *(float *)(param_3 + 0x20);
  fVar31 = fVar15 * 0.5 * (3.0 - fVar13 * fVar15 * fVar15);
  fVar17 = fVar12 * *(float *)(param_2 + 0x24) + param_4 * *(float *)(param_3 + 0x24);
  fVar16 = fVar12 * *(float *)(param_2 + 0x28) + param_4 * *(float *)(param_3 + 0x28);
  fVar13 = fVar24 * fVar24 + fVar17 * fVar17 + fVar16 * fVar16;
  auVar18 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
  fVar15 = auVar18._0_4_;
  fVar13 = fVar15 * 0.5 * (3.0 - fVar13 * fVar15 * fVar15);
  fVar17 = fVar17 * fVar13;
  fVar24 = fVar13 * fVar24;
  fVar16 = fVar16 * fVar13;
  fVar25 = fVar30 * fVar31 * fVar16 - fVar27 * fVar31 * fVar17;
  fVar29 = fVar27 * fVar31 * fVar24 - fVar31 * fVar32 * fVar16;
  fVar28 = fVar31 * fVar32 * fVar17 - fVar30 * fVar31 * fVar24;
  fVar13 = fVar29 * fVar29 + fVar25 * fVar25 + fVar28 * fVar28;
  auVar18 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
  fVar15 = auVar18._0_4_;
  fVar13 = fVar15 * 0.5 * (3.0 - fVar13 * fVar15 * fVar15);
  fVar29 = fVar29 * fVar13;
  fVar28 = fVar28 * fVar13;
  fVar25 = fVar25 * fVar13;
  fVar26 = fVar28 * fVar17 - fVar29 * fVar16;
  fVar19 = fVar29 * fVar24 - fVar25 * fVar17;
  fVar21 = fVar25 * fVar16 - fVar28 * fVar24;
  fVar30 = fVar21 * fVar21 + fVar26 * fVar26 + fVar19 * fVar19;
  auVar18 = rsqrtss(ZEXT416((uint)fVar30),ZEXT416((uint)fVar30));
  fVar27 = auVar18._0_4_;
  fVar13 = *(float *)(param_3 + 0xc4);
  fVar15 = *(float *)(param_3 + 0xc0);
  fVar31 = *(float *)(param_2 + 0xc0);
  fVar22 = fVar27 * 0.5 * (3.0 - fVar30 * fVar27 * fVar27);
  fVar27 = *(float *)(param_2 + 0xc4);
  fVar30 = *(float *)(param_3 + 200);
  fVar32 = *(float *)(param_3 + 0xcc);
  fVar1 = *(float *)(param_2 + 200);
  fVar2 = *(float *)(param_2 + 0xcc);
  param_1[0x11] = 1.0;
  param_1[0x12] = 1.0;
  param_1[0x13] = 3.4028235e+38;
  *param_1 = fVar25;
  param_1[1] = fVar29;
  param_1[2] = fVar28;
  param_1[3] = 0.0;
  param_1[0x10] = fVar12 * fVar31 + param_4 * fVar15;
  param_1[0x11] = param_4 * fVar13 + fVar12 * fVar27;
  param_1[0x12] = param_4 * fVar30 + fVar12 * fVar1;
  param_1[0x13] = fVar12 * fVar2 + param_4 * fVar32;
  param_1[4] = fVar26 * fVar22;
  param_1[5] = fVar21 * fVar22;
  param_1[6] = fVar19 * fVar22;
  param_1[7] = 0.0;
  *(ulonglong *)(param_1 + 8) = CONCAT44(fVar17,fVar24);
  *(ulonglong *)(param_1 + 10) = (ulonglong)(uint)fVar16;
  *(ulonglong *)(param_1 + 0xc) =
       CONCAT44(fVar4 * fVar14 + fVar10 * fVar23 + fVar7 * fVar20,
                fVar3 * fVar14 + fVar9 * fVar23 + fVar6 * fVar20);
  *(ulonglong *)(param_1 + 0xe) =
       CONCAT44(0x3f800000,fVar5 * fVar14 + fVar11 * fVar23 + fVar8 * fVar20);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804649e0(undefined8 *param_1,longlong param_2,longlong param_3,float param_4)
void FUN_1804649e0(undefined8 *param_1,longlong param_2,longlong param_3,float param_4)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  undefined1 in_XMM2 [16];
  undefined1 auVar16 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_108 [32];
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float afStack_a8 [8];
  ulonglong uStack_88;
  
  uStack_88 = _DAT_180bf00a8 ^ (ulonglong)auStack_108;
  lVar8 = param_3;
  FUN_18063b470(&fStack_e8);
  uVar5 = FUN_18063b470(afStack_a8,lVar8);
  fVar15 = fStack_e8;
  fVar11 = fStack_e4;
  fVar13 = fStack_e0;
  fVar17 = fStack_dc;
  if (0.001 <= param_4) {
    fVar15 = afStack_a8[0];
    fVar11 = afStack_a8[1];
    fVar13 = afStack_a8[2];
    fVar17 = afStack_a8[3];
    if (param_4 <= 0.999) {
      afStack_a8[2] = afStack_a8[2] * fStack_e0;
      afStack_a8[3] = afStack_a8[3] * fStack_dc;
      afStack_a8[4] = -1.0;
      afStack_a8[5] = -1.0;
      afStack_a8[6] = -1.0;
      afStack_a8[7] = -1.0;
      auVar16._0_4_ = afStack_a8[2] + afStack_a8[0] * fStack_e8;
      auVar16._4_4_ = afStack_a8[3] + afStack_a8[1] * fStack_e4;
      auVar16._8_4_ = afStack_a8[2] + afStack_a8[2];
      auVar16._12_4_ = afStack_a8[3] + afStack_a8[3];
      in_XMM2._4_12_ = auVar16._4_12_;
      in_XMM2._0_4_ = auVar16._0_4_ + auVar16._4_4_;
      afStack_a8[0] = 1.0;
      afStack_a8[1] = 1.0;
      afStack_a8[2] = 1.0;
      afStack_a8[3] = 1.0;
      uVar6 = movmskps(uVar5,in_XMM2);
      uVar7 = (ulonglong)(uVar6 & 1);
      fVar12 = afStack_a8[uVar7 * 4];
      fVar14 = afStack_a8[uVar7 * 4 + 1];
      fVar18 = afStack_a8[uVar7 * 4 + 2];
      fVar20 = afStack_a8[uVar7 * 4 + 3];
      if (0.9995 < ABS(in_XMM2._0_4_)) {
        fVar9 = 1.0 - param_4;
        fVar10 = fVar9 * fStack_e8 + param_4 * fVar12 * fVar15;
        fVar19 = fVar9 * fStack_e4 + param_4 * fVar14 * fVar11;
        fVar21 = fVar9 * fStack_e0 + param_4 * fVar18 * fVar13;
        fVar9 = fVar9 * fStack_dc + param_4 * fVar20 * fVar17;
        fVar11 = fVar9 * fVar9 + fVar10 * fVar10;
        fVar13 = fVar21 * fVar21 + fVar19 * fVar19;
        fVar18 = fVar11 + fVar19 * fVar19 + fVar21 * fVar21;
        fVar20 = fVar13 + fVar10 * fVar10 + fVar9 * fVar9;
        auVar4._4_4_ = fVar11 + fVar13 + 1.1754944e-38;
        auVar4._0_4_ = fVar13 + fVar11 + 1.1754944e-38;
        auVar4._8_4_ = fVar18 + 1.1754944e-38;
        auVar4._12_4_ = fVar20 + 1.1754944e-38;
        in_XMM2 = rsqrtps(in_XMM2,auVar4);
        fVar15 = in_XMM2._0_4_;
        fVar17 = in_XMM2._4_4_;
        fVar12 = in_XMM2._8_4_;
        fVar14 = in_XMM2._12_4_;
        fVar15 = fVar10 * (3.0 - fVar15 * fVar15 * (fVar13 + fVar11)) * fVar15 * 0.5;
        fVar11 = fVar19 * (3.0 - fVar17 * fVar17 * (fVar11 + fVar13)) * fVar17 * 0.5;
        fVar13 = fVar21 * (3.0 - fVar12 * fVar12 * fVar18) * fVar12 * 0.5;
        fVar17 = fVar9 * (3.0 - fVar14 * fVar14 * fVar20) * fVar14 * 0.5;
      }
      else {
        fVar9 = (float)acosf();
        fVar10 = (float)sinf();
        fVar19 = (float)sinf(fVar9 - fVar9 * param_4);
        fVar19 = fVar19 * (1.0 / fVar10);
        fVar9 = (float)sinf(fVar9 * param_4);
        fVar9 = fVar9 * (1.0 / fVar10);
        fVar15 = fVar19 * fStack_e8 + fVar9 * fVar12 * fVar15;
        fVar11 = fVar19 * fStack_e4 + fVar9 * fVar14 * fVar11;
        fVar13 = fVar19 * fStack_e0 + fVar9 * fVar18 * fVar13;
        fVar17 = fVar19 * fStack_dc + fVar9 * fVar20 * fVar17;
      }
    }
  }
  fVar12 = fVar17 * fVar17 + fVar15 * fVar15;
  fVar14 = fVar13 * fVar13 + fVar11 * fVar11;
  fVar19 = fVar12 + fVar11 * fVar11 + fVar13 * fVar13;
  fVar21 = fVar14 + fVar15 * fVar15 + fVar17 * fVar17;
  auVar3._4_4_ = fVar12 + fVar14 + 1.1754944e-38;
  auVar3._0_4_ = fVar14 + fVar12 + 1.1754944e-38;
  auVar3._8_4_ = fVar19 + 1.1754944e-38;
  auVar3._12_4_ = fVar21 + 1.1754944e-38;
  auVar16 = rsqrtps(in_XMM2,auVar3);
  fVar18 = auVar16._0_4_;
  fVar20 = auVar16._4_4_;
  fVar9 = auVar16._8_4_;
  fVar10 = auVar16._12_4_;
  afStack_a8[1] = fVar11 * (3.0 - fVar20 * fVar20 * (fVar12 + fVar14)) * fVar20 * 0.5;
  afStack_a8[0] = fVar15 * (3.0 - fVar18 * fVar18 * (fVar14 + fVar12)) * fVar18 * 0.5;
  afStack_a8[3] = fVar17 * (3.0 - fVar10 * fVar10 * fVar21) * fVar10 * 0.5;
  afStack_a8[2] = fVar13 * (3.0 - fVar9 * fVar9 * fVar19) * fVar9 * 0.5;
  FUN_18063b5f0(&uStack_d8,afStack_a8);
  fVar22 = 1.0 - param_4;
  fVar15 = *(float *)(param_3 + 0x30);
  fVar11 = *(float *)(param_3 + 0x34);
  fVar13 = *(float *)(param_3 + 200);
  fVar17 = *(float *)(param_2 + 0x30);
  fVar12 = *(float *)(param_2 + 0xc0);
  fVar14 = *(float *)(param_3 + 0x38);
  fVar18 = *(float *)(param_3 + 0xc4);
  fVar20 = *(float *)(param_2 + 0x34);
  fVar9 = *(float *)(param_2 + 0x38);
  fVar10 = *(float *)(param_3 + 0xc0);
  fVar19 = *(float *)(param_3 + 0xcc);
  fVar21 = *(float *)(param_2 + 0xc4);
  fVar1 = *(float *)(param_2 + 200);
  fVar2 = *(float *)(param_2 + 0xcc);
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x7f7fffff;
  *param_1 = uStack_d8;
  param_1[1] = uStack_d0;
  *(undefined4 *)(param_1 + 2) = uStack_c8;
  *(undefined4 *)((longlong)param_1 + 0x14) = uStack_c4;
  *(undefined4 *)(param_1 + 3) = uStack_c0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_bc;
  *(float *)(param_1 + 8) = fVar22 * fVar12 + param_4 * fVar10;
  *(float *)((longlong)param_1 + 0x44) = param_4 * fVar18 + fVar22 * fVar21;
  *(float *)(param_1 + 9) = param_4 * fVar13 + fVar22 * fVar1;
  *(float *)((longlong)param_1 + 0x4c) = fVar22 * fVar2 + param_4 * fVar19;
  *(undefined4 *)(param_1 + 4) = uStack_b8;
  *(undefined4 *)((longlong)param_1 + 0x24) = uStack_b4;
  *(undefined4 *)(param_1 + 5) = uStack_b0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_ac;
  *(float *)(param_1 + 6) = fVar22 * fVar17 + param_4 * fVar15;
  *(float *)((longlong)param_1 + 0x34) = param_4 * fVar11 + fVar22 * fVar20;
  *(float *)(param_1 + 7) = param_4 * fVar14 + fVar22 * fVar9;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x7f7fffff;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_88 ^ (ulonglong)auStack_108);
}





// 函数: void FUN_180464a7a(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
void FUN_180464a7a(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 in_EAX;
  uint uVar6;
  longlong unaff_RBX;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  float fVar7;
  float fVar8;
  float fVar9;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Dc;
  float unaff_XMM9_Da;
  float fVar19;
  float fVar20;
  float unaff_XMM12_Da;
  float fVar21;
  float fStackX_20;
  float fStackX_24;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined4 uStack0000000000000070;
  ulonglong in_stack_00000080;
  undefined4 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  
  uStack0000000000000070 = param_2;
  auVar13._0_4_ = in_XMM0_Dc + (float)param_1;
  auVar13._4_4_ = in_XMM0_Dd + (float)((ulonglong)param_1 >> 0x20);
  auVar13._8_4_ = in_XMM0_Dc + in_XMM0_Dc;
  auVar13._12_4_ = in_XMM0_Dd + in_XMM0_Dd;
  auVar12._4_12_ = auVar13._4_12_;
  auVar12._0_4_ = auVar13._0_4_ + auVar13._4_4_;
  uStack0000000000000060 = 0x3f8000003f800000;
  uStack0000000000000068 = 0x3f8000003f800000;
  uVar6 = movmskps(in_EAX,auVar12);
  lVar1 = (ulonglong)(uVar6 & 1) * 0x10;
  fVar10 = *(float *)((longlong)&stack0x00000068 + lVar1);
  fVar11 = *(float *)((undefined1 *)((longlong)register0x00000020 + 0x6c) + lVar1);
  fVar19 = *(float *)((longlong)&stack0x00000060 + lVar1) * (float)param_4;
  fVar20 = *(float *)((undefined1 *)((longlong)register0x00000020 + 100) + lVar1) *
           (float)((ulonglong)param_4 >> 0x20);
  if (0.9995 < ABS(auVar12._0_4_)) {
    fVar7 = unaff_XMM12_Da - unaff_XMM9_Da;
    fVar15 = fVar7 * fStackX_20 + unaff_XMM9_Da * fVar19;
    fVar16 = fVar7 * fStackX_24 + unaff_XMM9_Da * fVar20;
    fVar17 = fVar7 * (float)param_5 + unaff_XMM9_Da * fVar10 * in_XMM3_Dc;
    fVar18 = fVar7 * param_5._4_4_ + unaff_XMM9_Da * fVar11 * in_XMM3_Dd;
    fVar10 = fVar18 * fVar18 + fVar15 * fVar15;
    fVar11 = fVar17 * fVar17 + fVar16 * fVar16;
    fVar9 = fVar10 + fVar16 * fVar16 + fVar17 * fVar17;
    fVar14 = fVar11 + fVar15 * fVar15 + fVar18 * fVar18;
    auVar5._4_4_ = fVar10 + fVar11 + 1.1754944e-38;
    auVar5._0_4_ = fVar11 + fVar10 + 1.1754944e-38;
    auVar5._8_4_ = fVar9 + 1.1754944e-38;
    auVar5._12_4_ = fVar14 + 1.1754944e-38;
    auVar12 = rsqrtps(auVar12,auVar5);
    fVar19 = auVar12._0_4_;
    fVar20 = auVar12._4_4_;
    fVar7 = auVar12._8_4_;
    fVar8 = auVar12._12_4_;
    fVar15 = fVar15 * (3.0 - fVar19 * fVar19 * (fVar11 + fVar10)) * fVar19 * 0.5;
    fVar16 = fVar16 * (3.0 - fVar20 * fVar20 * (fVar10 + fVar11)) * fVar20 * 0.5;
    fVar17 = fVar17 * (3.0 - fVar7 * fVar7 * fVar9) * fVar7 * 0.5;
    fVar18 = fVar18 * (3.0 - fVar8 * fVar8 * fVar14) * fVar8 * 0.5;
  }
  else {
    in_stack_000000c0 = unaff_XMM8_Da;
    in_stack_000000c8 = unaff_XMM8_Dc;
    fVar7 = (float)acosf();
    fVar8 = (float)sinf();
    fVar9 = (float)sinf(fVar7 - fVar7 * unaff_XMM9_Da);
    fVar9 = fVar9 * (unaff_XMM12_Da / fVar8);
    fVar7 = (float)sinf(fVar7 * unaff_XMM9_Da);
    fVar7 = fVar7 * (unaff_XMM12_Da / fVar8);
    fVar15 = fVar9 * fStackX_20 + fVar7 * fVar19;
    fVar16 = fVar9 * fStackX_24 + fVar7 * fVar20;
    fVar17 = fVar9 * (float)param_5 + fVar7 * fVar10 * in_XMM3_Dc;
    fVar18 = fVar9 * param_5._4_4_ + fVar7 * fVar11 * in_XMM3_Dd;
  }
  fVar10 = fVar18 * fVar18 + fVar15 * fVar15;
  fVar11 = fVar17 * fVar17 + fVar16 * fVar16;
  fVar9 = fVar10 + fVar16 * fVar16 + fVar17 * fVar17;
  fVar14 = fVar11 + fVar15 * fVar15 + fVar18 * fVar18;
  auVar4._4_4_ = fVar10 + fVar11 + 1.1754944e-38;
  auVar4._0_4_ = fVar11 + fVar10 + 1.1754944e-38;
  auVar4._8_4_ = fVar9 + 1.1754944e-38;
  auVar4._12_4_ = fVar14 + 1.1754944e-38;
  auVar13 = rsqrtps(auVar12,auVar4);
  fVar19 = auVar13._0_4_;
  fVar20 = auVar13._4_4_;
  fVar7 = auVar13._8_4_;
  fVar8 = auVar13._12_4_;
  uStack0000000000000060 =
       CONCAT44(fVar16 * (3.0 - fVar20 * fVar20 * (fVar10 + fVar11)) * fVar20 * 0.5,
                fVar15 * (3.0 - fVar19 * fVar19 * (fVar11 + fVar10)) * fVar19 * 0.5);
  uStack0000000000000068 =
       CONCAT44(fVar18 * (3.0 - fVar8 * fVar8 * fVar14) * fVar8 * 0.5,
                fVar17 * (3.0 - fVar7 * fVar7 * fVar9) * fVar7 * 0.5);
  FUN_18063b5f0(&param_6,&stack0x00000060);
  fVar21 = unaff_XMM12_Da - unaff_XMM9_Da;
  fVar10 = *(float *)(unaff_RDI + 0x30);
  fVar11 = *(float *)(unaff_RDI + 0x34);
  fVar19 = *(float *)(unaff_RDI + 200);
  fVar20 = *(float *)(unaff_RBX + 0x30);
  fVar7 = *(float *)(unaff_RBX + 0xc0);
  fVar8 = *(float *)(unaff_RDI + 0x38);
  fVar9 = *(float *)(unaff_RDI + 0xc4);
  fVar14 = *(float *)(unaff_RBX + 0x34);
  fVar15 = *(float *)(unaff_RBX + 0x38);
  fVar16 = *(float *)(unaff_RDI + 0xc0);
  fVar17 = *(float *)(unaff_RDI + 0xcc);
  fVar18 = *(float *)(unaff_RBX + 0xc4);
  fVar2 = *(float *)(unaff_RBX + 200);
  fVar3 = *(float *)(unaff_RBX + 0xcc);
  *(undefined4 *)((longlong)unaff_RSI + 0x44) = 0x3f800000;
  *(undefined4 *)(unaff_RSI + 9) = 0x3f800000;
  *(undefined4 *)((longlong)unaff_RSI + 0x4c) = 0x7f7fffff;
  *unaff_RSI = param_6;
  unaff_RSI[1] = param_7;
  *(undefined4 *)(unaff_RSI + 2) = (undefined4)param_8;
  *(undefined4 *)((longlong)unaff_RSI + 0x14) = param_8._4_4_;
  *(undefined4 *)(unaff_RSI + 3) = (undefined4)param_9;
  *(undefined4 *)((longlong)unaff_RSI + 0x1c) = param_9._4_4_;
  *(float *)(unaff_RSI + 8) = fVar21 * fVar7 + unaff_XMM9_Da * fVar16;
  *(float *)((longlong)unaff_RSI + 0x44) = unaff_XMM9_Da * fVar9 + fVar21 * fVar18;
  *(float *)(unaff_RSI + 9) = unaff_XMM9_Da * fVar19 + fVar21 * fVar2;
  *(float *)((longlong)unaff_RSI + 0x4c) = fVar21 * fVar3 + unaff_XMM9_Da * fVar17;
  *(undefined4 *)(unaff_RSI + 4) = (undefined4)param_10;
  *(undefined4 *)((longlong)unaff_RSI + 0x24) = param_10._4_4_;
  *(undefined4 *)(unaff_RSI + 5) = (undefined4)param_11;
  *(undefined4 *)((longlong)unaff_RSI + 0x2c) = param_11._4_4_;
  *(float *)(unaff_RSI + 6) = fVar21 * fVar20 + unaff_XMM9_Da * fVar10;
  *(float *)((longlong)unaff_RSI + 0x34) = unaff_XMM9_Da * fVar11 + fVar21 * fVar14;
  *(float *)(unaff_RSI + 7) = unaff_XMM9_Da * fVar8 + fVar21 * fVar15;
  *(undefined4 *)((longlong)unaff_RSI + 0x3c) = 0x7f7fffff;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000080 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180464ace(void)
void FUN_180464ace(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong unaff_RBX;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  undefined1 in_XMM2 [16];
  undefined1 auVar10 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM10_Db;
  float unaff_XMM10_Dc;
  float unaff_XMM10_Dd;
  float unaff_XMM12_Da;
  float fVar16;
  float fStackX_20;
  float fStackX_24;
  float fStack0000000000000028;
  float fStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  float fStack000000000000006c;
  ulonglong in_stack_00000080;
  
  fVar7 = (float)acosf();
  fVar8 = (float)sinf();
  fVar9 = (float)sinf(fVar7 - fVar7 * unaff_XMM9_Da);
  fVar9 = fVar9 * (unaff_XMM12_Da / fVar8);
  fVar7 = (float)sinf(fVar7 * unaff_XMM9_Da);
  fVar7 = fVar7 * (unaff_XMM12_Da / fVar8);
  in_stack_00000060 = fVar9 * fStackX_20 + fVar7 * unaff_XMM10_Da;
  fStack0000000000000064 = fVar9 * fStackX_24 + fVar7 * unaff_XMM10_Db;
  in_stack_00000068 = fVar9 * fStack0000000000000028 + fVar7 * unaff_XMM10_Dc;
  fStack000000000000006c = fVar9 * fStack000000000000002c + fVar7 * unaff_XMM10_Dd;
  fVar7 = fStack000000000000006c * fStack000000000000006c + in_stack_00000060 * in_stack_00000060;
  fVar8 = in_stack_00000068 * in_stack_00000068 + fStack0000000000000064 * fStack0000000000000064;
  fVar14 = fVar7 + fStack0000000000000064 * fStack0000000000000064 +
                   in_stack_00000068 * in_stack_00000068;
  fVar15 = fVar8 + in_stack_00000060 * in_stack_00000060 +
                   fStack000000000000006c * fStack000000000000006c;
  auVar10._4_4_ = fVar7 + fVar8 + 1.1754944e-38;
  auVar10._0_4_ = fVar8 + fVar7 + 1.1754944e-38;
  auVar10._8_4_ = fVar14 + 1.1754944e-38;
  auVar10._12_4_ = fVar15 + 1.1754944e-38;
  auVar10 = rsqrtps(in_XMM2,auVar10);
  fVar9 = auVar10._0_4_;
  fVar11 = auVar10._4_4_;
  fVar12 = auVar10._8_4_;
  fVar13 = auVar10._12_4_;
  in_stack_00000060 = in_stack_00000060 * (3.0 - fVar9 * fVar9 * (fVar8 + fVar7)) * fVar9 * 0.5;
  fStack0000000000000064 =
       fStack0000000000000064 * (3.0 - fVar11 * fVar11 * (fVar7 + fVar8)) * fVar11 * 0.5;
  in_stack_00000068 = in_stack_00000068 * (3.0 - fVar12 * fVar12 * fVar14) * fVar12 * 0.5;
  fStack000000000000006c = fStack000000000000006c * (3.0 - fVar13 * fVar13 * fVar15) * fVar13 * 0.5;
  FUN_18063b5f0(&stack0x00000030,&stack0x00000060);
  fVar16 = unaff_XMM12_Da - unaff_XMM9_Da;
  fVar7 = *(float *)(unaff_RDI + 0x30);
  fVar8 = *(float *)(unaff_RDI + 0x34);
  fVar9 = *(float *)(unaff_RDI + 200);
  fVar11 = *(float *)(unaff_RBX + 0x30);
  fVar12 = *(float *)(unaff_RBX + 0xc0);
  fVar13 = *(float *)(unaff_RDI + 0x38);
  fVar14 = *(float *)(unaff_RDI + 0xc4);
  fVar15 = *(float *)(unaff_RBX + 0x34);
  fVar1 = *(float *)(unaff_RBX + 0x38);
  fVar2 = *(float *)(unaff_RDI + 0xc0);
  fVar3 = *(float *)(unaff_RDI + 0xcc);
  fVar4 = *(float *)(unaff_RBX + 0xc4);
  fVar5 = *(float *)(unaff_RBX + 200);
  fVar6 = *(float *)(unaff_RBX + 0xcc);
  *(undefined4 *)((longlong)unaff_RSI + 0x44) = 0x3f800000;
  *(undefined4 *)(unaff_RSI + 9) = 0x3f800000;
  *(undefined4 *)((longlong)unaff_RSI + 0x4c) = 0x7f7fffff;
  *unaff_RSI = in_stack_00000030;
  unaff_RSI[1] = in_stack_00000038;
  *(undefined4 *)(unaff_RSI + 2) = uStack0000000000000040;
  *(undefined4 *)((longlong)unaff_RSI + 0x14) = uStack0000000000000044;
  *(undefined4 *)(unaff_RSI + 3) = uStack0000000000000048;
  *(undefined4 *)((longlong)unaff_RSI + 0x1c) = uStack000000000000004c;
  *(float *)(unaff_RSI + 8) = fVar16 * fVar12 + unaff_XMM9_Da * fVar2;
  *(float *)((longlong)unaff_RSI + 0x44) = unaff_XMM9_Da * fVar14 + fVar16 * fVar4;
  *(float *)(unaff_RSI + 9) = unaff_XMM9_Da * fVar9 + fVar16 * fVar5;
  *(float *)((longlong)unaff_RSI + 0x4c) = fVar16 * fVar6 + unaff_XMM9_Da * fVar3;
  *(undefined4 *)(unaff_RSI + 4) = uStack0000000000000050;
  *(undefined4 *)((longlong)unaff_RSI + 0x24) = uStack0000000000000054;
  *(undefined4 *)(unaff_RSI + 5) = uStack0000000000000058;
  *(undefined4 *)((longlong)unaff_RSI + 0x2c) = uStack000000000000005c;
  *(float *)(unaff_RSI + 6) = fVar16 * fVar11 + unaff_XMM9_Da * fVar7;
  *(float *)((longlong)unaff_RSI + 0x34) = unaff_XMM9_Da * fVar8 + fVar16 * fVar15;
  *(float *)(unaff_RSI + 7) = unaff_XMM9_Da * fVar13 + fVar16 * fVar1;
  *(undefined4 *)((longlong)unaff_RSI + 0x3c) = 0x7f7fffff;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000080 ^ (ulonglong)&stack0x00000000);
}





