/**
 * @file 04_ui_system_part350_sub002_sub002.c
 * @brief UI系统高级数据处理和状态管理模块
 * 
 * 本模块是UI系统的一部分，主要负责：
 * - UI系统高级数据处理和转换
 * - 状态管理和控制
 * - 资源管理和清理
 * - 参数验证和处理
 * - 事件处理和分发
 * 
 * 该文件作为UI系统的一个子模块，提供了高级UI功能的核心支持。
 * 
 * @version 1.0
 * @date 2025-08-28
 * @author Claude Code
 */

#include "TaleWorlds.Native.Split.h"

/* ============================================================================
 * UI系统高级数据处理和状态管理常量定义
 * ============================================================================ */

/**
 * @brief UI系统高级数据处理和状态管理接口
 * @details 定义UI系统高级数据处理和状态管理的参数和接口函数
 * 
 * 功能：
 * - 处理UI系统高级数据转换
 * - 管理UI系统状态变化
 * - 控制UI资源生命周期
 * - 验证和处理UI参数
 * - 分发和处理UI事件
 * 
 * @note 该文件作为UI系统的子模块，提供高级UI功能支持
 */

/* ============================================================================
 * 函数别名定义 - 用于代码可读性和维护性
 * ============================================================================ */

// UI系统高级数据处理器
#define UISystem_AdvancedDataProcessor FUN_180859ba0

// UI系统数据验证器
#define UISystem_DataValidator FUN_180859e40

// UI系统参数处理器
#define UISystem_ParameterProcessor FUN_180859f30

// UI系统状态管理器
#define UISystem_StateManager FUN_18085a550

// UI系统资源清理器
#define UISystem_ResourceCleaner FUN_18085a934

// UI系统初始化器
#define UISystem_Initializer FUN_18085a980

// UI系统时间计算器
#define UISystem_TimeCalculator FUN_18085ab70

// UI系统数据处理器
#define UISystem_DataHandler FUN_18085abf2

// UI系统空操作处理器
#define UISystem_EmptyOperationProcessor FUN_18085ac39

// UI系统高级控制器
#define UISystem_AdvancedController FUN_18085aca0

// UI系统配置管理器
#define UISystem_ConfigManager FUN_18085acd0

// UI系统缓冲区管理器
#define UISystem_BufferManager FUN_18085b050

// UI系统状态检查器
#define UISystem_StateChecker FUN_18085b200

// UI系统事件处理器
#define UISystem_EventHandler FUN_18085b580

// UI系统线程管理器
#define UISystem_ThreadManager FUN_18085b595

/* ============================================================================
 * 常量定义
 * ============================================================================ */
#define UI_BUFFER_SIZE 0x20
#define UI_STACK_SIZE 0x18
#define UI_FLAG_INITIALIZED 1
#define UI_FLAG_ACTIVE 2
#define UI_FLAG_VISIBLE 4
#define UI_FLAG_ENABLED 8
#define UI_ERROR_INVALID_PARAM 0x1c
#define UI_ERROR_RESOURCE_BUSY 0x76
#define UI_SUCCESS 0
#define UI_MAX_QUEUE_SIZE 0x65
#define UI_MAX_THREAD_COUNT 0x1f
#define UI_DEFAULT_FREQUENCY 48000
#define UI_TIMEOUT_INFINITE 0xffffffff

/* ============================================================================
 * 函数实现
 * ============================================================================ */

/**
 * UI系统高级数据处理器 - 处理UI系统高级数据转换和管理
 * 
 * 功能：
 * - 处理UI系统高级数据转换
 * - 管理UI系统资源分配
 * - 控制UI系统状态变化
 * - 执行数据验证和清理
 * 
 * @param system_context 系统上下文指针
 * @param data_buffer 数据缓冲区指针
 * @return 处理状态码（0表示成功，非0表示错误）
 */
void UISystem_AdvancedDataProcessor(longlong system_context, longlong *data_buffer)

{
  int *state_flag_ptr;
  undefined8 *data_list_ptr;
  longlong data_context;
  undefined8 *next_node_ptr;
  int node_count;
  ulonglong buffer_size;
  longlong operation_result;
  undefined1 temp_buffer [40];
  ulonglong security_cookie;
  
  // 安全检查：设置栈保护cookie
  security_cookie = _DAT_180bf00a8 ^ (ulonglong)&operation_result;
  
  // 检查数据缓冲区有效性
  if ((data_buffer != (longlong *)0x0) && (data_context = *data_buffer, data_context != 0)) {
    state_flag_ptr = (int *)(data_context + 0xd0);  // 获取状态标志指针
    node_count = 0;
    
    // 检查状态标志是否全部为0（表示空闲状态）
    if ((*state_flag_ptr == 0) &&
       (((*(int *)(data_context + 0xd4) == 0 && (*(int *)(data_context + 0xd8) == 0)) &&
        (*(int *)(data_context + 0xdc) == 0)))) {
      operation_result = 0;  // 空闲状态，无需操作
    }
    else {
      // 调用系统处理函数处理状态
      operation_result = (**(code **)(**(longlong **)(system_context + 0x170) + 0x260))
                            (*(longlong **)(system_context + 0x170),state_flag_ptr,1);
      if (operation_result == 0) {
        // 处理失败，调用错误处理函数（不返回）
        FUN_18084b240(state_flag_ptr,temp_buffer,0);
      }
    }
    
    // 遍历数据链表并计算节点数量
    data_list_ptr = (undefined8 *)(data_context + 0xb0);
    for (next_node_ptr = (undefined8 *)*data_list_ptr; next_node_ptr != data_list_ptr; next_node_ptr = (undefined8 *)*next_node_ptr) {
      node_count = node_count + 1;
    }
    
    // 计算所需的缓冲区大小（16字节对齐）
    buffer_size = (longlong)node_count * 4 + 0xf;
    if (buffer_size <= (ulonglong)((longlong)node_count * 4)) {
      buffer_size = 0xffffffffffffff0;  // 防止整数溢出
    }
    
    // 调用内存分配函数（不返回）
    FUN_1808fd200(buffer_size & 0xfffffffffffffff0,data_list_ptr,operation_result);
  }
  
  // 调用清理函数（不返回）
  FUN_1808fc050(_DAT_180bf00a8);
}



/**
 * UI系统数据验证器 - 验证和处理UI系统数据
 * 
 * 功能：
 * - 验证UI系统数据的有效性
 * - 处理数据格式转换
 * - 执行数据比较和匹配
 * - 返回验证结果
 * 
 * @param system_context 系统上下文指针
 * @param source_data 源数据指针
 * @param target_data 目标数据指针
 * @param operation_flag 操作标志
 * @return 验证状态码（0表示成功，非0表示错误）
 */
undefined8 UISystem_DataValidator(longlong system_context, longlong *source_data, longlong *target_data, undefined1 operation_flag)

{
  int match_index;
  undefined4 *temp_ptr;
  undefined8 operation_result;
  longlong *data_item;
  longlong item_offset;
  int source_count;
  undefined1 temp_buffer [8];
  
  source_count = 0;
  if (0 < (int)source_data[1]) {
    item_offset = 0;
    do {
      match_index = 0;
      data_item = (longlong *)(*source_data + item_offset);
      if (0 < (int)target_data[1]) {
        do {
          // 检查数据项是否匹配目标数据
          if ((*(longlong *)(*target_data + (longlong)match_index * 0x18) == *data_item) &&
             (*(longlong *)(*target_data + 8 + (longlong)match_index * 0x18) == data_item[1]))
          goto LAB_180859ef9;
          match_index = match_index + 1;
        } while (match_index < (int)target_data[1]);
      }
      // 检查数据项是否为空
      if (((((int)*data_item == 0) && (*(int *)((longlong)data_item + 4) == 0)) && ((int)data_item[1] == 0))
         && (*(int *)((longlong)data_item + 0xc) == 0)) {
        return UI_ERROR_INVALID_PARAM;
      }
      temp_ptr = (undefined4 *)FUN_18084cde0(*(undefined8 *)(system_context + 0x110),temp_buffer);
      *(undefined4 *)(system_context + 0x10c) = *temp_ptr;
      operation_result = FUN_1808629a0(*(undefined8 *)(system_context + 0x160),data_item,operation_flag);
      if ((int)operation_result != 0) {
        return operation_result;
      }
LAB_180859ef9:
      source_count = source_count + 1;
      item_offset = item_offset + 0x18;
    } while (source_count < (int)source_data[1]);
  }
  return UI_SUCCESS;
}



/**
 * UI系统参数处理器 - 处理UI系统参数配置
 * 
 * 功能：
 * - 处理UI系统参数配置
 * - 管理时间同步和频率控制
 * - 执行参数验证和转换
 * - 控制资源分配和释放
 * 
 * @param system_context 系统上下文指针
 * @param param_array 参数数组指针
 * @param start_pos 开始位置
 * @param end_pos 结束位置
 * @param time_scale 时间缩放因子
 * @param frequency 频率参数
 * @return 处理状态码（0表示成功，非0表示错误）
 */
int UISystem_ParameterProcessor(longlong system_context, int *param_array, uint start_pos, uint end_pos, uint time_scale, uint frequency)

