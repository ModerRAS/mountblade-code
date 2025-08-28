#include "TaleWorlds.Native.Split.h"

// 99_part_06_part048.c - 9 个函数

// 函数: void FUN_1803d8607(void)
void FUN_1803d8607(void)

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
      plVar27 = (longlong *)(unaff_RSI + 0x70 + ((longlong)iVar10 * 0x10 + (longlong)iVar11) * 0x20)
      ;
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
        FUN_1803d7f00(fVar4,fVar3 * fVar20,unaff_RBP + -0x60,(float *)(lVar26 + 0x80),
                      &stack0x00000030);
      }
    }
    lVar29 = *(longlong *)(lVar29 + 0x10);
    while (lVar29 == 0) {
      plVar27 = plVar28 + 1;
      plVar28 = plVar28 + 1;
      lVar29 = *plVar27;
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






// 函数: void FUN_1803d864e(void)
void FUN_1803d864e(void)

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
  longlong lVar12;
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
  float fVar25;
  longlong *plVar26;
  longlong lVar27;
  longlong *plVar28;
  longlong *plVar29;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar30;
  longlong unaff_R14;
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
  
  do {
    lVar12 = *(longlong *)(unaff_RDI + 8);
    if (lVar12 != 0) {
      fVar1 = *(float *)(lVar12 + 0xc4);
      fVar13 = *(float *)(lVar12 + 0x80);
      fVar14 = *(float *)(lVar12 + 0x84);
      fVar15 = *(float *)(lVar12 + 0x88);
      fVar16 = *(float *)(lVar12 + 0x8c);
      iVar10 = *(int *)(lVar12 + 0x18);
      fVar17 = *(float *)(lVar12 + 0x90);
      fVar18 = *(float *)(lVar12 + 0x94);
      fVar19 = *(float *)(lVar12 + 0x98);
      fVar20 = *(float *)(lVar12 + 0x9c);
      fVar21 = *(float *)(lVar12 + 0xa0);
      fVar22 = *(float *)(lVar12 + 0xa4);
      fVar23 = *(float *)(lVar12 + 0xa8);
      fVar24 = *(float *)(lVar12 + 0xac);
      uStack0000000000000030 = 0;
      fVar2 = *(float *)(lVar12 + 0xc0);
      fVar3 = *(float *)(lVar12 + 200);
      fVar4 = *(float *)(lVar12 + 0xd4);
      fVar5 = *(float *)(lVar12 + 0xe4);
      fVar6 = *(float *)(lVar12 + 0xf4);
      uStack0000000000000038 = 0xffffffff;
      uStack000000000000003c = 0xff00;
      uStack0000000000000040 = 0;
      uStack0000000000000048 = 0xffffffffffffffff;
      uStack0000000000000050 = 0xffffffff;
      uStack0000000000000054 = 0xff;
      fVar7 = *(float *)(lVar12 + 0xd0);
      uStack0000000000000058 = 0xffffffff;
      uStack000000000000005c = 0;
      fVar8 = *(float *)(lVar12 + 0xd8);
      uStack0000000000000064 = 0x400;
      fVar9 = *(float *)(lVar12 + 0xe0);
      uStack0000000000000068 = 0;
      *(float *)(unaff_RBP + -0x60) = fVar1 * fVar17 + fVar2 * fVar13 + fVar3 * fVar21;
      *(float *)(unaff_RBP + -0x5c) = fVar1 * fVar18 + fVar2 * fVar14 + fVar3 * fVar22;
      *(float *)(unaff_RBP + -0x58) = fVar1 * fVar19 + fVar2 * fVar15 + fVar3 * fVar23;
      *(float *)(unaff_RBP + -0x54) = fVar1 * fVar20 + fVar2 * fVar16 + fVar3 * fVar24;
      fVar1 = *(float *)(lVar12 + 0xe8);
      uStack0000000000000070 = 0;
      fVar2 = *(float *)(lVar12 + 0xf0);
      uStack0000000000000078 = 0;
      *(float *)(unaff_RBP + -0x50) = fVar4 * fVar17 + fVar7 * fVar13 + fVar8 * fVar21;
      *(float *)(unaff_RBP + -0x4c) = fVar4 * fVar18 + fVar7 * fVar14 + fVar8 * fVar22;
      *(float *)(unaff_RBP + -0x48) = fVar4 * fVar19 + fVar7 * fVar15 + fVar8 * fVar23;
      *(float *)(unaff_RBP + -0x44) = fVar4 * fVar20 + fVar7 * fVar16 + fVar8 * fVar24;
      fVar3 = *(float *)(lVar12 + 0xf8);
      iVar11 = *(int *)(lVar12 + 0x1c);
      fVar4 = *(float *)(lVar12 + 0xb0);
      fVar7 = *(float *)(lVar12 + 0xb4);
      fVar8 = *(float *)(lVar12 + 0xb8);
      fVar25 = *(float *)(lVar12 + 0xbc);
      *(int32_t *)(unaff_RBP + -0x80) = 0;
      *(float *)(unaff_RBP + -0x40) = fVar5 * fVar17 + fVar9 * fVar13 + fVar1 * fVar21;
      *(float *)(unaff_RBP + -0x3c) = fVar5 * fVar18 + fVar9 * fVar14 + fVar1 * fVar22;
      *(float *)(unaff_RBP + -0x38) = fVar5 * fVar19 + fVar9 * fVar15 + fVar1 * fVar23;
      *(float *)(unaff_RBP + -0x34) = fVar5 * fVar20 + fVar9 * fVar16 + fVar1 * fVar24;
      plVar28 = (longlong *)(unaff_RSI + 0x70 + ((longlong)iVar10 * 0x10 + (longlong)iVar11) * 0x20)
      ;
      *(int8_t *)(unaff_RBP + -0x7c) = 0;
      *(uint64_t *)(unaff_RBP + -0x68) = 0;
      *(int32_t *)(unaff_RBP + -0x54) = 0;
      *(int32_t *)(unaff_RBP + -0x44) = 0;
      *(int32_t *)(unaff_RBP + -0x34) = 0;
      *(float *)(unaff_RBP + -0x30) = fVar6 * fVar17 + fVar2 * fVar13 + fVar3 * fVar21 + fVar4;
      *(float *)(unaff_RBP + -0x2c) = fVar6 * fVar18 + fVar2 * fVar14 + fVar3 * fVar22 + fVar7;
      *(float *)(unaff_RBP + -0x28) = fVar6 * fVar19 + fVar2 * fVar15 + fVar3 * fVar23 + fVar8;
      *(float *)(unaff_RBP + -0x24) = fVar6 * fVar20 + fVar2 * fVar16 + fVar3 * fVar24 + fVar25;
      *(int32_t *)(unaff_RBP + -0x24) = 0x3f800000;
      if (plVar28[1] - *plVar28 >> 2 != 0) {
        *(longlong **)(unaff_RBP + -0x68) = plVar28;
        FUN_1803d7f00(fVar4,fVar3 * fVar21,unaff_RBP + -0x60,(float *)(lVar12 + 0x80),
                      &stack0x00000030);
      }
    }
    unaff_RDI = *(longlong *)(unaff_RDI + 0x10);
    while (unaff_RDI == 0) {
      plVar28 = (longlong *)(unaff_RBX + 8);
      unaff_RBX = unaff_RBX + 8;
      unaff_RDI = *plVar28;
    }
  } while (unaff_RDI != unaff_R14);
  lVar12 = *(longlong *)(unaff_RSI + 0x68);
  if (lVar12 != 0) {
    plVar28 = *(longlong **)(lVar12 + 0x40);
    lVar30 = *plVar28;
    plVar29 = plVar28;
    if (lVar30 == 0) {
      lVar30 = plVar28[1];
      plVar26 = plVar28;
      while (plVar29 = plVar26 + 1, lVar30 == 0) {
        lVar30 = plVar26[2];
        plVar26 = plVar29;
      }
    }
    lVar12 = plVar28[*(longlong *)(lVar12 + 0x48)];
    while (lVar30 != lVar12) {
      lVar27 = *(longlong *)(lVar30 + 8);
      if (lVar27 != 0) {
        lVar27 = ((longlong)*(int *)(lVar27 + 0x18) * 0x10 + (longlong)*(int *)(lVar27 + 0x1c)) *
                 0x20;
        *(uint64_t *)(lVar27 + 0x78 + unaff_RSI) = *(uint64_t *)(lVar27 + 0x70 + unaff_RSI);
      }
      lVar30 = *(longlong *)(lVar30 + 0x10);
      while (lVar30 == 0) {
        plVar28 = plVar29 + 1;
        plVar29 = plVar29 + 1;
        lVar30 = *plVar28;
      }
    }
  }
  return;
}






