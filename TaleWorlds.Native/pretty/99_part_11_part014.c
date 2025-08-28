#include "TaleWorlds.Native.Split.h"

// 99_part_11_part014.c - 7 个函数

// 函数: void FUN_1806e7ef5(uint64_t param_1,uint param_2)
void FUN_1806e7ef5(uint64_t param_1,uint param_2)

{
  float fVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  char in_AL;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int32_t *unaff_RSI;
  int32_t *unaff_R14;
  char unaff_R15B;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_XMM10_Da;
  float fVar13;
  float unaff_XMM11_Da;
  float fVar14;
  float unaff_XMM12_Da;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float unaff_XMM15_Da;
  float fStack0000000000000040;
  float fStack0000000000000044;
  ulonglong in_stack_00000048;
  ulonglong in_stack_00000050;
  float in_stack_00000058;
  float fStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float in_stack_00000070;
  
  if (in_AL != '\0') {
    if (unaff_R15B == '\0') {
      fVar1 = *(float *)(unaff_RBX + 0x10);
      fVar8 = *(float *)(unaff_RBX + 0x1c);
      fVar10 = *(float *)(unaff_RBX + 0x14);
      in_stack_00000048 = *(ulonglong *)(unaff_RBX + 0x10);
      fVar13 = *(float *)(unaff_RBX + 0x18);
      in_stack_00000050 = *(ulonglong *)(unaff_RBX + 0x18);
      fVar9 = (float)((uint)(*(float *)(unaff_RBX + 0x20) + *(float *)(unaff_RBX + 0x20)) ^ param_2)
      ;
      fVar14 = (float)((uint)(*(float *)(unaff_RBX + 0x24) + *(float *)(unaff_RBX + 0x24)) ^ param_2
                      );
      fVar11 = (float)((uint)(*(float *)(unaff_RBX + 0x28) + *(float *)(unaff_RBX + 0x28)) ^ param_2
                      );
      fVar12 = fVar8 * fVar8 - unaff_XMM11_Da;
      fVar7 = fVar10 * fVar14 + fVar1 * fVar9 + fVar13 * fVar11;
      in_stack_00000058 =
           (fVar12 * fVar9 - (fVar10 * fVar11 - fVar13 * fVar14) * fVar8) + fVar1 * fVar7;
      fStack000000000000005c =
           (fVar12 * fVar14 - (fVar13 * fVar9 - fVar1 * fVar11) * fVar8) + fVar10 * fVar7;
      in_stack_00000060 =
           (fVar12 * fVar11 - (fVar1 * fVar14 - fVar10 * fVar9) * fVar8) + fVar13 * fVar7;
      fVar13 = -unaff_XMM10_Da;
      fVar8 = -unaff_XMM12_Da;
      *(float *)(unaff_RBP + -0x3c) = fStack0000000000000044;
      fVar9 = -unaff_XMM15_Da;
      in_stack_00000048 = in_stack_00000048 ^ 0x8000000080000000;
      in_stack_00000050 = in_stack_00000050 ^ 0x80000000;
      *(float *)(unaff_RBP + -0x48) = fVar9;
      *(float *)(unaff_RBP + -0x44) = fVar13;
      *(float *)(unaff_RBP + 0xb0) = fVar8;
      *(float *)(unaff_RBP + -0x40) = fVar8;
      fVar1 = *(float *)(unaff_RBP + 0xb0);
      fVar11 = (in_stack_00000058 - fStack0000000000000068) +
               (in_stack_00000058 - fStack0000000000000068);
      fVar7 = (fStack000000000000005c - fStack000000000000006c) +
              (fStack000000000000005c - fStack000000000000006c);
      fVar14 = (in_stack_00000060 - in_stack_00000070) + (in_stack_00000060 - in_stack_00000070);
      fVar10 = fStack0000000000000044 * fStack0000000000000044 - 0.5;
      fVar8 = fVar13 * fVar7 + fVar9 * fVar11 + fVar8 * fVar14;
      fVar15 = (fVar13 * fVar14 - fVar1 * fVar7) * fStack0000000000000044 + fVar10 * fVar11 +
               fVar8 * fVar9;
      fVar17 = (fVar1 * fVar11 - fVar9 * fVar14) * fStack0000000000000044 + fVar10 * fVar7 +
               fVar8 * fVar13;
      fVar19 = (fVar9 * fVar7 - fVar13 * fVar11) * fStack0000000000000044 + fVar10 * fVar14 +
               fVar8 * fVar1;
      puVar2 = (uint64_t *)FUN_1800fcb90(unaff_RBP + -0x48,&stack0x00000078,&stack0x00000048);
      fVar1 = *(float *)(unaff_RBP + -100);
      fVar8 = *(float *)(unaff_RBP + -0x5c);
      fVar10 = *(float *)(unaff_RBP + -0x60);
      in_stack_00000048 = *puVar2;
      in_stack_00000050 = puVar2[1];
      fVar13 = *(float *)(unaff_RBP + -0x68);
      fVar16 = fVar15 + fVar15;
      fVar18 = fVar17 + fVar17;
      fVar20 = fVar19 + fVar19;
      fVar12 = fVar8 * fVar8 - 0.5;
      fVar9 = fVar1 * fVar18 + fVar13 * fVar16 + fVar10 * fVar20;
      fVar7 = *(float *)(unaff_RBP + -0x50);
      fVar11 = *(float *)(unaff_RBP + -0x54);
      fVar14 = *(float *)(unaff_RBP + -0x58);
      in_stack_00000058 = fVar15;
      fStack000000000000005c = fVar17;
      in_stack_00000060 = fVar19;
      puVar3 = (int32_t *)FUN_1800fcb90(unaff_RBP + -0x68,unaff_RBP + -0x48,&stack0x00000048);
      uVar4 = puVar3[1];
      uVar5 = puVar3[2];
      uVar6 = puVar3[3];
      *unaff_R14 = *puVar3;
      unaff_R14[1] = uVar4;
      unaff_R14[2] = uVar5;
      unaff_R14[3] = uVar6;
      unaff_R14[4] = fVar14 + (fVar1 * fVar20 - fVar10 * fVar18) * fVar8 + fVar12 * fVar16 +
                              fVar13 * fVar9;
      unaff_R14[5] = fVar11 + (fVar10 * fVar16 - fVar13 * fVar20) * fVar8 + fVar12 * fVar18 +
                              fVar1 * fVar9;
      unaff_R14[6] = fVar7 + (fVar13 * fVar18 - fVar1 * fVar16) * fVar8 + fVar12 * fVar20 +
                             fVar10 * fVar9;
    }
    else {
      fVar1 = *(float *)(unaff_RBX + 0x2c);
      fVar8 = *(float *)(unaff_RBX + 0x38);
      fVar10 = *(float *)(unaff_RBX + 0x30);
      fVar13 = *(float *)(unaff_RBX + 0x34);
      fVar7 = *(float *)(unaff_RBX + 0x44);
      fVar11 = *(float *)(unaff_RBX + 0x3c);
      fVar14 = *(float *)(unaff_RBX + 0x40);
      *(float *)(unaff_RBP + -0x5c) = fVar8;
      fVar9 = (float)((uint)(fVar7 + fVar7) ^ param_2);
      fVar12 = (float)((uint)(fVar11 + fVar11) ^ param_2);
      fVar17 = fVar8 * fVar8 - unaff_XMM11_Da;
      fVar11 = (float)((uint)(fVar14 + fVar14) ^ param_2);
      fVar7 = fVar10 * fVar11 + fVar1 * fVar12 + fVar13 * fVar9;
      fVar14 = (fVar17 * fVar12 - (fVar10 * fVar9 - fVar13 * fVar11) * fVar8) + fVar1 * fVar7;
      *(float *)(unaff_RBP + -0x58) = fVar14;
      fVar14 = fVar14 + fVar14;
      fVar18 = (fVar17 * fVar11 - (fVar13 * fVar12 - fVar1 * fVar9) * fVar8) + fVar10 * fVar7;
      *(float *)(unaff_RBP + -0x54) = fVar18;
      fVar18 = fVar18 + fVar18;
      fVar7 = (fVar17 * fVar9 - (fVar1 * fVar11 - fVar10 * fVar12) * fVar8) + fVar13 * fVar7;
      *(float *)(unaff_RBP + -0x68) = -fVar1;
      *(float *)(unaff_RBP + -100) = -fVar10;
      *(float *)(unaff_RBP + -0x50) = fVar7;
      fVar7 = fVar7 + fVar7;
      *(float *)(unaff_RBP + -0x60) = -fVar13;
      fVar10 = fStack0000000000000044 * fStack0000000000000044 - 0.5;
      fVar1 = *(float *)(unaff_RBP + 0xb0);
      fVar8 = fVar18 * unaff_XMM10_Da + fVar14 * unaff_XMM15_Da + fVar7 * unaff_XMM12_Da;
      fVar15 = (fVar7 * unaff_XMM10_Da - fVar18 * fVar1) * fStack0000000000000044 + fVar10 * fVar14
               + fVar8 * unaff_XMM15_Da + fStack0000000000000068;
      fVar17 = (fVar14 * fVar1 - fVar7 * unaff_XMM15_Da) * fStack0000000000000044 + fVar10 * fVar18
               + fVar8 * fStack0000000000000040 + fStack000000000000006c;
      fVar19 = (fVar18 * unaff_XMM15_Da - fVar14 * fStack0000000000000040) * fStack0000000000000044
               + fVar10 * fVar7 + fVar8 * fVar1 + in_stack_00000070;
      puVar2 = (uint64_t *)FUN_1800fcb90(&stack0x00000048,unaff_RBP + -0x48,unaff_RBP + -0x68);
      fVar1 = *(float *)(unaff_RBP + -0x2c);
      fVar8 = *(float *)(unaff_RBP + -0x30);
      fVar10 = *(float *)(unaff_RBP + -0x34);
      in_stack_00000048 = *puVar2;
      in_stack_00000050 = puVar2[1];
      fVar13 = *(float *)(unaff_RBP + -0x38);
      fVar16 = fVar15 + fVar15;
      fVar12 = fVar1 * fVar1 - 0.5;
      fVar18 = fVar17 + fVar17;
      fVar20 = fVar19 + fVar19;
      fVar9 = fVar10 * fVar18 + fVar13 * fVar16 + fVar8 * fVar20;
      fVar7 = *(float *)(unaff_RBP + -0x20);
      fVar11 = *(float *)(unaff_RBP + -0x24);
      fVar14 = *(float *)(unaff_RBP + -0x28);
      in_stack_00000058 = fVar15;
      fStack000000000000005c = fVar17;
      in_stack_00000060 = fVar19;
      puVar3 = (int32_t *)FUN_1800fcb90(unaff_RBP + -0x38,&stack0x00000078,&stack0x00000048);
      uVar4 = puVar3[1];
      uVar5 = puVar3[2];
      uVar6 = puVar3[3];
      *unaff_RSI = *puVar3;
      unaff_RSI[1] = uVar4;
      unaff_RSI[2] = uVar5;
      unaff_RSI[3] = uVar6;
      unaff_RSI[4] = fVar14 + (fVar10 * fVar20 - fVar8 * fVar18) * fVar1 + fVar12 * fVar16 +
                              fVar13 * fVar9;
      unaff_RSI[5] = fVar11 + (fVar8 * fVar16 - fVar13 * fVar20) * fVar1 + fVar12 * fVar18 +
                              fVar10 * fVar9;
      unaff_RSI[6] = fVar7 + (fVar13 * fVar18 - fVar10 * fVar16) * fVar1 + fVar12 * fVar20 +
                             fVar8 * fVar9;
    }
                    // WARNING: Subroutine does not return
    FUN_1806e1390();
  }
  return;
}






