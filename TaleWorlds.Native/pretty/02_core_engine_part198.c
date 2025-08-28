#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part198.c - 14 个函数

// 函数: void FUN_18017c830(uint64_t param_1,uint64_t param_2)
void FUN_18017c830(uint64_t param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  void *puStack_a0;
  uint64_t *puStack_98;
  int32_t uStack_90;
  uint64_t uStack_88;
  
  puVar3 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0xa8,8,3);
  uVar5 = 0xfffffffffffffffe;
  puVar4 = puVar3;
  FUN_1803456e0(puVar3,param_2,param_1);
  *puVar4 = &unknown_var_6912_ptr;
  puVar1 = puVar4 + 0xe;
  *puVar1 = &unknown_var_720_ptr;
  puVar4[0xf] = 0;
  *(int32_t *)(puVar4 + 0x10) = 0;
  *puVar1 = &unknown_var_3456_ptr;
  puVar4[0x11] = 0;
  puVar4[0xf] = 0;
  *(int32_t *)(puVar4 + 0x10) = 0;
  puStack_a0 = &unknown_var_3456_ptr;
  uStack_88 = 0;
  puStack_98 = (uint64_t *)0x0;
  uStack_90 = 0;
  puVar4 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  puStack_98 = puVar4;
  uVar2 = FUN_18064e990(puVar4);
  uStack_88 = CONCAT44(uStack_88._4_4_,uVar2);
  *puVar4 = 0x6d614e2068746150;
  *(int16_t *)(puVar4 + 1) = 0x65;
  uStack_90 = 9;
  FUN_1803460a0(puVar3,&puStack_a0,puVar1,0,uVar5);
  puStack_a0 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017c880(uint64_t param_1,uint64_t param_2)
void FUN_18017c880(uint64_t param_1,uint64_t param_2)

{
  longlong *plVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  longlong *plVar6;
  void *puStack_48;
  uint64_t *puStack_40;
  int32_t uStack_38;
  uint64_t uStack_30;
  
  uVar5 = 0xfffffffffffffffe;
  puVar3 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x178,8,3,0xfffffffffffffffe);
  FUN_1803624e0(puVar3,param_2,param_1);
  *puVar3 = &unknown_var_7280_ptr;
  plVar1 = puVar3 + 0x2a;
  *plVar1 = (longlong)&unknown_var_720_ptr;
  puVar3[0x2b] = 0;
  *(int32_t *)(puVar3 + 0x2c) = 0;
  *plVar1 = (longlong)&unknown_var_3456_ptr;
  puVar3[0x2d] = 0;
  puVar3[0x2b] = 0;
  *(int32_t *)(puVar3 + 0x2c) = 0;
  puVar3[0x2e] = 0;
  plVar6 = plVar1;
  (**(code **)(*plVar1 + 0x10))(plVar1,&system_buffer_ptr);
  puStack_48 = &unknown_var_3456_ptr;
  uStack_30 = 0;
  puStack_40 = (uint64_t *)0x0;
  uStack_38 = 0;
  puVar4 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  puStack_40 = puVar4;
  uVar2 = FUN_18064e990(puVar4);
  uStack_30 = CONCAT44(uStack_30._4_4_,uVar2);
  *puVar4 = 0x6d614e2068746150;
  *(int16_t *)(puVar4 + 1) = 0x65;
  uStack_38 = 9;
  FUN_1803460a0(puVar3,&puStack_48,plVar1,0,uVar5,plVar6);
  puStack_48 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017ca10(uint64_t param_1,uint64_t param_2)
void FUN_18017ca10(uint64_t param_1,uint64_t param_2)

{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  void *puStack_b8;
  uint64_t *puStack_b0;
  int32_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_38;
  uint64_t uStack_30;
  
  uStack_30 = 0x18017ca3a;
  puVar2 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x180,8,3);
  uStack_38 = 0xfffffffffffffffe;
  puVar3 = puVar2;
  FUN_1803456e0(puVar2,param_2,param_1);
  *puVar3 = &unknown_var_7952_ptr;
  FUN_1808fc838(puVar3 + 0xe,0x20,4,FUN_180627850,FUN_180627b90);
  FUN_1808fc838(puVar2 + 0x1e,0x20,4,FUN_180627850,FUN_180627b90);
  puVar2[0x2f] = 0;
  puStack_b8 = &unknown_var_3456_ptr;
  uStack_a0 = 0;
  puStack_b0 = (uint64_t *)0x0;
  uStack_a8 = 0;
  puVar3 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  puStack_b0 = puVar3;
  uVar1 = FUN_18064e990(puVar3);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar1);
  *puVar3 = 0x614d72656d6d7553;
  *(int32_t *)(puVar3 + 1) = 0x69726574;
  *(int16_t *)((longlong)puVar3 + 0xc) = 0x6c61;
  *(int8_t *)((longlong)puVar3 + 0xe) = 0;
  uStack_a8 = 0xe;
  FUN_1803460a0(puVar2,&puStack_b8,puVar2 + 0xe,0);
  puStack_b8 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017ca60(uint64_t param_1,uint64_t param_2)
