#include "TaleWorlds.Native.Split.h"

// 99_part_11_part038.c - 14 个函数

// 函数: void FUN_1807a4650(int64_t param_1)
void FUN_1807a4650(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  lVar1 = param_1 + 0xda4;
  lVar3 = 4;
  do {
    lVar2 = 4;
    do {
      *(uint64_t *)(lVar1 + -0x804) = 0;
      *(uint64_t *)(lVar1 + -4) = 0;
      *(uint64_t *)(lVar1 + 0x7fc) = 0;
      *(uint64_t *)(lVar1 + 0xffc) = 0;
      *(uint64_t *)(lVar1 + -0x7f4) = 0;
      *(uint64_t *)(lVar1 + 0xc) = 0;
      *(uint64_t *)(lVar1 + 0x80c) = 0;
      *(uint64_t *)(lVar1 + 0x100c) = 0;
      *(uint64_t *)(lVar1 + -0x7e4) = 0;
      *(uint64_t *)(lVar1 + 0x1c) = 0;
      *(uint64_t *)(lVar1 + 0x81c) = 0;
      *(uint64_t *)(lVar1 + 0x101c) = 0;
      *(uint64_t *)(lVar1 + -0x7d4) = 0;
      *(uint64_t *)(lVar1 + 0x2c) = 0;
      *(uint64_t *)(lVar1 + 0x82c) = 0;
      *(uint64_t *)(lVar1 + 0x102c) = 0;
      *(uint64_t *)(lVar1 + -0x7c4) = 0;
      *(uint64_t *)(lVar1 + 0x3c) = 0;
      *(uint64_t *)(lVar1 + 0x83c) = 0;
      *(uint64_t *)(lVar1 + 0x103c) = 0;
      *(uint64_t *)(lVar1 + -0x7b4) = 0;
      *(uint64_t *)(lVar1 + 0x4c) = 0;
      *(uint64_t *)(lVar1 + 0x84c) = 0;
      *(uint64_t *)(lVar1 + 0x104c) = 0;
      *(uint64_t *)(lVar1 + -0x7a4) = 0;
      *(uint64_t *)(lVar1 + 0x5c) = 0;
      *(uint64_t *)(lVar1 + 0x85c) = 0;
      *(uint64_t *)(lVar1 + 0x105c) = 0;
      *(uint64_t *)(lVar1 + -0x794) = 0;
      *(uint64_t *)(lVar1 + 0x6c) = 0;
      *(uint64_t *)(lVar1 + 0x86c) = 0;
      *(uint64_t *)(lVar1 + 0x106c) = 0;
      lVar1 = lVar1 + 0x80;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar1 = 2;
  do {
    FUN_1807fee60(param_1 + 0x220,0);
    FUN_1807fee60(param_1 + 0x300);
    FUN_1807fee60(param_1 + 0x290);
    FUN_1807fee60(param_1 + 0x370);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}






// 函数: void FUN_1807a47d0(int64_t param_1,int32_t param_2)
void FUN_1807a47d0(int64_t param_1,int32_t param_2)

{
  int iVar1;
  int32_t uVar2;
  
  *(float *)(param_1 + 0x25e4) = (float)*(int *)(*(int64_t *)(param_1 + 0xa8) + 0x6d0);
  iVar1 = *(int *)(param_1 + 0x25ec);
  if (iVar1 == 0) {
    uVar2 = 0x3f000000;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return;
      }
      FUN_1807ff0d0(param_1 + 0x3e0,param_1 + 0x41c,*(int32_t *)(param_1 + 0x25e0),0x3f0a3d71,
                    param_1 + 0x414,param_1 + 0x418,param_1 + 0x41c,param_1 + 0x420,param_1 + 0x424)
      ;
      FUN_1807fefe0(param_1 + 0x4c0,param_1 + 0x4fc,*(int32_t *)(param_1 + 0x25e0),0x3f0a3d71,
                    param_1 + 0x4f4,param_1 + 0x4f8,param_1 + 0x4fc,param_1 + 0x500,param_1 + 0x504)
      ;
      FUN_1807ff0d0(param_1 + 0x450,param_1 + 0x48c,*(int32_t *)(param_1 + 0x25e0),0x3fab851f,
                    param_1 + 0x484,param_1 + 0x488,param_1 + 0x48c,param_1 + 0x490,param_1 + 0x494)
      ;
      FUN_1807fefe0(param_1 + 0x530,param_1 + 0x56c,*(int32_t *)(param_1 + 0x25e0),0x3fab851f,
                    param_1 + 0x564,param_1 + 0x568,param_1 + 0x56c,param_1 + 0x570,param_1 + 0x574)
      ;
      FUN_1807fee60(param_1 + 0x3e0,param_2);
      FUN_1807fee60(param_1 + 0x4c0,param_2);
      FUN_1807fee60(param_1 + 0x450,param_2);
      FUN_1807fee60(param_1 + 0x530,param_2);
      return;
    }
    uVar2 = 0x3f3504f3;
  }
  FUN_1807ff0d0(param_1 + 0x3e0,param_1 + 0x41c,*(int32_t *)(param_1 + 0x25e0),uVar2,
                param_1 + 0x414,param_1 + 0x418,param_1 + 0x41c,param_1 + 0x420,param_1 + 0x424);
  FUN_1807fefe0(param_1 + 0x4c0,param_1 + 0x4fc,*(int32_t *)(param_1 + 0x25e0),uVar2,
                param_1 + 0x4f4,param_1 + 0x4f8,param_1 + 0x4fc,param_1 + 0x500,param_1 + 0x504);
  FUN_1807fee60(param_1 + 0x3e0,param_2);
  FUN_1807fee60(param_1 + 0x4c0,param_2);
  return;
}






// 函数: void FUN_1807a4839(void)
void FUN_1807a4839(void)

{
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t in_R11;
  int64_t unaff_R14;
  int32_t unaff_R15D;
  
  *(uint64_t *)(in_R11 + 8) = unaff_RBP;
  *(uint64_t *)(in_R11 + 0x10) = unaff_RSI;
  *(int64_t *)(in_R11 + -0x38) = unaff_R14 + 0x424;
  *(int64_t *)(in_R11 + -0x40) = unaff_R14 + 0x420;
  *(int64_t *)(in_R11 + -0x48) = unaff_R14 + 0x41c;
  *(int64_t *)(in_R11 + -0x50) = unaff_R14 + 0x418;
  *(int64_t *)(in_R11 + -0x58) = unaff_R14 + 0x414;
  FUN_1807ff0d0(unaff_R14 + 0x3e0);
  FUN_1807fefe0(unaff_R14 + 0x4c0,*(int32_t *)(unaff_R14 + 0x25e4),
                *(int32_t *)(unaff_R14 + 0x25e0),unaff_R14 + 0x4f4,unaff_R14 + 0x4f4);
  FUN_1807ff0d0(unaff_R14 + 0x450,*(int32_t *)(unaff_R14 + 0x25e4),
                *(int32_t *)(unaff_R14 + 0x25e0),0x3fab851f,unaff_R14 + 0x484);
  FUN_1807fefe0(unaff_R14 + 0x530,*(int32_t *)(unaff_R14 + 0x25e4),
                *(int32_t *)(unaff_R14 + 0x25e0),0x3fab851f,unaff_R14 + 0x564);
  FUN_1807fee60(unaff_R14 + 0x3e0,unaff_R15D);
  FUN_1807fee60(unaff_R14 + 0x4c0,unaff_R15D);
  FUN_1807fee60(unaff_R14 + 0x450,unaff_R15D);
  FUN_1807fee60(unaff_R14 + 0x530,unaff_R15D);
  return;
}






// 函数: void FUN_1807a49b4(void)
void FUN_1807a49b4(void)

{
  int64_t unaff_R14;
  int32_t unaff_R15D;
  int64_t lStack0000000000000028;
  int64_t lStack0000000000000030;
  int64_t lStack0000000000000038;
  int64_t lStack0000000000000040;
  
  lStack0000000000000040 = unaff_R14 + 0x424;
  lStack0000000000000038 = unaff_R14 + 0x420;
  lStack0000000000000030 = unaff_R14 + 0x41c;
  lStack0000000000000028 = unaff_R14 + 0x418;
  FUN_1807ff0d0(unaff_R14 + 0x3e0,lStack0000000000000030,*(int32_t *)(unaff_R14 + 0x25e0),
                0x3f3504f3,unaff_R14 + 0x414);
  lStack0000000000000040 = unaff_R14 + 0x504;
  lStack0000000000000038 = unaff_R14 + 0x500;
  lStack0000000000000030 = unaff_R14 + 0x4fc;
  lStack0000000000000028 = unaff_R14 + 0x4f8;
  FUN_1807fefe0(unaff_R14 + 0x4c0,*(int32_t *)(unaff_R14 + 0x25e4),
                *(int32_t *)(unaff_R14 + 0x25e0),0x3f3504f3,unaff_R14 + 0x4f4);
  FUN_1807fee60(unaff_R14 + 0x3e0,unaff_R15D);
  FUN_1807fee60(unaff_R14 + 0x4c0,unaff_R15D);
  return;
}






// 函数: void FUN_1807a4a90(int64_t param_1,int32_t param_2)
void FUN_1807a4a90(int64_t param_1,int32_t param_2)

{
  int iVar1;
  int32_t uVar2;
  
  *(float *)(param_1 + 0x25e4) = (float)*(int *)(*(int64_t *)(param_1 + 0xa8) + 0x6d0);
  iVar1 = *(int *)(param_1 + 0x25ec);
  if (iVar1 == 0) {
    uVar2 = 0x3f000000;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return;
      }
      FUN_1807ff0d0(param_1 + 0x220,param_1 + 0x25c,*(int32_t *)(param_1 + 0x25dc),0x3f0a3d71,
                    param_1 + 0x254,param_1 + 600,param_1 + 0x25c,param_1 + 0x260,param_1 + 0x264);
      FUN_1807fefe0(param_1 + 0x300,param_1 + 0x33c,*(int32_t *)(param_1 + 0x25dc),0x3f0a3d71,
                    param_1 + 0x334,param_1 + 0x338,param_1 + 0x33c,param_1 + 0x340,param_1 + 0x344)
      ;
      FUN_1807ff0d0(param_1 + 0x290,param_1 + 0x2cc,*(int32_t *)(param_1 + 0x25dc),0x3fab851f,
                    param_1 + 0x2c4,param_1 + 0x2c8,param_1 + 0x2cc,param_1 + 0x2d0,param_1 + 0x2d4)
      ;
      FUN_1807fefe0(param_1 + 0x370,param_1 + 0x3ac,*(int32_t *)(param_1 + 0x25dc),0x3fab851f,
                    param_1 + 0x3a4,param_1 + 0x3a8,param_1 + 0x3ac,param_1 + 0x3b0,param_1 + 0x3b4)
      ;
      FUN_1807fee60(param_1 + 0x220,param_2);
      FUN_1807fee60(param_1 + 0x300,param_2);
      FUN_1807fee60(param_1 + 0x290,param_2);
      FUN_1807fee60(param_1 + 0x370,param_2);
      return;
    }
    uVar2 = 0x3f3504f3;
  }
  FUN_1807ff0d0(param_1 + 0x220,param_1 + 0x25c,*(int32_t *)(param_1 + 0x25dc),uVar2,
                param_1 + 0x254,param_1 + 600,param_1 + 0x25c,param_1 + 0x260,param_1 + 0x264);
  FUN_1807fefe0(param_1 + 0x300,param_1 + 0x33c,*(int32_t *)(param_1 + 0x25dc),uVar2,
                param_1 + 0x334,param_1 + 0x338,param_1 + 0x33c,param_1 + 0x340,param_1 + 0x344);
  FUN_1807fee60(param_1 + 0x220,param_2);
  FUN_1807fee60(param_1 + 0x300,param_2);
  return;
}






