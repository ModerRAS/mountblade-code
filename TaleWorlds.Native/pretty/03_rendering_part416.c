#include "TaleWorlds.Native.Split.h"

// 03_rendering_part416.c - 2 个函数

// 函数: void FUN_180494b06(float param_1,longlong param_2,int param_3)
void FUN_180494b06(float param_1,longlong param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  uint64_t *puVar3;
  float fVar4;
  float fVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong in_RCX;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int iVar21;
  uint uVar22;
  float *pfVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  int iVar27;
  longlong in_R11;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  longlong lVar31;
  uint uVar32;
  uint uVar33;
  ulonglong uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float in_XMM4_Da;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  float fVar41;
  float fVar42;
  float fStackX_8;
  float fStackX_c;
  uint uStackX_10;
  uint uStackX_14;
  uint uStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  float fStack0000000000000080;
  float fStack0000000000000084;
  
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM8_Dd;
  lVar31 = (longlong)param_3;
  lVar11 = lVar31 * 0x40;
  fVar4 = *(float *)(lVar11 + 0x2c8 + in_RCX);
  fVar37 = *(float *)(lVar11 + 0x2cc + in_RCX);
  fVar40 = *(float *)(lVar11 + 0x2d0 + in_RCX);
  fVar39 = *(float *)(lVar11 + 0x2d4 + in_RCX);
  fVar38 = *(float *)(param_2 + 0x10);
  fVar41 = *(float *)(lVar11 + 0x2dc + in_RCX);
  fVar42 = *(float *)(lVar11 + 0x2d8 + in_RCX);
  fVar5 = *(float *)(param_2 + 4);
  fVar35 = *(float *)(lVar11 + 0x2e0 + in_RCX);
  fVar36 = *(float *)(lVar11 + 0x2e4 + in_RCX);
  fStack0000000000000048 = fVar38 * fVar4;
  fStack000000000000004c = fVar38 * fVar37;
  fStack0000000000000050 = fVar38 * fVar40;
  fStack0000000000000054 = fVar38 * fVar39;
  fStack0000000000000038 = in_XMM4_Da * fVar4;
  fStack000000000000003c = fVar37 * param_1;
  fStack0000000000000040 = fVar40 * param_1;
  fStack0000000000000044 = fVar39 * param_1;
  fVar4 = *(float *)(param_2 + 0x14);
  fStack0000000000000058 = fVar5 * fVar42;
  fStack000000000000005c = fVar41 * fVar5;
  fStack0000000000000060 = fVar35 * fVar5;
  fStack0000000000000064 = fVar36 * fVar5;
  fVar37 = *(float *)(param_2 + 8);
  pfVar23 = (float *)(unaff_RBP + -0x4c);
  fVar40 = *(float *)(lVar11 + 0x2e8 + in_RCX);
  fVar39 = *(float *)(lVar11 + 0x2ec + in_RCX);
  fVar38 = *(float *)(lVar11 + 0x2f0 + in_RCX);
  fVar5 = *(float *)(lVar11 + 0x2f4 + in_RCX);
  lVar25 = 0;
  bVar8 = true;
  fStack0000000000000068 = fVar4 * fVar42;
  fStack000000000000006c = fVar4 * fVar41;
  fStack0000000000000070 = fVar4 * fVar35;
  fStack0000000000000074 = fVar4 * fVar36;
  lVar28 = 2;
  fVar4 = *(float *)(param_2 + 0x18);
  puVar3 = (uint64_t *)(lVar11 + 0x2f8 + in_RCX);
  uVar6 = *puVar3;
  uVar7 = puVar3[1];
  fStackX_8 = (float)uVar7;
  fVar42 = (float)((ulonglong)uVar6 >> 0x20);
  fVar41 = (float)uVar6;
  fStack0000000000000078 = fVar37 * fVar40;
  fStack000000000000007c = fVar39 * fVar37;
  fStack0000000000000080 = fVar38 * fVar37;
  fStack0000000000000084 = fVar5 * fVar37;
  fStackX_c = (float)((ulonglong)uVar7 >> 0x20);
  *(float *)(unaff_RBP + -0x78) = fVar4 * fVar40;
  *(float *)(unaff_RBP + -0x74) = fVar4 * fVar39;
  *(float *)(unaff_RBP + -0x70) = fVar4 * fVar38;
  *(float *)(unaff_RBP + -0x6c) = fVar4 * fVar5;
  do {
    uVar19 = (ulonglong)*(uint *)(&UNK_1809f81d0 + lVar25);
    uVar15 = (ulonglong)*(uint *)(&UNK_1809f8190 + lVar25);
    uVar34 = (ulonglong)*(uint *)(&UNK_1809f81b0 + lVar25);
    fVar4 = *(float *)((longlong)&stack0x00000038 + uVar19 * 0x10);
    fVar37 = *(float *)((longlong)&stack0x0000003c + uVar19 * 0x10);
    fVar40 = *(float *)((longlong)&stack0x00000058 + uVar15 * 0x10);
    fVar39 = *(float *)((longlong)&stack0x0000005c + uVar15 * 0x10);
    fVar38 = *(float *)((longlong)&stack0x00000078 + uVar34 * 0x10);
    fVar5 = *(float *)((longlong)&stack0x0000007c + uVar34 * 0x10);
    fVar36 = fStackX_8 + *(float *)((longlong)&stack0x00000040 + uVar19 * 0x10) +
             *(float *)((longlong)&stack0x00000060 + uVar15 * 0x10) +
             *(float *)(unaff_RBP + -0x80 + uVar34 * 0x10);
    fVar35 = fStackX_c + *(float *)((longlong)&stack0x00000044 + uVar19 * 0x10) +
             *(float *)((longlong)&stack0x00000064 + uVar15 * 0x10) +
             *(float *)(unaff_RBP + -0x7c + uVar34 * 0x10);
    if ((!bVar8) || (fVar35 < fVar36)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    uVar19 = (ulonglong)*(uint *)(&UNK_1809f81d4 + lVar25);
    uVar15 = (ulonglong)*(uint *)(&UNK_1809f8194 + lVar25);
    uVar34 = (ulonglong)*(uint *)(&UNK_1809f81b4 + lVar25);
    pfVar23[-2] = 1.0;
    pfVar23[-5] = (fVar41 + fVar4 + fVar40 + fVar38) / fVar35;
    pfVar23[-4] = (fVar42 + fVar37 + fVar39 + fVar5) / fVar35;
    fVar4 = *(float *)((longlong)&stack0x00000038 + uVar19 * 0x10);
    fVar37 = *(float *)((longlong)&stack0x0000003c + uVar19 * 0x10);
    pfVar23[-3] = fVar36 / fVar35;
    fVar40 = *(float *)((longlong)&stack0x00000058 + uVar15 * 0x10);
    fVar39 = *(float *)((longlong)&stack0x0000005c + uVar15 * 0x10);
    fVar38 = *(float *)((longlong)&stack0x00000078 + uVar34 * 0x10);
    fVar5 = *(float *)((longlong)&stack0x0000007c + uVar34 * 0x10);
    fVar36 = fStackX_8 + *(float *)((longlong)&stack0x00000040 + uVar19 * 0x10) +
             *(float *)((longlong)&stack0x00000060 + uVar15 * 0x10) +
             *(float *)(unaff_RBP + -0x80 + uVar34 * 0x10);
    fVar35 = fStackX_c + *(float *)((longlong)&stack0x00000044 + uVar19 * 0x10) +
             *(float *)((longlong)&stack0x00000064 + uVar15 * 0x10) +
             *(float *)(unaff_RBP + -0x7c + uVar34 * 0x10);
    if ((!bVar8) || (fVar35 < fVar36)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    uVar19 = (ulonglong)*(uint *)(&UNK_1809f81d8 + lVar25);
    uVar15 = (ulonglong)*(uint *)(&UNK_1809f8198 + lVar25);
    uVar34 = (ulonglong)*(uint *)(&UNK_1809f81b8 + lVar25);
    pfVar23[2] = 1.0;
    pfVar23[-1] = (fVar41 + fVar4 + fVar40 + fVar38) / fVar35;
    *pfVar23 = (fVar42 + fVar37 + fVar39 + fVar5) / fVar35;
    fVar4 = *(float *)((longlong)&stack0x00000038 + uVar19 * 0x10);
    fVar37 = *(float *)((longlong)&stack0x0000003c + uVar19 * 0x10);
    pfVar23[1] = fVar36 / fVar35;
    fVar40 = *(float *)((longlong)&stack0x00000058 + uVar15 * 0x10);
    fVar39 = *(float *)((longlong)&stack0x0000005c + uVar15 * 0x10);
    fVar38 = *(float *)((longlong)&stack0x00000078 + uVar34 * 0x10);
    fVar5 = *(float *)((longlong)&stack0x0000007c + uVar34 * 0x10);
    fVar36 = fStackX_8 + *(float *)((longlong)&stack0x00000040 + uVar19 * 0x10) +
             *(float *)((longlong)&stack0x00000060 + uVar15 * 0x10) +
             *(float *)(unaff_RBP + -0x80 + uVar34 * 0x10);
    fVar35 = fStackX_c + *(float *)((longlong)&stack0x00000044 + uVar19 * 0x10) +
             *(float *)((longlong)&stack0x00000064 + uVar15 * 0x10) +
             *(float *)(unaff_RBP + -0x7c + uVar34 * 0x10);
    if ((!bVar8) || (fVar35 < fVar36)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    uVar15 = (ulonglong)*(uint *)(&UNK_1809f81dc + lVar25);
    uVar34 = (ulonglong)*(uint *)(&UNK_1809f819c + lVar25);
    lVar11 = (ulonglong)*(uint *)(&UNK_1809f81bc + lVar25) * 0x10;
    pfVar23[6] = 1.0;
    pfVar23[3] = (fVar41 + fVar4 + fVar40 + fVar38) / fVar35;
    pfVar23[4] = (fVar42 + fVar37 + fVar39 + fVar5) / fVar35;
    fVar4 = *(float *)((longlong)&stack0x00000038 + uVar15 * 0x10);
    fVar37 = *(float *)((longlong)&stack0x0000003c + uVar15 * 0x10);
    pfVar23[5] = fVar36 / fVar35;
    fVar40 = *(float *)((longlong)&stack0x00000058 + uVar34 * 0x10);
    fVar39 = *(float *)((longlong)&stack0x0000005c + uVar34 * 0x10);
    fVar38 = *(float *)((longlong)&stack0x00000078 + lVar11);
    fVar5 = *(float *)((longlong)&stack0x0000007c + lVar11);
    fVar36 = fStackX_8 + *(float *)((longlong)&stack0x00000040 + uVar15 * 0x10) +
             *(float *)((longlong)&stack0x00000060 + uVar34 * 0x10) +
             *(float *)(unaff_RBP + -0x80 + lVar11);
    fVar35 = fStackX_c + *(float *)((longlong)&stack0x00000044 + uVar15 * 0x10) +
             *(float *)((longlong)&stack0x00000064 + uVar34 * 0x10) +
             *(float *)(unaff_RBP + -0x7c + lVar11);
    if ((!bVar8) || (fVar35 < fVar36)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    pfVar23[10] = 1.0;
    lVar25 = lVar25 + 0x10;
    pfVar23[7] = (fVar41 + fVar4 + fVar40 + fVar38) / fVar35;
    pfVar23[8] = (fVar42 + fVar37 + fVar39 + fVar5) / fVar35;
    pfVar23[9] = fVar36 / fVar35;
    pfVar23 = pfVar23 + 0x10;
    lVar28 = lVar28 + -1;
  } while (lVar28 != 0);
  if (bVar8) {
    uStack0000000000000034 = 0;
    do {
      uVar32 = uStack0000000000000034 * 3;
      pfVar23 = (float *)(unaff_RBP + -0x60 +
                         (ulonglong)*(uint *)(&UNK_1809f8100 + (ulonglong)uVar32 * 4) * 0x10);
      fVar4 = pfVar23[2];
      pfVar1 = (float *)(unaff_RBP + -0x60 +
                        (ulonglong)*(uint *)(&UNK_1809f8100 + (ulonglong)(uVar32 + 2) * 4) * 0x10);
      pfVar2 = (float *)(unaff_RBP + -0x60 +
                        (ulonglong)*(uint *)(&UNK_1809f8100 + (ulonglong)(uVar32 + 1) * 4) * 0x10);
      uVar26 = (uint)(*pfVar23 + 0.5);
      uVar9 = (uint)(pfVar23[1] + 0.5);
      uVar24 = (uint)(*pfVar1 + 0.5);
      uVar29 = (uint)(pfVar1[1] + 0.5);
      iVar16 = uVar24 - uVar26;
      iVar20 = uVar9 - uVar29;
      uVar22 = (uint)(*pfVar2 + 0.5);
      uVar30 = (uint)(pfVar2[1] + 0.5);
      iVar12 = uVar26 - uVar22;
      iVar21 = uVar29 - uVar30;
      iVar27 = uVar30 - uVar9;
      iVar17 = iVar16 * iVar27 - iVar20 * iVar12;
      uVar32 = uVar24;
      if ((int)uVar26 < (int)uVar24) {
        uVar32 = uVar26;
      }
      uVar13 = uVar22;
      if ((int)uVar32 < (int)uVar22) {
        uVar13 = uVar32;
      }
      uVar32 = 0;
      if (0 < (int)uVar13) {
        uVar32 = uVar13;
      }
      uVar32 = uVar32 & 0xfffffffe;
      fVar37 = 1.0 / (float)iVar17;
      uVar13 = uVar24;
      if ((int)uVar24 < (int)uVar26) {
        uVar13 = uVar26;
      }
      fVar40 = (pfVar1[2] - fVar4) * fVar37;
      fVar37 = (pfVar2[2] - fVar4) * fVar37;
      uVar10 = uVar22;
      if ((int)uVar22 < (int)uVar13) {
        uVar10 = uVar13;
      }
      uVar13 = 0x27f;
      if ((int)uVar10 < 0x27f) {
        uVar13 = uVar10;
      }
      uVar10 = uVar29;
      if ((int)uVar9 < (int)uVar29) {
        uVar10 = uVar9;
      }
      uVar18 = uVar30;
      if ((int)uVar10 < (int)uVar30) {
        uVar18 = uVar10;
      }
      uStackX_14 = 0;
      if (0 < (int)uVar18) {
        uStackX_14 = uVar18;
      }
      uStackX_14 = uStackX_14 & 0xfffffffe;
      uVar10 = uVar29;
      if ((int)uVar29 < (int)uVar9) {
        uVar10 = uVar9;
      }
      uVar18 = uVar30;
      if ((int)uVar30 < (int)uVar10) {
        uVar18 = uVar10;
      }
      uVar10 = 0x167;
      if ((int)uVar18 < 0x167) {
        uVar10 = uVar18;
      }
      if (0 < iVar17) {
        fVar39 = (float)iVar20 * fVar37 + (float)iVar27 * fVar40;
        uVar18 = (uStackX_14 * (uVar22 - uVar24) - uVar22 * uVar29) + uVar32 * iVar21 +
                 uVar24 * uVar30;
        uVar30 = (uStackX_14 * iVar12 - uVar26 * uVar30) + uVar32 * iVar27 + uVar22 * uVar9;
        uVar9 = (uStackX_14 * iVar16 - uVar24 * uVar9) + uVar32 * iVar20 + uVar26 * uVar29;
        if ((int)uStackX_14 < (int)uVar10) {
          lVar11 = (longlong)(int)(uStackX_14 * 0x280 + uVar32);
          do {
            bVar8 = false;
            fVar38 = (float)(int)uVar30 * fVar40 + fVar4 + (float)(int)uVar9 * fVar37;
            if ((int)uVar32 < (int)uVar13) {
              lVar25 = lVar11;
              uStackX_10 = uVar32;
              uVar14 = uVar18;
              uVar26 = uVar30;
              uVar29 = uVar9;
              if (3 < (int)(uVar13 - uVar32)) {
                uVar33 = ((uVar13 - uVar32) - 4 >> 2) + 1;
                uVar34 = (ulonglong)uVar33;
                uStackX_10 = uVar32 + uVar33 * 4;
                do {
                  if ((bVar8) ||
                     ((0 < (int)(uVar29 | uVar26 | uVar14) &&
                      (*(float *)(*(longlong *)(unaff_RSI + 0x348 + lVar31 * 8) + lVar25 * 4) <=
                       fVar38)))) {
                    bVar8 = true;
                  }
                  else {
                    bVar8 = false;
                  }
                  if ((bVar8) ||
                     ((0 < (int)(uVar29 + iVar20 | uVar26 + iVar27 | uVar14 + iVar21) &&
                      (*(float *)(*(longlong *)(unaff_RSI + 0x348 + lVar31 * 8) + 4 + lVar25 * 4) <=
                       fVar38 + fVar39)))) {
                    bVar8 = true;
                  }
                  else {
                    bVar8 = false;
                  }
                  uVar14 = uVar14 + iVar21 + iVar21;
                  fVar38 = fVar38 + fVar39 + fVar39;
                  uVar26 = uVar26 + iVar27 + iVar27;
                  uVar29 = uVar29 + iVar20 + iVar20;
                  if ((bVar8) ||
                     ((0 < (int)(uVar29 | uVar26 | uVar14) &&
                      (*(float *)(*(longlong *)(unaff_RSI + 0x348 + lVar31 * 8) + 8 + lVar25 * 4) <=
                       fVar38)))) {
                    bVar8 = true;
                  }
                  else {
                    bVar8 = false;
                  }
                  uVar14 = uVar14 + iVar21;
                  fVar38 = fVar38 + fVar39;
                  uVar26 = uVar26 + iVar27;
                  uVar29 = uVar29 + iVar20;
                  if ((bVar8) ||
                     ((0 < (int)(uVar29 | uVar26 | uVar14) &&
                      (*(float *)(*(longlong *)(unaff_RSI + 0x348 + lVar31 * 8) + 0xc + lVar25 * 4)
                       <= fVar38)))) {
                    bVar8 = true;
                  }
                  else {
                    bVar8 = false;
                  }
                  uVar14 = uVar14 + iVar21;
                  fVar38 = fVar38 + fVar39;
                  uVar26 = uVar26 + iVar27;
                  uVar29 = uVar29 + iVar20;
                  lVar25 = lVar25 + 4;
                  uVar34 = uVar34 - 1;
                } while (uVar34 != 0);
              }
              if ((int)uStackX_10 < (int)uVar13) {
                lVar25 = lVar25 * 4;
                lVar28 = (longlong)(int)(uVar13 - uStackX_10);
                do {
                  if ((bVar8) ||
                     ((0 < (int)(uVar29 | uVar26 | uVar14) &&
                      (*(float *)(lVar25 + *(longlong *)(unaff_RSI + 0x348 + lVar31 * 8)) <= fVar38)
                      ))) {
                    bVar8 = true;
                  }
                  else {
                    bVar8 = false;
                  }
                  uVar14 = uVar14 + iVar21;
                  fVar38 = fVar38 + fVar39;
                  uVar26 = uVar26 + iVar27;
                  uVar29 = uVar29 + iVar20;
                  lVar25 = lVar25 + 4;
                  lVar28 = lVar28 + -1;
                } while (lVar28 != 0);
              }
              if (bVar8) goto LAB_1804954a0;
            }
            uStackX_14 = uStackX_14 + 1;
            lVar11 = lVar11 + 0x280;
            uVar18 = uVar18 + (uVar22 - uVar24);
            uVar30 = uVar30 + iVar12;
            uVar9 = uVar9 + iVar16;
          } while ((int)uStackX_14 < (int)uVar10);
        }
      }
      uStack0000000000000034 = uStack0000000000000034 + 1;
    } while (uStack0000000000000034 < 0xc);
  }
LAB_1804954a0:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x20) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180494d60(uint64_t param_1,uint64_t param_2,float *param_3,longlong param_4)
void FUN_180494d60(uint64_t param_1,uint64_t param_2,float *param_3,longlong param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int iVar19;
  uint uVar20;
  uint uVar21;
  char in_R10B;
  uint uVar22;
  longlong lVar23;
  int iVar24;
  longlong in_R11;
  uint uVar25;
  uint uVar26;
  longlong unaff_R14;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong lVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  uint uStackX_10;
  uint uStackX_14;
  uint uStack0000000000000034;
  
  do {
    uVar17 = (ulonglong)*(uint *)(param_4 + 0x9f81d0 + unaff_RBX);
    uVar13 = (ulonglong)*(uint *)(param_4 + 0x9f8190 + unaff_RBX);
    uVar29 = (ulonglong)*(uint *)(param_4 + 0x9f81b0 + unaff_RBX);
    fVar4 = *(float *)(&stack0x00000038 + uVar17 * 0x10);
    fVar33 = *(float *)(&stack0x0000003c + uVar17 * 0x10);
    fVar36 = *(float *)(&stack0x00000058 + uVar13 * 0x10);
    fVar35 = *(float *)(&stack0x0000005c + uVar13 * 0x10);
    fVar34 = *(float *)(&stack0x00000078 + uVar29 * 0x10);
    fVar5 = *(float *)(&stack0x0000007c + uVar29 * 0x10);
    fVar32 = in_XMM5_Da + *(float *)(&stack0x00000040 + uVar17 * 0x10) +
             *(float *)(&stack0x00000060 + uVar13 * 0x10) +
             *(float *)(unaff_RBP + -0x80 + uVar29 * 0x10);
    fVar31 = in_XMM4_Da + *(float *)(&stack0x00000044 + uVar17 * 0x10) +
             *(float *)(&stack0x00000064 + uVar13 * 0x10) +
             *(float *)(unaff_RBP + -0x7c + uVar29 * 0x10);
    if ((in_R10B == '\0') || (fVar31 < fVar32)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    uVar17 = (ulonglong)*(uint *)(param_4 + 0x9f81d4 + unaff_RBX);
    uVar13 = (ulonglong)*(uint *)(param_4 + 0x9f8194 + unaff_RBX);
    uVar29 = (ulonglong)*(uint *)(param_4 + 0x9f81b4 + unaff_RBX);
    param_3[-2] = 1.0;
    param_3[-5] = (unaff_XMM7_Da + fVar4 + fVar36 + fVar34) / fVar31;
    param_3[-4] = (unaff_XMM6_Da + fVar33 + fVar35 + fVar5) / fVar31;
    fVar4 = *(float *)(&stack0x00000038 + uVar17 * 0x10);
    fVar33 = *(float *)(&stack0x0000003c + uVar17 * 0x10);
    param_3[-3] = fVar32 / fVar31;
    fVar36 = *(float *)(&stack0x00000058 + uVar13 * 0x10);
    fVar35 = *(float *)(&stack0x0000005c + uVar13 * 0x10);
    fVar34 = *(float *)(&stack0x00000078 + uVar29 * 0x10);
    fVar5 = *(float *)(&stack0x0000007c + uVar29 * 0x10);
    fVar32 = in_XMM5_Da + *(float *)(&stack0x00000040 + uVar17 * 0x10) +
             *(float *)(&stack0x00000060 + uVar13 * 0x10) +
             *(float *)(unaff_RBP + -0x80 + uVar29 * 0x10);
    fVar31 = in_XMM4_Da + *(float *)(&stack0x00000044 + uVar17 * 0x10) +
             *(float *)(&stack0x00000064 + uVar13 * 0x10) +
             *(float *)(unaff_RBP + -0x7c + uVar29 * 0x10);
    if ((!bVar6) || (fVar31 < fVar32)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    uVar17 = (ulonglong)*(uint *)(param_4 + 0x9f81d8 + unaff_RBX);
    uVar13 = (ulonglong)*(uint *)(param_4 + 0x9f8198 + unaff_RBX);
    uVar29 = (ulonglong)*(uint *)(param_4 + 0x9f81b8 + unaff_RBX);
    param_3[2] = 1.0;
    param_3[-1] = (unaff_XMM7_Da + fVar4 + fVar36 + fVar34) / fVar31;
    *param_3 = (unaff_XMM6_Da + fVar33 + fVar35 + fVar5) / fVar31;
    fVar4 = *(float *)(&stack0x00000038 + uVar17 * 0x10);
    fVar33 = *(float *)(&stack0x0000003c + uVar17 * 0x10);
    param_3[1] = fVar32 / fVar31;
    fVar36 = *(float *)(&stack0x00000058 + uVar13 * 0x10);
    fVar35 = *(float *)(&stack0x0000005c + uVar13 * 0x10);
    fVar34 = *(float *)(&stack0x00000078 + uVar29 * 0x10);
    fVar5 = *(float *)(&stack0x0000007c + uVar29 * 0x10);
    fVar32 = in_XMM5_Da + *(float *)(&stack0x00000040 + uVar17 * 0x10) +
             *(float *)(&stack0x00000060 + uVar13 * 0x10) +
             *(float *)(unaff_RBP + -0x80 + uVar29 * 0x10);
    fVar31 = in_XMM4_Da + *(float *)(&stack0x00000044 + uVar17 * 0x10) +
             *(float *)(&stack0x00000064 + uVar13 * 0x10) +
             *(float *)(unaff_RBP + -0x7c + uVar29 * 0x10);
    if ((!bVar6) || (fVar31 < fVar32)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    uVar13 = (ulonglong)*(uint *)(param_4 + 0x9f81dc + unaff_RBX);
    uVar29 = (ulonglong)*(uint *)(param_4 + 0x9f819c + unaff_RBX);
    lVar9 = (ulonglong)*(uint *)(param_4 + 0x9f81bc + unaff_RBX) * 0x10;
    param_3[6] = 1.0;
    param_3[3] = (unaff_XMM7_Da + fVar4 + fVar36 + fVar34) / fVar31;
    param_3[4] = (unaff_XMM6_Da + fVar33 + fVar35 + fVar5) / fVar31;
    fVar4 = *(float *)(&stack0x00000038 + uVar13 * 0x10);
    fVar33 = *(float *)(&stack0x0000003c + uVar13 * 0x10);
    param_3[5] = fVar32 / fVar31;
    fVar36 = *(float *)(&stack0x00000058 + uVar29 * 0x10);
    fVar35 = *(float *)(&stack0x0000005c + uVar29 * 0x10);
    fVar34 = *(float *)(&stack0x00000078 + lVar9);
    fVar5 = *(float *)(&stack0x0000007c + lVar9);
    fVar32 = in_XMM5_Da + *(float *)(&stack0x00000040 + uVar13 * 0x10) +
             *(float *)(&stack0x00000060 + uVar29 * 0x10) + *(float *)(unaff_RBP + -0x80 + lVar9);
    fVar31 = in_XMM4_Da + *(float *)(&stack0x00000044 + uVar13 * 0x10) +
             *(float *)(&stack0x00000064 + uVar29 * 0x10) + *(float *)(unaff_RBP + -0x7c + lVar9);
    if ((!bVar6) || (fVar31 < fVar32)) {
      in_R10B = '\0';
    }
    else {
      in_R10B = '\x01';
    }
    param_3[10] = 1.0;
    param_4 = param_4 + 0x10;
    param_3[7] = (unaff_XMM7_Da + fVar4 + fVar36 + fVar34) / fVar31;
    param_3[8] = (unaff_XMM6_Da + fVar33 + fVar35 + fVar5) / fVar31;
    param_3[9] = fVar32 / fVar31;
    param_3 = param_3 + 0x10;
    in_R11 = in_R11 + -1;
  } while (in_R11 != 0);
  if (in_R10B != '\0') {
    uStack0000000000000034 = 0;
    do {
      uVar27 = uStack0000000000000034 * 3;
      pfVar1 = (float *)(unaff_RBP + -0x60 +
                        (ulonglong)*(uint *)(unaff_RBX + 0x9f8100 + (ulonglong)uVar27 * 4) * 0x10);
      fVar4 = pfVar1[2];
      pfVar2 = (float *)(unaff_RBP + -0x60 +
                        (ulonglong)*(uint *)(unaff_RBX + 0x9f8100 + (ulonglong)(uVar27 + 2) * 4) *
                        0x10);
      pfVar3 = (float *)(unaff_RBP + -0x60 +
                        (ulonglong)*(uint *)(unaff_RBX + 0x9f8100 + (ulonglong)(uVar27 + 1) * 4) *
                        0x10);
      uVar22 = (uint)(*pfVar1 + 0.5);
      uVar7 = (uint)(pfVar1[1] + 0.5);
      uVar21 = (uint)(*pfVar2 + 0.5);
      uVar25 = (uint)(pfVar2[1] + 0.5);
      iVar14 = uVar21 - uVar22;
      iVar18 = uVar7 - uVar25;
      uVar20 = (uint)(*pfVar3 + 0.5);
      uVar26 = (uint)(pfVar3[1] + 0.5);
      iVar10 = uVar22 - uVar20;
      iVar19 = uVar25 - uVar26;
      iVar24 = uVar26 - uVar7;
      iVar15 = iVar14 * iVar24 - iVar18 * iVar10;
      uVar27 = uVar21;
      if ((int)uVar22 < (int)uVar21) {
        uVar27 = uVar22;
      }
      uVar11 = uVar20;
      if ((int)uVar27 < (int)uVar20) {
        uVar11 = uVar27;
      }
      uVar27 = 0;
      if (0 < (int)uVar11) {
        uVar27 = uVar11;
      }
      uVar27 = uVar27 & 0xfffffffe;
      fVar33 = 1.0 / (float)iVar15;
      uVar11 = uVar21;
      if ((int)uVar21 < (int)uVar22) {
        uVar11 = uVar22;
      }
      fVar36 = (pfVar2[2] - fVar4) * fVar33;
      fVar33 = (pfVar3[2] - fVar4) * fVar33;
      uVar8 = uVar20;
      if ((int)uVar20 < (int)uVar11) {
        uVar8 = uVar11;
      }
      uVar11 = 0x27f;
      if ((int)uVar8 < 0x27f) {
        uVar11 = uVar8;
      }
      uVar8 = uVar25;
      if ((int)uVar7 < (int)uVar25) {
        uVar8 = uVar7;
      }
      uVar16 = uVar26;
      if ((int)uVar8 < (int)uVar26) {
        uVar16 = uVar8;
      }
      uStackX_14 = 0;
      if (0 < (int)uVar16) {
        uStackX_14 = uVar16;
      }
      uStackX_14 = uStackX_14 & 0xfffffffe;
      uVar8 = uVar25;
      if ((int)uVar25 < (int)uVar7) {
        uVar8 = uVar7;
      }
      uVar16 = uVar26;
      if ((int)uVar26 < (int)uVar8) {
        uVar16 = uVar8;
      }
      uVar8 = 0x167;
      if ((int)uVar16 < 0x167) {
        uVar8 = uVar16;
      }
      if (0 < iVar15) {
        fVar35 = (float)iVar18 * fVar33 + (float)iVar24 * fVar36;
        uVar16 = (uStackX_14 * (uVar20 - uVar21) - uVar20 * uVar25) + uVar27 * iVar19 +
                 uVar21 * uVar26;
        uVar26 = (uStackX_14 * iVar10 - uVar22 * uVar26) + uVar27 * iVar24 + uVar20 * uVar7;
        uVar7 = (uStackX_14 * iVar14 - uVar21 * uVar7) + uVar27 * iVar18 + uVar22 * uVar25;
        if ((int)uStackX_14 < (int)uVar8) {
          lVar9 = (longlong)(int)(uStackX_14 * 0x280 + uVar27);
          do {
            bVar6 = false;
            fVar34 = (float)(int)uVar26 * fVar36 + fVar4 + (float)(int)uVar7 * fVar33;
            if ((int)uVar27 < (int)uVar11) {
              lVar23 = lVar9;
              uStackX_10 = uVar27;
              uVar12 = uVar16;
              uVar22 = uVar26;
              uVar25 = uVar7;
              if (3 < (int)(uVar11 - uVar27)) {
                uVar28 = ((uVar11 - uVar27) - 4 >> 2) + 1;
                uVar29 = (ulonglong)uVar28;
                uStackX_10 = uVar27 + uVar28 * 4;
                do {
                  if ((bVar6) ||
                     ((0 < (int)(uVar25 | uVar22 | uVar12) &&
                      (*(float *)(*(longlong *)(unaff_RSI + 0x348 + unaff_R14 * 8) + lVar23 * 4) <=
                       fVar34)))) {
                    bVar6 = true;
                  }
                  else {
                    bVar6 = false;
                  }
                  if ((bVar6) ||
                     ((0 < (int)(uVar25 + iVar18 | uVar22 + iVar24 | uVar12 + iVar19) &&
                      (*(float *)(*(longlong *)(unaff_RSI + 0x348 + unaff_R14 * 8) + 4 + lVar23 * 4)
                       <= fVar34 + fVar35)))) {
                    bVar6 = true;
                  }
                  else {
                    bVar6 = false;
                  }
                  uVar12 = uVar12 + iVar19 + iVar19;
                  fVar34 = fVar34 + fVar35 + fVar35;
                  uVar22 = uVar22 + iVar24 + iVar24;
                  uVar25 = uVar25 + iVar18 + iVar18;
                  if ((bVar6) ||
                     ((0 < (int)(uVar25 | uVar22 | uVar12) &&
                      (*(float *)(*(longlong *)(unaff_RSI + 0x348 + unaff_R14 * 8) + 8 + lVar23 * 4)
                       <= fVar34)))) {
                    bVar6 = true;
                  }
                  else {
                    bVar6 = false;
                  }
                  uVar12 = uVar12 + iVar19;
                  fVar34 = fVar34 + fVar35;
                  uVar22 = uVar22 + iVar24;
                  uVar25 = uVar25 + iVar18;
                  if ((bVar6) ||
                     ((0 < (int)(uVar25 | uVar22 | uVar12) &&
                      (*(float *)(*(longlong *)(unaff_RSI + 0x348 + unaff_R14 * 8) + 0xc +
                                 lVar23 * 4) <= fVar34)))) {
                    bVar6 = true;
                  }
                  else {
                    bVar6 = false;
                  }
                  uVar12 = uVar12 + iVar19;
                  fVar34 = fVar34 + fVar35;
                  uVar22 = uVar22 + iVar24;
                  uVar25 = uVar25 + iVar18;
                  lVar23 = lVar23 + 4;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
              if ((int)uStackX_10 < (int)uVar11) {
                lVar23 = lVar23 * 4;
                lVar30 = (longlong)(int)(uVar11 - uStackX_10);
                do {
                  if ((bVar6) ||
                     ((0 < (int)(uVar25 | uVar22 | uVar12) &&
                      (*(float *)(lVar23 + *(longlong *)(unaff_RSI + 0x348 + unaff_R14 * 8)) <=
                       fVar34)))) {
                    bVar6 = true;
                  }
                  else {
                    bVar6 = false;
                  }
                  uVar12 = uVar12 + iVar19;
                  fVar34 = fVar34 + fVar35;
                  uVar22 = uVar22 + iVar24;
                  uVar25 = uVar25 + iVar18;
                  lVar23 = lVar23 + 4;
                  lVar30 = lVar30 + -1;
                } while (lVar30 != 0);
              }
              if (bVar6) goto LAB_1804954a0;
            }
            uStackX_14 = uStackX_14 + 1;
            lVar9 = lVar9 + 0x280;
            uVar16 = uVar16 + (uVar20 - uVar21);
            uVar26 = uVar26 + iVar10;
            uVar7 = uVar7 + iVar14;
          } while ((int)uStackX_14 < (int)uVar8);
        }
      }
      unaff_RBX = 0x180000000;
      uStack0000000000000034 = uStack0000000000000034 + 1;
    } while (uStack0000000000000034 < 0xc);
  }
LAB_1804954a0:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x20) ^ (ulonglong)&stack0x00000000);
}





