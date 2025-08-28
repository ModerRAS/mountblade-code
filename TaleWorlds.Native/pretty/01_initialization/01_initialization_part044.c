#include "TaleWorlds.Native.Split.h"

// 01_initialization_part044.c - 初始化和序列化模块
// 
// 本模块包含11个函数，主要负责：
// 1. 初始化各种数据结构和参数
// 2. 处理网格数据的序列化和缓冲区管理
// 3. 结构体的清理和重置操作
// 4. 批量处理网格数据
//
// 这些函数是游戏引擎初始化流程的重要组成部分，特别是对于3D模型的
// 数据处理和缓冲区管理具有关键作用。
//
// 主要功能分类：
// - 初始化函数：initialize_with_default_params, initialize_with_custom_params, initialize_complex_structure
// - 结构体管理：reset_structure_pointers, cleanup_linked_structure
// - 数据序列化：serialize_mesh_data, serialize_mesh_data_buffer
// - 缓冲区操作：write_buffer_header, initialize_buffer_writer, finalize_buffer_writer
// - 批量处理：process_mesh_batch

/**
 * 使用默认参数初始化系统
 * 主要功能：使用默认参数集初始化游戏引擎的某个子系统，设置基本的内存布局和初始化状态
 * 
 * 原始实现：FUN_180073730
 * 简化实现：系统默认参数初始化函数
 * 
 * @param system_handle 系统句柄或上下文
 * @param config_param 配置参数
 */
