/* 函数别名定义: MathCoreCalculator */
#define MathCoreCalculator MathCoreCalculator
#include "SystemDataAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_06_part070.c - 3 个函数
// 函数: void function_3ea0a0(int64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)
void function_3ea0a0(int64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)
{
  int64_t *plVar1;
  int *piVar2;
  int64_t *plVar3;
  int iVar4;
  int iVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  int64_t lVar8;
  void *puVar9;
  uint64_t uVar10;
  int64_t lVar11;
  void *puVar12;
  int8_t stack_array_5d8 [32];
  void **pplocal_var_5b8;
  void *plocal_var_5b0;
  int8_t *plocal_var_5a8;
  int8_t local_var_598;
  int8_t stack_array_597 [7];
  int32_t *plocal_var_590;
  uint64_t *plocal_var_588;
  void *plocal_var_580;
  void *plocal_var_578;
  int32_t local_var_570;
  uint64_t local_var_568;
  void *plocal_var_560;
  void *plocal_var_558;
  int32_t local_var_550;
  uint64_t local_var_548;
  void *plocal_var_540;
  void *plocal_var_538;
  int32_t local_var_530;
  uint64_t local_var_528;
  void *plocal_var_520;
  int64_t lStack_518;
  int32_t local_var_510;
  uint64_t local_var_508;
  uint64_t *plocal_var_500;
  uint64_t *plocal_var_4f8;
  int8_t local_var_4f0;
  uint8_t local_var_4ef;
  uint64_t local_var_4e8;
  uint64_t local_var_4e0;
  uint64_t local_var_4d8;
  void *plocal_var_4d0;
  uint64_t local_var_4c8;
  uint64_t local_var_4c0;
  int8_t stack_array_4b8 [8];
  int64_t *plStack_4b0;
  int8_t stack_array_4a8 [16];
  uint64_t local_var_498;
  uint64_t local_var_490;
  int8_t stack_array_488 [16];
  uint64_t local_var_478;
  uint64_t local_var_470;
  int32_t stack_array_468 [2];
  uint64_t local_var_460;
  uint64_t local_var_458;
  uint64_t local_var_450;
  uint64_t local_var_448;
  uint64_t local_var_440;
  int32_t stack_array_428 [2];
  uint64_t local_var_420;
  uint64_t local_var_418;
  uint64_t local_var_410;
  uint64_t local_var_408;
  uint64_t local_var_400;
  uint64_t local_var_3e8;
  int8_t *plocal_var_3e0;
  int8_t *plocal_var_3d8;
  int8_t stack_array_3d0 [16];
  int8_t stack_array_3c0 [16];
  int8_t stack_array_3b0 [16];
  uint64_t local_var_3a0;
  uint64_t local_var_398;
  uint64_t local_var_390;
  uint64_t local_var_388;
  int32_t stack_array_378 [16];
  int32_t stack_array_338 [16];
  int8_t stack_array_2f8 [64];
  int8_t local_var_2b8;
  uint8_t local_var_2b7;
  uint64_t local_var_2a8;
  uint64_t local_var_2a0;
  void *plocal_var_298;
  int8_t *plocal_var_290;
  int32_t local_var_288;
  int8_t stack_array_280 [264];
  void *plocal_var_178;
  int8_t *plocal_var_170;
  int32_t local_var_168;
  int8_t stack_array_160 [264];
  uint64_t local_var_58;
  local_var_3e8 = 0xfffffffffffffffe;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_5d8;
  puVar6 = *(uint64_t **)(param_2 + 0x20);
  if (puVar6 != (uint64_t *)0x0) {
    if ((void *)*puVar6 == &system_handler3_ptr) {
      LOCK();
      *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
      UNLOCK();
    }
    else {
      (**(code **)((void *)*puVar6 + 0x28))();
    }
  }
  plocal_var_580 = &system_data_buffer_ptr;
  local_var_568 = 0;
  plocal_var_578 = (void *)0x0;
  local_var_570 = 0;
  iVar5 = *(int *)(param_1 + 0x4d0);
  if (iVar5 == 5) {
    lVar11 = 0;
    do {
      lVar8 = lVar11 + 1;
      if (*(char *)(*(int64_t *)(param_1 + 0x4c8) + lVar11) != (&system_pattern1_ptr)[lVar11])
      goto LAB_1803ea194;
      lVar11 = lVar8;
    } while (lVar8 != 6);
    pplocal_var_5b8 = &plocal_var_580;
    function_3ef430(param_1,param_2,param_3,param_4);
  }
  else {
LAB_1803ea194:
    if ((iVar5 == 8) &&
       (iVar4 = strcmp(*(uint64_t *)(param_1 + 0x4c8),&system_string2_ptr), iVar4 == 0)) {
      pplocal_var_5b8 = &plocal_var_580;
      function_3ef940(param_1,param_2,param_3,param_4);
    }
    else if (iVar5 == 7) {
      lVar11 = 0;
      do {
        lVar8 = lVar11 + 1;
        if (*(char *)(*(int64_t *)(param_1 + 0x4c8) + lVar11) != (&system_pattern2_ptr)[lVar11])
        goto LAB_1803ea221;
        lVar11 = lVar8;
      } while (lVar8 != 8);
      pplocal_var_5b8 = &plocal_var_580;
      function_3efe50(param_1,param_2,param_3,param_4);
    }
    else {
LAB_1803ea221:
      if ((iVar5 == 8) &&
         (iVar5 = strcmp(*(uint64_t *)(param_1 + 0x4c8),&system_string1_ptr), iVar5 == 0)) {
        pplocal_var_5b8 = &plocal_var_580;
        function_3f1170(param_1,param_2,param_3,param_4);
      }
      else {
        pplocal_var_5b8 = &plocal_var_580;
        function_3f25b0(param_1,param_2,param_3,param_4);
      }
    }
  }
  plocal_var_3e0 = stack_array_3c0;
  plocal_var_3d8 = stack_array_2f8;
  local_var_598 = 0;
  plocal_var_4d0 = &system_buffer_ptr;
  if (*(void **)(param_4 + 8) != (void *)0x0) {
    plocal_var_4d0 = *(void **)(param_4 + 8);
  }
  plocal_var_500 = (uint64_t *)stack_array_3d0;
  puVar9 = &system_buffer_ptr;
  if (plocal_var_578 != (void *)0x0) {
    puVar9 = plocal_var_578;
  }
  puVar6 = (uint64_t *)function_472360(stack_array_3d0,puVar9);
  plocal_var_588 = (uint64_t *)&local_var_4f0;
  local_var_4e0 = 0;
  local_var_4d8 = 0xf;
  local_var_4f0 = 0;
  plocal_var_4f8 = puVar6;
  MathCoreCalculator0(&local_var_4f0,&processed_var_552_ptr,7);
  plocal_var_590 = (int32_t *)&local_var_4f0;
  function_3f2eb0(stack_array_2f8);
  plocal_var_588 = &local_var_4c8;
  local_var_4c8 = *puVar6;
  local_var_4c0 = puVar6[1];
  *puVar6 = 0;
  puVar6[1] = 0;
  plocal_var_500 = &local_var_3a0;
  local_var_3a0 = CONCAT71(local_var_4ef,local_var_4f0);
  local_var_398 = local_var_4e8;
  local_var_390 = local_var_4e0;
  local_var_388 = local_var_4d8;
  local_var_4e0 = 0;
  local_var_4d8 = 0xf;
  local_var_4f0 = 0;
  plocal_var_5a8 = &local_var_598;
  plocal_var_5b0 = &processed_var_528_ptr;
  pplocal_var_5b8 = &plocal_var_4d0;
  function_3f4950(stack_array_2f8,&local_var_3a0,&local_var_4c8,&processed_var_540_ptr);
  SystemResourceAllocator(&local_var_4f0);
  plVar3 = (int64_t *)puVar6[1];
  if (plVar3 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((int64_t)plVar3 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  }
  uVar7 = function_4724f0(stack_array_3c0,stack_array_2f8);
  plocal_var_590 = (int32_t *)stack_array_4a8;
  puVar9 = &system_buffer_ptr;
  if (*(void **)(param_4 + 8) != (void *)0x0) {
    puVar9 = *(void **)(param_4 + 8);
  }
  local_var_498 = 0;
  local_var_490 = 0xf;
  stack_array_4a8[0] = 0;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (puVar9[lVar11] != '\0');
  MathCoreCalculator0(stack_array_4a8);
  uVar7 = function_3f3ac0(stack_array_338,stack_array_4a8,uVar7);
  stack_array_597[0] = 0;
  plocal_var_590 = (int32_t *)stack_array_3b0;
  plocal_var_588 = (uint64_t *)stack_array_468;
  plocal_var_4f8 = (uint64_t *)stack_array_468;
  stack_array_468[0] = stack_array_338[0];
  plocal_var_500 = &local_var_460;
  local_var_460 = 0;
  local_var_458 = 0;
  local_var_460 = function_3f4cb0(uVar7,0,0);
  local_var_450 = 0;
  local_var_448 = 0;
  local_var_440 = 0;
  function_3f44d0(stack_array_468,stack_array_338);
  uVar7 = function_4724f0(stack_array_3b0,stack_array_468);
  plocal_var_588 = (uint64_t *)stack_array_488;
  local_var_478 = 0;
  local_var_470 = 0xf;
  stack_array_488[0] = 0;
  MathCoreCalculator0(stack_array_488,&processed_var_752_ptr,4);
  pplocal_var_5b8 = (void **)stack_array_597;
  function_3f3bc0(stack_array_378,stack_array_488,uVar7);
  iVar5 = _Mtx_lock(param_1 + 0x520);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  LOCK();
  piVar2 = (int *)(param_1 + 0x574);
  iVar5 = *piVar2;
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (iVar5 == (iVar5 / 10000) * 10000) {
    lVar11 = *(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0);
    while (4 < (uint64_t)(lVar11 / 0x118)) {
      iVar5 = _Mtx_unlock(param_1 + 0x520);
      if (iVar5 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar5);
      }
      if (*(char *)(system_main_module_state + 0x1ed) == '\0') goto LAB_1803ea9e4;
      Sleep(1000);
      iVar5 = _Mtx_lock(param_1 + 0x520);
      if (iVar5 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar5);
      }
      lVar11 = *(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0);
    }
    plocal_var_520 = &system_data_buffer_ptr;
    local_var_508 = 0;
    lStack_518 = 0;
    local_var_510 = 0;
    System_DataHandler(&plocal_var_520,&processed_var_760_ptr,*(int32_t *)(param_1 + 0x57c));
    plocal_var_540 = &system_data_buffer_ptr;
    local_var_528 = 0;
    plocal_var_538 = (void *)0x0;
    local_var_530 = 0;
    plocal_var_560 = &system_data_buffer_ptr;
    local_var_548 = 0;
    plocal_var_558 = (void *)0x0;
    local_var_550 = 0;
    function_3ebc80(param_1,&plocal_var_520,&plocal_var_540,&plocal_var_560);
    plocal_var_298 = &rendering_buffer_2008_ptr;
    plocal_var_290 = stack_array_280;
    stack_array_280[0] = 0;
    local_var_288 = local_var_550;
    puVar9 = &system_buffer_ptr;
    if (plocal_var_558 != (void *)0x0) {
      puVar9 = plocal_var_558;
    }
    strcpy_s(stack_array_280,0x100,puVar9);
    function_3f3880(param_1 + 0x1c0,&plocal_var_298);
    plocal_var_298 = &system_state_ptr;
    plocal_var_178 = &rendering_buffer_2008_ptr;
    plocal_var_170 = stack_array_160;
    stack_array_160[0] = 0;
    local_var_168 = local_var_530;
    puVar9 = &system_buffer_ptr;
    if (plocal_var_538 != (void *)0x0) {
      puVar9 = plocal_var_538;
    }
    strcpy_s(stack_array_160,0x100,puVar9);
    function_3f3880(param_1 + 0x1a0,&plocal_var_178);
    plocal_var_178 = &system_state_ptr;
    *(int *)(param_1 + 0x57c) = *(int *)(param_1 + 0x57c) + 1;
    plocal_var_560 = &system_data_buffer_ptr;
    if (plocal_var_558 != (void *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_558 = (void *)0x0;
    local_var_548 = local_var_548 & 0xffffffff00000000;
    plocal_var_560 = &system_state_ptr;
    plocal_var_540 = &system_data_buffer_ptr;
    if (plocal_var_538 != (void *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_538 = (void *)0x0;
    local_var_528 = local_var_528 & 0xffffffff00000000;
    plocal_var_540 = &system_state_ptr;
    plocal_var_520 = &system_data_buffer_ptr;
    if (lStack_518 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_518 = 0;
    local_var_508 = local_var_508 & 0xffffffff00000000;
    plocal_var_520 = &system_state_ptr;
    iVar5 = 0;
  }
  plocal_var_590 = stack_array_428;
  plocal_var_588 = (uint64_t *)stack_array_428;
  stack_array_428[0] = stack_array_378[0];
  plocal_var_4f8 = &local_var_420;
  local_var_420 = 0;
  local_var_418 = 0;
  local_var_420 = function_3f4cb0(iVar5,0,0);
  local_var_410 = 0;
  local_var_408 = 0;
  local_var_400 = 0;
  function_3f44d0(stack_array_428,stack_array_378);
  function_4724f0(stack_array_4b8,stack_array_428);
  puVar9 = *(void **)(*(int64_t *)(param_1 + 0x1c8) + -0x110);
  puVar12 = &system_buffer_ptr;
  if (puVar9 != (void *)0x0) {
    puVar12 = puVar9;
  }
  local_var_2a8 = 0;
  local_var_2a0 = 0xf;
  local_var_2b8 = 0;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (puVar12[lVar11] != '\0');
  MathCoreCalculator0(&local_var_2b8,puVar12);
  pplocal_var_5b8 = (void **)0x0;
  function_3e8510(*(uint64_t *)(param_1 + 0x188),2,&local_var_2b8,stack_array_4b8);
  if (0xf < local_var_2a0) {
    uVar10 = local_var_2a0 + 1;
    lVar8 = CONCAT71(local_var_2b7,local_var_2b8);
    lVar11 = lVar8;
    if (0xfff < uVar10) {
      uVar10 = local_var_2a0 + 0x28;
      lVar11 = *(int64_t *)(lVar8 + -8);
      if (0x1f < (lVar8 - lVar11) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar11,uVar10);
  }
  local_var_2a8 = 0;
  local_var_2a0 = 0xf;
  local_var_2b8 = 0;
  if (plStack_4b0 != (int64_t *)0x0) {
    LOCK();
    plVar3 = plStack_4b0 + 1;
    lVar11 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_4b0)(plStack_4b0);
      LOCK();
      piVar2 = (int *)((int64_t)plStack_4b0 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plStack_4b0 + 8))(plStack_4b0);
      }
    }
  }
  iVar5 = _Mtx_unlock(param_1 + 0x520);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
LAB_1803ea9e4:
  plocal_var_590 = stack_array_378;
  function_3e8470(stack_array_378);
  plocal_var_590 = stack_array_338;
  function_3e8470(stack_array_338);
  plocal_var_580 = &system_data_buffer_ptr;
  if (plocal_var_578 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_578 = (void *)0x0;
  local_var_568 = local_var_568 & 0xffffffff00000000;
  plocal_var_580 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_5d8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3eaa70(int64_t param_1)
void function_3eaa70(int64_t param_1)
{
  int *piVar1;
  code *pcVar2;
  int64_t lVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t ***pppuVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  int64_t *plVar10;
  uint64_t *puVar11;
  uint uVar12;
  char cVar13;
  int8_t stack_array_178 [32];
  uint64_t local_var_158;
  int64_t lStack_148;
  int8_t *plocal_var_120;
  int8_t stack_array_118 [8];
  int8_t stack_array_110 [8];
  int64_t *plStack_108;
  uint64_t local_var_100;
  int8_t stack_array_f8 [64];
  int8_t local_var_b8;
  uint8_t local_var_b7;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  char acStack_98 [16];
  uint64_t **applocal_var_88 [3];
  uint64_t local_var_70;
  uint64_t local_var_38;
  local_var_100 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  *(int8_t *)(*(int64_t *)(param_1 + 0x4b8) + 0xd0) = 1;
  lVar5 = param_1 + 0x520;
  lStack_148 = lVar5;
  iVar4 = _Mtx_lock(lVar5);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  uVar9 = 0;
  puVar11 = *(uint64_t **)(param_1 + 0x1a8);
  puVar8 = *(uint64_t **)(param_1 + 0x1a0);
  lVar3 = (int64_t)puVar11 - (int64_t)puVar8 >> 0x3f;
  uVar6 = uVar9;
  if (((int64_t)puVar11 - (int64_t)puVar8) / 0x118 + lVar3 != lVar3) {
    do {
      function_3eb9e0(param_1,uVar9 * 0x118 + *(int64_t *)(param_1 + 0x1a0));
      uVar12 = (int)uVar6 + 1;
      puVar11 = *(uint64_t **)(param_1 + 0x1a8);
      puVar8 = *(uint64_t **)(param_1 + 0x1a0);
      uVar9 = (uint64_t)(int)uVar12;
      uVar6 = (uint64_t)uVar12;
    } while (uVar9 < (uint64_t)(((int64_t)puVar11 - (int64_t)puVar8) / 0x118));
  }
  if (puVar8 != puVar11) {
    do {
      (**(code **)*puVar8)(puVar8,0);
      puVar8 = puVar8 + 0x23;
    } while (puVar8 != puVar11);
    puVar8 = *(uint64_t **)(param_1 + 0x1a0);
  }
  *(uint64_t **)(param_1 + 0x1a8) = puVar8;
  iVar4 = _Mtx_unlock(lVar5);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  plocal_var_120 = stack_array_f8;
  function_3f2eb0(stack_array_f8);
  function_4724f0(stack_array_110,stack_array_f8);
  local_var_a8 = 0;
  local_var_a0 = 0xf;
  local_var_b8 = 0;
  MathCoreCalculator0(&local_var_b8,&system_data_e2c8,1);
  local_var_158 = 0;
  function_3e8510(*(uint64_t *)(param_1 + 0x188),1,&local_var_b8,stack_array_110);
  if (0xf < local_var_a0) {
    uVar6 = local_var_a0 + 1;
    lVar3 = CONCAT71(local_var_b7,local_var_b8);
    lVar5 = lVar3;
    if (0xfff < uVar6) {
      uVar6 = local_var_a0 + 0x28;
      lVar5 = *(int64_t *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar5) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar5,uVar6);
  }
  local_var_a8 = 0;
  local_var_a0 = 0xf;
  local_var_b8 = 0;
  if (plStack_108 != (int64_t *)0x0) {
    LOCK();
    plVar10 = plStack_108 + 1;
    lVar5 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_108)(plStack_108);
      LOCK();
      piVar1 = (int *)((int64_t)plStack_108 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_108 + 8))(plStack_108);
      }
    }
  }
  do {
    pcVar2 = *(code **)(**(int64_t **)(param_1 + 0x4b8) + 0x68);
    if (pcVar2 == (code *)&processed_var_9696_ptr) {
      cVar13 = (char)(*(int64_t **)(param_1 + 0x4b8))[2] != '\0';
    }
    else {
      cVar13 = (*pcVar2)();
    }
  } while (cVar13 == '\0');
  function_481dc0(*(uint64_t *)(param_1 + 0x178),acStack_98,stack_array_118);
  if (acStack_98[0] != '\0') {
    pppuVar7 = applocal_var_88;
    if (0xf < local_var_70) {
      pppuVar7 = (uint64_t ***)applocal_var_88[0];
    }
    UtilitiesSystem_PerformanceMonitor(&processed_var_784_ptr,pppuVar7);
  }
  plVar10 = (int64_t *)(param_1 + 0x440);
  if (0xf < *(uint64_t *)(param_1 + 0x458)) {
    plVar10 = (int64_t *)*plVar10;
  }
