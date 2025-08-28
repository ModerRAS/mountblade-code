#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part224.c - 核心引擎模块第224部分
// 
// 本文件包含1个函数，主要功能：
// - 引擎数据结构的高级处理和管理
// - 缓冲区操作和内存管理
// - 资源分配和清理
// - 数据遍历和处理
//
// 状态：已完成美化
// 美化日期：2025-08-28
// 原始函数数量：1个

// 函数: 引擎数据结构高级处理器 (原: FUN_18019aac0)
// 功能: 处理引擎内部数据结构的复杂操作，包括内存管理、数据遍历和资源分配
// 参数:
//   param_1 - 引擎上下文指针
//   param_2 - 数据源指针
//   param_3 - 上下文参数1
//   param_4 - 上下文参数2
void EngineDataStructure_AdvancedProcessor(int64_t *engine_context, int64_t data_source, uint64_t context_param1, uint64_t context_param2)

{
  uint64_t *temp_ptr1;
  uint64_t *temp_ptr2;
  int64_t context_data;
  uint64_t *array_ptr;
  int64_t iteration_data;
  void *resource_ptr;
  void *stack_resource1;
  int64_t stack_data1;
  int stack_count;
  void *stack_resource2;
  int64_t stack_data2;
  int32_t stack_flags1;
  uint64_t stack_data3;
  int32_t stack_flags2;
  
  // 初始化资源管理器
  CoreEngineDataTransformer(&stack_resource1, context_param1, context_param1, context_param2, 0, 0xfffffffffffffffe);
  System_DataHandler(&stack_resource1, &STRING_CONST_180a0b2b4, *(uint64_t *)(data_source + 0x20));
  
  context_data = *engine_context;
  
  // 检查并处理缓冲区数据
  if (0 < stack_count) {
    CoreEngineDataBufferProcessor(context_data + 0x60780, *(int *)(context_data + 0x60790) + stack_count);
    // 执行内存复制操作
    memcpy((uint64_t)*(uint *)(context_data + 0x60790) + *(int64_t *)(context_data + 0x60788), stack_data1,
           (int64_t)(stack_count + 1));
  }
  
  // 初始化数组指针
  temp_ptr1 = (uint64_t *)engine_context[1];
  temp_ptr2 = (uint64_t *)temp_ptr1[1];
  array_ptr = (uint64_t *)*temp_ptr1;
  
  // 清理和初始化数组元素
  if (array_ptr != temp_ptr2) {
    do {
      *array_ptr = &RESOURCE_HANDLE_180a3c3e0;
      if (array_ptr[1] != 0) {
        // 释放现有资源
        CoreEngineMemoryPoolCleaner();
      }
      array_ptr[1] = 0;
      *(int32_t *)(array_ptr + 3) = 0;
      *array_ptr = &STRING_CONST_18098bcb0;
      array_ptr = array_ptr + 5;
    } while (array_ptr != temp_ptr2);
    array_ptr = (uint64_t *)*temp_ptr1;
  }
  
  temp_ptr1[1] = array_ptr;
  
  // 遍历数据源并处理每个元素
  for (iteration_data = *(int64_t *)(data_source + 8); iteration_data != data_source; iteration_data = func_0x00018066bd70(iteration_data)) {
    int64_t array_base = engine_context[1];
    
    // 为当前元素创建资源
    CoreEngineDataTransformer(&stack_resource2, iteration_data + 0x20);
    stack_flags2 = *(int32_t *)(iteration_data + 0x40);
    
    temp_ptr1 = *(uint64_t **)(array_base + 8);
    
    // 检查数组空间并分配新元素
    if (temp_ptr1 < *(uint64_t **)(array_base + 0x10)) {
      // 直接分配空间
      *(uint64_t **)(array_base + 8) = temp_ptr1 + 5;
      *temp_ptr1 = &STRING_CONST_18098bcb0;
      temp_ptr1[1] = 0;
      *(int32_t *)(temp_ptr1 + 2) = 0;
      *temp_ptr1 = &RESOURCE_HANDLE_180a3c3e0;
      temp_ptr1[3] = 0;
      temp_ptr1[1] = 0;
      *(int32_t *)(temp_ptr1 + 2) = 0;
      *(int32_t *)(temp_ptr1 + 2) = stack_flags1;
      temp_ptr1[1] = stack_data2;
      *(int32_t *)((int64_t)temp_ptr1 + 0x1c) = stack_data3._4_4_;
      *(int32_t *)(temp_ptr1 + 3) = (int32_t)stack_data3;
      stack_flags1 = 0;
      stack_data2 = 0;
      stack_data3 = 0;
      *(int32_t *)(temp_ptr1 + 4) = stack_flags2;
    }
    else {
      // 扩展数组空间
      FUN_1800584e0(array_base, &stack_resource2);
    }
    
    // 清理临时资源
    stack_resource2 = &RESOURCE_HANDLE_180a3c3e0;
    if (stack_data2 != 0) {
      // 释放资源
      CoreEngineMemoryPoolCleaner();
    }
    stack_data2 = 0;
    stack_data3 = stack_data3 & 0xffffffff00000000;
    stack_resource2 = &STRING_CONST_18098bcb0;
  }
  
  // 处理最终数据
  FUN_1801bb3a0(*(uint64_t *)engine_context[1], ((uint64_t *)engine_context[1])[1], 0);
  context_data = ((int64_t *)engine_context[1])[1];
  
  // 遍历处理后的数据并更新引擎状态
  for (iteration_data = *(int64_t *)engine_context[1]; iteration_data != context_data; iteration_data = iteration_data + 0x28) {
    resource_ptr = &STRING_CONST_18098bc73;
    if (*(void **)(iteration_data + 8) != (void *)0x0) {
      resource_ptr = *(void **)(iteration_data + 8);
    }
    System_DataHandler(*engine_context + 0x60780, &STRING_CONST_180a0b2a8, resource_ptr, *(int32_t *)(iteration_data + 0x20));
  }
  
  // 最终清理和同步
  System_DataHandler(*engine_context + 0x60780, &STRING_CONST_1809fcc18);
  stack_resource1 = &RESOURCE_HANDLE_180a3c3e0;
  
  if (stack_data1 == 0) {
    return;
  }
  
  // 清理剩余资源
  CoreEngineMemoryPoolCleaner();
}

// 全局常量定义
static uint64_t *STRING_CONST_18098bcb0 = (uint64_t *)0x18098bcb0;  // 字符串常量
static uint64_t *STRING_CONST_180a0b2a8 = (uint64_t *)0x180a0b2a8;  // 字符串常量2
static uint64_t *STRING_CONST_180a0b2b4 = (uint64_t *)0x180a0b2b4;  // 字符串常量3
static uint64_t *STRING_CONST_18098bc73 = (uint64_t *)0x18098bc73;  // 默认字符串
static uint64_t *STRING_CONST_1809fcc18 = (uint64_t *)0x1809fcc18;  // 终止字符串
static uint64_t *RESOURCE_HANDLE_180a3c3e0 = (uint64_t *)0x180a3c3e0;  // 资源句柄

// 注意：此函数处理复杂的引擎内部数据结构操作
// 包含内存管理、资源分配、数据遍历和清理等核心功能
// 函数名和变量名已根据功能进行语义化转译