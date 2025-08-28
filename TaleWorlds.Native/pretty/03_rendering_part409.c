#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part409.c - 6 个函数

// 函数: void FUN_180492418(void)
void FUN_180492418(void)

{
  float *pfVar1;
  int8_t (*pauVar2) [16];
  int8_t (*pauVar3) [16];
  int8_t (*pauVar4) [16];
  int8_t (*pauVar5) [16];
  int8_t (*pauVar6) [16];
  int8_t (*pauVar7) [16];
  int8_t (*pauVar8) [16];
  int8_t (*pauVar9) [16];
  int8_t (*pauVar10) [16];
  int8_t (*pauVar11) [16];
  int8_t (*pauVar12) [16];
  int8_t (*pauVar13) [16];
  int32_t uVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int64_t lVar32;
  int iVar33;
  uint64_t uVar34;
  int8_t (*unaff_RBP) [16];
  int iVar35;
  int iVar36;
  int64_t lVar37;
  int64_t in_R11;
  uint uVar38;
  int64_t unaff_R15;
  uint uVar39;
  uint uVar43;
  uint uVar44;
  int8_t auVar40 [16];
  int8_t auVar41 [16];
  uint uVar45;
  int8_t auVar42 [16];
  int8_t auVar46 [16];
  int8_t auVar47 [16];
  int8_t auVar48 [16];
  float fVar53;
  float fVar54;
  int8_t auVar49 [16];
  int8_t auVar50 [16];
  int8_t auVar51 [16];
  int8_t auVar52 [16];
  float fVar55;
  int8_t auVar56 [16];
  int8_t auVar57 [16];
  int8_t auVar58 [16];
  int8_t auVar59 [16];
  int8_t auVar60 [16];
  int8_t auVar61 [16];
  int8_t auVar62 [16];
  int8_t auVar63 [16];
  int8_t auVar64 [16];
  int8_t auVar65 [16];
  int8_t auVar66 [16];
  int8_t auVar67 [16];
  int8_t auVar68 [16];
  int iVar70;
  int iVar71;
  int8_t auVar69 [16];
  int iVar72;
  uint uVar73;
  uint uVar76;
  int iVar77;
  uint uVar78;
  int iVar79;
  int8_t auVar74 [16];
  uint uVar80;
  int8_t auVar75 [16];
  int iVar81;
  int8_t auVar82 [16];
  int8_t auVar83 [16];
  int8_t auVar84 [16];
  int8_t auVar85 [16];
  int8_t auVar86 [16];
  int8_t auStack0000000000000030 [16];
  uint uStack0000000000000040;
  uint uStack0000000000000044;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  int8_t auStack0000000000000050 [16];
  int8_t auStack0000000000000060 [16];
  uint uStack0000000000000070;
  uint uStack0000000000000074;
  uint uStack0000000000000078;
  uint uStack000000000000007c;
  
  MXCSR = MXCSR | 0x8040;
  uVar38 = 0;
  do {
    uVar39 = uVar38 * 3;
    uVar44 = (uVar38 + 3) * 3;
    uVar43 = (uVar38 + 2) * 3;
    pauVar2 = unaff_RBP + (uint64_t)*(uint *)(unaff_R15 + 0x9f8010 + (uint64_t)uVar39 * 4) + 10;
    fVar15 = *(float *)(*pauVar2 + 8);
    pauVar3 = unaff_RBP +
              (uint64_t)*(uint *)(unaff_R15 + 0x9f8010 + (uint64_t)(uVar39 + 3) * 4) + 10;
    fVar16 = *(float *)(*pauVar3 + 8);
    pauVar4 = unaff_RBP + (uint64_t)*(uint *)(unaff_R15 + 0x9f8010 + (uint64_t)uVar43 * 4) + 10;
    fVar53 = *(float *)(*pauVar4 + 8);
    pauVar5 = unaff_RBP + (uint64_t)*(uint *)(unaff_R15 + 0x9f8010 + (uint64_t)uVar44 * 4) + 10;
    fVar54 = *(float *)(*pauVar5 + 8);
    pauVar6 = unaff_RBP +
              (uint64_t)*(uint *)(unaff_R15 + 0x9f8010 + (uint64_t)(uVar39 + 2) * 4) + 10;
    fVar55 = *(float *)(*pauVar6 + 8);
    auVar74._0_4_ = (int)*(float *)*pauVar2;
    auVar74._4_4_ = (int)*(float *)*pauVar3;
    auVar74._8_4_ = (int)*(float *)*pauVar4;
    auVar74._12_4_ = (int)*(float *)*pauVar5;
    pauVar7 = unaff_RBP +
              (uint64_t)*(uint *)(unaff_R15 + 0x9f8010 + (uint64_t)(uVar39 + 5) * 4) + 10;
    fVar25 = *(float *)(*pauVar7 + 8);
    pauVar8 = unaff_RBP +
              (uint64_t)*(uint *)(unaff_R15 + 0x9f8010 + (uint64_t)(uVar43 + 2) * 4) + 10;
    fVar26 = *(float *)(*pauVar8 + 8);
    pauVar9 = unaff_RBP +
              (uint64_t)*(uint *)(unaff_R15 + 0x9f8010 + (uint64_t)(uVar44 + 2) * 4) + 10;
    fVar27 = *(float *)(*pauVar9 + 8);
    pauVar10 = unaff_RBP +
               (uint64_t)*(uint *)(unaff_R15 + 0x9f8010 + (uint64_t)(uVar39 + 1) * 4) + 10;
    fVar28 = *(float *)(*pauVar10 + 8);
    pauVar11 = unaff_RBP +
               (uint64_t)*(uint *)(unaff_R15 + 0x9f8010 + (uint64_t)(uVar39 + 4) * 4) + 10;
    fVar29 = *(float *)(*pauVar11 + 8);
    pauVar12 = unaff_RBP +
               (uint64_t)*(uint *)(unaff_R15 + 0x9f8010 + (uint64_t)(uVar43 + 1) * 4) + 10;
    fVar30 = *(float *)(*pauVar12 + 8);
    pauVar13 = unaff_RBP +
               (uint64_t)*(uint *)(unaff_R15 + 0x9f8010 + (uint64_t)(uVar44 + 1) * 4) + 10;
    fVar31 = *(float *)(*pauVar13 + 8);
    auVar82._0_4_ = (int)*(float *)(*pauVar10 + 4);
    auVar82._4_4_ = (int)*(float *)(*pauVar11 + 4);
    auVar82._8_4_ = (int)*(float *)(*pauVar12 + 4);
    auVar82._12_4_ = (int)*(float *)(*pauVar13 + 4);
    lVar37 = 0;
    auVar69._0_4_ = (int)*(float *)*pauVar6;
    auVar69._4_4_ = (int)*(float *)*pauVar7;
    auVar69._8_4_ = (int)*(float *)*pauVar8;
    auVar69._12_4_ = (int)*(float *)*pauVar9;
    auVar85._0_4_ = (int)*(float *)(*pauVar6 + 4);
    auVar85._4_4_ = (int)*(float *)(*pauVar7 + 4);
    auVar85._8_4_ = (int)*(float *)(*pauVar8 + 4);
    auVar85._12_4_ = (int)*(float *)(*pauVar9 + 4);
    auVar86._0_4_ = (int)*(float *)(*pauVar2 + 4);
    auVar86._4_4_ = (int)*(float *)(*pauVar3 + 4);
    auVar86._8_4_ = (int)*(float *)(*pauVar4 + 4);
    auVar86._12_4_ = (int)*(float *)(*pauVar5 + 4);
    auVar67._0_4_ = (int)*(float *)*pauVar10;
    auVar67._4_4_ = (int)*(float *)*pauVar11;
    auVar67._8_4_ = (int)*(float *)*pauVar12;
    auVar67._12_4_ = (int)*(float *)*pauVar13;
    *(float *)unaff_RBP[7] = fVar15;
    *(float *)(unaff_RBP[7] + 4) = fVar16;
    *(float *)(unaff_RBP[7] + 8) = fVar53;
    *(float *)(unaff_RBP[7] + 0xc) = fVar54;
    auVar59._0_4_ = auVar74._0_4_ - auVar67._0_4_;
    auVar59._4_4_ = auVar74._4_4_ - auVar67._4_4_;
    auVar59._8_4_ = auVar74._8_4_ - auVar67._8_4_;
    auVar59._12_4_ = auVar74._12_4_ - auVar67._12_4_;
    auVar62._0_4_ = auVar86._0_4_ - auVar85._0_4_;
    auVar62._4_4_ = auVar86._4_4_ - auVar85._4_4_;
    auVar62._8_4_ = auVar86._8_4_ - auVar85._8_4_;
    auVar62._12_4_ = auVar86._12_4_ - auVar85._12_4_;
    unaff_RBP[-4] = auVar59;
    unaff_RBP[-6] = auVar62;
    *(int *)unaff_RBP[-8] = auVar85._0_4_ - auVar82._0_4_;
    *(int *)(unaff_RBP[-8] + 4) = auVar85._4_4_ - auVar82._4_4_;
    *(int *)(unaff_RBP[-8] + 8) = auVar85._8_4_ - auVar82._8_4_;
    *(int *)(unaff_RBP[-8] + 0xc) = auVar85._12_4_ - auVar82._12_4_;
    auVar46 = pmulld(auVar69,auVar82);
    auVar49 = pmulld(auVar67,auVar86);
    auVar56._0_4_ = auVar69._0_4_ - auVar74._0_4_;
    auVar56._4_4_ = auVar69._4_4_ - auVar74._4_4_;
    auVar56._8_4_ = auVar69._8_4_ - auVar74._8_4_;
    auVar56._12_4_ = auVar69._12_4_ - auVar74._12_4_;
    *(int *)unaff_RBP[-5] = auVar67._0_4_ - auVar69._0_4_;
    *(int *)(unaff_RBP[-5] + 4) = auVar67._4_4_ - auVar69._4_4_;
    *(int *)(unaff_RBP[-5] + 8) = auVar67._8_4_ - auVar69._8_4_;
    *(int *)(unaff_RBP[-5] + 0xc) = auVar67._12_4_ - auVar69._12_4_;
    auVar65._0_4_ = auVar82._0_4_ - auVar86._0_4_;
    auVar65._4_4_ = auVar82._4_4_ - auVar86._4_4_;
    auVar65._8_4_ = auVar82._8_4_ - auVar86._8_4_;
    auVar65._12_4_ = auVar82._12_4_ - auVar86._12_4_;
    unaff_RBP[-3] = auVar56;
    unaff_RBP[-7] = auVar65;
    auVar40 = pmulld(auVar67,auVar85);
    auVar41 = pmulld(auVar74,auVar82);
    auVar50._0_4_ = auVar49._0_4_ - auVar41._0_4_;
    auVar50._4_4_ = auVar49._4_4_ - auVar41._4_4_;
    auVar50._8_4_ = auVar49._8_4_ - auVar41._8_4_;
    auVar50._12_4_ = auVar49._12_4_ - auVar41._12_4_;
    *(int *)unaff_RBP[-2] = auVar46._0_4_ - auVar40._0_4_;
    *(int *)(unaff_RBP[-2] + 4) = auVar46._4_4_ - auVar40._4_4_;
    *(int *)(unaff_RBP[-2] + 8) = auVar46._8_4_ - auVar40._8_4_;
    *(int *)(unaff_RBP[-2] + 0xc) = auVar46._12_4_ - auVar40._12_4_;
    unaff_RBP[-1] = auVar50;
    auVar41 = pmulld(auVar74,auVar85);
    auVar40 = pmulld(auVar69,auVar86);
    auVar46._0_4_ = auVar41._0_4_ - auVar40._0_4_;
    auVar46._4_4_ = auVar41._4_4_ - auVar40._4_4_;
    auVar46._8_4_ = auVar41._8_4_ - auVar40._8_4_;
    auVar46._12_4_ = auVar41._12_4_ - auVar40._12_4_;
    *unaff_RBP = auVar46;
    auVar40 = pmulld(auVar56,auVar65);
    auVar41 = pmulld(auVar59,auVar62);
    auStack0000000000000030._0_4_ = auVar40._0_4_ - auVar41._0_4_;
    auStack0000000000000030._4_4_ = auVar40._4_4_ - auVar41._4_4_;
    auStack0000000000000030._8_4_ = auVar40._8_4_ - auVar41._8_4_;
    auStack0000000000000030._12_4_ = auVar40._12_4_ - auVar41._12_4_;
    auVar40._0_4_ = (float)auStack0000000000000030._0_4_;
    auVar40._4_4_ = (float)auStack0000000000000030._4_4_;
    auVar40._8_4_ = (float)auStack0000000000000030._8_4_;
    auVar40._12_4_ = (float)auStack0000000000000030._12_4_;
    auVar40 = rcpps(auVar46,auVar40);
    uVar73 = (uint)(auVar74._0_4_ < auVar69._0_4_) * auVar69._0_4_ |
             (uint)(auVar74._0_4_ >= auVar69._0_4_) * auVar74._0_4_;
    uVar76 = (uint)(auVar74._4_4_ < auVar69._4_4_) * auVar69._4_4_ |
             (uint)(auVar74._4_4_ >= auVar69._4_4_) * auVar74._4_4_;
    uVar78 = (uint)(auVar74._8_4_ < auVar69._8_4_) * auVar69._8_4_ |
             (uint)(auVar74._8_4_ >= auVar69._8_4_) * auVar74._8_4_;
    uVar80 = (uint)(auVar74._12_4_ < auVar69._12_4_) * auVar69._12_4_ |
             (uint)(auVar74._12_4_ >= auVar69._12_4_) * auVar74._12_4_;
    uVar39 = (uint)(auVar69._0_4_ < auVar74._0_4_) * auVar69._0_4_ |
             (uint)(auVar69._0_4_ >= auVar74._0_4_) * auVar74._0_4_;
    uVar43 = (uint)(auVar69._4_4_ < auVar74._4_4_) * auVar69._4_4_ |
             (uint)(auVar69._4_4_ >= auVar74._4_4_) * auVar74._4_4_;
    uVar44 = (uint)(auVar69._8_4_ < auVar74._8_4_) * auVar69._8_4_ |
             (uint)(auVar69._8_4_ >= auVar74._8_4_) * auVar74._8_4_;
    uVar45 = (uint)(auVar69._12_4_ < auVar74._12_4_) * auVar69._12_4_ |
             (uint)(auVar69._12_4_ >= auVar74._12_4_) * auVar74._12_4_;
    uVar39 = (uint)(auVar67._0_4_ < (int)uVar39) * auVar67._0_4_ |
             (auVar67._0_4_ >= (int)uVar39) * uVar39;
    uVar43 = (uint)(auVar67._4_4_ < (int)uVar43) * auVar67._4_4_ |
             (auVar67._4_4_ >= (int)uVar43) * uVar43;
    uVar44 = (uint)(auVar67._8_4_ < (int)uVar44) * auVar67._8_4_ |
             (auVar67._8_4_ >= (int)uVar44) * uVar44;
    uVar45 = (uint)(auVar67._12_4_ < (int)uVar45) * auVar67._12_4_ |
             (auVar67._12_4_ >= (int)uVar45) * uVar45;
    uVar73 = (uint)((int)uVar73 < auVar67._0_4_) * auVar67._0_4_ |
             ((int)uVar73 >= auVar67._0_4_) * uVar73;
    uVar76 = (uint)((int)uVar76 < auVar67._4_4_) * auVar67._4_4_ |
             ((int)uVar76 >= auVar67._4_4_) * uVar76;
    uVar78 = (uint)((int)uVar78 < auVar67._8_4_) * auVar67._8_4_ |
             ((int)uVar78 >= auVar67._8_4_) * uVar78;
    uVar80 = (uint)((int)uVar80 < auVar67._12_4_) * auVar67._12_4_ |
             ((int)uVar80 >= auVar67._12_4_) * uVar80;
    auStack0000000000000050._0_4_ =
         (uint)(0x27f < (int)uVar73) * 0x27f | (0x27f >= (int)uVar73) * uVar73;
    auStack0000000000000050._4_4_ =
         (uint)(0x27f < (int)uVar76) * 0x27f | (0x27f >= (int)uVar76) * uVar76;
    auStack0000000000000050._8_4_ =
         (uint)(0x27f < (int)uVar78) * 0x27f | (0x27f >= (int)uVar78) * uVar78;
    auStack0000000000000050._12_4_ =
         (uint)(0x27f < (int)uVar80) * 0x27f | (0x27f >= (int)uVar80) * uVar80;
    uStack0000000000000040 = (-1 < (int)uVar39) * uVar39 & 0xfffffffe;
    uStack0000000000000044 = (-1 < (int)uVar43) * uVar43 & 0xfffffffe;
    uStack0000000000000048 = (-1 < (int)uVar44) * uVar44 & 0xfffffffe;
    uStack000000000000004c = (-1 < (int)uVar45) * uVar45 & 0xfffffffe;
    uVar39 = (uint)(auVar85._0_4_ < auVar86._0_4_) * auVar85._0_4_ |
             (uint)(auVar85._0_4_ >= auVar86._0_4_) * auVar86._0_4_;
    uVar43 = (uint)(auVar85._4_4_ < auVar86._4_4_) * auVar85._4_4_ |
             (uint)(auVar85._4_4_ >= auVar86._4_4_) * auVar86._4_4_;
    uVar44 = (uint)(auVar85._8_4_ < auVar86._8_4_) * auVar85._8_4_ |
             (uint)(auVar85._8_4_ >= auVar86._8_4_) * auVar86._8_4_;
    uVar45 = (uint)(auVar85._12_4_ < auVar86._12_4_) * auVar85._12_4_ |
             (uint)(auVar85._12_4_ >= auVar86._12_4_) * auVar86._12_4_;
    *(float *)unaff_RBP[8] = (fVar55 - fVar15) * auVar40._0_4_;
    *(float *)(unaff_RBP[8] + 4) = (fVar25 - fVar16) * auVar40._4_4_;
    *(float *)(unaff_RBP[8] + 8) = (fVar26 - fVar53) * auVar40._8_4_;
    *(float *)(unaff_RBP[8] + 0xc) = (fVar27 - fVar54) * auVar40._12_4_;
    uVar39 = (uint)(auVar82._0_4_ < (int)uVar39) * auVar82._0_4_ |
             (auVar82._0_4_ >= (int)uVar39) * uVar39;
    uVar43 = (uint)(auVar82._4_4_ < (int)uVar43) * auVar82._4_4_ |
             (auVar82._4_4_ >= (int)uVar43) * uVar43;
    uVar44 = (uint)(auVar82._8_4_ < (int)uVar44) * auVar82._8_4_ |
             (auVar82._8_4_ >= (int)uVar44) * uVar44;
    uVar45 = (uint)(auVar82._12_4_ < (int)uVar45) * auVar82._12_4_ |
             (auVar82._12_4_ >= (int)uVar45) * uVar45;
    *(float *)unaff_RBP[9] = (fVar28 - fVar15) * auVar40._0_4_;
    *(float *)(unaff_RBP[9] + 4) = (fVar29 - fVar16) * auVar40._4_4_;
    *(float *)(unaff_RBP[9] + 8) = (fVar30 - fVar53) * auVar40._8_4_;
    *(float *)(unaff_RBP[9] + 0xc) = (fVar31 - fVar54) * auVar40._12_4_;
    uVar73 = (uint)(auVar86._0_4_ < auVar85._0_4_) * auVar85._0_4_ |
             (uint)(auVar86._0_4_ >= auVar85._0_4_) * auVar86._0_4_;
    uVar76 = (uint)(auVar86._4_4_ < auVar85._4_4_) * auVar85._4_4_ |
             (uint)(auVar86._4_4_ >= auVar85._4_4_) * auVar86._4_4_;
    uVar78 = (uint)(auVar86._8_4_ < auVar85._8_4_) * auVar85._8_4_ |
             (uint)(auVar86._8_4_ >= auVar85._8_4_) * auVar86._8_4_;
    uVar80 = (uint)(auVar86._12_4_ < auVar85._12_4_) * auVar85._12_4_ |
             (uint)(auVar86._12_4_ >= auVar85._12_4_) * auVar86._12_4_;
    auVar41._4_4_ = (-1 < (int)uVar43) * uVar43;
    auVar41._0_4_ = (-1 < (int)uVar39) * uVar39;
    auVar41._8_4_ = (-1 < (int)uVar44) * uVar44;
    auVar41._12_4_ = (-1 < (int)uVar45) * uVar45;
    uVar39 = (uint)((int)uVar73 < auVar82._0_4_) * auVar82._0_4_ |
             ((int)uVar73 >= auVar82._0_4_) * uVar73;
    uVar43 = (uint)((int)uVar76 < auVar82._4_4_) * auVar82._4_4_ |
             ((int)uVar76 >= auVar82._4_4_) * uVar76;
    uVar44 = (uint)((int)uVar78 < auVar82._8_4_) * auVar82._8_4_ |
             ((int)uVar78 >= auVar82._8_4_) * uVar78;
    uVar45 = (uint)((int)uVar80 < auVar82._12_4_) * auVar82._12_4_ |
             ((int)uVar80 >= auVar82._12_4_) * uVar80;
    auStack0000000000000060 = auVar41 & render_system_memory;
    uStack0000000000000070 = (uint)(0x167 < (int)uVar39) * 0x167 | (0x167 >= (int)uVar39) * uVar39;
    uStack0000000000000074 = (uint)(0x167 < (int)uVar43) * 0x167 | (0x167 >= (int)uVar43) * uVar43;
    uStack0000000000000078 = (uint)(0x167 < (int)uVar44) * 0x167 | (0x167 >= (int)uVar44) * uVar44;
    uStack000000000000007c = (uint)(0x167 < (int)uVar45) * 0x167 | (0x167 >= (int)uVar45) * uVar45;
    do {
      if (0 < *(int *)(&stack0x00000030 + lVar37)) {
        iVar36 = *(int *)(&stack0x00000060 + lVar37);
        iVar17 = *(int *)((int64_t)&stack0x00000040 + lVar37);
        uVar14 = *(int32_t *)(unaff_RBP[7] + lVar37);
        iVar35 = *(int *)(unaff_RBP[-5] + lVar37);
        iVar18 = *(int *)(unaff_RBP[-4] + lVar37);
        iVar19 = *(int *)(unaff_RBP[-3] + lVar37);
        iVar20 = *(int *)(unaff_RBP[-7] + lVar37);
        iVar21 = *(int *)(unaff_RBP[-6] + lVar37);
        iVar70 = *(int *)(*unaff_RBP + lVar37);
        fVar15 = *(float *)(unaff_RBP[8] + lVar37);
        fVar16 = *(float *)(unaff_RBP[9] + lVar37);
        iVar22 = *(int *)(unaff_RBP[-8] + lVar37);
        iVar71 = *(int *)(unaff_RBP[-2] + lVar37);
        iVar72 = *(int *)(unaff_RBP[-1] + lVar37);
        iVar23 = *(int *)((int64_t)&stack0x00000070 + lVar37);
        iVar24 = *(int *)(&stack0x00000050 + lVar37);
        *(int32_t *)unaff_RBP[1] = uVar14;
        *(int32_t *)(unaff_RBP[1] + 4) = uVar14;
        *(int32_t *)(unaff_RBP[1] + 8) = uVar14;
        *(int32_t *)(unaff_RBP[1] + 0xc) = uVar14;
        auVar68._4_4_ = iVar21;
        auVar68._0_4_ = iVar21;
        auVar68._8_4_ = iVar21;
        auVar68._12_4_ = iVar21;
        auVar51._4_4_ = iVar35;
        auVar51._0_4_ = iVar35;
        auVar51._8_4_ = iVar35;
        auVar51._12_4_ = iVar35;
        *(int *)unaff_RBP[3] = iVar35 << 1;
        *(int *)(unaff_RBP[3] + 4) = iVar35 << 1;
        *(int *)(unaff_RBP[3] + 8) = iVar35 << 1;
        *(int *)(unaff_RBP[3] + 0xc) = iVar35 << 1;
        iVar35 = (iVar36 * 0x140 + iVar17) * 2;
        auVar57._4_4_ = iVar18;
        auVar57._0_4_ = iVar18;
        auVar57._8_4_ = iVar18;
        auVar57._12_4_ = iVar18;
        auVar63._4_4_ = iVar19;
        auVar63._0_4_ = iVar19;
        auVar63._8_4_ = iVar19;
        auVar63._12_4_ = iVar19;
        auVar66._4_4_ = iVar20;
        auVar66._0_4_ = iVar20;
        auVar66._8_4_ = iVar20;
        auVar66._12_4_ = iVar20;
        auVar60._4_4_ = iVar22;
        auVar60._0_4_ = iVar22;
        auVar60._8_4_ = iVar22;
        auVar60._12_4_ = iVar22;
        auVar42._4_4_ = iVar36;
        auVar42._0_4_ = iVar36;
        auVar42._8_4_ = iVar36 + 1;
        auVar42._12_4_ = iVar36 + 1;
        auVar47._4_4_ = iVar17 + 1;
        auVar47._0_4_ = iVar17;
        auVar47._8_4_ = iVar17;
        auVar47._12_4_ = iVar17 + 1;
        auVar41 = pmulld(auVar68,auVar47);
        auVar40 = pmulld(auVar63,auVar42);
        auVar75._0_4_ = iVar70 + auVar40._0_4_ + auVar41._0_4_;
        auVar75._4_4_ = iVar70 + auVar40._4_4_ + auVar41._4_4_;
        auVar75._8_4_ = iVar70 + auVar40._8_4_ + auVar41._8_4_;
        auVar75._12_4_ = iVar70 + auVar40._12_4_ + auVar41._12_4_;
        auVar40 = pmulld(auVar51,auVar42);
        auVar41 = pmulld(auVar57,auVar42);
        auVar46 = pmulld(auVar60,auVar47);
        auVar83._0_4_ = iVar71 + auVar40._0_4_ + auVar46._0_4_;
        auVar83._4_4_ = iVar71 + auVar40._4_4_ + auVar46._4_4_;
        auVar83._8_4_ = iVar71 + auVar40._8_4_ + auVar46._8_4_;
        auVar83._12_4_ = iVar71 + auVar40._12_4_ + auVar46._12_4_;
        auVar40 = pmulld(auVar66,auVar47);
        auVar49._0_4_ = iVar72 + auVar41._0_4_ + auVar40._0_4_;
        auVar49._4_4_ = iVar72 + auVar41._4_4_ + auVar40._4_4_;
        auVar49._8_4_ = iVar72 + auVar41._8_4_ + auVar40._8_4_;
        auVar49._12_4_ = iVar72 + auVar41._12_4_ + auVar40._12_4_;
        for (; iVar36 < iVar23; iVar36 = iVar36 + 2) {
          auVar40 = ZEXT816(0);
          iVar70 = auVar49._4_4_;
          iVar71 = auVar49._8_4_;
          iVar72 = auVar49._12_4_;
          iVar77 = auVar75._4_4_;
          iVar79 = auVar75._8_4_;
          iVar81 = auVar75._12_4_;
          auVar52._0_4_ =
               (float)auVar49._0_4_ * fVar15 + *(float *)unaff_RBP[1] +
               (float)auVar75._0_4_ * fVar16;
          auVar52._4_4_ =
               (float)iVar70 * fVar15 + *(float *)(unaff_RBP[1] + 4) + (float)iVar77 * fVar16;
          auVar52._8_4_ =
               (float)iVar71 * fVar15 + *(float *)(unaff_RBP[1] + 8) + (float)iVar79 * fVar16;
          auVar52._12_4_ =
               (float)iVar72 * fVar15 + *(float *)(unaff_RBP[1] + 0xc) + (float)iVar81 * fVar16;
          if (iVar17 < iVar24) {
            uVar34 = (uint64_t)(((iVar24 - iVar17) - 1U >> 1) + 1);
            auVar41 = auVar83;
            auVar46 = auVar49;
            auVar50 = auVar75;
            iVar33 = iVar35;
            do {
              lVar32 = (int64_t)iVar33;
              iVar33 = iVar33 + 4;
              auVar58._0_4_ = auVar41._0_4_ + iVar22 * 2;
              auVar58._4_4_ = auVar41._4_4_ + iVar22 * 2;
              auVar58._8_4_ = auVar41._8_4_ + iVar22 * 2;
              auVar58._12_4_ = auVar41._12_4_ + iVar22 * 2;
              auVar61._0_4_ = auVar46._0_4_ + iVar20 * 2;
              auVar61._4_4_ = auVar46._4_4_ + iVar20 * 2;
              auVar61._8_4_ = auVar46._8_4_ + iVar20 * 2;
              auVar61._12_4_ = auVar46._12_4_ + iVar20 * 2;
              auVar64._0_4_ = auVar50._0_4_ + iVar21 * 2;
              auVar64._4_4_ = auVar50._4_4_ + iVar21 * 2;
              auVar64._8_4_ = auVar50._8_4_ + iVar21 * 2;
              auVar64._12_4_ = auVar50._12_4_ + iVar21 * 2;
              pfVar1 = (float *)(in_R11 + lVar32 * 4);
              fVar53 = auVar52._4_4_;
              fVar54 = auVar52._8_4_;
              fVar55 = auVar52._12_4_;
              auVar48._4_4_ = -(uint)(pfVar1[1] <= fVar53);
              auVar48._0_4_ = -(uint)(*pfVar1 <= auVar52._0_4_);
              auVar48._8_4_ = -(uint)(pfVar1[2] <= fVar54);
              auVar48._12_4_ = -(uint)(pfVar1[3] <= fVar55);
              auVar52._0_4_ =
                   auVar52._0_4_ + (float)(iVar20 * 2) * fVar15 + (float)(iVar21 * 2) * fVar16;
              auVar52._4_4_ = fVar53 + (float)(iVar20 * 2) * fVar15 + (float)(iVar21 * 2) * fVar16;
              auVar52._8_4_ = fVar54 + (float)(iVar20 * 2) * fVar15 + (float)(iVar21 * 2) * fVar16;
              auVar52._12_4_ = fVar55 + (float)(iVar20 * 2) * fVar15 + (float)(iVar21 * 2) * fVar16;
              auVar40 = ~(auVar46 | auVar41 | auVar50) & auVar48 | auVar40;
              uVar34 = uVar34 - 1;
              auVar41 = auVar58;
              auVar46 = auVar61;
              auVar50 = auVar64;
            } while (uVar34 != 0);
          }
          if ((render_system_memory & auVar40) != (int8_t  [16])0x0) goto FUN_180492a07;
          auVar84._0_4_ = auVar83._0_4_ + *(int *)unaff_RBP[3];
          auVar84._4_4_ = auVar83._4_4_ + *(int *)(unaff_RBP[3] + 4);
          auVar84._8_4_ = auVar83._8_4_ + *(int *)(unaff_RBP[3] + 8);
          auVar84._12_4_ = auVar83._12_4_ + *(int *)(unaff_RBP[3] + 0xc);
          auVar49._0_4_ = auVar49._0_4_ + iVar18 * 2;
          auVar49._4_4_ = iVar70 + iVar18 * 2;
          auVar49._8_4_ = iVar71 + iVar18 * 2;
          auVar49._12_4_ = iVar72 + iVar18 * 2;
          iVar35 = iVar35 + 0x500;
          auVar75._0_4_ = auVar75._0_4_ + iVar19 * 2;
          auVar75._4_4_ = iVar77 + iVar19 * 2;
          auVar75._8_4_ = iVar79 + iVar19 * 2;
          auVar75._12_4_ = iVar81 + iVar19 * 2;
          auVar83 = auVar84;
        }
      }
      lVar37 = lVar37 + 4;
    } while (lVar37 < 0x10);
    uVar38 = uVar38 + 4;
  } while (uVar38 < 0xc);
FUN_180492a07:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)unaff_RBP[0x12] ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180492a07(void)
void FUN_180492a07(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x120) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180492a34(void)
void FUN_180492a34(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x120) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180492a44(void)
void FUN_180492a44(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x120) ^ (uint64_t)&stack0x00000000);
}