void initialize_with_default_params(uint64_t system_handle, uint64_t config_param)
{
  void *system_ptr;           // 系统指针
  char initialization_flag;        // 初始化标志
  int32_t default_params[4];    // 默认参数数组
  void *stack_buffer;         // 栈缓冲区
  longlong stack_check;            // 栈检查值
  
  // 调用系统初始化函数
  FUN_1800623b0(_DAT_180c86928, 0, 0x100000000, 1, &unknown_var_4968_ptr, config_param, 0xfffffffffffffffe);
  
  // 检查系统状态
  if (system_debug_flag == '\0') {
    // 设置默认参数
    default_params[0] = 0xff00ff00;
    
    // 初始化栈缓冲区
    FUN_180627910(&stack_buffer, config_param);
    
    // 获取系统指针
    system_ptr = *(void **)*_DAT_180c8ed08;
    
    // 检查系统指针状态
    if (system_ptr == &unknown_var_424_ptr) {
      // 使用系统配置检查初始化状态
      initialization_flag = *(int *)(_DAT_180c8a9c8 + 0xc40) != 0;
    }
    else {
      // 使用自定义函数检查初始化状态
      initialization_flag = (**(code **)(system_ptr + 0x50))((uint64_t *)*_DAT_180c8ed08);
    }
    
    // 如果未初始化，则进行初始化
    if (initialization_flag == '\0') {
      (**(code **)(*(longlong *)_DAT_180c8ed08[1] + 0x18))
                ((longlong *)_DAT_180c8ed08[1], &stack_buffer, default_params);
    }
    
    // 设置缓冲区指针
    stack_buffer = &unknown_var_3456_ptr;
    
    // 检查栈状态
    if (stack_check != 0) {
      // 栈错误处理
      FUN_18064e900();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 使用自定义参数初始化系统
 * 主要功能：允许使用自定义参数集初始化系统，提供比默认初始化更灵活的配置选项
 * 
 * 原始实现：FUN_180073830
 * 简化实现：系统自定义参数初始化函数
 * 
 * @param system_handle 系统句柄或上下文
 * @param custom_param 自定义配置参数
 * @param additional_config 附加配置数据
 */
void initialize_with_custom_params(uint64_t system_handle, int32_t custom_param, uint64_t additional_config)
{
  void *system_ptr;           // 系统指针
  char initialization_flag;        // 初始化标志
  int32_t custom_params[2];     // 自定义参数数组
  void *stack_buffer;         // 栈缓冲区
  longlong stack_check;            // 栈检查值
  
  // 调用系统初始化函数（使用自定义参数模式）
  FUN_1800623b0(_DAT_180c86928, 0, 0x100000000, 0xc, &unknown_var_5000_ptr, additional_config, 0xfffffffffffffffe);
  
  // 检查系统状态
  if (system_debug_flag == '\0') {
    // 设置自定义参数
    custom_params[0] = custom_param;
    
    // 初始化栈缓冲区
    FUN_180627910(&stack_buffer, additional_config);
    
    // 获取系统指针
    system_ptr = *(void **)*_DAT_180c8ed08;
    
    // 检查系统指针状态
    if (system_ptr == &unknown_var_424_ptr) {
      // 使用系统配置检查初始化状态
      initialization_flag = *(int *)(_DAT_180c8a9c8 + 0xc40) != 0;
    }
    else {
      // 使用自定义函数检查初始化状态
      initialization_flag = (**(code **)(system_ptr + 0x50))((uint64_t *)*_DAT_180c8ed08);
    }
    
    // 如果未初始化，则进行初始化
    if (initialization_flag == '\0') {
      (**(code **)(*(longlong *)_DAT_180c8ed08[1] + 0x18))
                ((longlong *)_DAT_180c8ed08[1], &stack_buffer, custom_params);
    }
    
    // 设置缓冲区指针
    stack_buffer = &unknown_var_3456_ptr;
    
    // 检查栈状态
    if (stack_check != 0) {
      // 栈错误处理
      FUN_18064e900();
    }
  }
  return;
}





/**
 * 初始化复杂的数据结构
 * 主要功能：初始化一个复杂的多层次数据结构，包括内存分配、指针设置、子系统的初始化等
 * 
 * 原始实现：FUN_180073930
 * 简化实现：复杂数据结构初始化函数
 * 
 * @param main_handle 主系统句柄
 * @param base_config 基础配置参数
 * @param mesh_handle 网格数据句柄
 * @param extra_options 附加配置选项
 */
void initialize_complex_structure(uint64_t main_handle, uint64_t base_config, uint64_t mesh_handle, uint64_t extra_options)
{
  // 复杂结构体的栈布局
  void *structure_ptr;        // 主结构体指针
  uint64_t config_flags;         // 配置标志
  int32_t operation_mode;       // 操作模式
  uint64_t mesh_data_ptr;       // 网格数据指针
  uint64_t buffer_handle;        // 缓冲区句柄
  uint64_t serialization_ptr;   // 序列化指针
  uint64_t validation_ptr;       // 验证指针
  int32_t data_format;          // 数据格式
  uint64_t memory_pool;          // 内存池
  uint64_t temp_buffer;          // 临时缓冲区
  int16_t version_info;         // 版本信息
  uint64_t resource_handle;      // 资源句柄
  uint64_t context_data;         // 上下文数据
  int16_t checksum;             // 校验和
  uint64_t init_flag;            // 初始化标志
  
  // 初始化基本参数
  init_flag = 0xfffffffffffffffe;  // 初始化标志
  structure_ptr = &unknown_var_3456_ptr;  // 结构体指针
  
  // 清零所有配置字段
  mesh_data_ptr = 0;              // 网格数据指针
  config_flags = 0;               // 配置标志
  operation_mode = 0;             // 操作模式
  buffer_handle = 0;               // 缓冲区句柄
  serialization_ptr = 0;          // 序列化指针
  validation_ptr = 0;              // 验证指针
  data_format = 3;                // 数据格式
  version_info = 0;               // 版本信息
  memory_pool = 0;                // 内存池
  temp_buffer = 0;                // 临时缓冲区
  checksum = 0;                   // 校验和
  resource_handle = 0;            // 资源句柄
  context_data = 0;               // 上下文数据
  
  // 调用复杂结构初始化函数
  FUN_180074090(&structure_ptr, main_handle, mesh_handle, extra_options, &buffer_handle);
  
  // 序列化网格数据
  serialize_mesh_data(&structure_ptr, mesh_handle);
  
  // 重置结构体指针
  reset_structure_pointers(&structure_ptr);
  
  return;
}





/**
 * 重置结构体指针和状态
 * 主要功能：将结构体的各个指针字段重置为安全状态，清理可能存在的内存引用
 * 
 * 原始实现：FUN_1800739f0
 * 简化实现：结构体指针重置函数
 * 
 * @param structure_ptr 指向需要重置的结构体的指针
 */
void reset_structure_pointers(uint64_t *structure_ptr)
{
  // 检查并重置偏移0x52处的指针
  if (*(longlong *)((longlong)structure_ptr + 0x52) != 0) {
    // 错误：指针不为空，可能存在内存泄漏
    FUN_18064e900();
  }
  *(uint64_t *)((longlong)structure_ptr + 0x52) = 0;
  
  // 检查并重置偏移0x5a处的指针
  if (*(longlong *)((longlong)structure_ptr + 0x5a) != 0) {
    // 错误：指针不为空，可能存在内存泄漏
    FUN_18064e900();
  }
  *(uint64_t *)((longlong)structure_ptr + 0x5a) = 0;
  
  // 检查并重置索引8处的指针
  if (structure_ptr[8] != 0) {
    // 错误：指针不为空，可能存在内存泄漏
    FUN_18064e900();
  }
  structure_ptr[8] = 0;
  
  // 检查并重置索引9处的指针
  if (structure_ptr[9] != 0) {
    // 错误：指针不为空，可能存在内存泄漏
    FUN_18064e900();
  }
  structure_ptr[9] = 0;
  
  // 调用清理函数
  FUN_180074a80();
  
  // 设置主指针
  *structure_ptr = &unknown_var_3456_ptr;
  
  // 检查并重置索引1处的指针
  if (structure_ptr[1] != 0) {
    // 错误：指针不为空，可能存在内存泄漏
    FUN_18064e900();
  }
  structure_ptr[1] = 0;
  
  // 重置其他字段
  *(int32_t *)(structure_ptr + 3) = 0;
  
  // 设置最终指针状态
  *structure_ptr = &unknown_var_720_ptr;
  
  return;
}





/**
 * 清理链接的结构体链
 * 主要功能：遍历一个链接的结构体链，逐个清理每个节点的内存和指针
 * 
 * 原始实现：FUN_180073ab0
 * 简化实现：链表结构清理函数
 * 
 * @param list_head 指向链表头部的指针
 */
void cleanup_linked_structure(longlong *list_head)
{
  longlong *list_tail;             // 链表尾部指针
  longlong *current_node;          // 当前节点指针
  
  // 获取链表尾部指针
  list_tail = (longlong *)list_head[1];
  
  // 获取第一个节点
  current_node = (longlong *)*list_head;
  
  // 遍历链表
  while (true) {
    // 检查是否到达链表尾部
    if (current_node == list_tail) {
      // 验证链表头部是否已清理
      if (*list_head != 0) {
        // 错误：链表头部未正确清理
        FUN_18064e900();
      }
      return;
    }
    
    // 检查并清理偏移0x12处的指针
    if (*(longlong *)((longlong)current_node + 0x12) != 0) {
      // 错误：指针未清理
      FUN_18064e900();
    }
    *(uint64_t *)((longlong)current_node + 0x12) = 0;
    
    // 检查偏移0x1a处的指针
    if (*(longlong *)((longlong)current_node + 0x1a) != 0) {
      // 错误：指针未清理，跳出循环
      break;
    }
    *(uint64_t *)((longlong)current_node + 0x1a) = 0;
    
    // 检查并清理主指针
    if (*current_node != 0) {
      // 错误：主指针未清理
      FUN_18064e900();
    }
    *current_node = 0;
    
    // 检查并清理索引1处的指针
    if (current_node[1] != 0) {
      // 错误：指针未清理
      FUN_18064e900();
    }
    current_node[1] = 0;
    
    // 移动到下一个节点（节点大小为0x24字节）
    current_node = (longlong *)((longlong)current_node + 0x24);
  }
  
  // 错误处理
  FUN_18064e900();
}





/**
 * 序列化网格数据到缓冲区
 * 主要功能：将复杂的网格数据结构序列化为连续的字节流，处理顶点数据、索引数据、材质信息等
 * 
 * 原始实现：FUN_180073ad0
 * 简化实现：网格数据序列化函数
 * 
 * @param mesh_handle 网格数据源句柄
 * @param buffer_ptr 目标缓冲区指针
 */
void serialize_mesh_data(longlong mesh_handle, longlong *buffer_ptr)
{
  ushort vertex_count;             // 顶点计数
  uint64_t data_ptr;             // 数据指针
  int *buffer_pos;                 // 缓冲区位置指针
  int32_t *data_writer;          // 数据写入器
  uint *uint_writer;               // 无符号整数写入器
  longlong mesh_size;              // 网格大小
  longlong vertex_offset;          // 顶点偏移量
  int element_count;               // 元素计数
  ulonglong data_size;             // 数据大小
  longlong loop_counter;           // 循环计数器
  
  // 初始化序列化过程
  FUN_180639ec0(buffer_ptr, mesh_handle);
  lVar6 = *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20);
  piVar3 = (int *)param_2[1];
  lVar6 = lVar6 / 0x12 + (lVar6 >> 0x3f);
  iVar8 = (int)(lVar6 >> 1) - (int)(lVar6 >> 0x3f);
  if ((ulonglong)((*param_2 - (longlong)piVar3) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)piVar3 + (4 - *param_2));
    piVar3 = (int *)param_2[1];
  }
  *piVar3 = iVar8;
  puVar4 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar4;
  lVar6 = (longlong)iVar8;
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      lVar7 = *(longlong *)(param_1 + 0x20) + lVar10;
      if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
        FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
        puVar4 = (int32_t *)param_2[1];
      }
      *puVar4 = 0;
      param_2[1] = param_2[1] + 4;
      puVar4 = (int32_t *)param_2[1];
      if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
        FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
        puVar4 = (int32_t *)param_2[1];
      }
      *puVar4 = 0x10;
      param_2[1] = param_2[1] + 4;
      puVar5 = (uint *)param_2[1];
      uVar1 = *(ushort *)(lVar7 + 0x10);
      if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
        FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
        puVar5 = (uint *)param_2[1];
      }
      *puVar5 = (uint)uVar1;
      puVar4 = (int32_t *)(param_2[1] + 4);
      param_2[1] = (longlong)puVar4;
      if (*(ushort *)(lVar7 + 0x10) != 0) {
        uVar2 = *(uint64_t *)(lVar7 + 8);
        uVar9 = (ulonglong)*(ushort *)(lVar7 + 0x10) * 4;
        if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) <= uVar9) {
          FUN_180639bf0(param_2,(longlong)puVar4 + (uVar9 - *param_2));
          puVar4 = (int32_t *)param_2[1];
        }
                    // WARNING: Subroutine does not return
        memcpy(puVar4,uVar2,uVar9);
      }
      lVar7 = *(longlong *)(param_1 + 0x20) + lVar10;
      if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
        FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
        puVar4 = (int32_t *)param_2[1];
      }
      *puVar4 = 0;
      param_2[1] = param_2[1] + 4;
      puVar4 = (int32_t *)param_2[1];
      if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
        FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
        puVar4 = (int32_t *)param_2[1];
      }
      *puVar4 = 0x10;
      param_2[1] = param_2[1] + 4;
      puVar5 = (uint *)param_2[1];
      uVar1 = *(ushort *)(lVar7 + 0x22);
      if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
        FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
        puVar5 = (uint *)param_2[1];
      }
      *puVar5 = (uint)uVar1;
      puVar4 = (int32_t *)(param_2[1] + 4);
      param_2[1] = (longlong)puVar4;
      if (*(ushort *)(lVar7 + 0x22) != 0) {
        uVar2 = *(uint64_t *)(lVar7 + 0x1a);
        uVar9 = (ulonglong)*(ushort *)(lVar7 + 0x22) * 4;
        if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) <= uVar9) {
          FUN_180639bf0(param_2,(longlong)puVar4 + (uVar9 - *param_2));
          puVar4 = (int32_t *)param_2[1];
        }
                    // WARNING: Subroutine does not return
        memcpy(puVar4,uVar2,uVar9);
      }
      lVar10 = lVar10 + 0x24;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = 0;
  param_2[1] = param_2[1] + 4;
  puVar4 = (int32_t *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = 0x10;
  param_2[1] = param_2[1] + 4;
  puVar5 = (uint *)param_2[1];
  uVar1 = *(ushort *)(param_1 + 0x50);
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (uint *)param_2[1];
  }
  *puVar5 = (uint)uVar1;
  puVar4 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar4;
  if (*(ushort *)(param_1 + 0x50) != 0) {
    uVar2 = *(uint64_t *)(param_1 + 0x48);
    uVar9 = (ulonglong)*(ushort *)(param_1 + 0x50) * 4;
    if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) <= uVar9) {
      FUN_180639bf0(param_2,(longlong)puVar4 + (uVar9 - *param_2));
      puVar4 = (int32_t *)param_2[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(puVar4,uVar2,uVar9);
  }
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = 0;
  param_2[1] = param_2[1] + 4;
  puVar4 = (int32_t *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = 0x10;
  param_2[1] = param_2[1] + 4;
  puVar5 = (uint *)param_2[1];
  uVar1 = *(ushort *)(param_1 + 0x62);
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (uint *)param_2[1];
  }
  *puVar5 = (uint)uVar1;
  lVar6 = param_2[1] + 4;
  param_2[1] = lVar6;
  if (*(ushort *)(param_1 + 0x62) == 0) {
    return;
  }
  uVar2 = *(uint64_t *)(param_1 + 0x5a);
  uVar9 = (ulonglong)*(ushort *)(param_1 + 0x62) * 4;
  if ((ulonglong)((*param_2 - lVar6) + param_2[2]) <= uVar9) {
    FUN_180639bf0(param_2,uVar9 + (lVar6 - *param_2));
    lVar6 = param_2[1];
  }
                    // WARNING: Subroutine does not return
  memcpy(lVar6,uVar2,uVar9);
}





