#include "ultra_high_freq_fun_definitions.h"
/* 函数别名定义: DataStructureManager */
#define DataStructureManager DataStructureManager
/* 函数别名定义: RenderingEngineCore */
#define RenderingEngineCore RenderingEngineCore
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_04_part074.c - 5 个函数
// 函数: void function_2cb2f0(int64_t *param_1)
void function_2cb2f0(int64_t *param_1)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t *puVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  int64_t lVar13;
  int8_t stack_array_308 [32];
  code *pcStack_2e8;
  int8_t *plocal_var_2e0;
  int64_t *plStack_2d8;
  int64_t **pplStack_2d0;
  int64_t *plStack_2c8;
  int64_t *plStack_2c0;
  int64_t *plStack_2b8;
  int64_t *plStack_2b0;
  int64_t **pplStack_2a8;
  uint64_t local_var_2a0;
  int64_t *plStack_298;
  int8_t stack_array_290 [24];
  uint64_t local_var_278;
  int32_t local_var_270;
  int16_t local_var_26c;
  void *plocal_var_268;
  int8_t *plocal_var_260;
  int32_t local_var_258;
  int8_t stack_array_250 [72];
  int64_t alStack_208 [16];
  int8_t stack_array_188 [336];
  uint64_t local_var_38;
  local_var_2a0 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_308;
  plVar5 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,3);
  *plVar5 = (int64_t)&system_handler1_ptr;
  *plVar5 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar5 + 1) = 0;
  *plVar5 = (int64_t)&system_data_handler_ptr;
  plVar5[4] = 0;
  plVar5[2] = 0;
  *(byte *)(plVar5 + 5) = *(byte *)(plVar5 + 5) | 1;
  pplStack_2d0 = (int64_t **)plVar5;
  pplStack_2a8 = (int64_t **)plVar5;
  (**(code **)(*plVar5 + 0x28))(plVar5);
  *(int32_t *)(plVar5 + 2) = 0xc0;
  *(int8_t *)(plVar5 + 3) = 1;
  lVar13 = 4;
  *(int32_t *)((int64_t)plVar5 + 0x14) = 4;
  plVar6 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,3);
  *plVar6 = (int64_t)&system_handler1_ptr;
  *plVar6 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar6 + 1) = 0;
  *plVar6 = (int64_t)&system_data_processor_ptr;
  LOCK();
  *(int32_t *)(plVar6 + 2) = 0;
  UNLOCK();
  plVar6[3] = 0;
  lVar10 = *param_1;
  pplStack_2d0 = (int64_t **)plVar6;
  plStack_2b8 = plVar6;
  (**(code **)(*plVar6 + 0x28))(plVar6);
  plStack_2b8 = *(int64_t **)(lVar10 + 0x50);
  *(int64_t **)(lVar10 + 0x50) = plVar6;
  if (plStack_2b8 != (int64_t *)0x0) {
    (**(code **)(*plStack_2b8 + 0x38))();
  }
  uVar7 = *(uint64_t *)(*param_1 + 0x50);
  pplStack_2d0 = &plStack_2c8;
  plStack_2c8 = plVar5;
  (**(code **)(*plVar5 + 0x28))(plVar5);
  function_255b70(uVar7,&plStack_2c8);
  (**(code **)(*plVar5 + 0x38))(plVar5);
  uVar7 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xa0,8,3);
  plVar5 = (int64_t *)function_0842a0(uVar7);
  plStack_298 = plVar5;
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  *(int32_t *)(plVar5 + 2) = 0x2d;
  *(int16_t *)((int64_t)plVar5 + 0x14) = 0x10a;
  plVar6 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,3);
  plocal_var_268 = &system_message_buffer_ptr;
  plocal_var_260 = stack_array_250;
  stack_array_250[0] = 0;
  local_var_258 = 0x17;
  pplStack_2d0 = (int64_t **)plVar6;
  strcpy_s(stack_array_250,0x40,&system_data_buffer_ptr);
  *plVar6 = (int64_t)&system_handler1_ptr;
  *plVar6 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar6 + 1) = 0;
  *plVar6 = (int64_t)&system_data_validator_ptr;
  LOCK();
  *(int8_t *)(plVar6 + 2) = 0;
  UNLOCK();
  LOCK();
  *(int32_t *)((int64_t)plVar6 + 0x14) = 0;
  UNLOCK();
  plVar6[3] = 0;
  plVar6[4] = 0;
  lVar10 = *param_1;
  plStack_2b0 = plVar6;
  (**(code **)(*plVar6 + 0x28))(plVar6);
  plStack_2b0 = *(int64_t **)(lVar10 + 0x48);
  *(int64_t **)(lVar10 + 0x48) = plVar6;
  if (plStack_2b0 != (int64_t *)0x0) {
    (**(code **)(*plStack_2b0 + 0x38))();
  }
  plocal_var_268 = &system_state_ptr;
  uVar7 = *(uint64_t *)(*param_1 + 0x48);
  pplStack_2a8 = &plStack_2c0;
  plStack_2c0 = plVar5;
  (**(code **)(*plVar5 + 0x28))(plVar5);
  function_255880(uVar7,&plStack_2c0);
  (**(code **)(*plVar5 + 0x38))(plVar5);
  local_var_270 = 0;
  local_var_26c = 0;
  local_var_278 = 0x10000000000;
  pcStack_2e8 = SystemTimer;
  DataStructureManager(alStack_208,8,0x10,&SUB_18005d5f0);
  plStack_2d8 = (int64_t *)0x0;
  plocal_var_2e0 = stack_array_188;
  function_206da0(*(int64_t *)(*param_1 + 0x48),
                *(uint64_t *)(*(int64_t *)(*param_1 + 0x48) + 0x18),&local_var_278,alStack_208);
  pcStack_2e8 = (code *)stack_array_290;
  function_2072b0(*(int64_t *)(*param_1 + 0x50),
                *(uint64_t *)(*(int64_t *)(*param_1 + 0x50) + 0x18),&plStack_2d8);
  plVar5 = plStack_2d8;
  puVar12 = (uint64_t *)plStack_2d8[2];
  puVar9 = (uint64_t *)&system_config_data_ptr;
  puVar4 = *(uint64_t **)(alStack_208[*(int *)(system_message_buffer + 0x120c)] + 0x10);
  do {
    puVar11 = puVar4;
    puVar8 = puVar9;
    uVar7 = puVar8[1];
    *puVar11 = *puVar8;
    puVar11[1] = uVar7;
    uVar7 = puVar8[3];
    puVar11[2] = puVar8[2];
    puVar11[3] = uVar7;
    uVar7 = puVar8[5];
    puVar11[4] = puVar8[4];
    puVar11[5] = uVar7;
    uVar7 = puVar8[7];
    puVar11[6] = puVar8[6];
    puVar11[7] = uVar7;
    uVar7 = puVar8[9];
    puVar11[8] = puVar8[8];
    puVar11[9] = uVar7;
    uVar7 = puVar8[0xb];
    puVar11[10] = puVar8[10];
    puVar11[0xb] = uVar7;
    uVar7 = puVar8[0xd];
    puVar11[0xc] = puVar8[0xc];
    puVar11[0xd] = uVar7;
    uVar7 = puVar8[0xf];
    puVar11[0xe] = puVar8[0xe];
    puVar11[0xf] = uVar7;
    lVar13 = lVar13 + -1;
    puVar9 = puVar8 + 0x10;
    puVar4 = puVar11 + 0x10;
  } while (lVar13 != 0);
  uVar7 = puVar8[0x11];
  puVar11[0x10] = puVar8[0x10];
  puVar11[0x11] = uVar7;
  puVar11[0x12] = puVar8[0x12];
  *(int32_t *)(puVar11 + 0x13) = *(int32_t *)(puVar8 + 0x13);
  puVar9 = (uint64_t *)&system_parameter_data_ptr;
  lVar10 = 6;
  do {
    uVar7 = puVar9[1];
    *puVar12 = *puVar9;
    puVar12[1] = uVar7;
    uVar7 = puVar9[3];
    puVar12[2] = puVar9[2];
    puVar12[3] = uVar7;
    uVar7 = puVar9[5];
    puVar12[4] = puVar9[4];
    puVar12[5] = uVar7;
    uVar7 = puVar9[7];
    puVar12[6] = puVar9[6];
    puVar12[7] = uVar7;
    uVar7 = puVar9[9];
    puVar12[8] = puVar9[8];
    puVar12[9] = uVar7;
    uVar7 = puVar9[0xb];
    puVar12[10] = puVar9[10];
    puVar12[0xb] = uVar7;
    uVar1 = *(int32_t *)((int64_t)puVar9 + 100);
    uVar2 = *(int32_t *)(puVar9 + 0xd);
    uVar3 = *(int32_t *)((int64_t)puVar9 + 0x6c);
    *(int32_t *)(puVar12 + 0xc) = *(int32_t *)(puVar9 + 0xc);
    *(int32_t *)((int64_t)puVar12 + 100) = uVar1;
    *(int32_t *)(puVar12 + 0xd) = uVar2;
    *(int32_t *)((int64_t)puVar12 + 0x6c) = uVar3;
    uVar1 = *(int32_t *)((int64_t)puVar9 + 0x74);
    uVar2 = *(int32_t *)(puVar9 + 0xf);
    uVar3 = *(int32_t *)((int64_t)puVar9 + 0x7c);
    *(int32_t *)(puVar12 + 0xe) = *(int32_t *)(puVar9 + 0xe);
    *(int32_t *)((int64_t)puVar12 + 0x74) = uVar1;
    *(int32_t *)(puVar12 + 0xf) = uVar2;
    *(int32_t *)((int64_t)puVar12 + 0x7c) = uVar3;
    puVar9 = puVar9 + 0x10;
    lVar10 = lVar10 + -1;
    puVar12 = puVar12 + 0x10;
  } while (lVar10 != 0);
  function_207110(*(int64_t *)(*param_1 + 0x48),
                *(uint64_t *)(*(int64_t *)(*param_1 + 0x48) + 0x18),alStack_208);
  function_207400(*(int64_t *)(*param_1 + 0x50),
                *(uint64_t *)(*(int64_t *)(*param_1 + 0x50) + 0x18),&plStack_2d8);
  (**(code **)(*plVar5 + 0x38))(plVar5);
  SystemDataValidator(alStack_208,8,0x10,SystemTimer);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_308);
}
// WARNING: Removing unreachable block (ram,0x0001802cb909)
uint64_t function_2cb7a0(int64_t param_1,int64_t param_2,int16_t param_3)
{
  uint64_t uVar1;
  int8_t astack_special_x_18 [8];
  int32_t local_var_f0;
  int32_t local_var_ec;
  void *plocal_var_d0;
  int64_t lStack_c8;
  int32_t local_var_c0;
  uint64_t local_var_b8;
  int32_t local_var_b0;
  int32_t local_var_ac;
  int32_t local_var_a8;
  int32_t local_var_a4;
  int64_t *plStack_a0;
  uint64_t local_var_98;
  int32_t local_var_90;
  int16_t local_var_8c;
  int16_t local_var_8a;
  uint64_t local_var_88;
  int64_t lStack_80;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  int32_t local_var_68;
  uint64_t local_var_60;
  int8_t stack_array_58 [32];
  int32_t local_var_38;
  int32_t local_var_34;
  int32_t local_var_30;
  int32_t local_var_2c;
  int64_t *plStack_28;
  local_var_88 = 0xfffffffffffffffe;
  astack_special_x_18[0] = 0;
  local_var_98 = 0;
  if (*(int *)(param_2 + 0x10) != 0) {
    local_var_98 = SystemCore_LoggingSystem0(param_1,param_2,1);
  }
  local_var_90 = 0;
  plocal_var_d0 = &system_data_buffer_ptr;
  local_var_b8 = 0;
  lStack_c8 = 0;
  local_var_c0 = 0;
  plStack_a0 = (int64_t *)0x0;
  local_var_6c = CONCAT22(local_var_8a,param_3);
  local_var_b0 = 0;
  local_var_ac = 0;
  local_var_a8 = 0;
  local_var_a4 = 0;
  uVar1 = *(uint64_t *)(param_1 + 0x15b8);
  local_var_f0 = (int32_t)local_var_98;
  local_var_ec = (int32_t)((uint64_t)local_var_98 >> 0x20);
  local_var_78 = local_var_f0;
  local_var_74 = local_var_ec;
  local_var_70 = 0;
  local_var_68 = 2;
  local_var_60 = 0;
  local_var_8c = param_3;
  lStack_80 = param_1;
  CoreEngineDataTransformer(stack_array_58,&plocal_var_d0);
  local_var_38 = local_var_b0;
  local_var_34 = local_var_ac;
  local_var_30 = local_var_a8;
  local_var_2c = local_var_a4;
  plStack_28 = plStack_a0;
  if (plStack_a0 != (int64_t *)0x0) {
    (**(code **)(*plStack_a0 + 0x28))();
  }
  uVar1 = UIRenderingEngine(uVar1,0,&lStack_80,astack_special_x_18);
  if (plStack_a0 != (int64_t *)0x0) {
    (**(code **)(*plStack_a0 + 0x38))();
  }
  plocal_var_d0 = &system_data_buffer_ptr;
  if (lStack_c8 == 0) {
    return uVar1;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2cb930(uint64_t param_1,uint64_t *param_2)
void function_2cb930(uint64_t param_1,uint64_t *param_2)
{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int8_t stack_array_298 [32];
  int32_t local_var_278;
  int8_t local_var_270;
  int8_t stack_array_268 [4];
  uint stack_array_264 [3];
  uint64_t local_var_258;
  uint64_t local_var_250;
  uint64_t local_var_248;
  uint64_t local_var_240;
  uint64_t local_var_238;
  void **pplocal_var_230;
  uint64_t local_var_228;
  uint64_t local_var_220;
  uint64_t local_var_218;
  uint64_t local_var_210;
  uint64_t local_var_208;
  uint64_t local_var_200;
  uint64_t local_var_1f8;
  uint64_t local_var_1f0;
  uint64_t local_var_1e8;
  uint64_t local_var_1e0;
  uint64_t local_var_1d8;
  uint64_t *plocal_var_1d0;
  uint64_t *plocal_var_1c8;
  uint64_t *plocal_var_1c0;
  uint64_t local_var_1b8;
  void *plocal_var_1a8;
  int8_t *plocal_var_1a0;
  int32_t local_var_198;
  int8_t stack_array_190 [72];
  uint64_t *plocal_var_148;
  uint64_t **pplocal_var_140;
  uint64_t *plocal_var_138;
  uint64_t *aplocal_var_130 [4];
  void *plocal_var_110;
  int8_t *plocal_var_108;
  int32_t local_var_100;
  int8_t stack_array_f8 [32];
  void *plocal_var_d8;
  int8_t *plocal_var_d0;
  int32_t local_var_c8;
  int8_t stack_array_c0 [40];
  void *plocal_var_98;
  int8_t *plocal_var_90;
  int32_t local_var_88;
  int8_t stack_array_80 [72];
  uint64_t local_var_38;
  local_var_1b8 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_298;
  SystemData_Processor(stack_array_268,&system_message_control_ptr);
  pplocal_var_230 = &plocal_var_98;
  plocal_var_98 = &system_message_buffer_ptr;
  plocal_var_90 = stack_array_80;
  local_var_88 = 0;
  stack_array_80[0] = 0;
  DataStructureManager0(&plocal_var_98,&system_message_template_ptr);
  SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_98);
  plocal_var_148 = (uint64_t *)&system_string_buffer_ptr;
  pplocal_var_140 = aplocal_var_130;
  aplocal_var_130[0] = (uint64_t *)((uint64_t)aplocal_var_130[0] & 0xffffffffffffff00);
  lVar7 = 0x10;
  plocal_var_138 = (uint64_t *)CONCAT44(plocal_var_138._4_4_,0x10);
  strcpy_s(aplocal_var_130,0x20,&system_string_version_ptr);
  local_var_220 = function_2cb7a0(*param_2,&plocal_var_148,0);
  plocal_var_148 = (uint64_t *)&system_state_ptr;
  plocal_var_110 = &system_string_buffer_ptr;
  plocal_var_108 = stack_array_f8;
  stack_array_f8[0] = 0;
  local_var_100 = 0x11;
  strcpy_s(stack_array_f8,0x20,&system_string_config_ptr);
  lVar5 = function_2cb7a0(*param_2,&plocal_var_110,0);
  plocal_var_110 = &system_state_ptr;
  plocal_var_1a8 = &system_string_buffer_ptr;
  plocal_var_1a0 = stack_array_190;
  stack_array_190[0] = 0;
  local_var_198 = 0x1c;
  strcpy_s(stack_array_190,0x20,&system_string_system_ptr);
  local_var_228 = function_2cb7a0(*param_2,&plocal_var_1a8,0);
  plocal_var_1a8 = &system_state_ptr;
  plocal_var_d8 = &system_string_buffer_ptr;
  plocal_var_d0 = stack_array_c0;
  stack_array_c0[0] = 0;
  local_var_c8 = 0x18;
  strcpy_s(stack_array_c0,0x20,&system_string_error_ptr);
  lVar6 = function_2cb7a0(*param_2,&plocal_var_d8,0);
  plocal_var_d8 = &system_state_ptr;
  local_var_278 = 0xffffffff;
  RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),4,param_2[0xb],0x20);
  stack_array_264[0] = *(uint *)((int64_t)param_2 + 0x2e4);
  SystemData_Processor(stack_array_268,&system_message_config_ptr);
  plocal_var_1c0 = &local_var_228;
  pplocal_var_140 = (uint64_t **)stack_array_264;
  aplocal_var_130[0] = &local_var_220;
  plocal_var_1d0 = param_2;
  plocal_var_1c8 = param_2;
  plocal_var_148 = param_2;
  plocal_var_138 = param_2;
  if (*(char *)(param_2 + 0x5c) == '\0') {
    lVar5 = 2;
    do {
      function_2cc270(&plocal_var_1d0);
      function_2cc500(&plocal_var_148);
      stack_array_264[0] = (uint)(stack_array_264[0] == 0);
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  else {
    SystemData_Processor(stack_array_268,&system_message_event_ptr);
    pplocal_var_230 = &plocal_var_1a8;
    plocal_var_1a8 = &system_message_buffer_ptr;
    plocal_var_1a0 = stack_array_190;
    local_var_198 = 0;
    stack_array_190[0] = 0;
    DataStructureManager0(&plocal_var_1a8,&system_message_callback_ptr);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_1a8);
    local_var_210 = param_2[4];
    local_var_218 = 4;
    local_var_208 = 1;
    NetworkSystem_DataProcessor0(*(uint64_t *)(system_message_buffer + 0x1cd8),4,1);
    local_var_1f8 = param_2[(int64_t)(int)stack_array_264[0] + 5];
    local_var_200 = 1;
    local_var_1f0 = 1;
    NetworkSystem_DataProcessor0(*(uint64_t *)(system_message_buffer + 0x1cd8),1,1);
    local_var_1e0 = param_2[7];
    local_var_1e8 = 2;
    local_var_1d8 = 1;
    NetworkSystem_DataProcessor0(*(uint64_t *)(system_message_buffer + 0x1cd8),2,1);
    local_var_258 = param_2[3];
    stack_array_264[1] = 3;
    stack_array_264[2] = 0;
    local_var_250 = 1;
    NetworkSystem_DataProcessor0(*(uint64_t *)(system_message_buffer + 0x1cd8),3,1);
    local_var_240 = param_2[(int64_t)(int)(1 - stack_array_264[0]) + 5];
    local_var_248 = 5;
    local_var_238 = 1;
    NetworkSystem_DataProcessor0(*(uint64_t *)(system_message_buffer + 0x1cd8),5,1);
    uVar1 = *(uint64_t *)(system_message_buffer + 0x1cd8);
    uVar2 = param_2[8];
    UltraHighFreq_DatabaseHandler1(uVar1,uVar2,param_2 + 0x10,0x260);
    function_29dca0(uVar1,0xb,0x20,uVar2);
    lVar3 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if ((lVar5 != 0) && (*(int64_t *)(lVar3 + 0x82a0) != (int64_t)**(int **)(lVar5 + 0x10))) {
      (**(code **)(**(int64_t **)(lVar3 + 0x8400) + 0x228))
                (*(int64_t **)(lVar3 + 0x8400),*(uint64_t *)(*(int **)(lVar5 + 0x10) + 6),0,0);
      *(int64_t *)(lVar3 + 0x82a0) = (int64_t)**(int **)(lVar5 + 0x10);
    }
    plVar4 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    (**(code **)(*plVar4 + 0x148))(plVar4,1,1,1);
    local_var_270 = 1;
    local_var_278 = 0xffffffff;
    CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),5,1);
    local_var_270 = 1;
    local_var_278 = 0xffffffff;
    CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),3,1);
    local_var_270 = 1;
    local_var_278 = 0xffffffff;
    CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),2,1,0);
    local_var_270 = 1;
    local_var_278 = 0xffffffff;
    CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),1,1);
    local_var_270 = 1;
    local_var_278 = 0xffffffff;
    CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),4,1);
    function_2cc500(&plocal_var_148);
    do {
      stack_array_264[0] = (uint)(stack_array_264[0] == 0);
      function_2cc270(&plocal_var_1d0);
      function_2cc500(&plocal_var_148);
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    SystemCore_Synchronizer(&plocal_var_1a8);
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
  }
  SystemData_Processor(stack_array_268,&system_message_input_ptr);
  pplocal_var_230 = &plocal_var_1a8;
  plocal_var_1a8 = &system_message_buffer_ptr;
  plocal_var_1a0 = stack_array_190;
  local_var_198 = 0;
  stack_array_190[0] = 0;
  DataStructureManager0(&plocal_var_1a8,&system_message_output_ptr);
  SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_1a8);
  local_var_240 = param_2[4];
  local_var_248 = 4;
  local_var_238 = 1;
  NetworkSystem_DataProcessor0(*(uint64_t *)(system_message_buffer + 0x1cd8),4,1);
  local_var_258 = param_2[3];
  stack_array_264[1] = 3;
  stack_array_264[2] = 0;
  local_var_250 = 1;
  NetworkSystem_DataProcessor0(*(uint64_t *)(system_message_buffer + 0x1cd8),3,1);
  uVar1 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  uVar2 = param_2[8];
  UltraHighFreq_DatabaseHandler1(uVar1,uVar2,param_2 + 0x10,0x260);
  function_29dca0(uVar1,0xb,0x20,uVar2);
  lVar5 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if ((lVar6 != 0) && (*(int64_t *)(lVar5 + 0x82a0) != (int64_t)**(int **)(lVar6 + 0x10))) {
    (**(code **)(**(int64_t **)(lVar5 + 0x8400) + 0x228))
              (*(int64_t **)(lVar5 + 0x8400),*(uint64_t *)(*(int **)(lVar6 + 0x10) + 6),0,0);
    *(int64_t *)(lVar5 + 0x82a0) = (int64_t)**(int **)(lVar6 + 0x10);
  }
  plVar4 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
  (**(code **)(*plVar4 + 0x148))(plVar4,1,1,1);
  local_var_270 = 1;
  local_var_278 = 0xffffffff;
  CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),3,1);
  local_var_270 = 1;
  local_var_278 = 0xffffffff;
  CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),4,1);
  SystemCore_Synchronizer(&plocal_var_1a8);
  system_system_data_memory = system_system_data_memory + -1;
  (**(code **)(*system_system_data_memory + 0x20))();
  system_system_data_memory = system_system_data_memory + -1;
  (**(code **)(*system_system_data_memory + 0x20))();
  SystemCore_Synchronizer(&plocal_var_98);
  system_system_data_memory = system_system_data_memory + -1;
  (**(code **)(*system_system_data_memory + 0x20))();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_298);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2cc270(int64_t *param_1)
