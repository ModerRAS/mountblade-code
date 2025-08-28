/* 函数别名定义: DataTransformer */
#define DataTransformer DataTransformer
/* 函数别名定义: RenderingShaderProcessor */
#define RenderingShaderProcessor RenderingShaderProcessor
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part159_sub002_sub002.c - 1 个函数
// 函数: void RenderingSystem_66df0(int64_t param_1)
void RenderingSystem_66df0(int64_t param_1)
{
  short *psVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t **ppuVar4;
  uint64_t *******pppppppuVar5;
  uint64_t ****ppppuVar6;
  uint64_t *puVar7;
  char cVar8;
  uint64_t *******pppppppuVar9;
  uint64_t *puVar10;
  int64_t *plVar11;
  uint64_t *puVar12;
  int64_t *plVar13;
  uint64_t ****ppppuVar14;
  uint *puVar15;
  uint64_t ***pppuVar16;
  uint64_t *puVar17;
  uint64_t *****pppppuVar18;
  void *puVar19;
  int64_t *plVar20;
  uint64_t *puVar21;
  int64_t lVar22;
  uint64_t ******ppppppuVar23;
  void *puVar24;
  uint64_t *puVar25;
  uint64_t **ppuVar26;
  int64_t lVar27;
  int64_t *plVar28;
  uint64_t *puVar29;
  int iVar30;
  uint64_t uVar31;
  uint64_t ***pppuVar32;
  uint64_t ***pppuVar33;
  uint64_t uVar34;
  int8_t uVar35;
  uint uVar36;
  uint uVar37;
  uint64_t uVar38;
  bool bVar39;
  int32_t uVar40;
  int32_t uVar41;
  int32_t uVar42;
  int32_t uVar43;
  int8_t stack_array_498 [32];
  int32_t local_var_478;
  char cStack_468;
  uint local_var_464;
  int8_t local_var_460;
  uint64_t *plocal_var_458;
  uint64_t *plocal_var_450;
  uint64_t ****pppplocal_var_448;
  uint64_t *plocal_var_440;
  uint64_t *plocal_var_438;
  uint64_t *plocal_var_430;
  int32_t local_var_428;
  int64_t *plStack_420;
  int64_t *plStack_418;
  int iStack_410;
  int64_t *plStack_408;
  int64_t lStack_400;
  uint64_t ******pppppplocal_var_3f8;
  uint64_t ****pppplocal_var_3f0;
  int8_t stack_array_3e8 [8];
  int64_t *plStack_3e0;
  uint64_t local_var_3d8;
  int64_t lStack_3d0;
  int32_t local_var_3c8;
  uint64_t local_var_3c4;
  int32_t local_var_3bc;
  int64_t lStack_3b8;
  int64_t lStack_3b0;
  int64_t lStack_3a8;
  int32_t local_var_3a0;
  uint64_t ****pppplocal_var_398;
  void *plocal_var_390;
  int8_t *plocal_var_388;
  int32_t local_var_380;
  uint64_t local_var_378;
  uint64_t *******ppppppplocal_var_370;
  uint64_t *******ppppppplocal_var_368;
  uint64_t *******ppppppplocal_var_360;
  uint64_t local_var_358;
  uint64_t local_var_350;
  int32_t local_var_348;
  int64_t *plStack_340;
  int64_t *plStack_338;
  uint64_t *******ppppppplocal_var_330;
  int64_t *plStack_328;
  int64_t *plStack_320;
  int64_t *plStack_318;
  int32_t local_var_310;
  uint64_t *plocal_var_308;
  uint64_t *plocal_var_300;
  uint64_t *plocal_var_2f8;
  int32_t local_var_2f0;
  char cStack_2e8;
  uint local_var_2e4;
  uint64_t **pplocal_var_2e0;
  uint64_t **pplocal_var_2d8;
  uint64_t ****pppplocal_var_2d0;
  uint64_t local_var_2c8;
  int32_t local_var_2c0;
  int32_t local_var_2bc;
  uint *plocal_var_2b8;
  int64_t *plStack_2b0;
  int8_t local_var_2a8;
  uint local_var_2a0;
  uint64_t local_var_298;
  int64_t *plStack_290;
  int64_t *plStack_288;
  uint64_t **pplocal_var_280;
  uint64_t **pplocal_var_278;
  int64_t *plStack_270;
  uint64_t *plocal_var_268;
  uint64_t *plocal_var_260;
  uint64_t local_var_258;
  int32_t local_var_250;
  uint64_t **pplocal_var_248;
  uint64_t **pplocal_var_240;
  uint64_t **pplocal_var_238;
  uint64_t **pplocal_var_230;
  uint64_t **pplocal_var_228;
  int32_t local_var_220;
  int32_t local_var_21c;
  int32_t local_var_218;
  int32_t local_var_214;
  int32_t local_var_210;
  int32_t local_var_20c;
  int32_t local_var_208;
  int32_t local_var_204;
  int32_t local_var_200;
  int32_t local_var_1fc;
  uint64_t local_var_1f8;
  uint64_t local_var_1f0;
  uint local_var_1e8;
  uint local_var_1e4;
  uint local_var_1e0;
  uint local_var_1dc;
  int32_t local_var_1d8;
  int32_t local_var_1d4;
  int32_t local_var_1d0;
  int32_t local_var_1cc;
  int32_t local_var_1c8;
  int32_t local_var_1c4;
  uint64_t **pplocal_var_1c0;
  uint64_t local_var_1b8;
  uint64_t ****pppplocal_var_1b0;
  uint64_t ****pppplocal_var_1a8;
  uint64_t ******pppppplocal_var_1a0;
  uint64_t ******pppppplocal_var_198;
  int8_t stack_array_190 [16];
  void *plocal_var_180;
  void *plocal_var_178;
  int32_t local_var_170;
  uint8_t stack_array_168 [16];
  void *plocal_var_158;
  void *plocal_var_150;
  int32_t local_var_148;
  uint8_t stack_array_140 [16];
  void *plocal_var_130;
  void *plocal_var_128;
  int32_t local_var_120;
  uint8_t stack_array_118 [16];
  void *plocal_var_108;
  void *plocal_var_100;
  int32_t local_var_f8;
  uint8_t stack_array_f0 [24];
  void *plocal_var_d8;
  void *plocal_var_d0;
  int iStack_c8;
  uint8_t stack_array_c0 [72];
  uint64_t local_var_78;
  local_var_1b8 = 0xfffffffffffffffe;
  local_var_78 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_498;
  uVar36 = 0;
  local_var_464 = 0;
  plocal_var_268 = (uint64_t *)0x0;
  plocal_var_260 = (uint64_t *)0x0;
  local_var_258 = 0;
  local_var_250 = 3;
  lStack_400 = param_1;
  GenericFunction_1801af140(*(uint64_t *)(param_1 + 0xa0));
  puVar7 = plocal_var_260;
  local_var_348 = 3;
  ppppppplocal_var_370 = &ppppppplocal_var_370;
  ppppppplocal_var_368 = &ppppppplocal_var_370;
  ppppppplocal_var_360 = (uint64_t *******)0x0;
  local_var_358 = 0;
  local_var_350 = 0;
  puVar29 = plocal_var_268;
  do {
    if (puVar29 == puVar7) {
      local_var_298 = *(uint64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 600);
      plocal_var_308 = (uint64_t *)0x0;
      plocal_var_300 = (uint64_t *)0x0;
      plocal_var_2f8 = (uint64_t *)0x0;
      local_var_2f0 = 3;
      puVar10 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x2000,3);
      puVar17 = puVar10 + 0x400;
      lStack_3b8 = 0;
      lStack_3b0 = 0;
      lStack_3a8 = 0;
      local_var_3a0 = 3;
      plocal_var_450 = puVar10;
      plocal_var_308 = puVar10;
      plocal_var_300 = puVar10;
      plocal_var_2f8 = puVar17;
      lVar22 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x2000,3);
      if (lStack_3b8 != lStack_3b0) {
// WARNING: Subroutine does not return
        memmove(lVar22,lStack_3b8,lStack_3b0 - lStack_3b8);
      }
      if (lStack_3b8 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lStack_3b8);
      }
      lStack_3a8 = lVar22 + 0x2000;
      plStack_328 = (int64_t *)0x0;
      plStack_320 = (int64_t *)0x0;
      plStack_318 = (int64_t *)0x0;
      local_var_310 = 3;
      lStack_3b8 = lVar22;
      lStack_3b0 = lVar22;
      plVar11 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x2000,3);
      plStack_338 = plVar11 + 0x400;
      plocal_var_440 = (uint64_t *)0x0;
      plocal_var_438 = (uint64_t *)0x0;
      plocal_var_430 = (uint64_t *)0x0;
      local_var_428 = 3;
      plStack_418 = plVar11;
      plStack_408 = plVar11;
      plStack_328 = plVar11;
      plStack_320 = plVar11;
      plStack_318 = plStack_338;
      puVar12 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x2000,3);
      if (plocal_var_440 != plocal_var_438) {
// WARNING: Subroutine does not return
        memmove(puVar12,plocal_var_440,(int64_t)plocal_var_438 - (int64_t)plocal_var_440);
      }
      if (plocal_var_440 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(plocal_var_440);
      }
      plocal_var_430 = puVar12 + 0x400;
      ppppppplocal_var_330 = ppppppplocal_var_368;
      plocal_var_440 = puVar12;
      plocal_var_438 = puVar12;
      if ((uint64_t ********)ppppppplocal_var_368 != &ppppppplocal_var_370) {
        puVar12 = plocal_var_450;
        uVar40 = (int32_t)local_var_2c8;
        uVar41 = local_var_2c8._4_4_;
        uVar42 = local_var_2c0;
        uVar43 = local_var_2bc;
        do {
          ppppppuVar23 = ppppppplocal_var_330[4];
          uVar34 = 0;
          pppppuVar18 = ppppppuVar23[0x38];
          puVar10 = plocal_var_450;
          plocal_var_458 = puVar12;
          pppppplocal_var_3f8 = ppppppuVar23;
          plocal_var_300 = puVar12;
          if ((int64_t)ppppppuVar23[0x39] - (int64_t)pppppuVar18 >> 3 != 0) {
            do {
              puVar21 = plocal_var_300;
              pppplocal_var_3f0 = pppppuVar18[uVar34];
              if (plocal_var_300 < puVar17) {
                *plocal_var_300 = pppplocal_var_3f0;
                puVar12 = puVar10;
              }
              else {
                lVar27 = (int64_t)plocal_var_300 - (int64_t)puVar10;
                lVar22 = lVar27 >> 3;
                if (lVar22 == 0) {
                  lVar22 = 1;
LAB_1803672a8:
                  puVar12 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar22 * 8,3);
                }
                else {
                  lVar22 = lVar22 * 2;
                  if (lVar22 != 0) goto LAB_1803672a8;
                  puVar12 = (uint64_t *)0x0;
                }
                if (puVar10 != puVar21) {
// WARNING: Subroutine does not return
                  memmove(puVar12,puVar10,lVar27);
                }
                *puVar12 = pppplocal_var_3f0;
                if (puVar10 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
                  CoreEngineMemoryPoolCleaner(puVar10);
                }
                puVar17 = puVar12 + lVar22;
                ppppppuVar23 = pppppplocal_var_3f8;
                plocal_var_308 = puVar12;
                plocal_var_2f8 = puVar17;
                plocal_var_300 = puVar12;
              }
              plocal_var_300 = plocal_var_300 + 1;
              uVar34 = uVar34 + 1;
              pppppuVar18 = ppppppuVar23[0x38];
              plVar11 = plStack_418;
              puVar10 = puVar12;
              uVar36 = local_var_464;
            } while (uVar34 < (uint64_t)((int64_t)ppppppuVar23[0x39] - (int64_t)pppppuVar18 >> 3)
                    );
          }
          plocal_var_450 = puVar10;
          plVar28 = plStack_408;
          puVar10 = plocal_var_300;
          plocal_var_458 = plocal_var_300;
          if (puVar12 != plocal_var_300) {
            do {
              puVar17 = (uint64_t *)*puVar12;
              local_var_3c8 = 0x3f800000;
              local_var_3bc = 3;
              local_var_3d8 = 1;
              plStack_3e0 = (int64_t *)&system_data_0000;
              lStack_3d0 = 0;
              local_var_3c4 = 0x40000000;
              plocal_var_108 = &system_config_ptr;
              plocal_var_100 = stack_array_f0;
              stack_array_f0[0] = 0;
              local_var_f8 = 4;
              plocal_var_458 = puVar17;
              strcpy_s(stack_array_f0,0x10,&processed_var_6496_ptr);
              uVar37 = uVar36 | 1;
              puVar24 = &system_buffer_ptr;
              if (plocal_var_100 != (void *)0x0) {
                puVar24 = plocal_var_100;
              }
              puVar19 = &system_buffer_ptr;
              if ((void *)puVar17[0x1b] != (void *)0x0) {
                puVar19 = (void *)puVar17[0x1b];
              }
              local_var_464 = uVar37;
              lVar22 = strstr(puVar19,puVar24);
              if (lVar22 == 0) {
                plocal_var_130 = &system_config_ptr;
                plocal_var_128 = stack_array_118;
                stack_array_118[0] = 0;
                local_var_120 = 7;
                strcpy_s(stack_array_118,0x10,&processed_var_9232_ptr);
                uVar37 = uVar36 | 3;
                puVar24 = &system_buffer_ptr;
                if (plocal_var_128 != (void *)0x0) {
                  puVar24 = plocal_var_128;
                }
                puVar19 = &system_buffer_ptr;
                if ((void *)puVar17[0x1b] != (void *)0x0) {
                  puVar19 = (void *)puVar17[0x1b];
                }
                local_var_464 = uVar37;
                lVar22 = strstr(puVar19,puVar24);
                if (lVar22 != 0) goto LAB_18036764f;
                plocal_var_158 = &system_config_ptr;
                plocal_var_150 = stack_array_140;
                stack_array_140[0] = 0;
                local_var_148 = 6;
                strcpy_s(stack_array_140,0x10,&processed_var_9296_ptr);
                uVar37 = uVar36 | 7;
                puVar24 = &system_buffer_ptr;
                if (plocal_var_150 != (void *)0x0) {
                  puVar24 = plocal_var_150;
                }
                puVar19 = &system_buffer_ptr;
                if ((void *)puVar17[0x1b] != (void *)0x0) {
                  puVar19 = (void *)puVar17[0x1b];
                }
                local_var_464 = uVar37;
                lVar22 = strstr(puVar19,puVar24);
                if (lVar22 != 0) goto LAB_18036764f;
                plocal_var_180 = &system_config_ptr;
                plocal_var_178 = stack_array_168;
                stack_array_168[0] = 0;
                local_var_170 = 7;
                strcpy_s(stack_array_168,0x10,&processed_var_9288_ptr);
                uVar37 = uVar36 | 0xf;
                puVar24 = &system_buffer_ptr;
                if (plocal_var_178 != (void *)0x0) {
                  puVar24 = plocal_var_178;
                }
                puVar19 = &system_buffer_ptr;
                if ((void *)puVar17[0x1b] != (void *)0x0) {
                  puVar19 = (void *)puVar17[0x1b];
                }
                local_var_464 = uVar37;
                lVar22 = strstr(puVar19,puVar24);
                if (lVar22 != 0) goto LAB_18036764f;
              }
              else {
LAB_18036764f:
                lVar22 = 1;
              }
              if ((uVar37 & 8) != 0) {
                local_var_464 = uVar37 & 0xfffffff7;
                plocal_var_180 = &system_state_ptr;
                uVar37 = local_var_464;
              }
              if ((uVar37 & 4) != 0) {
                local_var_464 = uVar37 & 0xfffffffb;
                plocal_var_158 = &system_state_ptr;
                uVar37 = local_var_464;
              }
              if ((uVar37 & 2) != 0) {
                local_var_464 = uVar37 & 0xfffffffd;
                plocal_var_130 = &system_state_ptr;
                uVar37 = local_var_464;
              }
              uVar36 = uVar37;
              if ((uVar37 & 1) != 0) {
                local_var_464 = uVar37 & 0xfffffffe;
                plocal_var_108 = &system_state_ptr;
                uVar36 = local_var_464;
              }
              if ((char)lVar22 == '\0') {
                RenderingSystem_68c20(stack_array_3e8);
                plocal_var_450 = puVar12;
              }
              else {
                lStack_3b0 = lStack_3b8;
                NetworkSystem_SecurityManager(puVar17,&lStack_3b8);
                cStack_468 = '\0';
                plocal_var_d8 = &memory_allocator_3480_ptr;
                plocal_var_d0 = stack_array_c0;
                stack_array_c0[0] = 0;
                iStack_c8 = 0x13;
                strcpy_s(stack_array_c0,0x40);
                plocal_var_390 = &system_data_buffer_ptr;
                local_var_378 = 0;
                plocal_var_388 = (int8_t *)0x0;
                local_var_380 = 0;
                CoreEngineDataBufferProcessor(&plocal_var_390,iStack_c8);
                if (0 < iStack_c8) {
                  puVar24 = &system_buffer_ptr;
                  if (plocal_var_d0 != (void *)0x0) {
                    puVar24 = plocal_var_d0;
                  }
// WARNING: Subroutine does not return
                  memcpy(plocal_var_388,puVar24,(int64_t)(iStack_c8 + 1));
                }
                if ((plocal_var_d0 != (void *)0x0) &&
                   (local_var_380 = 0, plocal_var_388 != (int8_t *)0x0)) {
                  *plocal_var_388 = 0;
                }
                lVar22 = DataStructure_f17b0(puVar17,&plocal_var_390);
                plocal_var_390 = &system_data_buffer_ptr;
                if (plocal_var_388 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
                  CoreEngineMemoryPoolCleaner();
                }
                plocal_var_388 = (int8_t *)0x0;
                local_var_378 = local_var_378 & 0xffffffff00000000;
                plocal_var_390 = &system_state_ptr;
                plocal_var_d8 = &system_state_ptr;
                if ((lVar22 != 0) && (*(char *)(lVar22 + 0xa8) != '\0')) {
                  cStack_468 = '\x01';
                  uVar40 = *(int32_t *)(lVar22 + 0x98);
                  uVar41 = *(int32_t *)(lVar22 + 0x9c);
                  uVar42 = *(int32_t *)(lVar22 + 0xa0);
                  uVar43 = *(int32_t *)(lVar22 + 0xa4);
                }
                iStack_410 = 0;
                pppppplocal_var_3f8 = (uint64_t ******)0x0;
                if (lStack_3b0 - lStack_3b8 >> 3 != 0) {
                  do {
                    ppppppuVar23 = pppppplocal_var_3f8;
                    plVar11 = *(int64_t **)(lStack_3b8 + (int64_t)pppppplocal_var_3f8 * 8);
                    plStack_420 = plVar11;
                    plStack_270 = plVar11;
                    if ((*(byte *)((int64_t)plVar11 + 0x2c4) & 2) == 0) {
                      cVar8 = RenderingSystem_66b10(plVar11);
                      if ((cVar8 == '\0') && (plVar11[0x22] == 0)) {
                        uVar36 = *(uint *)(plVar11 + 0x59);
                        for (lVar22 = plVar11[0x2d]; uVar34 = (uint64_t)uVar36, lVar22 != 0;
                            lVar22 = *(int64_t *)(lVar22 + 0x168)) {
                          uVar36 = uVar36 & *(uint *)(lVar22 + 0x2c8);
                        }
                        for (puVar15 = (uint *)plStack_3e0[uVar34 % (local_var_3d8 & 0xffffffff)];
                            puVar15 != (uint *)0x0; puVar15 = *(uint **)(puVar15 + 6)) {
                          if (uVar36 == *puVar15) goto LAB_1803678fd;
                        }
                        puVar15 = (uint *)plStack_3e0[local_var_3d8];
LAB_1803678fd:
                        plStack_340 = (int64_t *)0x0;
                        pppplocal_var_3f0 = (uint64_t ****)0x0;
                        local_var_2a0 = uVar36;
                        DataStructure_f21b0(plVar11,uVar34);
                        plVar13 = (int64_t *)RenderingSystem_a0010(local_var_298,plVar11);
                        plStack_408 = plVar13;
                        if ((plVar13[3] != 0) ||
                           (puVar17 = plocal_var_458,
                           (plVar11[0x1f] - plVar11[0x1e] & 0xfffffffffffffff8U) != 0)) {
                          DataStructure_f0510(plVar11,0);
                          if (puVar15 == (uint *)plStack_3e0[local_var_3d8]) {
                            ppppuVar14 = (uint64_t ****)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x98,8);
                            *ppppuVar14 = (uint64_t ***)&system_handler1_ptr;
                            *ppppuVar14 = (uint64_t ***)&system_handler2_ptr;
                            *(int32_t *)(ppppuVar14 + 1) = 0;
                            *ppppuVar14 = (uint64_t ***)&processed_var_768_ptr;
                            *(int32_t *)(ppppuVar14 + 2) = 4;
                            ppppuVar14[3] = (uint64_t ***)0x0;
                            ppppuVar14[4] = (uint64_t ***)0x0;
                            *(int32_t *)(ppppuVar14 + 1) = 0;
                            ppppuVar14[5] = (uint64_t ***)0x0;
                            *ppppuVar14 = (uint64_t ***)&processed_var_9656_ptr;
                            pppplocal_var_1b0 = ppppuVar14 + 6;
                            *pppplocal_var_1b0 = (uint64_t ***)0x0;
                            ppppuVar14[7] = (uint64_t ***)0x0;
                            ppppuVar14[8] = (uint64_t ***)0x0;
                            *(int32_t *)(ppppuVar14 + 9) = 3;
                            *(int32_t *)(ppppuVar14 + 0x10) = 0;
                            ppppuVar14[10] = (uint64_t ***)0x0;
                            ppppuVar14[0xb] = (uint64_t ***)0x0;
                            ppppuVar14[0xc] = (uint64_t ***)0x0;
                            ppppuVar14[0xd] = (uint64_t ***)0x0;
                            ppppuVar14[0xe] = (uint64_t ***)0x0;
                            ppppuVar14[0xf] = (uint64_t ***)0x0;
                            *(int8_t *)((int64_t)ppppuVar14 + 0x84) = 0;
                            *(int32_t *)(ppppuVar14 + 0x11) = 0x3f800000;
                            *(int32_t *)((int64_t)ppppuVar14 + 0x8c) = 0x3f800000;
                            *(int32_t *)(ppppuVar14 + 0x12) = 0x3f800000;
                            *(int32_t *)((int64_t)ppppuVar14 + 0x94) = 0x7f7fffff;
                            pppplocal_var_448 = ppppuVar14;
                            pppplocal_var_2d0 = ppppuVar14;
                            pppplocal_var_1a8 = ppppuVar14;
                            (*(code *)(*ppppuVar14)[5])(ppppuVar14);
                            if (cStack_468 != '\0') {
                              *(int8_t *)((int64_t)ppppuVar14 + 0x84) = 1;
                              *(int32_t *)(ppppuVar14 + 0x11) = uVar40;
                              *(int32_t *)((int64_t)ppppuVar14 + 0x8c) = uVar41;
                              *(int32_t *)(ppppuVar14 + 0x12) = uVar42;
                              *(int32_t *)((int64_t)ppppuVar14 + 0x94) = uVar43;
                            }
                            plStack_288 = plVar11;
                            (**(code **)(*plVar11 + 0x28))(plVar11);
                            plStack_288 = (int64_t *)0x0;
                            pppplocal_var_398 = ppppuVar14;
                            plStack_340 = plVar11;
                            pppplocal_var_2d0 = &pppplocal_var_398;
                            (*(code *)(*ppppuVar14)[5])(ppppuVar14);
                            pppplocal_var_3f0 = &pppplocal_var_398;
                            PhysicsSystem_TerrainCollider(plVar11);
                            if (pppplocal_var_398 != (uint64_t ****)0x0) {
                              (*(code *)(*pppplocal_var_398)[7])();
                            }
                            local_var_1f8._0_4_ = (uint)plVar11;
                            local_var_1f8._4_4_ = (uint)((uint64_t)plVar11 >> 0x20);
                            local_var_1f0._0_4_ = SUB84(ppppuVar14,0);
                            local_var_1f0._4_4_ = (int32_t)((uint64_t)ppppuVar14 >> 0x20);
                            local_var_1e0 = (uint)local_var_1f8;
                            local_var_1dc = local_var_1f8._4_4_;
                            local_var_1d8 = (int32_t)local_var_1f0;
                            local_var_1d4 = local_var_1f0._4_4_;
                            uVar38 = uVar34 % (local_var_3d8 & 0xffffffff);
                            plVar20 = plStack_3e0 + uVar38;
                            for (puVar15 = (uint *)*plVar20; pppplocal_var_3f0 = ppppuVar14,
                                local_var_1f8 = plVar11, local_var_1f0 = ppppuVar14, local_var_1e8 = uVar36,
                                puVar15 != (uint *)0x0; puVar15 = *(uint **)(puVar15 + 6)) {
                              if (uVar36 == *puVar15) {
                                local_var_2a8 = 0;
                                plocal_var_2b8 = puVar15;
                                goto LAB_180367be6;
                              }
                            }
                            puVar15 = (uint *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x20,
                                                            (int8_t)local_var_3bc);
                            *puVar15 = local_var_1e8;
                            puVar15[1] = local_var_1e4;
                            puVar15[2] = local_var_1e0;
                            puVar15[3] = local_var_1dc;
                            *(uint64_t *)(puVar15 + 4) = CONCAT44(local_var_1d4,local_var_1d8);
                            puVar15[6] = 0;
                            puVar15[7] = 0;
                            local_var_478 = 1;
                            RenderingShaderProcessor0(&local_var_3c8);
                            if (cStack_2e8 != '\0') {
                              uVar38 = uVar34 % (uint64_t)local_var_2e4;
                              RenderingSystem_68e80(stack_array_3e8,local_var_2e4);
                            }
                            *(int64_t *)(puVar15 + 6) = plStack_3e0[uVar38];
                            plStack_3e0[uVar38] = (int64_t)puVar15;
                            lStack_3d0 = lStack_3d0 + 1;
                            plVar20 = plStack_3e0 + uVar38;
                            local_var_2a8 = 1;
                            ppppuVar14 = pppplocal_var_448;
                            plocal_var_2b8 = puVar15;
LAB_180367be6:
                            plStack_2b0 = plVar20;
                            (*(code *)(*ppppuVar14)[7])(ppppuVar14);
                            plVar20 = plVar11;
                            plVar11 = plStack_420;
                          }
                          else {
                            plVar20 = *(int64_t **)(puVar15 + 2);
                            if (plVar20 != (int64_t *)0x0) {
                              plStack_290 = plVar20;
                              (**(code **)(*plVar20 + 0x28))(plVar20);
                            }
                            plStack_290 = (int64_t *)0x0;
                            ppppuVar14 = *(uint64_t *****)(puVar15 + 4);
                            pppplocal_var_448 = ppppuVar14;
                            pppplocal_var_3f0 = ppppuVar14;
                            plStack_340 = plVar20;
                          }
                          plVar2 = (int64_t *)plVar13[1];
                          lVar22 = *plVar2;
                          plVar13 = plVar2;
                          if (lVar22 == 0) {
                            plVar13 = plVar2 + 1;
                            lVar22 = *plVar13;
                            while (lVar22 == 0) {
                              plVar13 = plVar13 + 1;
                              lVar22 = *plVar13;
                            }
                          }
                          if (lVar22 != plVar2[plStack_408[2]]) {
                            do {
                              lVar27 = lStack_400;
                              plVar28 = (int64_t *)**(uint64_t **)(lVar22 + 8);
                              uVar35 = (*(float *)((int64_t)plVar11 + 0x74) *
                                        *(float *)(plVar11 + 0x11) -
                                       *(float *)(plVar11 + 0xf) *
                                       *(float *)((int64_t)plVar11 + 0x84)) *
                                       *(float *)(plVar11 + 0x12) +
                                       (*(float *)(plVar11 + 0xf) * *(float *)(plVar11 + 0x10) -
                                       *(float *)(plVar11 + 0xe) * *(float *)(plVar11 + 0x11)) *
                                       *(float *)((int64_t)plVar11 + 0x94) +
                                       (*(float *)(plVar11 + 0xe) *
                                        *(float *)((int64_t)plVar11 + 0x84) -
                                       *(float *)((int64_t)plVar11 + 0x74) *
                                       *(float *)(plVar11 + 0x10)) * *(float *)(plVar11 + 0x13) <
                                       0.0;
                              local_var_460 = uVar35;
                              local_var_2c8 = RenderingSystem_a0500();
                              local_var_2c0 = CONCAT31(local_var_2c0._1_3_,uVar35);
                              pplocal_var_2d8 = (uint64_t **)0x0;
                              puVar17 = (uint64_t *)(lVar27 + 0x70);
                              puVar10 = *(uint64_t **)(lVar27 + 0x80);
                              puVar12 = puVar17;
                              if (puVar10 == (uint64_t *)0x0) {
LAB_180367d65:
                                puVar25 = puVar17;
                              }
                              else {
                                do {
                                  if (((uint64_t)puVar10[4] < local_var_2c8) ||
                                     (((uint64_t)puVar10[4] <= local_var_2c8 &&
                                      (*(byte *)(puVar10 + 5) < (byte)uVar35)))) {
                                    bVar39 = true;
                                    puVar21 = (uint64_t *)*puVar10;
                                  }
                                  else {
                                    bVar39 = false;
                                    puVar21 = (uint64_t *)puVar10[1];
                                  }
                                  puVar25 = puVar10;
                                  if (bVar39) {
                                    puVar25 = puVar12;
                                  }
                                  puVar10 = puVar21;
                                  puVar12 = puVar25;
                                } while (puVar21 != (uint64_t *)0x0);
                                if (((puVar25 == puVar17) || (local_var_2c8 < (uint64_t)puVar25[4]))
                                   || ((local_var_2c8 <= (uint64_t)puVar25[4] &&
                                       ((byte)uVar35 < *(byte *)(puVar25 + 5)))))
                                goto LAB_180367d65;
                              }
                              if (puVar25 == puVar17) {
                                (**(code **)(*plVar28 + 0xa8))(plVar28,&pplocal_var_2e0);
                                ppuVar26 = pplocal_var_2e0;
                                DataStructure_79640(pplocal_var_2e0,*(uint64_t *)(lVar22 + 8));
                                (*(code *)(*ppuVar26)[0x29])(ppuVar26,&system_data_0300);
                                (*(code *)(*ppuVar26)[0x19])(ppuVar26,1);
                                iVar30 = 0;
                                puVar17 = ppuVar26[7];
                                if ((int64_t)ppuVar26[8] - (int64_t)puVar17 >> 4 != 0) {
                                  lVar27 = 0;
                                  do {
                                    lVar3 = *(int64_t *)((int64_t)puVar17 + lVar27);
                                    if (*(char *)(lVar3 + 0xf9) == '\0') {
                                      uVar31 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xc0,8,9);
                                      uVar31 = GenericFunction_180084ea0(uVar31);
                                      *(uint64_t *)(lVar3 + 0x1d8) = uVar31;
                                      LOCK();
                                      *(int8_t *)(lVar3 + 0xf9) = 1;
                                      UNLOCK();
                                    }
                                    iVar30 = iVar30 + 1;
                                    lVar27 = lVar27 + 0x10;
                                    puVar17 = ppuVar26[7];
                                    uVar35 = local_var_460;
                                  } while ((uint64_t)(int64_t)iVar30 <
                                           (uint64_t)
                                           ((int64_t)ppuVar26[8] - (int64_t)puVar17 >> 4));
                                }
                                local_var_1d0 = (int32_t)local_var_2c8;
                                local_var_1cc = local_var_2c8._4_4_;
                                local_var_1c8 = local_var_2c0;
                                local_var_1c4 = local_var_2bc;
                                pplocal_var_1c0 = ppuVar26;
                                if (ppuVar26 != (uint64_t **)0x0) {
                                  (*(code *)(*ppuVar26)[5])(ppuVar26);
                                }
                                RenderingSystem_68cc0(lStack_400 + 0x70,stack_array_190);
                                pplocal_var_280 = ppuVar26;
                                if (ppuVar26 != (uint64_t **)0x0) {
                                  (*(code *)(*ppuVar26)[5])(ppuVar26);
                                }
                                pplocal_var_280 = (uint64_t **)0x0;
                                pplocal_var_2d8 = ppuVar26;
                                if (pplocal_var_1c0 != (uint64_t **)0x0) {
                                  (*(code *)(*pplocal_var_1c0)[7])();
                                }
                                ppppuVar14 = pppplocal_var_448;
                                plVar11 = plStack_420;
                                if (pplocal_var_2e0 != (uint64_t **)0x0) {
                                  (*(code *)(*pplocal_var_2e0)[7])();
                                  ppppuVar14 = pppplocal_var_448;
                                  plVar11 = plStack_420;
                                }
                              }
                              else {
                                ppuVar26 = (uint64_t **)puVar25[6];
                                if (ppuVar26 != (uint64_t **)0x0) {
                                  pplocal_var_278 = ppuVar26;
                                  (*(code *)(*ppuVar26)[5])(ppuVar26);
                                }
                                pplocal_var_278 = (uint64_t **)0x0;
                                pplocal_var_2d8 = ppuVar26;
                              }
                              ppppuVar6 = pppplocal_var_448;
                              pplocal_var_240 = (uint64_t **)plVar11[0xe];
                              pplocal_var_238 = (uint64_t **)plVar11[0xf];
                              pplocal_var_230 = (uint64_t **)plVar11[0x10];
                              pplocal_var_228 = (uint64_t **)plVar11[0x11];
                              local_var_220 = (int32_t)plVar11[0x12];
                              local_var_21c = *(int32_t *)((int64_t)plVar11 + 0x94);
                              ppuVar4 = (uint64_t **)plVar11[0x12];
                              local_var_218 = (int32_t)plVar11[0x13];
                              local_var_214 = *(int32_t *)((int64_t)plVar11 + 0x9c);
                              local_var_210 = (int32_t)plVar11[0x14];
                              local_var_20c = *(int32_t *)((int64_t)plVar11 + 0xa4);
                              local_var_208 = (int32_t)plVar11[0x15];
                              local_var_204 = *(int32_t *)((int64_t)plVar11 + 0xac);
                              local_var_200 = CONCAT31(local_var_200._1_3_,uVar35);
                              pppuVar32 = ppppuVar14[7];
                              pplocal_var_248 = ppuVar26;
                              if (pppuVar32 < ppppuVar14[8]) {
                                ppppuVar14[7] = pppuVar32 + 10;
                                *pppuVar32 = ppuVar26;
                                pppuVar32[1] = pplocal_var_240;
                                pppuVar32[2] = pplocal_var_238;
                                pppuVar32[3] = pplocal_var_230;
                                pppuVar32[4] = pplocal_var_228;
                                pppuVar32[5] = ppuVar4;
                                *(int32_t *)(pppuVar32 + 6) = local_var_218;
                                *(int32_t *)((int64_t)pppuVar32 + 0x34) = local_var_214;
                                *(int32_t *)(pppuVar32 + 7) = local_var_210;
                                *(int32_t *)((int64_t)pppuVar32 + 0x3c) = local_var_20c;
                                *(int32_t *)(pppuVar32 + 8) = local_var_208;
                                *(int32_t *)((int64_t)pppuVar32 + 0x44) = local_var_204;
                                *(int32_t *)(pppuVar32 + 9) = local_var_200;
                                *(int32_t *)((int64_t)pppuVar32 + 0x4c) = local_var_1fc;
                              }
                              else {
                                pppuVar33 = ppppuVar14[6];
                                lVar27 = ((int64_t)pppuVar32 - (int64_t)pppuVar33) / 0x50;
                                if (lVar27 == 0) {
                                  lVar27 = 1;
LAB_180367fe6:
                                  pppuVar16 = (uint64_t ***)
                                              CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar27 * 0x50,
                                                            *(int8_t *)(pppplocal_var_448 + 9));
                                  pppuVar32 = ppppuVar6[7];
                                  pppuVar33 = ppppuVar6[6];
                                }
                                else {
                                  lVar27 = lVar27 * 2;
                                  if (lVar27 != 0) goto LAB_180367fe6;
                                  pppuVar16 = (uint64_t ***)0x0;
                                }
                                puVar17 = (uint64_t *)RenderingSystem_68e20(pppuVar33,pppuVar32);
                                *puVar17 = pplocal_var_248;
                                puVar17[1] = pplocal_var_240;
                                puVar17[2] = pplocal_var_238;
                                puVar17[3] = pplocal_var_230;
                                puVar17[4] = pplocal_var_228;
                                puVar17[5] = CONCAT44(local_var_21c,local_var_220);
                                *(int32_t *)(puVar17 + 6) = local_var_218;
                                *(int32_t *)((int64_t)puVar17 + 0x34) = local_var_214;
                                *(int32_t *)(puVar17 + 7) = local_var_210;
                                *(int32_t *)((int64_t)puVar17 + 0x3c) = local_var_20c;
                                *(int32_t *)(puVar17 + 8) = local_var_208;
                                *(int32_t *)((int64_t)puVar17 + 0x44) = local_var_204;
                                *(int32_t *)(puVar17 + 9) = local_var_200;
                                *(int32_t *)((int64_t)puVar17 + 0x4c) = local_var_1fc;
                                if (ppppuVar6[6] != (uint64_t ***)0x0) {
// WARNING: Subroutine does not return
                                  CoreEngineMemoryPoolCleaner();
                                }
                                ppppuVar6[6] = pppuVar16;
                                ppppuVar6[7] = (uint64_t ***)(puVar17 + 10);
                                pppplocal_var_448[8] = pppuVar16 + lVar27 * 10;
                                ppppuVar14 = pppplocal_var_448;
                                plVar11 = plStack_420;
                              }
                              if (ppuVar26 != (uint64_t **)0x0) {
                                (*(code *)(*ppuVar26)[7])(ppuVar26);
                              }
                              lVar22 = *(int64_t *)(lVar22 + 0x10);
                              while (lVar22 == 0) {
                                plVar13 = plVar13 + 1;
                                lVar22 = *plVar13;
                              }
                            } while (lVar22 != *(int64_t *)(plStack_408[1] + plStack_408[2] * 8));
                            plStack_338 = plStack_318;
                            plStack_418 = plStack_328;
                            plStack_420 = plStack_270;
                            plVar20 = plStack_340;
                            plVar28 = plStack_320;
                            plVar11 = plStack_270;
                          }
                          plVar13 = plStack_418;
                          puVar17 = plocal_var_458;
                          if (plVar11 == plVar20) {
                            if ((uint64_t *)plVar20[0x2d] != plocal_var_458) {
                              DataStructure_e8a50(plocal_var_458,plVar20,1,0);
                            }
                            RenderingSystem_a00c0(*(uint64_t *)(*(int64_t *)(lStack_400 + 0xa0) + 600),
                                          plVar20);
                          }
                          else if (plVar28 < plStack_338) {
                            plStack_320 = plVar28 + 1;
                            *plVar28 = (int64_t)plVar11;
                            plVar28 = plStack_320;
                          }
                          else {
                            lVar27 = (int64_t)plVar28 - (int64_t)plStack_418;
                            lVar22 = lVar27 >> 3;
                            if (lVar22 == 0) {
                              lVar22 = 1;
LAB_18036813f:
                              plVar11 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar22 * 8);
                            }
                            else {
                              lVar22 = lVar22 * 2;
                              if (lVar22 != 0) goto LAB_18036813f;
                              plVar11 = (int64_t *)0x0;
                            }
                            if (plVar13 != plVar28) {
// WARNING: Subroutine does not return
                              memmove(plVar11,plVar13,lVar27);
                            }
                            *plVar11 = (int64_t)plStack_420;
                            plVar28 = plVar11 + 1;
                            if (plVar13 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
                              CoreEngineMemoryPoolCleaner(plVar13);
                            }
                            plStack_338 = plVar11 + lVar22;
                            puVar17 = plocal_var_458;
                            plStack_418 = plVar11;
                            plStack_328 = plVar11;
                            plStack_320 = plVar28;
                            plStack_318 = plStack_338;
                          }
                          ppppppuVar23 = pppppplocal_var_3f8;
                          if (plVar20 != (int64_t *)0x0) {
                            (**(code **)(*plVar20 + 0x38))(plVar20);
                            ppppppuVar23 = pppppplocal_var_3f8;
                          }
                        }
                      }
                      else {
                        cVar8 = RenderingSystem_66900(plVar11);
                        if ((cVar8 != '\0') && ((uint64_t *)plVar11[0x2d] != puVar17)) {
                          DataStructure_e8a50(puVar17,plVar11,1,0);
                        }
                      }
                    }
                    iStack_410 = iStack_410 + 1;
                    pppppplocal_var_3f8 = (uint64_t ******)((int64_t)ppppppuVar23 + 1);
                    plVar11 = plStack_418;
                    puVar10 = plocal_var_300;
                    uVar36 = local_var_464;
                  } while ((uint64_t)(int64_t)iStack_410 <
                           (uint64_t)(lStack_3b0 - lStack_3b8 >> 3));
                }
                lVar22 = lStack_400;
                iVar30 = (int)((int64_t)plVar28 - (int64_t)plVar11 >> 3) + -1;
                lVar27 = (int64_t)iVar30;
                if (-1 < iVar30) {
                  do {
                    local_var_478 = 0x2a;
                    CoreEngine_198980(*(uint64_t *)(lVar22 + 0xa0),plVar11[lVar27]);
                    lVar27 = lVar27 + -1;
                    uVar36 = local_var_464;
                  } while (-1 < lVar27);
                }
                lVar22 = *plStack_3e0;
                plVar28 = plStack_3e0;
                if (lVar22 == 0) {
                  plVar28 = plStack_3e0 + 1;
                  lVar22 = *plVar28;
                  while (lVar22 == 0) {
                    plVar28 = plVar28 + 1;
                    lVar22 = *plVar28;
                  }
                  lVar22 = *plVar28;
                }
                if (lVar22 != plStack_3e0[local_var_3d8]) {
                  do {
                    (**(code **)(**(int64_t **)(lVar22 + 0x10) + 0x160))();
                    lVar22 = *(int64_t *)(lVar22 + 0x18);
                    while (lVar22 == 0) {
                      plVar28 = plVar28 + 1;
                      lVar22 = *plVar28;
                    }
                  } while (lVar22 != plStack_3e0[local_var_3d8]);
                }
                NetworkSystem_SecurityManager(puVar17);
                if (plocal_var_438 < plocal_var_430) {
                  *plocal_var_438 = puVar17;
                  plVar28 = plVar11;
                  puVar17 = plocal_var_438;
                }
                else {
                  lVar22 = (int64_t)plocal_var_438 - (int64_t)plocal_var_440 >> 3;
                  if (lVar22 == 0) {
                    lVar22 = 1;
LAB_180368378:
                    puVar17 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr);
                  }
                  else {
                    lVar22 = lVar22 * 2;
                    if (lVar22 != 0) goto LAB_180368378;
                    puVar17 = (uint64_t *)0x0;
                  }
                  if (plocal_var_440 != plocal_var_438) {
// WARNING: Subroutine does not return
                    memmove(puVar17,plocal_var_440,(int64_t)plocal_var_438 - (int64_t)plocal_var_440);
                  }
                  *puVar17 = plocal_var_458;
                  if (plocal_var_440 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
                    CoreEngineMemoryPoolCleaner();
                  }
                  plocal_var_430 = puVar17 + lVar22;
                  plVar28 = plStack_418;
                  plocal_var_440 = puVar17;
                }
                plocal_var_438 = puVar17 + 1;
                iVar30 = 0;
                if ((int64_t)plocal_var_438 - (int64_t)plocal_var_440 >> 3 != 0) {
                  lVar22 = 0;
                  do {
                    lVar27 = *(int64_t *)((int64_t)plocal_var_440 + lVar22);
                    psVar1 = (short *)(lVar27 + 0x2b0);
                    *psVar1 = *psVar1 + 1;
                    if (*(int64_t *)(lVar27 + 0x168) != 0) {
                      Function_bcb0dca9();
                    }
                    iVar30 = iVar30 + 1;
                    lVar22 = lVar22 + 8;
                  } while ((uint64_t)(int64_t)iVar30 <
                           (uint64_t)((int64_t)plocal_var_438 - (int64_t)plocal_var_440 >> 3));
                }
                iVar30 = 0;
                if ((int64_t)plocal_var_438 - (int64_t)plocal_var_440 >> 3 != 0) {
                  lVar22 = 0;
                  do {
                    DataStructure_e7dc0(*(uint64_t *)((int64_t)plocal_var_440 + lVar22));
                    iVar30 = iVar30 + 1;
                    lVar22 = lVar22 + 8;
                  } while ((uint64_t)(int64_t)iVar30 <
                           (uint64_t)((int64_t)plocal_var_438 - (int64_t)plocal_var_440 >> 3));
                }
                plocal_var_438 = plocal_var_440;
                plStack_320 = plVar28;
                RenderingSystem_68c20(stack_array_3e8);
                plVar11 = plVar28;
              }
              puVar12 = plocal_var_450 + 1;
              plocal_var_450 = puVar12;
            } while (puVar12 != puVar10);
            plocal_var_450 = plocal_var_308;
            puVar17 = plocal_var_2f8;
            puVar12 = plocal_var_308;
            plStack_408 = plVar28;
          }
          ppppppplocal_var_330 = (uint64_t *******)Function_7bfb2422(ppppppplocal_var_330);
          puVar10 = plocal_var_450;
        } while ((uint64_t ********)ppppppplocal_var_330 != &ppppppplocal_var_370);
      }
      if (plocal_var_440 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      if (plVar11 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(plVar11);
      }
      if (lStack_3b8 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      if (puVar10 == (uint64_t *)0x0) {
        UtilitiesSystem_Processor(&ppppppplocal_var_370);
        DataTransformer0(&plocal_var_268);
// WARNING: Subroutine does not return
        SystemSecurityChecker(local_var_78 ^ (uint64_t)stack_array_498);
      }
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar10);
    }
    ppppppuVar23 = (uint64_t ******)*puVar29;
    pppppplocal_var_1a0 = ppppppuVar23;
    if (ppppppuVar23 != (uint64_t ******)0x0) {
      (*(code *)(*ppppppuVar23)[5])(ppppppuVar23);
    }
    if (0x15 < *(uint *)(ppppppuVar23 + 0x53)) {
      lVar22 = 0;
      do {
        if ((&processed_var_9600_ptr + lVar22)[(int64_t)(ppppppuVar23[0x52] + -0x301440e4)] !=
            (&processed_var_9600_ptr)[lVar22]) goto LAB_180366fc4;
        lVar22 = lVar22 + 1;
      } while (lVar22 < 0x16);
      pppppplocal_var_198 = ppppppuVar23;
      bVar39 = true;
      pppppppuVar5 = &ppppppplocal_var_370;
      pppppppuVar9 = ppppppplocal_var_360;
      while (pppppppuVar9 != (uint64_t *******)0x0) {
        bVar39 = ppppppuVar23 < pppppppuVar9[4];
        pppppppuVar5 = pppppppuVar9;
        if (bVar39) {
          pppppppuVar9 = (uint64_t *******)pppppppuVar9[1];
        }
        else {
          pppppppuVar9 = (uint64_t *******)*pppppppuVar9;
        }
      }
      pppppppuVar9 = pppppppuVar5;
      if (bVar39) {
        if (pppppppuVar5 == ppppppplocal_var_368) goto LAB_180366f7d;
        pppppppuVar9 = (uint64_t *******)Function_e2d50782(pppppppuVar5);
      }
      if (pppppppuVar9[4] < ppppppuVar23) {
LAB_180366f7d:
        lVar22 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x28,(int8_t)local_var_348);
        *(uint64_t *******)(lVar22 + 0x20) = ppppppuVar23;
        if (((uint64_t ********)pppppppuVar5 == &ppppppplocal_var_370) ||
           (ppppppuVar23 < pppppppuVar5[4])) {
          uVar31 = 0;
        }
        else {
          uVar31 = 1;
        }
// WARNING: Subroutine does not return
        SystemStateController(lVar22,pppppppuVar5,&ppppppplocal_var_370,uVar31);
      }
    }
LAB_180366fc4:
    if (ppppppuVar23 != (uint64_t ******)0x0) {
      (*(code *)(*ppppppuVar23)[7])(ppppppuVar23);
    }
    puVar29 = puVar29 + 1;
  } while( true );
}