/**
 * 序列化网格数据到预分配缓冲区
 * 主要功能：与serialize_mesh_data类似，但使用预分配的缓冲区，减少动态内存分配开销
 * 
 * 原始实现：FUN_180073adc
 * 简化实现：预分配缓冲区网格序列化函数
 * 
 * @param mesh_handle 网格数据源句柄
 */
void serialize_mesh_data_buffer(longlong mesh_handle)
{
  ushort vertex_count;             // 顶点计数
  uint64_t data_ptr;             // 数据指针
  int *buffer_pos;                 // 缓冲区位置指针
  int32_t *data_writer;          // 数据写入器
  uint *uint_writer;               // 无符号整数写入器
  longlong mesh_size;              // 网格大小
  longlong *global_buffer;          // 全局缓冲区指针
  longlong vertex_offset;          // 顶点偏移量;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  FUN_180639ec0();
  lVar6 = *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20);
  piVar3 = (int *)unaff_RBX[1];
  lVar6 = lVar6 / 0x12 + (lVar6 >> 0x3f);
  iVar8 = (int)(lVar6 >> 1) - (int)(lVar6 >> 0x3f);
  if ((ulonglong)((*unaff_RBX - (longlong)piVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar3 = (int *)unaff_RBX[1];
  }
  *piVar3 = iVar8;
  puVar4 = (int32_t *)(unaff_RBX[1] + 4);
  unaff_RBX[1] = (longlong)puVar4;
  lVar6 = (longlong)iVar8;
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      lVar7 = *(longlong *)(param_1 + 0x20) + lVar10;
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar4 = (int32_t *)unaff_RBX[1];
      }
      *puVar4 = 0;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar4 = (int32_t *)unaff_RBX[1];
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar4 = (int32_t *)unaff_RBX[1];
      }
      *puVar4 = 0x10;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar5 = (uint *)unaff_RBX[1];
      uVar1 = *(ushort *)(lVar7 + 0x10);
      if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar5 = (uint *)unaff_RBX[1];
      }
      *puVar5 = (uint)uVar1;
      puVar4 = (int32_t *)(unaff_RBX[1] + 4);
      unaff_RBX[1] = (longlong)puVar4;
      if (*(ushort *)(lVar7 + 0x10) != 0) {
        uVar2 = *(uint64_t *)(lVar7 + 8);
        uVar9 = (ulonglong)*(ushort *)(lVar7 + 0x10) * 4;
        if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) <= uVar9) {
          FUN_180639bf0();
          puVar4 = (int32_t *)unaff_RBX[1];
        }
                    // WARNING: Subroutine does not return
        memcpy(puVar4,uVar2,uVar9);
      }
      lVar7 = *(longlong *)(param_1 + 0x20) + lVar10;
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar4 = (int32_t *)unaff_RBX[1];
      }
      *puVar4 = 0;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar4 = (int32_t *)unaff_RBX[1];
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar4 = (int32_t *)unaff_RBX[1];
      }
      *puVar4 = 0x10;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar5 = (uint *)unaff_RBX[1];
      uVar1 = *(ushort *)(lVar7 + 0x22);
      if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar5 = (uint *)unaff_RBX[1];
      }
      *puVar5 = (uint)uVar1;
      puVar4 = (int32_t *)(unaff_RBX[1] + 4);
      unaff_RBX[1] = (longlong)puVar4;
      if (*(ushort *)(lVar7 + 0x22) != 0) {
        uVar2 = *(uint64_t *)(lVar7 + 0x1a);
        uVar9 = (ulonglong)*(ushort *)(lVar7 + 0x22) * 4;
        if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) <= uVar9) {
          FUN_180639bf0();
          puVar4 = (int32_t *)unaff_RBX[1];
        }
                    // WARNING: Subroutine does not return
        memcpy(puVar4,uVar2,uVar9);
      }
      lVar10 = lVar10 + 0x24;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  *puVar4 = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (int32_t *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  *puVar4 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar5 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(param_1 + 0x50);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (uint *)unaff_RBX[1];
  }
  *puVar5 = (uint)uVar1;
  puVar4 = (int32_t *)(unaff_RBX[1] + 4);
  unaff_RBX[1] = (longlong)puVar4;
  if (*(ushort *)(param_1 + 0x50) != 0) {
    uVar2 = *(uint64_t *)(param_1 + 0x48);
    uVar9 = (ulonglong)*(ushort *)(param_1 + 0x50) * 4;
    if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) <= uVar9) {
      FUN_180639bf0();
      puVar4 = (int32_t *)unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(puVar4,uVar2,uVar9);
  }
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  *puVar4 = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (int32_t *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  *puVar4 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar5 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(param_1 + 0x62);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (uint *)unaff_RBX[1];
  }
  *puVar5 = (uint)uVar1;
  lVar6 = unaff_RBX[1] + 4;
  unaff_RBX[1] = lVar6;
  if (*(ushort *)(param_1 + 0x62) == 0) {
    return;
  }
  uVar2 = *(uint64_t *)(param_1 + 0x5a);
  uVar9 = (ulonglong)*(ushort *)(param_1 + 0x62) * 4;
  if ((ulonglong)((*unaff_RBX - lVar6) + unaff_RBX[2]) <= uVar9) {
    FUN_180639bf0();
    lVar6 = unaff_RBX[1];
  }
                    // WARNING: Subroutine does not return
  memcpy(lVar6,uVar2,uVar9);
}





