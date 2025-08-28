#include "TaleWorlds.Native.Split.h"

// 99_part_11_part043.c - 2 个函数

// 函数: void FUN_1807aa050(void)
void FUN_1807aa050(void)

{
                    // WARNING: Subroutine does not return
  memset(0x180c2c564,0,0x5c);
}



uint64_t
FUN_1807aa2a0(int64_t param_1,int64_t param_2,int64_t param_3,uint param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int64_t lVar4;
  uint64_t uVar5;
  float *pfVar6;
  int64_t lVar7;
  int32_t *puVar8;
  uint uVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint uVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  float fVar20;
  int8_t auVar18 [16];
  float fVar21;
  float fVar22;
  float fVar25;
  float fVar26;
  int8_t auVar23 [16];
  float fVar27;
  int8_t auVar24 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  lVar14 = (int64_t)(int)param_5;
  if (param_2 != 0) {
    lVar15 = param_2;
    if (*(int *)(param_1 + 0x238) != 0) {
      lVar15 = *(int64_t *)(param_1 + 200);
    }
    fVar16 = *(float *)(param_1 + 0x230);
    if ((fVar16 != *(float *)(param_1 + 0x218)) || (*(char *)(param_1 + 0x22c) != '\0')) {
      *(float *)(param_1 + 0x218) = fVar16;
      fVar16 = (float)expf(-2.2 / ((float)*(int *)(*(int64_t *)(param_1 + 0xa8) + 0x6d0) *
                                  fVar16 * 0.001));
      *(float *)(param_1 + 0x21c) = 1.0 - fVar16;
    }
    if ((*(float *)(param_1 + 0x234) != *(float *)(param_1 + 0x220)) ||
       (*(char *)(param_1 + 0x22c) != '\0')) {
      *(float *)(param_1 + 0x220) = *(float *)(param_1 + 0x234);
      fVar16 = (float)expf();
      *(float *)(param_1 + 0x224) = 1.0 - fVar16;
    }
    uVar12 = 0;
    *(int8_t *)(param_1 + 0x22c) = 0;
    if (param_4 != 0) {
      do {
        lVar7 = 0;
        uVar5 = (uint64_t)(uVar12 * param_5);
        auVar23 = ZEXT816(0);
        lVar13 = uVar5 * 4 + param_3;
        lVar4 = param_2 + uVar5 * 4;
        lVar11 = lVar15 + uVar5 * 4;
        if ((0 < (int)param_5) && (7 < param_5)) {
          fVar16 = 0.0;
          fVar28 = 0.0;
          fVar29 = 0.0;
          fVar30 = 0.0;
          fVar31 = 0.0;
          fVar32 = 0.0;
          fVar33 = 0.0;
          fVar34 = 0.0;
          uVar9 = param_5 & 0x80000007;
          if ((int)uVar9 < 0) {
            uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
          }
          auVar18._0_4_ = (float)(int)param_5;
          auVar18._4_4_ = (float)(int)param_5;
          auVar18._8_4_ = (float)(int)param_5;
          auVar18._12_4_ = (float)(int)param_5;
          auVar23 = rcpps(auVar23,auVar18);
          fVar22 = auVar23._0_4_;
          fVar25 = auVar23._4_4_;
          fVar26 = auVar23._8_4_;
          fVar27 = auVar23._12_4_;
          fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * auVar18._0_4_;
          fVar25 = (fVar25 + fVar25) - fVar25 * fVar25 * auVar18._4_4_;
          fVar26 = (fVar26 + fVar26) - fVar26 * fVar26 * auVar18._8_4_;
          fVar27 = (fVar27 + fVar27) - fVar27 * fVar27 * auVar18._12_4_;
          do {
            pfVar6 = (float *)(lVar11 + lVar7 * 4);
            fVar17 = *pfVar6 * fVar22;
            fVar19 = pfVar6[1] * fVar25;
            fVar20 = pfVar6[2] * fVar26;
            fVar21 = pfVar6[3] * fVar27;
            fVar16 = fVar16 + fVar17 * fVar17;
            fVar28 = fVar28 + fVar19 * fVar19;
            fVar29 = fVar29 + fVar20 * fVar20;
            fVar30 = fVar30 + fVar21 * fVar21;
            pfVar6 = (float *)(lVar11 + 0x10 + lVar7 * 4);
            lVar7 = lVar7 + 8;
            fVar17 = *pfVar6 * fVar22;
            fVar19 = pfVar6[1] * fVar25;
            fVar20 = pfVar6[2] * fVar26;
            fVar21 = pfVar6[3] * fVar27;
            fVar31 = fVar31 + fVar17 * fVar17;
            fVar32 = fVar32 + fVar19 * fVar19;
            fVar33 = fVar33 + fVar20 * fVar20;
            fVar34 = fVar34 + fVar21 * fVar21;
          } while (lVar7 < (int)(param_5 - uVar9));
          fVar29 = fVar29 + fVar33;
          fVar30 = fVar30 + fVar34;
          auVar24._0_4_ = fVar29 + fVar16 + fVar31;
          auVar24._4_4_ = fVar30 + fVar28 + fVar32;
          auVar24._8_4_ = fVar29 + fVar29;
          auVar24._12_4_ = fVar30 + fVar30;
          auVar23._4_12_ = auVar24._4_12_;
          auVar23._0_4_ = auVar24._0_4_ + auVar24._4_4_;
        }
        if (lVar7 < lVar14) {
          if (3 < lVar14 - lVar7) {
            pfVar6 = (float *)(lVar11 + (lVar7 + 2) * 4);
            lVar10 = ((lVar14 - lVar7) - 4U >> 2) + 1;
            lVar7 = lVar7 + lVar10 * 4;
            fVar16 = 1.0 / (float)(int)param_5;
            do {
              pfVar1 = pfVar6 + -2;
              pfVar2 = pfVar6 + -1;
              fVar28 = *pfVar6;
              pfVar3 = pfVar6 + 1;
              pfVar6 = pfVar6 + 4;
              auVar23._0_4_ =
                   auVar23._0_4_ + fVar16 * *pfVar1 * fVar16 * *pfVar1 +
                   fVar16 * *pfVar2 * fVar16 * *pfVar2 + fVar16 * fVar28 * fVar16 * fVar28 +
                   fVar16 * *pfVar3 * fVar16 * *pfVar3;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
          if (lVar7 < lVar14) {
            do {
              fVar16 = (1.0 / (float)(int)param_5) * *(float *)(lVar11 + lVar7 * 4);
              lVar7 = lVar7 + 1;
              auVar23._0_4_ = auVar23._0_4_ + fVar16 * fVar16;
            } while (lVar7 < lVar14);
          }
        }
        fVar16 = *(float *)(param_1 + 0x228);
        if (auVar23._0_4_ <= fVar16) {
          fVar28 = *(float *)(param_1 + 0x224);
        }
        else {
          fVar28 = *(float *)(param_1 + 0x21c);
        }
        lVar11 = 0;
        *(float *)(param_1 + 0x228) = (auVar23._0_4_ - fVar16) * fVar28 + fVar16;
        if (3 < lVar14) {
          lVar7 = lVar4 - lVar13;
          lVar10 = (lVar14 - 4U >> 2) + 1;
          puVar8 = (int32_t *)(lVar13 + 4);
          lVar11 = lVar10 * 4;
          do {
            puVar8[-1] = *(int32_t *)(lVar7 + -4 + (int64_t)puVar8);
            *puVar8 = *(int32_t *)(lVar7 + (int64_t)puVar8);
            puVar8[1] = *(int32_t *)(lVar7 + 4 + (int64_t)puVar8);
            puVar8[2] = *(int32_t *)(lVar7 + 8 + (int64_t)puVar8);
            puVar8 = puVar8 + 4;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        if (lVar11 < lVar14) {
          puVar8 = (int32_t *)(lVar13 + lVar11 * 4);
          lVar11 = lVar14 - lVar11;
          do {
            *puVar8 = *(int32_t *)((int64_t)puVar8 + (lVar4 - lVar13));
            puVar8 = puVar8 + 1;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < param_4);
    }
  }
  return 0;
}



uint64_t FUN_1807aa2e3(int64_t param_1,int64_t param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int64_t lVar4;
  int64_t in_RAX;
  uint64_t uVar5;
  float *pfVar6;
  int64_t lVar7;
  int32_t *puVar8;
  uint uVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t unaff_RBX;
  uint uVar12;
  uint64_t unaff_RBP;
  int64_t lVar13;
  uint uVar14;
  int64_t unaff_RDI;
  uint64_t unaff_R12;
  int64_t unaff_R13;
  int64_t unaff_R14;
  uint unaff_R15D;
  bool in_ZF;
  float fVar15;
  float fVar16;
  float fVar18;
  float fVar19;
  int8_t auVar17 [16];
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  int8_t auVar22 [16];
  float fVar26;
  int8_t auVar23 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int unaff_XMM9_Da;
  int unaff_XMM9_Db;
  int unaff_XMM9_Dc;
  int unaff_XMM9_Dd;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x18) = unaff_R12;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM8_Dd;
  if (!in_ZF) {
    param_2 = *(int64_t *)(param_1 + 200);
  }
  fVar15 = *(float *)(param_1 + 0x230);
  if ((fVar15 != *(float *)(param_1 + 0x218)) || (*(char *)(param_1 + 0x22c) != '\0')) {
    *(float *)(param_1 + 0x218) = fVar15;
    fVar15 = (float)expf(-2.2 / ((float)*(int *)(*(int64_t *)(param_1 + 0xa8) + 0x6d0) *
                                fVar15 * 0.001));
    *(float *)(unaff_RBX + 0x21c) = 1.0 - fVar15;
  }
  if ((*(float *)(unaff_RBX + 0x234) != *(float *)(unaff_RBX + 0x220)) ||
     (*(char *)(unaff_RBX + 0x22c) != '\0')) {
    *(float *)(unaff_RBX + 0x220) = *(float *)(unaff_RBX + 0x234);
    fVar15 = (float)expf();
    *(float *)(unaff_RBX + 0x224) = 1.0 - fVar15;
  }
  uVar12 = 0;
  *(int8_t *)(unaff_RBX + 0x22c) = 0;
  if (unaff_R15D != 0) {
    do {
      lVar7 = 0;
      uVar14 = (uint)unaff_RDI;
      uVar5 = (uint64_t)(uVar12 * uVar14);
      auVar22 = ZEXT816(0);
      lVar13 = uVar5 * 4 + unaff_R13;
      lVar4 = unaff_R14 + uVar5 * 4;
      lVar11 = param_2 + uVar5 * 4;
      if ((0 < (int)uVar14) && (7 < uVar14)) {
        fVar15 = 0.0;
        fVar27 = 0.0;
        fVar28 = 0.0;
        fVar29 = 0.0;
        fVar30 = 0.0;
        fVar31 = 0.0;
        fVar32 = 0.0;
        fVar33 = 0.0;
        uVar9 = uVar14 & 0x80000007;
        if ((int)uVar9 < 0) {
          uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
        }
        auVar17._0_4_ = (float)unaff_XMM9_Da;
        auVar17._4_4_ = (float)unaff_XMM9_Db;
        auVar17._8_4_ = (float)unaff_XMM9_Dc;
        auVar17._12_4_ = (float)unaff_XMM9_Dd;
        auVar22 = rcpps(auVar22,auVar17);
        fVar21 = auVar22._0_4_;
        fVar24 = auVar22._4_4_;
        fVar25 = auVar22._8_4_;
        fVar26 = auVar22._12_4_;
        fVar21 = (fVar21 + fVar21) - fVar21 * fVar21 * auVar17._0_4_;
        fVar24 = (fVar24 + fVar24) - fVar24 * fVar24 * auVar17._4_4_;
        fVar25 = (fVar25 + fVar25) - fVar25 * fVar25 * auVar17._8_4_;
        fVar26 = (fVar26 + fVar26) - fVar26 * fVar26 * auVar17._12_4_;
        do {
          pfVar6 = (float *)(lVar11 + lVar7 * 4);
          fVar16 = *pfVar6 * fVar21;
          fVar18 = pfVar6[1] * fVar24;
          fVar19 = pfVar6[2] * fVar25;
          fVar20 = pfVar6[3] * fVar26;
          fVar15 = fVar15 + fVar16 * fVar16;
          fVar27 = fVar27 + fVar18 * fVar18;
          fVar28 = fVar28 + fVar19 * fVar19;
          fVar29 = fVar29 + fVar20 * fVar20;
          pfVar6 = (float *)(lVar11 + 0x10 + lVar7 * 4);
          lVar7 = lVar7 + 8;
          fVar16 = *pfVar6 * fVar21;
          fVar18 = pfVar6[1] * fVar24;
          fVar19 = pfVar6[2] * fVar25;
          fVar20 = pfVar6[3] * fVar26;
          fVar30 = fVar30 + fVar16 * fVar16;
          fVar31 = fVar31 + fVar18 * fVar18;
          fVar32 = fVar32 + fVar19 * fVar19;
          fVar33 = fVar33 + fVar20 * fVar20;
        } while (lVar7 < (int)(uVar14 - uVar9));
        fVar28 = fVar28 + fVar32;
        fVar29 = fVar29 + fVar33;
        auVar23._0_4_ = fVar28 + fVar15 + fVar30;
        auVar23._4_4_ = fVar29 + fVar27 + fVar31;
        auVar23._8_4_ = fVar28 + fVar28;
        auVar23._12_4_ = fVar29 + fVar29;
        auVar22._4_12_ = auVar23._4_12_;
        auVar22._0_4_ = auVar23._0_4_ + auVar23._4_4_;
      }
      if (lVar7 < unaff_RDI) {
        if (3 < unaff_RDI - lVar7) {
          pfVar6 = (float *)(lVar11 + (lVar7 + 2) * 4);
          lVar10 = ((unaff_RDI - lVar7) - 4U >> 2) + 1;
          lVar7 = lVar7 + lVar10 * 4;
          fVar15 = 1.0 / (float)(int)uVar14;
          do {
            pfVar1 = pfVar6 + -2;
            pfVar2 = pfVar6 + -1;
            fVar27 = *pfVar6;
            pfVar3 = pfVar6 + 1;
            pfVar6 = pfVar6 + 4;
            auVar22._0_4_ =
                 auVar22._0_4_ + fVar15 * *pfVar1 * fVar15 * *pfVar1 +
                 fVar15 * *pfVar2 * fVar15 * *pfVar2 + fVar15 * fVar27 * fVar15 * fVar27 +
                 fVar15 * *pfVar3 * fVar15 * *pfVar3;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        if (lVar7 < unaff_RDI) {
          do {
            fVar15 = (1.0 / (float)(int)uVar14) * *(float *)(lVar11 + lVar7 * 4);
            lVar7 = lVar7 + 1;
            auVar22._0_4_ = auVar22._0_4_ + fVar15 * fVar15;
          } while (lVar7 < unaff_RDI);
        }
      }
      fVar15 = *(float *)(unaff_RBX + 0x228);
      if (auVar22._0_4_ <= fVar15) {
        fVar27 = *(float *)(unaff_RBX + 0x224);
      }
      else {
        fVar27 = *(float *)(unaff_RBX + 0x21c);
      }
      lVar11 = 0;
      *(float *)(unaff_RBX + 0x228) = (auVar22._0_4_ - fVar15) * fVar27 + fVar15;
      if (3 < unaff_RDI) {
        lVar7 = lVar4 - lVar13;
        lVar10 = (unaff_RDI - 4U >> 2) + 1;
        puVar8 = (int32_t *)(lVar13 + 4);
        lVar11 = lVar10 * 4;
        do {
          puVar8[-1] = *(int32_t *)(lVar7 + -4 + (int64_t)puVar8);
          *puVar8 = *(int32_t *)(lVar7 + (int64_t)puVar8);
          puVar8[1] = *(int32_t *)(lVar7 + 4 + (int64_t)puVar8);
          puVar8[2] = *(int32_t *)(lVar7 + 8 + (int64_t)puVar8);
          puVar8 = puVar8 + 4;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      if (lVar11 < unaff_RDI) {
        puVar8 = (int32_t *)(lVar13 + lVar11 * 4);
        lVar11 = unaff_RDI - lVar11;
        do {
          *puVar8 = *(int32_t *)((int64_t)puVar8 + (lVar4 - lVar13));
          puVar8 = puVar8 + 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < unaff_R15D);
  }
  return 0;
}



uint64_t FUN_1807aa2ee(int64_t param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int64_t lVar4;
  int64_t in_RAX;
  uint64_t uVar5;
  float *pfVar6;
  int64_t lVar7;
  int32_t *puVar8;
  uint uVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t unaff_RBX;
  uint uVar12;
  int64_t lVar13;
  uint uVar14;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t unaff_R14;
  uint unaff_R15D;
  bool in_ZF;
  float fVar15;
  float fVar16;
  float fVar18;
  float fVar19;
  int8_t auVar17 [16];
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  int8_t auVar22 [16];
  float fVar26;
  int8_t auVar23 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int unaff_XMM9_Da;
  int unaff_XMM9_Db;
  int unaff_XMM9_Dc;
  int unaff_XMM9_Dd;
  
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM8_Dd;
  if (!in_ZF) {
    unaff_R12 = *(int64_t *)(param_1 + 200);
  }
  fVar15 = *(float *)(param_1 + 0x230);
  if ((fVar15 != *(float *)(param_1 + 0x218)) || (*(char *)(param_1 + 0x22c) != '\0')) {
    *(float *)(param_1 + 0x218) = fVar15;
    fVar15 = (float)expf(-2.2 / ((float)*(int *)(*(int64_t *)(param_1 + 0xa8) + 0x6d0) *
                                fVar15 * 0.001));
    *(float *)(unaff_RBX + 0x21c) = 1.0 - fVar15;
  }
  if ((*(float *)(unaff_RBX + 0x234) != *(float *)(unaff_RBX + 0x220)) ||
     (*(char *)(unaff_RBX + 0x22c) != '\0')) {
    *(float *)(unaff_RBX + 0x220) = *(float *)(unaff_RBX + 0x234);
    fVar15 = (float)expf();
    *(float *)(unaff_RBX + 0x224) = 1.0 - fVar15;
  }
  uVar12 = 0;
  *(int8_t *)(unaff_RBX + 0x22c) = 0;
  if (unaff_R15D != 0) {
    do {
      lVar7 = 0;
      uVar14 = (uint)unaff_RDI;
      uVar5 = (uint64_t)(uVar12 * uVar14);
      auVar22 = ZEXT816(0);
      lVar13 = uVar5 * 4 + unaff_R13;
      lVar4 = unaff_R14 + uVar5 * 4;
      lVar11 = unaff_R12 + uVar5 * 4;
      if ((0 < (int)uVar14) && (7 < uVar14)) {
        fVar15 = 0.0;
        fVar27 = 0.0;
        fVar28 = 0.0;
        fVar29 = 0.0;
        fVar30 = 0.0;
        fVar31 = 0.0;
        fVar32 = 0.0;
        fVar33 = 0.0;
        uVar9 = uVar14 & 0x80000007;
        if ((int)uVar9 < 0) {
          uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
        }
        auVar17._0_4_ = (float)unaff_XMM9_Da;
        auVar17._4_4_ = (float)unaff_XMM9_Db;
        auVar17._8_4_ = (float)unaff_XMM9_Dc;
        auVar17._12_4_ = (float)unaff_XMM9_Dd;
        auVar22 = rcpps(auVar22,auVar17);
        fVar21 = auVar22._0_4_;
        fVar24 = auVar22._4_4_;
        fVar25 = auVar22._8_4_;
        fVar26 = auVar22._12_4_;
        fVar21 = (fVar21 + fVar21) - fVar21 * fVar21 * auVar17._0_4_;
        fVar24 = (fVar24 + fVar24) - fVar24 * fVar24 * auVar17._4_4_;
        fVar25 = (fVar25 + fVar25) - fVar25 * fVar25 * auVar17._8_4_;
        fVar26 = (fVar26 + fVar26) - fVar26 * fVar26 * auVar17._12_4_;
        do {
          pfVar6 = (float *)(lVar11 + lVar7 * 4);
          fVar16 = *pfVar6 * fVar21;
          fVar18 = pfVar6[1] * fVar24;
          fVar19 = pfVar6[2] * fVar25;
          fVar20 = pfVar6[3] * fVar26;
          fVar15 = fVar15 + fVar16 * fVar16;
          fVar27 = fVar27 + fVar18 * fVar18;
          fVar28 = fVar28 + fVar19 * fVar19;
          fVar29 = fVar29 + fVar20 * fVar20;
          pfVar6 = (float *)(lVar11 + 0x10 + lVar7 * 4);
          lVar7 = lVar7 + 8;
          fVar16 = *pfVar6 * fVar21;
          fVar18 = pfVar6[1] * fVar24;
          fVar19 = pfVar6[2] * fVar25;
          fVar20 = pfVar6[3] * fVar26;
          fVar30 = fVar30 + fVar16 * fVar16;
          fVar31 = fVar31 + fVar18 * fVar18;
          fVar32 = fVar32 + fVar19 * fVar19;
          fVar33 = fVar33 + fVar20 * fVar20;
        } while (lVar7 < (int)(uVar14 - uVar9));
        fVar28 = fVar28 + fVar32;
        fVar29 = fVar29 + fVar33;
        auVar23._0_4_ = fVar28 + fVar15 + fVar30;
        auVar23._4_4_ = fVar29 + fVar27 + fVar31;
        auVar23._8_4_ = fVar28 + fVar28;
        auVar23._12_4_ = fVar29 + fVar29;
        auVar22._4_12_ = auVar23._4_12_;
        auVar22._0_4_ = auVar23._0_4_ + auVar23._4_4_;
      }
      if (lVar7 < unaff_RDI) {
        if (3 < unaff_RDI - lVar7) {
          pfVar6 = (float *)(lVar11 + (lVar7 + 2) * 4);
          lVar10 = ((unaff_RDI - lVar7) - 4U >> 2) + 1;
          lVar7 = lVar7 + lVar10 * 4;
          fVar15 = 1.0 / (float)(int)uVar14;
          do {
            pfVar1 = pfVar6 + -2;
            pfVar2 = pfVar6 + -1;
            fVar27 = *pfVar6;
            pfVar3 = pfVar6 + 1;
            pfVar6 = pfVar6 + 4;
            auVar22._0_4_ =
                 auVar22._0_4_ + fVar15 * *pfVar1 * fVar15 * *pfVar1 +
                 fVar15 * *pfVar2 * fVar15 * *pfVar2 + fVar15 * fVar27 * fVar15 * fVar27 +
                 fVar15 * *pfVar3 * fVar15 * *pfVar3;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        if (lVar7 < unaff_RDI) {
          do {
            fVar15 = (1.0 / (float)(int)uVar14) * *(float *)(lVar11 + lVar7 * 4);
            lVar7 = lVar7 + 1;
            auVar22._0_4_ = auVar22._0_4_ + fVar15 * fVar15;
          } while (lVar7 < unaff_RDI);
        }
      }
      fVar15 = *(float *)(unaff_RBX + 0x228);
      if (auVar22._0_4_ <= fVar15) {
        fVar27 = *(float *)(unaff_RBX + 0x224);
      }
      else {
        fVar27 = *(float *)(unaff_RBX + 0x21c);
      }
      lVar11 = 0;
      *(float *)(unaff_RBX + 0x228) = (auVar22._0_4_ - fVar15) * fVar27 + fVar15;
      if (3 < unaff_RDI) {
        lVar7 = lVar4 - lVar13;
        lVar10 = (unaff_RDI - 4U >> 2) + 1;
        puVar8 = (int32_t *)(lVar13 + 4);
        lVar11 = lVar10 * 4;
        do {
          puVar8[-1] = *(int32_t *)(lVar7 + -4 + (int64_t)puVar8);
          *puVar8 = *(int32_t *)(lVar7 + (int64_t)puVar8);
          puVar8[1] = *(int32_t *)(lVar7 + 4 + (int64_t)puVar8);
          puVar8[2] = *(int32_t *)(lVar7 + 8 + (int64_t)puVar8);
          puVar8 = puVar8 + 4;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      if (lVar11 < unaff_RDI) {
        puVar8 = (int32_t *)(lVar13 + lVar11 * 4);
        lVar11 = unaff_RDI - lVar11;
        do {
          *puVar8 = *(int32_t *)((int64_t)puVar8 + (lVar4 - lVar13));
          puVar8 = puVar8 + 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < unaff_R15D);
  }
  return 0;
}



uint64_t FUN_1807aa3e0(void)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int64_t lVar4;
  uint64_t uVar5;
  float *pfVar6;
  int64_t lVar7;
  int32_t *puVar8;
  uint uVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t unaff_RBX;
  uint unaff_EBP;
  int64_t lVar12;
  uint uVar13;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t unaff_R14;
  uint unaff_R15D;
  float fVar14;
  float fVar16;
  float fVar17;
  int8_t auVar15 [16];
  float fVar18;
  float fVar19;
  float fVar22;
  float fVar23;
  int8_t auVar20 [16];
  float fVar24;
  int8_t auVar21 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float unaff_XMM8_Da;
  int unaff_XMM9_Da;
  int unaff_XMM9_Db;
  int unaff_XMM9_Dc;
  int unaff_XMM9_Dd;
  
  do {
    lVar7 = 0;
    uVar13 = (uint)unaff_RDI;
    uVar5 = (uint64_t)(unaff_EBP * uVar13);
    auVar20 = ZEXT816(0);
    lVar12 = uVar5 * 4 + unaff_R13;
    lVar4 = unaff_R14 + uVar5 * 4;
    lVar11 = unaff_R12 + uVar5 * 4;
    if ((0 < (int)uVar13) && (7 < uVar13)) {
      fVar25 = 0.0;
      fVar26 = 0.0;
      fVar27 = 0.0;
      fVar28 = 0.0;
      fVar29 = 0.0;
      fVar30 = 0.0;
      fVar31 = 0.0;
      fVar32 = 0.0;
      uVar9 = uVar13 & 0x80000007;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
      }
      auVar15._0_4_ = (float)unaff_XMM9_Da;
      auVar15._4_4_ = (float)unaff_XMM9_Db;
      auVar15._8_4_ = (float)unaff_XMM9_Dc;
      auVar15._12_4_ = (float)unaff_XMM9_Dd;
      auVar20 = rcpps(auVar20,auVar15);
      fVar19 = auVar20._0_4_;
      fVar22 = auVar20._4_4_;
      fVar23 = auVar20._8_4_;
      fVar24 = auVar20._12_4_;
      fVar19 = (fVar19 + fVar19) - fVar19 * fVar19 * auVar15._0_4_;
      fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * auVar15._4_4_;
      fVar23 = (fVar23 + fVar23) - fVar23 * fVar23 * auVar15._8_4_;
      fVar24 = (fVar24 + fVar24) - fVar24 * fVar24 * auVar15._12_4_;
      do {
        pfVar6 = (float *)(lVar11 + lVar7 * 4);
        fVar14 = *pfVar6 * fVar19;
        fVar16 = pfVar6[1] * fVar22;
        fVar17 = pfVar6[2] * fVar23;
        fVar18 = pfVar6[3] * fVar24;
        fVar25 = fVar25 + fVar14 * fVar14;
        fVar26 = fVar26 + fVar16 * fVar16;
        fVar27 = fVar27 + fVar17 * fVar17;
        fVar28 = fVar28 + fVar18 * fVar18;
        pfVar6 = (float *)(lVar11 + 0x10 + lVar7 * 4);
        lVar7 = lVar7 + 8;
        fVar14 = *pfVar6 * fVar19;
        fVar16 = pfVar6[1] * fVar22;
        fVar17 = pfVar6[2] * fVar23;
        fVar18 = pfVar6[3] * fVar24;
        fVar29 = fVar29 + fVar14 * fVar14;
        fVar30 = fVar30 + fVar16 * fVar16;
        fVar31 = fVar31 + fVar17 * fVar17;
        fVar32 = fVar32 + fVar18 * fVar18;
      } while (lVar7 < (int)(uVar13 - uVar9));
      fVar27 = fVar27 + fVar31;
      fVar28 = fVar28 + fVar32;
      auVar21._0_4_ = fVar27 + fVar25 + fVar29;
      auVar21._4_4_ = fVar28 + fVar26 + fVar30;
      auVar21._8_4_ = fVar27 + fVar27;
      auVar21._12_4_ = fVar28 + fVar28;
      auVar20._4_12_ = auVar21._4_12_;
      auVar20._0_4_ = auVar21._0_4_ + auVar21._4_4_;
    }
    if (lVar7 < unaff_RDI) {
      if (3 < unaff_RDI - lVar7) {
        pfVar6 = (float *)(lVar11 + (lVar7 + 2) * 4);
        lVar10 = ((unaff_RDI - lVar7) - 4U >> 2) + 1;
        lVar7 = lVar7 + lVar10 * 4;
        fVar25 = unaff_XMM8_Da / (float)(int)uVar13;
        do {
          pfVar1 = pfVar6 + -2;
          pfVar2 = pfVar6 + -1;
          fVar26 = *pfVar6;
          pfVar3 = pfVar6 + 1;
          pfVar6 = pfVar6 + 4;
          auVar20._0_4_ =
               auVar20._0_4_ + fVar25 * *pfVar1 * fVar25 * *pfVar1 +
               fVar25 * *pfVar2 * fVar25 * *pfVar2 + fVar25 * fVar26 * fVar25 * fVar26 +
               fVar25 * *pfVar3 * fVar25 * *pfVar3;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      if (lVar7 < unaff_RDI) {
        do {
          fVar25 = (unaff_XMM8_Da / (float)(int)uVar13) * *(float *)(lVar11 + lVar7 * 4);
          lVar7 = lVar7 + 1;
          auVar20._0_4_ = auVar20._0_4_ + fVar25 * fVar25;
        } while (lVar7 < unaff_RDI);
      }
    }
    fVar25 = *(float *)(unaff_RBX + 0x228);
    if (auVar20._0_4_ <= fVar25) {
      fVar26 = *(float *)(unaff_RBX + 0x224);
    }
    else {
      fVar26 = *(float *)(unaff_RBX + 0x21c);
    }
    lVar11 = 0;
    *(float *)(unaff_RBX + 0x228) = (auVar20._0_4_ - fVar25) * fVar26 + fVar25;
    if (3 < unaff_RDI) {
      lVar7 = lVar4 - lVar12;
      lVar10 = (unaff_RDI - 4U >> 2) + 1;
      puVar8 = (int32_t *)(lVar12 + 4);
      lVar11 = lVar10 * 4;
      do {
        puVar8[-1] = *(int32_t *)(lVar7 + -4 + (int64_t)puVar8);
        *puVar8 = *(int32_t *)(lVar7 + (int64_t)puVar8);
        puVar8[1] = *(int32_t *)(lVar7 + 4 + (int64_t)puVar8);
        puVar8[2] = *(int32_t *)(lVar7 + 8 + (int64_t)puVar8);
        puVar8 = puVar8 + 4;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    if (lVar11 < unaff_RDI) {
      puVar8 = (int32_t *)(lVar12 + lVar11 * 4);
      lVar11 = unaff_RDI - lVar11;
      do {
        *puVar8 = *(int32_t *)((int64_t)puVar8 + (lVar4 - lVar12));
        puVar8 = puVar8 + 1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    unaff_EBP = unaff_EBP + 1;
  } while (unaff_EBP < unaff_R15D);
  return 0;
}






// 函数: void FUN_1807aa5fb(void)
void FUN_1807aa5fb(void)

{
  return;
}






