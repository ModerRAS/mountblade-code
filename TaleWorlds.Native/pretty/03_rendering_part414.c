#include "TaleWorlds.Native.Split.h"

// 03_rendering_part414.c - 2 个函数

// 函数: void FUN_1804945d6(void)
void FUN_1804945d6(void)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  char unaff_BL;
  int iVar12;
  float *unaff_RBP;
  int64_t unaff_RSI;
  int iVar13;
  int64_t unaff_RDI;
  uint uVar14;
  int64_t lVar15;
  uint uVar16;
  char in_R10B;
  uint uVar17;
  int64_t lVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int64_t unaff_R14;
  uint uVar22;
  uint64_t uVar23;
  int64_t lVar24;
  uint64_t uVar25;
  uint64_t uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float unaff_XMM9_Da;
  char cStackX_24;
  uint uStack0000000000000040;
  uint uStack0000000000000048;
  uint uStack000000000000005c;
  
  if (in_R10B != '\0') {
    uStack000000000000005c = 0;
    do {
      uVar4 = uStack000000000000005c * 3;
      uVar25 = *(uint64_t *)
                (unaff_RBP +
                 (uint64_t)*(uint *)(unaff_RDI + 0x9f8100 + (uint64_t)uVar4 * 4) * 4 + 8 + 2);
      *(uint64_t *)(unaff_RBP + -8) =
           *(uint64_t *)
            (unaff_RBP + (uint64_t)*(uint *)(unaff_RDI + 0x9f8100 + (uint64_t)uVar4 * 4) * 4 + 8);
      *(uint64_t *)(unaff_RBP + -6) = uVar25;
      if (unaff_BL == '\0') {
        uVar25 = *(uint64_t *)
                  (unaff_RBP +
                  (uint64_t)*(uint *)(unaff_RDI + 0x9f8100 + (uint64_t)(uVar4 + 1) * 4) * 4 + 8);
        uVar26 = *(uint64_t *)
                  (unaff_RBP +
                   (uint64_t)*(uint *)(unaff_RDI + 0x9f8100 + (uint64_t)(uVar4 + 1) * 4) * 4 + 8 +
                  2);
        uVar4 = *(uint *)(unaff_RDI + 0x9f8100 + (uint64_t)(uVar4 + 2) * 4);
      }
      else {
        uVar25 = *(uint64_t *)
                  (unaff_RBP +
                  (uint64_t)*(uint *)(unaff_RDI + 0x9f8100 + (uint64_t)(uVar4 + 2) * 4) * 4 + 8);
        uVar26 = *(uint64_t *)
                  (unaff_RBP +
                   (uint64_t)*(uint *)(unaff_RDI + 0x9f8100 + (uint64_t)(uVar4 + 2) * 4) * 4 + 8 +
                  2);
        uVar4 = *(uint *)(unaff_RDI + 0x9f8100 + (uint64_t)(uVar4 + 1) * 4);
      }
      fVar1 = unaff_RBP[-6];
      *(uint64_t *)(unaff_RBP + -4) = uVar25;
      *(uint64_t *)(unaff_RBP + -2) = uVar26;
      uVar25 = *(uint64_t *)(unaff_RBP + (uint64_t)uVar4 * 4 + 8 + 2);
      *(uint64_t *)unaff_RBP = *(uint64_t *)(unaff_RBP + (uint64_t)uVar4 * 4 + 8);
      *(uint64_t *)(unaff_RBP + 2) = uVar25;
      uVar14 = (uint)(unaff_RBP[-7] + 0.5);
      uVar16 = (uint)(unaff_RBP[-8] + 0.5);
      uVar22 = (uint)(unaff_RBP[-3] + 0.5);
      uVar17 = (uint)(unaff_RBP[-4] + 0.5);
      iVar12 = uVar14 - uVar22;
      iVar8 = uVar17 - uVar16;
      uVar21 = (uint)(unaff_RBP[1] + 0.5);
      uVar20 = (uint)(*unaff_RBP + 0.5);
      iVar13 = uVar22 - uVar21;
      iVar19 = uVar21 - uVar14;
      iVar3 = uVar16 - uVar20;
      iVar10 = iVar19 * iVar8 - iVar3 * iVar12;
      uVar4 = uVar17;
      if ((int)uVar16 < (int)uVar17) {
        uVar4 = uVar16;
      }
      uVar5 = uVar20;
      if ((int)uVar4 < (int)uVar20) {
        uVar5 = uVar4;
      }
      uVar4 = 0;
      if (0 < (int)uVar5) {
        uVar4 = uVar5;
      }
      uVar4 = uVar4 & 0xfffffffe;
      fVar27 = unaff_XMM9_Da / (float)iVar10;
      uVar5 = uVar17;
      if ((int)uVar17 < (int)uVar16) {
        uVar5 = uVar16;
      }
      uVar6 = uVar20;
      if ((int)uVar20 < (int)uVar5) {
        uVar6 = uVar5;
      }
      uVar5 = 0x27f;
      if ((int)uVar6 < 0x27f) {
        uVar5 = uVar6;
      }
      uVar6 = uVar22;
      if ((int)uVar14 < (int)uVar22) {
        uVar6 = uVar14;
      }
      uVar11 = uVar21;
      if ((int)uVar6 < (int)uVar21) {
        uVar11 = uVar6;
      }
      fVar30 = (unaff_RBP[-2] - fVar1) * fVar27;
      fVar27 = (unaff_RBP[2] - fVar1) * fVar27;
      uStack0000000000000040 = 0;
      if (0 < (int)uVar11) {
        uStack0000000000000040 = uVar11;
      }
      uStack0000000000000040 = uStack0000000000000040 & 0xfffffffe;
      uVar6 = uVar22;
      if ((int)uVar22 < (int)uVar14) {
        uVar6 = uVar14;
      }
      uVar11 = uVar21;
      if ((int)uVar21 < (int)uVar6) {
        uVar11 = uVar6;
      }
      uVar6 = 0x167;
      if ((int)uVar11 < 0x167) {
        uVar6 = uVar11;
      }
      if (0 < iVar10) {
        fVar29 = (float)iVar12 * fVar27 + (float)iVar19 * fVar30;
        uVar11 = (uVar17 * uVar21 - uVar20 * uVar22) + uStack0000000000000040 * (uVar20 - uVar17) +
                 uVar4 * iVar13;
        uVar21 = (uStack0000000000000040 * iVar3 - uVar16 * uVar21) + uVar14 * uVar20 +
                 uVar4 * iVar19;
        uVar14 = uVar16 * uVar22 + (uStack0000000000000040 * iVar8 - uVar14 * uVar17) +
                 uVar4 * iVar12;
        if ((int)uStack0000000000000040 < (int)uVar6) {
          lVar15 = (int64_t)(int)(uStack0000000000000040 * 0x280 + uVar4);
          do {
            bVar2 = false;
            fVar28 = (float)(int)uVar21 * fVar30 + fVar1 + (float)(int)uVar14 * fVar27;
            if ((int)uVar4 < (int)uVar5) {
              lVar18 = lVar15;
              uStack0000000000000048 = uVar4;
              uVar9 = uVar11;
              uVar16 = uVar21;
              uVar22 = uVar14;
              if (3 < (int)(uVar5 - uVar4)) {
                uVar7 = ((uVar5 - uVar4) - 4 >> 2) + 1;
                uVar23 = (uint64_t)uVar7;
                uStack0000000000000048 = uVar4 + uVar7 * 4;
                do {
                  if ((bVar2) ||
                     ((0 < (int)(uVar22 | uVar16 | uVar9) &&
                      (*(float *)(*(int64_t *)(unaff_RSI + 0x348 + unaff_R14 * 8) + lVar18 * 4) <=
                       fVar28)))) {
                    bVar2 = true;
                  }
                  else {
                    bVar2 = false;
                  }
                  if ((bVar2) ||
                     ((0 < (int)(uVar22 + iVar12 | uVar16 + iVar19 | uVar9 + iVar13) &&
                      (*(float *)(*(int64_t *)(unaff_RSI + 0x348 + unaff_R14 * 8) + 4 + lVar18 * 4)
                       <= fVar28 + fVar29)))) {
                    bVar2 = true;
                  }
                  else {
                    bVar2 = false;
                  }
                  uVar9 = uVar9 + iVar13 + iVar13;
                  fVar28 = fVar28 + fVar29 + fVar29;
                  uVar16 = uVar16 + iVar19 + iVar19;
                  uVar22 = uVar22 + iVar12 + iVar12;
                  if ((bVar2) ||
                     ((0 < (int)(uVar22 | uVar16 | uVar9) &&
                      (*(float *)(*(int64_t *)(unaff_RSI + 0x348 + unaff_R14 * 8) + 8 + lVar18 * 4)
                       <= fVar28)))) {
                    bVar2 = true;
                  }
                  else {
                    bVar2 = false;
                  }
                  uVar9 = uVar9 + iVar13;
                  fVar28 = fVar28 + fVar29;
                  uVar16 = uVar16 + iVar19;
                  uVar22 = uVar22 + iVar12;
                  if ((bVar2) ||
                     ((0 < (int)(uVar22 | uVar16 | uVar9) &&
                      (*(float *)(*(int64_t *)(unaff_RSI + 0x348 + unaff_R14 * 8) + 0xc +
                                 lVar18 * 4) <= fVar28)))) {
                    bVar2 = true;
                  }
                  else {
                    bVar2 = false;
                  }
                  uVar9 = uVar9 + iVar13;
                  fVar28 = fVar28 + fVar29;
                  uVar16 = uVar16 + iVar19;
                  uVar22 = uVar22 + iVar12;
                  lVar18 = lVar18 + 4;
                  uVar23 = uVar23 - 1;
                } while (uVar23 != 0);
              }
              if ((int)uStack0000000000000048 < (int)uVar5) {
                lVar18 = lVar18 * 4;
                lVar24 = (int64_t)(int)(uVar5 - uStack0000000000000048);
                do {
                  if ((bVar2) ||
                     ((0 < (int)(uVar22 | uVar16 | uVar9) &&
                      (*(float *)(lVar18 + *(int64_t *)(unaff_RSI + 0x348 + unaff_R14 * 8)) <=
                       fVar28)))) {
                    bVar2 = true;
                  }
                  else {
                    bVar2 = false;
                  }
                  uVar9 = uVar9 + iVar13;
                  fVar28 = fVar28 + fVar29;
                  uVar16 = uVar16 + iVar19;
                  uVar22 = uVar22 + iVar12;
                  lVar18 = lVar18 + 4;
                  lVar24 = lVar24 + -1;
                } while (lVar24 != 0);
              }
              if (bVar2) goto LAB_180494a88;
            }
            uStack0000000000000040 = uStack0000000000000040 + 1;
            lVar15 = lVar15 + 0x280;
            uVar11 = uVar11 + (uVar20 - uVar17);
            uVar14 = uVar14 + iVar8;
            uVar21 = uVar21 + iVar3;
          } while ((int)uStack0000000000000040 < (int)uVar6);
        }
      }
      unaff_RDI = 0x180000000;
      uStack000000000000005c = uStack000000000000005c + 1;
      unaff_BL = cStackX_24;
    } while (uStack000000000000005c < 0xc);
  }
