#include "TaleWorlds.Native.Split.h"

// 03_rendering_part143.c - 6 个函数

// 函数: void FUN_18035548e(void)
void FUN_18035548e(void)

{
  longlong lVar1;
  ulonglong in_RAX;
  uint64_t unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong *unaff_R14;
  longlong unaff_R15;
  longlong in_stack_00000088;
  
  if ((1 < in_RAX) && (*(longlong *)(unaff_RDI + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(unaff_RDI + 0x10) = unaff_RBP;
  *(longlong *)(unaff_RDI + 8) = unaff_RSI;
  *(uint64_t *)(in_stack_00000088 + 0x28) = *(uint64_t *)(unaff_RSI + unaff_R15 * 8);
  *(longlong *)(*(longlong *)(unaff_RDI + 8) + unaff_R15 * 8) = in_stack_00000088;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  *unaff_R14 = in_stack_00000088;
  unaff_R14[1] = lVar1 + unaff_R15 * 8;
  *(int8_t *)(unaff_R14 + 2) = 1;
  return;
}





// 函数: void FUN_1803554b1(void)
void FUN_1803554b1(void)

{
  longlong lVar1;
  longlong unaff_RDI;
  longlong *unaff_R14;
  longlong in_stack_00000080;
  longlong in_stack_00000088;
  
  *(uint64_t *)(in_stack_00000088 + 0x28) =
       *(uint64_t *)(*(longlong *)(unaff_RDI + 8) + in_stack_00000080 * 8);
  *(longlong *)(*(longlong *)(unaff_RDI + 8) + in_stack_00000080 * 8) = in_stack_00000088;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  *unaff_R14 = in_stack_00000088;
  unaff_R14[1] = lVar1 + in_stack_00000080 * 8;
  *(int8_t *)(unaff_R14 + 2) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180355500(uint64_t *param_1)
void FUN_180355500(uint64_t *param_1)

{
  longlong *plVar1;
  int32_t uVar2;
  int32_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  void *puStack_2e8;
  uint64_t *puStack_2e0;
  int32_t uStack_2d8;
  uint64_t uStack_2d0;
  uint64_t *puStack_48;
  uint64_t uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  puVar5 = param_1;
  FUN_1803456e0();
  *puVar5 = &UNK_180a1ede0;
  puVar4 = puVar5 + 0xe;
  *puVar4 = &UNK_18098bcb0;
  puVar5[0xf] = 0;
  *(int32_t *)(puVar5 + 0x10) = 0;
  *puVar4 = &UNK_180a3c3e0;
  puVar5[0x11] = 0;
  puVar5[0xf] = 0;
  *(int32_t *)(puVar5 + 0x10) = 0;
  puVar5[0x22] = 0;
  puVar5[0x23] = 0;
  puStack_2e8 = &UNK_180a3c3e0;
  uStack_2d0 = 0;
  puStack_2e0 = (uint64_t *)0x0;
  uStack_2d8 = 0;
  puStack_48 = puVar4;
  puVar3 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  puStack_2e0 = (uint64_t *)puVar3;
  uVar2 = FUN_18064e990(puVar3);
  *puVar3 = 0x74736554;
  *(int8_t *)(puVar3 + 1) = 0;
  uStack_2d8 = 4;
  uStack_2d0._0_4_ = uVar2;
  FUN_18005d190(puVar4);
  puStack_2e8 = &UNK_180a3c3e0;
  if (puStack_2e0 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_2e0 = (uint64_t *)0x0;
  uStack_2d0 = (ulonglong)uStack_2d0._4_4_ << 0x20;
  puStack_2e8 = &UNK_18098bcb0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x403e000000000000;
  param_1[0x14] = 0x4008000000000000;
  param_1[0x17] = 0;
  plVar1 = (longlong *)param_1[0x22];
  param_1[0x22] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  param_1[0x15] = 0x3ff0000000000000;
  param_1[0x16] = 0x3ff0000000000000;
  *(int32_t *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x18] = 0x3ff0000000000000;
  puStack_2e8 = &UNK_180a3c3e0;
  uStack_2d0 = 0;
  puStack_2e0 = (uint64_t *)0x0;
  uStack_2d8 = 0;
  puVar4 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  puStack_2e0 = puVar4;
  uVar2 = FUN_18064e990(puVar4);
  uStack_2d0 = CONCAT44(uStack_2d0._4_4_,uVar2);
  *puVar4 = 0x6d614e2068746150;
  *(int16_t *)(puVar4 + 1) = 0x65;
  uStack_2d8 = 9;
  FUN_1803460a0(param_1,&puStack_2e8,puStack_48,0);
  puStack_2e8 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar4);
}



uint64_t * FUN_180356600(uint64_t *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  *param_1 = &UNK_180a1ede0;
  plVar1 = (longlong *)param_1[0x23];
  param_1[0x23] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (longlong *)param_1[0x22];
  param_1[0x22] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  if ((longlong *)param_1[0x23] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x23] + 0x38))();
  }
  if ((longlong *)param_1[0x22] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x22] + 0x38))();
  }
  param_1[0xe] = &UNK_180a3c3e0;
  if (param_1[0xf] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0xf] = 0;
  *(int32_t *)(param_1 + 0x11) = 0;
  param_1[0xe] = &UNK_18098bcb0;
  FUN_1803457d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x148);
  }
  return param_1;
}





