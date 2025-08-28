#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"
// 04_ui_system_part025.c - UI系统高级处理模块
// 包含15个核心函数，涵盖UI系统参数处理、数据转换、状态管理、线程同步、CPU特性检测等高级UI功能
// 主要功能包括UI控件处理、数据格式转换、线程安全、CPU指令集优化、错误处理等
// 常量定义
#define UI_SYSTEM_MAX_PARAMS 10          // UI系统最大参数数量
#define UI_SYSTEM_BUFFER_SIZE 0x4f       // UI系统缓冲区大小
#define UI_SYSTEM_ALIGNMENT_MASK 0xfffffff0 // UI系统内存对齐掩码
#define UI_SYSTEM_CRITICAL_SECTION_SIZE 0x28 // UI系统临界区大小
#define UI_SYSTEM_DATA_BLOCK_SIZE 0x90   // UI系统数据块大小
#define UI_SYSTEM_LARGE_BLOCK_SIZE 0x12a0 // UI系统大数据块大小
// 函数别名定义
#define ui_system_process_main_parameters function_66c7e0
#define ui_system_initialize_data_structures function_66cdf0
#define ui_system_process_data_block_type1 function_66cf80
#define ui_system_process_data_block_type2 function_66d040
#define ui_system_validate_and_queue_parameters function_66d130
#define ui_system_process_parameter_data function_66d210
#define ui_system_cleanup_resource_handler function_66d310
#define ui_system_set_error_with_format SystemInitializationProcessor
#define ui_system_set_error_simple function_66d37f
#define ui_system_trigger_error_jump function_66d398
#define ui_system_execute_error_jump function_66d3e9
#define ui_system_no_operation function_66d3f4
#define ui_system_execute_once_protected function_66d410
#define ui_system_cpu_feature_detection function_66d4e0
#define ui_system_execute_once_alternative function_66d6f0
#define ui_system_execute_once_initializer function_66d426
#define ui_system_execute_once_finalizer function_66d483
#define ui_system_execute_once_alternative_initializer function_66d706
#define ui_system_execute_once_alternative_finalizer function_66d763
// 函数: UI系统主参数处理器
// 处理UI系统的主要参数输入，包括参数验证、数据结构初始化、状态管理和错误处理
// 参数: param_1 - UI系统上下文指针, param_2 - 输入参数1, param_3 - 输入参数2, param_4 - 输入参数3, param_5 - 输入参数4
void function_66c7e0(int64_t *param_1,int64_t param_2,uint64_t param_3,int64_t param_4,int param_5
                  )
{
  uint64_t *puVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  int32_t *puVar4;
  int64_t lVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int iVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  uint64_t uVar15;
  int8_t stack_array_d8 [32];
  int64_t lStack_b8;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  uint local_var_98;
  int64_t lStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  int64_t *plStack_78;
  int64_t lStack_70;
  int32_t local_var_68;
  int iStack_64;
  uint64_t local_var_60;
  int32_t local_var_58;
  uint local_var_54;
  uint64_t local_var_50;
  local_var_50 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_d8;
  local_var_98 = (uint)param_3;
  uVar15 = param_3 & 0xffffffff;
  iStack_a8 = 0;
  iStack_a4 = 0;
  plStack_78 = param_1;
  lStack_70 = param_2;
  if (((((int)param_1[0x57] != 0) || (param_2 != 0)) || (local_var_98 != 0)) &&
     (iVar11 = function_66d130(param_1,param_2,param_3,&iStack_a8), 0 < iVar11)) {
    lStack_b8 = param_1[0x22];
    lVar12 = param_1[0x1d];
    iVar11 = *(int *)((int64_t)param_1 + 0xec);
    iStack_a0 = (int)lVar12;
    iStack_9c = iVar11;
    iStack_a8 = function_66d210(param_1[0x58],(int)param_1[0x61],(int64_t)param_1 + 0xe4,
                              param_1[0x21]);
    if ((iStack_a8 == 5) && ((int)param_1[0x1e] == 0)) {
      iStack_a8 = 0;
    }
    if ((*(int *)((int64_t)param_1 + 0xf4) == 0) && ((int)param_1[0x1e] == 0)) {
      iStack_a8 = 5;
    }
    if ((*(int *)((int64_t)param_1 + 0xec) != iVar11) ||
       (iVar11 = iStack_a4, (int)param_1[0x1d] != (int)lVar12)) {
      iVar11 = 1;
    }
    if ((iStack_a8 == 0) && (*(int *)((int64_t)param_1 + 0xf4) == 0)) {
      local_var_68 = (int32_t)param_1[0x1d];
      local_var_60 = 9;
      local_var_58 = (int32_t)param_1[0x1b];
      local_var_54 = *(uint *)(param_1 + 1) & 0x20000;
      if (((int)param_1[0x1f] == 0) && ((*(uint *)(param_1 + 1) & 0x10000) != 0)) {
        *(int32_t *)((int64_t)param_1 + 0xfc) = 0x403;
        param_1[0x20] = 4;
      }
      iStack_64 = *(int *)((int64_t)param_1 + 0xec);
      iStack_a8 = function_66eea0(param_1 + 0x35,&local_var_68);
      *(int32_t *)((int64_t)param_1 + 0xf4) = 1;
    }
    if (*(int *)((int64_t)param_1 + 0xf4) != 0) {
      *(int64_t *)(param_1[0x36] + 0x4430) = param_1[0x21];
      *(int64_t *)(param_1[0x36] + 0x4438) = param_1[0x22];
    }
    if (iStack_a8 == 0) {
      lVar12 = param_1[0x36];
      lStack_90 = lVar12;
      if (iVar11 != 0) {
        lStack_88 = lVar12 + 0x12c0;
        *(int *)(lVar12 + 0x1a20) = (int)param_1[0x1d];
        *(int32_t *)(lVar12 + 0x1a24) = *(int32_t *)((int64_t)param_1 + 0xec);
        iStack_a4 = *(int *)(lVar12 + 0x1e74);
        lStack_80 = lVar12;
        iVar11 = __intrinsic_setjmp(lVar12 + 0x1320,stack_array_d8);
        lVar14 = lStack_88;
        lVar10 = lStack_90;
        if (iVar11 != 0) {
          *(int32_t *)(lStack_90 + 0x1318) = 0;
          SystemFunction_000180001000();
          goto LAB_18066cdc1;
        }
        *(int32_t *)(lStack_90 + 0x1318) = 1;
        if (*(int *)(lStack_88 + 0x760) < 1) {
          *(int *)(lStack_88 + 0x760) = iStack_a0;
          SystemInitializationProcessor(lStack_88,7,&processed_var_7632_ptr);
        }
        if (*(int *)(lVar14 + 0x764) < 1) {
          *(int *)(lVar14 + 0x764) = iStack_9c;
          SystemInitializationProcessor(lVar14,7,&processed_var_7656_ptr);
        }
        iVar11 = function_66e500(lVar14,*(int32_t *)(lVar14 + 0x760),
                               *(int32_t *)(lVar14 + 0x764));
        if (iVar11 != 0) {
          SystemInitializationProcessor(lVar14,2,&processed_var_7680_ptr);
        }
        lVar12 = (int64_t)*(int *)(lVar14 + 0x9d4);
        iVar11 = 0;
        puVar1 = (uint64_t *)(lVar14 + 0x780 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xde0) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xde8) = uVar9;
        puVar1 = (uint64_t *)(lVar14 + 0x790 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xdf0) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xdf8) = uVar9;
        puVar1 = (uint64_t *)(lVar14 + 0x7a0 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xe00) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xe08) = uVar9;
        puVar1 = (uint64_t *)(lVar14 + 0x7b0 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xe10) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xe18) = uVar9;
        puVar1 = (uint64_t *)(lVar14 + 0x7c0 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xe20) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xe28) = uVar9;
        puVar1 = (uint64_t *)(lVar14 + 2000 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xe30) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xe38) = uVar9;
        puVar1 = (uint64_t *)(lVar14 + 0x7e0 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xe40) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xe48) = uVar9;
        puVar1 = (uint64_t *)(lVar14 + 0x7f0 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xe50) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xe58) = uVar9;
        puVar1 = (uint64_t *)(lVar14 + 0x800 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xe60) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xe68) = uVar9;
        lVar12 = (int64_t)*(int *)(lVar14 + 0x9d0);
        puVar1 = (uint64_t *)(lVar14 + 0x780 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xe70) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xe78) = uVar9;
        puVar1 = (uint64_t *)(lVar14 + 0x790 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xe80) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xe88) = uVar9;
        puVar1 = (uint64_t *)(lVar14 + 0x7a0 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xe90) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xe98) = uVar9;
        puVar1 = (uint64_t *)(lVar14 + 0x7b0 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xea0) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xea8) = uVar9;
        puVar1 = (uint64_t *)(lVar14 + 0x7c0 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xeb0) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xeb8) = uVar9;
        puVar1 = (uint64_t *)(lVar14 + 2000 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xec0) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xec8) = uVar9;
        puVar1 = (uint64_t *)(lVar14 + 0x7e0 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xed0) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xed8) = uVar9;
        puVar1 = (uint64_t *)(lVar14 + 0x7f0 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xee0) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xee8) = uVar9;
        puVar2 = (int32_t *)(lVar14 + 0x800 + lVar12 * 0x90);
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        *(int32_t *)(lStack_80 + 0xef0) = *puVar2;
        *(int32_t *)(lStack_80 + 0xef4) = uVar6;
        *(int32_t *)(lStack_80 + 0xef8) = uVar7;
        *(int32_t *)(lStack_80 + 0xefc) = uVar8;
        if (0 < *(int *)(lVar10 + 0x4390)) {
          lVar12 = 0;
          do {
            lVar13 = (int64_t)*(int *)(lVar14 + 0x9d0);
            lVar5 = *(int64_t *)(lVar10 + 0x43e0);
            puVar1 = (uint64_t *)(lVar14 + 0x780 + lVar13 * 0x90);
            uVar9 = puVar1[1];
            puVar3 = (uint64_t *)(lVar5 + 0xe70 + lVar12);
            *puVar3 = *puVar1;
            puVar3[1] = uVar9;
            puVar1 = (uint64_t *)(lVar14 + 0x790 + lVar13 * 0x90);
            uVar9 = puVar1[1];
            puVar3 = (uint64_t *)(lVar5 + 0xe80 + lVar12);
            *puVar3 = *puVar1;
            puVar3[1] = uVar9;
            puVar1 = (uint64_t *)(lVar14 + 0x7a0 + lVar13 * 0x90);
            uVar9 = puVar1[1];
            puVar3 = (uint64_t *)(lVar5 + 0xe90 + lVar12);
            *puVar3 = *puVar1;
            puVar3[1] = uVar9;
            puVar1 = (uint64_t *)(lVar14 + 0x7b0 + lVar13 * 0x90);
            uVar9 = puVar1[1];
            puVar3 = (uint64_t *)(lVar5 + 0xea0 + lVar12);
            *puVar3 = *puVar1;
            puVar3[1] = uVar9;
            puVar1 = (uint64_t *)(lVar14 + 0x7c0 + lVar13 * 0x90);
            uVar9 = puVar1[1];
            puVar3 = (uint64_t *)(lVar5 + 0xeb0 + lVar12);
            *puVar3 = *puVar1;
            puVar3[1] = uVar9;
            puVar1 = (uint64_t *)(lVar14 + 2000 + lVar13 * 0x90);
            uVar9 = puVar1[1];
            puVar3 = (uint64_t *)(lVar5 + 0xec0 + lVar12);
            *puVar3 = *puVar1;
            puVar3[1] = uVar9;
            puVar1 = (uint64_t *)(lVar14 + 0x7e0 + lVar13 * 0x90);
            uVar9 = puVar1[1];
            puVar3 = (uint64_t *)(lVar5 + 0xed0 + lVar12);
            *puVar3 = *puVar1;
            puVar3[1] = uVar9;
            puVar2 = (int32_t *)(lVar14 + 0x7f0 + lVar13 * 0x90);
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar4 = (int32_t *)(lVar5 + 0xee0 + lVar12);
            *puVar4 = *puVar2;
            puVar4[1] = uVar6;
            puVar4[2] = uVar7;
            puVar4[3] = uVar8;
            puVar2 = (int32_t *)(lVar14 + 0x800 + lVar13 * 0x90);
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar4 = (int32_t *)(lVar5 + 0xef0 + lVar12);
            *puVar4 = *puVar2;
            puVar4[1] = uVar6;
            puVar4[2] = uVar7;
            puVar4[3] = uVar8;
            SystemFunction_00018066e370((int64_t)iVar11 * 0x12a0 + *(int64_t *)(lVar10 + 0x43e0));
            iVar11 = iVar11 + 1;
            lVar12 = lVar12 + 0x12a0;
          } while (iVar11 < *(int *)(lVar10 + 0x4390));
        }
        SystemFunction_00018066e370(lVar10);
        lVar12 = lStack_90;
        if (*(int *)(lVar10 + 0x4380) != 0) {
          function_670c40(lStack_90,*(int32_t *)(lVar14 + 0x760),iStack_a4);
        }
        uVar15 = (uint64_t)local_var_98;
        *(int32_t *)(lVar10 + 0x1318) = 0;
        *(int32_t *)(lVar12 + 0x1c80) = 0;
        param_1 = plStack_78;
        param_2 = lStack_70;
      }
      lVar14 = 0;
      lVar10 = param_1[0x58];
      *(int64_t *)(lVar12 + 0x4308) = param_1[0x57];
      *(int64_t *)(lVar12 + 0x4310) = lVar10;
      lVar10 = param_1[0x5a];
      *(int64_t *)(lVar12 + 0x4318) = param_1[0x59];
      *(int64_t *)(lVar12 + 0x4320) = lVar10;
      lVar10 = param_1[0x5c];
      *(int64_t *)(lVar12 + 0x4328) = param_1[0x5b];
      *(int64_t *)(lVar12 + 0x4330) = lVar10;
      lVar10 = param_1[0x5e];
      *(int64_t *)(lVar12 + 0x4338) = param_1[0x5d];
      *(int64_t *)(lVar12 + 0x4340) = lVar10;
      lVar10 = param_1[0x60];
      *(int64_t *)(lVar12 + 0x4348) = param_1[0x5f];
      *(int64_t *)(lVar12 + 0x4350) = lVar10;
      lVar10 = param_1[0x62];
      *(int64_t *)(lVar12 + 0x4358) = param_1[0x61];
      *(int64_t *)(lVar12 + 0x4360) = lVar10;
      uVar6 = *(int32_t *)((int64_t)param_1 + 0x31c);
      lVar10 = param_1[100];
      uVar7 = *(int32_t *)((int64_t)param_1 + 0x324);
      *(int *)(lVar12 + 0x4368) = (int)param_1[99];
      *(int32_t *)(lVar12 + 0x436c) = uVar6;
      *(int *)(lVar12 + 0x4370) = (int)lVar10;
      *(int32_t *)(lVar12 + 0x4374) = uVar7;
      *(int64_t *)(lVar12 + 0x4378) = param_1[0x65];
      param_1[0x56] = param_4;
      iVar11 = function_66f080(lVar12,uVar15,param_2,(int64_t)param_5);
      if ((iVar11 != 0) && (*(int *)(lVar12 + 0x12c0) != 0)) {
        if (*(int *)(lVar12 + 0x12c4) != 0) {
          lVar14 = lVar12 + 0x12c8;
        }
        *param_1 = lVar14;
      }
      *(int32_t *)((int64_t)param_1 + 700) = 0;
    }
  }
