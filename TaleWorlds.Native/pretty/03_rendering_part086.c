#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part086.c - 2 个函数
// 函数: void function_318670(int64_t param_1,int64_t param_2,int64_t *param_3,int64_t *param_4,
void function_318670(int64_t param_1,int64_t param_2,int64_t *param_3,int64_t *param_4,
                  int64_t *param_5,int64_t param_6,int32_t param_7)
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
  int64_t *plVar10;
  uint64_t *puVar11;
  uint64_t uVar12;
  uint64_t *puVar13;
  int64_t lVar14;
  uint64_t uVar15;
  int8_t stack_array_4b8 [32];
  uint64_t *plocal_var_498;
  int8_t local_var_490;
  int64_t *plStack_488;
  int64_t *plStack_480;
  int64_t *plStack_478;
  void *plocal_var_470;
  uint64_t *plocal_var_468;
  int32_t local_var_460;
  uint64_t local_var_458;
  int32_t local_var_450;
  int32_t local_var_44c;
  int32_t local_var_448;
  uint64_t local_var_444;
  int32_t local_var_43c;
  int32_t local_var_438;
  int32_t local_var_430;
  int32_t local_var_42c;
  int64_t *aplStack_428 [2];
  int64_t *plStack_418;
  int64_t *plStack_410;
  int64_t *plStack_408;
  int64_t *plStack_400;
  int64_t *plStack_3f8;
  int64_t *plStack_3f0;
  int64_t *plStack_3e8;
  uint64_t local_var_3d8;
  int32_t local_var_3d0;
  int16_t local_var_3cc;
  uint64_t local_var_3c8;
  uint64_t local_var_3c0;
  int32_t local_var_3b8;
  int8_t local_var_3b4;
  int32_t local_var_3b0;
  uint64_t local_var_3ac;
  int16_t local_var_3a4;
  uint64_t local_var_3a0;
  int32_t local_var_398;
  uint64_t local_var_390;
  int32_t local_var_388;
  int8_t local_var_384;
  uint64_t local_var_370;
  uint64_t local_var_368;
  int32_t local_var_360;
  int16_t local_var_35c;
  uint64_t local_var_358;
  uint64_t local_var_350;
  int32_t local_var_348;
  int8_t local_var_344;
  int32_t local_var_340;
  uint64_t local_var_33c;
  int16_t local_var_334;
  uint64_t local_var_330;
  int32_t local_var_328;
  uint64_t local_var_320;
  int32_t local_var_318;
  int8_t local_var_314;
  uint64_t local_var_300;
  uint64_t local_var_2f8;
  uint64_t local_var_2f0;
  uint64_t local_var_2e8;
  uint64_t local_var_2e0;
  uint64_t local_var_2d8;
  int64_t lStack_2c8;
  int64_t lStack_2c0;
  int64_t lStack_2b8;
  int64_t lStack_2b0;
  uint64_t local_var_2a8;
  uint64_t local_var_2a0;
  uint64_t local_var_298;
  uint64_t local_var_290;
  uint64_t local_var_288;
  uint64_t local_var_280;
  int32_t local_var_278;
  int32_t local_var_274;
  float fStack_270;
  int32_t local_var_26c;
  void *plocal_var_268;
  int8_t *plocal_var_260;
  int32_t local_var_258;
  int8_t stack_array_250 [40];
  void *plocal_var_228;
  int8_t *plocal_var_220;
  int32_t local_var_218;
  int8_t stack_array_210 [136];
  uint64_t stack_array_188 [40];
  uint64_t local_var_48;
  local_var_2f8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_4b8;
  plStack_488 = param_3;
  puVar8 = (int32_t *)function_0daa50();
  switch(param_7) {
  case 0:
    SystemCore_NetworkHandler(puVar8,&processed_var_5760_ptr);
    break;
  case 1:
    SystemCore_NetworkHandler(puVar8,&processed_var_6008_ptr);
    break;
  case 2:
    SystemCore_NetworkHandler(puVar8,&processed_var_5976_ptr);
    break;
  case 3:
    SystemCore_NetworkHandler(puVar8,&processed_var_5944_ptr);
    break;
  case 4:
    SystemCore_NetworkHandler(puVar8,&processed_var_5912_ptr);
    break;
  case 5:
    SystemCore_NetworkHandler(puVar8,&processed_var_6144_ptr);
    break;
  default:
    UtilitiesSystem_PerformanceMonitor(&processed_var_6088_ptr);
  }
  *puVar8 = 0x41;
  *(uint64_t *)(puVar8 + 0x4706) = 0;
  puVar8[0x4708] = (float)*(ushort *)((int64_t)param_5 + 0x32c);
  puVar8[0x4709] = (float)*(ushort *)((int64_t)param_5 + 0x32e);
  puVar8[0x470a] = 0;
  puVar8[0x470b] = 0x3f800000;
  puVar8[0xd62] = (uint)*(ushort *)((int64_t)param_5 + 0x32c);
  puVar8[0xd63] = (uint)*(ushort *)((int64_t)param_5 + 0x32e);
  puVar8[0xd64] = (uint)*(ushort *)((int64_t)param_5 + 0x32c);
  puVar8[0xd65] = (uint)*(ushort *)((int64_t)param_5 + 0x32e);
  puVar8[1] = 0x10141;
  puVar8[0x473c] = 0;
  *(int8_t *)((int64_t)puVar8 + 0x11c37) = 1;
  *(byte *)((int64_t)puVar8 + 0x1bd9) = *(byte *)((int64_t)puVar8 + 0x1bd9) | 2;
  *(byte *)(puVar8 + 0x6f6) = *(byte *)(puVar8 + 0x6f6) | 0x40;
  *(int16_t *)((int64_t)puVar8 + 0x9a31) = 0;
  *(int8_t *)(puVar8 + 0x4931) = 1;
  *(int8_t *)(puVar8 + 0x6f4) = 0;
  lVar14 = *(int64_t *)(*(int64_t *)(param_1 + 0x38) + 0x60b80);
  if (lVar14 == 0) {
    local_var_2e0 = 0;
    local_var_2d8 = 0;
    puVar9 = &local_var_2e0;
  }
  else {
    local_var_2f0 = *(uint64_t *)(lVar14 + 0x1c10);
    local_var_2e8 = *(uint64_t *)(lVar14 + 0x1c18);
    puVar9 = &local_var_2f0;
  }
  uVar15 = puVar9[1];
  *(uint64_t *)(puVar8 + 0x4735) = *puVar9;
  *(uint64_t *)(puVar8 + 0x4737) = uVar15;
  puVar8[0x268b] = 0xffffffff;
  if (*(int64_t *)(puVar8 + 0x2674) != 0) {
    plVar10 = *(int64_t **)(param_6 + 0x128);
    if (plVar10 != (int64_t *)0x0) {
      plStack_410 = plVar10;
      (**(code **)(*plVar10 + 0x28))(plVar10);
    }
    plStack_410 = *(int64_t **)(puVar8 + 0x2662);
    *(int64_t **)(puVar8 + 0x2662) = plVar10;
    if (plStack_410 != (int64_t *)0x0) {
      (**(code **)(*plStack_410 + 0x38))();
    }
    local_var_448 = 1;
    local_var_43c = 0x1018a;
    local_var_444 = 0x2f;
    local_var_450 = 0x80;
    local_var_44c = 0x80;
    local_var_438 = *(int32_t *)(param_2 + 0x1bd4);
    plocal_var_228 = &memory_allocator_3432_ptr;
    plocal_var_220 = stack_array_210;
    stack_array_210[0] = 0;
    local_var_218 = 0x11;
    uVar15 = strcpy_s(stack_array_210,0x80,&processed_var_5792_ptr);
    function_0b1d80(uVar15,aplStack_428,&plocal_var_228,&local_var_450);
    plocal_var_228 = &system_state_ptr;
    puVar8[1] = puVar8[1] | 2;
    plStack_408 = param_5;
    (**(code **)(*param_5 + 0x28))(param_5);
    plStack_408 = *(int64_t **)(puVar8 + 0x25a4);
    *(int64_t **)(puVar8 + 0x25a4) = param_5;
    if (plStack_408 != (int64_t *)0x0) {
      (**(code **)(*plStack_408 + 0x38))();
    }
    plVar10 = aplStack_428[0];
    plStack_400 = aplStack_428[0];
    if (aplStack_428[0] != (int64_t *)0x0) {
      (**(code **)(*aplStack_428[0] + 0x28))(aplStack_428[0]);
    }
    plStack_400 = *(int64_t **)(puVar8 + 0x25aa);
    *(int64_t **)(puVar8 + 0x25aa) = plVar10;
    if (plStack_400 != (int64_t *)0x0) {
      (**(code **)(*plStack_400 + 0x38))();
    }
    puVar8[0xd5f] = 0;
    puVar8[0xd5e] = param_7;
    if (param_4 == (int64_t *)0x0) {
      param_4 = *(int64_t **)(*(int64_t *)(param_1 + 0x38) + 0x31c0);
    }
    if (param_4 != (int64_t *)0x0) {
      plStack_3f8 = param_4;
      (**(code **)(*param_4 + 0x28))(param_4);
    }
    plStack_3f8 = *(int64_t **)(puVar8 + 0x265c);
    *(int64_t **)(puVar8 + 0x265c) = param_4;
    if (plStack_3f8 != (int64_t *)0x0) {
      (**(code **)(*plStack_3f8 + 0x38))();
    }
    if ((*(int *)(*(int64_t *)(param_1 + 0x38) + 0x3054) == 2) &&
       (*(char *)(*(int64_t *)(param_1 + 0x38) + 0x3000) == '\0')) {
      uVar7 = 0x400000;
    }
    else {
      uVar7 = 0;
    }
    puVar8[1] = puVar8[1] | uVar7;
    plVar10 = (int64_t *)function_0be440();
    if (plVar10 != (int64_t *)0x0) {
      plStack_3f0 = plVar10;
      (**(code **)(*plVar10 + 0x28))(plVar10);
    }
    plStack_3f0 = *(int64_t **)(puVar8 + 0x2660);
    *(int64_t **)(puVar8 + 0x2660) = plVar10;
    if (plStack_3f0 != (int64_t *)0x0) {
      (**(code **)(*plStack_3f0 + 0x38))();
    }
    lVar14 = *(int64_t *)(*(int64_t *)(param_1 + 0x38) + 0x60b80);
    if (lVar14 == 0) {
      local_var_430 = 0x3f800000;
      local_var_42c = 0x3f800000;
      uVar15 = 0x3f8000003f800000;
    }
    else {
      uVar15 = *(uint64_t *)(lVar14 + 0x20);
    }
    *(uint64_t *)(puVar8 + 0x4932) = uVar15;
    if (*(int64_t *)(param_1 + 0x38) == -14000) {
      *(int8_t *)(puVar8 + 0x473d) = 0;
    }
    else {
      function_1c1c40(puVar8 + 0x4740);
      *(int8_t *)(puVar8 + 0x473d) = 1;
    }
    puVar8[0x4929] = 0;
    *(int8_t *)(puVar8 + 0x268c) = 1;
    *(byte *)(puVar8 + 0x6f6) = *(byte *)(puVar8 + 0x6f6) | 0x20;
    plVar10 = *(int64_t **)(param_2 + 0x3580);
    if (plVar10 != (int64_t *)0x0) {
      plStack_3e8 = plVar10;
      (**(code **)(*plVar10 + 0x28))(plVar10);
    }
    plStack_3e8 = *(int64_t **)(puVar8 + 0xd60);
    *(int64_t **)(puVar8 + 0xd60) = plVar10;
    if (plStack_3e8 != (int64_t *)0x0) {
      (**(code **)(*plStack_3e8 + 0x38))();
    }
    puVar8[0x4a7d] = *(int32_t *)(*(int64_t *)(param_1 + 0x38) + 0x3ec4);
    puVar8[0x4a7e] =
         *(float *)(*(int64_t *)(param_1 + 0x38) + 0x3ec8) * 0.05 *
         *(float *)(*(int64_t *)(*(int64_t *)(param_1 + 0x38) + 0x81f0) + 0xc);
    *(int64_t *)(puVar8 + 0x4740) = *(int64_t *)(param_1 + 0x38) + 0x3018;
    function_094c20(stack_array_188);
    if ((*(char *)(param_6 + 0x14a) == '\0') ||
       (*(int64_t *)(*(int64_t *)(param_1 + 0x38) + 0x60b80) == 0)) {
      lStack_2b8 = *plStack_488;
      lStack_2b0 = plStack_488[1];
      local_var_490 = 1;
      plocal_var_498 = (uint64_t *)CONCAT44(plocal_var_498._4_4_,0x447a0000);
      function_286300(stack_array_188,param_7,&lStack_2b8);
      lVar14 = 2;
      puVar9 = (uint64_t *)(puVar8 + 0xc);
      puVar5 = stack_array_188;
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
      uVar6 = *(int32_t *)((int64_t)puVar13 + 0xb4);
      uVar3 = *(int32_t *)(puVar13 + 0x17);
      uVar4 = *(int32_t *)((int64_t)puVar13 + 0xbc);
      *(int32_t *)(puVar11 + 0x16) = *(int32_t *)(puVar13 + 0x16);
      *(int32_t *)((int64_t)puVar11 + 0xb4) = uVar6;
      *(int32_t *)(puVar11 + 0x17) = uVar3;
      *(int32_t *)((int64_t)puVar11 + 0xbc) = uVar4;
      function_24b8d0(puVar8);
      function_304010(*(uint64_t *)(param_2 + 0x3580),puVar8);
    }
    else {
      function_245600(puVar8);
      lStack_2c8 = *plStack_488;
      lStack_2c0 = plStack_488[1];
      local_var_490 = 1;
      plocal_var_498 = (uint64_t *)CONCAT44(plocal_var_498._4_4_,0x47435000);
      function_286300(stack_array_188,param_7,&lStack_2c8);
      lVar14 = 2;
      puVar9 = (uint64_t *)(puVar8 + 0xc);
      puVar5 = stack_array_188;
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
      uVar6 = *(int32_t *)((int64_t)puVar13 + 0xb4);
      uVar3 = *(int32_t *)(puVar13 + 0x17);
      uVar4 = *(int32_t *)((int64_t)puVar13 + 0xbc);
      *(int32_t *)(puVar11 + 0x16) = *(int32_t *)(puVar13 + 0x16);
      *(int32_t *)((int64_t)puVar11 + 0xb4) = uVar6;
      *(int32_t *)(puVar11 + 0x17) = uVar3;
      *(int32_t *)((int64_t)puVar11 + 0xbc) = uVar4;
      function_24b8d0(puVar8);
      SystemCore_BufferManager(*(uint64_t *)(*(int64_t *)(param_1 + 0x38) + 0x398),&plStack_478);
      function_22cb40(*(uint64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x38) + 0x398) + 0x1b8),
                    &plStack_480);
      lVar14 = plStack_480[0x3c];
      plocal_var_268 = &processed_var_672_ptr;
      plocal_var_260 = stack_array_250;
      stack_array_250[0] = 0;
      local_var_258 = 0x19;
      strcpy_s(stack_array_250,0x20,&system_data_d598);
      uVar12 = SystemCore_LoggingSystem0(lVar14,&plocal_var_268,0);
      plVar10 = plStack_480;
      plocal_var_268 = &system_state_ptr;
      plStack_480[0x28] = plStack_480[0x28] | uVar12;
      function_22dd60(plStack_480);
      *(int16_t *)(plVar10 + 0x78) = 0xffff;
      UltraHighFreq_SecurityValidator1(plStack_478,&plStack_480);
      lVar14 = *(int64_t *)(*(int64_t *)(param_1 + 0x38) + 0x8218);
      local_var_2a8 = *(uint64_t *)(lVar14 + 0x70);
      local_var_2a0 = *(uint64_t *)(lVar14 + 0x78);
      local_var_298 = *(uint64_t *)(lVar14 + 0x80);
      local_var_290 = *(uint64_t *)(lVar14 + 0x88);
      local_var_288 = *(uint64_t *)(lVar14 + 0x90);
      local_var_280 = *(uint64_t *)(lVar14 + 0x98);
      local_var_278 = *(int32_t *)(lVar14 + 0xa0);
      local_var_274 = *(int32_t *)(lVar14 + 0xa4);
      local_var_26c = *(int32_t *)(lVar14 + 0xac);
      fStack_270 = *(float *)(*(int64_t *)(param_1 + 0x38) + 0x3ec4) - 3.0;
      local_var_368 = 0;
      local_var_360 = 0xffffffff;
      local_var_35c = 0xff00;
      local_var_358 = 0;
      local_var_350 = 0xffffffffffffffff;
      local_var_348 = 0xffffffff;
      local_var_344 = 0xff;
      local_var_340 = 0xffffffff;
      local_var_33c = 0;
      local_var_334 = 0x400;
      local_var_330 = 0;
      local_var_328 = 0;
      local_var_320 = 0;
      local_var_318 = 0;
      local_var_314 = 0;
      local_var_300 = 0;
      plocal_var_498 = &local_var_368;
      SystemHealthMonitor(plStack_478,puVar8,&local_var_2a8);
      if (*(char *)(*(int64_t *)(param_1 + 0x38) + 0x27b8) != '\0') {
        local_var_3d8 = 0;
        local_var_3cc = 0xff00;
        local_var_3c8 = 0;
        local_var_3c0 = 0xffffffffffffffff;
        local_var_3b8 = 0xffffffff;
        local_var_3b4 = 0xff;
        local_var_3b0 = 0xffffffff;
        local_var_3ac = 0;
        local_var_3a4 = 0x400;
        local_var_3a0 = 0;
        local_var_398 = 0;
        local_var_390 = 0;
        local_var_388 = 0;
        local_var_384 = 0;
        local_var_370 = 0;
        local_var_3d0 = 0;
        function_2ed230(*(uint64_t *)(*(int64_t *)(param_1 + 0x38) + 0x81f8),&plStack_488,0);
        if (plStack_488 != (int64_t *)0x0) {
          lVar14 = (**(code **)(*plStack_488 + 0x178))();
          *(int32_t *)(lVar14 + 0x2c4) = 0x3f800000;
          plocal_var_498 = &local_var_3d8;
          (**(code **)(*plStack_488 + 0x1c8))
                    (plStack_488,puVar8,*(int64_t *)(param_1 + 0x38),
                     *(int64_t *)(*(int64_t *)(param_1 + 0x38) + 0x81f8) + 0x70);
        }
        plocal_var_498 = &local_var_3d8;
        (**(code **)(*plStack_488 + 0x1c8))
                  (plStack_488,puVar8,*(int64_t *)(param_1 + 0x38),
                   *(int64_t *)(*(int64_t *)(param_1 + 0x38) + 0x81f8) + 0x70);
        if (plStack_488 != (int64_t *)0x0) {
          (**(code **)(*plStack_488 + 0x38))();
        }
      }
      if (plStack_480 != (int64_t *)0x0) {
        (**(code **)(*plStack_480 + 0x38))();
      }
      if (plStack_478 != (int64_t *)0x0) {
        (**(code **)(*plStack_478 + 0x38))();
      }
    }
    LOCK();
    piVar1 = (int *)(param_2 + 0x11a48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    *(int32_t **)(param_2 + 0x9a48 + (int64_t)iVar2 * 8) = puVar8;
    uVar15 = *(uint64_t *)(param_2 + 0x9a3c);
    *(uint64_t *)(puVar8 + 0x268d) = *(uint64_t *)(param_2 + 0x9a34);
    *(uint64_t *)(puVar8 + 0x268f) = uVar15;
    if (aplStack_428[0] != (int64_t *)0x0) {
      (**(code **)(*aplStack_428[0] + 0x38))();
    }
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_4b8);
  }
  plocal_var_470 = &system_data_buffer_ptr;
  local_var_458 = 0;
  plocal_var_468 = (uint64_t *)0x0;
  local_var_460 = 0;
  puVar9 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar9 = 0;
  plocal_var_468 = puVar9;
  uVar6 = CoreEngineSystemCleanup(puVar9);
  local_var_458 = CONCAT44(local_var_458._4_4_,uVar6);
  *puVar9 = 0x616d776f64616873;
  puVar9[1] = 0x68706172675f70;
  local_var_460 = 0xf;
  plVar10 = (int64_t *)Network_DataSerializer();
  if (plVar10 != (int64_t *)0x0) {
    plStack_418 = plVar10;
    (**(code **)(*plVar10 + 0x28))(plVar10);
  }
  plStack_418 = *(int64_t **)(puVar8 + 0x2674);
  *(int64_t **)(puVar8 + 0x2674) = plVar10;
  if (plStack_418 != (int64_t *)0x0) {
    (**(code **)(*plStack_418 + 0x38))();
  }
  plocal_var_470 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar9);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t * function_3191b0(int64_t param_1)
{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  int64_t *plVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x150,8,3,0xfffffffffffffffe);
  plVar3 = (int64_t *)function_31ba60(uVar2,param_1);
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
  lVar6 = (int64_t)puVar8 - (int64_t)puVar5 >> 3;
  if (lVar6 == 0) {
    lVar6 = 1;
LAB_180319258:
    puVar4 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar6 * 8,*(int8_t *)(param_1 + 0x28));
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
  plVar1 = *(int64_t **)(param_1 + 0x18);
  plVar7 = *(int64_t **)(param_1 + 0x10);
  if (plVar7 != plVar1) {
    do {
      if ((int64_t *)*plVar7 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar7 + 0x38))();
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
    plVar7 = *(int64_t **)(param_1 + 0x10);
  }
  if (plVar7 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(plVar7);
  }
  *(uint64_t **)(param_1 + 0x10) = puVar9;
  *(uint64_t **)(param_1 + 0x18) = puVar4 + 1;
  *(uint64_t **)(param_1 + 0x20) = puVar9 + lVar6;
