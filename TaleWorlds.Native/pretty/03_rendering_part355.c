#define SystemInitializer System_Initializer2  // 系统初始化器
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part355.c - 2 个函数
// 函数: void function_45db70(uint64_t param_1)
void function_45db70(uint64_t param_1)
{
  byte bVar1;
  uint64_t *******pppppppuVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int32_t uVar8;
  int iVar9;
  int8_t *puVar10;
  void *puVar11;
  uint64_t *******pppppppuVar12;
  int64_t *plVar13;
  int64_t lVar14;
  int64_t lVar15;
  uint uVar16;
  void *puVar17;
  byte *pbVar18;
  uint64_t ******ppppppuVar19;
  int iVar20;
  int64_t lVar21;
  uint *puVar22;
  int64_t lVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  bool bVar29;
  int32_t extraout_XMM0_Da;
  char acStackX_10 [8];
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
  uint64_t local_var_30;
  lVar21 = render_system_data_memory + 0x150;
  local_var_30 = 0x18045dbab;
  lVar14 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x40,*(int8_t *)(render_system_data_memory + 0x178));
  local_var_30 = 0x18045dbba;
  CoreMemoryPoolValidator(lVar14 + 0x20,param_1);
  local_var_30 = 0x18045dbcb;
  lVar15 = SystemCore_SecurityValidator(lVar21,acStackX_10,lVar14 + 0x20);
  if (acStackX_10[0] == '\0') {
    local_var_30 = 0x18045dc2f;
    function_05d1f0(extraout_XMM0_Da,lVar14);
    local_var_298 = 0xfffffffffffffffe;
    local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_3b8;
    local_var_378 = 0;
    lStack_310 = render_system_data_memory;
    *(uint64_t *)(render_system_data_memory + 0xf0) = 0;
    local_var_338 = 3;
    pppppplocal_var_360 = &pppppplocal_var_360;
    pppppplocal_var_358 = &pppppplocal_var_360;
    pppppplocal_var_350 = (uint64_t *******)0x0;
    local_var_348 = 0;
    local_var_340 = 0;
    lStack_2b8 = *system_main_module_state;
    iStack_370 = 0;
    lVar14 = *(int64_t *)(lStack_2b8 + 0x8a8);
    if (*(int64_t *)(lStack_2b8 + 0x8b0) - lVar14 >> 5 != 0) {
      lStack_368 = 0;
      do {
        lVar15 = lStack_368;
        iVar9 = iStack_370;
        puVar17 = *(void **)(lStack_368 * 0x20 + 8 + lVar14);
        puVar11 = &system_buffer_ptr;
        if (puVar17 != (void *)0x0) {
          puVar11 = puVar17;
        }
        plocal_var_398 = &system_data_buffer_ptr;
        local_var_380 = 0;
        plocal_var_390 = (int8_t *)0x0;
        local_var_388 = 0;
        if (puVar11 != (void *)0x0) {
          lVar14 = -1;
          do {
            lVar21 = lVar14;
            lVar14 = lVar21 + 1;
          } while (puVar11[lVar14] != '\0');
          if ((int)lVar14 != 0) {
            iVar20 = (int)lVar21 + 2;
            iVar9 = iVar20;
            if (iVar20 < 0x10) {
              iVar9 = 0x10;
            }
            puVar10 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar9,0x13);
            *puVar10 = 0;
            plocal_var_390 = puVar10;
            uVar8 = CoreMemoryPoolCleaner(puVar10);
            local_var_380 = CONCAT44(local_var_380._4_4_,uVar8);
// WARNING: Subroutine does not return
            memcpy(puVar10,puVar11,iVar20);
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
        function_62cb00(&plocal_var_2e8,&plocal_var_308,&plocal_var_290);
        plocal_var_290 = &system_state_ptr;
        iStack_374 = 0;
        lStack_2c8 = 0;
        local_var_2c0 = (int64_t)plocal_var_300 - (int64_t)plocal_var_308 >> 5;
        puVar3 = plocal_var_308;
        puVar4 = plocal_var_308;
        puVar5 = plocal_var_300;
        if (local_var_2c0 != 0) {
          do {
            lVar14 = lStack_2c8;
            puVar3 = plocal_var_308;
            iVar9 = iStack_374;
            puVar17 = &system_buffer_ptr;
            if ((void *)plocal_var_308[lStack_2c8 * 4 + 1] != (void *)0x0) {
              puVar17 = (void *)plocal_var_308[lStack_2c8 * 4 + 1];
            }
            lVar15 = strrchr(puVar17,0x2f);
            if (lVar15 == 0) {
              puVar17 = &system_buffer_ptr;
              if ((void *)puVar3[lVar14 * 4 + 1] != (void *)0x0) {
                puVar17 = (void *)puVar3[lVar14 * 4 + 1];
              }
            }
            else {
              puVar17 = (void *)(lVar15 + 1);
            }
            puVar11 = (void *)strchr(puVar17,0x2e);
            if (puVar11 == (void *)0x0) {
              puVar11 = &system_buffer_ptr;
              if ((void *)puVar3[lVar14 * 4 + 1] != (void *)0x0) {
                puVar11 = (void *)puVar3[lVar14 * 4 + 1];
              }
              puVar11 = puVar11 + *(int *)(puVar3 + lVar14 * 4 + 2);
            }
            if ((int64_t)puVar11 - (int64_t)puVar17 != 0) {
// WARNING: Subroutine does not return
              memcpy(&local_var_268,puVar17,(int64_t)puVar11 - (int64_t)puVar17);
            }
// WARNING: Ignoring partial resolution of indirect
            local_var_268._0_1_ = 0;
            uVar16 = 0;
            uVar8 = 0;
            plocal_var_330 = &system_data_buffer_ptr;
            local_var_318 = 0;
            plocal_var_328 = (void *)0x0;
            local_var_320 = 0;
            lVar15 = -1;
            do {
              lVar21 = lVar15;
              lVar15 = lVar21 + 1;
            } while (*(char *)((int64_t)&local_var_268 + lVar21 + 1) != '\0');
            if ((int)(lVar21 + 1) != 0) {
              iVar20 = (int)lVar21 + 2;
              iVar9 = iVar20;
              if (iVar20 < 0x10) {
                iVar9 = 0x10;
              }
              plocal_var_328 = (void *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar9,0x13);
              *plocal_var_328 = 0;
              uVar24 = (uint64_t)plocal_var_328 & 0xffffffffffc00000;
              if (uVar24 != 0) {
                lVar14 = ((int64_t)plocal_var_328 - uVar24 >> 0x10) * 0x50 + 0x80 + uVar24;
                puVar22 = (uint *)(lVar14 - (uint64_t)*(uint *)(lVar14 + 4));
                if ((*(byte *)((int64_t)puVar22 + 0xe) & 2) == 0) {
                  uVar16 = puVar22[7];
                  if (0x3ffffff < uVar16) {
                    uVar16 = *puVar22 << 0x10;
                  }
                }
                else {
                  uVar16 = puVar22[7];
                  if (uVar16 < 0x4000000) {
                    uVar25 = (uint64_t)uVar16;
                  }
                  else {
                    uVar25 = (uint64_t)*puVar22 << 0x10;
                  }
                  if (0x3ffffff < uVar16) {
                    uVar16 = *puVar22 << 0x10;
                  }
                  uVar16 = uVar16 - (int)(((int64_t)plocal_var_328 -
                                          (((int64_t)((int64_t)puVar22 + (-0x80 - uVar24)) / 0x50)
                                           * 0x10000 + uVar24)) % uVar25);
                }
              }
              local_var_318 = CONCAT44(local_var_318._4_4_,uVar16);
// WARNING: Subroutine does not return
              memcpy(plocal_var_328,&local_var_268,iVar20);
            }
            local_var_320 = 0;
            pppppppuVar12 = &pppppplocal_var_360;
            for (pppppppuVar2 = (uint64_t *******)pppppplocal_var_350;
                pppppppuVar2 != (uint64_t *******)0x0;
                pppppppuVar2 = (uint64_t *******)pppppppuVar2[1]) {
              pppppppuVar12 = pppppppuVar2;
            }
            if ((pppppppuVar12 == &pppppplocal_var_360) ||
               (lVar15 = lVar14, *(int *)(pppppppuVar12 + 6) != 0)) {
              if ((pppppppuVar12 != (uint64_t *******)pppppplocal_var_360) &&
                 (pppppppuVar12 != &pppppplocal_var_360)) {
                Function_7bfb2422(pppppppuVar12);
              }
              bVar29 = true;
              pppppppuVar12 = &pppppplocal_var_360;
              pppppppuVar2 = (uint64_t *******)pppppplocal_var_350;
              while (pppppppuVar2 != (uint64_t *******)0x0) {
                bVar29 = *(int *)(pppppppuVar2 + 6) != 0;
                pppppppuVar12 = pppppppuVar2;
                if (bVar29) {
                  pppppppuVar2 = (uint64_t *******)pppppppuVar2[1];
                }
                else {
                  pppppppuVar2 = (uint64_t *******)*pppppppuVar2;
                }
              }
              lVar15 = lStack_2c8;
              iVar9 = iStack_374;
              if (bVar29) {
                if (pppppppuVar12 == (uint64_t *******)pppppplocal_var_358) {
                  if ((pppppppuVar12 != &pppppplocal_var_360) && (*(int *)(pppppppuVar12 + 6) == 0)) {
                    uVar8 = 1;
                  }
                  lVar14 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x60,(int8_t)local_var_338);
                  plocal_var_2b0 = (uint64_t *)(lVar14 + 0x20);
                  *plocal_var_2b0 = &system_state_ptr;
                  *(uint64_t *)(lVar14 + 0x28) = 0;
                  *(int32_t *)(lVar14 + 0x30) = 0;
                  *plocal_var_2b0 = &system_data_buffer_ptr;
                  *(uint64_t *)(lVar14 + 0x38) = 0;
                  *(uint64_t *)(lVar14 + 0x28) = 0;
                  *(int32_t *)(lVar14 + 0x30) = 0;
                  plocal_var_2a8 = plocal_var_2b0;
                  CoreMemoryPoolProcessor(plocal_var_2b0,0);
                  plocal_var_2a0 = (uint64_t *)(lVar14 + 0x40);
                  *plocal_var_2a0 = &system_state_ptr;
                  *(uint64_t *)(lVar14 + 0x48) = 0;
                  *(int32_t *)(lVar14 + 0x50) = 0;
                  *plocal_var_2a0 = &system_data_buffer_ptr;
                  *(uint64_t *)(lVar14 + 0x58) = 0;
                  *(uint64_t *)(lVar14 + 0x48) = 0;
                  *(int32_t *)(lVar14 + 0x50) = 0;
// WARNING: Subroutine does not return
                  SystemStateController(lVar14,pppppppuVar12,&pppppplocal_var_360,uVar8);
                }
                pppppppuVar12 = (uint64_t *******)Function_e2d50782(pppppppuVar12);
                lVar15 = lStack_2c8;
                iVar9 = iStack_374;
              }
            }
            uVar16 = *(uint *)(puVar3 + lVar14 * 4 + 2);
            uVar24 = (uint64_t)uVar16;
            if (puVar3[lVar14 * 4 + 1] != 0) {
              CoreMemoryPoolProcessor(pppppppuVar12 + 8,uVar24);
            }
            if (uVar16 != 0) {
// WARNING: Subroutine does not return
              memcpy(pppppppuVar12[9],puVar3[lVar14 * 4 + 1],uVar24);
            }
            *(int32_t *)(pppppppuVar12 + 10) = 0;
            if (pppppppuVar12[9] != (uint64_t ******)0x0) {
              *(int8_t *)(uVar24 + (int64_t)pppppppuVar12[9]) = 0;
            }
            *(int32_t *)((int64_t)pppppppuVar12 + 0x5c) =
                 *(int32_t *)((int64_t)puVar3 + lVar14 * 0x20 + 0x1c);
            plocal_var_328 = (void *)0x0;
            local_var_318 = local_var_318 & 0xffffffff00000000;
            plocal_var_330 = &system_state_ptr;
            iStack_374 = iVar9 + 1;
            lStack_2c8 = lVar15 + 1;
            puVar3 = plocal_var_308;
            puVar4 = plocal_var_308;
            puVar5 = plocal_var_300;
            iVar9 = iStack_370;
            lVar15 = lStack_368;
          } while ((uint64_t)(int64_t)iStack_374 < local_var_2c0);
        }
        for (; puVar7 = plocal_var_300, puVar6 = plocal_var_308, puVar3 != plocal_var_300;
            puVar3 = puVar3 + 4) {
          plocal_var_308 = puVar4;
          plocal_var_300 = puVar5;
          (**(code **)*puVar3)(puVar3,0);
          puVar4 = plocal_var_308;
          puVar5 = plocal_var_300;
          plocal_var_300 = puVar7;
          plocal_var_308 = puVar6;
        }
        if (plocal_var_308 != (uint64_t *)0x0) {
          plocal_var_308 = puVar4;
          plocal_var_300 = puVar5;
// WARNING: Subroutine does not return
          CoreMemoryPoolInitializer(puVar6);
        }
        plocal_var_2e8 = &system_data_buffer_ptr;
        if (lStack_2e0 != 0) {
          plocal_var_308 = puVar4;
          plocal_var_300 = puVar5;
// WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        lStack_2e0 = 0;
        local_var_2d0 = 0;
        plocal_var_2e8 = &system_state_ptr;
        iStack_370 = iVar9 + 1;
        lStack_368 = lVar15 + 1;
        lVar14 = *(int64_t *)(lStack_2b8 + 0x8a8);
        plocal_var_308 = puVar4;
        plocal_var_300 = puVar5;
      } while ((uint64_t)(int64_t)iStack_370 <
               (uint64_t)(*(int64_t *)(lStack_2b8 + 0x8b0) - lVar14 >> 5));
    }
    local_var_48 = 0x3f8000003f800000;
    local_var_40 = 0x3f000000;
    local_var_3c = 0;
    if ((uint64_t *******)pppppplocal_var_358 != &pppppplocal_var_360) {
      lVar14 = lStack_310 + 0x150;
      pppppppuVar12 = (uint64_t *******)pppppplocal_var_358;
      lVar15 = lStack_310;
      lStack_368 = lVar14;
      do {
        plVar13 = (int64_t *)HighFreq_AnimationSystem1(lVar14,&plocal_var_2a0,pppppppuVar12 + 4);
        if (*plVar13 != lVar14) {
          bVar29 = false;
          uVar25 = 0;
          lVar21 = *(int64_t *)(lVar15 + 0xc0);
          uVar24 = uVar25;
          if (*(int64_t *)(lVar15 + 200) - lVar21 >> 3 != 0) {
            do {
              lVar14 = *(int64_t *)(lVar21 + uVar25);
              plocal_var_398 = &system_data_buffer_ptr;
              local_var_380 = 0;
              plocal_var_390 = (int8_t *)0x0;
              local_var_388 = 0;
              if (*(int *)(lVar14 + 0xb8) != 0) {
                iVar9 = *(int *)(lVar14 + 0xb8) + 1;
                if (iVar9 < 0x10) {
                  iVar9 = 0x10;
                }
                plocal_var_390 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar9,0x13);
                *plocal_var_390 = 0;
                uVar26 = (uint64_t)plocal_var_390 & 0xffffffffffc00000;
                if (uVar26 == 0) {
                  uVar16 = 0;
                }
                else {
                  lVar15 = ((int64_t)plocal_var_390 - uVar26 >> 0x10) * 0x50 + 0x80 + uVar26;
                  puVar22 = (uint *)(lVar15 - (uint64_t)*(uint *)(lVar15 + 4));
                  if ((*(byte *)((int64_t)puVar22 + 0xe) & 2) == 0) {
                    uVar16 = puVar22[7];
                    if (0x3ffffff < uVar16) {
                      uVar16 = *puVar22 << 0x10;
                    }
                  }
                  else {
                    uVar16 = puVar22[7];
                    if (uVar16 < 0x4000000) {
                      uVar27 = (uint64_t)uVar16;
                    }
                    else {
                      uVar27 = (uint64_t)*puVar22 << 0x10;
                    }
                    if (0x3ffffff < uVar16) {
                      uVar16 = *puVar22 << 0x10;
                    }
                    uVar16 = uVar16 - (int)(((int64_t)plocal_var_390 -
                                            (((int64_t)((int64_t)puVar22 + (-0x80 - uVar26)) /
                                             0x50) * 0x10000 + uVar26)) % uVar27);
                  }
                }
                local_var_380 = CONCAT44(local_var_380._4_4_,uVar16);
                if (*(int *)(lVar14 + 0xb8) != 0) {
// WARNING: Subroutine does not return
                  memcpy(plocal_var_390,*(uint64_t *)(lVar14 + 0xb0),*(int *)(lVar14 + 0xb8) + 1);
                }
              }
              if (*(int64_t *)(lVar14 + 0xb0) != 0) {
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
                CoreMemoryPoolInitializer(plocal_var_390);
              }
              plocal_var_390 = (int8_t *)0x0;
              local_var_380 = local_var_380 & 0xffffffff00000000;
              plocal_var_398 = &system_state_ptr;
              lVar15 = lStack_310;
              lVar14 = lStack_368;
              if (*(int *)(pppppppuVar12 + 6) == 0) {
                bVar29 = true;
                break;
              }
              uVar16 = (int)uVar24 + 1;
              uVar24 = (uint64_t)uVar16;
              uVar25 = uVar25 + 8;
              lVar21 = *(int64_t *)(lStack_310 + 0xc0);
            } while ((uint64_t)(int64_t)(int)uVar16 <
                     (uint64_t)(*(int64_t *)(lStack_310 + 200) - lVar21 >> 3));
          }
          if (!bVar29) {
            uVar28 = SystemCore_EncryptionEngine(&local_var_268,pppppppuVar12 + 8);
            SystemCore_EncryptionEngine0(&plocal_var_330,uVar28);
            local_var_268 = &system_state_ptr;
            ppppppuVar19 = (uint64_t ******)&system_buffer_ptr;
            if (pppppppuVar12[5] != (uint64_t ******)0x0) {
              ppppppuVar19 = pppppppuVar12[5];
            }
            CoreMemoryPoolValidator(&plocal_var_308,ppppppuVar19);
            puVar17 = &system_buffer_ptr;
            if (plocal_var_328 != (void *)0x0) {
              puVar17 = plocal_var_328;
            }
            CoreMemoryPoolValidator(&plocal_var_2e8,puVar17);
            function_1762b0(lVar15,&plocal_var_2e8,&plocal_var_308,&local_var_48);
            plocal_var_2e8 = &system_data_buffer_ptr;
            if (lStack_2e0 != 0) {
// WARNING: Subroutine does not return
              CoreMemoryPoolInitializer();
            }
            lStack_2e0 = 0;
            local_var_2d0 = 0;
            plocal_var_2e8 = &system_state_ptr;
            plocal_var_308 = (uint64_t *)&system_data_buffer_ptr;
            if (plocal_var_300 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
              CoreMemoryPoolInitializer();
            }
            plocal_var_300 = (uint64_t *)0x0;
            local_var_2f0 = 0;
            plocal_var_308 = (uint64_t *)&system_state_ptr;
            plocal_var_330 = &system_data_buffer_ptr;
            if (plocal_var_328 != (void *)0x0) {
// WARNING: Subroutine does not return
              CoreMemoryPoolInitializer();
            }
            plocal_var_328 = (void *)0x0;
            local_var_318 = local_var_318 & 0xffffffff00000000;
            plocal_var_330 = &system_state_ptr;
          }
        }
        pppppppuVar12 = (uint64_t *******)Function_7bfb2422(pppppppuVar12);
      } while (pppppppuVar12 != &pppppplocal_var_360);
    }
    function_058020(&pppppplocal_var_360);
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_3b8);
  }
  if (lVar15 != lVar21) {
    if (*(int *)(lVar15 + 0x30) == 0) {
LAB_18045dc08:
      uVar28 = 1;
      goto LAB_18045dc13;
    }
    if (*(int *)(lVar14 + 0x30) != 0) {
      pbVar18 = *(byte **)(lVar15 + 0x28);
      lVar23 = *(int64_t *)(lVar14 + 0x28) - (int64_t)pbVar18;
      do {
        bVar1 = *pbVar18;
        uVar16 = (uint)pbVar18[lVar23];
        if (bVar1 != uVar16) break;
        pbVar18 = pbVar18 + 1;
      } while (uVar16 != 0);
      if ((int)(bVar1 - uVar16) < 1) goto LAB_18045dc08;
    }
  }
  uVar28 = 0;
