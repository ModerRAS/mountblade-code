#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part680.c - 4 个函数

// 函数: void FUN_1806593b0(longlong *param_1,float param_2)
void FUN_1806593b0(longlong *param_1,float param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  int8_t auVar7 [16];
  float fStackX_8;
  float fStackX_c;
  
  lVar2 = *param_1;
  uVar1 = 0;
  uVar4 = uVar1;
  if (param_1[1] - lVar2 >> 3 != 0) {
    do {
      uVar3 = (int)uVar4 + 1;
      fStackX_c = (float)((ulonglong)*(uint64_t *)(uVar1 + lVar2) >> 0x20);
      fStackX_8 = (float)*(uint64_t *)(uVar1 + lVar2);
      fVar5 = fStackX_c * fStackX_c + fStackX_8 * fStackX_8;
      auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar7._0_4_;
      fVar5 = fVar6 * 0.5 * (3.0 - fVar5 * fVar6 * fVar6);
      *(ulonglong *)(uVar1 + param_1[0x11]) =
           CONCAT44(fVar5 * fStackX_c * param_2 + *(float *)(uVar1 + 4 + lVar2),
                    fVar5 * fStackX_8 * param_2 + *(float *)(uVar1 + lVar2));
      uVar1 = uVar1 + 8;
      lVar2 = *param_1;
      uVar4 = (ulonglong)uVar3;
    } while ((ulonglong)(longlong)(int)uVar3 < (ulonglong)(param_1[1] - lVar2 >> 3));
  }
  return;
}





// 函数: void FUN_1806593d9(uint64_t param_1,longlong *param_2,uint64_t param_3,longlong param_4)
void FUN_1806593d9(uint64_t param_1,longlong *param_2,uint64_t param_3,longlong param_4)

{
  ulonglong uVar1;
  uint in_R10D;
  float fVar2;
  float fVar3;
  int8_t auVar4 [16];
  float unaff_XMM7_Da;
  float fStack0000000000000050;
  float fStack0000000000000054;
  
  uVar1 = (ulonglong)in_R10D;
  do {
    in_R10D = in_R10D + 1;
    fStack0000000000000054 = (float)((ulonglong)*(uint64_t *)(uVar1 + param_4) >> 0x20);
    fStack0000000000000050 = (float)*(uint64_t *)(uVar1 + param_4);
    fVar2 = fStack0000000000000054 * fStack0000000000000054 +
            fStack0000000000000050 * fStack0000000000000050;
    auVar4 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
    fVar3 = auVar4._0_4_;
    fVar2 = fVar3 * 0.5 * (3.0 - fVar2 * fVar3 * fVar3);
    *(ulonglong *)(uVar1 + param_2[0x11]) =
         CONCAT44(fVar2 * fStack0000000000000054 * unaff_XMM7_Da + *(float *)(uVar1 + 4 + param_4),
                  fVar2 * fStack0000000000000050 * unaff_XMM7_Da + *(float *)(uVar1 + param_4));
    uVar1 = uVar1 + 8;
    param_4 = *param_2;
  } while ((ulonglong)(longlong)(int)in_R10D < (ulonglong)(param_2[1] - param_4 >> 3));
  return;
}





