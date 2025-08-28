#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part227_sub002_sub002.c - 1 个函数

// 函数: void FUN_180799620(void)
void FUN_180799620(void)

{
                    // WARNING: Subroutine does not return
  memset(0x180c115d4,0,0x5c);
}



undefined8 FUN_180799810(longlong param_1,float *param_2,float *param_3,uint param_4,uint param_5)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  ulonglong uVar8;
  float *pfVar9;
  longlong lVar10;
  float *pfVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
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
  float fStack_148;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
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
  float fStack_dc;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  if (param_2 != (float *)0x0) {
    fVar1 = *(float *)(param_1 + 0x440);
    if (((fVar1 != *(float *)(param_1 + 0x218)) ||
        (*(float *)(param_1 + 0x444) != *(float *)(param_1 + 0x21c))) ||
       (*(float *)(param_1 + 0x448) != *(float *)(param_1 + 0x220))) {
      uVar2 = *(undefined4 *)(param_1 + 0x444);
      *(float *)(param_1 + 0x220) = *(float *)(param_1 + 0x448);
      *(float *)(param_1 + 0x218) = fVar1;
      *(undefined4 *)(param_1 + 0x21c) = uVar2;
      uVar13 = powf(0x41200000,*(float *)(param_1 + 0x448) * 0.05);
      *(undefined4 *)(param_1 + 0x224) = uVar13;
      FUN_18079ae50(param_1,fVar1,uVar2,uVar13);
    }
    fVar31 = 1.0 / *(float *)(param_1 + 0x428);
    fVar1 = *(float *)(param_1 + 0x42c);
    fVar3 = *(float *)(param_1 + 0x430);
    fVar4 = *(float *)(param_1 + 0x434);
    fVar5 = *(float *)(param_1 + 0x438);
    fVar6 = *(float *)(param_1 + 0x43c);
    if (param_5 == 1) {
      fVar24 = *(float *)(param_1 + 0x228);
      uVar8 = 0;
      fVar14 = *(float *)(param_1 + 0x22c);
      fVar20 = *(float *)(param_1 + 0x328);
      fVar17 = *(float *)(param_1 + 0x32c);
      if (3 < param_4) {
        lVar10 = (longlong)param_2 - (longlong)param_3;
        uVar7 = (param_4 - 4 >> 2) + 1;
        pfVar11 = param_3 + 1;
        uVar12 = (ulonglong)uVar7;
        uVar8 = (ulonglong)(uVar7 * 4);
        do {
          fVar19 = *(float *)(lVar10 + -4 + (longlong)pfVar11);
          fVar17 = (((fVar19 * fVar4 + fVar24 * fVar5 + fVar14 * fVar6) - fVar20 * fVar1) -
                   fVar17 * fVar3) * fVar31;
          pfVar11[-1] = fVar17;
          fVar23 = *(float *)(lVar10 + (longlong)pfVar11);
          fVar20 = (((fVar23 * fVar4 + fVar19 * fVar5 + fVar24 * fVar6) - fVar17 * fVar1) -
                   fVar20 * fVar3) * fVar31;
          *pfVar11 = fVar20;
          fVar14 = *(float *)(lVar10 + 4 + (longlong)pfVar11);
          fVar17 = (((fVar14 * fVar4 + fVar23 * fVar5 + fVar19 * fVar6) - fVar20 * fVar1) -
                   fVar17 * fVar3) * fVar31;
          pfVar11[1] = fVar17;
          fVar24 = *(float *)(lVar10 + 8 + (longlong)pfVar11);
          fVar20 = (((fVar24 * fVar4 + fVar14 * fVar5 + fVar23 * fVar6) - fVar17 * fVar1) -
                   fVar20 * fVar3) * fVar31;
          pfVar11[2] = fVar20;
          pfVar11 = pfVar11 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      if ((uint)uVar8 < param_4) {
        pfVar11 = param_3 + uVar8;
        uVar8 = (ulonglong)(param_4 - (uint)uVar8);
        fVar19 = fVar17;
        fVar23 = fVar14;
        do {
          fVar14 = fVar24;
          fVar17 = fVar20;
          fVar24 = *(float *)((longlong)pfVar11 + ((longlong)param_2 - (longlong)param_3));
          fVar20 = (((fVar24 * fVar4 + fVar14 * fVar5 + fVar23 * fVar6) - fVar17 * fVar1) -
                   fVar19 * fVar3) * fVar31;
          *pfVar11 = fVar20;
          pfVar11 = pfVar11 + 1;
          uVar8 = uVar8 - 1;
          fVar19 = fVar17;
          fVar23 = fVar14;
        } while (uVar8 != 0);
      }
      *(float *)(param_1 + 0x228) = fVar24;
      *(float *)(param_1 + 0x22c) = fVar14;
      *(float *)(param_1 + 0x328) = fVar20;
      *(float *)(param_1 + 0x32c) = fVar17;
    }
    else if (param_5 == 2) {
      fVar14 = *(float *)(param_1 + 0x230);
      fVar20 = *(float *)(param_1 + 0x328);
      fVar17 = *(float *)(param_1 + 0x330);
      fVar24 = *(float *)(param_1 + 0x228);
      fVar19 = *(float *)(param_1 + 0x22c);
      fStack_110 = *(float *)(param_1 + 0x234);
      fVar23 = *(float *)(param_1 + 0x32c);
      fStack_148 = *(float *)(param_1 + 0x334);
      fVar25 = fVar19;
      fVar15 = fStack_110;
      fVar16 = fVar23;
      fVar18 = fStack_148;
      if (param_4 != 0) {
        do {
          fStack_110 = fVar14;
          fStack_148 = fVar17;
          fVar19 = fVar24;
          fVar23 = fVar20;
          fVar24 = *param_2;
          fVar14 = param_2[1];
          param_2 = param_2 + 2;
          fVar20 = (((fVar24 * fVar4 + fVar19 * fVar5 + fVar25 * fVar6) - fVar23 * fVar1) -
                   fVar16 * fVar3) * fVar31;
          *param_3 = fVar20;
          fVar17 = (((fVar14 * fVar4 + fStack_110 * fVar5 + fVar15 * fVar6) - fStack_148 * fVar1) -
                   fVar18 * fVar3) * fVar31;
          param_3[1] = fVar17;
          param_3 = param_3 + 2;
          param_4 = param_4 - 1;
          fVar25 = fVar19;
          fVar15 = fStack_110;
          fVar16 = fVar23;
          fVar18 = fStack_148;
        } while (param_4 != 0);
      }
      *(float *)(param_1 + 0x228) = fVar24;
      *(float *)(param_1 + 0x230) = fVar14;
      *(float *)(param_1 + 0x22c) = fVar19;
      *(float *)(param_1 + 0x234) = fStack_110;
      *(float *)(param_1 + 0x328) = fVar20;
      *(float *)(param_1 + 0x330) = fVar17;
      *(float *)(param_1 + 0x32c) = fVar23;
      *(float *)(param_1 + 0x334) = fStack_148;
    }
    else if (param_5 == 6) {
      fStack_148 = *(float *)(param_1 + 0x23c);
      fStack_100 = *(float *)(param_1 + 0x244);
      fStack_104 = *(float *)(param_1 + 0x24c);
      fStack_108 = *(float *)(param_1 + 0x254);
      fStack_e8 = *(float *)(param_1 + 0x334);
      fStack_ec = *(float *)(param_1 + 0x33c);
      fStack_f0 = *(float *)(param_1 + 0x344);
      fStack_f4 = *(float *)(param_1 + 0x34c);
      fStack_f8 = *(float *)(param_1 + 0x354);
      fStack_110 = *(float *)(param_1 + 0x234);
      fStack_e4 = *(float *)(param_1 + 0x32c);
      fVar14 = *(float *)(param_1 + 0x22c);
      fStack_140 = *(float *)(param_1 + 0x228);
      fStack_13c = *(float *)(param_1 + 0x230);
      fStack_138 = *(float *)(param_1 + 0x238);
      fStack_134 = *(float *)(param_1 + 0x240);
      fStack_130 = *(float *)(param_1 + 0x248);
      fStack_12c = *(float *)(param_1 + 0x250);
      fStack_128 = *(float *)(param_1 + 0x328);
      fStack_124 = *(float *)(param_1 + 0x330);
      fStack_120 = *(float *)(param_1 + 0x338);
      fStack_11c = *(float *)(param_1 + 0x340);
      fStack_118 = *(float *)(param_1 + 0x348);
      fStack_114 = *(float *)(param_1 + 0x350);
      if (param_4 != 0) {
        pfVar11 = param_3 + 2;
        pfVar9 = param_2 + 2;
        do {
          fVar20 = pfVar9[-2];
          fVar17 = pfVar9[-1];
          fVar24 = *pfVar9;
          fVar19 = pfVar9[1];
          fVar23 = pfVar9[2];
          fVar25 = pfVar9[3];
          fVar30 = (((fVar20 * fVar4 + fStack_140 * fVar5 + fVar14 * fVar6) - fStack_128 * fVar1) -
                   fStack_e4 * fVar3) * fVar31;
          fVar26 = (((fVar17 * fVar4 + fStack_13c * fVar5 + fStack_110 * fVar6) - fStack_124 * fVar1
                    ) - fStack_e8 * fVar3) * fVar31;
          fVar21 = (((fVar24 * fVar4 + fStack_138 * fVar5 + fStack_148 * fVar6) - fStack_120 * fVar1
                    ) - fStack_ec * fVar3) * fVar31;
          fVar18 = (((fVar19 * fVar4 + fStack_134 * fVar5 + fStack_100 * fVar6) - fStack_11c * fVar1
                    ) - fStack_f0 * fVar3) * fVar31;
          *pfVar11 = fVar21;
          fVar16 = (((fVar23 * fVar4 + fStack_130 * fVar5 + fStack_104 * fVar6) - fStack_118 * fVar1
                    ) - fStack_f4 * fVar3) * fVar31;
          *(float *)((longlong)param_3 + (-8 - (longlong)param_2) + (longlong)pfVar9) = fVar30;
          pfVar9 = pfVar9 + 6;
          pfVar11[-1] = fVar26;
          pfVar11[1] = fVar18;
          pfVar11[2] = fVar16;
          fStack_148 = fStack_138;
          fStack_100 = fStack_134;
          fStack_104 = fStack_130;
          fVar15 = (((fVar25 * fVar4 + fStack_12c * fVar5 + fStack_108 * fVar6) - fStack_114 * fVar1
                    ) - fStack_f8 * fVar3) * fVar31;
          pfVar11[3] = fVar15;
          pfVar11 = pfVar11 + 6;
          fStack_108 = fStack_12c;
          fStack_110 = fStack_13c;
          fStack_e4 = fStack_128;
          fStack_e8 = fStack_124;
          fStack_ec = fStack_120;
          fStack_f0 = fStack_11c;
          fStack_f4 = fStack_118;
          fStack_f8 = fStack_114;
          param_4 = param_4 - 1;
          fVar14 = fStack_140;
          fStack_140 = fVar20;
          fStack_13c = fVar17;
          fStack_138 = fVar24;
          fStack_134 = fVar19;
          fStack_130 = fVar23;
          fStack_12c = fVar25;
          fStack_128 = fVar30;
          fStack_124 = fVar26;
          fStack_120 = fVar21;
          fStack_11c = fVar18;
          fStack_118 = fVar16;
          fStack_114 = fVar15;
        } while (param_4 != 0);
      }
      *(float *)(param_1 + 0x234) = fStack_110;
      *(float *)(param_1 + 0x328) = fStack_128;
      *(float *)(param_1 + 0x330) = fStack_124;
      *(float *)(param_1 + 0x338) = fStack_120;
      *(float *)(param_1 + 0x340) = fStack_11c;
      *(float *)(param_1 + 0x228) = fStack_140;
      *(float *)(param_1 + 0x240) = fStack_134;
      *(float *)(param_1 + 0x348) = fStack_118;
      *(float *)(param_1 + 0x230) = fStack_13c;
      *(float *)(param_1 + 0x248) = fStack_130;
      *(float *)(param_1 + 0x350) = fStack_114;
      *(float *)(param_1 + 0x238) = fStack_138;
      *(float *)(param_1 + 0x250) = fStack_12c;
      *(float *)(param_1 + 0x22c) = fVar14;
      *(float *)(param_1 + 0x23c) = fStack_148;
      *(float *)(param_1 + 0x244) = fStack_100;
      *(float *)(param_1 + 0x24c) = fStack_104;
      *(float *)(param_1 + 0x254) = fStack_108;
      *(float *)(param_1 + 0x32c) = fStack_e4;
      *(float *)(param_1 + 0x334) = fStack_e8;
      *(float *)(param_1 + 0x33c) = fStack_ec;
      *(float *)(param_1 + 0x344) = fStack_f0;
      *(float *)(param_1 + 0x34c) = fStack_f4;
      *(float *)(param_1 + 0x354) = fStack_f8;
    }
    else if (param_5 == 8) {
      fStack_f8 = *(float *)(param_1 + 0x23c);
      fStack_f4 = *(float *)(param_1 + 0x244);
      fStack_f0 = *(float *)(param_1 + 0x24c);
      fStack_ec = *(float *)(param_1 + 0x254);
      fStack_e8 = *(float *)(param_1 + 0x25c);
      fStack_e4 = *(float *)(param_1 + 0x264);
      fStack_d4 = *(float *)(param_1 + 0x32c);
      fStack_d0 = *(float *)(param_1 + 0x334);
      fStack_cc = *(float *)(param_1 + 0x33c);
      fStack_c8 = *(float *)(param_1 + 0x344);
      fStack_c4 = *(float *)(param_1 + 0x34c);
      fStack_c0 = *(float *)(param_1 + 0x354);
      fStack_bc = *(float *)(param_1 + 0x35c);
      fStack_110 = *(float *)(param_1 + 0x364);
      fStack_fc = *(float *)(param_1 + 0x234);
      fVar14 = *(float *)(param_1 + 0x22c);
      fStack_148 = *(float *)(param_1 + 0x360);
      fStack_140 = *(float *)(param_1 + 0x338);
      fStack_13c = *(float *)(param_1 + 0x330);
      fStack_138 = *(float *)(param_1 + 0x328);
      fStack_134 = *(float *)(param_1 + 0x260);
      fStack_130 = *(float *)(param_1 + 600);
      fStack_12c = *(float *)(param_1 + 0x250);
      fStack_128 = *(float *)(param_1 + 0x248);
      fStack_124 = *(float *)(param_1 + 0x240);
      fStack_120 = *(float *)(param_1 + 0x238);
      fStack_11c = *(float *)(param_1 + 0x230);
      fStack_118 = *(float *)(param_1 + 0x228);
      fStack_108 = *(float *)(param_1 + 0x348);
      fStack_104 = *(float *)(param_1 + 0x350);
      fStack_100 = *(float *)(param_1 + 0x358);
      fStack_dc = *(float *)(param_1 + 0x340);
      if (param_4 != 0) {
        pfVar11 = param_3 + 2;
        pfVar9 = param_2 + 2;
        do {
          fVar20 = pfVar9[-2];
          fVar17 = pfVar9[-1];
          fVar24 = *pfVar9;
          fVar19 = pfVar9[1];
          fVar23 = pfVar9[2];
          fVar25 = pfVar9[3];
          fVar15 = pfVar9[4];
          fVar16 = pfVar9[5];
          fVar18 = (((fVar20 * fVar4 + fStack_118 * fVar5 + fVar14 * fVar6) - fStack_138 * fVar1) -
                   fStack_d4 * fVar3) * fVar31;
          fVar29 = (((fVar17 * fVar4 + fStack_11c * fVar5 + fStack_fc * fVar6) - fStack_13c * fVar1)
                   - fStack_d0 * fVar3) * fVar31;
          fVar28 = (((fVar24 * fVar4 + fStack_120 * fVar5 + fStack_f8 * fVar6) - fStack_140 * fVar1)
                   - fStack_cc * fVar3) * fVar31;
          fVar27 = (((fVar19 * fVar4 + fStack_124 * fVar5 + fStack_f4 * fVar6) - fStack_dc * fVar1)
                   - fStack_c8 * fVar3) * fVar31;
          fVar22 = (((fVar23 * fVar4 + fStack_128 * fVar5 + fStack_f0 * fVar6) - fStack_108 * fVar1)
                   - fStack_c4 * fVar3) * fVar31;
          fVar30 = (((fVar25 * fVar4 + fStack_12c * fVar5 + fStack_ec * fVar6) - fStack_104 * fVar1)
                   - fStack_c0 * fVar3) * fVar31;
          fVar26 = (((fVar15 * fVar4 + fStack_130 * fVar5 + fStack_e8 * fVar6) - fStack_100 * fVar1)
                   - fStack_bc * fVar3) * fVar31;
          fStack_fc = fStack_11c;
          fVar21 = (((fVar16 * fVar4 + fStack_134 * fVar5 + fStack_e4 * fVar6) - fStack_148 * fVar1)
                   - fStack_110 * fVar3) * fVar31;
          fStack_f8 = fStack_120;
          fStack_f4 = fStack_124;
          fStack_f0 = fStack_128;
          fStack_ec = fStack_12c;
          fStack_e8 = fStack_130;
          fStack_e4 = fStack_134;
          fStack_d4 = fStack_138;
          fStack_d0 = fStack_13c;
          pfVar11[-1] = fVar29;
          pfVar11[4] = fVar26;
          fStack_110 = fStack_148;
          *(float *)((longlong)pfVar9 + (longlong)param_3 + (-8 - (longlong)param_2)) = fVar18;
          pfVar9 = pfVar9 + 8;
          *pfVar11 = fVar28;
          pfVar11[1] = fVar27;
          pfVar11[2] = fVar22;
          pfVar11[3] = fVar30;
          pfVar11[5] = fVar21;
          pfVar11 = pfVar11 + 8;
          fStack_cc = fStack_140;
          fStack_c8 = fStack_dc;
          fStack_c4 = fStack_108;
          fStack_c0 = fStack_104;
          fStack_bc = fStack_100;
          param_4 = param_4 - 1;
          fVar14 = fStack_118;
          fStack_148 = fVar21;
          fStack_140 = fVar28;
          fStack_13c = fVar29;
          fStack_138 = fVar18;
          fStack_134 = fVar16;
          fStack_130 = fVar15;
          fStack_12c = fVar25;
          fStack_128 = fVar23;
          fStack_124 = fVar19;
          fStack_120 = fVar24;
          fStack_11c = fVar17;
          fStack_118 = fVar20;
          fStack_108 = fVar22;
          fStack_104 = fVar30;
          fStack_100 = fVar26;
          fStack_dc = fVar27;
        } while (param_4 != 0);
      }
      *(float *)(param_1 + 0x234) = fStack_fc;
      *(float *)(param_1 + 0x328) = fStack_138;
      *(float *)(param_1 + 0x330) = fStack_13c;
      *(float *)(param_1 + 0x228) = fStack_118;
      *(float *)(param_1 + 0x338) = fStack_140;
      *(float *)(param_1 + 0x230) = fStack_11c;
      *(float *)(param_1 + 0x340) = fStack_dc;
      *(float *)(param_1 + 0x238) = fStack_120;
      *(float *)(param_1 + 0x348) = fStack_108;
      *(float *)(param_1 + 0x240) = fStack_124;
      *(float *)(param_1 + 0x350) = fStack_104;
      *(float *)(param_1 + 0x248) = fStack_128;
      *(float *)(param_1 + 0x358) = fStack_100;
      *(float *)(param_1 + 0x250) = fStack_12c;
      *(float *)(param_1 + 0x360) = fStack_148;
      *(float *)(param_1 + 600) = fStack_130;
      *(float *)(param_1 + 0x364) = fStack_110;
      *(float *)(param_1 + 0x260) = fStack_134;
      *(float *)(param_1 + 0x22c) = fVar14;
      *(float *)(param_1 + 0x23c) = fStack_f8;
      *(float *)(param_1 + 0x244) = fStack_f4;
      *(float *)(param_1 + 0x24c) = fStack_f0;
      *(float *)(param_1 + 0x254) = fStack_ec;
      *(float *)(param_1 + 0x25c) = fStack_e8;
      *(float *)(param_1 + 0x264) = fStack_e4;
      *(float *)(param_1 + 0x32c) = fStack_d4;
      *(float *)(param_1 + 0x334) = fStack_d0;
      *(float *)(param_1 + 0x33c) = fStack_cc;
      *(float *)(param_1 + 0x344) = fStack_c8;
      *(float *)(param_1 + 0x34c) = fStack_c4;
      *(float *)(param_1 + 0x354) = fStack_c0;
      *(float *)(param_1 + 0x35c) = fStack_bc;
    }
    else if (0 < (int)param_5) {
      pfVar11 = (float *)(param_1 + 0x22c);
      uVar8 = (ulonglong)param_5;
      lVar10 = (longlong)param_3 - (longlong)param_2;
      do {
        fVar14 = pfVar11[-1];
        fVar20 = *pfVar11;
        fVar17 = pfVar11[0x3f];
        fVar24 = pfVar11[0x40];
        pfVar9 = param_2;
        fVar19 = fVar20;
        fVar23 = fVar24;
        uVar7 = param_4;
        if (param_4 != 0) {
          do {
            fVar24 = fVar17;
            fVar20 = fVar14;
            fVar14 = *pfVar9;
            fVar17 = (((fVar14 * fVar4 + fVar20 * fVar5 + fVar19 * fVar6) - fVar24 * fVar1) -
                     fVar23 * fVar3) * fVar31;
            *(float *)((longlong)pfVar9 + lVar10) = fVar17;
            uVar7 = uVar7 - 1;
            pfVar9 = pfVar9 + (int)param_5;
            fVar19 = fVar20;
            fVar23 = fVar24;
          } while (uVar7 != 0);
        }
        pfVar11[-1] = fVar14;
        param_2 = param_2 + 1;
        *pfVar11 = fVar20;
        pfVar11[0x3f] = fVar17;
        pfVar11[0x40] = fVar24;
        pfVar11 = pfVar11 + 2;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return 0;
}



undefined8 FUN_18079983c(longlong param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  longlong in_RAX;
  ulonglong uVar8;
  float *pfVar9;
  longlong lVar10;
  longlong unaff_RBX;
  float *pfVar11;
  uint unaff_EBP;
  float *unaff_RSI;
  float *unaff_RDI;
  ulonglong uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 unaff_XMM6_Da;
  float fVar28;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  float fVar29;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  float fVar30;
  undefined4 unaff_XMM13_Da;
  float fVar31;
  undefined4 unaff_XMM13_Db;
  undefined4 unaff_XMM13_Dc;
  undefined4 unaff_XMM13_Dd;
  undefined4 unaff_XMM14_Da;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  undefined4 unaff_XMM15_Da;
  undefined4 unaff_XMM15_Db;
  undefined4 unaff_XMM15_Dc;
  undefined4 unaff_XMM15_Dd;
  float fStackX_20;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack000000000000008c;
  float fStack0000000000000094;
  float fStack0000000000000098;
  float fStack000000000000009c;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  uint in_stack_00000190;
  
  *(undefined4 *)(in_RAX + -0x18) = unaff_XMM6_Da;
  *(undefined4 *)(in_RAX + -0x14) = unaff_XMM6_Db;
  *(undefined4 *)(in_RAX + -0x10) = unaff_XMM6_Dc;
  *(undefined4 *)(in_RAX + -0xc) = unaff_XMM6_Dd;
  *(undefined4 *)(in_RAX + -0x28) = unaff_XMM7_Da;
  *(undefined4 *)(in_RAX + -0x24) = unaff_XMM7_Db;
  *(undefined4 *)(in_RAX + -0x20) = unaff_XMM7_Dc;
  *(undefined4 *)(in_RAX + -0x1c) = unaff_XMM7_Dd;
  fVar1 = *(float *)(param_1 + 0x440);
  fVar2 = *(float *)(param_1 + 0x218);
  *(undefined4 *)(in_RAX + -0x38) = unaff_XMM8_Da;
  *(undefined4 *)(in_RAX + -0x34) = unaff_XMM8_Db;
  *(undefined4 *)(in_RAX + -0x30) = unaff_XMM8_Dc;
  *(undefined4 *)(in_RAX + -0x2c) = unaff_XMM8_Dd;
  *(undefined4 *)(in_RAX + -0x48) = unaff_XMM9_Da;
  *(undefined4 *)(in_RAX + -0x44) = unaff_XMM9_Db;
  *(undefined4 *)(in_RAX + -0x40) = unaff_XMM9_Dc;
  *(undefined4 *)(in_RAX + -0x3c) = unaff_XMM9_Dd;
  *(undefined4 *)(in_RAX + -0x88) = unaff_XMM13_Da;
  *(undefined4 *)(in_RAX + -0x84) = unaff_XMM13_Db;
  *(undefined4 *)(in_RAX + -0x80) = unaff_XMM13_Dc;
  *(undefined4 *)(in_RAX + -0x7c) = unaff_XMM13_Dd;
  *(undefined4 *)(in_RAX + -0x98) = unaff_XMM14_Da;
  *(undefined4 *)(in_RAX + -0x94) = unaff_XMM14_Db;
  *(undefined4 *)(in_RAX + -0x90) = unaff_XMM14_Dc;
  *(undefined4 *)(in_RAX + -0x8c) = unaff_XMM14_Dd;
  *(undefined4 *)(in_RAX + -0xa8) = unaff_XMM15_Da;
  *(undefined4 *)(in_RAX + -0xa4) = unaff_XMM15_Db;
  *(undefined4 *)(in_RAX + -0xa0) = unaff_XMM15_Dc;
  *(undefined4 *)(in_RAX + -0x9c) = unaff_XMM15_Dd;
  if (((fVar1 != fVar2) || (*(float *)(param_1 + 0x444) != *(float *)(param_1 + 0x21c))) ||
     (*(float *)(param_1 + 0x448) != *(float *)(param_1 + 0x220))) {
    uVar3 = *(undefined4 *)(param_1 + 0x444);
    *(float *)(param_1 + 0x220) = *(float *)(param_1 + 0x448);
    *(float *)(param_1 + 0x218) = fVar1;
    *(undefined4 *)(param_1 + 0x21c) = uVar3;
    uVar13 = powf(0x41200000,*(float *)(param_1 + 0x448) * 0.05);
    *(undefined4 *)(unaff_RBX + 0x224) = uVar13;
    FUN_18079ae50(uVar13,fVar1,uVar3,uVar13);
  }
  fVar31 = 1.0 / *(float *)(unaff_RBX + 0x428);
  fVar1 = *(float *)(unaff_RBX + 0x42c);
  fVar2 = *(float *)(unaff_RBX + 0x430);
  fVar4 = *(float *)(unaff_RBX + 0x434);
  fVar5 = *(float *)(unaff_RBX + 0x438);
  fVar6 = *(float *)(unaff_RBX + 0x43c);
  if (in_stack_00000190 == 1) {
    fVar24 = *(float *)(unaff_RBX + 0x228);
    uVar8 = 0;
    fVar14 = *(float *)(unaff_RBX + 0x22c);
    fVar20 = *(float *)(unaff_RBX + 0x328);
    fVar17 = *(float *)(unaff_RBX + 0x32c);
    if (3 < unaff_EBP) {
      lVar10 = (longlong)unaff_RSI - (longlong)unaff_RDI;
      uVar7 = (unaff_EBP - 4 >> 2) + 1;
      pfVar11 = unaff_RDI + 1;
      uVar12 = (ulonglong)uVar7;
      uVar8 = (ulonglong)(uVar7 * 4);
      do {
        fVar19 = *(float *)(lVar10 + -4 + (longlong)pfVar11);
        fVar17 = (((fVar19 * fVar4 + fVar24 * fVar5 + fVar14 * fVar6) - fVar20 * fVar1) -
                 fVar17 * fVar2) * fVar31;
        pfVar11[-1] = fVar17;
        fVar23 = *(float *)(lVar10 + (longlong)pfVar11);
        fVar20 = (((fVar23 * fVar4 + fVar19 * fVar5 + fVar24 * fVar6) - fVar17 * fVar1) -
                 fVar20 * fVar2) * fVar31;
        *pfVar11 = fVar20;
        fVar14 = *(float *)(lVar10 + 4 + (longlong)pfVar11);
        fVar17 = (((fVar14 * fVar4 + fVar23 * fVar5 + fVar19 * fVar6) - fVar20 * fVar1) -
                 fVar17 * fVar2) * fVar31;
        pfVar11[1] = fVar17;
        fVar24 = *(float *)(lVar10 + 8 + (longlong)pfVar11);
        fVar20 = (((fVar24 * fVar4 + fVar14 * fVar5 + fVar23 * fVar6) - fVar17 * fVar1) -
                 fVar20 * fVar2) * fVar31;
        pfVar11[2] = fVar20;
        pfVar11 = pfVar11 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    if ((uint)uVar8 < unaff_EBP) {
      pfVar11 = unaff_RDI + uVar8;
      uVar8 = (ulonglong)(unaff_EBP - (uint)uVar8);
      fVar19 = fVar17;
      fVar23 = fVar14;
      do {
        fVar14 = fVar24;
        fVar17 = fVar20;
        fVar24 = *(float *)((longlong)pfVar11 + ((longlong)unaff_RSI - (longlong)unaff_RDI));
        fVar20 = (((fVar24 * fVar4 + fVar14 * fVar5 + fVar23 * fVar6) - fVar17 * fVar1) -
                 fVar19 * fVar2) * fVar31;
        *pfVar11 = fVar20;
        pfVar11 = pfVar11 + 1;
        uVar8 = uVar8 - 1;
        fVar19 = fVar17;
        fVar23 = fVar14;
      } while (uVar8 != 0);
    }
    *(float *)(unaff_RBX + 0x228) = fVar24;
    *(float *)(unaff_RBX + 0x22c) = fVar14;
    *(float *)(unaff_RBX + 0x328) = fVar20;
    *(float *)(unaff_RBX + 0x32c) = fVar17;
  }
  else if (in_stack_00000190 == 2) {
    fVar14 = *(float *)(unaff_RBX + 0x230);
    fVar20 = *(float *)(unaff_RBX + 0x328);
    fVar17 = *(float *)(unaff_RBX + 0x330);
    fVar24 = *(float *)(unaff_RBX + 0x228);
    fVar19 = *(float *)(unaff_RBX + 0x22c);
    fStack0000000000000058 = *(float *)(unaff_RBX + 0x234);
    fVar23 = *(float *)(unaff_RBX + 0x32c);
    fStackX_20 = *(float *)(unaff_RBX + 0x334);
    fVar25 = fVar19;
    fVar15 = fStack0000000000000058;
    fVar16 = fVar23;
    fVar18 = fStackX_20;
    if (unaff_EBP != 0) {
      do {
        fStack0000000000000058 = fVar14;
        fStackX_20 = fVar17;
        fVar19 = fVar24;
        fVar23 = fVar20;
        fVar24 = *unaff_RSI;
        fVar14 = unaff_RSI[1];
        unaff_RSI = unaff_RSI + 2;
        fVar20 = (((fVar24 * fVar4 + fVar19 * fVar5 + fVar25 * fVar6) - fVar23 * fVar1) -
                 fVar16 * fVar2) * fVar31;
        *unaff_RDI = fVar20;
        fVar17 = (((fVar14 * fVar4 + fStack0000000000000058 * fVar5 + fVar15 * fVar6) -
                  fStackX_20 * fVar1) - fVar18 * fVar2) * fVar31;
        unaff_RDI[1] = fVar17;
        unaff_RDI = unaff_RDI + 2;
        unaff_EBP = unaff_EBP - 1;
        fVar25 = fVar19;
        fVar15 = fStack0000000000000058;
        fVar16 = fVar23;
        fVar18 = fStackX_20;
      } while (unaff_EBP != 0);
    }
    *(float *)(unaff_RBX + 0x228) = fVar24;
    *(float *)(unaff_RBX + 0x230) = fVar14;
    *(float *)(unaff_RBX + 0x22c) = fVar19;
    *(float *)(unaff_RBX + 0x234) = fStack0000000000000058;
    *(float *)(unaff_RBX + 0x328) = fVar20;
    *(float *)(unaff_RBX + 0x330) = fVar17;
    *(float *)(unaff_RBX + 0x32c) = fVar23;
    *(float *)(unaff_RBX + 0x334) = fStackX_20;
  }
  else if (in_stack_00000190 == 6) {
    fStackX_20 = *(float *)(unaff_RBX + 0x23c);
    fStack0000000000000068 = *(float *)(unaff_RBX + 0x244);
    fStack0000000000000064 = *(float *)(unaff_RBX + 0x24c);
    fStack0000000000000060 = *(float *)(unaff_RBX + 0x254);
    fStack0000000000000080 = *(float *)(unaff_RBX + 0x334);
    fStack000000000000007c = *(float *)(unaff_RBX + 0x33c);
    fStack0000000000000078 = *(float *)(unaff_RBX + 0x344);
    fStack0000000000000074 = *(float *)(unaff_RBX + 0x34c);
    fStack0000000000000070 = *(float *)(unaff_RBX + 0x354);
    fStack0000000000000058 = *(float *)(unaff_RBX + 0x234);
    fStack0000000000000084 = *(float *)(unaff_RBX + 0x32c);
    fVar14 = *(float *)(unaff_RBX + 0x22c);
    fStack0000000000000028 = *(float *)(unaff_RBX + 0x228);
    fStack000000000000002c = *(float *)(unaff_RBX + 0x230);
    fStack0000000000000030 = *(float *)(unaff_RBX + 0x238);
    fStack0000000000000034 = *(float *)(unaff_RBX + 0x240);
    fStack0000000000000038 = *(float *)(unaff_RBX + 0x248);
    fStack000000000000003c = *(float *)(unaff_RBX + 0x250);
    fStack0000000000000040 = *(float *)(unaff_RBX + 0x328);
    fStack0000000000000044 = *(float *)(unaff_RBX + 0x330);
    fStack0000000000000048 = *(float *)(unaff_RBX + 0x338);
    fStack000000000000004c = *(float *)(unaff_RBX + 0x340);
    fStack0000000000000050 = *(float *)(unaff_RBX + 0x348);
    fStack0000000000000054 = *(float *)(unaff_RBX + 0x350);
    if (unaff_EBP != 0) {
      pfVar11 = unaff_RDI + 2;
      pfVar9 = unaff_RSI + 2;
      do {
        fVar20 = pfVar9[-2];
        fVar17 = pfVar9[-1];
        fVar24 = *pfVar9;
        fVar19 = pfVar9[1];
        fVar23 = pfVar9[2];
        fVar25 = pfVar9[3];
        fVar30 = (((fVar20 * fVar4 + fStack0000000000000028 * fVar5 + fVar14 * fVar6) -
                  fStack0000000000000040 * fVar1) - fStack0000000000000084 * fVar2) * fVar31;
        fVar26 = (((fVar17 * fVar4 + fStack000000000000002c * fVar5 + fStack0000000000000058 * fVar6
                   ) - fStack0000000000000044 * fVar1) - fStack0000000000000080 * fVar2) * fVar31;
        fVar21 = (((fVar24 * fVar4 + fStack0000000000000030 * fVar5 + fStackX_20 * fVar6) -
                  fStack0000000000000048 * fVar1) - fStack000000000000007c * fVar2) * fVar31;
        fVar18 = (((fVar19 * fVar4 + fStack0000000000000034 * fVar5 + fStack0000000000000068 * fVar6
                   ) - fStack000000000000004c * fVar1) - fStack0000000000000078 * fVar2) * fVar31;
        *pfVar11 = fVar21;
        fVar16 = (((fVar23 * fVar4 + fStack0000000000000038 * fVar5 + fStack0000000000000064 * fVar6
                   ) - fStack0000000000000050 * fVar1) - fStack0000000000000074 * fVar2) * fVar31;
        *(float *)((longlong)unaff_RDI + (-8 - (longlong)unaff_RSI) + (longlong)pfVar9) = fVar30;
        pfVar9 = pfVar9 + 6;
        pfVar11[-1] = fVar26;
        pfVar11[1] = fVar18;
        pfVar11[2] = fVar16;
        fStackX_20 = fStack0000000000000030;
        fStack0000000000000068 = fStack0000000000000034;
        fStack0000000000000064 = fStack0000000000000038;
        fVar15 = (((fVar25 * fVar4 + fStack000000000000003c * fVar5 + fStack0000000000000060 * fVar6
                   ) - fStack0000000000000054 * fVar1) - fStack0000000000000070 * fVar2) * fVar31;
        pfVar11[3] = fVar15;
        pfVar11 = pfVar11 + 6;
        fStack0000000000000060 = fStack000000000000003c;
        fStack0000000000000058 = fStack000000000000002c;
        fStack0000000000000084 = fStack0000000000000040;
        fStack0000000000000080 = fStack0000000000000044;
        fStack000000000000007c = fStack0000000000000048;
        fStack0000000000000078 = fStack000000000000004c;
        fStack0000000000000074 = fStack0000000000000050;
        fStack0000000000000070 = fStack0000000000000054;
        unaff_EBP = unaff_EBP - 1;
        fVar14 = fStack0000000000000028;
        fStack0000000000000028 = fVar20;
        fStack000000000000002c = fVar17;
        fStack0000000000000030 = fVar24;
        fStack0000000000000034 = fVar19;
        fStack0000000000000038 = fVar23;
        fStack000000000000003c = fVar25;
        fStack0000000000000040 = fVar30;
        fStack0000000000000044 = fVar26;
        fStack0000000000000048 = fVar21;
        fStack000000000000004c = fVar18;
        fStack0000000000000050 = fVar16;
        fStack0000000000000054 = fVar15;
      } while (unaff_EBP != 0);
    }
    *(float *)(unaff_RBX + 0x234) = fStack0000000000000058;
    *(float *)(unaff_RBX + 0x328) = fStack0000000000000040;
    *(float *)(unaff_RBX + 0x330) = fStack0000000000000044;
    *(float *)(unaff_RBX + 0x338) = fStack0000000000000048;
    *(float *)(unaff_RBX + 0x340) = fStack000000000000004c;
    *(float *)(unaff_RBX + 0x228) = fStack0000000000000028;
    *(float *)(unaff_RBX + 0x240) = fStack0000000000000034;
    *(float *)(unaff_RBX + 0x348) = fStack0000000000000050;
    *(float *)(unaff_RBX + 0x230) = fStack000000000000002c;
    *(float *)(unaff_RBX + 0x248) = fStack0000000000000038;
    *(float *)(unaff_RBX + 0x350) = fStack0000000000000054;
    *(float *)(unaff_RBX + 0x238) = fStack0000000000000030;
    *(float *)(unaff_RBX + 0x250) = fStack000000000000003c;
    *(float *)(unaff_RBX + 0x22c) = fVar14;
    *(float *)(unaff_RBX + 0x23c) = fStackX_20;
    *(float *)(unaff_RBX + 0x244) = fStack0000000000000068;
    *(float *)(unaff_RBX + 0x24c) = fStack0000000000000064;
    *(float *)(unaff_RBX + 0x254) = fStack0000000000000060;
    *(float *)(unaff_RBX + 0x32c) = fStack0000000000000084;
    *(float *)(unaff_RBX + 0x334) = fStack0000000000000080;
    *(float *)(unaff_RBX + 0x33c) = fStack000000000000007c;
    *(float *)(unaff_RBX + 0x344) = fStack0000000000000078;
    *(float *)(unaff_RBX + 0x34c) = fStack0000000000000074;
    *(float *)(unaff_RBX + 0x354) = fStack0000000000000070;
  }
  else if (in_stack_00000190 == 8) {
    fStack0000000000000070 = *(float *)(unaff_RBX + 0x23c);
    fStack0000000000000074 = *(float *)(unaff_RBX + 0x244);
    fStack0000000000000078 = *(float *)(unaff_RBX + 0x24c);
    fStack000000000000007c = *(float *)(unaff_RBX + 0x254);
    fStack0000000000000080 = *(float *)(unaff_RBX + 0x25c);
    fStack0000000000000084 = *(float *)(unaff_RBX + 0x264);
    fStack0000000000000094 = *(float *)(unaff_RBX + 0x32c);
    fStack0000000000000098 = *(float *)(unaff_RBX + 0x334);
    fStack000000000000009c = *(float *)(unaff_RBX + 0x33c);
    fStack00000000000000a0 = *(float *)(unaff_RBX + 0x344);
    fStack00000000000000a4 = *(float *)(unaff_RBX + 0x34c);
    fStack00000000000000a8 = *(float *)(unaff_RBX + 0x354);
    fStack00000000000000ac = *(float *)(unaff_RBX + 0x35c);
    fStack0000000000000058 = *(float *)(unaff_RBX + 0x364);
    fStack000000000000006c = *(float *)(unaff_RBX + 0x234);
    fVar14 = *(float *)(unaff_RBX + 0x22c);
    fStackX_20 = *(float *)(unaff_RBX + 0x360);
    fStack0000000000000028 = *(float *)(unaff_RBX + 0x338);
    fStack000000000000002c = *(float *)(unaff_RBX + 0x330);
    fStack0000000000000030 = *(float *)(unaff_RBX + 0x328);
    fStack0000000000000034 = *(float *)(unaff_RBX + 0x260);
    fStack0000000000000038 = *(float *)(unaff_RBX + 600);
    fStack000000000000003c = *(float *)(unaff_RBX + 0x250);
    fStack0000000000000040 = *(float *)(unaff_RBX + 0x248);
    fStack0000000000000044 = *(float *)(unaff_RBX + 0x240);
    fStack0000000000000048 = *(float *)(unaff_RBX + 0x238);
    fStack000000000000004c = *(float *)(unaff_RBX + 0x230);
    fStack0000000000000050 = *(float *)(unaff_RBX + 0x228);
    fStack0000000000000060 = *(float *)(unaff_RBX + 0x348);
    fStack0000000000000064 = *(float *)(unaff_RBX + 0x350);
    fStack0000000000000068 = *(float *)(unaff_RBX + 0x358);
    fStack000000000000008c = *(float *)(unaff_RBX + 0x340);
    if (unaff_EBP != 0) {
      pfVar11 = unaff_RDI + 2;
      pfVar9 = unaff_RSI + 2;
      do {
        fVar20 = pfVar9[-2];
        fVar17 = pfVar9[-1];
        fVar24 = *pfVar9;
        fVar19 = pfVar9[1];
        fVar23 = pfVar9[2];
        fVar25 = pfVar9[3];
        fVar15 = pfVar9[4];
        fVar16 = pfVar9[5];
        fVar18 = (((fVar20 * fVar4 + fStack0000000000000050 * fVar5 + fVar14 * fVar6) -
                  fStack0000000000000030 * fVar1) - fStack0000000000000094 * fVar2) * fVar31;
        fVar29 = (((fVar17 * fVar4 + fStack000000000000004c * fVar5 + fStack000000000000006c * fVar6
                   ) - fStack000000000000002c * fVar1) - fStack0000000000000098 * fVar2) * fVar31;
        fVar28 = (((fVar24 * fVar4 + fStack0000000000000048 * fVar5 + fStack0000000000000070 * fVar6
                   ) - fStack0000000000000028 * fVar1) - fStack000000000000009c * fVar2) * fVar31;
        fVar27 = (((fVar19 * fVar4 + fStack0000000000000044 * fVar5 + fStack0000000000000074 * fVar6
                   ) - fStack000000000000008c * fVar1) - fStack00000000000000a0 * fVar2) * fVar31;
        fVar22 = (((fVar23 * fVar4 + fStack0000000000000040 * fVar5 + fStack0000000000000078 * fVar6
                   ) - fStack0000000000000060 * fVar1) - fStack00000000000000a4 * fVar2) * fVar31;
        fVar30 = (((fVar25 * fVar4 + fStack000000000000003c * fVar5 + fStack000000000000007c * fVar6
                   ) - fStack0000000000000064 * fVar1) - fStack00000000000000a8 * fVar2) * fVar31;
        fVar26 = (((fVar15 * fVar4 + fStack0000000000000038 * fVar5 + fStack0000000000000080 * fVar6
                   ) - fStack0000000000000068 * fVar1) - fStack00000000000000ac * fVar2) * fVar31;
        fStack000000000000006c = fStack000000000000004c;
        fVar21 = (((fVar16 * fVar4 + fStack0000000000000034 * fVar5 + fStack0000000000000084 * fVar6
                   ) - fStackX_20 * fVar1) - fStack0000000000000058 * fVar2) * fVar31;
        fStack0000000000000070 = fStack0000000000000048;
        fStack0000000000000074 = fStack0000000000000044;
        fStack0000000000000078 = fStack0000000000000040;
        fStack000000000000007c = fStack000000000000003c;
        fStack0000000000000080 = fStack0000000000000038;
        fStack0000000000000084 = fStack0000000000000034;
        fStack0000000000000094 = fStack0000000000000030;
        fStack0000000000000098 = fStack000000000000002c;
        pfVar11[-1] = fVar29;
        pfVar11[4] = fVar26;
        fStack0000000000000058 = fStackX_20;
        *(float *)((longlong)pfVar9 + (longlong)unaff_RDI + (-8 - (longlong)unaff_RSI)) = fVar18;
        pfVar9 = pfVar9 + 8;
        *pfVar11 = fVar28;
        pfVar11[1] = fVar27;
        pfVar11[2] = fVar22;
        pfVar11[3] = fVar30;
        pfVar11[5] = fVar21;
        pfVar11 = pfVar11 + 8;
        fStack000000000000009c = fStack0000000000000028;
        fStack00000000000000a0 = fStack000000000000008c;
        fStack00000000000000a4 = fStack0000000000000060;
        fStack00000000000000a8 = fStack0000000000000064;
        fStack00000000000000ac = fStack0000000000000068;
        unaff_EBP = unaff_EBP - 1;
        fVar14 = fStack0000000000000050;
        fStackX_20 = fVar21;
        fStack0000000000000028 = fVar28;
        fStack000000000000002c = fVar29;
        fStack0000000000000030 = fVar18;
        fStack0000000000000034 = fVar16;
        fStack0000000000000038 = fVar15;
        fStack000000000000003c = fVar25;
        fStack0000000000000040 = fVar23;
        fStack0000000000000044 = fVar19;
        fStack0000000000000048 = fVar24;
        fStack000000000000004c = fVar17;
        fStack0000000000000050 = fVar20;
        fStack0000000000000060 = fVar22;
        fStack0000000000000064 = fVar30;
        fStack0000000000000068 = fVar26;
        fStack000000000000008c = fVar27;
      } while (unaff_EBP != 0);
    }
    *(float *)(unaff_RBX + 0x234) = fStack000000000000006c;
    *(float *)(unaff_RBX + 0x328) = fStack0000000000000030;
    *(float *)(unaff_RBX + 0x330) = fStack000000000000002c;
    *(float *)(unaff_RBX + 0x228) = fStack0000000000000050;
    *(float *)(unaff_RBX + 0x338) = fStack0000000000000028;
    *(float *)(unaff_RBX + 0x230) = fStack000000000000004c;
    *(float *)(unaff_RBX + 0x340) = fStack000000000000008c;
    *(float *)(unaff_RBX + 0x238) = fStack0000000000000048;
    *(float *)(unaff_RBX + 0x348) = fStack0000000000000060;
    *(float *)(unaff_RBX + 0x240) = fStack0000000000000044;
    *(float *)(unaff_RBX + 0x350) = fStack0000000000000064;
    *(float *)(unaff_RBX + 0x248) = fStack0000000000000040;
    *(float *)(unaff_RBX + 0x358) = fStack0000000000000068;
    *(float *)(unaff_RBX + 0x250) = fStack000000000000003c;
    *(float *)(unaff_RBX + 0x360) = fStackX_20;
    *(float *)(unaff_RBX + 600) = fStack0000000000000038;
    *(float *)(unaff_RBX + 0x364) = fStack0000000000000058;
    *(float *)(unaff_RBX + 0x260) = fStack0000000000000034;
    *(float *)(unaff_RBX + 0x22c) = fVar14;
    *(float *)(unaff_RBX + 0x23c) = fStack0000000000000070;
    *(float *)(unaff_RBX + 0x244) = fStack0000000000000074;
    *(float *)(unaff_RBX + 0x24c) = fStack0000000000000078;
    *(float *)(unaff_RBX + 0x254) = fStack000000000000007c;
    *(float *)(unaff_RBX + 0x25c) = fStack0000000000000080;
    *(float *)(unaff_RBX + 0x264) = fStack0000000000000084;
    *(float *)(unaff_RBX + 0x32c) = fStack0000000000000094;
    *(float *)(unaff_RBX + 0x334) = fStack0000000000000098;
    *(float *)(unaff_RBX + 0x33c) = fStack000000000000009c;
    *(float *)(unaff_RBX + 0x344) = fStack00000000000000a0;
    *(float *)(unaff_RBX + 0x34c) = fStack00000000000000a4;
    *(float *)(unaff_RBX + 0x354) = fStack00000000000000a8;
    *(float *)(unaff_RBX + 0x35c) = fStack00000000000000ac;
  }
  else if (0 < (int)in_stack_00000190) {
    pfVar11 = (float *)(unaff_RBX + 0x22c);
    uVar8 = (ulonglong)in_stack_00000190;
    lVar10 = (longlong)unaff_RDI - (longlong)unaff_RSI;
    do {
      fVar14 = pfVar11[-1];
      fVar20 = *pfVar11;
      fVar17 = pfVar11[0x3f];
      fVar24 = pfVar11[0x40];
      pfVar9 = unaff_RSI;
      fVar19 = fVar20;
      fVar23 = fVar24;
      uVar7 = unaff_EBP;
      if (unaff_EBP != 0) {
        do {
          fVar24 = fVar17;
          fVar20 = fVar14;
          fVar14 = *pfVar9;
          fVar17 = (((fVar14 * fVar4 + fVar20 * fVar5 + fVar19 * fVar6) - fVar24 * fVar1) -
                   fVar23 * fVar2) * fVar31;
          *(float *)((longlong)pfVar9 + lVar10) = fVar17;
          uVar7 = uVar7 - 1;
          pfVar9 = pfVar9 + (int)in_stack_00000190;
          fVar19 = fVar20;
          fVar23 = fVar24;
        } while (uVar7 != 0);
      }
      pfVar11[-1] = fVar14;
      unaff_RSI = unaff_RSI + 1;
      *pfVar11 = fVar20;
      pfVar11[0x3f] = fVar17;
      pfVar11[0x40] = fVar24;
      pfVar11 = pfVar11 + 2;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return 0;
}



undefined8 FUN_180799935(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  float *pfVar3;
  longlong lVar4;
  longlong unaff_RBX;
  float *pfVar5;
  uint unaff_EBP;
  float *unaff_RSI;
  float *unaff_RDI;
  int iVar6;
  ulonglong uVar7;
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
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float unaff_XMM7_Da;
  float fVar23;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float fVar24;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float fStackX_20;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack000000000000008c;
  float fStack0000000000000094;
  float fStack0000000000000098;
  float fStack000000000000009c;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  
  iVar6 = (int)param_3;
  if (iVar6 == 1) {
    fVar18 = *(float *)(unaff_RBX + 0x228);
    uVar2 = 0;
    fVar8 = *(float *)(unaff_RBX + 0x22c);
    fVar14 = *(float *)(unaff_RBX + 0x328);
    fVar11 = *(float *)(unaff_RBX + 0x32c);
    if (3 < unaff_EBP) {
      lVar4 = (longlong)unaff_RSI - (longlong)unaff_RDI;
      uVar1 = (unaff_EBP - 4 >> 2) + 1;
      pfVar5 = unaff_RDI + 1;
      uVar7 = (ulonglong)uVar1;
      uVar2 = (ulonglong)(uVar1 * 4);
      do {
        fVar13 = *(float *)(lVar4 + -4 + (longlong)pfVar5);
        fVar11 = (((fVar13 * unaff_XMM7_Da + fVar18 * unaff_XMM8_Da + fVar8 * unaff_XMM9_Da) -
                  fVar14 * unaff_XMM14_Da) - fVar11 * unaff_XMM15_Da) * unaff_XMM13_Da;
        pfVar5[-1] = fVar11;
        fVar17 = *(float *)(lVar4 + (longlong)pfVar5);
        fVar14 = (((fVar17 * unaff_XMM7_Da + fVar13 * unaff_XMM8_Da + fVar18 * unaff_XMM9_Da) -
                  fVar11 * unaff_XMM14_Da) - fVar14 * unaff_XMM15_Da) * unaff_XMM13_Da;
        *pfVar5 = fVar14;
        fVar8 = *(float *)(lVar4 + 4 + (longlong)pfVar5);
        fVar11 = (((fVar8 * unaff_XMM7_Da + fVar17 * unaff_XMM8_Da + fVar13 * unaff_XMM9_Da) -
                  fVar14 * unaff_XMM14_Da) - fVar11 * unaff_XMM15_Da) * unaff_XMM13_Da;
        pfVar5[1] = fVar11;
        fVar18 = *(float *)(lVar4 + 8 + (longlong)pfVar5);
        fVar14 = (((fVar18 * unaff_XMM7_Da + fVar8 * unaff_XMM8_Da + fVar17 * unaff_XMM9_Da) -
                  fVar11 * unaff_XMM14_Da) - fVar14 * unaff_XMM15_Da) * unaff_XMM13_Da;
        pfVar5[2] = fVar14;
        pfVar5 = pfVar5 + 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if ((uint)uVar2 < unaff_EBP) {
      pfVar5 = unaff_RDI + uVar2;
      uVar2 = (ulonglong)(unaff_EBP - (uint)uVar2);
      fVar13 = fVar11;
      fVar17 = fVar8;
      do {
        fVar8 = fVar18;
        fVar11 = fVar14;
        fVar18 = *(float *)((longlong)pfVar5 + ((longlong)unaff_RSI - (longlong)unaff_RDI));
        fVar14 = (((fVar18 * unaff_XMM7_Da + fVar8 * unaff_XMM8_Da + fVar17 * unaff_XMM9_Da) -
                  fVar11 * unaff_XMM14_Da) - fVar13 * unaff_XMM15_Da) * unaff_XMM13_Da;
        *pfVar5 = fVar14;
        pfVar5 = pfVar5 + 1;
        uVar2 = uVar2 - 1;
        fVar13 = fVar11;
        fVar17 = fVar8;
      } while (uVar2 != 0);
    }
    *(float *)(unaff_RBX + 0x228) = fVar18;
    *(float *)(unaff_RBX + 0x22c) = fVar8;
    *(float *)(unaff_RBX + 0x328) = fVar14;
    *(float *)(unaff_RBX + 0x32c) = fVar11;
  }
  else if (iVar6 == 2) {
    fVar8 = *(float *)(unaff_RBX + 0x230);
    fVar14 = *(float *)(unaff_RBX + 0x328);
    fVar11 = *(float *)(unaff_RBX + 0x330);
    fVar18 = *(float *)(unaff_RBX + 0x228);
    fVar13 = *(float *)(unaff_RBX + 0x22c);
    fStack0000000000000058 = *(float *)(unaff_RBX + 0x234);
    fVar17 = *(float *)(unaff_RBX + 0x32c);
    fStackX_20 = *(float *)(unaff_RBX + 0x334);
    fVar19 = fVar13;
    fVar9 = fStack0000000000000058;
    fVar10 = fVar17;
    fVar12 = fStackX_20;
    if (unaff_EBP != 0) {
      do {
        fStack0000000000000058 = fVar8;
        fStackX_20 = fVar11;
        fVar13 = fVar18;
        fVar17 = fVar14;
        fVar18 = *unaff_RSI;
        fVar8 = unaff_RSI[1];
        unaff_RSI = unaff_RSI + 2;
        fVar14 = (((fVar18 * unaff_XMM7_Da + fVar13 * unaff_XMM8_Da + fVar19 * unaff_XMM9_Da) -
                  fVar17 * unaff_XMM14_Da) - fVar10 * unaff_XMM15_Da) * unaff_XMM13_Da;
        *unaff_RDI = fVar14;
        fVar11 = (((fVar8 * unaff_XMM7_Da + fStack0000000000000058 * unaff_XMM8_Da +
                   fVar9 * unaff_XMM9_Da) - fStackX_20 * unaff_XMM14_Da) - fVar12 * unaff_XMM15_Da)
                 * unaff_XMM13_Da;
        unaff_RDI[1] = fVar11;
        unaff_RDI = unaff_RDI + 2;
        unaff_EBP = unaff_EBP - 1;
        fVar19 = fVar13;
        fVar9 = fStack0000000000000058;
        fVar10 = fVar17;
        fVar12 = fStackX_20;
      } while (unaff_EBP != 0);
    }
    *(float *)(unaff_RBX + 0x228) = fVar18;
    *(float *)(unaff_RBX + 0x230) = fVar8;
    *(float *)(unaff_RBX + 0x22c) = fVar13;
    *(float *)(unaff_RBX + 0x234) = fStack0000000000000058;
    *(float *)(unaff_RBX + 0x328) = fVar14;
    *(float *)(unaff_RBX + 0x330) = fVar11;
    *(float *)(unaff_RBX + 0x32c) = fVar17;
    *(float *)(unaff_RBX + 0x334) = fStackX_20;
  }
  else if (iVar6 == 6) {
    fStackX_20 = *(float *)(unaff_RBX + 0x23c);
    fStack0000000000000068 = *(float *)(unaff_RBX + 0x244);
    fStack0000000000000064 = *(float *)(unaff_RBX + 0x24c);
    fStack0000000000000060 = *(float *)(unaff_RBX + 0x254);
    fStack0000000000000080 = *(float *)(unaff_RBX + 0x334);
    fStack000000000000007c = *(float *)(unaff_RBX + 0x33c);
    fStack0000000000000078 = *(float *)(unaff_RBX + 0x344);
    fStack0000000000000074 = *(float *)(unaff_RBX + 0x34c);
    fStack0000000000000070 = *(float *)(unaff_RBX + 0x354);
    fStack0000000000000058 = *(float *)(unaff_RBX + 0x234);
    fStack0000000000000084 = *(float *)(unaff_RBX + 0x32c);
    fVar8 = *(float *)(unaff_RBX + 0x22c);
    fStack0000000000000028 = *(float *)(unaff_RBX + 0x228);
    fStack000000000000002c = *(float *)(unaff_RBX + 0x230);
    fStack0000000000000030 = *(float *)(unaff_RBX + 0x238);
    fStack0000000000000034 = *(float *)(unaff_RBX + 0x240);
    fStack0000000000000038 = *(float *)(unaff_RBX + 0x248);
    fStack000000000000003c = *(float *)(unaff_RBX + 0x250);
    fStack0000000000000040 = *(float *)(unaff_RBX + 0x328);
    fStack0000000000000044 = *(float *)(unaff_RBX + 0x330);
    fStack0000000000000048 = *(float *)(unaff_RBX + 0x338);
    fStack000000000000004c = *(float *)(unaff_RBX + 0x340);
    fStack0000000000000050 = *(float *)(unaff_RBX + 0x348);
    fStack0000000000000054 = *(float *)(unaff_RBX + 0x350);
    if (unaff_EBP != 0) {
      pfVar5 = unaff_RDI + 2;
      pfVar3 = unaff_RSI + 2;
      do {
        fVar14 = pfVar3[-2];
        fVar11 = pfVar3[-1];
        fVar18 = *pfVar3;
        fVar13 = pfVar3[1];
        fVar17 = pfVar3[2];
        fVar19 = pfVar3[3];
        fVar24 = (((fVar14 * unaff_XMM7_Da + fStack0000000000000028 * unaff_XMM8_Da +
                   fVar8 * unaff_XMM9_Da) - fStack0000000000000040 * unaff_XMM14_Da) -
                 fStack0000000000000084 * unaff_XMM15_Da) * unaff_XMM13_Da;
        fVar20 = (((fVar11 * unaff_XMM7_Da + fStack000000000000002c * unaff_XMM8_Da +
                   fStack0000000000000058 * unaff_XMM9_Da) - fStack0000000000000044 * unaff_XMM14_Da
                  ) - fStack0000000000000080 * unaff_XMM15_Da) * unaff_XMM13_Da;
        fVar15 = (((fVar18 * unaff_XMM7_Da + fStack0000000000000030 * unaff_XMM8_Da +
                   fStackX_20 * unaff_XMM9_Da) - fStack0000000000000048 * unaff_XMM14_Da) -
                 fStack000000000000007c * unaff_XMM15_Da) * unaff_XMM13_Da;
        fVar12 = (((fVar13 * unaff_XMM7_Da + fStack0000000000000034 * unaff_XMM8_Da +
                   fStack0000000000000068 * unaff_XMM9_Da) - fStack000000000000004c * unaff_XMM14_Da
                  ) - fStack0000000000000078 * unaff_XMM15_Da) * unaff_XMM13_Da;
        *pfVar5 = fVar15;
        fVar10 = (((fVar17 * unaff_XMM7_Da + fStack0000000000000038 * unaff_XMM8_Da +
                   fStack0000000000000064 * unaff_XMM9_Da) - fStack0000000000000050 * unaff_XMM14_Da
                  ) - fStack0000000000000074 * unaff_XMM15_Da) * unaff_XMM13_Da;
        *(float *)((longlong)unaff_RDI + (-8 - (longlong)unaff_RSI) + (longlong)pfVar3) = fVar24;
        pfVar3 = pfVar3 + 6;
        pfVar5[-1] = fVar20;
        pfVar5[1] = fVar12;
        pfVar5[2] = fVar10;
        fStackX_20 = fStack0000000000000030;
        fStack0000000000000068 = fStack0000000000000034;
        fStack0000000000000064 = fStack0000000000000038;
        fVar9 = (((fVar19 * unaff_XMM7_Da + fStack000000000000003c * unaff_XMM8_Da +
                  fStack0000000000000060 * unaff_XMM9_Da) - fStack0000000000000054 * unaff_XMM14_Da)
                - fStack0000000000000070 * unaff_XMM15_Da) * unaff_XMM13_Da;
        pfVar5[3] = fVar9;
        pfVar5 = pfVar5 + 6;
        fStack0000000000000060 = fStack000000000000003c;
        fStack0000000000000058 = fStack000000000000002c;
        fStack0000000000000084 = fStack0000000000000040;
        fStack0000000000000080 = fStack0000000000000044;
        fStack000000000000007c = fStack0000000000000048;
        fStack0000000000000078 = fStack000000000000004c;
        fStack0000000000000074 = fStack0000000000000050;
        fStack0000000000000070 = fStack0000000000000054;
        unaff_EBP = unaff_EBP - 1;
        fVar8 = fStack0000000000000028;
        fStack0000000000000028 = fVar14;
        fStack000000000000002c = fVar11;
        fStack0000000000000030 = fVar18;
        fStack0000000000000034 = fVar13;
        fStack0000000000000038 = fVar17;
        fStack000000000000003c = fVar19;
        fStack0000000000000040 = fVar24;
        fStack0000000000000044 = fVar20;
        fStack0000000000000048 = fVar15;
        fStack000000000000004c = fVar12;
        fStack0000000000000050 = fVar10;
        fStack0000000000000054 = fVar9;
      } while (unaff_EBP != 0);
    }
    *(float *)(unaff_RBX + 0x234) = fStack0000000000000058;
    *(float *)(unaff_RBX + 0x328) = fStack0000000000000040;
    *(float *)(unaff_RBX + 0x330) = fStack0000000000000044;
    *(float *)(unaff_RBX + 0x338) = fStack0000000000000048;
    *(float *)(unaff_RBX + 0x340) = fStack000000000000004c;
    *(float *)(unaff_RBX + 0x228) = fStack0000000000000028;
    *(float *)(unaff_RBX + 0x240) = fStack0000000000000034;
    *(float *)(unaff_RBX + 0x348) = fStack0000000000000050;
    *(float *)(unaff_RBX + 0x230) = fStack000000000000002c;
    *(float *)(unaff_RBX + 0x248) = fStack0000000000000038;
    *(float *)(unaff_RBX + 0x350) = fStack0000000000000054;
    *(float *)(unaff_RBX + 0x238) = fStack0000000000000030;
    *(float *)(unaff_RBX + 0x250) = fStack000000000000003c;
    *(float *)(unaff_RBX + 0x22c) = fVar8;
    *(float *)(unaff_RBX + 0x23c) = fStackX_20;
    *(float *)(unaff_RBX + 0x244) = fStack0000000000000068;
    *(float *)(unaff_RBX + 0x24c) = fStack0000000000000064;
    *(float *)(unaff_RBX + 0x254) = fStack0000000000000060;
    *(float *)(unaff_RBX + 0x32c) = fStack0000000000000084;
    *(float *)(unaff_RBX + 0x334) = fStack0000000000000080;
    *(float *)(unaff_RBX + 0x33c) = fStack000000000000007c;
    *(float *)(unaff_RBX + 0x344) = fStack0000000000000078;
    *(float *)(unaff_RBX + 0x34c) = fStack0000000000000074;
    *(float *)(unaff_RBX + 0x354) = fStack0000000000000070;
  }
  else if (iVar6 == 8) {
    fStack0000000000000070 = *(float *)(unaff_RBX + 0x23c);
    fStack0000000000000074 = *(float *)(unaff_RBX + 0x244);
    fStack0000000000000078 = *(float *)(unaff_RBX + 0x24c);
    fStack000000000000007c = *(float *)(unaff_RBX + 0x254);
    fStack0000000000000080 = *(float *)(unaff_RBX + 0x25c);
    fStack0000000000000084 = *(float *)(unaff_RBX + 0x264);
    fStack0000000000000094 = *(float *)(unaff_RBX + 0x32c);
    fStack0000000000000098 = *(float *)(unaff_RBX + 0x334);
    fStack000000000000009c = *(float *)(unaff_RBX + 0x33c);
    fStack00000000000000a0 = *(float *)(unaff_RBX + 0x344);
    fStack00000000000000a4 = *(float *)(unaff_RBX + 0x34c);
    fStack00000000000000a8 = *(float *)(unaff_RBX + 0x354);
    fStack00000000000000ac = *(float *)(unaff_RBX + 0x35c);
    fStack0000000000000058 = *(float *)(unaff_RBX + 0x364);
    fStack000000000000006c = *(float *)(unaff_RBX + 0x234);
    fVar8 = *(float *)(unaff_RBX + 0x22c);
    fStackX_20 = *(float *)(unaff_RBX + 0x360);
    fStack0000000000000028 = *(float *)(unaff_RBX + 0x338);
    fStack000000000000002c = *(float *)(unaff_RBX + 0x330);
    fStack0000000000000030 = *(float *)(unaff_RBX + 0x328);
    fStack0000000000000034 = *(float *)(unaff_RBX + 0x260);
    fStack0000000000000038 = *(float *)(unaff_RBX + 600);
    fStack000000000000003c = *(float *)(unaff_RBX + 0x250);
    fStack0000000000000040 = *(float *)(unaff_RBX + 0x248);
    fStack0000000000000044 = *(float *)(unaff_RBX + 0x240);
    fStack0000000000000048 = *(float *)(unaff_RBX + 0x238);
    fStack000000000000004c = *(float *)(unaff_RBX + 0x230);
    fStack0000000000000050 = *(float *)(unaff_RBX + 0x228);
    fStack0000000000000060 = *(float *)(unaff_RBX + 0x348);
    fStack0000000000000064 = *(float *)(unaff_RBX + 0x350);
    fStack0000000000000068 = *(float *)(unaff_RBX + 0x358);
    fStack000000000000008c = *(float *)(unaff_RBX + 0x340);
    if (unaff_EBP != 0) {
      pfVar5 = unaff_RDI + 2;
      pfVar3 = unaff_RSI + 2;
      do {
        fVar14 = pfVar3[-2];
        fVar11 = pfVar3[-1];
        fVar18 = *pfVar3;
        fVar13 = pfVar3[1];
        fVar17 = pfVar3[2];
        fVar19 = pfVar3[3];
        fVar9 = pfVar3[4];
        fVar10 = pfVar3[5];
        fVar12 = (((fVar14 * unaff_XMM7_Da + fStack0000000000000050 * unaff_XMM8_Da +
                   fVar8 * unaff_XMM9_Da) - fStack0000000000000030 * unaff_XMM14_Da) -
                 fStack0000000000000094 * unaff_XMM15_Da) * unaff_XMM13_Da;
        fVar23 = (((fVar11 * unaff_XMM7_Da + fStack000000000000004c * unaff_XMM8_Da +
                   fStack000000000000006c * unaff_XMM9_Da) - fStack000000000000002c * unaff_XMM14_Da
                  ) - fStack0000000000000098 * unaff_XMM15_Da) * unaff_XMM13_Da;
        fVar22 = (((fVar18 * unaff_XMM7_Da + fStack0000000000000048 * unaff_XMM8_Da +
                   fStack0000000000000070 * unaff_XMM9_Da) - fStack0000000000000028 * unaff_XMM14_Da
                  ) - fStack000000000000009c * unaff_XMM15_Da) * unaff_XMM13_Da;
        fVar21 = (((fVar13 * unaff_XMM7_Da + fStack0000000000000044 * unaff_XMM8_Da +
                   fStack0000000000000074 * unaff_XMM9_Da) - fStack000000000000008c * unaff_XMM14_Da
                  ) - fStack00000000000000a0 * unaff_XMM15_Da) * unaff_XMM13_Da;
        fVar16 = (((fVar17 * unaff_XMM7_Da + fStack0000000000000040 * unaff_XMM8_Da +
                   fStack0000000000000078 * unaff_XMM9_Da) - fStack0000000000000060 * unaff_XMM14_Da
                  ) - fStack00000000000000a4 * unaff_XMM15_Da) * unaff_XMM13_Da;
        fVar24 = (((fVar19 * unaff_XMM7_Da + fStack000000000000003c * unaff_XMM8_Da +
                   fStack000000000000007c * unaff_XMM9_Da) - fStack0000000000000064 * unaff_XMM14_Da
                  ) - fStack00000000000000a8 * unaff_XMM15_Da) * unaff_XMM13_Da;
        fVar20 = (((fVar9 * unaff_XMM7_Da + fStack0000000000000038 * unaff_XMM8_Da +
                   fStack0000000000000080 * unaff_XMM9_Da) - fStack0000000000000068 * unaff_XMM14_Da
                  ) - fStack00000000000000ac * unaff_XMM15_Da) * unaff_XMM13_Da;
        fStack000000000000006c = fStack000000000000004c;
        fVar15 = (((fVar10 * unaff_XMM7_Da + fStack0000000000000034 * unaff_XMM8_Da +
                   fStack0000000000000084 * unaff_XMM9_Da) - fStackX_20 * unaff_XMM14_Da) -
                 fStack0000000000000058 * unaff_XMM15_Da) * unaff_XMM13_Da;
        fStack0000000000000070 = fStack0000000000000048;
        fStack0000000000000074 = fStack0000000000000044;
        fStack0000000000000078 = fStack0000000000000040;
        fStack000000000000007c = fStack000000000000003c;
        fStack0000000000000080 = fStack0000000000000038;
        fStack0000000000000084 = fStack0000000000000034;
        fStack0000000000000094 = fStack0000000000000030;
        fStack0000000000000098 = fStack000000000000002c;
        pfVar5[-1] = fVar23;
        pfVar5[4] = fVar20;
        fStack0000000000000058 = fStackX_20;
        *(float *)((longlong)pfVar3 + (longlong)unaff_RDI + (-8 - (longlong)unaff_RSI)) = fVar12;
        pfVar3 = pfVar3 + 8;
        *pfVar5 = fVar22;
        pfVar5[1] = fVar21;
        pfVar5[2] = fVar16;
        pfVar5[3] = fVar24;
        pfVar5[5] = fVar15;
        pfVar5 = pfVar5 + 8;
        fStack000000000000009c = fStack0000000000000028;
        fStack00000000000000a0 = fStack000000000000008c;
        fStack00000000000000a4 = fStack0000000000000060;
        fStack00000000000000a8 = fStack0000000000000064;
        fStack00000000000000ac = fStack0000000000000068;
        unaff_EBP = unaff_EBP - 1;
        fVar8 = fStack0000000000000050;
        fStackX_20 = fVar15;
        fStack0000000000000028 = fVar22;
        fStack000000000000002c = fVar23;
        fStack0000000000000030 = fVar12;
        fStack0000000000000034 = fVar10;
        fStack0000000000000038 = fVar9;
        fStack000000000000003c = fVar19;
        fStack0000000000000040 = fVar17;
        fStack0000000000000044 = fVar13;
        fStack0000000000000048 = fVar18;
        fStack000000000000004c = fVar11;
        fStack0000000000000050 = fVar14;
        fStack0000000000000060 = fVar16;
        fStack0000000000000064 = fVar24;
        fStack0000000000000068 = fVar20;
        fStack000000000000008c = fVar21;
      } while (unaff_EBP != 0);
    }
    *(float *)(unaff_RBX + 0x234) = fStack000000000000006c;
    *(float *)(unaff_RBX + 0x328) = fStack0000000000000030;
    *(float *)(unaff_RBX + 0x330) = fStack000000000000002c;
    *(float *)(unaff_RBX + 0x228) = fStack0000000000000050;
    *(float *)(unaff_RBX + 0x338) = fStack0000000000000028;
    *(float *)(unaff_RBX + 0x230) = fStack000000000000004c;
    *(float *)(unaff_RBX + 0x340) = fStack000000000000008c;
    *(float *)(unaff_RBX + 0x238) = fStack0000000000000048;
    *(float *)(unaff_RBX + 0x348) = fStack0000000000000060;
    *(float *)(unaff_RBX + 0x240) = fStack0000000000000044;
    *(float *)(unaff_RBX + 0x350) = fStack0000000000000064;
    *(float *)(unaff_RBX + 0x248) = fStack0000000000000040;
    *(float *)(unaff_RBX + 0x358) = fStack0000000000000068;
    *(float *)(unaff_RBX + 0x250) = fStack000000000000003c;
    *(float *)(unaff_RBX + 0x360) = fStackX_20;
    *(float *)(unaff_RBX + 600) = fStack0000000000000038;
    *(float *)(unaff_RBX + 0x364) = fStack0000000000000058;
    *(float *)(unaff_RBX + 0x260) = fStack0000000000000034;
    *(float *)(unaff_RBX + 0x22c) = fVar8;
    *(float *)(unaff_RBX + 0x23c) = fStack0000000000000070;
    *(float *)(unaff_RBX + 0x244) = fStack0000000000000074;
    *(float *)(unaff_RBX + 0x24c) = fStack0000000000000078;
    *(float *)(unaff_RBX + 0x254) = fStack000000000000007c;
    *(float *)(unaff_RBX + 0x25c) = fStack0000000000000080;
    *(float *)(unaff_RBX + 0x264) = fStack0000000000000084;
    *(float *)(unaff_RBX + 0x32c) = fStack0000000000000094;
    *(float *)(unaff_RBX + 0x334) = fStack0000000000000098;
    *(float *)(unaff_RBX + 0x33c) = fStack000000000000009c;
    *(float *)(unaff_RBX + 0x344) = fStack00000000000000a0;
    *(float *)(unaff_RBX + 0x34c) = fStack00000000000000a4;
    *(float *)(unaff_RBX + 0x354) = fStack00000000000000a8;
    *(float *)(unaff_RBX + 0x35c) = fStack00000000000000ac;
  }
  else if (0 < iVar6) {
    pfVar5 = (float *)(unaff_RBX + 0x22c);
    uVar2 = param_3 & 0xffffffff;
    lVar4 = (longlong)unaff_RDI - (longlong)unaff_RSI;
    do {
      fVar8 = pfVar5[-1];
      fVar14 = *pfVar5;
      fVar11 = pfVar5[0x3f];
      fVar18 = pfVar5[0x40];
      pfVar3 = unaff_RSI;
      fVar13 = fVar14;
      fVar17 = fVar18;
      uVar1 = unaff_EBP;
      if (unaff_EBP != 0) {
        do {
          fVar18 = fVar11;
          fVar14 = fVar8;
          fVar8 = *pfVar3;
          fVar11 = (((fVar8 * unaff_XMM7_Da + fVar14 * unaff_XMM8_Da + fVar13 * unaff_XMM9_Da) -
                    fVar18 * unaff_XMM14_Da) - fVar17 * unaff_XMM15_Da) * unaff_XMM13_Da;
          *(float *)((longlong)pfVar3 + lVar4) = fVar11;
          uVar1 = uVar1 - 1;
          pfVar3 = pfVar3 + param_3;
          fVar13 = fVar14;
          fVar17 = fVar18;
        } while (uVar1 != 0);
      }
      pfVar5[-1] = fVar8;
      unaff_RSI = unaff_RSI + 1;
      *pfVar5 = fVar14;
      pfVar5[0x3f] = fVar11;
      pfVar5[0x40] = fVar18;
      pfVar5 = pfVar5 + 2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}



undefined8 FUN_180799b79(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  float *pfVar1;
  int iVar2;
  longlong unaff_RBX;
  float *pfVar3;
  int unaff_EBP;
  float *unaff_RSI;
  float *unaff_RDI;
  longlong lVar4;
  ulonglong uVar5;
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
  float fVar18;
  float fVar19;
  float fVar20;
  float unaff_XMM7_Da;
  float fVar21;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float fVar22;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float fStackX_20;
  float fStackX_24;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float in_stack_00000088;
  float fStack000000000000008c;
  float in_stack_00000090;
  float fStack0000000000000094;
  float fStack0000000000000098;
  float fStack000000000000009c;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  float in_stack_00000178;
  
  iVar2 = (int)param_3;
  if (iVar2 == 2) {
    fVar6 = *(float *)(unaff_RBX + 0x230);
    fVar12 = *(float *)(unaff_RBX + 0x328);
    fVar7 = *(float *)(unaff_RBX + 0x330);
    fVar16 = *(float *)(unaff_RBX + 0x228);
    fVar11 = *(float *)(unaff_RBX + 0x22c);
    fStack0000000000000058 = *(float *)(unaff_RBX + 0x234);
    fVar15 = *(float *)(unaff_RBX + 0x32c);
    fStackX_20 = *(float *)(unaff_RBX + 0x334);
    fVar17 = fVar11;
    fVar8 = fStack0000000000000058;
    fVar9 = fVar15;
    fVar10 = fStackX_20;
    if (unaff_EBP != 0) {
      do {
        fStack0000000000000058 = fVar6;
        fStackX_20 = fVar7;
        fVar11 = fVar16;
        fVar15 = fVar12;
        fVar16 = *unaff_RSI;
        fVar6 = unaff_RSI[1];
        unaff_RSI = unaff_RSI + 2;
        fVar12 = (((fVar16 * unaff_XMM7_Da + fVar11 * unaff_XMM8_Da + fVar17 * unaff_XMM9_Da) -
                  fVar15 * unaff_XMM14_Da) - fVar9 * unaff_XMM15_Da) * unaff_XMM13_Da;
        *unaff_RDI = fVar12;
        fVar7 = (((fVar6 * unaff_XMM7_Da + fStack0000000000000058 * unaff_XMM8_Da +
                  fVar8 * unaff_XMM9_Da) - fStackX_20 * unaff_XMM14_Da) - fVar10 * unaff_XMM15_Da) *
                unaff_XMM13_Da;
        unaff_RDI[1] = fVar7;
        unaff_RDI = unaff_RDI + 2;
        unaff_EBP = unaff_EBP + -1;
        fVar17 = fVar11;
        fVar8 = fStack0000000000000058;
        fVar9 = fVar15;
        fVar10 = fStackX_20;
      } while (unaff_EBP != 0);
    }
    *(float *)(unaff_RBX + 0x228) = fVar16;
    *(float *)(unaff_RBX + 0x230) = fVar6;
    *(float *)(unaff_RBX + 0x22c) = fVar11;
    *(float *)(unaff_RBX + 0x234) = fStack0000000000000058;
    *(float *)(unaff_RBX + 0x328) = fVar12;
    *(float *)(unaff_RBX + 0x330) = fVar7;
    *(float *)(unaff_RBX + 0x32c) = fVar15;
    *(float *)(unaff_RBX + 0x334) = fStackX_20;
  }
  else if (iVar2 == 6) {
    fStackX_20 = *(float *)(unaff_RBX + 0x23c);
    fStack0000000000000068 = *(float *)(unaff_RBX + 0x244);
    fStack0000000000000064 = *(float *)(unaff_RBX + 0x24c);
    fStack0000000000000060 = *(float *)(unaff_RBX + 0x254);
    fStack0000000000000080 = *(float *)(unaff_RBX + 0x334);
    fStack000000000000007c = *(float *)(unaff_RBX + 0x33c);
    fStack0000000000000078 = *(float *)(unaff_RBX + 0x344);
    fStack0000000000000074 = *(float *)(unaff_RBX + 0x34c);
    fStack0000000000000070 = *(float *)(unaff_RBX + 0x354);
    fStack0000000000000058 = *(float *)(unaff_RBX + 0x234);
    fStack0000000000000084 = *(float *)(unaff_RBX + 0x32c);
    fVar6 = *(float *)(unaff_RBX + 0x22c);
    fStack0000000000000028 = *(float *)(unaff_RBX + 0x228);
    fStack000000000000002c = *(float *)(unaff_RBX + 0x230);
    fStack0000000000000030 = *(float *)(unaff_RBX + 0x238);
    fStack0000000000000034 = *(float *)(unaff_RBX + 0x240);
    fStack0000000000000038 = *(float *)(unaff_RBX + 0x248);
    fStack000000000000003c = *(float *)(unaff_RBX + 0x250);
    fStack0000000000000040 = *(float *)(unaff_RBX + 0x328);
    fStack0000000000000044 = *(float *)(unaff_RBX + 0x330);
    fStack0000000000000048 = *(float *)(unaff_RBX + 0x338);
    fStack000000000000004c = *(float *)(unaff_RBX + 0x340);
    fStack0000000000000050 = *(float *)(unaff_RBX + 0x348);
    fStack0000000000000054 = *(float *)(unaff_RBX + 0x350);
    if (unaff_EBP != 0) {
      pfVar3 = unaff_RDI + 2;
      pfVar1 = unaff_RSI + 2;
      do {
        fVar12 = pfVar1[-2];
        fVar7 = pfVar1[-1];
        fVar16 = *pfVar1;
        fVar11 = pfVar1[1];
        fVar15 = pfVar1[2];
        fVar17 = pfVar1[3];
        fVar22 = (((fVar12 * fStackX_24 + fStack0000000000000028 * fStack000000000000005c +
                   fVar6 * in_stack_00000178) - fStack0000000000000040 * unaff_XMM14_Da) -
                 fStack0000000000000084 * unaff_XMM15_Da) * unaff_XMM13_Da;
        fVar18 = (((fVar7 * fStackX_24 + fStack000000000000002c * fStack000000000000005c +
                   fStack0000000000000058 * in_stack_00000178) -
                  fStack0000000000000044 * unaff_XMM14_Da) - fStack0000000000000080 * unaff_XMM15_Da
                 ) * unaff_XMM13_Da;
        fVar13 = (((fVar16 * fStackX_24 + fStack0000000000000030 * fStack000000000000005c +
                   fStackX_20 * in_stack_00000178) - fStack0000000000000048 * unaff_XMM14_Da) -
                 fStack000000000000007c * unaff_XMM15_Da) * unaff_XMM13_Da;
        fVar10 = (((fVar11 * fStackX_24 + fStack0000000000000034 * fStack000000000000005c +
                   fStack0000000000000068 * in_stack_00000178) -
                  fStack000000000000004c * unaff_XMM14_Da) - fStack0000000000000078 * unaff_XMM15_Da
                 ) * unaff_XMM13_Da;
        *pfVar3 = fVar13;
        fVar9 = (((fVar15 * fStackX_24 + fStack0000000000000038 * fStack000000000000005c +
                  fStack0000000000000064 * in_stack_00000178) -
                 fStack0000000000000050 * unaff_XMM14_Da) - fStack0000000000000074 * unaff_XMM15_Da)
                * unaff_XMM13_Da;
        *(float *)((longlong)unaff_RDI + (-8 - (longlong)unaff_RSI) + (longlong)pfVar1) = fVar22;
        pfVar1 = pfVar1 + 6;
        pfVar3[-1] = fVar18;
        pfVar3[1] = fVar10;
        pfVar3[2] = fVar9;
        fStackX_20 = fStack0000000000000030;
        fStack0000000000000068 = fStack0000000000000034;
        fStack0000000000000064 = fStack0000000000000038;
        fVar8 = (((fVar17 * fStackX_24 + fStack000000000000003c * fStack000000000000005c +
                  fStack0000000000000060 * in_stack_00000178) -
                 fStack0000000000000054 * unaff_XMM14_Da) - fStack0000000000000070 * unaff_XMM15_Da)
                * unaff_XMM13_Da;
        pfVar3[3] = fVar8;
        pfVar3 = pfVar3 + 6;
        fStack0000000000000060 = fStack000000000000003c;
        fStack0000000000000058 = fStack000000000000002c;
        fStack0000000000000084 = fStack0000000000000040;
        fStack0000000000000080 = fStack0000000000000044;
        fStack000000000000007c = fStack0000000000000048;
        fStack0000000000000078 = fStack000000000000004c;
        fStack0000000000000074 = fStack0000000000000050;
        fStack0000000000000070 = fStack0000000000000054;
        unaff_EBP = unaff_EBP + -1;
        fVar6 = fStack0000000000000028;
        unaff_XMM14_Da = in_stack_00000088;
        fStack0000000000000028 = fVar12;
        fStack000000000000002c = fVar7;
        fStack0000000000000030 = fVar16;
        fStack0000000000000034 = fVar11;
        fStack0000000000000038 = fVar15;
        fStack000000000000003c = fVar17;
        fStack0000000000000040 = fVar22;
        fStack0000000000000044 = fVar18;
        fStack0000000000000048 = fVar13;
        fStack000000000000004c = fVar10;
        fStack0000000000000050 = fVar9;
        fStack0000000000000054 = fVar8;
      } while (unaff_EBP != 0);
    }
    *(float *)(unaff_RBX + 0x234) = fStack0000000000000058;
    *(float *)(unaff_RBX + 0x328) = fStack0000000000000040;
    *(float *)(unaff_RBX + 0x330) = fStack0000000000000044;
    *(float *)(unaff_RBX + 0x338) = fStack0000000000000048;
    *(float *)(unaff_RBX + 0x340) = fStack000000000000004c;
    *(float *)(unaff_RBX + 0x228) = fStack0000000000000028;
    *(float *)(unaff_RBX + 0x240) = fStack0000000000000034;
    *(float *)(unaff_RBX + 0x348) = fStack0000000000000050;
    *(float *)(unaff_RBX + 0x230) = fStack000000000000002c;
    *(float *)(unaff_RBX + 0x248) = fStack0000000000000038;
    *(float *)(unaff_RBX + 0x350) = fStack0000000000000054;
    *(float *)(unaff_RBX + 0x238) = fStack0000000000000030;
    *(float *)(unaff_RBX + 0x250) = fStack000000000000003c;
    *(float *)(unaff_RBX + 0x22c) = fVar6;
    *(float *)(unaff_RBX + 0x23c) = fStackX_20;
    *(float *)(unaff_RBX + 0x244) = fStack0000000000000068;
    *(float *)(unaff_RBX + 0x24c) = fStack0000000000000064;
    *(float *)(unaff_RBX + 0x254) = fStack0000000000000060;
    *(float *)(unaff_RBX + 0x32c) = fStack0000000000000084;
    *(float *)(unaff_RBX + 0x334) = fStack0000000000000080;
    *(float *)(unaff_RBX + 0x33c) = fStack000000000000007c;
    *(float *)(unaff_RBX + 0x344) = fStack0000000000000078;
    *(float *)(unaff_RBX + 0x34c) = fStack0000000000000074;
    *(float *)(unaff_RBX + 0x354) = fStack0000000000000070;
  }
  else if (iVar2 == 8) {
    fStack0000000000000070 = *(float *)(unaff_RBX + 0x23c);
    fStack0000000000000074 = *(float *)(unaff_RBX + 0x244);
    fStack0000000000000078 = *(float *)(unaff_RBX + 0x24c);
    fStack000000000000007c = *(float *)(unaff_RBX + 0x254);
    fStack0000000000000080 = *(float *)(unaff_RBX + 0x25c);
    fStack0000000000000084 = *(float *)(unaff_RBX + 0x264);
    fStack0000000000000094 = *(float *)(unaff_RBX + 0x32c);
    fStack0000000000000098 = *(float *)(unaff_RBX + 0x334);
    fStack000000000000009c = *(float *)(unaff_RBX + 0x33c);
    fStack00000000000000a0 = *(float *)(unaff_RBX + 0x344);
    fStack00000000000000a4 = *(float *)(unaff_RBX + 0x34c);
    fStack00000000000000a8 = *(float *)(unaff_RBX + 0x354);
    fStack00000000000000ac = *(float *)(unaff_RBX + 0x35c);
    fStack0000000000000058 = *(float *)(unaff_RBX + 0x364);
    fStack000000000000006c = *(float *)(unaff_RBX + 0x234);
    fVar6 = *(float *)(unaff_RBX + 0x22c);
    fStackX_20 = *(float *)(unaff_RBX + 0x360);
    fStack0000000000000028 = *(float *)(unaff_RBX + 0x338);
    fStack000000000000002c = *(float *)(unaff_RBX + 0x330);
    fStack0000000000000030 = *(float *)(unaff_RBX + 0x328);
    fStack0000000000000034 = *(float *)(unaff_RBX + 0x260);
    fStack0000000000000038 = *(float *)(unaff_RBX + 600);
    fStack000000000000003c = *(float *)(unaff_RBX + 0x250);
    fStack0000000000000040 = *(float *)(unaff_RBX + 0x248);
    fStack0000000000000044 = *(float *)(unaff_RBX + 0x240);
    fStack0000000000000048 = *(float *)(unaff_RBX + 0x238);
    fStack000000000000004c = *(float *)(unaff_RBX + 0x230);
    fStack0000000000000050 = *(float *)(unaff_RBX + 0x228);
    fStack0000000000000060 = *(float *)(unaff_RBX + 0x348);
    fStack0000000000000064 = *(float *)(unaff_RBX + 0x350);
    fStack0000000000000068 = *(float *)(unaff_RBX + 0x358);
    fStack000000000000008c = *(float *)(unaff_RBX + 0x340);
    if (unaff_EBP != 0) {
      pfVar3 = unaff_RDI + 2;
      pfVar1 = unaff_RSI + 2;
      do {
        fVar12 = pfVar1[-2];
        fVar7 = pfVar1[-1];
        fVar16 = *pfVar1;
        fVar11 = pfVar1[1];
        fVar15 = pfVar1[2];
        fVar17 = pfVar1[3];
        fVar8 = pfVar1[4];
        fVar9 = pfVar1[5];
        fVar10 = (((fVar12 * fStackX_24 + fStack0000000000000050 * fStack000000000000005c +
                   fVar6 * in_stack_00000178) - fStack0000000000000030 * in_stack_00000088) -
                 fStack0000000000000094 * fStack0000000000000054) * in_stack_00000090;
        fVar21 = (((fVar7 * fStackX_24 + fStack000000000000004c * fStack000000000000005c +
                   fStack000000000000006c * in_stack_00000178) -
                  fStack000000000000002c * in_stack_00000088) -
                 fStack0000000000000098 * fStack0000000000000054) * in_stack_00000090;
        fVar20 = (((fVar16 * fStackX_24 + fStack0000000000000048 * fStack000000000000005c +
                   fStack0000000000000070 * in_stack_00000178) -
                  fStack0000000000000028 * in_stack_00000088) -
                 fStack000000000000009c * fStack0000000000000054) * in_stack_00000090;
        fVar19 = (((fVar11 * fStackX_24 + fStack0000000000000044 * fStack000000000000005c +
                   fStack0000000000000074 * in_stack_00000178) -
                  fStack000000000000008c * in_stack_00000088) -
                 fStack00000000000000a0 * fStack0000000000000054) * in_stack_00000090;
        fVar14 = (((fVar15 * fStackX_24 + fStack0000000000000040 * fStack000000000000005c +
                   fStack0000000000000078 * in_stack_00000178) -
                  fStack0000000000000060 * in_stack_00000088) -
                 fStack00000000000000a4 * fStack0000000000000054) * in_stack_00000090;
        fVar22 = (((fVar17 * fStackX_24 + fStack000000000000003c * fStack000000000000005c +
                   fStack000000000000007c * in_stack_00000178) -
                  fStack0000000000000064 * in_stack_00000088) -
                 fStack00000000000000a8 * fStack0000000000000054) * in_stack_00000090;
        fVar18 = (((fVar8 * fStackX_24 + fStack0000000000000038 * fStack000000000000005c +
                   fStack0000000000000080 * in_stack_00000178) -
                  fStack0000000000000068 * in_stack_00000088) -
                 fStack00000000000000ac * fStack0000000000000054) * in_stack_00000090;
        fStack000000000000006c = fStack000000000000004c;
        fVar13 = (((fVar9 * fStackX_24 + fStack0000000000000034 * fStack000000000000005c +
                   fStack0000000000000084 * in_stack_00000178) - fStackX_20 * in_stack_00000088) -
                 fStack0000000000000058 * fStack0000000000000054) * in_stack_00000090;
        fStack0000000000000070 = fStack0000000000000048;
        fStack0000000000000074 = fStack0000000000000044;
        fStack0000000000000078 = fStack0000000000000040;
        fStack000000000000007c = fStack000000000000003c;
        fStack0000000000000080 = fStack0000000000000038;
        fStack0000000000000084 = fStack0000000000000034;
        fStack0000000000000094 = fStack0000000000000030;
        fStack0000000000000098 = fStack000000000000002c;
        pfVar3[-1] = fVar21;
        pfVar3[4] = fVar18;
        fStack0000000000000058 = fStackX_20;
        *(float *)((longlong)pfVar1 + (longlong)unaff_RDI + (-8 - (longlong)unaff_RSI)) = fVar10;
        pfVar1 = pfVar1 + 8;
        *pfVar3 = fVar20;
        pfVar3[1] = fVar19;
        pfVar3[2] = fVar14;
        pfVar3[3] = fVar22;
        pfVar3[5] = fVar13;
        pfVar3 = pfVar3 + 8;
        fStack000000000000009c = fStack0000000000000028;
        fStack00000000000000a0 = fStack000000000000008c;
        fStack00000000000000a4 = fStack0000000000000060;
        fStack00000000000000a8 = fStack0000000000000064;
        fStack00000000000000ac = fStack0000000000000068;
        unaff_EBP = unaff_EBP + -1;
        fVar6 = fStack0000000000000050;
        fStackX_20 = fVar13;
        fStack0000000000000028 = fVar20;
        fStack000000000000002c = fVar21;
        fStack0000000000000030 = fVar10;
        fStack0000000000000034 = fVar9;
        fStack0000000000000038 = fVar8;
        fStack000000000000003c = fVar17;
        fStack0000000000000040 = fVar15;
        fStack0000000000000044 = fVar11;
        fStack0000000000000048 = fVar16;
        fStack000000000000004c = fVar7;
        fStack0000000000000050 = fVar12;
        fStack0000000000000060 = fVar14;
        fStack0000000000000064 = fVar22;
        fStack0000000000000068 = fVar18;
        fStack000000000000008c = fVar19;
      } while (unaff_EBP != 0);
    }
    *(float *)(unaff_RBX + 0x234) = fStack000000000000006c;
    *(float *)(unaff_RBX + 0x328) = fStack0000000000000030;
    *(float *)(unaff_RBX + 0x330) = fStack000000000000002c;
    *(float *)(unaff_RBX + 0x228) = fStack0000000000000050;
    *(float *)(unaff_RBX + 0x338) = fStack0000000000000028;
    *(float *)(unaff_RBX + 0x230) = fStack000000000000004c;
    *(float *)(unaff_RBX + 0x340) = fStack000000000000008c;
    *(float *)(unaff_RBX + 0x238) = fStack0000000000000048;
    *(float *)(unaff_RBX + 0x348) = fStack0000000000000060;
    *(float *)(unaff_RBX + 0x240) = fStack0000000000000044;
    *(float *)(unaff_RBX + 0x350) = fStack0000000000000064;
    *(float *)(unaff_RBX + 0x248) = fStack0000000000000040;
    *(float *)(unaff_RBX + 0x358) = fStack0000000000000068;
    *(float *)(unaff_RBX + 0x250) = fStack000000000000003c;
    *(float *)(unaff_RBX + 0x360) = fStackX_20;
    *(float *)(unaff_RBX + 600) = fStack0000000000000038;
    *(float *)(unaff_RBX + 0x364) = fStack0000000000000058;
    *(float *)(unaff_RBX + 0x260) = fStack0000000000000034;
    *(float *)(unaff_RBX + 0x22c) = fVar6;
    *(float *)(unaff_RBX + 0x23c) = fStack0000000000000070;
    *(float *)(unaff_RBX + 0x244) = fStack0000000000000074;
    *(float *)(unaff_RBX + 0x24c) = fStack0000000000000078;
    *(float *)(unaff_RBX + 0x254) = fStack000000000000007c;
    *(float *)(unaff_RBX + 0x25c) = fStack0000000000000080;
    *(float *)(unaff_RBX + 0x264) = fStack0000000000000084;
    *(float *)(unaff_RBX + 0x32c) = fStack0000000000000094;
    *(float *)(unaff_RBX + 0x334) = fStack0000000000000098;
    *(float *)(unaff_RBX + 0x33c) = fStack000000000000009c;
    *(float *)(unaff_RBX + 0x344) = fStack00000000000000a0;
    *(float *)(unaff_RBX + 0x34c) = fStack00000000000000a4;
    *(float *)(unaff_RBX + 0x354) = fStack00000000000000a8;
    *(float *)(unaff_RBX + 0x35c) = fStack00000000000000ac;
  }
  else if (0 < iVar2) {
    pfVar3 = (float *)(unaff_RBX + 0x22c);
    uVar5 = param_3 & 0xffffffff;
    lVar4 = (longlong)unaff_RDI - (longlong)unaff_RSI;
    do {
      fVar6 = pfVar3[-1];
      fVar12 = *pfVar3;
      fVar7 = pfVar3[0x3f];
      fVar16 = pfVar3[0x40];
      pfVar1 = unaff_RSI;
      fVar11 = fVar12;
      fVar15 = fVar16;
      iVar2 = unaff_EBP;
      if (unaff_EBP != 0) {
        do {
          fVar16 = fVar7;
          fVar12 = fVar6;
          fVar6 = *pfVar1;
          fVar7 = (((fVar6 * unaff_XMM7_Da + fVar12 * unaff_XMM8_Da + fVar11 * unaff_XMM9_Da) -
                   fVar16 * unaff_XMM14_Da) - fVar15 * unaff_XMM15_Da) * unaff_XMM13_Da;
          *(float *)((longlong)pfVar1 + lVar4) = fVar7;
          iVar2 = iVar2 + -1;
          pfVar1 = pfVar1 + param_3;
          fVar11 = fVar12;
          fVar15 = fVar16;
        } while (iVar2 != 0);
      }
      pfVar3[-1] = fVar6;
      unaff_RSI = unaff_RSI + 1;
      *pfVar3 = fVar12;
      pfVar3[0x3f] = fVar7;
      pfVar3[0x40] = fVar16;
      pfVar3 = pfVar3 + 2;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return 0;
}



undefined8 FUN_18079ac07(void)

{
  return 0;
}



undefined8 FUN_18079ac56(void)

{
  return 0;
}