{
  int *piVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong in_stack_ffffffffffffff08;
  undefined8 uVar19;
  uint auStack_d8 [2];
  undefined8 uStack_d0;
  longlong lStack_c8;
  uint uStack_c0;
  int iStack_bc;
  longlong lStack_b8;
  longlong lStack_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  longlong lStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  longlong lStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  uint uStack_40;
  undefined4 uStack_3c;
  
  uVar18 = (ulonglong)param_6;
  uVar16 = (ulonglong)param_5;
  puVar7 = (undefined4 *)FUN_18084cde0(*(undefined8 *)(param_1 + 0x110),auStack_d8);
  *(undefined4 *)(param_1 + 0x10c) = *puVar7;
  if (*(int *)(*(longlong *)(param_1 + 0x160) + 0x2e4) < 3) {
    return 0;
  }
  if ((((*param_2 == 0) && (param_2[1] == 0)) && (param_2[2] == 0)) && (param_2[3] == 0)) {
    return 0x1c;
  }
  uStack_d0 = 0;
  lStack_c8 = 0;
  puVar8 = (uint *)FUN_18084da10();
  uStack_c0 = *puVar8;
  iStack_bc = 0;
  lStack_b8 = 0;
  iVar5 = FUN_180856d20(param_1,&uStack_d0,&lStack_c8);
  uVar11 = uStack_c0;
  lVar13 = lStack_c8;
  if ((iVar5 != 0) || (iVar5 = 0, iStack_bc == 1)) goto LAB_18085a4c4;
  uStack_48 = lStack_c8;
  uStack_40 = uStack_c0;
  cVar4 = FUN_1808617d0(*(undefined8 *)(param_1 + 0x160),param_2);
  if (param_5 == param_3) {
    if (param_6 == param_4) goto LAB_18085a4fd;
    uVar14 = 0xffffffff;
    if (uVar18 + uVar16 < 0x100000000) {
      uVar14 = param_6 + param_5;
    }
    uVar15 = (uint)uStack_d0;
    if (cVar4 == '\0') {
      if (((uint)uStack_d0 < param_5) || (uVar14 <= (uint)uStack_d0)) goto LAB_18085a4fd;
      lVar10 = *(longlong *)(param_1 + 0x160);
      uStack_70 = (**(code **)(*(longlong *)(lVar10 + 8) + 0x30))(lVar10 + 8);
      uStack_88 = uStack_d0;
      lStack_80 = lVar10 + 0x3f8;
      uStack_68 = 0;
      uStack_60 = 0;
      lStack_78 = lVar10 + 0x378;
      uStack_a0 = uVar15;
      uStack_98 = (undefined4)uStack_48;
      uStack_94 = uStack_48._4_4_;
      uStack_90 = uStack_40;
      uStack_8c = uStack_3c;
      uVar15 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
      if (param_5 < uVar11) {
        uVar11 = uVar11 - param_5;
        if (uVar15 != 48000) {
          uVar11 = (uint)(((ulonglong)uVar11 * (ulonglong)uVar15) / 48000);
        }
        uVar18 = -(ulonglong)uVar11;
      }
      else {
        uVar18 = (ulonglong)(param_5 - uVar11);
        if (uVar15 != 48000) {
          uVar18 = (uVar18 * uVar15) / 48000;
        }
        uVar18 = uVar18 & 0xffffffff;
      }
      lStack_a8 = param_1;
      uStack_9c = uVar14;
      iVar5 = FUN_18085e8d0(*(undefined8 *)(param_1 + 0x160),param_2,&lStack_a8,1,uVar18 + lVar13,0,
                            0);
    }
    else {
      uVar15 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
      if (uVar14 < uVar11) {
        uVar18 = (ulonglong)(uVar11 - uVar14);
        if (uVar15 != 48000) {
          uVar18 = (uVar18 * uVar15) / 48000;
        }
        uVar18 = -(uVar18 & 0xffffffff);
      }
      else {
        uVar11 = uVar14 - uVar11;
        if (uVar15 != 48000) {
          uVar11 = (uint)(((ulonglong)uVar11 * (ulonglong)uVar15) / 48000);
        }
        uVar18 = (ulonglong)uVar11;
      }
      lVar13 = uVar18 + lVar13;
      lVar10 = *(longlong *)(param_1 + 0x160);
      if (uVar14 <= (uint)uStack_d0) {
        uVar19 = 0;
        goto LAB_18085a4b5;
      }
      plVar9 = (longlong *)FUN_1808caec0(lVar10 + 0x378,param_2,0);
      if (plVar9 == (longlong *)0x0) goto LAB_18085a4fd;
      iVar5 = (**(code **)(*plVar9 + 0x70))(plVar9,lVar13,1);
    }
  }
  else {
    if (cVar4 != '\0') {
      iVar5 = FUN_18085ab70(param_1);
      iVar5 = FUN_18085f790(*(undefined8 *)(param_1 + 0x160),param_2,
                            (longlong)iVar5 + *(longlong *)(param_1 + 0x10),1,
                            in_stack_ffffffffffffff08 & 0xffffffffffffff00,0);
      if (iVar5 != 0) goto LAB_18085a4c4;
    }
    FUN_18084da10();
    uVar14 = (uint)uStack_d0;
    uVar15 = 0xffffffff;
    if (param_5 < (uint)uStack_d0) {
LAB_18085a294:
      iVar5 = 0x40;
      uVar17 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
      if ((uVar17 != 48000) &&
         (auVar3 = (ZEXT816(0) << 0x40 | ZEXT816(0x2ee000)) / ZEXT416(uVar17), iVar5 = auVar3._0_4_,
         0xffffffff < auVar3._0_8_)) {
        iVar5 = -1;
      }
      iVar6 = -1;
      if (uVar18 + uVar16 < 0x100000000) {
        iVar6 = param_6 + param_5;
      }
      uVar17 = (uint)uStack_d0;
      if ((uint)uStack_d0 < (uint)(iVar6 - iVar5)) {
LAB_18085a2e9:
        lVar10 = *(longlong *)(param_1 + 0x160);
        lStack_50 = lVar10 + 0x378;
        lStack_58 = lVar10 + 0x3f8;
        if (uVar18 + uVar16 < 0x100000000) {
          auStack_d8[0] = param_6 + param_5;
        }
        else {
          auStack_d8[0] = 0xffffffff;
        }
        uStack_70 = (**(code **)(*(longlong *)(lVar10 + 8) + 0x30))(lVar10 + 8);
        uStack_9c = auStack_d8[0];
        uStack_88 = uStack_d0;
        uStack_68 = 0;
        uStack_60 = 0;
        lStack_80 = lStack_58;
        lStack_78 = lStack_50;
        uStack_98 = (undefined4)uStack_48;
        uStack_94 = uStack_48._4_4_;
        uStack_90 = uStack_40;
        uStack_8c = uStack_3c;
        uVar2 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
        if (param_5 < uVar11) {
          uVar12 = (ulonglong)(uVar11 - param_5);
          if (uVar2 != 48000) {
            uVar12 = (uVar12 * uVar2) / 48000;
          }
          uVar12 = -(uVar12 & 0xffffffff);
        }
        else {
          uVar12 = (ulonglong)(param_5 - uVar11);
          if (uVar2 != 48000) {
            uVar12 = (uVar12 * uVar2) / 48000;
          }
          uVar12 = uVar12 & 0xffffffff;
        }
        lStack_a8 = param_1;
        uStack_a0 = uVar17;
        iVar5 = FUN_18085e8d0(*(undefined8 *)(param_1 + 0x160),param_2,&lStack_a8,1,uVar12 + lVar13,
                              0,0);
        if (iVar5 != 0) goto LAB_18085a4c4;
      }
    }
    else {
      uVar17 = param_5;
      if (param_5 < uStack_d0._4_4_) goto LAB_18085a2e9;
      if (param_5 < (uint)uStack_d0) goto LAB_18085a294;
    }
    if (uVar18 + uVar16 < 0x100000000) {
      uVar15 = param_6 + param_5;
    }
    if ((uVar15 < uVar14) || (uStack_d0._4_4_ <= uVar15)) goto LAB_18085a4fd;
    uVar14 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
    if (uVar15 < uVar11) {
      uVar11 = uVar11 - uVar15;
      if (uVar14 != 48000) {
        uVar11 = (uint)(((ulonglong)uVar11 * (ulonglong)uVar14) / 48000);
      }
      uVar18 = -(ulonglong)uVar11;
    }
    else {
      uVar15 = uVar15 - uVar11;
      if (uVar14 != 48000) {
        uVar15 = (uint)(((ulonglong)uVar15 * (ulonglong)uVar14) / 48000);
      }
      uVar18 = (ulonglong)uVar15;
    }
    lVar13 = uVar18 + lVar13;
    lVar10 = *(longlong *)(param_1 + 0x160);
    uVar19 = 1;
LAB_18085a4b5:
    iVar5 = FUN_18085f790(lVar10,param_2,lVar13,1,uVar19,0);
  }
  if (iVar5 != 0) {
LAB_18085a4c4:
    if (lStack_b8 == 0) {
      return iVar5;
    }
    piVar1 = (int *)(lStack_b8 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),lStack_b8,&UNK_180984d50,0x76,1);
    }
    return iVar5;
  }
