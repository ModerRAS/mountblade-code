#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_11_part041.c - 13 个函数

// 函数: void FUN_1807a8535(void)
void FUN_1807a8535(void)

{
  longlong lVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong unaff_RBX;
  longlong *unaff_RDI;
  uint uVar7;
  bool in_CF;
  float fVar10;
  float fVar11;
  float fVar12;
  int8_t auVar8 [16];
  int8_t auVar9 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_XMM6_Da;
  float fVar17;
  
  if (in_CF) {
    fVar17 = (float)powf();
  }
  else {
    fVar17 = 0.0;
  }
  iVar6 = (int)unaff_RBX;
  iVar3 = 0;
  fVar17 = (unaff_XMM6_Da / (float)iVar6) * fVar17;
  if (0 < iVar6) {
    pfVar2 = (float *)*unaff_RDI;
    lVar5 = 0;
    do {
      if (fVar17 < *pfVar2 || fVar17 == *pfVar2) break;
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 1;
      pfVar2 = pfVar2 + 1;
    } while (lVar5 < unaff_RBX);
  }
  auVar9 = ZEXT816(0);
  uVar7 = iVar6 - iVar3;
  if ((iVar3 < iVar6) && (7 < uVar7)) {
    lVar5 = (longlong)iVar3;
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar15 = 0.0;
    fVar16 = 0.0;
    fVar17 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
    uVar4 = uVar7 & 0x80000007;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
    }
    do {
      pfVar2 = (float *)(*unaff_RDI + lVar5 * 4);
      iVar3 = iVar3 + 8;
      fVar13 = fVar13 + *pfVar2;
      fVar14 = fVar14 + pfVar2[1];
      fVar15 = fVar15 + pfVar2[2];
      fVar16 = fVar16 + pfVar2[3];
      pfVar2 = (float *)(*unaff_RDI + 0x10 + lVar5 * 4);
      lVar5 = lVar5 + 8;
      fVar17 = fVar17 + *pfVar2;
      fVar10 = fVar10 + pfVar2[1];
      fVar11 = fVar11 + pfVar2[2];
      fVar12 = fVar12 + pfVar2[3];
    } while (lVar5 < (int)(iVar6 - uVar4));
    fVar15 = fVar15 + fVar11;
    fVar16 = fVar16 + fVar12;
    auVar8._0_4_ = fVar15 + fVar13 + fVar17;
    auVar8._4_4_ = fVar16 + fVar14 + fVar10;
    auVar8._8_4_ = fVar15 + fVar15;
    auVar8._12_4_ = fVar16 + fVar16;
    auVar9._4_12_ = auVar8._4_12_;
    auVar9._0_4_ = auVar8._0_4_ + auVar8._4_4_;
  }
  lVar5 = (longlong)iVar3;
  if (lVar5 < unaff_RBX) {
    if (3 < unaff_RBX - lVar5) {
      lVar1 = *unaff_RDI;
      do {
        auVar9._0_4_ = auVar9._0_4_ + *(float *)(lVar1 + lVar5 * 4) +
                       *(float *)(lVar1 + 4 + lVar5 * 4) + *(float *)(lVar1 + 8 + lVar5 * 4) +
                       *(float *)(lVar1 + 0xc + lVar5 * 4);
        lVar5 = lVar5 + 4;
      } while (lVar5 < unaff_RBX + -3);
    }
    if (lVar5 < unaff_RBX) {
      do {
        auVar9._0_4_ = auVar9._0_4_ + *(float *)(*unaff_RDI + lVar5 * 4);
        lVar5 = lVar5 + 1;
      } while (lVar5 < unaff_RBX);
    }
  }
  if (0.0 < auVar9._0_4_ / (float)(int)uVar7) {
    log10f();
  }
  return;
}



float FUN_1807a8660(uint64_t param_1,int32_t param_2)

{
  float fVar1;
  
  fVar1 = (float)log10f(param_2);
  return fVar1 * 10.0 - 0.691;
}






// 函数: void FUN_1807a86a0(void)
void FUN_1807a86a0(void)

{
                    // WARNING: Subroutine does not return
  memset(0x180c2c2d4,0,0x5c);
}






