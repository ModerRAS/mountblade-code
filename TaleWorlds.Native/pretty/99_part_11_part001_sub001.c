#include "TaleWorlds.Native.Split.h"

// 99_part_11_part001_sub001.c - 2 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_11_part001.c - 3 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_11.c - 500 个函数



// 函数: void FUN_1806d4450(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_1806d4450(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int32_t *param_5,uint64_t param_6)

{
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  uint64_t uStack_18;
  
  uStack_28 = *param_5;
  uStack_24 = param_5[1];
  uStack_20 = param_5[2];
  uStack_1c = param_5[3];
  uStack_18 = *(uint64_t *)(param_5 + 4);
  FUN_1806c3420(&uStack_28,param_3,param_2,param_4,param_6);
  return;
}



uint64_t FUN_1806d44a0(void)

{
  int64_t *in_R9;
  
  (**(code **)(*in_R9 + 0x18))(in_R9);
  return 1;
}



bool FUN_1806d44c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4,
                  uint64_t *param_5,uint64_t param_6)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  bool bVar5;
  uint64_t uStackX_10;
  uint64_t *puStack_468;
  int64_t lStack_460;
  uint64_t uStack_458;
  uint64_t *puStack_450;
  int64_t lStack_448;
  uint64_t uStack_440;
  uint64_t **ppuStack_438;
  uint64_t **ppuStack_430;
  uint64_t uStack_428;
  uint64_t uStack_420;
  uint64_t uStack_418;
  uint64_t uStack_410;
  uint64_t uStack_408;
  int64_t *plStack_400;
  uint64_t uStack_3f8;
  int8_t uStack_3f0;
  uint64_t *puStack_3e8;
  uint64_t uStack_3e0;
  uint64_t uStack_3d8;
  int8_t auStack_3c8 [944];
  
  uVar2 = *param_5;
  uVar3 = param_5[1];
  uVar1 = param_5[2];
  uStackX_10 = (**(code **)(*param_4 + 0x18))();
  puStack_450 = &uStackX_10;
  lStack_448 = 0;
  puStack_468 = &uStackX_10;
  uStack_440 = 0;
  lStack_460 = 0;
  uStack_458 = 0;
  FUN_1806f3080(auStack_3c8);
  uVar4 = param_6;
  ppuStack_438 = &puStack_450;
  ppuStack_430 = &puStack_468;
  param_5._0_1_ = '\0';
  puStack_3e8 = &param_5;
  uStack_3f8 = param_6;
  uStack_3f0 = 1;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  uStack_428 = uVar2;
  uStack_420 = uVar3;
  uStack_418 = uVar1;
  uStack_410 = param_3;
  uStack_408 = param_2;
  plStack_400 = param_4;
  FUN_1806c7b80(auStack_3c8,&ppuStack_438,0);
  ppuStack_438 = &puStack_450;
  ppuStack_430 = &puStack_468;
  puStack_3e8 = &param_5;
  uStack_3f8 = uVar4;
  uStack_3f0 = 1;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  uStack_428 = uVar2;
  uStack_420 = uVar3;
  uStack_418 = uVar1;
  uStack_410 = param_3;
  uStack_408 = param_2;
  plStack_400 = param_4;
  FUN_1806c7280(auStack_3c8,&ppuStack_438,0);
  bVar5 = (char)param_5 == '\0';
  if ((((uStack_458 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)uStack_458)) && (lStack_460 != 0)
     ) {
    (**(code **)(*(int64_t *)*puStack_468 + 0x10))();
  }
  if ((((uStack_440 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)uStack_440)) && (lStack_448 != 0)
     ) {
    (**(code **)(*(int64_t *)*puStack_450 + 0x10))();
  }
  return bVar5;
}



