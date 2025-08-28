#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part086.c - 2 个函数

// 函数: void FUN_180318670(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
void FUN_180318670(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong param_6,int32_t param_7)

{
  int *piVar1;
  int iVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t *puVar5;
  int32_t uVar6;
  uint uVar7;
  int32_t *puVar8;
  uint64_t *puVar9;
  longlong *plVar10;
  uint64_t *puVar11;
  ulonglong uVar12;
  uint64_t *puVar13;
  longlong lVar14;
  uint64_t uVar15;
  int8_t auStack_4b8 [32];
  uint64_t *puStack_498;
  int8_t uStack_490;
  longlong *plStack_488;
  longlong *plStack_480;
  longlong *plStack_478;
  void *puStack_470;
  uint64_t *puStack_468;
  int32_t uStack_460;
  uint64_t uStack_458;
  int32_t uStack_450;
  int32_t uStack_44c;
  int32_t uStack_448;
  uint64_t uStack_444;
  int32_t uStack_43c;
  int32_t uStack_438;
  int32_t uStack_430;
  int32_t uStack_42c;
  longlong *aplStack_428 [2];
  longlong *plStack_418;
  longlong *plStack_410;
  longlong *plStack_408;
  longlong *plStack_400;
  longlong *plStack_3f8;
  longlong *plStack_3f0;
  longlong *plStack_3e8;
  uint64_t uStack_3d8;
  int32_t uStack_3d0;
  int16_t uStack_3cc;
  uint64_t uStack_3c8;
  uint64_t uStack_3c0;
  int32_t uStack_3b8;
  int8_t uStack_3b4;
  int32_t uStack_3b0;
  uint64_t uStack_3ac;
  int16_t uStack_3a4;
  uint64_t uStack_3a0;
  int32_t uStack_398;
  uint64_t uStack_390;
  int32_t uStack_388;
  int8_t uStack_384;
  uint64_t uStack_370;
  uint64_t uStack_368;
  int32_t uStack_360;
  int16_t uStack_35c;
  uint64_t uStack_358;
  uint64_t uStack_350;
  int32_t uStack_348;
  int8_t uStack_344;
  int32_t uStack_340;
  uint64_t uStack_33c;
  int16_t uStack_334;
  uint64_t uStack_330;
  int32_t uStack_328;
  uint64_t uStack_320;
  int32_t uStack_318;
  int8_t uStack_314;
  uint64_t uStack_300;
  uint64_t uStack_2f8;
  uint64_t uStack_2f0;
  uint64_t uStack_2e8;
  uint64_t uStack_2e0;
  uint64_t uStack_2d8;
  longlong lStack_2c8;
  longlong lStack_2c0;
  longlong lStack_2b8;
  longlong lStack_2b0;
  uint64_t uStack_2a8;
  uint64_t uStack_2a0;
  uint64_t uStack_298;
  uint64_t uStack_290;
  uint64_t uStack_288;
  uint64_t uStack_280;
  int32_t uStack_278;
  int32_t uStack_274;
  float fStack_270;
  int32_t uStack_26c;
  void *puStack_268;
  int8_t *puStack_260;
  int32_t uStack_258;
  int8_t auStack_250 [40];
  void *puStack_228;
  int8_t *puStack_220;
  int32_t uStack_218;
  int8_t auStack_210 [136];
  uint64_t auStack_188 [40];
  ulonglong uStack_48;
  
  uStack_2f8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_4b8;
  plStack_488 = param_3;
  puVar8 = (int32_t *)FUN_1800daa50();
  switch(param_7) {
  case 0:
    FUN_180094b30(puVar8,&unknown_var_5760_ptr);
    break;
  case 1:
    FUN_180094b30(puVar8,&unknown_var_6008_ptr);
    break;
  case 2:
    FUN_180094b30(puVar8,&unknown_var_5976_ptr);
    break;
  case 3:
    FUN_180094b30(puVar8,&unknown_var_5944_ptr);
    break;
  case 4:
    FUN_180094b30(puVar8,&unknown_var_5912_ptr);
    break;
  case 5:
    FUN_180094b30(puVar8,&unknown_var_6144_ptr);
    break;
  default:
    FUN_180626ee0(&unknown_var_6088_ptr);
  }
  *puVar8 = 0x41;
  *(uint64_t *)(puVar8 + 0x4706) = 0;
  puVar8[0x4708] = (float)*(ushort *)((longlong)param_5 + 0x32c);
  puVar8[0x4709] = (float)*(ushort *)((longlong)param_5 + 0x32e);
  puVar8[0x470a] = 0;
  puVar8[0x470b] = 0x3f800000;
  puVar8[0xd62] = (uint)*(ushort *)((longlong)param_5 + 0x32c);
  puVar8[0xd63] = (uint)*(ushort *)((longlong)param_5 + 0x32e);
  puVar8[0xd64] = (uint)*(ushort *)((longlong)param_5 + 0x32c);
  puVar8[0xd65] = (uint)*(ushort *)((longlong)param_5 + 0x32e);
  puVar8[1] = 0x10141;
  puVar8[0x473c] = 0;
  *(int8_t *)((longlong)puVar8 + 0x11c37) = 1;
  *(byte *)((longlong)puVar8 + 0x1bd9) = *(byte *)((longlong)puVar8 + 0x1bd9) | 2;
  *(byte *)(puVar8 + 0x6f6) = *(byte *)(puVar8 + 0x6f6) | 0x40;
  *(int16_t *)((longlong)puVar8 + 0x9a31) = 0;
  *(int8_t *)(puVar8 + 0x4931) = 1;
  *(int8_t *)(puVar8 + 0x6f4) = 0;
  lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x60b80);
  if (lVar14 == 0) {
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    puVar9 = &uStack_2e0;
  }
  else {
    uStack_2f0 = *(uint64_t *)(lVar14 + 0x1c10);
    uStack_2e8 = *(uint64_t *)(lVar14 + 0x1c18);
    puVar9 = &uStack_2f0;
  }
  uVar15 = puVar9[1];
  *(uint64_t *)(puVar8 + 0x4735) = *puVar9;
  *(uint64_t *)(puVar8 + 0x4737) = uVar15;
  puVar8[0x268b] = 0xffffffff;
  if (*(longlong *)(puVar8 + 0x2674) != 0) {
    plVar10 = *(longlong **)(param_6 + 0x128);
    if (plVar10 != (longlong *)0x0) {
      plStack_410 = plVar10;
      (**(code **)(*plVar10 + 0x28))(plVar10);
    }
    plStack_410 = *(longlong **)(puVar8 + 0x2662);
    *(longlong **)(puVar8 + 0x2662) = plVar10;
    if (plStack_410 != (longlong *)0x0) {
      (**(code **)(*plStack_410 + 0x38))();
    }
    uStack_448 = 1;
    uStack_43c = 0x1018a;
    uStack_444 = 0x2f;
    uStack_450 = 0x80;
    uStack_44c = 0x80;
    uStack_438 = *(int32_t *)(param_2 + 0x1bd4);
    puStack_228 = &unknown_var_3432_ptr;
    puStack_220 = auStack_210;
    auStack_210[0] = 0;
    uStack_218 = 0x11;
    uVar15 = strcpy_s(auStack_210,0x80,&unknown_var_5792_ptr);
    FUN_1800b1d80(uVar15,aplStack_428,&puStack_228,&uStack_450);
    puStack_228 = &unknown_var_720_ptr;
    puVar8[1] = puVar8[1] | 2;
    plStack_408 = param_5;
    (**(code **)(*param_5 + 0x28))(param_5);
    plStack_408 = *(longlong **)(puVar8 + 0x25a4);
    *(longlong **)(puVar8 + 0x25a4) = param_5;
    if (plStack_408 != (longlong *)0x0) {
      (**(code **)(*plStack_408 + 0x38))();
    }
    plVar10 = aplStack_428[0];
    plStack_400 = aplStack_428[0];
    if (aplStack_428[0] != (longlong *)0x0) {
      (**(code **)(*aplStack_428[0] + 0x28))(aplStack_428[0]);
    }
    plStack_400 = *(longlong **)(puVar8 + 0x25aa);
    *(longlong **)(puVar8 + 0x25aa) = plVar10;
    if (plStack_400 != (longlong *)0x0) {
      (**(code **)(*plStack_400 + 0x38))();
    }
    puVar8[0xd5f] = 0;
    puVar8[0xd5e] = param_7;
    if (param_4 == (longlong *)0x0) {
      param_4 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x31c0);
    }
    if (param_4 != (longlong *)0x0) {
      plStack_3f8 = param_4;
      (**(code **)(*param_4 + 0x28))(param_4);
    }
    plStack_3f8 = *(longlong **)(puVar8 + 0x265c);
    *(longlong **)(puVar8 + 0x265c) = param_4;
    if (plStack_3f8 != (longlong *)0x0) {
      (**(code **)(*plStack_3f8 + 0x38))();
    }
    if ((*(int *)(*(longlong *)(param_1 + 0x38) + 0x3054) == 2) &&
       (*(char *)(*(longlong *)(param_1 + 0x38) + 0x3000) == '\0')) {
      uVar7 = 0x400000;
    }
    else {
      uVar7 = 0;
    }
    puVar8[1] = puVar8[1] | uVar7;
    plVar10 = (longlong *)FUN_1800be440();
    if (plVar10 != (longlong *)0x0) {
      plStack_3f0 = plVar10;
      (**(code **)(*plVar10 + 0x28))(plVar10);
    }
    plStack_3f0 = *(longlong **)(puVar8 + 0x2660);
    *(longlong **)(puVar8 + 0x2660) = plVar10;
    if (plStack_3f0 != (longlong *)0x0) {
      (**(code **)(*plStack_3f0 + 0x38))();
    }
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x60b80);
    if (lVar14 == 0) {
      uStack_430 = 0x3f800000;
      uStack_42c = 0x3f800000;
      uVar15 = 0x3f8000003f800000;
    }
    else {
      uVar15 = *(uint64_t *)(lVar14 + 0x20);
    }
    *(uint64_t *)(puVar8 + 0x4932) = uVar15;
    if (*(longlong *)(param_1 + 0x38) == -14000) {
      *(int8_t *)(puVar8 + 0x473d) = 0;
    }
    else {
      FUN_1801c1c40(puVar8 + 0x4740);
      *(int8_t *)(puVar8 + 0x473d) = 1;
    }
    puVar8[0x4929] = 0;
    *(int8_t *)(puVar8 + 0x268c) = 1;
    *(byte *)(puVar8 + 0x6f6) = *(byte *)(puVar8 + 0x6f6) | 0x20;
    plVar10 = *(longlong **)(param_2 + 0x3580);
    if (plVar10 != (longlong *)0x0) {
      plStack_3e8 = plVar10;
      (**(code **)(*plVar10 + 0x28))(plVar10);
    }
    plStack_3e8 = *(longlong **)(puVar8 + 0xd60);
    *(longlong **)(puVar8 + 0xd60) = plVar10;
    if (plStack_3e8 != (longlong *)0x0) {
      (**(code **)(*plStack_3e8 + 0x38))();
    }
    puVar8[0x4a7d] = *(int32_t *)(*(longlong *)(param_1 + 0x38) + 0x3ec4);
    puVar8[0x4a7e] =
         *(float *)(*(longlong *)(param_1 + 0x38) + 0x3ec8) * 0.05 *
         *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x81f0) + 0xc);
    *(longlong *)(puVar8 + 0x4740) = *(longlong *)(param_1 + 0x38) + 0x3018;
    FUN_180094c20(auStack_188);
    if ((*(char *)(param_6 + 0x14a) == '\0') ||
       (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x60b80) == 0)) {
      lStack_2b8 = *plStack_488;
      lStack_2b0 = plStack_488[1];
      uStack_490 = 1;
      puStack_498 = (uint64_t *)CONCAT44(puStack_498._4_4_,0x447a0000);
      FUN_180286300(auStack_188,param_7,&lStack_2b8);
      lVar14 = 2;
      puVar9 = (uint64_t *)(puVar8 + 0xc);
      puVar5 = auStack_188;
      do {
        puVar13 = puVar5;
        puVar11 = puVar9;
        uVar15 = puVar13[1];
        *puVar11 = *puVar13;
        puVar11[1] = uVar15;
        uVar15 = puVar13[3];
        puVar11[2] = puVar13[2];
        puVar11[3] = uVar15;
        uVar15 = puVar13[5];
        puVar11[4] = puVar13[4];
        puVar11[5] = uVar15;
        uVar15 = puVar13[7];
        puVar11[6] = puVar13[6];
        puVar11[7] = uVar15;
        uVar15 = puVar13[9];
        puVar11[8] = puVar13[8];
        puVar11[9] = uVar15;
        uVar15 = puVar13[0xb];
        puVar11[10] = puVar13[10];
        puVar11[0xb] = uVar15;
        uVar15 = puVar13[0xd];
        puVar11[0xc] = puVar13[0xc];
        puVar11[0xd] = uVar15;
        uVar15 = puVar13[0xf];
        puVar11[0xe] = puVar13[0xe];
        puVar11[0xf] = uVar15;
        lVar14 = lVar14 + -1;
        puVar9 = puVar11 + 0x10;
        puVar5 = puVar13 + 0x10;
      } while (lVar14 != 0);
      uVar15 = puVar13[0x11];
      puVar11[0x10] = puVar13[0x10];
      puVar11[0x11] = uVar15;
      uVar15 = puVar13[0x13];
      puVar11[0x12] = puVar13[0x12];
      puVar11[0x13] = uVar15;
      uVar15 = puVar13[0x15];
      puVar11[0x14] = puVar13[0x14];
      puVar11[0x15] = uVar15;
      uVar6 = *(int32_t *)((longlong)puVar13 + 0xb4);
      uVar3 = *(int32_t *)(puVar13 + 0x17);
      uVar4 = *(int32_t *)((longlong)puVar13 + 0xbc);
      *(int32_t *)(puVar11 + 0x16) = *(int32_t *)(puVar13 + 0x16);
      *(int32_t *)((longlong)puVar11 + 0xb4) = uVar6;
      *(int32_t *)(puVar11 + 0x17) = uVar3;
      *(int32_t *)((longlong)puVar11 + 0xbc) = uVar4;
      FUN_18024b8d0(puVar8);
      FUN_180304010(*(uint64_t *)(param_2 + 0x3580),puVar8);
    }
    else {
      FUN_180245600(puVar8);
      lStack_2c8 = *plStack_488;
      lStack_2c0 = plStack_488[1];
      uStack_490 = 1;
      puStack_498 = (uint64_t *)CONCAT44(puStack_498._4_4_,0x47435000);
      FUN_180286300(auStack_188,param_7,&lStack_2c8);
      lVar14 = 2;
      puVar9 = (uint64_t *)(puVar8 + 0xc);
      puVar5 = auStack_188;
      do {
        puVar13 = puVar5;
        puVar11 = puVar9;
        uVar15 = puVar13[1];
        *puVar11 = *puVar13;
        puVar11[1] = uVar15;
        uVar15 = puVar13[3];
        puVar11[2] = puVar13[2];
        puVar11[3] = uVar15;
        uVar15 = puVar13[5];
        puVar11[4] = puVar13[4];
        puVar11[5] = uVar15;
        uVar15 = puVar13[7];
        puVar11[6] = puVar13[6];
        puVar11[7] = uVar15;
        uVar15 = puVar13[9];
        puVar11[8] = puVar13[8];
        puVar11[9] = uVar15;
        uVar15 = puVar13[0xb];
        puVar11[10] = puVar13[10];
        puVar11[0xb] = uVar15;
        uVar15 = puVar13[0xd];
        puVar11[0xc] = puVar13[0xc];
        puVar11[0xd] = uVar15;
        uVar15 = puVar13[0xf];
        puVar11[0xe] = puVar13[0xe];
        puVar11[0xf] = uVar15;
        lVar14 = lVar14 + -1;
        puVar9 = puVar11 + 0x10;
        puVar5 = puVar13 + 0x10;
      } while (lVar14 != 0);
      uVar15 = puVar13[0x11];
      puVar11[0x10] = puVar13[0x10];
      puVar11[0x11] = uVar15;
      uVar15 = puVar13[0x13];
      puVar11[0x12] = puVar13[0x12];
      puVar11[0x13] = uVar15;
      uVar15 = puVar13[0x15];
      puVar11[0x14] = puVar13[0x14];
      puVar11[0x15] = uVar15;
      uVar6 = *(int32_t *)((longlong)puVar13 + 0xb4);
      uVar3 = *(int32_t *)(puVar13 + 0x17);
      uVar4 = *(int32_t *)((longlong)puVar13 + 0xbc);
      *(int32_t *)(puVar11 + 0x16) = *(int32_t *)(puVar13 + 0x16);
      *(int32_t *)((longlong)puVar11 + 0xb4) = uVar6;
      *(int32_t *)(puVar11 + 0x17) = uVar3;
      *(int32_t *)((longlong)puVar11 + 0xbc) = uVar4;
      FUN_18024b8d0(puVar8);
      FUN_1800763c0(*(uint64_t *)(*(longlong *)(param_1 + 0x38) + 0x398),&plStack_478);
      FUN_18022cb40(*(uint64_t *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x398) + 0x1b8),
                    &plStack_480);
      lVar14 = plStack_480[0x3c];
      puStack_268 = &unknown_var_672_ptr;
      puStack_260 = auStack_250;
      auStack_250[0] = 0;
      uStack_258 = 0x19;
      strcpy_s(auStack_250,0x20,&system_data_d598);
      uVar12 = FUN_180240430(lVar14,&puStack_268,0);
      plVar10 = plStack_480;
      puStack_268 = &unknown_var_720_ptr;
      plStack_480[0x28] = plStack_480[0x28] | uVar12;
      FUN_18022dd60(plStack_480);
      *(int16_t *)(plVar10 + 0x78) = 0xffff;
      FUN_180076910(plStack_478,&plStack_480);
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x8218);
      uStack_2a8 = *(uint64_t *)(lVar14 + 0x70);
      uStack_2a0 = *(uint64_t *)(lVar14 + 0x78);
      uStack_298 = *(uint64_t *)(lVar14 + 0x80);
      uStack_290 = *(uint64_t *)(lVar14 + 0x88);
      uStack_288 = *(uint64_t *)(lVar14 + 0x90);
      uStack_280 = *(uint64_t *)(lVar14 + 0x98);
      uStack_278 = *(int32_t *)(lVar14 + 0xa0);
      uStack_274 = *(int32_t *)(lVar14 + 0xa4);
      uStack_26c = *(int32_t *)(lVar14 + 0xac);
      fStack_270 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x3ec4) - 3.0;
      uStack_368 = 0;
      uStack_360 = 0xffffffff;
      uStack_35c = 0xff00;
      uStack_358 = 0;
      uStack_350 = 0xffffffffffffffff;
      uStack_348 = 0xffffffff;
      uStack_344 = 0xff;
      uStack_340 = 0xffffffff;
      uStack_33c = 0;
      uStack_334 = 0x400;
      uStack_330 = 0;
      uStack_328 = 0;
      uStack_320 = 0;
      uStack_318 = 0;
      uStack_314 = 0;
      uStack_300 = 0;
      puStack_498 = &uStack_368;
      FUN_180077750(plStack_478,puVar8,&uStack_2a8);
      if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x27b8) != '\0') {
        uStack_3d8 = 0;
        uStack_3cc = 0xff00;
        uStack_3c8 = 0;
        uStack_3c0 = 0xffffffffffffffff;
        uStack_3b8 = 0xffffffff;
        uStack_3b4 = 0xff;
        uStack_3b0 = 0xffffffff;
        uStack_3ac = 0;
        uStack_3a4 = 0x400;
        uStack_3a0 = 0;
        uStack_398 = 0;
        uStack_390 = 0;
        uStack_388 = 0;
        uStack_384 = 0;
        uStack_370 = 0;
        uStack_3d0 = 0;
        FUN_1802ed230(*(uint64_t *)(*(longlong *)(param_1 + 0x38) + 0x81f8),&plStack_488,0);
        if (plStack_488 != (longlong *)0x0) {
          lVar14 = (**(code **)(*plStack_488 + 0x178))();
          *(int32_t *)(lVar14 + 0x2c4) = 0x3f800000;
          puStack_498 = &uStack_3d8;
          (**(code **)(*plStack_488 + 0x1c8))
                    (plStack_488,puVar8,*(longlong *)(param_1 + 0x38),
                     *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x81f8) + 0x70);
        }
        puStack_498 = &uStack_3d8;
        (**(code **)(*plStack_488 + 0x1c8))
                  (plStack_488,puVar8,*(longlong *)(param_1 + 0x38),
                   *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x81f8) + 0x70);
        if (plStack_488 != (longlong *)0x0) {
          (**(code **)(*plStack_488 + 0x38))();
        }
      }
      if (plStack_480 != (longlong *)0x0) {
        (**(code **)(*plStack_480 + 0x38))();
      }
      if (plStack_478 != (longlong *)0x0) {
        (**(code **)(*plStack_478 + 0x38))();
      }
    }
    LOCK();
    piVar1 = (int *)(param_2 + 0x11a48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    *(int32_t **)(param_2 + 0x9a48 + (longlong)iVar2 * 8) = puVar8;
    uVar15 = *(uint64_t *)(param_2 + 0x9a3c);
    *(uint64_t *)(puVar8 + 0x268d) = *(uint64_t *)(param_2 + 0x9a34);
    *(uint64_t *)(puVar8 + 0x268f) = uVar15;
    if (aplStack_428[0] != (longlong *)0x0) {
      (**(code **)(*aplStack_428[0] + 0x38))();
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_4b8);
  }
  puStack_470 = &unknown_var_3456_ptr;
  uStack_458 = 0;
  puStack_468 = (uint64_t *)0x0;
  uStack_460 = 0;
  puVar9 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar9 = 0;
  puStack_468 = puVar9;
  uVar6 = FUN_18064e990(puVar9);
  uStack_458 = CONCAT44(uStack_458._4_4_,uVar6);
  *puVar9 = 0x616d776f64616873;
  puVar9[1] = 0x68706172675f70;
  uStack_460 = 0xf;
  plVar10 = (longlong *)FUN_1801f20c0();
  if (plVar10 != (longlong *)0x0) {
    plStack_418 = plVar10;
    (**(code **)(*plVar10 + 0x28))(plVar10);
  }
  plStack_418 = *(longlong **)(puVar8 + 0x2674);
  *(longlong **)(puVar8 + 0x2674) = plVar10;
  if (plStack_418 != (longlong *)0x0) {
    (**(code **)(*plStack_418 + 0x38))();
  }
  puStack_470 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar9);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1803191b0(longlong param_1)

