#include "ultra_high_freq_fun_definitions.h"
/* 函数别名定义: DataStructureManager */
#define DataStructureManager DataStructureManager
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_02_part012.c - 3 个函数
// 函数: void function_0efac0(uint64_t param_1,int64_t param_2)
void function_0efac0(uint64_t param_1,int64_t param_2)
{
  uint uVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint uVar12;
  int64_t lVar13;
  uint *puVar14;
  uint uVar15;
  uint64_t uVar16;
  uint uVar17;
  int iVar19;
  uint64_t *puVar20;
  uint64_t uVar21;
  uint uVar22;
  bool bVar24;
  int8_t stack_array_208 [32];
  uint64_t local_var_1e8;
  uint local_var_1d8;
  uint local_var_1d4;
  int8_t stack_array_1d0 [4];
  uint local_var_1cc;
  int iStack_1c8;
  uint local_var_1c4;
  int64_t lStack_1c0;
  void **pplocal_var_1b8;
  uint64_t local_var_1b0;
  uint64_t local_var_1a8;
  uint64_t local_var_1a0;
  uint64_t local_var_198;
  uint64_t local_var_190;
  uint64_t local_var_188;
  uint64_t local_var_180;
  uint64_t local_var_178;
  uint64_t local_var_170;
  uint64_t local_var_168;
  uint64_t local_var_160;
  uint64_t local_var_158;
  uint64_t local_var_150;
  uint64_t local_var_148;
  uint64_t local_var_140;
  uint64_t local_var_138;
  uint64_t local_var_130;
  int64_t *plStack_128;
  int64_t *plStack_120;
  int64_t *plStack_118;
  int64_t *plStack_110;
  uint64_t local_var_108;
  uint64_t local_var_100;
  uint64_t stack_array_f8 [2];
  int64_t *plStack_e8;
  int64_t *plStack_e0;
  int64_t *plStack_d8;
  int64_t *plStack_d0;
  uint64_t local_var_c8;
  int64_t lStack_c0;
  int8_t local_var_b8;
  int64_t lStack_b0;
  int8_t local_var_a8;
  void *plocal_var_98;
  int8_t *plocal_var_90;
  int32_t local_var_88;
  int8_t stack_array_80 [72];
  uint64_t local_var_38;
  uint64_t uVar18;
  uint64_t uVar23;
  lVar10 = system_system_data_memory;
  stack_array_f8[1] = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_208;
  iVar19 = *(int *)(param_2 + 0x3260);
  uVar16 = 0;
  iStack_1c8 = iVar19;
  lStack_1c0 = param_2;
  if (0 < iVar19) {
    SystemData_Processor(stack_array_1d0,&processed_var_5584_ptr);
    pplocal_var_1b8 = &plocal_var_98;
    plocal_var_98 = &memory_allocator_3480_ptr;
    plocal_var_90 = stack_array_80;
    local_var_88 = 0;
    stack_array_80[0] = 0;
    DataStructureManager0(&plocal_var_98,&processed_var_5584_ptr);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_98);
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 0x418);
    stack_array_f8[0] = uVar16;
    if (lVar11 != 0) {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
      stack_array_f8[0] = *(uint64_t *)(lVar11 + 0x20);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    local_var_1e8 = 0;
    (**(code **)(*plVar3 + 0x220))(plVar3,1,1,stack_array_f8);
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 0x410);
    local_var_1b0 = uVar16;
    if (lVar11 != 0) {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
      local_var_1b0 = *(uint64_t *)(lVar11 + 0x20);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    local_var_1e8 = 0;
    (**(code **)(*plVar3 + 0x220))(plVar3,2,1,&local_var_1b0);
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 0x420);
    local_var_1a8 = uVar16;
    if (lVar11 != 0) {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
      local_var_1a8 = *(uint64_t *)(lVar11 + 0x20);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    local_var_1e8 = 0;
    (**(code **)(*plVar3 + 0x220))(plVar3,5,1,&local_var_1a8);
    lVar13 = system_main_module_state;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 0x3b0);
    local_var_1a0 = uVar16;
    if ((lVar11 != 0) &&
       (*(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar11 != -0x10))
    {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
      local_var_1a0 = *(uint64_t *)(lVar11 + 0x18);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x218))(plVar3,0,1,&local_var_1a0);
    lVar13 = system_main_module_state;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 0x3a8);
    local_var_198 = uVar16;
    if ((lVar11 != 0) &&
       (*(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar11 != -0x10))
    {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
      local_var_198 = *(uint64_t *)(lVar11 + 0x18);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x218))(plVar3,1,1,&local_var_198);
    lVar13 = system_main_module_state;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 0x3c8);
    local_var_190 = uVar16;
    if ((lVar11 != 0) &&
       (*(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar11 != -0x10))
    {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
      local_var_190 = *(uint64_t *)(lVar11 + 0x18);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x218))(plVar3,2,1,&local_var_190);
    lVar13 = system_main_module_state;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 1000);
    local_var_188 = uVar16;
    if ((lVar11 != 0) &&
       (*(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar11 != -0x10))
    {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
      local_var_188 = *(uint64_t *)(lVar11 + 0x18);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x218))(plVar3,3,1,&local_var_188);
    lVar13 = system_main_module_state;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 0x3d0);
    local_var_180 = uVar16;
    if ((lVar11 != 0) &&
       (*(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar11 != -0x10))
    {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
      local_var_180 = *(uint64_t *)(lVar11 + 0x18);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x218))(plVar3,4,1,&local_var_180);
    lVar13 = system_main_module_state;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 0x3b8);
    local_var_178 = uVar16;
    if ((lVar11 != 0) &&
       (*(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar11 != -0x10))
    {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
      local_var_178 = *(uint64_t *)(lVar11 + 0x18);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x218))(plVar3,5,1,&local_var_178);
    lVar13 = system_main_module_state;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 0x400);
    local_var_170 = uVar16;
    if ((lVar11 != 0) &&
       (*(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar11 != -0x10))
    {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
      local_var_170 = *(uint64_t *)(lVar11 + 0x18);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x218))(plVar3,8,1,&local_var_170);
    lVar13 = system_main_module_state;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 0x3c0);
    local_var_168 = uVar16;
    if ((lVar11 != 0) &&
       (*(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar11 != -0x10))
    {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
      local_var_168 = *(uint64_t *)(lVar11 + 0x18);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x218))(plVar3,0xc,1,&local_var_168);
    lVar13 = system_main_module_state;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 0x3d8);
    local_var_160 = uVar16;
    if ((lVar11 != 0) &&
       (*(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar11 != -0x10))
    {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
      local_var_160 = *(uint64_t *)(lVar11 + 0x18);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x218))(plVar3,0xd,1,&local_var_160);
    lVar13 = system_main_module_state;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 0x408);
    local_var_158 = uVar16;
    if ((lVar11 != 0) &&
       (*(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar11 != -0x10))
    {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
      local_var_158 = *(uint64_t *)(lVar11 + 0x18);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x218))(plVar3,0xe,1,&local_var_158);
    plVar3 = *(int64_t **)(system_parameter_buffer + 0xe88);
    plStack_110 = plVar3;
    plStack_e8 = plVar3;
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plStack_118 = *(int64_t **)(system_parameter_buffer + 0xec8);
    plStack_e0 = plStack_118;
    if (plStack_118 != (int64_t *)0x0) {
      (**(code **)(*plStack_118 + 0x28))();
    }
    plStack_120 = *(int64_t **)(system_parameter_buffer + 0xe98);
    plStack_d8 = plStack_120;
    if (plStack_120 != (int64_t *)0x0) {
      (**(code **)(*plStack_120 + 0x28))();
    }
    plVar4 = *(int64_t **)(system_parameter_buffer + 0xe80);
    plStack_128 = plVar4;
    plStack_d0 = plVar4;
    if (plVar4 != (int64_t *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    lVar11 = system_main_module_state;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    local_var_150 = uVar16;
    if ((plVar4 != (int64_t *)0x0) &&
       (*(int32_t *)((int64_t)plVar4 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224),
       plVar4 != (int64_t *)0xfffffffffffffff0)) {
      *(int32_t *)((int64_t)plVar4 + 0x16c) = *(int32_t *)(lVar11 + 0x224);
      local_var_150 = plVar4[3];
    }
    plVar4 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar4 + 0x218))(plVar4,6,1,&local_var_150);
    lVar11 = system_main_module_state;
    local_var_c8 = 0;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    local_var_148 = uVar16;
    if ((plVar3 != (int64_t *)0x0) &&
       (*(int32_t *)((int64_t)plVar3 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224),
       plVar3 != (int64_t *)0xfffffffffffffff0)) {
      *(int32_t *)((int64_t)plVar3 + 0x16c) = *(int32_t *)(lVar11 + 0x224);
      local_var_148 = plVar3[3];
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x218))(plVar3,7,1,&local_var_148);
    lVar13 = system_main_module_state;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 0x3f8);
    local_var_140 = uVar16;
    if ((lVar11 != 0) &&
       (*(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar11 != -0x10))
    {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
      local_var_140 = *(uint64_t *)(lVar11 + 0x18);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x218))(plVar3,9,1,&local_var_140);
    lVar13 = system_main_module_state;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 0x3f0);
    local_var_138 = uVar16;
    if ((lVar11 != 0) &&
       (*(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar11 != -0x10))
    {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
      local_var_138 = *(uint64_t *)(lVar11 + 0x18);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x218))(plVar3,10,1,&local_var_138);
    lVar13 = system_main_module_state;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 0x468);
    local_var_130 = uVar16;
    if ((lVar11 != 0) &&
       (*(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar11 != -0x10))
    {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
      local_var_130 = *(uint64_t *)(lVar11 + 0x18);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x218))(plVar3,0xb,1,&local_var_130);
    local_var_1d8 = **(uint **)(param_2 + 0x3268);
    local_var_1d4 = 0;
    uVar15 = local_var_1d8;
