#include "ultra_high_freq_fun_definitions.h"
/* 函数别名定义: DataStructureManager */
#define DataStructureManager DataStructureManager
/* 函数别名定义: RenderingEngineCore */
#define RenderingEngineCore RenderingEngineCore
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part239.c - 2 个函数
// 函数: void function_4013a0(int64_t param_1,uint64_t param_2,int64_t param_3,int32_t param_4,
void function_4013a0(int64_t param_1,uint64_t param_2,int64_t param_3,int32_t param_4,
                  int32_t param_5)
{
  double dVar1;
  double dVar2;
  code *pcVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint uVar6;
  int32_t uVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  int64_t *plVar10;
  int64_t **pplVar11;
  int64_t **pplVar12;
  int64_t *plVar13;
  int iVar14;
  int64_t lVar15;
  void *puVar16;
  int64_t **pplVar17;
  int64_t *plVar18;
  uint64_t *puVar19;
  uint64_t uVar20;
  int8_t auVar21 [16];
  int8_t auVar22 [16];
  int32_t uVar23;
  int32_t uVar24;
  int8_t stack_array_278 [32];
  uint64_t local_var_258;
  char acStack_248 [8];
  int64_t **pplStack_240;
  int64_t *aplStack_238 [2];
  int64_t *plStack_228;
  uint64_t local_var_220;
  uint64_t local_var_218;
  int32_t local_var_210;
  int64_t *plStack_208;
  int64_t *plStack_200;
  int64_t lStack_1f8;
  int32_t local_var_1f0;
  uint64_t local_var_1e8;
  uint64_t local_var_1e0;
  uint64_t local_var_1d8;
  int64_t *plStack_1d0;
  int32_t stack_array_1c8 [2];
  int64_t *plStack_1c0;
  int64_t *plStack_1b8;
  int64_t *plStack_1b0;
  uint64_t local_var_1a8;
  int32_t local_var_1a0;
  int64_t *plStack_198;
  int64_t *plStack_190;
  int64_t lStack_188;
  int32_t local_var_180;
  uint64_t local_var_178;
  uint64_t local_var_170;
  uint64_t local_var_168;
  int64_t *plStack_160;
  uint64_t local_var_158;
  uint64_t local_var_150;
  int iStack_148;
  int32_t local_var_144;
  uint64_t local_var_140;
  uint64_t local_var_138;
  int32_t local_var_130;
  int32_t local_var_12c;
  uint64_t local_var_128;
  int64_t *plStack_120;
  uint64_t *plocal_var_118;
  uint64_t local_var_110;
  uint64_t stack_array_108 [2];
  int8_t stack_array_f8 [32];
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  int64_t *plStack_c8;
  int64_t *plStack_b8;
  int8_t *plocal_var_b0;
  int32_t local_var_a8;
  int8_t stack_array_a0 [72];
  uint64_t local_var_58;
  local_var_158 = 0xfffffffffffffffe;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_278;
  puVar16 = &system_buffer_ptr;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    puVar16 = *(void **)(param_1 + 0x18);
  }
  pplStack_240 = &plStack_b8;
  pplVar12 = (int64_t **)0x0;
  plStack_b8 = (int64_t *)&memory_allocator_3480_ptr;
  plocal_var_b0 = stack_array_a0;
  local_var_a8 = 0;
  stack_array_a0[0] = 0;
  stack_array_1c8[0] = param_4;
  if (puVar16 != (void *)0x0) {
    DataStructureManager0(&plStack_b8);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plStack_b8);
  }
  local_var_140 = &system_data_buffer_ptr;
  local_var_128 = 0;
  local_var_138 = (uint64_t *)0x0;
  local_var_130 = 0;
  puVar8 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  local_var_138 = puVar8;
  uVar6 = CoreMemoryPoolCleaner(puVar8);
  *puVar8 = 0x6f4e786674736f70;
  *(int32_t *)(puVar8 + 1) = 0x3a3a6564;
  *(int8_t *)((int64_t)puVar8 + 0xc) = 0;
  local_var_130 = 0xc;
  iVar14 = *(int *)(param_1 + 0x20);
  local_var_128._0_4_ = uVar6;
  if (0 < iVar14) {
    if ((iVar14 != -0xc) && (uVar6 < iVar14 + 0xdU)) {
      local_var_258 = CONCAT71(local_var_258._1_7_,0x13);
      puVar8 = (uint64_t *)DataValidator(system_memory_pool_ptr,puVar8,iVar14 + 0xdU,0x10);
      local_var_138 = puVar8;
      local_var_128._0_4_ = CoreMemoryPoolCleaner(puVar8);
      iVar14 = *(int *)(param_1 + 0x20);
    }
// WARNING: Subroutine does not return
    memcpy((int8_t *)((int64_t)puVar8 + 0xc),*(uint64_t *)(param_1 + 0x18),
           (int64_t)(iVar14 + 1));
  }
  puVar19 = (uint64_t *)&system_buffer_ptr;
  if (puVar8 != (uint64_t *)0x0) {
    puVar19 = puVar8;
  }
  SystemData_Processor(acStack_248,puVar19);
  lVar15 = system_message_buffer;
  *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83b8) = 0;
  *(uint64_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x83c0) = 0;
  *(uint64_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x83c8) = 0;
  *(uint64_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x83d0) = 0;
  uVar20 = SystemCore_ProcessorEx(*(uint64_t *)(lVar15 + 0x1cd8),4);
  local_var_150 = (int64_t *)0x0;
  iStack_148 = 0;
  local_var_144._0_2_ = 0;
  function_09e9e0(uVar20,aplStack_238,&rendering_buffer_2736_ptr);
  iVar14 = iStack_148;
  plStack_198 = (int64_t *)0x0;
  plStack_190 = (int64_t *)&system_data_buffer_ptr;
  local_var_178 = 0;
  lStack_188 = 0;
  local_var_180 = 0;
  plStack_160 = (int64_t *)0x0;
  plStack_1b8 = aplStack_238[0];
  uVar23 = (int32_t)local_var_150;
  uVar24 = local_var_150._4_4_;
  uVar7 = CONCAT22(local_var_144._2_2_,(int16_t)local_var_144);
  plStack_1b0 = local_var_150;
  local_var_1a8 = CONCAT44(uVar7,iStack_148);
  local_var_1a0 = 2;
  local_var_170 = 0;
  local_var_168 = 0;
  lVar15 = aplStack_238[0][0x2b7];
  pplStack_240 = &plStack_120;
  plStack_120 = aplStack_238[0];
  local_var_110 = local_var_1a8;
  stack_array_108[0] = CONCAT44(stack_array_108[0]._4_4_,2);
  stack_array_108[1] = 0;
  plocal_var_118 = (uint64_t *)plStack_1b0;
  SystemCore_NetworkHandler0(stack_array_f8,&plStack_190);
  local_var_d8 = local_var_170;
  local_var_d0 = local_var_168;
  plStack_c8 = plStack_160;
  if (plStack_160 != (int64_t *)0x0) {
    (**(code **)(*plStack_160 + 0x28))();
  }
  lVar9 = UIRenderingEngine(lVar15,param_3,&plStack_120,acStack_248);
  lVar15 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if ((lVar9 != 0) && (*(int64_t *)(lVar15 + 0x82a0) != (int64_t)**(int **)(lVar9 + 0x10))) {
    (**(code **)(**(int64_t **)(lVar15 + 0x8400) + 0x228))
              (*(int64_t **)(lVar15 + 0x8400),*(uint64_t *)(*(int **)(lVar9 + 0x10) + 6),0,0);
    *(int64_t *)(lVar15 + 0x82a0) = (int64_t)**(int **)(lVar9 + 0x10);
  }
  lVar15 = *(int64_t *)(system_message_buffer + 0x1c70);
  plVar10 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
  pcVar3 = *(code **)(*plVar10 + 0x238);
  *(int32_t *)(lVar15 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
  (*pcVar3)(plVar10,0,1,lVar15 + 0x10);
  lVar15 = *(int64_t *)(system_message_buffer + 0x1c88);
  plVar10 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
  pcVar3 = *(code **)(*plVar10 + 0x238);
  *(int32_t *)(lVar15 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
  (*pcVar3)(plVar10,2,1,lVar15 + 0x10);
  lVar15 = *(int64_t *)(system_message_buffer + 0x1cd8);
  lVar9 = *(int64_t *)(param_1 + 0x468);
  pplStack_240 = pplVar12;
  if (lVar9 != 0) {
    *(int32_t *)(lVar9 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    pplStack_240 = *(int64_t ***)(lVar9 + 0x20);
  }
  plVar10 = *(int64_t **)(lVar15 + 0x8400);
  local_var_258 = 0;
  (**(code **)(*plVar10 + 0x220))(plVar10,1,1,&pplStack_240);
  plVar10 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
  uVar20 = (**(code **)(*plVar10 + 0x148))(plVar10,1,1,1);
  function_09e9e0(uVar20,&plStack_1c0,&rendering_buffer_2712_ptr);
  plVar10 = plStack_1c0;
  if (*(float *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1750) != 0.0) {
    plStack_120 = (int64_t *)&processed_var_672_ptr;
    plocal_var_118 = stack_array_108;
    stack_array_108[0] = stack_array_108[0] & 0xffffffffffffff00;
    local_var_110 = CONCAT44((int)(local_var_110 >> 0x20),0x10);
    strcpy_s(stack_array_108,0x20,&rendering_buffer_2856_ptr);
    plVar10 = (int64_t *)SystemCore_LoggingSystem0(plVar10,&plStack_120,1);
    local_var_150._0_4_ = SUB84(plVar10,0);
    local_var_150._4_4_ = (int32_t)((uint64_t)plVar10 >> 0x20);
    uVar7 = CONCAT22(local_var_144._2_2_,(int16_t)local_var_144);
    uVar23 = (int32_t)local_var_150;
    uVar24 = local_var_150._4_4_;
    iVar14 = iStack_148;
    local_var_150 = plVar10;
  }
  plStack_208 = (int64_t *)0x0;
  plStack_200 = (int64_t *)&system_data_buffer_ptr;
  local_var_1e8 = 0;
  lStack_1f8 = 0;
  local_var_1f0 = 0;
  plStack_1d0 = (int64_t *)0x0;
  plStack_228 = plStack_1c0;
  local_var_220 = (int64_t *)CONCAT44(uVar24,uVar23);
  local_var_218 = CONCAT44(uVar7,iVar14);
  local_var_210 = 2;
  local_var_1e0 = 0;
  local_var_1d8 = 0;
  lVar15 = plStack_1c0[0x2b7];
  pplStack_240 = &plStack_120;
  plStack_120 = plStack_1c0;
  plocal_var_118 = (uint64_t *)local_var_220;
  local_var_110 = local_var_218;
  stack_array_108[0] = CONCAT44(stack_array_108[0]._4_4_,2);
  stack_array_108[1] = 0;
  SystemCore_NetworkHandler0(stack_array_f8,&plStack_200);
  local_var_d8 = local_var_1e0;
  local_var_d0 = local_var_1d8;
  plStack_c8 = plStack_1d0;
  if (plStack_1d0 != (int64_t *)0x0) {
    (**(code **)(*plStack_1d0 + 0x28))();
  }
  lVar9 = UIRenderingEngine(lVar15,param_3,&plStack_120,acStack_248);
  lVar15 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if ((lVar9 != 0) && (*(int64_t *)(lVar15 + 0x82a0) != (int64_t)**(int **)(lVar9 + 0x10))) {
    (**(code **)(**(int64_t **)(lVar15 + 0x8400) + 0x228))
              (*(int64_t **)(lVar15 + 0x8400),*(uint64_t *)(*(int **)(lVar9 + 0x10) + 6),0,0);
    *(int64_t *)(lVar15 + 0x82a0) = (int64_t)**(int **)(lVar9 + 0x10);
  }
  lVar15 = *(int64_t *)(system_message_buffer + 0x1cd8);
  lVar9 = *(int64_t *)(param_1 + 0x468);
  pplStack_240 = pplVar12;
  if (lVar9 != 0) {
    *(int32_t *)(lVar9 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    pplStack_240 = *(int64_t ***)(lVar9 + 0x20);
  }
  plVar10 = *(int64_t **)(lVar15 + 0x8400);
  local_var_258 = 0;
  (**(code **)(*plVar10 + 0x220))(plVar10,1,1,&pplStack_240);
  lVar9 = system_message_buffer;
  lVar15 = system_parameter_buffer;
  if (*(char *)(system_parameter_buffer + 0x12f8) == '\x01') {
    *(int32_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1c78) =
         *(int32_t *)(system_parameter_buffer + 0x1304);
    *(int32_t *)(*(int64_t *)(lVar9 + 0x1cd8) + 0x1c7c) = *(int32_t *)(lVar15 + 0x12fc);
    *(int32_t *)(*(int64_t *)(lVar9 + 0x1cd8) + 0x1c74) = *(int32_t *)(lVar15 + 0x1300);
    *(int32_t *)(*(int64_t *)(lVar9 + 0x1cd8) + 0x1bfc) = *(int32_t *)(lVar15 + 0x1308);
    *(int32_t *)(*(int64_t *)(lVar9 + 0x1cd8) + 0x1c60) = *(int32_t *)(lVar15 + 0x1318);
    *(int32_t *)(*(int64_t *)(lVar9 + 0x1cd8) + 0x1c64) = *(int32_t *)(lVar15 + 0x131c);
  }
  *(uint64_t *)(*(int64_t *)(lVar9 + 0x1cd8) + 0x1df0) = *(uint64_t *)(param_3 + 0x35a8);
  *(uint64_t *)(*(int64_t *)(lVar9 + 0x1cd8) + 0x1df8) = *(uint64_t *)(param_3 + 0x35b0);
  *(float *)(*(int64_t *)(lVar9 + 0x1cd8) + 0x1be0) = 0.5 / *(float *)(param_3 + 0x11c20);
  *(float *)(*(int64_t *)(lVar9 + 0x1cd8) + 0x1be4) = 0.5 / *(float *)(param_3 + 0x11c24);
  *(float *)(*(int64_t *)(lVar9 + 0x1cd8) + 0x1be8) =
       1.0 / (float)*(ushort *)(*(int64_t *)(param_1 + 0x140) + 0x32c);
  *(float *)(*(int64_t *)(lVar9 + 0x1cd8) + 0x1bec) =
       1.0 / (float)*(ushort *)(*(int64_t *)(param_1 + 0x140) + 0x32e);
  UltraHighFreq_DatabaseHandler1(*(int64_t *)(lVar9 + 0x1cd8),*(uint64_t *)(lVar9 + 0x1c88),
                *(int64_t *)(lVar9 + 0x1cd8) + 0x1be0,0x230);
  lVar15 = *(int64_t *)(system_message_buffer + 0x1c88);
  plVar10 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
  pcVar3 = *(code **)(*plVar10 + 0x238);
  *(int32_t *)(lVar15 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
  (*pcVar3)(plVar10,2,1,lVar15 + 0x10);
  plVar10 = (int64_t *)(param_1 + 0x138);
  pplVar17 = pplVar12;
  plVar13 = plVar10;
  do {
    if (*plVar13 != 0) {
      local_var_258 = CONCAT44(local_var_258._4_4_,0xffffffff);
      RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),pplVar17,*plVar13,0x20);
    }
    uVar6 = (int)pplVar17 + 1;
    pplVar17 = (int64_t **)(uint64_t)uVar6;
    plVar13 = plVar13 + 1;
  } while ((int)uVar6 < 0x10);
  lVar15 = *(int64_t *)(system_message_buffer + 0x1cd8);
  pplVar11 = (int64_t **)(int64_t)(1 - *(int *)(param_1 + 0x460));
  pplVar17 = pplVar12;
  if ((((*(int64_t *)(param_1 + 0x450 + (int64_t)pplVar11 * 8) != 0) &&
       (pplVar11 = (int64_t **)SystemCore_Scheduler(), pplVar11 != (int64_t **)0x0)) &&
      (pplVar17 = pplVar11, pplVar11[1] == (int64_t *)0x0)) && (pplVar11[2] == (int64_t *)0x0)) {
    pplVar17 = (int64_t **)0x0;
  }
  uVar6 = (uint)pplVar11;
  if ((((*(int64_t ***)(lVar15 + 0x8448) != pplVar17) || (*(int *)(lVar15 + 0x8840) != -1)) ||
      (*(int *)(lVar15 + 0x8a40) != 0x20)) &&
     (((pplVar17 == (int64_t **)0x0 || (pplVar17[1] != (int64_t *)0x0)) ||
      (pplVar17[2] != (int64_t *)0x0)))) {
    if (pplVar17 != (int64_t **)0x0) {
      pplVar12 = (int64_t **)pplVar17[2];
    }
    pplStack_240 = pplVar12;
    uVar6 = (**(code **)(**(int64_t **)(lVar15 + 0x8400) + 0x218))
                      (*(int64_t **)(lVar15 + 0x8400),2,1,&pplStack_240);
    *(int64_t ***)(lVar15 + 0x8448) = pplVar17;
    *(int32_t *)(lVar15 + 0x8840) = 0xffffffff;
    *(int32_t *)(lVar15 + 0x8a40) = 0x20;
    *(int *)(lVar15 + 0x82b4) = *(int *)(lVar15 + 0x82b4) + 1;
  }
  auVar21._0_4_ = *(float *)(param_3 + 0x11c20) * 0.03125;
  iVar14 = (int)auVar21._0_4_;
  if ((iVar14 != -0x80000000) && ((float)iVar14 != auVar21._0_4_)) {
    auVar21._4_4_ = auVar21._0_4_;
    auVar21._8_8_ = 0;
    uVar6 = movmskps(uVar6,auVar21);
    uVar6 = uVar6 & 1 ^ 1;
    auVar21._0_4_ = (float)(int)(iVar14 + uVar6);
  }
  auVar22._0_4_ = *(float *)(param_3 + 0x11c24) * 0.03125;
  iVar14 = (int)auVar22._0_4_;
  if ((iVar14 != -0x80000000) && ((float)iVar14 != auVar22._0_4_)) {
    auVar22._4_4_ = auVar22._0_4_;
    auVar22._8_8_ = 0;
    uVar6 = movmskps(uVar6,auVar22);
    auVar22._0_4_ = (float)(int)(iVar14 + (uVar6 & 1 ^ 1));
  }
  plVar13 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
  (**(code **)(*plVar13 + 0x148))
            (plVar13,(int64_t)auVar21._0_4_ & 0xffffffff,(int64_t)auVar22._0_4_,1);
  if (plStack_1d0 != (int64_t *)0x0) {
    (**(code **)(*plStack_1d0 + 0x38))();
  }
  pplStack_240 = &plStack_200;
  plStack_200 = (int64_t *)&system_data_buffer_ptr;
  if (lStack_1f8 == 0) {
    lStack_1f8 = 0;
    local_var_1e8 = local_var_1e8 & 0xffffffff00000000;
    plStack_200 = (int64_t *)&system_state_ptr;
    if (plStack_208 != (int64_t *)0x0) {
      (**(code **)(*plStack_208 + 0x38))();
    }
    if (plStack_1c0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    if (plStack_160 != (int64_t *)0x0) {
      (**(code **)(*plStack_160 + 0x38))();
    }
    pplStack_240 = &plStack_190;
    plStack_190 = (int64_t *)&system_data_buffer_ptr;
    if (lStack_188 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_188 = 0;
    local_var_178 = local_var_178 & 0xffffffff00000000;
    plStack_190 = (int64_t *)&system_state_ptr;
    if (plStack_198 != (int64_t *)0x0) {
      (**(code **)(*plStack_198 + 0x38))();
    }
    if (aplStack_238[0] != (int64_t *)0x0) {
      (**(code **)(*aplStack_238[0] + 0x38))();
    }
    render_system_data_memory = render_system_data_memory + -1;
    (**(code **)(*render_system_data_memory + 0x20))();
    local_var_140 = &system_data_buffer_ptr;
    if (puVar8 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(puVar8);
    }
    local_var_138 = (uint64_t *)0x0;
    local_var_128 = (uint64_t)local_var_128._4_4_ << 0x20;
    local_var_140 = &system_state_ptr;
    plStack_120 = (int64_t *)&system_data_buffer_ptr;
    stack_array_108[0] = 0;
    plocal_var_118 = (uint64_t *)0x0;
    local_var_110 = local_var_110 & 0xffffffff00000000;
    puVar8 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x1a,0x13);
    *(int8_t *)puVar8 = 0;
    plocal_var_118 = puVar8;
    uVar7 = CoreMemoryPoolCleaner(puVar8);
    stack_array_108[0] = CONCAT44(stack_array_108[0]._4_4_,uVar7);
    *puVar8 = 0x6f4e786674736f70;
    puVar8[1] = 0x6f7475613a3a6564;
    puVar8[2] = 0x7275736f7078655f;
    *(int16_t *)(puVar8 + 3) = 0x65;
    local_var_110 = CONCAT44(local_var_110._4_4_,0x19);
    SystemData_Processor(acStack_248,puVar8);
    lVar15 = system_main_module_state;
    if (*(int *)(param_1 + 0x48) < 1) {
      lVar9 = *(int64_t *)(param_1 + 0x428);
      if ((lVar9 == 0) || (plVar13 = *(int64_t **)(lVar9 + 0x1d8), plVar13 == (int64_t *)0x0)) {
        plVar13 = (int64_t *)0x0;
      }
      else if (system_main_module_state != 0) {
        *(int64_t *)(lVar9 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
      }
      lVar9 = *(int64_t *)(param_1 + 0x448);
      if ((lVar9 == 0) || (plVar18 = *(int64_t **)(lVar9 + 0x1e0), plVar18 == (int64_t *)0x0)) {
        plVar18 = (int64_t *)0x0;
      }
      else if (lVar15 != 0) {
        *(int64_t *)(lVar9 + 0x340) = (int64_t)*(int *)(lVar15 + 0x224);
      }
      plVar4 = *(int64_t **)(system_message_buffer + 0x1cd8);
      if ((plVar13 != (int64_t *)0x0) && (*plVar13 != 0)) {
        (**(code **)(*plVar4 + 0x70))(plVar4,*plVar13,1);
      }
      lVar15 = system_message_buffer;
      plVar4[0x1077] = (int64_t)plVar13;
      plVar13 = *(int64_t **)(lVar15 + 0x1cd8);
      if ((plVar18 != (int64_t *)0x0) && (*plVar18 != 0)) {
        (**(code **)(*plVar13 + 0x70))(plVar13,*plVar18,2);
        lVar15 = system_message_buffer;
      }
      plVar13[0x107e] = (int64_t)plVar18;
      SystemCore_ProcessorEx(*(uint64_t *)(lVar15 + 0x1cd8),1);
      dVar1 = *(double *)(param_1 + 0x58);
      dVar2 = *(double *)(param_1 + 0x60);
      lVar15 = *(int64_t *)(system_message_buffer + 0x1cd8);
      local_var_140 = (void *)
                   CONCAT44((float)(int)*(float *)(param_3 + 0x11c1c),
                            (float)(int)*(float *)(param_3 + 0x11c18));
      local_var_138 = (uint64_t *)CONCAT44((float)dVar2,(float)dVar1);
      local_var_130 = 0;
      local_var_12c = 0x3f800000;
      plVar13 = *(int64_t **)(lVar15 + 0x8400);
      (**(code **)(*plVar13 + 0x160))(plVar13,1,&local_var_140);
      local_var_150 = (int64_t *)0x0;
      plVar13 = *(int64_t **)(lVar15 + 0x8400);
      iStack_148 = (int)dVar1;
      local_var_144 = (int)dVar2;
      (**(code **)(*plVar13 + 0x168))(plVar13,1,&local_var_150);
      lVar9 = system_message_buffer;
      lVar15 = system_parameter_buffer;
      if (*(char *)(system_parameter_buffer + 0x12f8) == '\x01') {
        *(int32_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1c78) =
             *(int32_t *)(system_parameter_buffer + 0x1304);
        *(int32_t *)(*(int64_t *)(lVar9 + 0x1cd8) + 0x1c7c) = *(int32_t *)(lVar15 + 0x12fc);
        *(int32_t *)(*(int64_t *)(lVar9 + 0x1cd8) + 0x1c74) = *(int32_t *)(lVar15 + 0x1300);
        *(int32_t *)(*(int64_t *)(lVar9 + 0x1cd8) + 0x1bfc) = *(int32_t *)(lVar15 + 0x1308);
        *(int32_t *)(*(int64_t *)(lVar9 + 0x1cd8) + 0x1c60) = *(int32_t *)(lVar15 + 0x1318);
        *(int32_t *)(*(int64_t *)(lVar9 + 0x1cd8) + 0x1c64) = *(int32_t *)(lVar15 + 0x131c);
      }
      UltraHighFreq_DatabaseHandler1(*(int64_t *)(lVar9 + 0x1cd8),*(uint64_t *)(lVar9 + 0x1c88),
                    *(int64_t *)(lVar9 + 0x1cd8) + 0x1be0,0x230);
      plVar13 = (int64_t *)0x0;
      aplStack_238[0] = (int64_t *)0x0;
      local_var_258 = CONCAT44(local_var_258._4_4_,param_5);
      function_1f7d20(param_1,param_3,stack_array_1c8,aplStack_238);
      local_var_150 = aplStack_238[0];
      iStack_148 = stack_array_1c8[0];
      local_var_144._0_2_ = 4;
      plStack_228 = *(int64_t **)(param_1 + 0x30);
      plStack_208 = (int64_t *)0x0;
      plStack_200 = (int64_t *)&system_data_buffer_ptr;
      local_var_1e8 = 0;
      lStack_1f8 = 0;
      local_var_1f0 = 0;
      plStack_1d0 = (int64_t *)0x0;
      local_var_218 = CONCAT26(local_var_144._2_2_,CONCAT24(4,stack_array_1c8[0]));
      local_var_220 = aplStack_238[0];
      local_var_210 = 2;
      local_var_1e0 = 0;
      local_var_1d8 = 0;
      uVar20 = *(uint64_t *)(*(int64_t *)(param_1 + 0x30) + 0x15b8);
      pplStack_240 = &plStack_1b8;
      plStack_1b0 = aplStack_238[0];
      local_var_1a0 = 2;
      plStack_198 = (int64_t *)0x0;
      plStack_1b8 = plStack_228;
      local_var_1a8 = local_var_218;
      SystemCore_NetworkHandler0(&plStack_190,&plStack_200);
      local_var_170 = local_var_1e0;
      local_var_168 = local_var_1d8;
      plStack_160 = plStack_1d0;
      if (plStack_1d0 != (int64_t *)0x0) {
        (**(code **)(*plStack_1d0 + 0x28))();
      }
      uVar20 = UIRenderingEngine(uVar20,param_3,&plStack_1b8,acStack_248);
      if (acStack_248[0] == '\0') {
        *(uint64_t *)(param_1 + 0xf8) = uVar20;
        *(int32_t *)(param_1 + 0x134) = 1;
        *(int32_t *)(param_1 + 0x114) = *(int32_t *)(*(int64_t *)(param_1 + 0x428) + 0x324);
        plVar18 = plVar13;
        do {
          if (*plVar10 != 0) {
            local_var_258 = CONCAT44(local_var_258._4_4_,0xffffffff);
            RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),plVar18,*plVar10,0x10);
          }
          uVar6 = (int)plVar18 + 1;
          plVar18 = (int64_t *)(uint64_t)uVar6;
          plVar10 = plVar10 + 1;
        } while ((int)uVar6 < 0x10);
        pplStack_240 = (int64_t **)0x0;
        plVar10 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
        local_var_258 = 0;
        (**(code **)(*plVar10 + 0x220))(plVar10,1,1,&pplStack_240);
        lVar5 = system_main_module_state;
        lVar15 = *(int64_t *)(system_message_buffer + 0x1cd8);
        lVar9 = *(int64_t *)(param_1 + 0x468);
        if ((lVar9 != 0) &&
           (*(int32_t *)(lVar9 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar9 != -0x10
           )) {
          *(int32_t *)(lVar9 + 0x16c) = *(int32_t *)(lVar5 + 0x224);
          plVar13 = *(int64_t **)(lVar9 + 0x18);
        }
        plVar10 = *(int64_t **)(lVar15 + 0x8400);
        aplStack_238[0] = plVar13;
        (**(code **)(*plVar10 + 0x40))(plVar10,10,1,aplStack_238);
        function_29d000(*(uint64_t *)(system_message_buffer + 0x1cd8),4);
        InputSystem_Handler(*(uint64_t *)(system_message_buffer + 0x1cd8),param_1 + 0xf8);
        lVar15 = system_message_buffer;
        lVar9 = strnlen(&system_data_6f50,0x3f);
        strncpy(lVar15 + 0x1ce0,&system_data_6f50,lVar9);
        *(int8_t *)(lVar15 + 0x1ce0 + lVar9) = 0;
        function_29e110(*(uint64_t *)(system_message_buffer + 0x1cd8));
        pplStack_240 = (int64_t **)0x0;
        plVar10 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
        (**(code **)(*plVar10 + 0x40))(plVar10,10,1,&pplStack_240);
        if (plStack_1d0 != (int64_t *)0x0) {
          (**(code **)(*plStack_1d0 + 0x38))();
        }
        pplStack_240 = &plStack_200;
        plStack_200 = (int64_t *)&system_data_buffer_ptr;
        if (lStack_1f8 != 0) {
// WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        lStack_1f8 = 0;
        local_var_1e8 = local_var_1e8 & 0xffffffff00000000;
        plStack_200 = (int64_t *)&system_state_ptr;
        if (plStack_208 != (int64_t *)0x0) {
          (**(code **)(*plStack_208 + 0x38))();
        }
        render_system_data_memory = render_system_data_memory + -1;
        (**(code **)(*render_system_data_memory + 0x20))();
        plStack_120 = (int64_t *)&system_data_buffer_ptr;
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer(puVar8);
      }
      if (plStack_1d0 != (int64_t *)0x0) {
        (**(code **)(*plStack_1d0 + 0x38))();
      }
      pplStack_240 = &plStack_200;
      plStack_200 = (int64_t *)&system_data_buffer_ptr;
      if (lStack_1f8 != 0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      lStack_1f8 = 0;
      local_var_1e8 = local_var_1e8 & 0xffffffff00000000;
      plStack_200 = (int64_t *)&system_state_ptr;
      if (plStack_208 != (int64_t *)0x0) {
        (**(code **)(*plStack_208 + 0x38))();
      }
    }
    else {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
    }
    render_system_data_memory = render_system_data_memory + -1;
    (**(code **)(*render_system_data_memory + 0x20))();
    plStack_120 = (int64_t *)&system_data_buffer_ptr;
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(puVar8);
  }
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}
uint64_t *
function_402690(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &processed_var_6512_ptr;
  function_1f9920();
  if ((param_2 & 1) != 0) {
    free(param_1,0x450,param_3,param_4,uVar1);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4026e0(int64_t param_1,int64_t param_2)
void function_4026e0(int64_t param_1,int64_t param_2)
{
  uint64_t uVar1;
  uint64_t *puVar2;
  int8_t stack_array_1e8 [32];
  int64_t *plStack_1c8;
  int64_t *plStack_1c0;
  int64_t *plStack_1b8;
  int32_t local_var_1b0;
  int32_t local_var_1ac;
  int32_t local_var_1a8;
  int32_t local_var_1a4;
  int32_t local_var_1a0;
  int32_t local_var_19c;
  int32_t local_var_198;
  int32_t local_var_194;
  int32_t local_var_190;
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
  local_var_1a8 = 1;
  local_var_1a4 = 1;
  local_var_19c = 0;
  local_var_198 = 0;
  local_var_194 = 0;
  local_var_190 = 0x3f800000;
  local_var_18b = 1;
  local_var_18c = 0;
  local_var_180 = 0xffffffff;
  local_var_17c = 0;
  if (*(char *)(param_1 + 0x4c) != '\0') {
    local_var_1b0 = (int32_t)
                 (int64_t)((float)*(double *)(param_1 + 0x58) * *(float *)(param_2 + 0x11c20));
    local_var_1ac = (int32_t)
                 (int64_t)((float)*(double *)(param_1 + 0x60) * *(float *)(param_2 + 0x11c24));
    local_var_1a0 = 0x26;
    plocal_var_168 = &memory_allocator_3432_ptr;
    plocal_var_160 = stack_array_150;
    stack_array_150[0] = 0;
    local_var_158 = 0xf;
    strcpy_s(stack_array_150,0x80,&processed_var_6416_ptr);
    puVar2 = (uint64_t *)SystemInitializer(system_resource_state,&plStack_1c0,&plocal_var_168,&local_var_1b0);
    uVar1 = *puVar2;
    *puVar2 = 0;
    plStack_1c8 = *(int64_t **)(param_1 + 0x428);
    *(uint64_t *)(param_1 + 0x428) = uVar1;
    if (plStack_1c8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1c8 + 0x38))();
    }
    if (plStack_1c0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    plocal_var_168 = &system_state_ptr;
    local_var_1a0 = 0x26;
    plocal_var_c8 = &memory_allocator_3432_ptr;
    plocal_var_c0 = stack_array_b0;
    stack_array_b0[0] = 0;
    local_var_b8 = 0xe;
    strcpy_s(stack_array_b0,0x80,&processed_var_6432_ptr);
    puVar2 = (uint64_t *)SystemInitializer(system_resource_state,&plStack_1b8,&plocal_var_c8,&local_var_1b0);
    uVar1 = *puVar2;
    *puVar2 = 0;
    plStack_1c8 = *(int64_t **)(param_1 + 0x430);
    *(uint64_t *)(param_1 + 0x430) = uVar1;
    if (plStack_1c8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1c8 + 0x38))();
    }
    if (plStack_1b8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1b8 + 0x38))();
    }
    plocal_var_c8 = &system_state_ptr;
    local_var_1a0 = 0x26;
    plocal_var_168 = &memory_allocator_3432_ptr;
    plocal_var_160 = stack_array_150;
    stack_array_150[0] = 0;
    local_var_158 = 0xe;
    strcpy_s(stack_array_150,0x80,&processed_var_6448_ptr);
    puVar2 = (uint64_t *)SystemInitializer(system_resource_state,&plStack_1c8,&plocal_var_168,&local_var_1b0);
    uVar1 = *puVar2;
    *puVar2 = 0;
    plStack_1c0 = *(int64_t **)(param_1 + 0x438);
    *(uint64_t *)(param_1 + 0x438) = uVar1;
    if (plStack_1c0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    if (plStack_1c8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1c8 + 0x38))();
    }
    plocal_var_168 = &system_state_ptr;
    local_var_1a0 = 0x26;
    plocal_var_c8 = &memory_allocator_3432_ptr;
    plocal_var_c0 = stack_array_b0;
    stack_array_b0[0] = 0;
    local_var_b8 = 0xd;
    strcpy_s(stack_array_b0,0x80,&processed_var_6464_ptr);
    puVar2 = (uint64_t *)SystemInitializer(system_resource_state,&plStack_1c0,&plocal_var_c8,&local_var_1b0);
    uVar1 = *puVar2;
    *puVar2 = 0;
    plStack_1b8 = *(int64_t **)(param_1 + 0x440);
    *(uint64_t *)(param_1 + 0x440) = uVar1;
    if (plStack_1b8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1b8 + 0x38))();
    }
    if (plStack_1c0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    plocal_var_c8 = &system_state_ptr;
  }
  plStack_1b8 = *(int64_t **)(param_1 + 0x448);
  *(uint64_t *)(param_1 + 0x448) = 0;
  if (plStack_1b8 != (int64_t *)0x0) {
    (**(code **)(*plStack_1b8 + 0x38))();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_1e8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address