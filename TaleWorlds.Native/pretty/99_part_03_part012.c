/* FUN_函数别名定义 */
#define ResourceManager_Allocate ResourceManager_Allocate  // ResourceManager_Allocate 的语义化别名
#define DataProcessor_HandleOperation DataProcessor_HandleOperation  // DataProcessor_HandleOperation 的语义化别名
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// $fun 的语义化别名
#define $alias_name $fun


// $fun 的语义化别名
#define $alias_name $fun


// 99_part_03_part012.c - 4 个函数

// 函数: void FUN_1801d6240(uint64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)
void FUN_1801d6240(uint64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  void *puVar7;
  void *puVar8;
  int8_t auStack_368 [32];
  int64_t *plStack_348;
  void *puStack_340;
  void *puStack_338;
  int32_t uStack_330;
  uint64_t uStack_328;
  void *puStack_320;
  int64_t lStack_318;
  int32_t uStack_310;
  uint64_t uStack_308;
  void *puStack_300;
  int64_t lStack_2f8;
  int32_t uStack_2f0;
  uint64_t uStack_2e8;
  int64_t **pplStack_2e0;
  uint64_t **ppuStack_2d8;
  void *puStack_2d0;
  int64_t lStack_2c8;
  int32_t uStack_2b8;
  void *puStack_2b0;
  int64_t lStack_2a8;
  int32_t uStack_298;
  void *puStack_290;
  int64_t lStack_288;
  int32_t uStack_278;
  uint64_t auStack_270 [2];
  code *pcStack_260;
  void *puStack_258;
  uint64_t uStack_250;
  uint64_t *puStack_248;
  uint64_t *puStack_240;
  int8_t auStack_238 [32];
  int8_t auStack_218 [32];
  int8_t auStack_1f8 [32];
  int8_t auStack_1d8 [112];
  void *apuStack_168 [36];
  uint64_t uStack_48;
  
  puVar1 = system_global_data_ptr;
  uStack_250 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_368;
  puStack_300 = &system_data_buffer_ptr;
  uStack_2e8 = 0;
  lStack_2f8 = 0;
  uStack_2f0 = 0;
  puStack_320 = &system_data_buffer_ptr;
  uStack_308 = 0;
  lStack_318 = 0;
  uStack_310 = 0;
  lVar2 = FUN_1806240a0(apuStack_168);
  puVar7 = &system_buffer_ptr;
  if (*(void **)(lVar2 + 8) != (void *)0x0) {
    puVar7 = *(void **)(lVar2 + 8);
  }
  System_DataHandler(&puStack_300,&rendering_buffer_2384_ptr,puVar7);
  apuStack_168[0] = &system_state_ptr;
  lVar2 = FUN_1806240a0(apuStack_168);
  puVar7 = &system_buffer_ptr;
  if (*(void **)(lVar2 + 8) != (void *)0x0) {
    puVar7 = *(void **)(lVar2 + 8);
  }
  System_DataHandler(&puStack_320,&rendering_buffer_2440_ptr,puVar7);
  apuStack_168[0] = &system_state_ptr;
  FUN_18062dce0(&puStack_300,&puStack_320);
  puStack_340 = &system_data_buffer_ptr;
  uStack_328 = 0;
  puStack_338 = (void *)0x0;
  uStack_330 = 0;
  puVar7 = &system_buffer_ptr;
  if (*(void **)(param_3 + 8) != (void *)0x0) {
    puVar7 = *(void **)(param_3 + 8);
  }
  puVar8 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar8 = *(void **)(param_2 + 8);
  }
  System_DataHandler(&puStack_340,&system_callback2_ptr,puVar8,puVar7);
  puVar7 = &system_buffer_ptr;
  if (puStack_338 != (void *)0x0) {
    puVar7 = puStack_338;
  }
  (**(code **)(system_system_control_memory + 0x10))(&system_data_5208,puVar7);
  uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x580,8,3);
  plVar4 = (int64_t *)FUN_1803e8a40(uVar3,param_2);
  *puVar1 = plVar4;
  (**(code **)(*plVar4 + 0x28))(plVar4);
  *(int8_t *)(system_main_module_state + 0x60) = 1;
  SystemCore_EncryptionEngine0(&puStack_290,param_2);
  SystemCore_EncryptionEngine0(&puStack_2b0,param_3);
  SystemCore_EncryptionEngine0(&puStack_2d0,param_4);
  uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
  puStack_248 = auStack_270;
  ppuStack_2d8 = &puStack_240;
  puStack_240 = puVar1;
  CoreEngineDataTransformer(auStack_238,&puStack_290);
  CoreEngineDataTransformer(auStack_218,&puStack_2b0);
  CoreEngineDataTransformer(auStack_1f8,&puStack_2d0);
  ppuStack_2d8 = &puStack_240;
  uVar5 = FUN_1801e8100(auStack_1d8,&puStack_240);
  pcStack_260 = FUN_1801eb1e0;
  puStack_258 = &rendering_buffer_2544_ptr;
  pplStack_2e0 = (int64_t **)uVar5;
  uVar6 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x68,8,system_allocation_flags);
  FUN_1801e8100(uVar6,uVar5);
  auStack_270[0] = uVar6;
  FUN_1801d7360(uVar5);
  FUN_1801d7360(&puStack_240);
  plVar4 = (int64_t *)SystemCore_ErrorHandler(uVar3,auStack_270);
  if (plVar4 != (int64_t *)0x0) {
    plStack_348 = plVar4;
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  plStack_348 = (int64_t *)puVar1[9];
  puVar1[9] = plVar4;
  if (plStack_348 != (int64_t *)0x0) {
    (**(code **)(*plStack_348 + 0x38))();
  }
  *(uint64_t *)(puVar1[9] + 0x18) = 0xfffffffffffffffd;
  uVar3 = system_context_ptr;
  pplStack_2e0 = &plStack_348;
  plStack_348 = (int64_t *)puVar1[9];
  if (plStack_348 != (int64_t *)0x0) {
    (**(code **)(*plStack_348 + 0x28))();
  }
  SystemCore_TimerManager(uVar3,&plStack_348);
  puStack_2d0 = &system_data_buffer_ptr;
  if (lStack_2c8 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_2c8 = 0;
  uStack_2b8 = 0;
  puStack_2d0 = &system_state_ptr;
  puStack_2b0 = &system_data_buffer_ptr;
  if (lStack_2a8 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_2a8 = 0;
  uStack_298 = 0;
  puStack_2b0 = &system_state_ptr;
  puStack_290 = &system_data_buffer_ptr;
  if (lStack_288 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_288 = 0;
  uStack_278 = 0;
  puStack_290 = &system_state_ptr;
  puStack_340 = &system_data_buffer_ptr;
  if (puStack_338 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_338 = (void *)0x0;
  uStack_328 = uStack_328 & 0xffffffff00000000;
  puStack_340 = &system_state_ptr;
  puStack_320 = &system_data_buffer_ptr;
  if (lStack_318 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_318 = 0;
  uStack_308 = uStack_308 & 0xffffffff00000000;
  puStack_320 = &system_state_ptr;
  puStack_300 = &system_data_buffer_ptr;
  if (lStack_2f8 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_2f8 = 0;
  uStack_2e8 = uStack_2e8 & 0xffffffff00000000;
  puStack_300 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_368);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801d6680(int64_t param_1)
void FUN_1801d6680(int64_t param_1)

{
  int32_t uVar1;
  uint64_t *puVar2;
  int iVar3;
  void **ppuVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t *plVar10;
  void **ppuVar11;
  void *puVar12;
  int8_t *puVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  uint64_t uVar17;
  void **ppuVar18;
  uint64_t *puVar19;
  int64_t lVar20;
  uint64_t *puVar21;
  uint64_t *puVar22;
  uint64_t uVar23;
  int64_t *plVar24;
  void *puVar25;
  uint64_t uVar26;
  uint *puVar27;
  uint64_t uVar28;
  uint64_t uVar29;
  int64_t lVar30;
  int8_t auStack_338 [32];
  code *pcStack_318;
  int8_t uStack_308;
  int iStack_304;
  void **ppuStack_300;
  uint uStack_2f8;
  int iStack_2f4;
  int64_t lStack_2f0;
  int *piStack_2e8;
  uint64_t uStack_2e0;
  int16_t uStack_2d8;
  int8_t uStack_2d6;
  void *puStack_2d0;
  void *puStack_2c8;
  uint uStack_2c0;
  uint64_t uStack_2b8;
  void *puStack_2b0;
  int64_t lStack_2a8;
  int32_t uStack_2a0;
  uint64_t uStack_298;
  int64_t lStack_290;
  int64_t lStack_288;
  void *puStack_280;
  int64_t lStack_278;
  int32_t uStack_270;
  uint64_t uStack_268;
  void *puStack_260;
  void *puStack_258;
  int32_t uStack_250;
  uint64_t uStack_248;
  uint64_t *puStack_240;
  uint64_t uStack_238;
  int64_t lStack_230;
  int64_t lStack_228;
  int64_t lStack_220;
  int64_t alStack_218 [2];
  int64_t lStack_208;
  void **ppuStack_200;
  uint64_t uStack_1f8;
  uint64_t uStack_1f0;
  int32_t uStack_1e8;
  int32_t uStack_1e4;
  uint auStack_1d8 [2];
  int64_t *plStack_1d0;
  uint64_t *puStack_1c8;
  uint64_t *puStack_1c0;
  uint64_t uStack_1b8;
  int32_t uStack_1b0;
  uint64_t *puStack_1a8;
  uint64_t *puStack_1a0;
  uint64_t uStack_198;
  int32_t uStack_190;
  void *puStack_188;
  void *puStack_180;
  int32_t uStack_170;
  int64_t lStack_168;
  int64_t lStack_160;
  uint64_t uStack_158;
  int32_t uStack_150;
  uint64_t uStack_148;
  uint64_t uStack_140;
  uint64_t uStack_138;
  void **ppuStack_130;
  void **ppuStack_128;
  uint64_t uStack_120;
  void **ppuStack_118;
  void **ppuStack_110;
  void **ppuStack_108;
  void **ppuStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  void *puStack_d8;
  void *puStack_d0;
  int32_t uStack_c8;
  uint8_t auStack_c0 [136];
  uint64_t uStack_38;
  
  uStack_120 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_338;
  uVar8 = DataProcessor_HandleOperation(param_1,param_1 + 8,param_1 + 0x28);
  CoreMemoryPoolValidator(&puStack_188,uVar8);
  puStack_1a8 = (uint64_t *)0x0;
  puStack_1a0 = (uint64_t *)0x0;
  uStack_198 = 0;
  uStack_190 = 3;
  FUN_18062c5f0(param_1 + 0x48,&puStack_1a8);
  iStack_2f4 = 0;
  uStack_1f8 = (int64_t)puStack_1a0 - (int64_t)puStack_1a8 >> 5;
  puVar21 = puStack_1a8;
  puVar2 = puStack_1a0;
  puVar22 = puStack_1a8;
  if (uStack_1f8 != 0) {
    lStack_220 = 0;
    do {
      iVar6 = iStack_2f4;
      puStack_1c8 = (uint64_t *)0x0;
      puStack_1c0 = (uint64_t *)0x0;
      uStack_1b8 = 0;
      uStack_1b0 = 3;
      puStack_280 = &system_data_buffer_ptr;
      uStack_268 = 0;
      lStack_278 = 0;
      uStack_270 = 0;
      puVar12 = &system_buffer_ptr;
      if ((void *)puVar21[lStack_220 * 4 + 1] != (void *)0x0) {
        puVar12 = (void *)puVar21[lStack_220 * 4 + 1];
      }
      System_DataHandler(&puStack_280,&rendering_buffer_2344_ptr,puVar12);
      FUN_18062c5f0(&puStack_280,&puStack_1c8);
      iStack_304 = 0;
      lStack_288 = 0;
      puStack_240 = puStack_1c8;
      uVar29 = (int64_t)puStack_1c0 - (int64_t)puStack_1c8 >> 5;
      uStack_238 = uVar29;
      if (uVar29 != 0) {
        do {
          lVar9 = lStack_288;
          iVar6 = iStack_304;
          uVar23 = 0;
          puStack_2d0 = &system_data_buffer_ptr;
          uStack_2b8 = 0;
          puStack_2c8 = (void *)0x0;
          uStack_2c0 = 0;
          puVar12 = &system_buffer_ptr;
          if (puStack_180 != (void *)0x0) {
            puVar12 = puStack_180;
          }
          puVar25 = &system_buffer_ptr;
          if ((void *)puStack_240[lStack_288 * 4 + 1] != (void *)0x0) {
            puVar25 = (void *)puStack_240[lStack_288 * 4 + 1];
          }
          System_DataHandler(&puStack_2d0,&system_param2_ptr,puVar25,puVar12);
          puStack_260 = &system_data_buffer_ptr;
          uStack_248 = 0;
          puStack_258 = (void *)0x0;
          uStack_250 = 0;
          puVar12 = &system_buffer_ptr;
          if (puStack_180 != (void *)0x0) {
            puVar12 = puStack_180;
          }
          puVar25 = &system_buffer_ptr;
          if (puStack_2c8 != (void *)0x0) {
            puVar25 = puStack_2c8;
          }
          System_DataHandler(&puStack_260,&rendering_buffer_2288_ptr,puVar25,puVar12);
          alStack_218[0] = -1;
          lStack_2f0 = 0;
          piStack_2e8 = (int *)0x0;
          uStack_2e0 = 0;
          uStack_2d8 = 0;
          uStack_2d6 = 3;
          puVar12 = &system_buffer_ptr;
          if (puStack_258 != (void *)0x0) {
            puVar12 = puStack_258;
          }
          cVar5 = FUN_18063ba00(alStack_218,puVar12,5,0x104);
          lVar20 = alStack_218[0];
          lStack_228 = alStack_218[0];
          if (cVar5 != '\0') {
            iVar6 = GetFileSizeEx(alStack_218[0],auStack_1d8);
            uVar14 = auStack_1d8[0];
            if (iVar6 == 0) {
              uVar14 = 0xffffffff;
            }
            piVar15 = piStack_2e8;
            if (uVar14 != 0) {
              uVar17 = (uint64_t)uVar14;
              System_BufferManager(&lStack_2f0,uVar14);
              piVar15 = piStack_2e8;
              if (uVar17 != 0) {
                do {
                  uVar26 = 0x1000000;
                  if (uVar17 - uVar23 < 0x1000000) {
                    uVar26 = uVar17 - uVar23 & 0xffffffff;
                  }
                  uStack_2f8 = 0;
                  pcStack_318 = (code *)0x0;
                  iVar6 = ReadFile(lVar20,uVar23 + (int64_t)piVar15,uVar26,&uStack_2f8);
                } while (((iVar6 != 0) && (uStack_2f8 != 0)) &&
                        (uVar23 = uVar23 + uStack_2f8, uVar23 < uVar17));
              }
            }
            lVar9 = (int64_t)*piVar15;
            piVar16 = piVar15 + 1;
            lStack_168 = 0;
            lStack_160 = 0;
            uStack_158 = 0;
            uStack_150 = 3;
            piStack_2e8 = piVar16;
            lStack_208 = lVar9;
            if (*piVar15 == 0) {
              lVar30 = lVar9 * 0x68;
              lStack_230 = lVar30;
              for (lVar20 = lVar30; lVar20 != 0; lVar20 = lVar20 + 0x68) {
                lStack_290 = lVar20;
                FUN_18009e960(lVar20 + 8);
              }
              lStack_290 = 0;
              lStack_160 = lVar30;
            }
            else {
              FUN_1801e8650(&lStack_168,lVar9);
              lStack_230 = lStack_160;
            }
            ppuStack_300 = (void **)lStack_168;
            lVar20 = lVar9;
            if (0 < lVar9) {
              plVar24 = (int64_t *)(lStack_168 + 8);
              do {
                puStack_d8 = &memory_allocator_3432_ptr;
                puStack_d0 = auStack_c0;
                uStack_c8 = 0;
                auStack_c0[0] = 0;
                iVar6 = *piVar16;
                lStack_290 = CONCAT44(lStack_290._4_4_,piVar16[1]);
                uVar14 = piVar16[2];
                piVar16 = piVar16 + 3;
                if (uVar14 != 0) {
                  piStack_2e8 = piVar16;
                  FUN_180049910(&puStack_d8,piVar16,uVar14);
                  piVar16 = (int *)((int64_t)piVar16 + (uint64_t)uVar14);
                }
                iVar3 = *piVar16;
                uVar8 = *(uint64_t *)((int64_t)piVar16 + 2);
                uVar1 = *(int32_t *)((int64_t)piVar16 + 10);
                piVar16 = (int *)((int64_t)piVar16 + 0xe);
                piStack_2e8 = piVar16;
                plVar10 = (int64_t *)SystemCore_EncryptionManager(system_resource_state,&plStack_1d0,&puStack_d8,0);
                *plVar24 = *plVar10;
                if (plStack_1d0 != (int64_t *)0x0) {
                  (**(code **)(*plStack_1d0 + 0x38))();
                }
                if (*plVar24 == 0) {
                  puVar12 = &system_buffer_ptr;
                  if (puStack_d0 != (void *)0x0) {
                    puVar12 = puStack_d0;
                  }
                  SystemDataInitializer(&rendering_buffer_2312_ptr,puVar12);
                }
                uStack_1e4 = CONCAT22(uStack_1e4._2_2_,(short)iVar3);
                uStack_1f0._0_4_ = (int32_t)uVar8;
                uStack_1f0._4_4_ = (int32_t)((uint64_t)uVar8 >> 0x20);
                *(int32_t *)(plVar24 + 1) = (int32_t)uStack_1f0;
                *(int32_t *)((int64_t)plVar24 + 0xc) = uStack_1f0._4_4_;
                *(int32_t *)(plVar24 + 2) = uVar1;
                *(int32_t *)((int64_t)plVar24 + 0x14) = uStack_1e4;
                *(int *)(plVar24 + -1) = iVar6;
                *(int32_t *)((int64_t)plVar24 + -4) = (int32_t)lStack_290;
                puStack_d8 = &system_state_ptr;
                plVar24 = plVar24 + 0xd;
                lVar9 = lVar9 + -1;
                lVar20 = lStack_208;
                uVar29 = uStack_238;
                uStack_1f0 = uVar8;
                uStack_1e8 = uVar1;
              } while (lVar9 != 0);
            }
            ppuVar4 = ppuStack_300;
            uVar23 = 0;
            ppuVar11 = (void **)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x398,8,3);
            *ppuVar11 = &system_handler1_ptr;
            *ppuVar11 = &system_handler2_ptr;
            *(int32_t *)(ppuVar11 + 1) = 0;
            *ppuVar11 = &system_handler3_ptr;
            pcStack_318 = FUN_1801ecbb0;
            ppuStack_300 = ppuVar11;
            DataStructureManager(ppuVar11 + 2,0x70,6,FUN_1801ecb30);
            ppuVar18 = ppuVar11 + 0x56;
            *ppuVar18 = &system_state_ptr;
            ppuVar11[0x57] = (void *)0x0;
            *(int32_t *)(ppuVar11 + 0x58) = 0;
            *ppuVar18 = &system_data_buffer_ptr;
            ppuVar11[0x59] = (void *)0x0;
            ppuVar11[0x57] = (void *)0x0;
            *(int32_t *)(ppuVar11 + 0x58) = 0;
            ppuStack_130 = ppuVar11 + 0x5a;
            *ppuStack_130 = &system_state_ptr;
            ppuVar11[0x5b] = (void *)0x0;
            *(int32_t *)(ppuVar11 + 0x5c) = 0;
            *ppuStack_130 = &system_data_buffer_ptr;
            ppuVar11[0x5d] = (void *)0x0;
            ppuVar11[0x5b] = (void *)0x0;
            *(int32_t *)(ppuVar11 + 0x5c) = 0;
            ppuStack_100 = ppuVar11 + 0x5e;
            *ppuStack_100 = (void *)0x0;
            ppuVar11[0x5f] = (void *)0x0;
            ppuVar11[0x60] = (void *)0x0;
            *(int32_t *)(ppuVar11 + 0x61) = 3;
            ppuStack_118 = ppuVar11 + 0x65;
            ppuVar11[0x68] = (void *)0x0;
            *(int32_t *)(ppuVar11 + 0x6a) = 0x11;
            *ppuStack_118 = (void *)ppuStack_118;
            ppuVar11[0x66] = (void *)ppuStack_118;
            ppuVar11[0x67] = (void *)0x0;
            *(int8_t *)(ppuVar11 + 0x68) = 0;
            ppuVar11[0x69] = (void *)0x0;
            ppuVar11[0x6c] = (void *)0x0;
            ppuStack_110 = ppuVar11 + 0x6d;
            ppuVar11[0x70] = (void *)0x0;
            *(int32_t *)(ppuVar11 + 0x72) = 3;
            *ppuStack_110 = (void *)ppuStack_110;
            ppuVar11[0x6e] = (void *)ppuStack_110;
            ppuVar11[0x6f] = (void *)0x0;
            *(int8_t *)(ppuVar11 + 0x70) = 0;
            ppuVar11[0x71] = (void *)0x0;
            *(int32_t *)((int64_t)ppuVar11 + 0x7c) = 0;
            *(int32_t *)((int64_t)ppuVar11 + 0xec) = 1;
            *(int32_t *)((int64_t)ppuVar11 + 0x15c) = 2;
            *(int32_t *)((int64_t)ppuVar11 + 0x1cc) = 3;
            *(int32_t *)((int64_t)ppuVar11 + 0x23c) = 4;
            *(int32_t *)((int64_t)ppuVar11 + 0x2ac) = 5;
            *(int8_t *)(ppuVar11 + 0x6b) = 0;
            ppuVar11[99] = (void *)0x0;
            ppuVar11[0x62] = (void *)0x0;
            ppuVar11[100] = (void *)0x0;
            ppuStack_128 = ppuVar18;
            ppuStack_108 = ppuVar11;
            (**(code **)(*ppuVar11 + 0x28))(ppuVar11);
            uVar14 = uStack_2c0;
            uVar17 = (uint64_t)uStack_2c0;
            if (puStack_2c8 == (void *)0x0) {
LAB_1801d6f7e:
              if (uVar14 != 0) {
                    // WARNING: Subroutine does not return
                memcpy(ppuVar11[0x5b],puStack_2c8,uVar17);
              }
            }
            else if (uStack_2c0 != 0) {
              uVar7 = uStack_2c0 + 1;
              if (ppuVar11[0x5b] == (void *)0x0) {
                if ((int)uVar7 < 0x10) {
                  uVar7 = 0x10;
                }
                puVar13 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar7,0x13);
                ppuVar11[0x5b] = puVar13;
                *puVar13 = 0;
                puVar12 = ppuVar11[0x5b];
                uVar26 = (uint64_t)puVar12 & 0xffffffffffc00000;
                if (uVar26 == 0) {
                  uVar23 = 0;
                }
                else {
                  lVar9 = ((int64_t)puVar12 - uVar26 >> 0x10) * 0x50 + 0x80 + uVar26;
                  puVar27 = (uint *)(lVar9 - (uint64_t)*(uint *)(lVar9 + 4));
                  if ((*(byte *)((int64_t)puVar27 + 0xe) & 2) == 0) {
                    uVar23 = (uint64_t)puVar27[7];
                    if (0x3ffffff < uVar23) {
                      uVar23 = (uint64_t)*puVar27 << 0x10;
                      uStack_138 = uVar23;
                    }
                  }
                  else {
                    uVar23 = (uint64_t)puVar27[7];
                    if (uVar23 < 0x4000000) {
                      uVar28 = (uint64_t)puVar27[7];
                    }
                    else {
                      uVar28 = (uint64_t)*puVar27 << 0x10;
                      uStack_148 = uVar28;
                    }
                    if (0x3ffffff < uVar23) {
                      uVar23 = (uint64_t)*puVar27 << 0x10;
                      uStack_140 = uVar23;
                    }
                    uVar23 = uVar23 - ((int64_t)puVar12 -
                                      (((int64_t)((int64_t)puVar27 + (-0x80 - uVar26)) / 0x50) *
                                       0x10000 + uVar26)) % uVar28;
                  }
                }
              }
              else {
                if (uVar7 <= *(uint *)(ppuVar11 + 0x5d)) goto LAB_1801d6f7e;
                pcStack_318 = (code *)CONCAT71(pcStack_318._1_7_,0x13);
                puVar12 = (void *)DataValidator(system_memory_pool_ptr,ppuVar11[0x5b],uVar7,0x10);
                ppuVar11[0x5b] = puVar12;
                uVar26 = (uint64_t)puVar12 & 0xffffffffffc00000;
                if (uVar26 != 0) {
                  lVar9 = ((int64_t)puVar12 - uVar26 >> 0x10) * 0x50 + 0x80 + uVar26;
                  puVar27 = (uint *)(lVar9 - (uint64_t)*(uint *)(lVar9 + 4));
                  if ((*(byte *)((int64_t)puVar27 + 0xe) & 2) == 0) {
                    uVar23 = (uint64_t)puVar27[7];
                    if (0x3ffffff < uVar23) {
                      uVar23 = (uint64_t)*puVar27 << 0x10;
                      uStack_e8 = uVar23;
                    }
                  }
                  else {
                    uVar23 = (uint64_t)puVar27[7];
                    if (uVar23 < 0x4000000) {
                      uVar28 = (uint64_t)puVar27[7];
                    }
                    else {
                      uVar28 = (uint64_t)*puVar27 << 0x10;
                      uStack_f8 = uVar28;
                    }
                    if (0x3ffffff < uVar23) {
                      uVar23 = (uint64_t)*puVar27 << 0x10;
                      uStack_f0 = uVar23;
                    }
                    uVar23 = uVar23 - ((int64_t)puVar12 -
                                      (((int64_t)((int64_t)puVar27 + (-0x80 - uVar26)) / 0x50) *
                                       0x10000 + uVar26)) % uVar28;
                  }
                }
              }
              *(int *)(ppuVar11 + 0x5d) = (int)uVar23;
              goto LAB_1801d6f7e;
            }
            *(uint *)(ppuVar11 + 0x5c) = uVar14;
            if (ppuVar11[0x5b] != (void *)0x0) {
              ppuVar11[0x5b][uVar17] = 0;
            }
            *(int32_t *)((int64_t)ppuVar11 + 0x2ec) = uStack_2b8._4_4_;
            puVar12 = &system_buffer_ptr;
            if (puStack_2c8 != (void *)0x0) {
              puVar12 = puStack_2c8;
            }
            System_DataHandler(ppuVar18,&system_processor_ptr,puVar12);
            (**(code **)(*(int64_t *)*system_global_data_ptr + 0x48))((int64_t *)*system_global_data_ptr,ppuVar11)
            ;
            ResourceManager_Allocate(&puStack_2d0,1);
            if (0 < lVar20) {
              lVar9 = (int64_t)ppuVar4 + 0x50;
              do {
                ppuStack_200 = ppuVar11;
                (**(code **)(*ppuVar11 + 0x28))(ppuVar11);
                ppuStack_200 = *(void ***)(lVar9 + -0x28);
                *(void ***)(lVar9 + -0x28) = ppuVar11;
                if (ppuStack_200 != (void **)0x0) {
                  (**(code **)((int64_t)*ppuStack_200 + 0x38))();
                }
                CoCreateGuid(lVar9);
                uStack_308 = 0;
                ppuStack_300 = &puStack_2b0;
                puStack_2b0 = &system_data_buffer_ptr;
                uStack_298 = 0;
                lStack_2a8 = 0;
                uStack_2a0 = 0;
                puVar12 = &system_buffer_ptr;
                if (puStack_2c8 != (void *)0x0) {
                  puVar12 = puStack_2c8;
                }
                pcStack_318._0_4_ = *(int32_t *)(lVar9 + -0x4c);
                System_DataHandler(&puStack_2b0,&rendering_buffer_2496_ptr,puVar12,*(int32_t *)(lVar9 + -0x50));
                (**(code **)(*(int64_t *)*system_global_data_ptr + 0x30))
                          ((int64_t *)*system_global_data_ptr,lVar9,&puStack_2b0);
                pcStack_318 = (code *)CONCAT44(pcStack_318._4_4_,*(int32_t *)(lVar9 + -0x50));
                FUN_1803d1940(0,lVar9 + -0x48);
                ppuStack_300 = &puStack_2b0;
                puStack_2b0 = &system_data_buffer_ptr;
                if (lStack_2a8 != 0) {
                    // WARNING: Subroutine does not return
                  CoreEngineMemoryPoolCleaner();
                }
                lStack_2a8 = 0;
                uStack_298 = uStack_298 & 0xffffffff00000000;
                puStack_2b0 = &system_state_ptr;
                lVar9 = lVar9 + 0x68;
                lVar20 = lVar20 + -1;
                uVar29 = uStack_238;
              } while (lVar20 != 0);
            }
            (**(code **)(*ppuVar11 + 0x38))(ppuVar11);
            lVar20 = lStack_230;
            iVar6 = iStack_304;
            lVar9 = lStack_288;
            for (ppuVar18 = ppuVar4; iStack_304 = iVar6, ppuStack_300 = ppuVar18, lStack_288 = lVar9
                , ppuVar18 != (void **)lVar20;
                ppuVar18 = (void **)((int64_t)ppuVar18 + 0x68)) {
              FUN_18009e960((int64_t)ppuVar18 + 8);
              iVar6 = iStack_304;
              lVar9 = lStack_288;
            }
            if (ppuVar4 != (void **)0x0) {
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner(ppuVar4);
            }
          }
          if (((char)uStack_2d8 == '\0') && (lStack_2f0 != 0)) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          if (lStack_228 != -1) {
            LOCK();
            SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
            UNLOCK();
            CloseHandle(alStack_218[0]);
            alStack_218[0] = -1;
            puStack_240 = puStack_1c8;
          }
          puStack_260 = &system_data_buffer_ptr;
          if (puStack_258 != (void *)0x0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          puStack_258 = (void *)0x0;
          uStack_248 = uStack_248 & 0xffffffff00000000;
          puStack_260 = &system_state_ptr;
          puStack_2d0 = &system_data_buffer_ptr;
          if (puStack_2c8 != (void *)0x0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          puStack_2c8 = (void *)0x0;
          uStack_2b8 = uStack_2b8 & 0xffffffff00000000;
          puStack_2d0 = &system_state_ptr;
          iStack_304 = iVar6 + 1;
          lStack_288 = lVar9 + 1;
          puVar21 = puStack_1a8;
          iVar6 = iStack_2f4;
        } while ((uint64_t)(int64_t)iStack_304 < uVar29);
      }
      puVar22 = puStack_1c0;
      puVar2 = puStack_240;
      puStack_280 = &system_data_buffer_ptr;
      if (lStack_278 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lStack_278 = 0;
      uStack_268 = uStack_268 & 0xffffffff00000000;
      puStack_280 = &system_state_ptr;
      for (puVar19 = puStack_240; puVar19 != puVar22; puVar19 = puVar19 + 4) {
        (**(code **)*puVar19)(puVar19,0);
      }
      if (puVar2 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(puVar2);
      }
      iStack_2f4 = iVar6 + 1;
      lStack_220 = lStack_220 + 1;
      puVar2 = puStack_1a0;
      puVar22 = puVar21;
    } while ((uint64_t)(int64_t)iStack_2f4 < uStack_1f8);
  }
  for (; puVar19 = puStack_1a0, puVar21 != puStack_1a0; puVar21 = puVar21 + 4) {
    puStack_1a0 = puVar2;
    (**(code **)*puVar21)(puVar21,0);
    puVar2 = puStack_1a0;
    puStack_1a0 = puVar19;
  }
  if (puVar22 == (uint64_t *)0x0) {
    puStack_188 = &system_data_buffer_ptr;
    if (puStack_180 == (void *)0x0) {
      puStack_180 = (void *)0x0;
      uStack_170 = 0;
      puStack_188 = &system_state_ptr;
      puStack_1a0 = puVar2;
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_338);
    }
    puStack_1a0 = puVar2;
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_1a0 = puVar2;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar22);
}






// 函数: void FUN_1801d7340(int64_t *param_1)
void FUN_1801d7340(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x68) {
    FUN_18009e960(lVar2 + 8);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}






// 函数: void FUN_1801d7360(int64_t param_1)
void FUN_1801d7360(int64_t param_1)

{
  *(uint64_t *)(param_1 + 0x48) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x50) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x50) = 0;
  *(int32_t *)(param_1 + 0x60) = 0;
  *(uint64_t *)(param_1 + 0x48) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x28) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(int32_t *)(param_1 + 0x40) = 0;
  *(uint64_t *)(param_1 + 0x28) = &system_state_ptr;
  *(uint64_t *)(param_1 + 8) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 8) = &system_state_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




