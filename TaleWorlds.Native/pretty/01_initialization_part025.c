#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 01_initialization_part025.c - 14 个函数

// 函数: void FUN_180059000(int64_t *param_1)
void FUN_180059000(int64_t *param_1)

{
  uint64_t *******pppppppuVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int32_t uVar7;
  int iVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int8_t *puVar11;
  int64_t lVar12;
  void *puVar13;
  uint64_t *******pppppppuVar14;
  int64_t *plVar15;
  uint uVar16;
  void *puVar17;
  int64_t lVar18;
  uint64_t ******ppppppuVar19;
  int iVar20;
  uint *puVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  bool bVar26;
  int8_t auStack_3b8 [32];
  void *puStack_398;
  int8_t *puStack_390;
  int32_t uStack_388;
  uint64_t uStack_380;
  uint uStack_378;
  int iStack_374;
  int iStack_370;
  int64_t lStack_368;
  uint64_t ******ppppppuStack_360;
  uint64_t ******ppppppuStack_358;
  uint64_t ******ppppppuStack_350;
  uint64_t uStack_348;
  uint64_t uStack_340;
  int32_t uStack_338;
  void *puStack_330;
  void *puStack_328;
  int32_t uStack_320;
  uint64_t uStack_318;
  int64_t lStack_310;
  uint64_t *puStack_308;
  uint64_t *puStack_300;
  uint64_t uStack_2f8;
  int32_t uStack_2f0;
  void *puStack_2e8;
  int64_t lStack_2e0;
  int32_t uStack_2d0;
  int64_t lStack_2c8;
  uint64_t uStack_2c0;
  int64_t lStack_2b8;
  uint64_t *puStack_2b0;
  uint64_t *puStack_2a8;
  uint64_t *puStack_2a0;
  uint64_t uStack_298;
  void *puStack_290;
  int8_t *puStack_288;
  int32_t uStack_280;
  int8_t auStack_278 [16];
  uint64_t uStack_268;
  uint64_t uStack_48;
  int32_t uStack_40;
  int32_t uStack_3c;
  uint64_t uStack_38;
  uint64_t uStack_30;
  
  uStack_30 = 0x180059023;
  uVar9 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x270,8,3);
  uStack_30 = 0x18005902b;
  lVar10 = FUN_180175aa0(uVar9);
  uVar7 = *(int32_t *)(SYSTEM_STATE_MANAGER + 0x1dc0);
  init_system_data_memory = lVar10;
  *(int32_t *)(lVar10 + 0x1e0) = *(int32_t *)(SYSTEM_STATE_MANAGER + 0x1d50);
  *(int32_t *)(lVar10 + 0x1e4) = uVar7;
  uStack_30 = 0x180059066;
  (**(code **)(**(int64_t **)(*param_1 + 0x2b0) + 0xf8))();
  uStack_298 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_3b8;
  uStack_378 = 0;
  lStack_310 = init_system_data_memory;
  *(uint64_t *)(init_system_data_memory + 0xf0) = 0;
  uStack_338 = 3;
  ppppppuStack_360 = &ppppppuStack_360;
  ppppppuStack_358 = &ppppppuStack_360;
  ppppppuStack_350 = (uint64_t *******)0x0;
  uStack_348 = 0;
  uStack_340 = 0;
  lStack_2b8 = *system_main_module_state;
  iStack_370 = 0;
  lVar10 = *(int64_t *)(lStack_2b8 + 0x8a8);
  if (*(int64_t *)(lStack_2b8 + 0x8b0) - lVar10 >> 5 != 0) {
    lStack_368 = 0;
    do {
      lVar12 = lStack_368;
      iVar8 = iStack_370;
      puVar17 = *(void **)(lStack_368 * 0x20 + 8 + lVar10);
      puVar13 = &system_buffer_ptr;
      if (puVar17 != (void *)0x0) {
        puVar13 = puVar17;
      }
      puStack_398 = &system_data_buffer_ptr;
      uStack_380 = 0;
      puStack_390 = (int8_t *)0x0;
      uStack_388 = 0;
      if (puVar13 != (void *)0x0) {
        lVar10 = -1;
        do {
          lVar18 = lVar10;
          lVar10 = lVar18 + 1;
        } while (puVar13[lVar10] != '\0');
        if ((int)lVar10 != 0) {
          iVar20 = (int)lVar18 + 2;
          iVar8 = iVar20;
          if (iVar20 < 0x10) {
            iVar8 = 0x10;
          }
          puVar11 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar8,0x13);
          *puVar11 = 0;
          puStack_390 = puVar11;
          uVar7 = CoreEngineSystemCleanup(puVar11);
          uStack_380 = CONCAT44(uStack_380._4_4_,uVar7);
                    // WARNING: Subroutine does not return
          memcpy(puVar11,puVar13,iVar20);
        }
      }
      uStack_388 = 0;
      FUN_180175f80(&system_data_buffer_ptr,&puStack_2e8,&puStack_398);
      puStack_390 = (int8_t *)0x0;
      uStack_380 = uStack_380 & 0xffffffff00000000;
      puStack_398 = &system_state_ptr;
      puStack_308 = (uint64_t *)0x0;
      puStack_300 = (uint64_t *)0x0;
      uStack_2f8 = 0;
      uStack_2f0 = 3;
      puStack_290 = &system_config_ptr;
      puStack_288 = auStack_278;
      auStack_278[0] = 0;
      uStack_280 = 4;
      strcpy_s(auStack_278,0x10,&processed_var_4276_ptr);
      FUN_18062cb00(&puStack_2e8,&puStack_308,&puStack_290);
      puStack_290 = &system_state_ptr;
      iStack_374 = 0;
      lStack_2c8 = 0;
      uStack_2c0 = (int64_t)puStack_300 - (int64_t)puStack_308 >> 5;
      puVar2 = puStack_308;
      puVar3 = puStack_308;
      puVar4 = puStack_300;
      if (uStack_2c0 != 0) {
        do {
          lVar10 = lStack_2c8;
          puVar2 = puStack_308;
          iVar8 = iStack_374;
          puVar17 = &system_buffer_ptr;
          if ((void *)puStack_308[lStack_2c8 * 4 + 1] != (void *)0x0) {
            puVar17 = (void *)puStack_308[lStack_2c8 * 4 + 1];
          }
          lVar12 = strrchr(puVar17,0x2f);
          if (lVar12 == 0) {
            puVar17 = &system_buffer_ptr;
            if ((void *)puVar2[lVar10 * 4 + 1] != (void *)0x0) {
              puVar17 = (void *)puVar2[lVar10 * 4 + 1];
            }
          }
          else {
            puVar17 = (void *)(lVar12 + 1);
          }
          puVar13 = (void *)strchr(puVar17,0x2e);
          if (puVar13 == (void *)0x0) {
            puVar13 = &system_buffer_ptr;
            if ((void *)puVar2[lVar10 * 4 + 1] != (void *)0x0) {
              puVar13 = (void *)puVar2[lVar10 * 4 + 1];
            }
            puVar13 = puVar13 + *(int *)(puVar2 + lVar10 * 4 + 2);
          }
          if ((int64_t)puVar13 - (int64_t)puVar17 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(&uStack_268,puVar17,(int64_t)puVar13 - (int64_t)puVar17);
          }
                    // WARNING: Ignoring partial resolution of indirect
          uStack_268._0_1_ = 0;
          uVar16 = 0;
          uVar7 = 0;
          puStack_330 = &system_data_buffer_ptr;
          uStack_318 = 0;
          puStack_328 = (void *)0x0;
          uStack_320 = 0;
          lVar12 = -1;
          do {
            lVar18 = lVar12;
            lVar12 = lVar18 + 1;
          } while (*(char *)((int64_t)&uStack_268 + lVar18 + 1) != '\0');
          if ((int)(lVar18 + 1) != 0) {
            iVar20 = (int)lVar18 + 2;
            iVar8 = iVar20;
            if (iVar20 < 0x10) {
              iVar8 = 0x10;
            }
            puStack_328 = (void *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar8,0x13);
            *puStack_328 = 0;
            uVar22 = (uint64_t)puStack_328 & 0xffffffffffc00000;
            if (uVar22 != 0) {
              lVar10 = ((int64_t)puStack_328 - uVar22 >> 0x10) * 0x50 + 0x80 + uVar22;
              puVar21 = (uint *)(lVar10 - (uint64_t)*(uint *)(lVar10 + 4));
              if ((*(byte *)((int64_t)puVar21 + 0xe) & 2) == 0) {
                uVar16 = puVar21[7];
                if (0x3ffffff < uVar16) {
                  uVar16 = *puVar21 << 0x10;
                }
              }
              else {
                uVar16 = puVar21[7];
                if (uVar16 < 0x4000000) {
                  uVar23 = (uint64_t)uVar16;
                }
                else {
                  uVar23 = (uint64_t)*puVar21 << 0x10;
                }
                if (0x3ffffff < uVar16) {
                  uVar16 = *puVar21 << 0x10;
                }
                uVar16 = uVar16 - (int)(((int64_t)puStack_328 -
                                        (((int64_t)((int64_t)puVar21 + (-0x80 - uVar22)) / 0x50) *
                                         0x10000 + uVar22)) % uVar23);
              }
            }
            uStack_318 = CONCAT44(uStack_318._4_4_,uVar16);
                    // WARNING: Subroutine does not return
            memcpy(puStack_328,&uStack_268,iVar20);
          }
          uStack_320 = 0;
          pppppppuVar14 = &ppppppuStack_360;
          for (pppppppuVar1 = (uint64_t *******)ppppppuStack_350;
              pppppppuVar1 != (uint64_t *******)0x0;
              pppppppuVar1 = (uint64_t *******)pppppppuVar1[1]) {
            pppppppuVar14 = pppppppuVar1;
          }
          if ((pppppppuVar14 == &ppppppuStack_360) ||
             (lVar12 = lVar10, *(int *)(pppppppuVar14 + 6) != 0)) {
            if ((pppppppuVar14 != (uint64_t *******)ppppppuStack_360) &&
               (pppppppuVar14 != &ppppppuStack_360)) {
              func_0x00018066bd70(pppppppuVar14);
            }
            bVar26 = true;
            pppppppuVar14 = &ppppppuStack_360;
            pppppppuVar1 = (uint64_t *******)ppppppuStack_350;
            while (pppppppuVar1 != (uint64_t *******)0x0) {
              bVar26 = *(int *)(pppppppuVar1 + 6) != 0;
              pppppppuVar14 = pppppppuVar1;
              if (bVar26) {
                pppppppuVar1 = (uint64_t *******)pppppppuVar1[1];
              }
              else {
                pppppppuVar1 = (uint64_t *******)*pppppppuVar1;
              }
            }
            lVar12 = lStack_2c8;
            iVar8 = iStack_374;
            if (bVar26) {
              if (pppppppuVar14 == (uint64_t *******)ppppppuStack_358) {
                if ((pppppppuVar14 != &ppppppuStack_360) && (*(int *)(pppppppuVar14 + 6) == 0)) {
                  uVar7 = 1;
                }
                lVar10 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x60,(int8_t)uStack_338);
                puStack_2b0 = (uint64_t *)(lVar10 + 0x20);
                *puStack_2b0 = &system_state_ptr;
                *(uint64_t *)(lVar10 + 0x28) = 0;
                *(int32_t *)(lVar10 + 0x30) = 0;
                *puStack_2b0 = &system_data_buffer_ptr;
                *(uint64_t *)(lVar10 + 0x38) = 0;
                *(uint64_t *)(lVar10 + 0x28) = 0;
                *(int32_t *)(lVar10 + 0x30) = 0;
                puStack_2a8 = puStack_2b0;
                CoreEngineDataBufferProcessor(puStack_2b0,0);
                puStack_2a0 = (uint64_t *)(lVar10 + 0x40);
                *puStack_2a0 = &system_state_ptr;
                *(uint64_t *)(lVar10 + 0x48) = 0;
                *(int32_t *)(lVar10 + 0x50) = 0;
                *puStack_2a0 = &system_data_buffer_ptr;
                *(uint64_t *)(lVar10 + 0x58) = 0;
                *(uint64_t *)(lVar10 + 0x48) = 0;
                *(int32_t *)(lVar10 + 0x50) = 0;
                    // WARNING: Subroutine does not return
                SystemConfigProcessor(lVar10,pppppppuVar14,&ppppppuStack_360,uVar7);
              }
              pppppppuVar14 = (uint64_t *******)func_0x00018066b9a0(pppppppuVar14);
              lVar12 = lStack_2c8;
              iVar8 = iStack_374;
            }
          }
          uVar16 = *(uint *)(puVar2 + lVar10 * 4 + 2);
          uVar22 = (uint64_t)uVar16;
          if (puVar2[lVar10 * 4 + 1] != 0) {
            CoreEngineDataBufferProcessor(pppppppuVar14 + 8,uVar22);
          }
          if (uVar16 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(pppppppuVar14[9],puVar2[lVar10 * 4 + 1],uVar22);
          }
          *(int32_t *)(pppppppuVar14 + 10) = 0;
          if (pppppppuVar14[9] != (uint64_t ******)0x0) {
            *(int8_t *)(uVar22 + (int64_t)pppppppuVar14[9]) = 0;
          }
          *(int32_t *)((int64_t)pppppppuVar14 + 0x5c) =
               *(int32_t *)((int64_t)puVar2 + lVar10 * 0x20 + 0x1c);
          puStack_328 = (void *)0x0;
          uStack_318 = uStack_318 & 0xffffffff00000000;
          puStack_330 = &system_state_ptr;
          iStack_374 = iVar8 + 1;
          lStack_2c8 = lVar12 + 1;
          puVar2 = puStack_308;
          puVar3 = puStack_308;
          puVar4 = puStack_300;
          iVar8 = iStack_370;
          lVar12 = lStack_368;
        } while ((uint64_t)(int64_t)iStack_374 < uStack_2c0);
      }
      for (; puVar6 = puStack_300, puVar5 = puStack_308, puVar2 != puStack_300; puVar2 = puVar2 + 4)
      {
        puStack_308 = puVar3;
        puStack_300 = puVar4;
        (**(code **)*puVar2)(puVar2,0);
        puVar3 = puStack_308;
        puVar4 = puStack_300;
        puStack_300 = puVar6;
        puStack_308 = puVar5;
      }
      if (puStack_308 != (uint64_t *)0x0) {
        puStack_308 = puVar3;
        puStack_300 = puVar4;
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(puVar5);
      }
      puStack_2e8 = &system_data_buffer_ptr;
      if (lStack_2e0 != 0) {
        puStack_308 = puVar3;
        puStack_300 = puVar4;
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lStack_2e0 = 0;
      uStack_2d0 = 0;
      puStack_2e8 = &system_state_ptr;
      iStack_370 = iVar8 + 1;
      lStack_368 = lVar12 + 1;
      lVar10 = *(int64_t *)(lStack_2b8 + 0x8a8);
      puStack_308 = puVar3;
      puStack_300 = puVar4;
    } while ((uint64_t)(int64_t)iStack_370 <
             (uint64_t)(*(int64_t *)(lStack_2b8 + 0x8b0) - lVar10 >> 5));
  }
  uStack_48 = 0x3f8000003f800000;
  uStack_40 = 0x3f000000;
  uStack_3c = 0;
  if ((uint64_t *******)ppppppuStack_358 != &ppppppuStack_360) {
    lVar10 = lStack_310 + 0x150;
    pppppppuVar14 = (uint64_t *******)ppppppuStack_358;
    lVar12 = lStack_310;
    lStack_368 = lVar10;
    do {
      plVar15 = (int64_t *)FUN_180058080(lVar10,&puStack_2a0,pppppppuVar14 + 4);
      if (*plVar15 != lVar10) {
        bVar26 = false;
        uVar23 = 0;
        lVar18 = *(int64_t *)(lVar12 + 0xc0);
        uVar22 = uVar23;
        if (*(int64_t *)(lVar12 + 200) - lVar18 >> 3 != 0) {
          do {
            lVar10 = *(int64_t *)(lVar18 + uVar23);
            puStack_398 = &system_data_buffer_ptr;
            uStack_380 = 0;
            puStack_390 = (int8_t *)0x0;
            uStack_388 = 0;
            if (*(int *)(lVar10 + 0xb8) != 0) {
              iVar8 = *(int *)(lVar10 + 0xb8) + 1;
              if (iVar8 < 0x10) {
                iVar8 = 0x10;
              }
              puStack_390 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar8,0x13);
              *puStack_390 = 0;
              uVar24 = (uint64_t)puStack_390 & 0xffffffffffc00000;
              if (uVar24 == 0) {
                uVar16 = 0;
              }
              else {
                lVar12 = ((int64_t)puStack_390 - uVar24 >> 0x10) * 0x50 + 0x80 + uVar24;
                puVar21 = (uint *)(lVar12 - (uint64_t)*(uint *)(lVar12 + 4));
                if ((*(byte *)((int64_t)puVar21 + 0xe) & 2) == 0) {
                  uVar16 = puVar21[7];
                  if (0x3ffffff < uVar16) {
                    uVar16 = *puVar21 << 0x10;
                  }
                }
                else {
                  uVar16 = puVar21[7];
                  if (uVar16 < 0x4000000) {
                    uVar25 = (uint64_t)uVar16;
                  }
                  else {
                    uVar25 = (uint64_t)*puVar21 << 0x10;
                  }
                  if (0x3ffffff < uVar16) {
                    uVar16 = *puVar21 << 0x10;
                  }
                  uVar16 = uVar16 - (int)(((int64_t)puStack_390 -
                                          (((int64_t)((int64_t)puVar21 + (-0x80 - uVar24)) / 0x50)
                                           * 0x10000 + uVar24)) % uVar25);
                }
              }
              uStack_380 = CONCAT44(uStack_380._4_4_,uVar16);
              if (*(int *)(lVar10 + 0xb8) != 0) {
                    // WARNING: Subroutine does not return
                memcpy(puStack_390,*(uint64_t *)(lVar10 + 0xb0),*(int *)(lVar10 + 0xb8) + 1);
              }
            }
            if (*(int64_t *)(lVar10 + 0xb0) != 0) {
              uStack_388 = 0;
              if (puStack_390 != (int8_t *)0x0) {
                *puStack_390 = 0;
              }
              uStack_380 = uStack_380 & 0xffffffff;
            }
            uStack_378 = uStack_378 & 0xfffffffd;
            puStack_398 = &system_data_buffer_ptr;
            if (puStack_390 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner(puStack_390);
            }
            puStack_390 = (int8_t *)0x0;
            uStack_380 = uStack_380 & 0xffffffff00000000;
            puStack_398 = &system_state_ptr;
            lVar12 = lStack_310;
            lVar10 = lStack_368;
            if (*(int *)(pppppppuVar14 + 6) == 0) {
              bVar26 = true;
              break;
            }
            uVar16 = (int)uVar22 + 1;
            uVar22 = (uint64_t)uVar16;
            uVar23 = uVar23 + 8;
            lVar18 = *(int64_t *)(lStack_310 + 0xc0);
          } while ((uint64_t)(int64_t)(int)uVar16 <
                   (uint64_t)(*(int64_t *)(lStack_310 + 200) - lVar18 >> 3));
        }
        if (!bVar26) {
          uVar9 = FUN_180624440(&uStack_268,pppppppuVar14 + 8);
          SystemCore_EncryptionEngine0(&puStack_330,uVar9);
          uStack_268 = &system_state_ptr;
          ppppppuVar19 = (uint64_t ******)&system_buffer_ptr;
          if (pppppppuVar14[5] != (uint64_t ******)0x0) {
            ppppppuVar19 = pppppppuVar14[5];
          }
          DataValidator(&puStack_308,ppppppuVar19);
          puVar17 = &system_buffer_ptr;
          if (puStack_328 != (void *)0x0) {
            puVar17 = puStack_328;
          }
          DataValidator(&puStack_2e8,puVar17);
          FUN_1801762b0(lVar12,&puStack_2e8,&puStack_308,&uStack_48);
          puStack_2e8 = &system_data_buffer_ptr;
          if (lStack_2e0 != 0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          lStack_2e0 = 0;
          uStack_2d0 = 0;
          puStack_2e8 = &system_state_ptr;
          puStack_308 = (uint64_t *)&system_data_buffer_ptr;
          if (puStack_300 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          puStack_300 = (uint64_t *)0x0;
          uStack_2f0 = 0;
          puStack_308 = (uint64_t *)&system_state_ptr;
          puStack_330 = &system_data_buffer_ptr;
          if (puStack_328 != (void *)0x0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          puStack_328 = (void *)0x0;
          uStack_318 = uStack_318 & 0xffffffff00000000;
          puStack_330 = &system_state_ptr;
        }
      }
      pppppppuVar14 = (uint64_t *******)func_0x00018066bd70(pppppppuVar14);
    } while (pppppppuVar14 != &ppppppuStack_360);
  }
  FUN_180058020(&ppppppuStack_360);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_3b8);
}



