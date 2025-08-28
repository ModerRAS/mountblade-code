#include "ultra_high_freq_fun_definitions.h"
// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: DataDeserializer */
#define DataDeserializer DataDeserializer
/* 函数别名定义: DataStructureManager */
#define DataStructureManager DataStructureManager
// 99_part_04_part068.c - 3 个函数
// 函数: void DataStructure_c6190(uint64_t *param_1)
void DataStructure_c6190(uint64_t *param_1)
{
  int32_t *puVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  code *pcVar4;
  int32_t uVar5;
  int32_t uVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int32_t *puVar9;
  uint64_t uVar10;
  int64_t *plVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int32_t uVar15;
  int8_t stack_array_1e8 [32];
  int32_t local_var_1c8;
  int64_t *plStack_1c0;
  int64_t *plStack_1b8;
  int64_t *plStack_1b0;
  int64_t **pplStack_1a8;
  int64_t **pplStack_1a0;
  uint64_t local_var_198;
  void **pplocal_var_190;
  uint64_t local_var_188;
  void *plocal_var_178;
  int8_t *plocal_var_170;
  int32_t local_var_168;
  int8_t stack_array_160 [128];
  int32_t local_var_e0;
  uint64_t local_var_d8;
  int64_t *plStack_d0;
  int iStack_c8;
  void *plocal_var_98;
  int8_t *plocal_var_90;
  int32_t local_var_88;
  int8_t stack_array_80 [72];
  uint64_t local_var_38;
  local_var_188 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1e8;
  uVar12 = 0;
  local_var_1c8 = 0;
  iVar13 = 0xff;
  if (*(int *)(param_1 + 0x20c) < 0xff) {
    iVar13 = *(int *)(param_1 + 0x20c);
  }
  if (iVar13 != 0) {
    DataStructure_c70b0(param_1 + 0xc,param_1 + ((int64_t)iVar13 + 6) * 2,
                  (int64_t)(param_1 + ((int64_t)iVar13 + 6) * 2) - (int64_t)(param_1 + 0xc) >> 4,
                  param_1);
    iVar14 = 0x18;
    if (iVar13 < 0x18) {
      iVar14 = iVar13;
    }
    *(int *)(param_1 + 10) = iVar14;
    uVar10 = system_system_data_memory;
    local_var_198 = 0;
    iVar14 = iVar14 << 4;
    plocal_var_98 = &memory_allocator_3480_ptr;
    plocal_var_90 = stack_array_80;
    stack_array_80[0] = 0;
    local_var_88 = 0x1c;
    uVar15 = strcpy_s(stack_array_80,0x40,&system_data_fc60);
    CoreEngine_2037E0(uVar15,iVar14,&plocal_var_98);
    plocal_var_98 = &system_state_ptr;
    lVar8 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,iVar14,0x10,3);
    DataStructure_c7ae0(uVar10,&plStack_1c0);
    plVar7 = plStack_1c0;
    plStack_1c0[2] = lVar8;
    *(int *)(plStack_1c0 + 3) = iVar14;
    *(int *)((int64_t)plStack_1c0 + 0x1c) = iVar14;
    *(int8_t *)(plStack_1c0 + 4) = 0;
    pplStack_1a8 = (int64_t **)0x0;
    plStack_1c0 = (int64_t *)0x0;
    local_var_1c8 = 0;
    puVar2 = (int32_t *)plVar7[2];
    if (*(int *)(param_1 + 10) != 0) {
      puVar9 = puVar2;
      do {
        puVar1 = (int32_t *)((int64_t)param_1 + (0x60 - (int64_t)puVar2) + (int64_t)puVar9);
        uVar15 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        *puVar9 = *puVar1;
        puVar9[1] = uVar15;
        puVar9[2] = uVar5;
        puVar9[3] = uVar6;
        uVar12 = uVar12 + 1;
        puVar9 = puVar9 + 4;
      } while (uVar12 < *(uint *)(param_1 + 10));
    }
    pplStack_1a0 = (int64_t **)&plocal_var_178;
    plocal_var_178 = &memory_allocator_3432_ptr;
    plocal_var_170 = stack_array_160;
    local_var_168 = 0;
    stack_array_160[0] = 0;
    local_var_e0 = 9;
    local_var_d8 = *param_1;
    plStack_d0 = plVar7;
    iStack_c8 = *(int *)(param_1 + 10) << 4;
    if (*(code **)(*plVar7 + 0x28) == (code *)&memory_allocator_3248_ptr) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar7 + 0x28))(plVar7);
    }
    uVar10 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
    plVar11 = (int64_t *)SystemCore_StreamController(uVar10,&plocal_var_178);
    pplocal_var_190 = (void **)plVar11;
    if (plVar11 != (int64_t *)0x0) {
      (**(code **)(*plVar11 + 0x28))(plVar11);
    }
    lVar8 = system_context_ptr;
    pplStack_1a0 = &plStack_1b8;
    plStack_1b8 = plVar11;
    if (plVar11 != (int64_t *)0x0) {
      (**(code **)(*plVar11 + 0x28))(plVar11);
    }
    pplStack_1a8 = &plStack_1b8;
    puVar3 = *(uint64_t **)(*(int64_t *)(lVar8 + 8) + 8);
    pcVar4 = *(code **)*puVar3;
    pplStack_1a0 = &plStack_1b0;
    plStack_1b0 = plStack_1b8;
    if (plStack_1b8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1b8 + 0x28))();
    }
    (*pcVar4)(puVar3,&plStack_1b0);
    if (plStack_1b8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1b8 + 0x38))();
    }
    if (plVar11 != (int64_t *)0x0) {
      (**(code **)(*plVar11 + 0x38))(plVar11);
    }
    pplocal_var_190 = &plocal_var_178;
    plocal_var_178 = &system_state_ptr;
    (**(code **)(*plVar7 + 0x38))(plVar7);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_1e8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_c64d0(int64_t *param_1,uint64_t param_2)
