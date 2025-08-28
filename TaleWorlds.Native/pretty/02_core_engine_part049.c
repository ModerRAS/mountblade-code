#include "SystemDataAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part049.c - 3 个函数
// 函数: void function_08a620(uint64_t *param_1)
void function_08a620(uint64_t *param_1)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t **ppuVar3;
  int8_t uVar4;
  uint64_t *puVar5;
  bool bVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  char cVar12;
  int iVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t *plVar16;
  uint64_t uVar17;
  char *pcVar18;
  int8_t *puVar19;
  int iVar20;
  void *puVar21;
  int64_t *plVar22;
  int iVar23;
  code *pcVar24;
  int32_t uVar25;
  uint uVar26;
  uint64_t *puVar27;
  int64_t *plVar28;
  void *puVar29;
  uint64_t *puVar30;
  int8_t stack_array_5d8 [32];
  void *plocal_var_5b8;
  int32_t local_var_5a8;
  uint64_t **pplocal_var_5a0;
  void *plocal_var_598;
  void *plocal_var_590;
  uint local_var_588;
  uint64_t local_var_580;
  uint64_t *plocal_var_578;
  uint64_t *plocal_var_570;
  uint64_t local_var_568;
  uint64_t local_var_560;
  void *plocal_var_558;
  int8_t *plocal_var_550;
  int32_t local_var_548;
  uint64_t local_var_540;
  void *plocal_var_538;
  int8_t *plocal_var_530;
  int32_t local_var_528;
  uint64_t local_var_520;
  void *plocal_var_518;
  int8_t *plocal_var_510;
  int32_t local_var_508;
  uint64_t local_var_500;
  uint64_t *plocal_var_4f8;
  uint64_t local_var_4f0;
  uint64_t local_var_4e8;
  int32_t local_var_4e0;
  int8_t local_var_4dc;
  uint64_t *aplocal_var_4d8 [2];
  code *pcStack_4c8;
  code *pcStack_4c0;
  uint64_t stack_array_4b8 [2];
  code *pcStack_4a8;
  code *pcStack_4a0;
  uint64_t stack_array_498 [2];
  code *pcStack_488;
  code *pcStack_480;
  int64_t lStack_478;
  uint64_t *plocal_var_470;
  uint64_t *plocal_var_468;
  uint64_t local_var_460;
  int32_t local_var_458;
  int64_t lStack_450;
  int64_t lStack_448;
  uint64_t *plocal_var_440;
  void *plocal_var_438;
  void *plocal_var_430;
  int32_t local_var_420;
  void *plocal_var_418;
  int64_t lStack_410;
  int32_t local_var_400;
  uint64_t local_var_3f8;
  void **pplocal_var_3f0;
  void *plocal_var_3e8;
  int8_t *plocal_var_3e0;
  uint local_var_3d8;
  int8_t stack_array_3d0 [16];
  void *plocal_var_3c0;
  int8_t *plocal_var_3b8;
  int32_t local_var_3b0;
  int8_t stack_array_3a8 [16];
  void *plocal_var_398;
  void *plocal_var_390;
  uint local_var_388;
  uint8_t stack_array_380 [264];
  void *plocal_var_278;
  void *plocal_var_270;
  int iStack_268;
  uint8_t stack_array_260 [264];
  void *plocal_var_158;
  void *plocal_var_150;
  uint local_var_148;
  uint8_t stack_array_140 [264];
  uint64_t local_var_38;
  local_var_3f8 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_5d8;
  local_var_5a8 = 0;
  plocal_var_440 = param_1;
  if ((param_1[10] == 0) || (cVar12 = (*(code *)param_1[0xb])(*param_1), cVar12 != '\0')) {
    plocal_var_470 = (uint64_t *)0x0;
    plocal_var_468 = (uint64_t *)0x0;
    local_var_460 = 0;
    local_var_458 = 3;
    function_62cb00(*param_1,&plocal_var_470,&system_data_6680);
    plocal_var_538 = &system_data_buffer_ptr;
    local_var_520 = 0;
    plocal_var_530 = (int8_t *)0x0;
    local_var_528 = 0;
    lStack_448 = (int64_t)(int)((int64_t)plocal_var_468 - (int64_t)plocal_var_470 >> 5);
    if (0 < lStack_448) {
      lStack_478 = 0;
      do {
        uVar26 = 0;
        puVar27 = plocal_var_470 + lStack_478 * 4;
        iVar23 = *(int *)(puVar27 + 2) + -1;
        if (-1 < iVar23) {
          lVar14 = (int64_t)iVar23;
          do {
            if (*(char *)(lVar14 + puVar27[1]) == '/') goto LAB_18008a753;
            iVar23 = iVar23 + -1;
            lVar14 = lVar14 + -1;
          } while (-1 < lVar14);
        }
        iVar23 = -1;
LAB_18008a753:
        plocal_var_278 = &rendering_buffer_2008_ptr;
        plocal_var_270 = stack_array_260;
        iStack_268 = 0;
        stack_array_260[0] = 0;
        plocal_var_398 = &rendering_buffer_2008_ptr;
        plocal_var_390 = stack_array_380;
        local_var_388 = 0;
        stack_array_380[0] = 0;
        if (iVar23 != -1) {
          plocal_var_3e8 = &system_config_ptr;
          plocal_var_3e0 = stack_array_3d0;
          stack_array_3d0[0] = 0;
          local_var_3d8 = 6;
          strcpy_s(stack_array_3d0,0x10,&rendering_buffer_2588_ptr);
          if (*(uint *)(puVar27 + 2) < local_var_3d8) {
LAB_18008a841:
            bVar6 = false;
          }
          else {
            if (local_var_3d8 != 0) {
              pcVar18 = (char *)puVar27[1];
              lVar14 = (int64_t)plocal_var_3e0 - (int64_t)pcVar18;
              do {
                if (*pcVar18 != pcVar18[lVar14]) goto LAB_18008a841;
                uVar26 = uVar26 + 1;
                pcVar18 = pcVar18 + 1;
              } while (uVar26 < local_var_3d8);
            }
            bVar6 = true;
          }
          local_var_5a8 = 0;
          plocal_var_3e8 = &system_state_ptr;
          uVar25 = 0;
          if (bVar6) {
            plocal_var_3c0 = &system_config_ptr;
            plocal_var_3b8 = stack_array_3a8;
            stack_array_3a8[0] = 0;
            local_var_3b0 = 6;
            strcpy_s(stack_array_3a8,0x10,&rendering_buffer_2588_ptr);
            plocal_var_3c0 = &system_state_ptr;
            uVar25 = local_var_3b0;
          }
          local_var_5a8 = 0;
          lVar14 = NetworkSystem_ProtocolParser(puVar27,&plocal_var_418,uVar25,iVar23);
          puVar21 = &system_buffer_ptr;
          if (*(void **)(lVar14 + 8) != (void *)0x0) {
            puVar21 = *(void **)(lVar14 + 8);
          }
          (**(code **)(plocal_var_278 + 0x10))(&plocal_var_278,puVar21);
          plocal_var_418 = &system_data_buffer_ptr;
          if (lStack_410 != 0) {
// WARNING: Subroutine does not return
            CoreEngine_MemoryPoolManager();
          }
          lStack_410 = 0;
          local_var_400 = 0;
          plocal_var_418 = &system_state_ptr;
        }
        uVar26 = iVar23 + 1;
        iVar23 = *(int *)(puVar27 + 2);
        plocal_var_598 = &system_data_buffer_ptr;
        local_var_580 = 0;
        plocal_var_590 = (void *)0x0;
        local_var_588 = 0;
        local_var_5a8 = 4;
        iVar13 = iVar23 - uVar26;
        iVar20 = *(int *)(puVar27 + 2) - uVar26;
        if (iVar13 < (int)(*(int *)(puVar27 + 2) - uVar26)) {
          iVar20 = iVar13;
        }
        SystemManager_ConfigManager0(&plocal_var_598,iVar20 + 1);
        lVar14 = (int64_t)(int)uVar26;
        for (; (lVar14 < iVar23 && (uVar26 < *(uint *)(puVar27 + 2))); uVar26 = uVar26 + 1) {
          uVar4 = *(int8_t *)(lVar14 + puVar27[1]);
          SystemManager_ConfigManager0(&plocal_var_598,local_var_588 + 1);
          plocal_var_590[local_var_588] = uVar4;
          plocal_var_590[local_var_588 + 1] = 0;
          local_var_588 = local_var_588 + 1;
          lVar14 = lVar14 + 1;
        }
        plocal_var_158 = &rendering_buffer_2008_ptr;
        plocal_var_150 = stack_array_140;
        stack_array_140[0] = 0;
        puVar21 = &system_buffer_ptr;
        if (plocal_var_590 != (void *)0x0) {
          puVar21 = plocal_var_590;
        }
        local_var_148 = local_var_588;
        strcpy_s(stack_array_140,0x100,puVar21);
        local_var_5a8 = 0xc;
        uVar26 = local_var_588 - 1;
        if (-1 < (int)uVar26) {
          lVar14 = (int64_t)(int)uVar26;
          do {
            if (plocal_var_590[lVar14] == '.') {
              if (uVar26 != 0xffffffff) {
                plocal_var_150[uVar26] = 0;
                lVar14 = -1;
                do {
                  lVar14 = lVar14 + 1;
                } while (plocal_var_150[lVar14] != '\0');
                local_var_148 = (uint)lVar14;
              }
              break;
            }
            uVar26 = uVar26 - 1;
            lVar14 = lVar14 + -1;
          } while (-1 < lVar14);
        }
        local_var_388 = local_var_148;
        puVar21 = &system_buffer_ptr;
        if (plocal_var_150 != (void *)0x0) {
          puVar21 = plocal_var_150;
        }
        strcpy_s(plocal_var_390,0x100,puVar21);
        plocal_var_158 = &system_state_ptr;
        local_var_5a8 = 0;
        plocal_var_598 = &system_data_buffer_ptr;
        if (plocal_var_590 != (void *)0x0) {
// WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        plocal_var_590 = (void *)0x0;
        local_var_580 = local_var_580 & 0xffffffff00000000;
        plocal_var_598 = &system_state_ptr;
        local_var_528 = 0;
        if (plocal_var_530 != (int8_t *)0x0) {
          *plocal_var_530 = 0;
        }
        if (param_1[0xe] == 0) {
LAB_18008acc1:
          uVar4 = *(int8_t *)((int64_t)param_1 + 0x1c);
          pplocal_var_3f0 = &plocal_var_518;
          plocal_var_518 = &system_data_buffer_ptr;
          local_var_500 = 0;
          plocal_var_510 = (int8_t *)0x0;
          local_var_508 = 0;
          SystemManager_ConfigManager0(&plocal_var_518,local_var_388);
          if (0 < (int)local_var_388) {
            puVar21 = &system_buffer_ptr;
            if (plocal_var_390 != (void *)0x0) {
              puVar21 = plocal_var_390;
            }
// WARNING: Subroutine does not return
            memcpy(plocal_var_510,puVar21,(int64_t)(int)(local_var_388 + 1));
          }
          if ((plocal_var_390 != (void *)0x0) &&
             (local_var_508 = 0, plocal_var_510 != (int8_t *)0x0)) {
            *plocal_var_510 = 0;
          }
          pplocal_var_5a0 = &plocal_var_578;
          plocal_var_578 = (uint64_t *)&system_data_buffer_ptr;
          local_var_560 = 0;
          plocal_var_570 = (uint64_t *)0x0;
          local_var_568 = local_var_568 & 0xffffffff00000000;
          SystemManager_ConfigManager0(&plocal_var_578,iStack_268);
          if (0 < iStack_268) {
            puVar21 = &system_buffer_ptr;
            if (plocal_var_270 != (void *)0x0) {
              puVar21 = plocal_var_270;
            }
// WARNING: Subroutine does not return
            memcpy(plocal_var_570,puVar21,(int64_t)(iStack_268 + 1));
          }
          if ((plocal_var_270 != (void *)0x0) &&
             (local_var_568 = local_var_568 & 0xffffffff00000000, plocal_var_570 != (uint64_t *)0x0)) {
            *(int8_t *)plocal_var_570 = 0;
          }
          plocal_var_5b8 = (void *)CONCAT71(plocal_var_5b8._1_7_,uVar4);
          cVar12 = function_087700(&lStack_450,&plocal_var_578,&plocal_var_518,&plocal_var_538);
          lVar14 = lStack_450;
          if (cVar12 == '\0') {
            puVar19 = &system_buffer_ptr;
            if (plocal_var_530 != (int8_t *)0x0) {
              puVar19 = plocal_var_530;
            }
            SystemOptimizationProcessor(puVar19);
          }
          else {
            *(int32_t *)(lStack_450 + 4) = *(int32_t *)(param_1 + 3);
            puVar5 = (uint64_t *)param_1[1];
            plVar28 = (int64_t *)puVar5[1];
            if (plVar28 < (int64_t *)puVar5[2]) {
              puVar5[1] = (uint64_t)(plVar28 + 1);
              *plVar28 = lStack_450;
            }
            else {
              plVar22 = (int64_t *)*puVar5;
              lVar15 = (int64_t)plVar28 - (int64_t)plVar22 >> 3;
              if (lVar15 == 0) {
                lVar15 = 1;
LAB_18008ae5a:
                plVar16 = (int64_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,lVar15 * 8,(char)puVar5[3]);
                plVar28 = (int64_t *)puVar5[1];
                plVar22 = (int64_t *)*puVar5;
              }
              else {
                lVar15 = lVar15 * 2;
                if (lVar15 != 0) goto LAB_18008ae5a;
                plVar16 = (int64_t *)0x0;
              }
              if (plVar22 != plVar28) {
// WARNING: Subroutine does not return
                memmove(plVar16,plVar22,(int64_t)plVar28 - (int64_t)plVar22);
              }
              *plVar16 = lVar14;
              if (*puVar5 != 0) {
// WARNING: Subroutine does not return
                CoreEngine_MemoryPoolManager();
              }
              *puVar5 = (uint64_t)plVar16;
              puVar5[1] = (uint64_t)(plVar16 + 1);
              puVar5[2] = (uint64_t)(plVar16 + lVar15);
            }
            if (param_1[6] != 0) {
              (*(code *)param_1[7])();
            }
          }
        }
        else {
          plocal_var_558 = &system_data_buffer_ptr;
          local_var_540 = 0;
          plocal_var_550 = (int8_t *)0x0;
          local_var_548 = 0;
          function_142300(*system_main_module_state,&plocal_var_438,&plocal_var_278);
          local_var_548 = 0;
          if (plocal_var_550 != (int8_t *)0x0) {
            *plocal_var_550 = 0;
          }
          plocal_var_5b8 = &system_buffer_ptr;
          if (core_system_control_memory != (void *)0x0) {
            plocal_var_5b8 = core_system_control_memory;
          }
          puVar21 = &system_buffer_ptr;
          if (plocal_var_390 != (void *)0x0) {
            puVar21 = plocal_var_390;
          }
          puVar29 = &system_buffer_ptr;
          if (plocal_var_430 != (void *)0x0) {
            puVar29 = plocal_var_430;
          }
          System_DataHandler(&plocal_var_558,&processed_var_8064_ptr,puVar29,puVar21);
          plocal_var_438 = &system_data_buffer_ptr;
          if (plocal_var_430 != (void *)0x0) {
// WARNING: Subroutine does not return
            CoreEngine_MemoryPoolManager();
          }
          plocal_var_430 = (void *)0x0;
          local_var_420 = 0;
          plocal_var_438 = &system_state_ptr;
          cVar12 = (*(code *)param_1[0xf])(&plocal_var_558);
          plocal_var_558 = &system_data_buffer_ptr;
          if (cVar12 != '\0') {
            if (plocal_var_550 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
              CoreEngine_MemoryPoolManager();
            }
            plocal_var_550 = (int8_t *)0x0;
            local_var_540 = (uint64_t)local_var_540._4_4_ << 0x20;
            plocal_var_558 = &system_state_ptr;
            goto LAB_18008acc1;
          }
          if (plocal_var_550 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
            CoreEngine_MemoryPoolManager();
          }
          plocal_var_550 = (int8_t *)0x0;
          local_var_540 = (uint64_t)local_var_540._4_4_ << 0x20;
          plocal_var_558 = &system_state_ptr;
        }
        plocal_var_398 = &system_state_ptr;
        plocal_var_278 = &system_state_ptr;
        lStack_478 = lStack_478 + 1;
      } while (lStack_478 < lStack_448);
    }
    plocal_var_578 = (uint64_t *)0x0;
    plocal_var_570 = (uint64_t *)0x0;
    local_var_568 = 0;
    local_var_560 = CONCAT44(local_var_560._4_4_,3);
    function_62c8f0(*param_1,&plocal_var_578);
    puVar11 = plocal_var_440;
    uVar17 = (int64_t)plocal_var_570 - (int64_t)plocal_var_578 >> 5;
    puVar27 = plocal_var_578;
    puVar7 = plocal_var_578;
    puVar8 = plocal_var_570;
    puVar9 = plocal_var_470;
    puVar10 = plocal_var_468;
    if (0 < (int)uVar17) {
      puVar1 = plocal_var_440 + 8;
      puVar2 = plocal_var_440 + 0xc;
      ppuVar3 = (uint64_t **)(plocal_var_440 + 4);
      uVar17 = uVar17 & 0xffffffff;
      puVar30 = plocal_var_578;
      do {
        local_var_4f0 = puVar11[1];
        pplocal_var_5a0 = (uint64_t **)stack_array_498;
        pcStack_4a0 = _guard_check_icall;
        pcStack_4a8 = (code *)0x0;
        pcStack_4c0 = _guard_check_icall;
        pcStack_4c8 = (code *)0x0;
        pcStack_488 = (code *)0x0;
        pcStack_480 = _guard_check_icall;
        local_var_4e8 = 0;
        local_var_4e0 = *(int32_t *)(puVar11 + 3);
        local_var_4dc = *(int8_t *)((int64_t)puVar11 + 0x1c);
        plocal_var_4f8 = puVar30;
        if (stack_array_4b8 != puVar1) {
          pcStack_480 = _guard_check_icall;
          pcStack_488 = (code *)0x0;
          pcStack_4a0 = _guard_check_icall;
          pcStack_4a8 = (code *)0x0;
          pcStack_4c0 = _guard_check_icall;
          pcStack_4c8 = (code *)0x0;
          local_var_4e8 = 0;
          pcVar24 = (code *)puVar11[10];
          if (pcVar24 != (code *)0x0) {
            (*pcVar24)(stack_array_4b8,puVar1);
            pcVar24 = (code *)puVar11[10];
          }
          pcStack_4a0 = (code *)puVar11[0xb];
          pcStack_4a8 = pcVar24;
        }
        if (stack_array_498 != puVar2) {
          if (pcStack_488 != (code *)0x0) {
            (*pcStack_488)(stack_array_498,0);
          }
          pcVar24 = (code *)puVar11[0xe];
          if (pcVar24 != (code *)0x0) {
            (*pcVar24)(stack_array_498,puVar2);
            pcVar24 = (code *)puVar11[0xe];
          }
          pcStack_480 = (code *)puVar11[0xf];
          pcStack_488 = pcVar24;
        }
        if (aplocal_var_4d8 != ppuVar3) {
          if (pcStack_4c8 != (code *)0x0) {
            (*pcStack_4c8)(aplocal_var_4d8,0);
          }
          pcVar24 = (code *)puVar11[6];
          if (pcVar24 != (code *)0x0) {
            (*pcVar24)(aplocal_var_4d8,ppuVar3);
            pcVar24 = (code *)puVar11[6];
          }
          pcStack_4c0 = (code *)puVar11[7];
          pcStack_4c8 = pcVar24;
        }
        function_08a620(&plocal_var_4f8);
        pplocal_var_5a0 = (uint64_t **)stack_array_498;
        if (pcStack_488 != (code *)0x0) {
          (*pcStack_488)(stack_array_498,0);
        }
        pplocal_var_5a0 = (uint64_t **)stack_array_4b8;
        if (pcStack_4a8 != (code *)0x0) {
          (*pcStack_4a8)(stack_array_4b8,0);
        }
        pplocal_var_5a0 = aplocal_var_4d8;
        if (pcStack_4c8 != (code *)0x0) {
          (*pcStack_4c8)(aplocal_var_4d8,0);
        }
        puVar30 = puVar30 + 4;
        uVar17 = uVar17 - 1;
        puVar27 = plocal_var_578;
        puVar7 = plocal_var_578;
        puVar8 = plocal_var_570;
        puVar9 = plocal_var_470;
        puVar10 = plocal_var_468;
      } while (uVar17 != 0);
    }
    for (; puVar1 = plocal_var_570, puVar11 = plocal_var_578, plocal_var_470 = puVar9, plocal_var_468 = puVar10,
        puVar27 != plocal_var_570; puVar27 = puVar27 + 4) {
      plocal_var_578 = puVar7;
      plocal_var_570 = puVar8;
      (**(code **)*puVar27)(puVar27,0);
      puVar7 = plocal_var_578;
      puVar8 = plocal_var_570;
      puVar9 = plocal_var_470;
      puVar10 = plocal_var_468;
      plocal_var_570 = puVar1;
      plocal_var_578 = puVar11;
    }
    if (plocal_var_578 != (uint64_t *)0x0) {
      plocal_var_578 = puVar7;
      plocal_var_570 = puVar8;
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(puVar11);
    }
    plocal_var_538 = &system_data_buffer_ptr;
    if (plocal_var_530 != (int8_t *)0x0) {
      plocal_var_578 = puVar7;
      plocal_var_570 = puVar8;
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    plocal_var_530 = (int8_t *)0x0;
    local_var_520 = local_var_520 & 0xffffffff00000000;
    plocal_var_538 = &system_state_ptr;
    plocal_var_578 = puVar7;
    plocal_var_570 = puVar8;
    for (puVar27 = puVar9; puVar27 != puVar10; puVar27 = puVar27 + 4) {
      (**(code **)*puVar27)(puVar27,0);
    }
    if (puVar9 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(puVar9);
    }
  }
// WARNING: Subroutine does not return
  CoreSystemConfigManager(local_var_38 ^ (uint64_t)stack_array_5d8);
}
uint64_t function_08b250(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int iVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  uint64_t *plocal_var_60;
  uint64_t *plocal_var_58;
  uint64_t local_var_50;
  int32_t local_var_48;
  uint64_t *plocal_var_40;
  uint64_t *plocal_var_38;
  uint64_t local_var_30;
  int32_t local_var_28;
  plocal_var_60 = (uint64_t *)0x0;
  plocal_var_58 = (uint64_t *)0x0;
  local_var_50 = 0;
  local_var_48 = 3;
  function_62cb00(0,&plocal_var_60,&system_data_6680,param_4,0xfffffffffffffffe);
  puVar3 = plocal_var_58;
  puVar2 = plocal_var_60;
  uVar9 = (int64_t)plocal_var_58 - (int64_t)plocal_var_60 >> 5;
  plocal_var_40 = (uint64_t *)0x0;
  plocal_var_38 = (uint64_t *)0x0;
  local_var_30 = 0;
  local_var_28 = 3;
  function_62c8f0(param_1,&plocal_var_40);
  puVar5 = plocal_var_38;
  puVar4 = plocal_var_40;
  uVar7 = (int64_t)plocal_var_38 - (int64_t)plocal_var_40 >> 5;
  puVar1 = puVar4;
  if (0 < (int)uVar7) {
    uVar7 = uVar7 & 0xffffffff;
    puVar8 = plocal_var_40;
    do {
      iVar6 = function_08b250(puVar8);
      uVar9 = (uint64_t)(uint)((int)uVar9 + iVar6);
      puVar8 = puVar8 + 4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  for (; puVar1 != puVar5; puVar1 = puVar1 + 4) {
    (**(code **)*puVar1)(puVar1,0);
  }
  puVar1 = puVar2;
  if (puVar4 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(puVar4);
  }
  for (; puVar1 != puVar3; puVar1 = puVar1 + 4) {
    (**(code **)*puVar1)(puVar1,0);
  }
  if (puVar2 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(puVar2);
  }
  return uVar9 & 0xffffffff;
}
// 函数: void function_08b390(uint64_t param_1,int param_2,uint64_t *param_3)
void function_08b390(uint64_t param_1,int param_2,uint64_t *param_3)
{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint uVar4;
  uint uVar5;
  uVar4 = param_2 + 1;
  puVar3 = (uint64_t *)param_3[2];
  puVar1 = param_3;
  if (puVar3 != (uint64_t *)0x0) {
    do {
      if ((uint64_t)puVar3[4] < param_1) {
        puVar3 = (uint64_t *)*puVar3;
      }
      else {
        puVar1 = puVar3;
        puVar3 = (uint64_t *)puVar3[1];
      }
    } while (puVar3 != (uint64_t *)0x0);
    if ((puVar1 != param_3) && ((uint64_t)puVar1[4] <= param_1)) goto LAB_18008b3e2;
  }
  puVar1 = param_3;
LAB_18008b3e2:
  uVar5 = *(uint *)(puVar1 + 5);
  if (uVar5 < uVar4) {
    *(uint *)(puVar1 + 5) = uVar4;
    uVar5 = uVar4;
  }
  for (lVar2 = *(int64_t *)(param_1 + 0x40); lVar2 != param_1 + 0x38;
      lVar2 = Function_7bfb2422(lVar2)) {
    function_08b390(*(uint64_t *)(lVar2 + 0x20),uVar5,param_3);
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x00018008b561)
// WARNING: Removing unreachable block (ram,0x00018008b564)
// WARNING: Removing unreachable block (ram,0x00018008b578)
// WARNING: Removing unreachable block (ram,0x00018008b580)
// WARNING: Removing unreachable block (ram,0x00018008b592)
// WARNING: Removing unreachable block (ram,0x00018008b595)
// WARNING: Removing unreachable block (ram,0x00018008b5bd)
// WARNING: Removing unreachable block (ram,0x00018008b5c0)
// WARNING: Removing unreachable block (ram,0x00018008b5e2)
// WARNING: Removing unreachable block (ram,0x00018008b5f0)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_08b440(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  void *puVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lStackX_10;
  int64_t lStack_50;
  int64_t lStack_48;
  int64_t lStack_40;
  uint local_var_38;
  lStackX_10 = param_2;
  function_08d710(param_1 + 0xb0,&lStack_50,&lStackX_10,param_4,0xfffffffffffffffe);
  lVar2 = lStackX_10;
  if ((char)lStack_48 == '\0') {
    puVar5 = &system_buffer_ptr;
    if (*(void **)(lStackX_10 + 0x40) != (void *)0x0) {
      puVar5 = *(void **)(lStackX_10 + 0x40);
    }
    uVar4 = SystemOptimizationProcessor(&processed_var_8480_ptr,puVar5);
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  else {
    function_256940(lStackX_10);
    lVar7 = *(int64_t *)(lVar2 + 0x188) - *(int64_t *)(lVar2 + 0x180) >> 3;
    local_var_38 = *(uint *)(lVar2 + 0x198);
    lVar6 = 0;
    lStack_50 = lVar6;
    if (lVar7 != 0) {
      lStack_50 = CoreEngine_MemoryAllocator(system_memory_pool_ptr,lVar7 * 8,local_var_38 & 0xff);
    }
    lStack_40 = lStack_50 + lVar7 * 8;
    lVar7 = *(int64_t *)(lVar2 + 0x180);
    lStack_48 = lStack_50;
    if (lVar7 != *(int64_t *)(lVar2 + 0x188)) {
// WARNING: Subroutine does not return
      memmove(lStack_50,lVar7,*(int64_t *)(lVar2 + 0x188) - lVar7);
    }
    function_08cf60();
    function_08c9f0(param_1,&lStack_50);
    lVar2 = lStack_50;
    iVar3 = (int)(*(int64_t *)(param_1 + 0x118) - *(int64_t *)(param_1 + 0x110) >> 4);
    lVar7 = (int64_t)iVar3;
    if (0 < iVar3) {
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0x110) + lVar6);
        (**(code **)(*plVar1 + 0x20))
                  (plVar1,*(uint64_t *)(*(int64_t *)(param_1 + 0x110) + 8 + lVar6));
        lVar6 = lVar6 + 0x10;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    *(uint64_t *)(param_1 + 0x118) = *(uint64_t *)(param_1 + 0x110);
    if (lVar2 != 0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(lVar2);
    }
    uVar4 = CONCAT71((int7)((uint64_t)*(uint64_t *)(param_1 + 0x110) >> 8),1);
  }
  return uVar4;
}
// WARNING: Removing unreachable block (ram,0x00018008b93c)
// WARNING: Removing unreachable block (ram,0x00018008b977)
// WARNING: Removing unreachable block (ram,0x00018008b980)
// WARNING: Removing unreachable block (ram,0x00018008b9af)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_08b690(int64_t param_1,int64_t *param_2)
void function_08b690(int64_t param_1,int64_t *param_2)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int iVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  bool bVar9;
  uint64_t local_var_b0;
  int64_t lStack_a8;
  uint64_t local_var_a0;
  int32_t local_var_98;
  uint64_t local_var_90;
  int64_t lStack_88;
  int64_t lStack_80;
  int64_t lStack_78;
  int32_t local_var_70;
  uint64_t local_var_68;
  int64_t lStack_60;
  uint64_t local_var_58;
  local_var_58 = 0xfffffffffffffffe;
  lStack_88 = 0;
  lStack_80 = 0;
  lVar6 = 0;
  lStack_78 = 0;
  local_var_70 = 3;
  iVar4 = (int)(param_2[1] - *param_2 >> 3);
  lVar8 = (int64_t)iVar4;
  lStack_60 = lVar8;
  if (iVar4 != 0) {
    lStack_80 = CoreEngine_MemoryAllocator(system_memory_pool_ptr,lVar8 * 8,3);
    lStack_78 = lVar8 * 8 + lStack_80;
  }
  if (lVar8 < 1) {
    lStack_88 = lStack_80;
    local_var_98 = 0x1a;
    local_var_a0 = 0;
    lStack_a8 = 0;
    local_var_b0 = 0;
    function_08cf60(0,&local_var_b0);
    iVar4 = (int)(lStack_a8 >> 3);
    if (0 < iVar4) {
      do {
        function_08c320(param_1,*(uint64_t *)(lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar4);
    }
// WARNING: Subroutine does not return
    SystemParameterHandler(system_message_context,&processed_var_8520_ptr);
  }
  local_var_90 = 0;
  puVar1 = (uint64_t *)(param_1 + 0xb0);
  uVar2 = *(uint64_t *)*param_2;
  lStack_88 = lStack_80;
  local_var_68 = uVar2;
  lVar8 = CoreEngine_MemoryAllocator(system_memory_pool_ptr,0x28,*(int8_t *)(param_1 + 0xd8));
  *(uint64_t *)(lVar8 + 0x20) = uVar2;
  bVar9 = true;
  puVar3 = puVar1;
  puVar5 = *(uint64_t **)(param_1 + 0xc0);
  while (puVar5 != (uint64_t *)0x0) {
    bVar9 = uVar2 < (uint64_t)puVar5[4];
    puVar3 = puVar5;
    if (bVar9) {
      puVar5 = (uint64_t *)puVar5[1];
    }
    else {
      puVar5 = (uint64_t *)*puVar5;
    }
  }
  puVar5 = puVar3;
  if (bVar9) {
    if (puVar3 == *(uint64_t **)(param_1 + 0xb8)) goto LAB_18008b7ea;
    puVar5 = (uint64_t *)Function_e2d50782(puVar3);
  }
  if (*(uint64_t *)(lVar8 + 0x20) <= (uint64_t)puVar5[4]) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(lVar8);
  }
LAB_18008b7ea:
  if ((puVar3 == puVar1) || (lVar7 = 1, *(uint64_t *)(lVar8 + 0x20) < (uint64_t)puVar3[4])) {
    lVar7 = lVar6;
  }
// WARNING: Subroutine does not return
  SystemConfigProcessor(lVar8,puVar3,puVar1,lVar7);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address