bool FUN_1806d4680(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4,
                  uint64_t *param_5,uint64_t param_6)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  bool bVar5;
  uint64_t uStackX_10;
  uint64_t *puStack_3a8;
  int64_t lStack_3a0;
  uint64_t uStack_398;
  uint64_t *puStack_390;
  int64_t lStack_388;
  uint64_t uStack_380;
  uint64_t **ppuStack_378;
  uint64_t **ppuStack_370;
  uint64_t uStack_368;
  uint64_t uStack_360;
  uint64_t uStack_358;
  uint64_t uStack_350;
  uint64_t uStack_348;
  int64_t *plStack_340;
  uint64_t uStack_338;
  int8_t uStack_330;
  uint64_t *puStack_328;
  uint64_t uStack_320;
  uint64_t uStack_318;
  int8_t auStack_308 [752];
  
  uVar2 = *param_5;
  uVar3 = param_5[1];
  uVar1 = param_5[2];
  uStackX_10 = (**(code **)(*param_4 + 0x18))();
  puStack_390 = &uStackX_10;
  lStack_388 = 0;
  puStack_3a8 = &uStackX_10;
  uStack_380 = 0;
  lStack_3a0 = 0;
  uStack_398 = 0;
  FUN_1806f3440(auStack_308);
  uVar4 = param_6;
  ppuStack_378 = &puStack_390;
  ppuStack_370 = &puStack_3a8;
  param_5._0_1_ = '\0';
  puStack_328 = &param_5;
  uStack_338 = param_6;
  uStack_330 = 1;
  uStack_320 = 0;
  uStack_318 = 0;
  uStack_368 = uVar2;
  uStack_360 = uVar3;
  uStack_358 = uVar1;
  uStack_350 = param_3;
  uStack_348 = param_2;
  plStack_340 = param_4;
  FUN_1806c8540(auStack_308,&ppuStack_378,0);
  ppuStack_378 = &puStack_390;
  ppuStack_370 = &puStack_3a8;
  puStack_328 = &param_5;
  uStack_338 = uVar4;
  uStack_330 = 1;
  uStack_320 = 0;
  uStack_318 = 0;
  uStack_368 = uVar2;
  uStack_360 = uVar3;
  uStack_358 = uVar1;
  uStack_350 = param_3;
  uStack_348 = param_2;
  plStack_340 = param_4;
  FUN_1806c81b0(auStack_308,&ppuStack_378,0);
  bVar5 = (char)param_5 == '\0';
  if ((((uStack_398 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)uStack_398)) && (lStack_3a0 != 0)
     ) {
    (**(code **)(*(int64_t *)*puStack_3a8 + 0x10))();
  }
  if ((((uStack_380 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)uStack_380)) && (lStack_388 != 0)
     ) {
    (**(code **)(*(int64_t *)*puStack_390 + 0x10))();
  }
  return bVar5;
}



int8_t
FUN_1806d4840(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4,
             uint64_t *param_5,uint64_t param_6)

{
  int8_t uVar1;
  uint64_t *puStack_298;
  int64_t lStack_290;
  uint64_t uStack_288;
  uint64_t *puStack_280;
  int64_t lStack_278;
  uint64_t uStack_270;
  uint64_t uStack_268;
  uint64_t uStack_258;
  uint64_t uStack_250;
  uint64_t uStack_248;
  int8_t auStack_238 [560];
  
  uStack_258 = *param_5;
  uStack_250 = param_5[1];
  uStack_268 = param_5[2];
  param_5 = (uint64_t *)(**(code **)(*param_4 + 0x18))();
  puStack_280 = &param_5;
  lStack_278 = 0;
  puStack_298 = &param_5;
  uStack_270 = 0;
  lStack_290 = 0;
  uStack_288 = 0;
  FUN_1806f3850(auStack_238);
  uStack_248 = uStack_268;
  uVar1 = FUN_1806c3a70(&uStack_258,&puStack_280,&puStack_298,param_3,param_2,param_4,param_6,
                        auStack_238);
  if ((((uStack_288 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)uStack_288)) && (lStack_290 != 0)
     ) {
    (**(code **)(*(int64_t *)*puStack_298 + 0x10))();
  }
  if ((((uStack_270 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)uStack_270)) && (lStack_278 != 0)
     ) {
    (**(code **)(*(int64_t *)*puStack_280 + 0x10))();
  }
  return uVar1;
}



