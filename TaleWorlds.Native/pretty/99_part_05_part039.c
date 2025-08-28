#include "TaleWorlds.Native.Split.h"

// 99_part_05_part039.c - 1 个函数

// 函数: void FUN_1802f09bb(void)
void FUN_1802f09bb(void)

{
  return;
}



ulonglong FUN_1802f09d0(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  float *pfVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  uVar7 = *(ulonglong *)(param_1 + 0x20);
  if ((uVar7 != 0) && (lVar1 = *(longlong *)(uVar7 + 0x2908), lVar1 != 0)) {
    uVar5 = *(uint *)(param_1 + 0x2ac);
    bVar8 = (uVar5 >> 0x10 & 1) != 0;
    if (bVar8) {
      uVar9 = FUN_1803a56a0(lVar1,param_1 + 0xa0,0);
      uStack_c8 = *(undefined8 *)(param_1 + 0x80);
      uStack_c0 = *(undefined8 *)(param_1 + 0x88);
      uStack_d8 = *(undefined8 *)(param_1 + 0x70);
      uStack_d0 = *(undefined8 *)(param_1 + 0x78);
      uStack_a8 = *(undefined8 *)(param_1 + 0xa0);
      fStack_b8 = *(float *)(param_1 + 0x90);
      fStack_b4 = *(float *)(param_1 + 0x94);
      fStack_b0 = *(float *)(param_1 + 0x98);
      uStack_ac = *(undefined4 *)(param_1 + 0x9c);
      uStack_a0 = CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 0xa8) >> 0x20),uVar9);
      FUN_1802ea790(param_1,&uStack_d8);
      uVar5 = *(uint *)(param_1 + 0x2ac);
    }
    uVar7 = (ulonglong)bVar8;
    if ((int)uVar5 < 0) {
      uStack_c8 = *(undefined8 *)(param_1 + 0x80);
      uStack_c0 = *(undefined8 *)(param_1 + 0x88);
      fVar12 = *(float *)(param_1 + 0x70);
      fVar13 = *(float *)(param_1 + 0x74);
      uStack_d8 = *(undefined8 *)(param_1 + 0x70);
      fVar2 = *(float *)(param_1 + 0x78);
      uStack_d0._4_4_ = *(undefined4 *)(param_1 + 0x7c);
      uStack_a8 = *(undefined8 *)(param_1 + 0xa0);
      uStack_a0 = *(undefined8 *)(param_1 + 0xa8);
      uStack_d0._0_4_ = fVar2;
      FUN_1803a5440(lVar1,&fStack_e8,param_1 + 0xa0,0);
      fVar10 = fStack_e4 * fStack_e4 + fStack_e8 * fStack_e8 + fStack_e0 * fStack_e0;
      auVar14 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      fVar11 = auVar14._0_4_;
      fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
      fStack_e8 = fStack_e8 * fVar10;
      fStack_e4 = fStack_e4 * fVar10;
      fStack_e0 = fStack_e0 * fVar10;
      uStack_ac = uStack_dc;
      uStack_c8._0_4_ = fStack_e4 * fVar2 - fStack_e0 * fVar13;
      fVar10 = fVar13 * fStack_e8 - fVar12 * fStack_e4;
      uStack_c8._4_4_ = fStack_e0 * fVar12 - fStack_e8 * fVar2;
      fVar12 = uStack_c8._4_4_ * uStack_c8._4_4_ + (float)uStack_c8 * (float)uStack_c8 +
               fVar10 * fVar10;
      auVar14 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
      fVar13 = auVar14._0_4_;
      fVar12 = fVar13 * 0.5 * (3.0 - fVar12 * fVar13 * fVar13);
      uStack_c8._4_4_ = uStack_c8._4_4_ * fVar12;
      fVar10 = fVar10 * fVar12;
      uStack_c8._0_4_ = (float)uStack_c8 * fVar12;
      uStack_d8._0_4_ = uStack_c8._4_4_ * fStack_e0 - fVar10 * fStack_e4;
      uStack_d8._4_4_ = fVar10 * fStack_e8 - (float)uStack_c8 * fStack_e0;
      uStack_d0._0_4_ = (float)uStack_c8 * fStack_e4 - uStack_c8._4_4_ * fStack_e8;
      fVar12 = uStack_d8._4_4_ * uStack_d8._4_4_ + (float)uStack_d8 * (float)uStack_d8 +
               (float)uStack_d0 * (float)uStack_d0;
      auVar14 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
      fVar13 = auVar14._0_4_;
      fVar12 = fVar13 * 0.5 * (3.0 - fVar12 * fVar13 * fVar13);
      uStack_d8._4_4_ = uStack_d8._4_4_ * fVar12;
      uStack_d8._0_4_ = (float)uStack_d8 * fVar12;
      uStack_d0._0_4_ = (float)uStack_d0 * fVar12;
      fVar12 = uStack_d8._4_4_ * uStack_d8._4_4_ + (float)uStack_d8 * (float)uStack_d8 +
               (float)uStack_d0 * (float)uStack_d0;
      if ((((fVar12 <= 0.98010004) || (1.0201 <= fVar12)) ||
          (fVar12 = (float)uStack_c8 * (float)uStack_c8 + uStack_c8._4_4_ * uStack_c8._4_4_ +
                    fVar10 * fVar10, fVar12 <= 0.98010004)) ||
         (((1.0201 <= fVar12 ||
           (fVar12 = fStack_e8 * fStack_e8 + fStack_e4 * fStack_e4 + fStack_e0 * fStack_e0,
           fVar12 <= 0.98010004)) ||
          (fStack_b8 = fStack_e8, fStack_b4 = fStack_e4, fStack_b0 = fStack_e0,
          uStack_c0._0_4_ = fVar10, 1.0201 <= fVar12)))) {
        uStack_d8._0_4_ = 1.0;
        uStack_d8._4_4_ = 0.0;
        uStack_d0._0_4_ = 0.0;
        uStack_d0._4_4_ = 0;
        fStack_b8 = 0.0;
        fStack_b4 = 0.0;
        fStack_b0 = 1.0;
        uStack_ac = 0;
        uStack_c8._0_4_ = 0.0;
        uStack_c8._4_4_ = 1.0;
        uStack_c0._0_4_ = 0.0;
        uStack_c0._4_4_ = 0;
      }
      FUN_1802f5bc0(&uStack_d8);
      pfVar3 = (float *)FUN_180085020(param_1 + 0x70,&fStack_e8);
      fVar12 = *pfVar3;
      fVar13 = pfVar3[1];
      uStack_d8 = CONCAT44(uStack_d8._4_4_ * fVar12,(float)uStack_d8 * fVar12);
      uStack_d0 = CONCAT44(uStack_d0._4_4_,(float)uStack_d0 * fVar12);
      uStack_c8 = CONCAT44(uStack_c8._4_4_ * fVar13,(float)uStack_c8 * fVar13);
      fVar12 = pfVar3[2];
      fStack_b8 = fStack_b8 * fVar12;
      uStack_c0 = CONCAT44(uStack_c0._4_4_,(float)uStack_c0 * fVar13);
      fStack_b0 = fStack_b0 * fVar12;
      fStack_b4 = fStack_b4 * fVar12;
      FUN_1802ea790(param_1,&uStack_d8);
      uVar7 = 1;
    }
    uVar4 = 0;
    uVar6 = uVar4;
    if (*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3 != 0) {
      do {
        FUN_1802f09d0(*(undefined8 *)(uVar4 + *(longlong *)(param_1 + 0x1c0)));
        uVar4 = uVar4 + 8;
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while ((ulonglong)(longlong)(int)uVar5 <
               (ulonglong)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3));
    }
    return uVar7;
  }
  return uVar7 & 0xffffffffffffff00;
}



