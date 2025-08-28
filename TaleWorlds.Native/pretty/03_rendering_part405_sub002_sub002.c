#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part405_sub002_sub002.c - 1 个函数
// 函数: void UISystem_91818(uint64_t param_1,uint64_t param_2)
void UISystem_91818(uint64_t param_1,uint64_t param_2)
{
  int8_t (*pauVar1) [16];
  int32_t uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int64_t lVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int8_t (*unaff_RBP) [16];
  int64_t unaff_RSI;
  uint64_t uVar15;
  uint uVar16;
  uint64_t uVar17;
  uint uVar18;
  int64_t lVar19;
  int64_t unaff_R12;
  int64_t unaff_R14;
  char unaff_R15B;
  uint uVar24;
  int8_t auVar20 [12];
  int8_t auVar21 [16];
  uint uVar25;
  uint uVar26;
  int8_t auVar22 [16];
  int8_t auVar23 [16];
  int8_t auVar27 [16];
  int8_t auVar28 [16];
  int8_t auVar29 [16];
  int8_t auVar30 [16];
  int8_t auVar31 [12];
  float fVar37;
  float fVar40;
  int8_t auVar32 [16];
  int8_t auVar33 [16];
  int8_t auVar34 [16];
  int8_t auVar35 [16];
  int8_t auVar36 [16];
  float fVar41;
  float fVar42;
  float fVar46;
  int8_t in_XMM3 [16];
  float fVar47;
  int8_t auVar43 [16];
  int8_t auVar44 [16];
  int8_t auVar45 [16];
  float fVar48;
  float fVar52;
  float fVar53;
  float fVar54;
  int8_t auVar49 [16];
  int8_t auVar50 [16];
  int8_t auVar51 [16];
  int8_t auVar55 [16];
  int8_t auVar56 [16];
  int8_t auVar57 [16];
  float fVar58;
  float fVar61;
  float fVar62;
  int8_t auVar59 [16];
  int8_t auVar60 [16];
  float fVar63;
  float fVar66;
  float unaff_XMM7_Dc;
  float fVar67;
  float fVar68;
  int8_t auVar64 [16];
  int8_t auVar65 [16];
  float unaff_XMM8_Da;
  float unaff_XMM8_Db;
  int iVar71;
  float unaff_XMM8_Dc;
  int iVar72;
  float unaff_XMM8_Dd;
  int8_t auVar69 [16];
  int8_t auVar70 [16];
  int iVar73;
  uint uVar74;
  uint uVar77;
  int iVar78;
  uint uVar79;
  int iVar80;
  int8_t auVar75 [16];
  uint uVar81;
  int8_t auVar76 [16];
  int iVar82;
  int8_t auVar83 [16];
  int8_t auVar84 [16];
  int8_t auVar85 [16];
  int8_t auVar86 [16];
  int8_t auVar87 [16];
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  int8_t local_var_30 [16];
  int iStack0000000000000040;
  int iStack0000000000000044;
  int iStack0000000000000048;
  int iStack000000000000004c;
  uint local_buffer_50;
  uint local_buffer_54;
  uint local_buffer_58;
  uint local_buffer_5c;
  int8_t local_buffer_60 [16];
  int8_t local_buffer_70 [16];
  float fVar38;
  float fVar39;
  auVar21._4_4_ = unaff_XMM7_Dc;
  auVar21._0_4_ = unaff_XMM7_Dc;
  auVar32._0_4_ = (int)unaff_XMM8_Da >> 3;
  auVar32._4_4_ = (int)unaff_XMM8_Db >> 3;
  auVar32._8_4_ = (int)unaff_XMM8_Dc >> 3;
  auVar32._12_4_ = (int)unaff_XMM8_Dd >> 3;
  uVar15 = (uint64_t)auVar32._0_4_;
  uVar17 = (uint64_t)auVar32._4_4_;
  if ((int)auVar32._4_4_ <= auVar32._12_4_) {
    uVar18 = auVar32._4_4_ * 0x50;
    do {
      uVar16 = uVar18;
      if ((int)auVar32._0_4_ <= auVar32._8_4_) {
        param_2 = (uint64_t)((auVar32._8_4_ - auVar32._0_4_) + 1);
        pfVar12 = (float *)(*(int64_t *)(unaff_RSI + 0x260) + (int64_t)(int)uVar18 * 4 +
                           (int64_t)(int)auVar32._0_4_ * 4);
        do {
          auVar21._8_4_ = unaff_XMM7_Dc;
          auVar21._12_4_ = unaff_XMM7_Dc;
          auVar27._4_12_ = auVar21._4_12_;
          auVar27._0_4_ = -(uint)(*pfVar12 <= unaff_XMM7_Dc);
          in_XMM3 = in_XMM3 | auVar27;
          param_2 = param_2 - 1;
          pfVar12 = pfVar12 + 1;
          uVar16 = auVar32._0_4_;
        } while (param_2 != 0);
      }
      iVar10 = movmskps(uVar16,in_XMM3);
      if (iVar10 != 0) {
        lVar9 = *(int64_t *)(unaff_RSI + 0x200 + unaff_R14 * 8);
        MXCSR = MXCSR | 0x8040;
        uVar18 = 0;
        do {
          if (unaff_R15B == '\0') {
            uVar16 = uVar18 * 3;
            uVar15 = (uint64_t)uVar16;
            param_2 = (uint64_t)(uVar18 + 3);
            pauVar1 = unaff_RBP + (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + uVar15 * 4) + 10;
            fVar58 = *(float *)*pauVar1;
            fVar42 = *(float *)(*pauVar1 + 4);
            fVar37 = *(float *)(*pauVar1 + 8);
            pauVar1 = unaff_RBP +
                      (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar16 + 3) * 4) + 10;
            fVar40 = *(float *)*pauVar1;
            fVar41 = *(float *)(*pauVar1 + 4);
            fVar95 = *(float *)(*pauVar1 + 8);
            pauVar1 = unaff_RBP +
                      (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)((uVar18 + 2) * 3) * 4)
                      + 10;
            fVar61 = *(float *)*pauVar1;
            fVar46 = *(float *)(*pauVar1 + 4);
            fVar39 = *(float *)(*pauVar1 + 8);
            pauVar1 = unaff_RBP +
                      (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)((uVar18 + 3) * 3) * 4)
                      + 10;
            fVar62 = *(float *)*pauVar1;
            fVar47 = *(float *)(*pauVar1 + 4);
            fVar38 = *(float *)(*pauVar1 + 8);
            pauVar1 = unaff_RBP +
                      (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar16 + 1) * 4) + 10;
            fVar63 = *(float *)*pauVar1;
            fVar48 = *(float *)(*pauVar1 + 4);
            fVar88 = *(float *)(*pauVar1 + 8);
            pauVar1 = unaff_RBP +
                      (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar16 + 4) * 4) + 10;
            fVar66 = *(float *)*pauVar1;
            fVar52 = *(float *)(*pauVar1 + 4);
            fVar89 = *(float *)(*pauVar1 + 8);
            pauVar1 = unaff_RBP +
                      (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar16 + 7) * 4) + 10;
            fVar67 = *(float *)*pauVar1;
            fVar53 = *(float *)(*pauVar1 + 4);
            fVar90 = *(float *)(*pauVar1 + 8);
            pauVar1 = unaff_RBP +
                      (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar16 + 10) * 4) + 10
            ;
            fVar68 = *(float *)*pauVar1;
            fVar54 = *(float *)(*pauVar1 + 4);
            fVar91 = *(float *)(*pauVar1 + 8);
            pauVar1 = unaff_RBP +
                      (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar16 + 2) * 4) + 10;
            fVar92 = *(float *)*pauVar1;
            fVar93 = *(float *)(*pauVar1 + 4);
            fVar94 = *(float *)(*pauVar1 + 8);
            auVar20 = SUB1612(unaff_RBP[(uint64_t)
                                        *(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar16 + 5) * 4
                                                 ) + 10],0);
            auVar31 = SUB1612(unaff_RBP[(uint64_t)
                                        *(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar16 + 8) * 4
                                                 ) + 10],0);
            uVar16 = uVar16 + 0xb;
          }
          else {
            uVar24 = uVar18 * 3;
            param_2 = (uint64_t)uVar24;
            uVar15 = (uint64_t)(uVar24 + 3);
            uVar16 = (uVar18 + 3) * 3;
            uVar25 = (uVar18 + 2) * 3;
            uVar17 = (uint64_t)uVar25;
            pauVar1 = unaff_RBP + (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + param_2 * 4) + 10;
            fVar58 = *(float *)*pauVar1;
            fVar42 = *(float *)(*pauVar1 + 4);
            fVar37 = *(float *)(*pauVar1 + 8);
            pauVar1 = unaff_RBP + (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + uVar15 * 4) + 10;
            fVar40 = *(float *)*pauVar1;
            fVar41 = *(float *)(*pauVar1 + 4);
            fVar95 = *(float *)(*pauVar1 + 8);
            pauVar1 = unaff_RBP + (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + uVar17 * 4) + 10;
            fVar61 = *(float *)*pauVar1;
            fVar46 = *(float *)(*pauVar1 + 4);
            fVar39 = *(float *)(*pauVar1 + 8);
            pauVar1 = unaff_RBP +
                      (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)uVar16 * 4) + 10;
            fVar62 = *(float *)*pauVar1;
            fVar47 = *(float *)(*pauVar1 + 4);
            fVar38 = *(float *)(*pauVar1 + 8);
            pauVar1 = unaff_RBP +
                      (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar24 + 2) * 4) + 10;
            fVar63 = *(float *)*pauVar1;
            fVar48 = *(float *)(*pauVar1 + 4);
            fVar88 = *(float *)(*pauVar1 + 8);
            pauVar1 = unaff_RBP +
                      (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar24 + 5) * 4) + 10;
            fVar66 = *(float *)*pauVar1;
            fVar52 = *(float *)(*pauVar1 + 4);
            fVar89 = *(float *)(*pauVar1 + 8);
            pauVar1 = unaff_RBP +
                      (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar25 + 2) * 4) + 10;
            fVar67 = *(float *)*pauVar1;
            fVar53 = *(float *)(*pauVar1 + 4);
            fVar90 = *(float *)(*pauVar1 + 8);
            pauVar1 = unaff_RBP +
                      (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar16 + 2) * 4) + 10;
            fVar68 = *(float *)*pauVar1;
            fVar54 = *(float *)(*pauVar1 + 4);
            fVar91 = *(float *)(*pauVar1 + 8);
            pauVar1 = unaff_RBP +
                      (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar24 + 1) * 4) + 10;
            fVar92 = *(float *)*pauVar1;
            fVar93 = *(float *)(*pauVar1 + 4);
            fVar94 = *(float *)(*pauVar1 + 8);
            auVar20 = SUB1612(unaff_RBP[(uint64_t)
                                        *(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar24 + 4) * 4
                                                 ) + 10],0);
            auVar31 = SUB1612(unaff_RBP[(uint64_t)
                                        *(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar25 + 1) * 4
                                                 ) + 10],0);
            uVar16 = uVar16 + 1;
          }
          auVar87._0_4_ = (int)fVar42;
          auVar87._4_4_ = (int)fVar41;
          auVar87._8_4_ = (int)fVar46;
          auVar87._12_4_ = (int)fVar47;
          pauVar1 = unaff_RBP +
                    (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)uVar16 * 4) + 10;
          fVar42 = *(float *)(*pauVar1 + 8);
          auVar86._0_4_ = (int)fVar48;
          auVar86._4_4_ = (int)fVar52;
          auVar86._8_4_ = (int)fVar53;
          auVar86._12_4_ = (int)fVar54;
          auVar75._0_4_ = (int)fVar58;
          auVar75._4_4_ = (int)fVar40;
          auVar75._8_4_ = (int)fVar61;
          auVar75._12_4_ = (int)fVar62;
          auVar69._0_4_ = (int)fVar63;
          auVar69._4_4_ = (int)fVar66;
          auVar69._8_4_ = (int)fVar67;
          auVar69._12_4_ = (int)fVar68;
          auVar64._0_4_ = (int)fVar92;
          auVar64._4_4_ = (int)auVar20._0_4_;
          auVar64._8_4_ = (int)auVar31._0_4_;
          auVar64._12_4_ = (int)*(float *)*pauVar1;
          auVar83._0_4_ = (int)fVar93;
          auVar83._4_4_ = (int)auVar20._4_4_;
          auVar83._8_4_ = (int)auVar31._4_4_;
          auVar83._12_4_ = (int)*(float *)(*pauVar1 + 4);
          auVar49._0_4_ = auVar75._0_4_ - auVar64._0_4_;
          auVar49._4_4_ = auVar75._4_4_ - auVar64._4_4_;
          auVar49._8_4_ = auVar75._8_4_ - auVar64._8_4_;
          auVar49._12_4_ = auVar75._12_4_ - auVar64._12_4_;
          *(float *)unaff_RBP[0x14] = fVar37;
          *(float *)(unaff_RBP[0x14] + 4) = fVar95;
          *(float *)(unaff_RBP[0x14] + 8) = fVar39;
          *(float *)(unaff_RBP[0x14] + 0xc) = fVar38;
          unaff_RBP[-3] = auVar49;
          *(int *)unaff_RBP[-7] = auVar86._0_4_ - auVar83._0_4_;
          *(int *)(unaff_RBP[-7] + 4) = auVar86._4_4_ - auVar83._4_4_;
          *(int *)(unaff_RBP[-7] + 8) = auVar86._8_4_ - auVar83._8_4_;
          *(int *)(unaff_RBP[-7] + 0xc) = auVar86._12_4_ - auVar83._12_4_;
          auVar27 = pmulld(auVar69,auVar83);
          *(int *)unaff_RBP[-4] = auVar64._0_4_ - auVar69._0_4_;
          *(int *)(unaff_RBP[-4] + 4) = auVar64._4_4_ - auVar69._4_4_;
          *(int *)(unaff_RBP[-4] + 8) = auVar64._8_4_ - auVar69._8_4_;
          *(int *)(unaff_RBP[-4] + 0xc) = auVar64._12_4_ - auVar69._12_4_;
          auVar43._0_4_ = auVar69._0_4_ - auVar75._0_4_;
          auVar43._4_4_ = auVar69._4_4_ - auVar75._4_4_;
          auVar43._8_4_ = auVar69._8_4_ - auVar75._8_4_;
          auVar43._12_4_ = auVar69._12_4_ - auVar75._12_4_;
          unaff_RBP[-2] = auVar43;
          auVar21 = pmulld(auVar64,auVar86);
          *(int *)unaff_RBP[-1] = auVar27._0_4_ - auVar21._0_4_;
          *(int *)(unaff_RBP[-1] + 4) = auVar27._4_4_ - auVar21._4_4_;
          *(int *)(unaff_RBP[-1] + 8) = auVar27._8_4_ - auVar21._8_4_;
          *(int *)(unaff_RBP[-1] + 0xc) = auVar27._12_4_ - auVar21._12_4_;
          auVar21 = pmulld(auVar75,auVar83);
          auVar59._0_4_ = auVar83._0_4_ - auVar87._0_4_;
          auVar59._4_4_ = auVar83._4_4_ - auVar87._4_4_;
          auVar59._8_4_ = auVar83._8_4_ - auVar87._8_4_;
          auVar59._12_4_ = auVar83._12_4_ - auVar87._12_4_;
          auVar27 = pmulld(auVar75,auVar86);
          unaff_RBP[-6] = auVar59;
          auVar55._0_4_ = auVar87._0_4_ - auVar86._0_4_;
          auVar55._4_4_ = auVar87._4_4_ - auVar86._4_4_;
          auVar55._8_4_ = auVar87._8_4_ - auVar86._8_4_;
          auVar55._12_4_ = auVar87._12_4_ - auVar86._12_4_;
          auVar33 = pmulld(auVar64,auVar87);
          auVar34._0_4_ = auVar33._0_4_ - auVar21._0_4_;
          auVar34._4_4_ = auVar33._4_4_ - auVar21._4_4_;
          auVar34._8_4_ = auVar33._8_4_ - auVar21._8_4_;
          auVar34._12_4_ = auVar33._12_4_ - auVar21._12_4_;
          unaff_RBP[-5] = auVar55;
          *unaff_RBP = auVar34;
          auVar21 = pmulld(auVar69,auVar87);
          auVar28._0_4_ = auVar27._0_4_ - auVar21._0_4_;
          auVar28._4_4_ = auVar27._4_4_ - auVar21._4_4_;
          auVar28._8_4_ = auVar27._8_4_ - auVar21._8_4_;
          auVar28._12_4_ = auVar27._12_4_ - auVar21._12_4_;
          unaff_RBP[1] = auVar28;
          auVar21 = pmulld(auVar43,auVar59);
          auVar27 = pmulld(auVar49,auVar55);
          local_var_30._0_4_ = auVar21._0_4_ - auVar27._0_4_;
          local_var_30._4_4_ = auVar21._4_4_ - auVar27._4_4_;
          local_var_30._8_4_ = auVar21._8_4_ - auVar27._8_4_;
          local_var_30._12_4_ = auVar21._12_4_ - auVar27._12_4_;
          auVar33._0_4_ = (float)local_var_30._0_4_;
          auVar33._4_4_ = (float)local_var_30._4_4_;
          auVar33._8_4_ = (float)local_var_30._8_4_;
          auVar33._12_4_ = (float)local_var_30._12_4_;
          auVar21 = rcpps(auVar28,auVar33);
          uVar74 = (uint)(auVar75._0_4_ < auVar69._0_4_) * auVar69._0_4_ |
                   (uint)(auVar75._0_4_ >= auVar69._0_4_) * auVar75._0_4_;
          uVar77 = (uint)(auVar75._4_4_ < auVar69._4_4_) * auVar69._4_4_ |
                   (uint)(auVar75._4_4_ >= auVar69._4_4_) * auVar75._4_4_;
          uVar79 = (uint)(auVar75._8_4_ < auVar69._8_4_) * auVar69._8_4_ |
                   (uint)(auVar75._8_4_ >= auVar69._8_4_) * auVar75._8_4_;
          uVar81 = (uint)(auVar75._12_4_ < auVar69._12_4_) * auVar69._12_4_ |
                   (uint)(auVar75._12_4_ >= auVar69._12_4_) * auVar75._12_4_;
          uVar16 = (uint)(auVar69._0_4_ < auVar75._0_4_) * auVar69._0_4_ |
                   (uint)(auVar69._0_4_ >= auVar75._0_4_) * auVar75._0_4_;
          uVar24 = (uint)(auVar69._4_4_ < auVar75._4_4_) * auVar69._4_4_ |
                   (uint)(auVar69._4_4_ >= auVar75._4_4_) * auVar75._4_4_;
          uVar25 = (uint)(auVar69._8_4_ < auVar75._8_4_) * auVar69._8_4_ |
                   (uint)(auVar69._8_4_ >= auVar75._8_4_) * auVar75._8_4_;
          uVar26 = (uint)(auVar69._12_4_ < auVar75._12_4_) * auVar69._12_4_ |
                   (uint)(auVar69._12_4_ >= auVar75._12_4_) * auVar75._12_4_;
          uVar16 = (uint)(auVar64._0_4_ < (int)uVar16) * auVar64._0_4_ |
                   (auVar64._0_4_ >= (int)uVar16) * uVar16;
          uVar24 = (uint)(auVar64._4_4_ < (int)uVar24) * auVar64._4_4_ |
                   (auVar64._4_4_ >= (int)uVar24) * uVar24;
          uVar25 = (uint)(auVar64._8_4_ < (int)uVar25) * auVar64._8_4_ |
                   (auVar64._8_4_ >= (int)uVar25) * uVar25;
          uVar26 = (uint)(auVar64._12_4_ < (int)uVar26) * auVar64._12_4_ |
                   (auVar64._12_4_ >= (int)uVar26) * uVar26;
          uVar74 = (uint)((int)uVar74 < auVar64._0_4_) * auVar64._0_4_ |
                   ((int)uVar74 >= auVar64._0_4_) * uVar74;
          uVar77 = (uint)((int)uVar77 < auVar64._4_4_) * auVar64._4_4_ |
                   ((int)uVar77 >= auVar64._4_4_) * uVar77;
          uVar79 = (uint)((int)uVar79 < auVar64._8_4_) * auVar64._8_4_ |
                   ((int)uVar79 >= auVar64._8_4_) * uVar79;
          uVar81 = (uint)((int)uVar81 < auVar64._12_4_) * auVar64._12_4_ |
                   ((int)uVar81 >= auVar64._12_4_) * uVar81;
          local_buffer_60._0_4_ =
               (uint)(0x27f < (int)uVar74) * 0x27f | (0x27f >= (int)uVar74) * uVar74;
          local_buffer_60._4_4_ =
               (uint)(0x27f < (int)uVar77) * 0x27f | (0x27f >= (int)uVar77) * uVar77;
          local_buffer_60._8_4_ =
               (uint)(0x27f < (int)uVar79) * 0x27f | (0x27f >= (int)uVar79) * uVar79;
          local_buffer_60._12_4_ =
               (uint)(0x27f < (int)uVar81) * 0x27f | (0x27f >= (int)uVar81) * uVar81;
          local_buffer_50 = (-1 < (int)uVar16) * uVar16 & 0xfffffffe;
          local_buffer_54 = (-1 < (int)uVar24) * uVar24 & 0xfffffffe;
          local_buffer_58 = (-1 < (int)uVar25) * uVar25 & 0xfffffffe;
          local_buffer_5c = (-1 < (int)uVar26) * uVar26 & 0xfffffffe;
          uVar16 = (uint)(auVar86._0_4_ < auVar87._0_4_) * auVar86._0_4_ |
                   (uint)(auVar86._0_4_ >= auVar87._0_4_) * auVar87._0_4_;
          uVar24 = (uint)(auVar86._4_4_ < auVar87._4_4_) * auVar86._4_4_ |
                   (uint)(auVar86._4_4_ >= auVar87._4_4_) * auVar87._4_4_;
          uVar25 = (uint)(auVar86._8_4_ < auVar87._8_4_) * auVar86._8_4_ |
                   (uint)(auVar86._8_4_ >= auVar87._8_4_) * auVar87._8_4_;
          uVar26 = (uint)(auVar86._12_4_ < auVar87._12_4_) * auVar86._12_4_ |
                   (uint)(auVar86._12_4_ >= auVar87._12_4_) * auVar87._12_4_;
          *(float *)unaff_RBP[0x15] = (fVar88 - fVar37) * auVar21._0_4_;
          *(float *)(unaff_RBP[0x15] + 4) = (fVar89 - fVar95) * auVar21._4_4_;
          *(float *)(unaff_RBP[0x15] + 8) = (fVar90 - fVar39) * auVar21._8_4_;
          *(float *)(unaff_RBP[0x15] + 0xc) = (fVar91 - fVar38) * auVar21._12_4_;
          *(float *)unaff_RBP[0x16] = (fVar94 - fVar37) * auVar21._0_4_;
          *(float *)(unaff_RBP[0x16] + 4) = (auVar20._8_4_ - fVar95) * auVar21._4_4_;
          *(float *)(unaff_RBP[0x16] + 8) = (auVar31._8_4_ - fVar39) * auVar21._8_4_;
          *(float *)(unaff_RBP[0x16] + 0xc) = (fVar42 - fVar38) * auVar21._12_4_;
          uVar16 = (uint)(auVar83._0_4_ < (int)uVar16) * auVar83._0_4_ |
                   (auVar83._0_4_ >= (int)uVar16) * uVar16;
          uVar24 = (uint)(auVar83._4_4_ < (int)uVar24) * auVar83._4_4_ |
                   (auVar83._4_4_ >= (int)uVar24) * uVar24;
          uVar25 = (uint)(auVar83._8_4_ < (int)uVar25) * auVar83._8_4_ |
                   (auVar83._8_4_ >= (int)uVar25) * uVar25;
          uVar26 = (uint)(auVar83._12_4_ < (int)uVar26) * auVar83._12_4_ |
                   (auVar83._12_4_ >= (int)uVar26) * uVar26;
          uVar74 = (uint)(auVar87._0_4_ < auVar86._0_4_) * auVar86._0_4_ |
                   (uint)(auVar87._0_4_ >= auVar86._0_4_) * auVar87._0_4_;
          uVar77 = (uint)(auVar87._4_4_ < auVar86._4_4_) * auVar86._4_4_ |
                   (uint)(auVar87._4_4_ >= auVar86._4_4_) * auVar87._4_4_;
          uVar79 = (uint)(auVar87._8_4_ < auVar86._8_4_) * auVar86._8_4_ |
                   (uint)(auVar87._8_4_ >= auVar86._8_4_) * auVar87._8_4_;
          uVar81 = (uint)(auVar87._12_4_ < auVar86._12_4_) * auVar86._12_4_ |
                   (uint)(auVar87._12_4_ >= auVar86._12_4_) * auVar87._12_4_;
          auVar22._4_4_ = (-1 < (int)uVar24) * uVar24;
          auVar22._0_4_ = (-1 < (int)uVar16) * uVar16;
          auVar22._8_4_ = (-1 < (int)uVar25) * uVar25;
          auVar22._12_4_ = (-1 < (int)uVar26) * uVar26;
          uVar16 = (uint)((int)uVar74 < auVar83._0_4_) * auVar83._0_4_ |
                   ((int)uVar74 >= auVar83._0_4_) * uVar74;
          uVar24 = (uint)((int)uVar77 < auVar83._4_4_) * auVar83._4_4_ |
                   ((int)uVar77 >= auVar83._4_4_) * uVar77;
          uVar25 = (uint)((int)uVar79 < auVar83._8_4_) * auVar83._8_4_ |
                   ((int)uVar79 >= auVar83._8_4_) * uVar79;
          uVar26 = (uint)((int)uVar81 < auVar83._12_4_) * auVar83._12_4_ |
                   ((int)uVar81 >= auVar83._12_4_) * uVar81;
          lVar19 = 0;
          local_buffer_70 = auVar22 & render_system_ui;
          *(uint *)unaff_RBP[-8] =
               (uint)(0x167 < (int)uVar16) * 0x167 | (0x167 >= (int)uVar16) * uVar16;
          *(uint *)(unaff_RBP[-8] + 4) =
               (uint)(0x167 < (int)uVar24) * 0x167 | (0x167 >= (int)uVar24) * uVar24;
          *(uint *)(unaff_RBP[-8] + 8) =
               (uint)(0x167 < (int)uVar25) * 0x167 | (0x167 >= (int)uVar25) * uVar25;
          *(uint *)(unaff_RBP[-8] + 0xc) =
               (uint)(0x167 < (int)uVar26) * 0x167 | (0x167 >= (int)uVar26) * uVar26;
          do {
            if (0 < *(int *)(&local_buffer_00000030 + lVar19)) {
              uVar16 = *(uint *)(&local_buffer_00000070 + lVar19);
              iVar10 = *(int *)((int64_t)&local_buffer_00000050 + lVar19);
              uVar2 = *(int32_t *)(unaff_RBP[0x14] + lVar19);
              iVar71 = *(int *)(unaff_RBP[-4] + lVar19);
              iStack000000000000004c = *(int *)(unaff_RBP[-3] + lVar19);
              iVar3 = *(int *)(unaff_RBP[-2] + lVar19);
              iVar4 = *(int *)(unaff_RBP[-6] + lVar19);
              iVar5 = *(int *)(unaff_RBP[-5] + lVar19);
              iVar72 = *(int *)(unaff_RBP[1] + lVar19);
              fVar58 = *(float *)(unaff_RBP[0x15] + lVar19);
              fVar42 = *(float *)(unaff_RBP[0x16] + lVar19);
              iVar6 = *(int *)(unaff_RBP[-7] + lVar19);
              iVar73 = *(int *)(unaff_RBP[-1] + lVar19);
              iVar78 = *(int *)(*unaff_RBP + lVar19);
              iVar7 = *(int *)(unaff_RBP[-8] + lVar19);
              iVar8 = *(int *)(&local_buffer_00000060 + lVar19);
              *(int32_t *)unaff_RBP[6] = uVar2;
              *(int32_t *)(unaff_RBP[6] + 4) = uVar2;
              *(int32_t *)(unaff_RBP[6] + 8) = uVar2;
              *(int32_t *)(unaff_RBP[6] + 0xc) = uVar2;
              auVar65._4_4_ = iVar5;
              auVar65._0_4_ = iVar5;
              auVar65._8_4_ = iVar5;
              auVar65._12_4_ = iVar5;
              auVar35._4_4_ = iVar71;
              auVar35._0_4_ = iVar71;
              auVar35._8_4_ = iVar71;
              auVar35._12_4_ = iVar71;
              *(int *)unaff_RBP[8] = iVar71 << 1;
              *(int *)(unaff_RBP[8] + 4) = iVar71 << 1;
              *(int *)(unaff_RBP[8] + 8) = iVar71 << 1;
              *(int *)(unaff_RBP[8] + 0xc) = iVar71 << 1;
              uVar24 = (uVar16 * 0x140 + iVar10) * 2;
              auVar44._4_4_ = iStack000000000000004c;
              auVar44._0_4_ = iStack000000000000004c;
              auVar44._8_4_ = iStack000000000000004c;
              auVar44._12_4_ = iStack000000000000004c;
              auVar56._4_4_ = iVar3;
              auVar56._0_4_ = iVar3;
              auVar56._8_4_ = iVar3;
              auVar56._12_4_ = iVar3;
              iStack0000000000000040 = iStack000000000000004c * 2;
              iStack0000000000000044 = iStack000000000000004c * 2;
              iStack0000000000000048 = iStack000000000000004c * 2;
              iStack000000000000004c = iStack000000000000004c * 2;
              auVar32._4_4_ = iVar3 * 2;
              auVar32._0_4_ = iVar3 * 2;
              auVar32._8_4_ = iVar3 * 2;
              auVar32._12_4_ = iVar3 * 2;
              auVar60._4_4_ = iVar4;
              auVar60._0_4_ = iVar4;
              auVar60._8_4_ = iVar4;
              auVar60._12_4_ = iVar4;
              auVar50._4_4_ = iVar6;
              auVar50._0_4_ = iVar6;
              auVar50._8_4_ = iVar6;
              auVar50._12_4_ = iVar6;
              auVar23._4_4_ = uVar16;
              auVar23._0_4_ = uVar16;
              auVar23._8_4_ = uVar16 + 1;
              auVar23._12_4_ = uVar16 + 1;
              auVar29._4_4_ = iVar10 + 1;
              auVar29._0_4_ = iVar10;
              auVar29._8_4_ = iVar10;
              auVar29._12_4_ = iVar10 + 1;
              auVar27 = pmulld(auVar65,auVar29);
              auVar21 = pmulld(auVar56,auVar23);
              auVar76._0_4_ = iVar72 + auVar21._0_4_ + auVar27._0_4_;
              auVar76._4_4_ = iVar72 + auVar21._4_4_ + auVar27._4_4_;
              auVar76._8_4_ = iVar72 + auVar21._8_4_ + auVar27._8_4_;
              auVar76._12_4_ = iVar72 + auVar21._12_4_ + auVar27._12_4_;
              auVar21 = pmulld(auVar35,auVar23);
              auVar27 = pmulld(auVar44,auVar23);
              auVar33 = pmulld(auVar50,auVar29);
              auVar84._0_4_ = iVar73 + auVar21._0_4_ + auVar33._0_4_;
              auVar84._4_4_ = iVar73 + auVar21._4_4_ + auVar33._4_4_;
              auVar84._8_4_ = iVar73 + auVar21._8_4_ + auVar33._8_4_;
              auVar84._12_4_ = iVar73 + auVar21._12_4_ + auVar33._12_4_;
              auVar21 = pmulld(auVar60,auVar29);
              auVar70._0_4_ = iVar78 + auVar27._0_4_ + auVar21._0_4_;
              auVar70._4_4_ = iVar78 + auVar27._4_4_ + auVar21._4_4_;
              auVar70._8_4_ = iVar78 + auVar27._8_4_ + auVar21._8_4_;
              auVar70._12_4_ = iVar78 + auVar27._12_4_ + auVar21._12_4_;
              while( true ) {
                uVar17 = (uint64_t)uVar16;
                uVar15 = (uint64_t)uVar24;
                if (iVar7 <= (int)uVar16) break;
                auVar21 = ZEXT816(0);
                iVar71 = auVar70._4_4_;
                iVar72 = auVar70._8_4_;
                iVar73 = auVar70._12_4_;
                iVar78 = auVar76._4_4_;
                iVar80 = auVar76._8_4_;
                iVar82 = auVar76._12_4_;
                auVar36._0_4_ =
                     (float)auVar70._0_4_ * fVar58 + *(float *)unaff_RBP[6] +
                     (float)auVar76._0_4_ * fVar42;
                auVar36._4_4_ =
                     (float)iVar71 * fVar58 + *(float *)(unaff_RBP[6] + 4) + (float)iVar78 * fVar42;
                auVar36._8_4_ =
                     (float)iVar72 * fVar58 + *(float *)(unaff_RBP[6] + 8) + (float)iVar80 * fVar42;
                auVar36._12_4_ =
                     (float)iVar73 * fVar58 + *(float *)(unaff_RBP[6] + 0xc) +
                     (float)iVar82 * fVar42;
                if (iVar10 < iVar8) {
                  uVar14 = (uint64_t)(((iVar8 - iVar10) - 1U >> 1) + 1);
                  uVar13 = uVar15;
                  auVar27 = auVar84;
                  auVar33 = auVar70;
                  auVar22 = auVar76;
                  do {
                    iVar11 = (int)uVar13;
                    uVar13 = (uint64_t)(iVar11 + 4);
                    auVar45._0_4_ = auVar27._0_4_ + iVar6 * 2;
                    auVar45._4_4_ = auVar27._4_4_ + iVar6 * 2;
                    auVar45._8_4_ = auVar27._8_4_ + iVar6 * 2;
                    auVar45._12_4_ = auVar27._12_4_ + iVar6 * 2;
                    auVar51._0_4_ = auVar33._0_4_ + iVar4 * 2;
                    auVar51._4_4_ = auVar33._4_4_ + iVar4 * 2;
                    auVar51._8_4_ = auVar33._8_4_ + iVar4 * 2;
                    auVar51._12_4_ = auVar33._12_4_ + iVar4 * 2;
                    auVar57._0_4_ = auVar22._0_4_ + iVar5 * 2;
                    auVar57._4_4_ = auVar22._4_4_ + iVar5 * 2;
                    auVar57._8_4_ = auVar22._8_4_ + iVar5 * 2;
                    auVar57._12_4_ = auVar22._12_4_ + iVar5 * 2;
                    pfVar12 = (float *)(lVar9 + (int64_t)iVar11 * 4);
                    fVar37 = auVar36._4_4_;
                    fVar40 = auVar36._8_4_;
                    fVar41 = auVar36._12_4_;
                    auVar30._4_4_ = -(uint)(pfVar12[1] <= fVar37);
                    auVar30._0_4_ = -(uint)(*pfVar12 <= auVar36._0_4_);
                    auVar30._8_4_ = -(uint)(pfVar12[2] <= fVar40);
                    auVar30._12_4_ = -(uint)(pfVar12[3] <= fVar41);
                    auVar36._0_4_ =
                         auVar36._0_4_ + (float)(iVar4 * 2) * fVar58 + (float)(iVar5 * 2) * fVar42;
                    auVar36._4_4_ =
                         fVar37 + (float)(iVar4 * 2) * fVar58 + (float)(iVar5 * 2) * fVar42;
                    auVar36._8_4_ =
                         fVar40 + (float)(iVar4 * 2) * fVar58 + (float)(iVar5 * 2) * fVar42;
                    auVar36._12_4_ =
                         fVar41 + (float)(iVar4 * 2) * fVar58 + (float)(iVar5 * 2) * fVar42;
                    auVar21 = ~(auVar33 | auVar27 | auVar22) & auVar30 | auVar21;
                    uVar14 = uVar14 - 1;
                    auVar27 = auVar45;
                    auVar33 = auVar51;
                    auVar22 = auVar57;
                  } while (uVar14 != 0);
                  param_2 = 0;
                }
                if ((render_system_ui & auVar21) != (int8_t  [16])0x0) goto UISystem_92057;
                auVar85._0_4_ = auVar84._0_4_ + *(int *)unaff_RBP[8];
                auVar85._4_4_ = auVar84._4_4_ + *(int *)(unaff_RBP[8] + 4);
                auVar85._8_4_ = auVar84._8_4_ + *(int *)(unaff_RBP[8] + 8);
                auVar85._12_4_ = auVar84._12_4_ + *(int *)(unaff_RBP[8] + 0xc);
                uVar16 = uVar16 + 2;
                auVar70._0_4_ = auVar70._0_4_ + iStack0000000000000040;
                auVar70._4_4_ = iVar71 + iStack0000000000000044;
                auVar70._8_4_ = iVar72 + iStack0000000000000048;
                auVar70._12_4_ = iVar73 + iStack000000000000004c;
                uVar24 = uVar24 + 0x500;
                auVar76._0_4_ = auVar76._0_4_ + iVar3 * 2;
                auVar76._4_4_ = iVar78 + iVar3 * 2;
                auVar76._8_4_ = iVar80 + iVar3 * 2;
                auVar76._12_4_ = iVar82 + iVar3 * 2;
                auVar84 = auVar85;
              }
            }
            lVar19 = lVar19 + 4;
          } while (lVar19 < 0x10);
          uVar18 = uVar18 + 4;
        } while (uVar18 < 0xc);
        break;
      }
      uVar16 = (int)uVar17 + 1;
      uVar17 = (uint64_t)uVar16;
      uVar18 = uVar18 + 0x50;
    } while ((int)uVar16 <= auVar32._12_4_);
  }
UISystem_92057:
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)unaff_RBP[0x1b] ^ (uint64_t)&local_buffer_00000000,param_2,uVar15,uVar17,
                auVar32);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address