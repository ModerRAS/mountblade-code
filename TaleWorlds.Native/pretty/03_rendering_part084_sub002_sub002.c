#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part084_sub002_sub002.c - 1 个函数
// 函数: void function_316460(int *param_1,int64_t param_2,uint64_t param_3)
void function_316460(int *param_1,int64_t param_2,uint64_t param_3)
{
  void **ppuVar1;
  int64_t *plVar2;
  int32_t uVar3;
  code *pcVar4;
  int64_t lVar5;
  bool bVar6;
  uint uVar7;
  int32_t uVar8;
  uint uVar9;
  uint64_t uVar10;
  int64_t **pplVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  uint64_t *puVar14;
  int64_t *plVar15;
  int64_t *plVar16;
  int64_t **pplVar17;
  void **ppuVar18;
  void **ppuVar19;
  int64_t ***ppplVar20;
  int64_t lVar21;
  int iVar22;
  int64_t lVar23;
  uint unaff_ESI;
  int64_t **pplVar24;
  char cVar25;
  void *puVar26;
  int iVar27;
  bool bVar28;
  int32_t extraout_XMM0_Da;
  int8_t stack_array_678 [32];
  int32_t local_var_658;
  int32_t local_var_650;
  int32_t local_var_648;
  int32_t local_var_640;
  int32_t local_var_638;
  uint64_t local_var_630;
  int8_t local_var_628;
  int32_t local_var_620;
  int8_t local_var_618;
  uint local_var_614;
  int64_t ***ppplStack_610;
  int64_t ***ppplStack_608;
  uint local_var_600;
  int64_t **pplStack_5f8;
  int64_t lStack_5f0;
  uint64_t *plocal_var_5e8;
  int64_t lStack_5e0;
  int64_t **pplStack_5d8;
  void **pplocal_var_5d0;
  uint64_t local_var_5c8;
  uint64_t local_var_5c0;
  uint64_t local_var_5b8;
  uint64_t local_var_5b0;
  int64_t **pplStack_5a8;
  int64_t *plStack_5a0;
  int64_t **pplStack_598;
  void ***ppplocal_var_590;
  int64_t *plStack_588;
  int64_t *plStack_580;
  void *plocal_var_578;
  uint64_t *plocal_var_570;
  int32_t local_var_568;
  uint64_t local_var_560;
  void *plocal_var_558;
  uint64_t *plocal_var_550;
  int32_t local_var_548;
  uint64_t local_var_540;
  uint64_t local_var_538;
  uint64_t local_var_530;
  int64_t *plStack_528;
  void ***ppplocal_var_520;
  int64_t *plStack_518;
  int64_t **pplStack_510;
  void **pplocal_var_508;
  void **pplocal_var_500;
  int *piStack_4f8;
  int64_t *plStack_4f0;
  int64_t *plStack_4e8;
  int64_t *plStack_4e0;
  int64_t *plStack_4d8;
  int64_t *plStack_4d0;
  int64_t *plStack_4c8;
  int64_t *plStack_4c0;
  int64_t *plStack_4b8;
  int32_t local_var_4b0;
  int32_t local_var_4ac;
  uint64_t local_var_4a8;
  uint64_t local_var_4a0;
  uint local_var_498;
  int32_t local_var_494;
  void **pplocal_var_490;
  int64_t **pplStack_488;
  int64_t *plStack_480;
  void **pplocal_var_478;
  int64_t *plStack_470;
  int64_t **pplStack_468;
  int64_t **pplStack_460;
  uint64_t local_var_458;
  void **pplocal_var_450;
  void **pplocal_var_448;
  int64_t *plStack_438;
  int64_t *plStack_430;
  int32_t local_var_428;
  int32_t local_var_424;
  int8_t local_var_420;
  uint8_t local_var_41f;
  int64_t *plStack_418;
  int64_t *plStack_410;
  int64_t *plStack_408;
  int64_t *plStack_400;
  int64_t *plStack_3f8;
  int64_t *plStack_3f0;
  int64_t *plStack_3e8;
  int64_t *plStack_3e0;
  int64_t *plStack_3d8;
  int64_t *plStack_3d0;
  int64_t *plStack_3c8;
  int64_t *plStack_3c0;
  int64_t *plStack_3b8;
  int64_t *plStack_3b0;
  int64_t *plStack_3a8;
  int32_t local_var_3a0;
  int32_t local_var_39c;
  int64_t *plStack_398;
  int64_t *plStack_390;
  int iStack_388;
  uint local_var_384;
  uint local_var_380;
  int iStack_37c;
  uint local_var_378;
  uint local_var_374;
  int32_t local_var_370;
  int32_t local_var_36c;
  int32_t local_var_368;
  int32_t local_var_364;
  int32_t local_var_360;
  int32_t local_var_35c;
  void *plocal_var_358;
  int8_t *plocal_var_350;
  int32_t local_var_348;
  int32_t local_var_344;
  int8_t local_var_340;
  uint8_t local_var_33f;
  void *plocal_var_338;
  void *plocal_var_330;
  void *plocal_var_328;
  void *plocal_var_320;
  void *plocal_var_318;
  void *plocal_var_310;
  void *plocal_var_308;
  void *plocal_var_300;
  void *plocal_var_2f8;
  void *plocal_var_2f0;
  void *plocal_var_2e8;
  void *plocal_var_2e0;
  void *plocal_var_2d8;
  void *plocal_var_2d0;
  void *plocal_var_2c8;
  int32_t local_var_2c0;
  int32_t local_var_2bc;
  void *plocal_var_2b8;
  int64_t **pplStack_2b0;
  int iStack_2a8;
  uint local_var_2a4;
  uint local_var_2a0;
  int iStack_29c;
  uint local_var_298;
  uint local_var_294;
  int32_t local_var_290;
  int32_t local_var_28c;
  int32_t local_var_288;
  int32_t local_var_284;
  int32_t local_var_280;
  int32_t local_var_27c;
  void *plocal_var_278;
  int8_t *plocal_var_270;
  int32_t local_var_268;
  int8_t stack_array_260 [128];
  int32_t local_var_1e0;
  uint64_t local_var_1d8;
  int64_t **pplStack_1d0;
  void *plocal_var_198;
  int8_t *plocal_var_190;
  int32_t local_var_188;
  int8_t stack_array_180 [128];
  int32_t local_var_100;
  uint64_t local_var_f8;
  int64_t **pplStack_f0;
  void *plocal_var_b8;
  int8_t *plocal_var_b0;
  int32_t local_var_a8;
  int8_t stack_array_a0 [32];
  void *plocal_var_80;
  int8_t *plocal_var_78;
  int32_t local_var_70;
  int8_t stack_array_68 [32];
  uint64_t local_var_48;
  local_var_458 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_678;
  local_var_600 = 0;
  lVar23 = *(int64_t *)(param_1 + 6) - *(int64_t *)(param_1 + 4) >> 3;
  lStack_5f0 = param_2;
  lStack_5e0 = lVar23;
  piStack_4f8 = param_1;
  if ((param_1[0xc] == -1) ||
     (*(char *)(*(int64_t *)(*(int64_t *)(param_1 + 4) + (int64_t)param_1[0xc] * 8) + 0x148) ==
      '\0')) {
    SystemFunction_0001801be740(param_1);
  }
  iVar27 = (int)lVar23;
  if (iVar27 < 1) {
    plVar13 = (int64_t *)(param_1 + 0x16);
    plStack_528 = plVar13;
    if (((*plVar13 == 0) || (*(short *)(*plVar13 + 0x332) != 6)) || (param_1[2] != 1)) {
      plVar15 = *(int64_t **)(*(int64_t *)(param_1 + 0xe) + 0x31c0);
      plStack_5a0 = plVar15;
      if (plVar15 == (int64_t *)0x0) {
        plVar15 = (int64_t *)function_0bde30();
        uVar8 = extraout_XMM0_Da;
        if (plVar15 != (int64_t *)0x0) {
          plStack_4d0 = plVar15;
          uVar8 = (**(code **)(*plVar15 + 0x28))(plVar15);
        }
        plStack_4d0 = (int64_t *)0x0;
        plStack_5a0 = plVar15;
      }
      else {
        uVar8 = (**(code **)(*plVar15 + 0x28))(plVar15);
      }
      plVar12 = plStack_5a0;
      if ((int)plVar15[0x70] != 2) {
        uVar3 = *(int32_t *)(param_2 + 0x1bd4);
        plStack_470 = plStack_5a0;
        if (plStack_5a0 != (int64_t *)0x0) {
          uVar8 = (**(code **)(*plStack_5a0 + 0x28))(plStack_5a0);
        }
        function_0b4e00(uVar8,plVar12,uVar3);
        param_2 = lStack_5f0;
        if (plVar12 != (int64_t *)0x0) {
          (**(code **)(*plVar12 + 0x38))(plVar12);
          param_2 = lStack_5f0;
        }
      }
      uVar7 = 0x80;
      iVar27 = -1;
      do {
        iVar22 = iVar27;
        uVar7 = uVar7 >> 1;
        iVar27 = iVar22 + 1;
      } while (uVar7 != 0);
      uVar7 = iVar22 + 2;
      uVar10 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3b0,0x10,3);
      uVar10 = RenderingSystem_23A2E0(uVar10,0);
      SystemCore_PointerManager(plVar13,uVar10);
      plocal_var_558 = &system_data_buffer_ptr;
      local_var_540 = 0;
      plocal_var_550 = (uint64_t *)0x0;
      local_var_548 = 0;
      plocal_var_550 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
      *(int8_t *)plocal_var_550 = 0;
      uVar8 = CoreEngineSystemCleanup(plocal_var_550);
      local_var_540 = CONCAT44(local_var_540._4_4_,uVar8);
      *plocal_var_550 = 0x635f6c61626f6c67;
      *(int32_t *)(plocal_var_550 + 1) = 0x6d656275;
      *(int16_t *)((int64_t)plocal_var_550 + 0xc) = 0x7061;
      *(int8_t *)((int64_t)plocal_var_550 + 0xe) = 0;
      local_var_548 = 0xe;
      puVar26 = &system_buffer_ptr;
      if (*(void **)(param_2 + 0x3528) != (void *)0x0) {
        puVar26 = *(void **)(param_2 + 0x3528);
      }
      System_DataHandler(&plocal_var_558,&processed_var_5464_ptr,puVar26);
      puVar14 = (uint64_t *)&system_buffer_ptr;
      if (plocal_var_550 != (uint64_t *)0x0) {
        puVar14 = plocal_var_550;
      }
      (**(code **)(*(int64_t *)(*plVar13 + 0x10) + 0x10))((int64_t *)(*plVar13 + 0x10),puVar14);
      *(int32_t *)(*plVar13 + 0x32c) = 0x800080;
      lVar23 = *plVar13;
      *(char *)(lVar23 + 0x335) = (char)uVar7;
      *(uint *)(lVar23 + 0x35c) = uVar7;
      pplVar24 = (int64_t **)0x6;
      ppplStack_610 = (int64_t ***)0x6;
      *(int16_t *)(*plVar13 + 0x332) = 6;
      *(uint *)(*(int64_t *)(param_1 + 0x16) + 0x328) =
           *(uint *)(*(int64_t *)(param_1 + 0x16) + 0x328) | 0x2000;
      *(int32_t *)(*(int64_t *)(param_1 + 0x16) + 0x324) = 0x1e;
      pplVar11 = (int64_t **)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x40,8,3);
      pplVar17 = pplVar11 + 1;
      *pplVar17 = (int64_t *)0x0;
      pplVar11[2] = (int64_t *)0x0;
      pplVar11[3] = (int64_t *)0x0;
      *(int32_t *)(pplVar11 + 4) = 3;
      pplVar11[5] = (int64_t *)0x0;
      pplVar11[7] = (int64_t *)0x0;
      *(int32_t *)(pplVar11 + 6) = 0xffffffff;
      ppplStack_608 = (int64_t ***)pplVar17;
      pplStack_598 = pplVar11;
      function_31bd10(pplVar17,6);
      do {
        plVar15 = (int64_t *)0x0;
        local_var_4b0 = 0;
        local_var_4a8 = 0;
        local_var_4a0 = 0;
        local_var_498 = local_var_498 & 0xffffff00;
        plVar13 = pplVar11[2];
        if (plVar13 < pplVar11[3]) {
          pplVar11[2] = plVar13 + 4;
          *(int32_t *)plVar13 = 0;
          *(int32_t *)((int64_t)plVar13 + 4) = local_var_4ac;
          *(int32_t *)(plVar13 + 1) = 0;
          *(int32_t *)((int64_t)plVar13 + 0xc) = 0;
          *(int32_t *)(plVar13 + 2) = 0;
          *(int32_t *)((int64_t)plVar13 + 0x14) = 0;
          *(uint *)(plVar13 + 3) = local_var_498;
          *(int32_t *)((int64_t)plVar13 + 0x1c) = local_var_494;
          ppplStack_610 = (int64_t ***)pplVar24;
        }
        else {
          plVar16 = *pplVar17;
          lVar23 = (int64_t)plVar13 - (int64_t)plVar16 >> 5;
          if (lVar23 == 0) {
            lVar23 = 1;
LAB_180316e53:
            plVar15 = (int64_t *)
                      CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar23 << 5,*(int8_t *)(pplVar11 + 4));
            plVar13 = pplVar11[2];
            plVar16 = *pplVar17;
          }
          else {
            lVar23 = lVar23 * 2;
            if (lVar23 != 0) goto LAB_180316e53;
          }
          lVar21 = (int64_t)plVar13 - (int64_t)plVar16 >> 5;
          plVar13 = plVar15;
          if (0 < lVar21) {
            do {
              plVar2 = (int64_t *)(((int64_t)plVar16 - (int64_t)plVar15) + (int64_t)plVar13);
              lVar5 = plVar2[1];
              *plVar13 = *plVar2;
              plVar13[1] = lVar5;
              plVar2 = (int64_t *)
                       (((int64_t)plVar16 - (int64_t)plVar15) + 0x10 + (int64_t)plVar13);
              lVar5 = plVar2[1];
              plVar13[2] = *plVar2;
              plVar13[3] = lVar5;
              lVar21 = lVar21 + -1;
              plVar13 = plVar13 + 4;
            } while (0 < lVar21);
          }
          *(int32_t *)plVar13 = local_var_4b0;
          *(int32_t *)((int64_t)plVar13 + 4) = local_var_4ac;
          *(int32_t *)(plVar13 + 1) = (int32_t)local_var_4a8;
          *(int32_t *)((int64_t)plVar13 + 0xc) = local_var_4a8._4_4_;
          *(int32_t *)(plVar13 + 2) = (int32_t)local_var_4a0;
          *(int32_t *)((int64_t)plVar13 + 0x14) = local_var_4a0._4_4_;
          *(uint *)(plVar13 + 3) = local_var_498;
          *(int32_t *)((int64_t)plVar13 + 0x1c) = local_var_494;
          pplStack_5f8 = (int64_t **)(plVar13 + 4);
          if (*pplVar17 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          *pplVar17 = plVar15;
          pplVar11[2] = (int64_t *)pplStack_5f8;
          pplVar11[3] = plVar15 + lVar23 * 4;
        }
        pplVar24 = (int64_t **)((int64_t)ppplStack_610 + -1);
        ppplStack_610 = (int64_t ***)pplVar24;
      } while (pplVar24 != (int64_t **)0x0);
      *(int32_t *)((int64_t)pplStack_598 + 4) = 1;
      *(int32_t *)pplStack_598 = 0;
      *(int32_t *)(pplStack_598 + 6) = *(int32_t *)(lStack_5f0 + 0x1bd4);
      ppplStack_608 = (int64_t ***)&plocal_var_198;
      plocal_var_198 = &memory_allocator_3432_ptr;
      plocal_var_190 = stack_array_180;
      local_var_188 = 0;
      stack_array_180[0] = 0;
      local_var_100 = 1;
      local_var_f8 = *(uint64_t *)(param_1 + 0x16);
      pplStack_f0 = pplStack_598;
      uVar10 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
      pplVar17 = (int64_t **)SystemCore_StreamController(uVar10,&plocal_var_198);
      pplStack_5f8 = pplVar17;
      pplStack_468 = pplVar17;
      if (pplVar17 != (int64_t **)0x0) {
        (*(code *)(*pplVar17)[5])(pplVar17);
      }
      lVar23 = system_context_ptr;
      ppplStack_608 = &pplStack_598;
      pplStack_598 = pplVar17;
      if (pplVar17 != (int64_t **)0x0) {
        (*(code *)(*pplVar17)[5])(pplVar17);
      }
      SystemPerformance_Monitor(lVar23,&pplStack_598);
      *param_1 = *param_1 + 1;
      iVar27 = 0;
      do {
        uVar9 = 0;
        if (uVar7 != 0) {
          ppplStack_608 = &pplStack_5d8;
          do {
            ppplStack_610 = (int64_t ***)&plStack_438;
            plStack_438 = (int64_t *)&memory_allocator_3432_ptr;
            plStack_430 = (int64_t *)&local_var_420;
            local_var_428 = 0;
            local_var_420 = 0;
            local_var_3a0 = 5;
            plStack_398 = (int64_t *)*plStack_528;
            plStack_390 = plVar12;
            iStack_388 = iVar27;
            local_var_384 = uVar9;
            local_var_380 = uVar7;
            iStack_37c = iVar27;
            local_var_378 = uVar9;
            local_var_374 = uVar7;
            pplVar17 = (int64_t **)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
            *pplVar17 = (int64_t *)&system_handler1_ptr;
            *pplVar17 = (int64_t *)&system_handler2_ptr;
            *(int32_t *)(pplVar17 + 1) = 0;
            *pplVar17 = (int64_t *)&script_config_ptr;
            LOCK();
            *(int8_t *)(pplVar17 + 2) = 0;
            UNLOCK();
            pplVar17[3] = (int64_t *)0xffffffffffffffff;
            *pplVar17 = (int64_t *)&processed_var_8464_ptr;
            pplStack_5d8 = pplVar17 + 4;
            *pplStack_5d8 = (int64_t *)&system_state_ptr;
            pplVar17[5] = (int64_t *)0x0;
            *(int32_t *)(pplVar17 + 6) = 0;
            *pplStack_5d8 = (int64_t *)&memory_allocator_3432_ptr;
            pplVar17[5] = (int64_t *)(pplVar17 + 7);
            *(int32_t *)(pplVar17 + 6) = 0;
            *(int8_t *)(pplVar17 + 7) = 0;
            *pplStack_5d8 = plStack_438;
            pplVar17[5] = plStack_430;
            pplVar17[6] = (int64_t *)CONCAT44(local_var_424,local_var_428);
            pplVar17[7] = (int64_t *)CONCAT71(local_var_41f,local_var_420);
            pplVar17[8] = plStack_418;
            pplVar17[9] = plStack_410;
            pplVar17[10] = plStack_408;
            pplVar17[0xb] = plStack_400;
            pplVar17[0xc] = plStack_3f8;
            pplVar17[0xd] = plStack_3f0;
            pplVar17[0xe] = plStack_3e8;
            pplVar17[0xf] = plStack_3e0;
            pplVar17[0x10] = plStack_3d8;
            pplVar17[0x11] = plStack_3d0;
            pplVar17[0x12] = plStack_3c8;
            pplVar17[0x13] = plStack_3c0;
            pplVar17[0x14] = plStack_3b8;
            pplVar17[0x15] = plStack_3b0;
            pplVar17[0x16] = plStack_3a8;
            pplVar17[0x17] = (int64_t *)CONCAT44(local_var_39c,local_var_3a0);
            pplVar17[0x18] = plStack_398;
            pplVar17[0x19] = plStack_390;
            pplVar17[0x1a] = (int64_t *)CONCAT44(local_var_384,iStack_388);
            pplVar17[0x1b] = (int64_t *)CONCAT44(iStack_37c,local_var_380);
            *(uint *)(pplVar17 + 0x1c) = local_var_378;
            *(uint *)((int64_t)pplVar17 + 0xe4) = local_var_374;
            *(int32_t *)(pplVar17 + 0x1d) = local_var_370;
            *(int32_t *)((int64_t)pplVar17 + 0xec) = local_var_36c;
            *(int32_t *)(pplVar17 + 0x1e) = local_var_368;
            *(int32_t *)((int64_t)pplVar17 + 0xf4) = local_var_364;
            *(int32_t *)(pplVar17 + 0x1f) = local_var_360;
            *(int32_t *)((int64_t)pplVar17 + 0xfc) = local_var_35c;
            *(int32_t *)(pplVar17 + 0x17) = local_var_3a0;
            ppplStack_610 = (int64_t ***)pplVar17;
            pplStack_5a8 = pplStack_5d8;
            pplStack_460 = pplVar17;
            (*(code *)(*pplVar17)[5])(pplVar17);
            lVar23 = system_context_ptr;
            ppplStack_610 = &pplStack_5d8;
            pplStack_5d8 = pplVar17;
            (*(code *)(*pplVar17)[5])(pplVar17);
            puVar14 = *(uint64_t **)(*(int64_t *)(lVar23 + 8) + 8);
            pcVar4 = *(code **)*puVar14;
            ppplStack_610 = &pplStack_510;
            pplStack_510 = pplStack_5d8;
            if (pplStack_5d8 != (int64_t **)0x0) {
              (*(code *)(*pplStack_5d8)[5])();
            }
            (*pcVar4)(puVar14,&pplStack_510);
            if (pplStack_5d8 != (int64_t **)0x0) {
              (*(code *)(*pplStack_5d8)[7])();
            }
            (*(code *)(*pplVar17)[7])(pplVar17);
            ppplStack_610 = (int64_t ***)&plStack_438;
            plStack_438 = (int64_t *)&system_state_ptr;
            uVar9 = uVar9 + 1;
            plVar12 = plStack_5a0;
          } while (uVar9 < uVar7);
        }
        param_1 = piStack_4f8;
        iVar27 = iVar27 + 1;
      } while (iVar27 < 6);
      piStack_4f8[2] = 1;
      if (pplStack_5f8 != (int64_t **)0x0) {
        (*(code *)(*pplStack_5f8)[7])();
      }
      ppplStack_608 = (int64_t ***)&plocal_var_198;
      plocal_var_198 = &system_state_ptr;
      plocal_var_558 = &system_data_buffer_ptr;
      if (plocal_var_550 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      plocal_var_550 = (uint64_t *)0x0;
      local_var_540 = local_var_540 & 0xffffffff00000000;
      plocal_var_558 = &system_state_ptr;
      if (plVar12 != (int64_t *)0x0) {
        (**(code **)(*plVar12 + 0x38))(plVar12);
      }
    }
    plStack_4c8 = *(int64_t **)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    if (plStack_4c8 != (int64_t *)0x0) {
      (**(code **)(*plStack_4c8 + 0x38))();
    }
    plStack_4c0 = *(int64_t **)(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    if (plStack_4c0 != (int64_t *)0x0) {
      (**(code **)(*plStack_4c0 + 0x38))();
    }
  }
  else {
    local_var_614 = unaff_ESI & 0xffffff00;
    param_3 = param_3 & 0xffffffffffffff00;
    uVar7 = (uint)param_3;
    plVar13 = (int64_t *)(param_1 + 0x16);
    bVar6 = false;
    if (((*plVar13 != 0) && ((uint)*(ushort *)(*plVar13 + 0x332) == iVar27 * 6)) &&
       (bVar6 = false, param_1[2] == 2)) {
      bVar6 = true;
    }
    if (*(int64_t *)(param_1 + 0x10) != 0) {
      local_var_614 = (uint)(*(int *)(*(int64_t *)(param_1 + 0x10) + 0x3c) == iVar27);
    }
    uVar9 = local_var_614;
    if (*(int64_t *)(param_1 + 0x12) != 0) {
      bVar28 = *(int *)(*(int64_t *)(param_1 + 0x12) + 0x3c) == iVar27;
      param_3 = (uint64_t)bVar28;
      uVar7 = (uint)bVar28;
    }
    cVar25 = (char)param_3;
    plocal_var_5e8 = (uint64_t *)CONCAT44(plocal_var_5e8._4_4_,uVar7);
    plStack_528 = plVar13;
    if (!bVar6) {
      uVar7 = 0x80;
      iVar27 = -1;
      do {
        iVar22 = iVar27;
        uVar7 = uVar7 >> 1;
        iVar27 = iVar22 + 1;
      } while (uVar7 != 0);
      iVar22 = iVar22 + 2;
      uVar10 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3b0,0x10,3);
      uVar10 = RenderingSystem_23A2E0(uVar10,0);
      SystemCore_PointerManager(plVar13,uVar10);
      plocal_var_578 = &system_data_buffer_ptr;
      local_var_560 = 0;
      plocal_var_570 = (uint64_t *)0x0;
      local_var_568 = 0;
      plocal_var_570 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
      *(int8_t *)plocal_var_570 = 0;
      uVar8 = CoreEngineSystemCleanup(plocal_var_570);
      local_var_560 = CONCAT44(local_var_560._4_4_,uVar8);
      *plocal_var_570 = 0x5f70616d65627563;
      *(int32_t *)(plocal_var_570 + 1) = 0x61727261;
      *(int16_t *)((int64_t)plocal_var_570 + 0xc) = 0x79;
      local_var_568 = 0xd;
      puVar26 = &system_buffer_ptr;
      if (*(void **)(lStack_5f0 + 0x3528) != (void *)0x0) {
        puVar26 = *(void **)(lStack_5f0 + 0x3528);
      }
      System_DataHandler(&plocal_var_578,&processed_var_5464_ptr,puVar26);
      puVar14 = (uint64_t *)&system_buffer_ptr;
      if (plocal_var_570 != (uint64_t *)0x0) {
        puVar14 = plocal_var_570;
      }
      (**(code **)(*(int64_t *)(*(int64_t *)(param_1 + 0x16) + 0x10) + 0x10))
                ((int64_t *)(*(int64_t *)(param_1 + 0x16) + 0x10),puVar14);
      lVar21 = lStack_5e0;
      *(int32_t *)(*(int64_t *)(param_1 + 0x16) + 0x32c) = 0x800080;
      lVar23 = *(int64_t *)(param_1 + 0x16);
      *(char *)(lVar23 + 0x335) = (char)iVar22;
      *(int *)(lVar23 + 0x35c) = iVar22;
      *(short *)(*(int64_t *)(param_1 + 0x16) + 0x332) = (short)lStack_5e0 * 6;
      *(uint *)(*(int64_t *)(param_1 + 0x16) + 0x328) =
           *(uint *)(*(int64_t *)(param_1 + 0x16) + 0x328) | 0x2000;
      *(int32_t *)(*(int64_t *)(param_1 + 0x16) + 0x324) = 0x1e;
      pplVar11 = (int64_t **)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x40,8,3);
      pplVar17 = pplVar11 + 1;
      *pplVar17 = (int64_t *)0x0;
      pplVar11[2] = (int64_t *)0x0;
      pplVar11[3] = (int64_t *)0x0;
      *(int32_t *)(pplVar11 + 4) = 3;
      pplVar11[5] = (int64_t *)0x0;
      pplVar11[7] = (int64_t *)0x0;
      *(int32_t *)(pplVar11 + 6) = 0xffffffff;
      uVar7 = (int)lVar21 * 6;
      ppplStack_608 = (int64_t ***)pplVar17;
      pplStack_5f8 = pplVar11;
      function_31bd10(pplVar17);
      if (0 < (int)uVar7) {
        ppplStack_610 = (int64_t ***)(uint64_t)uVar7;
        do {
          plVar12 = local_var_5c8;
          local_var_5c8 = (int64_t *)((uint64_t)local_var_5c8 & 0xffffffff00000000);
          plVar15 = local_var_5c8;
          local_var_5c0 = (int64_t *)0x0;
          local_var_5b8 = (code *)0x0;
          local_var_5b0 = (code *)((uint64_t)local_var_5b0 & 0xffffffffffffff00);
          plVar13 = pplVar11[2];
          if (plVar13 < pplVar11[3]) {
            pplVar11[2] = plVar13 + 4;
            local_var_5c8._4_4_ = SUB84(plVar12,4);
            *(int32_t *)plVar13 = 0;
            *(int32_t *)((int64_t)plVar13 + 4) = local_var_5c8._4_4_;
            *(int32_t *)(plVar13 + 1) = 0;
            *(int32_t *)((int64_t)plVar13 + 0xc) = 0;
            plVar13[2] = 0;
            plVar13[3] = (int64_t)local_var_5b0;
            local_var_5c8 = plVar15;
          }
          else {
            plVar15 = *pplVar17;
            lVar23 = (int64_t)plVar13 - (int64_t)plVar15 >> 5;
            if (lVar23 == 0) {
              lVar23 = 1;
LAB_180316799:
              plVar12 = (int64_t *)
                        CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar23 << 5,*(int8_t *)(pplVar11 + 4));
              plVar13 = pplVar11[2];
              plVar15 = *pplVar17;
            }
            else {
              lVar23 = lVar23 * 2;
              if (lVar23 != 0) goto LAB_180316799;
              plVar12 = (int64_t *)0x0;
            }
            lVar21 = (int64_t)plVar13 - (int64_t)plVar15 >> 5;
            plVar13 = plVar12;
            if (0 < lVar21) {
              do {
                plVar16 = (int64_t *)((int64_t)plVar13 + ((int64_t)plVar15 - (int64_t)plVar12));
                lVar5 = plVar16[1];
                *plVar13 = *plVar16;
                plVar13[1] = lVar5;
                plVar16 = (int64_t *)
                          ((int64_t)plVar13 + ((int64_t)plVar15 - (int64_t)plVar12) + 0x10);
                lVar5 = plVar16[1];
                plVar13[2] = *plVar16;
                plVar13[3] = lVar5;
                lVar21 = lVar21 + -1;
                plVar13 = plVar13 + 4;
              } while (0 < lVar21);
            }
            *(int32_t *)plVar13 = (int32_t)local_var_5c8;
            *(int32_t *)((int64_t)plVar13 + 4) = local_var_5c8._4_4_;
            *(int32_t *)(plVar13 + 1) = (int32_t)local_var_5c0;
            *(int32_t *)((int64_t)plVar13 + 0xc) = local_var_5c0._4_4_;
            *(int32_t *)(plVar13 + 2) = (int32_t)local_var_5b8;
            *(int32_t *)((int64_t)plVar13 + 0x14) = local_var_5b8._4_4_;
            *(int32_t *)(plVar13 + 3) = (int32_t)local_var_5b0;
            *(int32_t *)((int64_t)plVar13 + 0x1c) = local_var_5b0._4_4_;
            if (*pplVar17 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            *pplVar17 = plVar12;
            pplVar11[2] = plVar13 + 4;
            pplVar11[3] = plVar12 + lVar23 * 4;
          }
          ppplStack_610 = (int64_t ***)((int64_t)ppplStack_610 - 1);
        } while (ppplStack_610 != (int64_t ***)0x0);
        ppplStack_610 = (int64_t ***)0x0;
        uVar9 = local_var_614;
      }
      *(int32_t *)((int64_t)pplStack_5f8 + 4) = 1;
      *(int32_t *)pplStack_5f8 = 0;
      *(int32_t *)(pplStack_5f8 + 6) = *(int32_t *)(lStack_5f0 + 0x1bd4);
      ppplStack_608 = (int64_t ***)&plocal_var_278;
      plocal_var_278 = &memory_allocator_3432_ptr;
      plocal_var_270 = stack_array_260;
      local_var_268 = 0;
      stack_array_260[0] = 0;
      local_var_1e0 = 1;
      local_var_1d8 = *(uint64_t *)(param_1 + 0x16);
      pplStack_1d0 = pplStack_5f8;
      uVar10 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
      plVar13 = (int64_t *)SystemCore_StreamController(uVar10,&plocal_var_278);
      plStack_480 = plVar13;
      if (plVar13 != (int64_t *)0x0) {
        (**(code **)(*plVar13 + 0x28))(plVar13);
      }
      lVar23 = system_context_ptr;
      ppplStack_608 = (int64_t ***)&plStack_518;
      plStack_518 = plVar13;
      if (plVar13 != (int64_t *)0x0) {
        (**(code **)(*plVar13 + 0x28))(plVar13);
      }
      SystemPerformance_Monitor(lVar23,&plStack_518);
      *param_1 = *param_1 + 1;
      param_1[2] = 2;
      if (plVar13 != (int64_t *)0x0) {
        (**(code **)(*plVar13 + 0x38))(plVar13);
      }
      ppplStack_608 = (int64_t ***)&plocal_var_278;
      plocal_var_278 = &system_state_ptr;
      plocal_var_578 = &system_data_buffer_ptr;
      if (plocal_var_570 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      plocal_var_570 = (uint64_t *)0x0;
      local_var_560 = local_var_560 & 0xffffffff00000000;
      plocal_var_578 = &system_state_ptr;
      cVar25 = (char)plocal_var_5e8;
      lVar23 = lStack_5e0;
    }
    if (((char)uVar9 == '\0') || (cVar25 == '\0')) {
      plocal_var_b8 = &processed_var_672_ptr;
      plocal_var_b0 = stack_array_a0;
      stack_array_a0[0] = 0;
      local_var_a8 = 0x17;
      uVar8 = strcpy_s(stack_array_a0,0x20,&processed_var_5440_ptr);
      lVar21 = lStack_5f0;
      local_var_620 = 4;
      local_var_628 = 1;
      local_var_630 = 0;
      local_var_640 = 0x10;
      local_var_648 = 0x21;
      local_var_650 = 3;
      local_var_658 = 0x21;
      local_var_638 = (int)lVar23;
      puVar14 = (uint64_t *)
                SystemCore_ConfigManager(uVar8,&plStack_4e8,*(int32_t *)(lStack_5f0 + 0x1bd4),&plocal_var_b8);
      uVar10 = *puVar14;
      *puVar14 = 0;
      plStack_4f0 = *(int64_t **)(param_1 + 0x10);
      *(uint64_t *)(param_1 + 0x10) = uVar10;
      if (plStack_4f0 != (int64_t *)0x0) {
        (**(code **)(*plStack_4f0 + 0x38))();
      }
      if (plStack_4e8 != (int64_t *)0x0) {
        (**(code **)(*plStack_4e8 + 0x38))();
      }
      plocal_var_b8 = &system_state_ptr;
      plocal_var_80 = &processed_var_672_ptr;
      plocal_var_78 = stack_array_68;
      stack_array_68[0] = 0;
      local_var_70 = 0x1a;
      uVar8 = strcpy_s(stack_array_68,0x20,&processed_var_5568_ptr);
      local_var_620 = 4;
      local_var_628 = 1;
      local_var_630 = 0;
      local_var_640 = 0x60;
      local_var_648 = 0;
      local_var_650 = 3;
      local_var_658 = 0x61;
      local_var_638 = (int)lVar23;
      puVar14 = (uint64_t *)
                SystemCore_ConfigManager(uVar8,&plStack_4d8,*(int32_t *)(lVar21 + 0x1bd4),&plocal_var_80);
      uVar10 = *puVar14;
      *puVar14 = 0;
      plStack_4e0 = *(int64_t **)(param_1 + 0x12);
      *(uint64_t *)(param_1 + 0x12) = uVar10;
      if (plStack_4e0 != (int64_t *)0x0) {
        (**(code **)(*plStack_4e0 + 0x38))();
      }
      if (plStack_4d8 != (int64_t *)0x0) {
        (**(code **)(*plStack_4d8 + 0x38))();
      }
      plocal_var_80 = &system_state_ptr;
      param_1[1] = param_1[1] + 1;
    }
  }
  local_var_618 = 0;
  local_var_614 = 0;
  if (0 < (int)lStack_5e0) {
    pplStack_5f8 = (int64_t **)0x0;
    do {
      uVar7 = local_var_614;
      ppuVar19 = *(void ***)((int64_t)pplStack_5f8 + *(int64_t *)(param_1 + 4));
      iVar27 = *(int *)((int64_t)ppuVar19 + 0x4c);
      if ((*(int *)(ppuVar19 + 0x26) != *(int *)(*(int64_t *)(param_1 + 0xe) + 0x3358)) &&
         (*(char *)(*(int64_t *)(param_1 + 0xe) + 0x331d) != '\0')) {
        iVar27 = 0;
        *(int32_t *)((int64_t)ppuVar19 + 0x4c) = 0;
      }
      ppplStack_608 = (int64_t ***)ppuVar19;
      function_31a6c0(ppuVar19,lStack_5f0,local_var_614 == param_1[0xc]);
      if ((*(char *)(ppuVar19 + 10) != '\0') || (*(int *)(ppuVar19 + 0xb) != param_1[1])) {
        local_var_618 = 1;
      }
      if (*(int *)((int64_t)ppuVar19 + 0x4c) != 0x18) break;
      if (0 < (int)lStack_5e0) {
        ppuVar18 = (void **)SystemFunction_0001801c2440(param_1);
        if ((ppuVar18 == (void **)0x0) ||
           (plVar13 = (int64_t *)ppuVar18[8], uVar7 = local_var_614, plVar13 == (int64_t *)0x0)) {
          if (((*param_1 != *(int *)((int64_t)ppuVar19 + 0x54)) || (iVar27 != 0x18)) &&
             (lVar23 = function_319780(param_1), lVar23 != 0)) {
            uVar9 = 0x80;
            iVar27 = -1;
            do {
              iVar22 = iVar27;
              uVar9 = uVar9 >> 1;
              iVar27 = iVar22 + 1;
            } while (uVar9 != 0);
            uVar9 = iVar22 + 2;
            if (uVar7 == param_1[0xc]) {
              uVar7 = 0;
            }
            else if ((int)uVar7 < param_1[0xc]) {
              uVar7 = uVar7 + 1;
            }
            iVar27 = 0;
            ppplVar20 = (int64_t ***)ppuVar19[0x20];
            ppplStack_610 = ppplVar20;
            pplStack_488 = (int64_t **)ppplVar20;
            if (ppplVar20 != (int64_t ***)0x0) {
              (*(code *)(*ppplVar20)[5])(ppplVar20);
            }
            local_var_600 = local_var_600 & 0xfffffffe;
            if ((ppplVar20 == (int64_t ***)0x0) ||
               ((*(code *)(*ppplVar20)[7])(ppplVar20), ppplVar20 == (int64_t ***)0x0)) {
              ppplVar20 = (int64_t ***)function_319780(param_1);
              ppplStack_610 = ppplVar20;
              SystemCore_Scheduler(ppplVar20);
            }
            iVar22 = uVar7 * 6;
            pplStack_5a8 = (int64_t **)CONCAT44(pplStack_5a8._4_4_,iVar22);
            do {
              uVar7 = 0;
              plocal_var_5e8 = (uint64_t *)CONCAT44(plocal_var_5e8._4_4_,iVar22 + iVar27);
              if (uVar9 != 0) {
                ppplocal_var_520 = &pplocal_var_5d0;
                iVar22 = iVar22 + iVar27;
                do {
                  ppplocal_var_590 = (void ***)&plocal_var_358;
                  plocal_var_358 = &memory_allocator_3432_ptr;
                  plocal_var_350 = &local_var_340;
                  local_var_348 = 0;
                  local_var_340 = 0;
                  local_var_2c0 = 5;
                  plocal_var_2b8 = (void *)*plStack_528;
                  pplStack_2b0 = (int64_t **)ppplVar20;
                  iStack_2a8 = iVar27;
                  local_var_2a4 = uVar7;
                  local_var_2a0 = uVar9;
                  iStack_29c = iVar22;
                  local_var_298 = uVar7;
                  local_var_294 = uVar9;
                  ppuVar19 = (void **)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
                  *ppuVar19 = &system_handler1_ptr;
                  *ppuVar19 = &system_handler2_ptr;
                  *(int32_t *)(ppuVar19 + 1) = 0;
                  *ppuVar19 = &script_config_ptr;
                  LOCK();
                  *(int8_t *)(ppuVar19 + 2) = 0;
                  UNLOCK();
                  ppuVar19[3] = (void *)0xffffffffffffffff;
                  *ppuVar19 = &processed_var_8464_ptr;
                  pplocal_var_5d0 = ppuVar19 + 4;
                  *pplocal_var_5d0 = &system_state_ptr;
                  ppuVar19[5] = (void *)0x0;
                  *(int32_t *)(ppuVar19 + 6) = 0;
                  *pplocal_var_5d0 = &memory_allocator_3432_ptr;
                  ppuVar19[5] = (void *)(ppuVar19 + 7);
                  *(int32_t *)(ppuVar19 + 6) = 0;
                  *(int8_t *)(ppuVar19 + 7) = 0;
                  *pplocal_var_5d0 = plocal_var_358;
                  ppuVar19[5] = plocal_var_350;
                  ppuVar19[6] = (void *)CONCAT44(local_var_344,local_var_348);
                  ppuVar19[7] = (void *)CONCAT71(local_var_33f,local_var_340);
                  ppuVar19[8] = plocal_var_338;
                  ppuVar19[9] = plocal_var_330;
                  ppuVar19[10] = plocal_var_328;
                  ppuVar19[0xb] = plocal_var_320;
                  ppuVar19[0xc] = plocal_var_318;
                  ppuVar19[0xd] = plocal_var_310;
                  ppuVar19[0xe] = plocal_var_308;
                  ppuVar19[0xf] = plocal_var_300;
                  ppuVar19[0x10] = plocal_var_2f8;
                  ppuVar19[0x11] = plocal_var_2f0;
                  ppuVar19[0x12] = plocal_var_2e8;
                  ppuVar19[0x13] = plocal_var_2e0;
                  ppuVar19[0x14] = plocal_var_2d8;
                  ppuVar19[0x15] = plocal_var_2d0;
                  ppuVar19[0x16] = plocal_var_2c8;
                  ppuVar19[0x17] = (void *)CONCAT44(local_var_2bc,local_var_2c0);
                  ppuVar19[0x18] = plocal_var_2b8;
                  ppuVar19[0x19] = (void *)pplStack_2b0;
                  ppuVar19[0x1a] = (void *)CONCAT44(local_var_2a4,iStack_2a8);
                  ppuVar19[0x1b] = (void *)CONCAT44(iStack_29c,local_var_2a0);
                  *(uint *)(ppuVar19 + 0x1c) = local_var_298;
                  *(uint *)((int64_t)ppuVar19 + 0xe4) = local_var_294;
                  *(int32_t *)(ppuVar19 + 0x1d) = local_var_290;
                  *(int32_t *)((int64_t)ppuVar19 + 0xec) = local_var_28c;
                  *(int32_t *)(ppuVar19 + 0x1e) = local_var_288;
                  *(int32_t *)((int64_t)ppuVar19 + 0xf4) = local_var_284;
                  *(int32_t *)(ppuVar19 + 0x1f) = local_var_280;
                  *(int32_t *)((int64_t)ppuVar19 + 0xfc) = local_var_27c;
                  *(int32_t *)(ppuVar19 + 0x17) = local_var_2c0;
                  ppplocal_var_590 = (void ***)ppuVar19;
                  pplocal_var_478 = pplocal_var_5d0;
                  pplocal_var_448 = ppuVar19;
                  (**(code **)(*ppuVar19 + 0x28))(ppuVar19);
                  lVar23 = system_context_ptr;
                  ppplocal_var_590 = &pplocal_var_5d0;
                  pplocal_var_5d0 = ppuVar19;
                  (**(code **)(*ppuVar19 + 0x28))(ppuVar19);
                  puVar14 = *(uint64_t **)(*(int64_t *)(lVar23 + 8) + 8);
                  pcVar4 = *(code **)*puVar14;
                  ppplocal_var_590 = &pplocal_var_500;
                  pplocal_var_500 = pplocal_var_5d0;
                  if (pplocal_var_5d0 != (void **)0x0) {
                    (**(code **)(*pplocal_var_5d0 + 0x28))();
                  }
                  (*pcVar4)(puVar14,&pplocal_var_500);
                  if (pplocal_var_5d0 != (void **)0x0) {
                    (**(code **)(*pplocal_var_5d0 + 0x38))();
                  }
                  (**(code **)(*ppuVar19 + 0x38))(ppuVar19);
                  ppplocal_var_590 = (void ***)&plocal_var_358;
                  plocal_var_358 = &system_state_ptr;
                  uVar7 = uVar7 + 1;
                  ppplVar20 = ppplStack_610;
                  iVar22 = (int)plocal_var_5e8;
                } while (uVar7 < uVar9);
                iVar22 = (int)pplStack_5a8;
              }
              iVar27 = iVar27 + 1;
              ppplVar20 = ppplStack_610;
            } while (iVar27 < 6);
            *(int *)((int64_t)ppplStack_608 + 0x54) = *piStack_4f8;
            param_1 = piStack_4f8;
            uVar7 = local_var_614;
          }
        }
        else if (ppuVar18 == ppuVar19) {
          plStack_4b8 = plVar13;
          (**(code **)(*plVar13 + 0x28))(plVar13);
          ppuVar19 = (void **)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x40,8,3);
          ppplStack_610 = (int64_t ***)&local_var_5c8;
          pplStack_5a8 = &plStack_588;
          ppplStack_608 = (int64_t ***)ppuVar19;
          plStack_588 = plVar13;
          (**(code **)(*plVar13 + 0x28))(plVar13);
          plStack_580 = *(int64_t **)(param_1 + 0x16);
          if (plStack_580 != (int64_t *)0x0) {
            (**(code **)(*plStack_580 + 0x28))();
          }
          local_var_5c0 = plStack_580;
          local_var_5c8 = plStack_588;
          pplStack_5a8 = &plStack_588;
          plocal_var_5e8 = &local_var_538;
          local_var_530 = 0;
          local_var_538 = 0;
          plStack_580 = (int64_t *)0x0;
          plStack_588 = (int64_t *)0x0;
          local_var_5b0 = function_31c260;
          local_var_5b8 = function_31c300;
          ppplocal_var_520 = (void ***)&local_var_5c8;
          *ppuVar19 = &system_handler1_ptr;
          *ppuVar19 = &system_handler2_ptr;
          *(int32_t *)(ppuVar19 + 1) = 0;
          *ppuVar19 = &script_config_ptr;
          LOCK();
          *(int8_t *)(ppuVar19 + 2) = 0;
          UNLOCK();
          ppuVar19[3] = (void *)0xffffffffffffffff;
          *ppuVar19 = &processed_var_8168_ptr;
          ppuVar1 = ppuVar19 + 4;
          ppuVar19[6] = (void *)0x0;
          ppuVar19[7] = _guard_check_icall;
          pplocal_var_450 = ppuVar1;
          if (ppuVar1 != (void **)&local_var_5c8) {
            if ((code *)ppuVar19[6] != (code *)0x0) {
              (*(code *)ppuVar19[6])(ppuVar1,0,0);
            }
            if (local_var_5b8 != (code *)0x0) {
              (*local_var_5b8)(ppuVar1,&local_var_5c8,1);
            }
            ppuVar19[6] = local_var_5b8;
            ppuVar19[7] = local_var_5b0;
          }
          if (local_var_5b8 != (code *)0x0) {
            (*local_var_5b8)(&local_var_5c8,0,0);
          }
          pplocal_var_490 = ppuVar19;
          (**(code **)(*ppuVar19 + 0x28))(ppuVar19);
          lVar23 = system_context_ptr;
          ppplocal_var_520 = &pplocal_var_508;
          pplocal_var_508 = ppuVar19;
          (**(code **)(*ppuVar19 + 0x28))(ppuVar19);
          SystemPerformance_Monitor(lVar23,&pplocal_var_508);
          *(int *)((int64_t)ppuVar18 + 0x54) = *param_1;
          (**(code **)(*ppuVar19 + 0x38))(ppuVar19);
          (**(code **)(*plStack_4b8 + 0x38))();
          uVar7 = local_var_614;
        }
      }
      local_var_614 = uVar7 + 1;
      pplStack_5f8 = pplStack_5f8 + 1;
    } while ((int)local_var_614 < (int)lStack_5e0);
  }
  function_3179d0(param_1,local_var_618);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_678);
}