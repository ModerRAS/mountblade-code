#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_03_part083_sub002_sub002.c - 1 个函数
// 函数: void function_248910(int64_t param_1)
void function_248910(int64_t param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int *piVar4;
  int32_t uVar5;
  int iVar6;
  int *piVar7;
  void *puVar8;
  uint uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int *piVar12;
  uint64_t uVar13;
  int64_t lVar14;
  byte bVar15;
  uint64_t uVar16;
  int64_t *plVar17;
  int64_t lStackX_18;
  void **ppstack_special_x_20;
  int64_t *plStack_478;
  int64_t *plStack_470;
  int64_t *plStack_468;
  int32_t local_var_460;
  void *plocal_var_458;
  int32_t *plocal_var_450;
  int32_t local_var_448;
  uint64_t local_var_440;
  int16_t local_var_438;
  int64_t lStack_430;
  void *plocal_var_428;
  int32_t *plocal_var_420;
  int32_t local_var_418;
  uint64_t local_var_410;
  int16_t local_var_408;
  int64_t lStack_400;
  void *plocal_var_3f8;
  int32_t *plocal_var_3f0;
  int32_t local_var_3e8;
  uint64_t local_var_3e0;
  byte bStack_3d8;
  int8_t local_var_3d7;
  int64_t lStack_3d0;
  void *plocal_var_3c8;
  int32_t *plocal_var_3c0;
  int32_t local_var_3b8;
  uint64_t local_var_3b0;
  byte bStack_3a8;
  int8_t local_var_3a7;
  int64_t lStack_3a0;
  void *plocal_var_398;
  int32_t *plocal_var_390;
  int32_t local_var_388;
  uint64_t local_var_380;
  byte bStack_378;
  int8_t local_var_377;
  int64_t lStack_370;
  void *plocal_var_368;
  uint64_t *plocal_var_360;
  int32_t local_var_358;
  uint64_t local_var_350;
  int16_t local_var_348;
  int64_t lStack_340;
  void *plocal_var_338;
  uint64_t *plocal_var_330;
  int32_t local_var_328;
  uint64_t local_var_320;
  int16_t local_var_318;
  int64_t lStack_310;
  void *plocal_var_308;
  int32_t *plocal_var_300;
  int32_t local_var_2f8;
  uint64_t local_var_2f0;
  int16_t local_var_2e8;
  int64_t lStack_2e0;
  void *plocal_var_2d8;
  int32_t *plocal_var_2d0;
  int32_t local_var_2c8;
  uint64_t local_var_2c0;
  int16_t local_var_2b8;
  int64_t lStack_2b0;
  void *plocal_var_2a8;
  int32_t *plocal_var_2a0;
  int32_t local_var_298;
  uint64_t local_var_290;
  int16_t local_var_288;
  int64_t lStack_280;
  void *plocal_var_278;
  uint64_t *plocal_var_270;
  int32_t local_var_268;
  uint64_t local_var_260;
  int16_t local_var_258;
  int64_t lStack_250;
  void *plocal_var_248;
  uint64_t *plocal_var_240;
  int32_t local_var_238;
  uint64_t local_var_230;
  int16_t local_var_228;
  int64_t lStack_220;
  void *plocal_var_218;
  int8_t *plocal_var_210;
  uint local_var_208;
  uint64_t local_var_200;
  int *piStack_1f8;
  int *piStack_1f0;
  int *piStack_1e8;
  int32_t local_var_1e0;
  void *plocal_var_1d8;
  int64_t lStack_1d0;
  int32_t local_var_1c8;
  uint64_t local_var_1c0;
  uint64_t local_var_1b8;
  uint64_t local_var_1b0;
  uint64_t local_var_1a8;
  int32_t local_var_1a0;
  int aiStack_198 [2];
  void *plocal_var_190;
  int64_t lStack_188;
  int32_t local_var_178;
  void *plocal_var_170;
  int64_t lStack_168;
  int32_t local_var_158;
  void *plocal_var_150;
  int64_t lStack_148;
  int32_t local_var_138;
  void *plocal_var_130;
  int64_t lStack_128;
  int32_t local_var_118;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int8_t stack_array_f8 [8];
  void *plocal_var_f0;
  int64_t lStack_e8;
  int32_t local_var_d8;
  void *plocal_var_d0;
  int64_t lStack_c8;
  int32_t local_var_b8;
  void *plocal_var_b0;
  int64_t lStack_a8;
  int32_t local_var_98;
  void *plocal_var_90;
  int64_t lStack_88;
  int32_t local_var_78;
  int iStack_6c;
  int iStack_68;
  uint64_t local_var_58;
  local_var_58 = 0xfffffffffffffffe;
  bVar15 = 0;
  if (*(int *)(param_1 + 8) != -1) {
    bVar15 = (byte)*(int32_t *)(param_1 + 0x18);
  }
  bVar15 = bVar15 & 1;
  plocal_var_1d8 = &system_data_buffer_ptr;
  local_var_1c0 = 0;
  lStack_1d0 = 0;
  local_var_1c8 = 0;
  local_var_1b8 = 0;
  local_var_1b0 = 0;
  local_var_1a8 = 0;
  local_var_1a0 = 3;
  puVar8 = &system_buffer_ptr;
  if (*(void **)(param_1 + 0x3528) != (void *)0x0) {
    puVar8 = *(void **)(param_1 + 0x3528);
  }
  CoreSystem_ConfigValidator0(&plocal_var_1d8,puVar8);
  plStack_478 = (int64_t *)0x0;
  plStack_470 = (int64_t *)0x0;
  plStack_468 = (int64_t *)0x0;
  local_var_460 = 3;
  plocal_var_458 = &system_data_buffer_ptr;
  local_var_440 = 0;
  plocal_var_450 = (int32_t *)0x0;
  local_var_448 = 0;
  plocal_var_450 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x17,0x13);
  *(int8_t *)plocal_var_450 = 0;
  uVar5 = CoreMemoryPoolCleaner(plocal_var_450);
  local_var_440 = CONCAT44(local_var_440._4_4_,uVar5);
  *plocal_var_450 = 0x65666544;
  plocal_var_450[1] = 0x64657272;
  plocal_var_450[2] = 0x6e655220;
  plocal_var_450[3] = 0x20726564;
  plocal_var_450[4] = 0x6873654d;
  *(int16_t *)(plocal_var_450 + 5) = 0x7365;
  *(int8_t *)((int64_t)plocal_var_450 + 0x16) = 0;
  local_var_448 = 0x16;
  local_var_438 = 0x100;
  lStack_430 = param_1 + 0x1d90;
  if (plStack_470 < plStack_468) {
    *plStack_470 = (int64_t)&system_state_ptr;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *plStack_470 = (int64_t)&system_data_buffer_ptr;
    plStack_470[3] = 0;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *(int32_t *)(plStack_470 + 2) = 0x16;
    plStack_470[1] = (int64_t)plocal_var_450;
    *(int32_t *)((int64_t)plStack_470 + 0x1c) = local_var_440._4_4_;
    *(int32_t *)(plStack_470 + 3) = uVar5;
    local_var_448 = 0;
    plocal_var_450 = (int32_t *)0x0;
    local_var_440 = 0;
    *(int8_t *)(plStack_470 + 4) = 0;
    *(int8_t *)((int64_t)plStack_470 + 0x21) = 1;
    plStack_470[5] = lStack_430;
    plStack_470 = plStack_470 + 6;
  }
  else {
    function_24d850(&plStack_478,&plocal_var_458);
  }
  plocal_var_458 = &system_data_buffer_ptr;
  if (plocal_var_450 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_450 = (int32_t *)0x0;
  local_var_440 = local_var_440 & 0xffffffff00000000;
  plocal_var_458 = &system_state_ptr;
  plocal_var_428 = &system_data_buffer_ptr;
  local_var_410 = 0;
  plocal_var_420 = (int32_t *)0x0;
  local_var_418 = 0;
  plocal_var_420 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x1e,0x13);
  *(int8_t *)plocal_var_420 = 0;
  uVar5 = CoreMemoryPoolCleaner(plocal_var_420);
  local_var_410 = CONCAT44(local_var_410._4_4_,uVar5);
  *plocal_var_420 = 0x65666544;
  plocal_var_420[1] = 0x64657272;
  plocal_var_420[2] = 0x706c4120;
  plocal_var_420[3] = 0x42206168;
  *(uint64_t *)(plocal_var_420 + 4) = 0x4d206465646e656c;
  plocal_var_420[6] = 0x65687365;
  *(int16_t *)(plocal_var_420 + 7) = 0x73;
  local_var_418 = 0x1d;
  local_var_408 = 0x100;
  lStack_400 = param_1 + 0x2358;
  if (plStack_470 < plStack_468) {
    *plStack_470 = (int64_t)&system_state_ptr;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *plStack_470 = (int64_t)&system_data_buffer_ptr;
    plStack_470[3] = 0;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *(int32_t *)(plStack_470 + 2) = 0x1d;
    plStack_470[1] = (int64_t)plocal_var_420;
    *(int32_t *)((int64_t)plStack_470 + 0x1c) = local_var_410._4_4_;
    *(int32_t *)(plStack_470 + 3) = uVar5;
    local_var_418 = 0;
    plocal_var_420 = (int32_t *)0x0;
    local_var_410 = 0;
    *(int8_t *)(plStack_470 + 4) = 0;
    *(int8_t *)((int64_t)plStack_470 + 0x21) = 1;
    plStack_470[5] = lStack_400;
    plStack_470 = plStack_470 + 6;
  }
  else {
    function_24d850(&plStack_478,&plocal_var_428);
  }
  plocal_var_428 = &system_data_buffer_ptr;
  if (plocal_var_420 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_420 = (int32_t *)0x0;
  local_var_410 = local_var_410 & 0xffffffff00000000;
  plocal_var_428 = &system_state_ptr;
  plocal_var_3f8 = &system_data_buffer_ptr;
  local_var_3e0 = 0;
  plocal_var_3f0 = (int32_t *)0x0;
  local_var_3e8 = 0;
  plocal_var_3f0 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x16,0x13);
  *(int8_t *)plocal_var_3f0 = 0;
  uVar5 = CoreMemoryPoolCleaner(plocal_var_3f0);
  local_var_3e0 = CONCAT44(local_var_3e0._4_4_,uVar5);
  *plocal_var_3f0 = 0x7161704f;
  plocal_var_3f0[1] = 0x46206575;
  plocal_var_3f0[2] = 0x6177726f;
  plocal_var_3f0[3] = 0x4d206472;
  plocal_var_3f0[4] = 0x65687365;
  *(int16_t *)(plocal_var_3f0 + 5) = 0x73;
  local_var_3e8 = 0x15;
  local_var_3d7 = 0;
  lStack_3d0 = param_1 + 0x1eb8;
  bStack_3d8 = bVar15;
  if (plStack_470 < plStack_468) {
    *plStack_470 = (int64_t)&system_state_ptr;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *plStack_470 = (int64_t)&system_data_buffer_ptr;
    plStack_470[3] = 0;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *(int32_t *)(plStack_470 + 2) = 0x15;
    plStack_470[1] = (int64_t)plocal_var_3f0;
    *(int32_t *)((int64_t)plStack_470 + 0x1c) = local_var_3e0._4_4_;
    *(int32_t *)(plStack_470 + 3) = uVar5;
    local_var_3e8 = 0;
    plocal_var_3f0 = (int32_t *)0x0;
    local_var_3e0 = 0;
    *(byte *)(plStack_470 + 4) = bVar15;
    *(int8_t *)((int64_t)plStack_470 + 0x21) = 0;
    plStack_470[5] = lStack_3d0;
    plStack_470 = plStack_470 + 6;
  }
  else {
    function_24d850(&plStack_478,&plocal_var_3f8);
  }
  plocal_var_3f8 = &system_data_buffer_ptr;
  if (plocal_var_3f0 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_3f0 = (int32_t *)0x0;
  local_var_3e0 = local_var_3e0 & 0xffffffff00000000;
  plocal_var_3f8 = &system_state_ptr;
  plocal_var_3c8 = &system_data_buffer_ptr;
  local_var_3b0 = 0;
  plocal_var_3c0 = (int32_t *)0x0;
  local_var_3b8 = 0;
  plocal_var_3c0 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x1d,0x13);
  *(int8_t *)plocal_var_3c0 = 0;
  uVar5 = CoreMemoryPoolCleaner(plocal_var_3c0);
  local_var_3b0 = CONCAT44(local_var_3b0._4_4_,uVar5);
  *plocal_var_3c0 = 0x64616853;
  plocal_var_3c0[1] = 0x57206465;
  plocal_var_3c0[2] = 0x66657269;
  plocal_var_3c0[3] = 0x656d6172;
  *(uint64_t *)(plocal_var_3c0 + 4) = 0x654d206572695720;
  plocal_var_3c0[6] = 0x73656873;
  *(int8_t *)(plocal_var_3c0 + 7) = 0;
  local_var_3b8 = 0x1c;
  local_var_3a7 = 0;
  lStack_3a0 = param_1 + 0x2b70;
  bStack_3a8 = bVar15;
  if (plStack_470 < plStack_468) {
    *plStack_470 = (int64_t)&system_state_ptr;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *plStack_470 = (int64_t)&system_data_buffer_ptr;
    plStack_470[3] = 0;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *(int32_t *)(plStack_470 + 2) = 0x1c;
    plStack_470[1] = (int64_t)plocal_var_3c0;
    *(int32_t *)((int64_t)plStack_470 + 0x1c) = local_var_3b0._4_4_;
    *(int32_t *)(plStack_470 + 3) = uVar5;
    local_var_3b8 = 0;
    plocal_var_3c0 = (int32_t *)0x0;
    local_var_3b0 = 0;
    *(byte *)(plStack_470 + 4) = bVar15;
    *(int8_t *)((int64_t)plStack_470 + 0x21) = 0;
    plStack_470[5] = lStack_3a0;
    plStack_470 = plStack_470 + 6;
  }
  else {
    function_24d850(&plStack_478,&plocal_var_3c8);
  }
  plocal_var_3c8 = &system_data_buffer_ptr;
  if (plocal_var_3c0 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_3c0 = (int32_t *)0x0;
  local_var_3b0 = local_var_3b0 & 0xffffffff00000000;
  plocal_var_3c8 = &system_state_ptr;
  plocal_var_398 = &system_data_buffer_ptr;
  local_var_380 = 0;
  plocal_var_390 = (int32_t *)0x0;
  local_var_388 = 0;
  plocal_var_390 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x1d,0x13);
  *(int8_t *)plocal_var_390 = 0;
  uVar5 = CoreMemoryPoolCleaner(plocal_var_390);
  local_var_380 = CONCAT44(local_var_380._4_4_,uVar5);
  *plocal_var_390 = 0x68706c41;
  plocal_var_390[1] = 0x6c422061;
  plocal_var_390[2] = 0x65646e65;
  plocal_var_390[3] = 0x6f462064;
  *(uint64_t *)(plocal_var_390 + 4) = 0x654d206472617772;
  plocal_var_390[6] = 0x73656873;
  *(int8_t *)(plocal_var_390 + 7) = 0;
  local_var_388 = 0x1c;
  local_var_377 = 0;
  lStack_370 = param_1 + 0x2230;
  bStack_378 = bVar15;
  if (plStack_470 < plStack_468) {
    *plStack_470 = (int64_t)&system_state_ptr;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *plStack_470 = (int64_t)&system_data_buffer_ptr;
    plStack_470[3] = 0;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *(int32_t *)(plStack_470 + 2) = 0x1c;
    plStack_470[1] = (int64_t)plocal_var_390;
    *(int32_t *)((int64_t)plStack_470 + 0x1c) = local_var_380._4_4_;
    *(int32_t *)(plStack_470 + 3) = uVar5;
    local_var_388 = 0;
    plocal_var_390 = (int32_t *)0x0;
    local_var_380 = 0;
    *(byte *)(plStack_470 + 4) = bVar15;
    *(int8_t *)((int64_t)plStack_470 + 0x21) = 0;
    plStack_470[5] = lStack_370;
    plStack_470 = plStack_470 + 6;
  }
  else {
    function_24d850(&plStack_478,&plocal_var_398);
  }
  plocal_var_398 = &system_data_buffer_ptr;
  if (plocal_var_390 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_390 = (int32_t *)0x0;
  local_var_380 = local_var_380 & 0xffffffff00000000;
  plocal_var_398 = &system_state_ptr;
  plocal_var_368 = &system_data_buffer_ptr;
  local_var_350 = 0;
  plocal_var_360 = (uint64_t *)0x0;
  local_var_358 = 0;
  plocal_var_360 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x2b,0x13);
  *(int8_t *)plocal_var_360 = 0;
  uVar5 = CoreMemoryPoolCleaner(plocal_var_360);
  local_var_350 = CONCAT44(local_var_350._4_4_,uVar5);
  *plocal_var_360 = 0x6552206874706544;
  plocal_var_360[1] = 0x6c4120676e696461;
  *(int32_t *)(plocal_var_360 + 2) = 0x20616870;
  *(int32_t *)((int64_t)plocal_var_360 + 0x14) = 0x6e656c42;
  *(int32_t *)(plocal_var_360 + 3) = 0x20646564;
  *(int32_t *)((int64_t)plocal_var_360 + 0x1c) = 0x77726f46;
  plocal_var_360[4] = 0x6873654d20647261;
  *(int16_t *)(plocal_var_360 + 5) = 0x7365;
  *(int8_t *)((int64_t)plocal_var_360 + 0x2a) = 0;
  local_var_358 = 0x2a;
  local_var_348 = 0;
  lStack_340 = param_1 + 0x26d0;
  if (plStack_470 < plStack_468) {
    *plStack_470 = (int64_t)&system_state_ptr;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *plStack_470 = (int64_t)&system_data_buffer_ptr;
    plStack_470[3] = 0;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *(int32_t *)(plStack_470 + 2) = 0x2a;
    plStack_470[1] = (int64_t)plocal_var_360;
    *(int32_t *)((int64_t)plStack_470 + 0x1c) = local_var_350._4_4_;
    *(int32_t *)(plStack_470 + 3) = uVar5;
    local_var_358 = 0;
    plocal_var_360 = (uint64_t *)0x0;
    local_var_350 = 0;
    *(int8_t *)(plStack_470 + 4) = 0;
    *(int8_t *)((int64_t)plStack_470 + 0x21) = 0;
    plStack_470[5] = lStack_340;
    plStack_470 = plStack_470 + 6;
  }
  else {
    function_24d850(&plStack_478,&plocal_var_368);
  }
  plocal_var_368 = &system_data_buffer_ptr;
  if (plocal_var_360 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_360 = (uint64_t *)0x0;
  local_var_350 = local_var_350 & 0xffffffff00000000;
  plocal_var_368 = &system_state_ptr;
  plocal_var_338 = &system_data_buffer_ptr;
  local_var_320 = 0;
  plocal_var_330 = (uint64_t *)0x0;
  local_var_328 = 0;
  plocal_var_330 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x34,0x13);
  *(int8_t *)plocal_var_330 = 0;
  uVar5 = CoreMemoryPoolCleaner(plocal_var_330);
  local_var_320 = CONCAT44(local_var_320._4_4_,uVar5);
  *plocal_var_330 = 0x6552206874706544;
  plocal_var_330[1] = 0x614820676e696461;
  *(int32_t *)(plocal_var_330 + 2) = 0x5220666c;
  *(int32_t *)((int64_t)plocal_var_330 + 0x14) = 0x41207365;
  *(int32_t *)(plocal_var_330 + 3) = 0x6168706c;
  *(int32_t *)((int64_t)plocal_var_330 + 0x1c) = 0x656c4220;
  *(int32_t *)(plocal_var_330 + 4) = 0x6465646e;
  *(int32_t *)((int64_t)plocal_var_330 + 0x24) = 0x726f4620;
  *(int32_t *)(plocal_var_330 + 5) = 0x64726177;
  *(int32_t *)((int64_t)plocal_var_330 + 0x2c) = 0x73654d20;
  *(int32_t *)(plocal_var_330 + 6) = 0x736568;
  local_var_328 = 0x33;
  local_var_318 = 0;
  lStack_310 = param_1 + 0x27f8;
  if (plStack_470 < plStack_468) {
    *plStack_470 = (int64_t)&system_state_ptr;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *plStack_470 = (int64_t)&system_data_buffer_ptr;
    plStack_470[3] = 0;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *(int32_t *)(plStack_470 + 2) = 0x33;
    plStack_470[1] = (int64_t)plocal_var_330;
    *(int32_t *)((int64_t)plStack_470 + 0x1c) = local_var_320._4_4_;
    *(int32_t *)(plStack_470 + 3) = uVar5;
    local_var_328 = 0;
    plocal_var_330 = (uint64_t *)0x0;
    local_var_320 = 0;
    *(int8_t *)(plStack_470 + 4) = 0;
    *(int8_t *)((int64_t)plStack_470 + 0x21) = 0;
    plStack_470[5] = lStack_310;
    plStack_470 = plStack_470 + 6;
  }
  else {
    function_24d850(&plStack_478,&plocal_var_338);
  }
  plocal_var_338 = &system_data_buffer_ptr;
  if (plocal_var_330 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_330 = (uint64_t *)0x0;
  local_var_320 = local_var_320 & 0xffffffff00000000;
  plocal_var_338 = &system_state_ptr;
  plocal_var_308 = &system_data_buffer_ptr;
  local_var_2f0 = 0;
  plocal_var_300 = (int32_t *)0x0;
  local_var_2f8 = 0;
  plocal_var_300 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x1d,0x13);
  *(int8_t *)plocal_var_300 = 0;
  uVar5 = CoreMemoryPoolCleaner(plocal_var_300);
  local_var_2f0 = CONCAT44(local_var_2f0._4_4_,uVar5);
  *plocal_var_300 = 0x646e6552;
  plocal_var_300[1] = 0x64657265;
  plocal_var_300[2] = 0x74664120;
  plocal_var_300[3] = 0x50207265;
  *(uint64_t *)(plocal_var_300 + 4) = 0x654d20786674736f;
  plocal_var_300[6] = 0x73656873;
  *(int8_t *)(plocal_var_300 + 7) = 0;
  local_var_2f8 = 0x1c;
  local_var_2e8 = 0;
  lStack_2e0 = param_1 + 0x25a8;
  if (plStack_470 < plStack_468) {
    *plStack_470 = (int64_t)&system_state_ptr;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *plStack_470 = (int64_t)&system_data_buffer_ptr;
    plStack_470[3] = 0;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *(int32_t *)(plStack_470 + 2) = 0x1c;
    plStack_470[1] = (int64_t)plocal_var_300;
    *(int32_t *)((int64_t)plStack_470 + 0x1c) = local_var_2f0._4_4_;
    *(int32_t *)(plStack_470 + 3) = uVar5;
    local_var_2f8 = 0;
    plocal_var_300 = (int32_t *)0x0;
    local_var_2f0 = 0;
    *(int8_t *)(plStack_470 + 4) = 0;
    *(int8_t *)((int64_t)plStack_470 + 0x21) = 0;
    plStack_470[5] = lStack_2e0;
    plStack_470 = plStack_470 + 6;
  }
  else {
    function_24d850(&plStack_478,&plocal_var_308);
  }
  plocal_var_308 = &system_data_buffer_ptr;
  if (plocal_var_300 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_300 = (int32_t *)0x0;
  local_var_2f0 = local_var_2f0 & 0xffffffff00000000;
  plocal_var_308 = &system_state_ptr;
  plocal_var_2d8 = &system_data_buffer_ptr;
  local_var_2c0 = 0;
  plocal_var_2d0 = (int32_t *)0x0;
  local_var_2c8 = 0;
  plocal_var_2d0 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x16,0x13);
  *(int8_t *)plocal_var_2d0 = 0;
  uVar5 = CoreMemoryPoolCleaner(plocal_var_2d0);
  local_var_2c0 = CONCAT44(local_var_2c0._4_4_,uVar5);
  *plocal_var_2d0 = 0x65666544;
  plocal_var_2d0[1] = 0x64657272;
  plocal_var_2d0[2] = 0x63654420;
  plocal_var_2d0[3] = 0x4d206c61;
  plocal_var_2d0[4] = 0x65687365;
  *(int16_t *)(plocal_var_2d0 + 5) = 0x73;
  local_var_2c8 = 0x15;
  local_var_2b8 = 0x100;
  lStack_2b0 = param_1 + 0x1fe0;
  if (plStack_470 < plStack_468) {
    *plStack_470 = (int64_t)&system_state_ptr;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *plStack_470 = (int64_t)&system_data_buffer_ptr;
    plStack_470[3] = 0;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *(int32_t *)(plStack_470 + 2) = 0x15;
    plStack_470[1] = (int64_t)plocal_var_2d0;
    *(int32_t *)((int64_t)plStack_470 + 0x1c) = local_var_2c0._4_4_;
    *(int32_t *)(plStack_470 + 3) = uVar5;
    local_var_2c8 = 0;
    plocal_var_2d0 = (int32_t *)0x0;
    local_var_2c0 = 0;
    *(int8_t *)(plStack_470 + 4) = 0;
    *(int8_t *)((int64_t)plStack_470 + 0x21) = 1;
    plStack_470[5] = lStack_2b0;
    plStack_470 = plStack_470 + 6;
  }
  else {
    function_24d850(&plStack_478,&plocal_var_2d8);
  }
  plocal_var_2d8 = &system_data_buffer_ptr;
  if (plocal_var_2d0 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_2d0 = (int32_t *)0x0;
  local_var_2c0 = local_var_2c0 & 0xffffffff00000000;
  plocal_var_2d8 = &system_state_ptr;
  plocal_var_2a8 = &system_data_buffer_ptr;
  local_var_290 = 0;
  plocal_var_2a0 = (int32_t *)0x0;
  local_var_298 = 0;
  plocal_var_2a0 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x15,0x13);
  *(int8_t *)plocal_var_2a0 = 0;
  uVar5 = CoreMemoryPoolCleaner(plocal_var_2a0);
  local_var_290 = CONCAT44(local_var_290._4_4_,uVar5);
  *plocal_var_2a0 = 0x77726f46;
  plocal_var_2a0[1] = 0x20647261;
  plocal_var_2a0[2] = 0x61636544;
  plocal_var_2a0[3] = 0x654d206c;
  plocal_var_2a0[4] = 0x73656873;
  *(int8_t *)(plocal_var_2a0 + 5) = 0;
  local_var_298 = 0x14;
  local_var_288 = 0;
  lStack_280 = param_1 + 0x2108;
  if (plStack_470 < plStack_468) {
    *plStack_470 = (int64_t)&system_state_ptr;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *plStack_470 = (int64_t)&system_data_buffer_ptr;
    plStack_470[3] = 0;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *(int32_t *)(plStack_470 + 2) = 0x14;
    plStack_470[1] = (int64_t)plocal_var_2a0;
    *(int32_t *)((int64_t)plStack_470 + 0x1c) = local_var_290._4_4_;
    *(int32_t *)(plStack_470 + 3) = uVar5;
    local_var_298 = 0;
    plocal_var_2a0 = (int32_t *)0x0;
    local_var_290 = 0;
    *(int8_t *)(plStack_470 + 4) = 0;
    *(int8_t *)((int64_t)plStack_470 + 0x21) = 0;
    plStack_470[5] = lStack_280;
    plStack_470 = plStack_470 + 6;
  }
  else {
    function_24d850(&plStack_478,&plocal_var_2a8);
  }
  plocal_var_2a8 = &system_data_buffer_ptr;
  if (plocal_var_2a0 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_2a0 = (int32_t *)0x0;
  local_var_290 = local_var_290 & 0xffffffff00000000;
  plocal_var_2a8 = &system_state_ptr;
  plocal_var_278 = &system_data_buffer_ptr;
  local_var_260 = 0;
  plocal_var_270 = (uint64_t *)0x0;
  local_var_268 = 0;
  plocal_var_270 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)plocal_var_270 = 0;
  uVar5 = CoreMemoryPoolCleaner(plocal_var_270);
  local_var_260 = CONCAT44(local_var_260._4_4_,uVar5);
  *plocal_var_270 = 0x2072756f746e6f43;
  *(int32_t *)(plocal_var_270 + 1) = 0x6873654d;
  *(int16_t *)((int64_t)plocal_var_270 + 0xc) = 0x7365;
  *(int8_t *)((int64_t)plocal_var_270 + 0xe) = 0;
  local_var_268 = 0xe;
  local_var_258 = 0;
  lStack_250 = param_1 + 0x2480;
  if (plStack_470 < plStack_468) {
    *plStack_470 = (int64_t)&system_state_ptr;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *plStack_470 = (int64_t)&system_data_buffer_ptr;
    plStack_470[3] = 0;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *(int32_t *)(plStack_470 + 2) = 0xe;
    plStack_470[1] = (int64_t)plocal_var_270;
    *(int32_t *)((int64_t)plStack_470 + 0x1c) = local_var_260._4_4_;
    *(int32_t *)(plStack_470 + 3) = uVar5;
    local_var_268 = 0;
    plocal_var_270 = (uint64_t *)0x0;
    local_var_260 = 0;
    *(int8_t *)(plStack_470 + 4) = 0;
    *(int8_t *)((int64_t)plStack_470 + 0x21) = 0;
    plStack_470[5] = lStack_250;
    plStack_470 = plStack_470 + 6;
  }
  else {
    function_24d850(&plStack_478,&plocal_var_278);
  }
  plocal_var_278 = &system_data_buffer_ptr;
  if (plocal_var_270 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_270 = (uint64_t *)0x0;
  local_var_260 = local_var_260 & 0xffffffff00000000;
  plocal_var_278 = &system_state_ptr;
  plocal_var_248 = &system_data_buffer_ptr;
  local_var_230 = 0;
  plocal_var_240 = (uint64_t *)0x0;
  local_var_238 = 0;
  plocal_var_240 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)plocal_var_240 = 0;
  uVar5 = CoreMemoryPoolCleaner(plocal_var_240);
  local_var_230 = CONCAT44(local_var_230._4_4_,uVar5);
  *plocal_var_240 = 0x656873654d204955;
  *(int16_t *)(plocal_var_240 + 1) = 0x73;
  local_var_238 = 9;
  local_var_228 = 0;
  lStack_220 = param_1 + 0x2a48;
  if (plStack_470 < plStack_468) {
    *plStack_470 = (int64_t)&system_state_ptr;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *plStack_470 = (int64_t)&system_data_buffer_ptr;
    plStack_470[3] = 0;
    plStack_470[1] = 0;
    *(int32_t *)(plStack_470 + 2) = 0;
    *(int32_t *)(plStack_470 + 2) = 9;
    plStack_470[1] = (int64_t)plocal_var_240;
    *(int32_t *)((int64_t)plStack_470 + 0x1c) = local_var_230._4_4_;
    *(int32_t *)(plStack_470 + 3) = uVar5;
    local_var_238 = 0;
    plocal_var_240 = (uint64_t *)0x0;
    local_var_230 = 0;
    *(int8_t *)(plStack_470 + 4) = 0;
    *(int8_t *)((int64_t)plStack_470 + 0x21) = 0;
    plStack_470[5] = lStack_220;
    plStack_470 = plStack_470 + 6;
  }
  else {
    function_24d850(&plStack_478,&plocal_var_248);
  }
  plVar3 = plStack_470;
  plocal_var_248 = &system_data_buffer_ptr;
  if (plocal_var_240 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_240 = (uint64_t *)0x0;
  local_var_230 = local_var_230 & 0xffffffff00000000;
  plocal_var_248 = &system_state_ptr;
  if (plStack_478 != plStack_470) {
    plVar17 = plStack_478 + 5;
    do {
      uVar11 = 0;
      uVar10 = uVar11;
      uVar13 = uVar11;
      uVar16 = uVar11;
      while( true ) {
        iVar6 = (int)uVar10;
        if ((uint64_t)*(uint *)*plVar17 <= (uint64_t)(int64_t)iVar6) break;
        lVar14 = *(int64_t *)(*plVar17 + 8 + (uVar10 >> 0xb) * 8);
        function_2de020(*(uint64_t *)
                       (lVar14 + 0x10 +
                       (uint64_t)(uint)(iVar6 + (int)(uVar10 >> 0xb) * -0x800) * 0x18),stack_array_f8,
                      lVar14,*(int8_t *)((int64_t)plVar17 + -7));
        uVar16 = (uint64_t)(uint)((int)uVar16 + iStack_6c);
        uVar13 = (uint64_t)(uint)((int)uVar13 + iStack_68);
        plocal_var_90 = &system_data_buffer_ptr;
        if (lStack_88 != 0) {
// WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        lStack_88 = 0;
        local_var_78 = 0;
        plocal_var_90 = &system_state_ptr;
        plocal_var_b0 = &system_data_buffer_ptr;
        if (lStack_a8 != 0) {
// WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        lStack_a8 = 0;
        local_var_98 = 0;
        plocal_var_b0 = &system_state_ptr;
        plocal_var_d0 = &system_data_buffer_ptr;
        if (lStack_c8 != 0) {
// WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        lStack_c8 = 0;
        local_var_b8 = 0;
        plocal_var_d0 = &system_state_ptr;
        plocal_var_f0 = &system_data_buffer_ptr;
        if (lStack_e8 != 0) {
// WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        lStack_e8 = 0;
        local_var_d8 = 0;
        plocal_var_f0 = &system_state_ptr;
        uVar10 = (uint64_t)(iVar6 + 1);
      }
      System_DataHandler(plVar17 + -5,&processed_var_624_ptr,uVar16,uVar13,*(int32_t *)*plVar17);
      if (*(int *)*plVar17 != 0) {
        plocal_var_218 = &system_data_buffer_ptr;
        local_var_200 = 0;
        plocal_var_210 = (int8_t *)0x0;
        local_var_208 = 0;
        piStack_1f8 = (int *)0x0;
        piStack_1f0 = (int *)0x0;
        piStack_1e8 = (int *)0x0;
        local_var_1e0 = 3;
        uVar9 = *(uint *)(plVar17 + -3);
        if (plVar17[-4] == 0) {
LAB_180249d7b:
          if (uVar9 != 0) {
// WARNING: Subroutine does not return
            memcpy(plocal_var_210,plVar17[-4],(uint64_t)uVar9);
          }
        }
        else if (uVar9 != 0) {
          iVar6 = uVar9 + 1;
          if (iVar6 < 0x10) {
            iVar6 = 0x10;
          }
          plocal_var_210 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar6,0x13);
          *plocal_var_210 = 0;
          uVar5 = CoreMemoryPoolCleaner(plocal_var_210);
          local_var_200 = CONCAT44(local_var_200._4_4_,uVar5);
          goto LAB_180249d7b;
        }
        if (plocal_var_210 != (int8_t *)0x0) {
          plocal_var_210[uVar9] = 0;
        }
        local_var_200 = CONCAT44(*(int32_t *)((int64_t)plVar17 + -0xc),(int32_t)local_var_200);
        uVar10 = uVar11;
        local_var_208 = uVar9;
        while( true ) {
          piVar7 = (int *)0x0;
          iVar6 = (int)uVar10;
          if ((uint64_t)*(uint *)*plVar17 <= (uint64_t)(int64_t)iVar6) break;
          lVar14 = *(int64_t *)(*plVar17 + 8 + (uVar10 >> 0xb) * 8);
          function_2de020(*(uint64_t *)
                         (lVar14 + 0x10 +
                         (uint64_t)(uint)(iVar6 + (int)(uVar10 >> 0xb) * -0x800) * 0x18),
                        aiStack_198,lVar14,*(int8_t *)((int64_t)plVar17 + -7));
          piVar12 = piStack_1f0;
          aiStack_198[0] = (int)uVar11;
          uVar9 = aiStack_198[0] + 1;
          if (piStack_1f0 < piStack_1e8) {
            ppstack_special_x_20 = (void **)piStack_1f0;
            *piStack_1f0 = aiStack_198[0];
            piVar7 = piStack_1f0 + 2;
            piStack_1f0 = piStack_1f0 + 0x26;
            SystemCore_NetworkHandler0(piVar7,&plocal_var_190);
            SystemCore_NetworkHandler0(piVar12 + 10,&plocal_var_170);
            SystemCore_NetworkHandler0(piVar12 + 0x12,&plocal_var_150);
            SystemCore_NetworkHandler0(piVar12 + 0x1a,&plocal_var_130);
            piVar12[0x22] = iStack_110;
            piVar12[0x23] = iStack_10c;
            piVar12[0x24] = iStack_108;
          }
          else {
            lVar14 = ((int64_t)piStack_1f0 - (int64_t)piStack_1f8) / 0x98;
            if (lVar14 == 0) {
              lVar14 = 1;
LAB_180249ee9:
              piVar7 = (int *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar14 * 0x98,(int8_t)local_var_1e0);
            }
            else {
              lVar14 = lVar14 * 2;
              if (lVar14 != 0) goto LAB_180249ee9;
            }
            function_24dc20(&lStackX_18,piStack_1f8,piStack_1f0,piVar7);
            lVar2 = lStackX_18;
            function_24d120(lStackX_18,aiStack_198);
            piVar4 = piStack_1f0;
            for (piVar12 = piStack_1f8; piVar12 != piVar4; piVar12 = piVar12 + 0x26) {
              function_1528b0(piVar12);
            }
            if (piStack_1f8 != (int *)0x0) {
// WARNING: Subroutine does not return
              CoreMemoryPoolInitializer(piStack_1f8);
            }
            piStack_1e8 = piVar7 + lVar14 * 0x26;
            piStack_1f8 = piVar7;
            piStack_1f0 = (int *)(lVar2 + 0x98);
          }
          ppstack_special_x_20 = &plocal_var_130;
          plocal_var_130 = &system_data_buffer_ptr;
          if (lStack_128 != 0) {
// WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          lStack_128 = 0;
          local_var_118 = 0;
          plocal_var_130 = &system_state_ptr;
          ppstack_special_x_20 = &plocal_var_150;
          plocal_var_150 = &system_data_buffer_ptr;
          if (lStack_148 != 0) {
// WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          lStack_148 = 0;
          local_var_138 = 0;
          plocal_var_150 = &system_state_ptr;
          ppstack_special_x_20 = &plocal_var_170;
          plocal_var_170 = &system_data_buffer_ptr;
          if (lStack_168 != 0) {
// WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          lStack_168 = 0;
          local_var_158 = 0;
          plocal_var_170 = &system_state_ptr;
          ppstack_special_x_20 = &plocal_var_190;
          plocal_var_190 = &system_data_buffer_ptr;
          if (lStack_188 != 0) {
// WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          lStack_188 = 0;
          local_var_178 = 0;
          plocal_var_190 = &system_state_ptr;
          uVar10 = (uint64_t)(iVar6 + 1);
          uVar11 = (uint64_t)uVar9;
        }
        if (local_var_1b0 < local_var_1a8) {
          local_var_1b0 = local_var_1b0 + 0x40;
          function_24d1b0();
        }
        else {
          function_24d490(&local_var_1b8,&plocal_var_218);
        }
        function_152990(&piStack_1f8);
        plocal_var_218 = &system_data_buffer_ptr;
        if (plocal_var_210 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        plocal_var_210 = (int8_t *)0x0;
        local_var_200 = local_var_200 & 0xffffffff00000000;
        plocal_var_218 = &system_state_ptr;
      }
      plVar1 = plVar17 + 1;
      plVar17 = plVar17 + 6;
    } while (plVar1 != plVar3);
  }
  lVar14 = *(int64_t *)(system_message_buffer + 0x1cd8);
  uVar11 = *(uint64_t *)(lVar14 + 0x7fd0);
  if (uVar11 < *(uint64_t *)(lVar14 + 0x7fd8)) {
    *(uint64_t *)(lVar14 + 0x7fd0) = uVar11 + 0x40;
    function_24d300(uVar11);
  }
  else {
    function_24d670(lVar14 + 0x7fc8,&plocal_var_1d8);
  }
  function_24ced0(&plStack_478);
  function_152a80(&local_var_1b8);
  plocal_var_1d8 = &system_data_buffer_ptr;
  if (lStack_1d0 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return;
}