LAB_18045dc13:
// WARNING: Subroutine does not return
  local_var_30 = 0x18045dc21;
  SystemStateController(lVar14,lVar15,lVar21,uVar28);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t
function_45dcc0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int32_t uVar1;
  void *plocal_var_30;
  int64_t lStack_28;
  int32_t local_var_20;
  uint64_t local_var_18;
  plocal_var_30 = &system_data_buffer_ptr;
  local_var_18 = 0;
  lStack_28 = 0;
  local_var_20 = 0;
  function_053200(param_1,&plocal_var_30,param_3,param_4,0xfffffffffffffffe);
  uVar1 = (**(code **)(*system_cache_buffer + 0x70))(system_cache_buffer,&plocal_var_30);
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return uVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_45dfd0(int64_t param_1,int param_2,int param_3,int64_t param_4)
{
  int iVar1;
  int32_t uVar2;
  int8_t *puVar3;
  float *pfVar4;
  int64_t lVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  float fVar10;
  void *plocal_var_c8;
  int8_t *plocal_var_c0;
  int32_t local_var_b8;
  uint64_t local_var_b0;
  int64_t alStack_a8 [2];
  int16_t local_var_98;
  int8_t local_var_96;
  uint64_t local_var_94;
  uint64_t local_var_8c;
  uint64_t local_var_84;
  uint64_t local_var_7c;
  uint64_t local_var_74;
  uint64_t local_var_6c;
  uint64_t local_var_64;
  uint64_t local_var_5c;
  uint64_t local_var_54;
  int16_t local_var_4c;
  int16_t local_var_4a;
  int16_t local_var_48;
  int16_t local_var_46;
  int16_t local_var_44;
  int8_t local_var_42;
  uint64_t local_var_38;
  local_var_38 = 0xfffffffffffffffe;
  lVar5 = 0;
  alStack_a8[0] = 0;
  alStack_a8[1] = 0;
  local_var_98 = 0;
  local_var_96 = 3;
  local_var_42 = 0;
  local_var_94 = 0;
  local_var_8c = 0;
  local_var_84 = 0;
  local_var_7c = 0;
  local_var_74 = 0;
  local_var_6c = 0;
  local_var_64 = 0;
  local_var_5c = 0;
  _local_var_4c = CONCAT22((short)param_3,(short)param_2);
  local_var_54 = 7;
  local_var_48 = 1;
  local_var_46 = 1;
  local_var_44 = 0x102;
  function_2a1bc0(alStack_a8);
  lVar7 = (int64_t)(param_2 * param_3);
  if (3 < lVar7) {
    puVar3 = (int8_t *)(alStack_a8[0] + 2);
    lVar8 = param_4 - alStack_a8[0];
    lVar9 = (lVar7 - 4U >> 2) + 1;
    lVar5 = lVar9 * 4;
    do {
      fVar10 = *(float *)(puVar3 + lVar8 + -2) * 255.0;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      puVar3[-2] = (char)(int)fVar10;
      fVar10 = *(float *)(puVar3 + lVar8 + -2) * 255.0;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      puVar3[-1] = (char)(int)fVar10;
      fVar10 = *(float *)(puVar3 + lVar8 + -2) * 255.0;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      *puVar3 = (char)(int)fVar10;
      puVar3[1] = 0xff;
      fVar10 = *(float *)(puVar3 + lVar8 + 2) * 255.0;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      puVar3[2] = (char)(int)fVar10;
      fVar10 = *(float *)(puVar3 + lVar8 + 2) * 255.0;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      puVar3[3] = (char)(int)fVar10;
      fVar10 = *(float *)(puVar3 + lVar8 + 2) * 255.0;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      puVar3[4] = (char)(int)fVar10;
      puVar3[5] = 0xff;
      fVar10 = *(float *)(puVar3 + lVar8 + 6) * 255.0;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      puVar3[6] = (char)(int)fVar10;
      fVar10 = *(float *)(puVar3 + lVar8 + 6) * 255.0;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      puVar3[7] = (char)(int)fVar10;
      fVar10 = *(float *)(puVar3 + lVar8 + 6) * 255.0;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      puVar3[8] = (char)(int)fVar10;
      puVar3[9] = 0xff;
      fVar10 = *(float *)(puVar3 + lVar8 + 10) * 255.0;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      puVar3[10] = (char)(int)fVar10;
      fVar10 = *(float *)(puVar3 + lVar8 + 10) * 255.0;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      puVar3[0xb] = (char)(int)fVar10;
      fVar10 = *(float *)(puVar3 + lVar8 + 10) * 255.0;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      puVar3[0xc] = (char)(int)fVar10;
      puVar3[0xd] = 0xff;
      puVar3 = puVar3 + 0x10;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  if (lVar5 < lVar7) {
    pfVar4 = (float *)(param_4 + lVar5 * 4);
    param_4 = alStack_a8[0] - param_4;
    lVar7 = lVar7 - lVar5;
    do {
      fVar10 = *pfVar4 * 255.0;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      *(char *)(param_4 + (int64_t)pfVar4) = (char)(int)fVar10;
      fVar10 = *pfVar4 * 255.0;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      *(char *)(param_4 + 1 + (int64_t)pfVar4) = (char)(int)fVar10;
      fVar10 = *pfVar4 * 255.0;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      *(char *)(param_4 + 2 + (int64_t)pfVar4) = (char)(int)fVar10;
      *(int8_t *)(param_4 + 3 + (int64_t)pfVar4) = 0xff;
      pfVar4 = pfVar4 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  plocal_var_c8 = &system_data_buffer_ptr;
  local_var_b0 = 0;
  plocal_var_c0 = (int8_t *)0x0;
  local_var_b8 = 0;
  if (param_1 != 0) {
    lVar5 = -1;
    do {
      lVar8 = lVar5;
      lVar5 = lVar8 + 1;
    } while (*(char *)(param_1 + lVar5) != '\0');
    if ((int)lVar5 != 0) {
      iVar6 = (int)lVar8 + 2;
      iVar1 = iVar6;
      if (iVar6 < 0x10) {
        iVar1 = 0x10;
      }
      puVar3 = (int8_t *)
               CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar1,
                             CONCAT71((int7)((uint64_t)lVar7 >> 8),0x13));
      *puVar3 = 0;
      plocal_var_c0 = puVar3;
      uVar2 = CoreMemoryPoolCleaner(puVar3);
      local_var_b0 = CONCAT44(local_var_b0._4_4_,uVar2);
// WARNING: Subroutine does not return
      memcpy(puVar3,param_1,iVar6);
    }
  }
  local_var_b8 = 0;
  function_2a8080(&plocal_var_c8,alStack_a8,3);
  plocal_var_c8 = &system_data_buffer_ptr;
  if (plocal_var_c0 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_c0 = (int8_t *)0x0;
  local_var_b0 = local_var_b0 & 0xffffffff00000000;
  plocal_var_c8 = &system_state_ptr;
  if (((local_var_98._1_1_ == '\0') && ((char)local_var_98 == '\0')) && (alStack_a8[0] != 0)) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_45e350(int64_t param_1)
void function_45e350(int64_t param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plStackX_10;
  int64_t *plStackX_18;
  int64_t **pplStackX_20;
  uint64_t uVar3;
  int64_t alStack_30 [2];
  void *plocal_var_20;
  void *plocal_var_18;
  uVar3 = 0xfffffffffffffffe;
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) +
               0x48) < render_system_config_memory) && (SystemInitializer(), render_system_config_memory == -1)) {
    render_system_config_memory = &rendering_buffer_2008_ptr;
    render_system_config_memory = &system_ptr_9c08;
    render_system_config_memory = 0;