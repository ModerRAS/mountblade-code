#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part083_sub002_sub002.c - 1 个函数

// 函数: void FUN_180248910(longlong param_1)
void FUN_180248910(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  int32_t uVar5;
  int iVar6;
  int *piVar7;
  void *puVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int *piVar12;
  ulonglong uVar13;
  longlong lVar14;
  byte bVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong lStackX_18;
  void **ppuStackX_20;
  longlong *plStack_478;
  longlong *plStack_470;
  longlong *plStack_468;
  int32_t uStack_460;
  void *puStack_458;
  int32_t *puStack_450;
  int32_t uStack_448;
  uint64_t uStack_440;
  int16_t uStack_438;
  longlong lStack_430;
  void *puStack_428;
  int32_t *puStack_420;
  int32_t uStack_418;
  uint64_t uStack_410;
  int16_t uStack_408;
  longlong lStack_400;
  void *puStack_3f8;
  int32_t *puStack_3f0;
  int32_t uStack_3e8;
  uint64_t uStack_3e0;
  byte bStack_3d8;
  int8_t uStack_3d7;
  longlong lStack_3d0;
  void *puStack_3c8;
  int32_t *puStack_3c0;
  int32_t uStack_3b8;
  uint64_t uStack_3b0;
  byte bStack_3a8;
  int8_t uStack_3a7;
  longlong lStack_3a0;
  void *puStack_398;
  int32_t *puStack_390;
  int32_t uStack_388;
  uint64_t uStack_380;
  byte bStack_378;
  int8_t uStack_377;
  longlong lStack_370;
  void *puStack_368;
  uint64_t *puStack_360;
  int32_t uStack_358;
  uint64_t uStack_350;
  int16_t uStack_348;
  longlong lStack_340;
  void *puStack_338;
  uint64_t *puStack_330;
  int32_t uStack_328;
  uint64_t uStack_320;
  int16_t uStack_318;
  longlong lStack_310;
  void *puStack_308;
  int32_t *puStack_300;
  int32_t uStack_2f8;
  uint64_t uStack_2f0;
  int16_t uStack_2e8;
  longlong lStack_2e0;
  void *puStack_2d8;
  int32_t *puStack_2d0;
  int32_t uStack_2c8;
  uint64_t uStack_2c0;
  int16_t uStack_2b8;
  longlong lStack_2b0;
  void *puStack_2a8;
  int32_t *puStack_2a0;
  int32_t uStack_298;
  uint64_t uStack_290;
  int16_t uStack_288;
  longlong lStack_280;
  void *puStack_278;
  uint64_t *puStack_270;
  int32_t uStack_268;
  uint64_t uStack_260;
  int16_t uStack_258;
  longlong lStack_250;
  void *puStack_248;
  uint64_t *puStack_240;
  int32_t uStack_238;
  uint64_t uStack_230;
  int16_t uStack_228;
  longlong lStack_220;
  void *puStack_218;
  int8_t *puStack_210;
  uint uStack_208;
  uint64_t uStack_200;
  int *piStack_1f8;
  int *piStack_1f0;
  int *piStack_1e8;
  int32_t uStack_1e0;
  void *puStack_1d8;
  longlong lStack_1d0;
  int32_t uStack_1c8;
  uint64_t uStack_1c0;
  uint64_t uStack_1b8;
  ulonglong uStack_1b0;
  ulonglong uStack_1a8;
  int32_t uStack_1a0;
  int aiStack_198 [2];
  void *puStack_190;
  longlong lStack_188;
  int32_t uStack_178;
  void *puStack_170;
  longlong lStack_168;
  int32_t uStack_158;
  void *puStack_150;
  longlong lStack_148;
  int32_t uStack_138;
  void *puStack_130;
  longlong lStack_128;
  int32_t uStack_118;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int8_t auStack_f8 [8];
  void *puStack_f0;
  longlong lStack_e8;
  int32_t uStack_d8;
  void *puStack_d0;
  longlong lStack_c8;
  int32_t uStack_b8;
  void *puStack_b0;
  longlong lStack_a8;
  int32_t uStack_98;
  void *puStack_90;
  longlong lStack_88;
  int32_t uStack_78;
  int iStack_6c;
  int iStack_68;
  uint64_t uStack_58;
  
  uStack_58 = 0xfffffffffffffffe;
  bVar15 = 0;
  if (*(int *)(param_1 + 8) != -1) {
    bVar15 = (byte)*(int32_t *)(param_1 + 0x18);
  }
  bVar15 = bVar15 & 1;
  puStack_1d8 = &system_data_buffer_ptr;
  uStack_1c0 = 0;
  lStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 3;
  puVar8 = &system_buffer_ptr;
  if (*(void **)(param_1 + 0x3528) != (void *)0x0) {
    puVar8 = *(void **)(param_1 + 0x3528);
  }
  FUN_180627c50(&puStack_1d8,puVar8);
  plStack_478 = (longlong *)0x0;
  plStack_470 = (longlong *)0x0;
  plStack_468 = (longlong *)0x0;
  uStack_460 = 3;
  puStack_458 = &system_data_buffer_ptr;
  uStack_440 = 0;
  puStack_450 = (int32_t *)0x0;
  uStack_448 = 0;
  puStack_450 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x17,0x13);
  *(int8_t *)puStack_450 = 0;
  uVar5 = FUN_18064e990(puStack_450);
  uStack_440 = CONCAT44(uStack_440._4_4_,uVar5);
  *puStack_450 = 0x65666544;
  puStack_450[1] = 0x64657272;
  puStack_450[2] = 0x6e655220;
  puStack_450[3] = 0x20726564;
  puStack_450[4] = 0x6873654d;
  *(int16_t *)(puStack_450 + 5) = 0x7365;
  *(int8_t *)((longlong)puStack_450 + 0x16) = 0;
  uStack_448 = 0x16;
  uStack_438 = 0x100;
  lStack_430 = param_1 + 0x1d90;
  if (plStack_470 < plStack_468) {
    *plStack_470 = (longlong)&system_state_ptr;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *plStack_470 = (longlong)&system_data_buffer_ptr;
    plStack_470[3] = 0;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *(int32_t *)(plStack_470 + 2) = 0x16;
    plStack_470[1] = (longlong)puStack_450;
    *(int32_t *)((longlong)plStack_470 + 0x1c) = uStack_440._4_4_;
    *(int32_t *)(plStack_470 + 3) = uVar5;
    uStack_448 = 0;
    puStack_450 = (int32_t *)0x0;
    uStack_440 = 0;
    *(int8_t *)(plStack_470 + 4) = 0;
    *(int8_t *)((longlong)plStack_470 + 0x21) = 1;
    plStack_470[5] = lStack_430;
    plStack_470 = plStack_470 + 6;
  }
  else {
    FUN_18024d850(&plStack_478,&puStack_458);
  }
  puStack_458 = &system_data_buffer_ptr;
  if (puStack_450 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_450 = (int32_t *)0x0;
  uStack_440 = uStack_440 & 0xffffffff00000000;
  puStack_458 = &system_state_ptr;
  puStack_428 = &system_data_buffer_ptr;
  uStack_410 = 0;
  puStack_420 = (int32_t *)0x0;
  uStack_418 = 0;
  puStack_420 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x1e,0x13);
  *(int8_t *)puStack_420 = 0;
  uVar5 = FUN_18064e990(puStack_420);
  uStack_410 = CONCAT44(uStack_410._4_4_,uVar5);
  *puStack_420 = 0x65666544;
  puStack_420[1] = 0x64657272;
  puStack_420[2] = 0x706c4120;
  puStack_420[3] = 0x42206168;
  *(uint64_t *)(puStack_420 + 4) = 0x4d206465646e656c;
  puStack_420[6] = 0x65687365;
  *(int16_t *)(puStack_420 + 7) = 0x73;
  uStack_418 = 0x1d;
  uStack_408 = 0x100;
  lStack_400 = param_1 + 0x2358;
  if (plStack_470 < plStack_468) {
    *plStack_470 = (longlong)&system_state_ptr;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *plStack_470 = (longlong)&system_data_buffer_ptr;
    plStack_470[3] = 0;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *(int32_t *)(plStack_470 + 2) = 0x1d;
    plStack_470[1] = (longlong)puStack_420;
    *(int32_t *)((longlong)plStack_470 + 0x1c) = uStack_410._4_4_;
    *(int32_t *)(plStack_470 + 3) = uVar5;
    uStack_418 = 0;
    puStack_420 = (int32_t *)0x0;
    uStack_410 = 0;
    *(int8_t *)(plStack_470 + 4) = 0;
    *(int8_t *)((longlong)plStack_470 + 0x21) = 1;
    plStack_470[5] = lStack_400;
    plStack_470 = plStack_470 + 6;
  }
  else {
    FUN_18024d850(&plStack_478,&puStack_428);
  }
  puStack_428 = &system_data_buffer_ptr;
  if (puStack_420 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_420 = (int32_t *)0x0;
  uStack_410 = uStack_410 & 0xffffffff00000000;
  puStack_428 = &system_state_ptr;
  puStack_3f8 = &system_data_buffer_ptr;
  uStack_3e0 = 0;
  puStack_3f0 = (int32_t *)0x0;
  uStack_3e8 = 0;
  puStack_3f0 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x16,0x13);
  *(int8_t *)puStack_3f0 = 0;
  uVar5 = FUN_18064e990(puStack_3f0);
  uStack_3e0 = CONCAT44(uStack_3e0._4_4_,uVar5);
  *puStack_3f0 = 0x7161704f;
  puStack_3f0[1] = 0x46206575;
  puStack_3f0[2] = 0x6177726f;
  puStack_3f0[3] = 0x4d206472;
  puStack_3f0[4] = 0x65687365;
  *(int16_t *)(puStack_3f0 + 5) = 0x73;
  uStack_3e8 = 0x15;
  uStack_3d7 = 0;
  lStack_3d0 = param_1 + 0x1eb8;
  bStack_3d8 = bVar15;
  if (plStack_470 < plStack_468) {
    *plStack_470 = (longlong)&system_state_ptr;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *plStack_470 = (longlong)&system_data_buffer_ptr;
    plStack_470[3] = 0;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *(int32_t *)(plStack_470 + 2) = 0x15;
    plStack_470[1] = (longlong)puStack_3f0;
    *(int32_t *)((longlong)plStack_470 + 0x1c) = uStack_3e0._4_4_;
    *(int32_t *)(plStack_470 + 3) = uVar5;
    uStack_3e8 = 0;
    puStack_3f0 = (int32_t *)0x0;
    uStack_3e0 = 0;
    *(byte *)(plStack_470 + 4) = bVar15;
    *(int8_t *)((longlong)plStack_470 + 0x21) = 0;
    plStack_470[5] = lStack_3d0;
    plStack_470 = plStack_470 + 6;
  }
  else {
    FUN_18024d850(&plStack_478,&puStack_3f8);
  }
  puStack_3f8 = &system_data_buffer_ptr;
  if (puStack_3f0 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_3f0 = (int32_t *)0x0;
  uStack_3e0 = uStack_3e0 & 0xffffffff00000000;
  puStack_3f8 = &system_state_ptr;
  puStack_3c8 = &system_data_buffer_ptr;
  uStack_3b0 = 0;
  puStack_3c0 = (int32_t *)0x0;
  uStack_3b8 = 0;
  puStack_3c0 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x1d,0x13);
  *(int8_t *)puStack_3c0 = 0;
  uVar5 = FUN_18064e990(puStack_3c0);
  uStack_3b0 = CONCAT44(uStack_3b0._4_4_,uVar5);
  *puStack_3c0 = 0x64616853;
  puStack_3c0[1] = 0x57206465;
  puStack_3c0[2] = 0x66657269;
  puStack_3c0[3] = 0x656d6172;
  *(uint64_t *)(puStack_3c0 + 4) = 0x654d206572695720;
  puStack_3c0[6] = 0x73656873;
  *(int8_t *)(puStack_3c0 + 7) = 0;
  uStack_3b8 = 0x1c;
  uStack_3a7 = 0;
  lStack_3a0 = param_1 + 0x2b70;
  bStack_3a8 = bVar15;
  if (plStack_470 < plStack_468) {
    *plStack_470 = (longlong)&system_state_ptr;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *plStack_470 = (longlong)&system_data_buffer_ptr;
    plStack_470[3] = 0;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *(int32_t *)(plStack_470 + 2) = 0x1c;
    plStack_470[1] = (longlong)puStack_3c0;
    *(int32_t *)((longlong)plStack_470 + 0x1c) = uStack_3b0._4_4_;
    *(int32_t *)(plStack_470 + 3) = uVar5;
    uStack_3b8 = 0;
    puStack_3c0 = (int32_t *)0x0;
    uStack_3b0 = 0;
    *(byte *)(plStack_470 + 4) = bVar15;
    *(int8_t *)((longlong)plStack_470 + 0x21) = 0;
    plStack_470[5] = lStack_3a0;
    plStack_470 = plStack_470 + 6;
  }
  else {
    FUN_18024d850(&plStack_478,&puStack_3c8);
  }
  puStack_3c8 = &system_data_buffer_ptr;
  if (puStack_3c0 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_3c0 = (int32_t *)0x0;
  uStack_3b0 = uStack_3b0 & 0xffffffff00000000;
  puStack_3c8 = &system_state_ptr;
  puStack_398 = &system_data_buffer_ptr;
  uStack_380 = 0;
  puStack_390 = (int32_t *)0x0;
  uStack_388 = 0;
  puStack_390 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x1d,0x13);
  *(int8_t *)puStack_390 = 0;
  uVar5 = FUN_18064e990(puStack_390);
  uStack_380 = CONCAT44(uStack_380._4_4_,uVar5);
  *puStack_390 = 0x68706c41;
  puStack_390[1] = 0x6c422061;
  puStack_390[2] = 0x65646e65;
  puStack_390[3] = 0x6f462064;
  *(uint64_t *)(puStack_390 + 4) = 0x654d206472617772;
  puStack_390[6] = 0x73656873;
  *(int8_t *)(puStack_390 + 7) = 0;
  uStack_388 = 0x1c;
  uStack_377 = 0;
  lStack_370 = param_1 + 0x2230;
  bStack_378 = bVar15;
  if (plStack_470 < plStack_468) {
    *plStack_470 = (longlong)&system_state_ptr;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *plStack_470 = (longlong)&system_data_buffer_ptr;
    plStack_470[3] = 0;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *(int32_t *)(plStack_470 + 2) = 0x1c;
    plStack_470[1] = (longlong)puStack_390;
    *(int32_t *)((longlong)plStack_470 + 0x1c) = uStack_380._4_4_;
    *(int32_t *)(plStack_470 + 3) = uVar5;
    uStack_388 = 0;
    puStack_390 = (int32_t *)0x0;
    uStack_380 = 0;
    *(byte *)(plStack_470 + 4) = bVar15;
    *(int8_t *)((longlong)plStack_470 + 0x21) = 0;
    plStack_470[5] = lStack_370;
    plStack_470 = plStack_470 + 6;
  }
  else {
    FUN_18024d850(&plStack_478,&puStack_398);
  }
  puStack_398 = &system_data_buffer_ptr;
  if (puStack_390 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_390 = (int32_t *)0x0;
  uStack_380 = uStack_380 & 0xffffffff00000000;
  puStack_398 = &system_state_ptr;
  puStack_368 = &system_data_buffer_ptr;
  uStack_350 = 0;
  puStack_360 = (uint64_t *)0x0;
  uStack_358 = 0;
  puStack_360 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x2b,0x13);
  *(int8_t *)puStack_360 = 0;
  uVar5 = FUN_18064e990(puStack_360);
  uStack_350 = CONCAT44(uStack_350._4_4_,uVar5);
  *puStack_360 = 0x6552206874706544;
  puStack_360[1] = 0x6c4120676e696461;
  *(int32_t *)(puStack_360 + 2) = 0x20616870;
  *(int32_t *)((longlong)puStack_360 + 0x14) = 0x6e656c42;
  *(int32_t *)(puStack_360 + 3) = 0x20646564;
  *(int32_t *)((longlong)puStack_360 + 0x1c) = 0x77726f46;
  puStack_360[4] = 0x6873654d20647261;
  *(int16_t *)(puStack_360 + 5) = 0x7365;
  *(int8_t *)((longlong)puStack_360 + 0x2a) = 0;
  uStack_358 = 0x2a;
  uStack_348 = 0;
  lStack_340 = param_1 + 0x26d0;
  if (plStack_470 < plStack_468) {
    *plStack_470 = (longlong)&system_state_ptr;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *plStack_470 = (longlong)&system_data_buffer_ptr;
    plStack_470[3] = 0;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *(int32_t *)(plStack_470 + 2) = 0x2a;
    plStack_470[1] = (longlong)puStack_360;
    *(int32_t *)((longlong)plStack_470 + 0x1c) = uStack_350._4_4_;
    *(int32_t *)(plStack_470 + 3) = uVar5;
    uStack_358 = 0;
    puStack_360 = (uint64_t *)0x0;
    uStack_350 = 0;
    *(int8_t *)(plStack_470 + 4) = 0;
    *(int8_t *)((longlong)plStack_470 + 0x21) = 0;
    plStack_470[5] = lStack_340;
    plStack_470 = plStack_470 + 6;
  }
  else {
    FUN_18024d850(&plStack_478,&puStack_368);
  }
  puStack_368 = &system_data_buffer_ptr;
  if (puStack_360 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_360 = (uint64_t *)0x0;
  uStack_350 = uStack_350 & 0xffffffff00000000;
  puStack_368 = &system_state_ptr;
  puStack_338 = &system_data_buffer_ptr;
  uStack_320 = 0;
  puStack_330 = (uint64_t *)0x0;
  uStack_328 = 0;
  puStack_330 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x34,0x13);
  *(int8_t *)puStack_330 = 0;
  uVar5 = FUN_18064e990(puStack_330);
  uStack_320 = CONCAT44(uStack_320._4_4_,uVar5);
  *puStack_330 = 0x6552206874706544;
  puStack_330[1] = 0x614820676e696461;
  *(int32_t *)(puStack_330 + 2) = 0x5220666c;
  *(int32_t *)((longlong)puStack_330 + 0x14) = 0x41207365;
  *(int32_t *)(puStack_330 + 3) = 0x6168706c;
  *(int32_t *)((longlong)puStack_330 + 0x1c) = 0x656c4220;
  *(int32_t *)(puStack_330 + 4) = 0x6465646e;
  *(int32_t *)((longlong)puStack_330 + 0x24) = 0x726f4620;
  *(int32_t *)(puStack_330 + 5) = 0x64726177;
  *(int32_t *)((longlong)puStack_330 + 0x2c) = 0x73654d20;
  *(int32_t *)(puStack_330 + 6) = 0x736568;
  uStack_328 = 0x33;
  uStack_318 = 0;
  lStack_310 = param_1 + 0x27f8;
  if (plStack_470 < plStack_468) {
    *plStack_470 = (longlong)&system_state_ptr;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *plStack_470 = (longlong)&system_data_buffer_ptr;
    plStack_470[3] = 0;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *(int32_t *)(plStack_470 + 2) = 0x33;
    plStack_470[1] = (longlong)puStack_330;
    *(int32_t *)((longlong)plStack_470 + 0x1c) = uStack_320._4_4_;
    *(int32_t *)(plStack_470 + 3) = uVar5;
    uStack_328 = 0;
    puStack_330 = (uint64_t *)0x0;
    uStack_320 = 0;
    *(int8_t *)(plStack_470 + 4) = 0;
    *(int8_t *)((longlong)plStack_470 + 0x21) = 0;
    plStack_470[5] = lStack_310;
    plStack_470 = plStack_470 + 6;
  }
  else {
    FUN_18024d850(&plStack_478,&puStack_338);
  }
  puStack_338 = &system_data_buffer_ptr;
  if (puStack_330 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_330 = (uint64_t *)0x0;
  uStack_320 = uStack_320 & 0xffffffff00000000;
  puStack_338 = &system_state_ptr;
  puStack_308 = &system_data_buffer_ptr;
  uStack_2f0 = 0;
  puStack_300 = (int32_t *)0x0;
  uStack_2f8 = 0;
  puStack_300 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x1d,0x13);
  *(int8_t *)puStack_300 = 0;
  uVar5 = FUN_18064e990(puStack_300);
  uStack_2f0 = CONCAT44(uStack_2f0._4_4_,uVar5);
  *puStack_300 = 0x646e6552;
  puStack_300[1] = 0x64657265;
  puStack_300[2] = 0x74664120;
  puStack_300[3] = 0x50207265;
  *(uint64_t *)(puStack_300 + 4) = 0x654d20786674736f;
  puStack_300[6] = 0x73656873;
  *(int8_t *)(puStack_300 + 7) = 0;
  uStack_2f8 = 0x1c;
  uStack_2e8 = 0;
  lStack_2e0 = param_1 + 0x25a8;
  if (plStack_470 < plStack_468) {
    *plStack_470 = (longlong)&system_state_ptr;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *plStack_470 = (longlong)&system_data_buffer_ptr;
    plStack_470[3] = 0;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *(int32_t *)(plStack_470 + 2) = 0x1c;
    plStack_470[1] = (longlong)puStack_300;
    *(int32_t *)((longlong)plStack_470 + 0x1c) = uStack_2f0._4_4_;
    *(int32_t *)(plStack_470 + 3) = uVar5;
    uStack_2f8 = 0;
    puStack_300 = (int32_t *)0x0;
    uStack_2f0 = 0;
    *(int8_t *)(plStack_470 + 4) = 0;
    *(int8_t *)((longlong)plStack_470 + 0x21) = 0;
    plStack_470[5] = lStack_2e0;
    plStack_470 = plStack_470 + 6;
  }
  else {
    FUN_18024d850(&plStack_478,&puStack_308);
  }
  puStack_308 = &system_data_buffer_ptr;
  if (puStack_300 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_300 = (int32_t *)0x0;
  uStack_2f0 = uStack_2f0 & 0xffffffff00000000;
  puStack_308 = &system_state_ptr;
  puStack_2d8 = &system_data_buffer_ptr;
  uStack_2c0 = 0;
  puStack_2d0 = (int32_t *)0x0;
  uStack_2c8 = 0;
  puStack_2d0 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x16,0x13);
  *(int8_t *)puStack_2d0 = 0;
  uVar5 = FUN_18064e990(puStack_2d0);
  uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar5);
  *puStack_2d0 = 0x65666544;
  puStack_2d0[1] = 0x64657272;
  puStack_2d0[2] = 0x63654420;
  puStack_2d0[3] = 0x4d206c61;
  puStack_2d0[4] = 0x65687365;
  *(int16_t *)(puStack_2d0 + 5) = 0x73;
  uStack_2c8 = 0x15;
  uStack_2b8 = 0x100;
  lStack_2b0 = param_1 + 0x1fe0;
  if (plStack_470 < plStack_468) {
    *plStack_470 = (longlong)&system_state_ptr;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *plStack_470 = (longlong)&system_data_buffer_ptr;
    plStack_470[3] = 0;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *(int32_t *)(plStack_470 + 2) = 0x15;
    plStack_470[1] = (longlong)puStack_2d0;
    *(int32_t *)((longlong)plStack_470 + 0x1c) = uStack_2c0._4_4_;
    *(int32_t *)(plStack_470 + 3) = uVar5;
    uStack_2c8 = 0;
    puStack_2d0 = (int32_t *)0x0;
    uStack_2c0 = 0;
    *(int8_t *)(plStack_470 + 4) = 0;
    *(int8_t *)((longlong)plStack_470 + 0x21) = 1;
    plStack_470[5] = lStack_2b0;
    plStack_470 = plStack_470 + 6;
  }
  else {
    FUN_18024d850(&plStack_478,&puStack_2d8);
  }
  puStack_2d8 = &system_data_buffer_ptr;
  if (puStack_2d0 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_2d0 = (int32_t *)0x0;
  uStack_2c0 = uStack_2c0 & 0xffffffff00000000;
  puStack_2d8 = &system_state_ptr;
  puStack_2a8 = &system_data_buffer_ptr;
  uStack_290 = 0;
  puStack_2a0 = (int32_t *)0x0;
  uStack_298 = 0;
  puStack_2a0 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x15,0x13);
  *(int8_t *)puStack_2a0 = 0;
  uVar5 = FUN_18064e990(puStack_2a0);
  uStack_290 = CONCAT44(uStack_290._4_4_,uVar5);
  *puStack_2a0 = 0x77726f46;
  puStack_2a0[1] = 0x20647261;
  puStack_2a0[2] = 0x61636544;
  puStack_2a0[3] = 0x654d206c;
  puStack_2a0[4] = 0x73656873;
  *(int8_t *)(puStack_2a0 + 5) = 0;
  uStack_298 = 0x14;
  uStack_288 = 0;
  lStack_280 = param_1 + 0x2108;
  if (plStack_470 < plStack_468) {
    *plStack_470 = (longlong)&system_state_ptr;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *plStack_470 = (longlong)&system_data_buffer_ptr;
    plStack_470[3] = 0;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *(int32_t *)(plStack_470 + 2) = 0x14;
    plStack_470[1] = (longlong)puStack_2a0;
    *(int32_t *)((longlong)plStack_470 + 0x1c) = uStack_290._4_4_;
    *(int32_t *)(plStack_470 + 3) = uVar5;
    uStack_298 = 0;
    puStack_2a0 = (int32_t *)0x0;
    uStack_290 = 0;
    *(int8_t *)(plStack_470 + 4) = 0;
    *(int8_t *)((longlong)plStack_470 + 0x21) = 0;
    plStack_470[5] = lStack_280;
    plStack_470 = plStack_470 + 6;
  }
  else {
    FUN_18024d850(&plStack_478,&puStack_2a8);
  }
  puStack_2a8 = &system_data_buffer_ptr;
  if (puStack_2a0 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_2a0 = (int32_t *)0x0;
  uStack_290 = uStack_290 & 0xffffffff00000000;
  puStack_2a8 = &system_state_ptr;
  puStack_278 = &system_data_buffer_ptr;
  uStack_260 = 0;
  puStack_270 = (uint64_t *)0x0;
  uStack_268 = 0;
  puStack_270 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puStack_270 = 0;
  uVar5 = FUN_18064e990(puStack_270);
  uStack_260 = CONCAT44(uStack_260._4_4_,uVar5);
  *puStack_270 = 0x2072756f746e6f43;
  *(int32_t *)(puStack_270 + 1) = 0x6873654d;
  *(int16_t *)((longlong)puStack_270 + 0xc) = 0x7365;
  *(int8_t *)((longlong)puStack_270 + 0xe) = 0;
  uStack_268 = 0xe;
  uStack_258 = 0;
  lStack_250 = param_1 + 0x2480;
  if (plStack_470 < plStack_468) {
    *plStack_470 = (longlong)&system_state_ptr;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *plStack_470 = (longlong)&system_data_buffer_ptr;
    plStack_470[3] = 0;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *(int32_t *)(plStack_470 + 2) = 0xe;
    plStack_470[1] = (longlong)puStack_270;
    *(int32_t *)((longlong)plStack_470 + 0x1c) = uStack_260._4_4_;
    *(int32_t *)(plStack_470 + 3) = uVar5;
    uStack_268 = 0;
    puStack_270 = (uint64_t *)0x0;
    uStack_260 = 0;
    *(int8_t *)(plStack_470 + 4) = 0;
    *(int8_t *)((longlong)plStack_470 + 0x21) = 0;
    plStack_470[5] = lStack_250;
    plStack_470 = plStack_470 + 6;
  }
  else {
    FUN_18024d850(&plStack_478,&puStack_278);
  }
  puStack_278 = &system_data_buffer_ptr;
  if (puStack_270 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_270 = (uint64_t *)0x0;
  uStack_260 = uStack_260 & 0xffffffff00000000;
  puStack_278 = &system_state_ptr;
  puStack_248 = &system_data_buffer_ptr;
  uStack_230 = 0;
  puStack_240 = (uint64_t *)0x0;
  uStack_238 = 0;
  puStack_240 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puStack_240 = 0;
  uVar5 = FUN_18064e990(puStack_240);
  uStack_230 = CONCAT44(uStack_230._4_4_,uVar5);
  *puStack_240 = 0x656873654d204955;
  *(int16_t *)(puStack_240 + 1) = 0x73;
  uStack_238 = 9;
  uStack_228 = 0;
  lStack_220 = param_1 + 0x2a48;
  if (plStack_470 < plStack_468) {
    *plStack_470 = (longlong)&system_state_ptr;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *plStack_470 = (longlong)&system_data_buffer_ptr;
    plStack_470[3] = 0;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *(int32_t *)(plStack_470 + 2) = 9;
    plStack_470[1] = (longlong)puStack_240;
    *(int32_t *)((longlong)plStack_470 + 0x1c) = uStack_230._4_4_;
    *(int32_t *)(plStack_470 + 3) = uVar5;
    uStack_238 = 0;
    puStack_240 = (uint64_t *)0x0;
    uStack_230 = 0;
    *(int8_t *)(plStack_470 + 4) = 0;
    *(int8_t *)((longlong)plStack_470 + 0x21) = 0;
    plStack_470[5] = lStack_220;
    plStack_470 = plStack_470 + 6;
  }
  else {
    FUN_18024d850(&plStack_478,&puStack_248);
  }
  plVar3 = plStack_470;
  puStack_248 = &system_data_buffer_ptr;
  if (puStack_240 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_240 = (uint64_t *)0x0;
  uStack_230 = uStack_230 & 0xffffffff00000000;
  puStack_248 = &system_state_ptr;
  if (plStack_478 != plStack_470) {
    plVar17 = plStack_478 + 5;
    do {
      uVar11 = 0;
      uVar10 = uVar11;
      uVar13 = uVar11;
      uVar16 = uVar11;
      while( true ) {
        iVar6 = (int)uVar10;
        if ((ulonglong)*(uint *)*plVar17 <= (ulonglong)(longlong)iVar6) break;
        lVar14 = *(longlong *)(*plVar17 + 8 + (uVar10 >> 0xb) * 8);
        FUN_1802de020(*(uint64_t *)
                       (lVar14 + 0x10 +
                       (ulonglong)(uint)(iVar6 + (int)(uVar10 >> 0xb) * -0x800) * 0x18),auStack_f8,
                      lVar14,*(int8_t *)((longlong)plVar17 + -7));
        uVar16 = (ulonglong)(uint)((int)uVar16 + iStack_6c);
        uVar13 = (ulonglong)(uint)((int)uVar13 + iStack_68);
        puStack_90 = &system_data_buffer_ptr;
        if (lStack_88 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_88 = 0;
        uStack_78 = 0;
        puStack_90 = &system_state_ptr;
        puStack_b0 = &system_data_buffer_ptr;
        if (lStack_a8 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_a8 = 0;
        uStack_98 = 0;
        puStack_b0 = &system_state_ptr;
        puStack_d0 = &system_data_buffer_ptr;
        if (lStack_c8 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_c8 = 0;
        uStack_b8 = 0;
        puStack_d0 = &system_state_ptr;
        puStack_f0 = &system_data_buffer_ptr;
        if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_e8 = 0;
        uStack_d8 = 0;
        puStack_f0 = &system_state_ptr;
        uVar10 = (ulonglong)(iVar6 + 1);
      }
      System_DataHandler(plVar17 + -5,&unknown_var_624_ptr,uVar16,uVar13,*(int32_t *)*plVar17);
      if (*(int *)*plVar17 != 0) {
        puStack_218 = &system_data_buffer_ptr;
        uStack_200 = 0;
        puStack_210 = (int8_t *)0x0;
        uStack_208 = 0;
        piStack_1f8 = (int *)0x0;
        piStack_1f0 = (int *)0x0;
        piStack_1e8 = (int *)0x0;
        uStack_1e0 = 3;
        uVar9 = *(uint *)(plVar17 + -3);
        if (plVar17[-4] == 0) {
LAB_180249d7b:
          if (uVar9 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(puStack_210,plVar17[-4],(ulonglong)uVar9);
          }
        }
        else if (uVar9 != 0) {
          iVar6 = uVar9 + 1;
          if (iVar6 < 0x10) {
            iVar6 = 0x10;
          }
          puStack_210 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)iVar6,0x13);
          *puStack_210 = 0;
          uVar5 = FUN_18064e990(puStack_210);
          uStack_200 = CONCAT44(uStack_200._4_4_,uVar5);
          goto LAB_180249d7b;
        }
        if (puStack_210 != (int8_t *)0x0) {
          puStack_210[uVar9] = 0;
        }
        uStack_200 = CONCAT44(*(int32_t *)((longlong)plVar17 + -0xc),(int32_t)uStack_200);
        uVar10 = uVar11;
        uStack_208 = uVar9;
        while( true ) {
          piVar7 = (int *)0x0;
          iVar6 = (int)uVar10;
          if ((ulonglong)*(uint *)*plVar17 <= (ulonglong)(longlong)iVar6) break;
          lVar14 = *(longlong *)(*plVar17 + 8 + (uVar10 >> 0xb) * 8);
          FUN_1802de020(*(uint64_t *)
                         (lVar14 + 0x10 +
                         (ulonglong)(uint)(iVar6 + (int)(uVar10 >> 0xb) * -0x800) * 0x18),
                        aiStack_198,lVar14,*(int8_t *)((longlong)plVar17 + -7));
          piVar12 = piStack_1f0;
          aiStack_198[0] = (int)uVar11;
          uVar9 = aiStack_198[0] + 1;
          if (piStack_1f0 < piStack_1e8) {
            ppuStackX_20 = (void **)piStack_1f0;
            *piStack_1f0 = aiStack_198[0];
            piVar7 = piStack_1f0 + 2;
            piStack_1f0 = piStack_1f0 + 0x26;
            FUN_180627ae0(piVar7,&puStack_190);
            FUN_180627ae0(piVar12 + 10,&puStack_170);
            FUN_180627ae0(piVar12 + 0x12,&puStack_150);
            FUN_180627ae0(piVar12 + 0x1a,&puStack_130);
            piVar12[0x22] = iStack_110;
            piVar12[0x23] = iStack_10c;
            piVar12[0x24] = iStack_108;
          }
          else {
            lVar14 = ((longlong)piStack_1f0 - (longlong)piStack_1f8) / 0x98;
            if (lVar14 == 0) {
              lVar14 = 1;
LAB_180249ee9:
              piVar7 = (int *)FUN_18062b420(system_memory_pool_ptr,lVar14 * 0x98,(int8_t)uStack_1e0);
            }
            else {
              lVar14 = lVar14 * 2;
              if (lVar14 != 0) goto LAB_180249ee9;
            }
            FUN_18024dc20(&lStackX_18,piStack_1f8,piStack_1f0,piVar7);
            lVar2 = lStackX_18;
            FUN_18024d120(lStackX_18,aiStack_198);
            piVar4 = piStack_1f0;
            for (piVar12 = piStack_1f8; piVar12 != piVar4; piVar12 = piVar12 + 0x26) {
              FUN_1801528b0(piVar12);
            }
            if (piStack_1f8 != (int *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(piStack_1f8);
            }
            piStack_1e8 = piVar7 + lVar14 * 0x26;
            piStack_1f8 = piVar7;
            piStack_1f0 = (int *)(lVar2 + 0x98);
          }
          ppuStackX_20 = &puStack_130;
          puStack_130 = &system_data_buffer_ptr;
          if (lStack_128 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_128 = 0;
          uStack_118 = 0;
          puStack_130 = &system_state_ptr;
          ppuStackX_20 = &puStack_150;
          puStack_150 = &system_data_buffer_ptr;
          if (lStack_148 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_148 = 0;
          uStack_138 = 0;
          puStack_150 = &system_state_ptr;
          ppuStackX_20 = &puStack_170;
          puStack_170 = &system_data_buffer_ptr;
          if (lStack_168 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_168 = 0;
          uStack_158 = 0;
          puStack_170 = &system_state_ptr;
          ppuStackX_20 = &puStack_190;
          puStack_190 = &system_data_buffer_ptr;
          if (lStack_188 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_188 = 0;
          uStack_178 = 0;
          puStack_190 = &system_state_ptr;
          uVar10 = (ulonglong)(iVar6 + 1);
          uVar11 = (ulonglong)uVar9;
        }
        if (uStack_1b0 < uStack_1a8) {
          uStack_1b0 = uStack_1b0 + 0x40;
          FUN_18024d1b0();
        }
        else {
          FUN_18024d490(&uStack_1b8,&puStack_218);
        }
        FUN_180152990(&piStack_1f8);
        puStack_218 = &system_data_buffer_ptr;
        if (puStack_210 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_210 = (int8_t *)0x0;
        uStack_200 = uStack_200 & 0xffffffff00000000;
        puStack_218 = &system_state_ptr;
      }
      plVar1 = plVar17 + 1;
      plVar17 = plVar17 + 6;
    } while (plVar1 != plVar3);
  }
  lVar14 = *(longlong *)(system_message_buffer + 0x1cd8);
  uVar11 = *(ulonglong *)(lVar14 + 0x7fd0);
  if (uVar11 < *(ulonglong *)(lVar14 + 0x7fd8)) {
    *(ulonglong *)(lVar14 + 0x7fd0) = uVar11 + 0x40;
    FUN_18024d300(uVar11);
  }
  else {
    FUN_18024d670(lVar14 + 0x7fc8,&puStack_1d8);
  }
  FUN_18024ced0(&plStack_478);
  FUN_180152a80(&uStack_1b8);
  puStack_1d8 = &system_data_buffer_ptr;
  if (lStack_1d0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}