// 函数: void FUN_180356720(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180356720(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t *puVar3;
  longlong *plVar4;
  longlong *aplStackX_8 [4];
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  FUN_18035a770();
  puVar3 = (uint64_t *)
           FUN_180389090(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x2970,aplStackX_8,
                         param_1 + 0x70,param_4,uVar5);
  *(uint64_t *)(param_1 + 0x108) = *puVar3;
  if (aplStackX_8[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_8[0] + 0x38))();
  }
  plVar4 = (longlong *)
           FUN_180389090(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x2970,aplStackX_8,
                         param_1 + 0x70,param_4,0xfffffffffffffffe);
  lVar1 = *plVar4;
  if (aplStackX_8[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_8[0] + 0x38))();
  }
  lVar2 = *(longlong *)(param_1 + 0x108);
  if (lVar1 != lVar2) {
    *(int32_t *)(param_1 + 0x124) = 0xffffffff;
  }
  if ((lVar1 != 0) &&
     ((lVar1 != lVar2 || ((lVar2 != 0 && (*(int *)(param_1 + 0x124) < *(int *)(lVar2 + 0x70))))))) {
    *(longlong *)(param_1 + 0x108) = lVar1;
    if (*(char *)(param_1 + 0xcb) == '\0') {
      FUN_18035bbd0(param_1);
    }
    else {
      if (((*(longlong *)(param_1 + 0xd0) == 0) && (*(longlong *)(param_1 + 0xd8) == 0)) &&
         (*(longlong *)(param_1 + 0xe0) == 0)) {
        return;
      }
      FUN_18035b330(param_1);
    }
    *(int32_t *)(param_1 + 0x124) = *(int32_t *)(*(longlong *)(param_1 + 0x108) + 0x70);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180356780(longlong param_1)
void FUN_180356780(longlong param_1)

{
  uint64_t *puVar1;
  int8_t auStack_708 [32];
  longlong *plStack_6e8;
  uint64_t uStack_6e0;
  void *puStack_6d8;
  int8_t *puStack_6d0;
  int32_t uStack_6c8;
  int8_t auStack_6c0 [72];
  void *puStack_678;
  int8_t *puStack_670;
  int32_t uStack_668;
  int8_t auStack_660 [72];
  void *puStack_618;
  int8_t *puStack_610;
  int32_t uStack_608;
  int8_t auStack_600 [72];
  void *puStack_5b8;
  int8_t *puStack_5b0;
  int32_t uStack_5a8;
  int8_t auStack_5a0 [72];
  void *puStack_558;
  int8_t *puStack_550;
  int32_t uStack_548;
  int8_t auStack_540 [72];
  void *puStack_4f8;
  int8_t *puStack_4f0;
  int32_t uStack_4e8;
  int8_t auStack_4e0 [72];
  void *puStack_498;
  int8_t *puStack_490;
  int32_t uStack_488;
  int8_t auStack_480 [72];
  void *puStack_438;
  int8_t *puStack_430;
  int32_t uStack_428;
  int8_t auStack_420 [72];
  void *puStack_3d8;
  int8_t *puStack_3d0;
  int32_t uStack_3c8;
  int8_t auStack_3c0 [72];
  void *puStack_378;
  int8_t *puStack_370;
  int32_t uStack_368;
  int8_t auStack_360 [72];
  void *puStack_318;
  int8_t *puStack_310;
  int32_t uStack_308;
  int8_t auStack_300 [72];
  void *puStack_2b8;
  int8_t *puStack_2b0;
  int32_t uStack_2a8;
  int8_t auStack_2a0 [72];
  void *puStack_258;
  int8_t *puStack_250;
  int32_t uStack_248;
  int8_t auStack_240 [72];
  void *puStack_1f8;
  int8_t *puStack_1f0;
  int32_t uStack_1e8;
  int8_t auStack_1e0 [72];
  void *puStack_198;
  int8_t *puStack_190;
  int32_t uStack_188;
  int8_t auStack_180 [72];
  void *puStack_138;
  int8_t *puStack_130;
  int32_t uStack_128;
  int8_t auStack_120 [72];
  void *puStack_d8;
  int8_t *puStack_d0;
  int32_t uStack_c8;
  int8_t auStack_c0 [72];
  void *puStack_78;
  int8_t *puStack_70;
  int32_t uStack_68;
  int8_t auStack_60 [72];
  ulonglong uStack_18;
  
  uStack_6e0 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_708;
  FUN_18035a770();
  puVar1 = (uint64_t *)
           FUN_180389090(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x2970,&plStack_6e8,
                         param_1 + 0x70);
  *(uint64_t *)(param_1 + 0x108) = *puVar1;
  if (plStack_6e8 != (longlong *)0x0) {
    (**(code **)(*plStack_6e8 + 0x38))();
  }
  FUN_180358a50(param_1);
  if (*(char *)(param_1 + 0xcb) == '\0') {
    if (*(char *)(param_1 + 0xc9) == '\0') {
      puStack_78 = &UNK_1809fcc58;
      puStack_70 = auStack_60;
      auStack_60[0] = 0;
      uStack_68 = 0x13;
      strcpy_s(auStack_60,0x40,&UNK_180a1ed70);
      puStack_78 = &UNK_18098bcb0;
      puStack_d8 = &UNK_1809fcc58;
      puStack_d0 = auStack_c0;
      auStack_c0[0] = 0;
      uStack_c8 = 0x17;
      strcpy_s(auStack_c0,0x40,&UNK_180a1ed58);
      puStack_d8 = &UNK_18098bcb0;
      puStack_138 = &UNK_1809fcc58;
      puStack_130 = auStack_120;
      auStack_120[0] = 0;
      uStack_128 = 0x23;
      strcpy_s(auStack_120,0x40,&DAT_180a1eba8);
      puStack_138 = &UNK_18098bcb0;
      puStack_198 = &UNK_1809fcc58;
      puStack_190 = auStack_180;
      auStack_180[0] = 0;
      uStack_188 = 0x12;
      strcpy_s(auStack_180,0x40,&DAT_180a1eb60);
      puStack_198 = &UNK_18098bcb0;
      puStack_1f8 = &UNK_1809fcc58;
      puStack_1f0 = auStack_1e0;
      auStack_1e0[0] = 0;
      uStack_1e8 = 0x13;
      strcpy_s(auStack_1e0,0x40,&DAT_180a1eb48);
      puStack_1f8 = &UNK_18098bcb0;
      puStack_258 = &UNK_1809fcc58;
      puStack_250 = auStack_240;
      auStack_240[0] = 0;
      uStack_248 = 0x11;
      strcpy_s(auStack_240,0x40,&UNK_180a1ed88);
      puStack_258 = &UNK_18098bcb0;
      puStack_2b8 = &UNK_1809fcc58;
      puStack_2b0 = auStack_2a0;
      auStack_2a0[0] = 0;
      uStack_2a8 = 9;
      strcpy_s(auStack_2a0,0x40,&DAT_180a1eb88);
      puStack_2b8 = &UNK_18098bcb0;
      puStack_318 = &UNK_1809fcc58;
      puStack_310 = auStack_300;
      auStack_300[0] = 0;
      uStack_308 = 0x23;
      strcpy_s(auStack_300,0x40,&DAT_180a1eba8);
      puStack_318 = &UNK_18098bcb0;
      puStack_378 = &UNK_1809fcc58;
      puStack_370 = auStack_360;
      auStack_360[0] = 0;
      uStack_368 = 0x22;
      strcpy_s(auStack_360,0x40,&DAT_180a1ec30);
      puStack_378 = &UNK_18098bcb0;
      puStack_3d8 = &UNK_1809fcc58;
      puStack_3d0 = auStack_3c0;
      auStack_3c0[0] = 0;
      uStack_3c8 = 0x15;
      strcpy_s(auStack_3c0,0x40,&DAT_180a1ec18);
      puStack_3d8 = &UNK_18098bcb0;
      puStack_438 = &UNK_1809fcc58;
      puStack_430 = auStack_420;
      auStack_420[0] = 0;
      uStack_428 = 0x15;
      strcpy_s(auStack_420,0x40,&DAT_180a1ec58);
      puStack_438 = &UNK_18098bcb0;
      puStack_498 = &UNK_1809fcc58;
      puStack_490 = auStack_480;
      auStack_480[0] = 0;
      uStack_488 = 0x15;
      strcpy_s(auStack_480,0x40,&DAT_180a1ecb8);
      puStack_498 = &UNK_18098bcb0;
      puStack_4f8 = &UNK_1809fcc58;
      puStack_4f0 = auStack_4e0;
      auStack_4e0[0] = 0;
      uStack_4e8 = 0x15;
      strcpy_s(auStack_4e0,0x40,&DAT_180a1eca0);
      puStack_4f8 = &UNK_18098bcb0;
      puStack_558 = &UNK_1809fcc58;
      puStack_550 = auStack_540;
      auStack_540[0] = 0;
      uStack_548 = 0x15;
      strcpy_s(auStack_540,0x40,&DAT_180a1ec88);
      puStack_558 = &UNK_18098bcb0;
      puStack_5b8 = &UNK_1809fcc58;
      puStack_5b0 = auStack_5a0;
      auStack_5a0[0] = 0;
      uStack_5a8 = 0x15;
      strcpy_s(auStack_5a0,0x40,&DAT_180a1ec70);
      puStack_5b8 = &UNK_18098bcb0;
      puStack_618 = &UNK_1809fcc58;
      puStack_610 = auStack_600;
      auStack_600[0] = 0;
      uStack_608 = 0x15;
      strcpy_s(auStack_600,0x40,&DAT_180a1ed30);
      puStack_618 = &UNK_18098bcb0;
      puStack_678 = &UNK_1809fcc58;
      puStack_670 = auStack_660;
      auStack_660[0] = 0;
      uStack_668 = 0x15;
      strcpy_s(auStack_660,0x40,&DAT_180a1ed18);
      puStack_678 = &UNK_18098bcb0;
      puStack_6d8 = &UNK_1809fcc58;
      puStack_6d0 = auStack_6c0;
      auStack_6c0[0] = 0;
      uStack_6c8 = 0x1a;
      strcpy_s(auStack_6c0,0x40,&DAT_180a1ecf8);
      puStack_6d8 = &UNK_18098bcb0;
    }
    else {
      puStack_d8 = &UNK_1809fcc58;
      puStack_d0 = auStack_c0;
      auStack_c0[0] = 0;
      uStack_c8 = 9;
      strcpy_s(auStack_c0,0x40,&DAT_180a1eb88);
      puStack_d8 = &UNK_18098bcb0;
      puStack_138 = &UNK_1809fcc58;
      puStack_130 = auStack_120;
      auStack_120[0] = 0;
      uStack_128 = 0x13;
      strcpy_s(auStack_120,0x40,&UNK_180a1ed70);
      puStack_138 = &UNK_18098bcb0;
      puStack_198 = &UNK_1809fcc58;
      puStack_190 = auStack_180;
      auStack_180[0] = 0;
      uStack_188 = 0x17;
      strcpy_s(auStack_180,0x40,&UNK_180a1ed58);
      puStack_198 = &UNK_18098bcb0;
      puStack_1f8 = &UNK_1809fcc58;
      puStack_1f0 = auStack_1e0;
      auStack_1e0[0] = 0;
      uStack_1e8 = 0x23;
      strcpy_s(auStack_1e0,0x40,&DAT_180a1eba8);
      puStack_1f8 = &UNK_18098bcb0;
      puStack_258 = &UNK_1809fcc58;
      puStack_250 = auStack_240;
      auStack_240[0] = 0;
      uStack_248 = 0x12;
      strcpy_s(auStack_240,0x40,&DAT_180a1eb60);
      puStack_258 = &UNK_18098bcb0;
      puStack_2b8 = &UNK_1809fcc58;
      puStack_2b0 = auStack_2a0;
      auStack_2a0[0] = 0;
      uStack_2a8 = 0x13;
      strcpy_s(auStack_2a0,0x40,&DAT_180a1eb48);
      puStack_2b8 = &UNK_18098bcb0;
      puStack_318 = &UNK_1809fcc58;
      puStack_310 = auStack_300;
      auStack_300[0] = 0;
      uStack_308 = 0x11;
      strcpy_s(auStack_300,0x40,&UNK_180a1ed88);
      puStack_318 = &UNK_18098bcb0;
      puStack_378 = &UNK_1809fcc58;
      puStack_370 = auStack_360;
      auStack_360[0] = 0;
      uStack_368 = 0x23;
      strcpy_s(auStack_360,0x40,&DAT_180a1eba8);
      puStack_378 = &UNK_18098bcb0;
      puStack_3d8 = &UNK_1809fcc58;
      puStack_3d0 = auStack_3c0;
      auStack_3c0[0] = 0;
      uStack_3c8 = 0x22;
      strcpy_s(auStack_3c0,0x40,&DAT_180a1ec30);
      puStack_3d8 = &UNK_18098bcb0;
      puStack_438 = &UNK_1809fcc58;
      puStack_430 = auStack_420;
      auStack_420[0] = 0;
      uStack_428 = 0x15;
      strcpy_s(auStack_420,0x40,&DAT_180a1ec18);
      puStack_438 = &UNK_18098bcb0;
      puStack_498 = &UNK_1809fcc58;
      puStack_490 = auStack_480;
      auStack_480[0] = 0;
      uStack_488 = 0x15;
      strcpy_s(auStack_480,0x40,&DAT_180a1ec58);
      puStack_498 = &UNK_18098bcb0;
      puStack_4f8 = &UNK_1809fcc58;
      puStack_4f0 = auStack_4e0;
      auStack_4e0[0] = 0;
      uStack_4e8 = 0x15;
      strcpy_s(auStack_4e0,0x40,&DAT_180a1ecb8);
      puStack_4f8 = &UNK_18098bcb0;
      puStack_558 = &UNK_1809fcc58;
      puStack_550 = auStack_540;
      auStack_540[0] = 0;
      uStack_548 = 0x15;
      strcpy_s(auStack_540,0x40,&DAT_180a1eca0);
      puStack_558 = &UNK_18098bcb0;
      puStack_5b8 = &UNK_1809fcc58;
      puStack_5b0 = auStack_5a0;
      auStack_5a0[0] = 0;
      uStack_5a8 = 0x15;
      strcpy_s(auStack_5a0,0x40,&DAT_180a1ec88);
      puStack_5b8 = &UNK_18098bcb0;
      puStack_618 = &UNK_1809fcc58;
      puStack_610 = auStack_600;
      auStack_600[0] = 0;
      uStack_608 = 0x15;
      strcpy_s(auStack_600,0x40,&DAT_180a1ec70);
      puStack_618 = &UNK_18098bcb0;
      puStack_678 = &UNK_1809fcc58;
      puStack_670 = auStack_660;
      auStack_660[0] = 0;
      uStack_668 = 0x15;
      strcpy_s(auStack_660,0x40,&DAT_180a1ed30);
      puStack_678 = &UNK_18098bcb0;
      puStack_6d8 = &UNK_1809fcc58;
      puStack_6d0 = auStack_6c0;
      auStack_6c0[0] = 0;
      uStack_6c8 = 0x15;
      strcpy_s(auStack_6c0,0x40,&DAT_180a1ed18);
      puStack_6d8 = &UNK_18098bcb0;
      puStack_78 = &UNK_1809fcc58;
      puStack_70 = auStack_60;
      auStack_60[0] = 0;
      uStack_68 = 0x1a;
      strcpy_s(auStack_60,0x40,&DAT_180a1ecf8);
      puStack_78 = &UNK_18098bcb0;
    }
  }
  else {
    puStack_6d8 = &UNK_1809fcc58;
    puStack_6d0 = auStack_6c0;
    auStack_6c0[0] = 0;
    uStack_6c8 = 0x12;
    strcpy_s(auStack_6c0,0x40,&DAT_180a1eb60);
    puStack_6d8 = &UNK_18098bcb0;
    puStack_678 = &UNK_1809fcc58;
    puStack_670 = auStack_660;
    auStack_660[0] = 0;
    uStack_668 = 0x13;
    strcpy_s(auStack_660,0x40,&DAT_180a1eb48);
    puStack_678 = &UNK_18098bcb0;
    puStack_618 = &UNK_1809fcc58;
    puStack_610 = auStack_600;
    auStack_600[0] = 0;
    uStack_608 = 0x11;
    strcpy_s(auStack_600,0x40,&UNK_180a1ed88);
    puStack_618 = &UNK_18098bcb0;
    puStack_5b8 = &UNK_1809fcc58;
    puStack_5b0 = auStack_5a0;
    auStack_5a0[0] = 0;
    uStack_5a8 = 9;
    strcpy_s(auStack_5a0,0x40,&DAT_180a1eb88);
    puStack_5b8 = &UNK_18098bcb0;
    puStack_558 = &UNK_1809fcc58;
    puStack_550 = auStack_540;
    auStack_540[0] = 0;
    uStack_548 = 0x13;
    strcpy_s(auStack_540,0x40,&UNK_180a1ed70);
    puStack_558 = &UNK_18098bcb0;
    puStack_4f8 = &UNK_1809fcc58;
    puStack_4f0 = auStack_4e0;
    auStack_4e0[0] = 0;
    uStack_4e8 = 0x17;
    strcpy_s(auStack_4e0,0x40,&UNK_180a1ed58);
    puStack_4f8 = &UNK_18098bcb0;
    puStack_498 = &UNK_1809fcc58;
    puStack_490 = auStack_480;
    auStack_480[0] = 0;
    uStack_488 = 0x23;
    strcpy_s(auStack_480,0x40,&DAT_180a1eba8);
    puStack_498 = &UNK_18098bcb0;
    puStack_438 = &UNK_1809fcc58;
    puStack_430 = auStack_420;
    auStack_420[0] = 0;
    uStack_428 = 0x22;
    strcpy_s(auStack_420,0x40,&DAT_180a1ec30);
    puStack_438 = &UNK_18098bcb0;
    puStack_3d8 = &UNK_1809fcc58;
    puStack_3d0 = auStack_3c0;
    auStack_3c0[0] = 0;
    uStack_3c8 = 0x15;
    strcpy_s(auStack_3c0,0x40,&DAT_180a1ec18);
    puStack_3d8 = &UNK_18098bcb0;
    puStack_378 = &UNK_1809fcc58;
    puStack_370 = auStack_360;
    auStack_360[0] = 0;
    uStack_368 = 0x15;
    strcpy_s(auStack_360,0x40,&DAT_180a1ec58);
    puStack_378 = &UNK_18098bcb0;
    puStack_318 = &UNK_1809fcc58;
    puStack_310 = auStack_300;
    auStack_300[0] = 0;
    uStack_308 = 0x15;
    strcpy_s(auStack_300,0x40,&DAT_180a1ecb8);
    puStack_318 = &UNK_18098bcb0;
    puStack_2b8 = &UNK_1809fcc58;
    puStack_2b0 = auStack_2a0;
    auStack_2a0[0] = 0;
    uStack_2a8 = 0x15;
    strcpy_s(auStack_2a0,0x40,&DAT_180a1eca0);
    puStack_2b8 = &UNK_18098bcb0;
    puStack_258 = &UNK_1809fcc58;
    puStack_250 = auStack_240;
    auStack_240[0] = 0;
    uStack_248 = 0x15;
    strcpy_s(auStack_240,0x40,&DAT_180a1ec88);
    puStack_258 = &UNK_18098bcb0;
    puStack_1f8 = &UNK_1809fcc58;
    puStack_1f0 = auStack_1e0;
    auStack_1e0[0] = 0;
    uStack_1e8 = 0x15;
    strcpy_s(auStack_1e0,0x40,&DAT_180a1ec70);
    puStack_1f8 = &UNK_18098bcb0;
    puStack_198 = &UNK_1809fcc58;
    puStack_190 = auStack_180;
    auStack_180[0] = 0;
    uStack_188 = 0x15;
    strcpy_s(auStack_180,0x40,&DAT_180a1ed30);
    puStack_198 = &UNK_18098bcb0;
    puStack_138 = &UNK_1809fcc58;
    puStack_130 = auStack_120;
    auStack_120[0] = 0;
    uStack_128 = 0x15;
    strcpy_s(auStack_120,0x40,&DAT_180a1ed18);
    puStack_138 = &UNK_18098bcb0;
    puStack_d8 = &UNK_1809fcc58;
    puStack_d0 = auStack_c0;
    auStack_c0[0] = 0;
    uStack_c8 = 0x1a;
    strcpy_s(auStack_c0,0x40,&DAT_180a1ecf8);
    puStack_d8 = &UNK_18098bcb0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_708);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180357a80(uint64_t param_1,uint64_t param_2)
void FUN_180357a80(uint64_t param_1,uint64_t param_2)

{
  longlong *plVar1;
  int32_t uVar2;
  int32_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  void *puStack_2e8;
  uint64_t *puStack_2e0;
  int32_t uStack_2d8;
  uint64_t uStack_2d0;
  uint64_t *puStack_48;
  uint64_t uStack_40;
  
  puVar5 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x148,8,3);
  uStack_40 = 0xfffffffffffffffe;
  puVar6 = puVar5;
  FUN_1803456e0(puVar5,param_2,param_1);
  *puVar6 = &UNK_180a1ede0;
  puVar4 = puVar6 + 0xe;
  *puVar4 = &UNK_18098bcb0;
  puVar6[0xf] = 0;
  *(int32_t *)(puVar6 + 0x10) = 0;
  *puVar4 = &UNK_180a3c3e0;
  puVar6[0x11] = 0;
  puVar6[0xf] = 0;
  *(int32_t *)(puVar6 + 0x10) = 0;
  puVar6[0x22] = 0;
  puVar6[0x23] = 0;
  puStack_2e8 = &UNK_180a3c3e0;
  uStack_2d0 = 0;
  puStack_2e0 = (uint64_t *)0x0;
  uStack_2d8 = 0;
  puStack_48 = puVar4;
  puVar3 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  puStack_2e0 = (uint64_t *)puVar3;
  uVar2 = FUN_18064e990(puVar3);
  *puVar3 = 0x74736554;
  *(int8_t *)(puVar3 + 1) = 0;
  uStack_2d8 = 4;
  uStack_2d0._0_4_ = uVar2;
  FUN_18005d190(puVar4);
  puStack_2e8 = &UNK_180a3c3e0;
  if (puStack_2e0 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_2e0 = (uint64_t *)0x0;
  uStack_2d0 = (ulonglong)uStack_2d0._4_4_ << 0x20;
  puStack_2e8 = &UNK_18098bcb0;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0x403e000000000000;
  puVar5[0x14] = 0x4008000000000000;
  puVar5[0x17] = 0;
  plVar1 = (longlong *)puVar5[0x22];
  puVar5[0x22] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  puVar5[0x15] = 0x3ff0000000000000;
  puVar5[0x16] = 0x3ff0000000000000;
  *(int32_t *)(puVar5 + 0x19) = 0;
  puVar5[0x1a] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1c] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1f] = 0;
  puVar5[0x20] = 0;
  puVar5[0x18] = 0x3ff0000000000000;
  puStack_2e8 = &UNK_180a3c3e0;
  uStack_2d0 = 0;
  puStack_2e0 = (uint64_t *)0x0;
  uStack_2d8 = 0;
  puVar4 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  puStack_2e0 = puVar4;
  uVar2 = FUN_18064e990(puVar4);
  uStack_2d0 = CONCAT44(uStack_2d0._4_4_,uVar2);
  *puVar4 = 0x6d614e2068746150;
  *(int16_t *)(puVar4 + 1) = 0x65;
  uStack_2d8 = 9;
  FUN_1803460a0(puVar5,&puStack_2e8,puStack_48,0);
  puStack_2e8 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



