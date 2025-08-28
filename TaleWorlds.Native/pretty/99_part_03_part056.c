#include "TaleWorlds.Native.Split.h"

// $fun 的语义化别名
#define $alias_name $fun


// $fun 的语义化别名
#define $alias_name $fun


// 99_part_03_part056.c - 9 个函数

// 函数: void FUN_180232a0a(void)
void FUN_180232a0a(void)

{
  float fVar1;
  int iVar2;
  float fVar3;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int unaff_R12D;
  float *unaff_R14;
  float *unaff_R15;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  int8_t *puStack0000000000000028;
  int8_t *puStack0000000000000030;
  int64_t lStack0000000000000038;
  float fStack0000000000000048;
  float fStack000000000000004c;
  int32_t uStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  int32_t uStack000000000000007c;
  
  fVar1 = *unaff_R15;
  if (fVar1 <= unaff_XMM7_Da) {
    return;
  }
  fStack0000000000000048 = *unaff_R14;
  *(float *)(unaff_RBP + -0x80) = fStack0000000000000048;
  iVar2 = **(int **)(unaff_RBP + 0x80);
  lStack0000000000000038 = unaff_RBP + 0x60;
  puStack0000000000000030 = (int8_t *)&stack0x00000068;
  puStack0000000000000028 = (int8_t *)&stack0x00000060;
  *(int32_t *)(unaff_RBP + 0x60) = 0xffffffff;
  *(int *)(unaff_RBP + -0x78) = unaff_R12D;
  *(int32_t *)(unaff_RBP + -0x74) = 0x7f7fffff;
  uStack000000000000007c = 0x7f7fffff;
  uStack0000000000000054 = 0x7f7fffff;
  fStack0000000000000070 = fStack0000000000000048 - fVar1;
  fStack000000000000005c = unaff_XMM14_Da - unaff_XMM12_Da;
  fStack0000000000000058 = unaff_XMM11_Da + unaff_XMM15_Da;
  fStack0000000000000060 =
       (1.0 - fVar1 * (1.0 / (unaff_XMM6_Da * unaff_XMM8_Da))) * unaff_XMM11_Da + unaff_XMM15_Da;
  fStack0000000000000068 = fStack0000000000000058;
  if (iVar2 == unaff_R12D) {
    fStack000000000000004c = unaff_R14[1];
    *(float *)(unaff_RBP + -0x7c) = fStack000000000000004c + fVar1;
    fVar3 = fStack0000000000000048;
    fStack0000000000000048 = fStack0000000000000070;
    fStack0000000000000058 = fStack0000000000000060;
    fStack0000000000000060 = fStack0000000000000068;
    fStack0000000000000064 = fStack000000000000005c;
    fStack0000000000000070 = fVar3;
    fStack0000000000000074 = fStack000000000000004c;
                    // WARNING: Subroutine does not return
    FUN_1802354f0(fStack000000000000004c + fVar1,&stack0x00000048,&stack0x00000070,unaff_RBP + -0x80
                  ,&stack0x00000058);
  }
  fStack000000000000004c = *(float *)(unaff_RSI + 4);
  *(float *)(unaff_RBP + -0x7c) = fStack000000000000004c - fVar1;
  fStack000000000000006c = fStack000000000000005c;
  fStack0000000000000074 = fStack000000000000004c;
                    // WARNING: Subroutine does not return
  FUN_1802354f0(fStack000000000000004c - fVar1,&stack0x00000048,&stack0x00000070,unaff_RBP + -0x80,
                &stack0x00000058);
}






// 函数: void FUN_180232cd9(void)
void FUN_180232cd9(void)

{
  return;
}






