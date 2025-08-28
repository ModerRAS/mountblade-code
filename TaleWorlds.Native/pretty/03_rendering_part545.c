#include "SystemDataAdvancedValidator_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part545.c - 1 个函数
// 函数: void function_567fd0(int64_t *param_1,uint64_t *param_2,uint64_t *param_3,uint64_t *param_4,
void function_567fd0(int64_t *param_1,uint64_t *param_2,uint64_t *param_3,uint64_t *param_4,
                  uint64_t param_5)
{
  double dVar1;
  int64_t *plVar2;
  int32_t uVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t uVar6;
  void *puVar7;
  uint uVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t uVar11;
  void *puVar12;
  uint64_t uVar13;
  void *puVar14;
  int64_t lVar15;
  int8_t stack_array_618 [32];
  void *plocal_var_5f8;
  void *plocal_var_5f0;
  void *plocal_var_5e8;
  int64_t lStack_5d8;
  float *pfStack_5d0;
  int64_t lStack_5c8;
  int16_t local_var_5c0;
  int8_t local_var_5be;
  int iStack_5b8;
  uint local_var_5b4;
  uint local_var_5b0;
  uint local_var_5ac;
  uint local_var_5a8;
  uint local_var_5a4;
  uint local_var_5a0;
  uint local_var_59c;
  uint64_t local_var_598;
  int64_t alStack_590 [2];
  void *plocal_var_580;
  void *plocal_var_578;
  uint64_t local_var_570;
  int16_t local_var_568;
  int8_t local_var_566;
  uint64_t *plocal_var_560;
  void *plocal_var_558;
  void *plocal_var_550;
  uint local_var_548;
  int32_t local_var_540;
  int32_t local_var_538;
  int32_t local_var_534;
  int32_t local_var_530;
  int32_t local_var_52c;
  void *plocal_var_528;
  void *plocal_var_520;
  uint64_t *plocal_var_518;
  uint64_t *plocal_var_510;
  void **pplocal_var_508;
  void *plocal_var_4f8;
  void *plocal_var_4f0;
  int iStack_4e8;
  int32_t local_var_4e0;
  void *plocal_var_4d8;
  int8_t local_var_4d0;
  int8_t stack_array_4c8 [16];
  void *plocal_var_4b8;
  char cStack_4b0;
  void *plocal_var_4a8;
  int64_t lStack_4a0;
  int32_t local_var_490;
  uint64_t local_var_488;
  uint64_t *plocal_var_480;
  uint64_t *plocal_var_478;
  uint64_t *plocal_var_470;
  int8_t stack_array_468 [1024];
  uint64_t local_var_68;
  local_var_488 = 0xfffffffffffffffe;
  local_var_68 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_618;
  local_var_598 = param_5;
  lStack_5d8 = 0;
  lStack_5c8 = 0;
  local_var_5c0 = 0;
  local_var_5be = 3;
  pfStack_5d0 = (float *)0x0;
  puVar12 = (void *)0x4;
  plocal_var_560 = param_2;
  plocal_var_518 = param_3;
  plocal_var_510 = param_4;
  pplocal_var_508 = (void **)param_1;
  plocal_var_480 = param_2;
  plocal_var_478 = param_3;
  plocal_var_470 = param_4;
  System_BufferManager(&lStack_5d8,4);
  lVar10 = param_1[3];
  if ((uint64_t)((lStack_5c8 - (int64_t)pfStack_5d0) + lStack_5d8) < 5) {
    System_BufferManager(&lStack_5d8,(int64_t)pfStack_5d0 + (4 - lStack_5d8));
  }
  lVar9 = lStack_5d8;
  *pfStack_5d0 = (float)(int)lVar10;
  pfStack_5d0 = pfStack_5d0 + 1;
  plVar2 = (int64_t *)*param_1;
  if (plVar2 != param_1) {
    lVar10 = plVar2[2];
    uVar6 = (int64_t)
            (int)((uint)((*(uint *)(lVar10 + 0x5c8) & 7) != 0) +
                 ((int)*(uint *)(lVar10 + 0x5c8) >> 3)) + 0xc;
    if ((uint64_t)((lStack_5c8 - (int64_t)pfStack_5d0) + lStack_5d8) <= uVar6) {
      System_BufferManager(&lStack_5d8,(int64_t)pfStack_5d0 + (uVar6 - lStack_5d8));
      lVar10 = plVar2[2];
    }
    uVar3 = *(int32_t *)(lVar10 + 0x5c8);
    if ((uint64_t)((lStack_5c8 - (int64_t)pfStack_5d0) + lStack_5d8) < 5) {
      System_BufferManager(&lStack_5d8,(int64_t)pfStack_5d0 + (4 - lStack_5d8));
    }
    *pfStack_5d0 = (float)uVar3;
    pfStack_5d0 = pfStack_5d0 + 1;
    uVar3 = *(int32_t *)(plVar2[2] + 0x5a0);
    if ((uint64_t)((lStack_5c8 - (int64_t)pfStack_5d0) + lStack_5d8) < 5) {
      System_BufferManager(&lStack_5d8,(int64_t)pfStack_5d0 + (4 - lStack_5d8));
    }
    *pfStack_5d0 = (float)uVar3;
    pfStack_5d0 = pfStack_5d0 + 1;
    lVar10 = plVar2[2];
    dVar1 = *(double *)(lVar10 + 0x5a8);
    if ((uint64_t)((lStack_5c8 - (int64_t)pfStack_5d0) + lStack_5d8) < 5) {
      System_BufferManager(&lStack_5d8,(int64_t)pfStack_5d0 + (4 - lStack_5d8));
      lVar10 = plVar2[2];
    }
    *pfStack_5d0 = (float)dVar1;
    pfStack_5d0 = pfStack_5d0 + 1;
    uVar6 = (uint64_t)
            (int)((uint)((*(uint *)(lVar10 + 0x5c8) & 7) != 0) +
                 ((int)*(uint *)(lVar10 + 0x5c8) >> 3));
    uVar13 = *(uint64_t *)(lVar10 + 0x598);
    if ((uint64_t)((lStack_5c8 - (int64_t)pfStack_5d0) + lStack_5d8) <= uVar6) {
      System_BufferManager(&lStack_5d8,(int64_t)pfStack_5d0 + (uVar6 - lStack_5d8));
    }
// WARNING: Subroutine does not return
    memcpy(pfStack_5d0,uVar13,uVar6);
  }
  plocal_var_528 = (void *)((int64_t)pfStack_5d0 - lStack_5d8);
  if (lStack_5d8 == 0) {
    plocal_var_528 = (void *)0x0;
  }
  plocal_var_580 = (void *)0x0;
  plocal_var_578 = (void *)0x0;
  local_var_570 = 0;
  local_var_568 = 0;
  local_var_566 = 3;
  if (plocal_var_528 + ((uint64_t)plocal_var_528 >> 2) != (void *)0x0) {
    System_BufferManager(&plocal_var_580);
  }
  puVar14 = plocal_var_580;
  plocal_var_578 = plocal_var_580;
  pfStack_5d0 = (float *)lVar9;
  plocal_var_4d8 = &memory_allocator_3856_ptr;
  local_var_4d0 = 1;
  plocal_var_5f8 = plocal_var_580;
  plocal_var_5f0 = plocal_var_528;
  plocal_var_520 = plocal_var_528;
  function_21f4e0(&plocal_var_4d8,stack_array_4c8,lVar9);
  if (cStack_4b0 != '\0') goto LAB_1805689b3;
  plocal_var_520 = plocal_var_4b8;
  function_0baa40(&plocal_var_558);
  if (0 < *(int *)(param_2 + 2)) {
    CoreEngineDataBufferProcessor(&plocal_var_558,local_var_548 + *(int *)(param_2 + 2));
// WARNING: Subroutine does not return
    memcpy(plocal_var_550 + local_var_548,param_2[1],(int64_t)(*(int *)(param_2 + 2) + 1));
  }
  uVar8 = local_var_548 + 4;
  CoreEngineDataBufferProcessor(&plocal_var_558,uVar8);
  *(int32_t *)(plocal_var_550 + local_var_548) = 0x6365722e;
  *(int8_t *)((int64_t)(plocal_var_550 + local_var_548) + 4) = 0;
  alStack_590[0] = -1;
  puVar7 = &system_buffer_ptr;
  if (plocal_var_550 != (void *)0x0) {
    puVar7 = plocal_var_550;
  }
  local_var_548 = uVar8;
  function_63ba00(alStack_590,puVar7,10,0x108);
  lVar10 = alStack_590[0];
  uVar6 = local_var_598;
  if (alStack_590[0] == -1) {
    plocal_var_5f0 = &system_buffer_ptr;
    if ((void *)param_2[1] != (void *)0x0) {
      plocal_var_5f0 = (void *)param_2[1];
    }
    plocal_var_5f8 = &processed_var_8632_ptr;
    SystemConfigurationManager(system_message_context,0,0x10000000000,8);
    puVar12 = &system_buffer_ptr;
    if ((void *)param_2[1] != (void *)0x0) {
      puVar12 = (void *)param_2[1];
    }
    function_627160(&processed_var_8776_ptr,puVar12);
  }
  else {
    local_var_538 = *(int32_t *)(plocal_var_518 + 2);
    local_var_534 = *(int32_t *)(local_var_598 + 0x98d9a0);
    local_var_530 = *(int32_t *)(plocal_var_510 + 2);
    SystemCore_CacheManager(&plocal_var_4f8,local_var_598 + 0x87bbec);
    iStack_5b8 = iStack_4e8;
    local_var_52c = *(int32_t *)(uVar6 + 0x87bca4);
    uVar6 = 4;
    lVar15 = 0;
    do {
      local_var_5b4 = 0;
      uVar11 = 0xffffffff;
      if (uVar6 < 0xffffffff) {
        uVar11 = uVar6 & 0xffffffff;
      }
      plocal_var_5f8 = (void *)0x0;
      WriteFile(lVar10,(int64_t)&local_var_538 + lVar15,uVar11,&local_var_5b4);
      puVar14 = plocal_var_580;
      lVar9 = lStack_5d8;
      lVar15 = lVar15 + (uint64_t)local_var_5b4;
      uVar6 = uVar6 - local_var_5b4;
    } while (uVar6 != 0);
    if (lVar15 == 4) {
      iVar4 = *(int *)(plocal_var_518 + 2);
      puVar7 = &system_buffer_ptr;
      if ((void *)plocal_var_518[1] != (void *)0x0) {
        puVar7 = (void *)plocal_var_518[1];
      }
      lVar15 = function_63bd10(alStack_590,puVar7,(int64_t)(iVar4 + 1));
      if (lVar15 != iVar4 + 1) goto LAB_180568833;
      uVar6 = 4;
      lVar15 = 0;
      do {
        local_var_5b0 = 0;
        uVar11 = 0xffffffff;
        if (uVar6 < 0xffffffff) {
          uVar11 = uVar6 & 0xffffffff;
        }
        plocal_var_5f8 = (void *)0x0;
        WriteFile(lVar10,(int64_t)&local_var_534 + lVar15,uVar11,&local_var_5b0);
        puVar14 = plocal_var_580;
        lVar9 = lStack_5d8;
        lVar15 = lVar15 + (uint64_t)local_var_5b0;
        uVar6 = uVar6 - local_var_5b0;
      } while (uVar6 != 0);
      if (lVar15 != 4) goto LAB_180568833;
      lVar15 = (int64_t)(*(int *)(local_var_598 + 0x98d9a0) + 1);
      puVar7 = &system_buffer_ptr;
      if (*(void **)(local_var_598 + 0x98d998) != (void *)0x0) {
        puVar7 = *(void **)(local_var_598 + 0x98d998);
      }
      lVar5 = function_63bd10(alStack_590,puVar7,lVar15);
      if (lVar5 != lVar15) goto LAB_180568833;
      uVar6 = 4;
      lVar15 = 0;
      do {
        local_var_5ac = 0;
        uVar11 = 0xffffffff;
        if (uVar6 < 0xffffffff) {
          uVar11 = uVar6 & 0xffffffff;
        }
        plocal_var_5f8 = (void *)0x0;
        WriteFile(lVar10,(int64_t)&local_var_530 + lVar15,uVar11,&local_var_5ac);
        puVar14 = plocal_var_580;
        lVar9 = lStack_5d8;
        lVar15 = lVar15 + (uint64_t)local_var_5ac;
        uVar6 = uVar6 - local_var_5ac;
      } while (uVar6 != 0);
      if (lVar15 != 4) goto LAB_180568833;
      iVar4 = *(int *)(plocal_var_510 + 2);
      puVar7 = &system_buffer_ptr;
      if ((void *)plocal_var_510[1] != (void *)0x0) {
        puVar7 = (void *)plocal_var_510[1];
      }
      lVar15 = function_63bd10(alStack_590,puVar7,(int64_t)(iVar4 + 1));
      if (lVar15 != iVar4 + 1) goto LAB_180568833;
      uVar6 = 4;
      lVar15 = 0;
      do {
        local_var_5a8 = 0;
        uVar11 = 0xffffffff;
        if (uVar6 < 0xffffffff) {
          uVar11 = uVar6 & 0xffffffff;
        }
        plocal_var_5f8 = (void *)0x0;
        WriteFile(lVar10,(int64_t)&iStack_5b8 + lVar15,uVar11,&local_var_5a8);
        puVar14 = plocal_var_580;
        lVar9 = lStack_5d8;
        lVar15 = lVar15 + (uint64_t)local_var_5a8;
        uVar6 = uVar6 - local_var_5a8;
      } while (uVar6 != 0);
      if (lVar15 != 4) goto LAB_180568833;
      puVar7 = &system_buffer_ptr;
      if (plocal_var_4f0 != (void *)0x0) {
        puVar7 = plocal_var_4f0;
      }
      lVar15 = function_63bd10(alStack_590,puVar7,(int64_t)(iStack_5b8 + 1));
      if (lVar15 != iStack_5b8 + 1) goto LAB_180568833;
      uVar6 = 4;
      lVar15 = 0;
      do {
        local_var_5a4 = 0;
        uVar11 = 0xffffffff;
        if (uVar6 < 0xffffffff) {
          uVar11 = uVar6 & 0xffffffff;
        }
        plocal_var_5f8 = (void *)0x0;
        WriteFile(lVar10,(int64_t)&local_var_52c + lVar15,uVar11,&local_var_5a4);
        lVar15 = lVar15 + (uint64_t)local_var_5a4;
        uVar6 = uVar6 - local_var_5a4;
      } while (uVar6 != 0);
      lVar9 = lStack_5d8;
      puVar14 = plocal_var_580;
      if (lVar15 != 4) goto LAB_180568833;
      uVar6 = 4;
      lVar15 = 0;
      do {
        local_var_5a0 = 0;
        uVar11 = 0xffffffff;
        if (uVar6 < 0xffffffff) {
          uVar11 = uVar6 & 0xffffffff;
        }
        plocal_var_5f8 = (void *)0x0;
        WriteFile(lVar10,(int64_t)&plocal_var_528 + lVar15,uVar11,&local_var_5a0);
        lVar15 = lVar15 + (uint64_t)local_var_5a0;
        uVar6 = uVar6 - local_var_5a0;
      } while (uVar6 != 0);
      lVar9 = lStack_5d8;
      puVar14 = plocal_var_580;
      if (lVar15 != 4) goto LAB_180568833;
      lVar15 = 0;
      do {
        local_var_59c = 0;
        uVar6 = 0xffffffff;
        if (puVar12 < (void *)0xffffffff) {
          uVar6 = (uint64_t)puVar12 & 0xffffffff;
        }
        plocal_var_5f8 = (void *)0x0;
        WriteFile(lVar10,(int64_t)&plocal_var_520 + lVar15,uVar6,&local_var_59c);
        puVar14 = plocal_var_580;
        lVar15 = lVar15 + (uint64_t)local_var_59c;
        puVar12 = puVar12 + -(uint64_t)local_var_59c;
      } while (puVar12 != (void *)0x0);
      lVar9 = lStack_5d8;
      if (lVar15 != 4) goto LAB_180568833;
      iVar4 = (int)plocal_var_520;
      uVar6 = (uint64_t)plocal_var_520 & 0xffffffff;
      lVar15 = 0;
      if ((int)plocal_var_520 != 0) {
        lVar15 = 0;
        do {
          local_var_598 = local_var_598 & 0xffffffff00000000;
          uVar11 = 0xffffffff;
          if (uVar6 < 0xffffffff) {
            uVar11 = uVar6 & 0xffffffff;
          }
          plocal_var_5f8 = puVar12;
          WriteFile(lVar10,puVar14 + lVar15,uVar11,&local_var_598);
          lVar15 = lVar15 + (local_var_598 & 0xffffffff);
          uVar6 = uVar6 - (local_var_598 & 0xffffffff);
        } while (uVar6 != 0);
      }
      lVar9 = lStack_5d8;
      if ((int)lVar15 != iVar4) {
        uVar3 = GetLastError();
        plocal_var_5f0 = (void *)CONCAT44(plocal_var_5f0._4_4_,0x400);
        plocal_var_5f8 = stack_array_468;
        plocal_var_5e8 = puVar12;
        iVar4 = FormatMessageA(0x1000,0,uVar3,0x400);
        if (iVar4 == 0) {
          uVar3 = GetLastError();
          SystemDataInitializer(&memory_allocator_3400_ptr,uVar3);
        }
        plocal_var_5f0 = &system_buffer_ptr;
        if ((void *)plocal_var_560[1] != (void *)0x0) {
          plocal_var_5f0 = (void *)plocal_var_560[1];
        }
        goto LAB_1805688a3;
      }
      LOCK();
      SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
      UNLOCK();
      CloseHandle(alStack_590[0]);
      lVar10 = -1;
      alStack_590[0] = -1;
      lVar9 = lStack_5d8;
      puVar14 = plocal_var_580;
      param_2 = plocal_var_560;
    }
    else {
LAB_180568833:
      uVar3 = GetLastError();
      plocal_var_5e8 = (void *)0x0;
      plocal_var_5f0 = (void *)CONCAT44(plocal_var_5f0._4_4_,0x400);
      plocal_var_5f8 = stack_array_468;
      iVar4 = FormatMessageA(0x1000,0,uVar3,0x400);
      if (iVar4 == 0) {
        uVar3 = GetLastError();
        SystemDataInitializer(&memory_allocator_3400_ptr,uVar3);
      }
      plocal_var_5f0 = &system_buffer_ptr;
      if ((void *)plocal_var_560[1] != (void *)0x0) {
        plocal_var_5f0 = (void *)plocal_var_560[1];
      }
LAB_1805688a3:
      param_2 = plocal_var_560;
      plocal_var_5e8 = stack_array_468;
      plocal_var_5f8 = &processed_var_8672_ptr;
      SystemConfigurationManager(system_message_context,0,0x10000000000,3);
    }
    plocal_var_4f8 = &system_data_buffer_ptr;
    if (plocal_var_4f0 != (void *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    local_var_4e0 = 0;
    plocal_var_4f8 = &system_state_ptr;
    plocal_var_4f0 = (void *)0x0;
  }
  if (lVar10 != -1) {
    LOCK();
    SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
    UNLOCK();
    CloseHandle(alStack_590[0]);
    alStack_590[0] = -1;
    lVar9 = lStack_5d8;
    puVar14 = plocal_var_580;
  }
  plocal_var_558 = &system_data_buffer_ptr;
  if (plocal_var_550 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  local_var_540 = 0;
  plocal_var_558 = &system_state_ptr;
  plocal_var_550 = (void *)0x0;
LAB_1805689b3:
  uVar13 = 0;
  function_569560(pplocal_var_508);
  pplocal_var_508 = &plocal_var_4a8;
  plocal_var_4a8 = &system_data_buffer_ptr;
  if (lStack_4a0 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  local_var_490 = 0;
  plocal_var_4a8 = &system_state_ptr;
  lStack_4a0 = uVar13;
  if (((char)local_var_568 == '\0') && (puVar14 != (void *)0x0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar14);
  }
  if (((char)local_var_5c0 == '\0') && (lVar9 != 0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar9);
  }
  *param_2 = &system_data_buffer_ptr;
  if (param_2[1] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_2[1] = 0;
  *(int32_t *)(param_2 + 3) = 0;
  *param_2 = &system_state_ptr;
  *plocal_var_518 = &system_data_buffer_ptr;
  if (plocal_var_518[1] == 0) {
    plocal_var_518[1] = 0;
    *(int32_t *)(plocal_var_518 + 3) = 0;
    *plocal_var_518 = &system_state_ptr;
    *plocal_var_510 = &system_data_buffer_ptr;
    if (plocal_var_510[1] == 0) {
      plocal_var_510[1] = 0;
      *(int32_t *)(plocal_var_510 + 3) = 0;
      *plocal_var_510 = &system_state_ptr;
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_68 ^ (uint64_t)stack_array_618);
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address