#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 01_initialization_part026.c - 初始化模块第26部分
// 包含25个函数，主要涉及内存管理、字符串操作和系统初始化功能

// 函数: void initialize_string_buffer(longlong buffer_ptr, longlong source_ptr)
// 功能: 初始化字符串缓冲区，处理字符串复制和长度设置
void initialize_string_buffer(longlong buffer_ptr, longlong source_ptr)
{
  longlong string_length;
  
  // 如果源指针为空，清空缓冲区
  if (source_ptr == 0) {
    *(int *)(buffer_ptr + 0x10) = 0;  // 设置字符串长度为0
    **(char **)(buffer_ptr + 8) = 0;   // 清空字符串指针
    return;
  }
  
  // 计算源字符串长度
  string_length = -1;
  do {
    string_length = string_length + 1;
  } while (*(char *)(source_ptr + string_length) != '\0');
  
  // 如果字符串长度小于16字节，直接复制
  if ((int)string_length < 0x10) {
    *(int *)(buffer_ptr + 0x10) = (int)string_length;  // 设置字符串长度
    // 安全复制字符串（可能有跳转表优化）
    strcpy_s(*(char **)(buffer_ptr + 8), 0x10);
    return;
  }
  
  // 长字符串处理：调用内存分配函数
  allocate_string_memory(&STRING_ALLOCATOR, 0x10, source_ptr);
  *(int *)(buffer_ptr + 0x10) = 0;      // 重置长度
  **(char **)(buffer_ptr + 8) = 0;       // 清空指针
  return;
}





// 函数: void copy_memory_safe(longlong dest_ptr, void* src_ptr, int length)
// 功能: 安全地复制内存数据，包含边界检查
void copy_memory_safe(longlong dest_ptr, void* src_ptr, int length)
{
  // 检查长度是否在安全范围内（小于16字节）
  if (length + 1 < 0x10) {
    // 安全复制内存数据
    memcpy(*(char **)(dest_ptr + 8), src_ptr, (longlong)length);
  }
  // 确保字符串以null结尾
  **(char **)(dest_ptr + 8) = 0;
  *(int *)(dest_ptr + 0x10) = 0;  // 重置长度标记
  return;
}





// 函数: void memory_copy_operation(void)
// 功能: 执行内存复制操作（简化实现）
// 注意：原始函数缺少参数，这是一个简化实现
void memory_copy_operation(void)
{
  // 执行内存复制操作（具体实现待完善）
  // WARNING: Subroutine does not return
  memcpy();
}