LAB_1800f03c0:
    do {
      local_var_1c4 = uVar15;
      uVar18 = 0;
      local_var_1cc = 0;
      bVar24 = (int)uVar16 == iVar19;
      uVar15 = local_var_1c4;
      if ((int)uVar16 < iVar19) {
        puVar20 = (uint64_t *)(lVar10 + 0x4a0);
        uVar21 = uVar18;
        uVar23 = uVar16;
        uVar12 = local_var_1c4;
        do {
          uVar17 = (uint)uVar18;
          uVar1 = local_var_1d8;
          uVar15 = uVar12;
          if (0x3f < (int64_t)uVar21) break;
          puVar14 = (uint *)(*(int64_t *)(param_2 + 0x3268 + (uVar23 >> 0xb) * 8) +
                            (uint64_t)(uint)((int)uVar23 + (int)(uVar23 >> 0xb) * -0x800) * 0x10);
          uVar1 = *puVar14;
          param_2 = lStack_1c0;
          uVar15 = uVar1;
          if (uVar1 != uVar12) break;
          local_var_1d4 = (int)uVar16 + 1;
          lVar2 = *(int64_t *)(puVar14 + 2);
          uVar5 = *(uint64_t *)(lVar2 + 0x4c);
          *puVar20 = *(uint64_t *)(lVar2 + 0x44);
          puVar20[1] = uVar5;
          uVar5 = *(uint64_t *)(lVar2 + 0x5c);
          puVar20[2] = *(uint64_t *)(lVar2 + 0x54);
          puVar20[3] = uVar5;
          uVar5 = *(uint64_t *)(lVar2 + 0x6c);
          puVar20[4] = *(uint64_t *)(lVar2 + 100);
          puVar20[5] = uVar5;
          uVar5 = *(uint64_t *)(lVar2 + 0x7c);
          puVar20[6] = *(uint64_t *)(lVar2 + 0x74);
          puVar20[7] = uVar5;
          uVar5 = *(uint64_t *)(lVar2 + 0x8c);
          puVar20[8] = *(uint64_t *)(lVar2 + 0x84);
          puVar20[9] = uVar5;
          uVar5 = *(uint64_t *)(lVar2 + 0x9c);
          puVar20[10] = *(uint64_t *)(lVar2 + 0x94);
          puVar20[0xb] = uVar5;
          uVar5 = *(uint64_t *)(lVar2 + 0xac);
          puVar20[0xc] = *(uint64_t *)(lVar2 + 0xa4);
          puVar20[0xd] = uVar5;
          uVar5 = *(uint64_t *)(lVar2 + 0xbc);
          puVar20[0xe] = *(uint64_t *)(lVar2 + 0xb4);
          puVar20[0xf] = uVar5;
          uVar5 = *(uint64_t *)(lVar2 + 0xcc);
          puVar20[0x10] = *(uint64_t *)(lVar2 + 0xc4);
          puVar20[0x11] = uVar5;
          uVar7 = *(int32_t *)(lVar2 + 0xd8);
          uVar8 = *(int32_t *)(lVar2 + 0xdc);
          uVar9 = *(int32_t *)(lVar2 + 0xe0);
          *(int32_t *)(puVar20 + 0x12) = *(int32_t *)(lVar2 + 0xd4);
          *(int32_t *)((int64_t)puVar20 + 0x94) = uVar7;
          *(int32_t *)(puVar20 + 0x13) = uVar8;
          *(int32_t *)((int64_t)puVar20 + 0x9c) = uVar9;
          uVar7 = *(int32_t *)(lVar2 + 0xe8);
          uVar8 = *(int32_t *)(lVar2 + 0xec);
          uVar9 = *(int32_t *)(lVar2 + 0xf0);
          *(int32_t *)(puVar20 + 0x14) = *(int32_t *)(lVar2 + 0xe4);
          *(int32_t *)((int64_t)puVar20 + 0xa4) = uVar7;
          *(int32_t *)(puVar20 + 0x15) = uVar8;
          *(int32_t *)((int64_t)puVar20 + 0xac) = uVar9;
          *(int32_t *)((int64_t)puVar20 + 4) = 0x3f000000;
          *(int32_t *)(puVar20 + 1) = 0x3f000000;
          *(int32_t *)puVar20 = 0x3f000000;
          iVar19 = *(int *)(*(int64_t *)(puVar14 + 2) + 0xf4);
          local_var_b8 = 1;
          lStack_c0 = lVar10 + 0x2b8;
          AcquireSRWLockShared(lVar10 + 0x2b8);
          lVar11 = *(int64_t *)(*(int64_t *)(lVar10 + 0x140) + (int64_t)iVar19 * 8);
          ReleaseSRWLockShared(lVar10 + 0x2b8);
          iVar19 = *(int *)(*(int64_t *)(puVar14 + 2) + 0xf8);
          lVar2 = lVar10 + 0x2b8;
          local_var_a8 = 1;
          lStack_b0 = lVar2;
          AcquireSRWLockShared(lVar2);
          lVar13 = (int64_t)iVar19 * 0x10 + *(int64_t *)(lVar10 + 0x1a0);
          ReleaseSRWLockShared(lVar2);
          *(int32_t *)(puVar20 + 0x16) = *(int32_t *)(lVar11 + 0x118);
          *(int32_t *)((int64_t)puVar20 + 0xb4) = *(int32_t *)(lVar11 + 0x11c);
          *(int32_t *)(puVar20 + 0x17) = *(int32_t *)(lVar11 + 0x120);
          *(int32_t *)((int64_t)puVar20 + 0xbc) = *(int32_t *)(lVar11 + 0x124);
          *(int32_t *)(puVar20 + 0x18) = *(int32_t *)(lVar11 + 0x128);
          *(int32_t *)((int64_t)puVar20 + 0xc4) = *(int32_t *)(lVar11 + 300);
          *(int32_t *)(puVar20 + 0x19) = *(int32_t *)(lVar11 + 0x138);
          *(int32_t *)((int64_t)puVar20 + 0xcc) = *(int32_t *)(lVar11 + 0x13c);
          *(int32_t *)(puVar20 + 0x1a) = *(int32_t *)(lVar11 + 0x140);
          *(int32_t *)((int64_t)puVar20 + 0xd4) = *(int32_t *)(lVar11 + 0x144);
          *(int32_t *)(puVar20 + 0x1b) = *(int32_t *)(lVar11 + 0x148);
          *(int *)((int64_t)puVar20 + 0xdc) = *(int *)(lVar13 + 4) * 2;
          *(int32_t *)(puVar20 + 0x1c) = *(int32_t *)(lVar13 + 4);
          uVar17 = local_var_1cc + 1;
          uVar18 = (uint64_t)uVar17;
          uVar21 = uVar21 + 1;
          puVar20 = puVar20 + 0x1e;
          uVar22 = (int)uVar23 + 1;
          uVar23 = (uint64_t)uVar22;
          uVar16 = (uint64_t)local_var_1d4;
          param_2 = lStack_1c0;
          uVar1 = local_var_1d8;
          local_var_1cc = uVar17;
          uVar12 = local_var_1d8;
          uVar15 = local_var_1d8;
        } while ((int)uVar22 < iStack_1c8);
        local_var_1d8 = uVar1;
        if (0 < (int)uVar17) {
          uVar12 = local_var_1c4 >> 10 & 1;
          uVar15 = uVar12 | 0x10;
          if ((local_var_1c4 >> 9 & 1) == 0) {
            uVar15 = uVar12;
          }
          uVar12 = uVar15 | 0x20;
          if ((local_var_1c4 >> 0xb & 1) == 0) {
            uVar12 = uVar15;
          }
          uVar15 = uVar12 | 0x40;
          if ((local_var_1c4 >> 0xc & 1) == 0) {
            uVar15 = uVar12;
          }
          lVar11 = function_0f0cb0(lVar10,uVar15);
          lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
          if ((lVar11 != 0) &&
             (*(int64_t *)(lVar2 + 0x82a0) != (int64_t)**(int **)(lVar11 + 0x10))) {
            (**(code **)(**(int64_t **)(lVar2 + 0x8400) + 0x228))
                      (*(int64_t **)(lVar2 + 0x8400),*(uint64_t *)(*(int **)(lVar11 + 0x10) + 6),
                       0,0);
            *(int64_t *)(lVar2 + 0x82a0) = (int64_t)**(int **)(lVar11 + 0x10);
          }
          uVar5 = *(uint64_t *)(system_message_buffer + 0x1cd8);
          uVar6 = *(uint64_t *)(lVar10 + 0x40a0);
          UltraHighFreq_DatabaseHandler1(uVar5,uVar6,lVar10 + 0x4a0,0x3c00);
          function_29dca0(uVar5,0xb,0x20,uVar6);
          plVar3 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
          (**(code **)(*plVar3 + 0x148))(plVar3,local_var_1cc,1);
          uVar16 = (uint64_t)local_var_1d4;
          iVar19 = iStack_1c8;
          uVar15 = local_var_1d8;
          goto LAB_1800f03c0;
        }
        bVar24 = (int)uVar16 == iStack_1c8;
        iVar19 = iStack_1c8;
      }
    } while (!bVar24);
    if (plStack_128 != (int64_t *)0x0) {
      (**(code **)(*plStack_128 + 0x38))();
    }
    if (plStack_120 != (int64_t *)0x0) {
      (**(code **)(*plStack_120 + 0x38))();
    }
    if (plStack_118 != (int64_t *)0x0) {
      (**(code **)(*plStack_118 + 0x38))();
    }
    if (plStack_110 != (int64_t *)0x0) {
      (**(code **)(*plStack_110 + 0x38))();
    }
    SystemCore_Synchronizer(&plocal_var_98);
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
  }
  local_var_108 = 0;
  plVar3 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
  local_var_1e8 = 0;
  (**(code **)(*plVar3 + 0x220))(plVar3,1,1,&local_var_108);
  local_var_100 = 0;
  plVar3 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
  local_var_1e8 = 0;
  (**(code **)(*plVar3 + 0x220))(plVar3,2,1,&local_var_100);
  pplocal_var_1b8 = (void **)0x0;
  plVar3 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
  local_var_1e8 = 0;
  (**(code **)(*plVar3 + 0x220))(plVar3,5,1,&pplocal_var_1b8);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_208);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_0f08a0(void)
