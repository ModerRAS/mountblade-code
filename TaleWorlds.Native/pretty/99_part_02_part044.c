#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_02_part044.c - 6 个函数
// 函数: void function_1b5480(int64_t param_1)
void function_1b5480(int64_t param_1)
{
  uint uVar1;
  int iVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  int8_t stack_array_618 [32];
  int32_t local_var_5f8;
  int32_t local_var_5f0;
  int32_t local_var_5e8;
  int32_t local_var_5e0;
  uint local_var_5d8;
  uint64_t local_var_5d0;
  int8_t local_var_5c8;
  int32_t local_var_5c0;
  int64_t **pplStack_5b8;
  int64_t **pplStack_5b0;
  int64_t *plStack_5a8;
  int64_t *plStack_5a0;
  int64_t *plStack_598;
  int64_t **pplStack_590;
  int64_t **pplStack_588;
  int64_t *plStack_580;
  int64_t *plStack_578;
  int64_t *plStack_570;
  int64_t *plStack_568;
  int64_t *plStack_560;
  int64_t *plStack_558;
  int64_t *plStack_550;
  int64_t *plStack_548;
  int64_t *plStack_540;
  int64_t *plStack_538;
  void **pplocal_var_530;
  uint64_t local_var_528;
  int64_t *plStack_518;
  int8_t *plocal_var_510;
  int32_t local_var_508;
  int8_t stack_array_500 [128];
  int32_t local_var_480;
  uint64_t local_var_478;
  int *piStack_470;
  uint64_t local_var_468;
  int64_t lStack_460;
  int64_t *plStack_438;
  int8_t *plocal_var_430;
  int32_t local_var_428;
  int8_t stack_array_420 [128];
  int32_t local_var_3a0;
  uint64_t local_var_398;
  uint *plocal_var_390;
  uint64_t local_var_388;
  int64_t lStack_380;
  void *plocal_var_358;
  int8_t *plocal_var_350;
  int32_t local_var_348;
  int8_t stack_array_340 [128];
  int32_t local_var_2c0;
  uint64_t local_var_2b8;
  uint *plocal_var_2b0;
  uint64_t local_var_2a8;
  int64_t lStack_2a0;
  void *plocal_var_278;
  int8_t *plocal_var_270;
  int32_t local_var_268;
  int8_t stack_array_260 [72];
  void *plocal_var_218;
  int8_t *plocal_var_210;
  int32_t local_var_208;
  int8_t stack_array_200 [72];
  void *plocal_var_1b8;
  int8_t *plocal_var_1b0;
  int32_t local_var_1a8;
  int8_t stack_array_1a0 [72];
  void *plocal_var_158;
  int8_t *plocal_var_150;
  int32_t local_var_148;
  int8_t stack_array_140 [72];
  void *plocal_var_f8;
  int8_t *plocal_var_f0;
  int32_t local_var_e8;
  int8_t stack_array_e0 [72];
  void *plocal_var_98;
  int8_t *plocal_var_90;
  int32_t local_var_88;
  int8_t stack_array_80 [72];
  uint64_t local_var_38;
  local_var_528 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_618;
  piVar7 = (int *)((int64_t)*(int *)(param_1 + 0xdc0) * 0x128 + param_1 + 0xb70);
  iVar6 = *piVar7;
  iVar2 = 0;
  if (0 < iVar6) {
    if ((*(int64_t *)(param_1 + 0xdc8) == 0) ||
       (*(uint *)(*(int64_t *)(param_1 + 0xdc8) + 0x3c) < (uint)(iVar6 * 3))) {
      if (*piVar7 != 0) {
        iVar2 = (*piVar7 - 1U >> 0xd) + 1;
      }
      plocal_var_278 = &memory_allocator_3480_ptr;
      plocal_var_270 = stack_array_260;
      stack_array_260[0] = 0;
      local_var_268 = 0x12;
      strcpy_s(stack_array_260,0x40,&processed_var_5552_ptr);
      local_var_5c0 = 0x1000;
      local_var_5c8 = 0;
      local_var_5d0 = 0;
      local_var_5e0 = 0x10;
      local_var_5e8 = 0x21;
      local_var_5f0 = 3;
      local_var_5f8 = 0x21;
      local_var_5d8 = iVar2 * 0x6000;
      puVar3 = (uint64_t *)SystemCore_ConfigManager();
      uVar4 = *puVar3;
      *puVar3 = 0;
      pplStack_590 = *(int64_t ***)(param_1 + 0xdc8);
      *(uint64_t *)(param_1 + 0xdc8) = uVar4;
      if (pplStack_590 != (int64_t **)0x0) {
        (**(code **)((int64_t)*pplStack_590 + 0x38))();
      }
      if (pplStack_588 != (int64_t **)0x0) {
        (*(code *)(*pplStack_588)[7])();
      }
      plocal_var_278 = &system_state_ptr;
    }
    plStack_518 = (int64_t *)&memory_allocator_3432_ptr;
    plocal_var_510 = stack_array_500;
    local_var_508 = 0;
    stack_array_500[0] = 0;
    local_var_480 = 0xc;
    local_var_478 = *(uint64_t *)(param_1 + 0xdc8);
    local_var_468 = 0x80000;
    piStack_470 = piVar7 + 2;
    lStack_460 = (int64_t)iVar6 << 6;
    pplStack_590 = &plStack_518;
    uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
    plVar5 = (int64_t *)SystemCore_StreamController(uVar4,&plStack_518);
    pplStack_5b8 = (int64_t **)plVar5;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    uVar4 = system_context_ptr;
    pplStack_588 = &plStack_5a8;
    plStack_5a8 = plVar5;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    SystemPerformance_Monitor(uVar4,&plStack_5a8);
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    plStack_518 = (int64_t *)&system_state_ptr;
    pplStack_5b8 = &plStack_518;
  }
  puVar8 = (uint *)((int64_t)*(int *)(param_1 + 0x910) * 0x488 + param_1);
  uVar1 = *puVar8;
  iVar6 = 0;
  if (0 < (int)uVar1) {
    if ((*(int64_t *)(param_1 + 0xe08) == 0) ||
       (*(uint *)(*(int64_t *)(param_1 + 0xe08) + 0x3c) < uVar1)) {
      iVar2 = iVar6;
      if (*puVar8 != 0) {
        iVar2 = (*puVar8 - 1 >> 0xb) + 1;
      }
      plocal_var_218 = &memory_allocator_3480_ptr;
      plocal_var_210 = stack_array_200;
      stack_array_200[0] = 0;
      local_var_208 = 0x12;
      strcpy_s(stack_array_200,0x40,&processed_var_5552_ptr);
      local_var_5c0 = 0x1000;
      local_var_5c8 = 0;
      local_var_5d0 = 0;
      local_var_5e0 = 8;
      local_var_5e8 = 0x32;
      local_var_5f0 = 3;
      local_var_5f8 = 0x21;
      local_var_5d8 = iVar2 << 0xb;
      puVar3 = (uint64_t *)SystemCore_ConfigManager();
      uVar4 = *puVar3;
      *puVar3 = 0;
      plStack_580 = *(int64_t **)(param_1 + 0xe08);
      *(uint64_t *)(param_1 + 0xe08) = uVar4;
      if (plStack_580 != (int64_t *)0x0) {
        (**(code **)(*plStack_580 + 0x38))();
      }
      if (plStack_578 != (int64_t *)0x0) {
        (**(code **)(*plStack_578 + 0x38))();
      }
      plocal_var_218 = &system_state_ptr;
    }
    pplStack_5b8 = &plStack_438;
    plStack_438 = (int64_t *)&memory_allocator_3432_ptr;
    plocal_var_430 = stack_array_420;
    local_var_428 = 0;
    stack_array_420[0] = 0;
    local_var_3a0 = 0xb;
    local_var_398 = *(uint64_t *)(param_1 + 0xe08);
    local_var_388 = 0x4000;
    plocal_var_390 = puVar8 + 2;
    lStack_380 = (int64_t)(int)uVar1 << 3;
    uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
    plVar5 = (int64_t *)SystemCore_StreamController(uVar4,&plStack_438);
    pplStack_5b0 = (int64_t **)plVar5;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    uVar4 = system_context_ptr;
    pplStack_5b8 = &plStack_5a0;
    plStack_5a0 = plVar5;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    SystemPerformance_Monitor(uVar4,&plStack_5a0);
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    pplStack_5b0 = &plStack_438;
    plStack_438 = (int64_t *)&system_state_ptr;
  }
  if (0 < *(int *)(param_1 + 0xe20)) {
    uVar1 = *(int *)(param_1 + 0xe20) * 3;
    if ((*(int64_t *)(param_1 + 0xde8) == 0) ||
       (*(uint *)(*(int64_t *)(param_1 + 0xde8) + 0x3c) < uVar1)) {
      plocal_var_1b8 = &memory_allocator_3480_ptr;
      plocal_var_1b0 = stack_array_1a0;
      stack_array_1a0[0] = 0;
      local_var_1a8 = 0x12;
      strcpy_s(stack_array_1a0,0x40,&processed_var_5528_ptr);
      local_var_5c0 = 0x400000;
      local_var_5c8 = 0;
      local_var_5d0 = 0;
      local_var_5e0 = 4;
      local_var_5e8 = 0x1f;
      local_var_5f0 = 0;
      local_var_5f8 = 5;
      local_var_5d8 = uVar1;
      puVar3 = (uint64_t *)SystemCore_ConfigManager();
      uVar4 = *puVar3;
      *puVar3 = 0;
      plStack_570 = *(int64_t **)(param_1 + 0xde8);
      *(uint64_t *)(param_1 + 0xde8) = uVar4;
      if (plStack_570 != (int64_t *)0x0) {
        (**(code **)(*plStack_570 + 0x38))();
      }
      if (plStack_568 != (int64_t *)0x0) {
        (**(code **)(*plStack_568 + 0x38))();
      }
      plocal_var_1b8 = &system_state_ptr;
    }
    if ((*(int64_t *)(param_1 + 0xdf8) == 0) ||
       (*(uint *)(*(int64_t *)(param_1 + 0xdf8) + 0x3c) < *(uint *)(param_1 + 0xe20))) {
      uVar1 = *(uint *)(param_1 + 0xe20);
      plocal_var_158 = &memory_allocator_3480_ptr;
      plocal_var_150 = stack_array_140;
      stack_array_140[0] = 0;
      local_var_148 = 0x15;
      strcpy_s(stack_array_140,0x40,&processed_var_5600_ptr);
      local_var_5c0 = 0x400000;
      local_var_5c8 = 0;
      local_var_5d0 = 0;
      local_var_5e0 = 4;
      local_var_5e8 = 5;
      local_var_5f0 = 0;
      local_var_5f8 = 5;
      local_var_5d8 = uVar1;
      puVar3 = (uint64_t *)SystemCore_ConfigManager();
      uVar4 = *puVar3;
      *puVar3 = 0;
      plStack_560 = *(int64_t **)(param_1 + 0xdf8);
      *(uint64_t *)(param_1 + 0xdf8) = uVar4;
      if (plStack_560 != (int64_t *)0x0) {
        (**(code **)(*plStack_560 + 0x38))();
      }
      if (plStack_558 != (int64_t *)0x0) {
        (**(code **)(*plStack_558 + 0x38))();
      }
      plocal_var_158 = &system_state_ptr;
    }
    if ((*(int64_t *)(param_1 + 0xe00) == 0) ||
       (*(uint *)(*(int64_t *)(param_1 + 0xe00) + 0x3c) < *(uint *)(param_1 + 0xe20))) {
      uVar1 = *(uint *)(param_1 + 0xe20);
      plocal_var_f8 = &memory_allocator_3480_ptr;
      plocal_var_f0 = stack_array_e0;
      stack_array_e0[0] = 0;
      local_var_e8 = 0x16;
      strcpy_s(stack_array_e0,0x40,&processed_var_5576_ptr);
      local_var_5c0 = 0x400000;
      local_var_5c8 = 0;
      local_var_5d0 = 0;
      local_var_5e0 = 4;
      local_var_5e8 = 5;
      local_var_5f0 = 0;
      local_var_5f8 = 5;
      local_var_5d8 = uVar1;
      puVar3 = (uint64_t *)SystemCore_ConfigManager();
      uVar4 = *puVar3;
      *puVar3 = 0;
      plStack_550 = *(int64_t **)(param_1 + 0xe00);
      *(uint64_t *)(param_1 + 0xe00) = uVar4;
      if (plStack_550 != (int64_t *)0x0) {
        (**(code **)(*plStack_550 + 0x38))();
      }
      if (plStack_548 != (int64_t *)0x0) {
        (**(code **)(*plStack_548 + 0x38))();
      }
      plocal_var_f8 = &system_state_ptr;
    }
  }
  puVar8 = (uint *)((int64_t)*(int *)(param_1 + 0xb68) * 0x128 + param_1 + 0x918);
  uVar1 = *puVar8;
  if (0 < (int)uVar1) {
    if ((*(int64_t *)(param_1 + 0xdd8) == 0) ||
       (*(uint *)(*(int64_t *)(param_1 + 0xdd8) + 0x3c) < uVar1)) {
      if (*puVar8 != 0) {
        iVar6 = (*puVar8 - 1 >> 0xb) + 1;
      }
      plocal_var_98 = &memory_allocator_3480_ptr;
      plocal_var_90 = stack_array_80;
      stack_array_80[0] = 0;
      local_var_88 = 0x1a;
      strcpy_s(stack_array_80,0x40,&processed_var_5656_ptr);
      local_var_5c0 = 0x200;
      local_var_5c8 = 1;
      local_var_5d0 = 0;
      local_var_5e0 = 4;
      local_var_5e8 = 5;
      local_var_5f0 = 3;
      local_var_5f8 = 0x21;
      local_var_5d8 = iVar6 << 0xb;
      puVar3 = (uint64_t *)SystemCore_ConfigManager();
      uVar4 = *puVar3;
      *puVar3 = 0;
      plStack_540 = *(int64_t **)(param_1 + 0xdd8);
      *(uint64_t *)(param_1 + 0xdd8) = uVar4;
      if (plStack_540 != (int64_t *)0x0) {
        (**(code **)(*plStack_540 + 0x38))();
      }
      if (plStack_538 != (int64_t *)0x0) {
        (**(code **)(*plStack_538 + 0x38))();
      }
      plocal_var_98 = &system_state_ptr;
    }
    pplStack_5b0 = (int64_t **)&plocal_var_358;
    plocal_var_358 = &memory_allocator_3432_ptr;
    plocal_var_350 = stack_array_340;
    local_var_348 = 0;
    stack_array_340[0] = 0;
    local_var_2c0 = 0xb;
    local_var_2b8 = *(uint64_t *)(param_1 + 0xdd8);
    local_var_2a8 = 0x2000;
    plocal_var_2b0 = puVar8 + 2;
    lStack_2a0 = (int64_t)(int)uVar1 << 2;
    uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
    plVar5 = (int64_t *)SystemCore_StreamController(uVar4,&plocal_var_358);
    pplocal_var_530 = (void **)plVar5;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    uVar4 = system_context_ptr;
    pplStack_5b0 = &plStack_598;
    plStack_598 = plVar5;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    SystemPerformance_Monitor(uVar4,&plStack_598);
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    pplocal_var_530 = &plocal_var_358;
    plocal_var_358 = &system_state_ptr;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_618);
}
uint64_t function_1b5f00(int64_t param_1,float *param_2)
{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int iVar9;
  float fVar10;
  plVar5 = (int64_t *)function_1b4cd0();
  if ((2 < (uint64_t)(plVar5[1] - *plVar5 >> 3)) && (*(char *)(param_1 + 0x5bf1) != '\0')) {
    plVar5 = (int64_t *)function_1b4cd0(param_1);
    lVar6 = *plVar5;
    fVar10 = 0.0;
    iVar9 = (int)(plVar5[1] - lVar6 >> 3);
    if ((7 < iVar9) &&
       (fVar2 = *(float *)(lVar6 + 4 + (int64_t)(int)plVar5[4] * 8),
       pfVar1 = (float *)(lVar6 + (int64_t)(int)plVar5[4] * 8), fVar3 = *pfVar1,
       0.0 < (fVar2 - *(float *)(lVar6 + 4 + (int64_t)*(int *)((int64_t)plVar5 + 0x24) * 8)) *
             (*param_2 - fVar3) -
             (param_2[1] - fVar2) *
             (fVar3 - *(float *)(lVar6 + (int64_t)*(int *)((int64_t)plVar5 + 0x24) * 8)))) {
      lVar8 = lVar6 + (int64_t)(int)plVar5[5] * 8;
      iVar4 = Function_137225f8();
      if (iVar4 == 2) {
        lVar7 = lVar6 + (int64_t)*(int *)((int64_t)plVar5 + 0x2c) * 8;
        iVar4 = Function_137225f8(lVar7,lVar8);
        if ((iVar4 == 2) && (iVar4 = Function_137225f8(pfVar1,lVar7), iVar4 == 2)) {
          return 1;
        }
      }
    }
    if (0 < iVar9) {
      lVar8 = 0;
      iVar4 = 1;
      do {
        fVar2 = *(float *)(lVar6 + 4 + lVar8 * 8);
        fVar3 = *(float *)(lVar6 + lVar8 * 8);
        if ((fVar2 - *(float *)(lVar6 + 4 + (int64_t)(iVar4 % iVar9) * 8)) * (*param_2 - fVar3) -
            (fVar3 - *(float *)(lVar6 + (int64_t)(iVar4 % iVar9) * 8)) * (param_2[1] - fVar2) <=
            fVar10) {
          return 0;
        }
        iVar4 = iVar4 + 1;
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar9);
    }
    return 1;
  }
  plVar5 = (int64_t *)function_1b4a60(param_1);
  if ((uint64_t)(plVar5[1] - *plVar5 >> 3) < 3) {
    return 1;
  }
  lVar6 = function_1b4a60(param_1);
  fVar10 = *(float *)(lVar6 + 0x3c);
  fVar2 = *(float *)(lVar6 + 0x38);
  lVar6 = function_1b4a60(param_1);
  if ((((*param_2 < fVar2 + 10.0) && (param_2[1] < fVar10 + 10.0)) &&
      (*(float *)(lVar6 + 0x30) - 10.0 < *param_2)) &&
     (*(float *)(lVar6 + 0x34) - 10.0 < param_2[1])) {
    return 1;
  }
  return 0;
}
int8_t function_1b5f69(void)
{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  float *unaff_RDI;
  lVar3 = function_1b4a60();
  fVar1 = *(float *)(lVar3 + 0x3c);
  fVar2 = *(float *)(lVar3 + 0x38);
  lVar3 = function_1b4a60();
  if ((((*unaff_RDI < fVar2 + 10.0) && (unaff_RDI[1] < fVar1 + 10.0)) &&
      (*(float *)(lVar3 + 0x30) - 10.0 < *unaff_RDI)) &&
     (*(float *)(lVar3 + 0x34) - 10.0 < unaff_RDI[1])) {
    return 1;
  }
  return 0;
}
int8_t function_1b5fca(uint64_t param_1,float param_2,float param_3,float param_4)
{
  int64_t unaff_RDI;
  float unaff_XMM8_Da;
  if (((*(float *)(unaff_RDI + 4) < unaff_XMM8_Da) && (param_3 < param_4)) &&
     (param_2 < *(float *)(unaff_RDI + 4))) {
    return 1;
  }
  return 0;
}
int8_t function_1b5ff2(void)
{
  return 0;
}
int8_t function_1b6005(void)
{
  return 1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1b6020(int64_t param_1)
void function_1b6020(int64_t param_1)
{
  uint uVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int64_t *plVar6;
  int32_t *puVar7;
  int32_t *puVar8;
  int32_t *puVar9;
  int64_t lVar10;
  int64_t *plVar11;
  int iVar12;
  int8_t stack_array_e8 [32];
  int8_t local_var_c8;
  int32_t local_var_b8;
  void *plocal_var_b0;
  int32_t *plocal_var_a8;
  int32_t local_var_a0;
  uint64_t local_var_98;
  void *plocal_var_90;
  int32_t *plocal_var_88;
  int32_t local_var_80;
  uint64_t local_var_78;
  int64_t *plStack_70;
  int64_t *plStack_68;
  uint64_t local_var_60;
  int64_t lStack_58;
  int64_t lStack_50;
  uint64_t local_var_48;
  char acStack_40 [16];
  uint64_t local_var_30;
  local_var_48 = 0xfffffffffffffffe;
  local_var_30 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_e8;
  iVar12 = 0;
  local_var_b8 = 0;
  plVar11 = (int64_t *)(param_1 + 0x2f0);
  while (lStack_50 = param_1, *plVar11 != 0) {
    iVar12 = iVar12 + 1;
    plVar11 = plVar11 + 1;
    if (3 < iVar12) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_30 ^ (uint64_t)stack_array_e8);
    }
  }
  plVar6 = (int64_t *)function_198890(param_1,&plStack_68,0);
  lVar2 = *plVar6;
  *plVar6 = 0;
  plStack_70 = (int64_t *)*plVar11;
  *plVar11 = lVar2;
  if (plStack_70 != (int64_t *)0x0) {
    (**(code **)(*plStack_70 + 0x38))();
  }
  if (plStack_68 != (int64_t *)0x0) {
    (**(code **)(*plStack_68 + 0x38))();
  }
  lVar2 = *plVar11;
  uVar1 = *(uint *)(lVar2 + 0x2ac);
  *(uint *)(lVar2 + 0x2ac) = uVar1 & 0xfffbffff;
  function_2ee810(lVar2,uVar1);
  function_2ee990(lVar2,uVar1);
  lVar2 = *plVar11;
  uVar1 = *(uint *)(lVar2 + 0x2c4);
  if ((uVar1 & 4) == 0) {
    *(uint *)(lVar2 + 0x2c4) = uVar1 | 4;
    if (((*(int64_t *)(lVar2 + 0x20) != 0) &&
        (*(char *)(*(int64_t *)(lVar2 + 0x20) + 0x60cb0) == '\0')) && ((uVar1 & 2) != 0)) {
      RenderingSystem_UpdateCamera(lVar2,0);
    }
  }
  lStack_58 = *plVar11;
  plocal_var_90 = &system_data_buffer_ptr;
  local_var_78 = 0;
  plocal_var_88 = (int32_t *)0x0;
  local_var_80 = 0;
  puVar7 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x19,0x13);
  *(int8_t *)puVar7 = 0;
  plocal_var_88 = puVar7;
  uVar5 = CoreEngineSystemCleanup(puVar7);
  local_var_78 = CONCAT44(local_var_78._4_4_,uVar5);
  *puVar7 = 0x616e5f5f;
  puVar7[1] = 0x61676976;
  puVar7[2] = 0x6e6f6974;
  puVar7[3] = 0x73656d5f;
  *(uint64_t *)(puVar7 + 4) = 0x797469746e655f68;
  *(int8_t *)(puVar7 + 6) = 0;
  local_var_80 = 0x18;
  plocal_var_b0 = &system_data_buffer_ptr;
  local_var_98 = 0;
  plocal_var_a8 = (int32_t *)0x0;
  local_var_a0 = 0;
  local_var_b8 = 1;
  puVar8 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x19,0x13);
  *(int8_t *)puVar8 = 0;
  plocal_var_a8 = puVar8;
  local_var_60 = CoreEngineSystemCleanup(puVar8);
  uVar5 = puVar7[1];
  uVar3 = puVar7[2];
  uVar4 = puVar7[3];
  *puVar8 = *puVar7;
  puVar8[1] = uVar5;
  puVar8[2] = uVar3;
  puVar8[3] = uVar4;
  *(uint64_t *)(puVar8 + 4) = *(uint64_t *)(puVar7 + 4);
  local_var_a0 = 0x18;
  *(int8_t *)(puVar8 + 6) = 0;
  local_var_98 = local_var_60 & 0xffffffff;
  RenderingEngine_BufferManager(acStack_40,&processed_var_4576_ptr,iVar12);
  lVar2 = -1;
  do {
    lVar10 = lVar2;
    lVar2 = lVar10 + 1;
  } while (acStack_40[lVar10 + 1] != '\0');
  if (0 < (int)(lVar10 + 1)) {
    iVar12 = (int)lVar10;
    if ((iVar12 != -0x19) && ((uint)local_var_60 < iVar12 + 0x1aU)) {
      local_var_c8 = 0x13;
      puVar8 = (int32_t *)DataValidator(system_memory_pool_ptr,puVar8,iVar12 + 0x1aU,0x10);
      plocal_var_a8 = puVar8;
      uVar5 = CoreEngineSystemCleanup(puVar8);
      local_var_98 = CONCAT44(local_var_98._4_4_,uVar5);
    }
// WARNING: Subroutine does not return
    memcpy(puVar8 + 6,acStack_40,(int64_t)(iVar12 + 2));
  }
  puVar9 = (int32_t *)&system_buffer_ptr;
  if (puVar8 != (int32_t *)0x0) {
    puVar9 = puVar8;
  }
  (**(code **)(*(int64_t *)(lStack_58 + 0x288) + 0x10))((int64_t *)(lStack_58 + 0x288),puVar9);
  local_var_b8 = 0;
  plocal_var_b0 = &system_data_buffer_ptr;
  if (puVar8 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar8);
  }
  plocal_var_a8 = (int32_t *)0x0;
  local_var_98 = local_var_98 & 0xffffffff00000000;
  plocal_var_b0 = &system_state_ptr;
  plocal_var_90 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar7);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1b6370(int64_t param_1)
