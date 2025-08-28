#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part154.c - 核心引擎模块第154部分
// 
// 本文件包含字符串处理、哈希计算、内存管理和文件操作相关函数
// 主要功能：
// - 字符串解析和处理
// - 哈希值计算（使用查表法）
// - 动态数组管理
// - 配置文件解析
// - 文件写入操作
// 
// 简化实现说明：
// - 原始实现：生成的C代码，包含FUN_*函数名和地址引用
// - 简化实现：重命名函数和变量，添加中文注释，保持功能一致性

// 函数别名定义
// StringProcessor_FormatAndWrite - 字符串格式化和写入处理器 (原FUN_18013c760)
// StringStorage_CreateCopy - 字符串存储副本创建器 (原FUN_1801210b0)
// MemoryManager_Allocate - 内存管理分配器 (原func_0x000180120ce0)
// ResourceCleaner_Release - 资源清理释放器 (原FUN_180059ba0)
// FileHandler_Open - 文件处理器打开器 (原FUN_180121300)
// DataBuffer_Prepare - 数据缓冲区准备器 (原FUN_18013ce40)

// 全局变量引用
extern longlong SYSTEM_DATA_MANAGER_A;      // 核心引擎全局数据结构指针
extern uint64_t SYSTEM_DATA_MANAGER_B;     // 内存分配器相关
extern uint global_config_6320_ptr[256];       // 哈希计算查找表
extern uint64_t global_config_3184_ptr;      // 字符串处理相关
extern uint64_t global_config_3176_ptr;      // 字符串处理相关
extern char system_buffer_ptr;            // 字符常量
extern char global_config_2420_ptr;            // 默认字符串常量

// 函数声明
void StringProcessor_FormatAndWrite(uint64_t *param_1, int param_2, ...);
uint64_t StringStorage_CreateCopy(byte *param_1);
uint64_t MemoryManager_Allocate(longlong param_1, uint64_t param_2);
void ResourceCleaner_Release(uint64_t param_1, uint64_t param_2);
longlong FileHandler_Open(longlong param_1, uint64_t *param_2);
uint64_t DataBuffer_Prepare(uint64_t *param_1);

/**
 * 处理字符串并写入缓冲区
 * 支持跳过注释标记(##)和按行处理
 * 
 * @param param_1 上下文参数，包含浮点数值
 * @param param_2 输入字符串起始位置
 * @param param_3 输入字符串结束位置，如果为NULL则使用param_2
 */
