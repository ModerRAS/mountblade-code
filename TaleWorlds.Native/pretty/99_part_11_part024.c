#include "TaleWorlds.Native.Split.h"

// 99_part_11_part024.c - 6 个函数

// 函数: void FUN_1806f28f5(void)
void FUN_1806f28f5(void)

{
  undefined8 *unaff_RSI;
  undefined8 unaff_RDI;
  
  unaff_RSI[1] = unaff_RDI;
  *unaff_RSI = &UNK_18094bff0;
  unaff_RSI[2] = unaff_RDI;
  return;
}



longlong FUN_1806f29e0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  (**(code **)(*param_2 + 0x48))(param_2,param_1 + 0x48);
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 100);
  (**(code **)(*param_2 + 0x58))(param_2,param_1 + 0x70);
  (**(code **)(*param_2 + 0x80))(param_2,param_1 + 0x84);
  uVar4 = (**(code **)(*param_2 + 0x90))(param_2);
  *(undefined4 *)(param_1 + 0x88) = uVar4;
  uVar4 = (**(code **)(*param_2 + 0xa0))(param_2);
  *(undefined4 *)(param_1 + 0x8c) = uVar4;
  uVar4 = (**(code **)(*param_2 + 0xb0))(param_2);
  *(undefined4 *)(param_1 + 0x90) = uVar4;
  uVar4 = (**(code **)(*param_2 + 0xc0))(param_2);
  *(undefined4 *)(param_1 + 0x94) = uVar4;
  uVar1 = (**(code **)(*param_2 + 200))(param_2);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0xd8))(param_2);
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0xe0))(param_2);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  *(longlong *)(param_1 + 0xb0) = param_2[2];
  (**(code **)(*param_2 + 0x30))(param_2,param_1,param_1 + 8);
  uVar3 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x28);
  do {
    (**(code **)(*param_2 + 0x40))(param_2,&uStack_28,uVar3);
    uVar3 = uVar3 + 1;
    *(undefined8 *)(puVar2 + -6) = uStack_28;
    *(undefined8 *)(puVar2 + -4) = uStack_20;
    puVar2[-2] = uStack_18;
    *puVar2 = uStack_10;
    puVar2[-1] = uStack_14;
    puVar2 = puVar2 + 7;
  } while (uVar3 < 2);
  (**(code **)(*param_2 + 0x68))(param_2,param_1 + 0x7c,param_1 + 0x80);
  return param_1;
}



longlong FUN_1806f2e40(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_1806f29e0();
  uVar5 = (**(code **)(*param_2 + 0xf8))(param_2);
  *(undefined4 *)(param_1 + 0xd0) = uVar5;
  uVar5 = (**(code **)(*param_2 + 0xf8))(param_2);
  *(undefined4 *)(param_1 + 0xd4) = uVar5;
  uVar5 = (**(code **)(*param_2 + 0x100))(param_2);
  *(undefined4 *)(param_1 + 0xd8) = uVar5;
  uVar5 = (**(code **)(*param_2 + 0x108))(param_2);
  *(undefined4 *)(param_1 + 0xdc) = uVar5;
  (**(code **)(*param_2 + 0x118))(param_2,param_1 + 0xe0);
  (**(code **)(*param_2 + 0x118))(param_2,param_1 + 0xf8);
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x110);
  (**(code **)(*param_2 + 0x148))(param_2,param_1 + 300);
  (**(code **)(*param_2 + 0x158))(param_2,param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x174) = 0x7f7fffff;
  uVar4 = 0;
  *(undefined8 *)(param_1 + 0x16c) = 0;
  *(undefined8 *)(param_1 + 0x17c) = 0;
  *(undefined8 *)(param_1 + 0x184) = 0x7f7fffff;
  *(undefined8 *)(param_1 + 0x18c) = 0;
  *(undefined8 *)(param_1 + 0x194) = 0x7f7fffff;
  *(undefined8 *)(param_1 + 0x19c) = 0;
  *(undefined8 *)(param_1 + 0x1a4) = 0x7f7fffff;
  *(undefined8 *)(param_1 + 0x1ac) = 0;
  *(undefined8 *)(param_1 + 0x1b4) = 0x7f7fffff;
  *(undefined8 *)(param_1 + 0x1bc) = 0;
  *(undefined8 *)(param_1 + 0x1c4) = 0x7f7fffff;
  (**(code **)(*param_2 + 0x178))(param_2,param_1 + 0x1cc);
  uVar5 = (**(code **)(*param_2 + 0x198))(param_2);
  *(undefined4 *)(param_1 + 0x1e8) = uVar5;
  uVar5 = (**(code **)(*param_2 + 0x1a8))(param_2);
  *(undefined4 *)(param_1 + 0x1ec) = uVar5;
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  *(undefined8 *)(param_1 + 0x1f0) = uVar1;
  puVar3 = (undefined4 *)(param_1 + 0xb8);
  uVar2 = uVar4;
  do {
    uVar5 = (**(code **)(*param_2 + 0xf0))(param_2,uVar2);
    uVar2 = uVar2 + 1;
    *puVar3 = uVar5;
    puVar3 = puVar3 + 1;
  } while (uVar2 < 6);
  puVar3 = (undefined4 *)(param_1 + 0x174);
  do {
    (**(code **)(*param_2 + 0x168))(param_2,&uStack_18,uVar4);
    uVar4 = uVar4 + 1;
    puVar3[-2] = uStack_18;
    *puVar3 = uStack_10;
    puVar3[-1] = uStack_14;
    puVar3[1] = uStack_c;
    puVar3 = puVar3 + 4;
  } while (uVar4 < 6);
  return param_1;
}



