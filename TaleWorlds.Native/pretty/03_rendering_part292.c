#include "TaleWorlds.Native.Split.h"

// 03_rendering_part292.c - 5 个函数

// 函数: void FUN_180423c1c(int8_t (*param_1) [16],int64_t param_2,int param_3,int64_t param_4)
void FUN_180423c1c(int8_t (*param_1) [16],int64_t param_2,int param_3,int64_t param_4)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  int8_t auVar33 [14];
  int8_t auVar34 [12];
  unkbyte10 Var35;
  int8_t auVar36 [14];
  int8_t auVar37 [12];
  unkbyte9 Var38;
  int8_t auVar39 [14];
  int8_t auVar40 [12];
  int8_t auVar41 [14];
  int8_t auVar42 [12];
  uint8_t uVar43;
  int32_t uVar44;
  int16_t uVar45;
  int8_t auVar46 [16];
  int8_t auVar47 [16];
  uint uVar48;
  int64_t lVar49;
  int8_t (*pauVar50) [16];
  uint uVar51;
  byte *pbVar52;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int iVar53;
  int iVar54;
  uint uVar55;
  uint uVar56;
  int64_t in_R10;
  int8_t *puVar57;
  uint unaff_R15D;
  int8_t auVar58 [16];
  int8_t auVar59 [16];
  int8_t auVar60 [16];
  int8_t auVar61 [16];
  ushort uVar65;
  ushort uVar74;
  ushort uVar75;
  ushort uVar76;
  ushort uVar77;
  ushort uVar78;
  ushort uVar79;
  int8_t auVar66 [16];
  ushort uVar80;
  int8_t auVar73 [16];
  int8_t auVar81 [16];
  int8_t auVar87 [16];
  int16_t uVar88;
  int8_t auVar94 [16];
  int8_t auVar95 [16];
  int8_t auVar96 [16];
  int8_t auVar98 [16];
  int8_t auVar104 [16];
  int8_t auVar105 [16];
  int8_t in_XMM5 [16];
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  int8_t auVar62 [16];
  int8_t auVar63 [16];
  int8_t auVar64 [16];
  int8_t auVar67 [16];
  int8_t auVar68 [16];
  int8_t auVar69 [16];
  int8_t auVar70 [16];
  int8_t auVar71 [16];
  int8_t auVar72 [16];
  int8_t auVar82 [16];
  int8_t auVar83 [16];
  int8_t auVar84 [16];
  int8_t auVar85 [16];
  int8_t auVar86 [16];
  int32_t uVar89;
  uint8_t uVar90;
  uint64_t uVar91;
  int8_t auVar92 [12];
  int8_t auVar93 [14];
  int8_t auVar97 [16];
  int8_t auVar99 [16];
  int8_t auVar100 [16];
  int8_t auVar101 [16];
  int8_t auVar102 [16];
  int8_t auVar103 [16];
  
  do {
    pauVar50 = param_1;
    lVar49 = (int64_t)param_3;
    iVar53 = param_3 + 8;
    auVar58._8_8_ = 0;
    auVar58._0_8_ = *(uint64_t *)(lVar49 + param_4);
    auVar58 = auVar58 ^ in_XMM5;
    auVar86._0_14_ = ZEXT814(0);
    auVar86[0xe] = 0;
    auVar86[0xf] = auVar58[7];
    auVar85._14_2_ = auVar86._14_2_;
    auVar85._0_13_ = auVar86._0_13_;
    auVar85[0xd] = auVar58[6];
    auVar84._13_3_ = auVar85._13_3_;
    auVar84._0_12_ = auVar86._0_12_;
    auVar84[0xc] = 0;
    auVar83._12_4_ = auVar84._12_4_;
    auVar83._0_11_ = auVar86._0_11_;
    auVar83[0xb] = auVar58[5];
    auVar82._11_5_ = auVar83._11_5_;
    auVar82._0_10_ = auVar86._0_10_;
    auVar82[10] = 0;
    auVar81._10_6_ = auVar82._10_6_;
    auVar81._0_9_ = auVar86._0_9_;
    auVar81[9] = auVar58[4];
    auVar40._1_10_ = (unkuint10)CONCAT81((uint64_t)auVar81._9_7_ << 8,auVar58[3]) << 8;
    auVar40[0] = auVar58[2];
    auVar40[0xb] = 0;
    auVar39._1_12_ = auVar40 << 8;
    auVar39[0] = auVar58[1];
    auVar39[0xd] = 0;
    auVar46._1_14_ = auVar39 << 8;
    auVar46[0] = auVar58[0];
    auVar46[0xf] = 0;
    auVar59._8_8_ = 0;
    auVar59._0_8_ = *(uint64_t *)(lVar49 + unaff_RSI);
    auVar59 = auVar59 ^ in_XMM5;
    auVar94._4_4_ = unaff_XMM7_Db;
    auVar94._0_4_ = unaff_XMM7_Da;
    auVar94._8_4_ = unaff_XMM7_Dc;
    auVar94._12_4_ = unaff_XMM7_Dd;
    auVar94 = pmulhw(auVar46 << 8,auVar94);
    auVar103._0_14_ = ZEXT814(0);
    auVar103[0xe] = 0;
    auVar103[0xf] = auVar59[7];
    auVar102._14_2_ = auVar103._14_2_;
    auVar102._0_13_ = auVar103._0_13_;
    auVar102[0xd] = auVar59[6];
    auVar101._13_3_ = auVar102._13_3_;
    auVar101._0_12_ = auVar103._0_12_;
    auVar101[0xc] = 0;
    auVar100._12_4_ = auVar101._12_4_;
    auVar100._0_11_ = auVar103._0_11_;
    auVar100[0xb] = auVar59[5];
    auVar99._11_5_ = auVar100._11_5_;
    auVar99._0_10_ = auVar103._0_10_;
    auVar99[10] = 0;
    auVar98._10_6_ = auVar99._10_6_;
    auVar98._0_9_ = auVar103._0_9_;
    auVar98[9] = auVar59[4];
    auVar42._1_10_ = (unkuint10)CONCAT81((uint64_t)auVar98._9_7_ << 8,auVar59[3]) << 8;
    auVar42[0] = auVar59[2];
    auVar42[0xb] = 0;
    auVar41._1_12_ = auVar42 << 8;
    auVar41[0] = auVar59[1];
    auVar41[0xd] = 0;
    auVar47._1_14_ = auVar41 << 8;
    auVar47[0] = auVar59[0];
    auVar47[0xf] = 0;
    uVar91 = *(uint64_t *)(lVar49 + unaff_RBP);
    iVar54 = param_3 + 0xf;
    auVar72._0_14_ = in_XMM5._0_14_;
    auVar72[0xe] = in_XMM5[7];
    auVar72[0xf] = (char)((uint64_t)uVar91 >> 0x38);
    auVar71._14_2_ = auVar72._14_2_;
    auVar71._0_13_ = in_XMM5._0_13_;
    auVar71[0xd] = (char)((uint64_t)uVar91 >> 0x30);
    auVar70._13_3_ = auVar71._13_3_;
    auVar70._0_12_ = in_XMM5._0_12_;
    auVar70[0xc] = in_XMM5[6];
    auVar69._12_4_ = auVar70._12_4_;
    auVar69._0_11_ = in_XMM5._0_11_;
    auVar69[0xb] = (char)((uint64_t)uVar91 >> 0x28);
    auVar68._11_5_ = auVar69._11_5_;
    auVar68._0_10_ = in_XMM5._0_10_;
    auVar68[10] = in_XMM5[5];
    auVar67._10_6_ = auVar68._10_6_;
    auVar67._0_9_ = in_XMM5._0_9_;
    auVar67[9] = (char)((uint64_t)uVar91 >> 0x20);
    auVar66._9_7_ = auVar67._9_7_;
    auVar66._0_8_ = in_XMM5._0_8_;
    auVar66[8] = in_XMM5[4];
    Var35 = CONCAT91(CONCAT81(auVar66._8_8_,(char)((uint64_t)uVar91 >> 0x18)),in_XMM5[3]);
    auVar34._2_10_ = Var35;
    auVar34[1] = (char)((uint64_t)uVar91 >> 0x10);
    auVar34[0] = in_XMM5[2];
    auVar33._2_12_ = auVar34;
    auVar33[1] = (char)((uint64_t)uVar91 >> 8);
    auVar33[0] = in_XMM5[1];
    uVar65 = CONCAT11((char)uVar91,in_XMM5[0]) >> 4;
    uVar74 = auVar33._0_2_ >> 4;
    uVar75 = auVar34._0_2_ >> 4;
    uVar76 = (ushort)Var35 >> 4;
    uVar77 = auVar66._8_2_ >> 4;
    uVar78 = auVar68._10_2_ >> 4;
    uVar79 = auVar70._12_2_ >> 4;
    uVar80 = auVar71._14_2_ >> 4;
    auVar95._0_2_ = auVar94._0_2_ + uVar65;
    auVar95._2_2_ = auVar94._2_2_ + uVar74;
    auVar95._4_2_ = auVar94._4_2_ + uVar75;
    auVar95._6_2_ = auVar94._6_2_ + uVar76;
    auVar95._8_2_ = auVar94._8_2_ + uVar77;
    auVar95._10_2_ = auVar94._10_2_ + uVar78;
    auVar95._12_2_ = auVar94._12_2_ + uVar79;
    auVar95._14_2_ = auVar94._14_2_ + uVar80;
    auVar104._4_4_ = unaff_XMM10_Db;
    auVar104._0_4_ = unaff_XMM10_Da;
    auVar104._8_4_ = unaff_XMM10_Dc;
    auVar104._12_4_ = unaff_XMM10_Dd;
    auVar94 = pmulhw(auVar47 << 8,auVar104);
    auVar96._4_4_ = unaff_XMM9_Db;
    auVar96._0_4_ = unaff_XMM9_Da;
    auVar96._8_4_ = unaff_XMM9_Dc;
    auVar96._12_4_ = unaff_XMM9_Dd;
    auVar104 = pmulhw(auVar47 << 8,auVar96);
    auVar96 = psraw(auVar95,4);
    auVar87._4_4_ = unaff_XMM8_Db;
    auVar87._0_4_ = unaff_XMM8_Da;
    auVar87._8_4_ = unaff_XMM8_Dc;
    auVar87._12_4_ = unaff_XMM8_Dd;
    auVar87 = pmulhw(auVar46 << 8,auVar87);
    auVar60._0_2_ = auVar94._0_2_ + uVar65;
    auVar60._2_2_ = auVar94._2_2_ + uVar74;
    auVar60._4_2_ = auVar94._4_2_ + uVar75;
    auVar60._6_2_ = auVar94._6_2_ + uVar76;
    auVar60._8_2_ = auVar94._8_2_ + uVar77;
    auVar60._10_2_ = auVar94._10_2_ + uVar78;
    auVar60._12_2_ = auVar94._12_2_ + uVar79;
    auVar60._14_2_ = auVar94._14_2_ + uVar80;
    auVar94 = psraw(auVar60,4);
    sVar2 = auVar96._0_2_;
    sVar3 = auVar96._2_2_;
    sVar5 = auVar96._4_2_;
    sVar7 = auVar96._6_2_;
    sVar9 = auVar96._8_2_;
    sVar11 = auVar96._10_2_;
    sVar13 = auVar96._12_2_;
    sVar15 = auVar96._14_2_;
    cVar1 = (0 < sVar15) * (sVar15 < 0x100) * auVar96[0xe] - (0xff < sVar15);
    sVar17 = auVar94._0_2_;
    sVar19 = auVar94._2_2_;
    sVar21 = auVar94._4_2_;
    sVar23 = auVar94._6_2_;
    sVar25 = auVar94._8_2_;
    sVar27 = auVar94._10_2_;
    sVar29 = auVar94._12_2_;
    sVar31 = auVar94._14_2_;
    auVar105._0_2_ = auVar104._0_2_ + uVar65 + auVar87._0_2_;
    auVar105._2_2_ = auVar104._2_2_ + uVar74 + auVar87._2_2_;
    auVar105._4_2_ = auVar104._4_2_ + uVar75 + auVar87._4_2_;
    auVar105._6_2_ = auVar104._6_2_ + uVar76 + auVar87._6_2_;
    auVar105._8_2_ = auVar104._8_2_ + uVar77 + auVar87._8_2_;
    auVar105._10_2_ = auVar104._10_2_ + uVar78 + auVar87._10_2_;
    auVar105._12_2_ = auVar104._12_2_ + uVar79 + auVar87._12_2_;
    auVar105._14_2_ = auVar104._14_2_ + uVar80 + auVar87._14_2_;
    auVar87 = psraw(auVar105,4);
    sVar15 = auVar87._0_2_;
    sVar4 = auVar87._2_2_;
    sVar6 = auVar87._4_2_;
    sVar8 = auVar87._6_2_;
    sVar10 = auVar87._8_2_;
    sVar12 = auVar87._10_2_;
    sVar14 = auVar87._12_2_;
    sVar16 = auVar87._14_2_;
    sVar18 = (short)unaff_XMM11_Da;
    sVar20 = (short)((uint)unaff_XMM11_Da >> 0x10);
    sVar22 = (short)unaff_XMM11_Db;
    sVar24 = (short)((uint)unaff_XMM11_Db >> 0x10);
    sVar26 = (short)unaff_XMM11_Dc;
    sVar28 = (short)((uint)unaff_XMM11_Dc >> 0x10);
    sVar30 = (short)unaff_XMM11_Dd;
    sVar32 = (short)((uint)unaff_XMM11_Dd >> 0x10);
    uVar45 = CONCAT11((0 < sVar16) * (sVar16 < 0x100) * auVar87[0xe] - (0xff < sVar16),cVar1);
    uVar44 = CONCAT31(CONCAT21(uVar45,(0 < sVar14) * (sVar14 < 0x100) * auVar87[0xc] -
                                      (0xff < sVar14)),
                      (0 < sVar13) * (sVar13 < 0x100) * auVar96[0xc] - (0xff < sVar13));
    uVar43 = CONCAT51(CONCAT41(uVar44,(0 < sVar12) * (sVar12 < 0x100) * auVar87[10] -
                                      (0xff < sVar12)),
                      (0 < sVar11) * (sVar11 < 0x100) * auVar96[10] - (0xff < sVar11));
    Var38 = CONCAT72(CONCAT61(uVar43,(0 < sVar10) * (sVar10 < 0x100) * auVar87[8] - (0xff < sVar10))
                     ,CONCAT11((0 < sVar9) * (sVar9 < 0x100) * auVar96[8] - (0xff < sVar9),cVar1));
    Var35 = CONCAT91(CONCAT81((int64_t)((unkuint9)Var38 >> 8),
                              (0 < sVar8) * (sVar8 < 0x100) * auVar87[6] - (0xff < sVar8)),
                     (0 < sVar7) * (sVar7 < 0x100) * auVar96[6] - (0xff < sVar7));
    auVar37._2_10_ = Var35;
    auVar37[1] = (0 < sVar6) * (sVar6 < 0x100) * auVar87[4] - (0xff < sVar6);
    auVar37[0] = (0 < sVar5) * (sVar5 < 0x100) * auVar96[4] - (0xff < sVar5);
    auVar36._2_12_ = auVar37;
    auVar36[1] = (0 < sVar4) * (sVar4 < 0x100) * auVar87[2] - (0xff < sVar4);
    auVar36[0] = (0 < sVar3) * (sVar3 < 0x100) * auVar96[2] - (0xff < sVar3);
    auVar73._0_2_ =
         CONCAT11((0 < sVar15) * (sVar15 < 0x100) * auVar87[0] - (0xff < sVar15),
                  (0 < sVar2) * (sVar2 < 0x100) * auVar96[0] - (0xff < sVar2));
    auVar73._2_14_ = auVar36;
    uVar88 = CONCAT11((0 < sVar18) * (sVar18 < 0x100) * (char)unaff_XMM11_Da - (0xff < sVar18),
                      (0 < sVar17) * (sVar17 < 0x100) * auVar94[0] - (0xff < sVar17));
    uVar89 = CONCAT13((0 < sVar20) * (sVar20 < 0x100) * (char)((uint)unaff_XMM11_Da >> 0x10) -
                      (0xff < sVar20),
                      CONCAT12((0 < sVar19) * (sVar19 < 0x100) * auVar94[2] - (0xff < sVar19),uVar88
                              ));
    uVar90 = CONCAT15((0 < sVar22) * (sVar22 < 0x100) * (char)unaff_XMM11_Db - (0xff < sVar22),
                      CONCAT14((0 < sVar21) * (sVar21 < 0x100) * auVar94[4] - (0xff < sVar21),uVar89
                              ));
    uVar91 = CONCAT17((0 < sVar24) * (sVar24 < 0x100) * (char)((uint)unaff_XMM11_Db >> 0x10) -
                      (0xff < sVar24),
                      CONCAT16((0 < sVar23) * (sVar23 < 0x100) * auVar94[6] - (0xff < sVar23),uVar90
                              ));
    auVar92._0_10_ =
         CONCAT19((0 < sVar26) * (sVar26 < 0x100) * (char)unaff_XMM11_Dc - (0xff < sVar26),
                  CONCAT18((0 < sVar25) * (sVar25 < 0x100) * auVar94[8] - (0xff < sVar25),uVar91));
    auVar92[10] = (0 < sVar27) * (sVar27 < 0x100) * auVar94[10] - (0xff < sVar27);
    auVar92[0xb] = (0 < sVar28) * (sVar28 < 0x100) * (char)((uint)unaff_XMM11_Dc >> 0x10) -
                   (0xff < sVar28);
    auVar93[0xc] = (0 < sVar29) * (sVar29 < 0x100) * auVar94[0xc] - (0xff < sVar29);
    auVar93._0_12_ = auVar92;
    auVar93[0xd] = (0 < sVar30) * (sVar30 < 0x100) * (char)unaff_XMM11_Dd - (0xff < sVar30);
    auVar97[0xe] = (0 < sVar31) * (sVar31 < 0x100) * auVar94[0xe] - (0xff < sVar31);
    auVar97._0_14_ = auVar93;
    auVar97[0xf] = (0 < sVar32) * (sVar32 < 0x100) * (char)((uint)unaff_XMM11_Dd >> 0x10) -
                   (0xff < sVar32);
    auVar64._0_12_ = auVar73._0_12_;
    auVar64._12_2_ = (short)Var35;
    auVar64._14_2_ = (short)((uint64_t)uVar91 >> 0x30);
    auVar63._12_4_ = auVar64._12_4_;
    auVar63._0_10_ = auVar73._0_10_;
    auVar63._10_2_ = (short)((uint6)uVar90 >> 0x20);
    auVar62._10_6_ = auVar63._10_6_;
    auVar62._0_8_ = auVar73._0_8_;
    auVar62._8_2_ = auVar37._0_2_;
    auVar61._8_8_ = auVar62._8_8_;
    auVar61._6_2_ = (short)((uint)uVar89 >> 0x10);
    auVar61._4_2_ = auVar36._0_2_;
    auVar61._2_2_ = uVar88;
    auVar61._0_2_ = auVar73._0_2_;
    *pauVar50 = auVar61;
    *(short *)pauVar50[1] = (short)((unkuint9)Var38 >> 8);
    *(short *)(pauVar50[1] + 2) = (short)((unkuint10)auVar92._0_10_ >> 0x40);
    *(short *)(pauVar50[1] + 4) = (short)uVar43;
    *(short *)(pauVar50[1] + 6) = auVar92._10_2_;
    *(short *)(pauVar50[1] + 8) = (short)uVar44;
    *(short *)(pauVar50[1] + 10) = auVar93._12_2_;
    *(int16_t *)(pauVar50[1] + 0xc) = uVar45;
    *(short *)(pauVar50[1] + 0xe) = auVar97._14_2_;
    param_1 = pauVar50 + 2;
    param_3 = iVar53;
  } while (iVar54 < (int)param_2);
  lVar49 = (int64_t)iVar53;
  if (lVar49 < param_2) {
    puVar57 = pauVar50[2] + 2;
    pbVar52 = (byte *)(lVar49 + param_4);
    param_2 = param_2 - lVar49;
    do {
      iVar54 = (uint)pbVar52[unaff_RBP - param_4] * 0x100000 + 0x80000;
      uVar55 = (int)((*pbVar52 - 0x80) * 0x166f00 + iVar54) >> 0x14;
      uVar51 = (int)((0x80 - (uint)*pbVar52) * 0xb6d00 +
                    iVar54 + ((0x80 - (uint)pbVar52[unaff_RSI - param_4]) * 0x58200 & 0xffff0000))
               >> 0x14;
      uVar48 = (int)((pbVar52[unaff_RSI - param_4] - 0x80) * 0x1c5a00 + iVar54) >> 0x14;
      uVar56 = uVar55;
      if ((0xff < uVar55) && (uVar56 = 0xff, (int)uVar55 < 0)) {
        uVar56 = unaff_R15D;
      }
      uVar55 = uVar51;
      if ((0xff < uVar51) && (uVar55 = 0xff, (int)uVar51 < 0)) {
        uVar55 = unaff_R15D;
      }
      uVar51 = uVar48;
      if ((0xff < uVar48) && (uVar51 = 0xff, (int)uVar48 < 0)) {
        uVar51 = unaff_R15D;
      }
      puVar57[-2] = (char)uVar56;
      pbVar52 = pbVar52 + 1;
      puVar57[-1] = (char)uVar55;
      *puVar57 = (char)uVar51;
      puVar57[1] = 0xff;
      puVar57 = puVar57 + in_R10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}





// 函数: void FUN_180423ce5(int64_t param_1,int64_t param_2,int param_3,int64_t param_4)
void FUN_180423ce5(int64_t param_1,int64_t param_2,int param_3,int64_t param_4)

{
  uint uVar1;
  int64_t lVar2;
  uint uVar3;
  byte *pbVar4;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int64_t in_R10;
  int8_t *puVar8;
  uint unaff_R15D;
  
  lVar2 = (int64_t)param_3;
  if (lVar2 < param_2) {
    puVar8 = (int8_t *)(param_1 + 2);
    pbVar4 = (byte *)(lVar2 + param_4);
    param_2 = param_2 - lVar2;
    do {
      iVar5 = (uint)pbVar4[unaff_RBP - param_4] * 0x100000 + 0x80000;
      uVar6 = (int)((*pbVar4 - 0x80) * 0x166f00 + iVar5) >> 0x14;
      uVar3 = (int)((0x80 - (uint)*pbVar4) * 0xb6d00 +
                   iVar5 + ((0x80 - (uint)pbVar4[unaff_RSI - param_4]) * 0x58200 & 0xffff0000)) >>
              0x14;
      uVar1 = (int)((pbVar4[unaff_RSI - param_4] - 0x80) * 0x1c5a00 + iVar5) >> 0x14;
      uVar7 = uVar6;
      if ((0xff < uVar6) && (uVar7 = 0xff, (int)uVar6 < 0)) {
        uVar7 = unaff_R15D;
      }
      uVar6 = uVar3;
      if ((0xff < uVar3) && (uVar6 = 0xff, (int)uVar3 < 0)) {
        uVar6 = unaff_R15D;
      }
      uVar3 = uVar1;
      if ((0xff < uVar1) && (uVar3 = 0xff, (int)uVar1 < 0)) {
        uVar3 = unaff_R15D;
      }
      puVar8[-2] = (char)uVar7;
      pbVar4 = pbVar4 + 1;
      puVar8[-1] = (char)uVar6;
      *puVar8 = (char)uVar3;
      puVar8[1] = 0xff;
      puVar8 = puVar8 + in_R10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}





// 函数: void FUN_180423d01(int64_t param_1,int64_t param_2,int param_3,int64_t param_4)
void FUN_180423d01(int64_t param_1,int64_t param_2,int param_3,int64_t param_4)

{
  uint uVar1;
  int64_t lVar2;
  uint uVar3;
  byte *pbVar4;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int64_t in_R10;
  int8_t *puVar8;
  uint unaff_R15D;
  
  lVar2 = (int64_t)param_3;
  if (lVar2 < param_2) {
    puVar8 = (int8_t *)(param_1 + 2);
    pbVar4 = (byte *)(lVar2 + param_4);
    param_2 = param_2 - lVar2;
    do {
      iVar5 = (uint)pbVar4[unaff_RBP - param_4] * 0x100000 + 0x80000;
      uVar6 = (int)((*pbVar4 - 0x80) * 0x166f00 + iVar5) >> 0x14;
      uVar3 = (int)((0x80 - (uint)*pbVar4) * 0xb6d00 +
                   iVar5 + ((0x80 - (uint)pbVar4[unaff_RSI - param_4]) * 0x58200 & 0xffff0000)) >>
              0x14;
      uVar1 = (int)((pbVar4[unaff_RSI - param_4] - 0x80) * 0x1c5a00 + iVar5) >> 0x14;
      uVar7 = uVar6;
      if ((0xff < uVar6) && (uVar7 = 0xff, (int)uVar6 < 0)) {
        uVar7 = unaff_R15D;
      }
      uVar6 = uVar3;
      if ((0xff < uVar3) && (uVar6 = 0xff, (int)uVar3 < 0)) {
        uVar6 = unaff_R15D;
      }
      uVar3 = uVar1;
      if ((0xff < uVar1) && (uVar3 = 0xff, (int)uVar1 < 0)) {
        uVar3 = unaff_R15D;
      }
      puVar8[-2] = (char)uVar7;
      pbVar4 = pbVar4 + 1;
      puVar8[-1] = (char)uVar6;
      *puVar8 = (char)uVar3;
      puVar8[1] = 0xff;
      puVar8 = puVar8 + in_R10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}





// 函数: void FUN_180423d10(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
void FUN_180423d10(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  uint uVar1;
  int64_t in_RAX;
  uint uVar2;
  byte *pbVar3;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int64_t in_R10;
  int8_t *puVar8;
  uint unaff_R15D;
  
  puVar8 = (int8_t *)(param_1 + 2);
  pbVar3 = (byte *)(in_RAX + param_4);
  lVar4 = unaff_RDI - in_RAX;
  do {
    iVar5 = (uint)pbVar3[unaff_RBP - param_4] * 0x100000 + 0x80000;
    uVar6 = (int)((*pbVar3 - 0x80) * 0x166f00 + iVar5) >> 0x14;
    uVar2 = (int)((0x80 - (uint)*pbVar3) * 0xb6d00 +
                 iVar5 + ((0x80 - (uint)pbVar3[unaff_RSI - param_4]) * 0x58200 & 0xffff0000)) >>
            0x14;
    uVar1 = (int)((pbVar3[unaff_RSI - param_4] - 0x80) * 0x1c5a00 + iVar5) >> 0x14;
    uVar7 = uVar6;
    if ((0xff < uVar6) && (uVar7 = 0xff, (int)uVar6 < 0)) {
      uVar7 = unaff_R15D;
    }
    uVar6 = uVar2;
    if ((0xff < uVar2) && (uVar6 = 0xff, (int)uVar2 < 0)) {
      uVar6 = unaff_R15D;
    }
    uVar2 = uVar1;
    if ((0xff < uVar1) && (uVar2 = 0xff, (int)uVar1 < 0)) {
      uVar2 = unaff_R15D;
    }
    puVar8[-2] = (char)uVar7;
    pbVar3 = pbVar3 + 1;
    puVar8[-1] = (char)uVar6;
    *puVar8 = (char)uVar2;
    puVar8[1] = 0xff;
    puVar8 = puVar8 + in_R10;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}





// 函数: void FUN_180423e14(void)
void FUN_180423e14(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x000180423e6a)

code * FUN_180423e30(int64_t param_1)

{
  uint *puVar1;
  code *pcVar2;
  
  *(code **)(param_1 + 0x4870) = FUN_180420680;
  *(code **)(param_1 + 0x4878) = FUN_180423a60;
  *(code **)(param_1 + 0x4880) = FUN_180423760;
  puVar1 = (uint *)cpuid_Version_info(1);
  pcVar2 = (code *)(uint64_t)*puVar1;
  if ((puVar1[2] >> 0x1a & 1) != 0) {
    *(code **)(param_1 + 0x4870) = FUN_180420ca0;
    *(code **)(param_1 + 0x4878) = FUN_180423b90;
    pcVar2 = FUN_180423820;
    *(code **)(param_1 + 0x4880) = FUN_180423820;
  }
  return pcVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



