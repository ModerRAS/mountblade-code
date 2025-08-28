#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part042.c - 7 个函数

// 函数: void FUN_180676df0(int64_t param_1,int64_t param_2,uint64_t *param_3,int64_t param_4,
void FUN_180676df0(int64_t param_1,int64_t param_2,uint64_t *param_3,int64_t param_4,
                  uint param_5,int8_t (*param_6) [16])

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int8_t auVar9 [16];
  int8_t auVar10 [16];
  int8_t auVar11 [16];
  int8_t auVar12 [16];
  int8_t auVar13 [16];
  int8_t (*pauVar14) [16];
  uint64_t uVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  int8_t auVar24 [16];
  int8_t auVar25 [16];
  int8_t auVar26 [16];
  int8_t auVar27 [16];
  int8_t auVar28 [16];
  int8_t auVar29 [16];
  int8_t auVar30 [16];
  int8_t auVar31 [16];
  
  auVar13 = ui_system_config;
  auVar12 = ui_system_config;
  auVar11 = ui_system_config;
  auVar10 = ui_system_config;
  auVar9 = ui_system_config;
  auVar28 = packsswb(*param_6,*param_6);
  auVar29 = pshufb(auVar28,ui_system_config);
  auVar30 = pshufb(auVar28,ui_system_config);
  auVar31 = pshufb(auVar28,ui_system_config);
  auVar28 = pshufb(auVar28,ui_system_config);
  if (param_5 != 0) {
    pauVar14 = (int8_t (*) [16])(param_1 + -3);
    uVar15 = (uint64_t)param_5;
    do {
      auVar24 = *pauVar14;
      pauVar14 = (int8_t (*) [16])(*pauVar14 + param_2);
      auVar26 = pshufb(auVar24,auVar12);
      auVar27 = pmaddubsw(auVar26,auVar28);
      auVar26 = pshufb(auVar24,auVar9);
      auVar25 = pshufb(auVar24,auVar10);
      auVar26 = pmaddubsw(auVar26,auVar29);
      auVar25 = pmaddubsw(auVar25,auVar30);
      auVar24 = pshufb(auVar24,auVar11);
      auVar27 = paddsw(auVar27,auVar26);
      auVar26 = pmaddubsw(auVar24,auVar31);
      sVar1 = auVar26._0_2_;
      sVar16 = auVar25._0_2_;
      auVar24._0_2_ = (ushort)(sVar1 < sVar16) * sVar1 | (ushort)(sVar1 >= sVar16) * sVar16;
      sVar2 = auVar26._2_2_;
      sVar17 = auVar25._2_2_;
      auVar24._2_2_ = (ushort)(sVar2 < sVar17) * sVar2 | (ushort)(sVar2 >= sVar17) * sVar17;
      sVar3 = auVar26._4_2_;
      sVar18 = auVar25._4_2_;
      auVar24._4_2_ = (ushort)(sVar3 < sVar18) * sVar3 | (ushort)(sVar3 >= sVar18) * sVar18;
      sVar4 = auVar26._6_2_;
      sVar19 = auVar25._6_2_;
      auVar24._6_2_ = (ushort)(sVar4 < sVar19) * sVar4 | (ushort)(sVar4 >= sVar19) * sVar19;
      sVar5 = auVar26._8_2_;
      sVar20 = auVar25._8_2_;
      auVar24._8_2_ = (ushort)(sVar5 < sVar20) * sVar5 | (ushort)(sVar5 >= sVar20) * sVar20;
      sVar6 = auVar26._10_2_;
      sVar21 = auVar25._10_2_;
      auVar24._10_2_ = (ushort)(sVar6 < sVar21) * sVar6 | (ushort)(sVar6 >= sVar21) * sVar21;
      sVar7 = auVar26._12_2_;
      sVar22 = auVar25._12_2_;
      sVar23 = auVar25._14_2_;
      auVar24._12_2_ = (ushort)(sVar7 < sVar22) * sVar7 | (ushort)(sVar7 >= sVar22) * sVar22;
      sVar8 = auVar26._14_2_;
      auVar24._14_2_ = (ushort)(sVar8 < sVar23) * sVar8 | (ushort)(sVar8 >= sVar23) * sVar23;
      auVar26._0_2_ = (ushort)(sVar16 < sVar1) * sVar1 | (ushort)(sVar16 >= sVar1) * sVar16;
      auVar26._2_2_ = (ushort)(sVar17 < sVar2) * sVar2 | (ushort)(sVar17 >= sVar2) * sVar17;
      auVar26._4_2_ = (ushort)(sVar18 < sVar3) * sVar3 | (ushort)(sVar18 >= sVar3) * sVar18;
      auVar26._6_2_ = (ushort)(sVar19 < sVar4) * sVar4 | (ushort)(sVar19 >= sVar4) * sVar19;
      auVar26._8_2_ = (ushort)(sVar20 < sVar5) * sVar5 | (ushort)(sVar20 >= sVar5) * sVar20;
      auVar26._10_2_ = (ushort)(sVar21 < sVar6) * sVar6 | (ushort)(sVar21 >= sVar6) * sVar21;
      auVar26._12_2_ = (ushort)(sVar22 < sVar7) * sVar7 | (ushort)(sVar22 >= sVar7) * sVar22;
      auVar26._14_2_ = (ushort)(sVar23 < sVar8) * sVar8 | (ushort)(sVar23 >= sVar8) * sVar23;
      auVar24 = paddsw(auVar27,auVar24);
      auVar24 = paddsw(auVar24,auVar26);
      auVar24 = paddsw(auVar24,auVar13);
      auVar24 = psraw(auVar24,7);
      sVar1 = auVar24._0_2_;
      sVar2 = auVar24._2_2_;
      sVar3 = auVar24._4_2_;
      sVar4 = auVar24._6_2_;
      sVar5 = auVar24._8_2_;
      sVar6 = auVar24._10_2_;
      sVar7 = auVar24._12_2_;
      sVar8 = auVar24._14_2_;
      *param_3 = CONCAT17((0 < sVar8) * (sVar8 < 0x100) * auVar24[0xe] - (0xff < sVar8),
                          CONCAT16((0 < sVar7) * (sVar7 < 0x100) * auVar24[0xc] - (0xff < sVar7),
                                   CONCAT15((0 < sVar6) * (sVar6 < 0x100) * auVar24[10] -
                                            (0xff < sVar6),
                                            CONCAT14((0 < sVar5) * (sVar5 < 0x100) * auVar24[8] -
                                                     (0xff < sVar5),
                                                     CONCAT13((0 < sVar4) * (sVar4 < 0x100) *
                                                              auVar24[6] - (0xff < sVar4),
                                                              CONCAT12((0 < sVar3) * (sVar3 < 0x100)
                                                                       * auVar24[4] - (0xff < sVar3)
                                                                       ,CONCAT11((0 < sVar2) *
                                                                                 (sVar2 < 0x100) *
                                                                                 auVar24[2] -
                                                                                 (0xff < sVar2),
                                                                                 (0 < sVar1) *
                                                                                 (sVar1 < 0x100) *
                                                                                 auVar24[0] -
                                                                                 (0xff < sVar1))))))
                                  ));
      param_3 = (uint64_t *)((int64_t)param_3 + param_4);
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180676f40(uint64_t *param_1,int64_t param_2,uint64_t *param_3,int64_t param_4,
void FUN_180676f40(uint64_t *param_1,int64_t param_2,uint64_t *param_3,int64_t param_4,
                  uint param_5,int8_t (*param_6) [16])

{
  uint64_t uVar1;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  int8_t auVar12 [16];
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t *puVar18;
  uint64_t uVar19;
  short sVar20;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  int8_t auVar21 [16];
  int8_t auVar26 [16];
  short sVar33;
  int8_t auVar34 [16];
  int8_t auVar42 [16];
  int8_t auVar43 [16];
  int8_t auVar44 [16];
  int8_t auVar52 [16];
  int8_t auVar53 [16];
  int8_t auVar61 [16];
  int8_t auVar62 [16];
  int8_t auVar63 [16];
  int8_t auVar64 [16];
  int8_t auVar65 [16];
  uint64_t uVar2;
  uint64_t uVar3;
  int8_t auVar22 [16];
  int8_t auVar23 [16];
  int8_t auVar24 [16];
  int8_t auVar25 [16];
  int8_t auVar35 [16];
  int8_t auVar36 [16];
  int8_t auVar37 [16];
  int8_t auVar38 [16];
  int8_t auVar39 [16];
  int8_t auVar40 [16];
  int8_t auVar41 [16];
  int8_t auVar45 [16];
  int8_t auVar46 [16];
  int8_t auVar47 [16];
  int8_t auVar48 [16];
  int8_t auVar49 [16];
  int8_t auVar50 [16];
  int8_t auVar51 [16];
  int8_t auVar54 [16];
  int8_t auVar55 [16];
  int8_t auVar56 [16];
  int8_t auVar57 [16];
  int8_t auVar58 [16];
  int8_t auVar59 [16];
  int8_t auVar60 [16];
  
  auVar12 = ui_system_config;
  uVar19 = (uint64_t)param_5;
  auVar62 = packsswb(*param_6,*param_6);
  auVar63 = pshufb(auVar62,ui_system_config);
  auVar64 = pshufb(auVar62,ui_system_config);
  auVar65 = pshufb(auVar62,ui_system_config);
  auVar62 = pshufb(auVar62,ui_system_config);
  if (param_5 != 0) {
    puVar18 = (uint64_t *)(param_2 * 7 + (int64_t)param_1);
    uVar1 = *(uint64_t *)((int64_t)param_1 + param_2 * 6);
    uVar13 = *(uint64_t *)((int64_t)param_1 + param_2 * 5);
    uVar14 = *(uint64_t *)((int64_t)param_1 + param_2 * 4);
    uVar15 = *(uint64_t *)((int64_t)param_1 + param_2 * 3);
    uVar16 = *(uint64_t *)((int64_t)param_1 + param_2 * 2);
    uVar17 = *(uint64_t *)((int64_t)param_1 + param_2);
    uVar2 = *param_1;
    do {
      uVar3 = uVar17;
      uVar17 = uVar16;
      uVar16 = uVar15;
      uVar15 = uVar14;
      uVar14 = uVar13;
      uVar13 = uVar1;
      uVar1 = *puVar18;
      auVar60._8_6_ = 0;
      auVar60._0_8_ = uVar13;
      auVar60[0xe] = (char)(uVar13 >> 0x38);
      auVar60[0xf] = (char)(uVar1 >> 0x38);
      auVar59._14_2_ = auVar60._14_2_;
      auVar59._8_5_ = 0;
      auVar59._0_8_ = uVar13;
      auVar59[0xd] = (char)(uVar1 >> 0x30);
      auVar58._13_3_ = auVar59._13_3_;
      auVar58._8_4_ = 0;
      auVar58._0_8_ = uVar13;
      auVar58[0xc] = (char)(uVar13 >> 0x30);
      auVar57._12_4_ = auVar58._12_4_;
      auVar57._8_3_ = 0;
      auVar57._0_8_ = uVar13;
      auVar57[0xb] = (char)(uVar1 >> 0x28);
      auVar56._11_5_ = auVar57._11_5_;
      auVar56._8_2_ = 0;
      auVar56._0_8_ = uVar13;
      auVar56[10] = (char)(uVar13 >> 0x28);
      auVar55._10_6_ = auVar56._10_6_;
      auVar55[8] = 0;
      auVar55._0_8_ = uVar13;
      auVar55[9] = (char)(uVar1 >> 0x20);
      auVar54._9_7_ = auVar55._9_7_;
      auVar54[8] = (char)(uVar13 >> 0x20);
      auVar54._0_8_ = uVar13;
      auVar53._8_8_ = auVar54._8_8_;
      auVar53[7] = (char)(uVar1 >> 0x18);
      auVar53[6] = (char)(uVar13 >> 0x18);
      auVar53[5] = (char)(uVar1 >> 0x10);
      auVar53[4] = (char)(uVar13 >> 0x10);
      auVar53[3] = (char)(uVar1 >> 8);
      auVar53[2] = (char)(uVar13 >> 8);
      auVar53[0] = (int8_t)uVar13;
      auVar53[1] = (char)uVar1;
      auVar61 = pmaddubsw(auVar53,auVar62);
      auVar25._8_6_ = 0;
      auVar25._0_8_ = uVar2;
      auVar25[0xe] = (char)(uVar2 >> 0x38);
      auVar25[0xf] = (char)(uVar3 >> 0x38);
      auVar24._14_2_ = auVar25._14_2_;
      auVar24._8_5_ = 0;
      auVar24._0_8_ = uVar2;
      auVar24[0xd] = (char)(uVar3 >> 0x30);
      auVar23._13_3_ = auVar24._13_3_;
      auVar23._8_4_ = 0;
      auVar23._0_8_ = uVar2;
      auVar23[0xc] = (char)(uVar2 >> 0x30);
      auVar22._12_4_ = auVar23._12_4_;
      auVar22._8_3_ = 0;
      auVar22._0_8_ = uVar2;
      auVar22[0xb] = (char)(uVar3 >> 0x28);
      auVar21._11_5_ = auVar22._11_5_;
      auVar21._8_2_ = 0;
      auVar21._0_8_ = uVar2;
      auVar21[10] = (char)(uVar2 >> 0x28);
      auVar52._10_6_ = auVar21._10_6_;
      auVar52[8] = 0;
      auVar52._0_8_ = uVar2;
      auVar52[9] = (char)(uVar3 >> 0x20);
      auVar42._9_7_ = auVar52._9_7_;
      auVar42[8] = (char)(uVar2 >> 0x20);
      auVar42._0_8_ = uVar2;
      auVar26._8_8_ = auVar42._8_8_;
      auVar26[7] = (char)(uVar3 >> 0x18);
      auVar26[6] = (char)(uVar2 >> 0x18);
      auVar26[5] = (char)(uVar3 >> 0x10);
      auVar26[4] = (char)(uVar2 >> 0x10);
      auVar26[3] = (char)(uVar3 >> 8);
      auVar26[2] = (char)(uVar2 >> 8);
      auVar26[0] = (int8_t)uVar2;
      auVar26[1] = (char)uVar3;
      puVar18 = (uint64_t *)((int64_t)puVar18 + param_2);
      auVar26 = pmaddubsw(auVar26,auVar63);
      auVar41._8_6_ = 0;
      auVar41._0_8_ = uVar15;
      auVar41[0xe] = (char)(uVar15 >> 0x38);
      auVar41[0xf] = (char)(uVar14 >> 0x38);
      auVar40._14_2_ = auVar41._14_2_;
      auVar40._8_5_ = 0;
      auVar40._0_8_ = uVar15;
      auVar40[0xd] = (char)(uVar14 >> 0x30);
      auVar39._13_3_ = auVar40._13_3_;
      auVar39._8_4_ = 0;
      auVar39._0_8_ = uVar15;
      auVar39[0xc] = (char)(uVar15 >> 0x30);
      auVar38._12_4_ = auVar39._12_4_;
      auVar38._8_3_ = 0;
      auVar38._0_8_ = uVar15;
      auVar38[0xb] = (char)(uVar14 >> 0x28);
      auVar37._11_5_ = auVar38._11_5_;
      auVar37._8_2_ = 0;
      auVar37._0_8_ = uVar15;
      auVar37[10] = (char)(uVar15 >> 0x28);
      auVar36._10_6_ = auVar37._10_6_;
      auVar36[8] = 0;
      auVar36._0_8_ = uVar15;
      auVar36[9] = (char)(uVar14 >> 0x20);
      auVar35._9_7_ = auVar36._9_7_;
      auVar35[8] = (char)(uVar15 >> 0x20);
      auVar35._0_8_ = uVar15;
      auVar34._8_8_ = auVar35._8_8_;
      auVar34[7] = (char)(uVar14 >> 0x18);
      auVar34[6] = (char)(uVar15 >> 0x18);
      auVar34[5] = (char)(uVar14 >> 0x10);
      auVar34[4] = (char)(uVar15 >> 0x10);
      auVar34[3] = (char)(uVar14 >> 8);
      auVar34[2] = (char)(uVar15 >> 8);
      auVar34[0] = (int8_t)uVar15;
      auVar34[1] = (char)uVar14;
      auVar51._8_6_ = 0;
      auVar51._0_8_ = uVar17;
      auVar51[0xe] = (char)(uVar17 >> 0x38);
      auVar51[0xf] = (char)(uVar16 >> 0x38);
      auVar50._14_2_ = auVar51._14_2_;
      auVar50._8_5_ = 0;
      auVar50._0_8_ = uVar17;
      auVar50[0xd] = (char)(uVar16 >> 0x30);
      auVar49._13_3_ = auVar50._13_3_;
      auVar49._8_4_ = 0;
      auVar49._0_8_ = uVar17;
      auVar49[0xc] = (char)(uVar17 >> 0x30);
      auVar48._12_4_ = auVar49._12_4_;
      auVar48._8_3_ = 0;
      auVar48._0_8_ = uVar17;
      auVar48[0xb] = (char)(uVar16 >> 0x28);
      auVar47._11_5_ = auVar48._11_5_;
      auVar47._8_2_ = 0;
      auVar47._0_8_ = uVar17;
      auVar47[10] = (char)(uVar17 >> 0x28);
      auVar46._10_6_ = auVar47._10_6_;
      auVar46[8] = 0;
      auVar46._0_8_ = uVar17;
      auVar46[9] = (char)(uVar16 >> 0x20);
      auVar45._9_7_ = auVar46._9_7_;
      auVar45[8] = (char)(uVar17 >> 0x20);
      auVar45._0_8_ = uVar17;
      auVar44._8_8_ = auVar45._8_8_;
      auVar44[7] = (char)(uVar16 >> 0x18);
      auVar44[6] = (char)(uVar17 >> 0x18);
      auVar44[5] = (char)(uVar16 >> 0x10);
      auVar44[4] = (char)(uVar17 >> 0x10);
      auVar44[3] = (char)(uVar16 >> 8);
      auVar44[2] = (char)(uVar17 >> 8);
      auVar44[0] = (int8_t)uVar17;
      auVar44[1] = (char)uVar16;
      auVar42 = pmaddubsw(auVar34,auVar65);
      auVar52 = pmaddubsw(auVar44,auVar64);
      auVar26 = paddsw(auVar61,auVar26);
      sVar4 = auVar52._0_2_;
      sVar20 = auVar42._0_2_;
      auVar61._0_2_ = (ushort)(sVar4 < sVar20) * sVar4 | (ushort)(sVar4 >= sVar20) * sVar20;
      sVar5 = auVar52._2_2_;
      sVar27 = auVar42._2_2_;
      auVar61._2_2_ = (ushort)(sVar5 < sVar27) * sVar5 | (ushort)(sVar5 >= sVar27) * sVar27;
      sVar6 = auVar52._4_2_;
      sVar28 = auVar42._4_2_;
      auVar61._4_2_ = (ushort)(sVar6 < sVar28) * sVar6 | (ushort)(sVar6 >= sVar28) * sVar28;
      sVar7 = auVar52._6_2_;
      sVar29 = auVar42._6_2_;
      auVar61._6_2_ = (ushort)(sVar7 < sVar29) * sVar7 | (ushort)(sVar7 >= sVar29) * sVar29;
      sVar8 = auVar52._8_2_;
      sVar30 = auVar42._8_2_;
      auVar61._8_2_ = (ushort)(sVar8 < sVar30) * sVar8 | (ushort)(sVar8 >= sVar30) * sVar30;
      sVar9 = auVar52._10_2_;
      sVar31 = auVar42._10_2_;
      auVar61._10_2_ = (ushort)(sVar9 < sVar31) * sVar9 | (ushort)(sVar9 >= sVar31) * sVar31;
      sVar10 = auVar52._12_2_;
      sVar32 = auVar42._12_2_;
      sVar33 = auVar42._14_2_;
      auVar61._12_2_ = (ushort)(sVar10 < sVar32) * sVar10 | (ushort)(sVar10 >= sVar32) * sVar32;
      sVar11 = auVar52._14_2_;
      auVar61._14_2_ = (ushort)(sVar11 < sVar33) * sVar11 | (ushort)(sVar11 >= sVar33) * sVar33;
      auVar43._0_2_ = (ushort)(sVar20 < sVar4) * sVar4 | (ushort)(sVar20 >= sVar4) * sVar20;
      auVar43._2_2_ = (ushort)(sVar27 < sVar5) * sVar5 | (ushort)(sVar27 >= sVar5) * sVar27;
      auVar43._4_2_ = (ushort)(sVar28 < sVar6) * sVar6 | (ushort)(sVar28 >= sVar6) * sVar28;
      auVar43._6_2_ = (ushort)(sVar29 < sVar7) * sVar7 | (ushort)(sVar29 >= sVar7) * sVar29;
      auVar43._8_2_ = (ushort)(sVar30 < sVar8) * sVar8 | (ushort)(sVar30 >= sVar8) * sVar30;
      auVar43._10_2_ = (ushort)(sVar31 < sVar9) * sVar9 | (ushort)(sVar31 >= sVar9) * sVar31;
      auVar43._12_2_ = (ushort)(sVar32 < sVar10) * sVar10 | (ushort)(sVar32 >= sVar10) * sVar32;
      auVar43._14_2_ = (ushort)(sVar33 < sVar11) * sVar11 | (ushort)(sVar33 >= sVar11) * sVar33;
      auVar26 = paddsw(auVar26,auVar61);
      auVar26 = paddsw(auVar26,auVar43);
      auVar26 = paddsw(auVar26,auVar12);
      auVar26 = psraw(auVar26,7);
      sVar4 = auVar26._0_2_;
      sVar5 = auVar26._2_2_;
      sVar6 = auVar26._4_2_;
      sVar7 = auVar26._6_2_;
      sVar8 = auVar26._8_2_;
      sVar9 = auVar26._10_2_;
      sVar10 = auVar26._12_2_;
      sVar11 = auVar26._14_2_;
      *param_3 = CONCAT17((0 < sVar11) * (sVar11 < 0x100) * auVar26[0xe] - (0xff < sVar11),
                          CONCAT16((0 < sVar10) * (sVar10 < 0x100) * auVar26[0xc] - (0xff < sVar10),
                                   CONCAT15((0 < sVar9) * (sVar9 < 0x100) * auVar26[10] -
                                            (0xff < sVar9),
                                            CONCAT14((0 < sVar8) * (sVar8 < 0x100) * auVar26[8] -
                                                     (0xff < sVar8),
                                                     CONCAT13((0 < sVar7) * (sVar7 < 0x100) *
                                                              auVar26[6] - (0xff < sVar7),
                                                              CONCAT12((0 < sVar6) * (sVar6 < 0x100)
                                                                       * auVar26[4] - (0xff < sVar6)
                                                                       ,CONCAT11((0 < sVar5) *
                                                                                 (sVar5 < 0x100) *
                                                                                 auVar26[2] -
                                                                                 (0xff < sVar5),
                                                                                 (0 < sVar4) *
                                                                                 (sVar4 < 0x100) *
                                                                                 auVar26[0] -
                                                                                 (0xff < sVar4))))))
                                  ));
      param_3 = (uint64_t *)((int64_t)param_3 + param_4);
      uVar19 = uVar19 - 1;
      uVar2 = uVar3;
    } while (uVar19 != 0);
  }
  return;
}





// 函数: void FUN_180677100(void)
void FUN_180677100(void)

{
  FUN_180675430();
  return;
}





// 函数: void FUN_180677190(void)
void FUN_180677190(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_180677300(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
void FUN_180677300(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
                  short *param_5)

{
  uint64_t uVar1;
  uint in_stack_00000048;
  int32_t in_stack_00000050;
  
  if (((*param_5 == 0) && (param_5[1] == 0)) && (param_5[2] == 0)) {
    if (0xf < (int)in_stack_00000048) {
      uVar1 = (uint64_t)(in_stack_00000048 >> 4);
      in_stack_00000048 = in_stack_00000048 + (in_stack_00000048 >> 4) * -0x10;
      do {
        func_0x000180021426(param_1,param_2,param_3,param_4,in_stack_00000050,param_5);
        param_1 = param_1 + 0x10;
        param_3 = param_3 + 0x10;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (7 < (int)in_stack_00000048) {
      uVar1 = (uint64_t)(in_stack_00000048 >> 3);
      in_stack_00000048 = in_stack_00000048 + (in_stack_00000048 >> 3) * -8;
      do {
        func_0x000180021378(param_1,param_2,param_3,param_4,in_stack_00000050,param_5);
        param_1 = param_1 + 8;
        param_3 = param_3 + 8;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (3 < (int)in_stack_00000048) {
      param_1 = param_1 - param_3;
      uVar1 = (uint64_t)(in_stack_00000048 >> 2);
      do {
        func_0x0001800212ec(param_1 + param_3,param_2,param_3,param_4,in_stack_00000050,param_5);
        param_3 = param_3 + 4;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  else {
    if (0xf < (int)in_stack_00000048) {
      uVar1 = (uint64_t)(in_stack_00000048 >> 4);
      in_stack_00000048 = in_stack_00000048 + (in_stack_00000048 >> 4) * -0x10;
      do {
        FUN_1806777a0(param_1,param_2,param_3,param_4,in_stack_00000050,param_5);
        param_1 = param_1 + 0x10;
        param_3 = param_3 + 0x10;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (7 < (int)in_stack_00000048) {
      uVar1 = (uint64_t)(in_stack_00000048 >> 3);
      in_stack_00000048 = in_stack_00000048 + (in_stack_00000048 >> 3) * -8;
      do {
        FUN_180676df0(param_1,param_2,param_3,param_4,in_stack_00000050,param_5);
        param_1 = param_1 + 8;
        param_3 = param_3 + 8;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (3 < (int)in_stack_00000048) {
      uVar1 = (uint64_t)(in_stack_00000048 >> 2);
      do {
        FUN_180676d10(param_1,param_2,param_3,param_4,in_stack_00000050,param_5);
        param_1 = param_1 + 4;
        param_3 = param_3 + 4;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  return;
}





// 函数: void FUN_180677530(int64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
void FUN_180677530(int64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,short *param_7,uint64_t param_8,
                  uint param_9,int32_t param_10)

{
  uint64_t uVar1;
  int64_t lVar2;
  
  if (((*param_7 == 0) && (param_7[1] == 0)) && (param_7[2] == 0)) {
    if (0xf < (int)param_9) {
      uVar1 = (uint64_t)(param_9 >> 4);
      param_9 = param_9 + (param_9 >> 4) * -0x10;
      do {
        func_0x000180021022(param_1,param_2,param_3,param_4,param_10,param_7);
        param_1 = param_1 + 0x10;
        param_3 = param_3 + 0x10;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (7 < (int)param_9) {
      uVar1 = (uint64_t)(param_9 >> 3);
      param_9 = param_9 + (param_9 >> 3) * -8;
      do {
        func_0x000180020f78(param_1,param_2,param_3,param_4,param_10,param_7);
        param_1 = param_1 + 8;
        param_3 = param_3 + 8;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (3 < (int)param_9) {
      param_1 = param_1 - param_3;
      uVar1 = (uint64_t)(param_9 >> 2);
      do {
        func_0x000180020ef0(param_1 + param_3,param_2,param_3,param_4,param_10,param_7);
        param_3 = param_3 + 4;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  else {
    if (0xf < (int)param_9) {
      uVar1 = (uint64_t)(param_9 >> 4);
      lVar2 = param_1 + param_2 * -3;
      param_9 = param_9 + (param_9 >> 4) * -0x10;
      param_1 = param_1 + uVar1 * 0x10;
      do {
        FUN_180677ae0(lVar2,param_2,param_3,param_4,param_10,param_7);
        lVar2 = lVar2 + 0x10;
        param_3 = param_3 + 0x10;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (7 < (int)param_9) {
      uVar1 = (uint64_t)(param_9 >> 3);
      lVar2 = param_1 + param_2 * -3;
      param_1 = param_1 + uVar1 * 8;
      param_9 = param_9 + (param_9 >> 3) * -8;
      do {
        FUN_180676f40(lVar2,param_2,param_3,param_4,param_10,param_7);
        lVar2 = lVar2 + 8;
        param_3 = param_3 + 8;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (3 < (int)param_9) {
      param_1 = param_1 + param_2 * -3;
      uVar1 = (uint64_t)(param_9 >> 2);
      do {
        func_0x0001800209d0(param_1,param_2,param_3,param_4,param_10,param_7);
        param_1 = param_1 + 4;
        param_3 = param_3 + 4;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806777a0(int64_t param_1,int64_t param_2,int8_t (*param_3) [16],int64_t param_4,
void FUN_1806777a0(int64_t param_1,int64_t param_2,int8_t (*param_3) [16],int64_t param_4,
                  uint param_5,int8_t (*param_6) [16])

{
  int8_t auVar1 [16];
  int8_t auVar2 [16];
  int8_t auVar3 [16];
  int8_t auVar4 [16];
  int8_t auVar5 [32];
  int8_t auVar6 [32];
  int8_t auVar7 [32];
  int8_t auVar8 [32];
  int8_t auVar9 [32];
  int8_t auVar10 [32];
  int8_t auVar11 [32];
  int8_t auVar12 [32];
  int8_t auVar13 [32];
  int8_t auVar14 [32];
  uint64_t uVar15;
  int8_t auVar16 [32];
  int8_t auVar17 [32];
  int8_t auVar18 [16];
  int8_t auVar19 [32];
  int8_t auVar20 [32];
  int8_t auVar21 [16];
  int8_t auVar22 [32];
  int8_t auStack_1e0 [16];
  int8_t auStack_1c0 [16];
  int8_t auStack_1a0 [16];
  int8_t auStack_180 [16];
  int8_t auStack_140 [16];
  int8_t auStack_120 [16];
  int8_t auStack_100 [16];
  int8_t auStack_e0 [16];
  
  auVar14 = ui_system_config;
  auVar13 = ui_system_config;
  auVar12 = ui_system_config;
  auVar11 = ui_system_config;
  auVar18 = vpacksswb_avx(*param_6,*param_6);
  auVar16._16_16_ = auVar18;
  auVar16._0_16_ = auVar18;
  auVar6 = vpshufb_avx2(auVar16,ui_system_config);
  auVar7 = vpshufb_avx2(auVar16,ui_system_config);
  auVar8 = vpshufb_avx2(auVar16,ui_system_config);
  auVar16 = vpshufb_avx2(auVar16,ui_system_config);
  if (1 < param_5) {
    uVar15 = (uint64_t)((param_5 - 2 >> 1) + 1);
    do {
      auVar18 = *(int8_t (*) [16])(param_2 + -3 + param_1);
      auVar20._0_16_ = ZEXT116(0) * auVar18 + ZEXT116(1) * *(int8_t (*) [16])(param_1 + -3);
      auVar20._16_16_ = ZEXT116(1) * auVar18;
      auVar17 = vpshufb_avx2(auVar20,auVar13);
      auVar17 = vpmaddubsw_avx2(auVar17,auVar8);
      auVar18 = *(int8_t (*) [16])(param_2 + 5 + param_1);
      auVar22._0_16_ = ZEXT116(0) * auVar18 + ZEXT116(1) * *(int8_t (*) [16])(param_1 + 5);
      auVar22._16_16_ = ZEXT116(1) * auVar18;
      auVar19._8_8_ = 0xe0d0d0c0c0b0b0a;
      auVar19._0_8_ = 0xa09090808070706;
      auVar19._16_8_ = 0xa09090808070706;
      auVar19._24_8_ = 0xe0d0d0c0c0b0b0a;
      auVar19 = vpshufb_avx2(auVar20,auVar19);
      auVar19 = vpmaddubsw_avx2(auVar19,auVar16);
      auVar9 = vpshufb_avx2(auVar20,auVar12);
      auVar9 = vpmaddubsw_avx2(auVar9,auVar7);
      auVar5 = vpmaxsw_avx2(auVar9,auVar17);
      auVar9 = vpminsw_avx2(auVar9,auVar17);
      auVar17 = vpshufb_avx2(auVar20,auVar11);
      auVar17 = vpmaddubsw_avx2(auVar17,auVar6);
      auVar17 = vpaddsw_avx2(auVar19,auVar17);
      auVar17 = vpaddsw_avx2(auVar17,auVar9);
      auVar17 = vpaddsw_avx2(auVar17,auVar5);
      auVar19 = vpshufb_avx2(auVar22,auVar12);
      auVar19 = vpmaddubsw_avx2(auVar19,auVar7);
      auVar9 = vpshufb_avx2(auVar22,auVar13);
      auVar9 = vpmaddubsw_avx2(auVar9,auVar8);
      auVar5._8_8_ = 0xe0d0d0c0c0b0b0a;
      auVar5._0_8_ = 0xa09090808070706;
      auVar5._16_8_ = 0xa09090808070706;
      auVar5._24_8_ = 0xe0d0d0c0c0b0b0a;
      auVar10 = vpshufb_avx2(auVar22,auVar5);
      auVar20 = vpminsw_avx2(auVar19,auVar9);
      auVar5 = vpmaxsw_avx2(auVar19,auVar9);
      auVar19 = vpmaddubsw_avx2(auVar10,auVar16);
      auVar9 = vpshufb_avx2(auVar22,auVar11);
      auVar9 = vpmaddubsw_avx2(auVar9,auVar6);
      auVar19 = vpaddsw_avx2(auVar19,auVar9);
      auVar19 = vpaddsw_avx2(auVar19,auVar20);
      auVar19 = vpaddsw_avx2(auVar19,auVar5);
      auVar19 = vpaddsw_avx2(auVar19,auVar14);
      auVar17 = vpaddsw_avx2(auVar17,auVar14);
      auVar17 = vpsraw_avx2(auVar17,7);
      auVar19 = vpsraw_avx2(auVar19,7);
      auVar17 = vpackuswb_avx2(auVar17,auVar19);
      *param_3 = auVar17._0_16_;
      *(int8_t (*) [16])(*param_3 + param_4) = auVar17._16_16_;
      param_3 = (int8_t (*) [16])(*param_3 + param_4 * 2);
      param_1 = param_1 + param_2 * 2;
      param_5 = param_5 - 2;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  if (param_5 != 0) {
    auVar18 = *(int8_t (*) [16])(param_1 + -3);
    auStack_1e0 = auVar12._0_16_;
    auVar4 = vpshufb_avx(auVar18,auStack_1e0);
    auStack_1c0 = auVar7._0_16_;
    auVar1 = vpmaddubsw_avx(auVar4,auStack_1c0);
    auStack_1a0 = auVar13._0_16_;
    auVar4 = vpshufb_avx(auVar18,auStack_1a0);
    auStack_180 = auVar8._0_16_;
    auVar2 = vpmaddubsw_avx(auVar4,auStack_180);
    auStack_120 = auVar11._0_16_;
    auVar4 = vpshufb_avx(auVar18,auStack_120);
    auStack_100 = auVar6._0_16_;
    auVar4 = vpmaddubsw_avx(auVar4,auStack_100);
    auVar3._8_8_ = 0xe0d0d0c0c0b0b0a;
    auVar3._0_8_ = 0xa09090808070706;
    auVar18 = vpshufb_avx(auVar18,auVar3);
    auStack_140 = auVar16._0_16_;
    auVar3 = vpmaddubsw_avx(auVar18,auStack_140);
    auVar18 = *(int8_t (*) [16])(param_1 + 5);
    auVar4 = vpaddsw_avx(auVar4,auVar3);
    auVar3 = vpminsw_avx(auVar1,auVar2);
    auVar4 = vpaddsw_avx(auVar4,auVar3);
    auVar3 = vpshufb_avx(auVar18,auStack_1e0);
    auVar3 = vpmaddubsw_avx(auVar3,auStack_1c0);
    auVar1 = vpmaxsw_avx(auVar1,auVar2);
    auVar4 = vpaddsw_avx(auVar4,auVar1);
    auStack_e0 = auVar14._0_16_;
    auVar4 = vpaddsw_avx(auVar4,auStack_e0);
    auVar1 = vpshufb_avx(auVar18,auStack_1a0);
    auVar1 = vpmaddubsw_avx(auVar1,auStack_180);
    auVar2 = vpshufb_avx(auVar18,auStack_120);
    auVar2 = vpmaddubsw_avx(auVar2,auStack_100);
    auVar21 = vpsraw_avx(auVar4,7);
    auVar4._8_8_ = 0xe0d0d0c0c0b0b0a;
    auVar4._0_8_ = 0xa09090808070706;
    auVar18 = vpshufb_avx(auVar18,auVar4);
    auVar18 = vpmaddubsw_avx(auVar18,auStack_140);
    auVar18 = vpaddsw_avx(auVar2,auVar18);
    auVar4 = vpminsw_avx(auVar3,auVar1);
    auVar18 = vpaddsw_avx(auVar18,auVar4);
    auVar4 = vpmaxsw_avx(auVar3,auVar1);
    auVar18 = vpaddsw_avx(auVar18,auVar4);
    auVar18 = vpaddsw_avx(auVar18,auStack_e0);
    auVar18 = vpsraw_avx(auVar18,7);
    auVar18 = vpackuswb_avx(auVar21,auVar18);
    *param_3 = auVar18;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



