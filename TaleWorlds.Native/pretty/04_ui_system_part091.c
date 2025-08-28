#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part091.c - 6 个函数
// 函数: void function_71ffb4(void)
void function_71ffb4(void)
{
  float *pfVar1;
  float *pfVar2;
  int8_t auVar3 [16];
  int8_t auVar4 [16];
  double dVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  int64_t lVar13;
  int64_t lVar14;
  uint uVar15;
  float *in_RAX;
  int64_t lVar16;
  uint uVar17;
  uint uVar18;
  int64_t lVar19;
  uint64_t unaff_RBX;
  int64_t lVar20;
  int64_t unaff_RBP;
  float *unaff_RSI;
  uint64_t unaff_RDI;
  float *in_R9;
  int iVar21;
  int64_t in_R10;
  int64_t in_R11;
  int64_t lVar22;
  uint *unaff_R14;
  int64_t unaff_R15;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  uint unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float afStackX_8 [8];
  uint64_t local_var_190;
  *(uint64_t *)(in_R11 + 0x10) = unaff_RDI;
  uVar15 = unaff_R14[1];
  if (0 < (int64_t)(int)uVar15) {
    *(uint64_t *)(in_R11 + 8) = unaff_RBX;
    lVar20 = 0;
    uVar18 = *unaff_R14;
    lVar22 = (int64_t)(int)uVar18;
    do {
      fVar27 = *in_R9;
      lVar16 = 0;
      in_R9 = in_R9 + 1;
      if ((0 < (int)uVar18) && (7 < uVar18)) {
        fVar23 = 0.0;
        fVar24 = 0.0;
        fVar25 = 0.0;
        fVar26 = 0.0;
        fVar28 = 0.0;
        fVar29 = 0.0;
        fVar30 = 0.0;
        fVar31 = 0.0;
        uVar17 = uVar18 & 0x80000007;
        if ((int)uVar17 < 0) {
          uVar17 = (uVar17 - 1 | 0xfffffff8) + 1;
        }
        in_RAX = (float *)(uint64_t)(uVar18 - uVar17);
        do {
          fVar6 = *in_R9;
          pfVar7 = in_R9 + 1;
          pfVar8 = in_R9 + 2;
          pfVar9 = in_R9 + 3;
          pfVar2 = (float *)(in_R10 + lVar16 * 4);
          pfVar1 = in_R9 + 4;
          pfVar10 = in_R9 + 5;
          pfVar11 = in_R9 + 6;
          pfVar12 = in_R9 + 7;
          in_R9 = in_R9 + 8;
          fVar23 = fVar23 + *pfVar2 * fVar6;
          fVar24 = fVar24 + pfVar2[1] * *pfVar7;
          fVar25 = fVar25 + pfVar2[2] * *pfVar8;
          fVar26 = fVar26 + pfVar2[3] * *pfVar9;
          pfVar2 = (float *)(in_R10 + 0x10 + lVar16 * 4);
          lVar16 = lVar16 + 8;
          fVar28 = fVar28 + *pfVar2 * *pfVar1;
          fVar29 = fVar29 + pfVar2[1] * *pfVar10;
          fVar30 = fVar30 + pfVar2[2] * *pfVar11;
          fVar31 = fVar31 + pfVar2[3] * *pfVar12;
        } while (lVar16 < (int)(uVar18 - uVar17));
        fVar27 = fVar27 + fVar25 + fVar30 + fVar23 + fVar28 + fVar26 + fVar31 + fVar24 + fVar29;
      }
      if (lVar16 < lVar22) {
        in_RAX = (float *)(lVar22 - lVar16);
        if (3 < (int64_t)in_RAX) {
          in_RAX = (float *)(in_R10 + 8 + lVar16 * 4);
          lVar19 = ((lVar22 - lVar16) - 4U >> 2) + 1;
          lVar16 = lVar16 + lVar19 * 4;
          do {
            pfVar1 = in_RAX + -1;
            pfVar2 = in_R9 + 1;
            pfVar7 = in_RAX + -2;
            fVar23 = *in_R9;
            pfVar8 = in_RAX + 1;
            pfVar9 = in_R9 + 3;
            pfVar10 = in_R9 + 2;
            fVar24 = *in_RAX;
            in_R9 = in_R9 + 4;
            in_RAX = in_RAX + 4;
            fVar27 = *pfVar1 * *pfVar2 + *pfVar7 * fVar23 + fVar27 + *pfVar10 * fVar24 +
                     *pfVar8 * *pfVar9;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
        }
        for (; lVar16 < lVar22; lVar16 = lVar16 + 1) {
          fVar23 = *in_R9;
          in_R9 = in_R9 + 1;
          fVar27 = fVar27 + *(float *)(in_R10 + lVar16 * 4) * fVar23;
        }
      }
      fVar23 = unaff_XMM6_Da;
      if ((fVar27 < unaff_XMM8_Da) && (fVar23 = unaff_XMM7_Da, unaff_XMM9_Da < fVar27)) {
        fVar23 = unaff_XMM6_Da;
        if (fVar27 < unaff_XMM10_Da) {
          fVar23 = unaff_XMM7_Da;
        }
        fVar24 = (float)((uint)fVar27 & unaff_XMM11_Da) * unaff_XMM12_Da + unaff_XMM13_Da;
        dVar5 = (double)fVar24;
        lVar16 = (int64_t)fVar24;
        if ((lVar16 != unaff_RBP) && ((double)lVar16 != dVar5)) {
          auVar4._8_4_ = SUB84(dVar5,0);
          auVar4._0_8_ = dVar5;
          auVar4._12_4_ = (int)((uint64_t)dVar5 >> 0x20);
          uVar17 = movmskpd((int)in_RAX,auVar4);
          dVar5 = (double)(int64_t)(lVar16 - (uint64_t)(uVar17 & 1));
        }
        in_RAX = (float *)(int64_t)(int)dVar5;
        fVar24 = *(float *)(unaff_R15 + (int64_t)in_RAX * 4);
        fVar27 = (float)((uint)fVar27 & unaff_XMM11_Da) - (float)(int)dVar5 * unaff_XMM14_Da;
        fVar23 = ((unaff_XMM6_Da - fVar24 * fVar24) * fVar27 * (unaff_XMM6_Da - fVar24 * fVar27) +
                 fVar24) * fVar23;
      }
      afStackX_8[lVar20 + -2] = fVar23;
      lVar20 = lVar20 + 1;
    } while (lVar20 < (int)uVar15);
  }
  iVar21 = 0;
  if (0 < (int)unaff_R14[2]) {
    do {
      fVar27 = *in_R9;
      lVar20 = 0;
      uVar15 = unaff_R14[1];
      lVar22 = (int64_t)(int)uVar15;
      in_R9 = in_R9 + 1;
      if ((0 < (int)uVar15) && (7 < uVar15)) {
        fVar23 = 0.0;
        fVar24 = 0.0;
        fVar25 = 0.0;
        fVar26 = 0.0;
        fVar28 = 0.0;
        fVar29 = 0.0;
        fVar30 = 0.0;
        fVar31 = 0.0;
        uVar18 = uVar15 & 0x80000007;
        if ((int)uVar18 < 0) {
          uVar18 = (uVar18 - 1 | 0xfffffff8) + 1;
        }
        in_RAX = (float *)(uint64_t)(uVar15 - uVar18);
        do {
          fVar6 = *in_R9;
          pfVar7 = in_R9 + 1;
          pfVar8 = in_R9 + 2;
          pfVar9 = in_R9 + 3;
          pfVar2 = afStackX_8 + lVar20 + -2;
          pfVar1 = in_R9 + 4;
          pfVar10 = in_R9 + 5;
          pfVar11 = in_R9 + 6;
          pfVar12 = in_R9 + 7;
          in_R9 = in_R9 + 8;
          fVar23 = fVar23 + *pfVar2 * fVar6;
          fVar24 = fVar24 + pfVar2[1] * *pfVar7;
          fVar25 = fVar25 + pfVar2[2] * *pfVar8;
          fVar26 = fVar26 + pfVar2[3] * *pfVar9;
          lVar16 = lVar20 + 2;
          lVar19 = lVar20 + 3;
          lVar13 = lVar20 + 4;
          lVar14 = lVar20 + 5;
          lVar20 = lVar20 + 8;
          fVar28 = fVar28 + afStackX_8[lVar16] * *pfVar1;
          fVar29 = fVar29 + afStackX_8[lVar19] * *pfVar10;
          fVar30 = fVar30 + afStackX_8[lVar13] * *pfVar11;
          fVar31 = fVar31 + afStackX_8[lVar14] * *pfVar12;
        } while (lVar20 < (int)(uVar15 - uVar18));
        fVar27 = fVar27 + fVar25 + fVar30 + fVar23 + fVar28 + fVar26 + fVar31 + fVar24 + fVar29;
      }
      if (lVar20 < lVar22) {
        in_RAX = (float *)(lVar22 - lVar20);
        if (3 < (int64_t)in_RAX) {
          in_RAX = (float *)(lVar22 + -3);
          do {
            lVar16 = lVar20 + -1;
            pfVar1 = in_R9 + 1;
            lVar19 = lVar20 + -2;
            fVar23 = *in_R9;
            lVar13 = lVar20 + 1;
            pfVar2 = in_R9 + 3;
            pfVar8 = afStackX_8 + lVar20;
            pfVar7 = in_R9 + 2;
            lVar20 = lVar20 + 4;
            in_R9 = in_R9 + 4;
            fVar27 = afStackX_8[lVar16] * *pfVar1 + afStackX_8[lVar19] * fVar23 + fVar27 +
                     *pfVar8 * *pfVar7 + afStackX_8[lVar13] * *pfVar2;
          } while (lVar20 < (int64_t)in_RAX);
        }
        for (; lVar20 < lVar22; lVar20 = lVar20 + 1) {
          fVar23 = *in_R9;
          in_R9 = in_R9 + 1;
          fVar27 = fVar27 + afStackX_8[lVar20 + -2] * fVar23;
        }
      }
      fVar23 = unaff_XMM6_Da;
      if ((fVar27 < unaff_XMM8_Da) && (fVar23 = unaff_XMM7_Da, unaff_XMM9_Da < fVar27)) {
        fVar23 = unaff_XMM6_Da;
        if (fVar27 < unaff_XMM10_Da) {
          fVar23 = unaff_XMM7_Da;
        }
        fVar24 = (float)((uint)fVar27 & unaff_XMM11_Da) * unaff_XMM12_Da + unaff_XMM13_Da;
        dVar5 = (double)fVar24;
        lVar20 = (int64_t)fVar24;
        if ((lVar20 != unaff_RBP) && ((double)lVar20 != dVar5)) {
          auVar3._8_4_ = SUB84(dVar5,0);
          auVar3._0_8_ = dVar5;
          auVar3._12_4_ = (int)((uint64_t)dVar5 >> 0x20);
          uVar15 = movmskpd((int)in_RAX,auVar3);
          dVar5 = (double)(int64_t)(lVar20 - (uint64_t)(uVar15 & 1));
        }
        in_RAX = (float *)(int64_t)(int)dVar5;
        fVar24 = *(float *)(unaff_R15 + (int64_t)in_RAX * 4);
        fVar27 = (float)((uint)fVar27 & unaff_XMM11_Da) - (float)(int)dVar5 * unaff_XMM14_Da;
        fVar23 = ((unaff_XMM6_Da - fVar24 * fVar24) * fVar27 * (unaff_XMM6_Da - fVar24 * fVar27) +
                 fVar24) * fVar23;
      }
      *unaff_RSI = fVar23;
      iVar21 = iVar21 + 1;
      unaff_RSI = unaff_RSI + 1;
    } while (iVar21 < (int)unaff_R14[2]);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_190 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_71ffc5(void)
void function_71ffc5(void)
{
  float *pfVar1;
  float *pfVar2;
  int8_t auVar3 [16];
  int8_t auVar4 [16];
  double dVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  int64_t lVar13;
  int64_t lVar14;
  uint uVar15;
  float *in_RAX;
  int64_t lVar16;
  uint uVar17;
  int64_t lVar18;
  uint64_t unaff_RBX;
  int64_t lVar19;
  int64_t unaff_RBP;
  float *unaff_RSI;
  int64_t unaff_RDI;
  float *in_R9;
  int iVar20;
  int64_t in_R10;
  int64_t in_R11;
  int64_t lVar21;
  uint *unaff_R14;
  int64_t unaff_R15;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  uint unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float afStackX_8 [8];
  uint64_t local_var_190;
  *(uint64_t *)(in_R11 + 8) = unaff_RBX;
  lVar19 = 0;
  uVar15 = *unaff_R14;
  lVar21 = (int64_t)(int)uVar15;
  do {
    fVar26 = *in_R9;
    lVar16 = 0;
    in_R9 = in_R9 + 1;
    if ((0 < (int)uVar15) && (7 < uVar15)) {
      fVar22 = 0.0;
      fVar23 = 0.0;
      fVar24 = 0.0;
      fVar25 = 0.0;
      fVar27 = 0.0;
      fVar28 = 0.0;
      fVar29 = 0.0;
      fVar30 = 0.0;
      uVar17 = uVar15 & 0x80000007;
      if ((int)uVar17 < 0) {
        uVar17 = (uVar17 - 1 | 0xfffffff8) + 1;
      }
      in_RAX = (float *)(uint64_t)(uVar15 - uVar17);
      do {
        fVar6 = *in_R9;
        pfVar7 = in_R9 + 1;
        pfVar8 = in_R9 + 2;
        pfVar9 = in_R9 + 3;
        pfVar2 = (float *)(in_R10 + lVar16 * 4);
        pfVar1 = in_R9 + 4;
        pfVar10 = in_R9 + 5;
        pfVar11 = in_R9 + 6;
        pfVar12 = in_R9 + 7;
        in_R9 = in_R9 + 8;
        fVar22 = fVar22 + *pfVar2 * fVar6;
        fVar23 = fVar23 + pfVar2[1] * *pfVar7;
        fVar24 = fVar24 + pfVar2[2] * *pfVar8;
        fVar25 = fVar25 + pfVar2[3] * *pfVar9;
        pfVar2 = (float *)(in_R10 + 0x10 + lVar16 * 4);
        lVar16 = lVar16 + 8;
        fVar27 = fVar27 + *pfVar2 * *pfVar1;
        fVar28 = fVar28 + pfVar2[1] * *pfVar10;
        fVar29 = fVar29 + pfVar2[2] * *pfVar11;
        fVar30 = fVar30 + pfVar2[3] * *pfVar12;
      } while (lVar16 < (int)(uVar15 - uVar17));
      fVar26 = fVar26 + fVar24 + fVar29 + fVar22 + fVar27 + fVar25 + fVar30 + fVar23 + fVar28;
    }
    if (lVar16 < lVar21) {
      in_RAX = (float *)(lVar21 - lVar16);
      if (3 < (int64_t)in_RAX) {
        in_RAX = (float *)(in_R10 + 8 + lVar16 * 4);
        lVar18 = ((lVar21 - lVar16) - 4U >> 2) + 1;
        lVar16 = lVar16 + lVar18 * 4;
        do {
          pfVar1 = in_RAX + -1;
          pfVar2 = in_R9 + 1;
          pfVar7 = in_RAX + -2;
          fVar22 = *in_R9;
          pfVar8 = in_RAX + 1;
          pfVar9 = in_R9 + 3;
          pfVar10 = in_R9 + 2;
          fVar23 = *in_RAX;
          in_R9 = in_R9 + 4;
          in_RAX = in_RAX + 4;
          fVar26 = *pfVar1 * *pfVar2 + *pfVar7 * fVar22 + fVar26 + *pfVar10 * fVar23 +
                   *pfVar8 * *pfVar9;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
      for (; lVar16 < lVar21; lVar16 = lVar16 + 1) {
        fVar22 = *in_R9;
        in_R9 = in_R9 + 1;
        fVar26 = fVar26 + *(float *)(in_R10 + lVar16 * 4) * fVar22;
      }
    }
    fVar22 = unaff_XMM6_Da;
    if ((fVar26 < unaff_XMM8_Da) && (fVar22 = unaff_XMM7_Da, unaff_XMM9_Da < fVar26)) {
      fVar22 = unaff_XMM6_Da;
      if (fVar26 < unaff_XMM10_Da) {
        fVar22 = unaff_XMM7_Da;
      }
      fVar23 = (float)((uint)fVar26 & unaff_XMM11_Da) * unaff_XMM12_Da + unaff_XMM13_Da;
      dVar5 = (double)fVar23;
      lVar16 = (int64_t)fVar23;
      if ((lVar16 != unaff_RBP) && ((double)lVar16 != dVar5)) {
        auVar4._8_4_ = SUB84(dVar5,0);
        auVar4._0_8_ = dVar5;
        auVar4._12_4_ = (int)((uint64_t)dVar5 >> 0x20);
        uVar17 = movmskpd((int)in_RAX,auVar4);
        dVar5 = (double)(int64_t)(lVar16 - (uint64_t)(uVar17 & 1));
      }
      in_RAX = (float *)(int64_t)(int)dVar5;
      fVar23 = *(float *)(unaff_R15 + (int64_t)in_RAX * 4);
      fVar26 = (float)((uint)fVar26 & unaff_XMM11_Da) - (float)(int)dVar5 * unaff_XMM14_Da;
      fVar22 = ((unaff_XMM6_Da - fVar23 * fVar23) * fVar26 * (unaff_XMM6_Da - fVar23 * fVar26) +
               fVar23) * fVar22;
    }
    afStackX_8[lVar19 + -2] = fVar22;
    lVar19 = lVar19 + 1;
  } while (lVar19 < unaff_RDI);
  iVar20 = 0;
  if (0 < (int)unaff_R14[2]) {
    do {
      fVar26 = *in_R9;
      lVar19 = 0;
      uVar15 = unaff_R14[1];
      lVar21 = (int64_t)(int)uVar15;
      in_R9 = in_R9 + 1;
      if ((0 < (int)uVar15) && (7 < uVar15)) {
        fVar22 = 0.0;
        fVar23 = 0.0;
        fVar24 = 0.0;
        fVar25 = 0.0;
        fVar27 = 0.0;
        fVar28 = 0.0;
        fVar29 = 0.0;
        fVar30 = 0.0;
        uVar17 = uVar15 & 0x80000007;
        if ((int)uVar17 < 0) {
          uVar17 = (uVar17 - 1 | 0xfffffff8) + 1;
        }
        in_RAX = (float *)(uint64_t)(uVar15 - uVar17);
        do {
          fVar6 = *in_R9;
          pfVar7 = in_R9 + 1;
          pfVar8 = in_R9 + 2;
          pfVar9 = in_R9 + 3;
          pfVar2 = afStackX_8 + lVar19 + -2;
          pfVar1 = in_R9 + 4;
          pfVar10 = in_R9 + 5;
          pfVar11 = in_R9 + 6;
          pfVar12 = in_R9 + 7;
          in_R9 = in_R9 + 8;
          fVar22 = fVar22 + *pfVar2 * fVar6;
          fVar23 = fVar23 + pfVar2[1] * *pfVar7;
          fVar24 = fVar24 + pfVar2[2] * *pfVar8;
          fVar25 = fVar25 + pfVar2[3] * *pfVar9;
          lVar16 = lVar19 + 2;
          lVar18 = lVar19 + 3;
          lVar13 = lVar19 + 4;
          lVar14 = lVar19 + 5;
          lVar19 = lVar19 + 8;
          fVar27 = fVar27 + afStackX_8[lVar16] * *pfVar1;
          fVar28 = fVar28 + afStackX_8[lVar18] * *pfVar10;
          fVar29 = fVar29 + afStackX_8[lVar13] * *pfVar11;
          fVar30 = fVar30 + afStackX_8[lVar14] * *pfVar12;
        } while (lVar19 < (int)(uVar15 - uVar17));
        fVar26 = fVar26 + fVar24 + fVar29 + fVar22 + fVar27 + fVar25 + fVar30 + fVar23 + fVar28;
      }
      if (lVar19 < lVar21) {
        in_RAX = (float *)(lVar21 - lVar19);
        if (3 < (int64_t)in_RAX) {
          in_RAX = (float *)(lVar21 + -3);
          do {
            lVar16 = lVar19 + -1;
            pfVar1 = in_R9 + 1;
            lVar18 = lVar19 + -2;
            fVar22 = *in_R9;
            lVar13 = lVar19 + 1;
            pfVar2 = in_R9 + 3;
            pfVar8 = afStackX_8 + lVar19;
            pfVar7 = in_R9 + 2;
            lVar19 = lVar19 + 4;
            in_R9 = in_R9 + 4;
            fVar26 = afStackX_8[lVar16] * *pfVar1 + afStackX_8[lVar18] * fVar22 + fVar26 +
                     *pfVar8 * *pfVar7 + afStackX_8[lVar13] * *pfVar2;
          } while (lVar19 < (int64_t)in_RAX);
        }
        for (; lVar19 < lVar21; lVar19 = lVar19 + 1) {
          fVar22 = *in_R9;
          in_R9 = in_R9 + 1;
          fVar26 = fVar26 + afStackX_8[lVar19 + -2] * fVar22;
        }
      }
      fVar22 = unaff_XMM6_Da;
      if ((fVar26 < unaff_XMM8_Da) && (fVar22 = unaff_XMM7_Da, unaff_XMM9_Da < fVar26)) {
        fVar22 = unaff_XMM6_Da;
        if (fVar26 < unaff_XMM10_Da) {
          fVar22 = unaff_XMM7_Da;
        }
        fVar23 = (float)((uint)fVar26 & unaff_XMM11_Da) * unaff_XMM12_Da + unaff_XMM13_Da;
        dVar5 = (double)fVar23;
        lVar19 = (int64_t)fVar23;
        if ((lVar19 != unaff_RBP) && ((double)lVar19 != dVar5)) {
          auVar3._8_4_ = SUB84(dVar5,0);
          auVar3._0_8_ = dVar5;
          auVar3._12_4_ = (int)((uint64_t)dVar5 >> 0x20);
          uVar15 = movmskpd((int)in_RAX,auVar3);
          dVar5 = (double)(int64_t)(lVar19 - (uint64_t)(uVar15 & 1));
        }
        in_RAX = (float *)(int64_t)(int)dVar5;
        fVar23 = *(float *)(unaff_R15 + (int64_t)in_RAX * 4);
        fVar26 = (float)((uint)fVar26 & unaff_XMM11_Da) - (float)(int)dVar5 * unaff_XMM14_Da;
        fVar22 = ((unaff_XMM6_Da - fVar23 * fVar23) * fVar26 * (unaff_XMM6_Da - fVar23 * fVar26) +
                 fVar23) * fVar22;
      }
      *unaff_RSI = fVar22;
      iVar20 = iVar20 + 1;
      unaff_RSI = unaff_RSI + 1;
    } while (iVar20 < (int)unaff_R14[2]);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_190 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_7201ce(void)
void function_7201ce(void)
{
  float *pfVar1;
  float *pfVar2;
  int8_t auVar3 [16];
  double dVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  uint uVar16;
  uint64_t in_RAX;
  int64_t lVar17;
  uint uVar18;
  int64_t unaff_RBP;
  float *unaff_RSI;
  int64_t lVar19;
  float *in_R9;
  int iVar20;
  int64_t unaff_R14;
  int64_t unaff_R15;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  uint unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float afStackX_8 [8];
  uint64_t local_var_190;
  iVar20 = 0;
  if (0 < *(int *)(unaff_R14 + 8)) {
    do {
      fVar25 = *in_R9;
      lVar17 = 0;
      uVar16 = *(uint *)(unaff_R14 + 4);
      lVar19 = (int64_t)(int)uVar16;
      in_R9 = in_R9 + 1;
      if ((0 < (int)uVar16) && (7 < uVar16)) {
        fVar21 = 0.0;
        fVar22 = 0.0;
        fVar23 = 0.0;
        fVar24 = 0.0;
        fVar26 = 0.0;
        fVar27 = 0.0;
        fVar28 = 0.0;
        fVar29 = 0.0;
        uVar18 = uVar16 & 0x80000007;
        if ((int)uVar18 < 0) {
          uVar18 = (uVar18 - 1 | 0xfffffff8) + 1;
        }
        in_RAX = (uint64_t)(uVar16 - uVar18);
        do {
          fVar5 = *in_R9;
          pfVar6 = in_R9 + 1;
          pfVar7 = in_R9 + 2;
          pfVar8 = in_R9 + 3;
          pfVar2 = afStackX_8 + lVar17 + -2;
          pfVar1 = in_R9 + 4;
          pfVar9 = in_R9 + 5;
          pfVar10 = in_R9 + 6;
          pfVar11 = in_R9 + 7;
          in_R9 = in_R9 + 8;
          fVar21 = fVar21 + *pfVar2 * fVar5;
          fVar22 = fVar22 + pfVar2[1] * *pfVar6;
          fVar23 = fVar23 + pfVar2[2] * *pfVar7;
          fVar24 = fVar24 + pfVar2[3] * *pfVar8;
          lVar12 = lVar17 + 2;
          lVar13 = lVar17 + 3;
          lVar14 = lVar17 + 4;
          lVar15 = lVar17 + 5;
          lVar17 = lVar17 + 8;
          fVar26 = fVar26 + afStackX_8[lVar12] * *pfVar1;
          fVar27 = fVar27 + afStackX_8[lVar13] * *pfVar9;
          fVar28 = fVar28 + afStackX_8[lVar14] * *pfVar10;
          fVar29 = fVar29 + afStackX_8[lVar15] * *pfVar11;
        } while (lVar17 < (int)(uVar16 - uVar18));
        fVar25 = fVar25 + fVar23 + fVar28 + fVar21 + fVar26 + fVar24 + fVar29 + fVar22 + fVar27;
      }
      if (lVar17 < lVar19) {
        in_RAX = lVar19 - lVar17;
        if (3 < (int64_t)in_RAX) {
          in_RAX = lVar19 - 3;
          do {
            lVar12 = lVar17 + -1;
            pfVar1 = in_R9 + 1;
            lVar13 = lVar17 + -2;
            fVar21 = *in_R9;
            lVar14 = lVar17 + 1;
            pfVar2 = in_R9 + 3;
            pfVar7 = afStackX_8 + lVar17;
            pfVar6 = in_R9 + 2;
            lVar17 = lVar17 + 4;
            in_R9 = in_R9 + 4;
            fVar25 = afStackX_8[lVar12] * *pfVar1 + afStackX_8[lVar13] * fVar21 + fVar25 +
                     *pfVar7 * *pfVar6 + afStackX_8[lVar14] * *pfVar2;
          } while (lVar17 < (int64_t)in_RAX);
        }
        for (; lVar17 < lVar19; lVar17 = lVar17 + 1) {
          fVar21 = *in_R9;
          in_R9 = in_R9 + 1;
          fVar25 = fVar25 + afStackX_8[lVar17 + -2] * fVar21;
        }
      }
      fVar21 = unaff_XMM6_Da;
      if ((fVar25 < unaff_XMM8_Da) && (fVar21 = unaff_XMM7_Da, unaff_XMM9_Da < fVar25)) {
        fVar21 = unaff_XMM6_Da;
        if (fVar25 < unaff_XMM10_Da) {
          fVar21 = unaff_XMM7_Da;
        }
        fVar22 = (float)((uint)fVar25 & unaff_XMM11_Da) * unaff_XMM12_Da + unaff_XMM13_Da;
        dVar4 = (double)fVar22;
        lVar17 = (int64_t)fVar22;
        if ((lVar17 != unaff_RBP) && ((double)lVar17 != dVar4)) {
          auVar3._8_4_ = SUB84(dVar4,0);
          auVar3._0_8_ = dVar4;
          auVar3._12_4_ = (int)((uint64_t)dVar4 >> 0x20);
          uVar16 = movmskpd((int)in_RAX,auVar3);
          dVar4 = (double)(int64_t)(lVar17 - (uint64_t)(uVar16 & 1));
        }
        in_RAX = (uint64_t)(int)dVar4;
        fVar22 = *(float *)(unaff_R15 + in_RAX * 4);
        fVar25 = (float)((uint)fVar25 & unaff_XMM11_Da) - (float)(int)dVar4 * unaff_XMM14_Da;
        fVar21 = ((unaff_XMM6_Da - fVar22 * fVar22) * fVar25 * (unaff_XMM6_Da - fVar22 * fVar25) +
                 fVar22) * fVar21;
      }
      *unaff_RSI = fVar21;
      iVar20 = iVar20 + 1;
      unaff_RSI = unaff_RSI + 1;
    } while (iVar20 < *(int *)(unaff_R14 + 8));
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_190 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_7201f0(void)
void function_7201f0(void)
{
  float *pfVar1;
  float *pfVar2;
  int8_t auVar3 [16];
  double dVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  uint uVar16;
  uint64_t in_RAX;
  int64_t lVar17;
  uint uVar18;
  int64_t unaff_RBP;
  float *unaff_RSI;
  int64_t lVar19;
  float *in_R9;
  int in_R10D;
  int64_t unaff_R14;
  int64_t unaff_R15;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  uint unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float afStackX_8 [8];
  uint64_t local_var_190;
  do {
    fVar24 = *in_R9;
    lVar17 = 0;
    uVar16 = *(uint *)(unaff_R14 + 4);
    lVar19 = (int64_t)(int)uVar16;
    in_R9 = in_R9 + 1;
    if ((0 < (int)uVar16) && (7 < uVar16)) {
      fVar20 = 0.0;
      fVar21 = 0.0;
      fVar22 = 0.0;
      fVar23 = 0.0;
      fVar25 = 0.0;
      fVar26 = 0.0;
      fVar27 = 0.0;
      fVar28 = 0.0;
      uVar18 = uVar16 & 0x80000007;
      if ((int)uVar18 < 0) {
        uVar18 = (uVar18 - 1 | 0xfffffff8) + 1;
      }
      in_RAX = (uint64_t)(uVar16 - uVar18);
      do {
        fVar5 = *in_R9;
        pfVar6 = in_R9 + 1;
        pfVar7 = in_R9 + 2;
        pfVar8 = in_R9 + 3;
        pfVar2 = afStackX_8 + lVar17 + -2;
        pfVar1 = in_R9 + 4;
        pfVar9 = in_R9 + 5;
        pfVar10 = in_R9 + 6;
        pfVar11 = in_R9 + 7;
        in_R9 = in_R9 + 8;
        fVar20 = fVar20 + *pfVar2 * fVar5;
        fVar21 = fVar21 + pfVar2[1] * *pfVar6;
        fVar22 = fVar22 + pfVar2[2] * *pfVar7;
        fVar23 = fVar23 + pfVar2[3] * *pfVar8;
        lVar12 = lVar17 + 2;
        lVar13 = lVar17 + 3;
        lVar14 = lVar17 + 4;
        lVar15 = lVar17 + 5;
        lVar17 = lVar17 + 8;
        fVar25 = fVar25 + afStackX_8[lVar12] * *pfVar1;
        fVar26 = fVar26 + afStackX_8[lVar13] * *pfVar9;
        fVar27 = fVar27 + afStackX_8[lVar14] * *pfVar10;
        fVar28 = fVar28 + afStackX_8[lVar15] * *pfVar11;
      } while (lVar17 < (int)(uVar16 - uVar18));
      fVar24 = fVar24 + fVar22 + fVar27 + fVar20 + fVar25 + fVar23 + fVar28 + fVar21 + fVar26;
    }
    if (lVar17 < lVar19) {
      in_RAX = lVar19 - lVar17;
      if (3 < (int64_t)in_RAX) {
        in_RAX = lVar19 - 3;
        do {
          lVar12 = lVar17 + -1;
          pfVar1 = in_R9 + 1;
          lVar13 = lVar17 + -2;
          fVar20 = *in_R9;
          lVar14 = lVar17 + 1;
          pfVar2 = in_R9 + 3;
          pfVar7 = afStackX_8 + lVar17;
          pfVar6 = in_R9 + 2;
          lVar17 = lVar17 + 4;
          in_R9 = in_R9 + 4;
          fVar24 = afStackX_8[lVar12] * *pfVar1 + afStackX_8[lVar13] * fVar20 + fVar24 +
                   *pfVar7 * *pfVar6 + afStackX_8[lVar14] * *pfVar2;
        } while (lVar17 < (int64_t)in_RAX);
      }
      for (; lVar17 < lVar19; lVar17 = lVar17 + 1) {
        fVar20 = *in_R9;
        in_R9 = in_R9 + 1;
        fVar24 = fVar24 + afStackX_8[lVar17 + -2] * fVar20;
      }
    }
    fVar20 = unaff_XMM6_Da;
    if ((fVar24 < unaff_XMM8_Da) && (fVar20 = unaff_XMM7_Da, unaff_XMM9_Da < fVar24)) {
      fVar20 = unaff_XMM6_Da;
      if (fVar24 < unaff_XMM10_Da) {
        fVar20 = unaff_XMM7_Da;
      }
      fVar21 = (float)((uint)fVar24 & unaff_XMM11_Da) * unaff_XMM12_Da + unaff_XMM13_Da;
      dVar4 = (double)fVar21;
      lVar17 = (int64_t)fVar21;
      if ((lVar17 != unaff_RBP) && ((double)lVar17 != dVar4)) {
        auVar3._8_4_ = SUB84(dVar4,0);
        auVar3._0_8_ = dVar4;
        auVar3._12_4_ = (int)((uint64_t)dVar4 >> 0x20);
        uVar16 = movmskpd((int)in_RAX,auVar3);
        dVar4 = (double)(int64_t)(lVar17 - (uint64_t)(uVar16 & 1));
      }
      in_RAX = (uint64_t)(int)dVar4;
      fVar21 = *(float *)(unaff_R15 + in_RAX * 4);
      fVar24 = (float)((uint)fVar24 & unaff_XMM11_Da) - (float)(int)dVar4 * unaff_XMM14_Da;
      fVar20 = ((unaff_XMM6_Da - fVar21 * fVar21) * fVar24 * (unaff_XMM6_Da - fVar21 * fVar24) +
               fVar21) * fVar20;
    }
    *unaff_RSI = fVar20;
    in_R10D = in_R10D + 1;
    unaff_RSI = unaff_RSI + 1;
  } while (in_R10D < *(int *)(unaff_R14 + 8));
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_190 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_720430(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void function_720430(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)&local_var_48;
  local_var_48 = param_2;
  local_var_40 = param_3;
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// 函数: void function_7207d0(uint64_t param_1,uint64_t param_2,int param_3)
void function_7207d0(uint64_t param_1,uint64_t param_2,int param_3)
{
// WARNING: Subroutine does not return
  memset(param_1,0,(int64_t)param_3 << 2);
}