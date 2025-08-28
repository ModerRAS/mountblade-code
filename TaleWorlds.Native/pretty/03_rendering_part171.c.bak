#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part171.c - 4 个函数

// 函数: void FUN_1803736b9(uint64_t param_1,int *param_2,uint64_t param_3,longlong param_4)
void FUN_1803736b9(uint64_t param_1,int *param_2,uint64_t param_3,longlong param_4)

{
  uint uVar1;
  ulonglong uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t *puVar10;
  int *in_RAX;
  longlong lVar11;
  uint64_t uVar12;
  int *piVar13;
  ulonglong uVar14;
  int *piVar15;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  int in_R10D;
  longlong in_R11;
  int32_t unaff_R12D;
  int32_t unaff_000000a4;
  ulonglong unaff_R14;
  int unaff_R15D;
  float fVar20;
  float fVar21;
  float fVar22;
  float unaff_XMM6_Da;
  int in_stack_00000040;
  uint64_t in_stack_00000048;
  int in_stack_00000050;
  uint64_t in_stack_00000058;
  uint64_t in_stack_00000060;
  longlong in_stack_00000068;
  int *in_stack_00000070;
  longlong in_stack_00000078;
  
code_r0x0001803736b9:
  if (in_RAX == (int *)0x0) goto LAB_180373562;
  lVar19 = *(longlong *)(unaff_RBX + 0x118);
  in_stack_00000070 = in_RAX;
  puVar10 = &stack0x00000070;
  in_stack_00000078 = in_R11;
  do {
    piVar13 = *(int **)(param_4 + lVar19 * 8);
    if ((int *)*puVar10 != piVar13) {
      iVar18 = (int)unaff_RSI;
      iVar17 = (int)unaff_R14;
      iVar16 = iVar18 * in_R10D + iVar17;
      for (; (piVar15 = piVar13, param_2 != (int *)0x0 && (piVar15 = param_2, iVar16 != *param_2));
          param_2 = *(int **)(param_2 + 4)) {
      }
      if (piVar15 == piVar13) {
        uVar9 = FUN_18062b1e0(system_memory_pool_ptr,0x178,8,3);
        in_stack_00000050 = iVar16;
        in_stack_00000058 = FUN_180372430(uVar9,*(uint64_t *)(unaff_RBX + 0x68));
        puVar10 = (uint64_t *)FUN_18037f020(unaff_RBX + 0x108);
        piVar15 = (int *)*puVar10;
      }
      lVar19 = *(longlong *)(piVar15 + 2);
      fVar22 = *(float *)(lVar19 + 0x28);
      if (fVar22 < *(float *)(lVar19 + 0x18)) {
        *(int32_t *)(lVar19 + 0x48) = unaff_R12D;
        *(uint64_t *)(lVar19 + 0x18) = 0;
        *(uint64_t *)(lVar19 + 0x20) = 0;
        *(uint64_t *)(lVar19 + 0x28) = 0;
        *(uint64_t *)(lVar19 + 0x30) = 0;
        *(uint64_t *)(lVar19 + 0x38) = 0;
        *(uint64_t *)(lVar19 + 0x40) = 0;
      }
      else {
        fVar20 = (fVar22 + *(float *)(lVar19 + 0x18)) * unaff_XMM6_Da;
        *(float *)(lVar19 + 0x38) = fVar20;
        *(float *)(lVar19 + 0x3c) =
             (*(float *)(lVar19 + 0x2c) + *(float *)(lVar19 + 0x1c)) * unaff_XMM6_Da;
        *(float *)(lVar19 + 0x40) =
             (*(float *)(lVar19 + 0x30) + *(float *)(lVar19 + 0x20)) * unaff_XMM6_Da;
        *(int32_t *)(lVar19 + 0x44) = 0x7f7fffff;
        fVar22 = fVar22 - fVar20;
        fVar20 = *(float *)(lVar19 + 0x30) - *(float *)(lVar19 + 0x40);
        fVar21 = *(float *)(lVar19 + 0x2c) - *(float *)(lVar19 + 0x3c);
        *(float *)(lVar19 + 0x48) = SQRT(fVar21 * fVar21 + fVar22 * fVar22 + fVar20 * fVar20);
      }
      iVar16 = *(int *)(unaff_RBX + 0x58);
      uVar1 = *(uint *)(unaff_RBX + 0x118);
      lVar19 = *(longlong *)(unaff_RBX + 0x110);
      *(int32_t *)(unaff_RBP + 0x90) = 0;
      *(int32_t *)(unaff_RBP + 0x94) = 0;
      *(int32_t *)(unaff_RBP + 0x98) = 0;
      *(int32_t *)(unaff_RBP + 0x9c) = 0x7f7fffff;
      *(int32_t *)(unaff_RBP + 0xa0) = 0;
      *(int32_t *)(unaff_RBP + 0xa4) = 0;
      *(int32_t *)(unaff_RBP + 0xa8) = 0;
      *(int32_t *)(unaff_RBP + 0xac) = 0x7f7fffff;
      *(int32_t *)(unaff_RBP + 0xb0) = 0;
      *(int32_t *)(unaff_RBP + 0xb4) = 0;
      *(int32_t *)(unaff_RBP + 0xb8) = 0;
      *(int32_t *)(unaff_RBP + 0xbc) = 0x7f7fffff;
      iVar16 = iVar16 * iVar18 + iVar17;
      *(ulonglong *)(unaff_RBP + 0x140) = CONCAT44(unaff_000000a4,unaff_R12D);
      *(uint64_t *)(unaff_RBP + 0xc0) = 0;
      *(uint64_t *)(unaff_RBP + 200) = 0;
      *(uint64_t *)(unaff_RBP + 0xd0) = 0;
      *(uint64_t *)(unaff_RBP + 0xd8) = 0;
      *(uint64_t *)(unaff_RBP + 0xe0) = 0;
      *(uint64_t *)(unaff_RBP + 0xe8) = 0;
      *(uint64_t *)(unaff_RBP + 0xf0) = 0;
      *(uint64_t *)(unaff_RBP + 0xf8) = 0;
      piVar13 = *(int **)(lVar19 + ((ulonglong)(longlong)iVar16 % (ulonglong)uVar1) * 8);
      *(uint64_t *)(unaff_RBP + 0x100) = 0;
      *(uint64_t *)(unaff_RBP + 0x108) = 0;
      *(uint64_t *)(unaff_RBP + 0x110) = 0;
      *(uint64_t *)(unaff_RBP + 0x118) = 0;
      *(uint64_t *)(unaff_RBP + 0x120) = 0;
      *(uint64_t *)(unaff_RBP + 0x128) = 0;
      *(uint64_t *)(unaff_RBP + 0x130) = 0;
      *(uint64_t *)(unaff_RBP + 0x138) = 0;
      for (; piVar13 != (int *)0x0; piVar13 = *(int **)(piVar13 + 4)) {
        if (iVar16 == *piVar13) goto LAB_180373799;
      }
      piVar13 = *(int **)(lVar19 + *(longlong *)(unaff_RBX + 0x118) * 8);
LAB_180373799:
      if (piVar13 == *(int **)(lVar19 + *(longlong *)(unaff_RBX + 0x118) * 8)) {
        uVar9 = FUN_18062b1e0(system_memory_pool_ptr,0x178,8,3);
        in_stack_00000040 = iVar16;
        in_stack_00000048 = FUN_180372430(uVar9,*(uint64_t *)(unaff_RBX + 0x68));
        puVar10 = (uint64_t *)FUN_18037f020(unaff_RBX + 0x108,unaff_RBP + -0x18,&stack0x00000040);
        piVar13 = (int *)*puVar10;
      }
      uVar9 = FUN_18063ad30(unaff_RBP + 0x90,*(longlong *)(piVar13 + 2) + 0x18,&system_data_0300);
      lVar11 = FUN_180372570(uVar9,unaff_RSI & 0xffffffff,unaff_R14 & 0xffffffff);
      uVar1 = *(uint *)(unaff_RBX + 0x118);
      lVar19 = *(longlong *)(unaff_RBX + 0x110);
      iVar17 = *(int *)(unaff_RBX + 0x58) * iVar18 + iVar17;
      *(float *)(unaff_RBP + 0x144) = (float)*(int *)(lVar11 + 0x110);
      for (piVar13 = *(int **)(lVar19 + ((ulonglong)(longlong)iVar17 % (ulonglong)uVar1) * 8);
          piVar13 != (int *)0x0; piVar13 = *(int **)(piVar13 + 4)) {
        if (iVar17 == *piVar13) goto LAB_180373878;
      }
      piVar13 = *(int **)(lVar19 + *(longlong *)(unaff_RBX + 0x118) * 8);
LAB_180373878:
      if (piVar13 == *(int **)(lVar19 + *(longlong *)(unaff_RBX + 0x118) * 8)) {
        uVar12 = FUN_18062b1e0(system_memory_pool_ptr,0x178,8,3);
        uVar9 = *(uint64_t *)(unaff_RBX + 0x68);
        *(int *)(unaff_RBP + -0x78) = iVar17;
        uVar9 = FUN_180372430(uVar12,uVar9);
        *(uint64_t *)(unaff_RBP + -0x70) = uVar9;
        puVar10 = (uint64_t *)FUN_18037f020(unaff_RBX + 0x108,unaff_RBP + -0x30,unaff_RBP + -0x78)
        ;
        piVar13 = (int *)*puVar10;
      }
      lVar19 = *(longlong *)(piVar13 + 2);
      uVar9 = *(uint64_t *)(unaff_RBP + 0x98);
      uVar12 = *(uint64_t *)(unaff_RBP + 0xa0);
      uVar7 = *(uint64_t *)(unaff_RBP + 0xa8);
      *(uint64_t *)(lVar19 + 0x4c) = *(uint64_t *)(unaff_RBP + 0x90);
      *(uint64_t *)(lVar19 + 0x54) = uVar9;
      uVar9 = *(uint64_t *)(unaff_RBP + 0xb0);
      uVar8 = *(uint64_t *)(unaff_RBP + 0xb8);
      *(uint64_t *)(lVar19 + 0x5c) = uVar12;
      *(uint64_t *)(lVar19 + 100) = uVar7;
      uVar12 = *(uint64_t *)(unaff_RBP + 0xc0);
      uVar7 = *(uint64_t *)(unaff_RBP + 200);
      *(uint64_t *)(lVar19 + 0x6c) = uVar9;
      *(uint64_t *)(lVar19 + 0x74) = uVar8;
      uVar9 = *(uint64_t *)(unaff_RBP + 0xd0);
      uVar8 = *(uint64_t *)(unaff_RBP + 0xd8);
      *(uint64_t *)(lVar19 + 0x7c) = uVar12;
      *(uint64_t *)(lVar19 + 0x84) = uVar7;
      uVar12 = *(uint64_t *)(unaff_RBP + 0xe0);
      uVar7 = *(uint64_t *)(unaff_RBP + 0xe8);
      *(uint64_t *)(lVar19 + 0x8c) = uVar9;
      *(uint64_t *)(lVar19 + 0x94) = uVar8;
      uVar9 = *(uint64_t *)(unaff_RBP + 0xf0);
      uVar8 = *(uint64_t *)(unaff_RBP + 0xf8);
      *(uint64_t *)(lVar19 + 0x9c) = uVar12;
      *(uint64_t *)(lVar19 + 0xa4) = uVar7;
      uVar12 = *(uint64_t *)(unaff_RBP + 0x100);
      uVar7 = *(uint64_t *)(unaff_RBP + 0x108);
      *(uint64_t *)(lVar19 + 0xac) = uVar9;
      *(uint64_t *)(lVar19 + 0xb4) = uVar8;
      uVar9 = *(uint64_t *)(unaff_RBP + 0x110);
      uVar8 = *(uint64_t *)(unaff_RBP + 0x118);
      *(uint64_t *)(lVar19 + 0xbc) = uVar12;
      *(uint64_t *)(lVar19 + 0xc4) = uVar7;
      uVar3 = *(int32_t *)(unaff_RBP + 0x120);
      uVar4 = *(int32_t *)(unaff_RBP + 0x124);
      uVar5 = *(int32_t *)(unaff_RBP + 0x128);
      uVar6 = *(int32_t *)(unaff_RBP + 300);
      *(uint64_t *)(lVar19 + 0xcc) = uVar9;
      *(uint64_t *)(lVar19 + 0xd4) = uVar8;
      uVar12 = *(uint64_t *)(unaff_RBP + 0x130);
      uVar7 = *(uint64_t *)(unaff_RBP + 0x138);
      uVar9 = *(uint64_t *)(unaff_RBP + 0x140);
      *(int32_t *)(lVar19 + 0xdc) = uVar3;
      *(int32_t *)(lVar19 + 0xe0) = uVar4;
      *(int32_t *)(lVar19 + 0xe4) = uVar5;
      *(int32_t *)(lVar19 + 0xe8) = uVar6;
      *(uint64_t *)(lVar19 + 0xec) = uVar12;
      *(uint64_t *)(lVar19 + 0xf4) = uVar7;
      *(uint64_t *)(lVar19 + 0xfc) = uVar9;
    }
    in_R10D = *(int *)(unaff_RBX + 0x58);
    unaff_R15D = unaff_R15D + 1;
    iVar18 = *(int *)(unaff_RBX + 0x54);
    if (iVar18 * in_R10D <= unaff_R15D) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x150) ^ (ulonglong)&stack0x00000000);
    }
    uVar14 = (longlong)unaff_R15D / (longlong)iVar18;
    uVar2 = (longlong)unaff_R15D % (longlong)iVar18;
    param_4 = *(longlong *)(unaff_RBX + 0x110);
    unaff_RSI = uVar2 & 0xffffffff;
    unaff_R14 = uVar14 & 0xffffffff;
    iVar18 = in_R10D * (int)uVar2 + (int)uVar14;
    uVar14 = (ulonglong)(longlong)iVar18 % (ulonglong)*(uint *)(unaff_RBX + 0x118);
    in_R11 = param_4 + uVar14 * 8;
    param_2 = *(int **)(param_4 + uVar14 * 8);
    for (in_RAX = param_2; in_RAX != (int *)0x0; in_RAX = *(int **)(in_RAX + 4)) {
      if (iVar18 == *in_RAX) goto code_r0x0001803736b9;
    }
