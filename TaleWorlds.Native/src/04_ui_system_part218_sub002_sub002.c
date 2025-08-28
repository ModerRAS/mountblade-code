#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part218_sub002_sub002.c - 1 个函数

// 函数: void FUN_180791e20(void)
void FUN_180791e20(void)

{
                    // WARNING: Subroutine does not return
  memset(0x180c10ab4,0,0x5c);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180791f70(longlong param_1,float *param_2,longlong param_3,uint param_4,uint param_5)

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
  undefined4 uVar15;
  float *pfVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  float *pfVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
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
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fStack_118;
  
  lVar23 = (longlong)(int)param_5;
  if (param_5 == 1) {
    if (param_4 != 0) {
      pfVar16 = (float *)(param_3 + -4);
      do {
        fVar24 = *(float *)(param_1 + 0x22c);
        fVar29 = _DAT_180be2d0c + *param_2;
        fVar1 = *(float *)(param_1 + 0x234);
        pfVar16 = pfVar16 + 1;
        param_2 = param_2 + 1;
        fVar2 = *(float *)(param_1 + 0x230);
        _DAT_180be2d0c = -_DAT_180be2d0c;
        fVar25 = *(float *)(param_1 + 0x238);
        fVar29 = (fVar29 * *(float *)(param_1 + 0x42c) - fVar24 * *(float *)(param_1 + 0x430)) -
                 fVar2 * *(float *)(param_1 + 0x434);
        *(float *)(param_1 + 0x230) = fVar24;
        *(float *)(param_1 + 0x238) = fVar1;
        *(float *)(param_1 + 0x22c) = fVar29;
        fVar29 = (((fVar2 * *(float *)(param_1 + 0x43c) + fVar24 * *(float *)(param_1 + 0x438)) -
                  fVar1 * *(float *)(param_1 + 0x440)) - fVar25 * *(float *)(param_1 + 0x444)) +
                 fVar29;
        *(float *)(param_1 + 0x234) = fVar29;
        *pfVar16 = fVar29 + fVar25 * *(float *)(param_1 + 0x44c) +
                            fVar1 * *(float *)(param_1 + 0x448);
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
  }
  else if (param_5 == 2) {
    if (param_4 != 0) {
      fStack_118 = _DAT_180be2d0c;
      pfVar16 = (float *)(param_3 + -4);
      do {
        fVar24 = *param_2;
        fVar43 = fStack_118 + param_2[1];
        param_2 = param_2 + 2;
        fVar1 = *(float *)(param_1 + 0x22c);
        fVar2 = *(float *)(param_1 + 0x44c);
        fVar25 = *(float *)(param_1 + 0x448);
        fVar29 = *(float *)(param_1 + 0x230);
        fVar26 = *(float *)(param_1 + 0x234);
        fVar42 = *(float *)(param_1 + 0x23c);
        fVar3 = *(float *)(param_1 + 0x238);
        fVar28 = *(float *)(param_1 + 0x244);
        fVar4 = *(float *)(param_1 + 0x248);
        fVar36 = ((fStack_118 + fVar24) * *(float *)(param_1 + 0x42c) -
                 fVar1 * *(float *)(param_1 + 0x430)) - fVar29 * *(float *)(param_1 + 0x434);
        fVar24 = *(float *)(param_1 + 0x240);
        fStack_118 = -fStack_118;
        _DAT_180be2d0c = fStack_118;
        *(float *)(param_1 + 0x230) = fVar1;
        fVar43 = (fVar43 * *(float *)(param_1 + 0x42c) - fVar42 * *(float *)(param_1 + 0x430)) -
                 fVar24 * *(float *)(param_1 + 0x434);
        *(float *)(param_1 + 0x238) = fVar26;
        *(float *)(param_1 + 0x22c) = fVar36;
        fVar36 = (((fVar29 * *(float *)(param_1 + 0x43c) + fVar1 * *(float *)(param_1 + 0x438)) -
                  fVar26 * *(float *)(param_1 + 0x440)) - fVar3 * *(float *)(param_1 + 0x444)) +
                 fVar36;
        *(float *)(param_1 + 0x234) = fVar36;
        *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_1 + 0x23c);
        *(float *)(param_1 + 0x23c) = fVar43;
        *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_1 + 0x244);
        fVar43 = (((fVar24 * *(float *)(param_1 + 0x43c) + fVar42 * *(float *)(param_1 + 0x438)) -
                  fVar28 * *(float *)(param_1 + 0x440)) - fVar4 * *(float *)(param_1 + 0x444)) +
                 fVar43;
        *(float *)(param_1 + 0x244) = fVar43;
        pfVar16[1] = fVar25 * fVar26 + fVar3 * fVar2 + fVar36;
        pfVar16[2] = fVar28 * fVar25 + fVar4 * fVar2 + fVar43;
        param_4 = param_4 - 1;
        pfVar16 = pfVar16 + 2;
      } while (param_4 != 0);
    }
  }
  else if (param_5 == 6) {
    if (param_4 != 0) {
      fStack_118 = _DAT_180be2d0c;
      param_2 = param_2 + 2;
      pfVar16 = (float *)(param_3 + -0x14);
      do {
        fVar24 = *(float *)(param_1 + 0x42c);
        fVar1 = *(float *)(param_1 + 0x430);
        fVar2 = *(float *)(param_1 + 0x434);
        fVar25 = *(float *)(param_1 + 0x230);
        fVar29 = *(float *)(param_1 + 0x438);
        fVar26 = *(float *)(param_1 + 0x440);
        fVar42 = *(float *)(param_1 + 0x444);
        fVar30 = ((fStack_118 + param_2[-2]) * fVar24 - *(float *)(param_1 + 0x22c) * fVar1) -
                 fVar25 * fVar2;
        fVar31 = ((fStack_118 + param_2[-1]) * fVar24 - *(float *)(param_1 + 0x23c) * fVar1) -
                 *(float *)(param_1 + 0x240) * fVar2;
        fVar32 = ((fStack_118 + *param_2) * fVar24 - *(float *)(param_1 + 0x24c) * fVar1) -
                 *(float *)(param_1 + 0x250) * fVar2;
        fVar33 = ((fStack_118 + param_2[1]) * fVar24 - *(float *)(param_1 + 0x25c) * fVar1) -
                 *(float *)(param_1 + 0x260) * fVar2;
        fVar3 = *(float *)(param_1 + 0x43c);
        fVar34 = ((fStack_118 + param_2[2]) * fVar24 - *(float *)(param_1 + 0x26c) * fVar1) -
                 *(float *)(param_1 + 0x270) * fVar2;
        fVar35 = ((fStack_118 + param_2[3]) * fVar24 - *(float *)(param_1 + 0x27c) * fVar1) -
                 *(float *)(param_1 + 0x280) * fVar2;
        fVar24 = *(float *)(param_1 + 0x238);
        fVar1 = *(float *)(param_1 + 0x244);
        fVar2 = *(float *)(param_1 + 0x248);
        fVar28 = *(float *)(param_1 + 0x254);
        fVar4 = *(float *)(param_1 + 0x274);
        fVar36 = *(float *)(param_1 + 0x278);
        fVar43 = *(float *)(param_1 + 600);
        fVar5 = *(float *)(param_1 + 0x268);
        fVar6 = *(float *)(param_1 + 0x264);
        fVar7 = *(float *)(param_1 + 0x284);
        fVar8 = *(float *)(param_1 + 0x27c);
        fVar9 = *(float *)(param_1 + 0x288);
        fVar10 = *(float *)(param_1 + 0x280);
        fVar11 = *(float *)(param_1 + 0x44c);
        fVar12 = *(float *)(param_1 + 0x238);
        fVar13 = *(float *)(param_1 + 0x448);
        fVar14 = *(float *)(param_1 + 0x234);
        param_2 = param_2 + 6;
        fStack_118 = -fStack_118;
        _DAT_180be2d0c = fStack_118;
        *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_1 + 0x22c);
        *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_1 + 0x234);
        fVar27 = (((fVar3 * fVar25 + fVar29 * *(float *)(param_1 + 0x22c)) -
                  *(float *)(param_1 + 0x234) * fVar26) - fVar24 * fVar42) + fVar30;
        *(float *)(param_1 + 0x22c) = fVar30;
        fVar30 = (((fVar3 * *(float *)(param_1 + 0x240) + fVar29 * *(float *)(param_1 + 0x23c)) -
                  fVar1 * fVar26) - fVar2 * fVar42) + fVar31;
        *(float *)(param_1 + 0x234) = fVar27;
        uVar15 = *(undefined4 *)(param_1 + 0x23c);
        *(float *)(param_1 + 0x23c) = fVar31;
        *(undefined4 *)(param_1 + 0x240) = uVar15;
        fVar25 = (((fVar3 * *(float *)(param_1 + 0x250) + fVar29 * *(float *)(param_1 + 0x24c)) -
                  fVar28 * fVar26) - fVar43 * fVar42) + fVar32;
        uVar15 = *(undefined4 *)(param_1 + 0x244);
        *(float *)(param_1 + 0x244) = fVar30;
        *(undefined4 *)(param_1 + 0x248) = uVar15;
        uVar15 = *(undefined4 *)(param_1 + 0x24c);
        *(float *)(param_1 + 0x24c) = fVar32;
        *(undefined4 *)(param_1 + 0x250) = uVar15;
        fVar24 = (((fVar3 * *(float *)(param_1 + 0x260) + fVar29 * *(float *)(param_1 + 0x25c)) -
                  fVar6 * fVar26) - fVar5 * fVar42) + fVar33;
        uVar15 = *(undefined4 *)(param_1 + 0x254);
        *(float *)(param_1 + 0x254) = fVar25;
        *(undefined4 *)(param_1 + 600) = uVar15;
        uVar15 = *(undefined4 *)(param_1 + 0x25c);
        *(float *)(param_1 + 0x25c) = fVar33;
        *(undefined4 *)(param_1 + 0x260) = uVar15;
        fVar31 = (((fVar3 * *(float *)(param_1 + 0x270) + fVar29 * *(float *)(param_1 + 0x26c)) -
                  fVar4 * fVar26) - fVar36 * fVar42) + fVar34;
        uVar15 = *(undefined4 *)(param_1 + 0x264);
        *(float *)(param_1 + 0x264) = fVar24;
        *(undefined4 *)(param_1 + 0x268) = uVar15;
        *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_1 + 0x26c);
        uVar15 = *(undefined4 *)(param_1 + 0x274);
        *(float *)(param_1 + 0x26c) = fVar34;
        *(float *)(param_1 + 0x274) = fVar31;
        *(undefined4 *)(param_1 + 0x278) = uVar15;
        *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_1 + 0x27c);
        *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_1 + 0x284);
        *(float *)(param_1 + 0x27c) = fVar35;
        fVar35 = (((fVar3 * fVar10 + fVar29 * fVar8) - fVar7 * fVar26) - fVar9 * fVar42) + fVar35;
        *(float *)(param_1 + 0x284) = fVar35;
        pfVar16[5] = fVar27 + fVar11 * fVar12 + fVar13 * fVar14;
        pfVar16[6] = fVar30 + fVar11 * fVar2 + fVar13 * fVar1;
        pfVar16[7] = fVar25 + fVar11 * fVar43 + fVar13 * fVar28;
        pfVar16[8] = fVar24 + fVar11 * fVar5 + fVar13 * fVar6;
        pfVar16[10] = fVar35 + fVar11 * fVar9 + fVar13 * fVar7;
        pfVar16[9] = fVar31 + fVar11 * fVar36 + fVar13 * fVar4;
        param_4 = param_4 - 1;
        pfVar16 = pfVar16 + 6;
      } while (param_4 != 0);
    }
  }
  else if (param_5 == 8) {
    if (param_4 != 0) {
      param_2 = param_2 + 2;
      pfVar16 = (float *)(param_3 + -0x1c);
      fVar24 = _DAT_180be2d0c;
      do {
        fVar1 = *(float *)(param_1 + 0x42c);
        fVar2 = *(float *)(param_1 + 0x430);
        fVar25 = *(float *)(param_1 + 0x434);
        fVar29 = *(float *)(param_1 + 0x23c);
        fVar35 = ((fVar24 + param_2[-2]) * fVar1 - *(float *)(param_1 + 0x22c) * fVar2) -
                 fVar25 * *(float *)(param_1 + 0x230);
        fVar26 = *(float *)(param_1 + 0x240);
        fVar32 = ((fVar24 + param_2[-1]) * fVar1 - fVar29 * fVar2) - fVar26 * fVar25;
        fVar34 = ((fVar24 + *param_2) * fVar1 - *(float *)(param_1 + 0x24c) * fVar2) -
                 *(float *)(param_1 + 0x250) * fVar25;
        fVar37 = ((fVar24 + param_2[1]) * fVar1 - *(float *)(param_1 + 0x25c) * fVar2) -
                 *(float *)(param_1 + 0x260) * fVar25;
        fVar38 = ((fVar24 + param_2[2]) * fVar1 - *(float *)(param_1 + 0x26c) * fVar2) -
                 *(float *)(param_1 + 0x270) * fVar25;
        fVar39 = ((fVar24 + param_2[3]) * fVar1 - *(float *)(param_1 + 0x27c) * fVar2) -
                 *(float *)(param_1 + 0x280) * fVar25;
        fVar40 = ((fVar24 + param_2[4]) * fVar1 - *(float *)(param_1 + 0x28c) * fVar2) -
                 *(float *)(param_1 + 0x290) * fVar25;
        fVar42 = *(float *)(param_1 + 0x438);
        fVar3 = *(float *)(param_1 + 0x440);
        fVar28 = *(float *)(param_1 + 0x444);
        fVar4 = *(float *)(param_1 + 0x43c);
        fVar36 = *(float *)(param_1 + 0x238);
        fVar43 = *(float *)(param_1 + 0x248);
        fVar41 = ((fVar24 + param_2[5]) * fVar1 - *(float *)(param_1 + 0x29c) * fVar2) -
                 *(float *)(param_1 + 0x2a0) * fVar25;
        fVar24 = *(float *)(param_1 + 600);
        fVar1 = *(float *)(param_1 + 0x244);
        fVar2 = *(float *)(param_1 + 0x278);
        fVar25 = *(float *)(param_1 + 0x254);
        fVar5 = *(float *)(param_1 + 0x268);
        fVar6 = *(float *)(param_1 + 0x264);
        fVar7 = *(float *)(param_1 + 0x274);
        fVar8 = *(float *)(param_1 + 0x288);
        fVar9 = *(float *)(param_1 + 0x284);
        fVar10 = *(float *)(param_1 + 0x294);
        fVar11 = *(float *)(param_1 + 0x298);
        fVar12 = *(float *)(param_1 + 0x2a4);
        fVar13 = *(float *)(param_1 + 0x2a8);
        fVar14 = *(float *)(param_1 + 0x448);
        fVar30 = *(float *)(param_1 + 0x44c);
        fVar27 = *(float *)(param_1 + 0x234);
        *(float *)(param_1 + 0x238) = fVar27;
        param_2 = param_2 + 8;
        _DAT_180be2d0c = -_DAT_180be2d0c;
        fVar33 = (((fVar4 * *(float *)(param_1 + 0x230) + fVar42 * *(float *)(param_1 + 0x22c)) -
                  fVar3 * *(float *)(param_1 + 0x234)) - fVar28 * fVar36) + fVar35;
        *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_1 + 0x22c);
        *(float *)(param_1 + 0x22c) = fVar35;
        *(float *)(param_1 + 0x234) = fVar33;
        *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_1 + 0x23c);
        *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_1 + 0x244);
        *(float *)(param_1 + 0x23c) = fVar32;
        fVar32 = (((fVar4 * fVar26 + fVar42 * fVar29) - fVar1 * fVar3) - fVar43 * fVar28) + fVar32;
        fVar31 = (((fVar4 * *(float *)(param_1 + 0x250) + fVar42 * *(float *)(param_1 + 0x24c)) -
                  fVar25 * fVar3) - fVar24 * fVar28) + fVar34;
        *(float *)(param_1 + 0x244) = fVar32;
        uVar15 = *(undefined4 *)(param_1 + 0x24c);
        *(float *)(param_1 + 0x24c) = fVar34;
        *(undefined4 *)(param_1 + 0x250) = uVar15;
        fVar35 = (((fVar4 * *(float *)(param_1 + 0x260) + fVar42 * *(float *)(param_1 + 0x25c)) -
                  fVar6 * fVar3) - fVar5 * fVar28) + fVar37;
        uVar15 = *(undefined4 *)(param_1 + 0x254);
        *(float *)(param_1 + 0x254) = fVar31;
        *(undefined4 *)(param_1 + 600) = uVar15;
        uVar15 = *(undefined4 *)(param_1 + 0x25c);
        *(float *)(param_1 + 0x25c) = fVar37;
        *(undefined4 *)(param_1 + 0x260) = uVar15;
        fVar26 = (((fVar4 * *(float *)(param_1 + 0x270) + fVar42 * *(float *)(param_1 + 0x26c)) -
                  fVar7 * fVar3) - fVar28 * fVar2) + fVar38;
        uVar15 = *(undefined4 *)(param_1 + 0x264);
        *(float *)(param_1 + 0x264) = fVar35;
        *(undefined4 *)(param_1 + 0x268) = uVar15;
        uVar15 = *(undefined4 *)(param_1 + 0x26c);
        *(float *)(param_1 + 0x26c) = fVar38;
        *(undefined4 *)(param_1 + 0x270) = uVar15;
        fVar29 = (((fVar4 * *(float *)(param_1 + 0x280) + fVar42 * *(float *)(param_1 + 0x27c)) -
                  fVar3 * fVar9) - fVar28 * fVar8) + fVar39;
        uVar15 = *(undefined4 *)(param_1 + 0x274);
        *(float *)(param_1 + 0x274) = fVar26;
        *(undefined4 *)(param_1 + 0x278) = uVar15;
        uVar15 = *(undefined4 *)(param_1 + 0x27c);
        *(float *)(param_1 + 0x27c) = fVar39;
        *(undefined4 *)(param_1 + 0x280) = uVar15;
        fVar34 = (((fVar4 * *(float *)(param_1 + 0x290) + fVar42 * *(float *)(param_1 + 0x28c)) -
                  fVar3 * fVar10) - fVar28 * fVar11) + fVar40;
        uVar15 = *(undefined4 *)(param_1 + 0x284);
        *(float *)(param_1 + 0x284) = fVar29;
        *(undefined4 *)(param_1 + 0x288) = uVar15;
        uVar15 = *(undefined4 *)(param_1 + 0x28c);
        *(float *)(param_1 + 0x28c) = fVar40;
        *(undefined4 *)(param_1 + 0x290) = uVar15;
        fVar42 = (((fVar4 * *(float *)(param_1 + 0x2a0) + fVar42 * *(float *)(param_1 + 0x29c)) -
                  fVar3 * fVar12) - fVar28 * fVar13) + fVar41;
        uVar15 = *(undefined4 *)(param_1 + 0x294);
        *(float *)(param_1 + 0x294) = fVar34;
        *(undefined4 *)(param_1 + 0x298) = uVar15;
        uVar15 = *(undefined4 *)(param_1 + 0x29c);
        *(float *)(param_1 + 0x29c) = fVar41;
        *(undefined4 *)(param_1 + 0x2a0) = uVar15;
        uVar15 = *(undefined4 *)(param_1 + 0x2a4);
        *(float *)(param_1 + 0x2a4) = fVar42;
        *(undefined4 *)(param_1 + 0x2a8) = uVar15;
        pfVar16[8] = fVar1 * fVar14 + fVar43 * fVar30 + fVar32;
        pfVar16[7] = fVar36 * fVar30 + fVar27 * fVar14 + fVar33;
        pfVar16[9] = fVar25 * fVar14 + fVar24 * fVar30 + fVar31;
        pfVar16[0xe] = fVar30 * fVar13 + fVar14 * fVar12 + fVar42;
        fVar24 = _DAT_180be2d0c;
        pfVar16[10] = fVar6 * fVar14 + fVar5 * fVar30 + fVar35;
        pfVar16[0xb] = fVar7 * fVar14 + fVar30 * fVar2 + fVar26;
        pfVar16[0xc] = fVar30 * fVar8 + fVar14 * fVar9 + fVar29;
        pfVar16[0xd] = fVar30 * fVar11 + fVar14 * fVar10 + fVar34;
        param_4 = param_4 - 1;
        pfVar16 = pfVar16 + 8;
      } while (param_4 != 0);
    }
  }
  else {
    uVar19 = 0;
    if (param_5 != 0) {
      do {
        pfVar16 = param_2 + uVar19;
        pfVar20 = (float *)(param_3 + uVar19 * 4);
        iVar18 = (int)uVar19;
        if (param_4 >> 2 != 0) {
          lVar17 = (longlong)iVar18;
          uVar22 = param_4 >> 2;
          do {
            fVar28 = _DAT_180be2d08 + *pfVar16;
            fVar24 = *(float *)(param_1 + 0x22c + lVar17 * 0x10);
            fVar1 = *(float *)(param_1 + 0x230 + lVar17 * 0x10);
            fVar2 = *(float *)(param_1 + 0x430);
            fVar25 = *(float *)(param_1 + 0x42c);
            fVar29 = *(float *)(param_1 + 0x438);
            fVar26 = *(float *)(param_1 + 0x434);
            fVar42 = *(float *)(param_1 + 0x43c);
            _DAT_180be2d08 = -_DAT_180be2d08;
            *(float *)(param_1 + 0x230 + lVar17 * 0x10) = fVar24;
            fVar3 = *(float *)(param_1 + 0x234 + lVar17 * 0x10);
            fVar36 = (fVar28 * fVar25 - fVar24 * fVar2) - fVar1 * fVar26;
            *(float *)(param_1 + 0x22c + lVar17 * 0x10) = fVar36;
            fVar2 = *(float *)(param_1 + 0x440);
            fVar25 = *(float *)(param_1 + 0x238 + lVar17 * 0x10);
            fVar26 = *(float *)(param_1 + 0x44c);
            fVar28 = *(float *)(param_1 + 0x444);
            fVar4 = *(float *)(param_1 + 0x448);
            *(float *)(param_1 + 0x238 + lVar17 * 0x10) = fVar3;
            fVar24 = ((fVar24 * fVar29 + fVar36 + fVar1 * fVar42) - fVar3 * fVar2) - fVar25 * fVar28
            ;
            *(float *)(param_1 + 0x234 + lVar17 * 0x10) = fVar24;
            *pfVar20 = fVar3 * fVar4 + fVar24 + fVar25 * fVar26;
            fVar28 = _DAT_180be2d08 + pfVar16[lVar23];
            fVar24 = *(float *)(param_1 + 0x22c + lVar17 * 0x10);
            fVar1 = *(float *)(param_1 + 0x230 + lVar17 * 0x10);
            fVar2 = *(float *)(param_1 + 0x430);
            fVar25 = *(float *)(param_1 + 0x42c);
            fVar29 = *(float *)(param_1 + 0x438);
            fVar26 = *(float *)(param_1 + 0x434);
            fVar42 = *(float *)(param_1 + 0x43c);
            _DAT_180be2d08 = -_DAT_180be2d08;
            *(float *)(param_1 + 0x230 + lVar17 * 0x10) = fVar24;
            fVar3 = *(float *)(param_1 + 0x234 + lVar17 * 0x10);
            fVar36 = (fVar28 * fVar25 - fVar24 * fVar2) - fVar1 * fVar26;
            *(float *)(param_1 + 0x22c + lVar17 * 0x10) = fVar36;
            fVar2 = *(float *)(param_1 + 0x440);
            fVar25 = *(float *)(param_1 + 0x238 + lVar17 * 0x10);
            fVar26 = *(float *)(param_1 + 0x44c);
            fVar28 = *(float *)(param_1 + 0x444);
            fVar4 = *(float *)(param_1 + 0x448);
            *(float *)(param_1 + 0x238 + lVar17 * 0x10) = fVar3;
            fVar24 = ((fVar24 * fVar29 + fVar36 + fVar1 * fVar42) - fVar3 * fVar2) - fVar25 * fVar28
            ;
            *(float *)(param_1 + 0x234 + lVar17 * 0x10) = fVar24;
            pfVar20[lVar23] = fVar3 * fVar4 + fVar24 + fVar25 * fVar26;
            fVar28 = _DAT_180be2d08 + pfVar16[lVar23 * 2];
            fVar24 = *(float *)(param_1 + 0x22c + lVar17 * 0x10);
            fVar1 = *(float *)(param_1 + 0x42c);
            fVar2 = *(float *)(param_1 + 0x230 + lVar17 * 0x10);
            fVar25 = *(float *)(param_1 + 0x430);
            fVar29 = *(float *)(param_1 + 0x434);
            fVar26 = *(float *)(param_1 + 0x438);
            fVar42 = *(float *)(param_1 + 0x43c);
            _DAT_180be2d08 = -_DAT_180be2d08;
            *(float *)(param_1 + 0x230 + lVar17 * 0x10) = fVar24;
            fVar3 = *(float *)(param_1 + 0x234 + lVar17 * 0x10);
            fVar36 = (fVar28 * fVar1 - fVar24 * fVar25) - fVar2 * fVar29;
            *(float *)(param_1 + 0x22c + lVar17 * 0x10) = fVar36;
            fVar1 = *(float *)(param_1 + 0x440);
            fVar25 = *(float *)(param_1 + 0x238 + lVar17 * 0x10);
            fVar29 = *(float *)(param_1 + 0x44c);
            fVar28 = *(float *)(param_1 + 0x444);
            fVar4 = *(float *)(param_1 + 0x448);
            *(float *)(param_1 + 0x238 + lVar17 * 0x10) = fVar3;
            fVar24 = ((fVar24 * fVar26 + fVar36 + fVar2 * fVar42) - fVar3 * fVar1) - fVar25 * fVar28
            ;
            *(float *)(param_1 + 0x234 + lVar17 * 0x10) = fVar24;
            pfVar20[lVar23 * 2] = fVar3 * fVar4 + fVar24 + fVar25 * fVar29;
            fVar28 = _DAT_180be2d08 + pfVar16[lVar23 * 3];
            pfVar16 = pfVar16 + (int)(param_5 * 4);
            fVar24 = *(float *)(param_1 + 0x22c + lVar17 * 0x10);
            fVar1 = *(float *)(param_1 + 0x230 + lVar17 * 0x10);
            fVar2 = *(float *)(param_1 + 0x430);
            fVar25 = *(float *)(param_1 + 0x434);
            fVar29 = *(float *)(param_1 + 0x438);
            fVar26 = *(float *)(param_1 + 0x43c);
            fVar42 = *(float *)(param_1 + 0x42c);
            _DAT_180be2d08 = -_DAT_180be2d08;
            *(float *)(param_1 + 0x230 + lVar17 * 0x10) = fVar24;
            fVar3 = *(float *)(param_1 + 0x234 + lVar17 * 0x10);
            fVar36 = (fVar28 * fVar42 - fVar24 * fVar2) - fVar1 * fVar25;
            *(float *)(param_1 + 0x22c + lVar17 * 0x10) = fVar36;
            fVar2 = *(float *)(param_1 + 0x440);
            fVar25 = *(float *)(param_1 + 0x238 + lVar17 * 0x10);
            fVar42 = *(float *)(param_1 + 0x44c);
            fVar28 = *(float *)(param_1 + 0x444);
            fVar4 = *(float *)(param_1 + 0x448);
            *(float *)(param_1 + 0x238 + lVar17 * 0x10) = fVar3;
            fVar24 = ((fVar24 * fVar29 + fVar36 + fVar1 * fVar26) - fVar3 * fVar2) - fVar25 * fVar28
            ;
            *(float *)(param_1 + 0x234 + lVar17 * 0x10) = fVar24;
            pfVar20[lVar23 * 3] = fVar3 * fVar4 + fVar24 + fVar25 * fVar42;
            pfVar20 = pfVar20 + (int)(param_5 * 4);
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        if ((param_4 & 3) != 0) {
          lVar17 = (longlong)iVar18;
          lVar21 = (longlong)pfVar20 - (longlong)pfVar16;
          uVar22 = param_4 & 3;
          do {
            fVar28 = _DAT_180be2d08 + *pfVar16;
            fVar24 = *(float *)(param_1 + 0x22c + lVar17 * 0x10);
            fVar1 = *(float *)(param_1 + 0x230 + lVar17 * 0x10);
            fVar2 = *(float *)(param_1 + 0x430);
            fVar25 = *(float *)(param_1 + 0x434);
            fVar29 = *(float *)(param_1 + 0x438);
            fVar26 = *(float *)(param_1 + 0x43c);
            fVar42 = *(float *)(param_1 + 0x42c);
            _DAT_180be2d08 = -_DAT_180be2d08;
            *(float *)(param_1 + 0x230 + lVar17 * 0x10) = fVar24;
            fVar3 = *(float *)(param_1 + 0x234 + lVar17 * 0x10);
            fVar36 = (fVar28 * fVar42 - fVar24 * fVar2) - fVar1 * fVar25;
            *(float *)(param_1 + 0x22c + lVar17 * 0x10) = fVar36;
            fVar2 = *(float *)(param_1 + 0x440);
            fVar25 = *(float *)(param_1 + 0x238 + lVar17 * 0x10);
            fVar42 = *(float *)(param_1 + 0x44c);
            fVar28 = *(float *)(param_1 + 0x444);
            fVar4 = *(float *)(param_1 + 0x448);
            *(float *)(param_1 + 0x238 + lVar17 * 0x10) = fVar3;
            fVar24 = ((fVar24 * fVar29 + fVar36 + fVar1 * fVar26) - fVar3 * fVar2) - fVar25 * fVar28
            ;
            *(float *)(param_1 + 0x234 + lVar17 * 0x10) = fVar24;
            *(float *)((longlong)pfVar16 + lVar21) = fVar3 * fVar4 + fVar24 + fVar25 * fVar42;
            pfVar16 = pfVar16 + lVar23;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        uVar19 = (ulonglong)(iVar18 + 1U);
      } while (iVar18 + 1U < param_5);
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1807920b7(longlong param_1,undefined8 param_2,longlong param_3)

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
  undefined4 uVar15;
  longlong lVar16;
  float *pfVar17;
  uint unaff_EBX;
  int iVar18;
  ulonglong uVar19;
  float *unaff_RDI;
  float *pfVar20;
  longlong lVar21;
  uint uVar22;
  longlong unaff_R12;
  uint uVar23;
  longlong unaff_R15;
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
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  
  uVar23 = (uint)unaff_R15;
  if (uVar23 == 2) {
    if (unaff_EBX != 0) {
      pfVar17 = (float *)(param_3 + -4);
      fVar24 = _DAT_180be2d0c;
      do {
        fVar25 = *unaff_RDI;
        fVar43 = fVar24 + unaff_RDI[1];
        unaff_RDI = unaff_RDI + 2;
        fVar1 = *(float *)(param_1 + 0x22c);
        fVar2 = *(float *)(param_1 + 0x44c);
        fVar26 = *(float *)(param_1 + 0x448);
        fVar27 = *(float *)(param_1 + 0x230);
        fVar42 = *(float *)(param_1 + 0x234);
        fVar3 = *(float *)(param_1 + 0x23c);
        fVar29 = *(float *)(param_1 + 0x238);
        fVar4 = *(float *)(param_1 + 0x244);
        fVar30 = *(float *)(param_1 + 0x248);
        fVar37 = ((fVar24 + fVar25) * *(float *)(param_1 + 0x42c) -
                 fVar1 * *(float *)(param_1 + 0x430)) - fVar27 * *(float *)(param_1 + 0x434);
        fVar25 = *(float *)(param_1 + 0x240);
        fVar24 = -fVar24;
        _DAT_180be2d0c = fVar24;
        *(float *)(param_1 + 0x230) = fVar1;
        fVar43 = (fVar43 * *(float *)(param_1 + 0x42c) - fVar3 * *(float *)(param_1 + 0x430)) -
                 fVar25 * *(float *)(param_1 + 0x434);
        *(float *)(param_1 + 0x238) = fVar42;
        *(float *)(param_1 + 0x22c) = fVar37;
        fVar37 = (((fVar27 * *(float *)(param_1 + 0x43c) + fVar1 * *(float *)(param_1 + 0x438)) -
                  fVar42 * *(float *)(param_1 + 0x440)) - fVar29 * *(float *)(param_1 + 0x444)) +
                 fVar37;
        *(float *)(param_1 + 0x234) = fVar37;
        *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_1 + 0x23c);
        *(float *)(param_1 + 0x23c) = fVar43;
        *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_1 + 0x244);
        fVar43 = (((fVar25 * *(float *)(param_1 + 0x43c) + fVar3 * *(float *)(param_1 + 0x438)) -
                  fVar4 * *(float *)(param_1 + 0x440)) - fVar30 * *(float *)(param_1 + 0x444)) +
                 fVar43;
        *(float *)(param_1 + 0x244) = fVar43;
        pfVar17[1] = fVar26 * fVar42 + fVar29 * fVar2 + fVar37;
        pfVar17[2] = fVar4 * fVar26 + fVar30 * fVar2 + fVar43;
        unaff_EBX = unaff_EBX - 1;
        pfVar17 = pfVar17 + 2;
      } while (unaff_EBX != 0);
    }
  }
  else if (uVar23 == 6) {
    if (unaff_EBX != 0) {
      pfVar20 = unaff_RDI + 2;
      pfVar17 = (float *)(param_3 + -0x14);
      fVar24 = _DAT_180be2d0c;
      do {
        fVar25 = *(float *)(param_1 + 0x42c);
        fVar1 = *(float *)(param_1 + 0x430);
        fVar2 = *(float *)(param_1 + 0x434);
        fVar26 = *(float *)(param_1 + 0x230);
        fVar27 = *(float *)(param_1 + 0x438);
        fVar42 = *(float *)(param_1 + 0x440);
        fVar3 = *(float *)(param_1 + 0x444);
        fVar31 = ((fVar24 + pfVar20[-2]) * fVar25 - *(float *)(param_1 + 0x22c) * fVar1) -
                 fVar26 * fVar2;
        fVar32 = ((fVar24 + pfVar20[-1]) * fVar25 - *(float *)(param_1 + 0x23c) * fVar1) -
                 *(float *)(param_1 + 0x240) * fVar2;
        fVar33 = ((fVar24 + *pfVar20) * fVar25 - *(float *)(param_1 + 0x24c) * fVar1) -
                 *(float *)(param_1 + 0x250) * fVar2;
        fVar34 = ((fVar24 + pfVar20[1]) * fVar25 - *(float *)(param_1 + 0x25c) * fVar1) -
                 *(float *)(param_1 + 0x260) * fVar2;
        fVar29 = *(float *)(param_1 + 0x43c);
        fVar35 = ((fVar24 + pfVar20[2]) * fVar25 - *(float *)(param_1 + 0x26c) * fVar1) -
                 *(float *)(param_1 + 0x270) * fVar2;
        fVar36 = ((fVar24 + pfVar20[3]) * fVar25 - *(float *)(param_1 + 0x27c) * fVar1) -
                 *(float *)(param_1 + 0x280) * fVar2;
        fVar25 = *(float *)(param_1 + 0x238);
        fVar1 = *(float *)(param_1 + 0x244);
        fVar2 = *(float *)(param_1 + 0x248);
        fVar4 = *(float *)(param_1 + 0x254);
        fVar30 = *(float *)(param_1 + 0x274);
        fVar37 = *(float *)(param_1 + 0x278);
        fVar43 = *(float *)(param_1 + 600);
        fVar5 = *(float *)(param_1 + 0x268);
        fVar6 = *(float *)(param_1 + 0x264);
        fVar7 = *(float *)(param_1 + 0x284);
        fVar8 = *(float *)(param_1 + 0x27c);
        fVar9 = *(float *)(param_1 + 0x288);
        fVar10 = *(float *)(param_1 + 0x280);
        fVar11 = *(float *)(param_1 + 0x44c);
        fVar12 = *(float *)(param_1 + 0x238);
        fVar13 = *(float *)(param_1 + 0x448);
        fVar14 = *(float *)(param_1 + 0x234);
        pfVar20 = pfVar20 + 6;
        fVar24 = -fVar24;
        _DAT_180be2d0c = fVar24;
        *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_1 + 0x22c);
        *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_1 + 0x234);
        fVar28 = (((fVar29 * fVar26 + fVar27 * *(float *)(param_1 + 0x22c)) -
                  *(float *)(param_1 + 0x234) * fVar42) - fVar25 * fVar3) + fVar31;
        *(float *)(param_1 + 0x22c) = fVar31;
        fVar31 = (((fVar29 * *(float *)(param_1 + 0x240) + fVar27 * *(float *)(param_1 + 0x23c)) -
                  fVar1 * fVar42) - fVar2 * fVar3) + fVar32;
        *(float *)(param_1 + 0x234) = fVar28;
        uVar15 = *(undefined4 *)(param_1 + 0x23c);
        *(float *)(param_1 + 0x23c) = fVar32;
        *(undefined4 *)(param_1 + 0x240) = uVar15;
        fVar26 = (((fVar29 * *(float *)(param_1 + 0x250) + fVar27 * *(float *)(param_1 + 0x24c)) -
                  fVar4 * fVar42) - fVar43 * fVar3) + fVar33;
        uVar15 = *(undefined4 *)(param_1 + 0x244);
        *(float *)(param_1 + 0x244) = fVar31;
        *(undefined4 *)(param_1 + 0x248) = uVar15;
        uVar15 = *(undefined4 *)(param_1 + 0x24c);
        *(float *)(param_1 + 0x24c) = fVar33;
        *(undefined4 *)(param_1 + 0x250) = uVar15;
        fVar25 = (((fVar29 * *(float *)(param_1 + 0x260) + fVar27 * *(float *)(param_1 + 0x25c)) -
                  fVar6 * fVar42) - fVar5 * fVar3) + fVar34;
        uVar15 = *(undefined4 *)(param_1 + 0x254);
        *(float *)(param_1 + 0x254) = fVar26;
        *(undefined4 *)(param_1 + 600) = uVar15;
        uVar15 = *(undefined4 *)(param_1 + 0x25c);
        *(float *)(param_1 + 0x25c) = fVar34;
        *(undefined4 *)(param_1 + 0x260) = uVar15;
        fVar32 = (((fVar29 * *(float *)(param_1 + 0x270) + fVar27 * *(float *)(param_1 + 0x26c)) -
                  fVar30 * fVar42) - fVar37 * fVar3) + fVar35;
        uVar15 = *(undefined4 *)(param_1 + 0x264);
        *(float *)(param_1 + 0x264) = fVar25;
        *(undefined4 *)(param_1 + 0x268) = uVar15;
        *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_1 + 0x26c);
        uVar15 = *(undefined4 *)(param_1 + 0x274);
        *(float *)(param_1 + 0x26c) = fVar35;
        *(float *)(param_1 + 0x274) = fVar32;
        *(undefined4 *)(param_1 + 0x278) = uVar15;
        *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_1 + 0x27c);
        *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_1 + 0x284);
        *(float *)(param_1 + 0x27c) = fVar36;
        fVar36 = (((fVar29 * fVar10 + fVar27 * fVar8) - fVar7 * fVar42) - fVar9 * fVar3) + fVar36;
        *(float *)(param_1 + 0x284) = fVar36;
        pfVar17[5] = fVar28 + fVar11 * fVar12 + fVar13 * fVar14;
        pfVar17[6] = fVar31 + fVar11 * fVar2 + fVar13 * fVar1;
        pfVar17[7] = fVar26 + fVar11 * fVar43 + fVar13 * fVar4;
        pfVar17[8] = fVar25 + fVar11 * fVar5 + fVar13 * fVar6;
        pfVar17[10] = fVar36 + fVar11 * fVar9 + fVar13 * fVar7;
        pfVar17[9] = fVar32 + fVar11 * fVar37 + fVar13 * fVar30;
        unaff_EBX = unaff_EBX - 1;
        pfVar17 = pfVar17 + 6;
      } while (unaff_EBX != 0);
    }
  }
  else if (uVar23 == 8) {
    if (unaff_EBX != 0) {
      pfVar20 = unaff_RDI + 2;
      pfVar17 = (float *)(unaff_R12 + -0x1c);
      fVar24 = _DAT_180be2d0c;
      do {
        fVar25 = *(float *)(param_1 + 0x42c);
        fVar1 = *(float *)(param_1 + 0x430);
        fVar2 = *(float *)(param_1 + 0x434);
        fVar26 = *(float *)(param_1 + 0x23c);
        fVar28 = ((fVar24 + pfVar20[-2]) * fVar25 - *(float *)(param_1 + 0x22c) * fVar1) -
                 fVar2 * *(float *)(param_1 + 0x230);
        fVar27 = *(float *)(param_1 + 0x240);
        fVar32 = ((fVar24 + pfVar20[-1]) * fVar25 - fVar26 * fVar1) - fVar27 * fVar2;
        fVar34 = ((fVar24 + *pfVar20) * fVar25 - *(float *)(param_1 + 0x24c) * fVar1) -
                 *(float *)(param_1 + 0x250) * fVar2;
        fVar35 = ((fVar24 + pfVar20[1]) * fVar25 - *(float *)(param_1 + 0x25c) * fVar1) -
                 *(float *)(param_1 + 0x260) * fVar2;
        fVar38 = ((fVar24 + pfVar20[2]) * fVar25 - *(float *)(param_1 + 0x26c) * fVar1) -
                 *(float *)(param_1 + 0x270) * fVar2;
        fVar39 = ((fVar24 + pfVar20[3]) * fVar25 - *(float *)(param_1 + 0x27c) * fVar1) -
                 *(float *)(param_1 + 0x280) * fVar2;
        fVar40 = ((fVar24 + pfVar20[4]) * fVar25 - *(float *)(param_1 + 0x28c) * fVar1) -
                 *(float *)(param_1 + 0x290) * fVar2;
        fVar42 = *(float *)(param_1 + 0x438);
        fVar3 = *(float *)(param_1 + 0x440);
        fVar29 = *(float *)(param_1 + 0x444);
        fVar4 = *(float *)(param_1 + 0x43c);
        fVar30 = *(float *)(param_1 + 0x238);
        fVar37 = *(float *)(param_1 + 0x248);
        fVar41 = ((fVar24 + pfVar20[5]) * fVar25 - *(float *)(param_1 + 0x29c) * fVar1) -
                 *(float *)(param_1 + 0x2a0) * fVar2;
        fVar24 = *(float *)(param_1 + 600);
        fVar25 = *(float *)(param_1 + 0x244);
        fVar1 = *(float *)(param_1 + 0x278);
        fVar2 = *(float *)(param_1 + 0x254);
        fVar43 = *(float *)(param_1 + 0x268);
        fVar5 = *(float *)(param_1 + 0x264);
        fVar6 = *(float *)(param_1 + 0x274);
        fVar7 = *(float *)(param_1 + 0x288);
        fVar8 = *(float *)(param_1 + 0x284);
        fVar9 = *(float *)(param_1 + 0x294);
        fVar10 = *(float *)(param_1 + 0x298);
        fVar11 = *(float *)(param_1 + 0x2a4);
        fVar12 = *(float *)(param_1 + 0x2a8);
        fVar13 = *(float *)(param_1 + 0x448);
        fVar14 = *(float *)(param_1 + 0x44c);
        fVar31 = *(float *)(param_1 + 0x234);
        *(float *)(param_1 + 0x238) = fVar31;
        pfVar20 = pfVar20 + 8;
        _DAT_180be2d0c = -_DAT_180be2d0c;
        fVar33 = (((fVar4 * *(float *)(param_1 + 0x230) + fVar42 * *(float *)(param_1 + 0x22c)) -
                  fVar3 * *(float *)(param_1 + 0x234)) - fVar29 * fVar30) + fVar28;
        *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_1 + 0x22c);
        *(float *)(param_1 + 0x22c) = fVar28;
        *(float *)(param_1 + 0x234) = fVar33;
        *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_1 + 0x23c);
        *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_1 + 0x244);
        *(float *)(param_1 + 0x23c) = fVar32;
        fVar32 = (((fVar4 * fVar27 + fVar42 * fVar26) - fVar25 * fVar3) - fVar37 * fVar29) + fVar32;
        fVar36 = (((fVar4 * *(float *)(param_1 + 0x250) + fVar42 * *(float *)(param_1 + 0x24c)) -
                  fVar2 * fVar3) - fVar24 * fVar29) + fVar34;
        *(float *)(param_1 + 0x244) = fVar32;
        uVar15 = *(undefined4 *)(param_1 + 0x24c);
        *(float *)(param_1 + 0x24c) = fVar34;
        *(undefined4 *)(param_1 + 0x250) = uVar15;
        fVar28 = (((fVar4 * *(float *)(param_1 + 0x260) + fVar42 * *(float *)(param_1 + 0x25c)) -
                  fVar5 * fVar3) - fVar43 * fVar29) + fVar35;
        uVar15 = *(undefined4 *)(param_1 + 0x254);
        *(float *)(param_1 + 0x254) = fVar36;
        *(undefined4 *)(param_1 + 600) = uVar15;
        uVar15 = *(undefined4 *)(param_1 + 0x25c);
        *(float *)(param_1 + 0x25c) = fVar35;
        *(undefined4 *)(param_1 + 0x260) = uVar15;
        fVar27 = (((fVar4 * *(float *)(param_1 + 0x270) + fVar42 * *(float *)(param_1 + 0x26c)) -
                  fVar6 * fVar3) - fVar29 * fVar1) + fVar38;
        uVar15 = *(undefined4 *)(param_1 + 0x264);
        *(float *)(param_1 + 0x264) = fVar28;
        *(undefined4 *)(param_1 + 0x268) = uVar15;
        uVar15 = *(undefined4 *)(param_1 + 0x26c);
        *(float *)(param_1 + 0x26c) = fVar38;
        *(undefined4 *)(param_1 + 0x270) = uVar15;
        fVar26 = (((fVar4 * *(float *)(param_1 + 0x280) + fVar42 * *(float *)(param_1 + 0x27c)) -
                  fVar3 * fVar8) - fVar29 * fVar7) + fVar39;
        uVar15 = *(undefined4 *)(param_1 + 0x274);
        *(float *)(param_1 + 0x274) = fVar27;
        *(undefined4 *)(param_1 + 0x278) = uVar15;
        uVar15 = *(undefined4 *)(param_1 + 0x27c);
        *(float *)(param_1 + 0x27c) = fVar39;
        *(undefined4 *)(param_1 + 0x280) = uVar15;
        fVar34 = (((fVar4 * *(float *)(param_1 + 0x290) + fVar42 * *(float *)(param_1 + 0x28c)) -
                  fVar3 * fVar9) - fVar29 * fVar10) + fVar40;
        uVar15 = *(undefined4 *)(param_1 + 0x284);
        *(float *)(param_1 + 0x284) = fVar26;
        *(undefined4 *)(param_1 + 0x288) = uVar15;
        uVar15 = *(undefined4 *)(param_1 + 0x28c);
        *(float *)(param_1 + 0x28c) = fVar40;
        *(undefined4 *)(param_1 + 0x290) = uVar15;
        fVar42 = (((fVar4 * *(float *)(param_1 + 0x2a0) + fVar42 * *(float *)(param_1 + 0x29c)) -
                  fVar3 * fVar11) - fVar29 * fVar12) + fVar41;
        uVar15 = *(undefined4 *)(param_1 + 0x294);
        *(float *)(param_1 + 0x294) = fVar34;
        *(undefined4 *)(param_1 + 0x298) = uVar15;
        uVar15 = *(undefined4 *)(param_1 + 0x29c);
        *(float *)(param_1 + 0x29c) = fVar41;
        *(undefined4 *)(param_1 + 0x2a0) = uVar15;
        uVar15 = *(undefined4 *)(param_1 + 0x2a4);
        *(float *)(param_1 + 0x2a4) = fVar42;
        *(undefined4 *)(param_1 + 0x2a8) = uVar15;
        pfVar17[8] = fVar25 * fVar13 + fVar37 * fVar14 + fVar32;
        pfVar17[7] = fVar30 * fVar14 + fVar31 * fVar13 + fVar33;
        pfVar17[9] = fVar2 * fVar13 + fVar24 * fVar14 + fVar36;
        pfVar17[0xe] = fVar14 * fVar12 + fVar13 * fVar11 + fVar42;
        fVar24 = _DAT_180be2d0c;
        pfVar17[10] = fVar5 * fVar13 + fVar43 * fVar14 + fVar28;
        pfVar17[0xb] = fVar6 * fVar13 + fVar14 * fVar1 + fVar27;
        pfVar17[0xc] = fVar14 * fVar7 + fVar13 * fVar8 + fVar26;
        pfVar17[0xd] = fVar14 * fVar10 + fVar13 * fVar9 + fVar34;
        unaff_EBX = unaff_EBX - 1;
        pfVar17 = pfVar17 + 8;
      } while (unaff_EBX != 0);
    }
  }
  else {
    uVar19 = 0;
    if (uVar23 != 0) {
      do {
        pfVar17 = unaff_RDI + uVar19;
        pfVar20 = (float *)(unaff_R12 + uVar19 * 4);
        iVar18 = (int)uVar19;
        if (unaff_EBX >> 2 != 0) {
          lVar16 = (longlong)iVar18;
          uVar22 = unaff_EBX >> 2;
          do {
            fVar29 = _DAT_180be2d08 + *pfVar17;
            fVar24 = *(float *)(param_1 + 0x22c + lVar16 * 0x10);
            fVar25 = *(float *)(param_1 + 0x230 + lVar16 * 0x10);
            fVar1 = *(float *)(param_1 + 0x430);
            fVar2 = *(float *)(param_1 + 0x42c);
            fVar26 = *(float *)(param_1 + 0x438);
            fVar27 = *(float *)(param_1 + 0x434);
            fVar42 = *(float *)(param_1 + 0x43c);
            _DAT_180be2d08 = -_DAT_180be2d08;
            *(float *)(param_1 + 0x230 + lVar16 * 0x10) = fVar24;
            fVar3 = *(float *)(param_1 + 0x234 + lVar16 * 0x10);
            fVar30 = (fVar29 * fVar2 - fVar24 * fVar1) - fVar25 * fVar27;
            *(float *)(param_1 + 0x22c + lVar16 * 0x10) = fVar30;
            fVar1 = *(float *)(param_1 + 0x440);
            fVar2 = *(float *)(param_1 + 0x238 + lVar16 * 0x10);
            fVar27 = *(float *)(param_1 + 0x44c);
            fVar29 = *(float *)(param_1 + 0x444);
            fVar4 = *(float *)(param_1 + 0x448);
            *(float *)(param_1 + 0x238 + lVar16 * 0x10) = fVar3;
            fVar24 = ((fVar24 * fVar26 + fVar30 + fVar25 * fVar42) - fVar3 * fVar1) - fVar2 * fVar29
            ;
            *(float *)(param_1 + 0x234 + lVar16 * 0x10) = fVar24;
            *pfVar20 = fVar3 * fVar4 + fVar24 + fVar2 * fVar27;
            fVar29 = _DAT_180be2d08 + pfVar17[unaff_R15];
            fVar24 = *(float *)(param_1 + 0x22c + lVar16 * 0x10);
            fVar25 = *(float *)(param_1 + 0x230 + lVar16 * 0x10);
            fVar1 = *(float *)(param_1 + 0x430);
            fVar2 = *(float *)(param_1 + 0x42c);
            fVar26 = *(float *)(param_1 + 0x438);
            fVar27 = *(float *)(param_1 + 0x434);
            fVar42 = *(float *)(param_1 + 0x43c);
            _DAT_180be2d08 = -_DAT_180be2d08;
            *(float *)(param_1 + 0x230 + lVar16 * 0x10) = fVar24;
            fVar3 = *(float *)(param_1 + 0x234 + lVar16 * 0x10);
            fVar30 = (fVar29 * fVar2 - fVar24 * fVar1) - fVar25 * fVar27;
            *(float *)(param_1 + 0x22c + lVar16 * 0x10) = fVar30;
            fVar1 = *(float *)(param_1 + 0x440);
            fVar2 = *(float *)(param_1 + 0x238 + lVar16 * 0x10);
            fVar27 = *(float *)(param_1 + 0x44c);
            fVar29 = *(float *)(param_1 + 0x444);
            fVar4 = *(float *)(param_1 + 0x448);
            *(float *)(param_1 + 0x238 + lVar16 * 0x10) = fVar3;
            fVar24 = ((fVar24 * fVar26 + fVar30 + fVar25 * fVar42) - fVar3 * fVar1) - fVar2 * fVar29
            ;
            *(float *)(param_1 + 0x234 + lVar16 * 0x10) = fVar24;
            pfVar20[unaff_R15] = fVar3 * fVar4 + fVar24 + fVar2 * fVar27;
            fVar29 = _DAT_180be2d08 + pfVar17[unaff_R15 * 2];
            fVar24 = *(float *)(param_1 + 0x22c + lVar16 * 0x10);
            fVar25 = *(float *)(param_1 + 0x42c);
            fVar1 = *(float *)(param_1 + 0x230 + lVar16 * 0x10);
            fVar2 = *(float *)(param_1 + 0x430);
            fVar26 = *(float *)(param_1 + 0x434);
            fVar27 = *(float *)(param_1 + 0x438);
            fVar42 = *(float *)(param_1 + 0x43c);
            _DAT_180be2d08 = -_DAT_180be2d08;
            *(float *)(param_1 + 0x230 + lVar16 * 0x10) = fVar24;
            fVar3 = *(float *)(param_1 + 0x234 + lVar16 * 0x10);
            fVar30 = (fVar29 * fVar25 - fVar24 * fVar2) - fVar1 * fVar26;
            *(float *)(param_1 + 0x22c + lVar16 * 0x10) = fVar30;
            fVar25 = *(float *)(param_1 + 0x440);
            fVar2 = *(float *)(param_1 + 0x238 + lVar16 * 0x10);
            fVar26 = *(float *)(param_1 + 0x44c);
            fVar29 = *(float *)(param_1 + 0x444);
            fVar4 = *(float *)(param_1 + 0x448);
            *(float *)(param_1 + 0x238 + lVar16 * 0x10) = fVar3;
            fVar24 = ((fVar24 * fVar27 + fVar30 + fVar1 * fVar42) - fVar3 * fVar25) - fVar2 * fVar29
            ;
            *(float *)(param_1 + 0x234 + lVar16 * 0x10) = fVar24;
            pfVar20[unaff_R15 * 2] = fVar3 * fVar4 + fVar24 + fVar2 * fVar26;
            fVar29 = _DAT_180be2d08 + pfVar17[unaff_R15 * 3];
            pfVar17 = pfVar17 + (int)(uVar23 * 4);
            fVar24 = *(float *)(param_1 + 0x22c + lVar16 * 0x10);
            fVar25 = *(float *)(param_1 + 0x230 + lVar16 * 0x10);
            fVar1 = *(float *)(param_1 + 0x430);
            fVar2 = *(float *)(param_1 + 0x434);
            fVar26 = *(float *)(param_1 + 0x438);
            fVar27 = *(float *)(param_1 + 0x43c);
            fVar42 = *(float *)(param_1 + 0x42c);
            _DAT_180be2d08 = -_DAT_180be2d08;
            *(float *)(param_1 + 0x230 + lVar16 * 0x10) = fVar24;
            fVar3 = *(float *)(param_1 + 0x234 + lVar16 * 0x10);
            fVar30 = (fVar29 * fVar42 - fVar24 * fVar1) - fVar25 * fVar2;
            *(float *)(param_1 + 0x22c + lVar16 * 0x10) = fVar30;
            fVar1 = *(float *)(param_1 + 0x440);
            fVar2 = *(float *)(param_1 + 0x238 + lVar16 * 0x10);
            fVar42 = *(float *)(param_1 + 0x44c);
            fVar29 = *(float *)(param_1 + 0x444);
            fVar4 = *(float *)(param_1 + 0x448);
            *(float *)(param_1 + 0x238 + lVar16 * 0x10) = fVar3;
            fVar24 = ((fVar24 * fVar26 + fVar30 + fVar25 * fVar27) - fVar3 * fVar1) - fVar2 * fVar29
            ;
            *(float *)(param_1 + 0x234 + lVar16 * 0x10) = fVar24;
            pfVar20[unaff_R15 * 3] = fVar3 * fVar4 + fVar24 + fVar2 * fVar42;
            pfVar20 = pfVar20 + (int)(uVar23 * 4);
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        if ((unaff_EBX & 3) != 0) {
          lVar16 = (longlong)iVar18;
          lVar21 = (longlong)pfVar20 - (longlong)pfVar17;
          uVar22 = unaff_EBX & 3;
          do {
            fVar29 = _DAT_180be2d08 + *pfVar17;
            fVar24 = *(float *)(param_1 + 0x22c + lVar16 * 0x10);
            fVar25 = *(float *)(param_1 + 0x230 + lVar16 * 0x10);
            fVar1 = *(float *)(param_1 + 0x430);
            fVar2 = *(float *)(param_1 + 0x434);
            fVar26 = *(float *)(param_1 + 0x438);
            fVar27 = *(float *)(param_1 + 0x43c);
            fVar42 = *(float *)(param_1 + 0x42c);
            _DAT_180be2d08 = -_DAT_180be2d08;
            *(float *)(param_1 + 0x230 + lVar16 * 0x10) = fVar24;
            fVar3 = *(float *)(param_1 + 0x234 + lVar16 * 0x10);
            fVar30 = (fVar29 * fVar42 - fVar24 * fVar1) - fVar25 * fVar2;
            *(float *)(param_1 + 0x22c + lVar16 * 0x10) = fVar30;
            fVar1 = *(float *)(param_1 + 0x440);
            fVar2 = *(float *)(param_1 + 0x238 + lVar16 * 0x10);
            fVar42 = *(float *)(param_1 + 0x44c);
            fVar29 = *(float *)(param_1 + 0x444);
            fVar4 = *(float *)(param_1 + 0x448);
            *(float *)(param_1 + 0x238 + lVar16 * 0x10) = fVar3;
            fVar24 = ((fVar24 * fVar26 + fVar30 + fVar25 * fVar27) - fVar3 * fVar1) - fVar2 * fVar29
            ;
            *(float *)(param_1 + 0x234 + lVar16 * 0x10) = fVar24;
            *(float *)((longlong)pfVar17 + lVar21) = fVar3 * fVar4 + fVar24 + fVar2 * fVar42;
            pfVar17 = pfVar17 + unaff_R15;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        uVar19 = (ulonglong)(iVar18 + 1U);
      } while (iVar18 + 1U < uVar23);
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1807930b9(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  uint unaff_EBX;
  int iVar10;
  ulonglong uVar11;
  longlong unaff_RDI;
  float *pfVar12;
  float *pfVar13;
  longlong lVar14;
  uint uVar15;
  longlong unaff_R12;
  uint uVar16;
  longlong unaff_R15;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar11 = 0;
  uVar16 = (uint)unaff_R15;
  if (uVar16 != 0) {
    do {
      pfVar12 = (float *)(unaff_RDI + uVar11 * 4);
      pfVar13 = (float *)(unaff_R12 + uVar11 * 4);
      iVar10 = (int)uVar11;
      if (unaff_EBX >> 2 != 0) {
        lVar9 = (longlong)iVar10;
        uVar15 = unaff_EBX >> 2;
        do {
          fVar17 = _DAT_180be2d08 + *pfVar12;
          fVar19 = *(float *)(param_1 + 0x22c + lVar9 * 0x10);
          fVar1 = *(float *)(param_1 + 0x230 + lVar9 * 0x10);
          fVar2 = *(float *)(param_1 + 0x430);
          fVar3 = *(float *)(param_1 + 0x42c);
          fVar4 = *(float *)(param_1 + 0x438);
          fVar5 = *(float *)(param_1 + 0x434);
          fVar6 = *(float *)(param_1 + 0x43c);
          _DAT_180be2d08 = -_DAT_180be2d08;
          *(float *)(param_1 + 0x230 + lVar9 * 0x10) = fVar19;
          fVar7 = *(float *)(param_1 + 0x234 + lVar9 * 0x10);
          fVar18 = (fVar17 * fVar3 - fVar19 * fVar2) - fVar1 * fVar5;
          *(float *)(param_1 + 0x22c + lVar9 * 0x10) = fVar18;
          fVar2 = *(float *)(param_1 + 0x440);
          fVar3 = *(float *)(param_1 + 0x238 + lVar9 * 0x10);
          fVar5 = *(float *)(param_1 + 0x44c);
          fVar17 = *(float *)(param_1 + 0x444);
          fVar8 = *(float *)(param_1 + 0x448);
          *(float *)(param_1 + 0x238 + lVar9 * 0x10) = fVar7;
          fVar19 = ((fVar19 * fVar4 + fVar18 + fVar1 * fVar6) - fVar7 * fVar2) - fVar3 * fVar17;
          *(float *)(param_1 + 0x234 + lVar9 * 0x10) = fVar19;
          *pfVar13 = fVar7 * fVar8 + fVar19 + fVar3 * fVar5;
          fVar17 = _DAT_180be2d08 + pfVar12[unaff_R15];
          fVar19 = *(float *)(param_1 + 0x22c + lVar9 * 0x10);
          fVar1 = *(float *)(param_1 + 0x230 + lVar9 * 0x10);
          fVar2 = *(float *)(param_1 + 0x430);
          fVar3 = *(float *)(param_1 + 0x42c);
          fVar4 = *(float *)(param_1 + 0x438);
          fVar5 = *(float *)(param_1 + 0x434);
          fVar6 = *(float *)(param_1 + 0x43c);
          _DAT_180be2d08 = -_DAT_180be2d08;
          *(float *)(param_1 + 0x230 + lVar9 * 0x10) = fVar19;
          fVar7 = *(float *)(param_1 + 0x234 + lVar9 * 0x10);
          fVar18 = (fVar17 * fVar3 - fVar19 * fVar2) - fVar1 * fVar5;
          *(float *)(param_1 + 0x22c + lVar9 * 0x10) = fVar18;
          fVar2 = *(float *)(param_1 + 0x440);
          fVar3 = *(float *)(param_1 + 0x238 + lVar9 * 0x10);
          fVar5 = *(float *)(param_1 + 0x44c);
          fVar17 = *(float *)(param_1 + 0x444);
          fVar8 = *(float *)(param_1 + 0x448);
          *(float *)(param_1 + 0x238 + lVar9 * 0x10) = fVar7;
          fVar19 = ((fVar19 * fVar4 + fVar18 + fVar1 * fVar6) - fVar7 * fVar2) - fVar3 * fVar17;
          *(float *)(param_1 + 0x234 + lVar9 * 0x10) = fVar19;
          pfVar13[unaff_R15] = fVar7 * fVar8 + fVar19 + fVar3 * fVar5;
          fVar17 = _DAT_180be2d08 + pfVar12[unaff_R15 * 2];
          fVar19 = *(float *)(param_1 + 0x22c + lVar9 * 0x10);
          fVar1 = *(float *)(param_1 + 0x42c);
          fVar2 = *(float *)(param_1 + 0x230 + lVar9 * 0x10);
          fVar3 = *(float *)(param_1 + 0x430);
          fVar4 = *(float *)(param_1 + 0x434);
          fVar5 = *(float *)(param_1 + 0x438);
          fVar6 = *(float *)(param_1 + 0x43c);
          _DAT_180be2d08 = -_DAT_180be2d08;
          *(float *)(param_1 + 0x230 + lVar9 * 0x10) = fVar19;
          fVar7 = *(float *)(param_1 + 0x234 + lVar9 * 0x10);
          fVar18 = (fVar17 * fVar1 - fVar19 * fVar3) - fVar2 * fVar4;
          *(float *)(param_1 + 0x22c + lVar9 * 0x10) = fVar18;
          fVar1 = *(float *)(param_1 + 0x440);
          fVar3 = *(float *)(param_1 + 0x238 + lVar9 * 0x10);
          fVar4 = *(float *)(param_1 + 0x44c);
          fVar17 = *(float *)(param_1 + 0x444);
          fVar8 = *(float *)(param_1 + 0x448);
          *(float *)(param_1 + 0x238 + lVar9 * 0x10) = fVar7;
          fVar19 = ((fVar19 * fVar5 + fVar18 + fVar2 * fVar6) - fVar7 * fVar1) - fVar3 * fVar17;
          *(float *)(param_1 + 0x234 + lVar9 * 0x10) = fVar19;
          pfVar13[unaff_R15 * 2] = fVar7 * fVar8 + fVar19 + fVar3 * fVar4;
          fVar17 = _DAT_180be2d08 + pfVar12[unaff_R15 * 3];
          pfVar12 = pfVar12 + (int)(uVar16 * 4);
          fVar19 = *(float *)(param_1 + 0x22c + lVar9 * 0x10);
          fVar1 = *(float *)(param_1 + 0x230 + lVar9 * 0x10);
          fVar2 = *(float *)(param_1 + 0x430);
          fVar3 = *(float *)(param_1 + 0x434);
          fVar4 = *(float *)(param_1 + 0x438);
          fVar5 = *(float *)(param_1 + 0x43c);
          fVar6 = *(float *)(param_1 + 0x42c);
          _DAT_180be2d08 = -_DAT_180be2d08;
          *(float *)(param_1 + 0x230 + lVar9 * 0x10) = fVar19;
          fVar7 = *(float *)(param_1 + 0x234 + lVar9 * 0x10);
          fVar18 = (fVar17 * fVar6 - fVar19 * fVar2) - fVar1 * fVar3;
          *(float *)(param_1 + 0x22c + lVar9 * 0x10) = fVar18;
          fVar2 = *(float *)(param_1 + 0x440);
          fVar3 = *(float *)(param_1 + 0x238 + lVar9 * 0x10);
          fVar6 = *(float *)(param_1 + 0x44c);
          fVar17 = *(float *)(param_1 + 0x444);
          fVar8 = *(float *)(param_1 + 0x448);
          *(float *)(param_1 + 0x238 + lVar9 * 0x10) = fVar7;
          fVar19 = ((fVar19 * fVar4 + fVar18 + fVar1 * fVar5) - fVar7 * fVar2) - fVar3 * fVar17;
          *(float *)(param_1 + 0x234 + lVar9 * 0x10) = fVar19;
          pfVar13[unaff_R15 * 3] = fVar7 * fVar8 + fVar19 + fVar3 * fVar6;
          pfVar13 = pfVar13 + (int)(uVar16 * 4);
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      if ((unaff_EBX & 3) != 0) {
        lVar9 = (longlong)iVar10;
        lVar14 = (longlong)pfVar13 - (longlong)pfVar12;
        uVar15 = unaff_EBX & 3;
        do {
          fVar17 = _DAT_180be2d08 + *pfVar12;
          fVar19 = *(float *)(param_1 + 0x22c + lVar9 * 0x10);
          fVar1 = *(float *)(param_1 + 0x230 + lVar9 * 0x10);
          fVar2 = *(float *)(param_1 + 0x430);
          fVar3 = *(float *)(param_1 + 0x434);
          fVar4 = *(float *)(param_1 + 0x438);
          fVar5 = *(float *)(param_1 + 0x43c);
          fVar6 = *(float *)(param_1 + 0x42c);
          _DAT_180be2d08 = -_DAT_180be2d08;
          *(float *)(param_1 + 0x230 + lVar9 * 0x10) = fVar19;
          fVar7 = *(float *)(param_1 + 0x234 + lVar9 * 0x10);
          fVar18 = (fVar17 * fVar6 - fVar19 * fVar2) - fVar1 * fVar3;
          *(float *)(param_1 + 0x22c + lVar9 * 0x10) = fVar18;
          fVar2 = *(float *)(param_1 + 0x440);
          fVar3 = *(float *)(param_1 + 0x238 + lVar9 * 0x10);
          fVar6 = *(float *)(param_1 + 0x44c);
          fVar17 = *(float *)(param_1 + 0x444);
          fVar8 = *(float *)(param_1 + 0x448);
          *(float *)(param_1 + 0x238 + lVar9 * 0x10) = fVar7;
          fVar19 = ((fVar19 * fVar4 + fVar18 + fVar1 * fVar5) - fVar7 * fVar2) - fVar3 * fVar17;
          *(float *)(param_1 + 0x234 + lVar9 * 0x10) = fVar19;
          *(float *)((longlong)pfVar12 + lVar14) = fVar7 * fVar8 + fVar19 + fVar3 * fVar6;
          pfVar12 = pfVar12 + unaff_R15;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      uVar11 = (ulonglong)(iVar10 + 1U);
    } while (iVar10 + 1U < uVar16);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1807930dc(longlong param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  uint unaff_EBX;
  int iVar10;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  float *pfVar11;
  float *pfVar12;
  longlong lVar13;
  uint uVar14;
  longlong unaff_R12;
  longlong unaff_R15;
  float fVar15;
  float fVar16;
  float fVar17;
  uint unaff_XMM6_Da;
  
  do {
    pfVar11 = (float *)(unaff_RDI + unaff_RSI * 4);
    pfVar12 = (float *)(unaff_R12 + unaff_RSI * 4);
    iVar10 = (int)unaff_RSI;
    if (unaff_EBX >> 2 != 0) {
      lVar9 = (longlong)iVar10;
      uVar14 = unaff_EBX >> 2;
      do {
        fVar15 = _DAT_180be2d08 + *pfVar11;
        fVar17 = *(float *)(param_1 + 0x22c + lVar9 * 0x10);
        fVar1 = *(float *)(param_1 + 0x230 + lVar9 * 0x10);
        fVar2 = *(float *)(param_1 + 0x430);
        fVar3 = *(float *)(param_1 + 0x42c);
        fVar4 = *(float *)(param_1 + 0x438);
        fVar5 = *(float *)(param_1 + 0x434);
        fVar6 = *(float *)(param_1 + 0x43c);
        _DAT_180be2d08 = (float)((uint)_DAT_180be2d08 ^ unaff_XMM6_Da);
        *(float *)(param_1 + 0x230 + lVar9 * 0x10) = fVar17;
        fVar7 = *(float *)(param_1 + 0x234 + lVar9 * 0x10);
        fVar16 = (fVar15 * fVar3 - fVar17 * fVar2) - fVar1 * fVar5;
        *(float *)(param_1 + 0x22c + lVar9 * 0x10) = fVar16;
        fVar2 = *(float *)(param_1 + 0x440);
        fVar3 = *(float *)(param_1 + 0x238 + lVar9 * 0x10);
        fVar5 = *(float *)(param_1 + 0x44c);
        fVar15 = *(float *)(param_1 + 0x444);
        fVar8 = *(float *)(param_1 + 0x448);
        *(float *)(param_1 + 0x238 + lVar9 * 0x10) = fVar7;
        fVar17 = ((fVar17 * fVar4 + fVar16 + fVar1 * fVar6) - fVar7 * fVar2) - fVar3 * fVar15;
        *(float *)(param_1 + 0x234 + lVar9 * 0x10) = fVar17;
        *pfVar12 = fVar7 * fVar8 + fVar17 + fVar3 * fVar5;
        fVar15 = _DAT_180be2d08 + pfVar11[unaff_R15];
        fVar17 = *(float *)(param_1 + 0x22c + lVar9 * 0x10);
        fVar1 = *(float *)(param_1 + 0x230 + lVar9 * 0x10);
        fVar2 = *(float *)(param_1 + 0x430);
        fVar3 = *(float *)(param_1 + 0x42c);
        fVar4 = *(float *)(param_1 + 0x438);
        fVar5 = *(float *)(param_1 + 0x434);
        fVar6 = *(float *)(param_1 + 0x43c);
        _DAT_180be2d08 = (float)((uint)_DAT_180be2d08 ^ unaff_XMM6_Da);
        *(float *)(param_1 + 0x230 + lVar9 * 0x10) = fVar17;
        fVar7 = *(float *)(param_1 + 0x234 + lVar9 * 0x10);
        fVar16 = (fVar15 * fVar3 - fVar17 * fVar2) - fVar1 * fVar5;
        *(float *)(param_1 + 0x22c + lVar9 * 0x10) = fVar16;
        fVar2 = *(float *)(param_1 + 0x440);
        fVar3 = *(float *)(param_1 + 0x238 + lVar9 * 0x10);
        fVar5 = *(float *)(param_1 + 0x44c);
        fVar15 = *(float *)(param_1 + 0x444);
        fVar8 = *(float *)(param_1 + 0x448);
        *(float *)(param_1 + 0x238 + lVar9 * 0x10) = fVar7;
        fVar17 = ((fVar17 * fVar4 + fVar16 + fVar1 * fVar6) - fVar7 * fVar2) - fVar3 * fVar15;
        *(float *)(param_1 + 0x234 + lVar9 * 0x10) = fVar17;
        pfVar12[unaff_R15] = fVar7 * fVar8 + fVar17 + fVar3 * fVar5;
        fVar15 = _DAT_180be2d08 + pfVar11[unaff_R15 * 2];
        fVar17 = *(float *)(param_1 + 0x22c + lVar9 * 0x10);
        fVar1 = *(float *)(param_1 + 0x42c);
        fVar2 = *(float *)(param_1 + 0x230 + lVar9 * 0x10);
        fVar3 = *(float *)(param_1 + 0x430);
        fVar4 = *(float *)(param_1 + 0x434);
        fVar5 = *(float *)(param_1 + 0x438);
        fVar6 = *(float *)(param_1 + 0x43c);
        _DAT_180be2d08 = (float)((uint)_DAT_180be2d08 ^ unaff_XMM6_Da);
        *(float *)(param_1 + 0x230 + lVar9 * 0x10) = fVar17;
        fVar7 = *(float *)(param_1 + 0x234 + lVar9 * 0x10);
        fVar16 = (fVar15 * fVar1 - fVar17 * fVar3) - fVar2 * fVar4;
        *(float *)(param_1 + 0x22c + lVar9 * 0x10) = fVar16;
        fVar1 = *(float *)(param_1 + 0x440);
        fVar3 = *(float *)(param_1 + 0x238 + lVar9 * 0x10);
        fVar4 = *(float *)(param_1 + 0x44c);
        fVar15 = *(float *)(param_1 + 0x444);
        fVar8 = *(float *)(param_1 + 0x448);
        *(float *)(param_1 + 0x238 + lVar9 * 0x10) = fVar7;
        fVar17 = ((fVar17 * fVar5 + fVar16 + fVar2 * fVar6) - fVar7 * fVar1) - fVar3 * fVar15;
        *(float *)(param_1 + 0x234 + lVar9 * 0x10) = fVar17;
        pfVar12[unaff_R15 * 2] = fVar7 * fVar8 + fVar17 + fVar3 * fVar4;
        fVar15 = _DAT_180be2d08 + pfVar11[unaff_R15 * 3];
        pfVar11 = pfVar11 + param_2;
        fVar17 = *(float *)(param_1 + 0x22c + lVar9 * 0x10);
        fVar1 = *(float *)(param_1 + 0x230 + lVar9 * 0x10);
        fVar2 = *(float *)(param_1 + 0x430);
        fVar3 = *(float *)(param_1 + 0x434);
        fVar4 = *(float *)(param_1 + 0x438);
        fVar5 = *(float *)(param_1 + 0x43c);
        fVar6 = *(float *)(param_1 + 0x42c);
        _DAT_180be2d08 = (float)((uint)_DAT_180be2d08 ^ unaff_XMM6_Da);
        *(float *)(param_1 + 0x230 + lVar9 * 0x10) = fVar17;
        fVar7 = *(float *)(param_1 + 0x234 + lVar9 * 0x10);
        fVar16 = (fVar15 * fVar6 - fVar17 * fVar2) - fVar1 * fVar3;
        *(float *)(param_1 + 0x22c + lVar9 * 0x10) = fVar16;
        fVar2 = *(float *)(param_1 + 0x440);
        fVar3 = *(float *)(param_1 + 0x238 + lVar9 * 0x10);
        fVar6 = *(float *)(param_1 + 0x44c);
        fVar15 = *(float *)(param_1 + 0x444);
        fVar8 = *(float *)(param_1 + 0x448);
        *(float *)(param_1 + 0x238 + lVar9 * 0x10) = fVar7;
        fVar17 = ((fVar17 * fVar4 + fVar16 + fVar1 * fVar5) - fVar7 * fVar2) - fVar3 * fVar15;
        *(float *)(param_1 + 0x234 + lVar9 * 0x10) = fVar17;
        pfVar12[unaff_R15 * 3] = fVar7 * fVar8 + fVar17 + fVar3 * fVar6;
        pfVar12 = pfVar12 + param_2;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if ((unaff_EBX & 3) != 0) {
      lVar9 = (longlong)iVar10;
      lVar13 = (longlong)pfVar12 - (longlong)pfVar11;
      uVar14 = unaff_EBX & 3;
      do {
        fVar15 = _DAT_180be2d08 + *pfVar11;
        fVar17 = *(float *)(param_1 + 0x22c + lVar9 * 0x10);
        fVar1 = *(float *)(param_1 + 0x230 + lVar9 * 0x10);
        fVar2 = *(float *)(param_1 + 0x430);
        fVar3 = *(float *)(param_1 + 0x434);
        fVar4 = *(float *)(param_1 + 0x438);
        fVar5 = *(float *)(param_1 + 0x43c);
        fVar6 = *(float *)(param_1 + 0x42c);
        _DAT_180be2d08 = (float)((uint)_DAT_180be2d08 ^ unaff_XMM6_Da);
        *(float *)(param_1 + 0x230 + lVar9 * 0x10) = fVar17;
        fVar7 = *(float *)(param_1 + 0x234 + lVar9 * 0x10);
        fVar16 = (fVar15 * fVar6 - fVar17 * fVar2) - fVar1 * fVar3;
        *(float *)(param_1 + 0x22c + lVar9 * 0x10) = fVar16;
        fVar2 = *(float *)(param_1 + 0x440);
        fVar3 = *(float *)(param_1 + 0x238 + lVar9 * 0x10);
        fVar6 = *(float *)(param_1 + 0x44c);
        fVar15 = *(float *)(param_1 + 0x444);
        fVar8 = *(float *)(param_1 + 0x448);
        *(float *)(param_1 + 0x238 + lVar9 * 0x10) = fVar7;
        fVar17 = ((fVar17 * fVar4 + fVar16 + fVar1 * fVar5) - fVar7 * fVar2) - fVar3 * fVar15;
        *(float *)(param_1 + 0x234 + lVar9 * 0x10) = fVar17;
        *(float *)((longlong)pfVar11 + lVar13) = fVar7 * fVar8 + fVar17 + fVar3 * fVar6;
        pfVar11 = pfVar11 + unaff_R15;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    unaff_RSI = (ulonglong)(iVar10 + 1U);
    param_2 = (uint)unaff_R15 * 4;
  } while (iVar10 + 1U < (uint)unaff_R15);
  return 0;
}



undefined8 FUN_1807935f1(void)

{
  return 0;
}



undefined8 FUN_1807935f9(void)

{
  return 0;
}



undefined8 FUN_18079362f(void)

{
  return 0;
}



undefined8
FUN_180793660(longlong param_1,longlong param_2,longlong param_3,uint param_4,int param_5)

{
  float fVar1;
  undefined8 uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (param_2 != 0) {
    lVar3 = (longlong)param_5;
    do {
      fVar4 = *(float *)(param_1 + 0x218);
      fVar1 = *(float *)(param_1 + 0x484);
      if (((fVar4 == fVar1) && (*(float *)(param_1 + 0x488) == *(float *)(param_1 + 0x21c))) ||
         (param_4 == 0)) {
        if (*(float *)(param_1 + 0x220) <= *(float *)(param_1 + 0x21c)) {
                    // WARNING: Subroutine does not return
          memcpy(param_3,param_2,(ulonglong)param_4 * lVar3 * 4);
        }
        if (10.0 <= *(float *)(param_1 + 0x21c)) {
          uVar2 = FUN_180791f70(param_1,param_2,param_3,param_4,param_5);
          return uVar2;
        }
                    // WARNING: Subroutine does not return
        memset(param_3,0,(ulonglong)param_4 * lVar3 * 4);
      }
      fVar5 = *(float *)(param_1 + 0x21c);
      fVar6 = fVar5 * 0.01 + 10.0;
      if (fVar1 <= fVar4) {
        if (fVar1 < fVar4) {
          fVar4 = fVar4 - 1.0;
          *(float *)(param_1 + 0x218) = fVar4;
          if (fVar4 <= fVar1) goto LAB_180793731;
        }
      }
      else {
        fVar4 = fVar4 + 1.0;
        *(float *)(param_1 + 0x218) = fVar4;
        if (fVar1 <= fVar4) {
LAB_180793731:
          *(float *)(param_1 + 0x218) = fVar1;
          fVar4 = fVar1;
        }
      }
      fVar1 = *(float *)(param_1 + 0x488);
      if (fVar1 <= fVar5) {
        if (fVar1 < fVar5) {
          fVar5 = fVar5 - fVar6;
          *(float *)(param_1 + 0x21c) = fVar5;
          if (fVar5 <= fVar1) goto LAB_18079376f;
        }
      }
      else {
        fVar5 = fVar5 + fVar6;
        *(float *)(param_1 + 0x21c) = fVar5;
        if (fVar1 <= fVar5) {
LAB_18079376f:
          *(float *)(param_1 + 0x21c) = fVar1;
          fVar5 = fVar1;
        }
      }
      FUN_180793880(param_1,fVar4,fVar5);
      FUN_180791f70(param_1,param_2,param_3,1,param_5);
      param_2 = param_2 + lVar3 * 4;
      param_3 = param_3 + lVar3 * 4;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  return 0;
}



undefined8 FUN_180793880(longlong param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  longlong lVar7;
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
  float afStack_2fc [135];
  undefined8 uStack_e0;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  
  if (1.0 <= param_2) {
    pfVar6 = (float *)(param_1 + 0x430);
    fVar18 = (float)*(int *)(*(longlong *)(param_1 + 0xa8) + 0x6d0);
    uStack_b0 = 0x3f800000;
    uStack_ac = 0x3f800000;
    fVar20 = 1.0;
    if (fVar18 * 0.5 < param_3) {
      param_3 = fVar18 * 0.5 - 10.0;
    }
    uStack_e0 = 0x18079393d;
    fVar8 = (float)tanf((param_3 * 3.1415927) / fVar18);
    pfVar5 = (float *)(param_1 + 0x438);
    pfVar4 = (float *)(param_1 + 0x460);
    pfVar3 = (float *)(param_1 + 0x24c);
    lVar7 = 2;
    fVar8 = fVar8 * (fVar18 + fVar18);
    fVar9 = 1.0 / (fVar8 * fVar8);
    do {
      fVar1 = pfVar4[-1];
      fVar14 = fVar9 * pfVar4[1];
      fVar16 = fVar9 * pfVar4[-2];
      fVar2 = pfVar4[-4];
      fVar15 = (2.0 / fVar8) * pfVar4[-3];
      fVar17 = fVar16 * 4.0 * fVar18;
      fVar11 = ((2.0 / param_2) * *pfVar4) / fVar8;
      fVar12 = fVar14 * 4.0 * fVar18;
      fVar13 = (fVar17 + fVar15) * fVar18 + fVar2;
      fVar10 = 1.0 / ((fVar11 + fVar12) * fVar18 + fVar1);
      fVar19 = fVar10 * fVar13 *
               *(float *)((longlong)pfVar3 + (longlong)&uStack_b0 + (-0x24c - param_1));
      *(float *)((longlong)pfVar3 + (longlong)&uStack_b0 + (-0x24c - param_1)) = fVar19;
      *pfVar6 = ((fVar1 + fVar1) - fVar14 * 8.0 * fVar18 * fVar18) * fVar10;
      fVar13 = 1.0 / fVar13;
      pfVar5[-1] = ((fVar18 * fVar12 - fVar11 * fVar18) + fVar1) * fVar10;
      *pfVar5 = ((fVar2 + fVar2) - fVar16 * 8.0 * fVar18 * fVar18) * fVar13;
      pfVar5[1] = ((fVar17 * fVar18 - fVar15 * fVar18) + fVar2) * fVar13;
      if (pfVar3[-10] != 0.0) {
        pfVar3[-8] = (fVar19 / pfVar3[-10]) * pfVar3[-8];
        pfVar3[-4] = (fVar19 / pfVar3[-10]) * pfVar3[-4];
        *pfVar3 = (fVar19 / pfVar3[-10]) * *pfVar3;
        pfVar3[4] = (fVar19 / pfVar3[-10]) * pfVar3[4];
        pfVar3[8] = (fVar19 / pfVar3[-10]) * pfVar3[8];
        pfVar3[0xc] = (fVar19 / pfVar3[-10]) * pfVar3[0xc];
        pfVar3[0x10] = (fVar19 / pfVar3[-10]) * pfVar3[0x10];
        pfVar3[0x14] = (fVar19 / pfVar3[-10]) * pfVar3[0x14];
        pfVar3[0x18] = (fVar19 / pfVar3[-10]) * pfVar3[0x18];
        pfVar3[0x1c] = (fVar19 / pfVar3[-10]) * pfVar3[0x1c];
        pfVar3[0x20] = (fVar19 / pfVar3[-10]) * pfVar3[0x20];
        pfVar3[0x24] = (fVar19 / pfVar3[-10]) * pfVar3[0x24];
        pfVar3[0x28] = (fVar19 / pfVar3[-10]) * pfVar3[0x28];
        pfVar3[0x2c] = (fVar19 / pfVar3[-10]) * pfVar3[0x2c];
        pfVar3[0x30] = (fVar19 / pfVar3[-10]) * pfVar3[0x30];
        pfVar3[0x34] = (fVar19 / pfVar3[-10]) * pfVar3[0x34];
        pfVar3[0x38] = (fVar19 / pfVar3[-10]) * pfVar3[0x38];
        pfVar3[0x3c] = (fVar19 / pfVar3[-10]) * pfVar3[0x3c];
        pfVar3[0x40] = (fVar19 / pfVar3[-10]) * pfVar3[0x40];
        pfVar3[0x44] = (fVar19 / pfVar3[-10]) * pfVar3[0x44];
        pfVar3[0x48] = (fVar19 / pfVar3[-10]) * pfVar3[0x48];
        pfVar3[0x4c] = (fVar19 / pfVar3[-10]) * pfVar3[0x4c];
        pfVar3[0x50] = (fVar19 / pfVar3[-10]) * pfVar3[0x50];
        pfVar3[0x54] = (fVar19 / pfVar3[-10]) * pfVar3[0x54];
        pfVar3[0x58] = (fVar19 / pfVar3[-10]) * pfVar3[0x58];
        pfVar3[0x5c] = (fVar19 / pfVar3[-10]) * pfVar3[0x5c];
        pfVar3[0x60] = (fVar19 / pfVar3[-10]) * pfVar3[0x60];
        pfVar3[100] = (fVar19 / pfVar3[-10]) * pfVar3[100];
        pfVar3[0x68] = (fVar19 / pfVar3[-10]) * pfVar3[0x68];
        pfVar3[0x6c] = (fVar19 / pfVar3[-10]) * pfVar3[0x6c];
        pfVar3[0x70] = (fVar19 / pfVar3[-10]) * pfVar3[0x70];
        pfVar3[0x74] = (fVar19 / pfVar3[-10]) * pfVar3[0x74];
      }
      pfVar6 = pfVar6 + 4;
      pfVar5 = pfVar5 + 4;
      pfVar4 = pfVar4 + 6;
      pfVar3[-10] = fVar19;
      pfVar3 = pfVar3 + 1;
      fVar20 = fVar20 * fVar19;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    *(float *)(param_1 + 0x42c) = fVar20;
  }
  return 0;
}



undefined8 FUN_1807938b6(longlong param_1,undefined8 param_2,float param_3)

{
  float fVar1;
  float fVar2;
  longlong in_RAX;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 unaff_RBX;
  float *pfVar6;
  longlong unaff_RDI;
  longlong lVar7;
  longlong in_R11;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_XMM6_Da;
  undefined4 unaff_XMM7_Da;
  float fVar15;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined4 unaff_XMM8_Da;
  float fVar16;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined4 unaff_XMM10_Da;
  float fVar17;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM10_Dd;
  undefined4 unaff_XMM11_Da;
  float fVar18;
  undefined4 unaff_XMM11_Db;
  undefined4 unaff_XMM11_Dc;
  undefined4 unaff_XMM11_Dd;
  undefined4 unaff_XMM12_Da;
  float fVar19;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM12_Dd;
  float fVar20;
  float unaff_XMM14_Da;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  float afStack_224 [135];
  undefined8 uStack_8;
  
  *(undefined8 *)(in_R11 + 0x10) = unaff_RBX;
  pfVar6 = (float *)(param_1 + 0x430);
  *(undefined4 *)(in_R11 + -0x28) = unaff_XMM7_Da;
  *(undefined4 *)(in_R11 + -0x24) = unaff_XMM7_Db;
  *(undefined4 *)(in_R11 + -0x20) = unaff_XMM7_Dc;
  *(undefined4 *)(in_R11 + -0x1c) = unaff_XMM7_Dd;
  *(undefined4 *)(in_R11 + -0x38) = unaff_XMM8_Da;
  *(undefined4 *)(in_R11 + -0x34) = unaff_XMM8_Db;
  *(undefined4 *)(in_R11 + -0x30) = unaff_XMM8_Dc;
  *(undefined4 *)(in_R11 + -0x2c) = unaff_XMM8_Dd;
  *(undefined4 *)(in_R11 + -0x48) = unaff_XMM9_Da;
  *(undefined4 *)(in_R11 + -0x44) = unaff_XMM9_Db;
  *(undefined4 *)(in_R11 + -0x40) = unaff_XMM9_Dc;
  *(undefined4 *)(in_R11 + -0x3c) = unaff_XMM9_Dd;
  *(undefined4 *)(in_R11 + -0x58) = unaff_XMM10_Da;
  *(undefined4 *)(in_R11 + -0x54) = unaff_XMM10_Db;
  *(undefined4 *)(in_R11 + -0x50) = unaff_XMM10_Dc;
  *(undefined4 *)(in_R11 + -0x4c) = unaff_XMM10_Dd;
  *(undefined4 *)(in_R11 + -0x68) = unaff_XMM11_Da;
  *(undefined4 *)(in_R11 + -100) = unaff_XMM11_Db;
  *(undefined4 *)(in_R11 + -0x60) = unaff_XMM11_Dc;
  *(undefined4 *)(in_R11 + -0x5c) = unaff_XMM11_Dd;
  fVar18 = (float)*(int *)(in_RAX + 0x6d0);
  uStack0000000000000028 = 0x3f800000;
  uStack000000000000002c = 0x3f800000;
  *(undefined4 *)(in_R11 + -0x78) = unaff_XMM12_Da;
  *(undefined4 *)(in_R11 + -0x74) = unaff_XMM12_Db;
  *(undefined4 *)(in_R11 + -0x70) = unaff_XMM12_Dc;
  *(undefined4 *)(in_R11 + -0x6c) = unaff_XMM12_Dd;
  if (fVar18 * 0.5 < param_3) {
    param_3 = fVar18 * 0.5 - 10.0;
  }
  uStack_8 = 0x18079393d;
  fVar8 = (float)tanf((param_3 * 3.1415927) / fVar18);
  pfVar5 = (float *)(param_1 + 0x438);
  pfVar4 = (float *)(unaff_RDI + 0x460);
  pfVar3 = (float *)(unaff_RDI + 0x24c);
  lVar7 = 2;
  fVar8 = fVar8 * (fVar18 + fVar18);
  fVar9 = unaff_XMM14_Da / (fVar8 * fVar8);
  fVar20 = unaff_XMM14_Da;
  do {
    fVar1 = pfVar4[-1];
    fVar14 = fVar9 * pfVar4[1];
    fVar16 = fVar9 * pfVar4[-2];
    fVar2 = pfVar4[-4];
    fVar15 = (2.0 / fVar8) * pfVar4[-3];
    fVar17 = fVar16 * 4.0 * fVar18;
    fVar11 = ((2.0 / unaff_XMM6_Da) * *pfVar4) / fVar8;
    fVar12 = fVar14 * 4.0 * fVar18;
    fVar13 = (fVar17 + fVar15) * fVar18 + fVar2;
    fVar10 = unaff_XMM14_Da / ((fVar11 + fVar12) * fVar18 + fVar1);
    fVar19 = fVar10 * fVar13 *
             *(float *)((longlong)pfVar3 +
                       (longlong)((longlong)&stack0x00000028 + (-0x24c - unaff_RDI)));
    *(float *)((longlong)pfVar3 + (longlong)((longlong)&stack0x00000028 + (-0x24c - unaff_RDI))) =
         fVar19;
    *pfVar6 = ((fVar1 + fVar1) - fVar14 * 8.0 * fVar18 * fVar18) * fVar10;
    fVar13 = unaff_XMM14_Da / fVar13;
    pfVar5[-1] = ((fVar18 * fVar12 - fVar11 * fVar18) + fVar1) * fVar10;
    *pfVar5 = ((fVar2 + fVar2) - fVar16 * 8.0 * fVar18 * fVar18) * fVar13;
    pfVar5[1] = ((fVar17 * fVar18 - fVar15 * fVar18) + fVar2) * fVar13;
    if (pfVar3[-10] != 0.0) {
      pfVar3[-8] = (fVar19 / pfVar3[-10]) * pfVar3[-8];
      pfVar3[-4] = (fVar19 / pfVar3[-10]) * pfVar3[-4];
      *pfVar3 = (fVar19 / pfVar3[-10]) * *pfVar3;
      pfVar3[4] = (fVar19 / pfVar3[-10]) * pfVar3[4];
      pfVar3[8] = (fVar19 / pfVar3[-10]) * pfVar3[8];
      pfVar3[0xc] = (fVar19 / pfVar3[-10]) * pfVar3[0xc];
      pfVar3[0x10] = (fVar19 / pfVar3[-10]) * pfVar3[0x10];
      pfVar3[0x14] = (fVar19 / pfVar3[-10]) * pfVar3[0x14];
      pfVar3[0x18] = (fVar19 / pfVar3[-10]) * pfVar3[0x18];
      pfVar3[0x1c] = (fVar19 / pfVar3[-10]) * pfVar3[0x1c];
      pfVar3[0x20] = (fVar19 / pfVar3[-10]) * pfVar3[0x20];
      pfVar3[0x24] = (fVar19 / pfVar3[-10]) * pfVar3[0x24];
      pfVar3[0x28] = (fVar19 / pfVar3[-10]) * pfVar3[0x28];
      pfVar3[0x2c] = (fVar19 / pfVar3[-10]) * pfVar3[0x2c];
      pfVar3[0x30] = (fVar19 / pfVar3[-10]) * pfVar3[0x30];
      pfVar3[0x34] = (fVar19 / pfVar3[-10]) * pfVar3[0x34];
      pfVar3[0x38] = (fVar19 / pfVar3[-10]) * pfVar3[0x38];
      pfVar3[0x3c] = (fVar19 / pfVar3[-10]) * pfVar3[0x3c];
      pfVar3[0x40] = (fVar19 / pfVar3[-10]) * pfVar3[0x40];
      pfVar3[0x44] = (fVar19 / pfVar3[-10]) * pfVar3[0x44];
      pfVar3[0x48] = (fVar19 / pfVar3[-10]) * pfVar3[0x48];
      pfVar3[0x4c] = (fVar19 / pfVar3[-10]) * pfVar3[0x4c];
      pfVar3[0x50] = (fVar19 / pfVar3[-10]) * pfVar3[0x50];
      pfVar3[0x54] = (fVar19 / pfVar3[-10]) * pfVar3[0x54];
      pfVar3[0x58] = (fVar19 / pfVar3[-10]) * pfVar3[0x58];
      pfVar3[0x5c] = (fVar19 / pfVar3[-10]) * pfVar3[0x5c];
      pfVar3[0x60] = (fVar19 / pfVar3[-10]) * pfVar3[0x60];
      pfVar3[100] = (fVar19 / pfVar3[-10]) * pfVar3[100];
      pfVar3[0x68] = (fVar19 / pfVar3[-10]) * pfVar3[0x68];
      pfVar3[0x6c] = (fVar19 / pfVar3[-10]) * pfVar3[0x6c];
      pfVar3[0x70] = (fVar19 / pfVar3[-10]) * pfVar3[0x70];
      pfVar3[0x74] = (fVar19 / pfVar3[-10]) * pfVar3[0x74];
    }
    pfVar6 = pfVar6 + 4;
    pfVar5 = pfVar5 + 4;
    pfVar4 = pfVar4 + 6;
    pfVar3[-10] = fVar19;
    pfVar3 = pfVar3 + 1;
    fVar20 = fVar20 * fVar19;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  *(float *)(unaff_RDI + 0x42c) = fVar20;
  return 0;
}



undefined8 FUN_180793e6a(void)

{
  return 0;
}



undefined8 FUN_180793e90(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  iVar4 = 0;
  lVar2 = *(longlong *)(lVar1 + 0xe8);
  if (0 < *(int *)(lVar2 + 0x60)) {
    lVar5 = 0;
    do {
      uVar3 = func_0x000180762a70(lVar1,iVar4,
                                  *(undefined4 *)
                                   (*(longlong *)(*(longlong *)(lVar2 + 0x68) + lVar5) + 0x38));
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      lVar2 = *(longlong *)(lVar1 + 0xe8);
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < *(int *)(lVar2 + 0x60));
  }
  func_0x000180794bd0(lVar1);
  *(undefined4 *)(lVar1 + 0x218) = *(undefined4 *)(lVar1 + 0x32c);
  *(undefined4 *)(lVar1 + 0x21c) = *(undefined4 *)(lVar1 + 0x330);
  FUN_180794cc0(lVar1);
  return 0;
}



undefined8 FUN_180793f80(longlong *param_1,int param_2,undefined4 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = *param_1;
  if (param_2 == 0) {
    *param_3 = *(undefined4 *)(lVar1 + 0x330);
    if (param_4 == 0) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x330);
  }
  else {
    if ((param_2 != 1) || (*param_3 = *(undefined4 *)(lVar1 + 0x32c), param_4 == 0)) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x32c);
  }
                    // WARNING: Subroutine does not return
  FUN_18076b390(param_4,0x20,&UNK_180958d90,(double)fVar2);
}







