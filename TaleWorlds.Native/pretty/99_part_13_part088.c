#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part088.c - 7 个函数

// 函数: void FUN_1808e5ef0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int param_4,int param_5)
void FUN_1808e5ef0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int param_4,int param_5)

{
                    // WARNING: Subroutine does not return
  memcpy(param_3,param_2,(int64_t)(param_4 * param_5) * 4);
}



uint64_t FUN_1808e5f55(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                       int *param_5,uint64_t param_6,uint64_t param_7,int32_t param_8,
                       int32_t param_9)

{
  int *piVar1;
  int64_t lVar2;
  int64_t lVar3;
  float fVar4;
  int8_t auVar5 [16];
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint64_t uVar10;
  float *pfVar11;
  int *piVar12;
  uint uVar13;
  int64_t lVar14;
  int16_t *puVar16;
  uint unaff_EBP;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar17;
  int unaff_R12D;
  int iVar18;
  int unaff_R15D;
  int8_t auVar19 [16];
  int8_t auVar20 [16];
  int8_t auVar21 [16];
  int8_t in_XMM2 [16];
  int8_t auVar22 [16];
  float fVar23;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Dc;
  uint64_t *in_stack_00000080;
  uint64_t uVar15;
  
  uVar15 = 0;
  uVar10 = FUN_18073c4c0(*(uint64_t *)(param_1 + 8),param_2,0);
  if ((int)uVar10 != 0) {
    return uVar10;
  }
  iVar18 = unaff_EBP * 2 + 0x38;
  param_5 = (int *)0x0;
  param_6 = 0;
  uVar13 = *(uint *)(in_stack_00000080 + 4);
  if (0 < iVar18) {
    uVar9 = FUN_180849030(&param_5,iVar18);
    uVar10 = (uint64_t)uVar9;
    if (uVar9 != 0) goto LAB_1808e6366;
    if ((int)param_6 < iVar18) {
                    // WARNING: Subroutine does not return
      memset((int64_t)(int)param_6 + (int64_t)param_5,0,(int64_t)(iVar18 - (int)param_6));
    }
  }
  piVar8 = param_5;
  piVar1 = param_5 + 0xe;
  param_5[0] = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  param_5[3] = 0;
  auVar20 = ZEXT816(0);
  param_5[4] = 0;
  param_5[5] = 0;
  param_5[6] = 0;
  param_5[7] = 0;
  param_5[8] = 0;
  param_5[9] = 0;
  param_5[10] = 0;
  param_5[0xb] = 0;
  param_5[0xc] = 0;
  param_5[0xd] = 0;
  *param_5 = iVar18;
  *(int16_t *)(param_5 + 2) = 0x408;
  *(int8_t *)((int64_t)param_5 + 10) = 3;
  param_5[3] = 2;
  iVar18 = *(int *)((int64_t)in_stack_00000080 + 0x14);
  iVar6 = *(int *)(in_stack_00000080 + 3);
  iVar7 = *(int *)((int64_t)in_stack_00000080 + 0x1c);
  param_5[4] = *(int *)(in_stack_00000080 + 2);
  param_5[5] = iVar18;
  param_5[6] = iVar6;
  param_5[7] = iVar7;
  *(uint64_t *)(param_5 + 8) = -(uint64_t)uVar13;
  param_5[0xd] = *(int *)((int64_t)in_stack_00000080 + 0x24);
  param_5[10] = unaff_R15D;
  param_5[0xb] = unaff_R12D;
  uVar10 = uVar15;
  if (3 < unaff_RDI) {
    pfVar11 = (float *)(unaff_RSI + 8);
    lVar14 = (unaff_RDI - 4U >> 2) + 1;
    uVar10 = lVar14 * 4;
    do {
      fVar23 = pfVar11[-2];
      if (auVar20._0_4_ <= ABS(fVar23)) {
        if (0.0 <= fVar23) {
          auVar20 = ZEXT416((uint)fVar23);
        }
        else {
          auVar20 = ZEXT416((uint)-fVar23);
        }
      }
      fVar23 = pfVar11[-1];
      if (auVar20._0_4_ <= ABS(fVar23)) {
        if (0.0 <= fVar23) {
          auVar20 = ZEXT416((uint)fVar23);
        }
        else {
          auVar20 = ZEXT416((uint)-fVar23);
        }
      }
      fVar23 = *pfVar11;
      if (auVar20._0_4_ <= ABS(fVar23)) {
        if (0.0 <= fVar23) {
          auVar20 = ZEXT416((uint)fVar23);
        }
        else {
          auVar20 = ZEXT416((uint)-fVar23);
        }
      }
      fVar23 = pfVar11[1];
      in_XMM2 = ZEXT416((uint)fVar23);
      if (auVar20._0_4_ <= ABS(fVar23)) {
        if (0.0 <= fVar23) {
          auVar20 = ZEXT416((uint)fVar23);
        }
        else {
          auVar20 = ZEXT416((uint)-fVar23);
        }
      }
      pfVar11 = pfVar11 + 4;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  for (; fVar23 = auVar20._0_4_, (int64_t)uVar10 < unaff_RDI; uVar10 = uVar10 + 1) {
    fVar4 = *(float *)(unaff_RSI + uVar10 * 4);
    in_XMM2 = ZEXT416((uint)fVar4);
    if (fVar23 <= ABS(fVar4)) {
      if (0.0 <= fVar4) {
        auVar20 = ZEXT416((uint)fVar4);
      }
      else {
        auVar20 = ZEXT416((uint)-fVar4);
      }
    }
  }
  param_5[0xc] = (int)fVar23;
  if (fVar23 <= 1.1920929e-07) {
                    // WARNING: Subroutine does not return
    memset(piVar1,0,unaff_RDI * 2);
  }
  uVar13 = 0;
  fVar23 = 32767.0 / fVar23;
  if (((0 < (int)unaff_EBP) && (0xf < unaff_EBP)) &&
     (((int *)(unaff_RSI + (int64_t)(int)(unaff_EBP - 1) * 4) < piVar1 ||
      ((uint64_t)((int64_t)piVar1 + (int64_t)(int)(unaff_EBP - 1) * 2) < unaff_RSI)))) {
    uVar9 = unaff_EBP & 0x8000000f;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffff0) + 1;
    }
    piVar12 = param_5 + 0x12;
    pfVar11 = (float *)(unaff_RSI + 0x20);
    uVar10 = uVar15;
    do {
      uVar13 = (int)uVar15 + 0x10;
      uVar15 = (uint64_t)uVar13;
      uVar10 = uVar10 + 0x10;
      auVar19._4_4_ = (int)(pfVar11[-7] * fVar23);
      auVar19._0_4_ = (int)(pfVar11[-8] * fVar23);
      auVar19._8_4_ = (int)(pfVar11[-6] * fVar23);
      auVar19._12_4_ = (int)(pfVar11[-5] * fVar23);
      auVar19 = pshuflw(auVar20,auVar19,0xd8);
      auVar22 = pshufhw(in_XMM2,auVar19,0xd8);
      *(uint64_t *)(piVar12 + -4) = CONCAT44(auVar22._8_4_,auVar22._0_4_);
      auVar20._4_4_ = (int)(pfVar11[-3] * fVar23);
      auVar20._0_4_ = (int)(pfVar11[-4] * fVar23);
      auVar20._8_4_ = (int)(pfVar11[-2] * fVar23);
      auVar20._12_4_ = (int)(pfVar11[-1] * fVar23);
      auVar20 = pshuflw(auVar19,auVar20,0xd8);
      auVar19 = pshufhw(auVar22,auVar20,0xd8);
      *(uint64_t *)(piVar12 + -2) = CONCAT44(auVar19._8_4_,auVar19._0_4_);
      auVar21._0_4_ = fVar23 * *pfVar11;
      auVar21._4_4_ = fVar23 * pfVar11[1];
      auVar21._8_4_ = fVar23 * pfVar11[2];
      auVar21._12_4_ = fVar23 * pfVar11[3];
      auVar22._4_4_ = (int)auVar21._4_4_;
      auVar22._0_4_ = (int)auVar21._0_4_;
      auVar22._8_4_ = (int)auVar21._8_4_;
      auVar22._12_4_ = (int)auVar21._12_4_;
      auVar20 = pshuflw(auVar21,auVar22,0xd8);
      auVar19 = pshufhw(auVar19,auVar20,0xd8);
      *(uint64_t *)piVar12 = CONCAT44(auVar19._8_4_,auVar19._0_4_);
      auVar5._4_4_ = (int)(pfVar11[5] * fVar23);
      auVar5._0_4_ = (int)(pfVar11[4] * fVar23);
      auVar5._8_4_ = (int)(pfVar11[6] * fVar23);
      auVar5._12_4_ = (int)(pfVar11[7] * fVar23);
      auVar20 = pshuflw(auVar20,auVar5,0xd8);
      in_XMM2 = pshufhw(auVar19,auVar20,0xd8);
      *(uint64_t *)(piVar12 + 2) = CONCAT44(in_XMM2._8_4_,in_XMM2._0_4_);
      piVar12 = piVar12 + 8;
      pfVar11 = pfVar11 + 0x10;
    } while ((int64_t)uVar10 < (int64_t)(int)(unaff_EBP - uVar9));
  }
  lVar14 = (int64_t)(int)uVar13;
  if (lVar14 < unaff_RDI) {
    if (3 < unaff_RDI - lVar14) {
      lVar2 = lVar14 + 2;
      lVar3 = lVar14 * 4;
      lVar17 = ((unaff_RDI - lVar14) - 4U >> 2) + 1;
      lVar14 = lVar14 + lVar17 * 4;
      puVar16 = (int16_t *)((int64_t)piVar1 + lVar2 * 2);
      pfVar11 = (float *)(unaff_RSI + 8 + lVar3);
      do {
        puVar16[-2] = (short)(int)(fVar23 * pfVar11[-2]);
        puVar16[-1] = (short)(int)(fVar23 * pfVar11[-1]);
        *puVar16 = (short)(int)(fVar23 * *pfVar11);
        puVar16[1] = (short)(int)(fVar23 * pfVar11[1]);
        lVar17 = lVar17 + -1;
        puVar16 = puVar16 + 4;
        pfVar11 = pfVar11 + 4;
      } while (lVar17 != 0);
    }
    for (; lVar14 < unaff_RDI; lVar14 = lVar14 + 1) {
      *(short *)((int64_t)piVar1 + lVar14 * 2) =
           (short)(int)(fVar23 * *(float *)(unaff_RSI + lVar14 * 4));
    }
  }
  param_5 = (int *)0x0;
  param_6 = 0;
  param_8 = unaff_XMM6_Da;
  param_9 = unaff_XMM6_Dc;
  uVar13 = FUN_1808e30d0(*in_stack_00000080,piVar8);
  uVar10 = (uint64_t)uVar13;
  if (uVar13 == 0) {
    uVar10 = 0;
  }
LAB_1808e6366:
  FUN_180840270(&param_5);
  return uVar10;
}



