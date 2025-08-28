#include "TaleWorlds.Native.Split.h"
// 03_rendering_part727.c - 1 个函数
// 函数: void function_695bf0(int64_t param_1,int64_t param_2,int param_3,short *param_4,
void function_695bf0(int64_t param_1,int64_t param_2,int param_3,short *param_4,
                  int8_t (*param_5) [16],int8_t (*param_6) [16],int8_t (*param_7) [16],
                  int64_t param_8,int64_t param_9,short *param_10,ushort *param_11,
                  uint64_t param_12,int64_t param_13)
{
  ushort *puVar1;
  short *psVar2;
  short *psVar3;
  short sVar4;
  ushort *puVar5;
  int8_t (*pauVar6) [16];
  int64_t lVar7;
  int64_t lVar8;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  int8_t auVar9 [16];
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  short sVar30;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  int8_t auVar31 [16];
  int8_t auVar32 [16];
  short sVar39;
  int8_t auVar40 [16];
  int8_t auVar41 [16];
  int8_t auVar42 [16];
  int8_t auVar43 [16];
  short sVar44;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  int8_t auVar45 [16];
  int8_t auVar46 [16];
  short sVar54;
  int8_t auVar47 [16];
  int8_t auVar56 [16];
  int8_t auVar57 [16];
  short sVar60;
  short sVar61;
  short sVar62;
  short sVar63;
  int8_t auVar64 [16];
  int8_t auVar65 [16];
  int8_t auVar66 [16];
  short sVar55;
  short sVar58;
  short sVar59;
  lVar8 = param_2 * 2;
  param_1 = param_1 + param_2 * 2;
  param_13 = param_13 + lVar8;
  param_8 = param_8 + lVar8;
  param_9 = param_9 + lVar8;
  lVar8 = -param_2;
  if (param_3 == 0) {
    sVar60 = param_4[4] + -1;
    sVar61 = param_4[5] + -1;
    sVar62 = param_4[6] + -1;
    sVar63 = param_4[7] + -1;
    auVar41 = psraw(*(int8_t (*) [16])(param_1 + param_2 * -2),0xf);
    auVar43 = psraw(*(int8_t (*) [16])(param_1 + 0x10 + param_2 * -2),0xf);
    auVar31 = auVar41 ^ *(int8_t (*) [16])(param_1 + param_2 * -2);
    auVar40 = auVar43 ^ *(int8_t (*) [16])(param_1 + 0x10 + param_2 * -2);
    auVar32._0_2_ = auVar31._0_2_ - auVar41._0_2_;
    auVar32._2_2_ = auVar31._2_2_ - auVar41._2_2_;
    auVar32._4_2_ = auVar31._4_2_ - auVar41._4_2_;
    auVar32._6_2_ = auVar31._6_2_ - auVar41._6_2_;
    auVar32._8_2_ = auVar31._8_2_ - auVar41._8_2_;
    auVar32._10_2_ = auVar31._10_2_ - auVar41._10_2_;
    auVar32._12_2_ = auVar31._12_2_ - auVar41._12_2_;
    auVar32._14_2_ = auVar31._14_2_ - auVar41._14_2_;
    auVar31 = paddsw(auVar32,*param_5);
    auVar45 = pmulhw(auVar31,*param_6);
    auVar42._0_2_ = auVar40._0_2_ - auVar43._0_2_;
    auVar42._2_2_ = auVar40._2_2_ - auVar43._2_2_;
    auVar42._4_2_ = auVar40._4_2_ - auVar43._4_2_;
    auVar42._6_2_ = auVar40._6_2_ - auVar43._6_2_;
    auVar42._8_2_ = auVar40._8_2_ - auVar43._8_2_;
    auVar42._10_2_ = auVar40._10_2_ - auVar43._10_2_;
    auVar42._12_2_ = auVar40._12_2_ - auVar43._12_2_;
    auVar42._14_2_ = auVar40._14_2_ - auVar43._14_2_;
    sVar44 = *param_10;
    sVar48 = param_10[1];
    sVar49 = param_10[2];
    sVar50 = param_10[3];
    sVar55 = param_10[4];
    sVar58 = param_10[5];
    sVar59 = param_10[6];
    sVar4 = param_10[7];
    auVar46._0_2_ = auVar45._0_2_ + auVar31._0_2_;
    auVar46._2_2_ = auVar45._2_2_ + auVar31._2_2_;
    auVar46._4_2_ = auVar45._4_2_ + auVar31._4_2_;
    auVar46._6_2_ = auVar45._6_2_ + auVar31._6_2_;
    auVar46._8_2_ = auVar45._8_2_ + auVar31._8_2_;
    auVar46._10_2_ = auVar45._10_2_ + auVar31._10_2_;
    auVar46._12_2_ = auVar45._12_2_ + auVar31._12_2_;
    auVar46._14_2_ = auVar45._14_2_ + auVar31._14_2_;
    auVar64._8_8_ = SUB168(*param_5,8);
    auVar64._0_8_ = auVar64._8_8_;
    auVar45 = paddsw(auVar42,auVar64);
    auVar65._8_8_ = SUB168(*param_6,8);
    auVar65._0_8_ = auVar65._8_8_;
    auVar31 = pmulhw(auVar45,auVar65);
    auVar46 = pmulhw(auVar46,*param_7);
    auVar66._8_8_ = SUB168(*param_7,8);
    auVar66._0_8_ = auVar66._8_8_;
    auVar40._0_2_ = auVar31._0_2_ + auVar45._0_2_;
    auVar40._2_2_ = auVar31._2_2_ + auVar45._2_2_;
    auVar40._4_2_ = auVar31._4_2_ + auVar45._4_2_;
    auVar40._6_2_ = auVar31._6_2_ + auVar45._6_2_;
    auVar40._8_2_ = auVar31._8_2_ + auVar45._8_2_;
    auVar40._10_2_ = auVar31._10_2_ + auVar45._10_2_;
    auVar40._12_2_ = auVar31._12_2_ + auVar45._12_2_;
    auVar40._14_2_ = auVar31._14_2_ + auVar45._14_2_;
    auVar31 = pmulhw(auVar40,auVar66);
    auVar46 = auVar46 ^ auVar41;
    uVar15 = auVar46._0_2_ - auVar41._0_2_ & -(ushort)((short)(*param_4 + -1) < auVar32._0_2_);
    uVar17 = auVar46._2_2_ - auVar41._2_2_ & -(ushort)((short)(param_4[1] + -1) < auVar32._2_2_);
    uVar19 = auVar46._4_2_ - auVar41._4_2_ & -(ushort)((short)(param_4[2] + -1) < auVar32._4_2_);
    uVar21 = auVar46._6_2_ - auVar41._6_2_ & -(ushort)((short)(param_4[3] + -1) < auVar32._6_2_);
    uVar23 = auVar46._8_2_ - auVar41._8_2_ & -(ushort)(sVar60 < auVar32._8_2_);
    uVar25 = auVar46._10_2_ - auVar41._10_2_ & -(ushort)(sVar61 < auVar32._10_2_);
    uVar27 = auVar46._12_2_ - auVar41._12_2_ & -(ushort)(sVar62 < auVar32._12_2_);
    uVar29 = auVar46._14_2_ - auVar41._14_2_ & -(ushort)(sVar63 < auVar32._14_2_);
    puVar5 = (ushort *)(param_8 + param_2 * -2);
    *puVar5 = uVar15;
    puVar5[1] = uVar17;
    puVar5[2] = uVar19;
    puVar5[3] = uVar21;
    puVar5[4] = uVar23;
    puVar5[5] = uVar25;
    puVar5[6] = uVar27;
    puVar5[7] = uVar29;
    sVar44 = uVar15 * sVar44;
    sVar48 = uVar17 * sVar48;
    sVar49 = uVar19 * sVar49;
    sVar50 = uVar21 * sVar50;
    sVar51 = uVar23 * sVar55;
    sVar52 = uVar25 * sVar58;
    sVar53 = uVar27 * sVar59;
    sVar54 = uVar29 * sVar4;
    auVar31 = auVar31 ^ auVar43;
    uVar15 = auVar31._0_2_ - auVar43._0_2_ & -(ushort)(sVar60 < auVar42._0_2_);
    uVar17 = auVar31._2_2_ - auVar43._2_2_ & -(ushort)(sVar61 < auVar42._2_2_);
    uVar19 = auVar31._4_2_ - auVar43._4_2_ & -(ushort)(sVar62 < auVar42._4_2_);
    uVar21 = auVar31._6_2_ - auVar43._6_2_ & -(ushort)(sVar63 < auVar42._6_2_);
    uVar23 = auVar31._8_2_ - auVar43._8_2_ & -(ushort)(sVar60 < auVar42._8_2_);
    uVar25 = auVar31._10_2_ - auVar43._10_2_ & -(ushort)(sVar61 < auVar42._10_2_);
    uVar27 = auVar31._12_2_ - auVar43._12_2_ & -(ushort)(sVar62 < auVar42._12_2_);
    uVar29 = auVar31._14_2_ - auVar43._14_2_ & -(ushort)(sVar63 < auVar42._14_2_);
    puVar5 = (ushort *)(param_8 + 0x10 + param_2 * -2);
    *puVar5 = uVar15;
    puVar5[1] = uVar17;
    puVar5[2] = uVar19;
    puVar5[3] = uVar21;
    puVar5[4] = uVar23;
    puVar5[5] = uVar25;
    puVar5[6] = uVar27;
    puVar5[7] = uVar29;
    psVar2 = (short *)(param_9 + param_2 * -2);
    *psVar2 = sVar44;
    psVar2[1] = sVar48;
    psVar2[2] = sVar49;
    psVar2[3] = sVar50;
    psVar2[4] = sVar51;
    psVar2[5] = sVar52;
    psVar2[6] = sVar53;
    psVar2[7] = sVar54;
    sVar30 = uVar15 * sVar55;
    sVar33 = uVar17 * sVar58;
    sVar34 = uVar19 * sVar59;
    sVar35 = uVar21 * sVar4;
    sVar36 = uVar23 * sVar55;
    sVar37 = uVar25 * sVar58;
    sVar38 = uVar27 * sVar59;
    sVar39 = uVar29 * sVar4;
    uVar15 = (ushort)(sVar44 != 0);
    uVar19 = (ushort)(sVar48 != 0);
    uVar23 = (ushort)(sVar49 != 0);
    uVar27 = (ushort)(sVar50 != 0);
    uVar22 = (ushort)(sVar51 != 0);
    uVar24 = (ushort)(sVar52 != 0);
    uVar26 = (ushort)(sVar53 != 0);
    uVar28 = (ushort)(sVar54 != 0);
    psVar2 = (short *)(param_9 + 0x10 + param_2 * -2);
    *psVar2 = sVar30;
    psVar2[1] = sVar33;
    psVar2[2] = sVar34;
    psVar2[3] = sVar35;
    psVar2[4] = sVar36;
    psVar2[5] = sVar37;
    psVar2[6] = sVar38;
    psVar2[7] = sVar39;
    psVar2 = (short *)(param_13 + param_2 * -2);
    uVar17 = (ushort)(sVar30 != 0);
    uVar21 = (ushort)(sVar33 != 0);
    uVar25 = (ushort)(sVar34 != 0);
    uVar29 = (ushort)(sVar35 != 0);
    uVar10 = (ushort)(sVar36 != 0);
    uVar11 = (ushort)(sVar37 != 0);
    uVar12 = (ushort)(sVar38 != 0);
    uVar13 = (ushort)(sVar39 != 0);
    psVar3 = (short *)(param_13 + 0x10 + param_2 * -2);
    uVar17 = *psVar3 + uVar17 & -uVar17;
    uVar21 = psVar3[1] + uVar21 & -uVar21;
    uVar25 = psVar3[2] + uVar25 & -uVar25;
    uVar29 = psVar3[3] + uVar29 & -uVar29;
    uVar10 = psVar3[4] + uVar10 & -uVar10;
    uVar11 = psVar3[5] + uVar11 & -uVar11;
    uVar12 = psVar3[6] + uVar12 & -uVar12;
    uVar13 = psVar3[7] + uVar13 & -uVar13;
    uVar15 = *psVar2 + uVar15 & -uVar15;
    uVar19 = psVar2[1] + uVar19 & -uVar19;
    uVar23 = psVar2[2] + uVar23 & -uVar23;
    uVar27 = psVar2[3] + uVar27 & -uVar27;
    uVar22 = psVar2[4] + uVar22 & -uVar22;
    uVar24 = psVar2[5] + uVar24 & -uVar24;
    uVar26 = psVar2[6] + uVar26 & -uVar26;
    uVar28 = psVar2[7] + uVar28 & -uVar28;
    auVar31._0_2_ =
         ((short)uVar15 < (short)uVar17) * uVar17 | ((short)uVar15 >= (short)uVar17) * uVar15;
    auVar31._2_2_ =
         ((short)uVar19 < (short)uVar21) * uVar21 | ((short)uVar19 >= (short)uVar21) * uVar19;
    auVar31._4_2_ =
         ((short)uVar23 < (short)uVar25) * uVar25 | ((short)uVar23 >= (short)uVar25) * uVar23;
    auVar31._6_2_ =
         ((short)uVar27 < (short)uVar29) * uVar29 | ((short)uVar27 >= (short)uVar29) * uVar27;
    auVar31._8_2_ =
         ((short)uVar22 < (short)uVar10) * uVar10 | ((short)uVar22 >= (short)uVar10) * uVar22;
    auVar31._10_2_ =
         ((short)uVar24 < (short)uVar11) * uVar11 | ((short)uVar24 >= (short)uVar11) * uVar24;
    auVar31._12_2_ =
         ((short)uVar26 < (short)uVar12) * uVar12 | ((short)uVar26 >= (short)uVar12) * uVar26;
    auVar31._14_2_ =
         ((short)uVar28 < (short)uVar13) * uVar13 | ((short)uVar28 >= (short)uVar13) * uVar28;
    if (lVar8 + 0x10 < 0) {
      param_1 = param_1 - param_8;
      lVar7 = (-(lVar8 + 0x10) - 1U >> 4) + 1;
      puVar5 = (ushort *)(param_8 + (lVar8 + 0x18) * 2);
      auVar32 = auVar31;
      do {
        puVar1 = puVar5 + 0x10;
        auVar42 = psraw(*(int8_t (*) [16])(param_1 + -0x10 + (int64_t)puVar5),0xf);
        auVar46 = psraw(*(int8_t (*) [16])(param_1 + (int64_t)puVar5),0xf);
        auVar31 = auVar42 ^ *(int8_t (*) [16])(param_1 + -0x30 + (int64_t)puVar1);
        auVar40 = auVar46 ^ *(int8_t (*) [16])(param_1 + -0x20 + (int64_t)puVar1);
        auVar45._0_2_ = auVar31._0_2_ - auVar42._0_2_;
        auVar45._2_2_ = auVar31._2_2_ - auVar42._2_2_;
        auVar45._4_2_ = auVar31._4_2_ - auVar42._4_2_;
        auVar45._6_2_ = auVar31._6_2_ - auVar42._6_2_;
        auVar45._8_2_ = auVar31._8_2_ - auVar42._8_2_;
        auVar45._10_2_ = auVar31._10_2_ - auVar42._10_2_;
        auVar45._12_2_ = auVar31._12_2_ - auVar42._12_2_;
        auVar45._14_2_ = auVar31._14_2_ - auVar42._14_2_;
        auVar31 = paddsw(auVar45,auVar64);
        auVar41 = pmulhw(auVar31,auVar65);
        auVar43._0_2_ = auVar40._0_2_ - auVar46._0_2_;
        auVar43._2_2_ = auVar40._2_2_ - auVar46._2_2_;
        auVar43._4_2_ = auVar40._4_2_ - auVar46._4_2_;
        auVar43._6_2_ = auVar40._6_2_ - auVar46._6_2_;
        auVar43._8_2_ = auVar40._8_2_ - auVar46._8_2_;
        auVar43._10_2_ = auVar40._10_2_ - auVar46._10_2_;
        auVar43._12_2_ = auVar40._12_2_ - auVar46._12_2_;
        auVar43._14_2_ = auVar40._14_2_ - auVar46._14_2_;
        auVar40 = paddsw(auVar43,auVar64);
        auVar47._0_2_ = auVar41._0_2_ + auVar31._0_2_;
        auVar47._2_2_ = auVar41._2_2_ + auVar31._2_2_;
        auVar47._4_2_ = auVar41._4_2_ + auVar31._4_2_;
        auVar47._6_2_ = auVar41._6_2_ + auVar31._6_2_;
        auVar47._8_2_ = auVar41._8_2_ + auVar31._8_2_;
        auVar47._10_2_ = auVar41._10_2_ + auVar31._10_2_;
        auVar47._12_2_ = auVar41._12_2_ + auVar31._12_2_;
        auVar47._14_2_ = auVar41._14_2_ + auVar31._14_2_;
        auVar31 = pmulhw(auVar40,auVar65);
        auVar47 = pmulhw(auVar47,auVar66);
        auVar41._0_2_ = auVar31._0_2_ + auVar40._0_2_;
        auVar41._2_2_ = auVar31._2_2_ + auVar40._2_2_;
        auVar41._4_2_ = auVar31._4_2_ + auVar40._4_2_;
        auVar41._6_2_ = auVar31._6_2_ + auVar40._6_2_;
        auVar41._8_2_ = auVar31._8_2_ + auVar40._8_2_;
        auVar41._10_2_ = auVar31._10_2_ + auVar40._10_2_;
        auVar41._12_2_ = auVar31._12_2_ + auVar40._12_2_;
        auVar41._14_2_ = auVar31._14_2_ + auVar40._14_2_;
        auVar31 = pmulhw(auVar41,auVar66);
        auVar47 = auVar47 ^ auVar42;
        uVar15 = auVar47._0_2_ - auVar42._0_2_ & -(ushort)(sVar60 < auVar45._0_2_);
        uVar17 = auVar47._2_2_ - auVar42._2_2_ & -(ushort)(sVar61 < auVar45._2_2_);
        uVar19 = auVar47._4_2_ - auVar42._4_2_ & -(ushort)(sVar62 < auVar45._4_2_);
        uVar21 = auVar47._6_2_ - auVar42._6_2_ & -(ushort)(sVar63 < auVar45._6_2_);
        uVar23 = auVar47._8_2_ - auVar42._8_2_ & -(ushort)(sVar60 < auVar45._8_2_);
        uVar25 = auVar47._10_2_ - auVar42._10_2_ & -(ushort)(sVar61 < auVar45._10_2_);
        uVar27 = auVar47._12_2_ - auVar42._12_2_ & -(ushort)(sVar62 < auVar45._12_2_);
        uVar29 = auVar47._14_2_ - auVar42._14_2_ & -(ushort)(sVar63 < auVar45._14_2_);
        puVar5[-8] = uVar15;
        puVar5[-7] = uVar17;
        puVar5[-6] = uVar19;
        puVar5[-5] = uVar21;
        puVar5[-4] = uVar23;
        puVar5[-3] = uVar25;
        puVar5[-2] = uVar27;
        puVar5[-1] = uVar29;
        sVar36 = uVar15 * sVar55;
        sVar37 = uVar17 * sVar58;
        sVar38 = uVar19 * sVar59;
        sVar39 = uVar21 * sVar4;
        sVar51 = uVar23 * sVar55;
        sVar52 = uVar25 * sVar58;
        sVar53 = uVar27 * sVar59;
        sVar54 = uVar29 * sVar4;
        auVar31 = auVar31 ^ auVar46;
        uVar15 = auVar31._0_2_ - auVar46._0_2_ & -(ushort)(sVar60 < auVar43._0_2_);
        uVar17 = auVar31._2_2_ - auVar46._2_2_ & -(ushort)(sVar61 < auVar43._2_2_);
        uVar19 = auVar31._4_2_ - auVar46._4_2_ & -(ushort)(sVar62 < auVar43._4_2_);
        uVar21 = auVar31._6_2_ - auVar46._6_2_ & -(ushort)(sVar63 < auVar43._6_2_);
        uVar23 = auVar31._8_2_ - auVar46._8_2_ & -(ushort)(sVar60 < auVar43._8_2_);
        uVar25 = auVar31._10_2_ - auVar46._10_2_ & -(ushort)(sVar61 < auVar43._10_2_);
        uVar27 = auVar31._12_2_ - auVar46._12_2_ & -(ushort)(sVar62 < auVar43._12_2_);
        uVar29 = auVar31._14_2_ - auVar46._14_2_ & -(ushort)(sVar63 < auVar43._14_2_);
        *puVar5 = uVar15;
        puVar5[1] = uVar17;
        puVar5[2] = uVar19;
        puVar5[3] = uVar21;
        puVar5[4] = uVar23;
        puVar5[5] = uVar25;
        puVar5[6] = uVar27;
        puVar5[7] = uVar29;
        psVar2 = (short *)((param_9 - param_8) + -0x30 + (int64_t)puVar1);
        *psVar2 = sVar36;
        psVar2[1] = sVar37;
        psVar2[2] = sVar38;
        psVar2[3] = sVar39;
        psVar2[4] = sVar51;
        psVar2[5] = sVar52;
        psVar2[6] = sVar53;
        psVar2[7] = sVar54;
        sVar44 = uVar15 * sVar55;
        sVar48 = uVar17 * sVar58;
        sVar49 = uVar19 * sVar59;
        sVar50 = uVar21 * sVar4;
        sVar30 = uVar23 * sVar55;
        sVar33 = uVar25 * sVar58;
        sVar34 = uVar27 * sVar59;
        sVar35 = uVar29 * sVar4;
        uVar15 = (ushort)(sVar36 != 0);
        uVar19 = (ushort)(sVar37 != 0);
        uVar23 = (ushort)(sVar38 != 0);
        uVar27 = (ushort)(sVar39 != 0);
        uVar22 = (ushort)(sVar51 != 0);
        uVar24 = (ushort)(sVar52 != 0);
        uVar26 = (ushort)(sVar53 != 0);
        uVar28 = (ushort)(sVar54 != 0);
        psVar2 = (short *)((param_9 - param_8) + -0x20 + (int64_t)puVar1);
        *psVar2 = sVar44;
        psVar2[1] = sVar48;
        psVar2[2] = sVar49;
        psVar2[3] = sVar50;
        psVar2[4] = sVar30;
        psVar2[5] = sVar33;
        psVar2[6] = sVar34;
        psVar2[7] = sVar35;
        psVar2 = (short *)((param_13 - param_8) + -0x30 + (int64_t)puVar1);
        uVar17 = (ushort)(sVar44 != 0);
        uVar21 = (ushort)(sVar48 != 0);
        uVar25 = (ushort)(sVar49 != 0);
        uVar29 = (ushort)(sVar50 != 0);
        uVar10 = (ushort)(sVar30 != 0);
        uVar11 = (ushort)(sVar33 != 0);
        uVar12 = (ushort)(sVar34 != 0);
        uVar13 = (ushort)(sVar35 != 0);
        psVar3 = (short *)((param_13 - param_8) + -0x20 + (int64_t)puVar1);
        uVar14 = *psVar2 + uVar15 & -uVar15;
        uVar16 = psVar2[1] + uVar19 & -uVar19;
        uVar18 = psVar2[2] + uVar23 & -uVar23;
        uVar20 = psVar2[3] + uVar27 & -uVar27;
        uVar22 = psVar2[4] + uVar22 & -uVar22;
        uVar24 = psVar2[5] + uVar24 & -uVar24;
        uVar26 = psVar2[6] + uVar26 & -uVar26;
        uVar28 = psVar2[7] + uVar28 & -uVar28;
        uVar15 = *psVar3 + uVar17 & -uVar17;
        uVar17 = psVar3[1] + uVar21 & -uVar21;
        uVar19 = psVar3[2] + uVar25 & -uVar25;
        uVar21 = psVar3[3] + uVar29 & -uVar29;
        uVar23 = psVar3[4] + uVar10 & -uVar10;
        uVar25 = psVar3[5] + uVar11 & -uVar11;
        uVar27 = psVar3[6] + uVar12 & -uVar12;
        uVar29 = psVar3[7] + uVar13 & -uVar13;
        uVar15 = ((short)uVar14 < (short)uVar15) * uVar15 |
                 ((short)uVar14 >= (short)uVar15) * uVar14;
        uVar17 = ((short)uVar16 < (short)uVar17) * uVar17 |
                 ((short)uVar16 >= (short)uVar17) * uVar16;
        uVar19 = ((short)uVar18 < (short)uVar19) * uVar19 |
                 ((short)uVar18 >= (short)uVar19) * uVar18;
        uVar21 = ((short)uVar20 < (short)uVar21) * uVar21 |
                 ((short)uVar20 >= (short)uVar21) * uVar20;
        uVar23 = ((short)uVar22 < (short)uVar23) * uVar23 |
                 ((short)uVar22 >= (short)uVar23) * uVar22;
        uVar25 = ((short)uVar24 < (short)uVar25) * uVar25 |
                 ((short)uVar24 >= (short)uVar25) * uVar24;
        uVar27 = ((short)uVar26 < (short)uVar27) * uVar27 |
                 ((short)uVar26 >= (short)uVar27) * uVar26;
        uVar29 = ((short)uVar28 < (short)uVar29) * uVar29 |
                 ((short)uVar28 >= (short)uVar29) * uVar28;
        sVar44 = auVar32._0_2_;
        auVar31._0_2_ =
             (sVar44 < (short)uVar15) * uVar15 | (ushort)(sVar44 >= (short)uVar15) * sVar44;
        sVar44 = auVar32._2_2_;
        auVar31._2_2_ =
             (sVar44 < (short)uVar17) * uVar17 | (ushort)(sVar44 >= (short)uVar17) * sVar44;
        sVar44 = auVar32._4_2_;
        auVar31._4_2_ =
             (sVar44 < (short)uVar19) * uVar19 | (ushort)(sVar44 >= (short)uVar19) * sVar44;
        sVar44 = auVar32._6_2_;
        auVar31._6_2_ =
             (sVar44 < (short)uVar21) * uVar21 | (ushort)(sVar44 >= (short)uVar21) * sVar44;
        sVar44 = auVar32._8_2_;
        auVar31._8_2_ =
             (sVar44 < (short)uVar23) * uVar23 | (ushort)(sVar44 >= (short)uVar23) * sVar44;
        sVar44 = auVar32._10_2_;
        auVar31._10_2_ =
             (sVar44 < (short)uVar25) * uVar25 | (ushort)(sVar44 >= (short)uVar25) * sVar44;
        sVar44 = auVar32._12_2_;
        sVar48 = auVar32._14_2_;
        auVar31._12_2_ =
             (sVar44 < (short)uVar27) * uVar27 | (ushort)(sVar44 >= (short)uVar27) * sVar44;
        auVar31._14_2_ =
             (sVar48 < (short)uVar29) * uVar29 | (ushort)(sVar48 >= (short)uVar29) * sVar48;
        lVar7 = lVar7 + -1;
        puVar5 = puVar1;
        auVar32 = auVar31;
      } while (lVar7 != 0);
    }
    auVar9._0_8_ = auVar31._8_8_;
    auVar9._8_4_ = auVar31._0_4_;
    auVar9._12_4_ = auVar31._0_4_;
    sVar44 = auVar31._8_2_;
    sVar55 = auVar31._0_2_;
    auVar56._0_2_ = (ushort)(sVar55 < sVar44) * sVar44 | (ushort)(sVar55 >= sVar44) * sVar55;
    sVar48 = auVar31._10_2_;
    sVar58 = auVar31._2_2_;
    auVar56._2_2_ = (ushort)(sVar58 < sVar48) * sVar48 | (ushort)(sVar58 >= sVar48) * sVar58;
    sVar49 = auVar31._12_2_;
    sVar50 = auVar31._4_2_;
    auVar56._4_2_ = (ushort)(sVar50 < sVar49) * sVar49 | (ushort)(sVar50 >= sVar49) * sVar50;
    sVar50 = auVar31._14_2_;
    sVar59 = auVar31._6_2_;
    auVar56._6_2_ = (ushort)(sVar59 < sVar50) * sVar50 | (ushort)(sVar59 >= sVar50) * sVar59;
    auVar56._8_2_ = (ushort)(sVar44 < sVar55) * sVar55 | (ushort)(sVar44 >= sVar55) * sVar44;
    auVar56._10_2_ = (ushort)(sVar48 < sVar58) * sVar58 | (ushort)(sVar48 >= sVar58) * sVar48;
    auVar56._12_2_ = (ushort)(sVar49 < sVar55) * sVar55 | (ushort)(sVar49 >= sVar55) * sVar49;
    auVar56._14_2_ = (ushort)(sVar50 < sVar58) * sVar58 | (ushort)(sVar50 >= sVar58) * sVar50;
    auVar31 = pshuflw(auVar9,auVar56,0xe);
    sVar44 = auVar31._0_2_;
    auVar57._0_2_ =
         (ushort)((short)auVar56._0_2_ < sVar44) * sVar44 |
         ((short)auVar56._0_2_ >= sVar44) * auVar56._0_2_;
    sVar44 = auVar31._2_2_;
    auVar57._2_2_ =
         (ushort)((short)auVar56._2_2_ < sVar44) * sVar44 |
         ((short)auVar56._2_2_ >= sVar44) * auVar56._2_2_;
    sVar44 = auVar31._4_2_;
    auVar57._4_2_ =
         (ushort)((short)auVar56._4_2_ < sVar44) * sVar44 |
         ((short)auVar56._4_2_ >= sVar44) * auVar56._4_2_;
    sVar44 = auVar31._6_2_;
    auVar57._6_2_ =
         (ushort)((short)auVar56._6_2_ < sVar44) * sVar44 |
         ((short)auVar56._6_2_ >= sVar44) * auVar56._6_2_;
    sVar44 = auVar31._8_2_;
    auVar57._8_2_ =
         (ushort)((short)auVar56._8_2_ < sVar44) * sVar44 |
         ((short)auVar56._8_2_ >= sVar44) * auVar56._8_2_;
    sVar44 = auVar31._10_2_;
    auVar57._10_2_ =
         (ushort)((short)auVar56._10_2_ < sVar44) * sVar44 |
         ((short)auVar56._10_2_ >= sVar44) * auVar56._10_2_;
    sVar44 = auVar31._12_2_;
    auVar57._12_2_ =
         (ushort)((short)auVar56._12_2_ < sVar44) * sVar44 |
         ((short)auVar56._12_2_ >= sVar44) * auVar56._12_2_;
    sVar44 = auVar31._14_2_;
    auVar57._14_2_ =
         (ushort)((short)auVar56._14_2_ < sVar44) * sVar44 |
         ((short)auVar56._14_2_ >= sVar44) * auVar56._14_2_;
    auVar31 = pshuflw(auVar31,auVar57,1);
    sVar44 = auVar31._2_2_;
    uVar15 = (ushort)((short)auVar57._2_2_ < sVar44) * sVar44 |
             ((short)auVar57._2_2_ >= sVar44) * auVar57._2_2_;
  }
  else {
    pauVar6 = (int8_t (*) [16])(param_8 + (lVar8 + 8) * 2);
    do {
      lVar8 = lVar8 + 0x10;
      *(int8_t (*) [16])((int64_t)pauVar6 + (param_9 - param_8) + -0x10) = ZEXT416(0);
      *(int8_t (*) [16])((int64_t)pauVar6 + (param_9 - param_8)) = ZEXT416(0);
      pauVar6[-1] = ZEXT416(0);
      *pauVar6 = ZEXT416(0);
      pauVar6 = pauVar6 + 2;
    } while (lVar8 < 0);
    uVar15 = 0;
  }
  *param_11 = uVar15;
  return;
}