{
  longlong *plVar1;
  uint64_t uVar2;
  longlong *plVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  longlong lVar6;
  longlong *plVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  
  uVar2 = FUN_18062b1e0(system_memory_pool_ptr,0x150,8,3,0xfffffffffffffffe);
  plVar3 = (longlong *)FUN_18031ba60(uVar2,param_1);
  *(int8_t *)(plVar3 + 0x29) = 1;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  puVar8 = *(uint64_t **)(param_1 + 0x18);
  puVar4 = (uint64_t *)0x0;
  if (puVar8 < *(uint64_t **)(param_1 + 0x20)) {
    *(uint64_t **)(param_1 + 0x18) = puVar8 + 1;
    *puVar8 = plVar3;
    goto LAB_1803192f8;
  }
  puVar5 = *(uint64_t **)(param_1 + 0x10);
  lVar6 = (longlong)puVar8 - (longlong)puVar5 >> 3;
  if (lVar6 == 0) {
    lVar6 = 1;
LAB_180319258:
    puVar4 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,lVar6 * 8,*(int8_t *)(param_1 + 0x28));
    puVar8 = *(uint64_t **)(param_1 + 0x18);
    puVar5 = *(uint64_t **)(param_1 + 0x10);
    puVar9 = puVar4;
  }
  else {
    lVar6 = lVar6 * 2;
    puVar9 = puVar4;
    if (lVar6 != 0) goto LAB_180319258;
  }
  for (; puVar5 != puVar8; puVar5 = puVar5 + 1) {
    *puVar4 = *puVar5;
    *puVar5 = 0;
    puVar4 = puVar4 + 1;
  }
  *puVar4 = plVar3;
  plVar1 = *(longlong **)(param_1 + 0x18);
  plVar7 = *(longlong **)(param_1 + 0x10);
  if (plVar7 != plVar1) {
    do {
      if ((longlong *)*plVar7 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar7 + 0x38))();
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
    plVar7 = *(longlong **)(param_1 + 0x10);
  }
  if (plVar7 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar7);
  }
  *(uint64_t **)(param_1 + 0x10) = puVar9;
  *(uint64_t **)(param_1 + 0x18) = puVar4 + 1;
  *(uint64_t **)(param_1 + 0x20) = puVar9 + lVar6;