// 函数: void FUN_1806e7efd(uint64_t param_1,uint param_2)
void FUN_1806e7efd(uint64_t param_1,uint param_2)

{
  float fVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t *puVar5;
  int32_t *puVar6;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int32_t *unaff_RSI;
  int32_t *unaff_R14;
  char unaff_R15B;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_XMM10_Da;
  float fVar13;
  float unaff_XMM11_Da;
  float fVar14;
  float unaff_XMM12_Da;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float unaff_XMM15_Da;
  float fStack0000000000000040;
  float fStack0000000000000044;
  ulonglong in_stack_00000048;
  ulonglong in_stack_00000050;
  float in_stack_00000058;
  float fStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float in_stack_00000070;
  
  if (unaff_R15B == '\0') {
    fVar1 = *(float *)(unaff_RBX + 0x10);
    fVar8 = *(float *)(unaff_RBX + 0x1c);
    fVar10 = *(float *)(unaff_RBX + 0x14);
    in_stack_00000048 = *(ulonglong *)(unaff_RBX + 0x10);
    fVar13 = *(float *)(unaff_RBX + 0x18);
    in_stack_00000050 = *(ulonglong *)(unaff_RBX + 0x18);
    fVar9 = (float)((uint)(*(float *)(unaff_RBX + 0x20) + *(float *)(unaff_RBX + 0x20)) ^ param_2);
    fVar14 = (float)((uint)(*(float *)(unaff_RBX + 0x24) + *(float *)(unaff_RBX + 0x24)) ^ param_2);
    fVar11 = (float)((uint)(*(float *)(unaff_RBX + 0x28) + *(float *)(unaff_RBX + 0x28)) ^ param_2);
    fVar12 = fVar8 * fVar8 - unaff_XMM11_Da;
    fVar7 = fVar10 * fVar14 + fVar1 * fVar9 + fVar13 * fVar11;
    in_stack_00000058 =
         (fVar12 * fVar9 - (fVar10 * fVar11 - fVar13 * fVar14) * fVar8) + fVar1 * fVar7;
    fStack000000000000005c =
         (fVar12 * fVar14 - (fVar13 * fVar9 - fVar1 * fVar11) * fVar8) + fVar10 * fVar7;
    in_stack_00000060 =
         (fVar12 * fVar11 - (fVar1 * fVar14 - fVar10 * fVar9) * fVar8) + fVar13 * fVar7;
    fVar13 = -unaff_XMM10_Da;
    fVar8 = -unaff_XMM12_Da;
    *(float *)(unaff_RBP + -0x3c) = fStack0000000000000044;
    fVar9 = -unaff_XMM15_Da;
    in_stack_00000048 = in_stack_00000048 ^ 0x8000000080000000;
    in_stack_00000050 = in_stack_00000050 ^ 0x80000000;
    *(float *)(unaff_RBP + -0x48) = fVar9;
    *(float *)(unaff_RBP + -0x44) = fVar13;
    *(float *)(unaff_RBP + 0xb0) = fVar8;
    *(float *)(unaff_RBP + -0x40) = fVar8;
    fVar1 = *(float *)(unaff_RBP + 0xb0);
    fVar11 = (in_stack_00000058 - fStack0000000000000068) +
             (in_stack_00000058 - fStack0000000000000068);
    fVar7 = (fStack000000000000005c - fStack000000000000006c) +
            (fStack000000000000005c - fStack000000000000006c);
    fVar14 = (in_stack_00000060 - in_stack_00000070) + (in_stack_00000060 - in_stack_00000070);
    fVar10 = fStack0000000000000044 * fStack0000000000000044 - 0.5;
    fVar8 = fVar13 * fVar7 + fVar9 * fVar11 + fVar8 * fVar14;
    fVar15 = (fVar13 * fVar14 - fVar1 * fVar7) * fStack0000000000000044 + fVar10 * fVar11 +
             fVar8 * fVar9;
    fVar17 = (fVar1 * fVar11 - fVar9 * fVar14) * fStack0000000000000044 + fVar10 * fVar7 +
             fVar8 * fVar13;
    fVar19 = (fVar9 * fVar7 - fVar13 * fVar11) * fStack0000000000000044 + fVar10 * fVar14 +
             fVar8 * fVar1;
    puVar5 = (uint64_t *)FUN_1800fcb90(unaff_RBP + -0x48,&stack0x00000078,&stack0x00000048);
    fVar1 = *(float *)(unaff_RBP + -100);
    fVar8 = *(float *)(unaff_RBP + -0x5c);
    fVar10 = *(float *)(unaff_RBP + -0x60);
    in_stack_00000048 = *puVar5;
    in_stack_00000050 = puVar5[1];
    fVar13 = *(float *)(unaff_RBP + -0x68);
    fVar16 = fVar15 + fVar15;
    fVar18 = fVar17 + fVar17;
    fVar20 = fVar19 + fVar19;
    fVar12 = fVar8 * fVar8 - 0.5;
    fVar9 = fVar1 * fVar18 + fVar13 * fVar16 + fVar10 * fVar20;
    fVar7 = *(float *)(unaff_RBP + -0x50);
    fVar11 = *(float *)(unaff_RBP + -0x54);
    fVar14 = *(float *)(unaff_RBP + -0x58);
    in_stack_00000058 = fVar15;
    fStack000000000000005c = fVar17;
    in_stack_00000060 = fVar19;
    puVar6 = (int32_t *)FUN_1800fcb90(unaff_RBP + -0x68,unaff_RBP + -0x48,&stack0x00000048);
    uVar2 = puVar6[1];
    uVar3 = puVar6[2];
    uVar4 = puVar6[3];
    *unaff_R14 = *puVar6;
    unaff_R14[1] = uVar2;
    unaff_R14[2] = uVar3;
    unaff_R14[3] = uVar4;
    unaff_R14[4] = fVar14 + (fVar1 * fVar20 - fVar10 * fVar18) * fVar8 + fVar12 * fVar16 +
                            fVar13 * fVar9;
    unaff_R14[5] = fVar11 + (fVar10 * fVar16 - fVar13 * fVar20) * fVar8 + fVar12 * fVar18 +
                            fVar1 * fVar9;
    unaff_R14[6] = fVar7 + (fVar13 * fVar18 - fVar1 * fVar16) * fVar8 + fVar12 * fVar20 +
                           fVar10 * fVar9;
  }
  else {
    fVar1 = *(float *)(unaff_RBX + 0x2c);
    fVar8 = *(float *)(unaff_RBX + 0x38);
    fVar10 = *(float *)(unaff_RBX + 0x30);
    fVar13 = *(float *)(unaff_RBX + 0x34);
    fVar7 = *(float *)(unaff_RBX + 0x44);
    fVar11 = *(float *)(unaff_RBX + 0x3c);
    fVar14 = *(float *)(unaff_RBX + 0x40);
    *(float *)(unaff_RBP + -0x5c) = fVar8;
    fVar9 = (float)((uint)(fVar7 + fVar7) ^ param_2);
    fVar12 = (float)((uint)(fVar11 + fVar11) ^ param_2);
    fVar17 = fVar8 * fVar8 - unaff_XMM11_Da;
    fVar11 = (float)((uint)(fVar14 + fVar14) ^ param_2);
    fVar7 = fVar10 * fVar11 + fVar1 * fVar12 + fVar13 * fVar9;
    fVar14 = (fVar17 * fVar12 - (fVar10 * fVar9 - fVar13 * fVar11) * fVar8) + fVar1 * fVar7;
    *(float *)(unaff_RBP + -0x58) = fVar14;
    fVar14 = fVar14 + fVar14;
    fVar18 = (fVar17 * fVar11 - (fVar13 * fVar12 - fVar1 * fVar9) * fVar8) + fVar10 * fVar7;
    *(float *)(unaff_RBP + -0x54) = fVar18;
    fVar18 = fVar18 + fVar18;
    fVar7 = (fVar17 * fVar9 - (fVar1 * fVar11 - fVar10 * fVar12) * fVar8) + fVar13 * fVar7;
    *(float *)(unaff_RBP + -0x68) = -fVar1;
    *(float *)(unaff_RBP + -100) = -fVar10;
    *(float *)(unaff_RBP + -0x50) = fVar7;
    fVar7 = fVar7 + fVar7;
    *(float *)(unaff_RBP + -0x60) = -fVar13;
    fVar10 = fStack0000000000000044 * fStack0000000000000044 - 0.5;
    fVar1 = *(float *)(unaff_RBP + 0xb0);
    fVar8 = fVar18 * unaff_XMM10_Da + fVar14 * unaff_XMM15_Da + fVar7 * unaff_XMM12_Da;
    fVar15 = (fVar7 * unaff_XMM10_Da - fVar18 * fVar1) * fStack0000000000000044 + fVar10 * fVar14 +
             fVar8 * unaff_XMM15_Da + fStack0000000000000068;
    fVar17 = (fVar14 * fVar1 - fVar7 * unaff_XMM15_Da) * fStack0000000000000044 + fVar10 * fVar18 +
             fVar8 * fStack0000000000000040 + fStack000000000000006c;
    fVar19 = (fVar18 * unaff_XMM15_Da - fVar14 * fStack0000000000000040) * fStack0000000000000044 +
             fVar10 * fVar7 + fVar8 * fVar1 + in_stack_00000070;
    puVar5 = (uint64_t *)FUN_1800fcb90(&stack0x00000048,unaff_RBP + -0x48,unaff_RBP + -0x68);
    fVar1 = *(float *)(unaff_RBP + -0x2c);
    fVar8 = *(float *)(unaff_RBP + -0x30);
    fVar10 = *(float *)(unaff_RBP + -0x34);
    in_stack_00000048 = *puVar5;
    in_stack_00000050 = puVar5[1];
    fVar13 = *(float *)(unaff_RBP + -0x38);
    fVar16 = fVar15 + fVar15;
    fVar12 = fVar1 * fVar1 - 0.5;
    fVar18 = fVar17 + fVar17;
    fVar20 = fVar19 + fVar19;
    fVar9 = fVar10 * fVar18 + fVar13 * fVar16 + fVar8 * fVar20;
    fVar7 = *(float *)(unaff_RBP + -0x20);
    fVar11 = *(float *)(unaff_RBP + -0x24);
    fVar14 = *(float *)(unaff_RBP + -0x28);
    in_stack_00000058 = fVar15;
    fStack000000000000005c = fVar17;
    in_stack_00000060 = fVar19;
    puVar6 = (int32_t *)FUN_1800fcb90(unaff_RBP + -0x38,&stack0x00000078,&stack0x00000048);
    uVar2 = puVar6[1];
    uVar3 = puVar6[2];
    uVar4 = puVar6[3];
    *unaff_RSI = *puVar6;
    unaff_RSI[1] = uVar2;
    unaff_RSI[2] = uVar3;
    unaff_RSI[3] = uVar4;
    unaff_RSI[4] = fVar14 + (fVar10 * fVar20 - fVar8 * fVar18) * fVar1 + fVar12 * fVar16 +
                            fVar13 * fVar9;
    unaff_RSI[5] = fVar11 + (fVar8 * fVar16 - fVar13 * fVar20) * fVar1 + fVar12 * fVar18 +
                            fVar10 * fVar9;
    unaff_RSI[6] = fVar7 + (fVar13 * fVar18 - fVar10 * fVar16) * fVar1 + fVar12 * fVar20 +
                           fVar8 * fVar9;
  }
                    // WARNING: Subroutine does not return
  FUN_1806e1390();
}






