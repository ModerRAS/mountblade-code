#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part194.c - 2 个函数
// 函数: void function_176de0(void)
void function_176de0(void)
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
  int8_t stack_array_3b8 [32];
  void *plocal_var_398;
  int8_t *plocal_var_390;
  int32_t local_var_388;
  uint64_t local_var_380;
  uint local_var_378;
  int iStack_374;
  int iStack_370;
  int64_t lStack_368;
  uint64_t ******pppppplocal_var_360;
  uint64_t ******pppppplocal_var_358;
  uint64_t ******pppppplocal_var_350;
  uint64_t local_var_348;
  uint64_t local_var_340;
  int32_t local_var_338;
  void *plocal_var_330;
  void *plocal_var_328;
  int32_t local_var_320;
  uint64_t local_var_318;
  int64_t lStack_310;
  uint64_t *plocal_var_308;
  uint64_t *plocal_var_300;
  uint64_t local_var_2f8;
  int32_t local_var_2f0;
  void *plocal_var_2e8;
  int64_t lStack_2e0;
  int32_t local_var_2d0;
  int64_t lStack_2c8;
  uint64_t local_var_2c0;
  int64_t lStack_2b8;
  uint64_t *plocal_var_2b0;
  uint64_t *plocal_var_2a8;
  uint64_t *plocal_var_2a0;
  uint64_t local_var_298;
  void *plocal_var_290;
  int8_t *plocal_var_288;
  int32_t local_var_280;
  int8_t stack_array_278 [16];
  uint64_t local_var_268;
  uint64_t local_var_48;
  int32_t local_var_40;
  int32_t local_var_3c;
  uint64_t local_var_38;
  local_var_298 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_3b8;
  local_var_378 = 0;
  lStack_310 = core_system_data_memory;
  *(uint64_t *)(core_system_data_memory + 0xf0) = 0;
  local_var_338 = 3;
  pppppplocal_var_360 = &pppppplocal_var_360;
  pppppplocal_var_358 = &pppppplocal_var_360;
  pppppplocal_var_350 = (uint64_t *******)0x0;
  local_var_348 = 0;
  local_var_340 = 0;
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
      plocal_var_398 = &system_data_buffer_ptr;
      local_var_380 = 0;
      plocal_var_390 = (int8_t *)0x0;
      local_var_388 = 0;
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
          plocal_var_390 = puVar9;
          uVar7 = CoreEngineSystemCleanup(puVar9);
          local_var_380 = CONCAT44(local_var_380._4_4_,uVar7);
