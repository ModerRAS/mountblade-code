#include "TaleWorlds.Native.Split.h"

// 99_part_11_part024.c - 6 个函数

// 函数: void FUN_1806f28f5(void)
void FUN_1806f28f5(void)

{
  uint64_t *unaff_RSI;
  uint64_t unaff_RDI;
  
  unaff_RSI[1] = unaff_RDI;
  *unaff_RSI = &UNK_18094bff0;
  unaff_RSI[2] = unaff_RDI;
  return;
}



longlong FUN_1806f29e0(longlong param_1,longlong *param_2)

{
  uint64_t uVar1;
  int32_t *puVar2;
  uint uVar3;
  int32_t uVar4;
  uint64_t uStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  
  (**(code **)(*param_2 + 0x48))(param_2,param_1 + 0x48);
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 100);
  (**(code **)(*param_2 + 0x58))(param_2,param_1 + 0x70);
  (**(code **)(*param_2 + 0x80))(param_2,param_1 + 0x84);
  uVar4 = (**(code **)(*param_2 + 0x90))(param_2);
  *(int32_t *)(param_1 + 0x88) = uVar4;
  uVar4 = (**(code **)(*param_2 + 0xa0))(param_2);
  *(int32_t *)(param_1 + 0x8c) = uVar4;
  uVar4 = (**(code **)(*param_2 + 0xb0))(param_2);
  *(int32_t *)(param_1 + 0x90) = uVar4;
  uVar4 = (**(code **)(*param_2 + 0xc0))(param_2);
  *(int32_t *)(param_1 + 0x94) = uVar4;
  uVar1 = (**(code **)(*param_2 + 200))(param_2);
  *(uint64_t *)(param_1 + 0x98) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0xd8))(param_2);
  *(uint64_t *)(param_1 + 0xa0) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0xe0))(param_2);
  *(uint64_t *)(param_1 + 0xa8) = uVar1;
  *(longlong *)(param_1 + 0xb0) = param_2[2];
  (**(code **)(*param_2 + 0x30))(param_2,param_1,param_1 + 8);
  uVar3 = 0;
  puVar2 = (int32_t *)(param_1 + 0x28);
  do {
    (**(code **)(*param_2 + 0x40))(param_2,&uStack_28,uVar3);
    uVar3 = uVar3 + 1;
    *(uint64_t *)(puVar2 + -6) = uStack_28;
    *(uint64_t *)(puVar2 + -4) = uStack_20;
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
  uint64_t uVar1;
  uint uVar2;
  int32_t *puVar3;
  uint uVar4;
  int32_t uVar5;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  FUN_1806f29e0();
  uVar5 = (**(code **)(*param_2 + 0xf8))(param_2);
  *(int32_t *)(param_1 + 0xd0) = uVar5;
  uVar5 = (**(code **)(*param_2 + 0xf8))(param_2);
  *(int32_t *)(param_1 + 0xd4) = uVar5;
  uVar5 = (**(code **)(*param_2 + 0x100))(param_2);
  *(int32_t *)(param_1 + 0xd8) = uVar5;
  uVar5 = (**(code **)(*param_2 + 0x108))(param_2);
  *(int32_t *)(param_1 + 0xdc) = uVar5;
  (**(code **)(*param_2 + 0x118))(param_2,param_1 + 0xe0);
  (**(code **)(*param_2 + 0x118))(param_2,param_1 + 0xf8);
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x110);
  (**(code **)(*param_2 + 0x148))(param_2,param_1 + 300);
  (**(code **)(*param_2 + 0x158))(param_2,param_1 + 0x148);
  *(uint64_t *)(param_1 + 0x174) = 0x7f7fffff;
  uVar4 = 0;
  *(uint64_t *)(param_1 + 0x16c) = 0;
  *(uint64_t *)(param_1 + 0x17c) = 0;
  *(uint64_t *)(param_1 + 0x184) = 0x7f7fffff;
  *(uint64_t *)(param_1 + 0x18c) = 0;
  *(uint64_t *)(param_1 + 0x194) = 0x7f7fffff;
  *(uint64_t *)(param_1 + 0x19c) = 0;
  *(uint64_t *)(param_1 + 0x1a4) = 0x7f7fffff;
  *(uint64_t *)(param_1 + 0x1ac) = 0;
  *(uint64_t *)(param_1 + 0x1b4) = 0x7f7fffff;
  *(uint64_t *)(param_1 + 0x1bc) = 0;
  *(uint64_t *)(param_1 + 0x1c4) = 0x7f7fffff;
  (**(code **)(*param_2 + 0x178))(param_2,param_1 + 0x1cc);
  uVar5 = (**(code **)(*param_2 + 0x198))(param_2);
  *(int32_t *)(param_1 + 0x1e8) = uVar5;
  uVar5 = (**(code **)(*param_2 + 0x1a8))(param_2);
  *(int32_t *)(param_1 + 0x1ec) = uVar5;
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  *(uint64_t *)(param_1 + 0x1f0) = uVar1;
  puVar3 = (int32_t *)(param_1 + 0xb8);
  uVar2 = uVar4;
  do {
    uVar5 = (**(code **)(*param_2 + 0xf0))(param_2,uVar2);
    uVar2 = uVar2 + 1;
    *puVar3 = uVar5;
    puVar3 = puVar3 + 1;
  } while (uVar2 < 6);
  puVar3 = (int32_t *)(param_1 + 0x174);
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
  *(int32_t *)(param_1 + 0x1e0) = 0x16c;
  *(void **)(param_1 + 0x1d8) = &UNK_18094e5a4;
  *(void **)(param_1 + 0x1e8) = &UNK_1806f4890;
  *(void **)(param_1 + 0x1f0) = &UNK_1806f48a0;
  *(void **)(param_1 + 0x1f8) = &UNK_18094e5b0;
  *(void **)(param_1 + 0x208) = &UNK_1806f48b0;
  *(int32_t *)(param_1 + 0x200) = 0x16d;
  *(void **)(param_1 + 0x210) = &UNK_18094e5bc;
  *(void **)(param_1 + 0x220) = &UNK_1806f48c0;
  *(int32_t *)(param_1 + 0x218) = 0x16e;
  *(void **)(param_1 + 0x228) = &UNK_18094e5c8;
  *(void **)(param_1 + 0x238) = &UNK_1806f48d0;
  *(int32_t *)(param_1 + 0x230) = 0x16f;
  *(void **)(param_1 + 0x240) = &UNK_18094e5d8;
  *(void **)(param_1 + 0x250) = &UNK_1806f48e0;
  *(int32_t *)(param_1 + 0x248) = 0x170;
  *(void **)(param_1 + 600) = &UNK_18094e5e8;
  *(code **)(param_1 + 0x268) = FUN_1806f4900;
  *(void **)(param_1 + 0x270) = &UNK_1806f48f0;
  *(int32_t *)(param_1 + 0x260) = 0x171;
  *(void **)(param_1 + 0x278) = &UNK_18094e5f8;
  *(code **)(param_1 + 0x288) = FUN_1806f4940;
  *(void **)(param_1 + 0x290) = &UNK_1806f4930;
  *(int32_t *)(param_1 + 0x280) = 0x172;
  *(void **)(param_1 + 0x298) = &UNK_18094e608;
  *(code **)(param_1 + 0x2a8) = FUN_1806f4980;
  *(void **)(param_1 + 0x2b0) = &UNK_1806f4970;
  *(int32_t *)(param_1 + 0x2a0) = 0x173;
  *(void **)(param_1 + 0x2b8) = &UNK_18094e618;
  *(code **)(param_1 + 0x2c8) = FUN_1806f49c0;
  *(void **)(param_1 + 0x2d0) = &UNK_1806f49b0;
  *(int32_t *)(param_1 + 0x2c0) = 0x174;
  *(void **)(param_1 + 0x2d8) = &UNK_18094e628;
  *(code **)(param_1 + 0x2e8) = FUN_1806f4a00;
  *(void **)(param_1 + 0x2f0) = &UNK_1806f49f0;
  *(int32_t *)(param_1 + 0x2e0) = 0x175;
  *(void **)(param_1 + 0x2f8) = &UNK_18094e63c;
  *(void **)(param_1 + 0x308) = &UNK_1806f4a30;
  *(code **)(param_1 + 0x310) = FUN_1806f4a40;
  *(int32_t *)(param_1 + 0x300) = 0x176;
  *(void **)(param_1 + 0x318) = &UNK_18094e648;
  *(code **)(param_1 + 0x328) = FUN_1806f4a90;
  *(void **)(param_1 + 0x330) = &UNK_1806f4a70;
  *(int32_t *)(param_1 + 800) = 0x177;
  *(void **)(param_1 + 0x338) = &UNK_18094e658;
  *(int32_t *)(param_1 + 0x340) = 0x178;
  *(void **)(param_1 + 0x348) = &UNK_1806f4ad0;
  *(void **)(param_1 + 0x350) = &UNK_1806f4ac0;
  *(void **)(param_1 + 0x358) = &UNK_18094e678;
  *(void **)(param_1 + 0x368) = &UNK_1806f4af0;
  *(void **)(param_1 + 0x370) = &UNK_1806f4ae0;
  *(int32_t *)(param_1 + 0x360) = 0x179;
  *(void **)(param_1 + 0x378) = &UNK_18094e698;
  *(void **)(param_1 + 0x388) = &UNK_1806f4b00;
  *(int32_t *)(param_1 + 0x380) = 0x17a;
  return param_1;
}