void FUN_18017ca60(uint64_t param_1,uint64_t param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int32_t uVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  void *puStack_128;
  uint64_t *puStack_120;
  int32_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_48;
  
  puVar5 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x130,8,3);
  uStack_48 = 0xfffffffffffffffe;
  puVar6 = puVar5;
  FUN_1803456e0(puVar5,param_2,param_1);
  *puVar6 = &unknown_var_8496_ptr;
  plVar1 = puVar6 + 0xe;
  *plVar1 = (longlong)&unknown_var_720_ptr;
  puVar6[0xf] = 0;
  *(int32_t *)(puVar6 + 0x10) = 0;
  *plVar1 = (longlong)&unknown_var_3456_ptr;
  puVar6[0x11] = 0;
  puVar6[0xf] = 0;
  *(int32_t *)(puVar6 + 0x10) = 0;
  plVar2 = puVar5 + 0x12;
  *plVar2 = (longlong)&unknown_var_720_ptr;
  puVar5[0x13] = 0;
  *(int32_t *)(puVar5 + 0x14) = 0;
  *plVar2 = (longlong)&unknown_var_3456_ptr;
  puVar5[0x15] = 0;
  puVar5[0x13] = 0;
  *(int32_t *)(puVar5 + 0x14) = 0;
  plVar3 = puVar5 + 0x16;
  *plVar3 = (longlong)&unknown_var_720_ptr;
  puVar5[0x17] = 0;
  *(int32_t *)(puVar5 + 0x18) = 0;
  *plVar3 = (longlong)&unknown_var_3456_ptr;
  puVar5[0x19] = 0;
  puVar5[0x17] = 0;
  *(int32_t *)(puVar5 + 0x18) = 0;
  puVar5[0x1a] = &unknown_var_720_ptr;
  puVar5[0x1b] = 0;
  *(int32_t *)(puVar5 + 0x1c) = 0;
  puVar5[0x1a] = &unknown_var_3456_ptr;
  puVar5[0x1d] = 0;
  puVar5[0x1b] = 0;
  *(int32_t *)(puVar5 + 0x1c) = 0;
  (**(code **)(*plVar1 + 0x10))(plVar1,&system_buffer_ptr);
  (**(code **)(*plVar2 + 0x10))(plVar2,&system_buffer_ptr);
  (**(code **)(*plVar3 + 0x10))(plVar3,&system_buffer_ptr);
  puVar5[0x1e] = 0x3ff0000000000000;
  puVar5[0x1f] = 0;
  puVar5[0x20] = 0;
  *(int8_t *)(puVar5 + 0x22) = 0;
  puStack_128 = &unknown_var_3456_ptr;
  uStack_110 = 0;
  puStack_120 = (uint64_t *)0x0;
  uStack_118 = 0;
  puVar6 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar6 = 0;
  puStack_120 = puVar6;
  uVar4 = FUN_18064e990(puVar6);
  uStack_110 = CONCAT44(uStack_110._4_4_,uVar4);
  *puVar6 = 0x6e6f74656c656b53;
  *(int32_t *)(puVar6 + 1) = 0x6d614e20;
  *(int16_t *)((longlong)puVar6 + 0xc) = 0x65;
  uStack_118 = 0xd;
  FUN_1803460a0(puVar5,&puStack_128,plVar1,0);
  puStack_128 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18017cac0(uint64_t param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x70,8,3,0xfffffffffffffffe);
  FUN_1803456e0(puVar1,param_2,param_1);
  *puVar1 = &unknown_var_7592_ptr;
  return puVar1;
}