// 函数: void FUN_1806e867b(void)
void FUN_1806e867b(void)

{
  return;
}






// 函数: void FUN_1806e86d0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_1806e86d0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  byte param_5)

{
  int8_t auStack_48 [32];
  int8_t auStack_28 [32];
  
  if ((param_5 & 1) != 0) {
    FUN_1806df310(auStack_28,auStack_48,param_2,param_3,param_4);
    (**(code **)(*param_1 + 8))(param_1,auStack_28,auStack_48);
  }
  return;
}



longlong FUN_1806e8720(longlong param_1,float *param_2,uint64_t param_3,int32_t *param_4,
                      int32_t *param_5,longlong param_6,longlong param_7,uint64_t param_8,
                      float *param_9,float *param_10)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *param_4 = *param_5;
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  lStack_e8 = param_1;
  lStack_e0 = param_1;
  FUN_1806df310(&fStack_108,&fStack_158,param_5,param_6,param_7);
  fVar4 = *(float *)(param_6 + 0x10);
  fVar5 = *(float *)(param_6 + 0x14);
  param_2[2] = fStack_140 - *(float *)(param_6 + 0x18);
  *param_2 = fStack_148 - fVar4;
  param_2[1] = fStack_144 - fVar5;
  fStack_d8 = fStack_148 - *(float *)(param_6 + 0x10);
  fStack_d4 = fStack_144 - *(float *)(param_6 + 0x14);
  fStack_c0 = fStack_f8;
  fStack_d0 = fStack_140 - *(float *)(param_6 + 0x18);
  fStack_c8 = fStack_144 - *(float *)(param_7 + 0x14);
  fStack_bc = fStack_f4;
  fStack_b8 = fStack_f0;
  fStack_cc = fStack_148 - *(float *)(param_7 + 0x10);
  fStack_b4 = fStack_148;
  fStack_c4 = fStack_140 - *(float *)(param_7 + 0x18);
  fStack_b0 = fStack_144;
  fStack_ac = fStack_140;
  if (fStack_108 * fStack_158 + fStack_104 * fStack_154 + fStack_100 * fStack_150 +
      fStack_fc * fStack_14c < 0.0) {
    fStack_158 = -fStack_158;
    fStack_154 = -fStack_154;
    fStack_150 = -fStack_150;
    fStack_14c = -fStack_14c;
  }
  fVar6 = (fStack_148 - fStack_f8) + (fStack_148 - fStack_f8);
  fVar5 = fStack_fc * fStack_fc - 0.5;
  fVar7 = (fStack_144 - fStack_f4) + (fStack_144 - fStack_f4);
  fVar8 = (fStack_140 - fStack_f0) + (fStack_140 - fStack_f0);
  fVar4 = fStack_104 * fVar7 + fStack_108 * fVar6 + fStack_100 * fVar8;
  fStack_138 = (fVar5 * fVar6 - (fStack_104 * fVar8 - fStack_100 * fVar7) * fStack_fc) +
               fStack_108 * fVar4;
  fStack_134 = (fVar5 * fVar7 - (fStack_100 * fVar6 - fStack_108 * fVar8) * fStack_fc) +
               fStack_104 * fVar4;
  fStack_130 = (fVar5 * fVar8 - (fStack_108 * fVar7 - fStack_104 * fVar6) * fStack_fc) +
               fStack_100 * fVar4;
  FUN_1806e1790(&lStack_e8,&fStack_108,&fStack_158,&fStack_138,7,7,&fStack_128,&fStack_118);
  fVar4 = *(float *)(param_6 + 0x14);
  fVar5 = *(float *)(param_6 + 0x18);
  *param_9 = fStack_128 + *(float *)(param_6 + 0x10);
  param_9[1] = fStack_124 + fVar4;
  param_9[2] = fStack_120 + fVar5;
  fVar4 = *(float *)(param_7 + 0x14);
  fVar5 = *(float *)(param_7 + 0x18);
  *param_10 = fStack_118 + *(float *)(param_7 + 0x10);
  param_10[1] = fStack_114 + fVar4;
  param_10[2] = fStack_110 + fVar5;
  return (lStack_e0 - lStack_e8) / 0x50;
}