void DataStructure_c64d0(int64_t *param_1,uint64_t param_2)
{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *plVar7;
  void **ppuVar8;
  bool bVar9;
  int8_t stack_array_2e8 [32];
  int32_t local_var_2c8;
  int8_t local_var_2c0;
  int8_t stack_array_2b8 [8];
  void **pplocal_var_2b0;
  void **pplocal_var_2a8;
  int32_t local_var_2a0;
  int16_t local_var_29c;
  ushort local_var_29a;
  void *plocal_var_298;
  void **pplocal_var_290;
  uint64_t local_var_288;
  int32_t local_var_280;
  int64_t *plStack_278;
  void *plocal_var_270;
  int64_t lStack_268;
  int32_t local_var_260;
  uint64_t local_var_258;
  int32_t local_var_250;
  int32_t local_var_24c;
  int32_t local_var_248;
  int32_t local_var_244;
  int64_t *plStack_240;
  int64_t lStack_238;
  uint64_t local_var_230;
  uint64_t local_var_228;
  int32_t local_var_220;
  int64_t *plStack_218;
  void *plocal_var_210;
  int64_t lStack_208;
  int32_t local_var_200;
  uint64_t local_var_1f8;
  int32_t local_var_1f0;
  int32_t local_var_1ec;
  int32_t local_var_1e8;
  int32_t local_var_1e4;
  int64_t *plStack_1e0;
  uint64_t local_var_1d8;
  void *plocal_var_1d0;
  int32_t local_var_1c8;
  int32_t local_var_1c4;
  int32_t local_var_1c0;
  int32_t local_var_1bc;
  int32_t local_var_1b8;
  uint64_t local_var_1b0;
  int8_t stack_array_1a8 [32];
  int32_t local_var_188;
  int32_t local_var_184;
  int32_t local_var_180;
  int32_t local_var_17c;
  int64_t *plStack_178;
  void *plocal_var_168;
  int8_t *plocal_var_160;
  int32_t local_var_158;
  int8_t stack_array_150 [72];
  void *plocal_var_108;
  void **pplocal_var_100;
  int32_t local_var_f8;
  int32_t local_var_f4;
  uint stack_array_f0 [2];
  uint64_t local_var_e8;
  int8_t stack_array_e0 [32];
  int32_t local_var_c0;
  int32_t local_var_bc;
  int32_t local_var_b8;
  int32_t local_var_b4;
  int64_t *plStack_b0;
  void *plocal_var_a8;
  int8_t *plocal_var_a0;
  int32_t local_var_98;
  int8_t stack_array_90 [72];
  uint64_t local_var_48;
  local_var_1d8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2e8;
  pplocal_var_2b0 = &plocal_var_a8;
  plocal_var_a8 = &memory_allocator_3480_ptr;
  plocal_var_a0 = stack_array_90;
  local_var_98 = 0;
  stack_array_90[0] = 0;
  DataStructureManager0(&plocal_var_a8,&processed_var_8408_ptr);
  SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_a8);
  stack_array_2b8[0] = 0;
  lVar6 = param_1[4];
  plocal_var_168 = &processed_var_672_ptr;
  plocal_var_160 = stack_array_150;
  stack_array_150[0] = 0;
  local_var_158 = 0xe;
  strcpy_s(stack_array_150,0x20,&memory_allocator_3032_ptr);
  pplocal_var_2a8 = (void **)SystemCore_LoggingSystem0(lVar6,&plocal_var_168,1);
  plocal_var_168 = &system_state_ptr;
  local_var_2a0 = 0;
  local_var_29c = 0;
  lStack_238 = param_1[4];
  plStack_218 = (int64_t *)0x0;
  plocal_var_210 = &system_data_buffer_ptr;
  local_var_1f8 = 0;
  lStack_208 = 0;
  local_var_200 = 0;
  plStack_1e0 = (int64_t *)0x0;
  local_var_220 = 0;
  local_var_1f0 = 0;
  local_var_1ec = 0;
  local_var_1e8 = 0;
  local_var_1e4 = 0;
  uVar1 = *(uint64_t *)(param_1[4] + 0x15b8);
  pplocal_var_2b0 = &plocal_var_1d0;
  local_var_230._0_4_ = SUB84(pplocal_var_2a8,0);
  local_var_230._4_4_ = (int32_t)((uint64_t)pplocal_var_2a8 >> 0x20);
  local_var_228._4_4_ = (int32_t)(((uint64_t)local_var_29a << 0x30) >> 0x20);
  local_var_1c8 = (int32_t)local_var_230;
  local_var_1c4 = local_var_230._4_4_;
  local_var_1c0 = 0;
  local_var_1bc = local_var_228._4_4_;
  local_var_1b8 = 0;
  local_var_1b0 = 0;
  local_var_230 = pplocal_var_2a8;
  local_var_228 = (uint64_t)local_var_29a << 0x30;
  plocal_var_1d0 = (void *)lStack_238;
  CoreEngineDataTransformer(stack_array_1a8,&plocal_var_210);
  local_var_188 = local_var_1f0;
  local_var_184 = local_var_1ec;
  local_var_180 = local_var_1e8;
  local_var_17c = local_var_1e4;
  plStack_178 = plStack_1e0;
  if (plStack_1e0 != (int64_t *)0x0) {
    (**(code **)(*plStack_1e0 + 0x28))();
  }
  lVar5 = UIRenderingEngine(uVar1,0,&plocal_var_1d0,stack_array_2b8);
  lVar6 = param_1[4];
  plocal_var_168 = &processed_var_672_ptr;
  plocal_var_160 = stack_array_150;
  stack_array_150[0] = 0;
  local_var_158 = 0xc;
  strcpy_s(stack_array_150,0x20,&memory_allocator_3152_ptr);
  pplocal_var_2a8 = (void **)SystemCore_LoggingSystem0(lVar6,&plocal_var_168,1);
  plocal_var_168 = &system_state_ptr;
  local_var_2a0 = 0;
  local_var_29c = 0;
  plocal_var_298 = (void *)param_1[4];
  plStack_278 = (int64_t *)0x0;
  plocal_var_270 = &system_data_buffer_ptr;
  local_var_258 = 0;
  lStack_268 = 0;
  local_var_260 = 0;
  plStack_240 = (int64_t *)0x0;
  local_var_280 = 0;
  local_var_250 = 0;
  local_var_24c = 0;
  local_var_248 = 0;
  local_var_244 = 0;
  uVar1 = *(uint64_t *)(param_1[4] + 0x15b8);
  pplocal_var_2b0 = &plocal_var_108;
  local_var_288._4_4_ = (int32_t)(((uint64_t)local_var_29a << 0x30) >> 0x20);
  local_var_f8 = 0;
  local_var_f4 = local_var_288._4_4_;
  stack_array_f0[0] = 0;
  local_var_e8 = 0;
  pplocal_var_290 = pplocal_var_2a8;
  local_var_288 = (uint64_t)local_var_29a << 0x30;
  plocal_var_108 = plocal_var_298;
  pplocal_var_100 = pplocal_var_2a8;
  CoreEngineDataTransformer(stack_array_e0,&plocal_var_270);
  local_var_c0 = local_var_250;
  local_var_bc = local_var_24c;
  local_var_b8 = local_var_248;
  local_var_b4 = local_var_244;
  plStack_b0 = plStack_240;
  if (plStack_240 != (int64_t *)0x0) {
    (**(code **)(*plStack_240 + 0x28))();
  }
  lVar6 = UIRenderingEngine(uVar1,0,&plocal_var_108,stack_array_2b8);
  if ((lVar6 != 0) && (lVar5 != 0)) {
    uVar1 = *(uint64_t *)(system_message_buffer + 0x1cd8);
    lVar2 = param_1[1];
    UltraHighFreq_DatabaseHandler1(uVar1,lVar2,param_2,0x30);
    DataStructure_9dca0(uVar1,0xb,0x20,lVar2);
    bVar9 = (char)param_1[5] == '\0';
    plVar7 = param_1 + 2;
    if (bVar9) {
      plVar7 = param_1 + 3;
    }
    lVar2 = *plVar7;
    plVar7 = param_1 + 3;
    if (bVar9) {
      plVar7 = param_1 + 2;
    }
    lVar3 = *plVar7;
    lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (((*(int64_t *)(lVar4 + 0x85d8) != 0) || (*(int *)(lVar4 + 0x8908) != -1)) ||
       (*(int *)(lVar4 + 0x8b08) != 0x11)) {
      pplocal_var_2b0 = (void **)0x0;
      (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 200))
                (*(int64_t **)(lVar4 + 0x8400),0x34,1,&pplocal_var_2b0);
      (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
                (*(int64_t **)(lVar4 + 0x8400),0x34,1,&pplocal_var_2b0);
      *(uint64_t *)(lVar4 + 0x85d8) = 0;
      *(int32_t *)(lVar4 + 0x8908) = 0xffffffff;
      *(int32_t *)(lVar4 + 0x8b08) = 0x11;
      *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
    }
    pplocal_var_2a8 = &plocal_var_168;
    plocal_var_168 = &memory_allocator_3480_ptr;
    plocal_var_160 = stack_array_150;
    local_var_158 = 0;
    stack_array_150[0] = 0;
    DataStructureManager0(&plocal_var_168,&processed_var_8336_ptr);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_168);
    local_var_2c0 = 1;
    local_var_2c8 = 0xffffffff;
    CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),1,1,lVar3);
    local_var_2c0 = 1;
    local_var_2c8 = 0xffffffff;
    CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),2,1,lVar2);
    lVar3 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (*(int64_t *)(lVar3 + 0x82a0) != (int64_t)**(int **)(lVar6 + 0x10)) {
      (**(code **)(**(int64_t **)(lVar3 + 0x8400) + 0x228))
                (*(int64_t **)(lVar3 + 0x8400),*(uint64_t *)(*(int **)(lVar6 + 0x10) + 6),0,0);
      *(int64_t *)(lVar3 + 0x82a0) = (int64_t)**(int **)(lVar6 + 0x10);
    }
    plVar7 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    (**(code **)(*plVar7 + 0x148))(plVar7,0x10,0x10,1);
    local_var_2c0 = 1;
    local_var_2c8 = 0xffffffff;
    CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),1,1);
    local_var_2c0 = 1;
    local_var_2c8 = 0xffffffff;
    CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),2,1);
    SystemCore_Synchronizer(&plocal_var_168);
    pplocal_var_2a8 = &plocal_var_108;
    ppuVar8 = (void **)0x0;
    plocal_var_108 = &memory_allocator_3480_ptr;
    pplocal_var_100 = (void **)stack_array_f0;
    local_var_f8 = 0;
    stack_array_f0[0] = stack_array_f0[0] & 0xffffff00;
    DataStructureManager0(&plocal_var_108,&processed_var_8352_ptr);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_108);
    lVar4 = system_main_module_state;
    lVar6 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar3 = *param_1;
    if ((lVar3 != 0) &&
       (*(int32_t *)(lVar3 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar3 != -0x10)) {
      *(int32_t *)(lVar3 + 0x16c) = *(int32_t *)(lVar4 + 0x224);
      ppuVar8 = *(void ***)(lVar3 + 0x18);
    }
    plVar7 = *(int64_t **)(lVar6 + 0x8400);
    pplocal_var_2b0 = ppuVar8;
    (**(code **)(*plVar7 + 0x218))(plVar7,0,1,&pplocal_var_2b0);
    local_var_2c0 = 1;
    local_var_2c8 = 0xffffffff;
    CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),1,1,lVar2);
    lVar6 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (*(int64_t *)(lVar6 + 0x82a0) != (int64_t)**(int **)(lVar5 + 0x10)) {
      (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 0x228))
                (*(int64_t **)(lVar6 + 0x8400),*(uint64_t *)(*(int **)(lVar5 + 0x10) + 6),0,0);
      *(int64_t *)(lVar6 + 0x82a0) = (int64_t)**(int **)(lVar5 + 0x10);
    }
    plVar7 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    (**(code **)(*plVar7 + 0x148))(plVar7,0x10,0x10,1);
    pplocal_var_2b0 = (void **)0x0;
    plVar7 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    (**(code **)(*plVar7 + 0x218))(plVar7,0,1,&pplocal_var_2b0);
    local_var_2c0 = 1;
    local_var_2c8 = 0xffffffff;
    CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),1,1);
    SystemCore_Synchronizer(&plocal_var_108);
  }
  if (plStack_240 != (int64_t *)0x0) {
    (**(code **)(*plStack_240 + 0x38))();
  }
  pplocal_var_2a8 = &plocal_var_270;
  plocal_var_270 = &system_data_buffer_ptr;
  if (lStack_268 == 0) {
    lStack_268 = 0;
    local_var_258 = local_var_258 & 0xffffffff00000000;
    plocal_var_270 = &system_state_ptr;
    if (plStack_278 != (int64_t *)0x0) {
      (**(code **)(*plStack_278 + 0x38))();
    }
    if (plStack_1e0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1e0 + 0x38))();
    }
    pplocal_var_2a8 = &plocal_var_210;
    plocal_var_210 = &system_data_buffer_ptr;
    if (lStack_208 == 0) {
      lStack_208 = 0;
      local_var_1f8 = local_var_1f8 & 0xffffffff00000000;
      plocal_var_210 = &system_state_ptr;
      if (plStack_218 != (int64_t *)0x0) {
        (**(code **)(*plStack_218 + 0x38))();
      }
      SystemCore_Synchronizer(&plocal_var_a8);
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_2e8);
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
uint64_t *
DataStructure_c6e20(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  *param_1 = &processed_var_8440_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}
// 函数: void DataStructure_c6e70(uint64_t *param_1)
void DataStructure_c6e70(uint64_t *param_1)
{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  puVar2 = (uint64_t *)param_1[1];
  for (puVar4 = (uint64_t *)*param_1; puVar4 != puVar2; puVar4 = puVar4 + 0x22) {
    puVar4[0x16] = &system_state_ptr;
    puVar4[0xb] = &system_state_ptr;
    *puVar4 = &system_state_ptr;
  }
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != (uint64_t *)0x0) {
    uVar5 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((int64_t)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemDataCleaner();
          return;
        }
      }
      else {
        SystemFunction_00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t DataStructure_c6ef0(int64_t *param_1,uint64_t param_2)
{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uVar6 = param_1[1];
  if (uVar6 < (uint64_t)param_1[2]) {
    DataStructure_c7040(uVar6);
    param_1[1] = param_1[1] + 0x110;
    return param_1[1] + -0x110;
  }
  lVar3 = *param_1;
  lVar5 = (int64_t)(uVar6 - lVar3) / 0x110;
  if (lVar5 == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = lVar5 * 2;
    if (lVar5 == 0) {
      lVar2 = 0;
      goto LAB_1802c6f93;
    }
  }
  lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar5 * 0x110,(char)param_1[3],uVar6,0xfffffffffffffffe);
  uVar6 = param_1[1];
  lVar3 = *param_1;
LAB_1802c6f93:
  lVar3 = DataStructure_c7c60(lVar3,uVar6,lVar2);
  DataStructure_c7040(lVar3,param_2);
  puVar1 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
  if (puVar4 != puVar1) {
    do {
      puVar4[0x16] = &system_state_ptr;
      puVar4[0xb] = &system_state_ptr;
      *puVar4 = &system_state_ptr;
      puVar4 = puVar4 + 0x22;
    } while (puVar4 != puVar1);
    puVar4 = (uint64_t *)*param_1;
  }
  if (puVar4 == (uint64_t *)0x0) {
    *param_1 = lVar2;
    param_1[1] = lVar3 + 0x110;
    param_1[2] = lVar5 * 0x110 + lVar2;
    return lVar3;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
int64_t DataStructure_c7040(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  DataDeserializer0();
  DataDeserializer0(param_1 + 0x58,param_2 + 0x58,param_3,param_4,uVar1);
  DataDeserializer0(param_1 + 0xb0,param_2 + 0xb0);
  *(int8_t *)(param_1 + 0x108) = *(int8_t *)(param_2 + 0x108);
  return param_1;
}