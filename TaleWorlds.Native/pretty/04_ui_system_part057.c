#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part057.c - 4 个函数

// 函数: void FUN_180695c4d(uint64_t param_1,longlong param_2,uint64_t param_3,short *param_4)
void FUN_180695c4d(uint64_t param_1,longlong param_2,uint64_t param_3,short *param_4)

{
  ushort *puVar1;
  short *psVar2;
  short *psVar3;
  short sVar4;
  int8_t (*in_RAX) [16];
  ushort *puVar5;
  longlong lVar6;
  longlong unaff_RBX;
  longlong lVar7;
  longlong unaff_RDI;
  longlong in_R10;
  longlong in_R11;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  int8_t auVar8 [16];
  ushort uVar13;
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
  short sVar29;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  int8_t auVar30 [16];
  int8_t auVar31 [16];
  short sVar38;
  int8_t auVar39 [16];
  int8_t in_XMM4 [16];
  int8_t auVar40 [16];
  int8_t auVar41 [16];
  int8_t in_XMM5 [16];
  int8_t auVar42 [16];
  short sVar43;
  short sVar47;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  int8_t auVar44 [16];
  int8_t auVar45 [16];
  short sVar53;
  int8_t auVar46 [16];
  short sVar54;
  int32_t unaff_XMM7_Da;
  short sVar55;
  short sVar56;
  int32_t unaff_XMM7_Db;
  short sVar57;
  short sVar58;
  int32_t unaff_XMM7_Dc;
  short sVar59;
  short sVar60;
  int32_t unaff_XMM7_Dd;
  short sVar61;
  int8_t auVar63 [16];
  int8_t auVar64 [16];
  short sVar67;
  short sVar68;
  short sVar69;
  short sVar70;
  int8_t auVar71 [16];
  int8_t auVar72 [16];
  int8_t auVar73 [16];
  int8_t (*in_stack_000000b8) [16];
  int8_t (*in_stack_000000c0) [16];
  short *in_stack_000000d8;
  ushort *in_stack_000000e0;
  short sVar62;
  short sVar65;
  short sVar66;
  
  sVar67 = param_4[4] + -1;
  sVar68 = param_4[5] + -1;
  sVar69 = param_4[6] + -1;
  sVar70 = param_4[7] + -1;
  auVar40 = psraw(in_XMM4,0xf);
  auVar42 = psraw(in_XMM5,0xf);
  auVar30 = auVar40 ^ *(int8_t (*) [16])(unaff_RBX + param_2 * 2);
  auVar39 = auVar42 ^ *(int8_t (*) [16])(unaff_RBX + 0x10 + param_2 * 2);
  auVar31._0_2_ = auVar30._0_2_ - auVar40._0_2_;
  auVar31._2_2_ = auVar30._2_2_ - auVar40._2_2_;
  auVar31._4_2_ = auVar30._4_2_ - auVar40._4_2_;
  auVar31._6_2_ = auVar30._6_2_ - auVar40._6_2_;
  auVar31._8_2_ = auVar30._8_2_ - auVar40._8_2_;
  auVar31._10_2_ = auVar30._10_2_ - auVar40._10_2_;
  auVar31._12_2_ = auVar30._12_2_ - auVar40._12_2_;
  auVar31._14_2_ = auVar30._14_2_ - auVar40._14_2_;
  auVar30 = paddsw(auVar31,*in_RAX);
  auVar44 = pmulhw(auVar30,*in_stack_000000b8);
  auVar41._0_2_ = auVar39._0_2_ - auVar42._0_2_;
  auVar41._2_2_ = auVar39._2_2_ - auVar42._2_2_;
  auVar41._4_2_ = auVar39._4_2_ - auVar42._4_2_;
  auVar41._6_2_ = auVar39._6_2_ - auVar42._6_2_;
  auVar41._8_2_ = auVar39._8_2_ - auVar42._8_2_;
  auVar41._10_2_ = auVar39._10_2_ - auVar42._10_2_;
  auVar41._12_2_ = auVar39._12_2_ - auVar42._12_2_;
  auVar41._14_2_ = auVar39._14_2_ - auVar42._14_2_;
  sVar43 = *in_stack_000000d8;
  sVar47 = in_stack_000000d8[1];
  sVar48 = in_stack_000000d8[2];
  sVar49 = in_stack_000000d8[3];
  sVar62 = in_stack_000000d8[4];
  sVar65 = in_stack_000000d8[5];
  sVar66 = in_stack_000000d8[6];
  sVar4 = in_stack_000000d8[7];
  auVar45._0_2_ = auVar44._0_2_ + auVar30._0_2_;
  auVar45._2_2_ = auVar44._2_2_ + auVar30._2_2_;
  auVar45._4_2_ = auVar44._4_2_ + auVar30._4_2_;
  auVar45._6_2_ = auVar44._6_2_ + auVar30._6_2_;
  auVar45._8_2_ = auVar44._8_2_ + auVar30._8_2_;
  auVar45._10_2_ = auVar44._10_2_ + auVar30._10_2_;
  auVar45._12_2_ = auVar44._12_2_ + auVar30._12_2_;
  auVar45._14_2_ = auVar44._14_2_ + auVar30._14_2_;
  auVar71._8_8_ = SUB168(*in_RAX,8);
  auVar71._0_8_ = auVar71._8_8_;
  auVar44 = paddsw(auVar41,auVar71);
  auVar72._8_8_ = SUB168(*in_stack_000000b8,8);
  auVar72._0_8_ = auVar72._8_8_;
  auVar30 = pmulhw(auVar44,auVar72);
  auVar45 = pmulhw(auVar45,*in_stack_000000c0);
  auVar73._8_8_ = SUB168(*in_stack_000000c0,8);
  auVar73._0_8_ = auVar73._8_8_;
  auVar39._0_2_ = auVar30._0_2_ + auVar44._0_2_;
  auVar39._2_2_ = auVar30._2_2_ + auVar44._2_2_;
  auVar39._4_2_ = auVar30._4_2_ + auVar44._4_2_;
  auVar39._6_2_ = auVar30._6_2_ + auVar44._6_2_;
  auVar39._8_2_ = auVar30._8_2_ + auVar44._8_2_;
  auVar39._10_2_ = auVar30._10_2_ + auVar44._10_2_;
  auVar39._12_2_ = auVar30._12_2_ + auVar44._12_2_;
  auVar39._14_2_ = auVar30._14_2_ + auVar44._14_2_;
  auVar30 = pmulhw(auVar39,auVar73);
  auVar45 = auVar45 ^ auVar40;
  uVar14 = auVar45._0_2_ - auVar40._0_2_ & -(ushort)((short)(*param_4 + -1) < auVar31._0_2_);
  uVar16 = auVar45._2_2_ - auVar40._2_2_ & -(ushort)((short)(param_4[1] + -1) < auVar31._2_2_);
  uVar18 = auVar45._4_2_ - auVar40._4_2_ & -(ushort)((short)(param_4[2] + -1) < auVar31._4_2_);
  uVar20 = auVar45._6_2_ - auVar40._6_2_ & -(ushort)((short)(param_4[3] + -1) < auVar31._6_2_);
  uVar22 = auVar45._8_2_ - auVar40._8_2_ & -(ushort)(sVar67 < auVar31._8_2_);
  uVar24 = auVar45._10_2_ - auVar40._10_2_ & -(ushort)(sVar68 < auVar31._10_2_);
  uVar26 = auVar45._12_2_ - auVar40._12_2_ & -(ushort)(sVar69 < auVar31._12_2_);
  uVar28 = auVar45._14_2_ - auVar40._14_2_ & -(ushort)(sVar70 < auVar31._14_2_);
  puVar5 = (ushort *)(in_R11 + param_2 * 2);
  *puVar5 = uVar14;
  puVar5[1] = uVar16;
  puVar5[2] = uVar18;
  puVar5[3] = uVar20;
  puVar5[4] = uVar22;
  puVar5[5] = uVar24;
  puVar5[6] = uVar26;
  puVar5[7] = uVar28;
  sVar43 = uVar14 * sVar43;
  sVar47 = uVar16 * sVar47;
  sVar48 = uVar18 * sVar48;
  sVar49 = uVar20 * sVar49;
  sVar50 = uVar22 * sVar62;
  sVar51 = uVar24 * sVar65;
  sVar52 = uVar26 * sVar66;
  sVar53 = uVar28 * sVar4;
  auVar30 = auVar30 ^ auVar42;
  uVar14 = auVar30._0_2_ - auVar42._0_2_ & -(ushort)(sVar67 < auVar41._0_2_);
  uVar16 = auVar30._2_2_ - auVar42._2_2_ & -(ushort)(sVar68 < auVar41._2_2_);
  uVar18 = auVar30._4_2_ - auVar42._4_2_ & -(ushort)(sVar69 < auVar41._4_2_);
  uVar20 = auVar30._6_2_ - auVar42._6_2_ & -(ushort)(sVar70 < auVar41._6_2_);
  uVar22 = auVar30._8_2_ - auVar42._8_2_ & -(ushort)(sVar67 < auVar41._8_2_);
  uVar24 = auVar30._10_2_ - auVar42._10_2_ & -(ushort)(sVar68 < auVar41._10_2_);
  uVar26 = auVar30._12_2_ - auVar42._12_2_ & -(ushort)(sVar69 < auVar41._12_2_);
  uVar28 = auVar30._14_2_ - auVar42._14_2_ & -(ushort)(sVar70 < auVar41._14_2_);
  puVar5 = (ushort *)(in_R11 + 0x10 + param_2 * 2);
  *puVar5 = uVar14;
  puVar5[1] = uVar16;
  puVar5[2] = uVar18;
  puVar5[3] = uVar20;
  puVar5[4] = uVar22;
  puVar5[5] = uVar24;
  puVar5[6] = uVar26;
  puVar5[7] = uVar28;
  psVar2 = (short *)(in_R10 + param_2 * 2);
  *psVar2 = sVar43;
  psVar2[1] = sVar47;
  psVar2[2] = sVar48;
  psVar2[3] = sVar49;
  psVar2[4] = sVar50;
  psVar2[5] = sVar51;
  psVar2[6] = sVar52;
  psVar2[7] = sVar53;
  sVar54 = (short)unaff_XMM7_Da;
  sVar55 = (short)((uint)unaff_XMM7_Da >> 0x10);
  sVar56 = (short)unaff_XMM7_Db;
  sVar57 = (short)((uint)unaff_XMM7_Db >> 0x10);
  sVar58 = (short)unaff_XMM7_Dc;
  sVar59 = (short)((uint)unaff_XMM7_Dc >> 0x10);
  sVar60 = (short)unaff_XMM7_Dd;
  sVar61 = (short)((uint)unaff_XMM7_Dd >> 0x10);
  sVar29 = uVar14 * sVar62;
  sVar32 = uVar16 * sVar65;
  sVar33 = uVar18 * sVar66;
  sVar34 = uVar20 * sVar4;
  sVar35 = uVar22 * sVar62;
  sVar36 = uVar24 * sVar65;
  sVar37 = uVar26 * sVar66;
  sVar38 = uVar28 * sVar4;
  uVar14 = (ushort)((ushort)-(ushort)(sVar43 == sVar54) == sVar54);
  uVar18 = (ushort)((ushort)-(ushort)(sVar47 == sVar55) == sVar55);
  uVar22 = (ushort)((ushort)-(ushort)(sVar48 == sVar56) == sVar56);
  uVar26 = (ushort)((ushort)-(ushort)(sVar49 == sVar57) == sVar57);
  uVar21 = (ushort)((ushort)-(ushort)(sVar50 == sVar58) == sVar58);
  uVar23 = (ushort)((ushort)-(ushort)(sVar51 == sVar59) == sVar59);
  uVar25 = (ushort)((ushort)-(ushort)(sVar52 == sVar60) == sVar60);
  uVar27 = (ushort)((ushort)-(ushort)(sVar53 == sVar61) == sVar61);
  psVar2 = (short *)(in_R10 + 0x10 + param_2 * 2);
  *psVar2 = sVar29;
  psVar2[1] = sVar32;
  psVar2[2] = sVar33;
  psVar2[3] = sVar34;
  psVar2[4] = sVar35;
  psVar2[5] = sVar36;
  psVar2[6] = sVar37;
  psVar2[7] = sVar38;
  psVar2 = (short *)(unaff_RDI + param_2 * 2);
  uVar16 = (ushort)((ushort)-(ushort)(sVar29 == sVar54) == sVar54);
  uVar20 = (ushort)((ushort)-(ushort)(sVar32 == sVar55) == sVar55);
  uVar24 = (ushort)((ushort)-(ushort)(sVar33 == sVar56) == sVar56);
  uVar28 = (ushort)((ushort)-(ushort)(sVar34 == sVar57) == sVar57);
  uVar9 = (ushort)((ushort)-(ushort)(sVar35 == sVar58) == sVar58);
  uVar10 = (ushort)((ushort)-(ushort)(sVar36 == sVar59) == sVar59);
  uVar11 = (ushort)((ushort)-(ushort)(sVar37 == sVar60) == sVar60);
  uVar12 = (ushort)((ushort)-(ushort)(sVar38 == sVar61) == sVar61);
  psVar3 = (short *)(unaff_RDI + 0x10 + param_2 * 2);
  uVar16 = *psVar3 + uVar16 & -uVar16;
  uVar20 = psVar3[1] + uVar20 & -uVar20;
  uVar24 = psVar3[2] + uVar24 & -uVar24;
  uVar28 = psVar3[3] + uVar28 & -uVar28;
  uVar9 = psVar3[4] + uVar9 & -uVar9;
  uVar10 = psVar3[5] + uVar10 & -uVar10;
  uVar11 = psVar3[6] + uVar11 & -uVar11;
  uVar12 = psVar3[7] + uVar12 & -uVar12;
  uVar14 = *psVar2 + uVar14 & -uVar14;
  uVar18 = psVar2[1] + uVar18 & -uVar18;
  uVar22 = psVar2[2] + uVar22 & -uVar22;
  uVar26 = psVar2[3] + uVar26 & -uVar26;
  uVar21 = psVar2[4] + uVar21 & -uVar21;
  uVar23 = psVar2[5] + uVar23 & -uVar23;
  uVar25 = psVar2[6] + uVar25 & -uVar25;
  uVar27 = psVar2[7] + uVar27 & -uVar27;
  auVar30._0_2_ =
       ((short)uVar14 < (short)uVar16) * uVar16 | ((short)uVar14 >= (short)uVar16) * uVar14;
  auVar30._2_2_ =
       ((short)uVar18 < (short)uVar20) * uVar20 | ((short)uVar18 >= (short)uVar20) * uVar18;
  auVar30._4_2_ =
       ((short)uVar22 < (short)uVar24) * uVar24 | ((short)uVar22 >= (short)uVar24) * uVar22;
  auVar30._6_2_ =
       ((short)uVar26 < (short)uVar28) * uVar28 | ((short)uVar26 >= (short)uVar28) * uVar26;
  auVar30._8_2_ = ((short)uVar21 < (short)uVar9) * uVar9 | ((short)uVar21 >= (short)uVar9) * uVar21;
  auVar30._10_2_ =
       ((short)uVar23 < (short)uVar10) * uVar10 | ((short)uVar23 >= (short)uVar10) * uVar23;
  auVar30._12_2_ =
       ((short)uVar25 < (short)uVar11) * uVar11 | ((short)uVar25 >= (short)uVar11) * uVar25;
  auVar30._14_2_ =
       ((short)uVar27 < (short)uVar12) * uVar12 | ((short)uVar27 >= (short)uVar12) * uVar27;
  if (param_2 + 0x10 < 0) {
    lVar7 = unaff_RBX - in_R11;
    lVar6 = (-(param_2 + 0x10) - 1U >> 4) + 1;
    puVar5 = (ushort *)(in_R11 + (param_2 + 0x18) * 2);
    auVar31 = auVar30;
    do {
      puVar1 = puVar5 + 0x10;
      auVar41 = psraw(*(int8_t (*) [16])(lVar7 + -0x10 + (longlong)puVar5),0xf);
      auVar45 = psraw(*(int8_t (*) [16])(lVar7 + (longlong)puVar5),0xf);
      auVar30 = auVar41 ^ *(int8_t (*) [16])(lVar7 + -0x30 + (longlong)puVar1);
      auVar39 = auVar45 ^ *(int8_t (*) [16])(lVar7 + -0x20 + (longlong)puVar1);
      auVar44._0_2_ = auVar30._0_2_ - auVar41._0_2_;
      auVar44._2_2_ = auVar30._2_2_ - auVar41._2_2_;
      auVar44._4_2_ = auVar30._4_2_ - auVar41._4_2_;
      auVar44._6_2_ = auVar30._6_2_ - auVar41._6_2_;
      auVar44._8_2_ = auVar30._8_2_ - auVar41._8_2_;
      auVar44._10_2_ = auVar30._10_2_ - auVar41._10_2_;
      auVar44._12_2_ = auVar30._12_2_ - auVar41._12_2_;
      auVar44._14_2_ = auVar30._14_2_ - auVar41._14_2_;
      auVar30 = paddsw(auVar44,auVar71);
      auVar40 = pmulhw(auVar30,auVar72);
      auVar42._0_2_ = auVar39._0_2_ - auVar45._0_2_;
      auVar42._2_2_ = auVar39._2_2_ - auVar45._2_2_;
      auVar42._4_2_ = auVar39._4_2_ - auVar45._4_2_;
      auVar42._6_2_ = auVar39._6_2_ - auVar45._6_2_;
      auVar42._8_2_ = auVar39._8_2_ - auVar45._8_2_;
      auVar42._10_2_ = auVar39._10_2_ - auVar45._10_2_;
      auVar42._12_2_ = auVar39._12_2_ - auVar45._12_2_;
      auVar42._14_2_ = auVar39._14_2_ - auVar45._14_2_;
      auVar39 = paddsw(auVar42,auVar71);
      auVar46._0_2_ = auVar40._0_2_ + auVar30._0_2_;
      auVar46._2_2_ = auVar40._2_2_ + auVar30._2_2_;
      auVar46._4_2_ = auVar40._4_2_ + auVar30._4_2_;
      auVar46._6_2_ = auVar40._6_2_ + auVar30._6_2_;
      auVar46._8_2_ = auVar40._8_2_ + auVar30._8_2_;
      auVar46._10_2_ = auVar40._10_2_ + auVar30._10_2_;
      auVar46._12_2_ = auVar40._12_2_ + auVar30._12_2_;
      auVar46._14_2_ = auVar40._14_2_ + auVar30._14_2_;
      auVar30 = pmulhw(auVar39,auVar72);
      auVar46 = pmulhw(auVar46,auVar73);
      auVar40._0_2_ = auVar30._0_2_ + auVar39._0_2_;
      auVar40._2_2_ = auVar30._2_2_ + auVar39._2_2_;
      auVar40._4_2_ = auVar30._4_2_ + auVar39._4_2_;
      auVar40._6_2_ = auVar30._6_2_ + auVar39._6_2_;
      auVar40._8_2_ = auVar30._8_2_ + auVar39._8_2_;
      auVar40._10_2_ = auVar30._10_2_ + auVar39._10_2_;
      auVar40._12_2_ = auVar30._12_2_ + auVar39._12_2_;
      auVar40._14_2_ = auVar30._14_2_ + auVar39._14_2_;
      auVar30 = pmulhw(auVar40,auVar73);
      auVar46 = auVar46 ^ auVar41;
      uVar14 = auVar46._0_2_ - auVar41._0_2_ & -(ushort)(sVar67 < auVar44._0_2_);
      uVar16 = auVar46._2_2_ - auVar41._2_2_ & -(ushort)(sVar68 < auVar44._2_2_);
      uVar18 = auVar46._4_2_ - auVar41._4_2_ & -(ushort)(sVar69 < auVar44._4_2_);
      uVar20 = auVar46._6_2_ - auVar41._6_2_ & -(ushort)(sVar70 < auVar44._6_2_);
      uVar22 = auVar46._8_2_ - auVar41._8_2_ & -(ushort)(sVar67 < auVar44._8_2_);
      uVar24 = auVar46._10_2_ - auVar41._10_2_ & -(ushort)(sVar68 < auVar44._10_2_);
      uVar26 = auVar46._12_2_ - auVar41._12_2_ & -(ushort)(sVar69 < auVar44._12_2_);
      uVar28 = auVar46._14_2_ - auVar41._14_2_ & -(ushort)(sVar70 < auVar44._14_2_);
      puVar5[-8] = uVar14;
      puVar5[-7] = uVar16;
      puVar5[-6] = uVar18;
      puVar5[-5] = uVar20;
      puVar5[-4] = uVar22;
      puVar5[-3] = uVar24;
      puVar5[-2] = uVar26;
      puVar5[-1] = uVar28;
      sVar35 = uVar14 * sVar62;
      sVar36 = uVar16 * sVar65;
      sVar37 = uVar18 * sVar66;
      sVar38 = uVar20 * sVar4;
      sVar50 = uVar22 * sVar62;
      sVar51 = uVar24 * sVar65;
      sVar52 = uVar26 * sVar66;
      sVar53 = uVar28 * sVar4;
      auVar30 = auVar30 ^ auVar45;
      uVar14 = auVar30._0_2_ - auVar45._0_2_ & -(ushort)(sVar67 < auVar42._0_2_);
      uVar16 = auVar30._2_2_ - auVar45._2_2_ & -(ushort)(sVar68 < auVar42._2_2_);
      uVar18 = auVar30._4_2_ - auVar45._4_2_ & -(ushort)(sVar69 < auVar42._4_2_);
      uVar20 = auVar30._6_2_ - auVar45._6_2_ & -(ushort)(sVar70 < auVar42._6_2_);
      uVar22 = auVar30._8_2_ - auVar45._8_2_ & -(ushort)(sVar67 < auVar42._8_2_);
      uVar24 = auVar30._10_2_ - auVar45._10_2_ & -(ushort)(sVar68 < auVar42._10_2_);
      uVar26 = auVar30._12_2_ - auVar45._12_2_ & -(ushort)(sVar69 < auVar42._12_2_);
      uVar28 = auVar30._14_2_ - auVar45._14_2_ & -(ushort)(sVar70 < auVar42._14_2_);
      *puVar5 = uVar14;
      puVar5[1] = uVar16;
      puVar5[2] = uVar18;
      puVar5[3] = uVar20;
      puVar5[4] = uVar22;
      puVar5[5] = uVar24;
      puVar5[6] = uVar26;
      puVar5[7] = uVar28;
      psVar2 = (short *)((in_R10 - in_R11) + -0x30 + (longlong)puVar1);
      *psVar2 = sVar35;
      psVar2[1] = sVar36;
      psVar2[2] = sVar37;
      psVar2[3] = sVar38;
      psVar2[4] = sVar50;
      psVar2[5] = sVar51;
      psVar2[6] = sVar52;
      psVar2[7] = sVar53;
      sVar43 = uVar14 * sVar62;
      sVar47 = uVar16 * sVar65;
      sVar48 = uVar18 * sVar66;
      sVar49 = uVar20 * sVar4;
      sVar29 = uVar22 * sVar62;
      sVar32 = uVar24 * sVar65;
      sVar33 = uVar26 * sVar66;
      sVar34 = uVar28 * sVar4;
      uVar14 = (ushort)((ushort)-(ushort)(sVar35 == sVar54) == sVar54);
      uVar18 = (ushort)((ushort)-(ushort)(sVar36 == sVar55) == sVar55);
      uVar22 = (ushort)((ushort)-(ushort)(sVar37 == sVar56) == sVar56);
      uVar26 = (ushort)((ushort)-(ushort)(sVar38 == sVar57) == sVar57);
      uVar21 = (ushort)((ushort)-(ushort)(sVar50 == sVar58) == sVar58);
      uVar23 = (ushort)((ushort)-(ushort)(sVar51 == sVar59) == sVar59);
      uVar25 = (ushort)((ushort)-(ushort)(sVar52 == sVar60) == sVar60);
      uVar27 = (ushort)((ushort)-(ushort)(sVar53 == sVar61) == sVar61);
      psVar2 = (short *)((in_R10 - in_R11) + -0x20 + (longlong)puVar1);
      *psVar2 = sVar43;
      psVar2[1] = sVar47;
      psVar2[2] = sVar48;
      psVar2[3] = sVar49;
      psVar2[4] = sVar29;
      psVar2[5] = sVar32;
      psVar2[6] = sVar33;
      psVar2[7] = sVar34;
      psVar2 = (short *)((unaff_RDI - in_R11) + -0x30 + (longlong)puVar1);
      uVar16 = (ushort)((ushort)-(ushort)(sVar43 == sVar54) == sVar54);
      uVar20 = (ushort)((ushort)-(ushort)(sVar47 == sVar55) == sVar55);
      uVar24 = (ushort)((ushort)-(ushort)(sVar48 == sVar56) == sVar56);
      uVar28 = (ushort)((ushort)-(ushort)(sVar49 == sVar57) == sVar57);
      uVar9 = (ushort)((ushort)-(ushort)(sVar29 == sVar58) == sVar58);
      uVar10 = (ushort)((ushort)-(ushort)(sVar32 == sVar59) == sVar59);
      uVar11 = (ushort)((ushort)-(ushort)(sVar33 == sVar60) == sVar60);
      uVar12 = (ushort)((ushort)-(ushort)(sVar34 == sVar61) == sVar61);
      psVar3 = (short *)((unaff_RDI - in_R11) + -0x20 + (longlong)puVar1);
      uVar13 = *psVar2 + uVar14 & -uVar14;
      uVar15 = psVar2[1] + uVar18 & -uVar18;
      uVar17 = psVar2[2] + uVar22 & -uVar22;
      uVar19 = psVar2[3] + uVar26 & -uVar26;
      uVar21 = psVar2[4] + uVar21 & -uVar21;
      uVar23 = psVar2[5] + uVar23 & -uVar23;
      uVar25 = psVar2[6] + uVar25 & -uVar25;
      uVar27 = psVar2[7] + uVar27 & -uVar27;
      uVar14 = *psVar3 + uVar16 & -uVar16;
      uVar16 = psVar3[1] + uVar20 & -uVar20;
      uVar18 = psVar3[2] + uVar24 & -uVar24;
      uVar20 = psVar3[3] + uVar28 & -uVar28;
      uVar22 = psVar3[4] + uVar9 & -uVar9;
      uVar24 = psVar3[5] + uVar10 & -uVar10;
      uVar26 = psVar3[6] + uVar11 & -uVar11;
      uVar28 = psVar3[7] + uVar12 & -uVar12;
      uVar14 = ((short)uVar13 < (short)uVar14) * uVar14 | ((short)uVar13 >= (short)uVar14) * uVar13;
      uVar16 = ((short)uVar15 < (short)uVar16) * uVar16 | ((short)uVar15 >= (short)uVar16) * uVar15;
      uVar18 = ((short)uVar17 < (short)uVar18) * uVar18 | ((short)uVar17 >= (short)uVar18) * uVar17;
      uVar20 = ((short)uVar19 < (short)uVar20) * uVar20 | ((short)uVar19 >= (short)uVar20) * uVar19;
      uVar22 = ((short)uVar21 < (short)uVar22) * uVar22 | ((short)uVar21 >= (short)uVar22) * uVar21;
      uVar24 = ((short)uVar23 < (short)uVar24) * uVar24 | ((short)uVar23 >= (short)uVar24) * uVar23;
      uVar26 = ((short)uVar25 < (short)uVar26) * uVar26 | ((short)uVar25 >= (short)uVar26) * uVar25;
      uVar28 = ((short)uVar27 < (short)uVar28) * uVar28 | ((short)uVar27 >= (short)uVar28) * uVar27;
      sVar43 = auVar31._0_2_;
      auVar30._0_2_ = (sVar43 < (short)uVar14) * uVar14 | (ushort)(sVar43 >= (short)uVar14) * sVar43
      ;
      sVar43 = auVar31._2_2_;
      auVar30._2_2_ = (sVar43 < (short)uVar16) * uVar16 | (ushort)(sVar43 >= (short)uVar16) * sVar43
      ;
      sVar43 = auVar31._4_2_;
      auVar30._4_2_ = (sVar43 < (short)uVar18) * uVar18 | (ushort)(sVar43 >= (short)uVar18) * sVar43
      ;
      sVar43 = auVar31._6_2_;
      auVar30._6_2_ = (sVar43 < (short)uVar20) * uVar20 | (ushort)(sVar43 >= (short)uVar20) * sVar43
      ;
      sVar43 = auVar31._8_2_;
      auVar30._8_2_ = (sVar43 < (short)uVar22) * uVar22 | (ushort)(sVar43 >= (short)uVar22) * sVar43
      ;
      sVar43 = auVar31._10_2_;
      auVar30._10_2_ =
           (sVar43 < (short)uVar24) * uVar24 | (ushort)(sVar43 >= (short)uVar24) * sVar43;
      sVar43 = auVar31._12_2_;
      sVar47 = auVar31._14_2_;
      auVar30._12_2_ =
           (sVar43 < (short)uVar26) * uVar26 | (ushort)(sVar43 >= (short)uVar26) * sVar43;
      auVar30._14_2_ =
           (sVar47 < (short)uVar28) * uVar28 | (ushort)(sVar47 >= (short)uVar28) * sVar47;
      lVar6 = lVar6 + -1;
      puVar5 = puVar1;
      auVar31 = auVar30;
    } while (lVar6 != 0);
  }
  auVar8._0_8_ = auVar30._8_8_;
  auVar8._8_4_ = auVar30._0_4_;
  auVar8._12_4_ = auVar30._0_4_;
  sVar43 = auVar30._8_2_;
  sVar62 = auVar30._0_2_;
  auVar63._0_2_ = (ushort)(sVar62 < sVar43) * sVar43 | (ushort)(sVar62 >= sVar43) * sVar62;
  sVar47 = auVar30._10_2_;
  sVar65 = auVar30._2_2_;
  auVar63._2_2_ = (ushort)(sVar65 < sVar47) * sVar47 | (ushort)(sVar65 >= sVar47) * sVar65;
  sVar48 = auVar30._12_2_;
  sVar49 = auVar30._4_2_;
  auVar63._4_2_ = (ushort)(sVar49 < sVar48) * sVar48 | (ushort)(sVar49 >= sVar48) * sVar49;
  sVar49 = auVar30._14_2_;
  sVar66 = auVar30._6_2_;
  auVar63._6_2_ = (ushort)(sVar66 < sVar49) * sVar49 | (ushort)(sVar66 >= sVar49) * sVar66;
  auVar63._8_2_ = (ushort)(sVar43 < sVar62) * sVar62 | (ushort)(sVar43 >= sVar62) * sVar43;
  auVar63._10_2_ = (ushort)(sVar47 < sVar65) * sVar65 | (ushort)(sVar47 >= sVar65) * sVar47;
  auVar63._12_2_ = (ushort)(sVar48 < sVar62) * sVar62 | (ushort)(sVar48 >= sVar62) * sVar48;
  auVar63._14_2_ = (ushort)(sVar49 < sVar65) * sVar65 | (ushort)(sVar49 >= sVar65) * sVar49;
  auVar30 = pshuflw(auVar8,auVar63,0xe);
  sVar43 = auVar30._0_2_;
  auVar64._0_2_ =
       (ushort)((short)auVar63._0_2_ < sVar43) * sVar43 |
       ((short)auVar63._0_2_ >= sVar43) * auVar63._0_2_;
  sVar43 = auVar30._2_2_;
  auVar64._2_2_ =
       (ushort)((short)auVar63._2_2_ < sVar43) * sVar43 |
       ((short)auVar63._2_2_ >= sVar43) * auVar63._2_2_;
  sVar43 = auVar30._4_2_;
  auVar64._4_2_ =
       (ushort)((short)auVar63._4_2_ < sVar43) * sVar43 |
       ((short)auVar63._4_2_ >= sVar43) * auVar63._4_2_;
  sVar43 = auVar30._6_2_;
  auVar64._6_2_ =
       (ushort)((short)auVar63._6_2_ < sVar43) * sVar43 |
       ((short)auVar63._6_2_ >= sVar43) * auVar63._6_2_;
  sVar43 = auVar30._8_2_;
  auVar64._8_2_ =
       (ushort)((short)auVar63._8_2_ < sVar43) * sVar43 |
       ((short)auVar63._8_2_ >= sVar43) * auVar63._8_2_;
  sVar43 = auVar30._10_2_;
  auVar64._10_2_ =
       (ushort)((short)auVar63._10_2_ < sVar43) * sVar43 |
       ((short)auVar63._10_2_ >= sVar43) * auVar63._10_2_;
  sVar43 = auVar30._12_2_;
  auVar64._12_2_ =
       (ushort)((short)auVar63._12_2_ < sVar43) * sVar43 |
       ((short)auVar63._12_2_ >= sVar43) * auVar63._12_2_;
  sVar43 = auVar30._14_2_;
  auVar64._14_2_ =
       (ushort)((short)auVar63._14_2_ < sVar43) * sVar43 |
       ((short)auVar63._14_2_ >= sVar43) * auVar63._14_2_;
  auVar30 = pshuflw(auVar30,auVar64,1);
  sVar43 = auVar30._2_2_;
  *in_stack_000000e0 =
       (ushort)((short)auVar64._2_2_ < sVar43) * sVar43 |
       ((short)auVar64._2_2_ >= sVar43) * auVar64._2_2_;
  return;
}





