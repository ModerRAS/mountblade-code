#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part043.c - 15 个函数

// 函数: void FUN_180677ae0(undefined1 (*param_1) [16],longlong param_2,undefined1 (*param_3) [16],
void FUN_180677ae0(undefined1 (*param_1) [16],longlong param_2,undefined1 (*param_3) [16],
                  longlong param_4,uint param_5,undefined1 (*param_6) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  ulonglong uVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [16];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [16];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auStack_240 [16];
  undefined1 auStack_220 [16];
  undefined1 auStack_200 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_e0 [16];
  
  auVar14 = _DAT_180947040;
  auVar22 = *(undefined1 (*) [16])(*param_1 + param_2);
  auVar1 = *(undefined1 (*) [16])(*param_1 + param_2 * 2);
  auVar23._0_16_ = ZEXT116(0) * auVar1 + ZEXT116(1) * auVar22;
  auVar23._16_16_ = ZEXT116(1) * auVar1;
  auVar2 = vpacksswb_avx(*param_6,*param_6);
  auVar16._16_16_ = auVar2;
  auVar16._0_16_ = auVar2;
  auVar7 = vpshufb_avx2(auVar16,_DAT_180947080);
  auVar8 = vpshufb_avx2(auVar16,_DAT_1809470c0);
  auVar9 = vpshufb_avx2(auVar16,_DAT_180947060);
  auVar16 = vpshufb_avx2(auVar16,_DAT_1809470a0);
  auVar27._0_16_ = ZEXT116(0) * auVar22 + ZEXT116(1) * *param_1;
  auVar27._16_16_ = ZEXT116(1) * auVar22;
  auVar22 = *(undefined1 (*) [16])(*param_1 + param_2 * 5);
  auVar21._0_16_ =
       ZEXT116(0) * auVar22 + ZEXT116(1) * *(undefined1 (*) [16])(*param_1 + param_2 * 4);
  auVar21._16_16_ = ZEXT116(1) * auVar22;
  auVar24 = vpunpcklbw_avx2(auVar27,auVar23);
  auStack_160 = auVar24._0_16_;
  auVar2 = *(undefined1 (*) [16])(*param_1 + param_2 * 3);
  auVar25 = *(undefined1 (*) [16])(*param_1 + param_2 * 6);
  auVar17._0_16_ = ZEXT116(0) * auVar25 + ZEXT116(1) * auVar22;
  auVar17._16_16_ = ZEXT116(1) * auVar25;
  auVar26._0_16_ = ZEXT116(0) * auVar2 + ZEXT116(1) * auVar1;
  auVar26._16_16_ = ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) + ZEXT116(1) * auVar2;
  auVar19._0_16_ = ZEXT116(0) * *(undefined1 (*) [16])(*param_1 + param_2 * 4) + ZEXT116(1) * auVar2
  ;
  auVar19._16_16_ = ZEXT116(1) * *(undefined1 (*) [16])(*param_1 + param_2 * 4);
  auVar10 = vpunpcklbw_avx2(auVar21,auVar17);
  auStack_1c0 = auVar10._0_16_;
  auVar17 = vpunpckhbw_avx2(auVar21,auVar17);
  auStack_1a0 = auVar17._0_16_;
  auVar21 = vpunpckhbw_avx2(auVar27,auVar23);
  auStack_140 = auVar21._0_16_;
  auVar23 = vpunpcklbw_avx2(auVar26,auVar19);
  auStack_200 = auVar23._0_16_;
  auVar19 = vpunpckhbw_avx2(auVar26,auVar19);
  auStack_1e0 = auVar19._0_16_;
  if (1 < param_5) {
    uVar15 = (ulonglong)((param_5 - 2 >> 1) + 1);
    do {
      auVar27 = auVar17;
      auVar11 = auVar10;
      auVar13 = auVar19;
      auVar12 = auVar23;
      auVar22 = *(undefined1 (*) [16])(*param_1 + param_2 * 7);
      auVar19 = vpmaddubsw_avx2(auVar11,auVar16);
      auVar20._0_16_ = ZEXT116(0) * auVar22 + ZEXT116(1) * auVar25;
      auVar20._16_16_ = ZEXT116(1) * auVar22;
      auVar25 = *(undefined1 (*) [16])(*param_1 + param_2 * 8);
      auVar18._0_16_ = ZEXT116(0) * auVar25 + ZEXT116(1) * auVar22;
      auVar18._16_16_ = ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) + ZEXT116(1) * auVar25;
      auVar10 = vpunpcklbw_avx2(auVar20,auVar18);
      auVar17 = vpunpckhbw_avx2(auVar20,auVar18);
      auVar23 = vpmaddubsw_avx2(auVar12,auVar7);
      auVar26 = vpmaxsw_avx2(auVar19,auVar23);
      auVar23 = vpminsw_avx2(auVar19,auVar23);
      auVar19 = vpmaddubsw_avx2(auVar10,auVar8);
      auVar24 = vpmaddubsw_avx2(auVar24,auVar9);
      auVar19 = vpaddsw_avx2(auVar19,auVar24);
      auVar24 = vpmaddubsw_avx2(auVar27,auVar16);
      auVar19 = vpaddsw_avx2(auVar19,auVar23);
      auVar23 = vpmaddubsw_avx2(auVar13,auVar7);
      auVar19 = vpaddsw_avx2(auVar19,auVar26);
      auVar26 = vpmaxsw_avx2(auVar24,auVar23);
      auVar23 = vpminsw_avx2(auVar24,auVar23);
      auVar24 = vpmaddubsw_avx2(auVar17,auVar8);
      auVar21 = vpmaddubsw_avx2(auVar21,auVar9);
      auVar21 = vpaddsw_avx2(auVar24,auVar21);
      auVar21 = vpaddsw_avx2(auVar21,auVar23);
      auVar21 = vpaddsw_avx2(auVar21,auVar26);
      auVar21 = vpaddsw_avx2(auVar21,auVar14);
      auVar24 = vpsraw_avx2(auVar21,7);
      auVar21 = vpaddsw_avx2(auVar19,auVar14);
      auVar21 = vpsraw_avx2(auVar21,7);
      auVar21 = vpackuswb_avx2(auVar21,auVar24);
      *param_3 = auVar21._0_16_;
      *(undefined1 (*) [16])(*param_3 + param_4) = auVar21._16_16_;
      param_3 = (undefined1 (*) [16])(*param_3 + param_4 * 2);
      param_1 = (undefined1 (*) [16])(*param_1 + param_2 * 2);
      param_5 = param_5 - 2;
      uVar15 = uVar15 - 1;
      auVar21 = auVar13;
      auVar23 = auVar11;
      auVar19 = auVar27;
      auVar24 = auVar12;
    } while (uVar15 != 0);
    auStack_200 = auVar11._0_16_;
    auStack_1e0 = auVar27._0_16_;
    auStack_1c0 = auVar10._0_16_;
    auStack_1a0 = auVar17._0_16_;
    auStack_160 = auVar12._0_16_;
    auStack_140 = auVar13._0_16_;
  }
  if (param_5 != 0) {
    auStack_240 = auVar7._0_16_;
    auVar1 = vpmaddubsw_avx(auStack_200,auStack_240);
    auVar2 = vpmaddubsw_avx(auStack_1e0,auStack_240);
    auStack_220 = auVar16._0_16_;
    auVar3 = vpmaddubsw_avx(auStack_1c0,auStack_220);
    auVar4 = vpmaddubsw_avx(auStack_1a0,auStack_220);
    auStack_100 = auVar9._0_16_;
    auVar22 = vpmaddubsw_avx(auStack_160,auStack_100);
    auVar5 = vpmaxsw_avx(auVar1,auVar3);
    auVar6 = vpunpcklbw_avx(auVar25,*(undefined1 (*) [16])(*param_1 + param_2 * 7));
    auStack_180 = auVar8._0_16_;
    auVar6 = vpmaddubsw_avx(auVar6,auStack_180);
    auVar22 = vpaddsw_avx(auVar6,auVar22);
    auVar1 = vpminsw_avx(auVar1,auVar3);
    auVar22 = vpaddsw_avx(auVar22,auVar1);
    auVar22 = vpaddsw_avx(auVar22,auVar5);
    auStack_e0 = auVar14._0_16_;
    auVar22 = vpaddsw_avx(auVar22,auStack_e0);
    auVar1 = vpunpckhbw_avx(auVar25,*(undefined1 (*) [16])(*param_1 + param_2 * 7));
    auVar1 = vpmaddubsw_avx(auVar1,auStack_180);
    auVar25 = vpsraw_avx(auVar22,7);
    auVar22 = vpmaddubsw_avx(auStack_140,auStack_100);
    auVar22 = vpaddsw_avx(auVar1,auVar22);
    auVar1 = vpminsw_avx(auVar2,auVar4);
    auVar22 = vpaddsw_avx(auVar22,auVar1);
    auVar1 = vpmaxsw_avx(auVar2,auVar4);
    auVar22 = vpaddsw_avx(auVar22,auVar1);
    auVar22 = vpaddsw_avx(auVar22,auStack_e0);
    auVar22 = vpsraw_avx(auVar22,7);
    auVar22 = vpackuswb_avx(auVar25,auVar22);
    *param_3 = auVar22;
  }
  return;
}