// 函数: void FUN_180232d10(int64_t param_1,float *param_2,float *param_3,float *param_4,int *param_5,
void FUN_180232d10(int64_t param_1,float *param_2,float *param_3,float *param_4,int *param_5,
                  float param_6)

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
  float fStackX_8;
  float fStackX_c;
  uint64_t uStack_118;
  uint64_t uStack_110;
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
  fVar14 = -9999.0;
  fVar13 = -9999.0;
  fVar15 = 9999.0;
  fVar16 = 9999.0;
  if (3 < lVar6) {
    lVar2 = (lVar6 - 4U >> 2) + 1;
    lVar4 = lVar2 * 4;
    pfVar3 = (float *)(*(int64_t *)(lVar1 + 0x18) + 0x10);
    pfVar5 = (float *)(*(int64_t *)(lVar1 + 0x18) + 0x24);
    do {
      fVar10 = pfVar3[-4];
      fVar11 = pfVar3[-3];
      fVar7 = fVar10;
      if (fVar10 <= fVar14) {
        fVar7 = fVar14;
      }
      if (fVar15 <= fVar10) {
        fVar10 = fVar15;
      }
      fVar8 = fVar11;
      if (fVar11 <= fVar13) {
        fVar8 = fVar13;
      }
      if (fVar16 <= fVar11) {
        fVar11 = fVar16;
      }
      if (fVar7 <= *pfVar3) {
        fVar7 = *pfVar3;
      }
      if (*pfVar3 <= fVar10) {
        fVar10 = *pfVar3;
      }
      if (fVar8 <= pfVar5[-4]) {
        fVar8 = pfVar5[-4];
      }
      if (pfVar5[-4] <= fVar11) {
        fVar11 = pfVar5[-4];
      }
      if (fVar7 <= pfVar3[4]) {
        fVar7 = pfVar3[4];
      }
      if (pfVar3[4] <= fVar10) {
        fVar10 = pfVar3[4];
      }
      if (fVar8 <= *pfVar5) {
        fVar8 = *pfVar5;
      }
      if (*pfVar5 <= fVar11) {
        fVar11 = *pfVar5;
      }
      fVar14 = fVar7;
      if (fVar7 <= pfVar3[8]) {
        fVar14 = pfVar3[8];
      }
      fVar15 = fVar10;
      if (pfVar3[8] <= fVar10) {
        fVar15 = pfVar3[8];
      }
      fVar13 = fVar8;
      if (fVar8 <= pfVar5[4]) {
        fVar13 = pfVar5[4];
      }
      fVar16 = fVar11;
      if (pfVar5[4] <= fVar11) {
        fVar16 = pfVar5[4];
      }
      lVar2 = lVar2 + -1;
      pfVar3 = pfVar3 + 0x10;
      pfVar5 = pfVar5 + 0x10;
    } while (lVar2 != 0);
  }
  if (lVar4 < lVar6) {
    pfVar3 = (float *)(lVar4 * 0x10 + *(int64_t *)(lVar1 + 0x18));
    lVar6 = lVar6 - lVar4;
    fVar10 = fVar13;
    fVar11 = fVar14;
    fVar7 = fVar15;
    fVar8 = fVar16;
    do {
      fVar15 = *pfVar3;
      fVar16 = pfVar3[1];
      fVar14 = fVar15;
      if (fVar15 <= fVar11) {
        fVar14 = fVar11;
      }
      if (fVar7 <= fVar15) {
        fVar15 = fVar7;
      }
      pfVar3 = pfVar3 + 4;
      fVar13 = fVar16;
      if (fVar16 <= fVar10) {
        fVar13 = fVar10;
      }
      if (fVar8 <= fVar16) {
        fVar16 = fVar8;
      }
      lVar6 = lVar6 + -1;
      fVar10 = fVar13;
      fVar11 = fVar14;
      fVar7 = fVar15;
      fVar8 = fVar16;
    } while (lVar6 != 0);
  }
  fVar14 = fVar14 - fVar15;
  if ((fVar14 != 0.0) && (fVar13 - fVar16 != 0.0)) {
    fVar15 = *param_3;
    fVar10 = *param_2;
    lVar4 = *(int64_t *)(lVar1 + 0x68);
    param_6 = (fVar13 - fVar16) / param_6;
    *(int64_t *)(lVar1 + 0x70) = lVar4;
    uStack_118 = CONCAT44(uStack_118._4_4_,0x447a0000);
    fVar11 = (fVar15 - fVar10) / fVar14;
    *(int64_t *)(lVar1 + 0x78) = (int64_t)*(int *)(lVar1 + 0x60) * 0x5c + lVar4;
    lVar1 = *(int64_t *)(param_1 + 8);
    fVar15 = -1000.0;
    fVar16 = -1000.0;
    fVar13 = 1000.0;
    fVar10 = 1000.0;
    while (*(int64_t *)(lVar1 + 0x78) != lVar4) {
      fStack_fc = *(float *)(lVar4 + 0x48);
      fStack_100 = *(float *)(lVar4 + 0x44);
      fStackX_c = fStack_fc;
      if (fVar13 <= fStack_fc) {
        fStackX_c = fVar13;
      }
      fStackX_8 = fStack_100;
      if (fVar10 <= fStack_100) {
        fStackX_8 = fVar10;
      }
      lVar4 = lVar4 + 0x5c;
      if (fStack_100 <= fVar15) {
        fStack_100 = fVar15;
      }
      if (fStack_fc <= fVar16) {
        fStack_fc = fVar16;
      }
      uStack_118 = CONCAT44(fStackX_c,fStackX_8);
      uStack_110 = CONCAT44(fStack_fc,fStack_100);
      fVar15 = fStack_100;
      fVar16 = fStack_fc;
      fVar13 = fStackX_c;
      fVar10 = fStackX_8;
    }
    *(int32_t *)(lVar1 + 0x10) = 0;
    *(int32_t *)(lVar1 + 0x38) = 0;
    *(int32_t *)(lVar1 + 0x88) = 0;
    *(int32_t *)(lVar1 + 0x60) = 0;
    *(int16_t *)(lVar1 + 0xc0) = 0;
    if (*(int64_t *)(lVar1 + 0xb8) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)(lVar1 + 0xb8) = 0;
    FUN_180085530(*(uint64_t *)(lVar1 + 0xb0));
    *(uint64_t *)(lVar1 + 0xb0) = 0;
    fVar16 = fVar16 - fVar13;
    *(int32_t *)(lVar1 + 200) = 0;
    fVar15 = fVar15 - fVar10;
    *(int16_t *)(param_1 + 0x30) = 0x101;
    fVar7 = param_2[1];
    fVar13 = fVar13 + fVar16;
    uStack_118 = CONCAT44(fVar13,(int32_t)uStack_118);
    uStack_110 = CONCAT44(fVar16,fVar15);
    if (fVar7 < param_3[1]) {
      fVar12 = fVar11 * param_6;
      fVar8 = param_3[1];
      do {
        fStackX_8 = -NAN;
        fVar9 = fVar8 - fVar12;
        if (fVar7 <= fVar9) {
          uStack_d0 = 0;
          uStack_cc = 0x7f7fffff;
          fStack_f0 = fVar11 * fVar14;
          fStack_ec = fVar12;
          fStack_d8 = *param_2;
          fStack_d4 = fVar9;
          FUN_1802356b0(param_1,&fStack_d8,&fStack_f0,&uStack_118,&uStack_110,&fStackX_8);
          fVar7 = param_2[1];
        }
        else {
          fStack_f4 = fVar8 - fVar7;
          uStack_e0 = 0;
          uStack_dc = 0x7f7fffff;
          fStack_fc = (fStack_f4 / fVar12) * fVar16;
          fStack_100 = fVar15;
          fStack_f8 = fVar11 * fVar14;
          fStack_e8 = *param_2;
          fStack_e4 = fVar7;
          FUN_1802356b0(param_1,&fStack_e8,&fStack_f8,&uStack_118,&fStack_100,&fStackX_8);
          fVar7 = param_2[1];
          fVar9 = fVar7;
        }
        fVar8 = fVar9;
      } while (fVar7 < fVar9);
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
      fStack_f8 = fVar15 + fVar10;
      fStack_fc = fVar13 - fVar16;
      fStack_100 = (1.0 - fVar14 * (1.0 / (fVar11 * param_6))) * fVar15 + fVar10;
      fStack_f4 = fStack_fc;
      fStack_f0 = fStack_f8;
      fStack_ec = fVar13;
      fStack_e4 = fVar7;
      fStack_d4 = fVar7;
      if (*param_5 != 0) {
        fStack_e8 = *param_3;
        fStack_d8 = fStack_e8 - fVar14;
        uStack_110 = CONCAT44(fVar7 - fVar14,fStack_e8);
                    // WARNING: Subroutine does not return
        FUN_1802354f0(param_1,&uStack_110,&fStack_e8,&fStack_d8,&fStack_100,&fStack_f8,&fStack_f0,
                      &fStackX_8);
      }
      fStack_d8 = *param_2;
      fStack_e8 = fStack_d8 + fVar14;
      uStack_110 = CONCAT44(fVar7 - fVar14,fStack_d8);
      fStack_fc = fVar13;
                    // WARNING: Subroutine does not return
      FUN_1802354f0(param_1,&uStack_110,&fStack_e8,&fStack_d8,&fStack_100,&fStack_f8,&fStack_f0,
                    &fStackX_8);
    }
    *(int8_t *)(param_1 + 0x30) = 1;
    *(int8_t *)(param_1 + 0x32) = 1;
  }
  return;
}






