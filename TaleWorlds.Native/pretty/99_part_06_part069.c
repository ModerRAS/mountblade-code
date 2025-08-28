#include "TaleWorlds.Native.Split.h"

// 99_part_06_part069.c - 3 个函数

// 函数: void FUN_1803e8ff0(longlong *param_1)
void FUN_1803e8ff0(longlong *param_1)

{
  code *pcVar1;
  char cVar2;
  int16_t uVar3;
  int32_t uVar4;
  int iVar5;
  int iVar6;
  uint64_t uVar7;
  longlong *plVar8;
  longlong **pplVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  uint64_t *puVar13;
  uint64_t *****pppppuVar14;
  ulonglong uVar15;
  void *puVar16;
  uint64_t *puVar17;
  int8_t auStack_3c8 [32];
  longlong **pplStack_3a8;
  int32_t uStack_398;
  longlong *plStack_390;
  longlong **pplStack_388;
  longlong lStack_380;
  void *puStack_378;
  int32_t *puStack_370;
  int32_t uStack_368;
  uint64_t uStack_360;
  uint *puStack_358;
  longlong lStack_350;
  longlong *plStack_348;
  longlong lStack_340;
  void *puStack_338;
  void *puStack_330;
  int32_t uStack_328;
  uint64_t uStack_320;
  uint64_t uStack_318;
  uint64_t uStack_310;
  uint64_t uStack_308;
  uint *puStack_300;
  longlong lStack_2f8;
  uint64_t uStack_2f0;
  uint uStack_2e8;
  int32_t uStack_2e4;
  int32_t uStack_2e0;
  int32_t uStack_2dc;
  uint64_t uStack_2d8;
  uint64_t uStack_2d0;
  longlong *plStack_2c8;
  uint64_t *puStack_2c0;
  uint64_t uStack_2b8;
  uint64_t uStack_2b0;
  longlong lStack_288;
  longlong lStack_280;
  uint64_t uStack_278;
  ulonglong uStack_270;
  uint64_t ****appppuStack_268 [2];
  ulonglong uStack_258;
  ulonglong uStack_250;
  int8_t auStack_248 [16];
  uint64_t uStack_238;
  uint64_t uStack_230;
  int8_t auStack_228 [16];
  uint64_t uStack_218;
  uint64_t uStack_210;
  uint64_t ****appppuStack_208 [2];
  ulonglong uStack_1f8;
  ulonglong uStack_1f0;
  char acStack_1e8 [8];
  longlong *plStack_1e0;
  uint64_t ****appppuStack_1d8 [3];
  ulonglong uStack_1c0;
  char acStack_1b8 [8];
  longlong *plStack_1b0;
  uint64_t ****appppuStack_1a8 [3];
  ulonglong uStack_190;
  char acStack_188 [8];
  longlong *plStack_180;
  uint64_t ****appppuStack_178 [3];
  ulonglong uStack_160;
  void *apuStack_158 [2];
  uint64_t uStack_148;
  uint64_t uStack_140;
  int8_t auStack_138 [16];
  uint64_t uStack_128;
  uint64_t uStack_120;
  uint64_t ***pppuStack_118;
  int32_t uStack_110;
  int32_t uStack_10c;
  ulonglong uStack_108;
  uint64_t uStack_100;
  int8_t auStack_f8 [16];
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t ***pppuStack_d8;
  uint64_t ***pppuStack_d0;
  ulonglong uStack_c8;
  uint64_t uStack_c0;
  int8_t auStack_b8 [128];
  ulonglong uStack_38;
  
  uStack_2f0 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_3c8;
  uStack_398 = 0;
  plVar8 = param_1 + 0x88;
  plVar12 = plVar8;
  if (0xf < (ulonglong)param_1[0x8b]) {
    plVar12 = (longlong *)*plVar8;
  }
  uVar7 = FUN_180627910(&plStack_2c8,plVar12);
  cVar2 = FUN_180624a00(uVar7);
  plStack_2c8 = (longlong *)&unknown_var_3456_ptr;
  if (puStack_2c0 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_2c0 = (uint64_t *)0x0;
  uStack_2b0 = (ulonglong)uStack_2b0._4_4_ << 0x20;
  plStack_2c8 = (longlong *)&unknown_var_720_ptr;
  if (cVar2 != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180062300(_DAT_180c86928,&unknown_var_9688_ptr);
  }
  if (0xf < (ulonglong)param_1[0x8b]) {
    plVar8 = (longlong *)*plVar8;
  }
  uVar7 = FUN_180627910(&plStack_2c8,plVar8);
  cVar2 = FUN_180624a00(uVar7);
  if (cVar2 == '\0') {
    FUN_180624910(uVar7);
  }
  plStack_2c8 = (longlong *)&unknown_var_3456_ptr;
  if (puStack_2c0 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_2c0 = (uint64_t *)0x0;
  uStack_2b0 = uStack_2b0 & 0xffffffff00000000;
  plStack_2c8 = (longlong *)&unknown_var_720_ptr;
  uVar4 = GetCurrentProcessId();
  FUN_1803f5570(appppuStack_268,uVar4);
  uStack_278 = 0;
  uStack_270 = 0xf;
  lStack_288._0_1_ = 0;
  uStack_398 = 4;
  FUN_1803f45e0(&lStack_288,uStack_258 + 7);
  FUN_1803f5400(&lStack_288,&unknown_var_9728_ptr,7);
  pppppuVar14 = appppuStack_268;
  if (0xf < uStack_250) {
    pppppuVar14 = (uint64_t *****)appppuStack_268[0];
  }
  FUN_1803f5400(&lStack_288,pppppuVar14,uStack_258);
  FUN_1803f3a40(appppuStack_208,&lStack_288,&unknown_var_9716_ptr);
  uStack_398 = 0;
  if (0xf < uStack_270) {
    uVar15 = uStack_270 + 1;
    lVar11 = CONCAT71(lStack_288._1_7_,(int8_t)lStack_288);
    lVar10 = lVar11;
    if (0xfff < uVar15) {
      uVar15 = uStack_270 + 0x28;
      lVar10 = *(longlong *)(lVar11 + -8);
      if (0x1f < (lVar11 - lVar10) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar10,uVar15);
  }
  uStack_278 = 0;
  uStack_270 = 0xf;
  lStack_288._0_1_ = 0;
  uStack_148 = 0;
  uStack_140 = 0xf;
  apuStack_158[0] = (void *)((ulonglong)apuStack_158[0] & 0xffffffffffffff00);
  FUN_1800671b0(apuStack_158,&unknown_var_9736_ptr,10);
  uStack_128 = 0;
  uStack_120 = 0xf;
  auStack_138[0] = 0;
  FUN_1800671b0(auStack_138,&unknown_var_9960_ptr,0x10);
  uStack_108 = 0;
  uStack_100 = 0;
  pppppuVar14 = appppuStack_208;
  if (0xf < uStack_1f0) {
    pppppuVar14 = (uint64_t *****)appppuStack_208[0];
  }
  if (0xf < uStack_1f8) {
    uVar15 = uStack_1f8 | 0xf;
    if (0x7fffffffffffffff < uVar15) {
      uVar15 = 0x7fffffffffffffff;
    }
    pppuStack_118 = (uint64_t ***)FUN_180067110(uVar15 + 1);
                    // WARNING: Subroutine does not return
    memcpy(pppuStack_118,pppppuVar14,uStack_1f8 + 1);
  }
  pppuStack_118 = *pppppuVar14;
  uStack_110 = *(int32_t *)(pppppuVar14 + 1);
  uStack_10c = *(int32_t *)((longlong)pppppuVar14 + 0xc);
  uStack_100 = 0xf;
  uStack_108 = uStack_1f8;
  uStack_e8 = 0;
  uStack_e0 = 0xf;
  auStack_f8[0] = 0;
  FUN_1800671b0(auStack_f8,&unknown_var_9984_ptr,7);
  uStack_c8 = 0;
  uStack_c0 = 0;
  pppppuVar14 = appppuStack_268;
  if (0xf < uStack_250) {
    pppppuVar14 = (uint64_t *****)appppuStack_268[0];
  }
  if (0xf < uStack_258) {
    uVar15 = uStack_258 | 0xf;
    if (0x7fffffffffffffff < uVar15) {
      uVar15 = 0x7fffffffffffffff;
    }
    pppuStack_d8 = (uint64_t ***)FUN_180067110(uVar15 + 1);
                    // WARNING: Subroutine does not return
    memcpy(pppuStack_d8,pppppuVar14,uStack_258 + 1);
  }
  pppuStack_d8 = *pppppuVar14;
  pppuStack_d0 = pppppuVar14[1];
  uStack_c0 = 0xf;
  uStack_c8 = uStack_258;
  uStack_318 = 0;
  uStack_310 = 0;
  uStack_308 = 0;
  FUN_1803f4370(&uStack_318,apuStack_158,auStack_b8);
  FUN_1808fc8a8(apuStack_158,0x20,5,FUN_1800670d0);
  plVar8 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,8,8,3);
  puStack_300 = &uStack_2e8;
  uStack_2d8 = 0;
  uStack_2d0 = 0xf;
  uStack_2e8 = uStack_2e8 & 0xffffff00;
  plStack_390 = plVar8;
  FUN_1800671b0(&uStack_2e8,&system_buffer_ptr,0);
  puStack_358 = &uStack_2e8;
  plStack_348 = &lStack_288;
  pplVar9 = (longlong **)FUN_1803f3000(&lStack_288,&uStack_318);
  pplStack_388 = pplVar9;
  plStack_348 = (longlong *)FUN_1808fc418(0x48);
  *plStack_348 = 0;
  plStack_348[1] = 0;
  plStack_348[2] = 0;
  *plStack_348 = (longlong)*pplVar9;
  plStack_348[1] = (longlong)pplVar9[1];
  plStack_348[2] = (longlong)pplVar9[2];
  *pplVar9 = (longlong *)0x0;
  pplVar9[1] = (longlong *)0x0;
  pplVar9[2] = (longlong *)0x0;
  plStack_348[5] = 0;
  plStack_348[6] = 0;
  *(uint *)(plStack_348 + 3) = uStack_2e8;
  *(int32_t *)((longlong)plStack_348 + 0x1c) = uStack_2e4;
  *(int32_t *)(plStack_348 + 4) = uStack_2e0;
  *(int32_t *)((longlong)plStack_348 + 0x24) = uStack_2dc;
  *(int32_t *)(plStack_348 + 5) = (int32_t)uStack_2d8;
  *(int32_t *)((longlong)plStack_348 + 0x2c) = uStack_2d8._4_4_;
  *(int32_t *)(plStack_348 + 6) = (int32_t)uStack_2d0;
  *(int32_t *)((longlong)plStack_348 + 0x34) = uStack_2d0._4_4_;
  uStack_2d8 = 0;
  uStack_2d0 = 0xf;
  uStack_2e8 = uStack_2e8 & 0xffffff00;
  plStack_348[7] = 0;
  plStack_348[8] = 0;
  uStack_398 = 0x70;
  *plVar8 = (longlong)plStack_348;
  FUN_1803f32c0(pplVar9);
  FUN_180067070(&uStack_2e8);
  param_1[0x2f] = (longlong)plVar8;
  FUN_180481b70(plVar8,acStack_188);
  if (acStack_188[0] != '\0') {
    pppppuVar14 = appppuStack_178;
    if (0xf < uStack_160) {
      pppppuVar14 = (uint64_t *****)appppuStack_178[0];
    }
                    // WARNING: Subroutine does not return
    FUN_180062300(_DAT_180c86928,&unknown_var_9992_ptr,pppppuVar14);
  }
  uVar3 = FUN_1803e87c0(appppuStack_208,param_1[0x2f]);
  uVar7 = FUN_18062b1e0(_DAT_180c8ed18,8,8,3);
  uStack_2d8 = 0;
  uStack_2d0 = 0xf;
  uStack_2e8 = uStack_2e8 & 0xffffff00;
  FUN_1800671b0(&uStack_2e8,&unknown_var_24_ptr,9);
  lVar10 = FUN_180482310(uVar7,&uStack_2e8,uVar3);
  param_1[0x30] = lVar10;
  if (0xf < uStack_2d0) {
    uVar15 = uStack_2d0 + 1;
    lVar11 = CONCAT44(uStack_2e4,uStack_2e8);
    lVar10 = lVar11;
    if (0xfff < uVar15) {
      uVar15 = uStack_2d0 + 0x28;
      lVar10 = *(longlong *)(lVar11 + -8);
      if (0x1f < (lVar11 - lVar10) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar10,uVar15);
  }
  uStack_2d8 = 0;
  uStack_2d0 = 0xf;
  uStack_2e8 = uStack_2e8 & 0xffffff00;
  FUN_180482450(param_1[0x30],acStack_1b8);
  if (acStack_1b8[0] != '\0') {
    pppppuVar14 = appppuStack_1a8;
    if (0xf < uStack_190) {
      pppppuVar14 = (uint64_t *****)appppuStack_1a8[0];
    }
                    // WARNING: Subroutine does not return
    FUN_180062300(_DAT_180c86928,&unknown_var_9992_ptr,pppppuVar14);
  }
  plVar8 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,8,8,3);
  *plVar8 = param_1[0x30];
  param_1[0x31] = (longlong)plVar8;
  uVar7 = FUN_18062b1e0(_DAT_180c8ed18,8,8,3);
  uStack_2d8 = 0;
  uStack_2d0 = 0xf;
  uStack_2e8 = uStack_2e8 & 0xffffff00;
  FUN_1800671b0(&uStack_2e8,&unknown_var_24_ptr,9);
  lVar10 = FUN_180482310(uVar7,&uStack_2e8,uVar3);
  param_1[0x32] = lVar10;
  if (0xf < uStack_2d0) {
    uVar15 = uStack_2d0 + 1;
    lVar11 = CONCAT44(uStack_2e4,uStack_2e8);
    lVar10 = lVar11;
    if (0xfff < uVar15) {
      uVar15 = uStack_2d0 + 0x28;
      lVar10 = *(longlong *)(lVar11 + -8);
      if (0x1f < (lVar11 - lVar10) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar10,uVar15);
  }
  uStack_2d8 = 0;
  uStack_2d0 = 0xf;
  uStack_2e8 = uStack_2e8 & 0xffffff00;
  FUN_180482450(param_1[0x32],acStack_1e8);
  if (acStack_1e8[0] != '\0') {
    pppppuVar14 = appppuStack_1d8;
    if (0xf < uStack_1c0) {
      pppppuVar14 = (uint64_t *****)appppuStack_1d8[0];
    }
                    // WARNING: Subroutine does not return
    FUN_180062300(_DAT_180c86928,&unknown_var_9992_ptr,pppppuVar14);
  }
  plVar8 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,8,8,3);
  *plVar8 = param_1[0x32];
  param_1[0x33] = (longlong)plVar8;
  plStack_348 = (longlong *)0x0;
  lStack_340 = 0;
  pplStack_388 = &plStack_2c8;
  FUN_1803f2eb0(&plStack_2c8);
  FUN_1804724f0(&puStack_358,&plStack_2c8);
  uStack_2d8 = 0;
  uStack_2d0 = 0xf;
  uStack_2e8 = uStack_2e8 & 0xffffff00;
  FUN_1800671b0(&uStack_2e8,&unknown_var_9912_ptr,8);
  pplStack_3a8 = &plStack_348;
  FUN_1803e8510(param_1[0x33],0,&uStack_2e8,&puStack_358);
  if (0xf < uStack_2d0) {
    uVar15 = uStack_2d0 + 1;
    lVar11 = CONCAT44(uStack_2e4,uStack_2e8);
    lVar10 = lVar11;
    if (0xfff < uVar15) {
      uVar15 = uStack_2d0 + 0x28;
      lVar10 = *(longlong *)(lVar11 + -8);
      if (0x1f < (lVar11 - lVar10) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar10,uVar15);
  }
  uStack_2d8 = 0;
  uStack_2d0 = 0xf;
  uStack_2e8 = uStack_2e8 & 0xffffff00;
  if (lStack_350 != 0) {
    FUN_1803f53b0();
  }
  plStack_390 = (longlong *)
                FUN_1800a1160(_cout_std__3V__basic_ostream_DU__char_traits_D_std___1_A_exref,
                              &unknown_var_336_ptr);
  uStack_2b8 = 0;
  uStack_2b0 = 0xf;
  plStack_2c8 = (longlong *)((ulonglong)plStack_2c8 & 0xffffffffffffff00);
  FUN_1800671b0(&plStack_2c8,&unknown_var_9952_ptr,3);
  plVar8 = plStack_348;
  lVar10 = 0x180d49d50;
  if ((plStack_348 != (longlong *)0x0) &&
     (lVar11 = (**(code **)(*plStack_348 + 8))(plStack_348,0x180d48ef0), lVar11 != 0)) {
    lVar10 = lVar11;
  }
  uVar7 = FUN_180472900(lVar10,&lStack_288,&plStack_2c8);
  uStack_398 = 0xf0;
  uStack_218 = 0;
  uStack_210 = 0xf;
  auStack_228[0] = 0;
  FUN_1800671b0(auStack_228,&unknown_var_3436_ptr,6);
  plVar12 = (longlong *)FUN_180472640(uVar7,&puStack_300,auStack_228);
  plVar12 = (longlong *)*plVar12;
  puVar17 = (uint64_t *)&system_data_c170;
  if ((plVar12 != (longlong *)0x0) &&
     (puVar13 = (uint64_t *)(**(code **)(*plVar12 + 8))(plVar12,0x180d48ef4),
     puVar13 != (uint64_t *)0x0)) {
    puVar17 = puVar13;
  }
  puVar13 = puVar17 + 2;
  if (0xf < (ulonglong)puVar17[3]) {
    puVar17 = (uint64_t *)*puVar17;
  }
  uVar7 = FUN_1803f4790(plStack_390,puVar17,*puVar13);
  plStack_390 = (longlong *)FUN_1800a1160(uVar7,&unknown_var_9936_ptr);
  uStack_238 = 0;
  uStack_230 = 0xf;
  auStack_248[0] = 0;
  FUN_1800671b0(auStack_248,&unknown_var_9928_ptr,7);
  lVar10 = 0x180d49d50;
  if ((plVar8 != (longlong *)0x0) &&
     (lVar11 = (**(code **)(*plVar8 + 8))(plVar8,0x180d48ef0), lVar11 != 0)) {
    lVar10 = lVar11;
  }
  uVar7 = FUN_180472900(lVar10,&puStack_358,auStack_248);
  uStack_398 = 0x1f0;
  uStack_2d8 = 0;
  uStack_2d0 = 0xf;
  uStack_2e8 = uStack_2e8 & 0xffffff00;
  FUN_1800671b0(&uStack_2e8,&unknown_var_3436_ptr,6);
  plVar8 = (longlong *)FUN_180472640(uVar7,&pplStack_388,&uStack_2e8);
  plVar8 = (longlong *)*plVar8;
  puVar17 = (uint64_t *)&system_data_c170;
  if ((plVar8 != (longlong *)0x0) &&
     (puVar13 = (uint64_t *)(**(code **)(*plVar8 + 8))(plVar8,0x180d48ef4),
     puVar13 != (uint64_t *)0x0)) {
    puVar17 = puVar13;
  }
  puVar13 = puVar17 + 2;
  if (0xf < (ulonglong)puVar17[3]) {
    puVar17 = (uint64_t *)*puVar17;
  }
  uVar7 = FUN_1803f4790(plStack_390,puVar17,*puVar13);
  __6__basic_ostream_DU__char_traits_D_std___std__QEAAAEAV01_P6AAEAV01_AEAV01__Z_Z
            (uVar7,FUN_1801e7680);
  if (lStack_380 != 0) {
    FUN_1803f53b0();
  }
  FUN_180067070(&uStack_2e8);
  uStack_398 = 0xf0;
  if (lStack_350 != 0) {
    FUN_1803f53b0();
  }
  FUN_180067070(auStack_248);
  if (lStack_2f8 != 0) {
    FUN_1803f53b0();
  }
  FUN_180067070(auStack_228);
  uStack_398 = 0x70;
  if (lStack_280 != 0) {
    FUN_1803f53b0();
  }
  FUN_180067070(&plStack_2c8);
  puStack_378 = &unknown_var_3456_ptr;
  uStack_360 = 0;
  puStack_370 = (int32_t *)0x0;
  uStack_368 = 0;
  FUN_1806277c0(&puStack_378,6);
  *puStack_370 = 0x64616853;
  *(int16_t *)(puStack_370 + 1) = 0x7265;
  *(int8_t *)((longlong)puStack_370 + 6) = 0;
  uStack_368 = 6;
  puStack_338 = &unknown_var_3456_ptr;
  uStack_320 = 0;
  puStack_330 = (void *)0x0;
  uStack_328 = 0;
  cVar2 = FUN_180624be0(&puStack_338);
  if (cVar2 != '\0') {
    puVar16 = &system_buffer_ptr;
    if (puStack_330 != (void *)0x0) {
      puVar16 = puStack_330;
    }
    FUN_180628040(&puStack_378,&unknown_var_352_ptr,puVar16);
  }
  if ((int)param_1[0x9a] != 0) {
    puVar16 = &system_buffer_ptr;
    if ((void *)param_1[0x99] != (void *)0x0) {
      puVar16 = (void *)param_1[0x99];
    }
    FUN_180628040(&puStack_378,&unknown_var_352_ptr,puVar16);
  }
  lVar10 = FUN_1806240a0(apuStack_158);
  plVar8 = param_1 + 0x40;
  *(int32_t *)(param_1 + 0x42) = *(int32_t *)(lVar10 + 0x10);
  puVar16 = &system_buffer_ptr;
  if (*(void **)(lVar10 + 8) != (void *)0x0) {
    puVar16 = *(void **)(lVar10 + 8);
  }
  strcpy_s(param_1[0x41],0x100,puVar16);
  apuStack_158[0] = &unknown_var_720_ptr;
  func_0x000180629c90(plVar8);
  iVar6 = (int)param_1[0x9a];
  if (iVar6 == 5) {
    lVar10 = 0;
    do {
      lVar11 = lVar10 + 1;
      if (*(char *)(param_1[0x99] + lVar10) != (&unknown_var_9540_ptr)[lVar10]) goto LAB_1803e9ce0;
      lVar10 = lVar11;
    } while (lVar11 != 6);
    puVar16 = &unknown_var_368_ptr;
  }
  else {
LAB_1803e9ce0:
    if ((iVar6 == 8) && (iVar5 = strcmp(param_1[0x99],&unknown_var_9776_ptr), iVar5 == 0)) {
      puVar16 = &unknown_var_448_ptr;
    }
    else if (iVar6 == 7) {
      lVar10 = 0;
      do {
        lVar11 = lVar10 + 1;
        if (*(char *)(param_1[0x99] + lVar10) != (&unknown_var_9584_ptr)[lVar10]) goto LAB_1803e9d62;
        lVar10 = lVar11;
      } while (lVar11 != 8);
      func_0x0001800696a0(param_1 + 99,plVar8);
      FUN_1803f31b0(plVar8,&unknown_var_40_ptr);
      puVar16 = &unknown_var_112_ptr;
      plVar8 = param_1 + 99;
    }
    else {
LAB_1803e9d62:
      if ((iVar6 == 8) && (iVar6 = strcmp(param_1[0x99],&unknown_var_9552_ptr), iVar6 == 0)) {
        func_0x0001800696a0(param_1 + 99,plVar8);
        FUN_1803f31b0(plVar8,&unknown_var_192_ptr);
        puVar16 = &unknown_var_256_ptr;
        plVar8 = param_1 + 99;
      }
      else {
        puVar16 = &unknown_var_592_ptr;
      }
    }
  }
  FUN_1803f31b0(plVar8,puVar16);
  uVar7 = _DAT_180c82868;
  plStack_2c8 = (longlong *)&unknown_var_7512_ptr;
  puStack_2c0 = &uStack_2b0;
  uStack_2b0 = uStack_2b0 & 0xffffffffffffff00;
  uStack_2b8 = CONCAT44((int)((ulonglong)uStack_2b8 >> 0x20),10);
  strcpy_s(&uStack_2b0,0x10,&unknown_var_656_ptr);
  lVar10 = FUN_18005e4d0(uVar7,&plStack_2c8);
  param_1[0x96] = lVar10;
  plStack_2c8 = (longlong *)&unknown_var_720_ptr;
  pplVar9 = (longlong **)FUN_18062b1e0(_DAT_180c8ed18,0xd8,8,3);
  plVar8 = (longlong *)param_1[0x96];
  pplStack_388 = pplVar9;
  FUN_180049830(pplVar9);
  *pplVar9 = (longlong *)&unknown_var_2232_ptr;
  pplVar9[0x18] = plVar8;
  *(int8_t *)(pplVar9 + 0x1a) = 0;
  pplVar9[0x19] = param_1;
  FUN_180056f10(param_1 + 0x97,pplVar9);
  puVar17 = (uint64_t *)param_1[0x96];
  pcVar1 = *(code **)*puVar17;
  pplStack_388 = &plStack_390;
  plStack_390 = (longlong *)param_1[0x97];
  if (plStack_390 != (longlong *)0x0) {
    (**(code **)(*plStack_390 + 0x28))();
  }
  (*pcVar1)(puVar17,&plStack_390);
  lVar10 = FUN_18004b100(&plStack_2c8);
  puVar16 = &system_buffer_ptr;
  if (*(void **)(lVar10 + 8) != (void *)0x0) {
    puVar16 = *(void **)(lVar10 + 8);
  }
  FUN_180628040(param_1 + 0x9c,&unknown_var_672_ptr,puVar16);
  FUN_180627b90(&plStack_2c8);
  FUN_18062c1e0(param_1 + 0x9c,1);
  lVar10 = FUN_18004b100(&plStack_2c8);
  puVar16 = &system_buffer_ptr;
  if (*(void **)(lVar10 + 8) != (void *)0x0) {
    puVar16 = *(void **)(lVar10 + 8);
  }
  FUN_180628040(param_1 + 0xa0,&unknown_var_688_ptr,puVar16);
  FUN_180627b90(&plStack_2c8);
  FUN_18062c1e0(param_1 + 0xa0,1);
  FUN_180627b90(&puStack_338);
  FUN_180627b90(&puStack_378);
  if (lStack_340 != 0) {
    FUN_1803f53b0();
  }
  if (acStack_1e8[0] != '\0') {
    pplStack_388 = &plStack_1e0;
    FUN_180067070(appppuStack_1d8);
  }
  if (acStack_1b8[0] != '\0') {
    pplStack_388 = &plStack_1b0;
    FUN_180067070(appppuStack_1a8);
  }
  if (acStack_188[0] != '\0') {
    pplStack_388 = &plStack_180;
    FUN_180067070(appppuStack_178);
  }
  FUN_1803f32c0(&uStack_318);
  FUN_180067070(appppuStack_208);
  FUN_180067070(appppuStack_268);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_3c8);
}






// 函数: void FUN_1803ea020(longlong param_1)
void FUN_1803ea020(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return;
}






// 函数: void FUN_1803ea080(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803ea080(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 != 0) {
    uVar1 = (*(longlong *)(param_1 + 0x28) - lVar2 >> 3) * 8;
    lVar3 = lVar2;
    if (0xfff < uVar1) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar3) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn
                  (lVar2 - lVar3,uVar1 + 0x27,lVar3,param_4,0xfffffffffffffffe);
      }
    }
    free(lVar3);
    *(uint64_t *)(param_1 + 0x18) = 0;
    *(uint64_t *)(param_1 + 0x20) = 0;
    *(uint64_t *)(param_1 + 0x28) = 0;
  }
  FUN_1803f33b0((uint64_t *)(param_1 + 8));
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(*(uint64_t *)(param_1 + 8),0x40);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