void function_2cc270(int64_t *param_1)
{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int8_t stack_array_f8 [32];
  int32_t local_var_d8;
  int8_t local_var_d0;
  int8_t stack_array_c8 [8];
  uint64_t local_var_c0;
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  uint64_t local_var_98;
  uint64_t local_var_90;
  void **pplocal_var_88;
  void *plocal_var_78;
  int8_t *plocal_var_70;
  int32_t local_var_68;
  int8_t stack_array_60 [72];
  uint64_t local_var_18;
  local_var_90 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_f8;
  SystemData_Processor(stack_array_c8,&system_message_processor_ptr);
  pplocal_var_88 = &plocal_var_78;
  plocal_var_78 = &system_message_buffer_ptr;
  plocal_var_70 = stack_array_60;
  local_var_68 = 0;
  stack_array_60[0] = 0;
  DataStructureManager0(&plocal_var_78,&system_message_formatter_ptr);
  SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_78);
  local_var_b8 = *(uint64_t *)(*param_1 + 0x20);
  local_var_c0 = 4;
  local_var_b0 = 1;
  NetworkSystem_DataProcessor0(*(uint64_t *)(system_message_buffer + 0x1cd8),4,1);
  local_var_a0 = *(uint64_t *)(*param_1 + 0x18);
  local_var_a8 = 3;
  local_var_98 = 1;
  NetworkSystem_DataProcessor0(*(uint64_t *)(system_message_buffer + 0x1cd8),3,1);
  uVar1 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  uVar2 = *(uint64_t *)(*param_1 + 0x40);
  UltraHighFreq_DatabaseHandler1(uVar1,uVar2,param_1[1] + 0x80,0x260);
  function_29dca0(uVar1,0xb,0x20,uVar2);
  lVar3 = *(int64_t *)param_1[2];
  lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if ((lVar3 != 0) && (*(int64_t *)(lVar4 + 0x82a0) != (int64_t)**(int **)(lVar3 + 0x10))) {
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x228))
              (*(int64_t **)(lVar4 + 0x8400),*(uint64_t *)(*(int **)(lVar3 + 0x10) + 6),0,0);
    *(int64_t *)(lVar4 + 0x82a0) = (int64_t)**(int **)(lVar3 + 0x10);
  }
  plVar5 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
  (**(code **)(*plVar5 + 0x148))(plVar5,1,1,1);
  local_var_d0 = 1;
  local_var_d8 = 0xffffffff;
  CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),3,1);
  local_var_d0 = 1;
  local_var_d8 = 0xffffffff;
  CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),4,1);
  SystemCore_Synchronizer(&plocal_var_78);
  system_system_data_memory = system_system_data_memory + -1;
  (**(code **)(*system_system_data_memory + 0x20))();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_f8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2cc500(int64_t *param_1)