longlong FUN_1806f3080(longlong param_1)

{
  func_0x0001806f2b60();
  *(undefined4 *)(param_1 + 0x1e0) = 0x16c;
  *(undefined **)(param_1 + 0x1d8) = &UNK_18094e5a4;
  *(undefined **)(param_1 + 0x1e8) = &UNK_1806f4890;
  *(undefined **)(param_1 + 0x1f0) = &UNK_1806f48a0;
  *(undefined **)(param_1 + 0x1f8) = &UNK_18094e5b0;
  *(undefined **)(param_1 + 0x208) = &UNK_1806f48b0;
  *(undefined4 *)(param_1 + 0x200) = 0x16d;
  *(undefined **)(param_1 + 0x210) = &UNK_18094e5bc;
  *(undefined **)(param_1 + 0x220) = &UNK_1806f48c0;
  *(undefined4 *)(param_1 + 0x218) = 0x16e;
  *(undefined **)(param_1 + 0x228) = &UNK_18094e5c8;
  *(undefined **)(param_1 + 0x238) = &UNK_1806f48d0;
  *(undefined4 *)(param_1 + 0x230) = 0x16f;
  *(undefined **)(param_1 + 0x240) = &UNK_18094e5d8;
  *(undefined **)(param_1 + 0x250) = &UNK_1806f48e0;
  *(undefined4 *)(param_1 + 0x248) = 0x170;
  *(undefined **)(param_1 + 600) = &UNK_18094e5e8;
  *(code **)(param_1 + 0x268) = FUN_1806f4900;
  *(undefined **)(param_1 + 0x270) = &UNK_1806f48f0;
  *(undefined4 *)(param_1 + 0x260) = 0x171;
  *(undefined **)(param_1 + 0x278) = &UNK_18094e5f8;
  *(code **)(param_1 + 0x288) = FUN_1806f4940;
  *(undefined **)(param_1 + 0x290) = &UNK_1806f4930;
  *(undefined4 *)(param_1 + 0x280) = 0x172;
  *(undefined **)(param_1 + 0x298) = &UNK_18094e608;
  *(code **)(param_1 + 0x2a8) = FUN_1806f4980;
  *(undefined **)(param_1 + 0x2b0) = &UNK_1806f4970;
  *(undefined4 *)(param_1 + 0x2a0) = 0x173;
  *(undefined **)(param_1 + 0x2b8) = &UNK_18094e618;
  *(code **)(param_1 + 0x2c8) = FUN_1806f49c0;
  *(undefined **)(param_1 + 0x2d0) = &UNK_1806f49b0;
  *(undefined4 *)(param_1 + 0x2c0) = 0x174;
  *(undefined **)(param_1 + 0x2d8) = &UNK_18094e628;
  *(code **)(param_1 + 0x2e8) = FUN_1806f4a00;
  *(undefined **)(param_1 + 0x2f0) = &UNK_1806f49f0;
  *(undefined4 *)(param_1 + 0x2e0) = 0x175;
  *(undefined **)(param_1 + 0x2f8) = &UNK_18094e63c;
  *(undefined **)(param_1 + 0x308) = &UNK_1806f4a30;
  *(code **)(param_1 + 0x310) = FUN_1806f4a40;
  *(undefined4 *)(param_1 + 0x300) = 0x176;
  *(undefined **)(param_1 + 0x318) = &UNK_18094e648;
  *(code **)(param_1 + 0x328) = FUN_1806f4a90;
  *(undefined **)(param_1 + 0x330) = &UNK_1806f4a70;
  *(undefined4 *)(param_1 + 800) = 0x177;
  *(undefined **)(param_1 + 0x338) = &UNK_18094e658;
  *(undefined4 *)(param_1 + 0x340) = 0x178;
  *(undefined **)(param_1 + 0x348) = &UNK_1806f4ad0;
  *(undefined **)(param_1 + 0x350) = &UNK_1806f4ac0;
  *(undefined **)(param_1 + 0x358) = &UNK_18094e678;
  *(undefined **)(param_1 + 0x368) = &UNK_1806f4af0;
  *(undefined **)(param_1 + 0x370) = &UNK_1806f4ae0;
  *(undefined4 *)(param_1 + 0x360) = 0x179;
  *(undefined **)(param_1 + 0x378) = &UNK_18094e698;
  *(undefined **)(param_1 + 0x388) = &UNK_1806f4b00;
  *(undefined4 *)(param_1 + 0x380) = 0x17a;
  return param_1;
}



