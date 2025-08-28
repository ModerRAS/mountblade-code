#include "TaleWorlds.Native.Split.h"

// 99_part_09_part059.c - 8 个函数

// 函数: void FUN_1805dd320(longlong param_1,uint64_t *param_2,int8_t param_3,uint64_t param_4)
void FUN_1805dd320(longlong param_1,uint64_t *param_2,int8_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  float fVar17;
  int32_t uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int8_t auVar22 [16];
  float fVar23;
  uint64_t uStackX_8;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  lVar13 = *plVar1;
  fVar19 = *(float *)((longlong)plVar1 + 0x1734);
  lVar11 = *(longlong *)(lVar13 + 0x20);
  lVar15 = *(longlong *)(lVar13 + 0x8d8);
  lVar10 = (longlong)*(int *)((longlong)plVar1 + 0x173c) * 0xa60;
  fVar23 = SQRT(fVar19 * fVar19 + *(float *)(plVar1 + 0x2e7) * *(float *)(plVar1 + 0x2e7));
  lVar12 = lVar10 + 0x30a0 + lVar15;
  lVar14 = *(longlong *)(lVar12 + 0x20);
  uStackX_8 = param_1;
  if ((((*(int *)((longlong)plVar1 + 0x14e4) == -1) ||
       (*(int *)((longlong)plVar1 + 0x14e4) != *(int *)(lVar12 + 0x504))) ||
      (cVar9 = func_0x000180508390(lVar12,lVar13,param_3,param_4,lVar11 + 0xc), cVar9 == '\0')) &&
     ((-1 < *(int *)(lVar12 + 0x564) && (*(int *)(lVar13 + 0x564) < 0)))) {
    lVar2 = *(longlong *)((longlong)*(int *)(lVar12 + 0x564) * 0xa60 + 0x30c0 + lVar15);
    fVar17 = *(float *)(lVar2 + 0x1c8) - *(float *)(lVar2 + 0x1b8);
    fVar21 = *(float *)(lVar2 + 0x1c0) - *(float *)(lVar2 + 0x1b0);
    fVar20 = *(float *)(lVar2 + 0x1c4) - *(float *)(lVar2 + 0x1b4);
    fVar23 = fVar23 + (SQRT(fVar21 * fVar21 + fVar20 * fVar20 + fVar17 * fVar17) -
                      *(float *)(lVar11 + 0x1d0)) * 2.0;
  }
  if (0.1 < ABS(fVar19)) {
    iVar16 = *(int *)(lVar12 + 0x500);
    if (0.1 < *(float *)(lVar14 + 0x20)) {
      *(int32_t *)(uStackX_8 + 0x1160) = *(int32_t *)(lVar14 + 0x34);
      iVar16 = *(int *)(lVar12 + 0x500);
    }
    if (iVar16 == -1) {
      uVar18 = *(int32_t *)(uStackX_8 + 0x1160);
    }
    else {
      lVar13 = *(longlong *)((longlong)iVar16 * 0xa60 + 0x30c0 + lVar15);
      uVar18 = atan2f(*(float *)(*(longlong *)(lVar12 + 0x20) + 0xc) - *(float *)(lVar13 + 0xc),
                      *(float *)(lVar13 + 0x10) - *(float *)(*(longlong *)(lVar12 + 0x20) + 0x10));
    }
                    // WARNING: Subroutine does not return
    FUN_1808fd400(uVar18);
  }
  fVar19 = *(float *)(lVar14 + 0xc) - *(float *)(lVar11 + 0xc);
  fVar17 = *(float *)(lVar14 + 0x10) - *(float *)(lVar11 + 0x10);
  uStackX_8 = CONCAT44(fVar17,fVar19);
  if (fVar17 * fVar17 + fVar19 * fVar19 <= fVar23 * fVar23) {
    lVar13 = *(longlong *)(lVar13 + 0x9d8);
    lVar14 = lVar13;
    if ((lVar13 == 0) ||
       (cVar9 = FUN_18038d0a0(lVar13,lVar11 + 0xc), lVar14 = lVar13, cVar9 == '\0')) {
      lVar13 = 0;
    }
    uVar5 = *(uint64_t *)(lVar11 + 0xc);
    uVar6 = *(uint64_t *)(lVar11 + 0x14);
    uVar7 = *(uint64_t *)(lVar11 + 0xb0);
    uVar8 = *(uint64_t *)(lVar11 + 0xb8);
    *param_2 = *(uint64_t *)(lVar15 + 0x18);
    param_2[5] = uVar7;
    param_2[6] = uVar8;
    param_2[7] = uVar5;
    param_2[3] = uVar5;
    param_2[4] = uVar6;
    param_2[1] = lVar13;
    param_2[2] = lVar14;
    *(int32_t *)(param_2 + 8) = 3;
    return;
  }
  if (*(int *)(lVar12 + 0x564) == -1) {
    fVar20 = fVar17 * fVar17 + fVar19 * fVar19;
    auVar22 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
    fVar21 = auVar22._0_4_;
    fVar20 = fVar21 * 0.5 * (3.0 - fVar20 * fVar21 * fVar21);
    fVar19 = fVar19 * fVar20;
    fVar17 = fVar17 * fVar20;
  }
  else {
    fVar20 = fVar17 * fVar17 + fVar19 * fVar19;
    auVar22 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
    fVar21 = auVar22._0_4_;
    fVar20 = fVar21 * 0.5 * (3.0 - fVar20 * fVar21 * fVar21);
    fVar19 = fVar19 * fVar20;
    fVar17 = fVar17 * fVar20;
    if (*(float *)(lVar11 + 0x50) * 0.33 < *(float *)(lVar14 + 0x234)) {
      fVar23 = *(float *)(lVar14 + 0x234) - fVar23;
      fVar19 = fVar19 * fVar23;
      fVar17 = fVar17 * fVar23;
      goto LAB_1805ddac5;
    }
  }
  fVar19 = fVar19 * -fVar23;
  fVar17 = fVar17 * -fVar23;
LAB_1805ddac5:
  uStackX_8 = CONCAT44(fVar17 + *(float *)((longlong)param_2 + 0x1c),
                       fVar19 + *(float *)(param_2 + 3));
  FUN_18052fef0(lVar12,&uStackX_8,*(int *)(lVar12 + 0x570) == 1,0);
  lVar13 = *(longlong *)(lVar12 + 0x9d8);
  lVar11 = 0;
  lVar14 = lVar11;
  if (lVar13 == 0) {
    lVar15 = *(longlong *)(lVar10 + 0x30c0 + lVar15);
  }
  else {
    lVar15 = *(longlong *)(lVar12 + 0x20);
    cVar9 = FUN_18038d0a0(lVar13,lVar15 + 0xc);
    lVar11 = lVar14;
    if (cVar9 != '\0') {
      lVar11 = lVar13;
    }
  }
  fVar19 = *(float *)(lVar15 + 0xc);
  uVar18 = *(int32_t *)(lVar15 + 0x10);
  uVar7 = *(uint64_t *)(lVar15 + 0xc);
  uVar3 = *(int32_t *)(lVar15 + 0x14);
  uVar4 = *(int32_t *)(lVar15 + 0x18);
  uVar5 = *(uint64_t *)(lVar15 + 0xb0);
  uVar6 = *(uint64_t *)(lVar15 + 0xb8);
  *param_2 = *(uint64_t *)(*(longlong *)(lVar12 + 0x8d8) + 0x18);
  param_2[1] = lVar11;
  param_2[5] = uVar5;
  param_2[6] = uVar6;
  param_2[2] = lVar13;
  param_2[7] = uVar7;
  *(int32_t *)(param_2 + 8) = 3;
  *(float *)(param_2 + 3) = fVar19;
  *(int32_t *)((longlong)param_2 + 0x1c) = uVar18;
  *(int32_t *)(param_2 + 4) = uVar3;
  *(int32_t *)((longlong)param_2 + 0x24) = uVar4;
  if (((float)uStackX_8 != fVar19) || (uStackX_8._4_4_ != *(float *)((longlong)param_2 + 0x1c))) {
    param_2[3] = uStackX_8;
    *(int *)(param_2 + 8) = (int)lVar14;
  }
  return;
}






