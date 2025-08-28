#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part012.c - 1 个函数

// 函数: void FUN_1806598ca(uint64_t param_1,uint param_2,uint param_3,uint64_t param_4,
void FUN_1806598ca(uint64_t param_1,uint param_2,uint param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  uint64_t param_9,uint64_t param_10,uint64_t param_11,uint64_t param_12)

{
  float *pfVar1;
  char cVar2;
  bool bVar3;
  int64_t lVar4;
  float *pfVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  int iVar9;
  uint64_t unaff_RDI;
  uint64_t uVar10;
  int64_t unaff_R12;
  char cVar11;
  float unaff_R13D;
  float *unaff_R14;
  char unaff_R15B;
  bool in_ZF;
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
  int8_t auVar22 [16];
  float fVar23;
  float fVar24;
  float unaff_XMM6_Da;
  float fVar25;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack000000000000006c;
  float fStack0000000000000074;
  float fStack000000000000007c;
  float afStack_60e8 [6200];
  uint64_t uStack_8;
  
  if (!in_ZF) {
                    // WARNING: Subroutine does not return
    uStack_8 = 0x1806598e8;
    AdvancedSystemController(param_2 ^ param_3);
  }
  fVar25 = fStack000000000000003c;
  fVar15 = fStack0000000000000038;
  fVar16 = unaff_R14[0x185d];
  if (((unaff_R14[0x10] == unaff_XMM6_Da) || (unaff_R14[0x10] == 0.5)) || (fVar16 <= unaff_XMM6_Da))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  uStack_8 = 0x1806599e0;
  fVar12 = (float)atan2f(*(uint *)(*(int64_t *)(unaff_R12 + 0x10) + 0x80) ^ param_3,
                         *(int32_t *)(*(int64_t *)(unaff_R12 + 0x10) + 0x84));
  fVar12 = fVar12 + unaff_R14[6];
  unaff_R14[0xb] = fVar12;
  if (fVar12 <= 3.1415927) {
    if (fVar12 < -3.1415927) {
      fVar12 = fVar12 + 6.2831855;
      goto LAB_180659a1a;
    }
  }
  else {
    fVar12 = fVar12 - 6.2831855;
LAB_180659a1a:
    unaff_R14[0xb] = fVar12;
  }
  fVar12 = unaff_R14[0x18];
  lVar7 = (int64_t)(int)fVar12;
  cVar11 = SUB41(unaff_R13D,0);
  if (0 < (int)fVar12) {
    fVar13 = unaff_XMM6_Da;
    if (*(char *)(lVar7 * 0x1358 + 0x4e + (int64_t)unaff_R14) != cVar11) {
      fVar13 = unaff_R14[lVar7 * 0x4d6 + 0x12] * 0.05;
    }
    if ((fVar13 + unaff_R14[lVar7 * 0x4d6 + 0xe] < unaff_R14[lVar7 * 0x4d6 + 0x11]) ||
       (*(char *)(unaff_R14 + lVar7 * 0x4d6 + 0x13) != cVar11)) {
      unaff_R14[0xc] = unaff_R14[0xb];
      fVar12 = unaff_R14[0x18];
    }
    lVar7 = (int64_t)(int)fVar12;
    fVar13 = unaff_XMM6_Da;
    if (*(char *)(lVar7 * 0x1358 + 0x66 + (int64_t)unaff_R14) != cVar11) {
      fVar13 = unaff_R14[lVar7 * 0x4d6 + 0x18] * 0.05;
    }
    if ((fVar13 + unaff_R14[lVar7 * 0x4d6 + 0x14] < unaff_R14[lVar7 * 0x4d6 + 0x17]) ||
       (*(char *)(unaff_R14 + lVar7 * 0x4d6 + 0x19) != cVar11)) {
      unaff_R14[0xd] = unaff_R14[0xb];
      fVar12 = unaff_R14[0x18];
    }
  }
  if ((((((int)fVar12 < 1) || (unaff_XMM6_Da != unaff_R14[2])) || (unaff_XMM6_Da != unaff_R14[3]))
      || (unaff_XMM6_Da == unaff_R14[6])) ||
     ((ABS(unaff_R14[0xb] - unaff_R14[0xc]) < 0.5 && (ABS(unaff_R14[0xb] - unaff_R14[0xd]) < 0.5))))
  {
    if (((bVar3) && ((unaff_XMM6_Da == unaff_R14[2] && (unaff_XMM6_Da == unaff_R14[3])))) ||
       ((unaff_R14[0x14] = unaff_R13D, param_8._0_4_ = unaff_XMM6_Da,
        unaff_XMM6_Da <= fStack0000000000000038 &&
        (param_8._0_4_ = unaff_XMM8_Da, fStack0000000000000038 <= unaff_XMM6_Da))))
    goto LAB_180659b1a;
  }
  else {
    bVar3 = true;
    unaff_R14[0x14] = 1.0;
LAB_180659b1a:
    if (((unaff_R15B == '\0') ||
        (param_8._0_4_ = unaff_XMM8_Da,
        unaff_XMM8_Da < unaff_R14[0x1854] || unaff_XMM8_Da == unaff_R14[0x1854])) &&
       (param_8._0_4_ = unaff_XMM8_Da, *(char *)(unaff_R14 + 0x17) != cVar11)) {
      param_8._0_4_ = unaff_XMM6_Da;
    }
  }
  if ((fVar16 <= unaff_XMM6_Da) && (unaff_XMM6_Da < unaff_R14[0x14])) {
    fVar16 = unaff_R14[0xb] - unaff_R14[0xc];
    fVar12 = unaff_R14[0xb] - unaff_R14[0xd];
    if (ABS(fVar16) <= ABS(fVar12)) {
      fVar16 = fVar12;
    }
    if (fVar16 <= 3.1415927) {
      if (fVar16 < -3.1415927) {
        fVar16 = fVar16 + 6.2831855;
      }
    }
    else {
      fVar16 = fVar16 + -6.2831855;
    }
    fVar12 = unaff_XMM6_Da;
    if (unaff_XMM6_Da < fVar16) {
      fVar12 = 0.5;
    }
    unaff_R14[0x10] = fVar12;
  }
  if ((bVar3) && (0 < (int)unaff_R14[0x18])) {
    pfVar5 = unaff_R14 + 0x1b;
    uVar10 = (uint64_t)(uint)unaff_R14[0x18];
    fVar16 = unaff_XMM6_Da;
    do {
      pfVar1 = pfVar5 + 0x495;
      fVar12 = *pfVar5;
      pfVar5 = pfVar5 + 0x4d6;
      fVar16 = fVar16 + *(float *)(*(int64_t *)(*(int64_t *)pfVar1 + 0x48) + 0x188) * fVar12;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    fVar12 = unaff_R14[0x10];
    fVar16 = (param_6._4_4_ * unaff_R14[7]) / fVar16 + fVar12;
    unaff_R14[0x10] = fVar16;
    if (fVar16 <= unaff_XMM8_Da) {
      if ((((fVar12 <= 0.5) && (0.5 < fVar16)) && (ABS(unaff_R14[0xb] - unaff_R14[0xc]) < 0.5)) &&
         (ABS(unaff_R14[0xb] - unaff_R14[0xd]) < 0.5)) {
        unaff_R14[0x10] = 0.5;
      }
    }
    else if ((0.5 <= ABS(unaff_R14[0xb] - unaff_R14[0xc])) ||
            (0.5 <= ABS(unaff_R14[0xb] - unaff_R14[0xd]))) {
      unaff_R14[0x10] = fVar16 - unaff_XMM8_Da;
    }
    else {
      unaff_R14[0x10] = unaff_XMM6_Da;
    }
  }
  cVar11 = *(char *)(unaff_RBP + 0xa0);
  cVar2 = *(char *)(unaff_RBP + 0xa8);
  if ((((cVar11 != '\0') || (cVar2 != '\0')) &&
      ((unaff_XMM6_Da != unaff_R14[2] || (unaff_XMM6_Da != unaff_R14[3])))) ||
     (((unaff_XMM6_Da != unaff_R14[4] || (unaff_XMM6_Da != unaff_R14[5])) ||
      (fVar16 = unaff_XMM8_Da, unaff_XMM6_Da < unaff_R14[0x14])))) {
    fVar16 = unaff_XMM6_Da;
  }
  fVar17 = param_6._4_4_ + param_6._4_4_;
  fVar13 = *unaff_R14 - unaff_R14[1];
  fVar12 = fVar13;
  if ((fVar17 < ABS(fVar13)) && (fVar12 = fVar17, fVar13 < unaff_XMM6_Da)) {
    fVar12 = -fVar17;
  }
  unaff_R14[1] = unaff_R14[1] + fVar12;
  uStack_8 = 0x180659d72;
  fVar12 = (float)FUN_18065c070(ABS(fVar13),fVar12,param_12);
  if (fVar12 <= 0.75) {
    fVar12 = 0.75;
  }
  fVar13 = fVar12 - unaff_R14[0x16];
  if (0.001 <= ABS(fVar13)) {
    fVar12 = fVar13 * param_6._4_4_ + unaff_R14[0x16];
  }
  unaff_R14[0x16] = fVar12;
  if ((unaff_XMM9_Da <= unaff_XMM6_Da) || (unaff_R14[0x1854] <= unaff_XMM6_Da)) {
    unaff_R14[0xf] = 0.0;
  }
  else {
    fVar12 = unaff_XMM6_Da;
    if (0 < (int)unaff_R14[0x18]) {
      pfVar5 = unaff_R14 + 0x1b;
      uVar10 = (uint64_t)(uint)unaff_R14[0x18];
      do {
        pfVar1 = pfVar5 + 0x495;
        fVar13 = *pfVar5;
        pfVar5 = pfVar5 + 0x4d6;
        fVar12 = fVar12 + *(float *)(**(int64_t **)pfVar1 + 0x188) * fVar13;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    uStack_8 = 0x180659e10;
    fVar12 = (float)fmodf(param_6._4_4_ / fVar12 + unaff_R14[0xf]);
    unaff_R14[0xf] = fVar12;
  }
  fVar13 = unaff_R14[0x18];
  iVar9 = 0;
  fVar17 = unaff_XMM6_Da;
  if (0 < (int)fVar13) {
    pfVar5 = unaff_R14 + 0x1b;
    do {
      uStack_8 = 0x180659e3d;
      fVar12 = (float)FUN_18065bf60(fVar12,iVar9);
      fVar12 = fVar12 * *pfVar5;
      iVar9 = iVar9 + 1;
      pfVar5 = pfVar5 + 0x4d6;
      fVar17 = fVar17 + fVar12;
    } while (iVar9 < (int)fVar13);
    cVar11 = *(char *)(unaff_RBP + 0xa0);
  }
  if (fVar16 < unaff_XMM8_Da) {
    if (unaff_R14[0x1854] <= unaff_XMM8_Da && unaff_XMM8_Da != unaff_R14[0x1854]) {
      fVar12 = fVar17 * param_6._4_4_ + unaff_R14[0xe];
      unaff_R14[0xe] = fVar12;
      if (unaff_XMM8_Da < fVar12) {
        unaff_R14[0xe] = fVar12 - unaff_XMM8_Da;
      }
    }
    else if ((int)fVar13 < 1) {
      unaff_R14[0xe] = unaff_XMM6_Da;
    }
    else {
      fVar12 = unaff_XMM8_Da;
      if (*(char *)(unaff_R14 + 0x17) != '\0') {
        fVar12 = -1.0;
      }
      lVar7 = *(int64_t *)(unaff_R14 + (int64_t)(int)fVar13 * 0x4d6 + -0x26);
      uStack_8 = 0x180659ea7;
      lVar4 = FUN_18065fd40(*(uint64_t *)(lVar7 + 8));
      lVar8 = 0x14;
      if (unaff_XMM6_Da <= (param_9._4_4_ - ABS((float)param_9)) * fVar12) {
        lVar8 = 0x18;
      }
      fVar12 = *(float *)(lVar8 + lVar4);
      uStack_8 = 0x180659edd;
      FUN_18065fd40(*(uint64_t *)(lVar7 + 8));
      unaff_R14[0xe] = fVar12;
    }
  }
  fStack000000000000003c = (float)((uint64_t)unaff_RDI >> 0x20);
  fStack0000000000000038 = (float)unaff_RDI;
  fVar13 = fStack000000000000003c * fStack000000000000003c +
           fStack0000000000000038 * fStack0000000000000038;
  fVar13 = (float)(fVar13 <= 1.1754944e-38) * 1.1754944e-38 + fVar13;
  auVar22 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
  fVar18 = auVar22._0_4_;
  fVar12 = unaff_XMM8_Da;
  if (fStack000000000000003c * fVar18 * 0.5 * (3.0 - fVar13 * fVar18 * fVar18) < -0.2) {
    fVar12 = unaff_XMM6_Da;
  }
  unaff_R14[0x13] = fVar12;
  fStack0000000000000038 = (float)unaff_RBX;
  fStack000000000000003c = (float)((uint64_t)unaff_RBX >> 0x20);
  if ((fVar15 != unaff_XMM6_Da) || (fVar25 != unaff_XMM6_Da)) {
    if (unaff_XMM6_Da <= fStack0000000000000038 * fVar15) {
      if (ABS(fStack0000000000000038) < ABS(fVar15)) {
        fStack0000000000000038 = fVar15;
      }
    }
    else {
      fStack0000000000000038 = fStack0000000000000038 + fVar15;
    }
    if (unaff_XMM6_Da <= fVar25 * fStack000000000000003c) {
      if (ABS(fStack000000000000003c) < ABS(fVar25)) {
        fStack000000000000003c = fVar25;
      }
    }
    else {
      fStack000000000000003c = fStack000000000000003c + fVar25;
    }
  }
  uStack_8 = 0x18065a04d;
  fVar13 = (float)atan2f(-fStack0000000000000038,fStack000000000000003c);
  fVar13 = ABS(fVar13);
  if (1.5707964 < fVar13) {
    fVar13 = 3.1415927 - fVar13;
  }
  fVar13 = fVar13 * 0.63661975;
  fVar14 = (unaff_XMM8_Da - *(float *)(unaff_RBP + 0xc0)) * 0.3;
  fVar18 = unaff_XMM6_Da;
  if ((fVar14 + 0.05 <= fVar13) && (fVar18 = fVar13, 0.95 - fVar14 < fVar13)) {
    fVar18 = unaff_XMM8_Da;
  }
  fVar14 = fVar18 - unaff_R14[0x15];
  fVar23 = ABS(fVar14);
  fVar13 = fVar18;
  if (0.001 <= fVar23) {
    fVar19 = param_6._4_4_;
    if (fVar14 < unaff_XMM6_Da) {
      fVar19 = -param_6._4_4_;
    }
    fVar14 = 0.1;
    if ((0.1 <= fVar23) && (fVar14 = fVar23, 0.5 <= fVar23)) {
      fVar14 = 0.5;
    }
    fVar14 = fVar19 * fVar14 * 12.0;
    if (ABS(fVar14) <= fVar23) {
      fVar13 = unaff_R14[0x15] + fVar14;
    }
  }
  unaff_R14[0x15] = fVar13;
  if ((((param_9._4_4_ <= -0.1) || (cVar2 == '\0')) || (cVar11 != '\0')) || (fVar25 <= -0.1)) {
LAB_18065a17c:
    if ((unaff_R14[0x11] <= unaff_XMM6_Da) || (unaff_XMM8_Da <= unaff_R14[0x11])) {
      unaff_R14[0x11] = 0.0;
      unaff_R14[0x12] = -1.0;
      goto LAB_18065a2e9;
    }
  }
  else {
    fVar25 = param_9._4_4_ * param_9._4_4_ + param_9._4_4_ * param_9._4_4_;
    fVar25 = fVar25 + fVar25;
    if (fVar25 <= unaff_XMM8_Da) {
      fVar25 = unaff_XMM8_Da;
    }
    if (-fVar25 <= (float)param_9 * fVar15) goto LAB_18065a17c;
  }
  fVar25 = unaff_R14[0x11];
  if (fVar25 == unaff_XMM6_Da) {
    *(bool *)((int64_t)unaff_R14 + 0x5d) = fVar15 < unaff_XMM6_Da;
  }
  fVar25 = (*(float *)(*(int64_t *)
                        (*(int64_t *)(unaff_R14 + (int64_t)(int)unaff_R14[0x18] * 0x4d6 + -0x26) +
                        8) + 0x188) /
           *(float *)(*(int64_t *)
                       (*(int64_t *)(unaff_R14 + (int64_t)(int)unaff_R14[0x18] * 0x4d6 + -0x26) +
                       0x38) + 0x188)) * fVar17 * param_6._4_4_ + fVar25;
  if (unaff_XMM8_Da <= fVar25) {
    fVar25 = unaff_XMM8_Da;
  }
  unaff_R14[0x11] = fVar25;
  if (unaff_R14[0x12] <= unaff_XMM6_Da && unaff_XMM6_Da != unaff_R14[0x12]) {
    fVar13 = unaff_XMM8_Da;
    if (*(char *)((int64_t)unaff_R14 + 0x5d) != '\0') {
      fVar13 = -1.0;
    }
    if (unaff_XMM6_Da <= fVar13 * fVar15) {
      fVar15 = fVar25;
      if (*(char *)((int64_t)unaff_R14 + 0x5d) == '\0') {
        uStack_8 = 0x18065a252;
        fVar15 = (float)fmodf(fVar25 + 0.5);
      }
      fVar15 = fVar15 - unaff_R14[0xe];
      if (fVar15 <= 0.5) {
        if (fVar15 < -0.5) {
          fVar15 = fVar15 + unaff_XMM8_Da;
        }
      }
      else {
        fVar15 = fVar15 + -1.0;
      }
      fVar13 = fVar25 * fVar25 * fVar25 + param_6._4_4_;
      if (unaff_XMM8_Da <= fVar13) {
        fVar13 = unaff_XMM8_Da;
      }
      fVar15 = fVar13 * fVar25 * fVar15 + unaff_R14[0xe];
      unaff_R14[0xe] = fVar15;
      if (unaff_XMM6_Da <= fVar15) {
        if (unaff_XMM8_Da <= fVar15) {
          unaff_R14[0xe] = fVar15 - unaff_XMM8_Da;
        }
      }
      else {
        unaff_R14[0xe] = fVar15 + unaff_XMM8_Da;
      }
    }
    else {
      unaff_R14[0x12] = fVar25 + 0.25;
    }
  }
LAB_18065a2e9:
  fVar15 = unaff_R14[0x14];
  param_10._4_4_ = (unaff_XMM8_Da - fVar15) * (unaff_XMM8_Da - fVar16);
  fVar13 = (unaff_XMM8_Da - fVar12) * param_10._4_4_;
  fStack000000000000006c = (unaff_XMM8_Da - fVar18) * fVar12 * param_10._4_4_;
  fVar12 = fVar12 * param_10._4_4_ * fVar18;
  fVar17 = fVar13 * fVar18;
  param_10._4_4_ = param_10._4_4_ * fVar18;
  fStack0000000000000074 = fVar12 * (float)param_8;
  *(float *)(unaff_RBP + -0x7c) = param_10._4_4_;
  *(float *)(unaff_RBP + -0x78) = param_10._4_4_;
  *(float *)(unaff_RBP + -0x74) = (unaff_XMM8_Da - fVar16) * fVar15;
  fVar25 = (unaff_XMM8_Da - (float)param_8) * fVar17;
  param_11._4_4_ = (unaff_XMM8_Da - (float)param_8) * fVar12;
  *(float *)(unaff_RBP + -0x80) = fVar25;
  if (((char)param_6 == '\0') || (unaff_XMM6_Da < (float)param_8)) {
    if (fVar15 <= unaff_XMM6_Da) {
      fVar15 = 3.0;
    }
    else {
      fVar15 = 5.0;
    }
  }
  else {
    fVar15 = 2.0;
  }
  fVar14 = unaff_R14[0x184a];
  if (fVar16 <= fVar14) {
    fVar14 = fVar14 - fVar15 * param_6._4_4_;
    if (fVar14 <= fVar16) {
      fVar14 = fVar16;
    }
  }
  else {
    fVar14 = fVar14 + fVar15 * param_6._4_4_;
    if (fVar16 <= fVar14) {
      fVar14 = fVar16;
    }
  }
  unaff_R14[0x184a] = fVar14;
  unaff_R14[0x1854] = fVar14;
  fVar16 = unaff_R14[0x11];
  if (0.2 <= fVar16) {
    fVar15 = unaff_XMM8_Da;
    if (0.7 < fVar16) {
      fVar15 = (unaff_XMM8_Da - fVar16) * 3.333333;
    }
  }
  else {
    fVar15 = fVar16 * 5.0;
  }
  if (unaff_XMM6_Da < unaff_R14[0x12]) {
    fVar16 = (unaff_R14[0x12] - fVar16) * 4.0;
    if (fVar16 <= unaff_XMM6_Da) {
      fVar16 = unaff_XMM6_Da;
    }
    fVar15 = fVar15 * fVar16;
  }
  pfVar5 = unaff_R14 + 0x1855;
  iVar9 = 1;
  fVar16 = unaff_XMM6_Da;
  do {
    fVar14 = *(float *)(((int64_t)afStack_60e8 - (int64_t)unaff_R14) + (int64_t)pfVar5);
    fVar23 = fVar14 - pfVar5[-10];
    fVar19 = ABS(fVar23);
    if (0.001 <= fVar19) {
      fVar20 = unaff_XMM8_Da;
      if (fVar23 < unaff_XMM6_Da) {
        fVar20 = -1.0;
      }
      if (0.05 <= fVar19) {
        if (0.5 <= fVar19) {
          fVar19 = 0.5;
        }
      }
      else {
        fVar19 = 0.05;
      }
      fVar19 = fVar19 * fVar20 * param_6._4_4_ * 6.0;
      if (fVar19 * fVar20 <= fVar20 * fVar23) {
        fVar14 = pfVar5[-10] + fVar19;
      }
    }
    pfVar5[-10] = fVar14;
    *pfVar5 = fVar14;
    if (2 < iVar9) {
      if (iVar9 < 7) {
        fVar23 = unaff_XMM8_Da - fVar15;
      }
      else {
        fVar23 = unaff_XMM6_Da;
        if (iVar9 == 7) {
          if (*(char *)((int64_t)unaff_R14 + 0x5d) == '\0') {
LAB_18065a5b3:
            fVar23 = fVar15;
          }
        }
        else {
          if (iVar9 != 8) goto LAB_18065a5d3;
          if (*(char *)((int64_t)unaff_R14 + 0x5d) != '\0') goto LAB_18065a5b3;
        }
      }
      fVar14 = fVar23 * fVar14;
      *pfVar5 = fVar14;
    }
LAB_18065a5d3:
    fVar23 = *(float *)((int64_t)afStack_60e8 + (4 - (int64_t)unaff_R14) + (int64_t)pfVar5);
    fVar19 = fVar23 - pfVar5[-9];
    fVar20 = ABS(fVar19);
    if (0.001 <= fVar20) {
      fVar21 = unaff_XMM8_Da;
      if (fVar19 < unaff_XMM6_Da) {
        fVar21 = -1.0;
      }
      if (0.05 <= fVar20) {
        if (0.5 <= fVar20) {
          fVar20 = 0.5;
        }
      }
      else {
        fVar20 = 0.05;
      }
      fVar20 = fVar20 * fVar21 * param_6._4_4_ * 6.0;
      if (fVar20 * fVar21 <= fVar21 * fVar19) {
        fVar23 = pfVar5[-9] + fVar20;
      }
    }
    iVar6 = iVar9 + 1;
    pfVar5[-9] = fVar23;
    pfVar5[1] = fVar23;
    if (2 < iVar6) {
      if (iVar6 < 7) {
        fVar19 = unaff_XMM8_Da - fVar15;
      }
      else {
        fVar19 = unaff_XMM6_Da;
        if (iVar6 == 7) {
          if (*(char *)((int64_t)unaff_R14 + 0x5d) == '\0') {
LAB_18065a67b:
            fVar19 = fVar15;
          }
        }
        else {
          if (iVar6 != 8) goto LAB_18065a69c;
          if (*(char *)((int64_t)unaff_R14 + 0x5d) != '\0') goto LAB_18065a67b;
        }
      }
      fVar23 = fVar19 * fVar23;
      pfVar5[1] = fVar23;
    }
LAB_18065a69c:
    fVar19 = *(float *)((int64_t)afStack_60e8 + (8 - (int64_t)unaff_R14) + (int64_t)pfVar5);
    fVar20 = fVar19 - pfVar5[-8];
    fVar21 = ABS(fVar20);
    if (0.001 <= fVar21) {
      fVar24 = unaff_XMM8_Da;
      if (fVar20 < unaff_XMM6_Da) {
        fVar24 = -1.0;
      }
      if (0.05 <= fVar21) {
        if (0.5 <= fVar21) {
          fVar21 = 0.5;
        }
      }
      else {
        fVar21 = 0.05;
      }
      fVar21 = fVar21 * fVar24 * param_6._4_4_ * 6.0;
      if (fVar21 * fVar24 <= fVar24 * fVar20) {
        fVar19 = pfVar5[-8] + fVar21;
      }
    }
    iVar6 = iVar9 + 2;
    pfVar5[-8] = fVar19;
    pfVar5[2] = fVar19;
    if (2 < iVar6) {
      if (iVar6 < 7) {
        fVar20 = unaff_XMM8_Da - fVar15;
      }
      else {
        fVar20 = unaff_XMM6_Da;
        if (iVar6 == 7) {
          if (*(char *)((int64_t)unaff_R14 + 0x5d) == '\0') {
LAB_18065a744:
            fVar20 = fVar15;
          }
        }
        else {
          if (iVar6 != 8) goto LAB_18065a765;
          if (*(char *)((int64_t)unaff_R14 + 0x5d) != '\0') goto LAB_18065a744;
        }
      }
      fVar19 = fVar20 * fVar19;
      pfVar5[2] = fVar19;
    }
LAB_18065a765:
    iVar9 = iVar9 + 3;
    fVar16 = fVar16 + fVar14 + fVar23 + fVar19;
    pfVar5 = pfVar5 + 3;
    if (9 < iVar9) {
      fVar15 = unaff_R14[0x1854];
      fVar15 = unaff_XMM8_Da - ((fVar15 * 6.0 - 15.0) * fVar15 + 10.0) * fVar15 * fVar15 * fVar15;
      if (fVar16 != fVar15) {
        if (fVar16 <= unaff_XMM6_Da) {
          unaff_R14[0x1854] = 1.0;
        }
        else {
          fVar15 = fVar15 / fVar16;
          unaff_R14[0x1855] = unaff_R14[0x1855] * fVar15;
          unaff_R14[0x1856] = unaff_R14[0x1856] * fVar15;
          unaff_R14[0x1857] = unaff_R14[0x1857] * fVar15;
          unaff_R14[0x1858] = unaff_R14[0x1858] * fVar15;
          unaff_R14[0x1859] = unaff_R14[0x1859] * fVar15;
          unaff_R14[0x185a] = unaff_R14[0x185a] * fVar15;
          unaff_R14[0x185b] = unaff_R14[0x185b] * fVar15;
          unaff_R14[0x185c] = unaff_R14[0x185c] * fVar15;
          unaff_R14[0x185d] = fVar15 * unaff_R14[0x185d];
        }
      }
      fVar13 = fStack000000000000006c - (unaff_XMM8_Da - fVar18) * fVar13;
      fVar25 = ((((fVar17 + fVar12) * (float)param_8 + param_10._4_4_) - param_11._4_4_) - fVar25) -
               param_10._4_4_;
      fVar16 = fVar13 * fVar13 + fVar25 * fVar25;
      fVar16 = (float)(fVar16 <= 1.1754944e-38) * 1.1754944e-38 + fVar16;
      auVar22 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
      fVar15 = auVar22._0_4_;
      fVar16 = fVar15 * 0.5 * (3.0 - fVar16 * fVar15 * fVar15);
      fVar13 = fVar16 * fVar13;
      fVar16 = fVar16 * fVar25;
      _fStack0000000000000038 = CONCAT44(fVar13,fVar16);
      if (ABS(fVar16 * unaff_R14[0x185e] + fVar13 * unaff_R14[0x185f]) <= 0.999) {
        fVar25 = unaff_R14[0x1855] - unaff_R14[0x1856];
        fVar12 = (((unaff_R14[0x1858] + unaff_R14[0x1857] + unaff_R14[0x185b]) - unaff_R14[0x1859])
                 - unaff_R14[0x185a]) - unaff_R14[0x185c];
        fVar16 = fVar25 * fVar25 + fVar12 * fVar12;
        fVar16 = (float)(fVar16 <= 1.1754944e-38) * 1.1754944e-38 + fVar16;
        auVar22 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
        fVar15 = auVar22._0_4_;
        param_6._4_4_ = param_6._4_4_ * 8.0;
        fVar16 = fVar15 * 0.5 * (3.0 - fVar16 * fVar15 * fVar15);
        _fStack0000000000000038 =
             CONCAT44(fVar16 * fVar25 * param_6._4_4_ +
                      (unaff_XMM8_Da - param_6._4_4_) * unaff_R14[0x185f],
                      fVar16 * fVar12 * param_6._4_4_ +
                      (unaff_XMM8_Da - param_6._4_4_) * unaff_R14[0x185e]);
        *(uint64_t *)(unaff_R14 + 0x185e) = _fStack0000000000000038;
        fVar16 = unaff_R14[0x185f];
        fVar15 = unaff_R14[0x185e];
        fVar25 = fVar15 * fVar15 + fVar16 * fVar16;
        auVar22 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
        fVar12 = auVar22._0_4_;
        fVar25 = fVar12 * 0.5 * (3.0 - fVar25 * fVar12 * fVar12);
        unaff_R14[0x185f] = fVar25 * fVar16;
        unaff_R14[0x185e] = fVar25 * fVar15;
      }
      else {
        *(uint64_t *)(unaff_R14 + 0x185e) = _fStack0000000000000038;
      }
                    // WARNING: Subroutine does not return
      uStack_8 = 0x18065aa9f;
      fStack000000000000007c = param_11._4_4_;
      SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x70) ^ (uint64_t)&stack0x00000000);
    }
  } while( true );
}