// 函数: void FUN_1803d8879(void)
void FUN_1803d8879(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong unaff_RSI;
  longlong lVar6;
  
  lVar1 = *(longlong *)(unaff_RSI + 0x68);
  if (lVar1 != 0) {
    plVar2 = *(longlong **)(lVar1 + 0x40);
    lVar6 = *plVar2;
    plVar5 = plVar2;
    if (lVar6 == 0) {
      lVar6 = plVar2[1];
      plVar3 = plVar2;
      while (plVar5 = plVar3 + 1, lVar6 == 0) {
        lVar6 = plVar3[2];
        plVar3 = plVar5;
      }
    }
    lVar1 = plVar2[*(longlong *)(lVar1 + 0x48)];
    while (lVar6 != lVar1) {
      lVar4 = *(longlong *)(lVar6 + 8);
      if (lVar4 != 0) {
        lVar4 = ((longlong)*(int *)(lVar4 + 0x18) * 0x10 + (longlong)*(int *)(lVar4 + 0x1c)) * 0x20;
        *(uint64_t *)(lVar4 + 0x78 + unaff_RSI) = *(uint64_t *)(lVar4 + 0x70 + unaff_RSI);
      }
      lVar6 = *(longlong *)(lVar6 + 0x10);
      while (lVar6 == 0) {
        plVar2 = plVar5 + 1;
        plVar5 = plVar5 + 1;
        lVar6 = *plVar2;
      }
    }
  }
  return;
}