LAB_18085a4fd:
  if (lStack_b8 != 0) {
    piVar1 = (int *)(lStack_b8 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),lStack_b8,&UNK_180984d50,0x76,1);
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_18085a550(longlong param_1,int *param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong in_stack_ffffffffffffff08;
  int aiStack_d8 [2];
  undefined8 uStack_d0;
  longlong lStack_c8;
  uint uStack_c0;
  undefined4 uStack_bc;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  undefined8 uStack_a0;
  uint uStack_98;
  undefined4 uStack_94;
  longlong lStack_88;
  uint uStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  longlong lStack_60;
  longlong lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  uVar11 = (ulonglong)param_5;
  uVar13 = (ulonglong)param_6;
  if ((((*param_2 == 0) && (param_2[1] == 0)) && (param_2[2] == 0)) && (param_2[3] == 0)) {
    return 0x1c;
  }
  puVar8 = (undefined4 *)FUN_18084cde0(*(undefined8 *)(param_1 + 0x110),aiStack_d8);
  *(undefined4 *)(param_1 + 0x10c) = *puVar8;
  if (*(int *)(*(longlong *)(param_1 + 0x160) + 0x2e4) < 3) {
    return 0;
  }
  uStack_d0 = 0;
  lStack_c8 = 0;
  puVar9 = (uint *)FUN_18084da10();
  uStack_c0 = *puVar9;
  uStack_bc = 0;
  lStack_b8 = 0;
  iVar5 = FUN_180856d20(param_1,&uStack_d0,&lStack_c8);
  if (iVar5 != 0) goto LAB_18085a91b;
  uVar2 = (uint)uStack_d0;
  uVar12 = 0xffffffff;
  if (param_3 < (uint)uStack_d0) {
LAB_18085a652:
    uVar6 = 0xffffffff;
    if ((ulonglong)param_4 + (ulonglong)param_3 < 0x100000000) {
      uVar6 = param_3 + param_4;
    }
    if (uVar6 <= (uint)uStack_d0) goto LAB_18085a689;
LAB_18085a66c:
    uVar6 = 0xffffffff;
    if ((ulonglong)param_3 + (ulonglong)param_4 < 0x100000000) {
      uVar6 = param_3 + param_4;
    }
    if (((uint)uStack_d0 <= uVar6) && (uVar6 < uStack_d0._4_4_)) goto LAB_18085a689;
    bVar3 = true;
  }
  else {
    if (param_3 < uStack_d0._4_4_) goto LAB_18085a66c;
    if (param_3 <= (uint)uStack_d0) goto LAB_18085a652;
LAB_18085a689:
    bVar3 = false;
  }
  if (param_5 < (uint)uStack_d0) {
LAB_18085a698:
    uVar6 = 0xffffffff;
    if (uVar13 + uVar11 < 0x100000000) {
      uVar6 = param_5 + param_6;
    }
    if ((uint)uStack_d0 < uVar6) goto LAB_18085a6ac;
LAB_18085a6b0:
    bVar4 = false;
  }
  else {
    if (uStack_d0._4_4_ <= param_5) {
      if (param_5 <= (uint)uStack_d0) goto LAB_18085a698;
      goto LAB_18085a6b0;
    }
LAB_18085a6ac:
    bVar4 = true;
  }
  if (bVar3) {
    if (!bVar4) {
      iVar5 = FUN_18085ab70(param_1);
      in_stack_ffffffffffffff08 = in_stack_ffffffffffffff08 & 0xffffffffffffff00;
      iVar5 = FUN_18085f790(*(undefined8 *)(param_1 + 0x160),param_2,
                            (longlong)iVar5 + *(longlong *)(param_1 + 0x10),0,
                            in_stack_ffffffffffffff08,0);
      if (iVar5 != 0) goto LAB_18085a91b;
      lVar10 = FUN_1808caec0(*(longlong *)(param_1 + 0x160) + 0x3f8,param_2,0);
      if (lVar10 != 0) {
        iVar5 = FUN_1808cab70(*(longlong *)(param_1 + 0x160) + 0x3f8,lVar10);
        goto joined_r0x00018085a8b5;
      }
      goto LAB_18085a742;
    }
  }
  else {
    if (!bVar4) goto LAB_18085a746;
    FUN_18084da10();
    if (param_5 < uVar2) {
LAB_18085a7de:
      uVar7 = 0xffffffff;
      if (uVar13 + uVar11 < 0x100000000) {
        uVar7 = param_5 + param_6;
      }
      uVar6 = uVar2;
      if (uVar7 <= uVar2) goto LAB_18085a746;
    }
    else {
      uVar6 = param_5;
      if (uStack_d0._4_4_ <= param_5) {
        if (uVar2 < param_5) goto LAB_18085a746;
        goto LAB_18085a7de;
      }
    }
    lVar10 = *(longlong *)(param_1 + 0x160);
    lStack_a8 = lVar10 + 0x378;
    lStack_b0 = lVar10 + 0x3f8;
    uStack_a0 = lStack_c8;
    uStack_98 = uStack_c0;
    if (uVar11 + uVar13 < 0x100000000) {
      aiStack_d8[0] = param_5 + param_6;
    }
    else {
      aiStack_d8[0] = -1;
    }
    uStack_50 = (**(code **)(*(longlong *)(lVar10 + 8) + 0x30))(lVar10 + 8);
    iStack_7c = aiStack_d8[0];
    uStack_68 = uStack_d0;
    lStack_60 = lStack_b0;
    lStack_58 = lStack_a8;
    uStack_78 = (undefined4)uStack_a0;
    uStack_74 = uStack_a0._4_4_;
    uStack_70 = uStack_98;
    uStack_6c = uStack_94;
    uStack_48 = 0;
    uStack_40 = 0;
    in_stack_ffffffffffffff08 = 0;
    lStack_88 = param_1;
    uStack_80 = uVar6;
    iVar5 = FUN_18085e8d0(*(undefined8 *)(param_1 + 0x160),param_2,&lStack_88,0,0,1,0);
joined_r0x00018085a8b5:
    if (iVar5 != 0) goto LAB_18085a91b;
LAB_18085a742:
  }
LAB_18085a746:
  if (uVar13 + uVar11 < 0x100000000) {
    uVar12 = param_5 + param_6;
  }
  if ((uVar2 <= uVar12) && (uVar12 < uStack_d0._4_4_)) {
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
    if (uVar12 < uStack_c0) {
      uVar11 = (ulonglong)(uStack_c0 - uVar12);
      if (uVar2 != 48000) {
        uVar11 = (uVar11 * uVar2) / 48000;
      }
      uVar11 = -(uVar11 & 0xffffffff);
    }
    else {
      uVar12 = uVar12 - uStack_c0;
      if (uVar2 != 48000) {
        uVar12 = (uint)(((ulonglong)uVar12 * (ulonglong)uVar2) / 48000);
      }
      uVar11 = (ulonglong)uVar12;
    }
    iVar5 = FUN_18085f790(*(undefined8 *)(param_1 + 0x160),param_2,uVar11 + lStack_c8,0,
                          in_stack_ffffffffffffff08 & 0xffffffffffffff00,0);
    if (iVar5 != 0) goto LAB_18085a91b;
  }
  iVar5 = 0;
LAB_18085a91b:
  if (lStack_b8 != 0) {
    piVar1 = (int *)(lStack_b8 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),lStack_b8,&UNK_180984d50,0x76,1);
    }
  }
  return iVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_18085a5e5(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  longlong unaff_R14;
  longlong unaff_R15;
  longlong lVar17;
  undefined4 extraout_XMM0_Da;
  ulonglong in_stack_00000020;
  int iStack0000000000000040;
  uint uStack0000000000000048;
  
  _uStack0000000000000048 = 0;
  *(undefined8 *)(unaff_RBP + -0x79) = 0;
  puVar9 = (undefined4 *)FUN_18084da10();
  *(undefined4 *)(unaff_RBP + -0x71) = *puVar9;
  *(undefined4 *)(unaff_RBP + -0x6d) = 0;
  *(undefined8 *)(unaff_RBP + -0x69) = 0;
  iVar6 = FUN_180856d20(extraout_XMM0_Da,&stack0x00000048,unaff_RBP + -0x79);
  if (iVar6 != 0) goto LAB_18085a91b;
  uVar2 = uStack0000000000000048;
  uVar16 = 0xffffffff;
  uVar15 = *(uint *)(unaff_RBP + -0x7d);
  uVar13 = (uint)unaff_RSI;
  if (uVar13 < uStack0000000000000048) {
LAB_18085a652:
    uVar7 = 0xffffffff;
    if ((ulonglong)(unaff_R15 + unaff_RSI) < 0x100000000) {
      uVar7 = uVar13 + (int)unaff_R15;
    }
    if (uVar7 <= uStack0000000000000048) goto LAB_18085a689;
LAB_18085a66c:
    uVar7 = 0xffffffff;
    if ((ulonglong)(unaff_RSI + unaff_R15) < 0x100000000) {
      uVar7 = uVar13 + (int)unaff_R15;
    }
    if ((uStack0000000000000048 <= uVar7) && (uVar7 < uVar15)) goto LAB_18085a689;
    bVar4 = true;
  }
  else {
    if (uVar13 < uVar15) goto LAB_18085a66c;
    if (uVar13 <= uStack0000000000000048) goto LAB_18085a652;
LAB_18085a689:
    bVar4 = false;
  }
  uVar13 = (uint)unaff_RBX;
  iVar3 = (int)unaff_R14;
  if (uVar13 < uStack0000000000000048) {
LAB_18085a698:
    uVar7 = 0xffffffff;
    if ((ulonglong)(unaff_R14 + unaff_RBX) < 0x100000000) {
      uVar7 = uVar13 + iVar3;
    }
    if (uStack0000000000000048 < uVar7) goto LAB_18085a6ac;
LAB_18085a6b0:
    bVar5 = false;
  }
  else {
    if (uVar15 <= uVar13) {
      if (uVar13 <= uStack0000000000000048) goto LAB_18085a698;
      goto LAB_18085a6b0;
    }
LAB_18085a6ac:
    bVar5 = true;
  }
  if (bVar4) {
    lVar17 = *(longlong *)(unaff_RBP + 0x57);
    if (bVar5) goto LAB_18085a8c1;
    iVar6 = FUN_18085ab70(lVar17);
    in_stack_00000020 = in_stack_00000020 & 0xffffffffffffff00;
    iVar6 = FUN_18085f790(*(undefined8 *)(lVar17 + 0x160),*(undefined8 *)(unaff_RBP + 0x5f),
                          (longlong)iVar6 + *(longlong *)(lVar17 + 0x10),0,in_stack_00000020);
    if (iVar6 != 0) goto LAB_18085a91b;
    uVar14 = *(undefined8 *)(unaff_RBP + 0x5f);
    lVar10 = FUN_1808caec0(*(longlong *)(lVar17 + 0x160) + 0x3f8,uVar14,0);
    if (lVar10 != 0) {
      iVar6 = FUN_1808cab70(*(longlong *)(lVar17 + 0x160) + 0x3f8,lVar10);
      goto joined_r0x00018085a8b5;
    }
LAB_18085a742:
    uVar15 = *(uint *)(unaff_RBP + -0x7d);
  }
  else {
    if (bVar5) {
      FUN_18084da10();
      uVar15 = *(uint *)(unaff_RBP + -0x7d);
      if (uVar13 < uVar2) {
LAB_18085a7de:
        uVar8 = 0xffffffff;
        if ((ulonglong)(unaff_R14 + unaff_RBX) < 0x100000000) {
          uVar8 = uVar13 + iVar3;
        }
        uVar7 = uVar2;
        if (uVar8 <= uVar2) goto LAB_18085a8bd;
      }
      else {
        uVar7 = uVar13;
        if (uVar15 <= uVar13) {
          if (uVar2 < uVar13) goto LAB_18085a8bd;
          goto LAB_18085a7de;
        }
      }
      lVar17 = *(longlong *)(unaff_RBP + 0x57);
      lVar10 = *(longlong *)(lVar17 + 0x160);
      *(longlong *)(unaff_RBP + -0x59) = lVar10 + 0x378;
      *(longlong *)(unaff_RBP + -0x61) = lVar10 + 0x3f8;
      *(undefined8 *)(unaff_RBP + -0x51) = *(undefined8 *)(unaff_RBP + -0x79);
      *(undefined4 *)(unaff_RBP + -0x49) = *(undefined4 *)(unaff_RBP + -0x71);
      if ((ulonglong)(unaff_RBX + unaff_R14) < 0x100000000) {
        iStack0000000000000040 = uVar13 + iVar3;
      }
      else {
        iStack0000000000000040 = -1;
      }
      uVar11 = (**(code **)(*(longlong *)(lVar10 + 8) + 0x30))(lVar10 + 8);
      *(int *)(unaff_RBP + -0x2d) = iStack0000000000000040;
      *(undefined8 *)(unaff_RBP + -0x19) = _uStack0000000000000048;
      *(undefined8 *)(unaff_RBP + -0x11) = *(undefined8 *)(unaff_RBP + -0x61);
      *(undefined8 *)(unaff_RBP + -9) = *(undefined8 *)(unaff_RBP + -0x59);
      uVar14 = *(undefined8 *)(lVar17 + 0x160);
      *(longlong *)(unaff_RBP + -0x39) = lVar17;
      *(uint *)(unaff_RBP + -0x31) = uVar7;
      *(undefined4 *)(unaff_RBP + -0x29) = *(undefined4 *)(unaff_RBP + -0x51);
      *(undefined4 *)(unaff_RBP + -0x25) = *(undefined4 *)(unaff_RBP + -0x4d);
      *(undefined4 *)(unaff_RBP + -0x21) = *(undefined4 *)(unaff_RBP + -0x49);
      *(undefined4 *)(unaff_RBP + -0x1d) = *(undefined4 *)(unaff_RBP + -0x45);
      *(undefined8 *)(unaff_RBP + -1) = uVar11;
      *(undefined8 *)(unaff_RBP + 7) = 0;
      *(undefined1 *)(unaff_RBP + 0xf) = 0;
      in_stack_00000020 = 0;
      iVar6 = FUN_18085e8d0(uVar14,*(undefined8 *)(unaff_RBP + 0x5f),unaff_RBP + -0x39,0,0);
joined_r0x00018085a8b5:
      if (iVar6 != 0) goto LAB_18085a91b;
      uVar14 = *(undefined8 *)(unaff_RBP + 0x5f);
      goto LAB_18085a742;
    }
LAB_18085a8bd:
    lVar17 = *(longlong *)(unaff_RBP + 0x57);
LAB_18085a8c1:
    uVar14 = *(undefined8 *)(unaff_RBP + 0x5f);
  }
  if ((ulonglong)(unaff_R14 + unaff_RBX) < 0x100000000) {
    uVar16 = uVar13 + iVar3;
  }
  if ((uVar2 <= uVar16) && (uVar16 < uVar15)) {
    uVar15 = *(uint *)(unaff_RBP + -0x71);
    uVar2 = *(uint *)(*(longlong *)(lVar17 + 0x168) + 0x774);
    if (uVar16 < uVar15) {
      uVar12 = (ulonglong)(uVar15 - uVar16);
      if (uVar2 != 48000) {
        uVar12 = (uVar12 * uVar2) / 48000;
      }
      lVar10 = *(longlong *)(unaff_RBP + -0x79) - (uVar12 & 0xffffffff);
    }
    else {
      uVar16 = uVar16 - uVar15;
      if (uVar2 != 48000) {
        uVar16 = (uint)(((ulonglong)uVar16 * (ulonglong)uVar2) / 48000);
      }
      lVar10 = (ulonglong)uVar16 + *(longlong *)(unaff_RBP + -0x79);
    }
    iVar6 = FUN_18085f790(*(undefined8 *)(lVar17 + 0x160),uVar14,lVar10,0,
                          in_stack_00000020 & 0xffffffffffffff00);
    if (iVar6 != 0) goto LAB_18085a91b;
  }
  iVar6 = 0;
LAB_18085a91b:
  lVar17 = *(longlong *)(unaff_RBP + -0x69);
  if (lVar17 != 0) {
    piVar1 = (int *)(lVar17 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),lVar17,&UNK_180984d50,0x76,1);
    }
  }
  return iVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_18085a934(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined4 unaff_ESI;
  
  piVar1 = (int *)(param_2 + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2,&UNK_180984d50,0x76,1);
  }
  return unaff_ESI;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_18085a980(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong lStack_18;
  
  plVar8 = (longlong *)0x0;
  plVar2 = (longlong *)(param_1 + 0x118);
  plVar7 = (longlong *)(*plVar2 + -0x18);
  if (*plVar2 == 0) {
    plVar7 = plVar8;
  }
  plVar3 = plVar8;
  if (plVar7 != (longlong *)0x0) {
    plVar3 = plVar7 + 3;
  }
  while (plVar3 != plVar2) {
    plVar7 = plVar3 + -3;
    if (plVar3 == (longlong *)0x0) {
      plVar7 = plVar8;
    }
    uVar5 = func_0x0001808c6bf0(plVar7);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (plVar3 == plVar2) break;
    plVar7 = (longlong *)(*plVar3 + -0x18);
    if (*plVar3 == 0) {
      plVar7 = plVar8;
    }
    plVar3 = plVar8;
    if (plVar7 != (longlong *)0x0) {
      plVar3 = plVar7 + 3;
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0xffffffff;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined1 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  puVar6 = (undefined4 *)FUN_18084da10();
  *(undefined4 *)(param_1 + 0x148) = *puVar6;
  *(undefined4 *)(param_1 + 0x128) = 0;
  FUN_1808556a0(param_1 + 0x70);
  FUN_180855780(param_1 + 0x80);
  iVar4 = FUN_180744cc0(param_1 + 0x90);
  if ((iVar4 == 0) && (iVar4 = FUN_1808554a0(param_1 + 0xa0), iVar4 == 0)) {
    *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  uStack_28 = 0;
  puVar6 = (undefined4 *)FUN_18084da10();
  uStack_20 = *puVar6;
  uStack_1c = 0;
  lStack_18 = 0;
  FUN_1808c6d60(param_1 + 0x28,&uStack_28);
  if (lStack_18 != 0) {
    piVar1 = (int *)(lStack_18 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),lStack_18,&UNK_180984d50,0x76,1);
    }
  }
  iVar4 = FUN_180744cc0(param_1 + 0xb8);
  if ((iVar4 == 0) && (iVar4 = FUN_1808555a0(param_1 + 200), iVar4 == 0)) {
    *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  *(undefined1 *)(param_1 + 0x13f) = 0;
  iVar4 = FUN_180744cc0(param_1 + 0xe0);
  if ((iVar4 == 0) && (iVar4 = FUN_1808553b0(param_1 + 0xf0), iVar4 == 0)) {
    *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  return 0;
}



ulonglong FUN_18085ab70(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  float afStackX_8 [2];
  uint auStackX_10 [2];
  
  uVar4 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 8) + 0x30))();
  lVar5 = func_0x0001808b8910(uVar4);
  uVar6 = (ulonglong)*(uint *)(lVar5 + 0x1f8);
  if (*(uint *)(lVar5 + 0x1f8) == 0xffffffff) {
    uVar4 = (*(code *)**(undefined8 **)(*(longlong *)(lVar5 + 0x228) + 8))();
    iVar3 = func_0x0001808c7d90(uVar4);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
LAB_18085abe3:
        lVar2 = *(longlong *)(lVar5 + 0x230);
        afStackX_8[0] = 1.0;
        cVar1 = *(char *)(lVar2 + 0x782);
        if (*(longlong *)(lVar5 + 200) != 0) {
          iVar3 = FUN_18073ca90(*(undefined8 *)(*(longlong *)(lVar5 + 200) + 0x78),afStackX_8);
          if (iVar3 != 0) {
            return 0;
          }
        }
        auStackX_10[0] = 0;
        uVar6 = FUN_180739a50(*(undefined8 *)(lVar2 + 0x4c0),auStackX_10,0);
        if ((int)uVar6 == 0) {
          uVar6 = (ulonglong)
                  ((float)(int)(2 - (uint)(cVar1 != '\0')) * afStackX_8[0] * (float)auStackX_10[0]);
        }
        return uVar6;
      }
      if (iVar3 == 2) {
        return (ulonglong)*(uint *)(*(longlong *)(lVar5 + 0x230) + 0x7b8);
      }
      if (iVar3 == 3) goto LAB_18085abe3;
    }
    uVar6 = 0;
  }
  return uVar6;
}



