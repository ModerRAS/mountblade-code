#include "TaleWorlds.Native.Split.h"

// 99_part_11_part024.c - 6 个函数

// 函数: void FUN_1806f28f5(void)
void FUN_1806f28f5(void)

{
  uint64_t *unaff_RSI;
  uint64_t unaff_RDI;
  
  unaff_RSI[1] = unaff_RDI;
  *unaff_RSI = &unknown_var_9408_ptr;
  unaff_RSI[2] = unaff_RDI;
  return;
}



int64_t FUN_1806f29e0(int64_t param_1,int64_t *param_2)

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
  *(int64_t *)(param_1 + 0xb0) = param_2[2];
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



int64_t FUN_1806f2e40(int64_t param_1,int64_t *param_2)

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



int64_t FUN_1806f3080(int64_t param_1)

{
  func_0x0001806f2b60();
  *(int32_t *)(param_1 + 0x1e0) = 0x16c;
  *(void **)(param_1 + 0x1d8) = &unknown_var_9060_ptr;
  *(void **)(param_1 + 0x1e8) = &unknown_var_4016_ptr;
  *(void **)(param_1 + 0x1f0) = &unknown_var_4032_ptr;
  *(void **)(param_1 + 0x1f8) = &unknown_var_9072_ptr;
  *(void **)(param_1 + 0x208) = &unknown_var_4048_ptr;
  *(int32_t *)(param_1 + 0x200) = 0x16d;
  *(void **)(param_1 + 0x210) = &unknown_var_9084_ptr;
  *(void **)(param_1 + 0x220) = &unknown_var_4064_ptr;
  *(int32_t *)(param_1 + 0x218) = 0x16e;
  *(void **)(param_1 + 0x228) = &unknown_var_9096_ptr;
  *(void **)(param_1 + 0x238) = &unknown_var_4080_ptr;
  *(int32_t *)(param_1 + 0x230) = 0x16f;
  *(void **)(param_1 + 0x240) = &unknown_var_9112_ptr;
  *(void **)(param_1 + 0x250) = &unknown_var_4096_ptr;
  *(int32_t *)(param_1 + 0x248) = 0x170;
  *(void **)(param_1 + 600) = &unknown_var_9128_ptr;
  *(code **)(param_1 + 0x268) = FUN_1806f4900;
  *(void **)(param_1 + 0x270) = &unknown_var_4112_ptr;
  *(int32_t *)(param_1 + 0x260) = 0x171;
  *(void **)(param_1 + 0x278) = &unknown_var_9144_ptr;
  *(code **)(param_1 + 0x288) = FUN_1806f4940;
  *(void **)(param_1 + 0x290) = &unknown_var_4176_ptr;
  *(int32_t *)(param_1 + 0x280) = 0x172;
  *(void **)(param_1 + 0x298) = &unknown_var_9160_ptr;
  *(code **)(param_1 + 0x2a8) = FUN_1806f4980;
  *(void **)(param_1 + 0x2b0) = &unknown_var_4240_ptr;
  *(int32_t *)(param_1 + 0x2a0) = 0x173;
  *(void **)(param_1 + 0x2b8) = &unknown_var_9176_ptr;
  *(code **)(param_1 + 0x2c8) = FUN_1806f49c0;
  *(void **)(param_1 + 0x2d0) = &unknown_var_4304_ptr;
  *(int32_t *)(param_1 + 0x2c0) = 0x174;
  *(void **)(param_1 + 0x2d8) = &unknown_var_9192_ptr;
  *(code **)(param_1 + 0x2e8) = FUN_1806f4a00;
  *(void **)(param_1 + 0x2f0) = &unknown_var_4368_ptr;
  *(int32_t *)(param_1 + 0x2e0) = 0x175;
  *(void **)(param_1 + 0x2f8) = &unknown_var_9212_ptr;
  *(void **)(param_1 + 0x308) = &unknown_var_4432_ptr;
  *(code **)(param_1 + 0x310) = FUN_1806f4a40;
  *(int32_t *)(param_1 + 0x300) = 0x176;
  *(void **)(param_1 + 0x318) = &unknown_var_9224_ptr;
  *(code **)(param_1 + 0x328) = FUN_1806f4a90;
  *(void **)(param_1 + 0x330) = &unknown_var_4496_ptr;
  *(int32_t *)(param_1 + 800) = 0x177;
  *(void **)(param_1 + 0x338) = &unknown_var_9240_ptr;
  *(int32_t *)(param_1 + 0x340) = 0x178;
  *(void **)(param_1 + 0x348) = &unknown_var_4592_ptr;
  *(void **)(param_1 + 0x350) = &unknown_var_4576_ptr;
  *(void **)(param_1 + 0x358) = &unknown_var_9272_ptr;
  *(void **)(param_1 + 0x368) = &unknown_var_4624_ptr;
  *(void **)(param_1 + 0x370) = &unknown_var_4608_ptr;
  *(int32_t *)(param_1 + 0x360) = 0x179;
  *(void **)(param_1 + 0x378) = &unknown_var_9304_ptr;
  *(void **)(param_1 + 0x388) = &unknown_var_4640_ptr;
  *(int32_t *)(param_1 + 0x380) = 0x17a;
  return param_1;
}



