#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part088.c - 4 个函数
// 函数: void RenderingSystem_1a6c0(uint64_t *param_1,int64_t param_2,char param_3)
void RenderingSystem_1a6c0(uint64_t *param_1,int64_t param_2,char param_3)
{
  int *piVar1;
  int32_t uVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int64_t lVar6;
  int iVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t *plVar10;
  code *pcVar11;
  bool bVar12;
  int8_t stack_array_828 [32];
  uint64_t local_var_808;
  uint64_t *plocal_var_800;
  int iStack_7f8;
  int64_t **pplStack_7e8;
  int64_t **pplStack_7e0;
  int64_t **pplStack_7d8;
  int64_t **pplStack_7d0;
  int64_t **pplStack_7c8;
  int64_t **pplStack_7c0;
  int64_t *plStack_7b8;
  int64_t *plStack_7b0;
  int64_t *plStack_7a8;
  int64_t *plStack_7a0;
  int64_t *plStack_798;
  int64_t *plStack_790;
  void **pplocal_var_788;
  int64_t *plStack_778;
  int32_t local_var_770;
  int32_t local_var_76c;
  int16_t local_var_768;
  int8_t local_var_766;
  int32_t local_var_764;
  int8_t local_var_760;
  uint64_t local_var_758;
  int64_t *plStack_750;
  uint64_t local_var_748;
  uint64_t local_var_740;
  int32_t local_var_738;
  uint64_t local_var_730;
  uint64_t local_var_728;
  int32_t local_var_720;
  int32_t local_var_71c;
  int16_t local_var_718;
  int8_t local_var_716;
  int32_t local_var_714;
  int8_t local_var_710;
  uint64_t local_var_708;
  int64_t alStack_700 [3];
  int32_t local_var_6e8;
  uint64_t local_var_6e0;
  int64_t alStack_6d8 [3];
  int32_t local_var_6c0;
  uint64_t local_var_6b8;
  int64_t *plStack_6a8;
  int8_t *plocal_var_6a0;
  int32_t local_var_698;
  int8_t stack_array_690 [128];
  int32_t local_var_610;
  uint64_t *plocal_var_608;
  int32_t local_var_5f8;
  int64_t *plStack_5c8;
  int8_t *plocal_var_5c0;
  int32_t local_var_5b8;
  int8_t stack_array_5b0 [128];
  int32_t local_var_530;
  uint64_t *plocal_var_528;
  int32_t local_var_518;
  void *plocal_var_4e8;
  int8_t *plocal_var_4e0;
  int32_t local_var_4d8;
  int8_t stack_array_4d0 [128];
  int32_t local_var_450;
  uint64_t *plocal_var_448;
  int32_t local_var_438;
  int64_t *plStack_408;
  int8_t *plocal_var_400;
  int32_t local_var_3f8;
  int8_t stack_array_3f0 [128];
  int32_t local_var_370;
  uint64_t local_var_368;
  int64_t *plStack_328;
  int8_t *plocal_var_320;
  int32_t local_var_318;
  int8_t stack_array_310 [128];
  int32_t local_var_290;
  uint64_t local_var_288;
  int64_t *plStack_248;
  int8_t *plocal_var_240;
  int32_t local_var_238;
  int8_t stack_array_230 [128];
  int32_t local_var_1b0;
  uint64_t local_var_1a8;
  void *plocal_var_168;
  int8_t *plocal_var_160;
  int32_t local_var_158;
  int8_t stack_array_150 [72];
  void *plocal_var_108;
  int8_t *plocal_var_100;
  int32_t local_var_f8;
  int8_t stack_array_f0 [72];
  void *plocal_var_a8;
  int8_t *plocal_var_a0;
  int32_t local_var_98;
  int8_t stack_array_90 [72];
  uint64_t local_var_48;
  local_var_6b8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_828;
  if (param_1[8] != 0) {
    RenderingSystem_1b630(param_2 + 0x180,param_1 + 2);
    *(int32_t *)((int64_t)param_1 + 0x4c) = 0x18;
  }
  lVar8 = param_1[0x1f];
  if ((*(char *)(*(int64_t *)(lVar8 + 0x38) + 0x331d) != '\0') &&
     (*(int *)((int64_t)param_1 + 0x4c) != 0x18)) {
    RenderingSystem_1b8e0(param_1);
    lVar8 = param_1[0x1f];
  }
  lVar6 = system_parameter_buffer;
  lVar3 = *(int64_t *)(lVar8 + 0x38);
  if (*(char *)(lVar3 + 0x2830) == '\0') {
    iVar7 = *(int *)((int64_t)param_1 + 0x4c);
    if (iVar7 == 0x18) {
      if ((((param_1[8] == 0) && (*(int *)(param_1 + 0x26) != *(int *)(lVar3 + 0x3358))) &&
          (*(char *)(lVar8 + 0x50) != '\0')) && (*(char *)(lVar3 + 0x331d) == '\0')) {
        *(int32_t *)((int64_t)param_1 + 0x4c) = 0;
      }
      else {
        lVar8 = param_1[0x20];
        if (lVar8 != 0) {
          if (*(char *)(lVar3 + 0x331d) == '\0') {
            if (*(int *)(lVar8 + 0x3a8) != *(int *)(system_parameter_buffer + 0x1500)) {
              *(int32_t *)((int64_t)param_1 + 0x4c) = 0;
              *(int32_t *)(lVar8 + 0x3a8) = *(int32_t *)(lVar6 + 0x1500);
            }
          }
          else {
            *(int32_t *)((int64_t)param_1 + 0x4c) = 0;
            pplStack_7e8 = (int64_t **)param_1[0x20];
            param_1[0x20] = 0;
            if (pplStack_7e8 != (int64_t **)0x0) {
              (*(code *)(*pplStack_7e8)[7])();
            }
          }
        }
      }
    }
    else if (iVar7 == 0) {
      alStack_6d8[0] = 0;
      alStack_6d8[1] = 0;
      alStack_6d8[2] = 0;
      local_var_6c0 = 3;
      local_var_770 = 0;
      local_var_76c = 0xffffffff;
      local_var_766 = 0;
      local_var_764 = 0xffffffff;
      local_var_760 = 1;
      local_var_758 = 0;
      pplStack_7e8 = &plStack_750;
      plStack_750 = (int64_t *)0x0;
      local_var_748 = 0;
      local_var_740 = 0;
      local_var_738 = 3;
      local_var_730 = 0;
      local_var_768 = 1;
      plStack_778 = alStack_6d8;
      iVar7 = GenericFunction_1801a3620(lVar3,&plStack_778);
      if (iVar7 == 0) {
        *(int32_t *)((int64_t)param_1 + 0x4c) = 1;
        *(int32_t *)((int64_t)param_1 + 0xf4) = 0;
      }
      else {
        *(int *)((int64_t)param_1 + 0x14c) = *(int *)((int64_t)param_1 + 0x14c) + 1;
        if (*(int *)((int64_t)param_1 + 0x14c) == 100) {
          local_var_728 = 0;
          local_var_720 = 0;
          local_var_71c = 0xffffffff;
          local_var_718 = 1;
          local_var_716 = 0;
          local_var_714 = 0xffffffff;
          local_var_710 = 1;
          local_var_708 = 0;
          pplStack_7e8 = (int64_t **)alStack_700;
          alStack_700[0] = 0;
          alStack_700[1] = 0;
          alStack_700[2] = 0;
          local_var_6e8 = 3;
          local_var_6e0 = 0;
          local_var_768 = CONCAT11(local_var_768._1_1_,1);
          GenericFunction_1801a3620(lVar3,&local_var_728);
          *(int32_t *)((int64_t)param_1 + 0x14c) = 0;
          pplStack_7e8 = (int64_t **)alStack_700;
          if (alStack_700[0] != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
        }
      }
      pplStack_7e8 = &plStack_750;
      if (plStack_750 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      if (alStack_6d8[0] != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
    }
    else if (iVar7 == 1) {
      uVar2 = *(int32_t *)(param_2 + 0x1bd4);
      iVar7 = 0;
      plocal_var_168 = &memory_allocator_3480_ptr;
      plocal_var_160 = stack_array_150;
      stack_array_150[0] = 0;
      local_var_158 = 0xc;
      strcpy_s(stack_array_150,0x40,&processed_var_6328_ptr);
      local_var_808._0_1_ = 1;
      iStack_7f8 = uVar2;
      GenericFunction_1800db460(&plocal_var_168,param_1 + 0x22);
      plocal_var_168 = &system_state_ptr;
      uVar2 = *(int32_t *)(param_2 + 0x1bd4);
      bVar12 = system_data_aa6a == '\0';
      plocal_var_108 = &memory_allocator_3480_ptr;
      plocal_var_100 = stack_array_f0;
      stack_array_f0[0] = 0;
      local_var_f8 = 0xc;
      strcpy_s(stack_array_f0,0x40,&processed_var_6312_ptr);
      iStack_7f8 = uVar2;
      local_var_808._0_1_ = bVar12;
      GenericFunction_1800db460(&plocal_var_108,param_1 + 0x21);
      plocal_var_108 = &system_state_ptr;
      uVar2 = *(int32_t *)(param_2 + 0x1bd4);
      plocal_var_a8 = &memory_allocator_3480_ptr;
      plocal_var_a0 = stack_array_90;
      stack_array_90[0] = 0;
      local_var_98 = 0x17;
      strcpy_s(stack_array_90,0x40,&processed_var_6288_ptr);
      local_var_808 = CONCAT71(local_var_808._1_7_,1);
      iStack_7f8 = uVar2;
      GenericFunction_1800db460(&plocal_var_a8,param_1 + 0x24);
      plocal_var_a8 = &system_state_ptr;
      lVar8 = GenericFunction_1800daa50();
      *(uint *)(lVar8 + 4) = *(uint *)(lVar8 + 4) | 0x8000000;
      if (*(code **)(lVar8 + 0x9620) != (code *)0x0) {
        (**(code **)(lVar8 + 0x9620))(lVar8 + 0x9610,0,0);
      }
      *(void **)(lVar8 + 0x9620) = &processed_var_7024_ptr;
      *(void **)(lVar8 + 0x9628) = &processed_var_7008_ptr;
      *(void **)(lVar8 + 0x9610) = &processed_var_4240_ptr;
      *(uint64_t **)(lVar8 + 0x9650) = param_1;
      SystemCore_NetworkHandler(lVar8,&processed_var_6432_ptr);
      CoreEngine_080810(lVar8 + 0x3580,param_2 + 0x3580);
      do {
        local_var_808 = param_1[0x24];
        iStack_7f8 = iVar7;
        RenderingSystem_17ee0(param_1[0x1f],lVar8,(int64_t)param_1 + 0x94);
        iVar7 = iVar7 + 1;
      } while (iVar7 < 6);
      LOCK();
      piVar1 = (int *)(param_2 + 0x11a48);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      *(int64_t *)(param_2 + 0x9a48 + (int64_t)iVar7 * 8) = lVar8;
      uVar2 = *(int32_t *)(param_2 + 0x9a38);
      uVar4 = *(int32_t *)(param_2 + 0x9a3c);
      uVar5 = *(int32_t *)(param_2 + 0x9a40);
      *(int32_t *)(lVar8 + 0x9a34) = *(int32_t *)(param_2 + 0x9a34);
      *(int32_t *)(lVar8 + 0x9a38) = uVar2;
      *(int32_t *)(lVar8 + 0x9a3c) = uVar4;
      *(int32_t *)(lVar8 + 0x9a40) = uVar5;
      *(int32_t *)((int64_t)param_1 + 0x4c) = 3;
    }
    else if (iVar7 != 3) {
      if (iVar7 == 2) {
        *(int32_t *)((int64_t)param_1 + 0x4c) = 1;
      }
      else if (iVar7 == 4) {
        *(int32_t *)((int64_t)param_1 + 0x5c) = 0;
        *(int32_t *)((int64_t)param_1 + 0x4c) = 5;
        pplStack_7e8 = &plStack_408;
        plStack_408 = (int64_t *)&memory_allocator_3432_ptr;
        plocal_var_400 = stack_array_3f0;
        local_var_3f8 = 0;
        stack_array_3f0[0] = 0;
        local_var_370 = 0x18;
        local_var_368 = param_1[0x24];
        uVar9 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
        plVar10 = (int64_t *)SystemCore_StreamController(uVar9,&plStack_408);
        pplStack_7e0 = (int64_t **)plVar10;
        if (plVar10 != (int64_t *)0x0) {
          (**(code **)(*plVar10 + 0x28))(plVar10);
        }
        uVar9 = system_context_ptr;
        pplStack_7e8 = &plStack_7b8;
        plStack_7b8 = plVar10;
        if (plVar10 != (int64_t *)0x0) {
          (**(code **)(*plVar10 + 0x28))(plVar10);
        }
        SystemPerformance_Monitor(uVar9,&plStack_7b8);
        if (plVar10 != (int64_t *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10);
        }
        pplStack_7e0 = &plStack_408;
        plStack_408 = (int64_t *)&system_state_ptr;
      }
      else if (iVar7 == 5) {
        *(int32_t *)((int64_t)param_1 + 0x4c) = 6;
      }
      else if (iVar7 == 6) {
        *(int32_t *)((int64_t)param_1 + 0x4c) = 0x13;
        pplStack_7e0 = &plStack_6a8;
        plStack_6a8 = (int64_t *)&memory_allocator_3432_ptr;
        plocal_var_6a0 = stack_array_690;
        local_var_698 = 0;
        stack_array_690[0] = 0;
        local_var_610 = 0x21;
        local_var_5f8 = *(int32_t *)(param_2 + 0x1bd4);
        plocal_var_608 = param_1;
        if ((void *)*param_1 == &processed_var_6584_ptr) {
          LOCK();
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
          UNLOCK();
        }
        else {
          (**(code **)((void *)*param_1 + 0x28))(param_1);
        }
        uVar9 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
        plVar10 = (int64_t *)SystemCore_StreamController(uVar9,&plStack_6a8);
        pplStack_7d8 = (int64_t **)plVar10;
        if (plVar10 != (int64_t *)0x0) {
          (**(code **)(*plVar10 + 0x28))(plVar10);
        }
        uVar9 = system_context_ptr;
        pplStack_7e0 = &plStack_7b0;
        plStack_7b0 = plVar10;
        if (plVar10 != (int64_t *)0x0) {
          (**(code **)(*plVar10 + 0x28))(plVar10);
        }
        SystemPerformance_Monitor(uVar9,&plStack_7b0);
        if (plVar10 != (int64_t *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10);
        }
        pplStack_7d8 = &plStack_6a8;
        plStack_6a8 = (int64_t *)&system_state_ptr;
      }
      else if (iVar7 != 0x13) {
        if (iVar7 == 7) {
          lVar8 = GenericFunction_1800daa50();
          *(uint *)(lVar8 + 4) = *(uint *)(lVar8 + 4) | 0x8000000;
          if (*(code **)(lVar8 + 0x9620) != (code *)0x0) {
            (**(code **)(lVar8 + 0x9620))(lVar8 + 0x9610,0,0);
          }
          *(void **)(lVar8 + 0x9620) = &processed_var_7024_ptr;
          *(void **)(lVar8 + 0x9628) = &processed_var_7008_ptr;
          *(void **)(lVar8 + 0x9610) = &processed_var_4240_ptr;
          *(uint64_t **)(lVar8 + 0x9650) = param_1;
          SystemCore_NetworkHandler(lVar8,&processed_var_6408_ptr);
          CoreEngine_080810(lVar8 + 0x3580,param_2 + 0x3580);
          iVar7 = 0;
          do {
            local_var_808 = param_1[0x22];
            plocal_var_800 = param_1;
            iStack_7f8 = iVar7;
            RenderingSystem_18670(param_1[0x1f],lVar8,(int64_t)param_1 + 0x94,param_1[0x25]);
            iVar7 = iVar7 + 1;
          } while (iVar7 < 6);
          LOCK();
          piVar1 = (int *)(param_2 + 0x11a48);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + 1;
          UNLOCK();
          *(int64_t *)(param_2 + 0x9a48 + (int64_t)iVar7 * 8) = lVar8;
          uVar2 = *(int32_t *)(param_2 + 0x9a38);
          uVar4 = *(int32_t *)(param_2 + 0x9a3c);
          uVar5 = *(int32_t *)(param_2 + 0x9a40);
          *(int32_t *)(lVar8 + 0x9a34) = *(int32_t *)(param_2 + 0x9a34);
          *(int32_t *)(lVar8 + 0x9a38) = uVar2;
          *(int32_t *)(lVar8 + 0x9a3c) = uVar4;
          *(int32_t *)(lVar8 + 0x9a40) = uVar5;
          *(int32_t *)((int64_t)param_1 + 0x4c) = 9;
        }
        else if (iVar7 != 9) {
          if (iVar7 == 8) {
            *(int32_t *)((int64_t)param_1 + 0x4c) = 7;
          }
          else if (iVar7 == 10) {
            *(int32_t *)((int64_t)param_1 + 0x4c) = 0xb;
            pplStack_7d8 = &plStack_328;
            plStack_328 = (int64_t *)&memory_allocator_3432_ptr;
            plocal_var_320 = stack_array_310;
            local_var_318 = 0;
            stack_array_310[0] = 0;
            local_var_290 = 0x18;
            local_var_288 = param_1[0x22];
            uVar9 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
            plVar10 = (int64_t *)SystemCore_StreamController(uVar9,&plStack_328);
            pplStack_7d0 = (int64_t **)plVar10;
            if (plVar10 != (int64_t *)0x0) {
              (**(code **)(*plVar10 + 0x28))(plVar10);
            }
            uVar9 = system_context_ptr;
            pplStack_7d8 = &plStack_7a8;
            plStack_7a8 = plVar10;
            if (plVar10 != (int64_t *)0x0) {
              (**(code **)(*plVar10 + 0x28))(plVar10);
            }
            SystemPerformance_Monitor(uVar9,&plStack_7a8);
            if (plVar10 != (int64_t *)0x0) {
              (**(code **)(*plVar10 + 0x38))(plVar10);
            }
            pplStack_7d0 = &plStack_328;
            plStack_328 = (int64_t *)&system_state_ptr;
          }
          else if (iVar7 == 0xb) {
            *(int32_t *)((int64_t)param_1 + 0x4c) = 0xc;
          }
          else if (iVar7 == 0xc) {
            *(int32_t *)((int64_t)param_1 + 0x4c) = 0x13;
            pplStack_7d0 = &plStack_5c8;
            plStack_5c8 = (int64_t *)&memory_allocator_3432_ptr;
            plocal_var_5c0 = stack_array_5b0;
            local_var_5b8 = 0;
            stack_array_5b0[0] = 0;
            local_var_530 = 0x20;
            local_var_518 = *(int32_t *)(param_2 + 0x1bd4);
            plocal_var_528 = param_1;
            if ((void *)*param_1 == &processed_var_6584_ptr) {
              LOCK();
              *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
              UNLOCK();
            }
            else {
              (**(code **)((void *)*param_1 + 0x28))(param_1);
            }
            uVar9 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
            plVar10 = (int64_t *)SystemCore_StreamController(uVar9,&plStack_5c8);
            pplStack_7c8 = (int64_t **)plVar10;
            if (plVar10 != (int64_t *)0x0) {
              (**(code **)(*plVar10 + 0x28))(plVar10);
            }
            uVar9 = system_context_ptr;
            pplStack_7d0 = &plStack_7a0;
            plStack_7a0 = plVar10;
            if (plVar10 != (int64_t *)0x0) {
              (**(code **)(*plVar10 + 0x28))(plVar10);
            }
            SystemPerformance_Monitor(uVar9,&plStack_7a0);
            if (plVar10 != (int64_t *)0x0) {
              (**(code **)(*plVar10 + 0x38))(plVar10);
            }
            pplStack_7c8 = &plStack_5c8;
            plStack_5c8 = (int64_t *)&system_state_ptr;
          }
          else if (iVar7 == 0xd) {
            lVar8 = GenericFunction_1800daa50();
            *(uint *)(lVar8 + 4) = *(uint *)(lVar8 + 4) | 0x8000000;
            pcVar11 = *(code **)(lVar8 + 0x9620);
            if (system_data_aa6a == '\0') {
              if (pcVar11 != (code *)0x0) {
                (*pcVar11)(lVar8 + 0x9610,0,0);
              }
              *(void **)(lVar8 + 0x9620) = &processed_var_7024_ptr;
              *(void **)(lVar8 + 0x9628) = &processed_var_7008_ptr;
              pcVar11 = (code *)&processed_var_4240_ptr;
            }
            else {
              if (pcVar11 != (code *)0x0) {
                (*pcVar11)(lVar8 + 0x9610,0,0);
              }
              *(void **)(lVar8 + 0x9620) = &processed_var_7024_ptr;
              *(void **)(lVar8 + 0x9628) = &processed_var_7008_ptr;
              pcVar11 = RenderingSystem_17e00;
            }
            *(code **)(lVar8 + 0x9610) = pcVar11;
            *(uint64_t **)(lVar8 + 0x9650) = param_1;
            SystemCore_NetworkHandler(lVar8,&processed_var_6408_ptr);
            CoreEngine_080810(lVar8 + 0x3580,param_2 + 0x3580);
            iVar7 = 0;
            do {
              local_var_808 = param_1[0x21];
              plocal_var_800 = param_1;
              iStack_7f8 = iVar7;
              RenderingSystem_18670(param_1[0x1f],lVar8,(int64_t)param_1 + 0x94,param_1[0x23]);
              iVar7 = iVar7 + 1;
            } while (iVar7 < 6);
            LOCK();
            piVar1 = (int *)(param_2 + 0x11a48);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + 1;
            UNLOCK();
            *(int64_t *)(param_2 + 0x9a48 + (int64_t)iVar7 * 8) = lVar8;
            uVar2 = *(int32_t *)(param_2 + 0x9a38);
            uVar4 = *(int32_t *)(param_2 + 0x9a3c);
            uVar5 = *(int32_t *)(param_2 + 0x9a40);
            *(int32_t *)(lVar8 + 0x9a34) = *(int32_t *)(param_2 + 0x9a34);
            *(int32_t *)(lVar8 + 0x9a38) = uVar2;
            *(int32_t *)(lVar8 + 0x9a3c) = uVar4;
            *(int32_t *)(lVar8 + 0x9a40) = uVar5;
            *(int32_t *)((int64_t)param_1 + 0x4c) = 0xf;
          }
          else if (iVar7 != 0xf) {
            if (iVar7 == 0xe) {
              *(int32_t *)((int64_t)param_1 + 0x4c) = 0xd;
            }
            else if (iVar7 == 0x10) {
              *(int32_t *)((int64_t)param_1 + 0x4c) = 0x11;
              pplStack_7c8 = &plStack_248;
              plStack_248 = (int64_t *)&memory_allocator_3432_ptr;
              plocal_var_240 = stack_array_230;
              local_var_238 = 0;
              stack_array_230[0] = 0;
              local_var_1b0 = 0x18;
              local_var_1a8 = param_1[0x21];
              uVar9 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
              plVar10 = (int64_t *)SystemCore_StreamController(uVar9,&plStack_248);
              pplStack_7c0 = (int64_t **)plVar10;
              if (plVar10 != (int64_t *)0x0) {
                (**(code **)(*plVar10 + 0x28))(plVar10);
              }
              uVar9 = system_context_ptr;
              pplStack_7c8 = &plStack_798;
              plStack_798 = plVar10;
              if (plVar10 != (int64_t *)0x0) {
                (**(code **)(*plVar10 + 0x28))(plVar10);
              }
              SystemPerformance_Monitor(uVar9,&plStack_798);
              if (plVar10 != (int64_t *)0x0) {
                (**(code **)(*plVar10 + 0x38))(plVar10);
              }
              pplStack_7c0 = &plStack_248;
              plStack_248 = (int64_t *)&system_state_ptr;
            }
            else if (iVar7 == 0x11) {
              *(int32_t *)((int64_t)param_1 + 0x4c) = 0x12;
            }
            else if (iVar7 == 0x12) {
              local_var_438 = *(int32_t *)(param_2 + 0x1bd4);
              *(int32_t *)((int64_t)param_1 + 0x4c) = 0x13;
              pplStack_7c0 = (int64_t **)&plocal_var_4e8;
              plocal_var_4e8 = &memory_allocator_3432_ptr;
              plocal_var_4e0 = stack_array_4d0;
              local_var_4d8 = 0;
              stack_array_4d0[0] = 0;
              local_var_450 = 0x1f;
              plocal_var_448 = param_1;
              if ((void *)*param_1 == &processed_var_6584_ptr) {
                LOCK();
                *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
                UNLOCK();
              }
              else {
                (**(code **)((void *)*param_1 + 0x28))(param_1);
              }
              uVar9 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
              plVar10 = (int64_t *)SystemCore_StreamController(uVar9,&plocal_var_4e8);
              pplocal_var_788 = (void **)plVar10;
              if (plVar10 != (int64_t *)0x0) {
                (**(code **)(*plVar10 + 0x28))(plVar10);
              }
              uVar9 = system_context_ptr;
              pplStack_7c0 = &plStack_790;
              plStack_790 = plVar10;
              if (plVar10 != (int64_t *)0x0) {
                (**(code **)(*plVar10 + 0x28))(plVar10);
              }
              SystemPerformance_Monitor(uVar9,&plStack_790);
              if (plVar10 != (int64_t *)0x0) {
                (**(code **)(*plVar10 + 0x38))(plVar10);
              }
              pplocal_var_788 = &plocal_var_4e8;
              plocal_var_4e8 = &system_state_ptr;
            }
            else if (iVar7 == 0x14) {
              RenderingSystem_1b8e0(param_1);
              if ((param_3 != '\0') &&
                 (*(int64_t *)(*(int64_t *)(param_1[0x1f] + 0x38) + 800) != 0)) {
                *(int32_t *)((int64_t)param_1 + 0x4c) = 0x15;
                RenderingSystem_1c950(*(uint64_t *)(*(int64_t *)(param_1[0x1f] + 0x38) + 800));
              }
            }
            else if (iVar7 == 0x17) {
              *(int32_t *)((int64_t)param_1 + 0x4c) = 0x18;
              *(int32_t *)((int64_t)param_1 + 0x5c) = 0xffffffff;
            }
          }
        }
      }
    }
  }
  else {
    *(int8_t *)(lVar3 + 0x2830) = 0;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_828);
}
int32_t * RenderingSystem_1b630(int32_t *param_1,int32_t *param_2)
{
  int64_t *plVar1;
  int64_t *plVar2;
  *param_1 = *param_2;
  plVar1 = *(int64_t **)(param_2 + 2);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(int64_t **)(param_1 + 2);
  *(int64_t **)(param_1 + 2) = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_2 + 4);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(int64_t **)(param_1 + 4);
  *(int64_t **)(param_1 + 4) = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_2 + 6);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(int64_t **)(param_1 + 6);
  *(int64_t **)(param_1 + 6) = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_2 + 8);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(int64_t **)(param_1 + 8);
  *(int64_t **)(param_1 + 8) = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_2 + 10);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(int64_t **)(param_1 + 10);
  *(int64_t **)(param_1 + 10) = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_2 + 0xc);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(int64_t **)(param_1 + 0xc);
  *(int64_t **)(param_1 + 0xc) = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_1b790(int64_t param_1,int64_t *param_2,int64_t *param_3,int32_t param_4,
void RenderingSystem_1b790(int64_t param_1,int64_t *param_2,int64_t *param_3,int32_t param_4,
                  int32_t param_5)
{
  int8_t stack_array_d8 [32];
  int8_t local_var_b8;
  int32_t local_var_a8;
  int64_t *plStack_98;
  uint64_t local_var_90;
  void *plocal_var_88;
  int8_t *plocal_var_80;
  int32_t local_var_78;
  int8_t stack_array_70 [72];
  uint64_t local_var_28;
  local_var_90 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_d8;
  if (param_2 != (int64_t *)0x0) {
    plStack_98 = param_2;
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plStack_98 = *(int64_t **)(param_1 + 0x30);
  *(int64_t **)(param_1 + 0x30) = param_2;
  if (plStack_98 != (int64_t *)0x0) {
    (**(code **)(*plStack_98 + 0x38))();
  }
  if (param_3 != (int64_t *)0x0) {
    plStack_98 = param_3;
    (**(code **)(*param_3 + 0x28))(param_3);
  }
  plStack_98 = *(int64_t **)(param_1 + 0x38);
  *(int64_t **)(param_1 + 0x38) = param_3;
  if (plStack_98 != (int64_t *)0x0) {
    (**(code **)(*plStack_98 + 0x38))();
  }
  *(int32_t *)(param_1 + 0x10) = param_4;
  if (*(int64_t *)(param_1 + 0x40) == 0) {
    plocal_var_88 = &memory_allocator_3480_ptr;
    plocal_var_80 = stack_array_70;
    stack_array_70[0] = 0;
    local_var_78 = 0x14;
    strcpy_s(stack_array_70,0x40,&processed_var_6384_ptr);
    local_var_a8 = param_5;
    local_var_b8 = 1;
    GenericFunction_1800db460(&plocal_var_88,param_1 + 0x40);
    plocal_var_88 = &system_state_ptr;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_d8);
}
// 函数: void RenderingSystem_1b8e0(int64_t param_1)
void RenderingSystem_1b8e0(int64_t param_1)
{
  if (*(int64_t *)(param_1 + 0x110) != 0) {
    SystemCore_NetworkHandler(*(int64_t *)(param_1 + 0x110),0);
  }
  if (*(int64_t *)(param_1 + 0x108) != 0) {
    SystemCore_NetworkHandler(*(int64_t *)(param_1 + 0x108),0);
  }
  if (*(int64_t *)(param_1 + 0x118) != 0) {
    SystemCore_NetworkHandler(*(int64_t *)(param_1 + 0x118),0);
  }
  *(int32_t *)(param_1 + 0x4c) = 0x18;
  *(int32_t *)(param_1 + 0x5c) = 0xffffffff;
  *(int32_t *)(param_1 + 0x130) =
       *(int32_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0xf8) + 0x38) + 0x3358);
  return;
}
// 函数: void RenderingSystem_1b950(int64_t param_1,float *param_2,char param_3)
void RenderingSystem_1b950(int64_t param_1,float *param_2,char param_3)
{
  uint64_t uVar1;
  int32_t uVar2;
  uVar1 = *(uint64_t *)(param_2 + 2);
  *(uint64_t *)(param_1 + 100) = *(uint64_t *)param_2;
  *(uint64_t *)(param_1 + 0x6c) = uVar1;
  uVar1 = *(uint64_t *)(param_2 + 6);
  *(uint64_t *)(param_1 + 0x74) = *(uint64_t *)(param_2 + 4);
  *(uint64_t *)(param_1 + 0x7c) = uVar1;
  uVar1 = *(uint64_t *)(param_2 + 10);
  *(uint64_t *)(param_1 + 0x84) = *(uint64_t *)(param_2 + 8);
  *(uint64_t *)(param_1 + 0x8c) = uVar1;
  uVar1 = *(uint64_t *)(param_2 + 0xe);
  *(uint64_t *)(param_1 + 0x94) = *(uint64_t *)(param_2 + 0xc);
  *(uint64_t *)(param_1 + 0x9c) = uVar1;
  uVar2 = 0;
  *(int32_t *)(param_1 + 0x70) = 0;
  *(int32_t *)(param_1 + 0x80) = 0;
  *(int32_t *)(param_1 + 0x90) = 0;
  *(int32_t *)(param_1 + 0xa0) = 0x3f800000;
  *(float *)(param_1 + 0x48) =
       SQRT(param_2[4] * param_2[4] + param_2[5] * param_2[5] + param_2[6] * param_2[6] +
            *param_2 * *param_2 + param_2[1] * param_2[1] + param_2[2] * param_2[2] +
            param_2[8] * param_2[8] + param_2[9] * param_2[9] + param_2[10] * param_2[10]);
  RenderingSystem_1bc40();
  if (param_3 != '\0') {
    *(int32_t *)(param_1 + 0x4c) = uVar2;
  }
  return;
}
uint64_t *
RenderingSystem_1ba60(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int8_t uVar1;
  uint64_t uVar2;
  uVar2 = 0xfffffffffffffffe;
  *param_1 = &system_handler1_ptr;
  *param_1 = &system_handler2_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &processed_var_6584_ptr;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  DataStructure_4e7b0();
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x1f] = param_2;
  *(int32_t *)((int64_t)param_1 + 0x4c) = 0;
  *(int32_t *)((int64_t)param_1 + 0xf4) = 0xffffffff;
  *(uint64_t *)((int64_t)param_1 + 0xe4) = 0;
  *(uint64_t *)((int64_t)param_1 + 0xec) = 0;
  *(int32_t *)(param_1 + 0x26) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x134) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x13c) = 0;
  *(int32_t *)((int64_t)param_1 + 0x144) = 0x3f800000;
  *(int8_t *)(param_1 + 0x29) = 0;
  *(int32_t *)((int64_t)param_1 + 0x14c) = 0;
  *(int32_t *)((int64_t)param_1 + 0x5c) = 0xffffffff;
  uVar1 = 1;
  RenderingSystem_1b950(param_1,&system_data_0300,1,param_4,uVar2);
  *(int32_t *)((int64_t)param_1 + 0x54) = 0;
  *(int8_t *)(param_1 + 10) = uVar1;
  return param_1;
}
uint64_t * RenderingSystem_1bb70(uint64_t *param_1,uint64_t param_2)
{
  if ((int64_t *)param_1[0x25] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x25] + 0x38))();
  }
  if ((int64_t *)param_1[0x24] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x24] + 0x38))();
  }
  if ((int64_t *)param_1[0x23] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x23] + 0x38))();
  }
  if ((int64_t *)param_1[0x22] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x22] + 0x38))();
  }
  if ((int64_t *)param_1[0x21] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x21] + 0x38))();
  }
  if ((int64_t *)param_1[0x20] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x20] + 0x38))();
  }
  DataStructure_4e720(param_1 + 2);
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x150);
  }
  return param_1;
}