#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part018_sub002_sub002.c - 1 个函数

// 函数: void FUN_1801dbdc0(uint64_t param_1,uint64_t param_2)
void FUN_1801dbdc0(uint64_t param_1,uint64_t param_2)

{
  uint uVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  uint64_t *puVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int32_t uVar13;
  int8_t auStack_6d8 [32];
  longlong *plStack_6b8;
  longlong *plStack_6a8;
  ulonglong *puStack_6a0;
  int32_t uStack_698;
  int16_t uStack_694;
  ulonglong uStack_690;
  uint64_t uStack_688;
  longlong *plStack_680;
  int32_t uStack_678;
  int16_t uStack_674;
  longlong *plStack_670;
  int32_t uStack_668;
  int16_t uStack_664;
  longlong *plStack_660;
  ulonglong uStack_658;
  int32_t uStack_650;
  int16_t uStack_64c;
  uint64_t uStack_640;
  uint uStack_638;
  int16_t uStack_634;
  ulonglong uStack_630;
  uint uStack_628;
  int16_t uStack_624;
  longlong *plStack_620;
  uint uStack_618;
  int16_t uStack_614;
  longlong *plStack_610;
  uint uStack_608;
  int16_t uStack_604;
  longlong *plStack_600;
  uint uStack_5f8;
  int16_t uStack_5f4;
  ulonglong uStack_5f0;
  uint uStack_5e8;
  int16_t uStack_5e4;
  ulonglong uStack_5e0;
  uint uStack_5d8;
  int16_t uStack_5d4;
  ulonglong uStack_5d0;
  uint uStack_5c8;
  int16_t uStack_5c4;
  uint64_t uStack_5c0;
  ulonglong *puStack_5b8;
  uint *puStack_5b0;
  uint64_t uStack_5a8;
  uint auStack_5a0 [8];
  uint64_t *puStack_580;
  uint *puStack_578;
  uint64_t uStack_570;
  uint auStack_568 [8];
  void *puStack_548;
  int8_t *puStack_540;
  int32_t uStack_538;
  int8_t auStack_530 [32];
  longlong *plStack_510;
  uint *puStack_508;
  uint64_t uStack_500;
  uint auStack_4f8 [8];
  uint *puStack_4d8;
  uint *puStack_4d0;
  uint64_t uStack_4c8;
  uint auStack_4c0 [8];
  void *puStack_4a0;
  int8_t *puStack_498;
  int32_t uStack_490;
  int8_t auStack_488 [32];
  void *puStack_468;
  int8_t *puStack_460;
  int32_t uStack_458;
  int8_t auStack_450 [32];
  void *puStack_430;
  int8_t *puStack_428;
  int32_t uStack_420;
  int8_t auStack_418 [32];
  void *puStack_3f8;
  int8_t *puStack_3f0;
  int32_t uStack_3e8;
  int8_t auStack_3e0 [136];
  void *puStack_358;
  int8_t *puStack_350;
  int32_t uStack_348;
  int8_t auStack_340 [136];
  void *puStack_2b8;
  int8_t *puStack_2b0;
  int32_t uStack_2a8;
  int8_t auStack_2a0 [136];
  void *puStack_218;
  int8_t *puStack_210;
  int32_t uStack_208;
  int8_t auStack_200 [136];
  void *puStack_178;
  int8_t *puStack_170;
  int32_t uStack_168;
  int8_t auStack_160 [136];
  void *puStack_d8;
  int8_t *puStack_d0;
  int32_t uStack_c8;
  int8_t auStack_c0 [136];
  ulonglong uStack_38;
  
  uStack_5c0 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_6d8;
  iVar7 = 0;
  puStack_6a0 = (ulonglong *)0x0;
  uStack_698 = 0;
  uStack_694 = 0;
  puStack_580 = (uint64_t *)&unknown_var_672_ptr;
  puStack_578 = auStack_568;
  auStack_568[0] = auStack_568[0] & 0xffffff00;
  uStack_570 = CONCAT44((int)((ulonglong)uStack_570 >> 0x20),0xd);
  strcpy_s(auStack_568,0x20,&unknown_var_832_ptr);
  puVar2 = (uint64_t *)FUN_1800b31f0(system_resource_state,&plStack_670,&puStack_580,1);
  plStack_6a8 = (longlong *)*puVar2;
  FUN_1801e66c0(param_2,&plStack_6a8,&puStack_6a0);
  if (plStack_670 != (longlong *)0x0) {
    (**(code **)(*plStack_670 + 0x38))();
  }
  puStack_580 = (uint64_t *)&unknown_var_720_ptr;
  puStack_2b8 = &unknown_var_3432_ptr;
  puStack_2b0 = auStack_2a0;
  auStack_2a0[0] = 0;
  uStack_2a8 = 0x10;
  strcpy_s(auStack_2a0,0x80,&unknown_var_6880_ptr);
  puVar2 = (uint64_t *)FUN_1800b31f0(system_resource_state,&plStack_6a8,&puStack_2b8,0);
  plVar10 = (longlong *)*puVar2;
  plStack_670 = plVar10;
  if (plStack_6a8 != (longlong *)0x0) {
    (**(code **)(*plStack_6a8 + 0x38))();
  }
  puStack_2b8 = &unknown_var_720_ptr;
  puStack_580 = (uint64_t *)0x0;
  puStack_578 = (uint *)0x0;
  uStack_570 = 0;
  auStack_568[0] = 3;
  puStack_5b8 = (ulonglong *)0x0;
  puStack_5b0 = (uint *)0x0;
  uStack_5a8 = 0;
  auStack_5a0[0] = 3;
  puStack_3f8 = &unknown_var_3432_ptr;
  puStack_3f0 = auStack_3e0;
  auStack_3e0[0] = 0;
  uStack_3e8 = 0xc;
  strcpy_s(auStack_3e0,0x80,&unknown_var_5624_ptr);
  plStack_6a8 = (longlong *)FUN_180240430(plVar10,&puStack_3f8,0);
  FUN_18005ea90(&puStack_5b8,&plStack_6a8);
  puStack_3f8 = &unknown_var_720_ptr;
  puStack_358 = &unknown_var_3432_ptr;
  puStack_350 = auStack_340;
  auStack_340[0] = 0;
  uStack_348 = 0xd;
  strcpy_s(auStack_340,0x80,&unknown_var_5608_ptr);
  plStack_6a8 = (longlong *)FUN_180240430(plVar10,&puStack_358,0);
  FUN_18005ea90(&puStack_5b8,&plStack_6a8);
  puStack_358 = &unknown_var_720_ptr;
  puStack_218 = &unknown_var_3432_ptr;
  puStack_210 = auStack_200;
  auStack_200[0] = 0;
  uStack_208 = 0x11;
  strcpy_s(auStack_200,0x80,&unknown_var_5664_ptr);
  plStack_6a8 = (longlong *)FUN_180240430(plVar10,&puStack_218,0);
  FUN_18005ea90(&puStack_5b8,&plStack_6a8);
  puStack_218 = &unknown_var_720_ptr;
  puStack_178 = &unknown_var_3432_ptr;
  puStack_170 = auStack_160;
  auStack_160[0] = 0;
  uStack_168 = 0x12;
  strcpy_s(auStack_160,0x80,&unknown_var_5640_ptr);
  plStack_6a8 = (longlong *)FUN_180240430(plVar10,&puStack_178,0);
  FUN_18005ea90(&puStack_5b8,&plStack_6a8);
  puStack_178 = &unknown_var_720_ptr;
  puStack_d8 = &unknown_var_3432_ptr;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = 0x19;
  strcpy_s(auStack_c0,0x80,&unknown_var_5704_ptr);
  plStack_6a8 = (longlong *)FUN_180240430(plVar10,&puStack_d8,0);
  uVar13 = FUN_18005ea90(&puStack_5b8,&plStack_6a8);
  puStack_d8 = &unknown_var_720_ptr;
  plStack_6b8 = plVar10;
  FUN_1801d7ad0(uVar13,0,&puStack_580,&puStack_5b8);
  puVar2 = puStack_580;
  uVar11 = (longlong)puStack_578 - (longlong)puStack_580 >> 3;
  puVar6 = puStack_580;
  if (uVar11 != 0) {
    do {
      puStack_6a0 = (ulonglong *)*puVar6;
      uStack_698 = 0;
      uStack_694 = 0;
      FUN_1801e66c0(param_2,&plStack_670,&puStack_6a0);
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 1;
    } while ((ulonglong)(longlong)iVar7 < uVar11);
  }
  if (puStack_5b8 != (ulonglong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (puVar2 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar2);
  }
  puStack_6a0 = (ulonglong *)0x0;
  uStack_698 = 0;
  uStack_694 = 0;
  puStack_580 = (uint64_t *)&unknown_var_672_ptr;
  puStack_578 = auStack_568;
  auStack_568[0] = auStack_568[0] & 0xffffff00;
  uStack_570 = CONCAT44((int)((ulonglong)uStack_570 >> 0x20),0xd);
  strcpy_s(auStack_568,0x20,&unknown_var_4760_ptr);
  puVar2 = (uint64_t *)FUN_1800b31f0(system_resource_state,&plStack_670,&puStack_580,1);
  plStack_6a8 = (longlong *)*puVar2;
  FUN_1801e66c0(param_2,&plStack_6a8,&puStack_6a0);
  if (plStack_670 != (longlong *)0x0) {
    (**(code **)(*plStack_670 + 0x38))();
  }
  puStack_580 = (uint64_t *)&unknown_var_720_ptr;
  uVar3 = FUN_1800c0070();
  puStack_d8 = &unknown_var_3432_ptr;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = 0xc;
  strcpy_s(auStack_c0,0x80,&unknown_var_2520_ptr);
  uVar11 = FUN_180240430(uVar3,&puStack_d8,0);
  puStack_d8 = &unknown_var_720_ptr;
  puStack_178 = &unknown_var_3432_ptr;
  puStack_170 = auStack_160;
  auStack_160[0] = 0;
  uStack_168 = 0x12;
  strcpy_s(auStack_160,0x80,&unknown_var_2664_ptr);
  uVar4 = FUN_180240430(uVar3,&puStack_178,0);
  puStack_178 = &unknown_var_720_ptr;
  iVar7 = 0;
  puStack_218 = &unknown_var_3432_ptr;
  puStack_210 = auStack_200;
  auStack_200[0] = 0;
  uStack_208 = 0x12;
  strcpy_s(auStack_200,0x80,&unknown_var_2688_ptr);
  plStack_660 = (longlong *)FUN_180240430(uVar3,&puStack_218,0);
  puStack_218 = &unknown_var_720_ptr;
  puStack_2b8 = &unknown_var_3432_ptr;
  puStack_2b0 = auStack_2a0;
  auStack_2a0[0] = 0;
  uStack_2a8 = 0x13;
  strcpy_s(auStack_2a0,0x80,&unknown_var_2624_ptr);
  uStack_690 = FUN_180240430(uVar3,&puStack_2b8,0);
  puStack_2b8 = &unknown_var_720_ptr;
  puStack_3f8 = &unknown_var_3432_ptr;
  puStack_3f0 = auStack_3e0;
  auStack_3e0[0] = 0;
  uStack_3e8 = 0xf;
  strcpy_s(auStack_3e0,0x80,&unknown_var_2648_ptr);
  plStack_6a8 = (longlong *)FUN_180240430(uVar3,&puStack_3f8,0);
  puStack_3f8 = &unknown_var_720_ptr;
  puStack_358 = &unknown_var_3432_ptr;
  puStack_350 = auStack_340;
  auStack_340[0] = 0;
  uStack_348 = 0xd;
  strcpy_s(auStack_340,0x80,&unknown_var_2760_ptr);
  plStack_670 = (longlong *)FUN_180240430(uVar3,&puStack_358,0);
  puStack_358 = &unknown_var_720_ptr;
  puStack_5b8 = (ulonglong *)0x0;
  puStack_5b0 = (uint *)0x0;
  uStack_5a8 = 0;
  auStack_5a0[0] = 3;
  plStack_510 = (longlong *)0x0;
  puStack_508 = (uint *)0x0;
  uStack_500 = 0;
  auStack_4f8[0] = 3;
  FUN_18005ea90(&plStack_510,&plStack_6a8);
  uVar13 = FUN_18005ea90(&plStack_510,&plStack_670);
  plStack_6b8 = (longlong *)uVar3;
  FUN_1801d7ad0(uVar13,0,&puStack_5b8,&plStack_510);
  puStack_4d8 = (uint *)&unknown_var_672_ptr;
  puStack_4d0 = auStack_4c0;
  auStack_4c0[0] = auStack_4c0[0] & 0xffffff00;
  uStack_4c8 = CONCAT44(uStack_4c8._4_4_,0x10);
  strcpy_s(auStack_4c0,0x20,&unknown_var_872_ptr);
  puVar2 = (uint64_t *)FUN_1800b31f0(system_resource_state,&plStack_6a8,&puStack_4d8,1);
  uStack_688 = *puVar2;
  if (plStack_6a8 != (longlong *)0x0) {
    (**(code **)(*plStack_6a8 + 0x38))();
  }
  plVar10 = plStack_660;
  puStack_4d8 = (uint *)&unknown_var_720_ptr;
  uVar12 = (longlong)puStack_5b0 - (longlong)puStack_5b8 >> 3;
  puVar5 = puStack_5b8;
  if (uVar12 != 0) {
    do {
      puStack_6a0 = (ulonglong *)(*puVar5 | uVar11);
      uStack_698 = 0;
      uStack_694 = 0;
      FUN_1801e66c0(param_2,&uStack_688,&puStack_6a0);
      plStack_680 = (longlong *)(*puVar5 | uVar4);
      uStack_678 = 0;
      uStack_674 = 0;
      FUN_1801e66c0(param_2,&uStack_688,&plStack_680);
      uStack_658 = *puVar5 | (ulonglong)plVar10;
      uStack_650 = 0;
      uStack_64c = 0;
      FUN_1801e66c0(param_2,&uStack_688,&uStack_658);
      plStack_670 = (longlong *)(*puVar5 | uStack_690);
      uStack_668 = 0;
      uStack_664 = 0;
      FUN_1801e66c0(param_2,&uStack_688,&plStack_670);
      iVar7 = iVar7 + 1;
      puVar5 = puVar5 + 1;
    } while ((ulonglong)(longlong)iVar7 < uVar12);
  }
  if (plStack_510 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (puStack_5b8 != (ulonglong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puStack_5b8);
  }
  iVar7 = 0;
  puStack_6a0 = (ulonglong *)0x0;
  uStack_698 = 0;
  uStack_694 = 0;
  puStack_580 = (uint64_t *)&unknown_var_672_ptr;
  puStack_578 = auStack_568;
  auStack_568[0] = auStack_568[0] & 0xffffff00;
  uStack_570 = CONCAT44((int)((ulonglong)uStack_570 >> 0x20),0x18);
  strcpy_s(auStack_568,0x20,&unknown_var_2776_ptr);
  puVar2 = (uint64_t *)FUN_1800b31f0(system_resource_state,&plStack_670,&puStack_580,1);
  plStack_6a8 = (longlong *)*puVar2;
  FUN_1801e66c0(param_2,&plStack_6a8,&puStack_6a0);
  if (plStack_670 != (longlong *)0x0) {
    (**(code **)(*plStack_670 + 0x38))();
  }
  puStack_580 = (uint64_t *)&unknown_var_720_ptr;
  puStack_6a0 = (ulonglong *)0x0;
  uStack_698 = 0;
  uStack_694 = 0;
  puStack_4d8 = (uint *)&unknown_var_672_ptr;
  puStack_4d0 = auStack_4c0;
  auStack_4c0[0] = auStack_4c0[0] & 0xffffff00;
  uStack_4c8 = CONCAT44((int)((ulonglong)uStack_4c8 >> 0x20),0x17);
  strcpy_s(auStack_4c0,0x20,&unknown_var_848_ptr);
  puVar2 = (uint64_t *)FUN_1800b31f0(system_resource_state,&plStack_660,&puStack_4d8,1);
  plStack_6a8 = (longlong *)*puVar2;
  FUN_1801e66c0(param_2,&plStack_6a8,&puStack_6a0);
  if (plStack_660 != (longlong *)0x0) {
    (**(code **)(*plStack_660 + 0x38))();
  }
  puStack_4d8 = (uint *)&unknown_var_720_ptr;
  puStack_3f8 = &unknown_var_3480_ptr;
  puStack_3f0 = auStack_3e0;
  auStack_3e0[0] = 0;
  uStack_3e8 = 0x17;
  strcpy_s(auStack_3e0,0x40,&unknown_var_2712_ptr);
  puVar2 = (uint64_t *)FUN_1800b31f0(system_resource_state,&plStack_6a8,&puStack_3f8,1);
  uVar3 = *puVar2;
  uStack_688 = uVar3;
  if (plStack_6a8 != (longlong *)0x0) {
    (**(code **)(*plStack_6a8 + 0x38))();
  }
  puStack_3f8 = &unknown_var_720_ptr;
  puStack_358 = &unknown_var_3480_ptr;
  puStack_350 = auStack_340;
  auStack_340[0] = 0;
  uStack_348 = 0x16;
  strcpy_s(auStack_340,0x40,&unknown_var_2736_ptr);
  puVar2 = (uint64_t *)FUN_1800b31f0(system_resource_state,&plStack_670,&puStack_358,1);
  plStack_6a8 = (longlong *)*puVar2;
  if (plStack_670 != (longlong *)0x0) {
    (**(code **)(*plStack_670 + 0x38))();
  }
  puStack_358 = &unknown_var_720_ptr;
  puStack_580 = (uint64_t *)&unknown_var_672_ptr;
  puStack_578 = auStack_568;
  auStack_568[0] = auStack_568[0] & 0xffffff00;
  uStack_570 = CONCAT44((int)((ulonglong)uStack_570 >> 0x20),0x10);
  strcpy_s(auStack_568,0x20,&unknown_var_2856_ptr);
  puVar5 = (ulonglong *)FUN_180240430(uVar3,&puStack_580,1);
  puStack_580 = (uint64_t *)&unknown_var_720_ptr;
  puStack_6a0 = (ulonglong *)0x0;
  uStack_698 = 0;
  uStack_694 = 0;
  FUN_1801e66c0(param_2,&uStack_688,&puStack_6a0);
  uStack_698 = 0;
  uStack_694 = 0;
  puStack_6a0 = puVar5;
  FUN_1801e66c0(param_2,&uStack_688,&puStack_6a0);
  puStack_6a0 = (ulonglong *)0x0;
  uStack_698 = 0;
  uStack_694 = 0;
  FUN_1801e66c0(param_2,&plStack_6a8,&puStack_6a0);
  puStack_3f8 = &unknown_var_3480_ptr;
  puStack_3f0 = auStack_3e0;
  auStack_3e0[0] = 0;
  uStack_3e8 = 0x21;
  strcpy_s(auStack_3e0,0x40,&unknown_var_1008_ptr);
  puVar2 = (uint64_t *)FUN_1800b31f0(system_resource_state,&plStack_6a8,&puStack_3f8,1);
  uVar3 = *puVar2;
  uStack_688 = uVar3;
  if (plStack_6a8 != (longlong *)0x0) {
    (**(code **)(*plStack_6a8 + 0x38))();
  }
  puStack_3f8 = &unknown_var_720_ptr;
  puStack_5b8 = (ulonglong *)&unknown_var_672_ptr;
  puStack_5b0 = auStack_5a0;
  auStack_5a0[0] = auStack_5a0[0] & 0xffffff00;
  uStack_5a8 = CONCAT44((int)((ulonglong)uStack_5a8 >> 0x20),0x13);
  strcpy_s(auStack_5a0,0x20,&unknown_var_2880_ptr);
  uVar11 = FUN_180240430(uVar3,&puStack_5b8,1);
  puStack_5b8 = (ulonglong *)&unknown_var_720_ptr;
  plStack_510 = (longlong *)&unknown_var_672_ptr;
  puStack_508 = auStack_4f8;
  auStack_4f8[0] = auStack_4f8[0] & 0xffffff00;
  uStack_500 = CONCAT44((int)((ulonglong)uStack_500 >> 0x20),0x13);
  uStack_658 = uVar11;
  strcpy_s(auStack_4f8,0x20,&unknown_var_2808_ptr);
  plStack_660 = (longlong *)FUN_180240430(uVar3,&plStack_510,1);
  plStack_510 = (longlong *)&unknown_var_720_ptr;
  puStack_4a0 = &unknown_var_672_ptr;
  puStack_498 = auStack_488;
  auStack_488[0] = 0;
  uStack_490 = 0x13;
  strcpy_s(auStack_488,0x20,&unknown_var_2832_ptr);
  plStack_670 = (longlong *)FUN_180240430(uVar3,&puStack_4a0,1);
  puStack_4a0 = &unknown_var_720_ptr;
  puStack_468 = &unknown_var_672_ptr;
  puStack_460 = auStack_450;
  auStack_450[0] = 0;
  uStack_458 = 0x14;
  strcpy_s(auStack_450,0x20,&unknown_var_2952_ptr);
  plStack_6a8 = (longlong *)FUN_180240430(uVar3,&puStack_468,1);
  puStack_468 = &unknown_var_720_ptr;
  puStack_430 = &unknown_var_672_ptr;
  puStack_428 = auStack_418;
  auStack_418[0] = 0;
  uStack_420 = 0x12;
  strcpy_s(auStack_418,0x20,&unknown_var_1432_ptr);
  uVar4 = FUN_180240430(uVar3,&puStack_430,1);
  puStack_430 = &unknown_var_720_ptr;
  puStack_580 = (uint64_t *)0x0;
  puStack_578 = (uint *)0x0;
  uStack_570 = 0;
  auStack_568[0] = 3;
  puStack_4d8 = (uint *)0x0;
  puStack_4d0 = (uint *)0x0;
  uStack_4c8 = 0;
  auStack_4c0[0] = 3;
  uStack_690._0_4_ = 0x80000000;
  FUN_1800571e0(&puStack_580,&uStack_690);
  uStack_690 = CONCAT44(uStack_690._4_4_,0x200);
  uVar13 = FUN_1800571e0(&puStack_580,&uStack_690);
  plStack_6b8 = (longlong *)uVar3;
  FUN_1801d7910(uVar13,0,&puStack_4d8,&puStack_580);
  uVar12 = (longlong)puStack_4d0 - (longlong)puStack_4d8 >> 2;
  if (uVar12 != 0) {
    uStack_690 = uVar4 | (ulonglong)plStack_660;
    plStack_680 = (longlong *)(uVar4 | (ulonglong)plStack_670);
    puStack_6a0 = (ulonglong *)(uVar4 | (ulonglong)plStack_6a8);
    puVar9 = puStack_4d8;
    do {
      uVar1 = *puVar9;
      uStack_640 = 0;
      uStack_634 = 0;
      uStack_638 = uVar1;
      FUN_1801e66c0(param_2,&uStack_688,&uStack_640);
      uStack_630 = uStack_658;
      uStack_624 = 0;
      uStack_628 = uVar1;
      FUN_1801e66c0(param_2,&uStack_688,&uStack_630);
      plStack_620 = plStack_660;
      uStack_614 = 0;
      uStack_618 = uVar1;
      FUN_1801e66c0(param_2,&uStack_688,&plStack_620);
      plStack_610 = plStack_670;
      uStack_604 = 0;
      uStack_608 = uVar1;
      FUN_1801e66c0(param_2,&uStack_688,&plStack_610);
      plStack_600 = plStack_6a8;
      uStack_5f4 = 0;
      uStack_5f8 = uVar1;
      FUN_1801e66c0(param_2,&uStack_688,&plStack_600);
      uStack_5e4 = 0;
      uStack_5f0 = uVar4;
      uStack_5e8 = uVar1;
      FUN_1801e66c0(param_2,&uStack_688,&uStack_5f0);
      uStack_5d4 = 0;
      uStack_5e0 = uVar4 | uVar11;
      uStack_5d8 = uVar1;
      FUN_1801e66c0(param_2,&uStack_688,&uStack_5e0);
      uStack_5d0 = uStack_690;
      uStack_5c4 = 0;
      uStack_5c8 = uVar1;
      FUN_1801e66c0(param_2,&uStack_688,&uStack_5d0);
      plStack_510 = plStack_680;
      puStack_508._0_6_ = (uint6)uVar1;
      FUN_1801e66c0(param_2,&uStack_688,&plStack_510);
      puStack_5b8 = puStack_6a0;
      puStack_5b0._0_6_ = (uint6)uVar1;
      FUN_1801e66c0(param_2,&uStack_688,&puStack_5b8);
      iVar7 = iVar7 + 1;
      puVar9 = puVar9 + 1;
    } while ((ulonglong)(longlong)iVar7 < uVar12);
  }
  iVar7 = 0;
  if (puStack_4d8 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (puStack_580 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  plStack_510 = (longlong *)0x0;
  puStack_508 = (uint *)0x0;
  uStack_500 = 0;
  auStack_4f8[0] = 3;
  puStack_580 = (uint64_t *)0x0;
  puStack_578 = (uint *)0x0;
  uStack_570 = 0;
  auStack_568[0] = 3;
  puVar2 = (uint64_t *)FUN_18009e9e0(0,&puStack_6a0,&unknown_var_816_ptr);
  uVar3 = *puVar2;
  if (puStack_6a0 != (ulonglong *)0x0) {
    (**(code **)(*puStack_6a0 + 0x38))();
  }
  puStack_430 = &unknown_var_672_ptr;
  puStack_428 = auStack_418;
  auStack_418[0] = 0;
  uStack_420 = 0x11;
  strcpy_s(auStack_418,0x20,&unknown_var_3056_ptr);
  plStack_680 = (longlong *)FUN_180240430(uVar3,&puStack_430,1);
  FUN_18005ea90(&plStack_510,&plStack_680);
  puStack_430 = &unknown_var_720_ptr;
  puStack_468 = &unknown_var_672_ptr;
  puStack_460 = auStack_450;
  auStack_450[0] = 0;
  uStack_458 = 0x10;
  strcpy_s(auStack_450,0x20,&unknown_var_3120_ptr);
  plStack_680 = (longlong *)FUN_180240430(uVar3,&puStack_468,1);
  FUN_18005ea90(&plStack_510,&plStack_680);
  puStack_468 = &unknown_var_720_ptr;
  puStack_4a0 = &unknown_var_672_ptr;
  puStack_498 = auStack_488;
  auStack_488[0] = 0;
  uStack_490 = 0x11;
  strcpy_s(auStack_488,0x20,&unknown_var_3096_ptr);
  plStack_680 = (longlong *)FUN_180240430(uVar3,&puStack_4a0,1);
  FUN_18005ea90(&plStack_510,&plStack_680);
  puStack_4a0 = &unknown_var_720_ptr;
  puStack_4d8 = (uint *)&unknown_var_672_ptr;
  puStack_4d0 = auStack_4c0;
  auStack_4c0[0] = auStack_4c0[0] & 0xffffff00;
  uStack_4c8 = CONCAT44((int)((ulonglong)uStack_4c8 >> 0x20),0x10);
  strcpy_s(auStack_4c0,0x20,&unknown_var_3176_ptr);
  plStack_680 = (longlong *)FUN_180240430(uVar3,&puStack_4d8,1);
  FUN_18005ea90(&plStack_510,&plStack_680);
  puStack_4d8 = (uint *)&unknown_var_720_ptr;
  puStack_5b8 = (ulonglong *)&unknown_var_672_ptr;
  puStack_5b0 = auStack_5a0;
  auStack_5a0[0] = auStack_5a0[0] & 0xffffff00;
  uStack_5a8 = CONCAT44((int)((ulonglong)uStack_5a8 >> 0x20),0xf);
  strcpy_s(auStack_5a0,0x20,&unknown_var_3224_ptr);
  plStack_680 = (longlong *)FUN_180240430(uVar3,&puStack_5b8,1);
  FUN_18005ea90(&plStack_510,&plStack_680);
  puStack_5b8 = (ulonglong *)&unknown_var_720_ptr;
  puStack_548 = &unknown_var_672_ptr;
  puStack_540 = auStack_530;
  auStack_530[0] = 0;
  uStack_538 = 0x10;
  strcpy_s(auStack_530,0x20,&unknown_var_3200_ptr);
  plStack_680 = (longlong *)FUN_180240430(uVar3,&puStack_548,1);
  uVar13 = FUN_18005ea90(&plStack_510,&plStack_680);
  puStack_548 = &unknown_var_720_ptr;
  plStack_6b8 = (longlong *)uVar3;
  FUN_1801d7ad0(uVar13,0,&puStack_580,&plStack_510);
  uVar11 = (longlong)puStack_578 - (longlong)puStack_580 >> 3;
  puVar2 = puStack_580;
  iVar8 = iVar7;
  if (uVar11 != 0) {
    do {
      puStack_5b8 = (ulonglong *)*puVar2;
      puStack_5b0 = (uint *)((ulonglong)puStack_5b0 & 0xffff000000000000);
      puStack_548 = &unknown_var_672_ptr;
      puStack_540 = auStack_530;
      auStack_530[0] = 0;
      uStack_538 = 0xb;
      strcpy_s(auStack_530,0x20,&unknown_var_816_ptr);
      puVar6 = (uint64_t *)FUN_1800b31f0(system_resource_state,&plStack_680,&puStack_548,1);
      puStack_6a0 = (ulonglong *)*puVar6;
      FUN_1801e66c0(param_2,&puStack_6a0,&puStack_5b8);
      if (plStack_680 != (longlong *)0x0) {
        (**(code **)(*plStack_680 + 0x38))();
      }
      puStack_548 = &unknown_var_720_ptr;
      iVar8 = iVar8 + 1;
      puVar2 = puVar2 + 1;
    } while ((ulonglong)(longlong)iVar8 < uVar11);
  }
  if (puStack_580 == (uint64_t *)0x0) {
    if (plStack_510 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    plStack_510 = (longlong *)0x0;
    puStack_508 = (uint *)0x0;
    uStack_500 = 0;
    auStack_4f8[0] = 3;
    puVar2 = (uint64_t *)FUN_18009e9e0(0,&puStack_6a0,&unknown_var_2976_ptr);
    uVar3 = *puVar2;
    if (puStack_6a0 != (ulonglong *)0x0) {
      (**(code **)(*puStack_6a0 + 0x38))();
    }
    puStack_548 = &unknown_var_672_ptr;
    puStack_540 = auStack_530;
    auStack_530[0] = 0;
    uStack_538 = 0x10;
    strcpy_s(auStack_530,0x20,&unknown_var_2904_ptr);
    plStack_680 = (longlong *)FUN_180240430(uVar3,&puStack_548,1);
    FUN_18005ea90(&plStack_510,&plStack_680);
    puStack_548 = &unknown_var_720_ptr;
    puStack_430 = &unknown_var_672_ptr;
    puStack_428 = auStack_418;
    auStack_418[0] = 0;
    uStack_420 = 0x11;
    strcpy_s(auStack_418,0x20,&unknown_var_2928_ptr);
    plStack_680 = (longlong *)FUN_180240430(uVar3,&puStack_430,1);
    FUN_18005ea90(&plStack_510,&plStack_680);
    puStack_430 = &unknown_var_720_ptr;
    puStack_468 = &unknown_var_672_ptr;
    puStack_460 = auStack_450;
    auStack_450[0] = 0;
    uStack_458 = 0x1c;
    strcpy_s(auStack_450,0x20,&unknown_var_3048_ptr);
    plStack_680 = (longlong *)FUN_180240430(uVar3,&puStack_468,1);
    FUN_18005ea90(&plStack_510,&plStack_680);
    puStack_468 = &unknown_var_720_ptr;
    puStack_4a0 = &unknown_var_672_ptr;
    puStack_498 = auStack_488;
    auStack_488[0] = 0;
    uStack_490 = 0x18;
    strcpy_s(auStack_488,0x20,&unknown_var_3080_ptr);
    puStack_6a0 = (ulonglong *)FUN_180240430(uVar3,&puStack_4a0,1);
    uVar13 = FUN_18005ea90(&plStack_510,&puStack_6a0);
    puStack_4a0 = &unknown_var_720_ptr;
    uVar11 = (longlong)puStack_508 - (longlong)plStack_510 >> 3;
    plVar10 = plStack_510;
    if (uVar11 != 0) {
      do {
        puStack_5b8 = (ulonglong *)*plVar10;
        puStack_5b0 = (uint *)((ulonglong)puStack_5b0 & 0xffff000000000000);
        puStack_548 = &unknown_var_672_ptr;
        puStack_540 = auStack_530;
        auStack_530[0] = 0;
        uStack_538 = 0x18;
        strcpy_s(auStack_530,0x20,&unknown_var_2976_ptr);
        puVar2 = (uint64_t *)FUN_1800b31f0(system_resource_state,&plStack_680,&puStack_548,1);
        puStack_6a0 = (ulonglong *)*puVar2;
        uVar13 = FUN_1801e66c0(param_2,&puStack_6a0,&puStack_5b8);
        if (plStack_680 != (longlong *)0x0) {
          uVar13 = (**(code **)(*plStack_680 + 0x38))();
        }
        puStack_548 = &unknown_var_720_ptr;
        iVar7 = iVar7 + 1;
        plVar10 = plVar10 + 1;
      } while ((ulonglong)(longlong)iVar7 < uVar11);
    }
    if (plStack_510 == (longlong *)0x0) {
      puVar5 = (ulonglong *)FUN_18009e9e0(uVar13,&puStack_6a0,&unknown_var_3008_ptr);
      uVar11 = *puVar5;
      uStack_690 = uVar11;
      if (puStack_6a0 != (ulonglong *)0x0) {
        (**(code **)(*puStack_6a0 + 0x38))();
      }
      puStack_548 = &unknown_var_672_ptr;
      puStack_540 = auStack_530;
      auStack_530[0] = 0;
      uStack_538 = 0xe;
      strcpy_s(auStack_530,0x20,&unknown_var_3032_ptr);
      puStack_5b8 = (ulonglong *)FUN_180240430(uVar11,&puStack_548,1);
      puStack_5b0 = (uint *)((ulonglong)puStack_5b0 & 0xffff000000000000);
      FUN_1801e66c0(param_2,&uStack_690,&puStack_5b8);
      puStack_548 = &unknown_var_720_ptr;
      puStack_430 = &unknown_var_672_ptr;
      puStack_428 = auStack_418;
      auStack_418[0] = 0;
      uStack_420 = 0xd;
      strcpy_s(auStack_418,0x20,&unknown_var_2584_ptr);
      puStack_5b8 = (ulonglong *)FUN_180240430(uStack_690,&puStack_430,1);
      puStack_5b0 = (uint *)((ulonglong)puStack_5b0 & 0xffff000000000000);
      FUN_1801e66c0(param_2,&uStack_690,&puStack_5b8);
      puStack_430 = &unknown_var_720_ptr;
      puStack_468 = &unknown_var_672_ptr;
      puStack_460 = auStack_450;
      auStack_450[0] = 0;
      uStack_458 = 7;
      strcpy_s(auStack_450,0x20,&unknown_var_2544_ptr);
      puStack_5b8 = (ulonglong *)FUN_180240430(uStack_690,&puStack_468,1);
      puStack_5b0 = (uint *)((ulonglong)puStack_5b0 & 0xffff000000000000);
      FUN_1801e66c0(param_2,&uStack_690,&puStack_5b8);
      puStack_468 = &unknown_var_720_ptr;
      puStack_4a0 = &unknown_var_672_ptr;
      puStack_498 = auStack_488;
      auStack_488[0] = 0;
      uStack_490 = 0xd;
      strcpy_s(auStack_488,0x20,&unknown_var_2552_ptr);
      puStack_5b8 = (ulonglong *)FUN_180240430(uStack_690,&puStack_4a0,1);
      puStack_5b0 = (uint *)((ulonglong)puStack_5b0 & 0xffff000000000000);
      FUN_1801e66c0(param_2,&uStack_690,&puStack_5b8);
      puStack_4a0 = &unknown_var_720_ptr;
      puStack_580 = (uint64_t *)&unknown_var_672_ptr;
      puStack_578 = auStack_568;
      auStack_568[0] = auStack_568[0] & 0xffffff00;
      uStack_570 = CONCAT44((int)((ulonglong)uStack_570 >> 0x20),8);
      strcpy_s(auStack_568,0x20,&unknown_var_2512_ptr);
      puStack_5b8 = (ulonglong *)FUN_180240430(uStack_690,&puStack_580,1);
      puStack_5b0 = (uint *)((ulonglong)puStack_5b0 & 0xffff000000000000);
      FUN_1801e66c0(param_2,&uStack_690,&puStack_5b8);
      puStack_580 = (uint64_t *)&unknown_var_720_ptr;
      puStack_4d8 = (uint *)&unknown_var_672_ptr;
      puStack_4d0 = auStack_4c0;
      auStack_4c0[0] = auStack_4c0[0] & 0xffffff00;
      uStack_4c8 = CONCAT44((int)((ulonglong)uStack_4c8 >> 0x20),8);
      strcpy_s(auStack_4c0,0x20,&unknown_var_2528_ptr);
      puStack_5b8 = (ulonglong *)FUN_180240430(uStack_690,&puStack_4d8,1);
      puStack_5b0 = (uint *)((ulonglong)puStack_5b0 & 0xffff000000000000);
      FUN_1801e66c0(param_2,&uStack_690,&puStack_5b8);
      puStack_4d8 = (uint *)&unknown_var_720_ptr;
      plStack_510 = (longlong *)&unknown_var_672_ptr;
      puStack_508 = auStack_4f8;
      auStack_4f8[0] = auStack_4f8[0] & 0xffffff00;
      uStack_500 = CONCAT44((int)((ulonglong)uStack_500 >> 0x20),7);
      strcpy_s(auStack_4f8,0x20,&unknown_var_2496_ptr);
      puStack_5b8 = (ulonglong *)FUN_180240430(uStack_690,&plStack_510,1);
      puStack_5b0 = (uint *)((ulonglong)puStack_5b0 & 0xffff000000000000);
      FUN_1801e66c0(param_2,&uStack_690,&puStack_5b8);
      plStack_510 = (longlong *)&unknown_var_720_ptr;
      puStack_358 = &unknown_var_672_ptr;
      puStack_350 = auStack_340;
      auStack_340[0] = 0;
      uStack_348 = 7;
      strcpy_s(auStack_340,0x20,&unknown_var_2504_ptr);
      puStack_5b8 = (ulonglong *)FUN_180240430(uStack_690,&puStack_358,1);
      puStack_5b0 = (uint *)((ulonglong)puStack_5b0 & 0xffff000000000000);
      FUN_1801e66c0(param_2,&uStack_690,&puStack_5b8);
      puStack_358 = &unknown_var_720_ptr;
      puStack_3f8 = &unknown_var_672_ptr;
      puStack_3f0 = auStack_3e0;
      auStack_3e0[0] = 0;
      uStack_3e8 = 0xc;
      strcpy_s(auStack_3e0,0x20,&unknown_var_3152_ptr);
      puStack_5b8 = (ulonglong *)FUN_180240430(uStack_690,&puStack_3f8,1);
      puStack_5b0 = (uint *)((ulonglong)puStack_5b0 & 0xffff000000000000);
      FUN_1801e66c0(param_2,&uStack_690,&puStack_5b8);
      puStack_3f8 = &unknown_var_720_ptr;
      puStack_2b8 = &unknown_var_3480_ptr;
      puStack_2b0 = auStack_2a0;
      auStack_2a0[0] = 0;
      uStack_2a8 = 0xd;
      strcpy_s(auStack_2a0,0x40,&unknown_var_3168_ptr);
      puVar2 = (uint64_t *)FUN_1800b31f0(system_resource_state,&puStack_6a0,&puStack_2b8,1);
      plVar10 = (longlong *)*puVar2;
      plStack_6a8 = plVar10;
      if (puStack_6a0 != (ulonglong *)0x0) {
        (**(code **)(*puStack_6a0 + 0x38))();
      }
      puStack_2b8 = &unknown_var_720_ptr;
      puStack_3f8 = &unknown_var_672_ptr;
      puStack_3f0 = auStack_3e0;
      auStack_3e0[0] = 0;
      uStack_3e8 = 0xd;
      strcpy_s(auStack_3e0,0x20,&unknown_var_3112_ptr);
      puVar5 = (ulonglong *)FUN_180240430(plVar10,&puStack_3f8,1);
      puStack_3f8 = &unknown_var_720_ptr;
      puStack_5b8 = (ulonglong *)0x0;
      puStack_5b0._0_6_ = 0x400000000;
      FUN_1801e66c0(param_2,&plStack_6a8,&puStack_5b8);
      puStack_5b0 = (uint *)CONCAT26(puStack_5b0._6_2_,0x400000000);
      puStack_5b8 = puVar5;
      FUN_1801e66c0(param_2,&plStack_6a8,&puStack_5b8);
      puStack_358 = &unknown_var_3480_ptr;
      puStack_350 = auStack_340;
      auStack_340[0] = 0;
      uStack_348 = 0x16;
      strcpy_s(auStack_340,0x40,&unknown_var_3128_ptr);
      puVar2 = (uint64_t *)FUN_1800b31f0(system_resource_state,&puStack_6a0,&puStack_358,1);
      plVar10 = (longlong *)*puVar2;
      plStack_6a8 = plVar10;
      if (puStack_6a0 != (ulonglong *)0x0) {
        (**(code **)(*puStack_6a0 + 0x38))();
      }
      puStack_358 = &unknown_var_720_ptr;
      puStack_3f8 = &unknown_var_672_ptr;
      puStack_3f0 = auStack_3e0;
      auStack_3e0[0] = 0;
      uStack_3e8 = 0xd;
      strcpy_s(auStack_3e0,0x20,&unknown_var_3112_ptr);
      puVar5 = (ulonglong *)FUN_180240430(plVar10,&puStack_3f8,1);
      puStack_3f8 = &unknown_var_720_ptr;
      puStack_5b8 = (ulonglong *)0x0;
      puStack_5b0._0_6_ = 0x400000000;
      FUN_1801e66c0(param_2,&plStack_6a8,&puStack_5b8);
      puStack_5b0 = (uint *)CONCAT26(puStack_5b0._6_2_,0x400000000);
      puStack_5b8 = puVar5;
      FUN_1801e66c0(param_2,&plStack_6a8,&puStack_5b8);
      puStack_2b8 = &unknown_var_3480_ptr;
      puStack_2b0 = auStack_2a0;
      auStack_2a0[0] = 0;
      uStack_2a8 = 0x15;
      strcpy_s(auStack_2a0,0x40,&unknown_var_3184_ptr);
      puVar2 = (uint64_t *)FUN_1800b31f0(system_resource_state,&puStack_6a0,&puStack_2b8,1);
      plVar10 = (longlong *)*puVar2;
      plStack_6a8 = plVar10;
      if (puStack_6a0 != (ulonglong *)0x0) {
        (**(code **)(*puStack_6a0 + 0x38))();
      }
      puStack_2b8 = &unknown_var_720_ptr;
      puStack_3f8 = &unknown_var_672_ptr;
      puStack_3f0 = auStack_3e0;
      auStack_3e0[0] = 0;
      uStack_3e8 = 0xd;
      strcpy_s(auStack_3e0,0x20,&unknown_var_3112_ptr);
      puVar5 = (ulonglong *)FUN_180240430(plVar10,&puStack_3f8,1);
      puStack_3f8 = &unknown_var_720_ptr;
      puStack_5b8 = (ulonglong *)0x0;
      puStack_5b0._0_6_ = 0x400000000;
      FUN_1801e66c0(param_2,&plStack_6a8,&puStack_5b8);
      puStack_5b0 = (uint *)CONCAT26(puStack_5b0._6_2_,0x400000000);
      puStack_5b8 = puVar5;
      FUN_1801e66c0(param_2,&plStack_6a8,&puStack_5b8);
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_6d8);
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(plStack_510);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puStack_580);
}



// WARNING: Removing unreachable block (ram,0x0001801de3f3)
// WARNING: Removing unreachable block (ram,0x0001801de496)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1801de280(uint64_t param_1,longlong *param_2,longlong *param_3)

{
  int32_t *puVar1;
  longlong lVar2;
  longlong *plVar3;
  uint64_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  byte bVar13;
  uint64_t uStackX_8;
  longlong *plStackX_10;
  longlong *plStackX_18;
  void **ppuStackX_20;
  void *puStack_f0;
  longlong lStack_e8;
  int32_t uStack_e0;
  ulonglong uStack_d8;
  int32_t uStack_d0;
  int32_t uStack_cc;
  int32_t uStack_c8;
  int32_t uStack_c4;
  longlong *plStack_c0;
  uint64_t uStack_b8;
  longlong lStack_b0;
  int32_t uStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  int32_t uStack_98;
  uint64_t uStack_90;
  int8_t auStack_88 [32];
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  longlong *plStack_58;
  
  uStack_b8 = 0xfffffffffffffffe;
  bVar13 = 1;
  uVar11 = 0;
  lVar9 = *param_2;
  lVar2 = param_2[1] - lVar9 >> 0x3f;
  uVar10 = uVar11;
  uStackX_8 = param_1;
  plStackX_18 = param_3;
  if ((param_2[1] - lVar9) / 0x18 + lVar2 != lVar2) {
    do {
      if (*(char *)(system_main_module_state + 0x1ed) == '\0') {
        uVar10 = system_main_module_state;
        if ((longlong *)*param_3 != (longlong *)0x0) {
          uVar10 = (**(code **)(*(longlong *)*param_3 + 0x38))();
        }
        return uVar10 & 0xffffffffffffff00;
      }
      lVar2 = *(longlong *)(uVar11 + lVar9);
      if (lVar2 != 0) {
        ppuStackX_20 = &puStack_f0;
        puStack_f0 = &unknown_var_3456_ptr;
        uStack_d8 = 0;
        lStack_e8 = 0;
        uStack_e0 = 0;
        plStack_c0 = (longlong *)0x0;
        puVar1 = (int32_t *)(uVar11 + 8 + lVar9);
        uVar5 = *puVar1;
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        uStack_d0 = 0;
        uStack_cc = 0;
        uStack_c8 = 0;
        uStack_c4 = 0;
        plVar3 = (longlong *)*param_3;
        if (plVar3 != (longlong *)0x0) {
          plStackX_10 = plVar3;
          (**(code **)(*plVar3 + 0x28))(plVar3);
        }
        plStackX_10 = plStack_c0;
        if (plStack_c0 != (longlong *)0x0) {
          lVar9 = *plStack_c0;
          plStack_c0 = plVar3;
          (**(code **)(lVar9 + 0x38))();
          plVar3 = plStack_c0;
        }
        plStack_c0 = plVar3;
        uVar4 = *(uint64_t *)(lVar2 + 0x15b8);
        ppuStackX_20 = (void **)&lStack_b0;
        uStack_90 = 0;
        uStack_98 = 0;
        lStack_b0 = lVar2;
        uStack_a8 = uVar5;
        uStack_a4 = uVar6;
        uStack_a0 = uVar7;
        uStack_9c = uVar8;
        FUN_180627ae0(auStack_88,&puStack_f0);
        uStack_68 = uStack_d0;
        uStack_64 = uStack_cc;
        uStack_60 = uStack_c8;
        uStack_5c = uStack_c4;
        plStack_58 = plStack_c0;
        if (plStack_c0 != (longlong *)0x0) {
          (**(code **)(*plStack_c0 + 0x28))();
        }
        lVar9 = FUN_180299eb0(uVar4,0,&lStack_b0,&uStackX_8);
        bVar13 = bVar13 & lVar9 != 0;
        if (plStack_c0 != (longlong *)0x0) {
          (**(code **)(*plStack_c0 + 0x38))();
        }
        ppuStackX_20 = &puStack_f0;
        puStack_f0 = &unknown_var_3456_ptr;
        if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        uStack_d8 = uStack_d8 & 0xffffffff00000000;
        lStack_e8 = 0;
        puStack_f0 = &unknown_var_720_ptr;
      }
      uVar12 = (int)uVar10 + 1;
      uVar11 = uVar11 + 0x18;
      lVar9 = *param_2;
      uVar10 = (ulonglong)uVar12;
    } while ((ulonglong)(longlong)(int)uVar12 < (ulonglong)((param_2[1] - lVar9) / 0x18));
  }
  if ((longlong *)*param_3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_3 + 0x38))();
  }
  return (ulonglong)bVar13;
}








