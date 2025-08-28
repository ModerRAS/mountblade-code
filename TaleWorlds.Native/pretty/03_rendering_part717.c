#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part717.c - 4 个函数

// 函数: void FUN_18067c470(void)
void FUN_18067c470(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180683f90(int8_t (*param_1) [16],int8_t (*param_2) [16],int param_3)
void FUN_180683f90(int8_t (*param_1) [16],int8_t (*param_2) [16],int param_3)

{
  int8_t auVar1 [12];
  int8_t auVar2 [12];
  int8_t auVar3 [12];
  int8_t auVar4 [12];
  longlong lVar5;
  int8_t auVar6 [16];
  int8_t auVar7 [16];
  int8_t auVar10 [16];
  short sVar11;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  int8_t auVar12 [16];
  int8_t auVar13 [16];
  int8_t auVar14 [16];
  int8_t auVar15 [16];
  short sVar23;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  int8_t auVar24 [16];
  int8_t auVar25 [16];
  int8_t auVar26 [16];
  int8_t auVar27 [16];
  short sVar37;
  short sVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  int8_t auVar38 [16];
  int8_t auVar39 [16];
  int8_t auVar40 [16];
  int8_t auVar44 [16];
  short sVar58;
  int8_t auVar52 [16];
  int8_t auVar53 [16];
  int8_t auVar54 [16];
  int8_t auVar55 [16];
  int8_t auVar56 [16];
  int8_t auVar57 [16];
  short sVar59;
  short sVar65;
  short sVar66;
  short sVar67;
  short sVar68;
  short sVar69;
  short sVar70;
  short sVar71;
  short sVar72;
  int8_t auVar60 [16];
  int8_t auVar61 [16];
  int8_t auVar62 [16];
  int8_t auVar63 [16];
  int8_t auVar64 [16];
  int32_t uVar73;
  int8_t auVar75 [16];
  int8_t auVar76 [16];
  int8_t auVar77 [16];
  int8_t auVar79 [16];
  int32_t uVar80;
  int8_t auVar82 [16];
  int8_t auVar83 [16];
  int8_t auVar84 [16];
  int8_t auVar86 [16];
  int32_t uVar87;
  int8_t auVar89 [16];
  int8_t auVar90 [16];
  int8_t auVar91 [16];
  int8_t auVar93 [16];
  short sVar94;
  short sVar104;
  short sVar105;
  short sVar106;
  short sVar107;
  short sVar108;
  short sVar109;
  int8_t auVar95 [16];
  short sVar110;
  int8_t auVar96 [16];
  int8_t auVar97 [16];
  int8_t auVar98 [16];
  int8_t auVar102 [16];
  int8_t auVar103 [16];
  int32_t uVar111;
  int8_t auVar113 [16];
  int8_t auVar114 [16];
  int8_t auVar115 [16];
  int8_t auVar117 [16];
  int8_t auVar118 [16];
  short sVar124;
  int8_t auVar119 [16];
  int8_t auVar120 [16];
  int8_t auVar121 [16];
  int8_t auVar122 [16];
  int8_t auVar123 [16];
  int8_t auVar125 [16];
  int8_t auVar126 [16];
  short sVar127;
  short sVar130;
  short sVar131;
  short sVar132;
  short sVar133;
  short sVar134;
  short sVar135;
  int8_t auVar128 [16];
  short sVar136;
  int8_t auVar129 [16];
  int8_t auVar8 [16];
  int8_t auVar9 [16];
  int8_t auVar28 [16];
  int8_t auVar29 [16];
  int8_t auVar41 [16];
  int8_t auVar42 [16];
  int8_t auVar43 [16];
  int8_t auVar74 [12];
  int8_t auVar78 [16];
  int8_t auVar81 [12];
  int8_t auVar85 [16];
  int8_t auVar88 [12];
  int8_t auVar92 [16];
  int8_t auVar99 [16];
  int8_t auVar100 [16];
  int8_t auVar101 [16];
  int8_t auVar112 [12];
  int8_t auVar116 [16];
  
  auVar128 = psllw(*param_1,2);
  auVar119 = psllw(*(int8_t (*) [16])(*param_1 + (longlong)param_3 * 2),2);
  auVar125 = psllw(*(int8_t (*) [16])(*param_1 + (longlong)(param_3 * 2) * 2),2);
  auVar95 = psllw(*(int8_t (*) [16])(*param_1 + (longlong)(param_3 * 3) * 2),2);
  auVar75 = psllw(*(int8_t (*) [16])(*param_1 + (longlong)(param_3 * 4) * 2),2);
  auVar52 = psllw(*(int8_t (*) [16])(*param_1 + (longlong)(param_3 * 5) * 2),2);
  auVar82 = psllw(*(int8_t (*) [16])(*param_1 + (longlong)(param_3 * 6) * 2),2);
  lVar5 = 2;
  auVar113 = psllw(*(int8_t (*) [16])(*param_1 + (longlong)(param_3 * 7) * 2),2);
  do {
    sVar59 = auVar82._0_2_ + auVar119._0_2_;
    sVar65 = auVar82._2_2_ + auVar119._2_2_;
    sVar66 = auVar82._4_2_ + auVar119._4_2_;
    sVar67 = auVar82._6_2_ + auVar119._6_2_;
    sVar69 = auVar82._8_2_ + auVar119._8_2_;
    sVar70 = auVar82._10_2_ + auVar119._10_2_;
    sVar71 = auVar82._12_2_ + auVar119._12_2_;
    sVar72 = auVar82._14_2_ + auVar119._14_2_;
    sVar11 = auVar52._0_2_ + auVar125._0_2_;
    sVar16 = auVar52._2_2_ + auVar125._2_2_;
    sVar17 = auVar52._4_2_ + auVar125._4_2_;
    sVar18 = auVar52._6_2_ + auVar125._6_2_;
    sVar19 = auVar52._8_2_ + auVar125._8_2_;
    sVar20 = auVar52._10_2_ + auVar125._10_2_;
    sVar21 = auVar52._12_2_ + auVar125._12_2_;
    sVar22 = auVar52._14_2_ + auVar125._14_2_;
    sVar124 = auVar119._6_2_ - auVar82._6_2_;
    sVar23 = auVar75._0_2_ + auVar95._0_2_;
    sVar30 = auVar75._2_2_ + auVar95._2_2_;
    sVar31 = auVar75._4_2_ + auVar95._4_2_;
    sVar32 = auVar75._6_2_ + auVar95._6_2_;
    sVar33 = auVar75._8_2_ + auVar95._8_2_;
    sVar34 = auVar75._10_2_ + auVar95._10_2_;
    sVar35 = auVar75._12_2_ + auVar95._12_2_;
    sVar36 = auVar75._14_2_ + auVar95._14_2_;
    sVar37 = auVar113._0_2_ + auVar128._0_2_;
    sVar45 = auVar113._2_2_ + auVar128._2_2_;
    sVar46 = auVar113._4_2_ + auVar128._4_2_;
    sVar47 = auVar113._6_2_ + auVar128._6_2_;
    sVar48 = auVar113._8_2_ + auVar128._8_2_;
    sVar49 = auVar113._10_2_ + auVar128._10_2_;
    sVar50 = auVar113._12_2_ + auVar128._12_2_;
    sVar51 = auVar113._14_2_ + auVar128._14_2_;
    sVar94 = auVar95._0_2_ - auVar75._0_2_;
    sVar104 = auVar95._2_2_ - auVar75._2_2_;
    sVar105 = auVar95._4_2_ - auVar75._4_2_;
    sVar106 = auVar95._6_2_ - auVar75._6_2_;
    sVar107 = auVar95._8_2_ - auVar75._8_2_;
    sVar108 = auVar95._10_2_ - auVar75._10_2_;
    sVar109 = auVar95._12_2_ - auVar75._12_2_;
    sVar110 = auVar95._14_2_ - auVar75._14_2_;
    sVar58 = sVar32 + sVar47;
    sVar68 = sVar67 - sVar18;
    sVar127 = auVar128._0_2_ - auVar113._0_2_;
    sVar130 = auVar128._2_2_ - auVar113._2_2_;
    sVar131 = auVar128._4_2_ - auVar113._4_2_;
    sVar132 = auVar128._6_2_ - auVar113._6_2_;
    sVar133 = auVar128._8_2_ - auVar113._8_2_;
    sVar134 = auVar128._10_2_ - auVar113._10_2_;
    sVar135 = auVar128._12_2_ - auVar113._12_2_;
    sVar136 = auVar128._14_2_ - auVar113._14_2_;
    auVar89._8_8_ =
         (uint64_t)
         (CONCAT64(CONCAT42(CONCAT22(sVar18 + sVar67,sVar58),sVar17 + sVar66),
                   CONCAT22(sVar31 + sVar46,sVar58)) >> 0x10);
    auVar89._6_2_ = sVar16 + sVar65;
    auVar89._4_2_ = sVar30 + sVar45;
    auVar89._2_2_ = sVar11 + sVar59;
    auVar89._0_2_ = sVar23 + sVar37;
    auVar84._2_2_ = sVar19 + sVar69;
    auVar84._0_2_ = sVar33 + sVar48;
    auVar84._4_2_ = sVar34 + sVar49;
    auVar84._6_2_ = sVar20 + sVar70;
    auVar84._8_2_ = sVar35 + sVar50;
    auVar84._10_2_ = sVar21 + sVar71;
    auVar84._12_2_ = sVar36 + sVar51;
    auVar84._14_2_ = sVar22 + sVar72;
    auVar115._8_8_ =
         (uint64_t)
         (CONCAT64(CONCAT42(CONCAT22(sVar47 - sVar32,sVar68),sVar46 - sVar31),
                   CONCAT22(sVar66 - sVar17,sVar68)) >> 0x10);
    auVar115._6_2_ = sVar45 - sVar30;
    auVar115._4_2_ = sVar65 - sVar16;
    auVar115._2_2_ = sVar37 - sVar23;
    auVar115._0_2_ = sVar59 - sVar11;
    auVar75 = pmaddwd(auVar84,render_system_config);
    auVar95 = pmaddwd(auVar115,render_system_config);
    auVar113 = pmaddwd(auVar115,render_system_config);
    auVar60._2_2_ = sVar48 - sVar33;
    auVar60._0_2_ = sVar69 - sVar19;
    auVar60._4_2_ = sVar70 - sVar20;
    auVar60._6_2_ = sVar49 - sVar34;
    auVar60._8_2_ = sVar71 - sVar21;
    auVar60._10_2_ = sVar50 - sVar35;
    auVar60._12_2_ = sVar72 - sVar22;
    auVar60._14_2_ = sVar51 - sVar36;
    auVar77._8_8_ =
         (uint64_t)
         (CONCAT64(CONCAT42(CONCAT22(auVar125._6_2_ - auVar52._6_2_,sVar124),
                            auVar125._4_2_ - auVar52._4_2_),
                   CONCAT22(auVar119._4_2_ - auVar82._4_2_,sVar124)) >> 0x10);
    auVar77._6_2_ = auVar125._2_2_ - auVar52._2_2_;
    auVar77._4_2_ = auVar119._2_2_ - auVar82._2_2_;
    auVar77._2_2_ = auVar125._0_2_ - auVar52._0_2_;
    auVar77._0_2_ = auVar119._0_2_ - auVar82._0_2_;
    auVar14._0_4_ = auVar75._0_4_ + 0x2000 >> 0xe;
    auVar14._4_4_ = auVar75._4_4_ + 0x2000 >> 0xe;
    auVar14._8_4_ = auVar75._8_4_ + 0x2000 >> 0xe;
    auVar14._12_4_ = auVar75._12_4_ + 0x2000 >> 0xe;
    auVar75 = pmaddwd(auVar77,render_system_config);
    auVar128 = pmaddwd(auVar89,render_system_config);
    auVar120._2_2_ = auVar125._8_2_ - auVar52._8_2_;
    auVar120._0_2_ = auVar119._8_2_ - auVar82._8_2_;
    auVar120._4_2_ = auVar119._10_2_ - auVar82._10_2_;
    auVar120._6_2_ = auVar125._10_2_ - auVar52._10_2_;
    auVar120._8_2_ = auVar119._12_2_ - auVar82._12_2_;
    auVar120._10_2_ = auVar125._12_2_ - auVar52._12_2_;
    auVar120._12_2_ = auVar119._14_2_ - auVar82._14_2_;
    auVar120._14_2_ = auVar125._14_2_ - auVar52._14_2_;
    auVar52 = pmaddwd(auVar84,render_system_config);
    auVar119 = pmaddwd(auVar89,render_system_config);
    auVar82 = pmaddwd(auVar77,render_system_config);
    auVar76._0_4_ = auVar95._0_4_ + 0x2000 >> 0xe;
    auVar76._4_4_ = auVar95._4_4_ + 0x2000 >> 0xe;
    auVar76._8_4_ = auVar95._8_4_ + 0x2000 >> 0xe;
    auVar76._12_4_ = auVar95._12_4_ + 0x2000 >> 0xe;
    auVar12._0_4_ = auVar75._0_4_ + 0x2000 >> 0xe;
    auVar12._4_4_ = auVar75._4_4_ + 0x2000 >> 0xe;
    auVar12._8_4_ = auVar75._8_4_ + 0x2000 >> 0xe;
    auVar12._12_4_ = auVar75._12_4_ + 0x2000 >> 0xe;
    auVar90._0_4_ = auVar128._0_4_ + 0x2000 >> 0xe;
    auVar90._4_4_ = auVar128._4_4_ + 0x2000 >> 0xe;
    auVar90._8_4_ = auVar128._8_4_ + 0x2000 >> 0xe;
    auVar90._12_4_ = auVar128._12_4_ + 0x2000 >> 0xe;
    auVar91._0_4_ = auVar52._0_4_ + 0x2000 >> 0xe;
    auVar91._4_4_ = auVar52._4_4_ + 0x2000 >> 0xe;
    auVar91._8_4_ = auVar52._8_4_ + 0x2000 >> 0xe;
    auVar91._12_4_ = auVar52._12_4_ + 0x2000 >> 0xe;
    auVar114._0_4_ = auVar119._0_4_ + 0x2000 >> 0xe;
    auVar114._4_4_ = auVar119._4_4_ + 0x2000 >> 0xe;
    auVar114._8_4_ = auVar119._8_4_ + 0x2000 >> 0xe;
    auVar114._12_4_ = auVar119._12_4_ + 0x2000 >> 0xe;
    auVar115 = packssdw(auVar114,auVar14);
    auVar52 = pmaddwd(auVar60,render_system_config);
    auVar75 = pmaddwd(auVar60,render_system_config);
    auVar24._0_4_ = auVar82._0_4_ + 0x2000 >> 0xe;
    auVar24._4_4_ = auVar82._4_4_ + 0x2000 >> 0xe;
    auVar24._8_4_ = auVar82._8_4_ + 0x2000 >> 0xe;
    auVar24._12_4_ = auVar82._12_4_ + 0x2000 >> 0xe;
    auVar83._0_4_ = auVar113._0_4_ + 0x2000 >> 0xe;
    auVar83._4_4_ = auVar113._4_4_ + 0x2000 >> 0xe;
    auVar83._8_4_ = auVar113._8_4_ + 0x2000 >> 0xe;
    auVar83._12_4_ = auVar113._12_4_ + 0x2000 >> 0xe;
    auVar91 = packssdw(auVar90,auVar91);
    auVar26._0_4_ = auVar52._0_4_ + 0x2000 >> 0xe;
    auVar26._4_4_ = auVar52._4_4_ + 0x2000 >> 0xe;
    auVar26._8_4_ = auVar52._8_4_ + 0x2000 >> 0xe;
    auVar26._12_4_ = auVar52._12_4_ + 0x2000 >> 0xe;
    auVar77 = packssdw(auVar76,auVar26);
    auVar52 = pmaddwd(auVar120,render_system_config);
    auVar82 = pmaddwd(auVar120,render_system_config);
    auVar61._0_4_ = auVar75._0_4_ + 0x2000 >> 0xe;
    auVar61._4_4_ = auVar75._4_4_ + 0x2000 >> 0xe;
    auVar61._8_4_ = auVar75._8_4_ + 0x2000 >> 0xe;
    auVar61._12_4_ = auVar75._12_4_ + 0x2000 >> 0xe;
    auVar84 = packssdw(auVar83,auVar61);
    auVar55._0_4_ = auVar52._0_4_ + 0x2000 >> 0xe;
    auVar55._4_4_ = auVar52._4_4_ + 0x2000 >> 0xe;
    auVar55._8_4_ = auVar52._8_4_ + 0x2000 >> 0xe;
    auVar55._12_4_ = auVar52._12_4_ + 0x2000 >> 0xe;
    auVar52 = packssdw(auVar12,auVar55);
    auVar121._0_4_ = auVar82._0_4_ + 0x2000 >> 0xe;
    auVar121._4_4_ = auVar82._4_4_ + 0x2000 >> 0xe;
    auVar121._8_4_ = auVar82._8_4_ + 0x2000 >> 0xe;
    auVar121._12_4_ = auVar82._12_4_ + 0x2000 >> 0xe;
    auVar82 = packssdw(auVar24,auVar121);
    sVar11 = auVar52._6_2_ + sVar106;
    sVar106 = sVar106 - auVar52._6_2_;
    auVar53._8_8_ =
         (uint64_t)
         (CONCAT64(CONCAT42(CONCAT22(sVar132 - auVar82._6_2_,sVar106),sVar131 - auVar82._4_2_),
                   CONCAT22(sVar105 - auVar52._4_2_,sVar106)) >> 0x10);
    auVar53._6_2_ = sVar130 - auVar82._2_2_;
    auVar53._4_2_ = sVar104 - auVar52._2_2_;
    auVar53._2_2_ = sVar127 - auVar82._0_2_;
    auVar53._0_2_ = sVar94 - auVar52._0_2_;
    auVar96._2_2_ = sVar133 - auVar82._8_2_;
    auVar96._0_2_ = sVar107 - auVar52._8_2_;
    auVar96._4_2_ = sVar108 - auVar52._10_2_;
    auVar96._6_2_ = sVar134 - auVar82._10_2_;
    auVar96._8_2_ = sVar109 - auVar52._12_2_;
    auVar96._10_2_ = sVar135 - auVar82._12_2_;
    auVar96._12_2_ = sVar110 - auVar52._14_2_;
    auVar96._14_2_ = sVar136 - auVar82._14_2_;
    auVar113 = pmaddwd(auVar53,render_system_config);
    auVar75 = pmaddwd(auVar53,render_system_config);
    auVar38._2_2_ = auVar82._8_2_ + sVar133;
    auVar38._0_2_ = auVar52._8_2_ + sVar107;
    auVar38._4_2_ = auVar52._10_2_ + sVar108;
    auVar38._6_2_ = auVar82._10_2_ + sVar134;
    auVar38._8_2_ = auVar52._12_2_ + sVar109;
    auVar38._10_2_ = auVar82._12_2_ + sVar135;
    auVar38._12_2_ = auVar52._14_2_ + sVar110;
    auVar38._14_2_ = auVar82._14_2_ + sVar136;
    auVar62._8_8_ =
         (uint64_t)
         (CONCAT64(CONCAT42(CONCAT22(auVar82._6_2_ + sVar132,sVar11),auVar82._4_2_ + sVar131),
                   CONCAT22(auVar52._4_2_ + sVar105,sVar11)) >> 0x10);
    auVar62._6_2_ = auVar82._2_2_ + sVar130;
    auVar62._4_2_ = auVar52._2_2_ + sVar104;
    auVar62._2_2_ = auVar82._0_2_ + sVar127;
    auVar62._0_2_ = auVar52._0_2_ + sVar94;
    auVar52 = pmaddwd(auVar38,render_system_config);
    auVar82 = pmaddwd(auVar62,render_system_config);
    auVar95 = pmaddwd(auVar38,render_system_config);
    auVar119 = pmaddwd(auVar62,render_system_config);
    auVar54._0_4_ = auVar113._0_4_ + 0x2000 >> 0xe;
    auVar54._4_4_ = auVar113._4_4_ + 0x2000 >> 0xe;
    auVar54._8_4_ = auVar113._8_4_ + 0x2000 >> 0xe;
    auVar54._12_4_ = auVar113._12_4_ + 0x2000 >> 0xe;
    auVar13._0_4_ = auVar75._0_4_ + 0x2000 >> 0xe;
    auVar13._4_4_ = auVar75._4_4_ + 0x2000 >> 0xe;
    auVar13._8_4_ = auVar75._8_4_ + 0x2000 >> 0xe;
    auVar13._12_4_ = auVar75._12_4_ + 0x2000 >> 0xe;
    auVar64._0_4_ = auVar52._0_4_ + 0x2000 >> 0xe;
    auVar64._4_4_ = auVar52._4_4_ + 0x2000 >> 0xe;
    auVar64._8_4_ = auVar52._8_4_ + 0x2000 >> 0xe;
    auVar64._12_4_ = auVar52._12_4_ + 0x2000 >> 0xe;
    auVar25._0_4_ = auVar82._0_4_ + 0x2000 >> 0xe;
    auVar25._4_4_ = auVar82._4_4_ + 0x2000 >> 0xe;
    auVar25._8_4_ = auVar82._8_4_ + 0x2000 >> 0xe;
    auVar25._12_4_ = auVar82._12_4_ + 0x2000 >> 0xe;
    auVar26 = packssdw(auVar25,auVar64);
    auVar75 = pmaddwd(auVar96,render_system_config);
    auVar52 = pmaddwd(auVar96,render_system_config);
    auVar39._0_4_ = auVar95._0_4_ + 0x2000 >> 0xe;
    auVar39._4_4_ = auVar95._4_4_ + 0x2000 >> 0xe;
    auVar39._8_4_ = auVar95._8_4_ + 0x2000 >> 0xe;
    auVar39._12_4_ = auVar95._12_4_ + 0x2000 >> 0xe;
    auVar63._0_4_ = auVar119._0_4_ + 0x2000 >> 0xe;
    auVar63._4_4_ = auVar119._4_4_ + 0x2000 >> 0xe;
    auVar63._8_4_ = auVar119._8_4_ + 0x2000 >> 0xe;
    auVar63._12_4_ = auVar119._12_4_ + 0x2000 >> 0xe;
    auVar64 = packssdw(auVar63,auVar39);
    auVar97._0_4_ = auVar75._0_4_ + 0x2000 >> 0xe;
    auVar97._4_4_ = auVar75._4_4_ + 0x2000 >> 0xe;
    auVar97._8_4_ = auVar75._8_4_ + 0x2000 >> 0xe;
    auVar97._12_4_ = auVar75._12_4_ + 0x2000 >> 0xe;
    auVar55 = packssdw(auVar54,auVar97);
    auVar6._0_4_ = auVar52._0_4_ + 0x2000 >> 0xe;
    auVar6._4_4_ = auVar52._4_4_ + 0x2000 >> 0xe;
    auVar6._8_4_ = auVar52._8_4_ + 0x2000 >> 0xe;
    auVar6._12_4_ = auVar52._12_4_ + 0x2000 >> 0xe;
    auVar14 = packssdw(auVar13,auVar6);
    auVar9._0_12_ = auVar77._0_12_;
    auVar9._12_2_ = auVar77._6_2_;
    auVar9._14_2_ = auVar55._6_2_;
    auVar8._12_4_ = auVar9._12_4_;
    auVar8._0_10_ = auVar77._0_10_;
    auVar8._10_2_ = auVar55._4_2_;
    auVar7._10_6_ = auVar8._10_6_;
    auVar7._0_8_ = auVar77._0_8_;
    auVar7._8_2_ = auVar77._4_2_;
    auVar1._4_8_ = auVar7._8_8_;
    auVar1._2_2_ = auVar55._2_2_;
    auVar1._0_2_ = auVar77._2_2_;
    auVar128._6_2_ = auVar55._0_2_;
    auVar128._4_2_ = auVar77._0_2_;
    uVar73 = CONCAT22(auVar55._8_2_,auVar77._8_2_);
    auVar74._0_8_ = CONCAT26(auVar55._10_2_,CONCAT24(auVar77._10_2_,uVar73));
    auVar74._8_2_ = auVar77._12_2_;
    auVar74._10_2_ = auVar55._12_2_;
    auVar78._12_2_ = auVar77._14_2_;
    auVar78._0_12_ = auVar74;
    auVar78._14_2_ = auVar55._14_2_;
    auVar101._0_12_ = auVar115._0_12_;
    auVar101._12_2_ = auVar115._6_2_;
    auVar101._14_2_ = auVar26._6_2_;
    auVar100._12_4_ = auVar101._12_4_;
    auVar100._0_10_ = auVar115._0_10_;
    auVar100._10_2_ = auVar26._4_2_;
    auVar99._10_6_ = auVar100._10_6_;
    auVar99._0_8_ = auVar115._0_8_;
    auVar99._8_2_ = auVar115._4_2_;
    auVar2._4_8_ = auVar99._8_8_;
    auVar2._2_2_ = auVar26._2_2_;
    auVar2._0_2_ = auVar115._2_2_;
    auVar98._0_4_ = CONCAT22(auVar26._0_2_,auVar115._0_2_);
    auVar98._4_12_ = auVar2;
    uVar111 = CONCAT22(auVar26._8_2_,auVar115._8_2_);
    auVar112._0_8_ = CONCAT26(auVar26._10_2_,CONCAT24(auVar115._10_2_,uVar111));
    auVar112._8_2_ = auVar115._12_2_;
    auVar112._10_2_ = auVar26._12_2_;
    auVar116._12_2_ = auVar115._14_2_;
    auVar116._0_12_ = auVar112;
    auVar116._14_2_ = auVar26._14_2_;
    auVar43._0_12_ = auVar91._0_12_;
    auVar43._12_2_ = auVar91._6_2_;
    auVar43._14_2_ = auVar14._6_2_;
    auVar42._12_4_ = auVar43._12_4_;
    auVar42._0_10_ = auVar91._0_10_;
    auVar42._10_2_ = auVar14._4_2_;
    auVar41._10_6_ = auVar42._10_6_;
    auVar41._0_8_ = auVar91._0_8_;
    auVar41._8_2_ = auVar91._4_2_;
    auVar3._4_8_ = auVar41._8_8_;
    auVar3._2_2_ = auVar14._2_2_;
    auVar3._0_2_ = auVar91._2_2_;
    auVar40._0_4_ = CONCAT22(auVar14._0_2_,auVar91._0_2_);
    auVar40._4_12_ = auVar3;
    auVar122._0_8_ = auVar98._0_8_;
    auVar122._8_4_ = auVar2._0_4_;
    auVar122._12_4_ = auVar1._0_4_;
    auVar128._0_4_ = auVar98._0_4_;
    uVar80 = CONCAT22(auVar64._8_2_,auVar84._8_2_);
    auVar81._0_8_ = CONCAT26(auVar64._10_2_,CONCAT24(auVar84._10_2_,uVar80));
    auVar81._8_2_ = auVar84._12_2_;
    auVar81._10_2_ = auVar64._12_2_;
    auVar85._12_2_ = auVar84._14_2_;
    auVar85._0_12_ = auVar81;
    auVar85._14_2_ = auVar64._14_2_;
    auVar102._0_8_ = CONCAT44(auVar7._8_4_,auVar99._8_4_);
    auVar102._8_4_ = auVar100._12_4_;
    auVar102._12_4_ = auVar8._12_4_;
    auVar117._0_8_ = CONCAT44(auVar74._8_4_,auVar112._8_4_);
    auVar117._8_4_ = auVar116._12_4_;
    auVar117._12_4_ = auVar78._12_4_;
    uVar87 = CONCAT22(auVar14._8_2_,auVar91._8_2_);
    auVar88._0_8_ = CONCAT26(auVar14._10_2_,CONCAT24(auVar91._10_2_,uVar87));
    auVar88._8_2_ = auVar91._12_2_;
    auVar88._10_2_ = auVar14._12_2_;
    auVar92._12_2_ = auVar91._14_2_;
    auVar92._0_12_ = auVar88;
    auVar92._14_2_ = auVar14._14_2_;
    auVar56._8_4_ = (int)((ulonglong)auVar112._0_8_ >> 0x20);
    auVar56._0_8_ = auVar112._0_8_;
    auVar56._12_4_ = (int)((ulonglong)auVar74._0_8_ >> 0x20);
    auVar75._4_4_ = uVar73;
    auVar75._0_4_ = uVar111;
    auVar15._8_4_ = (int)((ulonglong)auVar88._0_8_ >> 0x20);
    auVar15._0_8_ = auVar88._0_8_;
    auVar15._12_4_ = (int)((ulonglong)auVar81._0_8_ >> 0x20);
    auVar75._12_4_ = uVar80;
    auVar75._8_4_ = uVar87;
    auVar93._0_8_ = CONCAT44(auVar81._8_4_,auVar88._8_4_);
    auVar93._8_4_ = auVar92._12_4_;
    auVar93._12_4_ = auVar85._12_4_;
    auVar29._0_12_ = auVar84._0_12_;
    auVar29._12_2_ = auVar84._6_2_;
    auVar29._14_2_ = auVar64._6_2_;
    auVar28._12_4_ = auVar29._12_4_;
    auVar28._0_10_ = auVar84._0_10_;
    auVar28._10_2_ = auVar64._4_2_;
    auVar27._10_6_ = auVar28._10_6_;
    auVar27._0_8_ = auVar84._0_8_;
    auVar27._8_2_ = auVar84._4_2_;
    auVar4._4_8_ = auVar27._8_8_;
    auVar4._2_2_ = auVar64._2_2_;
    auVar4._0_2_ = auVar84._2_2_;
    auVar128._14_2_ = auVar64._0_2_;
    auVar128._12_2_ = auVar84._0_2_;
    auVar10._0_8_ = auVar40._0_8_;
    auVar10._8_4_ = auVar3._0_4_;
    auVar10._12_4_ = auVar4._0_4_;
    auVar128._8_4_ = auVar40._0_4_;
    auVar44._0_8_ = CONCAT44(auVar27._8_4_,auVar41._8_4_);
    auVar44._8_4_ = auVar42._12_4_;
    auVar44._12_4_ = auVar28._12_4_;
    auVar119._8_8_ = auVar10._8_8_;
    auVar119._0_8_ = auVar122._8_8_;
    auVar125._8_8_ = auVar44._0_8_;
    auVar125._0_8_ = auVar102._0_8_;
    auVar95._8_8_ = auVar44._8_8_;
    auVar95._0_8_ = auVar102._8_8_;
    auVar52._8_8_ = auVar15._8_8_;
    auVar52._0_8_ = auVar56._8_8_;
    auVar82._8_8_ = auVar93._0_8_;
    auVar82._0_8_ = auVar117._0_8_;
    auVar113._8_8_ = auVar93._8_8_;
    auVar113._0_8_ = auVar117._8_8_;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  auVar128 = psraw(auVar128,0xf);
  auVar129._0_2_ = auVar115._0_2_ - auVar128._0_2_;
  auVar129._2_2_ = auVar26._0_2_ - auVar128._2_2_;
  auVar129._4_2_ = auVar77._0_2_ - auVar128._4_2_;
  auVar129._6_2_ = auVar55._0_2_ - auVar128._6_2_;
  auVar129._8_2_ = auVar91._0_2_ - auVar128._8_2_;
  auVar129._10_2_ = auVar14._0_2_ - auVar128._10_2_;
  auVar129._12_2_ = auVar84._0_2_ - auVar128._12_2_;
  auVar129._14_2_ = auVar64._0_2_ - auVar128._14_2_;
  auVar119 = psraw(auVar119,0xf);
  auVar123._0_2_ = auVar115._2_2_ - auVar119._0_2_;
  auVar123._2_2_ = auVar26._2_2_ - auVar119._2_2_;
  auVar123._4_2_ = auVar77._2_2_ - auVar119._4_2_;
  auVar123._6_2_ = auVar55._2_2_ - auVar119._6_2_;
  auVar123._8_2_ = auVar91._2_2_ - auVar119._8_2_;
  auVar123._10_2_ = auVar14._2_2_ - auVar119._10_2_;
  auVar123._12_2_ = auVar84._2_2_ - auVar119._12_2_;
  auVar123._14_2_ = auVar64._2_2_ - auVar119._14_2_;
  auVar119 = psraw(auVar129,1);
  *param_2 = auVar119;
  auVar119 = psraw(auVar125,0xf);
  auVar126._0_2_ = auVar115._4_2_ - auVar119._0_2_;
  auVar126._2_2_ = auVar26._4_2_ - auVar119._2_2_;
  auVar126._4_2_ = auVar77._4_2_ - auVar119._4_2_;
  auVar126._6_2_ = auVar55._4_2_ - auVar119._6_2_;
  auVar126._8_2_ = auVar91._4_2_ - auVar119._8_2_;
  auVar126._10_2_ = auVar14._4_2_ - auVar119._10_2_;
  auVar126._12_2_ = auVar84._4_2_ - auVar119._12_2_;
  auVar126._14_2_ = auVar64._4_2_ - auVar119._14_2_;
  auVar119 = psraw(auVar123,1);
  param_2[1] = auVar119;
  auVar95 = psraw(auVar95,0xf);
  auVar103._0_2_ = auVar115._6_2_ - auVar95._0_2_;
  auVar103._2_2_ = auVar26._6_2_ - auVar95._2_2_;
  auVar103._4_2_ = auVar77._6_2_ - auVar95._4_2_;
  auVar103._6_2_ = auVar55._6_2_ - auVar95._6_2_;
  auVar103._8_2_ = auVar91._6_2_ - auVar95._8_2_;
  auVar103._10_2_ = auVar14._6_2_ - auVar95._10_2_;
  auVar103._12_2_ = auVar84._6_2_ - auVar95._12_2_;
  auVar103._14_2_ = auVar64._6_2_ - auVar95._14_2_;
  auVar95 = psraw(auVar126,1);
  param_2[2] = auVar95;
  auVar75 = psraw(auVar75,0xf);
  auVar79._0_2_ = auVar115._8_2_ - auVar75._0_2_;
  auVar79._2_2_ = auVar26._8_2_ - auVar75._2_2_;
  auVar79._4_2_ = auVar77._8_2_ - auVar75._4_2_;
  auVar79._6_2_ = auVar55._8_2_ - auVar75._6_2_;
  auVar79._8_2_ = auVar91._8_2_ - auVar75._8_2_;
  auVar79._10_2_ = auVar14._8_2_ - auVar75._10_2_;
  auVar79._12_2_ = auVar84._8_2_ - auVar75._12_2_;
  auVar79._14_2_ = auVar64._8_2_ - auVar75._14_2_;
  auVar75 = psraw(auVar103,1);
  param_2[3] = auVar75;
  auVar52 = psraw(auVar52,0xf);
  auVar57._0_2_ = auVar115._10_2_ - auVar52._0_2_;
  auVar57._2_2_ = auVar26._10_2_ - auVar52._2_2_;
  auVar57._4_2_ = auVar77._10_2_ - auVar52._4_2_;
  auVar57._6_2_ = auVar55._10_2_ - auVar52._6_2_;
  auVar57._8_2_ = auVar91._10_2_ - auVar52._8_2_;
  auVar57._10_2_ = auVar14._10_2_ - auVar52._10_2_;
  auVar57._12_2_ = auVar84._10_2_ - auVar52._12_2_;
  auVar57._14_2_ = auVar64._10_2_ - auVar52._14_2_;
  auVar52 = psraw(auVar79,1);
  param_2[4] = auVar52;
  auVar52 = psraw(auVar82,0xf);
  auVar86._0_2_ = auVar115._12_2_ - auVar52._0_2_;
  auVar86._2_2_ = auVar26._12_2_ - auVar52._2_2_;
  auVar86._4_2_ = auVar77._12_2_ - auVar52._4_2_;
  auVar86._6_2_ = auVar55._12_2_ - auVar52._6_2_;
  auVar86._8_2_ = auVar91._12_2_ - auVar52._8_2_;
  auVar86._10_2_ = auVar14._12_2_ - auVar52._10_2_;
  auVar86._12_2_ = auVar84._12_2_ - auVar52._12_2_;
  auVar86._14_2_ = auVar64._12_2_ - auVar52._14_2_;
  auVar52 = psraw(auVar57,1);
  auVar75 = psraw(auVar86,1);
  param_2[5] = auVar52;
  param_2[6] = auVar75;
  auVar52 = psraw(auVar113,0xf);
  auVar118._0_2_ = auVar115._14_2_ - auVar52._0_2_;
  auVar118._2_2_ = auVar26._14_2_ - auVar52._2_2_;
  auVar118._4_2_ = auVar77._14_2_ - auVar52._4_2_;
  auVar118._6_2_ = auVar55._14_2_ - auVar52._6_2_;
  auVar118._8_2_ = auVar91._14_2_ - auVar52._8_2_;
  auVar118._10_2_ = auVar14._14_2_ - auVar52._10_2_;
  auVar118._12_2_ = auVar84._14_2_ - auVar52._12_2_;
  auVar118._14_2_ = auVar64._14_2_ - auVar52._14_2_;
  auVar52 = psraw(auVar118,1);
  param_2[7] = auVar52;
  return;
}





// 函数: void FUN_1806844a0(void)
void FUN_1806844a0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_18068b080(void)
void FUN_18068b080(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





