#include "ultra_high_freq_fun_definitions.h"
/* 函数别名定义: DataStructureManager */
#define DataStructureManager DataStructureManager
/* 函数别名定义: RenderingEngineCore */
#define RenderingEngineCore RenderingEngineCore
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_04_part078.c - 1 个函数
// 函数: void function_2cf670(int64_t param_1,int64_t param_2)
void function_2cf670(int64_t param_1,int64_t param_2)
{
  byte bVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int iVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int iVar10;
  void *puVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint uVar15;
  uint64_t uVar16;
  int8_t stack_array_698 [32];
  uint *plocal_var_678;
  int8_t local_var_670;
  int8_t stack_array_668 [4];
  uint local_var_664;
  void **pplocal_var_660;
  int8_t stack_array_658 [4];
  int iStack_654;
  int64_t *plStack_650;
  uint64_t local_var_648;
  uint local_var_640;
  uint64_t stack_array_638 [2];
  void *plocal_var_628;
  uint64_t local_var_620;
  uint64_t local_var_618;
  int32_t local_var_610;
  int64_t *plStack_608;
  void *plocal_var_600;
  int64_t lStack_5f8;
  int32_t local_var_5f0;
  uint64_t local_var_5e8;
  int32_t local_var_5e0;
  int32_t local_var_5dc;
  int32_t local_var_5d8;
  int32_t local_var_5d4;
  int64_t *plStack_5d0;
  void *plocal_var_5c8;
  uint64_t local_var_5c0;
  uint64_t local_var_5b8;
  uint64_t local_var_5b0;
  uint local_var_5a8;
  int16_t local_var_5a4;
  int16_t local_var_5a2;
  uint64_t local_var_5a0;
  void *plocal_var_598;
  uint64_t local_var_590;
  uint64_t local_var_588;
  int32_t local_var_580;
  uint64_t local_var_578;
  int8_t stack_array_570 [32];
  uint64_t local_var_550;
  uint64_t local_var_548;
  int64_t *plStack_540;
  void *plocal_var_538;
  int8_t *plocal_var_530;
  int32_t local_var_528;
  int8_t stack_array_520 [72];
  void *plocal_var_4d8;
  int8_t *plocal_var_4d0;
  int32_t local_var_4c8;
  int8_t stack_array_4c0 [72];
  void *plocal_var_478;
  void *plocal_var_470;
  int32_t local_var_468;
  uint8_t stack_array_460 [1032];
  int aiStack_58 [6];
  uint64_t local_var_40;
  local_var_5a0 = 0xfffffffffffffffe;
  local_var_40 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_698;
  if (*(int64_t *)(param_2 + 0x9700) != 0) {
    SystemData_Processor(stack_array_668,&processed_var_9384_ptr);
    pplocal_var_660 = &plocal_var_4d8;
    uVar14 = 0;
    plocal_var_4d8 = &memory_allocator_3480_ptr;
    plocal_var_4d0 = stack_array_4c0;
    local_var_4c8 = 0;
    stack_array_4c0[0] = 0;
    DataStructureManager0(&plocal_var_4d8,&processed_var_9384_ptr);
    uVar16 = SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_4d8);
    uVar16 = function_0c7b10(uVar16,param_2);
    function_0c78b0(uVar16,param_2);
    lVar9 = system_message_buffer;
    lVar3 = *(int64_t *)(param_2 + 0x99b8);
    if (((lVar3 == 0) || ((*(byte *)(param_2 + 0x1bd8) & 0x20) == 0)) ||
       (*(char *)(param_1 + 0x1320) != '\0')) {
      *(int32_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1750) = 0;
      uVar16 = *(uint64_t *)(lVar9 + 0x1cd8);
      uVar8 = function_0bdc80();
      plocal_var_678 = (uint *)CONCAT44(plocal_var_678._4_4_,0xffffffff);
      RenderingEngineCore0(uVar16,0x1c,uVar8);
      lVar9 = system_message_buffer;
    }
    else if (*(float *)(lVar3 + 0x40) <= 0.0) {
      uVar16 = *(uint64_t *)(system_message_buffer + 0x1cd8);
      puVar7 = (uint64_t *)function_2c8dc0(lVar3,&plStack_650);
      plocal_var_678 = (uint *)CONCAT44(plocal_var_678._4_4_,0xffffffff);
      RenderingEngineCore0(uVar16,0x1c,*puVar7);
      if (plStack_650 != (int64_t *)0x0) {
        (**(code **)(*plStack_650 + 0x38))();
      }
      lVar9 = system_message_buffer;
      *(int32_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1750) = 0x3f800000;
    }
    else {
      *(int32_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1750) = 0;
    }
    UltraHighFreq_DatabaseHandler1(*(int64_t *)(lVar9 + 0x1cd8),*(uint64_t *)(lVar9 + 0x1c70),
                  *(int64_t *)(lVar9 + 0x1cd8) + 0x1100,0x6d0);
    plocal_var_5c8 = (void *)function_0c0750();
    uVar12 = uVar14;
    if (((0 < *(int *)(SYSTEM_STATE_MANAGER + 0xbd0)) &&
        (uVar12 = 0, *(int64_t *)(param_2 + 0x97b0) != 0)) &&
       ((*(byte *)(param_2 + 0x1bd9) & 2) == 0)) {
      uVar12 = 0x80000000;
      function_0cd1b0(SYSTEM_STATE_MANAGER,param_2,1);
    }
    uVar13 = (uint64_t)((uint)uVar12 | 0x200);
    if (*(int *)(param_2 + 0x9a34) != 0) {
      uVar13 = uVar12;
    }
    local_var_640 = (uint)uVar13;
    iStack_654 = 0;
    iVar6 = (int)(*(int64_t *)(param_2 + 0x9898) - *(int64_t *)(param_2 + 0x9890) >> 4);
    plStack_650 = (int64_t *)(int64_t)iVar6;
    if (0 < iVar6) {
      uVar15 = 1;
      do {
        uVar12 = 0;
        lVar3 = *(int64_t *)(param_2 + 0x9890);
        local_var_648 = CONCAT44(local_var_648._4_4_,*(int32_t *)(uVar14 + 8 + lVar3));
        bVar1 = *(byte *)(uVar14 + lVar3);
        local_var_664 = (uint)bVar1;
        uVar2 = *(uint *)(uVar14 + 0xc + lVar3);
        plocal_var_478 = &memory_allocator_336_ptr;
        plocal_var_470 = stack_array_460;
        local_var_468 = 0;
        stack_array_460[0] = 0;
        function_2d3af0(&plocal_var_478,&processed_var_9344_ptr,uVar15);
        puVar11 = &system_buffer_ptr;
        if (plocal_var_470 != (void *)0x0) {
          puVar11 = plocal_var_470;
        }
        SystemData_Processor(stack_array_668,puVar11);
        puVar11 = &system_buffer_ptr;
        if (plocal_var_470 != (void *)0x0) {
          puVar11 = plocal_var_470;
        }
        pplocal_var_660 = &plocal_var_538;
        plocal_var_538 = &memory_allocator_3480_ptr;
        plocal_var_530 = stack_array_520;
        local_var_528 = 0;
        stack_array_520[0] = 0;
        if (puVar11 != (void *)0x0) {
          DataStructureManager0(&plocal_var_538);
          SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_538);
        }
        if ((uVar2 >> 0x10 & 1) != 0) {
          uVar12 = *(uint64_t *)(system_system_data_memory + 0x158);
        }
        local_var_620 = *(uint64_t *)(system_system_data_memory + 0x128 + (uint64_t)bVar1 * 8) | uVar12;
        local_var_5a8 = (uint)uVar13;
        local_var_5a4 = 0;
        plStack_608 = (int64_t *)0x0;
        plocal_var_600 = &system_data_buffer_ptr;
        local_var_5e8 = 0;
        lStack_5f8 = 0;
        local_var_5f0 = 0;
        plStack_5d0 = (int64_t *)0x0;
        plocal_var_628 = plocal_var_5c8;
        local_var_618 = CONCAT26(local_var_5a2,(uint6)local_var_5a8);
        local_var_610 = 2;
        local_var_5e0 = 0;
        local_var_5dc = 0;
        local_var_5d8 = 0;
        local_var_5d4 = 0;
        uVar16 = *(uint64_t *)(plocal_var_5c8 + 0x15b8);
        plocal_var_598 = plocal_var_5c8;
        local_var_580 = 2;
        local_var_578 = 0;
        pplocal_var_660 = &plocal_var_598;
        local_var_5b0 = local_var_620;
        local_var_590 = local_var_620;
        local_var_588 = local_var_618;
        CoreEngineDataTransformer(stack_array_570,&plocal_var_600);
        local_var_550 = CONCAT44(local_var_5dc,local_var_5e0);
        local_var_548 = CONCAT44(local_var_5d4,local_var_5d8);
        plStack_540 = plStack_5d0;
        if (plStack_5d0 != (int64_t *)0x0) {
          (**(code **)(*plStack_5d0 + 0x28))();
        }
        lVar9 = UIRenderingEngine(uVar16,param_2,&plocal_var_598,stack_array_658);
        lVar3 = *(int64_t *)(system_message_buffer + 0x1cd8);
        if ((lVar9 != 0) && (*(int64_t *)(lVar3 + 0x82a0) != (int64_t)**(int **)(lVar9 + 0x10))) {
          (**(code **)(**(int64_t **)(lVar3 + 0x8400) + 0x228))
                    (*(int64_t **)(lVar3 + 0x8400),*(uint64_t *)(*(int **)(lVar9 + 0x10) + 6),0,0
                    );
          *(int64_t *)(lVar3 + 0x82a0) = (int64_t)**(int **)(lVar9 + 0x10);
        }
        lVar9 = system_message_buffer;
        uVar16 = *(uint64_t *)(param_2 + 0x12464);
        lVar3 = *(int64_t *)(system_message_buffer + 0x1cd8);
        *(uint64_t *)(lVar3 + 0x1ef0) = *(uint64_t *)(param_2 + 0x1245c);
        *(uint64_t *)(lVar3 + 0x1ef8) = uVar16;
        iVar6 = (int)local_var_648;
        *(int *)(*(int64_t *)(lVar9 + 0x1cd8) + 0x1f04) = (int)local_var_648;
        *(int *)(*(int64_t *)(lVar9 + 0x1cd8) + 0x1f08) =
             (int)(*(float *)(param_2 + 0x124e4) * 255.0) % 0xff;
        *(int *)(*(int64_t *)(lVar9 + 0x1cd8) + 0x1f00) = iStack_654;
        uVar16 = *(uint64_t *)(param_2 + 0x128);
        lVar3 = *(int64_t *)(lVar9 + 0x1cd8);
        *(uint64_t *)(lVar3 + 0x1f10) = *(uint64_t *)(param_2 + 0x120);
        *(uint64_t *)(lVar3 + 0x1f18) = uVar16;
        lVar3 = *(int64_t *)(lVar9 + 0x1cd8);
        uVar16 = *(uint64_t *)(lVar9 + 0x1cc8);
        UltraHighFreq_DatabaseHandler1(lVar3,uVar16,lVar3 + 0x1ef0,0x30);
        function_29dca0(lVar3,0xb,0x20,uVar16);
        lVar3 = *(int64_t *)(system_message_buffer + 0x1cd8);
        if (((*(int64_t *)(lVar3 + 0x8640) != 0) || (*(int *)(lVar3 + 0x893c) != -1)) ||
           (*(int *)(lVar3 + 0x8b3c) != 0x30)) {
          stack_array_638[0] = 0;
          (**(code **)(**(int64_t **)(lVar3 + 0x8400) + 0x40))
                    (*(int64_t **)(lVar3 + 0x8400),0x41,1,stack_array_638);
          (**(code **)(**(int64_t **)(lVar3 + 0x8400) + 0x218))
                    (*(int64_t **)(lVar3 + 0x8400),0x41,1,stack_array_638);
          *(uint64_t *)(lVar3 + 0x8640) = 0;
          *(int32_t *)(lVar3 + 0x893c) = 0xffffffff;
          *(int32_t *)(lVar3 + 0x8b3c) = 0x30;
          *(int *)(lVar3 + 0x82b4) = *(int *)(lVar3 + 0x82b4) + 1;
        }
        lVar3 = *(int64_t *)(system_message_buffer + 0x1cd8);
        if (((*(int64_t *)(param_2 + 0x123f0) == 0) && (lVar9 = function_0bdc80(), lVar9 == 0)) ||
           (lVar9 = SystemCore_Scheduler(), lVar9 == 0)) {
          lVar9 = 0;
        }
        else if ((*(int64_t *)(lVar9 + 8) == 0) && (*(int64_t *)(lVar9 + 0x10) == 0)) {
          lVar9 = 0;
        }
        if ((((*(int64_t *)(lVar3 + 0x84c0) != lVar9) || (*(int *)(lVar3 + 0x887c) != -1)) ||
            (*(int *)(lVar3 + 0x8a7c) != 0x20)) &&
           (((lVar9 == 0 || (*(int64_t *)(lVar9 + 8) != 0)) || (*(int64_t *)(lVar9 + 0x10) != 0)))
           ) {
          local_var_5c0 = 0;
          if (lVar9 != 0) {
            local_var_5c0 = *(uint64_t *)(lVar9 + 0x10);
          }
          (**(code **)(**(int64_t **)(lVar3 + 0x8400) + 0x218))
                    (*(int64_t **)(lVar3 + 0x8400),0x11,1,&local_var_5c0);
          *(int64_t *)(lVar3 + 0x84c0) = lVar9;
          *(int32_t *)(lVar3 + 0x887c) = 0xffffffff;
          *(int32_t *)(lVar3 + 0x8a7c) = 0x20;
          *(int *)(lVar3 + 0x82b4) = *(int *)(lVar3 + 0x82b4) + 1;
        }
        lVar5 = system_main_module_state;
        lVar3 = *(int64_t *)(system_message_buffer + 0x1cd8);
        lVar9 = *(int64_t *)(param_2 + 0x98b0);
        if ((lVar9 == 0) ||
           (*(int32_t *)(lVar9 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar9 == -0x10
           )) {
          local_var_648 = 0;
        }
        else {
          *(int32_t *)(lVar9 + 0x16c) = *(int32_t *)(lVar5 + 0x224);
          local_var_648 = *(uint64_t *)(lVar9 + 0x18);
        }
        plVar4 = *(int64_t **)(lVar3 + 0x8400);
        (**(code **)(*plVar4 + 0x218))(plVar4,0x4a,1,&local_var_648);
        lVar5 = system_main_module_state;
        lVar3 = *(int64_t *)(system_message_buffer + 0x1cd8);
        lVar9 = *(int64_t *)(param_2 + 0x98b8);
        if ((lVar9 == 0) ||
           (*(int32_t *)(lVar9 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar9 == -0x10
           )) {
          local_var_5b8 = 0;
        }
        else {
          *(int32_t *)(lVar9 + 0x16c) = *(int32_t *)(lVar5 + 0x224);
          local_var_5b8 = *(uint64_t *)(lVar9 + 0x18);
        }
        plVar4 = *(int64_t **)(lVar3 + 0x8400);
        (**(code **)(*plVar4 + 0x218))(plVar4,0x4b,1,&local_var_5b8);
        lVar5 = system_main_module_state;
        lVar3 = *(int64_t *)(system_message_buffer + 0x1cd8);
        lVar9 = *(int64_t *)(param_2 + 0x9870);
        if ((lVar9 == 0) ||
           (*(int32_t *)(lVar9 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar9 == -0x10
           )) {
          pplocal_var_660 = (void **)0x0;
        }
        else {
          *(int32_t *)(lVar9 + 0x16c) = *(int32_t *)(lVar5 + 0x224);
          pplocal_var_660 = *(void ***)(lVar9 + 0x18);
        }
        plVar4 = *(int64_t **)(lVar3 + 0x8400);
        (**(code **)(*plVar4 + 0x218))(plVar4,1,1,&pplocal_var_660);
        local_var_670 = 1;
        plocal_var_678._0_4_ = 0xffffffff;
        CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),1,1,*(uint64_t *)(param_2 + 0x9700)
                     );
        local_var_670 = 1;
        plocal_var_678 = (uint *)CONCAT44(plocal_var_678._4_4_,0xffffffff);
        CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),2,1,*(uint64_t *)(param_2 + 0x9708)
                     );
        aiStack_58[0] = 0x10;
        aiStack_58[1] = 0x20;
        aiStack_58[2] = 0x20;
        aiStack_58[3] = 0x20;
        aiStack_58[4] = 0x20;
        aiStack_58[5] = 0x20;
        iVar10 = aiStack_58[bVar1] / (1 << ((byte)local_var_664 & 0x1f));
        plVar4 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
        (**(code **)(*plVar4 + 0x148))(plVar4,(iVar6 + -1) / (iVar10 * iVar10) + 1,1);
        local_var_664 = 0xffffffff;
        pplocal_var_660 = (void **)0x0;
        plVar4 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
        plocal_var_678 = &local_var_664;
        (**(code **)(*plVar4 + 0x220))(plVar4,1,1,&pplocal_var_660);
        local_var_664 = 0xffffffff;
        pplocal_var_660 = (void **)0x0;
        plVar4 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
        plocal_var_678 = &local_var_664;
        (**(code **)(*plVar4 + 0x220))(plVar4,2,1,&pplocal_var_660);
        iStack_654 = iStack_654 + iVar6;
        if (plStack_5d0 != (int64_t *)0x0) {
          (**(code **)(*plStack_5d0 + 0x38))();
        }
        pplocal_var_660 = &plocal_var_600;
        plocal_var_600 = &system_data_buffer_ptr;
        if (lStack_5f8 != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        lStack_5f8 = 0;
        local_var_5e8 = local_var_5e8 & 0xffffffff00000000;
        plocal_var_600 = &system_state_ptr;
        if (plStack_608 != (int64_t *)0x0) {
          (**(code **)(*plStack_608 + 0x38))();
        }
        SystemCore_Synchronizer(&plocal_var_538);
        system_system_data_memory = system_system_data_memory + -1;
        (**(code **)(*system_system_data_memory + 0x20))();
        plocal_var_478 = &system_state_ptr;
        uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
        uVar14 = uVar14 + 0x10;
        plStack_650 = (int64_t *)((int64_t)plStack_650 + -1);
        uVar13 = (uint64_t)local_var_640;
      } while (plStack_650 != (int64_t *)0x0);
    }
    SystemCore_Synchronizer(&plocal_var_4d8);
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_40 ^ (uint64_t)stack_array_698);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address