longlong FUN_1806f3370(longlong param_1,longlong *param_2)

{
  uint64_t uVar1;
  int32_t uVar2;
  
  FUN_1806f29e0();
  uVar2 = (**(code **)(*param_2 + 0xe8))(param_2);
  *(int32_t *)(param_1 + 0xb8) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
  *(int32_t *)(param_1 + 0xbc) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x108))(param_2);
  *(int32_t *)(param_1 + 0xc0) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x118))(param_2);
  *(int32_t *)(param_1 + 0xc4) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x128))(param_2);
  *(int32_t *)(param_1 + 200) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x138))(param_2);
  *(int32_t *)(param_1 + 0xcc) = uVar2;
  (**(code **)(*param_2 + 0x150))(param_2,param_1 + 0xd0);
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  *(uint64_t *)(param_1 + 0xd8) = uVar1;
  return param_1;
}



longlong FUN_1806f3440(longlong param_1)

{
  func_0x0001806f2b60();
  *(int32_t *)(param_1 + 0x1e0) = 0x17d;
  *(void **)(param_1 + 0x1d8) = &UNK_18094e6b0;
  *(void **)(param_1 + 0x1e8) = &UNK_1806f4b10;
  *(void **)(param_1 + 0x1f0) = &UNK_18094e6c0;
  *(void **)(param_1 + 0x200) = &UNK_1806f4b30;
  *(void **)(param_1 + 0x208) = &UNK_1806f4b20;
  *(int32_t *)(param_1 + 0x1f8) = 0x17e;
  *(void **)(param_1 + 0x210) = &UNK_18094e6d0;
  *(void **)(param_1 + 0x220) = &UNK_1806f4b50;
  *(void **)(param_1 + 0x228) = &UNK_1806f4b40;
  *(int32_t *)(param_1 + 0x218) = 0x17f;
  *(void **)(param_1 + 0x230) = &UNK_18094e6e0;
  *(void **)(param_1 + 0x240) = &UNK_1806f4b70;
  *(void **)(param_1 + 0x248) = &UNK_1806f4b60;
  *(int32_t *)(param_1 + 0x238) = 0x180;
  *(void **)(param_1 + 0x250) = &UNK_18094e6f0;
  *(void **)(param_1 + 0x260) = &UNK_1806f4b90;
  *(void **)(param_1 + 0x268) = &UNK_1806f4b80;
  *(int32_t *)(param_1 + 600) = 0x181;
  *(void **)(param_1 + 0x270) = &UNK_18094e700;
  *(void **)(param_1 + 0x280) = &UNK_1806f4bb0;
  *(void **)(param_1 + 0x288) = &UNK_1806f4ba0;
  *(int32_t *)(param_1 + 0x278) = 0x182;
  *(void **)(param_1 + 0x290) = &UNK_18094e708;
  *(code **)(param_1 + 0x2a0) = FUN_1806f4bf0;
  *(code **)(param_1 + 0x2a8) = FUN_1806f4bc0;
  *(int32_t *)(param_1 + 0x298) = 0x183;
  *(void **)(param_1 + 0x2b0) = &UNK_18094e698;
  *(void **)(param_1 + 0x2c0) = &UNK_1806f4c20;
  *(int32_t *)(param_1 + 0x2b8) = 0x184;
  return param_1;
}