// 函数: void FUN_1807a8820(uint64_t param_1,float param_2,float param_3,uint64_t param_4,int param_5,
void FUN_1807a8820(uint64_t param_1,float param_2,float param_3,uint64_t param_4,int param_5,
                  longlong param_6)

{
  if (-80.691 < param_2) {
    powf(param_1,param_2 * 0.1 + 0.0691);
  }
  if (((param_5 != 0) && (param_6 != 0)) && (0.0 < (param_3 - param_2) / (float)param_5)) {
                    // WARNING: Subroutine does not return
    memset(param_6,0,(longlong)param_5 * 4);
  }
  return;
}






// 函数: void FUN_1807a88d3(void)
void FUN_1807a88d3(void)

{
  longlong unaff_RBX;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  longlong in_stack_00000108;
  
  if ((in_stack_00000108 != 0) && (unaff_XMM10_Da < unaff_XMM9_Da)) {
                    // WARNING: Subroutine does not return
    memset(in_stack_00000108,0,unaff_RBX * 4);
  }
  return;
}






// 函数: void FUN_1807a88f6(void)
void FUN_1807a88f6(void)

{
                    // WARNING: Subroutine does not return
  memset();
}






// 函数: void FUN_1807a8a32(uint64_t param_1,ulonglong param_2)
void FUN_1807a8a32(uint64_t param_1,ulonglong param_2)

{
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  longlong unaff_R14;
  longlong unaff_R15;
  float unaff_XMM7_Da;
  
  for (; (unaff_RDI <= param_2 && (param_2 < unaff_RDI + (longlong)*(int *)(unaff_R14 + 8) * 4));
      param_2 = param_2 + 4) {
    *(float *)(unaff_RSI + -4 + unaff_R15 * 4) =
         *(float *)(unaff_RSI + -4 + unaff_R15 * 4) + unaff_XMM7_Da;
  }
  return;
}






// 函数: void FUN_1807a8a74(void)
void FUN_1807a8a74(void)

{
  return;
}






// 函数: void FUN_1807a8a7c(void)
void FUN_1807a8a7c(void)

{
  return;
}






// 函数: void FUN_1807a8ac0(longlong *param_1,uint64_t param_2,float param_3,float param_4,float param_5,
void FUN_1807a8ac0(longlong *param_1,uint64_t param_2,float param_3,float param_4,float param_5,
                  float *param_6,float *param_7)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  float fVar12;
  float in_XMM1_Da;
  float fVar13;
  int8_t auVar14 [16];
  int8_t auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar17 = -80.0;
  fVar18 = -80.0;
  iVar11 = (int)param_1[1];
  fVar21 = fVar17;
  if (iVar11 != 0) {
    if (param_3 < 80.0) {
      fVar19 = (float)powf(param_1,param_2,param_3 * -0.1);
    }
    else {
      fVar19 = 0.0;
    }
    uVar7 = 0;
    fVar19 = (in_XMM1_Da / (float)iVar11) * fVar19;
    uVar10 = uVar7;
    if (0 < iVar11) {
      pfVar4 = (float *)*param_1;
      do {
        if (fVar19 < *pfVar4 || fVar19 == *pfVar4) break;
        uVar10 = (ulonglong)((int)uVar10 + 1);
        uVar7 = uVar7 + 1;
        pfVar4 = pfVar4 + 1;
      } while ((longlong)uVar7 < (longlong)iVar11);
    }
    iVar9 = (int)uVar10;
    iVar11 = iVar11 - iVar9;
    if ((iVar11 != 0) && (param_4 <= param_5)) {
      fVar21 = (float)(iVar11 + -1);
      fVar19 = fVar21 * param_5 * 0.01;
      fVar18 = fVar21 * param_4 * 0.01;
      iVar5 = (int)fVar18;
      fVar21 = fVar18;
      if ((iVar5 != -0x80000000) && ((float)iVar5 != fVar18)) {
        auVar14._4_4_ = fVar18;
        auVar14._0_4_ = fVar18;
        auVar14._8_8_ = 0;
        uVar3 = movmskps(iVar11 + -1,auVar14);
        fVar21 = (float)(int)(iVar5 - (uVar3 & 1));
      }
      lVar2 = *param_1;
      lVar8 = (longlong)((int)fVar18 + iVar9);
      iVar5 = (int)fVar18 + 1;
      fVar12 = *(float *)(lVar2 + lVar8 * 4);
      fVar16 = fVar12;
      if (iVar5 < iVar11) {
        fVar16 = *(float *)(lVar2 + 4 + lVar8 * 4);
      }
      iVar6 = (int)fVar19;
      fVar13 = fVar19;
      if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar19)) {
        auVar15._4_4_ = fVar19;
        auVar15._0_4_ = fVar19;
        auVar15._8_8_ = 0;
        uVar3 = movmskps(iVar5,auVar15);
        fVar13 = (float)(int)(iVar6 - (uVar3 & 1));
      }
      lVar8 = (longlong)((int)fVar19 + iVar9);
      fVar1 = *(float *)(lVar2 + lVar8 * 4);
      fVar20 = fVar1;
      if ((int)fVar19 + 1 < iVar11) {
        fVar20 = *(float *)(lVar2 + 4 + lVar8 * 4);
      }
      if (0.0 < (1.0 - (fVar18 - fVar21)) * fVar12 + fVar16 * (fVar18 - fVar21)) {
        fVar18 = (float)log10f();
        fVar18 = fVar18 * 10.0;
      }
      else {
        fVar18 = -80.0;
      }
      fVar18 = fVar18 - 0.691;
      fVar19 = (1.0 - (fVar19 - fVar13)) * fVar1 + fVar20 * (fVar19 - fVar13);
      if (0.0 < fVar19) {
        fVar12 = (float)log10f();
        fVar12 = fVar12 * 10.0;
      }
      else {
        fVar12 = -80.0;
      }
      fVar21 = fVar18;
      if (fVar18 < fVar12 - 0.691) {
        if (0.0 < fVar19) {
          fVar17 = (float)log10f();
          fVar17 = fVar17 * 10.0;
        }
        fVar21 = fVar17 - 0.691;
      }
    }
  }
  if (param_6 != (float *)0x0) {
    *param_6 = fVar18;
  }
  if (param_7 != (float *)0x0) {
    *param_7 = fVar21;
  }
  return;
}






