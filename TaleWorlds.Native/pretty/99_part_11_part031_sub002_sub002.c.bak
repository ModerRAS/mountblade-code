#include "TaleWorlds.Native.Split.h"

// 99_part_11_part031_sub002_sub002.c - 1 个函数

// 函数: void FUN_1806fd9db(void)
void FUN_1806fd9db(void)

{
  return;
}



int FUN_1806fd9f0(longlong param_1,longlong param_2,longlong param_3,int param_4,byte param_5,
                 int param_6,int param_7,int *param_8,float *param_9,float param_10,int param_11,
                 float param_12,int param_13)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  int8_t auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  fVar27 = 0.0;
  fVar28 = 5.0;
  if (param_13 < 64000) {
    fVar28 = 4.0;
  }
  else if (param_13 < 80000) {
    fVar28 = (float)(param_13 + -64000 >> 10) * 0.0625 + 4.0;
  }
  lVar12 = 0;
  if (param_6 == 2) {
    fVar26 = 0.0;
    do {
      iVar7 = (int)*(short *)(*(longlong *)(param_1 + 0x20) + lVar12);
      iVar13 = iVar7 << (param_5 & 0x1f);
      fVar16 = (float)FUN_1807070a0(param_2 + (longlong)iVar13 * 4,
                                    param_2 + (longlong)(iVar13 + param_7) * 4,
                                    *(short *)(*(longlong *)(param_1 + 0x20) + 2 + lVar12) - iVar7
                                    << (param_5 & 0x1f));
      lVar12 = lVar12 + 2;
      fVar26 = fVar26 + fVar16;
    } while (lVar12 < 0x10);
    fVar26 = ABS(fVar26 * 0.125);
    if (1.0 <= fVar26) {
      fVar26 = 1.0;
    }
    fVar16 = fVar26;
    if (8 < (longlong)param_11) {
      lVar12 = 8;
      do {
        iVar7 = (int)*(short *)(*(longlong *)(param_1 + 0x20) + lVar12 * 2);
        iVar13 = iVar7 << (param_5 & 0x1f);
        fVar17 = (float)FUN_1807070a0(param_2 + (longlong)iVar13 * 4,
                                      param_2 + (longlong)(iVar13 + param_7) * 4,
                                      *(short *)(*(longlong *)(param_1 + 0x20) + 2 + lVar12 * 2) -
                                      iVar7 << (param_5 & 0x1f));
        if (ABS(fVar17) <= fVar16) {
          fVar16 = ABS(fVar17);
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < param_11);
    }
    fVar16 = ABS(fVar16);
    if (1.0 <= fVar16) {
      fVar16 = 1.0;
    }
    auVar20._0_8_ = (double)log((double)(1.001 - fVar26 * fVar26));
    fVar26 = (float)(auVar20._0_8_ * 1.4426950408889634) * 0.75;
    if (fVar26 <= -4.0) {
      fVar26 = -4.0;
    }
    fVar28 = fVar28 + fVar26;
    dVar19 = (double)log((double)(1.001 - fVar16 * fVar16));
    fVar16 = (float)(auVar20._0_8_ * 1.4426950408889634) * 0.5;
    fVar26 = (float)(dVar19 * 1.4426950408889634);
    if ((float)(dVar19 * 1.4426950408889634) <= fVar16) {
      fVar26 = fVar16;
    }
    fVar16 = fVar26 * -0.5;
    if (*param_9 + 0.25 <= fVar26 * -0.5) {
      fVar16 = *param_9 + 0.25;
    }
    *param_9 = fVar16;
  }
  uVar14 = param_4 - 1;
  fVar26 = 0.0;
  fVar16 = 0.0;
  fVar17 = 0.0;
  fVar21 = 0.0;
  fVar22 = 0.0;
  fVar23 = 0.0;
  fVar24 = 0.0;
  fVar25 = 0.0;
  iVar7 = 0;
  do {
    iVar13 = 0;
    if (0 < (int)uVar14) {
      if (7 < uVar14) {
        uVar8 = uVar14 & 0x80000007;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xfffffff8) + 1;
        }
        iVar10 = *(int *)(param_1 + 8) * iVar7;
        iVar9 = 0;
        do {
          lVar12 = (longlong)iVar10;
          iVar10 = iVar10 + 8;
          iVar13 = iVar9 + 8;
          pfVar11 = (float *)(param_3 + lVar12 * 4);
          fVar26 = fVar26 + (float)((iVar9 * 2 - param_4) + 2) * *pfVar11;
          fVar16 = fVar16 + (float)(((iVar9 + 1) * 2 - param_4) + 2) * pfVar11[1];
          fVar17 = fVar17 + (float)(((iVar9 + 2) * 2 - param_4) + 2) * pfVar11[2];
          fVar21 = fVar21 + (float)(((iVar9 + 3) * 2 - param_4) + 2) * pfVar11[3];
          pfVar11 = (float *)(param_3 + 0x10 + lVar12 * 4);
          fVar22 = fVar22 + (float)(((iVar9 + 4) * 2 - param_4) + 2) * *pfVar11;
          fVar23 = fVar23 + (float)(((iVar9 + 5) * 2 - param_4) + 2) * pfVar11[1];
          fVar24 = fVar24 + (float)(((iVar9 + 6) * 2 - param_4) + 2) * pfVar11[2];
          fVar25 = fVar25 + (float)(((iVar9 + 7) * 2 - param_4) + 2) * pfVar11[3];
          iVar9 = iVar13;
        } while (iVar13 < (int)(uVar14 - uVar8));
      }
      if (iVar13 < (int)uVar14) {
        if (3 < (int)(uVar14 - iVar13)) {
          iVar9 = (iVar13 * 2 + 4) - param_4;
          uVar8 = ((uVar14 - iVar13) - 4 >> 2) + 1;
          pfVar11 = (float *)(param_3 + ((longlong)(*(int *)(param_1 + 8) * iVar7 + iVar13) + 2) * 4
                             );
          uVar15 = (ulonglong)uVar8;
          iVar13 = iVar13 + uVar8 * 4;
          do {
            iVar10 = iVar9 + -2;
            iVar1 = iVar9 + 2;
            pfVar3 = pfVar11 + -2;
            fVar18 = (float)iVar9;
            pfVar4 = pfVar11 + -1;
            iVar2 = iVar9 + 4;
            iVar9 = iVar9 + 8;
            fVar6 = *pfVar11;
            pfVar5 = pfVar11 + 1;
            pfVar11 = pfVar11 + 4;
            fVar27 = (float)iVar10 * *pfVar3 + fVar27 + fVar18 * *pfVar4 + (float)iVar1 * fVar6 +
                     (float)iVar2 * *pfVar5;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        if (iVar13 < (int)uVar14) {
          pfVar11 = (float *)(param_3 + (longlong)(*(int *)(param_1 + 8) * iVar7 + iVar13) * 4);
          lVar12 = (longlong)(int)(uVar14 - iVar13);
          iVar13 = (iVar13 * 2 + 2) - param_4;
          do {
            fVar6 = *pfVar11;
            pfVar11 = pfVar11 + 1;
            fVar27 = fVar27 + (float)iVar13 * fVar6;
            lVar12 = lVar12 + -1;
            iVar13 = iVar13 + 2;
          } while (lVar12 != 0);
        }
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < param_6);
  fVar27 = ((fVar17 + fVar24 + fVar26 + fVar22 + fVar21 + fVar25 + fVar16 + fVar23 + fVar27) /
            (float)(int)(uVar14 * param_6) + 1.0) * 0.16666667;
  if (2.0 <= fVar27) {
    fVar27 = 2.0;
  }
  if (fVar27 < -2.0) {
    fVar27 = -2.0;
  }
  fVar27 = ((fVar28 - fVar27) - param_12) - (param_10 + param_10);
  if (*param_8 != 0) {
    fVar28 = (float)param_8[2] + (float)param_8[2] + 0.1;
    if (2.0 <= fVar28) {
      fVar28 = 2.0;
    }
    fVar26 = -2.0;
    if (-2.0 <= fVar28) {
      fVar26 = fVar28;
    }
    fVar27 = fVar27 - fVar26;
  }
  auVar20._0_8_ = (double)(fVar27 + 0.5);
  lVar12 = (longlong)(fVar27 + 0.5);
  if ((lVar12 != -0x8000000000000000) && ((double)lVar12 != auVar20._0_8_)) {
    auVar20._8_8_ = auVar20._0_8_;
    uVar14 = movmskpd(0,auVar20);
    auVar20._0_8_ = (double)(longlong)(lVar12 - (ulonglong)(uVar14 & 1));
  }
  iVar7 = (int)auVar20._0_8_;
  if (10 < iVar7) {
    iVar7 = 10;
  }
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  return iVar7;
}



int FUN_1806fd9fb(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  longlong in_RAX;
  int iVar9;
  int iVar10;
  float *pfVar11;
  uint64_t unaff_RBX;
  longlong lVar12;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  int8_t auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int32_t unaff_XMM9_Da;
  float fVar27;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  float fVar28;
  byte in_stack_000000e0;
  int in_stack_000000e8;
  int in_stack_000000f0;
  int *in_stack_000000f8;
  float *in_stack_00000100;
  float in_stack_00000108;
  int in_stack_00000110;
  float in_stack_00000118;
  int in_stack_00000120;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x10) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x18) = unaff_R13;
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM9_Dd;
  fVar27 = 0.0;
  fVar28 = 5.0;
  if (in_stack_00000120 < 64000) {
    fVar28 = 4.0;
  }
  else if (in_stack_00000120 < 80000) {
    fVar28 = (float)(in_stack_00000120 + -64000 >> 10) * 0.0625 + 4.0;
  }
  lVar12 = 0;
  if (in_stack_000000e8 == 2) {
    fVar26 = 0.0;
    do {
      iVar7 = (int)*(short *)(*(longlong *)(param_1 + 0x20) + lVar12);
      iVar13 = iVar7 << (in_stack_000000e0 & 0x1f);
      fVar16 = (float)FUN_1807070a0(param_2 + (longlong)iVar13 * 4,
                                    param_2 + (longlong)(iVar13 + in_stack_000000f0) * 4,
                                    *(short *)(*(longlong *)(param_1 + 0x20) + 2 + lVar12) - iVar7
                                    << (in_stack_000000e0 & 0x1f));
      lVar12 = lVar12 + 2;
      fVar26 = fVar26 + fVar16;
    } while (lVar12 < 0x10);
    fVar26 = ABS(fVar26 * 0.125);
    if (1.0 <= fVar26) {
      fVar26 = 1.0;
    }
    fVar16 = fVar26;
    if (8 < (longlong)in_stack_00000110) {
      lVar12 = 8;
      do {
        iVar7 = (int)*(short *)(*(longlong *)(param_1 + 0x20) + lVar12 * 2);
        iVar13 = iVar7 << (in_stack_000000e0 & 0x1f);
        fVar17 = (float)FUN_1807070a0(param_2 + (longlong)iVar13 * 4,
                                      param_2 + (longlong)(iVar13 + in_stack_000000f0) * 4,
                                      *(short *)(*(longlong *)(param_1 + 0x20) + 2 + lVar12 * 2) -
                                      iVar7 << (in_stack_000000e0 & 0x1f));
        if (ABS(fVar17) <= fVar16) {
          fVar16 = ABS(fVar17);
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < in_stack_00000110);
    }
    fVar16 = ABS(fVar16);
    if (1.0 <= fVar16) {
      fVar16 = 1.0;
    }
    auVar20._0_8_ = (double)log((double)(1.001 - fVar26 * fVar26));
    fVar26 = (float)(auVar20._0_8_ * 1.4426950408889634) * 0.75;
    if (fVar26 <= -4.0) {
      fVar26 = -4.0;
    }
    fVar28 = fVar28 + fVar26;
    dVar19 = (double)log((double)(1.001 - fVar16 * fVar16));
    fVar16 = (float)(auVar20._0_8_ * 1.4426950408889634) * 0.5;
    fVar26 = (float)(dVar19 * 1.4426950408889634);
    if ((float)(dVar19 * 1.4426950408889634) <= fVar16) {
      fVar26 = fVar16;
    }
    fVar16 = fVar26 * -0.5;
    if (*in_stack_00000100 + 0.25 <= fVar26 * -0.5) {
      fVar16 = *in_stack_00000100 + 0.25;
    }
    *in_stack_00000100 = fVar16;
  }
  uVar14 = param_4 - 1;
  fVar26 = 0.0;
  fVar16 = 0.0;
  fVar17 = 0.0;
  fVar21 = 0.0;
  fVar22 = 0.0;
  fVar23 = 0.0;
  fVar24 = 0.0;
  fVar25 = 0.0;
  iVar7 = 0;
  do {
    iVar13 = 0;
    if (0 < (int)uVar14) {
      if (7 < uVar14) {
        uVar8 = uVar14 & 0x80000007;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xfffffff8) + 1;
        }
        iVar10 = *(int *)(param_1 + 8) * iVar7;
        iVar9 = 0;
        do {
          lVar12 = (longlong)iVar10;
          iVar10 = iVar10 + 8;
          iVar13 = iVar9 + 8;
          pfVar11 = (float *)(param_3 + lVar12 * 4);
          fVar26 = fVar26 + (float)((iVar9 * 2 - param_4) + 2) * *pfVar11;
          fVar16 = fVar16 + (float)(((iVar9 + 1) * 2 - param_4) + 2) * pfVar11[1];
          fVar17 = fVar17 + (float)(((iVar9 + 2) * 2 - param_4) + 2) * pfVar11[2];
          fVar21 = fVar21 + (float)(((iVar9 + 3) * 2 - param_4) + 2) * pfVar11[3];
          pfVar11 = (float *)(param_3 + 0x10 + lVar12 * 4);
          fVar22 = fVar22 + (float)(((iVar9 + 4) * 2 - param_4) + 2) * *pfVar11;
          fVar23 = fVar23 + (float)(((iVar9 + 5) * 2 - param_4) + 2) * pfVar11[1];
          fVar24 = fVar24 + (float)(((iVar9 + 6) * 2 - param_4) + 2) * pfVar11[2];
          fVar25 = fVar25 + (float)(((iVar9 + 7) * 2 - param_4) + 2) * pfVar11[3];
          iVar9 = iVar13;
        } while (iVar13 < (int)(uVar14 - uVar8));
      }
      if (iVar13 < (int)uVar14) {
        if (3 < (int)(uVar14 - iVar13)) {
          iVar9 = (iVar13 * 2 + 4) - param_4;
          uVar8 = ((uVar14 - iVar13) - 4 >> 2) + 1;
          pfVar11 = (float *)(param_3 + ((longlong)(*(int *)(param_1 + 8) * iVar7 + iVar13) + 2) * 4
                             );
          uVar15 = (ulonglong)uVar8;
          iVar13 = iVar13 + uVar8 * 4;
          do {
            iVar10 = iVar9 + -2;
            iVar1 = iVar9 + 2;
            pfVar3 = pfVar11 + -2;
            fVar18 = (float)iVar9;
            pfVar4 = pfVar11 + -1;
            iVar2 = iVar9 + 4;
            iVar9 = iVar9 + 8;
            fVar6 = *pfVar11;
            pfVar5 = pfVar11 + 1;
            pfVar11 = pfVar11 + 4;
            fVar27 = (float)iVar10 * *pfVar3 + fVar27 + fVar18 * *pfVar4 + (float)iVar1 * fVar6 +
                     (float)iVar2 * *pfVar5;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        if (iVar13 < (int)uVar14) {
          pfVar11 = (float *)(param_3 + (longlong)(*(int *)(param_1 + 8) * iVar7 + iVar13) * 4);
          lVar12 = (longlong)(int)(uVar14 - iVar13);
          iVar13 = (iVar13 * 2 + 2) - param_4;
          do {
            fVar6 = *pfVar11;
            pfVar11 = pfVar11 + 1;
            fVar27 = fVar27 + (float)iVar13 * fVar6;
            lVar12 = lVar12 + -1;
            iVar13 = iVar13 + 2;
          } while (lVar12 != 0);
        }
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < in_stack_000000e8);
  fVar27 = ((fVar17 + fVar24 + fVar26 + fVar22 + fVar21 + fVar25 + fVar16 + fVar23 + fVar27) /
            (float)(int)(uVar14 * in_stack_000000e8) + 1.0) * 0.16666667;
  if (2.0 <= fVar27) {
    fVar27 = 2.0;
  }
  if (fVar27 < -2.0) {
    fVar27 = -2.0;
  }
  fVar27 = ((fVar28 - fVar27) - in_stack_00000118) - (in_stack_00000108 + in_stack_00000108);
  if (*in_stack_000000f8 != 0) {
    fVar28 = (float)in_stack_000000f8[2] + (float)in_stack_000000f8[2] + 0.1;
    if (2.0 <= fVar28) {
      fVar28 = 2.0;
    }
    fVar26 = -2.0;
    if (-2.0 <= fVar28) {
      fVar26 = fVar28;
    }
    fVar27 = fVar27 - fVar26;
  }
  auVar20._0_8_ = (double)(fVar27 + 0.5);
  lVar12 = (longlong)(fVar27 + 0.5);
  if ((lVar12 != -0x8000000000000000) && ((double)lVar12 != auVar20._0_8_)) {
    auVar20._8_8_ = auVar20._0_8_;
    uVar14 = movmskpd(0,auVar20);
    auVar20._0_8_ = (double)(longlong)(lVar12 - (ulonglong)(uVar14 & 1));
  }
  iVar7 = (int)auVar20._0_8_;
  if (10 < iVar7) {
    iVar7 = 10;
  }
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  return iVar7;
}



int FUN_1806fda06(uint64_t param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  longlong in_RAX;
  int iVar9;
  int iVar10;
  float *pfVar11;
  longlong lVar12;
  longlong unaff_RBP;
  uint64_t unaff_RSI;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  int8_t auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int32_t unaff_XMM9_Da;
  float fVar27;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  float fVar28;
  byte in_stack_000000e0;
  int in_stack_000000e8;
  int in_stack_000000f0;
  int *in_stack_000000f8;
  float *in_stack_00000100;
  float in_stack_00000108;
  int in_stack_00000110;
  float in_stack_00000118;
  int in_stack_00000120;
  
  *(uint64_t *)(in_RAX + 0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x10) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x18) = unaff_R13;
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM9_Dd;
  fVar27 = 0.0;
  fVar28 = 5.0;
  if (in_stack_00000120 < 64000) {
    fVar28 = 4.0;
  }
  else if (in_stack_00000120 < 80000) {
    fVar28 = (float)(in_stack_00000120 + -64000 >> 10) * 0.0625 + 4.0;
  }
  lVar12 = 0;
  if (in_stack_000000e8 == 2) {
    fVar26 = 0.0;
    do {
      iVar7 = (int)*(short *)(*(longlong *)(unaff_RBP + 0x20) + lVar12);
      iVar13 = iVar7 << (in_stack_000000e0 & 0x1f);
      fVar16 = (float)FUN_1807070a0(param_2 + (longlong)iVar13 * 4,
                                    param_2 + (longlong)(iVar13 + in_stack_000000f0) * 4,
                                    *(short *)(*(longlong *)(unaff_RBP + 0x20) + 2 + lVar12) - iVar7
                                    << (in_stack_000000e0 & 0x1f));
      lVar12 = lVar12 + 2;
      fVar26 = fVar26 + fVar16;
    } while (lVar12 < 0x10);
    fVar26 = ABS(fVar26 * 0.125);
    if (1.0 <= fVar26) {
      fVar26 = 1.0;
    }
    fVar16 = fVar26;
    if (8 < (longlong)in_stack_00000110) {
      lVar12 = 8;
      do {
        iVar7 = (int)*(short *)(*(longlong *)(unaff_RBP + 0x20) + lVar12 * 2);
        iVar13 = iVar7 << (in_stack_000000e0 & 0x1f);
        fVar17 = (float)FUN_1807070a0(param_2 + (longlong)iVar13 * 4,
                                      param_2 + (longlong)(iVar13 + in_stack_000000f0) * 4,
                                      *(short *)(*(longlong *)(unaff_RBP + 0x20) + 2 + lVar12 * 2) -
                                      iVar7 << (in_stack_000000e0 & 0x1f));
        if (ABS(fVar17) <= fVar16) {
          fVar16 = ABS(fVar17);
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < in_stack_00000110);
    }
    fVar16 = ABS(fVar16);
    if (1.0 <= fVar16) {
      fVar16 = 1.0;
    }
    auVar20._0_8_ = (double)log((double)(1.001 - fVar26 * fVar26));
    fVar26 = (float)(auVar20._0_8_ * 1.4426950408889634) * 0.75;
    if (fVar26 <= -4.0) {
      fVar26 = -4.0;
    }
    fVar28 = fVar28 + fVar26;
    dVar19 = (double)log((double)(1.001 - fVar16 * fVar16));
    fVar16 = (float)(auVar20._0_8_ * 1.4426950408889634) * 0.5;
    fVar26 = (float)(dVar19 * 1.4426950408889634);
    if ((float)(dVar19 * 1.4426950408889634) <= fVar16) {
      fVar26 = fVar16;
    }
    fVar16 = fVar26 * -0.5;
    if (*in_stack_00000100 + 0.25 <= fVar26 * -0.5) {
      fVar16 = *in_stack_00000100 + 0.25;
    }
    *in_stack_00000100 = fVar16;
  }
  uVar14 = param_4 - 1;
  fVar26 = 0.0;
  fVar16 = 0.0;
  fVar17 = 0.0;
  fVar21 = 0.0;
  fVar22 = 0.0;
  fVar23 = 0.0;
  fVar24 = 0.0;
  fVar25 = 0.0;
  iVar7 = 0;
  do {
    iVar13 = 0;
    if (0 < (int)uVar14) {
      if (7 < uVar14) {
        uVar8 = uVar14 & 0x80000007;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xfffffff8) + 1;
        }
        iVar10 = *(int *)(unaff_RBP + 8) * iVar7;
        iVar9 = 0;
        do {
          lVar12 = (longlong)iVar10;
          iVar10 = iVar10 + 8;
          iVar13 = iVar9 + 8;
          pfVar11 = (float *)(param_3 + lVar12 * 4);
          fVar26 = fVar26 + (float)((iVar9 * 2 - param_4) + 2) * *pfVar11;
          fVar16 = fVar16 + (float)(((iVar9 + 1) * 2 - param_4) + 2) * pfVar11[1];
          fVar17 = fVar17 + (float)(((iVar9 + 2) * 2 - param_4) + 2) * pfVar11[2];
          fVar21 = fVar21 + (float)(((iVar9 + 3) * 2 - param_4) + 2) * pfVar11[3];
          pfVar11 = (float *)(param_3 + 0x10 + lVar12 * 4);
          fVar22 = fVar22 + (float)(((iVar9 + 4) * 2 - param_4) + 2) * *pfVar11;
          fVar23 = fVar23 + (float)(((iVar9 + 5) * 2 - param_4) + 2) * pfVar11[1];
          fVar24 = fVar24 + (float)(((iVar9 + 6) * 2 - param_4) + 2) * pfVar11[2];
          fVar25 = fVar25 + (float)(((iVar9 + 7) * 2 - param_4) + 2) * pfVar11[3];
          iVar9 = iVar13;
        } while (iVar13 < (int)(uVar14 - uVar8));
      }
      if (iVar13 < (int)uVar14) {
        if (3 < (int)(uVar14 - iVar13)) {
          iVar9 = (iVar13 * 2 + 4) - param_4;
          uVar8 = ((uVar14 - iVar13) - 4 >> 2) + 1;
          pfVar11 = (float *)(param_3 +
                             ((longlong)(*(int *)(unaff_RBP + 8) * iVar7 + iVar13) + 2) * 4);
          uVar15 = (ulonglong)uVar8;
          iVar13 = iVar13 + uVar8 * 4;
          do {
            iVar10 = iVar9 + -2;
            iVar1 = iVar9 + 2;
            pfVar3 = pfVar11 + -2;
            fVar18 = (float)iVar9;
            pfVar4 = pfVar11 + -1;
            iVar2 = iVar9 + 4;
            iVar9 = iVar9 + 8;
            fVar6 = *pfVar11;
            pfVar5 = pfVar11 + 1;
            pfVar11 = pfVar11 + 4;
            fVar27 = (float)iVar10 * *pfVar3 + fVar27 + fVar18 * *pfVar4 + (float)iVar1 * fVar6 +
                     (float)iVar2 * *pfVar5;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        if (iVar13 < (int)uVar14) {
          pfVar11 = (float *)(param_3 + (longlong)(*(int *)(unaff_RBP + 8) * iVar7 + iVar13) * 4);
          lVar12 = (longlong)(int)(uVar14 - iVar13);
          iVar13 = (iVar13 * 2 + 2) - param_4;
          do {
            fVar6 = *pfVar11;
            pfVar11 = pfVar11 + 1;
            fVar27 = fVar27 + (float)iVar13 * fVar6;
            lVar12 = lVar12 + -1;
            iVar13 = iVar13 + 2;
          } while (lVar12 != 0);
        }
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < in_stack_000000e8);
  fVar27 = ((fVar17 + fVar24 + fVar26 + fVar22 + fVar21 + fVar25 + fVar16 + fVar23 + fVar27) /
            (float)(int)(uVar14 * in_stack_000000e8) + 1.0) * 0.16666667;
  if (2.0 <= fVar27) {
    fVar27 = 2.0;
  }
  if (fVar27 < -2.0) {
    fVar27 = -2.0;
  }
  fVar27 = ((fVar28 - fVar27) - in_stack_00000118) - (in_stack_00000108 + in_stack_00000108);
  if (*in_stack_000000f8 != 0) {
    fVar28 = (float)in_stack_000000f8[2] + (float)in_stack_000000f8[2] + 0.1;
    if (2.0 <= fVar28) {
      fVar28 = 2.0;
    }
    fVar26 = -2.0;
    if (-2.0 <= fVar28) {
      fVar26 = fVar28;
    }
    fVar27 = fVar27 - fVar26;
  }
  auVar20._0_8_ = (double)(fVar27 + 0.5);
  lVar12 = (longlong)(fVar27 + 0.5);
  if ((lVar12 != -0x8000000000000000) && ((double)lVar12 != auVar20._0_8_)) {
    auVar20._8_8_ = auVar20._0_8_;
    uVar14 = movmskpd(0,auVar20);
    auVar20._0_8_ = (double)(longlong)(lVar12 - (ulonglong)(uVar14 & 1));
  }
  iVar7 = (int)auVar20._0_8_;
  if (10 < iVar7) {
    iVar7 = 10;
  }
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  return iVar7;
}



int FUN_1806fda99(void)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  int iVar14;
  int iVar15;
  uint uVar16;
  longlong unaff_R12;
  int unaff_R13D;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  int8_t auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float unaff_XMM9_Da;
  float unaff_XMM11_Da;
  int unaff_XMM12_Da;
  int unaff_XMM12_Db;
  int unaff_XMM12_Dc;
  int unaff_XMM12_Dd;
  byte in_stack_000000e0;
  int in_stack_000000e8;
  int in_stack_000000f0;
  int *in_stack_000000f8;
  float *in_stack_00000100;
  float in_stack_00000108;
  int in_stack_00000110;
  float in_stack_00000118;
  
  uVar12 = unaff_RDI & 0xffffffff;
  fVar28 = 0.0;
  do {
    iVar7 = (int)*(short *)(*(longlong *)(unaff_RBP + 0x20) + uVar12);
    iVar15 = iVar7 << (in_stack_000000e0 & 0x1f);
    fVar17 = (float)FUN_1807070a0(unaff_RSI + (longlong)iVar15 * 4,
                                  unaff_RSI + (longlong)(iVar15 + in_stack_000000f0) * 4,
                                  *(short *)(*(longlong *)(unaff_RBP + 0x20) + 2 + uVar12) - iVar7
                                  << (in_stack_000000e0 & 0x1f));
    uVar12 = uVar12 + 2;
    fVar28 = fVar28 + fVar17;
  } while ((longlong)uVar12 < 0x10);
  fVar28 = ABS(fVar28 * 0.125);
  if (1.0 <= fVar28) {
    fVar28 = 1.0;
  }
  fVar17 = fVar28;
  if (8 < (longlong)in_stack_00000110) {
    lVar13 = 8;
    do {
      iVar7 = (int)*(short *)(*(longlong *)(unaff_RBP + 0x20) + lVar13 * 2);
      iVar15 = iVar7 << (in_stack_000000e0 & 0x1f);
      fVar18 = (float)FUN_1807070a0(unaff_RSI + (longlong)iVar15 * 4,
                                    unaff_RSI + (longlong)(iVar15 + in_stack_000000f0) * 4,
                                    *(short *)(*(longlong *)(unaff_RBP + 0x20) + 2 + lVar13 * 2) -
                                    iVar7 << (in_stack_000000e0 & 0x1f));
      if (ABS(fVar18) <= fVar17) {
        fVar17 = ABS(fVar18);
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < in_stack_00000110);
  }
  fVar17 = ABS(fVar17);
  if (1.0 <= fVar17) {
    fVar17 = 1.0;
  }
  auVar21._0_8_ = (double)log((double)(1.001 - fVar28 * fVar28));
  fVar28 = (float)(auVar21._0_8_ * 1.4426950408889634) * 0.75;
  if (fVar28 <= -4.0) {
    fVar28 = -4.0;
  }
  dVar20 = (double)log((double)(1.001 - fVar17 * fVar17));
  iVar7 = 0;
  fVar18 = (float)(auVar21._0_8_ * 1.4426950408889634) * 0.5;
  fVar17 = (float)(dVar20 * 1.4426950408889634);
  if ((float)(dVar20 * 1.4426950408889634) <= fVar18) {
    fVar17 = fVar18;
  }
  fVar18 = fVar17 * -0.5;
  if (*in_stack_00000100 + 0.25 <= fVar17 * -0.5) {
    fVar18 = *in_stack_00000100 + 0.25;
  }
  *in_stack_00000100 = fVar18;
  uVar16 = unaff_R13D - 1;
  fVar17 = 0.0;
  fVar18 = 0.0;
  fVar22 = 0.0;
  fVar23 = 0.0;
  fVar24 = 0.0;
  fVar25 = 0.0;
  fVar26 = 0.0;
  fVar27 = 0.0;
  iVar15 = iVar7;
  do {
    if (0 < (int)uVar16) {
      iVar14 = iVar7;
      if (7 < uVar16) {
        uVar8 = uVar16 & 0x80000007;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xfffffff8) + 1;
        }
        iVar10 = *(int *)(unaff_RBP + 8) * iVar15;
        iVar9 = iVar7;
        do {
          lVar13 = (longlong)iVar10;
          iVar10 = iVar10 + 8;
          iVar14 = iVar9 + 8;
          pfVar11 = (float *)(unaff_R12 + lVar13 * 4);
          fVar17 = fVar17 + (float)((iVar9 * 2 - unaff_XMM12_Da) + 2) * *pfVar11;
          fVar18 = fVar18 + (float)(((iVar9 + 1) * 2 - unaff_XMM12_Db) + 2) * pfVar11[1];
          fVar22 = fVar22 + (float)(((iVar9 + 2) * 2 - unaff_XMM12_Dc) + 2) * pfVar11[2];
          fVar23 = fVar23 + (float)(((iVar9 + 3) * 2 - unaff_XMM12_Dd) + 2) * pfVar11[3];
          pfVar11 = (float *)(unaff_R12 + 0x10 + lVar13 * 4);
          fVar24 = fVar24 + (float)(((iVar9 + 4) * 2 - unaff_XMM12_Da) + 2) * *pfVar11;
          fVar25 = fVar25 + (float)(((iVar9 + 5) * 2 - unaff_XMM12_Db) + 2) * pfVar11[1];
          fVar26 = fVar26 + (float)(((iVar9 + 6) * 2 - unaff_XMM12_Dc) + 2) * pfVar11[2];
          fVar27 = fVar27 + (float)(((iVar9 + 7) * 2 - unaff_XMM12_Dd) + 2) * pfVar11[3];
          iVar9 = iVar14;
        } while (iVar14 < (int)(uVar16 - uVar8));
      }
      if (iVar14 < (int)uVar16) {
        if (3 < (int)(uVar16 - iVar14)) {
          iVar9 = (iVar14 * 2 + 4) - unaff_R13D;
          uVar8 = ((uVar16 - iVar14) - 4 >> 2) + 1;
          pfVar11 = (float *)(unaff_R12 +
                             ((longlong)(*(int *)(unaff_RBP + 8) * iVar15 + iVar14) + 2) * 4);
          uVar12 = (ulonglong)uVar8;
          iVar14 = iVar14 + uVar8 * 4;
          do {
            iVar10 = iVar9 + -2;
            iVar1 = iVar9 + 2;
            pfVar3 = pfVar11 + -2;
            fVar19 = (float)iVar9;
            pfVar4 = pfVar11 + -1;
            iVar2 = iVar9 + 4;
            iVar9 = iVar9 + 8;
            fVar6 = *pfVar11;
            pfVar5 = pfVar11 + 1;
            pfVar11 = pfVar11 + 4;
            unaff_XMM9_Da =
                 (float)iVar10 * *pfVar3 + unaff_XMM9_Da + fVar19 * *pfVar4 + (float)iVar1 * fVar6 +
                 (float)iVar2 * *pfVar5;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        if (iVar14 < (int)uVar16) {
          pfVar11 = (float *)(unaff_R12 + (longlong)(*(int *)(unaff_RBP + 8) * iVar15 + iVar14) * 4)
          ;
          lVar13 = (longlong)(int)(uVar16 - iVar14);
          iVar14 = (iVar14 * 2 + 2) - unaff_R13D;
          do {
            fVar6 = *pfVar11;
            pfVar11 = pfVar11 + 1;
            unaff_XMM9_Da = unaff_XMM9_Da + (float)iVar14 * fVar6;
            lVar13 = lVar13 + -1;
            iVar14 = iVar14 + 2;
          } while (lVar13 != 0);
        }
      }
    }
    iVar15 = iVar15 + 1;
  } while (iVar15 < in_stack_000000e8);
  fVar17 = ((fVar22 + fVar26 + fVar17 + fVar24 + fVar23 + fVar27 + fVar18 + fVar25 + unaff_XMM9_Da)
            / (float)(int)(uVar16 * in_stack_000000e8) + 1.0) * 0.16666667;
  if (2.0 <= fVar17) {
    fVar17 = 2.0;
  }
  if (fVar17 < -2.0) {
    fVar17 = -2.0;
  }
  fVar28 = (((unaff_XMM11_Da + fVar28) - fVar17) - in_stack_00000118) -
           (in_stack_00000108 + in_stack_00000108);
  if (*in_stack_000000f8 != 0) {
    fVar17 = (float)in_stack_000000f8[2] + (float)in_stack_000000f8[2] + 0.1;
    if (2.0 <= fVar17) {
      fVar17 = 2.0;
    }
    fVar18 = -2.0;
    if (-2.0 <= fVar17) {
      fVar18 = fVar17;
    }
    fVar28 = fVar28 - fVar18;
  }
  auVar21._0_8_ = (double)(fVar28 + 0.5);
  lVar13 = (longlong)(fVar28 + 0.5);
  if ((lVar13 != -0x8000000000000000) && ((double)lVar13 != auVar21._0_8_)) {
    auVar21._8_8_ = auVar21._0_8_;
    uVar16 = movmskpd(0,auVar21);
    auVar21._0_8_ = (double)(longlong)(lVar13 - (ulonglong)(uVar16 & 1));
  }
  iVar15 = (int)auVar21._0_8_;
  if (10 < iVar15) {
    iVar15 = 10;
  }
  if (iVar15 < 0) {
    iVar15 = iVar7;
  }
  return iVar15;
}



int FUN_1806fdc7d(void)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  float *pfVar11;
  int unaff_EBX;
  longlong unaff_RBP;
  int unaff_EDI;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong unaff_R12;
  int unaff_R13D;
  float fVar16;
  int8_t auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float unaff_XMM9_Da;
  float unaff_XMM11_Da;
  int unaff_XMM12_Da;
  int unaff_XMM12_Db;
  int unaff_XMM12_Dc;
  int unaff_XMM12_Dd;
  int *in_stack_000000f8;
  float in_stack_00000108;
  float in_stack_00000118;
  
  uVar13 = unaff_R13D - 1;
  fVar18 = 0.0;
  fVar19 = 0.0;
  fVar20 = 0.0;
  fVar21 = 0.0;
  fVar22 = 0.0;
  fVar23 = 0.0;
  fVar24 = 0.0;
  fVar25 = 0.0;
  iVar15 = unaff_EDI;
  do {
    if (0 < (int)uVar13) {
      iVar12 = unaff_EDI;
      if (7 < uVar13) {
        uVar7 = uVar13 & 0x80000007;
        if ((int)uVar7 < 0) {
          uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
        }
        iVar10 = *(int *)(unaff_RBP + 8) * iVar15;
        iVar8 = unaff_EDI;
        do {
          lVar9 = (longlong)iVar10;
          iVar10 = iVar10 + 8;
          iVar12 = iVar8 + 8;
          pfVar11 = (float *)(unaff_R12 + lVar9 * 4);
          fVar18 = fVar18 + (float)((iVar8 * 2 - unaff_XMM12_Da) + 2) * *pfVar11;
          fVar19 = fVar19 + (float)(((iVar8 + 1) * 2 - unaff_XMM12_Db) + 2) * pfVar11[1];
          fVar20 = fVar20 + (float)(((iVar8 + 2) * 2 - unaff_XMM12_Dc) + 2) * pfVar11[2];
          fVar21 = fVar21 + (float)(((iVar8 + 3) * 2 - unaff_XMM12_Dd) + 2) * pfVar11[3];
          pfVar11 = (float *)(unaff_R12 + 0x10 + lVar9 * 4);
          fVar22 = fVar22 + (float)(((iVar8 + 4) * 2 - unaff_XMM12_Da) + 2) * *pfVar11;
          fVar23 = fVar23 + (float)(((iVar8 + 5) * 2 - unaff_XMM12_Db) + 2) * pfVar11[1];
          fVar24 = fVar24 + (float)(((iVar8 + 6) * 2 - unaff_XMM12_Dc) + 2) * pfVar11[2];
          fVar25 = fVar25 + (float)(((iVar8 + 7) * 2 - unaff_XMM12_Dd) + 2) * pfVar11[3];
          iVar8 = iVar12;
        } while (iVar12 < (int)(uVar13 - uVar7));
      }
      if (iVar12 < (int)uVar13) {
        if (3 < (int)(uVar13 - iVar12)) {
          iVar8 = (iVar12 * 2 + 4) - unaff_R13D;
          uVar7 = ((uVar13 - iVar12) - 4 >> 2) + 1;
          pfVar11 = (float *)(unaff_R12 +
                             ((longlong)(*(int *)(unaff_RBP + 8) * iVar15 + iVar12) + 2) * 4);
          uVar14 = (ulonglong)uVar7;
          iVar12 = iVar12 + uVar7 * 4;
          do {
            iVar10 = iVar8 + -2;
            iVar1 = iVar8 + 2;
            pfVar3 = pfVar11 + -2;
            fVar16 = (float)iVar8;
            pfVar4 = pfVar11 + -1;
            iVar2 = iVar8 + 4;
            iVar8 = iVar8 + 8;
            fVar6 = *pfVar11;
            pfVar5 = pfVar11 + 1;
            pfVar11 = pfVar11 + 4;
            unaff_XMM9_Da =
                 (float)iVar10 * *pfVar3 + unaff_XMM9_Da + fVar16 * *pfVar4 + (float)iVar1 * fVar6 +
                 (float)iVar2 * *pfVar5;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        if (iVar12 < (int)uVar13) {
          pfVar11 = (float *)(unaff_R12 + (longlong)(*(int *)(unaff_RBP + 8) * iVar15 + iVar12) * 4)
          ;
          lVar9 = (longlong)(int)(uVar13 - iVar12);
          iVar12 = (iVar12 * 2 + 2) - unaff_R13D;
          do {
            fVar6 = *pfVar11;
            pfVar11 = pfVar11 + 1;
            unaff_XMM9_Da = unaff_XMM9_Da + (float)iVar12 * fVar6;
            lVar9 = lVar9 + -1;
            iVar12 = iVar12 + 2;
          } while (lVar9 != 0);
        }
      }
    }
    iVar15 = iVar15 + 1;
  } while (iVar15 < unaff_EBX);
  fVar18 = ((fVar20 + fVar24 + fVar18 + fVar22 + fVar21 + fVar25 + fVar19 + fVar23 + unaff_XMM9_Da)
            / (float)(int)(uVar13 * unaff_EBX) + 1.0) * 0.16666667;
  if (2.0 <= fVar18) {
    fVar18 = 2.0;
  }
  if (fVar18 < -2.0) {
    fVar18 = -2.0;
  }
  fVar18 = ((unaff_XMM11_Da - fVar18) - in_stack_00000118) - (in_stack_00000108 + in_stack_00000108)
  ;
  if (*in_stack_000000f8 != 0) {
    fVar19 = (float)in_stack_000000f8[2] + (float)in_stack_000000f8[2] + 0.1;
    if (2.0 <= fVar19) {
      fVar19 = 2.0;
    }
    fVar20 = -2.0;
    if (-2.0 <= fVar19) {
      fVar20 = fVar19;
    }
    fVar18 = fVar18 - fVar20;
  }
  auVar17._0_8_ = (double)(fVar18 + 0.5);
  lVar9 = (longlong)(fVar18 + 0.5);
  if ((lVar9 != -0x8000000000000000) && ((double)lVar9 != auVar17._0_8_)) {
    auVar17._8_8_ = auVar17._0_8_;
    uVar13 = movmskpd(0,auVar17);
    auVar17._0_8_ = (double)(longlong)(lVar9 - (ulonglong)(uVar13 & 1));
  }
  iVar15 = (int)auVar17._0_8_;
  if (10 < iVar15) {
    iVar15 = 10;
  }
  if (iVar15 < 0) {
    iVar15 = unaff_EDI;
  }
  return iVar15;
}



int FUN_1806fdc92(void)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  float *pfVar10;
  int unaff_EBX;
  longlong unaff_RBP;
  int unaff_EDI;
  int iVar11;
  uint in_R9D;
  ulonglong uVar12;
  int in_R11D;
  longlong unaff_R12;
  int unaff_R13D;
  float fVar13;
  int8_t auVar14 [16];
  float fVar15;
  float fVar16;
  float in_XMM4_Da;
  float in_XMM4_Db;
  float in_XMM4_Dc;
  float in_XMM4_Dd;
  float in_XMM5_Da;
  float in_XMM5_Db;
  float in_XMM5_Dc;
  float in_XMM5_Dd;
  float unaff_XMM9_Da;
  float unaff_XMM11_Da;
  int unaff_XMM12_Da;
  int unaff_XMM12_Db;
  int unaff_XMM12_Dc;
  int unaff_XMM12_Dd;
  int *in_stack_000000f8;
  float in_stack_00000108;
  float in_stack_00000118;
  
  do {
    if (0 < (int)in_R9D) {
      iVar11 = unaff_EDI;
      if (7 < in_R9D) {
        uVar6 = in_R9D & 0x80000007;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
        }
        iVar9 = *(int *)(unaff_RBP + 8) * in_R11D;
        iVar7 = unaff_EDI;
        do {
          lVar8 = (longlong)iVar9;
          iVar9 = iVar9 + 8;
          iVar11 = iVar7 + 8;
          pfVar10 = (float *)(unaff_R12 + lVar8 * 4);
          in_XMM4_Da = in_XMM4_Da + (float)((iVar7 * 2 - unaff_XMM12_Da) + 2) * *pfVar10;
          in_XMM4_Db = in_XMM4_Db + (float)(((iVar7 + 1) * 2 - unaff_XMM12_Db) + 2) * pfVar10[1];
          in_XMM4_Dc = in_XMM4_Dc + (float)(((iVar7 + 2) * 2 - unaff_XMM12_Dc) + 2) * pfVar10[2];
          in_XMM4_Dd = in_XMM4_Dd + (float)(((iVar7 + 3) * 2 - unaff_XMM12_Dd) + 2) * pfVar10[3];
          pfVar10 = (float *)(unaff_R12 + 0x10 + lVar8 * 4);
          in_XMM5_Da = in_XMM5_Da + (float)(((iVar7 + 4) * 2 - unaff_XMM12_Da) + 2) * *pfVar10;
          in_XMM5_Db = in_XMM5_Db + (float)(((iVar7 + 5) * 2 - unaff_XMM12_Db) + 2) * pfVar10[1];
          in_XMM5_Dc = in_XMM5_Dc + (float)(((iVar7 + 6) * 2 - unaff_XMM12_Dc) + 2) * pfVar10[2];
          in_XMM5_Dd = in_XMM5_Dd + (float)(((iVar7 + 7) * 2 - unaff_XMM12_Dd) + 2) * pfVar10[3];
          iVar7 = iVar11;
        } while (iVar11 < (int)(in_R9D - uVar6));
      }
      if (iVar11 < (int)in_R9D) {
        if (3 < (int)(in_R9D - iVar11)) {
          iVar7 = (iVar11 * 2 + 4) - unaff_R13D;
          uVar6 = ((in_R9D - iVar11) - 4 >> 2) + 1;
          pfVar10 = (float *)(unaff_R12 +
                             ((longlong)(*(int *)(unaff_RBP + 8) * in_R11D + iVar11) + 2) * 4);
          uVar12 = (ulonglong)uVar6;
          iVar11 = iVar11 + uVar6 * 4;
          do {
            iVar9 = iVar7 + -2;
            iVar1 = iVar7 + 2;
            pfVar3 = pfVar10 + -2;
            fVar13 = (float)iVar7;
            pfVar4 = pfVar10 + -1;
            iVar2 = iVar7 + 4;
            iVar7 = iVar7 + 8;
            fVar15 = *pfVar10;
            pfVar5 = pfVar10 + 1;
            pfVar10 = pfVar10 + 4;
            unaff_XMM9_Da =
                 (float)iVar9 * *pfVar3 + unaff_XMM9_Da + fVar13 * *pfVar4 + (float)iVar1 * fVar15 +
                 (float)iVar2 * *pfVar5;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        if (iVar11 < (int)in_R9D) {
          pfVar10 = (float *)(unaff_R12 + (longlong)(*(int *)(unaff_RBP + 8) * in_R11D + iVar11) * 4
                             );
          lVar8 = (longlong)(int)(in_R9D - iVar11);
          iVar11 = (iVar11 * 2 + 2) - unaff_R13D;
          do {
            fVar15 = *pfVar10;
            pfVar10 = pfVar10 + 1;
            unaff_XMM9_Da = unaff_XMM9_Da + (float)iVar11 * fVar15;
            lVar8 = lVar8 + -1;
            iVar11 = iVar11 + 2;
          } while (lVar8 != 0);
        }
      }
    }
    in_R11D = in_R11D + 1;
  } while (in_R11D < unaff_EBX);
  fVar15 = ((in_XMM4_Dc + in_XMM5_Dc + in_XMM4_Da + in_XMM5_Da +
             in_XMM4_Dd + in_XMM5_Dd + in_XMM4_Db + in_XMM5_Db + unaff_XMM9_Da) /
            (float)(int)(in_R9D * unaff_EBX) + 1.0) * 0.16666667;
  if (2.0 <= fVar15) {
    fVar15 = 2.0;
  }
  if (fVar15 < -2.0) {
    fVar15 = -2.0;
  }
  fVar15 = ((unaff_XMM11_Da - fVar15) - in_stack_00000118) - (in_stack_00000108 + in_stack_00000108)
  ;
  if (*in_stack_000000f8 != 0) {
    fVar13 = (float)in_stack_000000f8[2] + (float)in_stack_000000f8[2] + 0.1;
    if (2.0 <= fVar13) {
      fVar13 = 2.0;
    }
    fVar16 = -2.0;
    if (-2.0 <= fVar13) {
      fVar16 = fVar13;
    }
    fVar15 = fVar15 - fVar16;
  }
  auVar14._0_8_ = (double)(fVar15 + 0.5);
  lVar8 = (longlong)(fVar15 + 0.5);
  if ((lVar8 != -0x8000000000000000) && ((double)lVar8 != auVar14._0_8_)) {
    auVar14._8_8_ = auVar14._0_8_;
    uVar6 = movmskpd(0,auVar14);
    auVar14._0_8_ = (double)(longlong)(lVar8 - (ulonglong)(uVar6 & 1));
  }
  iVar11 = (int)auVar14._0_8_;
  if (10 < iVar11) {
    iVar11 = 10;
  }
  if (iVar11 < 0) {
    iVar11 = unaff_EDI;
  }
  return iVar11;
}



int FUN_1806fded0(uint64_t param_1,uint64_t param_2,float param_3,float param_4)

{
  int8_t auVar1 [16];
  double dVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int unaff_EDI;
  float fVar6;
  float unaff_XMM11_Da;
  float fVar7;
  int *in_stack_000000f8;
  float in_stack_00000108;
  float in_stack_00000118;
  
  fVar7 = ((unaff_XMM11_Da - param_3) - in_stack_00000118) - (in_stack_00000108 + in_stack_00000108)
  ;
  if (*in_stack_000000f8 != 0) {
    fVar6 = (float)in_stack_000000f8[2] + (float)in_stack_000000f8[2] + 0.1;
    if (param_4 <= fVar6) {
      fVar6 = param_4;
    }
    if (param_3 <= fVar6) {
      param_3 = fVar6;
    }
    fVar7 = fVar7 - param_3;
  }
  dVar2 = (double)(fVar7 + 0.5);
  lVar5 = (longlong)(fVar7 + 0.5);
  if ((lVar5 != -0x8000000000000000) && ((double)lVar5 != dVar2)) {
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = dVar2;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    uVar3 = movmskpd(0,auVar1);
    dVar2 = (double)(longlong)(lVar5 - (ulonglong)(uVar3 & 1));
  }
  iVar4 = (int)dVar2;
  if (10 < iVar4) {
    iVar4 = 10;
  }
  if (iVar4 < 0) {
    iVar4 = unaff_EDI;
  }
  return iVar4;
}



int FUN_1806fdf51(double param_1)

{
  int8_t auVar1 [16];
  int32_t in_EAX;
  uint uVar2;
  int iVar3;
  longlong in_RCX;
  int unaff_EDI;
  
  if ((double)in_RCX != param_1) {
    auVar1._8_4_ = SUB84(param_1,0);
    auVar1._0_8_ = param_1;
    auVar1._12_4_ = (int)((ulonglong)param_1 >> 0x20);
    uVar2 = movmskpd(in_EAX,auVar1);
    param_1 = (double)(longlong)(in_RCX - (ulonglong)(uVar2 & 1));
  }
  iVar3 = (int)param_1;
  if (10 < iVar3) {
    iVar3 = 10;
  }
  if (iVar3 < 0) {
    iVar3 = unaff_EDI;
  }
  return iVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






