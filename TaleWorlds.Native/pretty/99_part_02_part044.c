#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_02_part044.c - 6 个函数

// 函数: void FUN_1801b5480(int64_t param_1)
void FUN_1801b5480(int64_t param_1)

{
  uint uVar1;
  int iVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  int8_t auStack_618 [32];
  int32_t uStack_5f8;
  int32_t uStack_5f0;
  int32_t uStack_5e8;
  int32_t uStack_5e0;
  uint uStack_5d8;
  uint64_t uStack_5d0;
  int8_t uStack_5c8;
  int32_t uStack_5c0;
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
  void **ppuStack_530;
  uint64_t uStack_528;
  int64_t *plStack_518;
  int8_t *puStack_510;
  int32_t uStack_508;
  int8_t auStack_500 [128];
  int32_t uStack_480;
  uint64_t uStack_478;
  int *piStack_470;
  uint64_t uStack_468;
  int64_t lStack_460;
  int64_t *plStack_438;
  int8_t *puStack_430;
  int32_t uStack_428;
  int8_t auStack_420 [128];
  int32_t uStack_3a0;
  uint64_t uStack_398;
  uint *puStack_390;
  uint64_t uStack_388;
  int64_t lStack_380;
  void *puStack_358;
  int8_t *puStack_350;
  int32_t uStack_348;
  int8_t auStack_340 [128];
  int32_t uStack_2c0;
  uint64_t uStack_2b8;
  uint *puStack_2b0;
  uint64_t uStack_2a8;
  int64_t lStack_2a0;
  void *puStack_278;
  int8_t *puStack_270;
  int32_t uStack_268;
  int8_t auStack_260 [72];
  void *puStack_218;
  int8_t *puStack_210;
  int32_t uStack_208;
  int8_t auStack_200 [72];
  void *puStack_1b8;
  int8_t *puStack_1b0;
  int32_t uStack_1a8;
  int8_t auStack_1a0 [72];
  void *puStack_158;
  int8_t *puStack_150;
  int32_t uStack_148;
  int8_t auStack_140 [72];
  void *puStack_f8;
  int8_t *puStack_f0;
  int32_t uStack_e8;
  int8_t auStack_e0 [72];
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [72];
  uint64_t uStack_38;
  
  uStack_528 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_618;
  piVar7 = (int *)((int64_t)*(int *)(param_1 + 0xdc0) * 0x128 + param_1 + 0xb70);
  iVar6 = *piVar7;
  iVar2 = 0;
  if (0 < iVar6) {
    if ((*(int64_t *)(param_1 + 0xdc8) == 0) ||
       (*(uint *)(*(int64_t *)(param_1 + 0xdc8) + 0x3c) < (uint)(iVar6 * 3))) {
      if (*piVar7 != 0) {
        iVar2 = (*piVar7 - 1U >> 0xd) + 1;
      }
      puStack_278 = &unknown_var_3480_ptr;
      puStack_270 = auStack_260;
      auStack_260[0] = 0;
      uStack_268 = 0x12;
      strcpy_s(auStack_260,0x40,&unknown_var_5552_ptr);
      uStack_5c0 = 0x1000;
      uStack_5c8 = 0;
      uStack_5d0 = 0;
      uStack_5e0 = 0x10;
      uStack_5e8 = 0x21;
      uStack_5f0 = 3;
      uStack_5f8 = 0x21;
      uStack_5d8 = iVar2 * 0x6000;
      puVar3 = (uint64_t *)FUN_1800b0a10();
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
      puStack_278 = &system_state_ptr;
    }
    plStack_518 = (int64_t *)&unknown_var_3432_ptr;
    puStack_510 = auStack_500;
    uStack_508 = 0;
    auStack_500[0] = 0;
    uStack_480 = 0xc;
    uStack_478 = *(uint64_t *)(param_1 + 0xdc8);
    uStack_468 = 0x80000;
    piStack_470 = piVar7 + 2;
    lStack_460 = (int64_t)iVar6 << 6;
    pplStack_590 = &plStack_518;
    uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
    plVar5 = (int64_t *)FUN_18005ce30(uVar4,&plStack_518);
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
    FUN_18005e370(uVar4,&plStack_5a8);
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
      puStack_218 = &unknown_var_3480_ptr;
      puStack_210 = auStack_200;
      auStack_200[0] = 0;
      uStack_208 = 0x12;
      strcpy_s(auStack_200,0x40,&unknown_var_5552_ptr);
      uStack_5c0 = 0x1000;
      uStack_5c8 = 0;
      uStack_5d0 = 0;
      uStack_5e0 = 8;
      uStack_5e8 = 0x32;
      uStack_5f0 = 3;
      uStack_5f8 = 0x21;
      uStack_5d8 = iVar2 << 0xb;
      puVar3 = (uint64_t *)FUN_1800b0a10();
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
      puStack_218 = &system_state_ptr;
    }
    pplStack_5b8 = &plStack_438;
    plStack_438 = (int64_t *)&unknown_var_3432_ptr;
    puStack_430 = auStack_420;
    uStack_428 = 0;
    auStack_420[0] = 0;
    uStack_3a0 = 0xb;
    uStack_398 = *(uint64_t *)(param_1 + 0xe08);
    uStack_388 = 0x4000;
    puStack_390 = puVar8 + 2;
    lStack_380 = (int64_t)(int)uVar1 << 3;
    uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
    plVar5 = (int64_t *)FUN_18005ce30(uVar4,&plStack_438);
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
    FUN_18005e370(uVar4,&plStack_5a0);
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
      puStack_1b8 = &unknown_var_3480_ptr;
      puStack_1b0 = auStack_1a0;
      auStack_1a0[0] = 0;
      uStack_1a8 = 0x12;
      strcpy_s(auStack_1a0,0x40,&unknown_var_5528_ptr);
      uStack_5c0 = 0x400000;
      uStack_5c8 = 0;
      uStack_5d0 = 0;
      uStack_5e0 = 4;
      uStack_5e8 = 0x1f;
      uStack_5f0 = 0;
      uStack_5f8 = 5;
      uStack_5d8 = uVar1;
      puVar3 = (uint64_t *)FUN_1800b0a10();
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
      puStack_1b8 = &system_state_ptr;
    }
    if ((*(int64_t *)(param_1 + 0xdf8) == 0) ||
       (*(uint *)(*(int64_t *)(param_1 + 0xdf8) + 0x3c) < *(uint *)(param_1 + 0xe20))) {
      uVar1 = *(uint *)(param_1 + 0xe20);
      puStack_158 = &unknown_var_3480_ptr;
      puStack_150 = auStack_140;
      auStack_140[0] = 0;
      uStack_148 = 0x15;
      strcpy_s(auStack_140,0x40,&unknown_var_5600_ptr);
      uStack_5c0 = 0x400000;
      uStack_5c8 = 0;
      uStack_5d0 = 0;
      uStack_5e0 = 4;
      uStack_5e8 = 5;
      uStack_5f0 = 0;
      uStack_5f8 = 5;
      uStack_5d8 = uVar1;
      puVar3 = (uint64_t *)FUN_1800b0a10();
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
      puStack_158 = &system_state_ptr;
    }
    if ((*(int64_t *)(param_1 + 0xe00) == 0) ||
       (*(uint *)(*(int64_t *)(param_1 + 0xe00) + 0x3c) < *(uint *)(param_1 + 0xe20))) {
      uVar1 = *(uint *)(param_1 + 0xe20);
      puStack_f8 = &unknown_var_3480_ptr;
      puStack_f0 = auStack_e0;
      auStack_e0[0] = 0;
      uStack_e8 = 0x16;
      strcpy_s(auStack_e0,0x40,&unknown_var_5576_ptr);
      uStack_5c0 = 0x400000;
      uStack_5c8 = 0;
      uStack_5d0 = 0;
      uStack_5e0 = 4;
      uStack_5e8 = 5;
      uStack_5f0 = 0;
      uStack_5f8 = 5;
      uStack_5d8 = uVar1;
      puVar3 = (uint64_t *)FUN_1800b0a10();
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
      puStack_f8 = &system_state_ptr;
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
      puStack_98 = &unknown_var_3480_ptr;
      puStack_90 = auStack_80;
      auStack_80[0] = 0;
      uStack_88 = 0x1a;
      strcpy_s(auStack_80,0x40,&unknown_var_5656_ptr);
      uStack_5c0 = 0x200;
      uStack_5c8 = 1;
      uStack_5d0 = 0;
      uStack_5e0 = 4;
      uStack_5e8 = 5;
      uStack_5f0 = 3;
      uStack_5f8 = 0x21;
      uStack_5d8 = iVar6 << 0xb;
      puVar3 = (uint64_t *)FUN_1800b0a10();
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
      puStack_98 = &system_state_ptr;
    }
    pplStack_5b0 = (int64_t **)&puStack_358;
    puStack_358 = &unknown_var_3432_ptr;
    puStack_350 = auStack_340;
    uStack_348 = 0;
    auStack_340[0] = 0;
    uStack_2c0 = 0xb;
    uStack_2b8 = *(uint64_t *)(param_1 + 0xdd8);
    uStack_2a8 = 0x2000;
    puStack_2b0 = puVar8 + 2;
    lStack_2a0 = (int64_t)(int)uVar1 << 2;
    uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
    plVar5 = (int64_t *)FUN_18005ce30(uVar4,&puStack_358);
    ppuStack_530 = (void **)plVar5;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    uVar4 = system_context_ptr;
    pplStack_5b0 = &plStack_598;
    plStack_598 = plVar5;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    FUN_18005e370(uVar4,&plStack_598);
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    ppuStack_530 = &puStack_358;
    puStack_358 = &system_state_ptr;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_618);
}