// 函数: void FUN_1807a8add(longlong *param_1,uint64_t param_2,float param_3,float param_4)
void FUN_1807a8add(longlong *param_1,uint64_t param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  uint uVar4;
  longlong in_RAX;
  float *pfVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  uint64_t unaff_RBX;
  uint64_t unaff_RDI;
  float in_XMM1_Da;
  float fVar13;
  int8_t auVar14 [16];
  int8_t auVar15 [16];
  float fVar16;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float fVar17;
  int32_t unaff_XMM8_Da;
  float fVar18;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  float fVar19;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  float fVar20;
  float fVar21;
  int32_t unaff_XMM13_Da;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  float in_stack_000000d0;
  float *in_stack_000000d8;
  float *in_stack_000000e0;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  iVar12 = (int)param_1[1];
  *(uint64_t *)(in_RAX + -8) = unaff_RDI;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM9_Dd;
  fVar20 = unaff_XMM6_Da;
  if (iVar12 != 0) {
    *(int32_t *)(in_RAX + -0x78) = unaff_XMM13_Da;
    *(int32_t *)(in_RAX + -0x74) = unaff_XMM13_Db;
    *(int32_t *)(in_RAX + -0x70) = unaff_XMM13_Dc;
    *(int32_t *)(in_RAX + -0x6c) = unaff_XMM13_Dd;
    if (param_3 < 80.0) {
      fVar18 = (float)powf(param_1,param_2,param_3 * -0.1);
    }
    else {
      fVar18 = 0.0;
    }
    uVar8 = 0;
    fVar18 = (in_XMM1_Da / (float)iVar12) * fVar18;
    uVar11 = uVar8;
    if (0 < iVar12) {
      pfVar5 = (float *)*param_1;
      do {
        if (fVar18 < *pfVar5 || fVar18 == *pfVar5) break;
        uVar11 = (ulonglong)((int)uVar11 + 1);
        uVar8 = uVar8 + 1;
        pfVar5 = pfVar5 + 1;
      } while ((longlong)uVar8 < (longlong)iVar12);
    }
    iVar10 = (int)uVar11;
    iVar12 = iVar12 - iVar10;
    if ((iVar12 != 0) && (param_4 <= in_stack_000000d0)) {
      fVar20 = (float)(iVar12 + -1);
      fVar21 = fVar20 * in_stack_000000d0 * 0.01;
      fVar18 = fVar20 * param_4 * 0.01;
      iVar6 = (int)fVar18;
      fVar20 = fVar18;
      if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar18)) {
        auVar14._4_4_ = fVar18;
        auVar14._0_4_ = fVar18;
        auVar14._8_8_ = 0;
        uVar4 = movmskps(iVar12 + -1,auVar14);
        fVar20 = (float)(int)(iVar6 - (uVar4 & 1));
      }
      lVar3 = *param_1;
      lVar9 = (longlong)((int)fVar18 + iVar10);
      iVar6 = (int)fVar18 + 1;
      fVar1 = *(float *)(lVar3 + lVar9 * 4);
      fVar16 = fVar1;
      if (iVar6 < iVar12) {
        fVar16 = *(float *)(lVar3 + 4 + lVar9 * 4);
      }
      iVar7 = (int)fVar21;
      fVar13 = fVar21;
      if ((iVar7 != -0x80000000) && ((float)iVar7 != fVar21)) {
        auVar15._4_4_ = fVar21;
        auVar15._0_4_ = fVar21;
        auVar15._8_8_ = 0;
        uVar4 = movmskps(iVar6,auVar15);
        fVar13 = (float)(int)(iVar7 - (uVar4 & 1));
      }
      lVar9 = (longlong)((int)fVar21 + iVar10);
      fVar2 = *(float *)(lVar3 + lVar9 * 4);
      fVar19 = fVar2;
      if ((int)fVar21 + 1 < iVar12) {
        fVar19 = *(float *)(lVar3 + 4 + lVar9 * 4);
      }
      fVar17 = unaff_XMM6_Da;
      if (0.0 < (1.0 - (fVar18 - fVar20)) * fVar1 + fVar16 * (fVar18 - fVar20)) {
        fVar20 = (float)log10f();
        fVar17 = fVar20 * 10.0;
      }
      unaff_XMM7_Da = fVar17 - 0.691;
      fVar21 = (1.0 - (fVar21 - fVar13)) * fVar2 + fVar19 * (fVar21 - fVar13);
      fVar18 = unaff_XMM6_Da;
      if (0.0 < fVar21) {
        fVar20 = (float)log10f();
        fVar18 = fVar20 * 10.0;
      }
      fVar20 = unaff_XMM7_Da;
      if (unaff_XMM7_Da < fVar18 - 0.691) {
        if (0.0 < fVar21) {
          fVar20 = (float)log10f();
          unaff_XMM6_Da = fVar20 * 10.0;
        }
        fVar20 = unaff_XMM6_Da - 0.691;
      }
    }
  }
  if (in_stack_000000d8 != (float *)0x0) {
    *in_stack_000000d8 = unaff_XMM7_Da;
  }
  if (in_stack_000000e0 != (float *)0x0) {
    *in_stack_000000e0 = fVar20;
  }
  return;
}






