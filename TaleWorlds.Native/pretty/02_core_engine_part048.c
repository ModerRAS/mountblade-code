#include "ultra_high_freq_fun_definitions.h"
/* 函数别名定义: DataEncryptionHandler */
#define DataEncryptionHandler DataEncryptionHandler
/* 函数别名定义: MemoryDebugger */
#define MemoryDebugger MemoryDebugger
#include "SystemDataAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part048.c - 2 个函数
// 函数: void function_0896b0(void)
void function_0896b0(void)
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
  int8_t stack_array_418 [32];
  void *plocal_var_3f8;
  char acStack_3e8 [4];
  uint local_var_3e4;
  void **pplocal_var_3e0;
  void *plocal_var_3d8;
  int64_t lStack_3d0;
  uint local_var_3c8;
  uint64_t local_var_3c0;
  int64_t lStack_3b8;
  void *plocal_var_3b0;
  int8_t *plocal_var_3a8;
  int32_t local_var_3a0;
  uint64_t local_var_398;
  void *plocal_var_390;
  int8_t *plocal_var_388;
  int32_t local_var_380;
  uint64_t local_var_378;
  void *plocal_var_370;
  int8_t *plocal_var_368;
  int32_t local_var_360;
  uint64_t local_var_358;
  void *plocal_var_350;
  int8_t *plocal_var_348;
  int iStack_340;
  uint64_t local_var_338;
  void *plocal_var_330;
  int64_t lStack_328;
  int32_t local_var_320;
  uint64_t local_var_318;
  int64_t lStack_310;
  void *plocal_var_308;
  void *plocal_var_300;
  int32_t local_var_2f8;
  uint64_t local_var_2f0;
  void *plocal_var_2e8;
  int8_t *plocal_var_2e0;
  int32_t local_var_2d8;
  uint64_t local_var_2d0;
  void *plocal_var_2c8;
  void *plocal_var_2c0;
  int32_t local_var_2b8;
  uint64_t local_var_2b0;
  void *plocal_var_2a8;
  uint64_t local_var_2a0;
  int32_t local_var_298;
  uint64_t local_var_290;
  int64_t lStack_288;
  void **pplocal_var_278;
  int64_t *plStack_270;
  uint64_t local_var_268;
  int32_t local_var_260;
  int8_t local_var_25c;
  void *aplocal_var_258 [2];
  code *pcStack_248;
  code *pcStack_240;
  int8_t stack_array_238 [16];
  code *pcStack_228;
  code *pcStack_220;
  int8_t stack_array_218 [16];
  code *pcStack_208;
  code *pcStack_200;
  int64_t lStack_1f8;
  int64_t lStack_1f0;
  int64_t lStack_1e8;
  int64_t lStack_1e0;
  uint64_t local_var_1d8;
  int32_t local_var_1d0;
  uint64_t local_var_1c8;
  void **pplocal_var_1c0;
  int8_t stack_array_1b8 [16];
  void *plocal_var_1a8;
  int8_t *plocal_var_1a0;
  int32_t local_var_198;
  int8_t stack_array_190 [16];
  void *aplocal_var_180 [5];
  void *plocal_var_158;
  void *plocal_var_150;
  int iStack_148;
  uint64_t local_var_38;
  local_var_1c8 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_418;
  uVar27 = 0;
  local_var_3e4 = 0;
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
  SystemParameterHandler(system_message_context,&processed_var_8312_ptr);
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
      plocal_var_1a8 = &system_config_ptr;
      plocal_var_1a0 = stack_array_190;
      stack_array_190[0] = 0;
      local_var_198 = 0;
      strcpy_s(stack_array_190,0x10,&system_buffer_ptr);
      ppuVar10 = &plocal_var_1a8;
      uVar26 = (uint)uVar27 | 2;
    }
    else {
      ppuVar10 = (void **)function_624030(aplocal_var_180);
      uVar26 = (uint)uVar27 | 1;
    }
    plocal_var_350 = &system_data_buffer_ptr;
    local_var_338 = 0;
    plocal_var_348 = (int8_t *)0x0;
    iStack_340 = 0;
    local_var_3e4 = uVar26;
    SystemManager_ConfigManager0(&plocal_var_350);
    puVar4 = plocal_var_348;
    if (0 < *(int *)(ppuVar10 + 2)) {
      puVar14 = &system_buffer_ptr;
      if (ppuVar10[1] != (void *)0x0) {
        puVar14 = ppuVar10[1];
      }
// WARNING: Subroutine does not return
      memcpy(plocal_var_348,puVar14,(int64_t)(*(int *)(ppuVar10 + 2) + 1));
    }
    if ((ppuVar10[1] != (void *)0x0) && (iStack_340 = 0, plocal_var_348 != (int8_t *)0x0)) {
      *plocal_var_348 = 0;
    }
    iVar18 = iStack_340;
    if ((uVar26 & 2) != 0) {
      uVar26 = uVar26 & 0xfffffffd;
      plocal_var_1a8 = &system_state_ptr;
      local_var_3e4 = uVar26;
    }
    if ((uVar26 & 1) != 0) {
      uVar26 = uVar26 & 0xfffffffe;
      aplocal_var_180[0] = &system_state_ptr;
      local_var_3e4 = uVar26;
    }
    uVar27 = (uint64_t)uVar26;
    plocal_var_308 = &system_data_buffer_ptr;
    local_var_2f0 = 0;
    plocal_var_300 = (void *)0x0;
    local_var_2f8 = 0;
    if ((iVar7 < 0) ||
       (lVar16 = *(int64_t *)(*system_main_module_state + 0x888),
       (uint64_t)(*(int64_t *)(*system_main_module_state + 0x890) - lVar16 >> 5) <= uVar17)) {
      lVar16 = MemoryDebugger0();
    }
    else {
      lVar16 = uVar17 * 0x20 + lVar16;
    }
    plocal_var_3b0 = &system_data_buffer_ptr;
    local_var_398 = 0;
    plocal_var_3a8 = (int8_t *)0x0;
    local_var_3a0 = 0;
    SystemManager_ConfigManager0(&plocal_var_3b0,*(int32_t *)(lVar16 + 0x10));
    lVar11 = lStack_310;
    puVar23 = plocal_var_3a8;
    if (*(int *)(lVar16 + 0x10) != 0) {
// WARNING: Subroutine does not return
      memcpy(plocal_var_3a8,*(uint64_t *)(lVar16 + 8),*(int *)(lVar16 + 0x10) + 1);
    }
    if (*(int64_t *)(lVar16 + 8) != 0) {
      local_var_3a0 = 0;
      if (plocal_var_3a8 != (int8_t *)0x0) {
        *plocal_var_3a8 = 0;
      }
      local_var_398 = local_var_398 & 0xffffffff;
    }
    plocal_var_3f8 = &system_buffer_ptr;
    if (*(void **)(lVar28 + 8) != (void *)0x0) {
      plocal_var_3f8 = *(void **)(lVar28 + 8);
    }
    puVar14 = *(void **)(lStack_3b8 + 0x28 + *(int64_t *)(lStack_310 + 8));
    puVar15 = &system_buffer_ptr;
    if (puVar14 != (void *)0x0) {
      puVar15 = puVar14;
    }
    puVar20 = &system_buffer_ptr;
    if (plocal_var_3a8 != (int8_t *)0x0) {
      puVar20 = plocal_var_3a8;
    }
    System_DataHandler(&plocal_var_308,&processed_var_8368_ptr,puVar20,puVar15);
    cVar5 = RenderingSystem_RenderQueue(&plocal_var_308);
    lVar16 = lStack_3b8;
    if (cVar5 != '\0') {
      plocal_var_3d8 = &system_data_buffer_ptr;
      local_var_3c0 = 0;
      lStack_3d0 = 0;
      local_var_3c8 = 0;
      puVar14 = *(void **)(lStack_3b8 + 0x28 + *(int64_t *)(lVar11 + 8));
      puVar15 = &system_buffer_ptr;
      if (puVar14 != (void *)0x0) {
        puVar15 = puVar14;
      }
      puVar20 = &system_buffer_ptr;
      if (puVar23 != (int8_t *)0x0) {
        puVar20 = puVar23;
      }
      System_DataHandler(&plocal_var_3d8,&processed_var_8076_ptr,puVar20,puVar15);
      if (cVar6 != '\0') {
        plocal_var_2a8 = &system_data_buffer_ptr;
        local_var_290 = 0;
        local_var_2a0 = 0;
        local_var_298 = 0;
        if (((0 < (int)local_var_3c8) && (0 < iVar18)) &&
           (lVar11 = strstr(lStack_3d0,puVar4), lVar11 != 0)) {
          iVar7 = (int)lVar11 - (int)lStack_3d0;
          if (local_var_3c8 < (uint)(iVar18 + iVar7)) {
            iVar18 = local_var_3c8 - iVar7;
          }
          uVar26 = iVar18 + iVar7;
          if (uVar26 < local_var_3c8) {
            lVar11 = (int64_t)(int)uVar26;
            do {
              *(int8_t *)((lVar11 - iVar18) + lStack_3d0) = *(int8_t *)(lVar11 + lStack_3d0)
              ;
              uVar26 = uVar26 + 1;
              lVar11 = lVar11 + 1;
            } while (uVar26 < local_var_3c8);
          }
          local_var_3c8 = local_var_3c8 - iVar18;
          *(int8_t *)((uint64_t)local_var_3c8 + lStack_3d0) = 0;
        }
        local_var_2a0 = 0;
        local_var_290 = local_var_290 & 0xffffffff00000000;
        plocal_var_2a8 = &system_state_ptr;
      }
      function_627560(&plocal_var_158,lVar28);
      lVar11 = lStack_310;
      plocal_var_2c8 = &system_data_buffer_ptr;
      local_var_2b0 = 0;
      plocal_var_2c0 = (void *)0x0;
      local_var_2b8 = 0;
      uVar1 = *(int8_t *)(lVar16 + 0x58 + *(int64_t *)(lStack_310 + 8));
      pplocal_var_1c0 = &plocal_var_2e8;
      plocal_var_2e8 = &system_data_buffer_ptr;
      local_var_2d0 = 0;
      plocal_var_2e0 = (int8_t *)0x0;
      local_var_2d8 = 0;
      SystemManager_ConfigManager0(&plocal_var_2e8,iStack_148);
      if (0 < iStack_148) {
        puVar14 = &system_buffer_ptr;
        if (plocal_var_150 != (void *)0x0) {
          puVar14 = plocal_var_150;
        }
// WARNING: Subroutine does not return
        memcpy(plocal_var_2e0,puVar14,(int64_t)(iStack_148 + 1));
      }
      if ((plocal_var_150 != (void *)0x0) && (local_var_2d8 = 0, plocal_var_2e0 != (int8_t *)0x0)) {
        *plocal_var_2e0 = 0;
      }
      pplocal_var_3e0 = &plocal_var_370;
      plocal_var_370 = &system_data_buffer_ptr;
      local_var_358 = 0;
      plocal_var_368 = (int8_t *)0x0;
      local_var_360 = 0;
      SystemManager_ConfigManager0(&plocal_var_370,local_var_3c8);
      if (local_var_3c8 != 0) {
// WARNING: Subroutine does not return
        memcpy(plocal_var_368,lStack_3d0,local_var_3c8 + 1);
      }
      if (lStack_3d0 != 0) {
        local_var_360 = 0;
        if (plocal_var_368 != (int8_t *)0x0) {
          *plocal_var_368 = 0;
        }
        local_var_358 = local_var_358 & 0xffffffff;
      }
      plocal_var_3f8 = (void *)CONCAT71(plocal_var_3f8._1_7_,uVar1);
      cVar6 = function_087700(&lStack_1f8,&plocal_var_370,&plocal_var_2e8,&plocal_var_2c8);
      lVar16 = lStack_1f8;
      if (cVar6 == '\0') {
        puVar14 = &system_buffer_ptr;
        if (plocal_var_2c0 != (void *)0x0) {
          puVar14 = plocal_var_2c0;
        }
        puVar15 = &system_buffer_ptr;
        if (plocal_var_300 != (void *)0x0) {
          puVar15 = plocal_var_300;
        }
        SystemOptimizationProcessor(&processed_var_8376_ptr,puVar15,puVar14);
      }
      else {
        *(int32_t *)(lStack_1f8 + 4) =
             *(int32_t *)(lStack_3b8 + 0x5c + *(int64_t *)(lVar11 + 8));
        function_08b440(lVar11,lStack_1f8);
        function_057b00(lVar11 + 0x48,stack_array_1b8,lVar16 + 0x58);
      }
      plocal_var_2c8 = &system_data_buffer_ptr;
      if (plocal_var_2c0 != (void *)0x0) {
// WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
      plocal_var_2c0 = (void *)0x0;
      local_var_2b0 = local_var_2b0 & 0xffffffff00000000;
      plocal_var_2c8 = &system_state_ptr;
      plocal_var_158 = &system_state_ptr;
      plocal_var_3d8 = &system_data_buffer_ptr;
      if (lStack_3d0 != 0) {
// WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
      lStack_3d0 = 0;
      local_var_3c0 = local_var_3c0 & 0xffffffff00000000;
      plocal_var_3d8 = &system_state_ptr;
    }
    plocal_var_3b0 = &system_data_buffer_ptr;
    if (puVar23 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(puVar23);
    }
    plocal_var_3a8 = (int8_t *)0x0;
    local_var_398 = local_var_398 & 0xffffffff00000000;
    plocal_var_3b0 = &system_state_ptr;
    plocal_var_308 = &system_data_buffer_ptr;
    if (plocal_var_300 != (void *)0x0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    plocal_var_300 = (void *)0x0;
    local_var_2f0 = local_var_2f0 & 0xffffffff00000000;
    plocal_var_308 = &system_state_ptr;
    plocal_var_350 = &system_data_buffer_ptr;
    if (puVar4 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(puVar4);
    }
    plocal_var_348 = (int8_t *)0x0;
    local_var_338 = local_var_338 & 0xffffffff00000000;
    plocal_var_350 = &system_state_ptr;
    lVar16 = lStack_310;
  }
  else {
    iVar7 = *(int *)(lStack_3b8 + 0x5c + *(int64_t *)(lVar16 + 8));
    if ((iVar7 < 0) ||
       (lVar9 = *(int64_t *)(*system_main_module_state + 0x888),
       (uint64_t)(*(int64_t *)(*system_main_module_state + 0x890) - lVar9 >> 5) <=
       (uint64_t)(int64_t)iVar7)) {
      lVar9 = MemoryDebugger0();
    }
    else {
      lVar9 = (int64_t)iVar7 * 0x20 + lVar9;
    }
    plocal_var_390 = &system_data_buffer_ptr;
    local_var_378 = 0;
    plocal_var_388 = (int8_t *)0x0;
    local_var_380 = 0;
    if (*(int *)(lVar9 + 0x10) != 0) {
      iVar7 = *(int *)(lVar9 + 0x10) + 1;
      if (iVar7 < 0x10) {
        iVar7 = 0x10;
      }
      plocal_var_388 = (int8_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,(int64_t)iVar7,0x13);
      *plocal_var_388 = 0;
      uVar17 = (uint64_t)plocal_var_388 & 0xffffffffffc00000;
      if (uVar17 != 0) {
        lVar21 = ((int64_t)plocal_var_388 - uVar17 >> 0x10) * 0x50 + 0x80 + uVar17;
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
          uVar26 = uVar26 - (int)(((int64_t)plocal_var_388 -
                                  (((int64_t)((int64_t)puVar22 + (-0x80 - uVar17)) / 0x50) *
                                   0x10000 + uVar17)) % uVar24);
        }
      }
      local_var_378 = CONCAT44(local_var_378._4_4_,uVar26);
      if (*(int *)(lVar9 + 0x10) != 0) {
// WARNING: Subroutine does not return
        memcpy(plocal_var_388,*(uint64_t *)(lVar9 + 8),*(int *)(lVar9 + 0x10) + 1);
      }
    }
    puVar4 = plocal_var_388;
    if (*(int64_t *)(lVar9 + 8) != 0) {
      local_var_380 = 0;
      if (plocal_var_388 != (int8_t *)0x0) {
        *plocal_var_388 = 0;
      }
      local_var_378 = local_var_378 & 0xffffffff;
    }
    plocal_var_330 = &system_data_buffer_ptr;
    local_var_318 = 0;
    lStack_328 = 0;
    local_var_320 = 0;
    plocal_var_3f8 = &system_buffer_ptr;
    if (*(void **)(lVar28 + 8) != (void *)0x0) {
      plocal_var_3f8 = *(void **)(lVar28 + 8);
    }
    puVar14 = *(void **)(lVar11 + 0x28 + *(int64_t *)(lVar16 + 8));
    puVar15 = &system_buffer_ptr;
    if (puVar14 != (void *)0x0) {
      puVar15 = puVar14;
    }
    puVar23 = &system_buffer_ptr;
    if (plocal_var_388 != (int8_t *)0x0) {
      puVar23 = plocal_var_388;
    }
    System_DataHandler(&plocal_var_330,&processed_var_8368_ptr,puVar23,puVar15);
    cVar6 = UltraHighFreq_LogManager1(&plocal_var_330);
    if (cVar6 != '\0') {
      pplocal_var_278 = &plocal_var_330;
      plStack_270 = &lStack_1e8;
      pplocal_var_3e0 = (void **)stack_array_218;
      local_var_1d0 = 3;
      local_var_1d8 = 0;
      lStack_1e0 = 0;
      lStack_1e8 = 0;
      pcStack_220 = _guard_check_icall;
      pcStack_228 = (code *)0x0;
      pcStack_240 = _guard_check_icall;
      pcStack_248 = (code *)0x0;
      pcStack_208 = (code *)0x0;
      pcStack_200 = _guard_check_icall;
      local_var_268 = 0;
      local_var_260 = *(int32_t *)(*(int64_t *)(lVar16 + 8) + 0x5c + lVar11);
      local_var_25c = *(int8_t *)(*(int64_t *)(lVar16 + 8) + 0x58 + lVar11);
      function_08a620(&pplocal_var_278);
      if (lStack_1e0 - lStack_1e8 >> 3 != 0) {
        lVar11 = lVar16 + 0x48;
        lVar28 = CoreEngine_MemoryAllocator(system_memory_pool_ptr,0x40,*(int8_t *)(lVar16 + 0x70));
        SystemCore_NetworkHandler0(lVar28 + 0x20,&plocal_var_330);
        lVar9 = SystemCore_SecurityValidator(lVar11,acStack_3e8,lVar28 + 0x20);
        if (acStack_3e8[0] != '\0') {
          if (lVar9 == lVar11) goto LAB_18008a32f;
          if (*(int *)(lVar9 + 0x30) == 0) goto LAB_18008a327;
          if (*(int *)(lVar28 + 0x30) == 0) goto LAB_18008a32f;
          pbVar12 = *(byte **)(lVar9 + 0x28);
          lVar16 = *(int64_t *)(lVar28 + 0x28) - (int64_t)pbVar12;
          goto LAB_18008a310;
        }
        function_05d1f0(extraout_XMM0_Da,lVar28);
        function_08b690(lVar16,&lStack_1e8);
      }
      pplocal_var_3e0 = (void **)stack_array_218;
      if (pcStack_208 != (code *)0x0) {
        (*pcStack_208)(stack_array_218,0,0);
      }
      pplocal_var_3e0 = (void **)stack_array_238;
      if (pcStack_228 != (code *)0x0) {
        (*pcStack_228)(stack_array_238,0,0);
      }
      pplocal_var_3e0 = aplocal_var_258;
      if (pcStack_248 != (code *)0x0) {
        (*pcStack_248)(aplocal_var_258,0,0);
      }
      if (lStack_1e8 != 0) {
// WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
    }
    plocal_var_330 = &system_data_buffer_ptr;
    if (lStack_328 != 0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    lStack_328 = 0;
    local_var_318 = local_var_318 & 0xffffffff00000000;
    plocal_var_330 = &system_state_ptr;
    plocal_var_390 = &system_data_buffer_ptr;
    if (puVar4 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(puVar4);
    }
    plocal_var_388 = (int8_t *)0x0;
    local_var_378 = local_var_378 & 0xffffffff00000000;
    plocal_var_390 = &system_state_ptr;
  }
  lStack_288 = lStack_288 + 1;
  if (lStack_1f0 <= lStack_288) {
LAB_180089861:
// WARNING: Subroutine does not return
    CoreSystemConfigManager(local_var_38 ^ (uint64_t)stack_array_418);
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
// 函数: void function_08a480(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void function_08a480(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int64_t lVar2;
  void *puVar3;
  void *plocal_var_40;
  int8_t *plocal_var_38;
  int32_t local_var_30;
  uint64_t local_var_28;
  lVar1 = core_system_data_memory;
  puVar3 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar3 = *(void **)(param_2 + 8);
  }
  lVar2 = strstr(puVar3,&system_data_e2c8,param_3,param_4,0xfffffffffffffffe);
  if (lVar2 == 0) {
    plocal_var_40 = &system_data_buffer_ptr;
    local_var_28 = 0;
    plocal_var_38 = (int8_t *)0x0;
    local_var_30 = 0;
    SystemManager_ConfigManager0(&plocal_var_40,*(int32_t *)(param_2 + 0x10));
    if (0 < *(int *)(param_2 + 0x10)) {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(param_2 + 8) != (void *)0x0) {
        puVar3 = *(void **)(param_2 + 8);
      }
// WARNING: Subroutine does not return
      memcpy(plocal_var_38,puVar3,(int64_t)(*(int *)(param_2 + 0x10) + 1));
    }
    if ((*(int64_t *)(param_2 + 8) != 0) && (local_var_30 = 0, plocal_var_38 != (int8_t *)0x0)) {
      *plocal_var_38 = 0;
    }
    DataEncryptionHandler0(lVar1 + 0x28,&plocal_var_40);
    plocal_var_40 = &system_data_buffer_ptr;
    if (plocal_var_38 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
  }
  else {
    SystemOptimizationProcessor(&processed_var_8416_ptr);
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x00018008afd2)
// WARNING: Removing unreachable block (ram,0x00018008aff5)
// WARNING: Removing unreachable block (ram,0x00018008b034)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address