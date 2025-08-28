#define SystemInitializer FUN_1808fcb90  // 系统初始化器

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part355.c - 2 个函数

// 函数: void FUN_18045db70(uint64_t param_1)
void FUN_18045db70(uint64_t param_1)

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
  
  lVar21 = render_system_data_memory + 0x150;
  uStack_30 = 0x18045dbab;
  lVar14 = FUN_18062b420(system_memory_pool_ptr,0x40,*(int8_t *)(render_system_data_memory + 0x178));
  uStack_30 = 0x18045dbba;
  FUN_180627910(lVar14 + 0x20,param_1);
  uStack_30 = 0x18045dbcb;
  lVar15 = FUN_1800590b0(lVar21,acStackX_10,lVar14 + 0x20);
  if (acStackX_10[0] == '\0') {
    uStack_30 = 0x18045dc2f;
    FUN_18005d1f0(extraout_XMM0_Da,lVar14);
    uStack_298 = 0xfffffffffffffffe;
    uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_3b8;
    uStack_378 = 0;
    lStack_310 = render_system_data_memory;
    *(uint64_t *)(render_system_data_memory + 0xf0) = 0;
    uStack_338 = 3;
    ppppppuStack_360 = &ppppppuStack_360;
    ppppppuStack_358 = &ppppppuStack_360;
    ppppppuStack_350 = (uint64_t *******)0x0;
    uStack_348 = 0;
    uStack_340 = 0;
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
        puStack_398 = &system_data_buffer_ptr;
        uStack_380 = 0;
        puStack_390 = (int8_t *)0x0;
        uStack_388 = 0;
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
            puVar10 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(int64_t)iVar9,0x13);
            *puVar10 = 0;
            puStack_390 = puVar10;
            uVar8 = FUN_18064e990(puVar10);
            uStack_380 = CONCAT44(uStack_380._4_4_,uVar8);
                    // WARNING: Subroutine does not return
            memcpy(puVar10,puVar11,iVar20);
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
        strcpy_s(auStack_278,0x10,&unknown_var_4276_ptr);
        FUN_18062cb00(&puStack_2e8,&puStack_308,&puStack_290);
        puStack_290 = &system_state_ptr;
        iStack_374 = 0;
        lStack_2c8 = 0;
        uStack_2c0 = (int64_t)puStack_300 - (int64_t)puStack_308 >> 5;
        puVar3 = puStack_308;
        puVar4 = puStack_308;
        puVar5 = puStack_300;
        if (uStack_2c0 != 0) {
          do {
            lVar14 = lStack_2c8;
            puVar3 = puStack_308;
            iVar9 = iStack_374;
            puVar17 = &system_buffer_ptr;
            if ((void *)puStack_308[lStack_2c8 * 4 + 1] != (void *)0x0) {
              puVar17 = (void *)puStack_308[lStack_2c8 * 4 + 1];
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
              memcpy(&uStack_268,puVar17,(int64_t)puVar11 - (int64_t)puVar17);
            }
                    // WARNING: Ignoring partial resolution of indirect
            uStack_268._0_1_ = 0;
            uVar16 = 0;
            uVar8 = 0;
            puStack_330 = &system_data_buffer_ptr;
            uStack_318 = 0;
            puStack_328 = (void *)0x0;
            uStack_320 = 0;
            lVar15 = -1;
            do {
              lVar21 = lVar15;
              lVar15 = lVar21 + 1;
            } while (*(char *)((int64_t)&uStack_268 + lVar21 + 1) != '\0');
            if ((int)(lVar21 + 1) != 0) {
              iVar20 = (int)lVar21 + 2;
              iVar9 = iVar20;
              if (iVar20 < 0x10) {
                iVar9 = 0x10;
              }
              puStack_328 = (void *)FUN_18062b420(system_memory_pool_ptr,(int64_t)iVar9,0x13);
              *puStack_328 = 0;
              uVar24 = (uint64_t)puStack_328 & 0xffffffffffc00000;
              if (uVar24 != 0) {
                lVar14 = ((int64_t)puStack_328 - uVar24 >> 0x10) * 0x50 + 0x80 + uVar24;
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
                  uVar16 = uVar16 - (int)(((int64_t)puStack_328 -
                                          (((int64_t)((int64_t)puVar22 + (-0x80 - uVar24)) / 0x50)
                                           * 0x10000 + uVar24)) % uVar25);
                }
              }
              uStack_318 = CONCAT44(uStack_318._4_4_,uVar16);
                    // WARNING: Subroutine does not return
              memcpy(puStack_328,&uStack_268,iVar20);
            }
            uStack_320 = 0;
            pppppppuVar12 = &ppppppuStack_360;
            for (pppppppuVar2 = (uint64_t *******)ppppppuStack_350;
                pppppppuVar2 != (uint64_t *******)0x0;
                pppppppuVar2 = (uint64_t *******)pppppppuVar2[1]) {
              pppppppuVar12 = pppppppuVar2;
            }
            if ((pppppppuVar12 == &ppppppuStack_360) ||
               (lVar15 = lVar14, *(int *)(pppppppuVar12 + 6) != 0)) {
              if ((pppppppuVar12 != (uint64_t *******)ppppppuStack_360) &&
                 (pppppppuVar12 != &ppppppuStack_360)) {
                func_0x00018066bd70(pppppppuVar12);
              }
              bVar29 = true;
              pppppppuVar12 = &ppppppuStack_360;
              pppppppuVar2 = (uint64_t *******)ppppppuStack_350;
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
                if (pppppppuVar12 == (uint64_t *******)ppppppuStack_358) {
                  if ((pppppppuVar12 != &ppppppuStack_360) && (*(int *)(pppppppuVar12 + 6) == 0)) {
                    uVar8 = 1;
                  }
                  lVar14 = FUN_18062b420(system_memory_pool_ptr,0x60,(int8_t)uStack_338);
                  puStack_2b0 = (uint64_t *)(lVar14 + 0x20);
                  *puStack_2b0 = &system_state_ptr;
                  *(uint64_t *)(lVar14 + 0x28) = 0;
                  *(int32_t *)(lVar14 + 0x30) = 0;
                  *puStack_2b0 = &system_data_buffer_ptr;
                  *(uint64_t *)(lVar14 + 0x38) = 0;
                  *(uint64_t *)(lVar14 + 0x28) = 0;
                  *(int32_t *)(lVar14 + 0x30) = 0;
                  puStack_2a8 = puStack_2b0;
                  FUN_1806277c0(puStack_2b0,0);
                  puStack_2a0 = (uint64_t *)(lVar14 + 0x40);
                  *puStack_2a0 = &system_state_ptr;
                  *(uint64_t *)(lVar14 + 0x48) = 0;
                  *(int32_t *)(lVar14 + 0x50) = 0;
                  *puStack_2a0 = &system_data_buffer_ptr;
                  *(uint64_t *)(lVar14 + 0x58) = 0;
                  *(uint64_t *)(lVar14 + 0x48) = 0;
                  *(int32_t *)(lVar14 + 0x50) = 0;
                    // WARNING: Subroutine does not return
                  FUN_18066bdc0(lVar14,pppppppuVar12,&ppppppuStack_360,uVar8);
                }
                pppppppuVar12 = (uint64_t *******)func_0x00018066b9a0(pppppppuVar12);
                lVar15 = lStack_2c8;
                iVar9 = iStack_374;
              }
            }
            uVar16 = *(uint *)(puVar3 + lVar14 * 4 + 2);
            uVar24 = (uint64_t)uVar16;
            if (puVar3[lVar14 * 4 + 1] != 0) {
              FUN_1806277c0(pppppppuVar12 + 8,uVar24);
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
            puStack_328 = (void *)0x0;
            uStack_318 = uStack_318 & 0xffffffff00000000;
            puStack_330 = &system_state_ptr;
            iStack_374 = iVar9 + 1;
            lStack_2c8 = lVar15 + 1;
            puVar3 = puStack_308;
            puVar4 = puStack_308;
            puVar5 = puStack_300;
            iVar9 = iStack_370;
            lVar15 = lStack_368;
          } while ((uint64_t)(int64_t)iStack_374 < uStack_2c0);
        }
        for (; puVar7 = puStack_300, puVar6 = puStack_308, puVar3 != puStack_300;
            puVar3 = puVar3 + 4) {
          puStack_308 = puVar4;
          puStack_300 = puVar5;
          (**(code **)*puVar3)(puVar3,0);
          puVar4 = puStack_308;
          puVar5 = puStack_300;
          puStack_300 = puVar7;
          puStack_308 = puVar6;
        }
        if (puStack_308 != (uint64_t *)0x0) {
          puStack_308 = puVar4;
          puStack_300 = puVar5;
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar6);
        }
        puStack_2e8 = &system_data_buffer_ptr;
        if (lStack_2e0 != 0) {
          puStack_308 = puVar4;
          puStack_300 = puVar5;
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_2e0 = 0;
        uStack_2d0 = 0;
        puStack_2e8 = &system_state_ptr;
        iStack_370 = iVar9 + 1;
        lStack_368 = lVar15 + 1;
        lVar14 = *(int64_t *)(lStack_2b8 + 0x8a8);
        puStack_308 = puVar4;
        puStack_300 = puVar5;
      } while ((uint64_t)(int64_t)iStack_370 <
               (uint64_t)(*(int64_t *)(lStack_2b8 + 0x8b0) - lVar14 >> 5));
    }
    uStack_48 = 0x3f8000003f800000;
    uStack_40 = 0x3f000000;
    uStack_3c = 0;
    if ((uint64_t *******)ppppppuStack_358 != &ppppppuStack_360) {
      lVar14 = lStack_310 + 0x150;
      pppppppuVar12 = (uint64_t *******)ppppppuStack_358;
      lVar15 = lStack_310;
      lStack_368 = lVar14;
      do {
        plVar13 = (int64_t *)FUN_180058080(lVar14,&puStack_2a0,pppppppuVar12 + 4);
        if (*plVar13 != lVar14) {
          bVar29 = false;
          uVar25 = 0;
          lVar21 = *(int64_t *)(lVar15 + 0xc0);
          uVar24 = uVar25;
          if (*(int64_t *)(lVar15 + 200) - lVar21 >> 3 != 0) {
            do {
              lVar14 = *(int64_t *)(lVar21 + uVar25);
              puStack_398 = &system_data_buffer_ptr;
              uStack_380 = 0;
              puStack_390 = (int8_t *)0x0;
              uStack_388 = 0;
              if (*(int *)(lVar14 + 0xb8) != 0) {
                iVar9 = *(int *)(lVar14 + 0xb8) + 1;
                if (iVar9 < 0x10) {
                  iVar9 = 0x10;
                }
                puStack_390 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(int64_t)iVar9,0x13);
                *puStack_390 = 0;
                uVar26 = (uint64_t)puStack_390 & 0xffffffffffc00000;
                if (uVar26 == 0) {
                  uVar16 = 0;
                }
                else {
                  lVar15 = ((int64_t)puStack_390 - uVar26 >> 0x10) * 0x50 + 0x80 + uVar26;
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
                    uVar16 = uVar16 - (int)(((int64_t)puStack_390 -
                                            (((int64_t)((int64_t)puVar22 + (-0x80 - uVar26)) /
                                             0x50) * 0x10000 + uVar26)) % uVar27);
                  }
                }
                uStack_380 = CONCAT44(uStack_380._4_4_,uVar16);
                if (*(int *)(lVar14 + 0xb8) != 0) {
                    // WARNING: Subroutine does not return
                  memcpy(puStack_390,*(uint64_t *)(lVar14 + 0xb0),*(int *)(lVar14 + 0xb8) + 1);
                }
              }
              if (*(int64_t *)(lVar14 + 0xb0) != 0) {
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
                FUN_18064e900(puStack_390);
              }
              puStack_390 = (int8_t *)0x0;
              uStack_380 = uStack_380 & 0xffffffff00000000;
              puStack_398 = &system_state_ptr;
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
            uVar28 = FUN_180624440(&uStack_268,pppppppuVar12 + 8);
            FUN_1806279c0(&puStack_330,uVar28);
            uStack_268 = &system_state_ptr;
            ppppppuVar19 = (uint64_t ******)&system_buffer_ptr;
            if (pppppppuVar12[5] != (uint64_t ******)0x0) {
              ppppppuVar19 = pppppppuVar12[5];
            }
            FUN_180627910(&puStack_308,ppppppuVar19);
            puVar17 = &system_buffer_ptr;
            if (puStack_328 != (void *)0x0) {
              puVar17 = puStack_328;
            }
            FUN_180627910(&puStack_2e8,puVar17);
            FUN_1801762b0(lVar15,&puStack_2e8,&puStack_308,&uStack_48);
            puStack_2e8 = &system_data_buffer_ptr;
            if (lStack_2e0 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            lStack_2e0 = 0;
            uStack_2d0 = 0;
            puStack_2e8 = &system_state_ptr;
            puStack_308 = (uint64_t *)&system_data_buffer_ptr;
            if (puStack_300 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            puStack_300 = (uint64_t *)0x0;
            uStack_2f0 = 0;
            puStack_308 = (uint64_t *)&system_state_ptr;
            puStack_330 = &system_data_buffer_ptr;
            if (puStack_328 != (void *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
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
    FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_3b8);
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
  uStack_30 = 0x18045dc21;
  FUN_18066bdc0(lVar14,lVar15,lVar21,uVar28);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t
FUN_18045dcc0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  void *puStack_30;
  int64_t lStack_28;
  int32_t uStack_20;
  uint64_t uStack_18;
  
  puStack_30 = &system_data_buffer_ptr;
  uStack_18 = 0;
  lStack_28 = 0;
  uStack_20 = 0;
  FUN_180053200(param_1,&puStack_30,param_3,param_4,0xfffffffffffffffe);
  uVar1 = (**(code **)(*system_cache_buffer + 0x70))(system_cache_buffer,&puStack_30);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18045dfd0(int64_t param_1,int param_2,int param_3,int64_t param_4)

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
  void *puStack_c8;
  int8_t *puStack_c0;
  int32_t uStack_b8;
  uint64_t uStack_b0;
  int64_t alStack_a8 [2];
  int16_t uStack_98;
  int8_t uStack_96;
  uint64_t uStack_94;
  uint64_t uStack_8c;
  uint64_t uStack_84;
  uint64_t uStack_7c;
  uint64_t uStack_74;
  uint64_t uStack_6c;
  uint64_t uStack_64;
  uint64_t uStack_5c;
  uint64_t uStack_54;
  int16_t uStack_4c;
  int16_t uStack_4a;
  int16_t uStack_48;
  int16_t uStack_46;
  int16_t uStack_44;
  int8_t uStack_42;
  uint64_t uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  lVar5 = 0;
  alStack_a8[0] = 0;
  alStack_a8[1] = 0;
  uStack_98 = 0;
  uStack_96 = 3;
  uStack_42 = 0;
  uStack_94 = 0;
  uStack_8c = 0;
  uStack_84 = 0;
  uStack_7c = 0;
  uStack_74 = 0;
  uStack_6c = 0;
  uStack_64 = 0;
  uStack_5c = 0;
  _uStack_4c = CONCAT22((short)param_3,(short)param_2);
  uStack_54 = 7;
  uStack_48 = 1;
  uStack_46 = 1;
  uStack_44 = 0x102;
  FUN_1802a1bc0(alStack_a8);
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
  puStack_c8 = &system_data_buffer_ptr;
  uStack_b0 = 0;
  puStack_c0 = (int8_t *)0x0;
  uStack_b8 = 0;
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
               FUN_18062b420(system_memory_pool_ptr,(int64_t)iVar1,
                             CONCAT71((int7)((uint64_t)lVar7 >> 8),0x13));
      *puVar3 = 0;
      puStack_c0 = puVar3;
      uVar2 = FUN_18064e990(puVar3);
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar2);
                    // WARNING: Subroutine does not return
      memcpy(puVar3,param_1,iVar6);
    }
  }
  uStack_b8 = 0;
  FUN_1802a8080(&puStack_c8,alStack_a8,3);
  puStack_c8 = &system_data_buffer_ptr;
  if (puStack_c0 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_c0 = (int8_t *)0x0;
  uStack_b0 = uStack_b0 & 0xffffffff00000000;
  puStack_c8 = &system_state_ptr;
  if (((uStack_98._1_1_ == '\0') && ((char)uStack_98 == '\0')) && (alStack_a8[0] != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045e350(int64_t param_1)
void FUN_18045e350(int64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plStackX_10;
  int64_t *plStackX_18;
  int64_t **pplStackX_20;
  uint64_t uVar3;
  int64_t alStack_30 [2];
  void *puStack_20;
  void *puStack_18;
  
  uVar3 = 0xfffffffffffffffe;
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) +
               0x48) < render_system_config_memory) && (SystemInitializer(), render_system_config_memory == -1)) {
    render_system_config_memory = &unknown_var_2008_ptr;
    render_system_config_memory = &system_ptr_9c08;
    render_system_config_memory = 0;