LAB_180373562:
    lVar19 = *(longlong *)(unaff_RBX + 0x118);
    in_stack_00000060 = *(uint64_t *)(param_4 + lVar19 * 8);
    puVar10 = &stack0x00000060;
    in_stack_00000068 = param_4 + lVar19 * 8;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803739af(uint64_t param_1,code *param_2)
void FUN_1803739af(uint64_t param_1,code *param_2)

{
  uint uVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  longlong lVar12;
  uint64_t uVar13;
  uint64_t *puVar14;
  longlong lVar15;
  int *piVar16;
  longlong lVar17;
  uint64_t uVar18;
  float *pfVar19;
  int iVar20;
  ulonglong uVar21;
  int *piVar22;
  longlong unaff_RBX;
  longlong unaff_RBP;
  float *unaff_RSI;
  int iVar23;
  longlong *unaff_RDI;
  int iVar24;
  int iVar25;
  longlong unaff_R13;
  int unaff_R14D;
  int iVar26;
  int unaff_R15D;
  float fVar27;
  float fVar28;
  float fVar29;
  float unaff_XMM8_Da;
  float fVar30;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float fVar31;
  float fVar32;
  longlong in_stack_00000030;
  int in_stack_00000040;
  uint64_t in_stack_00000048;
  int in_stack_00000050;
  uint64_t in_stack_00000058;
  uint64_t in_stack_00000060;
  longlong in_stack_00000068;
  int *in_stack_00000070;
  longlong in_stack_00000078;
  
code_r0x0001803739af:
  pfVar19 = (float *)(*param_2)(unaff_RDI);
  do {
    fVar27 = *pfVar19;
    fVar28 = pfVar19[1];
    fVar29 = pfVar19[2];
    fVar31 = pfVar19[3];
    uVar1 = *(uint *)(unaff_RBX + 0x118);
    fVar32 = pfVar19[4];
    fVar5 = pfVar19[5];
    fVar6 = pfVar19[6];
    fVar7 = pfVar19[7];
    iVar25 = *(int *)(unaff_RBX + 0x58);
    fVar30 = unaff_RSI[6];
    lVar15 = *(longlong *)(unaff_RBX + 0x110);
    *(float *)(unaff_RBP + -0x68) = fVar27;
    *(float *)(unaff_RBP + -100) = fVar28;
    *(float *)(unaff_RBP + -0x60) = fVar29;
    *(float *)(unaff_RBP + -0x5c) = fVar31;
    iVar25 = iVar25 * unaff_R15D + unaff_R14D;
    *(float *)(unaff_RBP + -0x58) = fVar32;
    *(float *)(unaff_RBP + -0x54) = fVar5;
    *(float *)(unaff_RBP + -0x50) = fVar6;
    *(float *)(unaff_RBP + -0x4c) = fVar7;
    fVar27 = fVar27 * fVar30 + unaff_XMM8_Da;
    fVar28 = fVar32 * fVar30 + unaff_XMM8_Da;
    fVar31 = *(float *)(unaff_RBP + -100) * fVar30 + unaff_XMM9_Da;
    fVar32 = *(float *)(unaff_RBP + -0x60) * fVar30 + unaff_XMM10_Da;
    fVar29 = *(float *)(unaff_RBP + -0x54) * fVar30 + unaff_XMM9_Da;
    fVar30 = *(float *)(unaff_RBP + -0x50) * fVar30 + unaff_XMM10_Da;
    for (piVar16 = *(int **)(lVar15 + ((ulonglong)(longlong)iVar25 % (ulonglong)uVar1) * 8);
        piVar16 != (int *)0x0; piVar16 = *(int **)(piVar16 + 4)) {
      if (iVar25 == *piVar16) {
        lVar17 = *(longlong *)(unaff_RBX + 0x118);
        goto LAB_18037321d;
      }
    }
    lVar17 = *(longlong *)(unaff_RBX + 0x118);
    piVar16 = *(int **)(lVar15 + lVar17 * 8);
LAB_18037321d:
    if (piVar16 == *(int **)(lVar15 + lVar17 * 8)) {
      uVar13 = FUN_18062b1e0(system_memory_pool_ptr,0x178,8,3);
      in_stack_00000060 = CONCAT44(in_stack_00000060._4_4_,iVar25);
      in_stack_00000068 = FUN_180372430(uVar13,*(uint64_t *)(unaff_RBX + 0x68));
      puVar14 = (uint64_t *)FUN_18037f020(unaff_RBX + 0x108,unaff_RBP + -0x18,&stack0x00000060);
      piVar16 = (int *)*puVar14;
    }
    lVar15 = *(longlong *)(piVar16 + 2);
    if (fVar27 <= fVar28) {
      if (fVar27 < *(float *)(lVar15 + 0x18)) {
        *(float *)(lVar15 + 0x18) = fVar27;
      }
      if (fVar31 < *(float *)(lVar15 + 0x1c)) {
        *(float *)(lVar15 + 0x1c) = fVar31;
      }
      if (fVar32 < *(float *)(lVar15 + 0x20)) {
        *(float *)(lVar15 + 0x20) = fVar32;
      }
      if (*(float *)(lVar15 + 0x28) <= fVar28 && fVar28 != *(float *)(lVar15 + 0x28)) {
        *(float *)(lVar15 + 0x28) = fVar28;
      }
      if (*(float *)(lVar15 + 0x2c) <= fVar29 && fVar29 != *(float *)(lVar15 + 0x2c)) {
        *(float *)(lVar15 + 0x2c) = fVar29;
      }
      if (*(float *)(lVar15 + 0x30) <= fVar30 && fVar30 != *(float *)(lVar15 + 0x30)) {
        *(float *)(lVar15 + 0x30) = fVar30;
      }
    }
    fVar30 = unaff_RSI[6];
    if (*(code **)(*unaff_RDI + 0x198) == (code *)&unknown_var_2544_ptr) {
      lVar15 = (longlong)unaff_RDI + 0x214;
    }
    else {
      lVar15 = (**(code **)(*unaff_RDI + 0x198))(unaff_RDI);
    }
    fVar30 = fVar30 * *(float *)(lVar15 + 0x30);
    lVar15 = FUN_180372570();
    if ((float)*(int *)(lVar15 + 0x110) < fVar30) {
      lVar15 = *(longlong *)(unaff_RBX + 0x110);
      iVar25 = *(int *)(unaff_RBX + 0x58) * unaff_R15D + unaff_R14D;
      for (piVar16 = *(int **)(lVar15 + ((ulonglong)(longlong)iVar25 %
                                        (ulonglong)*(uint *)(unaff_RBX + 0x118)) * 8);
          piVar16 != (int *)0x0; piVar16 = *(int **)(piVar16 + 4)) {
        if (iVar25 == *piVar16) {
          lVar17 = *(longlong *)(unaff_RBX + 0x118);
          goto LAB_18037336c;
        }
      }
      lVar17 = *(longlong *)(unaff_RBX + 0x118);
      piVar16 = *(int **)(lVar15 + lVar17 * 8);
LAB_18037336c:
      if (piVar16 == *(int **)(lVar15 + lVar17 * 8)) {
        uVar13 = FUN_18062b1e0(system_memory_pool_ptr,0x178,8,3);
        in_stack_00000050 = iVar25;
        in_stack_00000058 = FUN_180372430(uVar13,*(uint64_t *)(unaff_RBX + 0x68));
        puVar14 = (uint64_t *)FUN_18037f020(unaff_RBX + 0x108);
        piVar16 = (int *)*puVar14;
      }
      *(int *)(*(longlong *)(piVar16 + 2) + 0x110) = (int)fVar30;
    }
    lVar17 = FUN_180372570();
    lVar15 = *(longlong *)(unaff_RBX + 0x110);
    lVar17 = *(longlong *)(lVar17 + 0x108);
    iVar25 = *(int *)(unaff_RBX + 0x58) * unaff_R15D + unaff_R14D;
    for (piVar16 = *(int **)(lVar15 + ((ulonglong)(longlong)iVar25 %
                                      (ulonglong)*(uint *)(unaff_RBX + 0x118)) * 8);
        piVar16 != (int *)0x0; piVar16 = *(int **)(piVar16 + 4)) {
      if (iVar25 == *piVar16) goto LAB_180373428;
    }
    piVar16 = *(int **)(lVar15 + *(longlong *)(unaff_RBX + 0x118) * 8);
LAB_180373428:
    if (piVar16 == *(int **)(lVar15 + *(longlong *)(unaff_RBX + 0x118) * 8)) {
      uVar13 = FUN_18062b1e0(system_memory_pool_ptr,0x178,8,3);
      in_stack_00000040 = iVar25;
      in_stack_00000048 = FUN_180372430(uVar13,*(uint64_t *)(unaff_RBX + 0x68));
      puVar14 = (uint64_t *)FUN_18037f020(unaff_RBX + 0x108,unaff_RBP + 0x78,&stack0x00000040);
      piVar16 = (int *)*puVar14;
    }
    lVar15 = *(longlong *)(unaff_RBP + -0x78);
    *(longlong *)(*(longlong *)(piVar16 + 2) + 0x108) = lVar17 + 1;
    do {
      unaff_R13 = unaff_R13 + 0x28;
      in_stack_00000030 = in_stack_00000030 + -1;
      if (in_stack_00000030 == 0) {
        iVar23 = *(int *)(unaff_RBX + 0x54);
        iVar25 = *(int *)(unaff_RBX + 0x58);
        iVar26 = 0;
        if (iVar23 * iVar25 < 1) goto LAB_18037397f;
        goto LAB_180373510;
      }
      unaff_RSI = (float *)(*(longlong *)(unaff_RBX + 0x80) + unaff_R13);
      fVar30 = *(float *)(*(longlong *)(unaff_RBP + -0x80) + 0x215c);
      iVar25 = *(int *)(unaff_RBX + 0x54) + -1;
      unaff_R15D = (int)(*unaff_RSI / fVar30);
      if (unaff_R15D < 0) {
        unaff_R15D = 0;
      }
      else if (iVar25 < unaff_R15D) {
        unaff_R15D = iVar25;
      }
      iVar25 = *(int *)(unaff_RBX + 0x58);
      unaff_R14D = (int)(unaff_RSI[1] / fVar30);
      if (unaff_R14D < 0) {
        unaff_R14D = 0;
      }
      else if (iVar25 + -1 < unaff_R14D) {
        unaff_R14D = iVar25 + -1;
      }
      if ((uint)(*(longlong *)(lVar15 + 0x10) - *(longlong *)(lVar15 + 8) >> 3) <=
          (uint)(int)*(char *)(unaff_RSI + 8)) {
        *(int8_t *)(unaff_RSI + 8) = 0;
        iVar25 = *(int *)(unaff_RBX + 0x58);
      }
      lVar17 = *(longlong *)(unaff_RBX + 0x110);
      iVar25 = iVar25 * unaff_R15D + unaff_R14D;
      for (piVar16 = *(int **)(lVar17 + ((ulonglong)(longlong)iVar25 %
                                        (ulonglong)*(uint *)(unaff_RBX + 0x118)) * 8);
          piVar16 != (int *)0x0; piVar16 = *(int **)(piVar16 + 4)) {
        if (iVar25 == *piVar16) {
          lVar12 = *(longlong *)(unaff_RBX + 0x118);
          goto LAB_18037309e;
        }
      }
      lVar12 = *(longlong *)(unaff_RBX + 0x118);
      piVar16 = *(int **)(lVar17 + lVar12 * 8);
LAB_18037309e:
      if (piVar16 == *(int **)(lVar17 + lVar12 * 8)) {
        uVar13 = FUN_18062b1e0(system_memory_pool_ptr,0x178,8,3);
        in_stack_00000070 = (int *)CONCAT44(in_stack_00000070._4_4_,iVar25);
        in_stack_00000078 = FUN_180372430(uVar13,*(uint64_t *)(unaff_RBX + 0x68));
        puVar14 = (uint64_t *)FUN_18037f020(unaff_RBX + 0x108,unaff_RBP + -0x30,&stack0x00000070);
        piVar16 = (int *)*puVar14;
      }
      FUN_18037d8b0(*(uint64_t *)(piVar16 + 2),unaff_RSI,lVar15);
      unaff_RDI = *(longlong **)
                   (*(longlong *)
                     (*(longlong *)(lVar15 + 8) +
                     ((ulonglong)(uint)(int)*(char *)(unaff_RSI + 8) %
                     (ulonglong)(*(longlong *)(lVar15 + 0x10) - *(longlong *)(lVar15 + 8) >> 3)) * 8
                     ) + 0x28);
    } while (unaff_RDI == (longlong *)0x0);
    unaff_XMM8_Da = *unaff_RSI;
    unaff_XMM9_Da = unaff_RSI[1];
    unaff_XMM10_Da = unaff_RSI[2];
    param_2 = *(code **)(*unaff_RDI + 0x198);
    if (param_2 != (code *)&unknown_var_2544_ptr) goto code_r0x0001803739af;
    pfVar19 = (float *)((longlong)unaff_RDI + 0x214);
  } while( true );
LAB_180373510:
  uVar3 = (longlong)iVar26 / (longlong)iVar23;
  uVar4 = (longlong)iVar26 % (longlong)iVar23;
  lVar15 = *(longlong *)(unaff_RBX + 0x110);
  iVar20 = (int)uVar4;
  iVar23 = (int)uVar3;
  iVar24 = iVar25 * iVar20 + iVar23;
  uVar21 = (ulonglong)(longlong)iVar24 % (ulonglong)*(uint *)(unaff_RBX + 0x118);
  piVar16 = *(int **)(lVar15 + uVar21 * 8);
  for (piVar2 = piVar16; piVar2 != (int *)0x0; piVar2 = *(int **)(piVar2 + 4)) {
    if (iVar24 == *piVar2) {
      if (piVar2 != (int *)0x0) {
        lVar17 = *(longlong *)(unaff_RBX + 0x118);
        in_stack_00000070 = piVar2;
        puVar14 = &stack0x00000070;
        in_stack_00000078 = lVar15 + uVar21 * 8;
        goto LAB_180373580;
      }
      break;
    }
  }
  lVar17 = *(longlong *)(unaff_RBX + 0x118);
  in_stack_00000060 = *(uint64_t *)(lVar15 + lVar17 * 8);
  puVar14 = &stack0x00000060;
  in_stack_00000068 = lVar15 + lVar17 * 8;
LAB_180373580:
  piVar2 = *(int **)(lVar15 + lVar17 * 8);
  if ((int *)*puVar14 != piVar2) {
    iVar25 = iVar20 * iVar25 + iVar23;
    for (; (piVar22 = piVar2, piVar16 != (int *)0x0 && (piVar22 = piVar16, iVar25 != *piVar16));
        piVar16 = *(int **)(piVar16 + 4)) {
    }
    if (piVar22 == piVar2) {
      uVar13 = FUN_18062b1e0(system_memory_pool_ptr,0x178,8,CONCAT71((int7)((ulonglong)lVar15 >> 8),3));
      in_stack_00000050 = iVar25;
      in_stack_00000058 = FUN_180372430(uVar13,*(uint64_t *)(unaff_RBX + 0x68));
      puVar14 = (uint64_t *)FUN_18037f020(unaff_RBX + 0x108);
      piVar22 = (int *)*puVar14;
    }
    lVar15 = *(longlong *)(piVar22 + 2);
    fVar30 = *(float *)(lVar15 + 0x28);
    if (fVar30 < *(float *)(lVar15 + 0x18)) {
      *(int32_t *)(lVar15 + 0x48) = 0;
      *(uint64_t *)(lVar15 + 0x18) = 0;
      *(uint64_t *)(lVar15 + 0x20) = 0;
      *(uint64_t *)(lVar15 + 0x28) = 0;
      *(uint64_t *)(lVar15 + 0x30) = 0;
      *(uint64_t *)(lVar15 + 0x38) = 0;
      *(uint64_t *)(lVar15 + 0x40) = 0;
    }
    else {
      fVar27 = (fVar30 + *(float *)(lVar15 + 0x18)) * 0.5;
      *(float *)(lVar15 + 0x38) = fVar27;
      *(float *)(lVar15 + 0x3c) = (*(float *)(lVar15 + 0x2c) + *(float *)(lVar15 + 0x1c)) * 0.5;
      *(float *)(lVar15 + 0x40) = (*(float *)(lVar15 + 0x30) + *(float *)(lVar15 + 0x20)) * 0.5;
      *(int32_t *)(lVar15 + 0x44) = 0x7f7fffff;
      fVar30 = fVar30 - fVar27;
      fVar27 = *(float *)(lVar15 + 0x30) - *(float *)(lVar15 + 0x40);
      fVar28 = *(float *)(lVar15 + 0x2c) - *(float *)(lVar15 + 0x3c);
      *(float *)(lVar15 + 0x48) = SQRT(fVar28 * fVar28 + fVar30 * fVar30 + fVar27 * fVar27);
    }
    iVar25 = *(int *)(unaff_RBX + 0x58);
    uVar1 = *(uint *)(unaff_RBX + 0x118);
    lVar15 = *(longlong *)(unaff_RBX + 0x110);
    *(int32_t *)(unaff_RBP + 0x90) = 0;
    *(int32_t *)(unaff_RBP + 0x94) = 0;
    *(int32_t *)(unaff_RBP + 0x98) = 0;
    *(int32_t *)(unaff_RBP + 0x9c) = 0x7f7fffff;
    *(int32_t *)(unaff_RBP + 0xa0) = 0;
    *(int32_t *)(unaff_RBP + 0xa4) = 0;
    *(int32_t *)(unaff_RBP + 0xa8) = 0;
    *(int32_t *)(unaff_RBP + 0xac) = 0x7f7fffff;
    *(int32_t *)(unaff_RBP + 0xb0) = 0;
    *(int32_t *)(unaff_RBP + 0xb4) = 0;
    *(int32_t *)(unaff_RBP + 0xb8) = 0;
    *(int32_t *)(unaff_RBP + 0xbc) = 0x7f7fffff;
    iVar25 = iVar25 * iVar20 + iVar23;
    *(uint64_t *)(unaff_RBP + 0x140) = 0;
    *(uint64_t *)(unaff_RBP + 0xc0) = 0;
    *(uint64_t *)(unaff_RBP + 200) = 0;
    *(uint64_t *)(unaff_RBP + 0xd0) = 0;
    *(uint64_t *)(unaff_RBP + 0xd8) = 0;
    *(uint64_t *)(unaff_RBP + 0xe0) = 0;
    *(uint64_t *)(unaff_RBP + 0xe8) = 0;
    *(uint64_t *)(unaff_RBP + 0xf0) = 0;
    *(uint64_t *)(unaff_RBP + 0xf8) = 0;
    piVar16 = *(int **)(lVar15 + ((ulonglong)(longlong)iVar25 % (ulonglong)uVar1) * 8);
    *(uint64_t *)(unaff_RBP + 0x100) = 0;
    *(uint64_t *)(unaff_RBP + 0x108) = 0;
    *(uint64_t *)(unaff_RBP + 0x110) = 0;
    *(uint64_t *)(unaff_RBP + 0x118) = 0;
    *(uint64_t *)(unaff_RBP + 0x120) = 0;
    *(uint64_t *)(unaff_RBP + 0x128) = 0;
    *(uint64_t *)(unaff_RBP + 0x130) = 0;
    *(uint64_t *)(unaff_RBP + 0x138) = 0;
    for (; piVar16 != (int *)0x0; piVar16 = *(int **)(piVar16 + 4)) {
      if (iVar25 == *piVar16) goto LAB_180373799;
    }
    piVar16 = *(int **)(lVar15 + *(longlong *)(unaff_RBX + 0x118) * 8);
LAB_180373799:
    if (piVar16 == *(int **)(lVar15 + *(longlong *)(unaff_RBX + 0x118) * 8)) {
      uVar13 = FUN_18062b1e0(system_memory_pool_ptr,0x178,8,3);
      in_stack_00000040 = iVar25;
      in_stack_00000048 = FUN_180372430(uVar13,*(uint64_t *)(unaff_RBX + 0x68));
      puVar14 = (uint64_t *)FUN_18037f020(unaff_RBX + 0x108,unaff_RBP + -0x18,&stack0x00000040);
      piVar16 = (int *)*puVar14;
    }
    uVar13 = FUN_18063ad30(unaff_RBP + 0x90,*(longlong *)(piVar16 + 2) + 0x18,&system_data_0300);
    lVar17 = FUN_180372570(uVar13,uVar4 & 0xffffffff,uVar3 & 0xffffffff);
    uVar1 = *(uint *)(unaff_RBX + 0x118);
    lVar15 = *(longlong *)(unaff_RBX + 0x110);
    iVar23 = *(int *)(unaff_RBX + 0x58) * iVar20 + iVar23;
    *(float *)(unaff_RBP + 0x144) = (float)*(int *)(lVar17 + 0x110);
    for (piVar16 = *(int **)(lVar15 + ((ulonglong)(longlong)iVar23 % (ulonglong)uVar1) * 8);
        piVar16 != (int *)0x0; piVar16 = *(int **)(piVar16 + 4)) {
      if (iVar23 == *piVar16) goto LAB_180373878;
    }
    piVar16 = *(int **)(lVar15 + *(longlong *)(unaff_RBX + 0x118) * 8);
LAB_180373878:
    if (piVar16 == *(int **)(lVar15 + *(longlong *)(unaff_RBX + 0x118) * 8)) {
      uVar18 = FUN_18062b1e0(system_memory_pool_ptr,0x178,8,3);
      uVar13 = *(uint64_t *)(unaff_RBX + 0x68);
      *(int *)(unaff_RBP + -0x78) = iVar23;
      uVar13 = FUN_180372430(uVar18,uVar13);
      *(uint64_t *)(unaff_RBP + -0x70) = uVar13;
      puVar14 = (uint64_t *)FUN_18037f020(unaff_RBX + 0x108,unaff_RBP + -0x30,unaff_RBP + -0x78);
      piVar16 = (int *)*puVar14;
    }
    lVar15 = *(longlong *)(piVar16 + 2);
    uVar13 = *(uint64_t *)(unaff_RBP + 0x98);
    uVar18 = *(uint64_t *)(unaff_RBP + 0xa0);
    uVar8 = *(uint64_t *)(unaff_RBP + 0xa8);
    *(uint64_t *)(lVar15 + 0x4c) = *(uint64_t *)(unaff_RBP + 0x90);
    *(uint64_t *)(lVar15 + 0x54) = uVar13;
    uVar13 = *(uint64_t *)(unaff_RBP + 0xb0);
    uVar9 = *(uint64_t *)(unaff_RBP + 0xb8);
    *(uint64_t *)(lVar15 + 0x5c) = uVar18;
    *(uint64_t *)(lVar15 + 100) = uVar8;
    uVar18 = *(uint64_t *)(unaff_RBP + 0xc0);
    uVar8 = *(uint64_t *)(unaff_RBP + 200);
    *(uint64_t *)(lVar15 + 0x6c) = uVar13;
    *(uint64_t *)(lVar15 + 0x74) = uVar9;
    uVar13 = *(uint64_t *)(unaff_RBP + 0xd0);
    uVar9 = *(uint64_t *)(unaff_RBP + 0xd8);
    *(uint64_t *)(lVar15 + 0x7c) = uVar18;
    *(uint64_t *)(lVar15 + 0x84) = uVar8;
    uVar18 = *(uint64_t *)(unaff_RBP + 0xe0);
    uVar8 = *(uint64_t *)(unaff_RBP + 0xe8);
    *(uint64_t *)(lVar15 + 0x8c) = uVar13;
    *(uint64_t *)(lVar15 + 0x94) = uVar9;
    uVar13 = *(uint64_t *)(unaff_RBP + 0xf0);
    uVar9 = *(uint64_t *)(unaff_RBP + 0xf8);
    *(uint64_t *)(lVar15 + 0x9c) = uVar18;
    *(uint64_t *)(lVar15 + 0xa4) = uVar8;
    uVar18 = *(uint64_t *)(unaff_RBP + 0x100);
    uVar8 = *(uint64_t *)(unaff_RBP + 0x108);
    *(uint64_t *)(lVar15 + 0xac) = uVar13;
    *(uint64_t *)(lVar15 + 0xb4) = uVar9;
    uVar13 = *(uint64_t *)(unaff_RBP + 0x110);
    uVar9 = *(uint64_t *)(unaff_RBP + 0x118);
    *(uint64_t *)(lVar15 + 0xbc) = uVar18;
    *(uint64_t *)(lVar15 + 0xc4) = uVar8;
    uVar10 = *(uint64_t *)(unaff_RBP + 0x120);
    uVar11 = *(uint64_t *)(unaff_RBP + 0x128);
    *(uint64_t *)(lVar15 + 0xcc) = uVar13;
    *(uint64_t *)(lVar15 + 0xd4) = uVar9;
    uVar18 = *(uint64_t *)(unaff_RBP + 0x130);
    uVar8 = *(uint64_t *)(unaff_RBP + 0x138);
    uVar13 = *(uint64_t *)(unaff_RBP + 0x140);
    *(uint64_t *)(lVar15 + 0xdc) = uVar10;
    *(uint64_t *)(lVar15 + 0xe4) = uVar11;
    *(uint64_t *)(lVar15 + 0xec) = uVar18;
    *(uint64_t *)(lVar15 + 0xf4) = uVar8;
    *(uint64_t *)(lVar15 + 0xfc) = uVar13;
  }
  iVar25 = *(int *)(unaff_RBX + 0x58);
  iVar26 = iVar26 + 1;
  iVar23 = *(int *)(unaff_RBX + 0x54);
  if (iVar23 * iVar25 <= iVar26) {
LAB_18037397f:
                    // WARNING: Subroutine does not return
    FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x150) ^ (ulonglong)&stack0x00000000);
  }
  goto LAB_180373510;
}