longlong FUN_1806f3370(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  FUN_1806f29e0();
  uVar2 = (**(code **)(*param_2 + 0xe8))(param_2);
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x108))(param_2);
  *(undefined4 *)(param_1 + 0xc0) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x118))(param_2);
  *(undefined4 *)(param_1 + 0xc4) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x128))(param_2);
  *(undefined4 *)(param_1 + 200) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x138))(param_2);
  *(undefined4 *)(param_1 + 0xcc) = uVar2;
  (**(code **)(*param_2 + 0x150))(param_2,param_1 + 0xd0);
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  return param_1;
}



longlong FUN_1806f3440(longlong param_1)

{
  func_0x0001806f2b60();
  *(undefined4 *)(param_1 + 0x1e0) = 0x17d;
  *(undefined **)(param_1 + 0x1d8) = &UNK_18094e6b0;
  *(undefined **)(param_1 + 0x1e8) = &UNK_1806f4b10;
  *(undefined **)(param_1 + 0x1f0) = &UNK_18094e6c0;
  *(undefined **)(param_1 + 0x200) = &UNK_1806f4b30;
  *(undefined **)(param_1 + 0x208) = &UNK_1806f4b20;
  *(undefined4 *)(param_1 + 0x1f8) = 0x17e;
  *(undefined **)(param_1 + 0x210) = &UNK_18094e6d0;
  *(undefined **)(param_1 + 0x220) = &UNK_1806f4b50;
  *(undefined **)(param_1 + 0x228) = &UNK_1806f4b40;
  *(undefined4 *)(param_1 + 0x218) = 0x17f;
  *(undefined **)(param_1 + 0x230) = &UNK_18094e6e0;
  *(undefined **)(param_1 + 0x240) = &UNK_1806f4b70;
  *(undefined **)(param_1 + 0x248) = &UNK_1806f4b60;
  *(undefined4 *)(param_1 + 0x238) = 0x180;
  *(undefined **)(param_1 + 0x250) = &UNK_18094e6f0;
  *(undefined **)(param_1 + 0x260) = &UNK_1806f4b90;
  *(undefined **)(param_1 + 0x268) = &UNK_1806f4b80;
  *(undefined4 *)(param_1 + 600) = 0x181;
  *(undefined **)(param_1 + 0x270) = &UNK_18094e700;
  *(undefined **)(param_1 + 0x280) = &UNK_1806f4bb0;
  *(undefined **)(param_1 + 0x288) = &UNK_1806f4ba0;
  *(undefined4 *)(param_1 + 0x278) = 0x182;
  *(undefined **)(param_1 + 0x290) = &UNK_18094e708;
  *(code **)(param_1 + 0x2a0) = FUN_1806f4bf0;
  *(code **)(param_1 + 0x2a8) = FUN_1806f4bc0;
  *(undefined4 *)(param_1 + 0x298) = 0x183;
  *(undefined **)(param_1 + 0x2b0) = &UNK_18094e698;
  *(undefined **)(param_1 + 0x2c0) = &UNK_1806f4c20;
  *(undefined4 *)(param_1 + 0x2b8) = 0x184;
  return param_1;
}