// 函数: void FUN_1807a4af9(void)
void FUN_1807a4af9(void)

{
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t in_R11;
  int64_t unaff_R14;
  int32_t unaff_R15D;
  
  *(uint64_t *)(in_R11 + 8) = unaff_RBP;
  *(uint64_t *)(in_R11 + 0x10) = unaff_RSI;
  *(int64_t *)(in_R11 + -0x38) = unaff_R14 + 0x264;
  *(int64_t *)(in_R11 + -0x40) = unaff_R14 + 0x260;
  *(int64_t *)(in_R11 + -0x48) = unaff_R14 + 0x25c;
  *(int64_t *)(in_R11 + -0x50) = unaff_R14 + 600;
  *(int64_t *)(in_R11 + -0x58) = unaff_R14 + 0x254;
  FUN_1807ff0d0(unaff_R14 + 0x220);
  FUN_1807fefe0(unaff_R14 + 0x300,*(int32_t *)(unaff_R14 + 0x25e4),
                *(int32_t *)(unaff_R14 + 0x25dc),unaff_R14 + 0x334,unaff_R14 + 0x334);
  FUN_1807ff0d0(unaff_R14 + 0x290,*(int32_t *)(unaff_R14 + 0x25e4),
                *(int32_t *)(unaff_R14 + 0x25dc),0x3fab851f,unaff_R14 + 0x2c4);
  FUN_1807fefe0(unaff_R14 + 0x370,*(int32_t *)(unaff_R14 + 0x25e4),
                *(int32_t *)(unaff_R14 + 0x25dc),0x3fab851f,unaff_R14 + 0x3a4);
  FUN_1807fee60(unaff_R14 + 0x220,unaff_R15D);
  FUN_1807fee60(unaff_R14 + 0x300,unaff_R15D);
  FUN_1807fee60(unaff_R14 + 0x290,unaff_R15D);
  FUN_1807fee60(unaff_R14 + 0x370,unaff_R15D);
  return;
}