longlong FUN_18085abf2(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RBX;
  float in_XMM0_Da;
  float fStack0000000000000030;
  uint in_stack_00000038;
  
  lVar3 = *(longlong *)(unaff_RBX + 0x230);
  cVar1 = *(char *)(lVar3 + 0x782);
  fStack0000000000000030 = in_XMM0_Da;
  if (param_1 != 0) {
    iVar2 = FUN_18073ca90(*(undefined8 *)(param_1 + 0x78),&stack0x00000030);
    if (iVar2 != 0) {
      return 0;
    }
  }
  in_stack_00000038 = 0;
  lVar3 = FUN_180739a50(*(undefined8 *)(lVar3 + 0x4c0),&stack0x00000038,0);
  if ((int)lVar3 == 0) {
    lVar3 = (longlong)
            ((float)(int)(2 - (uint)(cVar1 != '\0')) * fStack0000000000000030 *
            (float)in_stack_00000038);
  }
  return lVar3;
}



longlong FUN_18085ac39(void)

{
  longlong lVar1;
  char unaff_SIL;
  longlong unaff_RDI;
  float in_stack_00000030;
  uint uStack0000000000000038;
  
  uStack0000000000000038 = 0;
  lVar1 = FUN_180739a50(*(undefined8 *)(unaff_RDI + 0x4c0),&stack0x00000038,0);
  if ((int)lVar1 == 0) {
    lVar1 = (longlong)
            ((float)(int)(2 - (uint)(unaff_SIL != '\0')) * in_stack_00000030 *
            (float)uStack0000000000000038);
  }
  return lVar1;
}



// WARNING: Removing unreachable block (ram,0x000180857ea9)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18085aca0(longlong param_1)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  ulonglong *puVar11;
  longlong lVar12;
  undefined4 *puVar13;
  longlong lVar14;
  uint *puVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong *plVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  longlong *plVar22;
  byte bVar23;
  undefined8 uVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  longlong *plVar28;
  bool bVar29;
  bool bVar30;
  undefined7 uVar31;
  ulonglong **in_stack_fffffffffffffe78;
  undefined7 uVar32;
  int *in_stack_fffffffffffffe80;
  uint7 uVar33;
  longlong in_stack_fffffffffffffe88;
  uint uStack_168;
  int iStack_164;
  byte bStack_160;
  uint uStack_15c;
  uint uStack_158;
  char cStack_154;
  char acStack_153 [3];
  uint uStack_150;
  ulonglong *puStack_148;
  uint auStack_140 [2];
  uint uStack_138;
  uint uStack_134;
  ulonglong *puStack_130;
  ulonglong uStack_128;
  ulonglong uStack_120;
  uint uStack_118;
  undefined4 uStack_114;
  ulonglong *puStack_110;
  int iStack_108;
  int *piStack_100;
  longlong lStack_f8;
  ulonglong uStack_f0;
  uint uStack_e8;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  int iStack_d4;
  uint uStack_d0;
  int iStack_cc;
  longlong *plStack_c8;
  longlong lStack_c0;
  longlong *plStack_b8;
  uint auStack_b0 [2];
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  int aiStack_90 [4];
  undefined8 uStack_80;
  int aiStack_70 [4];
  undefined8 uStack_60;
  undefined1 auStack_50 [24];
  
  FUN_18084da10();
  if (*(char *)(param_1 + 0x13c) != '\0') {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar26 = 0;
  uVar8 = *(uint *)(param_1 + 0x20);
  uVar10 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 8) + 0x30))();
  lVar14 = func_0x0001808b8910(uVar10);
  uVar19 = (ulonglong)*(uint *)(lVar14 + 0x1fc);
  if (*(uint *)(lVar14 + 0x1fc) != 0xffffffff) goto LAB_180857f18;
  lVar14 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 0x160) + 8))();
  iVar9 = *(int *)(lVar14 + 0xe4);
  if (-1 < iVar9) {
    if (iVar9 < 3) {
      uVar19 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x168) + 0x77c);
      goto LAB_180857f18;
    }
    if ((iVar9 != 3) && (iVar9 == 4)) {
      uVar19 = 1;
      goto LAB_180857f18;
    }
  }
  uVar19 = 0;
LAB_180857f18:
  iVar9 = FUN_18085ab70(param_1);
  if (0 < iVar9) {
    uVar27 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
    uVar26 = (longlong)iVar9;
    if (uVar27 != 48000) {
      uVar26 = ((longlong)iVar9 * 48000) / (longlong)(ulonglong)uVar27;
    }
    if (0xffffffff < (longlong)uVar26) {
      uVar26 = 0xffffffff;
    }
  }
  if (uVar19 + (uVar26 & 0xffffffff) < 0x100000000) {
    uStack_15c = (int)uVar19 + (int)uVar26;
    if (uStack_15c == 0) {
      uStack_15c = 1;
    }
  }
  else {
    uStack_15c = 0xffffffff;
  }
  *(uint *)(param_1 + 0x108) = uStack_15c;
  plVar17 = (longlong *)(param_1 + 0x70);
  if (((longlong *)*plVar17 == plVar17) && (*(longlong **)(param_1 + 0x78) == plVar17)) {
    uVar26 = *(ulonglong *)(param_1 + 0x28);
    uStack_e8 = *(uint *)(param_1 + 0x30);
    lVar14 = *(longlong *)(param_1 + 0x38);
  }
  else {
    lVar14 = *(longlong *)(param_1 + 0x78);
    uVar26 = *(ulonglong *)(lVar14 + 0x10);
    uStack_e8 = *(uint *)(lVar14 + 0x18);
    lVar14 = *(longlong *)(lVar14 + 0x20);
  }
  uStack_128 = (ulonglong)uStack_e8;
  uStack_f0 = uVar26;
  plStack_b8 = plVar17;
  if (lVar14 != 0) {
    *(int *)(lVar14 + 0x10) = *(int *)(lVar14 + 0x10) + 1;
    piVar1 = (int *)(lVar14 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),lVar14,&UNK_180984d50,0x76,1);
    }
  }
  if (((longlong *)*plVar17 == plVar17) && (*(longlong **)(param_1 + 0x78) == plVar17)) {
    iVar9 = *(int *)(param_1 + 0x34);
    lVar14 = *(longlong *)(param_1 + 0x38);
  }
  else {
    iVar9 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x1c);
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x20);
  }
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0x10) = *(int *)(lVar14 + 0x10) + 1, lVar14 != 0)) {
    piVar1 = (int *)(lVar14 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),lVar14,&UNK_180984d50,0x76,1);
    }
  }
  if (iVar9 == 3) {
    *(undefined4 *)(param_1 + 0xc) = 3;
  }
  iStack_164 = 0;
  iStack_108 = 0;
  plStack_c8 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8);
  lStack_c0 = *plStack_c8;
  piStack_100 = (int *)(lStack_c0 + 0x48);
  uVar27 = uStack_15c;