longlong FUN_1806f35f0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  FUN_1806f29e0();
  (**(code **)(*param_2 + 0x100))(param_2,param_1 + 0xb8);
  (**(code **)(*param_2 + 0x108))(param_2,param_1 + 0xc4);
  uVar2 = (**(code **)(*param_2 + 0x110))(param_2);
  *(undefined4 *)(param_1 + 0xd0) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x118))(param_2);
  *(undefined4 *)(param_1 + 0xd4) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x128))(param_2);
  *(undefined4 *)(param_1 + 0xd8) = uVar2;
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  return param_1;
}



longlong FUN_1806f3690(longlong param_1)

{
  func_0x0001806f2b60();
  *(undefined4 *)(param_1 + 0x1e0) = 0x187;
  *(undefined **)(param_1 + 0x1d8) = &UNK_18094e720;
  *(code **)(param_1 + 0x1e8) = FUN_1806f4c40;
  *(undefined **)(param_1 + 0x1f0) = &UNK_1806f4c30;
  *(undefined **)(param_1 + 0x1f8) = &UNK_18094e728;
  *(code **)(param_1 + 0x208) = FUN_1806f4c80;
  *(undefined **)(param_1 + 0x210) = &UNK_1806f4c70;
  *(undefined4 *)(param_1 + 0x200) = 0x188;
  *(undefined **)(param_1 + 0x218) = &UNK_18094e738;
  *(undefined **)(param_1 + 0x228) = &UNK_1806f4cc0;
  *(undefined **)(param_1 + 0x230) = &UNK_1806f4cb0;
  *(undefined4 *)(param_1 + 0x220) = 0x189;
  *(undefined **)(param_1 + 0x238) = &UNK_18094e748;
  *(undefined **)(param_1 + 0x248) = &UNK_1806f4ce0;
  *(undefined **)(param_1 + 0x250) = &UNK_1806f4cd0;
  *(undefined4 *)(param_1 + 0x240) = 0x18a;
  *(undefined **)(param_1 + 600) = &UNK_18094e758;
  *(undefined **)(param_1 + 0x268) = &UNK_1806f4d00;
  *(undefined **)(param_1 + 0x270) = &UNK_1806f4cf0;
  *(undefined4 *)(param_1 + 0x260) = 0x18b;
  *(undefined **)(param_1 + 0x278) = &UNK_18094e698;
  *(undefined **)(param_1 + 0x288) = &UNK_1806f4d10;
  *(undefined4 *)(param_1 + 0x280) = 0x18c;
  return param_1;
}



longlong FUN_1806f37e0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  FUN_1806f29e0();
  uVar2 = (**(code **)(*param_2 + 0xf0))(param_2);
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x100))(param_2);
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  return param_1;
}



longlong FUN_1806f3850(longlong param_1)

{
  func_0x0001806f2b60();
  *(undefined4 *)(param_1 + 0x1e0) = 399;
  *(undefined **)(param_1 + 0x1d8) = &UNK_18094e658;
  *(undefined **)(param_1 + 0x1e8) = &UNK_1806f4d30;
  *(undefined **)(param_1 + 0x1f0) = &UNK_1806f4d20;
  *(undefined **)(param_1 + 0x1f8) = &UNK_18094e678;
  *(undefined **)(param_1 + 0x208) = &UNK_1806f4d50;
  *(undefined **)(param_1 + 0x210) = &UNK_1806f4d40;
  *(undefined4 *)(param_1 + 0x200) = 400;
  *(undefined **)(param_1 + 0x218) = &UNK_18094e698;
  *(undefined **)(param_1 + 0x228) = &UNK_1806f4d60;
  *(undefined4 *)(param_1 + 0x220) = 0x191;
  return param_1;
}