void function_0f08a0(void)
{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int8_t stack_array_1e8 [32];
  int32_t local_var_1c8;
  int32_t local_var_1c0;
  int32_t local_var_1b8;
  int32_t local_var_1b0;
  int32_t local_var_1a8;
  uint64_t local_var_1a0;
  int8_t local_var_198;
  int32_t local_var_190;
  int64_t *plStack_188;
  int64_t *plStack_180;
  int64_t *plStack_178;
  uint64_t local_var_170;
  void *plocal_var_168;
  int8_t *plocal_var_160;
  int32_t local_var_158;
  int8_t stack_array_150 [40];
  void *plocal_var_128;
  int8_t *plocal_var_120;
  int32_t local_var_118;
  int8_t stack_array_110 [72];
  void *plocal_var_c8;
  int8_t *plocal_var_c0;
  int32_t local_var_b8;
  int8_t stack_array_b0 [32];
  void *plocal_var_90;
  int8_t *plocal_var_88;
  int32_t local_var_80;
  int8_t stack_array_78 [32];
  void *plocal_var_58;
  int8_t *plocal_var_50;
  int32_t local_var_48;
  int8_t stack_array_40 [32];
  uint64_t local_var_20;
  lVar1 = system_system_data_memory;
  local_var_170 = 0xfffffffffffffffe;
  local_var_20 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1e8;
  plocal_var_168 = &processed_var_672_ptr;
  plocal_var_160 = stack_array_150;
  stack_array_150[0] = 0;
  local_var_158 = 0xe;
  strcpy_s(stack_array_150,0x20,&processed_var_5568_ptr);
  local_var_190 = 1;
  local_var_198 = 1;
  local_var_1a0 = 0;
  local_var_1a8 = 0x40;
  local_var_1b0 = 0xf0;
  local_var_1b8 = 0;
  local_var_1c0 = 3;
  local_var_1c8 = 0x220;
  puVar2 = (uint64_t *)SystemCore_ConfigManager();
  uVar3 = *puVar2;
  *puVar2 = 0;
  plStack_188 = *(int64_t **)(lVar1 + 0x40a0);
  *(uint64_t *)(lVar1 + 0x40a0) = uVar3;
  if (plStack_188 != (int64_t *)0x0) {
    (**(code **)(*plStack_188 + 0x38))();
  }
  if (plStack_178 != (int64_t *)0x0) {
    (**(code **)(*plStack_178 + 0x38))();
  }
  plocal_var_168 = &system_state_ptr;
  puVar2 = (uint64_t *)function_09e9e0();
  uVar3 = *puVar2;
  *puVar2 = 0;
  plStack_188 = *(int64_t **)(lVar1 + 0x40b0);
  *(uint64_t *)(lVar1 + 0x40b0) = uVar3;
  if (plStack_188 != (int64_t *)0x0) {
    (**(code **)(*plStack_188 + 0x38))();
  }
  if (plStack_180 != (int64_t *)0x0) {
    (**(code **)(*plStack_180 + 0x38))();
  }
  uVar3 = *(uint64_t *)(lVar1 + 0x40b0);
  plocal_var_168 = &processed_var_672_ptr;
  plocal_var_160 = stack_array_150;
  stack_array_150[0] = 0;
  local_var_158 = 0xc;
  strcpy_s(stack_array_150,0x20,&processed_var_5624_ptr);
  uVar3 = SystemCore_LoggingSystem0(uVar3,&plocal_var_168,1);
  *(uint64_t *)(lVar1 + 0x40b8) = uVar3;
  plocal_var_168 = &system_state_ptr;
  uVar3 = *(uint64_t *)(lVar1 + 0x40b0);
  plocal_var_c8 = &processed_var_672_ptr;
  plocal_var_c0 = stack_array_b0;
  stack_array_b0[0] = 0;
  local_var_b8 = 0xd;
  strcpy_s(stack_array_b0,0x20,&processed_var_5608_ptr);
  uVar3 = SystemCore_LoggingSystem0(uVar3,&plocal_var_c8,1);
  *(uint64_t *)(lVar1 + 0x40c8) = uVar3;
  plocal_var_c8 = &system_state_ptr;
  uVar3 = *(uint64_t *)(lVar1 + 0x40b0);
  plocal_var_90 = &processed_var_672_ptr;
  plocal_var_88 = stack_array_78;
  stack_array_78[0] = 0;
  local_var_80 = 0x11;
  strcpy_s(stack_array_78,0x20,&processed_var_5664_ptr);
  uVar3 = SystemCore_LoggingSystem0(uVar3,&plocal_var_90,1);
  *(uint64_t *)(lVar1 + 0x40d0) = uVar3;
  plocal_var_90 = &system_state_ptr;
  uVar3 = *(uint64_t *)(lVar1 + 0x40b0);
  plocal_var_128 = &processed_var_672_ptr;
  plocal_var_120 = stack_array_110;
  stack_array_110[0] = 0;
  local_var_118 = 0x12;
  strcpy_s(stack_array_110,0x20,&processed_var_5640_ptr);
  uVar3 = SystemCore_LoggingSystem0(uVar3,&plocal_var_128,1);
  *(uint64_t *)(lVar1 + 0x40d8) = uVar3;
  plocal_var_128 = &system_state_ptr;
  uVar3 = *(uint64_t *)(lVar1 + 0x40b0);
  plocal_var_58 = &processed_var_672_ptr;
  plocal_var_50 = stack_array_40;
  stack_array_40[0] = 0;
  local_var_48 = 0x19;
  strcpy_s(stack_array_40,0x20,&processed_var_5704_ptr);
  uVar3 = SystemCore_LoggingSystem0(uVar3,&plocal_var_58,1);
  *(uint64_t *)(lVar1 + 0x40c0) = uVar3;
  plocal_var_58 = &system_state_ptr;
  puVar2 = (uint64_t *)function_09e9e0();
  uVar3 = *puVar2;
  plocal_var_128 = &memory_allocator_3480_ptr;
  plocal_var_120 = stack_array_110;
  stack_array_110[0] = 0;
  local_var_118 = 0x1b;
  strcpy_s(stack_array_110,0x40,&system_data_4a78);
  uVar3 = SystemCore_LoggingSystem0(uVar3,&plocal_var_128,1);
  *(uint64_t *)(lVar1 + 0x300) = uVar3;
  plocal_var_128 = &system_state_ptr;
  if (plStack_180 != (int64_t *)0x0) {
    (**(code **)(*plStack_180 + 0x38))();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_20 ^ (uint64_t)stack_array_1e8);
}
// WARNING: Removing unreachable block (ram,0x0001800f0e4c)
uint64_t function_0f0cb0(int64_t param_1,uint64_t param_2)
{
  uint64_t uVar1;
  int8_t astack_special_x_10 [8];
  int32_t local_var_f0;
  int32_t local_var_ec;
  int32_t local_var_e4;
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
  ushort local_var_8a;
  uint64_t local_var_88;
  uint64_t local_var_80;
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
  local_var_98 = 0;
  if ((param_2 & 1) != 0) {
    local_var_98 = *(uint64_t *)(param_1 + 0x40b8);
  }
  if ((param_2 & 2) != 0) {
    local_var_98 = local_var_98 | *(uint64_t *)(param_1 + 0x40c8);
  }
  if ((param_2 & 0x10) != 0) {
    local_var_98 = local_var_98 | *(uint64_t *)(param_1 + 0x40d0);
  }
  if ((param_2 & 0x20) != 0) {
    local_var_98 = local_var_98 | *(uint64_t *)(param_1 + 0x40d8);
  }
  if ((param_2 & 0x40) != 0) {
    local_var_98 = local_var_98 | *(uint64_t *)(param_1 + 0x40c0);
  }
  local_var_90 = 0;
  local_var_8c = 0;
  local_var_80 = *(uint64_t *)(param_1 + 0x40b0);
  plocal_var_d0 = &system_data_buffer_ptr;
  local_var_b8 = 0;
  lStack_c8 = 0;
  local_var_c0 = 0;
  plStack_a0 = (int64_t *)0x0;
  local_var_b0 = 0;
  local_var_ac = 0;
  local_var_a8 = 0;
  local_var_a4 = 0;
  uVar1 = *(uint64_t *)(*(int64_t *)(param_1 + 0x40b0) + 0x15b8);
  local_var_f0 = (int32_t)local_var_98;
  local_var_ec = (int32_t)(local_var_98 >> 0x20);
  local_var_e4 = (int32_t)(((uint64_t)local_var_8a << 0x30) >> 0x20);
  local_var_78 = local_var_f0;
  local_var_74 = local_var_ec;
  local_var_70 = 0;
  local_var_6c = local_var_e4;
  local_var_68 = 2;
  local_var_60 = 0;
  CoreEngineDataTransformer(stack_array_58,&plocal_var_d0);
  local_var_38 = local_var_b0;
  local_var_34 = local_var_ac;
  local_var_30 = local_var_a8;
  local_var_2c = local_var_a4;
  plStack_28 = plStack_a0;
  if (plStack_a0 != (int64_t *)0x0) {
    (**(code **)(*plStack_a0 + 0x28))();
  }
  uVar1 = UIRenderingEngine(uVar1,0,&local_var_80,astack_special_x_10);
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
// 函数: void function_0f0e70(void)
void function_0f0e70(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address