// 函数: void FUN_1807a4c74(void)
void FUN_1807a4c74(void)

{
  int64_t unaff_R14;
  int32_t unaff_R15D;
  int64_t lStack0000000000000028;
  int64_t lStack0000000000000030;
  int64_t lStack0000000000000038;
  int64_t lStack0000000000000040;
  
  lStack0000000000000040 = unaff_R14 + 0x264;
  lStack0000000000000038 = unaff_R14 + 0x260;
  lStack0000000000000030 = unaff_R14 + 0x25c;
  lStack0000000000000028 = unaff_R14 + 600;
  FUN_1807ff0d0(unaff_R14 + 0x220,lStack0000000000000030,*(int32_t *)(unaff_R14 + 0x25dc),
                0x3f3504f3,unaff_R14 + 0x254);
  lStack0000000000000040 = unaff_R14 + 0x344;
  lStack0000000000000038 = unaff_R14 + 0x340;
  lStack0000000000000030 = unaff_R14 + 0x33c;
  lStack0000000000000028 = unaff_R14 + 0x338;
  FUN_1807fefe0(unaff_R14 + 0x300,*(int32_t *)(unaff_R14 + 0x25e4),
                *(int32_t *)(unaff_R14 + 0x25dc),0x3f3504f3,unaff_R14 + 0x334);
  FUN_1807fee60(unaff_R14 + 0x220,unaff_R15D);
  FUN_1807fee60(unaff_R14 + 0x300,unaff_R15D);
  return;
}



uint64_t FUN_1807a4d50(int64_t *param_1)