bool FUN_1802f0a07(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint in_EAX;
  float *pfVar8;
  longlong in_RCX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar9;
  uint uVar10;
  undefined8 unaff_RDI;
  ulonglong uVar11;
  longlong in_R11;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float in_stack_00000020;
  float fStackX_24;
  float fStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  *(undefined8 *)(in_R11 + 8) = unaff_RDI;
  *(undefined8 *)(in_R11 + 0x10) = unaff_R14;
  *(undefined8 *)(in_R11 + 0x18) = unaff_R15;
  bVar12 = (in_EAX >> 0x10 & 1) != 0;
  if (bVar12) {
    uVar13 = FUN_1803a56a0(param_1,in_RCX + 0xa0,0);
    uVar4 = *(undefined8 *)(unaff_RBX + 0x88);
    uVar5 = *(undefined8 *)(unaff_RBX + 0x70);
    uVar6 = *(undefined8 *)(unaff_RBX + 0x78);
    *(undefined8 *)(unaff_RBP + -0x69) = *(undefined8 *)(unaff_RBX + 0x80);
    *(undefined8 *)(unaff_RBP + -0x61) = uVar4;
    uVar4 = *(undefined8 *)(unaff_RBX + 0xa0);
    uVar7 = *(undefined8 *)(unaff_RBX + 0xa8);
    *(undefined8 *)(unaff_RBP + -0x79) = uVar5;
    *(undefined8 *)(unaff_RBP + -0x71) = uVar6;
    uVar14 = *(undefined4 *)(unaff_RBX + 0x90);
    uVar1 = *(undefined4 *)(unaff_RBX + 0x94);
    uVar2 = *(undefined4 *)(unaff_RBX + 0x98);
    uVar3 = *(undefined4 *)(unaff_RBX + 0x9c);
    *(undefined8 *)(unaff_RBP + -0x49) = uVar4;
    *(undefined8 *)(unaff_RBP + -0x41) = uVar7;
    *(undefined4 *)(unaff_RBP + -0x41) = uVar13;
    *(undefined4 *)(unaff_RBP + -0x59) = uVar14;
    *(undefined4 *)(unaff_RBP + -0x55) = uVar1;
    *(undefined4 *)(unaff_RBP + -0x51) = uVar2;
    *(undefined4 *)(unaff_RBP + -0x4d) = uVar3;
    FUN_1802ea790(uVar13,unaff_RBP + -0x79);
    in_EAX = *(uint *)(unaff_RBX + 0x2ac);
  }
  if ((int)in_EAX < 0) {
    uVar4 = *(undefined8 *)(unaff_RBX + 0x88);
    fVar16 = *(float *)(unaff_RBX + 0x70);
    fVar18 = *(float *)(unaff_RBX + 0x74);
    fVar19 = *(float *)(unaff_RBX + 0x78);
    uVar14 = *(undefined4 *)(unaff_RBX + 0x7c);
    *(undefined8 *)(unaff_RBP + -0x69) = *(undefined8 *)(unaff_RBX + 0x80);
    *(undefined8 *)(unaff_RBP + -0x61) = uVar4;
    uVar1 = *(undefined4 *)(unaff_RBX + 0xa0);
    uVar2 = *(undefined4 *)(unaff_RBX + 0xa4);
    uVar3 = *(undefined4 *)(unaff_RBX + 0xa8);
    uVar13 = *(undefined4 *)(unaff_RBX + 0xac);
    *(undefined4 *)(unaff_RBP + -0x49) = uVar1;
    *(undefined4 *)(unaff_RBP + -0x45) = uVar2;
    *(undefined4 *)(unaff_RBP + -0x41) = uVar3;
    *(undefined4 *)(unaff_RBP + -0x3d) = uVar13;
    *(float *)(unaff_RBP + -0x79) = fVar16;
    *(float *)(unaff_RBP + -0x75) = fVar18;
    *(float *)(unaff_RBP + -0x71) = fVar19;
    *(undefined4 *)(unaff_RBP + -0x6d) = uVar14;
    FUN_1803a5440(uVar1,&stack0x00000020,unaff_RBX + 0xa0,0);
    fVar15 = fStackX_24 * fStackX_24 + in_stack_00000020 * in_stack_00000020 +
             fStack0000000000000028 * fStack0000000000000028;
    auVar17 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
    fVar20 = auVar17._0_4_;
    fVar15 = fVar20 * 0.5 * (3.0 - fVar15 * fVar20 * fVar20);
    in_stack_00000020 = in_stack_00000020 * fVar15;
    fVar22 = fStackX_24 * fVar15;
    fStack0000000000000028 = fStack0000000000000028 * fVar15;
    *(float *)(unaff_RBP + -0x59) = in_stack_00000020;
    *(float *)(unaff_RBP + -0x55) = fVar22;
    *(float *)(unaff_RBP + -0x51) = fStack0000000000000028;
    *(undefined4 *)(unaff_RBP + -0x4d) = uStack000000000000002c;
    fVar20 = fVar22 * fVar19 - fStack0000000000000028 * fVar18;
    fVar21 = fVar18 * in_stack_00000020 - fVar16 * fVar22;
    fVar23 = fStack0000000000000028 * fVar16 - in_stack_00000020 * fVar19;
    fVar16 = fVar23 * fVar23 + fVar20 * fVar20 + fVar21 * fVar21;
    auVar17 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
    fVar18 = auVar17._0_4_;
    fVar16 = fVar18 * 0.5 * (3.0 - fVar16 * fVar18 * fVar18);
    fVar23 = fVar23 * fVar16;
    fVar21 = fVar21 * fVar16;
    fVar20 = fVar20 * fVar16;
    fVar15 = fVar23 * fStack0000000000000028 - fVar21 * fVar22;
    *(float *)(unaff_RBP + -0x69) = fVar20;
    *(float *)(unaff_RBP + -0x65) = fVar23;
    *(float *)(unaff_RBP + -0x61) = fVar21;
    fVar24 = fVar21 * in_stack_00000020 - fVar20 * fStack0000000000000028;
    fVar19 = fVar20 * fVar22 - fVar23 * in_stack_00000020;
    fVar16 = fVar24 * fVar24 + fVar15 * fVar15 + fVar19 * fVar19;
    auVar17 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
    fVar18 = auVar17._0_4_;
    fVar16 = fVar16 * fVar18 * fVar18;
    fVar18 = fVar18 * 0.5 * (3.0 - fVar16);
    uVar14 = 0x3f7ae7d6;
    fVar24 = fVar24 * fVar18;
    fVar15 = fVar15 * fVar18;
    *(float *)(unaff_RBP + -0x75) = fVar24;
    *(float *)(unaff_RBP + -0x79) = fVar15;
    fVar19 = fVar19 * fVar18;
    *(float *)(unaff_RBP + -0x71) = fVar19;
    fVar18 = fVar24 * fVar24 + fVar15 * fVar15 + fVar19 * fVar19;
    if ((((fVar18 <= 0.98010004) || (1.0201 <= fVar18)) ||
        (fVar18 = fVar20 * fVar20 + fVar23 * fVar23 + fVar21 * fVar21, fVar18 <= 0.98010004)) ||
       (((1.0201 <= fVar18 ||
         (fVar18 = in_stack_00000020 * in_stack_00000020 + fVar22 * fVar22 +
                   fStack0000000000000028 * fStack0000000000000028, fVar18 <= 0.98010004)) ||
        (1.0201 <= fVar18)))) {
      uVar14 = 0;
      *(undefined8 *)(unaff_RBP + -0x79) = 0x3f800000;
      *(undefined8 *)(unaff_RBP + -0x71) = 0;
      *(undefined4 *)(unaff_RBP + -0x59) = 0;
      *(undefined4 *)(unaff_RBP + -0x55) = 0;
      *(undefined4 *)(unaff_RBP + -0x51) = 0x3f800000;
      *(undefined4 *)(unaff_RBP + -0x4d) = 0;
      *(undefined4 *)(unaff_RBP + -0x69) = 0;
      *(undefined4 *)(unaff_RBP + -0x65) = 0x3f800000;
      *(undefined4 *)(unaff_RBP + -0x61) = 0;
      *(undefined4 *)(unaff_RBP + -0x5d) = 0;
    }
    FUN_1802f5bc0(unaff_RBP + -0x79,uVar14,auVar17._0_8_,fVar16,in_stack_00000020);
    pfVar8 = (float *)FUN_180085020(unaff_RBX + 0x70,&stack0x00000020);
    fVar16 = *pfVar8;
    *(float *)(unaff_RBP + -0x79) = *(float *)(unaff_RBP + -0x79) * fVar16;
    fVar18 = pfVar8[1];
    *(float *)(unaff_RBP + -0x75) = *(float *)(unaff_RBP + -0x75) * fVar16;
    *(float *)(unaff_RBP + -0x71) = *(float *)(unaff_RBP + -0x71) * fVar16;
    *(float *)(unaff_RBP + -0x69) = *(float *)(unaff_RBP + -0x69) * fVar18;
    *(float *)(unaff_RBP + -0x65) = *(float *)(unaff_RBP + -0x65) * fVar18;
    fVar16 = pfVar8[2];
    *(float *)(unaff_RBP + -0x61) = *(float *)(unaff_RBP + -0x61) * fVar18;
    *(float *)(unaff_RBP + -0x59) = *(float *)(unaff_RBP + -0x59) * fVar16;
    fVar18 = *(float *)(unaff_RBP + -0x51) * fVar16;
    *(float *)(unaff_RBP + -0x51) = fVar18;
    *(float *)(unaff_RBP + -0x55) = *(float *)(unaff_RBP + -0x55) * fVar16;
    FUN_1802ea790(fVar18,unaff_RBP + -0x79);
    bVar12 = true;
  }
  uVar9 = 0;
  uVar11 = uVar9;
  if (*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3 != 0) {
    do {
      FUN_1802f09d0(*(undefined8 *)(uVar9 + *(longlong *)(unaff_RBX + 0x1c0)));
      uVar9 = uVar9 + 8;
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while ((ulonglong)(longlong)(int)uVar10 <
             (ulonglong)(*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3));
  }
  return bVar12;
}



undefined1 FUN_1802f0a12(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint in_EAX;
  float *pfVar8;
  longlong in_RCX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong in_R11;
  undefined1 unaff_R14B;
  undefined8 unaff_R15;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float in_stack_00000020;
  float fStackX_24;
  float fStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  *(undefined8 *)(in_R11 + 0x18) = unaff_R15;
  if ((in_EAX >> 0x10 & 1) != 0) {
    uVar12 = FUN_1803a56a0(param_1,in_RCX + 0xa0,0);
    uVar4 = *(undefined8 *)(unaff_RBX + 0x88);
    uVar5 = *(undefined8 *)(unaff_RBX + 0x70);
    uVar6 = *(undefined8 *)(unaff_RBX + 0x78);
    *(undefined8 *)(unaff_RBP + -0x69) = *(undefined8 *)(unaff_RBX + 0x80);
    *(undefined8 *)(unaff_RBP + -0x61) = uVar4;
    uVar4 = *(undefined8 *)(unaff_RBX + 0xa0);
    uVar7 = *(undefined8 *)(unaff_RBX + 0xa8);
    *(undefined8 *)(unaff_RBP + -0x79) = uVar5;
    *(undefined8 *)(unaff_RBP + -0x71) = uVar6;
    uVar13 = *(undefined4 *)(unaff_RBX + 0x90);
    uVar1 = *(undefined4 *)(unaff_RBX + 0x94);
    uVar2 = *(undefined4 *)(unaff_RBX + 0x98);
    uVar3 = *(undefined4 *)(unaff_RBX + 0x9c);
    *(undefined8 *)(unaff_RBP + -0x49) = uVar4;
    *(undefined8 *)(unaff_RBP + -0x41) = uVar7;
    *(undefined4 *)(unaff_RBP + -0x41) = uVar12;
    *(undefined4 *)(unaff_RBP + -0x59) = uVar13;
    *(undefined4 *)(unaff_RBP + -0x55) = uVar1;
    *(undefined4 *)(unaff_RBP + -0x51) = uVar2;
    *(undefined4 *)(unaff_RBP + -0x4d) = uVar3;
    FUN_1802ea790(uVar12,unaff_RBP + -0x79);
    in_EAX = *(uint *)(unaff_RBX + 0x2ac);
    unaff_R14B = 1;
  }
  if ((int)in_EAX < 0) {
    uVar4 = *(undefined8 *)(unaff_RBX + 0x88);
    fVar15 = *(float *)(unaff_RBX + 0x70);
    fVar17 = *(float *)(unaff_RBX + 0x74);
    fVar18 = *(float *)(unaff_RBX + 0x78);
    uVar13 = *(undefined4 *)(unaff_RBX + 0x7c);
    *(undefined8 *)(unaff_RBP + -0x69) = *(undefined8 *)(unaff_RBX + 0x80);
    *(undefined8 *)(unaff_RBP + -0x61) = uVar4;
    uVar1 = *(undefined4 *)(unaff_RBX + 0xa0);
    uVar2 = *(undefined4 *)(unaff_RBX + 0xa4);
    uVar3 = *(undefined4 *)(unaff_RBX + 0xa8);
    uVar12 = *(undefined4 *)(unaff_RBX + 0xac);
    *(undefined4 *)(unaff_RBP + -0x49) = uVar1;
    *(undefined4 *)(unaff_RBP + -0x45) = uVar2;
    *(undefined4 *)(unaff_RBP + -0x41) = uVar3;
    *(undefined4 *)(unaff_RBP + -0x3d) = uVar12;
    *(float *)(unaff_RBP + -0x79) = fVar15;
    *(float *)(unaff_RBP + -0x75) = fVar17;
    *(float *)(unaff_RBP + -0x71) = fVar18;
    *(undefined4 *)(unaff_RBP + -0x6d) = uVar13;
    FUN_1803a5440(uVar1,&stack0x00000020,unaff_RBX + 0xa0,0);
    fVar14 = fStackX_24 * fStackX_24 + in_stack_00000020 * in_stack_00000020 +
             fStack0000000000000028 * fStack0000000000000028;
    auVar16 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
    fVar19 = auVar16._0_4_;
    fVar14 = fVar19 * 0.5 * (3.0 - fVar14 * fVar19 * fVar19);
    in_stack_00000020 = in_stack_00000020 * fVar14;
    fVar21 = fStackX_24 * fVar14;
    fStack0000000000000028 = fStack0000000000000028 * fVar14;
    *(float *)(unaff_RBP + -0x59) = in_stack_00000020;
    *(float *)(unaff_RBP + -0x55) = fVar21;
    *(float *)(unaff_RBP + -0x51) = fStack0000000000000028;
    *(undefined4 *)(unaff_RBP + -0x4d) = uStack000000000000002c;
    fVar19 = fVar21 * fVar18 - fStack0000000000000028 * fVar17;
    fVar20 = fVar17 * in_stack_00000020 - fVar15 * fVar21;
    fVar22 = fStack0000000000000028 * fVar15 - in_stack_00000020 * fVar18;
    fVar15 = fVar22 * fVar22 + fVar19 * fVar19 + fVar20 * fVar20;
    auVar16 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
    fVar17 = auVar16._0_4_;
    fVar15 = fVar17 * 0.5 * (3.0 - fVar15 * fVar17 * fVar17);
    fVar22 = fVar22 * fVar15;
    fVar20 = fVar20 * fVar15;
    fVar19 = fVar19 * fVar15;
    fVar14 = fVar22 * fStack0000000000000028 - fVar20 * fVar21;
    *(float *)(unaff_RBP + -0x69) = fVar19;
    *(float *)(unaff_RBP + -0x65) = fVar22;
    *(float *)(unaff_RBP + -0x61) = fVar20;
    fVar23 = fVar20 * in_stack_00000020 - fVar19 * fStack0000000000000028;
    fVar18 = fVar19 * fVar21 - fVar22 * in_stack_00000020;
    fVar15 = fVar23 * fVar23 + fVar14 * fVar14 + fVar18 * fVar18;
    auVar16 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
    fVar17 = auVar16._0_4_;
    fVar15 = fVar15 * fVar17 * fVar17;
    fVar17 = fVar17 * 0.5 * (3.0 - fVar15);
    uVar13 = 0x3f7ae7d6;
    fVar23 = fVar23 * fVar17;
    fVar14 = fVar14 * fVar17;
    *(float *)(unaff_RBP + -0x75) = fVar23;
    *(float *)(unaff_RBP + -0x79) = fVar14;
    fVar18 = fVar18 * fVar17;
    *(float *)(unaff_RBP + -0x71) = fVar18;
    fVar17 = fVar23 * fVar23 + fVar14 * fVar14 + fVar18 * fVar18;
    if ((((fVar17 <= 0.98010004) || (1.0201 <= fVar17)) ||
        (fVar17 = fVar19 * fVar19 + fVar22 * fVar22 + fVar20 * fVar20, fVar17 <= 0.98010004)) ||
       (((1.0201 <= fVar17 ||
         (fVar17 = in_stack_00000020 * in_stack_00000020 + fVar21 * fVar21 +
                   fStack0000000000000028 * fStack0000000000000028, fVar17 <= 0.98010004)) ||
        (1.0201 <= fVar17)))) {
      uVar13 = 0;
      *(undefined8 *)(unaff_RBP + -0x79) = 0x3f800000;
      *(undefined8 *)(unaff_RBP + -0x71) = 0;
      *(undefined4 *)(unaff_RBP + -0x59) = 0;
      *(undefined4 *)(unaff_RBP + -0x55) = 0;
      *(undefined4 *)(unaff_RBP + -0x51) = 0x3f800000;
      *(undefined4 *)(unaff_RBP + -0x4d) = 0;
      *(undefined4 *)(unaff_RBP + -0x69) = 0;
      *(undefined4 *)(unaff_RBP + -0x65) = 0x3f800000;
      *(undefined4 *)(unaff_RBP + -0x61) = 0;
      *(undefined4 *)(unaff_RBP + -0x5d) = 0;
    }
    FUN_1802f5bc0(unaff_RBP + -0x79,uVar13,auVar16._0_8_,fVar15,in_stack_00000020);
    pfVar8 = (float *)FUN_180085020(unaff_RBX + 0x70,&stack0x00000020);
    fVar15 = *pfVar8;
    *(float *)(unaff_RBP + -0x79) = *(float *)(unaff_RBP + -0x79) * fVar15;
    fVar17 = pfVar8[1];
    *(float *)(unaff_RBP + -0x75) = *(float *)(unaff_RBP + -0x75) * fVar15;
    *(float *)(unaff_RBP + -0x71) = *(float *)(unaff_RBP + -0x71) * fVar15;
    *(float *)(unaff_RBP + -0x69) = *(float *)(unaff_RBP + -0x69) * fVar17;
    *(float *)(unaff_RBP + -0x65) = *(float *)(unaff_RBP + -0x65) * fVar17;
    fVar15 = pfVar8[2];
    *(float *)(unaff_RBP + -0x61) = *(float *)(unaff_RBP + -0x61) * fVar17;
    *(float *)(unaff_RBP + -0x59) = *(float *)(unaff_RBP + -0x59) * fVar15;
    fVar17 = *(float *)(unaff_RBP + -0x51) * fVar15;
    *(float *)(unaff_RBP + -0x51) = fVar17;
    *(float *)(unaff_RBP + -0x55) = *(float *)(unaff_RBP + -0x55) * fVar15;
    FUN_1802ea790(fVar17,unaff_RBP + -0x79);
    unaff_R14B = 1;
  }
  uVar9 = 0;
  uVar11 = uVar9;
  if (*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3 != 0) {
    do {
      FUN_1802f09d0(*(undefined8 *)(uVar9 + *(longlong *)(unaff_RBX + 0x1c0)));
      uVar9 = uVar9 + 8;
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while ((ulonglong)(longlong)(int)uVar10 <
             (ulonglong)(*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3));
  }
  return unaff_R14B;
}



undefined8 FUN_1802f0a8a(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float in_stack_00000020;
  float fStackX_24;
  float fStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  fVar11 = *(float *)(unaff_RBX + 0x70);
  fVar13 = *(float *)(unaff_RBX + 0x74);
  fVar14 = *(float *)(unaff_RBX + 0x78);
  uVar9 = *(undefined4 *)(unaff_RBX + 0x7c);
  *(int *)(unaff_RBP + -0x69) = (int)param_1;
  *(int *)(unaff_RBP + -0x65) = (int)((ulonglong)param_1 >> 0x20);
  *(undefined4 *)(unaff_RBP + -0x61) = in_XMM0_Dc;
  *(undefined4 *)(unaff_RBP + -0x5d) = in_XMM0_Dd;
  uVar1 = *(undefined4 *)(unaff_RBX + 0xa0);
  uVar2 = *(undefined4 *)(unaff_RBX + 0xa4);
  uVar3 = *(undefined4 *)(unaff_RBX + 0xa8);
  uVar4 = *(undefined4 *)(unaff_RBX + 0xac);
  *(undefined4 *)(unaff_RBP + -0x49) = uVar1;
  *(undefined4 *)(unaff_RBP + -0x45) = uVar2;
  *(undefined4 *)(unaff_RBP + -0x41) = uVar3;
  *(undefined4 *)(unaff_RBP + -0x3d) = uVar4;
  *(float *)(unaff_RBP + -0x79) = fVar11;
  *(float *)(unaff_RBP + -0x75) = fVar13;
  *(float *)(unaff_RBP + -0x71) = fVar14;
  *(undefined4 *)(unaff_RBP + -0x6d) = uVar9;
  FUN_1803a5440(uVar1,&stack0x00000020);
  fVar10 = fStackX_24 * fStackX_24 + in_stack_00000020 * in_stack_00000020 +
           fStack0000000000000028 * fStack0000000000000028;
  auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
  fVar15 = auVar12._0_4_;
  fVar10 = fVar15 * 0.5 * (3.0 - fVar10 * fVar15 * fVar15);
  in_stack_00000020 = in_stack_00000020 * fVar10;
  fVar17 = fStackX_24 * fVar10;
  fStack0000000000000028 = fStack0000000000000028 * fVar10;
  *(float *)(unaff_RBP + -0x59) = in_stack_00000020;
  *(float *)(unaff_RBP + -0x55) = fVar17;
  *(float *)(unaff_RBP + -0x51) = fStack0000000000000028;
  *(undefined4 *)(unaff_RBP + -0x4d) = uStack000000000000002c;
  fVar15 = fVar17 * fVar14 - fStack0000000000000028 * fVar13;
  fVar16 = fVar13 * in_stack_00000020 - fVar11 * fVar17;
  fVar18 = fStack0000000000000028 * fVar11 - in_stack_00000020 * fVar14;
  fVar11 = fVar18 * fVar18 + fVar15 * fVar15 + fVar16 * fVar16;
  auVar12 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
  fVar13 = auVar12._0_4_;
  fVar11 = fVar13 * 0.5 * (3.0 - fVar11 * fVar13 * fVar13);
  fVar18 = fVar18 * fVar11;
  fVar16 = fVar16 * fVar11;
  fVar15 = fVar15 * fVar11;
  fVar10 = fVar18 * fStack0000000000000028 - fVar16 * fVar17;
  *(float *)(unaff_RBP + -0x69) = fVar15;
  *(float *)(unaff_RBP + -0x65) = fVar18;
  *(float *)(unaff_RBP + -0x61) = fVar16;
  fVar19 = fVar16 * in_stack_00000020 - fVar15 * fStack0000000000000028;
  fVar14 = fVar15 * fVar17 - fVar18 * in_stack_00000020;
  fVar11 = fVar19 * fVar19 + fVar10 * fVar10 + fVar14 * fVar14;
  auVar12 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
  fVar13 = auVar12._0_4_;
  fVar11 = fVar11 * fVar13 * fVar13;
  fVar13 = fVar13 * 0.5 * (3.0 - fVar11);
  uVar9 = 0x3f7ae7d6;
  fVar19 = fVar19 * fVar13;
  fVar10 = fVar10 * fVar13;
  *(float *)(unaff_RBP + -0x75) = fVar19;
  *(float *)(unaff_RBP + -0x79) = fVar10;
  fVar14 = fVar14 * fVar13;
  *(float *)(unaff_RBP + -0x71) = fVar14;
  fVar13 = fVar19 * fVar19 + fVar10 * fVar10 + fVar14 * fVar14;
  if ((((fVar13 <= 0.98010004) || (1.0201 <= fVar13)) ||
      (fVar13 = fVar15 * fVar15 + fVar18 * fVar18 + fVar16 * fVar16, fVar13 <= 0.98010004)) ||
     (((1.0201 <= fVar13 ||
       (fVar13 = in_stack_00000020 * in_stack_00000020 + fVar17 * fVar17 +
                 fStack0000000000000028 * fStack0000000000000028, fVar13 <= 0.98010004)) ||
      (1.0201 <= fVar13)))) {
    uVar9 = 0;
    *(undefined8 *)(unaff_RBP + -0x79) = 0x3f800000;
    *(undefined8 *)(unaff_RBP + -0x71) = 0;
    *(undefined4 *)(unaff_RBP + -0x59) = 0;
    *(undefined4 *)(unaff_RBP + -0x55) = 0;
    *(undefined4 *)(unaff_RBP + -0x51) = 0x3f800000;
    *(undefined4 *)(unaff_RBP + -0x4d) = 0;
    *(undefined4 *)(unaff_RBP + -0x69) = 0;
    *(undefined4 *)(unaff_RBP + -0x65) = 0x3f800000;
    *(undefined4 *)(unaff_RBP + -0x61) = 0;
    *(undefined4 *)(unaff_RBP + -0x5d) = 0;
  }
  FUN_1802f5bc0(unaff_RBP + -0x79,uVar9,auVar12._0_8_,fVar11,in_stack_00000020);
  pfVar5 = (float *)FUN_180085020(unaff_RBX + 0x70,&stack0x00000020);
  fVar11 = *pfVar5;
  *(float *)(unaff_RBP + -0x79) = *(float *)(unaff_RBP + -0x79) * fVar11;
  fVar13 = pfVar5[1];
  *(float *)(unaff_RBP + -0x75) = *(float *)(unaff_RBP + -0x75) * fVar11;
  *(float *)(unaff_RBP + -0x71) = *(float *)(unaff_RBP + -0x71) * fVar11;
  *(float *)(unaff_RBP + -0x69) = *(float *)(unaff_RBP + -0x69) * fVar13;
  *(float *)(unaff_RBP + -0x65) = *(float *)(unaff_RBP + -0x65) * fVar13;
  fVar11 = pfVar5[2];
  *(float *)(unaff_RBP + -0x61) = *(float *)(unaff_RBP + -0x61) * fVar13;
  *(float *)(unaff_RBP + -0x59) = *(float *)(unaff_RBP + -0x59) * fVar11;
  fVar13 = *(float *)(unaff_RBP + -0x51) * fVar11;
  *(float *)(unaff_RBP + -0x51) = fVar13;
  *(float *)(unaff_RBP + -0x55) = *(float *)(unaff_RBP + -0x55) * fVar11;
  FUN_1802ea790(fVar13,unaff_RBP + -0x79);
  uVar6 = 0;
  uVar8 = uVar6;
  if (*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3 != 0) {
    do {
      FUN_1802f09d0(*(undefined8 *)(uVar6 + *(longlong *)(unaff_RBX + 0x1c0)));
      uVar6 = uVar6 + 8;
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3));
  }
  return 1;
}



undefined8 FUN_1802f0d27(undefined8 param_1,float param_2)

{
  float *pfVar1;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  float fVar5;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float fVar6;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  undefined1 auStackX_20 [8];
  
  if ((((1.0201 <= unaff_XMM13_Da) ||
       (fVar6 = unaff_XMM8_Da * unaff_XMM8_Da + unaff_XMM12_Da * unaff_XMM12_Da +
                unaff_XMM9_Da * unaff_XMM9_Da, fVar6 <= param_2)) || (1.0201 <= fVar6)) ||
     ((fVar6 = unaff_XMM7_Da * unaff_XMM7_Da + unaff_XMM11_Da * unaff_XMM11_Da +
               unaff_XMM10_Da * unaff_XMM10_Da, fVar6 <= param_2 || (1.0201 <= fVar6)))) {
    *(undefined8 *)(unaff_RBP + -0x79) = 0x3f800000;
    *(undefined8 *)(unaff_RBP + -0x71) = 0;
    *(undefined4 *)(unaff_RBP + -0x59) = 0;
    *(undefined4 *)(unaff_RBP + -0x55) = 0;
    *(undefined4 *)(unaff_RBP + -0x51) = 0x3f800000;
    *(undefined4 *)(unaff_RBP + -0x4d) = 0;
    *(undefined4 *)(unaff_RBP + -0x69) = 0;
    *(undefined4 *)(unaff_RBP + -0x65) = 0x3f800000;
    *(undefined4 *)(unaff_RBP + -0x61) = 0;
    *(undefined4 *)(unaff_RBP + -0x5d) = 0;
  }
  FUN_1802f5bc0(unaff_RBP + -0x79);
  pfVar1 = (float *)FUN_180085020(unaff_RBX + 0x70,auStackX_20);
  fVar6 = *pfVar1;
  *(float *)(unaff_RBP + -0x79) = *(float *)(unaff_RBP + -0x79) * fVar6;
  fVar5 = pfVar1[1];
  *(float *)(unaff_RBP + -0x75) = *(float *)(unaff_RBP + -0x75) * fVar6;
  *(float *)(unaff_RBP + -0x71) = *(float *)(unaff_RBP + -0x71) * fVar6;
  *(float *)(unaff_RBP + -0x69) = *(float *)(unaff_RBP + -0x69) * fVar5;
  *(float *)(unaff_RBP + -0x65) = *(float *)(unaff_RBP + -0x65) * fVar5;
  fVar6 = pfVar1[2];
  *(float *)(unaff_RBP + -0x61) = *(float *)(unaff_RBP + -0x61) * fVar5;
  *(float *)(unaff_RBP + -0x59) = *(float *)(unaff_RBP + -0x59) * fVar6;
  fVar5 = *(float *)(unaff_RBP + -0x51) * fVar6;
  *(float *)(unaff_RBP + -0x51) = fVar5;
  *(float *)(unaff_RBP + -0x55) = *(float *)(unaff_RBP + -0x55) * fVar6;
  FUN_1802ea790(fVar5,unaff_RBP + -0x79);
  uVar2 = 0;
  uVar4 = uVar2;
  if (*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3 != 0) {
    do {
      FUN_1802f09d0(*(undefined8 *)(uVar2 + *(longlong *)(unaff_RBX + 0x1c0)));
      uVar2 = uVar2 + 8;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)(*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3));
  }
  return 1;
}



undefined1 FUN_1802f0e8a(void)

{
  longlong unaff_RBX;
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 unaff_R14B;
  
  uVar1 = 0;
  uVar3 = uVar1;
  if (*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3 != 0) {
    do {
      FUN_1802f09d0(*(undefined8 *)(uVar1 + *(longlong *)(unaff_RBX + 0x1c0)));
      uVar1 = uVar1 + 8;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while ((ulonglong)(longlong)(int)uVar2 <
             (ulonglong)(*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3));
  }
  return unaff_R14B;
}



undefined1 FUN_1802f0eab(void)

{
  longlong unaff_RBX;
  ulonglong uVar1;
  uint unaff_EDI;
  undefined1 unaff_R14B;
  
  uVar1 = (ulonglong)unaff_EDI;
  do {
    FUN_1802f09d0(*(undefined8 *)(uVar1 + *(longlong *)(unaff_RBX + 0x1c0)));
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((ulonglong)(longlong)(int)unaff_EDI <
           (ulonglong)(*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3));
  return unaff_R14B;
}



undefined1 FUN_1802f0eff(void)

{
  return 0;
}