uint64_t FUN_1801b5f00(int64_t param_1,float *param_2)

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
  
  plVar5 = (int64_t *)FUN_1801b4cd0();
  if ((2 < (uint64_t)(plVar5[1] - *plVar5 >> 3)) && (*(char *)(param_1 + 0x5bf1) != '\0')) {
    plVar5 = (int64_t *)FUN_1801b4cd0(param_1);
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
      iVar4 = func_0x000180360380();
      if (iVar4 == 2) {
        lVar7 = lVar6 + (int64_t)*(int *)((int64_t)plVar5 + 0x2c) * 8;
        iVar4 = func_0x000180360380(lVar7,lVar8);
        if ((iVar4 == 2) && (iVar4 = func_0x000180360380(pfVar1,lVar7), iVar4 == 2)) {
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
  plVar5 = (int64_t *)FUN_1801b4a60(param_1);
  if ((uint64_t)(plVar5[1] - *plVar5 >> 3) < 3) {
    return 1;
  }
  lVar6 = FUN_1801b4a60(param_1);
  fVar10 = *(float *)(lVar6 + 0x3c);
  fVar2 = *(float *)(lVar6 + 0x38);
  lVar6 = FUN_1801b4a60(param_1);
  if ((((*param_2 < fVar2 + 10.0) && (param_2[1] < fVar10 + 10.0)) &&
      (*(float *)(lVar6 + 0x30) - 10.0 < *param_2)) &&
     (*(float *)(lVar6 + 0x34) - 10.0 < param_2[1])) {
    return 1;
  }
  return 0;
}



int8_t FUN_1801b5f69(void)

{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  float *unaff_RDI;
  
  lVar3 = FUN_1801b4a60();
  fVar1 = *(float *)(lVar3 + 0x3c);
  fVar2 = *(float *)(lVar3 + 0x38);
  lVar3 = FUN_1801b4a60();
  if ((((*unaff_RDI < fVar2 + 10.0) && (unaff_RDI[1] < fVar1 + 10.0)) &&
      (*(float *)(lVar3 + 0x30) - 10.0 < *unaff_RDI)) &&
     (*(float *)(lVar3 + 0x34) - 10.0 < unaff_RDI[1])) {
    return 1;
  }
  return 0;
}



int8_t FUN_1801b5fca(uint64_t param_1,float param_2,float param_3,float param_4)

{
  int64_t unaff_RDI;
  float unaff_XMM8_Da;
  
  if (((*(float *)(unaff_RDI + 4) < unaff_XMM8_Da) && (param_3 < param_4)) &&
     (param_2 < *(float *)(unaff_RDI + 4))) {
    return 1;
  }
  return 0;
}



int8_t FUN_1801b5ff2(void)

{
  return 0;
}



int8_t FUN_1801b6005(void)

{
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801b6020(int64_t param_1)
void FUN_1801b6020(int64_t param_1)

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
  int8_t auStack_e8 [32];
  int8_t uStack_c8;
  int32_t uStack_b8;
  void *puStack_b0;
  int32_t *puStack_a8;
  int32_t uStack_a0;
  uint64_t uStack_98;
  void *puStack_90;
  int32_t *puStack_88;
  int32_t uStack_80;
  uint64_t uStack_78;
  int64_t *plStack_70;
  int64_t *plStack_68;
  uint64_t uStack_60;
  int64_t lStack_58;
  int64_t lStack_50;
  uint64_t uStack_48;
  char acStack_40 [16];
  uint64_t uStack_30;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_e8;
  iVar12 = 0;
  uStack_b8 = 0;
  plVar11 = (int64_t *)(param_1 + 0x2f0);
  while (lStack_50 = param_1, *plVar11 != 0) {
    iVar12 = iVar12 + 1;
    plVar11 = plVar11 + 1;
    if (3 < iVar12) {
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(uStack_30 ^ (uint64_t)auStack_e8);
    }
  }
  plVar6 = (int64_t *)FUN_180198890(param_1,&plStack_68,0);
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
  FUN_1802ee810(lVar2,uVar1);
  FUN_1802ee990(lVar2,uVar1);
  lVar2 = *plVar11;
  uVar1 = *(uint *)(lVar2 + 0x2c4);
  if ((uVar1 & 4) == 0) {
    *(uint *)(lVar2 + 0x2c4) = uVar1 | 4;
    if (((*(int64_t *)(lVar2 + 0x20) != 0) &&
        (*(char *)(*(int64_t *)(lVar2 + 0x20) + 0x60cb0) == '\0')) && ((uVar1 & 2) != 0)) {
      FUN_1802ee720(lVar2,0);
    }
  }
  lStack_58 = *plVar11;
  puStack_90 = &system_data_buffer_ptr;
  uStack_78 = 0;
  puStack_88 = (int32_t *)0x0;
  uStack_80 = 0;
  puVar7 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x19,0x13);
  *(int8_t *)puVar7 = 0;
  puStack_88 = puVar7;
  uVar5 = CoreEngineSystemCleanup(puVar7);
  uStack_78 = CONCAT44(uStack_78._4_4_,uVar5);
  *puVar7 = 0x616e5f5f;
  puVar7[1] = 0x61676976;
  puVar7[2] = 0x6e6f6974;
  puVar7[3] = 0x73656d5f;
  *(uint64_t *)(puVar7 + 4) = 0x797469746e655f68;
  *(int8_t *)(puVar7 + 6) = 0;
  uStack_80 = 0x18;
  puStack_b0 = &system_data_buffer_ptr;
  uStack_98 = 0;
  puStack_a8 = (int32_t *)0x0;
  uStack_a0 = 0;
  uStack_b8 = 1;
  puVar8 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x19,0x13);
  *(int8_t *)puVar8 = 0;
  puStack_a8 = puVar8;
  uStack_60 = CoreEngineSystemCleanup(puVar8);
  uVar5 = puVar7[1];
  uVar3 = puVar7[2];
  uVar4 = puVar7[3];
  *puVar8 = *puVar7;
  puVar8[1] = uVar5;
  puVar8[2] = uVar3;
  puVar8[3] = uVar4;
  *(uint64_t *)(puVar8 + 4) = *(uint64_t *)(puVar7 + 4);
  uStack_a0 = 0x18;
  *(int8_t *)(puVar8 + 6) = 0;
  uStack_98 = uStack_60 & 0xffffffff;
  FUN_180060680(acStack_40,&unknown_var_4576_ptr,iVar12);
  lVar2 = -1;
  do {
    lVar10 = lVar2;
    lVar2 = lVar10 + 1;
  } while (acStack_40[lVar10 + 1] != '\0');
  if (0 < (int)(lVar10 + 1)) {
    iVar12 = (int)lVar10;
    if ((iVar12 != -0x19) && ((uint)uStack_60 < iVar12 + 0x1aU)) {
      uStack_c8 = 0x13;
      puVar8 = (int32_t *)DataValidator(system_memory_pool_ptr,puVar8,iVar12 + 0x1aU,0x10);
      puStack_a8 = puVar8;
      uVar5 = CoreEngineSystemCleanup(puVar8);
      uStack_98 = CONCAT44(uStack_98._4_4_,uVar5);
    }
                    // WARNING: Subroutine does not return
    memcpy(puVar8 + 6,acStack_40,(int64_t)(iVar12 + 2));
  }
  puVar9 = (int32_t *)&system_buffer_ptr;
  if (puVar8 != (int32_t *)0x0) {
    puVar9 = puVar8;
  }
  (**(code **)(*(int64_t *)(lStack_58 + 0x288) + 0x10))((int64_t *)(lStack_58 + 0x288),puVar9);
  uStack_b8 = 0;
  puStack_b0 = &system_data_buffer_ptr;
  if (puVar8 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar8);
  }
  puStack_a8 = (int32_t *)0x0;
  uStack_98 = uStack_98 & 0xffffffff00000000;
  puStack_b0 = &system_state_ptr;
  puStack_90 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar7);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801b6370(int64_t param_1)