LAB_180494a88:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x28) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_1804945ff(void)
void FUN_1804945ff(void)

{
  float fVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char unaff_BL;
  int iVar7;
  float *unaff_RBP;
  int64_t unaff_RSI;
  int iVar8;
  int64_t unaff_RDI;
  uint uVar9;
  int64_t lVar10;
  uint uVar11;
  uint uVar12;
  int64_t lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int64_t unaff_R14;
  uint uVar17;
  uint64_t uVar18;
  int64_t lVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float unaff_XMM9_Da;
  char cStackX_24;
  uint uStack0000000000000028;
  uint uStack0000000000000040;
  uint uStack0000000000000044;
  uint uStack0000000000000048;
  int iStack000000000000004c;
  int iStack0000000000000050;
  int iStack0000000000000054;
  uint uStack0000000000000058;
  uint uStack000000000000005c;
  
  uStack000000000000005c = 0;
  do {
    uVar4 = uStack000000000000005c * 3;
    uVar20 = *(uint64_t *)
              (unaff_RBP + (uint64_t)*(uint *)(unaff_RDI + 0x9f8100 + (uint64_t)uVar4 * 4) * 4 + 8
              + 2);
    *(uint64_t *)(unaff_RBP + -8) =
         *(uint64_t *)
          (unaff_RBP + (uint64_t)*(uint *)(unaff_RDI + 0x9f8100 + (uint64_t)uVar4 * 4) * 4 + 8);
    *(uint64_t *)(unaff_RBP + -6) = uVar20;
    if (unaff_BL == '\0') {
      uVar20 = *(uint64_t *)
                (unaff_RBP +
                (uint64_t)*(uint *)(unaff_RDI + 0x9f8100 + (uint64_t)(uVar4 + 1) * 4) * 4 + 8);
      uVar21 = *(uint64_t *)
                (unaff_RBP +
                 (uint64_t)*(uint *)(unaff_RDI + 0x9f8100 + (uint64_t)(uVar4 + 1) * 4) * 4 + 8 + 2
                );
      uVar4 = *(uint *)(unaff_RDI + 0x9f8100 + (uint64_t)(uVar4 + 2) * 4);
    }
    else {
      uVar20 = *(uint64_t *)
                (unaff_RBP +
                (uint64_t)*(uint *)(unaff_RDI + 0x9f8100 + (uint64_t)(uVar4 + 2) * 4) * 4 + 8);
      uVar21 = *(uint64_t *)
                (unaff_RBP +
                 (uint64_t)*(uint *)(unaff_RDI + 0x9f8100 + (uint64_t)(uVar4 + 2) * 4) * 4 + 8 + 2
                );
      uVar4 = *(uint *)(unaff_RDI + 0x9f8100 + (uint64_t)(uVar4 + 1) * 4);
    }
    fVar1 = unaff_RBP[-6];
    *(uint64_t *)(unaff_RBP + -4) = uVar20;
    *(uint64_t *)(unaff_RBP + -2) = uVar21;
    uVar20 = *(uint64_t *)(unaff_RBP + (uint64_t)uVar4 * 4 + 8 + 2);
    *(uint64_t *)unaff_RBP = *(uint64_t *)(unaff_RBP + (uint64_t)uVar4 * 4 + 8);
    *(uint64_t *)(unaff_RBP + 2) = uVar20;
    uVar9 = (uint)(unaff_RBP[-7] + 0.5);
    uVar11 = (uint)(unaff_RBP[-8] + 0.5);
    uVar17 = (uint)(unaff_RBP[-3] + 0.5);
    uVar12 = (uint)(unaff_RBP[-4] + 0.5);
    iVar7 = uVar9 - uVar17;
    iStack0000000000000054 = uVar12 - uVar11;
    uVar16 = (uint)(unaff_RBP[1] + 0.5);
    uVar15 = (uint)(*unaff_RBP + 0.5);
    iVar8 = uVar17 - uVar16;
    iVar14 = uVar16 - uVar9;
    iStack000000000000004c = uVar15 - uVar12;
    iStack0000000000000050 = uVar11 - uVar15;
    iVar5 = iVar14 * iStack0000000000000054 - iStack0000000000000050 * iVar7;
    uVar4 = uVar12;
    if ((int)uVar11 < (int)uVar12) {
      uVar4 = uVar11;
    }
    uVar6 = uVar15;
    if ((int)uVar4 < (int)uVar15) {
      uVar6 = uVar4;
    }
    uVar4 = 0;
    if (0 < (int)uVar6) {
      uVar4 = uVar6;
    }
    uVar4 = uVar4 & 0xfffffffe;
    fVar22 = unaff_XMM9_Da / (float)iVar5;
    uVar6 = uVar12;
    if ((int)uVar12 < (int)uVar11) {
      uVar6 = uVar11;
    }
    uVar2 = uVar15;
    if ((int)uVar15 < (int)uVar6) {
      uVar2 = uVar6;
    }
    uStack0000000000000044 = 0x27f;
    if ((int)uVar2 < 0x27f) {
      uStack0000000000000044 = uVar2;
    }
    uVar6 = uVar17;
    if ((int)uVar9 < (int)uVar17) {
      uVar6 = uVar9;
    }
    uVar2 = uVar16;
    if ((int)uVar6 < (int)uVar16) {
      uVar2 = uVar6;
    }
    fVar25 = (unaff_RBP[-2] - fVar1) * fVar22;
    fVar22 = (unaff_RBP[2] - fVar1) * fVar22;
    uStack0000000000000040 = 0;
    if (0 < (int)uVar2) {
      uStack0000000000000040 = uVar2;
    }
    uStack0000000000000040 = uStack0000000000000040 & 0xfffffffe;
    uVar6 = uVar17;
    if ((int)uVar17 < (int)uVar9) {
      uVar6 = uVar9;
    }
    uVar2 = uVar16;
    if ((int)uVar16 < (int)uVar6) {
      uVar2 = uVar6;
    }
    uStack0000000000000058 = 0x167;
    if ((int)uVar2 < 0x167) {
      uStack0000000000000058 = uVar2;
    }
    uStack0000000000000028 = uVar4;
    if (0 < iVar5) {
      fVar24 = (float)iVar7 * fVar22 + (float)iVar14 * fVar25;
      uVar6 = (uVar12 * uVar16 - uVar15 * uVar17) + uStack0000000000000040 * iStack000000000000004c
              + uVar4 * iVar8;
      uVar15 = (uStack0000000000000040 * iStack0000000000000050 - uVar11 * uVar16) + uVar9 * uVar15
               + uVar4 * iVar14;
      uStack0000000000000028 =
           uVar11 * uVar17 + (uStack0000000000000040 * iStack0000000000000054 - uVar9 * uVar12) +
           uVar4 * iVar7;
      if ((int)uStack0000000000000040 < (int)uStack0000000000000058) {
        lVar10 = (int64_t)(int)(uStack0000000000000040 * 0x280 + uVar4);
        do {
          bVar3 = false;
          fVar23 = (float)(int)uVar15 * fVar25 + fVar1 + (float)(int)uStack0000000000000028 * fVar22
          ;
          if ((int)uVar4 < (int)uStack0000000000000044) {
            lVar13 = lVar10;
            uStack0000000000000048 = uVar4;
            uVar12 = uVar6;
            uVar9 = uVar15;
            uVar11 = uStack0000000000000028;
            if (3 < (int)(uStack0000000000000044 - uVar4)) {
              uVar16 = ((uStack0000000000000044 - uVar4) - 4 >> 2) + 1;
              uVar18 = (uint64_t)uVar16;
              uStack0000000000000048 = uVar4 + uVar16 * 4;
              do {
                if ((bVar3) ||
                   ((0 < (int)(uVar11 | uVar9 | uVar12) &&
                    (*(float *)(*(int64_t *)(unaff_RSI + 0x348 + unaff_R14 * 8) + lVar13 * 4) <=
                     fVar23)))) {
                  bVar3 = true;
                }
                else {
                  bVar3 = false;
                }
                if ((bVar3) ||
                   ((0 < (int)(uVar11 + iVar7 | uVar9 + iVar14 | uVar12 + iVar8) &&
                    (*(float *)(*(int64_t *)(unaff_RSI + 0x348 + unaff_R14 * 8) + 4 + lVar13 * 4)
                     <= fVar23 + fVar24)))) {
                  bVar3 = true;
                }
                else {
                  bVar3 = false;
                }
                uVar12 = uVar12 + iVar8 + iVar8;
                fVar23 = fVar23 + fVar24 + fVar24;
                uVar9 = uVar9 + iVar14 + iVar14;
                uVar11 = uVar11 + iVar7 + iVar7;
                if ((bVar3) ||
                   ((0 < (int)(uVar11 | uVar9 | uVar12) &&
                    (*(float *)(*(int64_t *)(unaff_RSI + 0x348 + unaff_R14 * 8) + 8 + lVar13 * 4)
                     <= fVar23)))) {
                  bVar3 = true;
                }
                else {
                  bVar3 = false;
                }
                uVar12 = uVar12 + iVar8;
                fVar23 = fVar23 + fVar24;
                uVar9 = uVar9 + iVar14;
                uVar11 = uVar11 + iVar7;
                if ((bVar3) ||
                   ((0 < (int)(uVar11 | uVar9 | uVar12) &&
                    (*(float *)(*(int64_t *)(unaff_RSI + 0x348 + unaff_R14 * 8) + 0xc + lVar13 * 4)
                     <= fVar23)))) {
                  bVar3 = true;
                }
                else {
                  bVar3 = false;
                }
                uVar12 = uVar12 + iVar8;
                fVar23 = fVar23 + fVar24;
                uVar9 = uVar9 + iVar14;
                uVar11 = uVar11 + iVar7;
                lVar13 = lVar13 + 4;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            if ((int)uStack0000000000000048 < (int)uStack0000000000000044) {
              lVar13 = lVar13 * 4;
              lVar19 = (int64_t)(int)(uStack0000000000000044 - uStack0000000000000048);
              do {
                if ((bVar3) ||
                   ((0 < (int)(uVar11 | uVar9 | uVar12) &&
                    (*(float *)(lVar13 + *(int64_t *)(unaff_RSI + 0x348 + unaff_R14 * 8)) <= fVar23
                    )))) {
                  bVar3 = true;
                }
                else {
                  bVar3 = false;
                }
                uVar12 = uVar12 + iVar8;
                fVar23 = fVar23 + fVar24;
                uVar9 = uVar9 + iVar14;
                uVar11 = uVar11 + iVar7;
                lVar13 = lVar13 + 4;
                lVar19 = lVar19 + -1;
              } while (lVar19 != 0);
            }
            if (bVar3) goto LAB_180494a88;
          }
          uStack0000000000000040 = uStack0000000000000040 + 1;
          lVar10 = lVar10 + 0x280;
          uVar6 = uVar6 + iStack000000000000004c;
          uStack0000000000000028 = uStack0000000000000028 + iStack0000000000000054;
          uVar15 = uVar15 + iStack0000000000000050;
        } while ((int)uStack0000000000000040 < (int)uStack0000000000000058);
      }
    }
    unaff_RDI = 0x180000000;
    uStack000000000000005c = uStack000000000000005c + 1;
    unaff_BL = cStackX_24;
  } while (uStack000000000000005c < 0xc);
LAB_180494a88:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x28) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