// 函数: void FUN_180677eb0(undefined1 *param_1,longlong param_2,byte *param_3,byte *param_4)
void FUN_180677eb0(undefined1 *param_1,longlong param_2,byte *param_3,byte *param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined1 uVar9;
  uint uVar10;
  
  bVar2 = *param_3;
  bVar3 = param_3[1];
  bVar4 = param_3[2];
  bVar5 = *param_4;
  bVar6 = param_4[1];
  bVar7 = param_4[2];
  uVar10 = (uint)param_3[-1];
  bVar8 = param_3[3];
  uVar9 = (undefined1)((int)(param_3[-1] + 1 + (uint)bVar2) >> 1);
  param_1[param_2 * 2 + 1] = uVar9;
  *param_1 = uVar9;
  uVar9 = (undefined1)((int)(bVar2 + 1 + (uint)bVar3) >> 1);
  param_1[param_2 * 2 + 2] = uVar9;
  param_1[1] = uVar9;
  uVar9 = (undefined1)((int)(bVar3 + 1 + (uint)bVar4) >> 1);
  param_1[param_2 * 2 + 3] = uVar9;
  param_1[2] = uVar9;
  param_1[3] = (char)((int)(bVar4 + 1 + (uint)bVar8) >> 1);
  puVar1 = param_1 + param_2 * 3;
  *puVar1 = (char)((int)((uint)bVar7 + (bVar6 + 1) * 2 + (uint)bVar5) >> 2);
  param_1[param_2 * 2] = (char)((int)(uVar10 + (bVar5 + 1) * 2 + (uint)bVar6) >> 2);
  uVar9 = (undefined1)((int)((uint)bVar2 + uVar10 * 2 + bVar5 + 2) >> 2);
  puVar1[1] = uVar9;
  param_1[param_2] = uVar9;
  uVar9 = (undefined1)((int)((uint)bVar3 + (bVar2 + 1) * 2 + uVar10) >> 2);
  puVar1[2] = uVar9;
  param_1[param_2 + 1] = uVar9;
  uVar9 = (undefined1)((int)((uint)bVar3 * 2 + (uint)bVar4 + bVar2 + 2) >> 2);
  puVar1[3] = uVar9;
  param_1[param_2 + 2] = uVar9;
  param_1[param_2 + 3] = (char)((int)((uint)bVar8 + (uint)bVar4 * 2 + bVar3 + 2) >> 2);
  return;
}





