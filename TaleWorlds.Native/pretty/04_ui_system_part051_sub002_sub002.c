#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part051_sub002_sub002.c - 1 个函数

// 函数: void FUN_180691db0(int8_t (*param_1) [16],uint64_t *param_2,int param_3)
void FUN_180691db0(int8_t (*param_1) [16],uint64_t *param_2,int param_3)

{
  uint64_t uVar1;
  uint uVar2;
  int8_t auVar3 [12];
  int8_t auVar4 [12];
  int8_t auVar5 [12];
  int8_t auVar6 [12];
  int8_t auVar7 [14];
  int8_t auVar8 [12];
  unkbyte10 Var9;
  int8_t auVar10 [14];
  int8_t auVar11 [12];
  int8_t auVar12 [14];
  int8_t auVar13 [12];
  int8_t auVar14 [14];
  int8_t auVar15 [12];
  int8_t auVar16 [14];
  int8_t auVar17 [12];
  int8_t auVar18 [14];
  int8_t auVar19 [12];
  int8_t auVar20 [14];
  int8_t auVar21 [12];
  int8_t auVar22 [14];
  int8_t auVar23 [12];
  int8_t auVar24 [12];
  int8_t auVar25 [12];
  int8_t auVar26 [12];
  int64_t lVar27;
  int32_t uVar28;
  int32_t uVar88;
  int8_t auVar29 [16];
  int8_t auVar30 [16];
  int8_t auVar31 [16];
  int8_t auVar32 [16];
  int8_t auVar39 [16];
  int8_t auVar46 [16];
  int8_t auVar53 [16];
  int8_t auVar60 [16];
  int8_t auVar67 [16];
  int8_t auVar74 [16];
  int8_t auVar81 [16];
  int8_t auVar89 [16];
  int8_t auVar90 [16];
  int8_t auVar92 [16];
  int8_t auVar93 [16];
  int8_t auVar97 [16];
  int8_t auVar98 [16];
  int8_t auVar99 [16];
  int8_t auVar100 [16];
  int8_t auVar101 [16];
  int8_t auVar104 [16];
  int8_t auVar105 [16];
  int8_t auVar106 [16];
  int8_t auVar107 [16];
  int8_t auVar108 [16];
  int8_t auVar109 [16];
  int8_t auVar110 [16];
  int8_t auVar111 [16];
  int8_t auVar114 [16];
  int8_t auVar115 [16];
  int8_t auVar116 [16];
  int8_t auVar117 [16];
  int8_t auVar118 [16];
  int8_t auVar119 [16];
  int8_t auVar120 [16];
  int8_t auVar123 [16];
  int8_t auVar124 [16];
  int8_t auVar125 [16];
  short sVar126;
  short sVar129;
  short sVar130;
  short sVar131;
  short sVar132;
  short sVar133;
  short sVar134;
  int8_t auVar127 [16];
  int8_t auVar128 [16];
  short sVar135;
  int8_t auVar136 [16];
  int8_t auVar141 [16];
  int8_t auVar142 [16];
  int8_t auVar143 [16];
  int8_t auVar144 [16];
  int8_t auVar145 [16];
  int8_t auVar150 [16];
  int8_t auVar151 [16];
  int8_t unaff_XMM12_Ba;
  int8_t uVar152;
  int8_t unaff_XMM12_Bb;
  int8_t uVar153;
  int8_t unaff_XMM12_Bc;
  int8_t uVar154;
  int8_t unaff_XMM12_Bd;
  int8_t uVar155;
  int8_t unaff_XMM12_Be;
  int8_t uVar156;
  int8_t unaff_XMM12_Bf;
  int8_t uVar157;
  int8_t unaff_XMM12_Bg;
  int8_t uVar158;
  int8_t unaff_XMM12_Bh;
  int8_t uVar159;
  int8_t auVar160 [16];
  int8_t auVar161 [16];
  int8_t auVar162 [16];
  int8_t auVar165 [16];
  int8_t auVar166 [16];
  int8_t auVar33 [16];
  int8_t auVar34 [16];
  int8_t auVar35 [16];
  int8_t auVar36 [16];
  int8_t auVar37 [16];
  int8_t auVar38 [16];
  int8_t auVar40 [16];
  int8_t auVar41 [16];
  int8_t auVar42 [16];
  int8_t auVar43 [16];
  int8_t auVar44 [16];
  int8_t auVar45 [16];
  int8_t auVar47 [16];
  int8_t auVar48 [16];
  int8_t auVar49 [16];
  int8_t auVar50 [16];
  int8_t auVar51 [16];
  int8_t auVar52 [16];
  int8_t auVar54 [16];
  int8_t auVar55 [16];
  int8_t auVar56 [16];
  int8_t auVar57 [16];
  int8_t auVar58 [16];
  int8_t auVar59 [16];
  int8_t auVar61 [16];
  int8_t auVar62 [16];
  int8_t auVar63 [16];
  int8_t auVar64 [16];
  int8_t auVar65 [16];
  int8_t auVar66 [16];
  int8_t auVar68 [16];
  int8_t auVar69 [16];
  int8_t auVar70 [16];
  int8_t auVar71 [16];
  int8_t auVar72 [16];
  int8_t auVar73 [16];
  int8_t auVar75 [16];
  int8_t auVar76 [16];
  int8_t auVar77 [16];
  int8_t auVar78 [16];
  int8_t auVar79 [16];
  int8_t auVar80 [16];
  int8_t auVar82 [16];
  int8_t auVar83 [16];
  int8_t auVar84 [16];
  int8_t auVar85 [16];
  int8_t auVar86 [16];
  int8_t auVar87 [16];
  int8_t auVar91 [16];
  int8_t auVar94 [16];
  int8_t auVar102 [16];
  int8_t auVar95 [16];
  int8_t auVar103 [16];
  int8_t auVar96 [16];
  int8_t auVar112 [16];
  int8_t auVar113 [16];
  int8_t auVar121 [16];
  int8_t auVar122 [16];
  int8_t auVar137 [16];
  int8_t auVar138 [16];
  int8_t auVar139 [16];
  int8_t auVar140 [16];
  int8_t auVar146 [16];
  int8_t auVar147 [16];
  int8_t auVar148 [16];
  int8_t auVar149 [16];
  int8_t auVar163 [16];
  int8_t auVar164 [16];
  
  auVar39 = ui_system_string;
  auVar31 = param_1[1];
  auVar89 = param_1[3];
  auVar114 = param_1[2];
  auVar116 = *param_1;
  auVar92 = param_1[6];
  auVar118 = param_1[7];
  uVar2 = CONCAT13(unaff_XMM12_Bd,CONCAT12(unaff_XMM12_Bc,CONCAT11(unaff_XMM12_Bb,unaff_XMM12_Ba)))
          ^ CONCAT13(unaff_XMM12_Bd,CONCAT12(unaff_XMM12_Bc,CONCAT11(unaff_XMM12_Bb,unaff_XMM12_Ba))
                    );
  uVar152 = (int8_t)uVar2;
  uVar153 = (int8_t)(uVar2 >> 8);
  uVar154 = (int8_t)(uVar2 >> 0x10);
  uVar155 = (int8_t)(uVar2 >> 0x18);
  uVar2 = CONCAT13(unaff_XMM12_Bh,CONCAT12(unaff_XMM12_Bg,CONCAT11(unaff_XMM12_Bf,unaff_XMM12_Be)))
          ^ CONCAT13(unaff_XMM12_Bh,CONCAT12(unaff_XMM12_Bg,CONCAT11(unaff_XMM12_Bf,unaff_XMM12_Be))
                    );
  uVar156 = (int8_t)uVar2;
  uVar157 = (int8_t)(uVar2 >> 8);
  uVar158 = (int8_t)(uVar2 >> 0x10);
  uVar159 = (int8_t)(uVar2 >> 0x18);
  lVar27 = 2;
  auVar160 = param_1[4];
  auVar165 = param_1[5];
  do {
    auVar109._0_12_ = auVar114._0_12_;
    auVar109._12_2_ = auVar114._6_2_;
    auVar109._14_2_ = auVar89._6_2_;
    auVar98._12_4_ = auVar109._12_4_;
    auVar98._0_10_ = auVar114._0_10_;
    auVar98._10_2_ = auVar89._4_2_;
    auVar29._10_6_ = auVar98._10_6_;
    auVar29._0_8_ = auVar114._0_8_;
    auVar29._8_2_ = auVar114._4_2_;
    auVar3._4_8_ = auVar29._8_8_;
    auVar3._2_2_ = auVar89._2_2_;
    auVar3._0_2_ = auVar114._2_2_;
    uVar28 = CONCAT22(auVar89._0_2_,auVar114._0_2_);
    auVar122._0_12_ = auVar116._0_12_;
    auVar122._12_2_ = auVar116._6_2_;
    auVar122._14_2_ = auVar31._6_2_;
    auVar121._12_4_ = auVar122._12_4_;
    auVar121._0_10_ = auVar116._0_10_;
    auVar121._10_2_ = auVar31._4_2_;
    auVar120._10_6_ = auVar121._10_6_;
    auVar120._0_8_ = auVar116._0_8_;
    auVar120._8_2_ = auVar116._4_2_;
    auVar4._4_8_ = auVar120._8_8_;
    auVar4._2_2_ = auVar31._2_2_;
    auVar4._0_2_ = auVar116._2_2_;
    auVar106._0_8_ = auVar4._0_8_ << 0x20;
    auVar106._8_4_ = auVar4._0_4_;
    auVar106._12_4_ = auVar3._0_4_;
    uVar88 = auVar29._8_4_;
    auVar24._4_4_ = auVar121._12_4_;
    auVar24._0_4_ = uVar88;
    auVar24._8_4_ = auVar98._12_4_;
    auVar96._0_12_ = auVar160._0_12_;
    auVar96._12_2_ = auVar160._6_2_;
    auVar96._14_2_ = auVar165._6_2_;
    auVar95._12_4_ = auVar96._12_4_;
    auVar95._0_10_ = auVar160._0_10_;
    auVar95._10_2_ = auVar165._4_2_;
    auVar94._10_6_ = auVar95._10_6_;
    auVar94._0_8_ = auVar160._0_8_;
    auVar94._8_2_ = auVar160._4_2_;
    auVar5._4_8_ = auVar94._8_8_;
    auVar5._2_2_ = auVar165._2_2_;
    auVar5._0_2_ = auVar160._2_2_;
    auVar93._0_4_ = CONCAT22(auVar165._0_2_,auVar160._0_2_);
    auVar93._4_12_ = auVar5;
    auVar91._0_12_ = auVar92._0_12_;
    auVar91._12_2_ = auVar92._6_2_;
    auVar91._14_2_ = auVar118._6_2_;
    auVar90._12_4_ = auVar91._12_4_;
    auVar90._0_10_ = auVar92._0_10_;
    auVar90._10_2_ = auVar118._4_2_;
    auVar150._10_6_ = auVar90._10_6_;
    auVar150._0_8_ = auVar92._0_8_;
    auVar150._8_2_ = auVar92._4_2_;
    auVar6._4_8_ = auVar150._8_8_;
    auVar6._2_2_ = auVar118._2_2_;
    auVar6._0_2_ = auVar92._2_2_;
    auVar100._10_2_ = auVar118._0_2_;
    auVar100._8_2_ = auVar92._0_2_;
    auVar127._0_8_ = auVar93._0_8_;
    auVar127._8_4_ = auVar5._0_4_;
    auVar127._12_4_ = auVar6._0_4_;
    auVar100._4_4_ = auVar93._0_4_;
    auVar97._0_8_ = CONCAT44(auVar150._8_4_,auVar94._8_4_);
    auVar97._8_4_ = auVar95._12_4_;
    auVar97._12_4_ = auVar90._12_4_;
    auVar123._8_8_ = auVar97._8_8_;
    auVar123._0_8_ = auVar24._4_8_;
    auVar105._4_8_ = auVar97._0_8_;
    auVar105._0_4_ = uVar88;
    auVar105._12_4_ = 0;
    auVar107._8_8_ = auVar127._8_8_;
    auVar107._0_8_ = auVar106._8_8_;
    auVar100._0_4_ = uVar28;
    auVar100._12_4_ = 0;
    auVar149._0_12_ = auVar123._0_12_;
    auVar149._12_2_ = auVar89._6_2_;
    auVar149._14_2_ = auVar89._10_2_;
    auVar148._12_4_ = auVar149._12_4_;
    auVar148._0_10_ = auVar123._0_10_;
    auVar148._10_2_ = auVar114._10_2_;
    auVar147._10_6_ = auVar148._10_6_;
    auVar147._8_2_ = auVar114._6_2_;
    auVar147._0_8_ = auVar24._4_8_;
    auVar146._8_8_ = auVar147._8_8_;
    auVar146._6_2_ = auVar31._10_2_;
    auVar146._4_2_ = auVar31._6_2_;
    auVar146._0_4_ = auVar121._12_4_;
    auVar145._4_12_ = auVar146._4_12_;
    auVar145._2_2_ = auVar116._10_2_;
    auVar145._0_2_ = auVar116._6_2_;
    auVar124._2_2_ = auVar160._10_2_;
    auVar124._0_2_ = auVar160._6_2_;
    auVar124._4_2_ = auVar165._6_2_;
    auVar124._6_2_ = auVar165._10_2_;
    auVar124._8_2_ = auVar92._6_2_;
    auVar124._10_2_ = auVar92._10_2_;
    auVar124._12_2_ = auVar118._6_2_;
    auVar124._14_2_ = auVar118._10_2_;
    auVar98 = pmaddwd(auVar145,ui_system_string);
    auVar150 = pmaddwd(auVar145,ui_system_string);
    auVar108._2_2_ = auVar160._14_2_;
    auVar108._0_2_ = auVar160._2_2_;
    auVar108._4_2_ = auVar165._2_2_;
    auVar108._6_2_ = auVar165._14_2_;
    auVar108._8_2_ = auVar92._2_2_;
    auVar108._10_2_ = auVar92._14_2_;
    auVar108._12_2_ = auVar118._2_2_;
    auVar108._14_2_ = auVar118._14_2_;
    auVar140._0_12_ = auVar107._0_12_;
    auVar140._12_2_ = auVar89._2_2_;
    auVar140._14_2_ = auVar89._14_2_;
    auVar139._12_4_ = auVar140._12_4_;
    auVar139._0_10_ = auVar107._0_10_;
    auVar139._10_2_ = auVar114._14_2_;
    auVar138._10_6_ = auVar139._10_6_;
    auVar138._8_2_ = auVar114._2_2_;
    auVar138._0_8_ = auVar106._8_8_;
    auVar137._8_8_ = auVar138._8_8_;
    auVar137._6_2_ = auVar31._14_2_;
    auVar137._4_2_ = auVar31._2_2_;
    auVar137._0_4_ = auVar4._0_4_;
    auVar136._4_12_ = auVar137._4_12_;
    auVar136._2_2_ = auVar116._14_2_;
    auVar136._0_2_ = auVar116._2_2_;
    auVar29 = pmaddwd(auVar108,ui_system_string);
    auVar109 = pmaddwd(auVar108,ui_system_string);
    auVar127 = pmaddwd(auVar136,ui_system_string);
    auVar141 = pmaddwd(auVar136,ui_system_string);
    auVar99._0_4_ = auVar98._0_4_ + 0x2000 >> 0xe;
    auVar99._4_4_ = auVar98._4_4_ + 0x2000 >> 0xe;
    auVar99._8_4_ = auVar98._8_4_ + 0x2000 >> 0xe;
    auVar99._12_4_ = auVar98._12_4_ + 0x2000 >> 0xe;
    auVar30._0_4_ = auVar29._0_4_ + 0x2000 >> 0xe;
    auVar30._4_4_ = auVar29._4_4_ + 0x2000 >> 0xe;
    auVar30._8_4_ = auVar29._8_4_ + 0x2000 >> 0xe;
    auVar30._12_4_ = auVar29._12_4_ + 0x2000 >> 0xe;
    auVar110._0_4_ = auVar109._0_4_ + 0x2000 >> 0xe;
    auVar110._4_4_ = auVar109._4_4_ + 0x2000 >> 0xe;
    auVar110._8_4_ = auVar109._8_4_ + 0x2000 >> 0xe;
    auVar110._12_4_ = auVar109._12_4_ + 0x2000 >> 0xe;
    auVar128._0_4_ = auVar127._0_4_ + 0x2000 >> 0xe;
    auVar128._4_4_ = auVar127._4_4_ + 0x2000 >> 0xe;
    auVar128._8_4_ = auVar127._8_4_ + 0x2000 >> 0xe;
    auVar128._12_4_ = auVar127._12_4_ + 0x2000 >> 0xe;
    auVar109 = packssdw(auVar128,auVar30);
    auVar29 = pmaddwd(auVar124,ui_system_string);
    auVar98 = pmaddwd(auVar124,ui_system_string);
    auVar142._0_4_ = auVar141._0_4_ + 0x2000 >> 0xe;
    auVar142._4_4_ = auVar141._4_4_ + 0x2000 >> 0xe;
    auVar142._8_4_ = auVar141._8_4_ + 0x2000 >> 0xe;
    auVar142._12_4_ = auVar141._12_4_ + 0x2000 >> 0xe;
    auVar127 = packssdw(auVar142,auVar110);
    auVar151._0_4_ = auVar150._0_4_ + 0x2000 >> 0xe;
    auVar151._4_4_ = auVar150._4_4_ + 0x2000 >> 0xe;
    auVar151._8_4_ = auVar150._8_4_ + 0x2000 >> 0xe;
    auVar151._12_4_ = auVar150._12_4_ + 0x2000 >> 0xe;
    auVar164._0_12_ = SUB1612(auVar100 << 0x20,0);
    auVar164._12_2_ = auVar89._0_2_;
    auVar164._14_2_ = auVar89._8_2_;
    auVar163._12_4_ = auVar164._12_4_;
    auVar163._0_10_ = SUB1610(auVar100 << 0x20,0);
    auVar163._10_2_ = auVar114._8_2_;
    auVar25._4_2_ = auVar114._0_2_;
    auVar25._0_4_ = uVar28;
    auVar25._6_6_ = auVar163._10_6_;
    auVar162._8_8_ = auVar25._4_8_;
    auVar162._6_2_ = auVar31._8_2_;
    auVar162._4_2_ = auVar31._0_2_;
    auVar162._2_2_ = auVar116._8_2_;
    auVar162._0_2_ = auVar116._0_2_;
    auVar141._0_4_ = auVar29._0_4_ + 0x2000 >> 0xe;
    auVar141._4_4_ = auVar29._4_4_ + 0x2000 >> 0xe;
    auVar141._8_4_ = auVar29._8_4_ + 0x2000 >> 0xe;
    auVar141._12_4_ = auVar29._12_4_ + 0x2000 >> 0xe;
    auVar125._0_4_ = auVar98._0_4_ + 0x2000 >> 0xe;
    auVar125._4_4_ = auVar98._4_4_ + 0x2000 >> 0xe;
    auVar125._8_4_ = auVar98._8_4_ + 0x2000 >> 0xe;
    auVar125._12_4_ = auVar98._12_4_ + 0x2000 >> 0xe;
    auVar100 = packssdw(auVar99,auVar141);
    auVar29 = packssdw(auVar151,auVar125);
    auVar117._2_2_ = auVar160._8_2_;
    auVar117._0_2_ = auVar160._0_2_;
    auVar117._4_2_ = auVar165._0_2_;
    auVar117._6_2_ = auVar165._8_2_;
    auVar117._8_2_ = auVar92._0_2_;
    auVar117._10_2_ = auVar92._8_2_;
    auVar117._12_2_ = auVar118._0_2_;
    auVar117._14_2_ = auVar118._8_2_;
    auVar113._0_12_ = SUB1612(auVar105 << 0x20,0);
    auVar113._12_2_ = auVar89._4_2_;
    auVar113._14_2_ = auVar89._12_2_;
    auVar112._12_4_ = auVar113._12_4_;
    auVar112._0_10_ = SUB1610(auVar105 << 0x20,0);
    auVar112._10_2_ = auVar114._12_2_;
    auVar26._4_2_ = auVar114._4_2_;
    auVar26._0_4_ = uVar88;
    auVar26._6_6_ = auVar112._10_6_;
    auVar111._8_8_ = auVar26._4_8_;
    auVar111._6_2_ = auVar31._12_2_;
    auVar111._4_2_ = auVar31._4_2_;
    auVar111._2_2_ = auVar116._12_2_;
    auVar111._0_2_ = auVar116._4_2_;
    auVar143._2_2_ = auVar160._12_2_;
    auVar143._0_2_ = auVar160._4_2_;
    auVar143._4_2_ = auVar165._4_2_;
    auVar143._6_2_ = auVar165._12_2_;
    auVar143._8_2_ = auVar92._4_2_;
    auVar143._10_2_ = auVar92._12_2_;
    auVar143._12_2_ = auVar118._4_2_;
    auVar143._14_2_ = auVar118._12_2_;
    auVar89 = pmaddwd(auVar111,ui_system_string);
    auVar114 = pmaddwd(auVar111,ui_system_string);
    auVar165 = pmaddwd(auVar162,ui_system_string);
    auVar118 = pmaddwd(auVar117,ui_system_string);
    auVar92 = psubsw(auVar127,auVar29);
    auVar31 = pmaddwd(auVar117,ui_system_string);
    auVar98 = paddsw(auVar29,auVar127);
    auVar160 = pmaddwd(auVar162,ui_system_string);
    auVar116._0_4_ = auVar89._0_4_ + 0x2000 >> 0xe;
    auVar116._4_4_ = auVar89._4_4_ + 0x2000 >> 0xe;
    auVar116._8_4_ = auVar89._8_4_ + 0x2000 >> 0xe;
    auVar116._12_4_ = auVar89._12_4_ + 0x2000 >> 0xe;
    auVar115._0_4_ = auVar114._0_4_ + 0x2000 >> 0xe;
    auVar115._4_4_ = auVar114._4_4_ + 0x2000 >> 0xe;
    auVar115._8_4_ = auVar114._8_4_ + 0x2000 >> 0xe;
    auVar115._12_4_ = auVar114._12_4_ + 0x2000 >> 0xe;
    auVar166._0_4_ = auVar165._0_4_ + 0x2000 >> 0xe;
    auVar166._4_4_ = auVar165._4_4_ + 0x2000 >> 0xe;
    auVar166._8_4_ = auVar165._8_4_ + 0x2000 >> 0xe;
    auVar166._12_4_ = auVar165._12_4_ + 0x2000 >> 0xe;
    auVar119._0_4_ = auVar118._0_4_ + 0x2000 >> 0xe;
    auVar119._4_4_ = auVar118._4_4_ + 0x2000 >> 0xe;
    auVar119._8_4_ = auVar118._8_4_ + 0x2000 >> 0xe;
    auVar119._12_4_ = auVar118._12_4_ + 0x2000 >> 0xe;
    auVar89._0_4_ = auVar31._0_4_ + 0x2000 >> 0xe;
    auVar89._4_4_ = auVar31._4_4_ + 0x2000 >> 0xe;
    auVar89._8_4_ = auVar31._8_4_ + 0x2000 >> 0xe;
    auVar89._12_4_ = auVar31._12_4_ + 0x2000 >> 0xe;
    auVar29 = packssdw(auVar166,auVar119);
    auVar161._0_4_ = auVar160._0_4_ + 0x2000 >> 0xe;
    auVar161._4_4_ = auVar160._4_4_ + 0x2000 >> 0xe;
    auVar161._8_4_ = auVar160._8_4_ + 0x2000 >> 0xe;
    auVar161._12_4_ = auVar160._12_4_ + 0x2000 >> 0xe;
    auVar160 = packssdw(auVar161,auVar89);
    auVar31 = pmaddwd(auVar143,ui_system_string);
    auVar89 = pmaddwd(auVar143,ui_system_string);
    auVar114._0_4_ = auVar31._0_4_ + 0x2000 >> 0xe;
    auVar114._4_4_ = auVar31._4_4_ + 0x2000 >> 0xe;
    auVar114._8_4_ = auVar31._8_4_ + 0x2000 >> 0xe;
    auVar114._12_4_ = auVar31._12_4_ + 0x2000 >> 0xe;
    auVar31 = packssdw(auVar116,auVar114);
    auVar144._0_4_ = auVar89._0_4_ + 0x2000 >> 0xe;
    auVar144._4_4_ = auVar89._4_4_ + 0x2000 >> 0xe;
    auVar144._8_4_ = auVar89._8_4_ + 0x2000 >> 0xe;
    auVar144._12_4_ = auVar89._12_4_ + 0x2000 >> 0xe;
    auVar116 = packssdw(auVar115,auVar144);
    auVar105 = paddsw(auVar100,auVar109);
    auVar89 = psubsw(auVar109,auVar100);
    auVar118._2_2_ = auVar89._8_2_;
    auVar118._0_2_ = auVar92._8_2_;
    auVar118._4_2_ = auVar92._10_2_;
    auVar118._6_2_ = auVar89._10_2_;
    auVar118._8_2_ = auVar92._12_2_;
    auVar118._10_2_ = auVar89._12_2_;
    auVar118._12_2_ = auVar92._14_2_;
    auVar118._14_2_ = auVar89._14_2_;
    auVar100 = paddsw(auVar31,auVar29);
    auVar165._0_12_ = auVar92._0_12_;
    auVar165._12_2_ = auVar92._6_2_;
    auVar165._14_2_ = auVar89._6_2_;
    auVar103._12_4_ = auVar165._12_4_;
    auVar103._0_10_ = auVar92._0_10_;
    auVar103._10_2_ = auVar89._4_2_;
    auVar102._10_6_ = auVar103._10_6_;
    auVar102._0_8_ = auVar92._0_8_;
    auVar102._8_2_ = auVar92._4_2_;
    auVar101._8_8_ = auVar102._8_8_;
    auVar101._6_2_ = auVar89._2_2_;
    auVar101._4_2_ = auVar92._2_2_;
    auVar101._0_2_ = auVar92._0_2_;
    auVar101._2_2_ = auVar89._0_2_;
    auVar127 = psubsw(auVar29,auVar31);
    auVar89 = pmaddwd(auVar101,ui_system_string);
    auVar31 = pmaddwd(auVar118,ui_system_string);
    auVar29 = paddsw(auVar116,auVar160);
    auVar114 = pmaddwd(auVar118,ui_system_string);
    auVar109 = psubsw(auVar160,auVar116);
    auVar165 = pmaddwd(auVar101,ui_system_string);
    auVar116 = paddsw(auVar29,auVar98);
    auVar160._0_4_ = auVar89._0_4_ + 0x2000 >> 0xe;
    auVar160._4_4_ = auVar89._4_4_ + 0x2000 >> 0xe;
    auVar160._8_4_ = auVar89._8_4_ + 0x2000 >> 0xe;
    auVar160._12_4_ = auVar89._12_4_ + 0x2000 >> 0xe;
    auVar92._0_4_ = auVar31._0_4_ + 0x2000 >> 0xe;
    auVar92._4_4_ = auVar31._4_4_ + 0x2000 >> 0xe;
    auVar92._8_4_ = auVar31._8_4_ + 0x2000 >> 0xe;
    auVar92._12_4_ = auVar31._12_4_ + 0x2000 >> 0xe;
    auVar31._0_4_ = auVar114._0_4_ + 0x2000 >> 0xe;
    auVar31._4_4_ = auVar114._4_4_ + 0x2000 >> 0xe;
    auVar31._8_4_ = auVar114._8_4_ + 0x2000 >> 0xe;
    auVar31._12_4_ = auVar114._12_4_ + 0x2000 >> 0xe;
    auVar118 = psubsw(auVar29,auVar98);
    auVar89 = packssdw(auVar160,auVar92);
    auVar104._0_4_ = auVar165._0_4_ + 0x2000 >> 0xe;
    auVar104._4_4_ = auVar165._4_4_ + 0x2000 >> 0xe;
    auVar104._8_4_ = auVar165._8_4_ + 0x2000 >> 0xe;
    auVar104._12_4_ = auVar165._12_4_ + 0x2000 >> 0xe;
    auVar92 = packssdw(auVar104,auVar31);
    auVar31 = paddsw(auVar100,auVar92);
    auVar114 = paddsw(auVar127,auVar89);
    auVar165 = psubsw(auVar127,auVar89);
    auVar89 = paddsw(auVar109,auVar105);
    auVar160 = psubsw(auVar109,auVar105);
    auVar92 = psubsw(auVar100,auVar92);
    lVar27 = lVar27 + -1;
  } while (lVar27 != 0);
  uVar1 = *param_2;
  auVar116 = paddsw(auVar116,ui_system_string);
  auVar114 = paddsw(auVar114,ui_system_string);
  auVar38._8_6_ = 0;
  auVar38._0_8_ = uVar1;
  auVar38[0xe] = (char)(uVar1 >> 0x38);
  auVar38[0xf] = uVar159;
  auVar37._14_2_ = auVar38._14_2_;
  auVar37._8_5_ = 0;
  auVar37._0_8_ = uVar1;
  auVar37[0xd] = uVar158;
  auVar36._13_3_ = auVar37._13_3_;
  auVar36._8_4_ = 0;
  auVar36._0_8_ = uVar1;
  auVar36[0xc] = (char)(uVar1 >> 0x30);
  auVar35._12_4_ = auVar36._12_4_;
  auVar35._8_3_ = 0;
  auVar35._0_8_ = uVar1;
  auVar35[0xb] = uVar157;
  auVar34._11_5_ = auVar35._11_5_;
  auVar34._8_2_ = 0;
  auVar34._0_8_ = uVar1;
  auVar34[10] = (char)(uVar1 >> 0x28);
  auVar33._10_6_ = auVar34._10_6_;
  auVar33[8] = 0;
  auVar33._0_8_ = uVar1;
  auVar33[9] = uVar156;
  auVar32._9_7_ = auVar33._9_7_;
  auVar32[8] = (char)(uVar1 >> 0x20);
  auVar32._0_8_ = uVar1;
  Var9 = CONCAT91(CONCAT81(auVar32._8_8_,uVar155),(char)(uVar1 >> 0x18));
  auVar8._2_10_ = Var9;
  auVar8[1] = uVar154;
  auVar8[0] = (char)(uVar1 >> 0x10);
  auVar7._2_12_ = auVar8;
  auVar7[1] = uVar153;
  auVar7[0] = (char)(uVar1 >> 8);
  auVar31 = paddsw(auVar31,ui_system_string);
  auVar160 = paddsw(auVar160,ui_system_string);
  auVar116 = psraw(auVar116,5);
  auVar165 = paddsw(auVar165,ui_system_string);
  sVar126 = auVar116._0_2_ + CONCAT11(uVar152,(char)uVar1);
  sVar129 = auVar116._2_2_ + auVar7._0_2_;
  sVar130 = auVar116._4_2_ + auVar8._0_2_;
  sVar131 = auVar116._6_2_ + (short)Var9;
  sVar132 = auVar116._8_2_ + auVar32._8_2_;
  sVar133 = auVar116._10_2_ + auVar34._10_2_;
  sVar134 = auVar116._12_2_ + auVar36._12_2_;
  sVar135 = auVar116._14_2_ + auVar37._14_2_;
  auVar114 = psraw(auVar114,5);
  auVar89 = paddsw(auVar89,ui_system_string);
  *param_2 = CONCAT17((0 < sVar135) * (sVar135 < 0x100) * (char)sVar135 - (0xff < sVar135),
                      CONCAT16((0 < sVar134) * (sVar134 < 0x100) * (char)sVar134 - (0xff < sVar134),
                               CONCAT15((0 < sVar133) * (sVar133 < 0x100) * (char)sVar133 -
                                        (0xff < sVar133),
                                        CONCAT14((0 < sVar132) * (sVar132 < 0x100) * (char)sVar132 -
                                                 (0xff < sVar132),
                                                 CONCAT13((0 < sVar131) * (sVar131 < 0x100) *
                                                          (char)sVar131 - (0xff < sVar131),
                                                          CONCAT12((0 < sVar130) * (sVar130 < 0x100)
                                                                   * (char)sVar130 -
                                                                   (0xff < sVar130),
                                                                   CONCAT11((0 < sVar129) *
                                                                            (sVar129 < 0x100) *
                                                                            (char)sVar129 -
                                                                            (0xff < sVar129),
                                                                            (0 < sVar126) *
                                                                            (sVar126 < 0x100) *
                                                                            (char)sVar126 -
                                                                            (0xff < sVar126))))))));
  auVar116 = paddsw(auVar92,auVar39);
  uVar1 = *(uint64_t *)((int64_t)param_3 + (int64_t)param_2);
  auVar92 = paddsw(auVar118,auVar39);
  auVar45._8_6_ = 0;
  auVar45._0_8_ = uVar1;
  auVar45[0xe] = (char)(uVar1 >> 0x38);
  auVar45[0xf] = uVar159;
  auVar44._14_2_ = auVar45._14_2_;
  auVar44._8_5_ = 0;
  auVar44._0_8_ = uVar1;
  auVar44[0xd] = uVar158;
  auVar43._13_3_ = auVar44._13_3_;
  auVar43._8_4_ = 0;
  auVar43._0_8_ = uVar1;
  auVar43[0xc] = (char)(uVar1 >> 0x30);
  auVar42._12_4_ = auVar43._12_4_;
  auVar42._8_3_ = 0;
  auVar42._0_8_ = uVar1;
  auVar42[0xb] = uVar157;
  auVar41._11_5_ = auVar42._11_5_;
  auVar41._8_2_ = 0;
  auVar41._0_8_ = uVar1;
  auVar41[10] = (char)(uVar1 >> 0x28);
  auVar40._10_6_ = auVar41._10_6_;
  auVar40[8] = 0;
  auVar40._0_8_ = uVar1;
  auVar40[9] = uVar156;
  auVar39._9_7_ = auVar40._9_7_;
  auVar39[8] = (char)(uVar1 >> 0x20);
  auVar39._0_8_ = uVar1;
  Var9 = CONCAT91(CONCAT81(auVar39._8_8_,uVar155),(char)(uVar1 >> 0x18));
  auVar11._2_10_ = Var9;
  auVar11[1] = uVar154;
  auVar11[0] = (char)(uVar1 >> 0x10);
  auVar10._2_12_ = auVar11;
  auVar10[1] = uVar153;
  auVar10[0] = (char)(uVar1 >> 8);
  auVar31 = psraw(auVar31,5);
  sVar126 = auVar31._0_2_ + CONCAT11(uVar152,(char)uVar1);
  sVar129 = auVar31._2_2_ + auVar10._0_2_;
  sVar130 = auVar31._4_2_ + auVar11._0_2_;
  sVar131 = auVar31._6_2_ + (short)Var9;
  sVar132 = auVar31._8_2_ + auVar39._8_2_;
  sVar133 = auVar31._10_2_ + auVar41._10_2_;
  sVar134 = auVar31._12_2_ + auVar43._12_2_;
  sVar135 = auVar31._14_2_ + auVar44._14_2_;
  auVar118 = psraw(auVar160,5);
  *(uint64_t *)((int64_t)param_3 + (int64_t)param_2) =
       CONCAT17((0 < sVar135) * (sVar135 < 0x100) * (char)sVar135 - (0xff < sVar135),
                CONCAT16((0 < sVar134) * (sVar134 < 0x100) * (char)sVar134 - (0xff < sVar134),
                         CONCAT15((0 < sVar133) * (sVar133 < 0x100) * (char)sVar133 -
                                  (0xff < sVar133),
                                  CONCAT14((0 < sVar132) * (sVar132 < 0x100) * (char)sVar132 -
                                           (0xff < sVar132),
                                           CONCAT13((0 < sVar131) * (sVar131 < 0x100) *
                                                    (char)sVar131 - (0xff < sVar131),
                                                    CONCAT12((0 < sVar130) * (sVar130 < 0x100) *
                                                             (char)sVar130 - (0xff < sVar130),
                                                             CONCAT11((0 < sVar129) *
                                                                      (sVar129 < 0x100) *
                                                                      (char)sVar129 -
                                                                      (0xff < sVar129),
                                                                      (0 < sVar126) *
                                                                      (sVar126 < 0x100) *
                                                                      (char)sVar126 -
                                                                      (0xff < sVar126))))))));
  auVar160 = psraw(auVar165,5);
  auVar31 = psraw(auVar89,5);
  auVar89 = psraw(auVar116,5);
  uVar1 = *(uint64_t *)((int64_t)(param_3 * 2) + (int64_t)param_2);
  auVar52._8_6_ = 0;
  auVar52._0_8_ = uVar1;
  auVar52[0xe] = (char)(uVar1 >> 0x38);
  auVar52[0xf] = uVar159;
  auVar51._14_2_ = auVar52._14_2_;
  auVar51._8_5_ = 0;
  auVar51._0_8_ = uVar1;
  auVar51[0xd] = uVar158;
  auVar50._13_3_ = auVar51._13_3_;
  auVar50._8_4_ = 0;
  auVar50._0_8_ = uVar1;
  auVar50[0xc] = (char)(uVar1 >> 0x30);
  auVar49._12_4_ = auVar50._12_4_;
  auVar49._8_3_ = 0;
  auVar49._0_8_ = uVar1;
  auVar49[0xb] = uVar157;
  auVar48._11_5_ = auVar49._11_5_;
  auVar48._8_2_ = 0;
  auVar48._0_8_ = uVar1;
  auVar48[10] = (char)(uVar1 >> 0x28);
  auVar47._10_6_ = auVar48._10_6_;
  auVar47[8] = 0;
  auVar47._0_8_ = uVar1;
  auVar47[9] = uVar156;
  auVar46._9_7_ = auVar47._9_7_;
  auVar46[8] = (char)(uVar1 >> 0x20);
  auVar46._0_8_ = uVar1;
  Var9 = CONCAT91(CONCAT81(auVar46._8_8_,uVar155),(char)(uVar1 >> 0x18));
  auVar13._2_10_ = Var9;
  auVar13[1] = uVar154;
  auVar13[0] = (char)(uVar1 >> 0x10);
  auVar12._2_12_ = auVar13;
  auVar12[1] = uVar153;
  auVar12[0] = (char)(uVar1 >> 8);
  sVar126 = auVar114._0_2_ + CONCAT11(uVar152,(char)uVar1);
  sVar129 = auVar114._2_2_ + auVar12._0_2_;
  sVar130 = auVar114._4_2_ + auVar13._0_2_;
  sVar131 = auVar114._6_2_ + (short)Var9;
  sVar132 = auVar114._8_2_ + auVar46._8_2_;
  sVar133 = auVar114._10_2_ + auVar48._10_2_;
  sVar134 = auVar114._12_2_ + auVar50._12_2_;
  sVar135 = auVar114._14_2_ + auVar51._14_2_;
  auVar114 = psraw(auVar92,5);
  *(uint64_t *)((int64_t)(param_3 * 2) + (int64_t)param_2) =
       CONCAT17((0 < sVar135) * (sVar135 < 0x100) * (char)sVar135 - (0xff < sVar135),
                CONCAT16((0 < sVar134) * (sVar134 < 0x100) * (char)sVar134 - (0xff < sVar134),
                         CONCAT15((0 < sVar133) * (sVar133 < 0x100) * (char)sVar133 -
                                  (0xff < sVar133),
                                  CONCAT14((0 < sVar132) * (sVar132 < 0x100) * (char)sVar132 -
                                           (0xff < sVar132),
                                           CONCAT13((0 < sVar131) * (sVar131 < 0x100) *
                                                    (char)sVar131 - (0xff < sVar131),
                                                    CONCAT12((0 < sVar130) * (sVar130 < 0x100) *
                                                             (char)sVar130 - (0xff < sVar130),
                                                             CONCAT11((0 < sVar129) *
                                                                      (sVar129 < 0x100) *
                                                                      (char)sVar129 -
                                                                      (0xff < sVar129),
                                                                      (0 < sVar126) *
                                                                      (sVar126 < 0x100) *
                                                                      (char)sVar126 -
                                                                      (0xff < sVar126))))))));
  uVar1 = *(uint64_t *)((int64_t)(param_3 * 3) + (int64_t)param_2);
  auVar59._8_6_ = 0;
  auVar59._0_8_ = uVar1;
  auVar59[0xe] = (char)(uVar1 >> 0x38);
  auVar59[0xf] = uVar159;
  auVar58._14_2_ = auVar59._14_2_;
  auVar58._8_5_ = 0;
  auVar58._0_8_ = uVar1;
  auVar58[0xd] = uVar158;
  auVar57._13_3_ = auVar58._13_3_;
  auVar57._8_4_ = 0;
  auVar57._0_8_ = uVar1;
  auVar57[0xc] = (char)(uVar1 >> 0x30);
  auVar56._12_4_ = auVar57._12_4_;
  auVar56._8_3_ = 0;
  auVar56._0_8_ = uVar1;
  auVar56[0xb] = uVar157;
  auVar55._11_5_ = auVar56._11_5_;
  auVar55._8_2_ = 0;
  auVar55._0_8_ = uVar1;
  auVar55[10] = (char)(uVar1 >> 0x28);
  auVar54._10_6_ = auVar55._10_6_;
  auVar54[8] = 0;
  auVar54._0_8_ = uVar1;
  auVar54[9] = uVar156;
  auVar53._9_7_ = auVar54._9_7_;
  auVar53[8] = (char)(uVar1 >> 0x20);
  auVar53._0_8_ = uVar1;
  Var9 = CONCAT91(CONCAT81(auVar53._8_8_,uVar155),(char)(uVar1 >> 0x18));
  auVar15._2_10_ = Var9;
  auVar15[1] = uVar154;
  auVar15[0] = (char)(uVar1 >> 0x10);
  auVar14._2_12_ = auVar15;
  auVar14[1] = uVar153;
  auVar14[0] = (char)(uVar1 >> 8);
  sVar126 = CONCAT11(uVar152,(char)uVar1) + auVar31._0_2_;
  sVar129 = auVar14._0_2_ + auVar31._2_2_;
  sVar130 = auVar15._0_2_ + auVar31._4_2_;
  sVar131 = (short)Var9 + auVar31._6_2_;
  sVar132 = auVar53._8_2_ + auVar31._8_2_;
  sVar133 = auVar55._10_2_ + auVar31._10_2_;
  sVar134 = auVar57._12_2_ + auVar31._12_2_;
  sVar135 = auVar58._14_2_ + auVar31._14_2_;
  *(uint64_t *)((int64_t)(param_3 * 3) + (int64_t)param_2) =
       CONCAT17((0 < sVar135) * (sVar135 < 0x100) * (char)sVar135 - (0xff < sVar135),
                CONCAT16((0 < sVar134) * (sVar134 < 0x100) * (char)sVar134 - (0xff < sVar134),
                         CONCAT15((0 < sVar133) * (sVar133 < 0x100) * (char)sVar133 -
                                  (0xff < sVar133),
                                  CONCAT14((0 < sVar132) * (sVar132 < 0x100) * (char)sVar132 -
                                           (0xff < sVar132),
                                           CONCAT13((0 < sVar131) * (sVar131 < 0x100) *
                                                    (char)sVar131 - (0xff < sVar131),
                                                    CONCAT12((0 < sVar130) * (sVar130 < 0x100) *
                                                             (char)sVar130 - (0xff < sVar130),
                                                             CONCAT11((0 < sVar129) *
                                                                      (sVar129 < 0x100) *
                                                                      (char)sVar129 -
                                                                      (0xff < sVar129),
                                                                      (0 < sVar126) *
                                                                      (sVar126 < 0x100) *
                                                                      (char)sVar126 -
                                                                      (0xff < sVar126))))))));
  uVar1 = *(uint64_t *)((int64_t)(param_3 * 4) + (int64_t)param_2);
  auVar66._8_6_ = 0;
  auVar66._0_8_ = uVar1;
  auVar66[0xe] = (char)(uVar1 >> 0x38);
  auVar66[0xf] = uVar159;
  auVar65._14_2_ = auVar66._14_2_;
  auVar65._8_5_ = 0;
  auVar65._0_8_ = uVar1;
  auVar65[0xd] = uVar158;
  auVar64._13_3_ = auVar65._13_3_;
  auVar64._8_4_ = 0;
  auVar64._0_8_ = uVar1;
  auVar64[0xc] = (char)(uVar1 >> 0x30);
  auVar63._12_4_ = auVar64._12_4_;
  auVar63._8_3_ = 0;
  auVar63._0_8_ = uVar1;
  auVar63[0xb] = uVar157;
  auVar62._11_5_ = auVar63._11_5_;
  auVar62._8_2_ = 0;
  auVar62._0_8_ = uVar1;
  auVar62[10] = (char)(uVar1 >> 0x28);
  auVar61._10_6_ = auVar62._10_6_;
  auVar61[8] = 0;
  auVar61._0_8_ = uVar1;
  auVar61[9] = uVar156;
  auVar60._9_7_ = auVar61._9_7_;
  auVar60[8] = (char)(uVar1 >> 0x20);
  auVar60._0_8_ = uVar1;
  Var9 = CONCAT91(CONCAT81(auVar60._8_8_,uVar155),(char)(uVar1 >> 0x18));
  auVar17._2_10_ = Var9;
  auVar17[1] = uVar154;
  auVar17[0] = (char)(uVar1 >> 0x10);
  auVar16._2_12_ = auVar17;
  auVar16[1] = uVar153;
  auVar16[0] = (char)(uVar1 >> 8);
  sVar126 = CONCAT11(uVar152,(char)uVar1) + auVar118._0_2_;
  sVar129 = auVar16._0_2_ + auVar118._2_2_;
  sVar130 = auVar17._0_2_ + auVar118._4_2_;
  sVar131 = (short)Var9 + auVar118._6_2_;
  sVar132 = auVar60._8_2_ + auVar118._8_2_;
  sVar133 = auVar62._10_2_ + auVar118._10_2_;
  sVar134 = auVar64._12_2_ + auVar118._12_2_;
  sVar135 = auVar65._14_2_ + auVar118._14_2_;
  *(uint64_t *)((int64_t)(param_3 * 4) + (int64_t)param_2) =
       CONCAT17((0 < sVar135) * (sVar135 < 0x100) * (char)sVar135 - (0xff < sVar135),
                CONCAT16((0 < sVar134) * (sVar134 < 0x100) * (char)sVar134 - (0xff < sVar134),
                         CONCAT15((0 < sVar133) * (sVar133 < 0x100) * (char)sVar133 -
                                  (0xff < sVar133),
                                  CONCAT14((0 < sVar132) * (sVar132 < 0x100) * (char)sVar132 -
                                           (0xff < sVar132),
                                           CONCAT13((0 < sVar131) * (sVar131 < 0x100) *
                                                    (char)sVar131 - (0xff < sVar131),
                                                    CONCAT12((0 < sVar130) * (sVar130 < 0x100) *
                                                             (char)sVar130 - (0xff < sVar130),
                                                             CONCAT11((0 < sVar129) *
                                                                      (sVar129 < 0x100) *
                                                                      (char)sVar129 -
                                                                      (0xff < sVar129),
                                                                      (0 < sVar126) *
                                                                      (sVar126 < 0x100) *
                                                                      (char)sVar126 -
                                                                      (0xff < sVar126))))))));
  uVar1 = *(uint64_t *)((int64_t)(param_3 * 5) + (int64_t)param_2);
  auVar73._8_6_ = 0;
  auVar73._0_8_ = uVar1;
  auVar73[0xe] = (char)(uVar1 >> 0x38);
  auVar73[0xf] = uVar159;
  auVar72._14_2_ = auVar73._14_2_;
  auVar72._8_5_ = 0;
  auVar72._0_8_ = uVar1;
  auVar72[0xd] = uVar158;
  auVar71._13_3_ = auVar72._13_3_;
  auVar71._8_4_ = 0;
  auVar71._0_8_ = uVar1;
  auVar71[0xc] = (char)(uVar1 >> 0x30);
  auVar70._12_4_ = auVar71._12_4_;
  auVar70._8_3_ = 0;
  auVar70._0_8_ = uVar1;
  auVar70[0xb] = uVar157;
  auVar69._11_5_ = auVar70._11_5_;
  auVar69._8_2_ = 0;
  auVar69._0_8_ = uVar1;
  auVar69[10] = (char)(uVar1 >> 0x28);
  auVar68._10_6_ = auVar69._10_6_;
  auVar68[8] = 0;
  auVar68._0_8_ = uVar1;
  auVar68[9] = uVar156;
  auVar67._9_7_ = auVar68._9_7_;
  auVar67[8] = (char)(uVar1 >> 0x20);
  auVar67._0_8_ = uVar1;
  Var9 = CONCAT91(CONCAT81(auVar67._8_8_,uVar155),(char)(uVar1 >> 0x18));
  auVar19._2_10_ = Var9;
  auVar19[1] = uVar154;
  auVar19[0] = (char)(uVar1 >> 0x10);
  auVar18._2_12_ = auVar19;
  auVar18[1] = uVar153;
  auVar18[0] = (char)(uVar1 >> 8);
  sVar126 = CONCAT11(uVar152,(char)uVar1) + auVar160._0_2_;
  sVar129 = auVar18._0_2_ + auVar160._2_2_;
  sVar130 = auVar19._0_2_ + auVar160._4_2_;
  sVar131 = (short)Var9 + auVar160._6_2_;
  sVar132 = auVar67._8_2_ + auVar160._8_2_;
  sVar133 = auVar69._10_2_ + auVar160._10_2_;
  sVar134 = auVar71._12_2_ + auVar160._12_2_;
  sVar135 = auVar72._14_2_ + auVar160._14_2_;
  *(uint64_t *)((int64_t)(param_3 * 5) + (int64_t)param_2) =
       CONCAT17((0 < sVar135) * (sVar135 < 0x100) * (char)sVar135 - (0xff < sVar135),
                CONCAT16((0 < sVar134) * (sVar134 < 0x100) * (char)sVar134 - (0xff < sVar134),
                         CONCAT15((0 < sVar133) * (sVar133 < 0x100) * (char)sVar133 -
                                  (0xff < sVar133),
                                  CONCAT14((0 < sVar132) * (sVar132 < 0x100) * (char)sVar132 -
                                           (0xff < sVar132),
                                           CONCAT13((0 < sVar131) * (sVar131 < 0x100) *
                                                    (char)sVar131 - (0xff < sVar131),
                                                    CONCAT12((0 < sVar130) * (sVar130 < 0x100) *
                                                             (char)sVar130 - (0xff < sVar130),
                                                             CONCAT11((0 < sVar129) *
                                                                      (sVar129 < 0x100) *
                                                                      (char)sVar129 -
                                                                      (0xff < sVar129),
                                                                      (0 < sVar126) *
                                                                      (sVar126 < 0x100) *
                                                                      (char)sVar126 -
                                                                      (0xff < sVar126))))))));
  uVar1 = *(uint64_t *)((int64_t)(param_3 * 6) + (int64_t)param_2);
  auVar80._8_6_ = 0;
  auVar80._0_8_ = uVar1;
  auVar80[0xe] = (char)(uVar1 >> 0x38);
  auVar80[0xf] = uVar159;
  auVar79._14_2_ = auVar80._14_2_;
  auVar79._8_5_ = 0;
  auVar79._0_8_ = uVar1;
  auVar79[0xd] = uVar158;
  auVar78._13_3_ = auVar79._13_3_;
  auVar78._8_4_ = 0;
  auVar78._0_8_ = uVar1;
  auVar78[0xc] = (char)(uVar1 >> 0x30);
  auVar77._12_4_ = auVar78._12_4_;
  auVar77._8_3_ = 0;
  auVar77._0_8_ = uVar1;
  auVar77[0xb] = uVar157;
  auVar76._11_5_ = auVar77._11_5_;
  auVar76._8_2_ = 0;
  auVar76._0_8_ = uVar1;
  auVar76[10] = (char)(uVar1 >> 0x28);
  auVar75._10_6_ = auVar76._10_6_;
  auVar75[8] = 0;
  auVar75._0_8_ = uVar1;
  auVar75[9] = uVar156;
  auVar74._9_7_ = auVar75._9_7_;
  auVar74[8] = (char)(uVar1 >> 0x20);
  auVar74._0_8_ = uVar1;
  Var9 = CONCAT91(CONCAT81(auVar74._8_8_,uVar155),(char)(uVar1 >> 0x18));
  auVar21._2_10_ = Var9;
  auVar21[1] = uVar154;
  auVar21[0] = (char)(uVar1 >> 0x10);
  auVar20._2_12_ = auVar21;
  auVar20[1] = uVar153;
  auVar20[0] = (char)(uVar1 >> 8);
  sVar126 = CONCAT11(uVar152,(char)uVar1) + auVar89._0_2_;
  sVar129 = auVar20._0_2_ + auVar89._2_2_;
  sVar130 = auVar21._0_2_ + auVar89._4_2_;
  sVar131 = (short)Var9 + auVar89._6_2_;
  sVar132 = auVar74._8_2_ + auVar89._8_2_;
  sVar133 = auVar76._10_2_ + auVar89._10_2_;
  sVar134 = auVar78._12_2_ + auVar89._12_2_;
  sVar135 = auVar79._14_2_ + auVar89._14_2_;
  *(uint64_t *)((int64_t)(param_3 * 6) + (int64_t)param_2) =
       CONCAT17((0 < sVar135) * (sVar135 < 0x100) * (char)sVar135 - (0xff < sVar135),
                CONCAT16((0 < sVar134) * (sVar134 < 0x100) * (char)sVar134 - (0xff < sVar134),
                         CONCAT15((0 < sVar133) * (sVar133 < 0x100) * (char)sVar133 -
                                  (0xff < sVar133),
                                  CONCAT14((0 < sVar132) * (sVar132 < 0x100) * (char)sVar132 -
                                           (0xff < sVar132),
                                           CONCAT13((0 < sVar131) * (sVar131 < 0x100) *
                                                    (char)sVar131 - (0xff < sVar131),
                                                    CONCAT12((0 < sVar130) * (sVar130 < 0x100) *
                                                             (char)sVar130 - (0xff < sVar130),
                                                             CONCAT11((0 < sVar129) *
                                                                      (sVar129 < 0x100) *
                                                                      (char)sVar129 -
                                                                      (0xff < sVar129),
                                                                      (0 < sVar126) *
                                                                      (sVar126 < 0x100) *
                                                                      (char)sVar126 -
                                                                      (0xff < sVar126))))))));
  uVar1 = *(uint64_t *)((int64_t)(param_3 * 7) + (int64_t)param_2);
  auVar87._8_6_ = 0;
  auVar87._0_8_ = uVar1;
  auVar87[0xe] = (char)(uVar1 >> 0x38);
  auVar87[0xf] = uVar159;
  auVar86._14_2_ = auVar87._14_2_;
  auVar86._8_5_ = 0;
  auVar86._0_8_ = uVar1;
  auVar86[0xd] = uVar158;
  auVar85._13_3_ = auVar86._13_3_;
  auVar85._8_4_ = 0;
  auVar85._0_8_ = uVar1;
  auVar85[0xc] = (char)(uVar1 >> 0x30);
  auVar84._12_4_ = auVar85._12_4_;
  auVar84._8_3_ = 0;
  auVar84._0_8_ = uVar1;
  auVar84[0xb] = uVar157;
  auVar83._11_5_ = auVar84._11_5_;
  auVar83._8_2_ = 0;
  auVar83._0_8_ = uVar1;
  auVar83[10] = (char)(uVar1 >> 0x28);
  auVar82._10_6_ = auVar83._10_6_;
  auVar82[8] = 0;
  auVar82._0_8_ = uVar1;
  auVar82[9] = uVar156;
  auVar81._9_7_ = auVar82._9_7_;
  auVar81[8] = (char)(uVar1 >> 0x20);
  auVar81._0_8_ = uVar1;
  Var9 = CONCAT91(CONCAT81(auVar81._8_8_,uVar155),(char)(uVar1 >> 0x18));
  auVar23._2_10_ = Var9;
  auVar23[1] = uVar154;
  auVar23[0] = (char)(uVar1 >> 0x10);
  auVar22._2_12_ = auVar23;
  auVar22[1] = uVar153;
  auVar22[0] = (char)(uVar1 >> 8);
  sVar126 = CONCAT11(uVar152,(char)uVar1) + auVar114._0_2_;
  sVar129 = auVar22._0_2_ + auVar114._2_2_;
  sVar130 = auVar23._0_2_ + auVar114._4_2_;
  sVar131 = (short)Var9 + auVar114._6_2_;
  sVar132 = auVar81._8_2_ + auVar114._8_2_;
  sVar133 = auVar83._10_2_ + auVar114._10_2_;
  sVar134 = auVar85._12_2_ + auVar114._12_2_;
  sVar135 = auVar86._14_2_ + auVar114._14_2_;
  *(uint64_t *)((int64_t)(param_3 * 7) + (int64_t)param_2) =
       CONCAT17((0 < sVar135) * (sVar135 < 0x100) * (char)sVar135 - (0xff < sVar135),
                CONCAT16((0 < sVar134) * (sVar134 < 0x100) * (char)sVar134 - (0xff < sVar134),
                         CONCAT15((0 < sVar133) * (sVar133 < 0x100) * (char)sVar133 -
                                  (0xff < sVar133),
                                  CONCAT14((0 < sVar132) * (sVar132 < 0x100) * (char)sVar132 -
                                           (0xff < sVar132),
                                           CONCAT13((0 < sVar131) * (sVar131 < 0x100) *
                                                    (char)sVar131 - (0xff < sVar131),
                                                    CONCAT12((0 < sVar130) * (sVar130 < 0x100) *
                                                             (char)sVar130 - (0xff < sVar130),
                                                             CONCAT11((0 < sVar129) *
                                                                      (sVar129 < 0x100) *
                                                                      (char)sVar129 -
                                                                      (0xff < sVar129),
                                                                      (0 < sVar126) *
                                                                      (sVar126 < 0x100) *
                                                                      (char)sVar126 -
                                                                      (0xff < sVar126))))))));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





