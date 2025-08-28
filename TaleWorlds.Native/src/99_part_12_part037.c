#include "TaleWorlds.Native.Split.h"

// 99_part_12_part037.c - 3 个函数

// 函数: void FUN_1807e2e10(undefined1 (*param_1) [32],undefined1 (*param_2) [32],uint param_3,
void FUN_1807e2e10(undefined1 (*param_1) [32],undefined1 (*param_2) [32],uint param_3,
                  undefined4 *param_4,undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [32];
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
  float fVar31;
  float fVar32;
  float fVar33;
  uint uVar34;
  undefined1 (*pauVar35) [32];
  float fVar36;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar37 [32];
  float fVar46;
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  
  uVar1 = param_4[0xc0];
  auVar53._4_4_ = uVar1;
  auVar53._0_4_ = uVar1;
  auVar53._8_4_ = uVar1;
  auVar53._12_4_ = uVar1;
  auVar53._16_4_ = uVar1;
  auVar53._20_4_ = uVar1;
  auVar53._24_4_ = uVar1;
  auVar53._28_4_ = uVar1;
  uVar1 = *param_4;
  auVar37._4_4_ = uVar1;
  auVar37._0_4_ = uVar1;
  auVar37._8_4_ = uVar1;
  auVar37._12_4_ = uVar1;
  auVar37._16_4_ = uVar1;
  auVar37._20_4_ = uVar1;
  auVar37._24_4_ = uVar1;
  auVar37._28_4_ = uVar1;
  uVar1 = param_4[0x20];
  auVar47._4_4_ = uVar1;
  auVar47._0_4_ = uVar1;
  auVar47._8_4_ = uVar1;
  auVar47._12_4_ = uVar1;
  auVar47._16_4_ = uVar1;
  auVar47._20_4_ = uVar1;
  auVar47._24_4_ = uVar1;
  auVar47._28_4_ = uVar1;
  uVar1 = param_4[0x40];
  auVar49._4_4_ = uVar1;
  auVar49._0_4_ = uVar1;
  auVar49._8_4_ = uVar1;
  auVar49._12_4_ = uVar1;
  auVar49._16_4_ = uVar1;
  auVar49._20_4_ = uVar1;
  auVar49._24_4_ = uVar1;
  auVar49._28_4_ = uVar1;
  uVar1 = param_4[0x60];
  auVar50._4_4_ = uVar1;
  auVar50._0_4_ = uVar1;
  auVar50._8_4_ = uVar1;
  auVar50._12_4_ = uVar1;
  auVar50._16_4_ = uVar1;
  auVar50._20_4_ = uVar1;
  auVar50._24_4_ = uVar1;
  auVar50._28_4_ = uVar1;
  uVar1 = param_4[0x80];
  auVar51._4_4_ = uVar1;
  auVar51._0_4_ = uVar1;
  auVar51._8_4_ = uVar1;
  auVar51._12_4_ = uVar1;
  auVar51._16_4_ = uVar1;
  auVar51._20_4_ = uVar1;
  auVar51._24_4_ = uVar1;
  auVar51._28_4_ = uVar1;
  uVar1 = param_4[0xa0];
  auVar52._4_4_ = uVar1;
  auVar52._0_4_ = uVar1;
  auVar52._8_4_ = uVar1;
  auVar52._12_4_ = uVar1;
  auVar52._16_4_ = uVar1;
  auVar52._20_4_ = uVar1;
  auVar52._24_4_ = uVar1;
  auVar52._28_4_ = uVar1;
  uVar1 = param_4[0xe0];
  auVar54._4_4_ = uVar1;
  auVar54._0_4_ = uVar1;
  auVar54._8_4_ = uVar1;
  auVar54._12_4_ = uVar1;
  auVar54._16_4_ = uVar1;
  auVar54._20_4_ = uVar1;
  auVar54._24_4_ = uVar1;
  auVar54._28_4_ = uVar1;
  auVar48 = vblendps_avx(ZEXT1632(ZEXT816(0) << 0x40),auVar37,1);
  auVar48 = vblendps_avx(auVar48,auVar47,2);
  auVar48 = vblendps_avx(auVar48,auVar49,4);
  auVar48 = vblendps_avx(auVar48,auVar50,8);
  auVar48 = vblendps_avx(auVar48,auVar51,0x10);
  auVar38 = ZEXT3264(auVar48);
  auVar48 = vblendps_avx(auVar48,auVar52,0x20);
  auVar37 = vblendps_avx(auVar48,auVar53,0x40);
  auVar37 = vblendps_avx(auVar37,auVar54,0x80);
  fVar3 = auVar37._0_4_;
  fVar4 = auVar37._4_4_;
  fVar5 = auVar37._8_4_;
  fVar6 = auVar37._12_4_;
  fVar7 = auVar37._16_4_;
  fVar8 = auVar37._20_4_;
  fVar9 = auVar37._24_4_;
  if (param_7 == 0) {
    uVar34 = param_3 >> 3;
    if (param_3 >> 3 != 0) {
      pauVar35 = param_2 + 2;
      do {
        auVar48 = *param_1;
        auVar49 = vperm2f128_avx(auVar48,auVar48,0);
        auVar50 = vperm2f128_avx(auVar48,auVar48,0x11);
        auVar48 = vshufps_avx(auVar49,auVar49,0);
        fVar2 = *(float *)(*param_2 + 4);
        fVar11 = *(float *)(*param_2 + 8);
        fVar12 = *(float *)(*param_2 + 0xc);
        fVar13 = *(float *)(*param_2 + 0x10);
        fVar14 = *(float *)(*param_2 + 0x14);
        fVar15 = *(float *)(*param_2 + 0x18);
        fVar16 = *(float *)(*param_2 + 0x1c);
        fVar46 = auVar38._28_4_;
        auVar37 = vshufps_avx(auVar49,auVar49,0x55);
        fVar17 = *(float *)pauVar35[-1];
        fVar18 = *(float *)(pauVar35[-1] + 4);
        fVar19 = *(float *)(pauVar35[-1] + 8);
        fVar20 = *(float *)(pauVar35[-1] + 0xc);
        fVar21 = *(float *)(pauVar35[-1] + 0x10);
        fVar22 = *(float *)(pauVar35[-1] + 0x14);
        fVar23 = *(float *)(pauVar35[-1] + 0x18);
        fVar24 = *(float *)(pauVar35[-1] + 0x1c);
        auVar47 = vshufps_avx(auVar49,auVar49,0xaa);
        fVar25 = *(float *)*pauVar35;
        fVar26 = *(float *)(*pauVar35 + 4);
        fVar27 = *(float *)(*pauVar35 + 8);
        fVar28 = *(float *)(*pauVar35 + 0xc);
        fVar29 = *(float *)(*pauVar35 + 0x10);
        fVar30 = *(float *)(*pauVar35 + 0x14);
        fVar31 = *(float *)(*pauVar35 + 0x18);
        fVar32 = *(float *)(*pauVar35 + 0x1c);
        auVar49 = vshufps_avx(auVar49,auVar49,0xff);
        fVar36 = *(float *)pauVar35[1];
        fVar40 = *(float *)(pauVar35[1] + 4);
        fVar41 = *(float *)(pauVar35[1] + 8);
        fVar42 = *(float *)(pauVar35[1] + 0xc);
        fVar43 = *(float *)(pauVar35[1] + 0x10);
        fVar44 = *(float *)(pauVar35[1] + 0x14);
        fVar45 = *(float *)(pauVar35[1] + 0x18);
        fVar33 = *(float *)(pauVar35[1] + 0x1c);
        *(float *)*param_2 = auVar48._0_4_ * fVar3 + *(float *)*param_2;
        *(float *)(*param_2 + 4) = auVar48._4_4_ * fVar4 + fVar2;
        *(float *)(*param_2 + 8) = auVar48._8_4_ * fVar5 + fVar11;
        *(float *)(*param_2 + 0xc) = auVar48._12_4_ * fVar6 + fVar12;
        *(float *)(*param_2 + 0x10) = auVar48._16_4_ * fVar7 + fVar13;
        *(float *)(*param_2 + 0x14) = auVar48._20_4_ * fVar8 + fVar14;
        *(float *)(*param_2 + 0x18) = auVar48._24_4_ * fVar9 + fVar15;
        *(float *)(*param_2 + 0x1c) = fVar46 + fVar16;
        *(float *)pauVar35[-1] = auVar37._0_4_ * fVar3 + fVar17;
        *(float *)(pauVar35[-1] + 4) = auVar37._4_4_ * fVar4 + fVar18;
        *(float *)(pauVar35[-1] + 8) = auVar37._8_4_ * fVar5 + fVar19;
        *(float *)(pauVar35[-1] + 0xc) = auVar37._12_4_ * fVar6 + fVar20;
        *(float *)(pauVar35[-1] + 0x10) = auVar37._16_4_ * fVar7 + fVar21;
        *(float *)(pauVar35[-1] + 0x14) = auVar37._20_4_ * fVar8 + fVar22;
        *(float *)(pauVar35[-1] + 0x18) = auVar37._24_4_ * fVar9 + fVar23;
        *(float *)(pauVar35[-1] + 0x1c) = fVar46 + fVar24;
        *(float *)*pauVar35 = auVar47._0_4_ * fVar3 + fVar25;
        *(float *)(*pauVar35 + 4) = auVar47._4_4_ * fVar4 + fVar26;
        *(float *)(*pauVar35 + 8) = auVar47._8_4_ * fVar5 + fVar27;
        *(float *)(*pauVar35 + 0xc) = auVar47._12_4_ * fVar6 + fVar28;
        *(float *)(*pauVar35 + 0x10) = auVar47._16_4_ * fVar7 + fVar29;
        *(float *)(*pauVar35 + 0x14) = auVar47._20_4_ * fVar8 + fVar30;
        *(float *)(*pauVar35 + 0x18) = auVar47._24_4_ * fVar9 + fVar31;
        *(float *)(*pauVar35 + 0x1c) = fVar46 + fVar32;
        *(float *)pauVar35[1] = auVar49._0_4_ * fVar3 + fVar36;
        *(float *)(pauVar35[1] + 4) = auVar49._4_4_ * fVar4 + fVar40;
        *(float *)(pauVar35[1] + 8) = auVar49._8_4_ * fVar5 + fVar41;
        *(float *)(pauVar35[1] + 0xc) = auVar49._12_4_ * fVar6 + fVar42;
        *(float *)(pauVar35[1] + 0x10) = auVar49._16_4_ * fVar7 + fVar43;
        *(float *)(pauVar35[1] + 0x14) = auVar49._20_4_ * fVar8 + fVar44;
        *(float *)(pauVar35[1] + 0x18) = auVar49._24_4_ * fVar9 + fVar45;
        *(float *)(pauVar35[1] + 0x1c) = fVar46 + fVar33;
        auVar37 = vshufps_avx(auVar50,auVar50,0);
        fVar2 = *(float *)(pauVar35[2] + 4);
        fVar11 = *(float *)(pauVar35[2] + 8);
        fVar12 = *(float *)(pauVar35[2] + 0xc);
        fVar13 = *(float *)(pauVar35[2] + 0x10);
        fVar14 = *(float *)(pauVar35[2] + 0x14);
        fVar15 = *(float *)(pauVar35[2] + 0x18);
        fVar16 = *(float *)(pauVar35[2] + 0x1c);
        auVar47 = vshufps_avx(auVar50,auVar50,0x55);
        fVar17 = *(float *)pauVar35[3];
        fVar18 = *(float *)(pauVar35[3] + 4);
        fVar19 = *(float *)(pauVar35[3] + 8);
        fVar20 = *(float *)(pauVar35[3] + 0xc);
        fVar21 = *(float *)(pauVar35[3] + 0x10);
        fVar22 = *(float *)(pauVar35[3] + 0x14);
        fVar23 = *(float *)(pauVar35[3] + 0x18);
        fVar24 = *(float *)(pauVar35[3] + 0x1c);
        auVar49 = vshufps_avx(auVar50,auVar50,0xaa);
        fVar25 = *(float *)pauVar35[4];
        fVar26 = *(float *)(pauVar35[4] + 4);
        fVar27 = *(float *)(pauVar35[4] + 8);
        fVar28 = *(float *)(pauVar35[4] + 0xc);
        fVar29 = *(float *)(pauVar35[4] + 0x10);
        fVar30 = *(float *)(pauVar35[4] + 0x14);
        fVar31 = *(float *)(pauVar35[4] + 0x18);
        fVar32 = *(float *)(pauVar35[4] + 0x1c);
        auVar48 = vshufps_avx(auVar50,auVar50,0xff);
        fVar36 = auVar48._0_4_ * fVar3;
        fVar40 = auVar48._4_4_ * fVar4;
        fVar41 = auVar48._8_4_ * fVar5;
        fVar42 = auVar48._12_4_ * fVar6;
        fVar43 = auVar48._16_4_ * fVar7;
        fVar44 = auVar48._20_4_ * fVar8;
        fVar45 = auVar48._24_4_ * fVar9;
        auVar38 = ZEXT3264(CONCAT428(fVar46,CONCAT424(fVar45,CONCAT420(fVar44,CONCAT416(fVar43,
                                                  CONCAT412(fVar42,CONCAT48(fVar41,CONCAT44(fVar40,
                                                  fVar36))))))));
        auVar48._0_4_ = fVar36 + *(float *)pauVar35[5];
        auVar48._4_4_ = fVar40 + *(float *)(pauVar35[5] + 4);
        auVar48._8_4_ = fVar41 + *(float *)(pauVar35[5] + 8);
        auVar48._12_4_ = fVar42 + *(float *)(pauVar35[5] + 0xc);
        auVar48._16_4_ = fVar43 + *(float *)(pauVar35[5] + 0x10);
        auVar48._20_4_ = fVar44 + *(float *)(pauVar35[5] + 0x14);
        auVar48._24_4_ = fVar45 + *(float *)(pauVar35[5] + 0x18);
        auVar48._28_4_ = fVar46 + *(float *)(pauVar35[5] + 0x1c);
        *(float *)pauVar35[2] = auVar37._0_4_ * fVar3 + *(float *)pauVar35[2];
        *(float *)(pauVar35[2] + 4) = auVar37._4_4_ * fVar4 + fVar2;
        *(float *)(pauVar35[2] + 8) = auVar37._8_4_ * fVar5 + fVar11;
        *(float *)(pauVar35[2] + 0xc) = auVar37._12_4_ * fVar6 + fVar12;
        *(float *)(pauVar35[2] + 0x10) = auVar37._16_4_ * fVar7 + fVar13;
        *(float *)(pauVar35[2] + 0x14) = auVar37._20_4_ * fVar8 + fVar14;
        *(float *)(pauVar35[2] + 0x18) = auVar37._24_4_ * fVar9 + fVar15;
        *(float *)(pauVar35[2] + 0x1c) = fVar46 + fVar16;
        *(float *)pauVar35[3] = auVar47._0_4_ * fVar3 + fVar17;
        *(float *)(pauVar35[3] + 4) = auVar47._4_4_ * fVar4 + fVar18;
        *(float *)(pauVar35[3] + 8) = auVar47._8_4_ * fVar5 + fVar19;
        *(float *)(pauVar35[3] + 0xc) = auVar47._12_4_ * fVar6 + fVar20;
        *(float *)(pauVar35[3] + 0x10) = auVar47._16_4_ * fVar7 + fVar21;
        *(float *)(pauVar35[3] + 0x14) = auVar47._20_4_ * fVar8 + fVar22;
        *(float *)(pauVar35[3] + 0x18) = auVar47._24_4_ * fVar9 + fVar23;
        *(float *)(pauVar35[3] + 0x1c) = fVar46 + fVar24;
        *(float *)pauVar35[4] = auVar49._0_4_ * fVar3 + fVar25;
        *(float *)(pauVar35[4] + 4) = auVar49._4_4_ * fVar4 + fVar26;
        *(float *)(pauVar35[4] + 8) = auVar49._8_4_ * fVar5 + fVar27;
        *(float *)(pauVar35[4] + 0xc) = auVar49._12_4_ * fVar6 + fVar28;
        *(float *)(pauVar35[4] + 0x10) = auVar49._16_4_ * fVar7 + fVar29;
        *(float *)(pauVar35[4] + 0x14) = auVar49._20_4_ * fVar8 + fVar30;
        *(float *)(pauVar35[4] + 0x18) = auVar49._24_4_ * fVar9 + fVar31;
        *(float *)(pauVar35[4] + 0x1c) = fVar46 + fVar32;
        param_1 = param_1 + 1;
        param_2 = param_2 + 8;
        pauVar35[5] = auVar48;
        pauVar35 = pauVar35 + 8;
        uVar34 = uVar34 - 1;
      } while (uVar34 != 0);
    }
    for (param_3 = param_3 & 7; param_3 != 0; param_3 = param_3 - 1) {
      fVar2 = *(float *)*param_1;
      param_1 = (undefined1 (*) [32])(*param_1 + 4);
      auVar10._4_4_ = fVar2 * fVar4;
      auVar10._0_4_ = fVar2 * fVar3;
      auVar10._8_4_ = fVar2 * fVar5;
      auVar10._12_4_ = fVar2 * fVar6;
      auVar10._16_4_ = fVar2 * fVar7;
      auVar10._20_4_ = fVar2 * fVar8;
      auVar10._24_4_ = fVar2 * fVar9;
      auVar10._28_4_ = auVar48._28_4_;
      fVar11 = *(float *)(*param_2 + 4);
      fVar12 = *(float *)(*param_2 + 8);
      fVar13 = *(float *)(*param_2 + 0xc);
      fVar14 = *(float *)(*param_2 + 0x10);
      fVar15 = *(float *)(*param_2 + 0x14);
      fVar16 = *(float *)(*param_2 + 0x18);
      fVar17 = *(float *)(*param_2 + 0x1c);
      *(float *)*param_2 = fVar2 * fVar3 + *(float *)*param_2;
      *(float *)(*param_2 + 4) = fVar2 * fVar4 + fVar11;
      *(float *)(*param_2 + 8) = fVar2 * fVar5 + fVar12;
      *(float *)(*param_2 + 0xc) = fVar2 * fVar6 + fVar13;
      *(float *)(*param_2 + 0x10) = fVar2 * fVar7 + fVar14;
      *(float *)(*param_2 + 0x14) = fVar2 * fVar8 + fVar15;
      *(float *)(*param_2 + 0x18) = fVar2 * fVar9 + fVar16;
      *(float *)(*param_2 + 0x1c) = auVar48._28_4_ + fVar17;
      param_2 = param_2 + 1;
      auVar48 = auVar10;
    }
  }
  else if (param_3 != 0) {
    do {
      fVar2 = *(float *)*param_1;
      param_1 = (undefined1 (*) [32])(*param_1 + 4);
      auVar39._0_4_ = fVar2 * fVar3;
      auVar39._4_4_ = fVar2 * fVar4;
      auVar39._8_4_ = fVar2 * fVar5;
      auVar39._12_4_ = fVar2 * fVar6;
      auVar39._16_4_ = fVar2 * fVar7;
      auVar39._20_4_ = fVar2 * fVar8;
      auVar39._28_36_ = auVar38._28_36_;
      auVar39._24_4_ = fVar2 * fVar9;
      auVar38 = ZEXT3264(auVar39._0_32_);
      *param_2 = auVar39._0_32_;
      param_3 = param_3 - 1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001807e30de)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807e3020(longlong param_1,float *param_2,int param_3,float *param_4,undefined8 param_5,
void FUN_1807e3020(longlong param_1,float *param_2,int param_3,float *param_4,undefined8 param_5,
                  undefined8 param_6,int param_7)

{
  float *pfVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  float *pfVar16;
  ulonglong uVar17;
  float in_register_0000121c;
  undefined1 auVar18 [32];
  float in_register_0000125c;
  undefined1 auVar19 [32];
  
  fVar2 = *param_4;
  iVar13 = 0;
  if (param_7 == 0) {
    if (0 < param_3 + -7) {
      uVar14 = (param_3 - 8U >> 3) + 1;
      uVar17 = (ulonglong)uVar14;
      iVar13 = uVar14 * 8;
      pfVar16 = param_2;
      do {
        pfVar1 = (float *)((longlong)pfVar16 + (param_1 - (longlong)param_2));
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        fVar10 = pfVar1[4];
        fVar11 = pfVar1[5];
        fVar12 = pfVar1[6];
        in_register_0000125c = in_register_0000125c + pfVar16[7];
        *pfVar16 = fVar2 * *pfVar1 + *pfVar16;
        pfVar16[1] = fVar2 * fVar7 + pfVar16[1];
        pfVar16[2] = fVar2 * fVar8 + pfVar16[2];
        pfVar16[3] = fVar2 * fVar9 + pfVar16[3];
        pfVar16[4] = fVar2 * fVar10 + pfVar16[4];
        pfVar16[5] = fVar2 * fVar11 + pfVar16[5];
        pfVar16[6] = fVar2 * fVar12 + pfVar16[6];
        pfVar16[7] = in_register_0000125c;
        pfVar16 = pfVar16 + 8;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  else {
    iVar13 = 0;
    if (0 < param_3 + -7) {
      uVar14 = (param_3 - 8U >> 3) + 1;
      uVar17 = (ulonglong)uVar14;
      iVar13 = uVar14 * 8;
      pfVar16 = param_2;
      do {
        pfVar1 = (float *)((param_1 - (longlong)param_2) + (longlong)pfVar16);
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        fVar10 = pfVar1[4];
        fVar11 = pfVar1[5];
        fVar12 = pfVar1[6];
        *pfVar16 = fVar2 * *pfVar1;
        pfVar16[1] = fVar2 * fVar7;
        pfVar16[2] = fVar2 * fVar8;
        pfVar16[3] = fVar2 * fVar9;
        pfVar16[4] = fVar2 * fVar10;
        pfVar16[5] = fVar2 * fVar11;
        pfVar16[6] = fVar2 * fVar12;
        pfVar16[7] = in_register_0000121c;
        pfVar16 = pfVar16 + 8;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  lVar15 = (longlong)iVar13;
  auVar4 = vpshufd_avx(ZEXT416((uint)(param_3 - iVar13)),0);
  auVar3 = vpcmpgtd_avx(auVar4,_DAT_18097d870);
  auVar4 = vpcmpgtd_avx(auVar4,_DAT_18097d860);
  auVar19._16_16_ = auVar3;
  auVar19._0_16_ = auVar4;
  auVar5 = vmaskmovps_avx(auVar19,*(undefined1 (*) [32])(param_1 + lVar15 * 4));
  if (param_7 != 0) {
    auVar6._4_4_ = auVar5._4_4_ * fVar2;
    auVar6._0_4_ = auVar5._0_4_ * fVar2;
    auVar6._8_4_ = auVar5._8_4_ * fVar2;
    auVar6._12_4_ = auVar5._12_4_ * fVar2;
    auVar6._16_4_ = auVar5._16_4_ * fVar2;
    auVar6._20_4_ = auVar5._20_4_ * fVar2;
    auVar6._24_4_ = auVar5._24_4_ * fVar2;
    auVar6._28_4_ = 0;
    auVar5 = vmaskmovps_avx(auVar19,auVar6);
    *(undefined1 (*) [32])(param_2 + lVar15) = auVar5;
    return;
  }
  auVar6 = vmaskmovps_avx(auVar19,*(undefined1 (*) [32])(param_2 + lVar15));
  auVar18._0_4_ = auVar5._0_4_ * fVar2 + auVar6._0_4_;
  auVar18._4_4_ = auVar5._4_4_ * fVar2 + auVar6._4_4_;
  auVar18._8_4_ = auVar5._8_4_ * fVar2 + auVar6._8_4_;
  auVar18._12_4_ = auVar5._12_4_ * fVar2 + auVar6._12_4_;
  auVar18._16_4_ = auVar5._16_4_ * fVar2 + auVar6._16_4_;
  auVar18._20_4_ = auVar5._20_4_ * fVar2 + auVar6._20_4_;
  auVar18._24_4_ = auVar5._24_4_ * fVar2 + auVar6._24_4_;
  auVar18._28_4_ = auVar6._28_4_ + 0.0;
  auVar5 = vmaskmovps_avx(auVar19,auVar18);
  *(undefined1 (*) [32])(param_2 + lVar15) = auVar5;
  return;
}






// 函数: void FUN_1807e3130(longlong param_1,longlong param_2,uint param_3,undefined4 *param_4,
void FUN_1807e3130(longlong param_1,longlong param_2,uint param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  float *pfVar1;
  uint uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined1 auVar5 [32];
  uint uVar6;
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  
  uVar3 = *param_4;
  auVar7._4_4_ = uVar3;
  auVar7._0_4_ = uVar3;
  auVar7._8_4_ = uVar3;
  auVar7._12_4_ = uVar3;
  auVar7._16_4_ = uVar3;
  auVar7._20_4_ = uVar3;
  auVar7._24_4_ = uVar3;
  auVar7._28_4_ = uVar3;
  uVar3 = param_4[0x60];
  auVar23._4_4_ = uVar3;
  auVar23._0_4_ = uVar3;
  auVar23._8_4_ = uVar3;
  auVar23._12_4_ = uVar3;
  auVar23._16_4_ = uVar3;
  auVar23._20_4_ = uVar3;
  auVar23._24_4_ = uVar3;
  auVar23._28_4_ = uVar3;
  uVar3 = param_4[0x80];
  auVar25._4_4_ = uVar3;
  auVar25._0_4_ = uVar3;
  auVar25._8_4_ = uVar3;
  auVar25._12_4_ = uVar3;
  auVar25._16_4_ = uVar3;
  auVar25._20_4_ = uVar3;
  auVar25._24_4_ = uVar3;
  auVar25._28_4_ = uVar3;
  uVar3 = param_4[0x20];
  auVar16._4_4_ = uVar3;
  auVar16._0_4_ = uVar3;
  auVar16._8_4_ = uVar3;
  auVar16._12_4_ = uVar3;
  auVar16._16_4_ = uVar3;
  auVar16._20_4_ = uVar3;
  auVar16._24_4_ = uVar3;
  auVar16._28_4_ = uVar3;
  uVar3 = param_4[0x40];
  auVar21._4_4_ = uVar3;
  auVar21._0_4_ = uVar3;
  auVar21._8_4_ = uVar3;
  auVar21._12_4_ = uVar3;
  auVar21._16_4_ = uVar3;
  auVar21._20_4_ = uVar3;
  auVar21._24_4_ = uVar3;
  auVar21._28_4_ = uVar3;
  uVar6 = 0;
  uVar3 = param_4[0xa0];
  auVar27._4_4_ = uVar3;
  auVar27._0_4_ = uVar3;
  auVar27._8_4_ = uVar3;
  auVar27._12_4_ = uVar3;
  auVar27._16_4_ = uVar3;
  auVar27._20_4_ = uVar3;
  auVar27._24_4_ = uVar3;
  auVar27._28_4_ = uVar3;
  uVar3 = param_4[0xc0];
  auVar29._4_4_ = uVar3;
  auVar29._0_4_ = uVar3;
  auVar29._8_4_ = uVar3;
  auVar29._12_4_ = uVar3;
  auVar29._16_4_ = uVar3;
  auVar29._20_4_ = uVar3;
  auVar29._24_4_ = uVar3;
  auVar29._28_4_ = uVar3;
  uVar3 = param_4[0xe0];
  auVar31._4_4_ = uVar3;
  auVar31._0_4_ = uVar3;
  auVar31._8_4_ = uVar3;
  auVar31._12_4_ = uVar3;
  auVar31._16_4_ = uVar3;
  auVar31._20_4_ = uVar3;
  auVar31._24_4_ = uVar3;
  auVar31._28_4_ = uVar3;
  auVar7 = vblendps_avx(ZEXT1632(ZEXT816(0) << 0x40),auVar7,1);
  auVar7 = vblendps_avx(auVar7,auVar16,2);
  auVar7 = vblendps_avx(auVar7,auVar21,4);
  auVar7 = vblendps_avx(auVar7,auVar23,8);
  uVar3 = param_4[0x61];
  auVar24._4_4_ = uVar3;
  auVar24._0_4_ = uVar3;
  auVar24._8_4_ = uVar3;
  auVar24._12_4_ = uVar3;
  auVar24._16_4_ = uVar3;
  auVar24._20_4_ = uVar3;
  auVar24._24_4_ = uVar3;
  auVar24._28_4_ = uVar3;
  auVar7 = vblendps_avx(auVar7,auVar25,0x10);
  uVar3 = param_4[1];
  auVar8._4_4_ = uVar3;
  auVar8._0_4_ = uVar3;
  auVar8._8_4_ = uVar3;
  auVar8._12_4_ = uVar3;
  auVar8._16_4_ = uVar3;
  auVar8._20_4_ = uVar3;
  auVar8._24_4_ = uVar3;
  auVar8._28_4_ = uVar3;
  uVar3 = param_4[0x81];
  auVar26._4_4_ = uVar3;
  auVar26._0_4_ = uVar3;
  auVar26._8_4_ = uVar3;
  auVar26._12_4_ = uVar3;
  auVar26._16_4_ = uVar3;
  auVar26._20_4_ = uVar3;
  auVar26._24_4_ = uVar3;
  auVar26._28_4_ = uVar3;
  auVar7 = vblendps_avx(auVar7,auVar27,0x20);
  uVar3 = param_4[0xa1];
  auVar28._4_4_ = uVar3;
  auVar28._0_4_ = uVar3;
  auVar28._8_4_ = uVar3;
  auVar28._12_4_ = uVar3;
  auVar28._16_4_ = uVar3;
  auVar28._20_4_ = uVar3;
  auVar28._24_4_ = uVar3;
  auVar28._28_4_ = uVar3;
  auVar7 = vblendps_avx(auVar7,auVar29,0x40);
  uVar3 = param_4[0x21];
  auVar17._4_4_ = uVar3;
  auVar17._0_4_ = uVar3;
  auVar17._8_4_ = uVar3;
  auVar17._12_4_ = uVar3;
  auVar17._16_4_ = uVar3;
  auVar17._20_4_ = uVar3;
  auVar17._24_4_ = uVar3;
  auVar17._28_4_ = uVar3;
  uVar3 = param_4[0xc1];
  auVar30._4_4_ = uVar3;
  auVar30._0_4_ = uVar3;
  auVar30._8_4_ = uVar3;
  auVar30._12_4_ = uVar3;
  auVar30._16_4_ = uVar3;
  auVar30._20_4_ = uVar3;
  auVar30._24_4_ = uVar3;
  auVar30._28_4_ = uVar3;
  auVar7 = vblendps_avx(auVar7,auVar31,0x80);
  uVar3 = param_4[0x41];
  auVar22._4_4_ = uVar3;
  auVar22._0_4_ = uVar3;
  auVar22._8_4_ = uVar3;
  auVar22._12_4_ = uVar3;
  auVar22._16_4_ = uVar3;
  auVar22._20_4_ = uVar3;
  auVar22._24_4_ = uVar3;
  auVar22._28_4_ = uVar3;
  uVar3 = param_4[0xe1];
  auVar32._4_4_ = uVar3;
  auVar32._0_4_ = uVar3;
  auVar32._8_4_ = uVar3;
  auVar32._12_4_ = uVar3;
  auVar32._16_4_ = uVar3;
  auVar32._20_4_ = uVar3;
  auVar32._24_4_ = uVar3;
  auVar32._28_4_ = uVar3;
  auVar8 = vblendps_avx(ZEXT1632(ZEXT816(0) << 0x40),auVar8,1);
  auVar8 = vblendps_avx(auVar8,auVar17,2);
  auVar8 = vblendps_avx(auVar8,auVar22,4);
  auVar8 = vblendps_avx(auVar8,auVar24,8);
  auVar8 = vblendps_avx(auVar8,auVar26,0x10);
  auVar16 = vblendps_avx(auVar8,auVar28,0x20);
  auVar19 = ZEXT3264(auVar16);
  auVar16 = vblendps_avx(auVar16,auVar30,0x40);
  auVar16 = vblendps_avx(auVar16,auVar32,0x80);
  if (param_7 == 0) {
    if (param_3 != 0) {
      do {
        fVar4 = *(float *)(param_1 + (ulonglong)(uVar6 * 2) * 4);
        fVar15 = *(float *)(param_1 + (ulonglong)(uVar6 * 2) * 4 + 4);
        uVar2 = uVar6 * 8;
        uVar6 = uVar6 + 1;
        pfVar1 = (float *)(param_2 + (ulonglong)uVar2 * 4);
        fVar9 = fVar15 * auVar16._0_4_;
        fVar10 = fVar15 * auVar16._4_4_;
        auVar5._4_4_ = fVar10;
        auVar5._0_4_ = fVar9;
        fVar11 = fVar15 * auVar16._8_4_;
        auVar5._8_4_ = fVar11;
        fVar12 = fVar15 * auVar16._12_4_;
        auVar5._12_4_ = fVar12;
        fVar13 = fVar15 * auVar16._16_4_;
        auVar5._16_4_ = fVar13;
        fVar14 = fVar15 * auVar16._20_4_;
        auVar5._20_4_ = fVar14;
        fVar15 = fVar15 * auVar16._24_4_;
        auVar5._24_4_ = fVar15;
        auVar5._28_4_ = auVar8._28_4_;
        auVar18._0_4_ = fVar4 * auVar7._0_4_ + *pfVar1 + fVar9;
        auVar18._4_4_ = fVar4 * auVar7._4_4_ + pfVar1[1] + fVar10;
        auVar18._8_4_ = fVar4 * auVar7._8_4_ + pfVar1[2] + fVar11;
        auVar18._12_4_ = fVar4 * auVar7._12_4_ + pfVar1[3] + fVar12;
        auVar18._16_4_ = fVar4 * auVar7._16_4_ + pfVar1[4] + fVar13;
        auVar18._20_4_ = fVar4 * auVar7._20_4_ + pfVar1[5] + fVar14;
        auVar18._24_4_ = fVar4 * auVar7._24_4_ + pfVar1[6] + fVar15;
        auVar18._28_4_ = auVar19._28_4_ + pfVar1[7] + auVar8._28_4_;
        auVar19 = ZEXT3264(auVar18);
        *(undefined1 (*) [32])(param_2 + (ulonglong)uVar2 * 4) = auVar18;
        auVar8 = auVar5;
      } while (uVar6 < param_3);
    }
  }
  else if (param_3 != 0) {
    do {
      fVar4 = *(float *)(param_1 + 4 + (ulonglong)(uVar6 * 2) * 4);
      fVar15 = *(float *)(param_1 + (ulonglong)(uVar6 * 2) * 4);
      auVar20._0_4_ = fVar4 * auVar16._0_4_;
      auVar20._4_4_ = fVar4 * auVar16._4_4_;
      auVar20._8_4_ = fVar4 * auVar16._8_4_;
      auVar20._12_4_ = fVar4 * auVar16._12_4_;
      auVar20._16_4_ = fVar4 * auVar16._16_4_;
      auVar20._20_4_ = fVar4 * auVar16._20_4_;
      auVar20._28_36_ = auVar19._28_36_;
      auVar20._24_4_ = fVar4 * auVar16._24_4_;
      uVar2 = uVar6 * 8;
      uVar6 = uVar6 + 1;
      pfVar1 = (float *)(param_2 + (ulonglong)uVar2 * 4);
      *pfVar1 = auVar20._0_4_ + fVar15 * auVar7._0_4_;
      pfVar1[1] = auVar20._4_4_ + fVar15 * auVar7._4_4_;
      pfVar1[2] = auVar20._8_4_ + fVar15 * auVar7._8_4_;
      pfVar1[3] = auVar20._12_4_ + fVar15 * auVar7._12_4_;
      pfVar1[4] = auVar20._16_4_ + fVar15 * auVar7._16_4_;
      pfVar1[5] = auVar20._20_4_ + fVar15 * auVar7._20_4_;
      pfVar1[6] = auVar20._24_4_ + fVar15 * auVar7._24_4_;
      pfVar1[7] = auVar19._28_4_ + fVar4;
      auVar19 = ZEXT3264(auVar20._0_32_);
    } while (uVar6 < param_3);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001807e33ce)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