longlong FUN_1806f35f0(longlong param_1,longlong *param_2)

{
  uint64_t uVar1;
  int32_t uVar2;
  
  FUN_1806f29e0();
  (**(code **)(*param_2 + 0x100))(param_2,param_1 + 0xb8);
  (**(code **)(*param_2 + 0x108))(param_2,param_1 + 0xc4);
  uVar2 = (**(code **)(*param_2 + 0x110))(param_2);
  *(int32_t *)(param_1 + 0xd0) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x118))(param_2);
  *(int32_t *)(param_1 + 0xd4) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x128))(param_2);
  *(int32_t *)(param_1 + 0xd8) = uVar2;
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  *(uint64_t *)(param_1 + 0xe0) = uVar1;
  return param_1;
}



longlong FUN_1806f3690(longlong param_1)

{
  func_0x0001806f2b60();
  *(int32_t *)(param_1 + 0x1e0) = 0x187;
  *(void **)(param_1 + 0x1d8) = &UNK_18094e720;
  *(code **)(param_1 + 0x1e8) = FUN_1806f4c40;
  *(void **)(param_1 + 0x1f0) = &UNK_1806f4c30;
  *(void **)(param_1 + 0x1f8) = &UNK_18094e728;
  *(code **)(param_1 + 0x208) = FUN_1806f4c80;
  *(void **)(param_1 + 0x210) = &UNK_1806f4c70;
  *(int32_t *)(param_1 + 0x200) = 0x188;
  *(void **)(param_1 + 0x218) = &UNK_18094e738;
  *(void **)(param_1 + 0x228) = &UNK_1806f4cc0;
  *(void **)(param_1 + 0x230) = &UNK_1806f4cb0;
  *(int32_t *)(param_1 + 0x220) = 0x189;
  *(void **)(param_1 + 0x238) = &UNK_18094e748;
  *(void **)(param_1 + 0x248) = &UNK_1806f4ce0;
  *(void **)(param_1 + 0x250) = &UNK_1806f4cd0;
  *(int32_t *)(param_1 + 0x240) = 0x18a;
  *(void **)(param_1 + 600) = &UNK_18094e758;
  *(void **)(param_1 + 0x268) = &UNK_1806f4d00;
  *(void **)(param_1 + 0x270) = &UNK_1806f4cf0;
  *(int32_t *)(param_1 + 0x260) = 0x18b;
  *(void **)(param_1 + 0x278) = &UNK_18094e698;
  *(void **)(param_1 + 0x288) = &UNK_1806f4d10;
  *(int32_t *)(param_1 + 0x280) = 0x18c;
  return param_1;
}