void function_2cc500(int64_t *param_1)
{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int8_t stack_array_128 [32];
  int32_t local_var_108;
  int8_t local_var_100;
  int8_t stack_array_f8 [8];
  uint64_t local_var_f0;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  uint64_t local_var_98;
  uint64_t local_var_90;
  void **pplocal_var_88;
  void *plocal_var_78;
  int8_t *plocal_var_70;
  int32_t local_var_68;
  int8_t stack_array_60 [72];
  uint64_t local_var_18;
  local_var_90 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_128;
  SystemData_Processor(stack_array_f8,&system_message_handler_ptr);
  pplocal_var_88 = &plocal_var_78;
  plocal_var_78 = &system_message_buffer_ptr;
  plocal_var_70 = stack_array_60;
  local_var_68 = 0;
  stack_array_60[0] = 0;
  DataStructureManager0(&plocal_var_78,&system_message_logger_ptr);
  SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_78);
  local_var_e8 = *(uint64_t *)(*param_1 + 0x20);
  local_var_f0 = 4;
  local_var_e0 = 1;
  NetworkSystem_DataProcessor0(*(uint64_t *)(system_message_buffer + 0x1cd8),4,1);
  local_var_d0 = *(uint64_t *)(*param_1 + 0x28 + (int64_t)*(int *)param_1[1] * 8);
  local_var_d8 = 1;
  local_var_c8 = 1;
  NetworkSystem_DataProcessor0(*(uint64_t *)(system_message_buffer + 0x1cd8),1,1);
  local_var_b8 = *(uint64_t *)(*param_1 + 0x38);
  local_var_c0 = 2;
  local_var_b0 = 1;
  NetworkSystem_DataProcessor0(*(uint64_t *)(system_message_buffer + 0x1cd8),2,1);
  local_var_a0 = *(uint64_t *)(*param_1 + 0x28 + (int64_t)(1 - *(int *)param_1[1]) * 8);
  local_var_a8 = 5;
  local_var_98 = 1;
  NetworkSystem_DataProcessor0(*(uint64_t *)(system_message_buffer + 0x1cd8),5,1);
  uVar1 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  uVar2 = *(uint64_t *)(*param_1 + 0x40);
  UltraHighFreq_DatabaseHandler1(uVar1,uVar2,param_1[2] + 0x80,0x260);
  function_29dca0(uVar1,0xb,0x20,uVar2);
  lVar3 = *(int64_t *)param_1[3];
  lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if ((lVar3 != 0) && (*(int64_t *)(lVar4 + 0x82a0) != (int64_t)**(int **)(lVar3 + 0x10))) {
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x228))
              (*(int64_t **)(lVar4 + 0x8400),*(uint64_t *)(*(int **)(lVar3 + 0x10) + 6),0,0);
    *(int64_t *)(lVar4 + 0x82a0) = (int64_t)**(int **)(lVar3 + 0x10);
  }
  plVar5 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
  (**(code **)(*plVar5 + 0x150))(plVar5,*(uint64_t *)(*(int64_t *)(*param_1 + 0x18) + 0x10),0);
  local_var_100 = 1;
  local_var_108 = 0xffffffff;
  CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),5,1);
  local_var_100 = 1;
  local_var_108 = 0xffffffff;
  CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),2,1);
  local_var_100 = 1;
  local_var_108 = 0xffffffff;
  CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),1,1);
  local_var_100 = 1;
  local_var_108 = 0xffffffff;
  CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),4,1);
  SystemCore_Synchronizer(&plocal_var_78);
  system_system_data_memory = system_system_data_memory + -1;
  (**(code **)(*system_system_data_memory + 0x20))();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_128);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2cc890(uint64_t param_1,int64_t param_2)
