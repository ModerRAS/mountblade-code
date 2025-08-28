#include "TaleWorlds.Native.Split.h"

// 03_rendering_part412.c - 1 个函数

// 函数: void FUN_180494080(longlong param_1,uint64_t param_2,longlong param_3)
void FUN_180494080(longlong param_1,uint64_t param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  longlong in_RAX;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  int iVar26;
  uint uVar27;
  uint64_t in_RDX;
  ulonglong uVar28;
  int iVar29;
  float *unaff_RBP;
  longlong unaff_RSI;
  int iVar30;
  uint uVar31;
  float *pfVar32;
  uint uVar33;
  longlong lVar34;
  uint uVar35;
  float *in_R10;
  int iVar36;
  longlong in_R11;
  longlong lVar37;
  uint uVar38;
  uint uVar39;
  longlong unaff_R14;
  uint uVar40;
  ulonglong uVar41;
  longlong lVar42;
  float in_XMM0_Da;
  float fVar43;
  uint64_t uVar44;
  uint64_t uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  uint64_t in_XMM1_Qb;
  float fVar49;
  float fVar50;
  float unaff_XMM6_Da;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
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
  
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM7_Dd;
  *(uint64_t *)(unaff_RBP + -4) = param_2;
  *(uint64_t *)(unaff_RBP + -2) = in_XMM1_Qb;
  uVar44 = *(uint64_t *)(param_3 + 0x30);
  uVar45 = *(uint64_t *)(param_3 + 0x38);
  unaff_RBP[-1] = 0.0;
  fVar1 = unaff_RBP[-4];
  fVar2 = unaff_RBP[-2];
  fVar3 = unaff_RBP[-6];
  unaff_RBP[3] = 0.0;
  fVar4 = unaff_RBP[-7];
  fVar5 = unaff_RBP[-7];
  *(uint64_t *)(unaff_RBP + 4) = uVar44;
  *(uint64_t *)(unaff_RBP + 6) = uVar45;
  fVar6 = unaff_RBP[-3];
  unaff_RBP[7] = 1.0;
  fVar7 = unaff_RBP[-6];
  fVar8 = unaff_RBP[1];
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM8_Dd;
  fVar9 = unaff_RBP[2];
  fVar10 = *unaff_RBP;
  FUN_1800946d0(unaff_RBP + -8,in_RDX,param_1 + 0x2c8 + in_RAX * 0x40);
  fVar11 = *in_R10;
  fVar47 = in_R10[4];
  in_stack_00000060 = fVar11 * unaff_RBP[-0x18];
  fStack0000000000000064 = fVar11 * unaff_RBP[-0x17];
  in_stack_00000068 = fVar11 * unaff_RBP[-0x16];
  fStack000000000000006c = fVar11 * unaff_RBP[-0x15];
  pfVar32 = unaff_RBP + 0xd;
  fVar11 = in_R10[1];
  lVar34 = 0;
  in_stack_00000070 = fVar47 * unaff_RBP[-0x18];
  fStack0000000000000074 = fVar47 * unaff_RBP[-0x17];
  in_stack_00000078 = fVar47 * unaff_RBP[-0x16];
  fStack000000000000007c = fVar47 * unaff_RBP[-0x15];
  fVar47 = unaff_RBP[-9];
  lVar37 = 2;
  fVar50 = unaff_RBP[-10];
  fVar49 = unaff_RBP[-0xb];
  fVar48 = unaff_RBP[-0xc];
  fVar12 = in_R10[5];
  unaff_RBP[-0x20] = fVar11 * unaff_RBP[-0x14];
  unaff_RBP[-0x1f] = fVar11 * unaff_RBP[-0x13];
  unaff_RBP[-0x1e] = fVar11 * unaff_RBP[-0x12];
  unaff_RBP[-0x1d] = fVar11 * unaff_RBP[-0x11];
  fVar11 = in_R10[2];
  unaff_RBP[-0x1c] = fVar12 * unaff_RBP[-0x14];
  unaff_RBP[-0x1b] = fVar12 * unaff_RBP[-0x13];
  unaff_RBP[-0x1a] = fVar12 * unaff_RBP[-0x12];
  unaff_RBP[-0x19] = fVar12 * unaff_RBP[-0x11];
  fVar12 = in_R10[6];
  bVar17 = true;
  unaff_RBP[-8] = fVar11 * unaff_RBP[-0x10];
  unaff_RBP[-7] = fVar11 * unaff_RBP[-0xf];
  unaff_RBP[-6] = fVar11 * unaff_RBP[-0xe];
  unaff_RBP[-5] = fVar11 * unaff_RBP[-0xd];
  fStack000000000000003c = fVar12 * unaff_RBP[-0xd];
  unaff_RBP[-4] = fVar12 * unaff_RBP[-0x10];
  unaff_RBP[-3] = fVar12 * unaff_RBP[-0xf];
  unaff_RBP[-2] = fVar12 * unaff_RBP[-0xe];
  unaff_RBP[-1] = fStack000000000000003c;
  do {
    uVar28 = (ulonglong)*(uint *)(&unknown_var_4400_ptr + lVar34);
    uVar25 = (ulonglong)*(uint *)(&unknown_var_4336_ptr + lVar34);
    uVar41 = (ulonglong)*(uint *)(&unknown_var_4368_ptr + lVar34);
    fVar11 = (&stack0x00000060)[uVar28 * 4];
    fVar12 = *(float *)((longlong)&stack0x00000064 + uVar28 * 0x10);
    fVar13 = unaff_RBP[uVar25 * 4 + -0x20];
    fVar14 = unaff_RBP[uVar25 * 4 + -0x1f];
    fVar15 = unaff_RBP[uVar41 * 4 + -8];
    fVar16 = unaff_RBP[uVar41 * 4 + -7];
    fVar46 = fVar50 + (&stack0x00000068)[uVar28 * 4] + unaff_RBP[uVar25 * 4 + -0x1e] +
             unaff_RBP[uVar41 * 4 + -6];
    fVar43 = fVar47 + *(float *)((longlong)&stack0x0000006c + uVar28 * 0x10) +
             unaff_RBP[uVar25 * 4 + -0x1d] + unaff_RBP[uVar41 * 4 + -5];
    if ((!bVar17) || (fVar43 < fVar46)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    uVar28 = (ulonglong)*(uint *)(&unknown_var_4404_ptr + lVar34);
    uVar25 = (ulonglong)*(uint *)(&unknown_var_4340_ptr + lVar34);
    uVar41 = (ulonglong)*(uint *)(&unknown_var_4372_ptr + lVar34);
    pfVar32[-2] = 1.0;
    pfVar32[-5] = (fVar48 + fVar11 + fVar13 + fVar15) / fVar43;
    pfVar32[-4] = (fVar49 + fVar12 + fVar14 + fVar16) / fVar43;
    fVar11 = (&stack0x00000060)[uVar28 * 4];
    fVar12 = *(float *)((longlong)&stack0x00000064 + uVar28 * 0x10);
    pfVar32[-3] = fVar46 / fVar43;
    fVar13 = unaff_RBP[uVar25 * 4 + -0x20];
    fVar14 = unaff_RBP[uVar25 * 4 + -0x1f];
    fVar15 = unaff_RBP[uVar41 * 4 + -8];
    fVar16 = unaff_RBP[uVar41 * 4 + -7];
    fVar46 = fVar50 + (&stack0x00000068)[uVar28 * 4] + unaff_RBP[uVar25 * 4 + -0x1e] +
             unaff_RBP[uVar41 * 4 + -6];
    fVar43 = fVar47 + *(float *)((longlong)&stack0x0000006c + uVar28 * 0x10) +
             unaff_RBP[uVar25 * 4 + -0x1d] + unaff_RBP[uVar41 * 4 + -5];
    if ((!bVar17) || (fVar43 < fVar46)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    uVar28 = (ulonglong)*(uint *)(&unknown_var_4408_ptr + lVar34);
    uVar25 = (ulonglong)*(uint *)(&unknown_var_4344_ptr + lVar34);
    uVar41 = (ulonglong)*(uint *)(&unknown_var_4376_ptr + lVar34);
    pfVar32[2] = 1.0;
    pfVar32[-1] = (fVar48 + fVar11 + fVar13 + fVar15) / fVar43;
    *pfVar32 = (fVar49 + fVar12 + fVar14 + fVar16) / fVar43;
    fVar11 = (&stack0x00000060)[uVar28 * 4];
    fVar12 = *(float *)((longlong)&stack0x00000064 + uVar28 * 0x10);
    pfVar32[1] = fVar46 / fVar43;
    fVar13 = unaff_RBP[uVar25 * 4 + -0x20];
    fVar14 = unaff_RBP[uVar25 * 4 + -0x1f];
    fVar15 = unaff_RBP[uVar41 * 4 + -8];
    fVar16 = unaff_RBP[uVar41 * 4 + -7];
    fVar46 = fVar50 + (&stack0x00000068)[uVar28 * 4] + unaff_RBP[uVar25 * 4 + -0x1e] +
             unaff_RBP[uVar41 * 4 + -6];
    fVar43 = fVar47 + *(float *)((longlong)&stack0x0000006c + uVar28 * 0x10) +
             unaff_RBP[uVar25 * 4 + -0x1d] + unaff_RBP[uVar41 * 4 + -5];
    if ((!bVar17) || (fVar43 < fVar46)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    uVar28 = (ulonglong)*(uint *)(&unknown_var_4412_ptr + lVar34);
    uVar25 = (ulonglong)*(uint *)(&unknown_var_4348_ptr + lVar34);
    uVar41 = (ulonglong)*(uint *)(&unknown_var_4380_ptr + lVar34);
    pfVar32[6] = 1.0;
    pfVar32[3] = (fVar48 + fVar11 + fVar13 + fVar15) / fVar43;
    pfVar32[4] = (fVar49 + fVar12 + fVar14 + fVar16) / fVar43;
    fVar11 = (&stack0x00000060)[uVar28 * 4];
    fVar12 = *(float *)((longlong)&stack0x00000064 + uVar28 * 0x10);
    pfVar32[5] = fVar46 / fVar43;
    fVar13 = unaff_RBP[uVar25 * 4 + -0x20];
    fVar14 = unaff_RBP[uVar25 * 4 + -0x1f];
    fVar15 = unaff_RBP[uVar41 * 4 + -8];
    fVar16 = unaff_RBP[uVar41 * 4 + -7];
    fVar46 = fVar50 + (&stack0x00000068)[uVar28 * 4] + unaff_RBP[uVar25 * 4 + -0x1e] +
             unaff_RBP[uVar41 * 4 + -6];
    fVar43 = fVar47 + *(float *)((longlong)&stack0x0000006c + uVar28 * 0x10) +
             unaff_RBP[uVar25 * 4 + -0x1d] + unaff_RBP[uVar41 * 4 + -5];
    if ((!bVar17) || (fVar43 < fVar46)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    pfVar32[10] = 1.0;
    lVar34 = lVar34 + 0x10;
    pfVar32[7] = (fVar48 + fVar11 + fVar13 + fVar15) / fVar43;
    pfVar32[8] = (fVar49 + fVar12 + fVar14 + fVar16) / fVar43;
    pfVar32[9] = fVar46 / fVar43;
    pfVar32 = pfVar32 + 0x10;
    lVar37 = lVar37 + -1;
  } while (lVar37 != 0);
  if (bVar17) {
    uStack000000000000005c = 0;
    do {
      uVar19 = uStack000000000000005c * 3;
      uVar44 = *(uint64_t *)
                (unaff_RBP + (ulonglong)*(uint *)(&unknown_var_4192_ptr + (ulonglong)uVar19 * 4) * 4 + 8 +
                2);
      *(uint64_t *)(unaff_RBP + -8) =
           *(uint64_t *)
            (unaff_RBP + (ulonglong)*(uint *)(&unknown_var_4192_ptr + (ulonglong)uVar19 * 4) * 4 + 8);
      *(uint64_t *)(unaff_RBP + -6) = uVar44;
      if ((fVar1 * fVar3 - in_XMM0_Da * fVar2) * fVar8 + (fVar2 * fVar5 - fVar6 * fVar7) * fVar10 +
          (unaff_XMM6_Da * fVar6 - fVar1 * fVar4) * fVar9 < 0.0) {
        uVar44 = *(uint64_t *)
                  (unaff_RBP +
                  (ulonglong)*(uint *)(&unknown_var_4192_ptr + (ulonglong)(uVar19 + 1) * 4) * 4 + 8);
        uVar45 = *(uint64_t *)
                  (unaff_RBP +
                   (ulonglong)*(uint *)(&unknown_var_4192_ptr + (ulonglong)(uVar19 + 1) * 4) * 4 + 8 + 2);
        uVar19 = *(uint *)(&unknown_var_4192_ptr + (ulonglong)(uVar19 + 2) * 4);
      }
      else {
        uVar44 = *(uint64_t *)
                  (unaff_RBP +
                  (ulonglong)*(uint *)(&unknown_var_4192_ptr + (ulonglong)(uVar19 + 2) * 4) * 4 + 8);
        uVar45 = *(uint64_t *)
                  (unaff_RBP +
                   (ulonglong)*(uint *)(&unknown_var_4192_ptr + (ulonglong)(uVar19 + 2) * 4) * 4 + 8 + 2);
        uVar19 = *(uint *)(&unknown_var_4192_ptr + (ulonglong)(uVar19 + 1) * 4);
      }
      fVar11 = unaff_RBP[-6];
      *(uint64_t *)(unaff_RBP + -4) = uVar44;
      *(uint64_t *)(unaff_RBP + -2) = uVar45;
      uVar44 = *(uint64_t *)(unaff_RBP + (ulonglong)uVar19 * 4 + 8 + 2);
      *(uint64_t *)unaff_RBP = *(uint64_t *)(unaff_RBP + (ulonglong)uVar19 * 4 + 8);
      *(uint64_t *)(unaff_RBP + 2) = uVar44;
      uVar31 = (uint)(unaff_RBP[-7] + 0.5);
      uVar33 = (uint)(unaff_RBP[-8] + 0.5);
      uVar40 = (uint)(unaff_RBP[-3] + 0.5);
      uVar35 = (uint)(unaff_RBP[-4] + 0.5);
      iVar29 = uVar31 - uVar40;
      iVar23 = uVar35 - uVar33;
      uVar39 = (uint)(unaff_RBP[1] + 0.5);
      uVar38 = (uint)(*unaff_RBP + 0.5);
      iVar30 = uVar40 - uVar39;
      iVar36 = uVar39 - uVar31;
      iVar18 = uVar33 - uVar38;
      iVar26 = iVar36 * iVar23 - iVar18 * iVar29;
      uVar19 = uVar35;
      if ((int)uVar33 < (int)uVar35) {
        uVar19 = uVar33;
      }
      uVar20 = uVar38;
      if ((int)uVar19 < (int)uVar38) {
        uVar20 = uVar19;
      }
      uVar19 = 0;
      if (0 < (int)uVar20) {
        uVar19 = uVar20;
      }
      uVar19 = uVar19 & 0xfffffffe;
      fVar47 = unaff_XMM9_Da / (float)iVar26;
      uVar20 = uVar35;
      if ((int)uVar35 < (int)uVar33) {
        uVar20 = uVar33;
      }
      uVar21 = uVar38;
      if ((int)uVar38 < (int)uVar20) {
        uVar21 = uVar20;
      }
      uVar20 = 0x27f;
      if ((int)uVar21 < 0x27f) {
        uVar20 = uVar21;
      }
      uVar21 = uVar40;
      if ((int)uVar31 < (int)uVar40) {
        uVar21 = uVar31;
      }
      uVar27 = uVar39;
      if ((int)uVar21 < (int)uVar39) {
        uVar27 = uVar21;
      }
      fVar50 = (unaff_RBP[-2] - fVar11) * fVar47;
      fVar47 = (unaff_RBP[2] - fVar11) * fVar47;
      uStack0000000000000040 = 0;
      if (0 < (int)uVar27) {
        uStack0000000000000040 = uVar27;
      }
      uStack0000000000000040 = uStack0000000000000040 & 0xfffffffe;
      uVar21 = uVar40;
      if ((int)uVar40 < (int)uVar31) {
        uVar21 = uVar31;
      }
      uVar27 = uVar39;
      if ((int)uVar39 < (int)uVar21) {
        uVar27 = uVar21;
      }
      uVar21 = 0x167;
      if ((int)uVar27 < 0x167) {
        uVar21 = uVar27;
      }
      if (0 < iVar26) {
        fVar49 = (float)iVar29 * fVar47 + (float)iVar36 * fVar50;
        uVar27 = (uVar35 * uVar39 - uVar38 * uVar40) + uStack0000000000000040 * (uVar38 - uVar35) +
                 uVar19 * iVar30;
        uVar39 = (uStack0000000000000040 * iVar18 - uVar33 * uVar39) + uVar31 * uVar38 +
                 uVar19 * iVar36;
        uVar31 = uVar33 * uVar40 + (uStack0000000000000040 * iVar23 - uVar31 * uVar35) +
                 uVar19 * iVar29;
        if ((int)uStack0000000000000040 < (int)uVar21) {
          lVar34 = (longlong)(int)(uStack0000000000000040 * 0x280 + uVar19);
          do {
            bVar17 = false;
            fVar48 = (float)(int)uVar39 * fVar50 + fVar11 + (float)(int)uVar31 * fVar47;
            if ((int)uVar19 < (int)uVar20) {
              lVar37 = lVar34;
              uStack0000000000000048 = uVar19;
              uVar24 = uVar27;
              uVar33 = uVar39;
              uVar40 = uVar31;
              if (3 < (int)(uVar20 - uVar19)) {
                uVar22 = ((uVar20 - uVar19) - 4 >> 2) + 1;
                uVar41 = (ulonglong)uVar22;
                uStack0000000000000048 = uVar19 + uVar22 * 4;
                do {
                  if ((bVar17) ||
                     ((0 < (int)(uVar40 | uVar33 | uVar24) &&
                      (*(float *)(*(longlong *)(unaff_RSI + 0x348 + unaff_R14 * 8) + lVar37 * 4) <=
                       fVar48)))) {
                    bVar17 = true;
                  }
                  else {
                    bVar17 = false;
                  }
                  if ((bVar17) ||
                     ((0 < (int)(uVar40 + iVar29 | uVar33 + iVar36 | uVar24 + iVar30) &&
                      (*(float *)(*(longlong *)(unaff_RSI + 0x348 + unaff_R14 * 8) + 4 + lVar37 * 4)
                       <= fVar48 + fVar49)))) {
                    bVar17 = true;
                  }
                  else {
                    bVar17 = false;
                  }
                  uVar24 = uVar24 + iVar30 + iVar30;
                  fVar48 = fVar48 + fVar49 + fVar49;
                  uVar33 = uVar33 + iVar36 + iVar36;
                  uVar40 = uVar40 + iVar29 + iVar29;
                  if ((bVar17) ||
                     ((0 < (int)(uVar40 | uVar33 | uVar24) &&
                      (*(float *)(*(longlong *)(unaff_RSI + 0x348 + unaff_R14 * 8) + 8 + lVar37 * 4)
                       <= fVar48)))) {
                    bVar17 = true;
                  }
                  else {
                    bVar17 = false;
                  }
                  uVar24 = uVar24 + iVar30;
                  fVar48 = fVar48 + fVar49;
                  uVar33 = uVar33 + iVar36;
                  uVar40 = uVar40 + iVar29;
                  if ((bVar17) ||
                     ((0 < (int)(uVar40 | uVar33 | uVar24) &&
                      (*(float *)(*(longlong *)(unaff_RSI + 0x348 + unaff_R14 * 8) + 0xc +
                                 lVar37 * 4) <= fVar48)))) {
                    bVar17 = true;
                  }
                  else {
                    bVar17 = false;
                  }
                  uVar24 = uVar24 + iVar30;
                  fVar48 = fVar48 + fVar49;
                  uVar33 = uVar33 + iVar36;
                  uVar40 = uVar40 + iVar29;
                  lVar37 = lVar37 + 4;
                  uVar41 = uVar41 - 1;
                } while (uVar41 != 0);
              }
              if ((int)uStack0000000000000048 < (int)uVar20) {
                lVar37 = lVar37 * 4;
                lVar42 = (longlong)(int)(uVar20 - uStack0000000000000048);
                do {
                  if ((bVar17) ||
                     ((0 < (int)(uVar40 | uVar33 | uVar24) &&
                      (*(float *)(lVar37 + *(longlong *)(unaff_RSI + 0x348 + unaff_R14 * 8)) <=
                       fVar48)))) {
                    bVar17 = true;
                  }
                  else {
                    bVar17 = false;
                  }
                  uVar24 = uVar24 + iVar30;
                  fVar48 = fVar48 + fVar49;
                  uVar33 = uVar33 + iVar36;
                  uVar40 = uVar40 + iVar29;
                  lVar37 = lVar37 + 4;
                  lVar42 = lVar42 + -1;
                } while (lVar42 != 0);
              }
              if (bVar17) goto LAB_180494a88;
            }
            uStack0000000000000040 = uStack0000000000000040 + 1;
            lVar34 = lVar34 + 0x280;
            uVar27 = uVar27 + (uVar38 - uVar35);
            uVar31 = uVar31 + iVar23;
            uVar39 = uVar39 + iVar18;
          } while ((int)uStack0000000000000040 < (int)uVar21);
        }
      }
      uStack000000000000005c = uStack000000000000005c + 1;
    } while (uStack000000000000005c < 0xc);
  }
LAB_180494a88:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x28) ^ (ulonglong)&stack0x00000000);
}





