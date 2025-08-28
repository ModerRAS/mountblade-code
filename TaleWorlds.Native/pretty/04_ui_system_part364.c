#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part364.c - 3 个函数

// 函数: void FUN_180864850(int64_t param_1)
void FUN_180864850(int64_t param_1)

{
  float *pfVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  int64_t lVar10;
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
  int8_t auStack_168 [32];
  uint64_t uStack_148;
  float fStack_140;
  float fStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  int32_t uStack_108;
  int32_t uStack_104;
  float fStack_f0;
  float afStack_e8 [8];
  uint64_t uStack_c8;
  
  uStack_c8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_168;
  fStack_f0 = *(float *)(param_1 + 0x2fc);
  if (*(float *)(param_1 + 0x300) == 0.0) {
    fVar19 = 1.0;
  }
  else {
    lVar10 = 0;
    fVar19 = 0.0;
    lVar7 = param_1 + 0x28;
    if (param_1 == 0) {
      lVar7 = lVar10;
    }
    FUN_1808bef80(*(uint64_t *)(param_1 + 0x2c8),lVar7,afStack_e8,0);
    fStack_128 = 0.0;
    fStack_124 = 0.0;
    iVar3 = FUN_180739640(*(uint64_t *)(*(int64_t *)(param_1 + 0x2c8) + 0x4c0),&fStack_128,
                          &fStack_124,0);
    if (iVar3 != 0) goto LAB_180865076;
    fStack_120 = *(float *)(param_1 + 0x28);
    fStack_11c = *(float *)(param_1 + 0x2c);
    fStack_118 = *(float *)(param_1 + 0x30);
    fStack_114 = *(float *)(param_1 + 0x34);
    lVar7 = *(int64_t *)(param_1 + 0x2c8);
    fStack_110 = *(float *)(param_1 + 0x38);
    fStack_10c = *(float *)(param_1 + 0x3c);
    uStack_108 = *(int32_t *)(param_1 + 0x40);
    uStack_104 = *(int32_t *)(param_1 + 0x44);
    lVar9 = (int64_t)*(int *)(lVar7 + 0x550);
    if (3 < lVar9) {
      puVar8 = (uint64_t *)(lVar7 + 0x560);
      fVar17 = (fStack_128 / fStack_124) * *(float *)(param_1 + 0x300);
      do {
        lVar4 = 0x24;
        if (*(char *)((int64_t)puVar8 + 0x34) == '\0') {
          lVar4 = -0xc;
        }
        fVar16 = fStack_120 - (float)*(uint64_t *)(lVar4 + (int64_t)puVar8);
        fVar20 = fStack_118 - *(float *)(lVar4 + 8 + (int64_t)puVar8);
        fVar18 = fStack_11c - (float)((uint64_t)*(uint64_t *)(lVar4 + (int64_t)puVar8) >> 0x20);
        fVar11 = SQRT(fVar18 * fVar18 + fVar16 * fVar16 + fVar20 * fVar20);
        if (0.0 < fVar11) {
          fVar11 = 1.0 / fVar11;
          fVar16 = fVar11 * fVar16;
          fVar18 = fVar11 * fVar18;
          fVar11 = fVar11 * fVar20;
        }
        else {
          fVar16 = 0.0;
          fVar18 = 0.0;
          fVar11 = 0.0;
        }
        fVar20 = 0.0;
        fVar12 = (fVar16 * fStack_114 + fVar18 * fStack_110 + fVar11 * fStack_10c) * fVar17 + 340.0;
        if (fVar12 != 0.0) {
          uStack_148._4_4_ = (float)((uint64_t)*puVar8 >> 0x20);
          uStack_148._0_4_ = (float)*puVar8;
          fVar20 = ((fVar16 * (float)uStack_148 + fVar18 * uStack_148._4_4_ +
                    fVar11 * *(float *)(puVar8 + 1)) * fVar17 + 340.0) / fVar12;
          if (fVar20 <= 0.0) {
            fVar20 = 0.0;
          }
        }
        pfVar1 = afStack_e8 + lVar10;
        lVar4 = 0x68;
        if (*(char *)(puVar8 + 0xf) == '\0') {
          lVar4 = 0x38;
        }
        fVar16 = fStack_120 - (float)*(uint64_t *)(lVar4 + (int64_t)puVar8);
        fVar12 = fStack_118 - *(float *)(lVar4 + 8 + (int64_t)puVar8);
        fVar18 = fStack_11c - (float)((uint64_t)*(uint64_t *)(lVar4 + (int64_t)puVar8) >> 0x20);
        fVar11 = SQRT(fVar18 * fVar18 + fVar16 * fVar16 + fVar12 * fVar12);
        if (0.0 < fVar11) {
          fVar11 = 1.0 / fVar11;
          fVar16 = fVar11 * fVar16;
          fVar18 = fVar11 * fVar18;
          fVar11 = fVar11 * fVar12;
        }
        else {
          fVar16 = 0.0;
          fVar18 = 0.0;
          fVar11 = 0.0;
        }
        fVar12 = 0.0;
        fVar13 = (fVar16 * fStack_114 + fVar18 * fStack_110 + fVar11 * fStack_10c) * fVar17 + 340.0;
        if (fVar13 != 0.0) {
          uStack_148._4_4_ = (float)((uint64_t)*(uint64_t *)((int64_t)puVar8 + 0x44) >> 0x20);
          uStack_148._0_4_ = (float)*(uint64_t *)((int64_t)puVar8 + 0x44);
          fVar12 = ((fVar16 * (float)uStack_148 + fVar18 * uStack_148._4_4_ +
                    fVar11 * *(float *)((int64_t)puVar8 + 0x4c)) * fVar17 + 340.0) / fVar13;
          if (fVar12 <= 0.0) {
            fVar12 = 0.0;
          }
        }
        lVar4 = lVar10 + 1;
        lVar5 = 0xac;
        if (*(char *)((int64_t)puVar8 + 0xbc) == '\0') {
          lVar5 = 0x7c;
        }
        fVar16 = fStack_120 - (float)*(uint64_t *)(lVar5 + (int64_t)puVar8);
        fVar13 = fStack_118 - *(float *)(lVar5 + 8 + (int64_t)puVar8);
        fVar18 = fStack_11c - (float)((uint64_t)*(uint64_t *)(lVar5 + (int64_t)puVar8) >> 0x20);
        fVar11 = SQRT(fVar18 * fVar18 + fVar16 * fVar16 + fVar13 * fVar13);
        if (0.0 < fVar11) {
          fVar11 = 1.0 / fVar11;
          fVar16 = fVar11 * fVar16;
          fVar18 = fVar11 * fVar18;
          fVar11 = fVar11 * fVar13;
        }
        else {
          fVar16 = 0.0;
          fVar18 = 0.0;
          fVar11 = 0.0;
        }
        fVar13 = 0.0;
        fVar14 = (fVar16 * fStack_114 + fVar18 * fStack_110 + fVar11 * fStack_10c) * fVar17 + 340.0;
        if (fVar14 != 0.0) {
          uStack_148._4_4_ = (float)((uint64_t)puVar8[0x11] >> 0x20);
          uStack_148._0_4_ = (float)puVar8[0x11];
          fVar13 = ((fVar16 * (float)uStack_148 + fVar18 * uStack_148._4_4_ +
                    fVar11 * *(float *)(puVar8 + 0x12)) * fVar17 + 340.0) / fVar14;
          if (fVar13 <= 0.0) {
            fVar13 = 0.0;
          }
        }
        lVar5 = lVar10 + 2;
        lVar6 = 0xf0;
        if (*(char *)(puVar8 + 0x20) == '\0') {
          lVar6 = 0xc0;
        }
        uVar2 = *(uint64_t *)((int64_t)puVar8 + 0xcc);
        fStack_130 = *(float *)(lVar6 + 8 + (int64_t)puVar8);
        fVar16 = fStack_120 - (float)*(uint64_t *)(lVar6 + (int64_t)puVar8);
        fVar14 = fStack_118 - fStack_130;
        fStack_140 = *(float *)((int64_t)puVar8 + 0xd4);
        fVar18 = fStack_11c - (float)((uint64_t)*(uint64_t *)(lVar6 + (int64_t)puVar8) >> 0x20);
        fVar11 = SQRT(fVar18 * fVar18 + fVar16 * fVar16 + fVar14 * fVar14);
        if (0.0 < fVar11) {
          fVar11 = 1.0 / fVar11;
          fVar16 = fVar11 * fVar16;
          fVar18 = fVar11 * fVar18;
          fVar11 = fVar11 * fVar14;
        }
        else {
          fVar16 = 0.0;
          fVar18 = 0.0;
          fVar11 = 0.0;
        }
        fVar14 = 0.0;
        fVar15 = (fVar16 * fStack_114 + fVar18 * fStack_110 + fVar11 * fStack_10c) * fVar17 + 340.0;
        if (fVar15 != 0.0) {
          uStack_148._4_4_ = (float)((uint64_t)uVar2 >> 0x20);
          uStack_148._0_4_ = (float)uVar2;
          fVar14 = ((fVar16 * (float)uStack_148 + fVar18 * uStack_148._4_4_ + fVar11 * fStack_140) *
                    fVar17 + 340.0) / fVar15;
          if (fVar14 <= 0.0) {
            fVar14 = 0.0;
          }
        }
        lVar6 = lVar10 + 3;
        puVar8 = puVar8 + 0x22;
        lVar10 = lVar10 + 4;
        fVar19 = fVar19 + fVar20 * *pfVar1 + fVar12 * afStack_e8[lVar4] + fVar13 * afStack_e8[lVar5]
                 + fVar14 * afStack_e8[lVar6];
        uStack_148 = uVar2;
      } while (lVar10 < lVar9 + -3);
    }
    if (lVar10 < lVar9) {
      fVar17 = (fStack_128 / fStack_124) * *(float *)(param_1 + 0x300);
      puVar8 = (uint64_t *)(lVar7 + 0x560 + lVar10 * 0x44);
      do {
        uVar2 = *puVar8;
        lVar7 = 0x24;
        if (*(char *)((int64_t)puVar8 + 0x34) == '\0') {
          lVar7 = -0xc;
        }
        fStack_130 = *(float *)(lVar7 + 8 + (int64_t)puVar8);
        fVar16 = fStack_120 - (float)*(uint64_t *)(lVar7 + (int64_t)puVar8);
        fVar20 = fStack_118 - fStack_130;
        fStack_140 = *(float *)(puVar8 + 1);
        fVar18 = fStack_11c - (float)((uint64_t)*(uint64_t *)(lVar7 + (int64_t)puVar8) >> 0x20);
        fVar11 = SQRT(fVar18 * fVar18 + fVar16 * fVar16 + fVar20 * fVar20);
        if (0.0 < fVar11) {
          fVar11 = 1.0 / fVar11;
          fVar16 = fVar11 * fVar16;
          fVar18 = fVar11 * fVar18;
          fVar11 = fVar11 * fVar20;
        }
        else {
          fVar16 = 0.0;
          fVar18 = 0.0;
          fVar11 = 0.0;
        }
        fVar20 = 0.0;
        fVar12 = (fVar16 * fStack_114 + fVar18 * fStack_110 + fVar11 * fStack_10c) * fVar17 + 340.0;
        if (fVar12 != 0.0) {
          uStack_148._4_4_ = (float)((uint64_t)uVar2 >> 0x20);
          uStack_148._0_4_ = (float)uVar2;
          fVar20 = ((fVar16 * (float)uStack_148 + fVar18 * uStack_148._4_4_ + fVar11 * fStack_140) *
                    fVar17 + 340.0) / fVar12;
          if (fVar20 <= 0.0) {
            fVar20 = 0.0;
          }
        }
        pfVar1 = afStack_e8 + lVar10;
        puVar8 = (uint64_t *)((int64_t)puVar8 + 0x44);
        lVar10 = lVar10 + 1;
        fVar19 = fVar19 + fVar20 * *pfVar1;
        uStack_148 = uVar2;
      } while (lVar10 < lVar9);
    }
  }
  *(float *)(param_1 + 0x2fc) = fVar19;
  if ((fVar19 != fStack_f0) && (*(int64_t *)(param_1 + 0x2b0) != 0)) {
    fVar19 = *(float *)(param_1 + 0x2f8) * fVar19;
    fVar17 = 0.0;
    if ((0.0 <= fVar19) && (fVar17 = fVar19, 100.0 <= fVar19)) {
      fVar17 = 100.0;
    }
    func_0x000180853cc0(*(int64_t *)(param_1 + 0x2b0),fVar17);
  }
LAB_180865076:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_c8 ^ (uint64_t)auStack_168);
}





