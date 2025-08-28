#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part144.c - 3 个函数

// 函数: void FUN_180357ad0(uint64_t param_1)
void FUN_180357ad0(uint64_t param_1)

{
  int8_t auStack_968 [32];
  int32_t uStack_948;
  void **appuStack_940 [2];
  uint64_t uStack_930;
  void *apuStack_928 [11];
  int32_t uStack_8d0;
  void *puStack_8c8;
  int8_t *puStack_8c0;
  int32_t uStack_8b8;
  int8_t auStack_8b0 [72];
  void *puStack_868;
  int8_t *puStack_860;
  int32_t uStack_858;
  int8_t auStack_850 [72];
  void *puStack_808;
  int8_t *puStack_800;
  int32_t uStack_7f8;
  int8_t auStack_7f0 [72];
  void *puStack_7a8;
  int8_t *puStack_7a0;
  int32_t uStack_798;
  int8_t auStack_790 [72];
  void *puStack_748;
  int8_t *puStack_740;
  int32_t uStack_738;
  int8_t auStack_730 [72];
  void *puStack_6e8;
  int8_t *puStack_6e0;
  int32_t uStack_6d8;
  int8_t auStack_6d0 [72];
  void *puStack_688;
  int8_t *puStack_680;
  int32_t uStack_678;
  int8_t auStack_670 [72];
  void *puStack_628;
  int8_t *puStack_620;
  int32_t uStack_618;
  int8_t auStack_610 [72];
  void *puStack_5c8;
  int8_t *puStack_5c0;
  int32_t uStack_5b8;
  int8_t auStack_5b0 [72];
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
  uint64_t uStack_28;
  
  uStack_930 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_968;
  uStack_948 = 0;
  puStack_8c8 = &unknown_var_3480_ptr;
  puStack_8c0 = auStack_8b0;
  auStack_8b0[0] = 0;
  uStack_8b8 = 9;
  strcpy_s(auStack_8b0,0x40,&system_data_d578);
  SystemCommunicationProcessor(apuStack_928,&puStack_8c8);
  uStack_8d0 = 0;
  uStack_948 = 1;
  FUN_180180730(param_1,appuStack_940,apuStack_928);
  uStack_948 = 0;
  appuStack_940[0] = apuStack_928;
  apuStack_928[0] = &system_state_ptr;
  puStack_8c8 = &system_state_ptr;
  puStack_868 = &unknown_var_3480_ptr;
  puStack_860 = auStack_850;
  auStack_850[0] = 0;
  uStack_858 = 9;
  strcpy_s(auStack_850,0x40,&system_data_eb88);
  SystemCommunicationProcessor(apuStack_928,&puStack_868);
  uStack_8d0 = 3;
  uStack_948 = 2;
  FUN_180180730(param_1,appuStack_940,apuStack_928);
  uStack_948 = 0;
  appuStack_940[0] = apuStack_928;
  apuStack_928[0] = &system_state_ptr;
  puStack_868 = &system_state_ptr;
  puStack_808 = &unknown_var_3480_ptr;
  puStack_800 = auStack_7f0;
  auStack_7f0[0] = 0;
  uStack_7f8 = 8;
  strcpy_s(auStack_7f0,0x40,&system_data_eb78);
  SystemCommunicationProcessor(apuStack_928,&puStack_808);
  uStack_8d0 = 3;
  uStack_948 = 4;
  FUN_180180730(param_1,appuStack_940,apuStack_928);
  uStack_948 = 0;
  appuStack_940[0] = apuStack_928;
  apuStack_928[0] = &system_state_ptr;
  puStack_808 = &system_state_ptr;
  puStack_7a8 = &unknown_var_3480_ptr;
  puStack_7a0 = auStack_790;
  auStack_790[0] = 0;
  uStack_798 = 0x12;
  strcpy_s(auStack_790,0x40,&system_data_eb60);
  SystemCommunicationProcessor(apuStack_928,&puStack_7a8);
  uStack_8d0 = 10;
  uStack_948 = 8;
  FUN_180180730(param_1,appuStack_940,apuStack_928);
  uStack_948 = 0;
  appuStack_940[0] = apuStack_928;
  apuStack_928[0] = &system_state_ptr;
  puStack_7a8 = &system_state_ptr;
  puStack_748 = &unknown_var_3480_ptr;
  puStack_740 = auStack_730;
  auStack_730[0] = 0;
  uStack_738 = 0x13;
  strcpy_s(auStack_730,0x40,&system_data_eb48);
  SystemCommunicationProcessor(apuStack_928,&puStack_748);
  uStack_8d0 = 1;
  uStack_948 = 0x10;
  FUN_180180730(param_1,appuStack_940,apuStack_928);
  uStack_948 = 0;
  appuStack_940[0] = apuStack_928;
  apuStack_928[0] = &system_state_ptr;
  puStack_748 = &system_state_ptr;
  puStack_6e8 = &unknown_var_3480_ptr;
  puStack_6e0 = auStack_6d0;
  auStack_6d0[0] = 0;
  uStack_6d8 = 0x14;
  strcpy_s(auStack_6d0,0x40,&system_data_ebe8);
  SystemCommunicationProcessor(apuStack_928,&puStack_6e8);
  uStack_8d0 = 1;
  uStack_948 = 0x20;
  FUN_180180730(param_1,appuStack_940,apuStack_928);
  uStack_948 = 0;
  appuStack_940[0] = apuStack_928;
  apuStack_928[0] = &system_state_ptr;
  puStack_6e8 = &system_state_ptr;
  puStack_688 = &unknown_var_3480_ptr;
  puStack_680 = auStack_670;
  auStack_670[0] = 0;
  uStack_678 = 0x11;
  strcpy_s(auStack_670,0x40,&system_data_ebd0);
  SystemCommunicationProcessor(apuStack_928,&puStack_688);
  uStack_8d0 = 1;
  uStack_948 = 0x40;
  FUN_180180730(param_1,appuStack_940,apuStack_928);
  uStack_948 = 0;
  appuStack_940[0] = apuStack_928;
  apuStack_928[0] = &system_state_ptr;
  puStack_688 = &system_state_ptr;
  puStack_628 = &unknown_var_3480_ptr;
  puStack_620 = auStack_610;
  auStack_610[0] = 0;
  uStack_618 = 0x23;
  strcpy_s(auStack_610,0x40,&system_data_eba8);
  SystemCommunicationProcessor(apuStack_928,&puStack_628);
  uStack_8d0 = 1;
  uStack_948 = 0x80;
  FUN_180180730(param_1,appuStack_940,apuStack_928);
  uStack_948 = 0;
  appuStack_940[0] = apuStack_928;
  apuStack_928[0] = &system_state_ptr;
  puStack_628 = &system_state_ptr;
  puStack_5c8 = &unknown_var_3480_ptr;
  puStack_5c0 = auStack_5b0;
  auStack_5b0[0] = 0;
  uStack_5b8 = 10;
  strcpy_s(auStack_5b0,0x40,&system_data_eb98);
  SystemCommunicationProcessor(apuStack_928,&puStack_5c8);
  uStack_8d0 = 1;
  uStack_948 = 0x100;
  FUN_180180730(param_1,appuStack_940,apuStack_928);
  uStack_948 = 0;
  appuStack_940[0] = apuStack_928;
  apuStack_928[0] = &system_state_ptr;
  puStack_5c8 = &system_state_ptr;
  puStack_568 = &unknown_var_3480_ptr;
  puStack_560 = auStack_550;
  auStack_550[0] = 0;
  uStack_558 = 0x15;
  strcpy_s(auStack_550,0x40,&system_data_ec58);
  SystemCommunicationProcessor(apuStack_928,&puStack_568);
  uStack_8d0 = 3;
  uStack_948 = 0x200;
  FUN_180180730(param_1,appuStack_940,apuStack_928);
  uStack_948 = 0;
  appuStack_940[0] = apuStack_928;
  apuStack_928[0] = &system_state_ptr;
  puStack_568 = &system_state_ptr;
  puStack_508 = &unknown_var_3480_ptr;
  puStack_500 = auStack_4f0;
  auStack_4f0[0] = 0;
  uStack_4f8 = 0x22;
  strcpy_s(auStack_4f0,0x40,&system_data_ec30);
  SystemCommunicationProcessor(apuStack_928,&puStack_508);
  uStack_8d0 = 1;
  uStack_948 = 0x400;
  FUN_180180730(param_1,appuStack_940,apuStack_928);
  uStack_948 = 0;
  appuStack_940[0] = apuStack_928;
  apuStack_928[0] = &system_state_ptr;
  puStack_508 = &system_state_ptr;
  puStack_4a8 = &unknown_var_3480_ptr;
  puStack_4a0 = auStack_490;
  auStack_490[0] = 0;
  uStack_498 = 0x15;
  strcpy_s(auStack_490,0x40,&system_data_ec18);
  SystemCommunicationProcessor(apuStack_928,&puStack_4a8);
  uStack_8d0 = 3;
  uStack_948 = 0x800;
  FUN_180180730(param_1,appuStack_940,apuStack_928);
  uStack_948 = 0;
  appuStack_940[0] = apuStack_928;
  apuStack_928[0] = &system_state_ptr;
  puStack_4a8 = &system_state_ptr;
  puStack_448 = &unknown_var_3480_ptr;
  puStack_440 = auStack_430;
  auStack_430[0] = 0;
  uStack_438 = 0x10;
  strcpy_s(auStack_430,0x40,&system_data_ec00);
  SystemCommunicationProcessor(apuStack_928,&puStack_448);
  uStack_8d0 = 3;
  uStack_948 = 0x1000;
  FUN_180180730(param_1,appuStack_940,apuStack_928);
  uStack_948 = 0;
  appuStack_940[0] = apuStack_928;
  apuStack_928[0] = &system_state_ptr;
  puStack_448 = &system_state_ptr;
  puStack_3e8 = &unknown_var_3480_ptr;
  puStack_3e0 = auStack_3d0;
  auStack_3d0[0] = 0;
  uStack_3d8 = 0x13;
  strcpy_s(auStack_3d0,0x40,&unknown_var_3024_ptr);
  SystemCommunicationProcessor(apuStack_928,&puStack_3e8);
  uStack_8d0 = 1;
  uStack_948 = 0x2000;
  FUN_180180730(param_1,appuStack_940,apuStack_928);
  uStack_948 = 0;
  appuStack_940[0] = apuStack_928;
  apuStack_928[0] = &system_state_ptr;
  puStack_3e8 = &system_state_ptr;
  puStack_388 = &unknown_var_3480_ptr;
  puStack_380 = auStack_370;
  auStack_370[0] = 0;
  uStack_378 = 0x17;
  strcpy_s(auStack_370,0x40,&unknown_var_3000_ptr);
  SystemCommunicationProcessor(apuStack_928,&puStack_388);
  uStack_8d0 = 1;
  uStack_948 = 0x4000;
  FUN_180180730(param_1,appuStack_940,apuStack_928);
  uStack_948 = 0;
  appuStack_940[0] = apuStack_928;
  apuStack_928[0] = &system_state_ptr;
  puStack_388 = &system_state_ptr;
  puStack_328 = &unknown_var_3480_ptr;
  puStack_320 = auStack_310;
  auStack_310[0] = 0;
  uStack_318 = 0x15;
  strcpy_s(auStack_310,0x40,&system_data_ecb8);
  SystemCommunicationProcessor(apuStack_928,&puStack_328);
  uStack_8d0 = 8;
  uStack_948 = 0x8000;
  FUN_180180730(param_1,appuStack_940,apuStack_928);
  uStack_948 = 0;
  appuStack_940[0] = apuStack_928;
  apuStack_928[0] = &system_state_ptr;
  puStack_328 = &system_state_ptr;
  puStack_2c8 = &unknown_var_3480_ptr;
  puStack_2c0 = auStack_2b0;
  auStack_2b0[0] = 0;
  uStack_2b8 = 0x15;
  strcpy_s(auStack_2b0,0x40,&system_data_eca0);
  SystemCommunicationProcessor(apuStack_928,&puStack_2c8);
  uStack_8d0 = 8;
  uStack_948 = 0x10000;
  FUN_180180730(param_1,appuStack_940,apuStack_928);
  uStack_948 = 0;
  appuStack_940[0] = apuStack_928;
  apuStack_928[0] = &system_state_ptr;
  puStack_2c8 = &system_state_ptr;
  puStack_268 = &unknown_var_3480_ptr;
  puStack_260 = auStack_250;
  auStack_250[0] = 0;
  uStack_258 = 0x15;
  strcpy_s(auStack_250,0x40,&system_data_ec88);
  SystemCommunicationProcessor(apuStack_928,&puStack_268);
  uStack_8d0 = 8;
  uStack_948 = 0x20000;
  FUN_180180730(param_1,appuStack_940,apuStack_928);
  uStack_948 = 0;
  appuStack_940[0] = apuStack_928;
  apuStack_928[0] = &system_state_ptr;
  puStack_268 = &system_state_ptr;
  puStack_208 = &unknown_var_3480_ptr;
  puStack_200 = auStack_1f0;
  auStack_1f0[0] = 0;
  uStack_1f8 = 0x15;
  strcpy_s(auStack_1f0,0x40,&system_data_ec70);
  SystemCommunicationProcessor(apuStack_928,&puStack_208);
  uStack_8d0 = 1;
  uStack_948 = 0x40000;
  FUN_180180730(param_1,appuStack_940,apuStack_928);
  uStack_948 = 0;
  appuStack_940[0] = apuStack_928;
  apuStack_928[0] = &system_state_ptr;
  puStack_208 = &system_state_ptr;
  puStack_1a8 = &unknown_var_3480_ptr;
  puStack_1a0 = auStack_190;
  auStack_190[0] = 0;
  uStack_198 = 0x15;
  strcpy_s(auStack_190,0x40,&system_data_ed30);
  SystemCommunicationProcessor(apuStack_928,&puStack_1a8);
  uStack_8d0 = 1;
  uStack_948 = 0x80000;
  FUN_180180730(param_1,appuStack_940,apuStack_928);
  uStack_948 = 0;
  appuStack_940[0] = apuStack_928;
  apuStack_928[0] = &system_state_ptr;
  puStack_1a8 = &system_state_ptr;
  puStack_148 = &unknown_var_3480_ptr;
  puStack_140 = auStack_130;
  auStack_130[0] = 0;
  uStack_138 = 0x15;
  strcpy_s(auStack_130,0x40,&system_data_ed18);
  SystemCommunicationProcessor(apuStack_928,&puStack_148);
  uStack_8d0 = 1;
  uStack_948 = 0x100000;
  FUN_180180730(param_1,appuStack_940,apuStack_928);
  uStack_948 = 0;
  appuStack_940[0] = apuStack_928;
  apuStack_928[0] = &system_state_ptr;
  puStack_148 = &system_state_ptr;
  puStack_e8 = &unknown_var_3480_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0x1a;
  strcpy_s(auStack_d0,0x40,&system_data_ecf8);
  SystemCommunicationProcessor(apuStack_928,&puStack_e8);
  uStack_8d0 = 1;
  uStack_948 = 0x200000;
  FUN_180180730(param_1,appuStack_940,apuStack_928);
  uStack_948 = 0;
  appuStack_940[0] = apuStack_928;
  apuStack_928[0] = &system_state_ptr;
  puStack_e8 = &system_state_ptr;
  puStack_88 = &unknown_var_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x21;
  strcpy_s(auStack_70,0x40,&system_data_ecd0);
  SystemCommunicationProcessor(apuStack_928,&puStack_88);
  uStack_8d0 = 0xb;
  uStack_948 = 0x400000;
  FUN_180180730(param_1,appuStack_940,apuStack_928);
  uStack_948 = 0;
  appuStack_940[0] = apuStack_928;
  apuStack_928[0] = &system_state_ptr;
  puStack_88 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_968);
}





