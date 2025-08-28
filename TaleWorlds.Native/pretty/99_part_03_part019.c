/* function_6272a0 - RenderingSystem_ResourceRegistrar */
#define RenderingSystem_ResourceRegistrar function_6272a0
/* 函数别名定义: MemoryDebugger */
#define MemoryDebugger MemoryDebugger
#include "SystemDataAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_03_part019.c - 11 个函数
// 函数: void function_1de530(int64_t param_1)
void function_1de530(int64_t param_1)
{
  int64_t *plVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t lVar4;
  lVar4 = param_1 + 0x30;
  for (lVar3 = *(int64_t *)(param_1 + 0x38); lVar3 != lVar4; lVar3 = SystemFunction_00018066bd70(lVar3)) {
    plVar1 = *(int64_t **)(lVar3 + 0x28);
    if (plVar1 != (int64_t *)0x0) {
      if (*plVar1 == 0) {
        *plVar1 = 0;
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(plVar1);
      }
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)(lVar3 + 0x28) = 0;
  }
  puVar2 = *(uint64_t **)(param_1 + 0x40);
  if (puVar2 != (uint64_t *)0x0) {
    SystemCache_Manager(lVar4,*puVar2);
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar2);
  }
  *(int64_t *)lVar4 = lVar4;
  *(int64_t *)(param_1 + 0x38) = lVar4;
  *(uint64_t *)(param_1 + 0x40) = 0;
  *(int8_t *)(param_1 + 0x48) = 0;
  *(uint64_t *)(param_1 + 0x50) = 0;
  lVar4 = *(int64_t *)(param_1 + 8);
  do {
    if (lVar4 == param_1) {
      CoreEngine_0572D0(param_1);
      *(int32_t *)(param_1 + 0x68) = 0xffffffff;
      return;
    }
    plVar1 = *(int64_t **)(lVar4 + 0x28);
    switch(*(int32_t *)(param_1 + 0x6c)) {
    case 0:
      lVar3 = *plVar1;
      break;
    case 1:
      lVar3 = plVar1[1];
      break;
    case 2:
      lVar3 = plVar1[4];
      break;
    case 3:
      lVar3 = plVar1[3];
      break;
    case 4:
      lVar3 = plVar1[2];
      break;
    case 5:
      lVar3 = plVar1[5];
      break;
    default:
      goto LAB_1801de630;
    }
    if ((lVar3 != 0) && (*(int64_t **)(lVar3 + 0x18) != (int64_t *)0x0)) {
      (**(code **)(**(int64_t **)(lVar3 + 0x18) + 0x10))();
    }
LAB_1801de630:
    lVar4 = SystemFunction_00018066bd70(lVar4);
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_1de690(int64_t param_1,int64_t *param_2,int32_t param_3,uint64_t param_4)
{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  code *pcVar4;
  if ((*(char *)(system_main_module_state + 0x60) == '\0') && (*(char *)(param_1 + 0x309) == '\0')) {
    switch(param_3) {
    case 0:
      plVar3 = *(int64_t **)(system_message_buffer + 0x1d78);
      pcVar4 = *(code **)(*plVar3 + 0x60);
      lVar2 = *param_2;
      break;
    case 1:
      plVar3 = *(int64_t **)(system_message_buffer + 0x1d78);
      pcVar4 = *(code **)(*plVar3 + 0x78);
      lVar2 = param_2[1];
      break;
    case 2:
      plVar3 = *(int64_t **)(system_message_buffer + 0x1d78);
      pcVar4 = *(code **)(*plVar3 + 0x88);
      lVar2 = param_2[4];
      break;
    case 3:
      plVar3 = *(int64_t **)(system_message_buffer + 0x1d78);
      pcVar4 = *(code **)(*plVar3 + 0x80);
      lVar2 = param_2[3];
      break;
    case 4:
      plVar3 = *(int64_t **)(system_message_buffer + 0x1d78);
      pcVar4 = *(code **)(*plVar3 + 0x90);
      lVar2 = param_2[2];
      break;
    case 5:
      plVar3 = *(int64_t **)(system_message_buffer + 0x1d78);
      pcVar4 = *(code **)(*plVar3 + 0x68);
      lVar2 = param_2[5];
      break;
    default:
      goto LAB_1801de7a2;
    }
    iVar1 = (*pcVar4)(plVar3,param_4,(int64_t)*(int *)(lVar2 + 0x10),0,lVar2 + 0x18);
    if (iVar1 < 0) {
      return 0;
    }
  }
LAB_1801de7a2:
  return 1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1de7d0(void)
void function_1de7d0(void)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint uVar5;
  uint64_t *puVar6;
  char cVar7;
  uint64_t *puVar8;
  void *puVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint uVar13;
  uint64_t *pstack_special_x_8;
  void *plocal_var_158;
  int8_t *plocal_var_150;
  uint local_var_148;
  uint64_t local_var_140;
  void *plocal_var_138;
  int8_t *plocal_var_130;
  int32_t local_var_128;
  uint64_t local_var_120;
  int32_t local_var_118;
  void *plocal_var_110;
  int64_t lStack_108;
  int32_t local_var_100;
  uint64_t local_var_f8;
  uint64_t *plocal_var_f0;
  void **pplocal_var_e8;
  uint64_t local_var_e0;
  uint64_t *plocal_var_d8;
  uint64_t *plocal_var_d0;
  uint64_t *plocal_var_c8;
  uint64_t local_var_c0;
  int32_t local_var_b8;
  void *plocal_var_b0;
  int64_t lStack_a8;
  int32_t local_var_98;
  uint64_t local_var_90;
  uint64_t *plocal_var_88;
  uint64_t *plocal_var_80;
  uint64_t *plocal_var_78;
  uint64_t *plocal_var_70;
  uint64_t *plocal_var_68;
  uint64_t *plocal_var_60;
  int8_t stack_array_58 [24];
  uint64_t uVar14;
  lVar4 = system_global_data_ptr;
  local_var_90 = 0xfffffffffffffffe;
  uVar12 = 0;
  local_var_118 = 0;
  plocal_var_d0 = (uint64_t *)0x0;
  plocal_var_c8 = (uint64_t *)0x0;
  local_var_c0 = 0;
  local_var_b8 = 3;
  function_052200(system_main_module_state,&plocal_var_d0);
  puVar6 = plocal_var_d0;
  plocal_var_d8 = plocal_var_c8;
  local_var_e0 = (int64_t)plocal_var_c8 - (int64_t)plocal_var_d0 >> 5;
  puVar1 = plocal_var_c8;
  puVar3 = puVar6;
  if (local_var_e0 != 0) {
    pstack_special_x_8 = plocal_var_d0 + 1;
    uVar14 = uVar12;
    do {
      if (((int)uVar14 < 0) ||
         (lVar10 = *(int64_t *)(*system_main_module_state + 0x888),
         (uint64_t)(*(int64_t *)(*system_main_module_state + 0x890) - lVar10 >> 5) <= uVar12)) {
        lVar10 = MemoryDebugger0();
      }
      else {
        lVar10 = uVar12 * 0x20 + lVar10;
      }
      plocal_var_158 = &system_data_buffer_ptr;
      local_var_140 = 0;
      plocal_var_150 = (int8_t *)0x0;
      local_var_148 = 0;
      CoreEngineDataBufferProcessor(&plocal_var_158,*(int32_t *)(lVar10 + 0x10));
      if (*(int *)(lVar10 + 0x10) != 0) {
// WARNING: Subroutine does not return
        memcpy(plocal_var_150,*(uint64_t *)(lVar10 + 8),*(int *)(lVar10 + 0x10) + 1);
      }
      if (*(int64_t *)(lVar10 + 8) != 0) {
        local_var_148 = 0;
        if (plocal_var_150 != (int8_t *)0x0) {
          *plocal_var_150 = 0;
        }
        local_var_140 = local_var_140 & 0xffffffff;
      }
      System_DataHandler(&plocal_var_158,&system_data_cfc8);
      System_DataHandler(&plocal_var_158,&system_data_cf7c);
      plocal_var_138 = &system_data_buffer_ptr;
      local_var_120 = 0;
      plocal_var_130 = (int8_t *)0x0;
      local_var_128 = 0;
      CoreEngineDataBufferProcessor(&plocal_var_138,local_var_148);
      if (local_var_148 != 0) {
// WARNING: Subroutine does not return
        memcpy(plocal_var_130,plocal_var_150,local_var_148 + 1);
      }
      if (plocal_var_150 != (int8_t *)0x0) {
        local_var_128 = 0;
        if (plocal_var_130 != (int8_t *)0x0) {
          *plocal_var_130 = 0;
        }
        local_var_120 = local_var_120 & 0xffffffff;
      }
      System_DataHandler(&plocal_var_138,&system_data_ce08);
      cVar7 = RenderingSystem_RenderQueue(&plocal_var_138);
      if (cVar7 == '\0') {
        plocal_var_138 = &system_data_buffer_ptr;
        if (plocal_var_130 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        plocal_var_130 = (int8_t *)0x0;
        local_var_120 = local_var_120 & 0xffffffff00000000;
        plocal_var_138 = &system_state_ptr;
        plocal_var_158 = &system_data_buffer_ptr;
        if (plocal_var_150 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
      }
      else {
        puVar8 = (uint64_t *)SystemRenderer(0x398);
        *puVar8 = &system_handler1_ptr;
        *puVar8 = &system_handler2_ptr;
        *(int32_t *)(puVar8 + 1) = 0;
        *puVar8 = &system_handler3_ptr;
        plocal_var_88 = puVar8;
        DataStructureManager(puVar8 + 2,0x70,6,function_1ecb30,function_1ecbb0);
        puVar1 = puVar8 + 0x56;
        *puVar1 = &system_state_ptr;
        puVar8[0x57] = 0;
        *(int32_t *)(puVar8 + 0x58) = 0;
        *puVar1 = &system_data_buffer_ptr;
        puVar8[0x59] = 0;
        puVar8[0x57] = 0;
        *(int32_t *)(puVar8 + 0x58) = 0;
        puVar2 = puVar8 + 0x5a;
        *puVar2 = &system_state_ptr;
        puVar8[0x5b] = 0;
        *(int32_t *)(puVar8 + 0x5c) = 0;
        *puVar2 = &system_data_buffer_ptr;
        puVar8[0x5d] = 0;
        puVar8[0x5b] = 0;
        *(int32_t *)(puVar8 + 0x5c) = 0;
        plocal_var_70 = puVar8 + 0x5e;
        *plocal_var_70 = 0;
        puVar8[0x5f] = 0;
        puVar8[0x60] = 0;
        *(int32_t *)(puVar8 + 0x61) = 3;
        plocal_var_68 = puVar8 + 0x65;
        puVar8[0x68] = 0;
        *(int32_t *)(puVar8 + 0x6a) = 0x11;
        *plocal_var_68 = plocal_var_68;
        puVar8[0x66] = plocal_var_68;
        puVar8[0x67] = 0;
        *(int8_t *)(puVar8 + 0x68) = 0;
        puVar8[0x69] = 0;
        puVar8[0x6c] = 0;
        plocal_var_60 = puVar8 + 0x6d;
        puVar8[0x70] = 0;
        *(int32_t *)(puVar8 + 0x72) = 3;
        *plocal_var_60 = plocal_var_60;
        puVar8[0x6e] = plocal_var_60;
        puVar8[0x6f] = 0;
        *(int8_t *)(puVar8 + 0x70) = 0;
        puVar8[0x71] = 0;
        *(int32_t *)((int64_t)puVar8 + 0x7c) = 0;
        *(int32_t *)((int64_t)puVar8 + 0xec) = 1;
        *(int32_t *)((int64_t)puVar8 + 0x15c) = 2;
        *(int32_t *)((int64_t)puVar8 + 0x1cc) = 3;
        *(int32_t *)((int64_t)puVar8 + 0x23c) = 4;
        *(int32_t *)((int64_t)puVar8 + 0x2ac) = 5;
        *(int8_t *)(puVar8 + 0x6b) = 0;
        puVar8[99] = 0;
        puVar8[0x62] = 0;
        puVar8[100] = 0;
        puVar8[99] = 0;
        plocal_var_80 = puVar1;
        plocal_var_78 = puVar2;
        pplocal_var_e8 = (void **)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,3);
        uVar13 = local_var_148;
        *(int32_t *)((int64_t)pplocal_var_e8 + 0x19) = 0;
        *(int16_t *)((int64_t)pplocal_var_e8 + 0x1d) = 0;
        *(int8_t *)((int64_t)pplocal_var_e8 + 0x1f) = 0;
        *(int32_t *)(pplocal_var_e8 + 5) = 0x11;
        *pplocal_var_e8 = (void *)pplocal_var_e8;
        pplocal_var_e8[1] = (void *)pplocal_var_e8;
        pplocal_var_e8[2] = (void *)0x0;
        *(int8_t *)(pplocal_var_e8 + 3) = 0;
        pplocal_var_e8[4] = (void *)0x0;
        puVar8[100] = pplocal_var_e8;
        uVar11 = (uint64_t)local_var_148;
        if (plocal_var_150 != (int8_t *)0x0) {
          CoreEngineDataBufferProcessor(puVar1,uVar11);
        }
        uVar5 = local_var_148;
        if (uVar13 != 0) {
// WARNING: Subroutine does not return
          memcpy(puVar8[0x57],plocal_var_150,uVar11);
        }
        *(int32_t *)(puVar8 + 0x58) = 0;
        if (puVar8[0x57] != 0) {
          *(int8_t *)(uVar11 + puVar8[0x57]) = 0;
        }
        *(int32_t *)((int64_t)puVar8 + 0x2cc) = local_var_140._4_4_;
        uVar11 = (uint64_t)local_var_148;
        if (plocal_var_150 != (int8_t *)0x0) {
          CoreEngineDataBufferProcessor(puVar2,uVar11);
        }
        if (uVar5 != 0) {
// WARNING: Subroutine does not return
          memcpy(puVar8[0x5b],plocal_var_150,uVar11);
        }
        *(int32_t *)(puVar8 + 0x5c) = 0;
        if (puVar8[0x5b] != 0) {
          *(int8_t *)(uVar11 + puVar8[0x5b]) = 0;
        }
        *(int32_t *)((int64_t)puVar8 + 0x2ec) = local_var_140._4_4_;
        cVar7 = function_1d8e90(system_global_data_ptr,0,puVar8);
        if (cVar7 == '\0') {
          puVar9 = &system_buffer_ptr;
          if ((void *)*pstack_special_x_8 != (void *)0x0) {
            puVar9 = (void *)*pstack_special_x_8;
          }
          RenderingSystem_ResourceRegistrar(&memory_allocator_3208_ptr,puVar9);
          lVar10 = __RTCastToVoid(puVar8);
          (**(code **)*puVar8)(puVar8,0);
          if (lVar10 != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner(lVar10);
          }
        }
        else {
          lVar10 = CoreEngineDataTransformer(&plocal_var_b0,puVar6 + uVar12 * 4);
          pplocal_var_e8 = &plocal_var_110;
          plocal_var_110 = &system_data_buffer_ptr;
          local_var_100 = *(int32_t *)(lVar10 + 0x10);
          lStack_108 = *(int64_t *)(lVar10 + 8);
          local_var_f8._4_4_ = *(uint *)(lVar10 + 0x1c);
          local_var_f8._0_4_ = *(int32_t *)(lVar10 + 0x18);
          *(int32_t *)(lVar10 + 0x10) = 0;
          *(uint64_t *)(lVar10 + 8) = 0;
          *(uint64_t *)(lVar10 + 0x18) = 0;
          local_var_118 = 1;
          plocal_var_f0 = puVar8;
          function_1eae40(lVar4 + 0x58,stack_array_58);
          local_var_118 = 0;
          pplocal_var_e8 = &plocal_var_110;
          plocal_var_110 = &system_data_buffer_ptr;
          if (lStack_108 != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          lStack_108 = 0;
          local_var_f8 = (uint64_t)local_var_f8._4_4_ << 0x20;
          plocal_var_110 = &system_state_ptr;
          plocal_var_b0 = &system_data_buffer_ptr;
          if (lStack_a8 != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          lStack_a8 = 0;
          local_var_98 = 0;
          plocal_var_b0 = &system_state_ptr;
        }
        plocal_var_138 = &system_data_buffer_ptr;
        if (plocal_var_130 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        plocal_var_130 = (int8_t *)0x0;
        local_var_120 = local_var_120 & 0xffffffff00000000;
        plocal_var_138 = &system_state_ptr;
        plocal_var_158 = &system_data_buffer_ptr;
        if (plocal_var_150 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
      }
      plocal_var_130 = (int8_t *)0x0;
      plocal_var_138 = &system_state_ptr;
      local_var_140 = local_var_140 & 0xffffffff00000000;
      plocal_var_150 = (int8_t *)0x0;
      plocal_var_158 = &system_state_ptr;
      uVar13 = (int)uVar14 + 1;
      uVar14 = (uint64_t)uVar13;
      pstack_special_x_8 = pstack_special_x_8 + 4;
      uVar12 = (uint64_t)(int)uVar13;
      puVar1 = plocal_var_d8;
    } while (uVar12 < local_var_e0);
  }
  for (; puVar2 = plocal_var_d8, puVar3 != plocal_var_d8; puVar3 = puVar3 + 4) {
    plocal_var_d8 = puVar1;
    (**(code **)*puVar3)(puVar3,0);
    puVar1 = plocal_var_d8;
    plocal_var_d8 = puVar2;
  }
  if (puVar6 == (uint64_t *)0x0) {
    return;
  }
  plocal_var_d8 = puVar1;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar6);
}
// 函数: void function_1deed0(uint64_t param_1,int *param_2,uint64_t param_3,uint64_t param_4)
void function_1deed0(uint64_t param_1,int *param_2,uint64_t param_3,uint64_t param_4)
{
  int iVar1;
  int8_t stack_array_358 [60];
  int iStack_31c;
  uint local_var_4c;
  int iStack_18;
  iVar1 = *param_2;
  function_18e7e0(stack_array_358,param_1,param_3,param_4,0xfffffffffffffffe);
  if (iStack_31c != iVar1) {
    local_var_4c = local_var_4c & 0xffffffef;
  }
  iStack_18 = iStack_18 + 1;
  iStack_31c = iVar1;
  function_198750(param_3,stack_array_358);
  function_1431d0(stack_array_358);
  return;
}
uint64_t *
function_1def40(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  *param_1 = &memory_allocator_3768_ptr;
  puVar1 = param_1 + 1;
  param_1[4] = 0;
  *(int32_t *)(param_1 + 6) = 3;
  *puVar1 = puVar1;
  param_1[2] = puVar1;
  param_1[3] = 0;
  *(int8_t *)(param_1 + 4) = 0;
  param_1[5] = 0;
  _Mtx_init_in_situ(param_1 + 7,0x102,param_3,param_4,0xfffffffffffffffe);
  _Mtx_init_in_situ(param_1 + 0x11,2);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(int32_t *)(param_1 + 0x1e) = 3;
  _Mtx_init_in_situ(param_1 + 0x1f,2);
  *(int32_t *)(param_1 + 0x2d) = 0x3f800000;
  *(uint64_t *)((int64_t)param_1 + 0x16c) = 0x40000000;
  *(int32_t *)((int64_t)param_1 + 0x174) = 3;
  param_1[0x2b] = 1;
  param_1[0x2a] = &system_data_0000;
  param_1[0x2c] = 0;
  *(int32_t *)(param_1 + 0x2e) = 0;
  return param_1;
}
// 函数: void function_1df040(uint64_t *param_1)
void function_1df040(uint64_t *param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  int64_t lVar5;
  *param_1 = &system_handler3_ptr;
  puVar3 = param_1 + 2;
  lVar5 = 6;
  do {
    function_1de530(puVar3);
    puVar3 = puVar3 + 0xe;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  for (puVar3 = (uint64_t *)param_1[0x6e]; puVar3 != param_1 + 0x6d;
      puVar3 = (uint64_t *)SystemFunction_00018066bd70(puVar3)) {
    plVar1 = (int64_t *)puVar3[7];
    lVar5 = *plVar1;
    plVar4 = plVar1;
    if (lVar5 == 0) {
      plVar4 = plVar1 + 1;
      lVar5 = *plVar4;
      while (lVar5 == 0) {
        plVar4 = plVar4 + 1;
        lVar5 = *plVar4;
      }
    }
    if (lVar5 != plVar1[puVar3[8]]) {
      do {
        lVar2 = *(int64_t *)(lVar5 + 0x10);
        if (lVar2 != 0) {
          function_29a450(lVar2);
          *(void **)(lVar2 + 0x88) = &system_state_ptr;
          _Mtx_destroy_in_situ();
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(lVar2);
        }
        *(uint64_t *)(lVar5 + 0x10) = 0;
        lVar5 = *(int64_t *)(lVar5 + 0x18);
        while (lVar5 == 0) {
          plVar4 = plVar4 + 1;
          lVar5 = *plVar4;
        }
      } while (lVar5 != *(int64_t *)(puVar3[7] + puVar3[8] * 8));
    }
  }
  if (param_1[99] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[99] = 0;
  lVar5 = param_1[100];
  if (lVar5 != 0) {
    UtilitiesSystem_Processor(lVar5);
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar5);
  }
  param_1[100] = 0;
  plVar4 = (int64_t *)param_1[0x62];
  if (plVar4 != (int64_t *)0x0) {
    if (*plVar4 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *plVar4 = 0;
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(plVar4);
  }
  param_1[0x62] = 0;
  function_1bdf70(param_1 + 0x6d,param_1[0x6f]);
  UtilitiesSystem_Processor();
  DataSerializationEngine();
  param_1[0x5a] = &system_data_buffer_ptr;
  if (param_1[0x5b] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x5b] = 0;
  *(int32_t *)(param_1 + 0x5d) = 0;
  param_1[0x5a] = &system_state_ptr;
  param_1[0x56] = &system_data_buffer_ptr;
  if (param_1[0x57] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x57] = 0;
  *(int32_t *)(param_1 + 0x59) = 0;
  param_1[0x56] = &system_state_ptr;
  SystemDataValidator(param_1 + 2,0x70,6,function_1ecbb0);
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1df2e0(int64_t param_1)
void function_1df2e0(int64_t param_1)
{
  int64_t *plVar1;
  void *puVar2;
  uint64_t *puVar3;
  int iVar4;
  int64_t lVar5;
  char cVar6;
  plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 200) + 0x48);
  if (plVar1 != (int64_t *)0x0) {
    if (*(code **)(*plVar1 + 0x68) == (code *)&processed_var_9696_ptr) {
      cVar6 = (char)plVar1[2] != '\0';
    }
    else {
      cVar6 = (**(code **)(*plVar1 + 0x68))();
    }
    if (cVar6 == '\0') {
      return;
    }
  }
  cVar6 = (**(code **)(*(int64_t *)**(uint64_t **)(param_1 + 200) + 0x18))();
  *(char *)(param_1 + 0xc0) = cVar6;
  if (cVar6 != '\0') {
    puVar2 = *(void **)**(uint64_t **)(param_1 + 200);
    if (puVar2 == &rendering_buffer_2136_ptr) {
      iVar4 = *(int *)((int64_t)**(uint64_t **)(param_1 + 200) + 0x434);
    }
    else {
      iVar4 = (**(code **)(puVar2 + 0x20))();
    }
    puVar3 = (uint64_t *)**(int64_t **)(param_1 + 200);
    if (puVar3 != (uint64_t *)0x0) {
      lVar5 = __RTCastToVoid(puVar3);
      (**(code **)*puVar3)(puVar3,0);
      if (lVar5 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar5);
      }
    }
    **(uint64_t **)(param_1 + 200) = 0;
    if (iVar4 != 0) {
// WARNING: Subroutine does not return
      SystemParameterHandler(system_message_context,&memory_allocator_3344_ptr,iVar4);
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1df34d(uint64_t param_1,int64_t param_2)
void function_1df34d(uint64_t param_1,int64_t param_2)
{
  uint64_t *puVar1;
  int iVar2;
  int64_t *in_RAX;
  int64_t lVar3;
  int64_t unaff_RBX;
  lVar3 = *(int64_t *)*in_RAX;
  if (lVar3 == param_2) {
    iVar2 = *(int *)(*in_RAX + 0x434);
  }
  else {
    iVar2 = (**(code **)(lVar3 + 0x20))();
  }
  puVar1 = (uint64_t *)**(int64_t **)(unaff_RBX + 200);
  if (puVar1 != (uint64_t *)0x0) {
    lVar3 = __RTCastToVoid(puVar1);
    (**(code **)*puVar1)(puVar1,0);
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar3);
    }
  }
  **(uint64_t **)(unaff_RBX + 200) = 0;
  if (iVar2 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  SystemParameterHandler(system_message_context,&memory_allocator_3344_ptr,iVar2);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1df37e(void)
void function_1df37e(void)
{
  int64_t lVar1;
  int64_t unaff_RBX;
  uint64_t *unaff_RSI;
  int unaff_EDI;
  lVar1 = __RTCastToVoid();
  (**(code **)*unaff_RSI)();
  if (lVar1 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar1);
  }
  **(uint64_t **)(unaff_RBX + 200) = 0;
  if (unaff_EDI != 0) {
// WARNING: Subroutine does not return
    SystemParameterHandler(system_message_context,&memory_allocator_3344_ptr,unaff_EDI);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1df3a8(void)
void function_1df3a8(void)
{
  int64_t unaff_RBX;
  int unaff_EDI;
  **(uint64_t **)(unaff_RBX + 200) = 0;
  if (unaff_EDI != 0) {
// WARNING: Subroutine does not return
    SystemParameterHandler(system_message_context,&memory_allocator_3344_ptr,unaff_EDI);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1df3bf(void)
void function_1df3bf(void)
{
  int32_t unaff_EDI;
// WARNING: Subroutine does not return
  SystemParameterHandler(system_message_context,&memory_allocator_3344_ptr,unaff_EDI);
}
// 函数: void function_1df3e4(void)
void function_1df3e4(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1df3f1(void)
void function_1df3f1(void)
{
  uint64_t *puVar1;
  int iVar2;
  int64_t lVar3;
  int64_t in_RAX;
  int64_t unaff_RBX;
  iVar2 = (**(code **)(in_RAX + 0x20))();
  puVar1 = (uint64_t *)**(int64_t **)(unaff_RBX + 200);
  if (puVar1 != (uint64_t *)0x0) {
    lVar3 = __RTCastToVoid(puVar1);
    (**(code **)*puVar1)(puVar1,0);
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar3);
    }
  }
  **(uint64_t **)(unaff_RBX + 200) = 0;
  if (iVar2 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  SystemParameterHandler(system_message_context,&memory_allocator_3344_ptr,iVar2);
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address