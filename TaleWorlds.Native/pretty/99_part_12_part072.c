#include "TaleWorlds.Native.Split.h"

// 99_part_12_part072.c - 1 个函数

// 函数: void FUN_1807fb00c(uint64_t param_1,uint64_t param_2,int param_3,int param_4)
void FUN_1807fb00c(uint64_t param_1,uint64_t param_2,int param_3,int param_4)

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
  int64_t lVar15;
  int iVar16;
  int iVar17;
  int64_t in_RAX;
  float *unaff_RBX;
  float *unaff_RBP;
  int64_t lVar18;
  uint unaff_ESI;
  uint uVar19;
  int64_t unaff_RDI;
  int64_t in_R10;
  int64_t in_R11;
  int64_t lVar20;
  float *pfVar21;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  int iVar22;
  uint64_t unaff_R15;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  uint in_stack_000000b0;
  int in_stack_000000b8;
  int64_t in_stack_000000c8;
  int64_t in_stack_000000d0;
  
  *(uint64_t *)(in_RAX + 8) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  param_3 = param_3 >> 2;
  iVar22 = param_4;
  if (param_3 != 0) {
    *(uint64_t *)(in_RAX + -0x30) = unaff_R13;
    lVar18 = in_R11 + 0x20;
    iVar17 = param_4 * 2;
    iVar16 = param_4 * 3;
    do {
      lVar20 = *(int64_t *)(in_stack_000000c8 + 8 + in_R11 * 0x10);
      fVar1 = *(float *)(in_stack_000000c8 + in_R11 * 0x10);
      fVar2 = *(float *)(in_stack_000000c8 + 4 + in_R11 * 0x10);
      fVar3 = *(float *)(lVar20 + 0x14);
      fVar29 = *(float *)(lVar20 + 0x18);
      fVar23 = (*unaff_RBX - fVar1 * *(float *)(lVar20 + 0x1c)) - fVar2 * *(float *)(lVar20 + 0x20);
      fVar30 = *(float *)(lVar20 + 0x10);
      *(float *)(in_stack_000000c8 + 4 + in_R11 * 0x10) = fVar1;
      *(float *)(in_stack_000000c8 + in_R11 * 0x10) = fVar23;
      lVar20 = *(int64_t *)(in_stack_000000c8 + 8 + lVar18 * 0x10);
      fVar4 = *(float *)(in_stack_000000c8 + 4 + lVar18 * 0x10);
      fVar5 = *(float *)(lVar20 + 0x18);
      fVar6 = *(float *)(in_stack_000000c8 + lVar18 * 0x10);
      fVar26 = *(float *)(lVar20 + 0x14);
      fVar27 = ((fVar1 * fVar3 + fVar23 * fVar30 + fVar2 * fVar29) -
               fVar6 * *(float *)(lVar20 + 0x1c)) - fVar4 * *(float *)(lVar20 + 0x20);
      fVar1 = *(float *)(lVar20 + 0x10);
      *(float *)(in_stack_000000c8 + lVar18 * 0x10) = fVar27;
      *(float *)(in_stack_000000c8 + 4 + lVar18 * 0x10) = fVar6;
      lVar20 = *(int64_t *)(in_R10 + 8 + in_R11 * 0x10);
      fVar2 = *(float *)(in_R10 + in_R11 * 0x10);
      fVar3 = *(float *)(in_R10 + 4 + in_R11 * 0x10);
      fVar29 = *(float *)(lVar20 + 0x14);
      fVar30 = *(float *)(lVar20 + 0x18);
      fVar24 = (*unaff_RBX - fVar2 * *(float *)(lVar20 + 0x1c)) - fVar3 * *(float *)(lVar20 + 0x20);
      fVar23 = *(float *)(lVar20 + 0x10);
      *(float *)(in_R10 + 4 + in_R11 * 0x10) = fVar2;
      *(float *)(in_R10 + in_R11 * 0x10) = fVar24;
      lVar20 = *(int64_t *)(in_R10 + 8 + lVar18 * 0x10);
      fVar7 = *(float *)(in_R10 + 4 + lVar18 * 0x10);
      fVar8 = *(float *)(lVar20 + 0x18);
      fVar9 = *(float *)(in_R10 + lVar18 * 0x10);
      fVar10 = *(float *)(lVar20 + 0x14);
      fVar24 = ((fVar2 * fVar29 + fVar24 * fVar23 + fVar3 * fVar30) -
               fVar9 * *(float *)(lVar20 + 0x1c)) - fVar7 * *(float *)(lVar20 + 0x20);
      fVar2 = *(float *)(lVar20 + 0x10);
      *(float *)(in_R10 + 4 + lVar18 * 0x10) = fVar9;
      *(float *)(in_R10 + lVar18 * 0x10) = fVar24;
      lVar20 = *(int64_t *)(in_stack_000000d0 + 8 + in_R11 * 0x10);
      fVar3 = *(float *)(in_stack_000000d0 + in_R11 * 0x10);
      fVar29 = *(float *)(in_stack_000000d0 + 4 + in_R11 * 0x10);
      fVar30 = *(float *)(lVar20 + 0x18);
      fVar23 = *(float *)(lVar20 + 0x14);
      fVar24 = ((fVar24 * fVar2 + fVar9 * fVar10 + fVar7 * fVar8) -
               fVar3 * *(float *)(lVar20 + 0x1c)) - fVar29 * *(float *)(lVar20 + 0x20);
      fVar2 = *(float *)(lVar20 + 0x10);
      *(float *)(in_stack_000000d0 + 4 + in_R11 * 0x10) = fVar3;
      *(float *)(in_stack_000000d0 + in_R11 * 0x10) = fVar24;
      lVar20 = *(int64_t *)(in_stack_000000d0 + 8 + lVar18 * 0x10);
      fVar7 = *(float *)(in_stack_000000d0 + lVar18 * 0x10);
      fVar8 = *(float *)(lVar20 + 0x14);
      fVar9 = *(float *)(in_stack_000000d0 + 4 + lVar18 * 0x10);
      fVar10 = *(float *)(lVar20 + 0x18);
      fVar28 = ((fVar24 * fVar2 + fVar3 * fVar23 + fVar29 * fVar30) -
               fVar7 * *(float *)(lVar20 + 0x1c)) - fVar9 * *(float *)(lVar20 + 0x20);
      fVar2 = *(float *)(lVar20 + 0x10);
      *(float *)(in_stack_000000d0 + lVar18 * 0x10) = fVar28;
      *(float *)(in_stack_000000d0 + 4 + lVar18 * 0x10) = fVar7;
      lVar20 = *(int64_t *)(unaff_RDI + 8 + in_R11 * 0x10);
      fVar3 = *(float *)(unaff_RDI + in_R11 * 0x10);
      fVar29 = *(float *)(unaff_RDI + 4 + in_R11 * 0x10);
      fVar30 = *(float *)(lVar20 + 0x18);
      fVar23 = *(float *)(lVar20 + 0x14);
      fVar25 = (*unaff_RBX - fVar3 * *(float *)(lVar20 + 0x1c)) - fVar29 * *(float *)(lVar20 + 0x20)
      ;
      fVar24 = *(float *)(lVar20 + 0x10);
      *(float *)(unaff_RDI + in_R11 * 0x10) = fVar25;
      *(float *)(unaff_RDI + 4 + in_R11 * 0x10) = fVar3;
      lVar20 = *(int64_t *)(unaff_RDI + 8 + lVar18 * 0x10);
      fVar11 = *(float *)(unaff_RDI + lVar18 * 0x10);
      fVar12 = *(float *)(unaff_RDI + 4 + lVar18 * 0x10);
      fVar13 = *(float *)(lVar20 + 0x18);
      fVar14 = *(float *)(lVar20 + 0x14);
      fVar29 = ((fVar3 * fVar23 + fVar25 * fVar24 + fVar29 * fVar30) -
               fVar11 * *(float *)(lVar20 + 0x1c)) - fVar12 * *(float *)(lVar20 + 0x20);
      fVar3 = *(float *)(lVar20 + 0x10);
      *(float *)(unaff_RDI + 4 + lVar18 * 0x10) = fVar11;
      *(float *)(unaff_RDI + lVar18 * 0x10) = fVar29;
      *unaff_RBP = (fVar7 * fVar8 + fVar28 * fVar2 + fVar9 * fVar10) * unaff_XMM9_Da +
                   (fVar6 * fVar26 + fVar27 * fVar1 + fVar4 * fVar5) * unaff_XMM10_Da +
                   (fVar11 * fVar14 + fVar29 * fVar3 + fVar12 * fVar13) * unaff_XMM8_Da;
      lVar20 = *(int64_t *)(in_stack_000000c8 + 8 + in_R11 * 0x10);
      fVar1 = *(float *)(in_stack_000000c8 + in_R11 * 0x10);
      fVar2 = *(float *)(in_stack_000000c8 + 4 + in_R11 * 0x10);
      fVar3 = *(float *)(lVar20 + 0x18);
      fVar23 = (unaff_RBX[param_4] - fVar1 * *(float *)(lVar20 + 0x1c)) -
               fVar2 * *(float *)(lVar20 + 0x20);
      fVar29 = *(float *)(lVar20 + 0x14);
      fVar30 = *(float *)(lVar20 + 0x10);
      *(float *)(in_stack_000000c8 + 4 + in_R11 * 0x10) = fVar1;
      *(float *)(in_stack_000000c8 + in_R11 * 0x10) = fVar23;
      lVar20 = *(int64_t *)(in_stack_000000c8 + 8 + lVar18 * 0x10);
      fVar4 = *(float *)(in_stack_000000c8 + 4 + lVar18 * 0x10);
      fVar5 = *(float *)(lVar20 + 0x18);
      fVar6 = *(float *)(in_stack_000000c8 + lVar18 * 0x10);
      fVar26 = *(float *)(lVar20 + 0x14);
      fVar27 = ((fVar1 * fVar29 + fVar23 * fVar30 + fVar2 * fVar3) -
               fVar6 * *(float *)(lVar20 + 0x1c)) - fVar4 * *(float *)(lVar20 + 0x20);
      fVar1 = *(float *)(lVar20 + 0x10);
      *(float *)(in_stack_000000c8 + lVar18 * 0x10) = fVar27;
      *(float *)(in_stack_000000c8 + 4 + lVar18 * 0x10) = fVar6;
      lVar20 = *(int64_t *)(in_R10 + 8 + in_R11 * 0x10);
      fVar2 = *(float *)(in_R10 + in_R11 * 0x10);
      fVar3 = *(float *)(in_R10 + 4 + in_R11 * 0x10);
      fVar29 = *(float *)(lVar20 + 0x14);
      fVar30 = *(float *)(lVar20 + 0x18);
      fVar24 = (unaff_RBX[param_4] - fVar2 * *(float *)(lVar20 + 0x1c)) -
               fVar3 * *(float *)(lVar20 + 0x20);
      fVar23 = *(float *)(lVar20 + 0x10);
      *(float *)(in_R10 + 4 + in_R11 * 0x10) = fVar2;
      *(float *)(in_R10 + in_R11 * 0x10) = fVar24;
      lVar20 = *(int64_t *)(in_R10 + 8 + lVar18 * 0x10);
      fVar7 = *(float *)(in_R10 + 4 + lVar18 * 0x10);
      fVar8 = *(float *)(lVar20 + 0x18);
      fVar9 = *(float *)(in_R10 + lVar18 * 0x10);
      fVar10 = *(float *)(lVar20 + 0x14);
      fVar24 = ((fVar2 * fVar29 + fVar24 * fVar23 + fVar3 * fVar30) -
               fVar9 * *(float *)(lVar20 + 0x1c)) - fVar7 * *(float *)(lVar20 + 0x20);
      fVar2 = *(float *)(lVar20 + 0x10);
      *(float *)(in_R10 + lVar18 * 0x10) = fVar24;
      *(float *)(in_R10 + 4 + lVar18 * 0x10) = fVar9;
      lVar20 = *(int64_t *)(in_stack_000000d0 + 8 + in_R11 * 0x10);
      fVar3 = *(float *)(in_stack_000000d0 + in_R11 * 0x10);
      fVar29 = *(float *)(lVar20 + 0x14);
      fVar30 = *(float *)(in_stack_000000d0 + 4 + in_R11 * 0x10);
      fVar23 = *(float *)(lVar20 + 0x18);
      fVar24 = ((fVar9 * fVar10 + fVar24 * fVar2 + fVar7 * fVar8) -
               fVar3 * *(float *)(lVar20 + 0x1c)) - fVar30 * *(float *)(lVar20 + 0x20);
      fVar2 = *(float *)(lVar20 + 0x10);
      *(float *)(in_stack_000000d0 + 4 + in_R11 * 0x10) = fVar3;
      *(float *)(in_stack_000000d0 + in_R11 * 0x10) = fVar24;
      lVar20 = *(int64_t *)(in_stack_000000d0 + 8 + lVar18 * 0x10);
      fVar7 = *(float *)(in_stack_000000d0 + lVar18 * 0x10);
      fVar8 = *(float *)(in_stack_000000d0 + 4 + lVar18 * 0x10);
      fVar9 = *(float *)(lVar20 + 0x18);
      fVar10 = *(float *)(lVar20 + 0x14);
      fVar28 = ((fVar3 * fVar29 + fVar24 * fVar2 + fVar30 * fVar23) -
               fVar7 * *(float *)(lVar20 + 0x1c)) - fVar8 * *(float *)(lVar20 + 0x20);
      fVar2 = *(float *)(lVar20 + 0x10);
      *(float *)(in_stack_000000d0 + lVar18 * 0x10) = fVar28;
      *(float *)(in_stack_000000d0 + 4 + lVar18 * 0x10) = fVar7;
      lVar20 = *(int64_t *)(unaff_RDI + 8 + in_R11 * 0x10);
      fVar3 = *(float *)(unaff_RDI + in_R11 * 0x10);
      fVar29 = *(float *)(unaff_RDI + 4 + in_R11 * 0x10);
      fVar30 = *(float *)(lVar20 + 0x18);
      fVar23 = *(float *)(lVar20 + 0x14);
      fVar25 = (unaff_RBX[param_4] - fVar3 * *(float *)(lVar20 + 0x1c)) -
               fVar29 * *(float *)(lVar20 + 0x20);
      fVar24 = *(float *)(lVar20 + 0x10);
      *(float *)(unaff_RDI + in_R11 * 0x10) = fVar25;
      *(float *)(unaff_RDI + 4 + in_R11 * 0x10) = fVar3;
      lVar20 = *(int64_t *)(unaff_RDI + 8 + lVar18 * 0x10);
      fVar11 = *(float *)(unaff_RDI + lVar18 * 0x10);
      fVar12 = *(float *)(unaff_RDI + 4 + lVar18 * 0x10);
      fVar13 = *(float *)(lVar20 + 0x18);
      fVar14 = *(float *)(lVar20 + 0x14);
      fVar29 = ((fVar25 * fVar24 + fVar3 * fVar23 + fVar29 * fVar30) -
               fVar11 * *(float *)(lVar20 + 0x1c)) - fVar12 * *(float *)(lVar20 + 0x20);
      fVar3 = *(float *)(lVar20 + 0x10);
      *(float *)(unaff_RDI + lVar18 * 0x10) = fVar29;
      *(float *)(unaff_RDI + 4 + lVar18 * 0x10) = fVar11;
      unaff_RBP[param_4] =
           (fVar28 * fVar2 + fVar7 * fVar10 + fVar8 * fVar9) * unaff_XMM9_Da +
           (fVar6 * fVar26 + fVar27 * fVar1 + fVar4 * fVar5) * unaff_XMM10_Da +
           (fVar29 * fVar3 + fVar11 * fVar14 + fVar12 * fVar13) * unaff_XMM8_Da;
      lVar20 = *(int64_t *)(in_stack_000000c8 + 8 + in_R11 * 0x10);
      fVar1 = *(float *)(in_stack_000000c8 + in_R11 * 0x10);
      fVar2 = *(float *)(in_stack_000000c8 + 4 + in_R11 * 0x10);
      fVar3 = *(float *)(lVar20 + 0x18);
      fVar29 = *(float *)(lVar20 + 0x14);
      fVar23 = (unaff_RBX[iVar17] - fVar1 * *(float *)(lVar20 + 0x1c)) -
               fVar2 * *(float *)(lVar20 + 0x20);
      fVar30 = *(float *)(lVar20 + 0x10);
      *(float *)(in_stack_000000c8 + 4 + in_R11 * 0x10) = fVar1;
      *(float *)(in_stack_000000c8 + in_R11 * 0x10) = fVar23;
      lVar20 = *(int64_t *)(in_stack_000000c8 + 8 + lVar18 * 0x10);
      fVar4 = *(float *)(in_stack_000000c8 + lVar18 * 0x10);
      fVar5 = *(float *)(in_stack_000000c8 + 4 + lVar18 * 0x10);
      fVar6 = *(float *)(lVar20 + 0x18);
      fVar26 = *(float *)(lVar20 + 0x14);
      fVar27 = ((fVar23 * fVar30 + fVar1 * fVar29 + fVar2 * fVar3) -
               fVar4 * *(float *)(lVar20 + 0x1c)) - fVar5 * *(float *)(lVar20 + 0x20);
      fVar1 = *(float *)(lVar20 + 0x10);
      *(float *)(in_stack_000000c8 + lVar18 * 0x10) = fVar27;
      *(float *)(in_stack_000000c8 + 4 + lVar18 * 0x10) = fVar4;
      lVar20 = *(int64_t *)(in_R10 + 8 + in_R11 * 0x10);
      fVar2 = *(float *)(in_R10 + in_R11 * 0x10);
      fVar3 = *(float *)(in_R10 + 4 + in_R11 * 0x10);
      fVar29 = *(float *)(lVar20 + 0x18);
      fVar30 = *(float *)(lVar20 + 0x14);
      fVar24 = (unaff_RBX[iVar17] - fVar2 * *(float *)(lVar20 + 0x1c)) -
               fVar3 * *(float *)(lVar20 + 0x20);
      fVar23 = *(float *)(lVar20 + 0x10);
      *(float *)(in_R10 + 4 + in_R11 * 0x10) = fVar2;
      *(float *)(in_R10 + in_R11 * 0x10) = fVar24;
      lVar20 = *(int64_t *)(in_R10 + 8 + lVar18 * 0x10);
      fVar7 = *(float *)(in_R10 + 4 + lVar18 * 0x10);
      fVar8 = *(float *)(lVar20 + 0x18);
      fVar9 = *(float *)(in_R10 + lVar18 * 0x10);
      fVar10 = *(float *)(lVar20 + 0x14);
      fVar24 = ((fVar24 * fVar23 + fVar2 * fVar30 + fVar3 * fVar29) -
               fVar9 * *(float *)(lVar20 + 0x1c)) - fVar7 * *(float *)(lVar20 + 0x20);
      fVar2 = *(float *)(lVar20 + 0x10);
      *(float *)(in_R10 + lVar18 * 0x10) = fVar24;
      *(float *)(in_R10 + 4 + lVar18 * 0x10) = fVar9;
      lVar20 = *(int64_t *)(in_stack_000000d0 + 8 + in_R11 * 0x10);
      fVar3 = *(float *)(in_stack_000000d0 + in_R11 * 0x10);
      fVar29 = *(float *)(in_stack_000000d0 + 4 + in_R11 * 0x10);
      fVar30 = *(float *)(lVar20 + 0x18);
      fVar23 = *(float *)(lVar20 + 0x14);
      fVar24 = ((fVar24 * fVar2 + fVar9 * fVar10 + fVar7 * fVar8) -
               fVar3 * *(float *)(lVar20 + 0x1c)) - fVar29 * *(float *)(lVar20 + 0x20);
      fVar2 = *(float *)(lVar20 + 0x10);
      *(float *)(in_stack_000000d0 + 4 + in_R11 * 0x10) = fVar3;
      *(float *)(in_stack_000000d0 + in_R11 * 0x10) = fVar24;
      lVar20 = *(int64_t *)(in_stack_000000d0 + 8 + lVar18 * 0x10);
      fVar7 = *(float *)(in_stack_000000d0 + lVar18 * 0x10);
      fVar8 = *(float *)(in_stack_000000d0 + 4 + lVar18 * 0x10);
      fVar9 = *(float *)(lVar20 + 0x18);
      fVar10 = *(float *)(lVar20 + 0x14);
      fVar28 = ((fVar24 * fVar2 + fVar3 * fVar23 + fVar29 * fVar30) -
               fVar7 * *(float *)(lVar20 + 0x1c)) - fVar8 * *(float *)(lVar20 + 0x20);
      fVar2 = *(float *)(lVar20 + 0x10);
      *(float *)(in_stack_000000d0 + lVar18 * 0x10) = fVar28;
      *(float *)(in_stack_000000d0 + 4 + lVar18 * 0x10) = fVar7;
      lVar20 = *(int64_t *)(unaff_RDI + 8 + in_R11 * 0x10);
      fVar3 = *(float *)(unaff_RDI + in_R11 * 0x10);
      fVar29 = *(float *)(unaff_RDI + 4 + in_R11 * 0x10);
      fVar30 = *(float *)(lVar20 + 0x14);
      fVar23 = *(float *)(lVar20 + 0x18);
      fVar25 = (unaff_RBX[iVar17] - fVar3 * *(float *)(lVar20 + 0x1c)) -
               fVar29 * *(float *)(lVar20 + 0x20);
      fVar24 = *(float *)(lVar20 + 0x10);
      *(float *)(unaff_RDI + in_R11 * 0x10) = fVar25;
      *(float *)(unaff_RDI + 4 + in_R11 * 0x10) = fVar3;
      lVar20 = *(int64_t *)(unaff_RDI + 8 + lVar18 * 0x10);
      fVar11 = *(float *)(unaff_RDI + lVar18 * 0x10);
      fVar12 = *(float *)(unaff_RDI + 4 + lVar18 * 0x10);
      fVar13 = *(float *)(lVar20 + 0x18);
      fVar14 = *(float *)(lVar20 + 0x14);
      fVar29 = ((fVar3 * fVar30 + fVar25 * fVar24 + fVar29 * fVar23) -
               fVar11 * *(float *)(lVar20 + 0x1c)) - fVar12 * *(float *)(lVar20 + 0x20);
      fVar3 = *(float *)(lVar20 + 0x10);
      *(float *)(unaff_RDI + lVar18 * 0x10) = fVar29;
      *(float *)(unaff_RDI + 4 + lVar18 * 0x10) = fVar11;
      unaff_RBP[iVar17] =
           (fVar7 * fVar10 + fVar28 * fVar2 + fVar8 * fVar9) * unaff_XMM9_Da +
           (fVar27 * fVar1 + fVar4 * fVar26 + fVar5 * fVar6) * unaff_XMM10_Da +
           (fVar29 * fVar3 + fVar11 * fVar14 + fVar12 * fVar13) * unaff_XMM8_Da;
      lVar20 = *(int64_t *)(in_stack_000000c8 + 8 + in_R11 * 0x10);
      fVar1 = *(float *)(in_stack_000000c8 + in_R11 * 0x10);
      fVar2 = *(float *)(in_stack_000000c8 + 4 + in_R11 * 0x10);
      fVar3 = *(float *)(lVar20 + 0x18);
      fVar29 = *(float *)(lVar20 + 0x14);
      fVar26 = (unaff_RBX[iVar16] - fVar1 * *(float *)(lVar20 + 0x1c)) -
               fVar2 * *(float *)(lVar20 + 0x20);
      fVar30 = *(float *)(lVar20 + 0x10);
      *(float *)(in_stack_000000c8 + 4 + in_R11 * 0x10) = fVar1;
      *(float *)(in_stack_000000c8 + in_R11 * 0x10) = fVar26;
      lVar20 = *(int64_t *)(in_stack_000000c8 + 8 + lVar18 * 0x10);
      fVar4 = *(float *)(in_stack_000000c8 + 4 + lVar18 * 0x10);
      fVar5 = *(float *)(in_stack_000000c8 + lVar18 * 0x10);
      fVar6 = *(float *)(lVar20 + 0x18);
      fVar27 = ((fVar26 * fVar30 + fVar1 * fVar29 + fVar2 * fVar3) -
               fVar5 * *(float *)(lVar20 + 0x1c)) - fVar4 * *(float *)(lVar20 + 0x20);
      fVar1 = *(float *)(lVar20 + 0x14);
      fVar2 = *(float *)(lVar20 + 0x10);
      *(float *)(in_stack_000000c8 + lVar18 * 0x10) = fVar27;
      *(float *)(in_stack_000000c8 + 4 + lVar18 * 0x10) = fVar5;
      lVar20 = *(int64_t *)(in_R10 + 8 + in_R11 * 0x10);
      fVar3 = *(float *)(in_R10 + in_R11 * 0x10);
      fVar29 = *(float *)(in_R10 + 4 + in_R11 * 0x10);
      fVar30 = *(float *)(lVar20 + 0x14);
      fVar26 = *(float *)(lVar20 + 0x18);
      fVar24 = (unaff_RBX[iVar16] - fVar3 * *(float *)(lVar20 + 0x1c)) -
               fVar29 * *(float *)(lVar20 + 0x20);
      fVar23 = *(float *)(lVar20 + 0x10);
      *(float *)(in_R10 + 4 + in_R11 * 0x10) = fVar3;
      *(float *)(in_R10 + in_R11 * 0x10) = fVar24;
      lVar20 = *(int64_t *)(in_R10 + 8 + lVar18 * 0x10);
      fVar7 = *(float *)(in_R10 + 4 + lVar18 * 0x10);
      fVar8 = *(float *)(lVar20 + 0x18);
      fVar9 = *(float *)(in_R10 + lVar18 * 0x10);
      fVar10 = *(float *)(lVar20 + 0x14);
      fVar24 = ((fVar3 * fVar30 + fVar24 * fVar23 + fVar29 * fVar26) -
               fVar9 * *(float *)(lVar20 + 0x1c)) - fVar7 * *(float *)(lVar20 + 0x20);
      fVar3 = *(float *)(lVar20 + 0x10);
      *(float *)(in_R10 + lVar18 * 0x10) = fVar24;
      *(float *)(in_R10 + 4 + lVar18 * 0x10) = fVar9;
      lVar20 = *(int64_t *)(in_stack_000000d0 + 8 + in_R11 * 0x10);
      fVar29 = *(float *)(in_stack_000000d0 + in_R11 * 0x10);
      fVar30 = *(float *)(lVar20 + 0x14);
      fVar26 = *(float *)(in_stack_000000d0 + 4 + in_R11 * 0x10);
      fVar23 = *(float *)(lVar20 + 0x18);
      fVar24 = ((fVar9 * fVar10 + fVar24 * fVar3 + fVar7 * fVar8) -
               fVar29 * *(float *)(lVar20 + 0x1c)) - fVar26 * *(float *)(lVar20 + 0x20);
      fVar3 = *(float *)(lVar20 + 0x10);
      *(float *)(in_stack_000000d0 + 4 + in_R11 * 0x10) = fVar29;
      *(float *)(in_stack_000000d0 + in_R11 * 0x10) = fVar24;
      lVar20 = *(int64_t *)(in_stack_000000d0 + 8 + lVar18 * 0x10);
      fVar7 = *(float *)(in_stack_000000d0 + lVar18 * 0x10);
      fVar8 = *(float *)(lVar20 + 0x14);
      fVar9 = *(float *)(in_stack_000000d0 + 4 + lVar18 * 0x10);
      fVar10 = *(float *)(lVar20 + 0x18);
      fVar28 = ((fVar29 * fVar30 + fVar24 * fVar3 + fVar26 * fVar23) -
               fVar7 * *(float *)(lVar20 + 0x1c)) - fVar9 * *(float *)(lVar20 + 0x20);
      fVar3 = *(float *)(lVar20 + 0x10);
      *(float *)(in_stack_000000d0 + lVar18 * 0x10) = fVar28;
      *(float *)(in_stack_000000d0 + 4 + lVar18 * 0x10) = fVar7;
      lVar20 = *(int64_t *)(unaff_RDI + 8 + in_R11 * 0x10);
      pfVar21 = unaff_RBX + iVar16;
      unaff_RBX = unaff_RBX + param_4 * 4;
      fVar29 = *(float *)(unaff_RDI + in_R11 * 0x10);
      fVar30 = *(float *)(unaff_RDI + 4 + in_R11 * 0x10);
      fVar26 = *(float *)(lVar20 + 0x14);
      fVar23 = *(float *)(lVar20 + 0x18);
      fVar25 = (*pfVar21 - fVar29 * *(float *)(lVar20 + 0x1c)) - fVar30 * *(float *)(lVar20 + 0x20);
      fVar24 = *(float *)(lVar20 + 0x10);
      *(float *)(unaff_RDI + 4 + in_R11 * 0x10) = fVar29;
      *(float *)(unaff_RDI + in_R11 * 0x10) = fVar25;
      lVar20 = *(int64_t *)(unaff_RDI + 8 + lVar18 * 0x10);
      fVar11 = *(float *)(unaff_RDI + 4 + lVar18 * 0x10);
      fVar12 = *(float *)(lVar20 + 0x18);
      fVar13 = *(float *)(unaff_RDI + lVar18 * 0x10);
      fVar14 = *(float *)(lVar20 + 0x14);
      fVar30 = ((fVar29 * fVar26 + fVar25 * fVar24 + fVar30 * fVar23) -
               fVar13 * *(float *)(lVar20 + 0x1c)) - fVar11 * *(float *)(lVar20 + 0x20);
      fVar29 = *(float *)(lVar20 + 0x10);
      *(float *)(unaff_RDI + 4 + lVar18 * 0x10) = fVar13;
      *(float *)(unaff_RDI + lVar18 * 0x10) = fVar30;
      unaff_RBP[iVar16] =
           (fVar7 * fVar8 + fVar28 * fVar3 + fVar9 * fVar10) * unaff_XMM9_Da +
           (fVar5 * fVar1 + fVar27 * fVar2 + fVar4 * fVar6) * unaff_XMM10_Da +
           (fVar13 * fVar14 + fVar30 * fVar29 + fVar11 * fVar12) * unaff_XMM8_Da;
      unaff_RBP = unaff_RBP + param_4 * 4;
      param_3 = param_3 + -1;
      unaff_ESI = in_stack_000000b0;
      iVar22 = in_stack_000000b8;
    } while (param_3 != 0);
  }
  uVar19 = unaff_ESI & 3;
  if (uVar19 != 0) {
    lVar20 = in_R11 + 0x20;
    pfVar21 = (float *)(lVar20 * 0x10 + unaff_RDI);
    lVar18 = (int64_t)unaff_RBP - (int64_t)unaff_RBX;
    do {
      lVar15 = *(int64_t *)(in_stack_000000c8 + 8 + in_R11 * 0x10);
      fVar1 = *(float *)(in_stack_000000c8 + in_R11 * 0x10);
      fVar2 = *(float *)(in_stack_000000c8 + 4 + in_R11 * 0x10);
      fVar3 = *(float *)(lVar15 + 0x14);
      fVar29 = *(float *)(lVar15 + 0x18);
      fVar23 = (*unaff_RBX - fVar1 * *(float *)(lVar15 + 0x1c)) - fVar2 * *(float *)(lVar15 + 0x20);
      fVar30 = *(float *)(lVar15 + 0x10);
      *(float *)(in_stack_000000c8 + 4 + in_R11 * 0x10) = fVar1;
      *(float *)(in_stack_000000c8 + in_R11 * 0x10) = fVar23;
      lVar15 = *(int64_t *)(in_stack_000000c8 + 8 + lVar20 * 0x10);
      fVar4 = *(float *)(in_stack_000000c8 + 4 + lVar20 * 0x10);
      fVar5 = *(float *)(lVar15 + 0x18);
      fVar6 = *(float *)(in_stack_000000c8 + lVar20 * 0x10);
      fVar26 = *(float *)(lVar15 + 0x14);
      fVar27 = ((fVar1 * fVar3 + fVar23 * fVar30 + fVar2 * fVar29) -
               fVar6 * *(float *)(lVar15 + 0x1c)) - fVar4 * *(float *)(lVar15 + 0x20);
      fVar1 = *(float *)(lVar15 + 0x10);
      *(float *)(in_stack_000000c8 + lVar20 * 0x10) = fVar27;
      *(float *)(in_stack_000000c8 + 4 + lVar20 * 0x10) = fVar6;
      lVar15 = *(int64_t *)(in_R10 + 8 + in_R11 * 0x10);
      fVar2 = *(float *)(in_R10 + in_R11 * 0x10);
      fVar3 = *(float *)(in_R10 + 4 + in_R11 * 0x10);
      fVar29 = *(float *)(lVar15 + 0x18);
      fVar30 = *(float *)(lVar15 + 0x14);
      fVar24 = (*unaff_RBX - fVar2 * *(float *)(lVar15 + 0x1c)) - fVar3 * *(float *)(lVar15 + 0x20);
      fVar23 = *(float *)(lVar15 + 0x10);
      *(float *)(in_R10 + 4 + in_R11 * 0x10) = fVar2;
      *(float *)(in_R10 + in_R11 * 0x10) = fVar24;
      lVar15 = *(int64_t *)(in_R10 + 8 + lVar20 * 0x10);
      fVar7 = *(float *)(in_R10 + 4 + lVar20 * 0x10);
      fVar8 = *(float *)(lVar15 + 0x18);
      fVar9 = *(float *)(in_R10 + lVar20 * 0x10);
      fVar10 = *(float *)(lVar15 + 0x14);
      fVar24 = ((fVar24 * fVar23 + fVar2 * fVar30 + fVar3 * fVar29) -
               fVar9 * *(float *)(lVar15 + 0x1c)) - fVar7 * *(float *)(lVar15 + 0x20);
      fVar2 = *(float *)(lVar15 + 0x10);
      *(float *)(in_R10 + 4 + lVar20 * 0x10) = fVar9;
      *(float *)(in_R10 + lVar20 * 0x10) = fVar24;
      lVar15 = *(int64_t *)(in_stack_000000d0 + 8 + in_R11 * 0x10);
      fVar3 = *(float *)(in_stack_000000d0 + in_R11 * 0x10);
      fVar29 = *(float *)(in_stack_000000d0 + 4 + in_R11 * 0x10);
      fVar30 = *(float *)(lVar15 + 0x18);
      fVar23 = *(float *)(lVar15 + 0x14);
      fVar24 = ((fVar24 * fVar2 + fVar9 * fVar10 + fVar7 * fVar8) -
               fVar3 * *(float *)(lVar15 + 0x1c)) - fVar29 * *(float *)(lVar15 + 0x20);
      fVar2 = *(float *)(lVar15 + 0x10);
      *(float *)(in_stack_000000d0 + in_R11 * 0x10) = fVar24;
      *(float *)(in_stack_000000d0 + 4 + in_R11 * 0x10) = fVar3;
      lVar15 = *(int64_t *)(in_stack_000000d0 + 8 + lVar20 * 0x10);
      fVar7 = *(float *)(in_stack_000000d0 + lVar20 * 0x10);
      fVar8 = *(float *)(in_stack_000000d0 + 4 + lVar20 * 0x10);
      fVar9 = *(float *)(lVar15 + 0x18);
      fVar10 = *(float *)(lVar15 + 0x14);
      fVar28 = ((fVar24 * fVar2 + fVar3 * fVar23 + fVar29 * fVar30) -
               fVar7 * *(float *)(lVar15 + 0x1c)) - fVar8 * *(float *)(lVar15 + 0x20);
      fVar2 = *(float *)(lVar15 + 0x10);
      *(float *)(in_stack_000000d0 + lVar20 * 0x10) = fVar28;
      *(float *)(in_stack_000000d0 + 4 + lVar20 * 0x10) = fVar7;
      lVar15 = *(int64_t *)(unaff_RDI + 8 + in_R11 * 0x10);
      fVar3 = *(float *)(unaff_RDI + in_R11 * 0x10);
      fVar29 = *(float *)(unaff_RDI + 4 + in_R11 * 0x10);
      fVar30 = *(float *)(lVar15 + 0x18);
      fVar23 = *(float *)(lVar15 + 0x14);
      fVar25 = (*unaff_RBX - fVar3 * *(float *)(lVar15 + 0x1c)) - fVar29 * *(float *)(lVar15 + 0x20)
      ;
      fVar24 = *(float *)(lVar15 + 0x10);
      *(float *)(unaff_RDI + 4 + in_R11 * 0x10) = fVar3;
      *(float *)(unaff_RDI + in_R11 * 0x10) = fVar25;
      lVar15 = *(int64_t *)(pfVar21 + 2);
      fVar11 = pfVar21[1];
      fVar12 = *(float *)(lVar15 + 0x18);
      fVar13 = *pfVar21;
      fVar14 = *(float *)(lVar15 + 0x14);
      fVar29 = ((fVar25 * fVar24 + fVar3 * fVar23 + fVar29 * fVar30) -
               fVar13 * *(float *)(lVar15 + 0x1c)) - fVar11 * *(float *)(lVar15 + 0x20);
      fVar3 = *(float *)(lVar15 + 0x10);
      pfVar21[1] = fVar13;
      *pfVar21 = fVar29;
      *(float *)((int64_t)unaff_RBX + lVar18) =
           (fVar28 * fVar2 + fVar7 * fVar10 + fVar8 * fVar9) * unaff_XMM9_Da +
           (fVar27 * fVar1 + fVar6 * fVar26 + fVar4 * fVar5) * unaff_XMM10_Da +
           (fVar29 * fVar3 + fVar13 * fVar14 + fVar11 * fVar12) * unaff_XMM8_Da;
      unaff_RBX = unaff_RBX + iVar22;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  return;
}