uint64_t *
FUN_1806e8b10(uint64_t *param_1,int16_t param_2,int16_t *param_3,uint64_t param_4,
             float *param_5,uint64_t param_6,float *param_7,int param_8)

{
  int16_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  longlong *plVar6;
  int32_t *puVar7;
  float *pfVar8;
  int32_t *puVar9;
  uint64_t *puVar10;
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
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  int8_t auStack_b8 [16];
  int8_t auStack_a8 [160];
  
  puVar7 = (int32_t *)0x0;
  uVar1 = *param_3;
  *(int16_t *)(param_1 + 1) = param_2;
  *(int16_t *)((longlong)param_1 + 10) = uVar1;
  *param_1 = &UNK_18094d8b8;
  param_1[3] = &UNK_18094d9d0;
  param_1[4] = 0;
  param_1[0xc] = 0;
  param_1[2] = 0;
  if (param_8 != 0) {
    plVar6 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    puVar7 = (int32_t *)
             (**(code **)(*plVar6 + 8))(plVar6,param_8,&UNK_18094a258,&UNK_18094d010,0x1c6);
  }
  fVar11 = param_5[1];
  fVar13 = *param_5;
  fVar16 = param_5[2];
  fVar12 = param_5[3];
  fVar15 = param_5[4];
  fVar17 = param_5[6];
  fVar14 = 1.0 / SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar16 * fVar16 + fVar12 * fVar12);
  fVar18 = param_5[5];
  *(float *)(param_1 + 5) = fVar13 * fVar14;
  *(float *)((longlong)param_1 + 0x2c) = fVar11 * fVar14;
  *(float *)(param_1 + 6) = fVar16 * fVar14;
  *(float *)((longlong)param_1 + 0x34) = fVar12 * fVar14;
  *(float *)(param_1 + 7) = fVar15;
  *(float *)(param_1 + 8) = fVar17;
  *(float *)((longlong)param_1 + 0x3c) = fVar18;
  fVar11 = param_7[1];
  fVar13 = *param_7;
  fVar16 = param_7[2];
  fVar12 = param_7[3];
  fVar15 = param_7[5];
  fVar17 = param_7[6];
  fVar14 = 1.0 / SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar16 * fVar16 + fVar12 * fVar12);
  fVar18 = param_7[4];
  *(float *)((longlong)param_1 + 0x44) = fVar13 * fVar14;
  *(float *)(param_1 + 9) = fVar11 * fVar14;
  *(float *)((longlong)param_1 + 0x4c) = fVar16 * fVar14;
  *(float *)(param_1 + 10) = fVar12 * fVar14;
  *(float *)((longlong)param_1 + 0x54) = fVar18;
  *(float *)(param_1 + 0xb) = fVar15;
  *(float *)((longlong)param_1 + 0x5c) = fVar17;
  pfVar8 = (float *)FUN_1806dfd60(param_1,auStack_a8,param_4);
  fVar11 = *pfVar8;
  fVar13 = pfVar8[1];
  fStack_c8 = -fVar11;
  fStack_c4 = -fVar13;
  fStack_bc = pfVar8[3];
  fVar16 = pfVar8[2];
  fStack_c0 = -fVar16;
  fVar18 = (param_5[4] - pfVar8[4]) + (param_5[4] - pfVar8[4]);
  fVar17 = (param_5[5] - pfVar8[5]) + (param_5[5] - pfVar8[5]);
  fVar20 = (param_5[6] - pfVar8[6]) + (param_5[6] - pfVar8[6]);
  fVar15 = fStack_bc * fStack_bc - 0.5;
  fVar12 = fVar13 * fVar17 + fVar18 * fVar11 + fVar16 * fVar20;
  fVar19 = (fVar16 * fVar17 - fVar13 * fVar20) * fStack_bc;
  fVar14 = (fVar11 * fVar20 - fVar16 * fVar18) * fStack_bc;
  fVar21 = (fVar13 * fVar18 - fVar11 * fVar17) * fStack_bc;
  puVar9 = (int32_t *)FUN_1800fcb90(&fStack_c8,auStack_b8,param_5);
  uVar2 = puVar9[1];
  uVar3 = puVar9[2];
  uVar4 = puVar9[3];
  puVar7[4] = *puVar9;
  puVar7[5] = uVar2;
  puVar7[6] = uVar3;
  puVar7[7] = uVar4;
  puVar7[8] = fVar19 + fVar15 * fVar18 + fVar11 * fVar12;
  puVar7[9] = fVar14 + fVar15 * fVar17 + fVar13 * fVar12;
  puVar7[10] = fVar21 + fVar15 * fVar20 + fVar16 * fVar12;
  pfVar8 = (float *)FUN_1806dfd60(param_1,auStack_a8,param_6);
  fStack_c8 = -*pfVar8;
  fStack_c4 = -pfVar8[1];
  fStack_bc = pfVar8[3];
  fStack_c0 = -pfVar8[2];
  fVar15 = (param_7[4] - pfVar8[4]) + (param_7[4] - pfVar8[4]);
  fVar12 = (param_7[5] - pfVar8[5]) + (param_7[5] - pfVar8[5]);
  fVar14 = (param_7[6] - pfVar8[6]) + (param_7[6] - pfVar8[6]);
  fVar16 = fStack_bc * fStack_bc - 0.5;
  fVar13 = fStack_c4 * fVar12 + fStack_c8 * fVar15 + fStack_c0 * fVar14;
  fVar11 = fStack_c8 * fVar13;
  fVar18 = (fStack_c4 * fVar14 - fStack_c0 * fVar12) * fStack_bc;
  fVar19 = fStack_c0 * fVar13;
  fVar13 = fStack_c4 * fVar13;
  fVar17 = (fStack_c0 * fVar15 - fStack_c8 * fVar14) * fStack_bc;
  fVar20 = (fStack_c8 * fVar12 - fStack_c4 * fVar15) * fStack_bc;
  puVar10 = (uint64_t *)FUN_1800fcb90(&fStack_c8,auStack_b8,param_7);
  uVar5 = puVar10[1];
  *(uint64_t *)(puVar7 + 0xb) = *puVar10;
  *(uint64_t *)(puVar7 + 0xd) = uVar5;
  puVar7[0xf] = fVar18 + fVar16 * fVar15 + fVar11;
  puVar7[0x10] = fVar17 + fVar16 * fVar12 + fVar13;
  puVar7[0x11] = fVar20 + fVar16 * fVar14 + fVar19;
  *puVar7 = 0x3f800000;
  puVar7[1] = 0x3f800000;
  puVar7[2] = 0x3f800000;
  puVar7[3] = 0x3f800000;
  param_1[0xd] = puVar7;
  return param_1;
}






