#include "TaleWorlds.Native.Split.h"

// 03_rendering_part415.c - 1 个函数

// 函数: void FUN_180494ad0(longlong param_1,float *param_2,int param_3)
void FUN_180494ad0(longlong param_1,float *param_2,int param_3)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  bool bVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  float *pfVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  ulonglong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  uint64_t uStack_188;
  uint64_t uStack_180;
  uint uStack_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  int iStack_168;
  uint uStack_164;
  int iStack_160;
  int iStack_15c;
  uint uStack_158;
  uint uStack_154;
  float afStack_150 [4];
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float afStack_130 [4];
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float afStack_110 [4];
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float afStack_e8 [5];
  float afStack_d4 [27];
  ulonglong uStack_68;
  
  uStack_68 = _DAT_180bf00a8 ^ (ulonglong)&uStack_188;
  fVar2 = *param_2;
  lVar26 = (longlong)param_3;
  lVar9 = lVar26 * 0x40;
  fVar30 = *(float *)(lVar9 + 0x2c8 + param_1);
  fVar33 = *(float *)(lVar9 + 0x2cc + param_1);
  fVar32 = *(float *)(lVar9 + 0x2d0 + param_1);
  fVar31 = *(float *)(lVar9 + 0x2d4 + param_1);
  fVar3 = param_2[4];
  fVar28 = *(float *)(lVar9 + 0x2dc + param_1);
  fVar29 = *(float *)(lVar9 + 0x2d8 + param_1);
  fVar4 = param_2[1];
  fVar5 = *(float *)(lVar9 + 0x2e0 + param_1);
  fVar6 = *(float *)(lVar9 + 0x2e4 + param_1);
  fStack_140 = fVar3 * fVar30;
  fStack_13c = fVar3 * fVar33;
  fStack_138 = fVar3 * fVar32;
  fStack_134 = fVar3 * fVar31;
  afStack_150[0] = fVar2 * fVar30;
  afStack_150[1] = fVar33 * fVar2;
  afStack_150[2] = fVar32 * fVar2;
  afStack_150[3] = fVar31 * fVar2;
  fVar2 = param_2[5];
  afStack_130[0] = fVar4 * fVar29;
  afStack_130[1] = fVar28 * fVar4;
  afStack_130[2] = fVar5 * fVar4;
  afStack_130[3] = fVar6 * fVar4;
  fVar30 = param_2[2];
  pfVar17 = afStack_e8 + 5;
  fVar33 = *(float *)(lVar9 + 0x2e8 + param_1);
  fVar32 = *(float *)(lVar9 + 0x2ec + param_1);
  fVar31 = *(float *)(lVar9 + 0x2f0 + param_1);
  fVar3 = *(float *)(lVar9 + 0x2f4 + param_1);
  lVar19 = 0;
  bVar8 = true;
  fStack_120 = fVar2 * fVar29;
  fStack_11c = fVar2 * fVar28;
  fStack_118 = fVar2 * fVar5;
  fStack_114 = fVar2 * fVar6;
  lVar22 = 2;
  fVar2 = param_2[6];
  plVar1 = (longlong *)(lVar9 + 0x2f8 + param_1);
  lVar9 = *plVar1;
  lVar7 = plVar1[1];
  uStack_180._0_4_ = (float)lVar7;
  uStack_188._4_4_ = (float)((ulonglong)lVar9 >> 0x20);
  uStack_188._0_4_ = (float)lVar9;
  afStack_110[0] = fVar30 * fVar33;
  afStack_110[1] = fVar32 * fVar30;
  afStack_110[2] = fVar31 * fVar30;
  afStack_110[3] = fVar3 * fVar30;
  uStack_180._4_4_ = (float)((ulonglong)lVar7 >> 0x20);
  fStack_100 = fVar2 * fVar33;
  fStack_fc = fVar2 * fVar32;
  fStack_f8 = fVar2 * fVar31;
  fStack_f4 = fVar2 * fVar3;
  do {
    uVar12 = (ulonglong)*(uint *)(&unknown_var_4400_ptr + lVar19);
    uVar10 = (ulonglong)*(uint *)(&unknown_var_4336_ptr + lVar19);
    uVar27 = (ulonglong)*(uint *)(&unknown_var_4368_ptr + lVar19);
    fVar2 = afStack_150[uVar12 * 4];
    fVar30 = afStack_150[uVar12 * 4 + 1];
    fVar33 = afStack_130[uVar10 * 4];
    fVar32 = afStack_130[uVar10 * 4 + 1];
    fVar31 = afStack_110[uVar27 * 4];
    fVar3 = afStack_110[uVar27 * 4 + 1];
    fVar29 = (float)uStack_180 + afStack_150[uVar12 * 4 + 2] + afStack_130[uVar10 * 4 + 2] +
             afStack_110[uVar27 * 4 + 2];
    fVar28 = uStack_180._4_4_ + afStack_150[uVar12 * 4 + 3] + afStack_130[uVar10 * 4 + 3] +
             afStack_110[uVar27 * 4 + 3];
    if ((!bVar8) || (fVar28 < fVar29)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    uVar12 = (ulonglong)*(uint *)(&unknown_var_4404_ptr + lVar19);
    uVar10 = (ulonglong)*(uint *)(&unknown_var_4340_ptr + lVar19);
    uVar27 = (ulonglong)*(uint *)(&unknown_var_4372_ptr + lVar19);
    pfVar17[-2] = 1.0;
    pfVar17[-5] = ((float)uStack_188 + fVar2 + fVar33 + fVar31) / fVar28;
    pfVar17[-4] = (uStack_188._4_4_ + fVar30 + fVar32 + fVar3) / fVar28;
    fVar2 = afStack_150[uVar12 * 4];
    fVar30 = afStack_150[uVar12 * 4 + 1];
    pfVar17[-3] = fVar29 / fVar28;
    fVar33 = afStack_130[uVar10 * 4];
    fVar32 = afStack_130[uVar10 * 4 + 1];
    fVar31 = afStack_110[uVar27 * 4];
    fVar3 = afStack_110[uVar27 * 4 + 1];
    fVar29 = (float)uStack_180 + afStack_150[uVar12 * 4 + 2] + afStack_130[uVar10 * 4 + 2] +
             afStack_110[uVar27 * 4 + 2];
    fVar28 = uStack_180._4_4_ + afStack_150[uVar12 * 4 + 3] + afStack_130[uVar10 * 4 + 3] +
             afStack_110[uVar27 * 4 + 3];
    if ((!bVar8) || (fVar28 < fVar29)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    uVar12 = (ulonglong)*(uint *)(&unknown_var_4408_ptr + lVar19);
    uVar10 = (ulonglong)*(uint *)(&unknown_var_4344_ptr + lVar19);
    uVar27 = (ulonglong)*(uint *)(&unknown_var_4376_ptr + lVar19);
    pfVar17[2] = 1.0;
    pfVar17[-1] = ((float)uStack_188 + fVar2 + fVar33 + fVar31) / fVar28;
    *pfVar17 = (uStack_188._4_4_ + fVar30 + fVar32 + fVar3) / fVar28;
    fVar2 = afStack_150[uVar12 * 4];
    fVar30 = afStack_150[uVar12 * 4 + 1];
    pfVar17[1] = fVar29 / fVar28;
    fVar33 = afStack_130[uVar10 * 4];
    fVar32 = afStack_130[uVar10 * 4 + 1];
    fVar31 = afStack_110[uVar27 * 4];
    fVar3 = afStack_110[uVar27 * 4 + 1];
    fVar29 = (float)uStack_180 + afStack_150[uVar12 * 4 + 2] + afStack_130[uVar10 * 4 + 2] +
             afStack_110[uVar27 * 4 + 2];
    fVar28 = uStack_180._4_4_ + afStack_150[uVar12 * 4 + 3] + afStack_130[uVar10 * 4 + 3] +
             afStack_110[uVar27 * 4 + 3];
    if ((!bVar8) || (fVar28 < fVar29)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    uVar12 = (ulonglong)*(uint *)(&unknown_var_4412_ptr + lVar19);
    uVar10 = (ulonglong)*(uint *)(&unknown_var_4348_ptr + lVar19);
    uVar27 = (ulonglong)*(uint *)(&unknown_var_4380_ptr + lVar19);
    pfVar17[6] = 1.0;
    pfVar17[3] = ((float)uStack_188 + fVar2 + fVar33 + fVar31) / fVar28;
    pfVar17[4] = (uStack_188._4_4_ + fVar30 + fVar32 + fVar3) / fVar28;
    fVar2 = afStack_150[uVar12 * 4];
    fVar30 = afStack_150[uVar12 * 4 + 1];
    pfVar17[5] = fVar29 / fVar28;
    fVar33 = afStack_130[uVar10 * 4];
    fVar32 = afStack_130[uVar10 * 4 + 1];
    fVar31 = afStack_110[uVar27 * 4];
    fVar3 = afStack_110[uVar27 * 4 + 1];
    fVar29 = (float)uStack_180 + afStack_150[uVar12 * 4 + 2] + afStack_130[uVar10 * 4 + 2] +
             afStack_110[uVar27 * 4 + 2];
    fVar28 = uStack_180._4_4_ + afStack_150[uVar12 * 4 + 3] + afStack_130[uVar10 * 4 + 3] +
             afStack_110[uVar27 * 4 + 3];
    if ((!bVar8) || (fVar28 < fVar29)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    pfVar17[10] = 1.0;
    lVar19 = lVar19 + 0x10;
    pfVar17[7] = ((float)uStack_188 + fVar2 + fVar33 + fVar31) / fVar28;
    pfVar17[8] = (uStack_188._4_4_ + fVar30 + fVar32 + fVar3) / fVar28;
    pfVar17[9] = fVar29 / fVar28;
    pfVar17 = pfVar17 + 0x10;
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  uStack_188 = lVar9;
  if (bVar8) {
    uStack_154 = 0;
    do {
      uVar24 = uStack_154 * 3;
      uVar12 = (ulonglong)*(uint *)(&unknown_var_4192_ptr + (ulonglong)uVar24 * 4);
      uVar27 = (ulonglong)*(uint *)(&unknown_var_4192_ptr + (ulonglong)(uVar24 + 2) * 4);
      fVar2 = afStack_e8[uVar12 * 4 + 2];
      uVar10 = (ulonglong)*(uint *)(&unknown_var_4192_ptr + (ulonglong)(uVar24 + 1) * 4);
      uVar20 = (uint)(afStack_e8[uVar12 * 4] + 0.5);
      uStack_178 = (uint)(afStack_e8[uVar12 * 4 + 1] + 0.5);
      uVar18 = (uint)(afStack_e8[uVar27 * 4] + 0.5);
      uVar23 = (uint)(afStack_e8[uVar27 * 4 + 1] + 0.5);
      iStack_15c = uVar18 - uVar20;
      iVar14 = uStack_178 - uVar23;
      uStack_188 = CONCAT44(uStack_188._4_4_,uVar23);
      uVar16 = (uint)(afStack_e8[uVar10 * 4] + 0.5);
      uVar25 = (uint)(afStack_e8[uVar10 * 4 + 1] + 0.5);
      iStack_160 = uVar20 - uVar16;
      iVar15 = uVar23 - uVar25;
      iVar21 = uVar25 - uStack_178;
      iStack_168 = uVar16 - uVar18;
      iVar13 = iStack_15c * iVar21 - iVar14 * iStack_160;
      uVar24 = uVar18;
      if ((int)uVar20 < (int)uVar18) {
        uVar24 = uVar20;
      }
      uVar11 = uVar16;
      if ((int)uVar24 < (int)uVar16) {
        uVar11 = uVar24;
      }
      uStack_16c = 0;
      if (0 < (int)uVar11) {
        uStack_16c = uVar11;
      }
      uStack_16c = uStack_16c & 0xfffffffe;
      fVar30 = 1.0 / (float)iVar13;
      uVar24 = uVar18;
      if ((int)uVar18 < (int)uVar20) {
        uVar24 = uVar20;
      }
      fVar33 = (afStack_e8[uVar27 * 4 + 2] - fVar2) * fVar30;
      fVar30 = (afStack_e8[uVar10 * 4 + 2] - fVar2) * fVar30;
      uVar11 = uVar16;
      if ((int)uVar16 < (int)uVar24) {
        uVar11 = uVar24;
      }
      uStack_170 = 0x27f;
      if ((int)uVar11 < 0x27f) {
        uStack_170 = uVar11;
      }
      uVar24 = uVar23;
      if ((int)uStack_178 < (int)uVar23) {
        uVar24 = uStack_178;
      }
      uVar11 = uVar25;
      if ((int)uVar24 < (int)uVar25) {
        uVar11 = uVar24;
      }
      uStack_174 = 0;
      if (0 < (int)uVar11) {
        uStack_174 = uVar11;
      }
      uStack_174 = uStack_174 & 0xfffffffe;
      uVar24 = uVar23;
      if ((int)uVar23 < (int)uStack_178) {
        uVar24 = uStack_178;
      }
      uVar11 = uVar25;
      if ((int)uVar25 < (int)uVar24) {
        uVar11 = uVar24;
      }
      uStack_158 = 0x167;
      if ((int)uVar11 < 0x167) {
        uStack_158 = uVar11;
      }
      if (0 < iVar13) {
        fVar32 = (float)iVar14 * fVar30 + (float)iVar21 * fVar33;
        uStack_164 = (uStack_174 * iStack_168 - uVar16 * uVar23) + uStack_16c * iVar15 +
                     uVar18 * uVar25;
        uVar24 = (uStack_174 * iStack_160 - uVar20 * uVar25) + uStack_16c * iVar21 +
                 uVar16 * uStack_178;
        uVar16 = (uStack_174 * iStack_15c - uVar18 * uStack_178) + uStack_16c * iVar14 +
                 uVar20 * uVar23;
        if ((int)uStack_174 < (int)uStack_158) {
          uStack_188 = (longlong)(int)(uStack_174 * 0x280 + uStack_16c);
          do {
            bVar8 = false;
            fVar31 = (float)(int)uVar24 * fVar33 + fVar2 + (float)(int)uVar16 * fVar30;
            uStack_178 = uStack_16c;
            if ((int)uStack_16c < (int)uStack_170) {
              lVar9 = uStack_188;
              uVar23 = uStack_164;
              uVar18 = uVar24;
              uVar20 = uVar16;
              if (3 < (int)(uStack_170 - uStack_16c)) {
                uVar25 = ((uStack_170 - uStack_16c) - 4 >> 2) + 1;
                uVar27 = (ulonglong)uVar25;
                uStack_178 = uStack_16c + uVar25 * 4;
                do {
                  if ((bVar8) ||
                     ((0 < (int)(uVar20 | uVar18 | uVar23) &&
                      (*(float *)(*(longlong *)(param_1 + 0x348 + lVar26 * 8) + lVar9 * 4) <= fVar31
                      )))) {
                    bVar8 = true;
                  }
                  else {
                    bVar8 = false;
                  }
                  if ((bVar8) ||
                     ((0 < (int)(uVar20 + iVar14 | uVar18 + iVar21 | uVar23 + iVar15) &&
                      (*(float *)(*(longlong *)(param_1 + 0x348 + lVar26 * 8) + 4 + lVar9 * 4) <=
                       fVar31 + fVar32)))) {
                    bVar8 = true;
                  }
                  else {
                    bVar8 = false;
                  }
                  uVar23 = uVar23 + iVar15 + iVar15;
                  fVar31 = fVar31 + fVar32 + fVar32;
                  uVar18 = uVar18 + iVar21 + iVar21;
                  uVar20 = uVar20 + iVar14 + iVar14;
                  if ((bVar8) ||
                     ((0 < (int)(uVar20 | uVar18 | uVar23) &&
                      (*(float *)(*(longlong *)(param_1 + 0x348 + lVar26 * 8) + 8 + lVar9 * 4) <=
                       fVar31)))) {
                    bVar8 = true;
                  }
                  else {
                    bVar8 = false;
                  }
                  uVar23 = uVar23 + iVar15;
                  fVar31 = fVar31 + fVar32;
                  uVar18 = uVar18 + iVar21;
                  uVar20 = uVar20 + iVar14;
                  if ((bVar8) ||
                     ((0 < (int)(uVar20 | uVar18 | uVar23) &&
                      (*(float *)(*(longlong *)(param_1 + 0x348 + lVar26 * 8) + 0xc + lVar9 * 4) <=
                       fVar31)))) {
                    bVar8 = true;
                  }
                  else {
                    bVar8 = false;
                  }
                  uVar23 = uVar23 + iVar15;
                  fVar31 = fVar31 + fVar32;
                  uVar18 = uVar18 + iVar21;
                  uVar20 = uVar20 + iVar14;
                  lVar9 = lVar9 + 4;
                  uVar27 = uVar27 - 1;
                } while (uVar27 != 0);
              }
              if ((int)uStack_178 < (int)uStack_170) {
                lVar9 = lVar9 * 4;
                lVar19 = (longlong)(int)(uStack_170 - uStack_178);
                do {
                  if ((bVar8) ||
                     ((0 < (int)(uVar20 | uVar18 | uVar23) &&
                      (*(float *)(lVar9 + *(longlong *)(param_1 + 0x348 + lVar26 * 8)) <= fVar31))))
                  {
                    bVar8 = true;
                  }
                  else {
                    bVar8 = false;
                  }
                  uVar23 = uVar23 + iVar15;
                  fVar31 = fVar31 + fVar32;
                  uVar18 = uVar18 + iVar21;
                  uVar20 = uVar20 + iVar14;
                  lVar9 = lVar9 + 4;
                  lVar19 = lVar19 + -1;
                } while (lVar19 != 0);
              }
              if (bVar8) goto LAB_1804954a0;
            }
            uStack_174 = uStack_174 + 1;
            uStack_188 = uStack_188 + 0x280;
            uStack_164 = uStack_164 + iStack_168;
            uVar24 = uVar24 + iStack_160;
            uVar16 = uVar16 + iStack_15c;
          } while ((int)uStack_174 < (int)uStack_158);
        }
      }
      uStack_154 = uStack_154 + 1;
    } while (uStack_154 < 0xc);
  }
LAB_1804954a0:
  uStack_180 = lVar7;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_68 ^ (ulonglong)&uStack_188);
}





