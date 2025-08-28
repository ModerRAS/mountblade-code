#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part291.c - 2 个函数

// 函数: void FUN_180423b90(int8_t (*param_1) [16],longlong param_2,longlong param_3,longlong param_4,
void FUN_180423b90(int8_t (*param_1) [16],longlong param_2,longlong param_3,longlong param_4,
                  int param_5,int param_6)

{
  int iVar1;
  char cVar2;
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
  int8_t auVar26 [14];
  int8_t auVar27 [12];
  unkbyte10 Var28;
  int8_t auVar29 [14];
  int8_t auVar30 [12];
  unkbyte9 Var31;
  int8_t auVar32 [14];
  int8_t auVar33 [12];
  int8_t auVar34 [14];
  int8_t auVar35 [12];
  uint8_t uVar36;
  int32_t uVar37;
  int16_t uVar38;
  int8_t auVar39 [16];
  int8_t auVar40 [16];
  int8_t auVar41 [16];
  int8_t auVar42 [16];
  int8_t auVar43 [16];
  uint uVar44;
  longlong lVar45;
  uint uVar46;
  byte *pbVar47;
  int iVar48;
  int iVar49;
  uint uVar50;
  int8_t *puVar51;
  bool bVar52;
  int8_t auVar53 [16];
  int8_t auVar54 [16];
  int8_t auVar55 [16];
  int8_t auVar56 [16];
  int8_t auVar57 [16];
  ushort uVar60;
  ushort uVar69;
  ushort uVar70;
  ushort uVar71;
  ushort uVar72;
  ushort uVar73;
  ushort uVar74;
  int8_t auVar61 [16];
  ushort uVar75;
  int8_t auVar68 [16];
  int8_t auVar76 [16];
  int8_t auVar82 [16];
  int16_t uVar83;
  int8_t auVar89 [16];
  int8_t auVar91 [16];
  int8_t auVar97 [16];
  int8_t auVar98 [16];
  int8_t auVar58 [16];
  int8_t auVar59 [16];
  int8_t auVar62 [16];
  int8_t auVar63 [16];
  int8_t auVar64 [16];
  int8_t auVar65 [16];
  int8_t auVar66 [16];
  int8_t auVar67 [16];
  int8_t auVar77 [16];
  int8_t auVar78 [16];
  int8_t auVar79 [16];
  int8_t auVar80 [16];
  int8_t auVar81 [16];
  int32_t uVar84;
  uint8_t uVar85;
  uint64_t uVar86;
  int8_t auVar87 [12];
  int8_t auVar88 [14];
  int8_t auVar90 [16];
  int8_t auVar92 [16];
  int8_t auVar93 [16];
  int8_t auVar94 [16];
  int8_t auVar95 [16];
  int8_t auVar96 [16];
  
  auVar43 = _DAT_180a40710;
  auVar42 = _DAT_180a406f0;
  auVar41 = _DAT_180a40580;
  auVar40 = _DAT_180a3f990;
  auVar39 = _DAT_180a3f980;
  iVar49 = 0;
  if ((param_6 == 4) && (iVar48 = iVar49, 7 < param_5)) {
    do {
      lVar45 = (longlong)iVar48;
      iVar49 = iVar48 + 8;
      auVar53._8_8_ = 0;
      auVar53._0_8_ = *(ulonglong *)(lVar45 + param_4);
      auVar53 = auVar53 ^ auVar41;
      auVar81._0_14_ = ZEXT814(0);
      auVar81[0xe] = 0;
      auVar81[0xf] = auVar53[7];
      auVar80._14_2_ = auVar81._14_2_;
      auVar80._0_13_ = auVar81._0_13_;
      auVar80[0xd] = auVar53[6];
      auVar79._13_3_ = auVar80._13_3_;
      auVar79._0_12_ = auVar81._0_12_;
      auVar79[0xc] = 0;
      auVar78._12_4_ = auVar79._12_4_;
      auVar78._0_11_ = auVar81._0_11_;
      auVar78[0xb] = auVar53[5];
      auVar77._11_5_ = auVar78._11_5_;
      auVar77._0_10_ = auVar81._0_10_;
      auVar77[10] = 0;
      auVar76._10_6_ = auVar77._10_6_;
      auVar76._0_9_ = auVar81._0_9_;
      auVar76[9] = auVar53[4];
      auVar33._1_10_ = (unkuint10)CONCAT81((ulonglong)auVar76._9_7_ << 8,auVar53[3]) << 8;
      auVar33[0] = auVar53[2];
      auVar33[0xb] = 0;
      auVar32._1_12_ = auVar33 << 8;
      auVar32[0] = auVar53[1];
      auVar32[0xd] = 0;
      auVar56._1_14_ = auVar32 << 8;
      auVar56[0] = auVar53[0];
      auVar56[0xf] = 0;
      auVar54._8_8_ = 0;
      auVar54._0_8_ = *(ulonglong *)(lVar45 + param_3);
      auVar54 = auVar54 ^ auVar41;
      auVar53 = pmulhw(auVar56 << 8,auVar39);
      auVar96._0_14_ = ZEXT814(0);
      auVar96[0xe] = 0;
      auVar96[0xf] = auVar54[7];
      auVar95._14_2_ = auVar96._14_2_;
      auVar95._0_13_ = auVar96._0_13_;
      auVar95[0xd] = auVar54[6];
      auVar94._13_3_ = auVar95._13_3_;
      auVar94._0_12_ = auVar96._0_12_;
      auVar94[0xc] = 0;
      auVar93._12_4_ = auVar94._12_4_;
      auVar93._0_11_ = auVar96._0_11_;
      auVar93[0xb] = auVar54[5];
      auVar92._11_5_ = auVar93._11_5_;
      auVar92._0_10_ = auVar96._0_10_;
      auVar92[10] = 0;
      auVar91._10_6_ = auVar92._10_6_;
      auVar91._0_9_ = auVar96._0_9_;
      auVar91[9] = auVar54[4];
      auVar35._1_10_ = (unkuint10)CONCAT81((ulonglong)auVar91._9_7_ << 8,auVar54[3]) << 8;
      auVar35[0] = auVar54[2];
      auVar35[0xb] = 0;
      auVar34._1_12_ = auVar35 << 8;
      auVar34[0] = auVar54[1];
      auVar34[0xd] = 0;
      auVar82._1_14_ = auVar34 << 8;
      auVar82[0] = auVar54[0];
      auVar82[0xf] = 0;
      uVar86 = *(uint64_t *)(lVar45 + param_2);
      iVar1 = iVar48 + 0xf;
      auVar67._0_14_ = auVar41._0_14_;
      auVar67[0xe] = auVar41[7];
      auVar67[0xf] = (char)((ulonglong)uVar86 >> 0x38);
      auVar66._14_2_ = auVar67._14_2_;
      auVar66._0_13_ = auVar41._0_13_;
      auVar66[0xd] = (char)((ulonglong)uVar86 >> 0x30);
      auVar65._13_3_ = auVar66._13_3_;
      auVar65._0_12_ = auVar41._0_12_;
      auVar65[0xc] = auVar41[6];
      auVar64._12_4_ = auVar65._12_4_;
      auVar64._0_11_ = auVar41._0_11_;
      auVar64[0xb] = (char)((ulonglong)uVar86 >> 0x28);
      auVar63._11_5_ = auVar64._11_5_;
      auVar63._0_10_ = auVar41._0_10_;
      auVar63[10] = auVar41[5];
      auVar62._10_6_ = auVar63._10_6_;
      auVar62._0_9_ = auVar41._0_9_;
      auVar62[9] = (char)((ulonglong)uVar86 >> 0x20);
      auVar61._9_7_ = auVar62._9_7_;
      auVar61._0_8_ = auVar41._0_8_;
      auVar61[8] = auVar41[4];
      Var28 = CONCAT91(CONCAT81(auVar61._8_8_,(char)((ulonglong)uVar86 >> 0x18)),auVar41[3]);
      auVar27._2_10_ = Var28;
      auVar27[1] = (char)((ulonglong)uVar86 >> 0x10);
      auVar27[0] = auVar41[2];
      auVar26._2_12_ = auVar27;
      auVar26[1] = (char)((ulonglong)uVar86 >> 8);
      auVar26[0] = auVar41[1];
      uVar60 = CONCAT11((char)uVar86,auVar41[0]) >> 4;
      uVar69 = auVar26._0_2_ >> 4;
      uVar70 = auVar27._0_2_ >> 4;
      uVar71 = (ushort)Var28 >> 4;
      uVar72 = auVar61._8_2_ >> 4;
      uVar73 = auVar63._10_2_ >> 4;
      uVar74 = auVar65._12_2_ >> 4;
      uVar75 = auVar66._14_2_ >> 4;
      auVar89._0_2_ = auVar53._0_2_ + uVar60;
      auVar89._2_2_ = auVar53._2_2_ + uVar69;
      auVar89._4_2_ = auVar53._4_2_ + uVar70;
      auVar89._6_2_ = auVar53._6_2_ + uVar71;
      auVar89._8_2_ = auVar53._8_2_ + uVar72;
      auVar89._10_2_ = auVar53._10_2_ + uVar73;
      auVar89._12_2_ = auVar53._12_2_ + uVar74;
      auVar89._14_2_ = auVar53._14_2_ + uVar75;
      auVar53 = pmulhw(auVar82 << 8,auVar40);
      auVar97 = pmulhw(auVar82 << 8,auVar43);
      auVar54 = psraw(auVar89,4);
      auVar82 = pmulhw(auVar56 << 8,auVar42);
      auVar55._0_2_ = auVar53._0_2_ + uVar60;
      auVar55._2_2_ = auVar53._2_2_ + uVar69;
      auVar55._4_2_ = auVar53._4_2_ + uVar70;
      auVar55._6_2_ = auVar53._6_2_ + uVar71;
      auVar55._8_2_ = auVar53._8_2_ + uVar72;
      auVar55._10_2_ = auVar53._10_2_ + uVar73;
      auVar55._12_2_ = auVar53._12_2_ + uVar74;
      auVar55._14_2_ = auVar53._14_2_ + uVar75;
      auVar56 = psraw(auVar55,4);
      sVar3 = auVar54._0_2_;
      sVar4 = auVar54._2_2_;
      sVar6 = auVar54._4_2_;
      sVar8 = auVar54._6_2_;
      sVar10 = auVar54._8_2_;
      sVar12 = auVar54._10_2_;
      sVar14 = auVar54._12_2_;
      sVar16 = auVar54._14_2_;
      cVar2 = (0 < sVar16) * (sVar16 < 0x100) * auVar54[0xe] - (0xff < sVar16);
      sVar18 = auVar56._0_2_;
      sVar19 = auVar56._2_2_;
      sVar20 = auVar56._4_2_;
      sVar21 = auVar56._6_2_;
      sVar22 = auVar56._8_2_;
      sVar23 = auVar56._10_2_;
      sVar24 = auVar56._12_2_;
      sVar25 = auVar56._14_2_;
      auVar98._0_2_ = auVar97._0_2_ + uVar60 + auVar82._0_2_;
      auVar98._2_2_ = auVar97._2_2_ + uVar69 + auVar82._2_2_;
      auVar98._4_2_ = auVar97._4_2_ + uVar70 + auVar82._4_2_;
      auVar98._6_2_ = auVar97._6_2_ + uVar71 + auVar82._6_2_;
      auVar98._8_2_ = auVar97._8_2_ + uVar72 + auVar82._8_2_;
      auVar98._10_2_ = auVar97._10_2_ + uVar73 + auVar82._10_2_;
      auVar98._12_2_ = auVar97._12_2_ + uVar74 + auVar82._12_2_;
      auVar98._14_2_ = auVar97._14_2_ + uVar75 + auVar82._14_2_;
      auVar82 = psraw(auVar98,4);
      sVar16 = auVar82._0_2_;
      sVar5 = auVar82._2_2_;
      sVar7 = auVar82._4_2_;
      sVar9 = auVar82._6_2_;
      sVar11 = auVar82._8_2_;
      sVar13 = auVar82._10_2_;
      sVar15 = auVar82._12_2_;
      sVar17 = auVar82._14_2_;
      uVar38 = CONCAT11((0 < sVar17) * (sVar17 < 0x100) * auVar82[0xe] - (0xff < sVar17),cVar2);
      uVar37 = CONCAT31(CONCAT21(uVar38,(0 < sVar15) * (sVar15 < 0x100) * auVar82[0xc] -
                                        (0xff < sVar15)),
                        (0 < sVar14) * (sVar14 < 0x100) * auVar54[0xc] - (0xff < sVar14));
      uVar36 = CONCAT51(CONCAT41(uVar37,(0 < sVar13) * (sVar13 < 0x100) * auVar82[10] -
                                        (0xff < sVar13)),
                        (0 < sVar12) * (sVar12 < 0x100) * auVar54[10] - (0xff < sVar12));
      Var31 = CONCAT72(CONCAT61(uVar36,(0 < sVar11) * (sVar11 < 0x100) * auVar82[8] -
                                       (0xff < sVar11)),
                       CONCAT11((0 < sVar10) * (sVar10 < 0x100) * auVar54[8] - (0xff < sVar10),cVar2
                               ));
      Var28 = CONCAT91(CONCAT81((longlong)((unkuint9)Var31 >> 8),
                                (0 < sVar9) * (sVar9 < 0x100) * auVar82[6] - (0xff < sVar9)),
                       (0 < sVar8) * (sVar8 < 0x100) * auVar54[6] - (0xff < sVar8));
      auVar30._2_10_ = Var28;
      auVar30[1] = (0 < sVar7) * (sVar7 < 0x100) * auVar82[4] - (0xff < sVar7);
      auVar30[0] = (0 < sVar6) * (sVar6 < 0x100) * auVar54[4] - (0xff < sVar6);
      auVar29._2_12_ = auVar30;
      auVar29[1] = (0 < sVar5) * (sVar5 < 0x100) * auVar82[2] - (0xff < sVar5);
      auVar29[0] = (0 < sVar4) * (sVar4 < 0x100) * auVar54[2] - (0xff < sVar4);
      auVar68._0_2_ =
           CONCAT11((0 < sVar16) * (sVar16 < 0x100) * auVar82[0] - (0xff < sVar16),
                    (0 < sVar3) * (sVar3 < 0x100) * auVar54[0] - (0xff < sVar3));
      auVar68._2_14_ = auVar29;
      uVar83 = CONCAT11(0xff,(0 < sVar18) * (sVar18 < 0x100) * auVar56[0] - (0xff < sVar18));
      uVar84 = CONCAT13(0xff,CONCAT12((0 < sVar19) * (sVar19 < 0x100) * auVar56[2] - (0xff < sVar19)
                                      ,uVar83));
      uVar85 = CONCAT15(0xff,CONCAT14((0 < sVar20) * (sVar20 < 0x100) * auVar56[4] - (0xff < sVar20)
                                      ,uVar84));
      uVar86 = CONCAT17(0xff,CONCAT16((0 < sVar21) * (sVar21 < 0x100) * auVar56[6] - (0xff < sVar21)
                                      ,uVar85));
      auVar87._0_10_ =
           CONCAT19(0xff,CONCAT18((0 < sVar22) * (sVar22 < 0x100) * auVar56[8] - (0xff < sVar22),
                                  uVar86));
      auVar87[10] = (0 < sVar23) * (sVar23 < 0x100) * auVar56[10] - (0xff < sVar23);
      auVar87[0xb] = 0xff;
      auVar88[0xc] = (0 < sVar24) * (sVar24 < 0x100) * auVar56[0xc] - (0xff < sVar24);
      auVar88._0_12_ = auVar87;
      auVar88[0xd] = 0xff;
      auVar90[0xe] = (0 < sVar25) * (sVar25 < 0x100) * auVar56[0xe] - (0xff < sVar25);
      auVar90._0_14_ = auVar88;
      auVar90[0xf] = 0xff;
      auVar59._0_12_ = auVar68._0_12_;
      auVar59._12_2_ = (short)Var28;
      auVar59._14_2_ = (short)((ulonglong)uVar86 >> 0x30);
      auVar58._12_4_ = auVar59._12_4_;
      auVar58._0_10_ = auVar68._0_10_;
      auVar58._10_2_ = (short)((uint6)uVar85 >> 0x20);
      auVar57._10_6_ = auVar58._10_6_;
      auVar57._0_8_ = auVar68._0_8_;
      auVar57._8_2_ = auVar30._0_2_;
      auVar97._8_8_ = auVar57._8_8_;
      auVar97._6_2_ = (short)((uint)uVar84 >> 0x10);
      auVar97._4_2_ = auVar29._0_2_;
      auVar97._2_2_ = uVar83;
      auVar97._0_2_ = auVar68._0_2_;
      *param_1 = auVar97;
      *(short *)param_1[1] = (short)((unkuint9)Var31 >> 8);
      *(short *)(param_1[1] + 2) = (short)((unkuint10)auVar87._0_10_ >> 0x40);
      *(short *)(param_1[1] + 4) = (short)uVar36;
      *(short *)(param_1[1] + 6) = auVar87._10_2_;
      *(short *)(param_1[1] + 8) = (short)uVar37;
      *(short *)(param_1[1] + 10) = auVar88._12_2_;
      *(int16_t *)(param_1[1] + 0xc) = uVar38;
      *(short *)(param_1[1] + 0xe) = auVar90._14_2_;
      param_1 = param_1 + 2;
      iVar48 = iVar49;
    } while (iVar1 < param_5);
  }
  lVar45 = (longlong)iVar49;
  if (lVar45 < param_5) {
    puVar51 = *param_1 + 2;
    pbVar47 = (byte *)(lVar45 + param_4);
    lVar45 = param_5 - lVar45;
    do {
      iVar49 = (uint)pbVar47[param_2 - param_4] * 0x100000 + 0x80000;
      uVar50 = (int)((*pbVar47 - 0x80) * 0x166f00 + iVar49) >> 0x14;
      uVar46 = (int)((0x80 - (uint)*pbVar47) * 0xb6d00 +
                    iVar49 + ((0x80 - (uint)pbVar47[param_3 - param_4]) * 0x58200 & 0xffff0000)) >>
               0x14;
      uVar44 = (int)((pbVar47[param_3 - param_4] - 0x80) * 0x1c5a00 + iVar49) >> 0x14;
      if ((0xff < uVar50) && (bVar52 = (int)uVar50 < 0, uVar50 = 0xff, bVar52)) {
        uVar50 = 0;
      }
      if ((0xff < uVar46) && (bVar52 = (int)uVar46 < 0, uVar46 = 0xff, bVar52)) {
        uVar46 = 0;
      }
      if ((0xff < uVar44) && (bVar52 = (int)uVar44 < 0, uVar44 = 0xff, bVar52)) {
        uVar44 = 0;
      }
      puVar51[-2] = (char)uVar50;
      pbVar47 = pbVar47 + 1;
      puVar51[-1] = (char)uVar46;
      *puVar51 = (char)uVar44;
      puVar51[1] = 0xff;
      puVar51 = puVar51 + param_6;
      lVar45 = lVar45 + -1;
    } while (lVar45 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180423bcb(int8_t (*param_1) [16],longlong param_2,int param_3,longlong param_4)
void FUN_180423bcb(int8_t (*param_1) [16],longlong param_2,int param_3,longlong param_4)

{
  int iVar1;
  char cVar2;
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
  int8_t auVar26 [14];
  int8_t auVar27 [12];
  unkbyte10 Var28;
  int8_t auVar29 [14];
  int8_t auVar30 [12];
  unkbyte9 Var31;
  int8_t auVar32 [14];
  int8_t auVar33 [12];
  int8_t auVar34 [14];
  int8_t auVar35 [12];
  uint8_t uVar36;
  int32_t uVar37;
  int16_t uVar38;
  int8_t auVar39 [16];
  int8_t auVar40 [16];
  int8_t auVar41 [16];
  int8_t auVar42 [16];
  uint uVar43;
  longlong lVar44;
  uint uVar45;
  byte *pbVar46;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int iVar47;
  uint uVar48;
  uint uVar49;
  longlong in_R10;
  int8_t *puVar50;
  uint unaff_R15D;
  int8_t auVar51 [16];
  int8_t auVar52 [16];
  int8_t auVar53 [16];
  int8_t auVar54 [16];
  int8_t auVar55 [16];
  ushort uVar58;
  ushort uVar67;
  ushort uVar68;
  ushort uVar69;
  ushort uVar70;
  ushort uVar71;
  ushort uVar72;
  int8_t auVar59 [16];
  ushort uVar73;
  int8_t auVar66 [16];
  int8_t auVar74 [16];
  int8_t auVar80 [16];
  int16_t uVar81;
  int8_t auVar87 [16];
  int8_t auVar89 [16];
  int8_t auVar95 [16];
  int8_t auVar96 [16];
  int8_t in_XMM5 [16];
  int8_t auVar56 [16];
  int8_t auVar57 [16];
  int8_t auVar60 [16];
  int8_t auVar61 [16];
  int8_t auVar62 [16];
  int8_t auVar63 [16];
  int8_t auVar64 [16];
  int8_t auVar65 [16];
  int8_t auVar75 [16];
  int8_t auVar76 [16];
  int8_t auVar77 [16];
  int8_t auVar78 [16];
  int8_t auVar79 [16];
  int32_t uVar82;
  uint8_t uVar83;
  uint64_t uVar84;
  int8_t auVar85 [12];
  int8_t auVar86 [14];
  int8_t auVar88 [16];
  int8_t auVar90 [16];
  int8_t auVar91 [16];
  int8_t auVar92 [16];
  int8_t auVar93 [16];
  int8_t auVar94 [16];
  
  auVar42 = _DAT_180a40710;
  auVar41 = _DAT_180a406f0;
  auVar40 = _DAT_180a3f990;
  auVar39 = _DAT_180a3f980;
  iVar47 = param_3;
  if (7 < (int)param_2) {
    do {
      lVar44 = (longlong)param_3;
      iVar47 = param_3 + 8;
      auVar51._8_8_ = 0;
      auVar51._0_8_ = *(ulonglong *)(lVar44 + param_4);
      auVar51 = auVar51 ^ in_XMM5;
      auVar79._0_14_ = ZEXT814(0);
      auVar79[0xe] = 0;
      auVar79[0xf] = auVar51[7];
      auVar78._14_2_ = auVar79._14_2_;
      auVar78._0_13_ = auVar79._0_13_;
      auVar78[0xd] = auVar51[6];
      auVar77._13_3_ = auVar78._13_3_;
      auVar77._0_12_ = auVar79._0_12_;
      auVar77[0xc] = 0;
      auVar76._12_4_ = auVar77._12_4_;
      auVar76._0_11_ = auVar79._0_11_;
      auVar76[0xb] = auVar51[5];
      auVar75._11_5_ = auVar76._11_5_;
      auVar75._0_10_ = auVar79._0_10_;
      auVar75[10] = 0;
      auVar74._10_6_ = auVar75._10_6_;
      auVar74._0_9_ = auVar79._0_9_;
      auVar74[9] = auVar51[4];
      auVar33._1_10_ = (unkuint10)CONCAT81((ulonglong)auVar74._9_7_ << 8,auVar51[3]) << 8;
      auVar33[0] = auVar51[2];
      auVar33[0xb] = 0;
      auVar32._1_12_ = auVar33 << 8;
      auVar32[0] = auVar51[1];
      auVar32[0xd] = 0;
      auVar54._1_14_ = auVar32 << 8;
      auVar54[0] = auVar51[0];
      auVar54[0xf] = 0;
      auVar52._8_8_ = 0;
      auVar52._0_8_ = *(ulonglong *)(lVar44 + unaff_RSI);
      auVar52 = auVar52 ^ in_XMM5;
      auVar51 = pmulhw(auVar54 << 8,auVar39);
      auVar94._0_14_ = ZEXT814(0);
      auVar94[0xe] = 0;
      auVar94[0xf] = auVar52[7];
      auVar93._14_2_ = auVar94._14_2_;
      auVar93._0_13_ = auVar94._0_13_;
      auVar93[0xd] = auVar52[6];
      auVar92._13_3_ = auVar93._13_3_;
      auVar92._0_12_ = auVar94._0_12_;
      auVar92[0xc] = 0;
      auVar91._12_4_ = auVar92._12_4_;
      auVar91._0_11_ = auVar94._0_11_;
      auVar91[0xb] = auVar52[5];
      auVar90._11_5_ = auVar91._11_5_;
      auVar90._0_10_ = auVar94._0_10_;
      auVar90[10] = 0;
      auVar89._10_6_ = auVar90._10_6_;
      auVar89._0_9_ = auVar94._0_9_;
      auVar89[9] = auVar52[4];
      auVar35._1_10_ = (unkuint10)CONCAT81((ulonglong)auVar89._9_7_ << 8,auVar52[3]) << 8;
      auVar35[0] = auVar52[2];
      auVar35[0xb] = 0;
      auVar34._1_12_ = auVar35 << 8;
      auVar34[0] = auVar52[1];
      auVar34[0xd] = 0;
      auVar80._1_14_ = auVar34 << 8;
      auVar80[0] = auVar52[0];
      auVar80[0xf] = 0;
      uVar84 = *(uint64_t *)(lVar44 + unaff_RBP);
      iVar1 = param_3 + 0xf;
      auVar65._0_14_ = in_XMM5._0_14_;
      auVar65[0xe] = in_XMM5[7];
      auVar65[0xf] = (char)((ulonglong)uVar84 >> 0x38);
      auVar64._14_2_ = auVar65._14_2_;
      auVar64._0_13_ = in_XMM5._0_13_;
      auVar64[0xd] = (char)((ulonglong)uVar84 >> 0x30);
      auVar63._13_3_ = auVar64._13_3_;
      auVar63._0_12_ = in_XMM5._0_12_;
      auVar63[0xc] = in_XMM5[6];
      auVar62._12_4_ = auVar63._12_4_;
      auVar62._0_11_ = in_XMM5._0_11_;
      auVar62[0xb] = (char)((ulonglong)uVar84 >> 0x28);
      auVar61._11_5_ = auVar62._11_5_;
      auVar61._0_10_ = in_XMM5._0_10_;
      auVar61[10] = in_XMM5[5];
      auVar60._10_6_ = auVar61._10_6_;
      auVar60._0_9_ = in_XMM5._0_9_;
      auVar60[9] = (char)((ulonglong)uVar84 >> 0x20);
      auVar59._9_7_ = auVar60._9_7_;
      auVar59._0_8_ = in_XMM5._0_8_;
      auVar59[8] = in_XMM5[4];
      Var28 = CONCAT91(CONCAT81(auVar59._8_8_,(char)((ulonglong)uVar84 >> 0x18)),in_XMM5[3]);
      auVar27._2_10_ = Var28;
      auVar27[1] = (char)((ulonglong)uVar84 >> 0x10);
      auVar27[0] = in_XMM5[2];
      auVar26._2_12_ = auVar27;
      auVar26[1] = (char)((ulonglong)uVar84 >> 8);
      auVar26[0] = in_XMM5[1];
      uVar58 = CONCAT11((char)uVar84,in_XMM5[0]) >> 4;
      uVar67 = auVar26._0_2_ >> 4;
      uVar68 = auVar27._0_2_ >> 4;
      uVar69 = (ushort)Var28 >> 4;
      uVar70 = auVar59._8_2_ >> 4;
      uVar71 = auVar61._10_2_ >> 4;
      uVar72 = auVar63._12_2_ >> 4;
      uVar73 = auVar64._14_2_ >> 4;
      auVar87._0_2_ = auVar51._0_2_ + uVar58;
      auVar87._2_2_ = auVar51._2_2_ + uVar67;
      auVar87._4_2_ = auVar51._4_2_ + uVar68;
      auVar87._6_2_ = auVar51._6_2_ + uVar69;
      auVar87._8_2_ = auVar51._8_2_ + uVar70;
      auVar87._10_2_ = auVar51._10_2_ + uVar71;
      auVar87._12_2_ = auVar51._12_2_ + uVar72;
      auVar87._14_2_ = auVar51._14_2_ + uVar73;
      auVar51 = pmulhw(auVar80 << 8,auVar40);
      auVar95 = pmulhw(auVar80 << 8,auVar42);
      auVar52 = psraw(auVar87,4);
      auVar80 = pmulhw(auVar54 << 8,auVar41);
      auVar53._0_2_ = auVar51._0_2_ + uVar58;
      auVar53._2_2_ = auVar51._2_2_ + uVar67;
      auVar53._4_2_ = auVar51._4_2_ + uVar68;
      auVar53._6_2_ = auVar51._6_2_ + uVar69;
      auVar53._8_2_ = auVar51._8_2_ + uVar70;
      auVar53._10_2_ = auVar51._10_2_ + uVar71;
      auVar53._12_2_ = auVar51._12_2_ + uVar72;
      auVar53._14_2_ = auVar51._14_2_ + uVar73;
      auVar54 = psraw(auVar53,4);
      sVar3 = auVar52._0_2_;
      sVar4 = auVar52._2_2_;
      sVar6 = auVar52._4_2_;
      sVar8 = auVar52._6_2_;
      sVar10 = auVar52._8_2_;
      sVar12 = auVar52._10_2_;
      sVar14 = auVar52._12_2_;
      sVar16 = auVar52._14_2_;
      cVar2 = (0 < sVar16) * (sVar16 < 0x100) * auVar52[0xe] - (0xff < sVar16);
      sVar18 = auVar54._0_2_;
      sVar19 = auVar54._2_2_;
      sVar20 = auVar54._4_2_;
      sVar21 = auVar54._6_2_;
      sVar22 = auVar54._8_2_;
      sVar23 = auVar54._10_2_;
      sVar24 = auVar54._12_2_;
      sVar25 = auVar54._14_2_;
      auVar96._0_2_ = auVar95._0_2_ + uVar58 + auVar80._0_2_;
      auVar96._2_2_ = auVar95._2_2_ + uVar67 + auVar80._2_2_;
      auVar96._4_2_ = auVar95._4_2_ + uVar68 + auVar80._4_2_;
      auVar96._6_2_ = auVar95._6_2_ + uVar69 + auVar80._6_2_;
      auVar96._8_2_ = auVar95._8_2_ + uVar70 + auVar80._8_2_;
      auVar96._10_2_ = auVar95._10_2_ + uVar71 + auVar80._10_2_;
      auVar96._12_2_ = auVar95._12_2_ + uVar72 + auVar80._12_2_;
      auVar96._14_2_ = auVar95._14_2_ + uVar73 + auVar80._14_2_;
      auVar80 = psraw(auVar96,4);
      sVar16 = auVar80._0_2_;
      sVar5 = auVar80._2_2_;
      sVar7 = auVar80._4_2_;
      sVar9 = auVar80._6_2_;
      sVar11 = auVar80._8_2_;
      sVar13 = auVar80._10_2_;
      sVar15 = auVar80._12_2_;
      sVar17 = auVar80._14_2_;
      uVar38 = CONCAT11((0 < sVar17) * (sVar17 < 0x100) * auVar80[0xe] - (0xff < sVar17),cVar2);
      uVar37 = CONCAT31(CONCAT21(uVar38,(0 < sVar15) * (sVar15 < 0x100) * auVar80[0xc] -
                                        (0xff < sVar15)),
                        (0 < sVar14) * (sVar14 < 0x100) * auVar52[0xc] - (0xff < sVar14));
      uVar36 = CONCAT51(CONCAT41(uVar37,(0 < sVar13) * (sVar13 < 0x100) * auVar80[10] -
                                        (0xff < sVar13)),
                        (0 < sVar12) * (sVar12 < 0x100) * auVar52[10] - (0xff < sVar12));
      Var31 = CONCAT72(CONCAT61(uVar36,(0 < sVar11) * (sVar11 < 0x100) * auVar80[8] -
                                       (0xff < sVar11)),
                       CONCAT11((0 < sVar10) * (sVar10 < 0x100) * auVar52[8] - (0xff < sVar10),cVar2
                               ));
      Var28 = CONCAT91(CONCAT81((longlong)((unkuint9)Var31 >> 8),
                                (0 < sVar9) * (sVar9 < 0x100) * auVar80[6] - (0xff < sVar9)),
                       (0 < sVar8) * (sVar8 < 0x100) * auVar52[6] - (0xff < sVar8));
      auVar30._2_10_ = Var28;
      auVar30[1] = (0 < sVar7) * (sVar7 < 0x100) * auVar80[4] - (0xff < sVar7);
      auVar30[0] = (0 < sVar6) * (sVar6 < 0x100) * auVar52[4] - (0xff < sVar6);
      auVar29._2_12_ = auVar30;
      auVar29[1] = (0 < sVar5) * (sVar5 < 0x100) * auVar80[2] - (0xff < sVar5);
      auVar29[0] = (0 < sVar4) * (sVar4 < 0x100) * auVar52[2] - (0xff < sVar4);
      auVar66._0_2_ =
           CONCAT11((0 < sVar16) * (sVar16 < 0x100) * auVar80[0] - (0xff < sVar16),
                    (0 < sVar3) * (sVar3 < 0x100) * auVar52[0] - (0xff < sVar3));
      auVar66._2_14_ = auVar29;
      uVar81 = CONCAT11(0xff,(0 < sVar18) * (sVar18 < 0x100) * auVar54[0] - (0xff < sVar18));
      uVar82 = CONCAT13(0xff,CONCAT12((0 < sVar19) * (sVar19 < 0x100) * auVar54[2] - (0xff < sVar19)
                                      ,uVar81));
      uVar83 = CONCAT15(0xff,CONCAT14((0 < sVar20) * (sVar20 < 0x100) * auVar54[4] - (0xff < sVar20)
                                      ,uVar82));
      uVar84 = CONCAT17(0xff,CONCAT16((0 < sVar21) * (sVar21 < 0x100) * auVar54[6] - (0xff < sVar21)
                                      ,uVar83));
      auVar85._0_10_ =
           CONCAT19(0xff,CONCAT18((0 < sVar22) * (sVar22 < 0x100) * auVar54[8] - (0xff < sVar22),
                                  uVar84));
      auVar85[10] = (0 < sVar23) * (sVar23 < 0x100) * auVar54[10] - (0xff < sVar23);
      auVar85[0xb] = 0xff;
      auVar86[0xc] = (0 < sVar24) * (sVar24 < 0x100) * auVar54[0xc] - (0xff < sVar24);
      auVar86._0_12_ = auVar85;
      auVar86[0xd] = 0xff;
      auVar88[0xe] = (0 < sVar25) * (sVar25 < 0x100) * auVar54[0xe] - (0xff < sVar25);
      auVar88._0_14_ = auVar86;
      auVar88[0xf] = 0xff;
      auVar57._0_12_ = auVar66._0_12_;
      auVar57._12_2_ = (short)Var28;
      auVar57._14_2_ = (short)((ulonglong)uVar84 >> 0x30);
      auVar56._12_4_ = auVar57._12_4_;
      auVar56._0_10_ = auVar66._0_10_;
      auVar56._10_2_ = (short)((uint6)uVar83 >> 0x20);
      auVar55._10_6_ = auVar56._10_6_;
      auVar55._0_8_ = auVar66._0_8_;
      auVar55._8_2_ = auVar30._0_2_;
      auVar95._8_8_ = auVar55._8_8_;
      auVar95._6_2_ = (short)((uint)uVar82 >> 0x10);
      auVar95._4_2_ = auVar29._0_2_;
      auVar95._2_2_ = uVar81;
      auVar95._0_2_ = auVar66._0_2_;
      *param_1 = auVar95;
      *(short *)param_1[1] = (short)((unkuint9)Var31 >> 8);
      *(short *)(param_1[1] + 2) = (short)((unkuint10)auVar85._0_10_ >> 0x40);
      *(short *)(param_1[1] + 4) = (short)uVar36;
      *(short *)(param_1[1] + 6) = auVar85._10_2_;
      *(short *)(param_1[1] + 8) = (short)uVar37;
      *(short *)(param_1[1] + 10) = auVar86._12_2_;
      *(int16_t *)(param_1[1] + 0xc) = uVar38;
      *(short *)(param_1[1] + 0xe) = auVar88._14_2_;
      param_1 = param_1 + 2;
      param_3 = iVar47;
    } while (iVar1 < (int)param_2);
  }
  lVar44 = (longlong)iVar47;
  if (lVar44 < param_2) {
    puVar50 = *param_1 + 2;
    pbVar46 = (byte *)(lVar44 + param_4);
    param_2 = param_2 - lVar44;
    do {
      iVar47 = (uint)pbVar46[unaff_RBP - param_4] * 0x100000 + 0x80000;
      uVar48 = (int)((*pbVar46 - 0x80) * 0x166f00 + iVar47) >> 0x14;
      uVar45 = (int)((0x80 - (uint)*pbVar46) * 0xb6d00 +
                    iVar47 + ((0x80 - (uint)pbVar46[unaff_RSI - param_4]) * 0x58200 & 0xffff0000))
               >> 0x14;
      uVar43 = (int)((pbVar46[unaff_RSI - param_4] - 0x80) * 0x1c5a00 + iVar47) >> 0x14;
      uVar49 = uVar48;
      if ((0xff < uVar48) && (uVar49 = 0xff, (int)uVar48 < 0)) {
        uVar49 = unaff_R15D;
      }
      uVar48 = uVar45;
      if ((0xff < uVar45) && (uVar48 = 0xff, (int)uVar45 < 0)) {
        uVar48 = unaff_R15D;
      }
      uVar45 = uVar43;
      if ((0xff < uVar43) && (uVar45 = 0xff, (int)uVar43 < 0)) {
        uVar45 = unaff_R15D;
      }
      puVar50[-2] = (char)uVar49;
      pbVar46 = pbVar46 + 1;
      puVar50[-1] = (char)uVar48;
      *puVar50 = (char)uVar45;
      puVar50[1] = 0xff;
      puVar50 = puVar50 + in_R10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}





