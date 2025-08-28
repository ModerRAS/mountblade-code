#include "ultra_high_freq_fun_definitions.h"
/* 函数别名定义: DataStructureManager */
#define DataStructureManager DataStructureManager
/* 函数别名定义: RenderingEngineCore */
#define RenderingEngineCore RenderingEngineCore
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_07_part001.c - 6 个函数
#include "TaleWorlds.Native.Split.h"
// 99_part_07.c - 500 个函数
// 函数: void function_3f94b0(int64_t param_1,int64_t param_2)
void function_3f94b0(int64_t param_1,int64_t param_2)
{
  uint64_t uVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  int iVar4;
  void *puVar5;
  int8_t stack_array_258 [32];
  int64_t *plStack_238;
  int64_t *plStack_230;
  void *plocal_var_228;
  uint64_t *plocal_var_220;
  int32_t local_var_218;
  uint64_t local_var_210;
  void *plocal_var_208;
  uint64_t *plocal_var_200;
  int32_t local_var_1f8;
  uint64_t local_var_1f0;
  void *plocal_var_1e8;
  uint64_t *plocal_var_1e0;
  int32_t local_var_1d8;
  uint64_t local_var_1d0;
  int iStack_1c8;
  int iStack_1c4;
  int32_t local_var_1c0;
  int32_t local_var_1bc;
  int32_t local_var_1b8;
  uint64_t local_var_1b4;
  uint64_t local_var_1ac;
  int8_t local_var_1a4;
  uint64_t local_var_1a3;
  int32_t local_var_198;
  int8_t local_var_194;
  uint64_t local_var_190;
  void *plocal_var_188;
  int8_t *plocal_var_180;
  int32_t local_var_178;
  int8_t stack_array_170 [136];
  void *plocal_var_e8;
  int8_t *plocal_var_e0;
  int32_t local_var_d8;
  int8_t stack_array_d0 [136];
  uint64_t local_var_48;
  local_var_190 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_258;
  function_1f9270();
  local_var_1c0 = 1;
  local_var_1bc = 1;
  local_var_1b4 = 0;
  local_var_1ac = 0x3f80000000000000;
  local_var_1a3 = 1;
  local_var_1a4 = 0;
  local_var_194 = 0;
  if (*(char *)(param_1 + 0x4c) != '\0') {
    iVar4 = (int)((float)*(double *)(param_1 + 0x58) * (float)*(int *)(param_2 + 0x3590));
    iStack_1c8 = 4;
    if (4 < iVar4) {
      iStack_1c8 = iVar4;
    }
    iVar4 = (int)((float)*(double *)(param_1 + 0x60) * (float)*(int *)(param_2 + 0x3594));
    iStack_1c4 = 4;
    if (4 < iVar4) {
      iStack_1c4 = iVar4;
    }
    local_var_1b8 = 0x1f;
    plocal_var_1e8 = &system_data_buffer_ptr;
    local_var_1d0 = 0;
    plocal_var_1e0 = (uint64_t *)0x0;
    local_var_1d8 = 0;
    local_var_198 = *(int32_t *)(param_2 + 0x1bd4);
    plocal_var_1e0 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)plocal_var_1e0 = 0;
    uVar2 = CoreEngineSystemCleanup(plocal_var_1e0);
    local_var_1d0 = CONCAT44(local_var_1d0._4_4_,uVar2);
    *plocal_var_1e0 = 0x7365725f666c6168;
    *(int32_t *)(plocal_var_1e0 + 1) = 0x7065645f;
    *(int16_t *)((int64_t)plocal_var_1e0 + 0xc) = 0x6874;
    *(int8_t *)((int64_t)plocal_var_1e0 + 0xe) = 0;
    local_var_1d8 = 0xe;
    puVar5 = &system_buffer_ptr;
    if (*(void **)(param_2 + 0x3528) != (void *)0x0) {
      puVar5 = *(void **)(param_2 + 0x3528);
    }
    System_DataHandler(&plocal_var_1e8,&processed_var_5464_ptr,puVar5);
    plocal_var_188 = &memory_allocator_3432_ptr;
    plocal_var_180 = stack_array_170;
    stack_array_170[0] = 0;
    local_var_178 = local_var_1d8;
    puVar3 = (uint64_t *)&system_buffer_ptr;
    if (plocal_var_1e0 != (uint64_t *)0x0) {
      puVar3 = plocal_var_1e0;
    }
    strcpy_s(stack_array_170,0x80,puVar3);
    puVar3 = (uint64_t *)SystemInitializer(system_resource_state,&plStack_238,&plocal_var_188,&iStack_1c8);
    uVar1 = *puVar3;
    *puVar3 = 0;
    plStack_230 = *(int64_t **)(param_1 + 0x428);
    *(uint64_t *)(param_1 + 0x428) = uVar1;
    if (plStack_230 != (int64_t *)0x0) {
      (**(code **)(*plStack_230 + 0x38))();
    }
    if (plStack_238 != (int64_t *)0x0) {
      (**(code **)(*plStack_238 + 0x38))();
    }
    plocal_var_188 = &system_state_ptr;
    local_var_1b8 = 4;
    plocal_var_208 = &system_data_buffer_ptr;
    local_var_1f0 = 0;
    plocal_var_200 = (uint64_t *)0x0;
    local_var_1f8 = 0;
    plocal_var_200 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x12,0x13);
    *(int8_t *)plocal_var_200 = 0;
    uVar2 = CoreEngineSystemCleanup(plocal_var_200);
    local_var_1f0 = CONCAT44(local_var_1f0._4_4_,uVar2);
    *plocal_var_200 = 0x7365725f666c6168;
    plocal_var_200[1] = 0x7469636f6c65765f;
    *(int16_t *)(plocal_var_200 + 2) = 0x79;
    local_var_1f8 = 0x11;
    puVar5 = &system_buffer_ptr;
    if (*(void **)(param_2 + 0x3528) != (void *)0x0) {
      puVar5 = *(void **)(param_2 + 0x3528);
    }
    System_DataHandler(&plocal_var_208,&processed_var_5464_ptr,puVar5);
    plocal_var_e8 = &memory_allocator_3432_ptr;
    plocal_var_e0 = stack_array_d0;
    stack_array_d0[0] = 0;
    local_var_d8 = local_var_1f8;
    puVar3 = (uint64_t *)&system_buffer_ptr;
    if (plocal_var_200 != (uint64_t *)0x0) {
      puVar3 = plocal_var_200;
    }
    strcpy_s(stack_array_d0,0x80,puVar3);
    puVar3 = (uint64_t *)SystemInitializer(system_resource_state,&plStack_238,&plocal_var_e8,&iStack_1c8);
    uVar1 = *puVar3;
    *puVar3 = 0;
    plStack_230 = *(int64_t **)(param_1 + 0x430);
    *(uint64_t *)(param_1 + 0x430) = uVar1;
    if (plStack_230 != (int64_t *)0x0) {
      (**(code **)(*plStack_230 + 0x38))();
    }
    if (plStack_238 != (int64_t *)0x0) {
      (**(code **)(*plStack_238 + 0x38))();
    }
    plocal_var_e8 = &system_state_ptr;
    local_var_1b8 = 0x31;
    plocal_var_228 = &system_data_buffer_ptr;
    local_var_210 = 0;
    plocal_var_220 = (uint64_t *)0x0;
    local_var_218 = 0;
    plocal_var_220 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x1f,0x13);
    *(int8_t *)plocal_var_220 = 0;
    uVar2 = CoreEngineSystemCleanup(plocal_var_220);
    local_var_210 = CONCAT44(local_var_210._4_4_,uVar2);
    *plocal_var_220 = 0x7365725f666c6168;
    plocal_var_220[1] = 0x5f64656b6361705f;
    plocal_var_220[2] = 0x65765f6874706564;
    *(int32_t *)(plocal_var_220 + 3) = 0x69636f6c;
    *(int16_t *)((int64_t)plocal_var_220 + 0x1c) = 0x7974;
    *(int8_t *)((int64_t)plocal_var_220 + 0x1e) = 0;
    local_var_218 = 0x1e;
    puVar5 = &system_buffer_ptr;
    if (*(void **)(param_2 + 0x3528) != (void *)0x0) {
      puVar5 = *(void **)(param_2 + 0x3528);
    }
    System_DataHandler(&plocal_var_228,&processed_var_5464_ptr,puVar5);
    plocal_var_188 = &memory_allocator_3432_ptr;
    plocal_var_180 = stack_array_170;
    stack_array_170[0] = 0;
    local_var_178 = local_var_218;
    puVar3 = (uint64_t *)&system_buffer_ptr;
    if (plocal_var_220 != (uint64_t *)0x0) {
      puVar3 = plocal_var_220;
    }
    strcpy_s(stack_array_170,0x80,puVar3);
    puVar3 = (uint64_t *)SystemInitializer(system_resource_state,&plStack_238,&plocal_var_188,&iStack_1c8);
    uVar1 = *puVar3;
    *puVar3 = 0;
    plStack_230 = *(int64_t **)(param_1 + 0x438);
    *(uint64_t *)(param_1 + 0x438) = uVar1;
    if (plStack_230 != (int64_t *)0x0) {
      (**(code **)(*plStack_230 + 0x38))();
    }
    if (plStack_238 != (int64_t *)0x0) {
      (**(code **)(*plStack_238 + 0x38))();
    }
    plocal_var_188 = &system_state_ptr;
    plocal_var_228 = &system_data_buffer_ptr;
    if (plocal_var_220 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_220 = (uint64_t *)0x0;
    local_var_210 = local_var_210 & 0xffffffff00000000;
    plocal_var_228 = &system_state_ptr;
    plocal_var_208 = &system_data_buffer_ptr;
    if (plocal_var_200 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_200 = (uint64_t *)0x0;
    local_var_1f0 = local_var_1f0 & 0xffffffff00000000;
    plocal_var_208 = &system_state_ptr;
    plocal_var_1e8 = &system_data_buffer_ptr;
    if (plocal_var_1e0 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_1e0 = (uint64_t *)0x0;
    local_var_1d0 = local_var_1d0 & 0xffffffff00000000;
    plocal_var_1e8 = &system_state_ptr;
  }
  plStack_238 = *(int64_t **)(param_1 + 0x448);
  *(uint64_t *)(param_1 + 0x448) = 0;
  if (plStack_238 != (int64_t *)0x0) {
    (**(code **)(*plStack_238 + 0x38))();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_258);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3f9a40(uint64_t *param_1,uint64_t param_2,int64_t param_3,int32_t param_4,
void function_3f9a40(uint64_t *param_1,uint64_t param_2,int64_t param_3,int32_t param_4,
                  int32_t param_5)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  void *puVar6;
  int iVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t lVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  int8_t stack_array_2a8 [32];
  int32_t local_var_288;
  char acStack_278 [8];
  int32_t stack_array_270 [2];
  void *plocal_var_268;
  void **pplocal_var_260;
  uint64_t local_var_258;
  int32_t local_var_250;
  int64_t *plStack_248;
  void *plocal_var_240;
  int64_t lStack_238;
  int32_t local_var_230;
  uint64_t local_var_228;
  uint64_t local_var_220;
  uint64_t local_var_218;
  int64_t *plStack_210;
  uint64_t local_var_208;
  void *plocal_var_200;
  void **pplocal_var_1f8;
  uint64_t local_var_1f0;
  int32_t local_var_1e8;
  uint64_t local_var_1e0;
  int8_t stack_array_1d8 [32];
  uint64_t local_var_1b8;
  uint64_t local_var_1b0;
  int64_t *plStack_1a8;
  void **pplocal_var_1a0;
  int iStack_198;
  int iStack_194;
  uint64_t local_var_190;
  float fStack_188;
  int32_t local_var_184;
  int32_t local_var_180;
  int32_t local_var_17c;
  void *plocal_var_178;
  int8_t *plocal_var_170;
  int32_t local_var_168;
  int8_t stack_array_160 [72];
  void *plocal_var_118;
  void *plocal_var_110;
  uint local_var_108;
  uint8_t stack_array_100 [136];
  uint64_t local_var_78;
  local_var_208 = 0xfffffffffffffffe;
  local_var_78 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2a8;
  plocal_var_118 = &memory_allocator_3432_ptr;
  plocal_var_110 = stack_array_100;
  stack_array_100[0] = 0;
  local_var_108 = 0xc;
  stack_array_270[0] = param_4;
  strcpy_s(stack_array_100,0x80,&system_data_eb68);
  puVar6 = &system_buffer_ptr;
  if ((void *)param_1[3] != (void *)0x0) {
    puVar6 = (void *)param_1[3];
  }
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (puVar6[lVar3] != '\0');
  iVar14 = (int)lVar3;
  if ((0 < iVar14) && (local_var_108 + iVar14 < 0x7f)) {
// WARNING: Subroutine does not return
    memcpy(plocal_var_110 + local_var_108,puVar6,(int64_t)(iVar14 + 1));
  }
  plVar8 = (int64_t *)0x0;
  puVar6 = &system_buffer_ptr;
  if (plocal_var_110 != (void *)0x0) {
    puVar6 = plocal_var_110;
  }
  SystemData_Processor(acStack_278,puVar6);
  puVar6 = &system_buffer_ptr;
  if ((void *)param_1[3] != (void *)0x0) {
    puVar6 = (void *)param_1[3];
  }
  pplocal_var_1a0 = &plocal_var_178;
  plocal_var_178 = &memory_allocator_3480_ptr;
  plocal_var_170 = stack_array_160;
  local_var_168 = 0;
  stack_array_160[0] = 0;
  if (puVar6 != (void *)0x0) {
    DataStructureManager0(&plocal_var_178);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_178);
  }
  lVar3 = system_main_module_state;
  if (*(int *)(param_1 + 9) < 1) {
    lVar5 = param_1[0x85];
    plVar12 = plVar8;
    if (((lVar5 != 0) && (plVar13 = *(int64_t **)(lVar5 + 0x1d8), plVar13 != (int64_t *)0x0)) &&
       (plVar12 = plVar13, system_main_module_state != 0)) {
      *(int64_t *)(lVar5 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    }
    lVar5 = param_1[0x86];
    plVar13 = plVar8;
    if (((lVar5 != 0) && (plVar9 = *(int64_t **)(lVar5 + 0x1d8), plVar9 != (int64_t *)0x0)) &&
       (plVar13 = plVar9, lVar3 != 0)) {
      *(int64_t *)(lVar5 + 0x340) = (int64_t)*(int *)(lVar3 + 0x224);
    }
    lVar5 = param_1[0x87];
    plVar9 = plVar8;
    if (((lVar5 != 0) && (plVar10 = *(int64_t **)(lVar5 + 0x1d8), plVar10 != (int64_t *)0x0)) &&
       (plVar9 = plVar10, lVar3 != 0)) {
      *(int64_t *)(lVar5 + 0x340) = (int64_t)*(int *)(lVar3 + 0x224);
    }
    lVar5 = param_1[0x88];
    plVar10 = plVar8;
    if (((lVar5 != 0) && (plVar1 = *(int64_t **)(lVar5 + 0x1d8), plVar1 != (int64_t *)0x0)) &&
       (plVar10 = plVar1, lVar3 != 0)) {
      *(int64_t *)(lVar5 + 0x340) = (int64_t)*(int *)(lVar3 + 0x224);
    }
    lVar5 = param_1[0x89];
    if (((lVar5 != 0) && (plVar8 = *(int64_t **)(lVar5 + 0x1e0), plVar8 != (int64_t *)0x0)) &&
       (lVar3 != 0)) {
      *(int64_t *)(lVar5 + 0x340) = (int64_t)*(int *)(lVar3 + 0x224);
    }
    SystemCore_MemoryManager(*(uint64_t *)(system_message_buffer + 0x1cd8),0,plVar12);
    SystemCore_MemoryManager(*(uint64_t *)(system_message_buffer + 0x1cd8),1,plVar13);
    SystemCore_MemoryManager(*(uint64_t *)(system_message_buffer + 0x1cd8),2,plVar9);
    SystemCore_MemoryManager(*(uint64_t *)(system_message_buffer + 0x1cd8),3,plVar10);
    plVar12 = *(int64_t **)(system_message_buffer + 0x1cd8);
    if ((plVar8 != (int64_t *)0x0) && (*plVar8 != 0)) {
      (**(code **)(*plVar12 + 0x70))(plVar12,*plVar8,2);
    }
    lVar3 = system_message_buffer;
    plVar12[0x107e] = (int64_t)plVar8;
    SystemCore_ProcessorEx(*(uint64_t *)(lVar3 + 0x1cd8),4);
    if (*(char *)((int64_t)param_1 + 0x4c) == '\0') {
      dVar15 = (double)param_1[0xb];
      dVar16 = (double)param_1[0xc];
    }
    else {
      dVar15 = (double)*(int *)(param_3 + 0x3590) * (double)param_1[0xb];
      dVar16 = (double)*(int *)(param_3 + 0x3594) * (double)param_1[0xc];
    }
    fStack_188 = (float)dVar15;
    local_var_184 = (float)dVar16;
    lVar3 = *(int64_t *)(system_message_buffer + 0x1cd8);
    local_var_190 = (void **)
                 CONCAT44((float)(int)*(float *)(param_3 + 0x11c1c),
                          (float)(int)*(float *)(param_3 + 0x11c18));
    local_var_180 = 0;
    local_var_17c = 0x3f800000;
    plVar8 = *(int64_t **)(lVar3 + 0x8400);
    (**(code **)(*plVar8 + 0x160))(plVar8,1,&local_var_190);
    iVar14 = 0;
    pplocal_var_1a0 = (void **)0x0;
    plVar8 = *(int64_t **)(lVar3 + 0x8400);
    iStack_198 = (int)dVar15;
    iStack_194 = (int)dVar16;
    (**(code **)(*plVar8 + 0x168))(plVar8,1,&pplocal_var_1a0);
    lVar5 = system_message_buffer;
    *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1df0) =
         *(uint64_t *)(param_3 + 0x35a8);
    *(uint64_t *)(*(int64_t *)(lVar5 + 0x1cd8) + 0x1df8) = *(uint64_t *)(param_3 + 0x35b0);
    *(float *)(*(int64_t *)(lVar5 + 0x1cd8) + 0x1be0) = 0.5 / (float)dVar15;
    *(float *)(*(int64_t *)(lVar5 + 0x1cd8) + 0x1be4) = 0.5 / (float)dVar16;
    plVar8 = param_1 + 0x27;
    lVar3 = *plVar8;
    if (lVar3 == 0) {
      *(float *)(*(int64_t *)(lVar5 + 0x1cd8) + 0x1be8) = (float)(1.0 / (double)param_1[0xb]);
      *(float *)(*(int64_t *)(lVar5 + 0x1cd8) + 0x1bec) = (float)(1.0 / (double)param_1[0xc]);
    }
    else {
      *(float *)(*(int64_t *)(lVar5 + 0x1cd8) + 0x1be8) = 1.0 / (float)*(ushort *)(lVar3 + 0x32c);
      *(float *)(*(int64_t *)(lVar5 + 0x1cd8) + 0x1bec) = 1.0 / (float)*(ushort *)(lVar3 + 0x32e);
    }
    lVar3 = system_parameter_buffer;
    if (*(char *)(system_parameter_buffer + 0x12f8) == '\x01') {
      *(int32_t *)(*(int64_t *)(lVar5 + 0x1cd8) + 0x1c78) =
           *(int32_t *)(system_parameter_buffer + 0x1304);
      *(int32_t *)(*(int64_t *)(lVar5 + 0x1cd8) + 0x1c7c) = *(int32_t *)(lVar3 + 0x12fc);
      *(int32_t *)(*(int64_t *)(lVar5 + 0x1cd8) + 0x1c74) = *(int32_t *)(lVar3 + 0x1300);
      *(int32_t *)(*(int64_t *)(lVar5 + 0x1cd8) + 0x1bfc) = *(int32_t *)(lVar3 + 0x1308);
    }
    UltraHighFreq_DatabaseHandler1(*(int64_t *)(lVar5 + 0x1cd8),*(uint64_t *)(lVar5 + 0x1c88),
                  *(int64_t *)(lVar5 + 0x1cd8) + 0x1be0,0x230);
    pplocal_var_1a0 = (void **)0x0;
    local_var_288 = param_5;
    function_1f7d20(param_1,param_3,stack_array_270,&pplocal_var_1a0);
    local_var_190 = pplocal_var_1a0;
    fStack_188 = (float)stack_array_270[0];
    local_var_184._0_2_ = 4;
    plocal_var_268 = (void *)param_1[6];
    plStack_248 = (int64_t *)0x0;
    plocal_var_240 = &system_data_buffer_ptr;
    local_var_228 = 0;
    lStack_238 = 0;
    local_var_230 = 0;
    plStack_210 = (int64_t *)0x0;
    local_var_258 = CONCAT26(local_var_184._2_2_,CONCAT24(4,stack_array_270[0]));
    pplocal_var_260 = pplocal_var_1a0;
    local_var_250 = 2;
    local_var_220 = 0;
    local_var_218 = 0;
    uVar4 = *(uint64_t *)(param_1[6] + 0x15b8);
    pplocal_var_1f8 = pplocal_var_1a0;
    local_var_1e8 = 2;
    local_var_1e0 = 0;
    plocal_var_200 = plocal_var_268;
    local_var_1f0 = local_var_258;
    pplocal_var_1a0 = &plocal_var_200;
    CoreEngineDataTransformer(stack_array_1d8,&plocal_var_240);
    local_var_1b8 = local_var_220;
    local_var_1b0 = local_var_218;
    plStack_1a8 = plStack_210;
    if (plStack_210 != (int64_t *)0x0) {
      (**(code **)(*plStack_210 + 0x28))();
    }
    uVar4 = UIRenderingEngine(uVar4,param_3,&plocal_var_200,acStack_278);
    if (acStack_278[0] == '\0') {
      param_1[0x1f] = uVar4;
      *(int32_t *)((int64_t)param_1 + 0x134) = 3;
      *(int32_t *)((int64_t)param_1 + 0x114) = *(int32_t *)(param_1[0x85] + 0x324);
      *(int32_t *)(param_1 + 0x23) = *(int32_t *)(param_1[0x86] + 0x324);
      *(int32_t *)((int64_t)param_1 + 0x11c) = *(int32_t *)(param_1[0x87] + 0x324);
      iVar7 = iVar14;
      do {
        if (*plVar8 != 0) {
          local_var_288 = 0xffffffff;
          RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),iVar7,*plVar8,0x10);
        }
        iVar7 = iVar7 + 1;
        plVar8 = plVar8 + 1;
      } while (iVar7 < 0x10);
      DataStructure_UpdateNode(*(uint64_t *)(system_message_buffer + 0x1cd8),4);
      DataStructure_ProcessLinkedList(*(uint64_t *)(system_message_buffer + 0x1cd8),param_1 + 0x1f);
      lVar3 = system_message_buffer;
      puVar6 = &system_buffer_ptr;
      if (plocal_var_110 != (void *)0x0) {
        puVar6 = plocal_var_110;
      }
      if (puVar6 != (void *)0x0) {
        lVar5 = strnlen(puVar6,0x3f);
        strncpy(lVar3 + 0x1ce0,puVar6,lVar5);
        *(int8_t *)(lVar5 + 0x1ce0 + lVar3) = 0;
      }
      DataStructure_ValidateTree(*(uint64_t *)(system_message_buffer + 0x1cd8));
      if ((void *)*param_1 != &memory_allocator_3224_ptr) {
        (**(code **)((void *)*param_1 + 0x28))(param_1);
      }
      lVar11 = 0x8a38;
      lVar5 = 0x8438;
      lVar3 = system_message_buffer;
      do {
        if ((*(int64_t *)((int64_t)param_1 + lVar5 + -0x8300) != 0) &&
           (((lVar2 = *(int64_t *)(lVar3 + 0x1cd8), *(int64_t *)(lVar2 + lVar5) != 0 ||
             (*(int *)(lVar11 + -0x200 + lVar2) != -1)) || (*(int *)(lVar2 + lVar11) != 0x10)))) {
          pplocal_var_1a0 = (void **)0x0;
          (**(code **)(**(int64_t **)(lVar2 + 0x8400) + 0x40))
                    (*(int64_t **)(lVar2 + 0x8400),iVar14,1,&pplocal_var_1a0);
          *(uint64_t *)(lVar2 + lVar5) = 0;
          *(int32_t *)(lVar11 + -0x200 + lVar2) = 0xffffffff;
          *(int32_t *)(lVar2 + lVar11) = 0x10;
          *(int *)(lVar2 + 0x82b4) = *(int *)(lVar2 + 0x82b4) + 1;
          lVar3 = system_message_buffer;
        }
        iVar14 = iVar14 + 1;
        lVar5 = lVar5 + 8;
        lVar11 = lVar11 + 4;
      } while (iVar14 < 0x10);
      *(uint64_t *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x83b8) = 0;
      *(uint64_t *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x83c0) = 0;
      *(uint64_t *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x83c8) = 0;
      *(uint64_t *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x83d0) = 0;
      *(uint64_t *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x83f0) = 0;
      SystemCore_ProcessorEx(*(uint64_t *)(lVar3 + 0x1cd8),4);
    }
    if (plStack_210 != (int64_t *)0x0) {
      (**(code **)(*plStack_210 + 0x38))();
    }
    pplocal_var_1a0 = &plocal_var_240;
    plocal_var_240 = &system_data_buffer_ptr;
    if (lStack_238 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_238 = 0;
    local_var_228 = local_var_228 & 0xffffffff00000000;
    plocal_var_240 = &system_state_ptr;
    if (plStack_248 != (int64_t *)0x0) {
      (**(code **)(*plStack_248 + 0x38))();
    }
  }
  else {
    *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + -1;
  }
  SystemCore_Synchronizer(&plocal_var_178);
  system_system_data_memory = system_system_data_memory + -1;
  (**(code **)(*system_system_data_memory + 0x20))();
  plocal_var_118 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_78 ^ (uint64_t)stack_array_2a8);
}
// 函数: void function_3fa430(int64_t param_1)
void function_3fa430(int64_t param_1)
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  *(int32_t *)(param_1 + 0x74 + (int64_t)*(int *)(param_1 + 0x47c) * 4) = 0xffffffe8;
  lVar1 = param_1 + (int64_t)*(int *)(param_1 + 0x47c) * 8;
  plVar2 = *(int64_t **)(param_1 + (int64_t)*(int *)(param_1 + 0x478) * 8 + 0x450);
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar3 = *(int64_t **)(lVar1 + 0x138);
  *(int64_t **)(lVar1 + 0x138) = plVar2;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  plVar2 = *(int64_t **)(param_1 + 0x450 + (int64_t)(1 - *(int *)(param_1 + 0x478)) * 8);
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar3 = *(int64_t **)(param_1 + 0x428);
  *(int64_t **)(param_1 + 0x428) = plVar2;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  *(int *)(param_1 + 0x478) = 1 - *(int *)(param_1 + 0x478);
  return;
}
uint64_t * function_3fa510(uint64_t *param_1)
{
  int64_t *plVar1;
  int64_t *plVar2;
  SystemCore_ConfigValidator();
  *param_1 = &memory_allocator_3600_ptr;
  DataStructureManager(param_1 + 0x8a,8,2,&SUB_18005d5f0,DataCacheManager);
  DataStructureManager(param_1 + 0x8c,8,3,&SUB_18005d5f0,DataCacheManager);
  *(int32_t *)(param_1 + 0x8f) = 0;
  *(int32_t *)((int64_t)param_1 + 0x47c) = 4;
  plVar1 = (int64_t *)param_1[0x8b];
  param_1[0x8b] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (int64_t *)param_1[0x8b];
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)param_1[0x8a];
  param_1[0x8a] = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(int32_t *)(param_1 + 0x90) = 0;
  return param_1;
}
uint64_t * function_3fa610(uint64_t *param_1,uint param_2)
{
  *param_1 = &memory_allocator_3600_ptr;
  SystemDataValidator(param_1 + 0x8c,8,3,DataCacheManager,0xfffffffffffffffe);
  SystemDataValidator(param_1 + 0x8a,8,2,DataCacheManager);
  function_1f9920(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x488);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_3fa6a0(int64_t param_1)
{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *plVar6;
  uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x488,8,3,0xfffffffffffffffe);
  lVar4 = function_3fa510(uVar3);
  function_1f8ea0(lVar4,param_1);
  plVar6 = (int64_t *)(lVar4 + 0x450);
  lVar5 = 2;
  do {
    plVar1 = *(int64_t **)((param_1 - lVar4) + (int64_t)plVar6);
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plVar2 = (int64_t *)*plVar6;
    *plVar6 = (int64_t)plVar1;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    plVar6 = plVar6 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  plVar6 = (int64_t *)(lVar4 + 0x460);
  lVar5 = 3;
  do {
    plVar1 = *(int64_t **)((int64_t)plVar6 + (param_1 - lVar4));
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plVar2 = (int64_t *)*plVar6;
    *plVar6 = (int64_t)plVar1;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    plVar6 = plVar6 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(int32_t *)(lVar4 + 0x478) = *(int32_t *)(param_1 + 0x478);
  *(int32_t *)(lVar4 + 0x47c) = *(int32_t *)(param_1 + 0x47c);
  *(int32_t *)(lVar4 + 0x480) = *(int32_t *)(param_1 + 0x480);
  return lVar4;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3fa7e0(int64_t param_1,uint64_t param_2,int64_t param_3,int32_t param_4,
void function_3fa7e0(int64_t param_1,uint64_t param_2,int64_t param_3,int32_t param_4,
                  int32_t param_5)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  lVar3 = system_message_buffer;
  *(float *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1c88) = (float)*(int *)(param_1 + 0x480);
  if (*(int64_t *)(param_3 + 0x11ee0) != 0) {
    *(float *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x1d80) =
         (float)*(ushort *)(*(int64_t *)(param_3 + 0x11ee0) + 0x32c);
  }
  plVar1 = *(int64_t **)(param_1 + 0x468);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(int64_t **)(param_1 + 0x470);
  *(int64_t **)(param_1 + 0x470) = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 0x460);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(int64_t **)(param_1 + 0x468);
  *(int64_t **)(param_1 + 0x468) = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 0x148);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(int64_t **)(param_1 + 0x460);
  *(int64_t **)(param_1 + 0x460) = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(int32_t *)(param_1 + 0x9c) = 0xffffffe8;
  plVar1 = *(int64_t **)(param_1 + 0x468);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(int64_t **)(param_1 + 0x188);
  *(int64_t **)(param_1 + 0x188) = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  function_1f6650(param_1,param_2,param_3,param_4,param_5);
  *(int *)(param_1 + 0x480) = *(int *)(param_1 + 0x480) + 1;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3fa980(int64_t *param_1,int64_t param_2)
void function_3fa980(int64_t *param_1,int64_t param_2)
{
  int64_t lVar1;
  int64_t *plVar2;
  int8_t stack_array_1e8 [32];
  int64_t *plStack_1c8;
  int64_t *plStack_1c0;
  int64_t *plStack_1b8;
  int32_t local_var_1b0;
  int32_t local_var_1ac;
  int32_t local_var_1a8;
  int32_t local_var_1a4;
  int32_t local_var_1a0;
  uint64_t local_var_19c;
  uint64_t local_var_194;
  int8_t local_var_18c;
  uint64_t local_var_18b;
  int32_t local_var_180;
  int8_t local_var_17c;
  uint64_t local_var_178;
  void *plocal_var_168;
  int8_t *plocal_var_160;
  int32_t local_var_158;
  int8_t stack_array_150 [136];
  void *plocal_var_c8;
  int8_t *plocal_var_c0;
  int32_t local_var_b8;
  int8_t stack_array_b0 [136];
  uint64_t local_var_28;
  local_var_178 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1e8;
  function_1f9270();
  local_var_19c = 0;
  local_var_194 = 0x3f80000000000000;
  local_var_18b = 1;
  local_var_18c = 0;
  local_var_17c = 0;
  local_var_1a8 = 1;
  local_var_1a0 = (int32_t)param_1[0xe];
  local_var_1a4 = 1;
  local_var_180 = *(int32_t *)(param_2 + 0x1bd4);
  if (*(char *)((int64_t)param_1 + 0x4c) == '\0') {
    local_var_1b0 = (int32_t)(int64_t)(double)param_1[0xb];
    local_var_1ac = (int32_t)(int64_t)(double)param_1[0xc];
    if (param_1[0x8a] == 0) {
      plocal_var_c8 = &memory_allocator_3432_ptr;
      plocal_var_c0 = stack_array_b0;
      stack_array_b0[0] = 0;
      local_var_b8 = 0xe;
      strcpy_s(stack_array_b0,0x80,&rendering_buffer_2976_ptr);
      plVar2 = (int64_t *)SystemInitializer(system_resource_state,&plStack_1b8,&plocal_var_c8,&local_var_1b0);
      lVar1 = *plVar2;
      *plVar2 = 0;
      plStack_1c8 = (int64_t *)param_1[0x8a];
      param_1[0x8a] = lVar1;
      if (plStack_1c8 != (int64_t *)0x0) {
        (**(code **)(*plStack_1c8 + 0x38))();
      }
      if (plStack_1b8 != (int64_t *)0x0) {
        (**(code **)(*plStack_1b8 + 0x38))();
      }
      plocal_var_c8 = &system_state_ptr;
    }
    if (param_1[0x8b] == 0) {
      plocal_var_168 = &memory_allocator_3432_ptr;
      plocal_var_160 = stack_array_150;
      stack_array_150[0] = 0;
      local_var_158 = 0xe;
      strcpy_s(stack_array_150,0x80,&rendering_buffer_2992_ptr);
      plVar2 = (int64_t *)SystemInitializer(system_resource_state,&plStack_1c0,&plocal_var_168,&local_var_1b0);
      lVar1 = *plVar2;
      *plVar2 = 0;
      plStack_1c8 = (int64_t *)param_1[0x8b];
      param_1[0x8b] = lVar1;
      if (plStack_1c8 != (int64_t *)0x0) {
        (**(code **)(*plStack_1c8 + 0x38))();
      }
      if (plStack_1c0 != (int64_t *)0x0) {
        (**(code **)(*plStack_1c0 + 0x38))();
      }
      plocal_var_168 = &system_state_ptr;
    }
  }
  else {
    local_var_1b0 = (int32_t)(int64_t)((double)*(int *)(param_2 + 0x3590) * (double)param_1[0xb]);
    local_var_1ac = (int32_t)(int64_t)((double)*(int *)(param_2 + 0x3594) * (double)param_1[0xc]);
    plocal_var_168 = &memory_allocator_3432_ptr;
    plocal_var_160 = stack_array_150;
    stack_array_150[0] = 0;
    local_var_158 = 0xe;
    strcpy_s(stack_array_150,0x80,&rendering_buffer_2976_ptr);
    plVar2 = (int64_t *)SystemInitializer(system_resource_state,&plStack_1b8,&plocal_var_168,&local_var_1b0);
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_1c0 = (int64_t *)param_1[0x8a];
    param_1[0x8a] = lVar1;
    if (plStack_1c0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    if (plStack_1b8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1b8 + 0x38))();
    }
    plocal_var_168 = &system_state_ptr;
    plocal_var_c8 = &memory_allocator_3432_ptr;
    plocal_var_c0 = stack_array_b0;
    stack_array_b0[0] = 0;
    local_var_b8 = 0xe;
    strcpy_s(stack_array_b0,0x80,&rendering_buffer_2992_ptr);
    plVar2 = (int64_t *)SystemInitializer(system_resource_state,&plStack_1c8,&plocal_var_c8,&local_var_1b0);
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_1c0 = (int64_t *)param_1[0x8b];
    param_1[0x8b] = lVar1;
    if (plStack_1c0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    if (plStack_1c8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1c8 + 0x38))();
    }
    plocal_var_c8 = &system_state_ptr;
  }
  (**(code **)(*param_1 + 0x40))(param_1,0,0);
  plStack_1c8 = (int64_t *)param_1[0x89];
  param_1[0x89] = 0;
  if (plStack_1c8 != (int64_t *)0x0) {
    (**(code **)(*plStack_1c8 + 0x38))();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_1e8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address