int64_t FUN_1806f3370(int64_t param_1,int64_t *param_2)

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



int64_t FUN_1806f3440(int64_t param_1)

{
  func_0x0001806f2b60();
  *(int32_t *)(param_1 + 0x1e0) = 0x17d;
  *(void **)(param_1 + 0x1d8) = &unknown_var_9328_ptr;
  *(void **)(param_1 + 0x1e8) = &unknown_var_4656_ptr;
  *(void **)(param_1 + 0x1f0) = &unknown_var_9344_ptr;
  *(void **)(param_1 + 0x200) = &unknown_var_4688_ptr;
  *(void **)(param_1 + 0x208) = &unknown_var_4672_ptr;
  *(int32_t *)(param_1 + 0x1f8) = 0x17e;
  *(void **)(param_1 + 0x210) = &unknown_var_9360_ptr;
  *(void **)(param_1 + 0x220) = &unknown_var_4720_ptr;
  *(void **)(param_1 + 0x228) = &unknown_var_4704_ptr;
  *(int32_t *)(param_1 + 0x218) = 0x17f;
  *(void **)(param_1 + 0x230) = &render_data_ptr;
  *(void **)(param_1 + 0x240) = &unknown_var_4752_ptr;
  *(void **)(param_1 + 0x248) = &unknown_var_4736_ptr;
  *(int32_t *)(param_1 + 0x238) = 0x180;
  *(void **)(param_1 + 0x250) = &unknown_var_9392_ptr;
  *(void **)(param_1 + 0x260) = &unknown_var_4784_ptr;
  *(void **)(param_1 + 0x268) = &unknown_var_4768_ptr;
  *(int32_t *)(param_1 + 600) = 0x181;
  *(void **)(param_1 + 0x270) = &unknown_var_9408_ptr;
  *(void **)(param_1 + 0x280) = &unknown_var_4816_ptr;
  *(void **)(param_1 + 0x288) = &unknown_var_4800_ptr;
  *(int32_t *)(param_1 + 0x278) = 0x182;
  *(void **)(param_1 + 0x290) = &unknown_var_9416_ptr;
  *(code **)(param_1 + 0x2a0) = FUN_1806f4bf0;
  *(code **)(param_1 + 0x2a8) = FUN_1806f4bc0;
  *(int32_t *)(param_1 + 0x298) = 0x183;
  *(void **)(param_1 + 0x2b0) = &unknown_var_9304_ptr;
  *(void **)(param_1 + 0x2c0) = &unknown_var_4928_ptr;
  *(int32_t *)(param_1 + 0x2b8) = 0x184;
  return param_1;
}



int64_t FUN_1806f35f0(int64_t param_1,int64_t *param_2)

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



int64_t FUN_1806f3690(int64_t param_1)