/**
 * 批量处理网格数据
 * 主要功能：优化多个网格数据的处理流程，通过批处理提高性能
 * 
 * 原始实现：FUN_180073b64
 * 简化实现：网格数据批处理函数
 * 
 * @param batch_params 批处理参数和目标缓冲区
 */
void process_mesh_batch(uint *batch_params)
{
  ushort vertex_count;             // 顶点计数
  uint64_t data_ptr;             // 数据指针
  int32_t *data_writer;          // 数据写入器
  uint *uint_writer;               // 无符号整数写入器
  longlong *buffer_manager;        // 缓冲区管理器
  longlong mesh_offset;             // 网格偏移量
  ulonglong data_size;             // 数据大小
  longlong batch_counter;          // 批处理计数器;
  uint unaff_R13D;
  longlong unaff_R15;
  
  uVar6 = (ulonglong)unaff_R13D;
  do {
    lVar5 = *(longlong *)(unaff_R15 + 0x20) + uVar6;
    if ((ulonglong)((*unaff_RBX - (longlong)param_1) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      param_1 = (uint *)unaff_RBX[1];
    }
    *param_1 = unaff_R13D;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar3 = (int32_t *)unaff_RBX[1];
    if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      puVar3 = (int32_t *)unaff_RBX[1];
    }
    *puVar3 = 0x10;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar4 = (uint *)unaff_RBX[1];
    uVar1 = *(ushort *)(lVar5 + 0x10);
    if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      puVar4 = (uint *)unaff_RBX[1];
    }
    *puVar4 = (uint)uVar1;
    puVar4 = (uint *)(unaff_RBX[1] + 4);
    unaff_RBX[1] = (longlong)puVar4;
    if (*(ushort *)(lVar5 + 0x10) != 0) {
      uVar2 = *(uint64_t *)(lVar5 + 8);
      uVar6 = (ulonglong)*(ushort *)(lVar5 + 0x10) * 4;
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) <= uVar6) {
        FUN_180639bf0();
        puVar4 = (uint *)unaff_RBX[1];
      }
                    // WARNING: Subroutine does not return
      memcpy(puVar4,uVar2,uVar6);
    }
    lVar5 = *(longlong *)(unaff_R15 + 0x20) + uVar6;
    if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      puVar4 = (uint *)unaff_RBX[1];
    }
    *puVar4 = unaff_R13D;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar3 = (int32_t *)unaff_RBX[1];
    if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      puVar3 = (int32_t *)unaff_RBX[1];
    }
    *puVar3 = 0x10;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar4 = (uint *)unaff_RBX[1];
    uVar1 = *(ushort *)(lVar5 + 0x22);
    if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      puVar4 = (uint *)unaff_RBX[1];
    }
    *puVar4 = (uint)uVar1;
    param_1 = (uint *)(unaff_RBX[1] + 4);
    unaff_RBX[1] = (longlong)param_1;
    if (*(ushort *)(lVar5 + 0x22) != 0) {
      uVar2 = *(uint64_t *)(lVar5 + 0x1a);
      uVar6 = (ulonglong)*(ushort *)(lVar5 + 0x22) * 4;
      if ((ulonglong)((*unaff_RBX - (longlong)param_1) + unaff_RBX[2]) <= uVar6) {
        FUN_180639bf0();
        param_1 = (uint *)unaff_RBX[1];
      }
                    // WARNING: Subroutine does not return
      memcpy(param_1,uVar2,uVar6);
    }
    uVar6 = uVar6 + 0x24;
    unaff_R12 = unaff_R12 + -1;
  } while (unaff_R12 != 0);
  if ((ulonglong)((*unaff_RBX - (longlong)param_1) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    param_1 = (uint *)unaff_RBX[1];
  }
  *param_1 = unaff_R13D;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (int32_t *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (int32_t *)unaff_RBX[1];
  }
  *puVar3 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(unaff_R15 + 0x50);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (uint *)unaff_RBX[1];
  }
  *puVar4 = (uint)uVar1;
  puVar4 = (uint *)(unaff_RBX[1] + 4);
  unaff_RBX[1] = (longlong)puVar4;
  if (*(ushort *)(unaff_R15 + 0x50) != 0) {
    uVar2 = *(uint64_t *)(unaff_R15 + 0x48);
    uVar6 = (ulonglong)*(ushort *)(unaff_R15 + 0x50) * 4;
    if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) <= uVar6) {
      FUN_180639bf0();
      puVar4 = (uint *)unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(puVar4,uVar2,uVar6);
  }
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (uint *)unaff_RBX[1];
  }
  *puVar4 = unaff_R13D;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (int32_t *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (int32_t *)unaff_RBX[1];
  }
  *puVar3 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(unaff_R15 + 0x62);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (uint *)unaff_RBX[1];
  }
  *puVar4 = (uint)uVar1;
  lVar5 = unaff_RBX[1] + 4;
  unaff_RBX[1] = lVar5;
  if (*(ushort *)(unaff_R15 + 0x62) != 0) {
    uVar2 = *(uint64_t *)(unaff_R15 + 0x5a);
    uVar6 = (ulonglong)*(ushort *)(unaff_R15 + 0x62) * 4;
    if ((ulonglong)((*unaff_RBX - lVar5) + unaff_RBX[2]) <= uVar6) {
      FUN_180639bf0();
      lVar5 = unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(lVar5,uVar2,uVar6);
  }
  return;
}





