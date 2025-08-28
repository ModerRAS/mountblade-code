#include "TaleWorlds.Native.Split.h"

// 99_part_11_part025.c - 8 个函数

// 函数: void FUN_1806f5210(longlong *param_1,float *param_2,float *param_3)
void FUN_1806f5210(longlong *param_1,float *param_2,float *param_3)

{
  longlong *plVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  int8_t auStack_160 [24];
  longlong lStack_148;
  int8_t auStack_140 [8];
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float afStack_118 [56];
  
  (**(code **)(*param_1 + 0x30))(param_1,&lStack_148,auStack_140);
  afStack_118[0xc] = 0.0;
  afStack_118[0xd] = 0.0;
  lVar6 = 2;
  afStack_118[0] = 0.0;
  afStack_118[1] = 0.0;
  afStack_118[2] = 0.0;
  afStack_118[3] = 1.0;
  afStack_118[8] = 0.0;
  afStack_118[9] = 0.0;
  afStack_118[10] = 1.0;
  afStack_118[0xb] = 0.0;
  afStack_118[4] = 0.0;
  afStack_118[5] = 0.0;
  afStack_118[6] = 0.0;
  afStack_118[7] = 0.0;
  if (param_2 != (float *)0x0) {
    plVar5 = &lStack_148;
    pfVar3 = afStack_118 + 6;
    lVar7 = 2;
    fVar19 = *param_2;
    fVar21 = param_2[1];
    fVar22 = param_2[2];
    do {
      plVar1 = (longlong *)*plVar5;
      fVar8 = fVar19;
      fVar10 = fVar21;
      fVar12 = fVar22;
      if (plVar1 != (longlong *)0x0) {
        pfVar2 = (float *)(**(code **)(*plVar1 + 0x90))(plVar1,&fStack_138);
        fVar19 = pfVar2[3];
        fVar8 = pfVar2[1];
        fVar10 = *pfVar2;
        fVar12 = pfVar2[2];
        fVar16 = *param_2 - pfVar2[4];
        fVar17 = param_2[1] - pfVar2[5];
        fVar15 = param_2[2] - pfVar2[6];
        fVar16 = fVar16 + fVar16;
        fVar17 = fVar17 + fVar17;
        fVar18 = fVar19 * fVar19 - 0.5;
        fVar15 = fVar15 + fVar15;
        fVar9 = fVar10 * fVar16 + fVar8 * fVar17 + fVar12 * fVar15;
        fVar21 = (fVar18 * fVar17 - (fVar12 * fVar16 - fVar10 * fVar15) * fVar19) + fVar8 * fVar9;
        fVar22 = (fVar18 * fVar15 - (fVar10 * fVar17 - fVar8 * fVar16) * fVar19) + fVar12 * fVar9;
        fVar19 = (fVar18 * fVar16 - (fVar8 * fVar15 - fVar12 * fVar17) * fVar19) + fVar10 * fVar9;
        fVar8 = *param_2;
        fVar10 = param_2[1];
        fVar12 = param_2[2];
      }
      pfVar3[-2] = fVar19;
      plVar5 = plVar5 + 1;
      pfVar3[-1] = fVar21;
      *pfVar3 = fVar22;
      pfVar3 = pfVar3 + 7;
      lVar7 = lVar7 + -1;
      fVar19 = fVar8;
      fVar21 = fVar10;
      fVar22 = fVar12;
    } while (lVar7 != 0);
  }
  uVar4 = 0;
  if (param_3 != (float *)0x0) {
    fVar19 = *param_3;
    fVar21 = param_3[1];
    fVar22 = param_3[2];
    fVar8 = SQRT(fVar21 * fVar21 + fVar19 * fVar19 + fVar22 * fVar22);
    if (0.0 < fVar8) {
      fVar8 = 1.0 / fVar8;
      fVar19 = fVar8 * fVar19;
      fVar21 = fVar8 * fVar21;
      fVar22 = fVar8 * fVar22;
    }
    fStack_178 = fVar19;
    fStack_174 = fVar21;
    fStack_170 = fVar22;
    FUN_1806f5a40(&fStack_178,auStack_160,&fStack_188);
    pfVar3 = afStack_118;
    plVar5 = &lStack_148;
    fVar8 = fStack_180;
    fVar10 = fStack_184;
    do {
      plVar1 = (longlong *)*plVar5;
      fVar12 = fVar19;
      fVar9 = fVar22;
      fVar15 = fVar8;
      fVar16 = fVar10;
      fVar17 = fStack_188;
      fVar18 = fVar21;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x90))(plVar1,&fStack_138);
        fVar8 = fStack_134 + fStack_134;
        fVar12 = fStack_138 + fStack_138;
        fVar18 = fStack_12c * (fStack_130 + fStack_130);
        fVar10 = fStack_130 * (fStack_130 + fStack_130);
        fVar24 = (1.0 - fStack_134 * fVar8) - fVar10;
        fVar17 = fVar18 + fStack_134 * fVar12;
        fVar18 = fStack_134 * fVar12 - fVar18;
        fVar13 = 1.0 - fStack_138 * fVar12;
        fVar20 = fStack_130 * fVar12 - fStack_12c * fVar8;
        fVar23 = fStack_12c * fVar8 + fStack_130 * fVar12;
        fVar15 = fVar13 - fStack_134 * fVar8;
        fVar13 = fVar13 - fVar10;
        fVar11 = fStack_130 * fVar8 + fStack_12c * fVar12;
        fVar16 = fStack_130 * fVar8 - fStack_12c * fVar12;
        fVar12 = fVar17 * fVar21 + fVar24 * fVar19 + fVar20 * fVar22;
        fVar9 = fVar16 * fVar21 + fVar23 * fVar19 + fVar22 * fVar15;
        fVar8 = fStack_180;
        fVar10 = fStack_184;
        fVar15 = fVar23 * fStack_188 + fVar16 * fStack_184 + fStack_180 * fVar15;
        fVar16 = fVar18 * fStack_188 + fStack_184 * fVar13 + fVar11 * fStack_180;
        fVar17 = fVar24 * fStack_188 + fVar17 * fStack_184 + fVar20 * fStack_180;
        fVar18 = fVar18 * fVar19 + fVar21 * fVar13 + fVar11 * fVar22;
      }
      fVar11 = fVar15 * fVar18 - fVar16 * fVar9;
      fVar20 = fVar17 * fVar9 - fVar12 * fVar15;
      fVar13 = fVar12 * fVar16 - fVar17 * fVar18;
      if (0.0 <= fVar13) {
        if (-fVar16 <= fVar12) {
          fVar13 = fVar12 + 1.0 + fVar16 + fVar13;
          fVar24 = fVar15 - fVar20;
          fVar23 = 0.5 / SQRT(fVar13);
          fVar14 = (fVar18 - fVar17) * fVar23;
          fVar16 = fVar23 * fVar13;
          fVar12 = fVar11 - fVar9;
        }
        else {
          fVar13 = ((1.0 - fVar12) - fVar16) + fVar13;
          fVar24 = fVar11 + fVar9;
          fVar23 = 0.5 / SQRT(fVar13);
          fVar12 = fVar20 + fVar15;
          fVar14 = fVar23 * fVar13;
          fVar16 = (fVar18 - fVar17) * fVar23;
        }
        fVar13 = fVar24 * fVar23;
LAB_1806f58a9:
        fVar12 = fVar12 * fVar23;
      }
      else {
        if (fVar12 <= fVar16) {
          fVar23 = ((1.0 - fVar12) + fVar16) - fVar13;
          fVar12 = 0.5 / SQRT(fVar23);
          fVar14 = (fVar20 + fVar15) * fVar12;
          fVar13 = fVar12 * (fVar17 + fVar18);
          fVar16 = (fVar11 - fVar9) * fVar12;
          goto LAB_1806f58a9;
        }
        fVar13 = ((fVar12 + 1.0) - fVar16) - fVar13;
        fVar16 = 0.5 / SQRT(fVar13);
        fVar14 = (fVar11 + fVar9) * fVar16;
        fVar13 = fVar16 * fVar13;
        fVar12 = fVar16 * (fVar17 + fVar18);
        fVar16 = (fVar15 - fVar20) * fVar16;
      }
      *pfVar3 = fVar13;
      pfVar3[1] = fVar12;
      pfVar3[2] = fVar14;
      pfVar3[3] = fVar16;
      fVar12 = SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar14 * fVar14 + fVar16 * fVar16);
      if (fVar12 != 0.0) {
        fVar12 = 1.0 / fVar12;
        *pfVar3 = fVar12 * *pfVar3;
        pfVar3[1] = fVar12 * pfVar3[1];
        pfVar3[2] = fVar12 * pfVar3[2];
        pfVar3[3] = fVar12 * pfVar3[3];
      }
      plVar5 = plVar5 + 1;
      pfVar3 = pfVar3 + 7;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  pfVar3 = afStack_118;
  do {
    (**(code **)(*param_1 + 0x38))(param_1,uVar4,pfVar3);
    uVar4 = uVar4 + 1;
    pfVar3 = pfVar3 + 7;
  } while (uVar4 < 2);
  return;
}