{
  func_0x0001806f2b60();
  *(int32_t *)(param_1 + 0x1e0) = 0x187;
  *(void **)(param_1 + 0x1d8) = &unknown_var_9440_ptr;
  *(code **)(param_1 + 0x1e8) = FUN_1806f4c40;
  *(void **)(param_1 + 0x1f0) = &unknown_var_4944_ptr;
  *(void **)(param_1 + 0x1f8) = &unknown_var_9448_ptr;
  *(code **)(param_1 + 0x208) = FUN_1806f4c80;
  *(void **)(param_1 + 0x210) = &unknown_var_5008_ptr;
  *(int32_t *)(param_1 + 0x200) = 0x188;
  *(void **)(param_1 + 0x218) = &unknown_var_9464_ptr;
  *(void **)(param_1 + 0x228) = &unknown_var_5088_ptr;
  *(void **)(param_1 + 0x230) = &unknown_var_5072_ptr;
  *(int32_t *)(param_1 + 0x220) = 0x189;
  *(void **)(param_1 + 0x238) = &unknown_var_9480_ptr;
  *(void **)(param_1 + 0x248) = &unknown_var_5120_ptr;
  *(void **)(param_1 + 0x250) = &unknown_var_5104_ptr;
  *(int32_t *)(param_1 + 0x240) = 0x18a;
  *(void **)(param_1 + 600) = &unknown_var_9496_ptr;
  *(void **)(param_1 + 0x268) = &unknown_var_5152_ptr;
  *(void **)(param_1 + 0x270) = &unknown_var_5136_ptr;
  *(int32_t *)(param_1 + 0x260) = 0x18b;
  *(void **)(param_1 + 0x278) = &unknown_var_9304_ptr;
  *(void **)(param_1 + 0x288) = &unknown_var_5168_ptr;
  *(int32_t *)(param_1 + 0x280) = 0x18c;
  return param_1;
}



int64_t FUN_1806f37e0(int64_t param_1,int64_t *param_2)

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



int64_t FUN_1806f3850(int64_t param_1)

{
  func_0x0001806f2b60();
  *(int32_t *)(param_1 + 0x1e0) = 399;
  *(void **)(param_1 + 0x1d8) = &unknown_var_9240_ptr;
  *(void **)(param_1 + 0x1e8) = &unknown_var_5200_ptr;
  *(void **)(param_1 + 0x1f0) = &unknown_var_5184_ptr;
  *(void **)(param_1 + 0x1f8) = &unknown_var_9272_ptr;
  *(void **)(param_1 + 0x208) = &unknown_var_5232_ptr;
  *(void **)(param_1 + 0x210) = &unknown_var_5216_ptr;
  *(int32_t *)(param_1 + 0x200) = 400;
  *(void **)(param_1 + 0x218) = &unknown_var_9304_ptr;
  *(void **)(param_1 + 0x228) = &unknown_var_5248_ptr;
  *(int32_t *)(param_1 + 0x220) = 0x191;
  return param_1;
}



int64_t FUN_1806f3900(int64_t param_1,int64_t *param_2)

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



int64_t FUN_1806f39b0(int64_t param_1)