bool FUN_1806d4980(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4,
                  uint64_t *param_5,uint64_t param_6)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  bool bVar4;
  uint64_t uStackX_10;
  uint64_t *puStack_1d8;
  int64_t lStack_1d0;
  uint64_t uStack_1c8;
  uint64_t *puStack_1c0;
  int64_t lStack_1b8;
  uint64_t uStack_1b0;
  uint64_t **ppuStack_1a8;
  uint64_t **ppuStack_1a0;
  uint64_t uStack_198;
  uint64_t uStack_190;
  uint64_t uStack_188;
  uint64_t uStack_180;
  uint64_t uStack_178;
  int64_t *plStack_170;
  uint64_t uStack_168;
  int8_t uStack_160;
  uint64_t *puStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  int8_t auStack_138 [304];
  
  uVar2 = *param_5;
  uVar3 = param_5[1];
  uVar1 = param_5[2];
  uStackX_10 = (**(code **)(*param_4 + 0x18))();
  puStack_1c0 = &uStackX_10;
  lStack_1b8 = 0;
  puStack_1d8 = &uStackX_10;
  uStack_1b0 = 0;
  lStack_1d0 = 0;
  uStack_1c8 = 0;
  __0PxMaterialGeneratedInfo_physx__QEAA_XZ(auStack_138);
  ppuStack_1a8 = &puStack_1c0;
  param_5._0_1_ = '\0';
  ppuStack_1a0 = &puStack_1d8;
  uStack_168 = param_6;
  puStack_158 = &param_5;
  uStack_160 = 1;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_198 = uVar2;
  uStack_190 = uVar3;
  uStack_188 = uVar1;
  uStack_180 = param_3;
  uStack_178 = param_2;
  plStack_170 = param_4;
  FUN_1806c9270(auStack_138,&ppuStack_1a8,0);
  bVar4 = (char)param_5 == '\0';
  if ((((uStack_1c8 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)uStack_1c8)) && (lStack_1d0 != 0)
     ) {
    (**(code **)(*(int64_t *)*puStack_1d8 + 0x10))();
  }
  if ((((uStack_1b0 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)uStack_1b0)) && (lStack_1b8 != 0)
     ) {
    (**(code **)(*(int64_t *)*puStack_1c0 + 0x10))();
  }
  return bVar4;
}



bool FUN_1806d4af0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4,
                  uint64_t *param_5,uint64_t param_6)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  bool bVar5;
  uint64_t uStackX_10;
  uint64_t *puStack_378;
  int64_t lStack_370;
  uint64_t uStack_368;
  uint64_t *puStack_360;
  int64_t lStack_358;
  uint64_t uStack_350;
  uint64_t **ppuStack_348;
  uint64_t **ppuStack_340;
  uint64_t uStack_338;
  uint64_t uStack_330;
  uint64_t uStack_328;
  uint64_t uStack_320;
  uint64_t uStack_318;
  int64_t *plStack_310;
  uint64_t uStack_308;
  int8_t uStack_300;
  uint64_t *puStack_2f8;
  uint64_t uStack_2f0;
  uint64_t uStack_2e8;
  int8_t auStack_2d8 [704];
  
  uVar2 = *param_5;
  uVar3 = param_5[1];
  uVar1 = param_5[2];
  uStackX_10 = (**(code **)(*param_4 + 0x18))();
  puStack_360 = &uStackX_10;
  lStack_358 = 0;
  puStack_378 = &uStackX_10;
  uStack_350 = 0;
  lStack_370 = 0;
  uStack_368 = 0;
  FUN_1806f39b0(auStack_2d8);
  uVar4 = param_6;
  ppuStack_348 = &puStack_360;
  ppuStack_340 = &puStack_378;
  param_5._0_1_ = '\0';
  puStack_2f8 = &param_5;
  uStack_308 = param_6;
  uStack_300 = 1;
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  uStack_338 = uVar2;
  uStack_330 = uVar3;
  uStack_328 = uVar1;
  uStack_320 = param_3;
  uStack_318 = param_2;
  plStack_310 = param_4;
  FUN_1806c7b80(auStack_2d8,&ppuStack_348,0);
  ppuStack_348 = &puStack_360;
  ppuStack_340 = &puStack_378;
  puStack_2f8 = &param_5;
  uStack_308 = uVar4;
  uStack_300 = 1;
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  uStack_338 = uVar2;
  uStack_330 = uVar3;
  uStack_328 = uVar1;
  uStack_320 = param_3;
  uStack_318 = param_2;
  plStack_310 = param_4;
  FUN_1806c9800(auStack_2d8,&ppuStack_348,0);
  bVar5 = (char)param_5 == '\0';
  if ((((uStack_368 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)uStack_368)) && (lStack_370 != 0)
     ) {
    (**(code **)(*(int64_t *)*puStack_378 + 0x10))();
  }
  if ((((uStack_350 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)uStack_350)) && (lStack_358 != 0)
     ) {
    (**(code **)(*(int64_t *)*puStack_360 + 0x10))();
  }
  return bVar5;
}



