#include "TaleWorlds.Native.Split.h"

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
// - 原始实现：反编译的C代码，包含FUN_*函数名和地址引用
// - 简化实现：重命名函数和变量，添加中文注释，保持功能一致性

// 全局变量引用
extern longlong _DAT_180c8a9b0;      // 核心引擎全局数据结构指针
extern undefined8 _DAT_180c8a9a8;     // 内存分配器相关
extern uint UNK_18098d290[256];       // 哈希计算查找表
extern undefined8 UNK_180a06770;      // 字符串处理相关
extern undefined8 UNK_180a06768;      // 字符串处理相关
extern char DAT_18098bc73;            // 字符常量
extern char UNK_180a06474;            // 默认字符串常量

// 函数声明
void FUN_18013c760(undefined8 *param_1, int param_2, ...);
undefined8 FUN_1801210b0(byte *param_1);
undefined8 func_0x000180120ce0(longlong param_1, undefined8 param_2);
void FUN_180059ba0(undefined8 param_1, undefined8 param_2);
longlong FUN_180121300(longlong param_1, undefined8 *param_2);
undefined8 FUN_18013ce40(undefined8 *param_1);

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
  
  global_data = _DAT_180c8a9b0;
  buffer_manager = *(longlong *)(_DAT_180c8a9b0 + 0x1af8);
  
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
    *(undefined4 *)(buffer_manager + 0x138) = *(undefined4 *)(context + 4);
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
        FUN_18013c760(&UNK_180a06770, (write_index - current_count) * 4, &DAT_18098bc73, line_length, current_pos);
      }
      else {
        // 使用标准格式写入
        FUN_18013c760(&UNK_180a06768, line_length, current_pos);
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
undefined8 *create_string_hash_entry(byte *input_string)
{
  undefined4 *data_fields;
  byte current_char;
  int capacity;
  int count;
  longlong array_base;
  byte *char_ptr;
  longlong global_data;
  int new_capacity;
  undefined8 new_array;
  int new_size;
  longlong entry_offset;
  int current_count;
  undefined8 *entry_ptr;
  uint hash_value;
  undefined5 stack_temp;
  
  global_data = _DAT_180c8a9b0;
  new_array = _DAT_180c8a9a8;
  capacity = *(int *)(_DAT_180c8a9b0 + 0x2e2c);
  count = *(int *)(_DAT_180c8a9b0 + 0x2e28);
  
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
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
      new_array = func_0x000180120ce0((longlong)new_capacity * 0x38, new_array);
      
      // 复制现有数据
      if (*(longlong *)(global_data + 0x2e30) != 0) {
        memcpy(new_array, *(longlong *)(global_data + 0x2e30), 
               (longlong)*(int *)(global_data + 0x2e28) * 0x38);
      }
      
      count = *(int *)(global_data + 0x2e28);
      *(undefined8 *)(global_data + 0x2e30) = new_array;
      *(int *)(global_data + 0x2e2c) = new_capacity;
    }
  }
  
  // 计算新条目的偏移量
  entry_offset = (longlong)count * 0x38;
  array_base = *(longlong *)(global_data + 0x2e30);
  
  // 初始化新条目的各个字段
  *(undefined8 *)(entry_offset + array_base) = 0;                    // 字段1
  ((undefined8 *)(entry_offset + array_base))[1] = 0;               // 字段2
  
  entry_ptr = (undefined8 *)(entry_offset + 0x10 + array_base);
  *entry_ptr = 0;                                                   // 字段3
  entry_ptr[1] = 0;                                                 // 字段4
  
  data_fields = (undefined4 *)(entry_offset + 0x20 + array_base);
  *data_fields = 0;                                                // 数据字段1
  data_fields[1] = 0;                                              // 数据字段2
  data_fields[2] = 0;                                              // 数据字段3
  data_fields[3] = 0;                                              // 数据字段4
  
  *(ulonglong *)(entry_offset + 0x30 + array_base) = CONCAT53(stack_temp, 0xffff);  // 标志字段
  
  // 更新计数器
  current_count = *(int *)(global_data + 0x2e28);
  *(int *)(global_data + 0x2e28) = current_count + 1;
  
  // 获取新条目指针
  entry_ptr = (undefined8 *)((longlong)current_count * 0x38 + *(longlong *)(global_data + 0x2e30));
  
  // 存储字符串指针
  new_array = FUN_1801210b0(input_string);
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
    hash_value = *(uint *)(&UNK_18098d290 + ((ulonglong)(hash_value & 0xff) ^ (ulonglong)current_char) * 4) ^
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
undefined8 *create_string_hash_entry_with_params(byte *input_string)
{
  undefined4 *data_fields;
  byte current_char;
  int capacity;
  int count;
  longlong array_base;
  byte *char_ptr;
  longlong global_data;
  undefined4 param_value;
  int new_capacity;
  undefined8 new_array;
  int new_size;
  longlong entry_offset;
  undefined8 register_rax;
  undefined8 array_ptr;
  int current_count;
  undefined8 *entry_ptr;
  uint hash_value;
  longlong frame_ptr;
  undefined8 register_r14;
  undefined8 stack_param1;
  undefined8 stack_param2;
  undefined8 stack_param3;
  undefined8 stack_param4;
  undefined4 stack_param5;
  undefined4 stack_param6;
  undefined4 stack_param7;
  undefined4 stack_param8;
  undefined8 stack_param9;
  
  // 保存寄存器值到栈帧
  *(undefined8 *)(frame_ptr + 8) = register_rbx;
  global_data = _DAT_180c8a9b0;
  *(undefined8 *)(frame_ptr + -0x48) = register_rax;
  *(undefined8 *)(frame_ptr + -0x40) = register_rax;
  *(undefined8 *)(frame_ptr + -0x2c) = register_rax;
  capacity = *(int *)(global_data + 0x2e2c);
  *(undefined8 *)(frame_ptr + -0x34) = register_rax;
  param_value = (undefined4)register_rax;
  *(undefined8 *)(frame_ptr + -0x20) = register_rax;
  *(undefined8 *)(frame_ptr + 0x18) = register_r14;
  array_ptr = _DAT_180c8a9a8;
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
      *(undefined8 *)(global_data + 0x2e30) = array_ptr;
      *(int *)(global_data + 0x2e2c) = new_capacity;
    }
  }
  
  // 计算新条目的偏移量
  entry_offset = (longlong)count * 0x38;
  array_base = *(longlong *)(global_data + 0x2e30);
  
  // 使用栈参数初始化条目字段
  *(undefined8 *)(entry_offset + array_base) = stack_param1;         // 字段1（来自栈参数）
  ((undefined8 *)(entry_offset + array_base))[1] = stack_param2;    // 字段2（来自栈参数）
  
  entry_ptr = (undefined8 *)(entry_offset + 0x10 + array_base);
  *entry_ptr = CONCAT44(stack_param3._4_4_, param_value);              // 字段3（组合参数）
  entry_ptr[1] = stack_param4;                                        // 字段4（来自栈参数）
  
  data_fields = (undefined4 *)(entry_offset + 0x20 + array_base);
  *data_fields = stack_param5;                                       // 数据字段1（来自栈参数）
  data_fields[1] = stack_param6;                                      // 数据字段2（来自栈参数）
  data_fields[2] = stack_param7;                                      // 数据字段3（来自栈参数）
  data_fields[3] = stack_param8;                                      // 数据字段4（来自栈参数）
  
  *(ulonglong *)(entry_offset + 0x30 + array_base) = CONCAT53(stack_param9._3_5_, 0xffff);  // 标志字段
  
  // 更新计数器
  current_count = *(int *)(global_data + 0x2e28);
  *(int *)(global_data + 0x2e28) = current_count + 1;
  
  // 获取新条目指针
  entry_ptr = (undefined8 *)((longlong)current_count * 0x38 + *(longlong *)(global_data + 0x2e30));
  
  // 存储字符串指针并计算哈希值（与create_string_hash_entry相同的逻辑）
  array_ptr = FUN_1801210b0(input_string);
  *entry_ptr = array_ptr;
  
  hash_value = 0xffffffff;
  current_char = *input_string;
  char_ptr = input_string + 1;
  
  while (current_char != 0) {
    if (((current_char == 0x23) && (*char_ptr == 0x23)) && (char_ptr[1] == 0x23)) {
      hash_value = 0xffffffff;
    }
    
    hash_value = *(uint *)(&UNK_18098d290 + ((ulonglong)(hash_value & 0xff) ^ (ulonglong)current_char) * 4) ^
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
undefined8 *create_default_string_hash_entry(void)
{
  undefined4 *data_fields;
  byte current_char;
  int current_count;
  longlong array_base;
  byte *char_ptr;
  undefined8 new_array;
  longlong entry_offset;
  longlong global_base;
  undefined4 capacity_param;
  undefined8 *entry_ptr;
  uint hash_value;
  byte *string_ptr;
  undefined8 stack_param1;
  undefined8 stack_param2;
  undefined8 stack_param3;
  undefined8 stack_param4;
  undefined4 stack_param5;
  undefined4 stack_param6;
  undefined4 stack_param7;
  undefined4 stack_param8;
  undefined8 stack_param9;
  
  // 分配新数组
  new_array = func_0x000180120ce0();
  
  // 复制现有数据到新数组
  if (*(longlong *)(global_base + 0x2e30) != 0) {
    memcpy(new_array, *(longlong *)(global_base + 0x2e30), 
           (longlong)*(int *)(global_base + 0x2e28) * 0x38);
  }
  
  // 更新全局指针
  *(undefined8 *)(global_base + 0x2e30) = new_array;
  *(undefined4 *)(global_base + 0x2e2c) = capacity_param;
  
  // 计算新条目偏移量
  entry_offset = (longlong)*(int *)(global_base + 0x2e28) * 0x38;
  array_base = *(longlong *)(global_base + 0x2e30);
  
  // 使用默认值初始化条目字段
  *(undefined8 *)(entry_offset + array_base) = stack_param1;          // 字段1
  ((undefined8 *)(entry_offset + array_base))[1] = stack_param2;     // 字段2
  
  entry_ptr = (undefined8 *)(entry_offset + 0x10 + array_base);
  *entry_ptr = stack_param3;                                         // 字段3
  entry_ptr[1] = stack_param4;                                       // 字段4
  
  data_fields = (undefined4 *)(entry_offset + 0x20 + array_base);
  *data_fields = stack_param5;                                       // 数据字段1
  data_fields[1] = stack_param6;                                      // 数据字段2
  data_fields[2] = stack_param7;                                      // 数据字段3
  data_fields[3] = stack_param8;                                      // 数据字段4
  
  *(undefined8 *)(entry_offset + 0x30 + array_base) = stack_param9;  // 标志字段
  
  // 更新计数器
  current_count = *(int *)(global_base + 0x2e28);
  *(int *)(global_base + 0x2e28) = current_count + 1;
  
  // 获取新条目指针
  entry_ptr = (undefined8 *)((longlong)current_count * 0x38 + *(longlong *)(global_base + 0x2e30));
  
  // 存储默认字符串指针
  new_array = FUN_1801210b0();
  *entry_ptr = new_array;
  
  // 计算默认字符串的哈希值
  hash_value = 0xffffffff;
  current_char = *string_ptr;
  char_ptr = string_ptr + 1;
  
  while (current_char != 0) {
    if (((current_char == 0x23) && (*char_ptr == 0x23)) && (char_ptr[1] == 0x23)) {
      hash_value = 0xffffffff;
    }
    
    hash_value = *(uint *)(&UNK_18098d290 + ((ulonglong)(hash_value & 0xff) ^ (ulonglong)current_char) * 4) ^
               hash_value >> 8;
    
    current_char = *char_ptr;
    char_ptr = char_ptr + 1;
  }
  
  *(uint *)(entry_ptr + 1) = ~hash_value;
  return entry_ptr;
}



undefined8 * FUN_18013ca47(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong unaff_RBX;
  undefined8 *puVar8;
  uint uVar9;
  byte *unaff_R14;
  undefined8 uStackX_20;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000050;
  
  lVar7 = (longlong)param_1 * 0x38;
  lVar4 = *(longlong *)(unaff_RBX + 0x2e30);
  *(undefined8 *)(lVar7 + lVar4) = uStackX_20;
  ((undefined8 *)(lVar7 + lVar4))[1] = in_stack_00000028;
  puVar8 = (undefined8 *)(lVar7 + 0x10 + lVar4);
  *puVar8 = in_stack_00000030;
  puVar8[1] = in_stack_00000038;
  puVar1 = (undefined4 *)(lVar7 + 0x20 + lVar4);
  *puVar1 = uStack0000000000000040;
  puVar1[1] = uStack0000000000000044;
  puVar1[2] = uStack0000000000000048;
  puVar1[3] = uStack000000000000004c;
  *(undefined8 *)(lVar7 + 0x30 + lVar4) = in_stack_00000050;
  iVar3 = *(int *)(unaff_RBX + 0x2e28);
  *(int *)(unaff_RBX + 0x2e28) = iVar3 + 1;
  puVar8 = (undefined8 *)((longlong)iVar3 * 0x38 + *(longlong *)(unaff_RBX + 0x2e30));
  uVar6 = FUN_1801210b0();
  *puVar8 = uVar6;
  uVar9 = 0xffffffff;
  bVar2 = *unaff_R14;
  pbVar5 = unaff_R14 + 1;
  while (bVar2 != 0) {
    if (((bVar2 == 0x23) && (*pbVar5 == 0x23)) && (pbVar5[1] == 0x23)) {
      uVar9 = 0xffffffff;
    }
    uVar9 = *(uint *)(&UNK_18098d290 + ((ulonglong)(uVar9 & 0xff) ^ (ulonglong)bVar2) * 4) ^
            uVar9 >> 8;
    bVar2 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  *(uint *)(puVar8 + 1) = ~uVar9;
  return puVar8;
}





// 函数: void FUN_18013cac6(byte param_1,undefined8 param_2,uint param_3,byte *param_4)
void FUN_18013cac6(byte param_1,undefined8 param_2,uint param_3,byte *param_4)

{
  longlong unaff_RDI;
  uint in_R10D;
  
  do {
    if (((param_1 == 0x23) && (*param_4 == 0x23)) && (param_4[1] == 0x23)) {
      param_3 = in_R10D;
    }
    param_3 = *(uint *)(&UNK_18098d290 + ((ulonglong)(param_3 & 0xff) ^ (ulonglong)param_1) * 4) ^
              param_3 >> 8;
    param_1 = *param_4;
    param_4 = param_4 + 1;
  } while (param_1 != 0);
  *(uint *)(unaff_RDI + 8) = ~param_3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013cb20(longlong param_1,longlong param_2)
void FUN_18013cb20(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    param_2 = -1;
    do {
      param_2 = param_2 + 1;
    } while (*(char *)(param_1 + param_2) != '\0');
  }
  if (_DAT_180c8a9b0 != 0) {
    *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
  }
  uVar1 = func_0x000180120ce0(param_2 + 1,_DAT_180c8a9a8);
                    // WARNING: Subroutine does not return
  memcpy(uVar1,param_1,param_2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013cb34(longlong param_1,longlong param_2)
void FUN_18013cb34(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong unaff_RBX;
  longlong unaff_R13;
  
  if (param_2 == 0) {
    unaff_RBX = -1;
    do {
      unaff_RBX = unaff_RBX + 1;
    } while (*(char *)(param_1 + unaff_RBX) != '\0');
  }
  if (unaff_R13 != 0) {
    *(int *)(unaff_R13 + 0x3a8) = *(int *)(unaff_R13 + 0x3a8) + 1;
  }
  uVar1 = func_0x000180120ce0(unaff_RBX + 1,_DAT_180c8a9a8);
                    // WARNING: Subroutine does not return
  memcpy(uVar1,param_1,unaff_RBX);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013cbab(void)
void FUN_18013cbab(void)

{
  char *pcVar1;
  byte bVar2;
  char *pcVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
  longlong unaff_RBP;
  longlong unaff_RSI;
  byte *pbVar9;
  char *unaff_RDI;
  byte *pbVar10;
  char *unaff_R12;
  longlong in_stack_00000058;
  
  do {
    for (; (*unaff_RDI == '\n' || (pcVar3 = unaff_RDI, *unaff_RDI == '\r'));
        unaff_RDI = unaff_RDI + 1) {
    }
    for (; ((pcVar3 < unaff_R12 && (*pcVar3 != '\n')) && (*pcVar3 != '\r')); pcVar3 = pcVar3 + 1) {
    }
    *pcVar3 = '\0';
    if (*unaff_RDI != ';') {
      if (((*unaff_RDI == '[') && (unaff_RDI < pcVar3)) && (pcVar1 = pcVar3 + -1, pcVar3[-1] == ']')
         ) {
        pbVar9 = (byte *)(unaff_RDI + 1);
        *pcVar1 = '\0';
        puVar5 = (undefined1 *)memchr(pbVar9,0x5d,(longlong)pcVar1 - (longlong)pbVar9);
        if ((puVar5 == (undefined1 *)0x0) ||
           (lVar6 = memchr(puVar5 + 1,0x5b,(longlong)pcVar1 - (longlong)(puVar5 + 1)), lVar6 == 0))
        {
          pbVar9 = &UNK_180a06474;
        }
        else {
          *puVar5 = 0;
        }
        uVar4 = 0xffffffff;
        bVar2 = *pbVar9;
        while (bVar2 != 0) {
          pbVar10 = pbVar9 + 1;
          if (((bVar2 == 0x23) && (*pbVar10 == 0x23)) && (pbVar9[2] == 0x23)) {
            uVar4 = 0xffffffff;
          }
          uVar4 = *(uint *)(&UNK_18098d290 + ((ulonglong)(uVar4 & 0xff) ^ (ulonglong)bVar2) * 4) ^
                  uVar4 >> 8;
          pbVar9 = pbVar10;
          bVar2 = *pbVar10;
        }
        iVar7 = 0;
        if (0 < *(int *)(_DAT_180c8a9b0 + 0x2e18)) {
          puVar8 = (uint *)(*(longlong *)(_DAT_180c8a9b0 + 0x2e20) + 8);
          do {
            if (*puVar8 == ~uVar4) {
              unaff_RSI = (longlong)iVar7 * 0x30 + *(longlong *)(_DAT_180c8a9b0 + 0x2e20);
              if (unaff_RSI == 0) goto LAB_18013ccf1;
              unaff_RBP = (**(code **)(unaff_RSI + 0x10))();
              goto LAB_18013cd32;
            }
            iVar7 = iVar7 + 1;
            puVar8 = puVar8 + 0xc;
          } while (iVar7 < *(int *)(_DAT_180c8a9b0 + 0x2e18));
        }
        unaff_RSI = 0;
LAB_18013ccf1:
        unaff_RBP = 0;
      }
      else if ((unaff_RSI != 0) && (unaff_RBP != 0)) {
        (**(code **)(unaff_RSI + 0x18))();
      }
    }
LAB_18013cd32:
    unaff_RDI = pcVar3 + 1;
    if (unaff_R12 <= unaff_RDI) {
      if ((in_stack_00000058 != 0) && (_DAT_180c8a9b0 != 0)) {
        *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(in_stack_00000058,_DAT_180c8a9a8);
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013cd49(void)
void FUN_18013cd49(void)

{
  longlong unaff_R14;
  
  if ((unaff_R14 != 0) && (_DAT_180c8a9b0 != 0)) {
    *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
  }
                    // WARNING: Subroutine does not return
  FUN_180059ba0();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013cd62(void)
void FUN_18013cd62(void)

{
  if (_DAT_180c8a9b0 != 0) {
    *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
  }
                    // WARNING: Subroutine does not return
  FUN_180059ba0();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013cdb3(void)
void FUN_18013cdb3(void)

{
  char *pcVar1;
  byte bVar2;
  char *pcVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
  longlong unaff_RBP;
  byte *pbVar9;
  longlong unaff_RSI;
  char *unaff_RDI;
  byte *pbVar10;
  char *unaff_R12;
  longlong in_stack_00000058;
  
  do {
    unaff_RDI = unaff_RDI + 1;
    while ((*unaff_RDI != '\n' && (pcVar3 = unaff_RDI, *unaff_RDI != '\r'))) {
      for (; (pcVar3 < unaff_R12 && ((*pcVar3 != '\n' && (*pcVar3 != '\r')))); pcVar3 = pcVar3 + 1)
      {
      }
      *pcVar3 = '\0';
      if (*unaff_RDI != ';') {
        if (((*unaff_RDI == '[') && (unaff_RDI < pcVar3)) &&
           (pcVar1 = pcVar3 + -1, pcVar3[-1] == ']')) {
          pbVar9 = (byte *)(unaff_RDI + 1);
          *pcVar1 = '\0';
          puVar5 = (undefined1 *)memchr(pbVar9,0x5d,(longlong)pcVar1 - (longlong)pbVar9);
          if ((puVar5 == (undefined1 *)0x0) ||
             (lVar6 = memchr(puVar5 + 1,0x5b,(longlong)pcVar1 - (longlong)(puVar5 + 1)), lVar6 == 0)
             ) {
            pbVar9 = &UNK_180a06474;
          }
          else {
            *puVar5 = 0;
          }
          uVar4 = 0xffffffff;
          bVar2 = *pbVar9;
          while (bVar2 != 0) {
            pbVar10 = pbVar9 + 1;
            if (((bVar2 == 0x23) && (*pbVar10 == 0x23)) && (pbVar9[2] == 0x23)) {
              uVar4 = 0xffffffff;
            }
            uVar4 = *(uint *)(&UNK_18098d290 + ((ulonglong)(uVar4 & 0xff) ^ (ulonglong)bVar2) * 4) ^
                    uVar4 >> 8;
            pbVar9 = pbVar10;
            bVar2 = *pbVar10;
          }
          iVar7 = 0;
          if (0 < *(int *)(_DAT_180c8a9b0 + 0x2e18)) {
            puVar8 = (uint *)(*(longlong *)(_DAT_180c8a9b0 + 0x2e20) + 8);
            do {
              if (*puVar8 == ~uVar4) {
                unaff_RSI = (longlong)iVar7 * 0x30 + *(longlong *)(_DAT_180c8a9b0 + 0x2e20);
                if (unaff_RSI == 0) goto LAB_18013ccf1;
                unaff_RBP = (**(code **)(unaff_RSI + 0x10))();
                goto LAB_18013cd32;
              }
              iVar7 = iVar7 + 1;
              puVar8 = puVar8 + 0xc;
            } while (iVar7 < *(int *)(_DAT_180c8a9b0 + 0x2e18));
          }
          unaff_RSI = 0;
LAB_18013ccf1:
          unaff_RBP = 0;
        }
        else if ((unaff_RSI != 0) && (unaff_RBP != 0)) {
          (**(code **)(unaff_RSI + 0x18))();
        }
      }
LAB_18013cd32:
      unaff_RDI = pcVar3 + 1;
      if (unaff_R12 <= unaff_RDI) {
        if ((in_stack_00000058 != 0) && (_DAT_180c8a9b0 != 0)) {
          *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
        }
                    // WARNING: Subroutine does not return
        FUN_180059ba0(in_stack_00000058,_DAT_180c8a9a8);
      }
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013cdc0(longlong param_1)
void FUN_18013cdc0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uStackX_8;
  
  *(undefined4 *)(_DAT_180c8a9b0 + 0x2e04) = 0;
  if (param_1 != 0) {
    uStackX_8 = 0;
    uVar1 = FUN_18013ce40(&uStackX_8);
    lVar2 = FUN_180121300(param_1,&UNK_180a06794);
    if (lVar2 != 0) {
      fwrite(uVar1,1,uStackX_8,lVar2);
      fclose(lVar2);
    }
  }
  return;
}





// 函数: void FUN_18013cde7(void)
void FUN_18013cde7(void)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 in_stack_00000030;
  
  uVar1 = FUN_18013ce40();
  lVar2 = FUN_180121300();
  if (lVar2 != 0) {
    fwrite(uVar1,1,in_stack_00000030,lVar2);
    fclose(lVar2);
  }
  return;
}