{
  func_0x0001806f2b60();
  *(int32_t *)(param_1 + 0x1e0) = 0x194;
  *(void **)(param_1 + 0x1d8) = &unknown_var_9512_ptr;
  *(void **)(param_1 + 0x1e8) = &unknown_var_5264_ptr;
  *(void **)(param_1 + 0x1f0) = &unknown_var_9528_ptr;
  *(void **)(param_1 + 0x200) = &unknown_var_5280_ptr;
  *(int32_t *)(param_1 + 0x1f8) = 0x195;
  *(void **)(param_1 + 0x208) = &system_pattern1_ptr;
  *(code **)(param_1 + 0x218) = FUN_1806f4da0;
  *(void **)(param_1 + 0x220) = &unknown_var_5296_ptr;
  *(int32_t *)(param_1 + 0x210) = 0x196;
  *(void **)(param_1 + 0x228) = &system_string1_ptr;
  *(code **)(param_1 + 0x238) = FUN_1806f4e00;
  *(code **)(param_1 + 0x240) = FUN_1806f4dd0;
  *(int32_t *)(param_1 + 0x230) = 0x197;
  *(void **)(param_1 + 0x248) = &unknown_var_9240_ptr;
  *(void **)(param_1 + 600) = &unknown_var_5472_ptr;
  *(void **)(param_1 + 0x260) = &unknown_var_5456_ptr;
  *(int32_t *)(param_1 + 0x250) = 0x198;
  *(void **)(param_1 + 0x268) = &unknown_var_9272_ptr;
  *(void **)(param_1 + 0x278) = &unknown_var_5504_ptr;
  *(void **)(param_1 + 0x280) = &unknown_var_5488_ptr;
  *(int32_t *)(param_1 + 0x270) = 0x199;
  *(void **)(param_1 + 0x288) = &unknown_var_9304_ptr;
  *(void **)(param_1 + 0x298) = &unknown_var_5520_ptr;
  *(int32_t *)(param_1 + 0x290) = 0x19a;
  return param_1;
}



int64_t FUN_1806f3b10(int64_t param_1,int64_t *param_2)

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



int64_t FUN_1806f3c00(int64_t param_1)

{
  func_0x0001806f2b60();
  *(int32_t *)(param_1 + 0x1e0) = 0x19d;
  *(void **)(param_1 + 0x1d8) = &unknown_var_9572_ptr;
  *(void **)(param_1 + 0x1e8) = &unknown_var_5536_ptr;
  *(void **)(param_1 + 0x1f0) = &unknown_var_9528_ptr;
  *(void **)(param_1 + 0x200) = &unknown_var_5552_ptr;
  *(int32_t *)(param_1 + 0x1f8) = 0x19e;
  *(void **)(param_1 + 0x208) = &system_pattern1_ptr;
  *(code **)(param_1 + 0x218) = FUN_1806f4eb0;
  *(void **)(param_1 + 0x220) = &unknown_var_5568_ptr;
  *(int32_t *)(param_1 + 0x210) = 0x19f;
  *(void **)(param_1 + 0x228) = &system_pattern2_ptr;
  *(void **)(param_1 + 0x238) = &unknown_var_5664_ptr;
  *(void **)(param_1 + 0x240) = &unknown_var_5632_ptr;
  *(int32_t *)(param_1 + 0x230) = 0x1a0;
  *(void **)(param_1 + 0x248) = &unknown_var_9600_ptr;
  *(void **)(param_1 + 600) = &unknown_var_5696_ptr;
  *(void **)(param_1 + 0x260) = &unknown_var_5680_ptr;
  *(int32_t *)(param_1 + 0x250) = 0x1a1;
  *(void **)(param_1 + 0x268) = &unknown_var_9616_ptr;
  *(void **)(param_1 + 0x278) = &unknown_var_5728_ptr;
  *(void **)(param_1 + 0x280) = &unknown_var_5712_ptr;
  *(int32_t *)(param_1 + 0x270) = 0x1a2;
  *(void **)(param_1 + 0x288) = &unknown_var_9632_ptr;
  *(code **)(param_1 + 0x298) = FUN_1806f4f80;
  *(code **)(param_1 + 0x2a0) = FUN_1806f4f50;
  *(int32_t *)(param_1 + 0x290) = 0x1a3;
  *(void **)(param_1 + 0x2a8) = &unknown_var_9240_ptr;
  *(void **)(param_1 + 0x2b8) = &unknown_var_5856_ptr;
  *(void **)(param_1 + 0x2c0) = &unknown_var_5840_ptr;
  *(int32_t *)(param_1 + 0x2b0) = 0x1a4;
  *(void **)(param_1 + 0x2c8) = &unknown_var_9272_ptr;
  *(void **)(param_1 + 0x2d8) = &unknown_var_5888_ptr;
  *(void **)(param_1 + 0x2e0) = &unknown_var_5872_ptr;
  *(int32_t *)(param_1 + 0x2d0) = 0x1a5;
  *(void **)(param_1 + 0x2e8) = &unknown_var_9304_ptr;
  *(void **)(param_1 + 0x2f8) = &unknown_var_5904_ptr;
  *(int32_t *)(param_1 + 0x2f0) = 0x1a6;
  return param_1;
}



