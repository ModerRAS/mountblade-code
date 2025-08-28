#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_01_part048.c - 1 个函数
// 函数: void function_0d4270(uint64_t *param_1,uint64_t *param_2,char param_3)
void function_0d4270(uint64_t *param_1,uint64_t *param_2,char param_3)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int iVar9;
  int iVar10;
  int64_t lVar11;
  int *piVar12;
  int iVar13;
  int32_t uVar14;
  uint64_t *pstack_special_x_8;
  uint64_t *pstack_special_x_10;
  uint64_t local_var_a40;
  uint local_var_a2c;
  uint64_t *plocal_var_a28;
  uint64_t *plocal_var_a20;
  uint64_t *plocal_var_a18;
  uint64_t *plocal_var_a10;
  uint64_t *plocal_var_a08;
  uint64_t *plocal_var_a00;
  uint64_t *plocal_var_9f8;
  uint64_t *plocal_var_9f0;
  uint64_t *plocal_var_9e8;
  uint64_t *plocal_var_9e0;
  uint64_t *plocal_var_9d8;
  uint64_t *plocal_var_9d0;
  int64_t alStack_9c8 [3];
  int32_t local_var_9b0;
  int64_t alStack_9a8 [3];
  int32_t local_var_990;
  int64_t alStack_988 [3];
  int32_t local_var_970;
  int64_t alStack_968 [3];
  int32_t local_var_950;
  int64_t alStack_948 [3];
  int32_t local_var_930;
  int64_t alStack_928 [3];
  int32_t local_var_910;
  int64_t alStack_908 [3];
  int32_t local_var_8f0;
  int64_t alStack_8e8 [3];
  int32_t local_var_8d0;
  int64_t alStack_8c8 [3];
  int32_t local_var_8b0;
  int64_t alStack_8a8 [3];
  int32_t local_var_890;
  int64_t alStack_888 [3];
  int32_t local_var_870;
  int64_t alStack_868 [3];
  int32_t local_var_850;
  int64_t alStack_848 [3];
  int32_t local_var_830;
  int64_t alStack_828 [3];
  int32_t local_var_810;
  int64_t alStack_808 [3];
  int32_t local_var_7f0;
  int64_t alStack_7e8 [3];
  int32_t local_var_7d0;
  int64_t alStack_7c8 [3];
  int32_t local_var_7b0;
  int64_t alStack_7a8 [3];
  int32_t local_var_790;
  int64_t alStack_788 [3];
  int32_t local_var_770;
  int64_t alStack_768 [3];
  int32_t local_var_750;
  int64_t alStack_748 [3];
  int32_t local_var_730;
  int64_t alStack_728 [3];
  int32_t local_var_710;
  int64_t alStack_708 [3];
  int32_t local_var_6f0;
  int64_t alStack_6e8 [3];
  int32_t local_var_6d0;
  int64_t alStack_6c8 [3];
  int32_t local_var_6b0;
  uint64_t local_var_6a8;
  uint64_t local_var_6a0;
  void *plocal_var_698;
  code *pcStack_690;
  uint64_t local_var_688;
  uint64_t local_var_680;
  void *plocal_var_678;
  code *pcStack_670;
  uint64_t local_var_668;
  uint64_t local_var_660;
  void *plocal_var_658;
  code *pcStack_650;
  uint64_t local_var_648;
  uint64_t local_var_640;
  void *plocal_var_638;
  code *pcStack_630;
  uint64_t local_var_628;
  uint64_t local_var_620;
  void *plocal_var_618;
  code *pcStack_610;
  int64_t alStack_608 [3];
  int32_t local_var_5f0;
  int64_t alStack_5e8 [3];
  int32_t local_var_5d0;
  uint64_t local_var_5c8;
  uint64_t local_var_5c0;
  void *plocal_var_5b8;
  code *pcStack_5b0;
  uint64_t local_var_5a8;
  uint64_t local_var_5a0;
  void *plocal_var_598;
  code *pcStack_590;
  uint64_t local_var_588;
  uint64_t local_var_580;
  void *plocal_var_578;
  code *pcStack_570;
  uint64_t local_var_568;
  uint64_t local_var_560;
  void *plocal_var_558;
  code *pcStack_550;
  uint64_t local_var_548;
  uint64_t local_var_540;
  void *plocal_var_538;
  code *pcStack_530;
  uint64_t local_var_528;
  uint64_t local_var_520;
  void *plocal_var_518;
  code *pcStack_510;
  uint64_t local_var_508;
  uint64_t local_var_500;
  void *plocal_var_4f8;
  code *pcStack_4f0;
  uint64_t local_var_4e8;
  uint64_t local_var_4e0;
  void *plocal_var_4d8;
  code *pcStack_4d0;
  uint64_t local_var_4c8;
  uint64_t local_var_4c0;
  void *plocal_var_4b8;
  code *pcStack_4b0;
  uint64_t local_var_4a8;
  uint64_t local_var_4a0;
  uint64_t local_var_498;
  int32_t local_var_490;
  uint64_t local_var_488;
  int32_t local_var_480;
  int32_t local_var_47c;
  uint64_t local_var_478;
  int32_t local_var_470;
  int32_t local_var_46c;
  uint64_t local_var_468;
  int32_t local_var_460;
  uint64_t local_var_458;
  int32_t local_var_450;
  int32_t local_var_44c;
  uint64_t local_var_448;
  int32_t local_var_440;
  uint64_t local_var_438;
  int32_t local_var_430;
  int32_t local_var_42c;
  uint64_t local_var_428;
  int32_t local_var_420;
  uint64_t local_var_418;
  int32_t local_var_410;
  int32_t local_var_40c;
  uint64_t local_var_408;
  int32_t local_var_400;
  uint64_t local_var_3f8;
  int32_t local_var_3f0;
  int32_t local_var_3ec;
  uint64_t local_var_3e8;
  int32_t local_var_3e0;
  uint64_t local_var_3d8;
  int32_t local_var_3d0;
  int32_t local_var_3cc;
  uint64_t local_var_3c8;
  int32_t local_var_3c0;
  uint64_t local_var_3b8;
  int32_t local_var_3b0;
  int32_t local_var_3ac;
  uint64_t local_var_3a8;
  int32_t local_var_3a0;
  uint64_t local_var_398;
  int32_t local_var_390;
  int32_t local_var_38c;
  uint64_t local_var_388;
  int32_t local_var_380;
  int *piStack_378;
  uint64_t local_var_370;
  int *piStack_368;
  int64_t lStack_360;
  uint64_t local_var_358;
  int32_t local_var_350;
  int32_t local_var_34c;
  int *piStack_348;
  int32_t local_var_340;
  int32_t local_var_33c;
  int *piStack_338;
  int64_t lStack_330;
  int *piStack_328;
  uint64_t local_var_320;
  int *piStack_318;
  int32_t local_var_310;
  int32_t local_var_30c;
  int *piStack_308;
  uint64_t local_var_300;
  int *piStack_2f8;
  int64_t lStack_2f0;
  uint64_t local_var_2e8;
  int32_t local_var_2e0;
  uint64_t local_var_2d8;
  int32_t local_var_2d0;
  int32_t local_var_2cc;
  uint64_t local_var_2c8;
  int32_t local_var_2c0;
  uint64_t local_var_2b8;
  int32_t local_var_2b0;
  int32_t local_var_2ac;
  uint64_t local_var_2a8;
  int32_t local_var_2a0;
  uint64_t local_var_298;
  int32_t local_var_290;
  int32_t local_var_28c;
  uint64_t local_var_288;
  int32_t local_var_280;
  uint64_t local_var_278;
  int32_t local_var_270;
  int32_t local_var_26c;
  uint64_t local_var_268;
  int32_t local_var_260;
  uint64_t local_var_258;
  int32_t local_var_250;
  int32_t local_var_24c;
  uint64_t local_var_248;
  int32_t local_var_240;
  uint64_t local_var_238;
  int32_t local_var_230;
  int32_t local_var_22c;
  uint64_t local_var_228;
  int32_t local_var_220;
  uint64_t local_var_218;
  int32_t local_var_210;
  int32_t local_var_20c;
  uint64_t local_var_208;
  int32_t local_var_200;
  uint64_t local_var_1f8;
  int32_t local_var_1f0;
  int32_t local_var_1ec;
  uint64_t local_var_1e8;
  int32_t local_var_1e0;
  uint64_t local_var_1d8;
  int32_t local_var_1d0;
  int32_t local_var_1cc;
  uint64_t local_var_1c8;
  int32_t local_var_1c0;
  uint64_t local_var_1b8;
  int32_t local_var_1b0;
  int32_t local_var_1ac;
  int *piStack_1a8;
  int64_t lStack_1a0;
  int *piStack_198;
  uint64_t local_var_190;
  uint64_t local_var_188;
  int32_t local_var_180;
  int32_t local_var_17c;
  int *piStack_178;
  uint64_t local_var_170;
  int *piStack_168;
  int64_t lStack_160;
  uint64_t local_var_158;
  int32_t local_var_150;
  int32_t local_var_14c;
  uint64_t local_var_148;
  int32_t local_var_140;
  uint64_t local_var_138;
  int32_t local_var_130;
  int32_t local_var_12c;
  uint64_t local_var_128;
  int32_t local_var_120;
  uint64_t local_var_118;
  int32_t local_var_110;
  int32_t local_var_10c;
  uint64_t local_var_108;
  int32_t local_var_100;
  uint64_t local_var_f8;
  int32_t local_var_f0;
  int32_t local_var_ec;
  uint64_t local_var_e8;
  int32_t local_var_e0;
  uint64_t local_var_d8;
  int32_t local_var_d0;
  int32_t local_var_cc;
  uint64_t local_var_c8;
  int32_t local_var_c0;
  uint64_t local_var_b8;
  int32_t local_var_b0;
  int32_t local_var_ac;
  uint64_t local_var_a8;
  int32_t local_var_a0;
  uint64_t local_var_98;
  int32_t local_var_90;
  int32_t local_var_8c;
  uint64_t local_var_88;
  int32_t local_var_80;
  int *piStack_78;
  uint64_t local_var_70;
  int *piStack_68;
  int64_t lStack_60;
  lVar8 = system_parameter_buffer;
  local_var_4a8 = 0xfffffffffffffffe;
  puVar1 = param_2 + 0x4ff;
  pstack_special_x_8 = param_1;
  if (param_3 == '\0') {
    UtilitiesSystem_DataProcessor(system_parameter_buffer,param_2,puVar1);
    puVar2 = param_2 + 0x4da;
    UtilitiesSystem_DataProcessor(lVar8);
    puVar3 = param_2 + 0x4b5;
    UtilitiesSystem_DataProcessor(lVar8);
    UtilitiesSystem_DataProcessor(lVar8);
    UtilitiesSystem_DataProcessor(lVar8);
    UtilitiesSystem_DataProcessor(lVar8);
    UtilitiesSystem_DataProcessor(lVar8);
    UtilitiesSystem_DataProcessor(lVar8);
    UtilitiesSystem_DataProcessor(lVar8);
    UtilitiesSystem_DataProcessor(lVar8);
    UtilitiesSystem_DataProcessor(lVar8);
    UtilitiesSystem_DataProcessor(lVar8);
    function_0e4f90(lVar8);
    function_0e4ee0(lVar8);
    function_0e4ee0(lVar8);
    alStack_6e8[0] = 0;
    alStack_6e8[1] = 0;
    alStack_6e8[2] = 0;
    local_var_6d0 = 0x25;
    alStack_6c8[0] = 0;
    alStack_6c8[1] = 0;
    alStack_6c8[2] = 0;
    local_var_6b0 = 0x25;
    alStack_5e8[0] = 0;
    alStack_5e8[1] = 0;
    alStack_5e8[2] = 0;
    local_var_5d0 = 0x25;
    alStack_788[0] = 0;
    alStack_788[1] = 0;
    alStack_788[2] = 0;
    local_var_770 = 0x25;
    alStack_768[0] = 0;
    alStack_768[1] = 0;
    alStack_768[2] = 0;
    local_var_750 = 0x25;
    alStack_748[0] = 0;
    alStack_748[1] = 0;
    alStack_748[2] = 0;
    local_var_730 = 0x25;
    alStack_728[0] = 0;
    alStack_728[1] = 0;
    alStack_728[2] = 0;
    local_var_710 = 0x25;
    alStack_608[0] = 0;
    alStack_608[1] = 0;
    alStack_608[2] = 0;
    local_var_5f0 = 0x25;
    alStack_708[0] = 0;
    alStack_708[1] = 0;
    alStack_708[2] = 0;
    local_var_6f0 = 0x25;
    alStack_808[0] = 0;
    alStack_808[1] = 0;
    alStack_808[2] = 0;
    local_var_7f0 = 0x25;
    alStack_7e8[0] = 0;
    alStack_7e8[1] = 0;
    alStack_7e8[2] = 0;
    local_var_7d0 = 0x25;
    alStack_7c8[0] = 0;
    alStack_7c8[1] = 0;
    alStack_7c8[2] = 0;
    local_var_7b0 = 0x25;
    alStack_7a8[0] = 0;
    alStack_7a8[1] = 0;
    alStack_7a8[2] = 0;
    local_var_790 = 0x25;
    CoreEngine_DataValidator(puVar1,alStack_6e8);
    CoreEngine_DataValidator(puVar2,alStack_6c8);
    CoreEngine_DataValidator(puVar3,alStack_788);
    puVar4 = param_2 + 0x524;
    CoreEngine_DataValidator(puVar4,alStack_768);
    CoreEngine_DataValidator(param_2 + 0x46b,alStack_5e8);
    CoreEngine_DataValidator(param_2 + 0x3b2,alStack_748);
    CoreEngine_DataValidator(param_2 + 0x3d7,alStack_728);
    CoreEngine_DataValidator(param_2 + 0x56e,alStack_608);
    CoreEngine_DataValidator(param_2 + 0x446,alStack_708);
    CoreEngine_DataValidator(param_2 + 0x490,alStack_808);
    CoreEngine_DataValidator(param_2 + 0x549,alStack_7e8);
    CoreEngine_DataValidator(param_2 + 0x3fc,alStack_7c8);
    uVar14 = CoreEngine_DataValidator(param_2 + 0x421,alStack_7a8);
    local_var_4a0 = 0;
    if ((*(byte *)((int64_t)param_2 + 4) & 4) == 0) {
      local_var_230 = *(int32_t *)puVar1;
      local_var_22c = local_var_a40._4_4_;
      local_var_240 = 0;
      local_var_238 = puVar1;
      local_var_248 = puVar1;
      CoreEngine_SystemInitializer(&local_var_248,&local_var_238);
      local_var_250 = *(int32_t *)puVar2;
      local_var_24c = local_var_a40._4_4_;
      local_var_260 = 0;
      local_var_258 = puVar2;
      local_var_268 = puVar2;
      CoreEngine_SystemInitializer(&local_var_268,&local_var_258);
      local_var_270 = *(int32_t *)puVar3;
      local_var_26c = local_var_a40._4_4_;
      local_var_280 = 0;
      local_var_278 = puVar3;
      local_var_288 = puVar3;
      CoreEngine_SystemInitializer(&local_var_288,&local_var_278);
      local_var_290 = *(int32_t *)puVar4;
      local_var_28c = local_var_a40._4_4_;
      local_var_2a0 = 0;
      local_var_298 = puVar4;
      local_var_2a8 = puVar4;
      CoreEngine_SystemInitializer(&local_var_2a8,&local_var_298);
      local_var_2b8 = param_2 + 0x3b2;
      local_var_2b0 = *(int32_t *)local_var_2b8;
      local_var_2ac = local_var_a40._4_4_;
      local_var_2c0 = 0;
      local_var_2c8 = local_var_2b8;
      CoreEngine_SystemInitializer(&local_var_2c8,&local_var_2b8);
      local_var_2d8 = param_2 + 0x3d7;
      local_var_2d0 = *(int32_t *)local_var_2d8;
      local_var_2cc = local_var_a40._4_4_;
      local_var_2e0 = 0;
      local_var_2e8 = local_var_2d8;
      CoreEngine_SystemInitializer(&local_var_2e8,&local_var_2d8);
      local_var_158 = param_2 + 0x56e;
      local_var_150 = *(int32_t *)local_var_158;
      local_var_14c = local_var_a40._4_4_;
      local_var_140 = 0;
      local_var_148 = local_var_158;
      CoreEngine_SystemInitializer(&local_var_148,&local_var_158);
      local_var_138 = param_2 + 0x446;
      local_var_130 = *(int32_t *)local_var_138;
      local_var_12c = local_var_a40._4_4_;
      local_var_120 = 0;
      local_var_128 = local_var_138;
      CoreEngine_SystemInitializer(&local_var_128,&local_var_138);
      local_var_118 = param_2 + 0x490;
      local_var_110 = *(int32_t *)local_var_118;
      local_var_10c = local_var_a40._4_4_;
      local_var_100 = 0;
      local_var_108 = local_var_118;
      CoreEngine_SystemInitializer(&local_var_108,&local_var_118);
      local_var_f8 = param_2 + 0x46b;
      local_var_f0 = *(int32_t *)local_var_f8;
      local_var_ec = local_var_a40._4_4_;
      local_var_e0 = 0;
      local_var_e8 = local_var_f8;
      CoreEngine_SystemInitializer(&local_var_e8,&local_var_f8);
      local_var_d8 = param_2 + 0x549;
      local_var_d0 = *(int32_t *)local_var_d8;
      local_var_cc = local_var_a40._4_4_;
      local_var_c0 = 0;
      local_var_c8 = local_var_d8;
      CoreEngine_SystemInitializer(&local_var_c8,&local_var_d8);
      local_var_b8 = param_2 + 0x3fc;
      local_var_b0 = *(int32_t *)local_var_b8;
      local_var_ac = local_var_a40._4_4_;
      local_var_a0 = 0;
      local_var_a8 = local_var_b8;
      CoreEngine_SystemInitializer(&local_var_a8,&local_var_b8);
      local_var_98 = param_2 + 0x421;
      local_var_90 = *(int32_t *)local_var_98;
      local_var_a40 = (uint64_t **)CONCAT44(local_var_a40._4_4_,local_var_90);
      local_var_8c = local_var_a40._4_4_;
      local_var_80 = 0;
      local_var_88 = local_var_98;
      uVar14 = CoreEngine_SystemInitializer(&local_var_88,&local_var_98);
    }
    uVar14 = function_0e5110(uVar14,param_2,alStack_6e8);
    uVar14 = function_0e5110(uVar14,param_2,alStack_6c8);
    uVar14 = function_0e5110(uVar14,param_2,alStack_788);
    uVar14 = function_0e5110(uVar14,param_2,alStack_768);
    uVar14 = function_0e5110(uVar14,param_2,alStack_748);
    uVar14 = function_0e5110(uVar14,param_2,alStack_728);
    uVar14 = function_0e5110(uVar14,param_2,alStack_708);
    uVar14 = function_0e5110(uVar14,param_2,alStack_808);
    uVar14 = function_0e5110(uVar14,param_2,alStack_7e8);
    uVar14 = function_0e5110(uVar14,param_2,alStack_7c8);
    function_0e5110(uVar14,param_2,alStack_7a8);
    if (alStack_7a8[0] != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    if (alStack_7c8[0] != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    if (alStack_7e8[0] != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    if (alStack_808[0] != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    if (alStack_708[0] != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    if (alStack_608[0] != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    if (alStack_728[0] != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    if (alStack_748[0] != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    if (alStack_768[0] != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    if (alStack_788[0] != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    if (alStack_5e8[0] != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lVar11 = alStack_6e8[0];
    if (alStack_6c8[0] != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  else {
    UtilitiesSystem_DataProcessor(system_parameter_buffer,param_2,puVar1);
    puVar2 = param_2 + 0x4b5;
    UtilitiesSystem_DataProcessor(lVar8);
    local_var_490 = *(int32_t *)puVar1;
    iVar10 = 0;
    local_var_480 = 0;
    local_var_47c = local_var_a40._4_4_;
    local_var_498 = puVar1;
    local_var_488 = puVar1;
    CoreEngine_SystemInitializer(&local_var_488,&local_var_498);
    local_var_478 = param_2 + 0x4da;
    local_var_470 = *(int32_t *)local_var_478;
    local_var_46c = local_var_a40._4_4_;
    local_var_460 = 0;
    local_var_468 = local_var_478;
    CoreEngine_SystemInitializer(&local_var_468,&local_var_478);
    local_var_450 = *(int32_t *)puVar2;
    local_var_44c = local_var_a40._4_4_;
    local_var_440 = 0;
    local_var_458 = puVar2;
    local_var_448 = puVar2;
    CoreEngine_SystemInitializer(&local_var_448,&local_var_458);
    local_var_438 = param_2 + 0x524;
    local_var_430 = *(int32_t *)local_var_438;
    local_var_42c = local_var_a40._4_4_;
    local_var_420 = 0;
    local_var_428 = local_var_438;
    CoreEngine_SystemInitializer(&local_var_428,&local_var_438);
    local_var_418 = param_2 + 0x3b2;
    local_var_410 = *(int32_t *)local_var_418;
    local_var_40c = local_var_a40._4_4_;
    local_var_400 = 0;
    local_var_408 = local_var_418;
    CoreEngine_SystemInitializer(&local_var_408,&local_var_418);
    local_var_3f8 = param_2 + 0x46b;
    local_var_3f0 = *(int32_t *)local_var_3f8;
    local_var_3ec = local_var_a40._4_4_;
    local_var_3e0 = 0;
    local_var_3e8 = local_var_3f8;
    CoreEngine_SystemInitializer(&local_var_3e8,&local_var_3f8);
    local_var_3d8 = param_2 + 0x38d;
    local_var_3d0 = *(int32_t *)local_var_3d8;
    local_var_3cc = local_var_a40._4_4_;
    local_var_3c0 = 0;
    local_var_3c8 = local_var_3d8;
    CoreEngine_SystemInitializer(&local_var_3c8,&local_var_3d8);
    local_var_3b8 = param_2 + 0x3d7;
    local_var_3b0 = *(int32_t *)local_var_3b8;
    local_var_3ac = local_var_a40._4_4_;
    local_var_3a0 = 0;
    local_var_3a8 = local_var_3b8;
    CoreEngine_SystemInitializer(&local_var_3a8,&local_var_3b8);
    local_var_398 = param_2 + 0x56e;
    local_var_390 = *(int32_t *)local_var_398;
    local_var_38c = local_var_a40._4_4_;
    local_var_380 = 0;
    local_var_388 = local_var_398;
    CoreEngine_SystemInitializer(&local_var_388,&local_var_398);
    piVar12 = (int *)(param_2 + 0x3fc);
    iVar13 = *piVar12;
    local_var_a40 = (uint64_t **)CONCAT44(local_var_a40._4_4_,iVar13);
    uVar7 = local_var_a40;
    iVar9 = iVar13;
    if (iVar13 != 0) {
      for (; iVar9 != 0; iVar9 = iVar9 >> 1) {
        iVar10 = iVar10 + 1;
      }
      local_var_370 = local_var_a40;
      lVar11 = (uint64_t)local_var_a2c << 0x20;
      piStack_378 = piVar12;
      piStack_368 = piVar12;
      lStack_360 = lVar11;
      function_0eae10(&piStack_368,&piStack_378,(int64_t)(iVar10 + -1) * 2);
      if (iVar13 < 0x1d) {
        local_var_190 = local_var_a40;
        piStack_1a8 = piVar12;
        lStack_1a0 = lVar11;
        piStack_198 = piVar12;
        function_0e9df0(&piStack_1a8,&piStack_198);
      }
      else {
        local_var_350 = 0x1c;
        local_var_34c = local_var_a40._4_4_;
        piStack_168 = piVar12;
        lStack_160 = lVar11;
        local_var_358 = piVar12;
        function_0e9df0(&piStack_168,&local_var_358);
        local_var_a40 = (uint64_t **)CONCAT44(local_var_a40._4_4_,0x1c);
        local_var_170 = uVar7;
        local_var_180 = 0x1c;
        local_var_17c = local_var_a40._4_4_;
        piStack_178 = piVar12;
        local_var_188 = piVar12;
        function_0e9fd0(&local_var_188,&piStack_178);
      }
    }
    puVar1 = param_2 + 0x421;
    local_var_1b0 = *(int32_t *)puVar1;
    local_var_1ac = local_var_a40._4_4_;
    local_var_1c0 = 0;
    local_var_1b8 = puVar1;
    local_var_1c8 = puVar1;
    CoreEngine_SystemInitializer(&local_var_1c8,&local_var_1b8);
    puVar2 = param_2 + 0x446;
    local_var_1d0 = *(int32_t *)puVar2;
    local_var_1cc = local_var_a40._4_4_;
    local_var_1e0 = 0;
    local_var_1d8 = puVar2;
    local_var_1e8 = puVar2;
    CoreEngine_SystemInitializer(&local_var_1e8,&local_var_1d8);
    puVar3 = param_2 + 0x490;
    local_var_1f0 = *(int32_t *)puVar3;
    local_var_1ec = local_var_a40._4_4_;
    local_var_200 = 0;
    local_var_1f8 = puVar3;
    local_var_208 = puVar3;
    CoreEngine_SystemInitializer(&local_var_208,&local_var_1f8);
    puVar4 = param_2 + 0x549;
    local_var_210 = *(int32_t *)puVar4;
    local_var_20c = local_var_a40._4_4_;
    local_var_220 = 0;
    local_var_218 = puVar4;
    local_var_228 = puVar4;
    CoreEngine_SystemInitializer(&local_var_228,&local_var_218);
    UtilitiesSystem_DataProcessor(lVar8);
    UtilitiesSystem_DataProcessor(lVar8);
    UtilitiesSystem_DataProcessor(lVar8);
    UtilitiesSystem_DataProcessor(lVar8);
    UtilitiesSystem_DataProcessor(lVar8);
    UtilitiesSystem_DataProcessor(lVar8);
    UtilitiesSystem_DataProcessor(lVar8);
    UtilitiesSystem_DataProcessor(lVar8);
    UtilitiesSystem_DataProcessor(lVar8);
    UtilitiesSystem_DataProcessor(lVar8);
    UtilitiesSystem_DataProcessor(lVar8);
    function_0e4f90(lVar8);
    function_0e4ee0(lVar8);
    function_0e4ee0(lVar8);
    alStack_9c8[0] = 0;
    alStack_9c8[1] = 0;
    alStack_9c8[2] = 0;
    local_var_9b0 = 0x25;
    alStack_9a8[0] = 0;
    alStack_9a8[1] = 0;
    alStack_9a8[2] = 0;
    local_var_990 = 0x25;
    alStack_988[0] = 0;
    alStack_988[1] = 0;
    alStack_988[2] = 0;
    local_var_970 = 0x25;
    alStack_968[0] = 0;
    alStack_968[1] = 0;
    alStack_968[2] = 0;
    local_var_950 = 0x25;
    alStack_948[0] = 0;
    alStack_948[1] = 0;
    alStack_948[2] = 0;
    local_var_930 = 0x25;
    alStack_928[0] = 0;
    alStack_928[1] = 0;
    alStack_928[2] = 0;
    local_var_910 = 0x25;
    alStack_908[0] = 0;
    alStack_908[1] = 0;
    alStack_908[2] = 0;
    local_var_8f0 = 0x25;
    alStack_8e8[0] = 0;
    alStack_8e8[1] = 0;
    alStack_8e8[2] = 0;
    local_var_8d0 = 0x25;
    alStack_8c8[0] = 0;
    alStack_8c8[1] = 0;
    alStack_8c8[2] = 0;
    local_var_8b0 = 0x25;
    alStack_8a8[0] = 0;
    alStack_8a8[1] = 0;
    alStack_8a8[2] = 0;
    local_var_890 = 0x25;
    alStack_888[0] = 0;
    alStack_888[1] = 0;
    alStack_888[2] = 0;
    local_var_870 = 0x25;
    alStack_868[0] = 0;
    alStack_868[1] = 0;
    alStack_868[2] = 0;
    local_var_850 = 0x25;
    alStack_848[0] = 0;
    alStack_848[1] = 0;
    alStack_848[2] = 0;
    local_var_830 = 0x25;
    alStack_828[0] = 0;
    alStack_828[1] = 0;
    alStack_828[2] = 0;
    local_var_810 = 0x25;
    CoreEngine_DataValidator(param_2 + 0x4ff,alStack_9c8);
    CoreEngine_DataValidator(param_2 + 0x4da,alStack_9a8);
    CoreEngine_DataValidator(param_2 + 0x4b5,alStack_988);
    CoreEngine_DataValidator(param_2 + 0x524,alStack_948);
    CoreEngine_DataValidator(param_2 + 0x3b2,alStack_928);
    CoreEngine_DataValidator(param_2 + 0x38d,alStack_908);
    CoreEngine_DataValidator(param_2 + 0x3d7,alStack_8e8);
    CoreEngine_DataValidator(param_2 + 0x56e,alStack_8c8);
    CoreEngine_DataValidator(puVar2,alStack_868);
    CoreEngine_DataValidator(puVar3,alStack_848);
    CoreEngine_DataValidator(puVar4,alStack_828);
    CoreEngine_DataValidator(param_2 + 0x46b,alStack_968);
    CoreEngine_DataValidator(param_2 + 0x3fc,alStack_8a8);
    CoreEngine_DataValidator(puVar1,alStack_888);
    function_0e5180();
    function_0e5180();
    function_0e5180();
    function_0e5180();
    function_0e5180();
    function_0e5180();
    function_0e5180();
    function_0e5180();
    function_0e5180();
    function_0e5180();
    function_0e5180();
    function_0e5180();
    pstack_special_x_10 = &local_var_5c8;
    local_var_5c8 = alStack_9c8;
    local_var_5c0 = &pstack_special_x_8;
    plocal_var_5b8 = &ui_system_data_1264_ptr;
    pcStack_5b0 = CoreEngine_MemoryHandler;
    pstack_special_x_8 = param_2;
    CoreEngine_DataValidator();
    pstack_special_x_8 = &local_var_5a8;
    local_var_5a8 = alStack_9a8;
    local_var_5a0 = &pstack_special_x_10;
    plocal_var_598 = &ui_system_data_1264_ptr;
    pcStack_590 = CoreEngine_MemoryHandler;
    pstack_special_x_10 = param_2;
    CoreEngine_DataValidator();
    pstack_special_x_8 = &local_var_588;
    local_var_588 = alStack_988;
    local_var_580 = &plocal_var_9d0;
    plocal_var_578 = &ui_system_data_1264_ptr;
    pcStack_570 = CoreEngine_MemoryHandler;
    plocal_var_9d0 = param_2;
    CoreEngine_DataValidator();
    pstack_special_x_8 = &local_var_568;
    local_var_568 = alStack_948;
    local_var_560 = &plocal_var_a28;
    plocal_var_558 = &ui_system_data_1264_ptr;
    pcStack_550 = CoreEngine_MemoryHandler;
    plocal_var_a28 = param_2;
    CoreEngine_DataValidator();
    pstack_special_x_8 = &local_var_548;
    local_var_548 = alStack_928;
    local_var_540 = &plocal_var_a20;
    plocal_var_538 = &ui_system_data_1264_ptr;
    pcStack_530 = CoreEngine_MemoryHandler;
    plocal_var_a20 = param_2;
    CoreEngine_DataValidator();
    pstack_special_x_8 = &local_var_528;
    local_var_528 = alStack_908;
    local_var_520 = &plocal_var_a18;
    plocal_var_518 = &ui_system_data_1264_ptr;
    pcStack_510 = CoreEngine_MemoryHandler;
    plocal_var_a18 = param_2;
    CoreEngine_DataValidator();
    pstack_special_x_8 = &local_var_508;
    local_var_508 = alStack_8e8;
    local_var_500 = &plocal_var_a10;
    plocal_var_4f8 = &ui_system_data_1264_ptr;
    pcStack_4f0 = CoreEngine_MemoryHandler;
    plocal_var_a10 = param_2;
    CoreEngine_DataValidator();
    pstack_special_x_8 = &local_var_4e8;
    local_var_4e8 = alStack_8c8;
    local_var_4e0 = &plocal_var_a08;
    plocal_var_4d8 = &ui_system_data_1264_ptr;
    pcStack_4d0 = CoreEngine_MemoryHandler;
    plocal_var_a08 = param_2;
    CoreEngine_DataValidator();
    pstack_special_x_8 = &local_var_4c8;
    local_var_4c8 = alStack_868;
    local_var_4c0 = &plocal_var_a00;
    plocal_var_4b8 = &ui_system_data_1264_ptr;
    pcStack_4b0 = CoreEngine_MemoryHandler;
    plocal_var_a00 = param_2;
    CoreEngine_DataValidator();
    pstack_special_x_8 = &local_var_6a8;
    local_var_6a8 = alStack_848;
    local_var_6a0 = &plocal_var_9f8;
    plocal_var_698 = &ui_system_data_1264_ptr;
    pcStack_690 = CoreEngine_MemoryHandler;
    plocal_var_9f8 = param_2;
    CoreEngine_DataValidator();
    pstack_special_x_8 = &local_var_688;
    local_var_688 = alStack_828;
    local_var_680 = &plocal_var_9f0;
    plocal_var_678 = &ui_system_data_1264_ptr;
    pcStack_670 = CoreEngine_MemoryHandler;
    plocal_var_9f0 = param_2;
    CoreEngine_DataValidator();
    pstack_special_x_8 = &local_var_668;
    local_var_668 = alStack_968;
    local_var_660 = &plocal_var_9e8;
    plocal_var_658 = &ui_system_data_1264_ptr;
    pcStack_650 = CoreEngine_MemoryHandler;
    plocal_var_9e8 = param_2;
    CoreEngine_DataValidator();
    pstack_special_x_8 = &local_var_648;
    local_var_648 = alStack_8a8;
    local_var_640 = &plocal_var_9e0;
    plocal_var_638 = &ui_system_data_1264_ptr;
    pcStack_630 = CoreEngine_MemoryHandler;
    plocal_var_9e0 = param_2;
    CoreEngine_DataValidator();
    pstack_special_x_8 = &local_var_628;
    local_var_628 = alStack_888;
    local_var_a40 = &plocal_var_9d8;
    plocal_var_618 = &ui_system_data_1264_ptr;
    pcStack_610 = CoreEngine_MemoryHandler;
    plocal_var_9d8 = param_2;
    local_var_620 = local_var_a40;
    CoreEngine_DataValidator();
    if (param_2[0x69c] != 0) {
      function_2dd2b0(param_2[0x69c],param_2);
    }
    if (param_2[0x69b] != 0) {
      function_2dd2b0(param_2[0x69b],param_2);
    }
    if (alStack_828[0] != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    if (alStack_848[0] != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    if (alStack_868[0] != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    if (alStack_888[0] != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    if (alStack_8a8[0] != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    if (alStack_8c8[0] != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    if (alStack_8e8[0] != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    if (alStack_908[0] != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    if (alStack_928[0] != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    if (alStack_948[0] != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    if (alStack_968[0] != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    if (alStack_988[0] != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lVar11 = alStack_9c8[0];
    if (alStack_9a8[0] != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  iVar13 = 0;
  if (lVar11 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  if (*(char *)((int64_t)param_2 + 0x11c36) != '\0') {
    uVar7 = param_2[0x2551];
    *(uint64_t *)(lVar8 + 0x3cb8) = param_2[0x2550];
    *(uint64_t *)(lVar8 + 0x3cc0) = uVar7;
    uVar7 = param_2[0x2553];
    *(uint64_t *)(lVar8 + 0x3cc8) = param_2[0x2552];
    *(uint64_t *)(lVar8 + 0x3cd0) = uVar7;
    uVar7 = param_2[0x2555];
    *(uint64_t *)(lVar8 + 0x3cd8) = param_2[0x2554];
    *(uint64_t *)(lVar8 + 0x3ce0) = uVar7;
    uVar7 = param_2[0x2557];
    *(uint64_t *)(lVar8 + 0x3ce8) = param_2[0x2556];
    *(uint64_t *)(lVar8 + 0x3cf0) = uVar7;
    uVar7 = param_2[0x2579];
    *(uint64_t *)(lVar8 + 0x3cf8) = param_2[0x2578];
    *(uint64_t *)(lVar8 + 0x3d00) = uVar7;
    uVar7 = param_2[0x257b];
    *(uint64_t *)(lVar8 + 0x3d08) = param_2[0x257a];
    *(uint64_t *)(lVar8 + 0x3d10) = uVar7;
    uVar14 = *(int32_t *)((int64_t)param_2 + 0x12be4);
    uVar5 = *(int32_t *)(param_2 + 0x257d);
    uVar6 = *(int32_t *)((int64_t)param_2 + 0x12bec);
    *(int32_t *)(lVar8 + 0x3d18) = *(int32_t *)(param_2 + 0x257c);
    *(int32_t *)(lVar8 + 0x3d1c) = uVar14;
    *(int32_t *)(lVar8 + 0x3d20) = uVar5;
    *(int32_t *)(lVar8 + 0x3d24) = uVar6;
    uVar7 = param_2[0x257f];
    *(uint64_t *)(lVar8 + 0x3d28) = param_2[0x257e];
    *(uint64_t *)(lVar8 + 0x3d30) = uVar7;
  }
  piVar12 = (int *)(param_2 + 0x64c);
  if (*piVar12 != 0) {
    iVar10 = *piVar12;
    local_var_a40 = (uint64_t **)CONCAT44(local_var_a40._4_4_,iVar10);
    iVar9 = iVar10;
    if (iVar10 != 0) {
      for (; iVar9 != 0; iVar9 = iVar9 >> 1) {
        iVar13 = iVar13 + 1;
      }
      local_var_70 = local_var_a40;
      lVar8 = (uint64_t)local_var_a2c << 0x20;
      piStack_78 = piVar12;
      piStack_68 = piVar12;
      lStack_60 = lVar8;
      function_0eb050(&piStack_68,&piStack_78,(int64_t)(iVar13 + -1) * 2);
      if (iVar10 < 0x1d) {
        local_var_300 = local_var_a40;
        piStack_308 = piVar12;
        piStack_2f8 = piVar12;
        lStack_2f0 = lVar8;
        function_0ea190(&piStack_2f8,&piStack_308);
      }
      else {
        local_var_340 = 0x1c;
        local_var_33c = local_var_a40._4_4_;
        piStack_338 = piVar12;
        lStack_330 = lVar8;
        piStack_348 = piVar12;
        function_0ea190(&piStack_338,&piStack_348);
        local_var_320 = local_var_a40;
        local_var_310 = 0x1c;
        local_var_30c = local_var_a40._4_4_;
        piStack_328 = piVar12;
        piStack_318 = piVar12;
        function_0ea310(&piStack_318,&piStack_328);
      }
    }
  }
  return;
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address