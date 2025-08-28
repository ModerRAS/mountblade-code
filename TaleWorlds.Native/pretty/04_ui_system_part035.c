#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part035.c - 12 个函数

// 函数: void FUN_180673850(longlong param_1,longlong *param_2)
void FUN_180673850(longlong param_1,longlong *param_2)

{
  short *psVar1;
  short *psVar2;
  longlong lVar3;
  int iVar4;
  ushort uVar5;
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
  char cVar22;
  short sVar23;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  int8_t auVar24 [16];
  int8_t auVar25 [16];
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  int8_t auVar41 [16];
  int8_t auVar42 [16];
  int8_t auVar43 [16];
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)&uStack_48;
  uStack_48 = 0x8040100;
  uStack_44 = 0x6030205;
  uStack_40 = 0xa0d0c09;
  auVar25 = (*(int8_t (**) [16])(param_1 + 8))[1];
  auVar41 = **(int8_t (**) [16])(param_1 + 8);
  psVar1 = (short *)param_2[3];
  auVar24 = pabsw(auVar41,auVar41);
  auVar41 = psraw(auVar41,0xf);
  auVar42 = psraw(auVar25,0xf);
  uStack_3c = 0xf0e0b07;
  sVar6 = *psVar1;
  sVar7 = psVar1[1];
  sVar8 = psVar1[2];
  sVar9 = psVar1[3];
  sVar10 = psVar1[4];
  sVar11 = psVar1[5];
  sVar12 = psVar1[6];
  sVar13 = psVar1[7];
  sVar14 = psVar1[8];
  sVar15 = psVar1[9];
  sVar16 = psVar1[10];
  sVar17 = psVar1[0xb];
  sVar18 = psVar1[0xc];
  sVar19 = psVar1[0xd];
  sVar20 = psVar1[0xe];
  sVar21 = psVar1[0xf];
  psVar1 = *(short **)(param_1 + 0x38);
  auVar43._0_2_ = *psVar1 + auVar24._0_2_;
  auVar43._2_2_ = psVar1[1] + auVar24._2_2_;
  auVar43._4_2_ = psVar1[2] + auVar24._4_2_;
  auVar43._6_2_ = psVar1[3] + auVar24._6_2_;
  auVar43._8_2_ = psVar1[4] + auVar24._8_2_;
  auVar43._10_2_ = psVar1[5] + auVar24._10_2_;
  auVar43._12_2_ = psVar1[6] + auVar24._12_2_;
  auVar43._14_2_ = psVar1[7] + auVar24._14_2_;
  auVar43 = pmulhw(auVar43,**(int8_t (**) [16])(param_1 + 0x18));
  auVar25 = pabsw(auVar24,auVar25);
  psVar2 = (short *)*param_2;
  auVar24._0_2_ = psVar1[8] + auVar25._0_2_;
  auVar24._2_2_ = psVar1[9] + auVar25._2_2_;
  auVar24._4_2_ = psVar1[10] + auVar25._4_2_;
  auVar24._6_2_ = psVar1[0xb] + auVar25._6_2_;
  auVar24._8_2_ = psVar1[0xc] + auVar25._8_2_;
  auVar24._10_2_ = psVar1[0xd] + auVar25._10_2_;
  auVar24._12_2_ = psVar1[0xe] + auVar25._12_2_;
  auVar24._14_2_ = psVar1[0xf] + auVar25._14_2_;
  auVar24 = pmulhw(auVar24,(*(int8_t (**) [16])(param_1 + 0x18))[1]);
  auVar25 = auVar43 ^ auVar41;
  sVar33 = auVar25._0_2_ - auVar41._0_2_;
  sVar34 = auVar25._2_2_ - auVar41._2_2_;
  sVar35 = auVar25._4_2_ - auVar41._4_2_;
  sVar36 = auVar25._6_2_ - auVar41._6_2_;
  sVar37 = auVar25._8_2_ - auVar41._8_2_;
  sVar38 = auVar25._10_2_ - auVar41._10_2_;
  sVar39 = auVar25._12_2_ - auVar41._12_2_;
  sVar40 = auVar25._14_2_ - auVar41._14_2_;
  *psVar2 = sVar33;
  psVar2[1] = sVar34;
  psVar2[2] = sVar35;
  psVar2[3] = sVar36;
  psVar2[4] = sVar37;
  psVar2[5] = sVar38;
  psVar2[6] = sVar39;
  psVar2[7] = sVar40;
  auVar25 = auVar24 ^ auVar42;
  lVar3 = *param_2;
  sVar23 = auVar25._0_2_ - auVar42._0_2_;
  sVar26 = auVar25._2_2_ - auVar42._2_2_;
  sVar27 = auVar25._4_2_ - auVar42._4_2_;
  sVar28 = auVar25._6_2_ - auVar42._6_2_;
  sVar29 = auVar25._8_2_ - auVar42._8_2_;
  sVar30 = auVar25._10_2_ - auVar42._10_2_;
  sVar31 = auVar25._12_2_ - auVar42._12_2_;
  sVar32 = auVar25._14_2_ - auVar42._14_2_;
  *(short *)(lVar3 + 0x10) = sVar23;
  *(short *)(lVar3 + 0x12) = sVar26;
  *(short *)(lVar3 + 0x14) = sVar27;
  *(short *)(lVar3 + 0x16) = sVar28;
  *(short *)(lVar3 + 0x18) = sVar29;
  *(short *)(lVar3 + 0x1a) = sVar30;
  *(short *)(lVar3 + 0x1c) = sVar31;
  *(short *)(lVar3 + 0x1e) = sVar32;
  psVar1 = (short *)param_2[1];
  *psVar1 = sVar33 * sVar6;
  psVar1[1] = sVar34 * sVar7;
  psVar1[2] = sVar35 * sVar8;
  psVar1[3] = sVar36 * sVar9;
  psVar1[4] = sVar37 * sVar10;
  psVar1[5] = sVar38 * sVar11;
  psVar1[6] = sVar39 * sVar12;
  psVar1[7] = sVar40 * sVar13;
  lVar3 = param_2[1];
  *(short *)(lVar3 + 0x10) = sVar23 * sVar14;
  *(short *)(lVar3 + 0x12) = sVar26 * sVar15;
  *(short *)(lVar3 + 0x14) = sVar27 * sVar16;
  *(short *)(lVar3 + 0x16) = sVar28 * sVar17;
  *(short *)(lVar3 + 0x18) = sVar29 * sVar18;
  *(short *)(lVar3 + 0x1a) = sVar30 * sVar19;
  *(short *)(lVar3 + 0x1c) = sVar31 * sVar20;
  *(short *)(lVar3 + 0x1e) = sVar32 * sVar21;
  auVar42._0_2_ = -(ushort)(0 < auVar43._0_2_);
  auVar42._2_2_ = -(ushort)(0 < auVar43._2_2_);
  auVar42._4_2_ = -(ushort)(0 < auVar43._4_2_);
  auVar42._6_2_ = -(ushort)(0 < auVar43._6_2_);
  auVar42._8_2_ = -(ushort)(0 < auVar43._8_2_);
  auVar42._10_2_ = -(ushort)(0 < auVar43._10_2_);
  auVar42._12_2_ = -(ushort)(0 < auVar43._12_2_);
  auVar42._14_2_ = -(ushort)(0 < auVar43._14_2_);
  auVar41._0_2_ = -(ushort)(0 < auVar24._0_2_);
  auVar41._2_2_ = -(ushort)(0 < auVar24._2_2_);
  auVar41._4_2_ = -(ushort)(0 < auVar24._4_2_);
  auVar41._6_2_ = -(ushort)(0 < auVar24._6_2_);
  auVar41._8_2_ = -(ushort)(0 < auVar24._8_2_);
  auVar41._10_2_ = -(ushort)(0 < auVar24._10_2_);
  auVar41._12_2_ = -(ushort)(0 < auVar24._12_2_);
  auVar41._14_2_ = -(ushort)(0 < auVar24._14_2_);
  auVar41 = packsswb(auVar42,auVar41);
  auVar25._8_4_ = 0xa0d0c09;
  auVar25._0_8_ = 0x603020508040100;
  auVar25._12_4_ = 0xf0e0b07;
  auVar25 = pshufb(auVar41,auVar25);
  uVar5 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar25[0xf] >> 7) << 0xf;
  iVar4 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
    }
  }
  cVar22 = (char)iVar4 + '\x01';
  if (uVar5 == 0) {
    cVar22 = '\0';
  }
  *(char *)param_2[5] = cVar22;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)&uStack_48);
}





