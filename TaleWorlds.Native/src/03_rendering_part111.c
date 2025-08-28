#include "TaleWorlds.Native.Split.h"

// 03_rendering_part111.c - 8 个函数

// 函数: void FUN_180334b80(longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5,
void FUN_180334b80(longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5,
                  uint param_6)

{
  float *pfVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_198 [32];
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  longlong lStack_138;
  longlong lStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float afStack_108 [8];
  ulonglong uStack_e8;
  
  uStack_e8 = _DAT_180bf00a8 ^ (ulonglong)auStack_198;
  uVar10 = 0;
  lVar11 = *(longlong *)(param_3 + 0x70) - *(longlong *)(param_3 + 0x68);
  iVar5 = (int)(lVar11 >> 0x3f);
  iVar4 = (int)(lVar11 / 0xb0) + iVar5;
  lStack_138 = param_1;
  lStack_130 = param_3;
  if (iVar4 != iVar5) {
    uVar12 = 0;
    lVar11 = 0;
    do {
      lVar2 = *(longlong *)(param_3 + 0x68);
      if ((((byte)(*(uint *)(lVar11 + lVar2) >> 2) | (byte)(param_5 >> 2)) & (byte)(~param_6 >> 2) &
          1) == 0) {
        pfVar1 = (float *)(lVar11 + 0x10 + lVar2);
        fVar19 = *pfVar1;
        fVar16 = pfVar1[1];
        fVar18 = pfVar1[2];
        fVar23 = pfVar1[3];
        pfVar1 = (float *)(lVar11 + 0x20 + lVar2);
        fVar24 = *pfVar1;
        fVar17 = pfVar1[1];
        fVar26 = pfVar1[2];
        fVar20 = pfVar1[3];
        fStack_158 = fVar19;
        fStack_154 = fVar16;
        fStack_150 = fVar18;
        fStack_14c = fVar23;
        fStack_148 = fVar24;
        fStack_144 = fVar17;
        fStack_140 = fVar26;
        fStack_13c = fVar20;
        if (param_4 != 0) {
          lVar2 = *(longlong *)(param_4 + 0x68);
          lVar8 = *(longlong *)(param_4 + 0x70) - lVar2;
          if (uVar12 < (ulonglong)(lVar8 / 0xb0)) {
            fVar26 = 1.0 - (*(float *)(param_1 + 0x13c) - *(float *)(param_1 + 0x144)) /
                           *(float *)(param_1 + 0x13c);
            if (0.001 <= fVar26) {
              if (fVar26 <= 0.999) {
                pfVar1 = (float *)(lVar2 + 0x10 + lVar11);
                fVar24 = pfVar1[2] * fVar18;
                fVar17 = pfVar1[3] * fVar23;
                afStack_108[4] = -1.0;
                afStack_108[5] = -1.0;
                afStack_108[6] = -1.0;
                afStack_108[7] = -1.0;
                auVar22._0_4_ = fVar24 + *pfVar1 * fVar19;
                auVar22._4_4_ = fVar17 + pfVar1[1] * fVar16;
                auVar22._8_4_ = fVar24 + fVar24;
                auVar22._12_4_ = fVar17 + fVar17;
                auVar21._4_12_ = auVar22._4_12_;
                auVar21._0_4_ = auVar22._0_4_ + auVar22._4_4_;
                afStack_108[0] = 1.0;
                afStack_108[1] = 1.0;
                afStack_108[2] = 1.0;
                afStack_108[3] = 1.0;
                uVar6 = movmskps((uint)((ulonglong)lVar8 >> 0x3f),auVar21);
                uVar7 = (ulonglong)(uVar6 & 1);
                fVar24 = afStack_108[uVar7 * 4];
                fVar17 = afStack_108[uVar7 * 4 + 1];
                fVar20 = afStack_108[uVar7 * 4 + 2];
                fVar25 = afStack_108[uVar7 * 4 + 3];
                pfVar1 = (float *)(lVar2 + 0x10 + lVar11);
                fVar27 = *pfVar1;
                fVar28 = pfVar1[1];
                fVar29 = pfVar1[2];
                fVar30 = pfVar1[3];
                if (0.9995 < ABS(auVar21._0_4_)) {
                  fVar13 = 1.0 - fVar26;
                  fVar27 = fVar19 * fVar13 + fVar26 * fVar24 * fVar27;
                  fVar28 = fVar16 * fVar13 + fVar26 * fVar17 * fVar28;
                  fVar29 = fVar18 * fVar13 + fVar26 * fVar20 * fVar29;
                  fVar30 = fVar23 * fVar13 + fVar26 * fVar25 * fVar30;
                  fVar16 = fVar30 * fVar30 + fVar27 * fVar27;
                  fVar18 = fVar29 * fVar29 + fVar28 * fVar28;
                  fVar20 = fVar16 + fVar28 * fVar28 + fVar29 * fVar29;
                  fVar25 = fVar18 + fVar27 * fVar27 + fVar30 * fVar30;
                  auVar3._4_4_ = fVar16 + fVar18 + 1.1754944e-38;
                  auVar3._0_4_ = fVar18 + fVar16 + 1.1754944e-38;
                  auVar3._8_4_ = fVar20 + 1.1754944e-38;
                  auVar3._12_4_ = fVar25 + 1.1754944e-38;
                  auVar22 = rsqrtps(auVar21,auVar3);
                  fVar19 = auVar22._0_4_;
                  fVar23 = auVar22._4_4_;
                  fVar24 = auVar22._8_4_;
                  fVar17 = auVar22._12_4_;
                  fVar19 = fVar27 * (3.0 - fVar19 * fVar19 * (fVar18 + fVar16)) * fVar19 * 0.5;
                  fVar16 = fVar28 * (3.0 - fVar23 * fVar23 * (fVar16 + fVar18)) * fVar23 * 0.5;
                  fVar18 = fVar29 * (3.0 - fVar24 * fVar24 * fVar20) * fVar24 * 0.5;
                  fVar23 = fVar30 * (3.0 - fVar17 * fVar17 * fVar25) * fVar17 * 0.5;
                }
                else {
                  fVar13 = (float)acosf();
                  fVar14 = (float)sinf();
                  fVar15 = (float)sinf(fVar13 - fVar13 * fVar26);
                  fVar15 = fVar15 * (1.0 / fVar14);
                  fVar13 = (float)sinf(fVar13 * fVar26);
                  fVar13 = fVar13 * (1.0 / fVar14);
                  fVar19 = fVar15 * fVar19 + fVar13 * fVar24 * fVar27;
                  fVar16 = fVar15 * fVar16 + fVar13 * fVar17 * fVar28;
                  fVar18 = fVar15 * fVar18 + fVar13 * fVar20 * fVar29;
                  fVar23 = fVar15 * fVar23 + fVar13 * fVar25 * fVar30;
                }
              }
              else {
                pfVar1 = (float *)(lVar2 + 0x10 + lVar11);
                fVar19 = *pfVar1;
                fVar16 = pfVar1[1];
                fVar18 = pfVar1[2];
                fVar23 = pfVar1[3];
              }
            }
            fVar20 = 1.0 - fVar26;
            fVar24 = fVar26 * *(float *)(lVar11 + 0x20 + lVar2) + fStack_148 * fVar20;
            fVar17 = fVar26 * *(float *)(lVar11 + 0x24 + lVar2) + fStack_144 * fVar20;
            fVar26 = fVar26 * *(float *)(lVar11 + 0x28 + lVar2) + fStack_140 * fVar20;
            fVar20 = 3.4028235e+38;
            uStack_15c = 0x7f7fffff;
            fStack_178 = fVar19;
            fStack_174 = fVar16;
            fStack_170 = fVar18;
            fStack_16c = fVar23;
            fStack_168 = fVar24;
            fStack_164 = fVar17;
            fStack_160 = fVar26;
          }
        }
        puVar9 = (uint *)((longlong)(char)uVar10 * 0x100 + *(longlong *)(param_2 + 0x18));
        do {
          LOCK();
          uVar6 = *puVar9;
          *puVar9 = *puVar9 | 1;
          UNLOCK();
        } while ((uVar6 & 1) != 0);
        puVar9[1] = (uint)fVar19;
        puVar9[2] = (uint)fVar16;
        puVar9[3] = (uint)fVar18;
        puVar9[4] = (uint)fVar23;
        puVar9[5] = (uint)fVar24;
        puVar9[6] = (uint)fVar17;
        puVar9[7] = (uint)fVar26;
        puVar9[8] = (uint)fVar20;
        *puVar9 = 0;
        fStack_128 = fVar19;
        fStack_124 = fVar16;
        fStack_120 = fVar18;
        fStack_11c = fVar23;
        fStack_118 = fVar24;
        fStack_114 = fVar17;
        fStack_110 = fVar26;
        fStack_10c = fVar20;
        FUN_1802feba0(param_2,(longlong)(ulonglong)(uint)((int)puVar9 - *(int *)(param_2 + 0x18)) >>
                              8);
        param_1 = lStack_138;
        param_3 = lStack_130;
      }
      uVar10 = uVar10 + 1;
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 0xb0;
    } while (uVar10 < (uint)(iVar4 - iVar5));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_e8 ^ (ulonglong)auStack_198);
}