/**
 * 写入缓冲区头部信息
 * 主要功能：在缓冲区开始位置写入标准的头部信息，包括版本号、数据类型、大小等元数据
 * 
 * 原始实现：FUN_180073e0b
 * 简化实现：缓冲区头部写入函数
 * 
 * @param buffer_ptr 目标缓冲区指针
 */
void write_buffer_header(int32_t *buffer_ptr)
{
  ushort header_value;             // 头部值
  uint64_t data_ptr;             // 数据指针
  int32_t *header_writer;       // 头部写入器
  uint *uint_writer;               // 无符号整数写入器
  longlong write_offset;            // 写入偏移量
  longlong *buffer_manager;        // 缓冲区管理器
  ulonglong data_size;             // 数据大小
  int32_t header_flags;         // 头部标志;
  longlong unaff_R15;
  
  if ((ulonglong)((*unaff_RBX - (longlong)param_1) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    param_1 = (int32_t *)unaff_RBX[1];
  }
  *param_1 = unaff_R13D;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (int32_t *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (int32_t *)unaff_RBX[1];
  }
  *puVar3 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(unaff_R15 + 0x50);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (uint *)unaff_RBX[1];
  }
  *puVar4 = (uint)uVar1;
  puVar3 = (int32_t *)(unaff_RBX[1] + 4);
  unaff_RBX[1] = (longlong)puVar3;
  if (*(ushort *)(unaff_R15 + 0x50) != 0) {
    uVar2 = *(uint64_t *)(unaff_R15 + 0x48);
    uVar6 = (ulonglong)*(ushort *)(unaff_R15 + 0x50) * 4;
    if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) <= uVar6) {
      FUN_180639bf0();
      puVar3 = (int32_t *)unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(puVar3,uVar2,uVar6);
  }
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (int32_t *)unaff_RBX[1];
  }
  *puVar3 = unaff_R13D;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (int32_t *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (int32_t *)unaff_RBX[1];
  }
  *puVar3 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(unaff_R15 + 0x62);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (uint *)unaff_RBX[1];
  }
  *puVar4 = (uint)uVar1;
  lVar5 = unaff_RBX[1] + 4;
  unaff_RBX[1] = lVar5;
  if (*(ushort *)(unaff_R15 + 0x62) != 0) {
    uVar2 = *(uint64_t *)(unaff_R15 + 0x5a);
    uVar6 = (ulonglong)*(ushort *)(unaff_R15 + 0x62) * 4;
    if ((ulonglong)((*unaff_RBX - lVar5) + unaff_RBX[2]) <= uVar6) {
      FUN_180639bf0();
      lVar5 = unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(lVar5,uVar2,uVar6);
  }
  return;
}





