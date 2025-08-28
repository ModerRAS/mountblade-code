#include "TaleWorlds.Native.Split.h"

// 99_part_06_part047.c - 6 个函数

// 函数: void FUN_1803d82f1(void)
void FUN_1803d82f1(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong *plVar20;
  int32_t uVar21;
  int32_t uVar22;
  int32_t uVar23;
  int32_t uVar24;
  int32_t uVar25;
  int32_t uVar26;
  int32_t uVar27;
  int32_t uVar28;
  int32_t uVar29;
  int32_t uVar30;
  int32_t uVar31;
  int32_t uVar32;
  int32_t uVar33;
  int32_t uVar34;
  int32_t uVar35;
  int32_t uVar36;
  char cVar37;
  longlong in_RAX;
  uint64_t unaff_RBX;
  longlong *plVar38;
  int32_t *unaff_RBP;
  uint64_t unaff_RDI;
  longlong lVar39;
  uint64_t in_R9;
  longlong in_R11;
  int unaff_R12D;
  longlong unaff_R13;
  int unaff_R14D;
  uint64_t unaff_R15;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Dc;
  int aiStackX_20 [2];
  uint64_t in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  int32_t uStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  int32_t uStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  int32_t uStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  int32_t uStack000000000000006c;
  int32_t uStack0000000000000070;
  int32_t uStack0000000000000074;
  int32_t uStack0000000000000078;
  int32_t uStack000000000000007c;
  int32_t in_stack_00000140;
  int32_t in_stack_00000148;
  int32_t in_stack_00000150;
  int32_t in_stack_00000158;
  int32_t in_stack_00000160;
  int32_t in_stack_00000168;
  int32_t in_stack_00000170;
  int32_t in_stack_00000178;
  
  *(uint64_t *)(in_R11 + 0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x30) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  plVar8 = *(longlong **)(in_RAX + 0x40);
  lVar39 = *plVar8;
  plVar38 = plVar8;
  if (lVar39 == 0) {
    lVar39 = plVar8[1];
    plVar20 = plVar8;
    while (plVar38 = plVar20 + 1, lVar39 == 0) {
      lVar39 = plVar20[2];
      plVar20 = plVar38;
    }
  }
  lVar9 = plVar8[*(longlong *)(in_RAX + 0x48)];
  uVar29 = unaff_XMM9_Dc;
  uVar30 = unaff_XMM9_Da;
  uVar31 = unaff_XMM8_Dc;
  uVar32 = unaff_XMM8_Da;
  uVar33 = unaff_XMM7_Dc;
  uVar34 = unaff_XMM7_Da;
  uVar35 = unaff_XMM6_Dc;
  uVar36 = unaff_XMM6_Da;
  uVar21 = in_stack_00000178;
  uVar22 = in_stack_00000170;
  uVar23 = in_stack_00000168;
  uVar24 = in_stack_00000160;
  uVar25 = in_stack_00000158;
  uVar26 = in_stack_00000150;
  uVar27 = in_stack_00000148;
  uVar28 = in_stack_00000140;
  while (in_stack_00000170 = uVar36, in_stack_00000178 = uVar35, in_stack_00000160 = uVar34,
        in_stack_00000168 = uVar33, in_stack_00000150 = uVar32, in_stack_00000158 = uVar31,
        in_stack_00000140 = uVar30, in_stack_00000148 = uVar29, lVar39 != lVar9) {
    lVar10 = *(longlong *)(lVar39 + 8);
    if (lVar10 != 0) {
      fVar11 = *(float *)(lVar10 + 0x90);
      fVar12 = *(float *)(lVar10 + 0x94);
      fVar13 = *(float *)(lVar10 + 0x98);
      *(uint64_t *)(unaff_RBP + 8) = 0;
      fVar14 = *(float *)(lVar10 + 0x80);
      fVar15 = *(float *)(lVar10 + 0x84);
      fVar16 = *(float *)(lVar10 + 0x88);
      fVar17 = *(float *)(lVar10 + 0xa0);
      fVar18 = *(float *)(lVar10 + 0xa4);
      fVar19 = *(float *)(lVar10 + 0xa8);
      fVar1 = *(float *)(lVar10 + 0xc0);
      fVar2 = *(float *)(lVar10 + 200);
      fVar3 = *(float *)(lVar10 + 0xd4);
      fVar4 = *(float *)(lVar10 + 0xe4);
      fVar5 = *(float *)(lVar10 + 0xc4);
      fVar6 = *(float *)(lVar10 + 0xf4);
      fVar7 = *(float *)(lVar10 + 0xd0);
      fStack0000000000000030 = fVar5 * fVar11 + fVar1 * fVar14 + fVar2 * fVar17;
      fStack0000000000000034 = fVar5 * fVar12 + fVar1 * fVar15 + fVar2 * fVar18;
      fStack0000000000000038 = fVar5 * fVar13 + fVar1 * fVar16 + fVar2 * fVar19;
      unaff_RBP[-0x18] = 0;
      unaff_RBP[-0x17] = 0;
      unaff_RBP[-0x16] = 0;
      unaff_RBP[-0x15] = 0;
      fVar1 = *(float *)(lVar10 + 0xd8);
      fVar2 = *(float *)(lVar10 + 0xe0);
      fStack0000000000000040 = fVar3 * fVar11 + fVar7 * fVar14 + fVar1 * fVar17;
      fStack0000000000000044 = fVar3 * fVar12 + fVar7 * fVar15 + fVar1 * fVar18;
      fStack0000000000000048 = fVar3 * fVar13 + fVar7 * fVar16 + fVar1 * fVar19;
      fVar1 = *(float *)(lVar10 + 0xe8);
      uStack000000000000003c = 0;
      fVar3 = *(float *)(lVar10 + 0xf0);
      fStack0000000000000050 = fVar4 * fVar11 + fVar2 * fVar14 + fVar1 * fVar17;
      fStack0000000000000054 = fVar4 * fVar12 + fVar2 * fVar15 + fVar1 * fVar18;
      fStack0000000000000058 = fVar4 * fVar13 + fVar2 * fVar16 + fVar1 * fVar19;
      fVar1 = *(float *)(lVar10 + 0xf8);
      uStack000000000000004c = 0;
      fStack0000000000000060 = *(float *)(lVar10 + 0xb0);
      fStack0000000000000064 = *(float *)(lVar10 + 0xb4);
      fStack0000000000000068 = *(float *)(lVar10 + 0xb8);
      uStack000000000000005c = 0;
      unaff_RBP[-0x14] = 0;
      unaff_RBP[-0x13] = 0;
      unaff_RBP[-0x12] = 0;
      unaff_RBP[-0x11] = 0;
      unaff_RBP[-0x10] = 0;
      unaff_RBP[-0xf] = 0;
      unaff_RBP[-0xe] = 0;
      unaff_RBP[-0xd] = 0;
      unaff_RBP[-0xc] = 0;
      unaff_RBP[-0xb] = 0;
      unaff_RBP[-10] = 0;
      unaff_RBP[-9] = 0;
      unaff_RBP[-8] = 0;
      unaff_RBP[-7] = 0;
      unaff_RBP[-6] = 0;
      unaff_RBP[-5] = 0;
      fStack0000000000000060 =
           fVar6 * fVar11 + fVar3 * fVar14 + fVar1 * fVar17 + fStack0000000000000060;
      fStack0000000000000064 =
           fVar6 * fVar12 + fVar3 * fVar15 + fVar1 * fVar18 + fStack0000000000000064;
      fStack0000000000000068 =
           fVar6 * fVar13 + fVar3 * fVar16 + fVar1 * fVar19 + fStack0000000000000068;
      unaff_RBP[-4] = 0;
      unaff_RBP[-3] = 0;
      unaff_RBP[-2] = 0;
      unaff_RBP[-1] = 0;
      uStack0000000000000070 = 0;
      uStack0000000000000074 = 0;
      uStack0000000000000078 = 0;
      uStack000000000000007c = 0x7f7fffff;
      unaff_RBP[-0x20] = 0;
      unaff_RBP[-0x1f] = 0;
      unaff_RBP[-0x1e] = 0;
      unaff_RBP[-0x1d] = 0x7f7fffff;
      unaff_RBP[-0x1c] = 0;
      unaff_RBP[-0x1b] = 0;
      unaff_RBP[-0x1a] = 0;
      unaff_RBP[-0x19] = 0x7f7fffff;
      uStack000000000000006c = 0x3f800000;
      *unaff_RBP = 0;
      unaff_RBP[1] = 0;
      unaff_RBP[2] = 0;
      unaff_RBP[3] = 0;
      unaff_RBP[4] = 0;
      unaff_RBP[5] = 0;
      unaff_RBP[6] = 0;
      unaff_RBP[7] = 0;
      FUN_18063ad30(&stack0x00000070,lVar10 + 0x100,&stack0x00000030,in_R9);
      cVar37 = FUN_18063c5e0(in_R9,&stack0x00000070);
      in_R9 = in_stack_00000028;
      if (cVar37 != '\0') {
        aiStackX_20[0] = unaff_R12D + unaff_R14D * 6;
        FUN_1800571e0(((longlong)*(int *)(lVar10 + 0x18) * 0x10 + (longlong)*(int *)(lVar10 + 0x1c))
                      * 0x20 + 0x70 + unaff_R13,aiStackX_20);
      }
    }
    lVar39 = *(longlong *)(lVar39 + 0x10);
    while (uVar29 = in_stack_00000148, uVar30 = in_stack_00000140, uVar31 = in_stack_00000158,
          uVar32 = in_stack_00000150, uVar33 = in_stack_00000168, uVar34 = in_stack_00000160,
          uVar35 = in_stack_00000178, uVar36 = in_stack_00000170, uVar21 = in_stack_00000178,
          uVar22 = in_stack_00000170, uVar23 = in_stack_00000168, uVar24 = in_stack_00000160,
          uVar25 = in_stack_00000158, uVar26 = in_stack_00000150, uVar27 = in_stack_00000148,
          uVar28 = in_stack_00000140, lVar39 == 0) {
      plVar8 = plVar38 + 1;
      plVar38 = plVar38 + 1;
      lVar39 = *plVar8;
    }
  }
  in_stack_00000140 = uVar28;
  in_stack_00000148 = uVar27;
  in_stack_00000150 = uVar26;
  in_stack_00000158 = uVar25;
  in_stack_00000160 = uVar24;
  in_stack_00000168 = uVar23;
  in_stack_00000170 = uVar22;
  in_stack_00000178 = uVar21;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0xc) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1803d833e(void)