// WARNING: Subroutine does not return
  SystemParameterHandler(system_message_context,&processed_var_832_ptr,plVar10);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3eaf60(int64_t *param_1)
void function_3eaf60(int64_t *param_1)
{
  int64_t *plVar1;
  int iVar2;
  int64_t *plVar3;
  void *puVar4;
  uint64_t uVar5;
  uint uVar6;
  uint64_t uVar7;
  int8_t stack_array_1c8 [32];
  void *plocal_var_1a8;
  int64_t lStack_1a0;
  int32_t local_var_198;
  uint64_t local_var_190;
  void *plocal_var_188;
  int64_t lStack_180;
  int32_t local_var_178;
  uint64_t local_var_170;
  void *plocal_var_168;
  int64_t lStack_160;
  int32_t local_var_158;
  uint64_t local_var_150;
  void *plocal_var_148;
  void *plocal_var_140;
  int32_t local_var_130;
  int64_t *plStack_128;
  uint64_t local_var_120;
  void *plocal_var_118;
  int8_t *plocal_var_110;
  int32_t local_var_108;
  int8_t stack_array_100 [32];
  void *plocal_var_e0;
  int8_t *plocal_var_d8;
  int32_t local_var_d0;
  int8_t stack_array_c8 [32];
  void *plocal_var_a8;
  int8_t *plocal_var_a0;
  int32_t local_var_98;
  int8_t stack_array_90 [32];
  void *plocal_var_70;
  int8_t *plocal_var_68;
  int32_t local_var_60;
  int8_t stack_array_58 [32];
  uint64_t local_var_38;
  local_var_120 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1c8;
  plStack_128 = param_1 + 7;
  iVar2 = _Mtx_lock();
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  if ((uint64_t)*(uint *)(param_1 + 0x86) == param_1[5]) {
    (**(code **)(*param_1 + 0x10))(param_1);
    plVar3 = (int64_t *)param_1[0x1b];
    if (param_1[0x1c] - (int64_t)plVar3 >> 3 != 0) {
      uVar5 = 0;
      uVar7 = uVar5;
      do {
        CoreEngineDataTransformer(&plocal_var_148,*(int64_t *)((int64_t)plVar3 + uVar7) + 0x2d0);
        plocal_var_168 = &system_data_buffer_ptr;
        local_var_150 = 0;
        lStack_160 = 0;
        local_var_158 = 0;
        puVar4 = &system_buffer_ptr;
        if (plocal_var_140 != (void *)0x0) {
          puVar4 = plocal_var_140;
        }
        System_DataHandler(&plocal_var_168,&processed_var_712_ptr,puVar4);
        plocal_var_188 = &system_data_buffer_ptr;
        local_var_170 = 0;
        lStack_180 = 0;
        local_var_178 = 0;
        puVar4 = &system_buffer_ptr;
        if (plocal_var_140 != (void *)0x0) {
          puVar4 = plocal_var_140;
        }
        System_DataHandler(&plocal_var_188,&processed_var_728_ptr,puVar4);
        plocal_var_1a8 = &system_data_buffer_ptr;
        local_var_190 = 0;
        lStack_1a0 = 0;
        local_var_198 = 0;
        puVar4 = &system_buffer_ptr;
        if (plocal_var_140 != (void *)0x0) {
          puVar4 = plocal_var_140;
        }
        System_DataHandler(&plocal_var_1a8,&rendering_buffer_2288_ptr,puVar4);
        function_62da70(&plocal_var_188);
        function_62da70(&plocal_var_1a8);
        function_62c470(&plocal_var_168);
        plocal_var_118 = &processed_var_672_ptr;
        plocal_var_110 = stack_array_100;
        stack_array_100[0] = 0;
        local_var_108 = 5;
        strcpy_s(stack_array_100,0x20,&system_data_be28);
        UISystem_EventDispatcher(&plocal_var_148,&plocal_var_118);
        plocal_var_118 = &system_state_ptr;
        plocal_var_e0 = &processed_var_672_ptr;
        stack_array_c8[0] = 0;
        local_var_d0 = 4;
        plocal_var_d8 = stack_array_c8;
        strcpy_s(stack_array_c8,0x20,&system_data_af70);
        UISystem_EventDispatcher(&plocal_var_148,&plocal_var_e0);
        plocal_var_e0 = &system_state_ptr;
        plocal_var_a8 = &processed_var_672_ptr;
        plocal_var_a0 = stack_array_90;
        stack_array_90[0] = 0;
        local_var_98 = 4;
        strcpy_s(stack_array_90,0x20,&system_data_d8ac);
        UISystem_EventDispatcher(&plocal_var_148,&plocal_var_a8);
        plocal_var_a8 = &system_state_ptr;
        plocal_var_70 = &processed_var_672_ptr;
        plocal_var_68 = stack_array_58;
        stack_array_58[0] = 0;
        local_var_60 = 4;
        strcpy_s(stack_array_58,0x20,&processed_var_932_ptr);
        UISystem_EventDispatcher(&plocal_var_148,&plocal_var_70);
        plocal_var_70 = &system_state_ptr;
        plocal_var_1a8 = &system_data_buffer_ptr;
        if (lStack_1a0 != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        lStack_1a0 = 0;
        local_var_190 = local_var_190 & 0xffffffff00000000;
        plocal_var_1a8 = &system_state_ptr;
        plocal_var_188 = &system_data_buffer_ptr;
        if (lStack_180 != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        lStack_180 = 0;
        local_var_170 = local_var_170 & 0xffffffff00000000;
        plocal_var_188 = &system_state_ptr;
        plocal_var_168 = &system_data_buffer_ptr;
        if (lStack_160 != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        lStack_160 = 0;
        local_var_150 = local_var_150 & 0xffffffff00000000;
        plocal_var_168 = &system_state_ptr;
        plocal_var_148 = &system_data_buffer_ptr;
        if (plocal_var_140 != (void *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        plocal_var_140 = (void *)0x0;
        local_var_130 = 0;
        plocal_var_148 = &system_state_ptr;
        uVar6 = (int)uVar5 + 1;
        uVar5 = (uint64_t)uVar6;
        uVar7 = uVar7 + 8;
        plVar1 = (int64_t *)param_1[0x1c];
        plVar3 = (int64_t *)param_1[0x1b];
      } while ((uint64_t)(int64_t)(int)uVar6 <
               (uint64_t)((int64_t)plVar1 - (int64_t)plVar3 >> 3));
      if (plVar3 != plVar1) {
        do {
          if ((int64_t *)*plVar3 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar3 + 0x38))();
          }
          plVar3 = plVar3 + 1;
        } while (plVar3 != plVar1);
        plVar3 = (int64_t *)param_1[0x1b];
      }
      param_1[0x1c] = (int64_t)plVar3;
    }
  }
  iVar2 = _Mtx_unlock(plStack_128);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_1c8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address