longlong FUN_1806f37e0(longlong param_1,longlong *param_2)

{
  uint64_t uVar1;
  int32_t uVar2;
  
  FUN_1806f29e0();
  uVar2 = (**(code **)(*param_2 + 0xf0))(param_2);
  *(int32_t *)(param_1 + 0xb8) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x100))(param_2);
  *(int32_t *)(param_1 + 0xbc) = uVar2;
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  *(uint64_t *)(param_1 + 0xc0) = uVar1;
  return param_1;
}



longlong FUN_1806f3850(longlong param_1)

{
  func_0x0001806f2b60();
  *(int32_t *)(param_1 + 0x1e0) = 399;
  *(void **)(param_1 + 0x1d8) = &UNK_18094e658;
  *(void **)(param_1 + 0x1e8) = &UNK_1806f4d30;
  *(void **)(param_1 + 0x1f0) = &UNK_1806f4d20;
  *(void **)(param_1 + 0x1f8) = &UNK_18094e678;
  *(void **)(param_1 + 0x208) = &UNK_1806f4d50;
  *(void **)(param_1 + 0x210) = &UNK_1806f4d40;
  *(int32_t *)(param_1 + 0x200) = 400;
  *(void **)(param_1 + 0x218) = &UNK_18094e698;
  *(void **)(param_1 + 0x228) = &UNK_1806f4d60;
  *(int32_t *)(param_1 + 0x220) = 0x191;
  return param_1;
}



longlong FUN_1806f3900(longlong param_1,longlong *param_2)

