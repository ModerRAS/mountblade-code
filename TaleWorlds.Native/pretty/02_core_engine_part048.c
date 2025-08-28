#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part048.c - 2 个函数

// 函数: void FUN_1800896b0(void)
void FUN_1800896b0(void)

{
  int8_t uVar1;
  byte bVar2;
  bool bVar3;
  int8_t *puVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  uint64_t uVar8;
  int64_t lVar9;
  void **ppuVar10;
  int64_t lVar11;
  byte *pbVar12;
  char *pcVar13;
  void *puVar14;
  void *puVar15;
  int64_t lVar16;
  uint64_t uVar17;
  int iVar18;
  int64_t *plVar19;
  int8_t *puVar20;
  int64_t lVar21;
  uint *puVar22;
  int8_t *puVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  uint uVar26;
  uint64_t uVar27;
  int64_t lVar28;
  int32_t extraout_XMM0_Da;
  int8_t auStack_418 [32];
  void *puStack_3f8;
  char acStack_3e8 [4];
  uint uStack_3e4;
  void **ppuStack_3e0;
  void *puStack_3d8;
  int64_t lStack_3d0;
  uint uStack_3c8;
  uint64_t uStack_3c0;
  int64_t lStack_3b8;
  void *puStack_3b0;
  int8_t *puStack_3a8;
  int32_t uStack_3a0;
  uint64_t uStack_398;
  void *puStack_390;
  int8_t *puStack_388;
  int32_t uStack_380;
  uint64_t uStack_378;
  void *puStack_370;
  int8_t *puStack_368;
  int32_t uStack_360;
  uint64_t uStack_358;
  void *puStack_350;
  int8_t *puStack_348;
  int iStack_340;
  uint64_t uStack_338;
  void *puStack_330;
  int64_t lStack_328;
  int32_t uStack_320;
  uint64_t uStack_318;
  int64_t lStack_310;
  void *puStack_308;
  void *puStack_300;
  int32_t uStack_2f8;
  uint64_t uStack_2f0;
  void *puStack_2e8;
  int8_t *puStack_2e0;
  int32_t uStack_2d8;
  uint64_t uStack_2d0;
  void *puStack_2c8;
  void *puStack_2c0;
  int32_t uStack_2b8;
  uint64_t uStack_2b0;
  void *puStack_2a8;
  uint64_t uStack_2a0;
  int32_t uStack_298;
  uint64_t uStack_290;
  int64_t lStack_288;
  void **ppuStack_278;
  int64_t *plStack_270;
  uint64_t uStack_268;
  int32_t uStack_260;
  int8_t uStack_25c;
  void *apuStack_258 [2];
  code *pcStack_248;
  code *pcStack_240;
  int8_t auStack_238 [16];
  code *pcStack_228;
  code *pcStack_220;
  int8_t auStack_218 [16];
  code *pcStack_208;
  code *pcStack_200;
  int64_t lStack_1f8;
  int64_t lStack_1f0;
  int64_t lStack_1e8;
  int64_t lStack_1e0;
  uint64_t uStack_1d8;
  int32_t uStack_1d0;
  uint64_t uStack_1c8;
  void **ppuStack_1c0;
  int8_t auStack_1b8 [16];
  void *puStack_1a8;
  int8_t *puStack_1a0;
  int32_t uStack_198;
  int8_t auStack_190 [16];
  void *apuStack_180 [5];
  void *puStack_158;
  void *puStack_150;
  int iStack_148;
  uint64_t uStack_38;
  
  uStack_1c8 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_418;
  uVar27 = 0;
  uStack_3e4 = 0;
  lStack_310 = core_system_data_memory;
  iVar7 = (int)((*(int64_t *)(core_system_data_memory + 0x10) - *(int64_t *)(core_system_data_memory + 8)) / 0x60);
  if (0 < iVar7) {
    plVar19 = (int64_t *)(*(int64_t *)(core_system_data_memory + 8) + 8);
    uVar17 = uVar27;
    uVar24 = uVar27;
    do {
      iVar18 = (int)uVar24;
      if ((int)plVar19[1] == 6) {
        uVar24 = uVar27;
        while (uVar8 = uVar24 + 1, *(char *)(*plVar19 + uVar24) == (&system_data_d128)[uVar24]) {
          uVar24 = uVar8;
          if (uVar8 == 7) {
            if (iVar18 == -1) goto LAB_18008984e;
            lStack_1f0 = (int64_t)
                         (int)(*(int64_t *)(core_system_data_memory + 0x30) -
                               *(int64_t *)(core_system_data_memory + 0x28) >> 5);
            if (lStack_1f0 < 1) goto LAB_180089861;
            lStack_288 = 0;
            lStack_3b8 = (int64_t)iVar18 * 0x60;
            lVar16 = core_system_data_memory;
            goto LAB_1800897d5;
          }
        }
      }
      uVar24 = (uint64_t)(iVar18 + 1);
      uVar17 = uVar17 + 1;
      plVar19 = plVar19 + 0xc;
    } while ((int64_t)uVar17 < (int64_t)iVar7);
  }
LAB_18008984e:
                    // WARNING: Subroutine does not return
  FUN_180062300(system_message_context,&unknown_var_8312_ptr);
LAB_1800897d5:
  lVar11 = lStack_3b8;
  uVar26 = 0;
  lVar28 = lStack_288 * 0x20 + *(int64_t *)(lVar16 + 0x28);
  puVar14 = &system_buffer_ptr;
  if (core_system_control_memory != (void *)0x0) {
    puVar14 = core_system_control_memory;
  }
  lVar9 = -1;
  do {
    lVar9 = lVar9 + 1;
  } while (puVar14[lVar9] != '\0');
  if (*(int *)(lVar28 + 0x10) < (int)lVar9) {
LAB_180089891:
    bVar3 = false;
  }
  else {
    pcVar13 = (char *)((int64_t)(*(int *)(lVar28 + 0x10) - (int)lVar9) + *(int64_t *)(lVar28 + 8))
    ;
    lVar9 = (int64_t)puVar14 - (int64_t)pcVar13;
    do {
      cVar6 = *pcVar13;
      cVar5 = pcVar13[lVar9];
      if (cVar6 != cVar5) break;
      pcVar13 = pcVar13 + 1;
    } while (cVar5 != '\0');
    if (cVar6 != cVar5) goto LAB_180089891;
    bVar3 = true;
  }
  if (bVar3) {
    iVar7 = *(int *)(lStack_3b8 + 0x5c + *(int64_t *)(lVar16 + 8));
    uVar17 = (uint64_t)iVar7;
    cVar6 = *(char *)(uVar17 + *(int64_t *)(*system_main_module_state + 0x8c8));
    if (cVar6 == '\0') {
      puStack_1a8 = &system_config_ptr;
      puStack_1a0 = auStack_190;
      auStack_190[0] = 0;
      uStack_198 = 0;
      strcpy_s(auStack_190,0x10,&system_buffer_ptr);
      ppuVar10 = &puStack_1a8;
      uVar26 = (uint)uVar27 | 2;
    }
    else {
      ppuVar10 = (void **)FUN_180624030(apuStack_180);
      uVar26 = (uint)uVar27 | 1;
    }
    puStack_350 = &system_data_buffer_ptr;
    uStack_338 = 0;
    puStack_348 = (int8_t *)0x0;
    iStack_340 = 0;
    uStack_3e4 = uVar26;
    FUN_1806277c0(&puStack_350);
    puVar4 = puStack_348;
    if (0 < *(int *)(ppuVar10 + 2)) {
      puVar14 = &system_buffer_ptr;
      if (ppuVar10[1] != (void *)0x0) {
        puVar14 = ppuVar10[1];
      }
                    // WARNING: Subroutine does not return
      memcpy(puStack_348,puVar14,(int64_t)(*(int *)(ppuVar10 + 2) + 1));
    }
    if ((ppuVar10[1] != (void *)0x0) && (iStack_340 = 0, puStack_348 != (int8_t *)0x0)) {
      *puStack_348 = 0;
    }
    iVar18 = iStack_340;
    if ((uVar26 & 2) != 0) {
      uVar26 = uVar26 & 0xfffffffd;
      puStack_1a8 = &system_state_ptr;
      uStack_3e4 = uVar26;
    }
    if ((uVar26 & 1) != 0) {
      uVar26 = uVar26 & 0xfffffffe;
      apuStack_180[0] = &system_state_ptr;
      uStack_3e4 = uVar26;
    }
    uVar27 = (uint64_t)uVar26;
    puStack_308 = &system_data_buffer_ptr;
    uStack_2f0 = 0;
    puStack_300 = (void *)0x0;
    uStack_2f8 = 0;
    if ((iVar7 < 0) ||
       (lVar16 = *(int64_t *)(*system_main_module_state + 0x888),
       (uint64_t)(*(int64_t *)(*system_main_module_state + 0x890) - lVar16 >> 5) <= uVar17)) {
      lVar16 = FUN_180628ca0();
    }
    else {
      lVar16 = uVar17 * 0x20 + lVar16;
    }
    puStack_3b0 = &system_data_buffer_ptr;
    uStack_398 = 0;
    puStack_3a8 = (int8_t *)0x0;
    uStack_3a0 = 0;
    FUN_1806277c0(&puStack_3b0,*(int32_t *)(lVar16 + 0x10));
    lVar11 = lStack_310;
    puVar23 = puStack_3a8;
    if (*(int *)(lVar16 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puStack_3a8,*(uint64_t *)(lVar16 + 8),*(int *)(lVar16 + 0x10) + 1);
    }
    if (*(int64_t *)(lVar16 + 8) != 0) {
      uStack_3a0 = 0;
      if (puStack_3a8 != (int8_t *)0x0) {
        *puStack_3a8 = 0;
      }
      uStack_398 = uStack_398 & 0xffffffff;
    }
    puStack_3f8 = &system_buffer_ptr;
    if (*(void **)(lVar28 + 8) != (void *)0x0) {
      puStack_3f8 = *(void **)(lVar28 + 8);
    }
    puVar14 = *(void **)(lStack_3b8 + 0x28 + *(int64_t *)(lStack_310 + 8));
    puVar15 = &system_buffer_ptr;
    if (puVar14 != (void *)0x0) {
      puVar15 = puVar14;
    }
    puVar20 = &system_buffer_ptr;
    if (puStack_3a8 != (int8_t *)0x0) {
      puVar20 = puStack_3a8;
    }
    System_DataHandler(&puStack_308,&unknown_var_8368_ptr,puVar20,puVar15);
    cVar5 = FUN_180624af0(&puStack_308);
    lVar16 = lStack_3b8;
    if (cVar5 != '\0') {
      puStack_3d8 = &system_data_buffer_ptr;
      uStack_3c0 = 0;
      lStack_3d0 = 0;
      uStack_3c8 = 0;
      puVar14 = *(void **)(lStack_3b8 + 0x28 + *(int64_t *)(lVar11 + 8));
      puVar15 = &system_buffer_ptr;
      if (puVar14 != (void *)0x0) {
        puVar15 = puVar14;
      }
      puVar20 = &system_buffer_ptr;
      if (puVar23 != (int8_t *)0x0) {
        puVar20 = puVar23;
      }
      System_DataHandler(&puStack_3d8,&unknown_var_8076_ptr,puVar20,puVar15);
      if (cVar6 != '\0') {
        puStack_2a8 = &system_data_buffer_ptr;
        uStack_290 = 0;
        uStack_2a0 = 0;
        uStack_298 = 0;
        if (((0 < (int)uStack_3c8) && (0 < iVar18)) &&
           (lVar11 = strstr(lStack_3d0,puVar4), lVar11 != 0)) {
          iVar7 = (int)lVar11 - (int)lStack_3d0;
          if (uStack_3c8 < (uint)(iVar18 + iVar7)) {
            iVar18 = uStack_3c8 - iVar7;
          }
          uVar26 = iVar18 + iVar7;
          if (uVar26 < uStack_3c8) {
            lVar11 = (int64_t)(int)uVar26;
            do {
              *(int8_t *)((lVar11 - iVar18) + lStack_3d0) = *(int8_t *)(lVar11 + lStack_3d0)
              ;
              uVar26 = uVar26 + 1;
              lVar11 = lVar11 + 1;
            } while (uVar26 < uStack_3c8);
          }
          uStack_3c8 = uStack_3c8 - iVar18;
          *(int8_t *)((uint64_t)uStack_3c8 + lStack_3d0) = 0;
        }
        uStack_2a0 = 0;
        uStack_290 = uStack_290 & 0xffffffff00000000;
        puStack_2a8 = &system_state_ptr;
      }
      FUN_180627560(&puStack_158,lVar28);
      lVar11 = lStack_310;
      puStack_2c8 = &system_data_buffer_ptr;
      uStack_2b0 = 0;
      puStack_2c0 = (void *)0x0;
      uStack_2b8 = 0;
      uVar1 = *(int8_t *)(lVar16 + 0x58 + *(int64_t *)(lStack_310 + 8));
      ppuStack_1c0 = &puStack_2e8;
      puStack_2e8 = &system_data_buffer_ptr;
      uStack_2d0 = 0;
      puStack_2e0 = (int8_t *)0x0;
      uStack_2d8 = 0;
      FUN_1806277c0(&puStack_2e8,iStack_148);
      if (0 < iStack_148) {
        puVar14 = &system_buffer_ptr;
        if (puStack_150 != (void *)0x0) {
          puVar14 = puStack_150;
        }
                    // WARNING: Subroutine does not return
        memcpy(puStack_2e0,puVar14,(int64_t)(iStack_148 + 1));
      }
      if ((puStack_150 != (void *)0x0) && (uStack_2d8 = 0, puStack_2e0 != (int8_t *)0x0)) {
        *puStack_2e0 = 0;
      }
      ppuStack_3e0 = &puStack_370;
      puStack_370 = &system_data_buffer_ptr;
      uStack_358 = 0;
      puStack_368 = (int8_t *)0x0;
      uStack_360 = 0;
      FUN_1806277c0(&puStack_370,uStack_3c8);
      if (uStack_3c8 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_368,lStack_3d0,uStack_3c8 + 1);
      }
      if (lStack_3d0 != 0) {
        uStack_360 = 0;
        if (puStack_368 != (int8_t *)0x0) {
          *puStack_368 = 0;
        }
        uStack_358 = uStack_358 & 0xffffffff;
      }
      puStack_3f8 = (void *)CONCAT71(puStack_3f8._1_7_,uVar1);
      cVar6 = FUN_180087700(&lStack_1f8,&puStack_370,&puStack_2e8,&puStack_2c8);
      lVar16 = lStack_1f8;
      if (cVar6 == '\0') {
        puVar14 = &system_buffer_ptr;
        if (puStack_2c0 != (void *)0x0) {
          puVar14 = puStack_2c0;
        }
        puVar15 = &system_buffer_ptr;
        if (puStack_300 != (void *)0x0) {
          puVar15 = puStack_300;
        }
        SystemOptimizationProcessor(&unknown_var_8376_ptr,puVar15,puVar14);
      }
      else {
        *(int32_t *)(lStack_1f8 + 4) =
             *(int32_t *)(lStack_3b8 + 0x5c + *(int64_t *)(lVar11 + 8));
        FUN_18008b440(lVar11,lStack_1f8);
        FUN_180057b00(lVar11 + 0x48,auStack_1b8,lVar16 + 0x58);
      }
      puStack_2c8 = &system_data_buffer_ptr;
      if (puStack_2c0 != (void *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
      puStack_2c0 = (void *)0x0;
      uStack_2b0 = uStack_2b0 & 0xffffffff00000000;
      puStack_2c8 = &system_state_ptr;
      puStack_158 = &system_state_ptr;
      puStack_3d8 = &system_data_buffer_ptr;
      if (lStack_3d0 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
      lStack_3d0 = 0;
      uStack_3c0 = uStack_3c0 & 0xffffffff00000000;
      puStack_3d8 = &system_state_ptr;
    }
    puStack_3b0 = &system_data_buffer_ptr;
    if (puVar23 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(puVar23);
    }
    puStack_3a8 = (int8_t *)0x0;
    uStack_398 = uStack_398 & 0xffffffff00000000;
    puStack_3b0 = &system_state_ptr;
    puStack_308 = &system_data_buffer_ptr;
    if (puStack_300 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    puStack_300 = (void *)0x0;
    uStack_2f0 = uStack_2f0 & 0xffffffff00000000;
    puStack_308 = &system_state_ptr;
    puStack_350 = &system_data_buffer_ptr;
    if (puVar4 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(puVar4);
    }
    puStack_348 = (int8_t *)0x0;
    uStack_338 = uStack_338 & 0xffffffff00000000;
    puStack_350 = &system_state_ptr;
    lVar16 = lStack_310;
  }
  else {
    iVar7 = *(int *)(lStack_3b8 + 0x5c + *(int64_t *)(lVar16 + 8));
    if ((iVar7 < 0) ||
       (lVar9 = *(int64_t *)(*system_main_module_state + 0x888),
       (uint64_t)(*(int64_t *)(*system_main_module_state + 0x890) - lVar9 >> 5) <=
       (uint64_t)(int64_t)iVar7)) {
      lVar9 = FUN_180628ca0();
    }
    else {
      lVar9 = (int64_t)iVar7 * 0x20 + lVar9;
    }
    puStack_390 = &system_data_buffer_ptr;
    uStack_378 = 0;
    puStack_388 = (int8_t *)0x0;
    uStack_380 = 0;
    if (*(int *)(lVar9 + 0x10) != 0) {
      iVar7 = *(int *)(lVar9 + 0x10) + 1;
      if (iVar7 < 0x10) {
        iVar7 = 0x10;
      }
      puStack_388 = (int8_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,(int64_t)iVar7,0x13);
      *puStack_388 = 0;
      uVar17 = (uint64_t)puStack_388 & 0xffffffffffc00000;
      if (uVar17 != 0) {
        lVar21 = ((int64_t)puStack_388 - uVar17 >> 0x10) * 0x50 + 0x80 + uVar17;
        puVar22 = (uint *)(lVar21 - (uint64_t)*(uint *)(lVar21 + 4));
        if ((*(byte *)((int64_t)puVar22 + 0xe) & 2) == 0) {
          uVar26 = puVar22[7];
          if (0x3ffffff < uVar26) {
            uVar26 = *puVar22 << 0x10;
          }
        }
        else {
          uVar26 = puVar22[7];
          if (uVar26 < 0x4000000) {
            uVar24 = (uint64_t)uVar26;
          }
          else {
            uVar24 = (uint64_t)*puVar22 << 0x10;
          }
          if (0x3ffffff < uVar26) {
            uVar26 = *puVar22 << 0x10;
          }
          uVar26 = uVar26 - (int)(((int64_t)puStack_388 -
                                  (((int64_t)((int64_t)puVar22 + (-0x80 - uVar17)) / 0x50) *
                                   0x10000 + uVar17)) % uVar24);
        }
      }
      uStack_378 = CONCAT44(uStack_378._4_4_,uVar26);
      if (*(int *)(lVar9 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_388,*(uint64_t *)(lVar9 + 8),*(int *)(lVar9 + 0x10) + 1);
      }
    }
    puVar4 = puStack_388;
    if (*(int64_t *)(lVar9 + 8) != 0) {
      uStack_380 = 0;
      if (puStack_388 != (int8_t *)0x0) {
        *puStack_388 = 0;
      }
      uStack_378 = uStack_378 & 0xffffffff;
    }
    puStack_330 = &system_data_buffer_ptr;
    uStack_318 = 0;
    lStack_328 = 0;
    uStack_320 = 0;
    puStack_3f8 = &system_buffer_ptr;
    if (*(void **)(lVar28 + 8) != (void *)0x0) {
      puStack_3f8 = *(void **)(lVar28 + 8);
    }
    puVar14 = *(void **)(lVar11 + 0x28 + *(int64_t *)(lVar16 + 8));
    puVar15 = &system_buffer_ptr;
    if (puVar14 != (void *)0x0) {
      puVar15 = puVar14;
    }
    puVar23 = &system_buffer_ptr;
    if (puStack_388 != (int8_t *)0x0) {
      puVar23 = puStack_388;
    }
    System_DataHandler(&puStack_330,&unknown_var_8368_ptr,puVar23,puVar15);
    cVar6 = FUN_180624a00(&puStack_330);
    if (cVar6 != '\0') {
      ppuStack_278 = &puStack_330;
      plStack_270 = &lStack_1e8;
      ppuStack_3e0 = (void **)auStack_218;
      uStack_1d0 = 3;
      uStack_1d8 = 0;
      lStack_1e0 = 0;
      lStack_1e8 = 0;
      pcStack_220 = _guard_check_icall;
      pcStack_228 = (code *)0x0;
      pcStack_240 = _guard_check_icall;
      pcStack_248 = (code *)0x0;
      pcStack_208 = (code *)0x0;
      pcStack_200 = _guard_check_icall;
      uStack_268 = 0;
      uStack_260 = *(int32_t *)(*(int64_t *)(lVar16 + 8) + 0x5c + lVar11);
      uStack_25c = *(int8_t *)(*(int64_t *)(lVar16 + 8) + 0x58 + lVar11);
      FUN_18008a620(&ppuStack_278);
      if (lStack_1e0 - lStack_1e8 >> 3 != 0) {
        lVar11 = lVar16 + 0x48;
        lVar28 = CoreEngine_MemoryAllocator(system_memory_pool_ptr,0x40,*(int8_t *)(lVar16 + 0x70));
        SystemCore_NetworkHandler0(lVar28 + 0x20,&puStack_330);
        lVar9 = FUN_1800590b0(lVar11,acStack_3e8,lVar28 + 0x20);
        if (acStack_3e8[0] != '\0') {
          if (lVar9 == lVar11) goto LAB_18008a32f;
          if (*(int *)(lVar9 + 0x30) == 0) goto LAB_18008a327;
          if (*(int *)(lVar28 + 0x30) == 0) goto LAB_18008a32f;
          pbVar12 = *(byte **)(lVar9 + 0x28);
          lVar16 = *(int64_t *)(lVar28 + 0x28) - (int64_t)pbVar12;
          goto LAB_18008a310;
        }
        FUN_18005d1f0(extraout_XMM0_Da,lVar28);
        FUN_18008b690(lVar16,&lStack_1e8);
      }
      ppuStack_3e0 = (void **)auStack_218;
      if (pcStack_208 != (code *)0x0) {
        (*pcStack_208)(auStack_218,0,0);
      }
      ppuStack_3e0 = (void **)auStack_238;
      if (pcStack_228 != (code *)0x0) {
        (*pcStack_228)(auStack_238,0,0);
      }
      ppuStack_3e0 = apuStack_258;
      if (pcStack_248 != (code *)0x0) {
        (*pcStack_248)(apuStack_258,0,0);
      }
      if (lStack_1e8 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
    }
    puStack_330 = &system_data_buffer_ptr;
    if (lStack_328 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    lStack_328 = 0;
    uStack_318 = uStack_318 & 0xffffffff00000000;
    puStack_330 = &system_state_ptr;
    puStack_390 = &system_data_buffer_ptr;
    if (puVar4 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(puVar4);
    }
    puStack_388 = (int8_t *)0x0;
    uStack_378 = uStack_378 & 0xffffffff00000000;
    puStack_390 = &system_state_ptr;
  }
  lStack_288 = lStack_288 + 1;
  if (lStack_1f0 <= lStack_288) {
LAB_180089861:
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_418);
  }
  goto LAB_1800897d5;
  while (pbVar12 = pbVar12 + 1, uVar26 != 0) {
LAB_18008a310:
    bVar2 = *pbVar12;
    uVar26 = (uint)pbVar12[lVar16];
    if (bVar2 != uVar26) break;
  }
  if ((int)(bVar2 - uVar26) < 1) {
LAB_18008a327:
    uVar25 = 1;
  }
  else {
LAB_18008a32f:
    uVar25 = 0;
  }
                    // WARNING: Subroutine does not return
  SystemConfigProcessor(lVar28,lVar9,lVar11,uVar25);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18008a480(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18008a480(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  void *puVar3;
  void *puStack_40;
  int8_t *puStack_38;
  int32_t uStack_30;
  uint64_t uStack_28;
  
  lVar1 = core_system_data_memory;
  puVar3 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar3 = *(void **)(param_2 + 8);
  }
  lVar2 = strstr(puVar3,&system_data_e2c8,param_3,param_4,0xfffffffffffffffe);
  if (lVar2 == 0) {
    puStack_40 = &system_data_buffer_ptr;
    uStack_28 = 0;
    puStack_38 = (int8_t *)0x0;
    uStack_30 = 0;
    FUN_1806277c0(&puStack_40,*(int32_t *)(param_2 + 0x10));
    if (0 < *(int *)(param_2 + 0x10)) {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(param_2 + 8) != (void *)0x0) {
        puVar3 = *(void **)(param_2 + 8);
      }
                    // WARNING: Subroutine does not return
      memcpy(puStack_38,puVar3,(int64_t)(*(int *)(param_2 + 0x10) + 1));
    }
    if ((*(int64_t *)(param_2 + 8) != 0) && (uStack_30 = 0, puStack_38 != (int8_t *)0x0)) {
      *puStack_38 = 0;
    }
    FUN_180066df0(lVar1 + 0x28,&puStack_40);
    puStack_40 = &system_data_buffer_ptr;
    if (puStack_38 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
  }
  else {
    SystemOptimizationProcessor(&unknown_var_8416_ptr);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018008afd2)
// WARNING: Removing unreachable block (ram,0x00018008aff5)
// WARNING: Removing unreachable block (ram,0x00018008b034)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



