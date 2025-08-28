#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part710.c - 3 个函数

// 函数: void FUN_180675b7b(void)
void FUN_180675b7b(void)

{
  int8_t *puVar1;
  int8_t *puVar2;
  int8_t *puVar3;
  int8_t *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  int8_t auVar13 [16];
  uint in_EAX;
  int64_t lVar14;
  int8_t (*pauVar15) [16];
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  char *unaff_RSI;
  uint unaff_EDI;
  char *pcVar16;
  uint64_t uVar17;
  int64_t in_R11;
  int64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t uVar18;
  int64_t unaff_R15;
  int8_t auVar20 [16];
  int8_t auVar22 [16];
  int8_t auVar23 [16];
  int8_t auVar31 [16];
  int8_t auVar39 [16];
  int8_t auVar40 [16];
  int8_t auVar48 [16];
  int8_t auVar49 [16];
  int8_t auVar57 [16];
  int8_t auVar58 [16];
  uint64_t unaff_XMM6_Qa;
  uint64_t unaff_XMM6_Qb;
  int8_t auVar59 [16];
  uint64_t unaff_XMM7_Qa;
  uint64_t unaff_XMM7_Qb;
  int8_t auVar60 [16];
  int8_t auVar61 [16];
  uint64_t unaff_XMM8_Qa;
  uint64_t unaff_XMM8_Qb;
  int8_t auVar62 [16];
  int8_t auVar63 [16];
  uint64_t unaff_XMM9_Qa;
  uint64_t unaff_XMM9_Qb;
  int8_t auVar64 [16];
  int8_t auVar65 [16];
  int8_t auVar66 [16];
  uint64_t unaff_XMM10_Qa;
  uint64_t unaff_XMM10_Qb;
  int8_t auVar67 [16];
  int8_t auVar68 [16];
  int8_t auVar69 [16];
  int8_t auVar70 [16];
  int64_t in_stack_000000f8;
  int64_t in_stack_00000100;
  int in_stack_00000110;
  int in_stack_00000118;
  short sVar19;
  int8_t auVar21 [16];
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  int8_t auVar32 [16];
  int8_t auVar33 [16];
  int8_t auVar34 [16];
  int8_t auVar35 [16];
  int8_t auVar36 [16];
  int8_t auVar37 [16];
  int8_t auVar38 [16];
  int8_t auVar41 [16];
  int8_t auVar42 [16];
  int8_t auVar43 [16];
  int8_t auVar44 [16];
  int8_t auVar45 [16];
  int8_t auVar46 [16];
  int8_t auVar47 [16];
  int8_t auVar50 [16];
  int8_t auVar51 [16];
  int8_t auVar52 [16];
  int8_t auVar53 [16];
  int8_t auVar54 [16];
  int8_t auVar55 [16];
  int8_t auVar56 [16];
  
  *(uint64_t *)(in_R11 + 8) = unaff_RBP;
  *(uint64_t *)(in_R11 + 0x10) = unaff_R13;
  *(uint64_t *)(in_R11 + 0x18) = unaff_R14;
  uVar18 = (uint64_t)in_EAX;
  *(uint64_t *)(in_R11 + -0x38) = unaff_XMM6_Qa;
  *(uint64_t *)(in_R11 + -0x30) = unaff_XMM6_Qb;
  *(uint64_t *)(in_R11 + -0x48) = unaff_XMM7_Qa;
  *(uint64_t *)(in_R11 + -0x40) = unaff_XMM7_Qb;
  *(uint64_t *)(in_R11 + -0x58) = unaff_XMM8_Qa;
  *(uint64_t *)(in_R11 + -0x50) = unaff_XMM8_Qb;
  *(uint64_t *)(in_R11 + -0x68) = unaff_XMM9_Qa;
  *(uint64_t *)(in_R11 + -0x60) = unaff_XMM9_Qb;
  *(uint64_t *)(in_R11 + -0x78) = unaff_XMM10_Qa;
  *(uint64_t *)(in_R11 + -0x70) = unaff_XMM10_Qb;
  do {
    auVar13 = render_system_ui;
    lVar14 = ((int64_t)(int)unaff_EDI >> 4) * unaff_RBX + unaff_R12;
    if ((unaff_EDI & 0xf) == 0) {
                    // WARNING: Subroutine does not return
      memcpy(unaff_RSI,unaff_R15 + lVar14,(int64_t)in_stack_00000118);
    }
    auVar67 = *(int8_t (*) [16])((uint64_t)(unaff_EDI & 0xf) * 0x10 + in_stack_00000100);
    auVar68 = pshufb(auVar67,render_system_ui);
    auVar69 = pshufb(auVar67,render_system_ui);
    auVar70 = pshufb(auVar67,render_system_ui);
    auVar67 = pshufb(auVar67,render_system_ui);
    if (0 < in_stack_00000118) {
      pauVar15 = (int8_t (*) [16])(lVar14 + unaff_RBX * 2);
      uVar17 = (uint64_t)((in_stack_00000118 - 1U >> 4) + 1);
      pcVar16 = unaff_RSI;
      do {
        puVar1 = *pauVar15 + unaff_RBX;
        puVar2 = *pauVar15 + unaff_R15;
        auVar22 = *pauVar15;
        auVar39 = *(int8_t (*) [16])(*pauVar15 + unaff_RBX * 2);
        auVar23 = *(int8_t (*) [16])(unaff_RBX * -2 + (int64_t)pauVar15);
        auVar48 = *(int8_t (*) [16])(*pauVar15 + unaff_RBX * 4);
        puVar3 = (int8_t *)((int64_t)pauVar15 - unaff_RBX);
        puVar4 = *pauVar15 + unaff_RBX * 5;
        pauVar15 = pauVar15 + 1;
        auVar64[1] = puVar1[8];
        auVar64[0] = auVar22[8];
        auVar64[2] = auVar22[9];
        auVar64[3] = puVar1[9];
        auVar64[4] = auVar22[10];
        auVar64[5] = puVar1[10];
        auVar64[6] = auVar22[0xb];
        auVar64[7] = puVar1[0xb];
        auVar64[8] = auVar22[0xc];
        auVar64[9] = puVar1[0xc];
        auVar64[10] = auVar22[0xd];
        auVar64[0xb] = puVar1[0xd];
        auVar64[0xc] = auVar22[0xe];
        auVar64[0xd] = puVar1[0xe];
        auVar64[0xe] = auVar22[0xf];
        auVar64[0xf] = puVar1[0xf];
        auVar56._0_14_ = auVar22._0_14_;
        auVar56[0xe] = auVar22[7];
        auVar56[0xf] = puVar1[7];
        auVar55._14_2_ = auVar56._14_2_;
        auVar55._0_13_ = auVar22._0_13_;
        auVar55[0xd] = puVar1[6];
        auVar54._13_3_ = auVar55._13_3_;
        auVar54._0_12_ = auVar22._0_12_;
        auVar54[0xc] = auVar22[6];
        auVar53._12_4_ = auVar54._12_4_;
        auVar53._0_11_ = auVar22._0_11_;
        auVar53[0xb] = puVar1[5];
        auVar52._11_5_ = auVar53._11_5_;
        auVar52._0_10_ = auVar22._0_10_;
        auVar52[10] = auVar22[5];
        auVar51._10_6_ = auVar52._10_6_;
        auVar51._0_9_ = auVar22._0_9_;
        auVar51[9] = puVar1[4];
        auVar50._9_7_ = auVar51._9_7_;
        auVar50._0_8_ = auVar22._0_8_;
        auVar50[8] = auVar22[4];
        auVar49._8_8_ = auVar50._8_8_;
        auVar49[7] = puVar1[3];
        auVar49[6] = auVar22[3];
        auVar49[5] = puVar1[2];
        auVar49[4] = auVar22[2];
        auVar49[3] = puVar1[1];
        auVar49[2] = auVar22[1];
        auVar49[0] = auVar22[0];
        auVar49[1] = *puVar1;
        auVar47._0_14_ = auVar39._0_14_;
        auVar47[0xe] = auVar39[7];
        auVar47[0xf] = puVar2[7];
        auVar46._14_2_ = auVar47._14_2_;
        auVar46._0_13_ = auVar39._0_13_;
        auVar46[0xd] = puVar2[6];
        auVar45._13_3_ = auVar46._13_3_;
        auVar45._0_12_ = auVar39._0_12_;
        auVar45[0xc] = auVar39[6];
        auVar44._12_4_ = auVar45._12_4_;
        auVar44._0_11_ = auVar39._0_11_;
        auVar44[0xb] = puVar2[5];
        auVar43._11_5_ = auVar44._11_5_;
        auVar43._0_10_ = auVar39._0_10_;
        auVar43[10] = auVar39[5];
        auVar42._10_6_ = auVar43._10_6_;
        auVar42._0_9_ = auVar39._0_9_;
        auVar42[9] = puVar2[4];
        auVar41._9_7_ = auVar42._9_7_;
        auVar41._0_8_ = auVar39._0_8_;
        auVar41[8] = auVar39[4];
        auVar40._8_8_ = auVar41._8_8_;
        auVar40[7] = puVar2[3];
        auVar40[6] = auVar39[3];
        auVar40[5] = puVar2[2];
        auVar40[4] = auVar39[2];
        auVar40[3] = puVar2[1];
        auVar40[2] = auVar39[1];
        auVar40[0] = auVar39[0];
        auVar40[1] = *puVar2;
        auVar59[1] = puVar2[8];
        auVar59[0] = auVar39[8];
        auVar59[2] = auVar39[9];
        auVar59[3] = puVar2[9];
        auVar59[4] = auVar39[10];
        auVar59[5] = puVar2[10];
        auVar59[6] = auVar39[0xb];
        auVar59[7] = puVar2[0xb];
        auVar59[8] = auVar39[0xc];
        auVar59[9] = puVar2[0xc];
        auVar59[10] = auVar39[0xd];
        auVar59[0xb] = puVar2[0xd];
        auVar59[0xc] = auVar39[0xe];
        auVar59[0xd] = puVar2[0xe];
        auVar59[0xe] = auVar39[0xf];
        auVar59[0xf] = puVar2[0xf];
        auVar38._0_14_ = auVar48._0_14_;
        auVar38[0xe] = auVar48[7];
        auVar38[0xf] = puVar4[7];
        auVar37._14_2_ = auVar38._14_2_;
        auVar37._0_13_ = auVar48._0_13_;
        auVar37[0xd] = puVar4[6];
        auVar36._13_3_ = auVar37._13_3_;
        auVar36._0_12_ = auVar48._0_12_;
        auVar36[0xc] = auVar48[6];
        auVar35._12_4_ = auVar36._12_4_;
        auVar35._0_11_ = auVar48._0_11_;
        auVar35[0xb] = puVar4[5];
        auVar34._11_5_ = auVar35._11_5_;
        auVar34._0_10_ = auVar48._0_10_;
        auVar34[10] = auVar48[5];
        auVar33._10_6_ = auVar34._10_6_;
        auVar33._0_9_ = auVar48._0_9_;
        auVar33[9] = puVar4[4];
        auVar32._9_7_ = auVar33._9_7_;
        auVar32._0_8_ = auVar48._0_8_;
        auVar32[8] = auVar48[4];
        auVar31._8_8_ = auVar32._8_8_;
        auVar31[7] = puVar4[3];
        auVar31[6] = auVar48[3];
        auVar31[5] = puVar4[2];
        auVar31[4] = auVar48[2];
        auVar31[3] = puVar4[1];
        auVar31[2] = auVar48[1];
        auVar31[0] = auVar48[0];
        auVar31[1] = *puVar4;
        auVar21._0_14_ = auVar23._0_14_;
        auVar21[0xe] = auVar23[7];
        auVar21[0xf] = puVar3[7];
        auVar20._14_2_ = auVar21._14_2_;
        auVar20._0_13_ = auVar23._0_13_;
        auVar20[0xd] = puVar3[6];
        auVar65._13_3_ = auVar20._13_3_;
        auVar65._0_12_ = auVar23._0_12_;
        auVar65[0xc] = auVar23[6];
        auVar63._12_4_ = auVar65._12_4_;
        auVar63._0_11_ = auVar23._0_11_;
        auVar63[0xb] = puVar3[5];
        auVar61._11_5_ = auVar63._11_5_;
        auVar61._0_10_ = auVar23._0_10_;
        auVar61[10] = auVar23[5];
        auVar57._10_6_ = auVar61._10_6_;
        auVar57._0_9_ = auVar23._0_9_;
        auVar57[9] = puVar3[4];
        auVar39._9_7_ = auVar57._9_7_;
        auVar39._0_8_ = auVar23._0_8_;
        auVar39[8] = auVar23[4];
        auVar22._8_8_ = auVar39._8_8_;
        auVar22[7] = puVar3[3];
        auVar22[6] = auVar23[3];
        auVar22[5] = puVar3[2];
        auVar22[4] = auVar23[2];
        auVar22[3] = puVar3[1];
        auVar22[2] = auVar23[1];
        auVar22[0] = auVar23[0];
        auVar22[1] = *puVar3;
        auVar39 = pmaddubsw(auVar31,auVar67);
        auVar22 = pmaddubsw(auVar22,auVar68);
        auVar62[1] = puVar4[8];
        auVar62[0] = auVar48[8];
        auVar62[2] = auVar48[9];
        auVar62[3] = puVar4[9];
        auVar62[4] = auVar48[10];
        auVar62[5] = puVar4[10];
        auVar62[6] = auVar48[0xb];
        auVar62[7] = puVar4[0xb];
        auVar62[8] = auVar48[0xc];
        auVar62[9] = puVar4[0xc];
        auVar62[10] = auVar48[0xd];
        auVar62[0xb] = puVar4[0xd];
        auVar62[0xc] = auVar48[0xe];
        auVar62[0xd] = puVar4[0xe];
        auVar62[0xe] = auVar48[0xf];
        auVar62[0xf] = puVar4[0xf];
        auVar63 = pmaddubsw(auVar62,auVar67);
        auVar57 = pmaddubsw(auVar49,auVar69);
        auVar48 = pmaddubsw(auVar40,auVar70);
        auVar65 = pmaddubsw(auVar64,auVar69);
        auVar22 = paddsw(auVar39,auVar22);
        auVar39 = pmaddubsw(auVar59,auVar70);
        auVar60[1] = puVar3[8];
        auVar60[0] = auVar23[8];
        auVar60[2] = auVar23[9];
        auVar60[3] = puVar3[9];
        auVar60[4] = auVar23[10];
        auVar60[5] = puVar3[10];
        auVar60[6] = auVar23[0xb];
        auVar60[7] = puVar3[0xb];
        auVar60[8] = auVar23[0xc];
        auVar60[9] = puVar3[0xc];
        auVar60[10] = auVar23[0xd];
        auVar60[0xb] = puVar3[0xd];
        auVar60[0xc] = auVar23[0xe];
        auVar60[0xd] = puVar3[0xe];
        auVar60[0xe] = auVar23[0xf];
        auVar60[0xf] = puVar3[0xf];
        auVar61 = pmaddubsw(auVar60,auVar68);
        sVar5 = auVar48._0_2_;
        sVar19 = auVar57._0_2_;
        auVar23._0_2_ = (ushort)(sVar5 < sVar19) * sVar5 | (ushort)(sVar5 >= sVar19) * sVar19;
        sVar6 = auVar48._2_2_;
        sVar24 = auVar57._2_2_;
        auVar23._2_2_ = (ushort)(sVar6 < sVar24) * sVar6 | (ushort)(sVar6 >= sVar24) * sVar24;
        sVar7 = auVar48._4_2_;
        sVar25 = auVar57._4_2_;
        auVar23._4_2_ = (ushort)(sVar7 < sVar25) * sVar7 | (ushort)(sVar7 >= sVar25) * sVar25;
        sVar8 = auVar48._6_2_;
        sVar26 = auVar57._6_2_;
        auVar23._6_2_ = (ushort)(sVar8 < sVar26) * sVar8 | (ushort)(sVar8 >= sVar26) * sVar26;
        sVar9 = auVar48._8_2_;
        sVar27 = auVar57._8_2_;
        auVar23._8_2_ = (ushort)(sVar9 < sVar27) * sVar9 | (ushort)(sVar9 >= sVar27) * sVar27;
        sVar10 = auVar48._10_2_;
        sVar28 = auVar57._10_2_;
        auVar23._10_2_ = (ushort)(sVar10 < sVar28) * sVar10 | (ushort)(sVar10 >= sVar28) * sVar28;
        sVar11 = auVar48._12_2_;
        sVar29 = auVar57._12_2_;
        sVar30 = auVar57._14_2_;
        auVar23._12_2_ = (ushort)(sVar11 < sVar29) * sVar11 | (ushort)(sVar11 >= sVar29) * sVar29;
        sVar12 = auVar48._14_2_;
        auVar23._14_2_ = (ushort)(sVar12 < sVar30) * sVar12 | (ushort)(sVar12 >= sVar30) * sVar30;
        auVar58._0_2_ = (ushort)(sVar19 < sVar5) * sVar5 | (ushort)(sVar19 >= sVar5) * sVar19;
        auVar58._2_2_ = (ushort)(sVar24 < sVar6) * sVar6 | (ushort)(sVar24 >= sVar6) * sVar24;
        auVar58._4_2_ = (ushort)(sVar25 < sVar7) * sVar7 | (ushort)(sVar25 >= sVar7) * sVar25;
        auVar58._6_2_ = (ushort)(sVar26 < sVar8) * sVar8 | (ushort)(sVar26 >= sVar8) * sVar26;
        auVar58._8_2_ = (ushort)(sVar27 < sVar9) * sVar9 | (ushort)(sVar27 >= sVar9) * sVar27;
        auVar58._10_2_ = (ushort)(sVar28 < sVar10) * sVar10 | (ushort)(sVar28 >= sVar10) * sVar28;
        auVar58._12_2_ = (ushort)(sVar29 < sVar11) * sVar11 | (ushort)(sVar29 >= sVar11) * sVar29;
        auVar58._14_2_ = (ushort)(sVar30 < sVar12) * sVar12 | (ushort)(sVar30 >= sVar12) * sVar30;
        auVar22 = paddsw(auVar22,auVar23);
        auVar22 = paddsw(auVar22,auVar58);
        sVar5 = auVar39._0_2_;
        sVar19 = auVar65._0_2_;
        auVar48._0_2_ = (ushort)(sVar5 < sVar19) * sVar5 | (ushort)(sVar5 >= sVar19) * sVar19;
        sVar6 = auVar39._2_2_;
        sVar24 = auVar65._2_2_;
        auVar48._2_2_ = (ushort)(sVar6 < sVar24) * sVar6 | (ushort)(sVar6 >= sVar24) * sVar24;
        sVar7 = auVar39._4_2_;
        sVar25 = auVar65._4_2_;
        auVar48._4_2_ = (ushort)(sVar7 < sVar25) * sVar7 | (ushort)(sVar7 >= sVar25) * sVar25;
        sVar8 = auVar39._6_2_;
        sVar26 = auVar65._6_2_;
        auVar48._6_2_ = (ushort)(sVar8 < sVar26) * sVar8 | (ushort)(sVar8 >= sVar26) * sVar26;
        sVar9 = auVar39._8_2_;
        sVar27 = auVar65._8_2_;
        auVar48._8_2_ = (ushort)(sVar9 < sVar27) * sVar9 | (ushort)(sVar9 >= sVar27) * sVar27;
        sVar10 = auVar39._10_2_;
        sVar28 = auVar65._10_2_;
        auVar48._10_2_ = (ushort)(sVar10 < sVar28) * sVar10 | (ushort)(sVar10 >= sVar28) * sVar28;
        sVar11 = auVar39._12_2_;
        sVar29 = auVar65._12_2_;
        sVar30 = auVar65._14_2_;
        auVar48._12_2_ = (ushort)(sVar11 < sVar29) * sVar11 | (ushort)(sVar11 >= sVar29) * sVar29;
        sVar12 = auVar39._14_2_;
        auVar48._14_2_ = (ushort)(sVar12 < sVar30) * sVar12 | (ushort)(sVar12 >= sVar30) * sVar30;
        auVar22 = pmulhrsw(auVar22,auVar13);
        auVar66._0_2_ = (ushort)(sVar19 < sVar5) * sVar5 | (ushort)(sVar19 >= sVar5) * sVar19;
        auVar66._2_2_ = (ushort)(sVar24 < sVar6) * sVar6 | (ushort)(sVar24 >= sVar6) * sVar24;
        auVar66._4_2_ = (ushort)(sVar25 < sVar7) * sVar7 | (ushort)(sVar25 >= sVar7) * sVar25;
        auVar66._6_2_ = (ushort)(sVar26 < sVar8) * sVar8 | (ushort)(sVar26 >= sVar8) * sVar26;
        auVar66._8_2_ = (ushort)(sVar27 < sVar9) * sVar9 | (ushort)(sVar27 >= sVar9) * sVar27;
        auVar66._10_2_ = (ushort)(sVar28 < sVar10) * sVar10 | (ushort)(sVar28 >= sVar10) * sVar28;
        auVar66._12_2_ = (ushort)(sVar29 < sVar11) * sVar11 | (ushort)(sVar29 >= sVar11) * sVar29;
        auVar66._14_2_ = (ushort)(sVar30 < sVar12) * sVar12 | (ushort)(sVar30 >= sVar12) * sVar30;
        auVar39 = paddsw(auVar63,auVar61);
        auVar39 = paddsw(auVar39,auVar48);
        auVar39 = paddsw(auVar39,auVar66);
        auVar39 = pmulhrsw(auVar39,auVar13);
        sVar5 = auVar22._0_2_;
        sVar6 = auVar22._2_2_;
        sVar7 = auVar22._4_2_;
        sVar8 = auVar22._6_2_;
        sVar9 = auVar22._8_2_;
        sVar10 = auVar22._10_2_;
        sVar11 = auVar22._12_2_;
        sVar12 = auVar22._14_2_;
        sVar19 = auVar39._0_2_;
        sVar24 = auVar39._2_2_;
        sVar25 = auVar39._4_2_;
        sVar26 = auVar39._6_2_;
        sVar27 = auVar39._8_2_;
        sVar28 = auVar39._10_2_;
        sVar29 = auVar39._12_2_;
        sVar30 = auVar39._14_2_;
        *pcVar16 = (0 < sVar5) * (sVar5 < 0x100) * auVar22[0] - (0xff < sVar5);
        pcVar16[1] = (0 < sVar6) * (sVar6 < 0x100) * auVar22[2] - (0xff < sVar6);
        pcVar16[2] = (0 < sVar7) * (sVar7 < 0x100) * auVar22[4] - (0xff < sVar7);
        pcVar16[3] = (0 < sVar8) * (sVar8 < 0x100) * auVar22[6] - (0xff < sVar8);
        pcVar16[4] = (0 < sVar9) * (sVar9 < 0x100) * auVar22[8] - (0xff < sVar9);
        pcVar16[5] = (0 < sVar10) * (sVar10 < 0x100) * auVar22[10] - (0xff < sVar10);
        pcVar16[6] = (0 < sVar11) * (sVar11 < 0x100) * auVar22[0xc] - (0xff < sVar11);
        pcVar16[7] = (0 < sVar12) * (sVar12 < 0x100) * auVar22[0xe] - (0xff < sVar12);
        pcVar16[8] = (0 < sVar19) * (sVar19 < 0x100) * auVar39[0] - (0xff < sVar19);
        pcVar16[9] = (0 < sVar24) * (sVar24 < 0x100) * auVar39[2] - (0xff < sVar24);
        pcVar16[10] = (0 < sVar25) * (sVar25 < 0x100) * auVar39[4] - (0xff < sVar25);
        pcVar16[0xb] = (0 < sVar26) * (sVar26 < 0x100) * auVar39[6] - (0xff < sVar26);
        pcVar16[0xc] = (0 < sVar27) * (sVar27 < 0x100) * auVar39[8] - (0xff < sVar27);
        pcVar16[0xd] = (0 < sVar28) * (sVar28 < 0x100) * auVar39[10] - (0xff < sVar28);
        pcVar16[0xe] = (0 < sVar29) * (sVar29 < 0x100) * auVar39[0xc] - (0xff < sVar29);
        pcVar16[0xf] = (0 < sVar30) * (sVar30 < 0x100) * auVar39[0xe] - (0xff < sVar30);
        uVar17 = uVar17 - 1;
        pcVar16 = pcVar16 + 0x10;
      } while (uVar17 != 0);
    }
    unaff_RSI = unaff_RSI + in_stack_000000f8;
    unaff_EDI = unaff_EDI + in_stack_00000110;
    uVar18 = uVar18 - 1;
  } while (uVar18 != 0);
  return;
}





