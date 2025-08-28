#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part060.c - 7 个函数

// 函数: void FUN_18029b540(int64_t *param_1,uint64_t param_2)
void FUN_18029b540(int64_t *param_1,uint64_t param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint uVar6;
  int iVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t *plVar10;
  void *puVar11;
  uint64_t uVar12;
  int64_t *plVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int64_t lVar18;
  int64_t *plVar19;
  uint *puVar20;
  bool bVar21;
  int32_t uVar22;
  int8_t auStack_518 [32];
  uint *puStack_4f8;
  uint uStack_4f0;
  int32_t uStack_4e8;
  int32_t uStack_4e0;
  int32_t uStack_4d8;
  uint64_t uStack_4d0;
  int8_t uStack_4c8;
  int32_t uStack_4c0;
  int8_t auStack_4b8 [8];
  int64_t *plStack_4b0;
  uint uStack_4a8;
  uint uStack_4a4;
  uint uStack_4a0;
  uint uStack_49c;
  uint uStack_498;
  uint uStack_494;
  uint uStack_490;
  uint64_t uStack_488;
  uint64_t uStack_480;
  uint uStack_478;
  uint uStack_474;
  uint64_t uStack_470;
  int64_t *plStack_468;
  int64_t *plStack_460;
  int64_t *plStack_458;
  int32_t uStack_450;
  int64_t *plStack_448;
  int64_t *plStack_440;
  int64_t *plStack_438;
  int64_t *plStack_430;
  void **ppuStack_428;
  uint *puStack_420;
  int32_t uStack_418;
  int16_t uStack_414;
  ushort uStack_412;
  uint64_t uStack_410;
  uint64_t auStack_408 [2];
  void *puStack_3f8;
  uint64_t uStack_3f0;
  int32_t uStack_3e8;
  int32_t uStack_3e4;
  uint auStack_3e0 [3];
  int16_t uStack_3d4;
  int8_t uStack_3d2;
  int32_t uStack_3d1;
  int16_t uStack_3cd;
  int32_t uStack_3c8;
  int8_t uStack_3c4;
  void *puStack_398;
  uint *puStack_390;
  uint64_t uStack_388;
  uint auStack_380 [2];
  int64_t *plStack_378;
  void *puStack_370;
  int64_t lStack_368;
  int32_t uStack_360;
  uint64_t uStack_358;
  int32_t uStack_350;
  int32_t uStack_34c;
  int32_t uStack_348;
  int32_t uStack_344;
  int64_t *plStack_340;
  void *puStack_2f8;
  int8_t *puStack_2f0;
  int32_t uStack_2e8;
  int8_t auStack_2e0 [72];
  void *puStack_298;
  int8_t *puStack_290;
  int32_t uStack_288;
  int8_t auStack_280 [136];
  void *puStack_1f8;
  int8_t *puStack_1f0;
  int32_t uStack_1e8;
  int8_t auStack_1e0 [136];
  void *puStack_158;
  uint *puStack_150;
  int32_t uStack_148;
  int32_t uStack_144;
  uint auStack_140 [2];
  uint64_t uStack_138;
  int8_t auStack_130 [32];
  int32_t uStack_110;
  int32_t uStack_10c;
  int32_t uStack_108;
  int32_t uStack_104;
  int64_t *plStack_100;
  void *puStack_b8;
  int8_t *puStack_b0;
  int32_t uStack_a8;
  int8_t auStack_a0 [72];
  uint64_t uStack_58;
  
  uStack_410 = 0xfffffffffffffffe;
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_518;
  uStack_488 = param_2;
  FUN_1802c22a0(auStack_4b8,&unknown_var_808_ptr);
  if (param_2 != 0) {
    plVar13 = (int64_t *)0x0;
    if (param_1[0x1049] == 0) {
      puStack_2f8 = &unknown_var_672_ptr;
      puStack_2f0 = auStack_2e0;
      auStack_2e0[0] = 0;
      uStack_2e8 = 0x13;
      uVar22 = strcpy_s(auStack_2e0,0x20,&unknown_var_864_ptr);
      uStack_4c0 = 1;
      uStack_4c8 = 0;
      uStack_4d0 = 0;
      uStack_4d8 = 1;
      uStack_4e0 = 0x20;
      uStack_4e8 = 0;
      uStack_4f0 = 3;
      puStack_4f8 = (uint *)CONCAT44(puStack_4f8._4_4_,0x220);
      plVar8 = (int64_t *)FUN_1800b0a10(uVar22,&plStack_4b0,0xffffffff,&puStack_2f8);
      lVar18 = *plVar8;
      *plVar8 = 0;
      uStack_480 = (int64_t *)param_1[0x1049];
      param_1[0x1049] = lVar18;
      if (uStack_480 != (int64_t *)0x0) {
        (**(code **)(*uStack_480 + 0x38))();
      }
      if (plStack_4b0 != (int64_t *)0x0) {
        (**(code **)(*plStack_4b0 + 0x38))();
      }
      puStack_2f8 = &system_state_ptr;
    }
    uStack_3e4 = 0;
    auStack_3e0[0] = 0;
    auStack_3e0[1] = 0;
    auStack_3e0[2] = 0x3f800000;
    uStack_3d4 = 0x100;
    uStack_3d1 = 0;
    uStack_3cd = 0;
    uStack_3c4 = 0;
    uStack_3e8 = 7;
    uStack_3d2 = 1;
    puStack_3f8 = (void *)0x1000000010;
    uStack_3c8 = *(int32_t *)(param_2 + 0x1e8);
    uVar22 = 1;
    if (1 < *(ushort *)(param_2 + 0x332)) {
      uVar22 = 2;
    }
    uStack_3f0 = (uint *)CONCAT44(1,uVar22);
    if (1 < *(byte *)(param_2 + 0x335)) {
      puStack_158 = &unknown_var_3432_ptr;
      puStack_150 = auStack_140;
      auStack_140[0] = auStack_140[0] & 0xffffff00;
      uStack_148 = 10;
      strcpy_s(auStack_140,0x80,&unknown_var_888_ptr);
      FUN_1800b1230(system_resource_state,&plStack_430,&puStack_158,&puStack_3f8);
      puStack_158 = &system_state_ptr;
      puStack_398 = &unknown_var_3432_ptr;
      puStack_390 = auStack_380;
      auStack_380[0] = auStack_380[0] & 0xffffff00;
      uStack_388 = CONCAT44(uStack_388._4_4_,10);
      strcpy_s(auStack_380,0x80,&unknown_var_832_ptr);
      FUN_1800b1230(system_resource_state,&plStack_438,&puStack_398,&puStack_3f8);
      puStack_398 = &system_state_ptr;
      puStack_1f8 = &unknown_var_3432_ptr;
      puStack_1f0 = auStack_1e0;
      auStack_1e0[0] = 0;
      uStack_1e8 = 10;
      strcpy_s(auStack_1e0,0x80,&unknown_var_848_ptr);
      FUN_1800b1230(system_resource_state,&plStack_440,&puStack_1f8,&puStack_3f8);
      puStack_1f8 = &system_state_ptr;
      puStack_298 = &unknown_var_3432_ptr;
      puStack_290 = auStack_280;
      auStack_280[0] = 0;
      uStack_288 = 10;
      strcpy_s(auStack_280,0x80,&unknown_var_904_ptr);
      FUN_1800b1230(system_resource_state,&plStack_448,&puStack_298,&puStack_3f8);
      puStack_298 = &system_state_ptr;
      bVar1 = *(byte *)(param_2 + 0x335);
      uVar2 = *(ushort *)(param_2 + 0x332);
      uVar3 = *(ushort *)(param_2 + 0x32c);
      uStack_498 = (uint)uVar3;
      uStack_478 = (uint)*(ushort *)(param_2 + 0x32e);
      uStack_4a0 = bVar1 - 1;
      uStack_49c = (uint)uVar2;
      uStack_494 = (uint)bVar1;
      (**(code **)(*param_1 + 0x70))(param_1,param_2,0x40);
      plStack_468 = (int64_t *)0x0;
      plStack_460 = (int64_t *)0x0;
      plStack_458 = (int64_t *)0x0;
      uStack_450 = 3;
      uVar15 = (uint)bVar1 * (uint)uVar2;
      plStack_4b0 = (int64_t *)(uint64_t)uVar15;
      uVar14 = bVar1 - 1;
      uVar6 = (uint)uVar3;
      uVar16 = (uint)uVar2;
      if (uVar15 != 0) {
        plVar8 = plVar13;
        plVar19 = (int64_t *)0x0;
        do {
          plVar5 = plStack_460;
          if (plStack_460 < plVar8) {
            *(int *)plStack_460 = 0x40;
            plVar10 = plVar19;
          }
          else {
            lVar9 = (int64_t)plStack_460 - (int64_t)plVar19 >> 2;
            lVar18 = lVar9 * 2;
            if (lVar9 == 0) {
              lVar18 = 1;
            }
            plVar10 = plVar13;
            if (lVar18 != 0) {
              plVar10 = (int64_t *)
                        CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar18 * 4,
                                      CONCAT71((int7)((uint64_t)plStack_460 >> 8),3));
            }
            if (plVar19 != plVar5) {
                    // WARNING: Subroutine does not return
              memmove(plVar10,plVar19,(int64_t)plVar5 - (int64_t)plVar19);
            }
            *(int *)plVar10 = 0x40;
            if (plVar19 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner(plVar19);
            }
            plVar8 = (int64_t *)((int64_t)plVar10 + lVar18 * 4);
            plStack_468 = plVar10;
            plStack_458 = plVar8;
            plStack_460 = plVar10;
          }
          plStack_460 = (int64_t *)((int64_t)plStack_460 + 4);
          plStack_4b0 = (int64_t *)((int64_t)plStack_4b0 - 1);
          param_2 = uStack_488;
          plVar19 = plVar10;
          uVar14 = uStack_4a0;
          uVar6 = uStack_498;
          uVar16 = uStack_49c;
        } while (plStack_4b0 != (int64_t *)0x0);
      }
      uStack_4a8 = 0;
      plStack_4b0 = plStack_460;
      uVar15 = uStack_49c;
      if (uVar16 != 0) {
        do {
          uVar17 = 0;
          uStack_490 = 0;
          uVar16 = (uint)plVar13;
          if (uVar14 != 0) {
            do {
              uVar6 = uVar6 >> ((byte)uVar17 & 0x1f);
              uStack_470 = CONCAT44(uStack_470._4_4_,uVar6);
              uVar14 = uStack_478 >> ((byte)uVar17 & 0x1f);
              uStack_488 = CONCAT44(uStack_488._4_4_,uVar14);
              uStack_474 = uVar6 >> 1;
              uStack_4a4 = uVar14 >> 1;
              uVar14 = (uVar14 & 1) * 2 | uVar6 & 1;
              puVar11 = (void *)FUN_1800c0070();
              puVar20 = (uint *)0x0;
              if (uVar14 == 0) {
                puStack_2f8 = &unknown_var_3480_ptr;
                puStack_2f0 = auStack_2e0;
                auStack_2e0[0] = 0;
                uStack_2e8 = 0xc;
                strcpy_s(auStack_2e0,0x40,&unknown_var_2520_ptr);
                puVar20 = (uint *)SystemCore_LoggingSystem0(puVar11,&puStack_2f8,1);
                puStack_2f8 = &system_state_ptr;
              }
              else if (uVar14 == 1) {
                puStack_3f8 = &unknown_var_3480_ptr;
                uStack_3f0 = auStack_3e0;
                auStack_3e0[0] = auStack_3e0[0] & 0xffffff00;
                uStack_3e8 = 0x12;
                strcpy_s(auStack_3e0,0x40,&unknown_var_2664_ptr);
                puVar20 = (uint *)SystemCore_LoggingSystem0(puVar11,&puStack_3f8,1);
                puStack_3f8 = &system_state_ptr;
              }
              else if (uVar14 == 2) {
                puStack_b8 = &unknown_var_3480_ptr;
                puStack_b0 = auStack_a0;
                auStack_a0[0] = 0;
                uStack_a8 = 0x12;
                strcpy_s(auStack_a0,0x40,&unknown_var_2688_ptr);
                puVar20 = (uint *)SystemCore_LoggingSystem0(puVar11,&puStack_b8,1);
                puStack_b8 = &system_state_ptr;
              }
              else if (uVar14 == 3) {
                puStack_298 = &unknown_var_3480_ptr;
                puStack_290 = auStack_280;
                auStack_280[0] = 0;
                uStack_288 = 0x13;
                strcpy_s(auStack_280,0x40,&unknown_var_2624_ptr);
                puVar20 = (uint *)SystemCore_LoggingSystem0(puVar11,&puStack_298,1);
                puStack_298 = &system_state_ptr;
              }
              if (1 < *(ushort *)(param_2 + 0x332)) {
                puStack_1f8 = &unknown_var_3480_ptr;
                puStack_1f0 = auStack_1e0;
                auStack_1e0[0] = 0;
                uStack_1e8 = 0xd;
                strcpy_s(auStack_1e0,0x40,&unknown_var_2760_ptr);
                uVar12 = SystemCore_LoggingSystem0(puVar11,&puStack_1f8,1);
                puVar20 = (uint *)((uint64_t)puVar20 | uVar12);
                puStack_1f8 = &system_state_ptr;
              }
              uStack_418 = 0;
              uStack_414 = 0;
              plStack_378 = (int64_t *)0x0;
              puStack_370 = &system_data_buffer_ptr;
              uStack_358 = 0;
              lStack_368 = 0;
              uStack_360 = 0;
              plStack_340 = (int64_t *)0x0;
              auStack_380[0] = 2;
              uStack_350 = 0;
              uStack_34c = 0;
              uStack_348 = 0;
              uStack_344 = 0;
              uVar4 = *(uint64_t *)(puVar11 + 0x15b8);
              ppuStack_428 = &puStack_158;
              uStack_388._4_4_ = (int32_t)(((uint64_t)uStack_412 << 0x30) >> 0x20);
              uStack_148 = 0;
              uStack_144 = uStack_388._4_4_;
              auStack_140[0] = 2;
              uStack_138 = 0;
              puStack_420 = puVar20;
              puStack_398 = puVar11;
              puStack_390 = puVar20;
              uStack_388 = (uint64_t)uStack_412 << 0x30;
              puStack_158 = puVar11;
              puStack_150 = puVar20;
              CoreEngineDataTransformer(auStack_130,&puStack_370);
              uStack_110 = uStack_350;
              uStack_10c = uStack_34c;
              uStack_108 = uStack_348;
              uStack_104 = uStack_344;
              plStack_100 = plStack_340;
              if (plStack_340 != (int64_t *)0x0) {
                (**(code **)(*plStack_340 + 0x28))();
              }
              auStack_408[0] = FUN_180299eb0(uVar4,0,&puStack_158,auStack_4b8);
              (**(code **)(*param_1 + 0xc0))(param_1,auStack_408);
              uVar14 = uStack_4a4;
              if (uStack_4a4 == 1) {
                uVar14 = uStack_474;
              }
              uVar6 = uStack_474;
              if (uStack_474 == 1) {
                uVar6 = uStack_4a4;
              }
              uVar16 = 0;
              if ((uVar14 | uVar6) != 0) {
                for (; ((uVar14 | uVar6) >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
                }
              }
              if (3 < uVar16) {
                uVar16 = 3;
              }
              uVar14 = uStack_4a0 - uVar17;
              if (uVar16 + 1 + uVar17 <= uStack_4a0) {
                uVar14 = uVar16 + 1;
              }
              bVar21 = 1 < (uint)uStack_470;
              uStack_470 = 1;
              if (bVar21) {
                uStack_470 = (uint64_t)uStack_474;
              }
              bVar21 = 1 < (uint)uStack_488;
              uStack_488 = 1;
              if (bVar21) {
                uStack_488 = (uint64_t)uStack_4a4;
              }
              *(uint *)((int64_t)param_1 + 0x8254) = uVar14;
              puStack_4f8 = (uint *)(param_1 + 0x104a);
              *puStack_4f8 = uVar17;
              uStack_480 = (int64_t *)CONCAT44(1.0 / (float)uStack_488,1.0 / (float)uStack_470);
              param_1[0x104c] = (int64_t)uStack_480;
              uStack_4f0 = 0x20;
              uStack_4a4 = uVar14;
              (**(code **)(*param_1 + 0x280))(param_1,0xb,param_1[0x1049]);
              uStack_4f0 = (uint)*(ushort *)(param_2 + 0x332);
              puStack_4f8._0_4_ = (uint)*(byte *)(param_2 + 0x335);
              iVar7 = (**(code **)(*param_1 + 0x40))(param_1,uVar17,uStack_4a8,0);
              plVar13 = plStack_468;
              if (*(int *)((int64_t)plStack_468 + (int64_t)iVar7 * 4) != 0x40) {
                puStack_4f8._0_4_ = 0x40;
                (**(code **)(*param_1 + 0x78))(param_1,param_2,iVar7);
              }
              *(int *)((int64_t)plVar13 + (int64_t)iVar7 * 4) = 0x40;
              puStack_4f8._0_4_ = iVar7;
              (**(code **)(*param_1 + 0xd8))(param_1,0,param_2,0x20);
              uStack_4f0 = uStack_4f0 & 0xffffff00;
              puStack_4f8._0_4_ = 0;
              (**(code **)(*param_1 + 0xe8))(param_1,0,1,0);
              uStack_4f0._0_1_ = 1;
              puStack_4f8._0_4_ = 0xffffffff;
              (**(code **)(*param_1 + 0xe8))(param_1,1,1,plStack_430);
              uStack_4f0._0_1_ = 1;
              puStack_4f8._0_4_ = 0xffffffff;
              (**(code **)(*param_1 + 0xe8))(param_1,2,1,plStack_438);
              uStack_4f0._0_1_ = 1;
              puStack_4f8._0_4_ = 0xffffffff;
              (**(code **)(*param_1 + 0xe8))(param_1,3,1,plStack_440);
              uStack_4f0 = CONCAT31(uStack_4f0._1_3_,1);
              puStack_4f8 = (uint *)CONCAT44(puStack_4f8._4_4_,0xffffffff);
              (**(code **)(*param_1 + 0xe8))(param_1,4,1,plStack_448);
              plVar13 = plStack_468;
              if (uStack_4a4 != 0) {
                uVar12 = (uint64_t)uStack_4a4;
                uVar6 = uStack_494;
                uVar14 = uVar17;
                do {
                  uVar14 = uVar14 + 1;
                  if (uVar14 < uVar6) {
                    uStack_4f0 = (uint)*(ushort *)(param_2 + 0x332);
                    puStack_4f8._0_4_ = (uint)*(byte *)(param_2 + 0x335);
                    iVar7 = (**(code **)(*param_1 + 0x40))(param_1,uVar14,uStack_4a8,0);
                    uStack_4f0 = uStack_4f0 & 0xffffff00;
                    puStack_4f8 = (uint *)CONCAT44(puStack_4f8._4_4_,iVar7);
                    (**(code **)(*param_1 + 0xe8))(param_1,uVar14 - uVar17,1,param_2);
                    if (*(int *)((int64_t)plVar13 + (int64_t)iVar7 * 4) != 0x80) {
                      puStack_4f8 = (uint *)CONCAT44(puStack_4f8._4_4_,0x80);
                      (**(code **)(*param_1 + 0x78))(param_1,param_2,iVar7);
                    }
                    *(int *)((int64_t)plVar13 + (int64_t)iVar7 * 4) = 0x80;
                    uVar6 = uStack_494;
                    uVar17 = uStack_490;
                  }
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              uVar14 = uStack_4a4;
              (**(code **)(*param_1 + 0x118))
                        (param_1,(int)uStack_470 + 7U >> 3,(int)uStack_488 + 7U >> 3,1);
              puVar11 = (void *)*param_1;
              if (puVar11 != &unknown_var_2024_ptr) {
                (**(code **)(puVar11 + 0xa0))(param_1);
                puVar11 = (void *)*param_1;
              }
              (**(code **)(puVar11 + 0x20))(param_1,param_2);
              uVar17 = uVar17 + uVar14;
              uStack_490 = uVar17;
              if (plStack_340 != (int64_t *)0x0) {
                (**(code **)(*plStack_340 + 0x38))();
              }
              ppuStack_428 = &puStack_370;
              puStack_370 = &system_data_buffer_ptr;
              if (lStack_368 != 0) {
                    // WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner();
              }
              lStack_368 = 0;
              uStack_358 = uStack_358 & 0xffffffff00000000;
              puStack_370 = &system_state_ptr;
              if (plStack_378 != (int64_t *)0x0) {
                (**(code **)(*plStack_378 + 0x38))();
              }
              uVar14 = uStack_4a0;
              uVar6 = uStack_498;
              uVar15 = uStack_49c;
              uVar16 = uStack_4a8;
            } while (uVar17 < uStack_4a0);
          }
          uStack_4a8 = uVar16 + 1;
          plVar13 = (int64_t *)(uint64_t)uStack_4a8;
          uVar6 = uStack_498;
        } while (uStack_4a8 < uVar15);
      }
      plVar13 = plStack_468;
      iVar7 = 0;
      plVar8 = (int64_t *)((int64_t)plStack_4b0 - (int64_t)plStack_468 >> 2);
      plVar19 = plStack_468;
      plStack_4b0 = plVar8;
      if (plVar8 != (int64_t *)0x0) {
        do {
          if ((int)*plVar19 != 0x40) {
            puStack_4f8 = (uint *)CONCAT44(puStack_4f8._4_4_,0x40);
            (**(code **)(*param_1 + 0x78))(param_1,param_2,iVar7);
            plVar8 = plStack_4b0;
          }
          iVar7 = iVar7 + 1;
          plVar19 = (int64_t *)((int64_t)plVar19 + 4);
        } while ((int64_t *)(int64_t)iVar7 < plVar8);
      }
      (**(code **)(*param_1 + 0x70))(param_1,param_2,0x20);
      *(uint *)(param_2 + 0x35c) = uVar14;
      uStack_4f0._0_1_ = 1;
      puStack_4f8._0_4_ = 0xffffffff;
      (**(code **)(*param_1 + 0xe8))(param_1,1,1);
      uStack_4f0._0_1_ = 1;
      puStack_4f8._0_4_ = 0xffffffff;
      (**(code **)(*param_1 + 0xe8))(param_1,2,1);
      uStack_4f0._0_1_ = 1;
      puStack_4f8._0_4_ = 0xffffffff;
      (**(code **)(*param_1 + 0xe8))(param_1,3,1);
      uStack_4f0 = CONCAT31(uStack_4f0._1_3_,1);
      puStack_4f8 = (uint *)CONCAT44(puStack_4f8._4_4_,0xffffffff);
      (**(code **)(*param_1 + 0xe8))(param_1,4,1);
      (**(code **)(*param_1 + 0x70))(param_1,param_2,0x20);
      if (plVar13 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(plVar13);
      }
      if (plStack_448 != (int64_t *)0x0) {
        (**(code **)(*plStack_448 + 0x38))();
      }
      if (plStack_440 != (int64_t *)0x0) {
        (**(code **)(*plStack_440 + 0x38))();
      }
      if (plStack_438 != (int64_t *)0x0) {
        (**(code **)(*plStack_438 + 0x38))();
      }
      if (plStack_430 != (int64_t *)0x0) {
        (**(code **)(*plStack_430 + 0x38))();
      }
    }
  }
  render_system_data_memory = render_system_data_memory + -1;
  (**(code **)(*render_system_data_memory + 0x20))();
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_58 ^ (uint64_t)auStack_518);
}





// 函数: void FUN_18029c460(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18029c460(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  
  uVar5 = 0;
  plVar1 = (int64_t *)(param_1 + 0x170);
  lVar3 = *plVar1;
  if (*(int64_t *)(param_1 + 0x178) - lVar3 >> 3 != 0) {
    do {
      puVar2 = *(uint64_t **)(uVar5 * 8 + lVar3);
      if (puVar2 != (uint64_t *)0x0) {
        if ((int64_t *)puVar2[0xd] != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)puVar2[0xd] + 0x10))();
          puVar2[0xd] = 0;
        }
        if ((int64_t *)puVar2[0xe] != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)puVar2[0xe] + 0x10))();
          puVar2[0xe] = 0;
        }
        if ((int64_t *)puVar2[0xf] != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)puVar2[0xf] + 0x10))();
          puVar2[0xf] = 0;
        }
        if ((int64_t *)puVar2[0x10] != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)puVar2[0x10] + 0x10))();
          puVar2[0x10] = 0;
        }
        if ((int64_t *)puVar2[0x11] != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)puVar2[0x11] + 0x10))();
          puVar2[0x11] = 0;
        }
        *puVar2 = &system_state_ptr;
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(puVar2);
      }
      *(uint64_t *)(uVar5 * 8 + *plVar1) = 0;
      uVar5 = (uint64_t)((int)uVar5 + 1);
      lVar3 = *plVar1;
    } while (uVar5 < (uint64_t)(*(int64_t *)(param_1 + 0x178) - lVar3 >> 3));
  }
  *(int64_t *)(param_1 + 0x178) = lVar3;
  puVar2 = *(uint64_t **)(param_1 + 0x2f8);
  if (puVar2 != (uint64_t *)0x0) {
    FUN_1800f74f0(param_1 + 0x2e8,*puVar2);
    puVar2[4] = &system_state_ptr;
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar2);
  }
  FUN_180058370(param_1 + 0x2b8,*(uint64_t *)(param_1 + 0x2c8),param_3,param_4,0xfffffffffffffffe)
  ;
  FUN_180058370(param_1 + 0x288,*(uint64_t *)(param_1 + 0x298));
  FUN_180058370(param_1 + 600,*(uint64_t *)(param_1 + 0x268));
  SystemDataValidator(param_1 + 0x1b8,0x20,5,FUN_180046860);
  if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  SystemDataValidator(param_1 + 200,0x20,5,FUN_180046860);
  lVar3 = *(int64_t *)(param_1 + 0xb0);
  for (lVar4 = *(int64_t *)(param_1 + 0xa8); lVar4 != lVar3; lVar4 = lVar4 + 0x40) {
    FUN_180152b00(lVar4);
  }
  if (*(int64_t *)(param_1 + 0xa8) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}