void function_2cc890(uint64_t param_1,int64_t param_2)
{
  int32_t uVar1;
  int32_t uVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  int32_t uVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  int8_t stack_array_3e8 [48];
  int8_t stack_array_3b8 [80];
  void **pplocal_var_368;
  uint64_t local_var_358;
  uint64_t stack_array_348 [76];
  void *plocal_var_e8;
  uint64_t *plocal_var_e0;
  int32_t local_var_d8;
  uint64_t local_var_d0;
  void *plocal_var_a8;
  int8_t *plocal_var_a0;
  int32_t local_var_98;
  int8_t stack_array_90 [72];
  uint64_t local_var_48;
  local_var_358 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_3e8;
  SystemData_Processor(stack_array_3b8,&system_message_state_ptr);
  pplocal_var_368 = &plocal_var_a8;
  plocal_var_a8 = &system_message_buffer_ptr;
  plocal_var_a0 = stack_array_90;
  local_var_98 = 0;
  stack_array_90[0] = 0;
  DataStructureManager0(&plocal_var_a8,&system_message_queue_ptr);
  SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_a8);
  lVar9 = 4;
  puVar7 = stack_array_348;
  puVar4 = (uint64_t *)(param_2 + 0x80);
  do {
    puVar8 = puVar4;
    puVar6 = puVar7;
    uVar3 = puVar8[1];
    *puVar6 = *puVar8;
    puVar6[1] = uVar3;
    uVar3 = puVar8[3];
    puVar6[2] = puVar8[2];
    puVar6[3] = uVar3;
    uVar3 = puVar8[5];
    puVar6[4] = puVar8[4];
    puVar6[5] = uVar3;
    uVar3 = puVar8[7];
    puVar6[6] = puVar8[6];
    puVar6[7] = uVar3;
    uVar3 = puVar8[9];
    puVar6[8] = puVar8[8];
    puVar6[9] = uVar3;
    uVar3 = puVar8[0xb];
    puVar6[10] = puVar8[10];
    puVar6[0xb] = uVar3;
    uVar3 = puVar8[0xd];
    puVar6[0xc] = puVar8[0xc];
    puVar6[0xd] = uVar3;
    uVar3 = puVar8[0xf];
    puVar6[0xe] = puVar8[0xe];
    puVar6[0xf] = uVar3;
    lVar9 = lVar9 + -1;
    puVar7 = puVar6 + 0x10;
    puVar4 = puVar8 + 0x10;
  } while (lVar9 != 0);
  uVar3 = puVar8[0x11];
  puVar6[0x10] = puVar8[0x10];
  puVar6[0x11] = uVar3;
  uVar3 = puVar8[0x13];
  puVar6[0x12] = puVar8[0x12];
  puVar6[0x13] = uVar3;
  uVar3 = puVar8[0x15];
  puVar6[0x14] = puVar8[0x14];
  puVar6[0x15] = uVar3;
  uVar3 = puVar8[0x17];
  puVar6[0x16] = puVar8[0x16];
  puVar6[0x17] = uVar3;
  uVar5 = *(int32_t *)((int64_t)puVar8 + 0xc4);
  uVar1 = *(int32_t *)(puVar8 + 0x19);
  uVar2 = *(int32_t *)((int64_t)puVar8 + 0xcc);
  *(int32_t *)(puVar6 + 0x18) = *(int32_t *)(puVar8 + 0x18);
  *(int32_t *)((int64_t)puVar6 + 0xc4) = uVar5;
  *(int32_t *)(puVar6 + 0x19) = uVar1;
  *(int32_t *)((int64_t)puVar6 + 0xcc) = uVar2;
  uVar5 = *(int32_t *)((int64_t)puVar8 + 0xd4);
  uVar1 = *(int32_t *)(puVar8 + 0x1b);
  uVar2 = *(int32_t *)((int64_t)puVar8 + 0xdc);
  *(int32_t *)(puVar6 + 0x1a) = *(int32_t *)(puVar8 + 0x1a);
  *(int32_t *)((int64_t)puVar6 + 0xd4) = uVar5;
  *(int32_t *)(puVar6 + 0x1b) = uVar1;
  *(int32_t *)((int64_t)puVar6 + 0xdc) = uVar2;
  plocal_var_e8 = &system_data_buffer_ptr;
  local_var_d0 = 0;
  plocal_var_e0 = (uint64_t *)0x0;
  local_var_d8 = 0;
  puVar7 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar7 = 0;
  plocal_var_e0 = puVar7;
  uVar5 = CoreEngineSystemCleanup(puVar7);
  local_var_d0 = CONCAT44(local_var_d0._4_4_,uVar5);
  *puVar7 = 0x70614d646c726f57;
  *(int8_t *)(puVar7 + 1) = 0;
  local_var_d8 = 8;
  function_177c00(system_system_data_memory,&plocal_var_e8);
  plocal_var_e8 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar7);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address