uint64_t FUN_1808e5f84(void)

{
  int *piVar1;
  int64_t lVar2;
  int64_t lVar3;
  float fVar4;
  int8_t auVar5 [16];
  int iVar6;
  int iVar7;
  uint uVar8;
  int64_t in_RAX;
  uint64_t uVar9;
  float *pfVar10;
  int *piVar11;
  uint uVar12;
  int64_t lVar13;
  int16_t *puVar14;
  int *unaff_RBX;
  uint unaff_EBP;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  uint64_t uVar15;
  int64_t lVar16;
  int unaff_R12D;
  uint64_t unaff_R13;
  int iVar17;
  int unaff_R15D;
  int8_t auVar18 [16];
  int8_t auVar19 [16];
  int8_t auVar20 [16];
  int8_t in_XMM2 [16];
  int8_t auVar21 [16];
  float fVar22;
  int64_t lStackX_20;
  uint64_t *in_stack_00000080;
  
  iVar17 = unaff_EBP * 2 + 0x38;
  uVar8 = *(uint *)(in_RAX + 0x20);
  uVar12 = (uint)unaff_R13;
  if (0 < iVar17) {
    uVar9 = FUN_180849030(&stack0x00000028,iVar17);
    uVar15 = uVar9 & 0xffffffff;
    if ((int)uVar9 != 0) goto LAB_1808e6366;
    if ((int)uVar12 < iVar17) {
                    // WARNING: Subroutine does not return
      memset((int64_t)(int)uVar12 + (int64_t)unaff_RBX,0,(int64_t)(int)(iVar17 - uVar12));
    }
  }
  piVar1 = unaff_RBX + 0xe;
  unaff_RBX[0] = 0;
  unaff_RBX[1] = 0;
  unaff_RBX[2] = 0;
  unaff_RBX[3] = 0;
  auVar19 = ZEXT816(0);
  unaff_RBX[4] = 0;
  unaff_RBX[5] = 0;
  unaff_RBX[6] = 0;
  unaff_RBX[7] = 0;
  unaff_RBX[8] = 0;
  unaff_RBX[9] = 0;
  unaff_RBX[10] = 0;
  unaff_RBX[0xb] = 0;
  unaff_RBX[0xc] = 0;
  unaff_RBX[0xd] = 0;
  *unaff_RBX = iVar17;
  *(int16_t *)(unaff_RBX + 2) = 0x408;
  *(int8_t *)((int64_t)unaff_RBX + 10) = 3;
  unaff_RBX[3] = 2;
  iVar17 = *(int *)((int64_t)in_stack_00000080 + 0x14);
  iVar6 = *(int *)(in_stack_00000080 + 3);
  iVar7 = *(int *)((int64_t)in_stack_00000080 + 0x1c);
  unaff_RBX[4] = *(int *)(in_stack_00000080 + 2);
  unaff_RBX[5] = iVar17;
  unaff_RBX[6] = iVar6;
  unaff_RBX[7] = iVar7;
  *(uint64_t *)(unaff_RBX + 8) = lStackX_20 - (uint64_t)uVar8;
  unaff_RBX[0xd] = *(int *)((int64_t)in_stack_00000080 + 0x24);
  unaff_RBX[10] = unaff_R15D;
  unaff_RBX[0xb] = unaff_R12D;
  uVar9 = unaff_R13;
  if (3 < unaff_RDI) {
    pfVar10 = (float *)(unaff_RSI + 8);
    lVar13 = (unaff_RDI - 4U >> 2) + 1;
    uVar9 = lVar13 * 4;
    do {
      fVar22 = pfVar10[-2];
      if (auVar19._0_4_ <= ABS(fVar22)) {
        if (0.0 <= fVar22) {
          auVar19 = ZEXT416((uint)fVar22);
        }
        else {
          auVar19 = ZEXT416((uint)-fVar22);
        }
      }
      fVar22 = pfVar10[-1];
      if (auVar19._0_4_ <= ABS(fVar22)) {
        if (0.0 <= fVar22) {
          auVar19 = ZEXT416((uint)fVar22);
        }
        else {
          auVar19 = ZEXT416((uint)-fVar22);
        }
      }
      fVar22 = *pfVar10;
      if (auVar19._0_4_ <= ABS(fVar22)) {
        if (0.0 <= fVar22) {
          auVar19 = ZEXT416((uint)fVar22);
        }
        else {
          auVar19 = ZEXT416((uint)-fVar22);
        }
      }
      fVar22 = pfVar10[1];
      in_XMM2 = ZEXT416((uint)fVar22);
      if (auVar19._0_4_ <= ABS(fVar22)) {
        if (0.0 <= fVar22) {
          auVar19 = ZEXT416((uint)fVar22);
        }
        else {
          auVar19 = ZEXT416((uint)-fVar22);
        }
      }
      pfVar10 = pfVar10 + 4;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  for (; fVar22 = auVar19._0_4_, (int64_t)uVar9 < unaff_RDI; uVar9 = uVar9 + 1) {
    fVar4 = *(float *)(unaff_RSI + uVar9 * 4);
    in_XMM2 = ZEXT416((uint)fVar4);
    if (fVar22 <= ABS(fVar4)) {
      if (0.0 <= fVar4) {
        auVar19 = ZEXT416((uint)fVar4);
      }
      else {
        auVar19 = ZEXT416((uint)-fVar4);
      }
    }
  }
  unaff_RBX[0xc] = (int)fVar22;
  if (fVar22 <= 1.1920929e-07) {
                    // WARNING: Subroutine does not return
    memset(piVar1,0,unaff_RDI * 2);
  }
  uVar9 = unaff_R13 & 0xffffffff;
  fVar22 = 32767.0 / fVar22;
  if (((0 < (int)unaff_EBP) && (0xf < unaff_EBP)) &&
     (((int *)(unaff_RSI + (int64_t)(int)(unaff_EBP - 1) * 4) < piVar1 ||
      ((uint64_t)((int64_t)piVar1 + (int64_t)(int)(unaff_EBP - 1) * 2) < unaff_RSI)))) {
    uVar8 = unaff_EBP & 0x8000000f;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
    }
    piVar11 = unaff_RBX + 0x12;
    pfVar10 = (float *)(unaff_RSI + 0x20);
    uVar15 = unaff_R13;
    do {
      uVar12 = (int)uVar9 + 0x10;
      uVar9 = (uint64_t)uVar12;
      uVar15 = uVar15 + 0x10;
      auVar18._4_4_ = (int)(pfVar10[-7] * fVar22);
      auVar18._0_4_ = (int)(pfVar10[-8] * fVar22);
      auVar18._8_4_ = (int)(pfVar10[-6] * fVar22);
      auVar18._12_4_ = (int)(pfVar10[-5] * fVar22);
      auVar18 = pshuflw(auVar19,auVar18,0xd8);
      auVar21 = pshufhw(in_XMM2,auVar18,0xd8);
      *(uint64_t *)(piVar11 + -4) = CONCAT44(auVar21._8_4_,auVar21._0_4_);
      auVar19._4_4_ = (int)(pfVar10[-3] * fVar22);
      auVar19._0_4_ = (int)(pfVar10[-4] * fVar22);
      auVar19._8_4_ = (int)(pfVar10[-2] * fVar22);
      auVar19._12_4_ = (int)(pfVar10[-1] * fVar22);
      auVar19 = pshuflw(auVar18,auVar19,0xd8);
      auVar18 = pshufhw(auVar21,auVar19,0xd8);
      *(uint64_t *)(piVar11 + -2) = CONCAT44(auVar18._8_4_,auVar18._0_4_);
      auVar20._0_4_ = fVar22 * *pfVar10;
      auVar20._4_4_ = fVar22 * pfVar10[1];
      auVar20._8_4_ = fVar22 * pfVar10[2];
      auVar20._12_4_ = fVar22 * pfVar10[3];
      auVar21._4_4_ = (int)auVar20._4_4_;
      auVar21._0_4_ = (int)auVar20._0_4_;
      auVar21._8_4_ = (int)auVar20._8_4_;
      auVar21._12_4_ = (int)auVar20._12_4_;
      auVar19 = pshuflw(auVar20,auVar21,0xd8);
      auVar18 = pshufhw(auVar18,auVar19,0xd8);
      *(uint64_t *)piVar11 = CONCAT44(auVar18._8_4_,auVar18._0_4_);
      auVar5._4_4_ = (int)(pfVar10[5] * fVar22);
      auVar5._0_4_ = (int)(pfVar10[4] * fVar22);
      auVar5._8_4_ = (int)(pfVar10[6] * fVar22);
      auVar5._12_4_ = (int)(pfVar10[7] * fVar22);
      auVar19 = pshuflw(auVar19,auVar5,0xd8);
      in_XMM2 = pshufhw(auVar18,auVar19,0xd8);
      *(uint64_t *)(piVar11 + 2) = CONCAT44(in_XMM2._8_4_,in_XMM2._0_4_);
      piVar11 = piVar11 + 8;
      pfVar10 = pfVar10 + 0x10;
    } while ((int64_t)uVar15 < (int64_t)(int)(unaff_EBP - uVar8));
  }
  lVar13 = (int64_t)(int)uVar12;
  if (lVar13 < unaff_RDI) {
    if (3 < unaff_RDI - lVar13) {
      lVar2 = lVar13 + 2;
      lVar3 = lVar13 * 4;
      lVar16 = ((unaff_RDI - lVar13) - 4U >> 2) + 1;
      lVar13 = lVar13 + lVar16 * 4;
      puVar14 = (int16_t *)((int64_t)piVar1 + lVar2 * 2);
      pfVar10 = (float *)(unaff_RSI + 8 + lVar3);
      do {
        puVar14[-2] = (short)(int)(fVar22 * pfVar10[-2]);
        puVar14[-1] = (short)(int)(fVar22 * pfVar10[-1]);
        *puVar14 = (short)(int)(fVar22 * *pfVar10);
        puVar14[1] = (short)(int)(fVar22 * pfVar10[1]);
        lVar16 = lVar16 + -1;
        puVar14 = puVar14 + 4;
        pfVar10 = pfVar10 + 4;
      } while (lVar16 != 0);
    }
    for (; lVar13 < unaff_RDI; lVar13 = lVar13 + 1) {
      *(short *)((int64_t)piVar1 + lVar13 * 2) =
           (short)(int)(fVar22 * *(float *)(unaff_RSI + lVar13 * 4));
    }
  }
  uVar8 = FUN_1808e30d0(*in_stack_00000080,unaff_RBX);
  uVar15 = (uint64_t)uVar8;
  if (uVar8 == 0) {
    uVar15 = unaff_R13 & 0xffffffff;
  }
LAB_1808e6366:
  FUN_180840270(&stack0x00000028);
  return uVar15;
}



uint64_t FUN_1808e6036(void)

{
  int64_t lVar1;
  int64_t lVar2;
  float fVar3;
  int8_t auVar4 [16];
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint uVar8;
  int64_t in_RAX;
  float *pfVar9;
  uint64_t *puVar10;
  uint uVar11;
  int64_t lVar12;
  uint64_t uVar13;
  int16_t *puVar14;
  int64_t unaff_RBX;
  uint unaff_EBP;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  uint64_t uVar15;
  int64_t lVar16;
  uint64_t in_R10;
  int32_t unaff_R12D;
  uint64_t unaff_R13;
  int32_t unaff_R15D;
  float fVar17;
  int8_t in_XMM1 [16];
  int8_t auVar18 [16];
  int8_t auVar19 [16];
  int8_t in_XMM2 [16];
  int8_t auVar20 [16];
  int8_t auVar21 [16];
  float in_XMM3_Da;
  uint in_XMM4_Da;
  float fVar22;
  uint in_XMM5_Da;
  int32_t in_XMM5_Db;
  int32_t in_XMM5_Dc;
  int32_t in_XMM5_Dd;
  uint64_t uStackX_20;
  uint64_t in_stack_00000028;
  uint64_t in_stack_00000030;
  uint64_t *in_stack_00000080;
  
  fVar17 = *(float *)(in_RAX + 0x10);
  uVar5 = *(int32_t *)(in_RAX + 0x14);
  uVar6 = *(int32_t *)(in_RAX + 0x18);
  uVar7 = *(int32_t *)(in_RAX + 0x1c);
  *(float *)(unaff_RBX + 0x10) = fVar17;
  *(int32_t *)(unaff_RBX + 0x14) = uVar5;
  *(int32_t *)(unaff_RBX + 0x18) = uVar6;
  *(int32_t *)(unaff_RBX + 0x1c) = uVar7;
  *(uint64_t *)(unaff_RBX + 0x20) = uStackX_20;
  *(int32_t *)(unaff_RBX + 0x34) = *(int32_t *)((int64_t)in_stack_00000080 + 0x24);
  *(int32_t *)(unaff_RBX + 0x28) = unaff_R15D;
  *(int32_t *)(unaff_RBX + 0x2c) = unaff_R12D;
  uVar13 = unaff_R13;
  if (3 < unaff_RDI) {
    pfVar9 = (float *)(unaff_RSI + 8);
    lVar12 = (unaff_RDI - 4U >> 2) + 1;
    uVar13 = lVar12 * 4;
    do {
      fVar17 = pfVar9[-2];
      if (in_XMM1._0_4_ <= (float)((uint)fVar17 & in_XMM4_Da)) {
        if (in_XMM3_Da <= fVar17) {
          in_XMM1 = ZEXT416((uint)fVar17);
        }
        else {
          in_XMM1._4_4_ = in_XMM5_Db;
          in_XMM1._0_4_ = (uint)fVar17 ^ in_XMM5_Da;
          in_XMM1._8_4_ = in_XMM5_Dc;
          in_XMM1._12_4_ = in_XMM5_Dd;
        }
      }
      fVar17 = pfVar9[-1];
      if (in_XMM1._0_4_ <= (float)((uint)fVar17 & in_XMM4_Da)) {
        if (in_XMM3_Da <= fVar17) {
          in_XMM1 = ZEXT416((uint)fVar17);
        }
        else {
          in_XMM1._4_4_ = in_XMM5_Db;
          in_XMM1._0_4_ = (uint)fVar17 ^ in_XMM5_Da;
          in_XMM1._8_4_ = in_XMM5_Dc;
          in_XMM1._12_4_ = in_XMM5_Dd;
        }
      }
      fVar17 = *pfVar9;
      if (in_XMM1._0_4_ <= (float)((uint)fVar17 & in_XMM4_Da)) {
        if (in_XMM3_Da <= fVar17) {
          in_XMM1 = ZEXT416((uint)fVar17);
        }
        else {
          in_XMM1._4_4_ = in_XMM5_Db;
          in_XMM1._0_4_ = (uint)fVar17 ^ in_XMM5_Da;
          in_XMM1._8_4_ = in_XMM5_Dc;
          in_XMM1._12_4_ = in_XMM5_Dd;
        }
      }
      fVar22 = pfVar9[1];
      in_XMM2 = ZEXT416((uint)fVar22);
      fVar17 = (float)((uint)fVar22 & in_XMM4_Da);
      if (in_XMM1._0_4_ <= fVar17) {
        if (in_XMM3_Da <= fVar22) {
          in_XMM1 = ZEXT416((uint)fVar22);
        }
        else {
          in_XMM1._4_4_ = in_XMM5_Db;
          in_XMM1._0_4_ = (uint)fVar22 ^ in_XMM5_Da;
          in_XMM1._8_4_ = in_XMM5_Dc;
          in_XMM1._12_4_ = in_XMM5_Dd;
        }
      }
      pfVar9 = pfVar9 + 4;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  for (; fVar22 = in_XMM1._0_4_, (int64_t)uVar13 < unaff_RDI; uVar13 = uVar13 + 1) {
    fVar3 = *(float *)(unaff_RSI + uVar13 * 4);
    in_XMM2 = ZEXT416((uint)fVar3);
    fVar17 = (float)((uint)fVar3 & in_XMM4_Da);
    if (fVar22 <= fVar17) {
      if (in_XMM3_Da <= fVar3) {
        in_XMM1 = ZEXT416((uint)fVar3);
      }
      else {
        in_XMM1._4_4_ = in_XMM5_Db;
        in_XMM1._0_4_ = (uint)fVar3 ^ in_XMM5_Da;
        in_XMM1._8_4_ = in_XMM5_Dc;
        in_XMM1._12_4_ = in_XMM5_Dd;
      }
    }
  }
  *(float *)(unaff_RBX + 0x30) = fVar22;
  if (fVar22 <= 1.1920929e-07) {
                    // WARNING: Subroutine does not return
    memset(fVar17,0,unaff_RDI * 2);
  }
  uVar13 = unaff_R13 & 0xffffffff;
  uVar11 = (uint)unaff_R13;
  fVar22 = 32767.0 / fVar22;
  if (((0 < (int)unaff_EBP) && (0xf < unaff_EBP)) &&
     ((unaff_RSI + (int64_t)(int)(unaff_EBP - 1) * 4 < in_R10 ||
      (in_R10 + (int64_t)(int)(unaff_EBP - 1) * 2 < unaff_RSI)))) {
    uVar8 = unaff_EBP & 0x8000000f;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
    }
    puVar10 = (uint64_t *)(in_R10 + 0x10);
    pfVar9 = (float *)(unaff_RSI + 0x20);
    uVar15 = unaff_R13;
    do {
      uVar11 = (int)uVar13 + 0x10;
      uVar13 = (uint64_t)uVar11;
      uVar15 = uVar15 + 0x10;
      auVar18._4_4_ = (int)(pfVar9[-7] * fVar22);
      auVar18._0_4_ = (int)(pfVar9[-8] * fVar22);
      auVar18._8_4_ = (int)(pfVar9[-6] * fVar22);
      auVar18._12_4_ = (int)(pfVar9[-5] * fVar22);
      auVar18 = pshuflw(in_XMM1,auVar18,0xd8);
      auVar20 = pshufhw(in_XMM2,auVar18,0xd8);
      puVar10[-2] = CONCAT44(auVar20._8_4_,auVar20._0_4_);
      auVar21._4_4_ = (int)(pfVar9[-3] * fVar22);
      auVar21._0_4_ = (int)(pfVar9[-4] * fVar22);
      auVar21._8_4_ = (int)(pfVar9[-2] * fVar22);
      auVar21._12_4_ = (int)(pfVar9[-1] * fVar22);
      auVar18 = pshuflw(auVar18,auVar21,0xd8);
      auVar21 = pshufhw(auVar20,auVar18,0xd8);
      puVar10[-1] = CONCAT44(auVar21._8_4_,auVar21._0_4_);
      auVar19._0_4_ = fVar22 * *pfVar9;
      auVar19._4_4_ = fVar22 * pfVar9[1];
      auVar19._8_4_ = fVar22 * pfVar9[2];
      auVar19._12_4_ = fVar22 * pfVar9[3];
      auVar20._4_4_ = (int)auVar19._4_4_;
      auVar20._0_4_ = (int)auVar19._0_4_;
      auVar20._8_4_ = (int)auVar19._8_4_;
      auVar20._12_4_ = (int)auVar19._12_4_;
      auVar18 = pshuflw(auVar19,auVar20,0xd8);
      auVar21 = pshufhw(auVar21,auVar18,0xd8);
      *puVar10 = CONCAT44(auVar21._8_4_,auVar21._0_4_);
      auVar4._4_4_ = (int)(pfVar9[5] * fVar22);
      auVar4._0_4_ = (int)(pfVar9[4] * fVar22);
      auVar4._8_4_ = (int)(pfVar9[6] * fVar22);
      auVar4._12_4_ = (int)(pfVar9[7] * fVar22);
      in_XMM1 = pshuflw(auVar18,auVar4,0xd8);
      in_XMM2 = pshufhw(auVar21,in_XMM1,0xd8);
      puVar10[1] = CONCAT44(in_XMM2._8_4_,in_XMM2._0_4_);
      puVar10 = puVar10 + 4;
      pfVar9 = pfVar9 + 0x10;
    } while ((int64_t)uVar15 < (int64_t)(int)(unaff_EBP - uVar8));
  }
  lVar12 = (int64_t)(int)uVar11;
  if (lVar12 < unaff_RDI) {
    if (3 < unaff_RDI - lVar12) {
      lVar1 = lVar12 + 2;
      lVar2 = lVar12 * 4;
      lVar16 = ((unaff_RDI - lVar12) - 4U >> 2) + 1;
      lVar12 = lVar12 + lVar16 * 4;
      puVar14 = (int16_t *)(in_R10 + lVar1 * 2);
      pfVar9 = (float *)(unaff_RSI + 8 + lVar2);
      do {
        puVar14[-2] = (short)(int)(fVar22 * pfVar9[-2]);
        puVar14[-1] = (short)(int)(fVar22 * pfVar9[-1]);
        *puVar14 = (short)(int)(fVar22 * *pfVar9);
        puVar14[1] = (short)(int)(fVar22 * pfVar9[1]);
        lVar16 = lVar16 + -1;
        puVar14 = puVar14 + 4;
        pfVar9 = pfVar9 + 4;
      } while (lVar16 != 0);
    }
    for (; lVar12 < unaff_RDI; lVar12 = lVar12 + 1) {
      *(short *)(in_R10 + lVar12 * 2) = (short)(int)(fVar22 * *(float *)(unaff_RSI + lVar12 * 4));
    }
  }
  uVar11 = FUN_1808e30d0(*in_stack_00000080);
  uVar13 = (uint64_t)uVar11;
  if (uVar11 == 0) {
    uVar13 = unaff_R13 & 0xffffffff;
  }
  FUN_180840270(&stack0x00000028);
  return uVar13;
}






// 函数: void FUN_1808e616c(void)
void FUN_1808e616c(void)

{
                    // WARNING: Subroutine does not return
  memset();
}






// 函数: void FUN_1808e637a(void)
void FUN_1808e637a(void)

{
  return;
}






// 函数: void FUN_1808e6382(void)
void FUN_1808e6382(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808e63a0(int64_t param_1)
void FUN_1808e63a0(int64_t param_1)

{
  int iVar1;
  uint64_t auStackX_8 [4];
  
  iVar1 = (**(code **)(*(int64_t *)(param_1 + 0x28) + 0x58))(param_1,auStackX_8);
  if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),auStackX_8[0],&unknown_var_9152_ptr,0x6e,1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808e6410(int64_t *param_1)
void FUN_1808e6410(int64_t *param_1)

{
  int iVar1;
  
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1[1],&unknown_var_9296_ptr,0x36,1);
  }
  if (*param_1 != 0) {
    iVar1 = FUN_180768380(*param_1,0);
    if (iVar1 == 0) {
      *param_1 = 0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808e64f0(int64_t param_1)

{
  int iVar1;
  int64_t lVar2;
  uint uVar3;
  int64_t lVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x10) * 2;
  if (iVar5 < 0x8000001) {
    lVar2 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar5,&unknown_var_9296_ptr,0x8e,0,0,1);
    if (lVar2 != 0) {
      iVar5 = *(int *)(param_1 + 0x1c) - *(uint *)(param_1 + 0x14);
      if (iVar5 == 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(uint64_t *)(param_1 + 8),
                      &unknown_var_9296_ptr,0xa8,1);
      }
      iVar1 = *(int *)(param_1 + 0x10);
      uVar3 = iVar1 - 1U & *(uint *)(param_1 + 0x14);
      lVar4 = (int64_t)(int)uVar3 + *(int64_t *)(param_1 + 8);
      if ((int)(uVar3 + iVar5) <= iVar1) {
                    // WARNING: Subroutine does not return
        memcpy(lVar2,lVar4,(int64_t)iVar5);
      }
                    // WARNING: Subroutine does not return
      memcpy(lVar2,lVar4,(int64_t)(int)(iVar1 - uVar3));
    }
  }
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808e6552(void)
void FUN_1808e6552(void)

{
  uint in_EAX;
  int iVar1;
  int64_t unaff_RDI;
  
  iVar1 = *(int *)(unaff_RDI + 0x1c) - in_EAX;
  if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(uint64_t *)(unaff_RDI + 8),
                  &unknown_var_9296_ptr,0xa8,1);
  }
  if ((int)((*(int *)(unaff_RDI + 0x10) - 1U & in_EAX) + iVar1) <= *(int *)(unaff_RDI + 0x10)) {
                    // WARNING: Subroutine does not return
    memcpy();
  }
                    // WARNING: Subroutine does not return
  memcpy();
}






