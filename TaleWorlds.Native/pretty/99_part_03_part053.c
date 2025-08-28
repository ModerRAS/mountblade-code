#include "TaleWorlds.Native.Split.h"

// 99_part_03_part053.c - 5 个函数

// 函数: void FUN_180231180(int64_t param_1,float *param_2,float *param_3,float *param_4,int *param_5)
void FUN_180231180(int64_t param_1,float *param_2,float *param_3,float *param_4,int *param_5)

{
  int64_t lVar1;
  int64_t lVar2;
  float *pfVar3;
  int64_t lVar4;
  float *pfVar5;
  int64_t lVar6;
  float fVar7;
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
  float fStackX_8;
  float fStackX_c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  int32_t uStack_108;
  int32_t uStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  int32_t uStack_e0;
  int32_t uStack_dc;
  float fStack_d8;
  float fStack_d4;
  int32_t uStack_d0;
  int32_t uStack_cc;
  
  lVar1 = *(int64_t *)(param_1 + 8);
  lVar4 = 0;
  lVar6 = (int64_t)*(int *)(lVar1 + 0x10);
  fVar13 = 0.0;
  fVar11 = 0.0;
  fVar14 = 0.0;
  fVar15 = 0.0;
  if (3 < lVar6) {
    lVar2 = (lVar6 - 4U >> 2) + 1;
    lVar4 = lVar2 * 4;
    pfVar3 = (float *)(*(int64_t *)(lVar1 + 0x18) + 0x10);
    pfVar5 = (float *)(*(int64_t *)(lVar1 + 0x18) + 0x24);
    do {
      fVar17 = pfVar3[-4];
      fVar8 = pfVar3[-3];
      fVar9 = fVar17;
      if (fVar17 <= fVar13) {
        fVar9 = fVar13;
      }
      if (fVar14 <= fVar17) {
        fVar17 = fVar14;
      }
      fVar16 = fVar8;
      if (fVar8 <= fVar11) {
        fVar16 = fVar11;
      }
      if (fVar15 <= fVar8) {
        fVar8 = fVar15;
      }
      if (fVar9 <= *pfVar3) {
        fVar9 = *pfVar3;
      }
      if (*pfVar3 <= fVar17) {
        fVar17 = *pfVar3;
      }
      if (fVar16 <= pfVar5[-4]) {
        fVar16 = pfVar5[-4];
      }
      if (pfVar5[-4] <= fVar8) {
        fVar8 = pfVar5[-4];
      }
      if (fVar9 <= pfVar3[4]) {
        fVar9 = pfVar3[4];
      }
      if (pfVar3[4] <= fVar17) {
        fVar17 = pfVar3[4];
      }
      if (fVar16 <= *pfVar5) {
        fVar16 = *pfVar5;
      }
      if (*pfVar5 <= fVar8) {
        fVar8 = *pfVar5;
      }
      fVar13 = fVar9;
      if (fVar9 <= pfVar3[8]) {
        fVar13 = pfVar3[8];
      }
      fVar14 = fVar17;
      if (pfVar3[8] <= fVar17) {
        fVar14 = pfVar3[8];
      }
      fVar11 = fVar16;
      if (fVar16 <= pfVar5[4]) {
        fVar11 = pfVar5[4];
      }
      fVar15 = fVar8;
      if (pfVar5[4] <= fVar8) {
        fVar15 = pfVar5[4];
      }
      lVar2 = lVar2 + -1;
      pfVar3 = pfVar3 + 0x10;
      pfVar5 = pfVar5 + 0x10;
    } while (lVar2 != 0);
  }
  if (lVar4 < lVar6) {
    pfVar3 = (float *)(lVar4 * 0x10 + *(int64_t *)(lVar1 + 0x18));
    lVar6 = lVar6 - lVar4;
    fVar17 = fVar11;
    fVar8 = fVar13;
    fVar9 = fVar14;
    fVar16 = fVar15;
    do {
      fVar14 = *pfVar3;
      fVar15 = pfVar3[1];
      fVar13 = fVar14;
      if (fVar14 <= fVar8) {
        fVar13 = fVar8;
      }
      if (fVar9 <= fVar14) {
        fVar14 = fVar9;
      }
      pfVar3 = pfVar3 + 4;
      fVar11 = fVar15;
      if (fVar15 <= fVar17) {
        fVar11 = fVar17;
      }
      if (fVar16 <= fVar15) {
        fVar15 = fVar16;
      }
      lVar6 = lVar6 + -1;
      fVar17 = fVar11;
      fVar8 = fVar13;
      fVar9 = fVar14;
      fVar16 = fVar15;
    } while (lVar6 != 0);
  }
  fVar13 = fVar13 - fVar14;
  fVar11 = fVar11 - fVar15;
  if ((fVar13 != 0.0) && (fVar11 != 0.0)) {
    fVar14 = param_3[1];
    fVar15 = param_2[1];
    lVar4 = *(int64_t *)(lVar1 + 0x68);
    *(int64_t *)(lVar1 + 0x70) = lVar4;
    fVar9 = (fVar14 - fVar15) / fVar11;
    *(int64_t *)(lVar1 + 0x78) = (int64_t)*(int *)(lVar1 + 0x60) * 0x5c + lVar4;
    lVar1 = *(int64_t *)(param_1 + 8);
    fVar15 = -1000.0;
    fVar14 = -1000.0;
    fVar17 = 1000.0;
    fVar8 = 1000.0;
    while (fVar16 = fVar14, *(int64_t *)(lVar1 + 0x78) != lVar4) {
      fVar14 = *(float *)(lVar4 + 0x48);
      fStack_100 = *(float *)(lVar4 + 0x44);
      fStackX_c = fVar14;
      if (fVar17 <= fVar14) {
        fStackX_c = fVar17;
      }
      fStackX_8 = fStack_100;
      if (fVar8 <= fStack_100) {
        fStackX_8 = fVar8;
      }
      lVar4 = lVar4 + 0x5c;
      if (fStack_100 <= fVar15) {
        fStack_100 = fVar15;
      }
      fVar15 = fStack_100;
      fVar17 = fStackX_c;
      fVar8 = fStackX_8;
      fStack_fc = fVar14;
      if (fVar14 <= fVar16) {
        fVar14 = fVar16;
        fStack_fc = fVar16;
      }
    }
    fVar14 = *param_2;
    fVar16 = fVar16 - fVar17;
    *(int32_t *)(lVar1 + 0x10) = 0;
    fVar15 = fVar15 - fVar8;
    *(int32_t *)(lVar1 + 0x38) = 0;
    *(int32_t *)(lVar1 + 0x88) = 0;
    *(int32_t *)(lVar1 + 0x60) = 0;
    fVar17 = fVar17 + fVar16;
    _fStack_110 = CONCAT44(fVar16,fVar15);
    *(int16_t *)(lVar1 + 0xc0) = 0;
    _fStack_118 = CONCAT44(fVar17,fVar8);
    if (*(int64_t *)(lVar1 + 0xb8) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)(lVar1 + 0xb8) = 0;
    FUN_180085530(*(uint64_t *)(lVar1 + 0xb0));
    *(uint64_t *)(lVar1 + 0xb0) = 0;
    *(int32_t *)(lVar1 + 200) = 0;
    *(int16_t *)(param_1 + 0x30) = 0x101;
    fVar7 = *param_3;
    if (fVar14 < fVar7) {
      fVar10 = fVar9 * fVar13;
      do {
        fStackX_8 = -NAN;
        fVar12 = fVar10 + fVar14;
        if (fVar12 <= fVar7) {
          uStack_d0 = 0;
          uStack_cc = 0x7f7fffff;
          fStack_f0 = fVar10;
          fStack_ec = fVar9 * fVar11;
          fStack_d8 = fVar14;
          fStack_d4 = param_2[1];
          FUN_1802356b0(param_1,&fStack_d8,&fStack_f0,&fStack_118,&fStack_110,&fStackX_8);
          fVar7 = *param_3;
        }
        else {
          fStack_f8 = fVar7 - fVar14;
          uStack_e0 = 0;
          uStack_dc = 0x7f7fffff;
          fStack_100 = (fStack_f8 * fVar15) / fVar10;
          fStack_fc = fVar16;
          fStack_f4 = fVar9 * fVar11;
          fStack_e8 = fVar14;
          fStack_e4 = param_2[1];
          FUN_1802356b0(param_1,&fStack_e8,&fStack_f8,&fStack_118,&fStack_100,&fStackX_8);
          fVar7 = *param_3;
          fVar12 = fVar7;
        }
        fVar14 = fVar12;
      } while (fVar12 < fVar7);
    }
    fStack_d4 = *param_4;
    if (0.0 < fStack_d4) {
      fStack_d8 = *param_2;
      fStackX_8 = -NAN;
      uStack_d0 = 0;
      uStack_cc = 0x7f7fffff;
      uStack_e0 = 0;
      uStack_dc = 0x7f7fffff;
      uStack_108 = 0;
      uStack_104 = 0x7f7fffff;
      fStack_e8 = fStack_d8 - fStack_d4;
      fStack_ec = fVar17 - fVar16;
      fStack_100 = fVar15 + fVar8;
      fStack_f8 = (1.0 - fStack_d4 * (1.0 / (fVar9 * fVar13))) * fVar15 + fVar8;
      fStack_f0 = fStack_100;
      if (*param_5 != 0) {
        fStack_e4 = param_3[1];
        fStack_d4 = fStack_e4 - fStack_d4;
        _fStack_110 = CONCAT44(fStack_e4,fStack_d8);
        fStack_fc = fVar17;
        fStack_f4 = fVar17;
                    // WARNING: Subroutine does not return
        FUN_1802354f0(param_1,&fStack_110,&fStack_e8,&fStack_d8,&fStack_100,&fStack_f8,&fStack_f0,
                      &fStackX_8);
      }
      fStack_e4 = param_2[1];
      fStack_d4 = fStack_e4 + fStack_d4;
      _fStack_110 = CONCAT44(fStack_e4,fStack_e8);
      fStack_100 = fStack_f8;
      fStack_fc = fStack_ec;
      fStack_f8 = fStack_f0;
      fStack_f4 = fStack_ec;
      fStack_ec = fVar17;
      fStack_e8 = fStack_d8;
                    // WARNING: Subroutine does not return
      FUN_1802354f0(param_1,&fStack_110,&fStack_e8,&fStack_d8,&fStack_100,&fStack_f8,&fStack_f0,
                    &fStackX_8);
    }
    *(int8_t *)(param_1 + 0x30) = 1;
  }
  return;
}






