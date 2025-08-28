#include "TaleWorlds.Native.Split.h"

// 99_part_11_part006.c - 10 个函数

// 函数: void FUN_1806da190(void)
void FUN_1806da190(void)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t *puVar4;
  int32_t *puVar5;
  longlong unaff_RBP;
  int32_t *unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  int32_t *unaff_R15;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_XMM11_Da;
  float fVar12;
  float fVar13;
  float unaff_XMM13_Da;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float unaff_XMM15_Da;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  ulonglong in_stack_00000060;
  ulonglong in_stack_00000068;
  float in_stack_00000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  
  if (*(char *)(unaff_RBP + 0xd0) != '\0') {
    if (unaff_R12B == '\0') {
      fVar7 = *(float *)(unaff_RDI + 0x10);
      fStack0000000000000050 = -unaff_XMM15_Da;
      fVar12 = *(float *)(unaff_RDI + 0x1c);
      fVar15 = *(float *)(unaff_RDI + 0x14);
      fVar18 = *(float *)(unaff_RDI + 0x18);
      fVar10 = -(*(float *)(unaff_RDI + 0x20) + *(float *)(unaff_RDI + 0x20));
      fVar11 = fVar12 * fVar12 - unaff_XMM13_Da;
      fVar8 = -(*(float *)(unaff_RDI + 0x24) + *(float *)(unaff_RDI + 0x24));
      fVar9 = -(*(float *)(unaff_RDI + 0x28) + *(float *)(unaff_RDI + 0x28));
      fVar6 = fVar15 * fVar8 + fVar7 * fVar10 + fVar18 * fVar9;
      in_stack_00000070 =
           (fVar11 * fVar10 - (fVar15 * fVar9 - fVar18 * fVar8) * fVar12) + fVar7 * fVar6;
      fStack0000000000000040 = -fStack0000000000000040;
      fStack0000000000000074 =
           (fVar11 * fVar8 - (fVar18 * fVar10 - fVar7 * fVar9) * fVar12) + fVar15 * fVar6;
      fStack0000000000000044 = -fStack0000000000000044;
      in_stack_00000060 = *(ulonglong *)(unaff_RDI + 0x10) ^ 0x8000000080000000;
      in_stack_00000068 = *(ulonglong *)(unaff_RDI + 0x18) ^ 0x80000000;
      in_stack_00000078 =
           (fVar11 * fVar9 - (fVar7 * fVar8 - fVar15 * fVar10) * fVar12) + fVar18 * fVar6;
      fVar12 = fStack0000000000000074 - *(float *)(unaff_RBP + -0x50);
      fVar18 = in_stack_00000078 - *(float *)(unaff_RBP + -0x4c);
      fStack000000000000005c = in_stack_00000048;
      fVar15 = (in_stack_00000070 - unaff_XMM11_Da) + (in_stack_00000070 - unaff_XMM11_Da);
      fVar12 = fVar12 + fVar12;
      fVar7 = in_stack_00000048 * in_stack_00000048 - 0.5;
      fVar18 = fVar18 + fVar18;
      fVar21 = fStack0000000000000040 * fVar12 + fStack0000000000000050 * fVar15 +
               fStack0000000000000044 * fVar18;
      fVar17 = (fStack0000000000000040 * fVar18 - fStack0000000000000044 * fVar12) *
               in_stack_00000048 + fVar7 * fVar15;
      fVar11 = fVar21 * fStack0000000000000050;
      fVar14 = (fStack0000000000000044 * fVar15 - fStack0000000000000050 * fVar18) *
               in_stack_00000048 + fVar7 * fVar12;
      fVar16 = (fStack0000000000000050 * fVar12 - fStack0000000000000040 * fVar15) *
               in_stack_00000048 + fVar7 * fVar18;
      fStack0000000000000054 = fStack0000000000000040;
      fStack0000000000000058 = fStack0000000000000044;
      puVar4 = (uint64_t *)FUN_1800fcb90(&stack0x00000050,unaff_RBP + -0x80,&stack0x00000060);
      fVar7 = *(float *)(unaff_RBP + -0x3c);
      in_stack_00000060 = *puVar4;
      in_stack_00000068 = puVar4[1];
      fVar13 = fVar7 * fVar7 - 0.5;
      fVar20 = (fVar21 + fVar21) * fStack0000000000000050 + fVar17 + fVar17;
      fVar19 = (fVar21 + fVar21) * fStack0000000000000040 + fVar14 + fVar14;
      fVar22 = (fVar21 + fVar21) * fStack0000000000000044 + fVar16 + fVar16;
      fVar12 = *(float *)(unaff_RBP + -0x44);
      fVar15 = *(float *)(unaff_RBP + -0x40);
      fVar18 = *(float *)(unaff_RBP + -0x48);
      fVar10 = fVar12 * fVar19 + fVar18 * fVar20 + fVar15 * fVar22;
      fVar6 = *(float *)(unaff_RBP + -0x30);
      fVar9 = *(float *)(unaff_RBP + -0x34);
      fVar8 = *(float *)(unaff_RBP + -0x38);
      in_stack_00000070 = fVar11 + fVar17;
      fStack0000000000000074 = fVar21 * fStack0000000000000040 + fVar14;
      in_stack_00000078 = fVar21 * fStack0000000000000044 + fVar16;
      puVar5 = (int32_t *)FUN_1800fcb90(unaff_RBP + -0x48,&stack0x00000050,&stack0x00000060);
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      uVar3 = puVar5[3];
      *unaff_R15 = *puVar5;
      unaff_R15[1] = uVar1;
      unaff_R15[2] = uVar2;
      unaff_R15[3] = uVar3;
      unaff_R15[4] = fVar8 + (fVar12 * fVar22 - fVar15 * fVar19) * fVar7 + fVar13 * fVar20 +
                             fVar18 * fVar10;
      unaff_R15[5] = fVar9 + (fVar15 * fVar20 - fVar18 * fVar22) * fVar7 + fVar13 * fVar19 +
                             fVar12 * fVar10;
      unaff_R15[6] = fVar6 + (fVar18 * fVar19 - fVar12 * fVar20) * fVar7 + fVar13 * fVar22 +
                             fVar15 * fVar10;
    }
    else {
      fVar7 = *(float *)(unaff_RDI + 0x38);
      fVar12 = *(float *)(unaff_RDI + 0x2c);
      fVar15 = *(float *)(unaff_RDI + 0x30);
      fVar18 = *(float *)(unaff_RDI + 0x34);
      fVar6 = *(float *)(unaff_RDI + 0x3c);
      fVar9 = *(float *)(unaff_RDI + 0x40);
      fVar8 = -(*(float *)(unaff_RDI + 0x44) + *(float *)(unaff_RDI + 0x44));
      *(float *)(unaff_RBP + -0x3c) = fVar7;
      fVar16 = fVar7 * fVar7 - unaff_XMM13_Da;
      fVar10 = -(fVar6 + fVar6);
      fVar11 = -(fVar9 + fVar9);
      fVar6 = fVar11 * fVar15 + fVar10 * fVar12 + fVar8 * fVar18;
      fVar13 = (fVar16 * fVar10 - (fVar8 * fVar15 - fVar11 * fVar18) * fVar7) + fVar6 * fVar12;
      *(float *)(unaff_RBP + -0x48) = -fVar12;
      *(float *)(unaff_RBP + -0x38) = fVar13;
      fVar13 = fVar13 + fVar13;
      *(float *)(unaff_RBP + -0x44) = -fVar15;
      *(float *)(unaff_RBP + -0x40) = -fVar18;
      fVar9 = in_stack_00000048 * in_stack_00000048 - unaff_XMM13_Da;
      fVar17 = (fVar16 * fVar8 - (fVar11 * fVar12 - fVar10 * fVar15) * fVar7) + fVar6 * fVar18;
      fVar12 = (fVar16 * fVar11 - (fVar10 * fVar18 - fVar8 * fVar12) * fVar7) + fVar6 * fVar15;
      *(float *)(unaff_RBP + -0x30) = fVar17;
      fVar17 = fVar17 + fVar17;
      *(float *)(unaff_RBP + -0x34) = fVar12;
      fVar12 = fVar12 + fVar12;
      fVar7 = fStack0000000000000040 * fVar12 + unaff_XMM15_Da * fVar13 +
              fStack0000000000000044 * fVar17;
      fVar14 = (fStack0000000000000040 * fVar17 - fStack0000000000000044 * fVar12) *
               in_stack_00000048 + fVar9 * fVar13 + unaff_XMM15_Da * fVar7 +
               *(float *)(unaff_RBP + -0x28);
      fVar19 = (unaff_XMM15_Da * fVar12 - fStack0000000000000040 * fVar13) * in_stack_00000048 +
               fVar9 * fVar17 + fStack0000000000000044 * fVar7 + *(float *)(unaff_RBP + -0x4c);
      fVar13 = (fStack0000000000000044 * fVar13 - unaff_XMM15_Da * fVar17) * in_stack_00000048 +
               fVar9 * fVar12 + fStack0000000000000040 * fVar7 + *(float *)(unaff_RBP + -0x50);
      puVar4 = (uint64_t *)FUN_1800fcb90(&stack0x00000060,&stack0x00000050,unaff_RBP + -0x48);
      fVar7 = *(float *)(unaff_RBP + -0x20);
      fVar12 = *(float *)(unaff_RBP + -0x14);
      fVar15 = *(float *)(unaff_RBP + -0x18);
      in_stack_00000060 = *puVar4;
      in_stack_00000068 = puVar4[1];
      fVar18 = *(float *)(unaff_RBP + -0x1c);
      fVar17 = fVar14 + fVar14;
      fVar11 = fVar12 * fVar12 - 0.5;
      fVar16 = fVar13 + fVar13;
      fVar20 = fVar19 + fVar19;
      fVar10 = fVar18 * fVar16 + fVar7 * fVar17 + fVar15 * fVar20;
      fVar6 = *(float *)(unaff_RBP + -8);
      fVar9 = *(float *)(unaff_RBP + -0xc);
      fVar8 = *(float *)(unaff_RBP + -0x10);
      in_stack_00000070 = fVar14;
      fStack0000000000000074 = fVar13;
      in_stack_00000078 = fVar19;
      puVar5 = (int32_t *)FUN_1800fcb90(unaff_RBP + -0x20,unaff_RBP + -0x80,&stack0x00000060);
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      uVar3 = puVar5[3];
      *unaff_RSI = *puVar5;
      unaff_RSI[1] = uVar1;
      unaff_RSI[2] = uVar2;
      unaff_RSI[3] = uVar3;
      unaff_RSI[4] = fVar8 + (fVar18 * fVar20 - fVar15 * fVar16) * fVar12 + fVar11 * fVar17 +
                             fVar7 * fVar10;
      unaff_RSI[5] = fVar9 + (fVar15 * fVar17 - fVar7 * fVar20) * fVar12 + fVar11 * fVar16 +
                             fVar18 * fVar10;
      unaff_RSI[6] = fVar6 + (fVar7 * fVar16 - fVar18 * fVar17) * fVar12 + fVar11 * fVar20 +
                             fVar15 * fVar10;
    }
                    // WARNING: Subroutine does not return
    FUN_1806e1390();
  }
  return;
}