uint64_t * FUN_1800590b0(uint64_t *param_1,int8_t *param_2,int64_t param_3)

{
  byte bVar1;
  bool bVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint uVar5;
  byte *pbVar6;
  int64_t lVar7;
  
  bVar2 = true;
  puVar4 = (uint64_t *)param_1[2];
  puVar3 = param_1;
  while (puVar4 != (uint64_t *)0x0) {
    puVar3 = puVar4;
    if (*(int *)(puVar4 + 6) == 0) {
      bVar2 = false;
LAB_1800590e2:
      puVar4 = (uint64_t *)*puVar4;
    }
    else {
      if (*(int *)(param_3 + 0x10) == 0) {
        bVar2 = true;
      }
      else {
        pbVar6 = (byte *)puVar4[5];
        lVar7 = *(int64_t *)(param_3 + 8) - (int64_t)pbVar6;
        do {
          bVar1 = *pbVar6;
          uVar5 = (uint)pbVar6[lVar7];
          if (bVar1 != uVar5) break;
          pbVar6 = pbVar6 + 1;
        } while (uVar5 != 0);
        bVar2 = 0 < (int)(bVar1 - uVar5);
      }
      if (!bVar2) goto LAB_1800590e2;
      puVar4 = (uint64_t *)puVar4[1];
    }
  }
  puVar4 = puVar3;
  if (bVar2) {
    if (puVar3 == (uint64_t *)param_1[1]) {
      *param_2 = 1;
      return puVar3;
    }
    puVar4 = (uint64_t *)func_0x00018066b9a0(puVar3);
  }
  if (*(int *)(param_3 + 0x10) != 0) {
    if (*(int *)(puVar4 + 6) != 0) {
      pbVar6 = *(byte **)(param_3 + 8);
      lVar7 = puVar4[5] - (int64_t)pbVar6;
      do {
        bVar1 = *pbVar6;
        uVar5 = (uint)pbVar6[lVar7];
        if (bVar1 != uVar5) break;
        pbVar6 = pbVar6 + 1;
      } while (uVar5 != 0);
      if ((int)(bVar1 - uVar5) < 1) goto LAB_1800591a6;
    }
    *param_2 = 1;
    return puVar3;
  }
LAB_1800591a6:
  *param_2 = 0;
  return puVar4;
}





