#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part223_sub001.c - 4 个函数

#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part223.c - 4 个函数


// 函数: void FUN_180797358(longlong param_1,uint64_t param_2,float *param_3,float *param_4)
void FUN_180797358(longlong param_1,uint64_t param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  float *pfVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong unaff_RBX;
  float *unaff_RBP;
  float *unaff_RSI;
  longlong unaff_RDI;
  longlong in_R10;
  longlong in_R11;
  float fVar10;
  ulonglong unaff_R14;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
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
  float in_XMM4_Da;
  int8_t in_XMM5 [16];
  int8_t auVar25 [16];
  int8_t auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float unaff_XMM8_Da;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Dc;
  float afStackX_8 [6];
  float afStackX_20 [2];
  ulonglong in_stack_00000040;
  int32_t in_stack_00000050;
  int32_t in_stack_00000058;
  int32_t in_stack_00000060;
  int32_t in_stack_00000068;
  
  if (3 < unaff_RBX) {
    pfVar7 = (float *)(in_R11 + 4);
    do {
      fVar15 = pfVar7[0xd];
      fVar27 = pfVar7[0xe];
      fVar24 = SQRT(pfVar7[1] * pfVar7[1] + *pfVar7 * *pfVar7 + pfVar7[2] * pfVar7[2]);
      fVar10 = pfVar7[0xc];
      afStackX_20[param_1] = fVar24;
      if (in_XMM4_Da <= fVar24) {
        fVar24 = in_XMM4_Da;
      }
      fVar15 = SQRT(fVar10 * fVar10 + fVar15 * fVar15 + fVar27 * fVar27);
      afStackX_20[param_1 + 1] = fVar15;
      if (fVar15 <= fVar24) {
        fVar24 = fVar15;
      }
      fVar15 = pfVar7[0x25];
      fVar27 = pfVar7[0x26];
      in_XMM4_Da = SQRT(pfVar7[0x18] * pfVar7[0x18] + pfVar7[0x19] * pfVar7[0x19] +
                        pfVar7[0x1a] * pfVar7[0x1a]);
      fVar10 = pfVar7[0x24];
      *(float *)(&stack0x00000028 + param_1 * 4) = in_XMM4_Da;
      if (fVar24 <= in_XMM4_Da) {
        in_XMM4_Da = fVar24;
      }
      fVar15 = SQRT(fVar10 * fVar10 + fVar15 * fVar15 + fVar27 * fVar27);
      *(float *)(&stack0x0000002c + param_1 * 4) = fVar15;
      if (fVar15 <= in_XMM4_Da) {
        in_XMM4_Da = fVar15;
      }
      param_1 = param_1 + 4;
      pfVar7 = pfVar7 + 0x30;
    } while (param_1 < unaff_RBX + -3);
  }
  if (param_1 < in_R10) {
    pfVar7 = (float *)(in_R11 + 4 + param_1 * 0x30);
    fVar15 = in_XMM4_Da;
    do {
      fVar27 = *pfVar7;
      pfVar1 = pfVar7 + 1;
      pfVar2 = pfVar7 + 2;
      pfVar7 = pfVar7 + 0xc;
      in_XMM4_Da = SQRT(*pfVar1 * *pfVar1 + fVar27 * fVar27 + *pfVar2 * *pfVar2);
      afStackX_20[param_1] = in_XMM4_Da;
      if (fVar15 <= in_XMM4_Da) {
        in_XMM4_Da = fVar15;
      }
      param_1 = param_1 + 1;
      fVar15 = in_XMM4_Da;
    } while (param_1 < in_R10);
  }
  fVar15 = *(float *)(unaff_RDI + 0x2a4);
  fVar10 = (float)unaff_R14;
  uVar8 = unaff_R14 & 0xffffffff;
  fVar27 = fVar15 * 0.5 + in_XMM4_Da;
  if (fVar27 <= fVar15) {
    fVar27 = fVar15;
  }
  uVar9 = (uint)unaff_RBX;
  fVar15 = fVar10;
  if ((0 < (int)uVar9) && (3 < uVar9)) {
    uVar4 = uVar9 & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    fVar28 = 0.0;
    fVar29 = 0.0;
    fVar30 = 0.0;
    fVar31 = 0.0;
    auVar25._4_4_ = fVar27 - in_XMM4_Da;
    auVar25._0_4_ = fVar27 - in_XMM4_Da;
    auVar25._8_4_ = fVar27 - in_XMM4_Da;
    auVar25._12_4_ = fVar27 - in_XMM4_Da;
    auVar25 = rcpps(in_XMM5,auVar25);
    fVar24 = auVar25._0_4_;
    fVar16 = auVar25._4_4_;
    fVar17 = auVar25._8_4_;
    fVar18 = auVar25._12_4_;
    uVar5 = unaff_R14;
    in_stack_00000050 = unaff_XMM12_Da;
    in_stack_00000058 = unaff_XMM12_Dc;
    in_stack_00000060 = unaff_XMM11_Da;
    in_stack_00000068 = unaff_XMM11_Dc;
    do {
      fVar19 = *(float *)((longlong)afStackX_20 + uVar5 + 4);
      fVar15 = (float)((int)uVar8 + 4);
      uVar8 = (ulonglong)(uint)fVar15;
      uVar11 = -(uint)(*(float *)((longlong)afStackX_20 + uVar5) < fVar27);
      uVar12 = -(uint)(fVar19 < fVar27);
      uVar13 = -(uint)(*(float *)(&stack0x00000028 + uVar5) < fVar27);
      uVar14 = -(uint)(*(float *)(&stack0x0000002c + uVar5) < fVar27);
      puVar3 = (uint *)((longlong)afStackX_20 + (uVar5 - 0x20));
      fVar20 = (float)((uint)(1.0 - (*(float *)((longlong)afStackX_20 + uVar5) - in_XMM4_Da) *
                                    ((fVar24 + fVar24) - fVar24 * fVar24 * (fVar27 - in_XMM4_Da))) &
                       uVar11 | ~uVar11 & *puVar3);
      fVar21 = (float)((uint)(1.0 - (fVar19 - in_XMM4_Da) *
                                    ((fVar16 + fVar16) - fVar16 * fVar16 * (fVar27 - in_XMM4_Da))) &
                       uVar12 | ~uVar12 & puVar3[1]);
      fVar22 = (float)((uint)(1.0 - (*(float *)(&stack0x00000028 + uVar5) - in_XMM4_Da) *
                                    ((fVar17 + fVar17) - fVar17 * fVar17 * (fVar27 - in_XMM4_Da))) &
                       uVar13 | ~uVar13 & puVar3[2]);
      fVar23 = (float)((uint)(1.0 - (*(float *)(&stack0x0000002c + uVar5) - in_XMM4_Da) *
                                    ((fVar18 + fVar18) - fVar18 * fVar18 * (fVar27 - in_XMM4_Da))) &
                       uVar14 | ~uVar14 & puVar3[3]);
      fVar19 = (float)(((uint)(fVar20 * fVar20) & uVar11 | ~uVar11 & (uint)fVar20) & uVar11);
      fVar20 = (float)(((uint)(fVar21 * fVar21) & uVar12 | ~uVar12 & (uint)fVar21) & uVar12);
      fVar21 = (float)(((uint)(fVar22 * fVar22) & uVar13 | ~uVar13 & (uint)fVar22) & uVar13);
      fVar22 = (float)(((uint)(fVar23 * fVar23) & uVar14 | ~uVar14 & (uint)fVar23) & uVar14);
      pfVar7 = (float *)((longlong)afStackX_20 + (uVar5 - 0x20));
      *pfVar7 = fVar19;
      pfVar7[1] = fVar20;
      pfVar7[2] = fVar21;
      pfVar7[3] = fVar22;
      uVar5 = uVar5 + 0x10;
      fVar28 = fVar28 + fVar19;
      fVar29 = fVar29 + fVar20;
      fVar30 = fVar30 + fVar21;
      fVar31 = fVar31 + fVar22;
    } while ((int)fVar15 < (int)(uVar9 - uVar4));
    auVar26._0_4_ = fVar30 + fVar28;
    auVar26._4_4_ = fVar31 + fVar29;
    auVar26._8_4_ = fVar30 + fVar30;
    auVar26._12_4_ = fVar31 + fVar31;
    in_XMM5._4_12_ = auVar26._4_12_;
    in_XMM5._0_4_ = auVar26._0_4_ + auVar26._4_4_;
  }
  lVar6 = (longlong)(int)fVar15;
  if (lVar6 < in_R10) {
    if (3 < in_R10 - lVar6) {
      fVar15 = fVar27 - in_XMM4_Da;
      do {
        fVar24 = unaff_XMM8_Da;
        if (afStackX_20[lVar6] < fVar27) {
          fVar24 = 1.0 - (afStackX_20[lVar6] - in_XMM4_Da) / fVar15;
          fVar24 = fVar24 * fVar24;
        }
        afStackX_20[lVar6 + -8] = fVar24;
        fVar16 = unaff_XMM8_Da;
        if (afStackX_20[lVar6 + 1] < fVar27) {
          fVar16 = 1.0 - (afStackX_20[lVar6 + 1] - in_XMM4_Da) / fVar15;
          fVar16 = fVar16 * fVar16;
        }
        afStackX_20[lVar6 + -7] = fVar16;
        fVar17 = unaff_XMM8_Da;
        if (*(float *)(&stack0x00000028 + lVar6 * 4) < fVar27) {
          fVar17 = 1.0 - (*(float *)(&stack0x00000028 + lVar6 * 4) - in_XMM4_Da) / fVar15;
          fVar17 = fVar17 * fVar17;
        }
        afStackX_8[lVar6] = fVar17;
        fVar18 = unaff_XMM8_Da;
        if (*(float *)(&stack0x0000002c + lVar6 * 4) < fVar27) {
          fVar18 = 1.0 - (*(float *)(&stack0x0000002c + lVar6 * 4) - in_XMM4_Da) / fVar15;
          fVar18 = fVar18 * fVar18;
        }
        afStackX_8[lVar6 + 1] = fVar18;
        in_XMM5._0_4_ = in_XMM5._0_4_ + fVar24 + fVar16 + fVar17 + fVar18;
        lVar6 = lVar6 + 4;
      } while (lVar6 < in_R10 + -3);
    }
    for (; lVar6 < in_R10; lVar6 = lVar6 + 1) {
      fVar15 = unaff_XMM8_Da;
      if (afStackX_20[lVar6] < fVar27) {
        fVar15 = 1.0 - (afStackX_20[lVar6] - in_XMM4_Da) / (fVar27 - in_XMM4_Da);
        fVar15 = fVar15 * fVar15;
      }
      afStackX_20[lVar6 + -8] = fVar15;
      in_XMM5._0_4_ = in_XMM5._0_4_ + fVar15;
    }
  }
  *(ulonglong *)param_3 = unaff_R14;
  param_3[2] = fVar10;
  *(ulonglong *)param_4 = unaff_R14;
  param_4[2] = fVar10;
  if (in_XMM5._0_4_ != unaff_XMM8_Da) {
    uVar8 = unaff_R14;
    if (3 < in_R10) {
      pfVar7 = (float *)(in_R11 + 8);
      do {
        fVar15 = afStackX_20[uVar8 - 8];
        fVar27 = afStackX_20[uVar8 - 7];
        *param_3 = fVar15 * pfVar7[-1] + *param_3;
        param_3[1] = fVar15 * *pfVar7 + param_3[1];
        param_3[2] = fVar15 * pfVar7[1] + param_3[2];
        *param_4 = fVar15 * pfVar7[5] + *param_4;
        param_4[1] = fVar15 * pfVar7[6] + param_4[1];
        param_4[2] = fVar15 * pfVar7[7] + param_4[2];
        fVar15 = afStackX_8[uVar8];
        *param_3 = fVar27 * pfVar7[0xb] + *param_3;
        param_3[1] = fVar27 * pfVar7[0xc] + param_3[1];
        param_3[2] = fVar27 * pfVar7[0xd] + param_3[2];
        *param_4 = fVar27 * pfVar7[0x11] + *param_4;
        param_4[1] = fVar27 * pfVar7[0x12] + param_4[1];
        param_4[2] = fVar27 * pfVar7[0x13] + param_4[2];
        fVar27 = afStackX_8[uVar8 + 1];
        *param_3 = fVar15 * pfVar7[0x17] + *param_3;
        param_3[1] = fVar15 * pfVar7[0x18] + param_3[1];
        param_3[2] = fVar15 * pfVar7[0x19] + param_3[2];
        *param_4 = fVar15 * pfVar7[0x1d] + *param_4;
        param_4[1] = fVar15 * pfVar7[0x1e] + param_4[1];
        param_4[2] = fVar15 * pfVar7[0x1f] + param_4[2];
        *param_3 = fVar27 * pfVar7[0x23] + *param_3;
        param_3[1] = fVar27 * pfVar7[0x24] + param_3[1];
        uVar8 = uVar8 + 4;
        param_3[2] = fVar27 * pfVar7[0x25] + param_3[2];
        *param_4 = fVar27 * pfVar7[0x29] + *param_4;
        param_4[1] = fVar27 * pfVar7[0x2a] + param_4[1];
        pfVar1 = pfVar7 + 0x2b;
        pfVar7 = pfVar7 + 0x30;
        param_4[2] = fVar27 * *pfVar1 + param_4[2];
      } while ((longlong)uVar8 < in_R10 + -3);
    }
    if ((longlong)uVar8 < in_R10) {
      pfVar7 = (float *)(in_R11 + 8 + uVar8 * 0x30);
      do {
        fVar15 = afStackX_20[uVar8 - 8];
        uVar8 = uVar8 + 1;
        *param_3 = fVar15 * pfVar7[-1] + *param_3;
        param_3[1] = fVar15 * *pfVar7 + param_3[1];
        param_3[2] = fVar15 * pfVar7[1] + param_3[2];
        *param_4 = fVar15 * pfVar7[5] + *param_4;
        param_4[1] = fVar15 * pfVar7[6] + param_4[1];
        pfVar1 = pfVar7 + 7;
        pfVar7 = pfVar7 + 0xc;
        param_4[2] = fVar15 * *pfVar1 + param_4[2];
      } while ((longlong)uVar8 < in_R10);
    }
    fVar15 = 1.0 / in_XMM5._0_4_;
    *param_3 = fVar15 * *param_3;
    param_3[2] = fVar15 * param_3[2];
    param_3[1] = fVar15 * param_3[1];
    fVar15 = param_4[1];
    fVar27 = *param_4;
    fVar24 = param_4[2];
    fVar16 = SQRT(fVar15 * fVar15 + fVar27 * fVar27 + fVar24 * fVar24);
    if (unaff_XMM8_Da < fVar16) {
      fVar16 = 1.0 / fVar16;
      *param_4 = fVar16 * fVar27;
      param_4[1] = fVar16 * fVar15;
      param_4[2] = fVar16 * fVar24;
    }
    else {
      *(ulonglong *)param_4 = unaff_R14;
      param_4[2] = fVar10;
    }
  }
  *unaff_RSI = in_XMM4_Da;
  *unaff_RBP = SQRT(param_3[2] * param_3[2] + *param_3 * *param_3);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000040 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_18079750c(int param_1,uint64_t param_2,float *param_3,float *param_4)
void FUN_18079750c(int param_1,uint64_t param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  uint *puVar2;
  uint in_EAX;
  uint uVar3;
  longlong lVar4;
  float *pfVar5;
  int unaff_EBX;
  float *unaff_RBP;
  float *unaff_RSI;
  longlong in_R10;
  longlong in_R11;
  longlong unaff_R14;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float in_XMM4_Da;
  float fVar18;
  int8_t in_XMM5 [16];
  int8_t auVar19 [16];
  float unaff_XMM6_Da;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM9_Db;
  float unaff_XMM9_Dc;
  float unaff_XMM9_Dd;
  float unaff_XMM10_Da;
  float unaff_XMM10_Db;
  float unaff_XMM10_Dc;
  float unaff_XMM10_Dd;
  float afStackX_8 [6];
  float afStackX_20 [2];
  ulonglong in_stack_00000040;
  
  uVar3 = in_EAX & 0x80000003;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
  }
  fVar20 = 0.0;
  fVar21 = 0.0;
  fVar22 = 0.0;
  fVar23 = 0.0;
  auVar19._4_4_ = unaff_XMM10_Db - unaff_XMM9_Db;
  auVar19._0_4_ = unaff_XMM10_Da - unaff_XMM9_Da;
  auVar19._8_4_ = unaff_XMM10_Dc - unaff_XMM9_Dc;
  auVar19._12_4_ = unaff_XMM10_Dd - unaff_XMM9_Dd;
  auVar19 = rcpps(in_XMM5,auVar19);
  fVar18 = auVar19._0_4_;
  fVar16 = auVar19._4_4_;
  fVar10 = auVar19._8_4_;
  fVar11 = auVar19._12_4_;
  lVar4 = unaff_R14;
  do {
    fVar12 = *(float *)((longlong)afStackX_20 + lVar4 + 4);
    param_1 = param_1 + 4;
    uVar6 = -(uint)(*(float *)((longlong)afStackX_20 + lVar4) < unaff_XMM10_Da);
    uVar7 = -(uint)(fVar12 < unaff_XMM10_Db);
    uVar8 = -(uint)(*(float *)(&stack0x00000028 + lVar4) < unaff_XMM10_Dc);
    uVar9 = -(uint)(*(float *)(&stack0x0000002c + lVar4) < unaff_XMM10_Dd);
    puVar2 = (uint *)((longlong)afStackX_20 + lVar4 + -0x20);
    fVar13 = (float)((uint)(1.0 - (*(float *)((longlong)afStackX_20 + lVar4) - unaff_XMM9_Da) *
                                  ((fVar18 + fVar18) -
                                  fVar18 * fVar18 * (unaff_XMM10_Da - unaff_XMM9_Da))) & uVar6 |
                    ~uVar6 & *puVar2);
    fVar14 = (float)((uint)(1.0 - (fVar12 - unaff_XMM9_Db) *
                                  ((fVar16 + fVar16) -
                                  fVar16 * fVar16 * (unaff_XMM10_Db - unaff_XMM9_Db))) & uVar7 |
                    ~uVar7 & puVar2[1]);
    fVar15 = (float)((uint)(1.0 - (*(float *)(&stack0x00000028 + lVar4) - unaff_XMM9_Dc) *
                                  ((fVar10 + fVar10) -
                                  fVar10 * fVar10 * (unaff_XMM10_Dc - unaff_XMM9_Dc))) & uVar8 |
                    ~uVar8 & puVar2[2]);
    fVar17 = (float)((uint)(1.0 - (*(float *)(&stack0x0000002c + lVar4) - unaff_XMM9_Dd) *
                                  ((fVar11 + fVar11) -
                                  fVar11 * fVar11 * (unaff_XMM10_Dd - unaff_XMM9_Dd))) & uVar9 |
                    ~uVar9 & puVar2[3]);
    fVar12 = (float)(((uint)(fVar13 * fVar13) & uVar6 | ~uVar6 & (uint)fVar13) & uVar6);
    fVar13 = (float)(((uint)(fVar14 * fVar14) & uVar7 | ~uVar7 & (uint)fVar14) & uVar7);
    fVar14 = (float)(((uint)(fVar15 * fVar15) & uVar8 | ~uVar8 & (uint)fVar15) & uVar8);
    fVar15 = (float)(((uint)(fVar17 * fVar17) & uVar9 | ~uVar9 & (uint)fVar17) & uVar9);
    pfVar5 = (float *)((longlong)afStackX_20 + lVar4 + -0x20);
    *pfVar5 = fVar12;
    pfVar5[1] = fVar13;
    pfVar5[2] = fVar14;
    pfVar5[3] = fVar15;
    lVar4 = lVar4 + 0x10;
    fVar20 = fVar20 + fVar12;
    fVar21 = fVar21 + fVar13;
    fVar22 = fVar22 + fVar14;
    fVar23 = fVar23 + fVar15;
  } while (param_1 < (int)(unaff_EBX - uVar3));
  fVar18 = fVar22 + fVar20 + fVar23 + fVar21;
  lVar4 = (longlong)param_1;
  if (lVar4 < in_R10) {
    if (3 < in_R10 - lVar4) {
      fVar16 = unaff_XMM6_Da - in_XMM4_Da;
      do {
        fVar10 = unaff_XMM8_Da;
        if (afStackX_20[lVar4] < unaff_XMM6_Da) {
          fVar10 = 1.0 - (afStackX_20[lVar4] - in_XMM4_Da) / fVar16;
          fVar10 = fVar10 * fVar10;
        }
        afStackX_20[lVar4 + -8] = fVar10;
        fVar11 = unaff_XMM8_Da;
        if (afStackX_20[lVar4 + 1] < unaff_XMM6_Da) {
          fVar11 = 1.0 - (afStackX_20[lVar4 + 1] - in_XMM4_Da) / fVar16;
          fVar11 = fVar11 * fVar11;
        }
        afStackX_20[lVar4 + -7] = fVar11;
        fVar20 = unaff_XMM8_Da;
        if (*(float *)(&stack0x00000028 + lVar4 * 4) < unaff_XMM6_Da) {
          fVar20 = 1.0 - (*(float *)(&stack0x00000028 + lVar4 * 4) - in_XMM4_Da) / fVar16;
          fVar20 = fVar20 * fVar20;
        }
        afStackX_8[lVar4] = fVar20;
        fVar21 = unaff_XMM8_Da;
        if (*(float *)(&stack0x0000002c + lVar4 * 4) < unaff_XMM6_Da) {
          fVar21 = 1.0 - (*(float *)(&stack0x0000002c + lVar4 * 4) - in_XMM4_Da) / fVar16;
          fVar21 = fVar21 * fVar21;
        }
        afStackX_8[lVar4 + 1] = fVar21;
        fVar18 = fVar18 + fVar10 + fVar11 + fVar20 + fVar21;
        lVar4 = lVar4 + 4;
      } while (lVar4 < in_R10 + -3);
    }
    for (; lVar4 < in_R10; lVar4 = lVar4 + 1) {
      fVar16 = unaff_XMM8_Da;
      if (afStackX_20[lVar4] < unaff_XMM6_Da) {
        fVar16 = 1.0 - (afStackX_20[lVar4] - in_XMM4_Da) / (unaff_XMM6_Da - in_XMM4_Da);
        fVar16 = fVar16 * fVar16;
      }
      afStackX_20[lVar4 + -8] = fVar16;
      fVar18 = fVar18 + fVar16;
    }
  }
  *(longlong *)param_3 = unaff_R14;
  fVar16 = (float)unaff_R14;
  param_3[2] = fVar16;
  *(longlong *)param_4 = unaff_R14;
  param_4[2] = fVar16;
  if (fVar18 != unaff_XMM8_Da) {
    lVar4 = unaff_R14;
    if (3 < in_R10) {
      pfVar5 = (float *)(in_R11 + 8);
      do {
        fVar10 = afStackX_20[lVar4 + -8];
        fVar11 = afStackX_20[lVar4 + -7];
        *param_3 = fVar10 * pfVar5[-1] + *param_3;
        param_3[1] = fVar10 * *pfVar5 + param_3[1];
        param_3[2] = fVar10 * pfVar5[1] + param_3[2];
        *param_4 = fVar10 * pfVar5[5] + *param_4;
        param_4[1] = fVar10 * pfVar5[6] + param_4[1];
        param_4[2] = fVar10 * pfVar5[7] + param_4[2];
        fVar10 = afStackX_8[lVar4];
        *param_3 = fVar11 * pfVar5[0xb] + *param_3;
        param_3[1] = fVar11 * pfVar5[0xc] + param_3[1];
        param_3[2] = fVar11 * pfVar5[0xd] + param_3[2];
        *param_4 = fVar11 * pfVar5[0x11] + *param_4;
        param_4[1] = fVar11 * pfVar5[0x12] + param_4[1];
        param_4[2] = fVar11 * pfVar5[0x13] + param_4[2];
        fVar11 = afStackX_8[lVar4 + 1];
        *param_3 = fVar10 * pfVar5[0x17] + *param_3;
        param_3[1] = fVar10 * pfVar5[0x18] + param_3[1];
        param_3[2] = fVar10 * pfVar5[0x19] + param_3[2];
        *param_4 = fVar10 * pfVar5[0x1d] + *param_4;
        param_4[1] = fVar10 * pfVar5[0x1e] + param_4[1];
        param_4[2] = fVar10 * pfVar5[0x1f] + param_4[2];
        *param_3 = fVar11 * pfVar5[0x23] + *param_3;
        param_3[1] = fVar11 * pfVar5[0x24] + param_3[1];
        lVar4 = lVar4 + 4;
        param_3[2] = fVar11 * pfVar5[0x25] + param_3[2];
        *param_4 = fVar11 * pfVar5[0x29] + *param_4;
        param_4[1] = fVar11 * pfVar5[0x2a] + param_4[1];
        pfVar1 = pfVar5 + 0x2b;
        pfVar5 = pfVar5 + 0x30;
        param_4[2] = fVar11 * *pfVar1 + param_4[2];
      } while (lVar4 < in_R10 + -3);
    }
    if (lVar4 < in_R10) {
      pfVar5 = (float *)(in_R11 + 8 + lVar4 * 0x30);
      do {
        fVar10 = afStackX_20[lVar4 + -8];
        lVar4 = lVar4 + 1;
        *param_3 = fVar10 * pfVar5[-1] + *param_3;
        param_3[1] = fVar10 * *pfVar5 + param_3[1];
        param_3[2] = fVar10 * pfVar5[1] + param_3[2];
        *param_4 = fVar10 * pfVar5[5] + *param_4;
        param_4[1] = fVar10 * pfVar5[6] + param_4[1];
        pfVar1 = pfVar5 + 7;
        pfVar5 = pfVar5 + 0xc;
        param_4[2] = fVar10 * *pfVar1 + param_4[2];
      } while (lVar4 < in_R10);
    }
    fVar18 = 1.0 / fVar18;
    *param_3 = fVar18 * *param_3;
    param_3[2] = fVar18 * param_3[2];
    param_3[1] = fVar18 * param_3[1];
    fVar18 = param_4[1];
    fVar10 = *param_4;
    fVar11 = param_4[2];
    fVar20 = SQRT(fVar18 * fVar18 + fVar10 * fVar10 + fVar11 * fVar11);
    if (unaff_XMM8_Da < fVar20) {
      fVar20 = 1.0 / fVar20;
      *param_4 = fVar20 * fVar10;
      param_4[1] = fVar20 * fVar18;
      param_4[2] = fVar20 * fVar11;
    }
    else {
      *(longlong *)param_4 = unaff_R14;
      param_4[2] = fVar16;
    }
  }
  *unaff_RSI = in_XMM4_Da;
  *unaff_RBP = SQRT(param_3[2] * param_3[2] + *param_3 * *param_3);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000040 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807975d9(int param_1,uint64_t param_2,float *param_3,float *param_4)
void FUN_1807975d9(int param_1,uint64_t param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  longlong lVar2;
  float *pfVar3;
  float *unaff_RBP;
  float *unaff_RSI;
  longlong in_R10;
  longlong in_R11;
  longlong unaff_R14;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM8_Da;
  float afStackX_8 [6];
  float afStackX_20 [2];
  ulonglong in_stack_00000040;
  
  lVar2 = (longlong)param_1;
  if (lVar2 < in_R10) {
    if (3 < in_R10 - lVar2) {
      fVar8 = unaff_XMM6_Da - in_XMM4_Da;
      do {
        fVar4 = unaff_XMM8_Da;
        if (afStackX_20[lVar2] < unaff_XMM6_Da) {
          fVar4 = 1.0 - (afStackX_20[lVar2] - in_XMM4_Da) / fVar8;
          fVar4 = fVar4 * fVar4;
        }
        afStackX_20[lVar2 + -8] = fVar4;
        fVar5 = unaff_XMM8_Da;
        if (afStackX_20[lVar2 + 1] < unaff_XMM6_Da) {
          fVar5 = 1.0 - (afStackX_20[lVar2 + 1] - in_XMM4_Da) / fVar8;
          fVar5 = fVar5 * fVar5;
        }
        afStackX_20[lVar2 + -7] = fVar5;
        fVar6 = unaff_XMM8_Da;
        if (*(float *)(&stack0x00000028 + lVar2 * 4) < unaff_XMM6_Da) {
          fVar6 = 1.0 - (*(float *)(&stack0x00000028 + lVar2 * 4) - in_XMM4_Da) / fVar8;
          fVar6 = fVar6 * fVar6;
        }
        afStackX_8[lVar2] = fVar6;
        fVar7 = unaff_XMM8_Da;
        if (*(float *)(&stack0x0000002c + lVar2 * 4) < unaff_XMM6_Da) {
          fVar7 = 1.0 - (*(float *)(&stack0x0000002c + lVar2 * 4) - in_XMM4_Da) / fVar8;
          fVar7 = fVar7 * fVar7;
        }
        afStackX_8[lVar2 + 1] = fVar7;
        in_XMM5_Da = in_XMM5_Da + fVar4 + fVar5 + fVar6 + fVar7;
        lVar2 = lVar2 + 4;
      } while (lVar2 < in_R10 + -3);
    }
    for (; lVar2 < in_R10; lVar2 = lVar2 + 1) {
      fVar8 = unaff_XMM8_Da;
      if (afStackX_20[lVar2] < unaff_XMM6_Da) {
        fVar8 = 1.0 - (afStackX_20[lVar2] - in_XMM4_Da) / (unaff_XMM6_Da - in_XMM4_Da);
        fVar8 = fVar8 * fVar8;
      }
      afStackX_20[lVar2 + -8] = fVar8;
      in_XMM5_Da = in_XMM5_Da + fVar8;
    }
  }
  *(longlong *)param_3 = unaff_R14;
  fVar8 = (float)unaff_R14;
  param_3[2] = fVar8;
  *(longlong *)param_4 = unaff_R14;
  param_4[2] = fVar8;
  if (in_XMM5_Da != unaff_XMM8_Da) {
    lVar2 = unaff_R14;
    if (3 < in_R10) {
      pfVar3 = (float *)(in_R11 + 8);
      do {
        fVar4 = afStackX_20[lVar2 + -8];
        fVar5 = afStackX_20[lVar2 + -7];
        *param_3 = fVar4 * pfVar3[-1] + *param_3;
        param_3[1] = fVar4 * *pfVar3 + param_3[1];
        param_3[2] = fVar4 * pfVar3[1] + param_3[2];
        *param_4 = fVar4 * pfVar3[5] + *param_4;
        param_4[1] = fVar4 * pfVar3[6] + param_4[1];
        param_4[2] = fVar4 * pfVar3[7] + param_4[2];
        fVar4 = afStackX_8[lVar2];
        *param_3 = fVar5 * pfVar3[0xb] + *param_3;
        param_3[1] = fVar5 * pfVar3[0xc] + param_3[1];
        param_3[2] = fVar5 * pfVar3[0xd] + param_3[2];
        *param_4 = fVar5 * pfVar3[0x11] + *param_4;
        param_4[1] = fVar5 * pfVar3[0x12] + param_4[1];
        param_4[2] = fVar5 * pfVar3[0x13] + param_4[2];
        fVar5 = afStackX_8[lVar2 + 1];
        *param_3 = fVar4 * pfVar3[0x17] + *param_3;
        param_3[1] = fVar4 * pfVar3[0x18] + param_3[1];
        param_3[2] = fVar4 * pfVar3[0x19] + param_3[2];
        *param_4 = fVar4 * pfVar3[0x1d] + *param_4;
        param_4[1] = fVar4 * pfVar3[0x1e] + param_4[1];
        param_4[2] = fVar4 * pfVar3[0x1f] + param_4[2];
        *param_3 = fVar5 * pfVar3[0x23] + *param_3;
        param_3[1] = fVar5 * pfVar3[0x24] + param_3[1];
        lVar2 = lVar2 + 4;
        param_3[2] = fVar5 * pfVar3[0x25] + param_3[2];
        *param_4 = fVar5 * pfVar3[0x29] + *param_4;
        param_4[1] = fVar5 * pfVar3[0x2a] + param_4[1];
        pfVar1 = pfVar3 + 0x2b;
        pfVar3 = pfVar3 + 0x30;
        param_4[2] = fVar5 * *pfVar1 + param_4[2];
      } while (lVar2 < in_R10 + -3);
    }
    if (lVar2 < in_R10) {
      pfVar3 = (float *)(in_R11 + 8 + lVar2 * 0x30);
      do {
        fVar4 = afStackX_20[lVar2 + -8];
        lVar2 = lVar2 + 1;
        *param_3 = fVar4 * pfVar3[-1] + *param_3;
        param_3[1] = fVar4 * *pfVar3 + param_3[1];
        param_3[2] = fVar4 * pfVar3[1] + param_3[2];
        *param_4 = fVar4 * pfVar3[5] + *param_4;
        param_4[1] = fVar4 * pfVar3[6] + param_4[1];
        pfVar1 = pfVar3 + 7;
        pfVar3 = pfVar3 + 0xc;
        param_4[2] = fVar4 * *pfVar1 + param_4[2];
      } while (lVar2 < in_R10);
    }
    fVar4 = 1.0 / in_XMM5_Da;
    *param_3 = fVar4 * *param_3;
    param_3[2] = fVar4 * param_3[2];
    param_3[1] = fVar4 * param_3[1];
    fVar4 = param_4[1];
    fVar5 = *param_4;
    fVar6 = param_4[2];
    fVar7 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6);
    if (unaff_XMM8_Da < fVar7) {
      fVar7 = 1.0 / fVar7;
      *param_4 = fVar7 * fVar5;
      param_4[1] = fVar7 * fVar4;
      param_4[2] = fVar7 * fVar6;
    }
    else {
      *(longlong *)param_4 = unaff_R14;
      param_4[2] = fVar8;
    }
  }
  *unaff_RSI = in_XMM4_Da;
  *unaff_RBP = SQRT(param_3[2] * param_3[2] + *param_3 * *param_3);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000040 ^ (ulonglong)&stack0x00000000);
}