{
  uint64_t uVar1;
  int32_t uVar2;
  
  FUN_1806f29e0();
  uVar2 = (**(code **)(*param_2 + 0xe8))(param_2);
  *(int32_t *)(param_1 + 0xb8) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0xf0))(param_2);
  *(int32_t *)(param_1 + 0xbc) = uVar2;
  (**(code **)(*param_2 + 0x100))(param_2,param_1 + 0xc0);
  (**(code **)(*param_2 + 0x118))(param_2,param_1 + 0xdc);
  uVar2 = (**(code **)(*param_2 + 0x128))(param_2);
  *(int32_t *)(param_1 + 0xe0) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x138))(param_2);
  *(int32_t *)(param_1 + 0xe4) = uVar2;
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  *(uint64_t *)(param_1 + 0xe8) = uVar1;
  return param_1;
}



longlong FUN_1806f39b0(longlong param_1)

{
  func_0x0001806f2b60();
  *(int32_t *)(param_1 + 0x1e0) = 0x194;
  *(void **)(param_1 + 0x1d8) = &UNK_18094e768;
  *(void **)(param_1 + 0x1e8) = &UNK_1806f4d70;
  *(void **)(param_1 + 0x1f0) = &UNK_18094e778;
  *(void **)(param_1 + 0x200) = &UNK_1806f4d80;
  *(int32_t *)(param_1 + 0x1f8) = 0x195;
  *(void **)(param_1 + 0x208) = &UNK_18094e784;
  *(code **)(param_1 + 0x218) = FUN_1806f4da0;
  *(void **)(param_1 + 0x220) = &UNK_1806f4d90;
  *(int32_t *)(param_1 + 0x210) = 0x196;
  *(void **)(param_1 + 0x228) = &UNK_18094e790;
  *(code **)(param_1 + 0x238) = FUN_1806f4e00;
  *(code **)(param_1 + 0x240) = FUN_1806f4dd0;
  *(int32_t *)(param_1 + 0x230) = 0x197;
  *(void **)(param_1 + 0x248) = &UNK_18094e658;
  *(void **)(param_1 + 600) = &UNK_1806f4e40;
  *(void **)(param_1 + 0x260) = &UNK_1806f4e30;
  *(int32_t *)(param_1 + 0x250) = 0x198;
  *(void **)(param_1 + 0x268) = &UNK_18094e678;
  *(void **)(param_1 + 0x278) = &UNK_1806f4e60;
  *(void **)(param_1 + 0x280) = &UNK_1806f4e50;
  *(int32_t *)(param_1 + 0x270) = 0x199;
  *(void **)(param_1 + 0x288) = &UNK_18094e698;
  *(void **)(param_1 + 0x298) = &UNK_1806f4e70;
  *(int32_t *)(param_1 + 0x290) = 0x19a;
  return param_1;
}



longlong FUN_1806f3b10(longlong param_1,longlong *param_2)

{
  uint64_t uVar1;
  int32_t uVar2;
  
  FUN_1806f29e0();
  uVar2 = (**(code **)(*param_2 + 0xe8))(param_2);
  *(int32_t *)(param_1 + 0xb8) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0xf0))(param_2);
  *(int32_t *)(param_1 + 0xbc) = uVar2;
  (**(code **)(*param_2 + 0x100))(param_2,param_1 + 0xc0);
  uVar2 = (**(code **)(*param_2 + 0x110))(param_2);
  *(int32_t *)(param_1 + 0xdc) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x120))(param_2);
  *(int32_t *)(param_1 + 0xe0) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x130))(param_2);
  *(int32_t *)(param_1 + 0xe4) = uVar2;
  (**(code **)(*param_2 + 0x148))(param_2,param_1 + 0xe8);
  uVar2 = (**(code **)(*param_2 + 0x158))(param_2);
  *(int32_t *)(param_1 + 0xec) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x168))(param_2);
  *(int32_t *)(param_1 + 0xf0) = uVar2;
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  *(uint64_t *)(param_1 + 0xf8) = uVar1;
  return param_1;
}



longlong FUN_1806f3c00(longlong param_1)