// 函数: void FUN_18086490d(float param_1,int64_t param_2,uint64_t param_3,int64_t param_4)
void FUN_18086490d(float param_1,int64_t param_2,uint64_t param_3,int64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t in_R10;
  float fVar8;
  float fVar9;
  uint64_t in_XMM1_Qa;
  float fVar10;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_XMM6_Da;
  float fVar15;
  float fVar16;
  float unaff_XMM10_Da;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fStackX_20;
  float fStackX_24;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack0000000000000058;
  float in_stack_00000078;
  
  fVar10 = (float)((uint64_t)param_3 >> 0x20);
  fStack0000000000000048 = (float)param_3;
  fVar9 = (float)((uint64_t)in_XMM1_Qa >> 0x20);
  fStack0000000000000058 = (float)in_XMM1_Qa;
  if (3 < param_2) {
    iVar4 = (int)unaff_RBX;
    puVar7 = (uint64_t *)(param_4 + 0x560);
    fVar15 = (fStack0000000000000040 / param_1) * *(float *)(unaff_RDI + 0x300);
    do {
      lVar6 = 0x24;
      if (*(char *)((int64_t)puVar7 + 0x34) == '\0') {
        lVar6 = in_R10;
      }
      fVar12 = fStack0000000000000048 - (float)*(uint64_t *)(lVar6 + (int64_t)puVar7);
      fVar17 = in_XMM2_Dc - *(float *)(lVar6 + 8 + (int64_t)puVar7);
      fVar16 = fVar10 - (float)((uint64_t)*(uint64_t *)(lVar6 + (int64_t)puVar7) >> 0x20);
      fVar8 = SQRT(fVar16 * fVar16 + fVar12 * fVar12 + fVar17 * fVar17);
      fVar11 = unaff_XMM6_Da;
      fVar13 = unaff_XMM6_Da;
      fVar14 = unaff_XMM6_Da;
      if (unaff_XMM6_Da < fVar8) {
        fVar8 = 1.0 / fVar8;
        fVar11 = fVar8 * fVar17;
        fVar13 = fVar8 * fVar16;
        fVar14 = fVar8 * fVar12;
      }
      fVar12 = (fVar14 * in_XMM2_Dd + fVar13 * fStack0000000000000058 + fVar11 * fVar9) * fVar15 +
               340.0;
      fVar8 = unaff_XMM6_Da;
      if (fVar12 != unaff_XMM6_Da) {
        fStackX_24 = (float)((uint64_t)*puVar7 >> 0x20);
        fStackX_20 = (float)*puVar7;
        fVar8 = ((fVar14 * fStackX_20 + fVar13 * fStackX_24 + fVar11 * *(float *)(puVar7 + 1)) *
                 fVar15 + 340.0) / fVar12;
        if (fVar8 <= unaff_XMM6_Da) {
          fVar8 = unaff_XMM6_Da;
        }
      }
      lVar6 = unaff_RBX * 4;
      uVar5 = 0x68;
      if (*(char *)(puVar7 + 0xf) == '\0') {
        uVar5 = (uint64_t)(iVar4 + 0x38);
      }
      fVar16 = fStack0000000000000048 - (float)*(uint64_t *)(uVar5 + (int64_t)puVar7);
      fVar18 = in_XMM2_Dc - *(float *)(uVar5 + 8 + (int64_t)puVar7);
      fVar17 = fVar10 - (float)((uint64_t)*(uint64_t *)(uVar5 + (int64_t)puVar7) >> 0x20);
      fVar12 = SQRT(fVar17 * fVar17 + fVar16 * fVar16 + fVar18 * fVar18);
      fVar11 = unaff_XMM6_Da;
      fVar13 = unaff_XMM6_Da;
      fVar14 = unaff_XMM6_Da;
      if (unaff_XMM6_Da < fVar12) {
        fVar12 = 1.0 / fVar12;
        fVar11 = fVar12 * fVar18;
        fVar13 = fVar12 * fVar17;
        fVar14 = fVar12 * fVar16;
      }
      fVar16 = (fVar14 * in_XMM2_Dd + fVar13 * fStack0000000000000058 + fVar11 * fVar9) * fVar15 +
               340.0;
      fVar12 = unaff_XMM6_Da;
      if (fVar16 != unaff_XMM6_Da) {
        fStackX_24 = (float)((uint64_t)*(uint64_t *)((int64_t)puVar7 + 0x44) >> 0x20);
        fStackX_20 = (float)*(uint64_t *)((int64_t)puVar7 + 0x44);
        fVar12 = ((fVar14 * fStackX_20 + fVar13 * fStackX_24 +
                  fVar11 * *(float *)((int64_t)puVar7 + 0x4c)) * fVar15 + 340.0) / fVar16;
        if (fVar12 <= unaff_XMM6_Da) {
          fVar12 = unaff_XMM6_Da;
        }
      }
      lVar1 = unaff_RBX * 4;
      uVar5 = 0xac;
      if (*(char *)((int64_t)puVar7 + 0xbc) == '\0') {
        uVar5 = (uint64_t)(iVar4 + 0x7c);
      }
      fVar17 = fStack0000000000000048 - (float)*(uint64_t *)(uVar5 + (int64_t)puVar7);
      fVar19 = in_XMM2_Dc - *(float *)(uVar5 + 8 + (int64_t)puVar7);
      fVar18 = fVar10 - (float)((uint64_t)*(uint64_t *)(uVar5 + (int64_t)puVar7) >> 0x20);
      fVar16 = SQRT(fVar18 * fVar18 + fVar17 * fVar17 + fVar19 * fVar19);
      fVar11 = unaff_XMM6_Da;
      fVar13 = unaff_XMM6_Da;
      fVar14 = unaff_XMM6_Da;
      if (unaff_XMM6_Da < fVar16) {
        fVar16 = 1.0 / fVar16;
        fVar11 = fVar16 * fVar19;
        fVar13 = fVar16 * fVar18;
        fVar14 = fVar16 * fVar17;
      }
      fVar17 = (fVar14 * in_XMM2_Dd + fVar13 * fStack0000000000000058 + fVar11 * fVar9) * fVar15 +
               340.0;
      fVar16 = unaff_XMM6_Da;
      if (fVar17 != unaff_XMM6_Da) {
        fStackX_24 = (float)((uint64_t)puVar7[0x11] >> 0x20);
        fStackX_20 = (float)puVar7[0x11];
        fVar16 = ((fVar14 * fStackX_20 + fVar13 * fStackX_24 + fVar11 * *(float *)(puVar7 + 0x12)) *
                  fVar15 + 340.0) / fVar17;
        if (fVar16 <= unaff_XMM6_Da) {
          fVar16 = unaff_XMM6_Da;
        }
      }
      lVar2 = unaff_RBX * 4;
      uVar5 = 0xf0;
      if (*(char *)(puVar7 + 0x20) == '\0') {
        uVar5 = (uint64_t)(iVar4 + 0xc0);
      }
      fVar18 = fStack0000000000000048 - (float)*(uint64_t *)(uVar5 + (int64_t)puVar7);
      fVar20 = in_XMM2_Dc - *(float *)(uVar5 + 8 + (int64_t)puVar7);
      fVar19 = fVar10 - (float)((uint64_t)*(uint64_t *)(uVar5 + (int64_t)puVar7) >> 0x20);
      fVar17 = SQRT(fVar19 * fVar19 + fVar18 * fVar18 + fVar20 * fVar20);
      fVar11 = unaff_XMM6_Da;
      fVar13 = unaff_XMM6_Da;
      fVar14 = unaff_XMM6_Da;
      if (unaff_XMM6_Da < fVar17) {
        fVar17 = 1.0 / fVar17;
        fVar11 = fVar17 * fVar20;
        fVar13 = fVar17 * fVar19;
        fVar14 = fVar17 * fVar18;
      }
      fVar18 = (fVar14 * in_XMM2_Dd + fVar13 * fStack0000000000000058 + fVar11 * fVar9) * fVar15 +
               340.0;
      fVar17 = unaff_XMM6_Da;
      if (fVar18 != unaff_XMM6_Da) {
        fStackX_24 = (float)((uint64_t)*(uint64_t *)((int64_t)puVar7 + 0xcc) >> 0x20);
        fStackX_20 = (float)*(uint64_t *)((int64_t)puVar7 + 0xcc);
        fVar17 = ((fVar14 * fStackX_20 + fVar13 * fStackX_24 +
                  fVar11 * *(float *)((int64_t)puVar7 + 0xd4)) * fVar15 + 340.0) / fVar18;
        if (fVar17 <= unaff_XMM6_Da) {
          fVar17 = unaff_XMM6_Da;
        }
      }
      lVar3 = unaff_RBX * 4;
      puVar7 = puVar7 + 0x22;
      unaff_RBX = unaff_RBX + 4;
      unaff_XMM10_Da =
           unaff_XMM10_Da + fVar8 * *(float *)(unaff_RBP + -0x80 + lVar6) +
           fVar12 * *(float *)(unaff_RBP + -0x7c + lVar1) +
           fVar16 * *(float *)(unaff_RBP + -0x78 + lVar2) +
           fVar17 * *(float *)(unaff_RBP + -0x74 + lVar3);
      param_1 = fStack0000000000000044;
    } while (unaff_RBX < param_2 + -3);
  }
  if (unaff_RBX < param_2) {
    fVar15 = (fStack0000000000000040 / param_1) * *(float *)(unaff_RDI + 0x300);
    puVar7 = (uint64_t *)(param_4 + 0x560 + unaff_RBX * 0x44);
    do {
      lVar6 = 0x24;
      if (*(char *)((int64_t)puVar7 + 0x34) == '\0') {
        lVar6 = in_R10;
      }
      fVar12 = fStack0000000000000048 - (float)*(uint64_t *)(lVar6 + (int64_t)puVar7);
      fVar17 = in_XMM2_Dc - *(float *)(lVar6 + 8 + (int64_t)puVar7);
      fVar16 = fVar10 - (float)((uint64_t)*(uint64_t *)(lVar6 + (int64_t)puVar7) >> 0x20);
      fVar8 = SQRT(fVar16 * fVar16 + fVar12 * fVar12 + fVar17 * fVar17);
      fVar11 = unaff_XMM6_Da;
      fVar13 = unaff_XMM6_Da;
      fVar14 = unaff_XMM6_Da;
      if (unaff_XMM6_Da < fVar8) {
        fVar8 = 1.0 / fVar8;
        fVar11 = fVar8 * fVar17;
        fVar13 = fVar8 * fVar16;
        fVar14 = fVar8 * fVar12;
      }
      fVar12 = (fVar14 * in_XMM2_Dd + fVar13 * fStack0000000000000058 + fVar11 * fVar9) * fVar15 +
               340.0;
      fVar8 = unaff_XMM6_Da;
      if (fVar12 != unaff_XMM6_Da) {
        fStackX_24 = (float)((uint64_t)*puVar7 >> 0x20);
        fStackX_20 = (float)*puVar7;
        fVar8 = ((fVar14 * fStackX_20 + fVar13 * fStackX_24 + fVar11 * *(float *)(puVar7 + 1)) *
                 fVar15 + 340.0) / fVar12;
        if (fVar8 <= unaff_XMM6_Da) {
          fVar8 = unaff_XMM6_Da;
        }
      }
      lVar6 = unaff_RBX * 4;
      puVar7 = (uint64_t *)((int64_t)puVar7 + 0x44);
      unaff_RBX = unaff_RBX + 1;
      unaff_XMM10_Da = unaff_XMM10_Da + fVar8 * *(float *)(unaff_RBP + -0x80 + lVar6);
    } while (unaff_RBX < param_2);
  }
  *(float *)(unaff_RDI + 0x2fc) = unaff_XMM10_Da;
  if ((unaff_XMM10_Da != in_stack_00000078) && (*(int64_t *)(unaff_RDI + 0x2b0) != 0)) {
    fVar9 = *(float *)(unaff_RDI + 0x2f8) * unaff_XMM10_Da;
    if ((unaff_XMM6_Da <= fVar9) && (unaff_XMM6_Da = fVar9, 100.0 <= fVar9)) {
      unaff_XMM6_Da = 100.0;
    }
    func_0x000180853cc0(*(int64_t *)(unaff_RDI + 0x2b0),unaff_XMM6_Da);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + -0x60) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_1808649b0(float param_1,int64_t param_2,float param_3,float param_4)
void FUN_1808649b0(float param_1,int64_t param_2,float param_3,float param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t in_R9;
  int64_t in_R10;
  float fVar8;
  float fVar9;
  float in_XMM4_Da;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  float unaff_XMM7_Da;
  float fVar14;
  float fVar15;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float fVar16;
  float fVar17;
  float fVar18;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float fStackX_20;
  float fStackX_24;
  float fStack0000000000000028;
  float fStack0000000000000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float in_stack_00000050;
  float in_stack_00000078;
  
  iVar4 = (int)unaff_RBX;
  puVar7 = (uint64_t *)(in_R9 + 0x560);
  fVar14 = (unaff_XMM7_Da / param_1) * *(float *)(unaff_RDI + 0x300);
  do {
    lVar6 = 0x24;
    if (*(char *)((int64_t)puVar7 + 0x34) == '\0') {
      lVar6 = in_R10;
    }
    fVar10 = in_XMM4_Da - (float)*(uint64_t *)(lVar6 + (int64_t)puVar7);
    param_3 = param_3 - *(float *)(lVar6 + 8 + (int64_t)puVar7);
    param_4 = param_4 - (float)((uint64_t)*(uint64_t *)(lVar6 + (int64_t)puVar7) >> 0x20);
    fVar8 = SQRT(param_4 * param_4 + fVar10 * fVar10 + param_3 * param_3);
    fVar9 = unaff_XMM6_Da;
    fVar12 = unaff_XMM6_Da;
    fVar13 = unaff_XMM6_Da;
    if (unaff_XMM6_Da < fVar8) {
      fVar8 = unaff_XMM14_Da / fVar8;
      fVar9 = fVar8 * param_3;
      fVar12 = fVar8 * param_4;
      fVar13 = fVar8 * fVar10;
    }
    fVar10 = (fVar13 * unaff_XMM13_Da + fVar12 * unaff_XMM15_Da + fVar9 * unaff_XMM12_Da) * fVar14 +
             unaff_XMM9_Da;
    fVar8 = unaff_XMM6_Da;
    if (fVar10 != unaff_XMM6_Da) {
      fStackX_24 = (float)((uint64_t)*puVar7 >> 0x20);
      fStackX_20 = (float)*puVar7;
      fVar8 = ((fVar13 * fStackX_20 + fVar12 * fStackX_24 + fVar9 * *(float *)(puVar7 + 1)) * fVar14
              + unaff_XMM9_Da) / fVar10;
      if (fVar8 <= unaff_XMM6_Da) {
        fVar8 = unaff_XMM6_Da;
      }
    }
    lVar6 = unaff_RBX * 4;
    uVar5 = 0x68;
    if (*(char *)(puVar7 + 0xf) == '\0') {
      uVar5 = (uint64_t)(iVar4 + 0x38);
    }
    fVar11 = fStack0000000000000048 - (float)*(uint64_t *)(uVar5 + (int64_t)puVar7);
    fVar16 = in_stack_00000050 - *(float *)(uVar5 + 8 + (int64_t)puVar7);
    fVar15 = fStack000000000000004c -
             (float)((uint64_t)*(uint64_t *)(uVar5 + (int64_t)puVar7) >> 0x20);
    fVar10 = SQRT(fVar15 * fVar15 + fVar11 * fVar11 + fVar16 * fVar16);
    fVar9 = unaff_XMM6_Da;
    fVar12 = unaff_XMM6_Da;
    fVar13 = unaff_XMM6_Da;
    if (unaff_XMM6_Da < fVar10) {
      fVar10 = unaff_XMM14_Da / fVar10;
      fVar9 = fVar10 * fVar16;
      fVar12 = fVar10 * fVar15;
      fVar13 = fVar10 * fVar11;
    }
    fVar11 = (fVar13 * unaff_XMM13_Da + fVar12 * unaff_XMM15_Da + fVar9 * unaff_XMM12_Da) * fVar14 +
             unaff_XMM9_Da;
    fVar10 = unaff_XMM6_Da;
    if (fVar11 != unaff_XMM6_Da) {
      fStackX_24 = (float)((uint64_t)*(uint64_t *)((int64_t)puVar7 + 0x44) >> 0x20);
      fStackX_20 = (float)*(uint64_t *)((int64_t)puVar7 + 0x44);
      fVar10 = ((fVar13 * fStackX_20 + fVar12 * fStackX_24 +
                fVar9 * *(float *)((int64_t)puVar7 + 0x4c)) * fVar14 + unaff_XMM9_Da) / fVar11;
      if (fVar10 <= unaff_XMM6_Da) {
        fVar10 = unaff_XMM6_Da;
      }
    }
    lVar1 = unaff_RBX * 4;
    uVar5 = 0xac;
    if (*(char *)((int64_t)puVar7 + 0xbc) == '\0') {
      uVar5 = (uint64_t)(iVar4 + 0x7c);
    }
    fVar15 = fStack0000000000000048 - (float)*(uint64_t *)(uVar5 + (int64_t)puVar7);
    fVar17 = in_stack_00000050 - *(float *)(uVar5 + 8 + (int64_t)puVar7);
    fVar16 = fStack000000000000004c -
             (float)((uint64_t)*(uint64_t *)(uVar5 + (int64_t)puVar7) >> 0x20);
    fVar11 = SQRT(fVar16 * fVar16 + fVar15 * fVar15 + fVar17 * fVar17);
    fVar9 = unaff_XMM6_Da;
    fVar12 = unaff_XMM6_Da;
    fVar13 = unaff_XMM6_Da;
    if (unaff_XMM6_Da < fVar11) {
      fVar11 = unaff_XMM14_Da / fVar11;
      fVar9 = fVar11 * fVar17;
      fVar12 = fVar11 * fVar16;
      fVar13 = fVar11 * fVar15;
    }
    fVar15 = (fVar13 * unaff_XMM13_Da + fVar12 * unaff_XMM15_Da + fVar9 * unaff_XMM12_Da) * fVar14 +
             unaff_XMM9_Da;
    fVar11 = unaff_XMM6_Da;
    if (fVar15 != unaff_XMM6_Da) {
      fStackX_24 = (float)((uint64_t)puVar7[0x11] >> 0x20);
      fStackX_20 = (float)puVar7[0x11];
      fVar11 = ((fVar13 * fStackX_20 + fVar12 * fStackX_24 + fVar9 * *(float *)(puVar7 + 0x12)) *
                fVar14 + unaff_XMM9_Da) / fVar15;
      if (fVar11 <= unaff_XMM6_Da) {
        fVar11 = unaff_XMM6_Da;
      }
    }
    lVar2 = unaff_RBX * 4;
    uVar5 = 0xf0;
    if (*(char *)(puVar7 + 0x20) == '\0') {
      uVar5 = (uint64_t)(iVar4 + 0xc0);
    }
    fStack0000000000000038 = *(float *)(uVar5 + 8 + (int64_t)puVar7);
    fVar16 = fStack0000000000000048 - (float)*(uint64_t *)(uVar5 + (int64_t)puVar7);
    fVar18 = in_stack_00000050 - fStack0000000000000038;
    fStack0000000000000028 = *(float *)((int64_t)puVar7 + 0xd4);
    fVar17 = fStack000000000000004c -
             (float)((uint64_t)*(uint64_t *)(uVar5 + (int64_t)puVar7) >> 0x20);
    fVar15 = SQRT(fVar17 * fVar17 + fVar16 * fVar16 + fVar18 * fVar18);
    fVar9 = unaff_XMM6_Da;
    fVar12 = unaff_XMM6_Da;
    fVar13 = unaff_XMM6_Da;
    if (unaff_XMM6_Da < fVar15) {
      fVar15 = unaff_XMM14_Da / fVar15;
      fVar9 = fVar15 * fVar18;
      fVar12 = fVar15 * fVar17;
      fVar13 = fVar15 * fVar16;
    }
    fVar16 = (fVar13 * unaff_XMM13_Da + fVar12 * unaff_XMM15_Da + fVar9 * unaff_XMM12_Da) * fVar14 +
             unaff_XMM9_Da;
    fVar15 = unaff_XMM6_Da;
    if (fVar16 != unaff_XMM6_Da) {
      fStackX_24 = (float)((uint64_t)*(uint64_t *)((int64_t)puVar7 + 0xcc) >> 0x20);
      fStackX_20 = (float)*(uint64_t *)((int64_t)puVar7 + 0xcc);
      fVar15 = ((fVar13 * fStackX_20 + fVar12 * fStackX_24 + fVar9 * fStack0000000000000028) *
                fVar14 + unaff_XMM9_Da) / fVar16;
      if (fVar15 <= unaff_XMM6_Da) {
        fVar15 = unaff_XMM6_Da;
      }
    }
    lVar3 = unaff_RBX * 4;
    puVar7 = puVar7 + 0x22;
    unaff_RBX = unaff_RBX + 4;
    unaff_XMM10_Da =
         unaff_XMM10_Da + fVar8 * *(float *)(unaff_RBP + -0x80 + lVar6) +
         fVar10 * *(float *)(unaff_RBP + -0x7c + lVar1) +
         fVar11 * *(float *)(unaff_RBP + -0x78 + lVar2) +
         fVar15 * *(float *)(unaff_RBP + -0x74 + lVar3);
    param_3 = in_stack_00000050;
    param_4 = fStack000000000000004c;
    in_XMM4_Da = fStack0000000000000048;
  } while (unaff_RBX < param_2 + -3);
  if (unaff_RBX < param_2) {
    fVar14 = (fStack0000000000000040 / fStack0000000000000044) * *(float *)(unaff_RDI + 0x300);
    puVar7 = (uint64_t *)(in_R9 + 0x560 + unaff_RBX * 0x44);
    do {
      lVar6 = 0x24;
      if (*(char *)((int64_t)puVar7 + 0x34) == '\0') {
        lVar6 = in_R10;
      }
      fStack0000000000000038 = *(float *)(lVar6 + 8 + (int64_t)puVar7);
      fVar10 = fStack0000000000000048 - (float)*(uint64_t *)(lVar6 + (int64_t)puVar7);
      fVar15 = in_stack_00000050 - fStack0000000000000038;
      fStack0000000000000028 = *(float *)(puVar7 + 1);
      fVar11 = fStack000000000000004c -
               (float)((uint64_t)*(uint64_t *)(lVar6 + (int64_t)puVar7) >> 0x20);
      fVar8 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar15 * fVar15);
      fVar9 = unaff_XMM6_Da;
      fVar12 = unaff_XMM6_Da;
      fVar13 = unaff_XMM6_Da;
      if (unaff_XMM6_Da < fVar8) {
        fVar8 = unaff_XMM14_Da / fVar8;
        fVar9 = fVar8 * fVar15;
        fVar12 = fVar8 * fVar11;
        fVar13 = fVar8 * fVar10;
      }
      fVar10 = (fVar13 * unaff_XMM13_Da + fVar12 * unaff_XMM15_Da + fVar9 * unaff_XMM12_Da) * fVar14
               + unaff_XMM9_Da;
      fVar8 = unaff_XMM6_Da;
      if (fVar10 != unaff_XMM6_Da) {
        fStackX_24 = (float)((uint64_t)*puVar7 >> 0x20);
        fStackX_20 = (float)*puVar7;
        fVar8 = ((fVar13 * fStackX_20 + fVar12 * fStackX_24 + fVar9 * fStack0000000000000028) *
                 fVar14 + unaff_XMM9_Da) / fVar10;
        if (fVar8 <= unaff_XMM6_Da) {
          fVar8 = unaff_XMM6_Da;
        }
      }
      lVar6 = unaff_RBX * 4;
      puVar7 = (uint64_t *)((int64_t)puVar7 + 0x44);
      unaff_RBX = unaff_RBX + 1;
      unaff_XMM10_Da = unaff_XMM10_Da + fVar8 * *(float *)(unaff_RBP + -0x80 + lVar6);
    } while (unaff_RBX < param_2);
  }
  *(float *)(unaff_RDI + 0x2fc) = unaff_XMM10_Da;
  if ((unaff_XMM10_Da != in_stack_00000078) && (*(int64_t *)(unaff_RDI + 0x2b0) != 0)) {
    fVar14 = *(float *)(unaff_RDI + 0x2f8) * unaff_XMM10_Da;
    if (unaff_XMM6_Da <= fVar14) {
      unaff_XMM6_Da = fVar14;
      unaff_XMM6_Db = 0;
      if (100.0 <= fVar14) {
        unaff_XMM6_Da = 100.0;
        unaff_XMM6_Db = 0;
      }
    }
    func_0x000180853cc0(*(int64_t *)(unaff_RDI + 0x2b0),CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + -0x60) ^ (uint64_t)&stack0x00000000);
}





