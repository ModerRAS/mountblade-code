/* 函数别名定义: DataStructureManager */
#define DataStructureManager DataStructureManager
/* 函数别名定义: RenderingEngineCore */
#define RenderingEngineCore RenderingEngineCore
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_01_part044_sub002_sub002.c - 1 个函数
// 函数: void GenericFunction_1800cd7d0(int64_t param_1,int64_t param_2)
void GenericFunction_1800cd7d0(int64_t param_1,int64_t param_2)
{
  float fVar1;
  float fVar2;
  int8_t uVar3;
  int16_t uVar4;
  int64_t *plVar5;
  char cVar6;
  short sVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int iVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  void *puVar16;
  int64_t lVar17;
  uint uVar18;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar19;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  int8_t stack_array_908 [32];
  uint local_var_8e8;
  int8_t local_var_8e0;
  void **pplocal_var_8d8;
  int8_t local_var_8d0;
  int8_t local_var_8cf;
  int8_t local_var_8ce;
  int8_t local_var_8cd;
  int8_t local_var_8cc;
  int8_t local_var_8cb;
  int8_t local_var_8ca;
  int8_t local_var_8c9;
  int8_t local_var_8c8;
  int8_t local_var_8c7;
  int8_t local_var_8c6;
  int8_t local_var_8c5;
  int8_t stack_array_8c4 [4];
  uint64_t local_var_8c0;
  uint64_t local_var_8b8;
  int32_t stack_array_8b0 [2];
  void **pplocal_var_8a8;
  uint64_t local_var_8a0;
  int iStack_898;
  int iStack_894;
  uint64_t local_var_890;
  uint64_t local_var_888;
  uint64_t local_var_880;
  uint64_t local_var_878;
  uint64_t local_var_870;
  uint64_t local_var_868;
  int64_t *plStack_860;
  uint64_t local_var_858;
  uint64_t local_var_850;
  void *plocal_var_848;
  int8_t *plocal_var_840;
  int32_t local_var_838;
  int8_t stack_array_830 [72];
  void *plocal_var_7e8;
  int8_t *plocal_var_7e0;
  int32_t local_var_7d8;
  int8_t stack_array_7d0 [72];
  void *plocal_var_788;
  int8_t *plocal_var_780;
  int32_t local_var_778;
  int8_t stack_array_770 [72];
  void *plocal_var_728;
  int8_t *plocal_var_720;
  int32_t local_var_718;
  int8_t stack_array_710 [72];
  void *plocal_var_6c8;
  int8_t *plocal_var_6c0;
  int32_t local_var_6b8;
  int8_t stack_array_6b0 [72];
  void *plocal_var_668;
  int8_t *plocal_var_660;
  int32_t local_var_658;
  int8_t stack_array_650 [72];
  void *plocal_var_608;
  int8_t *plocal_var_600;
  int32_t local_var_5f8;
  int8_t stack_array_5f0 [72];
  void *plocal_var_5a8;
  int8_t *plocal_var_5a0;
  int32_t local_var_598;
  int8_t stack_array_590 [72];
  void *plocal_var_548;
  int8_t *plocal_var_540;
  int32_t local_var_538;
  int8_t stack_array_530 [72];
  void *plocal_var_4e8;
  int8_t *plocal_var_4e0;
  int32_t local_var_4d8;
  int8_t stack_array_4d0 [72];
  void *plocal_var_488;
  int8_t *plocal_var_480;
  int32_t local_var_478;
  int8_t stack_array_470 [72];
  void *plocal_var_428;
  int8_t *plocal_var_420;
  int32_t local_var_418;
  int8_t stack_array_410 [72];
  void *plocal_var_3c8;
  int8_t *plocal_var_3c0;
  int32_t local_var_3b8;
  int8_t stack_array_3b0 [72];
  void *plocal_var_368;
  int8_t *plocal_var_360;
  int32_t local_var_358;
  int8_t stack_array_350 [72];
  void *plocal_var_308;
  int8_t *plocal_var_300;
  int32_t local_var_2f8;
  int8_t stack_array_2f0 [72];
  void *plocal_var_2a8;
  int8_t *plocal_var_2a0;
  int32_t local_var_298;
  int8_t stack_array_290 [72];
  void *plocal_var_248;
  int8_t *plocal_var_240;
  int32_t local_var_238;
  int8_t stack_array_230 [72];
  void *plocal_var_1e8;
  int8_t *plocal_var_1e0;
  int32_t local_var_1d8;
  int8_t stack_array_1d0 [72];
  void *plocal_var_188;
  int8_t *plocal_var_180;
  int32_t local_var_178;
  int8_t stack_array_170 [72];
  void *plocal_var_128;
  int8_t *plocal_var_120;
  int32_t local_var_118;
  int8_t stack_array_110 [72];
  void *plocal_var_c8;
  int8_t *plocal_var_c0;
  int32_t local_var_b8;
  int8_t stack_array_b0 [72];
  uint64_t local_var_68;
  local_var_850 = 0xfffffffffffffffe;
  local_var_68 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_908;
  SystemData_Processor(&local_var_8d0,&rendering_buffer_2544_ptr);
  pplocal_var_8d8 = &plocal_var_848;
  uVar15 = 0;
  plocal_var_848 = &memory_allocator_3480_ptr;
  plocal_var_840 = stack_array_830;
  local_var_838 = 0;
  stack_array_830[0] = 0;
  DataStructureManager0(&plocal_var_848,&rendering_buffer_2592_ptr);
  SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_848);
  SystemFunction_0001800e2bf0(param_1,param_2);
  GenericFunction_1800cd410(param_1);
  SystemCore_Synchronizer(&plocal_var_848);
  system_system_data_memory = system_system_data_memory + -1;
  (**(code **)(*system_system_data_memory + 0x20))();
  if ((((*(byte *)(param_2 + 0x1bd8) & 0x20) != 0) && (*(char *)(param_2 + 0x9a31) != '\0')) &&
     (cVar6 = SystemFunction_0001800ed880(), cVar6 != '\0')) {
    GenericFunction_1800c6320(extraout_XMM0_Qa,param_2);
  }
  plVar8 = (int64_t *)SystemLog_Manager(param_2);
  if (plVar8 != (int64_t *)0x0) {
    plStack_860 = plVar8;
    (**(code **)(*plVar8 + 0x28))(plVar8);
  }
  plStack_860 = *(int64_t **)(param_2 + 0x9968);
  *(int64_t **)(param_2 + 0x9968) = plVar8;
  if (plStack_860 != (int64_t *)0x0) {
    (**(code **)(*plStack_860 + 0x38))();
  }
  lVar10 = system_message_buffer;
  if ((((*(uint *)(param_2 + 4) & 0x10000000) == 0) &&
      (lVar12 = *(int64_t *)(param_2 + 0x99e0), lVar12 != 0)) &&
     (*(int64_t *)(lVar12 + 0x58) - *(int64_t *)(lVar12 + 0x50) >> 3 != 0)) {
    *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83b8) = 0;
    *(uint64_t *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x83c0) = 0;
    *(uint64_t *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x83c8) = 0;
    *(uint64_t *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x83d0) = 0;
    *(uint64_t *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x83d8) = 0;
    *(uint64_t *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x83e0) = 0;
    SystemCore_ProcessorEx(*(uint64_t *)(lVar10 + 0x1cd8),6);
    uVar11 = *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83b8);
    plVar8 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83f0);
    *(int8_t *)(param_1 + 0x1350) = 1;
    DataStructure_c8260(*(uint64_t *)(param_2 + 0x99e0),param_2,system_system_control_memory);
    DataStructure_c8fe0(*(uint64_t *)(param_2 + 0x99e0),param_2);
    DataStructure_c84d0(*(uint64_t *)(param_2 + 0x99e0),param_2);
    uVar19 = DataStructure_c8380(*(uint64_t *)(param_2 + 0x99e0),param_2);
    GenericFunction_1800debc0(uVar19,param_2,0);
    *(int8_t *)(param_1 + 0x1350) = 0;
    lVar10 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (((*(int64_t *)(lVar10 + 0x8540) != 0) || (*(int *)(lVar10 + 0x88bc) != -1)) ||
       (*(int *)(lVar10 + 0x8abc) != 0x10)) {
      local_var_858 = 0;
      (**(code **)(**(int64_t **)(lVar10 + 0x8400) + 0x40))
                (*(int64_t **)(lVar10 + 0x8400),0x21,1,&local_var_858);
      *(uint64_t *)(lVar10 + 0x8540) = 0;
      *(int32_t *)(lVar10 + 0x88bc) = 0xffffffff;
      *(int32_t *)(lVar10 + 0x8abc) = 0x10;
      *(int *)(lVar10 + 0x82b4) = *(int *)(lVar10 + 0x82b4) + 1;
    }
    SystemCore_MemoryManager(*(uint64_t *)(system_message_buffer + 0x1cd8),0,uVar11);
    plVar5 = *(int64_t **)(system_message_buffer + 0x1cd8);
    if ((plVar8 != (int64_t *)0x0) && (*plVar8 != 0)) {
      (**(code **)(*plVar5 + 0x70))(plVar5,*plVar8,2);
    }
    lVar10 = system_message_buffer;
    plVar5[0x107e] = (int64_t)plVar8;
    SystemCore_ProcessorEx(*(uint64_t *)(lVar10 + 0x1cd8),1);
  }
  if (((*(char *)(param_2 + 0x9a31) == '\0') ||
      (lVar10 = *(int64_t *)(param_2 + 0x99c0), lVar10 == 0)) ||
     (*(int64_t *)(lVar10 + 0x58) - *(int64_t *)(lVar10 + 0x50) >> 3 == 0)) {
    uVar11 = *(uint64_t *)(system_message_buffer + 0x1cd8);
    uVar19 = GenericFunction_1800bdc80();
    local_var_8e8 = 0xffffffff;
    RenderingEngineCore0(uVar11,0x18,uVar19);
  }
  else {
    SystemData_Processor(&local_var_8cf,&rendering_buffer_2580_ptr);
    GenericFunction_1800db610(param_1,param_2);
    lVar10 = *(int64_t *)(param_2 + 0x99c0);
    if (((uint64_t)(*(int64_t *)(lVar10 + 0x58) - *(int64_t *)(lVar10 + 0x50) >> 3) < 2) ||
       (lVar10 = *(int64_t *)(*(int64_t *)(*(int64_t *)(lVar10 + 0x58) + -8) + 0x428),
       lVar10 == 0)) {
      uVar11 = *(uint64_t *)(system_message_buffer + 0x1cd8);
      lVar10 = GenericFunction_1800bdc80();
    }
    else {
      uVar11 = *(uint64_t *)(system_message_buffer + 0x1cd8);
    }
    local_var_8e8 = 0xffffffff;
    RenderingEngineCore0(uVar11,0x18,lVar10);
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
  }
  if (*(int64_t *)(param_2 + 0x34d8) != 0) {
    GenericFunction_1800cd410(param_1,param_2,0,1);
    GenericFunction_1800dc070(param_1,param_2,1);
  }
  if (((*(char *)(param_2 + 0x9a31) != '\0') &&
      (lVar10 = *(int64_t *)(param_2 + 0x99c8), lVar10 != 0)) &&
     ((*(int64_t *)(lVar10 + 0x58) - *(int64_t *)(lVar10 + 0x50) >> 3 != 0 &&
      (*(int64_t *)(param_2 + 0x9688) != 0)))) {
    pplocal_var_8d8 = &plocal_var_7e8;
    plocal_var_7e8 = &memory_allocator_3480_ptr;
    plocal_var_7e0 = stack_array_7d0;
    local_var_7d8 = 0;
    stack_array_7d0[0] = 0;
    DataStructureManager0(&plocal_var_7e8,&rendering_buffer_2648_ptr);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_7e8);
    lVar10 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (((*(int64_t *)(lVar10 + 0x8510) != 0) || (*(int *)(lVar10 + 0x88a4) != -1)) ||
       (*(int *)(lVar10 + 0x8aa4) != 0x10)) {
      local_var_890 = 0;
      (**(code **)(**(int64_t **)(lVar10 + 0x8400) + 0x40))
                (*(int64_t **)(lVar10 + 0x8400),0x1b,1,&local_var_890);
      *(uint64_t *)(lVar10 + 0x8510) = 0;
      *(int32_t *)(lVar10 + 0x88a4) = 0xffffffff;
      *(int32_t *)(lVar10 + 0x8aa4) = 0x10;
      *(int *)(lVar10 + 0x82b4) = *(int *)(lVar10 + 0x82b4) + 1;
    }
    uVar11 = *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83b8);
    plVar8 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83f0);
    *(int8_t *)(param_1 + 0x1350) = 1;
    DataStructure_c8260(*(uint64_t *)(param_2 + 0x99c8),param_2,system_system_control_memory);
    DataStructure_c8fe0(*(uint64_t *)(param_2 + 0x99c8),param_2);
    DataStructure_c84d0(*(uint64_t *)(param_2 + 0x99c8),param_2);
    lVar10 = system_message_buffer;
    *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83f0) = 0;
    SystemCore_ProcessorEx(*(uint64_t *)(lVar10 + 0x1cd8),1);
    uVar19 = *(uint64_t *)(system_message_buffer + 0x1cd8);
    uVar9 = SystemLog_Manager(param_2);
    local_var_8e8 = 0xffffffff;
    RenderingEngineCore0(uVar19,0x21,uVar9);
    uVar19 = DataStructure_c8380(*(uint64_t *)(param_2 + 0x99c8),param_2);
    GenericFunction_1800debc0(uVar19,param_2,0);
    *(int8_t *)(param_1 + 0x1350) = 0;
    lVar10 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (((*(int64_t *)(lVar10 + 0x8540) != 0) || (*(int *)(lVar10 + 0x88bc) != -1)) ||
       (*(int *)(lVar10 + 0x8abc) != 0x10)) {
      local_var_888 = 0;
      (**(code **)(**(int64_t **)(lVar10 + 0x8400) + 0x40))
                (*(int64_t **)(lVar10 + 0x8400),0x21,1,&local_var_888);
      *(uint64_t *)(lVar10 + 0x8540) = 0;
      *(int32_t *)(lVar10 + 0x88bc) = 0xffffffff;
      *(int32_t *)(lVar10 + 0x8abc) = 0x10;
      *(int *)(lVar10 + 0x82b4) = *(int *)(lVar10 + 0x82b4) + 1;
    }
    SystemCore_MemoryManager(*(uint64_t *)(system_message_buffer + 0x1cd8),0,uVar11);
    plVar5 = *(int64_t **)(system_message_buffer + 0x1cd8);
    if ((plVar8 != (int64_t *)0x0) && (*plVar8 != 0)) {
      (**(code **)(*plVar5 + 0x70))(plVar5,*plVar8,2);
    }
    lVar10 = system_message_buffer;
    plVar5[0x107e] = (int64_t)plVar8;
    SystemCore_ProcessorEx(*(uint64_t *)(lVar10 + 0x1cd8),1);
    SystemCore_Synchronizer(&plocal_var_7e8);
    lVar10 = *(int64_t *)
              (*(int64_t *)(*(int64_t *)(*(int64_t *)(param_2 + 0x99c8) + 0x58) + -8) + 0x428);
    if (lVar10 != 0) {
      uVar11 = *(uint64_t *)(system_message_buffer + 0x1cd8);
      goto LAB_1800cdf36;
    }
  }
  uVar11 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  lVar10 = GenericFunction_1800bd5c0();