LAB_1803192f8:
  *(int32_t *)(param_1 + 0x30) = 0xffffffff;
  return plVar3;
}



longlong * FUN_180319320(longlong param_1,longlong *param_2,int32_t *param_3,uint64_t param_4)

{
  longlong lVar1;
  int32_t uVar2;
  void *puStack_48;
  int32_t *puStack_40;
  int32_t uStack_38;
  int32_t uStack_34;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  FUN_180198890(*(uint64_t *)(param_1 + 0x38),param_2,4,param_4,0,0xfffffffffffffffe);
  uVar2 = 1;
  puStack_48 = (void *)0x3f800000;
  puStack_40 = (int32_t *)0x0;
  uStack_38 = 0;
  uStack_34 = 0x3f800000;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0x3f800000;
  uStack_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  FUN_1802ea790(*param_2,&puStack_48);
  FUN_180170ac0(*param_2,&unknown_var_6072_ptr);
  lVar1 = *param_2;
  if ((*(uint *)(lVar1 + 0x2c4) & 2) == 0) {
    *(uint *)(lVar1 + 0x2c4) = *(uint *)(lVar1 + 0x2c4) | 2;
    if ((*(longlong *)(lVar1 + 0x20) != 0) &&
       (*(char *)(*(longlong *)(lVar1 + 0x20) + 0x60cb0) == '\0')) {
      FUN_1802ee720(lVar1,0);
    }
  }
  puStack_48 = &unknown_var_3456_ptr;
  uStack_30 = 0;
  puStack_40 = (int32_t *)0x0;
  uStack_38 = 0;
  FUN_1806277c0(&puStack_48,0x12);
  *puStack_40 = 0x6c666552;
  puStack_40[1] = 0x69746365;
  puStack_40[2] = 0x61436e6f;
  puStack_40[3] = 0x72757470;
  *(int16_t *)(puStack_40 + 4) = 0x7265;
  *(int8_t *)((longlong)puStack_40 + 0x12) = 0;
  uStack_38 = 0x12;
  lVar1 = FUN_1803543b0(*param_2,&puStack_48,1,0,uVar2);
  if (*(char *)(lVar1 + 0x90) != '\x01') {
    *(int8_t *)(lVar1 + 0x90) = 1;
    *(int8_t *)(*(longlong *)(lVar1 + 0x70) + 0x148) = 1;
  }
  return param_2;
}