longlong FUN_1806f3900(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  FUN_1806f29e0();
  uVar2 = (**(code **)(*param_2 + 0xe8))(param_2);
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0xf0))(param_2);
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  (**(code **)(*param_2 + 0x100))(param_2,param_1 + 0xc0);
  (**(code **)(*param_2 + 0x118))(param_2,param_1 + 0xdc);
  uVar2 = (**(code **)(*param_2 + 0x128))(param_2);
  *(undefined4 *)(param_1 + 0xe0) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x138))(param_2);
  *(undefined4 *)(param_1 + 0xe4) = uVar2;
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  *(undefined8 *)(param_1 + 0xe8) = uVar1;
  return param_1;
}



longlong FUN_1806f39b0(longlong param_1)

{
  func_0x0001806f2b60();
  *(undefined4 *)(param_1 + 0x1e0) = 0x194;
  *(undefined **)(param_1 + 0x1d8) = &UNK_18094e768;
  *(undefined **)(param_1 + 0x1e8) = &UNK_1806f4d70;
  *(undefined **)(param_1 + 0x1f0) = &UNK_18094e778;
  *(undefined **)(param_1 + 0x200) = &UNK_1806f4d80;
  *(undefined4 *)(param_1 + 0x1f8) = 0x195;
  *(undefined **)(param_1 + 0x208) = &UNK_18094e784;
  *(code **)(param_1 + 0x218) = FUN_1806f4da0;
  *(undefined **)(param_1 + 0x220) = &UNK_1806f4d90;
  *(undefined4 *)(param_1 + 0x210) = 0x196;
  *(undefined **)(param_1 + 0x228) = &UNK_18094e790;
  *(code **)(param_1 + 0x238) = FUN_1806f4e00;
  *(code **)(param_1 + 0x240) = FUN_1806f4dd0;
  *(undefined4 *)(param_1 + 0x230) = 0x197;
  *(undefined **)(param_1 + 0x248) = &UNK_18094e658;
  *(undefined **)(param_1 + 600) = &UNK_1806f4e40;
  *(undefined **)(param_1 + 0x260) = &UNK_1806f4e30;
  *(undefined4 *)(param_1 + 0x250) = 0x198;
  *(undefined **)(param_1 + 0x268) = &UNK_18094e678;
  *(undefined **)(param_1 + 0x278) = &UNK_1806f4e60;
  *(undefined **)(param_1 + 0x280) = &UNK_1806f4e50;
  *(undefined4 *)(param_1 + 0x270) = 0x199;
  *(undefined **)(param_1 + 0x288) = &UNK_18094e698;
  *(undefined **)(param_1 + 0x298) = &UNK_1806f4e70;
  *(undefined4 *)(param_1 + 0x290) = 0x19a;
  return param_1;
}



longlong FUN_1806f3b10(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  FUN_1806f29e0();
  uVar2 = (**(code **)(*param_2 + 0xe8))(param_2);
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0xf0))(param_2);
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  (**(code **)(*param_2 + 0x100))(param_2,param_1 + 0xc0);
  uVar2 = (**(code **)(*param_2 + 0x110))(param_2);
  *(undefined4 *)(param_1 + 0xdc) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x120))(param_2);
  *(undefined4 *)(param_1 + 0xe0) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x130))(param_2);
  *(undefined4 *)(param_1 + 0xe4) = uVar2;
  (**(code **)(*param_2 + 0x148))(param_2,param_1 + 0xe8);
  uVar2 = (**(code **)(*param_2 + 0x158))(param_2);
  *(undefined4 *)(param_1 + 0xec) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x168))(param_2);
  *(undefined4 *)(param_1 + 0xf0) = uVar2;
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  return param_1;
}



longlong FUN_1806f3c00(longlong param_1)