uint64_t *
FUN_18017cb20(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_7592_ptr;
  FUN_1803457d0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x70,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017cb70(uint64_t param_1,uint64_t param_2)
void FUN_18017cb70(uint64_t param_1,uint64_t param_2)

{
  int32_t uVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  uint64_t *puVar4;
  void *puStack_40;
  int32_t *puStack_38;
  int32_t uStack_30;
  uint64_t uStack_28;
  
  puVar2 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0xa8,8,3,0xfffffffffffffffe);
  puVar4 = puVar2;
  FUN_1803456e0(puVar2,param_2,param_1);
  *puVar4 = &unknown_var_7224_ptr;
  *(int32_t *)(puVar4 + 0x14) = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0;
  *(int8_t *)((longlong)puVar4 + 0xa4) = 0;
  puStack_40 = &unknown_var_3456_ptr;
  uStack_28 = 0;
  puStack_38 = (int32_t *)0x0;
  uStack_30 = 0;
  puVar3 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  puStack_38 = puVar3;
  uVar1 = FUN_18064e990(puVar3);
  uStack_28 = CONCAT44(uStack_28._4_4_,uVar1);
  *puVar3 = 0x776f6853;
  *(int8_t *)(puVar3 + 1) = 0;
  uStack_30 = 4;
  FUN_1803460a0(puVar2,&puStack_40,(longlong)puVar2 + 0xa4,3);
  puStack_40 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017ccd0(uint64_t param_1)
void FUN_18017ccd0(uint64_t param_1)

{
  int8_t auStack_118 [32];
  int32_t uStack_f8;
  uint64_t uStack_f0;
  void **appuStack_e8 [2];
  void *puStack_d8;
  int8_t *puStack_d0;
  int32_t uStack_c8;
  int8_t auStack_c0 [72];
  void *apuStack_78 [11];
  int32_t uStack_20;
  ulonglong uStack_18;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_118;
  uStack_f8 = 0;
  puStack_d8 = &unknown_var_3480_ptr;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = 4;
  strcpy_s(auStack_c0,0x40,&system_data_9828);
  FUN_1800b8300(apuStack_78,&puStack_d8);
  uStack_20 = 3;
  uStack_f8 = 1;
  FUN_180180730(param_1,appuStack_e8,apuStack_78);
  uStack_f8 = 0;
  appuStack_e8[0] = apuStack_78;
  apuStack_78[0] = &unknown_var_720_ptr;
  puStack_d8 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_118);
}