// 函数: void FUN_180677fc0(undefined1 *param_1,longlong param_2,byte *param_3,byte *param_4)
void FUN_180677fc0(undefined1 *param_1,longlong param_2,byte *param_3,byte *param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined1 uVar9;
  uint uVar10;
  
  uVar10 = (uint)param_3[-1];
  bVar2 = *param_3;
  bVar3 = param_3[1];
  bVar4 = param_3[2];
  bVar5 = *param_4;
  bVar6 = param_3[3];
  puVar1 = param_1 + param_2 * 3;
  bVar7 = param_4[1];
  bVar8 = param_4[2];
  *puVar1 = (char)((int)((uint)param_4[3] + (uint)bVar7 + (bVar8 + 1) * 2) >> 2);
  uVar9 = (undefined1)((int)((uint)bVar8 + (bVar7 + 1) * 2 + (uint)bVar5) >> 2);
  param_1[param_2 * 2] = uVar9;
  puVar1[1] = uVar9;
  uVar9 = (undefined1)((int)(uVar10 + (bVar5 + 1) * 2 + (uint)bVar7) >> 2);
  param_1[param_2] = uVar9;
  param_1[param_2 * 2 + 1] = uVar9;
  puVar1[2] = uVar9;
  uVar9 = (undefined1)((int)(uVar10 * 2 + (uint)bVar2 + bVar5 + 2) >> 2);
  *param_1 = uVar9;
  param_1[param_2 + 1] = uVar9;
  param_1[param_2 * 2 + 2] = uVar9;
  puVar1[3] = uVar9;
  uVar9 = (undefined1)((int)((uint)bVar3 + (uint)bVar2 * 2 + uVar10 + 2) >> 2);
  param_1[1] = uVar9;
  param_1[param_2 + 2] = uVar9;
  param_1[param_2 * 2 + 3] = uVar9;
  uVar9 = (undefined1)((int)((uint)bVar4 + (uint)bVar3 * 2 + bVar2 + 2) >> 2);
  param_1[2] = uVar9;
  param_1[param_2 + 3] = uVar9;
  param_1[3] = (char)((int)((uint)bVar6 + (uint)bVar4 * 2 + bVar3 + 2) >> 2);
  return;
}





// 函数: void FUN_1806780c0(undefined1 *param_1,longlong param_2,byte *param_3,byte *param_4)
void FUN_1806780c0(undefined1 *param_1,longlong param_2,byte *param_3,byte *param_4)