// 函数: void FUN_180334bf1(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4)
void FUN_180334bf1(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  longlong lVar10;
  longlong unaff_RBP;
  uint unaff_ESI;
  ulonglong uVar11;
  longlong in_R11;
  uint unaff_R12D;
  longlong unaff_R13;
  ulonglong uVar12;
  longlong unaff_R15;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
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
  longlong in_stack_00000060;
  longlong in_stack_00000068;
  
  uVar11 = (ulonglong)~param_4;
  uVar12 = 0;
  lVar10 = 0;
  *(uint *)(unaff_RBP + 200) = ~param_4;
  do {
    lVar2 = *(longlong *)(in_R11 + 0x68);
    if ((((byte)(*(uint *)(lVar10 + lVar2) >> 2) | (byte)(*(uint *)(unaff_RBP + 0xc0) >> 2)) &
         (byte)(uVar11 >> 2) & 1) == 0) {
      pfVar1 = (float *)(lVar10 + 0x10 + lVar2);
      fVar30 = *pfVar1;
      fVar31 = pfVar1[1];
      fVar32 = pfVar1[2];
      fVar33 = pfVar1[3];
      pfVar1 = (float *)(lVar10 + 0x20 + lVar2);
      fVar25 = *pfVar1;
      fVar18 = pfVar1[1];
      fVar29 = pfVar1[2];
      fVar28 = pfVar1[3];
      if (unaff_R13 != 0) {
        lVar2 = *(longlong *)(unaff_R13 + 0x68);
        lVar8 = *(longlong *)(unaff_R13 + 0x70) - lVar2;
        if (uVar12 < (ulonglong)(lVar8 / 0xb0)) {
          fVar28 = 1.0 - (*(float *)(param_3 + 0x13c) - *(float *)(param_3 + 0x144)) /
                         *(float *)(param_3 + 0x13c);
          if (0.001 <= fVar28) {
            if (fVar28 <= 0.999) {
              pfVar1 = (float *)(lVar2 + 0x10 + lVar10);
              fVar20 = *pfVar1;
              fVar19 = pfVar1[1];
              fVar16 = pfVar1[2] * fVar32;
              fVar17 = pfVar1[3] * fVar33;
              *(undefined4 *)(unaff_RBP + -0x60) = 0xbf800000;
              *(undefined4 *)(unaff_RBP + -0x5c) = 0xbf800000;
              *(undefined4 *)(unaff_RBP + -0x58) = 0xbf800000;
              *(undefined4 *)(unaff_RBP + -0x54) = 0xbf800000;
              auVar22._0_4_ = fVar16 + fVar20 * fVar30;
              auVar22._4_4_ = fVar17 + fVar19 * fVar31;
              auVar22._8_4_ = fVar16 + fVar16;
              auVar22._12_4_ = fVar17 + fVar17;
              auVar21._4_12_ = auVar22._4_12_;
              auVar21._0_4_ = auVar22._0_4_ + auVar22._4_4_;
              *(undefined8 *)(unaff_RBP + -0x70) = 0x3f8000003f800000;
              *(undefined8 *)(unaff_RBP + -0x68) = 0x3f8000003f800000;
              uVar7 = movmskps((uint)((ulonglong)lVar8 >> 0x3f),auVar21);
              pfVar1 = (float *)(unaff_RBP + -0x70 + (ulonglong)(uVar7 & 1) * 0x10);
              fVar20 = *pfVar1;
              fVar19 = pfVar1[1];
              fVar16 = pfVar1[2];
              fVar17 = pfVar1[3];
              pfVar1 = (float *)(lVar2 + 0x10 + lVar10);
              fVar23 = *pfVar1;
              fVar24 = pfVar1[1];
              fVar26 = pfVar1[2];
              fVar27 = pfVar1[3];
              if (0.9995 < ABS(auVar21._0_4_)) {
                fVar13 = 1.0 - fVar28;
                fVar30 = fVar30 * fVar13 + fVar28 * fVar20 * fVar23;
                fVar31 = fVar31 * fVar13 + fVar28 * fVar19 * fVar24;
                fVar32 = fVar32 * fVar13 + fVar28 * fVar16 * fVar26;
                fVar33 = fVar33 * fVar13 + fVar28 * fVar17 * fVar27;
                fVar20 = fVar33 * fVar33 + fVar30 * fVar30;
                fVar19 = fVar32 * fVar32 + fVar31 * fVar31;
                fVar26 = fVar20 + fVar31 * fVar31 + fVar32 * fVar32;
                fVar27 = fVar19 + fVar30 * fVar30 + fVar33 * fVar33;
                auVar3._4_4_ = fVar20 + fVar19 + 1.1754944e-38;
                auVar3._0_4_ = fVar19 + fVar20 + 1.1754944e-38;
                auVar3._8_4_ = fVar26 + 1.1754944e-38;
                auVar3._12_4_ = fVar27 + 1.1754944e-38;
                auVar22 = rsqrtps(auVar21,auVar3);
                fVar16 = auVar22._0_4_;
                fVar17 = auVar22._4_4_;
                fVar23 = auVar22._8_4_;
                fVar24 = auVar22._12_4_;
                fVar30 = fVar30 * (3.0 - fVar16 * fVar16 * (fVar19 + fVar20)) * fVar16 * 0.5;
                fVar31 = fVar31 * (3.0 - fVar17 * fVar17 * (fVar20 + fVar19)) * fVar17 * 0.5;
                fVar32 = fVar32 * (3.0 - fVar23 * fVar23 * fVar26) * fVar23 * 0.5;
                fVar33 = fVar33 * (3.0 - fVar24 * fVar24 * fVar27) * fVar24 * 0.5;
              }
              else {
                fVar13 = (float)acosf();
                fVar14 = (float)sinf();
                fVar15 = (float)sinf(fVar13 - fVar13 * fVar28);
                fVar15 = fVar15 * (1.0 / fVar14);
                fVar13 = (float)sinf(fVar13 * fVar28);
                fVar13 = fVar13 * (1.0 / fVar14);
                fVar30 = fVar15 * fVar30 + fVar13 * fVar20 * fVar23;
                fVar31 = fVar15 * fVar31 + fVar13 * fVar19 * fVar24;
                fVar32 = fVar15 * fVar32 + fVar13 * fVar16 * fVar26;
                fVar33 = fVar15 * fVar33 + fVar13 * fVar17 * fVar27;
              }
            }
            else {
              pfVar1 = (float *)(lVar2 + 0x10 + lVar10);
              fVar30 = *pfVar1;
              fVar31 = pfVar1[1];
              fVar32 = pfVar1[2];
              fVar33 = pfVar1[3];
            }
          }
          fVar20 = 1.0 - fVar28;
          fVar25 = fVar28 * *(float *)(lVar10 + 0x20 + lVar2) + fVar25 * fVar20;
          fVar18 = fVar28 * *(float *)(lVar10 + 0x24 + lVar2) + fVar18 * fVar20;
          fVar29 = fVar28 * *(float *)(lVar10 + 0x28 + lVar2) + fVar29 * fVar20;
          fVar28 = 3.4028235e+38;
        }
      }
      puVar9 = (uint *)((longlong)(char)unaff_ESI * 0x100 + *(longlong *)(unaff_R15 + 0x18));
      *(float *)(unaff_RBP + -0x80) = fVar25;
      *(float *)(unaff_RBP + -0x7c) = fVar18;
      *(float *)(unaff_RBP + -0x78) = fVar29;
      *(float *)(unaff_RBP + -0x74) = fVar28;
      do {
        LOCK();
        uVar7 = *puVar9;
        *puVar9 = *puVar9 | 1;
        UNLOCK();
      } while ((uVar7 & 1) != 0);
      uVar7 = *(uint *)(unaff_RBP + -0x80);
      uVar4 = *(uint *)(unaff_RBP + -0x7c);
      uVar5 = *(uint *)(unaff_RBP + -0x78);
      uVar6 = *(uint *)(unaff_RBP + -0x74);
      puVar9[1] = (uint)fVar30;
      puVar9[2] = (uint)fVar31;
      puVar9[3] = (uint)fVar32;
      puVar9[4] = (uint)fVar33;
      puVar9[5] = uVar7;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      puVar9[8] = uVar6;
      *puVar9 = 0;
      FUN_1802feba0(fVar30,(longlong)(ulonglong)(uint)((int)puVar9 - *(int *)(unaff_R15 + 0x18)) >>
                           8);
      uVar11 = (ulonglong)*(uint *)(unaff_RBP + 200);
      param_3 = in_stack_00000060;
      in_R11 = in_stack_00000068;
    }
    unaff_ESI = unaff_ESI + 1;
    uVar12 = uVar12 + 1;
    lVar10 = lVar10 + 0xb0;
  } while (unaff_ESI < unaff_R12D);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x50) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180334fd7(void)