uint64_t *
FUN_18017cde0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_7224_ptr;
  FUN_1803457d0();
  if ((param_2 & 1) != 0) {
    free(param_1,0xa8,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017ce30(uint64_t param_1,uint64_t param_2)
void FUN_18017ce30(uint64_t param_1,uint64_t param_2)

{
  longlong *plVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  void *puStack_208;
  uint64_t *puStack_200;
  int32_t uStack_1f8;
  uint64_t uStack_1f0;
  uint64_t uStack_48;
  
  puVar3 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x230,0x10,3);
  uStack_48 = 0xfffffffffffffffe;
  puVar4 = puVar3;
  FUN_1803456e0(puVar3,param_2,param_1);
  *puVar4 = &unknown_var_3352_ptr;
  FUN_180094c20(puVar4 + 0xe);
  puVar3[0x36] = 0;
  puVar3[0x43] = 0;
  puVar3[0x44] = 0;
  plVar1 = (longlong *)puVar3[0x36];
  puVar3[0x36] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  puVar3[0x37] = 0x404e000000000000;
  *(int32_t *)(puVar3 + 0x38) = 0x100;
  *(int32_t *)(puVar3 + 0x39) = 0x100;
  *(int32_t *)((longlong)puVar3 + 0x1c4) = 0x100;
  puVar3[0x3a] = 0x3f847ae147ae147b;
  puVar3[0x3b] = 0x408f400000000000;
  puVar3[0x3f] = 0;
  puVar3[0x40] = 0;
  puVar3[0x41] = 0;
  *(int16_t *)(puVar3 + 0x42) = 0;
  *(int32_t *)(puVar3 + 0x3c) = 0x3f800000;
  *(int32_t *)((longlong)puVar3 + 0x1e4) = 0;
  *(int32_t *)(puVar3 + 0x3d) = 0x3f800000;
  *(int32_t *)((longlong)puVar3 + 0x1ec) = 0x3f800000;
  *(int8_t *)(puVar3 + 0x3e) = 0;
  puStack_208 = &unknown_var_3456_ptr;
  uStack_1f0 = 0;
  puStack_200 = (uint64_t *)0x0;
  uStack_1f8 = 0;
  puVar4 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  puStack_200 = puVar4;
  uVar2 = FUN_18064e990(puVar4);
  uStack_1f0 = CONCAT44(uStack_1f0._4_4_,uVar2);
  *puVar4 = 0x7267654428564f46;
  *(int32_t *)(puVar4 + 1) = 0x29736565;
  *(int8_t *)((longlong)puVar4 + 0xc) = 0;
  uStack_1f8 = 0xc;
  FUN_1803460a0(puVar3,&puStack_208,puVar3 + 0x37,1);
  puStack_208 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017ce80(uint64_t param_1)
void FUN_18017ce80(uint64_t param_1)

{
  int8_t auStack_608 [32];
  int32_t uStack_5e8;
  void **appuStack_5e0 [2];
  uint64_t uStack_5d0;
  void *apuStack_5c8 [11];
  int32_t uStack_570;
  void *puStack_568;
  int8_t *puStack_560;
  int32_t uStack_558;
  int8_t auStack_550 [72];
  void *puStack_508;
  int8_t *puStack_500;
  int32_t uStack_4f8;
  int8_t auStack_4f0 [72];
  void *puStack_4a8;
  int8_t *puStack_4a0;
  int32_t uStack_498;
  int8_t auStack_490 [72];
  void *puStack_448;
  int8_t *puStack_440;
  int32_t uStack_438;
  int8_t auStack_430 [72];
  void *puStack_3e8;
  int8_t *puStack_3e0;
  int32_t uStack_3d8;
  int8_t auStack_3d0 [72];
  void *puStack_388;
  int8_t *puStack_380;
  int32_t uStack_378;
  int8_t auStack_370 [72];
  void *puStack_328;
  int8_t *puStack_320;
  int32_t uStack_318;
  int8_t auStack_310 [72];
  void *puStack_2c8;
  int8_t *puStack_2c0;
  int32_t uStack_2b8;
  int8_t auStack_2b0 [72];
  void *puStack_268;
  int8_t *puStack_260;
  int32_t uStack_258;
  int8_t auStack_250 [72];
  void *puStack_208;
  int8_t *puStack_200;
  int32_t uStack_1f8;
  int8_t auStack_1f0 [72];
  void *puStack_1a8;
  int8_t *puStack_1a0;
  int32_t uStack_198;
  int8_t auStack_190 [72];
  void *puStack_148;
  int8_t *puStack_140;
  int32_t uStack_138;
  int8_t auStack_130 [72];
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [72];
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  ulonglong uStack_28;
  
  uStack_5d0 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_608;
  uStack_5e8 = 0;
  puStack_568 = &unknown_var_3480_ptr;
  puStack_560 = auStack_550;
  auStack_550[0] = 0;
  uStack_558 = 0xc;
  strcpy_s(auStack_550,0x40,&system_data_9848);
  FUN_1800b8300(apuStack_5c8,&puStack_568);
  uStack_570 = 1;
  uStack_5e8 = 1;
  FUN_180180730(param_1,appuStack_5e0,apuStack_5c8);
  uStack_5e8 = 0;
  appuStack_5e0[0] = apuStack_5c8;
  apuStack_5c8[0] = &unknown_var_720_ptr;
  puStack_568 = &unknown_var_720_ptr;
  puStack_508 = &unknown_var_3480_ptr;
  puStack_500 = auStack_4f0;
  auStack_4f0[0] = 0;
  uStack_4f8 = 5;
  strcpy_s(auStack_4f0,0x40,&system_data_9e30);
  FUN_1800b8300(apuStack_5c8,&puStack_508);
  uStack_570 = 4;
  uStack_5e8 = 2;
  FUN_180180730(param_1,appuStack_5e0,apuStack_5c8);
  uStack_5e8 = 0;
  appuStack_5e0[0] = apuStack_5c8;
  apuStack_5c8[0] = &unknown_var_720_ptr;
  puStack_508 = &unknown_var_720_ptr;
  puStack_4a8 = &unknown_var_3480_ptr;
  puStack_4a0 = auStack_490;
  auStack_490[0] = 0;
  uStack_498 = 6;
  strcpy_s(auStack_490,0x40,&system_data_9e38);
  FUN_1800b8300(apuStack_5c8,&puStack_4a8);
  uStack_570 = 4;
  uStack_5e8 = 4;
  FUN_180180730(param_1,appuStack_5e0,apuStack_5c8);
  uStack_5e8 = 0;
  appuStack_5e0[0] = apuStack_5c8;
  apuStack_5c8[0] = &unknown_var_720_ptr;
  puStack_4a8 = &unknown_var_720_ptr;
  puStack_448 = &unknown_var_3480_ptr;
  puStack_440 = auStack_430;
  auStack_430[0] = 0;
  uStack_438 = 0xf;
  strcpy_s(auStack_430,0x40,&system_data_9870);
  FUN_1800b8300(apuStack_5c8,&puStack_448);
  uStack_570 = 4;
  uStack_5e8 = 8;
  FUN_180180730(param_1,appuStack_5e0,apuStack_5c8);
  uStack_5e8 = 0;
  appuStack_5e0[0] = apuStack_5c8;
  apuStack_5c8[0] = &unknown_var_720_ptr;
  puStack_448 = &unknown_var_720_ptr;
  puStack_3e8 = &unknown_var_3480_ptr;
  puStack_3e0 = auStack_3d0;
  auStack_3d0[0] = 0;
  uStack_3d8 = 4;
  strcpy_s(auStack_3d0,0x40,&system_data_9868);
  FUN_1800b8300(apuStack_5c8,&puStack_3e8);
  uStack_570 = 1;
  uStack_5e8 = 0x10;
  FUN_180180730(param_1,appuStack_5e0,apuStack_5c8);
  uStack_5e8 = 0;
  appuStack_5e0[0] = apuStack_5c8;
  apuStack_5c8[0] = &unknown_var_720_ptr;
  puStack_3e8 = &unknown_var_720_ptr;
  puStack_388 = &unknown_var_3480_ptr;
  puStack_380 = auStack_370;
  auStack_370[0] = 0;
  uStack_378 = 3;
  strcpy_s(auStack_370,0x40,&system_data_9890);
  FUN_1800b8300(apuStack_5c8,&puStack_388);
  uStack_570 = 1;
  uStack_5e8 = 0x20;
  FUN_180180730(param_1,appuStack_5e0,apuStack_5c8);
  uStack_5e8 = 0;
  appuStack_5e0[0] = apuStack_5c8;
  apuStack_5c8[0] = &unknown_var_720_ptr;
  puStack_388 = &unknown_var_720_ptr;
  puStack_328 = &unknown_var_3480_ptr;
  puStack_320 = auStack_310;
  auStack_310[0] = 0;
  uStack_318 = 0xf;
  strcpy_s(auStack_310,0x40,&system_data_9880);
  FUN_1800b8300(apuStack_5c8,&puStack_328);
  uStack_570 = 1;
  uStack_5e8 = 0x40;
  FUN_180180730(param_1,appuStack_5e0,apuStack_5c8);
  uStack_5e8 = 0;
  appuStack_5e0[0] = apuStack_5c8;
  apuStack_5c8[0] = &unknown_var_720_ptr;
  puStack_328 = &unknown_var_720_ptr;
  puStack_2c8 = &unknown_var_3480_ptr;
  puStack_2c0 = auStack_2b0;
  auStack_2b0[0] = 0;
  uStack_2b8 = 9;
  strcpy_s(auStack_2b0,0x40,&system_data_98a8);
  FUN_1800b8300(apuStack_5c8,&puStack_2c8);
  uStack_570 = 1;
  uStack_5e8 = 0x80;
  FUN_180180730(param_1,appuStack_5e0,apuStack_5c8);
  uStack_5e8 = 0;
  appuStack_5e0[0] = apuStack_5c8;
  apuStack_5c8[0] = &unknown_var_720_ptr;
  puStack_2c8 = &unknown_var_720_ptr;
  puStack_268 = &unknown_var_3480_ptr;
  puStack_260 = auStack_250;
  auStack_250[0] = 0;
  uStack_258 = 0xd;
  strcpy_s(auStack_250,0x40,&system_data_9898);
  FUN_1800b8300(apuStack_5c8,&puStack_268);
  uStack_570 = 1;
  uStack_5e8 = 0x100;
  FUN_180180730(param_1,appuStack_5e0,apuStack_5c8);
  uStack_5e8 = 0;
  appuStack_5e0[0] = apuStack_5c8;
  apuStack_5c8[0] = &unknown_var_720_ptr;
  puStack_268 = &unknown_var_720_ptr;
  puStack_208 = &unknown_var_3480_ptr;
  puStack_200 = auStack_1f0;
  auStack_1f0[0] = 0;
  uStack_1f8 = 0x10;
  strcpy_s(auStack_1f0,0x40,&system_data_98c8);
  FUN_1800b8300(apuStack_5c8,&puStack_208);
  uStack_570 = 0xc;
  uStack_5e8 = 0x200;
  FUN_180180730(param_1,appuStack_5e0,apuStack_5c8);
  uStack_5e8 = 0;
  appuStack_5e0[0] = apuStack_5c8;
  apuStack_5c8[0] = &unknown_var_720_ptr;
  puStack_208 = &unknown_var_720_ptr;
  puStack_1a8 = &unknown_var_3480_ptr;
  puStack_1a0 = auStack_190;
  auStack_190[0] = 0;
  uStack_198 = 0xd;
  strcpy_s(auStack_190,0x40,&system_data_98b8);
  FUN_1800b8300(apuStack_5c8,&puStack_1a8);
  uStack_570 = 3;
  uStack_5e8 = 0x400;
  FUN_180180730(param_1,appuStack_5e0,apuStack_5c8);
  uStack_5e8 = 0;
  appuStack_5e0[0] = apuStack_5c8;
  apuStack_5c8[0] = &unknown_var_720_ptr;
  puStack_1a8 = &unknown_var_720_ptr;
  puStack_148 = &unknown_var_3480_ptr;
  puStack_140 = auStack_130;
  auStack_130[0] = 0;
  uStack_138 = 0x18;
  strcpy_s(auStack_130,0x40,&system_data_98f0);
  FUN_1800b8300(apuStack_5c8,&puStack_148);
  uStack_570 = 0xb;
  uStack_5e8 = 0x800;
  FUN_180180730(param_1,appuStack_5e0,apuStack_5c8);
  uStack_5e8 = 0;
  appuStack_5e0[0] = apuStack_5c8;
  apuStack_5c8[0] = &unknown_var_720_ptr;
  puStack_148 = &unknown_var_720_ptr;
  puStack_e8 = &unknown_var_3480_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0xc;
  strcpy_s(auStack_d0,0x40,&system_data_98e0);
  FUN_1800b8300(apuStack_5c8,&puStack_e8);
  uStack_570 = 0xb;
  uStack_5e8 = 0x1000;
  FUN_180180730(param_1,appuStack_5e0,apuStack_5c8);
  uStack_5e8 = 0;
  appuStack_5e0[0] = apuStack_5c8;
  apuStack_5c8[0] = &unknown_var_720_ptr;
  puStack_e8 = &unknown_var_720_ptr;
  puStack_88 = &unknown_var_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 10;
  strcpy_s(auStack_70,0x40,&system_data_9928);
  FUN_1800b8300(apuStack_5c8,&puStack_88);
  uStack_570 = 0xb;
  uStack_5e8 = 0x2000;
  FUN_180180730(param_1,appuStack_5e0,apuStack_5c8);
  uStack_5e8 = 0;
  appuStack_5e0[0] = apuStack_5c8;
  apuStack_5c8[0] = &unknown_var_720_ptr;
  puStack_88 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_608);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017d800(uint64_t param_1,uint64_t param_2)
void FUN_18017d800(uint64_t param_1,uint64_t param_2)

{
  int32_t uVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  uint64_t *puVar4;
  void *puStack_40;
  int32_t *puStack_38;
  int32_t uStack_30;
  uint64_t uStack_28;
  
  puVar2 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x88,8,3,0xfffffffffffffffe);
  puVar4 = puVar2;
  FUN_1803456e0(puVar2,param_2,param_1);
  *puVar4 = &unknown_var_8888_ptr;
  puVar4[0xe] = param_2;
  puVar4[0xf] = 0;
  *(int32_t *)(puVar4 + 0x10) = 0;
  *(int8_t *)((longlong)puVar4 + 0x84) = 0;
  puStack_40 = &unknown_var_3456_ptr;
  uStack_28 = 0;
  puStack_38 = (int32_t *)0x0;
  uStack_30 = 0;
  puVar3 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  puStack_38 = puVar3;
  uVar1 = FUN_18064e990(puVar3);
  uStack_28 = CONCAT44(uStack_28._4_4_,uVar1);
  *puVar3 = 0x64676152;
  puVar3[1] = 0x206c6c6f;
  puVar3[2] = 0x62616e45;
  puVar3[3] = 0x64656c;
  uStack_30 = 0xf;
  FUN_1803460a0(puVar2,&puStack_40,(longlong)puVar2 + 0x84,3);
  puStack_40 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017d940(uint64_t param_1,uint64_t param_2)
void FUN_18017d940(uint64_t param_1,uint64_t param_2)

{
  longlong *plVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  longlong *plVar6;
  void *puStack_98;
  uint64_t *puStack_90;
  int32_t uStack_88;
  uint64_t uStack_80;
  
  puVar3 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0xa0,8,3);
  uVar5 = 0xfffffffffffffffe;
  puVar4 = puVar3;
  FUN_1803456e0(puVar3,param_2,param_1);
  *puVar4 = &unknown_var_9296_ptr;
  plVar1 = puVar4 + 0xe;
  *plVar1 = (longlong)&unknown_var_720_ptr;
  puVar4[0xf] = 0;
  *(int32_t *)(puVar4 + 0x10) = 0;
  *plVar1 = (longlong)&unknown_var_3456_ptr;
  puVar4[0x11] = 0;
  puVar4[0xf] = 0;
  *(int32_t *)(puVar4 + 0x10) = 0;
  puVar4[0x12] = 0;
  plVar6 = plVar1;
  (**(code **)(*plVar1 + 0x10))(plVar1,&system_buffer_ptr);
  puStack_98 = &unknown_var_3456_ptr;
  uStack_80 = 0;
  puStack_90 = (uint64_t *)0x0;
  uStack_88 = 0;
  puVar4 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  puStack_90 = puVar4;
  uVar2 = FUN_18064e990(puVar4);
  uStack_80 = CONCAT44(uStack_80._4_4_,uVar2);
  *puVar4 = 0x6d614e2068746150;
  *(int16_t *)(puVar4 + 1) = 0x65;
  uStack_88 = 9;
  FUN_1803460a0(puVar3,&puStack_98,plVar1,0,uVar5,plVar6);
  puStack_98 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18017d990(uint64_t param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x78,8,3,0xfffffffffffffffe);
  FUN_1803456e0(puVar1,param_2,param_1);
  *puVar1 = &unknown_var_9680_ptr;
  *(int32_t *)((longlong)puVar1 + 0x74) = 0xdeadbeaf;
  *(int8_t *)(puVar1 + 0xe) = 0;
  return puVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017da00(uint64_t param_1,uint64_t param_2)
void FUN_18017da00(uint64_t param_1,uint64_t param_2)

{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  void *puStack_b8;
  uint64_t *puStack_b0;
  int32_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_38;
  uint64_t uStack_30;
  
  uStack_30 = 0x18017da2a;
  puVar2 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0xa8,8,3);
  uStack_38 = 0xfffffffffffffffe;
  puVar3 = puVar2;
  FUN_1803456e0(puVar2,param_2,param_1);
  *puVar3 = &unknown_var_128_ptr;
  *(int32_t *)(puVar2 + 0x14) = 0x3f800000;
  puVar2[0xe] = 0x4044000000000000;
  puVar2[0xf] = 0x4010000000000000;
  *(int32_t *)(puVar2 + 0x12) = 0;
  *(int32_t *)((longlong)puVar2 + 0x94) = 0;
  *(int32_t *)(puVar2 + 0x13) = 0;
  *(int32_t *)((longlong)puVar2 + 0x9c) = 0;
  *(int32_t *)(puVar2 + 0x14) = 0x3f800000;
  puVar2[0x10] = 0x4024000000000000;
  puVar2[0x11] = 0x3fd0000000000000;
  puStack_b8 = &unknown_var_3456_ptr;
  uStack_a0 = 0;
  puStack_b0 = (uint64_t *)0x0;
  uStack_a8 = 0;
  puVar3 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  puStack_b0 = puVar3;
  uVar1 = FUN_18064e990(puVar3);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar1);
  *puVar3 = 0x6f6d412065766f4d;
  *(int32_t *)(puVar3 + 1) = 0x746e75;
  uStack_a8 = 0xb;
  FUN_1803460a0(puVar2,&puStack_b8,puVar2 + 0xe,1);
  puStack_b8 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017da50(uint64_t param_1,uint64_t param_2)
void FUN_18017da50(uint64_t param_1,uint64_t param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int32_t uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  longlong *plVar7;
  void *puStack_48;
  uint64_t *puStack_40;
  int32_t uStack_38;
  uint64_t uStack_30;
  
  uVar6 = 0xfffffffffffffffe;
  puVar4 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x98,8,3,0xfffffffffffffffe);
  puVar5 = puVar4;
  FUN_1803456e0(puVar4,param_2,param_1);
  *puVar5 = &unknown_var_648_ptr;
  plVar1 = puVar5 + 0xe;
  *plVar1 = (longlong)&unknown_var_720_ptr;
  puVar5[0xf] = 0;
  *(int32_t *)(puVar5 + 0x10) = 0;
  *plVar1 = (longlong)&unknown_var_3456_ptr;
  puVar5[0x11] = 0;
  puVar5[0xf] = 0;
  *(int32_t *)(puVar5 + 0x10) = 0;
  puVar5[0x12] = 0;
  plVar7 = plVar1;
  (**(code **)(*plVar1 + 0x10))(plVar1,0);
  plVar2 = (longlong *)puVar4[0x12];
  puVar4[0x12] = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  puStack_48 = &unknown_var_3456_ptr;
  uStack_30 = 0;
  puStack_40 = (uint64_t *)0x0;
  uStack_38 = 0;
  puVar5 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar5 = 0;
  puStack_40 = puVar5;
  uVar3 = FUN_18064e990(puVar5);
  uStack_30 = CONCAT44(uStack_30._4_4_,uVar3);
  *puVar5 = 0x6570795474736554;
  *(int8_t *)(puVar5 + 1) = 0;
  uStack_38 = 8;
  FUN_1803460a0(puVar4,&puStack_48,plVar1,9,uVar6,plVar7);
  puStack_48 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017dbd0(uint64_t param_1,uint64_t param_2)
void FUN_18017dbd0(uint64_t param_1,uint64_t param_2)

{
  int32_t uVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  uint64_t *puVar4;
  void *puStack_40;
  int32_t *puStack_38;
  int32_t uStack_30;
  uint64_t uStack_28;
  
  puVar2 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x78,8,3,0xfffffffffffffffe);
  puVar4 = puVar2;
  FUN_1803456e0(puVar2,param_2,param_1);
  *puVar4 = &unknown_var_1024_ptr;
  *(int8_t *)(puVar4 + 0xe) = 0;
  puStack_40 = &unknown_var_3456_ptr;
  uStack_28 = 0;
  puStack_38 = (int32_t *)0x0;
  uStack_30 = 0;
  puVar3 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x12,0x13);
  *(int8_t *)puVar3 = 0;
  puStack_38 = puVar3;
  uVar1 = FUN_18064e990(puVar3);
  uStack_28 = CONCAT44(uStack_28._4_4_,uVar1);
  *puVar3 = 0x65736552;
  puVar3[1] = 0x76452074;
  puVar3[2] = 0x20797265;
  puVar3[3] = 0x6d617246;
  *(int16_t *)(puVar3 + 4) = 0x65;
  uStack_30 = 0x11;
  FUN_1803460a0(puVar2,&puStack_40,puVar2 + 0xe,3);
  puStack_40 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017dd10(uint64_t param_1,uint64_t param_2)