longlong * FUN_180319490(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  float fStackX_8;
  float fStackX_c;
  float fStackX_18;
  float fStackX_1c;
  int32_t uVar9;
  void *puStack_90;
  int32_t *puStack_88;
  int32_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  float fStack_38;
  float fStack_34;
  ulonglong uStack_30;
  
  uStack_70 = 0xfffffffffffffffe;
  uVar6 = 0;
  FUN_180198890(*(uint64_t *)(param_1 + 0x38),param_2,5,param_4,0);
  uVar9 = 1;
  lVar4 = *param_2;
  uVar1 = *(uint *)(lVar4 + 0x2ac);
  *(uint *)(lVar4 + 0x2ac) = uVar1 | 0x1020000;
  FUN_1802ee810(lVar4,uVar1);
  FUN_1802ee990(lVar4,uVar1);
  lVar4 = *param_2;
  uVar1 = *(uint *)(lVar4 + 0x2c4);
  if ((uVar1 & 4) == 0) {
    *(uint *)(lVar4 + 0x2c4) = uVar1 | 4;
    if (((*(longlong *)(lVar4 + 0x20) != 0) &&
        (*(char *)(*(longlong *)(lVar4 + 0x20) + 0x60cb0) == '\0')) && ((uVar1 & 2) != 0)) {
      FUN_1802ee720(lVar4,0);
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x38);
  lVar3 = *(longlong *)(lVar4 + 0x60b80);
  if (lVar3 == 0) {
    fStackX_8 = (float)*(uint64_t *)(lVar4 + 0x464);
    fStackX_18 = (float)*(uint64_t *)(lVar4 + 0x454);
    fStackX_8 = fStackX_8 + fStackX_18;
    fStackX_c = (float)((ulonglong)*(uint64_t *)(lVar4 + 0x464) >> 0x20);
    fStackX_1c = (float)((ulonglong)*(uint64_t *)(lVar4 + 0x454) >> 0x20);
    fStackX_c = fStackX_c + fStackX_1c;
  }
  else {
    fStackX_8 = *(float *)(lVar3 + 0x20);
    fStackX_c = *(float *)(lVar3 + 0x24);
  }
  fStackX_8 = fStackX_8 * 0.5;
  fVar8 = *(float *)(lVar4 + 0x46c) + 5.0;
  FUN_180170ac0(*param_2,&unknown_var_6040_ptr);
  lVar4 = *param_2;
  if ((*(uint *)(lVar4 + 0x2c4) & 2) == 0) {
    *(uint *)(lVar4 + 0x2c4) = *(uint *)(lVar4 + 0x2c4) | 2;
    if ((*(longlong *)(lVar4 + 0x20) != 0) &&
       (*(char *)(*(longlong *)(lVar4 + 0x20) + 0x60cb0) == '\0')) {
      FUN_1802ee720(lVar4,0);
    }
  }
  puStack_90 = &unknown_var_3456_ptr;
  uStack_78 = 0;
  puStack_88 = (int32_t *)0x0;
  uStack_80 = 0;
  FUN_1806277c0(&puStack_90,0x12);
  *puStack_88 = 0x6c666552;
  puStack_88[1] = 0x69746365;
  puStack_88[2] = 0x61436e6f;
  puStack_88[3] = 0x72757470;
  *(int16_t *)(puStack_88 + 4) = 0x7265;
  *(int8_t *)((longlong)puStack_88 + 0x12) = 0;
  uStack_80 = 0x12;
  lVar3 = FUN_1803543b0(*param_2,&puStack_90,1,0,uVar9,fStackX_8,fVar8);
  uStack_68 = 0x3f800000;
  uStack_60 = 0;
  uStack_58 = 0x3f80000000000000;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0x3f800000;
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (*(longlong *)(lVar4 + 0x60b80) != 0) {
    *(int8_t *)(lVar3 + 0x92) = 1;
    *(int8_t *)(*(longlong *)(lVar3 + 0x70) + 0x149) = 1;
    lVar4 = *(longlong *)(param_1 + 0x38);
  }
  _fStack_38 = CONCAT44(fStackX_c * 0.5,fStackX_8);
  uStack_30 = (ulonglong)*(uint *)(lVar4 + 0x3ec4);
  FUN_1802ea790(*param_2,&uStack_68);
  if (*(char *)(lVar3 + 0x90) != '\0') {
    *(int8_t *)(lVar3 + 0x90) = 0;
    *(int8_t *)(*(longlong *)(lVar3 + 0x70) + 0x148) = 0;
  }
  *(int8_t *)(lVar3 + 0x91) = 1;
  *(int8_t *)(*(longlong *)(lVar3 + 0x70) + 0x14a) = 1;
  plVar5 = *(longlong **)(param_1 + 0x10);
  iVar2 = (int)(*(longlong *)(param_1 + 0x18) - (longlong)plVar5 >> 3);
  if (0 < iVar2) {
    uVar7 = uVar6;
    do {
      if (*(char *)(*plVar5 + 0x14a) != '\0') {
        *(int *)(param_1 + 0x34) = (int)uVar7;
        return param_2;
      }
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar6 = uVar6 + 1;
      plVar5 = plVar5 + 1;
    } while ((longlong)uVar6 < (longlong)iVar2);
  }
  *(int32_t *)(param_1 + 0x34) = 0xffffffff;
  return param_2;
}



longlong * FUN_180319780(longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x331d) == '\0') {
    if (*(int *)(param_1 + 0x30) == -1) {
      if (*(longlong **)(param_1 + 0x10) == *(longlong **)(param_1 + 0x18)) goto LAB_1803197a7;
      plVar1 = *(longlong **)(**(longlong **)(param_1 + 0x10) + 0x100);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
    }
    else {
      plVar1 = *(longlong **)
                (*(longlong *)
                  (*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 0x30) * 8) + 0x100);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))(plVar1);
    }
    return plVar1;
  }
LAB_1803197a7:
  return *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x31c0);
}





// 函数: void FUN_180319840(longlong param_1)
void FUN_180319840(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  plVar2 = *(longlong **)(param_1 + 0x18);
  plVar3 = (longlong *)*plVar1;
  if (plVar3 != plVar2) {
    do {
      if ((longlong *)*plVar3 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar3 + 0x38))();
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2);
    plVar3 = (longlong *)*plVar1;
  }
  *(longlong **)(param_1 + 0x18) = plVar3;
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x38))();
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  for (plVar3 = (longlong *)*plVar1; plVar3 != plVar2; plVar3 = plVar3 + 1) {
    if ((longlong *)*plVar3 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar3 + 0x38))();
    }
  }
  if (*plVar1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