// 函数: void FUN_1807a8b0d(uint64_t param_1,uint64_t param_2,float param_3)
void FUN_1807a8b0d(uint64_t param_1,uint64_t param_2,float param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  uint uVar4;
  longlong in_RAX;
  float *pfVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong unaff_RBX;
  longlong *unaff_RDI;
  bool in_CF;
  float fVar13;
  int8_t auVar14 [16];
  int8_t auVar15 [16];
  float fVar16;
  float fVar17;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float fVar18;
  float unaff_XMM8_Da;
  float fVar19;
  float unaff_XMM9_Da;
  float fVar20;
  float fVar21;
  int32_t unaff_XMM13_Da;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  float in_stack_000000d0;
  float *in_stack_000000d8;
  float *in_stack_000000e0;
  
  *(int32_t *)(in_RAX + -0x78) = unaff_XMM13_Da;
  *(int32_t *)(in_RAX + -0x74) = unaff_XMM13_Db;
  *(int32_t *)(in_RAX + -0x70) = unaff_XMM13_Dc;
  *(int32_t *)(in_RAX + -0x6c) = unaff_XMM13_Dd;
  if (in_CF) {
    fVar19 = (float)powf(param_1,param_2,param_3 * -0.1);
  }
  else {
    fVar19 = 0.0;
  }
  iVar12 = (int)unaff_RBX;
  uVar8 = 0;
  fVar19 = (unaff_XMM8_Da / (float)iVar12) * fVar19;
  uVar11 = uVar8;
  if (0 < iVar12) {
    pfVar5 = (float *)*unaff_RDI;
    do {
      if (fVar19 < *pfVar5 || fVar19 == *pfVar5) break;
      uVar11 = (ulonglong)((int)uVar11 + 1);
      uVar8 = uVar8 + 1;
      pfVar5 = pfVar5 + 1;
    } while ((longlong)uVar8 < unaff_RBX);
  }
  iVar10 = (int)uVar11;
  iVar12 = iVar12 - iVar10;
  fVar19 = unaff_XMM6_Da;
  if ((iVar12 != 0) && (unaff_XMM9_Da <= in_stack_000000d0)) {
    fVar19 = (float)(iVar12 + -1);
    fVar21 = fVar19 * in_stack_000000d0 * 0.01;
    fVar17 = fVar19 * unaff_XMM9_Da * 0.01;
    iVar6 = (int)fVar17;
    fVar19 = fVar17;
    if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar17)) {
      auVar14._4_4_ = fVar17;
      auVar14._0_4_ = fVar17;
      auVar14._8_8_ = 0;
      uVar4 = movmskps(iVar12 + -1,auVar14);
      fVar19 = (float)(int)(iVar6 - (uVar4 & 1));
    }
    lVar3 = *unaff_RDI;
    lVar9 = (longlong)((int)fVar17 + iVar10);
    iVar6 = (int)fVar17 + 1;
    fVar1 = *(float *)(lVar3 + lVar9 * 4);
    fVar16 = fVar1;
    if (iVar6 < iVar12) {
      fVar16 = *(float *)(lVar3 + 4 + lVar9 * 4);
    }
    iVar7 = (int)fVar21;
    fVar13 = fVar21;
    if ((iVar7 != -0x80000000) && ((float)iVar7 != fVar21)) {
      auVar15._4_4_ = fVar21;
      auVar15._0_4_ = fVar21;
      auVar15._8_8_ = 0;
      uVar4 = movmskps(iVar6,auVar15);
      fVar13 = (float)(int)(iVar7 - (uVar4 & 1));
    }
    lVar9 = (longlong)((int)fVar21 + iVar10);
    fVar2 = *(float *)(lVar3 + lVar9 * 4);
    fVar20 = fVar2;
    if ((int)fVar21 + 1 < iVar12) {
      fVar20 = *(float *)(lVar3 + 4 + lVar9 * 4);
    }
    fVar18 = unaff_XMM6_Da;
    if (0.0 < (1.0 - (fVar17 - fVar19)) * fVar1 + fVar16 * (fVar17 - fVar19)) {
      fVar19 = (float)log10f();
      fVar18 = fVar19 * 10.0;
    }
    unaff_XMM7_Da = fVar18 - 0.691;
    fVar21 = (1.0 - (fVar21 - fVar13)) * fVar2 + fVar20 * (fVar21 - fVar13);
    fVar17 = unaff_XMM6_Da;
    if (0.0 < fVar21) {
      fVar19 = (float)log10f();
      fVar17 = fVar19 * 10.0;
    }
    fVar19 = unaff_XMM7_Da;
    if (unaff_XMM7_Da < fVar17 - 0.691) {
      if (0.0 < fVar21) {
        fVar19 = (float)log10f();
        unaff_XMM6_Da = fVar19 * 10.0;
      }
      fVar19 = unaff_XMM6_Da - 0.691;
    }
  }
  if (in_stack_000000d8 != (float *)0x0) {
    *in_stack_000000d8 = unaff_XMM7_Da;
  }
  if (in_stack_000000e0 != (float *)0x0) {
    *in_stack_000000e0 = fVar19;
  }
  return;
}






