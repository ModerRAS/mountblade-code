#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part262.c - 2 个函数

// 函数: void FUN_180412bc0(uint64_t *param_1,int64_t param_2,int param_3,int64_t param_4,
void FUN_180412bc0(uint64_t *param_1,int64_t param_2,int param_3,int64_t param_4,
                  int64_t param_5,int64_t *param_6,int param_7)

{
  uint64_t uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int64_t lVar6;
  int iVar7;
  int64_t lVar8;
  int64_t lVar9;
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
  int8_t auStack_248 [32];
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_200;
  int iStack_1f8;
  float fStack_1e8;
  uint64_t uStack_1e0;
  float fStack_1d8;
  uint64_t uStack_1d0;
  float fStack_1c8;
  int64_t *plStack_1c0;
  int64_t lStack_1b8;
  int64_t lStack_1b0;
  int64_t lStack_1a8;
  float fStack_190;
  float fStack_180;
  float fStack_170;
  float fStack_160;
  float fStack_150;
  float fStack_140;
  float fStack_130;
  float fStack_120;
  uint64_t uStack_118;
  float fStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  uint64_t uStack_d8;
  
  uStack_d8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_248;
  fVar14 = 0.0;
  lVar9 = 0;
  lStack_1a8 = (int64_t)param_3;
  fStack_210 = 0.0;
  plStack_1c0 = param_6;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  lStack_1b0 = param_2;
  if (0 < param_3) {
    do {
      iVar2 = *(int *)(param_2 + lVar9 * 4);
      lVar8 = (int64_t)iVar2 * 0x58;
      if ((*(byte *)(lVar8 + 0x4c + param_5) & 4) == 0) {
        iVar2 = iVar2 * 3;
        lVar6 = (int64_t)iVar2;
        if (*(int *)(param_4 + lVar6 * 4) == param_7) {
          iVar7 = 0;
        }
        else if (*(int *)(param_4 + 4 + lVar6 * 4) == param_7) {
          iVar7 = 1;
        }
        else {
          iVar7 = -1;
          if (*(int *)(param_4 + 8 + lVar6 * 4) == param_7) {
            iVar7 = 2;
          }
        }
        lStack_1b8 = (int64_t)(iVar2 + iVar7);
        uVar3 = *(uint *)(param_4 + lStack_1b8 * 4);
        (**(code **)(*param_6 + 0x18))(param_6,&fStack_108,(int)uVar3 >> 2,uVar3 & 3);
        param_6 = plStack_1c0;
        uVar1 = *(uint64_t *)(lVar8 + 0x28 + param_5);
        fStack_190 = *(float *)(lVar8 + 0x30 + param_5);
        fStack_220 = fStack_108;
        fStack_228 = fStack_104;
        fStack_224 = fStack_100;
        fVar14 = fStack_108 * (float)uVar1 + fStack_104 * (float)((uint64_t)uVar1 >> 0x20) +
                 fStack_100 * fStack_190;
        fStack_21c = (float)*(uint64_t *)(lVar8 + 0x28 + param_5) - fStack_108 * fVar14;
        fStack_218 = (float)((uint64_t)*(uint64_t *)(lVar8 + 0x28 + param_5) >> 0x20) -
                     fStack_104 * fVar14;
        uVar1 = *(uint64_t *)(lVar8 + 0x34 + param_5);
        fStack_1d8 = fStack_190 - fStack_100 * fVar14;
        uStack_1e0 = CONCAT44(fStack_218,fStack_21c);
        fStack_170 = *(float *)(lVar8 + 0x3c + param_5);
        fVar14 = fStack_104 * (float)((uint64_t)uVar1 >> 0x20) + fStack_108 * (float)uVar1 +
                 fStack_100 * fStack_170;
        fVar17 = (float)*(uint64_t *)(lVar8 + 0x34 + param_5) - fStack_108 * fVar14;
        fStack_1c8 = fStack_170 - fStack_100 * fVar14;
        fStack_214 = (float)((uint64_t)*(uint64_t *)(lVar8 + 0x34 + param_5) >> 0x20) -
                     fStack_104 * fVar14;
        uStack_1d0 = CONCAT44(fStack_214,fVar17);
        if (((1.1754944e-38 < ABS(fStack_21c)) || (1.1754944e-38 < ABS(fStack_218))) ||
           (fVar14 = fStack_1d8, 1.1754944e-38 < ABS(fStack_1d8))) {
          fVar14 = 1.0 / SQRT(fStack_218 * fStack_218 + fStack_21c * fStack_21c +
                              fStack_1d8 * fStack_1d8);
          fStack_21c = fVar14 * fStack_21c;
          fStack_218 = fVar14 * fStack_218;
          fVar14 = fVar14 * fStack_1d8;
        }
        if (((1.1754944e-38 < ABS(fVar17)) || (1.1754944e-38 < ABS(fStack_214))) ||
           (fVar13 = fStack_1c8, 1.1754944e-38 < ABS(fStack_1c8))) {
          fVar13 = 1.0 / SQRT(fVar17 * fVar17 + fStack_214 * fStack_214 + fStack_1c8 * fStack_1c8);
          fVar17 = fVar13 * fVar17;
          fStack_214 = fVar13 * fStack_214;
          fVar13 = fStack_1c8 * fVar13;
        }
        iVar5 = iVar7 + 1 + iVar2;
        if (1 < iVar7) {
          iVar5 = iVar2;
        }
        iStack_1f8 = *(int *)(param_4 + (int64_t)iVar5 * 4);
        uVar3 = *(uint *)(param_4 + lStack_1b8 * 4);
        if (iVar7 < 1) {
          iVar7 = 2;
        }
        else {
          iVar7 = iVar7 + -1;
        }
        uVar4 = *(uint *)(param_4 + (int64_t)(iVar2 + iVar7) * 4);
        fStack_180 = fStack_190;
        fStack_160 = fStack_170;
        fStack_140 = fStack_1d8;
        fStack_130 = fStack_1c8;
        (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0,&fStack_f8,(int)uVar4 >> 2,uVar4 & 3);
        (**(code **)(*param_6 + 0x10))(param_6,&fStack_e8,(int)uVar3 >> 2,uVar3 & 3);
        (**(code **)(*param_6 + 0x10))(param_6,&uStack_118,iStack_1f8 >> 2);
        fVar10 = fStack_228 * (fStack_f4 - fStack_e4) + fStack_220 * (fStack_f8 - fStack_e8) +
                 fStack_224 * (fStack_f0 - fStack_e0);
        fVar19 = (fStack_f8 - fStack_e8) - fStack_220 * fVar10;
        fVar18 = (fStack_f4 - fStack_e4) - fStack_228 * fVar10;
        fVar10 = (fStack_f0 - fStack_e0) - fStack_224 * fVar10;
        if (((1.1754944e-38 < ABS(fVar19)) || (1.1754944e-38 < ABS(fVar18))) ||
           (1.1754944e-38 < ABS(fVar10))) {
          fVar11 = 1.0 / SQRT(fVar19 * fVar19 + fVar18 * fVar18 + fVar10 * fVar10);
          fVar19 = fVar19 * fVar11;
          fVar18 = fVar18 * fVar11;
          fVar10 = fVar10 * fVar11;
        }
        fVar11 = fStack_228 * (uStack_118._4_4_ - fStack_e4) +
                 fStack_220 * ((float)uStack_118 - fStack_e8) +
                 fStack_224 * (fStack_110 - fStack_e0);
        fVar15 = (uStack_118._4_4_ - fStack_e4) - fStack_228 * fVar11;
        fVar16 = ((float)uStack_118 - fStack_e8) - fStack_220 * fVar11;
        fVar11 = (fStack_110 - fStack_e0) - fStack_224 * fVar11;
        if (((1.1754944e-38 < ABS(fVar16)) || (1.1754944e-38 < ABS(fVar15))) ||
           (1.1754944e-38 < ABS(fVar11))) {
          fVar12 = 1.0 / SQRT(fVar16 * fVar16 + fVar15 * fVar15 + fVar11 * fVar11);
          fVar16 = fVar16 * fVar12;
          fVar15 = fVar15 * fVar12;
          fVar11 = fVar11 * fVar12;
        }
        fVar10 = fVar15 * fVar18 + fVar16 * fVar19 + fVar11 * fVar10;
        if (fVar10 <= -1.0) {
          fVar10 = -1.0;
        }
        if (1.0 <= fVar10) {
          fVar10 = 1.0;
        }
        fVar10 = (float)acosf(fVar10);
        fStack_150 = *(float *)(param_1 + 1);
        fStack_120 = fStack_150 + fVar14 * fVar10;
        fVar14 = fStack_210 + fVar10;
        *param_1 = CONCAT44(*(float *)((int64_t)param_1 + 4) + fStack_218 * fVar10,
                            (float)*param_1 + fStack_21c * fVar10);
        *(float *)(param_1 + 1) = fStack_120;
        fStack_200 = *(float *)(param_1 + 3);
        param_1[2] = CONCAT44(*(float *)((int64_t)param_1 + 0x14) + fStack_214 * fVar10,
                              (float)param_1[2] + fVar17 * fVar10);
        fStack_1e8 = fStack_200 + fVar13 * fVar10;
        *(float *)((int64_t)param_1 + 0x1c) =
             fVar10 * *(float *)(lVar8 + 0x44 + param_5) + *(float *)((int64_t)param_1 + 0x1c);
        fVar17 = *(float *)(lVar8 + 0x40 + param_5);
        *(float *)(param_1 + 3) = fStack_1e8;
        *(float *)((int64_t)param_1 + 0xc) = fVar10 * fVar17 + *(float *)((int64_t)param_1 + 0xc);
        param_2 = lStack_1b0;
        fStack_210 = fVar14;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < lStack_1a8);
  }
  fVar17 = *(float *)(param_1 + 1);
  if (((1.1754944e-38 < ABS((float)*param_1)) ||
      (uStack_118._4_4_ = (float)((uint64_t)*param_1 >> 0x20),
      1.1754944e-38 < ABS(uStack_118._4_4_))) || (1.1754944e-38 < ABS(fVar17))) {
    fVar10 = (float)((uint64_t)*param_1 >> 0x20);
    uStack_118._0_4_ = (float)*param_1;
    fVar13 = 1.0 / SQRT(fVar10 * fVar10 + (float)uStack_118 * (float)uStack_118 + fVar17 * fVar17);
    fStack_1e8 = fVar17 * fVar13;
    *param_1 = CONCAT44(fVar10 * fVar13,(float)uStack_118 * fVar13);
    *(float *)(param_1 + 1) = fStack_1e8;
    fStack_200 = fVar17;
  }
  uVar1 = param_1[2];
  fStack_110 = *(float *)(param_1 + 3);
  if (((1.1754944e-38 < ABS((float)uVar1)) ||
      (uStack_118._4_4_ = (float)((uint64_t)uVar1 >> 0x20), 1.1754944e-38 < ABS(uStack_118._4_4_)))
     || (uStack_118 = uVar1, 1.1754944e-38 < ABS(fStack_110))) {
    uStack_118 = param_1[2];
    fVar13 = (float)((uint64_t)uStack_118 >> 0x20);
    fVar17 = 1.0 / SQRT(fVar13 * fVar13 + (float)uStack_118 * (float)uStack_118 +
                        fStack_110 * fStack_110);
    fStack_1e8 = fStack_110 * fVar17;
    param_1[2] = CONCAT44(fVar13 * fVar17,(float)uStack_118 * fVar17);
    *(float *)(param_1 + 3) = fStack_1e8;
    fStack_200 = fStack_110;
  }
  if (0.0 < fVar14) {
    *(float *)((int64_t)param_1 + 0x1c) = (1.0 / fVar14) * *(float *)((int64_t)param_1 + 0x1c);
    *(float *)((int64_t)param_1 + 0xc) = (1.0 / fVar14) * *(float *)((int64_t)param_1 + 0xc);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_d8 ^ (uint64_t)auStack_248);
}





// 函数: void FUN_180412bff(uint64_t *param_1,int64_t param_2,int param_3,int64_t param_4)
void FUN_180412bff(uint64_t *param_1,int64_t param_2,int param_3,int64_t param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int iVar4;
  uint uVar5;
  int32_t uVar6;
  uint uVar7;
  int iVar8;
  int64_t lVar9;
  uint64_t *unaff_RBX;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  int iVar10;
  uint64_t unaff_RDI;
  int64_t *in_R10;
  int64_t in_R11;
  uint64_t unaff_R12;
  int64_t lVar11;
  uint64_t unaff_R13;
  int64_t lVar12;
  uint64_t unaff_R14;
  int64_t lVar13;
  uint64_t unaff_R15;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float in_XMM5_Da;
  float fVar20;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  float fVar21;
  float fVar22;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  float fVar23;
  float fVar24;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  float fVar25;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  float fVar26;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  int32_t unaff_XMM12_Da;
  float fVar27;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  int32_t unaff_XMM13_Da;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  float unaff_XMM14_Da;
  int32_t unaff_XMM15_Da;
  int32_t unaff_XMM15_Db;
  int32_t unaff_XMM15_Dc;
  int32_t unaff_XMM15_Dd;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000038;
  
  *(uint64_t *)(in_R11 + 8) = unaff_RSI;
  lVar13 = 0;
  *(int32_t *)(in_R11 + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x2c) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM8_Dd;
  *(int64_t *)(unaff_RBP + -0x68) = param_2;
  *(int64_t **)(unaff_RBP + -0x78) = in_R10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(int64_t *)(unaff_RBP + -0x60) = (int64_t)param_3;
  fStack0000000000000038 = in_XMM5_Da;
  if (0 < param_3) {
    *(uint64_t *)(in_R11 + 0x18) = unaff_R12;
    *(uint64_t *)(in_R11 + -0x18) = unaff_R13;
    lVar12 = *(int64_t *)(unaff_RBP + 0x170);
    *(uint64_t *)(in_R11 + -0x20) = unaff_R14;
    *(uint64_t *)(in_R11 + 0x10) = unaff_RDI;
    *(uint64_t *)(in_R11 + -0x28) = unaff_R15;
    *(int32_t *)(in_R11 + -0x68) = unaff_XMM9_Da;
    *(int32_t *)(in_R11 + -100) = unaff_XMM9_Db;
    *(int32_t *)(in_R11 + -0x60) = unaff_XMM9_Dc;
    *(int32_t *)(in_R11 + -0x5c) = unaff_XMM9_Dd;
    *(int32_t *)(in_R11 + -0x78) = unaff_XMM10_Da;
    *(int32_t *)(in_R11 + -0x74) = unaff_XMM10_Db;
    *(int32_t *)(in_R11 + -0x70) = unaff_XMM10_Dc;
    *(int32_t *)(in_R11 + -0x6c) = unaff_XMM10_Dd;
    *(int32_t *)(in_R11 + -0x88) = unaff_XMM11_Da;
    *(int32_t *)(in_R11 + -0x84) = unaff_XMM11_Db;
    *(int32_t *)(in_R11 + -0x80) = unaff_XMM11_Dc;
    *(int32_t *)(in_R11 + -0x7c) = unaff_XMM11_Dd;
    *(int32_t *)(in_R11 + -0x98) = unaff_XMM12_Da;
    *(int32_t *)(in_R11 + -0x94) = unaff_XMM12_Db;
    *(int32_t *)(in_R11 + -0x90) = unaff_XMM12_Dc;
    *(int32_t *)(in_R11 + -0x8c) = unaff_XMM12_Dd;
    *(int32_t *)(in_R11 + -0xa8) = unaff_XMM13_Da;
    *(int32_t *)(in_R11 + -0xa4) = unaff_XMM13_Db;
    *(int32_t *)(in_R11 + -0xa0) = unaff_XMM13_Dc;
    *(int32_t *)(in_R11 + -0x9c) = unaff_XMM13_Dd;
    *(int32_t *)(in_R11 + -200) = unaff_XMM15_Da;
    *(int32_t *)(in_R11 + -0xc4) = unaff_XMM15_Db;
    *(int32_t *)(in_R11 + -0xc0) = unaff_XMM15_Dc;
    *(int32_t *)(in_R11 + -0xbc) = unaff_XMM15_Dd;
    do {
      iVar4 = *(int *)(param_2 + lVar13 * 4);
      lVar11 = (int64_t)iVar4 * 0x58;
      if ((*(byte *)(lVar11 + 0x4c + lVar12) & 4) == 0) {
        iVar4 = iVar4 * 3;
        iVar8 = *(int *)(unaff_RBP + 0x180);
        lVar9 = (int64_t)iVar4;
        if (*(int *)(param_4 + lVar9 * 4) == iVar8) {
          iVar10 = 0;
        }
        else if (*(int *)(param_4 + 4 + lVar9 * 4) == iVar8) {
          iVar10 = 1;
        }
        else {
          iVar10 = -1;
          if (*(int *)(param_4 + 8 + lVar9 * 4) == iVar8) {
            iVar10 = 2;
          }
        }
        *(int64_t *)(unaff_RBP + -0x70) = (int64_t)(iVar4 + iVar10);
        uVar5 = *(uint *)(param_4 + (int64_t)(iVar4 + iVar10) * 4);
        (**(code **)(*in_R10 + 0x18))(in_R10,unaff_RBP + 0x40,(int)uVar5 >> 2,uVar5 & 3);
        fVar14 = *(float *)(unaff_RBP + 0x40);
        fVar15 = *(float *)(unaff_RBP + 0x44);
        fVar19 = *(float *)(unaff_RBP + 0x48);
        uVar1 = *(uint64_t *)(lVar11 + 0x28 + lVar12);
        uVar6 = *(int32_t *)(lVar11 + 0x30 + lVar12);
        uVar2 = *(uint64_t *)(lVar11 + 0x28 + lVar12);
        uVar3 = *(uint64_t *)(lVar11 + 0x28 + lVar12);
        *(int32_t *)(unaff_RBP + -0x48) = uVar6;
        *(int32_t *)(unaff_RBP + -0x38) = uVar6;
        fVar16 = fVar14 * (float)uVar1 + fVar15 * (float)((uint64_t)uVar1 >> 0x20) +
                 fVar19 * *(float *)(unaff_RBP + -0x48);
        fStack000000000000002c = (float)uVar2 - fVar14 * fVar16;
        fStack0000000000000030 = (float)((uint64_t)uVar3 >> 0x20) - fVar15 * fVar16;
        uVar1 = *(uint64_t *)(lVar11 + 0x34 + lVar12);
        fVar21 = *(float *)(unaff_RBP + -0x38) - fVar19 * fVar16;
        *(float *)(unaff_RBP + 8) = fVar21;
        fVar27 = *(float *)(unaff_RBP + 8);
        uVar6 = *(int32_t *)(lVar11 + 0x3c + lVar12);
        uVar2 = *(uint64_t *)(lVar11 + 0x34 + lVar12);
        *(int32_t *)(unaff_RBP + -0x28) = uVar6;
        *(int32_t *)(unaff_RBP + -0x18) = uVar6;
        fVar17 = fVar15 * (float)((uint64_t)uVar1 >> 0x20) + fVar14 * (float)uVar1 +
                 fVar19 * *(float *)(unaff_RBP + -0x28);
        fVar23 = (float)uVar2 - fVar14 * fVar17;
        fVar16 = *(float *)(unaff_RBP + -0x18) - fVar19 * fVar17;
        fVar17 = (float)((uint64_t)*(uint64_t *)(lVar11 + 0x34 + lVar12) >> 0x20) -
                 fVar15 * fVar17;
        *(float *)(unaff_RBP + 0x18) = fVar16;
        *(int32_t *)(unaff_RBP + -0x80) = *(int32_t *)(unaff_RBP + 0x18);
        if (((1.1754944e-38 < ABS(fStack000000000000002c)) ||
            (1.1754944e-38 < ABS(fStack0000000000000030))) || (1.1754944e-38 < ABS(fVar21))) {
          fVar27 = unaff_XMM14_Da /
                   SQRT(fStack0000000000000030 * fStack0000000000000030 +
                        fStack000000000000002c * fStack000000000000002c + fVar21 * fVar21);
          fStack000000000000002c = fVar27 * fStack000000000000002c;
          fStack0000000000000030 = fVar27 * fStack0000000000000030;
          fVar27 = fVar27 * fVar21;
        }
        if (((1.1754944e-38 < ABS(fVar23)) || (1.1754944e-38 < ABS(fVar17))) ||
           (1.1754944e-38 < ABS(fVar16))) {
          fVar21 = unaff_XMM14_Da / SQRT(fVar23 * fVar23 + fVar17 * fVar17 + fVar16 * fVar16);
          fVar16 = fVar16 * fVar21;
          fVar23 = fVar21 * fVar23;
          fVar17 = fVar21 * fVar17;
        }
        else {
          fVar16 = *(float *)(unaff_RBP + -0x80);
        }
        iVar8 = iVar10 + 1 + iVar4;
        if (1 < iVar10) {
          iVar8 = iVar4;
        }
        iVar8 = *(int *)(param_4 + (int64_t)iVar8 * 4);
        uVar5 = *(uint *)(param_4 + *(int64_t *)(unaff_RBP + -0x70) * 4);
        if (iVar10 < 1) {
          iVar10 = 2;
        }
        else {
          iVar10 = iVar10 + -1;
        }
        in_R10 = *(int64_t **)(unaff_RBP + -0x78);
        uVar7 = *(uint *)(param_4 + (int64_t)(iVar4 + iVar10) * 4);
        (**(code **)(*in_R10 + 0x10))(in_R10,unaff_RBP + 0x50,(int)uVar7 >> 2,uVar7 & 3);
        (**(code **)(*in_R10 + 0x10))(in_R10,unaff_RBP + 0x60,(int)uVar5 >> 2,uVar5 & 3);
        (**(code **)(*in_R10 + 0x10))(in_R10,unaff_RBP + 0x30,iVar8 >> 2);
        fVar26 = *(float *)(unaff_RBP + 0x50) - *(float *)(unaff_RBP + 0x60);
        fVar24 = *(float *)(unaff_RBP + 0x54) - *(float *)(unaff_RBP + 100);
        fVar25 = *(float *)(unaff_RBP + 0x58) - *(float *)(unaff_RBP + 0x68);
        fVar22 = *(float *)(unaff_RBP + 0x30) - *(float *)(unaff_RBP + 0x60);
        fVar18 = *(float *)(unaff_RBP + 0x34) - *(float *)(unaff_RBP + 100);
        fVar20 = *(float *)(unaff_RBP + 0x38) - *(float *)(unaff_RBP + 0x68);
        fVar21 = fVar15 * fVar24 + fVar14 * fVar26 + fVar19 * fVar25;
        fVar26 = fVar26 - fVar14 * fVar21;
        fVar24 = fVar24 - fVar15 * fVar21;
        fVar25 = fVar25 - fVar19 * fVar21;
        if (((1.1754944e-38 < ABS(fVar26)) || (1.1754944e-38 < ABS(fVar24))) ||
           (1.1754944e-38 < ABS(fVar25))) {
          fVar21 = unaff_XMM14_Da / SQRT(fVar26 * fVar26 + fVar24 * fVar24 + fVar25 * fVar25);
          fVar26 = fVar26 * fVar21;
          fVar24 = fVar24 * fVar21;
          fVar25 = fVar25 * fVar21;
        }
        fVar21 = fVar15 * fVar18 + fVar14 * fVar22 + fVar19 * fVar20;
        fVar18 = fVar18 - fVar15 * fVar21;
        fVar22 = fVar22 - fVar14 * fVar21;
        fVar20 = fVar20 - fVar19 * fVar21;
        if (((1.1754944e-38 < ABS(fVar22)) || (1.1754944e-38 < ABS(fVar18))) ||
           (1.1754944e-38 < ABS(fVar20))) {
          fVar14 = unaff_XMM14_Da / SQRT(fVar22 * fVar22 + fVar18 * fVar18 + fVar20 * fVar20);
          fVar22 = fVar22 * fVar14;
          fVar18 = fVar18 * fVar14;
          fVar20 = fVar20 * fVar14;
        }
        fVar14 = fVar18 * fVar24 + fVar22 * fVar26 + fVar20 * fVar25;
        if (fVar14 <= -1.0) {
          fVar14 = -1.0;
        }
        if (unaff_XMM14_Da <= fVar14) {
          fVar14 = unaff_XMM14_Da;
        }
        fVar21 = (float)acosf(fVar14);
        uVar1 = *unaff_RBX;
        fVar14 = *(float *)((int64_t)unaff_RBX + 4);
        lVar12 = *(int64_t *)(unaff_RBP + 0x170);
        param_2 = *(int64_t *)(unaff_RBP + -0x68);
        *(int32_t *)(unaff_RBP + -8) = *(int32_t *)(unaff_RBX + 1);
        fVar15 = *(float *)(unaff_RBP + -8);
        in_XMM5_Da = fStack0000000000000038 + fVar21;
        fVar19 = *(float *)((int64_t)unaff_RBX + 0x14);
        *unaff_RBX = CONCAT44(fVar14 + fStack0000000000000030 * fVar21,
                              (float)uVar1 + fStack000000000000002c * fVar21);
        uVar1 = unaff_RBX[2];
        *(float *)(unaff_RBP + 0x28) = fVar15 + fVar27 * fVar21;
        *(int32_t *)(unaff_RBX + 1) = *(int32_t *)(unaff_RBP + 0x28);
        unaff_RBX[2] = CONCAT44(fVar19 + fVar17 * fVar21,(float)uVar1 + fVar23 * fVar21);
        *(float *)((int64_t)unaff_RBX + 0x1c) =
             fVar21 * *(float *)(lVar11 + 0x44 + lVar12) + *(float *)((int64_t)unaff_RBX + 0x1c);
        fVar14 = *(float *)(lVar11 + 0x40 + lVar12);
        *(float *)(unaff_RBX + 3) = *(float *)(unaff_RBX + 3) + fVar16 * fVar21;
        *(float *)((int64_t)unaff_RBX + 0xc) =
             fVar21 * fVar14 + *(float *)((int64_t)unaff_RBX + 0xc);
        fStack0000000000000038 = in_XMM5_Da;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int64_t *)(unaff_RBP + -0x60));
  }
  uVar1 = *unaff_RBX;
  fVar14 = *(float *)(unaff_RBX + 1);
  *(uint64_t *)(unaff_RBP + 0x30) = uVar1;
  *(float *)(unaff_RBP + 0x38) = fVar14;
  if (((1.1754944e-38 < ABS((float)uVar1)) || (1.1754944e-38 < ABS(*(float *)(unaff_RBP + 0x34))))
     || (1.1754944e-38 < ABS(*(float *)(unaff_RBP + 0x38)))) {
    uVar1 = *unaff_RBX;
    *(float *)(unaff_RBP + 0x38) = fVar14;
    fVar19 = (float)((uint64_t)uVar1 >> 0x20);
    *(uint64_t *)(unaff_RBP + 0x30) = uVar1;
    fVar15 = unaff_XMM14_Da /
             SQRT(fVar19 * fVar19 + *(float *)(unaff_RBP + 0x30) * *(float *)(unaff_RBP + 0x30) +
                  *(float *)(unaff_RBP + 0x38) * *(float *)(unaff_RBP + 0x38));
    *unaff_RBX = CONCAT44(fVar19 * fVar15,(float)uVar1 * fVar15);
    *(float *)(unaff_RBX + 1) = fVar14 * fVar15;
  }
  uVar1 = unaff_RBX[2];
  fVar14 = *(float *)(unaff_RBX + 3);
  *(uint64_t *)(unaff_RBP + 0x30) = uVar1;
  *(float *)(unaff_RBP + 0x38) = fVar14;
  if (((1.1754944e-38 < ABS((float)uVar1)) || (1.1754944e-38 < ABS(*(float *)(unaff_RBP + 0x34))))
     || (1.1754944e-38 < ABS(*(float *)(unaff_RBP + 0x38)))) {
    uVar1 = unaff_RBX[2];
    *(float *)(unaff_RBP + 0x38) = fVar14;
    fVar19 = (float)((uint64_t)uVar1 >> 0x20);
    *(uint64_t *)(unaff_RBP + 0x30) = uVar1;
    fVar15 = unaff_XMM14_Da /
             SQRT(fVar19 * fVar19 + *(float *)(unaff_RBP + 0x30) * *(float *)(unaff_RBP + 0x30) +
                  *(float *)(unaff_RBP + 0x38) * *(float *)(unaff_RBP + 0x38));
    unaff_RBX[2] = CONCAT44(fVar19 * fVar15,(float)uVar1 * fVar15);
    *(float *)(unaff_RBX + 3) = fVar14 * fVar15;
  }
  if (0.0 < in_XMM5_Da) {
    *(float *)((int64_t)unaff_RBX + 0x1c) =
         (unaff_XMM14_Da / in_XMM5_Da) * *(float *)((int64_t)unaff_RBX + 0x1c);
    *(float *)((int64_t)unaff_RBX + 0xc) =
         (unaff_XMM14_Da / in_XMM5_Da) * *(float *)((int64_t)unaff_RBX + 0xc);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x70) ^ (uint64_t)&stack0x00000000);
}