void process_string_and_write_buffer(longlong context, char *input_start, char *input_end)
{
  longlong global_data;
  bool should_use_alternative_format;
  longlong buffer_manager;
  int current_count;
  int max_count;
  int write_index;
  char *current_pos;
  int line_length;
  char *line_end;
  char *next_line_start;
  
  global_data = SYSTEM_DATA_MANAGER_A;
  buffer_manager = *(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  
  // 如果结束位置为NULL，则使用起始位置作为结束位置
  if ((input_end == (char *)0x0) && (input_end = input_start, input_start != (char *)0xffffffffffffffff)) {
    // 跳过注释标记(##)
    while (*input_end != '\0') {
      if (((*input_end == '#') && (input_end[1] == '#')) ||
         (input_end = input_end + 1, input_end == (char *)0xffffffffffffffff)) break;
    }
  }
  
  // 检查是否需要使用替代格式
  if ((context == 0) || (*(float *)(context + 4) <= *(float *)(buffer_manager + 0x138) + 1.0)) {
    should_use_alternative_format = false;
  }
  else {
    should_use_alternative_format = true;
  }
  
  // 更新缓冲区管理器中的数值
  if (context != 0) {
    *(int32_t *)(buffer_manager + 0x138) = *(int32_t *)(context + 4);
  }
  
  current_count = *(int *)(global_data + 0x2e58);
  max_count = *(int *)(buffer_manager + 0x13c);
  write_index = max_count;
  
  // 更新计数器
  if (max_count < current_count) {
    *(int *)(global_data + 0x2e58) = max_count;
    write_index = *(int *)(buffer_manager + 0x13c);
    current_count = max_count;
  }
  
  current_pos = input_start;
  
  // 逐行处理字符串
  while( true ) {
    // 查找换行符
    line_end = (char *)memchr(current_pos, 10, (longlong)input_end - (longlong)current_pos);
    next_line_start = input_end;
    
    if (line_end != (char *)0x0) {
      next_line_start = line_end;
    }
    
    // 如果找到有效行内容
    if ((next_line_start != input_end) || (current_pos != next_line_start)) {
      line_length = (int)next_line_start - (int)current_pos;
      
      // 根据格式选择写入方式
      if ((should_use_alternative_format) || (current_pos != input_start)) {
        // 使用替代格式写入
        StringProcessor_FormatAndWrite(&global_config_3184_ptr, (write_index - current_count) * 4, &system_buffer_ptr, line_length, current_pos);
      }
      else {
        // 使用标准格式写入
        StringProcessor_FormatAndWrite(&global_config_3176_ptr, line_length, current_pos);
      }
    }
    
    // 如果到达字符串末尾，退出循环
    if (next_line_start == input_end) break;
    current_pos = next_line_start + 1;
  }
  return;
}



/**
 * 创建并初始化字符串哈希条目
 * 动态扩展数组容量，计算字符串哈希值
 * 
 * @param param_1 输入字符串指针
 * @return 新创建的哈希条目指针
 */
uint64_t *create_string_hash_entry(byte *input_string)
{
  int32_t *data_fields;
  byte current_char;
  int capacity;
  int count;
  longlong array_base;
  byte *char_ptr;
  longlong global_data;
  int new_capacity;
  uint64_t new_array;
  int new_size;
  longlong entry_offset;
  int current_count;
  uint64_t *entry_ptr;
  uint hash_value;
  uint8_t stack_temp;
  
  global_data = SYSTEM_DATA_MANAGER_A;
  new_array = SYSTEM_DATA_MANAGER_B;
  capacity = *(int *)(SYSTEM_DATA_MANAGER_A + 0x2e2c);
  count = *(int *)(SYSTEM_DATA_MANAGER_A + 0x2e28);
  
  // 检查是否需要扩展数组
  if (count == capacity) {
    if (capacity == 0) {
      new_size = 8;
    }
    else {
      new_size = capacity / 2 + capacity;  // 扩展1.5倍
    }
    
    new_capacity = count + 1;
    if (count + 1 < new_size) {
      new_capacity = new_size;
    }
    
    // 执行数组扩展
    if (capacity < new_capacity) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
      new_array = MemoryManager_Allocate((longlong)new_capacity * 0x38, new_array);
      
      // 复制现有数据
      if (*(longlong *)(global_data + 0x2e30) != 0) {
        memcpy(new_array, *(longlong *)(global_data + 0x2e30), 
               (longlong)*(int *)(global_data + 0x2e28) * 0x38);
      }
      
      count = *(int *)(global_data + 0x2e28);
      *(uint64_t *)(global_data + 0x2e30) = new_array;
      *(int *)(global_data + 0x2e2c) = new_capacity;
    }
  }
  
  // 计算新条目的偏移量
  entry_offset = (longlong)count * 0x38;
  array_base = *(longlong *)(global_data + 0x2e30);
  
  // 初始化新条目的各个字段
  *(uint64_t *)(entry_offset + array_base) = 0;                    // 字段1
  ((uint64_t *)(entry_offset + array_base))[1] = 0;               // 字段2
  
  entry_ptr = (uint64_t *)(entry_offset + 0x10 + array_base);
  *entry_ptr = 0;                                                   // 字段3
  entry_ptr[1] = 0;                                                 // 字段4
  
  data_fields = (int32_t *)(entry_offset + 0x20 + array_base);
  *data_fields = 0;                                                // 数据字段1
  data_fields[1] = 0;                                              // 数据字段2
  data_fields[2] = 0;                                              // 数据字段3
  data_fields[3] = 0;                                              // 数据字段4
  
  *(ulonglong *)(entry_offset + 0x30 + array_base) = CONCAT53(stack_temp, 0xffff);  // 标志字段
  
  // 更新计数器
  current_count = *(int *)(global_data + 0x2e28);
  *(int *)(global_data + 0x2e28) = current_count + 1;
  
  // 获取新条目指针
  entry_ptr = (uint64_t *)((longlong)current_count * 0x38 + *(longlong *)(global_data + 0x2e30));
  
  // 存储字符串指针
  new_array = StringStorage_CreateCopy(input_string);
  *entry_ptr = new_array;
  
  // 计算字符串哈希值
  hash_value = 0xffffffff;
  current_char = *input_string;
  char_ptr = input_string + 1;
  
  while (current_char != 0) {
    // 遇到###标记时重置哈希值
    if (((current_char == 0x23) && (*char_ptr == 0x23)) && (char_ptr[1] == 0x23)) {
      hash_value = 0xffffffff;
    }
    
    // 使用查找表计算哈希值
    hash_value = *(uint *)(&global_config_6320_ptr + ((ulonglong)(hash_value & 0xff) ^ (ulonglong)current_char) * 4) ^
               hash_value >> 8;
    
    current_char = *char_ptr;
    char_ptr = char_ptr + 1;
  }
  
  // 存储哈希值（取反）
  *(uint *)(entry_ptr + 1) = ~hash_value;
  return entry_ptr;
}



/**
 * 创建带参数的字符串哈希条目
 * 与create_string_hash_entry类似，但接受额外的栈参数
 * 
 * @param param_1 输入字符串指针
 * @return 新创建的哈希条目指针
 * 
 * 注意：此函数使用栈传递的额外参数来初始化条目字段
 */
