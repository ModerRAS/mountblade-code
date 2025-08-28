#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part194.c - 2 个函数

// 函数: void FUN_180176de0(void)
void FUN_180176de0(void)

{
  uint64_t *******pppppppuVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int32_t uVar7;
  int iVar8;
  int8_t *puVar9;
  int64_t lVar10;
  void *puVar11;
  uint64_t *******pppppppuVar12;
  int64_t *plVar13;
  uint64_t uVar14;
  uint uVar15;
  void *puVar16;
  int64_t lVar17;
  uint64_t ******ppppppuVar18;
  int iVar19;
  int64_t lVar20;
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
  
  uStack_298 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_3b8;
  uStack_378 = 0;
  lStack_310 = core_system_data_memory;
  *(uint64_t *)(core_system_data_memory + 0xf0) = 0;
  uStack_338 = 3;
  ppppppuStack_360 = &ppppppuStack_360;
  ppppppuStack_358 = &ppppppuStack_360;
  ppppppuStack_350 = (uint64_t *******)0x0;
  uStack_348 = 0;
  uStack_340 = 0;
  lStack_2b8 = *system_main_module_state;
  iStack_370 = 0;
  lVar20 = *(int64_t *)(lStack_2b8 + 0x8a8);
  if (*(int64_t *)(lStack_2b8 + 0x8b0) - lVar20 >> 5 != 0) {
    lStack_368 = 0;
    do {
      lVar10 = lStack_368;
      iVar8 = iStack_370;
      puVar16 = *(void **)(lStack_368 * 0x20 + 8 + lVar20);
      puVar11 = &system_buffer_ptr;
      if (puVar16 != (void *)0x0) {
        puVar11 = puVar16;
      }
      puStack_398 = &system_data_buffer_ptr;
      uStack_380 = 0;
      puStack_390 = (int8_t *)0x0;
      uStack_388 = 0;
      if (puVar11 != (void *)0x0) {
        lVar20 = -1;
        do {
          lVar17 = lVar20;
          lVar20 = lVar17 + 1;
        } while (puVar11[lVar20] != '\0');
        if ((int)lVar20 != 0) {
          iVar19 = (int)lVar17 + 2;
          iVar8 = iVar19;
          if (iVar19 < 0x10) {
            iVar8 = 0x10;
          }
          puVar9 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar8,0x13);
          *puVar9 = 0;
          puStack_390 = puVar9;
          uVar7 = CoreEngineSystemCleanup(puVar9);
          uStack_380 = CONCAT44(uStack_380._4_4_,uVar7);
                    // WARNING: Subroutine does not return
          memcpy(puVar9,puVar11,iVar19);
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
      CoreEngineController(&puStack_2e8,&puStack_308,&puStack_290);
      puStack_290 = &system_state_ptr;
      iStack_374 = 0;
      lStack_2c8 = 0;
      uStack_2c0 = (int64_t)puStack_300 - (int64_t)puStack_308 >> 5;
      puVar2 = puStack_308;
      puVar3 = puStack_308;
      puVar4 = puStack_300;
      if (uStack_2c0 != 0) {
        do {
          lVar20 = lStack_2c8;
          puVar2 = puStack_308;
          iVar8 = iStack_374;
          puVar16 = &system_buffer_ptr;
          if ((void *)puStack_308[lStack_2c8 * 4 + 1] != (void *)0x0) {
            puVar16 = (void *)puStack_308[lStack_2c8 * 4 + 1];
          }
          lVar10 = strrchr(puVar16,0x2f);
          if (lVar10 == 0) {
            puVar16 = &system_buffer_ptr;
            if ((void *)puVar2[lVar20 * 4 + 1] != (void *)0x0) {
              puVar16 = (void *)puVar2[lVar20 * 4 + 1];
            }
          }
          else {
            puVar16 = (void *)(lVar10 + 1);
          }
          puVar11 = (void *)strchr(puVar16,0x2e);
          if (puVar11 == (void *)0x0) {
            puVar11 = &system_buffer_ptr;
            if ((void *)puVar2[lVar20 * 4 + 1] != (void *)0x0) {
              puVar11 = (void *)puVar2[lVar20 * 4 + 1];
            }
            puVar11 = puVar11 + *(int *)(puVar2 + lVar20 * 4 + 2);
          }
          if ((int64_t)puVar11 - (int64_t)puVar16 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(&uStack_268,puVar16,(int64_t)puVar11 - (int64_t)puVar16);
          }
                    // WARNING: Ignoring partial resolution of indirect
          uStack_268._0_1_ = 0;
          uVar15 = 0;
          uVar7 = 0;
          puStack_330 = &system_data_buffer_ptr;
          uStack_318 = 0;
          puStack_328 = (void *)0x0;
          uStack_320 = 0;
          lVar10 = -1;
          do {
            lVar17 = lVar10;
            lVar10 = lVar17 + 1;
          } while (*(char *)((int64_t)&uStack_268 + lVar17 + 1) != '\0');
          if ((int)(lVar17 + 1) != 0) {
            iVar19 = (int)lVar17 + 2;
            iVar8 = iVar19;
            if (iVar19 < 0x10) {
              iVar8 = 0x10;
            }
            puStack_328 = (void *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar8,0x13);
            *puStack_328 = 0;
            uVar22 = (uint64_t)puStack_328 & 0xffffffffffc00000;
            if (uVar22 != 0) {
              lVar20 = ((int64_t)puStack_328 - uVar22 >> 0x10) * 0x50 + 0x80 + uVar22;
              puVar21 = (uint *)(lVar20 - (uint64_t)*(uint *)(lVar20 + 4));
              if ((*(byte *)((int64_t)puVar21 + 0xe) & 2) == 0) {
                uVar15 = puVar21[7];
                if (0x3ffffff < uVar15) {
                  uVar15 = *puVar21 << 0x10;
                }
              }
              else {
                uVar15 = puVar21[7];
                if (uVar15 < 0x4000000) {
                  uVar23 = (uint64_t)uVar15;
                }
                else {
                  uVar23 = (uint64_t)*puVar21 << 0x10;
                }
                if (0x3ffffff < uVar15) {
                  uVar15 = *puVar21 << 0x10;
                }
                uVar15 = uVar15 - (int)(((int64_t)puStack_328 -
                                        (((int64_t)((int64_t)puVar21 + (-0x80 - uVar22)) / 0x50) *
                                         0x10000 + uVar22)) % uVar23);
              }
            }
            uStack_318 = CONCAT44(uStack_318._4_4_,uVar15);
                    // WARNING: Subroutine does not return
            memcpy(puStack_328,&uStack_268,iVar19);
          }
          uStack_320 = 0;
          pppppppuVar12 = &ppppppuStack_360;
          for (pppppppuVar1 = (uint64_t *******)ppppppuStack_350;
              pppppppuVar1 != (uint64_t *******)0x0;
              pppppppuVar1 = (uint64_t *******)pppppppuVar1[1]) {
            pppppppuVar12 = pppppppuVar1;
          }
          if ((pppppppuVar12 == &ppppppuStack_360) ||
             (lVar10 = lVar20, *(int *)(pppppppuVar12 + 6) != 0)) {
            if ((pppppppuVar12 != (uint64_t *******)ppppppuStack_360) &&
               (pppppppuVar12 != &ppppppuStack_360)) {
              func_0x00018066bd70(pppppppuVar12);
            }
            bVar26 = true;
            pppppppuVar12 = &ppppppuStack_360;
            pppppppuVar1 = (uint64_t *******)ppppppuStack_350;
            while (pppppppuVar1 != (uint64_t *******)0x0) {
              bVar26 = *(int *)(pppppppuVar1 + 6) != 0;
              pppppppuVar12 = pppppppuVar1;
              if (bVar26) {
                pppppppuVar1 = (uint64_t *******)pppppppuVar1[1];
              }
              else {
                pppppppuVar1 = (uint64_t *******)*pppppppuVar1;
              }
            }
            lVar10 = lStack_2c8;
            iVar8 = iStack_374;
            if (bVar26) {
              if (pppppppuVar12 == (uint64_t *******)ppppppuStack_358) {
                if ((pppppppuVar12 != &ppppppuStack_360) && (*(int *)(pppppppuVar12 + 6) == 0)) {
                  uVar7 = 1;
                }
                lVar20 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x60,(int8_t)uStack_338);
                puStack_2b0 = (uint64_t *)(lVar20 + 0x20);
                *puStack_2b0 = &system_state_ptr;
                *(uint64_t *)(lVar20 + 0x28) = 0;
                *(int32_t *)(lVar20 + 0x30) = 0;
                *puStack_2b0 = &system_data_buffer_ptr;
                *(uint64_t *)(lVar20 + 0x38) = 0;
                *(uint64_t *)(lVar20 + 0x28) = 0;
                *(int32_t *)(lVar20 + 0x30) = 0;
                puStack_2a8 = puStack_2b0;
                CoreEngineDataBufferProcessor(puStack_2b0,0);
                puStack_2a0 = (uint64_t *)(lVar20 + 0x40);
                *puStack_2a0 = &system_state_ptr;
                *(uint64_t *)(lVar20 + 0x48) = 0;
                *(int32_t *)(lVar20 + 0x50) = 0;
                *puStack_2a0 = &system_data_buffer_ptr;
                *(uint64_t *)(lVar20 + 0x58) = 0;
                *(uint64_t *)(lVar20 + 0x48) = 0;
                *(int32_t *)(lVar20 + 0x50) = 0;
                    // WARNING: Subroutine does not return
                SystemConfigProcessor(lVar20,pppppppuVar12,&ppppppuStack_360,uVar7);
              }
              pppppppuVar12 = (uint64_t *******)func_0x00018066b9a0(pppppppuVar12);
              lVar10 = lStack_2c8;
              iVar8 = iStack_374;
            }
          }
          uVar15 = *(uint *)(puVar2 + lVar20 * 4 + 2);
          uVar22 = (uint64_t)uVar15;
          if (puVar2[lVar20 * 4 + 1] != 0) {
            CoreEngineDataBufferProcessor(pppppppuVar12 + 8,uVar22);
          }
          if (uVar15 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(pppppppuVar12[9],puVar2[lVar20 * 4 + 1],uVar22);
          }
          *(int32_t *)(pppppppuVar12 + 10) = 0;
          if (pppppppuVar12[9] != (uint64_t ******)0x0) {
            *(int8_t *)(uVar22 + (int64_t)pppppppuVar12[9]) = 0;
          }
          *(int32_t *)((int64_t)pppppppuVar12 + 0x5c) =
               *(int32_t *)((int64_t)puVar2 + lVar20 * 0x20 + 0x1c);
          puStack_328 = (void *)0x0;
          uStack_318 = uStack_318 & 0xffffffff00000000;
          puStack_330 = &system_state_ptr;
          iStack_374 = iVar8 + 1;
          lStack_2c8 = lVar10 + 1;
          puVar2 = puStack_308;
          puVar3 = puStack_308;
          puVar4 = puStack_300;
          iVar8 = iStack_370;
          lVar10 = lStack_368;
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
      lStack_368 = lVar10 + 1;
      lVar20 = *(int64_t *)(lStack_2b8 + 0x8a8);
      puStack_308 = puVar3;
      puStack_300 = puVar4;
    } while ((uint64_t)(int64_t)iStack_370 <
             (uint64_t)(*(int64_t *)(lStack_2b8 + 0x8b0) - lVar20 >> 5));
  }
  uStack_48 = 0x3f8000003f800000;
  uStack_40 = 0x3f000000;
  uStack_3c = 0;
  if ((uint64_t *******)ppppppuStack_358 != &ppppppuStack_360) {
    lVar20 = lStack_310 + 0x150;
    pppppppuVar12 = (uint64_t *******)ppppppuStack_358;
    lVar10 = lStack_310;
    lStack_368 = lVar20;
    do {
      plVar13 = (int64_t *)HighFreq_AnimationSystem1(lVar20,&puStack_2a0,pppppppuVar12 + 4);
      if (*plVar13 != lVar20) {
        bVar26 = false;
        uVar23 = 0;
        lVar17 = *(int64_t *)(lVar10 + 0xc0);
        uVar22 = uVar23;
        if (*(int64_t *)(lVar10 + 200) - lVar17 >> 3 != 0) {
          do {
            lVar20 = *(int64_t *)(lVar17 + uVar23);
            puStack_398 = &system_data_buffer_ptr;
            uStack_380 = 0;
            puStack_390 = (int8_t *)0x0;
            uStack_388 = 0;
            if (*(int *)(lVar20 + 0xb8) != 0) {
              iVar8 = *(int *)(lVar20 + 0xb8) + 1;
              if (iVar8 < 0x10) {
                iVar8 = 0x10;
              }
              puStack_390 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar8,0x13);
              *puStack_390 = 0;
              uVar24 = (uint64_t)puStack_390 & 0xffffffffffc00000;
              if (uVar24 == 0) {
                uVar15 = 0;
              }
              else {
                lVar10 = ((int64_t)puStack_390 - uVar24 >> 0x10) * 0x50 + 0x80 + uVar24;
                puVar21 = (uint *)(lVar10 - (uint64_t)*(uint *)(lVar10 + 4));
                if ((*(byte *)((int64_t)puVar21 + 0xe) & 2) == 0) {
                  uVar15 = puVar21[7];
                  if (0x3ffffff < uVar15) {
                    uVar15 = *puVar21 << 0x10;
                  }
                }
                else {
                  uVar15 = puVar21[7];
                  if (uVar15 < 0x4000000) {
                    uVar25 = (uint64_t)uVar15;
                  }
                  else {
                    uVar25 = (uint64_t)*puVar21 << 0x10;
                  }
                  if (0x3ffffff < uVar15) {
                    uVar15 = *puVar21 << 0x10;
                  }
                  uVar15 = uVar15 - (int)(((int64_t)puStack_390 -
                                          (((int64_t)((int64_t)puVar21 + (-0x80 - uVar24)) / 0x50)
                                           * 0x10000 + uVar24)) % uVar25);
                }
              }
              uStack_380 = CONCAT44(uStack_380._4_4_,uVar15);
              if (*(int *)(lVar20 + 0xb8) != 0) {
                    // WARNING: Subroutine does not return
                memcpy(puStack_390,*(uint64_t *)(lVar20 + 0xb0),*(int *)(lVar20 + 0xb8) + 1);
              }
            }
            if (*(int64_t *)(lVar20 + 0xb0) != 0) {
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
            lVar10 = lStack_310;
            lVar20 = lStack_368;
            if (*(int *)(pppppppuVar12 + 6) == 0) {
              bVar26 = true;
              break;
            }
            uVar15 = (int)uVar22 + 1;
            uVar22 = (uint64_t)uVar15;
            uVar23 = uVar23 + 8;
            lVar17 = *(int64_t *)(lStack_310 + 0xc0);
          } while ((uint64_t)(int64_t)(int)uVar15 <
                   (uint64_t)(*(int64_t *)(lStack_310 + 200) - lVar17 >> 3));
        }
        if (!bVar26) {
          uVar14 = SystemCore_EncryptionEngine(&uStack_268,pppppppuVar12 + 8);
          SystemCore_EncryptionEngine0(&puStack_330,uVar14);
          uStack_268 = &system_state_ptr;
          ppppppuVar18 = (uint64_t ******)&system_buffer_ptr;
          if (pppppppuVar12[5] != (uint64_t ******)0x0) {
            ppppppuVar18 = pppppppuVar12[5];
          }
          CoreMemoryPoolValidator(&puStack_308,ppppppuVar18);
          puVar16 = &system_buffer_ptr;
          if (puStack_328 != (void *)0x0) {
            puVar16 = puStack_328;
          }
          CoreMemoryPoolValidator(&puStack_2e8,puVar16);
          FUN_1801762b0(lVar10,&puStack_2e8,&puStack_308,&uStack_48);
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
      pppppppuVar12 = (uint64_t *******)func_0x00018066bd70(pppppppuVar12);
    } while (pppppppuVar12 != &ppppppuStack_360);
  }
  FUN_180058020(&ppppppuStack_360);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_3b8);
}



int64_t FUN_180177c00(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  char cVar2;
  int64_t *plVar3;
  int64_t lVar4;
  char *pcVar5;
  int64_t *plVar6;
  bool bVar7;
  int32_t uVar8;
  uint64_t uVar9;
  void *puStack_48;
  char *pcStack_40;
  int iStack_38;
  uint64_t uStack_30;
  
  uVar9 = 0xfffffffffffffffe;
  plVar6 = *(int64_t **)(param_1 + 0xc0);
  plVar3 = *(int64_t **)(param_1 + 200);
  do {
    if (plVar6 == plVar3) {
      return 0;
    }
    uVar8 = 0;
    lVar4 = *plVar6;
    puStack_48 = &system_data_buffer_ptr;
    uStack_30 = 0;
    pcStack_40 = (char *)0x0;
    iStack_38 = 0;
    CoreEngineDataBufferProcessor(&puStack_48,*(int32_t *)(lVar4 + 0xb8));
    if (*(int *)(lVar4 + 0xb8) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(pcStack_40,*(uint64_t *)(lVar4 + 0xb0),*(int *)(lVar4 + 0xb8) + 1,param_4,uVar8,uVar9
            );
    }
    if (*(int64_t *)(lVar4 + 0xb0) != 0) {
      iStack_38 = 0;
      if (pcStack_40 != (char *)0x0) {
        *pcStack_40 = '\0';
      }
      uStack_30 = uStack_30 & 0xffffffff;
    }
    if (iStack_38 == *(int *)(param_2 + 0x10)) {
      if (iStack_38 == 0) {
LAB_180177d1e:
        if (*(int *)(param_2 + 0x10) != 0) goto LAB_180177d26;
        bVar7 = true;
      }
      else {
        pcVar5 = pcStack_40;
        do {
          cVar1 = *pcVar5;
          cVar2 = pcVar5[*(int64_t *)(param_2 + 8) - (int64_t)pcStack_40];
          if (cVar1 != cVar2) break;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        bVar7 = cVar1 == cVar2;
      }
    }
    else {
      if (iStack_38 == 0) goto LAB_180177d1e;
LAB_180177d26:
      bVar7 = false;
    }
    puStack_48 = &system_data_buffer_ptr;
    if (pcStack_40 != (char *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    if (bVar7) {
      return lVar4;
    }
    plVar6 = plVar6 + 1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180177da0(uint64_t param_1,int64_t param_2)
void FUN_180177da0(uint64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  byte bVar2;
  bool bVar3;
  uint64_t *puVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  byte *pbVar9;
  uint uVar10;
  void *puVar11;
  int64_t *plVar12;
  int64_t lVar13;
  int64_t lVar14;
  uint64_t uVar15;
  int64_t lVar16;
  int64_t *plVar17;
  int8_t auStack_8c8 [32];
  void *puStack_8a8;
  int8_t *puStack_8a0;
  int32_t uStack_898;
  uint64_t uStack_890;
  int64_t *plStack_888;
  void **ppuStack_880;
  void *puStack_878;
  int64_t lStack_870;
  int32_t uStack_860;
  int64_t lStack_858;
  uint64_t uStack_850;
  int64_t lStack_848;
  int8_t auStack_838 [2048];
  uint64_t uStack_38;
  
  uStack_850 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_8c8;
  plVar17 = *(int64_t **)(core_system_data_memory + 0xc0);
  plVar12 = *(int64_t **)(core_system_data_memory + 200);
  plStack_888 = plVar12;
  if (plVar17 != plVar12) {
    do {
      lVar13 = *plVar17;
      lVar14 = lVar13 + 8;
      lStack_848 = lVar14;
      iVar5 = _Mtx_lock(lVar14);
      if (iVar5 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar5);
      }
      lVar6 = FUN_1802e5300(lVar13,param_2);
      if (lVar6 == 0) {
        puVar11 = &system_buffer_ptr;
        if (*(void **)(param_2 + 8) != (void *)0x0) {
          puVar11 = *(void **)(param_2 + 8);
        }
        mbstowcs(auStack_838,puVar11,(int64_t)(*(int *)(param_2 + 0x10) + 1));
        lVar7 = (**(code **)(**(int64_t **)(lVar13 + 0x148) + 0x10))
                          (*(int64_t **)(lVar13 + 0x148),auStack_838);
        if ((lVar7 == 0) &&
           (lVar7 = (**(code **)(**(int64_t **)(lVar13 + 0x148) + 0x10))
                              (*(int64_t **)(lVar13 + 0x148),&processed_var_88_ptr), lVar7 == 0)) {
          lVar7 = (**(code **)(**(int64_t **)(lVar13 + 0x148) + 8))
                            (*(int64_t **)(lVar13 + 0x148),0);
        }
        lVar6 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,3);
        *(int64_t *)(lVar6 + 0x20) = lVar7;
        *(int64_t *)(lVar6 + 0x28) = lVar13;
        puStack_8a8 = &system_data_buffer_ptr;
        uStack_890 = 0;
        puStack_8a0 = (int8_t *)0x0;
        uStack_898 = 0;
        CoreEngineDataBufferProcessor(&puStack_8a8,*(int32_t *)(param_2 + 0x10));
        if (0 < *(int *)(param_2 + 0x10)) {
          puVar11 = &system_buffer_ptr;
          if (*(void **)(param_2 + 8) != (void *)0x0) {
            puVar11 = *(void **)(param_2 + 8);
          }
                    // WARNING: Subroutine does not return
          memcpy(puStack_8a0,puVar11,(int64_t)(*(int *)(param_2 + 0x10) + 1));
        }
        if ((*(int64_t *)(param_2 + 8) != 0) && (uStack_898 = 0, puStack_8a0 != (int8_t *)0x0))
        {
          *puStack_8a0 = 0;
        }
        lVar7 = FUN_1802e5300(lVar13,&puStack_8a8);
        if (lVar7 == 0) {
          CoreEngineDataTransformer(&puStack_878,&puStack_8a8);
          puVar1 = (uint64_t *)(lVar13 + 0x150);
          lStack_858 = lVar6;
          lVar7 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x48,*(int8_t *)(lVar13 + 0x178));
          ppuStack_880 = (void **)(lVar7 + 0x20);
          CoreEngineDataTransformer(ppuStack_880,&puStack_878);
          *(int64_t *)(lVar7 + 0x40) = lStack_858;
          bVar3 = true;
          puVar4 = puVar1;
          puVar8 = *(uint64_t **)(lVar13 + 0x160);
          while (puVar8 != (uint64_t *)0x0) {
            puVar4 = puVar8;
            if (*(int *)(puVar8 + 6) == 0) {
              bVar3 = false;
LAB_180178010:
              puVar8 = (uint64_t *)*puVar8;
            }
            else {
              if (*(int *)(lVar7 + 0x30) == 0) {
                bVar3 = true;
              }
              else {
                pbVar9 = (byte *)puVar8[5];
                lVar16 = *(int64_t *)(lVar7 + 0x28) - (int64_t)pbVar9;
                do {
                  bVar2 = *pbVar9;
                  uVar10 = (uint)pbVar9[lVar16];
                  if (bVar2 != uVar10) break;
                  pbVar9 = pbVar9 + 1;
                } while (uVar10 != 0);
                bVar3 = 0 < (int)(bVar2 - uVar10);
              }
              if (!bVar3) goto LAB_180178010;
              puVar8 = (uint64_t *)puVar8[1];
            }
          }
          puVar8 = puVar4;
          if (bVar3) {
            if (puVar4 != *(uint64_t **)(lVar13 + 0x158)) {
              puVar8 = (uint64_t *)func_0x00018066b9a0(puVar4);
              goto LAB_180178030;
            }
          }
          else {
LAB_180178030:
            if (*(int *)(lVar7 + 0x30) == 0) {
LAB_180178104:
              FUN_18008ea80();
              ppuStack_880 = &puStack_878;
              puStack_878 = &system_data_buffer_ptr;
              if (lStack_870 != 0) {
                    // WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner();
              }
              lStack_870 = 0;
              uStack_860 = 0;
              puStack_878 = &system_state_ptr;
              goto LAB_180178154;
            }
            if (*(int *)(puVar8 + 6) != 0) {
              pbVar9 = *(byte **)(lVar7 + 0x28);
              lVar13 = puVar8[5] - (int64_t)pbVar9;
              do {
                bVar2 = *pbVar9;
                uVar10 = (uint)pbVar9[lVar13];
                if (bVar2 != uVar10) break;
                pbVar9 = pbVar9 + 1;
              } while (uVar10 != 0);
              if ((int)(bVar2 - uVar10) < 1) goto LAB_180178104;
            }
          }
          if (puVar4 == puVar1) goto LAB_1801780ed;
          if (*(int *)(puVar4 + 6) == 0) goto LAB_1801780a7;
          if (*(int *)(lVar7 + 0x30) == 0) goto LAB_1801780ed;
          pbVar9 = (byte *)puVar4[5];
          lVar14 = *(int64_t *)(lVar7 + 0x28) - (int64_t)pbVar9;
          goto LAB_180178090;
        }
LAB_180178154:
        puStack_8a8 = &system_data_buffer_ptr;
        if (puStack_8a0 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        puStack_8a0 = (int8_t *)0x0;
        uStack_890 = uStack_890 & 0xffffffff00000000;
        puStack_8a8 = &system_state_ptr;
        iVar5 = _Mtx_unlock(lVar14);
        plVar12 = plStack_888;
        if (iVar5 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar5);
          plVar12 = plStack_888;
        }
      }
      else {
        iVar5 = _Mtx_unlock(lVar14);
        if (iVar5 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar5);
        }
      }
    } while ((lVar6 == 0) && (plVar17 = plVar17 + 1, plVar17 != plVar12));
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_8c8);
  while (pbVar9 = pbVar9 + 1, uVar10 != 0) {
LAB_180178090:
    bVar2 = *pbVar9;
    uVar10 = (uint)pbVar9[lVar14];
    if (bVar2 != uVar10) break;
  }
  if ((int)(bVar2 - uVar10) < 1) {
LAB_1801780a7:
    uVar15 = 1;
  }
  else {
LAB_1801780ed:
    uVar15 = 0;
  }
                    // WARNING: Subroutine does not return
  SystemConfigProcessor(lVar7,puVar4,puVar1,uVar15);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