// 函数: void FUN_180358a50(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180358a50(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plStackX_8;
  
  plVar3 = (int64_t *)
           FUN_180389090(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x2970,&plStackX_8,
                         param_1 + 0x70,param_4,0xfffffffffffffffe);
  lVar1 = *plVar3;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  lVar2 = *(int64_t *)(param_1 + 0x108);
  if (lVar1 != lVar2) {
    *(int32_t *)(param_1 + 0x124) = 0xffffffff;
  }
  if ((lVar1 != 0) &&
     ((lVar1 != lVar2 || ((lVar2 != 0 && (*(int *)(param_1 + 0x124) < *(int *)(lVar2 + 0x70))))))) {
    *(int64_t *)(param_1 + 0x108) = lVar1;
    if (*(char *)(param_1 + 0xcb) == '\0') {
      FUN_18035bbd0(param_1);
    }
    else {
      if (((*(int64_t *)(param_1 + 0xd0) == 0) && (*(int64_t *)(param_1 + 0xd8) == 0)) &&
         (*(int64_t *)(param_1 + 0xe0) == 0)) {
        return;
      }
      FUN_18035b330(param_1);
    }
    *(int32_t *)(param_1 + 0x124) = *(int32_t *)(*(int64_t *)(param_1 + 0x108) + 0x70);
  }
  return;
}





// 函数: void FUN_180358b30(int64_t param_1)
void FUN_180358b30(int64_t param_1)

{
  if (*(char *)(param_1 + 0xcb) == '\0') {
    FUN_18035bbd0();
  }
  else {
    if (((*(int64_t *)(param_1 + 0xd0) == 0) && (*(int64_t *)(param_1 + 0xd8) == 0)) &&
       (*(int64_t *)(param_1 + 0xe0) == 0)) {
      return;
    }
    FUN_18035b330();
  }
  *(int32_t *)(param_1 + 0x124) = *(int32_t *)(*(int64_t *)(param_1 + 0x108) + 0x70);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