{
  func_0x0001806f2b60();
  *(int32_t *)(param_1 + 0x1e0) = 0x19d;
  *(void **)(param_1 + 0x1d8) = &UNK_18094e7a4;
  *(void **)(param_1 + 0x1e8) = &UNK_1806f4e80;
  *(void **)(param_1 + 0x1f0) = &UNK_18094e778;
  *(void **)(param_1 + 0x200) = &UNK_1806f4e90;
  *(int32_t *)(param_1 + 0x1f8) = 0x19e;
  *(void **)(param_1 + 0x208) = &UNK_18094e784;
  *(code **)(param_1 + 0x218) = FUN_1806f4eb0;
  *(void **)(param_1 + 0x220) = &UNK_1806f4ea0;
  *(int32_t *)(param_1 + 0x210) = 0x19f;
  *(void **)(param_1 + 0x228) = &UNK_18094e7b0;
  *(void **)(param_1 + 0x238) = &UNK_1806f4f00;
  *(void **)(param_1 + 0x240) = &UNK_1806f4ee0;
  *(int32_t *)(param_1 + 0x230) = 0x1a0;
  *(void **)(param_1 + 0x248) = &UNK_18094e7c0;
  *(void **)(param_1 + 600) = &UNK_1806f4f20;
  *(void **)(param_1 + 0x260) = &UNK_1806f4f10;
  *(int32_t *)(param_1 + 0x250) = 0x1a1;
  *(void **)(param_1 + 0x268) = &UNK_18094e7d0;
  *(void **)(param_1 + 0x278) = &UNK_1806f4f40;
  *(void **)(param_1 + 0x280) = &UNK_1806f4f30;
  *(int32_t *)(param_1 + 0x270) = 0x1a2;
  *(void **)(param_1 + 0x288) = &UNK_18094e7e0;
  *(code **)(param_1 + 0x298) = FUN_1806f4f80;
  *(code **)(param_1 + 0x2a0) = FUN_1806f4f50;
  *(int32_t *)(param_1 + 0x290) = 0x1a3;
  *(void **)(param_1 + 0x2a8) = &UNK_18094e658;
  *(void **)(param_1 + 0x2b8) = &UNK_1806f4fc0;
  *(void **)(param_1 + 0x2c0) = &UNK_1806f4fb0;
  *(int32_t *)(param_1 + 0x2b0) = 0x1a4;
  *(void **)(param_1 + 0x2c8) = &UNK_18094e678;
  *(void **)(param_1 + 0x2d8) = &UNK_1806f4fe0;
  *(void **)(param_1 + 0x2e0) = &UNK_1806f4fd0;
  *(int32_t *)(param_1 + 0x2d0) = 0x1a5;
  *(void **)(param_1 + 0x2e8) = &UNK_18094e698;
  *(void **)(param_1 + 0x2f8) = &UNK_1806f4ff0;
  *(int32_t *)(param_1 + 0x2f0) = 0x1a6;
  return param_1;
}



longlong FUN_1806f3e00(longlong param_1,longlong *param_2)

{
  uint64_t uVar1;
  int32_t uVar2;
  
  FUN_1806f29e0();
  (**(code **)(*param_2 + 0xe8))(param_2,param_1 + 0xb8);
  uVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
  *(int32_t *)(param_1 + 0xd4) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x100))(param_2);
  *(int32_t *)(param_1 + 0xd8) = uVar2;
  (**(code **)(*param_2 + 0x118))(param_2,param_1 + 0xdc);
  uVar2 = (**(code **)(*param_2 + 0x128))(param_2);
  *(int32_t *)(param_1 + 0xe0) = uVar2;
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  *(uint64_t *)(param_1 + 0xe8) = uVar1;
  return param_1;
}



longlong FUN_1806f3ea0(longlong param_1)

{
  func_0x0001806f2b60();
  *(int32_t *)(param_1 + 0x1e0) = 0x1a9;
  *(void **)(param_1 + 0x1d8) = &UNK_18094e7f8;
  *(code **)(param_1 + 0x1e8) = FUN_1806f5010;
  *(void **)(param_1 + 0x1f0) = &UNK_1806f5000;
  *(void **)(param_1 + 0x1f8) = &UNK_18094e5c8;
  *(void **)(param_1 + 0x208) = &UNK_1806f5040;
  *(int32_t *)(param_1 + 0x200) = 0x1aa;
  *(void **)(param_1 + 0x210) = &UNK_18094e5d8;
  *(void **)(param_1 + 0x220) = &UNK_1806f5050;
  *(int32_t *)(param_1 + 0x218) = 0x1ab;
  *(void **)(param_1 + 0x228) = &UNK_18094e808;
  *(code **)(param_1 + 0x238) = FUN_1806f5090;
  *(code **)(param_1 + 0x240) = FUN_1806f5060;
  *(int32_t *)(param_1 + 0x230) = 0x1ac;
  *(void **)(param_1 + 0x248) = &UNK_18094e658;
  *(void **)(param_1 + 600) = &UNK_1806f50d0;
  *(void **)(param_1 + 0x260) = &UNK_1806f50c0;
  *(int32_t *)(param_1 + 0x250) = 0x1ad;
  *(void **)(param_1 + 0x268) = &UNK_18094e698;
  *(void **)(param_1 + 0x278) = &UNK_1806f50e0;
  *(int32_t *)(param_1 + 0x270) = 0x1ae;
  return param_1;
}