// 函数: void FUN_1806f5226(longlong *param_1,float *param_2,float *param_3,uint64_t param_4,float param_5,
void FUN_1806f5226(longlong *param_1,float *param_2,float *param_3,uint64_t param_4,float param_5,
                  uint64_t param_6,float param_7)

{
  longlong *plVar1;
  longlong in_RAX;
  float *pfVar2;
  float *pfVar3;
  longlong unaff_RBP;
  uint uVar4;
  uint64_t unaff_RDI;
  longlong *plVar5;
  uint64_t unaff_R12;
  longlong lVar6;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int32_t unaff_XMM6_Da;
  float fVar11;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  float fVar12;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  float fVar13;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  float fVar14;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  float fVar15;
  float fVar16;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  float fVar17;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  int32_t unaff_XMM12_Da;
  float fVar18;
  float fVar19;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  int32_t unaff_XMM13_Da;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  int32_t unaff_XMM14_Da;
  float fVar20;
  int32_t unaff_XMM14_Db;
  int32_t unaff_XMM14_Dc;
  int32_t unaff_XMM14_Dd;
  int32_t unaff_XMM15_Da;
  int32_t unaff_XMM15_Db;
  int32_t unaff_XMM15_Dc;
  int32_t unaff_XMM15_Dd;
  float fStackX_20;
  float fStackX_24;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
  *(uint64_t *)(in_RAX + 0x20) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R14;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM7_Dd;
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x78) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x74) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x70) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x6c) = unaff_XMM9_Dd;
  *(int32_t *)(in_RAX + -0x88) = unaff_XMM10_Da;
  *(int32_t *)(in_RAX + -0x84) = unaff_XMM10_Db;
  *(int32_t *)(in_RAX + -0x80) = unaff_XMM10_Dc;
  *(int32_t *)(in_RAX + -0x7c) = unaff_XMM10_Dd;
  *(int32_t *)(in_RAX + -0x98) = unaff_XMM11_Da;
  *(int32_t *)(in_RAX + -0x94) = unaff_XMM11_Db;
  *(int32_t *)(in_RAX + -0x90) = unaff_XMM11_Dc;
  *(int32_t *)(in_RAX + -0x8c) = unaff_XMM11_Dd;
  *(int32_t *)(in_RAX + -0xa8) = unaff_XMM12_Da;
  *(int32_t *)(in_RAX + -0xa4) = unaff_XMM12_Db;
  *(int32_t *)(in_RAX + -0xa0) = unaff_XMM12_Dc;
  *(int32_t *)(in_RAX + -0x9c) = unaff_XMM12_Dd;
  *(int32_t *)(in_RAX + -0xb8) = unaff_XMM13_Da;
  *(int32_t *)(in_RAX + -0xb4) = unaff_XMM13_Db;
  *(int32_t *)(in_RAX + -0xb0) = unaff_XMM13_Dc;
  *(int32_t *)(in_RAX + -0xac) = unaff_XMM13_Dd;
  *(int32_t *)(in_RAX + -200) = unaff_XMM14_Da;
  *(int32_t *)(in_RAX + -0xc4) = unaff_XMM14_Db;
  *(int32_t *)(in_RAX + -0xc0) = unaff_XMM14_Dc;
  *(int32_t *)(in_RAX + -0xbc) = unaff_XMM14_Dd;
  *(int32_t *)(in_RAX + -0xd8) = unaff_XMM15_Da;
  *(int32_t *)(in_RAX + -0xd4) = unaff_XMM15_Db;
  *(int32_t *)(in_RAX + -0xd0) = unaff_XMM15_Dc;
  *(int32_t *)(in_RAX + -0xcc) = unaff_XMM15_Dd;
  (**(code **)(*param_1 + 0x30))(param_1,&stack0x00000060,&stack0x00000068);
  *(uint64_t *)(unaff_RBP + -0x40) = 0;
  lVar6 = 2;
  *(uint64_t *)(unaff_RBP + -0x70) = 0;
  *(uint64_t *)(unaff_RBP + -0x68) = 0x3f80000000000000;
  *(int32_t *)(unaff_RBP + -0x50) = 0;
  *(int32_t *)(unaff_RBP + -0x4c) = 0;
  *(int32_t *)(unaff_RBP + -0x48) = 0x3f800000;
  *(int32_t *)(unaff_RBP + -0x44) = 0;
  *(uint64_t *)(unaff_RBP + -0x60) = 0;
  *(uint64_t *)(unaff_RBP + -0x58) = 0;
  if (param_2 != (float *)0x0) {
    plVar5 = (longlong *)&stack0x00000060;
    pfVar3 = (float *)(unaff_RBP + -0x58);
    lVar7 = 2;
    fVar16 = *param_2;
    fVar17 = param_2[1];
    fVar18 = param_2[2];
    do {
      plVar1 = (longlong *)*plVar5;
      fVar8 = fVar16;
      fVar11 = fVar17;
      fVar9 = fVar18;
      if (plVar1 != (longlong *)0x0) {
        pfVar2 = (float *)(**(code **)(*plVar1 + 0x90))(plVar1,&stack0x00000070);
        fVar16 = pfVar2[3];
        fVar8 = pfVar2[1];
        fVar11 = *pfVar2;
        fVar9 = pfVar2[2];
        fVar13 = *param_2 - pfVar2[4];
        fVar14 = param_2[1] - pfVar2[5];
        fVar12 = param_2[2] - pfVar2[6];
        fVar13 = fVar13 + fVar13;
        fVar14 = fVar14 + fVar14;
        fVar15 = fVar16 * fVar16 - 0.5;
        fVar12 = fVar12 + fVar12;
        fVar10 = fVar11 * fVar13 + fVar8 * fVar14 + fVar9 * fVar12;
        fVar17 = (fVar15 * fVar14 - (fVar9 * fVar13 - fVar11 * fVar12) * fVar16) + fVar8 * fVar10;
        fVar18 = (fVar15 * fVar12 - (fVar11 * fVar14 - fVar8 * fVar13) * fVar16) + fVar9 * fVar10;
        fVar16 = (fVar15 * fVar13 - (fVar8 * fVar12 - fVar9 * fVar14) * fVar16) + fVar11 * fVar10;
        fVar8 = *param_2;
        fVar11 = param_2[1];
        fVar9 = param_2[2];
      }
      pfVar3[-2] = fVar16;
      plVar5 = plVar5 + 1;
      pfVar3[-1] = fVar17;
      *pfVar3 = fVar18;
      pfVar3 = pfVar3 + 7;
      lVar7 = lVar7 + -1;
      fVar16 = fVar8;
      fVar17 = fVar11;
      fVar18 = fVar9;
    } while (lVar7 != 0);
  }
  uVar4 = 0;
  if (param_3 != (float *)0x0) {
    fVar16 = *param_3;
    fVar17 = param_3[1];
    fVar18 = param_3[2];
    *(float *)(unaff_RBP + 0xb8) = fVar16;
    *(float *)(unaff_RBP + 0xc0) = fVar17;
    *(float *)(unaff_RBP + 0xb0) = fVar18;
    fVar8 = SQRT(fVar17 * fVar17 + fVar16 * fVar16 + fVar18 * fVar18);
    if (0.0 < fVar8) {
      fVar8 = 1.0 / fVar8;
      fVar16 = fVar8 * fVar16;
      fVar17 = fVar8 * fVar17;
      fVar18 = fVar8 * fVar18;
      *(float *)(unaff_RBP + 0xb8) = fVar16;
      *(float *)(unaff_RBP + 0xc0) = fVar17;
      *(float *)(unaff_RBP + 0xb0) = fVar18;
    }
    param_6._0_4_ = fVar16;
    param_6._4_4_ = fVar17;
    param_7 = fVar18;
    FUN_1806f5a40(&param_6,&stack0x00000048,&fStackX_20);
    pfVar3 = (float *)(unaff_RBP + -0x70);
    plVar5 = (longlong *)&stack0x00000060;
    fVar8 = fStackX_24;
    do {
      plVar1 = (longlong *)*plVar5;
      fVar11 = param_5;
      fVar9 = fVar8;
      fVar10 = fStackX_20;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x90))(plVar1,&stack0x00000070);
        fVar16 = fStack0000000000000074 + fStack0000000000000074;
        fVar8 = fStack0000000000000070 + fStack0000000000000070;
        fVar9 = fStack000000000000007c * (fStack0000000000000078 + fStack0000000000000078);
        fVar18 = fStack0000000000000078 * (fStack0000000000000078 + fStack0000000000000078);
        fVar20 = (1.0 - fStack0000000000000074 * fVar16) - fVar18;
        fVar13 = fVar9 + fStack0000000000000074 * fVar8;
        fVar9 = fStack0000000000000074 * fVar8 - fVar9;
        fVar10 = 1.0 - fStack0000000000000070 * fVar8;
        fVar14 = fStack0000000000000078 * fVar8 - fStack000000000000007c * fVar16;
        fVar19 = fStack000000000000007c * fVar16 + fStack0000000000000078 * fVar8;
        fVar11 = fVar10 - fStack0000000000000074 * fVar16;
        fVar10 = fVar10 - fVar18;
        fVar12 = fStack0000000000000078 * fVar16 + fStack000000000000007c * fVar8;
        fVar15 = fStack0000000000000078 * fVar16 - fStack000000000000007c * fVar8;
        fVar18 = *(float *)(unaff_RBP + 0xb8);
        fVar16 = fVar13 * fVar17 + fVar20 * fVar18 + fVar14 * *(float *)(unaff_RBP + 0xb0);
        fVar17 = fVar9 * fVar18 + *(float *)(unaff_RBP + 0xc0) * fVar10 +
                 fVar12 * *(float *)(unaff_RBP + 0xb0);
        fVar18 = fVar15 * *(float *)(unaff_RBP + 0xc0) + fVar19 * fVar18 +
                 *(float *)(unaff_RBP + 0xb0) * fVar11;
        fVar8 = fStackX_24;
        fVar11 = fVar19 * fStackX_20 + fVar15 * fStackX_24 + param_5 * fVar11;
        fVar9 = fVar9 * fStackX_20 + fStackX_24 * fVar10 + fVar12 * param_5;
        fVar10 = fVar20 * fStackX_20 + fVar13 * fStackX_24 + fVar14 * param_5;
      }
      fVar13 = fVar11 * fVar17 - fVar9 * fVar18;
      fVar14 = fVar10 * fVar18 - fVar16 * fVar11;
      fVar12 = fVar16 * fVar9 - fVar10 * fVar17;
      if (0.0 <= fVar12) {
        if (-fVar9 <= fVar16) {
          fVar12 = fVar16 + 1.0 + fVar9 + fVar12;
          fVar19 = fVar11 - fVar14;
          fVar15 = 0.5 / SQRT(fVar12);
          fVar20 = (fVar17 - fVar10) * fVar15;
          fVar9 = fVar15 * fVar12;
          fVar16 = fVar13 - fVar18;
        }
        else {
          fVar12 = ((1.0 - fVar16) - fVar9) + fVar12;
          fVar19 = fVar13 + fVar18;
          fVar15 = 0.5 / SQRT(fVar12);
          fVar16 = fVar14 + fVar11;
          fVar20 = fVar15 * fVar12;
          fVar9 = (fVar17 - fVar10) * fVar15;
        }
        fVar12 = fVar19 * fVar15;
LAB_1806f58a9:
        fVar16 = fVar16 * fVar15;
      }
      else {
        if (fVar16 <= fVar9) {
          fVar15 = ((1.0 - fVar16) + fVar9) - fVar12;
          fVar16 = 0.5 / SQRT(fVar15);
          fVar20 = (fVar14 + fVar11) * fVar16;
          fVar12 = fVar16 * (fVar10 + fVar17);
          fVar9 = (fVar13 - fVar18) * fVar16;
          goto LAB_1806f58a9;
        }
        fVar12 = ((fVar16 + 1.0) - fVar9) - fVar12;
        fVar9 = 0.5 / SQRT(fVar12);
        fVar20 = (fVar13 + fVar18) * fVar9;
        fVar12 = fVar9 * fVar12;
        fVar16 = fVar9 * (fVar10 + fVar17);
        fVar9 = (fVar11 - fVar14) * fVar9;
      }
      *pfVar3 = fVar12;
      pfVar3[1] = fVar16;
      pfVar3[2] = fVar20;
      pfVar3[3] = fVar9;
      fVar16 = SQRT(fVar12 * fVar12 + fVar16 * fVar16 + fVar20 * fVar20 + fVar9 * fVar9);
      if (fVar16 != 0.0) {
        fVar16 = 1.0 / fVar16;
        *pfVar3 = fVar16 * *pfVar3;
        pfVar3[1] = fVar16 * pfVar3[1];
        pfVar3[2] = fVar16 * pfVar3[2];
        pfVar3[3] = fVar16 * pfVar3[3];
      }
      fVar16 = *(float *)(unaff_RBP + 0xb8);
      plVar5 = plVar5 + 1;
      fVar17 = *(float *)(unaff_RBP + 0xc0);
      fVar18 = *(float *)(unaff_RBP + 0xb0);
      pfVar3 = pfVar3 + 7;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  lVar6 = unaff_RBP + -0x70;
  do {
    (**(code **)(*param_1 + 0x38))(param_1,uVar4,lVar6);
    uVar4 = uVar4 + 1;
    lVar6 = lVar6 + 0x1c;
  } while (uVar4 < 2);
  return;
}






