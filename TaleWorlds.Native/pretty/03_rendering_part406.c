#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part406.c - 4 个函数

// 函数: void FUN_1804918d8(void)
void FUN_1804918d8(void)

{
  float *pfVar1;
  int8_t (*pauVar2) [16];
  int32_t uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int64_t lVar12;
  int iVar13;
  uint64_t uVar14;
  int8_t (*unaff_RBP) [16];
  int iVar15;
  int iVar16;
  int64_t lVar17;
  int64_t in_R11;
  int64_t unaff_R12;
  uint uVar18;
  char unaff_R15B;
  uint uVar22;
  int8_t auVar19 [12];
  int8_t auVar20 [16];
  uint uVar23;
  uint uVar24;
  int8_t auVar21 [16];
  int8_t auVar25 [16];
  int8_t auVar26 [16];
  int8_t auVar27 [16];
  float fVar33;
  int8_t auVar28 [12];
  float fVar36;
  int8_t auVar29 [16];
  int8_t auVar30 [16];
  int8_t auVar31 [16];
  int8_t auVar32 [16];
  float fVar37;
  float fVar38;
  float fVar42;
  float fVar43;
  int8_t auVar39 [16];
  int8_t auVar40 [16];
  int8_t auVar41 [16];
  float fVar44;
  float fVar48;
  float fVar49;
  float fVar50;
  int8_t auVar45 [16];
  int8_t auVar46 [16];
  int8_t auVar47 [16];
  int8_t auVar51 [16];
  int8_t auVar52 [16];
  int8_t auVar53 [16];
  float fVar54;
  float fVar57;
  float fVar58;
  int8_t auVar55 [16];
  int8_t auVar56 [16];
  float fVar59;
  float fVar62;
  float fVar63;
  float fVar64;
  int8_t auVar60 [16];
  int8_t auVar61 [16];
  int iVar67;
  int iVar68;
  int8_t auVar65 [16];
  int8_t auVar66 [16];
  int iVar69;
  uint uVar70;
  uint uVar73;
  int iVar74;
  uint uVar75;
  int iVar76;
  int8_t auVar71 [16];
  uint uVar77;
  int8_t auVar72 [16];
  int iVar78;
  int8_t auVar79 [16];
  int8_t auVar80 [16];
  int8_t auVar81 [16];
  int8_t auVar82 [16];
  int8_t auVar83 [16];
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  int8_t auStack0000000000000030 [16];
  int iStack0000000000000040;
  int iStack0000000000000044;
  int iStack0000000000000048;
  int iStack000000000000004c;
  uint uStack0000000000000050;
  uint uStack0000000000000054;
  uint uStack0000000000000058;
  uint uStack000000000000005c;
  int8_t auStack0000000000000060 [16];
  int8_t auStack0000000000000070 [16];
  float fVar34;
  float fVar35;
  
  MXCSR = MXCSR | 0x8040;
  uVar18 = 0;
  do {
    if (unaff_R15B == '\0') {
      uVar11 = uVar18 * 3;
      pauVar2 = unaff_RBP + (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)uVar11 * 4) + 10;
      fVar54 = *(float *)*pauVar2;
      fVar38 = *(float *)(*pauVar2 + 4);
      fVar33 = *(float *)(*pauVar2 + 8);
      pauVar2 = unaff_RBP +
                (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar11 + 3) * 4) + 10;
      fVar36 = *(float *)*pauVar2;
      fVar37 = *(float *)(*pauVar2 + 4);
      fVar91 = *(float *)(*pauVar2 + 8);
      pauVar2 = unaff_RBP +
                (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)((uVar18 + 2) * 3) * 4) + 10;
      fVar57 = *(float *)*pauVar2;
      fVar42 = *(float *)(*pauVar2 + 4);
      fVar35 = *(float *)(*pauVar2 + 8);
      pauVar2 = unaff_RBP +
                (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)((uVar18 + 3) * 3) * 4) + 10;
      fVar58 = *(float *)*pauVar2;
      fVar43 = *(float *)(*pauVar2 + 4);
      fVar34 = *(float *)(*pauVar2 + 8);
      pauVar2 = unaff_RBP +
                (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar11 + 1) * 4) + 10;
      fVar59 = *(float *)*pauVar2;
      fVar44 = *(float *)(*pauVar2 + 4);
      fVar84 = *(float *)(*pauVar2 + 8);
      pauVar2 = unaff_RBP +
                (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar11 + 4) * 4) + 10;
      fVar62 = *(float *)*pauVar2;
      fVar48 = *(float *)(*pauVar2 + 4);
      fVar85 = *(float *)(*pauVar2 + 8);
      pauVar2 = unaff_RBP +
                (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar11 + 7) * 4) + 10;
      fVar63 = *(float *)*pauVar2;
      fVar49 = *(float *)(*pauVar2 + 4);
      fVar86 = *(float *)(*pauVar2 + 8);
      pauVar2 = unaff_RBP +
                (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar11 + 10) * 4) + 10;
      fVar64 = *(float *)*pauVar2;
      fVar50 = *(float *)(*pauVar2 + 4);
      fVar87 = *(float *)(*pauVar2 + 8);
      pauVar2 = unaff_RBP +
                (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar11 + 2) * 4) + 10;
      fVar88 = *(float *)*pauVar2;
      fVar89 = *(float *)(*pauVar2 + 4);
      fVar90 = *(float *)(*pauVar2 + 8);
      auVar19 = SUB1612(unaff_RBP[(uint64_t)
                                  *(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar11 + 5) * 4) + 10
                                 ],0);
      auVar28 = SUB1612(unaff_RBP[(uint64_t)
                                  *(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar11 + 8) * 4) + 10
                                 ],0);
      uVar11 = uVar11 + 0xb;
    }
    else {
      uVar22 = uVar18 * 3;
      uVar11 = (uVar18 + 3) * 3;
      uVar23 = (uVar18 + 2) * 3;
      pauVar2 = unaff_RBP + (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)uVar22 * 4) + 10;
      fVar54 = *(float *)*pauVar2;
      fVar38 = *(float *)(*pauVar2 + 4);
      fVar33 = *(float *)(*pauVar2 + 8);
      pauVar2 = unaff_RBP +
                (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar22 + 3) * 4) + 10;
      fVar36 = *(float *)*pauVar2;
      fVar37 = *(float *)(*pauVar2 + 4);
      fVar91 = *(float *)(*pauVar2 + 8);
      pauVar2 = unaff_RBP + (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)uVar23 * 4) + 10;
      fVar57 = *(float *)*pauVar2;
      fVar42 = *(float *)(*pauVar2 + 4);
      fVar35 = *(float *)(*pauVar2 + 8);
      pauVar2 = unaff_RBP + (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)uVar11 * 4) + 10;
      fVar58 = *(float *)*pauVar2;
      fVar43 = *(float *)(*pauVar2 + 4);
      fVar34 = *(float *)(*pauVar2 + 8);
      pauVar2 = unaff_RBP +
                (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar22 + 2) * 4) + 10;
      fVar59 = *(float *)*pauVar2;
      fVar44 = *(float *)(*pauVar2 + 4);
      fVar84 = *(float *)(*pauVar2 + 8);
      pauVar2 = unaff_RBP +
                (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar22 + 5) * 4) + 10;
      fVar62 = *(float *)*pauVar2;
      fVar48 = *(float *)(*pauVar2 + 4);
      fVar85 = *(float *)(*pauVar2 + 8);
      pauVar2 = unaff_RBP +
                (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar23 + 2) * 4) + 10;
      fVar63 = *(float *)*pauVar2;
      fVar49 = *(float *)(*pauVar2 + 4);
      fVar86 = *(float *)(*pauVar2 + 8);
      pauVar2 = unaff_RBP +
                (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar11 + 2) * 4) + 10;
      fVar64 = *(float *)*pauVar2;
      fVar50 = *(float *)(*pauVar2 + 4);
      fVar87 = *(float *)(*pauVar2 + 8);
      pauVar2 = unaff_RBP +
                (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar22 + 1) * 4) + 10;
      fVar88 = *(float *)*pauVar2;
      fVar89 = *(float *)(*pauVar2 + 4);
      fVar90 = *(float *)(*pauVar2 + 8);
      auVar19 = SUB1612(unaff_RBP[(uint64_t)
                                  *(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar22 + 4) * 4) + 10
                                 ],0);
      auVar28 = SUB1612(unaff_RBP[(uint64_t)
                                  *(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)(uVar23 + 1) * 4) + 10
                                 ],0);
      uVar11 = uVar11 + 1;
    }
    auVar83._0_4_ = (int)fVar38;
    auVar83._4_4_ = (int)fVar37;
    auVar83._8_4_ = (int)fVar42;
    auVar83._12_4_ = (int)fVar43;
    pauVar2 = unaff_RBP + (uint64_t)*(uint *)(unaff_R12 + 0x9f8010 + (uint64_t)uVar11 * 4) + 10;
    fVar38 = *(float *)(*pauVar2 + 8);
    auVar82._0_4_ = (int)fVar44;
    auVar82._4_4_ = (int)fVar48;
    auVar82._8_4_ = (int)fVar49;
    auVar82._12_4_ = (int)fVar50;
    auVar71._0_4_ = (int)fVar54;
    auVar71._4_4_ = (int)fVar36;
    auVar71._8_4_ = (int)fVar57;
    auVar71._12_4_ = (int)fVar58;
    auVar65._0_4_ = (int)fVar59;
    auVar65._4_4_ = (int)fVar62;
    auVar65._8_4_ = (int)fVar63;
    auVar65._12_4_ = (int)fVar64;
    auVar60._0_4_ = (int)fVar88;
    auVar60._4_4_ = (int)auVar19._0_4_;
    auVar60._8_4_ = (int)auVar28._0_4_;
    auVar60._12_4_ = (int)*(float *)*pauVar2;
    auVar79._0_4_ = (int)fVar89;
    auVar79._4_4_ = (int)auVar19._4_4_;
    auVar79._8_4_ = (int)auVar28._4_4_;
    auVar79._12_4_ = (int)*(float *)(*pauVar2 + 4);
    auVar45._0_4_ = auVar71._0_4_ - auVar60._0_4_;
    auVar45._4_4_ = auVar71._4_4_ - auVar60._4_4_;
    auVar45._8_4_ = auVar71._8_4_ - auVar60._8_4_;
    auVar45._12_4_ = auVar71._12_4_ - auVar60._12_4_;
    *(float *)unaff_RBP[0x14] = fVar33;
    *(float *)(unaff_RBP[0x14] + 4) = fVar91;
    *(float *)(unaff_RBP[0x14] + 8) = fVar35;
    *(float *)(unaff_RBP[0x14] + 0xc) = fVar34;
    unaff_RBP[-3] = auVar45;
    *(int *)unaff_RBP[-7] = auVar82._0_4_ - auVar79._0_4_;
    *(int *)(unaff_RBP[-7] + 4) = auVar82._4_4_ - auVar79._4_4_;
    *(int *)(unaff_RBP[-7] + 8) = auVar82._8_4_ - auVar79._8_4_;
    *(int *)(unaff_RBP[-7] + 0xc) = auVar82._12_4_ - auVar79._12_4_;
    auVar25 = pmulld(auVar65,auVar79);
    *(int *)unaff_RBP[-4] = auVar60._0_4_ - auVar65._0_4_;
    *(int *)(unaff_RBP[-4] + 4) = auVar60._4_4_ - auVar65._4_4_;
    *(int *)(unaff_RBP[-4] + 8) = auVar60._8_4_ - auVar65._8_4_;
    *(int *)(unaff_RBP[-4] + 0xc) = auVar60._12_4_ - auVar65._12_4_;
    auVar39._0_4_ = auVar65._0_4_ - auVar71._0_4_;
    auVar39._4_4_ = auVar65._4_4_ - auVar71._4_4_;
    auVar39._8_4_ = auVar65._8_4_ - auVar71._8_4_;
    auVar39._12_4_ = auVar65._12_4_ - auVar71._12_4_;
    unaff_RBP[-2] = auVar39;
    auVar20 = pmulld(auVar60,auVar82);
    *(int *)unaff_RBP[-1] = auVar25._0_4_ - auVar20._0_4_;
    *(int *)(unaff_RBP[-1] + 4) = auVar25._4_4_ - auVar20._4_4_;
    *(int *)(unaff_RBP[-1] + 8) = auVar25._8_4_ - auVar20._8_4_;
    *(int *)(unaff_RBP[-1] + 0xc) = auVar25._12_4_ - auVar20._12_4_;
    auVar20 = pmulld(auVar71,auVar79);
    auVar55._0_4_ = auVar79._0_4_ - auVar83._0_4_;
    auVar55._4_4_ = auVar79._4_4_ - auVar83._4_4_;
    auVar55._8_4_ = auVar79._8_4_ - auVar83._8_4_;
    auVar55._12_4_ = auVar79._12_4_ - auVar83._12_4_;
    auVar25 = pmulld(auVar71,auVar82);
    unaff_RBP[-6] = auVar55;
    auVar51._0_4_ = auVar83._0_4_ - auVar82._0_4_;
    auVar51._4_4_ = auVar83._4_4_ - auVar82._4_4_;
    auVar51._8_4_ = auVar83._8_4_ - auVar82._8_4_;
    auVar51._12_4_ = auVar83._12_4_ - auVar82._12_4_;
    auVar29 = pmulld(auVar60,auVar83);
    auVar30._0_4_ = auVar29._0_4_ - auVar20._0_4_;
    auVar30._4_4_ = auVar29._4_4_ - auVar20._4_4_;
    auVar30._8_4_ = auVar29._8_4_ - auVar20._8_4_;
    auVar30._12_4_ = auVar29._12_4_ - auVar20._12_4_;
    unaff_RBP[-5] = auVar51;
    *unaff_RBP = auVar30;
    auVar20 = pmulld(auVar65,auVar83);
    auVar29._0_4_ = auVar25._0_4_ - auVar20._0_4_;
    auVar29._4_4_ = auVar25._4_4_ - auVar20._4_4_;
    auVar29._8_4_ = auVar25._8_4_ - auVar20._8_4_;
    auVar29._12_4_ = auVar25._12_4_ - auVar20._12_4_;
    unaff_RBP[1] = auVar29;
    auVar20 = pmulld(auVar39,auVar55);
    auVar25 = pmulld(auVar45,auVar51);
    auStack0000000000000030._0_4_ = auVar20._0_4_ - auVar25._0_4_;
    auStack0000000000000030._4_4_ = auVar20._4_4_ - auVar25._4_4_;
    auStack0000000000000030._8_4_ = auVar20._8_4_ - auVar25._8_4_;
    auStack0000000000000030._12_4_ = auVar20._12_4_ - auVar25._12_4_;
    auVar20._0_4_ = (float)auStack0000000000000030._0_4_;
    auVar20._4_4_ = (float)auStack0000000000000030._4_4_;
    auVar20._8_4_ = (float)auStack0000000000000030._8_4_;
    auVar20._12_4_ = (float)auStack0000000000000030._12_4_;
    auVar20 = rcpps(auVar29,auVar20);
    uVar70 = (uint)(auVar71._0_4_ < auVar65._0_4_) * auVar65._0_4_ |
             (uint)(auVar71._0_4_ >= auVar65._0_4_) * auVar71._0_4_;
    uVar73 = (uint)(auVar71._4_4_ < auVar65._4_4_) * auVar65._4_4_ |
             (uint)(auVar71._4_4_ >= auVar65._4_4_) * auVar71._4_4_;
    uVar75 = (uint)(auVar71._8_4_ < auVar65._8_4_) * auVar65._8_4_ |
             (uint)(auVar71._8_4_ >= auVar65._8_4_) * auVar71._8_4_;
    uVar77 = (uint)(auVar71._12_4_ < auVar65._12_4_) * auVar65._12_4_ |
             (uint)(auVar71._12_4_ >= auVar65._12_4_) * auVar71._12_4_;
    uVar11 = (uint)(auVar65._0_4_ < auVar71._0_4_) * auVar65._0_4_ |
             (uint)(auVar65._0_4_ >= auVar71._0_4_) * auVar71._0_4_;
    uVar22 = (uint)(auVar65._4_4_ < auVar71._4_4_) * auVar65._4_4_ |
             (uint)(auVar65._4_4_ >= auVar71._4_4_) * auVar71._4_4_;
    uVar23 = (uint)(auVar65._8_4_ < auVar71._8_4_) * auVar65._8_4_ |
             (uint)(auVar65._8_4_ >= auVar71._8_4_) * auVar71._8_4_;
    uVar24 = (uint)(auVar65._12_4_ < auVar71._12_4_) * auVar65._12_4_ |
             (uint)(auVar65._12_4_ >= auVar71._12_4_) * auVar71._12_4_;
    uVar11 = (uint)(auVar60._0_4_ < (int)uVar11) * auVar60._0_4_ |
             (auVar60._0_4_ >= (int)uVar11) * uVar11;
    uVar22 = (uint)(auVar60._4_4_ < (int)uVar22) * auVar60._4_4_ |
             (auVar60._4_4_ >= (int)uVar22) * uVar22;
    uVar23 = (uint)(auVar60._8_4_ < (int)uVar23) * auVar60._8_4_ |
             (auVar60._8_4_ >= (int)uVar23) * uVar23;
    uVar24 = (uint)(auVar60._12_4_ < (int)uVar24) * auVar60._12_4_ |
             (auVar60._12_4_ >= (int)uVar24) * uVar24;
    uVar70 = (uint)((int)uVar70 < auVar60._0_4_) * auVar60._0_4_ |
             ((int)uVar70 >= auVar60._0_4_) * uVar70;
    uVar73 = (uint)((int)uVar73 < auVar60._4_4_) * auVar60._4_4_ |
             ((int)uVar73 >= auVar60._4_4_) * uVar73;
    uVar75 = (uint)((int)uVar75 < auVar60._8_4_) * auVar60._8_4_ |
             ((int)uVar75 >= auVar60._8_4_) * uVar75;
    uVar77 = (uint)((int)uVar77 < auVar60._12_4_) * auVar60._12_4_ |
             ((int)uVar77 >= auVar60._12_4_) * uVar77;
    auStack0000000000000060._0_4_ =
         (uint)(0x27f < (int)uVar70) * 0x27f | (0x27f >= (int)uVar70) * uVar70;
    auStack0000000000000060._4_4_ =
         (uint)(0x27f < (int)uVar73) * 0x27f | (0x27f >= (int)uVar73) * uVar73;
    auStack0000000000000060._8_4_ =
         (uint)(0x27f < (int)uVar75) * 0x27f | (0x27f >= (int)uVar75) * uVar75;
    auStack0000000000000060._12_4_ =
         (uint)(0x27f < (int)uVar77) * 0x27f | (0x27f >= (int)uVar77) * uVar77;
    uStack0000000000000050 = (-1 < (int)uVar11) * uVar11 & 0xfffffffe;
    uStack0000000000000054 = (-1 < (int)uVar22) * uVar22 & 0xfffffffe;
    uStack0000000000000058 = (-1 < (int)uVar23) * uVar23 & 0xfffffffe;
    uStack000000000000005c = (-1 < (int)uVar24) * uVar24 & 0xfffffffe;
    uVar11 = (uint)(auVar82._0_4_ < auVar83._0_4_) * auVar82._0_4_ |
             (uint)(auVar82._0_4_ >= auVar83._0_4_) * auVar83._0_4_;
    uVar22 = (uint)(auVar82._4_4_ < auVar83._4_4_) * auVar82._4_4_ |
             (uint)(auVar82._4_4_ >= auVar83._4_4_) * auVar83._4_4_;
    uVar23 = (uint)(auVar82._8_4_ < auVar83._8_4_) * auVar82._8_4_ |
             (uint)(auVar82._8_4_ >= auVar83._8_4_) * auVar83._8_4_;
    uVar24 = (uint)(auVar82._12_4_ < auVar83._12_4_) * auVar82._12_4_ |
             (uint)(auVar82._12_4_ >= auVar83._12_4_) * auVar83._12_4_;
    *(float *)unaff_RBP[0x15] = (fVar84 - fVar33) * auVar20._0_4_;
    *(float *)(unaff_RBP[0x15] + 4) = (fVar85 - fVar91) * auVar20._4_4_;
    *(float *)(unaff_RBP[0x15] + 8) = (fVar86 - fVar35) * auVar20._8_4_;
    *(float *)(unaff_RBP[0x15] + 0xc) = (fVar87 - fVar34) * auVar20._12_4_;
    *(float *)unaff_RBP[0x16] = (fVar90 - fVar33) * auVar20._0_4_;
    *(float *)(unaff_RBP[0x16] + 4) = (auVar19._8_4_ - fVar91) * auVar20._4_4_;
    *(float *)(unaff_RBP[0x16] + 8) = (auVar28._8_4_ - fVar35) * auVar20._8_4_;
    *(float *)(unaff_RBP[0x16] + 0xc) = (fVar38 - fVar34) * auVar20._12_4_;
    uVar11 = (uint)(auVar79._0_4_ < (int)uVar11) * auVar79._0_4_ |
             (auVar79._0_4_ >= (int)uVar11) * uVar11;
    uVar22 = (uint)(auVar79._4_4_ < (int)uVar22) * auVar79._4_4_ |
             (auVar79._4_4_ >= (int)uVar22) * uVar22;
    uVar23 = (uint)(auVar79._8_4_ < (int)uVar23) * auVar79._8_4_ |
             (auVar79._8_4_ >= (int)uVar23) * uVar23;
    uVar24 = (uint)(auVar79._12_4_ < (int)uVar24) * auVar79._12_4_ |
             (auVar79._12_4_ >= (int)uVar24) * uVar24;
    uVar70 = (uint)(auVar83._0_4_ < auVar82._0_4_) * auVar82._0_4_ |
             (uint)(auVar83._0_4_ >= auVar82._0_4_) * auVar83._0_4_;
    uVar73 = (uint)(auVar83._4_4_ < auVar82._4_4_) * auVar82._4_4_ |
             (uint)(auVar83._4_4_ >= auVar82._4_4_) * auVar83._4_4_;
    uVar75 = (uint)(auVar83._8_4_ < auVar82._8_4_) * auVar82._8_4_ |
             (uint)(auVar83._8_4_ >= auVar82._8_4_) * auVar83._8_4_;
    uVar77 = (uint)(auVar83._12_4_ < auVar82._12_4_) * auVar82._12_4_ |
             (uint)(auVar83._12_4_ >= auVar82._12_4_) * auVar83._12_4_;
    auVar25._4_4_ = (-1 < (int)uVar22) * uVar22;
    auVar25._0_4_ = (-1 < (int)uVar11) * uVar11;
    auVar25._8_4_ = (-1 < (int)uVar23) * uVar23;
    auVar25._12_4_ = (-1 < (int)uVar24) * uVar24;
    uVar11 = (uint)((int)uVar70 < auVar79._0_4_) * auVar79._0_4_ |
             ((int)uVar70 >= auVar79._0_4_) * uVar70;
    uVar22 = (uint)((int)uVar73 < auVar79._4_4_) * auVar79._4_4_ |
             ((int)uVar73 >= auVar79._4_4_) * uVar73;
    uVar23 = (uint)((int)uVar75 < auVar79._8_4_) * auVar79._8_4_ |
             ((int)uVar75 >= auVar79._8_4_) * uVar75;
    uVar24 = (uint)((int)uVar77 < auVar79._12_4_) * auVar79._12_4_ |
             ((int)uVar77 >= auVar79._12_4_) * uVar77;
    lVar17 = 0;
    auStack0000000000000070 = auVar25 & render_system_ui;
    *(uint *)unaff_RBP[-8] = (uint)(0x167 < (int)uVar11) * 0x167 | (0x167 >= (int)uVar11) * uVar11;
    *(uint *)(unaff_RBP[-8] + 4) =
         (uint)(0x167 < (int)uVar22) * 0x167 | (0x167 >= (int)uVar22) * uVar22;
    *(uint *)(unaff_RBP[-8] + 8) =
         (uint)(0x167 < (int)uVar23) * 0x167 | (0x167 >= (int)uVar23) * uVar23;
    *(uint *)(unaff_RBP[-8] + 0xc) =
         (uint)(0x167 < (int)uVar24) * 0x167 | (0x167 >= (int)uVar24) * uVar24;
    do {
      if (0 < *(int *)(&stack0x00000030 + lVar17)) {
        iVar16 = *(int *)(&stack0x00000070 + lVar17);
        iVar4 = *(int *)((int64_t)&stack0x00000050 + lVar17);
        uVar3 = *(int32_t *)(unaff_RBP[0x14] + lVar17);
        iVar15 = *(int *)(unaff_RBP[-4] + lVar17);
        iStack000000000000004c = *(int *)(unaff_RBP[-3] + lVar17);
        iVar5 = *(int *)(unaff_RBP[-2] + lVar17);
        iVar6 = *(int *)(unaff_RBP[-6] + lVar17);
        iVar7 = *(int *)(unaff_RBP[-5] + lVar17);
        iVar67 = *(int *)(unaff_RBP[1] + lVar17);
        fVar54 = *(float *)(unaff_RBP[0x15] + lVar17);
        fVar38 = *(float *)(unaff_RBP[0x16] + lVar17);
        iVar8 = *(int *)(unaff_RBP[-7] + lVar17);
        iVar68 = *(int *)(unaff_RBP[-1] + lVar17);
        iVar69 = *(int *)(*unaff_RBP + lVar17);
        iVar9 = *(int *)(unaff_RBP[-8] + lVar17);
        iVar10 = *(int *)(&stack0x00000060 + lVar17);
        *(int32_t *)unaff_RBP[6] = uVar3;
        *(int32_t *)(unaff_RBP[6] + 4) = uVar3;
        *(int32_t *)(unaff_RBP[6] + 8) = uVar3;
        *(int32_t *)(unaff_RBP[6] + 0xc) = uVar3;
        auVar61._4_4_ = iVar7;
        auVar61._0_4_ = iVar7;
        auVar61._8_4_ = iVar7;
        auVar61._12_4_ = iVar7;
        auVar31._4_4_ = iVar15;
        auVar31._0_4_ = iVar15;
        auVar31._8_4_ = iVar15;
        auVar31._12_4_ = iVar15;
        *(int *)unaff_RBP[8] = iVar15 << 1;
        *(int *)(unaff_RBP[8] + 4) = iVar15 << 1;
        *(int *)(unaff_RBP[8] + 8) = iVar15 << 1;
        *(int *)(unaff_RBP[8] + 0xc) = iVar15 << 1;
        iVar15 = (iVar16 * 0x140 + iVar4) * 2;
        auVar40._4_4_ = iStack000000000000004c;
        auVar40._0_4_ = iStack000000000000004c;
        auVar40._8_4_ = iStack000000000000004c;
        auVar40._12_4_ = iStack000000000000004c;
        auVar52._4_4_ = iVar5;
        auVar52._0_4_ = iVar5;
        auVar52._8_4_ = iVar5;
        auVar52._12_4_ = iVar5;
        iStack0000000000000040 = iStack000000000000004c * 2;
        iStack0000000000000044 = iStack000000000000004c * 2;
        iStack0000000000000048 = iStack000000000000004c * 2;
        iStack000000000000004c = iStack000000000000004c * 2;
        auVar56._4_4_ = iVar6;
        auVar56._0_4_ = iVar6;
        auVar56._8_4_ = iVar6;
        auVar56._12_4_ = iVar6;
        auVar46._4_4_ = iVar8;
        auVar46._0_4_ = iVar8;
        auVar46._8_4_ = iVar8;
        auVar46._12_4_ = iVar8;
        auVar21._4_4_ = iVar16;
        auVar21._0_4_ = iVar16;
        auVar21._8_4_ = iVar16 + 1;
        auVar21._12_4_ = iVar16 + 1;
        auVar26._4_4_ = iVar4 + 1;
        auVar26._0_4_ = iVar4;
        auVar26._8_4_ = iVar4;
        auVar26._12_4_ = iVar4 + 1;
        auVar25 = pmulld(auVar61,auVar26);
        auVar20 = pmulld(auVar52,auVar21);
        auVar72._0_4_ = iVar67 + auVar20._0_4_ + auVar25._0_4_;
        auVar72._4_4_ = iVar67 + auVar20._4_4_ + auVar25._4_4_;
        auVar72._8_4_ = iVar67 + auVar20._8_4_ + auVar25._8_4_;
        auVar72._12_4_ = iVar67 + auVar20._12_4_ + auVar25._12_4_;
        auVar20 = pmulld(auVar31,auVar21);
        auVar25 = pmulld(auVar40,auVar21);
        auVar29 = pmulld(auVar46,auVar26);
        auVar80._0_4_ = iVar68 + auVar20._0_4_ + auVar29._0_4_;
        auVar80._4_4_ = iVar68 + auVar20._4_4_ + auVar29._4_4_;
        auVar80._8_4_ = iVar68 + auVar20._8_4_ + auVar29._8_4_;
        auVar80._12_4_ = iVar68 + auVar20._12_4_ + auVar29._12_4_;
        auVar20 = pmulld(auVar56,auVar26);
        auVar66._0_4_ = iVar69 + auVar25._0_4_ + auVar20._0_4_;
        auVar66._4_4_ = iVar69 + auVar25._4_4_ + auVar20._4_4_;
        auVar66._8_4_ = iVar69 + auVar25._8_4_ + auVar20._8_4_;
        auVar66._12_4_ = iVar69 + auVar25._12_4_ + auVar20._12_4_;
        for (; iVar16 < iVar9; iVar16 = iVar16 + 2) {
          auVar20 = ZEXT816(0);
          iVar67 = auVar66._4_4_;
          iVar68 = auVar66._8_4_;
          iVar69 = auVar66._12_4_;
          iVar74 = auVar72._4_4_;
          iVar76 = auVar72._8_4_;
          iVar78 = auVar72._12_4_;
          auVar32._0_4_ =
               (float)auVar66._0_4_ * fVar54 + *(float *)unaff_RBP[6] +
               (float)auVar72._0_4_ * fVar38;
          auVar32._4_4_ =
               (float)iVar67 * fVar54 + *(float *)(unaff_RBP[6] + 4) + (float)iVar74 * fVar38;
          auVar32._8_4_ =
               (float)iVar68 * fVar54 + *(float *)(unaff_RBP[6] + 8) + (float)iVar76 * fVar38;
          auVar32._12_4_ =
               (float)iVar69 * fVar54 + *(float *)(unaff_RBP[6] + 0xc) + (float)iVar78 * fVar38;
          if (iVar4 < iVar10) {
            uVar14 = (uint64_t)(((iVar10 - iVar4) - 1U >> 1) + 1);
            auVar25 = auVar80;
            auVar29 = auVar66;
            auVar30 = auVar72;
            iVar13 = iVar15;
            do {
              lVar12 = (int64_t)iVar13;
              iVar13 = iVar13 + 4;
              auVar41._0_4_ = auVar25._0_4_ + iVar8 * 2;
              auVar41._4_4_ = auVar25._4_4_ + iVar8 * 2;
              auVar41._8_4_ = auVar25._8_4_ + iVar8 * 2;
              auVar41._12_4_ = auVar25._12_4_ + iVar8 * 2;
              auVar47._0_4_ = auVar29._0_4_ + iVar6 * 2;
              auVar47._4_4_ = auVar29._4_4_ + iVar6 * 2;
              auVar47._8_4_ = auVar29._8_4_ + iVar6 * 2;
              auVar47._12_4_ = auVar29._12_4_ + iVar6 * 2;
              auVar53._0_4_ = auVar30._0_4_ + iVar7 * 2;
              auVar53._4_4_ = auVar30._4_4_ + iVar7 * 2;
              auVar53._8_4_ = auVar30._8_4_ + iVar7 * 2;
              auVar53._12_4_ = auVar30._12_4_ + iVar7 * 2;
              pfVar1 = (float *)(in_R11 + lVar12 * 4);
              fVar33 = auVar32._4_4_;
              fVar36 = auVar32._8_4_;
              fVar37 = auVar32._12_4_;
              auVar27._4_4_ = -(uint)(pfVar1[1] <= fVar33);
              auVar27._0_4_ = -(uint)(*pfVar1 <= auVar32._0_4_);
              auVar27._8_4_ = -(uint)(pfVar1[2] <= fVar36);
              auVar27._12_4_ = -(uint)(pfVar1[3] <= fVar37);
              auVar32._0_4_ =
                   auVar32._0_4_ + (float)(iVar6 * 2) * fVar54 + (float)(iVar7 * 2) * fVar38;
              auVar32._4_4_ = fVar33 + (float)(iVar6 * 2) * fVar54 + (float)(iVar7 * 2) * fVar38;
              auVar32._8_4_ = fVar36 + (float)(iVar6 * 2) * fVar54 + (float)(iVar7 * 2) * fVar38;
              auVar32._12_4_ = fVar37 + (float)(iVar6 * 2) * fVar54 + (float)(iVar7 * 2) * fVar38;
              auVar20 = ~(auVar29 | auVar25 | auVar30) & auVar27 | auVar20;
              uVar14 = uVar14 - 1;
              auVar25 = auVar41;
              auVar29 = auVar47;
              auVar30 = auVar53;
            } while (uVar14 != 0);
          }
          if ((render_system_ui & auVar20) != (int8_t  [16])0x0) goto FUN_18049202a;
          auVar81._0_4_ = auVar80._0_4_ + *(int *)unaff_RBP[8];
          auVar81._4_4_ = auVar80._4_4_ + *(int *)(unaff_RBP[8] + 4);
          auVar81._8_4_ = auVar80._8_4_ + *(int *)(unaff_RBP[8] + 8);
          auVar81._12_4_ = auVar80._12_4_ + *(int *)(unaff_RBP[8] + 0xc);
          auVar66._0_4_ = auVar66._0_4_ + iStack0000000000000040;
          auVar66._4_4_ = iVar67 + iStack0000000000000044;
          auVar66._8_4_ = iVar68 + iStack0000000000000048;
          auVar66._12_4_ = iVar69 + iStack000000000000004c;
          iVar15 = iVar15 + 0x500;
          auVar72._0_4_ = auVar72._0_4_ + iVar5 * 2;
          auVar72._4_4_ = iVar74 + iVar5 * 2;
          auVar72._8_4_ = iVar76 + iVar5 * 2;
          auVar72._12_4_ = iVar78 + iVar5 * 2;
          auVar80 = auVar81;
        }
      }
      lVar17 = lVar17 + 4;
    } while (lVar17 < 0x10);
    uVar18 = uVar18 + 4;
  } while (uVar18 < 0xc);
FUN_18049202a:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)unaff_RBP[0x1b] ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18049202a(void)
void FUN_18049202a(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x1b0) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180492057(void)
void FUN_180492057(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x1b0) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180492067(void)
void FUN_180492067(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x1b0) ^ (uint64_t)&stack0x00000000);
}



void thunk_FUN_18049202a(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x1b0) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