LAB_1808580a0:
  do {
    while( true ) {
      if ((*piStack_100 < _DAT_180c4ea98) && (FUN_1808fcb90(&DAT_180c4ea98), _DAT_180c4ea98 == -1))
      {
        _DAT_180c4ea94 = 0;
        FUN_1808fcb30(&DAT_180c4ea98);
      }
      if (uVar27 <= _DAT_180c4ea94) {
        return 0;
      }
      if (*(longlong *)(param_1 + 0x140) == 0) break;
      if (((longlong *)*plVar17 == plVar17) && ((longlong *)plVar17[1] == plVar17)) {
        uStack_150 = *(uint *)(param_1 + 0x34);
        puVar11 = *(ulonglong **)(param_1 + 0x38);
      }
      else {
        uStack_150 = *(uint *)(*(longlong *)(param_1 + 0x78) + 0x1c);
        puVar11 = *(ulonglong **)(*(longlong *)(param_1 + 0x78) + 0x20);
      }
      if (puVar11 != (ulonglong *)0x0) {
        *(int *)(puVar11 + 2) = (int)puVar11[2] + 1;
      }
      puStack_130 = puVar11;
      if ((1 < uStack_150 - 4) || (puVar11 == (ulonglong *)0x0)) {
        uVar19 = 0x1c;
        goto LAB_180859163;
      }
      puStack_148 = *(ulonglong **)(param_1 + 0x140);
      uVar21 = (int)puStack_148[0x14] - (int)puStack_148[0x15];
      uVar7 = *(uint *)((longlong)puStack_148 + 0xa4);
      if ((uVar7 <= *(uint *)(param_1 + 0x148)) && ((*(byte *)(param_1 + 0x128) & 2) == 0)) {
        uVar6 = FUN_18085c620(param_1,uVar26);
        uVar19 = (ulonglong)uVar6;
        puVar11 = puStack_130;
        if (uVar6 != 0) goto LAB_180859163;
      }
      uVar6 = *(uint *)(param_1 + 0x148);
      bVar23 = 0;
      uVar20 = (int)puStack_148[0x14] - uVar6;
      uStack_168 = 0;
      bStack_160 = 0;
      aiStack_70[0] = 0;
      uStack_60 = 0;
      aiStack_90[0] = 0;
      uStack_80 = 0;
      if ((*(uint *)(param_1 + 0x128) & 2) == 0) {
        if ((*(uint *)(param_1 + 0x128) & 1) == 0) {
          FUN_1808639c0(*(undefined8 *)(param_1 + 0x160),uVar26);
          lStack_f8 = *(longlong *)(param_1 + 0x140) + 0x10;
          FUN_180855fc0(param_1 + 0x90,&uStack_120,lStack_f8);
          if ((int)puStack_110 == -1) {
            uStack_158 = (uint)uStack_128;
            if (*(char *)(param_1 + 0x13f) != '\0') {
              uStack_158 = *(uint *)(param_1 + 0x154);
            }
            FUN_1808577c0(param_1 + 0x90,lStack_f8,&uStack_158);
            puVar11 = (ulonglong *)
                      FUN_180855fc0(param_1 + 0x90,auStack_50,*(longlong *)(param_1 + 0x140) + 0x10)
            ;
            uStack_120 = *puVar11;
            uStack_118 = (uint)puVar11[1];
            uStack_114 = *(undefined4 *)((longlong)puVar11 + 0xc);
            puStack_110 = (ulonglong *)puVar11[2];
          }
          else if (uStack_150 == 4) {
            uVar6 = (uint)uStack_128;
            if (*(char *)(param_1 + 0x13f) != '\0') {
              uVar6 = *(uint *)(param_1 + 0x154);
            }
            *(uint *)(*(longlong *)(uStack_120 + 0x10) + 0x14 + (longlong)(int)puStack_110 * 0x18) =
                 uVar6;
          }
          *(undefined4 *)(param_1 + 0x154) =
               *(undefined4 *)
                (*(longlong *)(uStack_120 + 0x10) + 0x14 + (longlong)(int)puStack_110 * 0x18);
          *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x148);
          *(undefined1 *)(param_1 + 0x13f) = 0;
          *(undefined1 *)(param_1 + 0x13d) = 0;
        }
        uStack_d8 = 0xffffffff;
        if ((ulonglong)*(uint *)(param_1 + 0x14c) + (ulonglong)*(uint *)(param_1 + 0x154) <
            0x100000000) {
          uStack_d8 = *(uint *)(param_1 + 0x14c) + *(uint *)(param_1 + 0x154);
        }
        iStack_d4 = -1;
        if ((ulonglong)uStack_d8 + (ulonglong)uVar20 < 0x100000000) {
          iStack_d4 = uStack_d8 + uVar20;
        }
        in_stack_fffffffffffffe88 = param_1 + 0xb8;
        in_stack_fffffffffffffe80 = aiStack_70;
        in_stack_fffffffffffffe78 =
             (ulonglong **)((ulonglong)in_stack_fffffffffffffe78 & 0xffffffffffffff00);
        FUN_180856830(param_1,&uStack_d8,0,1,in_stack_fffffffffffffe78,in_stack_fffffffffffffe80,
                      in_stack_fffffffffffffe88,&cStack_154);
        uVar6 = *(uint *)(param_1 + 0x148);
        if ((cStack_154 == '\0') || (uVar20 = aiStack_70[0] - uStack_d8, uVar7 - uVar6 <= uVar20)) {
          bVar23 = 0;
          uVar20 = uVar7 - uVar6;
        }
        else {
          bVar23 = 1;
          uStack_168 = 1;
        }
      }
      puVar11 = puStack_130;
      uVar7 = uVar20;
      if (uVar6 < uVar21) {
        uVar7 = uVar21 - uVar6;
        bVar4 = 0;
        if (uVar20 <= uVar21 - uVar6) {
          uVar7 = uVar20;
          bVar4 = bVar23;
        }
        uStack_168 = (uint)bVar4;
      }
      else {
        if ((*(byte *)(param_1 + 0x128) & 4) == 0) {
          uVar3 = *(undefined4 *)((longlong)puStack_130 + 0xc);
          *(uint *)(param_1 + 0x150) = uVar6 - uVar21;
          *(undefined4 *)(param_1 + 0x158) = uVar3;
          *(undefined4 *)(param_1 + 0x15c) = uVar3;
          *(undefined1 *)(param_1 + 0x13e) = 0;
        }
        uStack_d0 = 0xffffffff;
        if ((ulonglong)*(uint *)(param_1 + 0x150) + (ulonglong)*(uint *)(param_1 + 0x158) <
            0x100000000) {
          uStack_d0 = *(uint *)(param_1 + 0x150) + *(uint *)(param_1 + 0x158);
        }
        iStack_cc = -1;
        if ((ulonglong)uStack_d0 + (ulonglong)uVar20 < 0x100000000) {
          iStack_cc = uStack_d0 + uVar20;
        }
        in_stack_fffffffffffffe88 = param_1 + 0xb8;
        in_stack_fffffffffffffe80 = aiStack_90;
        in_stack_fffffffffffffe78 =
             (ulonglong **)((ulonglong)in_stack_fffffffffffffe78 & 0xffffffffffffff00);
        FUN_180856830(param_1,&uStack_d0,0,1,in_stack_fffffffffffffe78,in_stack_fffffffffffffe80,
                      in_stack_fffffffffffffe88,acStack_153);
        if ((acStack_153[0] != '\0') && (uVar6 = aiStack_90[0] - uStack_d0, uVar6 <= uVar20)) {
          uVar7 = uVar6;
          if ((char)uStack_168 == '\0') {
            bStack_160 = 1;
          }
          else {
            bStack_160 = 1;
            if (uVar6 != uVar20) {
              uStack_168 = 0;
            }
          }
        }
      }
      uStack_150 = 0;
      uVar6 = uStack_150;
      uStack_158 = uVar27;
      if (uVar7 <= uVar27) {
        uStack_150 = (uint)bStack_160;
        uVar6 = uStack_168;
        uStack_158 = uVar7;
      }
      if ((*(int *)(*plStack_c8 + 0x48) < _DAT_180c4ea98) &&
         (FUN_1808fcb90(&DAT_180c4ea98), _DAT_180c4ea98 == -1)) {
        _DAT_180c4ea94 = 0;
        FUN_1808fcb30(&DAT_180c4ea98);
      }
      if (_DAT_180c4ea94 < uStack_158) {
        uVar10 = 0;
        if ((char)uStack_150 != '\0') {
          uVar10 = uStack_80;
        }
        uVar24 = 0;
        if ((char)uVar6 != '\0') {
          uVar24 = uStack_60;
        }
        uVar7 = FUN_18085b580(param_1,uStack_158,uVar24,uVar10);
        uVar19 = (ulonglong)uVar7;
        if (uVar7 != 0) goto LAB_180859163;
        uVar27 = uVar27 - uStack_158;
        uStack_15c = uVar27;
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      if ((uint)puStack_148[0x14] <= *(uint *)(param_1 + 0x148)) {
        if ((*(byte *)(param_1 + 0x128) & 2) == 0) {
          uVar8 = FUN_18085c620(param_1,uVar26,puVar11 + 1);
          uVar19 = (ulonglong)uVar8;
          if (uVar8 != 0) goto LAB_180859163;
        }
        if ((*(uint *)(param_1 + 0x128) & 4) == 0) {
          *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)((longlong)puVar11 + 0xc);
          *(uint *)(param_1 + 0x150) = *(int *)(param_1 + 0x148) - uVar21;
        }
        uVar19 = (ulonglong)(uint)((int)puStack_148[0x14] - (int)puVar11[1]);
        uVar8 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
        if (uVar8 != 48000) {
          uVar19 = (uVar8 * uVar19) / 48000;
        }
        uVar8 = 0xffffffff;
        uVar26 = uVar26 + (uVar19 & 0xffffffff);
        if ((ulonglong)*(uint *)(param_1 + 0x158) + (ulonglong)*(uint *)(param_1 + 0x150) <
            0x100000000) {
          uVar8 = *(uint *)(param_1 + 0x150) + *(uint *)(param_1 + 0x158);
        }
        uStack_128 = (ulonglong)uVar8;
        *(uint *)(param_1 + 8) = uVar8;
        *(undefined4 *)(param_1 + 0x138) = 0xffffffff;
        *(uint *)(param_1 + 0xc) = ~(*(uint *)(param_1 + 0x128) >> 2) & 1 | 2;
        uStack_f0 = uVar26;
        uStack_e8 = uVar8;
        uVar7 = FUN_180854810(param_1,uVar26,uVar8,0);
        uVar19 = (ulonglong)uVar7;
        if (uVar7 != 0) {
LAB_180859163:
          if (puVar11 == (ulonglong *)0x0) {
            return uVar19;
          }
          puVar2 = puVar11 + 2;
          *(int *)puVar2 = (int)*puVar2 + -1;
          if ((int)*puVar2 == 0) {
                    // WARNING: Subroutine does not return
            FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),puVar11,&UNK_180984d50,0x76,1);
          }
          return uVar19;
        }
        if ((*(int *)(*plStack_c8 + 0x48) < _DAT_180c4ea98) &&
           (FUN_1808fcb90(&DAT_180c4ea98), _DAT_180c4ea98 == -1)) {
          _DAT_180c4ea94 = uVar7;
          FUN_1808fcb30(&DAT_180c4ea98);
        }
        *(uint *)(param_1 + 0x148) = _DAT_180c4ea94;
        uVar7 = FUN_180855810(param_1,uVar26);
        uVar19 = (ulonglong)uVar7;
        if (uVar7 != 0) goto LAB_180859163;
      }
      puVar2 = puVar11 + 2;
      *(int *)puVar2 = (int)*puVar2 + -1;
      if ((int)*puVar2 == 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),puVar11,&UNK_180984d50,0x76,1);
      }
