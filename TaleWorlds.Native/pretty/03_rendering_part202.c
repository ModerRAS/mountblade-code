#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part202.c - 1 个函数
// 函数: void RenderingSystem_85230(int64_t param_1)
void RenderingSystem_85230(int64_t param_1)
{
  code *pcVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  int *piVar5;
  int64_t **pplVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int iVar9;
  int64_t lVar10;
  int32_t *puVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  int64_t lVar16;
  int *piVar17;
  int iVar18;
  int64_t **pplVar19;
  int *piVar20;
  int *piVar21;
  int *piVar22;
  uint64_t uVar23;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar24;
  uint64_t extraout_XMM0_Qa_00;
  int8_t auVar25 [16];
  int8_t auVar26 [16];
  int8_t auVar27 [16];
  int8_t auVar28 [16];
  int8_t stack_array_578 [32];
  int32_t local_var_558;
  int32_t local_var_550;
  int32_t local_var_548;
  int32_t local_var_540;
  int iStack_538;
  uint64_t local_var_530;
  int8_t local_var_528;
  int32_t local_var_520;
  uint64_t local_var_518;
  int32_t local_var_510;
  int64_t *plStack_508;
  int64_t **pplStack_500;
  int64_t *plStack_4f8;
  int64_t ***ppplStack_4f0;
  int64_t **pplStack_4e8;
  int64_t **pplStack_4e0;
  int64_t *plStack_4d8;
  int *piStack_4d0;
  int *piStack_4c8;
  int *piStack_4c0;
  int32_t local_var_4b8;
  int64_t *plStack_4b0;
  void **pplocal_var_4a8;
  int64_t ***ppplStack_4a0;
  int64_t **pplStack_498;
  int64_t *plStack_490;
  int64_t *plStack_488;
  uint64_t local_var_480;
  int64_t *plStack_478;
  int64_t *plStack_470;
  int64_t *plStack_468;
  uint64_t local_var_460;
  int64_t *plStack_458;
  int64_t *plStack_450;
  int64_t *plStack_448;
  uint64_t local_var_440;
  int64_t *plStack_438;
  void **pplocal_var_430;
  int64_t *plStack_428;
  int64_t **pplStack_420;
  uint64_t local_var_418;
  void *plocal_var_408;
  int8_t *plocal_var_400;
  int32_t local_var_3f8;
  int8_t stack_array_3f0 [128];
  int32_t local_var_370;
  uint64_t local_var_368;
  int64_t *plStack_360;
  int iStack_358;
  void *plocal_var_328;
  int8_t *plocal_var_320;
  int32_t local_var_318;
  int8_t stack_array_310 [128];
  int32_t local_var_290;
  uint64_t local_var_288;
  int64_t *plStack_280;
  int iStack_278;
  void *plocal_var_248;
  int8_t *plocal_var_240;
  int32_t local_var_238;
  int8_t stack_array_230 [128];
  int32_t local_var_1b0;
  uint64_t local_var_1a8;
  int64_t *plStack_1a0;
  int iStack_198;
  void *plocal_var_168;
  int8_t *plocal_var_160;
  int32_t local_var_158;
  int8_t stack_array_150 [32];
  void *plocal_var_130;
  int8_t *plocal_var_128;
  int32_t local_var_120;
  int8_t stack_array_118 [32];
  void *plocal_var_f8;
  int8_t *plocal_var_f0;
  int32_t local_var_e8;
  int8_t stack_array_e0 [40];
  void *plocal_var_b8;
  int8_t *plocal_var_b0;
  int32_t local_var_a8;
  int8_t stack_array_a0 [72];
  uint64_t local_var_58;
  int *piVar15;
  local_var_418 = 0xfffffffffffffffe;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_578;
  piVar12 = (int *)0x0;
  local_var_510 = 0;
  pplVar19 = (int64_t **)(*(int64_t *)(param_1 + 0xd0) - *(int64_t *)(param_1 + 200) >> 3);
  iVar18 = (int)pplVar19;
  pplStack_4e0 = pplVar19;
  if (0 < iVar18) {
    piStack_4d0 = (int *)0x0;
    piStack_4c8 = (int *)0x0;
    piStack_4c0 = (int *)0x0;
    local_var_4b8 = 3;
    plocal_var_168 = &processed_var_672_ptr;
    plocal_var_160 = stack_array_150;
    stack_array_150[0] = 0;
    local_var_158 = 0x13;
    uVar23 = strcpy_s(stack_array_150,0x20,&processed_var_4968_ptr);
    local_var_520 = 8;
    local_var_528 = 1;
    local_var_530 = 0;
    local_var_540 = 0x70;
    local_var_548 = 0;
    local_var_550 = 3;
    local_var_558 = 0x61;
    iStack_538 = iVar18;
    puVar3 = (uint64_t *)
             SystemCore_ConfigManager(uVar23,&plStack_448,*(int32_t *)(*(int64_t *)(param_1 + 0x90) + 0xa0)
                           ,&plocal_var_168);
    uVar23 = *puVar3;
    *puVar3 = 0;
    plStack_450 = *(int64_t **)(param_1 + 0xe8);
    *(uint64_t *)(param_1 + 0xe8) = uVar23;
    uVar23 = extraout_XMM0_Qa;
    if (plStack_450 != (int64_t *)0x0) {
      uVar23 = (**(code **)(*plStack_450 + 0x38))();
    }
    if (plStack_448 != (int64_t *)0x0) {
      uVar23 = (**(code **)(*plStack_448 + 0x38))();
    }
    plocal_var_168 = &system_state_ptr;
    plStack_438 = (int64_t *)0x0;
    plVar4 = (int64_t *)RenderingSystem_875e0(uVar23,&plStack_428,iVar18 * 7);
    plStack_360 = (int64_t *)*plVar4;
    *plVar4 = 0;
    local_var_440 = 0;
    plStack_4b0 = plStack_360;
    plStack_438 = plStack_360;
    if (plStack_428 != (int64_t *)0x0) {
      (**(code **)(*plStack_428 + 0x38))();
    }
    lVar7 = plStack_360[2];
    local_var_518 = (int64_t **)((uint64_t)local_var_518._4_4_ << 0x20);
    lVar10 = *(int64_t *)(param_1 + 200);
    piVar21 = piStack_4c8;
    piVar5 = piStack_4d0;
    if (*(int64_t *)(param_1 + 0xd0) - lVar10 >> 3 != 0) {
      pplStack_500 = (int64_t **)0x0;
      pplStack_4e8 = (int64_t **)0x0;
      piVar13 = piVar12;
      piVar15 = piVar12;
      piVar17 = piVar12;
      piVar20 = piStack_4c8;
      piVar22 = piStack_4d0;
      do {
        iVar18 = (int)piVar13;
        puVar11 = *(int32_t **)(lVar10 + (int64_t)pplStack_4e8);
        *(int32_t *)((int64_t)piVar12 + lVar7) = puVar11[0x8c];
        *(int32_t *)((int64_t)piVar12 + lVar7 + 4) = puVar11[0x8d];
        *(int32_t *)((int64_t)piVar12 + lVar7 + 8) = puVar11[0x8e];
        *(int32_t *)((int64_t)piVar12 + lVar7 + 0xc) = 0;
        *(int32_t *)((int64_t)piVar12 + lVar7 + 0x10) = *puVar11;
        *(int32_t *)((int64_t)piVar12 + lVar7 + 0x14) = puVar11[1];
        *(int32_t *)((int64_t)piVar12 + lVar7 + 0x18) = puVar11[2];
        *(int32_t *)((int64_t)piVar12 + lVar7 + 0x1c) = puVar11[3];
        *(int32_t *)((int64_t)piVar12 + lVar7 + 0x20) = puVar11[4];
        *(int32_t *)((int64_t)piVar12 + lVar7 + 0x24) = puVar11[5];
        *(int32_t *)((int64_t)piVar12 + lVar7 + 0x28) = puVar11[6];
        *(int32_t *)((int64_t)piVar12 + lVar7 + 0x2c) = puVar11[7];
        *(int32_t *)((int64_t)piVar12 + lVar7 + 0x30) = puVar11[8];
        *(int32_t *)((int64_t)piVar12 + lVar7 + 0x34) = puVar11[9];
        *(int32_t *)((int64_t)piVar12 + lVar7 + 0x38) = puVar11[10];
        *(int32_t *)((int64_t)piVar12 + lVar7 + 0x3c) = puVar11[0xb];
        *(int32_t *)((int64_t)piVar12 + lVar7 + 0x40) = puVar11[0xc];
        *(int32_t *)((int64_t)piVar12 + lVar7 + 0x44) = puVar11[0xd];
        *(int32_t *)((int64_t)piVar12 + lVar7 + 0x48) = puVar11[0xe];
        *(int32_t *)((int64_t)piVar12 + lVar7 + 0x4c) = puVar11[0xf];
        *(int32_t *)((int64_t)piVar12 + lVar7 + 0x50) = puVar11[0x10];
        *(int32_t *)((int64_t)piVar12 + lVar7 + 0x54) = puVar11[0x11];
        *(uint64_t *)((int64_t)piVar12 + lVar7 + 0x58) = 0;
        piVar21 = piVar20;
        piVar5 = piVar22;
        if ((float)puVar11[7] != 0.0) {
          *(int *)((int64_t)piVar12 + lVar7 + 0x60) = (int)piVar15;
          uVar14 = (int)piVar15 + 1;
          piVar15 = (int *)(uint64_t)uVar14;
          plStack_508 = (int64_t *)CONCAT44(plStack_508._4_4_,uVar14);
          if (piVar20 < piVar17) {
            piVar21 = piVar20 + 1;
            *piVar20 = iVar18;
            piStack_4c8 = piVar21;
          }
          else {
            plStack_4d8 = (int64_t *)((int64_t)piVar20 - (int64_t)piVar22);
            if ((int64_t)plStack_4d8 >> 2 == 0) {
              plStack_4f8 = (int64_t *)0x1;
LAB_180385551:
              piVar5 = (int *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)plStack_4f8 * 4,
                                            CONCAT71((int7)((uint64_t)piVar13 >> 8),3));
              iVar18 = (int)local_var_518;
            }
            else {
              plStack_4f8 = (int64_t *)(((int64_t)plStack_4d8 >> 2) * 2);
              if (plStack_4f8 != (int64_t *)0x0) goto LAB_180385551;
              piVar5 = (int *)0x0;
            }
            if (piVar22 != piVar20) {
// WARNING: Subroutine does not return
              memmove(piVar5,piVar22,plStack_4d8);
            }
            *piVar5 = iVar18;
            piVar21 = piVar5 + 1;
            if (piVar22 != (int *)0x0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner(piVar22);
            }
            piVar17 = piVar5 + (int64_t)plStack_4f8;
            piVar15 = (int *)((uint64_t)plStack_508 & 0xffffffff);
            piStack_4d0 = piVar5;
            piStack_4c8 = piVar21;
            piStack_4c0 = piVar17;
          }
        }
        pplStack_500 = (int64_t **)((int64_t)pplStack_500 + 7);
        piVar12 = piVar12 + 0x1c;
        uVar14 = iVar18 + 1;
        piVar13 = (int *)(uint64_t)uVar14;
        local_var_518 = (int64_t **)CONCAT44(local_var_518._4_4_,uVar14);
        pplStack_4e8 = pplStack_4e8 + 1;
        lVar10 = *(int64_t *)(param_1 + 200);
        plStack_360 = plStack_4b0;
        pplVar19 = pplStack_4e0;
        piVar20 = piVar21;
        piVar22 = piVar5;
      } while ((uint64_t)(int64_t)(int)uVar14 <
               (uint64_t)(*(int64_t *)(param_1 + 0xd0) - lVar10 >> 3));
    }
    pplocal_var_4a8 = &plocal_var_408;
    plocal_var_408 = &memory_allocator_3432_ptr;
    plocal_var_400 = stack_array_3f0;
    local_var_3f8 = 0;
    stack_array_3f0[0] = 0;
    local_var_370 = 9;
    local_var_368 = *(uint64_t *)(param_1 + 0xe8);
    iVar18 = (int)pplVar19;
    iStack_358 = iVar18 * 0x70;
    if (*(code **)(*plStack_360 + 0x28) == (code *)&memory_allocator_3248_ptr) {
      LOCK();
      *(int *)(plStack_360 + 1) = (int)plStack_360[1] + 1;
      UNLOCK();
      piVar21 = piStack_4c8;
      piVar5 = piStack_4d0;
    }
    else {
      (**(code **)(*plStack_360 + 0x28))(plStack_360);
    }
    uVar23 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
    pplVar6 = (int64_t **)SystemCore_StreamController(uVar23,&plocal_var_408);
    pplStack_420 = pplVar6;
    if (pplVar6 != (int64_t **)0x0) {
      (*(code *)(*pplVar6)[5])(pplVar6);
    }
    lVar7 = system_context_ptr;
    ppplStack_4a0 = (int64_t ***)&local_var_518;
    local_var_518 = pplVar6;
    if (pplVar6 != (int64_t **)0x0) {
      (*(code *)(*pplVar6)[5])(pplVar6);
    }
    ppplStack_4f0 = (int64_t ***)&local_var_518;
    puVar3 = *(uint64_t **)(*(int64_t *)(lVar7 + 8) + 8);
    pcVar1 = *(code **)*puVar3;
    ppplStack_4a0 = &pplStack_4e8;
    pplStack_4e8 = local_var_518;
    if (local_var_518 != (int64_t **)0x0) {
      (*(code *)(*local_var_518)[5])();
    }
    (*pcVar1)(puVar3,&pplStack_4e8);
    if (local_var_518 != (int64_t **)0x0) {
      (*(code *)(*local_var_518)[7])();
    }
    if (pplVar6 != (int64_t **)0x0) {
      (*(code *)(*pplVar6)[7])(pplVar6);
    }
    ppplStack_4f0 = (int64_t ***)&plocal_var_408;
    plocal_var_408 = &system_state_ptr;
    (**(code **)(*plStack_4b0 + 0x38))();
    lVar7 = (int64_t)piVar21 - (int64_t)piVar5 >> 2;
    if (lVar7 != 0) {
      lVar7 = *(int64_t *)(param_1 + 0xd0) - *(int64_t *)(param_1 + 200) >> 3;
      auVar25._0_4_ = (float)lVar7;
      if (lVar7 < 0) {
        auVar25._0_4_ = auVar25._0_4_ + 1.8446744e+19;
      }
      auVar25._0_4_ = auVar25._0_4_ * 0.0078125;
      iVar9 = (int)auVar25._0_4_;
      if (auVar25._0_4_ <= 0.0) {
        if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar25._0_4_)) {
          auVar26._4_4_ = auVar25._0_4_;
          auVar26._0_4_ = auVar25._0_4_;
          auVar26._8_8_ = 0;
          uVar14 = movmskps((int)lVar7,auVar26);
          auVar25._0_4_ = (float)(int)(iVar9 + (uVar14 & 1 ^ 1));
        }
        auVar25._0_4_ = auVar25._0_4_ - 1e-08;
      }
      else {
        if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar25._0_4_)) {
          auVar25._4_4_ = auVar25._0_4_;
          auVar25._8_8_ = 0;
          uVar14 = movmskps((int)lVar7,auVar25);
          auVar25._0_4_ = (float)(int)(iVar9 + (uVar14 & 1 ^ 1));
        }
        auVar25._0_4_ = auVar25._0_4_ + 1e-08;
      }
      plocal_var_130 = &processed_var_672_ptr;
      plocal_var_128 = stack_array_118;
      stack_array_118[0] = 0;
      local_var_120 = 0x1a;
      uVar23 = strcpy_s(stack_array_118,0x20,&processed_var_4936_ptr);
      local_var_520 = 8;
      local_var_528 = 1;
      local_var_530 = 0;
      local_var_540 = 0x1e0;
      local_var_548 = 0;
      local_var_550 = 3;
      local_var_558 = 0x61;
      iStack_538 = (int)auVar25._0_4_ << 7;
      puVar3 = (uint64_t *)
               SystemCore_ConfigManager(uVar23,&plStack_488,
                             *(int32_t *)(*(int64_t *)(param_1 + 0x90) + 0xa0),&plocal_var_130);
      uVar23 = *puVar3;
      *puVar3 = 0;
      plStack_490 = *(int64_t **)(param_1 + 0xf0);
      *(uint64_t *)(param_1 + 0xf0) = uVar23;
      if (plStack_490 != (int64_t *)0x0) {
        (**(code **)(*plStack_490 + 0x38))();
      }
      if (plStack_488 != (int64_t *)0x0) {
        (**(code **)(*plStack_488 + 0x38))();
      }
      uVar23 = render_system_data_memory;
      plocal_var_130 = &system_state_ptr;
      plStack_478 = (int64_t *)0x0;
      iVar9 = iVar18 * 0x1e0;
      plocal_var_b8 = &memory_allocator_3480_ptr;
      plocal_var_b0 = stack_array_a0;
      stack_array_a0[0] = 0;
      local_var_a8 = 0x1c;
      uVar24 = strcpy_s(stack_array_a0,0x40,&system_data_fc60);
      CoreEngine_2037E0(uVar24,iVar9,&plocal_var_b8);
      plocal_var_b8 = &system_state_ptr;
      lVar7 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,iVar9,0x10,3);
      RenderingSystem_87ce0(uVar23,&plStack_508);
      plVar4 = plStack_508;
      plStack_508[2] = lVar7;
      *(int *)(plStack_508 + 3) = iVar9;
      *(int *)((int64_t)plStack_508 + 0x1c) = iVar9;
      *(int8_t *)(plStack_508 + 4) = 0;
      plStack_478 = plStack_508;
      local_var_480 = 0;
      plStack_508 = (int64_t *)0x0;
      local_var_510 = 0;
      if (piVar5 != piVar21) {
        puVar3 = (uint64_t *)(plVar4[2] + 0x10);
        piVar12 = piVar5;
        do {
          lVar7 = *(int64_t *)(*(int64_t *)(param_1 + 200) + (int64_t)*piVar12 * 8);
          uVar23 = *(uint64_t *)(lVar7 + 0x58);
          puVar3[-2] = *(uint64_t *)(lVar7 + 0x50);
          puVar3[-1] = uVar23;
          uVar23 = *(uint64_t *)(lVar7 + 0xb8);
          puVar3[10] = *(uint64_t *)(lVar7 + 0xb0);
          puVar3[0xb] = uVar23;
          uVar23 = *(uint64_t *)(lVar7 + 200);
          puVar3[0xc] = *(uint64_t *)(lVar7 + 0xc0);
          puVar3[0xd] = uVar23;
          uVar23 = *(uint64_t *)(lVar7 + 0xd8);
          puVar3[0xe] = *(uint64_t *)(lVar7 + 0xd0);
          puVar3[0xf] = uVar23;
          uVar23 = *(uint64_t *)(lVar7 + 0xe8);
          puVar3[0x10] = *(uint64_t *)(lVar7 + 0xe0);
          puVar3[0x11] = uVar23;
          uVar23 = *(uint64_t *)(lVar7 + 0x68);
          *puVar3 = *(uint64_t *)(lVar7 + 0x60);
          puVar3[1] = uVar23;
          uVar23 = *(uint64_t *)(lVar7 + 0xf8);
          puVar3[0x12] = *(uint64_t *)(lVar7 + 0xf0);
          puVar3[0x13] = uVar23;
          uVar23 = *(uint64_t *)(lVar7 + 0x108);
          puVar3[0x14] = *(uint64_t *)(lVar7 + 0x100);
          puVar3[0x15] = uVar23;
          uVar23 = *(uint64_t *)(lVar7 + 0x118);
          puVar3[0x16] = *(uint64_t *)(lVar7 + 0x110);
          puVar3[0x17] = uVar23;
          uVar23 = *(uint64_t *)(lVar7 + 0x128);
          puVar3[0x18] = *(uint64_t *)(lVar7 + 0x120);
          puVar3[0x19] = uVar23;
          uVar23 = *(uint64_t *)(lVar7 + 0x78);
          puVar3[2] = *(uint64_t *)(lVar7 + 0x70);
          puVar3[3] = uVar23;
          uVar23 = *(uint64_t *)(lVar7 + 0x138);
          puVar3[0x1a] = *(uint64_t *)(lVar7 + 0x130);
          puVar3[0x1b] = uVar23;
          uVar23 = *(uint64_t *)(lVar7 + 0x148);
          puVar3[0x1c] = *(uint64_t *)(lVar7 + 0x140);
          puVar3[0x1d] = uVar23;
          uVar23 = *(uint64_t *)(lVar7 + 0x158);
          puVar3[0x1e] = *(uint64_t *)(lVar7 + 0x150);
          puVar3[0x1f] = uVar23;
          uVar23 = *(uint64_t *)(lVar7 + 0x168);
          puVar3[0x20] = *(uint64_t *)(lVar7 + 0x160);
          puVar3[0x21] = uVar23;
          uVar23 = *(uint64_t *)(lVar7 + 0x88);
          puVar3[4] = *(uint64_t *)(lVar7 + 0x80);
          puVar3[5] = uVar23;
          uVar23 = *(uint64_t *)(lVar7 + 0x178);
          puVar3[0x22] = *(uint64_t *)(lVar7 + 0x170);
          puVar3[0x23] = uVar23;
          uVar23 = *(uint64_t *)(lVar7 + 0x188);
          puVar3[0x24] = *(uint64_t *)(lVar7 + 0x180);
          puVar3[0x25] = uVar23;
          uVar23 = *(uint64_t *)(lVar7 + 0x198);
          puVar3[0x26] = *(uint64_t *)(lVar7 + 400);
          puVar3[0x27] = uVar23;
          uVar23 = *(uint64_t *)(lVar7 + 0x1a8);
          puVar3[0x28] = *(uint64_t *)(lVar7 + 0x1a0);
          puVar3[0x29] = uVar23;
          uVar23 = *(uint64_t *)(lVar7 + 0x98);
          puVar3[6] = *(uint64_t *)(lVar7 + 0x90);
          puVar3[7] = uVar23;
          uVar23 = *(uint64_t *)(lVar7 + 0x1b8);
          puVar3[0x2a] = *(uint64_t *)(lVar7 + 0x1b0);
          puVar3[0x2b] = uVar23;
          uVar23 = *(uint64_t *)(lVar7 + 0x1c8);
          puVar3[0x2c] = *(uint64_t *)(lVar7 + 0x1c0);
          puVar3[0x2d] = uVar23;
          uVar23 = *(uint64_t *)(lVar7 + 0x1d8);
          puVar3[0x2e] = *(uint64_t *)(lVar7 + 0x1d0);
          puVar3[0x2f] = uVar23;
          uVar23 = *(uint64_t *)(lVar7 + 0x1e8);
          puVar3[0x30] = *(uint64_t *)(lVar7 + 0x1e0);
          puVar3[0x31] = uVar23;
          uVar23 = *(uint64_t *)(lVar7 + 0xa8);
          puVar3[8] = *(uint64_t *)(lVar7 + 0xa0);
          puVar3[9] = uVar23;
          uVar23 = *(uint64_t *)(lVar7 + 0x1f8);
          puVar3[0x32] = *(uint64_t *)(lVar7 + 0x1f0);
          puVar3[0x33] = uVar23;
          uVar23 = *(uint64_t *)(lVar7 + 0x208);
          puVar3[0x34] = *(uint64_t *)(lVar7 + 0x200);
          puVar3[0x35] = uVar23;
          uVar23 = *(uint64_t *)(lVar7 + 0x218);
          puVar3[0x36] = *(uint64_t *)(lVar7 + 0x210);
          puVar3[0x37] = uVar23;
          uVar23 = *(uint64_t *)(lVar7 + 0x228);
          puVar3[0x38] = *(uint64_t *)(lVar7 + 0x220);
          puVar3[0x39] = uVar23;
          puVar3 = puVar3 + 0x3c;
          piVar12 = piVar12 + 1;
        } while (piVar12 != piVar21);
      }
      ppplStack_4f0 = (int64_t ***)&plocal_var_328;
      plocal_var_328 = &memory_allocator_3432_ptr;
      plocal_var_320 = stack_array_310;
      local_var_318 = 0;
      stack_array_310[0] = 0;
      local_var_290 = 9;
      local_var_288 = *(uint64_t *)(param_1 + 0xf0);
      plStack_280 = plVar4;
      iStack_278 = iVar9;
      if (*(code **)(*plVar4 + 0x28) == (code *)&memory_allocator_3248_ptr) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        piVar5 = piStack_4d0;
      }
      else {
        (**(code **)(*plVar4 + 0x28))(plVar4);
      }
      uVar23 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
      pplVar6 = (int64_t **)SystemCore_StreamController(uVar23,&plocal_var_328);
      pplStack_498 = pplVar6;
      if (pplVar6 != (int64_t **)0x0) {
        (*(code *)(*pplVar6)[5])(pplVar6);
      }
      lVar7 = system_context_ptr;
      ppplStack_4f0 = &pplStack_500;
      pplStack_500 = pplVar6;
      if (pplVar6 != (int64_t **)0x0) {
        (*(code *)(*pplVar6)[5])(pplVar6);
      }
      ppplStack_4a0 = &pplStack_500;
      puVar3 = *(uint64_t **)(*(int64_t *)(lVar7 + 8) + 8);
      pcVar1 = *(code **)*puVar3;
      ppplStack_4f0 = &pplStack_4e0;
      pplStack_4e0 = pplStack_500;
      if (pplStack_500 != (int64_t **)0x0) {
        (*(code *)(*pplStack_500)[5])();
      }
      (*pcVar1)(puVar3,&pplStack_4e0);
      if (pplStack_500 != (int64_t **)0x0) {
        (*(code *)(*pplStack_500)[7])();
      }
      if (pplVar6 != (int64_t **)0x0) {
        (*(code *)(*pplVar6)[7])(pplVar6);
      }
      ppplStack_4f0 = (int64_t ***)&plocal_var_328;
      plocal_var_328 = &system_state_ptr;
      lVar7 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    auVar27._0_4_ = (float)iVar18 * 0.0078125;
    iVar9 = (int)auVar27._0_4_;
    if (auVar27._0_4_ <= 0.0) {
      if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar27._0_4_)) {
        auVar28._4_4_ = auVar27._0_4_;
        auVar28._0_4_ = auVar27._0_4_;
        auVar28._8_8_ = 0;
        uVar14 = movmskps((int)lVar7,auVar28);
        auVar27._0_4_ = (float)(int)(iVar9 + (uVar14 & 1 ^ 1));
      }
      auVar27._0_4_ = auVar27._0_4_ - 1e-08;
    }
    else {
      if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar27._0_4_)) {
        auVar27._4_4_ = auVar27._0_4_;
        auVar27._8_8_ = 0;
        uVar14 = movmskps((int)lVar7,auVar27);
        auVar27._0_4_ = (float)(int)(iVar9 + (uVar14 & 1 ^ 1));
      }
      auVar27._0_4_ = auVar27._0_4_ + 1e-08;
    }
    lVar7 = 0;
    plocal_var_f8 = &processed_var_672_ptr;
    plocal_var_f0 = stack_array_e0;
    stack_array_e0[0] = 0;
    local_var_e8 = 0x11;
    uVar23 = strcpy_s(stack_array_e0,0x20,&processed_var_5008_ptr);
    local_var_520 = 8;
    local_var_528 = 1;
    local_var_530 = 0;
    local_var_540 = 0x10;
    local_var_548 = 0x21;
    local_var_550 = 3;
    local_var_558 = 0x21;
    iStack_538 = (int)auVar27._0_4_ << 7;
    puVar3 = (uint64_t *)
             SystemCore_ConfigManager(uVar23,&plStack_468,*(int32_t *)(*(int64_t *)(param_1 + 0x90) + 0xa0)
                           ,&plocal_var_f8);
    uVar23 = *puVar3;
    *puVar3 = 0;
    plStack_470 = *(int64_t **)(param_1 + 0xf8);
    *(uint64_t *)(param_1 + 0xf8) = uVar23;
    uVar23 = extraout_XMM0_Qa_00;
    if (plStack_470 != (int64_t *)0x0) {
      uVar23 = (**(code **)(*plStack_470 + 0x38))();
    }
    if (plStack_468 != (int64_t *)0x0) {
      uVar23 = (**(code **)(*plStack_468 + 0x38))();
    }
    plocal_var_f8 = &system_state_ptr;
    plStack_458 = (int64_t *)0x0;
    plVar8 = (int64_t *)RenderingSystem_875e0(uVar23,&pplocal_var_4a8,(uint64_t)pplVar19 & 0xffffffff);
    plVar4 = (int64_t *)*plVar8;
    *plVar8 = 0;
    local_var_460 = 0;
    plStack_458 = plVar4;
    if (pplocal_var_4a8 != (void **)0x0) {
      (**(code **)(*pplocal_var_4a8 + 0x38))();
    }
    lVar10 = plVar4[2];
    lVar16 = (int64_t)iVar18;
    if (3 < lVar16) {
      puVar11 = (int32_t *)(lVar10 + 8);
      do {
        lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 200) + lVar7 * 8);
        puVar11[-2] = *(int32_t *)(lVar2 + 0x230);
        puVar11[-1] = *(int32_t *)(lVar2 + 0x234);
        *puVar11 = *(int32_t *)(lVar2 + 0x238);
        puVar11[1] = *(int32_t *)(lVar2 + 0xc);
        lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 200) + 8 + lVar7 * 8);
        puVar11[2] = *(int32_t *)(lVar2 + 0x230);
        puVar11[3] = *(int32_t *)(lVar2 + 0x234);
        puVar11[4] = *(int32_t *)(lVar2 + 0x238);
        puVar11[5] = *(int32_t *)(lVar2 + 0xc);
        lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 200) + 0x10 + lVar7 * 8);
        puVar11[6] = *(int32_t *)(lVar2 + 0x230);
        puVar11[7] = *(int32_t *)(lVar2 + 0x234);
        puVar11[8] = *(int32_t *)(lVar2 + 0x238);
        puVar11[9] = *(int32_t *)(lVar2 + 0xc);
        lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 200) + 0x18 + lVar7 * 8);
        puVar11[10] = *(int32_t *)(lVar2 + 0x230);
        puVar11[0xb] = *(int32_t *)(lVar2 + 0x234);
        puVar11[0xc] = *(int32_t *)(lVar2 + 0x238);
        puVar11[0xd] = *(int32_t *)(lVar2 + 0xc);
        lVar7 = lVar7 + 4;
        puVar11 = puVar11 + 0x10;
      } while (lVar7 < lVar16 + -3);
    }
    if (lVar7 < lVar16) {
      puVar11 = (int32_t *)(lVar10 + 8 + lVar7 * 0x10);
      do {
        lVar10 = *(int64_t *)(*(int64_t *)(param_1 + 200) + lVar7 * 8);
        puVar11[-2] = *(int32_t *)(lVar10 + 0x230);
        puVar11[-1] = *(int32_t *)(lVar10 + 0x234);
        *puVar11 = *(int32_t *)(lVar10 + 0x238);
        puVar11[1] = *(int32_t *)(lVar10 + 0xc);
        lVar7 = lVar7 + 1;
        puVar11 = puVar11 + 4;
      } while (lVar7 < lVar16);
    }
    ppplStack_4f0 = (int64_t ***)&plocal_var_248;
    plocal_var_248 = &memory_allocator_3432_ptr;
    plocal_var_240 = stack_array_230;
    local_var_238 = 0;
    stack_array_230[0] = 0;
    local_var_1b0 = 9;
    local_var_1a8 = *(uint64_t *)(param_1 + 0xf8);
    iStack_198 = iVar18 << 4;
    plStack_1a0 = plVar4;
    if (*(code **)(*plVar4 + 0x28) == (code *)&memory_allocator_3248_ptr) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      piVar5 = piStack_4d0;
    }
    else {
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    uVar23 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
    plVar8 = (int64_t *)SystemCore_StreamController(uVar23,&plocal_var_248);
    pplocal_var_430 = (void **)plVar8;
    if (plVar8 != (int64_t *)0x0) {
      (**(code **)(*plVar8 + 0x28))(plVar8);
    }
    lVar7 = system_context_ptr;
    pplStack_498 = &plStack_4f8;
    plStack_4f8 = plVar8;
    if (plVar8 != (int64_t *)0x0) {
      (**(code **)(*plVar8 + 0x28))(plVar8);
    }
    ppplStack_4f0 = (int64_t ***)&plStack_4f8;
    puVar3 = *(uint64_t **)(*(int64_t *)(lVar7 + 8) + 8);
    pcVar1 = *(code **)*puVar3;
    pplStack_498 = &plStack_4d8;
    plStack_4d8 = plStack_4f8;
    if (plStack_4f8 != (int64_t *)0x0) {
      (**(code **)(*plStack_4f8 + 0x28))();
    }
    (*pcVar1)(puVar3,&plStack_4d8);
    if (plStack_4f8 != (int64_t *)0x0) {
      (**(code **)(*plStack_4f8 + 0x38))();
    }
    if (plVar8 != (int64_t *)0x0) {
      (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    pplocal_var_430 = &plocal_var_248;
    plocal_var_248 = &system_state_ptr;
    (**(code **)(*plVar4 + 0x38))(plVar4);
    if (piVar5 != (int *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(piVar5);
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_578);
}