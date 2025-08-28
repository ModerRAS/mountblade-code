/* 函数别名定义: DataStructureManager */
#define DataStructureManager DataStructureManager
/* 函数别名定义: RenderingEngineCore */
#define RenderingEngineCore RenderingEngineCore
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_01_part055.c - 3 个函数
// 函数: void GenericFunction_1800dca70(uint64_t param_1,int64_t param_2)
void GenericFunction_1800dca70(uint64_t param_1,int64_t param_2)
{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int iVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int8_t stack_array_168 [32];
  int32_t local_var_148;
  int8_t local_var_138;
  int8_t stack_array_137 [7];
  void **pplocal_var_130;
  int64_t *plStack_128;
  uint64_t local_var_120;
  uint64_t local_var_118;
  void **pplocal_var_110;
  void *plocal_var_108;
  int8_t *plocal_var_100;
  int32_t local_var_f8;
  int8_t stack_array_f0 [72];
  void *plocal_var_a8;
  int8_t *plocal_var_a0;
  int32_t local_var_98;
  int8_t stack_array_90 [72];
  uint64_t local_var_48;
  local_var_118 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  lVar2 = SystemLog_Manager(param_2);
  lVar3 = system_message_buffer;
  plVar9 = (int64_t *)0x0;
  if (lVar2 != 0) {
    plVar8 = *(int64_t **)(system_message_buffer + 0x1cd8);
    iVar7 = *(int *)(param_2 + 0x357c);
    plVar5 = plVar9;
    if (*(int64_t *)(lVar2 + 0x1e0) != 0) {
      if (system_main_module_state != 0) {
        *(int64_t *)(lVar2 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
      }
      plVar5 = (int64_t *)((int64_t)(iVar7 * 2 + 1) * 0x10 + *(int64_t *)(lVar2 + 0x1e0));
      if ((plVar5 != (int64_t *)0x0) && (*plVar5 != 0)) {
        (**(code **)(*plVar8 + 0x70))(plVar8,*plVar5,4);
        lVar3 = system_message_buffer;
      }
    }
    plVar8[0x107e] = (int64_t)plVar5;
    uVar1 = *(uint64_t *)(lVar3 + 0x1cd8);
    lVar3 = SystemOptimizer(param_2);
    SystemCore_ProcessorEx(uVar1,lVar3 != 0);
  }
  SystemData_Processor(&local_var_138,&system_data_3ec0);
  pplocal_var_130 = &plocal_var_108;
  plocal_var_108 = &memory_allocator_3480_ptr;
  plocal_var_100 = stack_array_f0;
  local_var_f8 = 0;
  stack_array_f0[0] = 0;
  DataStructureManager0(&plocal_var_108,&system_data_3ec0);
  SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_108);
  plVar8 = plVar9;
  while (iVar7 = (int)plVar8, (uint64_t)(int64_t)iVar7 < (uint64_t)*(uint *)(param_2 + 0x2230)) {
    lVar3 = *(int64_t *)
             (*(int64_t *)(param_2 + 0x2238 + ((uint64_t)plVar8 >> 0xb) * 8) + 0x10 +
             (uint64_t)(uint)(iVar7 + (int)((uint64_t)plVar8 >> 0xb) * -0x800) * 0x18);
    GenericFunction_1800dbd90(param_1,lVar3,param_2);
    lVar4 = SystemOptimizer(param_2);
    if (lVar4 != 0) {
      *(int32_t *)(lVar3 + 0xc4) = 1;
      lVar4 = SystemOptimizer(param_2);
      *(int32_t *)(lVar3 + 0xa4) = *(int32_t *)(lVar4 + 0x324);
    }
    if (lVar2 != 0) {
      *(int32_t *)(lVar3 + 0xa0) = *(int32_t *)(lVar2 + 0x324);
    }
    CoreEngine_0E8640(param_1,lVar3);
    plVar8 = (int64_t *)(uint64_t)(iVar7 + 1);
  }
  SystemCore_Synchronizer(&plocal_var_108);
  system_system_data_memory = system_system_data_memory + -1;
  (**(code **)(*system_system_data_memory + 0x20))();
  if (*(int *)(param_2 + 0x26d0) != 0) {
    pplocal_var_110 = &plocal_var_a8;
    plocal_var_a8 = &memory_allocator_3480_ptr;
    plocal_var_a0 = stack_array_90;
    local_var_98 = 0;
    stack_array_90[0] = 0;
    DataStructureManager0(&plocal_var_a8,&system_data_41f0);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_a8);
    SystemData_Processor(stack_array_137,&system_data_41f0);
    lVar2 = SystemLog_Manager(param_2);
    lVar3 = system_message_buffer;
    plVar8 = plVar9;
    if (lVar2 != 0) {
      plVar5 = *(int64_t **)(system_message_buffer + 0x1cd8);
      iVar7 = *(int *)(param_2 + 0x357c);
      plVar6 = plVar9;
      if (*(int64_t *)(lVar2 + 0x1e0) != 0) {
        if (system_main_module_state != 0) {
          *(int64_t *)(lVar2 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
        }
        plVar6 = (int64_t *)((int64_t)(iVar7 * 2) * 0x10 + *(int64_t *)(lVar2 + 0x1e0));
        if ((plVar6 != (int64_t *)0x0) && (*plVar6 != 0)) {
          (**(code **)(*plVar5 + 0x70))(plVar5,*plVar6,2);
          lVar3 = system_message_buffer;
        }
      }
      plVar5[0x107e] = (int64_t)plVar6;
      SystemCore_ProcessorEx(*(uint64_t *)(lVar3 + 0x1cd8),1);
      if (*(int *)(lVar2 + 0x160) == 3) {
        local_var_148 = 0xffffffff;
      }
      else {
        local_var_148 = *(int32_t *)(param_2 + 0x357c);
      }
      RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0x10,lVar2);
      lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
      *(int64_t *)(lVar2 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
      lVar3 = lVar2 + 0x1a0;
      if ((((*(int64_t *)(lVar4 + 0x8540) != lVar3) || (*(int *)(lVar4 + 0x88bc) != -1)) ||
          (*(int *)(lVar4 + 0x8abc) != 0x10)) &&
         (((lVar3 == 0 || (*(int64_t *)(lVar2 + 0x1a8) != 0)) ||
          (*(int64_t *)(lVar2 + 0x1b0) != 0)))) {
        plStack_128 = plVar9;
        if (lVar3 != 0) {
          plStack_128 = *(int64_t **)(lVar2 + 0x1b0);
        }
        (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
                  (*(int64_t **)(lVar4 + 0x8400),0x21,1,&plStack_128);
        *(int64_t *)(lVar4 + 0x8540) = lVar3;
        *(int32_t *)(lVar4 + 0x88bc) = 0xffffffff;
        *(int32_t *)(lVar4 + 0x8abc) = 0x10;
        *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
      }
    }
    while (iVar7 = (int)plVar8, (uint64_t)(int64_t)iVar7 < (uint64_t)*(uint *)(param_2 + 0x26d0))
    {
      lVar3 = *(int64_t *)
               (*(int64_t *)(param_2 + 0x26d8 + ((uint64_t)plVar8 >> 0xb) * 8) + 0x10 +
               (uint64_t)(uint)(iVar7 + (int)((uint64_t)plVar8 >> 0xb) * -0x800) * 0x18);
      GenericFunction_1800dbd90(param_1,lVar3,param_2);
      lVar4 = SystemOptimizer(param_2);
      if (lVar4 != 0) {
        *(int32_t *)(lVar3 + 0xc4) = 1;
        lVar4 = SystemOptimizer(param_2);
        *(int32_t *)(lVar3 + 0xa4) = *(int32_t *)(lVar4 + 0x324);
      }
      if (lVar2 != 0) {
        *(int32_t *)(lVar3 + 0xa0) = *(int32_t *)(lVar2 + 0x324);
        *(int8_t *)(lVar3 + 0x91) = 1;
      }
      CoreEngine_0E8640(param_1,lVar3);
      plVar8 = (int64_t *)(uint64_t)(iVar7 + 1);
    }
    lVar3 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (((*(int64_t *)(lVar3 + 0x84b8) != 0) || (*(int *)(lVar3 + 0x8878) != -1)) ||
       (*(int *)(lVar3 + 0x8a78) != 0x10)) {
      local_var_120 = 0;
      (**(code **)(**(int64_t **)(lVar3 + 0x8400) + 0x40))
                (*(int64_t **)(lVar3 + 0x8400),0x10,1,&local_var_120);
      *(uint64_t *)(lVar3 + 0x84b8) = 0;
      *(int32_t *)(lVar3 + 0x8878) = 0xffffffff;
      *(int32_t *)(lVar3 + 0x8a78) = 0x10;
      *(int *)(lVar3 + 0x82b4) = *(int *)(lVar3 + 0x82b4) + 1;
    }
    lVar3 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (((*(int64_t *)(lVar3 + 0x8540) != 0) || (*(int *)(lVar3 + 0x88bc) != -1)) ||
       (*(int *)(lVar3 + 0x8abc) != 0x10)) {
      pplocal_var_130 = (void **)0x0;
      (**(code **)(**(int64_t **)(lVar3 + 0x8400) + 0x40))
                (*(int64_t **)(lVar3 + 0x8400),0x21,1,&pplocal_var_130);
      *(uint64_t *)(lVar3 + 0x8540) = 0;
      *(int32_t *)(lVar3 + 0x88bc) = 0xffffffff;
      *(int32_t *)(lVar3 + 0x8abc) = 0x10;
      *(int *)(lVar3 + 0x82b4) = *(int *)(lVar3 + 0x82b4) + 1;
    }
    plVar8 = *(int64_t **)(system_message_buffer + 0x1cd8);
    lVar3 = SystemLog_Manager(param_2);
    iVar7 = *(int *)(param_2 + 0x357c);
    if (*(int64_t *)(lVar3 + 0x1e0) != 0) {
      if (system_main_module_state != 0) {
        *(int64_t *)(lVar3 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
      }
      plVar9 = (int64_t *)((int64_t)(iVar7 * 2 + 1) * 0x10 + *(int64_t *)(lVar3 + 0x1e0));
      if ((plVar9 != (int64_t *)0x0) && (*plVar9 != 0)) {
        (**(code **)(*plVar8 + 0x70))(plVar8,*plVar9,4);
      }
    }
    plVar8[0x107e] = (int64_t)plVar9;
    SystemCore_ProcessorEx(*(uint64_t *)(system_message_buffer + 0x1cd8),1);
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
    SystemCore_Synchronizer(&plocal_var_a8);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_168);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1800dd0e0(int64_t param_1,int64_t param_2,char param_3)
void GenericFunction_1800dd0e0(int64_t param_1,int64_t param_2,char param_3)
{
  int iVar1;
  uint64_t *puVar2;
  bool bVar3;
  char cVar4;
  int64_t lVar5;
  int64_t lVar6;
  int32_t uVar7;
  int64_t lVar8;
  uint uVar9;
  int64_t *plVar11;
  int64_t *plVar12;
  int8_t stack_array_f8 [32];
  int8_t stack_array_d8 [8];
  int64_t *plStack_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  uint64_t local_var_b8;
  void **pplocal_var_b0;
  void *plocal_var_a8;
  int8_t *plocal_var_a0;
  int32_t local_var_98;
  int8_t stack_array_90 [72];
  uint64_t local_var_48;
  int64_t *plVar10;
  local_var_b8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_f8;
  lVar5 = SystemLog_Manager();
  plVar11 = (int64_t *)0x0;
  if ((lVar5 != 0) &&
     (cVar4 = Function_00f52384(param_1,param_2), lVar8 = system_message_buffer, cVar4 != '\0')) {
    plVar10 = *(int64_t **)(system_message_buffer + 0x1cd8);
    iVar1 = *(int *)(param_2 + 0x357c);
    plVar12 = plVar11;
    if (*(int64_t *)(lVar5 + 0x1e0) != 0) {
      if (system_main_module_state != 0) {
        *(int64_t *)(lVar5 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
      }
      plVar12 = (int64_t *)((int64_t)(iVar1 * 2) * 0x10 + *(int64_t *)(lVar5 + 0x1e0));
      if ((plVar12 != (int64_t *)0x0) && (*plVar12 != 0)) {
        (**(code **)(*plVar10 + 0x70))(plVar10,*plVar12,2);
        lVar8 = system_message_buffer;
      }
    }
    plVar10[0x107e] = (int64_t)plVar12;
    SystemCore_ProcessorEx(*(uint64_t *)(lVar8 + 0x1cd8),1);
    lVar6 = *(int64_t *)(system_message_buffer + 0x1cd8);
    *(int64_t *)(lVar5 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    lVar8 = lVar5 + 0x1a0;
    if ((((*(int64_t *)(lVar6 + 0x8540) != lVar8) || (*(int *)(lVar6 + 0x88bc) != -1)) ||
        (*(int *)(lVar6 + 0x8abc) != 0x10)) &&
       (((lVar8 == 0 || (*(int64_t *)(lVar5 + 0x1a8) != 0)) || (*(int64_t *)(lVar5 + 0x1b0) != 0))
       )) {
      plStack_d0 = plVar11;
      if (lVar8 != 0) {
        plStack_d0 = *(int64_t **)(lVar5 + 0x1b0);
      }
      (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 0x40))
                (*(int64_t **)(lVar6 + 0x8400),0x21,1,&plStack_d0);
      *(int64_t *)(lVar6 + 0x8540) = lVar8;
      *(int32_t *)(lVar6 + 0x88bc) = 0xffffffff;
      *(int32_t *)(lVar6 + 0x8abc) = 0x10;
      *(int *)(lVar6 + 0x82b4) = *(int *)(lVar6 + 0x82b4) + 1;
    }
  }
  iVar1 = *(int *)(param_2 + 0x1eb8);
  plVar10 = plVar11;
  if (0 < iVar1) {
    do {
      lVar8 = *(int64_t *)
               (*(int64_t *)(param_2 + 0x1ec0 + ((uint64_t)plVar10 >> 0xb) * 8) + 0x10 +
               (uint64_t)(uint)((int)plVar10 + (int)((uint64_t)plVar10 >> 0xb) * -0x800) * 0x18);
      if ((param_3 != '\0') &&
         (puVar2 = *(uint64_t **)(lVar8 + 0x2a0), puVar2 != (uint64_t *)0x0)) {
        lVar6 = *(int64_t *)(system_message_buffer + 0x1cd8);
        *(int8_t *)((int64_t)puVar2 + 0xc) = 1;
        plVar12 = *(int64_t **)(lVar6 + 0x8400);
        (**(code **)(*plVar12 + 0xd8))(plVar12,*puVar2);
      }
      lVar6 = SystemOptimizer(param_2);
      *(uint *)(lVar8 + 0xc4) = (uint)(lVar6 != 0);
      lVar6 = SystemOptimizer(param_2);
      uVar7 = 0;
      if (lVar6 != 0) {
        lVar6 = SystemOptimizer(param_2);
        uVar7 = *(int32_t *)(lVar6 + 0x324);
      }
      *(int32_t *)(lVar8 + 0xa4) = uVar7;
      lVar6 = SystemLog_Manager(param_2);
      uVar7 = 0;
      if (lVar6 != 0) {
        lVar6 = SystemLog_Manager(param_2);
        uVar7 = *(int32_t *)(lVar6 + 0x324);
      }
      *(int32_t *)(lVar8 + 0xa0) = uVar7;
      CoreEngine_0E8640(param_1,lVar8);
      if ((param_3 != '\0') && (*(uint64_t **)(lVar8 + 0x2a0) != (uint64_t *)0x0)) {
        plVar12 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
        (**(code **)(*plVar12 + 0xe0))(plVar12,**(uint64_t **)(lVar8 + 0x2a0));
      }
      uVar9 = (int)plVar10 + 1;
      plVar10 = (int64_t *)(uint64_t)uVar9;
    } while ((int)uVar9 < iVar1);
  }
  if ((*(byte *)(param_2 + 0x1bd8) & 0x20) != 0) {
    pplocal_var_b0 = &plocal_var_a8;
    plocal_var_a8 = &memory_allocator_3480_ptr;
    plocal_var_a0 = stack_array_90;
    local_var_98 = 0;
    stack_array_90[0] = 0;
    DataStructureManager0(&plocal_var_a8,&memory_allocator_3576_ptr);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_a8);
    SystemData_Processor(stack_array_d8,&memory_allocator_3576_ptr);
    DataStructure_e5f00(param_2,param_2 + 0x34e8);
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
    SystemCore_Synchronizer();
  }
  if (lVar5 != 0) {
    if ((((*(int *)(param_2 + 0x124bc) == 0) && (*(int *)(param_2 + 0x2920) == 0)) &&
        (*(int *)(param_2 + 0x2108) == 0)) && (*(int *)(param_2 + 0x1fe0) == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((*(int *)(param_1 + 0x12d8) != 0x12) && ((*(byte *)(param_2 + 0x1bd8) & 0x20) != 0)) &&
       (((*(int64_t *)(param_2 + 0x99b8) != 0 &&
         ((*(uint *)(*(int64_t *)(param_2 + 0x99b8) + 0x98) & 0x8000101e) != 0)) ||
        (((*(char *)(param_2 + 0x124c4) != '\0' || (bVar3)) || (*(int *)(param_2 + 0x1bdc) != 0)))))
       ) {
      lVar5 = *(int64_t *)(system_message_buffer + 0x1cd8);
      if (((*(int64_t *)(lVar5 + 0x84b8) != 0) || (*(int *)(lVar5 + 0x8878) != -1)) ||
         (*(int *)(lVar5 + 0x8a78) != 0x10)) {
        local_var_c8 = 0;
        (**(code **)(**(int64_t **)(lVar5 + 0x8400) + 0x40))
                  (*(int64_t **)(lVar5 + 0x8400),0x10,1,&local_var_c8);
        *(uint64_t *)(lVar5 + 0x84b8) = 0;
        *(int32_t *)(lVar5 + 0x8878) = 0xffffffff;
        *(int32_t *)(lVar5 + 0x8a78) = 0x10;
        *(int *)(lVar5 + 0x82b4) = *(int *)(lVar5 + 0x82b4) + 1;
      }
      lVar5 = *(int64_t *)(system_message_buffer + 0x1cd8);
      if (((*(int64_t *)(lVar5 + 0x8540) != 0) || (*(int *)(lVar5 + 0x88bc) != -1)) ||
         (*(int *)(lVar5 + 0x8abc) != 0x10)) {
        local_var_c0 = 0;
        (**(code **)(**(int64_t **)(lVar5 + 0x8400) + 0x40))
                  (*(int64_t **)(lVar5 + 0x8400),0x21,1,&local_var_c0);
        *(uint64_t *)(lVar5 + 0x8540) = 0;
        *(int32_t *)(lVar5 + 0x88bc) = 0xffffffff;
        *(int32_t *)(lVar5 + 0x8abc) = 0x10;
        *(int *)(lVar5 + 0x82b4) = *(int *)(lVar5 + 0x82b4) + 1;
      }
      plVar10 = *(int64_t **)(system_message_buffer + 0x1cd8);
      lVar5 = SystemLog_Manager(param_2);
      iVar1 = *(int *)(param_2 + 0x357c);
      if (*(int64_t *)(lVar5 + 0x1e0) != 0) {
        if (system_main_module_state != 0) {
          *(int64_t *)(lVar5 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
        }
        plVar11 = (int64_t *)((int64_t)(iVar1 * 2 + 1) * 0x10 + *(int64_t *)(lVar5 + 0x1e0));
        if ((plVar11 != (int64_t *)0x0) && (*plVar11 != 0)) {
          (**(code **)(*plVar10 + 0x70))(plVar10,*plVar11,4);
        }
      }
      plVar10[0x107e] = (int64_t)plVar11;
      SystemCore_ProcessorEx(*(uint64_t *)(system_message_buffer + 0x1cd8),1);
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_f8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1800dd660(uint64_t param_1,int64_t param_2)
void GenericFunction_1800dd660(uint64_t param_1,int64_t param_2)
{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int32_t uVar8;
  int64_t *plVar9;
  int64_t lVar10;
  uint uVar11;
  int64_t *plVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  uint64_t stack_special_x_10;
  uint64_t stack_special_x_20;
  int8_t stack_array_88 [32];
  int32_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  uint64_t local_var_28;
  uint64_t local_var_20;
  lVar4 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_2 + 0x99c0) + 0x50) + 0x30);
  local_var_50 = 0x1800dd69a;
  GenericFunction_1800d7010(param_1,param_2,*(uint64_t *)(lVar4 + 0x428),*(uint64_t *)(lVar4 + 0x448));
  lVar4 = system_message_buffer;
  uVar5 = 0;
  *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83f0) = 0;
  *(uint64_t *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x83c8) = 0;
  local_var_50 = 0x1800dd6de;
  SystemCore_ProcessorEx(*(uint64_t *)(lVar4 + 0x1cd8),
                (*(uint *)(param_2 + 4) & 0x4000000 | 0x18000000) >> 0x1a);
  local_var_50 = 0x1800dd6e6;
  lVar4 = SystemLog_Manager(param_2);
  if (*(int *)(lVar4 + 0x160) == 5) {
    uVar8 = *(int32_t *)(param_2 + 0x357c);
    uVar6 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  }
  else {
    uVar8 = 0xffffffff;
    uVar6 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  }
  local_var_28 = CONCAT44(local_var_28._4_4_,uVar8);
  local_var_50 = 0x1800dd730;
  RenderingEngineCore0(uVar6,0x10,lVar4);
  lVar3 = *(int64_t *)(system_message_buffer + 0x1cd8);
  *(int64_t *)(lVar4 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
  lVar10 = lVar4 + 0x1a0;
  if ((((*(int64_t *)(lVar3 + 0x8540) != lVar10) || (*(int *)(lVar3 + 0x88bc) != -1)) ||
      (*(int *)(lVar3 + 0x8abc) != 0x10)) &&
     (((lVar10 == 0 || (*(int64_t *)(lVar4 + 0x1a8) != 0)) || (*(int64_t *)(lVar4 + 0x1b0) != 0)))
     ) {
    stack_special_x_10 = uVar5;
    if (lVar10 != 0) {
      stack_special_x_10 = *(uint64_t *)(lVar4 + 0x1b0);
    }
    local_var_50 = 0x1800dd7b2;
    (**(code **)(**(int64_t **)(lVar3 + 0x8400) + 0x40))
              (*(int64_t **)(lVar3 + 0x8400),0x21,1,&stack_special_x_10);
    *(int64_t *)(lVar3 + 0x8540) = lVar10;
    *(int32_t *)(lVar3 + 0x88bc) = 0xffffffff;
    *(int32_t *)(lVar3 + 0x8abc) = 0x10;
    *(int *)(lVar3 + 0x82b4) = *(int *)(lVar3 + 0x82b4) + 1;
  }
  while (uVar11 = (uint)uVar5,
        (uint64_t)(int64_t)(int)uVar11 < (uint64_t)*(uint *)(param_2 + 0x2920)) {
    uVar7 = (uint64_t)(uVar11 & 0x7ff);
    lVar4 = param_2 + (uVar5 >> 0xb) * 8;
    *(int32_t *)(*(int64_t *)(*(int64_t *)(lVar4 + 0x2928) + 0x10 + uVar7 * 0x18) + 0xc4) = 1;
    *(int32_t *)(*(int64_t *)(*(int64_t *)(lVar4 + 0x2928) + 0x10 + uVar7 * 0x18) + 0xa4) =
         *(int32_t *)
          (*(int64_t *)
            (*(int64_t *)(*(int64_t *)(*(int64_t *)(param_2 + 0x99c0) + 0x50) + 0x30) + 0x428) +
          0x324);
    *(int32_t *)(*(int64_t *)(*(int64_t *)(lVar4 + 0x2928) + 0x10 + uVar7 * 0x18) + 0xa0) = 0;
    local_var_50 = 0x1800dd873;
    CoreEngine_0E8640(param_1,*(uint64_t *)(*(int64_t *)(lVar4 + 0x2928) + 0x10 + uVar7 * 0x18));
    uVar5 = (uint64_t)(uVar11 + 1);
  }
  plVar9 = (int64_t *)0x0;
  lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if (((*(int64_t *)(lVar4 + 0x84b8) != 0) || (*(int *)(lVar4 + 0x8878) != -1)) ||
     (lVar3 = system_message_buffer, *(int *)(lVar4 + 0x8a78) != 0x10)) {
    local_var_60 = 0x1800d74cb;
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
              (*(int64_t **)(lVar4 + 0x8400),0x10,1,&local_buffer_00000008);
    lVar3 = system_message_buffer;
    *(uint64_t *)(lVar4 + 0x84b8) = 0;
    *(int32_t *)(lVar4 + 0x8878) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8a78) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(int64_t *)(lVar3 + 0x1cd8);
  if (((*(int64_t *)(lVar4 + 0x8540) != 0) || (*(int *)(lVar4 + 0x88bc) != -1)) ||
     (*(int *)(lVar4 + 0x8abc) != 0x10)) {
    stack_special_x_10 = 0;
    local_var_60 = 0x1800d7535;
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
              (*(int64_t **)(lVar4 + 0x8400),0x21,1,&stack_special_x_10);
    lVar3 = system_message_buffer;
    *(uint64_t *)(lVar4 + 0x8540) = 0;
    *(int32_t *)(lVar4 + 0x88bc) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8abc) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(int64_t *)(lVar3 + 0x1cd8);
  if (((*(int64_t *)(lVar4 + 0x8590) != 0) || (*(int *)(lVar4 + 0x88e4) != -1)) ||
     (*(int *)(lVar4 + 0x8ae4) != 0x10)) {
    local_var_60 = 0x1800d759f;
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
              (*(int64_t **)(lVar4 + 0x8400),0x2b,1,&local_buffer_00000018);
    lVar3 = system_message_buffer;
    *(uint64_t *)(lVar4 + 0x8590) = 0;
    *(int32_t *)(lVar4 + 0x88e4) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8ae4) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(int64_t *)(lVar3 + 0x1cd8);
  if (((*(int64_t *)(lVar4 + 0x8440) != 0) || (*(int *)(lVar4 + 0x883c) != -1)) ||
     (*(int *)(lVar4 + 0x8a3c) != 0x10)) {
    stack_special_x_20 = 0;
    local_var_60 = 0x1800d7608;
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
              (*(int64_t **)(lVar4 + 0x8400),1,1,&stack_special_x_20);
    lVar3 = system_message_buffer;
    *(uint64_t *)(lVar4 + 0x8440) = 0;
    *(int32_t *)(lVar4 + 0x883c) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8a3c) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(int64_t *)(lVar3 + 0x1cd8);
  if (((*(int64_t *)(lVar4 + 0x8458) != 0) || (*(int *)(lVar4 + 0x8848) != -1)) ||
     (*(int *)(lVar4 + 0x8a48) != 0x10)) {
    local_var_38 = 0;
    local_var_60 = 0x1800d7672;
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
              (*(int64_t **)(lVar4 + 0x8400),4,1,&local_var_38);
    lVar3 = system_message_buffer;
    *(uint64_t *)(lVar4 + 0x8458) = 0;
    *(int32_t *)(lVar4 + 0x8848) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8a48) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(int64_t *)(lVar3 + 0x1cd8);
  if (((*(int64_t *)(lVar4 + 0x8468) != 0) || (*(int *)(lVar4 + 0x8850) != -1)) ||
     (*(int *)(lVar4 + 0x8a50) != 0x10)) {
    local_var_30 = 0;
    local_var_60 = 0x1800d76dc;
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
              (*(int64_t **)(lVar4 + 0x8400),6,1,&local_var_30);
    lVar3 = system_message_buffer;
    *(uint64_t *)(lVar4 + 0x8468) = 0;
    *(int32_t *)(lVar4 + 0x8850) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8a50) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  plVar2 = *(int64_t **)(lVar3 + 0x1cd8);
  local_var_60 = 0x1800d7713;
  lVar4 = SystemOptimizer(param_2);
  iVar1 = *(int *)(param_2 + 0x3578);
  plVar12 = plVar9;
  if (*(int64_t *)(lVar4 + 0x1d8) != 0) {
    if (system_main_module_state != 0) {
      *(int64_t *)(lVar4 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    }
    plVar12 = (int64_t *)
              ((int64_t)(int)((uint)*(byte *)(lVar4 + 0x335) * iVar1) * 0x10 +
              *(int64_t *)(lVar4 + 0x1d8));
    if ((plVar12 != (int64_t *)0x0) && (*plVar12 != 0)) {
      local_var_60 = 0x1800d776e;
      (**(code **)(*plVar2 + 0x70))(plVar2);
    }
  }
  lVar4 = system_message_buffer;
  plVar2[0x1077] = (int64_t)plVar12;
  plVar2 = *(int64_t **)(lVar4 + 0x1cd8);
  local_var_60 = 0x1800d7790;
  lVar4 = SystemLog_Manager(param_2);
  iVar1 = *(int *)(param_2 + 0x357c);
  if (*(int64_t *)(lVar4 + 0x1e0) != 0) {
    if (system_main_module_state != 0) {
      *(int64_t *)(lVar4 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    }
    plVar9 = (int64_t *)((int64_t)(iVar1 * 2 + 1) * 0x10 + *(int64_t *)(lVar4 + 0x1e0));
    if ((plVar9 != (int64_t *)0x0) && (*plVar9 != 0)) {
      local_var_60 = 0x1800d77e8;
      (**(code **)(*plVar2 + 0x70))(plVar2);
    }
  }
  lVar4 = system_message_buffer;
  plVar2[0x107e] = (int64_t)plVar9;
  lVar4 = *(int64_t *)(lVar4 + 0x1cd8);
  uVar5 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_88;
  lVar3 = *(int64_t *)(lVar4 + 0x83b8);
  bVar13 = lVar3 != *(int64_t *)(lVar4 + 0x8378);
  if (bVar13) {
    *(int64_t *)(lVar4 + 0x8378) = lVar3;
  }
  if (lVar3 == 0) {
    local_var_48 = 0;
  }
  else {
    local_var_48 = *(uint64_t *)(lVar3 + 8);
  }
  lVar3 = *(int64_t *)(lVar4 + 0x83c0);
  bVar14 = lVar3 != *(int64_t *)(lVar4 + 0x8380);
  if (bVar14) {
    *(int64_t *)(lVar4 + 0x8380) = lVar3;
  }
  if (lVar3 == 0) {
    local_var_40 = 0;
  }
  else {
    local_var_40 = *(uint64_t *)(lVar3 + 8);
  }
  lVar3 = *(int64_t *)(lVar4 + 0x83c8);
  bVar15 = lVar3 != *(int64_t *)(lVar4 + 0x8388);
  if (bVar15) {
    *(int64_t *)(lVar4 + 0x8388) = lVar3;
  }
  if (lVar3 == 0) {
    local_var_38 = 0;
  }
  else {
    local_var_38 = *(uint64_t *)(lVar3 + 8);
  }
  lVar3 = *(int64_t *)(lVar4 + 0x83d0);
  bVar16 = lVar3 != *(int64_t *)(lVar4 + 0x8390);
  if (bVar16) {
    *(int64_t *)(lVar4 + 0x8390) = lVar3;
  }
  if (lVar3 == 0) {
    local_var_30 = 0;
  }
  else {
    local_var_30 = *(uint64_t *)(lVar3 + 8);
  }
  lVar3 = *(int64_t *)(lVar4 + 0x83d8);
  bVar17 = lVar3 != *(int64_t *)(lVar4 + 0x8398);
  if (bVar17) {
    *(int64_t *)(lVar4 + 0x8398) = lVar3;
  }
  if (lVar3 == 0) {
    local_var_28 = 0;
  }
  else {
    local_var_28 = *(uint64_t *)(lVar3 + 8);
  }
  lVar3 = *(int64_t *)(lVar4 + 0x83e0);
  bVar18 = lVar3 != *(int64_t *)(lVar4 + 0x83a0);
  if (bVar18) {
    *(int64_t *)(lVar4 + 0x83a0) = lVar3;
  }
  if (lVar3 == 0) {
    local_var_20 = 0;
  }
  else {
    local_var_20 = *(uint64_t *)(lVar3 + 8);
  }
  lVar3 = *(int64_t *)(lVar4 + 0x83e8);
  bVar19 = lVar3 != *(int64_t *)(lVar4 + 0x83a8);
  if (bVar19) {
    *(int64_t *)(lVar4 + 0x83a8) = lVar3;
  }
  lVar3 = *(int64_t *)(lVar4 + 0x83f0);
  bVar20 = *(int64_t *)(lVar4 + 0x83b0) != lVar3;
  if (bVar20) {
    *(int64_t *)(lVar4 + 0x83b0) = lVar3;
  }
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint64_t *)(lVar3 + 8);
  }
  if ((bVar19 || (bVar18 || (bVar17 || (bVar16 || (bVar15 || (bVar14 || bVar13)))))) || (bVar20)) {
    local_var_50 = 0xffffffffffffffff;
    local_var_58 = 0;
    local_var_60 = CONCAT44(local_var_60._4_4_,0xffffffff);
    local_var_68 = 1;
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x110))
              (*(int64_t **)(lVar4 + 0x8400),1,&local_var_48,uVar6);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(uVar5 ^ (uint64_t)stack_array_88);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address