// 函数: void FUN_180675dd9(void)
void FUN_180675dd9(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180675df0(int64_t param_1,int64_t param_2,int32_t *param_3,int64_t param_4,
void FUN_180675df0(int64_t param_1,int64_t param_2,int32_t *param_3,int64_t param_4,
                  int64_t param_5,uint param_6,int param_7,int param_8,uint param_9)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  int32_t *puVar13;
  uint64_t uVar14;
  int32_t *puVar15;
  short sVar16;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  int8_t auVar17 [16];
  short sVar24;
  int8_t auVar25 [16];
  int8_t auVar26 [16];
  int8_t auVar27 [16];
  int8_t auVar28 [16];
  int8_t auVar29 [16];
  
  if (0 < (int)param_9) {
    uVar14 = (uint64_t)param_9;
    puVar15 = param_3;
    do {
      puVar13 = (int32_t *)(((int64_t)(int)param_6 >> 4) * param_2 + param_1 + param_2 * -3);
      if ((param_6 & 0xf) == 0) {
                    // WARNING: Subroutine does not return
        memcpy(puVar15,(int64_t)puVar13 + param_2 * 3,(int64_t)param_8);
      }
      uVar1 = *(int32_t *)((int64_t)puVar13 + param_2 * 3);
      uVar2 = *(int32_t *)((int64_t)puVar13 + param_2 * 2);
      uVar3 = puVar13[param_2];
      uVar4 = *puVar13;
      auVar28._4_4_ =
           (int)(CONCAT35(CONCAT21(CONCAT11((char)((uint)uVar1 >> 0x18),(char)((uint)uVar2 >> 0x18))
                                   ,(char)((uint)uVar1 >> 0x10)),
                          CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >> 0x20);
      auVar28[3] = (char)((uint)uVar1 >> 8);
      auVar28[2] = (char)((uint)uVar2 >> 8);
      auVar28[0] = (int8_t)uVar2;
      auVar28[1] = (char)uVar1;
      auVar28._8_8_ = 0;
      auVar26 = *(int8_t (*) [16])((uint64_t)(param_6 & 0xf) * 0x10 + param_5);
      auVar17 = pshufb(auVar26,render_system_ui);
      auVar29 = pmaddubsw(auVar28,auVar17);
      uVar1 = *(int32_t *)((int64_t)puVar13 + param_2 * 5);
      uVar2 = *(int32_t *)((int64_t)puVar13 + param_2 * 6);
      auVar27._4_4_ =
           (int)(CONCAT35(CONCAT21(CONCAT11((char)((uint)uVar1 >> 0x18),(char)((uint)uVar3 >> 0x18))
                                   ,(char)((uint)uVar1 >> 0x10)),
                          CONCAT14((char)((uint)uVar3 >> 0x10),uVar3)) >> 0x20);
      auVar27[3] = (char)((uint)uVar1 >> 8);
      auVar27[2] = (char)((uint)uVar3 >> 8);
      auVar27[0] = (int8_t)uVar3;
      auVar27[1] = (char)uVar1;
      auVar27._8_8_ = 0;
      auVar17 = pshufb(auVar26,render_system_ui);
      auVar27 = pmaddubsw(auVar27,auVar17);
      uVar1 = *(int32_t *)(param_2 * 7 + (int64_t)puVar13);
      auVar25._4_4_ =
           (int)(CONCAT35(CONCAT21(CONCAT11((char)((uint)uVar1 >> 0x18),(char)((uint)uVar2 >> 0x18))
                                   ,(char)((uint)uVar1 >> 0x10)),
                          CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >> 0x20);
      auVar25[3] = (char)((uint)uVar1 >> 8);
      auVar25[2] = (char)((uint)uVar2 >> 8);
      auVar25[0] = (int8_t)uVar2;
      auVar25[1] = (char)uVar1;
      auVar25._8_8_ = 0;
      auVar17 = pshufb(auVar26,render_system_ui);
      auVar26 = pshufb(auVar26,render_system_ui);
      auVar25 = pmaddubsw(auVar25,auVar17);
      uVar1 = *(int32_t *)((int64_t)puVar13 + param_2);
      auVar17._4_4_ =
           (int)(CONCAT35(CONCAT21(CONCAT11((char)((uint)uVar1 >> 0x18),(char)((uint)uVar4 >> 0x18))
                                   ,(char)((uint)uVar1 >> 0x10)),
                          CONCAT14((char)((uint)uVar4 >> 0x10),uVar4)) >> 0x20);
      auVar17[3] = (char)((uint)uVar1 >> 8);
      auVar17[2] = (char)((uint)uVar4 >> 8);
      auVar17[0] = (int8_t)uVar4;
      auVar17[1] = (char)uVar1;
      auVar17._8_8_ = 0;
      auVar17 = pmaddubsw(auVar17,auVar26);
      sVar5 = auVar29._0_2_;
      sVar16 = auVar27._0_2_;
      auVar26._0_2_ = (ushort)(sVar5 < sVar16) * sVar5 | (ushort)(sVar5 >= sVar16) * sVar16;
      sVar6 = auVar29._2_2_;
      sVar18 = auVar27._2_2_;
      auVar26._2_2_ = (ushort)(sVar6 < sVar18) * sVar6 | (ushort)(sVar6 >= sVar18) * sVar18;
      sVar7 = auVar29._4_2_;
      sVar19 = auVar27._4_2_;
      auVar26._4_2_ = (ushort)(sVar7 < sVar19) * sVar7 | (ushort)(sVar7 >= sVar19) * sVar19;
      sVar8 = auVar29._6_2_;
      sVar20 = auVar27._6_2_;
      auVar26._6_2_ = (ushort)(sVar8 < sVar20) * sVar8 | (ushort)(sVar8 >= sVar20) * sVar20;
      sVar9 = auVar29._8_2_;
      sVar21 = auVar27._8_2_;
      auVar26._8_2_ = (ushort)(sVar9 < sVar21) * sVar9 | (ushort)(sVar9 >= sVar21) * sVar21;
      sVar10 = auVar29._10_2_;
      sVar22 = auVar27._10_2_;
      auVar26._10_2_ = (ushort)(sVar10 < sVar22) * sVar10 | (ushort)(sVar10 >= sVar22) * sVar22;
      sVar11 = auVar29._12_2_;
      sVar23 = auVar27._12_2_;
      sVar24 = auVar27._14_2_;
      auVar26._12_2_ = (ushort)(sVar11 < sVar23) * sVar11 | (ushort)(sVar11 >= sVar23) * sVar23;
      sVar12 = auVar29._14_2_;
      auVar26._14_2_ = (ushort)(sVar12 < sVar24) * sVar12 | (ushort)(sVar12 >= sVar24) * sVar24;
      auVar29._0_2_ = (ushort)(sVar16 < sVar5) * sVar5 | (ushort)(sVar16 >= sVar5) * sVar16;
      auVar29._2_2_ = (ushort)(sVar18 < sVar6) * sVar6 | (ushort)(sVar18 >= sVar6) * sVar18;
      auVar29._4_2_ = (ushort)(sVar19 < sVar7) * sVar7 | (ushort)(sVar19 >= sVar7) * sVar19;
      auVar29._6_2_ = (ushort)(sVar20 < sVar8) * sVar8 | (ushort)(sVar20 >= sVar8) * sVar20;
      auVar29._8_2_ = (ushort)(sVar21 < sVar9) * sVar9 | (ushort)(sVar21 >= sVar9) * sVar21;
      auVar29._10_2_ = (ushort)(sVar22 < sVar10) * sVar10 | (ushort)(sVar22 >= sVar10) * sVar22;
      auVar29._12_2_ = (ushort)(sVar23 < sVar11) * sVar11 | (ushort)(sVar23 >= sVar11) * sVar23;
      auVar29._14_2_ = (ushort)(sVar24 < sVar12) * sVar12 | (ushort)(sVar24 >= sVar12) * sVar24;
      auVar17 = paddsw(auVar25,auVar17);
      auVar26 = paddsw(auVar17,auVar26);
      auVar26 = paddsw(auVar26,auVar29);
      auVar26 = pmulhrsw(auVar26,render_system_ui);
      sVar5 = auVar26._0_2_;
      sVar6 = auVar26._2_2_;
      sVar7 = auVar26._4_2_;
      sVar8 = auVar26._6_2_;
      *param_3 = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * auVar26[6] - (0xff < sVar8),
                          CONCAT12((0 < sVar7) * (sVar7 < 0x100) * auVar26[4] - (0xff < sVar7),
                                   CONCAT11((0 < sVar6) * (sVar6 < 0x100) * auVar26[2] -
                                            (0xff < sVar6),
                                            (0 < sVar5) * (sVar5 < 0x100) * auVar26[0] -
                                            (0xff < sVar5))));
      param_6 = param_6 + param_7;
      puVar15 = (int32_t *)((int64_t)puVar15 + param_4);
      param_3 = (int32_t *)((int64_t)param_3 + param_4);
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