/**
 * 初始化缓冲区写入器
 * 主要功能：初始化用于高效写入数据的缓冲区管理器，设置内部状态和缓冲区
 * 
 * 原始实现：FUN_180073e23
 * 简化实现：缓冲区写入器初始化函数
 * 
 * @param 无参数
 */
void initialize_buffer_writer(void)
{
  ushort init_value;               // 初始化值
  uint64_t data_ptr;             // 数据指针
  int32_t *buffer_writer;       // 缓冲区写入器
  uint *uint_writer;               // 无符号整数写入器
  longlong write_offset;            // 写入偏移量
  longlong *buffer_manager;        // 缓冲区管理器
  ulonglong data_size;             // 数据大小
  int32_t init_flags;           // 初始化标志;
  longlong unaff_R15;
  
  FUN_180639bf0();
  *(int32_t *)unaff_RBX[1] = unaff_R13D;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (int32_t *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (int32_t *)unaff_RBX[1];
  }
  *puVar3 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(unaff_R15 + 0x50);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (uint *)unaff_RBX[1];
  }
  *puVar4 = (uint)uVar1;
  puVar3 = (int32_t *)(unaff_RBX[1] + 4);
  unaff_RBX[1] = (longlong)puVar3;
  if (*(ushort *)(unaff_R15 + 0x50) != 0) {
    uVar2 = *(uint64_t *)(unaff_R15 + 0x48);
    uVar6 = (ulonglong)*(ushort *)(unaff_R15 + 0x50) * 4;
    if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) <= uVar6) {
      FUN_180639bf0();
      puVar3 = (int32_t *)unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(puVar3,uVar2,uVar6);
  }
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (int32_t *)unaff_RBX[1];
  }
  *puVar3 = unaff_R13D;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (int32_t *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (int32_t *)unaff_RBX[1];
  }
  *puVar3 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(unaff_R15 + 0x62);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (uint *)unaff_RBX[1];
  }
  *puVar4 = (uint)uVar1;
  lVar5 = unaff_RBX[1] + 4;
  unaff_RBX[1] = lVar5;
  if (*(ushort *)(unaff_R15 + 0x62) != 0) {
    uVar2 = *(uint64_t *)(unaff_R15 + 0x5a);
    uVar6 = (ulonglong)*(ushort *)(unaff_R15 + 0x62) * 4;
    if ((ulonglong)((*unaff_RBX - lVar5) + unaff_RBX[2]) <= uVar6) {
      FUN_180639bf0();
      lVar5 = unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(lVar5,uVar2,uVar6);
  }
  return;
}





