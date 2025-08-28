#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part408.c - 1 个函数

// 函数: void FUN_180492355(void)
void FUN_180492355(void)

{
  int8_t (*pauVar1) [16];
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
  int32_t uVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int64_t lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int iVar30;
  int64_t lVar31;
  int iVar32;
  float *pfVar33;
  uint64_t uVar34;
  int8_t (*unaff_RBP) [16];
  int64_t unaff_RSI;
  int iVar35;
  int64_t lVar36;
  uint uVar37;
  int64_t unaff_R14;
  int64_t unaff_R15;
  uint uVar38;
  uint uVar42;
  uint uVar43;
  int8_t auVar39 [16];
  int8_t auVar40 [16];
  uint uVar44;
  int8_t auVar41 [16];
  int8_t auVar45 [16];
  int8_t auVar46 [16];
  int8_t auVar47 [16];
  int8_t auVar48 [16];
  int iVar49;
  int iVar54;
  float fVar55;
  float fVar56;
  int8_t auVar50 [16];
  int8_t auVar51 [16];
  int8_t auVar52 [16];
  int8_t auVar53 [16];
  float fVar57;
  int8_t in_XMM3 [16];
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
  float unaff_XMM7_Dc;
  int8_t auVar69 [16];
  int8_t auVar70 [16];
  float unaff_XMM8_Da;
  float unaff_XMM8_Db;
  int iVar73;
  float unaff_XMM8_Dc;
  int iVar74;
  float unaff_XMM8_Dd;
  int8_t auVar71 [16];
  int8_t auVar72 [16];
  int iVar75;
  uint uVar76;
  uint uVar79;
  int iVar80;
  uint uVar81;
  int iVar82;
  int8_t auVar77 [16];
  uint uVar83;
  int8_t auVar78 [16];
  int iVar84;
  int8_t auVar85 [16];
  int8_t auVar86 [16];
  int8_t auVar87 [16];
  int8_t auVar88 [16];
  int8_t auVar89 [16];
  int8_t in_stack_00000030 [16];
  uint uStack0000000000000040;
  uint uStack0000000000000044;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  int8_t in_stack_00000050 [16];
  int8_t in_stack_00000060 [16];
  uint uStack0000000000000070;
  uint uStack0000000000000074;
  uint uStack0000000000000078;
  uint uStack000000000000007c;
  
  auVar39._4_4_ = unaff_XMM7_Dc;
  auVar39._0_4_ = unaff_XMM7_Dc;
  iVar49 = (int)unaff_XMM8_Da >> 3;
  iVar54 = (int)unaff_XMM8_Db >> 3;
  if (iVar54 <= (int)unaff_XMM8_Dd >> 3) {
    iVar35 = iVar54 * 0x50;
    do {
      iVar30 = iVar35;
      if (iVar49 <= (int)unaff_XMM8_Dc >> 3) {
        uVar34 = (uint64_t)((((int)unaff_XMM8_Dc >> 3) - iVar49) + 1);
        pfVar33 = (float *)(*(int64_t *)(unaff_RSI + 0x260) + (int64_t)iVar35 * 4 +
                           (int64_t)iVar49 * 4);
        do {
          auVar39._8_4_ = unaff_XMM7_Dc;
          auVar39._12_4_ = unaff_XMM7_Dc;
          auVar40._4_12_ = auVar39._4_12_;
          auVar40._0_4_ = -(uint)(*pfVar33 <= unaff_XMM7_Dc);
          in_XMM3 = in_XMM3 | auVar40;
          uVar34 = uVar34 - 1;
          pfVar33 = pfVar33 + 1;
          iVar30 = iVar49;
        } while (uVar34 != 0);
      }
      iVar30 = movmskps(iVar30,in_XMM3);
      if (iVar30 != 0) {
        lVar22 = *(int64_t *)(unaff_RSI + 0x200 + unaff_R14 * 8);
        MXCSR = MXCSR | 0x8040;
        uVar37 = 0;
        do {
          uVar38 = uVar37 * 3;
          uVar43 = (uVar37 + 3) * 3;
          uVar42 = (uVar37 + 2) * 3;
          pauVar1 = unaff_RBP +
                    (uint64_t)*(uint *)(unaff_R15 + 0x9f8010 + (uint64_t)uVar38 * 4) + 10;
          fVar14 = *(float *)(*pauVar1 + 8);
          pauVar2 = unaff_RBP +
                    (uint64_t)*(uint *)(unaff_R15 + 0x9f8010 + (uint64_t)(uVar38 + 3) * 4) + 10;
          fVar15 = *(float *)(*pauVar2 + 8);
          pauVar3 = unaff_RBP +
                    (uint64_t)*(uint *)(unaff_R15 + 0x9f8010 + (uint64_t)uVar42 * 4) + 10;
          fVar55 = *(float *)(*pauVar3 + 8);
          pauVar4 = unaff_RBP +
                    (uint64_t)*(uint *)(unaff_R15 + 0x9f8010 + (uint64_t)uVar43 * 4) + 10;
          fVar56 = *(float *)(*pauVar4 + 8);
          pauVar5 = unaff_RBP +
                    (uint64_t)*(uint *)(unaff_R15 + 0x9f8010 + (uint64_t)(uVar38 + 2) * 4) + 10;
          fVar57 = *(float *)(*pauVar5 + 8);
          auVar77._0_4_ = (int)*(float *)*pauVar1;
          auVar77._4_4_ = (int)*(float *)*pauVar2;
          auVar77._8_4_ = (int)*(float *)*pauVar3;
          auVar77._12_4_ = (int)*(float *)*pauVar4;
          pauVar6 = unaff_RBP +
                    (uint64_t)*(uint *)(unaff_R15 + 0x9f8010 + (uint64_t)(uVar38 + 5) * 4) + 10;
          fVar23 = *(float *)(*pauVar6 + 8);
          pauVar7 = unaff_RBP +
                    (uint64_t)*(uint *)(unaff_R15 + 0x9f8010 + (uint64_t)(uVar42 + 2) * 4) + 10;
          fVar24 = *(float *)(*pauVar7 + 8);
          pauVar8 = unaff_RBP +
                    (uint64_t)*(uint *)(unaff_R15 + 0x9f8010 + (uint64_t)(uVar43 + 2) * 4) + 10;
          fVar25 = *(float *)(*pauVar8 + 8);
          pauVar9 = unaff_RBP +
                    (uint64_t)*(uint *)(unaff_R15 + 0x9f8010 + (uint64_t)(uVar38 + 1) * 4) + 10;
          fVar26 = *(float *)(*pauVar9 + 8);
          pauVar10 = unaff_RBP +
                     (uint64_t)*(uint *)(unaff_R15 + 0x9f8010 + (uint64_t)(uVar38 + 4) * 4) + 10;
          fVar27 = *(float *)(*pauVar10 + 8);
          pauVar11 = unaff_RBP +
                     (uint64_t)*(uint *)(unaff_R15 + 0x9f8010 + (uint64_t)(uVar42 + 1) * 4) + 10;
          fVar28 = *(float *)(*pauVar11 + 8);
          pauVar12 = unaff_RBP +
                     (uint64_t)*(uint *)(unaff_R15 + 0x9f8010 + (uint64_t)(uVar43 + 1) * 4) + 10;
          fVar29 = *(float *)(*pauVar12 + 8);
          auVar85._0_4_ = (int)*(float *)(*pauVar9 + 4);
          auVar85._4_4_ = (int)*(float *)(*pauVar10 + 4);
          auVar85._8_4_ = (int)*(float *)(*pauVar11 + 4);
          auVar85._12_4_ = (int)*(float *)(*pauVar12 + 4);
          lVar36 = 0;
          auVar71._0_4_ = (int)*(float *)*pauVar5;
          auVar71._4_4_ = (int)*(float *)*pauVar6;
          auVar71._8_4_ = (int)*(float *)*pauVar7;
          auVar71._12_4_ = (int)*(float *)*pauVar8;
          auVar88._0_4_ = (int)*(float *)(*pauVar5 + 4);
          auVar88._4_4_ = (int)*(float *)(*pauVar6 + 4);
          auVar88._8_4_ = (int)*(float *)(*pauVar7 + 4);
          auVar88._12_4_ = (int)*(float *)(*pauVar8 + 4);
          auVar89._0_4_ = (int)*(float *)(*pauVar1 + 4);
          auVar89._4_4_ = (int)*(float *)(*pauVar2 + 4);
          auVar89._8_4_ = (int)*(float *)(*pauVar3 + 4);
          auVar89._12_4_ = (int)*(float *)(*pauVar4 + 4);
          auVar69._0_4_ = (int)*(float *)*pauVar9;
          auVar69._4_4_ = (int)*(float *)*pauVar10;
          auVar69._8_4_ = (int)*(float *)*pauVar11;
          auVar69._12_4_ = (int)*(float *)*pauVar12;
          *(float *)unaff_RBP[7] = fVar14;
          *(float *)(unaff_RBP[7] + 4) = fVar15;
          *(float *)(unaff_RBP[7] + 8) = fVar55;
          *(float *)(unaff_RBP[7] + 0xc) = fVar56;
          auVar61._0_4_ = auVar77._0_4_ - auVar69._0_4_;
          auVar61._4_4_ = auVar77._4_4_ - auVar69._4_4_;
          auVar61._8_4_ = auVar77._8_4_ - auVar69._8_4_;
          auVar61._12_4_ = auVar77._12_4_ - auVar69._12_4_;
          auVar64._0_4_ = auVar89._0_4_ - auVar88._0_4_;
          auVar64._4_4_ = auVar89._4_4_ - auVar88._4_4_;
          auVar64._8_4_ = auVar89._8_4_ - auVar88._8_4_;
          auVar64._12_4_ = auVar89._12_4_ - auVar88._12_4_;
          unaff_RBP[-4] = auVar61;
          unaff_RBP[-6] = auVar64;
          *(int *)unaff_RBP[-8] = auVar88._0_4_ - auVar85._0_4_;
          *(int *)(unaff_RBP[-8] + 4) = auVar88._4_4_ - auVar85._4_4_;
          *(int *)(unaff_RBP[-8] + 8) = auVar88._8_4_ - auVar85._8_4_;
          *(int *)(unaff_RBP[-8] + 0xc) = auVar88._12_4_ - auVar85._12_4_;
          auVar45 = pmulld(auVar71,auVar85);
          auVar50 = pmulld(auVar69,auVar89);
          auVar58._0_4_ = auVar71._0_4_ - auVar77._0_4_;
          auVar58._4_4_ = auVar71._4_4_ - auVar77._4_4_;
          auVar58._8_4_ = auVar71._8_4_ - auVar77._8_4_;
          auVar58._12_4_ = auVar71._12_4_ - auVar77._12_4_;
          *(int *)unaff_RBP[-5] = auVar69._0_4_ - auVar71._0_4_;
          *(int *)(unaff_RBP[-5] + 4) = auVar69._4_4_ - auVar71._4_4_;
          *(int *)(unaff_RBP[-5] + 8) = auVar69._8_4_ - auVar71._8_4_;
          *(int *)(unaff_RBP[-5] + 0xc) = auVar69._12_4_ - auVar71._12_4_;
          auVar67._0_4_ = auVar85._0_4_ - auVar89._0_4_;
          auVar67._4_4_ = auVar85._4_4_ - auVar89._4_4_;
          auVar67._8_4_ = auVar85._8_4_ - auVar89._8_4_;
          auVar67._12_4_ = auVar85._12_4_ - auVar89._12_4_;
          unaff_RBP[-3] = auVar58;
          unaff_RBP[-7] = auVar67;
          auVar39 = pmulld(auVar69,auVar88);
          auVar40 = pmulld(auVar77,auVar85);
          auVar51._0_4_ = auVar50._0_4_ - auVar40._0_4_;
          auVar51._4_4_ = auVar50._4_4_ - auVar40._4_4_;
          auVar51._8_4_ = auVar50._8_4_ - auVar40._8_4_;
          auVar51._12_4_ = auVar50._12_4_ - auVar40._12_4_;
          *(int *)unaff_RBP[-2] = auVar45._0_4_ - auVar39._0_4_;
          *(int *)(unaff_RBP[-2] + 4) = auVar45._4_4_ - auVar39._4_4_;
          *(int *)(unaff_RBP[-2] + 8) = auVar45._8_4_ - auVar39._8_4_;
          *(int *)(unaff_RBP[-2] + 0xc) = auVar45._12_4_ - auVar39._12_4_;
          unaff_RBP[-1] = auVar51;
          auVar40 = pmulld(auVar77,auVar88);
          auVar39 = pmulld(auVar71,auVar89);
          auVar46._0_4_ = auVar40._0_4_ - auVar39._0_4_;
          auVar46._4_4_ = auVar40._4_4_ - auVar39._4_4_;
          auVar46._8_4_ = auVar40._8_4_ - auVar39._8_4_;
          auVar46._12_4_ = auVar40._12_4_ - auVar39._12_4_;
          *unaff_RBP = auVar46;
          auVar39 = pmulld(auVar58,auVar67);
          auVar40 = pmulld(auVar61,auVar64);
          in_stack_00000030._0_4_ = auVar39._0_4_ - auVar40._0_4_;
          in_stack_00000030._4_4_ = auVar39._4_4_ - auVar40._4_4_;
          in_stack_00000030._8_4_ = auVar39._8_4_ - auVar40._8_4_;
          in_stack_00000030._12_4_ = auVar39._12_4_ - auVar40._12_4_;
          auVar45._0_4_ = (float)in_stack_00000030._0_4_;
          auVar45._4_4_ = (float)in_stack_00000030._4_4_;
          auVar45._8_4_ = (float)in_stack_00000030._8_4_;
          auVar45._12_4_ = (float)in_stack_00000030._12_4_;
          auVar39 = rcpps(auVar46,auVar45);
          uVar76 = (uint)(auVar77._0_4_ < auVar71._0_4_) * auVar71._0_4_ |
                   (uint)(auVar77._0_4_ >= auVar71._0_4_) * auVar77._0_4_;
          uVar79 = (uint)(auVar77._4_4_ < auVar71._4_4_) * auVar71._4_4_ |
                   (uint)(auVar77._4_4_ >= auVar71._4_4_) * auVar77._4_4_;
          uVar81 = (uint)(auVar77._8_4_ < auVar71._8_4_) * auVar71._8_4_ |
                   (uint)(auVar77._8_4_ >= auVar71._8_4_) * auVar77._8_4_;
          uVar83 = (uint)(auVar77._12_4_ < auVar71._12_4_) * auVar71._12_4_ |
                   (uint)(auVar77._12_4_ >= auVar71._12_4_) * auVar77._12_4_;
          uVar38 = (uint)(auVar71._0_4_ < auVar77._0_4_) * auVar71._0_4_ |
                   (uint)(auVar71._0_4_ >= auVar77._0_4_) * auVar77._0_4_;
          uVar42 = (uint)(auVar71._4_4_ < auVar77._4_4_) * auVar71._4_4_ |
                   (uint)(auVar71._4_4_ >= auVar77._4_4_) * auVar77._4_4_;
          uVar43 = (uint)(auVar71._8_4_ < auVar77._8_4_) * auVar71._8_4_ |
                   (uint)(auVar71._8_4_ >= auVar77._8_4_) * auVar77._8_4_;
          uVar44 = (uint)(auVar71._12_4_ < auVar77._12_4_) * auVar71._12_4_ |
                   (uint)(auVar71._12_4_ >= auVar77._12_4_) * auVar77._12_4_;
          uVar38 = (uint)(auVar69._0_4_ < (int)uVar38) * auVar69._0_4_ |
                   (auVar69._0_4_ >= (int)uVar38) * uVar38;
          uVar42 = (uint)(auVar69._4_4_ < (int)uVar42) * auVar69._4_4_ |
                   (auVar69._4_4_ >= (int)uVar42) * uVar42;
          uVar43 = (uint)(auVar69._8_4_ < (int)uVar43) * auVar69._8_4_ |
                   (auVar69._8_4_ >= (int)uVar43) * uVar43;
          uVar44 = (uint)(auVar69._12_4_ < (int)uVar44) * auVar69._12_4_ |
                   (auVar69._12_4_ >= (int)uVar44) * uVar44;
          uVar76 = (uint)((int)uVar76 < auVar69._0_4_) * auVar69._0_4_ |
                   ((int)uVar76 >= auVar69._0_4_) * uVar76;
          uVar79 = (uint)((int)uVar79 < auVar69._4_4_) * auVar69._4_4_ |
                   ((int)uVar79 >= auVar69._4_4_) * uVar79;
          uVar81 = (uint)((int)uVar81 < auVar69._8_4_) * auVar69._8_4_ |
                   ((int)uVar81 >= auVar69._8_4_) * uVar81;
          uVar83 = (uint)((int)uVar83 < auVar69._12_4_) * auVar69._12_4_ |
                   ((int)uVar83 >= auVar69._12_4_) * uVar83;
          in_stack_00000050._0_4_ =
               (uint)(0x27f < (int)uVar76) * 0x27f | (0x27f >= (int)uVar76) * uVar76;
          in_stack_00000050._4_4_ =
               (uint)(0x27f < (int)uVar79) * 0x27f | (0x27f >= (int)uVar79) * uVar79;
          in_stack_00000050._8_4_ =
               (uint)(0x27f < (int)uVar81) * 0x27f | (0x27f >= (int)uVar81) * uVar81;
          in_stack_00000050._12_4_ =
               (uint)(0x27f < (int)uVar83) * 0x27f | (0x27f >= (int)uVar83) * uVar83;
          uStack0000000000000040 = (-1 < (int)uVar38) * uVar38 & 0xfffffffe;
          uStack0000000000000044 = (-1 < (int)uVar42) * uVar42 & 0xfffffffe;
          uStack0000000000000048 = (-1 < (int)uVar43) * uVar43 & 0xfffffffe;
          uStack000000000000004c = (-1 < (int)uVar44) * uVar44 & 0xfffffffe;
          uVar38 = (uint)(auVar88._0_4_ < auVar89._0_4_) * auVar88._0_4_ |
                   (uint)(auVar88._0_4_ >= auVar89._0_4_) * auVar89._0_4_;
          uVar42 = (uint)(auVar88._4_4_ < auVar89._4_4_) * auVar88._4_4_ |
                   (uint)(auVar88._4_4_ >= auVar89._4_4_) * auVar89._4_4_;
          uVar43 = (uint)(auVar88._8_4_ < auVar89._8_4_) * auVar88._8_4_ |
                   (uint)(auVar88._8_4_ >= auVar89._8_4_) * auVar89._8_4_;
          uVar44 = (uint)(auVar88._12_4_ < auVar89._12_4_) * auVar88._12_4_ |
                   (uint)(auVar88._12_4_ >= auVar89._12_4_) * auVar89._12_4_;
          *(float *)unaff_RBP[8] = (fVar57 - fVar14) * auVar39._0_4_;
          *(float *)(unaff_RBP[8] + 4) = (fVar23 - fVar15) * auVar39._4_4_;
          *(float *)(unaff_RBP[8] + 8) = (fVar24 - fVar55) * auVar39._8_4_;
          *(float *)(unaff_RBP[8] + 0xc) = (fVar25 - fVar56) * auVar39._12_4_;
          uVar38 = (uint)(auVar85._0_4_ < (int)uVar38) * auVar85._0_4_ |
                   (auVar85._0_4_ >= (int)uVar38) * uVar38;
          uVar42 = (uint)(auVar85._4_4_ < (int)uVar42) * auVar85._4_4_ |
                   (auVar85._4_4_ >= (int)uVar42) * uVar42;
          uVar43 = (uint)(auVar85._8_4_ < (int)uVar43) * auVar85._8_4_ |
                   (auVar85._8_4_ >= (int)uVar43) * uVar43;
          uVar44 = (uint)(auVar85._12_4_ < (int)uVar44) * auVar85._12_4_ |
                   (auVar85._12_4_ >= (int)uVar44) * uVar44;
          *(float *)unaff_RBP[9] = (fVar26 - fVar14) * auVar39._0_4_;
          *(float *)(unaff_RBP[9] + 4) = (fVar27 - fVar15) * auVar39._4_4_;
          *(float *)(unaff_RBP[9] + 8) = (fVar28 - fVar55) * auVar39._8_4_;
          *(float *)(unaff_RBP[9] + 0xc) = (fVar29 - fVar56) * auVar39._12_4_;
          uVar76 = (uint)(auVar89._0_4_ < auVar88._0_4_) * auVar88._0_4_ |
                   (uint)(auVar89._0_4_ >= auVar88._0_4_) * auVar89._0_4_;
          uVar79 = (uint)(auVar89._4_4_ < auVar88._4_4_) * auVar88._4_4_ |
                   (uint)(auVar89._4_4_ >= auVar88._4_4_) * auVar89._4_4_;
          uVar81 = (uint)(auVar89._8_4_ < auVar88._8_4_) * auVar88._8_4_ |
                   (uint)(auVar89._8_4_ >= auVar88._8_4_) * auVar89._8_4_;
          uVar83 = (uint)(auVar89._12_4_ < auVar88._12_4_) * auVar88._12_4_ |
                   (uint)(auVar89._12_4_ >= auVar88._12_4_) * auVar89._12_4_;
          auVar50._4_4_ = (-1 < (int)uVar42) * uVar42;
          auVar50._0_4_ = (-1 < (int)uVar38) * uVar38;
          auVar50._8_4_ = (-1 < (int)uVar43) * uVar43;
          auVar50._12_4_ = (-1 < (int)uVar44) * uVar44;
          uVar38 = (uint)((int)uVar76 < auVar85._0_4_) * auVar85._0_4_ |
                   ((int)uVar76 >= auVar85._0_4_) * uVar76;
          uVar42 = (uint)((int)uVar79 < auVar85._4_4_) * auVar85._4_4_ |
                   ((int)uVar79 >= auVar85._4_4_) * uVar79;
          uVar43 = (uint)((int)uVar81 < auVar85._8_4_) * auVar85._8_4_ |
                   ((int)uVar81 >= auVar85._8_4_) * uVar81;
          uVar44 = (uint)((int)uVar83 < auVar85._12_4_) * auVar85._12_4_ |
                   ((int)uVar83 >= auVar85._12_4_) * uVar83;
          in_stack_00000060 = auVar50 & render_system_ui;
          uStack0000000000000070 =
               (uint)(0x167 < (int)uVar38) * 0x167 | (0x167 >= (int)uVar38) * uVar38;
          uStack0000000000000074 =
               (uint)(0x167 < (int)uVar42) * 0x167 | (0x167 >= (int)uVar42) * uVar42;
          uStack0000000000000078 =
               (uint)(0x167 < (int)uVar43) * 0x167 | (0x167 >= (int)uVar43) * uVar43;
          uStack000000000000007c =
               (uint)(0x167 < (int)uVar44) * 0x167 | (0x167 >= (int)uVar44) * uVar44;
          do {
            if (0 < *(int *)(&stack0x00000030 + lVar36)) {
              iVar54 = *(int *)(&stack0x00000060 + lVar36);
              iVar49 = *(int *)((int64_t)&stack0x00000040 + lVar36);
              uVar13 = *(int32_t *)(unaff_RBP[7] + lVar36);
              iVar35 = *(int *)(unaff_RBP[-5] + lVar36);
              iVar30 = *(int *)(unaff_RBP[-4] + lVar36);
              iVar16 = *(int *)(unaff_RBP[-3] + lVar36);
              iVar17 = *(int *)(unaff_RBP[-7] + lVar36);
              iVar18 = *(int *)(unaff_RBP[-6] + lVar36);
              iVar73 = *(int *)(*unaff_RBP + lVar36);
              fVar14 = *(float *)(unaff_RBP[8] + lVar36);
              fVar15 = *(float *)(unaff_RBP[9] + lVar36);
              iVar19 = *(int *)(unaff_RBP[-8] + lVar36);
              iVar74 = *(int *)(unaff_RBP[-2] + lVar36);
              iVar75 = *(int *)(unaff_RBP[-1] + lVar36);
              iVar20 = *(int *)((int64_t)&stack0x00000070 + lVar36);
              iVar21 = *(int *)(&stack0x00000050 + lVar36);
              *(int32_t *)unaff_RBP[1] = uVar13;
              *(int32_t *)(unaff_RBP[1] + 4) = uVar13;
              *(int32_t *)(unaff_RBP[1] + 8) = uVar13;
              *(int32_t *)(unaff_RBP[1] + 0xc) = uVar13;
              auVar70._4_4_ = iVar18;
              auVar70._0_4_ = iVar18;
              auVar70._8_4_ = iVar18;
              auVar70._12_4_ = iVar18;
              auVar52._4_4_ = iVar35;
              auVar52._0_4_ = iVar35;
              auVar52._8_4_ = iVar35;
              auVar52._12_4_ = iVar35;
              *(int *)unaff_RBP[3] = iVar35 << 1;
              *(int *)(unaff_RBP[3] + 4) = iVar35 << 1;
              *(int *)(unaff_RBP[3] + 8) = iVar35 << 1;
              *(int *)(unaff_RBP[3] + 0xc) = iVar35 << 1;
              iVar35 = (iVar54 * 0x140 + iVar49) * 2;
              auVar59._4_4_ = iVar30;
              auVar59._0_4_ = iVar30;
              auVar59._8_4_ = iVar30;
              auVar59._12_4_ = iVar30;
              auVar65._4_4_ = iVar16;
              auVar65._0_4_ = iVar16;
              auVar65._8_4_ = iVar16;
              auVar65._12_4_ = iVar16;
              auVar68._4_4_ = iVar17;
              auVar68._0_4_ = iVar17;
              auVar68._8_4_ = iVar17;
              auVar68._12_4_ = iVar17;
              auVar62._4_4_ = iVar19;
              auVar62._0_4_ = iVar19;
              auVar62._8_4_ = iVar19;
              auVar62._12_4_ = iVar19;
              auVar41._4_4_ = iVar54;
              auVar41._0_4_ = iVar54;
              auVar41._8_4_ = iVar54 + 1;
              auVar41._12_4_ = iVar54 + 1;
              auVar47._4_4_ = iVar49 + 1;
              auVar47._0_4_ = iVar49;
              auVar47._8_4_ = iVar49;
              auVar47._12_4_ = iVar49 + 1;
              auVar40 = pmulld(auVar70,auVar47);
              auVar39 = pmulld(auVar65,auVar41);
              auVar78._0_4_ = iVar73 + auVar39._0_4_ + auVar40._0_4_;
              auVar78._4_4_ = iVar73 + auVar39._4_4_ + auVar40._4_4_;
              auVar78._8_4_ = iVar73 + auVar39._8_4_ + auVar40._8_4_;
              auVar78._12_4_ = iVar73 + auVar39._12_4_ + auVar40._12_4_;
              auVar39 = pmulld(auVar52,auVar41);
              auVar40 = pmulld(auVar59,auVar41);
              auVar45 = pmulld(auVar62,auVar47);
              auVar86._0_4_ = iVar74 + auVar39._0_4_ + auVar45._0_4_;
              auVar86._4_4_ = iVar74 + auVar39._4_4_ + auVar45._4_4_;
              auVar86._8_4_ = iVar74 + auVar39._8_4_ + auVar45._8_4_;
              auVar86._12_4_ = iVar74 + auVar39._12_4_ + auVar45._12_4_;
              auVar39 = pmulld(auVar68,auVar47);
              auVar72._0_4_ = iVar75 + auVar40._0_4_ + auVar39._0_4_;
              auVar72._4_4_ = iVar75 + auVar40._4_4_ + auVar39._4_4_;
              auVar72._8_4_ = iVar75 + auVar40._8_4_ + auVar39._8_4_;
              auVar72._12_4_ = iVar75 + auVar40._12_4_ + auVar39._12_4_;
              for (; iVar54 < iVar20; iVar54 = iVar54 + 2) {
                auVar39 = ZEXT816(0);
                iVar73 = auVar72._4_4_;
                iVar74 = auVar72._8_4_;
                iVar75 = auVar72._12_4_;
                iVar80 = auVar78._4_4_;
                iVar82 = auVar78._8_4_;
                iVar84 = auVar78._12_4_;
                auVar53._0_4_ =
                     (float)auVar72._0_4_ * fVar14 + *(float *)unaff_RBP[1] +
                     (float)auVar78._0_4_ * fVar15;
                auVar53._4_4_ =
                     (float)iVar73 * fVar14 + *(float *)(unaff_RBP[1] + 4) + (float)iVar80 * fVar15;
                auVar53._8_4_ =
                     (float)iVar74 * fVar14 + *(float *)(unaff_RBP[1] + 8) + (float)iVar82 * fVar15;
                auVar53._12_4_ =
                     (float)iVar75 * fVar14 + *(float *)(unaff_RBP[1] + 0xc) +
                     (float)iVar84 * fVar15;
                if (iVar49 < iVar21) {
                  uVar34 = (uint64_t)(((iVar21 - iVar49) - 1U >> 1) + 1);
                  auVar40 = auVar86;
                  auVar45 = auVar72;
                  auVar50 = auVar78;
                  iVar32 = iVar35;
                  do {
                    lVar31 = (int64_t)iVar32;
                    iVar32 = iVar32 + 4;
                    auVar60._0_4_ = auVar40._0_4_ + iVar19 * 2;
                    auVar60._4_4_ = auVar40._4_4_ + iVar19 * 2;
                    auVar60._8_4_ = auVar40._8_4_ + iVar19 * 2;
                    auVar60._12_4_ = auVar40._12_4_ + iVar19 * 2;
                    auVar63._0_4_ = auVar45._0_4_ + iVar17 * 2;
                    auVar63._4_4_ = auVar45._4_4_ + iVar17 * 2;
                    auVar63._8_4_ = auVar45._8_4_ + iVar17 * 2;
                    auVar63._12_4_ = auVar45._12_4_ + iVar17 * 2;
                    auVar66._0_4_ = auVar50._0_4_ + iVar18 * 2;
                    auVar66._4_4_ = auVar50._4_4_ + iVar18 * 2;
                    auVar66._8_4_ = auVar50._8_4_ + iVar18 * 2;
                    auVar66._12_4_ = auVar50._12_4_ + iVar18 * 2;
                    pfVar33 = (float *)(lVar22 + lVar31 * 4);
                    fVar55 = auVar53._4_4_;
                    fVar56 = auVar53._8_4_;
                    fVar57 = auVar53._12_4_;
                    auVar48._4_4_ = -(uint)(pfVar33[1] <= fVar55);
                    auVar48._0_4_ = -(uint)(*pfVar33 <= auVar53._0_4_);
                    auVar48._8_4_ = -(uint)(pfVar33[2] <= fVar56);
                    auVar48._12_4_ = -(uint)(pfVar33[3] <= fVar57);
                    auVar53._0_4_ =
                         auVar53._0_4_ + (float)(iVar17 * 2) * fVar14 + (float)(iVar18 * 2) * fVar15
                    ;
                    auVar53._4_4_ =
                         fVar55 + (float)(iVar17 * 2) * fVar14 + (float)(iVar18 * 2) * fVar15;
                    auVar53._8_4_ =
                         fVar56 + (float)(iVar17 * 2) * fVar14 + (float)(iVar18 * 2) * fVar15;
                    auVar53._12_4_ =
                         fVar57 + (float)(iVar17 * 2) * fVar14 + (float)(iVar18 * 2) * fVar15;
                    auVar39 = ~(auVar45 | auVar40 | auVar50) & auVar48 | auVar39;
                    uVar34 = uVar34 - 1;
                    auVar40 = auVar60;
                    auVar45 = auVar63;
                    auVar50 = auVar66;
                  } while (uVar34 != 0);
                }
                if ((render_system_ui & auVar39) != (int8_t  [16])0x0) goto FUN_180492a34;
                auVar87._0_4_ = auVar86._0_4_ + *(int *)unaff_RBP[3];
                auVar87._4_4_ = auVar86._4_4_ + *(int *)(unaff_RBP[3] + 4);
                auVar87._8_4_ = auVar86._8_4_ + *(int *)(unaff_RBP[3] + 8);
                auVar87._12_4_ = auVar86._12_4_ + *(int *)(unaff_RBP[3] + 0xc);
                auVar72._0_4_ = auVar72._0_4_ + iVar30 * 2;
                auVar72._4_4_ = iVar73 + iVar30 * 2;
                auVar72._8_4_ = iVar74 + iVar30 * 2;
                auVar72._12_4_ = iVar75 + iVar30 * 2;
                iVar35 = iVar35 + 0x500;
                auVar78._0_4_ = auVar78._0_4_ + iVar16 * 2;
                auVar78._4_4_ = iVar80 + iVar16 * 2;
                auVar78._8_4_ = iVar82 + iVar16 * 2;
                auVar78._12_4_ = iVar84 + iVar16 * 2;
                auVar86 = auVar87;
              }
            }
            lVar36 = lVar36 + 4;
          } while (lVar36 < 0x10);
          uVar37 = uVar37 + 4;
        } while (uVar37 < 0xc);
        break;
      }
      iVar54 = iVar54 + 1;
      iVar35 = iVar35 + 0x50;
    } while (iVar54 <= (int)unaff_XMM8_Dd >> 3);
  }
FUN_180492a34:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)unaff_RBP[0x12] ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