// 函数: void FUN_1805dd487(void)
void FUN_1805dd487(void)

{
  longlong lVar1;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R13;
  int unaff_R15D;
  int32_t uVar2;
  float unaff_XMM8_Da;
  
  lVar1 = *(longlong *)(unaff_RBP + 0x67);
  if (unaff_XMM8_Da < *(float *)(unaff_RSI + 0x20)) {
    *(int32_t *)(lVar1 + 0x1160) = *(int32_t *)(unaff_RSI + 0x34);
    unaff_R15D = *(int *)(unaff_RDI + 0x500);
  }
  if (unaff_R15D == -1) {
    uVar2 = *(int32_t *)(lVar1 + 0x1160);
  }
  else {
    lVar1 = *(longlong *)((longlong)unaff_R15D * 0xa60 + 0x30c0 + unaff_R13);
    uVar2 = atan2f(*(float *)(*(longlong *)(unaff_RDI + 0x20) + 0xc) - *(float *)(lVar1 + 0xc),
                   *(float *)(lVar1 + 0x10) - *(float *)(*(longlong *)(unaff_RDI + 0x20) + 0x10));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fd400(uVar2);
}






// 函数: void FUN_1805dd641(void)
void FUN_1805dd641(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  char cVar17;
  longlong lVar18;
  uint64_t *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar19;
  longlong lVar20;
  longlong unaff_R13;
  longlong unaff_R14;
  int unaff_R15D;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float *pfStackX_20;
  
  fVar1 = *(float *)(unaff_RSI + 0x10);
  fVar2 = *(float *)(unaff_RSI + 0x14);
  fVar3 = *(float *)(unaff_RSI + 0xc);
  lVar5 = *(longlong *)((longlong)unaff_R15D * 0xa60 + 0x30c0 + unaff_R13);
  fVar7 = *(float *)(lVar5 + 0xc);
  fVar8 = *(float *)(lVar5 + 0x10);
  fVar9 = *(float *)(lVar5 + 0x14);
  fVar24 = fVar7 - fVar3;
  fVar23 = fVar8 - fVar1;
  fVar22 = fVar9 - fVar2;
  fVar25 = ((pfStackX_20[1] - fVar1) * fVar23 + (*pfStackX_20 - fVar3) * fVar24 +
           (pfStackX_20[2] - fVar2) * fVar22) /
           (fVar23 * fVar23 + fVar24 * fVar24 + fVar22 * fVar22);
  fVar21 = (fVar25 * fVar23 + fVar1) - fVar8;
  fVar23 = (fVar25 * fVar24 + fVar3) - fVar7;
  fVar22 = (fVar25 * fVar22 + fVar2) - fVar9;
  fVar23 = fVar23 * fVar23;
  if ((fVar3 - fVar7) * (fVar3 - fVar7) + (fVar1 - fVar8) * (fVar1 - fVar8) +
      (fVar2 - fVar9) * (fVar2 - fVar9) < fVar21 * fVar21 + fVar23 + fVar22 * fVar22) {
    fVar1 = *(float *)((longlong)unaff_RBX + 0x1c);
    iVar4 = *(int *)(unaff_RDI + 0x570);
    *(float *)(unaff_RBP + 0x67) = unaff_XMM14_Da + *(float *)(unaff_RBX + 3);
    *(float *)(unaff_RBP + 0x6b) = unaff_XMM13_Da + fVar1;
    FUN_18052fef0(fVar23,unaff_RBP + 0x67,iVar4 == 1,0);
    lVar5 = *(longlong *)(unaff_RDI + 0x9d8);
    lVar18 = 0;
    lVar19 = lVar18;
    if (lVar5 == 0) {
      lVar20 = *(longlong *)(*(longlong *)(unaff_RBP + 0x7f) + 0x30c0 + unaff_R13);
    }
    else {
      lVar20 = *(longlong *)(unaff_RDI + 0x20);
      cVar17 = FUN_18038d0a0(lVar5,lVar20 + 0xc);
      lVar18 = lVar19;
      if (cVar17 != '\0') {
        lVar18 = lVar5;
      }
    }
    lVar6 = *(longlong *)(unaff_RDI + 0x8d8);
    *(longlong *)(unaff_RBP + -0x79) = lVar19;
    fVar2 = *(float *)(lVar20 + 0xc);
    uVar10 = *(int32_t *)(lVar20 + 0x10);
    uVar15 = *(uint64_t *)(lVar20 + 0xc);
    uVar11 = *(int32_t *)(lVar20 + 0x14);
    uVar12 = *(int32_t *)(lVar20 + 0x18);
    uVar13 = *(uint64_t *)(lVar20 + 0xb0);
    uVar14 = *(uint64_t *)(lVar20 + 0xb8);
    *unaff_RBX = *(uint64_t *)(lVar6 + 0x18);
    unaff_RBX[1] = lVar18;
    unaff_RBX[5] = uVar13;
    unaff_RBX[6] = uVar14;
    unaff_RBX[2] = lVar5;
    fVar1 = *(float *)(unaff_RBP + 0x67);
    unaff_RBX[7] = uVar15;
    *(int32_t *)(unaff_RBX + 8) = 3;
    *(float *)(unaff_RBX + 3) = fVar2;
    *(int32_t *)((longlong)unaff_RBX + 0x1c) = uVar10;
    *(int32_t *)(unaff_RBX + 4) = uVar11;
    *(int32_t *)((longlong)unaff_RBX + 0x24) = uVar12;
    if ((fVar1 != fVar2) || (*(float *)(unaff_RBP + 0x6b) != *(float *)((longlong)unaff_RBX + 0x1c))
       ) {
      unaff_RBX[3] = *(uint64_t *)(unaff_RBP + 0x67);
      *(int *)(unaff_RBX + 8) = (int)lVar19;
    }
  }
  else {
    lVar5 = *(longlong *)(unaff_R14 + 0x9d8);
    lVar18 = *(longlong *)(unaff_R14 + 0x20);
    if ((lVar5 == 0) || (cVar17 = FUN_18038d0a0(lVar5,lVar18 + 0xc), lVar19 = lVar5, cVar17 == '\0')
       ) {
      lVar19 = 0;
    }
    lVar20 = *(longlong *)(unaff_R14 + 0x8d8);
    *(uint64_t *)(unaff_RBP + -0x79) = 0;
    uVar13 = *(uint64_t *)(lVar18 + 0xc);
    uVar14 = *(uint64_t *)(lVar18 + 0x14);
    uVar15 = *(uint64_t *)(lVar18 + 0xb0);
    uVar16 = *(uint64_t *)(lVar18 + 0xb8);
    *unaff_RBX = *(uint64_t *)(lVar20 + 0x18);
    unaff_RBX[3] = uVar13;
    unaff_RBX[4] = uVar14;
    unaff_RBX[1] = lVar19;
    unaff_RBX[5] = uVar15;
    unaff_RBX[6] = uVar16;
    unaff_RBX[2] = lVar5;
    unaff_RBX[7] = uVar13;
    *(int32_t *)(unaff_RBX + 8) = 3;
  }
  return;
}






// 函数: void FUN_1805dd7b8(void)
void FUN_1805dd7b8(void)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  char cVar7;
  uint64_t *unaff_RBX;
  longlong unaff_RBP;
  longlong lVar8;
  longlong lVar9;
  longlong unaff_R14;
  
  lVar1 = *(longlong *)(unaff_R14 + 0x9d8);
  lVar9 = *(longlong *)(unaff_R14 + 0x20);
  if ((lVar1 == 0) || (cVar7 = FUN_18038d0a0(lVar1,lVar9 + 0xc), lVar8 = lVar1, cVar7 == '\0')) {
    lVar8 = 0;
  }
  lVar2 = *(longlong *)(unaff_R14 + 0x8d8);
  *(uint64_t *)(unaff_RBP + -0x79) = 0;
  uVar3 = *(uint64_t *)(lVar9 + 0xc);
  uVar4 = *(uint64_t *)(lVar9 + 0x14);
  uVar5 = *(uint64_t *)(lVar9 + 0xb0);
  uVar6 = *(uint64_t *)(lVar9 + 0xb8);
  *unaff_RBX = *(uint64_t *)(lVar2 + 0x18);
  unaff_RBX[3] = uVar3;
  unaff_RBX[4] = uVar4;
  unaff_RBX[1] = lVar8;
  unaff_RBX[5] = uVar5;
  unaff_RBX[6] = uVar6;
  unaff_RBX[2] = lVar1;
  unaff_RBX[7] = uVar3;
  *(int32_t *)(unaff_RBX + 8) = 3;
  return;
}