// 函数: void FUN_1806f59b1(void)
void FUN_1806f59b1(void)

{
  uint unaff_ESI;
  longlong *unaff_R15;
  
  do {
    (**(code **)(*unaff_R15 + 0x38))();
    unaff_ESI = unaff_ESI + 1;
  } while (unaff_ESI < 2);
  return;
}



longlong *
FUN_1806f59e0(uint64_t *param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 != (longlong *)0x0) {
    param_2 = (longlong *)(**(code **)*param_1)(param_1,0x80000000,param_2);
  }
  (**(code **)(*param_2 + 0x98))(param_2,param_3,param_4);
  return param_2;
}






// 函数: void FUN_1806f5a40(float *param_1,float *param_2,float *param_3)
void FUN_1806f5a40(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = param_1[2];
  fVar7 = param_1[1];
  if (ABS(fVar1) <= 0.70710677) {
    fVar1 = *param_1;
    param_2[2] = 0.0;
    fVar4 = fVar1 * fVar1 + fVar7 * fVar7;
    fVar6 = 1.0 / SQRT(fVar4);
    param_2[1] = fVar1 * fVar6;
    *param_2 = -(fVar7 * fVar6);
    fVar7 = param_1[2] * -(fVar7 * fVar6);
    fVar2 = -(param_1[2] * fVar1 * fVar6);
  }
  else {
    *param_2 = 0.0;
    fVar2 = fVar1 * fVar1 + fVar7 * fVar7;
    fVar5 = 1.0 / SQRT(fVar2);
    param_2[2] = fVar7 * fVar5;
    fVar2 = fVar5 * fVar2;
    fVar4 = -(fVar1 * fVar5);
    param_2[1] = fVar4;
    fVar6 = *param_1;
    fVar7 = -(fVar6 * fVar7 * fVar5);
  }
  fVar6 = fVar6 * fVar4;
  *param_3 = fVar2;
  param_3[1] = fVar7;
  param_3[2] = fVar6;
  fVar1 = param_2[1];
  fVar4 = *param_2;
  fVar5 = param_2[2];
  fVar3 = SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar5 * fVar5);
  if (0.0 < fVar3) {
    fVar3 = 1.0 / fVar3;
    *param_2 = fVar4 * fVar3;
    param_2[1] = fVar1 * fVar3;
    param_2[2] = fVar5 * fVar3;
    fVar7 = param_3[1];
    fVar2 = *param_3;
    fVar6 = param_3[2];
  }
  fVar1 = SQRT(fVar2 * fVar2 + fVar7 * fVar7 + fVar6 * fVar6);
  if (0.0 < fVar1) {
    fVar1 = 1.0 / fVar1;
    *param_3 = fVar2 * fVar1;
    param_3[1] = fVar7 * fVar1;
    param_3[2] = fVar6 * fVar1;
  }
  return;
}