// 函数: void FUN_180673970(longlong param_1,longlong *param_2)
void FUN_180673970(longlong param_1,longlong *param_2)

{
  short *psVar1;
  short *psVar2;
  longlong lVar3;
  bool bVar4;
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
  short *psVar21;
  short *psVar22;
  int8_t uVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  int8_t auVar32 [16];
  short sVar33;
  short sVar34;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  int8_t auVar35 [16];
  short sVar49;
  int8_t auVar36 [16];
  short sVar50;
  short sVar51;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  int8_t auVar52 [16];
  short sVar59;
  short sVar60;
  short sVar61;
  short sVar62;
  short sVar63;
  int8_t in_XMM5 [16];
  int8_t auVar64 [16];
  int8_t auVar65 [16];
  
  psVar1 = *(short **)(param_1 + 0x30);
  auVar52 = **(int8_t (**) [16])(param_1 + 8);
  auVar35 = (*(int8_t (**) [16])(param_1 + 8))[1];
  psVar2 = (short *)param_2[3];
  auVar64 = psraw(auVar52,0xf);
  auVar65 = psraw(auVar35,0xf);
  auVar52 = auVar64 ^ auVar52;
  sVar5 = *psVar2;
  sVar6 = psVar2[1];
  sVar7 = psVar2[2];
  sVar8 = psVar2[3];
  sVar9 = psVar2[4];
  sVar10 = psVar2[5];
  sVar11 = psVar2[6];
  sVar12 = psVar2[7];
  sVar51 = auVar52._0_2_ - auVar64._0_2_;
  sVar53 = auVar52._2_2_ - auVar64._2_2_;
  sVar54 = auVar52._4_2_ - auVar64._4_2_;
  sVar55 = auVar52._6_2_ - auVar64._6_2_;
  sVar56 = auVar52._8_2_ - auVar64._8_2_;
  sVar57 = auVar52._10_2_ - auVar64._10_2_;
  sVar58 = auVar52._12_2_ - auVar64._12_2_;
  sVar59 = auVar52._14_2_ - auVar64._14_2_;
  sVar13 = psVar2[8];
  sVar14 = psVar2[9];
  sVar15 = psVar2[10];
  sVar16 = psVar2[0xb];
  sVar17 = psVar2[0xc];
  sVar18 = psVar2[0xd];
  sVar19 = psVar2[0xe];
  sVar20 = psVar2[0xf];
  auVar35 = auVar65 ^ auVar35;
  sVar33 = auVar35._0_2_ - auVar65._0_2_;
  sVar37 = auVar35._2_2_ - auVar65._2_2_;
  sVar39 = auVar35._4_2_ - auVar65._4_2_;
  sVar41 = auVar35._6_2_ - auVar65._6_2_;
  sVar43 = auVar35._8_2_ - auVar65._8_2_;
  sVar45 = auVar35._10_2_ - auVar65._10_2_;
  sVar47 = auVar35._12_2_ - auVar65._12_2_;
  sVar49 = auVar35._14_2_ - auVar65._14_2_;
  psVar2 = *(short **)(param_1 + 0x28);
  auVar52 = pshuflw(in_XMM5,ZEXT416((uint)(int)*(short *)(param_1 + 0x40)),0);
  sVar63 = auVar52._6_2_;
  sVar62 = auVar52._4_2_;
  sVar61 = auVar52._2_2_;
  sVar60 = auVar52._0_2_;
  psVar22 = *(short **)(param_1 + 0x38);
  auVar52._0_2_ = *psVar22 + sVar51;
  auVar52._2_2_ = psVar22[1] + sVar53;
  auVar52._4_2_ = psVar22[2] + sVar54;
  auVar52._6_2_ = psVar22[3] + sVar55;
  auVar52._8_2_ = psVar22[4] + sVar56;
  auVar52._10_2_ = psVar22[5] + sVar57;
  auVar52._12_2_ = psVar22[6] + sVar58;
  auVar52._14_2_ = psVar22[7] + sVar59;
  auVar32._0_2_ = psVar22[8] + sVar33;
  auVar32._2_2_ = psVar22[9] + sVar37;
  auVar32._4_2_ = psVar22[10] + sVar39;
  auVar32._6_2_ = psVar22[0xb] + sVar41;
  auVar32._8_2_ = psVar22[0xc] + sVar43;
  auVar32._10_2_ = psVar22[0xd] + sVar45;
  auVar32._12_2_ = psVar22[0xe] + sVar47;
  auVar32._14_2_ = psVar22[0xf] + sVar49;
  auVar35 = pmulhw(**(int8_t (**) [16])(param_1 + 0x10),auVar52);
  auVar36._0_2_ = auVar35._0_2_ + auVar52._0_2_;
  auVar36._2_2_ = auVar35._2_2_ + auVar52._2_2_;
  auVar36._4_2_ = auVar35._4_2_ + auVar52._4_2_;
  auVar36._6_2_ = auVar35._6_2_ + auVar52._6_2_;
  auVar36._8_2_ = auVar35._8_2_ + auVar52._8_2_;
  auVar36._10_2_ = auVar35._10_2_ + auVar52._10_2_;
  auVar36._12_2_ = auVar35._12_2_ + auVar52._12_2_;
  auVar36._14_2_ = auVar35._14_2_ + auVar52._14_2_;
  auVar36 = pmulhw(auVar36,**(int8_t (**) [16])(param_1 + 0x20));
  auVar52 = pmulhw((*(int8_t (**) [16])(param_1 + 0x10))[1],auVar32);
  auVar36 = auVar36 ^ auVar64;
  auVar35._0_2_ = auVar52._0_2_ + auVar32._0_2_;
  auVar35._2_2_ = auVar52._2_2_ + auVar32._2_2_;
  auVar35._4_2_ = auVar52._4_2_ + auVar32._4_2_;
  auVar35._6_2_ = auVar52._6_2_ + auVar32._6_2_;
  auVar35._8_2_ = auVar52._8_2_ + auVar32._8_2_;
  auVar35._10_2_ = auVar52._10_2_ + auVar32._10_2_;
  auVar35._12_2_ = auVar52._12_2_ + auVar32._12_2_;
  auVar35._14_2_ = auVar52._14_2_ + auVar32._14_2_;
  auVar52 = pmulhw(auVar35,(*(int8_t (**) [16])(param_1 + 0x20))[1]);
  sVar34 = auVar36._0_2_ - auVar64._0_2_;
  sVar38 = auVar36._2_2_ - auVar64._2_2_;
  sVar40 = auVar36._4_2_ - auVar64._4_2_;
  sVar42 = auVar36._6_2_ - auVar64._6_2_;
  sVar44 = auVar36._8_2_ - auVar64._8_2_;
  sVar46 = auVar36._10_2_ - auVar64._10_2_;
  sVar48 = auVar36._12_2_ - auVar64._12_2_;
  sVar50 = auVar36._14_2_ - auVar64._14_2_;
  bVar4 = *psVar1 <= (short)(sVar51 - (*psVar2 + sVar60));
  auVar52 = auVar52 ^ auVar65;
  sVar24 = auVar52._0_2_ - auVar65._0_2_;
  sVar25 = auVar52._2_2_ - auVar65._2_2_;
  sVar26 = auVar52._4_2_ - auVar65._4_2_;
  sVar27 = auVar52._6_2_ - auVar65._6_2_;
  sVar28 = auVar52._8_2_ - auVar65._8_2_;
  sVar29 = auVar52._10_2_ - auVar65._10_2_;
  sVar30 = auVar52._12_2_ - auVar65._12_2_;
  sVar31 = auVar52._14_2_ - auVar65._14_2_;
  psVar22 = psVar1 + 1;
  sVar51 = 0;
  if (bVar4 && sVar34 != 0) {
    psVar22 = psVar1;
    sVar51 = sVar34;
  }
  uVar23 = bVar4 && sVar34 != 0;
  psVar21 = psVar22 + 1;
  sVar34 = 0;
  if (*psVar22 <= (short)(sVar53 - (psVar2[1] + sVar60)) && sVar38 != 0) {
    uVar23 = 2;
    psVar21 = psVar1;
    sVar34 = sVar38;
  }
  psVar22 = psVar21 + 1;
  sVar38 = 0;
  if (*psVar21 <= (short)(sVar56 - (psVar2[4] + sVar62)) && sVar44 != 0) {
    uVar23 = 3;
    psVar22 = psVar1;
    sVar38 = sVar44;
  }
  psVar21 = psVar22 + 1;
  sVar44 = 0;
  if (*psVar22 <= (short)(sVar33 - (psVar2[8] + sVar60)) && sVar24 != 0) {
    uVar23 = 4;
    psVar21 = psVar1;
    sVar44 = sVar24;
  }
  psVar22 = psVar21 + 1;
  sVar24 = 0;
  if (*psVar21 <= (short)(sVar57 - (psVar2[5] + sVar62)) && sVar46 != 0) {
    uVar23 = 5;
    psVar22 = psVar1;
    sVar24 = sVar46;
  }
  psVar21 = psVar22 + 1;
  sVar33 = 0;
  if (*psVar22 <= (short)(sVar54 - (psVar2[2] + sVar61)) && sVar40 != 0) {
    uVar23 = 6;
    psVar21 = psVar1;
    sVar33 = sVar40;
  }
  psVar22 = psVar21 + 1;
  sVar40 = 0;
  if (*psVar21 <= (short)(sVar55 - (psVar2[3] + sVar61)) && sVar42 != 0) {
    uVar23 = 7;
    psVar22 = psVar1;
    sVar40 = sVar42;
  }
  psVar21 = psVar22 + 1;
  sVar42 = 0;
  if (*psVar22 <= (short)(sVar58 - (psVar2[6] + sVar63)) && sVar48 != 0) {
    uVar23 = 8;
    psVar21 = psVar1;
    sVar42 = sVar48;
  }
  psVar22 = psVar21 + 1;
  sVar46 = 0;
  if (*psVar21 <= (short)(sVar37 - (psVar2[9] + sVar60)) && sVar25 != 0) {
    uVar23 = 9;
    psVar22 = psVar1;
    sVar46 = sVar25;
  }
  psVar21 = psVar22 + 1;
  sVar25 = 0;
  if (*psVar22 <= (short)(sVar43 - (psVar2[0xc] + sVar62)) && sVar28 != 0) {
    uVar23 = 10;
    psVar21 = psVar1;
    sVar25 = sVar28;
  }
  psVar22 = psVar21 + 1;
  sVar28 = 0;
  if (*psVar21 <= (short)(sVar45 - (psVar2[0xd] + sVar62)) && sVar29 != 0) {
    uVar23 = 0xb;
    psVar22 = psVar1;
    sVar28 = sVar29;
  }
  psVar21 = psVar22 + 1;
  sVar29 = 0;
  if (*psVar22 <= (short)(sVar39 - (psVar2[10] + sVar61)) && sVar26 != 0) {
    uVar23 = 0xc;
    psVar21 = psVar1;
    sVar29 = sVar26;
  }
  psVar22 = psVar21 + 1;
  sVar26 = 0;
  if (*psVar21 <= (short)(sVar59 - (psVar2[7] + sVar63)) && sVar50 != 0) {
    uVar23 = 0xd;
    psVar22 = psVar1;
    sVar26 = sVar50;
  }
  psVar21 = psVar22 + 1;
  sVar37 = 0;
  if (*psVar22 <= (short)(sVar41 - (psVar2[0xb] + sVar61)) && sVar27 != 0) {
    uVar23 = 0xe;
    psVar21 = psVar1;
    sVar37 = sVar27;
  }
  psVar22 = psVar21 + 1;
  sVar27 = 0;
  if (*psVar21 <= (short)(sVar47 - (psVar2[0xe] + sVar63)) && sVar30 != 0) {
    uVar23 = 0xf;
    psVar22 = psVar1;
    sVar27 = sVar30;
  }
  sVar30 = 0;
  if (*psVar22 <= (short)(sVar49 - (psVar2[0xf] + sVar63)) && sVar31 != 0) {
    uVar23 = 0x10;
    sVar30 = sVar31;
  }
  psVar1 = (short *)*param_2;
  *psVar1 = sVar51;
  psVar1[1] = sVar34;
  psVar1[2] = sVar33;
  psVar1[3] = sVar40;
  psVar1[4] = sVar38;
  psVar1[5] = sVar24;
  psVar1[6] = sVar42;
  psVar1[7] = sVar26;
  lVar3 = *param_2;
  *(short *)(lVar3 + 0x10) = sVar44;
  *(short *)(lVar3 + 0x12) = sVar46;
  *(short *)(lVar3 + 0x14) = sVar29;
  *(short *)(lVar3 + 0x16) = sVar37;
  *(short *)(lVar3 + 0x18) = sVar25;
  *(short *)(lVar3 + 0x1a) = sVar28;
  *(short *)(lVar3 + 0x1c) = sVar27;
  *(short *)(lVar3 + 0x1e) = sVar30;
  psVar1 = (short *)param_2[1];
  *psVar1 = sVar51 * sVar5;
  psVar1[1] = sVar34 * sVar6;
  psVar1[2] = sVar33 * sVar7;
  psVar1[3] = sVar40 * sVar8;
  psVar1[4] = sVar38 * sVar9;
  psVar1[5] = sVar24 * sVar10;
  psVar1[6] = sVar42 * sVar11;
  psVar1[7] = sVar26 * sVar12;
  lVar3 = param_2[1];
  *(short *)(lVar3 + 0x10) = sVar44 * sVar13;
  *(short *)(lVar3 + 0x12) = sVar46 * sVar14;
  *(short *)(lVar3 + 0x14) = sVar29 * sVar15;
  *(short *)(lVar3 + 0x16) = sVar37 * sVar16;
  *(short *)(lVar3 + 0x18) = sVar25 * sVar17;
  *(short *)(lVar3 + 0x1a) = sVar28 * sVar18;
  *(short *)(lVar3 + 0x1c) = sVar27 * sVar19;
  *(short *)(lVar3 + 0x1e) = sVar30 * sVar20;
  *(int8_t *)param_2[5] = uVar23;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180673e10(longlong param_1,int param_2,int param_3,int param_4,uint64_t param_5,
void FUN_180673e10(longlong param_1,int param_2,int param_3,int param_4,uint64_t param_5,
                  int32_t param_6)

{
  int8_t auStack_4e8 [32];
  int32_t uStack_4c8;
  void *puStack_4c0;
  void *puStack_4b8;
  void *puStack_4b0;
  int8_t auStack_4a8 [64];
  int8_t auStack_468 [1088];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_4e8;
  if (param_3 == 0) {
    uStack_4c8 = 0x20;
    func_0x00018000186c(param_1 - param_2 * 2,auStack_4a8,param_2,0x15);
  }
  else {
    if (param_4 == 0) {
      uStack_4c8 = 0x10;
      puStack_4c0 = &UNK_180d9e670 + (longlong)param_3 * 0x60;
      func_0x0001800015e7(param_1,param_2,param_5,param_6);
      goto LAB_180673f27;
    }
    puStack_4c0 = (void *)CONCAT44(puStack_4c0._4_4_,0x20);
    uStack_4c8 = 0x15;
    puStack_4b8 = &UNK_180d9e670 + (longlong)param_3 * 0x60;
    func_0x00018000113a(param_1 - param_2 * 2,auStack_4a8,param_2,1);
  }
  puStack_4b0 = &UNK_180d9e670 + (longlong)param_4 * 0x60;
  puStack_4b8 = (void *)CONCAT44(puStack_4b8._4_4_,param_6);
  puStack_4c0 = (void *)CONCAT44(puStack_4c0._4_4_,0x10);
  uStack_4c8 = 0x10;
  func_0x0001800013b1(auStack_468,param_5,param_6,0x20);
LAB_180673f27:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_4e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180673f50(longlong param_1,uint64_t param_2,int param_3,int param_4,uint64_t param_5,
void FUN_180673f50(longlong param_1,uint64_t param_2,int param_3,int param_4,uint64_t param_5,
                  int32_t param_6)

{
  int8_t auStack_298 [32];
  int32_t uStack_278;
  int iStack_270;
  int8_t auStack_268 [576];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_298;
  if (param_3 == 0) {
    if (param_4 == 0) {
      func_0x00018001cb80(param_1,param_2,param_5,param_6);
    }
    else {
      uStack_278 = 0x10;
      iStack_270 = param_4;
      func_0x00018000214a(param_1 - (int)param_2 * 2);
    }
  }
  else {
    iStack_270 = param_3;
    if (param_4 == 0) {
      uStack_278 = 0x10;
      func_0x000180001ea9(param_1,param_2,param_5,param_6);
    }
    else {
      uStack_278 = 0x15;
      func_0x000180001ea9(param_1 - (int)param_2 * 2,param_2,auStack_268,0x10);
      uStack_278 = 0x10;
      iStack_270 = param_4;
      func_0x00018000214a(auStack_268,0x10,param_5,param_6);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_298);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180674040(longlong param_1,int param_2,int param_3,int param_4,uint64_t param_5,
void FUN_180674040(longlong param_1,int param_2,int param_3,int param_4,uint64_t param_5,
                  int32_t param_6)

{
  int8_t auStack_268 [32];
  int32_t uStack_248;
  int32_t uStack_240;
  void *puStack_238;
  void *puStack_230;
  int8_t auStack_228 [16];
  int8_t auStack_218 [496];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_268;
  puStack_238 = &UNK_180d9e670 + (longlong)param_3 * 0x60;
  uStack_240 = 8;
  uStack_248 = 9;
  func_0x00018001c6d0(param_1 - param_2 * 2,auStack_228,param_2,1);
  puStack_230 = &UNK_180d9e670 + (longlong)param_4 * 0x60;
  puStack_238 = (void *)CONCAT44(puStack_238._4_4_,4);
  uStack_240 = 4;
  uStack_248 = 4;
  func_0x00018001c78b(auStack_218,param_5,param_6,8);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_268);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180674120(int8_t *param_1,int param_2,int param_3,int param_4,int8_t *param_5,
void FUN_180674120(int8_t *param_1,int param_2,int param_3,int param_4,int8_t *param_5,
                  int param_6)

{
  longlong lVar1;
  int8_t *puVar2;
  int8_t *puVar3;
  int8_t auStack_88 [32];
  int32_t uStack_68;
  int iStack_60;
  int8_t auStack_58 [48];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_88;
  lVar1 = (longlong)param_6;
  if (param_3 == 0) {
    if (param_4 == 0) {
      puVar2 = param_1 + param_2;
      *param_5 = *param_1;
      param_5[1] = param_1[1];
      param_5[2] = param_1[2];
      param_5[3] = param_1[3];
      param_5 = param_5 + lVar1;
      *param_5 = *puVar2;
      param_5[1] = puVar2[1];
      param_5[2] = puVar2[2];
      puVar3 = puVar2 + param_2;
      param_5[3] = puVar2[3];
      param_5 = param_5 + lVar1;
      *param_5 = *puVar3;
      param_5[1] = puVar3[1];
      param_5[2] = puVar3[2];
      param_5[3] = puVar3[3];
      param_5 = param_5 + lVar1;
      puVar3 = puVar3 + param_2;
      *param_5 = *puVar3;
      param_5[1] = puVar3[1];
      param_5[2] = puVar3[2];
      param_5[3] = puVar3[3];
    }
    else {
      uStack_68 = 4;
      iStack_60 = param_4;
      func_0x0001800024d9((longlong)param_1 - (longlong)(param_2 * 2),param_2,param_5,param_6);
    }
  }
  else {
    iStack_60 = param_3;
    if (param_4 == 0) {
      uStack_68 = 4;
      func_0x000180001fda(param_1,param_2,param_5,param_6);
    }
    else {
      uStack_68 = 9;
      func_0x000180001fda((longlong)param_1 - (longlong)(param_2 * 2),param_2,auStack_58,4);
      uStack_68 = 4;
      iStack_60 = param_4;
      func_0x0001800024d9(auStack_58,4,param_5,param_6);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_88);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806742a0(longlong param_1,int param_2,int param_3,int param_4,uint64_t param_5,
void FUN_1806742a0(longlong param_1,int param_2,int param_3,int param_4,uint64_t param_5,
                  int32_t param_6)

{
  int8_t auStack_268 [32];
  int32_t uStack_248;
  void *puStack_240;
  void *puStack_238;
  void *puStack_230;
  int8_t auStack_228 [32];
  int8_t auStack_208 [480];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_268;
  if (param_3 == 0) {
    puStack_240 = &UNK_180d9e670 + (longlong)param_4 * 0x60;
    uStack_248 = 4;
    func_0x000180001787(param_1 - param_2 * 2,param_2,param_5,param_6);
  }
  else if (param_4 == 0) {
    uStack_248 = 4;
    puStack_240 = &UNK_180d9e670 + (longlong)param_3 * 0x60;
    func_0x0001800014e1(param_1,param_2,param_5,param_6);
  }
  else {
    puStack_240._0_4_ = 0x10;
    uStack_248 = 9;
    puStack_238 = &UNK_180d9e670 + (longlong)param_3 * 0x60;
    func_0x000180001030(param_1 - param_2 * 2,auStack_228,param_2,1);
    puStack_230 = &UNK_180d9e670 + (longlong)param_4 * 0x60;
    puStack_238 = (void *)CONCAT44(puStack_238._4_4_,param_6);
    puStack_240 = (void *)CONCAT44(puStack_240._4_4_,4);
    uStack_248 = 8;
    func_0x0001800012e2(auStack_208,param_5,param_6,0x10);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_268);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806743e0(longlong param_1,uint64_t param_2,int param_3,int param_4,uint64_t param_5,
void FUN_1806743e0(longlong param_1,uint64_t param_2,int param_3,int param_4,uint64_t param_5,
                  int32_t param_6)

{
  int8_t auStack_158 [32];
  int32_t uStack_138;
  int iStack_130;
  int8_t auStack_128 [256];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  if (param_3 == 0) {
    if (param_4 == 0) {
      func_0x00018001cd0f(param_1,param_2,param_5,param_6);
    }
    else {
      uStack_138 = 4;
      iStack_130 = param_4;
      func_0x00018000236b(param_1 - (int)param_2 * 2);
    }
  }
  else {
    iStack_130 = param_3;
    if (param_4 == 0) {
      uStack_138 = 4;
      func_0x000180001d30(param_1,param_2,param_5,param_6);
    }
    else {
      uStack_138 = 9;
      func_0x000180001d30(param_1 - (int)param_2 * 2,param_2,auStack_128,8);
      uStack_138 = 4;
      iStack_130 = param_4;
      func_0x00018000236b(auStack_128,8,param_5,param_6);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806744d0(longlong param_1,int param_2,int param_3,int param_4,uint64_t param_5,
void FUN_1806744d0(longlong param_1,int param_2,int param_3,int param_4,uint64_t param_5,
                  int32_t param_6)

{
  int8_t auStack_268 [32];
  int32_t uStack_248;
  void *puStack_240;
  void *puStack_238;
  void *puStack_230;
  int8_t auStack_228 [32];
  int8_t auStack_208 [480];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_268;
  if (param_3 == 0) {
    puStack_240 = &UNK_180d9e670 + (longlong)param_4 * 0x60;
    uStack_248 = 8;
    func_0x000180001787(param_1 - param_2 * 2,param_2,param_5,param_6);
  }
  else if (param_4 == 0) {
    uStack_248 = 8;
    puStack_240 = &UNK_180d9e670 + (longlong)param_3 * 0x60;
    func_0x0001800014e1(param_1,param_2,param_5,param_6);
  }
  else {
    puStack_240._0_4_ = 0x10;
    uStack_248 = 0xd;
    puStack_238 = &UNK_180d9e670 + (longlong)param_3 * 0x60;
    func_0x000180001030(param_1 - param_2 * 2,auStack_228,param_2,1);
    puStack_230 = &UNK_180d9e670 + (longlong)param_4 * 0x60;
    puStack_238 = (void *)CONCAT44(puStack_238._4_4_,param_6);
    puStack_240 = (void *)CONCAT44(puStack_240._4_4_,8);
    uStack_248 = 8;
    func_0x0001800012e2(auStack_208,param_5,param_6,0x10);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_268);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180674610(longlong param_1,uint64_t param_2,int param_3,int param_4,uint64_t param_5,
void FUN_180674610(longlong param_1,uint64_t param_2,int param_3,int param_4,uint64_t param_5,
                  int32_t param_6)

{
  int8_t auStack_158 [32];
  int32_t uStack_138;
  int iStack_130;
  int8_t auStack_128 [256];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  if (param_3 == 0) {
    if (param_4 == 0) {
      func_0x00018001cc90(param_1,param_2,param_5,param_6);
    }
    else {
      uStack_138 = 8;
      iStack_130 = param_4;
      func_0x00018000236b(param_1 - (int)param_2 * 2);
    }
  }
  else {
    iStack_130 = param_3;
    if (param_4 == 0) {
      uStack_138 = 8;
      func_0x000180001d30(param_1,param_2,param_5,param_6);
    }
    else {
      uStack_138 = 0xd;
      func_0x000180001d30(param_1 - (int)param_2 * 2,param_2,auStack_128,8);
      uStack_138 = 8;
      iStack_130 = param_4;
      func_0x00018000236b(auStack_128,8,param_5,param_6);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_158);
}





// 函数: void FUN_180674700(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
void FUN_180674700(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
                  short *param_5)

{
  ulonglong uVar1;
  uint in_stack_00000048;
  int32_t in_stack_00000050;
  
  if (((*param_5 == 0) && (param_5[1] == 0)) && (param_5[2] == 0)) {
    if (0xf < (int)in_stack_00000048) {
      uVar1 = (ulonglong)(in_stack_00000048 >> 4);
      in_stack_00000048 = in_stack_00000048 + (in_stack_00000048 >> 4) * -0x10;
      do {
        func_0x00018001f1ba(param_1,param_2,param_3,param_4,in_stack_00000050,param_5);
        param_1 = param_1 + 0x10;
        param_3 = param_3 + 0x10;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (7 < (int)in_stack_00000048) {
      uVar1 = (ulonglong)(in_stack_00000048 >> 3);
      in_stack_00000048 = in_stack_00000048 + (in_stack_00000048 >> 3) * -8;
      do {
        func_0x00018001f0f5(param_1,param_2,param_3,param_4,in_stack_00000050,param_5);
        param_1 = param_1 + 8;
        param_3 = param_3 + 8;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (3 < (int)in_stack_00000048) {
      param_1 = param_1 - param_3;
      uVar1 = (ulonglong)(in_stack_00000048 >> 2);
      do {
        func_0x00018001f048(param_1 + param_3,param_2,param_3,param_4,in_stack_00000050,param_5);
        param_3 = param_3 + 4;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  else {
    if (0xf < (int)in_stack_00000048) {
      uVar1 = (ulonglong)(in_stack_00000048 >> 4);
      in_stack_00000048 = in_stack_00000048 + (in_stack_00000048 >> 4) * -0x10;
      do {
        func_0x00018001e66c(param_1,param_2,param_3,param_4,in_stack_00000050,param_5);
        param_1 = param_1 + 0x10;
        param_3 = param_3 + 0x10;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (7 < (int)in_stack_00000048) {
      uVar1 = (ulonglong)(in_stack_00000048 >> 3);
      in_stack_00000048 = in_stack_00000048 + (in_stack_00000048 >> 3) * -8;
      do {
        func_0x00018001e455(param_1,param_2,param_3,param_4,in_stack_00000050,param_5);
        param_1 = param_1 + 8;
        param_3 = param_3 + 8;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (3 < (int)in_stack_00000048) {
      uVar1 = (ulonglong)(in_stack_00000048 >> 2);
      do {
        func_0x00018001e299(param_1,param_2,param_3,param_4,in_stack_00000050,param_5);
        param_1 = param_1 + 4;
        param_3 = param_3 + 4;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  return;
}





// 函数: void FUN_180674930(void)
void FUN_180674930(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