longlong FUN_1806f4110(longlong param_1)

{
  func_0x0001806f4000();
  *(int32_t *)(param_1 + 0xa8) = 0x1b8;
  *(void **)(param_1 + 0xa0) = &DAT_1809fd7b0;
  *(void **)(param_1 + 0xb0) = &UNK_1806f5120;
  *(void **)(param_1 + 0xb8) = &UNK_1806f51c0;
  return param_1;
}



longlong FUN_1806f41b0(longlong param_1)

{
  func_0x0001806f4000();
  *(int32_t *)(param_1 + 0xa8) = 0x1bb;
  *(void **)(param_1 + 0xa0) = &UNK_18094e840;
  *(void **)(param_1 + 0xb0) = &UNK_1806f5120;
  *(void **)(param_1 + 0xb8) = &UNK_1806f51c0;
  *(void **)(param_1 + 0xc0) = &DAT_180a1fdf0;
  *(void **)(param_1 + 0xd0) = &UNK_1806f5110;
  *(void **)(param_1 + 0xd8) = &UNK_1806f51b0;
  *(int32_t *)(param_1 + 200) = 0x1bc;
  return param_1;
}



longlong FUN_1806f4280(longlong param_1)

{
  func_0x0001806f4000();
  *(int32_t *)(param_1 + 0xa8) = 0x1bf;
  *(void **)(param_1 + 0xa0) = &UNK_18094e840;
  *(void **)(param_1 + 0xb0) = &UNK_1806f5120;
  *(void **)(param_1 + 0xb8) = &UNK_1806f51c0;
  *(void **)(param_1 + 0xc0) = &DAT_180a1fdf0;
  *(void **)(param_1 + 0xd0) = &UNK_1806f5110;
  *(void **)(param_1 + 0xd8) = &UNK_1806f51b0;
  *(int32_t *)(param_1 + 200) = 0x1c0;
  return param_1;
}



longlong FUN_1806f4350(longlong param_1)

{
  func_0x0001806f4000();
  *(int32_t *)(param_1 + 0xa8) = 0x1c3;
  *(void **)(param_1 + 0xa0) = &UNK_18094e848;
  *(void **)(param_1 + 0xb0) = &UNK_1806f5120;
  *(void **)(param_1 + 0xb8) = &UNK_1806f51c0;
  *(void **)(param_1 + 0xc0) = &UNK_18094e850;
  *(void **)(param_1 + 0xd0) = &UNK_1806f5110;
  *(void **)(param_1 + 0xd8) = &UNK_1806f51b0;
  *(int32_t *)(param_1 + 200) = 0x1c4;
  return param_1;
}



longlong FUN_1806f4420(longlong param_1)

{
  func_0x0001806f4000();
  *(int32_t *)(param_1 + 0xa8) = 0x1c7;
  *(void **)(param_1 + 0xa0) = &UNK_18094e858;
  *(void **)(param_1 + 0xb0) = &UNK_1806f5120;
  *(void **)(param_1 + 0xb8) = &UNK_1806f51c0;
  *(void **)(param_1 + 0xc0) = &UNK_18094e868;
  *(void **)(param_1 + 0xd0) = &UNK_1806f5110;
  *(void **)(param_1 + 0xd8) = &UNK_1806f51b0;
  *(int32_t *)(param_1 + 200) = 0x1c8;
  *(void **)(param_1 + 0xe0) = &UNK_18094e878;
  *(void **)(param_1 + 0xf0) = &UNK_1806f5180;
  *(void **)(param_1 + 0xf8) = &UNK_18044e330;
  *(int32_t *)(param_1 + 0xe8) = 0x1c9;
  *(void **)(param_1 + 0x100) = &UNK_18094e888;
  *(void **)(param_1 + 0x110) = &UNK_1806f5170;
  *(void **)(param_1 + 0x118) = &UNK_1806f51f0;
  *(int32_t *)(param_1 + 0x108) = 0x1ca;
  return param_1;
}



