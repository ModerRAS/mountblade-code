#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part558.c - 2 个函数

// 函数: void FUN_180577170(int64_t param_1,int64_t param_2)
void FUN_180577170(int64_t param_1,int64_t param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int64_t lVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  bool bVar10;
  int32_t uVar11;
  int iVar12;
  int32_t uVar13;
  int iVar14;
  uint64_t uVar15;
  int64_t lVar16;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int iVar17;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t unaff_R15;
  float in_XMM0_Da;
  int32_t uVar18;
  uint in_stack_00000020;
  uint uVar19;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  int32_t uStack0000000000000044;
  int64_t in_stack_00000048;
  uint64_t in_stack_00000050;
  int64_t in_stack_00000058;
  uint64_t in_stack_00000060;
  
  uVar18 = 0;
  if (in_XMM0_Da == 0.0) {
    *(int64_t *)(param_1 + 0x2500) = unaff_R13;
  }
  else {
    *(float *)(param_1 + 0x25c8) = in_XMM0_Da;
  }
  *(int64_t *)(param_1 + 0x2508) = unaff_R13;
  if (unaff_R13 != 0) {
    in_stack_00000048 = (int64_t)*(int *)(param_1 + 0xac) * 0xe0 + render_system_ui;
    lVar16 = *(int64_t *)(in_stack_00000048 + 0x98);
    lVar6 = *(int64_t *)(param_2 + 0xb0);
    iVar5 = *(int *)(lVar6 + 0x20);
    in_stack_00000050 = (uint64_t)iVar5;
    if (((uint64_t)(*(int64_t *)(in_stack_00000048 + 0xa0) - lVar16 >> 3) <= in_stack_00000050) ||
       (*(int64_t *)(lVar16 + in_stack_00000050 * 8) == 0)) {
      iVar17 = 0;
      lVar16 = 0;
      do {
        bVar10 = 5 < iVar17;
        uVar13 = CONCAT31((int3)(in_stack_00000020 >> 8),bVar10);
        iVar14 = 5;
        if (iVar17 < 5) {
          iVar14 = iVar17;
        }
        uVar11 = FUN_180557990(lVar6,2,iVar14,0xffffffff,uVar13);
        iVar12 = FUN_18053a410(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar11);
        iVar12 = *(int *)(render_system_ui + (int64_t)iVar12 * 4);
        if (iVar12 == -1) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(uint64_t *)(render_system_ui + (int64_t)iVar12 * 8);
        }
        *(uint64_t *)(unaff_RBP + 0x140 + lVar16) = uVar15;
        uVar11 = CONCAT31((int3)((uint)uVar13 >> 8),bVar10);
        uVar13 = FUN_180557a10(lVar6,2,iVar14,0xffffffff,uVar11);
        iVar12 = FUN_18053a410(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar13);
        iVar12 = *(int *)(render_system_ui + (int64_t)iVar12 * 4);
        if (iVar12 == -1) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(uint64_t *)(render_system_ui + (int64_t)iVar12 * 8);
        }
        *(uint64_t *)(unaff_RBP + -0x10 + lVar16) = uVar15;
        uVar11 = CONCAT31((int3)((uint)uVar11 >> 8),bVar10);
        uVar13 = FUN_180557990(lVar6,1,iVar14,0xffffffff,uVar11);
        iVar12 = FUN_18053a410(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar13);
        iVar12 = *(int *)(render_system_ui + (int64_t)iVar12 * 4);
        if (iVar12 == -1) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(uint64_t *)(render_system_ui + (int64_t)iVar12 * 8);
        }
        *(uint64_t *)(unaff_RBP + 0x150 + lVar16) = uVar15;
        uVar11 = CONCAT31((int3)((uint)uVar11 >> 8),bVar10);
        uVar13 = FUN_180557a10(lVar6,1,iVar14,0xffffffff,uVar11);
        iVar12 = FUN_18053a410(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar13);
        iVar12 = *(int *)(render_system_ui + (int64_t)iVar12 * 4);
        if (iVar12 == -1) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(uint64_t *)(render_system_ui + (int64_t)iVar12 * 8);
        }
        *(uint64_t *)(unaff_RBP + lVar16) = uVar15;
        uVar11 = CONCAT31((int3)((uint)uVar11 >> 8),bVar10);
        uVar13 = FUN_180557990(lVar6,0,iVar14,0xffffffff,uVar11);
        iVar12 = FUN_18053a410(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar13);
        iVar12 = *(int *)(render_system_ui + (int64_t)iVar12 * 4);
        if (iVar12 == -1) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(uint64_t *)(render_system_ui + (int64_t)iVar12 * 8);
        }
        *(uint64_t *)(unaff_RBP + 0x158 + lVar16) = uVar15;
        uVar11 = CONCAT31((int3)((uint)uVar11 >> 8),bVar10);
        uVar13 = FUN_180557a10(lVar6,0,iVar14,0xffffffff,uVar11);
        iVar12 = FUN_18053a410(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar13);
        iVar12 = *(int *)(render_system_ui + (int64_t)iVar12 * 4);
        if (iVar12 == -1) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(uint64_t *)(render_system_ui + (int64_t)iVar12 * 8);
        }
        *(uint64_t *)(unaff_RBP + 8 + lVar16) = uVar15;
        uVar11 = CONCAT31((int3)((uint)uVar11 >> 8),bVar10);
        uVar13 = FUN_180557990(lVar6,5,iVar14,0xffffffff,uVar11);
        iVar12 = FUN_18053a410(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar13);
        iVar12 = *(int *)(render_system_ui + (int64_t)iVar12 * 4);
        if (iVar12 == -1) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(uint64_t *)(render_system_ui + (int64_t)iVar12 * 8);
        }
        *(uint64_t *)(unaff_RBP + 0x148 + lVar16) = uVar15;
        uVar19 = CONCAT31((int3)((uint)uVar11 >> 8),bVar10);
        uVar13 = FUN_180557a10(lVar6,5,iVar14,0xffffffff,uVar19);
        iVar14 = FUN_18053a410(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar13);
        iVar14 = *(int *)(render_system_ui + (int64_t)iVar14 * 4);
        if (iVar14 == -1) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(uint64_t *)(render_system_ui + (int64_t)iVar14 * 8);
        }
        *(uint64_t *)(unaff_RBP + -8 + lVar16) = uVar15;
        uVar19 = uVar19 & 0xffffff00;
        uVar13 = FUN_180557990(lVar6,0xffffffff,1,1,uVar19);
        iVar14 = FUN_18053a410(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar13);
        iVar14 = *(int *)(render_system_ui + (int64_t)iVar14 * 4);
        if (iVar14 == -1) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(uint64_t *)(render_system_ui + (int64_t)iVar14 * 8);
        }
        *(uint64_t *)(unaff_RBP + 0x160 + lVar16) = uVar15;
        uVar19 = uVar19 & 0xffffff00;
        uVar13 = FUN_180557a10(lVar6,0xffffffff,1,1,uVar19);
        iVar14 = FUN_18053a410(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar13);
        iVar14 = *(int *)(render_system_ui + (int64_t)iVar14 * 4);
        if (iVar14 == -1) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(uint64_t *)(render_system_ui + (int64_t)iVar14 * 8);
        }
        *(uint64_t *)(unaff_RBP + 0x10 + lVar16) = uVar15;
        uVar19 = uVar19 & 0xffffff00;
        uVar13 = FUN_180557990(lVar6,0xffffffff,1,0,uVar19);
        iVar14 = FUN_18053a410(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar13);
        iVar14 = *(int *)(render_system_ui + (int64_t)iVar14 * 4);
        if (iVar14 == -1) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(uint64_t *)(render_system_ui + (int64_t)iVar14 * 8);
        }
        *(uint64_t *)(unaff_RBP + 0x168 + lVar16) = uVar15;
        in_stack_00000020 = uVar19 & 0xffffff00;
        uVar13 = FUN_180557a10(lVar6,0xffffffff,1,0,in_stack_00000020);
        iVar14 = FUN_18053a410(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar13);
        iVar14 = *(int *)(render_system_ui + (int64_t)iVar14 * 4);
        if (iVar14 == -1) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(uint64_t *)(render_system_ui + (int64_t)iVar14 * 8);
        }
        *(uint64_t *)(unaff_RBP + 0x18 + lVar16) = uVar15;
        iVar17 = iVar17 + 1;
        lVar16 = lVar16 + 0x30;
      } while (iVar17 < 7);
      FUN_18053b400((int64_t)*(int *)(unaff_RSI + 0xac) * 0xe0 + render_system_ui,iVar5,
                    unaff_RBP + 0x140,unaff_RBP + -0x10);
      unaff_R12 = CONCAT44(fStack000000000000003c,fStack0000000000000038);
      lVar16 = *(int64_t *)(in_stack_00000048 + 0x98);
      unaff_R15 = in_stack_00000058;
    }
    plVar7 = *(int64_t **)(lVar16 + in_stack_00000050 * 8);
    uVar13 = *(int32_t *)(unaff_RBP + 0x330);
    *(int64_t **)(unaff_RSI + 0xa210) = plVar7;
    *(int32_t *)(unaff_RSI + 0x2564) = uVar13;
    if ((unaff_R12 != 0) && (unaff_R15 != 0)) {
      uVar15 = *(uint64_t *)(*plVar7 + 0x68);
      uVar8 = *(uint64_t *)(*(int64_t *)(*(int64_t *)(unaff_R13 + 0x2590) + 0xc78) + 0x38);
      FUN_18040c880(unaff_R12,&stack0x00000070,uVar15,0,0);
      FUN_18040c880(*(uint64_t *)(unaff_R15 + 0x208),unaff_RBP + -0x70,uVar8,
                    *(int8_t *)(unaff_R13 + 0x2581),0);
      FUN_18040c880(unaff_R12,unaff_RBP + -0x50,uVar15,*(int8_t *)(unaff_RSI + 0x2602),0);
      FUN_18040c880(unaff_R12,unaff_RBP + -0x30,uVar15,*(int8_t *)(unaff_RSI + 0x2601),0);
      puVar9 = *(uint64_t **)(unaff_R15 + 0xd8);
      if (puVar9 == (uint64_t *)0x0) {
        *(uint64_t *)(unaff_RSI + 0x2538) = 0x3f8000003f800000;
        *(uint64_t *)(unaff_RSI + 0x2540) = 0x3f800000;
      }
      else {
        uVar15 = puVar9[1];
        *(uint64_t *)(unaff_RSI + 0x2538) = *puVar9;
        *(uint64_t *)(unaff_RSI + 0x2540) = uVar15;
        uVar18 = *(int32_t *)(*(int64_t *)(unaff_R15 + 0xd8) + 0x10);
      }
      *(int32_t *)(unaff_RSI + 0x2548) = uVar18;
      fStack0000000000000038 = *(float *)(unaff_RBP + -0x80) - *(float *)(unaff_RBP + -0x60);
      fStack000000000000003c = *(float *)(unaff_RBP + -0x7c) - *(float *)(unaff_RBP + -0x5c);
      fVar1 = *(float *)(unaff_RBP + -0x78);
      fVar2 = *(float *)(unaff_RBP + -0x58);
      uStack0000000000000044 = 0x7f7fffff;
      fStack0000000000000040 =
           (fVar1 - *(float *)(*(int64_t *)(unaff_R12 + 0x140) + 0x158) * 1.5) - fVar2;
      FUN_180285b40(unaff_RBP + -0x70,&stack0x00000058,&stack0x00000038);
      uVar18 = *(int32_t *)(unaff_RBP + -0x18);
      *(int64_t *)(unaff_RSI + 0x2528) = in_stack_00000058;
      *(uint64_t *)(unaff_RSI + 0x2530) = in_stack_00000060;
      *(int32_t *)(unaff_RSI + 0x2554) = *(int32_t *)(unaff_RBP + -0x38);
      fVar3 = *(float *)(unaff_RBP + -0x80);
      fVar4 = *(float *)(unaff_RBP + -0x40);
      *(float *)(unaff_RSI + 0x254c) = fVar1;
      *(float *)(unaff_RSI + 0x2550) = fVar2;
      *(int32_t *)(unaff_RSI + 0x2558) = uVar18;
      *(float *)(unaff_RSI + 0x255c) = ABS(fVar3 - fVar4);
      *(float *)(unaff_RSI + 0x2560) =
           ABS(*(float *)(unaff_RBP + -0x20) - *(float *)(unaff_RBP + -0x80));
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x290) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805771af(uint64_t param_1,int64_t param_2)
void FUN_1805771af(uint64_t param_1,int64_t param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int64_t lVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  bool bVar9;
  int32_t uVar10;
  int iVar11;
  int32_t uVar12;
  int iVar13;
  int64_t in_RAX;
  uint64_t uVar14;
  int64_t lVar15;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int iVar16;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t unaff_R15;
  int32_t unaff_XMM6_Da;
  uint in_stack_00000020;
  uint uVar17;
  int iStack0000000000000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  int32_t uStack0000000000000044;
  int64_t lStack0000000000000048;
  uint64_t uStack0000000000000050;
  int64_t in_stack_00000058;
  uint64_t in_stack_00000060;
  
  lStack0000000000000048 = in_RAX + render_system_ui;
  lVar15 = *(int64_t *)(lStack0000000000000048 + 0x98);
  lVar5 = *(int64_t *)(param_2 + 0xb0);
  iStack0000000000000030 = *(int *)(lVar5 + 0x20);
  uStack0000000000000050 = (uint64_t)iStack0000000000000030;
  if (((uint64_t)(*(int64_t *)(lStack0000000000000048 + 0xa0) - lVar15 >> 3) <=
       uStack0000000000000050) || (*(int64_t *)(lVar15 + uStack0000000000000050 * 8) == 0)) {
    iVar16 = 0;
    lVar15 = 0;
    do {
      bVar9 = 5 < iVar16;
      uVar12 = CONCAT31((int3)(in_stack_00000020 >> 8),bVar9);
      iVar13 = 5;
      if (iVar16 < 5) {
        iVar13 = iVar16;
      }
      uVar10 = FUN_180557990(lVar5,2,iVar13,0xffffffff,uVar12);
      iVar11 = FUN_18053a410(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar10);
      iVar11 = *(int *)(render_system_ui + (int64_t)iVar11 * 4);
      if (iVar11 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(uint64_t *)(render_system_ui + (int64_t)iVar11 * 8);
      }
      *(uint64_t *)(unaff_RBP + 0x140 + lVar15) = uVar14;
      uVar10 = CONCAT31((int3)((uint)uVar12 >> 8),bVar9);
      uVar12 = FUN_180557a10(lVar5,2,iVar13,0xffffffff,uVar10);
      iVar11 = FUN_18053a410(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar12);
      iVar11 = *(int *)(render_system_ui + (int64_t)iVar11 * 4);
      if (iVar11 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(uint64_t *)(render_system_ui + (int64_t)iVar11 * 8);
      }
      *(uint64_t *)(unaff_RBP + -0x10 + lVar15) = uVar14;
      uVar10 = CONCAT31((int3)((uint)uVar10 >> 8),bVar9);
      uVar12 = FUN_180557990(lVar5,1,iVar13,0xffffffff,uVar10);
      iVar11 = FUN_18053a410(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar12);
      iVar11 = *(int *)(render_system_ui + (int64_t)iVar11 * 4);
      if (iVar11 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(uint64_t *)(render_system_ui + (int64_t)iVar11 * 8);
      }
      *(uint64_t *)(unaff_RBP + 0x150 + lVar15) = uVar14;
      uVar10 = CONCAT31((int3)((uint)uVar10 >> 8),bVar9);
      uVar12 = FUN_180557a10(lVar5,1,iVar13,0xffffffff,uVar10);
      iVar11 = FUN_18053a410(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar12);
      iVar11 = *(int *)(render_system_ui + (int64_t)iVar11 * 4);
      if (iVar11 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(uint64_t *)(render_system_ui + (int64_t)iVar11 * 8);
      }
      *(uint64_t *)(unaff_RBP + lVar15) = uVar14;
      uVar10 = CONCAT31((int3)((uint)uVar10 >> 8),bVar9);
      uVar12 = FUN_180557990(lVar5,0,iVar13,0xffffffff,uVar10);
      iVar11 = FUN_18053a410(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar12);
      iVar11 = *(int *)(render_system_ui + (int64_t)iVar11 * 4);
      if (iVar11 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(uint64_t *)(render_system_ui + (int64_t)iVar11 * 8);
      }
      *(uint64_t *)(unaff_RBP + 0x158 + lVar15) = uVar14;
      uVar10 = CONCAT31((int3)((uint)uVar10 >> 8),bVar9);
      uVar12 = FUN_180557a10(lVar5,0,iVar13,0xffffffff,uVar10);
      iVar11 = FUN_18053a410(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar12);
      iVar11 = *(int *)(render_system_ui + (int64_t)iVar11 * 4);
      if (iVar11 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(uint64_t *)(render_system_ui + (int64_t)iVar11 * 8);
      }
      *(uint64_t *)(unaff_RBP + 8 + lVar15) = uVar14;
      uVar10 = CONCAT31((int3)((uint)uVar10 >> 8),bVar9);
      uVar12 = FUN_180557990(lVar5,5,iVar13,0xffffffff,uVar10);
      iVar11 = FUN_18053a410(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar12);
      iVar11 = *(int *)(render_system_ui + (int64_t)iVar11 * 4);
      if (iVar11 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(uint64_t *)(render_system_ui + (int64_t)iVar11 * 8);
      }
      *(uint64_t *)(unaff_RBP + 0x148 + lVar15) = uVar14;
      uVar17 = CONCAT31((int3)((uint)uVar10 >> 8),bVar9);
      uVar12 = FUN_180557a10(lVar5,5,iVar13,0xffffffff,uVar17);
      iVar13 = FUN_18053a410(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar12);
      iVar13 = *(int *)(render_system_ui + (int64_t)iVar13 * 4);
      if (iVar13 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(uint64_t *)(render_system_ui + (int64_t)iVar13 * 8);
      }
      *(uint64_t *)(unaff_RBP + -8 + lVar15) = uVar14;
      uVar17 = uVar17 & 0xffffff00;
      uVar12 = FUN_180557990(lVar5,0xffffffff,1,1,uVar17);
      iVar13 = FUN_18053a410(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar12);
      iVar13 = *(int *)(render_system_ui + (int64_t)iVar13 * 4);
      if (iVar13 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(uint64_t *)(render_system_ui + (int64_t)iVar13 * 8);
      }
      *(uint64_t *)(unaff_RBP + 0x160 + lVar15) = uVar14;
      uVar17 = uVar17 & 0xffffff00;
      uVar12 = FUN_180557a10(lVar5,0xffffffff,1,1,uVar17);
      iVar13 = FUN_18053a410(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar12);
      iVar13 = *(int *)(render_system_ui + (int64_t)iVar13 * 4);
      if (iVar13 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(uint64_t *)(render_system_ui + (int64_t)iVar13 * 8);
      }
      *(uint64_t *)(unaff_RBP + 0x10 + lVar15) = uVar14;
      uVar17 = uVar17 & 0xffffff00;
      uVar12 = FUN_180557990(lVar5,0xffffffff,1,0,uVar17);
      iVar13 = FUN_18053a410(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar12);
      iVar13 = *(int *)(render_system_ui + (int64_t)iVar13 * 4);
      if (iVar13 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(uint64_t *)(render_system_ui + (int64_t)iVar13 * 8);
      }
      *(uint64_t *)(unaff_RBP + 0x168 + lVar15) = uVar14;
      in_stack_00000020 = uVar17 & 0xffffff00;
      uVar12 = FUN_180557a10(lVar5,0xffffffff,1,0,in_stack_00000020);
      iVar13 = FUN_18053a410(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar12);
      iVar13 = *(int *)(render_system_ui + (int64_t)iVar13 * 4);
      if (iVar13 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(uint64_t *)(render_system_ui + (int64_t)iVar13 * 8);
      }
      *(uint64_t *)(unaff_RBP + 0x18 + lVar15) = uVar14;
      iVar16 = iVar16 + 1;
      lVar15 = lVar15 + 0x30;
    } while (iVar16 < 7);
    FUN_18053b400((int64_t)*(int *)(unaff_RSI + 0xac) * 0xe0 + render_system_ui,
                  iStack0000000000000030,unaff_RBP + 0x140,unaff_RBP + -0x10);
    unaff_R12 = CONCAT44(fStack000000000000003c,fStack0000000000000038);
    lVar15 = *(int64_t *)(lStack0000000000000048 + 0x98);
    unaff_R15 = in_stack_00000058;
  }
  plVar6 = *(int64_t **)(lVar15 + uStack0000000000000050 * 8);
  uVar12 = *(int32_t *)(unaff_RBP + 0x330);
  *(int64_t **)(unaff_RSI + 0xa210) = plVar6;
  *(int32_t *)(unaff_RSI + 0x2564) = uVar12;
  if ((unaff_R12 != 0) && (unaff_R15 != 0)) {
    uVar14 = *(uint64_t *)(*plVar6 + 0x68);
    uVar7 = *(uint64_t *)(*(int64_t *)(*(int64_t *)(unaff_R13 + 0x2590) + 0xc78) + 0x38);
    FUN_18040c880(unaff_R12,&stack0x00000070,uVar14,0);
    FUN_18040c880(*(uint64_t *)(unaff_R15 + 0x208),unaff_RBP + -0x70,uVar7,
                  *(int8_t *)(unaff_R13 + 0x2581));
    FUN_18040c880(unaff_R12,unaff_RBP + -0x50,uVar14,*(int8_t *)(unaff_RSI + 0x2602));
    FUN_18040c880(unaff_R12,unaff_RBP + -0x30,uVar14,*(int8_t *)(unaff_RSI + 0x2601));
    puVar8 = *(uint64_t **)(unaff_R15 + 0xd8);
    if (puVar8 == (uint64_t *)0x0) {
      *(uint64_t *)(unaff_RSI + 0x2538) = 0x3f8000003f800000;
      *(uint64_t *)(unaff_RSI + 0x2540) = 0x3f800000;
    }
    else {
      uVar14 = puVar8[1];
      *(uint64_t *)(unaff_RSI + 0x2538) = *puVar8;
      *(uint64_t *)(unaff_RSI + 0x2540) = uVar14;
      unaff_XMM6_Da = *(int32_t *)(*(int64_t *)(unaff_R15 + 0xd8) + 0x10);
    }
    *(int32_t *)(unaff_RSI + 0x2548) = unaff_XMM6_Da;
    fStack0000000000000038 = *(float *)(unaff_RBP + -0x80) - *(float *)(unaff_RBP + -0x60);
    fStack000000000000003c = *(float *)(unaff_RBP + -0x7c) - *(float *)(unaff_RBP + -0x5c);
    fVar1 = *(float *)(unaff_RBP + -0x78);
    fVar2 = *(float *)(unaff_RBP + -0x58);
    uStack0000000000000044 = 0x7f7fffff;
    fStack0000000000000040 =
         (fVar1 - *(float *)(*(int64_t *)(unaff_R12 + 0x140) + 0x158) * 1.5) - fVar2;
    FUN_180285b40(unaff_RBP + -0x70,&stack0x00000058,&stack0x00000038);
    uVar12 = *(int32_t *)(unaff_RBP + -0x18);
    *(int64_t *)(unaff_RSI + 0x2528) = in_stack_00000058;
    *(uint64_t *)(unaff_RSI + 0x2530) = in_stack_00000060;
    *(int32_t *)(unaff_RSI + 0x2554) = *(int32_t *)(unaff_RBP + -0x38);
    fVar3 = *(float *)(unaff_RBP + -0x80);
    fVar4 = *(float *)(unaff_RBP + -0x40);
    *(float *)(unaff_RSI + 0x254c) = fVar1;
    *(float *)(unaff_RSI + 0x2550) = fVar2;
    *(int32_t *)(unaff_RSI + 0x2558) = uVar12;
    *(float *)(unaff_RSI + 0x255c) = ABS(fVar3 - fVar4);
    *(float *)(unaff_RSI + 0x2560) =
         ABS(*(float *)(unaff_RBP + -0x20) - *(float *)(unaff_RBP + -0x80));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x290) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