// 函数: void FUN_1803d8891(void)
void FUN_1803d8891(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong unaff_RSI;
  longlong lVar6;
  
  lVar1 = *(longlong *)(unaff_RSI + 0x68);
  if (lVar1 != 0) {
    plVar2 = *(longlong **)(lVar1 + 0x40);
    lVar6 = *plVar2;
    plVar5 = plVar2;
    if (lVar6 == 0) {
      lVar6 = plVar2[1];
      plVar3 = plVar2;
      while (plVar5 = plVar3 + 1, lVar6 == 0) {
        lVar6 = plVar3[2];
        plVar3 = plVar5;
      }
    }
    lVar1 = plVar2[*(longlong *)(lVar1 + 0x48)];
    while (lVar6 != lVar1) {
      lVar4 = *(longlong *)(lVar6 + 8);
      if (lVar4 != 0) {
        lVar4 = ((longlong)*(int *)(lVar4 + 0x18) * 0x10 + (longlong)*(int *)(lVar4 + 0x1c)) * 0x20;
        *(uint64_t *)(lVar4 + 0x78 + unaff_RSI) = *(uint64_t *)(lVar4 + 0x70 + unaff_RSI);
      }
      lVar6 = *(longlong *)(lVar6 + 0x10);
      while (lVar6 == 0) {
        plVar2 = plVar5 + 1;
        plVar5 = plVar5 + 1;
        lVar6 = *plVar2;
      }
    }
  }
  return;
}






// 函数: void FUN_1803d88a6(void)
void FUN_1803d88a6(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong in_RAX;
  longlong lVar4;
  longlong *plVar5;
  longlong unaff_RSI;
  longlong lVar6;
  
  plVar1 = *(longlong **)(in_RAX + 0x40);
  lVar6 = *plVar1;
  plVar5 = plVar1;
  if (lVar6 == 0) {
    lVar6 = plVar1[1];
    plVar3 = plVar1;
    while (plVar5 = plVar3 + 1, lVar6 == 0) {
      lVar6 = plVar3[2];
      plVar3 = plVar5;
    }
  }
  lVar2 = plVar1[*(longlong *)(in_RAX + 0x48)];
  while (lVar6 != lVar2) {
    lVar4 = *(longlong *)(lVar6 + 8);
    if (lVar4 != 0) {
      lVar4 = ((longlong)*(int *)(lVar4 + 0x18) * 0x10 + (longlong)*(int *)(lVar4 + 0x1c)) * 0x20;
      *(uint64_t *)(lVar4 + 0x78 + unaff_RSI) = *(uint64_t *)(lVar4 + 0x70 + unaff_RSI);
    }
    lVar6 = *(longlong *)(lVar6 + 0x10);
    while (lVar6 == 0) {
      plVar1 = plVar5 + 1;
      plVar5 = plVar5 + 1;
      lVar6 = *plVar1;
    }
  }
  return;
}