LAB_180858c20:
      plVar17 = (longlong *)(param_1 + 0x70);
    }
    uStack_134 = 0xffffffff;
    if ((ulonglong)uVar27 + (ulonglong)uVar8 < 0x100000000) {
      uStack_134 = uVar27 + uVar8;
    }
    puVar15 = (uint *)(param_1 + 0xb8);
    in_stack_fffffffffffffe80 = (int *)((ulonglong)in_stack_fffffffffffffe80 & 0xffffffffffffff00);
    auStack_b0[0] = 0;
    lStack_98 = 0;
    lStack_a8 = 0;
    lStack_a0 = 0;
    uStack_138 = uVar8;
    uVar19 = FUN_180856570(param_1,&uStack_138,0,auStack_b0,puVar15,in_stack_fffffffffffffe80);
    uVar21 = auStack_b0[0];
    uVar7 = uStack_134;
    uVar27 = uStack_138;
    if ((int)uVar19 != 0) {
      return uVar19;
    }
    uStack_e0 = uStack_138;
    uStack_dc = uStack_134;
    if (auStack_b0[0] < uStack_134) {
      uStack_dc = auStack_b0[0];
    }
    uVar19 = FUN_18085b200(param_1,&uStack_e0,&uStack_f0);
    uVar20 = uStack_dc;
    uVar6 = uStack_e0;
    if ((int)uVar19 != 0) {
      return uVar19;
    }
    uStack_168 = 0;
    puVar11 = (ulonglong *)(*(longlong *)(param_1 + 0x110) + 0x58);
    puStack_148 = (ulonglong *)*puVar11;
    puStack_130 = puVar11;
    uVar25 = 0;
    if (puStack_148 != puVar11) {
      while (uVar25 = uStack_168, (uint)puStack_148[2] <= uVar20) {
        if (((0 < *(int *)(param_1 + 300)) && (uVar6 <= (uint)puStack_148[2])) &&
           (((int)puStack_148[4] == 0 ||
            (cVar5 = FUN_1808b0820(puStack_148 + 3,*(undefined8 *)(param_1 + 0x160)),
            puVar11 = puStack_130, cVar5 != '\0')))) {
          if ((uint)puStack_148[2] == uVar20) {
            uStack_168 = uStack_168 + 1;
          }
          else {
            if (*(int *)(param_1 + 300) < 1) {
              return 0x1c;
            }
            *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + -1;
          }
        }
        uVar25 = uStack_168;
        if ((puStack_148 == puVar11) ||
           (puStack_148 = (ulonglong *)*puStack_148, puStack_148 == puVar11)) break;
      }
    }
    lVar14 = lStack_a0;
    if ((int)uVar25 <= *(int *)(param_1 + 300)) {
      *(uint *)(param_1 + 300) = *(int *)(param_1 + 300) - uVar25;
    }
    uVar33 = (uint7)((ulonglong)in_stack_fffffffffffffe88 >> 8);
    uVar32 = (undefined7)((ulonglong)in_stack_fffffffffffffe80 >> 8);
    uVar31 = (undefined7)((ulonglong)puVar15 >> 8);
    if (lStack_a0 != 0) {
      uStack_134 = uVar21;
      if (uVar21 == uVar27) {
        iStack_164 = iStack_164 + 1;
      }
      else {
        iStack_108 = iStack_108 + 1;
        bVar29 = *(int *)(param_1 + 0xc) != 2;
        lVar12 = (ulonglong)uVar33 << 8;
        iStack_164 = 0;
        uVar24 = CONCAT71(uVar32,bVar29);
        uVar10 = CONCAT71(uVar31,1);
        uVar19 = FUN_18085acd0(param_1,&uStack_f0,&uStack_138,*(longlong *)(param_1 + 0x110) + 0x48,
                               uVar10,uVar24,lVar12);
        if ((int)uVar19 != 0) {
          return uVar19;
        }
        in_stack_fffffffffffffe88 = CONCAT71((int7)((ulonglong)lVar12 >> 8),(char)uVar19);
        in_stack_fffffffffffffe80 = (int *)CONCAT71((int7)((ulonglong)uVar24 >> 8),bVar29);
        puVar15 = (uint *)CONCAT71((int7)((ulonglong)uVar10 >> 8),(char)uVar19);
        uVar19 = FUN_18085acd0(param_1,&uStack_f0,&uStack_138,*(longlong *)(param_1 + 0x110) + 0x38,
                               puVar15,in_stack_fffffffffffffe80,in_stack_fffffffffffffe88);
        if ((int)uVar19 != 0) {
          return uVar19;
        }
        *(uint *)(param_1 + 8) = uVar21;
        uStack_15c = uStack_15c - (uVar21 - uVar27);
      }
      uVar27 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
      uVar7 = (uint)uStack_128;
      if (uVar21 < uVar7) {
        uVar7 = uVar7 - uVar21;
        if (uVar27 != 48000) {
          uVar7 = (uint)(((ulonglong)uVar7 * (ulonglong)uVar27) / 48000);
        }
        uVar19 = -(ulonglong)uVar7;
      }
      else {
        uVar19 = (ulonglong)(uVar21 - uVar7);
        if (uVar27 != 48000) {
          uVar19 = (uVar19 * uVar27) / 48000;
        }
        uVar19 = uVar19 & 0xffffffff;
      }
      uVar26 = uVar26 + uVar19;
      *(undefined4 *)(param_1 + 0xc) = 3;
      uStack_f0 = uVar26;
      lVar12 = func_0x00018084d0b0(*(undefined8 *)(param_1 + 0x110),lVar14 + 0x20);
      if (lVar12 == 0) {
        return 0x1c;
      }
      auStack_140[0] = 0;
      lStack_f8 = lVar12;
      if ((*(uint *)(lVar14 + 0x38) >> 2 & 1) != 0) {
        puVar15 = auStack_140;
        uVar19 = FUN_180854ce0(param_1,lVar14,lVar12,uVar21,puVar15);
        if ((int)uVar19 != 0) {
          return uVar19;
        }
      }
      if ((*(int *)(*plStack_c8 + 0x48) < _DAT_180c4ea98) &&
         (FUN_1808fcb90(&DAT_180c4ea98), _DAT_180c4ea98 == -1)) {
        _DAT_180c4ea94 = 0;
        FUN_1808fcb30(&DAT_180c4ea98);
      }
      uVar27 = uStack_15c;
      if (*(uint *)(lVar14 + 0xa0) != _DAT_180c4ea94) {
        puVar13 = (undefined4 *)FUN_18084da10();
        uVar7 = auStack_140[0];
        plVar17 = (longlong *)(param_1 + 0x70);
        *(undefined4 *)(param_1 + 0x148) = *puVar13;
        if (((longlong *)*plVar17 == plVar17) && (*(longlong **)(param_1 + 0x78) == plVar17)) {
          uVar19 = *(ulonglong *)(param_1 + 0x28);
          puStack_148 = *(ulonglong **)(param_1 + 0x38);
        }
        else {
          uVar19 = *(ulonglong *)(*(longlong *)(param_1 + 0x78) + 0x10);
          puStack_148 = *(ulonglong **)(*(longlong *)(param_1 + 0x78) + 0x20);
        }
        if (puStack_148 != (ulonglong *)0x0) {
          *(int *)(puStack_148 + 2) = (int)puStack_148[2] + 1;
        }
        if (uVar26 < uVar19) {
          if (puStack_148 == (ulonglong *)0x0) {
            return 0x1c;
          }
          puVar11 = puStack_148 + 2;
          *(int *)puVar11 = (int)*puVar11 + -1;
          iVar9 = (int)*puVar11;
          puVar11 = puStack_148;
          goto joined_r0x0001808591a3;
        }
        *(undefined1 *)(param_1 + 0x13c) = 0;
        puStack_130 = (ulonglong *)0x0;
        puVar13 = (undefined4 *)FUN_18084da10();
        in_stack_fffffffffffffe78 = &puStack_130;
        uVar7 = FUN_18085c4b0(param_1,lVar14,*puVar13,uVar7,in_stack_fffffffffffffe78);
        puVar11 = puStack_130;
        uVar19 = (ulonglong)uVar7;
        if (uVar7 == 0) {
          uStack_118 = uVar21;
          uStack_114 = 4;
          puStack_110 = puStack_130;
          if (puStack_130 != (ulonglong *)0x0) {
            *(int *)(puStack_130 + 2) = (int)puStack_130[2] + 1;
          }
          uStack_120 = uVar26;
          uVar7 = FUN_180859210(param_1 + 0x70,&uStack_120);
          uVar19 = (ulonglong)uVar7;
          if (puVar11 != (ulonglong *)0x0) {
            puVar2 = puVar11 + 2;
            *(int *)puVar2 = (int)*puVar2 + -1;
            if ((int)*puVar2 == 0) {
                    // WARNING: Subroutine does not return
              FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),puVar11,&UNK_180984d50,0x76,1);
            }
          }
        }
        if (puStack_148 != (ulonglong *)0x0) {
          puVar11 = puStack_148 + 2;
          *(int *)puVar11 = (int)*puVar11 + -1;
          if ((int)*puVar11 == 0) {
                    // WARNING: Subroutine does not return
            FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),puStack_148,&UNK_180984d50,0x76,1)
            ;
          }
        }
        if ((int)uVar19 != 0) {
          return uVar19;
        }
        uStack_128 = (ulonglong)uVar21;
        uStack_e8 = uVar21;
        if (lStack_98 != 0) {
          lVar14 = func_0x00018084d0b0(*(undefined8 *)(param_1 + 0x110),lStack_98 + 0x20);
          *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(lVar14 + 0x20);
          *(undefined1 *)(param_1 + 0x13f) = 1;
          if ((ulonglong)*(uint *)(lStack_f8 + 0x20) + (ulonglong)auStack_140[0] < 0x100000000) {
            uStack_158 = auStack_140[0] + *(uint *)(lStack_f8 + 0x20);
          }
          else {
            uStack_158 = 0xffffffff;
          }
          in_stack_fffffffffffffe78 =
               (ulonglong **)((ulonglong)in_stack_fffffffffffffe78 & 0xffffffffffffff00);
          uVar19 = FUN_18085f8d0(*(undefined8 *)(param_1 + 0x160),uVar26,
                                 *(longlong *)(param_1 + 0x110) + 0x48,1,in_stack_fffffffffffffe78);
          if ((int)uVar19 != 0) {
            return uVar19;
          }
          uVar19 = FUN_18085c6f0(param_1,uVar26,&uStack_158,0);
          if ((int)uVar19 != 0) {
            return uVar19;
          }
        }
        goto LAB_180858c20;
      }
      uVar8 = 0xffffffff;
      if ((ulonglong)auStack_140[0] + (ulonglong)*(uint *)(lVar12 + 0x20) < 0x100000000) {
        uVar8 = auStack_140[0] + *(uint *)(lVar12 + 0x20);
      }
      in_stack_fffffffffffffe78 = (ulonglong **)((ulonglong)puVar15 & 0xffffffffffffff00);
      uStack_158 = uVar8;
      uVar19 = FUN_18085f8d0(*(undefined8 *)(param_1 + 0x160),uVar26,
                             *(longlong *)(param_1 + 0x110) + 0x48,1,in_stack_fffffffffffffe78);
      if ((int)uVar19 != 0) {
        return uVar19;
      }
      uVar19 = FUN_18085c6f0(param_1,uVar26,&uStack_158,0);
      if ((int)uVar19 != 0) {
        return uVar19;
      }
      uStack_128 = (ulonglong)uVar8;
      *(uint *)(param_1 + 8) = uVar8;
      *(undefined4 *)(param_1 + 0x138) = 0xffffffff;
      uStack_e8 = uVar8;
      if ((iStack_164 < 0x65) && (iStack_108 < 0x1f)) {
        uVar19 = FUN_180854810(param_1,uVar26,uVar8,0);
        if ((int)uVar19 != 0) {
          return uVar19;
        }
        plVar17 = (longlong *)(param_1 + 0x70);
      }
      else {
        uVar27 = 0xffffffff;
        if ((ulonglong)uVar8 + (ulonglong)uStack_15c < 0x100000000) {
          uVar27 = uStack_15c + uVar8;
        }
        uVar7 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
        if (uVar27 < uVar8) {
          uVar27 = uVar8 - uVar27;
          if (uVar7 != 48000) {
            uVar27 = (uint)(((ulonglong)uVar27 * (ulonglong)uVar7) / 48000);
          }
          uVar19 = -(ulonglong)uVar27;
        }
        else {
          uVar27 = uVar27 - uVar8;
          if (uVar7 != 48000) {
            uVar27 = (uint)(((ulonglong)uVar27 * (ulonglong)uVar7) / 48000);
          }
          uVar19 = (ulonglong)uVar27;
        }
        if (uVar19 + uVar26 < uVar26) {
          return 0x1c;
        }
        plVar17 = (longlong *)(param_1 + 0x70);
        if (((longlong *)*plVar17 == plVar17) && (*(longlong **)(param_1 + 0x78) == plVar17)) {
          uVar16 = *(ulonglong *)(param_1 + 0x28);
          puVar11 = *(ulonglong **)(param_1 + 0x38);
        }
        else {
          uVar16 = *(ulonglong *)(*(longlong *)(param_1 + 0x78) + 0x10);
          puVar11 = *(ulonglong **)(*(longlong *)(param_1 + 0x78) + 0x20);
        }
        if (puVar11 != (ulonglong *)0x0) {
          *(int *)(puVar11 + 2) = (int)puVar11[2] + 1;
        }
        if (uVar26 < uVar16) {
LAB_1808591d6:
          if (puVar11 == (ulonglong *)0x0) {
            return 0x1c;
          }
          puVar2 = puVar11 + 2;
          *(int *)puVar2 = (int)*puVar2 + -1;
          iVar9 = (int)*puVar2;
joined_r0x0001808591a3:
          if (iVar9 != 0) {
            return 0x1c;
          }
                    // WARNING: Subroutine does not return
          FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),puVar11,&UNK_180984d50,0x76,1);
        }
        *(undefined1 *)(param_1 + 0x13c) = 0;
        uStack_114 = 2;
        puStack_110 = (ulonglong *)0x0;
        uStack_120 = uVar26;
        uStack_118 = uVar8;
        uVar27 = FUN_180859210(plVar17,&uStack_120);
        if (uVar27 == 0) {
          uStack_114 = 3;
          puStack_110 = (ulonglong *)0x0;
          uStack_120 = uVar19 + uVar26;
          uStack_118 = uVar8;
          uVar27 = FUN_180859210(plVar17,&uStack_120);
          if (uVar27 != 0) goto LAB_180858e04;
          if (puVar11 != (ulonglong *)0x0) {
            puVar2 = puVar11 + 2;
            *(int *)puVar2 = (int)*puVar2 + -1;
            if ((int)*puVar2 == 0) {
                    // WARNING: Subroutine does not return
              FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),puVar11,&UNK_180984d50,0x76,1);
            }
          }
        }
        else {
LAB_180858e04:
          if (puVar11 != (ulonglong *)0x0) {
            puVar2 = puVar11 + 2;
            *(int *)puVar2 = (int)*puVar2 + -1;
            if ((int)*puVar2 == 0) {
                    // WARNING: Subroutine does not return
              FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),puVar11,&UNK_180984d50,0x76,1);
            }
          }
          if (uVar27 != 0) {
            return (ulonglong)uVar27;
          }
        }
        puVar15 = (uint *)FUN_18084da10();
        plVar17 = (longlong *)(param_1 + 0x70);
        uVar27 = *puVar15;
        uStack_15c = uVar27;
      }
      goto LAB_1808580a0;
    }
    bVar29 = lStack_a8 != 0;
    if (bVar29) {
      uVar7 = *(uint *)(lStack_a8 + 0x10);
      uStack_134 = uVar7;
    }
    bVar30 = *(int *)(param_1 + 0xc) != 2;
    lVar14 = (ulonglong)uVar33 << 8;
    uVar24 = CONCAT71(uVar32,bVar30);
    uVar10 = CONCAT71(uVar31,1);
    uVar19 = FUN_18085acd0(param_1,&uStack_f0,&uStack_138,*(longlong *)(param_1 + 0x110) + 0x48,
                           uVar10,uVar24,lVar14);
    if ((int)uVar19 != 0) {
      return uVar19;
    }
    in_stack_fffffffffffffe88 = CONCAT71((int7)((ulonglong)lVar14 >> 8),(char)uVar19);
    in_stack_fffffffffffffe80 = (int *)CONCAT71((int7)((ulonglong)uVar24 >> 8),bVar30);
    in_stack_fffffffffffffe78 = (ulonglong **)CONCAT71((int7)((ulonglong)uVar10 >> 8),(char)uVar19);
    uVar19 = FUN_18085acd0(param_1,&uStack_f0,&uStack_138,*(longlong *)(param_1 + 0x110) + 0x38,
                           in_stack_fffffffffffffe78,in_stack_fffffffffffffe80,
                           in_stack_fffffffffffffe88);
    if ((int)uVar19 != 0) {
      return uVar19;
    }
    *(uint *)(param_1 + 8) = uVar7;
    *(undefined4 *)(param_1 + 0xc) = 2;
    if ((*(int *)(lStack_c0 + 0x48) < _DAT_180c4ea98) &&
       (FUN_1808fcb90(&DAT_180c4ea98), _DAT_180c4ea98 == -1)) {
      _DAT_180c4ea94 = 0;
      FUN_1808fcb30(&DAT_180c4ea98);
    }
    uVar27 = _DAT_180c4ea94;
    plVar17 = (longlong *)(param_1 + 0x70);
    if (bVar29) {
      uVar21 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
      uVar6 = (uint)uStack_128;
      if (uVar7 < uVar6) {
        uVar19 = (ulonglong)(uVar6 - uVar7);
        if (uVar21 != 48000) {
          uVar19 = (uVar19 * uVar21) / 48000;
        }
        uVar19 = -(uVar19 & 0xffffffff);
      }
      else {
        uVar6 = uVar7 - uVar6;
        if (uVar21 != 48000) {
          uVar6 = (uint)(((ulonglong)uVar6 * (ulonglong)uVar21) / 48000);
        }
        uVar19 = (ulonglong)uVar6;
      }
      uVar19 = uVar19 + uVar26;
      plVar17 = (longlong *)(*(longlong *)(param_1 + 0x160) + 0x380);
      lVar14 = *plVar17 + -0x20;
      if (*plVar17 == 0) {
        lVar14 = 0;
      }
      if (lVar14 == 0) {
        plVar22 = (longlong *)0x0;
      }
      else {
        plVar22 = (longlong *)(lVar14 + 0x20);
      }
      if (plVar22 != plVar17) {
        plVar28 = (longlong *)0x0;
        do {
          plVar18 = plVar22 + -4;
          if (plVar22 == (longlong *)0x0) {
            plVar18 = plVar28;
          }
          iVar9 = (**(code **)(*plVar18 + 0x88))(plVar18,uVar19);
          uVar7 = uStack_134;
          if ((iVar9 != 0) || (plVar22 == plVar17)) break;
          plVar18 = (longlong *)(*plVar22 + -0x20);
          if (*plVar22 == 0) {
            plVar18 = plVar28;
          }
          plVar22 = plVar28;
          if (plVar18 != (longlong *)0x0) {
            plVar22 = plVar18 + 4;
          }
        } while (plVar22 != plVar17);
      }
      uVar16 = FUN_18085f960(*(undefined8 *)(param_1 + 0x160),uVar19);
      if ((int)uVar16 != 0) {
        return uVar16;
      }
      plVar17 = (longlong *)(param_1 + 0x70);
      if (((longlong *)*plVar17 == plVar17) && (*(longlong **)(param_1 + 0x78) == plVar17)) {
        uVar16 = *(ulonglong *)(param_1 + 0x28);
        puVar11 = *(ulonglong **)(param_1 + 0x38);
      }
      else {
        uVar16 = *(ulonglong *)(*(longlong *)(param_1 + 0x78) + 0x10);
        puVar11 = *(ulonglong **)(*(longlong *)(param_1 + 0x78) + 0x20);
      }
      if (puVar11 != (ulonglong *)0x0) {
        *(int *)(puVar11 + 2) = (int)puVar11[2] + 1;
      }
      if (uVar19 < uVar16) goto LAB_1808591d6;
      *(undefined1 *)(param_1 + 0x13c) = 1;
      puStack_110 = (ulonglong *)0x0;
      uStack_114 = 1;
      uStack_120 = uVar19;
      uStack_118 = uVar7;
      uVar7 = FUN_180859210(param_1 + 0x70,&uStack_120);
      if (puVar11 != (ulonglong *)0x0) {
        puVar2 = puVar11 + 2;
        *(int *)puVar2 = (int)*puVar2 + -1;
        if ((int)*puVar2 == 0) {
                    // WARNING: Subroutine does not return
          FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),puVar11,&UNK_180984d50,0x76,1);
        }
      }
      plVar17 = plStack_b8;
      if (uVar7 != 0) {
        return (ulonglong)uVar7;
      }
    }
    uStack_15c = uVar27;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_18085acd0(longlong param_1,longlong *param_2,uint *param_3,ulonglong *param_4,char param_5,
             char param_6,undefined1 param_7)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lStack_88;
  uint uStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  longlong lStack_60;
  longlong lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  uVar13 = *param_4;
  plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8);
  do {
    if ((uVar13 < *param_4) || (*param_4 + (longlong)(int)param_4[1] * 0x18 <= uVar13)) {
      return 0;
    }
    bVar3 = false;
    if ((*(int *)(*plVar1 + 0x48) < _DAT_180c4ea98) &&
       (FUN_1808fcb90(&DAT_180c4ea98), _DAT_180c4ea98 == -1)) {
      _DAT_180c4ea94 = 0;
      FUN_1808fcb30(&DAT_180c4ea98);
    }
    uVar8 = *(uint *)(uVar13 + 0x10);
    uVar4 = *param_3;
    if ((uVar8 < uVar4) || (uVar9 = uVar8, param_3[1] <= uVar8)) {
      uVar10 = _DAT_180c4ea94;
      if ((param_6 != '\0') && (uVar8 <= uVar4)) {
        uVar6 = 0xffffffff;
        if ((ulonglong)*(uint *)(uVar13 + 0x14) + (ulonglong)uVar8 < 0x100000000) {
          uVar6 = *(uint *)(uVar13 + 0x14) + uVar8;
        }
        uVar9 = uVar4;
        if (uVar4 < uVar6) goto LAB_18085add0;
      }
    }
    else {
LAB_18085add0:
      bVar3 = true;
      uVar10 = uVar9;
    }
    if (bVar3) {
      if (param_5 == '\0') {
        lVar12 = 0;
      }
      else {
        uVar4 = *(uint *)(param_2 + 1);
        uVar9 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
        if (uVar8 < uVar4) {
          uVar7 = (ulonglong)(uVar4 - uVar8);
          if (uVar9 != 48000) {
            uVar7 = (uVar7 * uVar9) / 48000;
          }
          lVar12 = *param_2 - (uVar7 & 0xffffffff);
        }
        else {
          uVar4 = uVar8 - uVar4;
          if (uVar9 != 48000) {
            uVar4 = (uint)(((ulonglong)uVar4 * (ulonglong)uVar9) / 48000);
          }
          lVar12 = (ulonglong)uVar4 + *param_2;
        }
      }
      lVar2 = *(longlong *)(param_1 + 0x160);
      iVar11 = -1;
      if ((ulonglong)*(uint *)(uVar13 + 0x14) + (ulonglong)uVar8 < 0x100000000) {
        iVar11 = *(uint *)(uVar13 + 0x14) + uVar8;
      }
      uStack_50 = (**(code **)(*(longlong *)(lVar2 + 8) + 0x30))(lVar2 + 8);
      uStack_78 = (undefined4)*param_2;
      uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_70 = (undefined4)param_2[1];
      uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
      uStack_68 = *(undefined8 *)param_3;
      uStack_48 = 0;
      uStack_40 = 0;
      lStack_88 = param_1;
      uStack_80 = uVar10;
      iStack_7c = iVar11;
      lStack_60 = lVar2 + 0x3f8;
      lStack_58 = lVar2 + 0x378;
      uVar5 = FUN_18085e8d0(*(undefined8 *)(param_1 + 0x160),uVar13,&lStack_88,param_5,lVar12,1,
                            param_7);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    if ((ulonglong)*(uint *)(uVar13 + 0x10) + (ulonglong)*(uint *)(uVar13 + 0x14) < 0x100000000) {
      uVar8 = *(uint *)(uVar13 + 0x10) + *(uint *)(uVar13 + 0x14);
    }
    else {
      uVar8 = 0xffffffff;
    }
    if ((*param_3 <= uVar8) && (uVar8 < param_3[1])) {
      uVar4 = *(uint *)(param_2 + 1);
      uVar9 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
      if (uVar8 < uVar4) {
        uVar7 = (ulonglong)(uVar4 - uVar8);
        if (uVar9 != 48000) {
          uVar7 = (uVar7 * uVar9) / 48000;
        }
        lVar12 = *param_2 - (uVar7 & 0xffffffff);
      }
      else {
        uVar8 = uVar8 - uVar4;
        if (uVar9 != 48000) {
          uVar8 = (uint)(((ulonglong)uVar8 * (ulonglong)uVar9) / 48000);
        }
        lVar12 = (ulonglong)uVar8 + *param_2;
      }
      uVar5 = FUN_18085f790(*(undefined8 *)(param_1 + 0x160),uVar13,lVar12,param_5,1,param_7);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    uVar13 = uVar13 + 0x18;
  } while( true );
}



undefined8
FUN_18085b050(longlong param_1,undefined8 param_2,uint *param_3,uint *param_4,uint *param_5,
             longlong param_6,undefined1 param_7,undefined1 param_8)

{
  uint *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar3 = param_8;
  uVar2 = param_7;
  puVar1 = param_5;
  uVar7 = 0xffffffff;
  iVar4 = -1;
  uVar8 = 0xffffffff;
  if ((ulonglong)*param_4 + (ulonglong)*param_5 < 0x100000000) {
    uVar8 = (ulonglong)(*param_5 + *param_4);
  }
  param_5._0_4_ = (int)uVar8;
  if (uVar8 + *param_3 < 0x100000000) {
    iVar4 = *param_3 + (int)param_5;
  }
  param_5._4_4_ = iVar4;
  uVar5 = FUN_18085acd0(param_1,param_2,&param_5,*(longlong *)(param_1 + 0x110) + 0x48,1,param_8,
                        param_7);
  if ((((int)uVar5 == 0) &&
      (uVar5 = FUN_18085acd0(param_1,param_2,&param_5,*(longlong *)(param_1 + 0x110) + 0x38,
                             (char)uVar5,uVar3,uVar2), (int)uVar5 == 0)) &&
     (uVar5 = FUN_18085b200(param_1,&param_5,param_2), (int)uVar5 == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    if ((ulonglong)*puVar1 + (ulonglong)*param_3 < 0x100000000) {
      uVar7 = *param_3 + *puVar1;
    }
    *puVar1 = uVar7;
    if (param_6 != 0) {
      lVar6 = func_0x00018084d0b0(*(undefined8 *)(param_1 + 0x110),param_6 + 0x20);
      if (lVar6 == 0) {
        return 0x1c;
      }
      func_0x00018085c9a0(param_1,&param_5,param_5._4_4_,param_2);
      uVar5 = FUN_18085c5b0(param_1,CONCAT44(param_5._4_4_,(int)param_5),lVar6 + 0x20,uVar2);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      *puVar1 = 0;
      *param_4 = *(uint *)(lVar6 + 0x20);
    }
    uVar5 = 0;
  }
  return uVar5;
}



undefined8 FUN_18085b200(longlong param_1,uint *param_2,longlong *param_3)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lStackX_8;
  
  if ((*(int *)(*(longlong *)(param_1 + 0x110) + 0x80) != 0) ||
     (*(int *)(*(longlong *)(param_1 + 0x110) + 0x90) != 0)) {
    uVar4 = func_0x0001808601d0(*(undefined8 *)(param_1 + 0x160));
    lStackX_8 = *(longlong *)(param_1 + 0x110);
    if (((uVar4 >> 0xb & 1) != 0) && (iVar10 = 0, 0 < *(int *)(lStackX_8 + 0x80))) {
      lVar11 = 0;
      do {
        lVar8 = *(longlong *)(lStackX_8 + 0x78);
        uVar6 = *(uint *)(lVar8 + 0x20 + lVar11);
        if (((*param_2 <= uVar6) && (uVar6 < param_2[1])) && (*(int *)(lVar8 + 0x18 + lVar11) != 0))
        {
          uVar1 = *(uint *)(param_3 + 1);
          uVar12 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
          if (uVar6 < uVar1) {
            uVar9 = (ulonglong)(uVar1 - uVar6);
            if (uVar12 != 48000) {
              uVar9 = (uVar9 * uVar12) / 48000;
            }
            lVar7 = *param_3 - (uVar9 & 0xffffffff);
          }
          else {
            uVar6 = uVar6 - uVar1;
            if (uVar12 != 48000) {
              uVar6 = (uint)(((ulonglong)uVar6 * (ulonglong)uVar12) / 48000);
            }
            lVar7 = (ulonglong)uVar6 + *param_3;
          }
          FUN_180854610(param_1,lVar7,*(undefined4 *)(lVar8 + 0x20 + (longlong)iVar10 * 0x28),0,
                        iVar10,0);
        }
        iVar10 = iVar10 + 1;
        lVar11 = lVar11 + 0x28;
      } while (iVar10 < *(int *)(lStackX_8 + 0x80));
      lStackX_8 = *(longlong *)(param_1 + 0x110);
    }
    uVar6 = 0x1000;
    if (*(longlong *)(*(longlong *)(param_1 + 0x160) + 0x350) != 0) {
      uVar6 = 0x40000;
    }
    if (((uVar4 & uVar6) != 0) && (*(int *)(lStackX_8 + 0x90) != 0)) {
      do {
        iVar10 = *(int *)(param_1 + 0x138);
        uVar4 = param_2[1];
        uVar6 = uVar4;
        if (iVar10 + 1 < *(int *)(lStackX_8 + 0x90)) {
          uVar6 = *(uint *)((longlong)iVar10 * 0x20 + 0x38 + *(longlong *)(lStackX_8 + 0x88));
        }
        if (-1 < iVar10) {
          uVar1 = *param_2;
          lVar11 = (longlong)iVar10 * 0x20 + *(longlong *)(lStackX_8 + 0x88);
          if (uVar1 < uVar6) {
            if (*(float *)(lVar11 + 0x1c) == 0.0) {
              return 0x1c;
            }
            uVar12 = *(uint *)(lVar11 + 0x18);
            if (uVar1 <= uVar12) {
              uVar1 = uVar12;
            }
            if (uVar6 <= uVar4) {
              uVar4 = uVar6;
            }
            fVar3 = 1.152e+07 / ((float)*(int *)(lVar11 + 0x14) * *(float *)(lVar11 + 0x1c));
            iVar10 = (int)((float)(uVar1 - uVar12) / fVar3);
            do {
              uVar12 = (int)((float)iVar10 * fVar3 + 0.5) + *(int *)(lVar11 + 0x18);
              if (uVar1 <= uVar12) {
                if (uVar4 <= uVar12) break;
                uVar5 = *(uint *)(param_3 + 1);
                uVar2 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
                if (uVar12 < uVar5) {
                  uVar9 = (ulonglong)(uVar5 - uVar12);
                  if (uVar2 != 48000) {
                    uVar9 = (uVar9 * uVar2) / 48000;
                  }
                  lVar8 = *param_3 - (uVar9 & 0xffffffff);
                }
                else {
                  uVar5 = uVar12 - uVar5;
                  if (uVar2 != 48000) {
                    uVar5 = (uint)(((ulonglong)uVar5 * (ulonglong)uVar2) / 48000);
                  }
                  lVar8 = (ulonglong)uVar5 + *param_3;
                }
                FUN_180854610(param_1,lVar8,uVar12,1,*(undefined4 *)(param_1 + 0x138),iVar10);
              }
              iVar10 = iVar10 + 1;
            } while( true );
          }
        }
        if (param_2[1] <= uVar6) {
          return 0;
        }
        *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
      } while( true );
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_18085b580(longlong param_1,uint param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  uint uStackX_8;
  int iStackX_c;
  uint auStackX_10 [2];
  uint *in_stack_ffffffffffffff88;
  longlong in_stack_ffffffffffffff90;
  ulonglong uVar16;
  longlong lStack_50;
  int iStack_48;
  
  plVar1 = (longlong *)(param_1 + 0x70);
  uVar12 = (ulonglong)param_2;
  if (((longlong *)*plVar1 == plVar1) && (*(longlong **)(param_1 + 0x78) == plVar1)) {
    lVar13 = *(longlong *)(param_1 + 0x28);
    lVar15 = *(longlong *)(param_1 + 0x38);
  }
  else {
    lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x10);
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x20);
  }
  if (lVar15 != 0) {
    *(int *)(lVar15 + 0x10) = *(int *)(lVar15 + 0x10) + 1;
  }
  lVar7 = *(longlong *)(param_1 + 0x140);
  iVar14 = -1;
  iVar10 = *(int *)(lVar7 + 0xa0);
  iVar4 = *(int *)(lVar7 + 0xa8);
  auStackX_10[0] = param_2;
  if ((*(byte *)(param_1 + 0x128) & 2) == 0) {
    in_stack_ffffffffffffff88 = (uint *)(param_1 + 0x14c);
    uVar11 = (ulonglong)(*(int *)(param_1 + 0x148) - *in_stack_ffffffffffffff88);
    uVar5 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
    if (uVar5 != 48000) {
      uVar11 = (uVar11 * uVar5) / 48000;
    }
    lStack_50 = (uVar11 & 0xffffffff) + lVar13;
    iStack_48 = -1;
    if ((ulonglong)*(uint *)(lVar15 + 8) + (ulonglong)*(uint *)(param_1 + 0x154) < 0x100000000) {
      iStack_48 = *(uint *)(param_1 + 0x154) + *(uint *)(lVar15 + 8);
    }
    if ((*(int *)(param_1 + 0xc) == 2) && (*(char *)(param_1 + 0x13d) == '\0')) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
    in_stack_ffffffffffffff90 = param_3;
    iVar9 = FUN_18085b050(param_1,&lStack_50,auStackX_10,param_1 + 0x154,in_stack_ffffffffffffff88,
                          param_3,1,uVar8);
    if (iVar9 != 0) goto LAB_18085b8b5;
    *(bool *)(param_1 + 0x13d) = param_3 != 0;
  }
  uVar5 = *(uint *)(param_1 + 0x148);
  if ((uint)(iVar10 - iVar4) <= uVar5) {
    in_stack_ffffffffffffff88 = (uint *)(param_1 + 0x150);
    uVar6 = *in_stack_ffffffffffffff88;
    uVar11 = (ulonglong)(uVar5 - uVar6);
    uVar5 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
    if (uVar5 != 48000) {
      uVar11 = (uVar11 * uVar5) / 48000;
    }
    uVar5 = *(uint *)(param_1 + 0x158);
    lStack_50 = (uVar11 & 0xffffffff) + lVar13;
    iStack_48 = -1;
    if ((ulonglong)uVar5 + (ulonglong)*(uint *)(lVar15 + 8) < 0x100000000) {
      iStack_48 = uVar5 + *(uint *)(lVar15 + 8);
    }
    if (((*(byte *)(param_1 + 0x128) & 4) == 0) || (*(char *)(param_1 + 0x13e) != '\0')) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    if (param_4 != 0) {
      uVar11 = 0xffffffff;
      if (uVar5 + uVar12 < 0x100000000) {
        uVar11 = (ulonglong)(uVar5 + param_2);
      }
      iVar10 = -1;
      if (uVar11 + uVar6 < 0x100000000) {
        iVar10 = (int)uVar11 + uVar6;
      }
      *(int *)(param_1 + 0x15c) = iVar10;
    }
    in_stack_ffffffffffffff90 = param_4;
    iVar9 = FUN_18085b050(param_1,&lStack_50,auStackX_10,param_1 + 0x158,in_stack_ffffffffffffff88,
                          param_4,0,uVar8);
    if (iVar9 != 0) goto LAB_18085b8b5;
    uVar5 = *(uint *)(param_1 + 0x148);
    *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) | 4;
    *(bool *)(param_1 + 0x13e) = param_4 != 0;
  }
  iStack_48 = *(int *)(lVar15 + 8);
  iStackX_c = -1;
  if (uVar5 + uVar12 < 0x100000000) {
    iStackX_c = uVar5 + param_2;
  }
  bVar3 = *(byte *)(param_1 + 0x128);
  uVar16 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff90 >> 8),~bVar3) & 0xffffffffffffff01;
  uVar11 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff88 >> 8),1);
  uStackX_8 = uVar5;
  lStack_50 = lVar13;
  iVar9 = FUN_18085acd0(param_1,&lStack_50,&uStackX_8,lVar7 + 0x80,uVar11,uVar16,0);
  if (iVar9 == 0) {
    iVar9 = FUN_18085acd0(param_1,&lStack_50,&uStackX_8,lVar7 + 0x90,uVar11 & 0xffffffffffffff00,
                          CONCAT71((int7)(uVar16 >> 8),~bVar3) & 0xffffffffffffff01,0);
    if (iVar9 != 0) goto LAB_18085b88c;
  }
  else {
LAB_18085b88c:
    if (iVar9 != 0) goto LAB_18085b8b5;
  }
  *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) | 1;
  if (uVar12 + *(uint *)(param_1 + 0x148) < 0x100000000) {
    iVar14 = *(uint *)(param_1 + 0x148) + param_2;
  }
  *(int *)(param_1 + 0x148) = iVar14;
  iVar9 = 0;