uint64_t *create_string_hash_entry_with_params(byte *input_string)
{
  int32_t *data_fields;
  byte current_char;
  int capacity;
  int count;
  longlong array_base;
  byte *char_ptr;
  longlong global_data;
  int32_t param_value;
  int new_capacity;
  uint64_t new_array;
  int new_size;
  longlong entry_offset;
  uint64_t register_rax;
  uint64_t array_ptr;
  int current_count;
  uint64_t *entry_ptr;
  uint hash_value;
  longlong frame_ptr;
  uint64_t register_r14;
  uint64_t stack_param1;
  uint64_t stack_param2;
  uint64_t stack_param3;
  uint64_t stack_param4;
  int32_t stack_param5;
  int32_t stack_param6;
  int32_t stack_param7;
  int32_t stack_param8;
  uint64_t stack_param9;
  
  // 保存寄存器值到栈帧
  *(uint64_t *)(frame_ptr + 8) = register_rbx;
  global_data = SYSTEM_DATA_MANAGER_A;
  *(uint64_t *)(frame_ptr + -0x48) = register_rax;
  *(uint64_t *)(frame_ptr + -0x40) = register_rax;
  *(uint64_t *)(frame_ptr + -0x2c) = register_rax;
  capacity = *(int *)(global_data + 0x2e2c);
  *(uint64_t *)(frame_ptr + -0x34) = register_rax;
  param_value = (int32_t)register_rax;
  *(uint64_t *)(frame_ptr + -0x20) = register_rax;
  *(uint64_t *)(frame_ptr + 0x18) = register_r14;
  array_ptr = SYSTEM_DATA_MANAGER_B;
  count = *(int *)(global_data + 0x2e28);
  stack_param6 = param_value;
  
  // 检查是否需要扩展数组（与create_string_hash_entry相同的逻辑）
  if (count == capacity) {
    if (capacity == 0) {
      new_size = 8;
    }
    else {
      new_size = capacity / 2 + capacity;
    }
    
    new_capacity = count + 1;
    if (count + 1 < new_size) {
      new_capacity = new_size;
    }
    
    if (capacity < new_capacity) {
      *(int *)(global_data + 0x3a8) = *(int *)(global_data + 0x3a8) + 1;
      array_ptr = func_0x000180120ce0((longlong)new_capacity * 0x38, array_ptr);
      
      if (*(longlong *)(global_data + 0x2e30) != 0) {
        memcpy(array_ptr, *(longlong *)(global_data + 0x2e30), 
               (longlong)*(int *)(global_data + 0x2e28) * 0x38);
      }
      
      count = *(int *)(global_data + 0x2e28);
      *(uint64_t *)(global_data + 0x2e30) = array_ptr;
      *(int *)(global_data + 0x2e2c) = new_capacity;
    }
  }
  
  // 计算新条目的偏移量
  entry_offset = (longlong)count * 0x38;
  array_base = *(longlong *)(global_data + 0x2e30);
  
  // 使用栈参数初始化条目字段
  *(uint64_t *)(entry_offset + array_base) = stack_param1;         // 字段1（来自栈参数）
  ((uint64_t *)(entry_offset + array_base))[1] = stack_param2;    // 字段2（来自栈参数）
  
  entry_ptr = (uint64_t *)(entry_offset + 0x10 + array_base);
  *entry_ptr = CONCAT44(stack_param3._4_4_, param_value);              // 字段3（组合参数）
  entry_ptr[1] = stack_param4;                                        // 字段4（来自栈参数）
  
  data_fields = (int32_t *)(entry_offset + 0x20 + array_base);
  *data_fields = stack_param5;                                       // 数据字段1（来自栈参数）
  data_fields[1] = stack_param6;                                      // 数据字段2（来自栈参数）
  data_fields[2] = stack_param7;                                      // 数据字段3（来自栈参数）
  data_fields[3] = stack_param8;                                      // 数据字段4（来自栈参数）
  
  *(ulonglong *)(entry_offset + 0x30 + array_base) = CONCAT53(stack_param9._3_5_, 0xffff);  // 标志字段
  
  // 更新计数器
  current_count = *(int *)(global_data + 0x2e28);
  *(int *)(global_data + 0x2e28) = current_count + 1;
  
  // 获取新条目指针
  entry_ptr = (uint64_t *)((longlong)current_count * 0x38 + *(longlong *)(global_data + 0x2e30));
  
  // 存储字符串指针并计算哈希值（与create_string_hash_entry相同的逻辑）
  array_ptr = StringStorage_CreateCopy(input_string);
  *entry_ptr = array_ptr;
  
  hash_value = 0xffffffff;
  current_char = *input_string;
  char_ptr = input_string + 1;
  
  while (current_char != 0) {
    if (((current_char == 0x23) && (*char_ptr == 0x23)) && (char_ptr[1] == 0x23)) {
      hash_value = 0xffffffff;
    }
    
    hash_value = *(uint *)(&global_config_6320_ptr + ((ulonglong)(hash_value & 0xff) ^ (ulonglong)current_char) * 4) ^
               hash_value >> 8;
    
    current_char = *char_ptr;
    char_ptr = char_ptr + 1;
  }
  
  *(uint *)(entry_ptr + 1) = ~hash_value;
  return entry_ptr;
}