// 函数: void FUN_1806e9040(uint64_t *param_1)
void FUN_1806e9040(uint64_t *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = &UNK_18094d8b8;
  param_1[3] = &UNK_18094d9d0;
  if ((*(byte *)((longlong)param_1 + 10) & 1) != 0) {
    lVar1 = param_1[0xd];
    if (lVar1 != 0) {
      plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
    }
    param_1[0xd] = 0;
  }
  param_1[3] = &UNK_18094a0b8;
  *param_1 = &UNK_18094cba8;
  return;
}






// 函数: void FUN_1806e9064(longlong param_1)
void FUN_1806e9064(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint64_t *unaff_RBX;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  unaff_RBX[0xd] = 0;
  unaff_RBX[3] = &UNK_18094a0b8;
  *unaff_RBX = &UNK_18094cba8;
  return;
}






// 函数: void FUN_1806e9092(void)
void FUN_1806e9092(void)

{
  uint64_t *unaff_RBX;
  
  unaff_RBX[3] = &UNK_18094a0b8;
  *unaff_RBX = &UNK_18094cba8;
  return;
}



longlong FUN_1806e90c0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  FUN_1806e9040();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        plVar1 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
        return param_1;
      }
    }
    else {
      _guard_check_icall(param_1,0x70);
    }
  }
  return param_1;
}



