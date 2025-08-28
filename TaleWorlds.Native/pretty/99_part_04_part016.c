#include "TaleWorlds.Native.Split.h"

// 99_part_04_part016.c - 1 个函数

// 函数: void FUN_180267ee0(longlong param_1,longlong param_2,longlong param_3)
void FUN_180267ee0(longlong param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char cVar8;
  byte *pbVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  if ((param_3 == 0) ||
     ((*(longlong *)(param_3 + 0x10) == *(longlong *)(param_1 + 0x10) &&
      (*(longlong *)(param_3 + 0x18) == *(longlong *)(param_1 + 0x18))))) {
    uVar4 = *(undefined4 *)(param_2 + 0x14);
    uVar5 = *(undefined4 *)(param_2 + 0x18);
    uVar6 = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = uVar4;
    *(undefined4 *)(param_1 + 0x18) = uVar5;
    *(undefined4 *)(param_1 + 0x1c) = uVar6;
  }
  if ((param_3 == 0) ||
     ((*(longlong *)(param_3 + 0x20) == *(longlong *)(param_1 + 0x20) &&
      (*(longlong *)(param_3 + 0x28) == *(longlong *)(param_1 + 0x28))))) {
    uVar4 = *(undefined4 *)(param_2 + 0x24);
    uVar5 = *(undefined4 *)(param_2 + 0x28);
    uVar6 = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = uVar4;
    *(undefined4 *)(param_1 + 0x28) = uVar5;
    *(undefined4 *)(param_1 + 0x2c) = uVar6;
  }
  if ((param_3 == 0) ||
     ((*(longlong *)(param_3 + 0x30) == *(longlong *)(param_1 + 0x30) &&
      (*(longlong *)(param_3 + 0x38) == *(longlong *)(param_1 + 0x38))))) {
    uVar4 = *(undefined4 *)(param_2 + 0x34);
    uVar5 = *(undefined4 *)(param_2 + 0x38);
    uVar6 = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x34) = uVar4;
    *(undefined4 *)(param_1 + 0x38) = uVar5;
    *(undefined4 *)(param_1 + 0x3c) = uVar6;
  }
  if (param_3 == 0) {
LAB_180267faf:
    FUN_180627be0(param_1 + 0x40,param_2 + 0x40);
  }
  else {
    iVar2 = *(int *)(param_3 + 0x50);
    iVar10 = *(int *)(param_1 + 0x50);
    if (iVar2 == iVar10) {
      if (iVar2 != 0) {
        pbVar9 = *(byte **)(param_3 + 0x48);
        lVar12 = *(longlong *)(param_1 + 0x48) - (longlong)pbVar9;
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
  if ((param_3 == 0) || (*(int *)(param_3 + 0x60) == *(int *)(param_1 + 0x60))) {
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  }
  if ((param_3 == 0) || (*(int *)(param_3 + 100) == *(int *)(param_1 + 100))) {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  }
  if ((param_3 == 0) || (*(float *)(param_1 + 0x6c) == *(float *)(param_3 + 0x6c))) {
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  }
  if ((param_3 == 0) || (*(float *)(param_1 + 0x8c) == *(float *)(param_3 + 0x8c))) {
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  }
  if ((param_3 == 0) || (*(float *)(param_1 + 0x90) == *(float *)(param_3 + 0x90))) {
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  }
  if ((param_3 == 0) || (*(float *)(param_1 + 0x94) == *(float *)(param_3 + 0x94))) {
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  }
  if ((param_3 == 0) || (*(float *)(param_1 + 0x98) == *(float *)(param_3 + 0x98))) {
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  }
  if ((param_3 == 0) || (*(float *)(param_1 + 0x9c) == *(float *)(param_3 + 0x9c))) {
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  }
  if ((param_3 == 0) || (*(float *)(param_1 + 0xa0) == *(float *)(param_3 + 0xa0))) {
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  }
  if ((param_3 == 0) || (*(float *)(param_1 + 0xa4) == *(float *)(param_3 + 0xa4))) {
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  }
  if ((param_3 == 0) || (*(float *)(param_1 + 0xa8) == *(float *)(param_3 + 0xa8))) {
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  }
  if ((param_3 == 0) || (*(float *)(param_1 + 0xac) == *(float *)(param_3 + 0xac))) {
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  }
  if ((param_3 == 0) || (*(float *)(param_1 + 0xb0) == *(float *)(param_3 + 0xb0))) {
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  }
  if ((param_3 == 0) || (*(float *)(param_1 + 0xb4) == *(float *)(param_3 + 0xb4))) {
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  }
  if ((param_3 == 0) || (*(float *)(param_1 + 0xb8) == *(float *)(param_3 + 0xb8))) {
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  }
  if ((param_3 == 0) || (*(float *)(param_1 + 0xbc) == *(float *)(param_3 + 0xbc))) {
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  }
  if ((param_3 == 0) || (*(float *)(param_1 + 0xc0) == *(float *)(param_3 + 0xc0))) {
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  }
  if ((param_3 == 0) || (*(float *)(param_1 + 0xc4) == *(float *)(param_3 + 0xc4))) {
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  }
  if ((param_3 == 0) || (*(float *)(param_1 + 200) == *(float *)(param_3 + 200))) {
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  }
  if ((param_3 == 0) || (*(float *)(param_1 + 0xcc) == *(float *)(param_3 + 0xcc))) {
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  }
  if ((param_3 == 0) || (*(int *)(param_3 + 0x148) == *(int *)(param_1 + 0x148))) {
    *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
  }
  if ((param_3 == 0) || (*(int *)(param_3 + 0x14c) == *(int *)(param_1 + 0x14c))) {
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
  }
  if ((param_3 == 0) || (*(int *)(param_3 + 0x150) == *(int *)(param_1 + 0x150))) {
    *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  }
  if ((param_3 == 0) ||
     (((*(float *)(param_3 + 0x15c) == *(float *)(param_1 + 0x15c) &&
       (*(float *)(param_3 + 0x158) == *(float *)(param_1 + 0x158))) &&
      (cVar8 = func_0x000180417730(param_1 + 0x160,param_3 + 0x160), cVar8 != '\0')))) {
    *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
    FUN_180269810(param_1 + 0x160,param_2 + 0x160);
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_2 + 0x18c);
  }
  if ((param_3 == 0) ||
     (((*(float *)(param_3 + 0x194) == *(float *)(param_1 + 0x194) &&
       (*(float *)(param_3 + 400) == *(float *)(param_1 + 400))) &&
      (cVar8 = func_0x000180417730(param_1 + 0x198,param_3 + 0x198), cVar8 != '\0')))) {
    *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_2 + 400);
    FUN_180269810(param_1 + 0x198,param_2 + 0x198);
    *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c0);
    *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_2 + 0x1c4);
  }
  if ((param_3 == 0) ||
     (((*(float *)(param_3 + 0x1cc) == *(float *)(param_1 + 0x1cc) &&
       (*(float *)(param_3 + 0x1c8) == *(float *)(param_1 + 0x1c8))) &&
      (cVar8 = func_0x000180417730(param_1 + 0x1d0,param_3 + 0x1d0), cVar8 != '\0')))) {
    *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x1c8);
    FUN_180269810(param_1 + 0x1d0,param_2 + 0x1d0);
    *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0x1f8);
    *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_2 + 0x1fc);
  }
  if ((param_3 == 0) ||
     (((*(float *)(param_3 + 0x204) == *(float *)(param_1 + 0x204) &&
       (*(float *)(param_3 + 0x200) == *(float *)(param_1 + 0x200))) &&
      (cVar8 = func_0x000180417730(param_1 + 0x208,param_3 + 0x208), cVar8 != '\0')))) {
    *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_2 + 0x200);
    FUN_180269810(param_1 + 0x208,param_2 + 0x208);
    *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_2 + 0x230);
    *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_2 + 0x234);
  }
  if ((param_3 == 0) ||
     (((*(float *)(param_3 + 0x23c) == *(float *)(param_1 + 0x23c) &&
       (*(float *)(param_3 + 0x238) == *(float *)(param_1 + 0x238))) &&
      (cVar8 = func_0x000180417730(param_1 + 0x240,param_3 + 0x240), cVar8 != '\0')))) {
    *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_2 + 0x238);
    FUN_180269810(param_1 + 0x240,param_2 + 0x240);
    *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_2 + 0x268);
    *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(param_2 + 0x26c);
  }
  if ((param_3 == 0) ||
     (((*(float *)(param_3 + 0x274) == *(float *)(param_1 + 0x274) &&
       (*(float *)(param_3 + 0x270) == *(float *)(param_1 + 0x270))) &&
      ((cVar8 = func_0x000180417730(param_1 + 0x278,param_3 + 0x278), cVar8 != '\0' &&
       (cVar8 = func_0x000180417730(param_1 + 0x2a8,param_3 + 0x2a8), cVar8 != '\0')))))) {
    *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_2 + 0x270);
    FUN_180269810(param_1 + 0x278,param_2 + 0x278);
    *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_2 + 0x2a0);
    *(undefined4 *)(param_1 + 0x2a4) = *(undefined4 *)(param_2 + 0x2a4);
    FUN_180269810(param_1 + 0x2a8,param_2 + 0x2a8);
    *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_2 + 0x2d0);
    *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_2 + 0x2d4);
  }
  if ((param_3 == 0) ||
     (((*(float *)(param_3 + 0x2dc) == *(float *)(param_1 + 0x2dc) &&
       (*(float *)(param_3 + 0x2d8) == *(float *)(param_1 + 0x2d8))) &&
      (cVar8 = func_0x000180417730(param_1 + 0x2e0,param_3 + 0x2e0), cVar8 != '\0')))) {
    *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_2 + 0x2d8);
    FUN_180269810(param_1 + 0x2e0,param_2 + 0x2e0);
    *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_2 + 0x308);
    *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_2 + 0x30c);
  }
  if ((param_3 == 0) || (*(float *)(param_1 + 0xd4) == *(float *)(param_3 + 0xd4))) {
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  }
  if ((param_3 == 0) || (*(int *)(param_3 + 0x7c) == *(int *)(param_1 + 0x7c))) {
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  }
  if ((param_3 == 0) ||
     (((*(float *)(param_3 + 0x314) == *(float *)(param_1 + 0x314) &&
       (*(float *)(param_3 + 0x310) == *(float *)(param_1 + 0x310))) &&
      (cVar8 = func_0x000180417730(param_1 + 0x318,param_3 + 0x318), cVar8 != '\0')))) {
    *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_2 + 0x310);
    FUN_180269810(param_1 + 0x318,param_2 + 0x318);
    *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_2 + 0x340);
    *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)(param_2 + 0x344);
  }
  if ((param_3 == 0) ||
     (((*(float *)(param_3 + 0x34c) == *(float *)(param_1 + 0x34c) &&
       (*(float *)(param_3 + 0x348) == *(float *)(param_1 + 0x348))) &&
      (cVar8 = func_0x000180417730(param_1 + 0x350,param_3 + 0x350), cVar8 != '\0')))) {
    *(undefined8 *)(param_1 + 0x348) = *(undefined8 *)(param_2 + 0x348);
    FUN_180269810(param_1 + 0x350,param_2 + 0x350);
    *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_2 + 0x378);
    *(undefined4 *)(param_1 + 0x37c) = *(undefined4 *)(param_2 + 0x37c);
  }
  if ((param_3 == 0) ||
     (((*(float *)(param_3 + 900) == *(float *)(param_1 + 900) &&
       (*(float *)(param_3 + 0x380) == *(float *)(param_1 + 0x380))) &&
      (cVar8 = func_0x000180417730(param_1 + 0x388,param_3 + 0x388), cVar8 != '\0')))) {
    *(undefined8 *)(param_1 + 0x380) = *(undefined8 *)(param_2 + 0x380);
    FUN_180269810(param_1 + 0x388,param_2 + 0x388);
    *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_2 + 0x3b0);
    *(undefined4 *)(param_1 + 0x3b4) = *(undefined4 *)(param_2 + 0x3b4);
  }
  if ((param_3 == 0) ||
     (((*(float *)(param_3 + 0x3bc) == *(float *)(param_1 + 0x3bc) &&
       (*(float *)(param_3 + 0x3b8) == *(float *)(param_1 + 0x3b8))) &&
      (cVar8 = func_0x000180417730(param_1 + 0x3c0,param_3 + 0x3c0), cVar8 != '\0')))) {
    *(undefined8 *)(param_1 + 0x3b8) = *(undefined8 *)(param_2 + 0x3b8);
    FUN_180269810(param_1 + 0x3c0,param_2 + 0x3c0);
    *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_2 + 1000);
    *(undefined4 *)(param_1 + 0x3ec) = *(undefined4 *)(param_2 + 0x3ec);
  }
  if ((param_3 == 0) ||
     ((*(float *)(param_3 + 0x74) == *(float *)(param_1 + 0x74) &&
      (*(float *)(param_3 + 0x70) == *(float *)(param_1 + 0x70))))) {
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  }
  if ((param_3 == 0) ||
     (((*(float *)(param_3 + 0x3f4) == *(float *)(param_1 + 0x3f4) &&
       (*(float *)(param_3 + 0x3f0) == *(float *)(param_1 + 0x3f0))) &&
      (cVar8 = func_0x000180417730(param_1 + 0x3f8,param_3 + 0x3f8), cVar8 != '\0')))) {
    *(undefined8 *)(param_1 + 0x3f0) = *(undefined8 *)(param_2 + 0x3f0);
    FUN_180269810(param_1 + 0x3f8,param_2 + 0x3f8);
    *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(param_2 + 0x420);
    *(undefined4 *)(param_1 + 0x424) = *(undefined4 *)(param_2 + 0x424);
  }
  if ((param_3 == 0) ||
     (((*(float *)(param_3 + 0x42c) == *(float *)(param_1 + 0x42c) &&
       (*(float *)(param_3 + 0x428) == *(float *)(param_1 + 0x428))) &&
      (cVar8 = func_0x000180417730(param_1 + 0x430,param_3 + 0x430), cVar8 != '\0')))) {
    *(undefined8 *)(param_1 + 0x428) = *(undefined8 *)(param_2 + 0x428);
    FUN_180269810(param_1 + 0x430,param_2 + 0x430);
    *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_2 + 0x458);
    *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_2 + 0x45c);
  }
  if ((param_3 == 0) ||
     ((*(float *)(param_3 + 0x464) == *(float *)(param_1 + 0x464) &&
      (*(float *)(param_3 + 0x460) == *(float *)(param_1 + 0x460))))) {
    *(undefined8 *)(param_1 + 0x460) = *(undefined8 *)(param_2 + 0x460);
  }
  if ((param_3 == 0) ||
     ((*(float *)(param_3 + 0x474) == *(float *)(param_1 + 0x474) &&
      (*(float *)(param_3 + 0x470) == *(float *)(param_1 + 0x470))))) {
    *(undefined8 *)(param_1 + 0x470) = *(undefined8 *)(param_2 + 0x470);
  }
  if ((param_3 == 0) ||
     ((*(float *)(param_3 + 0x46c) == *(float *)(param_1 + 0x46c) &&
      (*(float *)(param_3 + 0x468) == *(float *)(param_1 + 0x468))))) {
    *(undefined8 *)(param_1 + 0x468) = *(undefined8 *)(param_2 + 0x468);
  }
  if ((param_3 == 0) || (*(int *)(param_3 + 0x478) == *(int *)(param_1 + 0x478))) {
    *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(param_2 + 0x478);
  }
  if ((param_3 == 0) || (*(int *)(param_3 + 0x47c) == *(int *)(param_1 + 0x47c))) {
    *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(param_2 + 0x47c);
  }
  if ((param_3 == 0) || (cVar8 = FUN_1802709c0(param_3 + 0x480,param_1 + 0x480), cVar8 != '\0')) {
    FUN_1802692c0(param_1 + 0x480,param_2 + 0x480);
  }
  if ((param_3 == 0) || (*(float *)(param_1 + 0xd8) == *(float *)(param_3 + 0xd8))) {
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  }
  if ((param_3 == 0) || (*(float *)(param_1 + 0x7f0) == *(float *)(param_3 + 0x7f0))) {
    *(undefined4 *)(param_1 + 0x7f0) = *(undefined4 *)(param_2 + 0x7f0);
  }
  if ((param_3 == 0) || (*(float *)(param_1 + 0x7f4) == *(float *)(param_3 + 0x7f4))) {
    *(undefined4 *)(param_1 + 0x7f4) = *(undefined4 *)(param_2 + 0x7f4);
  }
  if ((param_3 == 0) || (*(float *)(param_1 + 0x7f8) == *(float *)(param_3 + 0x7f8))) {
    *(undefined4 *)(param_1 + 0x7f8) = *(undefined4 *)(param_2 + 0x7f8);
  }
  if ((param_3 == 0) || (*(float *)(param_1 + 0x7fc) == *(float *)(param_3 + 0x7fc))) {
    *(undefined4 *)(param_1 + 0x7fc) = *(undefined4 *)(param_2 + 0x7fc);
  }
  if ((param_3 == 0) || (*(float *)(param_1 + 0x850) == *(float *)(param_3 + 0x850))) {
    *(undefined4 *)(param_1 + 0x850) = *(undefined4 *)(param_2 + 0x850);
  }
  if ((param_3 == 0) ||
     ((*(int *)(param_3 + 0x854) == *(int *)(param_1 + 0x854) &&
      (*(int *)(param_3 + 0x858) == *(int *)(param_1 + 0x858))))) {
    *(undefined8 *)(param_1 + 0x854) = *(undefined8 *)(param_2 + 0x854);
  }
  if ((param_3 == 0) || (*(int *)(param_3 + 0x85c) == *(int *)(param_1 + 0x85c))) {
    *(undefined4 *)(param_1 + 0x85c) = *(undefined4 *)(param_2 + 0x85c);
  }
  if ((param_3 == 0) || (*(float *)(param_1 + 0x860) == *(float *)(param_3 + 0x860))) {
    *(undefined4 *)(param_1 + 0x860) = *(undefined4 *)(param_2 + 0x860);
  }
  if (param_3 == 0) {
LAB_180268c62:
    FUN_180150240(param_1 + 0x868,param_2 + 0x868);
  }
  else {
    plVar3 = *(longlong **)(param_3 + 0x870);
    plVar11 = *(longlong **)(param_3 + 0x868);
    if (((*(longlong *)(param_1 + 0x870) - *(longlong *)(param_1 + 0x868) ^
         (longlong)plVar3 - (longlong)plVar11) & 0xfffffffffffffff0U) == 0) {
      if (plVar11 != plVar3) {
        lVar12 = *(longlong *)(param_1 + 0x868) - (longlong)plVar11;
        do {
          if ((*plVar11 != *(longlong *)((longlong)plVar11 + lVar12)) ||
             (plVar11[1] != *(longlong *)((longlong)plVar11 + lVar12 + 8))) goto LAB_180268c75;
          plVar11 = plVar11 + 2;
        } while (plVar11 != plVar3);
      }
      goto LAB_180268c62;
    }
  }