int64_t FUN_1806f3e00(int64_t param_1,int64_t *param_2)

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



int64_t FUN_1806f3ea0(int64_t param_1)

{
  func_0x0001806f2b60();
  *(int32_t *)(param_1 + 0x1e0) = 0x1a9;
  *(void **)(param_1 + 0x1d8) = &unknown_var_9656_ptr;
  *(code **)(param_1 + 0x1e8) = FUN_1806f5010;
  *(void **)(param_1 + 0x1f0) = &unknown_var_5920_ptr;
  *(void **)(param_1 + 0x1f8) = &unknown_var_9096_ptr;
  *(void **)(param_1 + 0x208) = &unknown_var_5984_ptr;
  *(int32_t *)(param_1 + 0x200) = 0x1aa;
  *(void **)(param_1 + 0x210) = &unknown_var_9112_ptr;
  *(void **)(param_1 + 0x220) = &unknown_var_6000_ptr;
  *(int32_t *)(param_1 + 0x218) = 0x1ab;
  *(void **)(param_1 + 0x228) = &unknown_var_9672_ptr;
  *(code **)(param_1 + 0x238) = FUN_1806f5090;
  *(code **)(param_1 + 0x240) = FUN_1806f5060;
  *(int32_t *)(param_1 + 0x230) = 0x1ac;
  *(void **)(param_1 + 0x248) = &unknown_var_9240_ptr;
  *(void **)(param_1 + 600) = &unknown_var_6128_ptr;
  *(void **)(param_1 + 0x260) = &unknown_var_6112_ptr;
  *(int32_t *)(param_1 + 0x250) = 0x1ad;
  *(void **)(param_1 + 0x268) = &unknown_var_9304_ptr;
  *(void **)(param_1 + 0x278) = &unknown_var_6144_ptr;
  *(int32_t *)(param_1 + 0x270) = 0x1ae;
  return param_1;
}



int64_t FUN_1806f4110(int64_t param_1)

{
  func_0x0001806f4000();
  *(int32_t *)(param_1 + 0xa8) = 0x1b8;
  *(void **)(param_1 + 0xa0) = &system_data_d7b0;
  *(void **)(param_1 + 0xb0) = &unknown_var_6208_ptr;
  *(void **)(param_1 + 0xb8) = &unknown_var_6368_ptr;
  return param_1;
}



int64_t FUN_1806f41b0(int64_t param_1)

{
  func_0x0001806f4000();
  *(int32_t *)(param_1 + 0xa8) = 0x1bb;
  *(void **)(param_1 + 0xa0) = &unknown_var_9728_ptr;
  *(void **)(param_1 + 0xb0) = &unknown_var_6208_ptr;
  *(void **)(param_1 + 0xb8) = &unknown_var_6368_ptr;
  *(void **)(param_1 + 0xc0) = &system_data_fdf0;
  *(void **)(param_1 + 0xd0) = &unknown_var_6192_ptr;
  *(void **)(param_1 + 0xd8) = &unknown_var_6352_ptr;
  *(int32_t *)(param_1 + 200) = 0x1bc;
  return param_1;
}



int64_t FUN_1806f4280(int64_t param_1)

{
  func_0x0001806f4000();
  *(int32_t *)(param_1 + 0xa8) = 0x1bf;
  *(void **)(param_1 + 0xa0) = &unknown_var_9728_ptr;
  *(void **)(param_1 + 0xb0) = &unknown_var_6208_ptr;
  *(void **)(param_1 + 0xb8) = &unknown_var_6368_ptr;
  *(void **)(param_1 + 0xc0) = &system_data_fdf0;
  *(void **)(param_1 + 0xd0) = &unknown_var_6192_ptr;
  *(void **)(param_1 + 0xd8) = &unknown_var_6352_ptr;
  *(int32_t *)(param_1 + 200) = 0x1c0;
  return param_1;
}