{
  func_0x0001806f2b60();
  *(undefined4 *)(param_1 + 0x1e0) = 0x19d;
  *(undefined **)(param_1 + 0x1d8) = &UNK_18094e7a4;
  *(undefined **)(param_1 + 0x1e8) = &UNK_1806f4e80;
  *(undefined **)(param_1 + 0x1f0) = &UNK_18094e778;
  *(undefined **)(param_1 + 0x200) = &UNK_1806f4e90;
  *(undefined4 *)(param_1 + 0x1f8) = 0x19e;
  *(undefined **)(param_1 + 0x208) = &UNK_18094e784;
  *(code **)(param_1 + 0x218) = FUN_1806f4eb0;
  *(undefined **)(param_1 + 0x220) = &UNK_1806f4ea0;
  *(undefined4 *)(param_1 + 0x210) = 0x19f;
  *(undefined **)(param_1 + 0x228) = &UNK_18094e7b0;
  *(undefined **)(param_1 + 0x238) = &UNK_1806f4f00;
  *(undefined **)(param_1 + 0x240) = &UNK_1806f4ee0;
  *(undefined4 *)(param_1 + 0x230) = 0x1a0;
  *(undefined **)(param_1 + 0x248) = &UNK_18094e7c0;
  *(undefined **)(param_1 + 600) = &UNK_1806f4f20;
  *(undefined **)(param_1 + 0x260) = &UNK_1806f4f10;
  *(undefined4 *)(param_1 + 0x250) = 0x1a1;
  *(undefined **)(param_1 + 0x268) = &UNK_18094e7d0;
  *(undefined **)(param_1 + 0x278) = &UNK_1806f4f40;
  *(undefined **)(param_1 + 0x280) = &UNK_1806f4f30;
  *(undefined4 *)(param_1 + 0x270) = 0x1a2;
  *(undefined **)(param_1 + 0x288) = &UNK_18094e7e0;
  *(code **)(param_1 + 0x298) = FUN_1806f4f80;
  *(code **)(param_1 + 0x2a0) = FUN_1806f4f50;
  *(undefined4 *)(param_1 + 0x290) = 0x1a3;
  *(undefined **)(param_1 + 0x2a8) = &UNK_18094e658;
  *(undefined **)(param_1 + 0x2b8) = &UNK_1806f4fc0;
  *(undefined **)(param_1 + 0x2c0) = &UNK_1806f4fb0;
  *(undefined4 *)(param_1 + 0x2b0) = 0x1a4;
  *(undefined **)(param_1 + 0x2c8) = &UNK_18094e678;
  *(undefined **)(param_1 + 0x2d8) = &UNK_1806f4fe0;
  *(undefined **)(param_1 + 0x2e0) = &UNK_1806f4fd0;
  *(undefined4 *)(param_1 + 0x2d0) = 0x1a5;
  *(undefined **)(param_1 + 0x2e8) = &UNK_18094e698;
  *(undefined **)(param_1 + 0x2f8) = &UNK_1806f4ff0;
  *(undefined4 *)(param_1 + 0x2f0) = 0x1a6;
  return param_1;
}



longlong FUN_1806f3e00(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  FUN_1806f29e0();
  (**(code **)(*param_2 + 0xe8))(param_2,param_1 + 0xb8);
  uVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
  *(undefined4 *)(param_1 + 0xd4) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x100))(param_2);
  *(undefined4 *)(param_1 + 0xd8) = uVar2;
  (**(code **)(*param_2 + 0x118))(param_2,param_1 + 0xdc);
  uVar2 = (**(code **)(*param_2 + 0x128))(param_2);
  *(undefined4 *)(param_1 + 0xe0) = uVar2;
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  *(undefined8 *)(param_1 + 0xe8) = uVar1;
  return param_1;
}



longlong FUN_1806f3ea0(longlong param_1)

{
  func_0x0001806f2b60();
  *(undefined4 *)(param_1 + 0x1e0) = 0x1a9;
  *(undefined **)(param_1 + 0x1d8) = &UNK_18094e7f8;
  *(code **)(param_1 + 0x1e8) = FUN_1806f5010;
  *(undefined **)(param_1 + 0x1f0) = &UNK_1806f5000;
  *(undefined **)(param_1 + 0x1f8) = &UNK_18094e5c8;
  *(undefined **)(param_1 + 0x208) = &UNK_1806f5040;
  *(undefined4 *)(param_1 + 0x200) = 0x1aa;
  *(undefined **)(param_1 + 0x210) = &UNK_18094e5d8;
  *(undefined **)(param_1 + 0x220) = &UNK_1806f5050;
  *(undefined4 *)(param_1 + 0x218) = 0x1ab;
  *(undefined **)(param_1 + 0x228) = &UNK_18094e808;
  *(code **)(param_1 + 0x238) = FUN_1806f5090;
  *(code **)(param_1 + 0x240) = FUN_1806f5060;
  *(undefined4 *)(param_1 + 0x230) = 0x1ac;
  *(undefined **)(param_1 + 0x248) = &UNK_18094e658;
  *(undefined **)(param_1 + 600) = &UNK_1806f50d0;
  *(undefined **)(param_1 + 0x260) = &UNK_1806f50c0;
  *(undefined4 *)(param_1 + 0x250) = 0x1ad;
  *(undefined **)(param_1 + 0x268) = &UNK_18094e698;
  *(undefined **)(param_1 + 0x278) = &UNK_1806f50e0;
  *(undefined4 *)(param_1 + 0x270) = 0x1ae;
  return param_1;
}