// WARNING: Subroutine does not return
          memcpy(puVar9,puVar11,iVar19);
        }
      }
      local_var_388 = 0;
      function_175f80(&system_data_buffer_ptr,&plocal_var_2e8,&plocal_var_398);
      plocal_var_390 = (int8_t *)0x0;
      local_var_380 = local_var_380 & 0xffffffff00000000;
      plocal_var_398 = &system_state_ptr;
      plocal_var_308 = (uint64_t *)0x0;
      plocal_var_300 = (uint64_t *)0x0;
      local_var_2f8 = 0;
      local_var_2f0 = 3;
      plocal_var_290 = &system_config_ptr;
      plocal_var_288 = stack_array_278;
      stack_array_278[0] = 0;
      local_var_280 = 4;
      strcpy_s(stack_array_278,0x10,&processed_var_4276_ptr);
      CoreEngineController(&plocal_var_2e8,&plocal_var_308,&plocal_var_290);
      plocal_var_290 = &system_state_ptr;
      iStack_374 = 0;
      lStack_2c8 = 0;
      local_var_2c0 = (int64_t)plocal_var_300 - (int64_t)plocal_var_308 >> 5;
      puVar2 = plocal_var_308;
      puVar3 = plocal_var_308;
      puVar4 = plocal_var_300;
      if (local_var_2c0 != 0) {
        do {
          lVar20 = lStack_2c8;
          puVar2 = plocal_var_308;
          iVar8 = iStack_374;
          puVar16 = &system_buffer_ptr;
          if ((void *)plocal_var_308[lStack_2c8 * 4 + 1] != (void *)0x0) {
            puVar16 = (void *)plocal_var_308[lStack_2c8 * 4 + 1];
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
            memcpy(&local_var_268,puVar16,(int64_t)puVar11 - (int64_t)puVar16);
          }
// WARNING: Ignoring partial resolution of indirect
          local_var_268._0_1_ = 0;
          uVar15 = 0;
          uVar7 = 0;
          plocal_var_330 = &system_data_buffer_ptr;
          local_var_318 = 0;
          plocal_var_328 = (void *)0x0;
          local_var_320 = 0;
          lVar10 = -1;
          do {
            lVar17 = lVar10;
            lVar10 = lVar17 + 1;
          } while (*(char *)((int64_t)&local_var_268 + lVar17 + 1) != '\0');
          if ((int)(lVar17 + 1) != 0) {
            iVar19 = (int)lVar17 + 2;
            iVar8 = iVar19;
            if (iVar19 < 0x10) {
              iVar8 = 0x10;
            }
            plocal_var_328 = (void *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar8,0x13);
            *plocal_var_328 = 0;
            uVar22 = (uint64_t)plocal_var_328 & 0xffffffffffc00000;
            if (uVar22 != 0) {
              lVar20 = ((int64_t)plocal_var_328 - uVar22 >> 0x10) * 0x50 + 0x80 + uVar22;
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
                uVar15 = uVar15 - (int)(((int64_t)plocal_var_328 -
                                        (((int64_t)((int64_t)puVar21 + (-0x80 - uVar22)) / 0x50) *
                                         0x10000 + uVar22)) % uVar23);
              }
            }
            local_var_318 = CONCAT44(local_var_318._4_4_,uVar15);
// WARNING: Subroutine does not return
            memcpy(plocal_var_328,&local_var_268,iVar19);
          }
          local_var_320 = 0;
          pppppppuVar12 = &pppppplocal_var_360;
          for (pppppppuVar1 = (uint64_t *******)pppppplocal_var_350;
              pppppppuVar1 != (uint64_t *******)0x0;
              pppppppuVar1 = (uint64_t *******)pppppppuVar1[1]) {
            pppppppuVar12 = pppppppuVar1;
          }
          if ((pppppppuVar12 == &pppppplocal_var_360) ||
             (lVar10 = lVar20, *(int *)(pppppppuVar12 + 6) != 0)) {
            if ((pppppppuVar12 != (uint64_t *******)pppppplocal_var_360) &&
               (pppppppuVar12 != &pppppplocal_var_360)) {
              SystemFunction_00018066bd70(pppppppuVar12);
            }
            bVar26 = true;
            pppppppuVar12 = &pppppplocal_var_360;
            pppppppuVar1 = (uint64_t *******)pppppplocal_var_350;
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
              if (pppppppuVar12 == (uint64_t *******)pppppplocal_var_358) {
                if ((pppppppuVar12 != &pppppplocal_var_360) && (*(int *)(pppppppuVar12 + 6) == 0)) {
                  uVar7 = 1;
                }
                lVar20 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x60,(int8_t)local_var_338);
                plocal_var_2b0 = (uint64_t *)(lVar20 + 0x20);
                *plocal_var_2b0 = &system_state_ptr;
                *(uint64_t *)(lVar20 + 0x28) = 0;
                *(int32_t *)(lVar20 + 0x30) = 0;
                *plocal_var_2b0 = &system_data_buffer_ptr;
                *(uint64_t *)(lVar20 + 0x38) = 0;
                *(uint64_t *)(lVar20 + 0x28) = 0;
                *(int32_t *)(lVar20 + 0x30) = 0;
                plocal_var_2a8 = plocal_var_2b0;
                CoreEngineDataBufferProcessor(plocal_var_2b0,0);
                plocal_var_2a0 = (uint64_t *)(lVar20 + 0x40);
                *plocal_var_2a0 = &system_state_ptr;
                *(uint64_t *)(lVar20 + 0x48) = 0;
                *(int32_t *)(lVar20 + 0x50) = 0;
                *plocal_var_2a0 = &system_data_buffer_ptr;
                *(uint64_t *)(lVar20 + 0x58) = 0;
                *(uint64_t *)(lVar20 + 0x48) = 0;
                *(int32_t *)(lVar20 + 0x50) = 0;
// WARNING: Subroutine does not return
                SystemConfigProcessor(lVar20,pppppppuVar12,&pppppplocal_var_360,uVar7);
              }
              pppppppuVar12 = (uint64_t *******)SystemFunction_00018066b9a0(pppppppuVar12);
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
          plocal_var_328 = (void *)0x0;
          local_var_318 = local_var_318 & 0xffffffff00000000;
          plocal_var_330 = &system_state_ptr;
          iStack_374 = iVar8 + 1;
          lStack_2c8 = lVar10 + 1;
          puVar2 = plocal_var_308;
          puVar3 = plocal_var_308;
          puVar4 = plocal_var_300;
          iVar8 = iStack_370;
          lVar10 = lStack_368;
        } while ((uint64_t)(int64_t)iStack_374 < local_var_2c0);
      }
      for (; puVar6 = plocal_var_300, puVar5 = plocal_var_308, puVar2 != plocal_var_300; puVar2 = puVar2 + 4)
      {
        plocal_var_308 = puVar3;
        plocal_var_300 = puVar4;
        (**(code **)*puVar2)(puVar2,0);
        puVar3 = plocal_var_308;
        puVar4 = plocal_var_300;
        plocal_var_300 = puVar6;
        plocal_var_308 = puVar5;
      }
      if (plocal_var_308 != (uint64_t *)0x0) {
        plocal_var_308 = puVar3;
        plocal_var_300 = puVar4;
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(puVar5);
      }
      plocal_var_2e8 = &system_data_buffer_ptr;
      if (lStack_2e0 != 0) {
        plocal_var_308 = puVar3;
        plocal_var_300 = puVar4;
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lStack_2e0 = 0;
      local_var_2d0 = 0;
      plocal_var_2e8 = &system_state_ptr;
      iStack_370 = iVar8 + 1;
      lStack_368 = lVar10 + 1;
      lVar20 = *(int64_t *)(lStack_2b8 + 0x8a8);
      plocal_var_308 = puVar3;
      plocal_var_300 = puVar4;
    } while ((uint64_t)(int64_t)iStack_370 <
             (uint64_t)(*(int64_t *)(lStack_2b8 + 0x8b0) - lVar20 >> 5));
  }
  local_var_48 = 0x3f8000003f800000;
  local_var_40 = 0x3f000000;
  local_var_3c = 0;
  if ((uint64_t *******)pppppplocal_var_358 != &pppppplocal_var_360) {
    lVar20 = lStack_310 + 0x150;
    pppppppuVar12 = (uint64_t *******)pppppplocal_var_358;
    lVar10 = lStack_310;
    lStack_368 = lVar20;
    do {
      plVar13 = (int64_t *)HighFreq_AnimationSystem1(lVar20,&plocal_var_2a0,pppppppuVar12 + 4);
      if (*plVar13 != lVar20) {
        bVar26 = false;
        uVar23 = 0;
        lVar17 = *(int64_t *)(lVar10 + 0xc0);
        uVar22 = uVar23;
        if (*(int64_t *)(lVar10 + 200) - lVar17 >> 3 != 0) {
          do {
            lVar20 = *(int64_t *)(lVar17 + uVar23);
            plocal_var_398 = &system_data_buffer_ptr;
            local_var_380 = 0;
            plocal_var_390 = (int8_t *)0x0;
            local_var_388 = 0;
            if (*(int *)(lVar20 + 0xb8) != 0) {
              iVar8 = *(int *)(lVar20 + 0xb8) + 1;
              if (iVar8 < 0x10) {
                iVar8 = 0x10;
              }
              plocal_var_390 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar8,0x13);
              *plocal_var_390 = 0;
              uVar24 = (uint64_t)plocal_var_390 & 0xffffffffffc00000;
              if (uVar24 == 0) {
                uVar15 = 0;
              }
              else {
                lVar10 = ((int64_t)plocal_var_390 - uVar24 >> 0x10) * 0x50 + 0x80 + uVar24;
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
                  uVar15 = uVar15 - (int)(((int64_t)plocal_var_390 -
                                          (((int64_t)((int64_t)puVar21 + (-0x80 - uVar24)) / 0x50)
                                           * 0x10000 + uVar24)) % uVar25);
                }
              }
              local_var_380 = CONCAT44(local_var_380._4_4_,uVar15);
              if (*(int *)(lVar20 + 0xb8) != 0) {
// WARNING: Subroutine does not return
                memcpy(plocal_var_390,*(uint64_t *)(lVar20 + 0xb0),*(int *)(lVar20 + 0xb8) + 1);
              }
            }
            if (*(int64_t *)(lVar20 + 0xb0) != 0) {
              local_var_388 = 0;
              if (plocal_var_390 != (int8_t *)0x0) {
                *plocal_var_390 = 0;
              }
              local_var_380 = local_var_380 & 0xffffffff;
            }
            local_var_378 = local_var_378 & 0xfffffffd;
            plocal_var_398 = &system_data_buffer_ptr;
            if (plocal_var_390 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner(plocal_var_390);
            }
            plocal_var_390 = (int8_t *)0x0;
            local_var_380 = local_var_380 & 0xffffffff00000000;
            plocal_var_398 = &system_state_ptr;
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
          uVar14 = SystemCore_EncryptionEngine(&local_var_268,pppppppuVar12 + 8);
          SystemCore_EncryptionEngine0(&plocal_var_330,uVar14);
          local_var_268 = &system_state_ptr;
          ppppppuVar18 = (uint64_t ******)&system_buffer_ptr;
          if (pppppppuVar12[5] != (uint64_t ******)0x0) {
            ppppppuVar18 = pppppppuVar12[5];
          }
          CoreMemoryPoolValidator(&plocal_var_308,ppppppuVar18);
          puVar16 = &system_buffer_ptr;
          if (plocal_var_328 != (void *)0x0) {
            puVar16 = plocal_var_328;
          }
          CoreMemoryPoolValidator(&plocal_var_2e8,puVar16);
          function_1762b0(lVar10,&plocal_var_2e8,&plocal_var_308,&local_var_48);
          plocal_var_2e8 = &system_data_buffer_ptr;
          if (lStack_2e0 != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          lStack_2e0 = 0;
          local_var_2d0 = 0;
          plocal_var_2e8 = &system_state_ptr;
          plocal_var_308 = (uint64_t *)&system_data_buffer_ptr;
          if (plocal_var_300 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          plocal_var_300 = (uint64_t *)0x0;
          local_var_2f0 = 0;
          plocal_var_308 = (uint64_t *)&system_state_ptr;
          plocal_var_330 = &system_data_buffer_ptr;
          if (plocal_var_328 != (void *)0x0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          plocal_var_328 = (void *)0x0;
          local_var_318 = local_var_318 & 0xffffffff00000000;
          plocal_var_330 = &system_state_ptr;
        }
      }
      pppppppuVar12 = (uint64_t *******)SystemFunction_00018066bd70(pppppppuVar12);
    } while (pppppppuVar12 != &pppppplocal_var_360);
  }
  function_058020(&pppppplocal_var_360);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_3b8);
}
int64_t function_177c00(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
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
  void *plocal_var_48;
  char *pcStack_40;
  int iStack_38;
  uint64_t local_var_30;
  uVar9 = 0xfffffffffffffffe;
  plVar6 = *(int64_t **)(param_1 + 0xc0);
  plVar3 = *(int64_t **)(param_1 + 200);
  do {
    if (plVar6 == plVar3) {
      return 0;
    }
    uVar8 = 0;
    lVar4 = *plVar6;
    plocal_var_48 = &system_data_buffer_ptr;
    local_var_30 = 0;
    pcStack_40 = (char *)0x0;
    iStack_38 = 0;
    CoreEngineDataBufferProcessor(&plocal_var_48,*(int32_t *)(lVar4 + 0xb8));
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
      local_var_30 = local_var_30 & 0xffffffff;
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
    plocal_var_48 = &system_data_buffer_ptr;
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
// 函数: void function_177da0(uint64_t param_1,int64_t param_2)
void function_177da0(uint64_t param_1,int64_t param_2)
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
  int8_t stack_array_8c8 [32];
  void *plocal_var_8a8;
  int8_t *plocal_var_8a0;
  int32_t local_var_898;
  uint64_t local_var_890;
  int64_t *plStack_888;
  void **pplocal_var_880;
  void *plocal_var_878;
  int64_t lStack_870;
  int32_t local_var_860;
  int64_t lStack_858;
  uint64_t local_var_850;
  int64_t lStack_848;
  int8_t stack_array_838 [2048];
  uint64_t local_var_38;
  local_var_850 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_8c8;
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
      lVar6 = function_2e5300(lVar13,param_2);
      if (lVar6 == 0) {
        puVar11 = &system_buffer_ptr;
        if (*(void **)(param_2 + 8) != (void *)0x0) {
          puVar11 = *(void **)(param_2 + 8);
        }
        mbstowcs(stack_array_838,puVar11,(int64_t)(*(int *)(param_2 + 0x10) + 1));
        lVar7 = (**(code **)(**(int64_t **)(lVar13 + 0x148) + 0x10))
                          (*(int64_t **)(lVar13 + 0x148),stack_array_838);
        if ((lVar7 == 0) &&
           (lVar7 = (**(code **)(**(int64_t **)(lVar13 + 0x148) + 0x10))
                              (*(int64_t **)(lVar13 + 0x148),&processed_var_88_ptr), lVar7 == 0)) {
          lVar7 = (**(code **)(**(int64_t **)(lVar13 + 0x148) + 8))
                            (*(int64_t **)(lVar13 + 0x148),0);
        }
        lVar6 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,3);
        *(int64_t *)(lVar6 + 0x20) = lVar7;
        *(int64_t *)(lVar6 + 0x28) = lVar13;
        plocal_var_8a8 = &system_data_buffer_ptr;
        local_var_890 = 0;
        plocal_var_8a0 = (int8_t *)0x0;
        local_var_898 = 0;
        CoreEngineDataBufferProcessor(&plocal_var_8a8,*(int32_t *)(param_2 + 0x10));
        if (0 < *(int *)(param_2 + 0x10)) {
          puVar11 = &system_buffer_ptr;
          if (*(void **)(param_2 + 8) != (void *)0x0) {
            puVar11 = *(void **)(param_2 + 8);
          }
// WARNING: Subroutine does not return
          memcpy(plocal_var_8a0,puVar11,(int64_t)(*(int *)(param_2 + 0x10) + 1));
        }
        if ((*(int64_t *)(param_2 + 8) != 0) && (local_var_898 = 0, plocal_var_8a0 != (int8_t *)0x0))
        {
          *plocal_var_8a0 = 0;
        }
        lVar7 = function_2e5300(lVar13,&plocal_var_8a8);
        if (lVar7 == 0) {
          CoreEngineDataTransformer(&plocal_var_878,&plocal_var_8a8);
          puVar1 = (uint64_t *)(lVar13 + 0x150);
          lStack_858 = lVar6;
          lVar7 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x48,*(int8_t *)(lVar13 + 0x178));
          pplocal_var_880 = (void **)(lVar7 + 0x20);
          CoreEngineDataTransformer(pplocal_var_880,&plocal_var_878);
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
              puVar8 = (uint64_t *)SystemFunction_00018066b9a0(puVar4);
              goto LAB_180178030;
            }
          }
          else {
LAB_180178030:
            if (*(int *)(lVar7 + 0x30) == 0) {
LAB_180178104:
              function_08ea80();
              pplocal_var_880 = &plocal_var_878;
              plocal_var_878 = &system_data_buffer_ptr;
              if (lStack_870 != 0) {
// WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner();
              }
              lStack_870 = 0;
              local_var_860 = 0;
              plocal_var_878 = &system_state_ptr;
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
        plocal_var_8a8 = &system_data_buffer_ptr;
        if (plocal_var_8a0 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        plocal_var_8a0 = (int8_t *)0x0;
        local_var_890 = local_var_890 & 0xffffffff00000000;
        plocal_var_8a8 = &system_state_ptr;
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
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_8c8);
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