// 函数: void FUN_1800591c0(int64_t *param_1)
void FUN_1800591c0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x548) {
    FUN_1800594b0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void FUN_180059230(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180059230(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1800593f0(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}



int64_t FUN_180059250(int64_t param_1,int64_t param_2,int64_t param_3)

{
  uint uVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  lVar3 = param_2 - param_1 >> 5;
  if (0 < lVar3) {
    plVar2 = (int64_t *)(param_1 + 8);
    param_1 = param_3 - param_1;
    do {
      uVar1 = *(uint *)(plVar2 + 1);
      uVar4 = (uint64_t)uVar1;
      if (*plVar2 != 0) {
        CoreEngineDataBufferProcessor(param_3,uVar4);
      }
      if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(*(uint64_t *)(param_1 + (int64_t)plVar2),*plVar2,uVar4);
      }
      *(int32_t *)(param_1 + 8 + (int64_t)plVar2) = 0;
      if (*(int64_t *)(param_1 + (int64_t)plVar2) != 0) {
        *(int8_t *)(uVar4 + *(int64_t *)(param_1 + (int64_t)plVar2)) = 0;
      }
      lVar3 = lVar3 + -1;
      *(int32_t *)(param_1 + 0x14 + (int64_t)plVar2) = *(int32_t *)((int64_t)plVar2 + 0x14);
      param_3 = param_3 + 0x20;
      plVar2 = plVar2 + 4;
    } while (0 < lVar3);
  }
  return param_3;
}



int64_t FUN_18005926c(int64_t param_1,uint64_t param_2,int64_t param_3)

{
  uint uVar1;
  int64_t *plVar2;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t uVar3;
  
  plVar2 = (int64_t *)(param_1 + 8);
  param_3 = param_3 - param_1;
  do {
    uVar1 = *(uint *)(plVar2 + 1);
    uVar3 = (uint64_t)uVar1;
    if (*plVar2 != 0) {
      CoreEngineDataBufferProcessor(unaff_RSI,uVar3);
    }
    if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(*(uint64_t *)(param_3 + (int64_t)plVar2),*plVar2,uVar3);
    }
    *(int32_t *)(param_3 + 8 + (int64_t)plVar2) = 0;
    if (*(int64_t *)(param_3 + (int64_t)plVar2) != 0) {
      *(int8_t *)(uVar3 + *(int64_t *)(param_3 + (int64_t)plVar2)) = 0;
    }
    unaff_RBP = unaff_RBP + -1;
    *(int32_t *)(param_3 + 0x14 + (int64_t)plVar2) = *(int32_t *)((int64_t)plVar2 + 0x14);
    unaff_RSI = unaff_RSI + 0x20;
    plVar2 = plVar2 + 4;
  } while (0 < unaff_RBP);
  return unaff_RSI;
}





// 函数: void FUN_1800592e4(void)
void FUN_1800592e4(void)

{
  return;
}



int64_t FUN_180059300(int64_t param_1,int64_t param_2,int64_t param_3)

{
  if (param_1 != param_2) {
    do {
      CoreEngineDataTransformer(param_3,param_1);
      param_1 = param_1 + 0x20;
      param_3 = param_3 + 0x20;
    } while (param_1 != param_2);
  }
  return param_3;
}





// 函数: void FUN_180059350(int64_t param_1,int64_t param_2,uint64_t param_3)
void FUN_180059350(int64_t param_1,int64_t param_2,uint64_t param_3)

{
  if (param_1 != param_2) {
                    // WARNING: Subroutine does not return
    memmove(param_3,param_1,param_2 - param_1);
  }
  return;
}





// 函数: void FUN_180059380(uint64_t *param_1)
void FUN_180059380(uint64_t *param_1)

{
  if (param_1[4] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *param_1 = &system_data_buffer_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &system_state_ptr;
  return;
}





// 函数: void FUN_1800593f0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800593f0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 == (uint64_t *)0x0) {
    return;
  }
  FUN_1800593f0(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
  FUN_18004b730();
  param_2[4] = &system_data_buffer_ptr;
  if (param_2[5] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_2[5] = 0;
  *(int32_t *)(param_2 + 7) = 0;
  param_2[4] = &system_state_ptr;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(param_2);
}





// 函数: void FUN_1800594b0(uint64_t *param_1)
void FUN_1800594b0(uint64_t *param_1)

{
  SystemDataValidator(param_1 + 0x7d,0x58,4,FUN_180044a30,0xfffffffffffffffe);
  SystemDataValidator(param_1 + 0x51,0x58,4,FUN_180044a30);
  SystemDataValidator(param_1 + 0x11,0x20,0x10,FUN_180059620);
  param_1[8] = &system_data_buffer_ptr;
  if (param_1[9] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[9] = 0;
  *(int32_t *)(param_1 + 0xb) = 0;
  param_1[8] = &system_state_ptr;
  param_1[4] = &system_data_buffer_ptr;
  if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[5] = 0;
  *(int32_t *)(param_1 + 7) = 0;
  param_1[4] = &system_state_ptr;
  *param_1 = &system_data_buffer_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &system_state_ptr;
  return;
}





// 函数: void FUN_1800595c0(uint64_t *param_1)
void FUN_1800595c0(uint64_t *param_1)

{
  FUN_18004b730();
  *param_1 = &system_data_buffer_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &system_state_ptr;
  return;
}





// 函数: void FUN_180059620(int64_t *param_1)
void FUN_180059620(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x50) {
    FUN_1800596a0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void FUN_180059640(int64_t *param_1)
void FUN_180059640(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x50) {
    FUN_1800596a0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void FUN_1800596a0(uint64_t *param_1)
void FUN_1800596a0(uint64_t *param_1)

{
  param_1[4] = &system_data_buffer_ptr;
  if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[5] = 0;
  *(int32_t *)(param_1 + 7) = 0;
  param_1[4] = &system_state_ptr;
  *param_1 = &system_data_buffer_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &system_state_ptr;
  return;
}





// 函数: void FUN_180059730(int64_t param_1)
void FUN_180059730(int64_t param_1)

{
  if (*(int64_t *)(param_1 + 8) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  _Mtx_destroy_in_situ();
  return;
}



uint64_t * FUN_180059780(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  
  if (param_1 != param_2) {
    lVar3 = (int64_t)param_3 - (int64_t)param_1;
    puVar2 = param_1 + 1;
    do {
      *param_3 = &system_state_ptr;
      *(uint64_t *)(lVar3 + (int64_t)puVar2) = 0;
      *(int32_t *)(lVar3 + 8 + (int64_t)puVar2) = 0;
      *param_3 = &system_data_buffer_ptr;
      *(uint64_t *)(lVar3 + 0x10 + (int64_t)puVar2) = 0;
      *(uint64_t *)(lVar3 + (int64_t)puVar2) = 0;
      *(int32_t *)(lVar3 + 8 + (int64_t)puVar2) = 0;
      *(int32_t *)(lVar3 + 8 + (int64_t)puVar2) = *(int32_t *)(puVar2 + 1);
      *(uint64_t *)(lVar3 + (int64_t)puVar2) = *puVar2;
      *(int32_t *)(lVar3 + 0x14 + (int64_t)puVar2) = *(int32_t *)((int64_t)puVar2 + 0x14);
      *(int32_t *)(lVar3 + 0x10 + (int64_t)puVar2) = *(int32_t *)(puVar2 + 2);
      *(int32_t *)(puVar2 + 1) = 0;
      *puVar2 = 0;
      puVar2[2] = 0;
      param_3 = param_3 + 4;
      puVar1 = puVar2 + 3;
      puVar2 = puVar2 + 4;
    } while (puVar1 != param_2);
  }
  return param_3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180059820(int64_t *param_1,uint64_t param_2)
void FUN_180059820(int64_t *param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  
  lVar3 = param_1[1];
  lVar4 = *param_1;
  lVar6 = lVar3 - lVar4 >> 5;
  if (lVar6 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = lVar6 * 2;
    if (lVar6 == 0) {
      lVar2 = 0;
      goto LAB_180059885;
    }
  }
  lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar6 << 5,(char)param_1[3]);
  lVar3 = param_1[1];
  lVar4 = *param_1;
LAB_180059885:
  lVar3 = FUN_180059780(lVar4,lVar3,lVar2);
  CoreEngineDataTransformer(lVar3,param_2);
  puVar1 = (uint64_t *)param_1[1];
  puVar5 = (uint64_t *)*param_1;
  if (puVar5 != puVar1) {
    do {
      (**(code **)*puVar5)(puVar5,0);
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar1);
    puVar5 = (uint64_t *)*param_1;
  }
  if (puVar5 == (uint64_t *)0x0) {
    *param_1 = lVar2;
    param_1[2] = lVar6 * 0x20 + lVar2;
    param_1[1] = lVar3 + 0x20;
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar5);
}



uint64_t *
FUN_180059900(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &system_state_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





