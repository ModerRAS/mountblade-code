#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part273.c - 2 个函数

// 函数: void FUN_1808206e7(void)
void FUN_1808206e7(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint64_t uVar5;
  float *unaff_RBX;
  int unaff_EBP;
  int64_t unaff_RSI;
  int unaff_EDI;
  int64_t in_R11;
  int iVar6;
  int64_t lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  uint64_t *in_stack_000000f0;
  int64_t *in_stack_000000f8;
  
  uVar5 = (uint64_t)(uint)*in_stack_000000f0;
  do {
    iVar6 = 0;
    lVar7 = 0;
    fVar12 = (float)(uVar5 & 0xffffffff) * unaff_XMM13_Da;
    if (0 < unaff_EDI) {
      do {
        uVar1 = *(uint *)((int64_t)in_stack_000000f0 + 4);
        uVar2 = uVar1 * unaff_EDI + iVar6;
        uVar3 = (uVar1 + 1) * unaff_EDI + iVar6;
        uVar4 = (uVar1 + 2) * unaff_EDI + iVar6;
        fVar11 = (float)((int)((uint)*(uint3 *)(in_R11 + (((uint64_t)uVar1 - 1) * unaff_RSI + lVar7
                                                         ) * 3) << 8) >> 8) * unaff_XMM8_Da;
        fVar10 = (float)((int)((uint)*(uint3 *)((uint64_t)uVar2 + in_R11 + (uint64_t)uVar2 * 2) <<
                              8) >> 8) * unaff_XMM8_Da;
        fVar9 = (float)((int)((uint)*(uint3 *)((uint64_t)uVar3 + in_R11 + (uint64_t)uVar3 * 2) <<
                             8) >> 8) * unaff_XMM8_Da;
        fVar8 = (float)((int)((uint)*(uint3 *)((uint64_t)uVar4 + in_R11 + (uint64_t)uVar4 * 2) <<
                             8) >> 8) * unaff_XMM12_Da;
        iVar6 = iVar6 + 1;
        lVar7 = lVar7 + 1;
        *unaff_RBX = ((((fVar9 + fVar9 + fVar11) - (fVar10 * unaff_XMM10_Da + fVar8)) +
                      (((fVar10 - fVar9) * unaff_XMM11_Da - fVar11) * unaff_XMM9_Da + fVar8) *
                      fVar12) * fVar12 + (fVar9 - fVar11) * unaff_XMM9_Da) * fVar12 + fVar10;
        unaff_RBX = unaff_RBX + 1;
      } while (lVar7 < unaff_RSI);
    }
    *in_stack_000000f0 = *in_stack_000000f0 + *in_stack_000000f8;
    uVar5 = *in_stack_000000f0;
    unaff_EBP = unaff_EBP + -1;
  } while (unaff_EBP != 0);
  return;
}