// 函数: void FUN_180231338(int64_t param_1)
void FUN_180231338(int64_t param_1)

{
  float fVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t in_RAX;
  int64_t unaff_RBP;
  float *unaff_RSI;
  int64_t unaff_RDI;
  int64_t in_R11;
  int iVar6;
  uint64_t unaff_R12;
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
  uint64_t uStack0000000000000048;
  int in_stack_00000050;
  int32_t uStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  int iStack0000000000000078;
  int32_t uStack000000000000007c;
  
  *(int64_t *)(in_R11 + 0x70) = in_RAX;
  _fStack0000000000000040 = 0x447a0000;
  fVar9 = unaff_XMM7_Da / unaff_XMM8_Da;
  *(int64_t *)(in_R11 + 0x78) = param_1 * 0x5c + in_RAX;
  lVar3 = *(int64_t *)(unaff_RDI + 8);
  lVar4 = *(int64_t *)(lVar3 + 0x78);
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
    uVar5 = *(uint64_t *)(unaff_RBP + 0x60);
    fStack0000000000000044 = (float)((uint64_t)uVar5 >> 0x20);
    fStack0000000000000040 = (float)uVar5;
    unaff_XMM11_Da = fStack0000000000000058;
    fVar13 = fStack000000000000005c;
    fVar14 = fStack0000000000000044;
    fVar15 = fStack0000000000000040;
    _fStack0000000000000040 = uVar5;
  }
  fVar7 = *unaff_R14;
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
  if (*(int64_t *)(lVar3 + 0xb8) == 0) {
    *(uint64_t *)(lVar3 + 0xb8) = unaff_R12;
    FUN_180085530(*(uint64_t *)(lVar3 + 0xb0));
    *(uint64_t *)(lVar3 + 0xb0) = unaff_R12;
    *(int *)(lVar3 + 200) = iVar6;
    *(int16_t *)(unaff_RDI + 0x30) = 0x101;
    fVar8 = *unaff_RSI;
    if (fVar7 < fVar8) {
      fVar10 = fVar9 * unaff_XMM9_Da;
      do {
        fVar1 = unaff_R14[1];
        *(int32_t *)(unaff_RBP + 0x60) = 0xffffffff;
        fVar11 = fVar10 + fVar7;
        if (fVar11 <= fVar8) {
          *(float *)(unaff_RBP + -0x80) = fVar7;
          *(float *)(unaff_RBP + -0x7c) = fVar1;
          *(int *)(unaff_RBP + -0x78) = iVar6;
          *(int32_t *)(unaff_RBP + -0x74) = 0x7f7fffff;
          fStack0000000000000068 = fVar10;
          fStack000000000000006c = fVar9 * unaff_XMM8_Da;
          FUN_1802356b0(fVar1,unaff_RBP + -0x80,&stack0x00000068,&stack0x00000040,&stack0x00000048);
          fVar8 = *unaff_RSI;
        }
        else {
          fStack0000000000000060 = fVar8 - fVar7;
          uStack000000000000007c = 0x7f7fffff;
          fStack0000000000000058 = (fStack0000000000000060 * fVar12) / fVar10;
          fStack000000000000005c = fVar13;
          fStack0000000000000064 = fVar9 * unaff_XMM8_Da;
          fStack0000000000000070 = fVar7;
          fStack0000000000000074 = fVar1;
          iStack0000000000000078 = iVar6;
          FUN_1802356b0(fVar1,&stack0x00000070,&stack0x00000060,&stack0x00000040,&stack0x00000058);
          fVar8 = *unaff_RSI;
          fVar11 = fVar8;
        }
        fVar7 = fVar11;
      } while (fVar11 < fVar8);
      unaff_XMM14_Da = 0.0;
    }
    fVar7 = *unaff_R15;
    if (fVar7 <= unaff_XMM14_Da) {
      *(int8_t *)(unaff_RDI + 0x30) = 1;
      return;
    }
    fVar8 = *unaff_R14;
    *(float *)(unaff_RBP + -0x80) = fVar8;
    iVar2 = **(int **)(unaff_RBP + 0x80);
    *(int32_t *)(unaff_RBP + 0x60) = 0xffffffff;
    *(int *)(unaff_RBP + -0x78) = iVar6;
    *(int32_t *)(unaff_RBP + -0x74) = 0x7f7fffff;
    uStack000000000000007c = 0x7f7fffff;
    uStack0000000000000054 = 0x7f7fffff;
    fStack0000000000000070 = fVar8 - fVar7;
    fStack000000000000006c = fVar14 - fVar13;
    fStack0000000000000058 = fVar12 + fVar15;
    fStack0000000000000060 = (1.0 - fVar7 * (1.0 / (fVar9 * unaff_XMM9_Da))) * fVar12 + fVar15;
    in_stack_00000050 = iVar6;
    fStack0000000000000068 = fStack0000000000000058;
    if (iVar2 != iVar6) {
      fStack0000000000000074 = unaff_RSI[1];
      *(float *)(unaff_RBP + -0x7c) = fStack0000000000000074 - fVar7;
      uStack0000000000000048 = CONCAT44(fStack0000000000000074,fVar8);
      fStack000000000000005c = fVar14;
      fStack0000000000000064 = fVar14;
      iStack0000000000000078 = iVar6;
                    // WARNING: Subroutine does not return
      FUN_1802354f0(fStack0000000000000074 - fVar7,&stack0x00000048,&stack0x00000070,
                    unaff_RBP + -0x80,&stack0x00000058);
    }
    fStack0000000000000074 = unaff_R14[1];
    *(float *)(unaff_RBP + -0x7c) = fStack0000000000000074 + fVar7;
    uStack0000000000000048 = CONCAT44(fStack0000000000000074,fStack0000000000000070);
    fStack0000000000000058 = fStack0000000000000060;
    fStack000000000000005c = fStack000000000000006c;
    fStack0000000000000060 = fStack0000000000000068;
    fStack0000000000000064 = fStack000000000000006c;
    fStack000000000000006c = fVar14;
    fStack0000000000000070 = fVar8;
    iStack0000000000000078 = iVar6;
                    // WARNING: Subroutine does not return
    FUN_1802354f0(fStack0000000000000074 + fVar7,&stack0x00000048,&stack0x00000070,unaff_RBP + -0x80
                  ,&stack0x00000058);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}






