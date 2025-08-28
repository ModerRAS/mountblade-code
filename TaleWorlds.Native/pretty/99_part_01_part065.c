#include "ultra_high_freq_fun_definitions.h"
// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: DataStructureManager */
#define DataStructureManager DataStructureManager
/* 函数别名定义: RenderingEngineCore */
#define RenderingEngineCore RenderingEngineCore
// 99_part_01_part065.c - 2 个函数
// 函数: void function_0e3700(uint64_t param_1,int64_t param_2)
void function_0e3700(uint64_t param_1,int64_t param_2)
{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint uVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  void **ppuVar12;
  int64_t lVar13;
  int iVar14;
  uint64_t uVar15;
  int iVar16;
  int32_t uVar17;
  int32_t uVar18;
  int8_t auVar19 [16];
  int8_t auVar20 [16];
  int8_t auVar21 [16];
  int8_t auVar22 [16];
  int8_t stack_array_1e8 [32];
  uint64_t local_var_1c8;
  void **pplocal_var_1b8;
  int8_t stack_array_1b0 [8];
  void **pplocal_var_1a8;
  uint64_t local_var_1a0;
  uint64_t local_var_198;
  int32_t local_var_190;
  int16_t local_var_18c;
  int16_t local_var_18a;
  uint64_t stack_array_188 [2];
  void *plocal_var_178;
  uint64_t local_var_170;
  uint64_t local_var_168;
  int32_t local_var_160;
  int64_t *plStack_158;
  void *plocal_var_150;
  int64_t lStack_148;
  int32_t local_var_140;
  uint64_t local_var_138;
  uint64_t local_var_130;
  uint64_t local_var_128;
  int64_t *plStack_120;
  uint64_t local_var_118;
  void *plocal_var_110;
  uint64_t local_var_108;
  uint64_t local_var_100;
  int32_t local_var_f8;
  uint64_t local_var_f0;
  int8_t stack_array_e8 [32];
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  int64_t *plStack_b8;
  void *plocal_var_a8;
  int8_t *plocal_var_a0;
  int32_t local_var_98;
  int8_t stack_array_90 [72];
  uint64_t local_var_48;
  local_var_118 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1e8;
  lVar13 = param_2;
  lVar10 = SystemFunction_0001800e2bf0();
  if (((((char)lVar10 != '\0') &&
       (lVar10 = SystemLog_Manager(lVar13), *(char *)(lVar10 + 0x156) != '\0')) &&
      (lVar10 = SystemLog_Manager(param_2), *(int64_t *)(lVar10 + 0x1e0) != 0)) &&
     (system_main_module_state != 0)) {
    *(int64_t *)(lVar10 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
  }
  uVar9 = (uint)lVar10;
  if (((*(byte *)(param_2 + 0x1bd8) & 0x20) != 0) &&
     (((*(int *)(param_2 + 0x9a34) != 0 || (*(int *)(param_2 + 0x124bc) != 0)) ||
      ((*(int *)(param_2 + 0x124b8) != 0 || (*(int *)(param_2 + 0x124c0) != 0)))))) {
    SystemData_Processor(stack_array_1b0,&processed_var_4728_ptr);
    pplocal_var_1b8 = &plocal_var_a8;
    ppuVar12 = (void **)0x0;
    plocal_var_a8 = &memory_allocator_3480_ptr;
    plocal_var_a0 = stack_array_90;
    local_var_98 = 0;
    stack_array_90[0] = 0;
    DataStructureManager0(&plocal_var_a8,&processed_var_4728_ptr);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_a8);
    lVar10 = system_message_buffer;
    function_094120(param_2 + 0x12a40,*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1e10);
    uVar15 = *(uint64_t *)(param_2 + 0x12a08);
    uVar4 = *(uint64_t *)(param_2 + 0x12a10);
    uVar5 = *(uint64_t *)(param_2 + 0x12a18);
    uVar6 = *(uint64_t *)(param_2 + 0x12a20);
    uVar7 = *(uint64_t *)(param_2 + 0x12a28);
    uVar17 = *(int32_t *)(param_2 + 0x12a30);
    uVar18 = *(int32_t *)(param_2 + 0x12a34);
    uVar2 = *(int32_t *)(param_2 + 0x12a38);
    uVar3 = *(int32_t *)(param_2 + 0x12a3c);
    lVar13 = *(int64_t *)(lVar10 + 0x1cd8);
    *(uint64_t *)(lVar13 + 0x1e50) = *(uint64_t *)(param_2 + 0x12a00);
    *(uint64_t *)(lVar13 + 0x1e58) = uVar15;
    *(uint64_t *)(lVar13 + 0x1e60) = uVar4;
    *(uint64_t *)(lVar13 + 0x1e68) = uVar5;
    *(uint64_t *)(lVar13 + 0x1e70) = uVar6;
    *(uint64_t *)(lVar13 + 0x1e78) = uVar7;
    *(int32_t *)(lVar13 + 0x1e80) = uVar17;
    *(int32_t *)(lVar13 + 0x1e84) = uVar18;
    *(int32_t *)(lVar13 + 0x1e88) = uVar2;
    *(int32_t *)(lVar13 + 0x1e8c) = uVar3;
    function_094120((uint64_t *)(param_2 + 0x12a00),*(int64_t *)(lVar10 + 0x1cd8) + 0x1e90);
    *(int32_t *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x1ed0) = *(int32_t *)(param_2 + 0x11c20);
    *(int32_t *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x1ed4) = *(int32_t *)(param_2 + 0x11c24);
    *(int32_t *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x1ed8) = *(int32_t *)(param_2 + 0x124c0);
    *(int32_t *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x1edc) = *(int32_t *)(param_2 + 0x124bc);
    *(int32_t *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x1ee0) = *(int32_t *)(param_2 + 0x3510);
    uVar17 = *(int32_t *)(param_2 + 0x124b8);
    *(int32_t *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x1ee4) = uVar17;
    lVar13 = system_system_data_memory;
    local_var_198 = 0;
    local_var_190 = 0;
    local_var_18c = 0;
    if (*(int64_t *)(system_system_data_memory + 0x3e0) == 0) {
      puVar11 = (uint64_t *)function_09e9e0(uVar17,&pplocal_var_1a8,&processed_var_832_ptr);
      uVar15 = *puVar11;
      *puVar11 = 0;
      pplocal_var_1b8 = *(void ***)(lVar13 + 0x3e0);
      *(uint64_t *)(lVar13 + 0x3e0) = uVar15;
      if (pplocal_var_1b8 != (void **)0x0) {
        (**(code **)(*pplocal_var_1b8 + 0x38))();
      }
      if (pplocal_var_1a8 != (void **)0x0) {
        (**(code **)(*pplocal_var_1a8 + 0x38))();
      }
    }
    plocal_var_178 = *(void **)(lVar13 + 0x3e0);
    plStack_158 = (int64_t *)0x0;
    plocal_var_150 = &system_data_buffer_ptr;
    local_var_138 = 0;
    lStack_148 = 0;
    local_var_140 = 0;
    plStack_120 = (int64_t *)0x0;
    local_var_168 = CONCAT26(local_var_18a,CONCAT24(local_var_18c,local_var_190));
    local_var_170 = local_var_198;
    local_var_160 = 2;
    local_var_130 = 0;
    local_var_128 = 0;
    uVar15 = *(uint64_t *)(plocal_var_178 + 0x15b8);
    pplocal_var_1b8 = &plocal_var_110;
    local_var_108 = local_var_198;
    local_var_f8 = 2;
    local_var_f0 = 0;
    plocal_var_110 = plocal_var_178;
    local_var_100 = local_var_168;
    CoreEngineDataTransformer(stack_array_e8,&plocal_var_150);
    local_var_c8 = local_var_130;
    local_var_c0 = local_var_128;
    plStack_b8 = plStack_120;
    if (plStack_120 != (int64_t *)0x0) {
      (**(code **)(*plStack_120 + 0x28))();
    }
    lVar10 = UIRenderingEngine(uVar15,param_2,&plocal_var_110,stack_array_1b0);
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if ((lVar10 != 0) && (*(int64_t *)(lVar13 + 0x82a0) != (int64_t)**(int **)(lVar10 + 0x10))) {
      (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 0x228))
                (*(int64_t **)(lVar13 + 0x8400),*(uint64_t *)(*(int **)(lVar10 + 0x10) + 6),0,0);
      *(int64_t *)(lVar13 + 0x82a0) = (int64_t)**(int **)(lVar10 + 0x10);
    }
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    stack_array_188[0] = 0;
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 200))
              (*(int64_t **)(lVar13 + 0x8400),0x49,1,stack_array_188);
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 0x40))
              (*(int64_t **)(lVar13 + 0x8400),0x49,1,stack_array_188);
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 0x218))
              (*(int64_t **)(lVar13 + 0x8400),0x49,1,stack_array_188);
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    local_var_1a0 = 0;
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 200))
              (*(int64_t **)(lVar13 + 0x8400),0x52,1,&local_var_1a0);
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 0x40))
              (*(int64_t **)(lVar13 + 0x8400),0x52,1,&local_var_1a0);
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 0x218))
              (*(int64_t **)(lVar13 + 0x8400),0x52,1,&local_var_1a0);
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    local_var_198 = 0;
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 200))
              (*(int64_t **)(lVar13 + 0x8400),0x50,1,&local_var_198);
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 0x40))
              (*(int64_t **)(lVar13 + 0x8400),0x50,1,&local_var_198);
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 0x218))
              (*(int64_t **)(lVar13 + 0x8400),0x50,1,&local_var_198);
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    pplocal_var_1a8 = (void **)0x0;
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 200))
              (*(int64_t **)(lVar13 + 0x8400),0x51,1,&pplocal_var_1a8);
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 0x40))
              (*(int64_t **)(lVar13 + 0x8400),0x51,1,&pplocal_var_1a8);
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 0x218))
              (*(int64_t **)(lVar13 + 0x8400),0x51,1,&pplocal_var_1a8);
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    pplocal_var_1b8 = (void **)0x0;
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 200))
              (*(int64_t **)(lVar13 + 0x8400),0x5a,1,&pplocal_var_1b8);
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 0x40))
              (*(int64_t **)(lVar13 + 0x8400),0x5a,1,&pplocal_var_1b8);
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 0x218))
              (*(int64_t **)(lVar13 + 0x8400),0x5a,1,&pplocal_var_1b8);
    lVar13 = system_message_buffer;
    *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83b8) = 0;
    *(uint64_t *)(*(int64_t *)(lVar13 + 0x1cd8) + 0x83f0) = 0;
    SystemCore_ProcessorEx(*(uint64_t *)(lVar13 + 0x1cd8),1);
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar10 = *(int64_t *)(param_2 + 0x9730);
    pplocal_var_1b8 = ppuVar12;
    if (lVar10 != 0) {
      *(int32_t *)(lVar10 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
      pplocal_var_1b8 = *(void ***)(lVar10 + 0x20);
    }
    plVar1 = *(int64_t **)(lVar13 + 0x8400);
    local_var_1c8 = 0;
    (**(code **)(*plVar1 + 0x220))(plVar1,1,1,&pplocal_var_1b8);
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar10 = *(int64_t *)(param_2 + 0x9830);
    pplocal_var_1b8 = ppuVar12;
    if (lVar10 != 0) {
      *(int32_t *)(lVar10 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
      pplocal_var_1b8 = *(void ***)(lVar10 + 0x20);
    }
    plVar1 = *(int64_t **)(lVar13 + 0x8400);
    local_var_1c8 = 0;
    (**(code **)(*plVar1 + 0x220))(plVar1,2,1,&pplocal_var_1b8);
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar10 = *(int64_t *)(param_2 + 0x9838);
    pplocal_var_1b8 = ppuVar12;
    if (lVar10 != 0) {
      *(int32_t *)(lVar10 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
      pplocal_var_1b8 = *(void ***)(lVar10 + 0x20);
    }
    plVar1 = *(int64_t **)(lVar13 + 0x8400);
    local_var_1c8 = 0;
    (**(code **)(*plVar1 + 0x220))(plVar1,3,1,&pplocal_var_1b8);
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar10 = *(int64_t *)(param_2 + 0x9738);
    pplocal_var_1b8 = ppuVar12;
    if (lVar10 != 0) {
      *(int32_t *)(lVar10 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
      pplocal_var_1b8 = *(void ***)(lVar10 + 0x20);
    }
    plVar1 = *(int64_t **)(lVar13 + 0x8400);
    local_var_1c8 = 0;
    (**(code **)(*plVar1 + 0x220))(plVar1,4,1,&pplocal_var_1b8);
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    uVar15 = *(uint64_t *)(system_message_buffer + 0x1cc0);
    UltraHighFreq_DatabaseHandler1(lVar13,uVar15,lVar13 + 0x1e10,0xe0);
    function_29dca0(lVar13,0xb,0x20,uVar15);
    lVar8 = system_main_module_state;
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar10 = *(int64_t *)(param_2 + 0x9720);
    pplocal_var_1b8 = ppuVar12;
    if ((lVar10 != 0) &&
       (*(int32_t *)(lVar10 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar10 != -0x10))
    {
      *(int32_t *)(lVar10 + 0x16c) = *(int32_t *)(lVar8 + 0x224);
      pplocal_var_1b8 = *(void ***)(lVar10 + 0x18);
    }
    plVar1 = *(int64_t **)(lVar13 + 0x8400);
    (**(code **)(*plVar1 + 0x218))(plVar1,0,1,&pplocal_var_1b8);
    lVar8 = system_main_module_state;
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar10 = *(int64_t *)(param_2 + 0x9828);
    pplocal_var_1a8 = ppuVar12;
    if ((lVar10 != 0) &&
       (*(int32_t *)(lVar10 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar10 != -0x10))
    {
      *(int32_t *)(lVar10 + 0x16c) = *(int32_t *)(lVar8 + 0x224);
      pplocal_var_1a8 = *(void ***)(lVar10 + 0x18);
    }
    plVar1 = *(int64_t **)(lVar13 + 0x8400);
    (**(code **)(*plVar1 + 0x218))(plVar1,1,1,&pplocal_var_1a8);
    lVar8 = system_main_module_state;
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar10 = *(int64_t *)(param_2 + 0x9740);
    if ((lVar10 != 0) &&
       (*(int32_t *)(lVar10 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar10 != -0x10))
    {
      *(int32_t *)(lVar10 + 0x16c) = *(int32_t *)(lVar8 + 0x224);
      ppuVar12 = *(void ***)(lVar10 + 0x18);
    }
    plVar1 = *(int64_t **)(lVar13 + 0x8400);
    pplocal_var_1b8 = ppuVar12;
    (**(code **)(*plVar1 + 0x218))(plVar1,2,1,&pplocal_var_1b8);
    lVar13 = SystemLog_Manager(param_2);
    if (*(int *)(lVar13 + 0x160) == 5) {
      local_var_1c8 = CONCAT44(local_var_1c8._4_4_,*(int32_t *)(param_2 + 0x357c));
      uVar15 = *(uint64_t *)(system_message_buffer + 0x1cd8);
    }
    else {
      local_var_1c8 = CONCAT44(local_var_1c8._4_4_,0xffffffff);
      uVar15 = *(uint64_t *)(system_message_buffer + 0x1cd8);
    }
    uVar9 = RenderingEngineCore0(uVar15,3,lVar13,0x20);
    auVar19._0_4_ = *(float *)(param_2 + 0x11c20) * 0.0625;
    iVar14 = (int)auVar19._0_4_;
    if ((iVar14 != -0x80000000) && ((float)iVar14 != auVar19._0_4_)) {
      auVar19._4_4_ = auVar19._0_4_;
      auVar19._8_8_ = 0;
      uVar9 = movmskps(uVar9,auVar19);
      uVar9 = uVar9 & 1 ^ 1;
      auVar19._0_4_ = (float)(int)(iVar14 + uVar9);
    }
    auVar21._0_4_ = *(float *)(param_2 + 0x11c24) * 0.0625;
    iVar14 = (int)auVar21._0_4_;
    if ((iVar14 != -0x80000000) && ((float)iVar14 != auVar21._0_4_)) {
      auVar21._4_4_ = auVar21._0_4_;
      auVar21._8_8_ = 0;
      uVar9 = movmskps(uVar9,auVar21);
      auVar21._0_4_ = (float)(int)(iVar14 + (uVar9 & 1 ^ 1));
    }
    *(int *)(param_2 + 0x11c30) = (int)(int64_t)auVar21._0_4_ * (int)(int64_t)auVar19._0_4_;
    plVar1 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    (**(code **)(*plVar1 + 0x148))(plVar1,(int64_t)auVar19._0_4_,(int64_t)auVar21._0_4_,1);
    pplocal_var_1b8 = (void **)0x0;
    plVar1 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    (**(code **)(*plVar1 + 0x218))(plVar1,0,1,&pplocal_var_1b8);
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (((*(int64_t *)(lVar13 + 0x8440) != 0) || (*(int *)(lVar13 + 0x883c) != -1)) ||
       (*(int *)(lVar13 + 0x8a3c) != 0x20)) {
      pplocal_var_1a8 = (void **)0x0;
      (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 0x218))
                (*(int64_t **)(lVar13 + 0x8400),1,1,&pplocal_var_1a8);
      *(uint64_t *)(lVar13 + 0x8440) = 0;
      *(int32_t *)(lVar13 + 0x883c) = 0xffffffff;
      *(int32_t *)(lVar13 + 0x8a3c) = 0x20;
      *(int *)(lVar13 + 0x82b4) = *(int *)(lVar13 + 0x82b4) + 1;
    }
    local_var_198 = 0;
    plVar1 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    (**(code **)(*plVar1 + 0x218))(plVar1,2,1,&local_var_198);
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (((*(int64_t *)(lVar13 + 0x8450) != 0) || (*(int *)(lVar13 + 0x8844) != -1)) ||
       (*(int *)(lVar13 + 0x8a44) != 0x20)) {
      local_var_1a0 = 0;
      (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 0x218))
                (*(int64_t **)(lVar13 + 0x8400),3,1,&local_var_1a0);
      *(uint64_t *)(lVar13 + 0x8450) = 0;
      *(int32_t *)(lVar13 + 0x8844) = 0xffffffff;
      *(int32_t *)(lVar13 + 0x8a44) = 0x20;
      *(int *)(lVar13 + 0x82b4) = *(int *)(lVar13 + 0x82b4) + 1;
    }
    pplocal_var_1b8 = (void **)0x0;
    plVar1 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    local_var_1c8 = 0;
    (**(code **)(*plVar1 + 0x220))(plVar1,1,1,&pplocal_var_1b8);
    pplocal_var_1b8 = (void **)0x0;
    plVar1 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    local_var_1c8 = 0;
    (**(code **)(*plVar1 + 0x220))(plVar1,2,1,&pplocal_var_1b8);
    pplocal_var_1b8 = (void **)0x0;
    plVar1 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    local_var_1c8 = 0;
    (**(code **)(*plVar1 + 0x220))(plVar1,3,1,&pplocal_var_1b8);
    pplocal_var_1b8 = (void **)0x0;
    plVar1 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    local_var_1c8 = 0;
    (**(code **)(*plVar1 + 0x220))(plVar1,4,1,&pplocal_var_1b8);
    if (plStack_120 != (int64_t *)0x0) {
      (**(code **)(*plStack_120 + 0x38))();
    }
    pplocal_var_1b8 = &plocal_var_150;
    plocal_var_150 = &system_data_buffer_ptr;
    if (lStack_148 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_148 = 0;
    local_var_138 = local_var_138 & 0xffffffff00000000;
    plocal_var_150 = &system_state_ptr;
    if (plStack_158 != (int64_t *)0x0) {
      (**(code **)(*plStack_158 + 0x38))();
    }
    SystemCore_Synchronizer(&plocal_var_a8);
    system_system_data_memory = system_system_data_memory + -1;
    uVar9 = (**(code **)(*system_system_data_memory + 0x20))();
  }
  lVar13 = system_message_buffer;
  auVar20._0_4_ = *(float *)(param_2 + 0x11c24) * 0.0625;
  iVar14 = (int)auVar20._0_4_;
  if ((iVar14 != -0x80000000) && ((float)iVar14 != auVar20._0_4_)) {
    auVar20._4_4_ = auVar20._0_4_;
    auVar20._8_8_ = 0;
    uVar9 = movmskps(uVar9,auVar20);
    uVar9 = uVar9 & 1 ^ 1;
    auVar20._0_4_ = (float)(int)(iVar14 + uVar9);
  }
  auVar22._0_4_ = *(float *)(param_2 + 0x11c20) * 0.0625;
  iVar14 = (int)auVar22._0_4_;
  if ((iVar14 != -0x80000000) && ((float)iVar14 != auVar22._0_4_)) {
    auVar22._4_4_ = auVar22._0_4_;
    auVar22._8_8_ = 0;
    uVar9 = movmskps(uVar9,auVar22);
    auVar22._0_4_ = (float)(int)(iVar14 + (uVar9 & 1 ^ 1));
  }
  iVar16 = (int)(int64_t)auVar20._0_4_ * (int)(int64_t)auVar22._0_4_;
  iVar14 = *(int *)(param_2 + 0x11c30);
  uVar17 = 0x3f800000;
  if ((*(int *)(param_2 + 0x124bc) == 0) || (iVar16 != iVar14)) {
    uVar18 = 0;
  }
  else {
    uVar18 = 0x3f800000;
  }
  *(int32_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1490) = uVar18;
  if ((*(int *)(param_2 + 0x124c0) == 0) || (iVar16 != iVar14)) {
    uVar18 = 0;
  }
  else {
    uVar18 = 0x3f800000;
  }
  *(int32_t *)(*(int64_t *)(lVar13 + 0x1cd8) + 0x17bc) = uVar18;
  if ((*(int *)(param_2 + 0x124b8) == 0) || (iVar16 != iVar14)) {
    uVar17 = 0;
  }
  *(int32_t *)(*(int64_t *)(lVar13 + 0x1cd8) + 0x1774) = uVar17;
  *(int8_t *)(param_2 + 0x12c08) = 1;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_1e8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_0e44b0(uint64_t param_1,int64_t *param_2,int64_t *param_3,int64_t *param_4)
void function_0e44b0(uint64_t param_1,int64_t *param_2,int64_t *param_3,int64_t *param_4)
{
  int64_t lVar1;
  code *pcVar2;
  ushort uVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int32_t *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int32_t *puVar12;
  int iVar13;
  int32_t uVar14;
  int8_t stack_array_338 [32];
  uint64_t local_var_318;
  int32_t local_var_310;
  uint64_t local_var_308;
  int iStack_300;
  uint64_t local_var_2f8;
  int8_t stack_array_2e8 [8];
  uint64_t *plocal_var_2e0;
  int64_t *plStack_2d8;
  uint64_t local_var_2d0;
  int32_t local_var_2c8;
  int iStack_2c4;
  int32_t local_var_2c0;
  int32_t local_var_2bc;
  int32_t local_var_2b8;
  int32_t local_var_2b4;
  int32_t local_var_2b0;
  int64_t *plStack_2a8;
  int32_t local_var_2a0;
  int8_t local_var_29c;
  void *plocal_var_298;
  uint64_t local_var_290;
  int32_t local_var_288;
  uint64_t local_var_280;
  uint64_t local_var_278;
  uint64_t local_var_270;
  int32_t local_var_268;
  uint64_t local_var_260;
  int32_t local_var_258;
  int iStack_254;
  int32_t local_var_250;
  uint64_t local_var_24c;
  int32_t local_var_244;
  int32_t local_var_240;
  uint64_t local_var_238;
  int32_t local_var_230;
  int8_t local_var_22c;
  int64_t *plStack_228;
  void **pplocal_var_220;
  void *plocal_var_218;
  void *plocal_var_210;
  uint64_t local_var_208;
  int32_t local_var_200;
  int64_t *plStack_1f8;
  void *plocal_var_1f0;
  int64_t lStack_1e8;
  int32_t local_var_1e0;
  uint64_t local_var_1d8;
  uint64_t local_var_1d0;
  uint64_t local_var_1c8;
  int64_t *plStack_1c0;
  int64_t *plStack_1b8;
  int64_t *plStack_1b0;
  uint64_t local_var_1a8;
  int64_t *plStack_1a0;
  int64_t *plStack_198;
  int64_t *plStack_190;
  void *plocal_var_188;
  uint *plocal_var_180;
  int32_t local_var_178;
  int32_t local_var_174;
  uint stack_array_170 [2];
  uint64_t local_var_168;
  int8_t stack_array_160 [32];
  int32_t local_var_140;
  int32_t local_var_13c;
  int32_t local_var_138;
  int32_t local_var_134;
  int64_t *plStack_130;
  void *plocal_var_e8;
  int8_t *plocal_var_e0;
  int32_t local_var_d8;
  int8_t stack_array_d0 [136];
  uint64_t local_var_48;
  local_var_1a8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_338;
  local_var_268 = 0;
  iVar13 = 1;
  lVar7 = *param_3;
  if (*(char *)(lVar7 + 0x355) != '\0') {
    uVar9 = (uint)*(byte *)(lVar7 + 0x335);
    if ((int)*(uint *)(lVar7 + 0x35c) < (int)(uint)*(byte *)(lVar7 + 0x335)) {
      uVar9 = *(uint *)(lVar7 + 0x35c);
    }
    iVar13 = uVar9 - 4;
    if (iVar13 < 0) {
      iVar13 = 1;
    }
  }
  local_var_258 = 1;
  local_var_24c = 0;
  local_var_244 = 0;
  local_var_238 = 0;
  local_var_230 = 0xffffffff;
  local_var_22c = 0;
  uVar9 = (uint)(*(ushort *)(*param_3 + 0x32c) >> 2);
  local_var_278 = CONCAT44(local_var_278._4_4_,uVar9);
  uVar3 = *(ushort *)(*param_3 + 0x32e) >> 2;
  local_var_270 = (uint64_t)uVar3;
  local_var_260 = (uint64_t)CONCAT24(uVar3,uVar9);
  _iStack_254 = CONCAT44(0x33,iVar13);
  local_var_240 = 0x1000001;
  plStack_2d8 = param_4;
  plStack_1b8 = param_3;
  plStack_1b0 = param_2;
  plStack_1a0 = param_2;
  plStack_198 = param_3;
  plStack_190 = param_4;
  uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3b0,0x10,3);
  plVar5 = (int64_t *)RenderingSystem_23A2E0(uVar4,1);
  plStack_228 = plVar5;
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  function_0a5750(plVar5 + 0x1a,&local_var_260);
  (**(code **)(plVar5[2] + 0x10))(plVar5 + 2,&processed_var_4712_ptr);
  *(int16_t *)((int64_t)plVar5 + 0x32c) = (int16_t)local_var_260;
  *(int16_t *)((int64_t)plVar5 + 0x32e) = local_var_260._4_2_;
  *(int16_t *)((int64_t)plVar5 + 0x332) = 1;
  *(char *)((int64_t)plVar5 + 0x335) = (char)iVar13;
  *(int *)((int64_t)plVar5 + 0x35c) = iVar13;
  *(int32_t *)((int64_t)plVar5 + 0x324) = 0x33;
  plocal_var_2e0 = &local_var_2d0;
  local_var_2d0 = (uint64_t)CONCAT24(uVar3,uVar9);
  local_var_2c8 = 1;
  local_var_2c0 = 0x33;
  local_var_2bc = 0;
  local_var_2b8 = 0;
  local_var_2b4 = 0;
  local_var_2b0 = 0x1000001;
  plStack_2a8 = (int64_t *)0x0;
  local_var_2a0 = 0xffffffff;
  local_var_29c = 0;
  iStack_2c4 = iVar13;
  function_0a5110(system_message_buffer,&local_var_2d0,plVar5);
  plocal_var_298 = (void *)0x0;
  local_var_290 = (int32_t *)((uint64_t)local_var_290._6_2_ << 0x30);
  plocal_var_188 = &memory_allocator_3432_ptr;
  plocal_var_180 = stack_array_170;
  stack_array_170[0] = stack_array_170[0] & 0xffffff00;
  local_var_178 = 0xd;
  strcpy_s(stack_array_170,0x80,&processed_var_4760_ptr);
  plVar6 = (int64_t *)SystemCore_EncryptionManager(system_resource_state,&plocal_var_2e0,&plocal_var_188,1);
  plocal_var_218 = (void *)*plVar6;
  if (plocal_var_2e0 != (uint64_t *)0x0) {
    (**(code **)(*plocal_var_2e0 + 0x38))();
  }
  plStack_1f8 = (int64_t *)0x0;
  plocal_var_1f0 = &system_data_buffer_ptr;
  local_var_1d8 = 0;
  lStack_1e8 = 0;
  local_var_1e0 = 0;
  plStack_1c0 = (int64_t *)0x0;
  plocal_var_210 = plocal_var_298;
  local_var_208 = (int64_t)local_var_290;
  lVar7 = local_var_208;
  local_var_200 = 2;
  local_var_1d0 = 0;
  local_var_1c8 = 0;
  uVar4 = *(uint64_t *)(plocal_var_218 + 0x15b8);
  pplocal_var_220 = &plocal_var_188;
  local_var_208._0_4_ = SUB84(local_var_290,0);
  local_var_208._4_4_ = (int32_t)((uint64_t)local_var_290 >> 0x20);
  plocal_var_180 = (uint *)plocal_var_298;
  local_var_178 = (int32_t)local_var_208;
  local_var_174 = local_var_208._4_4_;
  stack_array_170[0] = 2;
  local_var_168 = 0;
  local_var_208 = lVar7;
  plocal_var_188 = plocal_var_218;
  CoreEngineDataTransformer(stack_array_160,&plocal_var_1f0);
  local_var_140 = (int32_t)local_var_1d0;
  local_var_13c = local_var_1d0._4_4_;
  local_var_138 = (int32_t)local_var_1c8;
  local_var_134 = local_var_1c8._4_4_;
  plStack_130 = plStack_1c0;
  if (plStack_1c0 != (int64_t *)0x0) {
    (**(code **)(*plStack_1c0 + 0x28))();
  }
  lVar7 = UIRenderingEngine(uVar4,0,&plocal_var_188,stack_array_2e8);
  iVar11 = 0;
  if (0 < iVar13) {
    uVar9 = (uint)local_var_278;
    do {
      iVar10 = iVar11;
      if (iVar13 == 1) {
        iVar10 = -1;
      }
      local_var_318._0_4_ = iVar10;
      RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0,*param_3,0x20);
      local_var_310 = CONCAT31(local_var_310._1_3_,1);
      local_var_318 = CONCAT44(local_var_318._4_4_,iVar10);
      CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),2,1,plVar5);
      lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
      if ((lVar7 != 0) && (*(int64_t *)(lVar1 + 0x82a0) != (int64_t)**(int **)(lVar7 + 0x10))) {
        (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x228))
                  (*(int64_t **)(lVar1 + 0x8400),*(uint64_t *)(*(int **)(lVar7 + 0x10) + 6),0,0);
        *(int64_t *)(lVar1 + 0x82a0) = (int64_t)**(int **)(lVar7 + 0x10);
      }
      plVar6 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
      (**(code **)(*plVar6 + 0x148))
                (plVar6,(uVar9 >> ((byte)iVar11 & 0x1f)) >> 2,
                 ((uint)local_var_270 >> ((byte)iVar11 & 0x1f)) >> 2,1);
      lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
      if (((*(int64_t *)(lVar1 + 0x8438) != 0) || (*(int *)(lVar1 + 0x8838) != -1)) ||
         (*(int *)(lVar1 + 0x8a38) != 0x20)) {
        plocal_var_2e0 = (uint64_t *)0x0;
        (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x218))
                  (*(int64_t **)(lVar1 + 0x8400),0,1,&plocal_var_2e0);
        *(uint64_t *)(lVar1 + 0x8438) = 0;
        *(int32_t *)(lVar1 + 0x8838) = 0xffffffff;
        *(int32_t *)(lVar1 + 0x8a38) = 0x20;
        *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
      }
      local_var_278 = 0;
      plVar6 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
      local_var_318 = 0;
      (**(code **)(*plVar6 + 0x220))(plVar6,2,1,&local_var_278);
      iVar11 = iVar11 + 1;
      param_4 = plStack_2d8;
    } while (iVar11 < iVar13);
  }
  if (*param_4 == 0) {
    local_var_2c8 = 1;
    local_var_2bc = 0;
    local_var_2b8 = 0;
    local_var_2b4 = 0;
    local_var_2b0 = 1;
    plStack_2d8 = (int64_t *)0x0;
    plStack_2a8 = (int64_t *)0x0;
    local_var_29c = 0;
    lVar7 = *param_3;
    local_var_2d0 = (uint64_t)
                 CONCAT24(*(int16_t *)(lVar7 + 0x32e),(uint)*(ushort *)(lVar7 + 0x32c));
    local_var_2c0 = 0xe;
    local_var_2a0 = *(int32_t *)(lVar7 + 0x1e8);
    plocal_var_298 = &system_data_buffer_ptr;
    local_var_280 = 0;
    local_var_290 = (int32_t *)0x0;
    local_var_288 = 0;
    iStack_2c4 = iVar13;
    puVar8 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar8 = 0;
    local_var_290 = puVar8;
    uVar9 = CoreEngineSystemCleanup(puVar8);
    *puVar8 = 0x5f747864;
    *(int8_t *)(puVar8 + 1) = 0;
    local_var_288 = 4;
    lVar7 = *param_3;
    iVar11 = *(int *)(lVar7 + 0x20);
    local_var_280._0_4_ = uVar9;
    if (0 < iVar11) {
      if ((iVar11 != -4) && (uVar9 < iVar11 + 5U)) {
        local_var_318 = CONCAT71(local_var_318._1_7_,0x13);
        puVar8 = (int32_t *)DataValidator(system_memory_pool_ptr,puVar8,iVar11 + 5U,0x10);
        local_var_290 = puVar8;
        local_var_280._0_4_ = CoreEngineSystemCleanup(puVar8);
      }
// WARNING: Subroutine does not return
      memcpy(puVar8 + 1,*(uint64_t *)(lVar7 + 0x18),(int64_t)(*(int *)(lVar7 + 0x20) + 1));
    }
    plocal_var_e8 = &memory_allocator_3432_ptr;
    plocal_var_e0 = stack_array_d0;
    stack_array_d0[0] = 0;
    local_var_d8 = 4;
    puVar12 = (int32_t *)&system_buffer_ptr;
    if (puVar8 != (int32_t *)0x0) {
      puVar12 = puVar8;
    }
    uVar14 = strcpy_s(stack_array_d0,0x80,puVar12);
    plVar6 = (int64_t *)function_0b2450(uVar14,&plocal_var_2e0,&plocal_var_e8,&local_var_2d0);
    lVar7 = *plVar6;
    *plVar6 = 0;
    plStack_2d8 = (int64_t *)*param_4;
    *param_4 = lVar7;
    if (plStack_2d8 != (int64_t *)0x0) {
      (**(code **)(*plStack_2d8 + 0x38))();
    }
    if (plocal_var_2e0 != (uint64_t *)0x0) {
      (**(code **)(*plocal_var_2e0 + 0x38))();
    }
    plocal_var_e8 = &system_state_ptr;
    plocal_var_298 = &system_data_buffer_ptr;
    if (puVar8 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar8);
    }
    local_var_290 = (int32_t *)0x0;
    local_var_280 = (uint64_t)local_var_280._4_4_ << 0x20;
    plocal_var_298 = &system_state_ptr;
    if (plStack_2a8 != (int64_t *)0x0) {
      (**(code **)(*plStack_2a8 + 0x38))();
    }
  }
  iVar11 = 0;
  if (0 < iVar13) {
    do {
      plVar5 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
      pcVar2 = *(code **)(*plVar5 + 0x170);
      lVar7 = SystemCore_Scheduler(plStack_228);
      uVar4 = *(uint64_t *)(lVar7 + 8);
      lVar7 = SystemCore_Scheduler();
      local_var_2f8 = 0;
      local_var_310 = 0;
      local_var_318 = local_var_318 & 0xffffffff00000000;
      local_var_308 = uVar4;
      iStack_300 = iVar11;
      (*pcVar2)(plVar5,*(uint64_t *)(lVar7 + 8),iVar11,0);
      iVar11 = iVar11 + 1;
      plVar5 = plStack_228;
    } while (iVar11 < iVar13);
  }
  plVar6 = plStack_1b8;
  *(int32_t *)(*param_4 + 0x328) = *(int32_t *)(*plStack_1b8 + 0x328);
  *plStack_1b0 = *param_4;
  *param_4 = 0;
  local_var_268 = 1;
  if (plStack_1c0 != (int64_t *)0x0) {
    (**(code **)(*plStack_1c0 + 0x38))();
  }
  pplocal_var_220 = &plocal_var_1f0;
  plocal_var_1f0 = &system_data_buffer_ptr;
  if (lStack_1e8 == 0) {
    lStack_1e8 = 0;
    local_var_1d8 = local_var_1d8 & 0xffffffff00000000;
    plocal_var_1f0 = &system_state_ptr;
    if (plStack_1f8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1f8 + 0x38))();
    }
    (**(code **)(*plVar5 + 0x38))(plVar5);
    if ((int64_t *)*plVar6 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar6 + 0x38))();
    }
    if ((int64_t *)*param_4 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*param_4 + 0x38))();
    }
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_338);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}