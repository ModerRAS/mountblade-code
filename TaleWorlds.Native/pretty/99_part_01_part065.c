#include "ultra_high_freq_fun_definitions.h"

// $fun 的语义化别名
#define $alias_name $fun

/* 函数别名定义: DataStructureManager */
#define DataStructureManager DataStructureManager


/* 函数别名定义: RenderingEngineCore */
#define RenderingEngineCore RenderingEngineCore



// 99_part_01_part065.c - 2 个函数

// 函数: void FUN_1800e3700(uint64_t param_1,int64_t param_2)
void FUN_1800e3700(uint64_t param_1,int64_t param_2)

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
  int8_t auStack_1e8 [32];
  uint64_t uStack_1c8;
  void **ppuStack_1b8;
  int8_t auStack_1b0 [8];
  void **ppuStack_1a8;
  uint64_t uStack_1a0;
  uint64_t uStack_198;
  int32_t uStack_190;
  int16_t uStack_18c;
  int16_t uStack_18a;
  uint64_t auStack_188 [2];
  void *puStack_178;
  uint64_t uStack_170;
  uint64_t uStack_168;
  int32_t uStack_160;
  int64_t *plStack_158;
  void *puStack_150;
  int64_t lStack_148;
  int32_t uStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  int64_t *plStack_120;
  uint64_t uStack_118;
  void *puStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  int32_t uStack_f8;
  uint64_t uStack_f0;
  int8_t auStack_e8 [32];
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  int64_t *plStack_b8;
  void *puStack_a8;
  int8_t *puStack_a0;
  int32_t uStack_98;
  int8_t auStack_90 [72];
  uint64_t uStack_48;
  
  uStack_118 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1e8;
  lVar13 = param_2;
  lVar10 = func_0x0001800e2bf0();
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
    SystemData_Processor(auStack_1b0,&processed_var_4728_ptr);
    ppuStack_1b8 = &puStack_a8;
    ppuVar12 = (void **)0x0;
    puStack_a8 = &memory_allocator_3480_ptr;
    puStack_a0 = auStack_90;
    uStack_98 = 0;
    auStack_90[0] = 0;
    DataStructureManager0(&puStack_a8,&processed_var_4728_ptr);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&puStack_a8);
    lVar10 = system_message_buffer;
    FUN_180094120(param_2 + 0x12a40,*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1e10);
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
    FUN_180094120((uint64_t *)(param_2 + 0x12a00),*(int64_t *)(lVar10 + 0x1cd8) + 0x1e90);
    *(int32_t *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x1ed0) = *(int32_t *)(param_2 + 0x11c20);
    *(int32_t *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x1ed4) = *(int32_t *)(param_2 + 0x11c24);
    *(int32_t *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x1ed8) = *(int32_t *)(param_2 + 0x124c0);
    *(int32_t *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x1edc) = *(int32_t *)(param_2 + 0x124bc);
    *(int32_t *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x1ee0) = *(int32_t *)(param_2 + 0x3510);
    uVar17 = *(int32_t *)(param_2 + 0x124b8);
    *(int32_t *)(*(int64_t *)(lVar10 + 0x1cd8) + 0x1ee4) = uVar17;
    lVar13 = system_system_data_memory;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_18c = 0;
    if (*(int64_t *)(system_system_data_memory + 0x3e0) == 0) {
      puVar11 = (uint64_t *)FUN_18009e9e0(uVar17,&ppuStack_1a8,&processed_var_832_ptr);
      uVar15 = *puVar11;
      *puVar11 = 0;
      ppuStack_1b8 = *(void ***)(lVar13 + 0x3e0);
      *(uint64_t *)(lVar13 + 0x3e0) = uVar15;
      if (ppuStack_1b8 != (void **)0x0) {
        (**(code **)(*ppuStack_1b8 + 0x38))();
      }
      if (ppuStack_1a8 != (void **)0x0) {
        (**(code **)(*ppuStack_1a8 + 0x38))();
      }
    }
    puStack_178 = *(void **)(lVar13 + 0x3e0);
    plStack_158 = (int64_t *)0x0;
    puStack_150 = &system_data_buffer_ptr;
    uStack_138 = 0;
    lStack_148 = 0;
    uStack_140 = 0;
    plStack_120 = (int64_t *)0x0;
    uStack_168 = CONCAT26(uStack_18a,CONCAT24(uStack_18c,uStack_190));
    uStack_170 = uStack_198;
    uStack_160 = 2;
    uStack_130 = 0;
    uStack_128 = 0;
    uVar15 = *(uint64_t *)(puStack_178 + 0x15b8);
    ppuStack_1b8 = &puStack_110;
    uStack_108 = uStack_198;
    uStack_f8 = 2;
    uStack_f0 = 0;
    puStack_110 = puStack_178;
    uStack_100 = uStack_168;
    CoreEngineDataTransformer(auStack_e8,&puStack_150);
    uStack_c8 = uStack_130;
    uStack_c0 = uStack_128;
    plStack_b8 = plStack_120;
    if (plStack_120 != (int64_t *)0x0) {
      (**(code **)(*plStack_120 + 0x28))();
    }
    lVar10 = UIRenderingEngine(uVar15,param_2,&puStack_110,auStack_1b0);
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if ((lVar10 != 0) && (*(int64_t *)(lVar13 + 0x82a0) != (int64_t)**(int **)(lVar10 + 0x10))) {
      (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 0x228))
                (*(int64_t **)(lVar13 + 0x8400),*(uint64_t *)(*(int **)(lVar10 + 0x10) + 6),0,0);
      *(int64_t *)(lVar13 + 0x82a0) = (int64_t)**(int **)(lVar10 + 0x10);
    }
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    auStack_188[0] = 0;
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 200))
              (*(int64_t **)(lVar13 + 0x8400),0x49,1,auStack_188);
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 0x40))
              (*(int64_t **)(lVar13 + 0x8400),0x49,1,auStack_188);
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 0x218))
              (*(int64_t **)(lVar13 + 0x8400),0x49,1,auStack_188);
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    uStack_1a0 = 0;
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 200))
              (*(int64_t **)(lVar13 + 0x8400),0x52,1,&uStack_1a0);
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 0x40))
              (*(int64_t **)(lVar13 + 0x8400),0x52,1,&uStack_1a0);
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 0x218))
              (*(int64_t **)(lVar13 + 0x8400),0x52,1,&uStack_1a0);
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    uStack_198 = 0;
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 200))
              (*(int64_t **)(lVar13 + 0x8400),0x50,1,&uStack_198);
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 0x40))
              (*(int64_t **)(lVar13 + 0x8400),0x50,1,&uStack_198);
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 0x218))
              (*(int64_t **)(lVar13 + 0x8400),0x50,1,&uStack_198);
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    ppuStack_1a8 = (void **)0x0;
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 200))
              (*(int64_t **)(lVar13 + 0x8400),0x51,1,&ppuStack_1a8);
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 0x40))
              (*(int64_t **)(lVar13 + 0x8400),0x51,1,&ppuStack_1a8);
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 0x218))
              (*(int64_t **)(lVar13 + 0x8400),0x51,1,&ppuStack_1a8);
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    ppuStack_1b8 = (void **)0x0;
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 200))
              (*(int64_t **)(lVar13 + 0x8400),0x5a,1,&ppuStack_1b8);
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 0x40))
              (*(int64_t **)(lVar13 + 0x8400),0x5a,1,&ppuStack_1b8);
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 0x218))
              (*(int64_t **)(lVar13 + 0x8400),0x5a,1,&ppuStack_1b8);
    lVar13 = system_message_buffer;
    *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83b8) = 0;
    *(uint64_t *)(*(int64_t *)(lVar13 + 0x1cd8) + 0x83f0) = 0;
    SystemCore_ProcessorEx(*(uint64_t *)(lVar13 + 0x1cd8),1);
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar10 = *(int64_t *)(param_2 + 0x9730);
    ppuStack_1b8 = ppuVar12;
    if (lVar10 != 0) {
      *(int32_t *)(lVar10 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
      ppuStack_1b8 = *(void ***)(lVar10 + 0x20);
    }
    plVar1 = *(int64_t **)(lVar13 + 0x8400);
    uStack_1c8 = 0;
    (**(code **)(*plVar1 + 0x220))(plVar1,1,1,&ppuStack_1b8);
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar10 = *(int64_t *)(param_2 + 0x9830);
    ppuStack_1b8 = ppuVar12;
    if (lVar10 != 0) {
      *(int32_t *)(lVar10 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
      ppuStack_1b8 = *(void ***)(lVar10 + 0x20);
    }
    plVar1 = *(int64_t **)(lVar13 + 0x8400);
    uStack_1c8 = 0;
    (**(code **)(*plVar1 + 0x220))(plVar1,2,1,&ppuStack_1b8);
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar10 = *(int64_t *)(param_2 + 0x9838);
    ppuStack_1b8 = ppuVar12;
    if (lVar10 != 0) {
      *(int32_t *)(lVar10 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
      ppuStack_1b8 = *(void ***)(lVar10 + 0x20);
    }
    plVar1 = *(int64_t **)(lVar13 + 0x8400);
    uStack_1c8 = 0;
    (**(code **)(*plVar1 + 0x220))(plVar1,3,1,&ppuStack_1b8);
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar10 = *(int64_t *)(param_2 + 0x9738);
    ppuStack_1b8 = ppuVar12;
    if (lVar10 != 0) {
      *(int32_t *)(lVar10 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
      ppuStack_1b8 = *(void ***)(lVar10 + 0x20);
    }
    plVar1 = *(int64_t **)(lVar13 + 0x8400);
    uStack_1c8 = 0;
    (**(code **)(*plVar1 + 0x220))(plVar1,4,1,&ppuStack_1b8);
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    uVar15 = *(uint64_t *)(system_message_buffer + 0x1cc0);
    UltraHighFreq_DatabaseHandler1(lVar13,uVar15,lVar13 + 0x1e10,0xe0);
    FUN_18029dca0(lVar13,0xb,0x20,uVar15);
    lVar8 = system_main_module_state;
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar10 = *(int64_t *)(param_2 + 0x9720);
    ppuStack_1b8 = ppuVar12;
    if ((lVar10 != 0) &&
       (*(int32_t *)(lVar10 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar10 != -0x10))
    {
      *(int32_t *)(lVar10 + 0x16c) = *(int32_t *)(lVar8 + 0x224);
      ppuStack_1b8 = *(void ***)(lVar10 + 0x18);
    }
    plVar1 = *(int64_t **)(lVar13 + 0x8400);
    (**(code **)(*plVar1 + 0x218))(plVar1,0,1,&ppuStack_1b8);
    lVar8 = system_main_module_state;
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar10 = *(int64_t *)(param_2 + 0x9828);
    ppuStack_1a8 = ppuVar12;
    if ((lVar10 != 0) &&
       (*(int32_t *)(lVar10 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar10 != -0x10))
    {
      *(int32_t *)(lVar10 + 0x16c) = *(int32_t *)(lVar8 + 0x224);
      ppuStack_1a8 = *(void ***)(lVar10 + 0x18);
    }
    plVar1 = *(int64_t **)(lVar13 + 0x8400);
    (**(code **)(*plVar1 + 0x218))(plVar1,1,1,&ppuStack_1a8);
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
    ppuStack_1b8 = ppuVar12;
    (**(code **)(*plVar1 + 0x218))(plVar1,2,1,&ppuStack_1b8);
    lVar13 = SystemLog_Manager(param_2);
    if (*(int *)(lVar13 + 0x160) == 5) {
      uStack_1c8 = CONCAT44(uStack_1c8._4_4_,*(int32_t *)(param_2 + 0x357c));
      uVar15 = *(uint64_t *)(system_message_buffer + 0x1cd8);
    }
    else {
      uStack_1c8 = CONCAT44(uStack_1c8._4_4_,0xffffffff);
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
    ppuStack_1b8 = (void **)0x0;
    plVar1 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    (**(code **)(*plVar1 + 0x218))(plVar1,0,1,&ppuStack_1b8);
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (((*(int64_t *)(lVar13 + 0x8440) != 0) || (*(int *)(lVar13 + 0x883c) != -1)) ||
       (*(int *)(lVar13 + 0x8a3c) != 0x20)) {
      ppuStack_1a8 = (void **)0x0;
      (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 0x218))
                (*(int64_t **)(lVar13 + 0x8400),1,1,&ppuStack_1a8);
      *(uint64_t *)(lVar13 + 0x8440) = 0;
      *(int32_t *)(lVar13 + 0x883c) = 0xffffffff;
      *(int32_t *)(lVar13 + 0x8a3c) = 0x20;
      *(int *)(lVar13 + 0x82b4) = *(int *)(lVar13 + 0x82b4) + 1;
    }
    uStack_198 = 0;
    plVar1 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    (**(code **)(*plVar1 + 0x218))(plVar1,2,1,&uStack_198);
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (((*(int64_t *)(lVar13 + 0x8450) != 0) || (*(int *)(lVar13 + 0x8844) != -1)) ||
       (*(int *)(lVar13 + 0x8a44) != 0x20)) {
      uStack_1a0 = 0;
      (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 0x218))
                (*(int64_t **)(lVar13 + 0x8400),3,1,&uStack_1a0);
      *(uint64_t *)(lVar13 + 0x8450) = 0;
      *(int32_t *)(lVar13 + 0x8844) = 0xffffffff;
      *(int32_t *)(lVar13 + 0x8a44) = 0x20;
      *(int *)(lVar13 + 0x82b4) = *(int *)(lVar13 + 0x82b4) + 1;
    }
    ppuStack_1b8 = (void **)0x0;
    plVar1 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    uStack_1c8 = 0;
    (**(code **)(*plVar1 + 0x220))(plVar1,1,1,&ppuStack_1b8);
    ppuStack_1b8 = (void **)0x0;
    plVar1 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    uStack_1c8 = 0;
    (**(code **)(*plVar1 + 0x220))(plVar1,2,1,&ppuStack_1b8);
    ppuStack_1b8 = (void **)0x0;
    plVar1 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    uStack_1c8 = 0;
    (**(code **)(*plVar1 + 0x220))(plVar1,3,1,&ppuStack_1b8);
    ppuStack_1b8 = (void **)0x0;
    plVar1 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    uStack_1c8 = 0;
    (**(code **)(*plVar1 + 0x220))(plVar1,4,1,&ppuStack_1b8);
    if (plStack_120 != (int64_t *)0x0) {
      (**(code **)(*plStack_120 + 0x38))();
    }
    ppuStack_1b8 = &puStack_150;
    puStack_150 = &system_data_buffer_ptr;
    if (lStack_148 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_148 = 0;
    uStack_138 = uStack_138 & 0xffffffff00000000;
    puStack_150 = &system_state_ptr;
    if (plStack_158 != (int64_t *)0x0) {
      (**(code **)(*plStack_158 + 0x38))();
    }
    SystemCore_Synchronizer(&puStack_a8);
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
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_1e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800e44b0(uint64_t param_1,int64_t *param_2,int64_t *param_3,int64_t *param_4)
void FUN_1800e44b0(uint64_t param_1,int64_t *param_2,int64_t *param_3,int64_t *param_4)

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
  int8_t auStack_338 [32];
  uint64_t uStack_318;
  int32_t uStack_310;
  uint64_t uStack_308;
  int iStack_300;
  uint64_t uStack_2f8;
  int8_t auStack_2e8 [8];
  uint64_t *puStack_2e0;
  int64_t *plStack_2d8;
  uint64_t uStack_2d0;
  int32_t uStack_2c8;
  int iStack_2c4;
  int32_t uStack_2c0;
  int32_t uStack_2bc;
  int32_t uStack_2b8;
  int32_t uStack_2b4;
  int32_t uStack_2b0;
  int64_t *plStack_2a8;
  int32_t uStack_2a0;
  int8_t uStack_29c;
  void *puStack_298;
  uint64_t uStack_290;
  int32_t uStack_288;
  uint64_t uStack_280;
  uint64_t uStack_278;
  uint64_t uStack_270;
  int32_t uStack_268;
  uint64_t uStack_260;
  int32_t uStack_258;
  int iStack_254;
  int32_t uStack_250;
  uint64_t uStack_24c;
  int32_t uStack_244;
  int32_t uStack_240;
  uint64_t uStack_238;
  int32_t uStack_230;
  int8_t uStack_22c;
  int64_t *plStack_228;
  void **ppuStack_220;
  void *puStack_218;
  void *puStack_210;
  uint64_t uStack_208;
  int32_t uStack_200;
  int64_t *plStack_1f8;
  void *puStack_1f0;
  int64_t lStack_1e8;
  int32_t uStack_1e0;
  uint64_t uStack_1d8;
  uint64_t uStack_1d0;
  uint64_t uStack_1c8;
  int64_t *plStack_1c0;
  int64_t *plStack_1b8;
  int64_t *plStack_1b0;
  uint64_t uStack_1a8;
  int64_t *plStack_1a0;
  int64_t *plStack_198;
  int64_t *plStack_190;
  void *puStack_188;
  uint *puStack_180;
  int32_t uStack_178;
  int32_t uStack_174;
  uint auStack_170 [2];
  uint64_t uStack_168;
  int8_t auStack_160 [32];
  int32_t uStack_140;
  int32_t uStack_13c;
  int32_t uStack_138;
  int32_t uStack_134;
  int64_t *plStack_130;
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [136];
  uint64_t uStack_48;
  
  uStack_1a8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_338;
  uStack_268 = 0;
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
  uStack_258 = 1;
  uStack_24c = 0;
  uStack_244 = 0;
  uStack_238 = 0;
  uStack_230 = 0xffffffff;
  uStack_22c = 0;
  uVar9 = (uint)(*(ushort *)(*param_3 + 0x32c) >> 2);
  uStack_278 = CONCAT44(uStack_278._4_4_,uVar9);
  uVar3 = *(ushort *)(*param_3 + 0x32e) >> 2;
  uStack_270 = (uint64_t)uVar3;
  uStack_260 = (uint64_t)CONCAT24(uVar3,uVar9);
  _iStack_254 = CONCAT44(0x33,iVar13);
  uStack_240 = 0x1000001;
  plStack_2d8 = param_4;
  plStack_1b8 = param_3;
  plStack_1b0 = param_2;
  plStack_1a0 = param_2;
  plStack_198 = param_3;
  plStack_190 = param_4;
  uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3b0,0x10,3);
  plVar5 = (int64_t *)FUN_18023a2e0(uVar4,1);
  plStack_228 = plVar5;
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  FUN_1800a5750(plVar5 + 0x1a,&uStack_260);
  (**(code **)(plVar5[2] + 0x10))(plVar5 + 2,&processed_var_4712_ptr);
  *(int16_t *)((int64_t)plVar5 + 0x32c) = (int16_t)uStack_260;
  *(int16_t *)((int64_t)plVar5 + 0x32e) = uStack_260._4_2_;
  *(int16_t *)((int64_t)plVar5 + 0x332) = 1;
  *(char *)((int64_t)plVar5 + 0x335) = (char)iVar13;
  *(int *)((int64_t)plVar5 + 0x35c) = iVar13;
  *(int32_t *)((int64_t)plVar5 + 0x324) = 0x33;
  puStack_2e0 = &uStack_2d0;
  uStack_2d0 = (uint64_t)CONCAT24(uVar3,uVar9);
  uStack_2c8 = 1;
  uStack_2c0 = 0x33;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  uStack_2b0 = 0x1000001;
  plStack_2a8 = (int64_t *)0x0;
  uStack_2a0 = 0xffffffff;
  uStack_29c = 0;
  iStack_2c4 = iVar13;
  FUN_1800a5110(system_message_buffer,&uStack_2d0,plVar5);
  puStack_298 = (void *)0x0;
  uStack_290 = (int32_t *)((uint64_t)uStack_290._6_2_ << 0x30);
  puStack_188 = &memory_allocator_3432_ptr;
  puStack_180 = auStack_170;
  auStack_170[0] = auStack_170[0] & 0xffffff00;
  uStack_178 = 0xd;
  strcpy_s(auStack_170,0x80,&processed_var_4760_ptr);
  plVar6 = (int64_t *)SystemCore_EncryptionManager(system_resource_state,&puStack_2e0,&puStack_188,1);
  puStack_218 = (void *)*plVar6;
  if (puStack_2e0 != (uint64_t *)0x0) {
    (**(code **)(*puStack_2e0 + 0x38))();
  }
  plStack_1f8 = (int64_t *)0x0;
  puStack_1f0 = &system_data_buffer_ptr;
  uStack_1d8 = 0;
  lStack_1e8 = 0;
  uStack_1e0 = 0;
  plStack_1c0 = (int64_t *)0x0;
  puStack_210 = puStack_298;
  uStack_208 = (int64_t)uStack_290;
  lVar7 = uStack_208;
  uStack_200 = 2;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uVar4 = *(uint64_t *)(puStack_218 + 0x15b8);
  ppuStack_220 = &puStack_188;
  uStack_208._0_4_ = SUB84(uStack_290,0);
  uStack_208._4_4_ = (int32_t)((uint64_t)uStack_290 >> 0x20);
  puStack_180 = (uint *)puStack_298;
  uStack_178 = (int32_t)uStack_208;
  uStack_174 = uStack_208._4_4_;
  auStack_170[0] = 2;
  uStack_168 = 0;
  uStack_208 = lVar7;
  puStack_188 = puStack_218;
  CoreEngineDataTransformer(auStack_160,&puStack_1f0);
  uStack_140 = (int32_t)uStack_1d0;
  uStack_13c = uStack_1d0._4_4_;
  uStack_138 = (int32_t)uStack_1c8;
  uStack_134 = uStack_1c8._4_4_;
  plStack_130 = plStack_1c0;
  if (plStack_1c0 != (int64_t *)0x0) {
    (**(code **)(*plStack_1c0 + 0x28))();
  }
  lVar7 = UIRenderingEngine(uVar4,0,&puStack_188,auStack_2e8);
  iVar11 = 0;
  if (0 < iVar13) {
    uVar9 = (uint)uStack_278;
    do {
      iVar10 = iVar11;
      if (iVar13 == 1) {
        iVar10 = -1;
      }
      uStack_318._0_4_ = iVar10;
      RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0,*param_3,0x20);
      uStack_310 = CONCAT31(uStack_310._1_3_,1);
      uStack_318 = CONCAT44(uStack_318._4_4_,iVar10);
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
                 ((uint)uStack_270 >> ((byte)iVar11 & 0x1f)) >> 2,1);
      lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
      if (((*(int64_t *)(lVar1 + 0x8438) != 0) || (*(int *)(lVar1 + 0x8838) != -1)) ||
         (*(int *)(lVar1 + 0x8a38) != 0x20)) {
        puStack_2e0 = (uint64_t *)0x0;
        (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x218))
                  (*(int64_t **)(lVar1 + 0x8400),0,1,&puStack_2e0);
        *(uint64_t *)(lVar1 + 0x8438) = 0;
        *(int32_t *)(lVar1 + 0x8838) = 0xffffffff;
        *(int32_t *)(lVar1 + 0x8a38) = 0x20;
        *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
      }
      uStack_278 = 0;
      plVar6 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
      uStack_318 = 0;
      (**(code **)(*plVar6 + 0x220))(plVar6,2,1,&uStack_278);
      iVar11 = iVar11 + 1;
      param_4 = plStack_2d8;
    } while (iVar11 < iVar13);
  }
  if (*param_4 == 0) {
    uStack_2c8 = 1;
    uStack_2bc = 0;
    uStack_2b8 = 0;
    uStack_2b4 = 0;
    uStack_2b0 = 1;
    plStack_2d8 = (int64_t *)0x0;
    plStack_2a8 = (int64_t *)0x0;
    uStack_29c = 0;
    lVar7 = *param_3;
    uStack_2d0 = (uint64_t)
                 CONCAT24(*(int16_t *)(lVar7 + 0x32e),(uint)*(ushort *)(lVar7 + 0x32c));
    uStack_2c0 = 0xe;
    uStack_2a0 = *(int32_t *)(lVar7 + 0x1e8);
    puStack_298 = &system_data_buffer_ptr;
    uStack_280 = 0;
    uStack_290 = (int32_t *)0x0;
    uStack_288 = 0;
    iStack_2c4 = iVar13;
    puVar8 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar8 = 0;
    uStack_290 = puVar8;
    uVar9 = CoreEngineSystemCleanup(puVar8);
    *puVar8 = 0x5f747864;
    *(int8_t *)(puVar8 + 1) = 0;
    uStack_288 = 4;
    lVar7 = *param_3;
    iVar11 = *(int *)(lVar7 + 0x20);
    uStack_280._0_4_ = uVar9;
    if (0 < iVar11) {
      if ((iVar11 != -4) && (uVar9 < iVar11 + 5U)) {
        uStack_318 = CONCAT71(uStack_318._1_7_,0x13);
        puVar8 = (int32_t *)DataValidator(system_memory_pool_ptr,puVar8,iVar11 + 5U,0x10);
        uStack_290 = puVar8;
        uStack_280._0_4_ = CoreEngineSystemCleanup(puVar8);
      }
                    // WARNING: Subroutine does not return
      memcpy(puVar8 + 1,*(uint64_t *)(lVar7 + 0x18),(int64_t)(*(int *)(lVar7 + 0x20) + 1));
    }
    puStack_e8 = &memory_allocator_3432_ptr;
    puStack_e0 = auStack_d0;
    auStack_d0[0] = 0;
    uStack_d8 = 4;
    puVar12 = (int32_t *)&system_buffer_ptr;
    if (puVar8 != (int32_t *)0x0) {
      puVar12 = puVar8;
    }
    uVar14 = strcpy_s(auStack_d0,0x80,puVar12);
    plVar6 = (int64_t *)FUN_1800b2450(uVar14,&puStack_2e0,&puStack_e8,&uStack_2d0);
    lVar7 = *plVar6;
    *plVar6 = 0;
    plStack_2d8 = (int64_t *)*param_4;
    *param_4 = lVar7;
    if (plStack_2d8 != (int64_t *)0x0) {
      (**(code **)(*plStack_2d8 + 0x38))();
    }
    if (puStack_2e0 != (uint64_t *)0x0) {
      (**(code **)(*puStack_2e0 + 0x38))();
    }
    puStack_e8 = &system_state_ptr;
    puStack_298 = &system_data_buffer_ptr;
    if (puVar8 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar8);
    }
    uStack_290 = (int32_t *)0x0;
    uStack_280 = (uint64_t)uStack_280._4_4_ << 0x20;
    puStack_298 = &system_state_ptr;
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
      uStack_2f8 = 0;
      uStack_310 = 0;
      uStack_318 = uStack_318 & 0xffffffff00000000;
      uStack_308 = uVar4;
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
  uStack_268 = 1;
  if (plStack_1c0 != (int64_t *)0x0) {
    (**(code **)(*plStack_1c0 + 0x38))();
  }
  ppuStack_220 = &puStack_1f0;
  puStack_1f0 = &system_data_buffer_ptr;
  if (lStack_1e8 == 0) {
    lStack_1e8 = 0;
    uStack_1d8 = uStack_1d8 & 0xffffffff00000000;
    puStack_1f0 = &system_state_ptr;
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
    SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_338);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}






