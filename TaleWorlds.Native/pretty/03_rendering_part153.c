#include "TaleWorlds.Native.Split.h"

// 03_rendering_part153.c - 16 个函数

// 函数: void FUN_180360210(longlong param_1,longlong param_2,uint64_t param_3,longlong *param_4)
void FUN_180360210(longlong param_1,longlong param_2,uint64_t param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  uint64_t *puVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  
  lVar1 = *(longlong *)param_4[1];
  lVar2 = *param_4;
  uVar5 = *(int32_t *)(lVar1 + 0x2e8);
  uVar6 = *(int32_t *)(lVar1 + 0x2ec);
  uVar7 = *(int32_t *)(lVar1 + 0x2f0);
  uVar8 = *(int32_t *)(lVar1 + 0x2f4);
  uVar9 = *(int32_t *)(lVar1 + 0x2f8);
  uVar10 = *(int32_t *)(lVar1 + 0x2fc);
  uVar11 = *(int32_t *)(lVar1 + 0x300);
  uVar12 = *(int32_t *)(lVar1 + 0x304);
  uVar13 = *(int32_t *)(lVar1 + 0x308);
  uVar14 = *(int32_t *)(lVar1 + 0x30c);
  uVar15 = *(int32_t *)(lVar1 + 0x310);
  uVar16 = *(uint64_t *)(lVar1 + 0x314);
  uVar17 = *(uint64_t *)(lVar1 + 0x31c);
  uVar18 = *(uint64_t *)(lVar1 + 0x324);
  uVar19 = *(uint64_t *)(lVar1 + 0x32c);
  uVar20 = *(uint64_t *)(lVar1 + 0x334);
  *(int32_t *)(lVar2 + 0x14) = *(int32_t *)(lVar1 + 0x2e4);
  *(int32_t *)(lVar2 + 0x18) = uVar5;
  *(int32_t *)(lVar2 + 0x1c) = uVar6;
  *(int32_t *)(lVar2 + 0x20) = uVar7;
  *(int32_t *)(lVar2 + 0x24) = uVar8;
  *(int32_t *)(lVar2 + 0x28) = uVar9;
  *(int32_t *)(lVar2 + 0x2c) = uVar10;
  *(int32_t *)(lVar2 + 0x30) = uVar11;
  *(int32_t *)(lVar2 + 0x34) = uVar12;
  *(int32_t *)(lVar2 + 0x38) = uVar13;
  *(int32_t *)(lVar2 + 0x3c) = uVar14;
  *(int32_t *)(lVar2 + 0x40) = uVar15;
  *(uint64_t *)(lVar2 + 0x44) = uVar16;
  *(uint64_t *)(lVar2 + 0x4c) = uVar17;
  *(uint64_t *)(lVar2 + 0x54) = uVar18;
  *(uint64_t *)(lVar2 + 0x5c) = uVar19;
  *(uint64_t *)(lVar2 + 100) = uVar20;
  plVar3 = (longlong *)*param_4;
  lVar2 = *(longlong *)(param_1 + 8);
  if ((((char)plVar3[2] == '\0') && (*(char *)((longlong)plVar3 + 0x11) == '\0')) && (*plVar3 != 0))
  {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(int16_t *)(plVar3 + 2) = 1;
  *plVar3 = lVar2;
  plVar3[1] = param_2;
  puVar4 = (uint64_t *)*param_4;
  if ((*(char *)((longlong)puVar4 + 0x66) == '\0') && (*(char *)(puVar4 + 2) != '\0')) {
    uVar20 = FUN_18062b420(_DAT_180c8ed18,puVar4[1],CONCAT71((int7)((ulonglong)lVar1 >> 8),3));
                    // WARNING: Subroutine does not return
    memcpy(uVar20,*puVar4,puVar4[1]);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803603d0(uint64_t *param_1)
void FUN_1803603d0(uint64_t *param_1)

{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  void *puStack_1c8;
  uint64_t *puStack_1c0;
  int32_t uStack_1b8;
  uint64_t uStack_1b0;
  uint64_t uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puVar3 = param_1;
  FUN_1803456e0();
  *puVar3 = &unknown_var_6104_ptr;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  *(int32_t *)(puVar3 + 0x13) = 3;
  puVar3[0x14] = 0;
  puVar3[0x15] = 0;
  puVar3[0x16] = 0;
  *(int32_t *)(puVar3 + 0x17) = 3;
  puVar3[0x18] = &unknown_var_720_ptr;
  puVar3[0x19] = 0;
  *(int32_t *)(puVar3 + 0x1a) = 0;
  puVar3[0x18] = &unknown_var_3456_ptr;
  puVar3[0x1b] = 0;
  puVar3[0x19] = 0;
  *(int32_t *)(puVar3 + 0x1a) = 0;
  param_1[0x1d] = &unknown_var_720_ptr;
  param_1[0x1e] = 0;
  *(int32_t *)(param_1 + 0x1f) = 0;
  param_1[0x1d] = &unknown_var_3456_ptr;
  param_1[0x20] = 0;
  param_1[0x1e] = 0;
  *(int32_t *)(param_1 + 0x1f) = 0;
  puVar3 = param_1 + 0x22;
  *puVar3 = &unknown_var_720_ptr;
  param_1[0x23] = 0;
  *(int32_t *)(param_1 + 0x24) = 0;
  *puVar3 = &unknown_var_3456_ptr;
  param_1[0x25] = 0;
  param_1[0x23] = 0;
  *(int32_t *)(param_1 + 0x24) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(int32_t *)(param_1 + 0x2f) = 3;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(int32_t *)(param_1 + 0x36) = 3;
  *(int32_t *)(param_1 + 0x27) = 0;
  *(int32_t *)(param_1 + 0x37) = 1;
  puStack_1c8 = &unknown_var_3456_ptr;
  uStack_1b0 = 0;
  puStack_1c0 = (uint64_t *)0x0;
  uStack_1b8 = 0;
  puVar2 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar2 = 0;
  puStack_1c0 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uVar1);
  *puVar2 = 0x6d614e2068746150;
  *(int16_t *)(puVar2 + 1) = 0x65;
  uStack_1b8 = 9;
  FUN_1803460a0(param_1,&puStack_1c8,puVar3,0);
  puStack_1c8 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}



uint64_t FUN_180360c70(uint64_t param_1,ulonglong param_2)

{
  FUN_180360cb0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x1c0);
  }
  return param_1;
}





