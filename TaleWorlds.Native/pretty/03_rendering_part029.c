#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part029.c - 4 个函数
// 函数: void function_2814d0(int64_t *param_1,int64_t param_2,int64_t param_3,int64_t param_4,uint param_5
void function_2814d0(int64_t *param_1,int64_t param_2,int64_t param_3,int64_t param_4,uint param_5
                  )
{
  uint64_t uVar1;
  int32_t *puVar2;
  int64_t lVar3;
  uint uVar4;
  uint64_t uVar5;
  uint uVar6;
  int64_t lVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  int32_t uVar16;
  int32_t uVar17;
  int32_t uVar18;
  int32_t uVar19;
  int32_t uVar20;
  int32_t uVar21;
  int32_t uVar22;
  int32_t uVar23;
  int64_t *aplStackX_18 [2];
  int32_t local_var_b8;
  int32_t local_var_b4;
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
  int32_t local_var_88;
  int32_t local_var_84;
  int32_t local_var_80;
  int32_t local_var_7c;
  int8_t stack_array_78 [64];
  if ((param_5 >> 2 & 1) == 0) {
    if ((param_5 & 10) != 0) {
      uVar1 = *(uint64_t *)(param_3 + 0x60);
      *(uint64_t *)((int64_t)param_1 + 0x214) = *(uint64_t *)(param_3 + 0x58);
      *(uint64_t *)((int64_t)param_1 + 0x21c) = uVar1;
      uVar1 = *(uint64_t *)(param_3 + 0x70);
      *(uint64_t *)((int64_t)param_1 + 0x224) = *(uint64_t *)(param_3 + 0x68);
      *(uint64_t *)((int64_t)param_1 + 0x22c) = uVar1;
      uVar1 = *(uint64_t *)(param_3 + 0x80);
      *(uint64_t *)((int64_t)param_1 + 0x234) = *(uint64_t *)(param_3 + 0x78);
      *(uint64_t *)((int64_t)param_1 + 0x23c) = uVar1;
      *(int32_t *)((int64_t)param_1 + 0x244) = *(int32_t *)(param_3 + 0x88);
      uVar8 = *(int32_t *)(param_3 + 0x18);
      uVar9 = *(int32_t *)(param_3 + 0x1c);
      uVar10 = *(int32_t *)(param_3 + 0x20);
      uVar11 = *(int32_t *)(param_3 + 0x24);
      uVar12 = *(int32_t *)(param_3 + 0x28);
      uVar13 = *(int32_t *)(param_3 + 0x2c);
      uVar14 = *(int32_t *)(param_3 + 0x30);
      uVar15 = *(int32_t *)(param_3 + 0x34);
      uVar16 = *(int32_t *)(param_3 + 0x38);
      uVar17 = *(int32_t *)(param_3 + 0x3c);
      uVar18 = *(int32_t *)(param_3 + 0x40);
      uVar19 = *(int32_t *)(param_3 + 0x44);
      uVar20 = *(int32_t *)(param_3 + 0x48);
      uVar21 = *(int32_t *)(param_3 + 0x4c);
      uVar22 = *(int32_t *)(param_3 + 0x50);
      uVar23 = *(int32_t *)(param_3 + 0x54);
      local_var_b8 = uVar8;
      local_var_b4 = uVar9;
      local_var_b0 = uVar10;
      local_var_ac = uVar11;
      local_var_a8 = uVar12;
      local_var_a4 = uVar13;
      local_var_a0 = uVar14;
      local_var_9c = uVar15;
      local_var_98 = uVar16;
      local_var_94 = uVar17;
      local_var_90 = uVar18;
      local_var_8c = uVar19;
      local_var_88 = uVar20;
      local_var_84 = uVar21;
      local_var_80 = uVar22;
      local_var_7c = uVar23;
      if (param_4 != 0) {
        puVar2 = (int32_t *)
                 function_3310f0(param_5 & 10,stack_array_78,&local_var_b8,param_4 + 0x18,
                               1.0 - (*(float *)(param_2 + 0x13c) - *(float *)(param_2 + 0x144)) /
                                     *(float *)(param_2 + 0x13c));
        uVar8 = *puVar2;
        uVar9 = puVar2[1];
        uVar10 = puVar2[2];
        uVar11 = puVar2[3];
        uVar12 = puVar2[4];
        uVar13 = puVar2[5];
        uVar14 = puVar2[6];
        uVar15 = puVar2[7];
        uVar16 = puVar2[8];
        uVar17 = puVar2[9];
        uVar18 = puVar2[10];
        uVar19 = puVar2[0xb];
        uVar20 = puVar2[0xc];
        uVar21 = puVar2[0xd];
        uVar22 = puVar2[0xe];
        uVar23 = puVar2[0xf];
      }
      *(int32_t *)(param_1 + 0x66) = uVar8;
      *(int32_t *)((int64_t)param_1 + 0x334) = uVar9;
      *(int32_t *)(param_1 + 0x67) = uVar10;
      *(int32_t *)((int64_t)param_1 + 0x33c) = uVar11;
      *(int32_t *)(param_1 + 0x68) = uVar12;
      *(int32_t *)((int64_t)param_1 + 0x344) = uVar13;
      *(int32_t *)(param_1 + 0x69) = uVar14;
      *(int32_t *)((int64_t)param_1 + 0x34c) = uVar15;
      *(int32_t *)(param_1 + 0x6a) = uVar16;
      *(int32_t *)((int64_t)param_1 + 0x354) = uVar17;
      *(int32_t *)(param_1 + 0x6b) = uVar18;
      *(int32_t *)((int64_t)param_1 + 0x35c) = uVar19;
      *(int32_t *)(param_1 + 0x6c) = uVar20;
      *(int32_t *)((int64_t)param_1 + 0x364) = uVar21;
      *(int32_t *)(param_1 + 0x6d) = uVar22;
      *(int32_t *)((int64_t)param_1 + 0x36c) = uVar23;
      *(int8_t *)(param_1 + 100) = 0;
      *(int32_t *)(param_1 + 0x42) = *(int32_t *)(param_3 + 0x14);
      uVar4 = 0;
      uVar6 = (uint)(param_1[8] - param_1[7] >> 4);
      if (uVar6 != 0) {
        lVar7 = 0;
        do {
          uVar5 = (uint64_t)uVar4;
          if ((uint64_t)((*(int64_t *)(param_3 + 0x98) - *(int64_t *)(param_3 + 0x90)) / 0x1a0)
              <= uVar5) break;
          if ((param_4 == 0) ||
             ((uint64_t)((*(int64_t *)(param_4 + 0x98) - *(int64_t *)(param_4 + 0x90)) / 0x1a0)
              <= uVar5)) {
            lVar3 = 0;
          }
          else {
            lVar3 = uVar5 * 0x1a0 + *(int64_t *)(param_4 + 0x90);
          }
          function_3269f0(*(int64_t *)(param_3 + 0x90) + uVar5 * 0x1a0,param_2,
                        *(uint64_t *)(lVar7 + param_1[7]),param_5,lVar3);
          uVar4 = uVar4 + 1;
          lVar7 = lVar7 + 0x10;
        } while (uVar4 < uVar6);
      }
      (**(code **)(*param_1 + 0xf8))(param_1,param_3 + 0x1b8);
    }
    if (((param_5 >> 4 & 1) != 0) && (0 < *(int *)(param_3 + 0x170))) {
      aplStackX_18[0] = (int64_t *)0x0;
      function_3276a0(param_2,aplStackX_18,param_3 + 0x160);
      if (aplStackX_18[0] != (int64_t *)0x0) {
        (**(code **)(*aplStackX_18[0] + 0x38))();
      }
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_281770(uint64_t *param_1,uint64_t param_2)
void function_281770(uint64_t *param_1,uint64_t param_2)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  char cVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  void *puVar11;
  int64_t *plVar12;
  uint64_t uVar13;
  uint uVar14;
  int iVar15;
  int64_t lVar16;
  uint64_t uVar17;
  void *puVar18;
  bool bVar19;
  int8_t stack_array_538 [32];
  uint local_var_518;
  void **pplocal_var_510;
  uint64_t local_var_508;
  void *plocal_var_500;
  void *plocal_var_4f8;
  uint local_var_4f0;
  int32_t local_var_4e8;
  int64_t lStack_4e0;
  uint64_t local_var_4d8;
  void *plocal_var_4c8;
  void *plocal_var_4c0;
  int32_t local_var_4b8;
  uint8_t stack_array_4b0 [136];
  void *plocal_var_428;
  void *plocal_var_420;
  int32_t local_var_418;
  int8_t stack_array_410 [136];
  void *aplocal_var_388 [34];
  void *plocal_var_278;
  int64_t lStack_270;
  int32_t local_var_260;
  int64_t alStack_258 [4];
  int64_t alStack_238 [4];
  int64_t alStack_218 [6];
  void *aplocal_var_1e8 [34];
  void *plocal_var_d8;
  int64_t lStack_d0;
  int32_t local_var_c0;
  int64_t alStack_b8 [4];
  int64_t alStack_98 [4];
  int64_t alStack_78 [6];
  uint64_t local_var_48;
  local_var_4d8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_538;
  lVar9 = 0;
  local_var_518 = 0;
  local_var_508 = param_2;
  uVar6 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x1c8,8,3);
  lVar7 = function_339110(uVar6);
  lStack_4e0 = lVar7;
  CoreEngineDataTransformer(&plocal_var_500,param_1 + 0x3e);
  while ((0 < (int)local_var_4f0 && (lVar8 = strstr(plocal_var_4f8,&system_data_ff10), lVar8 != 0))) {
    iVar15 = 6;
    iVar5 = (int)lVar8 - (int)plocal_var_4f8;
    if (local_var_4f0 < iVar5 + 6U) {
      iVar15 = local_var_4f0 - iVar5;
    }
    uVar14 = iVar5 + iVar15;
    if (uVar14 < local_var_4f0) {
      lVar8 = (int64_t)(int)uVar14;
      do {
        plocal_var_4f8[lVar8 - iVar15] = plocal_var_4f8[lVar8];
        uVar14 = uVar14 + 1;
        lVar8 = lVar8 + 1;
      } while (uVar14 < local_var_4f0);
    }
    local_var_4f0 = local_var_4f0 - iVar15;
    plocal_var_4f8[local_var_4f0] = 0;
  }
  *(int32_t *)(lVar7 + 0x10) = 0;
  puVar11 = &system_buffer_ptr;
  if (plocal_var_4f8 != (void *)0x0) {
    puVar11 = plocal_var_4f8;
  }
  (**(code **)(*(int64_t *)(lVar7 + 0xb0) + 0x10))((int64_t *)(lVar7 + 0xb0),puVar11);
  uVar6 = *(uint64_t *)((int64_t)param_1 + 0x21c);
  *(uint64_t *)(lVar7 + 0x58) = *(uint64_t *)((int64_t)param_1 + 0x214);
  *(uint64_t *)(lVar7 + 0x60) = uVar6;
  uVar6 = *(uint64_t *)((int64_t)param_1 + 0x22c);
  *(uint64_t *)(lVar7 + 0x68) = *(uint64_t *)((int64_t)param_1 + 0x224);
  *(uint64_t *)(lVar7 + 0x70) = uVar6;
  uVar6 = *(uint64_t *)((int64_t)param_1 + 0x23c);
  *(uint64_t *)(lVar7 + 0x78) = *(uint64_t *)((int64_t)param_1 + 0x234);
  *(uint64_t *)(lVar7 + 0x80) = uVar6;
  *(int32_t *)(lVar7 + 0x88) = *(int32_t *)((int64_t)param_1 + 0x244);
  uVar6 = param_1[0x67];
  *(uint64_t *)(lVar7 + 0x18) = param_1[0x66];
  *(uint64_t *)(lVar7 + 0x20) = uVar6;
  uVar6 = param_1[0x69];
  *(uint64_t *)(lVar7 + 0x28) = param_1[0x68];
  *(uint64_t *)(lVar7 + 0x30) = uVar6;
  uVar1 = *(int32_t *)((int64_t)param_1 + 0x354);
  uVar2 = *(int32_t *)(param_1 + 0x6b);
  uVar3 = *(int32_t *)((int64_t)param_1 + 0x35c);
  *(int32_t *)(lVar7 + 0x38) = *(int32_t *)(param_1 + 0x6a);
  *(int32_t *)(lVar7 + 0x3c) = uVar1;
  *(int32_t *)(lVar7 + 0x40) = uVar2;
  *(int32_t *)(lVar7 + 0x44) = uVar3;
  uVar1 = *(int32_t *)((int64_t)param_1 + 0x364);
  uVar2 = *(int32_t *)(param_1 + 0x6d);
  uVar3 = *(int32_t *)((int64_t)param_1 + 0x36c);
  *(int32_t *)(lVar7 + 0x48) = *(int32_t *)(param_1 + 0x6c);
  *(int32_t *)(lVar7 + 0x4c) = uVar1;
  *(int32_t *)(lVar7 + 0x50) = uVar2;
  *(int32_t *)(lVar7 + 0x54) = uVar3;
  *(int32_t *)(lVar7 + 0x14) = *(int32_t *)(param_1 + 0x42);
  if (param_1[0x77] == 0) {
    plocal_var_428 = &memory_allocator_3432_ptr;
    plocal_var_420 = stack_array_410;
    stack_array_410[0] = 0;
    local_var_418 = 0;
    strcpy_s(stack_array_410,0x80);
    uVar14 = 1;
    local_var_518 = 1;
    puVar11 = plocal_var_420;
  }
  else {
    plocal_var_4c8 = &memory_allocator_3432_ptr;
    plocal_var_4c0 = stack_array_4b0;
    stack_array_4b0[0] = 0;
    local_var_4b8 = *(int32_t *)(param_1[0x77] + 0x20);
    strcpy_s(stack_array_4b0,0x80);
    uVar14 = 2;
    local_var_518 = 2;
    puVar11 = plocal_var_4c0;
  }
  puVar18 = &system_buffer_ptr;
  if (puVar11 != (void *)0x0) {
    puVar18 = puVar11;
  }
  (**(code **)(*(int64_t *)(lVar7 + 0x160) + 0x10))((int64_t *)(lVar7 + 0x160),puVar18);
  if ((uVar14 & 2) != 0) {
    local_var_518 = uVar14 & 0xfffffffd;
    plocal_var_4c8 = &system_state_ptr;
    uVar14 = local_var_518;
  }
  if ((uVar14 & 1) != 0) {
    local_var_518 = uVar14 & 0xfffffffe;
    plocal_var_428 = &system_state_ptr;
  }
  *(int32_t *)(lVar7 + 0x8c) = 0;
  if ((void *)*param_1 == &processed_var_9304_ptr) {
    if ((param_1[8] - (int64_t)param_1[7] & 0xfffffffffffffff0U) != 0) {
      lVar9 = *(int64_t *)param_1[7];
    }
  }
  else {
    lVar9 = (**(code **)((void *)*param_1 + 0x178))(param_1);
  }
  lVar8 = *(int64_t *)(lVar9 + 0x1b0);
  if (*(int64_t *)(lVar9 + 0x1b0) == 0) {
    lVar8 = lVar9;
  }
  *(int32_t *)(lVar7 + 0x1b8) = *(int32_t *)(lVar8 + 0x2d8);
  bVar19 = 0 < (int)local_var_4f0;
  if (0 < (int)local_var_4f0) {
    lVar9 = RenderingSystem_VertexProcessor(system_resource_state,&plocal_var_500);
    if ((bVar19) && (lVar9 != 0)) {
      bVar19 = true;
      iVar5 = (int)(*(int64_t *)(lVar9 + 0x40) - *(int64_t *)(lVar9 + 0x38) >> 4);
      if (0 < iVar5) {
        lVar8 = 0;
        plVar12 = (int64_t *)param_1[7];
        lVar9 = *(int64_t *)(lVar9 + 0x38) - (int64_t)plVar12;
        do {
          lVar16 = *(int64_t *)(lVar9 + (int64_t)plVar12);
          lVar10 = *(int64_t *)(lVar16 + 0x1b0);
          if (lVar10 == 0) {
            lVar10 = lVar16;
          }
          if (((*(int64_t *)(*plVar12 + 0x1b0) != 0) || (lVar10 != 0)) ||
             (*(float *)(*plVar12 + 0x2dc) != 0.0)) goto LAB_180281d06;
          lVar8 = lVar8 + 1;
          plVar12 = plVar12 + 2;
        } while (lVar8 < iVar5);
      }
      param_2 = local_var_508;
      if (0 < iVar5 + -1) {
        lVar9 = 0;
        lVar8 = 0;
        do {
          function_274db0(aplocal_var_1e8);
          function_274db0(aplocal_var_388);
          function_3263e0(aplocal_var_1e8,local_var_508,*(uint64_t *)(lVar8 + param_1[7]));
          function_3263e0(aplocal_var_388,local_var_508,*(uint64_t *)(lVar8 + 0x10 + param_1[7]));
          cVar4 = function_327250(aplocal_var_1e8,aplocal_var_388);
          if (cVar4 != '\0') {
            bVar19 = false;
            function_281e80(aplocal_var_388);
            function_281e80(aplocal_var_1e8);
            param_2 = local_var_508;
            break;
          }
          pplocal_var_510 = (void **)alStack_218;
          if (alStack_218[0] != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          pplocal_var_510 = (void **)alStack_238;
          if (alStack_238[0] != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          pplocal_var_510 = (void **)alStack_258;
          if (alStack_258[0] != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          pplocal_var_510 = &plocal_var_278;
          plocal_var_278 = &system_data_buffer_ptr;
          if (lStack_270 != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          lStack_270 = 0;
          local_var_260 = 0;
          plocal_var_278 = &system_state_ptr;
          aplocal_var_388[0] = &system_state_ptr;
          pplocal_var_510 = (void **)alStack_78;
          if (alStack_78[0] != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          pplocal_var_510 = (void **)alStack_98;
          if (alStack_98[0] != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          pplocal_var_510 = (void **)alStack_b8;
          if (alStack_b8[0] != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          pplocal_var_510 = &plocal_var_d8;
          plocal_var_d8 = &system_data_buffer_ptr;
          if (lStack_d0 != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          lStack_d0 = 0;
          local_var_c0 = 0;
          plocal_var_d8 = &system_state_ptr;
          pplocal_var_510 = aplocal_var_1e8;
          aplocal_var_1e8[0] = &system_state_ptr;
          lVar9 = lVar9 + 1;
          lVar8 = lVar8 + 0x10;
          param_2 = local_var_508;
        } while (lVar9 < iVar5 + -1);
      }
    }
    else {
LAB_180281d06:
      bVar19 = false;
    }
  }
  plVar12 = (int64_t *)(lVar7 + 0x90);
  function_284720(plVar12);
  *(bool *)(lVar7 + 0x1c4) = bVar19;
  if (bVar19 == false) {
    uVar13 = (int64_t)(param_1[8] - param_1[7]) >> 4;
    uVar17 = uVar13 & 0xffffffff;
    function_284580(plVar12,uVar13 & 0xffffffff);
    uVar6 = local_var_508;
    lVar7 = lStack_4e0;
    if ((int)uVar13 != 0) {
      lVar8 = 0;
      lVar9 = 0;
      lVar16 = 0;
      do {
        function_3263e0(*plVar12 + lVar16,uVar6,*(uint64_t *)(lVar9 + param_1[7]));
        *(int32_t *)(lVar8 + 0x58 + *plVar12) = *(int32_t *)(lVar9 + 8 + param_1[7]);
        lVar16 = lVar16 + 0x1a0;
        lVar9 = lVar9 + 0x10;
        lVar8 = lVar8 + 0x1a0;
        uVar17 = uVar17 - 1;
        lVar7 = lStack_4e0;
      } while (uVar17 != 0);
    }
  }
  else if ((int64_t)(param_1[8] - param_1[7]) >> 4 != 0) {
    function_284580(plVar12,1);
    function_3263e0(*plVar12,param_2,*(uint64_t *)param_1[7]);
  }
  *(int32_t *)(lVar7 + 0x1bc) = *(int32_t *)(param_1 + 99);
  *(int32_t *)(lVar7 + 0x1c0) = *(int32_t *)(param_1 + 0x62);
  plocal_var_500 = &system_data_buffer_ptr;
  if (plocal_var_4f8 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_4f8 = (void *)0x0;
  local_var_4e8 = 0;
  plocal_var_500 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_538);
}
// 函数: void function_281e80(uint64_t *param_1)
void function_281e80(uint64_t *param_1)
{
  if (param_1[0x2e] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (param_1[0x2a] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (param_1[0x26] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x22] = &system_data_buffer_ptr;
  if (param_1[0x23] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x23] = 0;
  *(int32_t *)(param_1 + 0x25) = 0;
  param_1[0x22] = &system_state_ptr;
  *param_1 = &system_state_ptr;
  return;
}
bool function_281f40(uint64_t param_1,int64_t param_2,int64_t param_3)
{
  byte *pbVar1;
  int64_t lVar2;
  char cVar3;
  char cVar4;
  byte *pbVar5;
  int64_t lVar6;
  int iVar7;
  int iVar8;
  int64_t lVar9;
  uint64_t uVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  lVar9 = param_3;
  cVar3 = SystemFunction_000180274d30(param_2 + 0x58,param_3 + 0x58);
  if (cVar3 == '\0') {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 8;
  }
  fVar13 = 0.0001;
  cVar4 = SystemFunction_000180285f10(param_2 + 0x18,lVar9 + 0x18);
  if (cVar4 == '\0') {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 8;
  }
  bVar11 = *(int *)(param_2 + 0x14) != *(int *)(lVar9 + 0x14);
  if (bVar11) {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 8;
  }
  bVar11 = bVar11 || (cVar4 == '\0' || cVar3 == '\0');
  iVar8 = *(int *)(param_2 + 0x170);
  iVar7 = *(int *)(lVar9 + 0x170);
  if (iVar8 == iVar7) {
    if (iVar8 != 0) {
      pbVar5 = *(byte **)(param_2 + 0x168);
      lVar9 = *(int64_t *)(lVar9 + 0x168) - (int64_t)pbVar5;
      do {
        pbVar1 = pbVar5 + lVar9;
        iVar7 = (uint)*pbVar5 - (uint)*pbVar1;
        if (iVar7 != 0) break;
        pbVar5 = pbVar5 + 1;
      } while (*pbVar1 != 0);
    }
LAB_180281fed:
    if (iVar7 == 0) goto LAB_180281ff6;
  }
  else if (iVar8 == 0) goto LAB_180281fed;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x10;
  bVar11 = true;
LAB_180281ff6:
  fVar12 = *(float *)(param_2 + 0x1b8) - *(float *)(param_3 + 0x1b8);
  if ((fVar12 <= -0.0001) || (fVar13 <= fVar12)) {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 8;
    bVar11 = true;
  }
  lVar9 = *(int64_t *)(param_2 + 0x90);
  lVar6 = *(int64_t *)(param_2 + 0x98) - lVar9;
  lVar2 = lVar6 >> 0x3f;
  lVar6 = lVar6 / 0x1a0 + lVar2;
  if ((lVar6 - lVar2 == (*(int64_t *)(param_3 + 0x98) - *(int64_t *)(param_3 + 0x90)) / 0x1a0) &&
     (iVar8 = 0, lVar6 != lVar2)) {
    uVar10 = 0;
    do {
      cVar3 = function_327250(uVar10 * 0x1a0 + lVar9,*(int64_t *)(param_3 + 0x90) + uVar10 * 0x1a0);
      if (cVar3 != '\0') {
        *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 8;
        bVar11 = true;
      }
      lVar9 = *(int64_t *)(param_2 + 0x90);
      iVar8 = iVar8 + 1;
      uVar10 = (uint64_t)iVar8;
    } while (uVar10 < (uint64_t)((*(int64_t *)(param_2 + 0x98) - lVar9) / 0x1a0));
  }
  return bVar11;
}
int8_t function_282078(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4)
{
  char cVar1;
  int64_t lVar2;
  int64_t unaff_RBX;
  int iVar3;
  int64_t unaff_RSI;
  int8_t unaff_DIL;
  uint64_t uVar4;
  int64_t unaff_R14;
  iVar3 = 0;
  if (param_3 != 0) {
    uVar4 = 0;
    do {
      cVar1 = function_327250(uVar4 * 0x1a0 + param_4,*(int64_t *)(unaff_RSI + 0x90) + uVar4 * 0x1a0)
      ;
      if (cVar1 != '\0') {
        *(uint *)(unaff_RBX + 0x10) = *(uint *)(unaff_RBX + 0x10) | 8;
        unaff_DIL = 1;
      }
      param_4 = *(int64_t *)(unaff_RBX + 0x90);
      iVar3 = iVar3 + 1;
      uVar4 = (uint64_t)iVar3;
      lVar2 = SUB168(SEXT816(unaff_R14) * SEXT816(*(int64_t *)(unaff_RBX + 0x98) - param_4),8);
    } while (uVar4 < (uint64_t)((lVar2 >> 7) - (lVar2 >> 0x3f)));
  }
  return unaff_DIL;
}
// 函数: void function_2820ec(void)
void function_2820ec(void)
{
  return;
}
// WARNING: Removing unreachable block (ram,0x0001802826e6)
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address