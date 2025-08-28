#include "TaleWorlds.Native.Split.h"

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
#define ui_system_process_main_parameters FUN_18066c7e0
#define ui_system_initialize_data_structures FUN_18066cdf0
#define ui_system_process_data_block_type1 FUN_18066cf80
#define ui_system_process_data_block_type2 FUN_18066d040
#define ui_system_validate_and_queue_parameters FUN_18066d130
#define ui_system_process_parameter_data FUN_18066d210
#define ui_system_cleanup_resource_handler FUN_18066d310
#define ui_system_set_error_with_format FUN_18066d370
#define ui_system_set_error_simple FUN_18066d37f
#define ui_system_trigger_error_jump FUN_18066d398
#define ui_system_execute_error_jump FUN_18066d3e9
#define ui_system_no_operation FUN_18066d3f4
#define ui_system_execute_once_protected FUN_18066d410
#define ui_system_cpu_feature_detection FUN_18066d4e0
#define ui_system_execute_once_alternative FUN_18066d6f0
#define ui_system_execute_once_initializer FUN_18066d426
#define ui_system_execute_once_finalizer FUN_18066d483
#define ui_system_execute_once_alternative_initializer FUN_18066d706
#define ui_system_execute_once_alternative_finalizer FUN_18066d763

// 函数: UI系统主参数处理器
// 处理UI系统的主要参数输入，包括参数验证、数据结构初始化、状态管理和错误处理
// 参数: param_1 - UI系统上下文指针, param_2 - 输入参数1, param_3 - 输入参数2, param_4 - 输入参数3, param_5 - 输入参数4
void ui_system_process_main_parameters(longlong *param_1,longlong param_2,ulonglong param_3,longlong param_4,int param_5)
                  )

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_d8 [32];
  longlong lStack_b8;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  uint uStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong *plStack_78;
  longlong lStack_70;
  undefined4 uStack_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  uint uStack_54;
  ulonglong uStack_50;
  
  uStack_50 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  uStack_98 = (uint)param_3;
  uVar15 = param_3 & 0xffffffff;
  iStack_a8 = 0;
  iStack_a4 = 0;
  plStack_78 = param_1;
  lStack_70 = param_2;
  if (((((int)param_1[0x57] != 0) || (param_2 != 0)) || (uStack_98 != 0)) &&
     (iVar11 = FUN_18066d130(param_1,param_2,param_3,&iStack_a8), 0 < iVar11)) {
    lStack_b8 = param_1[0x22];
    lVar12 = param_1[0x1d];
    iVar11 = *(int *)((longlong)param_1 + 0xec);
    iStack_a0 = (int)lVar12;
    iStack_9c = iVar11;
    iStack_a8 = FUN_18066d210(param_1[0x58],(int)param_1[0x61],(longlong)param_1 + 0xe4,
                              param_1[0x21]);
    if ((iStack_a8 == 5) && ((int)param_1[0x1e] == 0)) {
      iStack_a8 = 0;
    }
    if ((*(int *)((longlong)param_1 + 0xf4) == 0) && ((int)param_1[0x1e] == 0)) {
      iStack_a8 = 5;
    }
    if ((*(int *)((longlong)param_1 + 0xec) != iVar11) ||
       (iVar11 = iStack_a4, (int)param_1[0x1d] != (int)lVar12)) {
      iVar11 = 1;
    }
    if ((iStack_a8 == 0) && (*(int *)((longlong)param_1 + 0xf4) == 0)) {
      uStack_68 = (undefined4)param_1[0x1d];
      uStack_60 = 9;
      uStack_58 = (undefined4)param_1[0x1b];
      uStack_54 = *(uint *)(param_1 + 1) & 0x20000;
      if (((int)param_1[0x1f] == 0) && ((*(uint *)(param_1 + 1) & 0x10000) != 0)) {
        *(undefined4 *)((longlong)param_1 + 0xfc) = 0x403;
        param_1[0x20] = 4;
      }
      iStack_64 = *(int *)((longlong)param_1 + 0xec);
      iStack_a8 = FUN_18066eea0(param_1 + 0x35,&uStack_68);
      *(undefined4 *)((longlong)param_1 + 0xf4) = 1;
    }
    if (*(int *)((longlong)param_1 + 0xf4) != 0) {
      *(longlong *)(param_1[0x36] + 0x4430) = param_1[0x21];
      *(longlong *)(param_1[0x36] + 0x4438) = param_1[0x22];
    }
    if (iStack_a8 == 0) {
      lVar12 = param_1[0x36];
      lStack_90 = lVar12;
      if (iVar11 != 0) {
        lStack_88 = lVar12 + 0x12c0;
        *(int *)(lVar12 + 0x1a20) = (int)param_1[0x1d];
        *(undefined4 *)(lVar12 + 0x1a24) = *(undefined4 *)((longlong)param_1 + 0xec);
        iStack_a4 = *(int *)(lVar12 + 0x1e74);
        lStack_80 = lVar12;
        iVar11 = __intrinsic_setjmp(lVar12 + 0x1320,auStack_d8);
        lVar14 = lStack_88;
        lVar10 = lStack_90;
        if (iVar11 != 0) {
          *(undefined4 *)(lStack_90 + 0x1318) = 0;
          func_0x000180001000();
          goto LAB_18066cdc1;
        }
        *(undefined4 *)(lStack_90 + 0x1318) = 1;
        if (*(int *)(lStack_88 + 0x760) < 1) {
          *(int *)(lStack_88 + 0x760) = iStack_a0;
          FUN_18066d370(lStack_88,7,&UNK_180946ae0);
        }
        if (*(int *)(lVar14 + 0x764) < 1) {
          *(int *)(lVar14 + 0x764) = iStack_9c;
          FUN_18066d370(lVar14,7,&UNK_180946af8);
        }
        iVar11 = FUN_18066e500(lVar14,*(undefined4 *)(lVar14 + 0x760),
                               *(undefined4 *)(lVar14 + 0x764));
        if (iVar11 != 0) {
          FUN_18066d370(lVar14,2,&UNK_180946b10);
        }
        lVar12 = (longlong)*(int *)(lVar14 + 0x9d4);
        iVar11 = 0;
        puVar1 = (undefined8 *)(lVar14 + 0x780 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(undefined8 *)(lStack_80 + 0xde0) = *puVar1;
        *(undefined8 *)(lStack_80 + 0xde8) = uVar9;
        puVar1 = (undefined8 *)(lVar14 + 0x790 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(undefined8 *)(lStack_80 + 0xdf0) = *puVar1;
        *(undefined8 *)(lStack_80 + 0xdf8) = uVar9;
        puVar1 = (undefined8 *)(lVar14 + 0x7a0 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(undefined8 *)(lStack_80 + 0xe00) = *puVar1;
        *(undefined8 *)(lStack_80 + 0xe08) = uVar9;
        puVar1 = (undefined8 *)(lVar14 + 0x7b0 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(undefined8 *)(lStack_80 + 0xe10) = *puVar1;
        *(undefined8 *)(lStack_80 + 0xe18) = uVar9;
        puVar1 = (undefined8 *)(lVar14 + 0x7c0 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(undefined8 *)(lStack_80 + 0xe20) = *puVar1;
        *(undefined8 *)(lStack_80 + 0xe28) = uVar9;
        puVar1 = (undefined8 *)(lVar14 + 2000 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(undefined8 *)(lStack_80 + 0xe30) = *puVar1;
        *(undefined8 *)(lStack_80 + 0xe38) = uVar9;
        puVar1 = (undefined8 *)(lVar14 + 0x7e0 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(undefined8 *)(lStack_80 + 0xe40) = *puVar1;
        *(undefined8 *)(lStack_80 + 0xe48) = uVar9;
        puVar1 = (undefined8 *)(lVar14 + 0x7f0 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(undefined8 *)(lStack_80 + 0xe50) = *puVar1;
        *(undefined8 *)(lStack_80 + 0xe58) = uVar9;
        puVar1 = (undefined8 *)(lVar14 + 0x800 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(undefined8 *)(lStack_80 + 0xe60) = *puVar1;
        *(undefined8 *)(lStack_80 + 0xe68) = uVar9;
        lVar12 = (longlong)*(int *)(lVar14 + 0x9d0);
        puVar1 = (undefined8 *)(lVar14 + 0x780 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(undefined8 *)(lStack_80 + 0xe70) = *puVar1;
        *(undefined8 *)(lStack_80 + 0xe78) = uVar9;
        puVar1 = (undefined8 *)(lVar14 + 0x790 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(undefined8 *)(lStack_80 + 0xe80) = *puVar1;
        *(undefined8 *)(lStack_80 + 0xe88) = uVar9;
        puVar1 = (undefined8 *)(lVar14 + 0x7a0 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(undefined8 *)(lStack_80 + 0xe90) = *puVar1;
        *(undefined8 *)(lStack_80 + 0xe98) = uVar9;
        puVar1 = (undefined8 *)(lVar14 + 0x7b0 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(undefined8 *)(lStack_80 + 0xea0) = *puVar1;
        *(undefined8 *)(lStack_80 + 0xea8) = uVar9;
        puVar1 = (undefined8 *)(lVar14 + 0x7c0 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(undefined8 *)(lStack_80 + 0xeb0) = *puVar1;
        *(undefined8 *)(lStack_80 + 0xeb8) = uVar9;
        puVar1 = (undefined8 *)(lVar14 + 2000 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(undefined8 *)(lStack_80 + 0xec0) = *puVar1;
        *(undefined8 *)(lStack_80 + 0xec8) = uVar9;
        puVar1 = (undefined8 *)(lVar14 + 0x7e0 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(undefined8 *)(lStack_80 + 0xed0) = *puVar1;
        *(undefined8 *)(lStack_80 + 0xed8) = uVar9;
        puVar1 = (undefined8 *)(lVar14 + 0x7f0 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(undefined8 *)(lStack_80 + 0xee0) = *puVar1;
        *(undefined8 *)(lStack_80 + 0xee8) = uVar9;
        puVar2 = (undefined4 *)(lVar14 + 0x800 + lVar12 * 0x90);
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        *(undefined4 *)(lStack_80 + 0xef0) = *puVar2;
        *(undefined4 *)(lStack_80 + 0xef4) = uVar6;
        *(undefined4 *)(lStack_80 + 0xef8) = uVar7;
        *(undefined4 *)(lStack_80 + 0xefc) = uVar8;
        if (0 < *(int *)(lVar10 + 0x4390)) {
          lVar12 = 0;
          do {
            lVar13 = (longlong)*(int *)(lVar14 + 0x9d0);
            lVar5 = *(longlong *)(lVar10 + 0x43e0);
            puVar1 = (undefined8 *)(lVar14 + 0x780 + lVar13 * 0x90);
            uVar9 = puVar1[1];
            puVar3 = (undefined8 *)(lVar5 + 0xe70 + lVar12);
            *puVar3 = *puVar1;
            puVar3[1] = uVar9;
            puVar1 = (undefined8 *)(lVar14 + 0x790 + lVar13 * 0x90);
            uVar9 = puVar1[1];
            puVar3 = (undefined8 *)(lVar5 + 0xe80 + lVar12);
            *puVar3 = *puVar1;
            puVar3[1] = uVar9;
            puVar1 = (undefined8 *)(lVar14 + 0x7a0 + lVar13 * 0x90);
            uVar9 = puVar1[1];
            puVar3 = (undefined8 *)(lVar5 + 0xe90 + lVar12);
            *puVar3 = *puVar1;
            puVar3[1] = uVar9;
            puVar1 = (undefined8 *)(lVar14 + 0x7b0 + lVar13 * 0x90);
            uVar9 = puVar1[1];
            puVar3 = (undefined8 *)(lVar5 + 0xea0 + lVar12);
            *puVar3 = *puVar1;
            puVar3[1] = uVar9;
            puVar1 = (undefined8 *)(lVar14 + 0x7c0 + lVar13 * 0x90);
            uVar9 = puVar1[1];
            puVar3 = (undefined8 *)(lVar5 + 0xeb0 + lVar12);
            *puVar3 = *puVar1;
            puVar3[1] = uVar9;
            puVar1 = (undefined8 *)(lVar14 + 2000 + lVar13 * 0x90);
            uVar9 = puVar1[1];
            puVar3 = (undefined8 *)(lVar5 + 0xec0 + lVar12);
            *puVar3 = *puVar1;
            puVar3[1] = uVar9;
            puVar1 = (undefined8 *)(lVar14 + 0x7e0 + lVar13 * 0x90);
            uVar9 = puVar1[1];
            puVar3 = (undefined8 *)(lVar5 + 0xed0 + lVar12);
            *puVar3 = *puVar1;
            puVar3[1] = uVar9;
            puVar2 = (undefined4 *)(lVar14 + 0x7f0 + lVar13 * 0x90);
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar4 = (undefined4 *)(lVar5 + 0xee0 + lVar12);
            *puVar4 = *puVar2;
            puVar4[1] = uVar6;
            puVar4[2] = uVar7;
            puVar4[3] = uVar8;
            puVar2 = (undefined4 *)(lVar14 + 0x800 + lVar13 * 0x90);
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar4 = (undefined4 *)(lVar5 + 0xef0 + lVar12);
            *puVar4 = *puVar2;
            puVar4[1] = uVar6;
            puVar4[2] = uVar7;
            puVar4[3] = uVar8;
            func_0x00018066e370((longlong)iVar11 * 0x12a0 + *(longlong *)(lVar10 + 0x43e0));
            iVar11 = iVar11 + 1;
            lVar12 = lVar12 + 0x12a0;
          } while (iVar11 < *(int *)(lVar10 + 0x4390));
        }
        func_0x00018066e370(lVar10);
        lVar12 = lStack_90;
        if (*(int *)(lVar10 + 0x4380) != 0) {
          FUN_180670c40(lStack_90,*(undefined4 *)(lVar14 + 0x760),iStack_a4);
        }
        uVar15 = (ulonglong)uStack_98;
        *(undefined4 *)(lVar10 + 0x1318) = 0;
        *(undefined4 *)(lVar12 + 0x1c80) = 0;
        param_1 = plStack_78;
        param_2 = lStack_70;
      }
      lVar14 = 0;
      lVar10 = param_1[0x58];
      *(longlong *)(lVar12 + 0x4308) = param_1[0x57];
      *(longlong *)(lVar12 + 0x4310) = lVar10;
      lVar10 = param_1[0x5a];
      *(longlong *)(lVar12 + 0x4318) = param_1[0x59];
      *(longlong *)(lVar12 + 0x4320) = lVar10;
      lVar10 = param_1[0x5c];
      *(longlong *)(lVar12 + 0x4328) = param_1[0x5b];
      *(longlong *)(lVar12 + 0x4330) = lVar10;
      lVar10 = param_1[0x5e];
      *(longlong *)(lVar12 + 0x4338) = param_1[0x5d];
      *(longlong *)(lVar12 + 0x4340) = lVar10;
      lVar10 = param_1[0x60];
      *(longlong *)(lVar12 + 0x4348) = param_1[0x5f];
      *(longlong *)(lVar12 + 0x4350) = lVar10;
      lVar10 = param_1[0x62];
      *(longlong *)(lVar12 + 0x4358) = param_1[0x61];
      *(longlong *)(lVar12 + 0x4360) = lVar10;
      uVar6 = *(undefined4 *)((longlong)param_1 + 0x31c);
      lVar10 = param_1[100];
      uVar7 = *(undefined4 *)((longlong)param_1 + 0x324);
      *(int *)(lVar12 + 0x4368) = (int)param_1[99];
      *(undefined4 *)(lVar12 + 0x436c) = uVar6;
      *(int *)(lVar12 + 0x4370) = (int)lVar10;
      *(undefined4 *)(lVar12 + 0x4374) = uVar7;
      *(longlong *)(lVar12 + 0x4378) = param_1[0x65];
      param_1[0x56] = param_4;
      iVar11 = FUN_18066f080(lVar12,uVar15,param_2,(longlong)param_5);
      if ((iVar11 != 0) && (*(int *)(lVar12 + 0x12c0) != 0)) {
        if (*(int *)(lVar12 + 0x12c4) != 0) {
          lVar14 = lVar12 + 0x12c8;
        }
        *param_1 = lVar14;
      }
      *(undefined4 *)((longlong)param_1 + 700) = 0;
    }
  }
LAB_18066cdc1:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_50 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: UI系统数据结构初始化器
// 初始化UI系统的核心数据结构，包括内存分配、参数设置和状态初始化
// 参数: param_1 - 系统上下文指针, param_2 - 输出参数指针
void ui_system_initialize_data_structures(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_108 [32];
  undefined4 *puStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  undefined4 uStack_b8;
  undefined4 uStack_a4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined8 uStack_24;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_108;
  if ((*param_2 == 0) && (*(longlong *)(param_1 + 0x1b0) != 0)) {
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_2c = 0;
    uStack_24 = 0;
    if ((*(uint *)(param_1 + 8) & 0x10000) != 0) {
      uStack_38 = *(undefined4 *)(param_1 + 0xfc);
      uStack_34 = *(undefined8 *)(param_1 + 0x100);
    }
    puStack_e8 = &uStack_38;
    iVar1 = FUN_18066ef60(*(longlong *)(param_1 + 0x1b0),&uStack_c8,&uStack_d0,&uStack_d8);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x13c) = iStack_c4;
      *(int *)(param_1 + 0x134) = iStack_c4;
      *(undefined4 *)(param_1 + 0x118) = 0x102;
      *(uint *)(param_1 + 0x128) = iStack_c4 + 0x4fU & 0xfffffff0;
      *(undefined4 *)(param_1 + 0x138) = uStack_c8;
      *(undefined4 *)(param_1 + 0x130) = uStack_c8;
      *(undefined4 *)(param_1 + 0x124) = uStack_b8;
      *(undefined4 *)(param_1 + 0x140) = 1;
      *(undefined4 *)(param_1 + 0x144) = 1;
      *(undefined8 *)(param_1 + 0x148) = uStack_90;
      *(undefined8 *)(param_1 + 0x150) = uStack_88;
      *(undefined4 *)(param_1 + 0x16c) = uStack_a4;
      *(undefined4 *)(param_1 + 0x170) = uStack_a4;
      *(undefined8 *)(param_1 + 0x158) = uStack_80;
      *(undefined8 *)(param_1 + 0x160) = 0;
      *(undefined4 *)(param_1 + 0x168) = uStack_b8;
      *(undefined4 *)(param_1 + 0x174) = uStack_b8;
      *(undefined4 *)(param_1 + 300) = 8;
      *(undefined4 *)(param_1 + 0x178) = 0xc;
      *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x2b0);
      *(undefined8 *)(param_1 + 0x188) = uStack_70;
      *(undefined8 *)(param_1 + 400) = 0;
      *param_2 = param_1 + 0x118;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_108);
}



// 函数: UI系统数据块处理器类型1
// 处理第一种类型的数据块，包括数据解析、格式转换和参数验证
// 参数: param_1 - 系统上下文指针, param_2 - 数据块指针
// 返回值: 处理结果状态码
undefined8 ui_system_process_data_block_type1(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  uint uStack_34;
  
  puVar1 = (undefined4 *)*param_2;
  if ((puVar1 != (undefined4 *)0x0) && (*(int *)(param_1 + 0x1a8) == 0)) {
    iStack_94 = puVar1[9];
    iStack_98 = puVar1[8];
    uStack_60 = *(undefined8 *)(puVar1 + 0xe);
    uStack_58 = *(undefined8 *)(puVar1 + 0x10);
    uStack_80 = iStack_94 + 1U >> 1;
    iStack_88 = puVar1[0x16];
    uStack_84 = iStack_98 + 1U >> 1;
    uStack_50 = *(undefined8 *)(puVar1 + 0x12);
    uStack_34 = (uint)(iStack_88 - iStack_98) >> 1;
    uStack_74 = puVar1[0x17];
    iStack_90 = iStack_98;
    iStack_8c = iStack_94;
    uStack_7c = uStack_84;
    uStack_78 = uStack_80;
    uVar2 = FUN_18066f2e0(*(undefined8 *)(param_1 + 0x1b0),*puVar1,&iStack_98);
    return uVar2;
  }
  return 8;
}



// 函数: UI系统数据块处理器类型2
// 处理第二种类型的数据块，与类型1类似但使用不同的处理逻辑
// 参数: param_1 - 系统上下文指针, param_2 - 数据块指针
// 返回值: 处理结果状态码
undefined8 ui_system_process_data_block_type2(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  uint uStack_34;
  
  puVar1 = (undefined4 *)*param_2;
  if ((puVar1 != (undefined4 *)0x0) && (*(int *)(param_1 + 0x1a8) == 0)) {
    iStack_94 = puVar1[9];
    iStack_98 = puVar1[8];
    uStack_60 = *(undefined8 *)(puVar1 + 0xe);
    uStack_58 = *(undefined8 *)(puVar1 + 0x10);
    uStack_80 = iStack_94 + 1U >> 1;
    iStack_88 = puVar1[0x16];
    uStack_84 = iStack_98 + 1U >> 1;
    uStack_50 = *(undefined8 *)(puVar1 + 0x12);
    uStack_34 = (uint)(iStack_88 - iStack_98) >> 1;
    uStack_74 = puVar1[0x17];
    iStack_90 = iStack_98;
    iStack_8c = iStack_94;
    uStack_7c = uStack_84;
    uStack_78 = uStack_80;
    uVar2 = FUN_18066efd0(*(undefined8 *)(param_1 + 0x1b0),*puVar1,&iStack_98);
    return uVar2;
  }
  return 8;
}



// 函数: UI系统参数验证和队列管理器
// 验证输入参数的有效性并管理参数队列，支持最多10个参数的缓存
// 参数: param_1 - 系统上下文指针, param_2 - 参数1, param_3 - 参数2, param_4 - 状态输出指针
// 返回值: 验证结果和状态码
undefined8 ui_system_validate_and_queue_parameters(longlong param_1,longlong param_2,int param_3,undefined4 *param_4)

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
      *(longlong *)(param_1 + 0x2c0 + (ulonglong)*(uint *)(param_1 + 700) * 8) = param_2;
      *(int *)(param_1 + 0x308 + (ulonglong)*(uint *)(param_1 + 700) * 4) = param_3;
      *(int *)(param_1 + 700) = *(int *)(param_1 + 700) + 1;
      if (*(uint *)(param_1 + 700) < 10) {
        return 0;
      }
      *(undefined4 *)(param_1 + 700) = 0;
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
    *(longlong *)(param_1 + 0x2c0) = param_2;
    *(int *)(param_1 + 0x308) = param_3;
    *(undefined4 *)(param_1 + 700) = 1;
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: UI系统参数数据处理器
// 处理UI系统的参数数据，包括数据解析、格式验证和特殊标记处理
// 参数: param_1 - 数据缓冲区指针, param_2 - 数据长度, param_3 - 输出结构指针, param_4 - 处理函数指针, param_5 - 附加参数
void ui_system_process_parameter_data(byte *param_1,uint param_2,longlong param_3,code *param_4,undefined8 param_5)

{
  uint uVar1;
  undefined1 auStack_58 [32];
  byte abStack_38 [16];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_58;
  if (param_1 < param_1 + param_2) {
    if (param_4 != (code *)0x0) {
      uVar1 = param_2;
      if (10 < param_2) {
        uVar1 = 10;
      }
      (*param_4)(param_5,param_1,abStack_38,uVar1);
      param_1 = abStack_38;
    }
    *(undefined4 *)(param_3 + 0xc) = 0;
    if ((((9 < param_2) && ((*param_1 & 1) == 0)) &&
        (*(undefined4 *)(param_3 + 0xc) = 1, param_1[3] == 0x9d)) &&
       ((param_1[4] == 1 && (param_1[5] == 0x2a)))) {
      *(uint *)(param_3 + 4) = *(ushort *)(param_1 + 6) & 0x3fff;
      *(uint *)(param_3 + 8) = *(ushort *)(param_1 + 8) & 0x3fff;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_58);
}



// 函数: UI系统资源清理器
// 清理UI系统占用的资源，包括内存释放、句柄关闭和状态重置
// 参数: param_1 - 资源句柄指针
// 返回值: 清理结果状态码
undefined8 ui_system_cleanup_resource_handler(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return 8;
  }
  if ((param_1[1] != 0) && (param_1[6] != 0)) {
    (**(code **)(param_1[1] + 0x18))();
    param_1[1] = 0;
    *param_1 = 0;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    return 0;
  }
  *(undefined4 *)(param_1 + 2) = 1;
  return 1;
}





// 函数: UI系统带格式错误设置器
// 设置UI系统错误状态并支持格式化错误消息
// 参数: param_1 - 错误结构指针, param_2 - 错误代码, param_3 - 格式化字符串, param_4 - 可变参数
void ui_system_set_error_with_format(undefined4 *param_1,undefined4 param_2,longlong param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 uStackX_20;
  
  *param_1 = param_2;
  param_1[1] = 0;
  uStackX_20 = param_4;
  if (param_3 != 0) {
    param_1[1] = 1;
    puVar1 = (ulonglong *)func_0x00018004b9a0();
    __stdio_common_vsprintf(*puVar1 | 2,param_1 + 2,0x4f,param_3,0,&uStackX_20);
    *(undefined1 *)((longlong)param_1 + 0x57) = 0;
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
void ui_system_set_error_simple(undefined4 *param_1,undefined4 param_2,longlong param_3)

{
  ulonglong *puVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  if (param_3 != 0) {
    param_1[1] = 1;
    puVar1 = (ulonglong *)func_0x00018004b9a0();
    __stdio_common_vsprintf(*puVar1 | 2,param_1 + 2,0x4f,param_3,0);
    *(undefined1 *)((longlong)param_1 + 0x57) = 0;
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
void ui_system_trigger_error_jump(longlong param_1)

{
  ulonglong *puVar1;
  undefined4 *unaff_RDI;
  
  *(undefined4 *)(param_1 + 4) = 1;
  puVar1 = (ulonglong *)func_0x00018004b9a0();
  __stdio_common_vsprintf(*puVar1 | 2,unaff_RDI + 2,0x4f);
  *(undefined1 *)((longlong)unaff_RDI + 0x57) = 0;
  if (unaff_RDI[0x16] == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  longjmp(unaff_RDI + 0x18,*unaff_RDI);
}





// 函数: UI系统错误跳转执行器
// 执行UI系统的错误跳转操作，将控制权转移到错误处理代码
void ui_system_execute_error_jump(void)

{
  undefined4 *unaff_RDI;
  
  if (unaff_RDI[0x16] == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  longjmp(unaff_RDI + 0x18,*unaff_RDI);
}





// 函数: UI系统空操作函数
// 不执行任何操作的占位符函数，用于保持API完整性
void ui_system_no_operation(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: UI系统一次性执行保护器
// 确保指定的函数只执行一次，使用临界区保护线程安全
// 参数: param_1 - 要执行的函数指针
void ui_system_execute_once_protected(code *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (_DAT_180c0c1cc == 0) {
    LOCK();
    _DAT_180c0c1c8 = _DAT_180c0c1c8 + 1;
    UNLOCK();
    lVar3 = malloc(0x28);
    InitializeCriticalSection(lVar3);
    LOCK();
    bVar4 = _DAT_180c0c1c0 != 0;
    lVar2 = lVar3;
    if (bVar4) {
      lVar2 = _DAT_180c0c1c0;
    }
    _DAT_180c0c1c0 = lVar2;
    UNLOCK();
    if (bVar4) {
      DeleteCriticalSection(lVar3);
      free(lVar3);
    }
    EnterCriticalSection(_DAT_180c0c1c0);
    if (_DAT_180c0c1cc == 0) {
      (*param_1)();
      _DAT_180c0c1cc = 1;
    }
    LeaveCriticalSection(_DAT_180c0c1c0);
    LOCK();
    iVar1 = _DAT_180c0c1c8 + -1;
    UNLOCK();
    bVar4 = _DAT_180c0c1c8 == 1;
    _DAT_180c0c1c8 = iVar1;
    if (bVar4) {
      DeleteCriticalSection(_DAT_180c0c1c0);
      free(_DAT_180c0c1c0);
      _DAT_180c0c1c0 = 0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: UI系统一次性执行初始化器
// 初始化一次性执行机制的上下文，为后续的函数执行做准备
void ui_system_execute_once_initializer(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *unaff_RDI;
  bool bVar4;
  
  LOCK();
  _DAT_180c0c1c8 = _DAT_180c0c1c8 + 1;
  UNLOCK();
  lVar3 = malloc(0x28);
  InitializeCriticalSection(lVar3);
  LOCK();
  bVar4 = _DAT_180c0c1c0 != 0;
  lVar2 = lVar3;
  if (bVar4) {
    lVar2 = _DAT_180c0c1c0;
  }
  _DAT_180c0c1c0 = lVar2;
  UNLOCK();
  if (bVar4) {
    DeleteCriticalSection(lVar3);
    free(lVar3);
  }
  EnterCriticalSection(_DAT_180c0c1c0);
  if (_DAT_180c0c1cc == 0) {
    (*unaff_RDI)();
    _DAT_180c0c1cc = 1;
  }
  LeaveCriticalSection(_DAT_180c0c1c0);
  LOCK();
  iVar1 = _DAT_180c0c1c8 + -1;
  UNLOCK();
  bVar4 = _DAT_180c0c1c8 == 1;
  _DAT_180c0c1c8 = iVar1;
  if (bVar4) {
    DeleteCriticalSection(_DAT_180c0c1c0);
    free(_DAT_180c0c1c0);
    _DAT_180c0c1c0 = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: UI系统一次性执行完成器
// 完成一次性执行的收尾工作，包括临界区清理和资源释放
void ui_system_execute_once_finalizer(void)

{
  int iVar1;
  code *unaff_RDI;
  bool bVar2;
  
  (*unaff_RDI)();
  _DAT_180c0c1cc = 1;
  LeaveCriticalSection(_DAT_180c0c1c0);
  LOCK();
  iVar1 = _DAT_180c0c1c8 + -1;
  UNLOCK();
  bVar2 = _DAT_180c0c1c8 == 1;
  _DAT_180c0c1c8 = iVar1;
  if (bVar2) {
    DeleteCriticalSection(_DAT_180c0c1c0);
    free(_DAT_180c0c1c0);
    _DAT_180c0c1c0 = 0;
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
void ui_system_cpu_feature_detection(void)

{
  uint *puVar1;
  longlong lVar2;
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
  _DAT_180d4a9b0 = &UNK_1800018c7;
  if (bVar4) {
    _DAT_180d4a9b0 = &UNK_1800025f0;
  }
  _DAT_180d4a9a8 = &UNK_180001b8d;
  if (bVar4) {
    _DAT_180d4a9a8 = &UNK_1800028e4;
  }
  _DAT_180d4a990 = &UNK_180002cb0;
  if (bVar6) {
    _DAT_180d4a990 = &UNK_180002d90;
  }
  _DAT_180d4a9c8 = FUN_1806714a0;
  if (bVar6) {
    _DAT_180d4a9c8 = FUN_1806718d0;
  }
  _DAT_180d4a9c0 = FUN_180673220;
  if (bVar4) {
    _DAT_180d4a9c0 = FUN_180673850;
  }
  _DAT_180d4a9b8 = FUN_180671eb0;
  if (bVar6) {
    _DAT_180d4a9b8 = FUN_1806721d0;
  }
  if (bVar5) {
    _DAT_180d4a9b8 = FUN_1806725c0;
  }
  _DAT_180d4a9a0 = FUN_180672a50;
  if (bVar6) {
    _DAT_180d4a9a0 = FUN_180672da0;
  }
  _DAT_180d4a998 = FUN_180673360;
  if (bVar5) {
    _DAT_180d4a998 = FUN_180673970;
  }
  _DAT_180d4a988 = FUN_180673e10;
  if (bVar4) {
    _DAT_180d4a988 = FUN_180673f50;
  }
  _DAT_180d4a980 = FUN_180674040;
  if (bVar4) {
    _DAT_180d4a980 = FUN_180674120;
  }
  _DAT_180d4a978 = FUN_1806742a0;
  if (bVar4) {
    _DAT_180d4a978 = FUN_1806743e0;
  }
  _DAT_180d4a970 = FUN_1806744d0;
  if (bVar4) {
    _DAT_180d4a970 = FUN_180674610;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: UI系统一次性执行保护器（替代版本）
// 与主版本功能相同，但使用不同的临界区变量，避免冲突
// 参数: param_1 - 要执行的函数指针
void ui_system_execute_once_alternative(code *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (_DAT_180c0c1dc == 0) {
    LOCK();
    _DAT_180c0c1d8 = _DAT_180c0c1d8 + 1;
    UNLOCK();
    lVar3 = malloc(0x28);
    InitializeCriticalSection(lVar3);
    LOCK();
    bVar4 = _DAT_180c0c1d0 != 0;
    lVar2 = lVar3;
    if (bVar4) {
      lVar2 = _DAT_180c0c1d0;
    }
    _DAT_180c0c1d0 = lVar2;
    UNLOCK();
    if (bVar4) {
      DeleteCriticalSection(lVar3);
      free(lVar3);
    }
    EnterCriticalSection(_DAT_180c0c1d0);
    if (_DAT_180c0c1dc == 0) {
      (*param_1)();
      _DAT_180c0c1dc = 1;
    }
    LeaveCriticalSection(_DAT_180c0c1d0);
    LOCK();
    iVar1 = _DAT_180c0c1d8 + -1;
    UNLOCK();
    bVar4 = _DAT_180c0c1d8 == 1;
    _DAT_180c0c1d8 = iVar1;
    if (bVar4) {
      DeleteCriticalSection(_DAT_180c0c1d0);
      free(_DAT_180c0c1d0);
      _DAT_180c0c1d0 = 0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: UI系统替代一次性执行初始化器
// 初始化替代版本的一次性执行机制，使用不同的临界区变量
void ui_system_execute_once_alternative_initializer(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *unaff_RDI;
  bool bVar4;
  
  LOCK();
  _DAT_180c0c1d8 = _DAT_180c0c1d8 + 1;
  UNLOCK();
  lVar3 = malloc(0x28);
  InitializeCriticalSection(lVar3);
  LOCK();
  bVar4 = _DAT_180c0c1d0 != 0;
  lVar2 = lVar3;
  if (bVar4) {
    lVar2 = _DAT_180c0c1d0;
  }
  _DAT_180c0c1d0 = lVar2;
  UNLOCK();
  if (bVar4) {
    DeleteCriticalSection(lVar3);
    free(lVar3);
  }
  EnterCriticalSection(_DAT_180c0c1d0);
  if (_DAT_180c0c1dc == 0) {
    (*unaff_RDI)();
    _DAT_180c0c1dc = 1;
  }
  LeaveCriticalSection(_DAT_180c0c1d0);
  LOCK();
  iVar1 = _DAT_180c0c1d8 + -1;
  UNLOCK();
  bVar4 = _DAT_180c0c1d8 == 1;
  _DAT_180c0c1d8 = iVar1;
  if (bVar4) {
    DeleteCriticalSection(_DAT_180c0c1d0);
    free(_DAT_180c0c1d0);
    _DAT_180c0c1d0 = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: UI系统替代一次性执行完成器
// 完成替代版本一次性执行的收尾工作
void ui_system_execute_once_alternative_finalizer(void)

{
  int iVar1;
  code *unaff_RDI;
  bool bVar2;
  
  (*unaff_RDI)();
  _DAT_180c0c1dc = 1;
  LeaveCriticalSection(_DAT_180c0c1d0);
  LOCK();
  iVar1 = _DAT_180c0c1d8 + -1;
  UNLOCK();
  bVar2 = _DAT_180c0c1d8 == 1;
  _DAT_180c0c1d8 = iVar1;
  if (bVar2) {
    DeleteCriticalSection(_DAT_180c0c1d0);
    free(_DAT_180c0c1d0);
    _DAT_180c0c1d0 = 0;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018066d855)
// WARNING: Removing unreachable block (ram,0x00018066d7e6)
// WARNING: Removing unreachable block (ram,0x00018066d7ca)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



