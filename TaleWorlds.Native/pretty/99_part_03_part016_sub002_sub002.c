#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part016_sub002_sub002.c - 1 个函数

// 函数: void FUN_1801da210(uint64_t param_1,int64_t *param_2,char param_3)
void FUN_1801da210(uint64_t param_1,int64_t *param_2,char param_3)

{
  uint uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  bool bVar5;
  int64_t *plVar6;
  uint64_t *puVar7;
  int iVar8;
  int64_t lVar9;
  int32_t *puVar10;
  int32_t *puVar11;
  int32_t *puVar12;
  uint64_t uVar13;
  int8_t *puVar14;
  uint64_t *puVar15;
  uint64_t *****pppppuVar16;
  uint64_t uVar17;
  int8_t *puVar18;
  int8_t *puVar19;
  uint uVar20;
  int64_t *plVar21;
  int64_t *plVar22;
  int64_t lVar23;
  int iVar24;
  uint64_t uVar25;
  int iVar26;
  int8_t *puVar27;
  char cVar28;
  int64_t *plVar29;
  int64_t lVar30;
  int64_t lVar31;
  uint64_t uVar32;
  int8_t *puVar33;
  int64_t lVar34;
  uint64_t *puVar35;
  int64_t lVar36;
  int8_t auStack_3a8 [32];
  uint64_t *puStack_388;
  int64_t **pplStack_380;
  uint uStack_378;
  byte bStack_374;
  char cStack_373;
  int32_t *puStack_370;
  int iStack_368;
  uint uStack_364;
  int32_t *puStack_360;
  int32_t *puStack_358;
  int32_t *puStack_350;
  int32_t uStack_348;
  int64_t lStack_340;
  int64_t lStack_338;
  int64_t lStack_330;
  int32_t uStack_328;
  int64_t *plStack_320;
  int64_t lStack_318;
  int64_t lStack_310;
  int64_t lStack_308;
  int32_t uStack_300;
  uint64_t *puStack_2f8;
  uint64_t *puStack_2f0;
  uint64_t *puStack_2e8;
  int32_t uStack_2e0;
  int iStack_2d8;
  int iStack_2d4;
  int64_t *plStack_2d0;
  int64_t *plStack_2c8;
  int64_t **pplStack_2c0;
  int8_t *puStack_2b8;
  int8_t *puStack_2b0;
  int8_t *puStack_2a8;
  int32_t uStack_2a0;
  uint64_t ****ppppuStack_298;
  uint64_t ****ppppuStack_290;
  uint64_t uStack_288;
  uint64_t uStack_280;
  uint64_t uStack_278;
  int32_t uStack_270;
  int64_t lStack_268;
  int64_t *plStack_260;
  int64_t lStack_258;
  int64_t *plStack_250;
  int64_t lStack_248;
  int64_t lStack_240;
  uint64_t uStack_238;
  int32_t uStack_230;
  int64_t *plStack_228;
  int64_t *plStack_220;
  int64_t *plStack_208;
  int64_t *plStack_200;
  uint64_t uStack_1f8;
  int32_t uStack_1f0;
  int32_t uStack_1ec;
  int64_t *plStack_1e8;
  int32_t uStack_1e0;
  int32_t uStack_1dc;
  uint64_t uStack_1d8;
  void *puStack_1d0;
  uint64_t uStack_1c8;
  uint64_t *puStack_1c0;
  int64_t lStack_1b8;
  uint64_t uStack_1b0;
  int32_t uStack_1a8;
  int64_t *plStack_1a0;
  uint64_t uStack_198;
  uint64_t uStack_190;
  uint64_t uStack_188;
  int32_t uStack_180;
  int64_t *plStack_178;
  int64_t *plStack_170;
  uint64_t uStack_168;
  uint64_t uStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  uint64_t uStack_140;
  uint64_t uStack_138;
  int32_t uStack_130;
  int64_t *plStack_128;
  uint64_t uStack_120;
  int64_t *plStack_118;
  int8_t auStack_110 [24];
  void *puStack_f8;
  int8_t *puStack_f0;
  int32_t uStack_e8;
  int8_t auStack_e0 [72];
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [72];
  uint64_t uStack_38;
  
  uStack_120 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_3a8;
  uStack_378 = 0;
  puStack_2f8 = (uint64_t *)0x0;
  puStack_2f0 = (uint64_t *)0x0;
  puStack_2e8 = (uint64_t *)0x0;
  uStack_2e0 = 3;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_180 = 3;
  lVar31 = system_system_data_memory + 0x20;
  plStack_200 = param_2;
  cStack_373 = param_3;
  for (lVar9 = *(int64_t *)(system_system_data_memory + 0x28); lVar9 != lVar31;
      lVar9 = func_0x00018066bd70(lVar9)) {
    if (puStack_2f0 < puStack_2e8) {
      puVar15 = puStack_2f0;
      puStack_2f0 = puStack_2f0 + 4;
      CoreEngineDataTransformer(puVar15,lVar9 + 0x20);
    }
    else {
      lVar30 = (int64_t)puStack_2f0 - (int64_t)puStack_2f8 >> 5;
      if (lVar30 == 0) {
        lVar30 = 1;
LAB_1801da300:
        puVar15 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar30 << 5,(int8_t)uStack_2e0);
      }
      else {
        lVar30 = lVar30 * 2;
        if (lVar30 != 0) goto LAB_1801da300;
        puVar15 = (uint64_t *)0x0;
      }
      lVar36 = FUN_180059780(puStack_2f8,puStack_2f0,puVar15);
      CoreEngineDataTransformer(lVar36,lVar9 + 0x20);
      puVar7 = puStack_2f0;
      for (puVar35 = puStack_2f8; puVar35 != puVar7; puVar35 = puVar35 + 4) {
        (**(code **)*puVar35)(puVar35,0);
      }
      if (puStack_2f8 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(puStack_2f8);
      }
      puStack_2e8 = puVar15 + lVar30 * 4;
      puStack_2f8 = puVar15;
      puStack_2f0 = (uint64_t *)(lVar36 + 0x20);
    }
  }
  iVar26 = 0;
  if ((int64_t)puStack_2f0 - (int64_t)puStack_2f8 >> 5 != 0) {
    uVar17 = 0;
    do {
      FUN_1800c1520(system_system_data_memory,&plStack_320,puStack_2f8 + uVar17 * 4);
      FUN_1802b5c40(plStack_320,&uStack_198);
      if (plStack_320 != (int64_t *)0x0) {
        (**(code **)(*plStack_320 + 0x38))();
      }
      iVar26 = iVar26 + 1;
      uVar17 = (uint64_t)iVar26;
    } while (uVar17 < (uint64_t)((int64_t)puStack_2f0 - (int64_t)puStack_2f8 >> 5));
  }
  puStack_1c0 = (uint64_t *)0x0;
  lStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 3;
  FUN_18020c8f0(system_system_data_memory);
  puVar15 = puStack_1c0;
  iVar26 = 0;
  plVar29 = (int64_t *)(lStack_1b8 - (int64_t)puStack_1c0 >> 3);
  puVar35 = puStack_1c0;
  plStack_2c8 = plVar29;
  if (plVar29 != (int64_t *)0x0) {
    do {
      FUN_1802f1cd0(*puVar35,&plStack_228);
      iVar24 = 0;
      plVar22 = plStack_228;
      plVar6 = plStack_220;
      if ((int64_t)plStack_220 - (int64_t)plStack_228 >> 3 != 0) {
        lVar9 = 0;
        plVar21 = plStack_228;
        uVar20 = uStack_378;
        do {
          plVar29 = *(int64_t **)(lVar9 + (int64_t)plVar21);
          if ((plVar29 != (int64_t *)0x0) &&
             (iVar8 = (**(code **)(*plVar29 + 0x98))(plVar29), plVar21 = plStack_228, iVar8 == 4)) {
            plVar29 = (int64_t *)plVar29[9];
            plStack_250 = plVar29;
            if (plVar29 != (int64_t *)0x0) {
              (**(code **)(*plVar29 + 0x28))(plVar29);
            }
            uStack_378 = uVar20 | 1;
            FUN_1802b5c40(plVar29,&uStack_198);
            uVar20 = uVar20 & 0xfffffffe;
            plVar21 = plStack_228;
            uStack_378 = uVar20;
            if (plVar29 != (int64_t *)0x0) {
              (**(code **)(*plVar29 + 0x38))(plVar29);
              plVar21 = plStack_228;
            }
          }
          iVar24 = iVar24 + 1;
          lVar9 = lVar9 + 8;
          plVar22 = plStack_228;
          plVar6 = plStack_220;
          plVar29 = plStack_2c8;
        } while ((uint64_t)(int64_t)iVar24 <
                 (uint64_t)((int64_t)plStack_220 - (int64_t)plVar21 >> 3));
      }
      for (; plVar21 = plStack_220, plVar22 != plStack_220; plVar22 = plVar22 + 1) {
        plStack_220 = plVar6;
        if ((int64_t *)*plVar22 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar22 + 0x38))();
        }
        plVar6 = plStack_220;
        plStack_220 = plVar21;
      }
      if (plStack_228 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      iVar26 = iVar26 + 1;
      puVar35 = puVar35 + 1;
      plStack_220 = plVar6;
    } while ((int64_t *)(int64_t)iVar26 < plVar29);
  }
  uStack_364 = 0;
  if (cStack_373 != '\0') {
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x700) == 2) {
      uStack_364 = 0x400;
    }
    else {
      uStack_364 = 0;
      if (*(int *)(SYSTEM_STATE_MANAGER + 0x700) == 0) {
        uStack_364 = 0x200;
      }
    }
  }
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 3;
  uStack_270 = 3;
  ppppuStack_298 = &ppppuStack_298;
  ppppuStack_290 = &ppppuStack_298;
  uStack_288 = 0;
  uStack_280 = 0;
  uStack_278 = 0;
  iStack_2d4 = 0;
  if ((int64_t)puStack_2f0 - (int64_t)puStack_2f8 >> 5 != 0) {
    uVar17 = 0;
    cVar28 = cStack_373;
    do {
      iVar26 = iStack_2d4;
      FUN_1800c1520(system_system_data_memory,&plStack_2c8,puStack_2f8 + uVar17 * 4);
      lStack_248 = 0;
      lStack_240 = 0;
      uStack_238 = 0;
      uStack_230 = 3;
      FUN_1802b5c40(plStack_2c8,&lStack_248);
      iStack_2d8 = 0;
      lStack_258 = 0;
      if (lStack_240 - lStack_248 >> 3 != 0) {
        do {
          lVar9 = lStack_258;
          uVar17 = 0;
          plVar29 = *(int64_t **)(lStack_248 + lStack_258 * 8);
          plStack_250 = plVar29;
          if (plVar29 != (int64_t *)0x0) {
            (**(code **)(*plVar29 + 0x28))(plVar29);
          }
          uVar13 = system_resource_state;
          lVar31 = system_system_data_memory;
          plVar22 = (int64_t *)plVar29[2];
          uVar20 = uStack_378;
          plStack_260 = plVar22;
          if (plVar22 == (int64_t *)0x0) {
            if (*(int64_t *)(system_system_data_memory + 0x278) == 0) {
              puStack_f8 = &unknown_var_3480_ptr;
              puStack_f0 = auStack_e0;
              auStack_e0[0] = 0;
              uStack_e8 = 0x10;
              strcpy_s(auStack_e0,0x40,&unknown_var_9184_ptr);
              FUN_1800b30d0(uVar13,&plStack_320,&puStack_f8,1);
              plVar22 = plStack_320;
              uVar20 = uStack_378;
              uStack_378 = uStack_378 & 0xfffffff7 | 4;
              puStack_f8 = &system_state_ptr;
              plStack_320 = (int64_t *)0x0;
              plStack_208 = *(int64_t **)(lVar31 + 0x278);
              *(int64_t **)(lVar31 + 0x278) = plVar22;
              if (plStack_208 != (int64_t *)0x0) {
                (**(code **)(*plStack_208 + 0x38))();
              }
              uVar20 = uVar20 & 0xfffffff3;
              uStack_378 = uVar20;
              if (plStack_320 != (int64_t *)0x0) {
                (**(code **)(*plStack_320 + 0x38))();
              }
            }
            plVar22 = *(int64_t **)(lVar31 + 0x278);
            plStack_260 = plVar22;
            plStack_118 = plVar22;
            if (plVar22 != (int64_t *)0x0) {
              (**(code **)(*plVar22 + 0x28))(plVar22);
            }
            uVar20 = uVar20 & 0xfffffffd;
            uStack_378 = uVar20;
            if (plVar22 != (int64_t *)0x0) {
              (**(code **)(*plVar22 + 0x38))(plVar22);
            }
          }
          plStack_2d0 = (int64_t *)plVar22[0x3c];
          bVar5 = false;
          if ((plStack_2d0 != (int64_t *)0x0) && ((int)plStack_2d0[4] == 0x10)) {
            iVar26 = strcmp(plStack_2d0[3],&system_data_3870);
            bVar5 = false;
            if (iVar26 == 0) {
              bVar5 = true;
            }
          }
          if (bVar5) {
            uVar25 = plVar22[0x28];
            plVar29 = *(int64_t **)(lStack_248 + lVar9 * 8);
            plStack_1a0 = plVar29;
            if (plVar29 != (int64_t *)0x0) {
              (**(code **)(*plVar29 + 0x28))(plVar29);
            }
            if (plVar22[0x3c] == *(int64_t *)(system_system_data_memory + 0x160)) {
              uVar1 = *(uint *)(plVar29 + 0xd);
              if ((uVar1 >> 0x1a & 1) != 0) {
                uVar17 = *(uint64_t *)(system_system_data_memory + 0x110);
              }
              if ((uVar1 >> 0x17 & 1) != 0) {
                uVar17 = uVar17 | *(uint64_t *)(system_system_data_memory + 0xf0);
              }
              if ((uVar1 >> 0x16 & 1) != 0) {
                uVar17 = uVar17 | *(uint64_t *)(system_system_data_memory + 0xe8);
              }
              uVar25 = *(uint64_t *)(system_system_data_memory + 0xd8) | plVar22[0x28] | uVar17;
              if ((*(byte *)((int64_t)plVar29 + 0x21) & 1) != 0) {
                uVar25 = uVar25 | *(uint64_t *)(system_system_data_memory + 0xe0);
              }
            }
            plVar29 = (int64_t *)plVar29[3];
            plStack_128 = plVar29;
            if (plVar29 != (int64_t *)0x0) {
              (**(code **)(*plVar29 + 0x28))(plVar29);
            }
            uStack_378 = uVar20 & 0xffffffef;
            if (plVar29 == (int64_t *)0x0) {
              bStack_374 = 9;
            }
            else {
              (**(code **)(*plVar29 + 0x38))(plVar29);
              bStack_374 = *(byte *)((int64_t)plVar22 + 0x38c);
              if (bStack_374 == 9) {
                uVar20 = *(uint *)(plVar22 + 0x71);
                if ((uVar20 >> 0x1e & 1) == 0) {
                  if ((uVar20 >> 0x1c & 1) == 0) {
                    bStack_374 = (byte)(uVar20 >> 0x18);
                    if ((int)uVar20 < 0) {
                      if ((uVar20 >> 0x1b & 1) == 0) {
                        bStack_374 = bStack_374 & 1 | 0xc;
                        *(byte *)((int64_t)plVar22 + 0x38c) = bStack_374;
                      }
                      else {
                        bStack_374 = bStack_374 & 1 | 0xe;
                        *(byte *)((int64_t)plVar22 + 0x38c) = bStack_374;
                      }
                    }
                    else if ((uVar20 >> 0x19 & 1) == 0) {
                      bStack_374 = bStack_374 & 1;
                      *(byte *)((int64_t)plVar22 + 0x38c) = bStack_374;
                    }
                    else if ((uVar20 >> 0x1b & 1) == 0) {
                      bStack_374 = bStack_374 & 1 | 2;
                      *(byte *)((int64_t)plVar22 + 0x38c) = bStack_374;
                    }
                    else {
                      bStack_374 = ((uVar20 >> 0x18 & 1) != 0) + 7;
                      *(byte *)((int64_t)plVar22 + 0x38c) = bStack_374;
                    }
                  }
                  else {
                    bStack_374 = 4;
                    *(int8_t *)((int64_t)plVar22 + 0x38c) = 4;
                  }
                }
                else {
                  bStack_374 = 9;
                  *(int8_t *)((int64_t)plVar22 + 0x38c) = 9;
                }
              }
            }
            uVar17 = FUN_180241250(plStack_2d0);
            pplStack_2c0 = (int64_t **)(uVar25 & ~uVar17);
            puStack_98 = &unknown_var_3480_ptr;
            puStack_90 = auStack_80;
            auStack_80[0] = 0;
            uStack_88 = 0x15;
            strcpy_s(auStack_80,0x40,&system_data_e020);
            FUN_180240430(plStack_2d0,&puStack_98,0);
            puStack_98 = &system_state_ptr;
            puStack_360 = (int32_t *)0x0;
            puStack_358 = (int32_t *)0x0;
            puStack_350 = (int32_t *)0x0;
            uStack_348 = 3;
            if (cVar28 == '\0') {
              puVar10 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,4,3);
              *puVar10 = 0x200;
              puVar12 = puVar10 + 1;
              puStack_360 = puVar10;
              puStack_358 = puVar12;
              puStack_350 = puVar12;
              puStack_370 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,8,3);
              if (puVar10 != puVar12) {
                    // WARNING: Subroutine does not return
                memmove(puStack_370,puVar10,4);
              }
              *puStack_370 = 0x400;
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner(puVar10);
            }
            puStack_370 = (int32_t *)0x0;
            puVar12 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,4,3);
            if (puStack_370 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
              memmove(puVar12,puStack_370,0);
            }
            *puVar12 = 0x2000;
            puVar10 = puVar12 + 1;
            puStack_350 = puVar12 + 1;
            lVar9 = (int64_t)puVar10 - (int64_t)puVar12 >> 2;
            puStack_370 = puVar12;
            puStack_360 = puVar12;
            puStack_358 = puVar10;
            if (lVar9 == 0) {
              lVar9 = 1;
LAB_1801dac03:
              puVar11 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar9 * 4,3);
            }
            else {
              lVar9 = lVar9 * 2;
              if (lVar9 != 0) goto LAB_1801dac03;
              puVar11 = (int32_t *)0x0;
            }
            if (puStack_370 != puVar10) {
                    // WARNING: Subroutine does not return
              memmove(puVar11,puStack_370,(int64_t)puVar10 - (int64_t)puVar12);
            }
            *puVar11 = 0x20;
            puVar12 = puVar11 + 1;
            if (puStack_370 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner(puStack_370);
            }
            puStack_350 = puVar11 + lVar9;
            puStack_360 = puVar11;
            if (puVar12 < puStack_350) {
              *puVar12 = 0x10;
              puVar10 = puVar12;
            }
            else {
              lVar9 = (int64_t)puVar12 - (int64_t)puVar11 >> 2;
              puStack_370 = puVar11;
              puStack_358 = puVar12;
              if (lVar9 == 0) {
                lVar9 = 1;
LAB_1801dacb5:
                puVar10 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar9 * 4,3);
              }
              else {
                lVar9 = lVar9 * 2;
                if (lVar9 != 0) goto LAB_1801dacb5;
                puVar10 = (int32_t *)0x0;
              }
              if (puStack_370 != puVar12) {
                    // WARNING: Subroutine does not return
                memmove(puVar10,puStack_370,(int64_t)puVar12 - (int64_t)puVar11);
              }
              *puVar10 = 0x10;
              if (puStack_370 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner(puStack_370);
              }
              puStack_350 = puVar10 + lVar9;
              puStack_360 = puVar10;
            }
            puVar12 = puVar10 + 1;
            if (puVar12 < puStack_350) {
              puVar10 = puVar10 + 2;
              *puVar12 = 0x200000;
            }
            else {
              lVar31 = (int64_t)puVar12 - (int64_t)puStack_360;
              lVar9 = lVar31 >> 2;
              puStack_370 = puStack_360;
              puStack_358 = puVar12;
              if (lVar9 == 0) {
                lVar9 = 1;
LAB_1801dad68:
                puVar11 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar9 * 4,3);
              }
              else {
                lVar9 = lVar9 * 2;
                if (lVar9 != 0) goto LAB_1801dad68;
                puVar11 = (int32_t *)0x0;
              }
              if (puStack_370 != puVar12) {
                    // WARNING: Subroutine does not return
                memmove(puVar11,puStack_370,lVar31);
              }
              *puVar11 = 0x200000;
              puVar10 = puVar11 + 1;
              if (puStack_370 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner(puStack_370);
              }
              puStack_350 = puVar11 + lVar9;
              puStack_360 = puVar11;
            }
            if (puVar10 < puStack_350) {
              *puVar10 = 0x80000000;
              puVar12 = puVar10;
            }
            else {
              lVar31 = (int64_t)puVar10 - (int64_t)puStack_360;
              lVar9 = lVar31 >> 2;
              puStack_370 = puStack_360;
              puStack_358 = puVar10;
              if (lVar9 == 0) {
                lVar9 = 1;
LAB_1801dae19:
                puVar12 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar9 * 4,3);
              }
              else {
                lVar9 = lVar9 * 2;
                if (lVar9 != 0) goto LAB_1801dae19;
                puVar12 = (int32_t *)0x0;
              }
              if (puStack_370 != puVar10) {
                    // WARNING: Subroutine does not return
                memmove(puVar12,puStack_370,lVar31);
              }
              *puVar12 = 0x80000000;
              if (puStack_370 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner(puStack_370);
              }
              puStack_350 = puVar12 + lVar9;
              puStack_360 = puVar12;
            }
            puStack_358 = puVar12 + 1;
            uVar20 = uStack_364 | 0x8000;
            if (plVar29 == (int64_t *)0x0) {
              uVar20 = uStack_364;
            }
            if (plVar22[0x19] != 0) {
              uVar1 = *(uint *)(plVar22[0x19] + 0x328);
              if ((uVar1 >> 0x1e & 1) == 0) {
                if ((int)uVar1 < 0) {
                  uVar20 = uVar20 | 0x40000;
                }
              }
              else {
                uVar20 = uVar20 | 0x10000;
              }
            }
            lStack_340 = 0;
            lStack_338 = 0;
            lStack_330 = 0;
            uStack_328 = 3;
            puStack_388 = (uint64_t *)plVar22[0x3c];
            puStack_370 = puStack_360;
            FUN_1801d7910(0,uVar20,&lStack_340,&puStack_360);
            uVar17 = lStack_338 - lStack_340 >> 2;
            if (uVar17 != 0) {
              lStack_268 = 0;
              iStack_368 = 1;
              lVar9 = lStack_338;
              do {
                uStack_1c8 = (uint64_t)iStack_368;
                lVar31 = lStack_268;
                iVar26 = iStack_368;
                if (uStack_1c8 < uVar17) {
                  do {
                    lVar30 = lVar31 + 4;
                    if (*(int *)(lStack_340 + lStack_268) == *(int *)(lStack_340 + lVar30)) {
                      *(int32_t *)(lStack_340 + lVar30) =
                           *(int32_t *)(lStack_340 + -4 + uVar17 * 4);
                      uVar25 = lStack_338 - lStack_340 >> 2;
                      uVar17 = uVar25 - 1;
                      if (uVar25 < uVar17) {
                        if (0xfffffffffffffffe < (uint64_t)(lStack_330 - lStack_338 >> 2)) {
                    // WARNING: Subroutine does not return
                          memset(lStack_338,0,0xfffffffffffffffc);
                        }
                        uVar32 = uVar25 * 2;
                        if (uVar25 == 0) {
                          uVar32 = 1;
                        }
                        if (uVar32 < uVar17) {
                          uVar32 = uVar17;
                        }
                        if (uVar32 == 0) {
                          uVar13 = 0;
                        }
                        else {
                          uVar13 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar32 * 4,(int8_t)uStack_328);
                        }
                        if (lStack_340 == lStack_338) {
                    // WARNING: Subroutine does not return
                          memset(uVar13,0,0xfffffffffffffffc);
                        }
                    // WARNING: Subroutine does not return
                        memmove(uVar13,lStack_340,lStack_338 - lStack_340);
                      }
                      lVar9 = lStack_340 + uVar17 * 4;
                      iVar26 = iVar26 + -1;
                      lVar30 = lVar31;
                      lStack_338 = lVar9;
                    }
                    iVar26 = iVar26 + 1;
                    uVar17 = lVar9 - lStack_340 >> 2;
                    lVar31 = lVar30;
                  } while ((uint64_t)(int64_t)iVar26 < uVar17);
                }
                iStack_368 = iStack_368 + 1;
                lStack_268 = lStack_268 + 4;
                uVar17 = lVar9 - lStack_340 >> 2;
                plVar22 = plStack_260;
              } while (uStack_1c8 < uVar17);
            }
            lStack_318 = 0;
            lStack_310 = 0;
            lStack_308 = 0;
            uStack_300 = 3;
            pplStack_380 = (int64_t **)CONCAT71(pplStack_380._1_7_,1);
            puStack_388 = &uStack_148;
            FUN_1801d7c90(0,plVar22,pplStack_2c0,&lStack_318);
            uVar17 = lStack_310 - lStack_318 >> 3;
            if (uVar17 != 0) {
              lVar31 = 0;
              iStack_368 = 1;
              lVar9 = lStack_310;
              do {
                pplStack_2c0 = (int64_t **)(int64_t)iStack_368;
                iVar26 = iStack_368;
                lVar30 = lVar31;
                if (pplStack_2c0 < uVar17) {
                  do {
                    lVar36 = lVar30 + 8;
                    if (*(int64_t *)(lStack_318 + lVar31) == *(int64_t *)(lVar36 + lStack_318)) {
                      *(uint64_t *)(lVar36 + lStack_318) =
                           *(uint64_t *)(lStack_318 + -8 + uVar17 * 8);
                      uVar25 = lStack_310 - lStack_318 >> 3;
                      uVar17 = uVar25 - 1;
                      if (uVar25 < uVar17) {
                        if (lStack_308 - lStack_310 >> 3 == -1) {
                    // WARNING: Subroutine does not return
                          memset(lStack_310,0,0xfffffffffffffff8);
                        }
                        uVar32 = uVar25 * 2;
                        if (uVar25 == 0) {
                          uVar32 = 1;
                        }
                        if (uVar32 < uVar17) {
                          uVar32 = uVar17;
                        }
                        if (uVar32 == 0) {
                          uVar13 = 0;
                        }
                        else {
                          uVar13 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar32 * 8,(int8_t)uStack_300);
                        }
                        if (lStack_318 == lStack_310) {
                    // WARNING: Subroutine does not return
                          memset(uVar13,0,0xfffffffffffffff8);
                        }
                    // WARNING: Subroutine does not return
                        memmove(uVar13,lStack_318,lStack_310 - lStack_318);
                      }
                      lVar9 = lStack_318 + uVar17 * 8;
                      iVar26 = iVar26 + -1;
                      lVar36 = lVar30;
                      lStack_310 = lVar9;
                    }
                    iVar26 = iVar26 + 1;
                    uVar17 = lVar9 - lStack_318 >> 3;
                    lVar30 = lVar36;
                  } while ((uint64_t)(int64_t)iVar26 < uVar17);
                }
                iStack_368 = iStack_368 + 1;
                lVar31 = lVar31 + 8;
                uVar17 = lVar9 - lStack_318 >> 3;
              } while (pplStack_2c0 < uVar17);
            }
            puStack_2b8 = (int8_t *)0x0;
            puStack_2b0 = (int8_t *)0x0;
            puStack_2a8 = (int8_t *)0x0;
            uStack_2a0 = 3;
            puVar18 = (int8_t *)
                      ((lStack_310 - lStack_318 >> 3) * (lStack_338 - lStack_340 >> 2));
            if ((puVar18 != (int8_t *)0x0) && (puVar18 != (int8_t *)0x0)) {
              puVar33 = (int8_t *)0x1;
              if ((int8_t *)0x1 < puVar18) {
                puVar33 = puVar18;
              }
              if (puVar33 == (int8_t *)0x0) {
                puVar14 = (int8_t *)0x0;
              }
              else {
                puVar14 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,puVar33,3);
              }
              if (puStack_2b8 != puStack_2b0) {
                    // WARNING: Subroutine does not return
                memmove(puVar14,puStack_2b8,(int64_t)puStack_2b0 - (int64_t)puStack_2b8);
              }
              puVar19 = puVar18;
              puVar27 = puVar14;
              if (puVar18 != (int8_t *)0x0) {
                for (; puVar19 != (int8_t *)0x0; puVar19 = puVar19 + -1) {
                  *puVar27 = 0;
                  puVar27 = puVar27 + 1;
                }
              }
              if (puStack_2b8 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner(puStack_2b8);
              }
              puStack_2a8 = puVar33 + (int64_t)puVar14;
              puStack_2b8 = puVar14;
              puVar18 = puVar14 + (int64_t)puVar18;
            }
            puStack_2b0 = puVar18;
            pplStack_2c0 = &plStack_1e8;
            plStack_178 = &lStack_318;
            plStack_170 = &lStack_340;
            uStack_168 = &bStack_374;
            uStack_160 = &puStack_2b8;
            uStack_158 = &ppppuStack_298;
            uStack_150 = &plStack_2d0;
            uStack_1d8 = FUN_1801eb0f0;
            puStack_1d0 = &unknown_var_2304_ptr;
            plStack_1e8 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,system_allocation_flags);
            *plStack_1e8 = (int64_t)plStack_178;
            plStack_1e8[1] = (int64_t)plStack_170;
            *(int32_t *)(plStack_1e8 + 2) = (int32_t)uStack_168;
            *(int32_t *)((int64_t)plStack_1e8 + 0x14) = uStack_168._4_4_;
            *(int32_t *)(plStack_1e8 + 3) = (int32_t)uStack_160;
            *(int32_t *)((int64_t)plStack_1e8 + 0x1c) = uStack_160._4_4_;
            *(int32_t *)(plStack_1e8 + 4) = (int32_t)uStack_158;
            *(int32_t *)((int64_t)plStack_1e8 + 0x24) = uStack_158._4_4_;
            *(int32_t *)(plStack_1e8 + 5) = (int32_t)uStack_150;
            *(int32_t *)((int64_t)plStack_1e8 + 0x2c) = uStack_150._4_4_;
            pplStack_380 = &plStack_1e8;
            puStack_388 = (uint64_t *)0xffffffffffffffff;
            FUN_18015b810(0xffffffffffffffff,0,lStack_338 - lStack_340 >> 2,0x10);
            iVar26 = 0;
            if (lStack_338 - lStack_340 >> 2 != 0) {
              lVar34 = 0;
              lVar9 = lStack_318;
              lVar31 = lStack_310;
              lVar30 = lStack_338;
              lVar36 = lStack_340;
              do {
                iVar24 = 0;
                uVar17 = lVar31 - lVar9 >> 3;
                if (uVar17 != 0) {
                  lVar23 = 0;
                  do {
                    if (puStack_2b8[(int)uVar17 * iVar26 + iVar24] != '\0') {
                      uVar13 = *(uint64_t *)(lVar9 + lVar23);
                      uStack_1f0 = *(int32_t *)(lVar36 + lVar34);
                      uStack_1ec = CONCAT22(uStack_1ec._2_2_,(ushort)bStack_374);
                      plStack_1e8 = plStack_2d0;
                      uStack_1f8._0_4_ = (int32_t)uVar13;
                      uStack_1f8._4_4_ = (int32_t)((uint64_t)uVar13 >> 0x20);
                      uStack_1e0 = (int32_t)uStack_1f8;
                      uStack_1dc = uStack_1f8._4_4_;
                      uStack_1d8 = (code *)CONCAT44(uStack_1ec,uStack_1f0);
                      uStack_1f8 = uVar13;
                      FUN_1801ea860(&ppppuStack_298,auStack_110,lVar31,&plStack_1e8);
                      lVar9 = lStack_318;
                      lVar31 = lStack_310;
                      lVar36 = lStack_340;
                    }
                    iVar24 = iVar24 + 1;
                    lVar23 = lVar23 + 8;
                    uVar17 = lVar31 - lVar9 >> 3;
                    lVar30 = lStack_338;
                  } while ((uint64_t)(int64_t)iVar24 < uVar17);
                }
                iVar26 = iVar26 + 1;
                lVar34 = lVar34 + 4;
              } while ((uint64_t)(int64_t)iVar26 < (uint64_t)(lVar30 - lVar36 >> 2));
            }
            if (puStack_2b8 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            if (lStack_318 != 0) {
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            if (lStack_340 != 0) {
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            if (puStack_370 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            (**(code **)(*plStack_1a0 + 0x38))();
            plVar29 = plStack_250;
            lVar9 = lStack_258;
            cVar28 = cStack_373;
          }
          (**(code **)(*plVar29 + 0x38))(plVar29);
          iStack_2d8 = iStack_2d8 + 1;
          lStack_258 = lVar9 + 1;
          iVar26 = iStack_2d4;
        } while ((uint64_t)(int64_t)iStack_2d8 < (uint64_t)(lStack_240 - lStack_248 >> 3));
      }
      FUN_180057830(&lStack_248);
      if (plStack_2c8 != (int64_t *)0x0) {
        (**(code **)(*plStack_2c8 + 0x38))();
      }
      iStack_2d4 = iVar26 + 1;
      uVar17 = (uint64_t)iStack_2d4;
      puVar15 = puStack_1c0;
    } while (uVar17 < (uint64_t)((int64_t)puStack_2f0 - (int64_t)puStack_2f8 >> 5));
  }
  plVar29 = plStack_200;
  pppppuVar16 = (uint64_t *****)ppppuStack_290;
  if ((uint64_t *****)ppppuStack_290 != &ppppuStack_298) {
    do {
      puVar15 = (uint64_t *)plVar29[1];
      if (puVar15 < (uint64_t *)plVar29[2]) {
        *puVar15 = pppppuVar16[4];
        uVar2 = *(int32_t *)((int64_t)pppppuVar16 + 0x2c);
        uVar3 = *(int32_t *)(pppppuVar16 + 6);
        uVar4 = *(int32_t *)((int64_t)pppppuVar16 + 0x34);
        *(int32_t *)(puVar15 + 1) = *(int32_t *)(pppppuVar16 + 5);
        *(int32_t *)((int64_t)puVar15 + 0xc) = uVar2;
        *(int32_t *)(puVar15 + 2) = uVar3;
        *(int32_t *)((int64_t)puVar15 + 0x14) = uVar4;
        plVar29[1] = plVar29[1] + 0x18;
      }
      else {
        lVar9 = *plVar29;
        lVar31 = ((int64_t)puVar15 - lVar9) / 0x18;
        if (lVar31 == 0) {
          lVar31 = 1;
LAB_1801db719:
          lVar30 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar31 * 0x18,(char)plVar29[3]);
          puVar15 = (uint64_t *)plVar29[1];
          lVar9 = *plVar29;
        }
        else {
          lVar31 = lVar31 * 2;
          if (lVar31 != 0) goto LAB_1801db719;
          lVar30 = 0;
        }
        puVar15 = (uint64_t *)FUN_180082a50(lVar9,puVar15,lVar30);
        *puVar15 = pppppuVar16[4];
        uVar2 = *(int32_t *)((int64_t)pppppuVar16 + 0x2c);
        uVar3 = *(int32_t *)(pppppuVar16 + 6);
        uVar4 = *(int32_t *)((int64_t)pppppuVar16 + 0x34);
        *(int32_t *)(puVar15 + 1) = *(int32_t *)(pppppuVar16 + 5);
        *(int32_t *)((int64_t)puVar15 + 0xc) = uVar2;
        *(int32_t *)(puVar15 + 2) = uVar3;
        *(int32_t *)((int64_t)puVar15 + 0x14) = uVar4;
        if (*plVar29 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *plVar29 = lVar30;
        plVar29[1] = (int64_t)(puVar15 + 3);
        plVar29[2] = lVar30 + lVar31 * 0x18;
      }
      pppppuVar16 = (uint64_t *****)func_0x00018066bd70(pppppuVar16);
      puVar15 = puStack_1c0;
    } while (pppppuVar16 != &ppppuStack_298);
  }
  FUN_18004b730(&ppppuStack_298);
  FUN_180080df0(&uStack_148);
  if (puVar15 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar15);
  }
  FUN_180057830(&uStack_198);
  FUN_18005d580(&puStack_2f8);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_3a8);
}








