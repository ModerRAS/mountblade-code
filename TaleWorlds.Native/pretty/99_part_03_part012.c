#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part012.c - 4 个函数

// 函数: void FUN_1801d6240(uint64_t param_1,longlong param_2,longlong param_3,uint64_t param_4)
void FUN_1801d6240(uint64_t param_1,longlong param_2,longlong param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong *plVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  void *puVar7;
  void *puVar8;
  int8_t auStack_368 [32];
  longlong *plStack_348;
  void *puStack_340;
  void *puStack_338;
  int32_t uStack_330;
  ulonglong uStack_328;
  void *puStack_320;
  longlong lStack_318;
  int32_t uStack_310;
  ulonglong uStack_308;
  void *puStack_300;
  longlong lStack_2f8;
  int32_t uStack_2f0;
  ulonglong uStack_2e8;
  longlong **pplStack_2e0;
  uint64_t **ppuStack_2d8;
  void *puStack_2d0;
  longlong lStack_2c8;
  int32_t uStack_2b8;
  void *puStack_2b0;
  longlong lStack_2a8;
  int32_t uStack_298;
  void *puStack_290;
  longlong lStack_288;
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
  ulonglong uStack_48;
  
  puVar1 = system_global_data_ptr;
  uStack_250 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_368;
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
  System_DataHandler(&puStack_300,&unknown_var_2384_ptr,puVar7);
  apuStack_168[0] = &system_state_ptr;
  lVar2 = FUN_1806240a0(apuStack_168);
  puVar7 = &system_buffer_ptr;
  if (*(void **)(lVar2 + 8) != (void *)0x0) {
    puVar7 = *(void **)(lVar2 + 8);
  }
  System_DataHandler(&puStack_320,&unknown_var_2440_ptr,puVar7);
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
  uVar3 = FUN_18062b1e0(system_memory_pool_ptr,0x580,8,3);
  plVar4 = (longlong *)FUN_1803e8a40(uVar3,param_2);
  *puVar1 = plVar4;
  (**(code **)(*plVar4 + 0x28))(plVar4);
  *(int8_t *)(system_main_module_state + 0x60) = 1;
  FUN_1806279c0(&puStack_290,param_2);
  FUN_1806279c0(&puStack_2b0,param_3);
  FUN_1806279c0(&puStack_2d0,param_4);
  uVar3 = FUN_18062b1e0(system_memory_pool_ptr,0xe0,8,3);
  puStack_248 = auStack_270;
  ppuStack_2d8 = &puStack_240;
  puStack_240 = puVar1;
  FUN_180627ae0(auStack_238,&puStack_290);
  FUN_180627ae0(auStack_218,&puStack_2b0);
  FUN_180627ae0(auStack_1f8,&puStack_2d0);
  ppuStack_2d8 = &puStack_240;
  uVar5 = FUN_1801e8100(auStack_1d8,&puStack_240);
  pcStack_260 = FUN_1801eb1e0;
  puStack_258 = &unknown_var_2544_ptr;
  pplStack_2e0 = (longlong **)uVar5;
  uVar6 = FUN_18062b1e0(system_memory_pool_ptr,0x68,8,system_allocation_flags);
  FUN_1801e8100(uVar6,uVar5);
  auStack_270[0] = uVar6;
  FUN_1801d7360(uVar5);
  FUN_1801d7360(&puStack_240);
  plVar4 = (longlong *)FUN_18006b640(uVar3,auStack_270);
  if (plVar4 != (longlong *)0x0) {
    plStack_348 = plVar4;
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  plStack_348 = (longlong *)puVar1[9];
  puVar1[9] = plVar4;
  if (plStack_348 != (longlong *)0x0) {
    (**(code **)(*plStack_348 + 0x38))();
  }
  *(uint64_t *)(puVar1[9] + 0x18) = 0xfffffffffffffffd;
  uVar3 = system_context_ptr;
  pplStack_2e0 = &plStack_348;
  plStack_348 = (longlong *)puVar1[9];
  if (plStack_348 != (longlong *)0x0) {
    (**(code **)(*plStack_348 + 0x28))();
  }
  FUN_18005e110(uVar3,&plStack_348);
  puStack_2d0 = &system_data_buffer_ptr;
  if (lStack_2c8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_2c8 = 0;
  uStack_2b8 = 0;
  puStack_2d0 = &system_state_ptr;
  puStack_2b0 = &system_data_buffer_ptr;
  if (lStack_2a8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_2a8 = 0;
  uStack_298 = 0;
  puStack_2b0 = &system_state_ptr;
  puStack_290 = &system_data_buffer_ptr;
  if (lStack_288 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_288 = 0;
  uStack_278 = 0;
  puStack_290 = &system_state_ptr;
  puStack_340 = &system_data_buffer_ptr;
  if (puStack_338 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_338 = (void *)0x0;
  uStack_328 = uStack_328 & 0xffffffff00000000;
  puStack_340 = &system_state_ptr;
  puStack_320 = &system_data_buffer_ptr;
  if (lStack_318 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_318 = 0;
  uStack_308 = uStack_308 & 0xffffffff00000000;
  puStack_320 = &system_state_ptr;
  puStack_300 = &system_data_buffer_ptr;
  if (lStack_2f8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_2f8 = 0;
  uStack_2e8 = uStack_2e8 & 0xffffffff00000000;
  puStack_300 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_368);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801d6680(longlong param_1)
void FUN_1801d6680(longlong param_1)

{
  int32_t uVar1;
  uint64_t *puVar2;
  int iVar3;
  void **ppuVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint64_t uVar8;
  longlong lVar9;
  longlong *plVar10;
  void **ppuVar11;
  void *puVar12;
  int8_t *puVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  ulonglong uVar17;
  void **ppuVar18;
  uint64_t *puVar19;
  longlong lVar20;
  uint64_t *puVar21;
  uint64_t *puVar22;
  ulonglong uVar23;
  longlong *plVar24;
  void *puVar25;
  ulonglong uVar26;
  uint *puVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  int8_t auStack_338 [32];
  code *pcStack_318;
  int8_t uStack_308;
  int iStack_304;
  void **ppuStack_300;
  uint uStack_2f8;
  int iStack_2f4;
  longlong lStack_2f0;
  int *piStack_2e8;
  uint64_t uStack_2e0;
  int16_t uStack_2d8;
  int8_t uStack_2d6;
  void *puStack_2d0;
  void *puStack_2c8;
  uint uStack_2c0;
  uint64_t uStack_2b8;
  void *puStack_2b0;
  longlong lStack_2a8;
  int32_t uStack_2a0;
  ulonglong uStack_298;
  longlong lStack_290;
  longlong lStack_288;
  void *puStack_280;
  longlong lStack_278;
  int32_t uStack_270;
  ulonglong uStack_268;
  void *puStack_260;
  void *puStack_258;
  int32_t uStack_250;
  ulonglong uStack_248;
  uint64_t *puStack_240;
  ulonglong uStack_238;
  longlong lStack_230;
  longlong lStack_228;
  longlong lStack_220;
  longlong alStack_218 [2];
  longlong lStack_208;
  void **ppuStack_200;
  ulonglong uStack_1f8;
  uint64_t uStack_1f0;
  int32_t uStack_1e8;
  int32_t uStack_1e4;
  uint auStack_1d8 [2];
  longlong *plStack_1d0;
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
  longlong lStack_168;
  longlong lStack_160;
  uint64_t uStack_158;
  int32_t uStack_150;
  ulonglong uStack_148;
  ulonglong uStack_140;
  ulonglong uStack_138;
  void **ppuStack_130;
  void **ppuStack_128;
  uint64_t uStack_120;
  void **ppuStack_118;
  void **ppuStack_110;
  void **ppuStack_108;
  void **ppuStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  void *puStack_d8;
  void *puStack_d0;
  int32_t uStack_c8;
  uint8_t auStack_c0 [136];
  ulonglong uStack_38;
  
  uStack_120 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_338;
  uVar8 = FUN_1801c5bb0(param_1,param_1 + 8,param_1 + 0x28);
  FUN_180627910(&puStack_188,uVar8);
  puStack_1a8 = (uint64_t *)0x0;
  puStack_1a0 = (uint64_t *)0x0;
  uStack_198 = 0;
  uStack_190 = 3;
  FUN_18062c5f0(param_1 + 0x48,&puStack_1a8);
  iStack_2f4 = 0;
  uStack_1f8 = (longlong)puStack_1a0 - (longlong)puStack_1a8 >> 5;
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
      System_DataHandler(&puStack_280,&unknown_var_2344_ptr,puVar12);
      FUN_18062c5f0(&puStack_280,&puStack_1c8);
      iStack_304 = 0;
      lStack_288 = 0;
      puStack_240 = puStack_1c8;
      uVar29 = (longlong)puStack_1c0 - (longlong)puStack_1c8 >> 5;
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
          System_DataHandler(&puStack_260,&unknown_var_2288_ptr,puVar25,puVar12);
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
              uVar17 = (ulonglong)uVar14;
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
                  iVar6 = ReadFile(lVar20,uVar23 + (longlong)piVar15,uVar26,&uStack_2f8);
                } while (((iVar6 != 0) && (uStack_2f8 != 0)) &&
                        (uVar23 = uVar23 + uStack_2f8, uVar23 < uVar17));
              }
            }
            lVar9 = (longlong)*piVar15;
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
              plVar24 = (longlong *)(lStack_168 + 8);
              do {
                puStack_d8 = &unknown_var_3432_ptr;
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
                  piVar16 = (int *)((longlong)piVar16 + (ulonglong)uVar14);
                }
                iVar3 = *piVar16;
                uVar8 = *(uint64_t *)((longlong)piVar16 + 2);
                uVar1 = *(int32_t *)((longlong)piVar16 + 10);
                piVar16 = (int *)((longlong)piVar16 + 0xe);
                piStack_2e8 = piVar16;
                plVar10 = (longlong *)FUN_1800b31f0(system_resource_state,&plStack_1d0,&puStack_d8,0);
                *plVar24 = *plVar10;
                if (plStack_1d0 != (longlong *)0x0) {
                  (**(code **)(*plStack_1d0 + 0x38))();
                }
                if (*plVar24 == 0) {
                  puVar12 = &system_buffer_ptr;
                  if (puStack_d0 != (void *)0x0) {
                    puVar12 = puStack_d0;
                  }
                  FUN_180626f80(&unknown_var_2312_ptr,puVar12);
                }
                uStack_1e4 = CONCAT22(uStack_1e4._2_2_,(short)iVar3);
                uStack_1f0._0_4_ = (int32_t)uVar8;
                uStack_1f0._4_4_ = (int32_t)((ulonglong)uVar8 >> 0x20);
                *(int32_t *)(plVar24 + 1) = (int32_t)uStack_1f0;
                *(int32_t *)((longlong)plVar24 + 0xc) = uStack_1f0._4_4_;
                *(int32_t *)(plVar24 + 2) = uVar1;
                *(int32_t *)((longlong)plVar24 + 0x14) = uStack_1e4;
                *(int *)(plVar24 + -1) = iVar6;
                *(int32_t *)((longlong)plVar24 + -4) = (int32_t)lStack_290;
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
            ppuVar11 = (void **)FUN_18062b1e0(system_memory_pool_ptr,0x398,8,3);
            *ppuVar11 = &system_handler1_ptr;
            *ppuVar11 = &system_handler2_ptr;
            *(int32_t *)(ppuVar11 + 1) = 0;
            *ppuVar11 = &system_handler3_ptr;
            pcStack_318 = FUN_1801ecbb0;
            ppuStack_300 = ppuVar11;
            FUN_1808fc838(ppuVar11 + 2,0x70,6,FUN_1801ecb30);
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
            *(int32_t *)((longlong)ppuVar11 + 0x7c) = 0;
            *(int32_t *)((longlong)ppuVar11 + 0xec) = 1;
            *(int32_t *)((longlong)ppuVar11 + 0x15c) = 2;
            *(int32_t *)((longlong)ppuVar11 + 0x1cc) = 3;
            *(int32_t *)((longlong)ppuVar11 + 0x23c) = 4;
            *(int32_t *)((longlong)ppuVar11 + 0x2ac) = 5;
            *(int8_t *)(ppuVar11 + 0x6b) = 0;
            ppuVar11[99] = (void *)0x0;
            ppuVar11[0x62] = (void *)0x0;
            ppuVar11[100] = (void *)0x0;
            ppuStack_128 = ppuVar18;
            ppuStack_108 = ppuVar11;
            (**(code **)(*ppuVar11 + 0x28))(ppuVar11);
            uVar14 = uStack_2c0;
            uVar17 = (ulonglong)uStack_2c0;
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
                puVar13 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar7,0x13);
                ppuVar11[0x5b] = puVar13;
                *puVar13 = 0;
                puVar12 = ppuVar11[0x5b];
                uVar26 = (ulonglong)puVar12 & 0xffffffffffc00000;
                if (uVar26 == 0) {
                  uVar23 = 0;
                }
                else {
                  lVar9 = ((longlong)puVar12 - uVar26 >> 0x10) * 0x50 + 0x80 + uVar26;
                  puVar27 = (uint *)(lVar9 - (ulonglong)*(uint *)(lVar9 + 4));
                  if ((*(byte *)((longlong)puVar27 + 0xe) & 2) == 0) {
                    uVar23 = (ulonglong)puVar27[7];
                    if (0x3ffffff < uVar23) {
                      uVar23 = (ulonglong)*puVar27 << 0x10;
                      uStack_138 = uVar23;
                    }
                  }
                  else {
                    uVar23 = (ulonglong)puVar27[7];
                    if (uVar23 < 0x4000000) {
                      uVar28 = (ulonglong)puVar27[7];
                    }
                    else {
                      uVar28 = (ulonglong)*puVar27 << 0x10;
                      uStack_148 = uVar28;
                    }
                    if (0x3ffffff < uVar23) {
                      uVar23 = (ulonglong)*puVar27 << 0x10;
                      uStack_140 = uVar23;
                    }
                    uVar23 = uVar23 - ((longlong)puVar12 -
                                      (((longlong)((longlong)puVar27 + (-0x80 - uVar26)) / 0x50) *
                                       0x10000 + uVar26)) % uVar28;
                  }
                }
              }
              else {
                if (uVar7 <= *(uint *)(ppuVar11 + 0x5d)) goto LAB_1801d6f7e;
                pcStack_318 = (code *)CONCAT71(pcStack_318._1_7_,0x13);
                puVar12 = (void *)FUN_18062b8b0(system_memory_pool_ptr,ppuVar11[0x5b],uVar7,0x10);
                ppuVar11[0x5b] = puVar12;
                uVar26 = (ulonglong)puVar12 & 0xffffffffffc00000;
                if (uVar26 != 0) {
                  lVar9 = ((longlong)puVar12 - uVar26 >> 0x10) * 0x50 + 0x80 + uVar26;
                  puVar27 = (uint *)(lVar9 - (ulonglong)*(uint *)(lVar9 + 4));
                  if ((*(byte *)((longlong)puVar27 + 0xe) & 2) == 0) {
                    uVar23 = (ulonglong)puVar27[7];
                    if (0x3ffffff < uVar23) {
                      uVar23 = (ulonglong)*puVar27 << 0x10;
                      uStack_e8 = uVar23;
                    }
                  }
                  else {
                    uVar23 = (ulonglong)puVar27[7];
                    if (uVar23 < 0x4000000) {
                      uVar28 = (ulonglong)puVar27[7];
                    }
                    else {
                      uVar28 = (ulonglong)*puVar27 << 0x10;
                      uStack_f8 = uVar28;
                    }
                    if (0x3ffffff < uVar23) {
                      uVar23 = (ulonglong)*puVar27 << 0x10;
                      uStack_f0 = uVar23;
                    }
                    uVar23 = uVar23 - ((longlong)puVar12 -
                                      (((longlong)((longlong)puVar27 + (-0x80 - uVar26)) / 0x50) *
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
            *(int32_t *)((longlong)ppuVar11 + 0x2ec) = uStack_2b8._4_4_;
            puVar12 = &system_buffer_ptr;
            if (puStack_2c8 != (void *)0x0) {
              puVar12 = puStack_2c8;
            }
            System_DataHandler(ppuVar18,&system_processor_ptr,puVar12);
            (**(code **)(*(longlong *)*system_global_data_ptr + 0x48))((longlong *)*system_global_data_ptr,ppuVar11)
            ;
            FUN_18062c1e0(&puStack_2d0,1);
            if (0 < lVar20) {
              lVar9 = (longlong)ppuVar4 + 0x50;
              do {
                ppuStack_200 = ppuVar11;
                (**(code **)(*ppuVar11 + 0x28))(ppuVar11);
                ppuStack_200 = *(void ***)(lVar9 + -0x28);
                *(void ***)(lVar9 + -0x28) = ppuVar11;
                if (ppuStack_200 != (void **)0x0) {
                  (**(code **)((longlong)*ppuStack_200 + 0x38))();
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
                System_DataHandler(&puStack_2b0,&unknown_var_2496_ptr,puVar12,*(int32_t *)(lVar9 + -0x50));
                (**(code **)(*(longlong *)*system_global_data_ptr + 0x30))
                          ((longlong *)*system_global_data_ptr,lVar9,&puStack_2b0);
                pcStack_318 = (code *)CONCAT44(pcStack_318._4_4_,*(int32_t *)(lVar9 + -0x50));
                FUN_1803d1940(0,lVar9 + -0x48);
                ppuStack_300 = &puStack_2b0;
                puStack_2b0 = &system_data_buffer_ptr;
                if (lStack_2a8 != 0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
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
                ppuVar18 = (void **)((longlong)ppuVar18 + 0x68)) {
              FUN_18009e960((longlong)ppuVar18 + 8);
              iVar6 = iStack_304;
              lVar9 = lStack_288;
            }
            if (ppuVar4 != (void **)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(ppuVar4);
            }
          }
          if (((char)uStack_2d8 == '\0') && (lStack_2f0 != 0)) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
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
            FUN_18064e900();
          }
          puStack_258 = (void *)0x0;
          uStack_248 = uStack_248 & 0xffffffff00000000;
          puStack_260 = &system_state_ptr;
          puStack_2d0 = &system_data_buffer_ptr;
          if (puStack_2c8 != (void *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          puStack_2c8 = (void *)0x0;
          uStack_2b8 = uStack_2b8 & 0xffffffff00000000;
          puStack_2d0 = &system_state_ptr;
          iStack_304 = iVar6 + 1;
          lStack_288 = lVar9 + 1;
          puVar21 = puStack_1a8;
          iVar6 = iStack_2f4;
        } while ((ulonglong)(longlong)iStack_304 < uVar29);
      }
      puVar22 = puStack_1c0;
      puVar2 = puStack_240;
      puStack_280 = &system_data_buffer_ptr;
      if (lStack_278 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_278 = 0;
      uStack_268 = uStack_268 & 0xffffffff00000000;
      puStack_280 = &system_state_ptr;
      for (puVar19 = puStack_240; puVar19 != puVar22; puVar19 = puVar19 + 4) {
        (**(code **)*puVar19)(puVar19,0);
      }
      if (puVar2 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar2);
      }
      iStack_2f4 = iVar6 + 1;
      lStack_220 = lStack_220 + 1;
      puVar2 = puStack_1a0;
      puVar22 = puVar21;
    } while ((ulonglong)(longlong)iStack_2f4 < uStack_1f8);
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
      FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_338);
    }
    puStack_1a0 = puVar2;
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_1a0 = puVar2;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar22);
}






// 函数: void FUN_1801d7340(longlong *param_1)
void FUN_1801d7340(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x68) {
    FUN_18009e960(lVar2 + 8);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1801d7360(longlong param_1)
void FUN_1801d7360(longlong param_1)

{
  *(uint64_t *)(param_1 + 0x48) = &system_data_buffer_ptr;
  if (*(longlong *)(param_1 + 0x50) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x50) = 0;
  *(int32_t *)(param_1 + 0x60) = 0;
  *(uint64_t *)(param_1 + 0x48) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x28) = &system_data_buffer_ptr;
  if (*(longlong *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(int32_t *)(param_1 + 0x40) = 0;
  *(uint64_t *)(param_1 + 0x28) = &system_state_ptr;
  *(uint64_t *)(param_1 + 8) = &system_data_buffer_ptr;
  if (*(longlong *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 8) = &system_state_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