LAB_1800cdf36:
  local_var_8e8 = 0xffffffff;
  RenderingEngineCore0(uVar11,0x1b,lVar10);
  if (*(int64_t *)(param_2 + 0x97a0) != 0) {
    GenericFunction_1800e6820(param_1,param_2);
  }
  if ((((*(uint *)(param_2 + 4) & 0x10000000) == 0) && ((*(byte *)(param_2 + 0x1bd8) & 0x20) != 0))
     && (lVar10 = GenericFunction_180178540(), lVar10 != 0)) {
    uVar11 = GenericFunction_180178540();
    GenericFunction_180178650(extraout_XMM0_Qa_00,uVar11);
  }
  lVar17 = system_message_buffer;
  lVar12 = system_main_module_state;
  lVar10 = *(int64_t *)(param_2 + 0x99d0);
  if (((lVar10 != 0) && (*(int64_t *)(lVar10 + 0x58) - *(int64_t *)(lVar10 + 0x50) >> 3 != 0)) &&
     ((*(int *)(SYSTEM_STATE_MANAGER + 0xc40) != 0 && (*(int64_t *)(param_2 + 0x11d10) != 0)))) {
    lVar10 = *(int64_t *)(param_2 + 0x11ee0);
    if (((lVar10 != 0) &&
        (*(char *)((int64_t)*(int *)(system_message_buffer + 0x1d40) * 0xd0 + 0xcb +
                  *(int64_t *)(system_message_buffer + 0x1d20)) == '\0')) &&
       (*(char *)(lVar10 + 0x156) == '\x01')) {
      if ((*(int64_t *)(lVar10 + 0x1e0) != 0) && (system_main_module_state != 0)) {
        *(int64_t *)(lVar10 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
        lVar10 = *(int64_t *)(param_2 + 0x11ee0);
      }
      if (*(short *)(lVar10 + 0x332) == 4) {
        if ((*(int64_t *)(lVar10 + 0x1e0) != 0) && (lVar12 != 0)) {
          *(int64_t *)(lVar10 + 0x340) = (int64_t)*(int *)(lVar12 + 0x224);
          lVar10 = *(int64_t *)(param_2 + 0x11ee0);
        }
        if ((*(int64_t *)(lVar10 + 0x1e0) != 0) && (lVar12 != 0)) {
          *(int64_t *)(lVar10 + 0x340) = (int64_t)*(int *)(lVar12 + 0x224);
          lVar10 = *(int64_t *)(param_2 + 0x11ee0);
        }
        if ((*(int64_t *)(lVar10 + 0x1e0) != 0) && (lVar12 != 0)) {
          *(int64_t *)(lVar10 + 0x340) = (int64_t)*(int *)(lVar12 + 0x224);
        }
      }
    }
    lVar10 = *(int64_t *)(lVar17 + 0x1cd8);
    if (((*(int64_t *)(lVar10 + 0x8508) != 0) || (*(int *)(lVar10 + 0x88a0) != -1)) ||
       (*(int *)(lVar10 + 0x8aa0) != 0x10)) {
      local_var_880 = 0;
      (**(code **)(**(int64_t **)(lVar10 + 0x8400) + 0x40))
                (*(int64_t **)(lVar10 + 0x8400),0x1a,1,&local_var_880);
      *(uint64_t *)(lVar10 + 0x8508) = 0;
      *(int32_t *)(lVar10 + 0x88a0) = 0xffffffff;
      *(int32_t *)(lVar10 + 0x8aa0) = 0x10;
      *(int *)(lVar10 + 0x82b4) = *(int *)(lVar10 + 0x82b4) + 1;
      lVar17 = system_message_buffer;
    }
    uVar11 = *(uint64_t *)(*(int64_t *)(lVar17 + 0x1cd8) + 0x83b8);
    plVar8 = *(int64_t **)(*(int64_t *)(lVar17 + 0x1cd8) + 0x83f0);
    *(int8_t *)(param_1 + 0x1350) = 1;
    *(uint64_t *)(*(int64_t *)(lVar17 + 0x1cd8) + 0x83f0) = 0;
    SystemCore_ProcessorEx(*(uint64_t *)(lVar17 + 0x1cd8),1);
    uVar19 = *(uint64_t *)(system_message_buffer + 0x1cd8);
    uVar9 = SystemLog_Manager(param_2);
    local_var_8e8 = 0xffffffff;
    RenderingEngineCore0(uVar19,0x21,uVar9);
    DataStructure_c8260(*(uint64_t *)(param_2 + 0x99d0),param_2,system_system_control_memory);
    DataStructure_c8fe0(*(uint64_t *)(param_2 + 0x99d0),param_2);
    DataStructure_c84d0(*(uint64_t *)(param_2 + 0x99d0),param_2);
    uVar19 = DataStructure_c8380(*(uint64_t *)(param_2 + 0x99d0),param_2);
    lVar10 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (((*(int64_t *)(lVar10 + 0x8540) != 0) || (*(int *)(lVar10 + 0x88bc) != -1)) ||
       (*(int *)(lVar10 + 0x8abc) != 0x10)) {
      local_var_878 = 0;
      uVar19 = (**(code **)(**(int64_t **)(lVar10 + 0x8400) + 0x40))
                         (*(int64_t **)(lVar10 + 0x8400),0x21,1,&local_var_878);
      *(uint64_t *)(lVar10 + 0x8540) = 0;
      *(int32_t *)(lVar10 + 0x88bc) = 0xffffffff;
      *(int32_t *)(lVar10 + 0x8abc) = 0x10;
      *(int *)(lVar10 + 0x82b4) = *(int *)(lVar10 + 0x82b4) + 1;
    }
    GenericFunction_1800debc0(uVar19,param_2,0);
    *(int8_t *)(param_1 + 0x1350) = 0;
    lVar10 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (((*(int64_t *)(lVar10 + 0x84b8) != 0) || (*(int *)(lVar10 + 0x8878) != -1)) ||
       (*(int *)(lVar10 + 0x8a78) != 0x10)) {
      local_var_870 = 0;
      (**(code **)(**(int64_t **)(lVar10 + 0x8400) + 0x40))
                (*(int64_t **)(lVar10 + 0x8400),0x10,1,&local_var_870);
      *(uint64_t *)(lVar10 + 0x84b8) = 0;
      *(int32_t *)(lVar10 + 0x8878) = 0xffffffff;
      *(int32_t *)(lVar10 + 0x8a78) = 0x10;
      *(int *)(lVar10 + 0x82b4) = *(int *)(lVar10 + 0x82b4) + 1;
    }
    lVar10 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (((*(int64_t *)(lVar10 + 0x8540) != 0) || (*(int *)(lVar10 + 0x88bc) != -1)) ||
       (*(int *)(lVar10 + 0x8abc) != 0x10)) {
      local_var_868 = 0;
      (**(code **)(**(int64_t **)(lVar10 + 0x8400) + 0x40))
                (*(int64_t **)(lVar10 + 0x8400),0x21,1,&local_var_868);
      *(uint64_t *)(lVar10 + 0x8540) = 0;
      *(int32_t *)(lVar10 + 0x88bc) = 0xffffffff;
      *(int32_t *)(lVar10 + 0x8abc) = 0x10;
      *(int *)(lVar10 + 0x82b4) = *(int *)(lVar10 + 0x82b4) + 1;
    }
    SystemCore_MemoryManager(*(uint64_t *)(system_message_buffer + 0x1cd8),0,uVar11);
    plVar5 = *(int64_t **)(system_message_buffer + 0x1cd8);
    if ((plVar8 != (int64_t *)0x0) && (*plVar8 != 0)) {
      (**(code **)(*plVar5 + 0x70))(plVar5,*plVar8,2);
    }
    lVar10 = system_message_buffer;
    plVar5[0x107e] = (int64_t)plVar8;
    SystemCore_ProcessorEx(*(uint64_t *)(lVar10 + 0x1cd8),1);
    lVar10 = *(int64_t *)
              (*(int64_t *)(*(int64_t *)(*(int64_t *)(param_2 + 0x99d0) + 0x58) + -8) + 0x428);
    if (lVar10 != 0) {
      local_var_8e8 = 0xffffffff;
      RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0x1a,lVar10,0x10);
    }
  }
  cVar6 = SystemFunction_0001800e2bf0(param_1,param_2);
  if (cVar6 == '\0') {
    SystemData_Processor(&local_var_8ce,&rendering_buffer_2624_ptr);
    if (((*(int *)(system_system_data_memory + 0x4d0) != 0) && ((*(byte *)(param_2 + 0x35c0) & 1) != 0)) &&
       (iVar13 = *(int *)(param_2 + 0x3138), uVar14 = uVar15, 0 < iVar13)) {
      do {
        CoreEngine_0E8640(param_1,*(uint64_t *)
                               (*(int64_t *)(param_2 + 0x3140 + (uVar14 >> 0xb) * 8) + 0x10 +
                               (uint64_t)(uint)((int)uVar14 + (int)(uVar14 >> 0xb) * -0x800) * 0x18
                               ));
        uVar18 = (int)uVar14 + 1;
        uVar14 = (uint64_t)uVar18;
      } while ((int)uVar18 < iVar13);
    }
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
  }
  else {
    if (((*(int *)(param_2 + 0x1d90) == 0) && (*(int *)(param_2 + 0x2dc0) == 0)) &&
       (*(int *)(param_2 + 0x2358) == 0)) {
      uVar11 = GenericFunction_1800d7010();
      GenericFunction_1800debc0(uVar11,param_2,0);
      lVar10 = system_message_buffer;
      *(float *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1be0) =
           0.5 / (float)(int)*(float *)(param_2 + 0x11c20);
      *(float *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x1be4) =
           0.5 / (float)(int)*(float *)(param_2 + 0x11c24);
      *(float *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x1be8) = 1.0 / (float)*(int *)(param_2 + 0x3588);
      *(float *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x1bec) = 1.0 / (float)*(int *)(param_2 + 0x358c);
      GenericFunction_1800d7470(lVar10,param_2);
    }
    else {
      uVar18 = SystemFunction_00018024c420(param_2);
      GenericFunction_1800dfc20(extraout_XMM0_Qa_01,param_2,uVar18 | (*(uint *)(param_2 + 4) >> 0x16 & 1) << 5);
    }
    if (*(int64_t *)(param_2 + 0x9700) != 0) {
      lVar10 = *(int64_t *)(system_message_buffer + 0x1cd8);
      if (((*(int64_t *)(lVar10 + 0x8538) != 0) || (*(int *)(lVar10 + 35000) != -1)) ||
         (*(int *)(lVar10 + 0x8ab8) != 0x10)) {
        pplocal_var_8d8 = (void **)0x0;
        (**(code **)(**(int64_t **)(lVar10 + 0x8400) + 0x40))
                  (*(int64_t **)(lVar10 + 0x8400),0x20,1,&pplocal_var_8d8);
        *(uint64_t *)(lVar10 + 0x8538) = 0;
        *(int32_t *)(lVar10 + 35000) = 0xffffffff;
        *(int32_t *)(lVar10 + 0x8ab8) = 0x10;
        *(int *)(lVar10 + 0x82b4) = *(int *)(lVar10 + 0x82b4) + 1;
      }
      DataStructure_cf670(param_1,param_2);
      local_var_8e8 = 0xffffffff;
      RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0x20,*(uint64_t *)(param_2 + 0x9700))
      ;
      local_var_8e8 = 0xffffffff;
      RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0x41,*(uint64_t *)(param_2 + 0x9708))
      ;
    }
    lVar10 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (((*(int64_t *)(lVar10 + 0x84b8) != 0) || (*(int *)(lVar10 + 0x8878) != -1)) ||
       (*(int *)(lVar10 + 0x8a78) != -1)) {
      local_var_8c0 = 0;
      (**(code **)(**(int64_t **)(lVar10 + 0x8400) + 200))
                (*(int64_t **)(lVar10 + 0x8400),0x10,1,&local_var_8c0);
      (**(code **)(**(int64_t **)(lVar10 + 0x8400) + 0x1f8))
                (*(int64_t **)(lVar10 + 0x8400),0x10,1,&local_var_8c0);
      (**(code **)(**(int64_t **)(lVar10 + 0x8400) + 0x1d8))
                (*(int64_t **)(lVar10 + 0x8400),0x10,1,&local_var_8c0);
      (**(code **)(**(int64_t **)(lVar10 + 0x8400) + 0xf8))
                (*(int64_t **)(lVar10 + 0x8400),0x10,1,&local_var_8c0);
      (**(code **)(**(int64_t **)(lVar10 + 0x8400) + 0x40))
                (*(int64_t **)(lVar10 + 0x8400),0x10,1,&local_var_8c0);
      (**(code **)(**(int64_t **)(lVar10 + 0x8400) + 0x218))
                (*(int64_t **)(lVar10 + 0x8400),0x10,1,&local_var_8c0);
      *(uint64_t *)(lVar10 + 0x84b8) = 0;
      *(int32_t *)(lVar10 + 0x8878) = 0xffffffff;
      *(int32_t *)(lVar10 + 0x8a78) = 0xffffffff;
      *(int *)(lVar10 + 0x82b4) = *(int *)(lVar10 + 0x82b4) + 1;
    }
    lVar10 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (((*(int64_t *)(lVar10 + 0x8540) != 0) || (*(int *)(lVar10 + 0x88bc) != -1)) ||
       (*(int *)(lVar10 + 0x8abc) != -1)) {
      local_var_8b8 = 0;
      (**(code **)(**(int64_t **)(lVar10 + 0x8400) + 200))
                (*(int64_t **)(lVar10 + 0x8400),0x21,1,&local_var_8b8);
      (**(code **)(**(int64_t **)(lVar10 + 0x8400) + 0x1f8))
                (*(int64_t **)(lVar10 + 0x8400),0x21,1,&local_var_8b8);
      (**(code **)(**(int64_t **)(lVar10 + 0x8400) + 0x1d8))
                (*(int64_t **)(lVar10 + 0x8400),0x21,1,&local_var_8b8);
      (**(code **)(**(int64_t **)(lVar10 + 0x8400) + 0xf8))
                (*(int64_t **)(lVar10 + 0x8400),0x21,1,&local_var_8b8);
      (**(code **)(**(int64_t **)(lVar10 + 0x8400) + 0x40))
                (*(int64_t **)(lVar10 + 0x8400),0x21,1,&local_var_8b8);
      (**(code **)(**(int64_t **)(lVar10 + 0x8400) + 0x218))
                (*(int64_t **)(lVar10 + 0x8400),0x21,1,&local_var_8b8);
      *(uint64_t *)(lVar10 + 0x8540) = 0;
      *(int32_t *)(lVar10 + 0x88bc) = 0xffffffff;
      *(int32_t *)(lVar10 + 0x8abc) = 0xffffffff;
      *(int *)(lVar10 + 0x82b4) = *(int *)(lVar10 + 0x82b4) + 1;
    }
  }
  local_var_8a0 = 0;
  iStack_894 = (int)*(float *)(param_2 + 0x11c24);
  iStack_898 = (int)*(float *)(param_2 + 0x11c20);
  DataStructure_9d0a0(*(uint64_t *)(system_message_buffer + 0x1cd8),param_2 + 0x11c18,&local_var_8a0);
  if ((*(byte *)(param_2 + 0x35c0) & 2) != 0) {
    SystemData_Processor(&local_var_8cd,&system_data_3e88);
    pplocal_var_8d8 = &plocal_var_788;
    plocal_var_788 = &memory_allocator_3480_ptr;
    plocal_var_780 = stack_array_770;
    local_var_778 = 0;
    stack_array_770[0] = 0;
    DataStructureManager0(&plocal_var_788,&system_data_3e88);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_788);
    plocal_var_3c8 = &memory_allocator_3480_ptr;
    plocal_var_3c0 = stack_array_3b0;
    stack_array_3b0[0] = 0;
    local_var_3b8 = 0x15;
    strcpy_s(stack_array_3b0,0x40,&system_data_3e88);
    plocal_var_3c8 = &system_state_ptr;
    GenericFunction_1800dd0e0(param_1,param_2,*(byte *)(param_2 + 7) & 1);
    SystemCore_Synchronizer(&plocal_var_788);
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
  }
  if ((*(int *)(param_2 + 0x2b70) != 0) && ((*(uint *)(param_2 + 0x35c0) & 0x4000) != 0)) {
    puVar16 = &system_buffer_ptr;
    if (*(void **)(param_2 + 0x3528) != (void *)0x0) {
      puVar16 = *(void **)(param_2 + 0x3528);
    }
    SystemData_Processor(&local_var_8cc,&rendering_buffer_2656_ptr,puVar16);
    pplocal_var_8a8 = &plocal_var_728;
    plocal_var_728 = &memory_allocator_3480_ptr;
    plocal_var_720 = stack_array_710;
    local_var_718 = 0;
    stack_array_710[0] = 0;
    DataStructureManager0(&plocal_var_728,&rendering_buffer_2744_ptr);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_728);
    plocal_var_368 = &memory_allocator_3480_ptr;
    plocal_var_360 = stack_array_350;
    stack_array_350[0] = 0;
    local_var_358 = 0x15;
    strcpy_s(stack_array_350,0x40,&rendering_buffer_2744_ptr);
    plocal_var_368 = &system_state_ptr;
    pplocal_var_8a8 = (void **)CONCAT44(pplocal_var_8a8._4_4_,*(int *)(param_2 + 0x2b70));
    if (0 < *(int *)(param_2 + 0x2b70)) {
      do {
        lVar10 = *(int64_t *)
                  (*(int64_t *)(param_2 + 0x2b78 + (uVar15 >> 0xb) * 8) + 0x10 +
                  (uint64_t)(uint)((int)uVar15 + (int)(uVar15 >> 0xb) * -0x800) * 0x18);
        uVar3 = *(int8_t *)(lVar10 + 0xc0);
        uVar11 = *(uint64_t *)(lVar10 + 0x90);
        uVar4 = *(int16_t *)(lVar10 + 0x98);
        uVar19 = *(uint64_t *)(lVar10 + 0x88);
        *(int8_t *)(lVar10 + 0xc0) = 0;
        CoreEngine_0E8640(param_1,lVar10);
        *(int8_t *)(lVar10 + 0xc0) = uVar3;
        *(uint64_t *)(lVar10 + 0x90) = uVar11;
        *(int16_t *)(lVar10 + 0x98) = uVar4;
        *(uint64_t *)(lVar10 + 0x88) = uVar19;
        uVar18 = (int)uVar15 + 1;
        uVar15 = (uint64_t)uVar18;
      } while ((int)uVar18 < (int)pplocal_var_8a8);
    }
    SystemCore_Synchronizer(&plocal_var_728);
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
  }
  uVar15 = 0;
  if ((*(byte *)(param_2 + 0x35c0) & 2) != 0) {
    SystemData_Processor(&local_var_8cb,&rendering_buffer_2736_ptr);
    pplocal_var_8d8 = &plocal_var_6c8;
    plocal_var_6c8 = &memory_allocator_3480_ptr;
    plocal_var_6c0 = stack_array_6b0;
    local_var_6b8 = 0;
    stack_array_6b0[0] = 0;
    DataStructureManager0(&plocal_var_6c8,&rendering_buffer_2736_ptr);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_6c8);
    plocal_var_308 = &memory_allocator_3480_ptr;
    plocal_var_300 = stack_array_2f0;
    stack_array_2f0[0] = 0;
    local_var_2f8 = 7;
    uVar11 = strcpy_s(stack_array_2f0,0x40,&rendering_buffer_2736_ptr);
    plocal_var_308 = &system_state_ptr;
    if ((*(byte *)(param_2 + 0x1bd8) & 0x20) == 0) {
      GenericFunction_1800cd350(uVar11,param_2);
    }
    uVar14 = uVar15;
    if (*(int *)(param_2 + 0x2ee8) != 0) {
      while (iVar13 = (int)uVar14,
            (uint64_t)(int64_t)iVar13 < (uint64_t)*(uint *)(param_2 + 0x2ee8)) {
        lVar10 = *(int64_t *)(param_2 + 0x2ef0 + (uVar14 >> 0xb) * 8);
        local_var_8e0 = 0;
        local_var_8e8 = local_var_8e8 & 0xffffff00;
        GenericFunction_1800d6790(lVar10,param_2,
                      *(uint64_t *)
                       (lVar10 + (uint64_t)(uint)(iVar13 + (int)(uVar14 >> 0xb) * -0x800) * 8),0);
        uVar14 = (uint64_t)(iVar13 + 1);
      }
    }
    SystemCore_Synchronizer(&plocal_var_6c8);
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
  }
  if ((*(int *)(param_2 + 0x3010) != 0) && ((*(byte *)(param_2 + 0x35c0) & 2) != 0)) {
    SystemData_Processor(&local_var_8ca,&rendering_buffer_2800_ptr);
    pplocal_var_8d8 = &plocal_var_668;
    plocal_var_668 = &memory_allocator_3480_ptr;
    plocal_var_660 = stack_array_650;
    local_var_658 = 0;
    stack_array_650[0] = 0;
    DataStructureManager0(&plocal_var_668,&rendering_buffer_2736_ptr);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_668);
    plocal_var_2a8 = &memory_allocator_3480_ptr;
    plocal_var_2a0 = stack_array_290;
    stack_array_290[0] = 0;
    local_var_298 = 0x18;
    strcpy_s(stack_array_290,0x40,&rendering_buffer_2800_ptr);
    plocal_var_2a8 = &system_state_ptr;
    uVar14 = uVar15;
    while (iVar13 = (int)uVar14,
          (uint64_t)(int64_t)iVar13 < (uint64_t)*(uint *)(param_2 + 0x3010)) {
      lVar10 = *(int64_t *)(param_2 + 0x3018 + (uVar14 >> 0xb) * 8);
      local_var_8e0 = 0;
      local_var_8e8 = local_var_8e8 & 0xffffff00;
      GenericFunction_1800d6790(lVar10,param_2,
                    *(uint64_t *)
                     (lVar10 + (uint64_t)(uint)(iVar13 + (int)(uVar14 >> 0xb) * -0x800) * 8),0);
      uVar14 = (uint64_t)(iVar13 + 1);
    }
    SystemCore_Synchronizer(&plocal_var_668);
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
  }
  lVar10 = system_message_buffer;
  if (((*(char *)(param_2 + 0x9a31) == '\0') ||
      (lVar12 = *(int64_t *)(param_2 + 0x99d8), lVar12 == 0)) ||
     (*(int64_t *)(lVar12 + 0x58) - *(int64_t *)(lVar12 + 0x50) >> 3 == 0)) {
    *(int32_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1bf4) =
         *(int32_t *)(param_2 + 0x124d8);
    *(int32_t *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x1bf8) = *(int32_t *)(param_2 + 0x124d4);
    *(int32_t *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x1c2c) = *(int32_t *)(param_2 + 0x124d0);
    *(float *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x1c58) = (float)*(byte *)(param_2 + 0x124dc);
    *(int32_t *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x1c5c) = 0x3f800000;
  }
  else {
    local_var_8e8 = 0xffffffff;
    RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0x1b,0);
    lVar10 = system_message_buffer;
    uVar11 = *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83b8);
    uVar19 = *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83f0);
    *(int8_t *)(param_1 + 0x1350) = 1;
    *(int32_t *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x1bf4) = *(int32_t *)(param_2 + 0x124d8);
    *(int32_t *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x1bf8) = *(int32_t *)(param_2 + 0x124d4);
    *(int32_t *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x1c2c) = *(int32_t *)(param_2 + 0x124d0);
    *(float *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x1c58) = (float)*(byte *)(param_2 + 0x124dc);
    *(int32_t *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x1c5c) = 0x3f800000;
    DataStructure_c8260(*(uint64_t *)(param_2 + 0x99d8),param_2,system_system_control_memory);
    DataStructure_c8fe0(*(uint64_t *)(param_2 + 0x99d8),param_2);
    DataStructure_c84d0(*(uint64_t *)(param_2 + 0x99d8),param_2);
    uVar9 = DataStructure_c8380(*(uint64_t *)(param_2 + 0x99d8),param_2);
    GenericFunction_1800debc0(uVar9,param_2,0);
    *(int8_t *)(param_1 + 0x1350) = 0;
    GenericFunction_1800cd410(param_1,param_2,0,1);
    local_var_8e8 = 0xffffffff;
    RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0x10,0);
    local_var_8e8 = 0xffffffff;
    RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0x21,0);
    SystemCore_MemoryManager(*(uint64_t *)(system_message_buffer + 0x1cd8),0,uVar11);
    DataStructure_9ada0(*(uint64_t *)(system_message_buffer + 0x1cd8),uVar19,0);
    SystemCore_ProcessorEx(*(uint64_t *)(system_message_buffer + 0x1cd8),1);
  }
  uVar11 = GenericFunction_1800dc070(param_1,param_2,0);
  uVar18 = *(uint *)(param_2 + 0x35c0);
  if ((uVar18 & 4) != 0) {
    pplocal_var_8d8 = &plocal_var_608;
    plocal_var_608 = &memory_allocator_3480_ptr;
    plocal_var_600 = stack_array_5f0;
    local_var_5f8 = 0;
    stack_array_5f0[0] = 0;
    DataStructureManager0(&plocal_var_608,&system_data_3ec0);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_608);
    plocal_var_248 = &memory_allocator_3480_ptr;
    plocal_var_240 = stack_array_230;
    stack_array_230[0] = 0;
    local_var_238 = 0x1c;
    strcpy_s(stack_array_230,0x40,&system_data_3ec0);
    plocal_var_248 = &system_state_ptr;
    GenericFunction_1800dca70(param_1,param_2);
    SystemCore_Synchronizer(&plocal_var_608);
    pplocal_var_8d8 = &plocal_var_428;
    plocal_var_428 = &memory_allocator_3480_ptr;
    plocal_var_420 = stack_array_410;
    local_var_418 = 0;
    stack_array_410[0] = 0;
    DataStructureManager0(&plocal_var_428,&rendering_buffer_2856_ptr);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_428);
    SystemData_Processor(&local_var_8c9,&rendering_buffer_2856_ptr);
    DataStructure_d0d30(param_1,param_2);
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
    uVar11 = SystemCore_Synchronizer(&plocal_var_428);
    uVar18 = *(uint *)(param_2 + 0x35c0);
  }
  if ((uVar18 >> 8 & 1) != 0) {
    SystemData_Processor(&local_var_8c8,&system_data_3f00);
    pplocal_var_8d8 = &plocal_var_5a8;
    plocal_var_5a8 = &memory_allocator_3480_ptr;
    plocal_var_5a0 = stack_array_590;
    local_var_598 = 0;
    stack_array_590[0] = 0;
    DataStructureManager0(&plocal_var_5a8,&system_data_3f00);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_5a8);
    plocal_var_1e8 = &memory_allocator_3480_ptr;
    plocal_var_1e0 = stack_array_1d0;
    stack_array_1d0[0] = 0;
    local_var_1d8 = 0x14;
    strcpy_s(stack_array_1d0,0x40,&system_data_3f00);
    plocal_var_1e8 = &system_state_ptr;
    GenericFunction_1800e8340(param_1,param_2);
    SystemCore_Synchronizer(&plocal_var_5a8);
    system_system_data_memory = system_system_data_memory + -1;
    uVar11 = (**(code **)(*system_system_data_memory + 0x20))();
    uVar18 = *(uint *)(param_2 + 0x35c0);
  }
  if ((uVar18 >> 0xd & 1) != 0) {
    pplocal_var_8d8 = &plocal_var_548;
    plocal_var_548 = &memory_allocator_3480_ptr;
    plocal_var_540 = stack_array_530;
    local_var_538 = 0;
    stack_array_530[0] = 0;
    DataStructureManager0(&plocal_var_548,&system_data_3f58);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_548);
    SystemData_Processor(&local_var_8c7,&system_data_3f58);
    plocal_var_188 = &memory_allocator_3480_ptr;
    plocal_var_180 = stack_array_170;
    stack_array_170[0] = 0;
    local_var_178 = 9;
    strcpy_s(stack_array_170,0x40,&system_data_3f58);
    plocal_var_188 = &system_state_ptr;
    while (iVar13 = (int)uVar15,
          (uint64_t)(int64_t)iVar13 < (uint64_t)*(uint *)(param_2 + 0x2a48)) {
      lVar10 = *(int64_t *)
                (*(int64_t *)(param_2 + 0x2a50 + (uVar15 >> 0xb) * 8) + 0x10 +
                (uint64_t)(uint)(iVar13 + (int)(uVar15 >> 0xb) * -0x800) * 0x18);
      *(int32_t *)(lVar10 + 0xc4) = 1;
      lVar12 = SystemOptimizer(param_2);
      *(int32_t *)(lVar10 + 0xa4) = *(int32_t *)(lVar12 + 0x324);
      *(int32_t *)(lVar10 + 0xa0) = 0;
      CoreEngine_0E8640(param_1,lVar10);
      uVar15 = (uint64_t)(iVar13 + 1);
    }
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
    uVar11 = SystemCore_Synchronizer(&plocal_var_548);
  }
  if (*(char *)(param_2 + 0x12c0b) != '\0') {
    SystemData_Processor(&local_var_8c6,&rendering_buffer_2896_ptr);
    (**(code **)(param_2 + 0x12c28))(param_2);
    system_system_data_memory = system_system_data_memory + -1;
    uVar11 = (**(code **)(*system_system_data_memory + 0x20))();
  }
  if ((*(int *)(param_2 + 0x2480) != 0) && ((*(uint *)(param_2 + 0x35c0) & 0x1000) != 0)) {
    SystemData_Processor(&local_var_8c5,&rendering_buffer_2944_ptr);
    pplocal_var_8d8 = &plocal_var_4e8;
    plocal_var_4e8 = &memory_allocator_3480_ptr;
    plocal_var_4e0 = stack_array_4d0;
    local_var_4d8 = 0;
    stack_array_4d0[0] = 0;
    DataStructureManager0(&plocal_var_4e8,&rendering_buffer_2944_ptr);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_4e8);
    plocal_var_128 = &memory_allocator_3480_ptr;
    plocal_var_120 = stack_array_110;
    stack_array_110[0] = 0;
    local_var_118 = 0xc;
    strcpy_s(stack_array_110,0x40,&rendering_buffer_2944_ptr);
    plocal_var_128 = &system_state_ptr;
    GenericFunction_1800e1190(param_1,param_2);
    SystemCore_Synchronizer(&plocal_var_4e8);
    system_system_data_memory = system_system_data_memory + -1;
    uVar11 = (**(code **)(*system_system_data_memory + 0x20))();
  }
  if (((*(uint *)(param_2 + 4) & 0x10000000) == 0) && ((*(byte *)(param_2 + 0x1bd8) & 0x20) != 0)) {
    uVar11 = GenericFunction_180178500();
  }
  if (((*(char *)(param_2 + 0x9a31) != '\0') && (*(int64_t *)(param_2 + 0x99b8) != 0)) &&
     (*(char *)(param_2 + 0x9a32) != '\0')) {
    SystemData_Processor(stack_array_8c4,&rendering_buffer_2932_ptr);
    pplocal_var_8d8 = &plocal_var_488;
    plocal_var_488 = &memory_allocator_3480_ptr;
    plocal_var_480 = stack_array_470;
    local_var_478 = 0;
    stack_array_470[0] = 0;
    DataStructureManager0(&plocal_var_488,&rendering_buffer_2932_ptr);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_488);
    plocal_var_c8 = &memory_allocator_3480_ptr;
    plocal_var_c0 = stack_array_b0;
    stack_array_b0[0] = 0;
    local_var_b8 = 6;
    strcpy_s(stack_array_b0,0x40,&rendering_buffer_2932_ptr);
    fVar2 = system_system_control_memory;
    plocal_var_c8 = &system_state_ptr;
    *(int8_t *)(param_1 + 0x1350) = 1;
    if (*(float *)(*(int64_t *)(param_2 + 0x99b8) + 0x40) <= 0.0) {
      if (*(int *)(param_2 + 0x1bdc) == 0) {
        stack_array_8b0[0] = *(int32_t *)(*(int64_t *)(param_2 + 0x99b8) + 0x90);
        sVar7 = _fdtest(stack_array_8b0);
        if (sVar7 == 2) {
          *(float *)(*(int64_t *)(param_2 + 0x99b8) + 0x90) = fVar2;
        }
        fVar1 = *(float *)(*(int64_t *)(param_2 + 0x99b8) + 0x90);
        *(float *)(*(int64_t *)(param_2 + 0x99b8) + 0x90) = (fVar2 - fVar1) * 0.05 + fVar1;
        lVar10 = *(int64_t *)(system_message_buffer + 0x1cd8);
        *(int32_t *)(lVar10 + 0x1bf0) = *(int32_t *)(*(int64_t *)(param_2 + 0x99b8) + 0x90);
      }
      else {
        lVar10 = *(int64_t *)(system_message_buffer + 0x1cd8);
        *(int32_t *)(lVar10 + 0x1bf0) = 0x3d072b02;
      }
    }
    else {
      lVar10 = *(int64_t *)(system_message_buffer + 0x1cd8);
      *(int32_t *)(lVar10 + 0x1bf0) = 0x42c80000;
    }
    uVar18 = *(uint *)(*(int64_t *)(param_2 + 0x99b8) + 0x98);
    GenericFunction_1800debc0(lVar10,param_2,CONCAT31((uint3)(uVar18 >> 9),(char)(uVar18 >> 1)) & 0xffffff01);
    DataStructure_c8260(*(uint64_t *)(param_2 + 0x99b8),param_2,fVar2);
    DataStructure_c84d0(*(uint64_t *)(param_2 + 0x99b8),param_2);
    DataStructure_c8380(*(uint64_t *)(param_2 + 0x99b8),param_2);
    fVar2 = *(float *)(*(int64_t *)(param_2 + 0x99b8) + 0x40);
    if (0.0 < fVar2) {
      *(float *)(*(int64_t *)(param_2 + 0x99b8) + 0x40) = fVar2 - 1.0;
    }
    *(int8_t *)(param_1 + 0x1350) = 0;
    SystemCore_Synchronizer(&plocal_var_488);
    system_system_data_memory = system_system_data_memory + -1;
    uVar11 = (**(code **)(*system_system_data_memory + 0x20))();
  }
  uVar18 = *(uint *)(param_2 + 4);
  if ((uVar18 >> 0xe & 1) != 0) {
    uVar11 = DataStructure_9ef00(*(uint64_t *)(system_message_buffer + 0x1cd8),
                           *(uint64_t *)(param_2 + 0x9690));
    uVar18 = *(uint *)(param_2 + 4);
  }
  if (((uVar18 >> 0x13 & 1) != 0) && (*(int64_t *)(param_2 + 0x9690) != 0)) {
    DataStructure_9ef00(*(uint64_t *)(system_message_buffer + 0x1cd8));
    uVar11 = GenericFunction_1800b5f00(*(uint64_t *)(param_2 + 0x9690));
  }
  GenericFunction_1800e24b0(uVar11,param_2);
  lVar10 = system_message_buffer;
  if (*(int64_t *)(param_2 + 0x96b8) - *(int64_t *)(param_2 + 0x96b0) >> 3 != 0) {
    *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83c0) = 0;
    *(uint64_t *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x83c8) = 0;
    *(uint64_t *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x83d0) = 0;
    *(uint64_t *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x83d8) = 0;
    *(uint64_t *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x83e0) = 0;
    *(uint64_t *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x83e8) = 0;
    SystemCore_ProcessorEx(*(uint64_t *)(lVar10 + 0x1cd8),
                  (int)(*(int64_t *)(param_2 + 0x96b8) - *(int64_t *)(param_2 + 0x96b0) >> 3) + 1)
    ;
  }
  if (((*(uint *)(param_2 + 4) & 0x10000000) == 0) &&
     (plVar8 = *(int64_t **)(param_2 + 0x3518), plVar8 != (int64_t *)0x0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8,param_2);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_68 ^ (uint64_t)stack_array_908);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address