int64_t FUN_1806f4350(int64_t param_1)

{
  func_0x0001806f4000();
  *(int32_t *)(param_1 + 0xa8) = 0x1c3;
  *(void **)(param_1 + 0xa0) = &unknown_var_9736_ptr;
  *(void **)(param_1 + 0xb0) = &unknown_var_6208_ptr;
  *(void **)(param_1 + 0xb8) = &unknown_var_6368_ptr;
  *(void **)(param_1 + 0xc0) = &unknown_var_9744_ptr;
  *(void **)(param_1 + 0xd0) = &unknown_var_6192_ptr;
  *(void **)(param_1 + 0xd8) = &unknown_var_6352_ptr;
  *(int32_t *)(param_1 + 200) = 0x1c4;
  return param_1;
}



int64_t FUN_1806f4420(int64_t param_1)

{
  func_0x0001806f4000();
  *(int32_t *)(param_1 + 0xa8) = 0x1c7;
  *(void **)(param_1 + 0xa0) = &unknown_var_9752_ptr;
  *(void **)(param_1 + 0xb0) = &unknown_var_6208_ptr;
  *(void **)(param_1 + 0xb8) = &unknown_var_6368_ptr;
  *(void **)(param_1 + 0xc0) = &unknown_var_9768_ptr;
  *(void **)(param_1 + 0xd0) = &unknown_var_6192_ptr;
  *(void **)(param_1 + 0xd8) = &unknown_var_6352_ptr;
  *(int32_t *)(param_1 + 200) = 0x1c8;
  *(void **)(param_1 + 0xe0) = &unknown_var_9784_ptr;
  *(void **)(param_1 + 0xf0) = &unknown_var_6304_ptr;
  *(void **)(param_1 + 0xf8) = &unknown_var_5552_ptr;
  *(int32_t *)(param_1 + 0xe8) = 0x1c9;
  *(void **)(param_1 + 0x100) = &unknown_var_9800_ptr;
  *(void **)(param_1 + 0x110) = &unknown_var_6288_ptr;
  *(void **)(param_1 + 0x118) = &unknown_var_6416_ptr;
  *(int32_t *)(param_1 + 0x108) = 0x1ca;
  return param_1;
}



uint64_t FUN_1806f4690(uint64_t param_1,int64_t *param_2)

{
  (**(code **)(*param_2 + 0x40))(param_2,param_1);
  return param_1;
}



uint64_t FUN_1806f46c0(uint64_t param_1,int64_t *param_2)

{
  (**(code **)(*param_2 + 0x48))(param_2,param_1);
  return param_1;
}



uint64_t FUN_1806f46f0(uint64_t param_1,int64_t *param_2)

{
  (**(code **)(*param_2 + 0x50))(param_2,param_1);
  return param_1;
}



uint64_t FUN_1806f4720(uint64_t param_1,int64_t *param_2)

{
  (**(code **)(*param_2 + 0x58))(param_2,param_1);
  return param_1;
}






// 函数: void FUN_1806f4770(int64_t *param_1,int16_t *param_2)
void FUN_1806f4770(int64_t *param_1,int16_t *param_2)

{
  int16_t auStackX_8 [16];
  
  auStackX_8[0] = *param_2;
  (**(code **)(*param_1 + 0x70))(param_1,auStackX_8);
  return;
}



uint64_t FUN_1806f47a0(uint64_t param_1,int64_t *param_2)

{
  (**(code **)(*param_2 + 0x80))(param_2,param_1);
  return param_1;
}



uint64_t FUN_1806f4900(uint64_t param_1,int64_t *param_2)

{
  (**(code **)(*param_2 + 0x118))(param_2,param_1);
  return param_1;
}



uint64_t FUN_1806f4940(uint64_t param_1,int64_t *param_2)

{
  (**(code **)(*param_2 + 0x118))(param_2,param_1);
  return param_1;
}



uint64_t FUN_1806f4980(uint64_t param_1,int64_t *param_2)