uint64_t FUN_1806e9140(uint64_t param_1,longlong param_2)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = strcmp();
  if (iVar2 != 0) {
    lVar3 = 0;
    lVar4 = lVar3;
    do {
      pcVar1 = &UNK_18094cbd0 + lVar4;
      lVar4 = lVar4 + 1;
      if (*pcVar1 != *(char *)(param_2 + -1 + lVar4)) {
        do {
          lVar4 = lVar3 + 1;
          if (*(char *)(param_2 + lVar3) != (&UNK_18094cb9c)[lVar3]) {
            return 0;
          }
          lVar3 = lVar4;
        } while (lVar4 != 7);
        return 1;
      }
    } while (lVar4 != 8);
  }
  return 1;
}



longlong *
FUN_1806e91d0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
             uint64_t param_5)

{
  float fVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  void *puVar5;
  float *pfVar6;
  longlong lVar7;
  float fVar8;
  int16_t auStackX_8 [4];
  uint64_t in_stack_ffffffffffffff98;
  int32_t uVar9;
  uint64_t in_stack_ffffffffffffffa0;
  uint64_t uVar10;
  int32_t uVar11;
  
  uVar11 = (int32_t)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
  uVar9 = (int32_t)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  plVar3 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  plVar4 = (longlong *)PxGetFoundation();
  cVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
  if (cVar2 == '\0') {
    puVar5 = &UNK_18094a1f0;
  }
  else {
    puVar5 = (void *)__std_type_info_name(0x180bfc6a0,0x180c827e0);
  }
  plVar3 = (longlong *)
           (**(code **)(*plVar3 + 8))(plVar3,0x70,puVar5,&UNK_18094df50,CONCAT44(uVar9,0x2d));
  if (plVar3 != (longlong *)0x0) {
    pfVar6 = (float *)(**(code **)(*param_1 + 0x20))(param_1);
    auStackX_8[0] = 3;
    uVar10 = param_4;
    FUN_1806eaa80(plVar3,0x102,auStackX_8,param_2,param_3,param_4,param_5,0x80,&UNK_18094df30);
    uVar11 = (int32_t)((ulonglong)uVar10 >> 0x20);
    lVar7 = plVar3[0xd];
    *plVar3 = (longlong)&UNK_18094dd88;
    plVar3[3] = (longlong)&UNK_18094dee0;
    fVar1 = *pfVar6;
    fVar8 = fVar1 * 0.01;
    *(int32_t *)(lVar7 + 0x6c) = 0x501502f9;
    if (1.111589e+38 <= fVar8) {
      fVar8 = 1.111589e+38;
    }
    *(int32_t *)(lVar7 + 0x70) = 0x40490fdb;
    *(int32_t *)(lVar7 + 0x50) = 0;
    *(float *)(lVar7 + 0x54) = fVar1 + fVar1;
    *(int32_t *)(lVar7 + 0x58) = 0;
    *(int32_t *)(lVar7 + 0x5c) = 0;
    *(ulonglong *)(lVar7 + 0x60) = CONCAT44(0x7eaaaaaa,fVar8);
    *(int32_t *)(lVar7 + 0x68) = 0xfeaaaaaa;
    *(int16_t *)(lVar7 + 0x74) = 0;
  }
  lVar7 = (**(code **)(*param_1 + 0xd0))
                    (param_1,param_2,param_4,plVar3 + 3,0x180be0be0,CONCAT44(uVar11,0x80));
  plVar3[0xc] = lVar7;
  if (lVar7 == 0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,1);
    plVar3 = (longlong *)0x0;
  }
  return plVar3;
}