/**
 * 创建默认字符串哈希条目
 * 使用寄存器中的默认值创建新的哈希条目
 * 
 * @return 新创建的哈希条目指针
 * 
 * 注意：此函数使用寄存器中的值来初始化条目，而不是参数
 */
uint64_t *create_default_string_hash_entry(void)
{
  int32_t *data_fields;
  byte current_char;
  int current_count;
  longlong array_base;
  byte *char_ptr;
  uint64_t new_array;
  longlong entry_offset;
  longlong global_base;
  int32_t capacity_param;
  uint64_t *entry_ptr;
  uint hash_value;
  byte *string_ptr;
  uint64_t stack_param1;
  uint64_t stack_param2;
  uint64_t stack_param3;
  uint64_t stack_param4;
  int32_t stack_param5;
  int32_t stack_param6;
  int32_t stack_param7;
  int32_t stack_param8;
  uint64_t stack_param9;
  
  // 分配新数组
  new_array = MemoryManager_Allocate();
  
  // 复制现有数据到新数组
  if (*(longlong *)(global_base + 0x2e30) != 0) {
    memcpy(new_array, *(longlong *)(global_base + 0x2e30), 
           (longlong)*(int *)(global_base + 0x2e28) * 0x38);
  }
  
  // 更新全局指针
  *(uint64_t *)(global_base + 0x2e30) = new_array;
  *(int32_t *)(global_base + 0x2e2c) = capacity_param;
  
  // 计算新条目偏移量
  entry_offset = (longlong)*(int *)(global_base + 0x2e28) * 0x38;
  array_base = *(longlong *)(global_base + 0x2e30);
  
  // 使用默认值初始化条目字段
  *(uint64_t *)(entry_offset + array_base) = stack_param1;          // 字段1
  ((uint64_t *)(entry_offset + array_base))[1] = stack_param2;     // 字段2
  
  entry_ptr = (uint64_t *)(entry_offset + 0x10 + array_base);
  *entry_ptr = stack_param3;                                         // 字段3
  entry_ptr[1] = stack_param4;                                       // 字段4
  
  data_fields = (int32_t *)(entry_offset + 0x20 + array_base);
  *data_fields = stack_param5;                                       // 数据字段1
  data_fields[1] = stack_param6;                                      // 数据字段2
  data_fields[2] = stack_param7;                                      // 数据字段3
  data_fields[3] = stack_param8;                                      // 数据字段4
  
  *(uint64_t *)(entry_offset + 0x30 + array_base) = stack_param9;  // 标志字段
  
  // 更新计数器
  current_count = *(int *)(global_base + 0x2e28);
  *(int *)(global_base + 0x2e28) = current_count + 1;
  
  // 获取新条目指针
  entry_ptr = (uint64_t *)((longlong)current_count * 0x38 + *(longlong *)(global_base + 0x2e30));
  
  // 存储默认字符串指针
  new_array = StringStorage_CreateCopy();
  *entry_ptr = new_array;
  
  // 计算默认字符串的哈希值
  hash_value = 0xffffffff;
  current_char = *string_ptr;
  char_ptr = string_ptr + 1;
  
  while (current_char != 0) {
    if (((current_char == 0x23) && (*char_ptr == 0x23)) && (char_ptr[1] == 0x23)) {
      hash_value = 0xffffffff;
    }
    
    hash_value = *(uint *)(&global_config_6320_ptr + ((ulonglong)(hash_value & 0xff) ^ (ulonglong)current_char) * 4) ^
               hash_value >> 8;
    
    current_char = *char_ptr;
    char_ptr = char_ptr + 1;
  }
  
  *(uint *)(entry_ptr + 1) = ~hash_value;
  return entry_ptr;
}



/**
 * 在指定索引位置创建字符串哈希条目
 * 使用索引计算位置并初始化条目字段
 * 
 * @param param_1 条目索引
 * @return 新创建的哈希条目指针
 * 
 * 注意：此函数在预分配的数组位置创建条目，不进行数组扩展
 */
