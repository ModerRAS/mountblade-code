#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part309.c - 3 个函数

// 函数: void FUN_180430124(void)
void FUN_180430124(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint64_t uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint64_t uVar8;
  int8_t uVar9;
  int8_t uVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  int unaff_EBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t uVar14;
  int unaff_EDI;
  uint uVar15;
  int iVar16;
  int iVar17;
  int64_t lVar18;
  float *pfVar19;
  int32_t in_R10D;
  int64_t lVar20;
  int iVar21;
  int64_t in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  int unaff_R14D;
  int iVar22;
  int iVar23;
  uint64_t *unaff_R15;
  float fVar24;
  float fVar25;
  float fVar26;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  char in_stack_00000040;
  int in_stack_00000048;
  uint uStack000000000000004c;
  int in_stack_00000050;
  int iStack0000000000000054;
  int iStack0000000000000058;
  int iStack000000000000005c;
  int32_t in_stack_00000060;
  int32_t uStack0000000000000064;
  int32_t uStack0000000000000068;
  int iStack000000000000006c;
  int iStack0000000000000070;
  int iStack0000000000000074;
  uint64_t *in_stack_00000078;
  
  *(uint64_t *)(in_R11 + -0x30) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R13;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM8_Dd;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM9_Dd;
  lVar18 = 0;
  do {
    iVar16 = (*(int *)(unaff_RSI + 0xa28fb0 + lVar18 * 4) * 0x14 + 0x32) / 100;
    uVar9 = (int8_t)unaff_EDI;
    if (iVar16 < 1) {
      uVar10 = 1;
    }
    else {
      uVar10 = (char)iVar16;
      if (unaff_EDI < iVar16) {
        uVar10 = uVar9;
      }
    }
    iVar16 = *(int *)(unaff_RSI + 0xa28eb0 + lVar18 * 4);
    uVar14 = (uint64_t)*(byte *)(lVar18 + 0x995860 + unaff_RSI);
    *(int8_t *)(unaff_RBP + 0x4a0 + uVar14) = uVar10;
    iVar16 = (iVar16 * 0x14 + 0x32) / 100;
    if (iVar16 < 1) {
      uVar10 = 1;
    }
    else {
      uVar10 = (char)iVar16;
      if (unaff_EDI < iVar16) {
        uVar10 = uVar9;
      }
    }
    iVar16 = *(int *)(unaff_RSI + 0xa28fb4 + lVar18 * 4);
    *(int8_t *)(unaff_RBP + 0x4e0 + uVar14) = uVar10;
    iVar16 = (iVar16 * 0x14 + 0x32) / 100;
    if (iVar16 < 1) {
      uVar10 = 1;
    }
    else {
      uVar10 = (char)iVar16;
      if (unaff_EDI < iVar16) {
        uVar10 = uVar9;
      }
    }
    iVar16 = *(int *)(unaff_RSI + 0xa28eb4 + lVar18 * 4);
    uVar14 = (uint64_t)*(byte *)(lVar18 + 0x995861 + unaff_RSI);
    *(int8_t *)(unaff_RBP + 0x4a0 + uVar14) = uVar10;
    iVar16 = (iVar16 * 0x14 + 0x32) / 100;
    if (iVar16 < 1) {
      uVar10 = 1;
    }
    else {
      uVar10 = (char)iVar16;
      if (unaff_EDI < iVar16) {
        uVar10 = uVar9;
      }
    }
    iVar16 = *(int *)(unaff_RSI + 0xa28fb8 + lVar18 * 4);
    *(int8_t *)(unaff_RBP + 0x4e0 + uVar14) = uVar10;
    iVar16 = (iVar16 * 0x14 + 0x32) / 100;
    if (iVar16 < 1) {
      uVar10 = 1;
    }
    else {
      uVar10 = (char)iVar16;
      if (unaff_EDI < iVar16) {
        uVar10 = uVar9;
      }
    }
    iVar16 = *(int *)(unaff_RSI + 0xa28eb8 + lVar18 * 4);
    uVar14 = (uint64_t)*(byte *)(lVar18 + 0x995862 + unaff_RSI);
    *(int8_t *)(unaff_RBP + 0x4a0 + uVar14) = uVar10;
    iVar16 = (iVar16 * 0x14 + 0x32) / 100;
    if (iVar16 < 1) {
      uVar10 = 1;
    }
    else {
      uVar10 = (char)iVar16;
      if (unaff_EDI < iVar16) {
        uVar10 = uVar9;
      }
    }
    iVar16 = *(int *)(unaff_RSI + 0xa28fbc + lVar18 * 4);
    *(int8_t *)(unaff_RBP + 0x4e0 + uVar14) = uVar10;
    iVar16 = (iVar16 * 0x14 + 0x32) / 100;
    if (iVar16 < 1) {
      uVar10 = 1;
    }
    else {
      uVar10 = (char)iVar16;
      if (unaff_EDI < iVar16) {
        uVar10 = uVar9;
      }
    }
    iVar16 = *(int *)(unaff_RSI + 0xa28ebc + lVar18 * 4);
    uVar14 = (uint64_t)*(byte *)(lVar18 + 0x995863 + unaff_RSI);
    *(int8_t *)(unaff_RBP + 0x4a0 + uVar14) = uVar10;
    iVar16 = (iVar16 * 0x14 + 0x32) / 100;
    if (iVar16 < 1) {
      uVar10 = 1;
    }
    else {
      uVar10 = (char)iVar16;
      if (unaff_EDI < iVar16) {
        uVar10 = uVar9;
      }
    }
    iVar16 = *(int *)(unaff_RSI + 0xa28fc0 + lVar18 * 4);
    *(int8_t *)(unaff_RBP + 0x4e0 + uVar14) = uVar10;
    iVar16 = (iVar16 * 0x14 + 0x32) / 100;
    if (iVar16 < 1) {
      uVar10 = 1;
    }
    else {
      uVar10 = (char)iVar16;
      if (unaff_EDI < iVar16) {
        uVar10 = uVar9;
      }
    }
    iVar16 = *(int *)(unaff_RSI + 0xa28ec0 + lVar18 * 4);
    uVar14 = (uint64_t)*(byte *)(lVar18 + 0x995864 + unaff_RSI);
    *(int8_t *)(unaff_RBP + 0x4a0 + uVar14) = uVar10;
    iVar16 = (iVar16 * 0x14 + 0x32) / 100;
    if (iVar16 < 1) {
      uVar10 = 1;
    }
    else {
      uVar10 = (char)iVar16;
      if (unaff_EDI < iVar16) {
        uVar10 = uVar9;
      }
    }
    iVar16 = *(int *)(unaff_RSI + 0xa28fc4 + lVar18 * 4);
    *(int8_t *)(unaff_RBP + 0x4e0 + uVar14) = uVar10;
    iVar16 = (iVar16 * 0x14 + 0x32) / 100;
    if (iVar16 < 1) {
      uVar10 = 1;
    }
    else {
      uVar10 = (char)iVar16;
      if (unaff_EDI < iVar16) {
        uVar10 = uVar9;
      }
    }
    iVar16 = *(int *)(unaff_RSI + 0xa28ec4 + lVar18 * 4);
    uVar14 = (uint64_t)*(byte *)(lVar18 + 0x995865 + unaff_RSI);
    *(int8_t *)(unaff_RBP + 0x4a0 + uVar14) = uVar10;
    iVar16 = (iVar16 * 0x14 + 0x32) / 100;
    if (iVar16 < 1) {
      uVar10 = 1;
    }
    else {
      uVar10 = (char)iVar16;
      if (unaff_EDI < iVar16) {
        uVar10 = uVar9;
      }
    }
    iVar16 = *(int *)(unaff_RSI + 0xa28fc8 + lVar18 * 4);
    *(int8_t *)(unaff_RBP + 0x4e0 + uVar14) = uVar10;
    iVar16 = (iVar16 * 0x14 + 0x32) / 100;
    if (iVar16 < 1) {
      uVar10 = 1;
    }
    else {
      uVar10 = (char)iVar16;
      if (unaff_EDI < iVar16) {
        uVar10 = uVar9;
      }
    }
    iVar16 = *(int *)(unaff_RSI + 0xa28ec8 + lVar18 * 4);
    uVar14 = (uint64_t)*(byte *)(lVar18 + 0x995866 + unaff_RSI);
    *(int8_t *)(unaff_RBP + 0x4a0 + uVar14) = uVar10;
    iVar16 = (iVar16 * 0x14 + 0x32) / 100;
    if (iVar16 < 1) {
      uVar10 = 1;
    }
    else {
      uVar10 = (char)iVar16;
      if (unaff_EDI < iVar16) {
        uVar10 = uVar9;
      }
    }
    iVar16 = *(int *)(unaff_RSI + 0xa28fcc + lVar18 * 4);
    *(int8_t *)(unaff_RBP + 0x4e0 + uVar14) = uVar10;
    iVar16 = (iVar16 * 0x14 + 0x32) / 100;
    if (iVar16 < 1) {
      uVar10 = 1;
    }
    else {
      uVar10 = (char)iVar16;
      if (unaff_EDI < iVar16) {
        uVar10 = uVar9;
      }
    }
    iVar16 = *(int *)(unaff_RSI + 0xa28ecc + lVar18 * 4);
    uVar14 = (uint64_t)*(byte *)(lVar18 + 0x995867 + unaff_RSI);
    *(int8_t *)(unaff_RBP + 0x4a0 + uVar14) = uVar10;
    iVar16 = (iVar16 * 0x14 + 0x32) / 100;
    if (iVar16 < 1) {
      uVar10 = 1;
    }
    else {
      uVar10 = (char)iVar16;
      if (unaff_EDI < iVar16) {
        uVar10 = uVar9;
      }
    }
    lVar18 = lVar18 + 8;
    *(int8_t *)(unaff_RBP + 0x4e0 + uVar14) = uVar10;
  } while (lVar18 < 0x40);
  pfVar19 = (float *)&unknown_var_4272_ptr;
  lVar18 = 0;
  do {
    fVar24 = *pfVar19;
    uVar14 = (uint64_t)*(byte *)(lVar18 + 0x995860 + unaff_RSI);
    bVar1 = *(byte *)(unaff_RBP + 0x4e0 + uVar14);
    uVar8 = (uint64_t)*(byte *)(lVar18 + 0x995861 + unaff_RSI);
    bVar2 = *(byte *)(unaff_RBP + 0x4a0 + uVar8);
    *(float *)(unaff_RBP + 0x80 + lVar18 * 4) =
         0.35355338 / ((float)*(byte *)(unaff_RBP + 0x4a0 + uVar14) * fVar24);
    bVar3 = *(byte *)(unaff_RBP + 0x4e0 + uVar8);
    uVar14 = (uint64_t)*(byte *)(lVar18 + 0x995862 + unaff_RSI);
    *(float *)(unaff_RBP + -0x80 + lVar18 * 4) = 0.35355338 / ((float)bVar1 * fVar24);
    bVar1 = *(byte *)(unaff_RBP + 0x4a0 + uVar14);
    *(float *)(unaff_RBP + 0x84 + lVar18 * 4) = 0.25489777 / ((float)bVar2 * fVar24);
    bVar2 = *(byte *)(unaff_RBP + 0x4e0 + uVar14);
    uVar14 = (uint64_t)*(byte *)(lVar18 + 0x995863 + unaff_RSI);
    *(float *)(unaff_RBP + -0x7c + lVar18 * 4) = 0.25489777 / ((float)bVar3 * fVar24);
    bVar3 = *(byte *)(unaff_RBP + 0x4a0 + uVar14);
    *(float *)(unaff_RBP + 0x88 + lVar18 * 4) = 0.27059805 / ((float)bVar1 * fVar24);
    bVar1 = *(byte *)(unaff_RBP + 0x4e0 + uVar14);
    uVar14 = (uint64_t)*(byte *)(lVar18 + 0x995864 + unaff_RSI);
    *(float *)(unaff_RBP + -0x78 + lVar18 * 4) = 0.27059805 / ((float)bVar2 * fVar24);
    bVar2 = *(byte *)(unaff_RBP + 0x4a0 + uVar14);
    *(float *)(unaff_RBP + 0x8c + lVar18 * 4) = 0.30067247 / ((float)bVar3 * fVar24);
    bVar3 = *(byte *)(unaff_RBP + 0x4e0 + uVar14);
    uVar14 = (uint64_t)*(byte *)(lVar18 + 0x995865 + unaff_RSI);
    *(float *)(unaff_RBP + -0x74 + lVar18 * 4) = 0.30067247 / ((float)bVar1 * fVar24);
    bVar1 = *(byte *)(unaff_RBP + 0x4a0 + uVar14);
    *(float *)(unaff_RBP + 0x90 + lVar18 * 4) = 0.35355338 / ((float)bVar2 * fVar24);
    *(float *)(unaff_RBP + -0x70 + lVar18 * 4) = 0.35355338 / ((float)bVar3 * fVar24);
    bVar2 = *(byte *)(unaff_RBP + 0x4e0 + uVar14);
    uVar14 = (uint64_t)*(byte *)(lVar18 + 0x995866 + unaff_RSI);
    lVar20 = lVar18 + 8;
    pfVar19 = pfVar19 + 1;
    bVar3 = *(byte *)(unaff_RBP + 0x4a0 + uVar14);
    *(float *)(unaff_RBP + 0x74 + lVar20 * 4) = 0.4499881 / ((float)bVar1 * fVar24);
    bVar1 = *(byte *)(unaff_RBP + 0x4e0 + uVar14);
    uVar14 = (uint64_t)*(byte *)(lVar18 + 0x995867 + unaff_RSI);
    *(float *)((int64_t)&stack0x00000070 + lVar20 * 4 + 4) = 0.4499881 / ((float)bVar2 * fVar24);
    bVar2 = *(byte *)(unaff_RBP + 0x4a0 + uVar14);
    *(float *)(unaff_RBP + 0x78 + lVar20 * 4) = 0.6532815 / ((float)bVar3 * fVar24);
    bVar3 = *(byte *)(unaff_RBP + 0x4e0 + uVar14);
    *(float *)((int64_t)&stack0x00000078 + lVar20 * 4) = 0.6532815 / ((float)bVar1 * fVar24);
    *(float *)(unaff_RBP + 0x7c + lVar20 * 4) = 1.2814577 / ((float)bVar2 * fVar24);
    *(float *)((int64_t)&stack0x00000078 + lVar20 * 4 + 4) = 1.2814577 / ((float)bVar3 * fVar24);
    lVar18 = lVar20;
  } while ((int64_t)pfVar19 < 0x180a28eb0);
  uVar4 = unaff_R15[1];
  *(int32_t *)(unaff_RBP + 0x480) = 0x1100c0ff;
  *(char *)(unaff_RBP + 0x485) = (char)((uint)in_R10D >> 8);
  *(char *)(unaff_RBP + 0x487) = (char)((uint)unaff_EBX >> 8);
  *(int8_t *)(unaff_RBP + 0x484) = 8;
  *(char *)(unaff_RBP + 0x486) = (char)in_R10D;
  *(char *)(unaff_RBP + 0x488) = (char)unaff_EBX;
  *(int32_t *)(unaff_RBP + 0x489) = 0x110103;
  *(int32_t *)(unaff_RBP + 0x48d) = 0x3011102;
  *(int32_t *)(unaff_RBP + 0x491) = 0xc4ff0111;
  *(int16_t *)(unaff_RBP + 0x495) = 0xa201;
  *(int8_t *)(unaff_RBP + 0x497) = 0;
  (*(code *)*unaff_R15)(uVar4,&unknown_var_4240_ptr,0x19);
  (*(code *)*unaff_R15)(unaff_R15[1],unaff_RBP + 0x4a0,0x40);
  in_stack_00000040 = 1;
  (*(code *)*unaff_R15)(unaff_R15[1],&stack0x00000040,1);
  (*(code *)*unaff_R15)(unaff_R15[1],unaff_RBP + 0x4e0,0x40);
  (*(code *)*unaff_R15)(unaff_R15[1],unaff_RBP + 0x480,0x18);
  (*(code *)*unaff_R15)(unaff_R15[1],&unknown_var_5009_ptr,0x10);
  (*(code *)*unaff_R15)(unaff_R15[1],&unknown_var_1104_ptr,0xc);
  in_stack_00000040 = 0x10;
  (*(code *)*unaff_R15)(unaff_R15[1],&stack0x00000040,1);
  (*(code *)*unaff_R15)(unaff_R15[1],&unknown_var_4985_ptr,0x10);
  (*(code *)*unaff_R15)(unaff_R15[1],&unknown_var_4816_ptr,0xa2);
  in_stack_00000040 = 1;
  (*(code *)*unaff_R15)(unaff_R15[1],&stack0x00000040,1);
  (*(code *)*unaff_R15)(unaff_R15[1],&unknown_var_1121_ptr,0x10);
  (*(code *)*unaff_R15)(unaff_R15[1],&unknown_var_1104_ptr,0xc);
  in_stack_00000040 = 0x11;
  (*(code *)*unaff_R15)(unaff_R15[1],&stack0x00000040,1);
  (*(code *)*unaff_R15)(unaff_R15[1],&unknown_var_1081_ptr,0x10);
  (*(code *)*unaff_R15)(unaff_R15[1],&unknown_var_912_ptr,0xa2);
  (*(code *)*unaff_R15)(unaff_R15[1],&unknown_var_4224_ptr);
  iVar16 = 0;
  in_stack_00000060 = 0;
  uStack0000000000000064 = 0;
  uStack0000000000000068 = 0;
  if (2 < unaff_R14D) {
    iVar16 = 2;
  }
  uStack000000000000004c = 0;
  iStack0000000000000054 = 0;
  bVar5 = 2 < unaff_R14D;
  in_stack_00000050 = 0;
  if (0 < in_stack_00000048) {
    lVar18 = *(int64_t *)(unaff_RBP + 0x620);
    iVar17 = in_stack_00000048;
    do {
      if (0 < unaff_EBX) {
        iStack000000000000006c = 8;
        do {
          unaff_R15 = in_stack_00000078;
          iVar6 = iStack000000000000006c;
          lVar20 = 0;
          iStack0000000000000074 = iStack0000000000000054 + 8;
          for (iVar23 = iStack0000000000000054; iVar23 < iStack0000000000000074; iVar23 = iVar23 + 1
              ) {
            iVar21 = iVar23;
            if (iVar17 <= iVar23) {
              iVar21 = iVar17 + -1;
            }
            if (render_system_data_memory != 0) {
              iVar21 = (iVar17 - iVar21) + -1;
            }
            iVar21 = iVar21 * unaff_EBX;
            iVar17 = iStack000000000000006c + -8;
            if (iVar17 < iStack000000000000006c) {
              if (3 < iStack000000000000006c - iVar17) {
                iStack0000000000000070 = iStack000000000000006c + -3;
                iVar22 = iStack000000000000006c + -6;
                do {
                  iStack0000000000000058 = unaff_EBX + -1;
                  iVar12 = iVar17;
                  if (unaff_EBX <= iVar17) {
                    iVar12 = iStack0000000000000058;
                  }
                  iVar11 = (iVar12 + iVar21) * iStack000000000000005c;
                  fVar26 = (float)*(byte *)(iVar11 + lVar18);
                  fVar24 = (float)*(byte *)((int)(iVar11 + (uint)bVar5) + lVar18);
                  iVar12 = iVar22 + -1;
                  if (unaff_EBX <= iVar22 + -1) {
                    iVar12 = iStack0000000000000058;
                  }
                  iVar12 = (iVar12 + iVar21) * iStack000000000000005c;
                  fVar25 = (float)*(byte *)((iVar11 + iVar16) + lVar18);
                  bVar1 = *(byte *)(iVar12 + lVar18);
                  *(float *)(unaff_RBP + 0x180 + lVar20 * 4) =
                       (fVar26 * 0.299 + fVar24 * 0.587 + fVar25 * 0.114) - 128.0;
                  *(float *)(unaff_RBP + 0x280 + lVar20 * 4) =
                       fVar25 * 0.5 - (fVar26 * 0.16874 + fVar24 * 0.33126);
                  *(float *)(unaff_RBP + 0x380 + lVar20 * 4) =
                       (fVar26 * 0.5 - fVar24 * 0.41869) - fVar25 * 0.08131;
                  fVar25 = (float)bVar1;
                  fVar24 = (float)*(byte *)((int)(iVar12 + (uint)bVar5) + lVar18);
                  fVar26 = (float)*(byte *)((iVar12 + iVar16) + lVar18);
                  *(float *)(unaff_RBP + 0x184 + lVar20 * 4) =
                       (fVar25 * 0.299 + fVar24 * 0.587 + fVar26 * 0.114) - 128.0;
                  *(float *)(unaff_RBP + 0x284 + lVar20 * 4) =
                       fVar26 * 0.5 - (fVar25 * 0.16874 + fVar24 * 0.33126);
                  *(float *)(unaff_RBP + 900 + lVar20 * 4) =
                       (fVar25 * 0.5 - fVar24 * 0.41869) - fVar26 * 0.08131;
                  iVar12 = iVar22;
                  if (unaff_EBX <= iVar22) {
                    iVar12 = iStack0000000000000058;
                  }
                  iVar11 = (iVar12 + iVar21) * iStack000000000000005c;
                  fVar26 = (float)*(byte *)(iVar11 + lVar18);
                  fVar24 = (float)*(byte *)((int)(iVar11 + (uint)bVar5) + lVar18);
                  iVar12 = iVar22 + 1;
                  if (unaff_EBX <= iVar22 + 1) {
                    iVar12 = unaff_EBX + -1;
                  }
                  iVar12 = (iVar12 + iVar21) * iStack000000000000005c;
                  fVar25 = (float)*(byte *)((iVar11 + iVar16) + lVar18);
                  bVar1 = *(byte *)(iVar12 + lVar18);
                  *(float *)(unaff_RBP + 0x188 + lVar20 * 4) =
                       (fVar26 * 0.299 + fVar24 * 0.587 + fVar25 * 0.114) - 128.0;
                  *(float *)(unaff_RBP + 0x288 + lVar20 * 4) =
                       fVar25 * 0.5 - (fVar26 * 0.16874 + fVar24 * 0.33126);
                  *(float *)(unaff_RBP + 0x388 + lVar20 * 4) =
                       (fVar26 * 0.5 - fVar24 * 0.41869) - fVar25 * 0.08131;
                  fVar25 = (float)bVar1;
                  fVar24 = (float)*(byte *)((int)(iVar12 + (uint)bVar5) + lVar18);
                  fVar26 = (float)*(byte *)((iVar12 + iVar16) + lVar18);
                  *(float *)(unaff_RBP + 0x18c + lVar20 * 4) =
                       (fVar25 * 0.299 + fVar24 * 0.587 + fVar26 * 0.114) - 128.0;
                  *(float *)(unaff_RBP + 0x28c + lVar20 * 4) =
                       fVar26 * 0.5 - (fVar25 * 0.16874 + fVar24 * 0.33126);
                  iVar17 = iVar17 + 4;
                  iVar22 = iVar22 + 4;
                  *(float *)(unaff_RBP + 0x38c + lVar20 * 4) =
                       (fVar25 * 0.5 - fVar24 * 0.41869) - fVar26 * 0.08131;
                  lVar20 = lVar20 + 4;
                  unaff_R14D = iStack000000000000005c;
                } while (iVar17 < iStack0000000000000070);
              }
              for (; iVar17 < iStack000000000000006c; iVar17 = iVar17 + 1) {
                iVar22 = iVar17;
                if (unaff_EBX <= iVar17) {
                  iVar22 = unaff_EBX + -1;
                }
                iVar22 = (iVar22 + iVar21) * unaff_R14D;
                fVar25 = (float)*(byte *)(iVar22 + lVar18);
                fVar24 = (float)*(byte *)((int)(iVar22 + (uint)bVar5) + lVar18);
                fVar26 = (float)*(byte *)((iVar22 + iVar16) + lVar18);
                *(float *)(unaff_RBP + 0x180 + lVar20 * 4) =
                     (fVar25 * 0.299 + fVar24 * 0.587 + fVar26 * 0.114) - 128.0;
                *(float *)(unaff_RBP + 0x280 + lVar20 * 4) =
                     fVar26 * 0.5 - (fVar25 * 0.16874 + fVar24 * 0.33126);
                *(float *)(unaff_RBP + 0x380 + lVar20 * 4) =
                     (fVar25 * 0.5 - fVar24 * 0.41869) - fVar26 * 0.08131;
                lVar20 = lVar20 + 1;
              }
            }
            iVar17 = in_stack_00000048;
          }
          in_stack_00000060 =
               FUN_18042f7d0(in_stack_00000078,&stack0x0000004c,&stack0x00000050,unaff_RBP + 0x180,
                             unaff_RBP + 0x80);
          uStack0000000000000064 =
               FUN_18042f7d0(unaff_R15,&stack0x0000004c,&stack0x00000050,unaff_RBP + 0x280,
                             unaff_RBP + -0x80);
          uStack0000000000000068 =
               FUN_18042f7d0(unaff_R15,&stack0x0000004c,&stack0x00000050,unaff_RBP + 0x380,
                             unaff_RBP + -0x80);
          iStack000000000000006c = iVar6 + 8;
          iVar17 = in_stack_00000048;
        } while (iVar6 < unaff_EBX);
      }
      iStack0000000000000054 = iStack0000000000000054 + 8;
    } while (iStack0000000000000054 < iVar17);
  }
  uVar7 = in_stack_00000050 + 7;
  uVar15 = 0x7f << (0x18U - (char)uVar7 & 0x1f) | uStack000000000000004c;
  if (7 < (int)uVar7) {
    uVar14 = (uint64_t)(uVar7 >> 3);
    do {
      cVar13 = (char)(uVar15 >> 0x10);
      in_stack_00000040 = cVar13;
      (*(code *)*unaff_R15)(unaff_R15[1],&stack0x00000040,1);
      if (cVar13 == -1) {
        in_stack_00000040 = 0;
        (*(code *)*unaff_R15)(unaff_R15[1],&stack0x00000040,1);
      }
      uVar15 = uVar15 << 8;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  in_stack_00000040 = 0xff;
  (*(code *)*unaff_R15)(unaff_R15[1],&stack0x00000040,1);
  in_stack_00000040 = 0xd9;
  (*(code *)*unaff_R15)(unaff_R15[1],&stack0x00000040,1);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x520) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180430a4b(int param_1,int param_2,int64_t param_3)
void FUN_180430a4b(int param_1,int param_2,int64_t param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int unaff_EBX;
  int64_t unaff_RBP;
  uint64_t uVar7;
  uint uVar8;
  int64_t unaff_RDI;
  int iVar9;
  int iVar10;
  int unaff_R12D;
  int unaff_R13D;
  int unaff_R14D;
  int iVar11;
  uint64_t *unaff_R15;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  char in_stack_00000040;
  int iStack0000000000000048;
  uint uStack000000000000004c;
  int iStack0000000000000050;
  int iStack0000000000000054;
  int iStack0000000000000058;
  int iStack000000000000005c;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  int32_t uStack0000000000000068;
  int iStack000000000000006c;
  int iStack0000000000000070;
  int iStack0000000000000074;
  uint64_t *in_stack_00000078;
  
  do {
    if (0 < unaff_EBX) {
      iStack000000000000006c = 8;
      do {
        unaff_R15 = in_stack_00000078;
        iVar2 = iStack000000000000006c;
        iStack0000000000000074 = param_1 + 8;
        for (; param_1 < iStack0000000000000074; param_1 = param_1 + 1) {
          iVar10 = param_1;
          if (param_2 <= param_1) {
            iVar10 = param_2 + -1;
          }
          if (render_system_data_memory != 0) {
            iVar10 = (param_2 - iVar10) + -1;
          }
          iVar10 = iVar10 * unaff_EBX;
          iVar9 = iStack000000000000006c + -8;
          if (iVar9 < iStack000000000000006c) {
            if (3 < iStack000000000000006c - iVar9) {
              iStack0000000000000070 = iStack000000000000006c + -3;
              iVar11 = iStack000000000000006c + -6;
              do {
                iStack0000000000000058 = unaff_EBX + -1;
                iVar5 = iVar9;
                if (unaff_EBX <= iVar9) {
                  iVar5 = iStack0000000000000058;
                }
                iVar4 = (iVar5 + iVar10) * iStack000000000000005c;
                fVar14 = (float)*(byte *)(iVar4 + unaff_RDI);
                fVar12 = (float)*(byte *)((iVar4 + unaff_R13D) + unaff_RDI);
                iVar5 = iVar11 + -1;
                if (unaff_EBX <= iVar11 + -1) {
                  iVar5 = iStack0000000000000058;
                }
                iVar5 = (iVar5 + iVar10) * iStack000000000000005c;
                fVar13 = (float)*(byte *)((iVar4 + unaff_R12D) + unaff_RDI);
                bVar1 = *(byte *)(iVar5 + unaff_RDI);
                *(float *)(unaff_RBP + 0x180 + param_3 * 4) =
                     (fVar14 * unaff_XMM7_Da + fVar12 * unaff_XMM8_Da + fVar13 * unaff_XMM9_Da) -
                     128.0;
                *(float *)(unaff_RBP + 0x280 + param_3 * 4) =
                     fVar13 * unaff_XMM6_Da - (fVar14 * 0.16874 + fVar12 * 0.33126);
                *(float *)(unaff_RBP + 0x380 + param_3 * 4) =
                     (fVar14 * unaff_XMM6_Da - fVar12 * 0.41869) - fVar13 * 0.08131;
                fVar13 = (float)bVar1;
                fVar12 = (float)*(byte *)((iVar5 + unaff_R13D) + unaff_RDI);
                fVar14 = (float)*(byte *)((iVar5 + unaff_R12D) + unaff_RDI);
                *(float *)(unaff_RBP + 0x184 + param_3 * 4) =
                     (fVar13 * unaff_XMM7_Da + fVar12 * unaff_XMM8_Da + fVar14 * unaff_XMM9_Da) -
                     128.0;
                *(float *)(unaff_RBP + 0x284 + param_3 * 4) =
                     fVar14 * unaff_XMM6_Da - (fVar13 * 0.16874 + fVar12 * 0.33126);
                *(float *)(unaff_RBP + 900 + param_3 * 4) =
                     (fVar13 * unaff_XMM6_Da - fVar12 * 0.41869) - fVar14 * 0.08131;
                iVar5 = iVar11;
                if (unaff_EBX <= iVar11) {
                  iVar5 = iStack0000000000000058;
                }
                iVar4 = (iVar5 + iVar10) * iStack000000000000005c;
                fVar14 = (float)*(byte *)(iVar4 + unaff_RDI);
                fVar12 = (float)*(byte *)((iVar4 + unaff_R13D) + unaff_RDI);
                iVar5 = iVar11 + 1;
                if (unaff_EBX <= iVar11 + 1) {
                  iVar5 = unaff_EBX + -1;
                }
                iVar5 = (iVar5 + iVar10) * iStack000000000000005c;
                fVar13 = (float)*(byte *)((iVar4 + unaff_R12D) + unaff_RDI);
                bVar1 = *(byte *)(iVar5 + unaff_RDI);
                *(float *)(unaff_RBP + 0x188 + param_3 * 4) =
                     (fVar14 * unaff_XMM7_Da + fVar12 * unaff_XMM8_Da + fVar13 * unaff_XMM9_Da) -
                     128.0;
                *(float *)(unaff_RBP + 0x288 + param_3 * 4) =
                     fVar13 * unaff_XMM6_Da - (fVar14 * 0.16874 + fVar12 * 0.33126);
                *(float *)(unaff_RBP + 0x388 + param_3 * 4) =
                     (fVar14 * unaff_XMM6_Da - fVar12 * 0.41869) - fVar13 * 0.08131;
                fVar13 = (float)bVar1;
                fVar12 = (float)*(byte *)((iVar5 + unaff_R13D) + unaff_RDI);
                fVar14 = (float)*(byte *)((iVar5 + unaff_R12D) + unaff_RDI);
                *(float *)(unaff_RBP + 0x18c + param_3 * 4) =
                     (fVar13 * unaff_XMM7_Da + fVar12 * unaff_XMM8_Da + fVar14 * unaff_XMM9_Da) -
                     128.0;
                *(float *)(unaff_RBP + 0x28c + param_3 * 4) =
                     fVar14 * unaff_XMM6_Da - (fVar13 * 0.16874 + fVar12 * 0.33126);
                iVar9 = iVar9 + 4;
                iVar11 = iVar11 + 4;
                *(float *)(unaff_RBP + 0x38c + param_3 * 4) =
                     (fVar13 * unaff_XMM6_Da - fVar12 * 0.41869) - fVar14 * 0.08131;
                param_3 = param_3 + 4;
                unaff_R14D = iStack000000000000005c;
              } while (iVar9 < iStack0000000000000070);
            }
            for (; iVar9 < iStack000000000000006c; iVar9 = iVar9 + 1) {
              iVar11 = iVar9;
              if (unaff_EBX <= iVar9) {
                iVar11 = unaff_EBX + -1;
              }
              iVar11 = (iVar11 + iVar10) * unaff_R14D;
              fVar13 = (float)*(byte *)(iVar11 + unaff_RDI);
              fVar12 = (float)*(byte *)((iVar11 + unaff_R13D) + unaff_RDI);
              fVar14 = (float)*(byte *)((iVar11 + unaff_R12D) + unaff_RDI);
              *(float *)(unaff_RBP + 0x180 + param_3 * 4) =
                   (fVar13 * unaff_XMM7_Da + fVar12 * unaff_XMM8_Da + fVar14 * unaff_XMM9_Da) -
                   128.0;
              *(float *)(unaff_RBP + 0x280 + param_3 * 4) =
                   fVar14 * unaff_XMM6_Da - (fVar13 * 0.16874 + fVar12 * 0.33126);
              *(float *)(unaff_RBP + 0x380 + param_3 * 4) =
                   (fVar13 * unaff_XMM6_Da - fVar12 * 0.41869) - fVar14 * 0.08131;
              param_3 = param_3 + 1;
            }
          }
          param_2 = iStack0000000000000048;
        }
        uStack0000000000000060 =
             FUN_18042f7d0(in_stack_00000078,(int64_t)&stack0x00000048 + 4,&stack0x00000050,
                           unaff_RBP + 0x180,unaff_RBP + 0x80);
        uStack0000000000000064 =
             FUN_18042f7d0(unaff_R15,(int64_t)&stack0x00000048 + 4,&stack0x00000050,
                           unaff_RBP + 0x280,unaff_RBP + -0x80);
        uStack0000000000000068 =
             FUN_18042f7d0(unaff_R15,(int64_t)&stack0x00000048 + 4,&stack0x00000050,
                           unaff_RBP + 0x380,unaff_RBP + -0x80);
        iStack000000000000006c = iVar2 + 8;
        param_3 = 0;
        param_1 = iStack0000000000000054;
        param_2 = iStack0000000000000048;
      } while (iVar2 < unaff_EBX);
    }
    param_1 = param_1 + 8;
    iStack0000000000000054 = param_1;
  } while (param_1 < param_2);
  uVar3 = iStack0000000000000050 + 7;
  uVar8 = 0x7f << (0x18U - (char)uVar3 & 0x1f) | uStack000000000000004c;
  if (7 < (int)uVar3) {
    uVar7 = (uint64_t)(uVar3 >> 3);
    do {
      cVar6 = (char)(uVar8 >> 0x10);
      in_stack_00000040 = cVar6;
      (*(code *)*unaff_R15)(unaff_R15[1],&stack0x00000040,1);
      if (cVar6 == -1) {
        in_stack_00000040 = 0;
        (*(code *)*unaff_R15)(unaff_R15[1],&stack0x00000040,1);
      }
      uVar8 = uVar8 << 8;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  in_stack_00000040 = 0xff;
  (*(code *)*unaff_R15)(unaff_R15[1],&stack0x00000040,1);
  in_stack_00000040 = 0xd9;
  (*(code *)*unaff_R15)(unaff_R15[1],&stack0x00000040,1);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x520) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18043107a(uint64_t param_1,uint64_t param_2,uint param_3)
void FUN_18043107a(uint64_t param_1,uint64_t param_2,uint param_3)

{
  int in_EAX;
  uint uVar1;
  char cVar2;
  int64_t unaff_RBP;
  char unaff_SIL;
  uint64_t uVar3;
  uint64_t *unaff_R15;
  char cStack0000000000000040;
  
  uVar1 = in_EAX + 7;
  param_3 = 0x7f << (unaff_SIL - (char)uVar1 & 0x1fU) | param_3;
  if (7 < (int)uVar1) {
    uVar3 = (uint64_t)(uVar1 >> 3);
    do {
      cVar2 = (char)(param_3 >> 0x10);
      cStack0000000000000040 = cVar2;
      (*(code *)*unaff_R15)(unaff_R15[1],&stack0x00000040,1);
      if (cVar2 == -1) {
        cStack0000000000000040 = 0;
        (*(code *)*unaff_R15)(unaff_R15[1],&stack0x00000040,1);
      }
      param_3 = param_3 << 8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  cStack0000000000000040 = 0xff;
  (*(code *)*unaff_R15)(unaff_R15[1],&stack0x00000040,1);
  cStack0000000000000040 = 0xd9;
  (*(code *)*unaff_R15)(unaff_R15[1],&stack0x00000040,1);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x520) ^ (uint64_t)&stack0x00000000);
}