// 函数: void FUN_180360cb0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180360cb0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  if (param_1[0x33] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_180361700();
  param_1[0x22] = &unknown_var_3456_ptr;
  if (param_1[0x23] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x23] = 0;
  *(int32_t *)(param_1 + 0x25) = 0;
  param_1[0x22] = &unknown_var_720_ptr;
  param_1[0x1d] = &unknown_var_3456_ptr;
  if (param_1[0x1e] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x1e] = 0;
  *(int32_t *)(param_1 + 0x20) = 0;
  param_1[0x1d] = &unknown_var_720_ptr;
  param_1[0x18] = &unknown_var_3456_ptr;
  if (param_1[0x19] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x19] = 0;
  *(int32_t *)(param_1 + 0x1b) = 0;
  param_1[0x18] = &unknown_var_720_ptr;
  if (param_1[0x14] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x10] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if ((longlong *)param_1[0xf] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xf] + 0x38))();
  }
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x38))();
  }
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_4544_ptr;
  FUN_180080df0();
  *param_1 = &unknown_var_4912_ptr;
  FUN_1802f5b10(param_1 + 4,param_1[6],param_3,param_4,uVar1);
  *param_1 = &unknown_var_3696_ptr;
  *param_1 = &unknown_var_3552_ptr;
  return;
}





