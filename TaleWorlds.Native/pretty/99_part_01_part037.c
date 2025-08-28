/* 函数别名定义: DataStructureManager */
#define DataStructureManager DataStructureManager
/* 函数别名定义: RenderingEngineCore */
#define RenderingEngineCore RenderingEngineCore
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_01_part037.c - 2 个函数
// 函数: void function_0c5600(int64_t param_1)
void function_0c5600(int64_t param_1)
{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t *plVar3;
  code *pcVar4;
  int64_t lVar5;
  int64_t lVar6;
  int iVar7;
  uint64_t *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint64_t uVar12;
  int64_t lVar13;
  int8_t stack_array_2b8 [32];
  int32_t local_var_298;
  uint64_t *plocal_var_290;
  uint64_t local_var_288;
  int32_t local_var_280;
  uint64_t local_var_278;
  uint64_t local_var_270;
  int8_t local_var_268;
  int32_t local_var_260;
  uint64_t local_var_258;
  uint64_t local_var_250;
  uint64_t local_var_248;
  int64_t *plStack_240;
  int64_t lStack_238;
  int64_t *plStack_230;
  int64_t *plStack_228;
  int64_t *plStack_220;
  int64_t *plStack_218;
  int64_t *plStack_210;
  int64_t *plStack_208;
  int64_t *plStack_200;
  int64_t *plStack_1f8;
  int64_t *plStack_1f0;
  int64_t *plStack_1e8;
  int64_t *plStack_1e0;
  int64_t lStack_1d8;
  uint64_t local_var_1d0;
  uint64_t stack_array_1c8 [2];
  int8_t stack_array_1b8 [8];
  uint64_t local_var_1b0;
  int8_t stack_array_1a0 [8];
  uint64_t local_var_198;
  void *plocal_var_188;
  int8_t *plocal_var_180;
  int32_t local_var_178;
  int8_t stack_array_170 [32];
  void *plocal_var_150;
  int8_t *plocal_var_148;
  int32_t local_var_140;
  int8_t stack_array_138 [32];
  void *plocal_var_118;
  int8_t *plocal_var_110;
  int32_t local_var_108;
  int8_t stack_array_100 [32];
  void *plocal_var_e0;
  int8_t *plocal_var_d8;
  int32_t local_var_d0;
  int8_t stack_array_c8 [32];
  void *plocal_var_a8;
  int8_t *plocal_var_a0;
  int32_t local_var_98;
  int8_t stack_array_90 [32];
  void *plocal_var_70;
  int8_t *plocal_var_68;
  int32_t local_var_60;
  int8_t stack_array_58 [32];
  uint64_t local_var_38;
  local_var_1d0 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2b8;
  lVar13 = (int64_t)*(int *)(param_1 + 0x1538) * 0x248;
  uVar12 = 0;
  iVar11 = 0;
  lStack_238 = lVar13;
  lStack_1d8 = param_1;
  if (0 < *(int *)(lVar13 + 0x2378 + system_parameter_buffer)) {
    if (*(int *)(lVar13 + 0x2378 + param_1) != 0) {
      iVar11 = (*(int *)(lVar13 + 0x2378 + param_1) - 1U >> 0xc) + 1;
    }
    iVar10 = *(int *)(lVar13 + 0x2378 + param_1);
    uVar9 = iVar11 << 0xc;
    if ((*(int64_t *)(param_1 + 0x1540) == 0) ||
       (*(uint *)(*(int64_t *)(param_1 + 0x1540) + 0x3c) < uVar9)) {
      plocal_var_188 = &processed_var_672_ptr;
      plocal_var_180 = stack_array_170;
      stack_array_170[0] = 0;
      local_var_178 = 0x11;
      strcpy_s(stack_array_170,0x20,&ui_system_data_1776_ptr);
      local_var_260 = 1;
      local_var_268 = 1;
      local_var_270 = 0;
      local_var_278 = CONCAT44(local_var_278._4_4_,uVar9);
      local_var_280 = 0xa0;
      local_var_288 = local_var_288 & 0xffffffff00000000;
      plocal_var_290 = (uint64_t *)((uint64_t)plocal_var_290 & 0xffffffff00000000);
      local_var_298 = 0x41;
      puVar8 = (uint64_t *)SystemCore_ConfigManager();
      uVar1 = *puVar8;
      *puVar8 = 0;
      plStack_230 = *(int64_t **)(param_1 + 0x1540);
      *(uint64_t *)(param_1 + 0x1540) = uVar1;
      if (plStack_230 != (int64_t *)0x0) {
        (**(code **)(*plStack_230 + 0x38))();
      }
      if (plStack_228 != (int64_t *)0x0) {
        (**(code **)(*plStack_228 + 0x38))();
      }
      plocal_var_188 = &system_state_ptr;
      plocal_var_150 = &processed_var_672_ptr;
      plocal_var_148 = stack_array_138;
      stack_array_138[0] = 0;
      local_var_140 = 0x1b;
      strcpy_s(stack_array_138,0x20,&ui_system_data_1824_ptr);
      local_var_260 = 1;
      local_var_268 = 1;
      local_var_270 = 0;
      local_var_278 = CONCAT44(local_var_278._4_4_,uVar9);
      local_var_280 = 0xa0;
      local_var_288 = local_var_288 & 0xffffffff00000000;
      plocal_var_290 = (uint64_t *)CONCAT44(plocal_var_290._4_4_,3);
      local_var_298 = 0x1061;
      puVar8 = (uint64_t *)SystemCore_ConfigManager();
      uVar1 = *puVar8;
      *puVar8 = 0;
      plStack_220 = *(int64_t **)(param_1 + 0x1558);
      *(uint64_t *)(param_1 + 0x1558) = uVar1;
      if (plStack_220 != (int64_t *)0x0) {
        (**(code **)(*plStack_220 + 0x38))();
      }
      if (plStack_218 != (int64_t *)0x0) {
        (**(code **)(*plStack_218 + 0x38))();
      }
      plocal_var_150 = &system_state_ptr;
    }
    function_29e2f0(*(uint64_t *)(system_message_buffer + 0x1cd8),*(uint64_t *)(param_1 + 0x1558),2,
                  stack_array_1b8);
    iVar10 = iVar10 * 0xa0;
    if (iVar11 != 0) {
      iVar11 = 0xa0000;
      if (iVar10 < 0xa0000) {
        iVar11 = iVar10;
      }
// WARNING: Subroutine does not return
      memcpy(local_var_1b0,*(uint64_t *)(lVar13 + 0x2380 + param_1),(int64_t)iVar11);
    }
    lVar2 = *(int64_t *)(param_1 + 0x1558);
    plVar3 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    pcVar4 = *(code **)(*plVar3 + 0x78);
    *(int32_t *)(lVar2 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    (*pcVar4)(plVar3,*(uint64_t *)(lVar2 + 0x10),0);
    lVar6 = system_main_module_state;
    lVar2 = *(int64_t *)(param_1 + 0x1558);
    lVar5 = *(int64_t *)(param_1 + 0x1540);
    plVar3 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    pcVar4 = *(code **)(*plVar3 + 0x170);
    *(int32_t *)(lVar2 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    local_var_288 = *(uint64_t *)(lVar2 + 0x10);
    *(int32_t *)(lVar5 + 0x16c) = *(int32_t *)(lVar6 + 0x224);
    local_var_278 = 0;
    local_var_280 = 0;
    plocal_var_290 = (uint64_t *)((uint64_t)plocal_var_290 & 0xffffffff00000000);
    local_var_298 = 0;
    (*pcVar4)(plVar3,*(uint64_t *)(lVar5 + 0x10),0,0);
    lVar6 = system_main_module_state;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar5 = *(int64_t *)(param_1 + 0x1540);
    local_var_258 = uVar12;
    if ((lVar5 != 0) &&
       (*(int32_t *)(lVar5 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar5 != -0x10)) {
      *(int32_t *)(lVar5 + 0x16c) = *(int32_t *)(lVar6 + 0x224);
      local_var_258 = *(uint64_t *)(lVar5 + 0x18);
    }
    (**(code **)(**(int64_t **)(lVar2 + 0x8400) + 200))
              (*(int64_t **)(lVar2 + 0x8400),0x4d,1,&local_var_258);
    (**(code **)(**(int64_t **)(lVar2 + 0x8400) + 0x1f8))
              (*(int64_t **)(lVar2 + 0x8400),0x4d,1,&local_var_258);
    (**(code **)(**(int64_t **)(lVar2 + 0x8400) + 0x1d8))
              (*(int64_t **)(lVar2 + 0x8400),0x4d,1,&local_var_258);
    (**(code **)(**(int64_t **)(lVar2 + 0x8400) + 0x40))
              (*(int64_t **)(lVar2 + 0x8400),0x4d,1,&local_var_258);
  }
  iVar11 = 0;
  iVar10 = 0;
  if (0 < *(int *)(lVar13 + 0x2810 + system_parameter_buffer)) {
    if (*(int *)(lVar13 + 0x2810 + param_1) != 0) {
      iVar11 = (*(int *)(lVar13 + 0x2810 + param_1) - 1U >> 0xc) + 1;
    }
    iVar7 = *(int *)(lVar13 + 0x2810 + param_1);
    uVar9 = iVar11 << 0xc;
    if ((*(int64_t *)(param_1 + 0x1548) == 0) ||
       (*(uint *)(*(int64_t *)(param_1 + 0x1548) + 0x3c) < uVar9)) {
      plocal_var_118 = &processed_var_672_ptr;
      plocal_var_110 = stack_array_100;
      stack_array_100[0] = 0;
      local_var_108 = 0x11;
      strcpy_s(stack_array_100,0x20,&ui_system_data_1800_ptr);
      local_var_260 = 1;
      local_var_268 = 1;
      local_var_270 = 0;
      local_var_278 = CONCAT44(local_var_278._4_4_,uVar9);
      local_var_280 = 0x130;
      local_var_288 = local_var_288 & 0xffffffff00000000;
      plocal_var_290 = (uint64_t *)((uint64_t)plocal_var_290 & 0xffffffff00000000);
      local_var_298 = 0x41;
      puVar8 = (uint64_t *)SystemCore_ConfigManager();
      uVar1 = *puVar8;
      *puVar8 = 0;
      plStack_210 = *(int64_t **)(param_1 + 0x1548);
      *(uint64_t *)(param_1 + 0x1548) = uVar1;
      if (plStack_210 != (int64_t *)0x0) {
        (**(code **)(*plStack_210 + 0x38))();
      }
      if (plStack_208 != (int64_t *)0x0) {
        (**(code **)(*plStack_208 + 0x38))();
      }
      plocal_var_118 = &system_state_ptr;
      plocal_var_e0 = &processed_var_672_ptr;
      plocal_var_d8 = stack_array_c8;
      stack_array_c8[0] = 0;
      local_var_d0 = 0x1b;
      strcpy_s(stack_array_c8,0x20,&ui_system_data_1872_ptr);
      local_var_260 = 1;
      local_var_268 = 1;
      local_var_270 = 0;
      local_var_278 = CONCAT44(local_var_278._4_4_,uVar9);
      local_var_280 = 0x130;
      local_var_288 = local_var_288 & 0xffffffff00000000;
      plocal_var_290 = (uint64_t *)CONCAT44(plocal_var_290._4_4_,3);
      local_var_298 = 0x1061;
      puVar8 = (uint64_t *)SystemCore_ConfigManager();
      uVar1 = *puVar8;
      *puVar8 = 0;
      plStack_200 = *(int64_t **)(param_1 + 0x1568);
      *(uint64_t *)(param_1 + 0x1568) = uVar1;
      if (plStack_200 != (int64_t *)0x0) {
        (**(code **)(*plStack_200 + 0x38))();
      }
      if (plStack_1f8 != (int64_t *)0x0) {
        (**(code **)(*plStack_1f8 + 0x38))();
      }
      plocal_var_e0 = &system_state_ptr;
    }
    function_29e2f0(*(uint64_t *)(system_message_buffer + 0x1cd8),*(uint64_t *)(param_1 + 0x1568),2,
                  stack_array_1a0);
    iVar7 = iVar7 * 0x130;
    if (iVar11 != 0) {
      iVar11 = 0x130000;
      if (iVar7 < 0x130000) {
        iVar11 = iVar7;
      }
// WARNING: Subroutine does not return
      memcpy(local_var_198,*(uint64_t *)(lVar13 + 0x2818 + param_1),(int64_t)iVar11);
    }
    lVar2 = *(int64_t *)(param_1 + 0x1568);
    plVar3 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    pcVar4 = *(code **)(*plVar3 + 0x78);
    *(int32_t *)(lVar2 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    (*pcVar4)(plVar3,*(uint64_t *)(lVar2 + 0x10),0);
    lVar6 = system_main_module_state;
    lVar2 = *(int64_t *)(param_1 + 0x1568);
    lVar5 = *(int64_t *)(param_1 + 0x1548);
    plVar3 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    pcVar4 = *(code **)(*plVar3 + 0x170);
    *(int32_t *)(lVar2 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    local_var_288 = *(uint64_t *)(lVar2 + 0x10);
    *(int32_t *)(lVar5 + 0x16c) = *(int32_t *)(lVar6 + 0x224);
    local_var_278 = 0;
    local_var_280 = 0;
    plocal_var_290 = (uint64_t *)((uint64_t)plocal_var_290 & 0xffffffff00000000);
    local_var_298 = 0;
    (*pcVar4)(plVar3,*(uint64_t *)(lVar5 + 0x10),0,0);
    lVar6 = system_main_module_state;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar5 = *(int64_t *)(param_1 + 0x1548);
    local_var_250 = uVar12;
    if ((lVar5 != 0) &&
       (*(int32_t *)(lVar5 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar5 != -0x10)) {
      *(int32_t *)(lVar5 + 0x16c) = *(int32_t *)(lVar6 + 0x224);
      local_var_250 = *(uint64_t *)(lVar5 + 0x18);
    }
    (**(code **)(**(int64_t **)(lVar2 + 0x8400) + 200))
              (*(int64_t **)(lVar2 + 0x8400),0x4e,1,&local_var_250);
    (**(code **)(**(int64_t **)(lVar2 + 0x8400) + 0x1f8))
              (*(int64_t **)(lVar2 + 0x8400),0x4e,1,&local_var_250);
    (**(code **)(**(int64_t **)(lVar2 + 0x8400) + 0x1d8))
              (*(int64_t **)(lVar2 + 0x8400),0x4e,1,&local_var_250);
    (**(code **)(**(int64_t **)(lVar2 + 0x8400) + 0x40))
              (*(int64_t **)(lVar2 + 0x8400),0x4e,1,&local_var_250);
  }
  if (0 < *(int *)(system_parameter_buffer + 0x7620 + lVar13)) {
    lVar13 = lVar13 + param_1;
    if (*(int *)(lVar13 + 0x7620) != 0) {
      iVar10 = (*(int *)(lVar13 + 0x7620) - 1U >> 0xc) + 1;
    }
    iVar11 = *(int *)(lVar13 + 0x7620);
    uVar9 = iVar10 << 0xc;
    if ((*(int64_t *)(param_1 + 0x1550) == 0) ||
       (*(uint *)(*(int64_t *)(param_1 + 0x1550) + 0x3c) < uVar9)) {
      plocal_var_a8 = &processed_var_672_ptr;
      plocal_var_a0 = stack_array_90;
      stack_array_90[0] = 0;
      local_var_98 = 0xd;
      strcpy_s(stack_array_90,0x20,&ui_system_data_1856_ptr);
      local_var_260 = 1;
      local_var_268 = 1;
      local_var_270 = 0;
      local_var_278 = CONCAT44(local_var_278._4_4_,uVar9);
      local_var_280 = 0x120;
      local_var_288 = local_var_288 & 0xffffffff00000000;
      plocal_var_290 = (uint64_t *)((uint64_t)plocal_var_290 & 0xffffffff00000000);
      local_var_298 = 0x41;
      puVar8 = (uint64_t *)SystemCore_ConfigManager();
      uVar1 = *puVar8;
      *puVar8 = 0;
      plStack_1f0 = *(int64_t **)(param_1 + 0x1550);
      *(uint64_t *)(param_1 + 0x1550) = uVar1;
      if (plStack_1f0 != (int64_t *)0x0) {
        (**(code **)(*plStack_1f0 + 0x38))();
      }
      if (plStack_1e8 != (int64_t *)0x0) {
        (**(code **)(*plStack_1e8 + 0x38))();
      }
      plocal_var_a8 = &system_state_ptr;
      plocal_var_70 = &processed_var_672_ptr;
      plocal_var_68 = stack_array_58;
      stack_array_58[0] = 0;
      local_var_60 = 0x17;
      strcpy_s(stack_array_58,0x20,&ui_system_data_1936_ptr);
      local_var_260 = 1;
      local_var_268 = 1;
      local_var_270 = 0;
      local_var_278 = CONCAT44(local_var_278._4_4_,uVar9);
      local_var_280 = 0x120;
      local_var_288 = local_var_288 & 0xffffffff00000000;
      plocal_var_290 = (uint64_t *)CONCAT44(plocal_var_290._4_4_,3);
      local_var_298 = 0x1061;
      puVar8 = (uint64_t *)SystemCore_ConfigManager();
      uVar1 = *puVar8;
      *puVar8 = 0;
      plStack_1e0 = *(int64_t **)(param_1 + 0x1578);
      *(uint64_t *)(param_1 + 0x1578) = uVar1;
      if (plStack_1e0 != (int64_t *)0x0) {
        (**(code **)(*plStack_1e0 + 0x38))();
      }
      if (plStack_240 != (int64_t *)0x0) {
        (**(code **)(*plStack_240 + 0x38))();
      }
      plocal_var_70 = &system_state_ptr;
    }
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar5 = *(int64_t *)(param_1 + 0x1578);
    *(int32_t *)(lVar5 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    plocal_var_290 = stack_array_1c8;
    local_var_298 = 0;
    iVar7 = (**(code **)(*plVar3 + 0x70))(plVar3,*(uint64_t *)(lVar5 + 0x10),0,4);
    if (iVar7 < 0) {
      SystemCore_Loader(iVar7,&ui_system_data_1768_ptr);
    }
    iVar11 = iVar11 * 0x120;
    if (iVar10 != 0) {
      iVar10 = 0x120000;
      if (iVar11 < 0x120000) {
        iVar10 = iVar11;
      }
// WARNING: Subroutine does not return
      memcpy(stack_array_1c8[0],*(uint64_t *)(lVar13 + 0x7628),(int64_t)iVar10);
    }
    lVar13 = *(int64_t *)(param_1 + 0x1578);
    plVar3 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    pcVar4 = *(code **)(*plVar3 + 0x78);
    *(int32_t *)(lVar13 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    (*pcVar4)(plVar3,*(uint64_t *)(lVar13 + 0x10),0);
    lVar5 = system_main_module_state;
    lVar13 = *(int64_t *)(param_1 + 0x1578);
    lVar2 = *(int64_t *)(param_1 + 0x1550);
    plVar3 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    pcVar4 = *(code **)(*plVar3 + 0x170);
    *(int32_t *)(lVar13 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    local_var_288 = *(uint64_t *)(lVar13 + 0x10);
    *(int32_t *)(lVar2 + 0x16c) = *(int32_t *)(lVar5 + 0x224);
    local_var_278 = 0;
    local_var_280 = 0;
    plocal_var_290 = (uint64_t *)((uint64_t)plocal_var_290 & 0xffffffff00000000);
    local_var_298 = 0;
    (*pcVar4)(plVar3,*(uint64_t *)(lVar2 + 0x10),0,0);
    lVar5 = system_main_module_state;
    lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar2 = *(int64_t *)(param_1 + 0x1550);
    if ((lVar2 != 0) &&
       (*(int32_t *)(lVar2 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar2 != -0x10)) {
      *(int32_t *)(lVar2 + 0x16c) = *(int32_t *)(lVar5 + 0x224);
      uVar12 = *(uint64_t *)(lVar2 + 0x18);
    }
    local_var_248 = uVar12;
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 200))
              (*(int64_t **)(lVar13 + 0x8400),0x4f,1,&local_var_248);
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 0x1f8))
              (*(int64_t **)(lVar13 + 0x8400),0x4f,1,&local_var_248);
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 0x1d8))
              (*(int64_t **)(lVar13 + 0x8400),0x4f,1,&local_var_248);
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 0x40))
              (*(int64_t **)(lVar13 + 0x8400),0x4f,1,&local_var_248);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_2b8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_0c6320(uint64_t param_1,int64_t param_2)
void function_0c6320(uint64_t param_1,int64_t param_2)
{
  float fVar1;
  float fVar2;
  int iVar3;
  uint64_t *puVar4;
  void *puVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  uint64_t uVar11;
  int8_t stack_array_1d8 [32];
  int32_t local_var_1b8;
  char acStack_1a8 [16];
  void *plocal_var_198;
  uint64_t local_var_190;
  uint64_t local_var_188;
  int32_t local_var_180;
  int32_t local_var_17c;
  int32_t local_var_178;
  int32_t local_var_174;
  int32_t local_var_170;
  uint64_t local_var_16c;
  int32_t local_var_164;
  int32_t local_var_160;
  int32_t local_var_15c;
  uint64_t local_var_150;
  uint64_t local_var_148;
  int64_t *plStack_140;
  void **pplocal_var_138;
  void *plocal_var_128;
  uint64_t local_var_120;
  uint64_t local_var_118;
  int32_t local_var_110;
  int64_t *plStack_108;
  void *plocal_var_100;
  int64_t lStack_f8;
  int32_t local_var_f0;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  uint64_t local_var_d8;
  int64_t *plStack_d0;
  uint64_t local_var_c8;
  void **pplocal_var_c0;
  int iStack_b8;
  int iStack_b4;
  uint64_t local_var_b0;
  float fStack_a8;
  int32_t local_var_a4;
  int32_t local_var_a0;
  int32_t local_var_9c;
  void *plocal_var_98;
  int8_t *plocal_var_90;
  int32_t local_var_88;
  int8_t stack_array_80 [72];
  uint64_t local_var_38;
  local_var_c8 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1d8;
  SystemData_Processor(acStack_1a8,&ui_system_data_1904_ptr);
  pplocal_var_c0 = &plocal_var_98;
  plVar9 = (int64_t *)0x0;
  plocal_var_98 = &memory_allocator_3480_ptr;
  plocal_var_90 = stack_array_80;
  local_var_88 = 0;
  stack_array_80[0] = 0;
  DataStructureManager0(&plocal_var_98,&ui_system_data_1992_ptr);
  uVar11 = SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_98);
  lVar7 = system_system_data_memory;
  local_var_b0 = 0;
  fStack_a8 = 0.0;
  local_var_a4._0_2_ = 4;
  if (*(int64_t *)(system_system_data_memory + 0x400) == 0) {
    puVar4 = (uint64_t *)function_09e9e0(uVar11,&pplocal_var_c0,&processed_var_496_ptr);
    uVar11 = *puVar4;
    *puVar4 = 0;
    pplocal_var_138 = *(void ***)(lVar7 + 0x400);
    *(uint64_t *)(lVar7 + 0x400) = uVar11;
    if (pplocal_var_138 != (void **)0x0) {
      (**(code **)((int64_t)*pplocal_var_138 + 0x38))();
    }
    if (pplocal_var_c0 != (void **)0x0) {
      (**(code **)(*pplocal_var_c0 + 0x38))();
    }
  }
  plocal_var_198 = *(void **)(lVar7 + 0x400);
  plStack_108 = (int64_t *)0x0;
  pplocal_var_138 = &plocal_var_100;
  plocal_var_100 = &system_data_buffer_ptr;
  local_var_e8 = 0;
  lStack_f8 = 0;
  local_var_f0 = 0;
  plStack_d0 = (int64_t *)0x0;
  local_var_188 = CONCAT26(local_var_a4._2_2_,CONCAT24((int16_t)local_var_a4,fStack_a8));
  local_var_120 = local_var_b0;
  local_var_110 = 2;
  local_var_e0 = 0;
  local_var_d8 = 0;
  uVar11 = *(uint64_t *)(plocal_var_198 + 0x15b8);
  pplocal_var_c0 = &plocal_var_198;
  local_var_190 = local_var_b0;
  local_var_180 = 2;
  local_var_178 = 0;
  local_var_174 = 0;
  plocal_var_128 = plocal_var_198;
  local_var_118 = local_var_188;
  CoreEngineDataTransformer(&local_var_170,&plocal_var_100);
  local_var_150 = local_var_e0;
  local_var_148 = local_var_d8;
  plStack_140 = plStack_d0;
  if (plStack_d0 != (int64_t *)0x0) {
    (**(code **)(*plStack_d0 + 0x28))();
  }
  puVar5 = (void *)UIRenderingEngine(uVar11,param_2,&plocal_var_198,acStack_1a8);
  if (acStack_1a8[0] == '\0') {
    lVar7 = *(int64_t *)(param_2 + 0x96d0);
    fVar1 = *(float *)(param_2 + 0x11c20);
    fStack_a8 = (float)(int)fVar1;
    fVar2 = *(float *)(param_2 + 0x11c24);
    local_var_a4 = (float)(int)fVar2;
    lVar6 = *(int64_t *)(system_message_buffer + 0x1cd8);
    local_var_b0 = CONCAT44((float)(int)*(float *)(param_2 + 0x11c1c),
                         (float)(int)*(float *)(param_2 + 0x11c18));
    local_var_a0 = 0;
    local_var_9c = 0x3f800000;
    plVar10 = *(int64_t **)(lVar6 + 0x8400);
    (**(code **)(*plVar10 + 0x160))(plVar10,1,&local_var_b0);
    pplocal_var_c0 = (void **)0x0;
    plVar10 = *(int64_t **)(lVar6 + 0x8400);
    iStack_b8 = (int)fVar1;
    iStack_b4 = (int)fVar2;
    (**(code **)(*plVar10 + 0x168))(plVar10,1,&pplocal_var_c0);
    local_var_178 = 0;
    local_var_174 = 0;
    local_var_170 = 0;
    local_var_16c = 0;
    local_var_164 = 0;
    local_var_160 = 0x400;
    local_var_188 = 0x4000300010000ff;
    local_var_190 = 0x8001000200060101;
    local_var_15c = 1;
    local_var_17c = *(int32_t *)(lVar7 + 0x324);
    plocal_var_198 = puVar5;
    lVar6 = SystemLog_Manager(param_2);
    local_var_180 = *(int32_t *)(lVar6 + 0x324);
    uVar11 = *(uint64_t *)(system_message_buffer + 0x1cd8);
    iVar3 = *(int *)(param_2 + 0x3578);
    plVar10 = plVar9;
    if (*(int64_t *)(lVar7 + 0x1d8) != 0) {
      if (system_main_module_state != 0) {
        *(int64_t *)(lVar7 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
      }
      plVar10 = (int64_t *)
                ((int64_t)(int)((uint)*(byte *)(lVar7 + 0x335) * iVar3) * 0x10 +
                *(int64_t *)(lVar7 + 0x1d8));
    }
    SystemCore_MemoryManager(uVar11,0,plVar10);
    plVar10 = *(int64_t **)(system_message_buffer + 0x1cd8);
    lVar7 = SystemLog_Manager(param_2);
    iVar3 = *(int *)(param_2 + 0x357c);
    if (*(int64_t *)(lVar7 + 0x1e0) != 0) {
      if (system_main_module_state != 0) {
        *(int64_t *)(lVar7 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
      }
      plVar9 = (int64_t *)((int64_t)(iVar3 * 2) * 0x10 + *(int64_t *)(lVar7 + 0x1e0));
      if ((plVar9 != (int64_t *)0x0) && (*plVar9 != 0)) {
        (**(code **)(*plVar10 + 0x70))(plVar10,*plVar9,2);
      }
    }
    plVar10[0x107e] = (int64_t)plVar9;
    SystemCore_ProcessorEx(*(uint64_t *)(system_message_buffer + 0x1cd8),1);
    uVar11 = *(uint64_t *)(system_message_buffer + 0x1cd8);
    uVar8 = SystemLog_Manager(param_2);
    local_var_1b8 = 0xffffffff;
    RenderingEngineCore0(uVar11,0x10,uVar8);
    function_29d000(*(uint64_t *)(system_message_buffer + 0x1cd8),4);
    InputSystem_Handler(*(uint64_t *)(system_message_buffer + 0x1cd8),&plocal_var_198);
    lVar7 = system_message_buffer;
    lVar6 = strnlen(&ui_system_data_1904_ptr,0x3f);
    strncpy(lVar7 + 0x1ce0,&ui_system_data_1904_ptr,lVar6);
    *(int8_t *)(lVar6 + 0x1ce0 + lVar7) = 0;
    function_29e110(*(uint64_t *)(system_message_buffer + 0x1cd8));
    lVar7 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (((*(int64_t *)(lVar7 + 0x84b8) != 0) || (*(int *)(lVar7 + 0x8878) != -1)) ||
       (*(int *)(lVar7 + 0x8a78) != 0x10)) {
      pplocal_var_c0 = (void **)0x0;
      (**(code **)(**(int64_t **)(lVar7 + 0x8400) + 0x40))
                (*(int64_t **)(lVar7 + 0x8400),0x10,1,&pplocal_var_c0);
      *(uint64_t *)(lVar7 + 0x84b8) = 0;
      *(int32_t *)(lVar7 + 0x8878) = 0xffffffff;
      *(int32_t *)(lVar7 + 0x8a78) = 0x10;
      *(int *)(lVar7 + 0x82b4) = *(int *)(lVar7 + 0x82b4) + 1;
    }
  }
  if (plStack_d0 != (int64_t *)0x0) {
    (**(code **)(*plStack_d0 + 0x38))();
  }
  pplocal_var_c0 = &plocal_var_100;
  plocal_var_100 = &system_data_buffer_ptr;
  if (lStack_f8 == 0) {
    lStack_f8 = 0;
    local_var_e8 = local_var_e8 & 0xffffffff00000000;
    plocal_var_100 = &system_state_ptr;
    if (plStack_108 != (int64_t *)0x0) {
      (**(code **)(*plStack_108 + 0x38))();
    }
    SystemCore_Synchronizer(&plocal_var_98);
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_1d8);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address