void FUN_180334fd7(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x50) ^ (ulonglong)&stack0x00000000);
}



undefined8 * FUN_180335000(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int aiStackX_8 [2];
  int iStackX_10;
  undefined1 auStackX_18 [8];
  undefined1 auStackX_20 [8];
  
  puVar6 = (undefined8 *)(param_1 + 0x958);
  puVar5 = *(undefined8 **)(param_1 + 0x968);
  aiStackX_8[0] = *(int *)(param_1 + 0x160) + -5;
  puVar7 = puVar5;
  puVar8 = puVar6;
  if (puVar5 != (undefined8 *)0x0) {
    do {
      if (*(int *)(puVar7 + 4) < aiStackX_8[0]) {
        puVar7 = (undefined8 *)*puVar7;
      }
      else {
        puVar8 = puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
    } while (puVar7 != (undefined8 *)0x0);
    puVar7 = (undefined8 *)0x0;
    if ((puVar8 != puVar6) && (puVar4 = puVar6, *(int *)(puVar8 + 4) <= aiStackX_8[0])) {
      while (puVar5 != (undefined8 *)0x0) {
        if (*(int *)(puVar5 + 4) < aiStackX_8[0]) {
          puVar5 = (undefined8 *)*puVar5;
        }
        else {
          puVar4 = puVar5;
          puVar5 = (undefined8 *)puVar5[1];
        }
      }
      if ((puVar4 == puVar6) || (aiStackX_8[0] < *(int *)(puVar4 + 4))) {
        puVar4 = (undefined8 *)FUN_180179aa0(puVar6,auStackX_18,aiStackX_8[0],puVar4,aiStackX_8);
        puVar4 = (undefined8 *)*puVar4;
      }
      puVar7 = (undefined8 *)(ulonglong)*(uint *)puVar4[5];
      if (*(uint *)puVar4[5] != 0) {
        iStackX_10 = *(int *)(param_1 + 0x160) + -5;
        puVar5 = puVar6;
        puVar7 = *(undefined8 **)(param_1 + 0x968);
        while (puVar7 != (undefined8 *)0x0) {
          if (*(int *)(puVar7 + 4) < iStackX_10) {
            puVar7 = (undefined8 *)*puVar7;
          }
          else {
            puVar5 = puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
        }
        if ((puVar5 == puVar6) || (iStackX_10 < *(int *)(puVar5 + 4))) {
          puVar5 = (undefined8 *)FUN_180179aa0(puVar6,auStackX_20);
          puVar5 = (undefined8 *)*puVar5;
        }
        piVar3 = (int *)puVar5[5];
        puVar6 = (undefined8 *)0x0;
        LOCK();
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x2d8) + 0x51d0);
        uVar2 = *puVar1;
        *puVar1 = 0;
        UNLOCK();
        puVar7 = (undefined8 *)(ulonglong)uVar2;
        if (*piVar3 != 0) {
          FUN_1801b9a40(*(longlong *)(param_1 + 0x2d8) + 0x51d0,*piVar3);
          if (*piVar3 != 0) {
            puVar6 = (undefined8 *)(ulonglong)((*piVar3 - 1U >> 0xc) + 1);
          }
          puVar7 = puVar6;
          if ((int)puVar6 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(*(undefined8 *)(*(longlong *)(param_1 + 0x2d8) + 0x51d8),
                   *(undefined8 *)(piVar3 + 2),0x20000);
          }
        }
      }
    }
  }
  return puVar7;
}



