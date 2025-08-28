#include "TaleWorlds.Native.Split.h"

// 99_part_04_part017.c - 1 个函数

// 函数: void FUN_180267efc(int64_t param_1,int64_t param_2,int64_t param_3)
void FUN_180267efc(int64_t param_1,int64_t param_2,int64_t param_3)

{
  byte *pbVar1;
  int iVar2;
  int64_t *plVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  char cVar8;
  byte *pbVar9;
  int iVar10;
  int64_t *plVar11;
  int64_t unaff_RSI;
  int64_t lVar12;
  int64_t unaff_R14;
  
  if ((param_3 == 0) ||
     ((*(int64_t *)(param_3 + 0x10) == *(int64_t *)(param_1 + 0x10) &&
      (*(int64_t *)(param_3 + 0x18) == *(int64_t *)(param_1 + 0x18))))) {
    uVar4 = *(int32_t *)(param_2 + 0x14);
    uVar5 = *(int32_t *)(param_2 + 0x18);
    uVar6 = *(int32_t *)(param_2 + 0x1c);
    *(int32_t *)(param_1 + 0x10) = *(int32_t *)(param_2 + 0x10);
    *(int32_t *)(param_1 + 0x14) = uVar4;
    *(int32_t *)(param_1 + 0x18) = uVar5;
    *(int32_t *)(param_1 + 0x1c) = uVar6;
  }
  if ((unaff_RSI == 0) ||
     ((*(int64_t *)(param_3 + 0x20) == *(int64_t *)(param_1 + 0x20) &&
      (*(int64_t *)(param_3 + 0x28) == *(int64_t *)(param_1 + 0x28))))) {
    uVar4 = *(int32_t *)(param_2 + 0x24);
    uVar5 = *(int32_t *)(param_2 + 0x28);
    uVar6 = *(int32_t *)(param_2 + 0x2c);
    *(int32_t *)(param_1 + 0x20) = *(int32_t *)(param_2 + 0x20);
    *(int32_t *)(param_1 + 0x24) = uVar4;
    *(int32_t *)(param_1 + 0x28) = uVar5;
    *(int32_t *)(param_1 + 0x2c) = uVar6;
  }
  if ((unaff_RSI == 0) ||
     ((*(int64_t *)(param_3 + 0x30) == *(int64_t *)(param_1 + 0x30) &&
      (*(int64_t *)(param_3 + 0x38) == *(int64_t *)(param_1 + 0x38))))) {
    uVar4 = *(int32_t *)(param_2 + 0x34);
    uVar5 = *(int32_t *)(param_2 + 0x38);
    uVar6 = *(int32_t *)(param_2 + 0x3c);
    *(int32_t *)(param_1 + 0x30) = *(int32_t *)(param_2 + 0x30);
    *(int32_t *)(param_1 + 0x34) = uVar4;
    *(int32_t *)(param_1 + 0x38) = uVar5;
    *(int32_t *)(param_1 + 0x3c) = uVar6;
  }
  if (unaff_RSI == 0) {
LAB_180267faf:
    SystemCore_ConfigurationHandler0(param_1 + 0x40,unaff_R14 + 0x40);
  }
  else {
    iVar2 = *(int *)(param_3 + 0x50);
    iVar10 = *(int *)(param_1 + 0x50);
    if (iVar2 == iVar10) {
      if (iVar2 != 0) {
        pbVar9 = *(byte **)(param_3 + 0x48);
        lVar12 = *(int64_t *)(param_1 + 0x48) - (int64_t)pbVar9;
        do {
          pbVar1 = pbVar9 + lVar12;
          iVar10 = (uint)*pbVar9 - (uint)*pbVar1;
          if (iVar10 != 0) break;
          pbVar9 = pbVar9 + 1;
        } while (*pbVar1 != 0);
      }
LAB_180267fad:
      if (iVar10 == 0) goto LAB_180267faf;
    }
    else if (iVar2 == 0) goto LAB_180267fad;
  }
  if ((unaff_RSI == 0) || (*(int *)(unaff_RSI + 0x60) == *(int *)(param_1 + 0x60))) {
    *(int32_t *)(param_1 + 0x60) = *(int32_t *)(unaff_R14 + 0x60);
  }
  if ((unaff_RSI == 0) || (*(int *)(unaff_RSI + 100) == *(int *)(param_1 + 100))) {
    *(int32_t *)(param_1 + 100) = *(int32_t *)(unaff_R14 + 100);
  }
  if ((unaff_RSI == 0) || (*(float *)(param_1 + 0x6c) == *(float *)(unaff_RSI + 0x6c))) {
    *(int32_t *)(param_1 + 0x6c) = *(int32_t *)(unaff_R14 + 0x6c);
  }
  if ((unaff_RSI == 0) || (*(float *)(param_1 + 0x8c) == *(float *)(unaff_RSI + 0x8c))) {
    *(int32_t *)(param_1 + 0x8c) = *(int32_t *)(unaff_R14 + 0x8c);
  }
  if ((unaff_RSI == 0) || (*(float *)(param_1 + 0x90) == *(float *)(unaff_RSI + 0x90))) {
    *(int32_t *)(param_1 + 0x90) = *(int32_t *)(unaff_R14 + 0x90);
  }
  if ((unaff_RSI == 0) || (*(float *)(param_1 + 0x94) == *(float *)(unaff_RSI + 0x94))) {
    *(int32_t *)(param_1 + 0x94) = *(int32_t *)(unaff_R14 + 0x94);
  }
  if ((unaff_RSI == 0) || (*(float *)(param_1 + 0x98) == *(float *)(unaff_RSI + 0x98))) {
    *(int32_t *)(param_1 + 0x98) = *(int32_t *)(unaff_R14 + 0x98);
  }
  if ((unaff_RSI == 0) || (*(float *)(param_1 + 0x9c) == *(float *)(unaff_RSI + 0x9c))) {
    *(int32_t *)(param_1 + 0x9c) = *(int32_t *)(unaff_R14 + 0x9c);
  }
  if ((unaff_RSI == 0) || (*(float *)(param_1 + 0xa0) == *(float *)(unaff_RSI + 0xa0))) {
    *(int32_t *)(param_1 + 0xa0) = *(int32_t *)(unaff_R14 + 0xa0);
  }
  if ((unaff_RSI == 0) || (*(float *)(param_1 + 0xa4) == *(float *)(unaff_RSI + 0xa4))) {
    *(int32_t *)(param_1 + 0xa4) = *(int32_t *)(unaff_R14 + 0xa4);
  }
  if ((unaff_RSI == 0) || (*(float *)(param_1 + 0xa8) == *(float *)(unaff_RSI + 0xa8))) {
    *(int32_t *)(param_1 + 0xa8) = *(int32_t *)(unaff_R14 + 0xa8);
  }
  if ((unaff_RSI == 0) || (*(float *)(param_1 + 0xac) == *(float *)(unaff_RSI + 0xac))) {
    *(int32_t *)(param_1 + 0xac) = *(int32_t *)(unaff_R14 + 0xac);
  }
  if ((unaff_RSI == 0) || (*(float *)(param_1 + 0xb0) == *(float *)(unaff_RSI + 0xb0))) {
    *(int32_t *)(param_1 + 0xb0) = *(int32_t *)(unaff_R14 + 0xb0);
  }
  if ((unaff_RSI == 0) || (*(float *)(param_1 + 0xb4) == *(float *)(unaff_RSI + 0xb4))) {
    *(int32_t *)(param_1 + 0xb4) = *(int32_t *)(unaff_R14 + 0xb4);
  }
  if ((unaff_RSI == 0) || (*(float *)(param_1 + 0xb8) == *(float *)(unaff_RSI + 0xb8))) {
    *(int32_t *)(param_1 + 0xb8) = *(int32_t *)(unaff_R14 + 0xb8);
  }
  if ((unaff_RSI == 0) || (*(float *)(param_1 + 0xbc) == *(float *)(unaff_RSI + 0xbc))) {
    *(int32_t *)(param_1 + 0xbc) = *(int32_t *)(unaff_R14 + 0xbc);
  }
  if ((unaff_RSI == 0) || (*(float *)(param_1 + 0xc0) == *(float *)(unaff_RSI + 0xc0))) {
    *(int32_t *)(param_1 + 0xc0) = *(int32_t *)(unaff_R14 + 0xc0);
  }
  if ((unaff_RSI == 0) || (*(float *)(param_1 + 0xc4) == *(float *)(unaff_RSI + 0xc4))) {
    *(int32_t *)(param_1 + 0xc4) = *(int32_t *)(unaff_R14 + 0xc4);
  }
  if ((unaff_RSI == 0) || (*(float *)(param_1 + 200) == *(float *)(unaff_RSI + 200))) {
    *(int32_t *)(param_1 + 200) = *(int32_t *)(unaff_R14 + 200);
  }
  if ((unaff_RSI == 0) || (*(float *)(param_1 + 0xcc) == *(float *)(unaff_RSI + 0xcc))) {
    *(int32_t *)(param_1 + 0xcc) = *(int32_t *)(unaff_R14 + 0xcc);
  }
  if ((unaff_RSI == 0) || (*(int *)(unaff_RSI + 0x148) == *(int *)(param_1 + 0x148))) {
    *(int32_t *)(param_1 + 0x148) = *(int32_t *)(unaff_R14 + 0x148);
  }
  if ((unaff_RSI == 0) || (*(int *)(unaff_RSI + 0x14c) == *(int *)(param_1 + 0x14c))) {
    *(int32_t *)(param_1 + 0x14c) = *(int32_t *)(unaff_R14 + 0x14c);
  }
  if ((unaff_RSI == 0) || (*(int *)(unaff_RSI + 0x150) == *(int *)(param_1 + 0x150))) {
    *(int32_t *)(param_1 + 0x150) = *(int32_t *)(unaff_R14 + 0x150);
  }
  if ((unaff_RSI == 0) ||
     (((*(float *)(unaff_RSI + 0x15c) == *(float *)(param_1 + 0x15c) &&
       (*(float *)(unaff_RSI + 0x158) == *(float *)(param_1 + 0x158))) &&
      (cVar8 = func_0x000180417730(param_1 + 0x160,unaff_RSI + 0x160), cVar8 != '\0')))) {
    *(uint64_t *)(param_1 + 0x158) = *(uint64_t *)(unaff_R14 + 0x158);
    FUN_180269810(param_1 + 0x160,unaff_R14 + 0x160);
    *(int32_t *)(param_1 + 0x188) = *(int32_t *)(unaff_R14 + 0x188);
    *(int32_t *)(param_1 + 0x18c) = *(int32_t *)(unaff_R14 + 0x18c);
  }
  if ((unaff_RSI == 0) ||
     (((*(float *)(unaff_RSI + 0x194) == *(float *)(param_1 + 0x194) &&
       (*(float *)(unaff_RSI + 400) == *(float *)(param_1 + 400))) &&
      (cVar8 = func_0x000180417730(param_1 + 0x198,unaff_RSI + 0x198), cVar8 != '\0')))) {
    *(uint64_t *)(param_1 + 400) = *(uint64_t *)(unaff_R14 + 400);
    FUN_180269810(param_1 + 0x198,unaff_R14 + 0x198);
    *(int32_t *)(param_1 + 0x1c0) = *(int32_t *)(unaff_R14 + 0x1c0);
    *(int32_t *)(param_1 + 0x1c4) = *(int32_t *)(unaff_R14 + 0x1c4);
  }
  if ((unaff_RSI == 0) ||
     (((*(float *)(unaff_RSI + 0x1cc) == *(float *)(param_1 + 0x1cc) &&
       (*(float *)(unaff_RSI + 0x1c8) == *(float *)(param_1 + 0x1c8))) &&
      (cVar8 = func_0x000180417730(param_1 + 0x1d0,unaff_RSI + 0x1d0), cVar8 != '\0')))) {
    *(uint64_t *)(param_1 + 0x1c8) = *(uint64_t *)(unaff_R14 + 0x1c8);
    FUN_180269810(param_1 + 0x1d0,unaff_R14 + 0x1d0);
    *(int32_t *)(param_1 + 0x1f8) = *(int32_t *)(unaff_R14 + 0x1f8);
    *(int32_t *)(param_1 + 0x1fc) = *(int32_t *)(unaff_R14 + 0x1fc);
  }
  if ((unaff_RSI == 0) ||
     (((*(float *)(unaff_RSI + 0x204) == *(float *)(param_1 + 0x204) &&
       (*(float *)(unaff_RSI + 0x200) == *(float *)(param_1 + 0x200))) &&
      (cVar8 = func_0x000180417730(param_1 + 0x208,unaff_RSI + 0x208), cVar8 != '\0')))) {
    *(uint64_t *)(param_1 + 0x200) = *(uint64_t *)(unaff_R14 + 0x200);
    FUN_180269810(param_1 + 0x208,unaff_R14 + 0x208);
    *(int32_t *)(param_1 + 0x230) = *(int32_t *)(unaff_R14 + 0x230);
    *(int32_t *)(param_1 + 0x234) = *(int32_t *)(unaff_R14 + 0x234);
  }
  if ((unaff_RSI == 0) ||
     (((*(float *)(unaff_RSI + 0x23c) == *(float *)(param_1 + 0x23c) &&
       (*(float *)(unaff_RSI + 0x238) == *(float *)(param_1 + 0x238))) &&
      (cVar8 = func_0x000180417730(param_1 + 0x240,unaff_RSI + 0x240), cVar8 != '\0')))) {
    *(uint64_t *)(param_1 + 0x238) = *(uint64_t *)(unaff_R14 + 0x238);
    FUN_180269810(param_1 + 0x240,unaff_R14 + 0x240);
    *(int32_t *)(param_1 + 0x268) = *(int32_t *)(unaff_R14 + 0x268);
    *(int32_t *)(param_1 + 0x26c) = *(int32_t *)(unaff_R14 + 0x26c);
  }
  if ((unaff_RSI == 0) ||
     (((*(float *)(unaff_RSI + 0x274) == *(float *)(param_1 + 0x274) &&
       (*(float *)(unaff_RSI + 0x270) == *(float *)(param_1 + 0x270))) &&
      ((cVar8 = func_0x000180417730(param_1 + 0x278,unaff_RSI + 0x278), cVar8 != '\0' &&
       (cVar8 = func_0x000180417730(param_1 + 0x2a8,unaff_RSI + 0x2a8), cVar8 != '\0')))))) {
    *(uint64_t *)(param_1 + 0x270) = *(uint64_t *)(unaff_R14 + 0x270);
    FUN_180269810(param_1 + 0x278,unaff_R14 + 0x278);
    *(int32_t *)(param_1 + 0x2a0) = *(int32_t *)(unaff_R14 + 0x2a0);
    *(int32_t *)(param_1 + 0x2a4) = *(int32_t *)(unaff_R14 + 0x2a4);
    FUN_180269810(param_1 + 0x2a8,unaff_R14 + 0x2a8);
    *(int32_t *)(param_1 + 0x2d0) = *(int32_t *)(unaff_R14 + 0x2d0);
    *(int32_t *)(param_1 + 0x2d4) = *(int32_t *)(unaff_R14 + 0x2d4);
  }
  if ((unaff_RSI == 0) ||
     (((*(float *)(unaff_RSI + 0x2dc) == *(float *)(param_1 + 0x2dc) &&
       (*(float *)(unaff_RSI + 0x2d8) == *(float *)(param_1 + 0x2d8))) &&
      (cVar8 = func_0x000180417730(param_1 + 0x2e0,unaff_RSI + 0x2e0), cVar8 != '\0')))) {
    *(uint64_t *)(param_1 + 0x2d8) = *(uint64_t *)(unaff_R14 + 0x2d8);
    FUN_180269810(param_1 + 0x2e0,unaff_R14 + 0x2e0);
    *(int32_t *)(param_1 + 0x308) = *(int32_t *)(unaff_R14 + 0x308);
    *(int32_t *)(param_1 + 0x30c) = *(int32_t *)(unaff_R14 + 0x30c);
  }
  if ((unaff_RSI == 0) || (*(float *)(param_1 + 0xd4) == *(float *)(unaff_RSI + 0xd4))) {
    *(int32_t *)(param_1 + 0xd4) = *(int32_t *)(unaff_R14 + 0xd4);
  }
  if ((unaff_RSI == 0) || (*(int *)(unaff_RSI + 0x7c) == *(int *)(param_1 + 0x7c))) {
    *(int32_t *)(param_1 + 0x7c) = *(int32_t *)(unaff_R14 + 0x7c);
  }
  if ((unaff_RSI == 0) ||
     (((*(float *)(unaff_RSI + 0x314) == *(float *)(param_1 + 0x314) &&
       (*(float *)(unaff_RSI + 0x310) == *(float *)(param_1 + 0x310))) &&
      (cVar8 = func_0x000180417730(param_1 + 0x318,unaff_RSI + 0x318), cVar8 != '\0')))) {
    *(uint64_t *)(param_1 + 0x310) = *(uint64_t *)(unaff_R14 + 0x310);
    FUN_180269810(param_1 + 0x318,unaff_R14 + 0x318);
    *(int32_t *)(param_1 + 0x340) = *(int32_t *)(unaff_R14 + 0x340);
    *(int32_t *)(param_1 + 0x344) = *(int32_t *)(unaff_R14 + 0x344);
  }
  if ((unaff_RSI == 0) ||
     (((*(float *)(unaff_RSI + 0x34c) == *(float *)(param_1 + 0x34c) &&
       (*(float *)(unaff_RSI + 0x348) == *(float *)(param_1 + 0x348))) &&
      (cVar8 = func_0x000180417730(param_1 + 0x350,unaff_RSI + 0x350), cVar8 != '\0')))) {
    *(uint64_t *)(param_1 + 0x348) = *(uint64_t *)(unaff_R14 + 0x348);
    FUN_180269810(param_1 + 0x350,unaff_R14 + 0x350);
    *(int32_t *)(param_1 + 0x378) = *(int32_t *)(unaff_R14 + 0x378);
    *(int32_t *)(param_1 + 0x37c) = *(int32_t *)(unaff_R14 + 0x37c);
  }
  if ((unaff_RSI == 0) ||
     (((*(float *)(unaff_RSI + 900) == *(float *)(param_1 + 900) &&
       (*(float *)(unaff_RSI + 0x380) == *(float *)(param_1 + 0x380))) &&
      (cVar8 = func_0x000180417730(param_1 + 0x388,unaff_RSI + 0x388), cVar8 != '\0')))) {
    *(uint64_t *)(param_1 + 0x380) = *(uint64_t *)(unaff_R14 + 0x380);
    FUN_180269810(param_1 + 0x388,unaff_R14 + 0x388);
    *(int32_t *)(param_1 + 0x3b0) = *(int32_t *)(unaff_R14 + 0x3b0);
    *(int32_t *)(param_1 + 0x3b4) = *(int32_t *)(unaff_R14 + 0x3b4);
  }
  if ((unaff_RSI == 0) ||
     (((*(float *)(unaff_RSI + 0x3bc) == *(float *)(param_1 + 0x3bc) &&
       (*(float *)(unaff_RSI + 0x3b8) == *(float *)(param_1 + 0x3b8))) &&
      (cVar8 = func_0x000180417730(param_1 + 0x3c0,unaff_RSI + 0x3c0), cVar8 != '\0')))) {
    *(uint64_t *)(param_1 + 0x3b8) = *(uint64_t *)(unaff_R14 + 0x3b8);
    FUN_180269810(param_1 + 0x3c0,unaff_R14 + 0x3c0);
    *(int32_t *)(param_1 + 1000) = *(int32_t *)(unaff_R14 + 1000);
    *(int32_t *)(param_1 + 0x3ec) = *(int32_t *)(unaff_R14 + 0x3ec);
  }
  if ((unaff_RSI == 0) ||
     ((*(float *)(unaff_RSI + 0x74) == *(float *)(param_1 + 0x74) &&
      (*(float *)(unaff_RSI + 0x70) == *(float *)(param_1 + 0x70))))) {
    *(uint64_t *)(param_1 + 0x70) = *(uint64_t *)(unaff_R14 + 0x70);
  }
  if ((unaff_RSI == 0) ||
     (((*(float *)(unaff_RSI + 0x3f4) == *(float *)(param_1 + 0x3f4) &&
       (*(float *)(unaff_RSI + 0x3f0) == *(float *)(param_1 + 0x3f0))) &&
      (cVar8 = func_0x000180417730(param_1 + 0x3f8,unaff_RSI + 0x3f8), cVar8 != '\0')))) {
    *(uint64_t *)(param_1 + 0x3f0) = *(uint64_t *)(unaff_R14 + 0x3f0);
    FUN_180269810(param_1 + 0x3f8,unaff_R14 + 0x3f8);
    *(int32_t *)(param_1 + 0x420) = *(int32_t *)(unaff_R14 + 0x420);
    *(int32_t *)(param_1 + 0x424) = *(int32_t *)(unaff_R14 + 0x424);
  }
  if ((unaff_RSI == 0) ||
     (((*(float *)(unaff_RSI + 0x42c) == *(float *)(param_1 + 0x42c) &&
       (*(float *)(unaff_RSI + 0x428) == *(float *)(param_1 + 0x428))) &&
      (cVar8 = func_0x000180417730(param_1 + 0x430,unaff_RSI + 0x430), cVar8 != '\0')))) {
    *(uint64_t *)(param_1 + 0x428) = *(uint64_t *)(unaff_R14 + 0x428);
    FUN_180269810(param_1 + 0x430,unaff_R14 + 0x430);
    *(int32_t *)(param_1 + 0x458) = *(int32_t *)(unaff_R14 + 0x458);
    *(int32_t *)(param_1 + 0x45c) = *(int32_t *)(unaff_R14 + 0x45c);
  }
  if ((unaff_RSI == 0) ||
     ((*(float *)(unaff_RSI + 0x464) == *(float *)(param_1 + 0x464) &&
      (*(float *)(unaff_RSI + 0x460) == *(float *)(param_1 + 0x460))))) {
    *(uint64_t *)(param_1 + 0x460) = *(uint64_t *)(unaff_R14 + 0x460);
  }
  if ((unaff_RSI == 0) ||
     ((*(float *)(unaff_RSI + 0x474) == *(float *)(param_1 + 0x474) &&
      (*(float *)(unaff_RSI + 0x470) == *(float *)(param_1 + 0x470))))) {
    *(uint64_t *)(param_1 + 0x470) = *(uint64_t *)(unaff_R14 + 0x470);
  }
  if ((unaff_RSI == 0) ||
     ((*(float *)(unaff_RSI + 0x46c) == *(float *)(param_1 + 0x46c) &&
      (*(float *)(unaff_RSI + 0x468) == *(float *)(param_1 + 0x468))))) {
    *(uint64_t *)(param_1 + 0x468) = *(uint64_t *)(unaff_R14 + 0x468);
  }
  if ((unaff_RSI == 0) || (*(int *)(unaff_RSI + 0x478) == *(int *)(param_1 + 0x478))) {
    *(int32_t *)(param_1 + 0x478) = *(int32_t *)(unaff_R14 + 0x478);
  }
  if ((unaff_RSI == 0) || (*(int *)(unaff_RSI + 0x47c) == *(int *)(param_1 + 0x47c))) {
    *(int32_t *)(param_1 + 0x47c) = *(int32_t *)(unaff_R14 + 0x47c);
  }
  if ((unaff_RSI == 0) || (cVar8 = FUN_1802709c0(unaff_RSI + 0x480,param_1 + 0x480), cVar8 != '\0'))
  {
    FUN_1802692c0(param_1 + 0x480,unaff_R14 + 0x480);
  }
  if ((unaff_RSI == 0) || (*(float *)(param_1 + 0xd8) == *(float *)(unaff_RSI + 0xd8))) {
    *(int32_t *)(param_1 + 0xd8) = *(int32_t *)(unaff_R14 + 0xd8);
  }
  if ((unaff_RSI == 0) || (*(float *)(param_1 + 0x7f0) == *(float *)(unaff_RSI + 0x7f0))) {
    *(int32_t *)(param_1 + 0x7f0) = *(int32_t *)(unaff_R14 + 0x7f0);
  }
  if ((unaff_RSI == 0) || (*(float *)(param_1 + 0x7f4) == *(float *)(unaff_RSI + 0x7f4))) {
    *(int32_t *)(param_1 + 0x7f4) = *(int32_t *)(unaff_R14 + 0x7f4);
  }
  if ((unaff_RSI == 0) || (*(float *)(param_1 + 0x7f8) == *(float *)(unaff_RSI + 0x7f8))) {
    *(int32_t *)(param_1 + 0x7f8) = *(int32_t *)(unaff_R14 + 0x7f8);
  }
  if ((unaff_RSI == 0) || (*(float *)(param_1 + 0x7fc) == *(float *)(unaff_RSI + 0x7fc))) {
    *(int32_t *)(param_1 + 0x7fc) = *(int32_t *)(unaff_R14 + 0x7fc);
  }
  if ((unaff_RSI == 0) || (*(float *)(param_1 + 0x850) == *(float *)(unaff_RSI + 0x850))) {
    *(int32_t *)(param_1 + 0x850) = *(int32_t *)(unaff_R14 + 0x850);
  }
  if ((unaff_RSI == 0) ||
     ((*(int *)(unaff_RSI + 0x854) == *(int *)(param_1 + 0x854) &&
      (*(int *)(unaff_RSI + 0x858) == *(int *)(param_1 + 0x858))))) {
    *(uint64_t *)(param_1 + 0x854) = *(uint64_t *)(unaff_R14 + 0x854);
  }
  if ((unaff_RSI == 0) || (*(int *)(unaff_RSI + 0x85c) == *(int *)(param_1 + 0x85c))) {
    *(int32_t *)(param_1 + 0x85c) = *(int32_t *)(unaff_R14 + 0x85c);
  }
  if ((unaff_RSI == 0) || (*(float *)(param_1 + 0x860) == *(float *)(unaff_RSI + 0x860))) {
    *(int32_t *)(param_1 + 0x860) = *(int32_t *)(unaff_R14 + 0x860);
  }
  if (unaff_RSI == 0) {
LAB_180268c62:
    FUN_180150240(param_1 + 0x868,unaff_R14 + 0x868);
  }
  else {
    plVar3 = *(int64_t **)(unaff_RSI + 0x870);
    plVar11 = *(int64_t **)(unaff_RSI + 0x868);
    if (((*(int64_t *)(param_1 + 0x870) - *(int64_t *)(param_1 + 0x868) ^
         (int64_t)plVar3 - (int64_t)plVar11) & 0xfffffffffffffff0U) == 0) {
      if (plVar11 != plVar3) {
        lVar12 = *(int64_t *)(param_1 + 0x868) - (int64_t)plVar11;
        do {
          if ((*plVar11 != *(int64_t *)((int64_t)plVar11 + lVar12)) ||
             (plVar11[1] != *(int64_t *)((int64_t)plVar11 + lVar12 + 8))) goto LAB_180268c75;
          plVar11 = plVar11 + 2;
        } while (plVar11 != plVar3);
      }
      goto LAB_180268c62;
    }
  }
LAB_180268c75:
  if ((unaff_RSI == 0) ||
     ((*(float *)(param_1 + 0x888) == *(float *)(unaff_RSI + 0x888) &&
      (*(float *)(param_1 + 0x88c) == *(float *)(unaff_RSI + 0x88c))))) {
    *(uint64_t *)(param_1 + 0x888) = *(uint64_t *)(unaff_R14 + 0x888);
  }
  if ((unaff_RSI == 0) ||
     ((*(float *)(param_1 + 0x890) == *(float *)(unaff_RSI + 0x890) &&
      (*(float *)(param_1 + 0x894) == *(float *)(unaff_RSI + 0x894))))) {
    *(uint64_t *)(param_1 + 0x890) = *(uint64_t *)(unaff_R14 + 0x890);
  }
  if ((unaff_RSI == 0) ||
     ((*(float *)(param_1 + 0x898) == *(float *)(unaff_RSI + 0x898) &&
      (*(float *)(param_1 + 0x89c) == *(float *)(unaff_RSI + 0x89c))))) {
    *(uint64_t *)(param_1 + 0x898) = *(uint64_t *)(unaff_R14 + 0x898);
  }
  if ((unaff_RSI == 0) ||
     ((*(float *)(param_1 + 0x8a0) == *(float *)(unaff_RSI + 0x8a0) &&
      (*(float *)(param_1 + 0x8a4) == *(float *)(unaff_RSI + 0x8a4))))) {
    *(uint64_t *)(param_1 + 0x8a0) = *(uint64_t *)(unaff_R14 + 0x8a0);
  }
  if ((unaff_RSI == 0) || (*(int *)(unaff_RSI + 0x8a8) == *(int *)(param_1 + 0x8a8))) {
    *(int32_t *)(param_1 + 0x8a8) = *(int32_t *)(unaff_R14 + 0x8a8);
  }
  if ((unaff_RSI == 0) || (*(int *)(unaff_RSI + 0x8ac) == *(int *)(param_1 + 0x8ac))) {
    *(int32_t *)(param_1 + 0x8ac) = *(int32_t *)(unaff_R14 + 0x8ac);
  }
  if ((unaff_RSI == 0) || (*(int *)(unaff_RSI + 0x8b0) == *(int *)(param_1 + 0x8b0))) {
    *(int32_t *)(param_1 + 0x8b0) = *(int32_t *)(unaff_R14 + 0x8b0);
  }
  if ((unaff_RSI == 0) ||
     ((*(int64_t *)(unaff_RSI + 0x138) == *(int64_t *)(param_1 + 0x138) &&
      (*(int64_t *)(unaff_RSI + 0x140) == *(int64_t *)(param_1 + 0x140))))) {
    uVar7 = *(uint64_t *)(unaff_R14 + 0x140);
    *(uint64_t *)(param_1 + 0x138) = *(uint64_t *)(unaff_R14 + 0x138);
    *(uint64_t *)(param_1 + 0x140) = uVar7;
  }
  if ((unaff_RSI == 0) || (*(float *)(param_1 + 0xd0) == *(float *)(unaff_RSI + 0xd0))) {
    *(int32_t *)(param_1 + 0xd0) = *(int32_t *)(unaff_R14 + 0xd0);
  }
  if ((unaff_RSI == 0) ||
     (((*(float *)(unaff_RSI + 0x104) == *(float *)(param_1 + 0x104) &&
       (*(float *)(unaff_RSI + 0x100) == *(float *)(param_1 + 0x100))) &&
      (cVar8 = func_0x000180417730(param_1 + 0x108,unaff_RSI + 0x108), cVar8 != '\0')))) {
    *(uint64_t *)(param_1 + 0x100) = *(uint64_t *)(unaff_R14 + 0x100);
    FUN_180269810(param_1 + 0x108,unaff_R14 + 0x108);
    *(int32_t *)(param_1 + 0x130) = *(int32_t *)(unaff_R14 + 0x130);
    *(int32_t *)(param_1 + 0x134) = *(int32_t *)(unaff_R14 + 0x134);
  }
  if (unaff_RSI == 0) {
LAB_180268ecf:
    SystemCore_ConfigurationHandler0(param_1 + 0x8d8,unaff_R14 + 0x8d8);
  }
  else {
    iVar2 = *(int *)(unaff_RSI + 0x8e8);
    iVar10 = *(int *)(param_1 + 0x8e8);
    if (iVar2 == iVar10) {
      if (iVar2 != 0) {
        pbVar9 = *(byte **)(unaff_RSI + 0x8e0);
        lVar12 = *(int64_t *)(param_1 + 0x8e0) - (int64_t)pbVar9;
        do {
          pbVar1 = pbVar9 + lVar12;
          iVar10 = (uint)*pbVar9 - (uint)*pbVar1;
          if (iVar10 != 0) break;
          pbVar9 = pbVar9 + 1;
        } while (*pbVar1 != 0);
      }
LAB_180268ecd:
      if (iVar10 == 0) goto LAB_180268ecf;
    }
    else if (iVar2 == 0) goto LAB_180268ecd;
  }
  if (unaff_RSI != 0) {
    iVar2 = *(int *)(unaff_RSI + 0x8c8);
    iVar10 = *(int *)(param_1 + 0x8c8);
    if (iVar2 == iVar10) {
      if (iVar2 != 0) {
        pbVar9 = *(byte **)(unaff_RSI + 0x8c0);
        lVar12 = *(int64_t *)(param_1 + 0x8c0) - (int64_t)pbVar9;
        do {
          pbVar1 = pbVar9 + lVar12;
          iVar10 = (uint)*pbVar9 - (uint)*pbVar1;
          if (iVar10 != 0) break;
          pbVar9 = pbVar9 + 1;
        } while (*pbVar1 != 0);
      }
    }
    else if (iVar2 != 0) goto LAB_180268f42;
    if (iVar10 != 0) goto LAB_180268f42;
  }
  SystemCore_ConfigurationHandler0(param_1 + 0x8b8,unaff_R14 + 0x8b8);
LAB_180268f42:
  if ((unaff_RSI == 0) || (*(int *)(unaff_RSI + 0x80) == *(int *)(param_1 + 0x80))) {
    *(int32_t *)(param_1 + 0x80) = *(int32_t *)(unaff_R14 + 0x80);
  }
  if ((unaff_RSI == 0) || (*(int *)(unaff_RSI + 0x84) == *(int *)(param_1 + 0x84))) {
    *(int32_t *)(param_1 + 0x84) = *(int32_t *)(unaff_R14 + 0x84);
  }
  if ((unaff_RSI == 0) || (*(int *)(unaff_RSI + 0x68) == *(int *)(param_1 + 0x68))) {
    *(int32_t *)(param_1 + 0x68) = *(int32_t *)(unaff_R14 + 0x68);
  }
  if ((unaff_RSI == 0) || (*(float *)(param_1 + 0x8f8) == *(float *)(unaff_RSI + 0x8f8))) {
    *(int32_t *)(param_1 + 0x8f8) = *(int32_t *)(unaff_R14 + 0x8f8);
  }
  if ((unaff_RSI == 0) ||
     (((ABS(*(float *)(unaff_RSI + 0x810) - *(float *)(param_1 + 0x810)) < 0.01 &&
       (ABS(*(float *)(unaff_RSI + 0x814) - *(float *)(param_1 + 0x814)) < 0.01)) &&
      (ABS(*(float *)(unaff_RSI + 0x818) - *(float *)(param_1 + 0x818)) < 0.01)))) {
    uVar7 = *(uint64_t *)(unaff_R14 + 0x818);
    *(uint64_t *)(param_1 + 0x810) = *(uint64_t *)(unaff_R14 + 0x810);
    *(uint64_t *)(param_1 + 0x818) = uVar7;
  }
  if ((unaff_RSI == 0) ||
     (((ABS(*(float *)(unaff_RSI + 0x800) - *(float *)(param_1 + 0x800)) < 0.01 &&
       (ABS(*(float *)(unaff_RSI + 0x804) - *(float *)(param_1 + 0x804)) < 0.01)) &&
      (ABS(*(float *)(unaff_RSI + 0x808) - *(float *)(param_1 + 0x808)) < 0.01)))) {
    uVar7 = *(uint64_t *)(unaff_R14 + 0x808);
    *(uint64_t *)(param_1 + 0x800) = *(uint64_t *)(unaff_R14 + 0x800);
    *(uint64_t *)(param_1 + 0x808) = uVar7;
  }
  if ((unaff_RSI == 0) ||
     (((ABS(*(float *)(unaff_RSI + 0xdc) - *(float *)(param_1 + 0xdc)) < 0.01 &&
       (ABS(*(float *)(unaff_RSI + 0xe0) - *(float *)(param_1 + 0xe0)) < 0.01)) &&
      (ABS(*(float *)(unaff_RSI + 0xe4) - *(float *)(param_1 + 0xe4)) < 0.01)))) {
    uVar7 = *(uint64_t *)(unaff_R14 + 0xe4);
    *(uint64_t *)(param_1 + 0xdc) = *(uint64_t *)(unaff_R14 + 0xdc);
    *(uint64_t *)(param_1 + 0xe4) = uVar7;
  }
  if ((unaff_RSI == 0) ||
     (((ABS(*(float *)(unaff_RSI + 0xec) - *(float *)(param_1 + 0xec)) < 0.01 &&
       (ABS(*(float *)(unaff_RSI + 0xf0) - *(float *)(param_1 + 0xf0)) < 0.01)) &&
      (ABS(*(float *)(unaff_RSI + 0xf4) - *(float *)(param_1 + 0xf4)) < 0.01)))) {
    uVar7 = *(uint64_t *)(unaff_R14 + 0xf4);
    *(uint64_t *)(param_1 + 0xec) = *(uint64_t *)(unaff_R14 + 0xec);
    *(uint64_t *)(param_1 + 0xf4) = uVar7;
  }
  if ((unaff_RSI == 0) ||
     (((ABS(*(float *)(unaff_RSI + 0x820) - *(float *)(param_1 + 0x820)) < 0.01 &&
       (ABS(*(float *)(unaff_RSI + 0x824) - *(float *)(param_1 + 0x824)) < 0.01)) &&
      (ABS(*(float *)(unaff_RSI + 0x828) - *(float *)(param_1 + 0x828)) < 0.01)))) {
    uVar7 = *(uint64_t *)(unaff_R14 + 0x828);
    *(uint64_t *)(param_1 + 0x820) = *(uint64_t *)(unaff_R14 + 0x820);
    *(uint64_t *)(param_1 + 0x828) = uVar7;
  }
  if ((unaff_RSI == 0) ||
     (((ABS(*(float *)(unaff_RSI + 0x830) - *(float *)(param_1 + 0x830)) < 0.01 &&
       (ABS(*(float *)(unaff_RSI + 0x834) - *(float *)(param_1 + 0x834)) < 0.01)) &&
      (ABS(*(float *)(unaff_RSI + 0x838) - *(float *)(param_1 + 0x838)) < 0.01)))) {
    uVar7 = *(uint64_t *)(unaff_R14 + 0x838);
    *(uint64_t *)(param_1 + 0x830) = *(uint64_t *)(unaff_R14 + 0x830);
    *(uint64_t *)(param_1 + 0x838) = uVar7;
  }
  if ((unaff_RSI == 0) ||
     (((ABS(*(float *)(unaff_RSI + 0x840) - *(float *)(param_1 + 0x840)) < 0.01 &&
       (ABS(*(float *)(unaff_RSI + 0x844) - *(float *)(param_1 + 0x844)) < 0.01)) &&
      (ABS(*(float *)(unaff_RSI + 0x848) - *(float *)(param_1 + 0x848)) < 0.01)))) {
    uVar7 = *(uint64_t *)(unaff_R14 + 0x848);
    *(uint64_t *)(param_1 + 0x840) = *(uint64_t *)(unaff_R14 + 0x840);
    *(uint64_t *)(param_1 + 0x848) = uVar7;
  }
  if ((unaff_RSI == 0) ||
     (((ABS(*(float *)(unaff_RSI + 0x7e0) - *(float *)(param_1 + 0x7e0)) < 0.01 &&
       (ABS(*(float *)(unaff_RSI + 0x7e4) - *(float *)(param_1 + 0x7e4)) < 0.01)) &&
      (ABS(*(float *)(unaff_RSI + 0x7e8) - *(float *)(param_1 + 0x7e8)) < 0.01)))) {
    uVar7 = *(uint64_t *)(unaff_R14 + 0x7e8);
    *(uint64_t *)(param_1 + 0x7e0) = *(uint64_t *)(unaff_R14 + 0x7e0);
    *(uint64_t *)(param_1 + 0x7e8) = uVar7;
  }
  return;
}