{
  int32_t *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int iVar5;
  int64_t lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar2 = *param_1;
  iVar5 = 0;
  lVar3 = *(int64_t *)(lVar2 + 0xe8);
  puVar1 = (int32_t *)(lVar2 + 0x3d8);
  *puVar1 = 0;
  if (0 < *(int *)(lVar3 + 0x60)) {
    lVar6 = 0;
    do {
      uVar4 = func_0x000180762a70(lVar2,iVar5,
                                  *(int32_t *)
                                   (*(int64_t *)(*(int64_t *)(lVar3 + 0x68) + lVar6) + 0x38));
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      lVar3 = *(int64_t *)(lVar2 + 0xe8);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar5 < *(int *)(lVar3 + 0x60));
  }
  if ((int32_t *)(lVar2 + 0x3d4) != (int32_t *)0x0) {
    *(int32_t *)(lVar2 + 0x3d4) = *(int32_t *)(*(int64_t *)(lVar2 + 0xa8) + 0x6d0);
  }
  if (puVar1 != (int32_t *)0x0) {
    *puVar1 = *(int32_t *)(*(int64_t *)(lVar2 + 0xa8) + 0x6d4);
  }
  *(int32_t *)(lVar2 + 0x218) = *(int32_t *)(lVar2 + 0x3dc);
  *(int32_t *)(lVar2 + 0x220) = *(int32_t *)(lVar2 + 0x3e4);
  *(int32_t *)(lVar2 + 0x224) = *(int32_t *)(lVar2 + 1000);
  *(int32_t *)(lVar2 + 0x228) = *(int32_t *)(lVar2 + 0x3ec);
  *(int32_t *)(lVar2 + 0x22c) = *(int32_t *)(lVar2 + 0x3f0);
  *(int32_t *)(lVar2 + 0x230) = *(int32_t *)(lVar2 + 0x3f4);
  *(int32_t *)(lVar2 + 0x238) = *(int32_t *)(lVar2 + 0x3f8);
  *(float *)(lVar2 + 0x21c) = *(float *)(lVar2 + 0x3e0);
  *(float *)(lVar2 + 0x284) = 1.0 - *(float *)(lVar2 + 0x3e0);
  *(int32_t *)(lVar2 + 0x280) = 0x3c000000;
  *(int32_t *)(lVar2 + 0x28c) = 0x3d800000;
  func_0x0001807a65d0(lVar2);
  FUN_1807a52a0(lVar2);
  fVar10 = (*(float *)(lVar2 + 0x224) + 1.0) * 0.5;
  fVar11 = (1.0 - *(float *)(lVar2 + 0x228)) * fVar10;
  fVar7 = 1.0 - *(float *)(lVar2 + 0x22c);
  fVar12 = (1.0 - fVar10) * *(float *)(lVar2 + 0x228) + fVar10;
  fVar9 = fVar10 - fVar11;
  if (fVar11 <= fVar10 - fVar11) {
    fVar9 = fVar11;
  }
  fVar9 = fVar9 * fVar7;
  fVar8 = fVar12 - fVar10;
  if (1.0 - fVar12 <= fVar12 - fVar10) {
    fVar8 = 1.0 - fVar12;
  }
  fVar8 = fVar8 * fVar7;
  *(float *)(lVar2 + 0x23c) = fVar11 - fVar9;
  *(float *)(lVar2 + 0x240) = fVar9 + fVar11;
  *(float *)(lVar2 + 0x244) = fVar12 - fVar8;
  *(float *)(lVar2 + 0x248) = fVar8 + fVar12;
  FUN_1807a66c0(lVar2);
  FUN_1807a51a0(lVar2);
  return 0;
}



uint64_t FUN_1807a4dcf(int64_t param_1,int32_t *param_2)

{
  int64_t unaff_RDI;
  int32_t *unaff_R14;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (param_2 != (int32_t *)0x0) {
    *param_2 = *(int32_t *)(param_1 + 0x6d0);
  }
  if (unaff_R14 != (int32_t *)0x0) {
    *unaff_R14 = *(int32_t *)(param_1 + 0x6d4);
  }
  *(int32_t *)(unaff_RDI + 0x218) = *(int32_t *)(unaff_RDI + 0x3dc);
  *(int32_t *)(unaff_RDI + 0x220) = *(int32_t *)(unaff_RDI + 0x3e4);
  *(int32_t *)(unaff_RDI + 0x224) = *(int32_t *)(unaff_RDI + 1000);
  *(int32_t *)(unaff_RDI + 0x228) = *(int32_t *)(unaff_RDI + 0x3ec);
  *(int32_t *)(unaff_RDI + 0x22c) = *(int32_t *)(unaff_RDI + 0x3f0);
  *(int32_t *)(unaff_RDI + 0x230) = *(int32_t *)(unaff_RDI + 0x3f4);
  *(int32_t *)(unaff_RDI + 0x238) = *(int32_t *)(unaff_RDI + 0x3f8);
  *(float *)(unaff_RDI + 0x21c) = *(float *)(unaff_RDI + 0x3e0);
  *(float *)(unaff_RDI + 0x284) = 1.0 - *(float *)(unaff_RDI + 0x3e0);
  *(int32_t *)(unaff_RDI + 0x280) = 0x3c000000;
  *(int32_t *)(unaff_RDI + 0x28c) = 0x3d800000;
  func_0x0001807a65d0();
  FUN_1807a52a0();
  fVar4 = (*(float *)(unaff_RDI + 0x224) + 1.0) * 0.5;
  fVar5 = (1.0 - *(float *)(unaff_RDI + 0x228)) * fVar4;
  fVar1 = 1.0 - *(float *)(unaff_RDI + 0x22c);
  fVar6 = (1.0 - fVar4) * *(float *)(unaff_RDI + 0x228) + fVar4;
  fVar3 = fVar4 - fVar5;
  if (fVar5 <= fVar4 - fVar5) {
    fVar3 = fVar5;
  }
  fVar3 = fVar3 * fVar1;
  fVar2 = fVar6 - fVar4;
  if (1.0 - fVar6 <= fVar6 - fVar4) {
    fVar2 = 1.0 - fVar6;
  }
  fVar2 = fVar2 * fVar1;
  *(float *)(unaff_RDI + 0x23c) = fVar5 - fVar3;
  *(float *)(unaff_RDI + 0x240) = fVar3 + fVar5;
  *(float *)(unaff_RDI + 0x244) = fVar6 - fVar2;
  *(float *)(unaff_RDI + 0x248) = fVar2 + fVar6;
  FUN_1807a66c0();
  FUN_1807a51a0();
  return 0;
}