LAB_180268c75:
  if ((param_3 == 0) ||
     ((*(float *)(param_1 + 0x888) == *(float *)(param_3 + 0x888) &&
      (*(float *)(param_1 + 0x88c) == *(float *)(param_3 + 0x88c))))) {
    *(undefined8 *)(param_1 + 0x888) = *(undefined8 *)(param_2 + 0x888);
  }
  if ((param_3 == 0) ||
     ((*(float *)(param_1 + 0x890) == *(float *)(param_3 + 0x890) &&
      (*(float *)(param_1 + 0x894) == *(float *)(param_3 + 0x894))))) {
    *(undefined8 *)(param_1 + 0x890) = *(undefined8 *)(param_2 + 0x890);
  }
  if ((param_3 == 0) ||
     ((*(float *)(param_1 + 0x898) == *(float *)(param_3 + 0x898) &&
      (*(float *)(param_1 + 0x89c) == *(float *)(param_3 + 0x89c))))) {
    *(undefined8 *)(param_1 + 0x898) = *(undefined8 *)(param_2 + 0x898);
  }
  if ((param_3 == 0) ||
     ((*(float *)(param_1 + 0x8a0) == *(float *)(param_3 + 0x8a0) &&
      (*(float *)(param_1 + 0x8a4) == *(float *)(param_3 + 0x8a4))))) {
    *(undefined8 *)(param_1 + 0x8a0) = *(undefined8 *)(param_2 + 0x8a0);
  }
  if ((param_3 == 0) || (*(int *)(param_3 + 0x8a8) == *(int *)(param_1 + 0x8a8))) {
    *(undefined4 *)(param_1 + 0x8a8) = *(undefined4 *)(param_2 + 0x8a8);
  }
  if ((param_3 == 0) || (*(int *)(param_3 + 0x8ac) == *(int *)(param_1 + 0x8ac))) {
    *(undefined4 *)(param_1 + 0x8ac) = *(undefined4 *)(param_2 + 0x8ac);
  }
  if ((param_3 == 0) || (*(int *)(param_3 + 0x8b0) == *(int *)(param_1 + 0x8b0))) {
    *(undefined4 *)(param_1 + 0x8b0) = *(undefined4 *)(param_2 + 0x8b0);
  }
  if ((param_3 == 0) ||
     ((*(longlong *)(param_3 + 0x138) == *(longlong *)(param_1 + 0x138) &&
      (*(longlong *)(param_3 + 0x140) == *(longlong *)(param_1 + 0x140))))) {
    uVar7 = *(undefined8 *)(param_2 + 0x140);
    *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
    *(undefined8 *)(param_1 + 0x140) = uVar7;
  }
  if ((param_3 == 0) || (*(float *)(param_1 + 0xd0) == *(float *)(param_3 + 0xd0))) {
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  }
  if ((param_3 == 0) ||
     (((*(float *)(param_3 + 0x104) == *(float *)(param_1 + 0x104) &&
       (*(float *)(param_3 + 0x100) == *(float *)(param_1 + 0x100))) &&
      (cVar8 = func_0x000180417730(param_1 + 0x108,param_3 + 0x108), cVar8 != '\0')))) {
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
    FUN_180269810(param_1 + 0x108,param_2 + 0x108);
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
  }
  if (param_3 == 0) {
LAB_180268ecf:
    FUN_180627be0(param_1 + 0x8d8,param_2 + 0x8d8);
  }
  else {
    iVar2 = *(int *)(param_3 + 0x8e8);
    iVar10 = *(int *)(param_1 + 0x8e8);
    if (iVar2 == iVar10) {
      if (iVar2 != 0) {
        pbVar9 = *(byte **)(param_3 + 0x8e0);
        lVar12 = *(longlong *)(param_1 + 0x8e0) - (longlong)pbVar9;
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
  if (param_3 != 0) {
    iVar2 = *(int *)(param_3 + 0x8c8);
    iVar10 = *(int *)(param_1 + 0x8c8);
    if (iVar2 == iVar10) {
      if (iVar2 != 0) {
        pbVar9 = *(byte **)(param_3 + 0x8c0);
        lVar12 = *(longlong *)(param_1 + 0x8c0) - (longlong)pbVar9;
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
  FUN_180627be0(param_1 + 0x8b8,param_2 + 0x8b8);
LAB_180268f42:
  if ((param_3 == 0) || (*(int *)(param_3 + 0x80) == *(int *)(param_1 + 0x80))) {
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  }
  if ((param_3 == 0) || (*(int *)(param_3 + 0x84) == *(int *)(param_1 + 0x84))) {
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  }
  if ((param_3 == 0) || (*(int *)(param_3 + 0x68) == *(int *)(param_1 + 0x68))) {
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  }
  if ((param_3 == 0) || (*(float *)(param_1 + 0x8f8) == *(float *)(param_3 + 0x8f8))) {
    *(undefined4 *)(param_1 + 0x8f8) = *(undefined4 *)(param_2 + 0x8f8);
  }
  if ((param_3 == 0) ||
     (((ABS(*(float *)(param_3 + 0x810) - *(float *)(param_1 + 0x810)) < 0.01 &&
       (ABS(*(float *)(param_3 + 0x814) - *(float *)(param_1 + 0x814)) < 0.01)) &&
      (ABS(*(float *)(param_3 + 0x818) - *(float *)(param_1 + 0x818)) < 0.01)))) {
    uVar7 = *(undefined8 *)(param_2 + 0x818);
    *(undefined8 *)(param_1 + 0x810) = *(undefined8 *)(param_2 + 0x810);
    *(undefined8 *)(param_1 + 0x818) = uVar7;
  }
  if ((param_3 == 0) ||
     (((ABS(*(float *)(param_3 + 0x800) - *(float *)(param_1 + 0x800)) < 0.01 &&
       (ABS(*(float *)(param_3 + 0x804) - *(float *)(param_1 + 0x804)) < 0.01)) &&
      (ABS(*(float *)(param_3 + 0x808) - *(float *)(param_1 + 0x808)) < 0.01)))) {
    uVar7 = *(undefined8 *)(param_2 + 0x808);
    *(undefined8 *)(param_1 + 0x800) = *(undefined8 *)(param_2 + 0x800);
    *(undefined8 *)(param_1 + 0x808) = uVar7;
  }
  if ((param_3 == 0) ||
     (((ABS(*(float *)(param_3 + 0xdc) - *(float *)(param_1 + 0xdc)) < 0.01 &&
       (ABS(*(float *)(param_3 + 0xe0) - *(float *)(param_1 + 0xe0)) < 0.01)) &&
      (ABS(*(float *)(param_3 + 0xe4) - *(float *)(param_1 + 0xe4)) < 0.01)))) {
    uVar7 = *(undefined8 *)(param_2 + 0xe4);
    *(undefined8 *)(param_1 + 0xdc) = *(undefined8 *)(param_2 + 0xdc);
    *(undefined8 *)(param_1 + 0xe4) = uVar7;
  }
  if ((param_3 == 0) ||
     (((ABS(*(float *)(param_3 + 0xec) - *(float *)(param_1 + 0xec)) < 0.01 &&
       (ABS(*(float *)(param_3 + 0xf0) - *(float *)(param_1 + 0xf0)) < 0.01)) &&
      (ABS(*(float *)(param_3 + 0xf4) - *(float *)(param_1 + 0xf4)) < 0.01)))) {
    uVar7 = *(undefined8 *)(param_2 + 0xf4);
    *(undefined8 *)(param_1 + 0xec) = *(undefined8 *)(param_2 + 0xec);
    *(undefined8 *)(param_1 + 0xf4) = uVar7;
  }
  if ((param_3 == 0) ||
     (((ABS(*(float *)(param_3 + 0x820) - *(float *)(param_1 + 0x820)) < 0.01 &&
       (ABS(*(float *)(param_3 + 0x824) - *(float *)(param_1 + 0x824)) < 0.01)) &&
      (ABS(*(float *)(param_3 + 0x828) - *(float *)(param_1 + 0x828)) < 0.01)))) {
    uVar7 = *(undefined8 *)(param_2 + 0x828);
    *(undefined8 *)(param_1 + 0x820) = *(undefined8 *)(param_2 + 0x820);
    *(undefined8 *)(param_1 + 0x828) = uVar7;
  }
  if ((param_3 == 0) ||
     (((ABS(*(float *)(param_3 + 0x830) - *(float *)(param_1 + 0x830)) < 0.01 &&
       (ABS(*(float *)(param_3 + 0x834) - *(float *)(param_1 + 0x834)) < 0.01)) &&
      (ABS(*(float *)(param_3 + 0x838) - *(float *)(param_1 + 0x838)) < 0.01)))) {
    uVar7 = *(undefined8 *)(param_2 + 0x838);
    *(undefined8 *)(param_1 + 0x830) = *(undefined8 *)(param_2 + 0x830);
    *(undefined8 *)(param_1 + 0x838) = uVar7;
  }
  if ((param_3 == 0) ||
     (((ABS(*(float *)(param_3 + 0x840) - *(float *)(param_1 + 0x840)) < 0.01 &&
       (ABS(*(float *)(param_3 + 0x844) - *(float *)(param_1 + 0x844)) < 0.01)) &&
      (ABS(*(float *)(param_3 + 0x848) - *(float *)(param_1 + 0x848)) < 0.01)))) {
    uVar7 = *(undefined8 *)(param_2 + 0x848);
    *(undefined8 *)(param_1 + 0x840) = *(undefined8 *)(param_2 + 0x840);
    *(undefined8 *)(param_1 + 0x848) = uVar7;
  }
  if ((param_3 == 0) ||
     (((ABS(*(float *)(param_3 + 0x7e0) - *(float *)(param_1 + 0x7e0)) < 0.01 &&
       (ABS(*(float *)(param_3 + 0x7e4) - *(float *)(param_1 + 0x7e4)) < 0.01)) &&
      (ABS(*(float *)(param_3 + 0x7e8) - *(float *)(param_1 + 0x7e8)) < 0.01)))) {
    uVar7 = *(undefined8 *)(param_2 + 0x7e8);
    *(undefined8 *)(param_1 + 0x7e0) = *(undefined8 *)(param_2 + 0x7e0);
    *(undefined8 *)(param_1 + 0x7e8) = uVar7;
  }
  return;
}






