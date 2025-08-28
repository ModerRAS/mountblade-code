/* 函数别名定义: MathStatisticsProcessor */
#define MathStatisticsProcessor MathStatisticsProcessor
/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0
#include "TaleWorlds.Native.Split.h"
// 03_rendering_part681.c - 1 个函数
// 函数: void function_6596fe(int64_t param_1,float param_2,int64_t param_3,char param_4)
void function_6596fe(int64_t param_1,float param_2,int64_t param_3,char param_4)
{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint64_t in_RAX;
  int64_t lVar4;
  float *pfVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t unaff_RBX;
  float *pfVar8;
  int64_t unaff_RBP;
  int iVar9;
  uint64_t unaff_RSI;
  uint64_t uVar10;
  int64_t in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  float *unaff_R14;
  char cVar11;
  uint64_t unaff_R15;
  float in_XMM0_Da;
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
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float fVar25;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  int32_t unaff_XMM13_Da;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  int32_t unaff_XMM15_Da;
  int32_t unaff_XMM15_Db;
  int32_t unaff_XMM15_Dc;
  int32_t unaff_XMM15_Dd;
  char cStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000054;
  float fStack000000000000005c;
  uint64_t local_buffer_60;
  float fStack000000000000006c;
  float fStack0000000000000074;
  float fStack000000000000007c;
  float afStack_60e8 [6200];
  uint64_t local_var_8;
  *(uint64_t *)(in_R11 + 0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x20) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R13;
  iVar3 = 0;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  *(int32_t *)(in_R11 + -0x98) = unaff_XMM11_Da;
  *(int32_t *)(in_R11 + -0x94) = unaff_XMM11_Db;
  *(int32_t *)(in_R11 + -0x90) = unaff_XMM11_Dc;
  *(int32_t *)(in_R11 + -0x8c) = unaff_XMM11_Dd;
  *(int32_t *)(in_R11 + -0xa8) = unaff_XMM12_Da;
  *(int32_t *)(in_R11 + -0xa4) = unaff_XMM12_Db;
  *(int32_t *)(in_R11 + -0xa0) = unaff_XMM12_Dc;
  *(int32_t *)(in_R11 + -0x9c) = unaff_XMM12_Dd;
  *(int32_t *)(in_R11 + -0xb8) = unaff_XMM13_Da;
  *(int32_t *)(in_R11 + -0xb4) = unaff_XMM13_Db;
  *(int32_t *)(in_R11 + -0xb0) = unaff_XMM13_Dc;
  *(int32_t *)(in_R11 + -0xac) = unaff_XMM13_Dd;
  *(int32_t *)(in_R11 + -0xd8) = unaff_XMM15_Da;
  *(int32_t *)(in_R11 + -0xd4) = unaff_XMM15_Db;
  *(int32_t *)(in_R11 + -0xd0) = unaff_XMM15_Dc;
  *(int32_t *)(in_R11 + -0xcc) = unaff_XMM15_Dd;
  cStack0000000000000030 = param_4;
  fStack0000000000000034 = param_2;
  local_buffer_60 = in_RAX;
  if (0 < *(int *)(param_1 + 0x60)) {
    pfVar5 = (float *)(param_1 + 0x6c);
    pfVar8 = pfVar5;
    iVar9 = iVar3;
    do {
      fVar17 = pfVar8[1];
      fVar12 = *pfVar8;
      if (fVar17 <= fVar12) {
        fVar12 = fVar12 - param_2 * in_XMM0_Da;
        if (fVar12 <= fVar17) {
          fVar12 = fVar17;
        }
      }
      else {
        fVar12 = param_2 * in_XMM0_Da + fVar12;
        if (fVar17 <= fVar12) {
          fVar12 = fVar17;
        }
      }
      *pfVar8 = fVar12;
      local_var_8 = 0x1806597d3;
      function_65ee60(*(uint64_t *)(pfVar8 + 0x495),param_1 + 0x6150);
      if ((*(char *)(pfVar8 + 0x4af) == '\0') && (*(char *)(pfVar8 + 0x4ce) != '\0')) {
        *(int8_t *)(pfVar8 + 0x4af) = 1;
      }
      if ((*(char *)(pfVar8 + 0x4c8) == '\0') && (*(char *)(pfVar8 + 0x4d4) != '\0')) {
        *(int8_t *)(pfVar8 + 0x4c8) = 1;
      }
      unaff_XMM9_Da = unaff_XMM9_Da + *pfVar8;
      pfVar8 = pfVar8 + 0x4d6;
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)unaff_R14[0x18]);
    if (((unaff_XMM6_Da < unaff_XMM9_Da) && (unaff_XMM9_Da != unaff_XMM8_Da)) &&
       (0 < (int)unaff_R14[0x18])) {
      do {
        iVar3 = iVar3 + 1;
        *pfVar5 = (unaff_XMM8_Da / unaff_XMM9_Da) * *pfVar5;
        pfVar5 = pfVar5 + 0x4d6;
      } while (iVar3 < (int)unaff_R14[0x18]);
    }
  }
  cVar11 = cStack0000000000000030;
  local_var_8 = 0x18065986c;
  function_65cb80();
  if (((unaff_XMM6_Da == unaff_R14[4]) && (unaff_XMM6_Da == unaff_R14[5])) &&
     (0.25 < unaff_R14[2] * unaff_R14[2] + unaff_R14[3] * unaff_R14[3])) {
    *(uint64_t *)(unaff_R14 + 4) = *(uint64_t *)(unaff_R14 + 2);
  }
  if (unaff_R14[8] != unaff_XMM6_Da) {
// WARNING: Subroutine does not return
    local_var_8 = 0x1806598e8;
    AdvancedSystemController(-unaff_R14[8]);
  }
  fStack000000000000003c = (float)((uint64_t)*(uint64_t *)(unaff_R14 + 4) >> 0x20);
  fStack0000000000000038 = (float)*(uint64_t *)(unaff_R14 + 4);
  fStack000000000000004c = (float)((uint64_t)*(uint64_t *)(unaff_R14 + 2) >> 0x20);
  fStack0000000000000048 = (float)*(uint64_t *)(unaff_R14 + 2);
  fVar17 = unaff_R14[0x185d];
  if (((unaff_R14[0x10] == unaff_XMM6_Da) || (unaff_R14[0x10] == 0.5)) || (fVar17 <= unaff_XMM6_Da))
  {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  local_var_8 = 0x1806599e0;
  fVar12 = (float)atan2f(*(uint *)(*(int64_t *)(param_3 + 0x10) + 0x80) ^ 0x80000000,
                         *(int32_t *)(*(int64_t *)(param_3 + 0x10) + 0x84));
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
  lVar6 = (int64_t)(int)fVar12;
  if (0 < (int)fVar12) {
    fVar15 = unaff_XMM6_Da;
    if (*(char *)(lVar6 * 0x1358 + 0x4e + (int64_t)unaff_R14) != '\0') {
      fVar15 = unaff_R14[lVar6 * 0x4d6 + 0x12] * 0.05;
    }
    if ((fVar15 + unaff_R14[lVar6 * 0x4d6 + 0xe] < unaff_R14[lVar6 * 0x4d6 + 0x11]) ||
       (*(char *)(unaff_R14 + lVar6 * 0x4d6 + 0x13) != '\0')) {
      unaff_R14[0xc] = unaff_R14[0xb];
      fVar12 = unaff_R14[0x18];
    }
    lVar6 = (int64_t)(int)fVar12;
    fVar15 = unaff_XMM6_Da;
    if (*(char *)(lVar6 * 0x1358 + 0x66 + (int64_t)unaff_R14) != '\0') {
      fVar15 = unaff_R14[lVar6 * 0x4d6 + 0x18] * 0.05;
    }
    if ((fVar15 + unaff_R14[lVar6 * 0x4d6 + 0x14] < unaff_R14[lVar6 * 0x4d6 + 0x17]) ||
       (*(char *)(unaff_R14 + lVar6 * 0x4d6 + 0x19) != '\0')) {
      unaff_R14[0xd] = unaff_R14[0xb];
      fVar12 = unaff_R14[0x18];
    }
  }
  if ((((((int)fVar12 < 1) || (unaff_XMM6_Da != unaff_R14[2])) || (unaff_XMM6_Da != unaff_R14[3]))
      || (unaff_XMM6_Da == unaff_R14[6])) ||
     ((ABS(unaff_R14[0xb] - unaff_R14[0xc]) < 0.5 && (ABS(unaff_R14[0xb] - unaff_R14[0xd]) < 0.5))))
  {
    if (((bVar2) && ((unaff_XMM6_Da == unaff_R14[2] && (unaff_XMM6_Da == unaff_R14[3])))) ||
       ((unaff_R14[0x14] = 0.0, fStack0000000000000040 = unaff_XMM6_Da,
        unaff_XMM6_Da <= fStack0000000000000038 &&
        (fStack0000000000000040 = unaff_XMM8_Da, fStack0000000000000038 <= unaff_XMM6_Da))))
    goto LAB_180659b1a;
  }
  else {
    bVar2 = true;
    unaff_R14[0x14] = 1.0;
LAB_180659b1a:
    if (((cVar11 == '\0') ||
        (fStack0000000000000040 = unaff_XMM8_Da,
        unaff_XMM8_Da < unaff_R14[0x1854] || unaff_XMM8_Da == unaff_R14[0x1854])) &&
       (fStack0000000000000040 = unaff_XMM8_Da, *(char *)(unaff_R14 + 0x17) != '\0')) {
      fStack0000000000000040 = unaff_XMM6_Da;
    }
  }
  if ((fVar17 <= unaff_XMM6_Da) && (unaff_XMM6_Da < unaff_R14[0x14])) {
    fVar17 = unaff_R14[0xb] - unaff_R14[0xc];
    fVar12 = unaff_R14[0xb] - unaff_R14[0xd];
    if (ABS(fVar17) <= ABS(fVar12)) {
      fVar17 = fVar12;
    }
    if (fVar17 <= 3.1415927) {
      if (fVar17 < -3.1415927) {
        fVar17 = fVar17 + 6.2831855;
      }
    }
    else {
      fVar17 = fVar17 + -6.2831855;
    }
    fVar12 = unaff_XMM6_Da;
    if (unaff_XMM6_Da < fVar17) {
      fVar12 = 0.5;
    }
    unaff_R14[0x10] = fVar12;
  }
  if ((bVar2) && (0 < (int)unaff_R14[0x18])) {
    pfVar5 = unaff_R14 + 0x1b;
    uVar10 = (uint64_t)(uint)unaff_R14[0x18];
    fVar17 = unaff_XMM6_Da;
    do {
      pfVar8 = pfVar5 + 0x495;
      fVar12 = *pfVar5;
      pfVar5 = pfVar5 + 0x4d6;
      fVar17 = fVar17 + *(float *)(*(int64_t *)(*(int64_t *)pfVar8 + 0x48) + 0x188) * fVar12;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    fVar12 = unaff_R14[0x10];
    fVar17 = (fStack0000000000000034 * unaff_R14[7]) / fVar17 + fVar12;
    unaff_R14[0x10] = fVar17;
    if (fVar17 <= unaff_XMM8_Da) {
      if ((((fVar12 <= 0.5) && (0.5 < fVar17)) && (ABS(unaff_R14[0xb] - unaff_R14[0xc]) < 0.5)) &&
         (ABS(unaff_R14[0xb] - unaff_R14[0xd]) < 0.5)) {
        unaff_R14[0x10] = 0.5;
      }
    }
    else if ((0.5 <= ABS(unaff_R14[0xb] - unaff_R14[0xc])) ||
            (0.5 <= ABS(unaff_R14[0xb] - unaff_R14[0xd]))) {
      unaff_R14[0x10] = fVar17 - unaff_XMM8_Da;
    }
    else {
      unaff_R14[0x10] = unaff_XMM6_Da;
    }
  }
  cVar11 = *(char *)(unaff_RBP + 0xa0);
  cVar1 = *(char *)(unaff_RBP + 0xa8);
  if ((((cVar11 != '\0') || (cVar1 != '\0')) &&
      ((unaff_XMM6_Da != unaff_R14[2] || (unaff_XMM6_Da != unaff_R14[3])))) ||
     (((unaff_XMM6_Da != unaff_R14[4] || (unaff_XMM6_Da != unaff_R14[5])) ||
      (fVar17 = unaff_XMM8_Da, unaff_XMM6_Da < unaff_R14[0x14])))) {
    fVar17 = unaff_XMM6_Da;
  }
  fVar18 = fStack0000000000000034 + fStack0000000000000034;
  fVar15 = *unaff_R14 - unaff_R14[1];
  fVar12 = fVar15;
  if ((fVar18 < ABS(fVar15)) && (fVar12 = fVar18, fVar15 < unaff_XMM6_Da)) {
    fVar12 = -fVar18;
  }
  unaff_R14[1] = unaff_R14[1] + fVar12;
  local_var_8 = 0x180659d72;
  fVar15 = (float)function_65c070(ABS(fVar15),param_3,local_buffer_60);
  fVar12 = fStack0000000000000034;
  if (fVar15 <= 0.75) {
    fVar15 = 0.75;
  }
  fVar18 = fVar15 - unaff_R14[0x16];
  if (0.001 <= ABS(fVar18)) {
    fVar15 = fVar18 * fStack0000000000000034 + unaff_R14[0x16];
  }
  unaff_R14[0x16] = fVar15;
  if ((unaff_XMM9_Da <= unaff_XMM6_Da) || (unaff_R14[0x1854] <= unaff_XMM6_Da)) {
    unaff_R14[0xf] = 0.0;
  }
  else {
    fVar15 = unaff_XMM6_Da;
    if (0 < (int)unaff_R14[0x18]) {
      pfVar5 = unaff_R14 + 0x1b;
      uVar10 = (uint64_t)(uint)unaff_R14[0x18];
      do {
        pfVar8 = pfVar5 + 0x495;
        fVar18 = *pfVar5;
        pfVar5 = pfVar5 + 0x4d6;
        fVar15 = fVar15 + *(float *)(**(int64_t **)pfVar8 + 0x188) * fVar18;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    local_var_8 = 0x180659e10;
    fVar15 = (float)fmodf(fStack0000000000000034 / fVar15 + unaff_R14[0xf]);
    unaff_R14[0xf] = fVar15;
  }
  fVar18 = unaff_R14[0x18];
  iVar3 = 0;
  fVar25 = unaff_XMM6_Da;
  if (0 < (int)fVar18) {
    pfVar5 = unaff_R14 + 0x1b;
    do {
      local_var_8 = 0x180659e3d;
      fVar15 = (float)function_65bf60(fVar15,iVar3);
      fVar15 = fVar15 * *pfVar5;
      iVar3 = iVar3 + 1;
      pfVar5 = pfVar5 + 0x4d6;
      fVar25 = fVar25 + fVar15;
    } while (iVar3 < (int)fVar18);
    cVar11 = *(char *)(unaff_RBP + 0xa0);
  }
  if (fVar17 < unaff_XMM8_Da) {
    if (unaff_R14[0x1854] <= unaff_XMM8_Da && unaff_XMM8_Da != unaff_R14[0x1854]) {
      fVar12 = fVar25 * fVar12 + unaff_R14[0xe];
      unaff_R14[0xe] = fVar12;
      if (unaff_XMM8_Da < fVar12) {
        unaff_R14[0xe] = fVar12 - unaff_XMM8_Da;
      }
    }
    else if ((int)fVar18 < 1) {
      unaff_R14[0xe] = unaff_XMM6_Da;
    }
    else {
      fVar12 = unaff_XMM8_Da;
      if (*(char *)(unaff_R14 + 0x17) != '\0') {
        fVar12 = -1.0;
      }
      lVar6 = *(int64_t *)(unaff_R14 + (int64_t)(int)fVar18 * 0x4d6 + -0x26);
      local_var_8 = 0x180659ea7;
      lVar4 = MathStatisticsProcessor0(*(uint64_t *)(lVar6 + 8));
      lVar7 = 0x14;
      if (unaff_XMM6_Da <= (fStack000000000000004c - ABS(fStack0000000000000048)) * fVar12) {
        lVar7 = 0x18;
      }
      fVar12 = *(float *)(lVar7 + lVar4);
      local_var_8 = 0x180659edd;
      MathStatisticsProcessor0(*(uint64_t *)(lVar6 + 8));
      unaff_R14[0xe] = fVar12;
    }
  }
  fVar15 = fStack000000000000003c * fStack000000000000003c +
           fStack0000000000000038 * fStack0000000000000038;
  fVar15 = (float)(fVar15 <= 1.1754944e-38) * 1.1754944e-38 + fVar15;
  auVar22 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
  fVar18 = auVar22._0_4_;
  fVar12 = unaff_XMM8_Da;
  if (fStack000000000000003c * fVar18 * 0.5 * (3.0 - fVar15 * fVar18 * fVar18) < -0.2) {
    fVar12 = unaff_XMM6_Da;
  }
  unaff_R14[0x13] = fVar12;
  fVar15 = fStack0000000000000048;
  fVar18 = fStack000000000000004c;
  if ((fStack0000000000000038 != unaff_XMM6_Da) || (fStack000000000000003c != unaff_XMM6_Da)) {
    if (unaff_XMM6_Da <= fStack0000000000000048 * fStack0000000000000038) {
      if (ABS(fStack0000000000000048) < ABS(fStack0000000000000038)) {
        fVar15 = fStack0000000000000038;
      }
    }
    else {
      fVar15 = fStack0000000000000048 + fStack0000000000000038;
    }
    if (unaff_XMM6_Da <= fStack000000000000003c * fStack000000000000004c) {
      if (ABS(fStack000000000000004c) < ABS(fStack000000000000003c)) {
        fVar18 = fStack000000000000003c;
      }
    }
    else {
      fVar18 = fStack000000000000004c + fStack000000000000003c;
    }
  }
  local_var_8 = 0x18065a04d;
  fVar15 = (float)atan2f(-fVar15,fVar18);
  fVar15 = ABS(fVar15);
  if (1.5707964 < fVar15) {
    fVar15 = 3.1415927 - fVar15;
  }
  fVar15 = fVar15 * 0.63661975;
  fVar16 = (unaff_XMM8_Da - *(float *)(unaff_RBP + 0xc0)) * 0.3;
  fVar18 = unaff_XMM6_Da;
  if ((fVar16 + 0.05 <= fVar15) && (fVar18 = fVar15, 0.95 - fVar16 < fVar15)) {
    fVar18 = unaff_XMM8_Da;
  }
  fVar16 = fVar18 - unaff_R14[0x15];
  fVar23 = ABS(fVar16);
  fVar15 = fVar18;
  if (0.001 <= fVar23) {
    fVar13 = fStack0000000000000034;
    if (fVar16 < unaff_XMM6_Da) {
      fVar13 = -fStack0000000000000034;
    }
    fVar16 = 0.1;
    if ((0.1 <= fVar23) && (fVar16 = fVar23, 0.5 <= fVar23)) {
      fVar16 = 0.5;
    }
    fVar16 = fVar13 * fVar16 * 12.0;
    if (ABS(fVar16) <= fVar23) {
      fVar15 = unaff_R14[0x15] + fVar16;
    }
  }
  unaff_R14[0x15] = fVar15;
  if ((((fStack000000000000004c <= -0.1) || (cVar1 == '\0')) || (cVar11 != '\0')) ||
     (fStack000000000000003c <= -0.1)) {
LAB_18065a17c:
    if ((unaff_R14[0x11] <= unaff_XMM6_Da) || (unaff_XMM8_Da <= unaff_R14[0x11])) {
      unaff_R14[0x11] = 0.0;
      unaff_R14[0x12] = -1.0;
      goto LAB_18065a2e9;
    }
  }
  else {
    fVar15 = fStack000000000000004c * fStack000000000000004c +
             fStack000000000000004c * fStack000000000000004c;
    fVar15 = fVar15 + fVar15;
    if (fVar15 <= unaff_XMM8_Da) {
      fVar15 = unaff_XMM8_Da;
    }
    if (-fVar15 <= fStack0000000000000048 * fStack0000000000000038) goto LAB_18065a17c;
  }
  fVar15 = unaff_R14[0x11];
  if (fVar15 == unaff_XMM6_Da) {
    *(bool *)((int64_t)unaff_R14 + 0x5d) = fStack0000000000000038 < unaff_XMM6_Da;
  }
  fVar15 = (*(float *)(*(int64_t *)
                        (*(int64_t *)(unaff_R14 + (int64_t)(int)unaff_R14[0x18] * 0x4d6 + -0x26) +
                        8) + 0x188) /
           *(float *)(*(int64_t *)
                       (*(int64_t *)(unaff_R14 + (int64_t)(int)unaff_R14[0x18] * 0x4d6 + -0x26) +
                       0x38) + 0x188)) * fVar25 * fStack0000000000000034 + fVar15;
  if (unaff_XMM8_Da <= fVar15) {
    fVar15 = unaff_XMM8_Da;
  }
  unaff_R14[0x11] = fVar15;
  if (unaff_R14[0x12] <= unaff_XMM6_Da && unaff_XMM6_Da != unaff_R14[0x12]) {
    fVar25 = unaff_XMM8_Da;
    if (*(char *)((int64_t)unaff_R14 + 0x5d) != '\0') {
      fVar25 = -1.0;
    }
    if (unaff_XMM6_Da <= fVar25 * fStack0000000000000038) {
      fVar25 = fVar15;
      if (*(char *)((int64_t)unaff_R14 + 0x5d) == '\0') {
        local_var_8 = 0x18065a252;
        fVar25 = (float)fmodf(fVar15 + 0.5);
      }
      fVar25 = fVar25 - unaff_R14[0xe];
      if (fVar25 <= 0.5) {
        if (fVar25 < -0.5) {
          fVar25 = fVar25 + unaff_XMM8_Da;
        }
      }
      else {
        fVar25 = fVar25 + -1.0;
      }
      fVar16 = fVar15 * fVar15 * fVar15 + fStack0000000000000034;
      if (unaff_XMM8_Da <= fVar16) {
        fVar16 = unaff_XMM8_Da;
      }
      fVar15 = fVar16 * fVar15 * fVar25 + unaff_R14[0xe];
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
      unaff_R14[0x12] = fVar15 + 0.25;
    }
  }
LAB_18065a2e9:
  fVar15 = unaff_R14[0x14];
  fStack0000000000000054 = (unaff_XMM8_Da - fVar15) * (unaff_XMM8_Da - fVar17);
  fVar16 = (unaff_XMM8_Da - fVar12) * fStack0000000000000054;
  fStack000000000000006c = (unaff_XMM8_Da - fVar18) * fVar12 * fStack0000000000000054;
  fVar25 = fVar12 * fStack0000000000000054 * fVar18;
  fVar23 = fVar16 * fVar18;
  fStack0000000000000054 = fStack0000000000000054 * fVar18;
  fStack0000000000000074 = fVar25 * fStack0000000000000040;
  *(float *)(unaff_RBP + -0x7c) = fStack0000000000000054;
  *(float *)(unaff_RBP + -0x78) = fStack0000000000000054;
  *(float *)(unaff_RBP + -0x74) = (unaff_XMM8_Da - fVar17) * fVar15;
  fVar12 = (unaff_XMM8_Da - fStack0000000000000040) * fVar23;
  fStack000000000000005c = (unaff_XMM8_Da - fStack0000000000000040) * fVar25;
  local_buffer_60 = CONCAT44(local_buffer_60._4_4_,fVar12);
  *(float *)(unaff_RBP + -0x80) = fVar12;
  if ((cStack0000000000000030 == '\0') || (unaff_XMM6_Da < fStack0000000000000040)) {
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
  fVar13 = unaff_R14[0x184a];
  if (fVar17 <= fVar13) {
    fVar13 = fVar13 - fVar15 * fStack0000000000000034;
    if (fVar13 <= fVar17) {
      fVar13 = fVar17;
    }
  }
  else {
    fVar13 = fVar13 + fVar15 * fStack0000000000000034;
    if (fVar17 <= fVar13) {
      fVar13 = fVar17;
    }
  }
  unaff_R14[0x184a] = fVar13;
  unaff_R14[0x1854] = fVar13;
  fVar17 = unaff_R14[0x11];
  if (0.2 <= fVar17) {
    fVar15 = unaff_XMM8_Da;
    if (0.7 < fVar17) {
      fVar15 = (unaff_XMM8_Da - fVar17) * 3.333333;
    }
  }
  else {
    fVar15 = fVar17 * 5.0;
  }
  if (unaff_XMM6_Da < unaff_R14[0x12]) {
    fVar17 = (unaff_R14[0x12] - fVar17) * 4.0;
    if (fVar17 <= unaff_XMM6_Da) {
      fVar17 = unaff_XMM6_Da;
    }
    fVar15 = fVar15 * fVar17;
  }
  pfVar5 = unaff_R14 + 0x1855;
  iVar3 = 1;
  fVar17 = unaff_XMM6_Da;
  do {
    fVar13 = *(float *)(((int64_t)afStack_60e8 - (int64_t)unaff_R14) + (int64_t)pfVar5);
    fVar14 = fVar13 - pfVar5[-10];
    fVar19 = ABS(fVar14);
    if (0.001 <= fVar19) {
      fVar20 = unaff_XMM8_Da;
      if (fVar14 < unaff_XMM6_Da) {
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
      fVar19 = fVar19 * fVar20 * fStack0000000000000034 * 6.0;
      if (fVar19 * fVar20 <= fVar20 * fVar14) {
        fVar13 = pfVar5[-10] + fVar19;
      }
    }
    pfVar5[-10] = fVar13;
    *pfVar5 = fVar13;
    if (2 < iVar3) {
      if (iVar3 < 7) {
        fVar14 = unaff_XMM8_Da - fVar15;
      }
      else {
        fVar14 = unaff_XMM6_Da;
        if (iVar3 == 7) {
          if (*(char *)((int64_t)unaff_R14 + 0x5d) == '\0') {
LAB_18065a5b3:
            fVar14 = fVar15;
          }
        }
        else {
          if (iVar3 != 8) goto LAB_18065a5d3;
          if (*(char *)((int64_t)unaff_R14 + 0x5d) != '\0') goto LAB_18065a5b3;
        }
      }
      fVar13 = fVar14 * fVar13;
      *pfVar5 = fVar13;
    }
LAB_18065a5d3:
    fVar14 = *(float *)((int64_t)afStack_60e8 + (4 - (int64_t)unaff_R14) + (int64_t)pfVar5);
    fVar19 = fVar14 - pfVar5[-9];
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
      fVar20 = fVar20 * fVar21 * fStack0000000000000034 * 6.0;
      if (fVar20 * fVar21 <= fVar21 * fVar19) {
        fVar14 = pfVar5[-9] + fVar20;
      }
    }
    iVar9 = iVar3 + 1;
    pfVar5[-9] = fVar14;
    pfVar5[1] = fVar14;
    if (2 < iVar9) {
      if (iVar9 < 7) {
        fVar19 = unaff_XMM8_Da - fVar15;
      }
      else {
        fVar19 = unaff_XMM6_Da;
        if (iVar9 == 7) {
          if (*(char *)((int64_t)unaff_R14 + 0x5d) == '\0') {
LAB_18065a67b:
            fVar19 = fVar15;
          }
        }
        else {
          if (iVar9 != 8) goto LAB_18065a69c;
          if (*(char *)((int64_t)unaff_R14 + 0x5d) != '\0') goto LAB_18065a67b;
        }
      }
      fVar14 = fVar19 * fVar14;
      pfVar5[1] = fVar14;
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
      fVar21 = fVar21 * fVar24 * fStack0000000000000034 * 6.0;
      if (fVar21 * fVar24 <= fVar24 * fVar20) {
        fVar19 = pfVar5[-8] + fVar21;
      }
    }
    iVar9 = iVar3 + 2;
    pfVar5[-8] = fVar19;
    pfVar5[2] = fVar19;
    if (2 < iVar9) {
      if (iVar9 < 7) {
        fVar20 = unaff_XMM8_Da - fVar15;
      }
      else {
        fVar20 = unaff_XMM6_Da;
        if (iVar9 == 7) {
          if (*(char *)((int64_t)unaff_R14 + 0x5d) == '\0') {
LAB_18065a744:
            fVar20 = fVar15;
          }
        }
        else {
          if (iVar9 != 8) goto LAB_18065a765;
          if (*(char *)((int64_t)unaff_R14 + 0x5d) != '\0') goto LAB_18065a744;
        }
      }
      fVar19 = fVar20 * fVar19;
      pfVar5[2] = fVar19;
    }
LAB_18065a765:
    iVar3 = iVar3 + 3;
    fVar17 = fVar17 + fVar13 + fVar14 + fVar19;
    pfVar5 = pfVar5 + 3;
    if (9 < iVar3) {
      fVar15 = unaff_R14[0x1854];
      fVar15 = unaff_XMM8_Da - ((fVar15 * 6.0 - 15.0) * fVar15 + 10.0) * fVar15 * fVar15 * fVar15;
      if (fVar17 != fVar15) {
        if (fVar17 <= unaff_XMM6_Da) {
          unaff_R14[0x1854] = 1.0;
        }
        else {
          fVar15 = fVar15 / fVar17;
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
      fVar15 = fStack000000000000006c - (unaff_XMM8_Da - fVar18) * fVar16;
      fVar18 = ((((fVar23 + fVar25) * fStack0000000000000040 + fStack0000000000000054) -
                fStack000000000000005c) - fVar12) - fStack0000000000000054;
      fVar17 = fVar15 * fVar15 + fVar18 * fVar18;
      fVar17 = (float)(fVar17 <= 1.1754944e-38) * 1.1754944e-38 + fVar17;
      auVar22 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
      fVar12 = auVar22._0_4_;
      fVar17 = fVar12 * 0.5 * (3.0 - fVar17 * fVar12 * fVar12);
      fVar15 = fVar17 * fVar15;
      fVar17 = fVar17 * fVar18;
      _fStack0000000000000038 = CONCAT44(fVar15,fVar17);
      if (ABS(fVar17 * unaff_R14[0x185e] + fVar15 * unaff_R14[0x185f]) <= 0.999) {
        fVar18 = unaff_R14[0x1855] - unaff_R14[0x1856];
        fVar25 = (((unaff_R14[0x1858] + unaff_R14[0x1857] + unaff_R14[0x185b]) - unaff_R14[0x1859])
                 - unaff_R14[0x185a]) - unaff_R14[0x185c];
        fVar17 = fVar18 * fVar18 + fVar25 * fVar25;
        fVar17 = (float)(fVar17 <= 1.1754944e-38) * 1.1754944e-38 + fVar17;
        auVar22 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
        fVar12 = auVar22._0_4_;
        fVar15 = fStack0000000000000034 * 8.0;
        fVar17 = fVar12 * 0.5 * (3.0 - fVar17 * fVar12 * fVar12);
        _fStack0000000000000038 =
             CONCAT44(fVar17 * fVar18 * fVar15 + (unaff_XMM8_Da - fVar15) * unaff_R14[0x185f],
                      fVar17 * fVar25 * fVar15 + (unaff_XMM8_Da - fVar15) * unaff_R14[0x185e]);
        *(uint64_t *)(unaff_R14 + 0x185e) = _fStack0000000000000038;
        fVar17 = unaff_R14[0x185f];
        fVar12 = unaff_R14[0x185e];
        fVar15 = fVar12 * fVar12 + fVar17 * fVar17;
        auVar22 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
        fVar18 = auVar22._0_4_;
        fVar15 = fVar18 * 0.5 * (3.0 - fVar15 * fVar18 * fVar18);
        unaff_R14[0x185f] = fVar15 * fVar17;
        unaff_R14[0x185e] = fVar15 * fVar12;
      }
      else {
        *(uint64_t *)(unaff_R14 + 0x185e) = _fStack0000000000000038;
      }
// WARNING: Subroutine does not return
      local_var_8 = 0x18065aa9f;
      fStack000000000000007c = fStack000000000000005c;
      SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x70) ^ (uint64_t)&local_buffer_00000000);
    }
  } while( true );
}