// 函数: void FUN_1806f5a6a(float *param_1,float *param_2,float *param_3)
void FUN_1806f5a6a(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  bool in_CF;
  bool in_ZF;
  float fVar2;
  float fVar3;
  float in_XMM2_Da;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_XMM6_Da;
  
  fVar7 = param_1[1];
  if (in_CF || in_ZF) {
    fVar2 = *param_1;
    param_2[2] = 0.0;
    fVar4 = fVar2 * fVar2 + fVar7 * fVar7;
    fVar6 = unaff_XMM6_Da / SQRT(fVar4);
    param_2[1] = fVar2 * fVar6;
    *param_2 = -(fVar7 * fVar6);
    fVar7 = param_1[2] * -(fVar7 * fVar6);
    fVar2 = -(param_1[2] * fVar2 * fVar6);
  }
  else {
    *param_2 = 0.0;
    fVar2 = in_XMM2_Da * in_XMM2_Da + fVar7 * fVar7;
    fVar5 = unaff_XMM6_Da / SQRT(fVar2);
    param_2[2] = fVar7 * fVar5;
    fVar2 = fVar5 * fVar2;
    fVar4 = -(in_XMM2_Da * fVar5);
    param_2[1] = fVar4;
    fVar6 = *param_1;
    fVar7 = -(fVar6 * fVar7 * fVar5);
  }
  fVar6 = fVar6 * fVar4;
  *param_3 = fVar2;
  param_3[1] = fVar7;
  param_3[2] = fVar6;
  fVar4 = param_2[1];
  fVar5 = *param_2;
  fVar1 = param_2[2];
  fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar1 * fVar1);
  if (0.0 < fVar3) {
    fVar3 = unaff_XMM6_Da / fVar3;
    *param_2 = fVar5 * fVar3;
    param_2[1] = fVar4 * fVar3;
    param_2[2] = fVar1 * fVar3;
    fVar7 = param_3[1];
    fVar2 = *param_3;
    fVar6 = param_3[2];
  }
  fVar4 = SQRT(fVar2 * fVar2 + fVar7 * fVar7 + fVar6 * fVar6);
  if (0.0 < fVar4) {
    fVar4 = unaff_XMM6_Da / fVar4;
    *param_3 = fVar2 * fVar4;
    param_3[1] = fVar7 * fVar4;
    param_3[2] = fVar6 * fVar4;
  }
  return;
}






