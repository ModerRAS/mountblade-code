#include "ultra_high_freq_fun_definitions.h"
/* 函数别名定义: DataStructureManager */
#define DataStructureManager DataStructureManager
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_01_part056.c - 2 个函数
// 函数: void GenericFunction_1800dd8a0(uint64_t param_1,int64_t param_2)
void GenericFunction_1800dd8a0(uint64_t param_1,int64_t param_2)
{
  int64_t *plVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint uVar6;
  int iVar7;
  int64_t *plVar8;
  int64_t *plVar10;
  int32_t uVar11;
  int8_t stack_array_378 [32];
  uint local_var_358;
  uint local_var_350;
  int8_t local_var_348;
  int8_t local_var_347;
  int8_t local_var_346;
  int8_t local_var_345;
  int8_t local_var_344;
  int8_t local_var_343;
  int8_t local_var_342;
  int8_t local_var_341;
  void **pplocal_var_340;
  void **pplocal_var_338;
  uint64_t local_var_330;
  uint64_t local_var_328;
  uint64_t local_var_320;
  uint64_t local_var_318;
  uint64_t local_var_310;
  uint64_t local_var_308;
  uint64_t local_var_300;
  void *plocal_var_2f8;
  int8_t *plocal_var_2f0;
  int32_t local_var_2e8;
  int8_t stack_array_2e0 [72];
  void *plocal_var_298;
  int8_t *plocal_var_290;
  int32_t local_var_288;
  int8_t stack_array_280 [72];
  void *plocal_var_238;
  int8_t *plocal_var_230;
  int32_t local_var_228;
  int8_t stack_array_220 [72];
  void *plocal_var_1d8;
  int8_t *plocal_var_1d0;
  int32_t local_var_1c8;
  int8_t stack_array_1c0 [72];
  void *plocal_var_178;
  int8_t *plocal_var_170;
  int32_t local_var_168;
  int8_t stack_array_160 [72];
  void *plocal_var_118;
  int8_t *plocal_var_110;
  int32_t local_var_108;
  int8_t stack_array_100 [72];
  void *plocal_var_b8;
  int8_t *plocal_var_b0;
  int32_t local_var_a8;
  int8_t stack_array_a0 [72];
  uint64_t local_var_58;
  int64_t *plVar9;
  local_var_300 = 0xfffffffffffffffe;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_378;
  lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
  plVar1 = *(int64_t **)(lVar4 + 0x83b8);
  plVar10 = (int64_t *)0x0;
  if (((*(int64_t *)(lVar4 + 0x84b8) != 0) || (*(int *)(lVar4 + 0x8878) != -1)) ||
     (*(int *)(lVar4 + 0x8a78) != 0x10)) {
    local_var_330 = 0;
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
              (*(int64_t **)(lVar4 + 0x8400),0x10,1,&local_var_330);
    *(uint64_t *)(lVar4 + 0x84b8) = 0;
    *(int32_t *)(lVar4 + 0x8878) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8a78) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if (((*(int64_t *)(lVar4 + 0x8540) != 0) || (*(int *)(lVar4 + 0x88bc) != -1)) ||
     (*(int *)(lVar4 + 0x8abc) != 0x10)) {
    local_var_328 = 0;
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
              (*(int64_t **)(lVar4 + 0x8400),0x21,1,&local_var_328);
    *(uint64_t *)(lVar4 + 0x8540) = 0;
    *(int32_t *)(lVar4 + 0x88bc) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8abc) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if (((*(int64_t *)(lVar4 + 0x8438) != 0) || (*(int *)(lVar4 + 0x8838) != -1)) ||
     (*(int *)(lVar4 + 0x8a38) != 0x10)) {
    local_var_320 = 0;
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
              (*(int64_t **)(lVar4 + 0x8400),0,1,&local_var_320);
    *(uint64_t *)(lVar4 + 0x8438) = 0;
    *(int32_t *)(lVar4 + 0x8838) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8a38) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if (((*(int64_t *)(lVar4 + 0x8440) != 0) || (*(int *)(lVar4 + 0x883c) != -1)) ||
     (*(int *)(lVar4 + 0x8a3c) != 0x10)) {
    local_var_318 = 0;
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
              (*(int64_t **)(lVar4 + 0x8400),1,1,&local_var_318);
    *(uint64_t *)(lVar4 + 0x8440) = 0;
    *(int32_t *)(lVar4 + 0x883c) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8a3c) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if (((*(int64_t *)(lVar4 + 0x8448) != 0) || (*(int *)(lVar4 + 0x8840) != -1)) ||
     (*(int *)(lVar4 + 0x8a40) != 0x10)) {
    local_var_310 = 0;
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
              (*(int64_t **)(lVar4 + 0x8400),2,1,&local_var_310);
    *(uint64_t *)(lVar4 + 0x8448) = 0;
    *(int32_t *)(lVar4 + 0x8840) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8a40) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if (((*(int64_t *)(lVar4 + 0x8450) != 0) || (*(int *)(lVar4 + 0x8844) != -1)) ||
     (*(int *)(lVar4 + 0x8a44) != 0x10)) {
    local_var_308 = 0;
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
              (*(int64_t **)(lVar4 + 0x8400),3,1,&local_var_308);
    *(uint64_t *)(lVar4 + 0x8450) = 0;
    *(int32_t *)(lVar4 + 0x8844) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8a44) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if (((*(int64_t *)(lVar4 + 0x8458) != 0) || (*(int *)(lVar4 + 0x8848) != -1)) ||
     (*(int *)(lVar4 + 0x8a48) != 0x10)) {
    pplocal_var_338 = (void **)0x0;
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
              (*(int64_t **)(lVar4 + 0x8400),4,1,&pplocal_var_338);
    *(uint64_t *)(lVar4 + 0x8458) = 0;
    *(int32_t *)(lVar4 + 0x8848) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8a48) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  plVar9 = *(int64_t **)(system_message_buffer + 0x1cd8);
  lVar4 = SystemLog_Manager(param_2);
  iVar7 = *(int *)(param_2 + 0x357c);
  plVar8 = plVar10;
  if (*(int64_t *)(lVar4 + 0x1e0) != 0) {
    if (system_main_module_state != 0) {
      *(int64_t *)(lVar4 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    }
    plVar8 = (int64_t *)((int64_t)(iVar7 * 2 + 1) * 0x10 + *(int64_t *)(lVar4 + 0x1e0));
    if ((plVar8 != (int64_t *)0x0) && (*plVar8 != 0)) {
      (**(code **)(*plVar9 + 0x70))(plVar9,*plVar8,4);
    }
  }
  plVar9[0x107e] = (int64_t)plVar8;
  GenericFunction_1800de960();
  pplocal_var_338 = &plocal_var_2f8;
  plocal_var_2f8 = &memory_allocator_3480_ptr;
  plocal_var_2f0 = stack_array_2e0;
  local_var_2e8 = 0;
  stack_array_2e0[0] = 0;
  DataStructureManager0(&plocal_var_2f8,&memory_allocator_3672_ptr);
  SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_2f8);
  SystemData_Processor(&local_var_348,&memory_allocator_3672_ptr);
  local_var_350 = 2;
  local_var_358 = 0;
  UtilitiesSystem_MathCalculator(*(uint64_t *)(system_message_buffer + 0x1cd8),1,0,0x3f800000);
  if ((((*(byte *)(param_2 + 0x1bd8) & 0x20) == 0) && ((*(byte *)(param_2 + 0x1bd9) & 2) == 0)) ||
     ((*(int *)(system_system_data_memory + 0xa10) == 0 || (*(char *)(param_2 + 0x130) == '\0')))) {
    uVar11 = 0x3f800000;
  }
  else {
    uVar11 = 0;
  }
  local_var_350 = 0;
  local_var_358 = 0x8a;
  UtilitiesSystem_MathCalculator(*(uint64_t *)(system_message_buffer + 0x1cd8),2,0,uVar11);
  local_var_350 = 5;
  local_var_358 = 0;
  UtilitiesSystem_MathCalculator(*(uint64_t *)(system_message_buffer + 0x1cd8),1,0,0x3f800000);
  if ((*(uint *)(param_2 + 4) & 0x2000000) != 0) {
    local_var_350 = 0;
    local_var_358 = 0;
    UtilitiesSystem_MathCalculator(*(uint64_t *)(system_message_buffer + 0x1cd8),1,0,0x3f800000);
    local_var_350 = 1;
    local_var_358 = 0;
    UtilitiesSystem_MathCalculator(*(uint64_t *)(system_message_buffer + 0x1cd8),1,0,0x3f800000);
    local_var_350 = 2;
    local_var_358 = 0;
    UtilitiesSystem_MathCalculator(*(uint64_t *)(system_message_buffer + 0x1cd8),1,0,0x3f800000);
    local_var_350 = 3;
    local_var_358 = 0;
    UtilitiesSystem_MathCalculator(*(uint64_t *)(system_message_buffer + 0x1cd8),1,0,0x3f800000);
    local_var_350 = 4;
    local_var_358 = 0;
    UtilitiesSystem_MathCalculator(*(uint64_t *)(system_message_buffer + 0x1cd8),1,0,0x3f800000);
    local_var_350 = 5;
    local_var_358 = 0;
    UtilitiesSystem_MathCalculator(*(uint64_t *)(system_message_buffer + 0x1cd8),1,0,0x3f800000);
  }
  system_system_data_memory = system_system_data_memory + -1;
  (**(code **)(*system_system_data_memory + 0x20))();
  SystemCore_Synchronizer(&plocal_var_2f8);
  if (((*(int *)(system_system_data_memory + 0x4d0) != 0) && ((*(byte *)(param_2 + 0x35c0) & 1) != 0)) &&
     (iVar7 = *(int *)(param_2 + 0x3138), plVar9 = plVar10, 0 < iVar7)) {
    do {
      CoreEngine_0E8640(param_1,*(uint64_t *)
                             (*(int64_t *)(param_2 + 0x3140 + ((uint64_t)plVar9 >> 0xb) * 8) +
                              0x10 + (uint64_t)
                                     (uint)((int)plVar9 + (int)((uint64_t)plVar9 >> 0xb) * -0x800)
                                     * 0x18));
      uVar6 = (int)plVar9 + 1;
      plVar9 = (int64_t *)(uint64_t)uVar6;
    } while ((int)uVar6 < iVar7);
  }
  if ((*(byte *)(param_2 + 0x35c0) & 0x10) != 0) {
    SystemData_Processor(&local_var_347,&memory_allocator_3632_ptr);
    uVar2 = *(uint64_t *)(system_message_buffer + 0x1cd8);
    uVar3 = *(uint64_t *)(system_message_buffer + 0x1cd0);
    UltraHighFreq_DatabaseHandler1(uVar2,uVar3,param_2 + 0x1d0,0x1a00);
    DataStructure_9dca0(uVar2,8,0x11,uVar3);
    if (*(int *)(param_2 + 0x2c98) != 0) {
      pplocal_var_338 = &plocal_var_298;
      plocal_var_298 = &memory_allocator_3480_ptr;
      plocal_var_290 = stack_array_280;
      local_var_288 = 0;
      stack_array_280[0] = 0;
      DataStructureManager0(&plocal_var_298,&memory_allocator_3728_ptr);
      SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_298);
      SystemData_Processor(&local_var_346,&memory_allocator_3688_ptr);
      lVar4 = system_message_buffer;
      *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83b8) = 0;
      *(uint64_t *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x83c0) = 0;
      *(uint64_t *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x83c8) = 0;
      *(uint64_t *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x83d0) = 0;
      *(uint64_t *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x83d8) = 0;
      *(uint64_t *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x83e0) = 0;
      *(uint64_t *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x83e8) = 0;
      SystemCore_ProcessorEx(*(uint64_t *)(lVar4 + 0x1cd8),7);
      plVar9 = plVar10;
      while( true ) {
        iVar7 = (int)plVar9;
        if ((uint64_t)*(uint *)(param_2 + 0x2c98) <= (uint64_t)(int64_t)iVar7) break;
        lVar4 = *(int64_t *)(param_2 + 0x2ca0 + ((uint64_t)plVar9 >> 0xb) * 8);
        local_var_350 = local_var_350 & 0xffffff00;
        local_var_358 = CONCAT31(local_var_358._1_3_,1);
        GenericFunction_1800d6790(lVar4,param_2,
                      *(uint64_t *)
                       (lVar4 + (uint64_t)(uint)(iVar7 + (int)((uint64_t)plVar9 >> 0xb) * -0x800)
                                * 8),0);
        plVar9 = (int64_t *)(uint64_t)(iVar7 + 1);
      }
      GenericFunction_1800de960((uint64_t)*(uint *)(param_2 + 0x2c98),param_2);
      system_system_data_memory = system_system_data_memory + -1;
      (**(code **)(*system_system_data_memory + 0x20))();
      SystemCore_Synchronizer(&plocal_var_298);
    }
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
  }
  pplocal_var_340 = &plocal_var_238;
  plocal_var_238 = &memory_allocator_3480_ptr;
  plocal_var_230 = stack_array_220;
  local_var_228 = 0;
  stack_array_220[0] = 0;
  DataStructureManager0(&plocal_var_238,&memory_allocator_3784_ptr);
  SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_238);
  SystemData_Processor(&local_var_345,&memory_allocator_3760_ptr);
  iVar7 = *(int *)(param_2 + 0x1c68);
  plVar9 = plVar10;
  if (0 < iVar7) {
    do {
      lVar4 = *(int64_t *)
               (*(int64_t *)(param_2 + 0x1c70 + ((uint64_t)plVar9 >> 0xb) * 8) + 0x10 +
               (uint64_t)(uint)((int)plVar9 + (int)((uint64_t)plVar9 >> 0xb) * -0x800) * 0x18);
      *(uint *)(lVar4 + 0xc4) = (*(uint *)(param_2 + 4) & 0x4000000 | 0x18000000) >> 0x1a;
      *(int32_t *)(lVar4 + 0xa4) = *(int32_t *)(*(int64_t *)(param_2 + 0x96d8) + 0x324);
      *(int32_t *)(lVar4 + 0xa8) = *(int32_t *)(*(int64_t *)(param_2 + 0x96e0) + 0x324);
      *(int32_t *)(lVar4 + 0xac) = *(int32_t *)(*(int64_t *)(param_2 + 0x96e8) + 0x324);
      *(int32_t *)(lVar4 + 0xb0) = *(int32_t *)(*(int64_t *)(param_2 + 0x96f0) + 0x324);
      *(int32_t *)(lVar4 + 0xb4) = *(int32_t *)(*(int64_t *)(param_2 + 0x96d0) + 0x324);
      *(int32_t *)(lVar4 + 0xb8) = *(int32_t *)(*(int64_t *)(param_2 + 0x96f8) + 0x324);
      lVar5 = SystemLog_Manager(param_2);
      *(int32_t *)(lVar4 + 0xa0) = *(int32_t *)(lVar5 + 0x324);
      CoreEngine_0E8640(param_1,lVar4);
      uVar6 = (int)plVar9 + 1;
      plVar9 = (int64_t *)(uint64_t)uVar6;
    } while ((int)uVar6 < iVar7);
  }
  system_system_data_memory = system_system_data_memory + -1;
  (**(code **)(*system_system_data_memory + 0x20))();
  SystemCore_Synchronizer(&plocal_var_238);
  if ((((*(uint *)(param_2 + 4) & 0x10000000) == 0) && ((*(byte *)(param_2 + 0x1bd8) & 0x20) != 0))
     && (lVar4 = GenericFunction_180178540(), lVar4 != 0)) {
    GenericFunction_180178540();
    GenericFunction_180178650();
  }
  pplocal_var_340 = &plocal_var_1d8;
  plocal_var_1d8 = &memory_allocator_3480_ptr;
  plocal_var_1d0 = stack_array_1c0;
  local_var_1c8 = 0;
  stack_array_1c0[0] = 0;
  DataStructureManager0(&plocal_var_1d8,&memory_allocator_3840_ptr);
  SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_1d8);
  if ((*(byte *)(param_2 + 0x35c0) & 1) != 0) {
    SystemData_Processor(&local_var_344,&memory_allocator_3824_ptr);
    iVar7 = *(int *)(param_2 + 0x1d90);
    plVar9 = plVar10;
    if (0 < iVar7) {
      do {
        lVar4 = *(int64_t *)
                 (*(int64_t *)(param_2 + 0x1d98 + ((uint64_t)plVar9 >> 0xb) * 8) + 0x10 +
                 (uint64_t)(uint)((int)plVar9 + (int)((uint64_t)plVar9 >> 0xb) * -0x800) * 0x18);
        *(uint *)(lVar4 + 0xc4) = (*(uint *)(param_2 + 4) & 0x4000000 | 0x18000000) >> 0x1a;
        *(int32_t *)(lVar4 + 0xa4) = *(int32_t *)(*(int64_t *)(param_2 + 0x96d8) + 0x324);
        *(int32_t *)(lVar4 + 0xa8) = *(int32_t *)(*(int64_t *)(param_2 + 0x96e0) + 0x324);
        *(int32_t *)(lVar4 + 0xac) = *(int32_t *)(*(int64_t *)(param_2 + 0x96e8) + 0x324);
        *(int32_t *)(lVar4 + 0xb0) = *(int32_t *)(*(int64_t *)(param_2 + 0x96f0) + 0x324);
        *(int32_t *)(lVar4 + 0xb4) = *(int32_t *)(*(int64_t *)(param_2 + 0x96d0) + 0x324);
        *(int32_t *)(lVar4 + 0xb8) = *(int32_t *)(*(int64_t *)(param_2 + 0x96f8) + 0x324);
        lVar5 = SystemLog_Manager(param_2);
        *(int32_t *)(lVar4 + 0xa0) = *(int32_t *)(lVar5 + 0x324);
        CoreEngine_0E8640(param_1,lVar4);
        uVar6 = (int)plVar9 + 1;
        plVar9 = (int64_t *)(uint64_t)uVar6;
      } while ((int)uVar6 < iVar7);
    }
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
  }
  SystemCore_Synchronizer(&plocal_var_1d8);
  GenericFunction_1800cd350();
  if (((*(byte *)(param_2 + 0x35c0) & 0x10) != 0) && (*(int *)(param_2 + 0x2dc0) != 0)) {
    pplocal_var_340 = &plocal_var_178;
    plocal_var_178 = &memory_allocator_3480_ptr;
    plocal_var_170 = stack_array_160;
    local_var_168 = 0;
    stack_array_160[0] = 0;
    DataStructureManager0(&plocal_var_178,&memory_allocator_3896_ptr);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_178);
    SystemData_Processor(&local_var_343,&memory_allocator_3872_ptr);
    plVar9 = plVar10;
    while (iVar7 = (int)plVar9, (uint64_t)(int64_t)iVar7 < (uint64_t)*(uint *)(param_2 + 0x2dc0))
    {
      lVar4 = *(int64_t *)(param_2 + 0x2dc8 + ((uint64_t)plVar9 >> 0xb) * 8);
      local_var_350 = CONCAT31(local_var_350._1_3_,1);
      local_var_358 = local_var_358 & 0xffffff00;
      GenericFunction_1800d6790(lVar4,param_2,
                    *(uint64_t *)
                     (lVar4 + (uint64_t)(uint)(iVar7 + (int)((uint64_t)plVar9 >> 0xb) * -0x800) *
                              8),1);
      plVar9 = (int64_t *)(uint64_t)(iVar7 + 1);
    }
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
    SystemCore_Synchronizer(&plocal_var_178);
  }
  pplocal_var_340 = &plocal_var_118;
  plocal_var_118 = &memory_allocator_3480_ptr;
  plocal_var_110 = stack_array_100;
  local_var_108 = 0;
  stack_array_100[0] = 0;
  DataStructureManager0(&plocal_var_118,&memory_allocator_3952_ptr);
  SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_118);
  if ((*(byte *)(param_2 + 0x35c0) & 1) != 0) {
    SystemData_Processor(&local_var_342,&system_data_4340);
    iVar7 = *(int *)(param_2 + 0x2358);
    plVar9 = plVar10;
    if (0 < iVar7) {
      do {
        lVar4 = *(int64_t *)
                 (*(int64_t *)(param_2 + 0x2360 + ((uint64_t)plVar9 >> 0xb) * 8) + 0x10 +
                 (uint64_t)(uint)((int)plVar9 + (int)((uint64_t)plVar9 >> 0xb) * -0x800) * 0x18);
        *(uint *)(lVar4 + 0xc4) = (*(uint *)(param_2 + 4) & 0x4000000 | 0x18000000) >> 0x1a;
        *(int32_t *)(lVar4 + 0xa4) = *(int32_t *)(*(int64_t *)(param_2 + 0x96d8) + 0x324);
        *(int32_t *)(lVar4 + 0xa8) = *(int32_t *)(*(int64_t *)(param_2 + 0x96e0) + 0x324);
        *(int32_t *)(lVar4 + 0xac) = *(int32_t *)(*(int64_t *)(param_2 + 0x96e8) + 0x324);
        *(int32_t *)(lVar4 + 0xb0) = *(int32_t *)(*(int64_t *)(param_2 + 0x96f0) + 0x324);
        *(int32_t *)(lVar4 + 0xb4) = *(int32_t *)(*(int64_t *)(param_2 + 0x96d0) + 0x324);
        *(int32_t *)(lVar4 + 0xb8) = *(int32_t *)(*(int64_t *)(param_2 + 0x96f8) + 0x324);
        lVar5 = SystemLog_Manager(param_2);
        *(int32_t *)(lVar4 + 0xa0) = *(int32_t *)(lVar5 + 0x324);
        CoreEngine_0E8640(param_1,lVar4);
        uVar6 = (int)plVar9 + 1;
        plVar9 = (int64_t *)(uint64_t)uVar6;
      } while ((int)uVar6 < iVar7);
    }
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
  }
  SystemCore_Synchronizer(&plocal_var_118);
  if ((((*(uint *)(param_2 + 4) & 0x10000000) == 0) && ((*(byte *)(param_2 + 0x1bd8) & 0x20) != 0))
     && (lVar4 = GenericFunction_180178540(), lVar4 != 0)) {
    GenericFunction_180178540();
    GenericFunction_180178650();
  }
  if ((*(byte *)(param_2 + 0x35c0) & 0x80) != 0) {
    pplocal_var_340 = &plocal_var_b8;
    plocal_var_b8 = &memory_allocator_3480_ptr;
    plocal_var_b0 = stack_array_a0;
    local_var_a8 = 0;
    stack_array_a0[0] = 0;
    DataStructureManager0(&plocal_var_b8,&processed_var_4024_ptr);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_b8);
    SystemData_Processor(&local_var_341,&processed_var_4024_ptr);
    GenericFunction_1800e8a00(param_1,param_2);
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
    SystemCore_Synchronizer(&plocal_var_b8);
  }
  lVar5 = SystemLog_Manager(param_2);
  lVar4 = system_message_buffer;
  plVar9 = *(int64_t **)(system_message_buffer + 0x1cd8);
  iVar7 = *(int *)(param_2 + 0x357c);
  if (*(int64_t *)(lVar5 + 0x1e0) != 0) {
    if (system_main_module_state != 0) {
      *(int64_t *)(lVar5 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    }
    plVar10 = (int64_t *)((int64_t)(iVar7 * 2 + 1) * 0x10 + *(int64_t *)(lVar5 + 0x1e0));
    if ((plVar10 != (int64_t *)0x0) && (*plVar10 != 0)) {
      (**(code **)(*plVar9 + 0x70))(plVar9,*plVar10,4);
      lVar4 = system_message_buffer;
    }
  }
  plVar9[0x107e] = (int64_t)plVar10;
  *(uint64_t *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x83d0) = 0;
  *(uint64_t *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x83c8) = 0;
  *(uint64_t *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x83c0) = 0;
  plVar10 = *(int64_t **)(lVar4 + 0x1cd8);
  if ((plVar1 != (int64_t *)0x0) && (*plVar1 != 0)) {
    (**(code **)(*plVar10 + 0x70))(plVar10,*plVar1,1);
    lVar4 = system_message_buffer;
  }
  plVar10[0x1077] = (int64_t)plVar1;
  SystemCore_ProcessorEx(*(uint64_t *)(lVar4 + 0x1cd8),1);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_378);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1800de960(uint64_t param_1,int64_t param_2)
