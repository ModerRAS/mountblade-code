#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part192_sub002_sub002.c - 1 个函数

// 函数: void FUN_18077b2c0(void)
void FUN_18077b2c0(void)

{
                    // WARNING: Subroutine does not return
  memset(0x180c0db14,0,0x5c);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_18077b410(longlong param_1,longlong param_2,longlong param_3,uint param_4,int param_5)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float *pfVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
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
  float fStack_e0;
  
  uVar4 = 0;
  if (param_5 == 1) {
    if (3 < param_4) {
      lVar7 = param_2 - param_3;
      pfVar6 = (float *)(param_3 + 4);
      uVar3 = (param_4 - 4 >> 2) + 1;
      uVar9 = (ulonglong)uVar3;
      uVar4 = (ulonglong)(uVar3 * 4);
      do {
        fVar20 = _DAT_180be2198 + *(float *)(lVar7 + -4 + (longlong)pfVar6);
        _DAT_180be2198 = -_DAT_180be2198;
        fVar27 = *(float *)(param_1 + 0x224);
        fVar16 = *(float *)(param_1 + 0x324);
        fVar15 = (((fVar27 * *(float *)(param_1 + 0x434) + fVar20 * *(float *)(param_1 + 0x430) +
                   *(float *)(param_1 + 0x438) * *(float *)(param_1 + 0x2a4)) -
                  fVar16 * *(float *)(param_1 + 0x428)) -
                 *(float *)(param_1 + 0x42c) * *(float *)(param_1 + 0x3a4)) /
                 *(float *)(param_1 + 0x424);
        *(float *)(param_1 + 0x224) = fVar20;
        *(float *)(param_1 + 0x324) = fVar15;
        *(float *)(param_1 + 0x2a4) = fVar27;
        *(float *)(param_1 + 0x3a4) = fVar16;
        pfVar6[-1] = fVar15;
        fVar20 = _DAT_180be2198 + *(float *)(lVar7 + (longlong)pfVar6);
        fVar27 = *(float *)(param_1 + 0x224);
        fVar16 = *(float *)(param_1 + 0x324);
        fVar15 = (((fVar27 * *(float *)(param_1 + 0x434) + fVar20 * *(float *)(param_1 + 0x430) +
                   *(float *)(param_1 + 0x438) * *(float *)(param_1 + 0x2a4)) -
                  fVar16 * *(float *)(param_1 + 0x428)) -
                 *(float *)(param_1 + 0x42c) * *(float *)(param_1 + 0x3a4)) /
                 *(float *)(param_1 + 0x424);
        *(float *)(param_1 + 0x224) = fVar20;
        *(float *)(param_1 + 0x324) = fVar15;
        *(float *)(param_1 + 0x2a4) = fVar27;
        *(float *)(param_1 + 0x3a4) = fVar16;
        *pfVar6 = fVar15;
        fVar20 = *(float *)(lVar7 + 4 + (longlong)pfVar6) - _DAT_180be2198;
        fVar27 = *(float *)(param_1 + 0x224);
        fVar16 = *(float *)(param_1 + 0x324);
        fVar15 = (((fVar20 * *(float *)(param_1 + 0x430) + fVar27 * *(float *)(param_1 + 0x434) +
                   *(float *)(param_1 + 0x438) * *(float *)(param_1 + 0x2a4)) -
                  fVar16 * *(float *)(param_1 + 0x428)) -
                 *(float *)(param_1 + 0x42c) * *(float *)(param_1 + 0x3a4)) /
                 *(float *)(param_1 + 0x424);
        *(float *)(param_1 + 0x224) = fVar20;
        *(float *)(param_1 + 0x324) = fVar15;
        *(float *)(param_1 + 0x2a4) = fVar27;
        *(float *)(param_1 + 0x3a4) = fVar16;
        pfVar6[1] = fVar15;
        fVar15 = _DAT_180be2198 + *(float *)(lVar7 + 8 + (longlong)pfVar6);
        fVar27 = *(float *)(param_1 + 0x324);
        _DAT_180be2198 = -_DAT_180be2198;
        fVar16 = (((*(float *)(param_1 + 0x224) * *(float *)(param_1 + 0x434) +
                    fVar15 * *(float *)(param_1 + 0x430) +
                   *(float *)(param_1 + 0x438) * *(float *)(param_1 + 0x2a4)) -
                  fVar27 * *(float *)(param_1 + 0x428)) -
                 *(float *)(param_1 + 0x42c) * *(float *)(param_1 + 0x3a4)) /
                 *(float *)(param_1 + 0x424);
        *(float *)(param_1 + 0x2a4) = *(float *)(param_1 + 0x224);
        *(float *)(param_1 + 0x324) = fVar16;
        *(float *)(param_1 + 0x224) = fVar15;
        *(float *)(param_1 + 0x3a4) = fVar27;
        pfVar6[2] = fVar16;
        pfVar6 = pfVar6 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if ((uint)uVar4 < param_4) {
      pfVar6 = (float *)(param_3 + uVar4 * 4);
      uVar4 = (ulonglong)(param_4 - (uint)uVar4);
      do {
        fVar15 = _DAT_180be2198 + *(float *)((longlong)pfVar6 + (param_2 - param_3));
        _DAT_180be2198 = -_DAT_180be2198;
        fVar27 = *(float *)(param_1 + 0x324);
        fVar16 = (((*(float *)(param_1 + 0x224) * *(float *)(param_1 + 0x434) +
                    fVar15 * *(float *)(param_1 + 0x430) +
                   *(float *)(param_1 + 0x438) * *(float *)(param_1 + 0x2a4)) -
                  fVar27 * *(float *)(param_1 + 0x428)) -
                 *(float *)(param_1 + 0x42c) * *(float *)(param_1 + 0x3a4)) /
                 *(float *)(param_1 + 0x424);
        *(float *)(param_1 + 0x2a4) = *(float *)(param_1 + 0x224);
        *(float *)(param_1 + 0x324) = fVar16;
        *(float *)(param_1 + 0x224) = fVar15;
        *(float *)(param_1 + 0x3a4) = fVar27;
        *pfVar6 = fVar16;
        pfVar6 = pfVar6 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else if (param_5 == 2) {
    if (3 < param_4) {
      do {
        iVar11 = (int)uVar4;
        uVar12 = iVar11 * 2;
        fVar24 = 1.0 / *(float *)(param_1 + 0x424);
        fVar27 = *(float *)(param_1 + 0x2a4);
        fVar33 = _DAT_180be2198 + *(float *)(param_2 + (ulonglong)uVar12 * 4);
        fVar16 = *(float *)(param_1 + 0x224);
        fVar32 = _DAT_180be2198 + *(float *)(param_2 + (ulonglong)(uVar12 + 1) * 4);
        fVar15 = *(float *)(param_1 + 0x2a8);
        fVar34 = -_DAT_180be2198;
        *(float *)(param_1 + 0x2a4) = fVar16;
        *(float *)(param_1 + 0x224) = fVar33;
        fVar20 = *(float *)(param_1 + 0x3a4);
        fVar1 = *(float *)(param_1 + 0x3a8);
        *(float *)(param_1 + 0x3a4) = *(float *)(param_1 + 0x324);
        *(float *)(param_1 + 0x3a8) = *(float *)(param_1 + 0x328);
        fVar2 = *(float *)(param_1 + 0x228);
        *(float *)(param_1 + 0x2a8) = fVar2;
        *(float *)(param_1 + 0x228) = fVar32;
        fVar27 = (((fVar16 * *(float *)(param_1 + 0x434) + *(float *)(param_1 + 0x430) * fVar33 +
                   *(float *)(param_1 + 0x438) * fVar27) -
                  *(float *)(param_1 + 0x324) * *(float *)(param_1 + 0x428)) -
                 *(float *)(param_1 + 0x42c) * fVar20) * fVar24;
        *(float *)(param_1 + 0x324) = fVar27;
        fVar24 = (((fVar2 * *(float *)(param_1 + 0x434) + *(float *)(param_1 + 0x430) * fVar32 +
                   *(float *)(param_1 + 0x438) * fVar15) -
                  *(float *)(param_1 + 0x328) * *(float *)(param_1 + 0x428)) -
                 *(float *)(param_1 + 0x42c) * fVar1) * fVar24;
        *(float *)(param_1 + 0x328) = fVar24;
        *(float *)(param_3 + (ulonglong)uVar12 * 4) = fVar27;
        *(float *)(param_3 + (ulonglong)(uVar12 + 1) * 4) = fVar24;
        fVar33 = fVar34 + *(float *)(param_2 + (ulonglong)(uVar12 + 2) * 4);
        fVar27 = *(float *)(param_1 + 0x224);
        fVar16 = *(float *)(param_1 + 0x2a4);
        fVar32 = fVar34 + *(float *)(param_2 + (ulonglong)(uVar12 + 3) * 4);
        fVar24 = 1.0 / *(float *)(param_1 + 0x424);
        fVar15 = *(float *)(param_1 + 0x2a8);
        fVar20 = *(float *)(param_1 + 0x3a4);
        fVar1 = *(float *)(param_1 + 0x3a8);
        *(float *)(param_1 + 0x3a4) = *(float *)(param_1 + 0x324);
        fVar2 = *(float *)(param_1 + 0x228);
        *(float *)(param_1 + 0x2a8) = fVar2;
        *(float *)(param_1 + 0x2a4) = fVar27;
        *(float *)(param_1 + 0x224) = fVar33;
        *(float *)(param_1 + 0x228) = fVar32;
        *(float *)(param_1 + 0x3a8) = *(float *)(param_1 + 0x328);
        fVar27 = (((fVar27 * *(float *)(param_1 + 0x434) + *(float *)(param_1 + 0x430) * fVar33 +
                   *(float *)(param_1 + 0x438) * fVar16) -
                  *(float *)(param_1 + 0x324) * *(float *)(param_1 + 0x428)) -
                 *(float *)(param_1 + 0x42c) * fVar20) * fVar24;
        *(float *)(param_1 + 0x324) = fVar27;
        fVar24 = (((fVar2 * *(float *)(param_1 + 0x434) + *(float *)(param_1 + 0x430) * fVar32 +
                   *(float *)(param_1 + 0x438) * fVar15) -
                  *(float *)(param_1 + 0x328) * *(float *)(param_1 + 0x428)) -
                 *(float *)(param_1 + 0x42c) * fVar1) * fVar24;
        *(float *)(param_1 + 0x328) = fVar24;
        *(float *)(param_3 + (ulonglong)(uVar12 + 3) * 4) = fVar24;
        uVar3 = (iVar11 + 3) * 2 - 2;
        *(float *)(param_3 + (ulonglong)(uVar12 + 2) * 4) = fVar27;
        fVar32 = *(float *)(param_2 + (ulonglong)uVar3 * 4) - fVar34;
        fVar27 = *(float *)(param_1 + 0x2a4);
        fVar16 = *(float *)(param_1 + 0x224);
        fVar24 = *(float *)(param_2 + (ulonglong)(uVar12 + 5) * 4) - fVar34;
        fVar15 = *(float *)(param_1 + 0x2a8);
        *(float *)(param_1 + 0x2a4) = fVar16;
        *(float *)(param_1 + 0x224) = fVar32;
        fVar20 = *(float *)(param_1 + 0x3a4);
        fVar1 = *(float *)(param_1 + 0x3a8);
        *(float *)(param_1 + 0x3a4) = *(float *)(param_1 + 0x324);
        *(float *)(param_1 + 0x3a8) = *(float *)(param_1 + 0x328);
        fVar2 = *(float *)(param_1 + 0x228);
        *(float *)(param_1 + 0x2a8) = fVar2;
        *(float *)(param_1 + 0x228) = fVar24;
        fVar16 = (((fVar16 * *(float *)(param_1 + 0x434) + *(float *)(param_1 + 0x430) * fVar32 +
                   *(float *)(param_1 + 0x438) * fVar27) -
                  *(float *)(param_1 + 0x324) * *(float *)(param_1 + 0x428)) -
                 *(float *)(param_1 + 0x42c) * fVar20) / *(float *)(param_1 + 0x424);
        *(float *)(param_1 + 0x324) = fVar16;
        fVar27 = (((fVar2 * *(float *)(param_1 + 0x434) + *(float *)(param_1 + 0x430) * fVar24 +
                   *(float *)(param_1 + 0x438) * fVar15) -
                  *(float *)(param_1 + 0x328) * *(float *)(param_1 + 0x428)) -
                 *(float *)(param_1 + 0x42c) * fVar1) / *(float *)(param_1 + 0x424);
        *(float *)(param_1 + 0x328) = fVar27;
        *(float *)(param_3 + (ulonglong)(uVar12 + 5) * 4) = fVar27;
        *(float *)(param_3 + (ulonglong)uVar3 * 4) = fVar16;
        uVar3 = (iVar11 + 3) * 2;
        fVar24 = fVar34 + *(float *)(param_2 + (ulonglong)uVar3 * 4);
        uVar4 = (ulonglong)(iVar11 + 4U);
        fVar27 = *(float *)(param_1 + 0x2a4);
        fVar16 = *(float *)(param_1 + 0x224);
        fVar15 = *(float *)(param_1 + 0x2a8);
        _DAT_180be2198 = -fVar34;
        fVar34 = fVar34 + *(float *)(param_2 + (ulonglong)(uVar12 + 7) * 4);
        *(float *)(param_1 + 0x2a4) = fVar16;
        *(float *)(param_1 + 0x224) = fVar24;
        fVar20 = *(float *)(param_1 + 0x3a4);
        fVar1 = *(float *)(param_1 + 0x3a8);
        *(float *)(param_1 + 0x3a4) = *(float *)(param_1 + 0x324);
        *(float *)(param_1 + 0x3a8) = *(float *)(param_1 + 0x328);
        fVar2 = *(float *)(param_1 + 0x228);
        *(float *)(param_1 + 0x2a8) = fVar2;
        *(float *)(param_1 + 0x228) = fVar34;
        fVar16 = (((fVar16 * *(float *)(param_1 + 0x434) + *(float *)(param_1 + 0x430) * fVar24 +
                   *(float *)(param_1 + 0x438) * fVar27) -
                  *(float *)(param_1 + 0x324) * *(float *)(param_1 + 0x428)) -
                 *(float *)(param_1 + 0x42c) * fVar20) / *(float *)(param_1 + 0x424);
        *(float *)(param_1 + 0x324) = fVar16;
        fVar27 = (((fVar2 * *(float *)(param_1 + 0x434) + *(float *)(param_1 + 0x430) * fVar34 +
                   *(float *)(param_1 + 0x438) * fVar15) -
                  *(float *)(param_1 + 0x328) * *(float *)(param_1 + 0x428)) -
                 *(float *)(param_1 + 0x42c) * fVar1) / *(float *)(param_1 + 0x424);
        *(float *)(param_1 + 0x328) = fVar27;
        *(float *)(param_3 + (ulonglong)uVar3 * 4) = fVar16;
        *(float *)(param_3 + (ulonglong)(uVar12 + 7) * 4) = fVar27;
      } while (iVar11 + 4U < param_4 - 3);
    }
    uVar3 = (uint)uVar4;
    while (uVar3 < param_4) {
      uVar12 = (int)uVar4 * 2;
      fVar34 = _DAT_180be2198 + *(float *)(param_2 + (ulonglong)uVar12 * 4);
      fVar24 = 1.0 / *(float *)(param_1 + 0x424);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      fVar27 = *(float *)(param_1 + 0x2a4);
      fVar16 = *(float *)(param_1 + 0x224);
      fVar15 = *(float *)(param_1 + 0x2a8);
      fVar32 = _DAT_180be2198 + *(float *)(param_2 + (ulonglong)(uVar12 + 1) * 4);
      *(float *)(param_1 + 0x2a4) = fVar16;
      *(float *)(param_1 + 0x224) = fVar34;
      fVar20 = *(float *)(param_1 + 0x3a4);
      fVar1 = *(float *)(param_1 + 0x3a8);
      *(float *)(param_1 + 0x3a4) = *(float *)(param_1 + 0x324);
      *(float *)(param_1 + 0x3a8) = *(float *)(param_1 + 0x328);
      fVar2 = *(float *)(param_1 + 0x228);
      *(float *)(param_1 + 0x2a8) = fVar2;
      *(float *)(param_1 + 0x228) = fVar32;
      fVar27 = (((fVar16 * *(float *)(param_1 + 0x434) + *(float *)(param_1 + 0x430) * fVar34 +
                 *(float *)(param_1 + 0x438) * fVar27) -
                *(float *)(param_1 + 0x324) * *(float *)(param_1 + 0x428)) -
               *(float *)(param_1 + 0x42c) * fVar20) * fVar24;
      *(float *)(param_1 + 0x324) = fVar27;
      fVar24 = (((fVar2 * *(float *)(param_1 + 0x434) + *(float *)(param_1 + 0x430) * fVar32 +
                 *(float *)(param_1 + 0x438) * fVar15) -
                *(float *)(param_1 + 0x328) * *(float *)(param_1 + 0x428)) -
               *(float *)(param_1 + 0x42c) * fVar1) * fVar24;
      *(float *)(param_1 + 0x328) = fVar24;
      *(float *)(param_3 + (ulonglong)uVar12 * 4) = fVar27;
      *(float *)(param_3 + (ulonglong)(uVar12 + 1) * 4) = fVar24;
      _DAT_180be2198 = -_DAT_180be2198;
    }
  }
  else if (param_5 == 6) {
    if (param_4 != 0) {
      fStack_e0 = _DAT_180be2198;
      do {
        fVar27 = *(float *)(param_1 + 0x434);
        fVar16 = *(float *)(param_1 + 0x438);
        uVar3 = (int)uVar4 * 6;
        fVar15 = *(float *)(param_1 + 0x428);
        fVar28 = fStack_e0 + *(float *)(param_2 + (ulonglong)(uVar3 + 1) * 4);
        fVar20 = *(float *)(param_1 + 0x42c);
        fVar14 = fStack_e0 + *(float *)(param_2 + (ulonglong)uVar3 * 4);
        fVar21 = 1.0 / *(float *)(param_1 + 0x424);
        fVar25 = fStack_e0 + *(float *)(param_2 + (ulonglong)(uVar3 + 2) * 4);
        fVar34 = fStack_e0 + *(float *)(param_2 + (ulonglong)(uVar3 + 3) * 4);
        fVar33 = fStack_e0 + *(float *)(param_2 + (ulonglong)(uVar3 + 4) * 4);
        fVar13 = fStack_e0 + *(float *)(param_2 + (ulonglong)(uVar3 + 5) * 4);
        fVar1 = *(float *)(param_1 + 0x430);
        fVar2 = *(float *)(param_1 + 0x22c);
        fVar23 = (((*(float *)(param_1 + 0x224) * fVar27 + fVar1 * fVar14 +
                   fVar16 * *(float *)(param_1 + 0x2a4)) - *(float *)(param_1 + 0x324) * fVar15) -
                 fVar20 * *(float *)(param_1 + 0x3a4)) * fVar21;
        fVar22 = (((*(float *)(param_1 + 0x228) * fVar27 + fVar1 * fVar28 +
                   fVar16 * *(float *)(param_1 + 0x2a8)) - *(float *)(param_1 + 0x328) * fVar15) -
                 fVar20 * *(float *)(param_1 + 0x3a8)) * fVar21;
        fVar24 = *(float *)(param_1 + 0x230);
        fVar32 = *(float *)(param_1 + 0x234);
        fVar30 = (((fVar2 * fVar27 + fVar1 * fVar25 + fVar16 * *(float *)(param_1 + 0x2ac)) -
                  *(float *)(param_1 + 0x32c) * fVar15) - fVar20 * *(float *)(param_1 + 0x3ac)) *
                 fVar21;
        fVar20 = (((fVar24 * fVar27 + fVar1 * fVar34 + fVar16 * *(float *)(param_1 + 0x2b0)) -
                  *(float *)(param_1 + 0x330) * fVar15) - fVar20 * *(float *)(param_1 + 0x3b0)) *
                 fVar21;
        fVar15 = (((fVar32 * fVar27 + fVar1 * fVar33 + fVar16 * *(float *)(param_1 + 0x2b4)) -
                  *(float *)(param_1 + 0x334) * *(float *)(param_1 + 0x428)) -
                 *(float *)(param_1 + 0x42c) * *(float *)(param_1 + 0x3b4)) * fVar21;
        fVar16 = *(float *)(param_1 + 0x2b8);
        *(float *)(param_1 + 0x2b8) = *(float *)(param_1 + 0x238);
        *(float *)(param_1 + 0x2a8) = *(float *)(param_1 + 0x228);
        *(int32_t *)(param_1 + 0x2a4) = *(int32_t *)(param_1 + 0x224);
        *(float *)(param_1 + 0x224) = fVar14;
        fVar21 = (((*(float *)(param_1 + 0x238) * fVar27 + *(float *)(param_1 + 0x430) * fVar13 +
                   *(float *)(param_1 + 0x438) * fVar16) -
                  *(float *)(param_1 + 0x338) * *(float *)(param_1 + 0x428)) -
                 *(float *)(param_1 + 0x42c) * *(float *)(param_1 + 0x3b8)) * fVar21;
        *(float *)(param_1 + 0x228) = fVar28;
        *(float *)(param_1 + 0x22c) = fVar25;
        *(float *)(param_1 + 0x230) = fVar34;
        *(float *)(param_1 + 0x234) = fVar33;
        *(int32_t *)(param_1 + 0x3a4) = *(int32_t *)(param_1 + 0x324);
        *(float *)(param_1 + 0x2ac) = fVar2;
        *(float *)(param_1 + 0x2b0) = fVar24;
        *(float *)(param_1 + 0x2b4) = fVar32;
        *(float *)(param_1 + 0x238) = fVar13;
        uVar12 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar12;
        *(float *)(param_1 + 0x3b8) = *(float *)(param_1 + 0x338);
        fStack_e0 = -fStack_e0;
        *(float *)(param_1 + 0x324) = fVar23;
        *(float *)(param_1 + 0x3a8) = *(float *)(param_1 + 0x328);
        *(float *)(param_1 + 0x328) = fVar22;
        *(float *)(param_1 + 0x3ac) = *(float *)(param_1 + 0x32c);
        *(float *)(param_1 + 0x32c) = fVar30;
        *(float *)(param_1 + 0x3b0) = *(float *)(param_1 + 0x330);
        *(float *)(param_1 + 0x330) = fVar20;
        *(float *)(param_1 + 0x3b4) = *(float *)(param_1 + 0x334);
        *(float *)(param_1 + 0x334) = fVar15;
        *(float *)(param_1 + 0x338) = fVar21;
        _DAT_180be2198 = fStack_e0;
        *(float *)(param_3 + (ulonglong)uVar3 * 4) = fVar23;
        *(float *)(param_3 + (ulonglong)(uVar3 + 1) * 4) = fVar22;
        *(float *)(param_3 + (ulonglong)(uVar3 + 2) * 4) = fVar30;
        *(float *)(param_3 + (ulonglong)(uVar3 + 3) * 4) = fVar20;
        *(float *)(param_3 + (ulonglong)(uVar3 + 4) * 4) = fVar15;
        *(float *)(param_3 + (ulonglong)(uVar3 + 5) * 4) = fVar21;
      } while (uVar12 < param_4);
    }
  }
  else if (param_5 == 8) {
    if (param_4 != 0) {
      do {
        fVar27 = *(float *)(param_1 + 0x430);
        uVar3 = (int)uVar4 * 8;
        fVar16 = *(float *)(param_1 + 0x434);
        fVar15 = *(float *)(param_1 + 0x438);
        fVar31 = _DAT_180be2198 + *(float *)(param_2 + (ulonglong)(uVar3 + 1) * 4);
        fVar20 = *(float *)(param_1 + 0x428);
        fVar1 = *(float *)(param_1 + 0x42c);
        fVar25 = _DAT_180be2198 + *(float *)(param_2 + (ulonglong)uVar3 * 4);
        fVar2 = *(float *)(param_1 + 0x22c);
        fVar29 = _DAT_180be2198 + *(float *)(param_2 + (ulonglong)(uVar3 + 2) * 4);
        fVar26 = _DAT_180be2198 + *(float *)(param_2 + (ulonglong)(uVar3 + 3) * 4);
        fVar14 = _DAT_180be2198 + *(float *)(param_2 + (ulonglong)(uVar3 + 4) * 4);
        fVar21 = _DAT_180be2198 + *(float *)(param_2 + (ulonglong)(uVar3 + 5) * 4);
        fVar22 = _DAT_180be2198 + *(float *)(param_2 + (ulonglong)(uVar3 + 6) * 4);
        fVar23 = _DAT_180be2198 + *(float *)(param_2 + (ulonglong)(uVar3 + 7) * 4);
        fVar28 = 1.0 / *(float *)(param_1 + 0x424);
        fVar17 = (((fVar27 * fVar25 + *(float *)(param_1 + 0x224) * fVar16 +
                   fVar15 * *(float *)(param_1 + 0x2a4)) - *(float *)(param_1 + 0x324) * fVar20) -
                 fVar1 * *(float *)(param_1 + 0x3a4)) * fVar28;
        fVar18 = (((*(float *)(param_1 + 0x228) * fVar16 + fVar27 * fVar31 +
                   fVar15 * *(float *)(param_1 + 0x2a8)) - *(float *)(param_1 + 0x328) * fVar20) -
                 fVar1 * *(float *)(param_1 + 0x3a8)) * fVar28;
        fVar24 = *(float *)(param_1 + 0x230);
        fVar32 = *(float *)(param_1 + 0x330);
        fVar34 = *(float *)(param_1 + 0x234);
        fVar19 = (((fVar2 * fVar16 + fVar27 * fVar29 + fVar15 * *(float *)(param_1 + 0x2ac)) -
                  *(float *)(param_1 + 0x32c) * fVar20) - fVar1 * *(float *)(param_1 + 0x3ac)) *
                 fVar28;
        fVar33 = *(float *)(param_1 + 0x238);
        fVar30 = (((fVar24 * fVar16 + fVar27 * fVar26 + fVar15 * *(float *)(param_1 + 0x2b0)) -
                  fVar32 * fVar20) - fVar1 * *(float *)(param_1 + 0x3b0)) * fVar28;
        fVar13 = *(float *)(param_1 + 0x23c);
        fVar28 = (((fVar34 * fVar16 + fVar27 * fVar14 + fVar15 * *(float *)(param_1 + 0x2b4)) -
                  *(float *)(param_1 + 0x334) * fVar20) - fVar1 * *(float *)(param_1 + 0x3b4)) *
                 fVar28;
        fVar20 = (((fVar33 * fVar16 + fVar27 * fVar21 +
                   *(float *)(param_1 + 0x438) * *(float *)(param_1 + 0x2b8)) -
                  *(float *)(param_1 + 0x338) * *(float *)(param_1 + 0x428)) -
                 *(float *)(param_1 + 0x42c) * *(float *)(param_1 + 0x3b8)) /
                 *(float *)(param_1 + 0x424);
        fVar27 = *(float *)(param_1 + 0x240);
        fVar15 = (((fVar13 * *(float *)(param_1 + 0x434) + *(float *)(param_1 + 0x430) * fVar22 +
                   *(float *)(param_1 + 0x438) * *(float *)(param_1 + 700)) -
                  *(float *)(param_1 + 0x33c) * *(float *)(param_1 + 0x428)) -
                 *(float *)(param_1 + 0x42c) * *(float *)(param_1 + 0x3bc)) /
                 *(float *)(param_1 + 0x424);
        fVar16 = (((fVar27 * *(float *)(param_1 + 0x434) + fVar23 * *(float *)(param_1 + 0x430) +
                   *(float *)(param_1 + 0x438) * *(float *)(param_1 + 0x2c0)) -
                  *(float *)(param_1 + 0x340) * *(float *)(param_1 + 0x428)) -
                 *(float *)(param_1 + 0x42c) * *(float *)(param_1 + 0x3c0)) /
                 *(float *)(param_1 + 0x424);
        *(int32_t *)(param_1 + 0x2a4) = *(int32_t *)(param_1 + 0x224);
        *(float *)(param_1 + 0x224) = fVar25;
        *(int32_t *)(param_1 + 0x2a8) = *(int32_t *)(param_1 + 0x228);
        *(float *)(param_1 + 0x228) = fVar31;
        *(float *)(param_1 + 0x22c) = fVar29;
        *(float *)(param_1 + 0x230) = fVar26;
        *(float *)(param_1 + 0x234) = fVar14;
        *(float *)(param_1 + 0x238) = fVar21;
        *(float *)(param_1 + 0x23c) = fVar22;
        *(float *)(param_1 + 0x240) = fVar23;
        *(int32_t *)(param_1 + 0x3a4) = *(int32_t *)(param_1 + 0x324);
        *(int32_t *)(param_1 + 0x3a8) = *(int32_t *)(param_1 + 0x328);
        *(int32_t *)(param_1 + 0x3ac) = *(int32_t *)(param_1 + 0x32c);
        *(float *)(param_1 + 0x2b8) = fVar33;
        *(float *)(param_1 + 700) = fVar13;
        *(float *)(param_1 + 0x2c0) = fVar27;
        *(float *)(param_1 + 0x3c0) = *(float *)(param_1 + 0x340);
        *(float *)(param_1 + 0x330) = fVar30;
        *(float *)(param_1 + 0x2ac) = fVar2;
        *(float *)(param_1 + 0x2b0) = fVar24;
        *(float *)(param_1 + 0x2b4) = fVar34;
        *(float *)(param_1 + 0x324) = fVar17;
        *(float *)(param_1 + 0x328) = fVar18;
        *(float *)(param_1 + 0x32c) = fVar19;
        *(float *)(param_1 + 0x3b0) = fVar32;
        *(float *)(param_1 + 0x3b4) = *(float *)(param_1 + 0x334);
        *(float *)(param_1 + 0x334) = fVar28;
        *(float *)(param_1 + 0x3b8) = *(float *)(param_1 + 0x338);
        *(float *)(param_1 + 0x338) = fVar20;
        *(float *)(param_1 + 0x3bc) = *(float *)(param_1 + 0x33c);
        *(float *)(param_1 + 0x33c) = fVar15;
        *(float *)(param_1 + 0x340) = fVar16;
        *(float *)(param_3 + (ulonglong)uVar3 * 4) = fVar17;
        *(float *)(param_3 + (ulonglong)(uVar3 + 1) * 4) = fVar18;
        *(float *)(param_3 + (ulonglong)(uVar3 + 2) * 4) = fVar19;
        *(float *)(param_3 + (ulonglong)(uVar3 + 3) * 4) = fVar30;
        *(float *)(param_3 + (ulonglong)(uVar3 + 4) * 4) = fVar28;
        *(float *)(param_3 + (ulonglong)(uVar3 + 5) * 4) = fVar20;
        *(float *)(param_3 + (ulonglong)(uVar3 + 6) * 4) = fVar15;
        *(float *)(param_3 + (ulonglong)(uVar3 + 7) * 4) = fVar16;
        _DAT_180be2198 = -_DAT_180be2198;
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while (uVar3 < param_4);
    }
  }
  else if (0 < param_5) {
    pfVar6 = (float *)(param_1 + 0x224);
    uVar9 = uVar4;
    fVar27 = _DAT_180be2198;
    do {
      iVar11 = (int)uVar9;
      uVar9 = uVar4;
      if (3 < param_4) {
        iVar10 = 3;
        do {
          fVar16 = pfVar6[0x40];
          fVar20 = -fVar27;
          uVar5 = (ulonglong)(uint)((int)uVar9 * param_5 + iVar11);
          fVar27 = fVar27 + *(float *)(param_2 + uVar5 * 4);
          fVar15 = (((*pfVar6 * *(float *)(param_1 + 0x434) + fVar27 * *(float *)(param_1 + 0x430) +
                     *(float *)(param_1 + 0x438) * pfVar6[0x20]) -
                    fVar16 * *(float *)(param_1 + 0x428)) -
                   pfVar6[0x60] * *(float *)(param_1 + 0x42c)) / *(float *)(param_1 + 0x424);
          pfVar6[0x20] = *pfVar6;
          pfVar6[0x40] = fVar15;
          *pfVar6 = fVar27;
          pfVar6[0x60] = fVar16;
          *(float *)(param_3 + uVar5 * 4) = fVar15;
          fVar27 = pfVar6[0x40];
          uVar5 = (ulonglong)(uint)((iVar10 + -2) * param_5 + iVar11);
          uVar8 = (ulonglong)(uint)((iVar10 + -1) * param_5 + iVar11);
          fVar15 = fVar20 + *(float *)(param_2 + uVar5 * 4);
          fVar16 = (((*pfVar6 * *(float *)(param_1 + 0x434) + fVar15 * *(float *)(param_1 + 0x430) +
                     *(float *)(param_1 + 0x438) * pfVar6[0x20]) -
                    fVar27 * *(float *)(param_1 + 0x428)) -
                   pfVar6[0x60] * *(float *)(param_1 + 0x42c)) / *(float *)(param_1 + 0x424);
          pfVar6[0x20] = *pfVar6;
          pfVar6[0x40] = fVar16;
          *pfVar6 = fVar15;
          pfVar6[0x60] = fVar27;
          *(float *)(param_3 + uVar5 * 4) = fVar16;
          fVar15 = *(float *)(param_2 + uVar8 * 4) - fVar20;
          fVar27 = pfVar6[0x40];
          fVar16 = (((fVar15 * *(float *)(param_1 + 0x430) + *pfVar6 * *(float *)(param_1 + 0x434) +
                     *(float *)(param_1 + 0x438) * pfVar6[0x20]) -
                    fVar27 * *(float *)(param_1 + 0x428)) -
                   pfVar6[0x60] * *(float *)(param_1 + 0x42c)) / *(float *)(param_1 + 0x424);
          pfVar6[0x20] = *pfVar6;
          pfVar6[0x40] = fVar16;
          *pfVar6 = fVar15;
          pfVar6[0x60] = fVar27;
          *(float *)(param_3 + uVar8 * 4) = fVar16;
          uVar3 = (int)uVar9 + 4;
          uVar9 = (ulonglong)uVar3;
          fVar27 = -fVar20;
          fVar16 = pfVar6[0x40];
          uVar5 = (ulonglong)(uint)(iVar10 * param_5 + iVar11);
          fVar20 = fVar20 + *(float *)(param_2 + uVar5 * 4);
          fVar15 = (((*pfVar6 * *(float *)(param_1 + 0x434) + fVar20 * *(float *)(param_1 + 0x430) +
                     *(float *)(param_1 + 0x438) * pfVar6[0x20]) -
                    fVar16 * *(float *)(param_1 + 0x428)) -
                   pfVar6[0x60] * *(float *)(param_1 + 0x42c)) / *(float *)(param_1 + 0x424);
          pfVar6[0x20] = *pfVar6;
          pfVar6[0x40] = fVar15;
          *pfVar6 = fVar20;
          pfVar6[0x60] = fVar16;
          *(float *)(param_3 + uVar5 * 4) = fVar15;
          iVar10 = iVar10 + 4;
          _DAT_180be2198 = fVar27;
        } while (uVar3 < param_4 - 3);
      }
      uVar3 = (uint)uVar9;
      while (uVar3 < param_4) {
        iVar10 = (int)uVar9;
        uVar3 = iVar10 + 1;
        uVar9 = (ulonglong)uVar3;
        _DAT_180be2198 = -fVar27;
        fVar16 = pfVar6[0x40];
        uVar5 = (ulonglong)(uint)(iVar10 * param_5 + iVar11);
        fVar27 = fVar27 + *(float *)(param_2 + uVar5 * 4);
        fVar15 = (((*pfVar6 * *(float *)(param_1 + 0x434) + fVar27 * *(float *)(param_1 + 0x430) +
                   *(float *)(param_1 + 0x438) * pfVar6[0x20]) -
                  fVar16 * *(float *)(param_1 + 0x428)) - pfVar6[0x60] * *(float *)(param_1 + 0x42c)
                 ) / *(float *)(param_1 + 0x424);
        pfVar6[0x20] = *pfVar6;
        pfVar6[0x40] = fVar15;
        *pfVar6 = fVar27;
        pfVar6[0x60] = fVar16;
        *(float *)(param_3 + uVar5 * 4) = fVar15;
        fVar27 = _DAT_180be2198;
      }
      uVar9 = (ulonglong)(iVar11 + 1U);
      pfVar6 = pfVar6 + 1;
    } while ((int)(iVar11 + 1U) < param_5);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18077b7d0(longlong param_1,uint64_t param_2,uint64_t param_3,int param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong unaff_RBP;
  longlong unaff_RSI;
  float *pfVar7;
  uint uVar8;
  int in_R11D;
  uint unaff_R12D;
  longlong unaff_R14;
  uint unaff_R15D;
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
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fStackX_8;
  
  if (in_R11D == 2) {
    if (3 < unaff_R15D) {
      do {
        uVar8 = unaff_R12D * 2;
        fVar18 = 1.0 / *(float *)(param_1 + 0x424);
        fVar22 = *(float *)(param_1 + 0x2a4);
        fVar29 = _DAT_180be2198 + *(float *)(unaff_RBP + (ulonglong)uVar8 * 4);
        fVar25 = *(float *)(param_1 + 0x224);
        fVar28 = _DAT_180be2198 + *(float *)(unaff_RBP + (ulonglong)(uVar8 + 1) * 4);
        fVar15 = *(float *)(param_1 + 0x2a8);
        fVar30 = -_DAT_180be2198;
        *(float *)(param_1 + 0x2a4) = fVar25;
        *(float *)(param_1 + 0x224) = fVar29;
        fVar20 = *(float *)(param_1 + 0x3a4);
        fVar1 = *(float *)(param_1 + 0x3a8);
        *(float *)(param_1 + 0x3a4) = *(float *)(param_1 + 0x324);
        *(float *)(param_1 + 0x3a8) = *(float *)(param_1 + 0x328);
        fVar2 = *(float *)(param_1 + 0x228);
        *(float *)(param_1 + 0x2a8) = fVar2;
        *(float *)(param_1 + 0x228) = fVar28;
        fVar22 = (((fVar25 * *(float *)(param_1 + 0x434) + *(float *)(param_1 + 0x430) * fVar29 +
                   *(float *)(param_1 + 0x438) * fVar22) -
                  *(float *)(param_1 + 0x324) * *(float *)(param_1 + 0x428)) -
                 *(float *)(param_1 + 0x42c) * fVar20) * fVar18;
        *(float *)(param_1 + 0x324) = fVar22;
        fVar18 = (((fVar2 * *(float *)(param_1 + 0x434) + *(float *)(param_1 + 0x430) * fVar28 +
                   *(float *)(param_1 + 0x438) * fVar15) -
                  *(float *)(param_1 + 0x328) * *(float *)(param_1 + 0x428)) -
                 *(float *)(param_1 + 0x42c) * fVar1) * fVar18;
        *(float *)(param_1 + 0x328) = fVar18;
        *(float *)(unaff_R14 + (ulonglong)uVar8 * 4) = fVar22;
        *(float *)(unaff_R14 + (ulonglong)(uVar8 + 1) * 4) = fVar18;
        fVar29 = fVar30 + *(float *)(unaff_RBP + (ulonglong)(uVar8 + 2) * 4);
        fVar22 = *(float *)(param_1 + 0x224);
        fVar25 = *(float *)(param_1 + 0x2a4);
        fVar28 = fVar30 + *(float *)(unaff_RBP + (ulonglong)(uVar8 + 3) * 4);
        fVar18 = 1.0 / *(float *)(param_1 + 0x424);
        fVar15 = *(float *)(param_1 + 0x2a8);
        fVar20 = *(float *)(param_1 + 0x3a4);
        fVar1 = *(float *)(param_1 + 0x3a8);
        *(float *)(param_1 + 0x3a4) = *(float *)(param_1 + 0x324);
        fVar2 = *(float *)(param_1 + 0x228);
        *(float *)(param_1 + 0x2a8) = fVar2;
        *(float *)(param_1 + 0x2a4) = fVar22;
        *(float *)(param_1 + 0x224) = fVar29;
        *(float *)(param_1 + 0x228) = fVar28;
        *(float *)(param_1 + 0x3a8) = *(float *)(param_1 + 0x328);
        fVar22 = (((fVar22 * *(float *)(param_1 + 0x434) + *(float *)(param_1 + 0x430) * fVar29 +
                   *(float *)(param_1 + 0x438) * fVar25) -
                  *(float *)(param_1 + 0x324) * *(float *)(param_1 + 0x428)) -
                 *(float *)(param_1 + 0x42c) * fVar20) * fVar18;
        *(float *)(param_1 + 0x324) = fVar22;
        fVar18 = (((fVar2 * *(float *)(param_1 + 0x434) + *(float *)(param_1 + 0x430) * fVar28 +
                   *(float *)(param_1 + 0x438) * fVar15) -
                  *(float *)(param_1 + 0x328) * *(float *)(param_1 + 0x428)) -
                 *(float *)(param_1 + 0x42c) * fVar1) * fVar18;
        *(float *)(param_1 + 0x328) = fVar18;
        *(float *)(unaff_R14 + (ulonglong)(uVar8 + 3) * 4) = fVar18;
        uVar3 = (unaff_R12D + 3) * 2 - 2;
        *(float *)(unaff_R14 + (ulonglong)(uVar8 + 2) * 4) = fVar22;
        fVar28 = *(float *)(unaff_RBP + (ulonglong)uVar3 * 4) - fVar30;
        fVar22 = *(float *)(param_1 + 0x2a4);
        fVar25 = *(float *)(param_1 + 0x224);
        fVar18 = *(float *)(unaff_RBP + (ulonglong)(uVar8 + 5) * 4) - fVar30;
        fVar15 = *(float *)(param_1 + 0x2a8);
        *(float *)(param_1 + 0x2a4) = fVar25;
        *(float *)(param_1 + 0x224) = fVar28;
        fVar20 = *(float *)(param_1 + 0x3a4);
        fVar1 = *(float *)(param_1 + 0x3a8);
        *(float *)(param_1 + 0x3a4) = *(float *)(param_1 + 0x324);
        *(float *)(param_1 + 0x3a8) = *(float *)(param_1 + 0x328);
        fVar2 = *(float *)(param_1 + 0x228);
        *(float *)(param_1 + 0x2a8) = fVar2;
        *(float *)(param_1 + 0x228) = fVar18;
        fVar25 = (((fVar25 * *(float *)(param_1 + 0x434) + *(float *)(param_1 + 0x430) * fVar28 +
                   *(float *)(param_1 + 0x438) * fVar22) -
                  *(float *)(param_1 + 0x324) * *(float *)(param_1 + 0x428)) -
                 *(float *)(param_1 + 0x42c) * fVar20) / *(float *)(param_1 + 0x424);
        *(float *)(param_1 + 0x324) = fVar25;
        fVar22 = (((fVar2 * *(float *)(param_1 + 0x434) + *(float *)(param_1 + 0x430) * fVar18 +
                   *(float *)(param_1 + 0x438) * fVar15) -
                  *(float *)(param_1 + 0x328) * *(float *)(param_1 + 0x428)) -
                 *(float *)(param_1 + 0x42c) * fVar1) / *(float *)(param_1 + 0x424);
        *(float *)(param_1 + 0x328) = fVar22;
        *(float *)(unaff_R14 + (ulonglong)(uVar8 + 5) * 4) = fVar22;
        *(float *)(unaff_R14 + (ulonglong)uVar3 * 4) = fVar25;
        uVar3 = (unaff_R12D + 3) * 2;
        fVar18 = fVar30 + *(float *)(unaff_RBP + (ulonglong)uVar3 * 4);
        unaff_R12D = unaff_R12D + 4;
        fVar22 = *(float *)(param_1 + 0x2a4);
        fVar25 = *(float *)(param_1 + 0x224);
        fVar15 = *(float *)(param_1 + 0x2a8);
        _DAT_180be2198 = -fVar30;
        fVar30 = fVar30 + *(float *)(unaff_RBP + (ulonglong)(uVar8 + 7) * 4);
        *(float *)(param_1 + 0x2a4) = fVar25;
        *(float *)(param_1 + 0x224) = fVar18;
        fVar20 = *(float *)(param_1 + 0x3a4);
        fVar1 = *(float *)(param_1 + 0x3a8);
        *(float *)(param_1 + 0x3a4) = *(float *)(param_1 + 0x324);
        *(float *)(param_1 + 0x3a8) = *(float *)(param_1 + 0x328);
        fVar2 = *(float *)(param_1 + 0x228);
        *(float *)(param_1 + 0x2a8) = fVar2;
        *(float *)(param_1 + 0x228) = fVar30;
        fVar25 = (((fVar25 * *(float *)(param_1 + 0x434) + *(float *)(param_1 + 0x430) * fVar18 +
                   *(float *)(param_1 + 0x438) * fVar22) -
                  *(float *)(param_1 + 0x324) * *(float *)(param_1 + 0x428)) -
                 *(float *)(param_1 + 0x42c) * fVar20) / *(float *)(param_1 + 0x424);
        *(float *)(param_1 + 0x324) = fVar25;
        fVar22 = (((fVar2 * *(float *)(param_1 + 0x434) + *(float *)(param_1 + 0x430) * fVar30 +
                   *(float *)(param_1 + 0x438) * fVar15) -
                  *(float *)(param_1 + 0x328) * *(float *)(param_1 + 0x428)) -
                 *(float *)(param_1 + 0x42c) * fVar1) / *(float *)(param_1 + 0x424);
        *(float *)(param_1 + 0x328) = fVar22;
        *(float *)(unaff_R14 + (ulonglong)uVar3 * 4) = fVar25;
        *(float *)(unaff_R14 + (ulonglong)(uVar8 + 7) * 4) = fVar22;
      } while (unaff_R12D < param_4 - 3U);
    }
    for (; unaff_R12D < unaff_R15D; unaff_R12D = unaff_R12D + 1) {
      uVar8 = unaff_R12D * 2;
      fVar30 = _DAT_180be2198 + *(float *)(unaff_RBP + (ulonglong)uVar8 * 4);
      fVar18 = 1.0 / *(float *)(param_1 + 0x424);
      fVar22 = *(float *)(param_1 + 0x2a4);
      fVar25 = *(float *)(param_1 + 0x224);
      fVar15 = *(float *)(param_1 + 0x2a8);
      fVar28 = _DAT_180be2198 + *(float *)(unaff_RBP + (ulonglong)(uVar8 + 1) * 4);
      *(float *)(param_1 + 0x2a4) = fVar25;
      *(float *)(param_1 + 0x224) = fVar30;
      fVar20 = *(float *)(param_1 + 0x3a4);
      fVar1 = *(float *)(param_1 + 0x3a8);
      *(float *)(param_1 + 0x3a4) = *(float *)(param_1 + 0x324);
      *(float *)(param_1 + 0x3a8) = *(float *)(param_1 + 0x328);
      fVar2 = *(float *)(param_1 + 0x228);
      *(float *)(param_1 + 0x2a8) = fVar2;
      *(float *)(param_1 + 0x228) = fVar28;
      fVar22 = (((fVar25 * *(float *)(param_1 + 0x434) + *(float *)(param_1 + 0x430) * fVar30 +
                 *(float *)(param_1 + 0x438) * fVar22) -
                *(float *)(param_1 + 0x324) * *(float *)(param_1 + 0x428)) -
               *(float *)(param_1 + 0x42c) * fVar20) * fVar18;
      *(float *)(param_1 + 0x324) = fVar22;
      fVar18 = (((fVar2 * *(float *)(param_1 + 0x434) + *(float *)(param_1 + 0x430) * fVar28 +
                 *(float *)(param_1 + 0x438) * fVar15) -
                *(float *)(param_1 + 0x328) * *(float *)(param_1 + 0x428)) -
               *(float *)(param_1 + 0x42c) * fVar1) * fVar18;
      *(float *)(param_1 + 0x328) = fVar18;
      *(float *)(unaff_R14 + (ulonglong)uVar8 * 4) = fVar22;
      *(float *)(unaff_R14 + (ulonglong)(uVar8 + 1) * 4) = fVar18;
      _DAT_180be2198 = -_DAT_180be2198;
    }
  }
  else if (in_R11D == 6) {
    if (unaff_R15D != 0) {
      fStackX_8 = _DAT_180be2198;
      do {
        fVar22 = *(float *)(unaff_RSI + 0x434);
        fVar25 = *(float *)(unaff_RSI + 0x438);
        uVar8 = unaff_R12D * 6;
        fVar15 = *(float *)(unaff_RSI + 0x428);
        fVar23 = fStackX_8 + *(float *)(unaff_RBP + (ulonglong)(uVar8 + 1) * 4);
        fVar20 = *(float *)(unaff_RSI + 0x42c);
        fVar10 = fStackX_8 + *(float *)(unaff_RBP + (ulonglong)uVar8 * 4);
        fVar14 = 1.0 / *(float *)(unaff_RSI + 0x424);
        fVar19 = fStackX_8 + *(float *)(unaff_RBP + (ulonglong)(uVar8 + 2) * 4);
        fVar30 = fStackX_8 + *(float *)(unaff_RBP + (ulonglong)(uVar8 + 3) * 4);
        fVar29 = fStackX_8 + *(float *)(unaff_RBP + (ulonglong)(uVar8 + 4) * 4);
        fVar9 = fStackX_8 + *(float *)(unaff_RBP + (ulonglong)(uVar8 + 5) * 4);
        fVar1 = *(float *)(unaff_RSI + 0x430);
        fVar2 = *(float *)(unaff_RSI + 0x22c);
        fVar17 = (((*(float *)(unaff_RSI + 0x224) * fVar22 + fVar1 * fVar10 +
                   fVar25 * *(float *)(unaff_RSI + 0x2a4)) - *(float *)(unaff_RSI + 0x324) * fVar15)
                 - fVar20 * *(float *)(unaff_RSI + 0x3a4)) * fVar14;
        fVar16 = (((*(float *)(unaff_RSI + 0x228) * fVar22 + fVar1 * fVar23 +
                   fVar25 * *(float *)(unaff_RSI + 0x2a8)) - *(float *)(unaff_RSI + 0x328) * fVar15)
                 - fVar20 * *(float *)(unaff_RSI + 0x3a8)) * fVar14;
        fVar18 = *(float *)(unaff_RSI + 0x230);
        fVar28 = *(float *)(unaff_RSI + 0x234);
        fVar26 = (((fVar2 * fVar22 + fVar1 * fVar19 + fVar25 * *(float *)(unaff_RSI + 0x2ac)) -
                  *(float *)(unaff_RSI + 0x32c) * fVar15) - fVar20 * *(float *)(unaff_RSI + 0x3ac))
                 * fVar14;
        fVar20 = (((fVar18 * fVar22 + fVar1 * fVar30 + fVar25 * *(float *)(unaff_RSI + 0x2b0)) -
                  *(float *)(unaff_RSI + 0x330) * fVar15) - fVar20 * *(float *)(unaff_RSI + 0x3b0))
                 * fVar14;
        fVar15 = (((fVar28 * fVar22 + fVar1 * fVar29 + fVar25 * *(float *)(unaff_RSI + 0x2b4)) -
                  *(float *)(unaff_RSI + 0x334) * *(float *)(unaff_RSI + 0x428)) -
                 *(float *)(unaff_RSI + 0x42c) * *(float *)(unaff_RSI + 0x3b4)) * fVar14;
        fVar25 = *(float *)(unaff_RSI + 0x2b8);
        *(float *)(unaff_RSI + 0x2b8) = *(float *)(unaff_RSI + 0x238);
        *(float *)(unaff_RSI + 0x2a8) = *(float *)(unaff_RSI + 0x228);
        *(int32_t *)(unaff_RSI + 0x2a4) = *(int32_t *)(unaff_RSI + 0x224);
        *(float *)(unaff_RSI + 0x224) = fVar10;
        fVar14 = (((*(float *)(unaff_RSI + 0x238) * fVar22 + *(float *)(unaff_RSI + 0x430) * fVar9 +
                   *(float *)(unaff_RSI + 0x438) * fVar25) -
                  *(float *)(unaff_RSI + 0x338) * *(float *)(unaff_RSI + 0x428)) -
                 *(float *)(unaff_RSI + 0x42c) * *(float *)(unaff_RSI + 0x3b8)) * fVar14;
        *(float *)(unaff_RSI + 0x228) = fVar23;
        *(float *)(unaff_RSI + 0x22c) = fVar19;
        *(float *)(unaff_RSI + 0x230) = fVar30;
        *(float *)(unaff_RSI + 0x234) = fVar29;
        *(int32_t *)(unaff_RSI + 0x3a4) = *(int32_t *)(unaff_RSI + 0x324);
        *(float *)(unaff_RSI + 0x2ac) = fVar2;
        *(float *)(unaff_RSI + 0x2b0) = fVar18;
        *(float *)(unaff_RSI + 0x2b4) = fVar28;
        *(float *)(unaff_RSI + 0x238) = fVar9;
        unaff_R12D = unaff_R12D + 1;
        *(float *)(unaff_RSI + 0x3b8) = *(float *)(unaff_RSI + 0x338);
        fStackX_8 = -fStackX_8;
        *(float *)(unaff_RSI + 0x324) = fVar17;
        *(float *)(unaff_RSI + 0x3a8) = *(float *)(unaff_RSI + 0x328);
        *(float *)(unaff_RSI + 0x328) = fVar16;
        *(float *)(unaff_RSI + 0x3ac) = *(float *)(unaff_RSI + 0x32c);
        *(float *)(unaff_RSI + 0x32c) = fVar26;
        *(float *)(unaff_RSI + 0x3b0) = *(float *)(unaff_RSI + 0x330);
        *(float *)(unaff_RSI + 0x330) = fVar20;
        *(float *)(unaff_RSI + 0x3b4) = *(float *)(unaff_RSI + 0x334);
        *(float *)(unaff_RSI + 0x334) = fVar15;
        *(float *)(unaff_RSI + 0x338) = fVar14;
        _DAT_180be2198 = fStackX_8;
        *(float *)(unaff_R14 + (ulonglong)uVar8 * 4) = fVar17;
        *(float *)(unaff_R14 + (ulonglong)(uVar8 + 1) * 4) = fVar16;
        *(float *)(unaff_R14 + (ulonglong)(uVar8 + 2) * 4) = fVar26;
        *(float *)(unaff_R14 + (ulonglong)(uVar8 + 3) * 4) = fVar20;
        *(float *)(unaff_R14 + (ulonglong)(uVar8 + 4) * 4) = fVar15;
        *(float *)(unaff_R14 + (ulonglong)(uVar8 + 5) * 4) = fVar14;
      } while (unaff_R12D < unaff_R15D);
    }
  }
  else if (in_R11D == 8) {
    if (unaff_R15D != 0) {
      do {
        fVar22 = *(float *)(unaff_RSI + 0x430);
        uVar8 = unaff_R12D * 8;
        fVar25 = *(float *)(unaff_RSI + 0x434);
        fVar15 = *(float *)(unaff_RSI + 0x438);
        fVar27 = _DAT_180be2198 + *(float *)(unaff_RBP + (ulonglong)(uVar8 + 1) * 4);
        fVar20 = *(float *)(unaff_RSI + 0x428);
        fVar1 = *(float *)(unaff_RSI + 0x42c);
        fVar19 = _DAT_180be2198 + *(float *)(unaff_RBP + (ulonglong)uVar8 * 4);
        fVar2 = *(float *)(unaff_RSI + 0x22c);
        fVar24 = _DAT_180be2198 + *(float *)(unaff_RBP + (ulonglong)(uVar8 + 2) * 4);
        fVar21 = _DAT_180be2198 + *(float *)(unaff_RBP + (ulonglong)(uVar8 + 3) * 4);
        fVar10 = _DAT_180be2198 + *(float *)(unaff_RBP + (ulonglong)(uVar8 + 4) * 4);
        fVar14 = _DAT_180be2198 + *(float *)(unaff_RBP + (ulonglong)(uVar8 + 5) * 4);
        fVar16 = _DAT_180be2198 + *(float *)(unaff_RBP + (ulonglong)(uVar8 + 6) * 4);
        fVar17 = _DAT_180be2198 + *(float *)(unaff_RBP + (ulonglong)(uVar8 + 7) * 4);
        fVar23 = 1.0 / *(float *)(unaff_RSI + 0x424);
        fVar11 = (((fVar22 * fVar19 + *(float *)(unaff_RSI + 0x224) * fVar25 +
                   fVar15 * *(float *)(unaff_RSI + 0x2a4)) - *(float *)(unaff_RSI + 0x324) * fVar20)
                 - fVar1 * *(float *)(unaff_RSI + 0x3a4)) * fVar23;
        fVar12 = (((*(float *)(unaff_RSI + 0x228) * fVar25 + fVar22 * fVar27 +
                   fVar15 * *(float *)(unaff_RSI + 0x2a8)) - *(float *)(unaff_RSI + 0x328) * fVar20)
                 - fVar1 * *(float *)(unaff_RSI + 0x3a8)) * fVar23;
        fVar18 = *(float *)(unaff_RSI + 0x230);
        fVar28 = *(float *)(unaff_RSI + 0x330);
        fVar30 = *(float *)(unaff_RSI + 0x234);
        fVar13 = (((fVar2 * fVar25 + fVar22 * fVar24 + fVar15 * *(float *)(unaff_RSI + 0x2ac)) -
                  *(float *)(unaff_RSI + 0x32c) * fVar20) - fVar1 * *(float *)(unaff_RSI + 0x3ac)) *
                 fVar23;
        fVar29 = *(float *)(unaff_RSI + 0x238);
        fVar26 = (((fVar18 * fVar25 + fVar22 * fVar21 + fVar15 * *(float *)(unaff_RSI + 0x2b0)) -
                  fVar28 * fVar20) - fVar1 * *(float *)(unaff_RSI + 0x3b0)) * fVar23;
        fVar9 = *(float *)(unaff_RSI + 0x23c);
        fVar23 = (((fVar30 * fVar25 + fVar22 * fVar10 + fVar15 * *(float *)(unaff_RSI + 0x2b4)) -
                  *(float *)(unaff_RSI + 0x334) * fVar20) - fVar1 * *(float *)(unaff_RSI + 0x3b4)) *
                 fVar23;
        fVar20 = (((fVar29 * fVar25 + fVar22 * fVar14 +
                   *(float *)(unaff_RSI + 0x438) * *(float *)(unaff_RSI + 0x2b8)) -
                  *(float *)(unaff_RSI + 0x338) * *(float *)(unaff_RSI + 0x428)) -
                 *(float *)(unaff_RSI + 0x42c) * *(float *)(unaff_RSI + 0x3b8)) /
                 *(float *)(unaff_RSI + 0x424);
        fVar22 = *(float *)(unaff_RSI + 0x240);
        fVar15 = (((fVar9 * *(float *)(unaff_RSI + 0x434) + *(float *)(unaff_RSI + 0x430) * fVar16 +
                   *(float *)(unaff_RSI + 0x438) * *(float *)(unaff_RSI + 700)) -
                  *(float *)(unaff_RSI + 0x33c) * *(float *)(unaff_RSI + 0x428)) -
                 *(float *)(unaff_RSI + 0x42c) * *(float *)(unaff_RSI + 0x3bc)) /
                 *(float *)(unaff_RSI + 0x424);
        fVar25 = (((fVar22 * *(float *)(unaff_RSI + 0x434) + fVar17 * *(float *)(unaff_RSI + 0x430)
                   + *(float *)(unaff_RSI + 0x438) * *(float *)(unaff_RSI + 0x2c0)) -
                  *(float *)(unaff_RSI + 0x340) * *(float *)(unaff_RSI + 0x428)) -
                 *(float *)(unaff_RSI + 0x42c) * *(float *)(unaff_RSI + 0x3c0)) /
                 *(float *)(unaff_RSI + 0x424);
        *(int32_t *)(unaff_RSI + 0x2a4) = *(int32_t *)(unaff_RSI + 0x224);
        *(float *)(unaff_RSI + 0x224) = fVar19;
        *(int32_t *)(unaff_RSI + 0x2a8) = *(int32_t *)(unaff_RSI + 0x228);
        *(float *)(unaff_RSI + 0x228) = fVar27;
        *(float *)(unaff_RSI + 0x22c) = fVar24;
        *(float *)(unaff_RSI + 0x230) = fVar21;
        *(float *)(unaff_RSI + 0x234) = fVar10;
        *(float *)(unaff_RSI + 0x238) = fVar14;
        *(float *)(unaff_RSI + 0x23c) = fVar16;
        *(float *)(unaff_RSI + 0x240) = fVar17;
        *(int32_t *)(unaff_RSI + 0x3a4) = *(int32_t *)(unaff_RSI + 0x324);
        *(int32_t *)(unaff_RSI + 0x3a8) = *(int32_t *)(unaff_RSI + 0x328);
        *(int32_t *)(unaff_RSI + 0x3ac) = *(int32_t *)(unaff_RSI + 0x32c);
        *(float *)(unaff_RSI + 0x2b8) = fVar29;
        *(float *)(unaff_RSI + 700) = fVar9;
        *(float *)(unaff_RSI + 0x2c0) = fVar22;
        *(float *)(unaff_RSI + 0x3c0) = *(float *)(unaff_RSI + 0x340);
        *(float *)(unaff_RSI + 0x330) = fVar26;
        *(float *)(unaff_RSI + 0x2ac) = fVar2;
        *(float *)(unaff_RSI + 0x2b0) = fVar18;
        *(float *)(unaff_RSI + 0x2b4) = fVar30;
        *(float *)(unaff_RSI + 0x324) = fVar11;
        *(float *)(unaff_RSI + 0x328) = fVar12;
        *(float *)(unaff_RSI + 0x32c) = fVar13;
        *(float *)(unaff_RSI + 0x3b0) = fVar28;
        *(float *)(unaff_RSI + 0x3b4) = *(float *)(unaff_RSI + 0x334);
        *(float *)(unaff_RSI + 0x334) = fVar23;
        *(float *)(unaff_RSI + 0x3b8) = *(float *)(unaff_RSI + 0x338);
        *(float *)(unaff_RSI + 0x338) = fVar20;
        *(float *)(unaff_RSI + 0x3bc) = *(float *)(unaff_RSI + 0x33c);
        *(float *)(unaff_RSI + 0x33c) = fVar15;
        *(float *)(unaff_RSI + 0x340) = fVar25;
        *(float *)(unaff_R14 + (ulonglong)uVar8 * 4) = fVar11;
        *(float *)(unaff_R14 + (ulonglong)(uVar8 + 1) * 4) = fVar12;
        *(float *)(unaff_R14 + (ulonglong)(uVar8 + 2) * 4) = fVar13;
        *(float *)(unaff_R14 + (ulonglong)(uVar8 + 3) * 4) = fVar26;
        *(float *)(unaff_R14 + (ulonglong)(uVar8 + 4) * 4) = fVar23;
        *(float *)(unaff_R14 + (ulonglong)(uVar8 + 5) * 4) = fVar20;
        *(float *)(unaff_R14 + (ulonglong)(uVar8 + 6) * 4) = fVar15;
        *(float *)(unaff_R14 + (ulonglong)(uVar8 + 7) * 4) = fVar25;
        _DAT_180be2198 = -_DAT_180be2198;
        unaff_R12D = unaff_R12D + 1;
      } while (unaff_R12D < unaff_R15D);
    }
  }
  else if (0 < in_R11D) {
    pfVar7 = (float *)(param_1 + 0x224);
    fVar22 = _DAT_180be2198;
    uVar8 = unaff_R12D;
    do {
      uVar3 = unaff_R12D;
      if (3 < unaff_R15D) {
        iVar6 = 3;
        do {
          fVar25 = pfVar7[0x40];
          fVar20 = -fVar22;
          uVar4 = (ulonglong)(uVar3 * in_R11D + uVar8);
          fVar22 = fVar22 + *(float *)(unaff_RBP + uVar4 * 4);
          fVar15 = (((*pfVar7 * *(float *)(param_1 + 0x434) + fVar22 * *(float *)(param_1 + 0x430) +
                     *(float *)(param_1 + 0x438) * pfVar7[0x20]) -
                    fVar25 * *(float *)(param_1 + 0x428)) -
                   pfVar7[0x60] * *(float *)(param_1 + 0x42c)) / *(float *)(param_1 + 0x424);
          pfVar7[0x20] = *pfVar7;
          pfVar7[0x40] = fVar15;
          *pfVar7 = fVar22;
          pfVar7[0x60] = fVar25;
          *(float *)(unaff_R14 + uVar4 * 4) = fVar15;
          fVar22 = pfVar7[0x40];
          uVar4 = (ulonglong)((iVar6 + -2) * in_R11D + uVar8);
          uVar5 = (ulonglong)((iVar6 + -1) * in_R11D + uVar8);
          fVar15 = fVar20 + *(float *)(unaff_RBP + uVar4 * 4);
          fVar25 = (((*pfVar7 * *(float *)(param_1 + 0x434) + fVar15 * *(float *)(param_1 + 0x430) +
                     *(float *)(param_1 + 0x438) * pfVar7[0x20]) -
                    fVar22 * *(float *)(param_1 + 0x428)) -
                   pfVar7[0x60] * *(float *)(param_1 + 0x42c)) / *(float *)(param_1 + 0x424);
          pfVar7[0x20] = *pfVar7;
          pfVar7[0x40] = fVar25;
          *pfVar7 = fVar15;
          pfVar7[0x60] = fVar22;
          *(float *)(unaff_R14 + uVar4 * 4) = fVar25;
          fVar15 = *(float *)(unaff_RBP + uVar5 * 4) - fVar20;
          fVar22 = pfVar7[0x40];
          fVar25 = (((fVar15 * *(float *)(param_1 + 0x430) + *pfVar7 * *(float *)(param_1 + 0x434) +
                     *(float *)(param_1 + 0x438) * pfVar7[0x20]) -
                    fVar22 * *(float *)(param_1 + 0x428)) -
                   pfVar7[0x60] * *(float *)(param_1 + 0x42c)) / *(float *)(param_1 + 0x424);
          pfVar7[0x20] = *pfVar7;
          pfVar7[0x40] = fVar25;
          *pfVar7 = fVar15;
          pfVar7[0x60] = fVar22;
          *(float *)(unaff_R14 + uVar5 * 4) = fVar25;
          uVar3 = uVar3 + 4;
          fVar22 = -fVar20;
          fVar25 = pfVar7[0x40];
          uVar4 = (ulonglong)(iVar6 * in_R11D + uVar8);
          fVar20 = fVar20 + *(float *)(unaff_RBP + uVar4 * 4);
          fVar15 = (((*pfVar7 * *(float *)(param_1 + 0x434) + fVar20 * *(float *)(param_1 + 0x430) +
                     *(float *)(param_1 + 0x438) * pfVar7[0x20]) -
                    fVar25 * *(float *)(param_1 + 0x428)) -
                   pfVar7[0x60] * *(float *)(param_1 + 0x42c)) / *(float *)(param_1 + 0x424);
          pfVar7[0x20] = *pfVar7;
          pfVar7[0x40] = fVar15;
          *pfVar7 = fVar20;
          pfVar7[0x60] = fVar25;
          *(float *)(unaff_R14 + uVar4 * 4) = fVar15;
          iVar6 = iVar6 + 4;
          _DAT_180be2198 = fVar22;
        } while (uVar3 < unaff_R15D - 3);
      }
      for (; uVar3 < unaff_R15D; uVar3 = uVar3 + 1) {
        _DAT_180be2198 = -fVar22;
        fVar25 = pfVar7[0x40];
        uVar4 = (ulonglong)(uVar3 * in_R11D + uVar8);
        fVar22 = fVar22 + *(float *)(unaff_RBP + uVar4 * 4);
        fVar15 = (((*pfVar7 * *(float *)(param_1 + 0x434) + fVar22 * *(float *)(param_1 + 0x430) +
                   *(float *)(param_1 + 0x438) * pfVar7[0x20]) -
                  fVar25 * *(float *)(param_1 + 0x428)) - pfVar7[0x60] * *(float *)(param_1 + 0x42c)
                 ) / *(float *)(param_1 + 0x424);
        pfVar7[0x20] = *pfVar7;
        pfVar7[0x40] = fVar15;
        *pfVar7 = fVar22;
        pfVar7[0x60] = fVar25;
        *(float *)(unaff_R14 + uVar4 * 4) = fVar15;
        fVar22 = _DAT_180be2198;
      }
      uVar8 = uVar8 + 1;
      pfVar7 = pfVar7 + 1;
    } while ((int)uVar8 < in_R11D);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18077c38b(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong unaff_RBP;
  longlong unaff_RSI;
  float *pfVar12;
  uint uVar13;
  int in_R11D;
  uint unaff_R12D;
  longlong unaff_R14;
  uint unaff_R15D;
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
  
  if (in_R11D == 8) {
    if (unaff_R15D != 0) {
      do {
        fVar25 = *(float *)(unaff_RSI + 0x430);
        uVar9 = unaff_R12D * 8;
        fVar24 = *(float *)(unaff_RSI + 0x434);
        fVar26 = *(float *)(unaff_RSI + 0x438);
        fVar30 = _DAT_180be2198 + *(float *)(unaff_RBP + (ulonglong)(uVar9 + 1) * 4);
        fVar28 = *(float *)(unaff_RSI + 0x428);
        fVar1 = *(float *)(unaff_RSI + 0x42c);
        fVar18 = _DAT_180be2198 + *(float *)(unaff_RBP + (ulonglong)uVar9 * 4);
        fVar2 = *(float *)(unaff_RSI + 0x22c);
        fVar29 = _DAT_180be2198 + *(float *)(unaff_RBP + (ulonglong)(uVar9 + 2) * 4);
        fVar27 = _DAT_180be2198 + *(float *)(unaff_RBP + (ulonglong)(uVar9 + 3) * 4);
        fVar14 = _DAT_180be2198 + *(float *)(unaff_RBP + (ulonglong)(uVar9 + 4) * 4);
        fVar15 = _DAT_180be2198 + *(float *)(unaff_RBP + (ulonglong)(uVar9 + 5) * 4);
        fVar16 = _DAT_180be2198 + *(float *)(unaff_RBP + (ulonglong)(uVar9 + 6) * 4);
        fVar17 = _DAT_180be2198 + *(float *)(unaff_RBP + (ulonglong)(uVar9 + 7) * 4);
        fVar19 = 1.0 / *(float *)(unaff_RSI + 0x424);
        fVar21 = (((fVar25 * fVar18 + *(float *)(unaff_RSI + 0x224) * fVar24 +
                   fVar26 * *(float *)(unaff_RSI + 0x2a4)) - *(float *)(unaff_RSI + 0x324) * fVar28)
                 - fVar1 * *(float *)(unaff_RSI + 0x3a4)) * fVar19;
        fVar22 = (((*(float *)(unaff_RSI + 0x228) * fVar24 + fVar25 * fVar30 +
                   fVar26 * *(float *)(unaff_RSI + 0x2a8)) - *(float *)(unaff_RSI + 0x328) * fVar28)
                 - fVar1 * *(float *)(unaff_RSI + 0x3a8)) * fVar19;
        fVar3 = *(float *)(unaff_RSI + 0x230);
        fVar4 = *(float *)(unaff_RSI + 0x330);
        fVar5 = *(float *)(unaff_RSI + 0x234);
        fVar23 = (((fVar2 * fVar24 + fVar25 * fVar29 + fVar26 * *(float *)(unaff_RSI + 0x2ac)) -
                  *(float *)(unaff_RSI + 0x32c) * fVar28) - fVar1 * *(float *)(unaff_RSI + 0x3ac)) *
                 fVar19;
        fVar6 = *(float *)(unaff_RSI + 0x238);
        fVar20 = (((fVar3 * fVar24 + fVar25 * fVar27 + fVar26 * *(float *)(unaff_RSI + 0x2b0)) -
                  fVar4 * fVar28) - fVar1 * *(float *)(unaff_RSI + 0x3b0)) * fVar19;
        fVar7 = *(float *)(unaff_RSI + 0x23c);
        fVar19 = (((fVar5 * fVar24 + fVar25 * fVar14 + fVar26 * *(float *)(unaff_RSI + 0x2b4)) -
                  *(float *)(unaff_RSI + 0x334) * fVar28) - fVar1 * *(float *)(unaff_RSI + 0x3b4)) *
                 fVar19;
        fVar28 = (((fVar6 * fVar24 + fVar25 * fVar15 +
                   *(float *)(unaff_RSI + 0x438) * *(float *)(unaff_RSI + 0x2b8)) -
                  *(float *)(unaff_RSI + 0x338) * *(float *)(unaff_RSI + 0x428)) -
                 *(float *)(unaff_RSI + 0x42c) * *(float *)(unaff_RSI + 0x3b8)) /
                 *(float *)(unaff_RSI + 0x424);
        fVar25 = *(float *)(unaff_RSI + 0x240);
        fVar26 = (((fVar7 * *(float *)(unaff_RSI + 0x434) + *(float *)(unaff_RSI + 0x430) * fVar16 +
                   *(float *)(unaff_RSI + 0x438) * *(float *)(unaff_RSI + 700)) -
                  *(float *)(unaff_RSI + 0x33c) * *(float *)(unaff_RSI + 0x428)) -
                 *(float *)(unaff_RSI + 0x42c) * *(float *)(unaff_RSI + 0x3bc)) /
                 *(float *)(unaff_RSI + 0x424);
        fVar24 = (((fVar25 * *(float *)(unaff_RSI + 0x434) + fVar17 * *(float *)(unaff_RSI + 0x430)
                   + *(float *)(unaff_RSI + 0x438) * *(float *)(unaff_RSI + 0x2c0)) -
                  *(float *)(unaff_RSI + 0x340) * *(float *)(unaff_RSI + 0x428)) -
                 *(float *)(unaff_RSI + 0x42c) * *(float *)(unaff_RSI + 0x3c0)) /
                 *(float *)(unaff_RSI + 0x424);
        *(int32_t *)(unaff_RSI + 0x2a4) = *(int32_t *)(unaff_RSI + 0x224);
        *(float *)(unaff_RSI + 0x224) = fVar18;
        *(int32_t *)(unaff_RSI + 0x2a8) = *(int32_t *)(unaff_RSI + 0x228);
        *(float *)(unaff_RSI + 0x228) = fVar30;
        *(float *)(unaff_RSI + 0x22c) = fVar29;
        *(float *)(unaff_RSI + 0x230) = fVar27;
        *(float *)(unaff_RSI + 0x234) = fVar14;
        *(float *)(unaff_RSI + 0x238) = fVar15;
        *(float *)(unaff_RSI + 0x23c) = fVar16;
        *(float *)(unaff_RSI + 0x240) = fVar17;
        *(int32_t *)(unaff_RSI + 0x3a4) = *(int32_t *)(unaff_RSI + 0x324);
        *(int32_t *)(unaff_RSI + 0x3a8) = *(int32_t *)(unaff_RSI + 0x328);
        *(int32_t *)(unaff_RSI + 0x3ac) = *(int32_t *)(unaff_RSI + 0x32c);
        *(float *)(unaff_RSI + 0x2b8) = fVar6;
        *(float *)(unaff_RSI + 700) = fVar7;
        *(float *)(unaff_RSI + 0x2c0) = fVar25;
        *(float *)(unaff_RSI + 0x3c0) = *(float *)(unaff_RSI + 0x340);
        *(float *)(unaff_RSI + 0x330) = fVar20;
        *(float *)(unaff_RSI + 0x2ac) = fVar2;
        *(float *)(unaff_RSI + 0x2b0) = fVar3;
        *(float *)(unaff_RSI + 0x2b4) = fVar5;
        *(float *)(unaff_RSI + 0x324) = fVar21;
        *(float *)(unaff_RSI + 0x328) = fVar22;
        *(float *)(unaff_RSI + 0x32c) = fVar23;
        *(float *)(unaff_RSI + 0x3b0) = fVar4;
        *(float *)(unaff_RSI + 0x3b4) = *(float *)(unaff_RSI + 0x334);
        *(float *)(unaff_RSI + 0x334) = fVar19;
        *(float *)(unaff_RSI + 0x3b8) = *(float *)(unaff_RSI + 0x338);
        *(float *)(unaff_RSI + 0x338) = fVar28;
        *(float *)(unaff_RSI + 0x3bc) = *(float *)(unaff_RSI + 0x33c);
        *(float *)(unaff_RSI + 0x33c) = fVar26;
        *(float *)(unaff_RSI + 0x340) = fVar24;
        *(float *)(unaff_R14 + (ulonglong)uVar9 * 4) = fVar21;
        *(float *)(unaff_R14 + (ulonglong)(uVar9 + 1) * 4) = fVar22;
        *(float *)(unaff_R14 + (ulonglong)(uVar9 + 2) * 4) = fVar23;
        *(float *)(unaff_R14 + (ulonglong)(uVar9 + 3) * 4) = fVar20;
        *(float *)(unaff_R14 + (ulonglong)(uVar9 + 4) * 4) = fVar19;
        *(float *)(unaff_R14 + (ulonglong)(uVar9 + 5) * 4) = fVar28;
        *(float *)(unaff_R14 + (ulonglong)(uVar9 + 6) * 4) = fVar26;
        *(float *)(unaff_R14 + (ulonglong)(uVar9 + 7) * 4) = fVar24;
        _DAT_180be2198 = -_DAT_180be2198;
        unaff_R12D = unaff_R12D + 1;
      } while (unaff_R12D < unaff_R15D);
    }
  }
  else if (0 < in_R11D) {
    pfVar12 = (float *)(param_1 + 0x224);
    fVar25 = _DAT_180be2198;
    uVar9 = unaff_R12D;
    do {
      uVar13 = unaff_R12D;
      if (3 < unaff_R15D) {
        iVar11 = 3;
        do {
          fVar24 = pfVar12[0x40];
          fVar28 = -fVar25;
          uVar8 = (ulonglong)(uVar13 * in_R11D + uVar9);
          fVar25 = fVar25 + *(float *)(unaff_RBP + uVar8 * 4);
          fVar26 = (((*pfVar12 * *(float *)(param_1 + 0x434) + fVar25 * *(float *)(param_1 + 0x430)
                     + *(float *)(param_1 + 0x438) * pfVar12[0x20]) -
                    fVar24 * *(float *)(param_1 + 0x428)) -
                   pfVar12[0x60] * *(float *)(param_1 + 0x42c)) / *(float *)(param_1 + 0x424);
          pfVar12[0x20] = *pfVar12;
          pfVar12[0x40] = fVar26;
          *pfVar12 = fVar25;
          pfVar12[0x60] = fVar24;
          *(float *)(unaff_R14 + uVar8 * 4) = fVar26;
          fVar25 = pfVar12[0x40];
          uVar8 = (ulonglong)((iVar11 + -2) * in_R11D + uVar9);
          uVar10 = (ulonglong)((iVar11 + -1) * in_R11D + uVar9);
          fVar26 = fVar28 + *(float *)(unaff_RBP + uVar8 * 4);
          fVar24 = (((*pfVar12 * *(float *)(param_1 + 0x434) + fVar26 * *(float *)(param_1 + 0x430)
                     + *(float *)(param_1 + 0x438) * pfVar12[0x20]) -
                    fVar25 * *(float *)(param_1 + 0x428)) -
                   pfVar12[0x60] * *(float *)(param_1 + 0x42c)) / *(float *)(param_1 + 0x424);
          pfVar12[0x20] = *pfVar12;
          pfVar12[0x40] = fVar24;
          *pfVar12 = fVar26;
          pfVar12[0x60] = fVar25;
          *(float *)(unaff_R14 + uVar8 * 4) = fVar24;
          fVar26 = *(float *)(unaff_RBP + uVar10 * 4) - fVar28;
          fVar25 = pfVar12[0x40];
          fVar24 = (((fVar26 * *(float *)(param_1 + 0x430) + *pfVar12 * *(float *)(param_1 + 0x434)
                     + *(float *)(param_1 + 0x438) * pfVar12[0x20]) -
                    fVar25 * *(float *)(param_1 + 0x428)) -
                   pfVar12[0x60] * *(float *)(param_1 + 0x42c)) / *(float *)(param_1 + 0x424);
          pfVar12[0x20] = *pfVar12;
          pfVar12[0x40] = fVar24;
          *pfVar12 = fVar26;
          pfVar12[0x60] = fVar25;
          *(float *)(unaff_R14 + uVar10 * 4) = fVar24;
          uVar13 = uVar13 + 4;
          fVar25 = -fVar28;
          fVar24 = pfVar12[0x40];
          uVar8 = (ulonglong)(iVar11 * in_R11D + uVar9);
          fVar28 = fVar28 + *(float *)(unaff_RBP + uVar8 * 4);
          fVar26 = (((*pfVar12 * *(float *)(param_1 + 0x434) + fVar28 * *(float *)(param_1 + 0x430)
                     + *(float *)(param_1 + 0x438) * pfVar12[0x20]) -
                    fVar24 * *(float *)(param_1 + 0x428)) -
                   pfVar12[0x60] * *(float *)(param_1 + 0x42c)) / *(float *)(param_1 + 0x424);
          pfVar12[0x20] = *pfVar12;
          pfVar12[0x40] = fVar26;
          *pfVar12 = fVar28;
          pfVar12[0x60] = fVar24;
          *(float *)(unaff_R14 + uVar8 * 4) = fVar26;
          iVar11 = iVar11 + 4;
          _DAT_180be2198 = fVar25;
        } while (uVar13 < unaff_R15D - 3);
      }
      for (; uVar13 < unaff_R15D; uVar13 = uVar13 + 1) {
        _DAT_180be2198 = -fVar25;
        fVar24 = pfVar12[0x40];
        uVar8 = (ulonglong)(uVar13 * in_R11D + uVar9);
        fVar25 = fVar25 + *(float *)(unaff_RBP + uVar8 * 4);
        fVar26 = (((*pfVar12 * *(float *)(param_1 + 0x434) + fVar25 * *(float *)(param_1 + 0x430) +
                   *(float *)(param_1 + 0x438) * pfVar12[0x20]) -
                  fVar24 * *(float *)(param_1 + 0x428)) -
                 pfVar12[0x60] * *(float *)(param_1 + 0x42c)) / *(float *)(param_1 + 0x424);
        pfVar12[0x20] = *pfVar12;
        pfVar12[0x40] = fVar26;
        *pfVar12 = fVar25;
        pfVar12[0x60] = fVar24;
        *(float *)(unaff_R14 + uVar8 * 4) = fVar26;
        fVar25 = _DAT_180be2198;
      }
      uVar9 = uVar9 + 1;
      pfVar12 = pfVar12 + 1;
    } while ((int)uVar9 < in_R11D);
  }
  return 0;
}



uint64_t FUN_18077cd48(void)

{
  return 0;
}



uint64_t FUN_18077cd81(void)

{
  return 0;
}



uint64_t
FUN_18077cdb0(longlong param_1,longlong param_2,longlong param_3,uint param_4,int param_5)

{
  float fVar1;
  uint64_t uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (param_2 != 0) {
    lVar3 = (longlong)param_5;
    do {
      fVar4 = *(float *)(param_1 + 0x220);
      fVar1 = *(float *)(param_1 + 0x440);
      if (((fVar4 == fVar1) && (*(float *)(param_1 + 0x43c) == *(float *)(param_1 + 0x218))) ||
         (param_4 == 0)) {
        if (*(float *)(param_1 + 0x218) < 2.0) {
                    // WARNING: Subroutine does not return
          memcpy(param_3,param_2,(ulonglong)param_4 * lVar3 * 4);
        }
        if (*(float *)(param_1 + 0x218) < *(float *)(param_1 + 0x21c)) {
          uVar2 = FUN_18077b410(param_1,param_2,param_3,param_4,param_5);
          return uVar2;
        }
                    // WARNING: Subroutine does not return
        memset(param_3,0,(ulonglong)param_4 * lVar3 * 4);
      }
      fVar5 = *(float *)(param_1 + 0x218);
      fVar6 = fVar5 * 0.01 + 10.0;
      if (fVar1 <= fVar4) {
        if (fVar1 < fVar4) {
          fVar4 = fVar4 - 1.0;
          *(float *)(param_1 + 0x220) = fVar4;
          if (fVar4 <= fVar1) goto LAB_18077ce81;
        }
      }
      else {
        fVar4 = fVar4 + 1.0;
        *(float *)(param_1 + 0x220) = fVar4;
        if (fVar1 <= fVar4) {
LAB_18077ce81:
          *(float *)(param_1 + 0x220) = fVar1;
          fVar4 = fVar1;
        }
      }
      fVar1 = *(float *)(param_1 + 0x43c);
      if (fVar1 <= fVar5) {
        if (fVar1 < fVar5) {
          fVar5 = fVar5 - fVar6;
          *(float *)(param_1 + 0x218) = fVar5;
          if (fVar5 <= fVar1) goto LAB_18077cebf;
        }
      }
      else {
        fVar5 = fVar5 + fVar6;
        *(float *)(param_1 + 0x218) = fVar5;
        if (fVar1 <= fVar5) {
LAB_18077cebf:
          *(float *)(param_1 + 0x218) = fVar1;
          fVar5 = fVar1;
        }
      }
      FUN_18077d1a0(param_1,fVar4,fVar5);
      FUN_18077b410(param_1,param_2,param_3,1,param_5);
      param_2 = param_2 + lVar3 * 4;
      param_3 = param_3 + lVar3 * 4;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  return 0;
}