// 函数: void FUN_1807a4f3e(void)
void FUN_1807a4f3e(void)

{
  return;
}



uint64_t FUN_1807a5040(int64_t *param_1,int32_t param_2,int32_t *param_3,int64_t param_4)

{
  int64_t lVar1;
  float fVar2;
  
  lVar1 = *param_1;
  switch(param_2) {
  case 0:
    *param_3 = *(int32_t *)(lVar1 + 0x3dc);
    if (param_4 != 0) {
      fVar2 = *(float *)(lVar1 + 0x3dc);
code_r0x0001807a5150:
                    // WARNING: Subroutine does not return
      SystemDataValidator(param_4,0x20,&unknown_var_2048_ptr,(double)fVar2);
    }
    break;
  case 1:
    *param_3 = *(int32_t *)(lVar1 + 0x3e0);
    if (param_4 != 0) {
      fVar2 = *(float *)(lVar1 + 0x3e0);
      goto code_r0x0001807a5150;
    }
    break;
  case 2:
    *param_3 = *(int32_t *)(lVar1 + 0x3e4);
    if (param_4 != 0) {
      fVar2 = *(float *)(lVar1 + 0x3e4);
      goto code_r0x0001807a5150;
    }
    break;
  case 3:
    *param_3 = *(int32_t *)(lVar1 + 1000);
    if (param_4 != 0) {
      fVar2 = *(float *)(lVar1 + 1000);
      goto code_r0x0001807a5150;
    }
    break;
  case 4:
    *param_3 = *(int32_t *)(lVar1 + 0x3ec);
    if (param_4 != 0) {
      fVar2 = *(float *)(lVar1 + 0x3ec);
      goto code_r0x0001807a5150;
    }
    break;
  case 5:
    *param_3 = *(int32_t *)(lVar1 + 0x3f0);
    if (param_4 != 0) {
      fVar2 = *(float *)(lVar1 + 0x3f0);
      goto code_r0x0001807a5150;
    }
    break;
  case 6:
    *param_3 = *(int32_t *)(lVar1 + 0x3f4);
    if (param_4 != 0) {
      fVar2 = *(float *)(lVar1 + 0x3f4);
      goto code_r0x0001807a5150;
    }
    break;
  case 7:
    *param_3 = *(int32_t *)(lVar1 + 0x3f8);
    if (param_4 != 0) {
      fVar2 = *(float *)(lVar1 + 0x3f8);
      goto code_r0x0001807a5150;
    }
  }
  return 0;
}






// 函数: void FUN_1807a51a0(int64_t param_1)
void FUN_1807a51a0(int64_t param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  float fVar8;
  
  uVar6 = 0;
  iVar1 = *(int *)(param_1 + 0x3d8);
  if (iVar1 == 2) {
    iVar3 = 0;
  }
  else if (iVar1 == 4) {
    iVar3 = 1;
  }
  else if (iVar1 == 5) {
    iVar3 = 2;
  }
  else if (iVar1 == 6) {
    iVar3 = 3;
  }
  else {
    iVar3 = -1;
    if (iVar1 == 8) {
      iVar3 = 4;
    }
  }
  if (0 < iVar1) {
    piVar4 = (int *)(param_1 + 0x290);
    uVar7 = uVar6;
    do {
      if ((int64_t)iVar3 < 0) {
        fVar8 = (5.0 / (float)iVar1) * *(float *)(param_1 + 0x238);
      }
      else {
        fVar8 = *(float *)(&unknown_var_6484_ptr + (uVar7 + (int64_t)iVar3 * 9) * 4) *
                *(float *)(param_1 + 0x238);
      }
      iVar2 = (int)((*(float *)(param_1 + 0x230) - fVar8) * *(float *)(param_1 + 0x25c));
      *piVar4 = iVar2;
      iVar1 = *(int *)(param_1 + 0x260);
      if (iVar2 < iVar1) {
        if (iVar2 < 0) goto LAB_1807a5276;
      }
      else {
        iVar1 = -iVar1;
LAB_1807a5276:
        *piVar4 = iVar2 + iVar1;
      }
      iVar1 = *(int *)(param_1 + 0x3d8);
      uVar5 = (int)uVar6 + 1;
      uVar6 = (uint64_t)uVar5;
      uVar7 = uVar7 + 1;
      piVar4 = piVar4 + 1;
    } while ((int)uVar5 < iVar1);
  }
  return;
}






