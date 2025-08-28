#include "TaleWorlds.Native.Split.h"

// 99_part_03_part054.c - 5 个函数

// 函数: void FUN_180231a66(longlong param_1)
void FUN_180231a66(longlong param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong in_RAX;
  longlong unaff_RBP;
  float *unaff_RSI;
  longlong unaff_RDI;
  longlong in_R11;
  int iVar6;
  undefined8 unaff_R12;
  float *unaff_R14;
  float *unaff_R15;
  float fVar7;
  float fVar8;
  float unaff_XMM7_Da;
  float fVar9;
  float fVar10;
  float unaff_XMM8_Da;
  float fVar11;
  float unaff_XMM9_Da;
  float unaff_XMM11_Da;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_XMM14_Da;
  float fVar15;
  float fStack0000000000000040;
  float fStack0000000000000044;
  undefined8 uStack0000000000000048;
  int in_stack_00000050;
  undefined4 uStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  int iStack0000000000000078;
  undefined4 uStack000000000000007c;
  
  *(longlong *)(in_R11 + 0x70) = in_RAX;
  _fStack0000000000000040 = 0x447a0000;
  fVar9 = unaff_XMM7_Da / unaff_XMM9_Da;
  *(longlong *)(in_R11 + 0x78) = param_1 * 0x5c + in_RAX;
  lVar3 = *(longlong *)(unaff_RDI + 8);
  lVar4 = *(longlong *)(lVar3 + 0x78);
  fVar13 = unaff_XMM11_Da;
  fVar14 = 1000.0;
  fVar15 = 1000.0;
  while (lVar4 != in_RAX) {
    fStack000000000000005c = *(float *)(in_RAX + 0x48);
    fStack0000000000000058 = *(float *)(in_RAX + 0x44);
    fVar7 = fStack000000000000005c;
    if (fVar14 <= fStack000000000000005c) {
      fVar7 = fVar14;
    }
    fVar14 = fStack0000000000000058;
    if (fVar15 <= fStack0000000000000058) {
      fVar14 = fVar15;
    }
    in_RAX = in_RAX + 0x5c;
    if (fStack0000000000000058 <= unaff_XMM11_Da) {
      fStack0000000000000058 = unaff_XMM11_Da;
    }
    if (fStack000000000000005c <= fVar13) {
      fStack000000000000005c = fVar13;
    }
    *(float *)(unaff_RBP + 100) = fVar7;
    *(float *)(unaff_RBP + 0x60) = fVar14;
    uVar5 = *(undefined8 *)(unaff_RBP + 0x60);
    fStack0000000000000044 = (float)((ulonglong)uVar5 >> 0x20);
    fStack0000000000000040 = (float)uVar5;
    unaff_XMM11_Da = fStack0000000000000058;
    fVar13 = fStack000000000000005c;
    fVar14 = fStack0000000000000044;
    fVar15 = fStack0000000000000040;
    _fStack0000000000000040 = uVar5;
  }
  fVar7 = unaff_R14[1];
  fVar13 = fVar13 - fVar14;
  iVar6 = (int)unaff_R12;
  *(int *)(lVar3 + 0x10) = iVar6;
  fVar12 = unaff_XMM11_Da - fVar15;
  *(int *)(lVar3 + 0x38) = iVar6;
  *(int *)(lVar3 + 0x88) = iVar6;
  *(int *)(lVar3 + 0x60) = iVar6;
  fVar14 = fVar14 + fVar13;
  uStack0000000000000048 = CONCAT44(fVar13,fVar12);
  *(short *)(lVar3 + 0xc0) = (short)unaff_R12;
  _fStack0000000000000040 = CONCAT44(fVar14,fStack0000000000000040);
  if (*(longlong *)(lVar3 + 0xb8) == 0) {
    *(undefined8 *)(lVar3 + 0xb8) = unaff_R12;
    FUN_180085530(*(undefined8 *)(lVar3 + 0xb0));
    *(undefined8 *)(lVar3 + 0xb0) = unaff_R12;
    *(int *)(lVar3 + 200) = iVar6;
    *(undefined2 *)(unaff_RDI + 0x30) = 0x101;
    fVar8 = unaff_RSI[1];
    if (fVar7 < fVar8) {
      fVar10 = fVar9 * unaff_XMM8_Da;
      do {
        fVar1 = *unaff_R14;
        *(undefined4 *)(unaff_RBP + 0x60) = 0xffffffff;
        fVar11 = fVar10 + fVar7;
        if (fVar11 <= fVar8) {
          *(float *)(unaff_RBP + -0x80) = fVar1;
          *(float *)(unaff_RBP + -0x7c) = fVar7;
          *(int *)(unaff_RBP + -0x78) = iVar6;
          *(undefined4 *)(unaff_RBP + -0x74) = 0x7f7fffff;
          fStack0000000000000068 = fVar9 * unaff_XMM9_Da;
          fStack000000000000006c = fVar10;
          FUN_1802358c0(fVar1,unaff_RBP + -0x80,&stack0x00000068,&stack0x00000040,&stack0x00000048);
          fVar8 = unaff_RSI[1];
        }
        else {
          fStack0000000000000064 = fVar8 - fVar7;
          uStack000000000000007c = 0x7f7fffff;
          fStack0000000000000058 = (fStack0000000000000064 * fVar12) / fVar10;
          fStack000000000000005c = fVar13;
          fStack0000000000000060 = fVar9 * unaff_XMM9_Da;
          fStack0000000000000070 = fVar1;
          fStack0000000000000074 = fVar7;
          iStack0000000000000078 = iVar6;
          FUN_1802358c0(fVar1,&stack0x00000070,&stack0x00000060,&stack0x00000040,&stack0x00000058);
          fVar8 = unaff_RSI[1];
          fVar11 = fVar8;
        }
        fVar7 = fVar11;
      } while (fVar11 < fVar8);
      unaff_XMM14_Da = 0.0;
    }
    fVar7 = *unaff_R15;
    if (fVar7 <= unaff_XMM14_Da) {
      *(undefined1 *)(unaff_RDI + 0x30) = 1;
      return;
    }
    *(undefined4 *)(unaff_RBP + 0x60) = 0xffffffff;
    iVar2 = **(int **)(unaff_RBP + 0x80);
    *(int *)(unaff_RBP + -0x78) = iVar6;
    *(undefined4 *)(unaff_RBP + -0x74) = 0x7f7fffff;
    uStack000000000000007c = 0x7f7fffff;
    uStack0000000000000054 = 0x7f7fffff;
    fStack000000000000005c = fVar14 - fVar13;
    fStack0000000000000060 = fVar12 + fVar15;
    fStack0000000000000058 = (1.0 - fVar7 * (1.0 / (fVar9 * unaff_XMM8_Da))) * fVar12 + fVar15;
    in_stack_00000050 = iVar6;
    fStack0000000000000064 = fStack000000000000005c;
    fStack0000000000000068 = fStack0000000000000060;
    fStack000000000000006c = fVar14;
    if (iVar2 != iVar6) {
      fStack0000000000000070 = *unaff_RSI;
      fStack0000000000000074 = unaff_R14[1];
      *(float *)(unaff_RBP + -0x7c) = fStack0000000000000074;
      *(float *)(unaff_RBP + -0x80) = fStack0000000000000070 - fVar7;
      uStack0000000000000048 = CONCAT44(fStack0000000000000074 - fVar7,fStack0000000000000070);
      iStack0000000000000078 = iVar6;
                    // WARNING: Subroutine does not return
      FUN_1802354f0(fStack0000000000000070 - fVar7,&stack0x00000048,&stack0x00000070,
                    unaff_RBP + -0x80,&stack0x00000058);
    }
    fVar13 = *unaff_R14;
    fStack0000000000000074 = unaff_R14[1];
    *(float *)(unaff_RBP + -0x7c) = fStack0000000000000074;
    fStack0000000000000070 = fVar13 + fVar7;
    *(float *)(unaff_RBP + -0x80) = fVar13;
    uStack0000000000000048 = CONCAT44(fStack0000000000000074 - fVar7,fVar13);
    fStack000000000000005c = fVar14;
    iStack0000000000000078 = iVar6;
                    // WARNING: Subroutine does not return
    FUN_1802354f0(fStack0000000000000070,&stack0x00000048,&stack0x00000070,unaff_RBP + -0x80,
                  &stack0x00000058);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_180231bcb(undefined8 param_1,float param_2)
void FUN_180231bcb(undefined8 param_1,float param_2)

{
  float fVar1;
  int iVar2;
  longlong unaff_RBP;
  float *unaff_RSI;
  longlong unaff_RDI;
  int unaff_R12D;
  float *unaff_R14;
  float *unaff_R15;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float fVar3;
  float unaff_XMM8_Da;
  float fVar4;
  float unaff_XMM9_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM15_Da;
  undefined8 *puStack0000000000000028;
  float in_stack_00000048;
  float fStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  float in_stack_00000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  int iStack0000000000000078;
  undefined4 uStack000000000000007c;
  
  fVar3 = unaff_XMM7_Da * unaff_XMM8_Da;
  do {
    fVar1 = *unaff_R14;
    puStack0000000000000028 = (undefined8 *)(unaff_RBP + 0x60);
    *(undefined4 *)(unaff_RBP + 0x60) = 0xffffffff;
    fVar4 = fVar3 + unaff_XMM6_Da;
    if (fVar4 <= param_2) {
      *(float *)(unaff_RBP + -0x80) = fVar1;
      *(float *)(unaff_RBP + -0x7c) = unaff_XMM6_Da;
      *(int *)(unaff_RBP + -0x78) = unaff_R12D;
      *(undefined4 *)(unaff_RBP + -0x74) = 0x7f7fffff;
      fStack0000000000000068 = unaff_XMM7_Da * unaff_XMM9_Da;
      fStack000000000000006c = fVar3;
      FUN_1802358c0(fVar1,unaff_RBP + -0x80,&stack0x00000068,&stack0x00000040,&stack0x00000048);
      param_2 = unaff_RSI[1];
    }
    else {
      fStack0000000000000064 = param_2 - unaff_XMM6_Da;
      uStack000000000000007c = 0x7f7fffff;
      in_stack_00000058 = (fStack0000000000000064 * unaff_XMM11_Da) / fVar3;
      fStack0000000000000060 = unaff_XMM7_Da * unaff_XMM9_Da;
      fStack0000000000000070 = fVar1;
      fStack0000000000000074 = unaff_XMM6_Da;
      iStack0000000000000078 = unaff_R12D;
      FUN_1802358c0(fVar1,&stack0x00000070,&stack0x00000060,&stack0x00000040,&stack0x00000058);
      param_2 = unaff_RSI[1];
      fVar4 = param_2;
    }
    unaff_XMM6_Da = fVar4;
  } while (fVar4 < param_2);
  fVar1 = *unaff_R15;
  if (0.0 < fVar1) {
    *(undefined4 *)(unaff_RBP + 0x60) = 0xffffffff;
    iVar2 = **(int **)(unaff_RBP + 0x80);
    puStack0000000000000028 = (undefined8 *)&stack0x00000060;
    *(int *)(unaff_RBP + -0x78) = unaff_R12D;
    *(undefined4 *)(unaff_RBP + -0x74) = 0x7f7fffff;
    uStack000000000000007c = 0x7f7fffff;
    uStack0000000000000054 = 0x7f7fffff;
    fStack000000000000005c = unaff_XMM13_Da - unaff_XMM12_Da;
    fStack0000000000000060 = unaff_XMM11_Da + unaff_XMM15_Da;
    in_stack_00000058 = (1.0 - fVar1 * (1.0 / fVar3)) * unaff_XMM11_Da + unaff_XMM15_Da;
    fStack0000000000000068 = fStack0000000000000060;
    fStack0000000000000064 = fStack000000000000005c;
    if (iVar2 == unaff_R12D) {
      in_stack_00000048 = *unaff_R14;
      fStack0000000000000074 = unaff_R14[1];
      *(float *)(unaff_RBP + -0x7c) = fStack0000000000000074;
      fStack0000000000000070 = in_stack_00000048 + fVar1;
      fStack000000000000004c = fStack0000000000000074 - fVar1;
      *(float *)(unaff_RBP + -0x80) = in_stack_00000048;
                    // WARNING: Subroutine does not return
      FUN_1802354f0(fStack0000000000000070,&stack0x00000048,&stack0x00000070,unaff_RBP + -0x80,
                    &stack0x00000058);
    }
    in_stack_00000048 = *unaff_RSI;
    fStack0000000000000074 = unaff_R14[1];
    *(float *)(unaff_RBP + -0x7c) = fStack0000000000000074;
    fStack000000000000004c = fStack0000000000000074 - fVar1;
    *(float *)(unaff_RBP + -0x80) = in_stack_00000048 - fVar1;
    fStack0000000000000070 = in_stack_00000048;
                    // WARNING: Subroutine does not return
    FUN_1802354f0(in_stack_00000048 - fVar1,&stack0x00000048,&stack0x00000070,unaff_RBP + -0x80,
                  &stack0x00000058);
  }
  *(undefined1 *)(unaff_RDI + 0x30) = 1;
  return;
}






// 函数: void FUN_180231f5e(void)
void FUN_180231f5e(void)

{
  return;
}






// 函数: void FUN_180231fa0(longlong param_1,float *param_2,float *param_3,float param_4)
void FUN_180231fa0(longlong param_1,float *param_2,float *param_3,float param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  float *pfVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  float *pfVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  lVar10 = *(longlong *)(param_1 + 8);
  uVar7 = 0;
  lVar12 = (longlong)*(int *)(lVar10 + 0x10);
  fVar21 = 9999.0;
  fVar22 = 9999.0;
  fVar23 = 0.0;
  fVar24 = 0.0;
  uVar9 = uVar7;
  if (3 < lVar12) {
    lVar5 = (lVar12 - 4U >> 2) + 1;
    uVar9 = lVar5 * 4;
    pfVar6 = (float *)(*(longlong *)(lVar10 + 0x18) + 0x10);
    pfVar14 = (float *)(*(longlong *)(lVar10 + 0x18) + 0x24);
    do {
      fVar19 = pfVar6[-4];
      fVar18 = pfVar6[-3];
      fVar20 = fVar19;
      if (fVar19 <= fVar23) {
        fVar20 = fVar23;
      }
      if (fVar21 <= fVar19) {
        fVar19 = fVar21;
      }
      fVar16 = fVar18;
      if (fVar18 <= fVar24) {
        fVar16 = fVar24;
      }
      if (fVar22 <= fVar18) {
        fVar18 = fVar22;
      }
      if (fVar20 <= *pfVar6) {
        fVar20 = *pfVar6;
      }
      if (*pfVar6 <= fVar19) {
        fVar19 = *pfVar6;
      }
      if (fVar16 <= pfVar14[-4]) {
        fVar16 = pfVar14[-4];
      }
      if (pfVar14[-4] <= fVar18) {
        fVar18 = pfVar14[-4];
      }
      if (fVar20 <= pfVar6[4]) {
        fVar20 = pfVar6[4];
      }
      if (pfVar6[4] <= fVar19) {
        fVar19 = pfVar6[4];
      }
      if (fVar16 <= *pfVar14) {
        fVar16 = *pfVar14;
      }
      if (*pfVar14 <= fVar18) {
        fVar18 = *pfVar14;
      }
      fVar23 = fVar20;
      if (fVar20 <= pfVar6[8]) {
        fVar23 = pfVar6[8];
      }
      fVar21 = fVar19;
      if (pfVar6[8] <= fVar19) {
        fVar21 = pfVar6[8];
      }
      fVar24 = fVar16;
      if (fVar16 <= pfVar14[4]) {
        fVar24 = pfVar14[4];
      }
      fVar22 = fVar18;
      if (pfVar14[4] <= fVar18) {
        fVar22 = pfVar14[4];
      }
      lVar5 = lVar5 + -1;
      pfVar6 = pfVar6 + 0x10;
      pfVar14 = pfVar14 + 0x10;
    } while (lVar5 != 0);
  }
  if ((longlong)uVar9 < lVar12) {
    pfVar6 = (float *)(uVar9 * 0x10 + *(longlong *)(lVar10 + 0x18));
    lVar5 = lVar12 - uVar9;
    fVar19 = fVar21;
    fVar18 = fVar22;
    fVar20 = fVar23;
    fVar16 = fVar24;
    do {
      fVar21 = *pfVar6;
      fVar22 = pfVar6[1];
      fVar23 = fVar21;
      if (fVar21 <= fVar20) {
        fVar23 = fVar20;
      }
      if (fVar19 <= fVar21) {
        fVar21 = fVar19;
      }
      pfVar6 = pfVar6 + 4;
      fVar24 = fVar22;
      if (fVar22 <= fVar16) {
        fVar24 = fVar16;
      }
      if (fVar18 <= fVar22) {
        fVar22 = fVar18;
      }
      lVar5 = lVar5 + -1;
      fVar19 = fVar21;
      fVar18 = fVar22;
      fVar20 = fVar23;
      fVar16 = fVar24;
    } while (lVar5 != 0);
  }
  if ((fVar23 - fVar21 != 0.0) && (fVar24 - fVar22 != 0.0)) {
    fVar19 = 1.1754944e-38;
    fVar18 = 3.4028235e+38;
    fVar20 = (param_3[1] - param_2[1]) / (fVar24 - fVar22);
    fVar24 = (*param_3 - *param_2) / (fVar23 - fVar21);
    fVar23 = (fVar20 + fVar24) * 0.5;
    uVar9 = uVar7;
    if (3 < lVar12) {
      lVar5 = (lVar12 - 4U >> 2) + 1;
      uVar9 = lVar5 * 4;
      uVar8 = uVar7;
      uVar13 = uVar7;
      do {
        lVar10 = *(longlong *)(lVar10 + 0x18);
        *(float *)(uVar8 + lVar10) = *(float *)(uVar8 + lVar10) - fVar21;
        *(float *)(uVar8 + 4 + lVar10) = *(float *)(uVar8 + 4 + lVar10) - fVar22;
        *(float *)(uVar8 + lVar10) = fVar24 * *(float *)(uVar8 + lVar10);
        *(float *)(uVar8 + 4 + lVar10) = fVar20 * *(float *)(uVar8 + 4 + lVar10);
        *(float *)(uVar8 + 8 + lVar10) = fVar23 * *(float *)(uVar8 + 8 + lVar10);
        *(float *)(uVar8 + lVar10) = *param_2 + *(float *)(uVar8 + lVar10);
        *(float *)(uVar8 + 4 + lVar10) = *(float *)(uVar8 + 4 + lVar10) + param_2[1];
        lVar15 = *(longlong *)(param_1 + 8);
        if (*(int *)(lVar15 + 0x38) != 0) {
          uVar4 = ((undefined8 *)(uVar8 + lVar10))[1];
          puVar1 = (undefined8 *)(*(longlong *)(lVar15 + 0x40) + uVar8);
          *puVar1 = *(undefined8 *)(uVar8 + lVar10);
          puVar1[1] = uVar4;
          lVar15 = *(longlong *)(param_1 + 8);
        }
        lVar10 = *(longlong *)(lVar15 + 0x18);
        fVar16 = *(float *)(*(longlong *)(lVar15 + 0x68) + 0x48 + uVar13);
        fVar17 = fVar16;
        if (fVar18 <= fVar16) {
          fVar17 = fVar18;
        }
        if (fVar16 <= fVar19) {
          fVar16 = fVar19;
        }
        *(float *)(lVar10 + 0x10 + uVar8) = *(float *)(lVar10 + 0x10 + uVar8) - fVar21;
        *(float *)(lVar10 + 0x14 + uVar8) = *(float *)(lVar10 + 0x14 + uVar8) - fVar22;
        *(float *)(lVar10 + 0x10 + uVar8) = fVar24 * *(float *)(lVar10 + 0x10 + uVar8);
        *(float *)(lVar10 + 0x14 + uVar8) = fVar20 * *(float *)(lVar10 + 0x14 + uVar8);
        *(float *)(lVar10 + 0x18 + uVar8) = fVar23 * *(float *)(lVar10 + 0x18 + uVar8);
        *(float *)(lVar10 + 0x10 + uVar8) = *param_2 + *(float *)(lVar10 + 0x10 + uVar8);
        *(float *)(lVar10 + 0x14 + uVar8) = *(float *)(lVar10 + 0x14 + uVar8) + param_2[1];
        lVar15 = *(longlong *)(param_1 + 8);
        if (*(int *)(lVar15 + 0x38) != 0) {
          puVar1 = (undefined8 *)(lVar10 + 0x10 + uVar8);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(*(longlong *)(lVar15 + 0x40) + 0x10 + uVar8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          lVar15 = *(longlong *)(param_1 + 8);
        }
        lVar10 = *(longlong *)(lVar15 + 0x18);
        fVar19 = *(float *)(*(longlong *)(lVar15 + 0x68) + 0xa4 + uVar13);
        fVar18 = fVar19;
        if (fVar17 <= fVar19) {
          fVar18 = fVar17;
        }
        if (fVar19 <= fVar16) {
          fVar19 = fVar16;
        }
        *(float *)(uVar8 + 0x20 + lVar10) = *(float *)(uVar8 + 0x20 + lVar10) - fVar21;
        *(float *)(uVar8 + 0x24 + lVar10) = *(float *)(uVar8 + 0x24 + lVar10) - fVar22;
        *(float *)(uVar8 + 0x20 + lVar10) = fVar24 * *(float *)(uVar8 + 0x20 + lVar10);
        *(float *)(uVar8 + 0x24 + lVar10) = fVar20 * *(float *)(uVar8 + 0x24 + lVar10);
        *(float *)(uVar8 + 0x28 + lVar10) = fVar23 * *(float *)(uVar8 + 0x28 + lVar10);
        *(float *)(uVar8 + 0x20 + lVar10) = *param_2 + *(float *)(uVar8 + 0x20 + lVar10);
        *(float *)(uVar8 + 0x24 + lVar10) = *(float *)(uVar8 + 0x24 + lVar10) + param_2[1];
        lVar15 = *(longlong *)(param_1 + 8);
        if (*(int *)(lVar15 + 0x38) != 0) {
          puVar1 = (undefined8 *)(uVar8 + 0x20 + lVar10);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(*(longlong *)(lVar15 + 0x40) + 0x20 + uVar8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          lVar15 = *(longlong *)(param_1 + 8);
        }
        lVar3 = *(longlong *)(lVar15 + 0x18);
        fVar16 = *(float *)(*(longlong *)(lVar15 + 0x68) + 0x100 + uVar13);
        fVar17 = fVar16;
        if (fVar16 <= fVar19) {
          fVar17 = fVar19;
        }
        if (fVar18 <= fVar16) {
          fVar16 = fVar18;
        }
        *(float *)(uVar8 + 0x30 + lVar3) = *(float *)(uVar8 + 0x30 + lVar3) - fVar21;
        *(float *)(uVar8 + 0x34 + lVar3) = *(float *)(uVar8 + 0x34 + lVar3) - fVar22;
        *(float *)(uVar8 + 0x30 + lVar3) = fVar24 * *(float *)(uVar8 + 0x30 + lVar3);
        *(float *)(uVar8 + 0x34 + lVar3) = fVar20 * *(float *)(uVar8 + 0x34 + lVar3);
        *(float *)(uVar8 + 0x38 + lVar3) = fVar23 * *(float *)(uVar8 + 0x38 + lVar3);
        *(float *)(uVar8 + 0x30 + lVar3) = *param_2 + *(float *)(uVar8 + 0x30 + lVar3);
        *(float *)(uVar8 + 0x34 + lVar3) = *(float *)(uVar8 + 0x34 + lVar3) + param_2[1];
        lVar10 = *(longlong *)(param_1 + 8);
        if (*(int *)(lVar10 + 0x38) != 0) {
          puVar1 = (undefined8 *)(uVar8 + 0x30 + lVar3);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(*(longlong *)(lVar10 + 0x40) + 0x30 + uVar8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          lVar10 = *(longlong *)(param_1 + 8);
        }
        uVar8 = uVar8 + 0x40;
        fVar19 = *(float *)(*(longlong *)(lVar10 + 0x68) + 0x15c + uVar13);
        uVar13 = uVar13 + 0x170;
        fVar18 = fVar19;
        if (fVar16 <= fVar19) {
          fVar18 = fVar16;
        }
        if (fVar19 <= fVar17) {
          fVar19 = fVar17;
        }
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if ((longlong)uVar9 < lVar12) {
      lVar5 = uVar9 << 4;
      lVar15 = uVar9 * 0x5c;
      lVar12 = lVar12 - uVar9;
      fVar16 = fVar18;
      fVar17 = fVar19;
      do {
        lVar3 = *(longlong *)(lVar10 + 0x18);
        *(float *)(lVar5 + 8 + lVar3) = fVar23 * *(float *)(lVar5 + 8 + lVar3);
        fVar18 = (*(float *)(lVar5 + lVar3) - fVar21) * fVar24;
        fVar19 = (*(float *)(lVar5 + 4 + lVar3) - fVar22) * fVar20;
        *(float *)(lVar5 + lVar3) = fVar18;
        *(float *)(lVar5 + 4 + lVar3) = fVar19;
        *(float *)(lVar5 + lVar3) = fVar18 + *param_2;
        *(float *)(lVar5 + 4 + lVar3) = fVar19 + param_2[1];
        lVar10 = *(longlong *)(param_1 + 8);
        if (*(int *)(lVar10 + 0x38) != 0) {
          uVar4 = ((undefined8 *)(lVar5 + lVar3))[1];
          puVar1 = (undefined8 *)(*(longlong *)(lVar10 + 0x40) + lVar5);
          *puVar1 = *(undefined8 *)(lVar5 + lVar3);
          puVar1[1] = uVar4;
          lVar10 = *(longlong *)(param_1 + 8);
        }
        lVar5 = lVar5 + 0x10;
        fVar19 = *(float *)(*(longlong *)(lVar10 + 0x68) + 0x48 + lVar15);
        lVar15 = lVar15 + 0x5c;
        fVar18 = fVar19;
        if (fVar16 <= fVar19) {
          fVar18 = fVar16;
        }
        if (fVar19 <= fVar17) {
          fVar19 = fVar17;
        }
        lVar12 = lVar12 + -1;
        fVar16 = fVar18;
        fVar17 = fVar19;
      } while (lVar12 != 0);
    }
    uVar9 = uVar7;
    if (0 < *(int *)(lVar10 + 0x60)) {
      do {
        if (fVar18 == *(float *)(*(longlong *)(lVar10 + 0x68) + 0x48 + uVar7)) {
          *(float *)(*(longlong *)(lVar10 + 0x68) + 0x48 + uVar7) =
               (fVar19 - fVar18) * (1.0 - param_4) + fVar18;
        }
        lVar10 = *(longlong *)(param_1 + 8);
        uVar11 = (int)uVar9 + 1;
        uVar7 = uVar7 + 0x5c;
        uVar9 = (ulonglong)uVar11;
      } while ((int)uVar11 < *(int *)(lVar10 + 0x60));
    }
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  return;
}






// 函数: void FUN_180232158(void)
void FUN_180232158(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  ulonglong unaff_RBX;
  ulonglong uVar8;
  longlong lVar9;
  longlong unaff_RSI;
  longlong lVar10;
  ulonglong uVar11;
  longlong in_R9;
  longlong in_R10;
  longlong lVar12;
  float *in_R11;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float in_XMM3_Da;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float fVar17;
  float unaff_XMM6_Da;
  float fVar18;
  float fVar19;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM13_Da;
  
  fVar18 = (unaff_XMM6_Da - in_R11[1]) / unaff_XMM11_Da;
  fVar17 = (in_XMM5_Da - *in_R11) / unaff_XMM10_Da;
  fVar19 = (fVar18 + fVar17) * 0.5;
  iVar6 = (int)unaff_RBX;
  uVar8 = unaff_RBX;
  if (3 < unaff_RSI) {
    lVar9 = (unaff_RSI - 4U >> 2) + 1;
    uVar8 = lVar9 * 4;
    uVar5 = unaff_RBX;
    uVar11 = unaff_RBX;
    do {
      lVar10 = *(longlong *)(in_R10 + 0x18);
      *(float *)(uVar5 + lVar10) = *(float *)(uVar5 + lVar10) - unaff_XMM8_Da;
      *(float *)(uVar5 + 4 + lVar10) = *(float *)(uVar5 + 4 + lVar10) - unaff_XMM9_Da;
      *(float *)(uVar5 + lVar10) = fVar17 * *(float *)(uVar5 + lVar10);
      *(float *)(uVar5 + 4 + lVar10) = fVar18 * *(float *)(uVar5 + 4 + lVar10);
      *(float *)(uVar5 + 8 + lVar10) = fVar19 * *(float *)(uVar5 + 8 + lVar10);
      *(float *)(uVar5 + lVar10) = *in_R11 + *(float *)(uVar5 + lVar10);
      *(float *)(uVar5 + 4 + lVar10) = *(float *)(uVar5 + 4 + lVar10) + in_R11[1];
      lVar12 = *(longlong *)(in_R9 + 8);
      if (*(int *)(lVar12 + 0x38) != iVar6) {
        uVar4 = ((undefined8 *)(uVar5 + lVar10))[1];
        puVar1 = (undefined8 *)(*(longlong *)(lVar12 + 0x40) + uVar5);
        *puVar1 = *(undefined8 *)(uVar5 + lVar10);
        puVar1[1] = uVar4;
        lVar12 = *(longlong *)(in_R9 + 8);
      }
      lVar10 = *(longlong *)(lVar12 + 0x18);
      fVar15 = *(float *)(*(longlong *)(lVar12 + 0x68) + 0x48 + uVar11);
      fVar14 = fVar15;
      if (in_XMM3_Da <= fVar15) {
        fVar14 = in_XMM3_Da;
      }
      if (fVar15 <= in_XMM4_Da) {
        fVar15 = in_XMM4_Da;
      }
      *(float *)(lVar10 + 0x10 + uVar5) = *(float *)(lVar10 + 0x10 + uVar5) - unaff_XMM8_Da;
      *(float *)(lVar10 + 0x14 + uVar5) = *(float *)(lVar10 + 0x14 + uVar5) - unaff_XMM9_Da;
      *(float *)(lVar10 + 0x10 + uVar5) = fVar17 * *(float *)(lVar10 + 0x10 + uVar5);
      *(float *)(lVar10 + 0x14 + uVar5) = fVar18 * *(float *)(lVar10 + 0x14 + uVar5);
      *(float *)(lVar10 + 0x18 + uVar5) = fVar19 * *(float *)(lVar10 + 0x18 + uVar5);
      *(float *)(lVar10 + 0x10 + uVar5) = *in_R11 + *(float *)(lVar10 + 0x10 + uVar5);
      *(float *)(lVar10 + 0x14 + uVar5) = *(float *)(lVar10 + 0x14 + uVar5) + in_R11[1];
      lVar12 = *(longlong *)(in_R9 + 8);
      if (*(int *)(lVar12 + 0x38) != iVar6) {
        puVar1 = (undefined8 *)(lVar10 + 0x10 + uVar5);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)(*(longlong *)(lVar12 + 0x40) + 0x10 + uVar5);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        lVar12 = *(longlong *)(in_R9 + 8);
      }
      lVar10 = *(longlong *)(lVar12 + 0x18);
      fVar13 = *(float *)(*(longlong *)(lVar12 + 0x68) + 0xa4 + uVar11);
      fVar16 = fVar13;
      if (fVar14 <= fVar13) {
        fVar16 = fVar14;
      }
      if (fVar13 <= fVar15) {
        fVar13 = fVar15;
      }
      *(float *)(uVar5 + 0x20 + lVar10) = *(float *)(uVar5 + 0x20 + lVar10) - unaff_XMM8_Da;
      *(float *)(uVar5 + 0x24 + lVar10) = *(float *)(uVar5 + 0x24 + lVar10) - unaff_XMM9_Da;
      *(float *)(uVar5 + 0x20 + lVar10) = fVar17 * *(float *)(uVar5 + 0x20 + lVar10);
      *(float *)(uVar5 + 0x24 + lVar10) = fVar18 * *(float *)(uVar5 + 0x24 + lVar10);
      *(float *)(uVar5 + 0x28 + lVar10) = fVar19 * *(float *)(uVar5 + 0x28 + lVar10);
      *(float *)(uVar5 + 0x20 + lVar10) = *in_R11 + *(float *)(uVar5 + 0x20 + lVar10);
      *(float *)(uVar5 + 0x24 + lVar10) = *(float *)(uVar5 + 0x24 + lVar10) + in_R11[1];
      lVar12 = *(longlong *)(in_R9 + 8);
      if (*(int *)(lVar12 + 0x38) != iVar6) {
        puVar1 = (undefined8 *)(uVar5 + 0x20 + lVar10);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)(*(longlong *)(lVar12 + 0x40) + 0x20 + uVar5);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        lVar12 = *(longlong *)(in_R9 + 8);
      }
      lVar10 = *(longlong *)(lVar12 + 0x18);
      fVar15 = *(float *)(*(longlong *)(lVar12 + 0x68) + 0x100 + uVar11);
      fVar14 = fVar15;
      if (fVar15 <= fVar13) {
        fVar14 = fVar13;
      }
      if (fVar16 <= fVar15) {
        fVar15 = fVar16;
      }
      *(float *)(uVar5 + 0x30 + lVar10) = *(float *)(uVar5 + 0x30 + lVar10) - unaff_XMM8_Da;
      *(float *)(uVar5 + 0x34 + lVar10) = *(float *)(uVar5 + 0x34 + lVar10) - unaff_XMM9_Da;
      *(float *)(uVar5 + 0x30 + lVar10) = fVar17 * *(float *)(uVar5 + 0x30 + lVar10);
      *(float *)(uVar5 + 0x34 + lVar10) = fVar18 * *(float *)(uVar5 + 0x34 + lVar10);
      *(float *)(uVar5 + 0x38 + lVar10) = fVar19 * *(float *)(uVar5 + 0x38 + lVar10);
      *(float *)(uVar5 + 0x30 + lVar10) = *in_R11 + *(float *)(uVar5 + 0x30 + lVar10);
      *(float *)(uVar5 + 0x34 + lVar10) = *(float *)(uVar5 + 0x34 + lVar10) + in_R11[1];
      in_R10 = *(longlong *)(in_R9 + 8);
      if (*(int *)(in_R10 + 0x38) != iVar6) {
        puVar1 = (undefined8 *)(uVar5 + 0x30 + lVar10);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)(*(longlong *)(in_R10 + 0x40) + 0x30 + uVar5);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        in_R10 = *(longlong *)(in_R9 + 8);
      }
      uVar5 = uVar5 + 0x40;
      in_XMM4_Da = *(float *)(*(longlong *)(in_R10 + 0x68) + 0x15c + uVar11);
      uVar11 = uVar11 + 0x170;
      in_XMM3_Da = in_XMM4_Da;
      if (fVar15 <= in_XMM4_Da) {
        in_XMM3_Da = fVar15;
      }
      if (in_XMM4_Da <= fVar14) {
        in_XMM4_Da = fVar14;
      }
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  if ((longlong)uVar8 < unaff_RSI) {
    lVar9 = uVar8 << 4;
    lVar12 = uVar8 * 0x5c;
    lVar10 = unaff_RSI - uVar8;
    fVar15 = in_XMM3_Da;
    fVar14 = in_XMM4_Da;
    do {
      lVar3 = *(longlong *)(in_R10 + 0x18);
      *(float *)(lVar9 + 8 + lVar3) = fVar19 * *(float *)(lVar9 + 8 + lVar3);
      fVar16 = (*(float *)(lVar9 + lVar3) - unaff_XMM8_Da) * fVar17;
      fVar13 = (*(float *)(lVar9 + 4 + lVar3) - unaff_XMM9_Da) * fVar18;
      *(float *)(lVar9 + lVar3) = fVar16;
      *(float *)(lVar9 + 4 + lVar3) = fVar13;
      *(float *)(lVar9 + lVar3) = fVar16 + *in_R11;
      *(float *)(lVar9 + 4 + lVar3) = fVar13 + in_R11[1];
      in_R10 = *(longlong *)(in_R9 + 8);
      if (*(int *)(in_R10 + 0x38) != iVar6) {
        uVar4 = ((undefined8 *)(lVar9 + lVar3))[1];
        puVar1 = (undefined8 *)(*(longlong *)(in_R10 + 0x40) + lVar9);
        *puVar1 = *(undefined8 *)(lVar9 + lVar3);
        puVar1[1] = uVar4;
        in_R10 = *(longlong *)(in_R9 + 8);
      }
      lVar9 = lVar9 + 0x10;
      in_XMM4_Da = *(float *)(*(longlong *)(in_R10 + 0x68) + 0x48 + lVar12);
      lVar12 = lVar12 + 0x5c;
      in_XMM3_Da = in_XMM4_Da;
      if (fVar15 <= in_XMM4_Da) {
        in_XMM3_Da = fVar15;
      }
      if (in_XMM4_Da <= fVar14) {
        in_XMM4_Da = fVar14;
      }
      lVar10 = lVar10 + -1;
      fVar15 = in_XMM3_Da;
      fVar14 = in_XMM4_Da;
    } while (lVar10 != 0);
  }
  uVar8 = unaff_RBX;
  if (iVar6 < *(int *)(in_R10 + 0x60)) {
    do {
      if (in_XMM3_Da == *(float *)(*(longlong *)(in_R10 + 0x68) + 0x48 + unaff_RBX)) {
        *(float *)(*(longlong *)(in_R10 + 0x68) + 0x48 + unaff_RBX) =
             (in_XMM4_Da - in_XMM3_Da) * (1.0 - unaff_XMM13_Da) + in_XMM3_Da;
      }
      in_R10 = *(longlong *)(in_R9 + 8);
      uVar7 = (int)uVar8 + 1;
      unaff_RBX = unaff_RBX + 0x5c;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < *(int *)(in_R10 + 0x60));
  }
  *(undefined1 *)(in_R9 + 0x30) = 1;
  return;
}