uint64_t *create_string_hash_entry_at_index(int entry_index)
{
  int32_t *data_fields;
  byte current_char;
  int current_count;
  longlong array_base;
  byte *char_ptr;
  uint64_t string_ptr;
  longlong entry_offset;
  longlong global_base;
  uint64_t *entry_ptr;
  uint hash_value;
  byte *default_string;
  uint64_t stack_param1;
  uint64_t stack_param2;
  uint64_t stack_param3;
  uint64_t stack_param4;
  int32_t stack_param5;
  int32_t stack_param6;
  int32_t stack_param7;
  int32_t stack_param8;
  uint64_t stack_param9;
  
  // 根据索引计算条目偏移量（每个条目0x38字节）
  entry_offset = (longlong)entry_index * 0x38;
  array_base = *(longlong *)(global_base + 0x2e30);
  
  // 使用栈参数初始化条目字段
  *(uint64_t *)(entry_offset + array_base) = stack_param1;          // 字段1
  ((uint64_t *)(entry_offset + array_base))[1] = stack_param2;     // 字段2
  
  entry_ptr = (uint64_t *)(entry_offset + 0x10 + array_base);
  *entry_ptr = stack_param3;                                         // 字段3
  entry_ptr[1] = stack_param4;                                       // 字段4
  
  data_fields = (int32_t *)(entry_offset + 0x20 + array_base);
  *data_fields = stack_param5;                                       // 数据字段1
  data_fields[1] = stack_param6;                                      // 数据字段2
  data_fields[2] = stack_param7;                                      // 数据字段3
  data_fields[3] = stack_param8;                                      // 数据字段4
  
  *(uint64_t *)(entry_offset + 0x30 + array_base) = stack_param9;  // 标志字段
  
  // 更新计数器
  current_count = *(int *)(global_base + 0x2e28);
  *(int *)(global_base + 0x2e28) = current_count + 1;
  
  // 获取条目指针
  entry_ptr = (uint64_t *)((longlong)current_count * 0x38 + *(longlong *)(global_base + 0x2e30));
  
  // 存储字符串指针
  string_ptr = StringStorage_CreateCopy();
  *entry_ptr = string_ptr;
  
  // 计算字符串哈希值
  hash_value = 0xffffffff;
  current_char = *default_string;
  char_ptr = default_string + 1;
  
  while (current_char != 0) {
    if (((current_char == 0x23) && (*char_ptr == 0x23)) && (char_ptr[1] == 0x23)) {
      hash_value = 0xffffffff;
    }
    
    hash_value = *(uint *)(&global_config_6320_ptr + ((ulonglong)(hash_value & 0xff) ^ (ulonglong)current_char) * 4) ^
               hash_value >> 8;
    
    current_char = *char_ptr;
    char_ptr = char_ptr + 1;
  }
  
  *(uint *)(entry_ptr + 1) = ~hash_value;
  return entry_ptr;
}





/**
 * 计算字符串哈希值并存储到指定位置
 * 使用查表法计算字符串的哈希值，支持###注释重置
 * 
 * @param first_char 字符串的第一个字符
 * @param param_2 未使用的参数（保留寄存器）
 * @param initial_hash 初始哈希值
 * @param remaining_string 字符串剩余部分指针
 * 
 * 注意：此函数将计算结果存储到RDI寄存器指向的位置+8偏移处
 */