longlong FUN_1806f4110(longlong param_1)

{
  func_0x0001806f4000();
  *(undefined4 *)(param_1 + 0xa8) = 0x1b8;
  *(undefined **)(param_1 + 0xa0) = &DAT_1809fd7b0;
  *(undefined **)(param_1 + 0xb0) = &UNK_1806f5120;
  *(undefined **)(param_1 + 0xb8) = &UNK_1806f51c0;
  return param_1;
}



longlong FUN_1806f41b0(longlong param_1)

{
  func_0x0001806f4000();
  *(undefined4 *)(param_1 + 0xa8) = 0x1bb;
  *(undefined **)(param_1 + 0xa0) = &UNK_18094e840;
  *(undefined **)(param_1 + 0xb0) = &UNK_1806f5120;
  *(undefined **)(param_1 + 0xb8) = &UNK_1806f51c0;
  *(undefined **)(param_1 + 0xc0) = &DAT_180a1fdf0;
  *(undefined **)(param_1 + 0xd0) = &UNK_1806f5110;
  *(undefined **)(param_1 + 0xd8) = &UNK_1806f51b0;
  *(undefined4 *)(param_1 + 200) = 0x1bc;
  return param_1;
}



longlong FUN_1806f4280(longlong param_1)

{
  func_0x0001806f4000();
  *(undefined4 *)(param_1 + 0xa8) = 0x1bf;
  *(undefined **)(param_1 + 0xa0) = &UNK_18094e840;
  *(undefined **)(param_1 + 0xb0) = &UNK_1806f5120;
  *(undefined **)(param_1 + 0xb8) = &UNK_1806f51c0;
  *(undefined **)(param_1 + 0xc0) = &DAT_180a1fdf0;
  *(undefined **)(param_1 + 0xd0) = &UNK_1806f5110;
  *(undefined **)(param_1 + 0xd8) = &UNK_1806f51b0;
  *(undefined4 *)(param_1 + 200) = 0x1c0;
  return param_1;
}



longlong FUN_1806f4350(longlong param_1)

{
  func_0x0001806f4000();
  *(undefined4 *)(param_1 + 0xa8) = 0x1c3;
  *(undefined **)(param_1 + 0xa0) = &UNK_18094e848;
  *(undefined **)(param_1 + 0xb0) = &UNK_1806f5120;
  *(undefined **)(param_1 + 0xb8) = &UNK_1806f51c0;
  *(undefined **)(param_1 + 0xc0) = &UNK_18094e850;
  *(undefined **)(param_1 + 0xd0) = &UNK_1806f5110;
  *(undefined **)(param_1 + 0xd8) = &UNK_1806f51b0;
  *(undefined4 *)(param_1 + 200) = 0x1c4;
  return param_1;
}



longlong FUN_1806f4420(longlong param_1)

{
  func_0x0001806f4000();
  *(undefined4 *)(param_1 + 0xa8) = 0x1c7;
  *(undefined **)(param_1 + 0xa0) = &UNK_18094e858;
  *(undefined **)(param_1 + 0xb0) = &UNK_1806f5120;
  *(undefined **)(param_1 + 0xb8) = &UNK_1806f51c0;
  *(undefined **)(param_1 + 0xc0) = &UNK_18094e868;
  *(undefined **)(param_1 + 0xd0) = &UNK_1806f5110;
  *(undefined **)(param_1 + 0xd8) = &UNK_1806f51b0;
  *(undefined4 *)(param_1 + 200) = 0x1c8;
  *(undefined **)(param_1 + 0xe0) = &UNK_18094e878;
  *(undefined **)(param_1 + 0xf0) = &UNK_1806f5180;
  *(undefined **)(param_1 + 0xf8) = &UNK_18044e330;
  *(undefined4 *)(param_1 + 0xe8) = 0x1c9;
  *(undefined **)(param_1 + 0x100) = &UNK_18094e888;
  *(undefined **)(param_1 + 0x110) = &UNK_1806f5170;
  *(undefined **)(param_1 + 0x118) = &UNK_1806f51f0;
  *(undefined4 *)(param_1 + 0x108) = 0x1ca;
  return param_1;
}