undefined4 FUN_1803350cd(undefined8 *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *in_RAX;
  undefined8 *puVar5;
  undefined8 *unaff_RBX;
  longlong unaff_RBP;
  int iStack0000000000000068;
  
  if (param_1 != (undefined8 *)0x0) {
    do {
      if (*(int *)(param_1 + 4) < param_2) {
        puVar5 = (undefined8 *)*param_1;
      }
      else {
        puVar5 = (undefined8 *)param_1[1];
        in_RAX = param_1;
      }
      param_1 = puVar5;
    } while (puVar5 != (undefined8 *)0x0);
  }
  iStack0000000000000068 = param_2;
  if ((in_RAX == unaff_RBX) || (param_2 < *(int *)(in_RAX + 4))) {
    puVar5 = (undefined8 *)FUN_180179aa0();
    in_RAX = (undefined8 *)*puVar5;
  }
  piVar2 = (int *)in_RAX[5];
  iVar3 = 0;
  LOCK();
  puVar1 = (undefined4 *)(*(longlong *)(unaff_RBP + 0x2d8) + 0x51d0);
  uVar4 = *puVar1;
  *puVar1 = 0;
  UNLOCK();
  if (*piVar2 != 0) {
    FUN_1801b9a40(*(longlong *)(unaff_RBP + 0x2d8) + 0x51d0,*piVar2);
    if (*piVar2 != 0) {
      iVar3 = (*piVar2 - 1U >> 0xc) + 1;
    }
    if (iVar3 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(*(undefined8 *)(*(longlong *)(unaff_RBP + 0x2d8) + 0x51d8),*(undefined8 *)(piVar2 + 2),
             0x20000);
    }
    uVar4 = 0;
  }
  return uVar4;
}