LAB_18085b8b5:
  piVar2 = (int *)(lVar15 + 0x10);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),lVar15,&UNK_180984d50,0x76,1);
  }
  return iVar9;
}

/* ============================================================================
 * 技术说明
 * ============================================================================ */
/**
 * 本文件实现了UI系统高级数据处理和状态管理功能：
 * 
 * 1. 高级数据处理
 *    - 处理UI系统数据转换和管理
 *    - 验证数据有效性和完整性
 *    - 执行数据格式转换
 *    - 管理数据生命周期
 * 
 * 2. 状态管理
 *    - 控制UI系统状态变化
 *    - 管理状态标志和属性
 *    - 处理状态同步和更新
 *    - 执行状态验证和清理
 * 
 * 3. 资源管理
 *    - 分配和释放UI资源
 *    - 管理资源生命周期
 *    - 处理资源池和缓存
 *    - 执行资源清理和回收
 * 
 * 4. 参数处理
 *    - 处理UI系统参数配置
 *    - 管理时间同步和频率控制
 *    - 执行参数验证和转换
 *    - 控制系统行为和属性
 * 
 * 该模块是UI系统的重要组成部分，为高级UI功能提供核心支持。
 */



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_18085b595(longlong param_1,uint param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong in_RAX;
  ulonglong uVar9;
  undefined8 unaff_RBX;
  ulonglong uVar10;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  longlong lVar11;
  undefined8 unaff_RDI;
  int iVar12;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  longlong lVar13;
  uint *in_stack_00000020;
  undefined1 uStack0000000000000030;
  longlong lStack0000000000000040;
  longlong lStack0000000000000048;
  int iStack0000000000000050;
  uint uStack00000000000000a0;
  int iStack00000000000000a4;
  longlong in_stack_000000b8;
  
  *(undefined8 *)(in_RAX + 0x18) = unaff_RBX;
  *(undefined8 *)(in_RAX + -0x18) = unaff_RBP;
  *(undefined8 *)(in_RAX + -0x20) = unaff_RSI;
  *(undefined8 *)(in_RAX + -0x28) = unaff_RDI;
  *(undefined8 *)(in_RAX + -0x30) = unaff_R12;
  *(undefined8 *)(in_RAX + -0x38) = unaff_R13;
  plVar1 = (longlong *)(param_1 + 0x70);
  uVar10 = (ulonglong)param_2;
  if (((longlong *)*plVar1 == plVar1) && (*(longlong **)(param_1 + 0x78) == plVar1)) {
    lVar11 = *(longlong *)(param_1 + 0x28);
    lVar13 = *(longlong *)(param_1 + 0x38);
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x10);
    lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x20);
  }
  if (lVar13 != 0) {
    *(int *)(lVar13 + 0x10) = *(int *)(lVar13 + 0x10) + 1;
  }
  lStack0000000000000040 = *(longlong *)(param_1 + 0x140);
  iVar12 = -1;
  iVar8 = *(int *)(lStack0000000000000040 + 0xa0);
  iVar3 = *(int *)(lStack0000000000000040 + 0xa8);
  if ((*(byte *)(param_1 + 0x128) & 2) == 0) {
    in_stack_00000020 = (uint *)(param_1 + 0x14c);
    uVar9 = (ulonglong)(*(int *)(param_1 + 0x148) - *in_stack_00000020);
    uVar4 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
    if (uVar4 != 48000) {
      uVar9 = (uVar9 * uVar4) / 48000;
    }
    lStack0000000000000048 = (uVar9 & 0xffffffff) + lVar11;
    iStack0000000000000050 = -1;
    if ((ulonglong)*(uint *)(lVar13 + 8) + (ulonglong)*(uint *)(param_1 + 0x154) < 0x100000000) {
      iStack0000000000000050 = *(uint *)(param_1 + 0x154) + *(uint *)(lVar13 + 8);
    }
    uStack0000000000000030 = 1;
    iVar7 = FUN_18085b050(param_1,&stack0x00000048,&stack0x000000a8,param_1 + 0x154,
                          in_stack_00000020);
    if (iVar7 != 0) goto LAB_18085b8b5;
    *(bool *)(param_1 + 0x13d) = param_3 != 0;
    param_4 = in_stack_000000b8;
  }
  uVar4 = *(uint *)(param_1 + 0x148);
  if ((uint)(iVar8 - iVar3) <= uVar4) {
    in_stack_00000020 = (uint *)(param_1 + 0x150);
    uVar5 = *in_stack_00000020;
    uVar9 = (ulonglong)(uVar4 - uVar5);
    uVar4 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
    if (uVar4 != 48000) {
      uVar9 = (uVar9 * uVar4) / 48000;
    }
    uVar4 = *(uint *)(param_1 + 0x158);
    lStack0000000000000048 = (uVar9 & 0xffffffff) + lVar11;
    iStack0000000000000050 = -1;
    if ((ulonglong)uVar4 + (ulonglong)*(uint *)(lVar13 + 8) < 0x100000000) {
      iStack0000000000000050 = uVar4 + *(uint *)(lVar13 + 8);
    }
    if (param_4 != 0) {
      uVar9 = 0xffffffff;
      if (uVar4 + uVar10 < 0x100000000) {
        uVar9 = (ulonglong)(uVar4 + param_2);
      }
      iVar8 = -1;
      if (uVar9 + uVar5 < 0x100000000) {
        iVar8 = (int)uVar9 + uVar5;
      }
      *(int *)(param_1 + 0x15c) = iVar8;
    }
    uStack0000000000000030 = 0;
    iVar7 = FUN_18085b050(param_1,&stack0x00000048,&stack0x000000a8,param_1 + 0x158,
                          in_stack_00000020);
    if (iVar7 != 0) goto LAB_18085b8b5;
    uVar4 = *(uint *)(param_1 + 0x148);
    *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) | 4;
    *(bool *)(param_1 + 0x13e) = in_stack_000000b8 != 0;
  }
  lVar6 = lStack0000000000000040;
  iStack0000000000000050 = *(int *)(lVar13 + 8);
  iStack00000000000000a4 = -1;
  if (uVar4 + uVar10 < 0x100000000) {
    iStack00000000000000a4 = uVar4 + param_2;
  }
  uStack0000000000000030 = 0;
  uVar9 = CONCAT71((int7)((ulonglong)in_stack_00000020 >> 8),1);
  lStack0000000000000048 = lVar11;
  uStack00000000000000a0 = uVar4;
  iVar7 = FUN_18085acd0(param_1,&stack0x00000048,&stack0x000000a0,lStack0000000000000040 + 0x80,
                        uVar9);
  if (iVar7 == 0) {
    uStack0000000000000030 = 0;
    iVar7 = FUN_18085acd0(param_1,&stack0x00000048,&stack0x000000a0,lVar6 + 0x90,
                          uVar9 & 0xffffffffffffff00);
    if (iVar7 != 0) goto LAB_18085b88c;
  }
  else {
LAB_18085b88c:
    if (iVar7 != 0) goto LAB_18085b8b5;
  }
  *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) | 1;
  if (uVar10 + *(uint *)(param_1 + 0x148) < 0x100000000) {
    iVar12 = *(uint *)(param_1 + 0x148) + param_2;
  }
  *(int *)(param_1 + 0x148) = iVar12;
  iVar7 = 0;
LAB_18085b8b5:
  piVar2 = (int *)(lVar13 + 0x10);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 != 0) {
    return iVar7;
  }
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),lVar13,&UNK_180984d50,0x76,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





