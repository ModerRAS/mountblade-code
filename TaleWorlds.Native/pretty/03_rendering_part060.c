#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part060.c - 7 个函数
// 函数: void function_29b540(int64_t *param_1,uint64_t param_2)
void function_29b540(int64_t *param_1,uint64_t param_2)
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
  int8_t stack_array_518 [32];
  uint *plocal_var_4f8;
  uint local_var_4f0;
  int32_t local_var_4e8;
  int32_t local_var_4e0;
  int32_t local_var_4d8;
  uint64_t local_var_4d0;
  int8_t local_var_4c8;
  int32_t local_var_4c0;
  int8_t stack_array_4b8 [8];
  int64_t *plStack_4b0;
  uint local_var_4a8;
  uint local_var_4a4;
  uint local_var_4a0;
  uint local_var_49c;
  uint local_var_498;
  uint local_var_494;
  uint local_var_490;
  uint64_t local_var_488;
  uint64_t local_var_480;
  uint local_var_478;
  uint local_var_474;
  uint64_t local_var_470;
  int64_t *plStack_468;
  int64_t *plStack_460;
  int64_t *plStack_458;
  int32_t local_var_450;
  int64_t *plStack_448;
  int64_t *plStack_440;
  int64_t *plStack_438;
  int64_t *plStack_430;
  void **pplocal_var_428;
  uint *plocal_var_420;
  int32_t local_var_418;
  int16_t local_var_414;
  ushort local_var_412;
  uint64_t local_var_410;
  uint64_t stack_array_408 [2];
  void *plocal_var_3f8;
  uint64_t local_var_3f0;
  int32_t local_var_3e8;
  int32_t local_var_3e4;
  uint stack_array_3e0 [3];
  int16_t local_var_3d4;
  int8_t local_var_3d2;
  int32_t local_var_3d1;
  int16_t local_var_3cd;
  int32_t local_var_3c8;
  int8_t local_var_3c4;
  void *plocal_var_398;
  uint *plocal_var_390;
  uint64_t local_var_388;
  uint stack_array_380 [2];
  int64_t *plStack_378;
  void *plocal_var_370;
  int64_t lStack_368;
  int32_t local_var_360;
  uint64_t local_var_358;
  int32_t local_var_350;
  int32_t local_var_34c;
  int32_t local_var_348;
  int32_t local_var_344;
  int64_t *plStack_340;
  void *plocal_var_2f8;
  int8_t *plocal_var_2f0;
  int32_t local_var_2e8;
  int8_t stack_array_2e0 [72];
  void *plocal_var_298;
  int8_t *plocal_var_290;
  int32_t local_var_288;
  int8_t stack_array_280 [136];
  void *plocal_var_1f8;
  int8_t *plocal_var_1f0;
  int32_t local_var_1e8;
  int8_t stack_array_1e0 [136];
  void *plocal_var_158;
  uint *plocal_var_150;
  int32_t local_var_148;
  int32_t local_var_144;
  uint stack_array_140 [2];
  uint64_t local_var_138;
  int8_t stack_array_130 [32];
  int32_t local_var_110;
  int32_t local_var_10c;
  int32_t local_var_108;
  int32_t local_var_104;
  int64_t *plStack_100;
  void *plocal_var_b8;
  int8_t *plocal_var_b0;
  int32_t local_var_a8;
  int8_t stack_array_a0 [72];
  uint64_t local_var_58;
  local_var_410 = 0xfffffffffffffffe;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_518;
  local_var_488 = param_2;
  SystemData_Processor(stack_array_4b8,&processed_var_808_ptr);
  if (param_2 != 0) {
    plVar13 = (int64_t *)0x0;
    if (param_1[0x1049] == 0) {
      plocal_var_2f8 = &processed_var_672_ptr;
      plocal_var_2f0 = stack_array_2e0;
      stack_array_2e0[0] = 0;
      local_var_2e8 = 0x13;
      uVar22 = strcpy_s(stack_array_2e0,0x20,&processed_var_864_ptr);
      local_var_4c0 = 1;
      local_var_4c8 = 0;
      local_var_4d0 = 0;
      local_var_4d8 = 1;
      local_var_4e0 = 0x20;
      local_var_4e8 = 0;
      local_var_4f0 = 3;
      plocal_var_4f8 = (uint *)CONCAT44(plocal_var_4f8._4_4_,0x220);
      plVar8 = (int64_t *)SystemCore_ConfigManager(uVar22,&plStack_4b0,0xffffffff,&plocal_var_2f8);
      lVar18 = *plVar8;
      *plVar8 = 0;
      local_var_480 = (int64_t *)param_1[0x1049];
      param_1[0x1049] = lVar18;
      if (local_var_480 != (int64_t *)0x0) {
        (**(code **)(*local_var_480 + 0x38))();
      }
      if (plStack_4b0 != (int64_t *)0x0) {
        (**(code **)(*plStack_4b0 + 0x38))();
      }
      plocal_var_2f8 = &system_state_ptr;
    }
    local_var_3e4 = 0;
    stack_array_3e0[0] = 0;
    stack_array_3e0[1] = 0;
    stack_array_3e0[2] = 0x3f800000;
    local_var_3d4 = 0x100;
    local_var_3d1 = 0;
    local_var_3cd = 0;
    local_var_3c4 = 0;
    local_var_3e8 = 7;
    local_var_3d2 = 1;
    plocal_var_3f8 = (void *)0x1000000010;
    local_var_3c8 = *(int32_t *)(param_2 + 0x1e8);
    uVar22 = 1;
    if (1 < *(ushort *)(param_2 + 0x332)) {
      uVar22 = 2;
    }
    local_var_3f0 = (uint *)CONCAT44(1,uVar22);
    if (1 < *(byte *)(param_2 + 0x335)) {
      plocal_var_158 = &memory_allocator_3432_ptr;
      plocal_var_150 = stack_array_140;
      stack_array_140[0] = stack_array_140[0] & 0xffffff00;
      local_var_148 = 10;
      strcpy_s(stack_array_140,0x80,&processed_var_888_ptr);
      SystemInitializer(system_resource_state,&plStack_430,&plocal_var_158,&plocal_var_3f8);
      plocal_var_158 = &system_state_ptr;
      plocal_var_398 = &memory_allocator_3432_ptr;
      plocal_var_390 = stack_array_380;
      stack_array_380[0] = stack_array_380[0] & 0xffffff00;
      local_var_388 = CONCAT44(local_var_388._4_4_,10);
      strcpy_s(stack_array_380,0x80,&processed_var_832_ptr);
      SystemInitializer(system_resource_state,&plStack_438,&plocal_var_398,&plocal_var_3f8);
      plocal_var_398 = &system_state_ptr;
      plocal_var_1f8 = &memory_allocator_3432_ptr;
      plocal_var_1f0 = stack_array_1e0;
      stack_array_1e0[0] = 0;
      local_var_1e8 = 10;
      strcpy_s(stack_array_1e0,0x80,&processed_var_848_ptr);
      SystemInitializer(system_resource_state,&plStack_440,&plocal_var_1f8,&plocal_var_3f8);
      plocal_var_1f8 = &system_state_ptr;
      plocal_var_298 = &memory_allocator_3432_ptr;
      plocal_var_290 = stack_array_280;
      stack_array_280[0] = 0;
      local_var_288 = 10;
      strcpy_s(stack_array_280,0x80,&processed_var_904_ptr);
      SystemInitializer(system_resource_state,&plStack_448,&plocal_var_298,&plocal_var_3f8);
      plocal_var_298 = &system_state_ptr;
      bVar1 = *(byte *)(param_2 + 0x335);
      uVar2 = *(ushort *)(param_2 + 0x332);
      uVar3 = *(ushort *)(param_2 + 0x32c);
      local_var_498 = (uint)uVar3;
      local_var_478 = (uint)*(ushort *)(param_2 + 0x32e);
      local_var_4a0 = bVar1 - 1;
      local_var_49c = (uint)uVar2;
      local_var_494 = (uint)bVar1;
      (**(code **)(*param_1 + 0x70))(param_1,param_2,0x40);
      plStack_468 = (int64_t *)0x0;
      plStack_460 = (int64_t *)0x0;
      plStack_458 = (int64_t *)0x0;
      local_var_450 = 3;
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
          param_2 = local_var_488;
          plVar19 = plVar10;
          uVar14 = local_var_4a0;
          uVar6 = local_var_498;
          uVar16 = local_var_49c;
        } while (plStack_4b0 != (int64_t *)0x0);
      }
      local_var_4a8 = 0;
      plStack_4b0 = plStack_460;
      uVar15 = local_var_49c;
      if (uVar16 != 0) {
        do {
          uVar17 = 0;
          local_var_490 = 0;
          uVar16 = (uint)plVar13;
          if (uVar14 != 0) {
            do {
              uVar6 = uVar6 >> ((byte)uVar17 & 0x1f);
              local_var_470 = CONCAT44(local_var_470._4_4_,uVar6);
              uVar14 = local_var_478 >> ((byte)uVar17 & 0x1f);
              local_var_488 = CONCAT44(local_var_488._4_4_,uVar14);
              local_var_474 = uVar6 >> 1;
              local_var_4a4 = uVar14 >> 1;
              uVar14 = (uVar14 & 1) * 2 | uVar6 & 1;
              puVar11 = (void *)function_0c0070();
              puVar20 = (uint *)0x0;
              if (uVar14 == 0) {
                plocal_var_2f8 = &memory_allocator_3480_ptr;
                plocal_var_2f0 = stack_array_2e0;
                stack_array_2e0[0] = 0;
                local_var_2e8 = 0xc;
                strcpy_s(stack_array_2e0,0x40,&rendering_buffer_2520_ptr);
                puVar20 = (uint *)SystemCore_LoggingSystem0(puVar11,&plocal_var_2f8,1);
                plocal_var_2f8 = &system_state_ptr;
              }
              else if (uVar14 == 1) {
                plocal_var_3f8 = &memory_allocator_3480_ptr;
                local_var_3f0 = stack_array_3e0;
                stack_array_3e0[0] = stack_array_3e0[0] & 0xffffff00;
                local_var_3e8 = 0x12;
                strcpy_s(stack_array_3e0,0x40,&rendering_buffer_2664_ptr);
                puVar20 = (uint *)SystemCore_LoggingSystem0(puVar11,&plocal_var_3f8,1);
                plocal_var_3f8 = &system_state_ptr;
              }
              else if (uVar14 == 2) {
                plocal_var_b8 = &memory_allocator_3480_ptr;
                plocal_var_b0 = stack_array_a0;
                stack_array_a0[0] = 0;
                local_var_a8 = 0x12;
                strcpy_s(stack_array_a0,0x40,&rendering_buffer_2688_ptr);
                puVar20 = (uint *)SystemCore_LoggingSystem0(puVar11,&plocal_var_b8,1);
                plocal_var_b8 = &system_state_ptr;
              }
              else if (uVar14 == 3) {
                plocal_var_298 = &memory_allocator_3480_ptr;
                plocal_var_290 = stack_array_280;
                stack_array_280[0] = 0;
                local_var_288 = 0x13;
                strcpy_s(stack_array_280,0x40,&rendering_buffer_2624_ptr);
                puVar20 = (uint *)SystemCore_LoggingSystem0(puVar11,&plocal_var_298,1);
                plocal_var_298 = &system_state_ptr;
              }
              if (1 < *(ushort *)(param_2 + 0x332)) {
                plocal_var_1f8 = &memory_allocator_3480_ptr;
                plocal_var_1f0 = stack_array_1e0;
                stack_array_1e0[0] = 0;
                local_var_1e8 = 0xd;
                strcpy_s(stack_array_1e0,0x40,&rendering_buffer_2760_ptr);
                uVar12 = SystemCore_LoggingSystem0(puVar11,&plocal_var_1f8,1);
                puVar20 = (uint *)((uint64_t)puVar20 | uVar12);
                plocal_var_1f8 = &system_state_ptr;
              }
              local_var_418 = 0;
              local_var_414 = 0;
              plStack_378 = (int64_t *)0x0;
              plocal_var_370 = &system_data_buffer_ptr;
              local_var_358 = 0;
              lStack_368 = 0;
              local_var_360 = 0;
              plStack_340 = (int64_t *)0x0;
              stack_array_380[0] = 2;
              local_var_350 = 0;
              local_var_34c = 0;
              local_var_348 = 0;
              local_var_344 = 0;
              uVar4 = *(uint64_t *)(puVar11 + 0x15b8);
              pplocal_var_428 = &plocal_var_158;
              local_var_388._4_4_ = (int32_t)(((uint64_t)local_var_412 << 0x30) >> 0x20);
              local_var_148 = 0;
              local_var_144 = local_var_388._4_4_;
              stack_array_140[0] = 2;
              local_var_138 = 0;
              plocal_var_420 = puVar20;
              plocal_var_398 = puVar11;
              plocal_var_390 = puVar20;
              local_var_388 = (uint64_t)local_var_412 << 0x30;
              plocal_var_158 = puVar11;
              plocal_var_150 = puVar20;
              CoreEngineDataTransformer(stack_array_130,&plocal_var_370);
              local_var_110 = local_var_350;
              local_var_10c = local_var_34c;
              local_var_108 = local_var_348;
              local_var_104 = local_var_344;
              plStack_100 = plStack_340;
              if (plStack_340 != (int64_t *)0x0) {
                (**(code **)(*plStack_340 + 0x28))();
              }
              stack_array_408[0] = UIRenderingEngine(uVar4,0,&plocal_var_158,stack_array_4b8);
              (**(code **)(*param_1 + 0xc0))(param_1,stack_array_408);
              uVar14 = local_var_4a4;
              if (local_var_4a4 == 1) {
                uVar14 = local_var_474;
              }
              uVar6 = local_var_474;
              if (local_var_474 == 1) {
                uVar6 = local_var_4a4;
              }
              uVar16 = 0;
              if ((uVar14 | uVar6) != 0) {
                for (; ((uVar14 | uVar6) >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
                }
              }
              if (3 < uVar16) {
                uVar16 = 3;
              }
              uVar14 = local_var_4a0 - uVar17;
              if (uVar16 + 1 + uVar17 <= local_var_4a0) {
                uVar14 = uVar16 + 1;
              }
              bVar21 = 1 < (uint)local_var_470;
              local_var_470 = 1;
              if (bVar21) {
                local_var_470 = (uint64_t)local_var_474;
              }
              bVar21 = 1 < (uint)local_var_488;
              local_var_488 = 1;
              if (bVar21) {
                local_var_488 = (uint64_t)local_var_4a4;
              }
              *(uint *)((int64_t)param_1 + 0x8254) = uVar14;
              plocal_var_4f8 = (uint *)(param_1 + 0x104a);
              *plocal_var_4f8 = uVar17;
              local_var_480 = (int64_t *)CONCAT44(1.0 / (float)local_var_488,1.0 / (float)local_var_470);
              param_1[0x104c] = (int64_t)local_var_480;
              local_var_4f0 = 0x20;
              local_var_4a4 = uVar14;
              (**(code **)(*param_1 + 0x280))(param_1,0xb,param_1[0x1049]);
              local_var_4f0 = (uint)*(ushort *)(param_2 + 0x332);
              plocal_var_4f8._0_4_ = (uint)*(byte *)(param_2 + 0x335);
              iVar7 = (**(code **)(*param_1 + 0x40))(param_1,uVar17,local_var_4a8,0);
              plVar13 = plStack_468;
              if (*(int *)((int64_t)plStack_468 + (int64_t)iVar7 * 4) != 0x40) {
                plocal_var_4f8._0_4_ = 0x40;
                (**(code **)(*param_1 + 0x78))(param_1,param_2,iVar7);
              }
              *(int *)((int64_t)plVar13 + (int64_t)iVar7 * 4) = 0x40;
              plocal_var_4f8._0_4_ = iVar7;
              (**(code **)(*param_1 + 0xd8))(param_1,0,param_2,0x20);
              local_var_4f0 = local_var_4f0 & 0xffffff00;
              plocal_var_4f8._0_4_ = 0;
              (**(code **)(*param_1 + 0xe8))(param_1,0,1,0);
              local_var_4f0._0_1_ = 1;
              plocal_var_4f8._0_4_ = 0xffffffff;
              (**(code **)(*param_1 + 0xe8))(param_1,1,1,plStack_430);
              local_var_4f0._0_1_ = 1;
              plocal_var_4f8._0_4_ = 0xffffffff;
              (**(code **)(*param_1 + 0xe8))(param_1,2,1,plStack_438);
              local_var_4f0._0_1_ = 1;
              plocal_var_4f8._0_4_ = 0xffffffff;
              (**(code **)(*param_1 + 0xe8))(param_1,3,1,plStack_440);
              local_var_4f0 = CONCAT31(local_var_4f0._1_3_,1);
              plocal_var_4f8 = (uint *)CONCAT44(plocal_var_4f8._4_4_,0xffffffff);
              (**(code **)(*param_1 + 0xe8))(param_1,4,1,plStack_448);
              plVar13 = plStack_468;
              if (local_var_4a4 != 0) {
                uVar12 = (uint64_t)local_var_4a4;
                uVar6 = local_var_494;
                uVar14 = uVar17;
                do {
                  uVar14 = uVar14 + 1;
                  if (uVar14 < uVar6) {
                    local_var_4f0 = (uint)*(ushort *)(param_2 + 0x332);
                    plocal_var_4f8._0_4_ = (uint)*(byte *)(param_2 + 0x335);
                    iVar7 = (**(code **)(*param_1 + 0x40))(param_1,uVar14,local_var_4a8,0);
                    local_var_4f0 = local_var_4f0 & 0xffffff00;
                    plocal_var_4f8 = (uint *)CONCAT44(plocal_var_4f8._4_4_,iVar7);
                    (**(code **)(*param_1 + 0xe8))(param_1,uVar14 - uVar17,1,param_2);
                    if (*(int *)((int64_t)plVar13 + (int64_t)iVar7 * 4) != 0x80) {
                      plocal_var_4f8 = (uint *)CONCAT44(plocal_var_4f8._4_4_,0x80);
                      (**(code **)(*param_1 + 0x78))(param_1,param_2,iVar7);
                    }
                    *(int *)((int64_t)plVar13 + (int64_t)iVar7 * 4) = 0x80;
                    uVar6 = local_var_494;
                    uVar17 = local_var_490;
                  }
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              uVar14 = local_var_4a4;
              (**(code **)(*param_1 + 0x118))
                        (param_1,(int)local_var_470 + 7U >> 3,(int)local_var_488 + 7U >> 3,1);
              puVar11 = (void *)*param_1;
              if (puVar11 != &rendering_buffer_2024_ptr) {
                (**(code **)(puVar11 + 0xa0))(param_1);
                puVar11 = (void *)*param_1;
              }
              (**(code **)(puVar11 + 0x20))(param_1,param_2);
              uVar17 = uVar17 + uVar14;
              local_var_490 = uVar17;
              if (plStack_340 != (int64_t *)0x0) {
                (**(code **)(*plStack_340 + 0x38))();
              }
              pplocal_var_428 = &plocal_var_370;
              plocal_var_370 = &system_data_buffer_ptr;
              if (lStack_368 != 0) {
// WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner();
              }
              lStack_368 = 0;
              local_var_358 = local_var_358 & 0xffffffff00000000;
              plocal_var_370 = &system_state_ptr;
              if (plStack_378 != (int64_t *)0x0) {
                (**(code **)(*plStack_378 + 0x38))();
              }
              uVar14 = local_var_4a0;
              uVar6 = local_var_498;
              uVar15 = local_var_49c;
              uVar16 = local_var_4a8;
            } while (uVar17 < local_var_4a0);
          }
          local_var_4a8 = uVar16 + 1;
          plVar13 = (int64_t *)(uint64_t)local_var_4a8;
          uVar6 = local_var_498;
        } while (local_var_4a8 < uVar15);
      }
      plVar13 = plStack_468;
      iVar7 = 0;
      plVar8 = (int64_t *)((int64_t)plStack_4b0 - (int64_t)plStack_468 >> 2);
      plVar19 = plStack_468;
      plStack_4b0 = plVar8;
      if (plVar8 != (int64_t *)0x0) {
        do {
          if ((int)*plVar19 != 0x40) {
            plocal_var_4f8 = (uint *)CONCAT44(plocal_var_4f8._4_4_,0x40);
            (**(code **)(*param_1 + 0x78))(param_1,param_2,iVar7);
            plVar8 = plStack_4b0;
          }
          iVar7 = iVar7 + 1;
          plVar19 = (int64_t *)((int64_t)plVar19 + 4);
        } while ((int64_t *)(int64_t)iVar7 < plVar8);
      }
      (**(code **)(*param_1 + 0x70))(param_1,param_2,0x20);
      *(uint *)(param_2 + 0x35c) = uVar14;
      local_var_4f0._0_1_ = 1;
      plocal_var_4f8._0_4_ = 0xffffffff;
      (**(code **)(*param_1 + 0xe8))(param_1,1,1);
      local_var_4f0._0_1_ = 1;
      plocal_var_4f8._0_4_ = 0xffffffff;
      (**(code **)(*param_1 + 0xe8))(param_1,2,1);
      local_var_4f0._0_1_ = 1;
      plocal_var_4f8._0_4_ = 0xffffffff;
      (**(code **)(*param_1 + 0xe8))(param_1,3,1);
      local_var_4f0 = CONCAT31(local_var_4f0._1_3_,1);
      plocal_var_4f8 = (uint *)CONCAT44(plocal_var_4f8._4_4_,0xffffffff);
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
  SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_518);
}
// 函数: void function_29c460(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_29c460(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
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
    function_0f74f0(param_1 + 0x2e8,*puVar2);
    puVar2[4] = &system_state_ptr;
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar2);
  }
  RenderingSystem_CameraSystem(param_1 + 0x2b8,*(uint64_t *)(param_1 + 0x2c8),param_3,param_4,0xfffffffffffffffe)
  ;
  RenderingSystem_CameraSystem(param_1 + 0x288,*(uint64_t *)(param_1 + 0x298));
  RenderingSystem_CameraSystem(param_1 + 600,*(uint64_t *)(param_1 + 0x268));
  SystemDataValidator(param_1 + 0x1b8,0x20,5,function_046860);
  if (*plVar1 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  SystemDataValidator(param_1 + 200,0x20,5,function_046860);
  lVar3 = *(int64_t *)(param_1 + 0xb0);
  for (lVar4 = *(int64_t *)(param_1 + 0xa8); lVar4 != lVar3; lVar4 = lVar4 + 0x40) {
    function_152b00(lVar4);
  }
  if (*(int64_t *)(param_1 + 0xa8) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
// 函数: void function_29c680(int64_t *param_1)
void function_29c680(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x40) {
    function_152b00(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// 函数: void function_29c6e0(int64_t *param_1)
void function_29c6e0(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x40) {
    function_152b00(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
int64_t function_29c700(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  lVar3 = param_1 + 100;
  lVar1 = 4;
  lVar2 = 4;
  do {
    Function_3e2a2a4f(lVar3);
    lVar3 = lVar3 + 8;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  lVar3 = param_1 + 0x84;
  do {
    Function_3e2a2a4f(lVar3);
    lVar3 = lVar3 + 8;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  *(uint64_t *)(param_1 + 0xa8) = 0;
  *(uint64_t *)(param_1 + 0xb0) = 0;
  *(uint64_t *)(param_1 + 0xb8) = 0;
  *(int32_t *)(param_1 + 0xc0) = 3;
  DataStructureManager(param_1 + 200,0x20,5,function_056de0,function_046860);
  *(uint64_t *)(param_1 + 0x170) = 0;
  *(uint64_t *)(param_1 + 0x178) = 0;
  *(uint64_t *)(param_1 + 0x180) = 0;
  *(int32_t *)(param_1 + 0x188) = 3;
  DataStructureManager(param_1 + 0x1b8,0x20,5,function_056de0,function_046860);
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
// 函数: void UtilitiesSystem_MathCalculator(int64_t param_1,uint param_2,uint64_t param_3,int32_t param_4,
void UtilitiesSystem_MathCalculator(int64_t param_1,uint param_2,uint64_t param_3,int32_t param_4,
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
// 函数: void function_29c9d0(int64_t param_1)
void function_29c9d0(int64_t param_1)
{
  int64_t lVar1;
  int iVar2;
  uint64_t stack_special_x_8;
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
    stack_special_x_8 = *(uint64_t *)(lVar1 + system_message_buffer);
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0xd0))
              (*(int64_t **)(param_1 + 0x8400),iVar2,1,&stack_special_x_8);
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x208))
              (*(int64_t **)(param_1 + 0x8400),iVar2,1,&stack_special_x_8);
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x50))
              (*(int64_t **)(param_1 + 0x8400),iVar2,1,&stack_special_x_8);
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x230))
              (*(int64_t **)(param_1 + 0x8400),iVar2,1,&stack_special_x_8);
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
// 函数: void function_29cb40(int64_t param_1)
void function_29cb40(int64_t param_1)
{
  int32_t *puVar1;
  int iVar2;
  uint64_t *puVar3;
  uint64_t stack_special_x_10;
  iVar2 = 0;
  puVar1 = (int32_t *)(param_1 + 0x8a38);
  puVar3 = (uint64_t *)(param_1 + 0x8438);
  do {
    stack_special_x_10 = 0;
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 200))
              (*(int64_t **)(param_1 + 0x8400),iVar2,1,&stack_special_x_10);
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x1f8))
              (*(int64_t **)(param_1 + 0x8400),iVar2,1,&stack_special_x_10);
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x1d8))
              (*(int64_t **)(param_1 + 0x8400),iVar2,1,&stack_special_x_10);
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0xf8))
              (*(int64_t **)(param_1 + 0x8400),iVar2,1,&stack_special_x_10);
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x40))
              (*(int64_t **)(param_1 + 0x8400),iVar2,1,&stack_special_x_10);
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x218))
              (*(int64_t **)(param_1 + 0x8400),iVar2,1,&stack_special_x_10);
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