// 函数: void FUN_1806da19d(void)
void FUN_1806da19d(void)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t *puVar4;
  int32_t *puVar5;
  longlong unaff_RBP;
  int32_t *unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  int32_t *unaff_R15;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_XMM11_Da;
  float fVar12;
  float fVar13;
  float unaff_XMM13_Da;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float unaff_XMM15_Da;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  ulonglong in_stack_00000060;
  ulonglong in_stack_00000068;
  float in_stack_00000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  
  if (unaff_R12B == '\0') {
    fVar7 = *(float *)(unaff_RDI + 0x10);
    fStack0000000000000050 = -unaff_XMM15_Da;
    fVar12 = *(float *)(unaff_RDI + 0x1c);
    fVar15 = *(float *)(unaff_RDI + 0x14);
    fVar18 = *(float *)(unaff_RDI + 0x18);
    fVar10 = -(*(float *)(unaff_RDI + 0x20) + *(float *)(unaff_RDI + 0x20));
    fVar11 = fVar12 * fVar12 - unaff_XMM13_Da;
    fVar8 = -(*(float *)(unaff_RDI + 0x24) + *(float *)(unaff_RDI + 0x24));
    fVar9 = -(*(float *)(unaff_RDI + 0x28) + *(float *)(unaff_RDI + 0x28));
    fVar6 = fVar15 * fVar8 + fVar7 * fVar10 + fVar18 * fVar9;
    in_stack_00000070 =
         (fVar11 * fVar10 - (fVar15 * fVar9 - fVar18 * fVar8) * fVar12) + fVar7 * fVar6;
    fStack0000000000000040 = -fStack0000000000000040;
    fStack0000000000000074 =
         (fVar11 * fVar8 - (fVar18 * fVar10 - fVar7 * fVar9) * fVar12) + fVar15 * fVar6;
    fStack0000000000000044 = -fStack0000000000000044;
    in_stack_00000060 = *(ulonglong *)(unaff_RDI + 0x10) ^ 0x8000000080000000;
    in_stack_00000068 = *(ulonglong *)(unaff_RDI + 0x18) ^ 0x80000000;
    in_stack_00000078 =
         (fVar11 * fVar9 - (fVar7 * fVar8 - fVar15 * fVar10) * fVar12) + fVar18 * fVar6;
    fVar12 = fStack0000000000000074 - *(float *)(unaff_RBP + -0x50);
    fVar18 = in_stack_00000078 - *(float *)(unaff_RBP + -0x4c);
    fStack000000000000005c = in_stack_00000048;
    fVar15 = (in_stack_00000070 - unaff_XMM11_Da) + (in_stack_00000070 - unaff_XMM11_Da);
    fVar12 = fVar12 + fVar12;
    fVar7 = in_stack_00000048 * in_stack_00000048 - 0.5;
    fVar18 = fVar18 + fVar18;
    fVar21 = fStack0000000000000040 * fVar12 + fStack0000000000000050 * fVar15 +
             fStack0000000000000044 * fVar18;
    fVar17 = (fStack0000000000000040 * fVar18 - fStack0000000000000044 * fVar12) * in_stack_00000048
             + fVar7 * fVar15;
    fVar11 = fVar21 * fStack0000000000000050;
    fVar14 = (fStack0000000000000044 * fVar15 - fStack0000000000000050 * fVar18) * in_stack_00000048
             + fVar7 * fVar12;
    fVar16 = (fStack0000000000000050 * fVar12 - fStack0000000000000040 * fVar15) * in_stack_00000048
             + fVar7 * fVar18;
    fStack0000000000000054 = fStack0000000000000040;
    fStack0000000000000058 = fStack0000000000000044;
    puVar4 = (uint64_t *)FUN_1800fcb90(&stack0x00000050,unaff_RBP + -0x80,&stack0x00000060);
    fVar7 = *(float *)(unaff_RBP + -0x3c);
    in_stack_00000060 = *puVar4;
    in_stack_00000068 = puVar4[1];
    fVar13 = fVar7 * fVar7 - 0.5;
    fVar20 = (fVar21 + fVar21) * fStack0000000000000050 + fVar17 + fVar17;
    fVar19 = (fVar21 + fVar21) * fStack0000000000000040 + fVar14 + fVar14;
    fVar22 = (fVar21 + fVar21) * fStack0000000000000044 + fVar16 + fVar16;
    fVar12 = *(float *)(unaff_RBP + -0x44);
    fVar15 = *(float *)(unaff_RBP + -0x40);
    fVar18 = *(float *)(unaff_RBP + -0x48);
    fVar10 = fVar12 * fVar19 + fVar18 * fVar20 + fVar15 * fVar22;
    fVar6 = *(float *)(unaff_RBP + -0x30);
    fVar9 = *(float *)(unaff_RBP + -0x34);
    fVar8 = *(float *)(unaff_RBP + -0x38);
    in_stack_00000070 = fVar11 + fVar17;
    fStack0000000000000074 = fVar21 * fStack0000000000000040 + fVar14;
    in_stack_00000078 = fVar21 * fStack0000000000000044 + fVar16;
    puVar5 = (int32_t *)FUN_1800fcb90(unaff_RBP + -0x48,&stack0x00000050,&stack0x00000060);
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *unaff_R15 = *puVar5;
    unaff_R15[1] = uVar1;
    unaff_R15[2] = uVar2;
    unaff_R15[3] = uVar3;
    unaff_R15[4] = fVar8 + (fVar12 * fVar22 - fVar15 * fVar19) * fVar7 + fVar13 * fVar20 +
                           fVar18 * fVar10;
    unaff_R15[5] = fVar9 + (fVar15 * fVar20 - fVar18 * fVar22) * fVar7 + fVar13 * fVar19 +
                           fVar12 * fVar10;
    unaff_R15[6] = fVar6 + (fVar18 * fVar19 - fVar12 * fVar20) * fVar7 + fVar13 * fVar22 +
                           fVar15 * fVar10;
  }
  else {
    fVar7 = *(float *)(unaff_RDI + 0x38);
    fVar12 = *(float *)(unaff_RDI + 0x2c);
    fVar15 = *(float *)(unaff_RDI + 0x30);
    fVar18 = *(float *)(unaff_RDI + 0x34);
    fVar6 = *(float *)(unaff_RDI + 0x3c);
    fVar9 = *(float *)(unaff_RDI + 0x40);
    fVar8 = -(*(float *)(unaff_RDI + 0x44) + *(float *)(unaff_RDI + 0x44));
    *(float *)(unaff_RBP + -0x3c) = fVar7;
    fVar16 = fVar7 * fVar7 - unaff_XMM13_Da;
    fVar10 = -(fVar6 + fVar6);
    fVar11 = -(fVar9 + fVar9);
    fVar6 = fVar11 * fVar15 + fVar10 * fVar12 + fVar8 * fVar18;
    fVar13 = (fVar16 * fVar10 - (fVar8 * fVar15 - fVar11 * fVar18) * fVar7) + fVar6 * fVar12;
    *(float *)(unaff_RBP + -0x48) = -fVar12;
    *(float *)(unaff_RBP + -0x38) = fVar13;
    fVar13 = fVar13 + fVar13;
    *(float *)(unaff_RBP + -0x44) = -fVar15;
    *(float *)(unaff_RBP + -0x40) = -fVar18;
    fVar9 = in_stack_00000048 * in_stack_00000048 - unaff_XMM13_Da;
    fVar17 = (fVar16 * fVar8 - (fVar11 * fVar12 - fVar10 * fVar15) * fVar7) + fVar6 * fVar18;
    fVar12 = (fVar16 * fVar11 - (fVar10 * fVar18 - fVar8 * fVar12) * fVar7) + fVar6 * fVar15;
    *(float *)(unaff_RBP + -0x30) = fVar17;
    fVar17 = fVar17 + fVar17;
    *(float *)(unaff_RBP + -0x34) = fVar12;
    fVar12 = fVar12 + fVar12;
    fVar7 = fStack0000000000000040 * fVar12 + unaff_XMM15_Da * fVar13 +
            fStack0000000000000044 * fVar17;
    fVar14 = (fStack0000000000000040 * fVar17 - fStack0000000000000044 * fVar12) * in_stack_00000048
             + fVar9 * fVar13 + unaff_XMM15_Da * fVar7 + *(float *)(unaff_RBP + -0x28);
    fVar19 = (unaff_XMM15_Da * fVar12 - fStack0000000000000040 * fVar13) * in_stack_00000048 +
             fVar9 * fVar17 + fStack0000000000000044 * fVar7 + *(float *)(unaff_RBP + -0x4c);
    fVar13 = (fStack0000000000000044 * fVar13 - unaff_XMM15_Da * fVar17) * in_stack_00000048 +
             fVar9 * fVar12 + fStack0000000000000040 * fVar7 + *(float *)(unaff_RBP + -0x50);
    puVar4 = (uint64_t *)FUN_1800fcb90(&stack0x00000060,&stack0x00000050,unaff_RBP + -0x48);
    fVar7 = *(float *)(unaff_RBP + -0x20);
    fVar12 = *(float *)(unaff_RBP + -0x14);
    fVar15 = *(float *)(unaff_RBP + -0x18);
    in_stack_00000060 = *puVar4;
    in_stack_00000068 = puVar4[1];
    fVar18 = *(float *)(unaff_RBP + -0x1c);
    fVar17 = fVar14 + fVar14;
    fVar11 = fVar12 * fVar12 - 0.5;
    fVar16 = fVar13 + fVar13;
    fVar20 = fVar19 + fVar19;
    fVar10 = fVar18 * fVar16 + fVar7 * fVar17 + fVar15 * fVar20;
    fVar6 = *(float *)(unaff_RBP + -8);
    fVar9 = *(float *)(unaff_RBP + -0xc);
    fVar8 = *(float *)(unaff_RBP + -0x10);
    in_stack_00000070 = fVar14;
    fStack0000000000000074 = fVar13;
    in_stack_00000078 = fVar19;
    puVar5 = (int32_t *)FUN_1800fcb90(unaff_RBP + -0x20,unaff_RBP + -0x80,&stack0x00000060);
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *unaff_RSI = *puVar5;
    unaff_RSI[1] = uVar1;
    unaff_RSI[2] = uVar2;
    unaff_RSI[3] = uVar3;
    unaff_RSI[4] = fVar8 + (fVar18 * fVar20 - fVar15 * fVar16) * fVar12 + fVar11 * fVar17 +
                           fVar7 * fVar10;
    unaff_RSI[5] = fVar9 + (fVar15 * fVar17 - fVar7 * fVar20) * fVar12 + fVar11 * fVar16 +
                           fVar18 * fVar10;
    unaff_RSI[6] = fVar6 + (fVar7 * fVar16 - fVar18 * fVar17) * fVar12 + fVar11 * fVar20 +
                           fVar15 * fVar10;
  }
                    // WARNING: Subroutine does not return
  FUN_1806e1390();
}