// 函数: void FUN_1805dd83c(void)
void FUN_1805dd83c(void)

{
  return;
}






// 函数: void FUN_1805dd866(int32_t param_1)
void FUN_1805dd866(int32_t param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  char cVar12;
  longlong lVar13;
  uint64_t *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong lVar14;
  longlong lVar15;
  longlong unaff_R13;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  
  fVar1 = *(float *)((longlong)unaff_RBX + 0x1c);
  iVar2 = *(int *)(unaff_RDI + 0x570);
  *(float *)(unaff_RBP + 0x67) = unaff_XMM14_Da + *(float *)(unaff_RBX + 3);
  *(float *)(unaff_RBP + 0x6b) = unaff_XMM13_Da + fVar1;
  FUN_18052fef0(param_1,unaff_RBP + 0x67,iVar2 == 1,0);
  lVar3 = *(longlong *)(unaff_RDI + 0x9d8);
  lVar13 = 0;
  lVar14 = lVar13;
  if (lVar3 == 0) {
    lVar15 = *(longlong *)(*(longlong *)(unaff_RBP + 0x7f) + 0x30c0 + unaff_R13);
  }
  else {
    lVar15 = *(longlong *)(unaff_RDI + 0x20);
    cVar12 = FUN_18038d0a0(lVar3,lVar15 + 0xc);
    lVar13 = lVar14;
    if (cVar12 != '\0') {
      lVar13 = lVar3;
    }
  }
  lVar4 = *(longlong *)(unaff_RDI + 0x8d8);
  *(longlong *)(unaff_RBP + -0x79) = lVar14;
  fVar5 = *(float *)(lVar15 + 0xc);
  uVar6 = *(int32_t *)(lVar15 + 0x10);
  uVar11 = *(uint64_t *)(lVar15 + 0xc);
  uVar7 = *(int32_t *)(lVar15 + 0x14);
  uVar8 = *(int32_t *)(lVar15 + 0x18);
  uVar9 = *(uint64_t *)(lVar15 + 0xb0);
  uVar10 = *(uint64_t *)(lVar15 + 0xb8);
  *unaff_RBX = *(uint64_t *)(lVar4 + 0x18);
  unaff_RBX[1] = lVar13;
  unaff_RBX[5] = uVar9;
  unaff_RBX[6] = uVar10;
  unaff_RBX[2] = lVar3;
  fVar1 = *(float *)(unaff_RBP + 0x67);
  unaff_RBX[7] = uVar11;
  *(int32_t *)(unaff_RBX + 8) = 3;
  *(float *)(unaff_RBX + 3) = fVar5;
  *(int32_t *)((longlong)unaff_RBX + 0x1c) = uVar6;
  *(int32_t *)(unaff_RBX + 4) = uVar7;
  *(int32_t *)((longlong)unaff_RBX + 0x24) = uVar8;
  if ((fVar1 != fVar5) || (*(float *)(unaff_RBP + 0x6b) != *(float *)((longlong)unaff_RBX + 0x1c)))
  {
    unaff_RBX[3] = *(uint64_t *)(unaff_RBP + 0x67);
    *(int *)(unaff_RBX + 8) = (int)lVar14;
  }
  return;
}