void function_1b6370(int64_t param_1)
{
  uint64_t uVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t *puVar4;
  int64_t *plVar5;
  int iVar6;
  int iVar7;
  int64_t lVar8;
  int64_t lVar9;
  int iStackX_8;
  int64_t *plStackX_10;
  uint64_t *plocal_var_70;
  uint64_t *plocal_var_68;
  uint64_t *plocal_var_60;
  int32_t local_var_58;
  if (*(char *)(param_1 + 0x331c) == '\0') {
    function_3986d0(param_1 + 0x607e0);
    iStackX_8 = 0;
    if (*(int64_t *)(param_1 + 0x60860) - *(int64_t *)(param_1 + 0x60858) >> 3 != 0) {
      lVar8 = 0;
      do {
        plocal_var_70 = (uint64_t *)0x0;
        plocal_var_68 = (uint64_t *)0x0;
        plocal_var_60 = (uint64_t *)0x0;
        local_var_58 = 3;
        NetworkSystem_SecurityManager(*(uint64_t *)(*(int64_t *)(param_1 + 0x60858) + lVar8),&plocal_var_70);
        uVar1 = *(uint64_t *)(*(int64_t *)(param_1 + 0x60858) + lVar8);
        if (plocal_var_68 < plocal_var_60) {
          *plocal_var_68 = uVar1;
          puVar4 = plocal_var_68;
        }
        else {
          lVar9 = (int64_t)plocal_var_68 - (int64_t)plocal_var_70 >> 3;
          if (lVar9 == 0) {
            lVar9 = 1;
LAB_1801b645d:
            puVar4 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar9 * 8,(int8_t)local_var_58);
          }
          else {
            lVar9 = lVar9 * 2;
            if (lVar9 != 0) goto LAB_1801b645d;
            puVar4 = (uint64_t *)0x0;
          }
          if (plocal_var_70 != plocal_var_68) {
// WARNING: Subroutine does not return
            memmove(puVar4,plocal_var_70,(int64_t)plocal_var_68 - (int64_t)plocal_var_70);
          }
          *puVar4 = uVar1;
          if (plocal_var_70 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          plocal_var_60 = puVar4 + lVar9;
          plocal_var_70 = puVar4;
        }
        plocal_var_68 = puVar4 + 1;
        iVar7 = 0;
        if ((int64_t)plocal_var_68 - (int64_t)plocal_var_70 >> 3 != 0) {
          lVar9 = 0;
          do {
            iVar3 = function_2ed190(*(uint64_t *)(lVar9 + (int64_t)plocal_var_70),1);
            iVar6 = 0;
            if (0 < iVar3) {
              do {
                plVar5 = (int64_t *)
                         function_2ed2b0(*(uint64_t *)(lVar9 + (int64_t)plocal_var_70),&plStackX_10,1,
                                       iVar6);
                lVar2 = *plVar5;
                if (plStackX_10 != (int64_t *)0x0) {
                  (**(code **)(*plStackX_10 + 0x38))();
                }
                if (*(float *)(lVar2 + 0x30) == 0.0) {
                  *(int32_t *)(lVar2 + 200) = 0;
                  function_384720(param_1 + 0x120,lVar2);
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < iVar3);
            }
            iVar7 = iVar7 + 1;
            lVar9 = lVar9 + 8;
          } while ((uint64_t)(int64_t)iVar7 <
                   (uint64_t)((int64_t)plocal_var_68 - (int64_t)plocal_var_70 >> 3));
        }
        if (plocal_var_70 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        iStackX_8 = iStackX_8 + 1;
        lVar8 = lVar8 + 8;
      } while ((uint64_t)(int64_t)iStackX_8 <
               (uint64_t)(*(int64_t *)(param_1 + 0x60860) - *(int64_t *)(param_1 + 0x60858) >> 3)
              );
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1b65d0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void function_1b65d0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  char cVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int32_t uVar5;
  uint64_t local_var_58;
  int32_t local_var_50;
  int32_t local_var_4c;
  int16_t local_var_48;
  int8_t local_var_46;
  int32_t local_var_44;
  byte bStack_40;
  uint64_t local_var_38;
  int64_t lStack_30;
  uint64_t local_var_28;
  uint64_t local_var_20;
  int32_t local_var_18;
  uint64_t local_var_10;
  iVar2 = *(int *)(param_1 + 0x27c0);
  bStack_40 = (byte)iVar2;
  if (iVar2 == 1) {
    local_var_58 = 0;
    local_var_50 = 0;
    local_var_4c = 0xffffffff;
    local_var_48 = 1;
    local_var_46 = 0;
    local_var_44 = 0xffffffff;
    local_var_38 = 0;
    lStack_30 = 0;
    local_var_28 = 0;
    local_var_20 = 0;
    local_var_18 = 3;
    local_var_10 = 0;
    iVar2 = function_1a3620(param_1,&local_var_58);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x27c0);
      if (iVar2 < iVar2 + 1) {
        iVar2 = iVar2 + 1;
      }
      *(int *)(param_1 + 0x27c0) = iVar2;
      if ((*(char *)(param_1 + 0x2966) == '\0') &&
         (plVar3 = *(int64_t **)(system_operation_state + 0x1860), plVar3 != (int64_t *)0x0)) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0x3f30a3d7);
      }
    }
    if (lStack_30 == 0) {
      return;
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (iVar2 == 2) {
    if (((*(char *)(param_1 + 0x3e05) != '\0') && ((*(byte *)(param_1 + 0x3e08) & bStack_40) == 0))
       && ((0 < *(int *)(SYSTEM_STATE_MANAGER + 0xc40) &&
           (cVar1 = Function_9df56593(*(int64_t *)(param_2 + 0x3580) + 0x560,param_1,param_3,
                                        param_4,0xfffffffffffffffe), cVar1 != '\0')))) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x27c0);
    if (iVar2 < iVar2 + 1) {
      iVar2 = iVar2 + 1;
    }
    *(int *)(param_1 + 0x27c0) = iVar2;
    if (*(char *)(param_1 + 0x2966) != '\0') {
      return;
    }
    plVar3 = *(int64_t **)(system_operation_state + 0x1860);
    if (plVar3 == (int64_t *)0x0) {
      return;
    }
    uVar5 = 0x3f3851ec;
  }
  else if (iVar2 == 3) {
    if ((((*(int *)(system_system_data_memory + 0x620) == 0) &&
         (*(char *)(*(int64_t *)(param_2 + 0x3580) + 0x5c8) == '\0')) &&
        (*(char *)(param_1 + 0x3e05) != '\0')) &&
       (((*(byte *)(param_1 + 0x3e08) & 2) == 0 && (0 < *(int *)(SYSTEM_STATE_MANAGER + 0xc40))))) {
      return;
    }
    *(int32_t *)(param_1 + 0x27c0) = 4;
    if (*(char *)(param_1 + 0x2966) != '\0') {
      return;
    }
    plVar3 = *(int64_t **)(system_operation_state + 0x1860);
    if (plVar3 == (int64_t *)0x0) {
      return;
    }
    uVar5 = 0x3f3ae148;
  }
  else if (iVar2 == 4) {
    if ((*(int64_t *)(param_1 + 0x60b80) != 0) &&
       (*(int *)(*(int64_t *)(param_1 + 0x60b80) + 0x10) != 9)) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x27c0);
    if (iVar2 < iVar2 + 1) {
      iVar2 = iVar2 + 1;
    }
    *(int *)(param_1 + 0x27c0) = iVar2;
    if (*(char *)(param_1 + 0x2966) != '\0') {
      return;
    }
    plVar3 = *(int64_t **)(system_operation_state + 0x1860);
    if (plVar3 == (int64_t *)0x0) {
      return;
    }
    uVar5 = 0x3f3d70a4;
  }
  else if (iVar2 == 5) {
    plVar3 = *(int64_t **)(param_1 + 0x60c20);
    iVar2 = (int)(*(int64_t *)(param_1 + 0x60c28) - (int64_t)plVar3 >> 3);
    if (0 < iVar2) {
      lVar4 = 0;
      do {
        if (*(int *)(*plVar3 + 0x4c) != 0x18) {
          return;
        }
        lVar4 = lVar4 + 1;
        plVar3 = plVar3 + 1;
      } while (lVar4 < iVar2);
    }
    *(int32_t *)(param_1 + 0x27c0) = 6;
    if ((*(int64_t *)(param_1 + 800) != 0) && (0 < *(int *)(SYSTEM_STATE_MANAGER + 0xbd0))) {
      Function_f81b3568();
      function_1a99d0(param_1);
      function_31e050(*(uint64_t *)(param_1 + 800));
      *(int32_t *)(param_1 + 0x3b0) = *(int32_t *)(SYSTEM_STATE_MANAGER + 0xbd0);
    }
    if (*(char *)(param_1 + 0x2966) != '\0') {
      return;
    }
    plVar3 = *(int64_t **)(system_operation_state + 0x1860);
    if (plVar3 == (int64_t *)0x0) {
      return;
    }
    uVar5 = 0x3f570a3d;
  }
  else {
    if (iVar2 != 6) {
      return;
    }
    if (((*(int64_t *)(param_1 + 800) != 0) &&
        (lVar4 = *(int64_t *)(*(int64_t *)(param_1 + 800) + 0x3c8), lVar4 != 0)) &&
       (*(int64_t *)(lVar4 + 0x20) - *(int64_t *)(lVar4 + 0x18) >> 4 != 0)) {
      return;
    }
    *(int32_t *)(param_1 + 0x27c0) = 7;
    *(int8_t *)(system_parameter_buffer + 0xf18) = 1;
    if ((*(int64_t *)(param_1 + 800) != 0) &&
       (lVar4 = *(int64_t *)(*(int64_t *)(param_1 + 800) + 0x3c8), lVar4 != 0)) {
      if (*(int64_t *)(lVar4 + 0xb0) != 0) {
        function_462930();
        *(uint64_t *)(lVar4 + 0xb0) = 0;
      }
      if (*(int64_t *)(lVar4 + 0xb8) != 0) {
        function_462930();
        *(uint64_t *)(lVar4 + 0xb8) = 0;
      }
    }
    if (*(char *)(param_1 + 0x2966) != '\0') {
      return;
    }
    plVar3 = *(int64_t **)(system_operation_state + 0x1860);
    if (plVar3 == (int64_t *)0x0) {
      return;
    }
    uVar5 = 0x3f5c28f6;
  }
  (**(code **)(*plVar3 + 0x28))(plVar3,uVar5);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1b69d0(int64_t param_1,uint64_t param_2)
void function_1b69d0(int64_t param_1,uint64_t param_2)
{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  puVar4 = *(uint64_t **)(param_1 + 0x29b8);
  if (puVar4 < *(uint64_t **)(param_1 + 0x29c0)) {
    *(uint64_t **)(param_1 + 0x29b8) = puVar4 + 1;
    *puVar4 = param_2;
    return;
  }
  puVar3 = *(uint64_t **)(param_1 + 0x29b0);
  lVar1 = (int64_t)puVar4 - (int64_t)puVar3 >> 3;
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = lVar1 * 2;
    if (lVar1 == 0) {
      puVar2 = (uint64_t *)0x0;
      goto LAB_1801b6a74;
    }
  }
  puVar2 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar1 * 8,*(int8_t *)(param_1 + 0x29c8));
  puVar3 = *(uint64_t **)(param_1 + 0x29b0);
  puVar4 = *(uint64_t **)(param_1 + 0x29b8);