// 函数: void FUN_1803d8930(longlong param_1,uint64_t param_2,longlong param_3)
void FUN_1803d8930(longlong param_1,uint64_t param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  
  if (((*(longlong *)(param_1 + 0x68) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x68), lVar1 != 0)) &&
     (*(char *)(lVar1 + 0x60b91) != '\0')) {
    cVar2 = func_0x0001803b6e60();
    if ((((cVar2 != '\0') && (lVar1 = *(longlong *)(param_1 + 0x68), *(int *)(lVar1 + 0x10) != 3))
        && ((*(int *)(lVar1 + 0x10) != 1 &&
            ((*(int *)(lVar1 + 0x10) != 7 && (*(int *)(lVar1 + 0x10) != 5)))))) &&
       (3 < *(int *)(param_3 + 0x27c0))) {
      FUN_1801b6b70(param_3,param_2);
      FUN_1803d58e0(param_1,param_3,param_2);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1803d89d0(longlong param_1)

{
  longlong lVar1;
  uint64_t *puVar2;
  int iVar3;
  ulonglong uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  char acStackX_10 [4];
  uint uStackX_14;
  
  uVar4 = *(ulonglong *)(param_1 + 0x68);
  if (uVar4 != 0) {
    iVar7 = 0;
    iVar11 = *(int *)(uVar4 + 0x18) * *(int *)(uVar4 + 0x14);
    if (0 < iVar11) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x68);
        uVar10 = (ulonglong)*(uint *)(lVar1 + 0x48);
        iVar3 = iVar7 / *(int *)(lVar1 + 0x14);
        iVar6 = iVar7 % *(int *)(lVar1 + 0x14);
        uVar12 = (ulonglong)(iVar6 * 1000 + iVar3);
        uVar4 = uVar12 / uVar10;
        uVar8 = uVar12 % uVar10;
        for (piVar5 = *(int **)(*(longlong *)(lVar1 + 0x40) + uVar8 * 8); piVar5 != (int *)0x0;
            piVar5 = *(int **)(piVar5 + 4)) {
          if ((iVar6 == *piVar5) && (iVar3 == piVar5[1])) goto LAB_1803d8af9;
        }
        FUN_18066c220(lVar1 + 0x58,acStackX_10,uVar10,*(int32_t *)(lVar1 + 0x50),1);
        piVar5 = (int *)FUN_18062b420(_DAT_180c8ed18,0x18,*(int8_t *)(lVar1 + 100));
        *(ulonglong *)piVar5 = CONCAT44(iVar3,iVar6);
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        piVar5[5] = 0;
        if (acStackX_10[0] != '\0') {
          uVar8 = uVar12 % (ulonglong)uStackX_14;
          FUN_1803b94a0(lVar1 + 0x38,uStackX_14);
        }
        *(uint64_t *)(piVar5 + 4) = *(uint64_t *)(*(longlong *)(lVar1 + 0x40) + uVar8 * 8);
        uVar4 = *(ulonglong *)(lVar1 + 0x40);
        *(int **)(uVar4 + uVar8 * 8) = piVar5;
        *(longlong *)(lVar1 + 0x50) = *(longlong *)(lVar1 + 0x50) + 1;
LAB_1803d8af9:
        lVar1 = *(longlong *)(piVar5 + 2);
        if (lVar1 != 0) {
          lVar9 = lVar1 + 0x628;
          puVar2 = *(uint64_t **)(lVar1 + 0x638);
          if (puVar2 != (uint64_t *)0x0) {
            FUN_18004b790(lVar9,*puVar2);
                    // WARNING: Subroutine does not return
            FUN_18064e900(puVar2);
          }
          *(longlong *)lVar9 = lVar9;
          *(longlong *)(lVar1 + 0x630) = lVar9;
          *(uint64_t *)(lVar1 + 0x638) = 0;
          *(int8_t *)(lVar1 + 0x640) = 0;
          *(uint64_t *)(lVar1 + 0x648) = 0;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar11);
    }
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803d89e9(void)
void FUN_1803d89e9(void)

{
  longlong lVar1;
  uint64_t *puVar2;
  longlong in_RAX;
  int *piVar3;
  uint64_t unaff_RBX;
  int iVar4;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  ulonglong uVar5;
  longlong lVar6;
  uint64_t unaff_RDI;
  longlong in_R11;
  uint64_t unaff_R12;
  longlong unaff_R13;
  int iVar7;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  ulonglong uVar8;
  int iStack0000000000000070;
  int iStack0000000000000074;
  char cStack0000000000000078;
  uint uStack000000000000007c;
  
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R12;
  iVar4 = 0;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R14;
  iVar7 = *(int *)(in_RAX + 0x18) * *(int *)(in_RAX + 0x14);
  if (0 < iVar7) {
    *(uint64_t *)(in_R11 + 0x18) = unaff_RBX;
    *(uint64_t *)(in_R11 + -0x18) = unaff_RSI;
    *(uint64_t *)(in_R11 + -0x20) = unaff_RDI;
    *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
    do {
      lVar1 = *(longlong *)(unaff_R13 + 0x68);
      iStack0000000000000074 = iVar4 / *(int *)(lVar1 + 0x14);
      iStack0000000000000070 = iVar4 % *(int *)(lVar1 + 0x14);
      uVar8 = (ulonglong)(iStack0000000000000070 * 1000 + iStack0000000000000074);
      uVar5 = uVar8 % (ulonglong)*(uint *)(lVar1 + 0x48);
      for (piVar3 = *(int **)(*(longlong *)(lVar1 + 0x40) + uVar5 * 8); piVar3 != (int *)0x0;
          piVar3 = *(int **)(piVar3 + 4)) {
        if ((iStack0000000000000070 == *piVar3) && (iStack0000000000000074 == piVar3[1]))
        goto LAB_1803d8af9;
      }
      FUN_18066c220(lVar1 + 0x58,&stack0x00000078,(ulonglong)*(uint *)(lVar1 + 0x48),
                    *(int32_t *)(lVar1 + 0x50),1);
      piVar3 = (int *)FUN_18062b420(_DAT_180c8ed18,0x18,*(int8_t *)(lVar1 + 100));
      *(ulonglong *)piVar3 = CONCAT44(iStack0000000000000074,iStack0000000000000070);
      piVar3[2] = 0;
      piVar3[3] = 0;
      piVar3[4] = 0;
      piVar3[5] = 0;
      if (cStack0000000000000078 != '\0') {
        uVar5 = uVar8 % (ulonglong)uStack000000000000007c;
        FUN_1803b94a0(lVar1 + 0x38,uStack000000000000007c);
      }
      *(uint64_t *)(piVar3 + 4) = *(uint64_t *)(*(longlong *)(lVar1 + 0x40) + uVar5 * 8);
      *(int **)(*(longlong *)(lVar1 + 0x40) + uVar5 * 8) = piVar3;
      *(longlong *)(lVar1 + 0x50) = *(longlong *)(lVar1 + 0x50) + 1;
LAB_1803d8af9:
      lVar1 = *(longlong *)(piVar3 + 2);
      if (lVar1 != 0) {
        lVar6 = lVar1 + 0x628;
        puVar2 = *(uint64_t **)(lVar1 + 0x638);
        if (puVar2 != (uint64_t *)0x0) {
          FUN_18004b790(lVar6,*puVar2);
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar2);
        }
        *(longlong *)lVar6 = lVar6;
        *(longlong *)(lVar1 + 0x630) = lVar6;
        *(uint64_t *)(lVar1 + 0x638) = 0;
        *(int8_t *)(lVar1 + 0x640) = 0;
        *(uint64_t *)(lVar1 + 0x648) = 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar7);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1803d8a0d(void)

{
  longlong lVar1;
  uint64_t *puVar2;
  ulonglong uVar3;
  int *piVar4;
  uint64_t unaff_RBX;
  int unaff_EBP;
  uint64_t unaff_RSI;
  ulonglong uVar5;
  longlong lVar6;
  uint64_t unaff_RDI;
  ulonglong uVar7;
  longlong in_R11;
  uint64_t unaff_R12;
  longlong unaff_R13;
  int unaff_R14D;
  uint64_t unaff_R15;
  ulonglong uVar8;
  int iStack0000000000000070;
  int iStack0000000000000074;
  char cStack0000000000000078;
  uint uStack000000000000007c;
  
  *(uint64_t *)(in_R11 + 0x18) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x20) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  do {
    lVar1 = *(longlong *)(unaff_R13 + 0x68);
    uVar7 = (ulonglong)*(uint *)(lVar1 + 0x48);
    iStack0000000000000074 = unaff_EBP / *(int *)(lVar1 + 0x14);
    iStack0000000000000070 = unaff_EBP % *(int *)(lVar1 + 0x14);
    uVar8 = (ulonglong)(iStack0000000000000070 * 1000 + iStack0000000000000074);
    uVar3 = uVar8 / uVar7;
    uVar5 = uVar8 % uVar7;
    for (piVar4 = *(int **)(*(longlong *)(lVar1 + 0x40) + uVar5 * 8); piVar4 != (int *)0x0;
        piVar4 = *(int **)(piVar4 + 4)) {
      if ((iStack0000000000000070 == *piVar4) && (iStack0000000000000074 == piVar4[1]))
      goto LAB_1803d8af9;
    }
    FUN_18066c220(lVar1 + 0x58,&stack0x00000078,uVar7,*(int32_t *)(lVar1 + 0x50),1);
    piVar4 = (int *)FUN_18062b420(_DAT_180c8ed18,0x18,*(int8_t *)(lVar1 + 100));
    *(ulonglong *)piVar4 = CONCAT44(iStack0000000000000074,iStack0000000000000070);
    *(uint64_t *)(piVar4 + 2) = unaff_R12;
    *(uint64_t *)(piVar4 + 4) = unaff_R12;
    if (cStack0000000000000078 != (char)unaff_R12) {
      uVar5 = uVar8 % (ulonglong)uStack000000000000007c;
      FUN_1803b94a0(lVar1 + 0x38,uStack000000000000007c);
    }
    *(uint64_t *)(piVar4 + 4) = *(uint64_t *)(*(longlong *)(lVar1 + 0x40) + uVar5 * 8);
    uVar3 = *(ulonglong *)(lVar1 + 0x40);
    *(int **)(uVar3 + uVar5 * 8) = piVar4;
    *(longlong *)(lVar1 + 0x50) = *(longlong *)(lVar1 + 0x50) + 1;
LAB_1803d8af9:
    lVar1 = *(longlong *)(piVar4 + 2);
    if (lVar1 != 0) {
      lVar6 = lVar1 + 0x628;
      puVar2 = *(uint64_t **)(lVar1 + 0x638);
      if (puVar2 != (uint64_t *)0x0) {
        FUN_18004b790(lVar6,*puVar2);
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar2);
      }
      *(longlong *)lVar6 = lVar6;
      *(longlong *)(lVar1 + 0x630) = lVar6;
      *(uint64_t *)(lVar1 + 0x638) = unaff_R12;
      *(char *)(lVar1 + 0x640) = (char)unaff_R12;
      *(uint64_t *)(lVar1 + 0x648) = unaff_R12;
    }
    unaff_EBP = unaff_EBP + 1;
    if (unaff_R14D <= unaff_EBP) {
      return uVar3;
    }
  } while( true );
}






// 函数: void FUN_1803d8b66(void)
void FUN_1803d8b66(void)

{
  return;
}






// 函数: void FUN_1803d8b75(void)
void FUN_1803d8b75(void)

{
  return;
}



uint64_t * FUN_1803d8b80(uint64_t *param_1,ulonglong param_2)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if ((longlong *)param_1[0x40e] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x40e] + 0x38))();
  }
  FUN_1808fc8a8(param_1 + 0xe,0x20,0x100,FUN_180046860,uVar1);
  *param_1 = &unknown_var_3952_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if ((param_2 & 1) != 0) {
    free(param_1,0x2078);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