void FUN_1803d833e(void)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  char cVar19;
  longlong unaff_RBX;
  int32_t *unaff_RBP;
  longlong unaff_RDI;
  uint64_t in_R9;
  int unaff_R12D;
  longlong unaff_R13;
  int unaff_R14D;
  longlong unaff_R15;
  int aiStackX_20 [2];
  uint64_t in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  int32_t uStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  int32_t uStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  int32_t uStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  int32_t uStack000000000000006c;
  int32_t uStack0000000000000070;
  int32_t uStack0000000000000074;
  int32_t uStack0000000000000078;
  int32_t uStack000000000000007c;
  
  do {
    lVar9 = *(longlong *)(unaff_RDI + 8);
    if (lVar9 != 0) {
      fVar10 = *(float *)(lVar9 + 0x90);
      fVar11 = *(float *)(lVar9 + 0x94);
      fVar12 = *(float *)(lVar9 + 0x98);
      *(uint64_t *)(unaff_RBP + 8) = 0;
      fVar13 = *(float *)(lVar9 + 0x80);
      fVar14 = *(float *)(lVar9 + 0x84);
      fVar15 = *(float *)(lVar9 + 0x88);
      fVar16 = *(float *)(lVar9 + 0xa0);
      fVar17 = *(float *)(lVar9 + 0xa4);
      fVar18 = *(float *)(lVar9 + 0xa8);
      fVar2 = *(float *)(lVar9 + 0xc0);
      fVar3 = *(float *)(lVar9 + 200);
      fVar4 = *(float *)(lVar9 + 0xd4);
      fVar5 = *(float *)(lVar9 + 0xe4);
      fVar6 = *(float *)(lVar9 + 0xc4);
      fVar7 = *(float *)(lVar9 + 0xf4);
      fVar8 = *(float *)(lVar9 + 0xd0);
      fStack0000000000000030 = fVar6 * fVar10 + fVar2 * fVar13 + fVar3 * fVar16;
      fStack0000000000000034 = fVar6 * fVar11 + fVar2 * fVar14 + fVar3 * fVar17;
      fStack0000000000000038 = fVar6 * fVar12 + fVar2 * fVar15 + fVar3 * fVar18;
      unaff_RBP[-0x18] = 0;
      unaff_RBP[-0x17] = 0;
      unaff_RBP[-0x16] = 0;
      unaff_RBP[-0x15] = 0;
      fVar2 = *(float *)(lVar9 + 0xd8);
      fVar3 = *(float *)(lVar9 + 0xe0);
      fStack0000000000000040 = fVar4 * fVar10 + fVar8 * fVar13 + fVar2 * fVar16;
      fStack0000000000000044 = fVar4 * fVar11 + fVar8 * fVar14 + fVar2 * fVar17;
      fStack0000000000000048 = fVar4 * fVar12 + fVar8 * fVar15 + fVar2 * fVar18;
      fVar2 = *(float *)(lVar9 + 0xe8);
      uStack000000000000003c = 0;
      fVar4 = *(float *)(lVar9 + 0xf0);
      fStack0000000000000050 = fVar5 * fVar10 + fVar3 * fVar13 + fVar2 * fVar16;
      fStack0000000000000054 = fVar5 * fVar11 + fVar3 * fVar14 + fVar2 * fVar17;
      fStack0000000000000058 = fVar5 * fVar12 + fVar3 * fVar15 + fVar2 * fVar18;
      fVar2 = *(float *)(lVar9 + 0xf8);
      uStack000000000000004c = 0;
      fStack0000000000000060 = *(float *)(lVar9 + 0xb0);
      fStack0000000000000064 = *(float *)(lVar9 + 0xb4);
      fStack0000000000000068 = *(float *)(lVar9 + 0xb8);
      uStack000000000000005c = 0;
      unaff_RBP[-0x14] = 0;
      unaff_RBP[-0x13] = 0;
      unaff_RBP[-0x12] = 0;
      unaff_RBP[-0x11] = 0;
      unaff_RBP[-0x10] = 0;
      unaff_RBP[-0xf] = 0;
      unaff_RBP[-0xe] = 0;
      unaff_RBP[-0xd] = 0;
      unaff_RBP[-0xc] = 0;
      unaff_RBP[-0xb] = 0;
      unaff_RBP[-10] = 0;
      unaff_RBP[-9] = 0;
      unaff_RBP[-8] = 0;
      unaff_RBP[-7] = 0;
      unaff_RBP[-6] = 0;
      unaff_RBP[-5] = 0;
      fStack0000000000000060 =
           fVar7 * fVar10 + fVar4 * fVar13 + fVar2 * fVar16 + fStack0000000000000060;
      fStack0000000000000064 =
           fVar7 * fVar11 + fVar4 * fVar14 + fVar2 * fVar17 + fStack0000000000000064;
      fStack0000000000000068 =
           fVar7 * fVar12 + fVar4 * fVar15 + fVar2 * fVar18 + fStack0000000000000068;
      unaff_RBP[-4] = 0;
      unaff_RBP[-3] = 0;
      unaff_RBP[-2] = 0;
      unaff_RBP[-1] = 0;
      uStack0000000000000070 = 0;
      uStack0000000000000074 = 0;
      uStack0000000000000078 = 0;
      uStack000000000000007c = 0x7f7fffff;
      unaff_RBP[-0x20] = 0;
      unaff_RBP[-0x1f] = 0;
      unaff_RBP[-0x1e] = 0;
      unaff_RBP[-0x1d] = 0x7f7fffff;
      unaff_RBP[-0x1c] = 0;
      unaff_RBP[-0x1b] = 0;
      unaff_RBP[-0x1a] = 0;
      unaff_RBP[-0x19] = 0x7f7fffff;
      uStack000000000000006c = 0x3f800000;
      *unaff_RBP = 0;
      unaff_RBP[1] = 0;
      unaff_RBP[2] = 0;
      unaff_RBP[3] = 0;
      unaff_RBP[4] = 0;
      unaff_RBP[5] = 0;
      unaff_RBP[6] = 0;
      unaff_RBP[7] = 0;
      FUN_18063ad30(&stack0x00000070,0,&stack0x00000030,in_R9);
      cVar19 = FUN_18063c5e0(in_R9,&stack0x00000070);
      in_R9 = in_stack_00000028;
      if (cVar19 != '\0') {
        aiStackX_20[0] = unaff_R12D + unaff_R14D * 6;
        FUN_1800571e0(((longlong)*(int *)(lVar9 + 0x18) * 0x10 + (longlong)*(int *)(lVar9 + 0x1c)) *
                      0x20 + 0x70 + unaff_R13,aiStackX_20);
      }
    }
    unaff_RDI = *(longlong *)(unaff_RDI + 0x10);
    while (unaff_RDI == 0) {
      plVar1 = (longlong *)(unaff_RBX + 8);
      unaff_RBX = unaff_RBX + 8;
      unaff_RDI = *plVar1;
    }
  } while (unaff_RDI != unaff_R15);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0xc) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1803d85a0(void)