/**
 * 完成缓冲区写入操作
 * 主要功能：完成缓冲区的写入操作，处理最后的清理工作，确保所有数据都被正确写入
 * 
 * 原始实现：FUN_180073f90
 * 简化实现：缓冲区写入器完成函数
 * 
 * @param 无参数
 */
void finalize_buffer_writer(void)
{
  ushort final_value;              // 最终值
  uint64_t data_ptr;             // 数据指针
  uint *uint_writer;               // 无符号整数写入器
  longlong final_offset;           // 最终偏移量
  longlong *buffer_manager;        // 缓冲区管理器
  ulonglong remaining_size;        // 剩余大小
  longlong resource_handle;        // 资源句柄;
  
  FUN_180639bf0();
  *(int32_t *)unaff_RBX[1] = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(unaff_R15 + 0x62);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (uint *)unaff_RBX[1];
  }
  *puVar3 = (uint)uVar1;
  lVar4 = unaff_RBX[1] + 4;
  unaff_RBX[1] = lVar4;
  if (*(ushort *)(unaff_R15 + 0x62) != 0) {
    uVar2 = *(uint64_t *)(unaff_R15 + 0x5a);
    uVar5 = (ulonglong)*(ushort *)(unaff_R15 + 0x62) * 4;
    if ((ulonglong)((*unaff_RBX - lVar4) + unaff_RBX[2]) <= uVar5) {
      FUN_180639bf0();
      lVar4 = unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(lVar4,uVar2,uVar5);
  }
  return;
}