{
  longlong lVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  longlong lVar6;
  
  pbVar2 = param_3 + -1;
  puVar3 = param_1 + param_2 * 3;
  *param_1 = (char)((int)((uint)*pbVar2 + *param_4 + 1) >> 1);
  lVar6 = 3;
  pbVar4 = param_4 + 1;
  do {
    puVar3[param_2 * -2] = (char)((int)((uint)*pbVar4 + pbVar4[-1] + 1) >> 1);
    puVar3[-param_2] = (char)((int)((uint)pbVar4[1] + *pbVar4 + 1) >> 1);
    *puVar3 = (char)((int)((uint)pbVar4[1] + pbVar4[2] + 1) >> 1);
    puVar3[param_2] = (char)((int)((uint)pbVar4[2] + pbVar4[3] + 1) >> 1);
    puVar3[param_2 * 2] = (char)((int)(pbVar4[3] + 1 + (uint)pbVar4[4]) >> 1);
    puVar3 = puVar3 + param_2 * 5;
    lVar6 = lVar6 + -1;
    pbVar4 = pbVar4 + 5;
  } while (lVar6 != 0);
  puVar3 = param_1 + 1;
  puVar5 = puVar3 + param_2 * 2;
  lVar6 = 0xe;
  *puVar3 = (char)((int)(*param_3 + 2 + (uint)*pbVar2 * 2 + (uint)*param_4) >> 2);
  puVar3[param_2] = (char)((int)(param_4[1] + 2 + (uint)*param_4 * 2 + (uint)*pbVar2) >> 2);
  do {
    *puVar5 = (char)((int)(param_4[2] + 2 + (uint)param_4[1] * 2 + (uint)*param_4) >> 2);
    puVar5 = puVar5 + param_2;
    lVar6 = lVar6 + -1;
    param_4 = param_4 + 1;
  } while (lVar6 != 0);
  param_1 = param_1 + 2;
  lVar6 = 0xe;
  do {
    (pbVar2 + 1)[(longlong)param_1 - (longlong)param_3] =
         (byte)((int)(pbVar2[2] + 2 + (uint)pbVar2[1] * 2 + (uint)*pbVar2) >> 2);
    lVar6 = lVar6 + -1;
    pbVar2 = pbVar2 + 1;
  } while (lVar6 != 0);
  lVar6 = 0xf;
  do {
    param_1 = param_1 + param_2;
    lVar1 = 0xe;
    puVar3 = param_1;
    do {
      *puVar3 = puVar3[-2 - param_2];
      puVar3 = puVar3 + 1;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}





// 函数: void FUN_1806782c0(undefined1 *param_1,longlong param_2,byte *param_3,byte *param_4)
void FUN_1806782c0(undefined1 *param_1,longlong param_2,byte *param_3,byte *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  pbVar3 = param_3 + -1;
  puVar6 = param_1 + param_2;
  *param_1 = (char)((int)((uint)*pbVar3 + *param_4 + 1) >> 1);
  lVar8 = 0x1f;
  lVar4 = 0x1f;
  pbVar5 = param_4 + 1;
  do {
    bVar2 = *pbVar5;
    pbVar1 = pbVar5 + -1;
    pbVar5 = pbVar5 + 1;
    *puVar6 = (char)((int)(bVar2 + 1 + (uint)*pbVar1) >> 1);
    puVar6 = puVar6 + param_2;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar6 = param_1 + 1;
  puVar7 = puVar6 + param_2 * 2;
  lVar4 = 0x1e;
  lVar9 = 0x1e;
  *puVar6 = (char)((int)(*param_3 + 2 + (uint)*pbVar3 * 2 + (uint)*param_4) >> 2);
  puVar6[param_2] = (char)((int)(param_4[1] + 2 + (uint)*param_4 * 2 + (uint)*pbVar3) >> 2);
  do {
    *puVar7 = (char)((int)(param_4[2] + 2 + (uint)param_4[1] * 2 + (uint)*param_4) >> 2);
    puVar7 = puVar7 + param_2;
    lVar9 = lVar9 + -1;
    param_4 = param_4 + 1;
  } while (lVar9 != 0);
  do {
    (pbVar3 + 1)[(longlong)(param_1 + (2 - (longlong)param_3))] =
         (byte)((int)(pbVar3[2] + 2 + (uint)pbVar3[1] * 2 + (uint)*pbVar3) >> 2);
    lVar4 = lVar4 + -1;
    pbVar3 = pbVar3 + 1;
  } while (lVar4 != 0);
  do {
    lVar4 = 0xf;
    puVar7 = puVar6;
    do {
      puVar7[param_2 + 1] = puVar7[-1];
      puVar7[param_2 + 2] = *puVar7;
      puVar7 = puVar7 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar6 = puVar6 + param_2;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return;
}





// 函数: void FUN_180678430(undefined1 *param_1,longlong param_2,byte *param_3,byte *param_4)
void FUN_180678430(undefined1 *param_1,longlong param_2,byte *param_3,byte *param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined1 uVar10;
  
  bVar2 = *param_4;
  bVar3 = param_3[-1];
  bVar4 = param_4[1];
  bVar5 = param_4[2];
  bVar6 = *param_3;
  bVar7 = param_4[3];
  bVar8 = param_3[1];
  bVar9 = param_3[2];
  puVar1 = param_1 + param_2 * 3;
  uVar10 = (undefined1)((int)(bVar2 + 1 + (uint)bVar3) >> 1);
  param_1[param_2 + 2] = uVar10;
  *param_1 = uVar10;
  uVar10 = (undefined1)((int)(bVar2 + 1 + (uint)bVar4) >> 1);
  param_1[param_2 * 2 + 2] = uVar10;
  param_1[param_2] = uVar10;
  uVar10 = (undefined1)((int)(bVar4 + 1 + (uint)bVar5) >> 1);
  puVar1[2] = uVar10;
  param_1[param_2 * 2] = uVar10;
  *puVar1 = (char)((int)(bVar5 + 1 + (uint)bVar7) >> 1);
  param_1[3] = (char)((int)((uint)bVar9 + (bVar8 + 1) * 2 + (uint)bVar6) >> 2);
  param_1[2] = (char)((int)((uint)bVar8 + (bVar6 + 1) * 2 + (uint)bVar3) >> 2);
  uVar10 = (undefined1)((int)((uint)bVar6 + (bVar3 + 1) * 2 + (uint)bVar2) >> 2);
  param_1[param_2 + 3] = uVar10;
  param_1[1] = uVar10;
  uVar10 = (undefined1)((int)(bVar3 + 2 + (uint)bVar2 * 2 + (uint)bVar4) >> 2);
  param_1[param_2 * 2 + 3] = uVar10;
  param_1[param_2 + 1] = uVar10;
  uVar10 = (undefined1)((int)((uint)bVar5 + (uint)bVar4 * 2 + bVar2 + 2) >> 2);
  puVar1[3] = uVar10;
  param_1[param_2 * 2 + 1] = uVar10;
  puVar1[1] = (char)((int)((uint)bVar5 * 2 + (uint)bVar7 + bVar4 + 2) >> 2);
  return;
}





// 函数: void FUN_180678540(undefined1 *param_1,longlong param_2,byte *param_3,byte *param_4)
void FUN_180678540(undefined1 *param_1,longlong param_2,byte *param_3,byte *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  
  *param_1 = (char)((int)((uint)param_3[-1] + *param_4 + 1) >> 1);
  param_1[param_2] = (char)((int)((uint)param_4[1] + *param_4 + 1) >> 1);
  param_1[param_2 * 2] = (char)((int)((uint)param_4[1] + param_4[2] + 1) >> 1);
  param_1[param_2 * 3] = (char)((int)((uint)param_4[2] + param_4[3] + 1) >> 1);
  param_1[param_2 * 4] = (char)((int)((uint)param_4[3] + param_4[4] + 1) >> 1);
  param_1[param_2 * 5] = (char)((int)((uint)param_4[4] + param_4[5] + 1) >> 1);
  param_1[param_2 * 6] = (char)((int)((uint)param_4[5] + param_4[6] + 1) >> 1);
  param_1[param_2 * 7] = (char)((int)(param_4[6] + 1 + (uint)param_4[7]) >> 1);
  param_1[1] = (char)((int)(*param_3 + 2 + (uint)param_3[-1] * 2 + (uint)*param_4) >> 2);
  param_1[param_2 + 1] = (char)((int)(param_4[1] + 2 + (uint)*param_4 * 2 + (uint)param_3[-1]) >> 2)
  ;
  param_1[param_2 * 2 + 1] =
       (char)((int)(*param_4 + 2 + (uint)param_4[1] * 2 + (uint)param_4[2]) >> 2);
  param_1[param_2 * 3 + 1] =
       (char)((int)(param_4[1] + 2 + (uint)param_4[2] * 2 + (uint)param_4[3]) >> 2);
  param_1[param_2 * 4 + 1] =
       (char)((int)(param_4[4] + 2 + (uint)param_4[3] * 2 + (uint)param_4[2]) >> 2);
  param_1[param_2 * 5 + 1] =
       (char)((int)(param_4[5] + 2 + (uint)param_4[4] * 2 + (uint)param_4[3]) >> 2);
  param_1[param_2 * 6 + 1] =
       (char)((int)(param_4[4] + 2 + (uint)param_4[5] * 2 + (uint)param_4[6]) >> 2);
  param_1[param_2 * 7 + 1] =
       (char)((int)(param_4[7] + 2 + (uint)param_4[6] * 2 + (uint)param_4[5]) >> 2);
  param_1[2] = (char)((int)(param_3[1] + 2 + (uint)*param_3 * 2 + (uint)param_3[-1]) >> 2);
  param_1[3] = (char)((int)(*param_3 + 2 + (uint)param_3[1] * 2 + (uint)param_3[2]) >> 2);
  param_1[4] = (char)((int)(param_3[1] + 2 + (uint)param_3[2] * 2 + (uint)param_3[3]) >> 2);
  param_1[5] = (char)((int)(param_3[4] + 2 + (uint)param_3[3] * 2 + (uint)param_3[2]) >> 2);
  param_1[6] = (char)((int)(param_3[5] + 2 + (uint)param_3[4] * 2 + (uint)param_3[3]) >> 2);
  param_1[7] = (char)((int)(param_3[6] + 2 + (uint)param_3[5] * 2 + (uint)param_3[4]) >> 2);
  puVar3 = param_1 + 2 + param_2;
  lVar2 = 7;
  puVar1 = puVar3 + (-1 - param_2);
  do {
    *puVar3 = puVar1[-1];
    puVar3 = puVar3 + param_2;
    puVar1[param_2 + 2] = *puVar1;
    puVar1[param_2 + 3] = puVar1[1];
    puVar1[param_2 + 4] = puVar1[2];
    puVar1[param_2 + 5] = puVar1[3];
    puVar1[param_2 + 6] = puVar1[4];
    puVar1 = puVar1 + param_2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}





// 函数: void FUN_180678810(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)
void FUN_180678810(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  longlong lVar5;
  
  puVar4 = (undefined1 *)(param_1 + param_2 * 2);
  lVar2 = 3;
  pbVar3 = (byte *)(param_4 + 1);
  do {
    puVar4[param_2 * -2] = (char)((int)((uint)*pbVar3 + pbVar3[-1] + 1) >> 1);
    puVar4[-param_2] = (char)((int)((uint)*pbVar3 + pbVar3[1] + 1) >> 1);
    *puVar4 = (char)((int)((uint)pbVar3[1] + pbVar3[2] + 1) >> 1);
    puVar4[param_2] = (char)((int)((uint)pbVar3[2] + pbVar3[3] + 1) >> 1);
    puVar4[param_2 * 2] = (char)((int)(pbVar3[3] + 1 + (uint)pbVar3[4]) >> 1);
    puVar4 = puVar4 + param_2 * 5;
    lVar2 = lVar2 + -1;
    pbVar3 = pbVar3 + 5;
  } while (lVar2 != 0);
  lVar5 = param_2 * 0xf;
  puVar4 = (undefined1 *)(param_1 + 1);
  lVar2 = 0xe;
  *(undefined1 *)(lVar5 + param_1) = *(undefined1 *)(param_4 + 0xf);
  pbVar3 = (byte *)(param_4 + 2);
  do {
    *puVar4 = (char)((int)(pbVar3[-2] + 2 + (uint)pbVar3[-1] * 2 + (uint)*pbVar3) >> 2);
    puVar4 = puVar4 + param_2;
    lVar2 = lVar2 + -1;
    pbVar3 = pbVar3 + 1;
  } while (lVar2 != 0);
  *(char *)(param_2 * 0xe + 1 + param_1) =
       (char)((int)(*(byte *)(param_4 + 0xe) + 2 +
                   (uint)*(byte *)(param_4 + 0xf) + (uint)*(byte *)(param_4 + 0xf) * 2) >> 2);
  *(undefined1 *)(lVar5 + 1 + param_1) = *(undefined1 *)(param_4 + 0xf);
  lVar2 = 0;
  do {
    *(undefined1 *)(lVar5 + param_1 + 2 + lVar2) = *(undefined1 *)(param_4 + 0xf);
    lVar2 = lVar2 + 1;
  } while (lVar2 < 0xe);
  lVar2 = 0xe;
  puVar4 = (undefined1 *)(param_2 * 0xe + param_1 + 2);
  do {
    lVar5 = 0xe;
    puVar1 = puVar4;
    do {
      *puVar1 = puVar1[param_2 + -2];
      puVar1 = puVar1 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    puVar4 = puVar4 + -param_2;
    lVar2 = lVar2 + -1;
  } while (-1 < lVar2);
  return;
}





// 函数: void FUN_1806789c0(undefined1 *param_1,longlong param_2,undefined8 param_3,byte *param_4)
void FUN_1806789c0(undefined1 *param_1,longlong param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar2 = 0x1f;
  pbVar1 = param_4;
  puVar4 = param_1;
  do {
    *puVar4 = (char)((int)(*pbVar1 + 1 + (uint)pbVar1[1]) >> 1);
    puVar4 = puVar4 + param_2;
    lVar2 = lVar2 + -1;
    pbVar1 = pbVar1 + 1;
  } while (lVar2 != 0);
  puVar4 = param_1 + 1;
  lVar6 = param_2 * 0x1f;
  lVar5 = 0x1e;
  lVar2 = 0x1e;
  param_1[lVar6] = param_4[0x1f];
  pbVar1 = param_4 + 2;
  puVar3 = puVar4;
  do {
    *puVar3 = (char)((int)(pbVar1[-2] + 2 + (uint)pbVar1[-1] * 2 + (uint)*pbVar1) >> 2);
    puVar3 = puVar3 + param_2;
    lVar2 = lVar2 + -1;
    pbVar1 = pbVar1 + 1;
  } while (lVar2 != 0);
  puVar4[param_2 * 0x1e] =
       (char)((int)(param_4[0x1e] + 2 + (uint)param_4[0x1f] + (uint)param_4[0x1f] * 2) >> 2);
  lVar2 = 0xf;
  puVar4[lVar6] = param_4[0x1f];
  pbVar1 = param_1 + lVar6 + 3;
  do {
    pbVar1[-1] = param_4[0x1f];
    *pbVar1 = param_4[0x1f];
    lVar2 = lVar2 + -1;
    pbVar1 = pbVar1 + 2;
  } while (lVar2 != 0);
  param_1 = param_1 + param_2 * 0x1e + 2;
  do {
    lVar2 = 0xf;
    puVar4 = param_1;
    do {
      *puVar4 = puVar4[param_2 + -2];
      puVar4[1] = puVar4[param_2 + -1];
      puVar4 = puVar4 + 2;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    param_1 = param_1 + -param_2;
    lVar5 = lVar5 + -1;
  } while (-1 < lVar5);
  return;
}





// 函数: void FUN_180678b10(undefined1 *param_1,longlong param_2,undefined8 param_3,byte *param_4)
void FUN_180678b10(undefined1 *param_1,longlong param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  bVar1 = param_4[2];
  uVar6 = (uint)bVar1;
  bVar2 = param_4[1];
  bVar3 = *param_4;
  bVar4 = param_4[3];
  *param_1 = (char)((int)(bVar3 + 1 + (uint)bVar2) >> 1);
  uVar5 = (undefined1)((int)(bVar2 + 1 + (uint)bVar1) >> 1);
  param_1[param_2] = uVar5;
  param_1[2] = uVar5;
  uVar5 = (undefined1)((int)(bVar1 + 1 + (uint)bVar4) >> 1);
  param_1[param_2 * 2] = uVar5;
  param_1[param_2 + 2] = uVar5;
  param_1[1] = (char)((int)(uVar6 + (bVar2 + 1) * 2 + (uint)bVar3) >> 2);
  uVar5 = (undefined1)((int)((uint)bVar4 + (uVar6 + 1) * 2 + (uint)bVar2) >> 2);
  param_1[param_2 + 1] = uVar5;
  param_1[3] = uVar5;
  uVar5 = (undefined1)((int)(uVar6 + (bVar4 + 1) * 2 + (uint)bVar4) >> 2);
  param_1[param_2 * 2 + 1] = uVar5;
  param_1[param_2 + 3] = uVar5;
  param_1[param_2 * 3 + 3] = bVar4;
  param_1[param_2 * 3 + 2] = bVar4;
  param_1[param_2 * 3 + 1] = bVar4;
  param_1[param_2 * 3] = bVar4;
  param_1[param_2 * 2 + 2] = bVar4;
  param_1[param_2 * 2 + 3] = bVar4;
  return;
}





// 函数: void FUN_180678bc0(undefined1 *param_1,longlong param_2,undefined8 param_3,byte *param_4)
void FUN_180678bc0(undefined1 *param_1,longlong param_2,undefined8 param_3,byte *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = (char)((int)((uint)*param_4 + param_4[1] + 1) >> 1);
  puVar1 = param_1 + 1;
  param_1[param_2] = (char)((int)(param_4[2] + 1 + (uint)param_4[1]) >> 1);
  param_1[param_2 * 2] = (char)((int)((uint)param_4[3] + param_4[2] + 1) >> 1);
  param_1[param_2 * 3] = (char)((int)((uint)param_4[3] + param_4[4] + 1) >> 1);
  param_1[param_2 * 4] = (char)((int)((uint)param_4[4] + param_4[5] + 1) >> 1);
  param_1[param_2 * 5] = (char)((int)((uint)param_4[5] + param_4[6] + 1) >> 1);
  param_1[param_2 * 6] = (char)((int)((uint)param_4[6] + param_4[7] + 1) >> 1);
  lVar3 = param_2 * 7;
  param_1[lVar3] = param_4[7];
  *puVar1 = (char)((int)((uint)param_4[2] + (param_4[1] + 1) * 2 + (uint)*param_4) >> 2);
  puVar1[param_2] = (char)((int)((uint)param_4[1] + (param_4[2] + 1) * 2 + (uint)param_4[3]) >> 2);
  puVar1[param_2 * 2] =
       (char)((int)((uint)param_4[2] + (param_4[3] + 1) * 2 + (uint)param_4[4]) >> 2);
  puVar1[param_2 * 3] =
       (char)((int)((uint)param_4[5] + (param_4[4] + 1) * 2 + (uint)param_4[3]) >> 2);
  puVar1[param_2 * 4] =
       (char)((int)((uint)param_4[6] + (param_4[5] + 1) * 2 + (uint)param_4[4]) >> 2);
  puVar1[param_2 * 5] =
       (char)((int)((uint)param_4[7] + (param_4[6] + 1) * 2 + (uint)param_4[5]) >> 2);
  puVar1[param_2 * 6] = (char)((int)(param_4[6] + 2 + (uint)param_4[7] + (uint)param_4[7] * 2) >> 2)
  ;
  lVar2 = 6;
  puVar1[lVar3] = param_4[7];
  param_1[lVar3 + 2] = param_4[7];
  param_1[lVar3 + 3] = param_4[7];
  param_1[lVar3 + 4] = param_4[7];
  param_1[lVar3 + 5] = param_4[7];
  param_1[lVar3 + 6] = param_4[7];
  param_1[lVar3 + 7] = param_4[7];
  param_1 = param_1 + lVar3 + 1;
  do {
    param_1[1 - param_2] = param_1[-1];
    param_1[2 - param_2] = *param_1;
    param_1[3 - param_2] = param_1[1];
    param_1[4 - param_2] = param_1[2];
    param_1[5 - param_2] = param_1[3];
    param_1[6 - param_2] = param_1[4];
    param_1 = param_1 + -param_2;
    lVar2 = lVar2 + -1;
  } while (-1 < lVar2);
  return;
}





// 函数: void FUN_180678e20(longlong param_1,longlong param_2,longlong param_3)
void FUN_180678e20(longlong param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined1 uVar3;
  byte bVar4;
  byte *pbVar5;
  longlong lVar6;
  
  uVar3 = *(undefined1 *)(param_3 + 0xf);
  pbVar5 = (byte *)(param_3 + 2);
  lVar6 = 0xf;
  do {
    pbVar1 = pbVar5 + -1;
    pbVar2 = pbVar5 + -2;
    bVar4 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    pbVar5[(param_1 - param_3) + -3] =
         (byte)((int)((uint)*pbVar2 + (*pbVar1 + 1) * 2 + (uint)bVar4) >> 2);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(undefined1 *)(param_1 + 0xf) = uVar3;
                    // WARNING: Subroutine does not return
  memcpy(param_1 + param_2,param_1 + 1,0xe);
}





// 函数: void FUN_180678ef0(longlong param_1,longlong param_2,longlong param_3)
void FUN_180678ef0(longlong param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined1 uVar3;
  byte bVar4;
  byte *pbVar5;
  longlong lVar6;
  
  uVar3 = *(undefined1 *)(param_3 + 0x1f);
  pbVar5 = (byte *)(param_3 + 2);
  lVar6 = 0x1f;
  do {
    pbVar1 = pbVar5 + -1;
    pbVar2 = pbVar5 + -2;
    bVar4 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    pbVar5[(param_1 - param_3) + -3] =
         (byte)((int)((uint)*pbVar2 + (*pbVar1 + 1) * 2 + (uint)bVar4) >> 2);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(undefined1 *)(param_1 + 0x1f) = uVar3;
                    // WARNING: Subroutine does not return
  memcpy(param_1 + param_2,param_1 + 1,0x1e);
}





// 函数: void FUN_180678fc0(undefined1 *param_1,longlong param_2,byte *param_3)
void FUN_180678fc0(undefined1 *param_1,longlong param_2,byte *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  
  bVar2 = param_3[4];
  uVar8 = (uint)param_3[3];
  uVar9 = (uint)param_3[5];
  bVar3 = param_3[6];
  bVar4 = param_3[1];
  bVar5 = param_3[2];
  bVar6 = param_3[7];
  *param_1 = (char)((int)((uint)*param_3 + (uint)bVar5 + (bVar4 + 1) * 2) >> 2);
  uVar7 = (undefined1)((int)(uVar8 + (bVar5 + 1) * 2 + (uint)bVar4) >> 2);
  param_1[param_2] = uVar7;
  param_1[1] = uVar7;
  uVar7 = (undefined1)((int)((uint)bVar2 + (uVar8 + 1) * 2 + (uint)bVar5) >> 2);
  param_1[param_2 * 2] = uVar7;
  param_1[param_2 + 1] = uVar7;
  puVar1 = param_1 + param_2 * 3;
  param_1[2] = uVar7;
  uVar7 = (undefined1)((int)(uVar9 + (bVar2 + 1) * 2 + uVar8) >> 2);
  *puVar1 = uVar7;
  param_1[param_2 * 2 + 1] = uVar7;
  param_1[param_2 + 2] = uVar7;
  param_1[3] = uVar7;
  uVar7 = (undefined1)((int)(uVar9 * 2 + (uint)bVar3 + bVar2 + 2) >> 2);
  puVar1[1] = uVar7;
  param_1[param_2 * 2 + 2] = uVar7;
  param_1[param_2 + 3] = uVar7;
  uVar7 = (undefined1)((int)((uint)bVar6 + (uint)bVar3 * 2 + uVar9 + 2) >> 2);
  puVar1[2] = uVar7;
  param_1[param_2 * 2 + 3] = uVar7;
  puVar1[3] = bVar6;
  return;
}





// 函数: void FUN_1806790b0(undefined1 *param_1,longlong param_2,byte *param_3)
void FUN_1806790b0(undefined1 *param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  
  bVar1 = param_3[7];
  *param_1 = (char)((int)(param_3[2] + 2 + (uint)param_3[1] * 2 + (uint)*param_3) >> 2);
  param_1[1] = (char)((int)(param_3[1] + 2 + (uint)param_3[2] * 2 + (uint)param_3[3]) >> 2);
  param_1[2] = (char)((int)(param_3[2] + 2 + (uint)param_3[3] * 2 + (uint)param_3[4]) >> 2);
  param_1[3] = (char)((int)(param_3[5] + 2 + (uint)param_3[4] * 2 + (uint)param_3[3]) >> 2);
  param_1[4] = (char)((int)(param_3[6] + 2 + (uint)param_3[5] * 2 + (uint)param_3[4]) >> 2);
  param_1[5] = (char)((int)(param_3[5] + 2 + (uint)param_3[6] * 2 + (uint)param_3[7]) >> 2);
  param_1[6] = (char)((int)(param_3[8] + 2 + (uint)param_3[7] * 2 + (uint)param_3[6]) >> 2);
  param_1[7] = bVar1;
                    // WARNING: Subroutine does not return
  memcpy(param_1 + param_2,param_1 + 1,6);
}