// 函数: void FUN_1807a8b8f(uint64_t param_1,int param_2)
void FUN_1807a8b8f(uint64_t param_1,int param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int unaff_EBX;
  longlong *unaff_RDI;
  float in_XMM1_Da;
  float fVar8;
  int8_t auVar9 [16];
  int8_t auVar10 [16];
  float fVar11;
  float fVar12;
  float unaff_XMM6_Da;
  float fVar13;
  float unaff_XMM9_Da;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float *in_stack_000000d8;
  float *in_stack_000000e0;
  
  fVar15 = (float)(unaff_EBX + -1);
  fVar16 = fVar15 * in_XMM1_Da * 0.01;
  fVar12 = fVar15 * unaff_XMM9_Da * 0.01;
  iVar5 = (int)fVar12;
  fVar15 = fVar12;
  if ((iVar5 != -0x80000000) && ((float)iVar5 != fVar12)) {
    auVar9._4_4_ = fVar12;
    auVar9._0_4_ = fVar12;
    auVar9._8_8_ = 0;
    uVar4 = movmskps(unaff_EBX + -1,auVar9);
    fVar15 = (float)(int)(iVar5 - (uVar4 & 1));
  }
  lVar3 = *unaff_RDI;
  lVar7 = (longlong)((int)fVar12 + param_2);
  iVar5 = (int)fVar12 + 1;
  fVar1 = *(float *)(lVar3 + lVar7 * 4);
  fVar11 = fVar1;
  if (iVar5 < unaff_EBX) {
    fVar11 = *(float *)(lVar3 + 4 + lVar7 * 4);
  }
  iVar6 = (int)fVar16;
  fVar8 = fVar16;
  if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar16)) {
    auVar10._4_4_ = fVar16;
    auVar10._0_4_ = fVar16;
    auVar10._8_8_ = 0;
    uVar4 = movmskps(iVar5,auVar10);
    fVar8 = (float)(int)(iVar6 - (uVar4 & 1));
  }
  lVar7 = (longlong)((int)fVar16 + param_2);
  fVar2 = *(float *)(lVar3 + lVar7 * 4);
  fVar14 = fVar2;
  if ((int)fVar16 + 1 < unaff_EBX) {
    fVar14 = *(float *)(lVar3 + 4 + lVar7 * 4);
  }
  fVar13 = unaff_XMM6_Da;
  if (unaff_XMM14_Da < (1.0 - (fVar12 - fVar15)) * fVar1 + fVar11 * (fVar12 - fVar15)) {
    fVar15 = (float)log10f();
    fVar13 = fVar15 * unaff_XMM13_Da;
  }
  fVar13 = fVar13 - 0.691;
  fVar12 = (1.0 - (fVar16 - fVar8)) * fVar2 + fVar14 * (fVar16 - fVar8);
  fVar15 = unaff_XMM6_Da;
  if (unaff_XMM14_Da < fVar12) {
    fVar15 = (float)log10f();
    fVar15 = fVar15 * unaff_XMM13_Da;
  }
  fVar16 = fVar13;
  if (fVar13 < fVar15 - 0.691) {
    if (unaff_XMM14_Da < fVar12) {
      fVar15 = (float)log10f();
      unaff_XMM6_Da = fVar15 * unaff_XMM13_Da;
    }
    fVar16 = unaff_XMM6_Da - 0.691;
  }
  if (in_stack_000000d8 != (float *)0x0) {
    *in_stack_000000d8 = fVar13;
  }
  if (in_stack_000000e0 != (float *)0x0) {
    *in_stack_000000e0 = fVar16;
  }
  return;
}



