#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_06_part040.c - 7 个函数
// 函数: void function_3cbfb0(int64_t param_1,float *param_2,int64_t param_3)
void function_3cbfb0(int64_t param_1,float *param_2,int64_t param_3)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int32_t *puVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  int iVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  uint uVar10;
  int32_t uVar11;
  int8_t auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int8_t stack_array_588 [32];
  int64_t *plStack_568;
  void **pplocal_var_560;
  void **pplocal_var_558;
  int32_t local_var_550;
  int32_t local_var_548;
  int32_t local_var_540;
  int64_t lStack_538;
  uint64_t local_var_528;
  int32_t local_var_520;
  int32_t local_var_51c;
  float fStack_518;
  float fStack_514;
  float fStack_510;
  float fStack_50c;
  int32_t local_var_508;
  float fStack_504;
  float fStack_500;
  uint64_t local_var_4f8;
  uint64_t local_var_4f0;
  float fStack_4e8;
  float fStack_4e4;
  float fStack_4e0;
  float fStack_4dc;
  float fStack_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  int32_t local_var_4c8;
  int32_t local_var_4c4;
  int32_t local_var_4c0;
  int32_t local_var_4bc;
  int64_t lStack_4b8;
  int64_t lStack_4b0;
  int16_t local_var_4a8;
  float fStack_4a0;
  float fStack_49c;
  float fStack_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float fStack_488;
  int32_t local_var_480;
  int32_t local_var_47c;
  int32_t local_var_478;
  int32_t local_var_474;
  int32_t local_var_470;
  int32_t local_var_46c;
  int32_t local_var_468;
  int64_t lStack_460;
  int32_t local_var_458;
  float fStack_450;
  int32_t local_var_44c;
  int32_t local_var_448;
  int32_t local_var_444;
  void *plocal_var_440;
  int64_t *plStack_438;
  int64_t *plStack_430;
  int32_t local_var_428;
  int32_t local_var_424;
  int8_t local_var_420;
  void *plocal_var_418;
  int64_t lStack_410;
  int32_t local_var_408;
  int32_t local_var_400;
  int32_t local_var_3fc;
  int32_t local_var_3f8;
  int32_t local_var_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float fStack_3e8;
  int8_t *plocal_var_3e0;
  int8_t stack_array_3d8 [16];
  float fStack_3c8;
  float fStack_3c4;
  float fStack_3c0;
  int64_t alStack_3b8 [3];
  int32_t local_var_3a0;
  int64_t alStack_398 [3];
  int32_t local_var_380;
  uint64_t local_var_378;
  int8_t stack_array_370 [16];
  int8_t stack_array_360 [56];
  void *plocal_var_328;
  uint64_t local_var_320;
  uint64_t local_var_318;
  int32_t local_var_310;
  byte bStack_300;
  int64_t *plStack_2f8;
  uint64_t local_var_2f0;
  int64_t alStack_2e8 [64];
  uint64_t local_var_e8;
  local_var_378 = 0xfffffffffffffffe;
  local_var_e8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_588;
  fVar15 = param_2[4] - *param_2;
  fVar16 = fVar15 * fVar15 + (param_2[5] - param_2[1]) * (param_2[5] - param_2[1]) +
           (param_2[6] - param_2[2]) * (param_2[6] - param_2[2]);
  auVar12 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
  fVar15 = auVar12._0_4_;
  fVar13 = 3.0 - fVar16 * fVar15 * fVar15;
  fStack_500 = fVar15 * 0.5 * fVar13 * fVar16 * 0.5;
  fStack_504 = param_2[8];
  uVar11 = 2;
  local_var_508 = 2;
  fStack_518 = 0.0;
  fStack_514 = 0.0;
  fStack_510 = 1.0;
  fStack_50c = 3.4028235e+38;
  function_645340(&local_var_4f8,fVar13,param_2 + 4,&fStack_518);
  fVar17 = fStack_4d8 * 0.0;
  fVar18 = fStack_4d4 * 0.0;
  fVar19 = fStack_4d0 * 0.0;
  fVar20 = fStack_4cc * 0.0;
  fVar15 = fStack_4d8 * 1.0;
  fVar13 = fStack_4d4 * 1.0;
  fVar16 = fStack_4d0 * 1.0;
  fVar14 = fStack_4cc * 1.0;
  fVar21 = (float)local_var_4f8 * 0.0;
  fVar22 = local_var_4f8._4_4_ * 0.0;
  fVar23 = (float)local_var_4f0 * 0.0;
  fVar24 = local_var_4f0._4_4_ * 0.0;
  fStack_4d8 = fStack_4e8 * 1.0 + fVar21 + fVar17;
  fStack_4d4 = fStack_4e4 * 1.0 + fVar22 + fVar18;
  fStack_4d0 = fStack_4e0 * 1.0 + fVar23 + fVar19;
  fStack_4cc = fStack_4dc * 1.0 + fVar24 + fVar20;
  local_var_4f8 = CONCAT44(local_var_4f8._4_4_ * -1.0 + fStack_4e4 * 0.0 + fVar18,
                        (float)local_var_4f8 * -1.0 + fStack_4e8 * 0.0 + fVar17);
  local_var_4f0 = CONCAT44(local_var_4f0._4_4_ * -1.0 + fStack_4dc * 0.0 + fVar20,
                        (float)local_var_4f0 * -1.0 + fStack_4e0 * 0.0 + fVar19);
  fStack_4e8 = fStack_4e8 * 0.0 + fVar21 + fVar15;
  fStack_4e4 = fStack_4e4 * 0.0 + fVar22 + fVar13;
  fStack_4e0 = fStack_4e0 * 0.0 + fVar23 + fVar16;
  fStack_4dc = fStack_4dc * 0.0 + fVar24 + fVar14;
  AdvancedProcessor_StateManager0(&local_var_528,&local_var_4f8);
  local_var_480 = local_var_528._4_4_;
  local_var_47c = local_var_520;
  local_var_478 = local_var_51c;
  local_var_474 = (int32_t)local_var_528;
  local_var_470 = local_var_4c8;
  local_var_46c = local_var_4c4;
  local_var_468 = local_var_4c0;
  local_var_320 = 0;
  local_var_318 = 0;
  local_var_310 = 0xffffffff;
  bStack_300 = 0;
  plStack_2f8 = alStack_2e8;
  lStack_4b8 = 0x10;
  local_var_2f0 = 0x10;
  plocal_var_328 = &memory_allocator_3248_ptr;
  plVar8 = alStack_2e8;
  do {
    Function_c7298c8f(plVar8);
    plVar8 = plVar8 + 4;
    lStack_4b8 = lStack_4b8 + -1;
  } while (lStack_4b8 != 0);
  local_var_4a8 = 3;
  lStack_410 = *(int64_t *)(param_2 + 10);
  plocal_var_418 = &memory_allocator_3600_ptr;
  if (lStack_410 != 0) {
    uVar11 = *(int32_t *)(lStack_410 + 8);
  }
  if (*(int64_t *)(param_2 + 10) != 0) {
    local_var_4a8 = 7;
  }
  pplocal_var_560 = &plocal_var_418;
  if (*(int64_t *)(param_2 + 10) == 0) {
    pplocal_var_560 = (void **)0x0;
  }
  plStack_568 = &lStack_4b8;
  lStack_4b0 = lStack_4b8;
  local_var_408 = uVar11;
  (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x2c0))
            (*(int64_t **)(param_1 + 0xb8),&local_var_508,&local_var_480,&plocal_var_328);
  uVar10 = 0;
  if ((uint)bStack_300 + local_var_2f0._4_4_ != 0) {
    plVar8 = alStack_2e8;
    do {
      lVar6 = 0;
      plVar1 = (int64_t *)plVar8[1];
      (**(code **)(*plVar1 + 0x38))(plVar1);
      plVar2 = (int64_t *)*plVar8;
      (**(code **)(*plVar1 + 0x98))(plVar1,stack_array_3d8);
      (**(code **)(*plVar2 + 0x90))(plVar2,&fStack_4a0);
      alStack_398[0] = 0;
      alStack_398[1] = 0;
      local_var_380 = 3;
      alStack_3b8[0] = 0;
      alStack_3b8[1] = 0;
      local_var_3a0 = 3;
      plocal_var_440 = &processed_var_4824_ptr;
      plStack_438 = alStack_398;
      plStack_430 = alStack_3b8;
      local_var_428 = 0;
      local_var_424 = 1;
      local_var_420 = 0;
      local_var_458 = 0;
      local_var_528 = &local_var_508;
      lStack_460 = lVar6;
      alStack_3b8[2] = lVar6;
      alStack_398[2] = lVar6;
      (**(code **)(*plVar1 + 0x48))(plVar1,stack_array_360);
      plocal_var_3e0 = stack_array_360;
      puVar3 = (int32_t *)SystemCore_Initializer(&fStack_4a0,stack_array_370,stack_array_3d8);
      fVar17 = fStack_3c8 * 2.0;
      fVar16 = fStack_3c4 * 2.0;
      fVar15 = fStack_3c0 * 2.0;
      fVar14 = fStack_494 * fStack_494 - 0.5;
      fVar13 = fStack_49c * fVar16 + fStack_4a0 * fVar17 + fStack_498 * fVar15;
      fStack_3e8 = fStack_488 +
                   (fStack_4a0 * fVar16 - fStack_49c * fVar17) * fStack_494 + fVar14 * fVar15 +
                   fStack_498 * fVar13;
      fStack_3ec = fStack_48c +
                   (fStack_498 * fVar17 - fStack_4a0 * fVar15) * fStack_494 + fVar14 * fVar16 +
                   fStack_49c * fVar13;
      fStack_3f0 = fStack_490 +
                   (fStack_49c * fVar15 - fStack_498 * fVar16) * fStack_494 + fVar14 * fVar17 +
                   fStack_4a0 * fVar13;
      local_var_400 = *puVar3;
      local_var_3fc = puVar3[1];
      local_var_3f8 = puVar3[2];
      local_var_3f4 = puVar3[3];
      lStack_538 = system_system_data_memory + 0x48;
      local_var_540 = 0x3f800000;
      local_var_548 = 0x3dcccccd;
      local_var_550 = 0x3dcccccd;
      pplocal_var_558 = &plocal_var_440;
      pplocal_var_560 = (void **)CONCAT44(pplocal_var_560._4_4_,1);
      plStack_568 = &lStack_460;
      PxGenerateContacts(&local_var_528,&plocal_var_3e0,&local_var_480,&local_var_400);
      iVar7 = 0;
      plVar9 = plStack_430;
      if (plStack_430[1] - *plStack_430 >> 6 != 0) {
        do {
          lVar4 = *plVar9;
          if ((*(float *)(lVar4 + 0xc + lVar6) <= 0.0) && (*(int *)(param_3 + 0x2000) < 0x80)) {
            fStack_510 = *(float *)(lVar4 + 0x18 + lVar6);
            fStack_514 = *(float *)(lVar4 + 0x14 + lVar6);
            fStack_518 = *(float *)(lVar4 + 0x10 + lVar6);
            fStack_50c = 3.4028235e+38;
            local_var_448 = *(int32_t *)(lVar4 + 8 + lVar6);
            local_var_44c = *(int32_t *)(lVar4 + 4 + lVar6);
            fStack_450 = *(float *)(lVar4 + lVar6);
            local_var_444 = 0x7f7fffff;
            fStack_4e0 = 0.0;
            local_var_4f8 = *(uint64_t *)(plVar2[2] + 8);
            lVar4 = (**(code **)(*plVar1 + 0xd8))(plVar1,*(int32_t *)(lVar4 + 0x34 + lVar6));
            if (lVar4 == 0) {
              local_var_4f0 = 0;
            }
            else {
              local_var_4f0 = *(uint64_t *)(*(int64_t *)(lVar4 + 0x10) + 8);
            }
            fVar15 = *(float *)(*plStack_430 + 0xc + lVar6);
            fStack_4cc = fStack_450;
            local_var_4c8 = local_var_44c;
            local_var_4c4 = local_var_448;
            local_var_4c0 = local_var_444;
            fStack_4d8 = fStack_514;
            fStack_4d4 = fStack_510;
            fStack_4d0 = fStack_50c;
            puVar5 = (uint64_t *)((int64_t)*(int *)(param_3 + 0x2000) * 0x40 + param_3);
            *puVar5 = local_var_4f8;
            puVar5[1] = local_var_4f0;
            fStack_4e8 = -fVar15;
            fStack_4e4 = 0.0;
            fStack_4dc = fStack_518;
            *(float *)(puVar5 + 2) = -fVar15;
            *(int32_t *)((int64_t)puVar5 + 0x14) = 0;
            *(float *)(puVar5 + 3) = fStack_4e0;
            *(float *)((int64_t)puVar5 + 0x1c) = fStack_518;
            puVar5[4] = CONCAT44(fStack_510,fStack_514);
            puVar5[5] = CONCAT44(fStack_450,fStack_50c);
            puVar5[6] = CONCAT44(local_var_448,local_var_44c);
            puVar5[7] = CONCAT44(local_var_4bc,local_var_444);
            *(int *)(param_3 + 0x2000) = *(int *)(param_3 + 0x2000) + 1;
            plVar9 = plStack_430;
          }
          iVar7 = iVar7 + 1;
          lVar6 = lVar6 + 0x40;
        } while ((uint64_t)(int64_t)iVar7 < (uint64_t)(plVar9[1] - *plVar9 >> 6));
      }
      plocal_var_440 = &processed_var_4848_ptr;
      if (alStack_3b8[0] != 0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      if (alStack_398[0] != 0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      uVar10 = uVar10 + 1;
      plVar8 = plVar8 + 4;
    } while (uVar10 < (uint)bStack_300 + local_var_2f0._4_4_);
  }
  plocal_var_418 = &processed_var_4032_ptr;
  plocal_var_328 = &memory_allocator_3472_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_e8 ^ (uint64_t)stack_array_588);
}
// 函数: void function_3cc7c0(uint64_t *param_1)
void function_3cc7c0(uint64_t *param_1)
{
  *param_1 = &memory_allocator_3440_ptr;
  *param_1 = &memory_allocator_3472_ptr;
  return;
}
// 函数: void function_3cc7f0(void)
void function_3cc7f0(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// 函数: void function_3ccbf0(int64_t param_1,int32_t *param_2,int64_t param_3)
void function_3ccbf0(int64_t param_1,int32_t *param_2,int64_t param_3)
{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int32_t uVar6;
  void **ppuVar7;
  ushort uVar8;
  ushort astack_special_x_8 [4];
  uint64_t local_var_128;
  uint64_t local_var_120;
  ushort local_var_118;
  int32_t local_var_110;
  int32_t local_var_10c;
  int32_t local_var_108;
  int32_t local_var_100;
  int32_t local_var_fc;
  int32_t local_var_f8;
  void *plocal_var_f0;
  int64_t lStack_e8;
  int32_t local_var_e0;
  void *plocal_var_d8;
  int64_t lStack_d0;
  int64_t *plStack_c8;
  int32_t local_var_c0;
  int16_t local_var_b8;
  uint64_t local_var_b4;
  int32_t local_var_ac;
  int32_t local_var_a8;
  int32_t local_var_a4;
  int32_t local_var_a0;
  int32_t local_var_9c;
  uint64_t local_var_98;
  int8_t local_var_90;
  uint64_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  int32_t local_var_3c;
  uint64_t local_var_38;
  local_var_38 = 0xfffffffffffffffe;
  local_var_f8 = param_2[2];
  local_var_fc = param_2[1];
  local_var_100 = *param_2;
  local_var_108 = param_2[6];
  local_var_10c = param_2[5];
  local_var_110 = param_2[4];
  lStack_d0 = 0;
  plStack_c8 = (int64_t *)0x0;
  local_var_c0 = 0xffffffff;
  local_var_b8 = 0;
  local_var_b4 = 0;
  local_var_ac = 0;
  local_var_a8 = 0;
  local_var_a4 = 0;
  local_var_a0 = 0;
  local_var_9c = 0x7f7fffff;
  local_var_98 = 0;
  local_var_90 = 0;
  local_var_88 = 0;
  local_var_80 = 0;
  plocal_var_d8 = &memory_allocator_3376_ptr;
  local_var_120 = 0;
  local_var_128 = 0;
  local_var_118 = 3;
  lStack_e8 = *(int64_t *)(param_2 + 10);
  plocal_var_f0 = &memory_allocator_3600_ptr;
  uVar6 = 2;
  local_var_e0 = uVar6;
  if (lStack_e8 != 0) {
    local_var_e0 = *(int32_t *)(lStack_e8 + 8);
  }
  if (*(int64_t *)(param_2 + 10) == 0) {
    uVar8 = 3;
  }
  else {
    uVar8 = 7;
    local_var_118 = 7;
  }
  ppuVar7 = &plocal_var_f0;
  if (*(int64_t *)(param_2 + 10) == 0) {
    ppuVar7 = (void **)0x0;
  }
  if ((*(byte *)(param_2 + 9) & 1) != 0) {
    local_var_118 = uVar8 | 0x10;
  }
  astack_special_x_8[0] = (ushort)(*(byte *)(param_2 + 9) & 2) << 6 | 0x403;
  cVar2 = (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x2b0))
                    (*(int64_t **)(param_1 + 0xb8),&local_var_100,&local_var_110,param_2[8],&plocal_var_d8,
                     astack_special_x_8,&local_var_128,ppuVar7,0);
  plVar1 = plStack_c8;
  lVar4 = lStack_d0;
  if (cVar2 != '\0') {
    iVar3 = (**(code **)(*plStack_c8 + 0x38))(plStack_c8);
    local_var_78 = *(uint64_t *)(*(int64_t *)(lVar4 + 0x10) + 8);
    lVar4 = (**(code **)(*plVar1 + 0xd8))(plVar1,local_var_c0);
    if (lVar4 == 0) {
      local_var_70 = 0;
    }
    else {
      local_var_70 = *(uint64_t *)(*(int64_t *)(lVar4 + 0x10) + 8);
    }
    if (iVar3 == 0) {
      uVar6 = 1;
    }
    else if (iVar3 != 1) {
      if (iVar3 == 2) {
        uVar6 = 3;
      }
      else if (iVar3 == 3) {
        uVar6 = 4;
      }
      else if (iVar3 == 4) {
        uVar6 = 5;
      }
      else if (iVar3 == 5) {
        uVar6 = 6;
      }
      else {
        uVar6 = 0;
        if (iVar3 == 6) {
          uVar6 = 7;
        }
      }
    }
    puVar5 = (uint64_t *)((int64_t)*(int *)(param_3 + 0x40) * 0x40 + param_3);
    *puVar5 = local_var_78;
    puVar5[1] = local_var_70;
    puVar5[2] = (uint64_t)(iVar3 == 6) << 0x20;
    puVar5[3] = CONCAT44((int32_t)local_var_b4,uVar6);
    puVar5[4] = CONCAT44(local_var_ac,local_var_b4._4_4_);
    puVar5[5] = CONCAT44(local_var_a8,0x7f7fffff);
    puVar5[6] = CONCAT44(local_var_a0,local_var_a4);
    puVar5[7] = CONCAT44(local_var_3c,0x7f7fffff);
    *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + 1;
  }
  return;
}
// 函数: void function_3ccf40(void)
void function_3ccf40(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3cd350(int64_t param_1,int32_t *param_2,int64_t param_3)
void function_3cd350(int64_t param_1,int32_t *param_2,int64_t param_3)
{
  uint64_t *puVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  int32_t uVar6;
  ushort uVar7;
  float fVar8;
  int8_t stack_array_1e8 [32];
  void **pplocal_var_1c8;
  int16_t *plocal_var_1c0;
  uint64_t *plocal_var_1b8;
  void **pplocal_var_1b0;
  uint64_t local_var_1a8;
  int16_t stack_array_198 [2];
  int32_t local_var_194;
  int32_t local_var_190;
  int32_t local_var_18c;
  int32_t local_var_188;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  uint64_t local_var_170;
  uint64_t local_var_168;
  ushort local_var_160;
  int32_t local_var_158;
  int32_t local_var_154;
  int32_t local_var_150;
  void *plocal_var_148;
  int64_t lStack_140;
  int64_t *plStack_138;
  uint local_var_130;
  int16_t local_var_128;
  uint64_t local_var_124;
  int32_t local_var_11c;
  int32_t local_var_118;
  int32_t local_var_114;
  int32_t local_var_110;
  int32_t local_var_10c;
  uint64_t local_var_108;
  int8_t local_var_100;
  uint64_t local_var_f8;
  uint64_t local_var_f0;
  void *plocal_var_e8;
  int64_t lStack_e0;
  int32_t local_var_d8;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  int32_t local_var_b8;
  uint local_var_b4;
  int32_t local_var_b0;
  int32_t local_var_ac;
  int32_t local_var_a8;
  int32_t local_var_a4;
  int32_t local_var_a0;
  int32_t local_var_9c;
  int32_t local_var_98;
  int32_t local_var_94;
  int32_t local_var_90;
  int32_t local_var_8c;
  uint64_t local_var_88;
  uint64_t local_var_78;
  int8_t stack_array_70 [48];
  uint64_t local_var_40;
  local_var_78 = 0xfffffffffffffffe;
  local_var_40 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1e8;
  local_var_150 = param_2[2];
  local_var_154 = param_2[1];
  local_var_158 = *param_2;
  fStack_178 = (float)param_2[6];
  fStack_17c = (float)param_2[5];
  fStack_180 = (float)param_2[4];
  fVar8 = SQRT(fStack_17c * fStack_17c + fStack_180 * fStack_180 + fStack_178 * fStack_178);
  if (0.0 < fVar8) {
    fVar8 = 1.0 / fVar8;
    fStack_180 = fVar8 * fStack_180;
    fStack_17c = fVar8 * fStack_17c;
    fStack_178 = fVar8 * fStack_178;
  }
  pplocal_var_1b0 = (void **)0x0;
  lStack_140 = 0;
  plStack_138 = (int64_t *)0x0;
  local_var_130 = 0xffffffff;
  local_var_128 = 0;
  local_var_124 = 0;
  local_var_11c = 0;
  local_var_118 = 0;
  local_var_114 = 0;
  local_var_110 = 0;
  local_var_10c = 0x7f7fffff;
  local_var_108 = 0;
  local_var_100 = 0;
  local_var_f8 = 0;
  local_var_f0 = 0;
  plocal_var_148 = &memory_allocator_3376_ptr;
  local_var_168 = 0;
  local_var_170 = 0;
  local_var_160 = 3;
  lStack_e0 = *(int64_t *)(param_2 + 10);
  plocal_var_e8 = &memory_allocator_3600_ptr;
  uVar6 = 2;
  local_var_d8 = uVar6;
  if (lStack_e0 != 0) {
    local_var_d8 = *(int32_t *)(lStack_e0 + 8);
  }
  if (*(int64_t *)(param_2 + 10) == 0) {
    uVar7 = 3;
  }
  else {
    uVar7 = 7;
    local_var_160 = 7;
    pplocal_var_1b0 = &plocal_var_e8;
  }
  if ((*(byte *)(param_2 + 9) & 1) != 0) {
    local_var_160 = uVar7 | 0x10;
  }
  stack_array_198[0] = 0x403;
  local_var_1a8 = 0;
  plocal_var_1b8 = &local_var_170;
  plocal_var_1c0 = stack_array_198;
  pplocal_var_1c8 = &plocal_var_148;
  cVar3 = (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x2b0))
                    (*(int64_t **)(param_1 + 0xb8),&local_var_158,&fStack_180,param_2[8]);
  plVar2 = plStack_138;
  lVar5 = lStack_140;
  if (cVar3 != '\0') {
    iVar4 = (**(code **)(*plStack_138 + 0x38))(plStack_138);
    local_var_c8 = *(uint64_t *)(*(int64_t *)(lVar5 + 0x10) + 8);
    lVar5 = (**(code **)(*plVar2 + 0xd8))(plVar2,local_var_130);
    if (lVar5 == 0) {
      local_var_c0 = 0;
    }
    else {
      local_var_c0 = *(uint64_t *)(*(int64_t *)(lVar5 + 0x10) + 8);
    }
    local_var_b8 = 0;
    local_var_ac = (int32_t)local_var_124;
    local_var_a8 = local_var_124._4_4_;
    local_var_a4 = local_var_11c;
    local_var_a0 = 0x7f7fffff;
    local_var_18c = local_var_110;
    local_var_188 = 0x7f7fffff;
    local_var_9c = local_var_118;
    local_var_98 = local_var_114;
    local_var_94 = local_var_110;
    local_var_90 = 0x7f7fffff;
    local_var_b4 = (uint)(iVar4 == 6);
    if (iVar4 == 0) {
      uVar6 = 1;
    }
    else if (iVar4 != 1) {
      if (iVar4 == 2) {
        uVar6 = 3;
      }
      else if (iVar4 == 3) {
        uVar6 = 4;
      }
      else if (iVar4 == 4) {
        uVar6 = 5;
      }
      else if (iVar4 == 5) {
        uVar6 = 6;
      }
      else {
        uVar6 = 0;
        if (iVar4 == 6) {
          uVar6 = 7;
        }
      }
    }
    local_var_194 = (int32_t)local_var_108;
    local_var_190 = local_var_108._4_4_;
    local_var_88 = local_var_108;
    local_var_b0 = uVar6;
    lVar5 = (**(code **)(*plVar2 + 0x48))(plVar2,stack_array_70);
    lVar5 = (**(code **)(**(int64_t **)(lVar5 + 0x28) + 0x60))();
    local_var_8c = *(int32_t *)(lVar5 + (uint64_t)local_var_130 * 4);
    lVar5 = (int64_t)*(int *)(param_3 + 0x48);
    puVar1 = (uint64_t *)(param_3 + lVar5 * 0x48);
    *puVar1 = local_var_c8;
    puVar1[1] = local_var_c0;
    puVar1 = (uint64_t *)(param_3 + 0x10 + lVar5 * 0x48);
    *puVar1 = CONCAT44(local_var_b4,local_var_b8);
    puVar1[1] = CONCAT44(local_var_ac,local_var_b0);
    puVar1 = (uint64_t *)(param_3 + 0x20 + lVar5 * 0x48);
    *puVar1 = CONCAT44(local_var_a4,local_var_a8);
    puVar1[1] = CONCAT44(local_var_9c,local_var_a0);
    puVar1 = (uint64_t *)(param_3 + 0x30 + lVar5 * 0x48);
    *puVar1 = CONCAT44(local_var_94,local_var_98);
    puVar1[1] = CONCAT44(local_var_8c,local_var_90);
    *(uint64_t *)(param_3 + 0x40 + lVar5 * 0x48) = local_var_88;
    *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x48) + 1;
  }
  plocal_var_e8 = &processed_var_4032_ptr;
  plocal_var_148 = &memory_allocator_3408_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_40 ^ (uint64_t)stack_array_1e8);
}
// 函数: void function_3cd740(int64_t param_1,float *param_2,int64_t param_3)
void function_3cd740(int64_t param_1,float *param_2,int64_t param_3)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  void **ppuVar7;
  int64_t lVar8;
  uint64_t *puVar9;
  float *pfVar10;
  int32_t uVar11;
  float fVar13;
  int8_t auVar12 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int16_t astack_special_x_8 [4];
  uint64_t local_var_1c8;
  uint64_t local_var_1c0;
  uint64_t local_var_1b8;
  uint64_t local_var_1b0;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  uint64_t local_var_188;
  uint64_t local_var_180;
  uint64_t local_var_178;
  uint64_t local_var_170;
  int16_t local_var_168;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  int32_t local_var_150;
  float fStack_14c;
  float fStack_148;
  void *plocal_var_138;
  int64_t lStack_130;
  int64_t *plStack_128;
  int32_t local_var_120;
  ushort local_var_118;
  uint64_t local_var_114;
  int32_t local_var_10c;
  uint64_t local_var_108;
  uint64_t local_var_100;
  int8_t local_var_f0;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  void *plocal_var_d8;
  int64_t lStack_d0;
  int32_t local_var_c8;
  int32_t local_var_c0;
  int32_t local_var_bc;
  int32_t local_var_b8;
  int32_t local_var_b4;
  int32_t local_var_b0;
  int32_t local_var_ac;
  int32_t local_var_a8;
  uint64_t local_var_a0;
  local_var_a0 = 0xfffffffffffffffe;
  fVar1 = param_2[0x18];
  fVar2 = param_2[0x17];
  fVar3 = param_2[0x16];
  fVar4 = param_2[0x1a];
  fVar15 = param_2[4] - *param_2;
  fVar16 = fVar15 * fVar15 + (param_2[5] - param_2[1]) * (param_2[5] - param_2[1]) +
           (param_2[6] - param_2[2]) * (param_2[6] - param_2[2]);
  auVar12 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
  fVar15 = auVar12._0_4_;
  fStack_148 = fVar15 * 0.5 * (3.0 - fVar16 * fVar15 * fVar15) * fVar16 * 0.5;
  fStack_14c = param_2[8];
  uVar11 = 2;
  local_var_150 = 2;
  local_var_1c8 = 0;
  local_var_1c0._0_4_ = 0x3f800000;
  local_var_1c0._4_4_ = 0x7f7fffff;
  pfVar10 = param_2;
  function_645340(&local_var_1b8,0,param_2 + 4,&local_var_1c8);
  fVar17 = fStack_198 * 0.0;
  fVar18 = fStack_194 * 0.0;
  fVar19 = fStack_190 * 0.0;
  fVar20 = fStack_18c * 0.0;
  fVar15 = fStack_198 * 1.0;
  fVar16 = fStack_194 * 1.0;
  fVar13 = fStack_190 * 1.0;
  fVar14 = fStack_18c * 1.0;
  fVar21 = (float)local_var_1b8 * 0.0;
  fVar22 = local_var_1b8._4_4_ * 0.0;
  fVar23 = (float)local_var_1b0 * 0.0;
  fVar24 = local_var_1b0._4_4_ * 0.0;
  fStack_198 = fVar21 + fStack_1a8 * 1.0 + fVar17;
  fStack_194 = fVar22 + fStack_1a4 * 1.0 + fVar18;
  fStack_190 = fVar23 + fStack_1a0 * 1.0 + fVar19;
  fStack_18c = fVar24 + fStack_19c * 1.0 + fVar20;
  local_var_1b8 = CONCAT44(local_var_1b8._4_4_ * -1.0 + fStack_1a4 * 0.0 + fVar18,
                        (float)local_var_1b8 * -1.0 + fStack_1a8 * 0.0 + fVar17);
  local_var_1b0 = CONCAT44(local_var_1b0._4_4_ * -1.0 + fStack_19c * 0.0 + fVar20,
                        (float)local_var_1b0 * -1.0 + fStack_1a0 * 0.0 + fVar19);
  local_var_188 = *(uint64_t *)(pfVar10 + 0x12);
  local_var_180 = *(uint64_t *)(pfVar10 + 0x14);
  fStack_1a8 = fVar21 + fStack_1a8 * 0.0 + fVar15;
  fStack_1a4 = fVar22 + fStack_1a4 * 0.0 + fVar16;
  fStack_1a0 = fVar23 + fStack_1a0 * 0.0 + fVar13;
  fStack_19c = fVar24 + fStack_19c * 0.0 + fVar14;
  AdvancedProcessor_StateManager0(&local_var_1c8,&local_var_1b8);
  local_var_c0 = local_var_1c8._4_4_;
  local_var_bc = (int32_t)local_var_1c0;
  local_var_b8 = local_var_1c0._4_4_;
  local_var_b4 = (int32_t)local_var_1c8;
  local_var_b0 = (int32_t)local_var_188;
  local_var_ac = local_var_188._4_4_;
  local_var_a8 = (int32_t)local_var_180;
  lStack_130 = 0;
  plStack_128 = (int64_t *)0x0;
  local_var_120 = 0xffffffff;
  local_var_118 = 0;
  local_var_114 = 0;
  local_var_10c = 0;
  local_var_108 = 0;
  local_var_100 = 0x7f7fffff00000000;
  local_var_f0 = 0;
  local_var_e8 = 0;
  local_var_e0 = 0;
  plocal_var_138 = &memory_allocator_3312_ptr;
  local_var_170 = 0;
  local_var_178 = 0;
  local_var_168 = 3;
  lStack_d0 = *(int64_t *)(param_2 + 0x1c);
  plocal_var_d8 = &memory_allocator_3600_ptr;
  if (lStack_d0 == 0) {
    local_var_c8 = 2;
  }
  else {
    local_var_c8 = *(int32_t *)(lStack_d0 + 8);
  }
  if (*(int64_t *)(param_2 + 0x1c) != 0) {
    local_var_168 = 7;
  }
  astack_special_x_8[0] = 0x603;
  ppuVar7 = &plocal_var_d8;
  if (*(int64_t *)(param_2 + 0x1c) == 0) {
    ppuVar7 = (void **)0x0;
  }
  fStack_160 = fVar3;
  fStack_15c = fVar2;
  fStack_158 = fVar1;
  cVar5 = (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x2b8))
                    (*(int64_t **)(param_1 + 0xb8),&local_var_150,&local_var_c0,&fStack_160,fVar4,
                     &plocal_var_138,astack_special_x_8,&local_var_178,ppuVar7,0,0);
  if (cVar5 != '\0') {
    local_var_1b8 = *(uint64_t *)(*(int64_t *)(lStack_130 + 0x10) + 8);
    lVar8 = (**(code **)(*plStack_128 + 0xd8))(plStack_128,local_var_120);
    if (lVar8 == 0) {
      local_var_1b0 = 0;
    }
    else {
      local_var_1b0 = *(uint64_t *)(*(int64_t *)(lVar8 + 0x10) + 8);
    }
    fStack_1a8 = (float)local_var_100._4_4_;
    if ((local_var_118 & 1) == 0) {
      local_var_1c8 = *(uint64_t *)(param_2 + 0x12);
      local_var_1c0 = *(uint64_t *)(param_2 + 0x14);
    }
    else {
      local_var_1c8 = local_var_114;
      local_var_1c0 = CONCAT44(0x7f7fffff,local_var_10c);
    }
    fStack_19c = (float)local_var_1c8;
    fStack_198 = (float)((uint64_t)local_var_1c8 >> 0x20);
    fStack_194 = (float)local_var_1c0;
    fStack_190 = (float)((uint64_t)local_var_1c0 >> 0x20);
    local_var_1c0 = CONCAT44(0x7f7fffff,fStack_194);
    fStack_18c = (float)(int32_t)local_var_108;
    local_var_188 = CONCAT44((int32_t)local_var_100,local_var_108._4_4_);
    local_var_180 = CONCAT44(local_var_180._4_4_,0x7f7fffff);
    iVar6 = (**(code **)(*plStack_128 + 0x38))();
    fStack_1a4 = (float)(uint)(iVar6 == 6);
    iVar6 = (**(code **)(*plStack_128 + 0x38))();
    if (iVar6 == 0) {
      uVar11 = 1;
    }
    else if (iVar6 != 1) {
      if (iVar6 == 2) {
        uVar11 = 3;
      }
      else if (iVar6 == 3) {
        uVar11 = 4;
      }
      else if (iVar6 == 4) {
        uVar11 = 5;
      }
      else if (iVar6 == 5) {
        uVar11 = 6;
      }
      else {
        uVar11 = 0;
        if (iVar6 == 6) {
          uVar11 = 7;
        }
      }
    }
    puVar9 = (uint64_t *)((int64_t)*(int *)(param_3 + 0x40) * 0x40 + param_3);
    *puVar9 = local_var_1b8;
    puVar9[1] = local_var_1b0;
    puVar9[2] = CONCAT44(fStack_1a4,fStack_1a8);
    puVar9[3] = CONCAT44(fStack_19c,uVar11);
    puVar9[4] = CONCAT44(fStack_194,fStack_198);
    puVar9[5] = CONCAT44(fStack_18c,fStack_190);
    puVar9[6] = local_var_188;
    puVar9[7] = local_var_180;
    *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + 1;
  }
  return;
}