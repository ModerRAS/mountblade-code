#include "TaleWorlds.Native.Split.h"

// 03_rendering_part413.c - 2 个函数

// 函数: void FUN_1804940f4(uint64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_1804940f4(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int64_t in_RAX;
  int iVar15;
  uint uVar16;
  uint64_t uVar17;
  int iVar18;
  uint uVar19;
  uint64_t uVar20;
  int iVar21;
  float *unaff_RBP;
  int64_t unaff_RSI;
  int iVar22;
  uint uVar23;
  float *pfVar24;
  uint uVar25;
  int64_t lVar26;
  uint uVar27;
  float *in_R10;
  int iVar28;
  int64_t in_R11;
  int64_t lVar29;
  uint uVar30;
  uint uVar31;
  int64_t unaff_R14;
  uint uVar32;
  uint64_t uVar33;
  int64_t lVar34;
  float fVar35;
  uint64_t uVar36;
  uint64_t uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float in_XMM4_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  float unaff_XMM9_Da;
  float fStack000000000000003c;
  uint uStack0000000000000040;
  uint uStack0000000000000048;
  uint uStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  float fStack000000000000006c;
  float in_stack_00000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  float fStack000000000000007c;
  
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM8_Dd;
  fVar1 = unaff_RBP[2];
  fVar2 = *unaff_RBP;
  FUN_1800946d0(param_1,param_2,param_3 + in_RAX * 0x40);
  fVar3 = *in_R10;
  fVar39 = in_R10[4];
  in_stack_00000060 = fVar3 * unaff_RBP[-0x18];
  fStack0000000000000064 = fVar3 * unaff_RBP[-0x17];
  in_stack_00000068 = fVar3 * unaff_RBP[-0x16];
  fStack000000000000006c = fVar3 * unaff_RBP[-0x15];
  pfVar24 = unaff_RBP + 0xd;
  fVar3 = in_R10[1];
  lVar26 = 0;
  in_stack_00000070 = fVar39 * unaff_RBP[-0x18];
  fStack0000000000000074 = fVar39 * unaff_RBP[-0x17];
  in_stack_00000078 = fVar39 * unaff_RBP[-0x16];
  fStack000000000000007c = fVar39 * unaff_RBP[-0x15];
  fVar39 = unaff_RBP[-9];
  lVar29 = 2;
  fVar42 = unaff_RBP[-10];
  fVar41 = unaff_RBP[-0xb];
  fVar40 = unaff_RBP[-0xc];
  fVar4 = in_R10[5];
  unaff_RBP[-0x20] = fVar3 * unaff_RBP[-0x14];
  unaff_RBP[-0x1f] = fVar3 * unaff_RBP[-0x13];
  unaff_RBP[-0x1e] = fVar3 * unaff_RBP[-0x12];
  unaff_RBP[-0x1d] = fVar3 * unaff_RBP[-0x11];
  fVar3 = in_R10[2];
  unaff_RBP[-0x1c] = fVar4 * unaff_RBP[-0x14];
  unaff_RBP[-0x1b] = fVar4 * unaff_RBP[-0x13];
  unaff_RBP[-0x1a] = fVar4 * unaff_RBP[-0x12];
  unaff_RBP[-0x19] = fVar4 * unaff_RBP[-0x11];
  fVar4 = in_R10[6];
  bVar9 = true;
  unaff_RBP[-8] = fVar3 * unaff_RBP[-0x10];
  unaff_RBP[-7] = fVar3 * unaff_RBP[-0xf];
  unaff_RBP[-6] = fVar3 * unaff_RBP[-0xe];
  unaff_RBP[-5] = fVar3 * unaff_RBP[-0xd];
  fStack000000000000003c = fVar4 * unaff_RBP[-0xd];
  unaff_RBP[-4] = fVar4 * unaff_RBP[-0x10];
  unaff_RBP[-3] = fVar4 * unaff_RBP[-0xf];
  unaff_RBP[-2] = fVar4 * unaff_RBP[-0xe];
  unaff_RBP[-1] = fStack000000000000003c;
  do {
    uVar20 = (uint64_t)*(uint *)(&processed_var_4400_ptr + lVar26);
    uVar17 = (uint64_t)*(uint *)(&processed_var_4336_ptr + lVar26);
    uVar33 = (uint64_t)*(uint *)(&processed_var_4368_ptr + lVar26);
    fVar3 = (&stack0x00000060)[uVar20 * 4];
    fVar4 = *(float *)((int64_t)&stack0x00000064 + uVar20 * 0x10);
    fVar5 = unaff_RBP[uVar17 * 4 + -0x20];
    fVar6 = unaff_RBP[uVar17 * 4 + -0x1f];
    fVar7 = unaff_RBP[uVar33 * 4 + -8];
    fVar8 = unaff_RBP[uVar33 * 4 + -7];
    fVar38 = fVar42 + (&stack0x00000068)[uVar20 * 4] + unaff_RBP[uVar17 * 4 + -0x1e] +
             unaff_RBP[uVar33 * 4 + -6];
    fVar35 = fVar39 + *(float *)((int64_t)&stack0x0000006c + uVar20 * 0x10) +
             unaff_RBP[uVar17 * 4 + -0x1d] + unaff_RBP[uVar33 * 4 + -5];
    if ((!bVar9) || (fVar35 < fVar38)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    uVar20 = (uint64_t)*(uint *)(&processed_var_4404_ptr + lVar26);
    uVar17 = (uint64_t)*(uint *)(&processed_var_4340_ptr + lVar26);
    uVar33 = (uint64_t)*(uint *)(&processed_var_4372_ptr + lVar26);
    pfVar24[-2] = 1.0;
    pfVar24[-5] = (fVar40 + fVar3 + fVar5 + fVar7) / fVar35;
    pfVar24[-4] = (fVar41 + fVar4 + fVar6 + fVar8) / fVar35;
    fVar3 = (&stack0x00000060)[uVar20 * 4];
    fVar4 = *(float *)((int64_t)&stack0x00000064 + uVar20 * 0x10);
    pfVar24[-3] = fVar38 / fVar35;
    fVar5 = unaff_RBP[uVar17 * 4 + -0x20];
    fVar6 = unaff_RBP[uVar17 * 4 + -0x1f];
    fVar7 = unaff_RBP[uVar33 * 4 + -8];
    fVar8 = unaff_RBP[uVar33 * 4 + -7];
    fVar38 = fVar42 + (&stack0x00000068)[uVar20 * 4] + unaff_RBP[uVar17 * 4 + -0x1e] +
             unaff_RBP[uVar33 * 4 + -6];
    fVar35 = fVar39 + *(float *)((int64_t)&stack0x0000006c + uVar20 * 0x10) +
             unaff_RBP[uVar17 * 4 + -0x1d] + unaff_RBP[uVar33 * 4 + -5];
    if ((!bVar9) || (fVar35 < fVar38)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    uVar20 = (uint64_t)*(uint *)(&processed_var_4408_ptr + lVar26);
    uVar17 = (uint64_t)*(uint *)(&processed_var_4344_ptr + lVar26);
    uVar33 = (uint64_t)*(uint *)(&processed_var_4376_ptr + lVar26);
    pfVar24[2] = 1.0;
    pfVar24[-1] = (fVar40 + fVar3 + fVar5 + fVar7) / fVar35;
    *pfVar24 = (fVar41 + fVar4 + fVar6 + fVar8) / fVar35;
    fVar3 = (&stack0x00000060)[uVar20 * 4];
    fVar4 = *(float *)((int64_t)&stack0x00000064 + uVar20 * 0x10);
    pfVar24[1] = fVar38 / fVar35;
    fVar5 = unaff_RBP[uVar17 * 4 + -0x20];
    fVar6 = unaff_RBP[uVar17 * 4 + -0x1f];
    fVar7 = unaff_RBP[uVar33 * 4 + -8];
    fVar8 = unaff_RBP[uVar33 * 4 + -7];
    fVar38 = fVar42 + (&stack0x00000068)[uVar20 * 4] + unaff_RBP[uVar17 * 4 + -0x1e] +
             unaff_RBP[uVar33 * 4 + -6];
    fVar35 = fVar39 + *(float *)((int64_t)&stack0x0000006c + uVar20 * 0x10) +
             unaff_RBP[uVar17 * 4 + -0x1d] + unaff_RBP[uVar33 * 4 + -5];
    if ((!bVar9) || (fVar35 < fVar38)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    uVar20 = (uint64_t)*(uint *)(&processed_var_4412_ptr + lVar26);
    uVar17 = (uint64_t)*(uint *)(&processed_var_4348_ptr + lVar26);
    uVar33 = (uint64_t)*(uint *)(&processed_var_4380_ptr + lVar26);
    pfVar24[6] = 1.0;
    pfVar24[3] = (fVar40 + fVar3 + fVar5 + fVar7) / fVar35;
    pfVar24[4] = (fVar41 + fVar4 + fVar6 + fVar8) / fVar35;
    fVar3 = (&stack0x00000060)[uVar20 * 4];
    fVar4 = *(float *)((int64_t)&stack0x00000064 + uVar20 * 0x10);
    pfVar24[5] = fVar38 / fVar35;
    fVar5 = unaff_RBP[uVar17 * 4 + -0x20];
    fVar6 = unaff_RBP[uVar17 * 4 + -0x1f];
    fVar7 = unaff_RBP[uVar33 * 4 + -8];
    fVar8 = unaff_RBP[uVar33 * 4 + -7];
    fVar38 = fVar42 + (&stack0x00000068)[uVar20 * 4] + unaff_RBP[uVar17 * 4 + -0x1e] +
             unaff_RBP[uVar33 * 4 + -6];
    fVar35 = fVar39 + *(float *)((int64_t)&stack0x0000006c + uVar20 * 0x10) +
             unaff_RBP[uVar17 * 4 + -0x1d] + unaff_RBP[uVar33 * 4 + -5];
    if ((!bVar9) || (fVar35 < fVar38)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    pfVar24[10] = 1.0;
    lVar26 = lVar26 + 0x10;
    pfVar24[7] = (fVar40 + fVar3 + fVar5 + fVar7) / fVar35;
    pfVar24[8] = (fVar41 + fVar4 + fVar6 + fVar8) / fVar35;
    pfVar24[9] = fVar38 / fVar35;
    pfVar24 = pfVar24 + 0x10;
    lVar29 = lVar29 + -1;
  } while (lVar29 != 0);
  if (bVar9) {
    uStack000000000000005c = 0;
    do {
      uVar11 = uStack000000000000005c * 3;
      uVar36 = *(uint64_t *)
                (unaff_RBP + (uint64_t)*(uint *)(&system_handler3_ptr + (uint64_t)uVar11 * 4) * 4 + 8 +
                2);
      *(uint64_t *)(unaff_RBP + -8) =
           *(uint64_t *)
            (unaff_RBP + (uint64_t)*(uint *)(&system_handler3_ptr + (uint64_t)uVar11 * 4) * 4 + 8);
      *(uint64_t *)(unaff_RBP + -6) = uVar36;
      if (unaff_XMM7_Da + in_XMM4_Da * fVar2 + unaff_XMM6_Da * fVar1 < 0.0) {
        uVar36 = *(uint64_t *)
                  (unaff_RBP +
                  (uint64_t)*(uint *)(&system_handler3_ptr + (uint64_t)(uVar11 + 1) * 4) * 4 + 8);
        uVar37 = *(uint64_t *)
                  (unaff_RBP +
                   (uint64_t)*(uint *)(&system_handler3_ptr + (uint64_t)(uVar11 + 1) * 4) * 4 + 8 + 2);
        uVar11 = *(uint *)(&system_handler3_ptr + (uint64_t)(uVar11 + 2) * 4);
      }
      else {
        uVar36 = *(uint64_t *)
                  (unaff_RBP +
                  (uint64_t)*(uint *)(&system_handler3_ptr + (uint64_t)(uVar11 + 2) * 4) * 4 + 8);
        uVar37 = *(uint64_t *)
                  (unaff_RBP +
                   (uint64_t)*(uint *)(&system_handler3_ptr + (uint64_t)(uVar11 + 2) * 4) * 4 + 8 + 2);
        uVar11 = *(uint *)(&system_handler3_ptr + (uint64_t)(uVar11 + 1) * 4);
      }
      fVar3 = unaff_RBP[-6];
      *(uint64_t *)(unaff_RBP + -4) = uVar36;
      *(uint64_t *)(unaff_RBP + -2) = uVar37;
      uVar36 = *(uint64_t *)(unaff_RBP + (uint64_t)uVar11 * 4 + 8 + 2);
      *(uint64_t *)unaff_RBP = *(uint64_t *)(unaff_RBP + (uint64_t)uVar11 * 4 + 8);
      *(uint64_t *)(unaff_RBP + 2) = uVar36;
      uVar23 = (uint)(unaff_RBP[-7] + 0.5);
      uVar25 = (uint)(unaff_RBP[-8] + 0.5);
      uVar32 = (uint)(unaff_RBP[-3] + 0.5);
      uVar27 = (uint)(unaff_RBP[-4] + 0.5);
      iVar21 = uVar23 - uVar32;
      iVar15 = uVar27 - uVar25;
      uVar31 = (uint)(unaff_RBP[1] + 0.5);
      uVar30 = (uint)(*unaff_RBP + 0.5);
      iVar22 = uVar32 - uVar31;
      iVar28 = uVar31 - uVar23;
      iVar10 = uVar25 - uVar30;
      iVar18 = iVar28 * iVar15 - iVar10 * iVar21;
      uVar11 = uVar27;
      if ((int)uVar25 < (int)uVar27) {
        uVar11 = uVar25;
      }
      uVar12 = uVar30;
      if ((int)uVar11 < (int)uVar30) {
        uVar12 = uVar11;
      }
      uVar11 = 0;
      if (0 < (int)uVar12) {
        uVar11 = uVar12;
      }
      uVar11 = uVar11 & 0xfffffffe;
      fVar39 = unaff_XMM9_Da / (float)iVar18;
      uVar12 = uVar27;
      if ((int)uVar27 < (int)uVar25) {
        uVar12 = uVar25;
      }
      uVar13 = uVar30;
      if ((int)uVar30 < (int)uVar12) {
        uVar13 = uVar12;
      }
      uVar12 = 0x27f;
      if ((int)uVar13 < 0x27f) {
        uVar12 = uVar13;
      }
      uVar13 = uVar32;
      if ((int)uVar23 < (int)uVar32) {
        uVar13 = uVar23;
      }
      uVar19 = uVar31;
      if ((int)uVar13 < (int)uVar31) {
        uVar19 = uVar13;
      }
      fVar42 = (unaff_RBP[-2] - fVar3) * fVar39;
      fVar39 = (unaff_RBP[2] - fVar3) * fVar39;
      uStack0000000000000040 = 0;
      if (0 < (int)uVar19) {
        uStack0000000000000040 = uVar19;
      }
      uStack0000000000000040 = uStack0000000000000040 & 0xfffffffe;
      uVar13 = uVar32;
      if ((int)uVar32 < (int)uVar23) {
        uVar13 = uVar23;
      }
      uVar19 = uVar31;
      if ((int)uVar31 < (int)uVar13) {
        uVar19 = uVar13;
      }
      uVar13 = 0x167;
      if ((int)uVar19 < 0x167) {
        uVar13 = uVar19;
      }
      if (0 < iVar18) {
        fVar41 = (float)iVar21 * fVar39 + (float)iVar28 * fVar42;
        uVar19 = (uVar27 * uVar31 - uVar30 * uVar32) + uStack0000000000000040 * (uVar30 - uVar27) +
                 uVar11 * iVar22;
        uVar31 = (uStack0000000000000040 * iVar10 - uVar25 * uVar31) + uVar23 * uVar30 +
                 uVar11 * iVar28;
        uVar23 = uVar25 * uVar32 + (uStack0000000000000040 * iVar15 - uVar23 * uVar27) +
                 uVar11 * iVar21;
        if ((int)uStack0000000000000040 < (int)uVar13) {
          lVar26 = (int64_t)(int)(uStack0000000000000040 * 0x280 + uVar11);
          do {
            bVar9 = false;
            fVar40 = (float)(int)uVar31 * fVar42 + fVar3 + (float)(int)uVar23 * fVar39;
            if ((int)uVar11 < (int)uVar12) {
              lVar29 = lVar26;
              uStack0000000000000048 = uVar11;
              uVar16 = uVar19;
              uVar25 = uVar31;
              uVar32 = uVar23;
              if (3 < (int)(uVar12 - uVar11)) {
                uVar14 = ((uVar12 - uVar11) - 4 >> 2) + 1;
                uVar33 = (uint64_t)uVar14;
                uStack0000000000000048 = uVar11 + uVar14 * 4;
                do {
                  if ((bVar9) ||
                     ((0 < (int)(uVar32 | uVar25 | uVar16) &&
                      (*(float *)(*(int64_t *)(unaff_RSI + 0x348 + unaff_R14 * 8) + lVar29 * 4) <=
                       fVar40)))) {
                    bVar9 = true;
                  }
                  else {
                    bVar9 = false;
                  }
                  if ((bVar9) ||
                     ((0 < (int)(uVar32 + iVar21 | uVar25 + iVar28 | uVar16 + iVar22) &&
                      (*(float *)(*(int64_t *)(unaff_RSI + 0x348 + unaff_R14 * 8) + 4 + lVar29 * 4)
                       <= fVar40 + fVar41)))) {
                    bVar9 = true;
                  }
                  else {
                    bVar9 = false;
                  }
                  uVar16 = uVar16 + iVar22 + iVar22;
                  fVar40 = fVar40 + fVar41 + fVar41;
                  uVar25 = uVar25 + iVar28 + iVar28;
                  uVar32 = uVar32 + iVar21 + iVar21;
                  if ((bVar9) ||
                     ((0 < (int)(uVar32 | uVar25 | uVar16) &&
                      (*(float *)(*(int64_t *)(unaff_RSI + 0x348 + unaff_R14 * 8) + 8 + lVar29 * 4)
                       <= fVar40)))) {
                    bVar9 = true;
                  }
                  else {
                    bVar9 = false;
                  }
                  uVar16 = uVar16 + iVar22;
                  fVar40 = fVar40 + fVar41;
                  uVar25 = uVar25 + iVar28;
                  uVar32 = uVar32 + iVar21;
                  if ((bVar9) ||
                     ((0 < (int)(uVar32 | uVar25 | uVar16) &&
                      (*(float *)(*(int64_t *)(unaff_RSI + 0x348 + unaff_R14 * 8) + 0xc +
                                 lVar29 * 4) <= fVar40)))) {
                    bVar9 = true;
                  }
                  else {
                    bVar9 = false;
                  }
                  uVar16 = uVar16 + iVar22;
                  fVar40 = fVar40 + fVar41;
                  uVar25 = uVar25 + iVar28;
                  uVar32 = uVar32 + iVar21;
                  lVar29 = lVar29 + 4;
                  uVar33 = uVar33 - 1;
                } while (uVar33 != 0);
              }
              if ((int)uStack0000000000000048 < (int)uVar12) {
                lVar29 = lVar29 * 4;
                lVar34 = (int64_t)(int)(uVar12 - uStack0000000000000048);
                do {
                  if ((bVar9) ||
                     ((0 < (int)(uVar32 | uVar25 | uVar16) &&
                      (*(float *)(lVar29 + *(int64_t *)(unaff_RSI + 0x348 + unaff_R14 * 8)) <=
                       fVar40)))) {
                    bVar9 = true;
                  }
                  else {
                    bVar9 = false;
                  }
                  uVar16 = uVar16 + iVar22;
                  fVar40 = fVar40 + fVar41;
                  uVar25 = uVar25 + iVar28;
                  uVar32 = uVar32 + iVar21;
                  lVar29 = lVar29 + 4;
                  lVar34 = lVar34 + -1;
                } while (lVar34 != 0);
              }
              if (bVar9) goto LAB_180494a88;
            }
            uStack0000000000000040 = uStack0000000000000040 + 1;
            lVar26 = lVar26 + 0x280;
            uVar19 = uVar19 + (uVar30 - uVar27);
            uVar23 = uVar23 + iVar15;
            uVar31 = uVar31 + iVar10;
          } while ((int)uStack0000000000000040 < (int)uVar13);
        }
      }
      uStack000000000000005c = uStack000000000000005c + 1;
    } while (uStack000000000000005c < 0xc);
  }
LAB_180494a88:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x28) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180494310(uint64_t param_1,uint64_t param_2,float *param_3,int64_t param_4)
void FUN_180494310(uint64_t param_1,uint64_t param_2,float *param_3,int64_t param_4)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint64_t uVar11;
  int iVar12;
  uint uVar13;
  uint64_t uVar14;
  char unaff_BL;
  int iVar15;
  float *unaff_RBP;
  int64_t unaff_RSI;
  int iVar16;
  int64_t unaff_RDI;
  uint uVar17;
  int64_t lVar18;
  uint uVar19;
  char in_R10B;
  uint uVar20;
  int64_t lVar21;
  int iVar22;
  int64_t in_R11;
  uint uVar23;
  uint uVar24;
  int64_t unaff_R14;
  uint uVar25;
  uint64_t uVar26;
  int64_t lVar27;
  float fVar28;
  uint64_t uVar29;
  uint64_t uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM9_Da;
  char cStackX_24;
  uint uStack0000000000000040;
  uint uStack0000000000000048;
  uint uStack000000000000005c;
  
  do {
    uVar14 = (uint64_t)*(uint *)(param_4 + 0x9f81d0 + unaff_RDI);
    uVar11 = (uint64_t)*(uint *)(param_4 + 0x9f8190 + unaff_RDI);
    uVar26 = (uint64_t)*(uint *)(param_4 + 0x9f81b0 + unaff_RDI);
    fVar1 = *(float *)(&stack0x00000060 + uVar14 * 0x10);
    fVar32 = *(float *)(&stack0x00000064 + uVar14 * 0x10);
    fVar35 = unaff_RBP[uVar11 * 4 + -0x20];
    fVar34 = unaff_RBP[uVar11 * 4 + -0x1f];
    fVar33 = unaff_RBP[uVar26 * 4 + -8];
    fVar2 = unaff_RBP[uVar26 * 4 + -7];
    fVar31 = in_XMM5_Da + *(float *)(&stack0x00000068 + uVar14 * 0x10) +
             unaff_RBP[uVar11 * 4 + -0x1e] + unaff_RBP[uVar26 * 4 + -6];
    fVar28 = in_XMM4_Da + *(float *)(&stack0x0000006c + uVar14 * 0x10) +
             unaff_RBP[uVar11 * 4 + -0x1d] + unaff_RBP[uVar26 * 4 + -5];
    if ((in_R10B == '\0') || (fVar28 < fVar31)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    uVar14 = (uint64_t)*(uint *)(param_4 + 0x9f81d4 + unaff_RDI);
    uVar11 = (uint64_t)*(uint *)(param_4 + 0x9f8194 + unaff_RDI);
    uVar26 = (uint64_t)*(uint *)(param_4 + 0x9f81b4 + unaff_RDI);
    param_3[-2] = 1.0;
    param_3[-5] = (unaff_XMM7_Da + fVar1 + fVar35 + fVar33) / fVar28;
    param_3[-4] = (unaff_XMM6_Da + fVar32 + fVar34 + fVar2) / fVar28;
    fVar1 = *(float *)(&stack0x00000060 + uVar14 * 0x10);
    fVar32 = *(float *)(&stack0x00000064 + uVar14 * 0x10);
    param_3[-3] = fVar31 / fVar28;
    fVar35 = unaff_RBP[uVar11 * 4 + -0x20];
    fVar34 = unaff_RBP[uVar11 * 4 + -0x1f];
    fVar33 = unaff_RBP[uVar26 * 4 + -8];
    fVar2 = unaff_RBP[uVar26 * 4 + -7];
    fVar31 = in_XMM5_Da + *(float *)(&stack0x00000068 + uVar14 * 0x10) +
             unaff_RBP[uVar11 * 4 + -0x1e] + unaff_RBP[uVar26 * 4 + -6];
    fVar28 = in_XMM4_Da + *(float *)(&stack0x0000006c + uVar14 * 0x10) +
             unaff_RBP[uVar11 * 4 + -0x1d] + unaff_RBP[uVar26 * 4 + -5];
    if ((!bVar3) || (fVar28 < fVar31)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    uVar14 = (uint64_t)*(uint *)(param_4 + 0x9f81d8 + unaff_RDI);
    uVar11 = (uint64_t)*(uint *)(param_4 + 0x9f8198 + unaff_RDI);
    uVar26 = (uint64_t)*(uint *)(param_4 + 0x9f81b8 + unaff_RDI);
    param_3[2] = 1.0;
    param_3[-1] = (unaff_XMM7_Da + fVar1 + fVar35 + fVar33) / fVar28;
    *param_3 = (unaff_XMM6_Da + fVar32 + fVar34 + fVar2) / fVar28;
    fVar1 = *(float *)(&stack0x00000060 + uVar14 * 0x10);
    fVar32 = *(float *)(&stack0x00000064 + uVar14 * 0x10);
    param_3[1] = fVar31 / fVar28;
    fVar35 = unaff_RBP[uVar11 * 4 + -0x20];
    fVar34 = unaff_RBP[uVar11 * 4 + -0x1f];
    fVar33 = unaff_RBP[uVar26 * 4 + -8];
    fVar2 = unaff_RBP[uVar26 * 4 + -7];
    fVar31 = in_XMM5_Da + *(float *)(&stack0x00000068 + uVar14 * 0x10) +
             unaff_RBP[uVar11 * 4 + -0x1e] + unaff_RBP[uVar26 * 4 + -6];
    fVar28 = in_XMM4_Da + *(float *)(&stack0x0000006c + uVar14 * 0x10) +
             unaff_RBP[uVar11 * 4 + -0x1d] + unaff_RBP[uVar26 * 4 + -5];
    if ((!bVar3) || (fVar28 < fVar31)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    uVar14 = (uint64_t)*(uint *)(param_4 + 0x9f81dc + unaff_RDI);
    uVar11 = (uint64_t)*(uint *)(param_4 + 0x9f819c + unaff_RDI);
    uVar26 = (uint64_t)*(uint *)(param_4 + 0x9f81bc + unaff_RDI);
    param_3[6] = 1.0;
    param_3[3] = (unaff_XMM7_Da + fVar1 + fVar35 + fVar33) / fVar28;
    param_3[4] = (unaff_XMM6_Da + fVar32 + fVar34 + fVar2) / fVar28;
    fVar1 = *(float *)(&stack0x00000060 + uVar14 * 0x10);
    fVar32 = *(float *)(&stack0x00000064 + uVar14 * 0x10);
    param_3[5] = fVar31 / fVar28;
    fVar35 = unaff_RBP[uVar11 * 4 + -0x20];
    fVar34 = unaff_RBP[uVar11 * 4 + -0x1f];
    fVar33 = unaff_RBP[uVar26 * 4 + -8];
    fVar2 = unaff_RBP[uVar26 * 4 + -7];
    fVar31 = in_XMM5_Da + *(float *)(&stack0x00000068 + uVar14 * 0x10) +
             unaff_RBP[uVar11 * 4 + -0x1e] + unaff_RBP[uVar26 * 4 + -6];
    fVar28 = in_XMM4_Da + *(float *)(&stack0x0000006c + uVar14 * 0x10) +
             unaff_RBP[uVar11 * 4 + -0x1d] + unaff_RBP[uVar26 * 4 + -5];
    if ((!bVar3) || (fVar28 < fVar31)) {
      in_R10B = '\0';
    }
    else {
      in_R10B = '\x01';
    }
    param_3[10] = 1.0;
    param_4 = param_4 + 0x10;
    param_3[7] = (unaff_XMM7_Da + fVar1 + fVar35 + fVar33) / fVar28;
    param_3[8] = (unaff_XMM6_Da + fVar32 + fVar34 + fVar2) / fVar28;
    param_3[9] = fVar31 / fVar28;
    param_3 = param_3 + 0x10;
    in_R11 = in_R11 + -1;
  } while (in_R11 != 0);
  if (in_R10B != '\0') {
    uStack000000000000005c = 0;
    do {
      uVar5 = uStack000000000000005c * 3;
      uVar29 = *(uint64_t *)
                (unaff_RBP +
                 (uint64_t)*(uint *)(unaff_RDI + 0x9f8100 + (uint64_t)uVar5 * 4) * 4 + 8 + 2);
      *(uint64_t *)(unaff_RBP + -8) =
           *(uint64_t *)
            (unaff_RBP + (uint64_t)*(uint *)(unaff_RDI + 0x9f8100 + (uint64_t)uVar5 * 4) * 4 + 8);
      *(uint64_t *)(unaff_RBP + -6) = uVar29;
      if (unaff_BL == '\0') {
        uVar29 = *(uint64_t *)
                  (unaff_RBP +
                  (uint64_t)*(uint *)(unaff_RDI + 0x9f8100 + (uint64_t)(uVar5 + 1) * 4) * 4 + 8);
        uVar30 = *(uint64_t *)
                  (unaff_RBP +
                   (uint64_t)*(uint *)(unaff_RDI + 0x9f8100 + (uint64_t)(uVar5 + 1) * 4) * 4 + 8 +
                  2);
        uVar5 = *(uint *)(unaff_RDI + 0x9f8100 + (uint64_t)(uVar5 + 2) * 4);
      }
      else {
        uVar29 = *(uint64_t *)
                  (unaff_RBP +
                  (uint64_t)*(uint *)(unaff_RDI + 0x9f8100 + (uint64_t)(uVar5 + 2) * 4) * 4 + 8);
        uVar30 = *(uint64_t *)
                  (unaff_RBP +
                   (uint64_t)*(uint *)(unaff_RDI + 0x9f8100 + (uint64_t)(uVar5 + 2) * 4) * 4 + 8 +
                  2);
        uVar5 = *(uint *)(unaff_RDI + 0x9f8100 + (uint64_t)(uVar5 + 1) * 4);
      }
      fVar1 = unaff_RBP[-6];
      *(uint64_t *)(unaff_RBP + -4) = uVar29;
      *(uint64_t *)(unaff_RBP + -2) = uVar30;
      uVar29 = *(uint64_t *)(unaff_RBP + (uint64_t)uVar5 * 4 + 8 + 2);
      *(uint64_t *)unaff_RBP = *(uint64_t *)(unaff_RBP + (uint64_t)uVar5 * 4 + 8);
      *(uint64_t *)(unaff_RBP + 2) = uVar29;
      uVar17 = (uint)(unaff_RBP[-7] + 0.5);
      uVar19 = (uint)(unaff_RBP[-8] + 0.5);
      uVar25 = (uint)(unaff_RBP[-3] + 0.5);
      uVar20 = (uint)(unaff_RBP[-4] + 0.5);
      iVar15 = uVar17 - uVar25;
      iVar9 = uVar20 - uVar19;
      uVar24 = (uint)(unaff_RBP[1] + 0.5);
      uVar23 = (uint)(*unaff_RBP + 0.5);
      iVar16 = uVar25 - uVar24;
      iVar22 = uVar24 - uVar17;
      iVar4 = uVar19 - uVar23;
      iVar12 = iVar22 * iVar9 - iVar4 * iVar15;
      uVar5 = uVar20;
      if ((int)uVar19 < (int)uVar20) {
        uVar5 = uVar19;
      }
      uVar6 = uVar23;
      if ((int)uVar5 < (int)uVar23) {
        uVar6 = uVar5;
      }
      uVar5 = 0;
      if (0 < (int)uVar6) {
        uVar5 = uVar6;
      }
      uVar5 = uVar5 & 0xfffffffe;
      fVar32 = unaff_XMM9_Da / (float)iVar12;
      uVar6 = uVar20;
      if ((int)uVar20 < (int)uVar19) {
        uVar6 = uVar19;
      }
      uVar7 = uVar23;
      if ((int)uVar23 < (int)uVar6) {
        uVar7 = uVar6;
      }
      uVar6 = 0x27f;
      if ((int)uVar7 < 0x27f) {
        uVar6 = uVar7;
      }
      uVar7 = uVar25;
      if ((int)uVar17 < (int)uVar25) {
        uVar7 = uVar17;
      }
      uVar13 = uVar24;
      if ((int)uVar7 < (int)uVar24) {
        uVar13 = uVar7;
      }
      fVar35 = (unaff_RBP[-2] - fVar1) * fVar32;
      fVar32 = (unaff_RBP[2] - fVar1) * fVar32;
      uStack0000000000000040 = 0;
      if (0 < (int)uVar13) {
        uStack0000000000000040 = uVar13;
      }
      uStack0000000000000040 = uStack0000000000000040 & 0xfffffffe;
      uVar7 = uVar25;
      if ((int)uVar25 < (int)uVar17) {
        uVar7 = uVar17;
      }
      uVar13 = uVar24;
      if ((int)uVar24 < (int)uVar7) {
        uVar13 = uVar7;
      }
      uVar7 = 0x167;
      if ((int)uVar13 < 0x167) {
        uVar7 = uVar13;
      }
      if (0 < iVar12) {
        fVar34 = (float)iVar15 * fVar32 + (float)iVar22 * fVar35;
        uVar13 = (uVar20 * uVar24 - uVar23 * uVar25) + uStack0000000000000040 * (uVar23 - uVar20) +
                 uVar5 * iVar16;
        uVar24 = (uStack0000000000000040 * iVar4 - uVar19 * uVar24) + uVar17 * uVar23 +
                 uVar5 * iVar22;
        uVar17 = uVar19 * uVar25 + (uStack0000000000000040 * iVar9 - uVar17 * uVar20) +
                 uVar5 * iVar15;
        if ((int)uStack0000000000000040 < (int)uVar7) {
          lVar18 = (int64_t)(int)(uStack0000000000000040 * 0x280 + uVar5);
          do {
            bVar3 = false;
            fVar33 = (float)(int)uVar24 * fVar35 + fVar1 + (float)(int)uVar17 * fVar32;
            if ((int)uVar5 < (int)uVar6) {
              lVar21 = lVar18;
              uStack0000000000000048 = uVar5;
              uVar10 = uVar13;
              uVar19 = uVar24;
              uVar25 = uVar17;
              if (3 < (int)(uVar6 - uVar5)) {
                uVar8 = ((uVar6 - uVar5) - 4 >> 2) + 1;
                uVar26 = (uint64_t)uVar8;
                uStack0000000000000048 = uVar5 + uVar8 * 4;
                do {
                  if ((bVar3) ||
                     ((0 < (int)(uVar25 | uVar19 | uVar10) &&
                      (*(float *)(*(int64_t *)(unaff_RSI + 0x348 + unaff_R14 * 8) + lVar21 * 4) <=
                       fVar33)))) {
                    bVar3 = true;
                  }
                  else {
                    bVar3 = false;
                  }
                  if ((bVar3) ||
                     ((0 < (int)(uVar25 + iVar15 | uVar19 + iVar22 | uVar10 + iVar16) &&
                      (*(float *)(*(int64_t *)(unaff_RSI + 0x348 + unaff_R14 * 8) + 4 + lVar21 * 4)
                       <= fVar33 + fVar34)))) {
                    bVar3 = true;
                  }
                  else {
                    bVar3 = false;
                  }
                  uVar10 = uVar10 + iVar16 + iVar16;
                  fVar33 = fVar33 + fVar34 + fVar34;
                  uVar19 = uVar19 + iVar22 + iVar22;
                  uVar25 = uVar25 + iVar15 + iVar15;
                  if ((bVar3) ||
                     ((0 < (int)(uVar25 | uVar19 | uVar10) &&
                      (*(float *)(*(int64_t *)(unaff_RSI + 0x348 + unaff_R14 * 8) + 8 + lVar21 * 4)
                       <= fVar33)))) {
                    bVar3 = true;
                  }
                  else {
                    bVar3 = false;
                  }
                  uVar10 = uVar10 + iVar16;
                  fVar33 = fVar33 + fVar34;
                  uVar19 = uVar19 + iVar22;
                  uVar25 = uVar25 + iVar15;
                  if ((bVar3) ||
                     ((0 < (int)(uVar25 | uVar19 | uVar10) &&
                      (*(float *)(*(int64_t *)(unaff_RSI + 0x348 + unaff_R14 * 8) + 0xc +
                                 lVar21 * 4) <= fVar33)))) {
                    bVar3 = true;
                  }
                  else {
                    bVar3 = false;
                  }
                  uVar10 = uVar10 + iVar16;
                  fVar33 = fVar33 + fVar34;
                  uVar19 = uVar19 + iVar22;
                  uVar25 = uVar25 + iVar15;
                  lVar21 = lVar21 + 4;
                  uVar26 = uVar26 - 1;
                } while (uVar26 != 0);
              }
              if ((int)uStack0000000000000048 < (int)uVar6) {
                lVar21 = lVar21 * 4;
                lVar27 = (int64_t)(int)(uVar6 - uStack0000000000000048);
                do {
                  if ((bVar3) ||
                     ((0 < (int)(uVar25 | uVar19 | uVar10) &&
                      (*(float *)(lVar21 + *(int64_t *)(unaff_RSI + 0x348 + unaff_R14 * 8)) <=
                       fVar33)))) {
                    bVar3 = true;
                  }
                  else {
                    bVar3 = false;
                  }
                  uVar10 = uVar10 + iVar16;
                  fVar33 = fVar33 + fVar34;
                  uVar19 = uVar19 + iVar22;
                  uVar25 = uVar25 + iVar15;
                  lVar21 = lVar21 + 4;
                  lVar27 = lVar27 + -1;
                } while (lVar27 != 0);
              }
              if (bVar3) goto LAB_180494a88;
            }
            uStack0000000000000040 = uStack0000000000000040 + 1;
            lVar18 = lVar18 + 0x280;
            uVar13 = uVar13 + (uVar23 - uVar20);
            uVar17 = uVar17 + iVar9;
            uVar24 = uVar24 + iVar4;
          } while ((int)uStack0000000000000040 < (int)uVar7);
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