uint64_t FUN_1807a8cdd(void)

{
  uint64_t uVar1;
  float unaff_XMM6_Da;
  float fVar2;
  int32_t unaff_XMM6_Db;
  float unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  float unaff_XMM8_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float *in_stack_000000d8;
  float *in_stack_000000e0;
  
  fVar2 = unaff_XMM7_Da;
  if (unaff_XMM7_Da < unaff_XMM6_Da - 0.691) {
    if (unaff_XMM14_Da < unaff_XMM8_Da) {
      uVar1 = log10f();
      unaff_XMM6_Db = (int32_t)((ulonglong)uVar1 >> 0x20);
      unaff_XMM6_Da = (float)uVar1 * unaff_XMM13_Da;
    }
    fVar2 = unaff_XMM6_Da - 0.691;
    unaff_XMM7_Db = unaff_XMM6_Db;
  }
  if (in_stack_000000d8 != (float *)0x0) {
    *in_stack_000000d8 = unaff_XMM7_Da;
  }
  if (in_stack_000000e0 != (float *)0x0) {
    *in_stack_000000e0 = fVar2;
  }
  return CONCAT44(unaff_XMM7_Db,fVar2 - unaff_XMM7_Da);
}



float FUN_1807a8d2d(void)

{
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float *in_stack_000000d8;
  float *in_stack_000000e0;
  
  if (in_stack_000000d8 != (float *)0x0) {
    *in_stack_000000d8 = unaff_XMM7_Da;
  }
  if (in_stack_000000e0 != (float *)0x0) {
    *in_stack_000000e0 = unaff_XMM6_Da;
  }
  return unaff_XMM6_Da - unaff_XMM7_Da;
}