// 函数: void FUN_1806da96d(void)
void FUN_1806da96d(void)

{
  return;
}






// 函数: void FUN_1806da9d0(longlong param_1,int32_t param_2)
void FUN_1806da9d0(longlong param_1,int32_t param_2)

{
  *(int32_t *)(param_1 + 4) = 0;
  *(int32_t *)(param_1 + 0xc) = 0;
  *(uint64_t *)(param_1 + 0x10) = 0x3f800000;
  *(int32_t *)(param_1 + 0x1c) = 0;
  *(int32_t *)(param_1 + 0x20) = 0x3f800000;
                    // WARNING: Subroutine does not return
  FUN_1808fd400(param_2);
}






// 函数: void FUN_1806daa30(longlong param_1,int32_t param_2)
void FUN_1806daa30(longlong param_1,int32_t param_2)

{
  *(int32_t *)(param_1 + 8) = 0;
  *(uint64_t *)(param_1 + 0x10) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(int32_t *)(param_1 + 0x20) = 0x3f800000;
                    // WARNING: Subroutine does not return
  FUN_1808fd400(param_2);
}






// 函数: void FUN_1806daa90(uint64_t param_1,int32_t param_2)
void FUN_1806daa90(uint64_t param_1,int32_t param_2)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd400(param_2);
}






