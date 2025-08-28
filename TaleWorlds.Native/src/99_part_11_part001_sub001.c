#include "TaleWorlds.Native.Split.h"

// 99_part_11_part001_sub001.c - 2 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_11_part001.c - 3 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_11.c - 500 个函数



// 函数: void FUN_1806d4450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
void FUN_1806d4450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  uStack_28 = *param_5;
  uStack_24 = param_5[1];
  uStack_20 = param_5[2];
  uStack_1c = param_5[3];
  uStack_18 = *(undefined8 *)(param_5 + 4);
  FUN_1806c3420(&uStack_28,param_3,param_2,param_4,param_6);
  return;
}



undefined8 FUN_1806d44a0(void)

{
  longlong *in_R9;
  
  (**(code **)(*in_R9 + 0x18))(in_R9);
  return 1;
}



bool FUN_1806d44c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 uStackX_10;
  undefined8 *puStack_468;
  longlong lStack_460;
  ulonglong uStack_458;
  undefined8 *puStack_450;
  longlong lStack_448;
  ulonglong uStack_440;
  undefined8 **ppuStack_438;
  undefined8 **ppuStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  longlong *plStack_400;
  undefined8 uStack_3f8;
  undefined1 uStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined1 auStack_3c8 [944];
  
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
  if ((((uStack_458 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_458)) && (lStack_460 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_468 + 0x10))();
  }
  if ((((uStack_440 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_440)) && (lStack_448 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_450 + 0x10))();
  }
  return bVar5;
}



bool FUN_1806d4680(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 uStackX_10;
  undefined8 *puStack_3a8;
  longlong lStack_3a0;
  ulonglong uStack_398;
  undefined8 *puStack_390;
  longlong lStack_388;
  ulonglong uStack_380;
  undefined8 **ppuStack_378;
  undefined8 **ppuStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  longlong *plStack_340;
  undefined8 uStack_338;
  undefined1 uStack_330;
  undefined8 *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 auStack_308 [752];
  
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
  if ((((uStack_398 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_398)) && (lStack_3a0 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_3a8 + 0x10))();
  }
  if ((((uStack_380 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_380)) && (lStack_388 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_390 + 0x10))();
  }
  return bVar5;
}



undefined1
FUN_1806d4840(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined8 *param_5,undefined8 param_6)

{
  undefined1 uVar1;
  undefined8 *puStack_298;
  longlong lStack_290;
  ulonglong uStack_288;
  undefined8 *puStack_280;
  longlong lStack_278;
  ulonglong uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_238 [560];
  
  uStack_258 = *param_5;
  uStack_250 = param_5[1];
  uStack_268 = param_5[2];
  param_5 = (undefined8 *)(**(code **)(*param_4 + 0x18))();
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
  if ((((uStack_288 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_288)) && (lStack_290 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_298 + 0x10))();
  }
  if ((((uStack_270 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_270)) && (lStack_278 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_280 + 0x10))();
  }
  return uVar1;
}



bool FUN_1806d4980(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 uStackX_10;
  undefined8 *puStack_1d8;
  longlong lStack_1d0;
  ulonglong uStack_1c8;
  undefined8 *puStack_1c0;
  longlong lStack_1b8;
  ulonglong uStack_1b0;
  undefined8 **ppuStack_1a8;
  undefined8 **ppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  longlong *plStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_138 [304];
  
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
  if ((((uStack_1c8 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_1c8)) && (lStack_1d0 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_1d8 + 0x10))();
  }
  if ((((uStack_1b0 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_1b0)) && (lStack_1b8 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_1c0 + 0x10))();
  }
  return bVar4;
}



bool FUN_1806d4af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 uStackX_10;
  undefined8 *puStack_378;
  longlong lStack_370;
  ulonglong uStack_368;
  undefined8 *puStack_360;
  longlong lStack_358;
  ulonglong uStack_350;
  undefined8 **ppuStack_348;
  undefined8 **ppuStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  longlong *plStack_310;
  undefined8 uStack_308;
  undefined1 uStack_300;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2d8 [704];
  
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
  if ((((uStack_368 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_368)) && (lStack_370 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_378 + 0x10))();
  }
  if ((((uStack_350 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_350)) && (lStack_358 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_360 + 0x10))();
  }
  return bVar5;
}



bool FUN_1806d4cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 uStackX_10;
  undefined8 *puStack_3d8;
  longlong lStack_3d0;
  ulonglong uStack_3c8;
  undefined8 *puStack_3c0;
  longlong lStack_3b8;
  ulonglong uStack_3b0;
  undefined8 **ppuStack_3a8;
  undefined8 **ppuStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  longlong *plStack_370;
  undefined8 uStack_368;
  undefined1 uStack_360;
  undefined8 *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined1 auStack_338 [800];
  
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
  if ((((uStack_3c8 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_3c8)) && (lStack_3d0 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_3d8 + 0x10))();
  }
  if ((((uStack_3b0 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_3b0)) && (lStack_3b8 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_3c0 + 0x10))();
  }
  return bVar5;
}







