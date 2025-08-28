/* 原始函数别名定义 */
#define DataValidator_CheckIntegrity DataValidator_CheckIntegrity  // DataValidator_CheckIntegrity 的语义化别名
#define ResourceManager_Allocate ResourceManager_Allocate  // ResourceManager_Allocate 的语义化别名
#define DataProcessor_HandleOperation DataProcessor_HandleOperation  // DataProcessor_HandleOperation 的语义化别名
#include "ultra_high_freq_fun_definitions.h"
/* NetworkSystem_ProtocolParser - RenderingSystem_StringParser */
#define RenderingSystem_StringParser NetworkSystem_ProtocolParser
/* 函数别名定义: MemoryDebugger */
#define MemoryDebugger MemoryDebugger
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_03_part020_sub002_sub002.c - 1 个函数
// 函数: void System_DataProcessor(int64_t param_1)
void System_DataProcessor(int64_t param_1)
{
  int16_t uVar1;
  int64_t *plVar2;
  uint64_t ******ppppppuVar3;
  bool bVar4;
  int64_t *******ppppppplVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint64_t uVar10;
  int8_t *puVar11;
  uint64_t uVar12;
  int8_t *puVar13;
  int64_t *plVar14;
  void **ppuVar15;
  int64_t *******ppppppplVar16;
  int64_t *******ppppppplVar17;
  int64_t *******ppppppplVar18;
  uint64_t *puVar19;
  uint64_t *******pppppppuVar20;
  uint64_t uVar21;
  int32_t *puVar22;
  void *puVar23;
  void *puVar24;
  int64_t lVar25;
  int64_t lVar26;
  int64_t lVar27;
  int64_t *plVar28;
  uint64_t uVar29;
  uint uVar30;
  int iVar31;
  uint *puVar32;
  uint64_t uVar33;
  uint uVar34;
  int64_t lVar35;
  uint uVar36;
  int64_t lVar37;
  int32_t extraout_XMM0_Da;
  int32_t uVar38;
  float fVar39;
  int8_t stack_array_658 [32];
  code *pcStack_638;
  int32_t local_var_630;
  int8_t local_var_628;
  int8_t stack_array_627 [3];
  int16_t stack_array_624 [2];
  int64_t lStack_620;
  uint64_t *plocal_var_618;
  int64_t lStack_610;
  int16_t local_var_608;
  int8_t local_var_606;
  uint local_var_600;
  int8_t *plocal_var_5f8;
  void *plocal_var_5f0;
  int8_t *plocal_var_5e8;
  uint local_var_5e0;
  uint64_t local_var_5d8;
  void *plocal_var_5d0;
  int8_t *plocal_var_5c8;
  uint local_var_5c0;
  uint64_t local_var_5b8;
  int iStack_5b0;
  void *plocal_var_5a8;
  int64_t lStack_5a0;
  uint local_var_598;
  uint64_t local_var_590;
  int32_t local_var_588;
  uint local_var_584;
  int8_t local_var_580;
  int32_t local_var_57c;
  void *plocal_var_578;
  void *plocal_var_570;
  int32_t local_var_568;
  uint64_t local_var_560;
  void *plocal_var_558;
  void *plocal_var_550;
  int32_t local_var_548;
  uint64_t local_var_540;
  int64_t lStack_538;
  void **pplocal_var_530;
  int64_t *******ppppppplStack_528;
  int64_t *******ppppppplStack_520;
  int64_t *******ppppppplStack_518;
  uint64_t local_var_510;
  int64_t lStack_508;
  int32_t local_var_500;
  int32_t stack_array_4f8 [2];
  int32_t stack_array_4f0 [2];
  int32_t stack_array_4e8 [2];
  int32_t stack_array_4e0 [2];
  uint local_var_4d8;
  int iStack_4d4;
  uint local_var_4d0;
  uint local_var_4cc;
  int64_t lStack_4c8;
  void *plocal_var_4c0;
  void *plocal_var_4b8;
  int32_t local_var_4b0;
  uint64_t local_var_4a8;
  void *plocal_var_4a0;
  int64_t lStack_498;
  int32_t local_var_490;
  uint64_t local_var_488;
  uint64_t *******ppppppplocal_var_480;
  uint64_t *******ppppppplocal_var_478;
  uint64_t local_var_470;
  uint64_t local_var_468;
  int64_t lStack_460;
  int32_t local_var_458;
  int64_t lStack_450;
  int64_t lStack_448;
  int64_t lStack_440;
  uint local_var_438;
  void *plocal_var_430;
  int64_t lStack_428;
  int iStack_420;
  int32_t local_var_418;
  int64_t lStack_410;
  int64_t lStack_408;
  void *plocal_var_400;
  void *plocal_var_3f8;
  uint local_var_3f0;
  int32_t local_var_3e8;
  void *plocal_var_3e0;
  code *pcStack_3d8;
  int32_t local_var_3c8;
  int64_t alStack_3c0 [2];
  int64_t lStack_3b0;
  int64_t *******ppppppplStack_3a8;
  void *plocal_var_3a0;
  char *pcStack_398;
  int32_t local_var_388;
  void **pplocal_var_380;
  int64_t lStack_378;
  int64_t lStack_370;
  int64_t lStack_368;
  uint64_t local_var_360;
  int32_t local_var_358;
  void *plocal_var_350;
  void *plocal_var_348;
  int32_t local_var_338;
  int64_t *plStack_330;
  int64_t *plStack_328;
  void *plocal_var_320;
  int64_t lStack_318;
  int32_t local_var_308;
  uint64_t local_var_2f8;
  uint64_t local_var_2f0;
  uint64_t local_var_2e8;
  uint64_t local_var_2e0;
  uint64_t local_var_2d8;
  uint64_t local_var_2d0;
  uint64_t local_var_2c8;
  uint64_t local_var_2c0;
  int8_t local_var_2b8;
  int32_t local_var_2b7;
  int32_t local_var_2b3;
  void **pplocal_var_2a8;
  uint64_t local_var_2a0;
  uint64_t local_var_298;
  uint64_t local_var_290;
  uint64_t local_var_288;
  int8_t *plocal_var_280;
  int64_t *******ppppppplStack_278;
  void **pplocal_var_270;
  void **pplocal_var_268;
  void **pplocal_var_260;
  void **pplocal_var_258;
  uint64_t local_var_250;
  uint64_t local_var_248;
  uint64_t local_var_240;
  uint64_t local_var_238;
  uint64_t local_var_230;
  uint64_t local_var_228;
  uint64_t local_var_220;
  uint64_t local_var_218;
  int8_t stack_array_210 [16];
  uint64_t local_var_200;
  uint64_t local_var_1f8;
  uint64_t local_var_1f0;
  uint64_t local_var_1e8;
  uint64_t local_var_1e0;
  uint64_t local_var_1d8;
  void *aplocal_var_1c8 [5];
  int32_t local_var_1a0;
  int8_t local_var_194;
  void *aplocal_var_170 [11];
  int16_t local_var_118;
  void *plocal_var_108;
  int8_t *plocal_var_100;
  int32_t local_var_f8;
  int8_t stack_array_f0 [24];
  int8_t stack_array_d8 [80];
  uint64_t local_var_88;
  local_var_288 = 0xfffffffffffffffe;
  local_var_88 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_658;
  local_var_600 = 0;
  lStack_408 = param_1;
  cVar6 = UltraHighFreq_LogManager1(param_1 + 0xf0);
  uVar38 = extraout_XMM0_Da;
  if (cVar6 == '\0') {
    uVar38 = SystemManager_Processor(param_1 + 0xf0);
  }
  *(int8_t *)(system_global_data_ptr + 9) = 1;
  uVar10 = DataProcessor_HandleOperation(uVar38,param_1 + 0x110,param_1 + 0x130);
  CoreMemoryPoolValidator(&plocal_var_350,uVar10);
  lVar37 = param_1 + 0xc0;
  lVar35 = *(int64_t *)(param_1 + 200);
  lStack_4c8 = lVar35;
  lStack_410 = lVar37;
  if (lVar35 != lVar37) {
    do {
      puVar11 = (int8_t *)0x0;
      iVar7 = *(int *)(lVar35 + 0x20);
      lStack_4c8 = lVar35;
      if ((iVar7 < 0) ||
         (lVar25 = *(int64_t *)(*system_main_module_state + 0x888),
         (uint64_t)(*(int64_t *)(*system_main_module_state + 0x890) - lVar25 >> 5) <=
         (uint64_t)(int64_t)iVar7)) {
        lVar25 = MemoryDebugger0();
      }
      else {
        lVar25 = (int64_t)iVar7 * 0x20 + lVar25;
      }
      plocal_var_5f0 = &system_data_buffer_ptr;
      local_var_5d8 = 0;
      plocal_var_5e8 = (int8_t *)0x0;
      local_var_5e0 = 0;
      uVar12 = 0;
      if (*(int *)(lVar25 + 0x10) != 0) {
        iVar7 = *(int *)(lVar25 + 0x10) + 1;
        if (iVar7 < 0x10) {
          iVar7 = 0x10;
        }
        puVar11 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar7,0x13);
        *puVar11 = 0;
        plocal_var_5e8 = puVar11;
        uVar38 = CoreEngineSystemCleanup(puVar11);
        local_var_5d8 = CONCAT44(local_var_5d8._4_4_,uVar38);
        if (*(int *)(lVar25 + 0x10) != 0) {
// WARNING: Subroutine does not return
          memcpy(puVar11,*(uint64_t *)(lVar25 + 8),*(int *)(lVar25 + 0x10) + 1);
        }
      }
      if (*(int64_t *)(lVar25 + 8) != 0) {
        local_var_5e0 = 0;
        if (puVar11 != (int8_t *)0x0) {
          *puVar11 = 0;
        }
        local_var_5d8 = local_var_5d8 & 0xffffffff;
      }
      plocal_var_108 = &system_config_ptr;
      plocal_var_100 = stack_array_f0;
      stack_array_f0[0] = 0;
      local_var_f8 = 9;
      strcpy_s(stack_array_f0,0x10,&system_data_2fe8);
      iVar7 = DataValidator_CheckIntegrity(&plocal_var_5f0,&plocal_var_108);
      plocal_var_108 = &system_state_ptr;
      uVar34 = iVar7 + 9;
      plocal_var_5d0 = &system_data_buffer_ptr;
      plocal_var_5f8 = (int8_t *)0x0;
      plocal_var_5c8 = (int8_t *)0x0;
      local_var_5c0 = 0;
      local_var_5b8 = 0;
      local_var_600 = local_var_600 | 1;
      if (-uVar34 != -1) {
        iVar7 = -uVar34 + 2;
        if (iVar7 < 0x10) {
          iVar7 = 0x10;
        }
        plocal_var_5f8 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar7,0x13);
        *plocal_var_5f8 = 0;
        plocal_var_5c8 = plocal_var_5f8;
        uVar12 = CoreEngineSystemCleanup();
        local_var_5b8 = CONCAT44(local_var_5b8._4_4_,(int)uVar12);
      }
      uVar36 = local_var_5e0;
      uVar9 = (uint)uVar12;
      lVar25 = (int64_t)(int)uVar34;
      lStack_538 = (int64_t)(int)local_var_5e0;
      uVar30 = 0;
      if (lVar25 < lStack_538) {
        uVar29 = 0;
        puVar13 = plocal_var_5f8;
        do {
          uVar9 = (uint)uVar12;
          uVar21 = 0;
          lVar35 = lStack_4c8;
          lVar37 = lStack_410;
          uVar30 = local_var_5c0;
          if (uVar36 <= uVar34) break;
          local_var_628 = puVar11[lVar25];
          iVar7 = (int)uVar29;
          uVar30 = iVar7 + 1;
          uVar29 = (uint64_t)uVar30;
          if (uVar30 != 0) {
            uVar8 = iVar7 + 2;
            if (puVar13 == (int8_t *)0x0) {
              if ((int)uVar8 < 0x10) {
                uVar8 = 0x10;
              }
              puVar13 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar8,0x13);
              *puVar13 = 0;
              uVar12 = (uint64_t)puVar13 & 0xffffffffffc00000;
              if (uVar12 != 0) {
                lVar35 = ((int64_t)puVar13 - uVar12 >> 0x10) * 0x50 + 0x80 + uVar12;
                puVar32 = (uint *)(lVar35 - (uint64_t)*(uint *)(lVar35 + 4));
                if ((*(byte *)((int64_t)puVar32 + 0xe) & 2) == 0) {
                  uVar21 = (uint64_t)puVar32[7];
                  if (0x3ffffff < uVar21) {
                    uVar21 = (uint64_t)*puVar32 << 0x10;
                    local_var_2a0 = uVar21;
                  }
                }
                else {
                  uVar21 = (uint64_t)puVar32[7];
                  if (uVar21 < 0x4000000) {
                    uVar33 = (uint64_t)puVar32[7];
                  }
                  else {
                    uVar33 = (uint64_t)*puVar32 << 0x10;
                    local_var_290 = uVar33;
                  }
                  if (0x3ffffff < uVar21) {
                    uVar21 = (uint64_t)*puVar32 << 0x10;
                    local_var_298 = uVar21;
                  }
                  uVar21 = uVar21 - ((int64_t)puVar13 -
                                    (((int64_t)((int64_t)puVar32 + (-0x80 - uVar12)) / 0x50) *
                                     0x10000 + uVar12)) % uVar33;
                }
              }
              uVar12 = uVar21 & 0xffffffff;
              local_var_5b8 = CONCAT44(local_var_5b8._4_4_,(int)uVar21);
              plocal_var_5f8 = puVar13;
              plocal_var_5c8 = puVar13;
            }
            else if (uVar9 < uVar8) {
              pcStack_638 = (code *)CONCAT71(pcStack_638._1_7_,0x13);
              plocal_var_5f8 = (int8_t *)DataValidator(system_memory_pool_ptr,puVar13,uVar8,0x10);
              plocal_var_5c8 = plocal_var_5f8;
              uVar9 = CoreEngineSystemCleanup(plocal_var_5f8);
              uVar12 = (uint64_t)uVar9;
              local_var_5b8 = CONCAT44(local_var_5b8._4_4_,uVar9);
              puVar13 = plocal_var_5f8;
            }
          }
          uVar9 = (uint)uVar12;
          puVar13[local_var_5c0] = local_var_628;
          puVar13[uVar29] = 0;
          uVar34 = uVar34 + 1;
          lVar25 = lVar25 + 1;
          lVar35 = lStack_4c8;
          lVar37 = lStack_410;
          local_var_5c0 = uVar30;
        } while (lVar25 < lStack_538);
      }
      puVar13 = plocal_var_5f8;
      if (puVar11 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(puVar11);
      }
      lVar25 = 0;
      plocal_var_5e8 = plocal_var_5f8;
      local_var_5d8 = (uint64_t)uVar9;
      local_var_5c0 = 0;
      local_var_600 = local_var_600 & 0xfffffffe;
      plocal_var_5c8 = (int8_t *)0x0;
      local_var_5b8 = 0;
      plocal_var_5d0 = &system_state_ptr;
      lVar26 = *(int64_t *)(lVar35 + 0x30) - *(int64_t *)(lVar35 + 0x28) >> 5;
      local_var_438 = *(uint *)(lVar35 + 0x40);
      local_var_5e0 = uVar30;
      if (lVar26 != 0) {
        lVar25 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar26 << 5,local_var_438 & 0xff);
      }
      lStack_440 = lVar26 * 0x20 + lVar25;
      lVar26 = *(int64_t *)(lVar35 + 0x30);
      lStack_450 = lVar25;
      lStack_448 = lVar25;
      for (lVar27 = *(int64_t *)(lVar35 + 0x28); lVar27 != lVar26; lVar27 = lVar27 + 0x20) {
        CoreEngineDataTransformer(lVar25,lVar27);
        lVar25 = lVar25 + 0x20;
      }
      lStack_448 = lVar25;
      _Mtx_init_in_situ(stack_array_d8,2);
      uVar12 = 0;
      iStack_5b0 = 0;
      lStack_538 = 0;
      lVar25 = lStack_408;
      if (lStack_448 - lStack_450 >> 5 != 0) {
        do {
          uVar29 = 0;
          lVar35 = lStack_538 * 0x20;
          iVar7 = *(int *)(lStack_450 + 0x10 + lVar35) + -1;
          if (-1 < iVar7) {
            lVar37 = (int64_t)iVar7;
            do {
              if (*(char *)(*(int64_t *)(lStack_450 + 8 + lVar35) + lVar37) == '/')
              goto LAB_1801dfa13;
              iVar7 = iVar7 + -1;
              lVar37 = lVar37 + -1;
            } while (-1 < lVar37);
          }
          iVar7 = -1;
LAB_1801dfa13:
          lStack_378 = uVar12 * 0x20;
          lStack_3b0 = lVar35;
          RenderingSystem_StringParser(lStack_450 + lStack_378,&plocal_var_430,0,iVar7);
          iVar31 = iStack_420 + -1;
          lVar37 = (int64_t)iVar31;
          if (-1 < iVar31) {
            do {
              if (*(char *)(lVar37 + lStack_428) == '/') goto LAB_1801dfa65;
              iVar31 = iVar31 + -1;
              lVar37 = lVar37 + -1;
            } while (-1 < lVar37);
          }
          iVar31 = -1;
LAB_1801dfa65:
          RenderingSystem_StringParser(&plocal_var_430,&plocal_var_3e0,iVar31 + 1,iVar7);
          plocal_var_558 = &system_data_buffer_ptr;
          local_var_540 = 0;
          plocal_var_550 = (void *)0x0;
          local_var_548 = 0;
          pcStack_638 = (code *)&system_buffer_ptr;
          if (pcStack_3d8 != (code *)0x0) {
            pcStack_638 = pcStack_3d8;
          }
          puVar11 = &system_buffer_ptr;
          if (puVar13 != (int8_t *)0x0) {
            puVar11 = puVar13;
          }
          puVar24 = &system_buffer_ptr;
          if (*(void **)(lVar25 + 0xf8) != (void *)0x0) {
            puVar24 = *(void **)(lVar25 + 0xf8);
          }
          System_DataHandler(&plocal_var_558,&system_param1_ptr,puVar24,puVar11);
          plocal_var_578 = &system_data_buffer_ptr;
          local_var_560 = 0;
          plocal_var_570 = (void *)0x0;
          local_var_568 = 0;
          puVar24 = &system_buffer_ptr;
          if (plocal_var_348 != (void *)0x0) {
            puVar24 = plocal_var_348;
          }
          puVar23 = &system_buffer_ptr;
          if (plocal_var_550 != (void *)0x0) {
            puVar23 = plocal_var_550;
          }
          System_DataHandler(&plocal_var_578,&system_param2_ptr,puVar23,puVar24);
          if ((*(int *)(lVar25 + 0x100) < 1) || (cVar6 = UltraHighFreq_LogManager1(&plocal_var_578), cVar6 == '\0')
             ) {
            ResourceManager_Allocate(&plocal_var_578,1);
            local_var_458 = 3;
            ppppppplocal_var_480 = &ppppppplocal_var_480;
            ppppppplocal_var_478 = &ppppppplocal_var_480;
            local_var_470 = 0;
            local_var_468 = 0;
            lStack_460 = 0;
            iVar7 = *(int *)(lVar25 + 0x120);
            if (iVar7 == 5) {
              uVar12 = uVar29;
              do {
                uVar21 = uVar12 + 1;
                if (*(char *)(*(int64_t *)(lVar25 + 0x118) + uVar12) != (&system_pattern1_ptr)[uVar12])
                goto LAB_1801dfcaa;
                uVar12 = uVar21;
              } while (uVar21 != 6);
              uVar34 = 1;
            }
            else {
LAB_1801dfcaa:
              if (iVar7 == 7) {
                uVar12 = uVar29;
                do {
                  uVar21 = uVar12 + 1;
                  if (*(char *)(*(int64_t *)(lVar25 + 0x118) + uVar12) != (&system_pattern2_ptr)[uVar12])
                  goto LAB_1801dfcd9;
                  uVar12 = uVar21;
                } while (uVar21 != 8);
                uVar34 = 1;
              }
              else {
LAB_1801dfcd9:
                if ((iVar7 == 8) &&
                   ((iVar7 = strcmp(*(uint64_t *)(lVar25 + 0x118),&system_string1_ptr), iVar7 == 0 ||
                    (iVar7 = strcmp(*(uint64_t *)(lVar25 + 0x118),&system_string2_ptr), iVar7 == 0))))
                {
                  uVar34 = 1;
                }
                else {
                  uVar34 = 0;
                }
              }
            }
            iStack_4d4 = (uVar34 ^ 1) * 4 + 4;
            local_var_250 = 0;
            local_var_248 = 0x3f80000000000000;
            local_var_240 = 0;
            local_var_238 = 0x3f800000;
            local_var_230 = 0x3f80000000000000;
            local_var_228 = 0;
            local_var_220 = 0x3f800000;
            local_var_218 = 0;
            do {
              uVar36 = (uint)uVar29;
              if ((char)uVar34 == '\0') {
                if ((int)uVar36 < 4) {
                  stack_array_4e0[0] = 2;
                  puVar22 = stack_array_4e0;
                }
                else {
                  stack_array_4e8[0] = 0;
                  puVar22 = stack_array_4e8;
                }
              }
              else if (*(int *)(lVar25 + 0x120) == 5) {
                lVar37 = 0;
                do {
                  lVar26 = lVar37 + 1;
                  if (*(char *)(*(int64_t *)(lVar25 + 0x118) + lVar37) != (&system_pattern1_ptr)[lVar37])
                  goto LAB_1801dfdbe;
                  lVar37 = lVar26;
                } while (lVar26 != 6);
                stack_array_4f8[0] = 0;
                puVar22 = stack_array_4f8;
              }
              else {
LAB_1801dfdbe:
                if (*(int *)(lVar25 + 0x120) == 7) {
                  lVar37 = 0;
                  do {
                    lVar26 = lVar37 + 1;
                    if (*(char *)(*(int64_t *)(lVar25 + 0x118) + lVar37) !=
                        (&system_pattern2_ptr)[lVar37]) goto LAB_1801dfdfe;
                    lVar37 = lVar26;
                  } while (lVar26 != 8);
                  stack_array_4f8[0] = 0;
                  puVar22 = stack_array_4f8;
                }
                else {
LAB_1801dfdfe:
                  stack_array_4f0[0] = 2;
                  puVar22 = stack_array_4f0;
                }
              }
              SystemAudioManager(SYSTEM_STATE_MANAGER + 0xe70,puVar22);
              lVar37 = lStack_450;
              local_var_4d8 = uVar36 & 0x80000003;
              if ((int)local_var_4d8 < 0) {
                local_var_4d8 = (local_var_4d8 - 1 | 0xfffffffc) + 1;
              }
              pplocal_var_530 = &plocal_var_5a8;
              plocal_var_5a8 = &system_data_buffer_ptr;
              local_var_590 = 0;
              lStack_5a0 = 0;
              local_var_598 = 0;
              local_var_584 = 0x100;
              local_var_580 = 0;
              local_var_57c = 0;
              uVar30 = *(uint *)(lStack_450 + 0x10 + lVar35);
              uVar12 = (uint64_t)uVar30;
              if (*(int64_t *)(lStack_450 + 8 + lVar35) != 0) {
                CoreEngineDataBufferProcessor(&plocal_var_5a8,uVar12);
              }
              if (uVar30 != 0) {
// WARNING: Subroutine does not return
                memcpy(lStack_5a0,*(uint64_t *)(lVar37 + 8 + lVar35),uVar12);
              }
              if (lStack_5a0 != 0) {
                *(int8_t *)(uVar12 + lStack_5a0) = 0;
              }
              local_var_590 = CONCAT44(*(int32_t *)(lVar37 + 0x1c + lVar35),(int32_t)local_var_590);
              local_var_588 = 0;
              local_var_584 = local_var_584 & 0xffffff00;
              local_var_598 = uVar30;
              uVar10 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x60d30,0x10,0x1f);
              plVar14 = (int64_t *)function_1954d0(uVar10,&plocal_var_5a8);
              plStack_330 = plVar14;
              if (plVar14 != (int64_t *)0x0) {
                (**(code **)(*plVar14 + 0x28))(plVar14);
              }
              lStack_370 = 0;
              lStack_368 = 0;
              local_var_360 = 0;
              local_var_358 = 3;
              stack_array_624[0] = 0x2f;
              if (*(int64_t *)(lStack_450 + lVar35 + 8) != 0) {
                CoreSystem_DataCollector(lStack_450 + lVar35,&lStack_370,stack_array_624);
              }
              puVar24 = *(void **)
                         (((lStack_368 - lStack_370 >> 5) + -2) * 0x20 + lStack_370 + 8);
              puVar23 = &system_buffer_ptr;
              if (puVar24 != (void *)0x0) {
                puVar23 = puVar24;
              }
              (**(code **)(plVar14[0x9b] + 0x10))(plVar14 + 0x9b,puVar23);
              lVar37 = lStack_378;
              uVar10 = function_0bb630(&plocal_var_320,lStack_450 + lStack_378);
              SystemEventProcessor(plVar14 + 0x4f9,uVar10);
              plocal_var_320 = &system_data_buffer_ptr;
              if (lStack_318 != 0) {
// WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner();
              }
              lStack_318 = 0;
              local_var_308 = 0;
              plocal_var_320 = &system_state_ptr;
              if ((code *)plVar14[0x50a] != (code *)0x0) {
                (*(code *)plVar14[0x50a])(plVar14 + 0x508,0,0);
              }
              plVar14[0x50a] = (int64_t)&system_callback1_ptr;
              plVar14[0x50b] = (int64_t)&system_callback2_ptr;
              plVar14[0x508] = (int64_t)function_1deed0;
              plVar14[0x50c] = (int64_t)&local_var_4d8;
              local_var_200 = 0x3f800000;
              local_var_1f8 = 0;
              local_var_1f0 = 0x3f80000000000000;
              local_var_1e8 = 0;
              local_var_1e0 = 0;
              local_var_1d8 = 0x3f800000;
              local_var_2f8 = 0x3f800000;
              local_var_2f0 = 0;
              local_var_2e8 = 0x3f80000000000000;
              local_var_2e0 = 0;
              local_var_2d8 = 0;
              local_var_2d0 = 0x3f800000;
              local_var_2c8 = 0;
              local_var_2c0 = 0x3f80000000000000;
              local_var_2b7 = 0x1010101;
              local_var_2b3 = 0x1000001;
              local_var_2b8 = 0;
              pcStack_638 = (code *)CONCAT44(pcStack_638._4_4_,0xffffffff);
              fVar39 = (float)function_1a6440(plVar14,system_system_data_memory,lStack_450 + lVar37,&local_var_2f8);
              if (fVar39 == -1.0) {
                DataSerializationEngine(&lStack_370);
                (**(code **)(*plVar14 + 0x38))(plVar14);
                pplocal_var_530 = &plocal_var_5a8;
                plocal_var_5a8 = &system_data_buffer_ptr;
                if (lStack_5a0 != 0) {
// WARNING: Subroutine does not return
                  CoreEngineMemoryPoolCleaner();
                }
              }
              else {
                function_3986d0(plVar14 + 0xc0fc);
                lVar37 = plVar14[0xc170];
                if (lVar37 != 0) {
                  plVar2 = *(int64_t **)(lVar37 + 0x40);
                  lVar35 = *plVar2;
                  plVar28 = plVar2;
                  if (lVar35 == 0) {
                    plVar28 = plVar2 + 1;
                    lVar35 = *plVar28;
                    while (lVar35 == 0) {
                      plVar28 = plVar28 + 1;
                      lVar35 = *plVar28;
                    }
                  }
                  lVar37 = plVar2[*(int64_t *)(lVar37 + 0x48)];
                  while (lVar35 != lVar37) {
                    function_3d24f0(*(int64_t *)(lVar35 + 8) + 0x80,&ppppppplocal_var_480);
                    lVar35 = *(int64_t *)(lVar35 + 0x10);
                    while (lVar35 == 0) {
                      plVar28 = plVar28 + 1;
                      lVar35 = *plVar28;
                    }
                  }
                  lVar35 = lStack_3b0;
                  if (uVar36 == 0) {
                    ppuVar15 = (void **)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x398,8,3);
                    *ppuVar15 = &system_handler1_ptr;
                    *ppuVar15 = &system_handler2_ptr;
                    *(int32_t *)(ppuVar15 + 1) = 0;
                    *ppuVar15 = &system_handler3_ptr;
                    pcStack_638 = function_1ecbb0;
                    pplocal_var_530 = ppuVar15;
                    DataStructureManager(ppuVar15 + 2,0x70,6,function_1ecb30);
                    pplocal_var_2a8 = ppuVar15 + 0x56;
                    *pplocal_var_2a8 = &system_state_ptr;
                    ppuVar15[0x57] = (void *)0x0;
                    *(int32_t *)(ppuVar15 + 0x58) = 0;
                    *pplocal_var_2a8 = &system_data_buffer_ptr;
                    ppuVar15[0x59] = (void *)0x0;
                    ppuVar15[0x57] = (void *)0x0;
                    *(int32_t *)(ppuVar15 + 0x58) = 0;
                    pplocal_var_258 = ppuVar15 + 0x5a;
                    *pplocal_var_258 = &system_state_ptr;
                    ppuVar15[0x5b] = (void *)0x0;
                    *(int32_t *)(ppuVar15 + 0x5c) = 0;
                    *pplocal_var_258 = &system_data_buffer_ptr;
                    ppuVar15[0x5d] = (void *)0x0;
                    ppuVar15[0x5b] = (void *)0x0;
                    *(int32_t *)(ppuVar15 + 0x5c) = 0;
                    pplocal_var_260 = ppuVar15 + 0x5e;
                    *pplocal_var_260 = (void *)0x0;
                    ppuVar15[0x5f] = (void *)0x0;
                    ppuVar15[0x60] = (void *)0x0;
                    *(int32_t *)(ppuVar15 + 0x61) = 3;
                    pplocal_var_270 = ppuVar15 + 0x65;
                    ppuVar15[0x68] = (void *)0x0;
                    *(int32_t *)(ppuVar15 + 0x6a) = 0x11;
                    *pplocal_var_270 = (void *)pplocal_var_270;
                    ppuVar15[0x66] = (void *)pplocal_var_270;
                    ppuVar15[0x67] = (void *)0x0;
                    *(int8_t *)(ppuVar15 + 0x68) = 0;
                    ppuVar15[0x69] = (void *)0x0;
                    ppuVar15[0x6c] = (void *)0x0;
                    pplocal_var_268 = ppuVar15 + 0x6d;
                    ppuVar15[0x70] = (void *)0x0;
                    *(int32_t *)(ppuVar15 + 0x72) = 3;
                    *pplocal_var_268 = (void *)pplocal_var_268;
                    ppuVar15[0x6e] = (void *)pplocal_var_268;
                    ppuVar15[0x6f] = (void *)0x0;
                    *(int8_t *)(ppuVar15 + 0x70) = 0;
                    ppuVar15[0x71] = (void *)0x0;
                    *(int32_t *)((int64_t)ppuVar15 + 0x7c) = 0;
                    *(int32_t *)((int64_t)ppuVar15 + 0xec) = 1;
                    *(int32_t *)((int64_t)ppuVar15 + 0x15c) = 2;
                    *(int32_t *)((int64_t)ppuVar15 + 0x1cc) = 3;
                    *(int32_t *)((int64_t)ppuVar15 + 0x23c) = 4;
                    *(int32_t *)((int64_t)ppuVar15 + 0x2ac) = 5;
                    *(int8_t *)(ppuVar15 + 0x6b) = 0;
                    ppuVar15[99] = (void *)0x0;
                    ppuVar15[0x62] = (void *)0x0;
                    ppuVar15[100] = (void *)0x0;
                    lVar35 = plVar14[0xc170];
                    pplocal_var_380 = ppuVar15;
                    (**(code **)(*ppuVar15 + 0x28))(ppuVar15);
                    pplocal_var_380 = *(void ***)(lVar35 + 0x70);
                    *(void ***)(lVar35 + 0x70) = ppuVar15;
                    if (pplocal_var_380 != (void **)0x0) {
                      (**(code **)((int64_t)*pplocal_var_380 + 0x38))();
                    }
                    puVar24 = &system_buffer_ptr;
                    if (plocal_var_570 != (void *)0x0) {
                      puVar24 = plocal_var_570;
                    }
                    System_DataHandler(*(int64_t *)(plVar14[0xc170] + 0x70) + 0x2d0,&system_processor_ptr,
                                  puVar24);
                    function_3b7530(plVar14[0xc170]);
                    lVar35 = lStack_3b0;
                  }
                }
                plocal_var_280 = stack_array_d8;
                iVar7 = _Mtx_lock(stack_array_d8);
                if (iVar7 != 0) {
                  __Throw_C_error_std__YAXH_Z(iVar7);
                }
                function_1a2ea0(plVar14);
                iVar7 = _Mtx_unlock(stack_array_d8);
                if (iVar7 != 0) {
                  __Throw_C_error_std__YAXH_Z(iVar7);
                }
                plStack_330 = (int64_t *)0x0;
                plStack_328 = plVar14;
                (**(code **)(*plVar14 + 0x38))(plVar14);
                DataSerializationEngine(&lStack_370);
                pplocal_var_530 = &plocal_var_5a8;
                plocal_var_5a8 = &system_data_buffer_ptr;
                if (lStack_5a0 != 0) {
// WARNING: Subroutine does not return
                  CoreEngineMemoryPoolCleaner();
                }
              }
              pplocal_var_530 = &plocal_var_5a8;
              local_var_590 = local_var_590 & 0xffffffff00000000;
              lStack_5a0 = 0;
              plocal_var_5a8 = &system_state_ptr;
              uVar29 = (uint64_t)(uVar36 + 1);
            } while ((int)(uVar36 + 1) < iStack_4d4);
            if (lStack_460 != 0) {
              local_var_500 = 3;
              ppppppplStack_528 = (int64_t *******)&ppppppplStack_528;
              ppppppplStack_520 = (int64_t *******)&ppppppplStack_528;
              ppppppplStack_518 = (int64_t *******)0x0;
              local_var_510 = 0;
              lStack_508 = 0;
              pppppppuVar20 = ppppppplocal_var_478;
              if ((uint64_t ********)ppppppplocal_var_478 != &ppppppplocal_var_480) {
                do {
                  uVar34 = *(uint *)((int64_t)pppppppuVar20 + 0x3c);
                  local_var_4d0 = uVar34;
                  uVar36 = *(uint *)(pppppppuVar20 + 8);
                  local_var_4cc = uVar36;
                  ppppppplVar5 = (int64_t *******)&ppppppplStack_528;
                  ppppppplVar17 = ppppppplStack_518;
                  while (ppppppplVar18 = ppppppplVar5, ppppppplVar17 != (int64_t *******)0x0) {
                    if ((*(uint *)(ppppppplVar17 + 4) < uVar34) ||
                       ((*(uint *)(ppppppplVar17 + 4) <= uVar34 &&
                        (*(uint *)((int64_t)ppppppplVar17 + 0x24) < uVar36)))) {
                      bVar4 = true;
                      ppppppplVar16 = (int64_t *******)*ppppppplVar17;
                    }
                    else {
                      bVar4 = false;
                      ppppppplVar16 = (int64_t *******)ppppppplVar17[1];
                    }
                    ppppppplVar5 = ppppppplVar17;
                    ppppppplVar17 = ppppppplVar16;
                    if (bVar4) {
                      ppppppplVar5 = ppppppplVar18;
                    }
                  }
                  if ((((int64_t ********)ppppppplVar18 == &ppppppplStack_528) ||
                      (uVar34 < *(uint *)(ppppppplVar18 + 4))) ||
                     ((uVar34 <= *(uint *)(ppppppplVar18 + 4) &&
                      (uVar36 < *(uint *)((int64_t)ppppppplVar18 + 0x24))))) {
                    ppppppplStack_278 = ppppppplVar18;
                    if ((ppppppplVar18 == ppppppplStack_528) ||
                       ((int64_t ********)ppppppplVar18 == &ppppppplStack_528)) {
                      if ((lStack_508 != 0) &&
                         ((ppppppplVar18 = ppppppplStack_528,
                          *(uint *)(ppppppplStack_528 + 4) < uVar34 ||
                          ((*(uint *)(ppppppplStack_528 + 4) <= uVar34 &&
                           (*(uint *)((int64_t)ppppppplStack_528 + 0x24) < uVar36)))))) {
LAB_1801e05b2:
                        uVar10 = 0;
                        goto LAB_1801e05b5;
                      }
                    }
                    else {
                      ppppppplVar17 = (int64_t *******)SystemFunction_00018066bd70(ppppppplVar18);
                      if (((*(uint *)(ppppppplVar18 + 4) < uVar34) ||
                          ((*(uint *)(ppppppplVar18 + 4) <= uVar34 &&
                           (*(uint *)((int64_t)ppppppplVar18 + 0x24) < uVar36)))) &&
                         ((uVar34 < *(uint *)(ppppppplVar17 + 4) ||
                          ((uVar34 <= *(uint *)(ppppppplVar17 + 4) &&
                           (uVar36 < *(uint *)((int64_t)ppppppplVar17 + 0x24))))))) {
                        if (*ppppppplVar18 == (int64_t ******)0x0) goto LAB_1801e05b2;
                        uVar10 = 1;
                        ppppppplVar18 = ppppppplVar17;
LAB_1801e05b5:
                        if (ppppppplVar18 != (int64_t *******)0x0) {
                          pcStack_638 = (code *)&local_var_4d0;
                          function_1eab50(&ppppppplStack_528,&ppppppplStack_3a8,ppppppplVar18,uVar10);
                          ppppppplVar18 = ppppppplStack_3a8;
                          goto LAB_1801e0603;
                        }
                      }
                    }
                    puVar19 = (uint64_t *)function_1ea9f0(&ppppppplStack_528,stack_array_210);
                    ppppppplVar18 = (int64_t *******)*puVar19;
                    ppppppplStack_3a8 = ppppppplVar18;
                  }
LAB_1801e0603:
                  SystemEventProcessor(ppppppplVar18 + 5,pppppppuVar20 + 0xe);
                  pppppppuVar20 = (uint64_t *******)SystemFunction_00018066bd70(pppppppuVar20);
                } while ((uint64_t ********)pppppppuVar20 != &ppppppplocal_var_480);
              }
              if ((int64_t ********)ppppppplStack_520 != &ppppppplStack_528) {
                stack_array_627[0] = 0;
                ppppppplVar17 = ppppppplStack_520;
                do {
                  plocal_var_4a0 = &system_data_buffer_ptr;
                  local_var_488 = 0;
                  lStack_498 = 0;
                  local_var_490 = 0;
                  local_var_630 = *(int32_t *)((int64_t)ppppppplVar17 + 0x24);
                  puVar24 = &system_buffer_ptr;
                  if (plocal_var_348 != (void *)0x0) {
                    puVar24 = plocal_var_348;
                  }
                  puVar23 = &system_buffer_ptr;
                  if (plocal_var_550 != (void *)0x0) {
                    puVar23 = plocal_var_550;
                  }
                  pcStack_638 = (code *)CONCAT44(pcStack_638._4_4_,
                                                 *(int32_t *)(ppppppplVar17 + 4));
                  System_DataHandler(&plocal_var_4a0,&memory_allocator_3528_ptr,puVar23,puVar24);
                  CoreEngineDataTransformer(&plocal_var_400,&plocal_var_4a0);
                  uVar34 = local_var_3f0 + 0x18;
                  CoreEngineDataBufferProcessor(&plocal_var_400,uVar34);
                  puVar22 = (int32_t *)(plocal_var_3f8 + local_var_3f0);
                  *puVar22 = 0x7265742f;
                  puVar22[1] = 0x6e696172;
                  puVar22[2] = 0x6165685f;
                  puVar22[3] = 0x5f726564;
                  *(uint64_t *)(puVar22 + 4) = 0x6873722e61746164;
                  *(int8_t *)(puVar22 + 6) = 0;
                  local_var_3f0 = uVar34;
                  ResourceManager_Allocate(&plocal_var_4a0,1);
                  function_637560(aplocal_var_1c8);
                  local_var_118 = 1;
                  local_var_1a0 = 0;
                  local_var_194 = 0;
                  aplocal_var_1c8[0] = &rendering_buffer_264_ptr;
                  puVar24 = &system_buffer_ptr;
                  if (plocal_var_3f8 != (void *)0x0) {
                    puVar24 = plocal_var_3f8;
                  }
                  iVar7 = function_6391a0(aplocal_var_1c8,puVar24,stack_array_627);
                  if (iVar7 == 0) {
                    CoreEngineDataTransformer(&plocal_var_3a0,ppppppplVar17 + 5);
                    cVar6 = *pcStack_398;
                    lVar35 = 0;
                    while (cVar6 != '\0') {
                      if (pcStack_398[lVar35] == '\\') {
                        pcStack_398[lVar35] = ' ';
                      }
                      lVar35 = lVar35 + 1;
                      cVar6 = pcStack_398[lVar35];
                    }
                    (**(code **)(aplocal_var_1c8[0] + 0x78))(aplocal_var_1c8,&plocal_var_3a0);
                    plocal_var_3a0 = &system_data_buffer_ptr;
                    if (pcStack_398 != (char *)0x0) {
// WARNING: Subroutine does not return
                      CoreEngineMemoryPoolCleaner();
                    }
                    pcStack_398 = (char *)0x0;
                    local_var_388 = 0;
                    plocal_var_3a0 = &system_state_ptr;
                  }
                  else {
                    SystemDataInitializer(&memory_allocator_3448_ptr);
                  }
                  aplocal_var_1c8[0] = &processed_var_6384_ptr;
                  if (local_var_118._1_1_ != '\0') {
                    function_639250(aplocal_var_1c8);
                  }
                  pplocal_var_530 = aplocal_var_170;
                  _Mtx_destroy_in_situ(aplocal_var_170);
                  function_5065c0(aplocal_var_1c8);
                  plocal_var_400 = &system_data_buffer_ptr;
                  if (plocal_var_3f8 != (void *)0x0) {
// WARNING: Subroutine does not return
                    CoreEngineMemoryPoolCleaner();
                  }
                  plocal_var_3f8 = (void *)0x0;
                  local_var_3e8 = 0;
                  plocal_var_400 = &system_state_ptr;
                  plocal_var_4a0 = &system_data_buffer_ptr;
                  if (lStack_498 != 0) {
// WARNING: Subroutine does not return
                    CoreEngineMemoryPoolCleaner();
                  }
                  lStack_498 = 0;
                  local_var_488 = local_var_488 & 0xffffffff00000000;
                  plocal_var_4a0 = &system_state_ptr;
                  ppppppplVar17 = (int64_t *******)SystemFunction_00018066bd70(ppppppplVar17);
                  lVar25 = lStack_408;
                } while ((int64_t ********)ppppppplVar17 != &ppppppplStack_528);
              }
              plocal_var_4c0 = &system_data_buffer_ptr;
              local_var_4a8 = 0;
              plocal_var_4b8 = (void *)0x0;
              local_var_4b0 = 0;
              puVar24 = &system_buffer_ptr;
              if (plocal_var_570 != (void *)0x0) {
                puVar24 = plocal_var_570;
              }
              System_DataHandler(&plocal_var_4c0,&rendering_buffer_2288_ptr,puVar24);
              lStack_620 = 0;
              plocal_var_618 = (uint64_t *)0x0;
              lStack_610 = 0;
              local_var_608 = 0;
              local_var_606 = 3;
              uVar38 = (int32_t)lStack_460;
              System_BufferManager(&lStack_620,4);
              *(int32_t *)plocal_var_618 = uVar38;
              puVar19 = (uint64_t *)((int64_t)plocal_var_618 + 4);
              pppppppuVar20 = ppppppplocal_var_478;
              lVar35 = lStack_620;
              plocal_var_618 = puVar19;
              if ((uint64_t ********)ppppppplocal_var_478 != &ppppppplocal_var_480) {
                do {
                  uVar38 = *(int32_t *)((int64_t)pppppppuVar20 + 0x3c);
                  if ((uint64_t)((lStack_610 - (int64_t)puVar19) + lVar35) < 5) {
                    System_BufferManager(&lStack_620,(int64_t)puVar19 + (4 - lVar35));
                    lVar35 = lStack_620;
                    puVar19 = plocal_var_618;
                  }
                  *(int32_t *)puVar19 = uVar38;
                  plocal_var_618 = (uint64_t *)((int64_t)puVar19 + 4);
                  uVar38 = *(int32_t *)(pppppppuVar20 + 8);
                  if ((uint64_t)((lStack_610 - (int64_t)plocal_var_618) + lVar35) < 5) {
                    System_BufferManager(&lStack_620,(int64_t)plocal_var_618 + (4 - lVar35));
                  }
                  *(int32_t *)plocal_var_618 = uVar38;
                  plocal_var_618 = (uint64_t *)((int64_t)plocal_var_618 + 4);
                  System_QueueProcessor(&lStack_620,pppppppuVar20[9] + 2);
                  uVar1 = *(int16_t *)((int64_t)pppppppuVar20 + 0x5c);
                  if ((uint64_t)((lStack_610 - (int64_t)plocal_var_618) + lStack_620) < 3) {
                    System_BufferManager(&lStack_620,(int64_t)plocal_var_618 + (2 - lStack_620));
                  }
                  *(int16_t *)plocal_var_618 = uVar1;
                  plocal_var_618 = (uint64_t *)((int64_t)plocal_var_618 + 2);
                  ppppppuVar3 = pppppppuVar20[10];
                  if ((uint64_t)((lStack_610 - (int64_t)plocal_var_618) + lStack_620) < 9) {
                    System_BufferManager(&lStack_620,(int64_t)plocal_var_618 + (8 - lStack_620));
                  }
                  *plocal_var_618 = ppppppuVar3;
                  plocal_var_618 = plocal_var_618 + 1;
                  uVar38 = *(int32_t *)(pppppppuVar20 + 0xb);
                  if ((uint64_t)((lStack_610 - (int64_t)plocal_var_618) + lStack_620) < 5) {
                    System_BufferManager(&lStack_620,(int64_t)plocal_var_618 + (4 - lStack_620));
                  }
                  lVar35 = lStack_620;
                  *(int32_t *)plocal_var_618 = uVar38;
                  puVar19 = (uint64_t *)((int64_t)plocal_var_618 + 4);
                  plocal_var_618 = puVar19;
                  pppppppuVar20 = (uint64_t *******)SystemFunction_00018066bd70(pppppppuVar20);
                } while ((uint64_t ********)pppppppuVar20 != &ppppppplocal_var_480);
              }
              alStack_3c0[0] = -1;
              puVar24 = &system_buffer_ptr;
              if (plocal_var_4b8 != (void *)0x0) {
                puVar24 = plocal_var_4b8;
              }
              cVar6 = function_63ba00(alStack_3c0,puVar24,10,0x108);
              if (cVar6 == '\0') {
                puVar24 = &system_buffer_ptr;
                if (plocal_var_4b8 != (void *)0x0) {
                  puVar24 = plocal_var_4b8;
                }
                SystemDataInitializer(&memory_allocator_3560_ptr,puVar24);
              }
              else {
                uVar12 = (int64_t)puVar19 - lVar35;
                if (lVar35 == 0) {
                  uVar12 = 0;
                }
                function_63bd10(alStack_3c0,lVar35,uVar12 & 0xffffffff);
              }
              if (alStack_3c0[0] != -1) {
                LOCK();
                SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
                UNLOCK();
                CloseHandle(alStack_3c0[0]);
                alStack_3c0[0] = -1;
                plocal_var_5f8 = plocal_var_5e8;
                lVar35 = lStack_620;
              }
              if (((char)local_var_608 == '\0') && (lVar35 != 0)) {
// WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner(lVar35);
              }
              plocal_var_4c0 = &system_data_buffer_ptr;
              if (plocal_var_4b8 != (void *)0x0) {
// WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner();
              }
              plocal_var_4b8 = (void *)0x0;
              local_var_4a8 = local_var_4a8 & 0xffffffff00000000;
              plocal_var_4c0 = &system_state_ptr;
              function_0ae2c0(&ppppppplStack_528,ppppppplStack_518);
            }
            function_1e88e0(&ppppppplocal_var_480,local_var_470);
            plocal_var_578 = &system_data_buffer_ptr;
            if (plocal_var_570 != (void *)0x0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            plocal_var_570 = (void *)0x0;
            local_var_560 = local_var_560 & 0xffffffff00000000;
            plocal_var_578 = &system_state_ptr;
            plocal_var_558 = &system_data_buffer_ptr;
            if (plocal_var_550 != (void *)0x0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            plocal_var_550 = (void *)0x0;
            local_var_540 = local_var_540 & 0xffffffff00000000;
            plocal_var_558 = &system_state_ptr;
            plocal_var_3e0 = &system_data_buffer_ptr;
            if (pcStack_3d8 != (code *)0x0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            pcStack_3d8 = (code *)0x0;
            local_var_3c8 = 0;
            plocal_var_3e0 = &system_state_ptr;
            plocal_var_430 = &system_data_buffer_ptr;
            puVar13 = plocal_var_5f8;
            if (lStack_428 != 0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
          }
          else {
            plocal_var_578 = &system_data_buffer_ptr;
            if (plocal_var_570 != (void *)0x0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            plocal_var_570 = (void *)0x0;
            local_var_560 = local_var_560 & 0xffffffff00000000;
            plocal_var_578 = &system_state_ptr;
            plocal_var_558 = &system_data_buffer_ptr;
            if (plocal_var_550 != (void *)0x0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            plocal_var_550 = (void *)0x0;
            local_var_540 = local_var_540 & 0xffffffff00000000;
            plocal_var_558 = &system_state_ptr;
            plocal_var_3e0 = &system_data_buffer_ptr;
            if (pcStack_3d8 != (code *)0x0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            pcStack_3d8 = (code *)0x0;
            local_var_3c8 = 0;
            plocal_var_3e0 = &system_state_ptr;
            plocal_var_430 = &system_data_buffer_ptr;
            if (lStack_428 != 0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
          }
          local_var_3c8 = 0;
          pcStack_3d8 = (code *)0x0;
          plocal_var_3e0 = &system_state_ptr;
          local_var_418 = 0;
          lStack_428 = 0;
          plocal_var_550 = (void *)0x0;
          plocal_var_558 = &system_state_ptr;
          plocal_var_570 = (void *)0x0;
          plocal_var_578 = &system_state_ptr;
          plocal_var_430 = &system_state_ptr;
          iStack_5b0 = iStack_5b0 + 1;
          lStack_538 = lStack_538 + 1;
          uVar12 = (uint64_t)iStack_5b0;
          lVar35 = lStack_4c8;
          lVar37 = lStack_410;
        } while (uVar12 < (uint64_t)(lStack_448 - lStack_450 >> 5));
      }
      _Mtx_destroy_in_situ(stack_array_d8);
      DataSerializationEngine(&lStack_450);
      plocal_var_5f0 = &system_data_buffer_ptr;
      if (puVar13 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(puVar13);
      }
      plocal_var_5e8 = (int8_t *)0x0;
      local_var_5d8 = local_var_5d8 & 0xffffffff00000000;
      plocal_var_5f0 = &system_state_ptr;
      lVar35 = SystemFunction_00018066bd70(lVar35);
      lStack_4c8 = lVar35;
    } while (lVar35 != lVar37);
  }
  plocal_var_350 = &system_data_buffer_ptr;
  if (plocal_var_348 == (void *)0x0) {
    plocal_var_348 = (void *)0x0;
    local_var_338 = 0;
    plocal_var_350 = &system_state_ptr;
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_88 ^ (uint64_t)stack_array_658);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}