// 函数: void FUN_1805dd942(void)
void FUN_1805dd942(void)

{
  int iVar1;
  longlong lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  char cVar10;
  longlong lVar11;
  uint64_t *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int8_t auVar19 [16];
  float unaff_XMM7_Da;
  
  fVar15 = *(float *)(unaff_RSI + 0xc) - *(float *)(unaff_R15 + 0xc);
  fVar16 = *(float *)(unaff_RSI + 0x10) - *(float *)(unaff_R15 + 0x10);
  *(float *)(unaff_RBP + 0x67) = fVar15;
  *(float *)(unaff_RBP + 0x6b) = fVar16;
  if (fVar16 * fVar16 + fVar15 * fVar15 <= unaff_XMM7_Da * unaff_XMM7_Da) {
    lVar12 = *(longlong *)(unaff_R14 + 0x9d8);
    lVar11 = lVar12;
    if ((lVar12 == 0) ||
       (cVar10 = FUN_18038d0a0(lVar12,unaff_R15 + 0xc), lVar11 = lVar12, cVar10 == '\0')) {
      lVar12 = 0;
    }
    *(uint64_t *)(unaff_RBP + -0x79) = 0;
    uVar6 = *(uint64_t *)(unaff_R15 + 0xc);
    uVar7 = *(uint64_t *)(unaff_R15 + 0x14);
    uVar8 = *(uint64_t *)(unaff_R15 + 0xb0);
    uVar9 = *(uint64_t *)(unaff_R15 + 0xb8);
    *unaff_RBX = *(uint64_t *)(unaff_R13 + 0x18);
    unaff_RBX[5] = uVar8;
    unaff_RBX[6] = uVar9;
    unaff_RBX[7] = uVar6;
    unaff_RBX[3] = uVar6;
    unaff_RBX[4] = uVar7;
    unaff_RBX[1] = lVar12;
    unaff_RBX[2] = lVar11;
    *(int32_t *)(unaff_RBX + 8) = 3;
    return;
  }
  iVar1 = *(int *)(unaff_RDI + 0x564);
  *(uint64_t *)(unaff_RBP + 0x67) = *(uint64_t *)(unaff_RBP + 0x67);
  fVar15 = *(float *)(unaff_RBP + 0x6b);
  fVar16 = *(float *)(unaff_RBP + 0x67);
  if (iVar1 == -1) {
    fVar17 = fVar15 * fVar15 + fVar16 * fVar16;
    auVar19 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
    fVar18 = auVar19._0_4_;
    fVar17 = fVar18 * 0.5 * (3.0 - fVar17 * fVar18 * fVar18);
    fVar16 = fVar16 * fVar17;
    fVar15 = fVar15 * fVar17;
  }
  else {
    fVar17 = fVar15 * fVar15 + fVar16 * fVar16;
    auVar19 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
    fVar18 = auVar19._0_4_;
    fVar17 = fVar18 * 0.5 * (3.0 - fVar17 * fVar18 * fVar18);
    fVar16 = fVar16 * fVar17;
    fVar15 = fVar15 * fVar17;
    if (*(float *)(unaff_R15 + 0x50) * 0.33 < *(float *)(unaff_RSI + 0x234)) {
      fVar17 = *(float *)(unaff_RSI + 0x234) - unaff_XMM7_Da;
      fVar16 = fVar16 * fVar17;
      fVar15 = fVar15 * fVar17;
      goto LAB_1805ddac5;
    }
  }
  fVar16 = fVar16 * -unaff_XMM7_Da;
  fVar15 = fVar15 * -unaff_XMM7_Da;
LAB_1805ddac5:
  iVar1 = *(int *)(unaff_RDI + 0x570);
  *(float *)(unaff_RBP + 0x67) = fVar16;
  *(float *)(unaff_RBP + 0x6b) = fVar15;
  *(uint64_t *)(unaff_RBP + 0x77) = *(uint64_t *)(unaff_RBP + 0x67);
  fVar16 = *(float *)(unaff_RBP + 0x77) + *(float *)(unaff_RBX + 3);
  fVar15 = *(float *)((longlong)unaff_RBX + 0x1c);
  *(float *)(unaff_RBP + 0x67) = fVar16;
  *(float *)(unaff_RBP + 0x6b) = *(float *)(unaff_RBP + 0x7b) + fVar15;
  FUN_18052fef0(fVar16,unaff_RBP + 0x67,iVar1 == 1,0);
  lVar12 = *(longlong *)(unaff_RDI + 0x9d8);
  lVar11 = 0;
  lVar13 = lVar11;
  if (lVar12 == 0) {
    lVar14 = *(longlong *)(*(longlong *)(unaff_RBP + 0x7f) + 0x30c0 + unaff_R13);
  }
  else {
    lVar14 = *(longlong *)(unaff_RDI + 0x20);
    cVar10 = FUN_18038d0a0(lVar12,lVar14 + 0xc);
    lVar11 = lVar13;
    if (cVar10 != '\0') {
      lVar11 = lVar12;
    }
  }
  lVar2 = *(longlong *)(unaff_RDI + 0x8d8);
  *(longlong *)(unaff_RBP + -0x79) = lVar13;
  fVar16 = *(float *)(lVar14 + 0xc);
  uVar3 = *(int32_t *)(lVar14 + 0x10);
  uVar8 = *(uint64_t *)(lVar14 + 0xc);
  uVar4 = *(int32_t *)(lVar14 + 0x14);
  uVar5 = *(int32_t *)(lVar14 + 0x18);
  uVar6 = *(uint64_t *)(lVar14 + 0xb0);
  uVar7 = *(uint64_t *)(lVar14 + 0xb8);
  *unaff_RBX = *(uint64_t *)(lVar2 + 0x18);
  unaff_RBX[1] = lVar11;
  unaff_RBX[5] = uVar6;
  unaff_RBX[6] = uVar7;
  unaff_RBX[2] = lVar12;
  fVar15 = *(float *)(unaff_RBP + 0x67);
  unaff_RBX[7] = uVar8;
  *(int32_t *)(unaff_RBX + 8) = 3;
  *(float *)(unaff_RBX + 3) = fVar16;
  *(int32_t *)((longlong)unaff_RBX + 0x1c) = uVar3;
  *(int32_t *)(unaff_RBX + 4) = uVar4;
  *(int32_t *)((longlong)unaff_RBX + 0x24) = uVar5;
  if ((fVar15 != fVar16) || (*(float *)(unaff_RBP + 0x6b) != *(float *)((longlong)unaff_RBX + 0x1c))
     ) {
    unaff_RBX[3] = *(uint64_t *)(unaff_RBP + 0x67);
    *(int *)(unaff_RBX + 8) = (int)lVar13;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805ddbc0(longlong param_1,uint64_t *param_2)
void FUN_1805ddbc0(longlong param_1,uint64_t *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  uint64_t *puVar12;
  uint uVar13;
  float *pfVar14;
  longlong lVar15;
  longlong lVar16;
  byte bVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int8_t auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  uint64_t uStackX_8;
  longlong *plVar29;
  uint64_t uVar30;
  float fStack_148;
  float fStack_144;
  int32_t uStack_140;
  int32_t uStack_13c;
  float *pfStack_138;
  int8_t auStack_130 [72];
  int8_t auStack_e8 [176];
  
  plVar2 = *(longlong **)(param_1 + 0x20);
  lVar15 = *plVar2;
  plVar1 = plVar2 + 1;
  lVar18 = *(longlong *)(lVar15 + 0x20);
  plVar29 = (longlong *)(lVar15 + 0x20);
  pfVar14 = (float *)(lVar18 + 0xc);
  lVar16 = *(longlong *)(lVar15 + 0x8d8);
  pfStack_138 = pfVar14;
  if ((*(uint *)((longlong)plVar2 + 0x1484) >> 6 & 1) != 0) {
    if ((char)plVar2[0x438] == '\0') {
      iVar10 = *(int *)((longlong)plVar2 + 0x14b4);
    }
    else {
      iVar10 = *(int *)((longlong)plVar2 + 0x21c4);
    }
    if (((-1 < iVar10) &&
        (lVar19 = *(longlong *)((longlong)iVar10 * 0xa60 + 0x3778 + plVar2[0x291]), lVar19 != 0)) &&
       (*(char *)(lVar19 + 0x8be) != '\0')) {
      uVar13 = *(uint *)(plVar2 + 2);
      if ((uVar13 & 1) == 0) {
        FUN_1805d3210(plVar1);
        uVar13 = *(uint *)(plVar2 + 2);
      }
      if ((uVar13 >> 0x19 & 1) == 0) {
        *(int32_t *)((longlong)plVar2 + 0xb4) = *(int32_t *)(*(longlong *)*plVar1 + 0x7dc);
        *(uint *)(plVar2 + 2) = uVar13 | 0x2000000;
      }
      if (*(float *)(plVar2 + 0xd) <= *(float *)((longlong)plVar2 + 0xb4) * 5.0) goto LAB_1805ddf4c;
    }
    lVar19 = *(longlong *)(param_1 + 0x20);
    iVar10 = *(int *)(lVar19 + 0x2130);
    lVar11 = (longlong)iVar10;
    if (((-1 < iVar10) && (iVar10 < *(int *)(lVar16 + 0x52ed94))) &&
       (-1 < *(short *)(lVar16 + 0x52dda0 + lVar11 * 2))) {
      lVar15 = lVar16 + 0x30a0 + lVar11 * 0xa60;
      if (-1 < *(int *)(lVar19 + 0x2134)) {
                    // WARNING: Subroutine does not return
        FUN_1808fd400(lVar11,(float)*(int *)(lVar19 + 0x2134) * 0.19634955);
      }
      lVar16 = *(longlong *)(lVar15 + 0x20);
      fVar24 = *(float *)(lVar16 + 0xc) - *pfVar14;
      fVar26 = *(float *)(lVar16 + 0x10) - *(float *)(lVar18 + 0x10);
      fVar20 = fVar26 * fVar26 + fVar24 * fVar24;
      auVar23 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
      fVar25 = auVar23._0_4_;
      fVar20 = fVar25 * 0.5 * (3.0 - fVar20 * fVar25 * fVar25);
      if ((*(uint *)(lVar19 + 0x10) >> 0x19 & 1) == 0) {
        fVar25 = *(float *)(**(longlong **)(lVar19 + 8) + 0x7dc);
        *(float *)(lVar19 + 0xb4) = fVar25;
        *(uint *)(lVar19 + 0x10) = *(uint *)(lVar19 + 0x10) | 0x2000000;
      }
      else {
        fVar25 = *(float *)(lVar19 + 0xb4);
      }
      if (fVar25 <= 1.0) {
        fVar25 = 1.0;
      }
      uStackX_8 = (float *)CONCAT44(*(float *)(lVar16 + 0x10) - fVar25 * fVar20 * fVar26,
                                    *(float *)(lVar16 + 0xc) - fVar25 * fVar20 * fVar24);
      FUN_18052fef0(lVar15,&uStackX_8,0,0);
      puVar12 = (uint64_t *)FUN_180516f50(lVar15,auStack_130);
      *param_2 = *puVar12;
      uVar30 = puVar12[4];
      param_2[3] = puVar12[3];
      param_2[4] = uVar30;
      uVar30 = puVar12[6];
      param_2[5] = puVar12[5];
      param_2[6] = uVar30;
      param_2[1] = puVar12[1];
      param_2[2] = puVar12[2];
      param_2[7] = puVar12[7];
      iVar10 = *(int *)(puVar12 + 8);
      *(int *)(param_2 + 8) = iVar10;
      if (((float)uStackX_8 == *(float *)(param_2 + 3)) &&
         (uStackX_8._4_4_ == *(float *)((longlong)param_2 + 0x1c))) {
        return;
      }
      if (iVar10 != 0) {
        *(int32_t *)(param_2 + 8) = 0;
      }
      param_2[3] = uStackX_8;
      return;
    }
  }
LAB_1805ddf4c:
  lVar19 = *plVar29;
  lVar11 = *(longlong *)(param_1 + 0x20);
  iVar10 = *(int *)(lVar11 + 0x14a8);
  lVar16 = (longlong)*(int *)(param_1 + 0x1164) * 0xa60 + 0x30a0 + lVar16;
  if (iVar10 == 2) {
    cVar9 = FUN_180488880(param_1 + 0x1168);
    if (cVar9 == '\0') {
      puVar12 = (uint64_t *)FUN_180516f50(lVar16,auStack_130);
      *param_2 = *puVar12;
      uVar30 = puVar12[4];
      param_2[3] = puVar12[3];
      param_2[4] = uVar30;
      uVar30 = puVar12[6];
      param_2[5] = puVar12[5];
      param_2[6] = uVar30;
      param_2[1] = puVar12[1];
      param_2[2] = puVar12[2];
      param_2[7] = puVar12[7];
      *(int32_t *)(param_2 + 8) = *(int32_t *)(puVar12 + 8);
      return;
    }
    puVar12 = (uint64_t *)FUN_180516f50(lVar15,auStack_130);
    *param_2 = *puVar12;
    uVar30 = puVar12[4];
    param_2[3] = puVar12[3];
    param_2[4] = uVar30;
    uVar30 = puVar12[6];
    param_2[5] = puVar12[5];
    param_2[6] = uVar30;
    param_2[1] = puVar12[1];
    param_2[2] = puVar12[2];
    param_2[7] = puVar12[7];
    iVar10 = *(int *)(puVar12 + 8);
    *(int *)(param_2 + 8) = iVar10;
    if ((*(float *)(param_1 + 0x1168) == *(float *)(param_2 + 3)) &&
       (*(float *)(param_1 + 0x116c) == *(float *)((longlong)param_2 + 0x1c))) {
      return;
    }
    if (iVar10 != 0) {
      *(int32_t *)(param_2 + 8) = 0;
    }
    param_2[3] = *(uint64_t *)(param_1 + 0x1168);
    return;
  }
  if (iVar10 == 9) {
FUN_1805df09a:
    lVar15 = *(longlong *)(lVar16 + 0x9d8);
    lVar18 = *(longlong *)(lVar16 + 0x20);
    if ((lVar15 == 0) ||
       (cVar9 = FUN_18038d0a0(lVar15,lVar18 + 0xc), lVar19 = lVar15, cVar9 == '\0')) {
      lVar19 = 0;
    }
    uVar30 = *(uint64_t *)(lVar18 + 0xc);
    uVar6 = *(uint64_t *)(lVar18 + 0x14);
    uVar7 = *(uint64_t *)(lVar18 + 0xb0);
    uVar8 = *(uint64_t *)(lVar18 + 0xb8);
    *param_2 = *(uint64_t *)(*(longlong *)(lVar16 + 0x8d8) + 0x18);
    param_2[3] = uVar30;
    param_2[4] = uVar6;
    param_2[1] = lVar19;
    param_2[5] = uVar7;
    param_2[6] = uVar8;
    param_2[2] = lVar15;
    param_2[7] = uVar30;
    *(int32_t *)(param_2 + 8) = 3;
                    // WARNING: Read-only address (ram,0x000180a401f0) is written
    return;
  }
  lVar3 = *(longlong *)(lVar16 + 0x20);
  fVar20 = *(float *)(lVar3 + 0xc);
  fVar25 = *(float *)(lVar3 + 0x10);
  fVar24 = fVar25 - *(float *)(lVar18 + 0x10);
  if (*(float *)(lVar19 + 0x8c) * *(float *)(lVar19 + 0x8c) * 100.0 <
      fVar24 * fVar24 + (fVar20 - *pfVar14) * (fVar20 - *pfVar14)) goto FUN_1805df09a;
  fVar24 = *(float *)(lVar19 + 0x24);
  fVar26 = *(float *)(lVar19 + 0x28);
  fVar4 = *(float *)(lVar3 + 0x24);
  fVar5 = *(float *)(lVar3 + 0x28);
  bVar17 = (byte)((uint)*(int32_t *)(lVar15 + 0x564) >> 0x1f) ^ 1;
  fVar27 = fVar4 * fVar4 + fVar5 * fVar5 + *(float *)(lVar3 + 0x2c) * *(float *)(lVar3 + 0x2c);
  fVar28 = fVar24 * fVar24 + fVar26 * fVar26 + *(float *)(lVar19 + 0x2c) * *(float *)(lVar19 + 0x2c)
  ;
  fVar21 = fVar26 * fVar26 + fVar24 * fVar24;
  fVar21 = (float)(fVar21 <= 1.1754944e-38) * 1.1754944e-38 + fVar21;
  auVar23 = rsqrtss(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21));
  fVar22 = auVar23._0_4_;
  fVar21 = fVar22 * 0.5 * (3.0 - fVar21 * fVar22 * fVar22);
  fStack_148 = fVar21 * fVar26;
  fVar21 = fVar21 * fVar24;
  fStack_144 = 0.5;
  uStack_140 = 0x3f000000;
  uStack_13c = 0x3f000000;
  uStackX_8 = (float *)CONCAT44(fVar26,fVar21);
  fVar24 = fVar27;
  if (fVar27 <= 1.1754944e-38) {
    fVar24 = 1.1754944e-38;
  }
  auVar23 = rsqrtss(ZEXT416((uint)fVar24),ZEXT416((uint)fVar24));
  fVar26 = auVar23._0_4_;
  fVar24 = fVar26 * 0.5 * (3.0 - fVar24 * fVar26 * fVar26);
  if (-1 < *(int *)(lVar16 + 0x564)) {
    if (bVar17 == 0) goto FUN_1805de4c2;
    fVar26 = *(float *)(lVar3 + 0x84) * *(float *)(lVar3 + 0x84);
    if ((((fVar26 * 0.010000001 < fVar27) && (fVar27 < fVar26 * 0.25)) &&
        (fVar26 = *(float *)(lVar19 + 0x84) * *(float *)(lVar19 + 0x84),
        fVar26 * 0.010000001 < fVar28)) &&
       ((fVar28 < fVar26 * 0.25 && (fVar24 * fVar4 * fVar21 + fVar24 * fVar5 * fStack_148 < 0.0))))
    {
      fVar24 = *(float *)(lVar19 + 0xc);
      fVar26 = *(float *)(lVar19 + 0x10);
      if (((fVar5 * *(float *)(lVar11 + 0x1450) + fVar25) - fVar26) *
          *(float *)(*(longlong *)(lVar15 + 0x590) + 0x258c) +
          ((fVar4 * *(float *)(lVar11 + 0x1450) + fVar20) - fVar24) *
          *(float *)(*(longlong *)(lVar15 + 0x590) + 0x2588) < 0.0) {
        uStackX_8 = (float *)CONCAT44((fVar26 + fVar26) - fVar25,(fVar24 + fVar24) - fVar20);
        FUN_18052fef0(lVar15,&uStackX_8,CONCAT71((int7)((ulonglong)lVar11 >> 8),1),0);
        lVar16 = lVar15;
        goto LAB_1805de3df;
      }
    }
  }
  if (((bVar17 != 0) && (iVar10 != 1)) && (*(int *)(lVar11 + 0x1420) == 0)) {
    FUN_1805dc090(param_1,&uStackX_8,lVar16);
    FUN_18052fef0(lVar16,&uStackX_8,*(int *)(lVar16 + 0x570) == 1,0);
LAB_1805de3df:
    puVar12 = (uint64_t *)FUN_180516f50(lVar16,auStack_130);
    *param_2 = *puVar12;
    uVar30 = puVar12[4];
    param_2[3] = puVar12[3];
    param_2[4] = uVar30;
    uVar30 = puVar12[6];
    param_2[5] = puVar12[5];
    param_2[6] = uVar30;
    param_2[1] = puVar12[1];
    param_2[2] = puVar12[2];
    param_2[7] = puVar12[7];
    iVar10 = *(int *)(puVar12 + 8);
    *(int *)(param_2 + 8) = iVar10;
    if (((float)uStackX_8 == *(float *)(param_2 + 3)) &&
       (uStackX_8._4_4_ == *(float *)((longlong)param_2 + 0x1c))) {
      return;
    }
    if (iVar10 != 0) {
      *(int32_t *)(param_2 + 8) = 0;
    }
    param_2[3] = uStackX_8;
    return;
  }
FUN_1805de4c2:
  uStackX_8 = (float *)FUN_1805b6cc0(plVar1);
  if ((*(byte *)(plVar2 + 2) & 1) == 0) {
    FUN_1805d3210(plVar1);
  }
  fVar20 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x1450);
  fVar24 = (fVar20 * uStackX_8[1] + *(float *)((longlong)plVar2 + 0x54)) - *(float *)(lVar18 + 0x10)
  ;
  fVar25 = (fVar20 * *uStackX_8 + *(float *)(plVar2 + 10)) - *pfVar14;
  fVar26 = fVar24 * fVar24 + fVar25 * fVar25;
  fVar26 = fVar26 + (float)(fVar26 <= 1.1754944e-38) * 1.1754944e-38;
  auVar23 = rsqrtss(ZEXT416((uint)fVar26),ZEXT416((uint)fVar26));
  fVar20 = auVar23._0_4_;
  fVar20 = fVar20 * 0.5 * ((float)system_data_01f0 - fVar26 * fVar20 * fVar20);
  fVar25 = fVar20 * fVar25;
  fVar24 = fVar20 * fVar24;
  uVar30 = CONCAT44(fVar24,fVar25);
  uStackX_8 = (float *)CONCAT44(uStackX_8._4_4_,fVar24);
  func_0x0001805b7050(plVar1);
  lVar16 = *(longlong *)(param_1 + 0x20);
  lVar18 = lVar16 + 0x135c;
  cVar9 = func_0x000180522f60(lVar15);
  if (((cVar9 == '\0') && ((*(uint *)(lVar15 + 0x56c) & 0x800) != 0)) && (0.0 < fVar20 * fVar26)) {
    fStack_144 = -fVar25;
    uStack_140 = 0;
    uStack_13c = 0x7f7fffff;
    fStack_148 = fVar24;
    FUN_180534b00(lVar18,auStack_e8,&fStack_148,0x3fc90fdb,plVar29,uVar30,lVar16);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fd400();
}