void FUN_18017dd10(uint64_t param_1,uint64_t param_2)

{
  int32_t uVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  uint64_t *puVar4;
  void *puStack_138;
  int32_t *puStack_130;
  int32_t uStack_128;
  uint64_t uStack_120;
  uint64_t uStack_38;
  uint64_t uStack_30;
  
  uStack_30 = 0x18017dd3a;
  puVar2 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0xb8,8,3);
  uStack_38 = 0xfffffffffffffffe;
  puVar4 = puVar2;
  FUN_1803456e0(puVar2,param_2,param_1);
  *puVar4 = &unknown_var_1584_ptr;
  puVar4[0x13] = 0;
  puVar4[0x14] = 0;
  puVar4[0x15] = 0;
  *(int32_t *)(puVar4 + 0x16) = 3;
  puStack_138 = &unknown_var_3456_ptr;
  uStack_120 = 0;
  puStack_130 = (int32_t *)0x0;
  uStack_128 = 0;
  puVar3 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x18,0x13);
  *(int8_t *)puVar3 = 0;
  puStack_130 = puVar3;
  uVar1 = FUN_18064e990(puVar3);
  uStack_120 = CONCAT44(uStack_120._4_4_,uVar1);
  *puVar3 = 0x6e756f42;
  puVar3[1] = 0x676e6964;
  puVar3[2] = 0x786f4220;
  puVar3[3] = 0x6e6f4320;
  *(uint64_t *)(puVar3 + 4) = 0x746e6961727473;
  uStack_128 = 0x17;
  FUN_1803460a0(puVar2,&puStack_138,(longlong)puVar2 + 0x74,2);
  puStack_138 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