undefined8 FUN_1806f4690(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x40))(param_2,param_1);
  return param_1;
}



undefined8 FUN_1806f46c0(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x48))(param_2,param_1);
  return param_1;
}



undefined8 FUN_1806f46f0(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x50))(param_2,param_1);
  return param_1;
}



undefined8 FUN_1806f4720(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x58))(param_2,param_1);
  return param_1;
}






// 函数: void FUN_1806f4770(longlong *param_1,undefined2 *param_2)
void FUN_1806f4770(longlong *param_1,undefined2 *param_2)

{
  undefined2 auStackX_8 [16];
  
  auStackX_8[0] = *param_2;
  (**(code **)(*param_1 + 0x70))(param_1,auStackX_8);
  return;
}



undefined8 FUN_1806f47a0(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x80))(param_2,param_1);
  return param_1;
}



undefined8 FUN_1806f4900(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x118))(param_2,param_1);
  return param_1;
}



undefined8 FUN_1806f4940(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x118))(param_2,param_1);
  return param_1;
}



undefined8 FUN_1806f4980(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x138))(param_2,param_1);
  return param_1;
}



undefined8 FUN_1806f49c0(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x148))(param_2,param_1);
  return param_1;
}



undefined8 FUN_1806f4a00(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x158))(param_2,param_1);
  return param_1;
}



undefined8 FUN_1806f4a40(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x168))(param_2,param_1);
  return param_1;
}



undefined8 FUN_1806f4a90(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x178))(param_2,param_1);
  return param_1;
}






// 函数: void FUN_1806f4bc0(longlong *param_1,undefined2 *param_2)
void FUN_1806f4bc0(longlong *param_1,undefined2 *param_2)

{
  undefined2 auStackX_8 [16];
  
  auStackX_8[0] = *param_2;
  (**(code **)(*param_1 + 0x140))(param_1,auStackX_8);
  return;
}



undefined8 FUN_1806f4bf0(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x150))(param_2,param_1);
  return param_1;
}



undefined8 FUN_1806f4c40(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x100))(param_2,param_1);
  return param_1;
}



undefined8 FUN_1806f4c80(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x108))(param_2,param_1);
  return param_1;
}



undefined8 FUN_1806f4da0(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x100))(param_2,param_1);
  return param_1;
}






// 函数: void FUN_1806f4dd0(longlong *param_1,undefined2 *param_2)
void FUN_1806f4dd0(longlong *param_1,undefined2 *param_2)

{
  undefined2 auStackX_8 [16];
  
  auStackX_8[0] = *param_2;
  (**(code **)(*param_1 + 0x108))(param_1,auStackX_8);
  return;
}



undefined8 FUN_1806f4e00(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x118))(param_2,param_1);
  return param_1;
}



undefined8 FUN_1806f4eb0(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x100))(param_2,param_1);
  return param_1;
}






// 函数: void FUN_1806f4f50(longlong *param_1,undefined2 *param_2)
void FUN_1806f4f50(longlong *param_1,undefined2 *param_2)

{
  undefined2 auStackX_8 [16];
  
  auStackX_8[0] = *param_2;
  (**(code **)(*param_1 + 0x138))(param_1,auStackX_8);
  return;
}



undefined8 FUN_1806f4f80(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x148))(param_2,param_1);
  return param_1;
}



undefined8 FUN_1806f5010(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0xe8))(param_2,param_1);
  return param_1;
}






// 函数: void FUN_1806f5060(longlong *param_1,undefined2 *param_2)
void FUN_1806f5060(longlong *param_1,undefined2 *param_2)

{
  undefined2 auStackX_8 [16];
  
  auStackX_8[0] = *param_2;
  (**(code **)(*param_1 + 0x108))(param_1,auStackX_8);
  return;
}



undefined8 FUN_1806f5090(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x118))(param_2,param_1);
  return param_1;
}