void FUN_1801b6370(int64_t param_1)

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
  uint64_t *puStack_70;
  uint64_t *puStack_68;
  uint64_t *puStack_60;
  int32_t uStack_58;
  
  if (*(char *)(param_1 + 0x331c) == '\0') {
    FUN_1803986d0(param_1 + 0x607e0);
    iStackX_8 = 0;
    if (*(int64_t *)(param_1 + 0x60860) - *(int64_t *)(param_1 + 0x60858) >> 3 != 0) {
      lVar8 = 0;
      do {
        puStack_70 = (uint64_t *)0x0;
        puStack_68 = (uint64_t *)0x0;
        puStack_60 = (uint64_t *)0x0;
        uStack_58 = 3;
        FUN_1802e8c60(*(uint64_t *)(*(int64_t *)(param_1 + 0x60858) + lVar8),&puStack_70);
        uVar1 = *(uint64_t *)(*(int64_t *)(param_1 + 0x60858) + lVar8);
        if (puStack_68 < puStack_60) {
          *puStack_68 = uVar1;
          puVar4 = puStack_68;
        }
        else {
          lVar9 = (int64_t)puStack_68 - (int64_t)puStack_70 >> 3;
          if (lVar9 == 0) {
            lVar9 = 1;
LAB_1801b645d:
            puVar4 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar9 * 8,(int8_t)uStack_58);
          }
          else {
            lVar9 = lVar9 * 2;
            if (lVar9 != 0) goto LAB_1801b645d;
            puVar4 = (uint64_t *)0x0;
          }
          if (puStack_70 != puStack_68) {
                    // WARNING: Subroutine does not return
            memmove(puVar4,puStack_70,(int64_t)puStack_68 - (int64_t)puStack_70);
          }
          *puVar4 = uVar1;
          if (puStack_70 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          puStack_60 = puVar4 + lVar9;
          puStack_70 = puVar4;
        }
        puStack_68 = puVar4 + 1;
        iVar7 = 0;
        if ((int64_t)puStack_68 - (int64_t)puStack_70 >> 3 != 0) {
          lVar9 = 0;
          do {
            iVar3 = FUN_1802ed190(*(uint64_t *)(lVar9 + (int64_t)puStack_70),1);
            iVar6 = 0;
            if (0 < iVar3) {
              do {
                plVar5 = (int64_t *)
                         FUN_1802ed2b0(*(uint64_t *)(lVar9 + (int64_t)puStack_70),&plStackX_10,1,
                                       iVar6);
                lVar2 = *plVar5;
                if (plStackX_10 != (int64_t *)0x0) {
                  (**(code **)(*plStackX_10 + 0x38))();
                }
                if (*(float *)(lVar2 + 0x30) == 0.0) {
                  *(int32_t *)(lVar2 + 200) = 0;
                  FUN_180384720(param_1 + 0x120,lVar2);
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < iVar3);
            }
            iVar7 = iVar7 + 1;
            lVar9 = lVar9 + 8;
          } while ((uint64_t)(int64_t)iVar7 <
                   (uint64_t)((int64_t)puStack_68 - (int64_t)puStack_70 >> 3));
        }
        if (puStack_70 != (uint64_t *)0x0) {
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




// 函数: void FUN_1801b65d0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801b65d0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int32_t uVar5;
  uint64_t uStack_58;
  int32_t uStack_50;
  int32_t uStack_4c;
  int16_t uStack_48;
  int8_t uStack_46;
  int32_t uStack_44;
  byte bStack_40;
  uint64_t uStack_38;
  int64_t lStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  uint64_t uStack_10;
  
  iVar2 = *(int *)(param_1 + 0x27c0);
  bStack_40 = (byte)iVar2;
  if (iVar2 == 1) {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_4c = 0xffffffff;
    uStack_48 = 1;
    uStack_46 = 0;
    uStack_44 = 0xffffffff;
    uStack_38 = 0;
    lStack_30 = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_18 = 3;
    uStack_10 = 0;
    iVar2 = FUN_1801a3620(param_1,&uStack_58);
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
           (cVar1 = func_0x0001802e1840(*(int64_t *)(param_2 + 0x3580) + 0x560,param_1,param_3,
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
      func_0x00018031cb70();
      FUN_1801a99d0(param_1);
      FUN_18031e050(*(uint64_t *)(param_1 + 800));
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
        FUN_180462930();
        *(uint64_t *)(lVar4 + 0xb0) = 0;
      }
      if (*(int64_t *)(lVar4 + 0xb8) != 0) {
        FUN_180462930();
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




// 函数: void FUN_1801b69d0(int64_t param_1,uint64_t param_2)
void FUN_1801b69d0(int64_t param_1,uint64_t param_2)

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






// 函数: void FUN_1801b6ae0(int64_t param_1,int64_t param_2)
void FUN_1801b6ae0(int64_t param_1,int64_t param_2)

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