void FUN_1803d85a0(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x30) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1803d85b8(void)
void FUN_1803d85b8(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x30) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1803d85e0(longlong param_1,uint64_t param_2)
void FUN_1803d85e0(longlong param_1,uint64_t param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  uint64_t uStack_f8;
  int32_t uStack_f0;
  int16_t uStack_ec;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  int32_t uStack_d8;
  int8_t uStack_d4;
  int32_t uStack_d0;
  uint64_t uStack_cc;
  int16_t uStack_c4;
  uint64_t uStack_c0;
  int32_t uStack_b8;
  uint64_t uStack_b0;
  int32_t uStack_a8;
  int8_t uStack_a4;
  longlong *plStack_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  int32_t uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  int32_t uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  int32_t uStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  int32_t uStack_4c;
  
  lVar8 = *(longlong *)(param_1 + 0x68);
  if (lVar8 != 0) {
    plVar9 = *(longlong **)(lVar8 + 0x40);
    lVar22 = *plVar9;
    plVar21 = plVar9;
    if (lVar22 == 0) {
      lVar22 = plVar9[1];
      plVar19 = plVar9;
      while (plVar21 = plVar19 + 1, lVar22 == 0) {
        lVar22 = plVar19[2];
        plVar19 = plVar21;
      }
    }
    lVar8 = plVar9[*(longlong *)(lVar8 + 0x48)];
    while (lVar22 != lVar8) {
      lVar20 = *(longlong *)(lVar22 + 8);
      if (lVar20 != 0) {
        fVar1 = *(float *)(lVar20 + 0xc4);
        fVar10 = *(float *)(lVar20 + 0x80);
        fVar11 = *(float *)(lVar20 + 0x84);
        fVar12 = *(float *)(lVar20 + 0x88);
        fVar13 = *(float *)(lVar20 + 0x90);
        fVar14 = *(float *)(lVar20 + 0x94);
        fVar15 = *(float *)(lVar20 + 0x98);
        fVar16 = *(float *)(lVar20 + 0xa0);
        fVar17 = *(float *)(lVar20 + 0xa4);
        fVar18 = *(float *)(lVar20 + 0xa8);
        uStack_f8 = 0;
        fVar2 = *(float *)(lVar20 + 0xc0);
        fVar3 = *(float *)(lVar20 + 200);
        fVar4 = *(float *)(lVar20 + 0xd4);
        fVar5 = *(float *)(lVar20 + 0xe4);
        fVar6 = *(float *)(lVar20 + 0xf4);
        uStack_f0 = 0xffffffff;
        uStack_ec = 0xff00;
        uStack_e8 = 0;
        uStack_e0 = 0xffffffffffffffff;
        uStack_d8 = 0xffffffff;
        uStack_d4 = 0xff;
        fVar7 = *(float *)(lVar20 + 0xd0);
        uStack_d0 = 0xffffffff;
        fStack_88 = fVar1 * fVar13 + fVar2 * fVar10 + fVar3 * fVar16;
        fStack_84 = fVar1 * fVar14 + fVar2 * fVar11 + fVar3 * fVar17;
        fStack_80 = fVar1 * fVar15 + fVar2 * fVar12 + fVar3 * fVar18;
        uStack_cc = 0;
        fVar1 = *(float *)(lVar20 + 0xd8);
        uStack_c4 = 0x400;
        fVar2 = *(float *)(lVar20 + 0xe0);
        uStack_c0 = 0;
        fStack_78 = fVar4 * fVar13 + fVar7 * fVar10 + fVar1 * fVar16;
        fStack_74 = fVar4 * fVar14 + fVar7 * fVar11 + fVar1 * fVar17;
        fStack_70 = fVar4 * fVar15 + fVar7 * fVar12 + fVar1 * fVar18;
        fVar1 = *(float *)(lVar20 + 0xe8);
        uStack_b8 = 0;
        fVar3 = *(float *)(lVar20 + 0xf0);
        uStack_b0 = 0;
        fStack_68 = fVar5 * fVar13 + fVar2 * fVar10 + fVar1 * fVar16;
        fStack_64 = fVar5 * fVar14 + fVar2 * fVar11 + fVar1 * fVar17;
        fStack_60 = fVar5 * fVar15 + fVar2 * fVar12 + fVar1 * fVar18;
        fVar1 = *(float *)(lVar20 + 0xf8);
        uStack_a8 = 0;
        plStack_90 = (longlong *)
                     (param_1 + 0x70 +
                     ((longlong)*(int *)(lVar20 + 0x18) * 0x10 + (longlong)*(int *)(lVar20 + 0x1c))
                     * 0x20);
        uStack_a4 = 0;
        uStack_7c = 0;
        uStack_6c = 0;
        uStack_5c = 0;
        fStack_58 = fVar6 * fVar13 + fVar3 * fVar10 + fVar1 * fVar16 + *(float *)(lVar20 + 0xb0);
        fStack_54 = fVar6 * fVar14 + fVar3 * fVar11 + fVar1 * fVar17 + *(float *)(lVar20 + 0xb4);
        fStack_50 = fVar6 * fVar15 + fVar3 * fVar12 + fVar1 * fVar18 + *(float *)(lVar20 + 0xb8);
        uStack_4c = 0x3f800000;
        if (plStack_90[1] - *plStack_90 >> 2 != 0) {
          FUN_1803d7f00(param_1,param_2,&fStack_88,(float *)(lVar20 + 0x80),&uStack_f8);
        }
      }
      lVar22 = *(longlong *)(lVar22 + 0x10);
      while (lVar22 == 0) {
        plVar9 = plVar21 + 1;
        plVar21 = plVar21 + 1;
        lVar22 = *plVar9;
      }
    }
  }
  lVar8 = *(longlong *)(param_1 + 0x68);
  if (lVar8 != 0) {
    plVar9 = *(longlong **)(lVar8 + 0x40);
    lVar22 = *plVar9;
    plVar21 = plVar9;
    if (lVar22 == 0) {
      lVar22 = plVar9[1];
      plVar19 = plVar9;
      while (plVar21 = plVar19 + 1, lVar22 == 0) {
        lVar22 = plVar19[2];
        plVar19 = plVar21;
      }
    }
    lVar8 = plVar9[*(longlong *)(lVar8 + 0x48)];
    while (lVar22 != lVar8) {
      lVar20 = *(longlong *)(lVar22 + 8);
      if (lVar20 != 0) {
        lVar20 = ((longlong)*(int *)(lVar20 + 0x18) * 0x10 + (longlong)*(int *)(lVar20 + 0x1c)) *
                 0x20;
        *(uint64_t *)(lVar20 + 0x78 + param_1) = *(uint64_t *)(lVar20 + 0x70 + param_1);
      }
      lVar22 = *(longlong *)(lVar22 + 0x10);
      while (lVar22 == 0) {
        plVar9 = plVar21 + 1;
        plVar21 = plVar21 + 1;
        lVar22 = *plVar9;
      }
    }
  }
  return;
}