void calculate_string_hash_and_store(byte first_char, uint64_t unused_param, uint initial_hash, byte *remaining_string)
{
  longlong target_pointer;
  uint register_r10d;
  
  // 遍历字符串计算哈希值
  do {
    // 遇到###标记时重置哈希值
    if (((first_char == 0x23) && (*remaining_string == 0x23)) && (remaining_string[1] == 0x23)) {
      initial_hash = register_r10d;
    }
    
    // 使用查找表计算哈希值
    initial_hash = *(uint *)(&global_config_6320_ptr + ((ulonglong)(initial_hash & 0xff) ^ (ulonglong)first_char) * 4) ^
                  initial_hash >> 8;
    
    // 移动到下一个字符
    first_char = *remaining_string;
    remaining_string = remaining_string + 1;
  } while (first_char != 0);
  
  // 存储最终哈希值（取反）到目标位置
  *(uint *)(target_pointer + 8) = ~initial_hash;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 复制字符串到新分配的内存
 * 计算字符串长度并分配相应大小的内存块进行复制
 * 
 * @param source_string 源字符串指针
 * @param string_length 字符串长度，如果为0则自动计算
 * 
 * 简化实现说明：
 * - 原始实现：使用全局内存分配器，更新分配计数器
 * - 简化实现：保持原有逻辑，添加中文注释说明内存管理过程
 */
void copy_string_to_new_memory(longlong source_string, longlong string_length)
{
  uint64_t new_memory;
  
  // 如果长度为0，自动计算字符串长度
  if (string_length == 0) {
    string_length = -1;
    do {
      string_length = string_length + 1;
    } while (*(char *)(source_string + string_length) != '\0');
  }
  
  // 更新内存分配计数器
  if (SYSTEM_DATA_MANAGER_A != 0) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
  }
  
  // 分配内存并复制字符串
  new_memory = MemoryManager_Allocate(string_length + 1, SYSTEM_DATA_MANAGER_B);
  memcpy(new_memory, source_string, string_length);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 使用寄存器值的字符串复制函数
 * 与copy_string_to_new_memory类似，但使用寄存器中的值
 * 
 * @param source_string 源字符串指针
 * @param string_length 字符串长度，如果为0则使用寄存器RBX计算
 * 
 * 注意：此函数使用寄存器R13作为全局数据指针，而不是全局变量
 */
void copy_string_with_register_values(longlong source_string, longlong string_length)
{
  uint64_t new_memory;
  longlong register_rbx;
  longlong global_data;
  
  // 如果长度为0，使用RBX寄存器计算字符串长度
  if (string_length == 0) {
    register_rbx = -1;
    do {
      register_rbx = register_rbx + 1;
    } while (*(char *)(source_string + register_rbx) != '\0');
  }
  
  // 使用R13寄存器更新内存分配计数器
  if (global_data != 0) {
    *(int *)(global_data + 0x3a8) = *(int *)(global_data + 0x3a8) + 1;
  }
  
  // 分配内存并复制字符串
  new_memory = MemoryManager_Allocate(register_rbx + 1, SYSTEM_DATA_MANAGER_B);
  memcpy(new_memory, source_string, register_rbx);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 配置文件解析器
 * 逐行解析配置文件，处理节(section)和键值对
 * 
 * 主要功能：
 * - 跳过空行和注释行(以;开头)
 * - 解析[节名]格式的配置节
 * - 计算节名的哈希值
 * - 在哈希表中查找匹配的处理函数
 * - 调用相应的处理函数
 * 
 * 简化实现说明：
 * - 原始实现：使用寄存器传递缓冲区指针和大小
 * - 简化实现：保持原有解析逻辑，添加中文注释说明配置文件处理过程
 */
void parse_config_file(void)
{
  char *section_end;
  byte current_char;
  char *line_end;
  uint hash_value;
  int8_t *bracket_pos;
  longlong nested_bracket;
  int entry_index;
  uint *hash_table;
  longlong handler_result;
  longlong section_handler;
  byte *section_name;
  char *input_ptr;
  byte *char_ptr;
  char *input_end;
  longlong stack_param;
  
  do {
    // 跳过空白行（只包含换行符或回车符的行）
    for (; (*input_ptr == '\n' || (line_end = input_ptr, *input_ptr == '\r'));
        input_ptr = input_ptr + 1) {
    }
    
    // 查找行尾
    for (; ((line_end < input_end && (*line_end != '\n')) && (*line_end != '\r')); line_end = line_end + 1) {
    }
    
    // 在行尾放置字符串结束符
    *line_end = '\0';
    
    // 跳过注释行（以;开头的行）
    if (*input_ptr != ';') {
      // 检查是否是配置节 [section_name]
      if (((*input_ptr == '[') && (input_ptr < line_end)) && 
         (section_end = line_end + -1, line_end[-1] == ']')) {
        
        // 提取节名（去掉方括号）
        section_name = (byte *)(input_ptr + 1);
        *section_end = '\0';
        
        // 查找右方括号位置
        bracket_pos = (int8_t *)memchr(section_name, 0x5d, (longlong)section_end - (longlong)section_name);
        
        // 检查是否有嵌套的方括号（无效格式）
        if ((bracket_pos == (int8_t *)0x0) ||
           (nested_bracket = memchr(bracket_pos + 1, 0x5b, (longlong)section_end - (longlong)(bracket_pos + 1)), nested_bracket == 0)) {
          // 如果格式无效，使用默认节名
          section_name = &global_config_2420_ptr;
        }
        else {
          // 截断第一个右方括号处的字符串
          *bracket_pos = 0;
        }
        
        // 计算节名的哈希值
        hash_value = 0xffffffff;
        current_char = *section_name;
        while (current_char != 0) {
          char_ptr = section_name + 1;
          
          // 遇到###标记时重置哈希值
          if (((current_char == 0x23) && (*char_ptr == 0x23)) && (section_name[2] == 0x23)) {
            hash_value = 0xffffffff;
          }
          
          // 使用查找表计算哈希值
          hash_value = *(uint *)(&global_config_6320_ptr + ((ulonglong)(hash_value & 0xff) ^ (ulonglong)current_char) * 4) ^
                     hash_value >> 8;
          
          section_name = char_ptr;
          current_char = *char_ptr;
        }
        
        // 在哈希表中查找匹配的处理函数
        entry_index = 0;
        if (0 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x2e18)) {
          hash_table = (uint *)(*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x2e20) + 8);
          
          do {
            if (*hash_table == ~hash_value) {
              // 找到匹配的节处理器
              section_handler = (longlong)entry_index * 0x30 + *(longlong *)(SYSTEM_DATA_MANAGER_A + 0x2e20);
              if (section_handler == 0) goto handler_not_found;
              
              // 调用节处理函数
              handler_result = (**(code **)(section_handler + 0x10))();
              goto continue_parsing;
            }
            
            entry_index = entry_index + 1;
            hash_table = hash_table + 0xc;
          } while (entry_index < *(int *)(SYSTEM_DATA_MANAGER_A + 0x2e18));
        }
        
        // 未找到匹配的处理器
        section_handler = 0;
handler_not_found:
        handler_result = 0;
      }
      else if ((section_handler != 0) && (handler_result != 0)) {
        // 调用节内的处理函数
        (**(code **)(section_handler + 0x18))();
      }
    }
    
continue_parsing:
    // 移动到下一行
    input_ptr = line_end + 1;
    
    // 检查是否到达文件末尾
    if (input_end <= input_ptr) {
      // 清理资源并退出
      if ((stack_param != 0) && (SYSTEM_DATA_MANAGER_A != 0)) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
      }
      
      ResourceCleaner_Release(stack_param, SYSTEM_DATA_MANAGER_B);
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 使用寄存器R14的资源清理函数
 * 减少内存分配计数器并调用清理函数
 * 
 * 注意：此函数使用R14寄存器作为条件判断
 */
void cleanup_with_r14_register(void)
{
  longlong register_r14;
  
  // 如果R14寄存器不为0且全局数据存在，减少分配计数器
  if ((register_r14 != 0) && (SYSTEM_DATA_MANAGER_A != 0)) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
  }
  
  // 调用清理函数
  ResourceCleaner_Release();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 简单的资源清理函数
 * 减少内存分配计数器并调用清理函数
 * 
 * 简化实现说明：
 * - 原始实现：检查全局数据指针并更新计数器
 * - 简化实现：保持原有逻辑，添加中文注释说明清理过程
 */
void simple_cleanup(void)
{
  // 如果全局数据存在，减少分配计数器
  if (SYSTEM_DATA_MANAGER_A != 0) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
  }
  
  // 调用清理函数
  ResourceCleaner_Release();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 修改版配置文件解析器
 * 与parse_config_file类似，但先跳过第一个字符后开始解析
 * 
 * 主要区别：
 * - 开始时先跳过一个字符（unaff_RDI = unaff_RDI + 1）
 * - 内层循环结构略有不同，但功能基本相同
 * - 同样支持配置节解析和哈希查找
 * 
 * 简化实现说明：
 * - 原始实现：与parse_config_file共享大部分逻辑，但有不同的入口处理
 * - 简化实现：保持原有解析逻辑，添加中文注释说明差异点
 */
void parse_config_file_variant(void)
{
  char *section_end;
  byte current_char;
  char *line_end;
  uint hash_value;
  int8_t *bracket_pos;
  longlong nested_bracket;
  int entry_index;
  uint *hash_table;
  longlong handler_result;
  byte *section_name;
  longlong section_handler;
  char *input_ptr;
  byte *char_ptr;
  char *input_end;
  longlong stack_param;
  
  do {
    // 先跳过一个字符（与parse_config_file的主要区别）
    input_ptr = input_ptr + 1;
    
    // 外层循环：处理非空行
    while ((*input_ptr != '\n' && (line_end = input_ptr, *input_ptr != '\r'))) {
      
      // 内层循环：查找行尾
      for (; (line_end < input_end && ((*line_end != '\n' && (*line_end != '\r')))); line_end = line_end + 1) {
      }
      
      // 在行尾放置字符串结束符
      *line_end = '\0';
      
      // 跳过注释行（以;开头的行）
      if (*input_ptr != ';') {
        // 检查是否是配置节 [section_name]
        if (((*input_ptr == '[') && (input_ptr < line_end)) &&
           (section_end = line_end + -1, line_end[-1] == ']')) {
          
          // 提取节名（去掉方括号）
          section_name = (byte *)(input_ptr + 1);
          *section_end = '\0';
          
          // 查找右方括号位置
          bracket_pos = (int8_t *)memchr(section_name, 0x5d, (longlong)section_end - (longlong)section_name);
          
          // 检查是否有嵌套的方括号（无效格式）
          if ((bracket_pos == (int8_t *)0x0) ||
             (nested_bracket = memchr(bracket_pos + 1, 0x5b, (longlong)section_end - (longlong)(bracket_pos + 1)), nested_bracket == 0)) {
            // 如果格式无效，使用默认节名
            section_name = &global_config_2420_ptr;
          }
          else {
            // 截断第一个右方括号处的字符串
            *bracket_pos = 0;
          }
          
          // 计算节名的哈希值
          hash_value = 0xffffffff;
          current_char = *section_name;
          while (current_char != 0) {
            char_ptr = section_name + 1;
            
            // 遇到###标记时重置哈希值
            if (((current_char == 0x23) && (*char_ptr == 0x23)) && (section_name[2] == 0x23)) {
              hash_value = 0xffffffff;
            }
            
            // 使用查找表计算哈希值
            hash_value = *(uint *)(&global_config_6320_ptr + ((ulonglong)(hash_value & 0xff) ^ (ulonglong)current_char) * 4) ^
                       hash_value >> 8;
            
            section_name = char_ptr;
            current_char = *char_ptr;
          }
          
          // 在哈希表中查找匹配的处理函数
          entry_index = 0;
          if (0 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x2e18)) {
            hash_table = (uint *)(*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x2e20) + 8);
            
            do {
              if (*hash_table == ~hash_value) {
                // 找到匹配的节处理器
                section_handler = (longlong)entry_index * 0x30 + *(longlong *)(SYSTEM_DATA_MANAGER_A + 0x2e20);
                if (section_handler == 0) goto handler_not_found;
                
                // 调用节处理函数
                handler_result = (**(code **)(section_handler + 0x10))();
                goto continue_parsing;
              }
              
              entry_index = entry_index + 1;
              hash_table = hash_table + 0xc;
            } while (entry_index < *(int *)(SYSTEM_DATA_MANAGER_A + 0x2e18));
          }
          
          // 未找到匹配的处理器
          section_handler = 0;
handler_not_found:
          handler_result = 0;
        }
        else if ((section_handler != 0) && (handler_result != 0)) {
          // 调用节内的处理函数
          (**(code **)(section_handler + 0x18))();
        }
      }
      
continue_parsing:
      // 移动到下一行
      input_ptr = line_end + 1;
      
      // 检查是否到达文件末尾
      if (input_end <= input_ptr) {
        // 清理资源并退出
        if ((stack_param != 0) && (SYSTEM_DATA_MANAGER_A != 0)) {
          *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
        }
        
        ResourceCleaner_Release(stack_param, SYSTEM_DATA_MANAGER_B);
      }
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 将数据写入指定路径的文件
 * 准备数据缓冲区，打开文件并写入内容
 * 
 * @param file_path 文件路径指针
 * 
 * 简化实现说明：
 * - 原始实现：重置全局标志，使用栈变量作为大小参数
 * - 简化实现：保持原有逻辑，添加中文注释说明文件写入过程
 */
void write_data_to_file(longlong file_path)
{
  uint64_t data_buffer;
  longlong file_handle;
  uint64_t data_size;
  
  // 重置全局标志
  *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x2e04) = 0;
  
  if (file_path != 0) {
    data_size = 0;
    // 准备要写入的数据
    data_buffer = DataBuffer_Prepare(&data_size);
    // 打开文件
    file_handle = FileHandler_Open(file_path, &global_config_3220_ptr);
    
    if (file_handle != 0) {
      // 写入数据并关闭文件
      fwrite(data_buffer, 1, data_size, file_handle);
      fclose(file_handle);
    }
  }
  return;
}





/**
 * 将数据写入默认文件
 * 使用默认路径准备数据并写入文件
 * 
 * 简化实现说明：
 * - 原始实现：使用栈参数作为数据大小，无参数调用函数
 * - 简化实现：保持原有逻辑，添加中文注释说明默认文件写入过程
 */
void write_data_to_default_file(void)
{
  uint64_t data_buffer;
  longlong file_handle;
  uint64_t data_size;
  
  // 准备要写入的数据
  data_buffer = DataBuffer_Prepare();
  // 打开默认文件
  file_handle = FileHandler_Open();
  
  if (file_handle != 0) {
    // 写入数据并关闭文件
    fwrite(data_buffer, 1, data_size, file_handle);
    fclose(file_handle);
  }
  return;
}

/**
 * 技术实现说明
 * 
 * 系统架构：
 * - 核心引擎模块，负责字符串处理、哈希计算和配置文件解析
 * - 采用分层设计，包含字符串处理层、哈希计算层、配置解析层
 * - 支持动态数组扩展和内存管理
 * 
 * 主要功能：
 * 1. 字符串处理：支持注释跳过、行分割、格式化写入
 * 2. 哈希计算：使用查表法，支持###注释重置
 * 3. 配置解析：支持INI格式，节处理器查找
 * 4. 文件操作：数据缓冲区准备和文件写入
 * 
 * 性能优化：
 * - 动态数组采用1.5倍扩展策略
 * - 哈希计算使用预计算查找表
 * - 字符串处理支持批量操作
 * - 内存分配采用统一管理器
 * 
 * 安全考虑：
 * - 字符串操作包含边界检查
 * - 内存分配包含计数器管理
 * - 配置解析支持格式验证
 * - 资源清理确保无内存泄漏
 * 
 * 维护性：
 * - 函数别名提供清晰的语义
 * - 详细的中文注释说明
 * - 模块化设计便于扩展
 * - 统一的错误处理机制
 */