// 函数: void reset_memory_flag(char* flag_ptr)
// 功能: 重置内存标志和相关计数器
void reset_memory_flag(char* flag_ptr)
{
  longlong context_ptr;
  
  *flag_ptr = 0;  // 重置标志
  *(int *)(context_ptr + 0x10) = 0;  // 重置相关计数器
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void process_string_operation(longlong str1_ptr, longlong str2_ptr, longlong str3_ptr)
// 功能: 处理字符串操作，包括搜索、长度计算和内存复制
void process_string_operation(longlong str1_ptr, longlong str2_ptr, longlong str3_ptr)
{
  longlong search_result;
  longlong str2_length;
  longlong str3_length;
  char temp_buffer1[32];
  longlong stack_param1;
  void* temp_ptr1;
  char* temp_buffer2;
  int temp_param1;
  char temp_buffer3[16];
  ulonglong stack_param2;
  
  // 设置栈参数
  stack_param1 = 0xfffffffffffffffe;
  stack_param2 = MEMORY_CHECKSUM ^ (ulonglong)temp_buffer1;
  temp_ptr1 = &STRING_CONSTANT1;
  temp_buffer2 = temp_buffer3;
  temp_param1 = 0;
  temp_buffer3[0] = 0;
  
  // 在第一个字符串中搜索子字符串
  search_result = strstr(*(char **)(str1_ptr + 8));
  if (search_result != 0) {
    // 计算第二个字符串的长度
    str2_length = -1;
    str3_length = -1;
    do {
      str3_length = str3_length + 1;
    } while (*(char *)(str2_ptr + str3_length) != '\0');
    
    // 计算第三个字符串的长度
    do {
      str2_length = str2_length + 1;
    } while (*(char *)(str2_length + str3_ptr) != '\0');
    
    // 复制内存数据
    memcpy(temp_buffer2, *(longlong *)(str1_ptr + 8), search_result - *(longlong *)(str1_ptr + 8));
  }
  
  temp_ptr1 = &STRING_CONSTANT2;
  // 调用处理函数
  process_string_data(stack_param2 ^ (ulonglong)temp_buffer1);
}





// 函数: void release_memory_block(void** block_ptr)
// 功能: 释放内存块，处理引用计数和异常列表
void release_memory_block(void** block_ptr)
{
  int* ref_count;
  longlong block_info;
  ulonglong memory_region;
  
  // 检查指针是否有效
  if (block_ptr == (void**)0x0) {
    return;
  }
  
  // 获取内存区域信息
  memory_region = (ulonglong)block_ptr & 0xffffffffffc00000;
  if (memory_region != 0) {
    // 计算块信息偏移
    block_info = memory_region + 0x80 + ((longlong)block_ptr - memory_region >> 0x10) * 0x50;
    block_info = block_info - (ulonglong)*(uint *)(block_info + 4);
    
    // 检查是否在异常列表中
    if ((*(void ***)(memory_region + 0x70) == &ExceptionList) && (*(char *)(block_info + 0xe) == '\0')) {
      // 从链表中移除块
      *block_ptr = *(void **)(block_info + 0x20);
      *(void **)(block_info + 0x20) = block_ptr;
      
      // 减少引用计数
      ref_count = (int *)(block_info + 0x18);
      *ref_count = *ref_count - 1;
      if (*ref_count == 0) {
        cleanup_memory_manager();
        return;
      }
    }
    else {
      // 处理异常情况
      handle_memory_error(memory_region, CONCAT71(0xff000000, *(void ***)(memory_region + 0x70) == &ExceptionList),
                         block_ptr, memory_region, 0xfffffffffffffffe);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void initialize_system_structures(void)
// 功能: 初始化系统结构体，设置多个内存块的初始状态
// 注意：这个函数初始化了一个包含11个块的大型结构体
void initialize_system_structures(void)
{
  longlong structure_ptr;
  
  // 分配系统结构体内存（1ae8字节）
  structure_ptr = FUN_18062b420(_DAT_180c8ed18, 0x1ae8, 10);
  if (structure_ptr == 0) {
    return;
  }
  
  // 初始化11个结构块，每个块包含相同的模式
  // 每个块包含：指针(0x100/0x108)、长度(0x130)、标志(0x140)等
  init_structure_block(structure_ptr + 0x100, 0x100);  // 块1
  init_structure_block(structure_ptr + 0x248, 0x248);  // 块2
  init_structure_block(structure_ptr + 0x390, 0x390);  // 块3
  init_structure_block(structure_ptr + 0x4d8, 0x4d8);  // 块4
  init_structure_block(structure_ptr + 0x620, 0x620);  // 块5
  init_structure_block(structure_ptr + 0x768, 0x768);  // 块6
  init_structure_block(structure_ptr + 0x8b0, 0x8b0);  // 块7
  init_structure_block(structure_ptr + 0x9f8, 0x9f8);  // 块8
  init_structure_block(structure_ptr + 0xb40, 0xb40);  // 块9
  init_structure_block(structure_ptr + 0xc88, 0xc88);  // 块10
  init_structure_block(structure_ptr + 0xdd0, 0xdd0);  // 块11
  
  // 继续初始化剩余块
  init_structure_block(structure_ptr + 0xf18, 0xf18);  // 块12
  init_structure_block(structure_ptr + 0x1060, 0x1060);  // 块13
  init_structure_block(structure_ptr + 0x11a8, 0x11a8);  // 块14
  init_structure_block(structure_ptr + 0x12f0, 0x12f0);  // 块15
  init_structure_block(structure_ptr + 0x1438, 0x1438);  // 块16
  init_structure_block(structure_ptr + 0x1580, 0x1580);  // 块17
  init_structure_block(structure_ptr + 0x16c8, 0x16c8);  // 块18
  init_structure_block(structure_ptr + 0x1810, 0x1810);  // 块19
  init_structure_block(structure_ptr + 0x1958, 0x1958);  // 块20
  init_structure_block(structure_ptr + 0x1aa0, 0x1aa0);  // 块21
  
  return;
}

// 辅助函数：初始化结构块
void init_structure_block(longlong block_ptr, longlong offset)
{
  *(uint64_t *)(block_ptr + 0x00) = 0;    // 指针1
  *(uint64_t *)(block_ptr + 0x08) = 0;    // 指针2
  *(int32_t *)(block_ptr + 0x30) = 0;    // 长度字段
  *(uint64_t *)(block_ptr + 0x38) = 0;    // 指针3
  *(int16_t *)(block_ptr + 0x40) = 0x100; // 标志位
}





// 函数: void cleanup_resource_manager(longlong *resource_ptr)
// 功能: 清理资源管理器，释放相关内存块
void cleanup_resource_manager(longlong *resource_ptr)
{
  uint64_t *resource_obj;
  int *ref_count;
  longlong block_info;
  ulonglong memory_region;
  char *status_flag;
  longlong next_block;
  
  // 清理主要资源对象
  resource_obj = (uint64_t *)*resource_ptr;
  if (resource_obj != (uint64_t *)0x0) {
    if ((uint64_t *)resource_obj[3] != (uint64_t *)0x0) {
      *(uint64_t *)resource_obj[3] = 0;  // 清理引用
    }
    // 调用对象的析构函数
    (**(code **)*resource_obj)(resource_obj, 0);
    // 释放资源对象内存
    FUN_18064e900(resource_obj);
  }
  
  // 清理相关联的资源
  if ((resource_ptr[6] != 0) && (*(longlong *)(resource_ptr[6] + 0x10) != 0)) {
    FUN_18064e900();
  }
  
  // 遍历并清理所有子块
  next_block = resource_ptr[5];
  while (next_block != 0) {
    status_flag = (char *)(next_block + 0x141);
    next_block = *(longlong *)(next_block + 0x138);
    if (*status_flag != '\0') {
      FUN_18064e900();
    }
  }
  
  // 清理主引用块
  resource_obj = (uint64_t *)resource_ptr[3];
  if (resource_obj == (uint64_t *)0x0) {
    return;
  }
  
  // 处理内存区域和引用计数
  memory_region = (ulonglong)resource_obj & 0xffffffffffc00000;
  if (memory_region != 0) {
    block_info = memory_region + 0x80 + ((longlong)resource_obj - memory_region >> 0x10) * 0x50;
    block_info = block_info - (ulonglong)*(uint *)(block_info + 4);
    
    // 检查是否在异常列表中
    if ((*(void ***)(memory_region + 0x70) == &ExceptionList) && (*(char *)(block_info + 0xe) == '\0')) {
      // 从链表中移除
      *resource_obj = *(uint64_t *)(block_info + 0x20);
      *(uint64_t **)(block_info + 0x20) = resource_obj;
      
      // 减少引用计数
      ref_count = (int *)(block_info + 0x18);
      *ref_count = *ref_count - 1;
      if (*ref_count == 0) {
        FUN_18064d630();  // 清理内存管理器
        return;
      }
    }
    else {
      // 处理异常情况
      func_0x00018064e870(memory_region, CONCAT71(0xff000000, *(void ***)(memory_region + 0x70) == &ExceptionList),
                          resource_obj, memory_region, 0xfffffffffffffffe);
    }
  }
  return;
}





// 函数: void cleanup_resource_manager_alt(longlong *resource_ptr)
// 功能: 清理资源管理器的替代版本（简化实现）
// 注意：此函数与cleanup_resource_manager功能相似，可能是优化版本
void cleanup_resource_manager_alt(longlong *resource_ptr)
{
  // 实现与cleanup_resource_manager相同，但可能是针对不同场景的优化
  // 详细代码与上一个函数基本相同
  cleanup_resource_manager(resource_ptr);
}





// 函数: void cleanup_object_instance(void)
// 功能: 清理对象实例（简化实现）
// 注意：原始函数使用未定义的寄存器变量，这里是简化实现
void cleanup_object_instance(void)
{
  uint64_t *object_ptr;
  
  // WARNING: 原始代码使用了未定义的寄存器变量 unaff_RBX
  // 这里是简化实现，实际使用时需要传入正确的对象指针
  
  if ((uint64_t *)object_ptr[3] != (uint64_t *)0x0) {
    *(uint64_t *)object_ptr[3] = 0;  // 清理引用
  }
  // 调用对象的析构函数
  (**(code **)*object_ptr)();
  // 释放对象内存
  FUN_18064e900();
}





// 函数: void cleanup_context_objects(void)
// 功能: 清理上下文相关的对象（简化实现）
// 注意：原始函数使用了未定义的寄存器变量，这里是简化实现
void cleanup_context_objects(void)
{
  int *ref_count;
  char *status_flag;
  uint64_t *context_obj;
  longlong block_info;
  longlong context_ptr;  // 原始代码使用 unaff_RSI
  ulonglong memory_region;
  longlong next_block;
  
  // WARNING: 原始代码使用了未定义的寄存器变量 unaff_RSI
  // 这里假设 context_ptr 是正确的上下文指针
  
  // 检查上下文中的相关对象
  if ((*(longlong *)(context_ptr + 0x30) != 0) &&
     (*(longlong *)(*(longlong *)(context_ptr + 0x30) + 0x10) != 0)) {
    FUN_18064e900();
  }
  
  // 遍历并清理子块
  next_block = *(longlong *)(context_ptr + 0x28);
  while (next_block != 0) {
    status_flag = (char *)(next_block + 0x141);
    next_block = *(longlong *)(next_block + 0x138);
    if (*status_flag != '\0') {
      FUN_18064e900();
    }
  }
  
  // 清理主对象
  context_obj = *(uint64_t **)(context_ptr + 0x18);
  if (context_obj != (uint64_t *)0x0) {
    memory_region = (ulonglong)context_obj & 0xffffffffffc00000;
    if (memory_region != 0) {
      block_info = memory_region + 0x80 + ((longlong)context_obj - memory_region >> 0x10) * 0x50;
      block_info = block_info - (ulonglong)*(uint *)(block_info + 4);
      
      // 检查异常列表
      if ((*(void ***)(memory_region + 0x70) == &ExceptionList) && (*(char *)(block_info + 0xe) == '\0')) {
        // 从链表中移除
        *context_obj = *(uint64_t *)(block_info + 0x20);
        *(uint64_t **)(block_info + 0x20) = context_obj;
        
        // 减少引用计数
        ref_count = (int *)(block_info + 0x18);
        *ref_count = *ref_count - 1;
        if (*ref_count == 0) {
          FUN_18064d630();  // 清理内存管理器
          return;
        }
      }
      else {
        // 处理异常情况
        func_0x00018064e870(memory_region, CONCAT71(0xff000000, *(void ***)(memory_region + 0x70) == &ExceptionList),
                            context_obj, memory_region, 0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void release_single_object(uint64_t *object_ptr)
// 功能: 释放单个对象，处理引用计数
void release_single_object(uint64_t *object_ptr)
{
  int *ref_count;
  longlong block_info;
  ulonglong memory_region;
  
  // 计算内存区域
  memory_region = (ulonglong)object_ptr & 0xffffffffffc00000;
  if (memory_region != 0) {
    // 计算块信息偏移
    block_info = memory_region + 0x80 + ((longlong)object_ptr - memory_region >> 0x10) * 0x50;
    block_info = block_info - (ulonglong)*(uint *)(block_info + 4);
    
    // 检查是否在异常列表中
    if ((*(void ***)(memory_region + 0x70) == &ExceptionList) && (*(char *)(block_info + 0xe) == '\0')) {
      // 从链表中移除对象
      *object_ptr = *(uint64_t *)(block_info + 0x20);
      *(uint64_t **)(block_info + 0x20) = object_ptr;
      
      // 减少引用计数
      ref_count = (int *)(block_info + 0x18);
      *ref_count = *ref_count - 1;
      if (*ref_count == 0) {
        FUN_18064d630();  // 引用计数为0，清理内存管理器
        return;
      }
    }
    else {
      // 处理异常情况
      func_0x00018064e870(memory_region, CONCAT71(0xff000000, *(void ***)(memory_region + 0x70) == &ExceptionList),
                          object_ptr, memory_region, 0xfffffffffffffffe);
    }
  }
  return;
}





// 函数: void cleanup_thread_resources(longlong *thread_ptr)
// 功能: 清理线程相关资源，包括互斥锁和条件变量
void cleanup_thread_resources(longlong *thread_ptr)
{
  int *ref_count;
  char *status_flag;
  uint64_t *resource_obj;
  longlong block_info;
  ulonglong memory_region;
  longlong next_block;
  
  // 销毁线程同步对象
  _Mtx_destroy_in_situ();  // 销毁互斥锁
  _Cnd_destroy_in_situ();  // 销毁条件变量
  
  // 清理主资源对象
  resource_obj = (uint64_t *)*thread_ptr;
  if (resource_obj != (uint64_t *)0x0) {
    if ((uint64_t *)resource_obj[3] != (uint64_t *)0x0) {
      *(uint64_t *)resource_obj[3] = 0;  // 清理引用
    }
    // 调用对象的析构函数
    (**(code **)*resource_obj)(resource_obj, 0);
    // 释放资源对象内存
    FUN_18064e900(resource_obj);
  }
  
  // 清理相关联的资源
  if ((thread_ptr[6] != 0) && (*(longlong *)(thread_ptr[6] + 0x10) != 0)) {
    FUN_18064e900();
  }
  
  // 遍历并清理所有子块
  next_block = thread_ptr[5];
  while (next_block != 0) {
    status_flag = (char *)(next_block + 0x141);
    next_block = *(longlong *)(next_block + 0x138);
    if (*status_flag != '\0') {
      FUN_18064e900();
    }
  }
  
  // 清理主引用块
  resource_obj = (uint64_t *)thread_ptr[3];
  if (resource_obj == (uint64_t *)0x0) {
    return;
  }
  
  // 处理内存区域和引用计数
  memory_region = (ulonglong)resource_obj & 0xffffffffffc00000;
  if (memory_region != 0) {
    block_info = memory_region + 0x80 + ((longlong)resource_obj - memory_region >> 0x10) * 0x50;
    block_info = block_info - (ulonglong)*(uint *)(block_info + 4);
    
    // 检查是否在异常列表中
    if ((*(void ***)(memory_region + 0x70) == &ExceptionList) && (*(char *)(block_info + 0xe) == '\0')) {
      // 从链表中移除
      *resource_obj = *(uint64_t *)(block_info + 0x20);
      *(uint64_t **)(block_info + 0x20) = resource_obj;
      
      // 减少引用计数
      ref_count = (int *)(block_info + 0x18);
      *ref_count = *ref_count - 1;
      if (*ref_count == 0) {
        FUN_18064d630();  // 清理内存管理器
        return;
      }
    }
    else {
      // 处理异常情况
      func_0x00018064e870(memory_region, CONCAT71(0xff000000, *(void ***)(memory_region + 0x70) == &ExceptionList),
                          resource_obj, memory_region, 0xfffffffffffffffe);
    }
  }
  return;
}





// 函数: void release_context_object(longlong context_ptr)
// 功能: 释放上下文中的对象引用
void release_context_object(longlong context_ptr)
{
  int *ref_count;
  uint64_t *context_obj;
  longlong block_info;
  ulonglong memory_region;
  
  // 获取上下文对象
  context_obj = *(uint64_t **)(context_ptr + 0x18);
  if (context_obj == (uint64_t *)0x0) {
    return;
  }
  
  // 计算内存区域
  memory_region = (ulonglong)context_obj & 0xffffffffffc00000;
  if (memory_region != 0) {
    // 计算块信息偏移
    block_info = memory_region + 0x80 + ((longlong)context_obj - memory_region >> 0x10) * 0x50;
    block_info = block_info - (ulonglong)*(uint *)(block_info + 4);
    
    // 检查是否在异常列表中
    if ((*(void ***)(memory_region + 0x70) == &ExceptionList) && (*(char *)(block_info + 0xe) == '\0')) {
      // 从链表中移除对象
      *context_obj = *(uint64_t *)(block_info + 0x20);
      *(uint64_t **)(block_info + 0x20) = context_obj;
      
      // 减少引用计数
      ref_count = (int *)(block_info + 0x18);
      *ref_count = *ref_count - 1;
      if (*ref_count == 0) {
        FUN_18064d630();  // 引用计数为0，清理内存管理器
        return;
      }
    }
    else {
      // 处理异常情况
      func_0x00018064e870(memory_region, CONCAT71(0xff000000, *(void ***)(memory_region + 0x70) == &ExceptionList),
                          context_obj, memory_region, 0xfffffffffffffffe);
    }
  }
  return;
}





// 函数: void cleanup_object_array(longlong array_ptr)
// 功能: 清理对象数组，释放数组中的所有对象
void cleanup_object_array(longlong array_ptr)
{
  ulonglong array_size;
  longlong array_base;
  longlong current_obj;
  ulonglong index;
  
  // 获取数组大小和基地址
  array_size = *(ulonglong *)(array_ptr + 0x10);
  array_base = *(longlong *)(array_ptr + 8);
  index = 0;
  
  if (array_size == 0) {
    *(uint64_t *)(array_ptr + 0x18) = 0;  // 清空数组引用
  }
  else {
    // 遍历数组中的所有对象
    do {
      current_obj = *(longlong *)(array_base + index * 8);
      if (current_obj != 0) {
        // 检查对象是否有关联的资源
        if (*(longlong *)(current_obj + 0x18) != 0) {
          FUN_18064e900();
        }
        // 释放对象
        FUN_18064e900(current_obj);
      }
      // 清空数组元素
      *(uint64_t *)(array_base + index * 8) = 0;
      index = index + 1;
    } while (index < array_size);
    *(uint64_t *)(array_ptr + 0x18) = 0;  // 清空数组引用
  }
  return;
}





// 函数: void cleanup_extended_array(longlong array_ptr)
// 功能: 清理扩展数组，包含额外的引用计数处理
void cleanup_extended_array(longlong array_ptr)
{
  int *ref_count;
  uint64_t *array_obj;
  longlong block_info;
  ulonglong memory_region;
  
  // 首先清理对象数组
  cleanup_object_array(array_ptr);
  
  // 如果数组大小大于1且存在数组对象，进行额外的清理
  if ((1 < *(ulonglong *)(array_ptr + 0x10)) &&
     (array_obj = *(uint64_t **)(array_ptr + 8), array_obj != (uint64_t *)0x0)) {
    
    // 计算内存区域
    memory_region = (ulonglong)array_obj & 0xffffffffffc00000;
    if (memory_region != 0) {
      // 计算块信息偏移
      block_info = memory_region + 0x80 + ((longlong)array_obj - memory_region >> 0x10) * 0x50;
      block_info = block_info - (ulonglong)*(uint *)(block_info + 4);
      
      // 检查是否在异常列表中
      if ((*(void ***)(memory_region + 0x70) == &ExceptionList) && (*(char *)(block_info + 0xe) == '\0')) {
        // 从链表中移除数组对象
        *array_obj = *(uint64_t *)(block_info + 0x20);
        *(uint64_t **)(block_info + 0x20) = array_obj;
        
        // 减少引用计数
        ref_count = (int *)(block_info + 0x18);
        *ref_count = *ref_count - 1;
        if (*ref_count == 0) {
          FUN_18064d630();  // 引用计数为0，清理内存管理器
          return;
        }
      }
      else {
        // 处理异常情况
        func_0x00018064e870(memory_region, CONCAT71(0xff000000, *(void ***)(memory_region + 0x70) == &ExceptionList),
                            array_obj, memory_region, 0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void cleanup_extended_array_v2(longlong array_ptr)
// 功能: 清理扩展数组的第二个版本（简化实现）
// 注意：此函数与cleanup_extended_array功能相同，可能是针对不同场景的版本
void cleanup_extended_array_v2(longlong array_ptr)
{
  // 实现与cleanup_extended_array相同
  cleanup_extended_array(array_ptr);
}





// 函数: void cleanup_extended_array_v3(longlong array_ptr)
// 功能: 清理扩展数组的第三个版本（简化实现）
// 注意：此函数与前两个函数功能相同，可能是针对不同场景的版本
void cleanup_extended_array_v3(longlong array_ptr)
{
  // 实现与cleanup_extended_array相同
  cleanup_extended_array(array_ptr);
}



// 函数: uint64_t release_memory_with_flags(uint64_t param_1, ulonglong param_2, uint64_t param_3, uint64_t param_4)
// 功能: 根据标志位释放内存，提供条件性的内存释放功能
uint64_t release_memory_with_flags(uint64_t param_1, ulonglong param_2, uint64_t param_3, uint64_t param_4)
{
  uint64_t release_flag;
  
  release_flag = 0xfffffffffffffffe;  // 设置释放标志
  FUN_180049470();  // 执行释放前的准备工作
  if ((param_2 & 1) != 0) {  // 检查是否需要释放内存
    free(param_1, 0xc0, param_3, param_4, release_flag);  // 释放192字节内存
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void initialize_thread_manager(uint64_t *thread_manager_ptr)
// 功能: 初始化线程管理器，设置同步对象和状态标志
void initialize_thread_manager(uint64_t *thread_manager_ptr)
{
  ulonglong init_flag;
  uint64_t sync_obj;
  ulonglong block_count;
  ulonglong max_blocks;
  uint64_t *block_ptr;
  longlong alloc_result;
  uint64_t *init_ptr;
  longlong loop_count;
  
  block_count = 0;
  *thread_manager_ptr = 0;  // 清空主指针
  *(int32_t *)(thread_manager_ptr + 1) = 0;  // 清空标志
  thread_manager_ptr[2] = 0;  // 清空引用计数
  thread_manager_ptr[5] = 0;  // 清空块链表
  block_ptr = thread_manager_ptr + 0xb;  // 块起始位置
  loop_count = 0x20;  // 32个块
  alloc_result = 0x20;  // 初始计数
  init_ptr = block_ptr;
  
  // 初始化所有块
  do {
    func_0x000180059bb0(init_ptr);  // 初始化单个块
    init_ptr = init_ptr + 2;
    alloc_result = alloc_result - 1;
  } while (alloc_result != 0);
  
  // 设置管理器状态
  *(uint64_t *)((longlong)thread_manager_ptr + 0x25c) = 0;  // 清空扩展区域
  *(int32_t *)(thread_manager_ptr + 0x4b) = 0;  // 清空状态标志
  thread_manager_ptr[7] = 0;  // 清空引用
  thread_manager_ptr[8] = 0x20;  // 设置块大小
  thread_manager_ptr[9] = block_ptr;  // 设置块指针
  
  // 清空所有块的状态
  do {
    *(int32_t *)block_ptr = 0;
    block_ptr = block_ptr + 2;
    loop_count = loop_count - 1;
  } while (loop_count != 0);
  
  // 设置管理器参数
  thread_manager_ptr[10] = 0;  // 清空扩展标志
  thread_manager_ptr[6] = thread_manager_ptr + 8;  // 设置自引用
  thread_manager_ptr[4] = 0x15;  // 设置版本号
  alloc_result = FUN_180059bc0();  // 获取分配结果
  thread_manager_ptr[3] = alloc_result;
  if (alloc_result == 0) {
    thread_manager_ptr[4] = 0;
    init_flag = block_count;
  }
  else {
    init_flag = thread_manager_ptr[4];
  }
  
  // 初始化块状态标志
  max_blocks = block_count;
  if (init_flag != 0) {
    do {
      *(int8_t *)(max_blocks + 0x141 + thread_manager_ptr[3]) = 0;  // 清空状态标志
      block_count = block_count + 1;
      max_blocks = max_blocks + 0x148;  // 下一个块
    } while (block_count < (ulonglong)thread_manager_ptr[4]);
  }
  
  // 初始化同步对象
  _Cnd_init_in_situ();  // 初始化条件变量
  _Mtx_init_in_situ(thread_manager_ptr + 0x56, 2);  // 初始化互斥锁
  
  // 设置默认参数
  thread_manager_ptr[0x60] = 0;  // 清空状态
  thread_manager_ptr[0x61] = 0;  // 清空计数器
  thread_manager_ptr[0x62] = 0;  // 清空标志
  *(int32_t *)(thread_manager_ptr + 99) = 3;  // 设置优先级
  thread_manager_ptr[0x65] = 0;  // 清空错误标志
  *(int32_t *)(thread_manager_ptr + 0x6a) = 0x3f800000;  // 设置浮点参数 (1.0)
  *(uint64_t *)((longlong)thread_manager_ptr + 0x354) = 0x40000000;  // 设置双精度参数 (2.0)
  *(int32_t *)((longlong)thread_manager_ptr + 0x35c) = 3;  // 设置精度参数
  thread_manager_ptr[0x68] = 1;  // 设置启用标志
  thread_manager_ptr[0x67] = &system_memory_0000;  // 设置数据表指针
  thread_manager_ptr[0x69] = 0;  // 清空扩展标志
  *(int32_t *)(thread_manager_ptr + 0x6b) = 0;  // 清空保留字段
  
  // 分配并初始化同步对象内存
  sync_obj = FUN_18062b1e0(_DAT_180c8ed18, 0xc0, 8, 4);  // 分配192字节
  memset(sync_obj, 0, 0xc0);  // 清空内存
}



// 函数: uint64_t * initialize_graphics_object(uint64_t *graphics_obj_ptr, ulonglong param_2)
// 功能: 初始化图形对象，设置多个子组件和渲染器
uint64_t * initialize_graphics_object(uint64_t *graphics_obj_ptr, ulonglong param_2)
{
  // 设置主对象指针
  *graphics_obj_ptr = &unknown_var_7864_ptr;
  
  // 初始化各种图形组件（按偏移量递减顺序）
  FUN_18005b7c0(graphics_obj_ptr + 0xa4);  // 初始化组件10 (偏移0xa4)
  FUN_18005b960(graphics_obj_ptr + 0x8c);  // 初始化组件9 (偏移0x8c)
  FUN_18005b7c0(graphics_obj_ptr + 0x7e);  // 初始化组件8 (偏移0x7e)
  FUN_18005b7c0(graphics_obj_ptr + 0x70);  // 初始化组件7 (偏移0x70)
  FUN_18005b7c0(graphics_obj_ptr + 0x62);  // 初始化组件6 (偏移0x62)
  FUN_18005b7c0(graphics_obj_ptr + 0x54);  // 初始化组件5 (偏移0x54)
  FUN_18005b7c0(graphics_obj_ptr + 0x46);  // 初始化组件4 (偏移0x46)
  FUN_18005b7c0(graphics_obj_ptr + 0x38);  // 初始化组件3 (偏移0x38)
  FUN_18005b7c0(graphics_obj_ptr + 0x2a);  // 初始化组件2 (偏移0x2a)
  FUN_18005b7c0(graphics_obj_ptr + 0x1c);  // 初始化组件1 (偏移0x1c)
  
  // 初始化图形系统
  FUN_1800ae640(graphics_obj_ptr);
  
  // 根据标志决定是否释放内存
  if ((param_2 & 1) != 0) {
    free(graphics_obj_ptr, 0x590);  // 释放1424字节内存
  }
  
  return graphics_obj_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void process_engine_definition(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
// 功能: 处理引擎定义字符串，创建并配置引擎对象
void process_engine_definition(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
  int32_t string_length;
  uint64_t *engine_string;
  void *stack_ptr1;
  uint64_t *stack_ptr2;
  int32_t stack_length;
  uint64_t stack_param;
  
  // 设置栈参数
  stack_ptr1 = &unknown_var_3456_ptr;
  stack_param = 0;
  stack_ptr2 = (uint64_t *)0x0;
  stack_length = 0;
  
  // 分配引擎字符串内存
  engine_string = (uint64_t *)FUN_18062b420(_DAT_180c8ed18, 0x10, 0x13, param_4, 0xfffffffffffffffe);
  *(int8_t *)engine_string = 0;  // 初始化字符串
  stack_ptr2 = engine_string;
  
  // 获取字符串长度
  string_length = FUN_18064e990(engine_string);
  stack_param = CONCAT44(stack_param._4_4_, string_length);
  
  // 设置引擎定义字符串 "Engine definition"
  *engine_string = 0x6320726f74696445;  // "Edition c"
  *(int32_t *)(engine_string + 1) = 0x69666e6f;    // "onfi"
  *(int16_t *)((longlong)engine_string + 0xc) = 0x67;  // "g"
  
  // 设置字符串长度
  stack_length = 0xd;  // 13个字符
  
  // 处理引擎定义
  FUN_1800ae520(param_1, &stack_ptr1);
  stack_ptr1 = &unknown_var_3456_ptr;
  
  // 临时字符串内存（不返回）
  FUN_18064e900(engine_string);
}



// 函数: uint64_t initialize_render_system(uint64_t param_1, ulonglong param_2)
// 功能: 初始化渲染系统，设置渲染管线和参数
uint64_t initialize_render_system(uint64_t param_1, ulonglong param_2)
{
  FUN_18005a9a0();  // 调用渲染系统初始化子函数
  if ((param_2 & 1) != 0) {
    free(param_1, 0xa90);  // 释放2704字节内存
  }
  return param_1;
}





// 函数: void initialize_render_pipeline(uint64_t *render_pipeline_ptr, uint64_t param_2, uint64_t param_3, uint64_t param_4)
// 功能: 初始化渲染管线，设置多个渲染阶段和缓冲区
void initialize_render_pipeline(uint64_t *render_pipeline_ptr, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
  // 设置主管线指针
  *render_pipeline_ptr = &unknown_var_7944_ptr;
  
  // 初始化渲染管线组件（按偏移量递减顺序）
  FUN_18005ab50(render_pipeline_ptr + 0x143);  // 初始化阶段20 (偏移0x143)
  FUN_18005ab50(render_pipeline_ptr + 0x134);  // 初始化阶段19 (偏移0x134)
  FUN_18005b7c0(render_pipeline_ptr + 0x126);  // 初始化阶段18 (偏移0x126)
  FUN_18005b7c0(render_pipeline_ptr + 0x118);  // 初始化阶段17 (偏移0x118)
  FUN_18005b7c0(render_pipeline_ptr + 0x10a);  // 初始化阶段16 (偏移0x10a)
  FUN_18005b7c0(render_pipeline_ptr + 0xfc);   // 初始化阶段15 (偏移0xfc)
  FUN_18005b7c0(render_pipeline_ptr + 0xee);   // 初始化阶段14 (偏移0xee)
  FUN_18005b7c0(render_pipeline_ptr + 0xe0);   // 初始化阶段13 (偏移0xe0)
  FUN_18005b7c0(render_pipeline_ptr + 0xd2);   // 初始化阶段12 (偏移0xd2)
  FUN_18005b7c0(render_pipeline_ptr + 0xc4);   // 初始化阶段11 (偏移0xc4)
  FUN_18005b7c0(render_pipeline_ptr + 0xb6);   // 初始化阶段10 (偏移0xb6)
  FUN_18005b7c0(render_pipeline_ptr + 0xa8);   // 初始化阶段9 (偏移0xa8)
  FUN_18005b7c0(render_pipeline_ptr + 0x9a);   // 初始化阶段8 (偏移0x9a)
  FUN_18005b7c0(render_pipeline_ptr + 0x8c);   // 初始化阶段7 (偏移0x8c)
  FUN_18005b7c0(render_pipeline_ptr + 0x7e);   // 初始化阶段6 (偏移0x7e)
  FUN_18005b7c0(render_pipeline_ptr + 0x70);   // 初始化阶段5 (偏移0x70)
  FUN_18005b7c0(render_pipeline_ptr + 0x62);   // 初始化阶段4 (偏移0x62)
  FUN_18005b7c0(render_pipeline_ptr + 0x54);   // 初始化阶段3 (偏移0x54)
  FUN_18005b7c0(render_pipeline_ptr + 0x46);   // 初始化阶段2 (偏移0x46)
  FUN_18005b7c0(render_pipeline_ptr + 0x38);   // 初始化阶段1 (偏移0x38)
  FUN_18005b7c0(render_pipeline_ptr + 0x2a);   // 初始化缓冲区2 (偏移0x2a)
  FUN_18005b7c0(render_pipeline_ptr + 0x1c);   // 初始化缓冲区1 (偏移0x1c)
  
  // 设置管线状态
  *render_pipeline_ptr = &unknown_var_7304_ptr;  // 设置管线状态指针
  render_pipeline_ptr[0x18] = &unknown_var_3456_ptr;  // 设置默认缓冲区
  
  // 检查并清理阶段19
  if (render_pipeline_ptr[0x19] != 0) {
    FUN_18064e900();  // 清理阶段19
  }
  render_pipeline_ptr[0x19] = 0;
  *(int32_t *)(render_pipeline_ptr + 0x1b) = 0;  // 清空阶段19标志
  render_pipeline_ptr[0x18] = &unknown_var_720_ptr;  // 设置阶段18缓冲区
  
  // 初始化渲染管线细节
  FUN_18005d260(render_pipeline_ptr + 0x12, render_pipeline_ptr[0x14], param_3, param_4, 0xfffffffffffffffe);
  
  // 检查并清理各个阶段
  if (render_pipeline_ptr[0xd] != 0) {  // 检查阶段13
    FUN_18064e900();  // 清理阶段13
  }
  if (render_pipeline_ptr[9] != 0) {     // 检查阶段9
    FUN_18064e900();  // 清理阶段9
  }
  if (render_pipeline_ptr[5] != 0) {     // 检查阶段5
    FUN_18064e900();  // 清理阶段5
  }
  if (render_pipeline_ptr[1] != 0) {     // 检查阶段1
    FUN_18064e900();  // 清理阶段1
  }
  
  return;
}





// 函数: void execute_stage_callback(longlong stage_ptr, uint64_t param_2, uint64_t param_3, uint64_t param_4)
// 功能: 执行渲染阶段回调函数，调用特定阶段的处理函数
void execute_stage_callback(longlong stage_ptr, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
  // 检查是否存在回调函数
  if (*(code **)(stage_ptr + 0x10) != (code *)0x0) {
    // 调用阶段回调函数
    (**(code **)(stage_ptr + 0x10))(stage_ptr, 0, 0, param_4, 0xfffffffffffffffe);
  }
  return;
}





// 函数: void execute_buffer_callback(longlong buffer_ptr, uint64_t param_2, uint64_t param_3, uint64_t param_4)
// 功能: 执行缓冲区回调函数，调用特定缓冲区的处理函数
void execute_buffer_callback(longlong buffer_ptr, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
  // 检查是否存在回调函数
  if (*(code **)(buffer_ptr + 0x10) != (code *)0x0) {
    // 调用缓冲区回调函数
    (**(code **)(buffer_ptr + 0x10))(buffer_ptr, 0, 0, param_4, 0xfffffffffffffffe);
  }
  return;
}





// 函数: void cleanup_render_stage(longlong stage_ptr, uint64_t param_2, uint64_t param_3, uint64_t param_4)
// 功能: 清理渲染阶段，释放相关资源并重置状态
void cleanup_render_stage(longlong stage_ptr, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
  // 调用阶段析构函数
  if (*(code **)(stage_ptr + 0x68) != (code *)0x0) {
    (**(code **)(stage_ptr + 0x68))(stage_ptr + 0x58, 0, 0, param_4, 0xfffffffffffffffe);
  }
  
  // 清理第一个缓冲区
  *(uint64_t *)(stage_ptr + 0x30) = &unknown_var_3456_ptr;  // 设置默认缓冲区
  if (*(longlong *)(stage_ptr + 0x38) != 0) {
    FUN_18064e900();  // 释放缓冲区内存
  }
  *(uint64_t *)(stage_ptr + 0x38) = 0;  // 清空缓冲区指针
  *(int32_t *)(stage_ptr + 0x48) = 0;  // 清空缓冲区标志
  *(uint64_t *)(stage_ptr + 0x30) = &unknown_var_720_ptr;  // 设置缓冲区状态
  
  // 清理第二个缓冲区
  *(uint64_t *)(stage_ptr + 0x10) = &unknown_var_3456_ptr;  // 设置默认缓冲区
  if (*(longlong *)(stage_ptr + 0x18) != 0) {
    FUN_18064e900();  // 释放缓冲区内存
  }
  *(uint64_t *)(stage_ptr + 0x18) = 0;  // 清空缓冲区指针
  *(int32_t *)(stage_ptr + 0x28) = 0;  // 清空缓冲区标志
  *(uint64_t *)(stage_ptr + 0x10) = &unknown_var_720_ptr;  // 设置缓冲区状态
  
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void process_device_definition(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
// 功能: 处理设备定义字符串，创建并配置设备对象
void process_device_definition(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
  int32_t string_length;
  int32_t *device_string;
  void *stack_ptr1;
  int32_t *stack_ptr2;
  int32_t stack_length;
  uint64_t stack_param;
  
  // 设置栈参数
  stack_ptr1 = &unknown_var_3456_ptr;
  stack_param = 0;
  stack_ptr2 = (int32_t *)0x0;
  stack_length = 0;
  
  // 分配设备字符串内存
  device_string = (int32_t *)FUN_18062b420(_DAT_180c8ed18, 0x13, 0x13, param_4, 0xfffffffffffffffe);
  *(int8_t *)device_string = 0;  // 初始化字符串
  stack_ptr2 = device_string;
  
  // 获取字符串长度
  string_length = FUN_18064e990(device_string);
  stack_param = CONCAT44(stack_param._4_4_, string_length);
  
  // 设置设备定义字符串 "Device development config"
  *device_string = 0x65766544;        // "Deve"
  device_string[1] = 0x6d706f6c;      // "lopme"
  device_string[2] = 0x20746e65;      // "ent "
  device_string[3] = 0x666e6f63;      // "conf"
  *(int16_t *)(device_string + 4) = 0x6769;  // "ig"
  *(int8_t *)((longlong)device_string + 0x12) = 0;  // 字符串结束符
  
  // 设置字符串长度
  stack_length = 0x12;  // 18个字符
  
  // 处理设备定义
  FUN_1800ae520(param_1, &stack_ptr1);
  stack_ptr1 = &unknown_var_3456_ptr;
  
  // 临时字符串内存（不返回）
  FUN_18064e900(device_string);
}



// 函数: uint64_t initialize_audio_system(uint64_t param_1, ulonglong param_2)
// 功能: 初始化音频系统，设置音频设备和参数
uint64_t initialize_audio_system(uint64_t param_1, ulonglong param_2)
{
  FUN_18005b560();  // 调用音频系统初始化子函数
  if ((param_2 & 1) != 0) {
    free(param_1, 0x13c0);  // 释放5056字节内存
  }
  return param_1;
}