// 函数: void FUN_180231499(uint64_t param_1,float param_2)
void FUN_180231499(uint64_t param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int64_t unaff_RBP;
  float *unaff_RSI;
  int64_t unaff_RDI;
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
  uint64_t *puStack0000000000000028;
  float in_stack_00000048;
  float fStack000000000000004c;
  int32_t in_stack_00000050;
  int32_t uStack0000000000000054;
  float in_stack_00000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  int iStack0000000000000078;
  int32_t uStack000000000000007c;
  
  fVar3 = unaff_XMM7_Da * unaff_XMM9_Da;
  do {
    fVar1 = unaff_R14[1];
    puStack0000000000000028 = (uint64_t *)(unaff_RBP + 0x60);
    *(int32_t *)(unaff_RBP + 0x60) = 0xffffffff;
    fVar4 = fVar3 + unaff_XMM6_Da;
    if (fVar4 <= param_2) {
      *(float *)(unaff_RBP + -0x80) = unaff_XMM6_Da;
      *(float *)(unaff_RBP + -0x7c) = fVar1;
      *(int *)(unaff_RBP + -0x78) = unaff_R12D;
      *(int32_t *)(unaff_RBP + -0x74) = 0x7f7fffff;
      fStack0000000000000068 = fVar3;
      fStack000000000000006c = unaff_XMM7_Da * unaff_XMM8_Da;
      FUN_1802356b0(fVar1,unaff_RBP + -0x80,&stack0x00000068,&stack0x00000040,&stack0x00000048);
      param_2 = *unaff_RSI;
    }
    else {
      fStack0000000000000060 = param_2 - unaff_XMM6_Da;
      uStack000000000000007c = 0x7f7fffff;
      in_stack_00000058 = (fStack0000000000000060 * unaff_XMM11_Da) / fVar3;
      fStack0000000000000064 = unaff_XMM7_Da * unaff_XMM8_Da;
      fStack0000000000000070 = unaff_XMM6_Da;
      fStack0000000000000074 = fVar1;
      iStack0000000000000078 = unaff_R12D;
      FUN_1802356b0(fVar1,&stack0x00000070,&stack0x00000060,&stack0x00000040,&stack0x00000058);
      param_2 = *unaff_RSI;
      fVar4 = param_2;
    }
    unaff_XMM6_Da = fVar4;
  } while (fVar4 < param_2);
  fVar1 = *unaff_R15;
  if (0.0 < fVar1) {
    in_stack_00000048 = *unaff_R14;
    *(float *)(unaff_RBP + -0x80) = in_stack_00000048;
    iVar2 = **(int **)(unaff_RBP + 0x80);
    puStack0000000000000028 = (uint64_t *)&stack0x00000060;
    *(int32_t *)(unaff_RBP + 0x60) = 0xffffffff;
    *(int *)(unaff_RBP + -0x78) = unaff_R12D;
    *(int32_t *)(unaff_RBP + -0x74) = 0x7f7fffff;
    uStack000000000000007c = 0x7f7fffff;
    uStack0000000000000054 = 0x7f7fffff;
    fStack0000000000000070 = in_stack_00000048 - fVar1;
    fStack000000000000005c = unaff_XMM13_Da - unaff_XMM12_Da;
    in_stack_00000058 = unaff_XMM11_Da + unaff_XMM15_Da;
    fStack0000000000000060 = (1.0 - fVar1 * (1.0 / fVar3)) * unaff_XMM11_Da + unaff_XMM15_Da;
    fStack0000000000000068 = in_stack_00000058;
    if (iVar2 == unaff_R12D) {
      fStack000000000000004c = unaff_R14[1];
      *(float *)(unaff_RBP + -0x7c) = fStack000000000000004c + fVar1;
      fVar3 = in_stack_00000048;
      in_stack_00000048 = fStack0000000000000070;
      in_stack_00000058 = fStack0000000000000060;
      fStack0000000000000060 = fStack0000000000000068;
      fStack0000000000000064 = fStack000000000000005c;
      fStack0000000000000070 = fVar3;
      fStack0000000000000074 = fStack000000000000004c;
                    // WARNING: Subroutine does not return
      FUN_1802354f0(fStack000000000000004c + fVar1,&stack0x00000048,&stack0x00000070,
                    unaff_RBP + -0x80,&stack0x00000058);
    }
    fStack000000000000004c = unaff_RSI[1];
    *(float *)(unaff_RBP + -0x7c) = fStack000000000000004c - fVar1;
    fStack000000000000006c = fStack000000000000005c;
    fStack0000000000000074 = fStack000000000000004c;
                    // WARNING: Subroutine does not return
    FUN_1802354f0(fStack000000000000004c - fVar1,&stack0x00000048,&stack0x00000070,unaff_RBP + -0x80
                  ,&stack0x00000058);
  }
  *(int8_t *)(unaff_RDI + 0x30) = 1;
  return;
}