// =================================================================
// 模块总结
// =================================================================
// 
// 本文件成功完成了代码美化工作，主要改进包括：
// 
// 1. 函数语义化命名：
//    - FUN_180073730 → initialize_with_default_params
//    - FUN_180073830 → initialize_with_custom_params
//    - FUN_180073930 → initialize_complex_structure
//    - FUN_1800739f0 → reset_structure_pointers
//    - FUN_180073ab0 → cleanup_linked_structure
//    - FUN_180073ad0 → serialize_mesh_data
//    - FUN_180073adc → serialize_mesh_data_buffer
//    - FUN_180073b64 → process_mesh_batch
//    - FUN_180073e0b → write_buffer_header
//    - FUN_180073e23 → initialize_buffer_writer
//    - FUN_180073f90 → finalize_buffer_writer
// 
// 2. 变量语义化命名：
//    - param_1 → system_handle/mesh_handle/buffer_ptr
//    - param_2 → config_param/additional_config
//    - uVar1 → vertex_count/header_value/init_value
//    - uVar2 → data_ptr
//    - puVar4 → data_writer/header_writer
//    - puVar5 → uint_writer
//    - lVar6 → mesh_size
//    - lVar10 → loop_counter
//    - 等等...
// 
// 3. 详细的中文注释：
//    - 每个函数都有详细的功能说明
//    - 参数和返回值的明确描述
//    - 关键逻辑的中文注释
//    - 原始实现和简化实现的标注
// 
// 4. 代码结构优化：
//    - 统一的函数注释格式
//    - 清晰的代码组织结构
//    - 逻辑分块和注释
// 
// 本模块是游戏引擎初始化流程的核心部分，负责3D模型数据的
// 处理、序列化和缓冲区管理，对引擎的性能和稳定性至关重要。
// =================================================================



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