// 函数: void FUN_1807a5201(int param_1,int64_t param_2,int *param_3,uint64_t param_4)
void FUN_1807a5201(int param_1,int64_t param_2,int *param_3,uint64_t param_4)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  uint64_t uVar4;
  float fVar5;
  float in_XMM3_Da;
  
  uVar4 = param_4;
  do {
    if ((int64_t)param_1 < 0) {
      fVar5 = (in_XMM3_Da / (float)in_EAX) * *(float *)(param_2 + 0x238);
    }
    else {
      fVar5 = *(float *)(&unknown_var_6484_ptr + (uVar4 + (int64_t)param_1 * 9) * 4) *
              *(float *)(param_2 + 0x238);
    }
    iVar2 = (int)((*(float *)(param_2 + 0x230) - fVar5) * *(float *)(param_2 + 0x25c));
    *param_3 = iVar2;
    iVar1 = *(int *)(param_2 + 0x260);
    if (iVar2 < iVar1) {
      if (iVar2 < 0) goto LAB_1807a5276;
    }
    else {
      iVar1 = -iVar1;
LAB_1807a5276:
      *param_3 = iVar2 + iVar1;
    }
    in_EAX = *(int *)(param_2 + 0x3d8);
    uVar3 = (int)param_4 + 1;
    param_4 = (uint64_t)uVar3;
    uVar4 = uVar4 + 1;
    param_3 = param_3 + 1;
    if (in_EAX <= (int)uVar3) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1807a5292(void)
void FUN_1807a5292(void)

{
  return;
}






// 函数: void FUN_1807a52a0(int64_t param_1)
void FUN_1807a52a0(int64_t param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)(param_1 + 0x28c);
  *(float *)(param_1 + 0x390) = *(float *)(param_1 + 0x220) * 4.9960036e-16;
  fVar4 = fVar1 * 3.1415927;
  fVar2 = (float)sinf(fVar4 - 1.5707964);
  fVar3 = (fVar4 - 1.5707964) + fVar4;
  fVar2 = (fVar2 + 1.0) * 0.5 * *(float *)(param_1 + 0x220);
  *(float *)(param_1 + 0x394) = fVar2;
  *(float *)(param_1 + 0x394) = (1.0 - *(float *)(param_1 + 0x220)) * fVar1 + fVar2;
  fVar2 = (float)sinf(fVar3);
  fVar3 = fVar3 + fVar4;
  fVar2 = (fVar2 + 1.0) * 0.5 * *(float *)(param_1 + 0x220);
  *(float *)(param_1 + 0x398) = fVar2;
  fVar5 = fVar1 + fVar1 + fVar1;
  *(float *)(param_1 + 0x398) = (1.0 - *(float *)(param_1 + 0x220)) * (fVar1 + fVar1) + fVar2;
  fVar2 = (float)sinf(fVar3);
  fVar3 = fVar3 + fVar4;
  fVar2 = (fVar2 + 1.0) * 0.5 * *(float *)(param_1 + 0x220);
  *(float *)(param_1 + 0x39c) = fVar2;
  fVar6 = fVar5 + fVar1;
  *(float *)(param_1 + 0x39c) = (1.0 - *(float *)(param_1 + 0x220)) * fVar5 + fVar2;
  fVar2 = (float)sinf(fVar3);
  fVar3 = fVar3 + fVar4;
  fVar2 = (fVar2 + 1.0) * 0.5 * *(float *)(param_1 + 0x220);
  *(float *)(param_1 + 0x3a0) = fVar2;
  fVar5 = fVar6 + fVar1;
  *(float *)(param_1 + 0x3a0) = (1.0 - *(float *)(param_1 + 0x220)) * fVar6 + fVar2;
  fVar2 = (float)sinf(fVar3);
  fVar2 = (fVar2 + 1.0) * 0.5 * *(float *)(param_1 + 0x220);
  *(float *)(param_1 + 0x3a4) = fVar2;
  fVar3 = fVar3 + fVar4;
  fVar6 = fVar5 + fVar1;
  *(float *)(param_1 + 0x3a4) = (1.0 - *(float *)(param_1 + 0x220)) * fVar5 + fVar2;
  fVar2 = (float)sinf(fVar3);
  fVar3 = fVar3 + fVar4;
  fVar2 = (fVar2 + 1.0) * 0.5 * *(float *)(param_1 + 0x220);
  *(float *)(param_1 + 0x3a8) = fVar2;
  fVar5 = fVar6 + fVar1;
  *(float *)(param_1 + 0x3a8) = (1.0 - *(float *)(param_1 + 0x220)) * fVar6 + fVar2;
  fVar2 = (float)sinf(fVar3);
  fVar3 = fVar3 + fVar4;
  fVar2 = (fVar2 + 1.0) * 0.5 * *(float *)(param_1 + 0x220);
  *(float *)(param_1 + 0x3ac) = fVar2;
  fVar6 = fVar5 + fVar1;
  *(float *)(param_1 + 0x3ac) = (1.0 - *(float *)(param_1 + 0x220)) * fVar5 + fVar2;
  fVar2 = (float)sinf(fVar3);
  fVar3 = fVar3 + fVar4;
  fVar2 = (fVar2 + 1.0) * 0.5 * *(float *)(param_1 + 0x220);
  *(float *)(param_1 + 0x3b0) = fVar2;
  fVar5 = fVar6 + fVar1;
  *(float *)(param_1 + 0x3b0) = (1.0 - *(float *)(param_1 + 0x220)) * fVar6 + fVar2;
  fVar2 = (float)sinf(fVar3);
  fVar3 = fVar3 + fVar4;
  fVar2 = (fVar2 + 1.0) * 0.5 * *(float *)(param_1 + 0x220);
  *(float *)(param_1 + 0x3b4) = fVar2;
  fVar6 = fVar5 + fVar1;
  *(float *)(param_1 + 0x3b4) = (1.0 - *(float *)(param_1 + 0x220)) * fVar5 + fVar2;
  fVar2 = (float)sinf(fVar3);
  fVar3 = fVar3 + fVar4;
  fVar2 = (fVar2 + 1.0) * 0.5 * *(float *)(param_1 + 0x220);
  *(float *)(param_1 + 0x3b8) = fVar2;
  fVar5 = fVar6 + fVar1;
  *(float *)(param_1 + 0x3b8) = (1.0 - *(float *)(param_1 + 0x220)) * fVar6 + fVar2;
  fVar2 = (float)sinf(fVar3);
  fVar3 = fVar3 + fVar4;
  fVar2 = (fVar2 + 1.0) * 0.5 * *(float *)(param_1 + 0x220);
  *(float *)(param_1 + 0x3bc) = fVar2;
  fVar6 = fVar5 + fVar1;
  *(float *)(param_1 + 0x3bc) = (1.0 - *(float *)(param_1 + 0x220)) * fVar5 + fVar2;
  fVar2 = (float)sinf(fVar3);
  fVar3 = fVar3 + fVar4;
  fVar2 = (fVar2 + 1.0) * 0.5 * *(float *)(param_1 + 0x220);
  *(float *)(param_1 + 0x3c0) = fVar2;
  fVar5 = fVar6 + fVar1;
  *(float *)(param_1 + 0x3c0) = (1.0 - *(float *)(param_1 + 0x220)) * fVar6 + fVar2;
  fVar2 = (float)sinf(fVar3);
  fVar3 = fVar3 + fVar4;
  fVar2 = (fVar2 + 1.0) * 0.5 * *(float *)(param_1 + 0x220);
  *(float *)(param_1 + 0x3c4) = fVar2;
  fVar6 = fVar5 + fVar1;
  *(float *)(param_1 + 0x3c4) = (1.0 - *(float *)(param_1 + 0x220)) * fVar5 + fVar2;
  fVar2 = (float)sinf(fVar3);
  fVar3 = fVar3 + fVar4;
  fVar2 = (fVar2 + 1.0) * 0.5 * *(float *)(param_1 + 0x220);
  *(float *)(param_1 + 0x3c8) = fVar2;
  fVar5 = fVar6 + fVar1;
  *(float *)(param_1 + 0x3c8) = (1.0 - *(float *)(param_1 + 0x220)) * fVar6 + fVar2;
  fVar2 = (float)sinf(fVar3);
  fVar2 = (fVar2 + 1.0) * 0.5 * *(float *)(param_1 + 0x220);
  *(float *)(param_1 + 0x3cc) = fVar2;
  *(float *)(param_1 + 0x3cc) = (1.0 - *(float *)(param_1 + 0x220)) * fVar5 + fVar2;
  fVar2 = (float)sinf(fVar3 + fVar4);
  fVar2 = (fVar2 + 1.0) * 0.5 * *(float *)(param_1 + 0x220);
  *(float *)(param_1 + 0x3d0) = fVar2;
  *(float *)(param_1 + 0x3d0) = (1.0 - *(float *)(param_1 + 0x220)) * (fVar5 + fVar1) + fVar2;
  return;
}