uint64_t * FUN_1803739d0(uint64_t *param_1,int32_t param_2,longlong param_3)

{
  longlong *plVar1;
  void *puVar2;
  
  plVar1 = param_1 + 2;
  *plVar1 = (longlong)&system_state_ptr;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  *plVar1 = (longlong)&system_data_buffer_ptr;
  param_1[5] = 0;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  puVar2 = &system_buffer_ptr;
  if (*(void **)(param_3 + 8) != (void *)0x0) {
    puVar2 = *(void **)(param_3 + 8);
  }
  (**(code **)(*plVar1 + 0x10))(plVar1,puVar2,*(code **)(*plVar1 + 0x10),param_3,0xfffffffffffffffe)
  ;
  *(int32_t *)(param_1 + 6) = param_2;
  *param_1 = 0;
  return param_1;
}





// 函数: void FUN_180373a60(uint64_t *param_1)
void FUN_180373a60(uint64_t *param_1)

{
  LOCK();
  *param_1 = 0;
  UNLOCK();
                    // WARNING: Subroutine does not return
  memset(param_1 + 0x11,0,0x2028);
}





// 函数: void FUN_180373d40(ulonglong *param_1)
void FUN_180373d40(ulonglong *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_1808fc8a8(param_1 + 5,0x20,0x100,FUN_180046860,0xfffffffffffffffe);
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(uint64_t *)(lVar3 + 0x20);
      *(uint64_t **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}