// 函数: void FUN_1806dab20(uint64_t param_1,int32_t param_2)
void FUN_1806dab20(uint64_t param_1,int32_t param_2)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd400(param_2);
}






// 函数: void FUN_1806dab90(uint64_t *param_1,int32_t param_2)
void FUN_1806dab90(uint64_t *param_1,int32_t param_2)

{
  *param_1 = 0x3f800000;
  param_1[1] = 0;
  param_1[2] = 0x3f800000;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 0x3f800000;
                    // WARNING: Subroutine does not return
  FUN_1808fd400(param_2);
}






// 函数: void FUN_1806dac00(uint64_t param_1,int32_t param_2)
void FUN_1806dac00(uint64_t param_1,int32_t param_2)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd400(param_2);
}






// 函数: void FUN_1806dac70(longlong *param_1,longlong param_2,uint64_t param_3,uint64_t param_4,
void FUN_1806dac70(longlong *param_1,longlong param_2,uint64_t param_3,uint64_t param_4,
                  uint param_5)

{
  char cVar1;
  uint uVar2;
  float *pfVar3;
  uint uVar4;
  uint64_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint64_t uVar23;
  longlong lVar24;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  uint64_t uStack_148;
  uint64_t uStack_140;
  uint64_t uStack_138;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  int8_t auStack_f0 [16];
  int32_t uStack_e0;
  int32_t uStack_dc;
  int32_t uStack_d8;
  int32_t uStack_d4;
  uint64_t uStack_d0;
  int32_t uStack_c8;
  
  FUN_1806df310(&fStack_188,&fStack_110,param_2,param_3,param_4);
  if ((param_5 & 1) != 0) {
    (**(code **)(*param_1 + 8))(param_1,&fStack_188,&fStack_110);
  }
  if ((param_5 & 2) == 0) {
    return;
  }
  fVar16 = (fStack_100 - fStack_178) + (fStack_100 - fStack_178);
  fVar13 = (fStack_fc - fStack_174) + (fStack_fc - fStack_174);
  fVar17 = (fStack_f8 - fStack_170) + (fStack_f8 - fStack_170);
  fStack_1a8 = -fStack_188;
  fStack_1a0 = -fStack_180;
  fVar11 = fStack_17c * fStack_17c - 0.5;
  fStack_1a4 = -fStack_184;
  fStack_19c = fStack_17c;
  fVar8 = fStack_1a4 * fVar13 + fStack_1a8 * fVar16 + fStack_1a0 * fVar17;
  fVar22 = (fStack_1a4 * fVar17 - fStack_1a0 * fVar13) * fStack_17c + fVar11 * fVar16 +
           fVar8 * fStack_1a8;
  fVar21 = (fStack_1a0 * fVar16 - fStack_1a8 * fVar17) * fStack_17c + fVar11 * fVar13 +
           fVar8 * fStack_1a4;
  fVar20 = (fStack_1a8 * fVar13 - fStack_1a4 * fVar16) * fStack_17c + fVar11 * fVar17 +
           fVar8 * fStack_1a0;
  pfVar3 = (float *)FUN_1800fcb90(&fStack_1a8,auStack_f0,&fStack_110);
  fVar14 = fStack_188 + fStack_188;
  fStack_11c = pfVar3[1];
  fVar8 = pfVar3[2];
  fVar11 = *pfVar3;
  fVar13 = pfVar3[3];
  fVar16 = fStack_184 + fStack_184;
  fVar9 = fStack_180 * (fStack_180 + fStack_180);
  fVar17 = fStack_17c * (fStack_180 + fStack_180);
  fStack_164 = (1.0 - fStack_184 * fVar16) - fVar9;
  fStack_160 = fVar17 + fStack_184 * fVar14;
  fVar17 = fStack_184 * fVar14 - fVar17;
  fVar19 = fStack_17c * fVar16 + fStack_180 * fVar14;
  fStack_15c = fStack_180 * fVar14 - fStack_17c * fVar16;
  fVar18 = fStack_180 * fVar16 - fStack_17c * fVar14;
  fStack_14c = fStack_180 * fVar16 + fStack_17c * fVar14;
  uStack_148 = CONCAT44(fStack_160,fStack_164);
  fVar14 = 1.0 - fStack_188 * fVar14;
  uStack_140 = CONCAT44(fVar17,fStack_15c);
  fStack_158 = fVar14 - fStack_184 * fVar16;
  fVar14 = fVar14 - fVar9;
  uStack_138 = CONCAT44(fStack_14c,fVar14);
  fStack_154 = (1.0 - fStack_10c * (fStack_10c + fStack_10c)) -
               fStack_108 * (fStack_108 + fStack_108);
  fStack_150 = fStack_108 * (fStack_110 + fStack_110) - fStack_104 * (fStack_10c + fStack_10c);
  fVar16 = fStack_104 * (fStack_108 + fStack_108) + fStack_10c * (fStack_110 + fStack_110);
  fStack_168 = fVar19;
  fStack_130 = fVar19;
  fStack_12c = fVar18;
  fStack_128 = fStack_158;
  fStack_120 = fVar8;
  fStack_118 = fVar14;
  if (*(char *)(param_2 + 0x1dd) == '\0') goto LAB_1806db1d3;
  uVar6 = (int32_t)((ulonglong)param_4 >> 0x20);
  switch(*(int32_t *)(param_2 + 0x1c8)) {
  case 1:
    param_4 = CONCAT44(uVar6,fVar22);
    FUN_1806e37c0(param_1,&fStack_178,&uStack_148,param_2 + 0x80,param_4);
    break;
  case 2:
    param_4 = CONCAT44(uVar6,fVar21);
    FUN_1806e37c0(param_1,&fStack_178,(longlong)&uStack_140 + 4,param_2 + 0x9c,param_4);
    break;
  case 3:
    lVar24 = param_2 + 0x9c;
    pfVar3 = (float *)((longlong)&uStack_140 + 4);
    fVar9 = fVar21;
    goto code_r0x0001806db100;
  case 4:
    param_4 = CONCAT44(uVar6,fVar20);
    FUN_1806e37c0(param_1,&fStack_178,&fStack_130,param_2 + 0xb8,param_4);
    break;
  case 5:
    lVar24 = param_2 + 0xb8;
    pfVar3 = &fStack_130;
    fVar9 = fVar20;
code_r0x0001806db100:
    param_4 = CONCAT44(uVar6,fVar22);
    FUN_1806e38f0(param_1,&fStack_178,&uStack_148,param_2 + 0x80,param_4,pfVar3,lVar24,fVar9);
    break;
  case 6:
    param_4 = CONCAT44(uVar6,fVar21);
    FUN_1806e38f0(param_1,&fStack_178,(longlong)&uStack_140 + 4,param_2 + 0x9c,param_4,&fStack_130,
                  param_2 + 0xb8,fVar20);
    break;
  case 7:
    param_4 = CONCAT44(uVar6,fVar22);
    FUN_1806e3150(param_1,&fStack_178,&uStack_148,param_2 + 0x80,param_4,(longlong)&uStack_140 + 4,
                  param_2 + 0x9c,fVar21,&fStack_130,param_2 + 0xb8,fVar20);
  }
LAB_1806db1d3:
  fVar9 = 0.0;
  if (*(char *)(param_2 + 0x1dc) != '\0') {
    uVar2 = *(uint *)(param_2 + 0x1c8);
    fVar10 = 0.0;
    fVar12 = 0.0;
    fVar15 = 0.0;
    if ((uVar2 & 1) != 0) {
      fVar10 = fVar22 * fStack_164;
      fVar12 = fStack_160 * fVar22;
      fVar15 = fStack_15c * fVar22;
    }
    if ((uVar2 & 2) != 0) {
      fVar10 = fVar10 + fVar17 * fVar21;
      fVar12 = fVar12 + fVar14 * fVar21;
      fVar15 = fVar15 + fStack_14c * fVar21;
    }
    if ((uVar2 & 4) != 0) {
      fVar10 = fVar10 + fVar19 * fVar20;
      fVar12 = fVar12 + fVar18 * fVar20;
      fVar15 = fVar15 + fStack_158 * fVar20;
    }
    fVar14 = SQRT(fVar10 * fVar10 + fVar12 * fVar12 + fVar15 * fVar15);
    if (*(float *)(param_2 + 0x1d0) <= fVar14 && fVar14 != *(float *)(param_2 + 0x1d0)) {
      uVar5 = 0xff0000;
      if (fVar14 < *(float *)(param_2 + 0x7c) || fVar14 == *(float *)(param_2 + 0x7c)) {
        uVar5 = 0xff00;
      }
      (**(code **)(*param_1 + 0x30))(param_1,&fStack_178,&fStack_100,uVar5);
    }
  }
  uVar6 = (int32_t)((ulonglong)param_4 >> 0x20);
  if (fVar11 == 0.0) {
    fVar14 = 0.0;
    fVar19 = 1.0;
  }
  else {
    fVar19 = 1.0 / SQRT(fVar13 * fVar13 + fVar11 * fVar11);
    fVar14 = fVar11 * fVar19;
    fVar19 = fVar13 * fVar19;
  }
  uVar2 = *(uint *)(param_2 + 0x1c8);
  fVar20 = -fVar14;
  fStack_1a8 = fVar13 * fVar20 + fVar11 * fVar19;
  fVar11 = fVar13 * fVar19 - fVar11 * fVar20;
  fVar13 = fVar8 * fVar19 - fStack_11c * fVar20;
  fVar8 = fVar8 * fVar20 + fStack_11c * fVar19;
  fStack_1a4 = fVar8;
  fStack_1a0 = fVar13;
  fStack_19c = fVar11;
  if ((uVar2 & 8) != 0) {
    fVar20 = SQRT(fVar19 * fVar19 + fVar14 * fVar14);
    if (fVar20 != 0.0) {
      fVar20 = 1.0 / fVar20;
      fVar19 = fVar20 * fVar19;
      fVar14 = fVar20 * fVar14;
    }
    if (fVar19 <= -1.0) {
      fVar19 = -1.0;
    }
    if (1.0 <= fVar19) {
      fVar19 = 1.0;
    }
    fVar19 = (float)acosf(fVar19);
    fVar19 = fVar19 + fVar19;
    if (fVar14 < 0.0) {
      fVar19 = -fVar19;
    }
    fVar14 = *(float *)(param_2 + 0xe4);
    if ((0.0 < *(float *)(param_2 + 0xe0)) || (0.0 < *(float *)(param_2 + 0xdc))) {
      fVar14 = 0.0;
    }
    uVar5 = CONCAT71((int7)((ulonglong)param_4 >> 8),
                     *(float *)(param_2 + 0xe8) - fVar14 < fVar19 ||
                     fVar19 < fVar14 + *(float *)(param_2 + 0xec));
    (**(code **)(*param_1 + 0x18))
              (param_1,&fStack_188,*(float *)(param_2 + 0xec),*(float *)(param_2 + 0xe8),uVar5);
    uVar6 = (int32_t)((ulonglong)uVar5 >> 0x20);
    uVar2 = *(uint *)(param_2 + 0x1c8);
  }
  uVar4 = uVar2 >> 4;
  if (((uVar4 & 1) == 0) || ((uVar2 >> 5 & 1) == 0)) {
    if (((byte)(uVar2 >> 5) & 1) == ((byte)uVar4 & 1)) {
      return;
    }
    cVar1 = *(char *)(param_2 + 0x1df);
    uStack_138 = 0;
    fStack_130 = 0.0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_148 = 0x8000000080000000;
    uStack_140 = 0x3f3504f3bf3504f3;
    uStack_e0 = 0;
    uStack_dc = 0x3f3504f3;
    uStack_d8 = 0;
    uStack_d4 = 0x3f3504f3;
    if ((uVar4 & 1) == 0) {
      if ((*(uint *)(param_2 + 0x1c4) & 0x10) == 0) {
        if (cVar1 != '\0') {
          return;
        }
        pfVar3 = (float *)FUN_1800fcb90(&fStack_188,auStack_f0,&uStack_148);
        fStack_1a8 = *pfVar3;
        fStack_1a4 = pfVar3[1];
        fStack_1a0 = pfVar3[2];
        fStack_19c = pfVar3[3];
        fStack_198 = fStack_178;
        fStack_190 = fStack_170;
        fVar8 = fVar16 * fStack_118 + fStack_154 * fVar17 + fStack_150 * fStack_14c;
        uVar7 = *(int32_t *)(param_2 + 0x108);
        goto LAB_1806db85b;
      }
      if (cVar1 == '\0') {
        pfVar3 = (float *)FUN_1800fcb90(&fStack_188,auStack_f0,&uStack_e0);
        fStack_1a8 = *pfVar3;
        fStack_1a4 = pfVar3[1];
        fStack_1a0 = pfVar3[2];
        fStack_19c = pfVar3[3];
        fStack_194 = fStack_174;
        fStack_198 = fStack_178;
        fStack_190 = fStack_170;
        FUN_1806e30c0(param_1,param_2,&fStack_1a8,fVar13,fVar11,*(int32_t *)(param_2 + 0x108));
        return;
      }
      uVar23 = 1;
      uVar5 = 0;
    }
    else {
      if ((*(uint *)(param_2 + 0x1c4) & 0x20) == 0) {
        if (cVar1 != '\0') {
          return;
        }
        pfVar3 = (float *)FUN_1800fcb90(&fStack_188,auStack_f0,&uStack_e0);
        fStack_1a8 = *pfVar3;
        fStack_1a4 = pfVar3[1];
        fStack_1a0 = pfVar3[2];
        fStack_19c = pfVar3[3];
        fStack_198 = fStack_178;
        fStack_190 = fStack_170;
        fVar8 = fVar16 * fVar18 + fStack_154 * fStack_168 + fStack_150 * fStack_158;
        uVar7 = *(int32_t *)(param_2 + 0x104);
LAB_1806db85b:
        fStack_194 = fStack_174;
        FUN_1806e3720(param_1,param_2,&fStack_1a8,fVar8,CONCAT44(uVar6,uVar7));
        return;
      }
      if (cVar1 == '\0') {
        pfVar3 = (float *)FUN_1800fcb90(&fStack_188,auStack_f0,&uStack_148);
        fStack_1a8 = *pfVar3;
        fStack_1a4 = pfVar3[1];
        fStack_1a0 = pfVar3[2];
        fStack_19c = pfVar3[3];
        fStack_194 = fStack_174;
        fStack_198 = fStack_178;
        fStack_190 = fStack_170;
        FUN_1806e30c0(param_1,param_2,&fStack_1a8,fVar8,fVar11,*(int32_t *)(param_2 + 0x104));
        return;
      }
      uVar23 = 0;
      uVar5 = 1;
    }
  }
  else {
    if (*(char *)(param_2 + 0x1de) != '\0') {
      fVar8 = (float)atan2f(fVar8,fVar11 + 1.0);
      fVar11 = (float)atan2f(fVar13,fVar11 + 1.0);
      if ((*(float *)(param_2 + 0xfc) <= 0.0) && (*(float *)(param_2 + 0xf8) <= 0.0)) {
        fVar9 = *(float *)(param_2 + 0x100);
      }
      fVar13 = *(float *)(param_2 + 0x108);
      lVar24 = *param_1;
      fVar11 = (ABS(fVar11 * 4.0) + fVar9) / fVar13;
      fVar8 = (ABS(fVar8 * 4.0) + fVar9) / *(float *)(param_2 + 0x104);
      uVar6 = tanf(*(float *)(param_2 + 0x104) * 0.25);
      uVar7 = tanf(fVar13 * 0.25);
      (**(code **)(lVar24 + 0x20))
                (param_1,&fStack_188,uVar7,uVar6,1.0 < fVar11 * fVar11 + fVar8 * fVar8);
    }
    if (*(char *)(param_2 + 0x1df) == '\0') {
      return;
    }
    uVar23 = 1;
    uVar5 = 1;
  }
  FUN_1806df8b0(param_1,param_2,&fStack_188,&fStack_1a8,uVar5,uVar23);
  return;
}