LAB_1803192f8:
  *(int32_t *)(param_1 + 0x30) = 0xffffffff;
  return plVar3;
}
int64_t * function_319320(int64_t param_1,int64_t *param_2,int32_t *param_3,uint64_t param_4)
{
  int64_t lVar1;
  int32_t uVar2;
  void *plocal_var_48;
  int32_t *plocal_var_40;
  int32_t local_var_38;
  int32_t local_var_34;
  uint64_t local_var_30;
  uint64_t local_var_28;
  uint64_t local_var_20;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  function_198890(*(uint64_t *)(param_1 + 0x38),param_2,4,param_4,0,0xfffffffffffffffe);
  uVar2 = 1;
  plocal_var_48 = (void *)0x3f800000;
  plocal_var_40 = (int32_t *)0x0;
  local_var_38 = 0;
  local_var_34 = 0x3f800000;
  local_var_30 = 0;
  local_var_28 = 0;
  local_var_20 = 0x3f800000;
  local_var_18 = *param_3;
  local_var_14 = param_3[1];
  local_var_10 = param_3[2];
  local_var_c = param_3[3];
  NetworkProtocol_Transmitter(*param_2,&plocal_var_48);
  function_170ac0(*param_2,&processed_var_6072_ptr);
  lVar1 = *param_2;
  if ((*(uint *)(lVar1 + 0x2c4) & 2) == 0) {
    *(uint *)(lVar1 + 0x2c4) = *(uint *)(lVar1 + 0x2c4) | 2;
    if ((*(int64_t *)(lVar1 + 0x20) != 0) &&
       (*(char *)(*(int64_t *)(lVar1 + 0x20) + 0x60cb0) == '\0')) {
      RenderingSystem_UpdateCamera(lVar1,0);
    }
  }
  plocal_var_48 = &system_data_buffer_ptr;
  local_var_30 = 0;
  plocal_var_40 = (int32_t *)0x0;
  local_var_38 = 0;
  CoreEngineDataBufferProcessor(&plocal_var_48,0x12);
  *plocal_var_40 = 0x6c666552;
  plocal_var_40[1] = 0x69746365;
  plocal_var_40[2] = 0x61436e6f;
  plocal_var_40[3] = 0x72757470;
  *(int16_t *)(plocal_var_40 + 4) = 0x7265;
  *(int8_t *)((int64_t)plocal_var_40 + 0x12) = 0;
  local_var_38 = 0x12;
  lVar1 = function_3543b0(*param_2,&plocal_var_48,1,0,uVar2);
  if (*(char *)(lVar1 + 0x90) != '\x01') {
    *(int8_t *)(lVar1 + 0x90) = 1;
    *(int8_t *)(*(int64_t *)(lVar1 + 0x70) + 0x148) = 1;
  }
  return param_2;
}
int64_t * function_319490(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  uint uVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  float fVar8;
  float fStackX_8;
  float fStackX_c;
  float fStackX_18;
  float fStackX_1c;
  int32_t uVar9;
  void *plocal_var_90;
  int32_t *plocal_var_88;
  int32_t local_var_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  uint64_t local_var_40;
  float fStack_38;
  float fStack_34;
  uint64_t local_var_30;
  local_var_70 = 0xfffffffffffffffe;
  uVar6 = 0;
  function_198890(*(uint64_t *)(param_1 + 0x38),param_2,5,param_4,0);
  uVar9 = 1;
  lVar4 = *param_2;
  uVar1 = *(uint *)(lVar4 + 0x2ac);
  *(uint *)(lVar4 + 0x2ac) = uVar1 | 0x1020000;
  function_2ee810(lVar4,uVar1);
  function_2ee990(lVar4,uVar1);
  lVar4 = *param_2;
  uVar1 = *(uint *)(lVar4 + 0x2c4);
  if ((uVar1 & 4) == 0) {
    *(uint *)(lVar4 + 0x2c4) = uVar1 | 4;
    if (((*(int64_t *)(lVar4 + 0x20) != 0) &&
        (*(char *)(*(int64_t *)(lVar4 + 0x20) + 0x60cb0) == '\0')) && ((uVar1 & 2) != 0)) {
      RenderingSystem_UpdateCamera(lVar4,0);
    }
  }
  lVar4 = *(int64_t *)(param_1 + 0x38);
  lVar3 = *(int64_t *)(lVar4 + 0x60b80);
  if (lVar3 == 0) {
    fStackX_8 = (float)*(uint64_t *)(lVar4 + 0x464);
    fStackX_18 = (float)*(uint64_t *)(lVar4 + 0x454);
    fStackX_8 = fStackX_8 + fStackX_18;
    fStackX_c = (float)((uint64_t)*(uint64_t *)(lVar4 + 0x464) >> 0x20);
    fStackX_1c = (float)((uint64_t)*(uint64_t *)(lVar4 + 0x454) >> 0x20);
    fStackX_c = fStackX_c + fStackX_1c;
  }
  else {
    fStackX_8 = *(float *)(lVar3 + 0x20);
    fStackX_c = *(float *)(lVar3 + 0x24);
  }
  fStackX_8 = fStackX_8 * 0.5;
  fVar8 = *(float *)(lVar4 + 0x46c) + 5.0;
  function_170ac0(*param_2,&processed_var_6040_ptr);
  lVar4 = *param_2;
  if ((*(uint *)(lVar4 + 0x2c4) & 2) == 0) {
    *(uint *)(lVar4 + 0x2c4) = *(uint *)(lVar4 + 0x2c4) | 2;
    if ((*(int64_t *)(lVar4 + 0x20) != 0) &&
       (*(char *)(*(int64_t *)(lVar4 + 0x20) + 0x60cb0) == '\0')) {
      RenderingSystem_UpdateCamera(lVar4,0);
    }
  }
  plocal_var_90 = &system_data_buffer_ptr;
  local_var_78 = 0;
  plocal_var_88 = (int32_t *)0x0;
  local_var_80 = 0;
  CoreEngineDataBufferProcessor(&plocal_var_90,0x12);
  *plocal_var_88 = 0x6c666552;
  plocal_var_88[1] = 0x69746365;
  plocal_var_88[2] = 0x61436e6f;
  plocal_var_88[3] = 0x72757470;
  *(int16_t *)(plocal_var_88 + 4) = 0x7265;
  *(int8_t *)((int64_t)plocal_var_88 + 0x12) = 0;
  local_var_80 = 0x12;
  lVar3 = function_3543b0(*param_2,&plocal_var_90,1,0,uVar9,fStackX_8,fVar8);
  local_var_68 = 0x3f800000;
  local_var_60 = 0;
  local_var_58 = 0x3f80000000000000;
  local_var_50 = 0;
  local_var_48 = 0;
  local_var_40 = 0x3f800000;
  lVar4 = *(int64_t *)(param_1 + 0x38);
  if (*(int64_t *)(lVar4 + 0x60b80) != 0) {
    *(int8_t *)(lVar3 + 0x92) = 1;
    *(int8_t *)(*(int64_t *)(lVar3 + 0x70) + 0x149) = 1;
    lVar4 = *(int64_t *)(param_1 + 0x38);
  }
  _fStack_38 = CONCAT44(fStackX_c * 0.5,fStackX_8);
  local_var_30 = (uint64_t)*(uint *)(lVar4 + 0x3ec4);
  NetworkProtocol_Transmitter(*param_2,&local_var_68);
  if (*(char *)(lVar3 + 0x90) != '\0') {
    *(int8_t *)(lVar3 + 0x90) = 0;
    *(int8_t *)(*(int64_t *)(lVar3 + 0x70) + 0x148) = 0;
  }
  *(int8_t *)(lVar3 + 0x91) = 1;
  *(int8_t *)(*(int64_t *)(lVar3 + 0x70) + 0x14a) = 1;
  plVar5 = *(int64_t **)(param_1 + 0x10);
  iVar2 = (int)(*(int64_t *)(param_1 + 0x18) - (int64_t)plVar5 >> 3);
  if (0 < iVar2) {
    uVar7 = uVar6;
    do {
      if (*(char *)(*plVar5 + 0x14a) != '\0') {
        *(int *)(param_1 + 0x34) = (int)uVar7;
        return param_2;
      }
      uVar7 = (uint64_t)((int)uVar7 + 1);
      uVar6 = uVar6 + 1;
      plVar5 = plVar5 + 1;
    } while ((int64_t)uVar6 < (int64_t)iVar2);
  }
  *(int32_t *)(param_1 + 0x34) = 0xffffffff;
  return param_2;
}
int64_t * function_319780(int64_t param_1)
{
  int64_t *plVar1;
  if (*(char *)(*(int64_t *)(param_1 + 0x38) + 0x331d) == '\0') {
    if (*(int *)(param_1 + 0x30) == -1) {
      if (*(int64_t **)(param_1 + 0x10) == *(int64_t **)(param_1 + 0x18)) goto LAB_1803197a7;
      plVar1 = *(int64_t **)(**(int64_t **)(param_1 + 0x10) + 0x100);
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
    }
    else {
      plVar1 = *(int64_t **)
                (*(int64_t *)
                  (*(int64_t *)(param_1 + 0x10) + (int64_t)*(int *)(param_1 + 0x30) * 8) + 0x100);
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
    }
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))(plVar1);
    }
    return plVar1;
  }
LAB_1803197a7:
  return *(int64_t **)(*(int64_t *)(param_1 + 0x38) + 0x31c0);
}
// 函数: void function_319840(int64_t param_1)
void function_319840(int64_t param_1)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  plVar1 = (int64_t *)(param_1 + 0x10);
  plVar2 = *(int64_t **)(param_1 + 0x18);
  plVar3 = (int64_t *)*plVar1;
  if (plVar3 != plVar2) {
    do {
      if ((int64_t *)*plVar3 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar3 + 0x38))();
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2);
    plVar3 = (int64_t *)*plVar1;
  }
  *(int64_t **)(param_1 + 0x18) = plVar3;
  if (*(int64_t **)(param_1 + 0x58) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x58) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x48) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x48) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x40) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x40) + 0x38))();
  }
  plVar2 = *(int64_t **)(param_1 + 0x18);
  for (plVar3 = (int64_t *)*plVar1; plVar3 != plVar2; plVar3 = plVar3 + 1) {
    if ((int64_t *)*plVar3 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar3 + 0x38))();
    }
  }
  if (*plVar1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address