// 函数: void FUN_1807a57f0(void)
void FUN_1807a57f0(void)

{
                    // WARNING: Subroutine does not return
  memset(0x180c2bcf4,0,0x5c);
}






// 函数: void FUN_1807a5be0(int64_t param_1,int param_2,float *param_3,float *param_4,int *param_5)
void FUN_1807a5be0(int64_t param_1,int param_2,float *param_3,float *param_4,int *param_5)

{
  int iVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  iVar4 = *(int *)(param_1 + 600);
  if (iVar4 <= param_2) {
    *param_3 = 1.0 - *(float *)(param_1 + 0x21c);
    *param_4 = 0.0;
    *param_5 = *(int *)(param_1 + 0x24c);
    goto FUN_1807a5faf;
  }
  iVar3 = *(int *)(param_1 + 0x254);
  if (param_2 < iVar3) {
    iVar4 = *(int *)(param_1 + 0x250);
    if (param_2 < iVar4) {
      iVar3 = *(int *)(param_1 + 0x24c);
      if (iVar3 <= param_2) {
        iVar1 = ((param_2 - iVar3) * 0x10) / (iVar4 - iVar3);
        lVar2 = (int64_t)iVar1;
        if (iVar1 + 1 != 0x10) {
          fVar5 = (float)(iVar4 - iVar3);
          iVar3 = iVar3 + (int)((fVar5 - 0.5) / fVar5 +
                               (float)(iVar1 + 1) * *(float *)(param_1 + 0x270));
          iVar4 = param_2 + 1;
          if (param_2 + 1 <= iVar3) {
            iVar4 = iVar3;
          }
        }
        *param_5 = iVar4;
        if (param_2 ==
            (int)((float)iVar1 * *(float *)(param_1 + 0x270) + 0.5) + *(int *)(param_1 + 0x24c)) {
          if (iVar1 == 0) {
            *param_4 = (*(float *)(param_1 + 0x394 + lVar2 * 4) - *(float *)(param_1 + 0x390)) *
                       *(float *)(param_1 + 0x278);
            *param_3 = *(float *)(param_1 + 0x21c) * *(float *)(param_1 + 0x390) +
                       *(float *)(param_1 + 0x284);
          }
          else if (iVar1 == 0x10) {
            *param_4 = 0.0;
          }
          else {
            *param_4 = (*(float *)(param_1 + 0x394 + lVar2 * 4) -
                       *(float *)(param_1 + 0x390 + lVar2 * 4)) * *(float *)(param_1 + 0x278);
          }
          goto FUN_1807a5faf;
        }
        if (iVar1 == 0x10) {
          fVar5 = 0.0;
        }
        else {
          fVar5 = (*(float *)(param_1 + 0x394 + lVar2 * 4) - *(float *)(param_1 + 0x390 + lVar2 * 4)
                  ) * *(float *)(param_1 + 0x278);
        }
        *param_4 = fVar5;
        fVar5 = *(float *)(param_1 + 0x390 + lVar2 * 4) * *(float *)(param_1 + 0x21c) +
                *(float *)(param_1 + 0x284);
        *param_3 = fVar5;
        fVar6 = (float)iVar1 * *(float *)(param_1 + 0x270);
        iVar4 = *(int *)(param_1 + 0x24c);
        goto LAB_1807a5ee2;
      }
      *param_3 = 1.0 - *(float *)(param_1 + 0x21c);
      *param_4 = 0.0;
      iVar4 = *(int *)(param_1 + 0x24c);
    }
    else {
      *param_3 = 1.0;
      *param_4 = 0.0;
      iVar4 = *(int *)(param_1 + 0x254);
    }
    *param_5 = iVar4;
  }
  else {
    iVar1 = ((param_2 - iVar3) * 0x10) / (iVar4 - iVar3);
    if (iVar1 + 1 != 0x10) {
      fVar5 = (float)(iVar4 - iVar3);
      iVar3 = iVar3 + (int)((fVar5 - 0.5) / fVar5 + (float)(iVar1 + 1) * *(float *)(param_1 + 0x274)
                           );
      iVar4 = param_2 + 1;
      if (param_2 + 1 <= iVar3) {
        iVar4 = iVar3;
      }
    }
    iVar3 = 0x10 - iVar1;
    *param_5 = iVar4;
    if (param_2 ==
        (int)((float)iVar1 * *(float *)(param_1 + 0x274) + 0.5) + *(int *)(param_1 + 0x254)) {
      if (iVar1 == 0) {
        lVar2 = (int64_t)iVar3;
        if (iVar3 == 0x10) {
          fVar5 = 0.0;
        }
        else {
          fVar5 = (*(float *)(param_1 + 0x394 + lVar2 * 4) - *(float *)(param_1 + 0x390 + lVar2 * 4)
                  ) * *(float *)(param_1 + 0x278);
        }
        *param_4 = fVar5;
        *param_3 = *(float *)(param_1 + 0x390 + lVar2 * 4) * *(float *)(param_1 + 0x21c) +
                   *(float *)(param_1 + 0x284);
      }
      else if (iVar3 == 0) {
        *param_4 = 0.0;
      }
      else {
        *param_4 = (*(float *)(param_1 + 0x38c + (int64_t)iVar3 * 4) -
                   *(float *)(param_1 + 0x390 + (int64_t)iVar3 * 4)) * *(float *)(param_1 + 0x27c);
      }
      goto FUN_1807a5faf;
    }
    lVar2 = (int64_t)iVar3;
    if (iVar3 == 0) {
      fVar5 = 0.0;
    }
    else {
      fVar5 = (*(float *)(param_1 + 0x38c + lVar2 * 4) - *(float *)(param_1 + 0x390 + lVar2 * 4)) *
              *(float *)(param_1 + 0x27c);
    }
    *param_4 = fVar5;
    fVar5 = *(float *)(param_1 + 0x390 + lVar2 * 4) * *(float *)(param_1 + 0x21c) +
            *(float *)(param_1 + 0x284);
    *param_3 = fVar5;
    fVar6 = (float)iVar1 * *(float *)(param_1 + 0x274);
    iVar4 = *(int *)(param_1 + 0x254);
LAB_1807a5ee2:
    *param_3 = ((float)param_2 - (fVar6 + (float)iVar4)) * *param_4 + fVar5;
  }
FUN_1807a5faf:
  if (*(int *)(param_1 + 0x260) <= *param_5) {
    *param_5 = 0;
  }
  return;
}