// 函数: void FUN_1803d85f7(uint64_t param_1,uint64_t param_2)
void FUN_1803d85f7(uint64_t param_1,uint64_t param_2)

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
  int iVar10;
  int iVar11;
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
  float fVar23;
  float fVar24;
  longlong *plVar25;
  longlong in_RAX;
  longlong lVar26;
  longlong *plVar27;
  longlong *plVar28;
  uint64_t unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  uint64_t unaff_RDI;
  longlong lVar29;
  longlong lVar30;
  longlong in_R11;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  uint64_t uStack0000000000000030;
  int32_t uStack0000000000000038;
  int16_t uStack000000000000003c;
  uint64_t uStack0000000000000040;
  uint64_t uStack0000000000000048;
  int32_t uStack0000000000000050;
  int8_t uStack0000000000000054;
  int32_t uStack0000000000000058;
  uint64_t uStack000000000000005c;
  int16_t uStack0000000000000064;
  uint64_t uStack0000000000000068;
  int32_t uStack0000000000000070;
  uint64_t uStack0000000000000078;
  
  *(uint64_t *)(in_R11 + -0x18) = unaff_R15;
  if (in_RAX != 0) {
    *(uint64_t *)(in_R11 + 8) = unaff_RBX;
    *(uint64_t *)(in_R11 + 0x10) = unaff_RDI;
    *(uint64_t *)(in_R11 + 0x20) = unaff_R14;
    plVar27 = *(longlong **)(in_RAX + 0x40);
    lVar29 = *plVar27;
    plVar28 = plVar27;
    if (lVar29 == 0) {
      lVar29 = plVar27[1];
      plVar25 = plVar27;
      while (plVar28 = plVar25 + 1, lVar29 == 0) {
        lVar29 = plVar25[2];
        plVar25 = plVar28;
      }
    }
    lVar30 = plVar27[*(longlong *)(in_RAX + 0x48)];
    while (lVar29 != lVar30) {
      lVar26 = *(longlong *)(lVar29 + 8);
      if (lVar26 != 0) {
        fVar1 = *(float *)(lVar26 + 0xc4);
        fVar12 = *(float *)(lVar26 + 0x80);
        fVar13 = *(float *)(lVar26 + 0x84);
        fVar14 = *(float *)(lVar26 + 0x88);
        fVar15 = *(float *)(lVar26 + 0x8c);
        iVar10 = *(int *)(lVar26 + 0x18);
        fVar16 = *(float *)(lVar26 + 0x90);
        fVar17 = *(float *)(lVar26 + 0x94);
        fVar18 = *(float *)(lVar26 + 0x98);
        fVar19 = *(float *)(lVar26 + 0x9c);
        fVar20 = *(float *)(lVar26 + 0xa0);
        fVar21 = *(float *)(lVar26 + 0xa4);
        fVar22 = *(float *)(lVar26 + 0xa8);
        fVar23 = *(float *)(lVar26 + 0xac);
        uStack0000000000000030 = 0;
        fVar2 = *(float *)(lVar26 + 0xc0);
        fVar3 = *(float *)(lVar26 + 200);
        fVar4 = *(float *)(lVar26 + 0xd4);
        fVar5 = *(float *)(lVar26 + 0xe4);
        fVar6 = *(float *)(lVar26 + 0xf4);
        uStack0000000000000038 = 0xffffffff;
        uStack000000000000003c = 0xff00;
        uStack0000000000000040 = 0;
        uStack0000000000000048 = 0xffffffffffffffff;
        uStack0000000000000050 = 0xffffffff;
        uStack0000000000000054 = 0xff;
        fVar7 = *(float *)(lVar26 + 0xd0);
        uStack0000000000000058 = 0xffffffff;
        uStack000000000000005c = 0;
        fVar8 = *(float *)(lVar26 + 0xd8);
        uStack0000000000000064 = 0x400;
        fVar9 = *(float *)(lVar26 + 0xe0);
        uStack0000000000000068 = 0;
        *(float *)(unaff_RBP + -0x60) = fVar1 * fVar16 + fVar2 * fVar12 + fVar3 * fVar20;
        *(float *)(unaff_RBP + -0x5c) = fVar1 * fVar17 + fVar2 * fVar13 + fVar3 * fVar21;
        *(float *)(unaff_RBP + -0x58) = fVar1 * fVar18 + fVar2 * fVar14 + fVar3 * fVar22;
        *(float *)(unaff_RBP + -0x54) = fVar1 * fVar19 + fVar2 * fVar15 + fVar3 * fVar23;
        fVar1 = *(float *)(lVar26 + 0xe8);
        uStack0000000000000070 = 0;
        fVar2 = *(float *)(lVar26 + 0xf0);
        uStack0000000000000078 = 0;
        *(float *)(unaff_RBP + -0x50) = fVar4 * fVar16 + fVar7 * fVar12 + fVar8 * fVar20;
        *(float *)(unaff_RBP + -0x4c) = fVar4 * fVar17 + fVar7 * fVar13 + fVar8 * fVar21;
        *(float *)(unaff_RBP + -0x48) = fVar4 * fVar18 + fVar7 * fVar14 + fVar8 * fVar22;
        *(float *)(unaff_RBP + -0x44) = fVar4 * fVar19 + fVar7 * fVar15 + fVar8 * fVar23;
        fVar3 = *(float *)(lVar26 + 0xf8);
        iVar11 = *(int *)(lVar26 + 0x1c);
        fVar4 = *(float *)(lVar26 + 0xb0);
        fVar7 = *(float *)(lVar26 + 0xb4);
        fVar8 = *(float *)(lVar26 + 0xb8);
        fVar24 = *(float *)(lVar26 + 0xbc);
        *(int32_t *)(unaff_RBP + -0x80) = 0;
        *(float *)(unaff_RBP + -0x40) = fVar5 * fVar16 + fVar9 * fVar12 + fVar1 * fVar20;
        *(float *)(unaff_RBP + -0x3c) = fVar5 * fVar17 + fVar9 * fVar13 + fVar1 * fVar21;
        *(float *)(unaff_RBP + -0x38) = fVar5 * fVar18 + fVar9 * fVar14 + fVar1 * fVar22;
        *(float *)(unaff_RBP + -0x34) = fVar5 * fVar19 + fVar9 * fVar15 + fVar1 * fVar23;
        plVar27 = (longlong *)
                  (unaff_RSI + 0x70 + ((longlong)iVar10 * 0x10 + (longlong)iVar11) * 0x20);
        *(int8_t *)(unaff_RBP + -0x7c) = 0;
        *(uint64_t *)(unaff_RBP + -0x68) = 0;
        *(int32_t *)(unaff_RBP + -0x54) = 0;
        *(int32_t *)(unaff_RBP + -0x44) = 0;
        *(int32_t *)(unaff_RBP + -0x34) = 0;
        *(float *)(unaff_RBP + -0x30) = fVar6 * fVar16 + fVar2 * fVar12 + fVar3 * fVar20 + fVar4;
        *(float *)(unaff_RBP + -0x2c) = fVar6 * fVar17 + fVar2 * fVar13 + fVar3 * fVar21 + fVar7;
        *(float *)(unaff_RBP + -0x28) = fVar6 * fVar18 + fVar2 * fVar14 + fVar3 * fVar22 + fVar8;
        *(float *)(unaff_RBP + -0x24) = fVar6 * fVar19 + fVar2 * fVar15 + fVar3 * fVar23 + fVar24;
        *(int32_t *)(unaff_RBP + -0x24) = 0x3f800000;
        if (plVar27[1] - *plVar27 >> 2 != 0) {
          *(longlong **)(unaff_RBP + -0x68) = plVar27;
          FUN_1803d7f00(fVar4,param_2,unaff_RBP + -0x60,(float *)(lVar26 + 0x80),&stack0x00000030);
        }
      }
      lVar29 = *(longlong *)(lVar29 + 0x10);
      while (lVar29 == 0) {
        plVar27 = plVar28 + 1;
        plVar28 = plVar28 + 1;
        lVar29 = *plVar27;
      }
    }
  }
  lVar29 = *(longlong *)(unaff_RSI + 0x68);
  if (lVar29 != 0) {
    plVar27 = *(longlong **)(lVar29 + 0x40);
    lVar30 = *plVar27;
    plVar28 = plVar27;
    if (lVar30 == 0) {
      lVar30 = plVar27[1];
      plVar25 = plVar27;
      while (plVar28 = plVar25 + 1, lVar30 == 0) {
        lVar30 = plVar25[2];
        plVar25 = plVar28;
      }
    }
    lVar29 = plVar27[*(longlong *)(lVar29 + 0x48)];
    while (lVar30 != lVar29) {
      lVar26 = *(longlong *)(lVar30 + 8);
      if (lVar26 != 0) {
        lVar26 = ((longlong)*(int *)(lVar26 + 0x18) * 0x10 + (longlong)*(int *)(lVar26 + 0x1c)) *
                 0x20;
        *(uint64_t *)(lVar26 + 0x78 + unaff_RSI) = *(uint64_t *)(lVar26 + 0x70 + unaff_RSI);
      }
      lVar30 = *(longlong *)(lVar30 + 0x10);
      while (lVar30 == 0) {
        plVar27 = plVar28 + 1;
        plVar28 = plVar28 + 1;
        lVar30 = *plVar27;
      }
    }
  }
  return;
}