uint64_t FUN_1806f4690(uint64_t param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x40))(param_2,param_1);
  return param_1;
}



uint64_t FUN_1806f46c0(uint64_t param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x48))(param_2,param_1);
  return param_1;
}



uint64_t FUN_1806f46f0(uint64_t param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x50))(param_2,param_1);
  return param_1;
}



uint64_t FUN_1806f4720(uint64_t param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x58))(param_2,param_1);
  return param_1;
}






// 函数: void FUN_1806f4770(longlong *param_1,int16_t *param_2)
void FUN_1806f4770(longlong *param_1,int16_t *param_2)

{
  int16_t auStackX_8 [16];
  
  auStackX_8[0] = *param_2;
  (**(code **)(*param_1 + 0x70))(param_1,auStackX_8);
  return;
}



uint64_t FUN_1806f47a0(uint64_t param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x80))(param_2,param_1);
  return param_1;
}



uint64_t FUN_1806f4900(uint64_t param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x118))(param_2,param_1);
  return param_1;
}



uint64_t FUN_1806f4940(uint64_t param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x118))(param_2,param_1);
  return param_1;
}



uint64_t FUN_1806f4980(uint64_t param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x138))(param_2,param_1);
  return param_1;
}



uint64_t FUN_1806f49c0(uint64_t param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x148))(param_2,param_1);
  return param_1;
}



uint64_t FUN_1806f4a00(uint64_t param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x158))(param_2,param_1);
  return param_1;
}



uint64_t FUN_1806f4a40(uint64_t param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x168))(param_2,param_1);
  return param_1;
}



uint64_t FUN_1806f4a90(uint64_t param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x178))(param_2,param_1);
  return param_1;
}






// 函数: void FUN_1806f4bc0(longlong *param_1,int16_t *param_2)
void FUN_1806f4bc0(longlong *param_1,int16_t *param_2)

{
  int16_t auStackX_8 [16];
  
  auStackX_8[0] = *param_2;
  (**(code **)(*param_1 + 0x140))(param_1,auStackX_8);
  return;
}



uint64_t FUN_1806f4bf0(uint64_t param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x150))(param_2,param_1);
  return param_1;
}



uint64_t FUN_1806f4c40(uint64_t param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x100))(param_2,param_1);
  return param_1;
}



uint64_t FUN_1806f4c80(uint64_t param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x108))(param_2,param_1);
  return param_1;
}



uint64_t FUN_1806f4da0(uint64_t param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x100))(param_2,param_1);
  return param_1;
}






// 函数: void FUN_1806f4dd0(longlong *param_1,int16_t *param_2)
void FUN_1806f4dd0(longlong *param_1,int16_t *param_2)

{
  int16_t auStackX_8 [16];
  
  auStackX_8[0] = *param_2;
  (**(code **)(*param_1 + 0x108))(param_1,auStackX_8);
  return;
}



uint64_t FUN_1806f4e00(uint64_t param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x118))(param_2,param_1);
  return param_1;
}



uint64_t FUN_1806f4eb0(uint64_t param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x100))(param_2,param_1);
  return param_1;
}






// 函数: void FUN_1806f4f50(longlong *param_1,int16_t *param_2)
void FUN_1806f4f50(longlong *param_1,int16_t *param_2)

{
  int16_t auStackX_8 [16];
  
  auStackX_8[0] = *param_2;
  (**(code **)(*param_1 + 0x138))(param_1,auStackX_8);
  return;
}



uint64_t FUN_1806f4f80(uint64_t param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x148))(param_2,param_1);
  return param_1;
}



uint64_t FUN_1806f5010(uint64_t param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0xe8))(param_2,param_1);
  return param_1;
}






// 函数: void FUN_1806f5060(longlong *param_1,int16_t *param_2)
void FUN_1806f5060(longlong *param_1,int16_t *param_2)

{
  int16_t auStackX_8 [16];
  
  auStackX_8[0] = *param_2;
  (**(code **)(*param_1 + 0x108))(param_1,auStackX_8);
  return;
}



uint64_t FUN_1806f5090(uint64_t param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x118))(param_2,param_1);
  return param_1;
}