void GenericFunction_1800de960(uint64_t param_1,int64_t param_2)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int8_t stack_array_88 [32];
  uint local_var_68;
  int32_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  uint64_t local_var_28;
  uint64_t local_var_20;
  uint64_t local_var_18;
  uint64_t local_var_10;
  lVar5 = system_message_buffer;
  lVar3 = system_main_module_state;
  plVar1 = *(int64_t **)(*(int64_t *)(param_2 + 0x96d8) + 0x1d8);
  plVar2 = *(int64_t **)(system_message_buffer + 0x1cd8);
  if (plVar1 != (int64_t *)0x0) {
    if (system_main_module_state != 0) {
      *(int64_t *)(*(int64_t *)(param_2 + 0x96d8) + 0x340) =
           (int64_t)*(int *)(system_main_module_state + 0x224);
    }
    if (*plVar1 != 0) {
      local_var_30 = 0x1800de9c4;
      (**(code **)(*plVar2 + 0x70))(plVar2,*plVar1,1);
      lVar3 = system_main_module_state;
      lVar5 = system_message_buffer;
    }
  }
  plVar2[0x1077] = (int64_t)plVar1;
  plVar1 = *(int64_t **)(lVar5 + 0x1cd8);
  plVar2 = *(int64_t **)(*(int64_t *)(param_2 + 0x96e0) + 0x1d8);
  if (plVar2 != (int64_t *)0x0) {
    if (lVar3 != 0) {
      *(int64_t *)(*(int64_t *)(param_2 + 0x96e0) + 0x340) = (int64_t)*(int *)(lVar3 + 0x224);
    }
    if (*plVar2 != 0) {
      local_var_30 = 0x1800dea1d;
      (**(code **)(*plVar1 + 0x70))(plVar1,*plVar2,1);
      lVar3 = system_main_module_state;
      lVar5 = system_message_buffer;
    }
  }
  plVar1[0x1078] = (int64_t)plVar2;
  plVar1 = *(int64_t **)(lVar5 + 0x1cd8);
  plVar2 = *(int64_t **)(*(int64_t *)(param_2 + 0x96e8) + 0x1d8);
  if (plVar2 != (int64_t *)0x0) {
    if (lVar3 != 0) {
      *(int64_t *)(*(int64_t *)(param_2 + 0x96e8) + 0x340) = (int64_t)*(int *)(lVar3 + 0x224);
    }
    if (*plVar2 != 0) {
      local_var_30 = 0x1800dea76;
      (**(code **)(*plVar1 + 0x70))(plVar1,*plVar2,1);
      lVar3 = system_main_module_state;
      lVar5 = system_message_buffer;
    }
  }
  plVar1[0x1079] = (int64_t)plVar2;
  plVar1 = *(int64_t **)(lVar5 + 0x1cd8);
  plVar2 = *(int64_t **)(*(int64_t *)(param_2 + 0x96f0) + 0x1d8);
  if (plVar2 != (int64_t *)0x0) {
    if (lVar3 != 0) {
      *(int64_t *)(*(int64_t *)(param_2 + 0x96f0) + 0x340) = (int64_t)*(int *)(lVar3 + 0x224);
    }
    if (*plVar2 != 0) {
      local_var_30 = 0x1800deacf;
      (**(code **)(*plVar1 + 0x70))(plVar1,*plVar2,1);
      lVar3 = system_main_module_state;
      lVar5 = system_message_buffer;
    }
  }
  plVar1[0x107a] = (int64_t)plVar2;
  plVar1 = *(int64_t **)(lVar5 + 0x1cd8);
  plVar2 = *(int64_t **)(*(int64_t *)(param_2 + 0x96d0) + 0x1d8);
  if (plVar2 != (int64_t *)0x0) {
    if (lVar3 != 0) {
      *(int64_t *)(*(int64_t *)(param_2 + 0x96d0) + 0x340) = (int64_t)*(int *)(lVar3 + 0x224);
    }
    if (*plVar2 != 0) {
      local_var_30 = 0x1800deb28;
      (**(code **)(*plVar1 + 0x70))(plVar1,*plVar2,1);
      lVar3 = system_main_module_state;
      lVar5 = system_message_buffer;
    }
  }
  plVar1[0x107b] = (int64_t)plVar2;
  plVar1 = *(int64_t **)(lVar5 + 0x1cd8);
  plVar2 = *(int64_t **)(*(int64_t *)(param_2 + 0x96f8) + 0x1d8);
  if (plVar2 != (int64_t *)0x0) {
    if (lVar3 != 0) {
      *(int64_t *)(*(int64_t *)(param_2 + 0x96f8) + 0x340) = (int64_t)*(int *)(lVar3 + 0x224);
    }
    if (*plVar2 != 0) {
      local_var_30 = 0x1800deb81;
      (**(code **)(*plVar1 + 0x70))(plVar1,*plVar2,1);
      lVar5 = system_message_buffer;
    }
  }
  plVar1[0x107c] = (int64_t)plVar2;
  lVar3 = *(int64_t *)(lVar5 + 0x1cd8);
  uVar4 = (*(uint *)(param_2 + 4) & 0x4000000 | 0x18000000) >> 0x1a;
  local_var_10 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_88;
  lVar5 = *(int64_t *)(lVar3 + 0x83b8);
  bVar7 = lVar5 != *(int64_t *)(lVar3 + 0x8378);
  if (bVar7) {
    *(int64_t *)(lVar3 + 0x8378) = lVar5;
  }
  if (lVar5 == 0) {
    local_var_48 = 0;
  }
  else {
    local_var_48 = *(uint64_t *)(lVar5 + 8);
  }
  lVar5 = *(int64_t *)(lVar3 + 0x83c0);
  bVar8 = lVar5 != *(int64_t *)(lVar3 + 0x8380);
  if (bVar8) {
    *(int64_t *)(lVar3 + 0x8380) = lVar5;
  }
  if (lVar5 == 0) {
    local_var_40 = 0;
  }
  else {
    local_var_40 = *(uint64_t *)(lVar5 + 8);
  }
  lVar5 = *(int64_t *)(lVar3 + 0x83c8);
  bVar9 = lVar5 != *(int64_t *)(lVar3 + 0x8388);
  if (bVar9) {
    *(int64_t *)(lVar3 + 0x8388) = lVar5;
  }
  if (lVar5 == 0) {
    local_var_38 = 0;
  }
  else {
    local_var_38 = *(uint64_t *)(lVar5 + 8);
  }
  lVar5 = *(int64_t *)(lVar3 + 0x83d0);
  bVar10 = lVar5 != *(int64_t *)(lVar3 + 0x8390);
  if (bVar10) {
    *(int64_t *)(lVar3 + 0x8390) = lVar5;
  }
  if (lVar5 == 0) {
    local_var_30 = 0;
  }
  else {
    local_var_30 = *(uint64_t *)(lVar5 + 8);
  }
  lVar5 = *(int64_t *)(lVar3 + 0x83d8);
  bVar11 = lVar5 != *(int64_t *)(lVar3 + 0x8398);
  if (bVar11) {
    *(int64_t *)(lVar3 + 0x8398) = lVar5;
  }
  if (lVar5 == 0) {
    local_var_28 = 0;
  }
  else {
    local_var_28 = *(uint64_t *)(lVar5 + 8);
  }
  lVar5 = *(int64_t *)(lVar3 + 0x83e0);
  bVar12 = lVar5 != *(int64_t *)(lVar3 + 0x83a0);
  if (bVar12) {
    *(int64_t *)(lVar3 + 0x83a0) = lVar5;
  }
  if (lVar5 == 0) {
    local_var_20 = 0;
  }
  else {
    local_var_20 = *(uint64_t *)(lVar5 + 8);
  }
  lVar5 = *(int64_t *)(lVar3 + 0x83e8);
  bVar13 = lVar5 != *(int64_t *)(lVar3 + 0x83a8);
  if (bVar13) {
    *(int64_t *)(lVar3 + 0x83a8) = lVar5;
  }
  if (lVar5 == 0) {
    local_var_18 = 0;
  }
  else {
    local_var_18 = *(uint64_t *)(lVar5 + 8);
  }
  lVar5 = *(int64_t *)(lVar3 + 0x83f0);
  bVar14 = *(int64_t *)(lVar3 + 0x83b0) != lVar5;
  if (bVar14) {
    *(int64_t *)(lVar3 + 0x83b0) = lVar5;
  }
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint64_t *)(lVar5 + 8);
  }
  if ((bVar13 || (bVar12 || (bVar11 || (bVar10 || (bVar9 || (bVar8 || bVar7)))))) || (bVar14)) {
    local_var_50 = 0xffffffffffffffff;
    local_var_58 = 0;
    local_var_60 = 0xffffffff;
    local_var_68 = uVar4;
    (**(code **)(**(int64_t **)(lVar3 + 0x8400) + 0x110))
              (*(int64_t **)(lVar3 + 0x8400),uVar4,&local_var_48,uVar6);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_10 ^ (uint64_t)stack_array_88);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address