// 函数: void FUN_1806f5bf8(float param_1,uint64_t param_2,float *param_3,float param_4)
void FUN_1806f5bf8(float param_1,uint64_t param_2,float *param_3,float param_4)

{
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  
  param_1 = unaff_XMM6_Da / param_1;
  *param_3 = param_4 * param_1;
  param_3[1] = in_XMM5_Da * param_1;
  param_3[2] = in_XMM4_Da * param_1;
  return;
}



longlong *
FUN_1806f5c30(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
             uint64_t param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  void *puVar4;
  longlong lVar5;
  int16_t auStackX_8 [4];
  uint64_t in_stack_ffffffffffffffb8;
  int32_t uVar6;
  uint64_t in_stack_ffffffffffffffc0;
  uint64_t uVar7;
  int32_t uVar8;
  
  uVar8 = (int32_t)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  uVar6 = (int32_t)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  plVar3 = (longlong *)PxGetFoundation();
  cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (cVar1 == '\0') {
    puVar4 = &unknown_var_1728_ptr;
  }
  else {
    puVar4 = (void *)__std_type_info_name(0x180bfc700,0x180c827e0);
  }
  plVar2 = (longlong *)
           (**(code **)(*plVar2 + 8))(plVar2,0x70,puVar4,&system_state_ptr,CONCAT44(uVar6,0x2c));
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    (**(code **)(*param_1 + 0x20))(param_1);
    auStackX_8[0] = 3;
    uVar7 = param_4;
    FUN_1806f6880(plVar2,0x106,auStackX_8,param_2,param_3,param_4,param_5,0x80,&unknown_var_696_ptr);
    uVar8 = (int32_t)((ulonglong)uVar7 >> 0x20);
    *plVar2 = (longlong)&unknown_var_264_ptr;
    plVar2[3] = (longlong)&unknown_var_616_ptr;
    lVar5 = plVar2[0xd];
    *(uint64_t *)(lVar5 + 0x50) = 0;
    *(uint64_t *)(lVar5 + 0x58) = 0;
    *(uint64_t *)(lVar5 + 0x60) = 0;
    *(uint64_t *)(lVar5 + 0x68) = 0;
    *(int32_t *)(lVar5 + 0x70) = 0;
  }
  lVar5 = (**(code **)(*param_1 + 0xd0))
                    (param_1,param_2,param_4,plVar2 + 3,0x180be1230,CONCAT44(uVar8,0x80));
  plVar2[0xc] = lVar5;
  if (lVar5 == 0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,1);
    plVar2 = (longlong *)0x0;
  }
  return plVar2;
}