LAB_1801b6a74:
  if (puVar3 != puVar4) {
// WARNING: Subroutine does not return
    memmove(puVar2,puVar3,(int64_t)puVar4 - (int64_t)puVar3);
  }
  *puVar2 = param_2;
  if (*(int64_t *)(param_1 + 0x29b0) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t **)(param_1 + 0x29b0) = puVar2;
  *(uint64_t **)(param_1 + 0x29b8) = puVar2 + 1;
  *(uint64_t **)(param_1 + 0x29c0) = puVar2 + lVar1;
  return;
}
// 函数: void function_1b6ae0(int64_t param_1,int64_t param_2)
void function_1b6ae0(int64_t param_1,int64_t param_2)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int iVar4;
  uint64_t uVar5;
  iVar4 = 0;
  plVar1 = *(int64_t **)(param_1 + 0x29b8);
  plVar2 = *(int64_t **)(param_1 + 0x29b0);
  uVar5 = (int64_t)plVar1 - (int64_t)plVar2 >> 3;
  plVar3 = plVar2;
  if (uVar5 != 0) {
    do {
      if (*plVar3 == param_2) goto LAB_1801b6b2a;
      iVar4 = iVar4 + 1;
      plVar3 = plVar3 + 1;
    } while ((uint64_t)(int64_t)iVar4 < uVar5);
  }
  iVar4 = -1;
LAB_1801b6b2a:
  plVar3 = plVar2 + iVar4 + 1;
  if (plVar1 <= plVar3) {
    *(int64_t **)(param_1 + 0x29b8) = plVar1 + -1;
    return;
  }
// WARNING: Subroutine does not return
  memmove(plVar2 + iVar4,plVar3,(int64_t)plVar1 - (int64_t)plVar3);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address