// 函数: void FUN_180335140(void)
void FUN_180335140(void)

{
  int iVar1;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int *unaff_RDI;
  
  FUN_1801b9a40(*(longlong *)(unaff_RBP + 0x2d8) + 0x51d0);
  if (*unaff_RDI == 0) {
    iVar1 = (int)unaff_RBX;
  }
  else {
    iVar1 = (*unaff_RDI - 1U >> 0xc) + 1;
  }
  if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(*(undefined8 *)(*(longlong *)(unaff_RBP + 0x2d8) + 0x51d8 + unaff_RBX * 8),
           *(undefined8 *)(unaff_RDI + unaff_RBX * 2 + 2),0x20000);
  }
  return;
}





// 函数: void FUN_18033519d(void)
void FUN_18033519d(void)

{
  return;
}





// 函数: void FUN_1803351a2(void)
void FUN_1803351a2(void)

{
  return;
}





// 函数: void FUN_1803351b0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)
void FUN_1803351b0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong lVar6;
  undefined *puVar7;
  longlong lVar8;
  uint uVar9;
  uint *puVar10;
  longlong lStackX_18;
  longlong lStackX_20;
  longlong lStack_70;
  uint *puStack_68;
  longlong lStack_60;
  undefined2 uStack_58;
  undefined1 uStack_56;
  
  lStack_70 = 0;
  puStack_68 = (uint *)0x0;
  lStack_60 = 0;
  uStack_58 = 0;
  uStack_56 = 3;
  uVar2 = *(undefined8 *)(param_1 + 0x868);
  lStackX_18 = param_3;
  FUN_180639bf0(&lStack_70,8,param_3,param_4,0xfffffffffffffffe);
  *(undefined8 *)puStack_68 = uVar2;
  puVar10 = (uint *)((longlong)puStack_68 + 8);
  lStackX_20 = param_1 + 0x848;
  lVar6 = *(longlong *)(param_1 + 0x850);
  lVar8 = lStack_70;
  puStack_68 = puVar10;
  if (lVar6 != lStackX_20) {
    do {
      iVar1 = *(int *)(lVar6 + 0x20);
      lVar3 = *(longlong *)(lVar6 + 0x30);
      lVar4 = *(longlong *)(lVar6 + 0x28);
      if ((ulonglong)((lVar8 - (longlong)puVar10) + lStack_60) < 9) {
        FUN_180639bf0(&lStack_70,(longlong)puVar10 + (8 - lVar8));
        lVar8 = lStack_70;
        puVar10 = puStack_68;
      }
      *(longlong *)puVar10 = (longlong)iVar1;
      puStack_68 = puVar10 + 2;
      if ((ulonglong)((lVar8 - (longlong)puStack_68) + lStack_60) < 5) {
        FUN_180639bf0(&lStack_70,(longlong)puStack_68 + (4 - lVar8));
        lVar8 = lStack_70;
      }
      uVar9 = (uint)(lVar3 - lVar4 >> 3);
      *puStack_68 = uVar9;
      puVar10 = puStack_68 + 1;
      puStack_68 = puVar10;
      if (0 < (int)uVar9) {
        lVar6 = **(longlong **)(lVar6 + 0x28);
        uVar9 = *(uint *)(lVar6 + 0x58);
        if ((ulonglong)((lVar8 - (longlong)puVar10) + lStack_60) <= (ulonglong)uVar9 + 4) {
          FUN_180639bf0(&lStack_70,(((ulonglong)uVar9 + 4) - lVar8) + (longlong)puVar10);
        }
        *puStack_68 = uVar9;
        puStack_68 = puStack_68 + 1;
        puVar5 = *(undefined **)(lVar6 + 0x50);
        puVar7 = &DAT_18098bc73;
        if (puVar5 != (undefined *)0x0) {
          puVar7 = puVar5;
        }
                    // WARNING: Subroutine does not return
        memcpy(puStack_68,puVar7,uVar9);
      }
      lVar6 = func_0x00018066bd70(lVar6);
    } while (lVar6 != lStackX_20);
  }
  lStackX_18 = lStack_60;
  fwrite(&lStackX_18,8,1,*(undefined8 *)(param_2 + 8));
  fwrite(lVar8,lStackX_18,1,*(undefined8 *)(param_2 + 8));
  if (((char)uStack_58 == '\0') && (lVar8 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180335590(longlong param_1,longlong param_2,undefined8 param_3)
void FUN_180335590(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint *puVar12;
  undefined8 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uVar16;
  longlong lStackX_10;
  undefined8 uStackX_18;
  ulonglong uStackX_20;
  undefined1 auStack_70 [8];
  longlong lStack_68;
  uint *puStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  undefined1 uStack_4e;
  
  lStackX_10 = 0;
  uStackX_18 = param_3;
  fread(&lStackX_10,8,1,*(undefined8 *)(param_2 + 8));
  lStack_68 = 0;
  puStack_60 = (uint *)0x0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_4e = 3;
  if (lStackX_10 != 0) {
    FUN_180639bf0(&lStack_68);
  }
  lVar8 = lStack_68;
  fread(lStack_68,lStackX_10,1,*(undefined8 *)(param_2 + 8));
  lVar10 = *(longlong *)puStack_60;
  puVar12 = (uint *)((longlong)puStack_60 + 8);
  puStack_60 = puVar12;
  do {
    if (lVar10 == 0) {
      if (((char)uStack_50 == '\0') && (lVar8 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar8);
      }
      return;
    }
    uVar4 = *(undefined8 *)puVar12;
    puVar15 = puVar12 + 2;
    puVar12 = puVar12 + 3;
    puStack_60 = puVar12;
    if (0 < (int)*puVar15) {
      puVar2 = (undefined8 *)(param_1 + 0x848);
      iVar14 = (int)uVar4;
      uVar5 = (ulonglong)uStackX_18 >> 0x20;
      uStackX_18 = CONCAT44((int)uVar5,iVar14);
      uStackX_20 = (ulonglong)*puVar15;
      do {
        puVar6 = (undefined4 *)FUN_18062b1e0(_DAT_180c8ed18,0x68,8,3);
        plVar1 = (longlong *)(puVar6 + 0x12);
        *plVar1 = (longlong)&UNK_18098bcb0;
        *(undefined8 *)(puVar6 + 0x14) = 0;
        puVar6[0x16] = 0;
        *plVar1 = (longlong)&UNK_180a3c3e0;
        *(undefined8 *)(puVar6 + 0x18) = 0;
        *(undefined8 *)(puVar6 + 0x14) = 0;
        puVar6[0x16] = 0;
        *puVar6 = 0xffffffff;
        (**(code **)(*plVar1 + 0x10))(plVar1,&DAT_18098bc73);
        *(undefined8 *)(puVar6 + 1) = 0x3f800000;
        *(undefined8 *)(puVar6 + 3) = 0;
        *(undefined8 *)(puVar6 + 5) = 0x3f80000000000000;
        *(undefined8 *)(puVar6 + 7) = 0;
        uVar16 = 0;
        puVar6[9] = 0;
        puVar6[10] = 0;
        puVar6[0xb] = 0x3f800000;
        puVar6[0xc] = 0;
        puVar6[0xd] = 0;
        puVar6[0xe] = 0;
        puVar6[0xf] = 0;
        puVar6[0x10] = 0x3f800000;
        uVar3 = *puVar12;
        puVar12 = puVar12 + 1;
        if (uVar3 != 0) {
          puStack_60 = puVar12;
          uVar16 = (**(code **)(*plVar1 + 0x18))(plVar1,puVar12,uVar3);
          puVar12 = (uint *)((longlong)puVar12 + (ulonglong)uVar3);
        }
        puVar6[1] = *puVar12;
        puVar6[2] = puVar12[1];
        puVar6[3] = puVar12[2];
        puVar6[4] = puVar12[3];
        puVar6[5] = puVar12[4];
        puVar6[6] = puVar12[5];
        puVar6[7] = puVar12[6];
        puVar6[8] = puVar12[7];
        puVar6[9] = puVar12[8];
        puVar6[10] = puVar12[9];
        puVar6[0xb] = puVar12[10];
        puVar6[0xc] = puVar12[0xb];
        puVar6[0xd] = puVar12[0xc];
        puVar6[0xe] = puVar12[0xd];
        puVar6[0xf] = puVar12[0xe];
        puVar6[0x10] = puVar12[0xf];
        puVar12 = puVar12 + 0x10;
        puStack_60 = puVar12;
        uVar16 = FUN_1800c17c0(uVar16,plVar1);
        *puVar6 = uVar16;
        puVar7 = puVar2;
        puVar13 = *(undefined8 **)(param_1 + 0x858);
        while (puVar13 != (undefined8 *)0x0) {
          if (*(int *)(puVar13 + 4) < iVar14) {
            puVar13 = (undefined8 *)*puVar13;
          }
          else {
            puVar7 = puVar13;
            puVar13 = (undefined8 *)puVar13[1];
          }
        }
        if ((puVar7 == puVar2) || (iVar14 < *(int *)(puVar7 + 4))) {
          puVar7 = (undefined8 *)FUN_18020d730(puVar2,auStack_70);
          puVar7 = (undefined8 *)*puVar7;
        }
        puVar13 = (undefined8 *)puVar7[6];
        if (puVar13 < (undefined8 *)puVar7[7]) {
          puVar7[6] = puVar13 + 1;
          *puVar13 = puVar6;
        }
        else {
          puVar11 = (undefined8 *)puVar7[5];
          lVar8 = (longlong)puVar13 - (longlong)puVar11 >> 3;
          if (lVar8 == 0) {
            lVar8 = 1;
LAB_1803358a2:
            puVar9 = (undefined8 *)
                     FUN_18062b420(_DAT_180c8ed18,lVar8 * 8,*(undefined1 *)(puVar7 + 8));
            puVar13 = (undefined8 *)puVar7[6];
            puVar11 = (undefined8 *)puVar7[5];
          }
          else {
            lVar8 = lVar8 * 2;
            if (lVar8 != 0) goto LAB_1803358a2;
            puVar9 = (undefined8 *)0x0;
          }
          if (puVar11 != puVar13) {
                    // WARNING: Subroutine does not return
            memmove(puVar9,puVar11,(longlong)puVar13 - (longlong)puVar11);
          }
          *puVar9 = puVar6;
          if (puVar7[5] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          puVar7[5] = puVar9;
          puVar7[6] = puVar9 + 1;
          puVar7[7] = puVar9 + lVar8;
        }
        uStackX_20 = uStackX_20 - 1;
      } while (uStackX_20 != 0);
      uStackX_20 = 0;
    }
    lVar10 = lVar10 + -1;
    lVar8 = lStack_68;
  } while( true );
}