void thunk_FUN_180492a07(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x120) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180492a90(void *param_1)
void FUN_180492a90(void *param_1)

{
  uint64_t uVar1;
  int32_t *puVar2;
  int iVar3;
  uint64_t *puVar4;
  int32_t uVar5;
  int8_t auStack_158 [48];
  void *puStack_128;
  int32_t uStack_120;
  int32_t uStack_11c;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  int32_t uStack_10c;
  int32_t uStack_108;
  int64_t *plStack_100;
  int32_t uStack_f8;
  int8_t uStack_f4;
  void **ppuStack_f0;
  void **ppuStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  void *puStack_c8;
  int8_t *puStack_c0;
  int32_t uStack_b8;
  int8_t auStack_b0 [136];
  uint64_t uStack_28;
  
  uStack_d8 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  if (*(int64_t *)(param_1 + 0x58) == 0) {
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0xffffffff;
    uStack_f4 = 0;
    uStack_120 = 1;
    uStack_118 = 0x1f;
    uStack_108 = 0x10001;
    puStack_128 = (void *)0x16800000280;
    ppuStack_f0 = (void **)0x0;
    plStack_100 = (int64_t *)0x0;
    uStack_11c = 1;
    uStack_10c = 3;
    puStack_c8 = &unknown_var_3432_ptr;
    puStack_c0 = auStack_b0;
    auStack_b0[0] = 0;
    uStack_b8 = 0x12;
    uVar5 = strcpy_s(auStack_b0,0x80,&unknown_var_8600_ptr);
    puVar4 = (uint64_t *)FUN_1800b2450(uVar5,&ppuStack_f0,&puStack_c8,&puStack_128);
    uVar1 = *puVar4;
    *puVar4 = 0;
    ppuStack_e8 = *(void ***)(param_1 + 0x58);
    *(uint64_t *)(param_1 + 0x58) = uVar1;
    if (ppuStack_e8 != (void **)0x0) {
      (**(code **)((int64_t)*ppuStack_e8 + 0x38))();
    }
    if (ppuStack_f0 != (void **)0x0) {
      (**(code **)(*ppuStack_f0 + 0x38))();
    }
    puStack_c8 = &system_state_ptr;
    if (plStack_100 != (int64_t *)0x0) {
      (**(code **)(*plStack_100 + 0x38))();
    }
  }
  ppuStack_e8 = &puStack_128;
  uStack_118 = 0x80493570;
  uStack_114 = 1;
  uStack_110 = 0x80493400;
  uStack_10c = 1;
  puStack_128 = param_1;
  FUN_18005c650(&puStack_128);
  puVar4 = (uint64_t *)*render_system_data_memory;
  iVar3 = _Mtx_lock(0x180c91970);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  uVar1 = SYSTEM_DATA_MANAGER_A;
  ppuStack_e8 = (void **)SYSTEM_DATA_MANAGER_A;
  SYSTEM_DATA_MANAGER_A = *puVar4;
  ppuStack_f0 = &puStack_128;
  puStack_128 = &system_data_buffer_ptr;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  CoreEngineDataBufferProcessor(&puStack_128,0x1b);
  puVar2 = (int32_t *)CONCAT44(uStack_11c,uStack_120);
  *puVar2 = 0x74666f53;
  puVar2[1] = 0x65726177;
  puVar2[2] = 0x73615220;
  puVar2[3] = 0x69726574;
  *(uint64_t *)(puVar2 + 4) = 0x53286e6f6974617a;
  puVar2[6] = 0x294553;
  uStack_118 = 0x1b;
  uVar5 = FUN_18023a940(*(uint64_t *)(param_1 + 0x58));
  FUN_18009a080(uVar5,*(uint64_t *)(param_1 + 0x58));
  SYSTEM_DATA_MANAGER_A = uVar1;
  iVar3 = _Mtx_unlock(0x180c91970);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180492d60(int64_t param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)
void FUN_180492d60(int64_t param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  int8_t auVar1 [16];
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  int8_t (*pauVar5) [16];
  int64_t lVar6;
  int32_t *puVar7;
  int64_t lVar8;
  int iVar9;
  uint64_t uVar10;
  int iVar11;
  int8_t auVar12 [16];
  int8_t auVar13 [16];
  
  iVar2 = (int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3;
  iVar11 = (int)((param_4 >> 0x1f & 7U) + param_4) >> 3;
  iVar9 = (int)((param_5 >> 0x1f & 7U) + param_5) >> 3;
  iVar3 = (int)(param_3 + (param_3 >> 0x1f & 7U)) >> 3;
  if (iVar3 < iVar9) {
    lVar6 = (int64_t)(iVar3 * 0x50) << 2;
    uVar10 = (uint64_t)(uint)(iVar9 - iVar3);
    lVar8 = *(int64_t *)(param_1 + 0x200 + (uint64_t)param_6 * 8) + (int64_t)(iVar3 * 0x1400) * 4
    ;
    do {
      auVar1 = render_system_memory;
      if (iVar2 < iVar11) {
        uVar4 = (uint64_t)(uint)(iVar11 - iVar2);
        pauVar5 = (int8_t (*) [16])(lVar8 + ((int64_t)(iVar2 << 4) + 0x504) * 4);
        puVar7 = (int32_t *)
                 (*(int64_t *)(param_1 + 0x260 + (uint64_t)param_6 * 8) + lVar6 +
                 (int64_t)iVar2 * 4);
        do {
          auVar13 = minps(auVar1,pauVar5[-0x141]);
          auVar12 = minps(auVar1,pauVar5[-0x140]);
          auVar13 = minps(auVar13,pauVar5[-0x13f]);
          auVar12 = minps(auVar12,pauVar5[-0x13e]);
          auVar13 = minps(auVar13,pauVar5[-1]);
          auVar12 = minps(auVar12,*pauVar5);
          auVar13 = minps(auVar13,pauVar5[1]);
          auVar12 = minps(auVar12,pauVar5[2]);
          auVar13 = minps(auVar13,pauVar5[0x13f]);
          auVar12 = minps(auVar12,pauVar5[0x140]);
          auVar13 = minps(auVar13,pauVar5[0x141]);
          auVar12 = minps(auVar12,pauVar5[0x142]);
          auVar13 = minps(auVar13,pauVar5[0x27f]);
          auVar12 = minps(auVar12,pauVar5[0x280]);
          auVar13 = minps(auVar13,pauVar5[0x281]);
          auVar12 = minps(auVar12,pauVar5[0x282]);
          auVar13 = minps(auVar13,auVar12);
          auVar12._0_8_ = auVar13._8_8_;
          auVar12._8_4_ = auVar13._0_4_;
          auVar12._12_4_ = auVar13._4_4_;
          auVar12 = minps(auVar13,auVar12);
          auVar13._4_4_ = auVar12._0_4_;
          auVar13._0_4_ = auVar12._4_4_;
          auVar13._8_4_ = auVar12._12_4_;
          auVar13._12_4_ = auVar12._8_4_;
          auVar12 = minps(auVar12,auVar13);
          *puVar7 = auVar12._0_4_;
          uVar4 = uVar4 - 1;
          pauVar5 = pauVar5 + 4;
          puVar7 = puVar7 + 1;
        } while (uVar4 != 0);
      }
      lVar8 = lVar8 + 0x5000;
      lVar6 = lVar6 + 0x140;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}