// 函数: void FUN_180232ed2(int64_t param_1)
void FUN_180232ed2(int64_t param_1)

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
  int64_t in_R10;
  int iVar6;
  uint64_t unaff_R12;
  float *unaff_R14;
  float *unaff_R15;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_XMM7_Da;
  float fVar10;
  float fVar11;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM11_Da;
  float fVar12;
  float fVar13;
  float fVar14;
  int32_t unaff_XMM14_Da;
  int32_t unaff_XMM14_Dc;
  float fVar15;
  float fStack0000000000000040;
  float fStack0000000000000044;
  uint64_t in_stack_00000048;
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
  int32_t in_stack_000000a0;
  int32_t in_stack_000000a8;
  
  *(int64_t *)(in_R10 + 0x70) = in_RAX;
  _fStack0000000000000040 = CONCAT44(fStack0000000000000044,0x447a0000);
  fVar10 = unaff_XMM7_Da / unaff_XMM9_Da;
  *(int64_t *)(in_R10 + 0x78) = param_1 * 0x5c + in_RAX;
  lVar3 = *(int64_t *)(unaff_RDI + 8);
  lVar4 = *(int64_t *)(lVar3 + 0x78);
  fVar13 = unaff_XMM11_Da;
  fVar14 = 1000.0;
  fVar15 = 1000.0;
  while (lVar4 != in_RAX) {
    fStack000000000000005c = *(float *)(in_RAX + 0x48);
    fStack0000000000000058 = *(float *)(in_RAX + 0x44);
    fVar8 = fStack000000000000005c;
    if (fVar14 <= fStack000000000000005c) {
      fVar8 = fVar14;
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
    *(float *)(unaff_RBP + 100) = fVar8;
    *(float *)(unaff_RBP + 0x60) = fVar14;
    uVar5 = *(uint64_t *)(unaff_RBP + 0x60);
    fStack0000000000000044 = (float)((uint64_t)uVar5 >> 0x20);
    fStack0000000000000040 = (float)uVar5;
    in_stack_00000048 = CONCAT44(fStack000000000000005c,fStack0000000000000058);
    unaff_XMM11_Da = fStack0000000000000058;
    fVar13 = fStack000000000000005c;
    fVar14 = fStack0000000000000044;
    fVar15 = fStack0000000000000040;
    _fStack0000000000000040 = uVar5;
  }
  iVar6 = (int)unaff_R12;
  *(int *)(lVar3 + 0x10) = iVar6;
  *(int *)(lVar3 + 0x38) = iVar6;
  *(int *)(lVar3 + 0x88) = iVar6;
  *(int *)(lVar3 + 0x60) = iVar6;
  *(short *)(lVar3 + 0xc0) = (short)unaff_R12;
  if (*(int64_t *)(lVar3 + 0xb8) == 0) {
    *(uint64_t *)(lVar3 + 0xb8) = unaff_R12;
    FUN_180085530(*(uint64_t *)(lVar3 + 0xb0));
    *(uint64_t *)(lVar3 + 0xb0) = unaff_R12;
    fVar13 = fVar13 - fVar14;
    *(int *)(lVar3 + 200) = iVar6;
    fVar12 = unaff_XMM11_Da - fVar15;
    *(int16_t *)(unaff_RDI + 0x30) = 0x101;
    fVar8 = unaff_RSI[1];
    fVar14 = fVar14 + fVar13;
    _fStack0000000000000040 = CONCAT44(fVar14,fStack0000000000000040);
    in_stack_00000048 = CONCAT44(fVar13,fVar12);
    if (fVar8 < unaff_R14[1]) {
      fVar11 = fVar10 * unaff_XMM8_Da;
      fVar9 = unaff_R14[1];
      in_stack_000000a0 = unaff_XMM14_Da;
      in_stack_000000a8 = unaff_XMM14_Dc;
      do {
        fVar1 = *unaff_RSI;
        *(int32_t *)(unaff_RBP + 0x60) = 0xffffffff;
        fVar7 = fVar9 - fVar11;
        if (fVar8 <= fVar7) {
          *(float *)(unaff_RBP + -0x80) = fVar1;
          *(float *)(unaff_RBP + -0x7c) = fVar7;
          *(int *)(unaff_RBP + -0x78) = iVar6;
          *(int32_t *)(unaff_RBP + -0x74) = 0x7f7fffff;
          fStack0000000000000068 = fVar10 * unaff_XMM9_Da;
          fStack000000000000006c = fVar11;
          FUN_1802356b0(fVar7,unaff_RBP + -0x80,&stack0x00000068,&stack0x00000040,&stack0x00000048);
          fVar8 = unaff_RSI[1];
        }
        else {
          fStack0000000000000064 = fVar9 - fVar8;
          uStack000000000000007c = 0x7f7fffff;
          fStack000000000000005c = (fStack0000000000000064 / fVar11) * fVar13;
          fStack0000000000000058 = fVar12;
          fStack0000000000000060 = fVar10 * unaff_XMM9_Da;
          fStack0000000000000070 = fVar1;
          fStack0000000000000074 = fVar8;
          iStack0000000000000078 = iVar6;
          FUN_1802356b0(fVar7,&stack0x00000070,&stack0x00000060,&stack0x00000040,&stack0x00000058);
          fVar8 = unaff_RSI[1];
          fVar7 = fVar8;
        }
        fVar9 = fVar7;
      } while (fVar8 < fVar7);
    }
    fVar9 = *unaff_R15;
    if (fVar9 <= 0.0) {
      *(int8_t *)(unaff_RDI + 0x30) = 1;
      *(int8_t *)(unaff_RDI + 0x32) = 1;
      return;
    }
    *(int32_t *)(unaff_RBP + 0x60) = 0xffffffff;
    iVar2 = **(int **)(unaff_RBP + 0x80);
    *(int *)(unaff_RBP + -0x78) = iVar6;
    *(int32_t *)(unaff_RBP + -0x74) = 0x7f7fffff;
    uStack000000000000007c = 0x7f7fffff;
    uStack0000000000000054 = 0x7f7fffff;
    *(float *)(unaff_RBP + -0x7c) = fVar8;
    fStack0000000000000060 = fVar12 + fVar15;
    fStack000000000000005c = fVar14 - fVar13;
    fStack0000000000000058 = (1.0 - fVar9 * (1.0 / (fVar10 * unaff_XMM8_Da))) * fVar12 + fVar15;
    in_stack_00000050 = iVar6;
    fStack0000000000000064 = fStack000000000000005c;
    fStack0000000000000068 = fStack0000000000000060;
    fStack000000000000006c = fVar14;
    fStack0000000000000074 = fVar8;
    if (iVar2 != iVar6) {
      fStack0000000000000070 = *unaff_R14;
      in_stack_00000048 = CONCAT44(fVar8 - fVar9,fStack0000000000000070);
      *(float *)(unaff_RBP + -0x80) = fStack0000000000000070 - fVar9;
      iStack0000000000000078 = iVar6;
                    // WARNING: Subroutine does not return
      FUN_1802354f0(fStack0000000000000070 - fVar9,&stack0x00000048,&stack0x00000070,
                    unaff_RBP + -0x80,&stack0x00000058);
    }
    fVar13 = *unaff_RSI;
    fStack0000000000000070 = fVar13 + fVar9;
    *(float *)(unaff_RBP + -0x80) = fVar13;
    in_stack_00000048 = CONCAT44(fVar8 - fVar9,fVar13);
    fStack000000000000005c = fVar14;
    iStack0000000000000078 = iVar6;
                    // WARNING: Subroutine does not return
    FUN_1802354f0(fStack0000000000000070,&stack0x00000048,&stack0x00000070,unaff_RBP + -0x80,
                  &stack0x00000058);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}






// 函数: void FUN_18023303b(uint64_t param_1,uint64_t param_2,float param_3)
void FUN_18023303b(uint64_t param_1,uint64_t param_2,float param_3)

{
  float fVar1;
  int iVar2;
  int64_t unaff_RBP;
  float *unaff_RSI;
  int64_t unaff_RDI;
  int unaff_R12D;
  float *unaff_R14;
  float *unaff_R15;
  float fVar3;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float fVar4;
  float unaff_XMM8_Da;
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
  
  fVar4 = unaff_XMM7_Da * unaff_XMM8_Da;
  do {
    fVar1 = *unaff_RSI;
    puStack0000000000000028 = (uint64_t *)(unaff_RBP + 0x60);
    *(int32_t *)(unaff_RBP + 0x60) = 0xffffffff;
    fVar3 = unaff_XMM6_Da - fVar4;
    if (param_3 <= fVar3) {
      *(float *)(unaff_RBP + -0x80) = fVar1;
      *(float *)(unaff_RBP + -0x7c) = fVar3;
      *(int *)(unaff_RBP + -0x78) = unaff_R12D;
      *(int32_t *)(unaff_RBP + -0x74) = 0x7f7fffff;
      fStack0000000000000068 = unaff_XMM7_Da * unaff_XMM9_Da;
      fStack000000000000006c = fVar4;
      FUN_1802356b0(fVar3,unaff_RBP + -0x80,&stack0x00000068,&stack0x00000040,&stack0x00000048);
      param_3 = unaff_RSI[1];
    }
    else {
      fStack0000000000000064 = unaff_XMM6_Da - param_3;
      uStack000000000000007c = 0x7f7fffff;
      fStack000000000000005c = (fStack0000000000000064 / fVar4) * unaff_XMM12_Da;
      fStack0000000000000058 = unaff_XMM11_Da;
      fStack0000000000000060 = unaff_XMM7_Da * unaff_XMM9_Da;
      fStack0000000000000070 = fVar1;
      fStack0000000000000074 = param_3;
      iStack0000000000000078 = unaff_R12D;
      FUN_1802356b0(fVar3,&stack0x00000070,&stack0x00000060,&stack0x00000040,&stack0x00000058);
      param_3 = unaff_RSI[1];
      fVar3 = param_3;
    }
    unaff_XMM6_Da = fVar3;
  } while (param_3 < fVar3);
  fVar1 = *unaff_R15;
  if (0.0 < fVar1) {
    *(int32_t *)(unaff_RBP + 0x60) = 0xffffffff;
    iVar2 = **(int **)(unaff_RBP + 0x80);
    puStack0000000000000028 = (uint64_t *)&stack0x00000060;
    *(int *)(unaff_RBP + -0x78) = unaff_R12D;
    *(int32_t *)(unaff_RBP + -0x74) = 0x7f7fffff;
    uStack000000000000007c = 0x7f7fffff;
    uStack0000000000000054 = 0x7f7fffff;
    *(float *)(unaff_RBP + -0x7c) = param_3;
    fStack000000000000004c = param_3 - fVar1;
    fStack0000000000000060 = unaff_XMM11_Da + unaff_XMM15_Da;
    fStack000000000000005c = unaff_XMM13_Da - unaff_XMM12_Da;
    fStack0000000000000058 = (1.0 - fVar1 * (1.0 / fVar4)) * unaff_XMM11_Da + unaff_XMM15_Da;
    fStack0000000000000068 = fStack0000000000000060;
    fStack0000000000000064 = fStack000000000000005c;
    fStack0000000000000074 = param_3;
    if (iVar2 == unaff_R12D) {
      in_stack_00000048 = *unaff_RSI;
      fStack0000000000000070 = in_stack_00000048 + fVar1;
      *(float *)(unaff_RBP + -0x80) = in_stack_00000048;
                    // WARNING: Subroutine does not return
      FUN_1802354f0(fStack0000000000000070,&stack0x00000048,&stack0x00000070,unaff_RBP + -0x80,
                    &stack0x00000058);
    }
    in_stack_00000048 = *unaff_R14;
    *(float *)(unaff_RBP + -0x80) = in_stack_00000048 - fVar1;
    fStack0000000000000070 = in_stack_00000048;
                    // WARNING: Subroutine does not return
    FUN_1802354f0(in_stack_00000048 - fVar1,&stack0x00000048,&stack0x00000070,unaff_RBP + -0x80,
                  &stack0x00000058);
  }
  *(int8_t *)(unaff_RDI + 0x30) = 1;
  *(int8_t *)(unaff_RDI + 0x32) = 1;
  return;
}






// 函数: void FUN_180233139(uint64_t param_1,uint64_t param_2,float param_3)
void FUN_180233139(uint64_t param_1,uint64_t param_2,float param_3)

{
  float fVar1;
  int iVar2;
  int64_t unaff_RBP;
  float *unaff_RSI;
  int64_t unaff_RDI;
  int unaff_R12D;
  float *unaff_R14;
  float *unaff_R15;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM15_Da;
  int8_t *puStack0000000000000028;
  int8_t *puStack0000000000000030;
  int64_t lStack0000000000000038;
  float fStack0000000000000048;
  float fStack000000000000004c;
  int32_t uStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack0000000000000070;
  float fStack0000000000000074;
  int32_t uStack000000000000007c;
  
  fVar1 = *unaff_R15;
  if (fVar1 <= 0.0) {
    *(int8_t *)(unaff_RDI + 0x30) = 1;
    *(int8_t *)(unaff_RDI + 0x32) = 1;
    return;
  }
  *(int32_t *)(unaff_RBP + 0x60) = 0xffffffff;
  iVar2 = **(int **)(unaff_RBP + 0x80);
  lStack0000000000000038 = unaff_RBP + 0x60;
  puStack0000000000000030 = (int8_t *)&stack0x00000068;
  puStack0000000000000028 = (int8_t *)&stack0x00000060;
  *(int *)(unaff_RBP + -0x78) = unaff_R12D;
  *(int32_t *)(unaff_RBP + -0x74) = 0x7f7fffff;
  uStack000000000000007c = 0x7f7fffff;
  uStack0000000000000054 = 0x7f7fffff;
  *(float *)(unaff_RBP + -0x7c) = param_3;
  fStack000000000000004c = param_3 - fVar1;
  fStack0000000000000060 = unaff_XMM11_Da + unaff_XMM15_Da;
  fStack000000000000005c = unaff_XMM13_Da - unaff_XMM12_Da;
  fStack0000000000000058 =
       (1.0 - fVar1 * (1.0 / (unaff_XMM7_Da * unaff_XMM8_Da))) * unaff_XMM11_Da + unaff_XMM15_Da;
  fStack0000000000000064 = fStack000000000000005c;
  fStack0000000000000068 = fStack0000000000000060;
  fStack0000000000000074 = param_3;
  if (iVar2 == unaff_R12D) {
    fStack0000000000000048 = *unaff_RSI;
    fStack0000000000000070 = fStack0000000000000048 + fVar1;
    *(float *)(unaff_RBP + -0x80) = fStack0000000000000048;
                    // WARNING: Subroutine does not return
    FUN_1802354f0(fStack0000000000000070,&stack0x00000048,&stack0x00000070,unaff_RBP + -0x80,
                  &stack0x00000058);
  }
  fStack0000000000000048 = *unaff_R14;
  *(float *)(unaff_RBP + -0x80) = fStack0000000000000048 - fVar1;
  fStack0000000000000070 = fStack0000000000000048;
                    // WARNING: Subroutine does not return
  FUN_1802354f0(fStack0000000000000048 - fVar1,&stack0x00000048,&stack0x00000070,unaff_RBP + -0x80,
                &stack0x00000058);
}






// 函数: void FUN_1802333ba(void)
void FUN_1802333ba(void)

{
  return;
}






// 函数: void FUN_1802333f0(int64_t param_1,float *param_2,int *param_3,float *param_4,int32_t param_5)
void FUN_1802333f0(int64_t param_1,float *param_2,int *param_3,float *param_4,int32_t param_5)

{
  int64_t lVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fStackX_8;
  float fStackX_c;
  float fStack_68;
  float fStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  uint64_t uStack_58;
  uint64_t uStack_50;
  
  FUN_180230250();
  iVar4 = (*param_3 + 1) * (param_3[1] + 1);
  FUN_180234600(param_1,iVar4);
  lVar1 = *(int64_t *)(param_1 + 8);
  iVar6 = 8;
  if ((*(int *)(lVar1 + 100) < iVar4) && (iVar3 = *(int *)(lVar1 + 100), iVar3 < iVar4)) {
    if (iVar4 == 0) {
      if (iVar3 < 2) {
        *(int32_t *)(lVar1 + 100) = 8;
      }
      else {
        *(int *)(lVar1 + 100) = (iVar3 >> 1) + iVar3;
      }
    }
    else {
      *(int *)(lVar1 + 100) = iVar4;
    }
    FUN_180086010();
  }
  lVar1 = *(int64_t *)(param_1 + 8);
  iVar4 = *param_3 * param_3[1] * 2;
  if ((*(int *)(lVar1 + 0x8c) < iVar4) && (iVar3 = *(int *)(lVar1 + 0x8c), iVar3 < iVar4)) {
    if (iVar4 == 0) {
      if (1 < iVar3) {
        iVar6 = (iVar3 >> 1) + iVar3;
      }
      *(int *)(lVar1 + 0x8c) = iVar6;
    }
    else {
      *(int *)(lVar1 + 0x8c) = iVar4;
    }
    FUN_180085f20();
  }
  iVar4 = param_3[1];
  iVar6 = 0;
  if (0 < iVar4 + 1) {
    iVar3 = *param_3 + 1;
    do {
      iVar5 = 0;
      if (0 < iVar3) {
        uStack_60 = 0;
        uStack_5c = 0x7f7fffff;
        uStack_58 = 0;
        uStack_50 = 0x7f7fffff3f800000;
        do {
          fVar8 = (float)iVar5 * *param_4 + *param_2;
          fVar9 = (float)iVar6 * param_4[1] + param_2[1];
          fStack_68 = fVar8;
          fStack_64 = fVar9;
          uVar2 = SystemCore_DataSerializer(param_1,&fStack_68);
          param_5 = 0xffffffff;
          fStackX_8 = fVar8 / ((float)*param_3 * *param_4);
          fStackX_c = fVar9 / ((float)param_3[1] * param_4[1]);
          SystemCore_Decoder(param_1,uVar2,&fStackX_8,&param_5,&uStack_58);
          iVar5 = iVar5 + 1;
          iVar3 = *param_3 + 1;
        } while (iVar5 < iVar3);
        iVar4 = param_3[1];
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4 + 1);
  }
  iVar6 = 0;
  *(int32_t *)(*(int64_t *)(param_1 + 8) + 0x88) = 0;
  iVar4 = *param_3;
  if (0 < iVar4) {
    iVar3 = param_3[1];
    do {
      iVar5 = 0;
      if (0 < iVar3) {
        do {
          iVar7 = (*param_3 + 1) * iVar5 + iVar6;
          iVar5 = iVar5 + 1;
          iVar4 = iVar5 * (*param_3 + 1) + iVar6;
          iVar3 = iVar4 + 1;
          SystemCore_RenderFrame(param_1,iVar4,iVar7,iVar3);
          SystemCore_RenderFrame(param_1,iVar3,iVar7,iVar7 + 1);
          iVar3 = param_3[1];
        } while (iVar5 < iVar3);
        iVar4 = *param_3;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  *(int16_t *)(param_1 + 0x30) = 0x101;
  *(int8_t *)(param_1 + 0x32) = 1;
  return;
}






// 函数: void FUN_1802334c4(int param_1,int param_2)
void FUN_1802334c4(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int32_t uVar5;
  int iVar6;
  int iVar7;
  float *unaff_RBP;
  int iVar8;
  float *unaff_RSI;
  int unaff_EDI;
  int iVar9;
  int *unaff_R14;
  int64_t unaff_R15;
  uint64_t uVar10;
  uint64_t in_stack_00000040;
  uint64_t in_stack_00000048;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  int32_t in_stack_000000c0;
  
  param_2 = param_2 + 1;
  do {
    iVar6 = 0;
    if (0 < param_2) {
      in_stack_00000040 = 0;
      in_stack_00000048 = 0x7f7fffff3f800000;
      do {
        fVar1 = *unaff_RSI;
        fVar2 = unaff_RSI[1];
        fVar3 = *unaff_RBP;
        fVar4 = unaff_RBP[1];
        uVar5 = SystemCore_DataSerializer();
        in_stack_000000c0 = 0xffffffff;
        fStack00000000000000a0 = ((float)iVar6 * fVar1 + fVar3) / ((float)*unaff_R14 * *unaff_RSI);
        fStack00000000000000a4 =
             ((float)unaff_EDI * fVar2 + fVar4) / ((float)unaff_R14[1] * unaff_RSI[1]);
        SystemCore_Decoder((float)*unaff_R14 * *unaff_RSI,uVar5,&stack0x000000a0,&stack0x000000c0,
                      &stack0x00000040);
        iVar6 = iVar6 + 1;
        param_2 = *unaff_R14 + 1;
      } while (iVar6 < param_2);
      param_1 = unaff_R14[1];
    }
    unaff_EDI = unaff_EDI + 1;
  } while (unaff_EDI < param_1 + 1);
  iVar7 = 0;
  *(int32_t *)(*(int64_t *)(unaff_R15 + 8) + 0x88) = 0;
  iVar6 = *unaff_R14;
  if (0 < iVar6) {
    iVar9 = unaff_R14[1];
    do {
      iVar8 = 0;
      if (0 < iVar9) {
        do {
          iVar6 = *unaff_R14;
          iVar9 = (iVar6 + 1) * iVar8 + iVar7;
          iVar8 = iVar8 + 1;
          uVar10 = SystemCore_RenderFrame();
          SystemCore_RenderFrame(uVar10,iVar8 * (iVar6 + 1) + iVar7 + 1,iVar9,iVar9 + 1);
          iVar9 = unaff_R14[1];
        } while (iVar8 < iVar9);
        iVar6 = *unaff_R14;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar6);
  }
  *(int16_t *)(unaff_R15 + 0x30) = 0x101;
  *(int8_t *)(unaff_R15 + 0x32) = 1;
  return;
}