// 函数: void FUN_18029c680(int64_t *param_1)
void FUN_18029c680(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x40) {
    FUN_180152b00(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void FUN_18029c6e0(int64_t *param_1)
void FUN_18029c6e0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x40) {
    FUN_180152b00(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



int64_t FUN_18029c700(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  lVar3 = param_1 + 100;
  lVar1 = 4;
  lVar2 = 4;
  do {
    func_0x000180074f10(lVar3);
    lVar3 = lVar3 + 8;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  lVar3 = param_1 + 0x84;
  do {
    func_0x000180074f10(lVar3);
    lVar3 = lVar3 + 8;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  *(uint64_t *)(param_1 + 0xa8) = 0;
  *(uint64_t *)(param_1 + 0xb0) = 0;
  *(uint64_t *)(param_1 + 0xb8) = 0;
  *(int32_t *)(param_1 + 0xc0) = 3;
  DataStructureManager(param_1 + 200,0x20,5,FUN_180056de0,FUN_180046860);
  *(uint64_t *)(param_1 + 0x170) = 0;
  *(uint64_t *)(param_1 + 0x178) = 0;
  *(uint64_t *)(param_1 + 0x180) = 0;
  *(int32_t *)(param_1 + 0x188) = 3;
  DataStructureManager(param_1 + 0x1b8,0x20,5,FUN_180056de0,FUN_180046860);
  lVar3 = param_1 + 600;
  *(uint64_t *)(param_1 + 0x270) = 0;
  *(int32_t *)(param_1 + 0x280) = 3;
  *(int64_t *)lVar3 = lVar3;
  *(int64_t *)(param_1 + 0x260) = lVar3;
  *(uint64_t *)(param_1 + 0x268) = 0;
  *(int8_t *)(param_1 + 0x270) = 0;
  *(uint64_t *)(param_1 + 0x278) = 0;
  lVar3 = param_1 + 0x288;
  *(uint64_t *)(param_1 + 0x2a0) = 0;
  *(int32_t *)(param_1 + 0x2b0) = 3;
  *(int64_t *)lVar3 = lVar3;
  *(int64_t *)(param_1 + 0x290) = lVar3;
  *(uint64_t *)(param_1 + 0x298) = 0;
  *(int8_t *)(param_1 + 0x2a0) = 0;
  *(uint64_t *)(param_1 + 0x2a8) = 0;
  lVar3 = param_1 + 0x2b8;
  *(uint64_t *)(param_1 + 0x2d0) = 0;
  *(int32_t *)(param_1 + 0x2e0) = 3;
  *(int64_t *)lVar3 = lVar3;
  *(int64_t *)(param_1 + 0x2c0) = lVar3;
  *(uint64_t *)(param_1 + 0x2c8) = 0;
  *(int8_t *)(param_1 + 0x2d0) = 0;
  *(uint64_t *)(param_1 + 0x2d8) = 0;
  lVar3 = param_1 + 0x2e8;
  *(uint64_t *)(param_1 + 0x300) = 0;
  *(int32_t *)(param_1 + 0x310) = 3;
  *(int64_t *)lVar3 = lVar3;
  *(int64_t *)(param_1 + 0x2f0) = lVar3;
  *(uint64_t *)(param_1 + 0x2f8) = 0;
  *(int8_t *)(param_1 + 0x300) = 0;
  *(uint64_t *)(param_1 + 0x308) = 0;
  *(int32_t *)(param_1 + 0x16c) = 0;
  return param_1;
}





// 函数: void FUN_18029c8a0(int64_t param_1,uint param_2,uint64_t param_3,int32_t param_4,
void FUN_18029c8a0(int64_t param_1,uint param_2,uint64_t param_3,int32_t param_4,
                  int8_t param_5,uint param_6)

{
  int64_t lVar1;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  if ((param_2 & 1) != 0) {
    fStack_28 = (float)((uint)((uint64_t)param_3 >> 0x10) & 0xff) * 0.003921569;
    fStack_24 = (float)((uint)((uint64_t)param_3 >> 8) & 0xff) * 0.003921569;
    lVar1 = *(int64_t *)(param_1 + 0x83b8 + (uint64_t)param_6 * 8);
    fStack_20 = (float)((uint)param_3 & 0xff) * 0.003921569;
    fStack_1c = (float)((uint)param_3 >> 0x18) * 0.003921569;
    if (lVar1 != 0) {
      (**(code **)(**(int64_t **)(param_1 + 0x8400) + 400))
                (*(int64_t **)(param_1 + 0x8400),*(uint64_t *)(lVar1 + 8),&fStack_28);
    }
  }
  if ((param_2 & 6) != 0) {
    if ((*(int64_t *)(param_1 + 0x83f0) != 0) &&
       (lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x83f0) + 8), lVar1 != 0)) {
      (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x1a8))
                (*(int64_t **)(param_1 + 0x8400),lVar1,-((param_2 & 2) != 0) & 3,param_4,param_5);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029c9d0(int64_t param_1)
void FUN_18029c9d0(int64_t param_1)

{
  int64_t lVar1;
  int iVar2;
  uint64_t uStackX_8;
  
  (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x370))();
  (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x378))();
  iVar2 = 0;
  *(int32_t *)(param_1 + 0x8428) = 0xffffffff;
  *(int32_t *)(param_1 + 0x8408) = 0;
  *(uint64_t *)(param_1 + 0x8410) = 0;
  lVar1 = 0x1e08;
  *(uint64_t *)(param_1 + 0x8418) = 0;
  *(uint64_t *)(param_1 + 0x8420) = 0;
  *(uint64_t *)(param_1 + 0x8430) = 0;
  do {
    uStackX_8 = *(uint64_t *)(lVar1 + system_message_buffer);
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0xd0))
              (*(int64_t **)(param_1 + 0x8400),iVar2,1,&uStackX_8);
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x208))
              (*(int64_t **)(param_1 + 0x8400),iVar2,1,&uStackX_8);
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x50))
              (*(int64_t **)(param_1 + 0x8400),iVar2,1,&uStackX_8);
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x230))
              (*(int64_t **)(param_1 + 0x8400),iVar2,1,&uStackX_8);
    iVar2 = iVar2 + 1;
    lVar1 = lVar1 + 8;
  } while (iVar2 < 9);
  *(uint64_t *)(param_1 + 0x8240) = 0;
  *(uint64_t *)(param_1 + 0x8238) = 0;
  *(uint64_t *)(param_1 + 0x8278) = 0xffffffffffffffff;
  *(uint64_t *)(param_1 + 0x8298) = 0xffffffffffffffff;
  *(uint64_t *)(param_1 + 0x8280) = 0xffffffffffffffff;
  *(uint64_t *)(param_1 + 0x8288) = 0xffffffffffffffff;
  *(uint64_t *)(param_1 + 0x8290) = 0xffffffffffffffff;
  *(uint64_t *)(param_1 + 0x82a0) = 0xffffffffffffffff;
  return;
}





// 函数: void FUN_18029cb40(int64_t param_1)
void FUN_18029cb40(int64_t param_1)

{
  int32_t *puVar1;
  int iVar2;
  uint64_t *puVar3;
  uint64_t uStackX_10;
  
  iVar2 = 0;
  puVar1 = (int32_t *)(param_1 + 0x8a38);
  puVar3 = (uint64_t *)(param_1 + 0x8438);
  do {
    uStackX_10 = 0;
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 200))
              (*(int64_t **)(param_1 + 0x8400),iVar2,1,&uStackX_10);
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x1f8))
              (*(int64_t **)(param_1 + 0x8400),iVar2,1,&uStackX_10);
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x1d8))
              (*(int64_t **)(param_1 + 0x8400),iVar2,1,&uStackX_10);
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0xf8))
              (*(int64_t **)(param_1 + 0x8400),iVar2,1,&uStackX_10);
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x40))
              (*(int64_t **)(param_1 + 0x8400),iVar2,1,&uStackX_10);
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x218))
              (*(int64_t **)(param_1 + 0x8400),iVar2,1,&uStackX_10);
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + 1;
    puVar1[-0x80] = 0xffffffff;
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 0x80);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