// 函数: void FUN_180695f0f(uint64_t param_1,longlong param_2)
void FUN_180695f0f(uint64_t param_1,longlong param_2)

{
  int32_t *puVar1;
  int32_t *puVar2;
  longlong in_R10;
  longlong in_R11;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int16_t *in_stack_000000e0;
  
  puVar2 = (int32_t *)(in_R11 + (param_2 + 8) * 2);
  do {
    param_2 = param_2 + 0x10;
    puVar1 = (int32_t *)((longlong)puVar2 + (in_R10 - in_R11) + -0x10);
    *puVar1 = unaff_XMM7_Da;
    puVar1[1] = unaff_XMM7_Db;
    puVar1[2] = unaff_XMM7_Dc;
    puVar1[3] = unaff_XMM7_Dd;
    puVar1 = (int32_t *)((longlong)puVar2 + (in_R10 - in_R11));
    *puVar1 = unaff_XMM7_Da;
    puVar1[1] = unaff_XMM7_Db;
    puVar1[2] = unaff_XMM7_Dc;
    puVar1[3] = unaff_XMM7_Dd;
    puVar2[-4] = unaff_XMM7_Da;
    puVar2[-3] = unaff_XMM7_Db;
    puVar2[-2] = unaff_XMM7_Dc;
    puVar2[-1] = unaff_XMM7_Dd;
    *puVar2 = unaff_XMM7_Da;
    puVar2[1] = unaff_XMM7_Db;
    puVar2[2] = unaff_XMM7_Dc;
    puVar2[3] = unaff_XMM7_Dd;
    puVar2 = puVar2 + 8;
  } while (param_2 < 0);
  *in_stack_000000e0 = 0;
  return;
}





