#include "ultra_high_freq_fun_definitions.h"
// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: DataStructureManager */
#define DataStructureManager DataStructureManager
/* 函数别名定义: RenderingEngineCore */
#define RenderingEngineCore RenderingEngineCore
// 99_part_04_part067.c - 6 个函数
// 函数: void function_2c3ab0(void **param_1,int64_t param_2)
void function_2c3ab0(void **param_1,int64_t param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  void *puVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  void **ppuVar9;
  uint uVar10;
  int8_t stack_array_2e8 [32];
  void ***ppplocal_var_2c8;
  int8_t local_var_2c0;
  void **pplocal_var_2b8;
  void **pplocal_var_2b0;
  void **pplocal_var_2a8;
  int8_t stack_array_2a0 [8];
  uint64_t local_var_298;
  void *plocal_var_288;
  int8_t *plocal_var_280;
  int32_t local_var_278;
  int8_t stack_array_270 [72];
  void *plocal_var_228;
  int8_t *plocal_var_220;
  int32_t local_var_218;
  int8_t stack_array_210 [72];
  void *plocal_var_1c8;
  int8_t *plocal_var_1c0;
  int32_t local_var_1b8;
  int8_t stack_array_1b0 [72];
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
  local_var_298 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2e8;
  if (*param_1 != (void *)0x0) {
    SystemData_Processor(stack_array_2a0,&processed_var_7960_ptr);
    pplocal_var_2b8 = &plocal_var_168;
    ppuVar9 = (void **)0x0;
    plocal_var_168 = &memory_allocator_3480_ptr;
    plocal_var_160 = stack_array_150;
    local_var_158 = 0;
    stack_array_150[0] = 0;
    DataStructureManager0(&plocal_var_168,&processed_var_7960_ptr);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_168);
    lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (((*(int64_t *)(lVar1 + 0x8438) != 0) || (*(int *)(lVar1 + 0x8838) != -1)) ||
       (*(int *)(lVar1 + 0x8a38) != 0x13)) {
      pplocal_var_2a8 = (void **)0x0;
      (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 200))
                (*(int64_t **)(lVar1 + 0x8400),0,1,&pplocal_var_2a8);
      (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x1f8))
                (*(int64_t **)(lVar1 + 0x8400),0,1,&pplocal_var_2a8);
      (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
                (*(int64_t **)(lVar1 + 0x8400),0,1,&pplocal_var_2a8);
      *(uint64_t *)(lVar1 + 0x8438) = 0;
      *(int32_t *)(lVar1 + 0x8838) = 0xffffffff;
      *(int32_t *)(lVar1 + 0x8a38) = 0x13;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
    lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (((*(int64_t *)(lVar1 + 0x8440) != 0) || (*(int *)(lVar1 + 0x883c) != -1)) ||
       (*(int *)(lVar1 + 0x8a3c) != 0x13)) {
      pplocal_var_2b0 = (void **)0x0;
      (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 200))
                (*(int64_t **)(lVar1 + 0x8400),1,1,&pplocal_var_2b0);
      (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x1f8))
                (*(int64_t **)(lVar1 + 0x8400),1,1,&pplocal_var_2b0);
      (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
                (*(int64_t **)(lVar1 + 0x8400),1,1,&pplocal_var_2b0);
      *(uint64_t *)(lVar1 + 0x8440) = 0;
      *(int32_t *)(lVar1 + 0x883c) = 0xffffffff;
      *(int32_t *)(lVar1 + 0x8a3c) = 0x13;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
    uVar2 = *(uint64_t *)(system_message_buffer + 0x1cd8);
    puVar3 = param_1[5];
    UltraHighFreq_DatabaseHandler1(uVar2,puVar3,param_2,0x20);
    function_29dca0(uVar2,0xb,0x20,puVar3);
    if (0.5 < *(float *)(param_2 + 0xc)) {
      pplocal_var_2b8 = &plocal_var_288;
      plocal_var_288 = &memory_allocator_3480_ptr;
      plocal_var_280 = stack_array_270;
      local_var_278 = 0;
      stack_array_270[0] = 0;
      DataStructureManager0(&plocal_var_288,&processed_var_7928_ptr);
      SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_288);
      lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
      puVar3 = *param_1;
      pplocal_var_2b0 = ppuVar9;
      if (puVar3 != (void *)0x0) {
        *(int32_t *)(puVar3 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
        pplocal_var_2b0 = *(void ***)(puVar3 + 0x20);
      }
      plVar4 = *(int64_t **)(lVar1 + 0x8400);
      ppplocal_var_2c8 = (void ***)0x0;
      (**(code **)(*plVar4 + 0x220))(plVar4,1,1,&pplocal_var_2b0);
      lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
      puVar3 = param_1[1];
      pplocal_var_2b0 = ppuVar9;
      if (puVar3 != (void *)0x0) {
        *(int32_t *)(puVar3 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
        pplocal_var_2b0 = *(void ***)(puVar3 + 0x20);
      }
      plVar4 = *(int64_t **)(lVar1 + 0x8400);
      ppplocal_var_2c8 = (void ***)0x0;
      (**(code **)(*plVar4 + 0x220))(plVar4,2,1,&pplocal_var_2b0);
      puVar3 = param_1[0xb];
      lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
      if ((puVar3 != (void *)0x0) &&
         (*(int64_t *)(lVar1 + 0x82a0) != (int64_t)**(int **)(puVar3 + 0x10))) {
        (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x228))
                  (*(int64_t **)(lVar1 + 0x8400),*(uint64_t *)(*(int **)(puVar3 + 0x10) + 6),0,0)
        ;
        *(int64_t *)(lVar1 + 0x82a0) = (int64_t)**(int **)(puVar3 + 0x10);
      }
      plVar4 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
      (**(code **)(*plVar4 + 0x148))(plVar4,0x10,0x10,1);
      local_var_2c0 = 1;
      ppplocal_var_2c8._0_4_ = 0xffffffff;
      CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),1,1);
      local_var_2c0 = 1;
      ppplocal_var_2c8 = (void ***)CONCAT44(ppplocal_var_2c8._4_4_,0xffffffff);
      CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),2,1);
      SystemCore_Synchronizer(&plocal_var_288);
    }
    pplocal_var_2b8 = &plocal_var_108;
    plocal_var_108 = &memory_allocator_3480_ptr;
    plocal_var_100 = stack_array_f0;
    local_var_f8 = 0;
    stack_array_f0[0] = 0;
    DataStructureManager0(&plocal_var_108,&processed_var_7932_ptr);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_108);
    lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
    puVar3 = param_1[2];
    pplocal_var_2b0 = ppuVar9;
    if (puVar3 != (void *)0x0) {
      *(int32_t *)(puVar3 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
      pplocal_var_2b0 = *(void ***)(puVar3 + 0x20);
    }
    plVar4 = *(int64_t **)(lVar1 + 0x8400);
    ppplocal_var_2c8 = (void ***)0x0;
    (**(code **)(*plVar4 + 0x220))(plVar4,1,1,&pplocal_var_2b0);
    lVar5 = system_main_module_state;
    lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
    puVar3 = *param_1;
    pplocal_var_2a8 = ppuVar9;
    if ((puVar3 != (void *)0x0) &&
       (*(int32_t *)(puVar3 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224),
       puVar3 != (void *)0xfffffffffffffff0)) {
      *(int32_t *)(puVar3 + 0x16c) = *(int32_t *)(lVar5 + 0x224);
      pplocal_var_2a8 = *(void ***)(puVar3 + 0x18);
    }
    plVar4 = *(int64_t **)(lVar1 + 0x8400);
    (**(code **)(*plVar4 + 0x218))(plVar4,0,1,&pplocal_var_2a8);
    lVar5 = system_main_module_state;
    lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
    puVar3 = param_1[1];
    pplocal_var_2b8 = ppuVar9;
    if ((puVar3 != (void *)0x0) &&
       (*(int32_t *)(puVar3 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224),
       puVar3 != (void *)0xfffffffffffffff0)) {
      *(int32_t *)(puVar3 + 0x16c) = *(int32_t *)(lVar5 + 0x224);
      pplocal_var_2b8 = *(void ***)(puVar3 + 0x18);
    }
    plVar4 = *(int64_t **)(lVar1 + 0x8400);
    (**(code **)(*plVar4 + 0x218))(plVar4,1,1,&pplocal_var_2b8);
    puVar3 = param_1[0xc];
    lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if ((puVar3 != (void *)0x0) &&
       (*(int64_t *)(lVar1 + 0x82a0) != (int64_t)**(int **)(puVar3 + 0x10))) {
      (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x228))
                (*(int64_t **)(lVar1 + 0x8400),*(uint64_t *)(*(int **)(puVar3 + 0x10) + 6),0,0);
      *(int64_t *)(lVar1 + 0x82a0) = (int64_t)**(int **)(puVar3 + 0x10);
    }
    plVar4 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    (**(code **)(*plVar4 + 0x148))(plVar4,0x10,0x10,1);
    pplocal_var_2a8 = (void **)CONCAT44(pplocal_var_2a8._4_4_,0xffffffff);
    pplocal_var_2b8 = (void **)0x0;
    plVar4 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    ppplocal_var_2c8 = &pplocal_var_2a8;
    (**(code **)(*plVar4 + 0x220))(plVar4,1,1,&pplocal_var_2b8);
    pplocal_var_2b0 = (void **)0x0;
    plVar4 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    (**(code **)(*plVar4 + 0x218))(plVar4,0,1,&pplocal_var_2b0);
    pplocal_var_2b8 = (void **)0x0;
    plVar4 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    (**(code **)(*plVar4 + 0x218))(plVar4,1,1,&pplocal_var_2b8);
    SystemCore_Synchronizer(&plocal_var_108);
    pplocal_var_2b8 = &plocal_var_288;
    plocal_var_288 = &memory_allocator_3480_ptr;
    plocal_var_280 = stack_array_270;
    local_var_278 = 0;
    stack_array_270[0] = 0;
    pplocal_var_2b0 = param_1;
    DataStructureManager0(&plocal_var_288,&processed_var_8020_ptr);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_288);
    pplocal_var_2b8 = &plocal_var_a8;
    plocal_var_a8 = &memory_allocator_3480_ptr;
    plocal_var_a0 = stack_array_90;
    local_var_98 = 0;
    stack_array_90[0] = 0;
    DataStructureManager0(&plocal_var_a8,&processed_var_8024_ptr);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_a8);
    function_2c4970(&pplocal_var_2b0,0);
    SystemCore_Synchronizer(&plocal_var_a8);
    pplocal_var_2b8 = &plocal_var_228;
    plocal_var_228 = &memory_allocator_3480_ptr;
    plocal_var_220 = stack_array_210;
    local_var_218 = 0;
    stack_array_210[0] = 0;
    DataStructureManager0(&plocal_var_228,&processed_var_7984_ptr);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_228);
    function_2c4970(&pplocal_var_2b0,1);
    SystemCore_Synchronizer(&plocal_var_228);
    SystemCore_Synchronizer(&plocal_var_288);
    pplocal_var_2b8 = &plocal_var_1c8;
    plocal_var_1c8 = &memory_allocator_3480_ptr;
    plocal_var_1c0 = stack_array_1b0;
    local_var_1b8 = 0;
    stack_array_1b0[0] = 0;
    DataStructureManager0(&plocal_var_1c8,&processed_var_8000_ptr);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_1c8);
    lVar5 = system_main_module_state;
    lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
    puVar3 = param_1[3];
    pplocal_var_2b8 = ppuVar9;
    if ((puVar3 != (void *)0x0) &&
       (*(int32_t *)(puVar3 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224),
       puVar3 != (void *)0xfffffffffffffff0)) {
      *(int32_t *)(puVar3 + 0x16c) = *(int32_t *)(lVar5 + 0x224);
      pplocal_var_2b8 = *(void ***)(puVar3 + 0x18);
    }
    plVar4 = *(int64_t **)(lVar1 + 0x8400);
    (**(code **)(*plVar4 + 0x218))(plVar4,0,1,&pplocal_var_2b8);
    local_var_2c0 = 1;
    ppplocal_var_2c8 = (void ***)CONCAT44(ppplocal_var_2c8._4_4_,0xffffffff);
    CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),1,1,param_1[7]);
    puVar3 = param_1[0xe];
    lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if ((puVar3 != (void *)0x0) &&
       (*(int64_t *)(lVar1 + 0x82a0) != (int64_t)**(int **)(puVar3 + 0x10))) {
      (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x228))
                (*(int64_t **)(lVar1 + 0x8400),*(uint64_t *)(*(int **)(puVar3 + 0x10) + 6),0,0);
      *(int64_t *)(lVar1 + 0x82a0) = (int64_t)**(int **)(puVar3 + 0x10);
    }
    plVar4 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    (**(code **)(*plVar4 + 0x148))(plVar4,0x10,0x10,1);
    pplocal_var_2b8 = (void **)0x0;
    plVar4 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    (**(code **)(*plVar4 + 0x218))(plVar4,0,1,&pplocal_var_2b8);
    pplocal_var_2a8 = (void **)CONCAT44(pplocal_var_2a8._4_4_,0xffffffff);
    pplocal_var_2b8 = (void **)0x0;
    plVar4 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    ppplocal_var_2c8 = &pplocal_var_2a8;
    (**(code **)(*plVar4 + 0x220))(plVar4,1,1,&pplocal_var_2b8);
    SystemCore_Synchronizer(&plocal_var_1c8);
    pplocal_var_2b8 = &plocal_var_228;
    plocal_var_228 = &memory_allocator_3480_ptr;
    plocal_var_220 = stack_array_210;
    local_var_218 = 0;
    stack_array_210[0] = 0;
    DataStructureManager0(&plocal_var_228,&processed_var_8088_ptr);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_228);
    ppplocal_var_2c8._0_4_ = 0xffffffff;
    RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0,param_1[7],0x20);
    local_var_2c0 = 1;
    ppplocal_var_2c8 = (void ***)CONCAT44(ppplocal_var_2c8._4_4_,0xffffffff);
    CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),1,1,param_1[8]);
    puVar3 = param_1[0xf];
    lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if ((puVar3 != (void *)0x0) &&
       (*(int64_t *)(lVar1 + 0x82a0) != (int64_t)**(int **)(puVar3 + 0x10))) {
      (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x228))
                (*(int64_t **)(lVar1 + 0x8400),*(uint64_t *)(*(int **)(puVar3 + 0x10) + 6),0,0);
      *(int64_t *)(lVar1 + 0x82a0) = (int64_t)**(int **)(puVar3 + 0x10);
    }
    plVar4 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    (**(code **)(*plVar4 + 0x148))(plVar4,0x10,0x10,1);
    lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (((*(int64_t *)(lVar1 + 0x8438) != 0) || (*(int *)(lVar1 + 0x8838) != -1)) ||
       (*(int *)(lVar1 + 0x8a38) != 0x20)) {
      pplocal_var_2b8 = (void **)0x0;
      (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x218))
                (*(int64_t **)(lVar1 + 0x8400),0,1,&pplocal_var_2b8);
      *(uint64_t *)(lVar1 + 0x8438) = 0;
      *(int32_t *)(lVar1 + 0x8838) = 0xffffffff;
      *(int32_t *)(lVar1 + 0x8a38) = 0x20;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
    pplocal_var_2a8 = (void **)CONCAT44(pplocal_var_2a8._4_4_,0xffffffff);
    pplocal_var_2b8 = (void **)0x0;
    plVar4 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    ppplocal_var_2c8 = &pplocal_var_2a8;
    (**(code **)(*plVar4 + 0x220))(plVar4,1,1,&pplocal_var_2b8);
    SystemCore_Synchronizer(&plocal_var_228);
    pplocal_var_2b8 = &plocal_var_1c8;
    plocal_var_1c8 = &memory_allocator_3480_ptr;
    plocal_var_1c0 = stack_array_1b0;
    local_var_1b8 = 0;
    stack_array_1b0[0] = 0;
    DataStructureManager0(&plocal_var_1c8,&processed_var_8112_ptr);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_1c8);
    do {
      iVar8 = (int)ppuVar9;
      ppplocal_var_2c8._0_4_ = iVar8;
      RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0,param_1[8],0x20);
      uVar10 = iVar8 + 1;
      local_var_2c0 = 1;
      ppplocal_var_2c8 = (void ***)CONCAT44(ppplocal_var_2c8._4_4_,uVar10);
      CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),1,1,param_1[8]);
      puVar3 = param_1[0x10];
      lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
      if ((puVar3 != (void *)0x0) &&
         (*(int64_t *)(lVar1 + 0x82a0) != (int64_t)**(int **)(puVar3 + 0x10))) {
        (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x228))
                  (*(int64_t **)(lVar1 + 0x8400),*(uint64_t *)(*(int **)(puVar3 + 0x10) + 6),0,0)
        ;
        *(int64_t *)(lVar1 + 0x82a0) = (int64_t)**(int **)(puVar3 + 0x10);
      }
      uVar6 = 0x80 >> ((byte)ppuVar9 & 0x1f);
      plVar4 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
      iVar7 = (int)(uVar6 + ((int)uVar6 >> 0x1f & 3U)) >> 2;
      (**(code **)(*plVar4 + 0x148))(plVar4,iVar7,iVar7,1);
      lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
      if (((*(int64_t *)(lVar1 + 0x8438) != 0) || (*(int *)(lVar1 + 0x8838) != iVar8)) ||
         (*(int *)(lVar1 + 0x8a38) != 0x20)) {
        pplocal_var_2b8 = (void **)0x0;
        (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x218))
                  (*(int64_t **)(lVar1 + 0x8400),0,1,&pplocal_var_2b8);
        *(uint64_t *)(lVar1 + 0x8438) = 0;
        *(int *)(lVar1 + 0x8838) = iVar8;
        *(int32_t *)(lVar1 + 0x8a38) = 0x20;
        *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
      }
      pplocal_var_2a8 = (void **)CONCAT44(pplocal_var_2a8._4_4_,0xffffffff);
      pplocal_var_2b0 = (void **)0x0;
      plVar4 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
      ppplocal_var_2c8 = &pplocal_var_2a8;
      (**(code **)(*plVar4 + 0x220))(plVar4,1,1,&pplocal_var_2b0);
      ppuVar9 = (void **)(uint64_t)uVar10;
    } while ((int)uVar10 < 6);
    SystemCore_Synchronizer(&plocal_var_1c8);
    SystemCore_Synchronizer(&plocal_var_168);
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_2e8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2c4970(int64_t *param_1,int param_2)
void function_2c4970(int64_t *param_1,int param_2)
{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t stack_array_38 [2];
  uint64_t stack_array_28 [2];
  lVar6 = system_main_module_state;
  uVar4 = 0;
  if (param_2 == 0) {
    lVar5 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar1 = *(int64_t *)(*param_1 + 0x10);
    stack_array_38[0] = uVar4;
    if ((lVar1 != 0) &&
       (*(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar1 != -0x10)) {
      *(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(lVar6 + 0x224);
      stack_array_38[0] = *(uint64_t *)(lVar1 + 0x18);
    }
    plVar2 = *(int64_t **)(lVar5 + 0x8400);
    (**(code **)(*plVar2 + 0x218))(plVar2,0,1,stack_array_38);
    lVar6 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar5 = *(int64_t *)(*param_1 + 0x20);
  }
  else {
    if (param_2 != 1) goto LAB_1802c4ae0;
    lVar5 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar1 = *(int64_t *)(*param_1 + 0x20);
    stack_array_38[0] = uVar4;
    if ((lVar1 != 0) &&
       (*(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar1 != -0x10)) {
      *(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(lVar6 + 0x224);
      stack_array_38[0] = *(uint64_t *)(lVar1 + 0x18);
    }
    plVar2 = *(int64_t **)(lVar5 + 0x8400);
    (**(code **)(*plVar2 + 0x218))(plVar2,0,1,stack_array_38);
    lVar6 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar5 = *(int64_t *)(*param_1 + 0x18);
  }
  if (lVar5 != 0) {
    *(int32_t *)(lVar5 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    uVar4 = *(uint64_t *)(lVar5 + 0x20);
  }
  stack_array_38[0] = uVar4;
  (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 0x220))
            (*(int64_t **)(lVar6 + 0x8400),1,1,stack_array_38,0);
LAB_1802c4ae0:
  stack_array_28[0] = CONCAT44(stack_array_28[0]._4_4_,param_2);
  uVar4 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  uVar3 = *(uint64_t *)(*param_1 + 0x30);
  UltraHighFreq_DatabaseHandler1(uVar4,uVar3,stack_array_28,0x10);
  function_29dca0(uVar4,0xc,0x20,uVar3);
  lVar6 = *(int64_t *)(*param_1 + 0x68);
  lVar5 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if ((lVar6 != 0) && (*(int64_t *)(lVar5 + 0x82a0) != (int64_t)**(int **)(lVar6 + 0x10))) {
    (**(code **)(**(int64_t **)(lVar5 + 0x8400) + 0x228))
              (*(int64_t **)(lVar5 + 0x8400),*(uint64_t *)(*(int **)(lVar6 + 0x10) + 6),0,0);
    *(int64_t *)(lVar5 + 0x82a0) = (int64_t)**(int **)(lVar6 + 0x10);
  }
  plVar2 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
  (**(code **)(*plVar2 + 0x148))(plVar2,1,0x100,3);
  stack_array_38[0] = 0;
  plVar2 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
  (**(code **)(*plVar2 + 0x218))(plVar2,0,1,stack_array_38);
  stack_array_28[0] = 0;
  stack_array_38[0] = CONCAT44(stack_array_38[0]._4_4_,0xffffffff);
  plVar2 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
  (**(code **)(*plVar2 + 0x220))(plVar2,1,1,stack_array_28,stack_array_38);
  return;
}
// 函数: void function_2c4c30(void)
void function_2c4c30(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// 函数: void function_2c5470(void)
void function_2c5470(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
uint64_t *
function_2c5aa0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plStack_70;
  int64_t *plStack_68;
  int64_t *plStack_60;
  int64_t *plStack_58;
  int64_t *plStack_50;
  uint64_t local_var_48;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_var_48 = 0;
  plStack_70 = (int64_t *)0x0;
  plStack_68 = (int64_t *)0x0;
  plStack_60 = (int64_t *)0x0;
  plStack_58 = (int64_t *)0x0;
  plStack_50 = (int64_t *)0x0;
  function_247c00(param_1,&plStack_70,param_3,param_4,0xfffffffffffffffe);
  if (plStack_50 != (int64_t *)0x0) {
    (**(code **)(*plStack_50 + 0x38))();
  }
  if (plStack_58 != (int64_t *)0x0) {
    (**(code **)(*plStack_58 + 0x38))();
  }
  if (plStack_60 != (int64_t *)0x0) {
    (**(code **)(*plStack_60 + 0x38))();
  }
  if (plStack_68 != (int64_t *)0x0) {
    (**(code **)(*plStack_68 + 0x38))();
  }
  if (plStack_70 != (int64_t *)0x0) {
    (**(code **)(*plStack_70 + 0x38))();
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(int32_t *)((int64_t)param_1 + 0x1064) = 0xffffffff;
  LOCK();
  *(int32_t *)(param_1 + 0x20c) = 0;
  UNLOCK();
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2c5bc0(int64_t *param_1)
void function_2c5bc0(int64_t *param_1)
{
  int64_t lVar1;
  int64_t *plVar2;
  void *puVar3;
  int8_t stack_array_2f8 [32];
  int32_t local_var_2d8;
  int32_t local_var_2d0;
  int32_t local_var_2c8;
  int32_t local_var_2c0;
  int32_t local_var_2b8;
  uint64_t local_var_2b0;
  int8_t local_var_2a8;
  int32_t local_var_2a0;
  int64_t *plStack_298;
  int64_t *plStack_290;
  int64_t *plStack_288;
  uint64_t local_var_280;
  int32_t local_var_278;
  uint64_t local_var_274;
  uint64_t local_var_26c;
  int32_t local_var_264;
  int32_t local_var_260;
  int64_t *plStack_258;
  int32_t local_var_250;
  int8_t local_var_24c;
  uint64_t local_var_240;
  void *plocal_var_238;
  int8_t *plocal_var_230;
  int32_t local_var_228;
  int8_t stack_array_220 [72];
  void *plocal_var_1d8;
  int8_t *plocal_var_1d0;
  int32_t local_var_1c8;
  int8_t stack_array_1c0 [136];
  void *plocal_var_138;
  int8_t *plocal_var_130;
  int32_t local_var_128;
  int8_t stack_array_120 [136];
  void *plocal_var_98;
  void *plocal_var_90;
  int32_t local_var_88;
  uint8_t stack_array_80 [72];
  uint64_t local_var_38;
  local_var_240 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2f8;
  plocal_var_238 = &memory_allocator_3480_ptr;
  plocal_var_230 = stack_array_220;
  stack_array_220[0] = 0;
  local_var_228 = 0x24;
  strcpy_s(stack_array_220,0x40,&processed_var_8296_ptr);
  local_var_2a0 = 1;
  local_var_2a8 = 0;
  local_var_2b0 = 0;
  local_var_2b8 = 0x18;
  local_var_2c0 = 0x10;
  local_var_2c8 = 0;
  local_var_2d0 = 3;
  local_var_2d8 = 0x61;
  plVar2 = (int64_t *)SystemCore_ConfigManager();
  lVar1 = *plVar2;
  *plVar2 = 0;
  plStack_298 = (int64_t *)*param_1;
  *param_1 = lVar1;
  if (plStack_298 != (int64_t *)0x0) {
    (**(code **)(*plStack_298 + 0x38))();
  }
  if (plStack_290 != (int64_t *)0x0) {
    (**(code **)(*plStack_290 + 0x38))();
  }
  plocal_var_238 = &system_state_ptr;
  plocal_var_1d8 = &memory_allocator_3480_ptr;
  plocal_var_1d0 = stack_array_1c0;
  stack_array_1c0[0] = 0;
  local_var_1c8 = 0x27;
  strcpy_s(stack_array_1c0,0x40,&processed_var_8200_ptr);
  local_var_2a0 = 1;
  local_var_2a8 = 0;
  local_var_2b0 = 0;
  local_var_2b8 = 1;
  local_var_2c0 = 0x30;
  local_var_2c8 = 0;
  local_var_2d0 = 3;
  local_var_2d8 = 0x220;
  plVar2 = (int64_t *)SystemCore_ConfigManager();
  lVar1 = *plVar2;
  *plVar2 = 0;
  plStack_298 = (int64_t *)param_1[1];
  param_1[1] = lVar1;
  if (plStack_298 != (int64_t *)0x0) {
    (**(code **)(*plStack_298 + 0x38))();
  }
  if (plStack_288 != (int64_t *)0x0) {
    (**(code **)(*plStack_288 + 0x38))();
  }
  plocal_var_1d8 = &system_state_ptr;
  local_var_278 = 1;
  local_var_264 = 0;
  plStack_290 = (int64_t *)0x0;
  plStack_258 = (int64_t *)0x0;
  local_var_24c = 0;
  local_var_260 = 0x1000001;
  local_var_280 = 0x10000000100;
  local_var_274 = 0x3600000001;
  local_var_26c = 0x500000007;
  local_var_250 = *(int32_t *)((int64_t)param_1 + 0x1064);
  plocal_var_98 = &memory_allocator_3480_ptr;
  plocal_var_90 = stack_array_80;
  stack_array_80[0] = 0;
  local_var_88 = 0x20;
  strcpy_s(stack_array_80,0x40,&processed_var_8240_ptr);
  plocal_var_138 = &memory_allocator_3432_ptr;
  plocal_var_130 = stack_array_120;
  stack_array_120[0] = 0;
  local_var_128 = local_var_88;
  puVar3 = &system_buffer_ptr;
  if (plocal_var_90 != (void *)0x0) {
    puVar3 = plocal_var_90;
  }
  strcpy_s(stack_array_120,0x80,puVar3);
  plVar2 = (int64_t *)function_0b2450();
  lVar1 = *plVar2;
  *plVar2 = 0;
  plStack_298 = (int64_t *)param_1[2];
  param_1[2] = lVar1;
  if (plStack_298 != (int64_t *)0x0) {
    (**(code **)(*plStack_298 + 0x38))();
  }
  if (plStack_290 != (int64_t *)0x0) {
    (**(code **)(*plStack_290 + 0x38))();
  }
  plocal_var_138 = &system_state_ptr;
  plocal_var_98 = &system_state_ptr;
  plocal_var_238 = &memory_allocator_3480_ptr;
  plocal_var_230 = stack_array_220;
  stack_array_220[0] = 0;
  local_var_228 = 0x25;
  strcpy_s(stack_array_220,0x40,&processed_var_8368_ptr);
  plocal_var_1d8 = &memory_allocator_3432_ptr;
  plocal_var_1d0 = stack_array_1c0;
  stack_array_1c0[0] = 0;
  local_var_1c8 = local_var_228;
  puVar3 = &system_buffer_ptr;
  if (plocal_var_230 != (void *)0x0) {
    puVar3 = plocal_var_230;
  }
  strcpy_s(stack_array_1c0,0x80,puVar3);
  plVar2 = (int64_t *)function_0b2450();
  lVar1 = *plVar2;
  *plVar2 = 0;
  plStack_288 = (int64_t *)param_1[3];
  param_1[3] = lVar1;
  if (plStack_288 != (int64_t *)0x0) {
    (**(code **)(*plStack_288 + 0x38))();
  }
  if (plStack_298 != (int64_t *)0x0) {
    (**(code **)(*plStack_298 + 0x38))();
  }
  plocal_var_1d8 = &system_state_ptr;
  plocal_var_238 = &system_state_ptr;
  plocal_var_138 = &memory_allocator_3432_ptr;
  plocal_var_130 = stack_array_120;
  stack_array_120[0] = 0;
  local_var_128 = 0x10;
  strcpy_s(stack_array_120,0x80,&memory_allocator_3008_ptr);
  plVar2 = (int64_t *)SystemCore_EncryptionManager(system_resource_state,&plStack_290,&plocal_var_138,1);
  plVar2 = (int64_t *)*plVar2;
  if (plVar2 != (int64_t *)0x0) {
    plStack_288 = plVar2;
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plStack_288 = (int64_t *)param_1[4];
  param_1[4] = (int64_t)plVar2;
  if (plStack_288 != (int64_t *)0x0) {
    (**(code **)(*plStack_288 + 0x38))();
  }
  if (plStack_290 != (int64_t *)0x0) {
    (**(code **)(*plStack_290 + 0x38))();
  }
  plocal_var_138 = &system_state_ptr;
  if (plStack_258 != (int64_t *)0x0) {
    (**(code **)(*plStack_258 + 0x38))();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_2f8);
}
// 函数: void function_2c60f0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_2c60f0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plStack_40;
  int64_t *plStack_38;
  int64_t *plStack_30;
  int64_t *plStack_28;
  int64_t *plStack_20;
  uint64_t local_var_18;
  local_var_18 = 0;
  plStack_40 = (int64_t *)0x0;
  plStack_38 = (int64_t *)0x0;
  plStack_30 = (int64_t *)0x0;
  plStack_28 = (int64_t *)0x0;
  plStack_20 = (int64_t *)0x0;
  function_247c00(param_1,&plStack_40,param_3,param_4,0xfffffffffffffffe);
  if (plStack_20 != (int64_t *)0x0) {
    (**(code **)(*plStack_20 + 0x38))();
  }
  if (plStack_28 != (int64_t *)0x0) {
    (**(code **)(*plStack_28 + 0x38))();
  }
  if (plStack_30 != (int64_t *)0x0) {
    (**(code **)(*plStack_30 + 0x38))();
  }
  if (plStack_38 != (int64_t *)0x0) {
    (**(code **)(*plStack_38 + 0x38))();
  }
  if (plStack_40 != (int64_t *)0x0) {
// WARNING: Could not recover jumptable at 0x0001802c6178. Too many branches
// WARNING: Treating indirect jump as call
    (**(code **)(*plStack_40 + 0x38))();
    return;
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x0001802c6312)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address