bool FUN_1806d4cb0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4,
                  uint64_t *param_5,uint64_t param_6)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  bool bVar5;
  uint64_t uStackX_10;
  uint64_t *puStack_3d8;
  int64_t lStack_3d0;
  uint64_t uStack_3c8;
  uint64_t *puStack_3c0;
  int64_t lStack_3b8;
  uint64_t uStack_3b0;
  uint64_t **ppuStack_3a8;
  uint64_t **ppuStack_3a0;
  uint64_t uStack_398;
  uint64_t uStack_390;
  uint64_t uStack_388;
  uint64_t uStack_380;
  uint64_t uStack_378;
  int64_t *plStack_370;
  uint64_t uStack_368;
  int8_t uStack_360;
  uint64_t *puStack_358;
  uint64_t uStack_350;
  uint64_t uStack_348;
  int8_t auStack_338 [800];
  
  uVar2 = *param_5;
  uVar3 = param_5[1];
  uVar1 = param_5[2];
  uStackX_10 = (**(code **)(*param_4 + 0x18))();
  puStack_3c0 = &uStackX_10;
  lStack_3b8 = 0;
  puStack_3d8 = &uStackX_10;
  uStack_3b0 = 0;
  lStack_3d0 = 0;
  uStack_3c8 = 0;
  FUN_1806f3c00(auStack_338);
  uVar4 = param_6;
  ppuStack_3a8 = &puStack_3c0;
  ppuStack_3a0 = &puStack_3d8;
  param_5._0_1_ = '\0';
  puStack_358 = &param_5;
  uStack_368 = param_6;
  uStack_360 = 1;
  uStack_350 = 0;
  uStack_348 = 0;
  uStack_398 = uVar2;
  uStack_390 = uVar3;
  uStack_388 = uVar1;
  uStack_380 = param_3;
  uStack_378 = param_2;
  plStack_370 = param_4;
  FUN_1806c7b80(auStack_338,&ppuStack_3a8,0);
  ppuStack_3a8 = &puStack_3c0;
  ppuStack_3a0 = &puStack_3d8;
  puStack_358 = &param_5;
  uStack_368 = uVar4;
  uStack_360 = 1;
  uStack_350 = 0;
  uStack_348 = 0;
  uStack_398 = uVar2;
  uStack_390 = uVar3;
  uStack_388 = uVar1;
  uStack_380 = param_3;
  uStack_378 = param_2;
  plStack_370 = param_4;
  FUN_1806c9b70(auStack_338,&ppuStack_3a8,0);
  bVar5 = (char)param_5 == '\0';
  if ((((uStack_3c8 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)uStack_3c8)) && (lStack_3d0 != 0)
     ) {
    (**(code **)(*(int64_t *)*puStack_3d8 + 0x10))();
  }
  if ((((uStack_3b0 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)uStack_3b0)) && (lStack_3b8 != 0)
     ) {
    (**(code **)(*(int64_t *)*puStack_3c0 + 0x10))();
  }
  return bVar5;
}