// 函数: void FUN_180695f70(void)
void FUN_180695f70(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806961a0(longlong param_1,int param_2,longlong param_3,int param_4,int *param_5)
void FUN_1806961a0(longlong param_1,int param_2,longlong param_3,int param_4,int *param_5)

{
  int iVar1;
  uint *puVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int8_t auVar14 [16];
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int8_t in_XMM2 [16];
  int8_t auVar23 [16];
  int8_t auVar24 [16];
  longlong lStackX_18;
  longlong lStack_48;
  
  iVar1 = _DAT_180bf00b0;
  lStack_48 = 3;
  lStackX_18 = param_3;
  do {
    iVar7 = 0;
    iVar15 = 0;
    iVar17 = 0;
    iVar19 = 0;
    iVar21 = 0;
    lVar13 = 0x10;
    lVar8 = param_1;
    lVar9 = lStackX_18;
    iVar16 = iVar15;
    iVar18 = iVar17;
    iVar20 = iVar19;
    iVar22 = iVar21;
    do {
      uVar10 = 0;
      if (1 < iVar1) {
        lVar6 = 2;
        uVar10 = 0x10;
        puVar2 = (uint *)(lVar9 + 4);
        do {
          auVar14 = ZEXT416(*(uint *)((lVar8 - lVar9) + -4 + (longlong)puVar2));
          auVar23 = pmovzxbd(in_XMM2,auVar14);
          auVar14 = pmovzxbd(auVar14,ZEXT416(puVar2[-1]));
          auVar24._0_4_ = auVar23._0_4_ - auVar14._0_4_;
          auVar24._4_4_ = auVar23._4_4_ - auVar14._4_4_;
          auVar24._8_4_ = auVar23._8_4_ - auVar14._8_4_;
          auVar24._12_4_ = auVar23._12_4_ - auVar14._12_4_;
          auVar14 = ZEXT416(*(uint *)((lVar8 - lVar9) + -8 + (longlong)(puVar2 + 2)));
          auVar23 = pabsd(ZEXT416(puVar2[-1]),auVar24);
          iVar15 = auVar23._0_4_ + iVar15;
          iVar17 = auVar23._4_4_ + iVar17;
          iVar19 = auVar23._8_4_ + iVar19;
          iVar21 = auVar23._12_4_ + iVar21;
          auVar23 = pmovzxbd(auVar24,auVar14);
          auVar14 = pmovzxbd(auVar14,ZEXT416(*puVar2));
          in_XMM2._0_4_ = auVar23._0_4_ - auVar14._0_4_;
          in_XMM2._4_4_ = auVar23._4_4_ - auVar14._4_4_;
          in_XMM2._8_4_ = auVar23._8_4_ - auVar14._8_4_;
          in_XMM2._12_4_ = auVar23._12_4_ - auVar14._12_4_;
          auVar14 = pabsd(ZEXT416(*puVar2),in_XMM2);
          iVar16 = auVar14._0_4_ + iVar16;
          iVar18 = auVar14._4_4_ + iVar18;
          iVar20 = auVar14._8_4_ + iVar20;
          iVar22 = auVar14._12_4_ + iVar22;
          lVar6 = lVar6 + -1;
          puVar2 = puVar2 + 2;
        } while (lVar6 != 0);
      }
      iVar11 = 0;
      iVar12 = 0;
      if (uVar10 < 0x10) {
        if (1 < (longlong)(0x10 - uVar10)) {
          pbVar3 = (byte *)(uVar10 + lVar9);
          lVar6 = (0xe - uVar10 >> 1) + 1;
          uVar10 = uVar10 + lVar6 * 2;
          do {
            uVar4 = (int)((uint)pbVar3[lVar8 - lVar9] - (uint)*pbVar3) >> 0x1f;
            iVar11 = iVar11 + (((uint)pbVar3[lVar8 - lVar9] - (uint)*pbVar3 ^ uVar4) - uVar4);
            uVar4 = (uint)(pbVar3 + 2)[(lVar8 - lVar9) + -1] - (uint)pbVar3[1];
            uVar5 = (int)uVar4 >> 0x1f;
            iVar12 = iVar12 + ((uVar4 ^ uVar5) - uVar5);
            lVar6 = lVar6 + -1;
            pbVar3 = pbVar3 + 2;
          } while (lVar6 != 0);
        }
        if ((longlong)uVar10 < 0x10) {
          uVar4 = (uint)*(byte *)(uVar10 + lVar8) - (uint)*(byte *)(uVar10 + lVar9);
          uVar5 = (int)uVar4 >> 0x1f;
          iVar7 = iVar7 + ((uVar4 ^ uVar5) - uVar5);
        }
        iVar7 = iVar7 + iVar12 + iVar11;
      }
      lVar8 = lVar8 + param_2;
      lVar9 = lVar9 + param_4;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    *param_5 = iVar16 + iVar15 + iVar20 + iVar19 + iVar18 + iVar17 + iVar22 + iVar21 + iVar7;
    param_5 = param_5 + 1;
    lStackX_18 = lStackX_18 + 1;
    lStack_48 = lStack_48 + -1;
  } while (lStack_48 != 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