LAB_18066cdc1:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_50 ^ (uint64_t)stack_array_d8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: UI系统数据结构初始化器
// 初始化UI系统的核心数据结构，包括内存分配、参数设置和状态初始化
// 参数: param_1 - 系统上下文指针, param_2 - 输出参数指针
void function_66cdf0(int64_t param_1,int64_t *param_2)
{
  int iVar1;
  int8_t stack_array_108 [32];
  int32_t *plocal_var_e8;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  int32_t local_var_c8;
  int iStack_c4;
  int32_t local_var_b8;
  int32_t local_var_a4;
  uint64_t local_var_90;
  uint64_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_70;
  int32_t local_var_38;
  uint64_t local_var_34;
  uint64_t local_var_2c;
  uint64_t local_var_24;
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_108;
  if ((*param_2 == 0) && (*(int64_t *)(param_1 + 0x1b0) != 0)) {
    local_var_d0 = 0;
    local_var_d8 = 0;
    local_var_38 = 0;
    local_var_34 = 0;
    local_var_2c = 0;
    local_var_24 = 0;
    if ((*(uint *)(param_1 + 8) & 0x10000) != 0) {
      local_var_38 = *(int32_t *)(param_1 + 0xfc);
      local_var_34 = *(uint64_t *)(param_1 + 0x100);
    }
    plocal_var_e8 = &local_var_38;
    iVar1 = function_66ef60(*(int64_t *)(param_1 + 0x1b0),&local_var_c8,&local_var_d0,&local_var_d8);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x13c) = iStack_c4;
      *(int *)(param_1 + 0x134) = iStack_c4;
      *(int32_t *)(param_1 + 0x118) = 0x102;
      *(uint *)(param_1 + 0x128) = iStack_c4 + 0x4fU & 0xfffffff0;
      *(int32_t *)(param_1 + 0x138) = local_var_c8;
      *(int32_t *)(param_1 + 0x130) = local_var_c8;
      *(int32_t *)(param_1 + 0x124) = local_var_b8;
      *(int32_t *)(param_1 + 0x140) = 1;
      *(int32_t *)(param_1 + 0x144) = 1;
      *(uint64_t *)(param_1 + 0x148) = local_var_90;
      *(uint64_t *)(param_1 + 0x150) = local_var_88;
      *(int32_t *)(param_1 + 0x16c) = local_var_a4;
      *(int32_t *)(param_1 + 0x170) = local_var_a4;
      *(uint64_t *)(param_1 + 0x158) = local_var_80;
      *(uint64_t *)(param_1 + 0x160) = 0;
      *(int32_t *)(param_1 + 0x168) = local_var_b8;
      *(int32_t *)(param_1 + 0x174) = local_var_b8;
      *(int32_t *)(param_1 + 300) = 8;
      *(int32_t *)(param_1 + 0x178) = 0xc;
      *(uint64_t *)(param_1 + 0x180) = *(uint64_t *)(param_1 + 0x2b0);
      *(uint64_t *)(param_1 + 0x188) = local_var_70;
      *(uint64_t *)(param_1 + 400) = 0;
      *param_2 = param_1 + 0x118;
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_108);
}
// 函数: UI系统数据块处理器类型1
// 处理第一种类型的数据块，包括数据解析、格式转换和参数验证
// 参数: param_1 - 系统上下文指针, param_2 - 数据块指针
// 返回值: 处理结果状态码
uint64_t function_66cf80(int64_t param_1,uint64_t *param_2)
{
  int32_t *puVar1;
  uint64_t uVar2;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  uint local_var_84;
  uint local_var_80;
  uint local_var_7c;
  uint local_var_78;
  int32_t local_var_74;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint local_var_34;
  puVar1 = (int32_t *)*param_2;
  if ((puVar1 != (int32_t *)0x0) && (*(int *)(param_1 + 0x1a8) == 0)) {
    iStack_94 = puVar1[9];
    iStack_98 = puVar1[8];
    local_var_60 = *(uint64_t *)(puVar1 + 0xe);
    local_var_58 = *(uint64_t *)(puVar1 + 0x10);
    local_var_80 = iStack_94 + 1U >> 1;
    iStack_88 = puVar1[0x16];
    local_var_84 = iStack_98 + 1U >> 1;
    local_var_50 = *(uint64_t *)(puVar1 + 0x12);
    local_var_34 = (uint)(iStack_88 - iStack_98) >> 1;
    local_var_74 = puVar1[0x17];
    iStack_90 = iStack_98;
    iStack_8c = iStack_94;
    local_var_7c = local_var_84;
    local_var_78 = local_var_80;
    uVar2 = function_66f2e0(*(uint64_t *)(param_1 + 0x1b0),*puVar1,&iStack_98);
    return uVar2;
  }
  return 8;
}
// 函数: UI系统数据块处理器类型2
// 处理第二种类型的数据块，与类型1类似但使用不同的处理逻辑
// 参数: param_1 - 系统上下文指针, param_2 - 数据块指针
// 返回值: 处理结果状态码
uint64_t function_66d040(int64_t param_1,uint64_t *param_2)
{
  int32_t *puVar1;
  uint64_t uVar2;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  uint local_var_84;
  uint local_var_80;
  uint local_var_7c;
  uint local_var_78;
  int32_t local_var_74;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint local_var_34;
  puVar1 = (int32_t *)*param_2;
  if ((puVar1 != (int32_t *)0x0) && (*(int *)(param_1 + 0x1a8) == 0)) {
    iStack_94 = puVar1[9];
    iStack_98 = puVar1[8];
    local_var_60 = *(uint64_t *)(puVar1 + 0xe);
    local_var_58 = *(uint64_t *)(puVar1 + 0x10);
    local_var_80 = iStack_94 + 1U >> 1;
    iStack_88 = puVar1[0x16];
    local_var_84 = iStack_98 + 1U >> 1;
    local_var_50 = *(uint64_t *)(puVar1 + 0x12);
    local_var_34 = (uint)(iStack_88 - iStack_98) >> 1;
    local_var_74 = puVar1[0x17];
    iStack_90 = iStack_98;
    iStack_8c = iStack_94;
    local_var_7c = local_var_84;
    local_var_78 = local_var_80;
    uVar2 = function_66efd0(*(uint64_t *)(param_1 + 0x1b0),*puVar1,&iStack_98);
    return uVar2;
  }
  return 8;
}
// 函数: UI系统参数验证和队列管理器
// 验证输入参数的有效性并管理参数队列，支持最多10个参数的缓存
// 参数: param_1 - 系统上下文指针, param_2 - 参数1, param_3 - 参数2, param_4 - 状态输出指针
// 返回值: 验证结果和状态码
uint64_t function_66d130(int64_t param_1,int64_t param_2,int param_3,int32_t *param_4)
{
  int iVar1;
  *param_4 = 0;
  if (*(int *)(param_1 + 700) == 0) {
// WARNING: Subroutine does not return
    memset(param_1 + 0x2c0,0,0x6c);
  }
  iVar1 = *(int *)(param_1 + 0x2b8);
  if (iVar1 != 0) {
    if ((param_2 != 0) || (param_3 != 0)) {
      *(int64_t *)(param_1 + 0x2c0 + (uint64_t)*(uint *)(param_1 + 700) * 8) = param_2;
      *(int *)(param_1 + 0x308 + (uint64_t)*(uint *)(param_1 + 700) * 4) = param_3;
      *(int *)(param_1 + 700) = *(int *)(param_1 + 700) + 1;
      if (*(uint *)(param_1 + 700) < 10) {
        return 0;
      }
      *(int32_t *)(param_1 + 700) = 0;
      *param_4 = 8;
      return 0xffffffff;
    }
    if (iVar1 != 0) {
      return 1;
    }
  }
  if ((param_2 == 0) && (param_3 == 0)) {
    return 0;
  }
  if (iVar1 == 0) {
    *(int64_t *)(param_1 + 0x2c0) = param_2;
    *(int *)(param_1 + 0x308) = param_3;
    *(int32_t *)(param_1 + 700) = 1;
  }
  return 1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: UI系统参数数据处理器
// 处理UI系统的参数数据，包括数据解析、格式验证和特殊标记处理
// 参数: param_1 - 数据缓冲区指针, param_2 - 数据长度, param_3 - 输出结构指针, param_4 - 处理函数指针, param_5 - 附加参数
void function_66d210(byte *param_1,uint param_2,int64_t param_3,code *param_4,uint64_t param_5)
{
  uint uVar1;
  int8_t stack_array_58 [32];
  byte abStack_38 [16];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_58;
  if (param_1 < param_1 + param_2) {
    if (param_4 != (code *)0x0) {
      uVar1 = param_2;
      if (10 < param_2) {
        uVar1 = 10;
      }
      (*param_4)(param_5,param_1,abStack_38,uVar1);
      param_1 = abStack_38;
    }
    *(int32_t *)(param_3 + 0xc) = 0;
    if ((((9 < param_2) && ((*param_1 & 1) == 0)) &&
        (*(int32_t *)(param_3 + 0xc) = 1, param_1[3] == 0x9d)) &&
       ((param_1[4] == 1 && (param_1[5] == 0x2a)))) {
      *(uint *)(param_3 + 4) = *(ushort *)(param_1 + 6) & 0x3fff;
      *(uint *)(param_3 + 8) = *(ushort *)(param_1 + 8) & 0x3fff;
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_58);
}
// 函数: UI系统资源清理器
// 清理UI系统占用的资源，包括内存释放、句柄关闭和状态重置
// 参数: param_1 - 资源句柄指针
// 返回值: 清理结果状态码
uint64_t function_66d310(uint64_t *param_1)
{
  if (param_1 == (uint64_t *)0x0) {
    return 8;
  }
  if ((param_1[1] != 0) && (param_1[6] != 0)) {
    (**(code **)(param_1[1] + 0x18))();
    param_1[1] = 0;
    *param_1 = 0;
    param_1[6] = 0;
    *(int32_t *)(param_1 + 2) = 0;
    return 0;
  }
  *(int32_t *)(param_1 + 2) = 1;
  return 1;
}
// 函数: UI系统带格式错误设置器
// 设置UI系统错误状态并支持格式化错误消息
// 参数: param_1 - 错误结构指针, param_2 - 错误代码, param_3 - 格式化字符串, param_4 - 可变参数
void SystemInitializationProcessor(int32_t *param_1,int32_t param_2,int64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  uint64_t stack_special_x_20;
  *param_1 = param_2;
  param_1[1] = 0;
  stack_special_x_20 = param_4;
  if (param_3 != 0) {
    param_1[1] = 1;
    puVar1 = (uint64_t *)SystemFunction_00018004b9a0();
    __stdio_common_vsprintf(*puVar1 | 2,param_1 + 2,0x4f,param_3,0,&stack_special_x_20);
    *(int8_t *)((int64_t)param_1 + 0x57) = 0;
  }
  if (param_1[0x16] == 0) {
    return;
  }
// WARNING: Subroutine does not return
  longjmp(param_1 + 0x18,*param_1);
}
// 函数: UI系统简单错误设置器
// 设置UI系统错误状态的简化版本，不支持格式化消息
// 参数: param_1 - 错误结构指针, param_2 - 错误代码, param_3 - 错误消息
void function_66d37f(int32_t *param_1,int32_t param_2,int64_t param_3)
{
  uint64_t *puVar1;
  *param_1 = param_2;
  param_1[1] = 0;
  if (param_3 != 0) {
    param_1[1] = 1;
    puVar1 = (uint64_t *)SystemFunction_00018004b9a0();
    __stdio_common_vsprintf(*puVar1 | 2,param_1 + 2,0x4f,param_3,0);
    *(int8_t *)((int64_t)param_1 + 0x57) = 0;
  }
  if (param_1[0x16] == 0) {
    return;
  }
// WARNING: Subroutine does not return
  longjmp(param_1 + 0x18,*param_1);
}
// 函数: UI系统错误跳转触发器
// 触发UI系统的错误处理跳转机制，实现错误状态的快速传播
// 参数: param_1 - 错误上下文指针
void function_66d398(int64_t param_1)
{
  uint64_t *puVar1;
  int32_t *unaff_RDI;
  *(int32_t *)(param_1 + 4) = 1;
  puVar1 = (uint64_t *)SystemFunction_00018004b9a0();
  __stdio_common_vsprintf(*puVar1 | 2,unaff_RDI + 2,0x4f);
  *(int8_t *)((int64_t)unaff_RDI + 0x57) = 0;
  if (unaff_RDI[0x16] == 0) {
    return;
  }
// WARNING: Subroutine does not return
  longjmp(unaff_RDI + 0x18,*unaff_RDI);
}
// 函数: UI系统错误跳转执行器
// 执行UI系统的错误跳转操作，将控制权转移到错误处理代码
void function_66d3e9(void)
{
  int32_t *unaff_RDI;
  if (unaff_RDI[0x16] == 0) {
    return;
  }
// WARNING: Subroutine does not return
  longjmp(unaff_RDI + 0x18,*unaff_RDI);
}
// 函数: UI系统空操作函数
// 不执行任何操作的占位符函数，用于保持API完整性
void function_66d3f4(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: UI系统一次性执行保护器
// 确保指定的函数只执行一次，使用临界区保护线程安全
// 参数: param_1 - 要执行的函数指针
void function_66d410(code *param_1)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  bool bVar4;
  if (ui_system_memory == 0) {
    LOCK();
    ui_system_memory = ui_system_memory + 1;
    UNLOCK();
    lVar3 = malloc(0x28);
    InitializeCriticalSection(lVar3);
    LOCK();
    bVar4 = ui_system_memory != 0;
    lVar2 = lVar3;
    if (bVar4) {
      lVar2 = ui_system_memory;
    }
    ui_system_memory = lVar2;
    UNLOCK();
    if (bVar4) {
      DeleteCriticalSection(lVar3);
      free(lVar3);
    }
    EnterCriticalSection(ui_system_memory);
    if (ui_system_memory == 0) {
      (*param_1)();
      ui_system_memory = 1;
    }
    LeaveCriticalSection(ui_system_memory);
    LOCK();
    iVar1 = ui_system_memory + -1;
    UNLOCK();
    bVar4 = ui_system_memory == 1;
    ui_system_memory = iVar1;
    if (bVar4) {
      DeleteCriticalSection(ui_system_memory);
      free(ui_system_memory);
      ui_system_memory = 0;
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: UI系统一次性执行初始化器
// 初始化一次性执行机制的上下文，为后续的函数执行做准备
void function_66d426(void)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  code *unaff_RDI;
  bool bVar4;
  LOCK();
  ui_system_memory = ui_system_memory + 1;
  UNLOCK();
  lVar3 = malloc(0x28);
  InitializeCriticalSection(lVar3);
  LOCK();
  bVar4 = ui_system_memory != 0;
  lVar2 = lVar3;
  if (bVar4) {
    lVar2 = ui_system_memory;
  }
  ui_system_memory = lVar2;
  UNLOCK();
  if (bVar4) {
    DeleteCriticalSection(lVar3);
    free(lVar3);
  }
  EnterCriticalSection(ui_system_memory);
  if (ui_system_memory == 0) {
    (*unaff_RDI)();
    ui_system_memory = 1;
  }
  LeaveCriticalSection(ui_system_memory);
  LOCK();
  iVar1 = ui_system_memory + -1;
  UNLOCK();
  bVar4 = ui_system_memory == 1;
  ui_system_memory = iVar1;
  if (bVar4) {
    DeleteCriticalSection(ui_system_memory);
    free(ui_system_memory);
    ui_system_memory = 0;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: UI系统一次性执行完成器
// 完成一次性执行的收尾工作，包括临界区清理和资源释放
void function_66d483(void)
{
  int iVar1;
  code *unaff_RDI;
  bool bVar2;
  (*unaff_RDI)();
  ui_system_memory = 1;
  LeaveCriticalSection(ui_system_memory);
  LOCK();
  iVar1 = ui_system_memory + -1;
  UNLOCK();
  bVar2 = ui_system_memory == 1;
  ui_system_memory = iVar1;
  if (bVar2) {
    DeleteCriticalSection(ui_system_memory);
    free(ui_system_memory);
    ui_system_memory = 0;
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x00018066d575)
// WARNING: Removing unreachable block (ram,0x00018066d506)
// WARNING: Removing unreachable block (ram,0x00018066d4ea)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: UI系统CPU特性检测器
// 检测CPU支持的指令集特性，并根据检测结果优化函数指针选择
// 支持SSE、AVX等指令集的自动检测和优化
void function_66d4e0(void)
{
  uint *puVar1;
  int64_t lVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  byte in_XCR0;
  puVar1 = (uint *)cpuid_basic_info(0);
  bVar5 = false;
  bVar6 = false;
  bVar4 = false;
  if (*puVar1 != 0) {
    lVar2 = cpuid_Version_info(1);
    uVar3 = *(uint *)(lVar2 + 0xc);
    bVar6 = (uVar3 & 1) != 0;
    bVar4 = (uVar3 >> 9 & 1) != 0;
    bVar5 = (uVar3 >> 0x13 & 1) != 0;
    if ((((uVar3 & 0x18000000) == 0x18000000) && ((in_XCR0 & 6) == 6)) && (6 < *puVar1)) {
      cpuid_Extended_Feature_Enumeration_info(7);
    }
  }
  ui_system_config_global_data = &processed_var_7287_ptr;
  if (bVar4) {
    ui_system_config_global_data = &processed_var_656_ptr;
  }
  ui_system_config_memory = &processed_var_7997_ptr;
  if (bVar4) {
    ui_system_config_memory = &ui_system_data_1412_ptr;
  }
  ui_system_config_memory = &rendering_buffer_2384_ptr;
  if (bVar6) {
    ui_system_config_memory = &rendering_buffer_2608_ptr;
  }
  ui_system_config_memory = function_6714a0;
  if (bVar6) {
    ui_system_config_memory = function_6718d0;
  }
  ui_system_config_memory = function_673220;
  if (bVar4) {
    ui_system_config_memory = function_673850;
  }
  ui_system_config_memory = function_671eb0;
  if (bVar6) {
    ui_system_config_memory = function_6721d0;
  }
  if (bVar5) {
    ui_system_config_memory = function_6725c0;
  }
  ui_system_config_memory = function_672a50;
  if (bVar6) {
    ui_system_config_memory = function_672da0;
  }
  ui_system_config_memory = function_673360;
  if (bVar5) {
    ui_system_config_memory = function_673970;
  }
  ui_system_config_memory = function_673e10;
  if (bVar4) {
    ui_system_config_memory = function_673f50;
  }
  ui_system_config_memory = function_674040;
  if (bVar4) {
    ui_system_config_memory = function_674120;
  }
  ui_system_config_memory = function_6742a0;
  if (bVar4) {
    ui_system_config_memory = function_6743e0;
  }
  ui_system_config_memory = function_6744d0;
  if (bVar4) {
    ui_system_config_memory = function_674610;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: UI系统一次性执行保护器（替代版本）
// 与主版本功能相同，但使用不同的临界区变量，避免冲突
// 参数: param_1 - 要执行的函数指针
void function_66d6f0(code *param_1)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  bool bVar4;
  if (ui_system_memory == 0) {
    LOCK();
    ui_system_memory = ui_system_memory + 1;
    UNLOCK();
    lVar3 = malloc(0x28);
    InitializeCriticalSection(lVar3);
    LOCK();
    bVar4 = ui_system_memory != 0;
    lVar2 = lVar3;
    if (bVar4) {
      lVar2 = ui_system_memory;
    }
    ui_system_memory = lVar2;
    UNLOCK();
    if (bVar4) {
      DeleteCriticalSection(lVar3);
      free(lVar3);
    }
    EnterCriticalSection(ui_system_memory);
    if (ui_system_memory == 0) {
      (*param_1)();
      ui_system_memory = 1;
    }
    LeaveCriticalSection(ui_system_memory);
    LOCK();
    iVar1 = ui_system_memory + -1;
    UNLOCK();
    bVar4 = ui_system_memory == 1;
    ui_system_memory = iVar1;
    if (bVar4) {
      DeleteCriticalSection(ui_system_memory);
      free(ui_system_memory);
      ui_system_memory = 0;
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: UI系统替代一次性执行初始化器
// 初始化替代版本的一次性执行机制，使用不同的临界区变量
void function_66d706(void)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  code *unaff_RDI;
  bool bVar4;
  LOCK();
  ui_system_memory = ui_system_memory + 1;
  UNLOCK();
  lVar3 = malloc(0x28);
  InitializeCriticalSection(lVar3);
  LOCK();
  bVar4 = ui_system_memory != 0;
  lVar2 = lVar3;
  if (bVar4) {
    lVar2 = ui_system_memory;
  }
  ui_system_memory = lVar2;
  UNLOCK();
  if (bVar4) {
    DeleteCriticalSection(lVar3);
    free(lVar3);
  }
  EnterCriticalSection(ui_system_memory);
  if (ui_system_memory == 0) {
    (*unaff_RDI)();
    ui_system_memory = 1;
  }
  LeaveCriticalSection(ui_system_memory);
  LOCK();
  iVar1 = ui_system_memory + -1;
  UNLOCK();
  bVar4 = ui_system_memory == 1;
  ui_system_memory = iVar1;
  if (bVar4) {
    DeleteCriticalSection(ui_system_memory);
    free(ui_system_memory);
    ui_system_memory = 0;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: UI系统替代一次性执行完成器
// 完成替代版本一次性执行的收尾工作
void function_66d763(void)
{
  int iVar1;
  code *unaff_RDI;
  bool bVar2;
  (*unaff_RDI)();
  ui_system_memory = 1;
  LeaveCriticalSection(ui_system_memory);
  LOCK();
  iVar1 = ui_system_memory + -1;
  UNLOCK();
  bVar2 = ui_system_memory == 1;
  ui_system_memory = iVar1;
  if (bVar2) {
    DeleteCriticalSection(ui_system_memory);
    free(ui_system_memory);
    ui_system_memory = 0;
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x00018066d855)
// WARNING: Removing unreachable block (ram,0x00018066d7e6)
// WARNING: Removing unreachable block (ram,0x00018066d7ca)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
/*
 * 技术说明：
 * 1. 本模块实现了UI系统的高级处理功能，包含19个语义化命名的核心函数
 * 2. 主要功能模块：
 *    - 参数处理：主参数处理器、参数验证器、数据块处理器
 *    - 数据管理：数据结构初始化器、参数数据处理器
 *    - 错误处理：错误设置器、错误跳转器、资源清理器
 *    - 线程同步：一次性执行保护器、临界区管理
 *    - 性能优化：CPU特性检测器、指令集优化
 * 3. 关键技术特点：
 *    - 支持最多10个参数的队列管理
 *    - 实现线程安全的一次性执行机制
 *    - 支持SSE、AVX等CPU指令集的自动检测
 *    - 提供完整的错误处理和资源管理机制
 * 4. 内存管理：
 *    - 使用0x28字节的临界区结构
 *    - 支持0x90字节的数据块处理
 *    - 大数据块支持0x12a0字节的处理
 * 5. 安全特性：
 *    - 使用临界区保护共享资源
 *    - 实现参数验证和边界检查
 *    - 提供资源自动清理机制
 */