// 函数: void FUN_1806f5da0(longlong param_1,longlong *param_2)
void FUN_1806f5da0(longlong param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,0x10);
    (**(code **)(*param_2 + 0x10))(param_2,*(uint64_t *)(param_1 + 0x68),0x80);
  }
                    // WARNING: Could not recover jumptable at 0x0001806f5dec. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x20))(param_2,*(uint64_t *)(param_1 + 0x20));
  return;
}






// 函数: void FUN_1806f5e50(longlong param_1,uint64_t param_2)
void FUN_1806f5e50(longlong param_1,uint64_t param_2)

{
  uint64_t uVar1;
  
  uVar1 = FUN_1806f59e0(param_2,*(uint64_t *)(param_1 + 0x60),param_1 + 0x18,0x180be1230);
  *(uint64_t *)(param_1 + 0x60) = uVar1;
  return;
}



uint * FUN_1806f5e90(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  uint64_t uVar4;
  ulonglong uVar5;
  uint *puVar6;
  
  puVar6 = (uint *)*param_1;
  if (puVar6 == (uint *)0x0) {
    lVar2 = 0;
    puVar6 = (uint *)0x0;
  }
  else {
    *(int16_t *)((longlong)puVar6 + 10) = 2;
    *(void **)puVar6 = &unknown_var_264_ptr;
    *(void **)(puVar6 + 6) = &unknown_var_616_ptr;
    lVar2 = *param_1;
  }
  *param_1 = lVar2 + 0x70;
  if (*(longlong *)(puVar6 + 0x1a) != 0) {
    uVar5 = *(longlong *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    *(ulonglong *)(param_2 + 8) = uVar5 + 0x80;
    *(ulonglong *)(puVar6 + 0x1a) = uVar5;
  }
  uVar1 = **(uint **)(param_2 + 8);
  puVar3 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar3;
  if (uVar1 == 0) {
    puVar3 = (uint *)0x0;
  }
  *(uint **)(puVar6 + 8) = puVar3;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar1;
  uVar4 = FUN_1806f59e0(param_2,*(uint64_t *)(puVar6 + 0x18),puVar6 + 6,0x180be1230);
  *(uint64_t *)(puVar6 + 0x18) = uVar4;
  return puVar6;
}