// 函数: void FUN_1806594bd(void)
void FUN_1806594bd(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806596a0(float *param_1,float param_2,longlong param_3,char param_4,char param_5,
void FUN_1806596a0(float *param_1,float param_2,longlong param_3,char param_4,char param_5,
                  char param_6,uint64_t param_7,uint64_t param_8,float param_9,
                  uint64_t param_10)

{
  uint64_t uVar1;
  uint64_t uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  int iVar11;
  ulonglong uVar12;
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
  float fVar25;
  float afStack_6260 [6200];
  uint64_t uStack_180;
  int8_t auStack_178 [32];
  float fStack_158;
  float *pfStack_150;
  char cStack_148;
  float fStack_144;
  uint64_t uStack_140;
  float fStack_138;
  uint64_t uStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  uint64_t uStack_118;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulonglong uStack_e8;
  
  uStack_e8 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_178;
  fVar25 = 0.0;
  iVar5 = 0;
  uStack_118 = param_10;
  cStack_148 = param_4;
  fStack_144 = param_2;
  if (0 < (int)param_1[0x18]) {
    pfVar7 = param_1 + 0x1b;
    pfVar10 = pfVar7;
    iVar11 = iVar5;
    do {
      fVar19 = pfVar10[1];
      fVar13 = *pfVar10;
      fStack_158 = param_1[0x11];
      if (fVar19 <= fVar13) {
        fVar13 = fVar13 - param_2 * 4.0;
        if (fVar13 <= fVar19) {
          fVar13 = fVar19;
        }
      }
      else {
        fVar13 = param_2 * 4.0 + fVar13;
        if (fVar19 <= fVar13) {
          fVar13 = fVar19;
        }
      }
      pfStack_150 = pfVar10 + 0x4c9;
      *pfVar10 = fVar13;
      uStack_180 = 0x1806597d3;
      FUN_18065ee60(*(uint64_t *)(pfVar10 + 0x495),param_1 + 0x1854);
      if ((*(char *)(pfVar10 + 0x4af) == '\0') && (*(char *)(pfVar10 + 0x4ce) != '\0')) {
        *(int8_t *)(pfVar10 + 0x4af) = 1;
      }
      if ((*(char *)(pfVar10 + 0x4c8) == '\0') && (*(char *)(pfVar10 + 0x4d4) != '\0')) {
        *(int8_t *)(pfVar10 + 0x4c8) = 1;
      }
      fVar25 = fVar25 + *pfVar10;
      pfVar10 = pfVar10 + 0x4d6;
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)param_1[0x18]);
    if (((0.0 < fVar25) && (fVar25 != 1.0)) && (0 < (int)param_1[0x18])) {
      do {
        iVar5 = iVar5 + 1;
        *pfVar7 = (1.0 / fVar25) * *pfVar7;
        pfVar7 = pfVar7 + 0x4d6;
      } while (iVar5 < (int)param_1[0x18]);
    }
  }
  cVar4 = cStack_148;
  uStack_180 = 0x18065986c;
  FUN_18065cb80(param_1);
  if (((param_1[4] == 0.0) && (param_1[5] == 0.0)) &&
     (0.25 < param_1[2] * param_1[2] + param_1[3] * param_1[3])) {
    *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_1 + 2);
  }
  uVar1 = *(uint64_t *)(param_1 + 4);
  uVar2 = *(uint64_t *)(param_1 + 2);
  uStack_140 = uVar1;
  uStack_130 = uVar2;
  if (param_1[8] != 0.0) {
                    // WARNING: Subroutine does not return
    uStack_180 = 0x1806598e8;
    FUN_1808fd400(-param_1[8]);
  }
  uStack_140._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  fVar24 = uStack_140._4_4_;
  uStack_140._0_4_ = (float)uVar1;
  fVar13 = (float)uStack_140;
  uStack_130._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
  fVar21 = uStack_130._4_4_;
  uStack_130._0_4_ = (float)uVar2;
  fVar17 = (float)uStack_130;
  fVar19 = param_1[0x185d];
  if (((param_1[0x10] == 0.0) || (param_1[0x10] == 0.5)) || (fVar19 <= 0.0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  uStack_180 = 0x1806599e0;
  fVar14 = (float)atan2f(*(uint *)(*(longlong *)(param_3 + 0x10) + 0x80) ^ 0x80000000,
                         *(int32_t *)(*(longlong *)(param_3 + 0x10) + 0x84));
  fVar14 = fVar14 + param_1[6];
  param_1[0xb] = fVar14;
  if (fVar14 <= 3.1415927) {
    if (fVar14 < -3.1415927) {
      fVar14 = fVar14 + 6.2831855;
      goto LAB_180659a1a;
    }
  }
  else {
    fVar14 = fVar14 - 6.2831855;
LAB_180659a1a:
    param_1[0xb] = fVar14;
  }
  fVar14 = param_1[0x18];
  lVar8 = (longlong)(int)fVar14;
  if (0 < (int)fVar14) {
    if (*(char *)(lVar8 * 0x1358 + 0x4e + (longlong)param_1) == '\0') {
      fVar15 = 0.0;
    }
    else {
      fVar15 = param_1[lVar8 * 0x4d6 + 0x12] * 0.05;
    }
    if ((fVar15 + param_1[lVar8 * 0x4d6 + 0xe] < param_1[lVar8 * 0x4d6 + 0x11]) ||
       (*(char *)(param_1 + lVar8 * 0x4d6 + 0x13) != '\0')) {
      param_1[0xc] = param_1[0xb];
      fVar14 = param_1[0x18];
    }
    lVar8 = (longlong)(int)fVar14;
    if (*(char *)(lVar8 * 0x1358 + 0x66 + (longlong)param_1) == '\0') {
      fVar15 = 0.0;
    }
    else {
      fVar15 = param_1[lVar8 * 0x4d6 + 0x18] * 0.05;
    }
    if ((fVar15 + param_1[lVar8 * 0x4d6 + 0x14] < param_1[lVar8 * 0x4d6 + 0x17]) ||
       (*(char *)(param_1 + lVar8 * 0x4d6 + 0x19) != '\0')) {
      param_1[0xd] = param_1[0xb];
      fVar14 = param_1[0x18];
    }
  }
  fStack_138 = 1.0;
  if ((((((int)fVar14 < 1) || (param_1[2] != 0.0)) || (param_1[3] != 0.0)) || (param_1[6] == 0.0))
     || ((ABS(param_1[0xb] - param_1[0xc]) < 0.5 && (ABS(param_1[0xb] - param_1[0xd]) < 0.5)))) {
    if ((bVar3) && ((param_1[2] == 0.0 && (param_1[3] == 0.0)))) goto LAB_180659b1a;
    param_1[0x14] = 0.0;
    if (0.0 <= fVar13) {
      if (fVar13 <= 0.0) goto LAB_180659b1a;
      fStack_138 = 1.0;
    }
    else {
      fStack_138 = 0.0;
    }
  }
  else {
    bVar3 = true;
    param_1[0x14] = 1.0;
LAB_180659b1a:
    if ((cVar4 == '\0') || (1.0 < param_1[0x1854] || param_1[0x1854] == 1.0)) {
      if (*(char *)(param_1 + 0x17) == '\0') {
        fStack_138 = 1.0;
      }
      else {
        fStack_138 = 0.0;
      }
    }
  }
  if ((fVar19 <= 0.0) && (0.0 < param_1[0x14])) {
    fVar19 = param_1[0xb] - param_1[0xc];
    fVar14 = param_1[0xb] - param_1[0xd];
    if (ABS(fVar19) <= ABS(fVar14)) {
      fVar19 = fVar14;
    }
    if (fVar19 <= 3.1415927) {
      if (fVar19 < -3.1415927) {
        fVar19 = fVar19 + 6.2831855;
      }
    }
    else {
      fVar19 = fVar19 + -6.2831855;
    }
    if (fVar19 <= 0.0) {
      fVar19 = 0.0;
    }
    else {
      fVar19 = 0.5;
    }
    param_1[0x10] = fVar19;
  }
  if ((bVar3) && (0 < (int)param_1[0x18])) {
    fVar19 = 0.0;
    pfVar7 = param_1 + 0x1b;
    uVar12 = (ulonglong)(uint)param_1[0x18];
    do {
      pfVar10 = pfVar7 + 0x495;
      fVar14 = *pfVar7;
      pfVar7 = pfVar7 + 0x4d6;
      fVar19 = fVar19 + *(float *)(*(longlong *)(*(longlong *)pfVar10 + 0x48) + 0x188) * fVar14;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    fVar14 = param_1[0x10];
    fVar19 = (fStack_144 * param_1[7]) / fVar19 + fVar14;
    param_1[0x10] = fVar19;
    if (fVar19 <= 1.0) {
      if ((((fVar14 <= 0.5) && (0.5 < fVar19)) && (ABS(param_1[0xb] - param_1[0xc]) < 0.5)) &&
         (ABS(param_1[0xb] - param_1[0xd]) < 0.5)) {
        param_1[0x10] = 0.5;
      }
    }
    else if ((0.5 <= ABS(param_1[0xb] - param_1[0xc])) || (0.5 <= ABS(param_1[0xb] - param_1[0xd])))
    {
      param_1[0x10] = fVar19 - 1.0;
    }
    else {
      param_1[0x10] = 0.0;
    }
  }
  fVar19 = 1.0;
  if ((((param_5 != '\0') || (param_6 != '\0')) && ((param_1[2] != 0.0 || (param_1[3] != 0.0)))) ||
     (((param_1[4] != 0.0 || (param_1[5] != 0.0)) || (0.0 < param_1[0x14])))) {
    fVar19 = 0.0;
  }
  fVar20 = fStack_144 + fStack_144;
  fVar15 = *param_1 - param_1[1];
  fVar14 = fVar15;
  if ((fVar20 < ABS(fVar15)) && (fVar14 = fVar20, fVar15 < 0.0)) {
    fVar14 = -fVar20;
  }
  param_1[1] = param_1[1] + fVar14;
  uStack_180 = 0x180659d72;
  fVar15 = (float)FUN_18065c070(param_1,param_3,uStack_118);
  fVar14 = fStack_144;
  if (fVar15 <= 0.75) {
    fVar15 = 0.75;
  }
  fVar20 = fVar15 - param_1[0x16];
  if (0.001 <= ABS(fVar20)) {
    fVar15 = fVar20 * fStack_144 + param_1[0x16];
  }
  param_1[0x16] = fVar15;
  if ((fVar25 <= 0.0) || (param_1[0x1854] <= 0.0)) {
    param_1[0xf] = 0.0;
  }
  else {
    fVar25 = 0.0;
    if (0 < (int)param_1[0x18]) {
      pfVar7 = param_1 + 0x1b;
      uVar12 = (ulonglong)(uint)param_1[0x18];
      do {
        pfVar10 = pfVar7 + 0x495;
        fVar15 = *pfVar7;
        pfVar7 = pfVar7 + 0x4d6;
        fVar25 = fVar25 + *(float *)(**(longlong **)pfVar10 + 0x188) * fVar15;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    uStack_180 = 0x180659e10;
    fVar25 = (float)fmodf(fStack_144 / fVar25 + param_1[0xf],0x3f800000);
    param_1[0xf] = fVar25;
  }
  fVar25 = param_1[0x18];
  iVar5 = 0;
  fVar15 = 0.0;
  if (0 < (int)fVar25) {
    pfVar7 = param_1 + 0x1b;
    do {
      uStack_180 = 0x180659e3d;
      fVar16 = (float)FUN_18065bf60(param_1,iVar5);
      fVar20 = *pfVar7;
      iVar5 = iVar5 + 1;
      pfVar7 = pfVar7 + 0x4d6;
      fVar15 = fVar15 + fVar16 * fVar20;
    } while (iVar5 < (int)fVar25);
  }
  if (fVar19 < 1.0) {
    if (param_1[0x1854] <= 1.0 && param_1[0x1854] != 1.0) {
      fVar25 = fVar15 * fVar14 + param_1[0xe];
      param_1[0xe] = fVar25;
      if (1.0 < fVar25) {
        param_1[0xe] = fVar25 - 1.0;
      }
    }
    else if ((int)fVar25 < 1) {
      param_1[0xe] = 0.0;
    }
    else {
      if (*(char *)(param_1 + 0x17) == '\0') {
        fVar14 = 1.0;
      }
      else {
        fVar14 = -1.0;
      }
      lVar8 = *(longlong *)(param_1 + (longlong)(int)fVar25 * 0x4d6 + -0x26);
      uStack_180 = 0x180659ea7;
      lVar6 = FUN_18065fd40(*(uint64_t *)(lVar8 + 8));
      lVar9 = 0x14;
      if (0.0 <= (fVar21 - ABS(fVar17)) * fVar14) {
        lVar9 = 0x18;
      }
      fVar25 = *(float *)(lVar9 + lVar6);
      uStack_180 = 0x180659edd;
      FUN_18065fd40(*(uint64_t *)(lVar8 + 8));
      param_1[0xe] = fVar25;
    }
  }
  fVar25 = fVar24 * fVar24 + fVar13 * fVar13;
  fVar25 = (float)(fVar25 <= 1.1754944e-38) * 1.1754944e-38 + fVar25;
  auVar22 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
  fVar14 = auVar22._0_4_;
  if (-0.2 <= fVar24 * fVar14 * 0.5 * (3.0 - fVar25 * fVar14 * fVar14)) {
    fVar25 = 1.0;
  }
  else {
    fVar25 = 0.0;
  }
  param_1[0x13] = fVar25;
  fVar14 = fVar17;
  fVar20 = fVar21;
  if ((fVar13 != 0.0) || (fVar24 != 0.0)) {
    if (0.0 <= fVar17 * fVar13) {
      if (ABS(fVar17) < ABS(fVar13)) {
        fVar14 = fVar13;
      }
    }
    else {
      fVar14 = fVar17 + fVar13;
    }
    if (0.0 <= fVar24 * fVar21) {
      if (ABS(fVar21) < ABS(fVar24)) {
        fVar20 = fVar24;
      }
    }
    else {
      fVar20 = fVar21 + fVar24;
    }
  }
  uStack_180 = 0x18065a04d;
  uStack_140 = uVar2;
  fVar14 = (float)atan2f(-fVar14,fVar20);
  fVar14 = ABS(fVar14);
  if (1.5707964 < fVar14) {
    fVar14 = 3.1415927 - fVar14;
  }
  fVar14 = fVar14 * 0.63661975;
  fVar20 = (1.0 - param_9) * 0.3;
  if (fVar20 + 0.05 <= fVar14) {
    if (0.95 - fVar20 < fVar14) {
      fVar14 = 1.0;
    }
  }
  else {
    fVar14 = 0.0;
  }
  fVar16 = fVar14 - param_1[0x15];
  fVar23 = ABS(fVar16);
  fVar20 = fVar14;
  if (0.001 <= fVar23) {
    fVar18 = fStack_144;
    if (fVar16 < 0.0) {
      fVar18 = -fStack_144;
    }
    fVar16 = 0.1;
    if ((0.1 <= fVar23) && (fVar16 = fVar23, 0.5 <= fVar23)) {
      fVar16 = 0.5;
    }
    fVar16 = fVar18 * fVar16 * 12.0;
    if (ABS(fVar16) <= fVar23) {
      fVar20 = param_1[0x15] + fVar16;
    }
  }
  param_1[0x15] = fVar20;
  if ((((fVar21 <= -0.1) || (param_6 == '\0')) || (param_5 != '\0')) || (fVar24 <= -0.1)) {
LAB_18065a17c:
    if ((param_1[0x11] <= 0.0) || (1.0 <= param_1[0x11])) {
      param_1[0x11] = 0.0;
      param_1[0x12] = -1.0;
      goto LAB_18065a2e9;
    }
  }
  else {
    fVar24 = fVar21 * fVar21 + fVar21 * fVar21;
    fVar24 = fVar24 + fVar24;
    if (fVar24 <= 1.0) {
      fVar24 = 1.0;
    }
    if (-fVar24 <= fVar17 * fVar13) goto LAB_18065a17c;
  }
  fVar24 = param_1[0x11];
  if (fVar24 == 0.0) {
    *(bool *)((longlong)param_1 + 0x5d) = fVar13 < 0.0;
  }
  fVar24 = (*(float *)(*(longlong *)
                        (*(longlong *)(param_1 + (longlong)(int)param_1[0x18] * 0x4d6 + -0x26) + 8)
                      + 0x188) /
           *(float *)(*(longlong *)
                       (*(longlong *)(param_1 + (longlong)(int)param_1[0x18] * 0x4d6 + -0x26) + 0x38
                       ) + 0x188)) * fVar15 * fStack_144 + fVar24;
  if (1.0 <= fVar24) {
    fVar24 = 1.0;
  }
  param_1[0x11] = fVar24;
  if (param_1[0x12] <= 0.0 && param_1[0x12] != 0.0) {
    if (*(char *)((longlong)param_1 + 0x5d) == '\0') {
      fVar17 = 1.0;
    }
    else {
      fVar17 = -1.0;
    }
    if (0.0 <= fVar17 * fVar13) {
      fVar13 = fVar24;
      if (*(char *)((longlong)param_1 + 0x5d) == '\0') {
        uStack_180 = 0x18065a252;
        fVar13 = (float)fmodf(fVar24 + 0.5,0x3f800000);
      }
      fVar13 = fVar13 - param_1[0xe];
      if (fVar13 <= 0.5) {
        if (fVar13 < -0.5) {
          fVar13 = fVar13 + 1.0;
        }
      }
      else {
        fVar13 = fVar13 + -1.0;
      }
      fVar17 = fVar24 * fVar24 * fVar24 + fStack_144;
      if (1.0 <= fVar17) {
        fVar17 = 1.0;
      }
      fVar13 = fVar17 * fVar24 * fVar13 + param_1[0xe];
      param_1[0xe] = fVar13;
      if (0.0 <= fVar13) {
        if (1.0 <= fVar13) {
          param_1[0xe] = fVar13 - 1.0;
        }
      }
      else {
        param_1[0xe] = fVar13 + 1.0;
      }
    }
    else {
      param_1[0x12] = fVar24 + 0.25;
    }
  }
LAB_18065a2e9:
  fVar13 = param_1[0x14];
  fVar24 = 0.0;
  fStack_124 = (1.0 - fVar13) * (1.0 - fVar19);
  fStack_ec = (1.0 - fVar19) * fVar13;
  fStack_128 = (1.0 - fVar25) * fStack_124;
  fStack_10c = (1.0 - fVar14) * fVar25 * fStack_124;
  fStack_108 = (1.0 - fVar14) * fStack_128;
  uStack_130 = CONCAT44(uStack_130._4_4_,fStack_10c);
  fStack_120 = fVar25 * fStack_124 * fVar14;
  fStack_128 = fStack_128 * fVar14;
  fStack_124 = fStack_124 * fVar14;
  fStack_104 = fStack_120 * fStack_138;
  fStack_100 = fStack_128 * fStack_138;
  fStack_f8 = (1.0 - fStack_138) * fStack_128;
  fStack_11c = (1.0 - fStack_138) * fStack_120;
  uStack_118 = CONCAT44(uStack_118._4_4_,fStack_f8);
  if ((cStack_148 == '\0') || (0.0 < fStack_138)) {
    if (fVar13 <= 0.0) {
      fVar25 = 3.0;
    }
    else {
      fVar25 = 5.0;
    }
  }
  else {
    fVar25 = 2.0;
  }
  fVar13 = param_1[0x184a];
  if (fVar19 <= fVar13) {
    fVar13 = fVar13 - fVar25 * fStack_144;
    if (fVar13 <= fVar19) {
      fVar13 = fVar19;
    }
  }
  else {
    fVar13 = fVar13 + fVar25 * fStack_144;
    if (fVar19 <= fVar13) {
      fVar13 = fVar19;
    }
  }
  param_1[0x184a] = fVar13;
  param_1[0x1854] = fVar13;
  fVar25 = param_1[0x11];
  if (0.2 <= fVar25) {
    fVar13 = 1.0;
    if (0.7 < fVar25) {
      fVar13 = (1.0 - fVar25) * 3.333333;
    }
  }
  else {
    fVar13 = fVar25 * 5.0;
  }
  if (0.0 < param_1[0x12]) {
    fVar25 = (param_1[0x12] - fVar25) * 4.0;
    if (fVar25 <= 0.0) {
      fVar25 = 0.0;
    }
    fVar13 = fVar13 * fVar25;
  }
  pfVar7 = param_1 + 0x1855;
  iVar5 = 1;
  do {
    fVar25 = *(float *)(((longlong)afStack_6260 - (longlong)param_1) + (longlong)pfVar7);
    fVar17 = fVar25 - pfVar7[-10];
    fVar21 = ABS(fVar17);
    if (0.001 <= fVar21) {
      if (fVar17 < 0.0) {
        fVar14 = -1.0;
      }
      else {
        fVar14 = 1.0;
      }
      if (0.05 <= fVar21) {
        if (0.5 <= fVar21) {
          fVar21 = 0.5;
        }
      }
      else {
        fVar21 = 0.05;
      }
      fVar21 = fVar21 * fVar14 * fStack_144 * 6.0;
      if (fVar21 * fVar14 <= fVar14 * fVar17) {
        fVar25 = pfVar7[-10] + fVar21;
      }
    }
    pfVar7[-10] = fVar25;
    *pfVar7 = fVar25;
    if (2 < iVar5) {
      if (iVar5 < 7) {
        fVar17 = 1.0 - fVar13;
      }
      else {
        fVar17 = fVar13;
        if (iVar5 == 7) {
          if (*(char *)((longlong)param_1 + 0x5d) != '\0') {
LAB_18065a5be:
            fVar17 = 0.0;
          }
        }
        else {
          if (iVar5 != 8) goto LAB_18065a5d3;
          if (*(char *)((longlong)param_1 + 0x5d) == '\0') goto LAB_18065a5be;
        }
      }
      fVar25 = fVar17 * fVar25;
      *pfVar7 = fVar25;
    }
LAB_18065a5d3:
    fVar17 = *(float *)((longlong)afStack_6260 + (4 - (longlong)param_1) + (longlong)pfVar7);
    fVar21 = fVar17 - pfVar7[-9];
    fVar14 = ABS(fVar21);
    if (0.001 <= fVar14) {
      if (fVar21 < 0.0) {
        fVar15 = -1.0;
      }
      else {
        fVar15 = 1.0;
      }
      if (0.05 <= fVar14) {
        if (0.5 <= fVar14) {
          fVar14 = 0.5;
        }
      }
      else {
        fVar14 = 0.05;
      }
      fVar14 = fVar14 * fVar15 * fStack_144 * 6.0;
      if (fVar14 * fVar15 <= fVar15 * fVar21) {
        fVar17 = pfVar7[-9] + fVar14;
      }
    }
    iVar11 = iVar5 + 1;
    pfVar7[-9] = fVar17;
    pfVar7[1] = fVar17;
    if (2 < iVar11) {
      if (iVar11 < 7) {
        fVar21 = 1.0 - fVar13;
      }
      else {
        fVar21 = fVar13;
        if (iVar11 == 7) {
          if (*(char *)((longlong)param_1 + 0x5d) != '\0') {
LAB_18065a686:
            fVar21 = 0.0;
          }
        }
        else {
          if (iVar11 != 8) goto LAB_18065a69c;
          if (*(char *)((longlong)param_1 + 0x5d) == '\0') goto LAB_18065a686;
        }
      }
      fVar17 = fVar21 * fVar17;
      pfVar7[1] = fVar17;
    }
LAB_18065a69c:
    fVar21 = *(float *)((longlong)afStack_6260 + (8 - (longlong)param_1) + (longlong)pfVar7);
    fVar14 = fVar21 - pfVar7[-8];
    fVar15 = ABS(fVar14);
    if (0.001 <= fVar15) {
      if (fVar14 < 0.0) {
        fVar20 = -1.0;
      }
      else {
        fVar20 = 1.0;
      }
      if (0.05 <= fVar15) {
        if (0.5 <= fVar15) {
          fVar15 = 0.5;
        }
      }
      else {
        fVar15 = 0.05;
      }
      fVar15 = fVar15 * fVar20 * fStack_144 * 6.0;
      if (fVar15 * fVar20 <= fVar20 * fVar14) {
        fVar21 = pfVar7[-8] + fVar15;
      }
    }
    iVar11 = iVar5 + 2;
    pfVar7[-8] = fVar21;
    pfVar7[2] = fVar21;
    if (2 < iVar11) {
      if (iVar11 < 7) {
        fVar14 = 1.0 - fVar13;
      }
      else {
        fVar14 = fVar13;
        if (iVar11 == 7) {
          if (*(char *)((longlong)param_1 + 0x5d) != '\0') {
LAB_18065a74f:
            fVar14 = 0.0;
          }
        }
        else {
          if (iVar11 != 8) goto LAB_18065a765;
          if (*(char *)((longlong)param_1 + 0x5d) == '\0') goto LAB_18065a74f;
        }
      }
      fVar21 = fVar14 * fVar21;
      pfVar7[2] = fVar21;
    }
LAB_18065a765:
    iVar5 = iVar5 + 3;
    fVar24 = fVar24 + fVar25 + fVar17 + fVar21;
    pfVar7 = pfVar7 + 3;
    if (9 < iVar5) {
      fVar25 = param_1[0x1854];
      fVar25 = 1.0 - ((fVar25 * 6.0 - 15.0) * fVar25 + 10.0) * fVar25 * fVar25 * fVar25;
      if (fVar24 != fVar25) {
        if (fVar24 <= 0.0) {
          param_1[0x1854] = 1.0;
        }
        else {
          fVar25 = fVar25 / fVar24;
          param_1[0x1855] = param_1[0x1855] * fVar25;
          param_1[0x1856] = param_1[0x1856] * fVar25;
          param_1[0x1857] = param_1[0x1857] * fVar25;
          param_1[0x1858] = param_1[0x1858] * fVar25;
          param_1[0x1859] = param_1[0x1859] * fVar25;
          param_1[0x185a] = param_1[0x185a] * fVar25;
          param_1[0x185b] = param_1[0x185b] * fVar25;
          param_1[0x185c] = param_1[0x185c] * fVar25;
          param_1[0x185d] = fVar25 * param_1[0x185d];
        }
      }
      fVar24 = fStack_10c - fStack_108;
      fVar17 = ((((fStack_128 + fStack_120) * fStack_138 + fStack_124) - fStack_11c) - fStack_f8) -
               fStack_124;
      fVar25 = fVar24 * fVar24 + fVar17 * fVar17;
      fVar25 = (float)(fVar25 <= 1.1754944e-38) * 1.1754944e-38 + fVar25;
      auVar22 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
      fVar13 = auVar22._0_4_;
      fVar25 = fVar13 * 0.5 * (3.0 - fVar25 * fVar13 * fVar13);
      fVar24 = fVar25 * fVar24;
      fVar25 = fVar25 * fVar17;
      uStack_140 = CONCAT44(fVar24,fVar25);
      if (ABS(fVar25 * param_1[0x185e] + fVar24 * param_1[0x185f]) <= 0.999) {
        fVar17 = param_1[0x1855] - param_1[0x1856];
        fVar21 = (((param_1[0x1858] + param_1[0x1857] + param_1[0x185b]) - param_1[0x1859]) -
                 param_1[0x185a]) - param_1[0x185c];
        fVar25 = fVar17 * fVar17 + fVar21 * fVar21;
        fVar25 = (float)(fVar25 <= 1.1754944e-38) * 1.1754944e-38 + fVar25;
        auVar22 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
        fVar13 = auVar22._0_4_;
        fVar24 = fStack_144 * 8.0;
        fVar25 = fVar13 * 0.5 * (3.0 - fVar25 * fVar13 * fVar13);
        uStack_140 = CONCAT44(fVar25 * fVar17 * fVar24 + (1.0 - fVar24) * param_1[0x185f],
                              fVar25 * fVar21 * fVar24 + (1.0 - fVar24) * param_1[0x185e]);
        *(uint64_t *)(param_1 + 0x185e) = uStack_140;
        fVar25 = param_1[0x185f];
        fVar13 = param_1[0x185e];
        fVar24 = fVar13 * fVar13 + fVar25 * fVar25;
        auVar22 = rsqrtss(ZEXT416((uint)fVar24),ZEXT416((uint)fVar24));
        fVar17 = auVar22._0_4_;
        fVar24 = fVar17 * 0.5 * (3.0 - fVar24 * fVar17 * fVar17);
        param_1[0x185f] = fVar24 * fVar25;
        param_1[0x185e] = fVar24 * fVar13;
      }
      else {
        *(uint64_t *)(param_1 + 0x185e) = uStack_140;
      }
                    // WARNING: Subroutine does not return
      uStack_180 = 0x18065aa9f;
      fStack_110 = fVar19;
      fStack_fc = fStack_11c;
      fStack_f4 = fStack_124;
      fStack_f0 = fStack_124;
      FUN_1808fc050(uStack_e8 ^ (ulonglong)auStack_178);
    }
  } while( true );
}