{
  (**(code **)(*param_2 + 0x138))(param_2,param_1);
  return param_1;
}



uint64_t FUN_1806f49c0(uint64_t param_1,int64_t *param_2)

{
  (**(code **)(*param_2 + 0x148))(param_2,param_1);
  return param_1;
}



uint64_t FUN_1806f4a00(uint64_t param_1,int64_t *param_2)

{
  (**(code **)(*param_2 + 0x158))(param_2,param_1);
  return param_1;
}



uint64_t FUN_1806f4a40(uint64_t param_1,int64_t *param_2)

{
  (**(code **)(*param_2 + 0x168))(param_2,param_1);
  return param_1;
}



uint64_t FUN_1806f4a90(uint64_t param_1,int64_t *param_2)

{
  (**(code **)(*param_2 + 0x178))(param_2,param_1);
  return param_1;
}






// 函数: void FUN_1806f4bc0(int64_t *param_1,int16_t *param_2)
void FUN_1806f4bc0(int64_t *param_1,int16_t *param_2)

{
  int16_t auStackX_8 [16];
  
  auStackX_8[0] = *param_2;
  (**(code **)(*param_1 + 0x140))(param_1,auStackX_8);
  return;
}



uint64_t FUN_1806f4bf0(uint64_t param_1,int64_t *param_2)

{
  (**(code **)(*param_2 + 0x150))(param_2,param_1);
  return param_1;
}



uint64_t FUN_1806f4c40(uint64_t param_1,int64_t *param_2)

{
  (**(code **)(*param_2 + 0x100))(param_2,param_1);
  return param_1;
}



uint64_t FUN_1806f4c80(uint64_t param_1,int64_t *param_2)

{
  (**(code **)(*param_2 + 0x108))(param_2,param_1);
  return param_1;
}



uint64_t FUN_1806f4da0(uint64_t param_1,int64_t *param_2)

{
  (**(code **)(*param_2 + 0x100))(param_2,param_1);
  return param_1;
}






// 函数: void FUN_1806f4dd0(int64_t *param_1,int16_t *param_2)
void FUN_1806f4dd0(int64_t *param_1,int16_t *param_2)

{
  int16_t auStackX_8 [16];
  
  auStackX_8[0] = *param_2;
  (**(code **)(*param_1 + 0x108))(param_1,auStackX_8);
  return;
}



uint64_t FUN_1806f4e00(uint64_t param_1,int64_t *param_2)

{
  (**(code **)(*param_2 + 0x118))(param_2,param_1);
  return param_1;
}



uint64_t FUN_1806f4eb0(uint64_t param_1,int64_t *param_2)

{
  (**(code **)(*param_2 + 0x100))(param_2,param_1);
  return param_1;
}






// 函数: void FUN_1806f4f50(int64_t *param_1,int16_t *param_2)
void FUN_1806f4f50(int64_t *param_1,int16_t *param_2)

{
  int16_t auStackX_8 [16];
  
  auStackX_8[0] = *param_2;
  (**(code **)(*param_1 + 0x138))(param_1,auStackX_8);
  return;
}



uint64_t FUN_1806f4f80(uint64_t param_1,int64_t *param_2)

{
  (**(code **)(*param_2 + 0x148))(param_2,param_1);
  return param_1;
}



uint64_t FUN_1806f5010(uint64_t param_1,int64_t *param_2)

{
  (**(code **)(*param_2 + 0xe8))(param_2,param_1);
  return param_1;
}






// 函数: void FUN_1806f5060(int64_t *param_1,int16_t *param_2)
void FUN_1806f5060(int64_t *param_1,int16_t *param_2)

{
  int16_t auStackX_8 [16];
  
  auStackX_8[0] = *param_2;
  (**(code **)(*param_1 + 0x108))(param_1,auStackX_8);
  return;
}



uint64_t FUN_1806f5090(uint64_t param_1,int64_t *param_2)

{
  (**(code **)(*param_2 + 0x118))(param_2,param_1);
  return param_1;
}