// 函数: void FUN_180360e00(longlong *param_1)
void FUN_180360e00(longlong *param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  
  puVar1 = (uint64_t *)param_1[1];
  puVar2 = (uint64_t *)*param_1;
  while( true ) {
    if (puVar2 == puVar1) {
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      return;
    }
    puVar2[5] = &unknown_var_3456_ptr;
    if (puVar2[6] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar2[6] = 0;
    *(int32_t *)(puVar2 + 8) = 0;
    puVar2[5] = &unknown_var_720_ptr;
    *puVar2 = &unknown_var_3456_ptr;
    if (puVar2[1] != 0) break;
    puVar2[1] = 0;
    *(int32_t *)(puVar2 + 3) = 0;
    *puVar2 = &unknown_var_720_ptr;
    puVar2 = puVar2 + 10;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180360e20(uint64_t param_1)
void FUN_180360e20(uint64_t param_1)

{
  int8_t auStack_888 [32];
  int32_t uStack_868;
  void **appuStack_860 [2];
  uint64_t uStack_850;
  void *apuStack_848 [19];
  int32_t uStack_7b0;
  void *puStack_7a8;
  int8_t *puStack_7a0;
  int32_t uStack_798;
  int8_t auStack_790 [136];
  void *puStack_708;
  int8_t *puStack_700;
  int32_t uStack_6f8;
  int8_t auStack_6f0 [136];
  void *puStack_668;
  int8_t *puStack_660;
  int32_t uStack_658;
  int8_t auStack_650 [136];
  void *puStack_5c8;
  int8_t *puStack_5c0;
  int32_t uStack_5b8;
  int8_t auStack_5b0 [136];
  void *puStack_528;
  int8_t *puStack_520;
  int32_t uStack_518;
  int8_t auStack_510 [136];
  void *puStack_488;
  int8_t *puStack_480;
  int32_t uStack_478;
  int8_t auStack_470 [136];
  void *puStack_3e8;
  int8_t *puStack_3e0;
  int32_t uStack_3d8;
  int8_t auStack_3d0 [136];
  void *puStack_348;
  int8_t *puStack_340;
  int32_t uStack_338;
  int8_t auStack_330 [136];
  void *puStack_2a8;
  int8_t *puStack_2a0;
  int32_t uStack_298;
  int8_t auStack_290 [136];
  void *puStack_208;
  int8_t *puStack_200;
  int32_t uStack_1f8;
  int8_t auStack_1f0 [136];
  void *puStack_168;
  int8_t *puStack_160;
  int32_t uStack_158;
  int8_t auStack_150 [136];
  void *puStack_c8;
  int8_t *puStack_c0;
  int32_t uStack_b8;
  int8_t auStack_b0 [136];
  ulonglong uStack_28;
  
  uStack_850 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_888;
  uStack_868 = 0;
  puStack_7a8 = &unknown_var_3432_ptr;
  puStack_7a0 = auStack_790;
  auStack_790[0] = 0;
  uStack_798 = 9;
  strcpy_s(auStack_790,0x80,&system_data_d578);
  FUN_180049b30(apuStack_848,&puStack_7a8);
  uStack_7b0 = 0;
  uStack_868 = 1;
  FUN_1803617c0(param_1,appuStack_860,apuStack_848);
  uStack_868 = 0;
  appuStack_860[0] = apuStack_848;
  apuStack_848[0] = &unknown_var_720_ptr;
  puStack_7a8 = &unknown_var_720_ptr;
  puStack_708 = &unknown_var_3432_ptr;
  puStack_700 = auStack_6f0;
  auStack_6f0[0] = 0;
  uStack_6f8 = 0xe;
  strcpy_s(auStack_6f0,0x80,&system_data_ef48);
  FUN_180049b30(apuStack_848,&puStack_708);
  uStack_7b0 = 10;
  uStack_868 = 2;
  FUN_1803617c0(param_1,appuStack_860,apuStack_848);
  uStack_868 = 0;
  appuStack_860[0] = apuStack_848;
  apuStack_848[0] = &unknown_var_720_ptr;
  puStack_708 = &unknown_var_720_ptr;
  puStack_668 = &unknown_var_3432_ptr;
  puStack_660 = auStack_650;
  auStack_650[0] = 0;
  uStack_658 = 5;
  strcpy_s(auStack_650,0x80,&system_data_9e30);
  FUN_180049b30(apuStack_848,&puStack_668);
  uStack_7b0 = 2;
  uStack_868 = 4;
  FUN_1803617c0(param_1,appuStack_860,apuStack_848);
  uStack_868 = 0;
  appuStack_860[0] = apuStack_848;
  apuStack_848[0] = &unknown_var_720_ptr;
  puStack_668 = &unknown_var_720_ptr;
  puStack_5c8 = &unknown_var_3432_ptr;
  puStack_5c0 = auStack_5b0;
  auStack_5b0[0] = 0;
  uStack_5b8 = 6;
  strcpy_s(auStack_5b0,0x80,&system_data_9e38);
  FUN_180049b30(apuStack_848,&puStack_5c8);
  uStack_7b0 = 2;
  uStack_868 = 8;
  FUN_1803617c0(param_1,appuStack_860,apuStack_848);
  uStack_868 = 0;
  appuStack_860[0] = apuStack_848;
  apuStack_848[0] = &unknown_var_720_ptr;
  puStack_5c8 = &unknown_var_720_ptr;
  puStack_528 = &unknown_var_3432_ptr;
  puStack_520 = auStack_510;
  auStack_510[0] = 0;
  uStack_518 = 3;
  strcpy_s(auStack_510,0x80,&system_data_f8f0);
  FUN_180049b30(apuStack_848,&puStack_528);
  uStack_7b0 = 2;
  uStack_868 = 0x10;
  FUN_1803617c0(param_1,appuStack_860,apuStack_848);
  uStack_868 = 0;
  appuStack_860[0] = apuStack_848;
  apuStack_848[0] = &unknown_var_720_ptr;
  puStack_528 = &unknown_var_720_ptr;
  puStack_488 = &unknown_var_3432_ptr;
  puStack_480 = auStack_470;
  auStack_470[0] = 0;
  uStack_478 = 0xd;
  strcpy_s(auStack_470,0x80,&system_data_f930);
  FUN_180049b30(apuStack_848,&puStack_488);
  uStack_7b0 = 2;
  uStack_868 = 0x20;
  FUN_1803617c0(param_1,appuStack_860,apuStack_848);
  uStack_868 = 0;
  appuStack_860[0] = apuStack_848;
  apuStack_848[0] = &unknown_var_720_ptr;
  puStack_488 = &unknown_var_720_ptr;
  puStack_3e8 = &unknown_var_3432_ptr;
  puStack_3e0 = auStack_3d0;
  auStack_3d0[0] = 0;
  uStack_3d8 = 0xb;
  strcpy_s(auStack_3d0,0x80,&system_data_f920);
  FUN_180049b30(apuStack_848,&puStack_3e8);
  uStack_7b0 = 2;
  uStack_868 = 0x40;
  FUN_1803617c0(param_1,appuStack_860,apuStack_848);
  uStack_868 = 0;
  appuStack_860[0] = apuStack_848;
  apuStack_848[0] = &unknown_var_720_ptr;
  puStack_3e8 = &unknown_var_720_ptr;
  puStack_348 = &unknown_var_3432_ptr;
  puStack_340 = auStack_330;
  auStack_330[0] = 0;
  uStack_338 = 0xc;
  strcpy_s(auStack_330,0x80,&system_data_f910);
  FUN_180049b30(apuStack_848,&puStack_348);
  uStack_7b0 = 2;
  uStack_868 = 0x80;
  FUN_1803617c0(param_1,appuStack_860,apuStack_848);
  uStack_868 = 0;
  appuStack_860[0] = apuStack_848;
  apuStack_848[0] = &unknown_var_720_ptr;
  puStack_348 = &unknown_var_720_ptr;
  puStack_2a8 = &unknown_var_3432_ptr;
  puStack_2a0 = auStack_290;
  auStack_290[0] = 0;
  uStack_298 = 0x14;
  strcpy_s(auStack_290,0x80,&system_data_f8f8);
  FUN_180049b30(apuStack_848,&puStack_2a8);
  uStack_7b0 = 0;
  uStack_868 = 0x100;
  FUN_1803617c0(param_1,appuStack_860,apuStack_848);
  uStack_868 = 0;
  appuStack_860[0] = apuStack_848;
  apuStack_848[0] = &unknown_var_720_ptr;
  puStack_2a8 = &unknown_var_720_ptr;
  puStack_208 = &unknown_var_3432_ptr;
  puStack_200 = auStack_1f0;
  auStack_1f0[0] = 0;
  uStack_1f8 = 0xf;
  strcpy_s(auStack_1f0,0x80,&system_data_f960);
  FUN_180049b30(apuStack_848,&puStack_208);
  uStack_7b0 = 0;
  uStack_868 = 0x200;
  FUN_1803617c0(param_1,appuStack_860,apuStack_848);
  uStack_868 = 0;
  appuStack_860[0] = apuStack_848;
  apuStack_848[0] = &unknown_var_720_ptr;
  puStack_208 = &unknown_var_720_ptr;
  puStack_168 = &unknown_var_3432_ptr;
  puStack_160 = auStack_150;
  auStack_150[0] = 0;
  uStack_158 = 0xf;
  strcpy_s(auStack_150,0x80,&system_data_f950);
  FUN_180049b30(apuStack_848,&puStack_168);
  uStack_7b0 = 4;
  uStack_868 = 0x400;
  FUN_1803617c0(param_1,appuStack_860,apuStack_848);
  uStack_868 = 0;
  appuStack_860[0] = apuStack_848;
  apuStack_848[0] = &unknown_var_720_ptr;
  puStack_168 = &unknown_var_720_ptr;
  puStack_c8 = &unknown_var_3432_ptr;
  puStack_c0 = auStack_b0;
  auStack_b0[0] = 0;
  uStack_b8 = 0xf;
  strcpy_s(auStack_b0,0x80,&system_data_f940);
  FUN_180049b30(apuStack_848,&puStack_c8);
  uStack_7b0 = 2;
  uStack_868 = 0x800;
  FUN_1803617c0(param_1,appuStack_860,apuStack_848);
  uStack_868 = 0;
  appuStack_860[0] = apuStack_848;
  apuStack_848[0] = &unknown_var_720_ptr;
  puStack_c8 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_888);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180361690(uint64_t param_1,uint64_t param_2)
void FUN_180361690(uint64_t param_1,uint64_t param_2)

{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  void *puStack_1c8;
  uint64_t *puStack_1c0;
  int32_t uStack_1b8;
  uint64_t uStack_1b0;
  uint64_t uStack_48;
  
  puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x1c0,8,3);
  uStack_48 = 0xfffffffffffffffe;
  puVar4 = puVar3;
  FUN_1803456e0(puVar3,param_2,param_1);
  *puVar4 = &unknown_var_6104_ptr;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  *(int32_t *)(puVar4 + 0x13) = 3;
  puVar4[0x14] = 0;
  puVar4[0x15] = 0;
  puVar4[0x16] = 0;
  *(int32_t *)(puVar4 + 0x17) = 3;
  puVar4[0x18] = &unknown_var_720_ptr;
  puVar4[0x19] = 0;
  *(int32_t *)(puVar4 + 0x1a) = 0;
  puVar4[0x18] = &unknown_var_3456_ptr;
  puVar4[0x1b] = 0;
  puVar4[0x19] = 0;
  *(int32_t *)(puVar4 + 0x1a) = 0;
  puVar3[0x1d] = &unknown_var_720_ptr;
  puVar3[0x1e] = 0;
  *(int32_t *)(puVar3 + 0x1f) = 0;
  puVar3[0x1d] = &unknown_var_3456_ptr;
  puVar3[0x20] = 0;
  puVar3[0x1e] = 0;
  *(int32_t *)(puVar3 + 0x1f) = 0;
  puVar4 = puVar3 + 0x22;
  *puVar4 = &unknown_var_720_ptr;
  puVar3[0x23] = 0;
  *(int32_t *)(puVar3 + 0x24) = 0;
  *puVar4 = &unknown_var_3456_ptr;
  puVar3[0x25] = 0;
  puVar3[0x23] = 0;
  *(int32_t *)(puVar3 + 0x24) = 0;
  puVar3[0x2c] = 0;
  puVar3[0x2d] = 0;
  puVar3[0x2e] = 0;
  *(int32_t *)(puVar3 + 0x2f) = 3;
  puVar3[0x33] = 0;
  puVar3[0x34] = 0;
  puVar3[0x35] = 0;
  *(int32_t *)(puVar3 + 0x36) = 3;
  *(int32_t *)(puVar3 + 0x27) = 0;
  *(int32_t *)(puVar3 + 0x37) = 1;
  puStack_1c8 = &unknown_var_3456_ptr;
  uStack_1b0 = 0;
  puStack_1c0 = (uint64_t *)0x0;
  uStack_1b8 = 0;
  puVar2 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar2 = 0;
  puStack_1c0 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uVar1);
  *puVar2 = 0x6d614e2068746150;
  *(int16_t *)(puVar2 + 1) = 0x65;
  uStack_1b8 = 9;
  FUN_1803460a0(puVar3,&puStack_1c8,puVar4,0);
  puStack_1c8 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}





// 函数: void FUN_1803616e0(uint64_t *param_1)
void FUN_1803616e0(uint64_t *param_1)

{
  if ((void *)*param_1 != &unknown_var_6104_ptr) {
    (**(code **)((void *)*param_1 + 0x70))();
  }
  return;
}





// 函数: void FUN_180361700(longlong *param_1)
void FUN_180361700(longlong *param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  
  puVar1 = (uint64_t *)param_1[1];
  puVar2 = (uint64_t *)*param_1;
  while( true ) {
    if (puVar2 == puVar1) {
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      return;
    }
    puVar2[5] = &unknown_var_3456_ptr;
    if (puVar2[6] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar2[6] = 0;
    *(int32_t *)(puVar2 + 8) = 0;
    puVar2[5] = &unknown_var_720_ptr;
    *puVar2 = &unknown_var_3456_ptr;
    if (puVar2[1] != 0) break;
    puVar2[1] = 0;
    *(int32_t *)(puVar2 + 3) = 0;
    *puVar2 = &unknown_var_720_ptr;
    puVar2 = puVar2 + 10;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1803617c0(longlong param_1,longlong *param_2,longlong param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong lVar7;
  uint64_t uVar8;
  uint64_t *puStackX_8;
  longlong lStackX_10;
  
  lVar4 = FUN_18062b420(_DAT_180c8ed18,0xc0,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  puVar1 = (uint64_t *)(lVar4 + 0x20);
  puStackX_8 = puVar1;
  FUN_180049b30(puVar1,param_3);
  *(int32_t *)(lVar4 + 0xb8) = *(int32_t *)(param_3 + 0x98);
  lStackX_10 = lVar4;
  lVar5 = FUN_1800590b0(param_1,&puStackX_8,puVar1);
  if ((char)puStackX_8 == '\0') {
    *puVar1 = &unknown_var_720_ptr;
    if (lVar4 != 0) {
      puStackX_8 = puVar1;
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar4);
    }
    *param_2 = lVar5;
    *(int8_t *)(param_2 + 1) = 0;
    return param_2;
  }
  if (lVar5 != param_1) {
    if (*(int *)(lVar5 + 0x30) == 0) {
LAB_180361877:
      uVar8 = 1;
      goto LAB_180361882;
    }
    if (*(int *)(lVar4 + 0x30) != 0) {
      pbVar6 = *(byte **)(lVar5 + 0x28);
      lVar7 = *(longlong *)(lVar4 + 0x28) - (longlong)pbVar6;
      do {
        bVar2 = *pbVar6;
        uVar3 = (uint)pbVar6[lVar7];
        if (bVar2 != uVar3) break;
        pbVar6 = pbVar6 + 1;
      } while (uVar3 != 0);
      if ((int)(bVar2 - uVar3) < 1) goto LAB_180361877;
    }
  }
  uVar8 = 0;
LAB_180361882:
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,lVar5,param_1,uVar8);
}



longlong FUN_1803618e0(longlong param_1,ulonglong param_2)

{
  *(uint64_t *)(param_1 + 0x70) = &unknown_var_3456_ptr;
  if (*(longlong *)(param_1 + 0x78) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x78) = 0;
  *(int32_t *)(param_1 + 0x88) = 0;
  *(uint64_t *)(param_1 + 0x70) = &unknown_var_720_ptr;
  FUN_1803457d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x90);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180361970(uint64_t param_1,uint64_t param_2)
void FUN_180361970(uint64_t param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  int32_t *puVar4;
  uint64_t *puVar5;
  void *puStack_50;
  int32_t *puStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  
  puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x90,8,3,0xfffffffffffffffe);
  puVar5 = puVar3;
  FUN_1803456e0(puVar3,param_2,param_1);
  *puVar5 = &unknown_var_6472_ptr;
  puVar1 = puVar5 + 0xe;
  *puVar1 = &unknown_var_720_ptr;
  puVar5[0xf] = 0;
  *(int32_t *)(puVar5 + 0x10) = 0;
  *puVar1 = &unknown_var_3456_ptr;
  puVar5[0x11] = 0;
  puVar5[0xf] = 0;
  *(int32_t *)(puVar5 + 0x10) = 0;
  puStack_50 = &unknown_var_3456_ptr;
  uStack_38 = 0;
  puStack_48 = (int32_t *)0x0;
  uStack_40 = 0;
  puVar4 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  puStack_48 = puVar4;
  uVar2 = FUN_18064e990(puVar4);
  uStack_38 = CONCAT44(uStack_38._4_4_,uVar2);
  *puVar4 = 0x74786554;
  *(int8_t *)(puVar4 + 1) = 0;
  uStack_40 = 4;
  FUN_1803460a0(puVar3,&puStack_50,puVar1,0);
  puStack_50 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180361ac0(longlong param_1)
void FUN_180361ac0(longlong param_1)

{
  if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x2e8) & 0xb) == 0xb) {
    FUN_180632d00(_DAT_180c8ed68,*(longlong *)(param_1 + 0x18) + 0xa0,param_1 + 0x70,0xff00ffff,0,0)
    ;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180361b10(uint64_t param_1)
void FUN_180361b10(uint64_t param_1)

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
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_118;
  uStack_f8 = 0;
  puStack_d8 = &unknown_var_3480_ptr;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = 4;
  strcpy_s(auStack_c0,0x40,&system_data_64c8);
  FUN_1800b8300(apuStack_78,&puStack_d8);
  uStack_20 = 0;
  uStack_f8 = 1;
  FUN_180180730(param_1,appuStack_e8,apuStack_78);
  uStack_f8 = 0;
  appuStack_e8[0] = apuStack_78;
  apuStack_78[0] = &unknown_var_720_ptr;
  puStack_d8 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180361c20(uint64_t *param_1)
void FUN_180361c20(uint64_t *param_1)

{
  uint64_t *puVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  void *puStack_70;
  uint64_t *puStack_68;
  int32_t uStack_60;
  uint64_t uStack_58;
  
  uVar4 = 0xfffffffffffffffe;
  puVar3 = param_1;
  FUN_1803456e0();
  *puVar3 = &unknown_var_6864_ptr;
  puVar1 = puVar3 + 0xe;
  *puVar1 = &unknown_var_720_ptr;
  puVar3[0xf] = 0;
  *(int32_t *)(puVar3 + 0x10) = 0;
  *puVar1 = &unknown_var_3456_ptr;
  puVar3[0x11] = 0;
  puVar3[0xf] = 0;
  *(int32_t *)(puVar3 + 0x10) = 0;
  puStack_70 = &unknown_var_3456_ptr;
  uStack_58 = 0;
  puStack_68 = (uint64_t *)0x0;
  uStack_60 = 0;
  puVar3 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  puStack_68 = puVar3;
  uVar2 = FUN_18064e990(puVar3);
  uStack_58 = CONCAT44(uStack_58._4_4_,uVar2);
  *puVar3 = 0x6f697463656c6553;
  *(int32_t *)(puVar3 + 1) = 0x6553206e;
  *(int16_t *)((longlong)puVar3 + 0xc) = 0x74;
  uStack_60 = 0xd;
  FUN_1803460a0(param_1,&puStack_70,puVar1,0,uVar4);
  puStack_70 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



longlong FUN_180361dd0(longlong param_1,ulonglong param_2)

{
  *(uint64_t *)(param_1 + 0x70) = &unknown_var_3456_ptr;
  if (*(longlong *)(param_1 + 0x78) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x78) = 0;
  *(int32_t *)(param_1 + 0x88) = 0;
  *(uint64_t *)(param_1 + 0x70) = &unknown_var_720_ptr;
  FUN_1803457d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x98);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180361e60(uint64_t param_1,uint64_t param_2)
void FUN_180361e60(uint64_t param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  void *puStack_70;
  uint64_t *puStack_68;
  int32_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_30;
  
  uStack_30 = 0x180361e8a;
  puVar4 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x98,8,3);
  uVar5 = 0xfffffffffffffffe;
  puVar3 = puVar4;
  FUN_1803456e0(puVar4,param_2,param_1);
  *puVar3 = &unknown_var_6864_ptr;
  puVar1 = puVar3 + 0xe;
  *puVar1 = &unknown_var_720_ptr;
  puVar3[0xf] = 0;
  *(int32_t *)(puVar3 + 0x10) = 0;
  *puVar1 = &unknown_var_3456_ptr;
  puVar3[0x11] = 0;
  puVar3[0xf] = 0;
  *(int32_t *)(puVar3 + 0x10) = 0;
  puStack_70 = &unknown_var_3456_ptr;
  uStack_58 = 0;
  puStack_68 = (uint64_t *)0x0;
  uStack_60 = 0;
  puVar3 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  puStack_68 = puVar3;
  uVar2 = FUN_18064e990(puVar3);
  uStack_58 = CONCAT44(uStack_58._4_4_,uVar2);
  *puVar3 = 0x6f697463656c6553;
  *(int32_t *)(puVar3 + 1) = 0x6553206e;
  *(int16_t *)((longlong)puVar3 + 0xc) = 0x74;
  uStack_60 = 0xd;
  FUN_1803460a0(puVar4,&puStack_70,puVar1,0,uVar5);
  puStack_70 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180361eb0(uint64_t param_1)
void FUN_180361eb0(uint64_t param_1)

{
  int8_t auStack_188 [32];
  int32_t uStack_168;
  void **appuStack_160 [2];
  uint64_t uStack_150;
  void *puStack_148;
  int8_t *puStack_140;
  int32_t uStack_138;
  int8_t auStack_130 [72];
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [72];
  void *apuStack_88 [11];
  int32_t uStack_30;
  ulonglong uStack_28;
  
  uStack_150 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  uStack_168 = 0;
  puStack_148 = &unknown_var_3480_ptr;
  puStack_140 = auStack_130;
  auStack_130[0] = 0;
  uStack_138 = 0xd;
  strcpy_s(auStack_130,0x40,&system_data_fc58);
  FUN_1800b8300(apuStack_88,&puStack_148);
  uStack_30 = 0;
  uStack_168 = 1;
  FUN_180180730(param_1,appuStack_160,apuStack_88);
  uStack_168 = 0;
  apuStack_88[0] = &unknown_var_720_ptr;
  puStack_148 = &unknown_var_720_ptr;
  puStack_e8 = &unknown_var_3480_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 5;
  appuStack_160[0] = apuStack_88;
  strcpy_s(auStack_d0,0x40,&system_data_fc50);
  FUN_1800b8300(apuStack_88,&puStack_e8);
  uStack_30 = 0xb;
  uStack_168 = 2;
  FUN_180180730(param_1,appuStack_160,apuStack_88);
  uStack_168 = 0;
  apuStack_88[0] = &unknown_var_720_ptr;
  puStack_e8 = &unknown_var_720_ptr;
  appuStack_160[0] = apuStack_88;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_188);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180362040(uint64_t *param_1)
void FUN_180362040(uint64_t *param_1)

{
  int32_t uVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  void *puStack_90;
  int32_t *puStack_88;
  int32_t uStack_80;
  uint64_t uStack_78;
  
  uVar4 = 0xfffffffffffffffe;
  puVar3 = param_1;
  FUN_1803456e0();
  *puVar3 = &unknown_var_7272_ptr;
  *(int16_t *)(puVar3 + 0xe) = 0x101;
  puStack_90 = &unknown_var_3456_ptr;
  uStack_78 = 0;
  puStack_88 = (int32_t *)0x0;
  uStack_80 = 0;
  puVar2 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x17,0x13);
  *(int8_t *)puVar2 = 0;
  puStack_88 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_78 = CONCAT44(uStack_78._4_4_,uVar1);
  *puVar2 = 0x70616e53;
  puVar2[1] = 0x72655420;
  puVar2[2] = 0x6e696172;
  puVar2[3] = 0x206f7420;
  puVar2[4] = 0x69746e45;
  *(int16_t *)(puVar2 + 5) = 0x7974;
  *(int8_t *)((longlong)puVar2 + 0x16) = 0;
  uStack_80 = 0x16;
  FUN_1803460a0(param_1,&puStack_90,0,0xb,uVar4);
  puStack_90 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180362280(uint64_t param_1,uint64_t param_2)
void FUN_180362280(uint64_t param_1,uint64_t param_2)

{
  int32_t uVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  void *puStack_90;
  int32_t *puStack_88;
  int32_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_30;
  
  uStack_30 = 0x1803622a8;
  puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x78,8,3);
  uVar5 = 0xfffffffffffffffe;
  puVar4 = puVar3;
  FUN_1803456e0(puVar3,param_2,param_1);
  *puVar4 = &unknown_var_7272_ptr;
  *(int16_t *)(puVar4 + 0xe) = 0x101;
  puStack_90 = &unknown_var_3456_ptr;
  uStack_78 = 0;
  puStack_88 = (int32_t *)0x0;
  uStack_80 = 0;
  puVar2 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x17,0x13);
  *(int8_t *)puVar2 = 0;
  puStack_88 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_78 = CONCAT44(uStack_78._4_4_,uVar1);
  *puVar2 = 0x70616e53;
  puVar2[1] = 0x72655420;
  puVar2[2] = 0x6e696172;
  puVar2[3] = 0x206f7420;
  puVar2[4] = 0x69746e45;
  *(int16_t *)(puVar2 + 5) = 0x7974;
  *(int8_t *)((longlong)puVar2 + 0x16) = 0;
  uStack_80 = 0x16;
  FUN_1803460a0(puVar3,&puStack_90,0,0xb,uVar5);
  puStack_90 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