float FUN_1807a8d56(void)

{
  float *in_RAX;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float *in_stack_000000e0;
  
  *in_RAX = unaff_XMM7_Da;
  if (in_stack_000000e0 != (float *)0x0) {
    *in_stack_000000e0 = unaff_XMM6_Da;
  }
  return unaff_XMM6_Da - unaff_XMM7_Da;
}



uint64_t FUN_1807a8d90(uint64_t param_1,longlong *param_2,float *param_3,float param_4)

{
  float *pfVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  float in_XMM0_Da;
  float fVar9;
  
  if (-80.691 < param_4) {
    fVar9 = (float)powf(param_1,param_4 * 0.1 + 0.0691);
  }
  else {
    fVar9 = 0.0;
  }
  if (fVar9 <= in_XMM0_Da) {
    iVar3 = 0;
    *param_3 = in_XMM0_Da + *param_3;
    iVar6 = (int)param_2[1];
    if (-1 < iVar6 + -1) {
      iVar5 = iVar6 + -1;
      iVar8 = iVar3;
      do {
        pfVar1 = (float *)(*param_2 + (longlong)iVar5 * 4);
        if (*pfVar1 <= in_XMM0_Da && in_XMM0_Da != *pfVar1) {
          iVar3 = iVar5 + 1;
          break;
        }
        iVar3 = (iVar5 + iVar8) / 2;
        fVar9 = *(float *)(*param_2 + (longlong)iVar3 * 4);
        if (in_XMM0_Da <= fVar9) {
          uVar7 = (uint)(in_XMM0_Da < fVar9);
          if (uVar7 == 0) break;
        }
        else {
          uVar7 = 0xffffffff;
        }
        iVar4 = iVar3 + -1;
        if ((int)uVar7 < 1) {
          iVar4 = iVar5;
        }
        iVar5 = iVar3 + 1;
        iVar3 = iVar8;
        if ((int)uVar7 < 1) {
          iVar3 = iVar5;
        }
        iVar5 = iVar4;
        iVar8 = iVar3;
      } while (iVar3 <= iVar4);
    }
    if ((-1 < iVar3) && (iVar3 <= iVar6)) {
      iVar6 = iVar6 + 1;
      uVar7 = (int)*(uint *)((longlong)param_2 + 0xc) >> 0x1f;
      iVar5 = (*(uint *)((longlong)param_2 + 0xc) ^ uVar7) - uVar7;
      if (iVar5 < iVar6) {
        iVar8 = (int)((float)iVar5 * 1.5);
        iVar5 = iVar6;
        if (iVar6 <= iVar8) {
          iVar5 = iVar8;
        }
        if (iVar5 < 0x10) {
          iVar8 = 0x10;
        }
        else if (iVar8 < iVar6) {
          iVar8 = iVar6;
        }
        iVar6 = FUN_180747e10(param_2,iVar8);
        if (iVar6 != 0) {
          return 0;
        }
      }
      iVar6 = (int)param_2[1] - iVar3;
      if (0 < iVar6) {
        lVar2 = *param_2 + (longlong)iVar3 * 4;
                    // WARNING: Subroutine does not return
        memmove(lVar2 + 4,lVar2,(longlong)iVar6 << 2);
      }
      *(float *)(*param_2 + (longlong)iVar3 * 4) = in_XMM0_Da;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807a8f00(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint param_4,int param_5
void FUN_1807a8f00(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint param_4,int param_5
                  )

{
  int8_t auStack_268 [368];
  ulonglong uStack_f8;
  
  uStack_f8 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_268;
                    // WARNING: Subroutine does not return
  memcpy(param_3,param_2,(ulonglong)param_4 * (longlong)param_5 * 4);
}