// 函数: void FUN_1808208ba(void)
void FUN_1808208ba(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int64_t lVar5;
  float *unaff_RBX;
  uint unaff_EBP;
  uint uVar6;
  int64_t unaff_RSI;
  int iVar7;
  int64_t unaff_RDI;
  int iVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t in_R11;
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
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  uint64_t *in_stack_000000f0;
  int64_t *in_stack_000000f8;
  
  iVar7 = (int)unaff_RDI;
  if (iVar7 == 1) {
    for (iVar7 = (int)unaff_EBP >> 2; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar10 = *in_stack_000000f0;
      uVar6 = *(uint *)((int64_t)in_stack_000000f0 + 4);
      uVar9 = *in_stack_000000f0 + *in_stack_000000f8;
      sVar1 = *(short *)(in_R11 + (uint64_t)uVar6 * 2);
      sVar2 = *(short *)(in_R11 + (uint64_t)(uVar6 + 1) * 2);
      fVar18 = (float)(int)*(short *)(in_R11 + -2 + (uint64_t)uVar6 * 2) * 3.0517578e-05;
      sVar3 = *(short *)(in_R11 + (uint64_t)(uVar6 + 2) * 2);
      *in_stack_000000f0 = uVar9;
      fVar22 = (float)(int)sVar1 * 3.0517578e-05;
      fVar15 = (float)(int)sVar2 * 3.0517578e-05;
      fVar26 = (float)(uint)uVar10 * 2.3283064e-10;
      fVar12 = (float)(int)sVar3 * 1.5258789e-05;
      iVar8 = (int)(uVar9 >> 0x20);
      fVar19 = (float)(int)*(short *)(in_R11 + -2 + (uVar9 >> 0x20) * 2) * 3.0517578e-05;
      fVar23 = (float)(int)*(short *)(in_R11 + (uVar9 >> 0x20) * 2) * 3.0517578e-05;
      fVar16 = (float)(int)*(short *)(in_R11 + (uint64_t)(iVar8 + 1) * 2) * 3.0517578e-05;
      fVar27 = (float)(uVar9 & 0xffffffff) * 2.3283064e-10;
      fVar13 = (float)(int)*(short *)(in_R11 + (uint64_t)(iVar8 + 2) * 2) * 1.5258789e-05;
      uVar9 = uVar9 + *in_stack_000000f8;
      *in_stack_000000f0 = uVar9;
      uVar10 = uVar9 + *in_stack_000000f8;
      sVar1 = *(short *)(in_R11 + (uVar9 >> 0x20) * 2);
      iVar8 = (int)(uVar9 >> 0x20);
      sVar2 = *(short *)(in_R11 + (uint64_t)(iVar8 + 1) * 2);
      fVar20 = (float)(int)*(short *)(in_R11 + -2 + (uVar9 >> 0x20) * 2) * 3.0517578e-05;
      sVar3 = *(short *)(in_R11 + (uint64_t)(iVar8 + 2) * 2);
      *in_stack_000000f0 = uVar10;
      fVar24 = (float)(int)sVar1 * 3.0517578e-05;
      fVar28 = (float)(uVar9 & 0xffffffff) * 2.3283064e-10;
      fVar14 = (float)(int)sVar3 * 1.5258789e-05;
      fVar17 = (float)(int)sVar2 * 3.0517578e-05;
      fVar30 = (float)(uVar10 & 0xffffffff) * 2.3283064e-10;
      iVar8 = (int)(uVar10 >> 0x20);
      fVar25 = (float)(int)*(short *)(in_R11 + -2 + (uVar10 >> 0x20) * 2) * 3.0517578e-05;
      sVar1 = *(short *)(in_R11 + (uint64_t)(iVar8 + 2) * 2);
      fVar29 = (float)(int)*(short *)(in_R11 + (uVar10 >> 0x20) * 2) * 3.0517578e-05;
      fVar21 = (float)(int)*(short *)(in_R11 + (uint64_t)(iVar8 + 1) * 2) * 3.0517578e-05;
      *in_stack_000000f0 = *in_stack_000000f8 + uVar10;
      unaff_RBX[2] = ((((fVar17 + fVar17 + fVar20) - (fVar24 * 2.5 + fVar14)) +
                      (((fVar24 - fVar17) * 3.0 - fVar20) * 0.5 + fVar14) * fVar28) * fVar28 +
                     (fVar17 - fVar20) * 0.5) * fVar28 + fVar24;
      fVar14 = (float)(int)sVar1 * 1.5258789e-05;
      *unaff_RBX = ((((fVar15 + fVar15 + fVar18) - (fVar22 * 2.5 + fVar12)) +
                    (((fVar22 - fVar15) * 3.0 - fVar18) * 0.5 + fVar12) * fVar26) * fVar26 +
                   (fVar15 - fVar18) * 0.5) * fVar26 + fVar22;
      unaff_RBX[1] = ((((fVar16 + fVar16 + fVar19) - (fVar23 * 2.5 + fVar13)) +
                      (((fVar23 - fVar16) * 3.0 - fVar19) * 0.5 + fVar13) * fVar27) * fVar27 +
                     (fVar16 - fVar19) * 0.5) * fVar27 + fVar23;
      unaff_RBX[3] = ((((fVar21 + fVar21 + fVar25) - (fVar29 * 2.5 + fVar14)) +
                      (((fVar29 - fVar21) * 3.0 - fVar25) * 0.5 + fVar14) * fVar30) * fVar30 +
                     (fVar21 - fVar25) * 0.5) * fVar30 + fVar29;
      unaff_RBX = unaff_RBX + 4;
    }
    for (uVar6 = unaff_EBP & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      uVar4 = *(uint *)((int64_t)in_stack_000000f0 + 4);
      fVar14 = (float)(int)*(short *)(in_R11 + -2 + (uint64_t)uVar4 * 2) * 3.0517578e-05;
      fVar15 = (float)(int)*(short *)(in_R11 + (uint64_t)uVar4 * 2) * 3.0517578e-05;
      fVar13 = (float)(int)*(short *)(in_R11 + (uint64_t)(uVar4 + 1) * 2) * 3.0517578e-05;
      fVar16 = (float)(uint)*in_stack_000000f0 * 2.3283064e-10;
      fVar12 = (float)(int)*(short *)(in_R11 + (uint64_t)(uVar4 + 2) * 2) * 1.5258789e-05;
      *unaff_RBX = ((((fVar13 + fVar13 + fVar14) - (fVar15 * 2.5 + fVar12)) +
                    (((fVar15 - fVar13) * 3.0 - fVar14) * 0.5 + fVar12) * fVar16) * fVar16 +
                   (fVar13 - fVar14) * 0.5) * fVar16 + fVar15;
      unaff_RBX = unaff_RBX + 1;
      *in_stack_000000f0 = *in_stack_000000f0 + *in_stack_000000f8;
    }
  }
  else if (unaff_EBP != 0) {
    uVar10 = (uint64_t)(uint)*in_stack_000000f0;
    do {
      iVar8 = 0;
      lVar11 = 0;
      fVar12 = (float)(uVar10 & 0xffffffff) * 2.3283064e-10;
      if (3 < unaff_RSI) {
        do {
          uVar6 = *(uint *)((int64_t)in_stack_000000f0 + 4);
          fVar16 = (float)(int)*(short *)(in_R11 + (((uint64_t)uVar6 - 1) * unaff_RSI + lVar11) * 2
                                         ) * 3.0517578e-05;
          fVar15 = (float)(int)*(short *)(in_R11 + (uint64_t)(uVar6 * iVar7 + iVar8) * 2) *
                   3.0517578e-05;
          fVar14 = (float)(int)*(short *)(in_R11 + (uint64_t)((uVar6 + 1) * iVar7 + iVar8) * 2) *
                   3.0517578e-05;
          fVar13 = (float)(int)*(short *)(in_R11 + (uint64_t)((uVar6 + 2) * iVar7 + iVar8) * 2) *
                   1.5258789e-05;
          *unaff_RBX = ((((fVar14 + fVar14 + fVar16) - (fVar15 * 2.5 + fVar13)) +
                        (((fVar15 - fVar14) * 3.0 - fVar16) * 0.5 + fVar13) * fVar12) * fVar12 +
                       (fVar14 - fVar16) * 0.5) * fVar12 + fVar15;
          uVar6 = *(uint *)((int64_t)in_stack_000000f0 + 4);
          fVar15 = (float)(int)*(short *)(in_R11 + 2 +
                                         (((uint64_t)uVar6 - 1) * unaff_RSI + lVar11) * 2) *
                   3.0517578e-05;
          fVar16 = (float)(int)*(short *)(in_R11 + (uint64_t)(uVar6 * iVar7 + 1 + iVar8) * 2) *
                   3.0517578e-05;
          fVar14 = (float)(int)*(short *)(in_R11 + (uint64_t)((uVar6 + 1) * iVar7 + 1 + iVar8) * 2)
                   * 3.0517578e-05;
          fVar13 = (float)(int)*(short *)(in_R11 + (uint64_t)((uVar6 + 2) * iVar7 + 1 + iVar8) * 2)
                   * 1.5258789e-05;
          unaff_RBX[1] = ((((fVar14 + fVar14 + fVar15) - (fVar16 * 2.5 + fVar13)) +
                          (((fVar16 - fVar14) * 3.0 - fVar15) * 0.5 + fVar13) * fVar12) * fVar12 +
                         (fVar14 - fVar15) * 0.5) * fVar12 + fVar16;
          uVar6 = *(uint *)((int64_t)in_stack_000000f0 + 4);
          fVar15 = (float)(int)*(short *)(in_R11 + 4 +
                                         (((uint64_t)uVar6 - 1) * unaff_RSI + lVar11) * 2) *
                   3.0517578e-05;
          fVar16 = (float)(int)*(short *)(in_R11 + (uint64_t)(uVar6 * iVar7 + 2 + iVar8) * 2) *
                   3.0517578e-05;
          fVar14 = (float)(int)*(short *)(in_R11 + (uint64_t)((uVar6 + 1) * iVar7 + 2 + iVar8) * 2)
                   * 3.0517578e-05;
          fVar13 = (float)(int)*(short *)(in_R11 + (uint64_t)((uVar6 + 2) * iVar7 + 2 + iVar8) * 2)
                   * 1.5258789e-05;
          unaff_RBX[2] = ((((fVar14 + fVar14 + fVar15) - (fVar16 * 2.5 + fVar13)) +
                          (((fVar16 - fVar14) * 3.0 - fVar15) * 0.5 + fVar13) * fVar12) * fVar12 +
                         (fVar14 - fVar15) * 0.5) * fVar12 + fVar16;
          uVar6 = *(uint *)((int64_t)in_stack_000000f0 + 4);
          lVar5 = ((uint64_t)uVar6 - 1) * unaff_RSI + lVar11;
          lVar11 = lVar11 + 4;
          fVar15 = (float)(int)*(short *)(in_R11 + 6 + lVar5 * 2) * 3.0517578e-05;
          fVar16 = (float)(int)*(short *)(in_R11 + (uint64_t)(uVar6 * iVar7 + 3 + iVar8) * 2) *
                   3.0517578e-05;
          fVar14 = (float)(int)*(short *)(in_R11 + (uint64_t)((uVar6 + 1) * iVar7 + 3 + iVar8) * 2)
                   * 3.0517578e-05;
          uVar6 = (uVar6 + 2) * iVar7 + 3 + iVar8;
          iVar8 = iVar8 + 4;
          fVar13 = (float)(int)*(short *)(in_R11 + (uint64_t)uVar6 * 2) * 1.5258789e-05;
          unaff_RBX[3] = ((((fVar14 + fVar14 + fVar15) - (fVar16 * 2.5 + fVar13)) +
                          (((fVar16 - fVar14) * 3.0 - fVar15) * 0.5 + fVar13) * fVar12) * fVar12 +
                         (fVar14 - fVar15) * 0.5) * fVar12 + fVar16;
          unaff_RBX = unaff_RBX + 4;
        } while (lVar11 < unaff_RDI + -3);
      }
      for (; lVar11 < unaff_RSI; lVar11 = lVar11 + 1) {
        uVar6 = *(uint *)((int64_t)in_stack_000000f0 + 4);
        fVar16 = (float)(int)*(short *)(in_R11 + (((uint64_t)uVar6 - 1) * unaff_RSI + lVar11) * 2)
                 * 3.0517578e-05;
        uVar4 = (uVar6 + 1) * iVar7 + iVar8;
        fVar15 = (float)(int)*(short *)(in_R11 + (uint64_t)(uVar6 * iVar7 + iVar8) * 2) *
                 3.0517578e-05;
        uVar6 = (uVar6 + 2) * iVar7 + iVar8;
        iVar8 = iVar8 + 1;
        fVar14 = (float)(int)*(short *)(in_R11 + (uint64_t)uVar4 * 2) * 3.0517578e-05;
        fVar13 = (float)(int)*(short *)(in_R11 + (uint64_t)uVar6 * 2) * 1.5258789e-05;
        *unaff_RBX = ((((fVar14 + fVar14 + fVar16) - (fVar15 * 2.5 + fVar13)) +
                      (((fVar15 - fVar14) * 3.0 - fVar16) * 0.5 + fVar13) * fVar12) * fVar12 +
                     (fVar14 - fVar16) * 0.5) * fVar12 + fVar15;
        unaff_RBX = unaff_RBX + 1;
      }
      *in_stack_000000f0 = *in_stack_000000f0 + *in_stack_000000f8;
      uVar10 = *in_stack_000000f0;
      unaff_EBP = unaff_EBP - 1;
    } while (unaff_EBP != 0);
  }
  return;
}