// 函数: void FUN_180231871(void)
void FUN_180231871(void)

{
  return;
}






// 函数: void FUN_1802318b0(int64_t param_1,float *param_2,float *param_3,float *param_4,int *param_5)
void FUN_1802318b0(int64_t param_1,float *param_2,float *param_3,float *param_4,int *param_5)

{
  int64_t lVar1;
  int64_t lVar2;
  float *pfVar3;
  int64_t lVar4;
  float *pfVar5;
  int64_t lVar6;
  float fVar7;
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
  float fStackX_8;
  float fStackX_c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  int32_t uStack_108;
  int32_t uStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  int32_t uStack_e0;
  int32_t uStack_dc;
  float fStack_d8;
  float fStack_d4;
  int32_t uStack_d0;
  int32_t uStack_cc;
  
  lVar1 = *(int64_t *)(param_1 + 8);
  lVar4 = 0;
  lVar6 = (int64_t)*(int *)(lVar1 + 0x10);
  fVar13 = 0.0;
  fVar11 = 0.0;
  fVar14 = 0.0;
  fVar15 = 0.0;
  if (3 < lVar6) {
    lVar2 = (lVar6 - 4U >> 2) + 1;
    lVar4 = lVar2 * 4;
    pfVar3 = (float *)(*(int64_t *)(lVar1 + 0x18) + 0x10);
    pfVar5 = (float *)(*(int64_t *)(lVar1 + 0x18) + 0x24);
    do {
      fVar17 = pfVar3[-4];
      fVar8 = pfVar3[-3];
      fVar9 = fVar17;
      if (fVar17 <= fVar13) {
        fVar9 = fVar13;
      }
      if (fVar14 <= fVar17) {
        fVar17 = fVar14;
      }
      fVar16 = fVar8;
      if (fVar8 <= fVar11) {
        fVar16 = fVar11;
      }
      if (fVar15 <= fVar8) {
        fVar8 = fVar15;
      }
      if (fVar9 <= *pfVar3) {
        fVar9 = *pfVar3;
      }
      if (*pfVar3 <= fVar17) {
        fVar17 = *pfVar3;
      }
      if (fVar16 <= pfVar5[-4]) {
        fVar16 = pfVar5[-4];
      }
      if (pfVar5[-4] <= fVar8) {
        fVar8 = pfVar5[-4];
      }
      if (fVar9 <= pfVar3[4]) {
        fVar9 = pfVar3[4];
      }
      if (pfVar3[4] <= fVar17) {
        fVar17 = pfVar3[4];
      }
      if (fVar16 <= *pfVar5) {
        fVar16 = *pfVar5;
      }
      if (*pfVar5 <= fVar8) {
        fVar8 = *pfVar5;
      }
      fVar13 = fVar9;
      if (fVar9 <= pfVar3[8]) {
        fVar13 = pfVar3[8];
      }
      fVar14 = fVar17;
      if (pfVar3[8] <= fVar17) {
        fVar14 = pfVar3[8];
      }
      fVar11 = fVar16;
      if (fVar16 <= pfVar5[4]) {
        fVar11 = pfVar5[4];
      }
      fVar15 = fVar8;
      if (pfVar5[4] <= fVar8) {
        fVar15 = pfVar5[4];
      }
      lVar2 = lVar2 + -1;
      pfVar3 = pfVar3 + 0x10;
      pfVar5 = pfVar5 + 0x10;
    } while (lVar2 != 0);
  }
  if (lVar4 < lVar6) {
    pfVar3 = (float *)(lVar4 * 0x10 + *(int64_t *)(lVar1 + 0x18));
    lVar6 = lVar6 - lVar4;
    fVar17 = fVar11;
    fVar8 = fVar13;
    fVar9 = fVar14;
    fVar16 = fVar15;
    do {
      fVar14 = *pfVar3;
      fVar15 = pfVar3[1];
      fVar13 = fVar14;
      if (fVar14 <= fVar8) {
        fVar13 = fVar8;
      }
      if (fVar9 <= fVar14) {
        fVar14 = fVar9;
      }
      pfVar3 = pfVar3 + 4;
      fVar11 = fVar15;
      if (fVar15 <= fVar17) {
        fVar11 = fVar17;
      }
      if (fVar16 <= fVar15) {
        fVar15 = fVar16;
      }
      lVar6 = lVar6 + -1;
      fVar17 = fVar11;
      fVar8 = fVar13;
      fVar9 = fVar14;
      fVar16 = fVar15;
    } while (lVar6 != 0);
  }
  fVar13 = fVar13 - fVar14;
  fVar11 = fVar11 - fVar15;
  if ((fVar13 != 0.0) && (fVar11 != 0.0)) {
    fVar14 = *param_3;
    fVar15 = *param_2;
    lVar4 = *(int64_t *)(lVar1 + 0x68);
    *(int64_t *)(lVar1 + 0x70) = lVar4;
    fVar9 = (fVar14 - fVar15) / fVar13;
    *(int64_t *)(lVar1 + 0x78) = (int64_t)*(int *)(lVar1 + 0x60) * 0x5c + lVar4;
    lVar1 = *(int64_t *)(param_1 + 8);
    fVar15 = -1000.0;
    fVar14 = -1000.0;
    fVar17 = 1000.0;
    fVar8 = 1000.0;
    while (fVar16 = fVar14, *(int64_t *)(lVar1 + 0x78) != lVar4) {
      fVar14 = *(float *)(lVar4 + 0x48);
      fStack_100 = *(float *)(lVar4 + 0x44);
      fStackX_c = fVar14;
      if (fVar17 <= fVar14) {
        fStackX_c = fVar17;
      }
      fStackX_8 = fStack_100;
      if (fVar8 <= fStack_100) {
        fStackX_8 = fVar8;
      }
      lVar4 = lVar4 + 0x5c;
      if (fStack_100 <= fVar15) {
        fStack_100 = fVar15;
      }
      fVar15 = fStack_100;
      fVar17 = fStackX_c;
      fVar8 = fStackX_8;
      fStack_fc = fVar14;
      if (fVar14 <= fVar16) {
        fVar14 = fVar16;
        fStack_fc = fVar16;
      }
    }
    fVar14 = param_2[1];
    fVar16 = fVar16 - fVar17;
    *(int32_t *)(lVar1 + 0x10) = 0;
    fVar15 = fVar15 - fVar8;
    *(int32_t *)(lVar1 + 0x38) = 0;
    *(int32_t *)(lVar1 + 0x88) = 0;
    *(int32_t *)(lVar1 + 0x60) = 0;
    fVar17 = fVar17 + fVar16;
    _fStack_110 = CONCAT44(fVar16,fVar15);
    *(int16_t *)(lVar1 + 0xc0) = 0;
    _fStack_118 = CONCAT44(fVar17,fVar8);
    if (*(int64_t *)(lVar1 + 0xb8) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)(lVar1 + 0xb8) = 0;
    FUN_180085530(*(uint64_t *)(lVar1 + 0xb0));
    *(uint64_t *)(lVar1 + 0xb0) = 0;
    *(int32_t *)(lVar1 + 200) = 0;
    *(int16_t *)(param_1 + 0x30) = 0x101;
    fVar7 = param_3[1];
    if (fVar14 < fVar7) {
      fVar10 = fVar9 * fVar11;
      do {
        fStackX_8 = -NAN;
        fVar12 = fVar10 + fVar14;
        if (fVar12 <= fVar7) {
          uStack_d0 = 0;
          uStack_cc = 0x7f7fffff;
          fStack_f0 = fVar9 * fVar13;
          fStack_ec = fVar10;
          fStack_d8 = *param_2;
          fStack_d4 = fVar14;
          FUN_1802358c0(param_1,&fStack_d8,&fStack_f0,&fStack_118,&fStack_110,&fStackX_8);
          fVar7 = param_3[1];
        }
        else {
          fStack_f4 = fVar7 - fVar14;
          uStack_e0 = 0;
          uStack_dc = 0x7f7fffff;
          fStack_100 = (fStack_f4 * fVar15) / fVar10;
          fStack_fc = fVar16;
          fStack_f8 = fVar9 * fVar13;
          fStack_e8 = *param_2;
          fStack_e4 = fVar14;
          FUN_1802358c0(param_1,&fStack_e8,&fStack_f8,&fStack_118,&fStack_100,&fStackX_8);
          fVar7 = param_3[1];
          fVar12 = fVar7;
        }
        fVar14 = fVar12;
      } while (fVar12 < fVar7);
    }
    fVar14 = *param_4;
    if (0.0 < fVar14) {
      fStackX_8 = -NAN;
      uStack_d0 = 0;
      uStack_cc = 0x7f7fffff;
      uStack_e0 = 0;
      uStack_dc = 0x7f7fffff;
      uStack_108 = 0;
      uStack_104 = 0x7f7fffff;
      fStack_fc = fVar17 - fVar16;
      fStack_f8 = fVar15 + fVar8;
      fStack_100 = (1.0 - fVar14 * (1.0 / (fVar9 * fVar11))) * fVar15 + fVar8;
      fStack_f4 = fStack_fc;
      fStack_f0 = fStack_f8;
      fStack_ec = fVar17;
      if (*param_5 != 0) {
        fStack_e8 = *param_3;
        fStack_e4 = param_2[1];
        fStack_d8 = fStack_e8 - fVar14;
        _fStack_110 = CONCAT44(fStack_e4 - fVar14,fStack_e8);
        fStack_d4 = fStack_e4;
                    // WARNING: Subroutine does not return
        FUN_1802354f0(param_1,&fStack_110,&fStack_e8,&fStack_d8,&fStack_100,&fStack_f8,&fStack_f0,
                      &fStackX_8);
      }
      fStack_d8 = *param_2;
      fStack_e4 = param_2[1];
      fStack_e8 = fStack_d8 + fVar14;
      _fStack_110 = CONCAT44(fStack_e4 - fVar14,fStack_d8);
      fStack_fc = fVar17;
      fStack_d4 = fStack_e4;
                    // WARNING: Subroutine does not return
      FUN_1802354f0(param_1,&fStack_110,&fStack_e8,&fStack_d8,&fStack_100,&fStack_f8,&fStack_f0,
                    &fStackX_8);
    }
    *(int8_t *)(param_1 + 0x30) = 1;
  }
  return;
}






