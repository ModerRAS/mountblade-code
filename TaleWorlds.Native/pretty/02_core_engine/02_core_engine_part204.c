#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part204.c - 核心引擎内存管理和数据处理模块 (17个函数)

// 全局变量声明
extern uint64_t _DAT_180c8a9e0;    // 核心引擎数据结构指针
extern uint64_t _DAT_180bf00a8;    // 安全检查相关数据
extern int8_t UNK_180a3c3e0;     // 空字符串标记
extern int8_t UNK_18098bcb0;      // 字符串常量
extern int8_t UNK_180a0aa34;      // 格式化字符串
extern int8_t UNK_180a0abe0;      // 处理器标记
extern int8_t UNK_180a0ab70;      // 双参数标记
extern int8_t UNK_180a0aba8;      // 四参数标记
extern int8_t UNK_180a0ab00;      // 数组处理标记
extern int8_t UNK_180a0ab38;      // 结果处理标记
extern int8_t UNK_180a0ac88;      // 节点类型标记
extern int8_t UNK_180a0acd8;      // 链表类型标记
extern int8_t UNK_180a0ad28;      // 特殊处理标记
extern uint64_t _DAT_180c8ed18;    // 内存池标识
extern int8_t system_buffer_ptr;      // 默认字符串数据

/**
 * 清理链表结构的内存
 * 遍历链表节点，释放每个节点的内存，最后清理整个链表结构
 * 
 * @param context 上下文指针
 * @param param2 保留参数
 * @param param3 保留参数
 * @param param4 保留参数
 */
void cleanup_linked_list_memory(longlong context, uint64_t param2, uint64_t param3, uint64_t param_4)

{
  longlong *list_head;
  longlong current_node;
  longlong *next_node;
  longlong *node_ptr;
  uint64_t cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  list_head = (longlong *)(context + 0x28);
  current_node = *list_head;
  node_ptr = *(longlong **)(current_node + 8);
  
  // 检查是否需要遍历清理链表
  if (*(char *)((longlong)*(longlong **)(current_node + 8) + 0x19) == '\0') {
    do {
      // 调用清理函数处理每个节点
      FUN_1801885a0(list_head, node_ptr[2], param3, param4, cleanup_flag);
      next_node = (longlong *)*node_ptr;
      free(node_ptr, 0x28);
      node_ptr = next_node;
    } while (*(char *)((longlong)next_node + 0x19) == '\0');
    current_node = *list_head;
  }
  
  // 重置链表结构
  *(longlong *)(current_node + 8) = current_node;
  *(longlong *)*list_head = current_node;
  *(longlong *)(*list_head + 0x10) = current_node;
  *(uint64_t *)(context + 0x30) = 0;
  free(*list_head, 0x28);
  FUN_180067070(context + 8);
  return;
}





/**
 * 释放缓冲区内存
 * 安全地释放缓冲区内存并重置相关指针
 * 
 * @param buffer_ptr 缓冲区指针数组
 * @param param2 保留参数
 * @param param3 保留参数
 * @param param4 保留参数
 */
void free_buffer_memory(longlong *buffer_ptr, uint64_t param2, uint64_t param3, uint64_t param_4)

{
  longlong buffer_start;
  longlong buffer_end;
  ulonglong buffer_size;
  longlong actual_start;
  
  buffer_start = *buffer_ptr;
  if (buffer_start != 0) {
    buffer_size = buffer_ptr[2] - buffer_start & 0xfffffffffffffffc;
    actual_start = buffer_start;
    
    // 检查缓冲区大小是否超出限制
    if (0xfff < buffer_size) {
      actual_start = *(longlong *)(buffer_start + -8);
      if (0x1f < (buffer_start - actual_start) - 8U) {
        // 缓冲区大小验证失败
        _invalid_parameter_noinfo_noreturn(buffer_start - actual_start, buffer_size + 0x27, actual_start, param4, 0xfffffffffffffffe);
      }
    }
    free(actual_start);
    *buffer_ptr = 0;
    buffer_ptr[1] = 0;
    buffer_ptr[2] = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 格式化并处理字符串数据
 * 将输入的字符串数据进行格式化处理，并执行相关的清理和转换操作
 * 
 * @param context 上下文指针
 * @param data_ptr 数据指针数组
 */
void format_and_process_string_data(uint64_t context, uint64_t *data_ptr)

{
  longlong *engine_data;
  longlong security_check;
  uint64_t format_result;
  void *string_data;
  ulonglong buffer_size;
  longlong string_length;
  longlong data_length;
  int8_t security_buffer [32];
  longlong **temp_pointer;
  uint64_t cleanup_flag;
  uint64_t *output_data;
  int8_t temp_buffer [16];
  uint64_t buffer_capacity;
  uint64_t buffer_size_flag;
  longlong *format_data;
  uint64_t format_flag;
  void *temp_string;
  longlong temp_length;
  uint64_t temp_data;
  ulonglong alloc_size;
  void **string_pointer;
  ulonglong security_xor;
  
  engine_data = _DAT_180c8a9e0;
  cleanup_flag = 0xfffffffffffffffe;
  security_xor = _DAT_180bf00a8 ^ (ulonglong)security_buffer;
  output_data = data_ptr;
  if (*(longlong *)(_DAT_180c8a9e0 + 8) == 0) {
    *data_ptr = &UNK_180a3c3e0;
    if (data_ptr[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    data_ptr[1] = 0;
    *(int32_t *)(data_ptr + 3) = 0;
  }
  else {
    buffer_capacity = 0;
    buffer_size_flag = 0xf;
    temp_buffer[0] = 0;
    temp_pointer = &format_data;
    format_data = (longlong *)0x0;
    format_flag = 0;
    format_data = (longlong *)FUN_180188490();
    string_data = &system_buffer_ptr;
    if ((void *)data_ptr[1] != (void *)0x0) {
      string_data = (void *)data_ptr[1];
    }
    string_length = -1;
    data_length = -1;
    do {
      data_length = data_length + 1;
    } while (string_data[data_length] != '\0');
    FUN_1800671b0(temp_buffer);
    string_data = &system_buffer_ptr;
    if ((void *)data_ptr[1] != (void *)0x0) {
      string_data = (void *)data_ptr[1];
    }
    temp_data = 0;
    alloc_size = 0xf;
    temp_string = (void *)((ulonglong)temp_string & 0xffffffffffffff00);
    FUN_1800671b0(&temp_string,&UNK_180a0aa34,5);
    format_result = FUN_180187f00(&format_data,&temp_string);
    do {
      string_length = string_length + 1;
    } while (string_data[string_length] != '\0');
    FUN_1800671b0(format_result,string_data,string_length);
    if (0xf < alloc_size) {
      buffer_size = alloc_size + 1;
      string_data = temp_string;
      if (0xfff < buffer_size) {
        buffer_size = alloc_size + 0x28;
        string_data = *(void **)(temp_string + -8);
        if ((void *)0x1f < temp_string + (-8 - (longlong)string_data)) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(string_data,buffer_size);
    }
    temp_data = 0;
    alloc_size = 0xf;
    engine_data = *(longlong **)(engine_data + 8);
    temp_pointer = (longlong **)&temp_string;
    temp_string = &UNK_180a0abe0;
    temp_length = engine_data;
    string_pointer = &temp_string;
    (**(code **)(*engine_data + 0x18))(engine_data,temp_buffer,&temp_string,0);
    engine_data = format_data;
    temp_pointer = &format_data;
    FUN_1801884d0(&format_data,format_data[1]);
    format_data[1] = (longlong)engine_data;
    *format_data = (longlong)engine_data;
    format_data[2] = (longlong)engine_data;
    format_flag = 0;
    free(format_data,0x60);
    FUN_180067070(temp_buffer);
    *data_ptr = &UNK_180a3c3e0;
    if (data_ptr[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    data_ptr[1] = 0;
    *(int32_t *)(data_ptr + 3) = 0;
  }
  *data_ptr = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(security_xor ^ (ulonglong)security_buffer);
}





/**
 * 重置数据结构并释放内存
 * 重置指定的数据结构，释放相关内存并清理资源
 * 
 * @param data_context 数据上下文指针
 * @param param2 保留参数
 * @param param3 保留参数
 * @param param4 保留参数
 */
void reset_data_structure_and_free_memory(longlong data_context, uint64_t param2, uint64_t param3, uint64_t param4)

{
  longlong *data_pointer;
  longlong current_data;
  
  data_pointer = (longlong *)(data_context + 0x20);
  current_data = *data_pointer;
  FUN_1801884d0(data_pointer,*(uint64_t *)(current_data + 8),param3,param4,0xfffffffffffffffe);
  *(longlong *)(*data_pointer + 8) = current_data;
  *(longlong *)*data_pointer = current_data;
  *(longlong *)(*data_pointer + 0x10) = current_data;
  *(uint64_t *)(data_context + 0x28) = 0;
  free(*data_pointer,0x60);
  FUN_180067070(data_context);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 处理双参数数据格式化
 * 对两个输入参数进行数据格式化处理，执行相关的字符串操作和内存管理
 * 
 * @param context 上下文指针
 * @param first_data 第一个数据指针
 * @param second_data 第二个数据指针
 */
void process_dual_parameter_formatting(uint64_t context, uint64_t *first_data, uint64_t *second_data)

{
  longlong *engine_data;
  longlong security_check;
  void *string_data;
  longlong first_length;
  longlong second_length;
  int8_t security_buffer [32];
  uint64_t cleanup_flag;
  uint64_t *output_first;
  uint64_t *output_second;
  void **format_pointer;
  void *format_data;
  longlong engine_context;
  void **temp_pointer;
  int8_t first_buffer [16];
  uint64_t first_capacity;
  uint64_t first_size;
  int8_t second_buffer [16];
  uint64_t second_capacity;
  uint64_t second_size;
  ulonglong security_xor;
  
  engine_data = _DAT_180c8a9e0;
  cleanup_flag = 0xfffffffffffffffe;
  security_xor = _DAT_180bf00a8 ^ (ulonglong)security_buffer;
  output_first = first_data;
  output_second = second_data;
  if (*(longlong *)(_DAT_180c8a9e0 + 8) == 0) {
    *first_data = &UNK_180a3c3e0;
    if (first_data[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    first_data[1] = 0;
    *(int32_t *)(first_data + 3) = 0;
    *first_data = &UNK_18098bcb0;
    *second_data = &UNK_180a3c3e0;
    if (second_data[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    second_data[1] = 0;
    *(int32_t *)(second_data + 3) = 0;
  }
  else {
    first_capacity = 0;
    first_size = 0xf;
    first_buffer[0] = 0;
    second_capacity = 0;
    second_size = 0xf;
    second_buffer[0] = 0;
    string_data = &system_buffer_ptr;
    if ((void *)second_data[1] != (void *)0x0) {
      string_data = (void *)second_data[1];
    }
    second_length = -1;
    first_length = -1;
    do {
      second_length = second_length + 1;
    } while (string_data[second_length] != '\0');
    FUN_1800671b0(first_buffer);
    string_data = &system_buffer_ptr;
    if ((void *)first_data[1] != (void *)0x0) {
      string_data = (void *)first_data[1];
    }
    do {
      first_length = first_length + 1;
    } while (string_data[first_length] != '\0');
    FUN_1800671b0(second_buffer,string_data,first_length);
    engine_data = *(longlong **)(engine_data + 8);
    format_pointer = &format_data;
    format_data = &UNK_180a0ab70;
    engine_context = engine_data;
    temp_pointer = &format_data;
    (**(code **)(*engine_data + 0x28))(engine_data,first_buffer,&format_data,0);
    FUN_180067070(second_buffer);
    FUN_180067070(first_buffer);
    *first_data = &UNK_180a3c3e0;
    if (first_data[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    first_data[1] = 0;
    *(int32_t *)(first_data + 3) = 0;
    *first_data = &UNK_18098bcb0;
    *second_data = &UNK_180a3c3e0;
    if (second_data[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    second_data[1] = 0;
    *(int32_t *)(second_data + 3) = 0;
  }
  *second_data = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(security_xor ^ (ulonglong)security_buffer);
}





/**
 * 释放对象内存资源
 * 释放指定对象的内存资源，包括主要对象和相关联的内存区域
 * 
 * @param object_ptr 对象指针
 */
void release_object_memory_resources(longlong object_ptr)

{
  FUN_180067070(object_ptr + 0x20);
  FUN_180067070(object_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 处理四参数数据格式化
 * 对四个输入参数进行数据格式化处理，包括两个数据指针和两个整型参数
 * 
 * @param context 上下文指针
 * @param first_data 第一个数据指针
 * @param second_data 第二个数据指针
 * @param first_param 第一个整型参数
 * @param second_param 第二个整型参数
 */
void process_quad_parameter_formatting(uint64_t context, uint64_t *first_data, uint64_t *second_data, int32_t first_param,
                                       int32_t second_param)

{
  longlong *engine_data;
  longlong security_check;
  void *string_data;
  longlong first_length;
  longlong second_length;
  int8_t security_buffer [32];
  uint64_t cleanup_flag;
  uint64_t *output_first;
  uint64_t *output_second;
  void **format_pointer;
  void *format_data;
  longlong engine_context;
  void **temp_pointer;
  int8_t first_buffer [16];
  uint64_t first_capacity;
  uint64_t first_size;
  int8_t second_buffer [16];
  uint64_t second_capacity;
  uint64_t second_size;
  int32_t param1_value;
  int32_t param2_value;
  ulonglong security_xor;
  
  engine_data = _DAT_180c8a9e0;
  cleanup_flag = 0xfffffffffffffffe;
  security_xor = _DAT_180bf00a8 ^ (ulonglong)security_buffer;
  output_first = first_data;
  output_second = second_data;
  if (*(longlong *)(_DAT_180c8a9e0 + 8) == 0) {
    *first_data = &UNK_180a3c3e0;
    if (first_data[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    first_data[1] = 0;
    *(int32_t *)(first_data + 3) = 0;
    *first_data = &UNK_18098bcb0;
    *second_data = &UNK_180a3c3e0;
    if (second_data[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    second_data[1] = 0;
    *(int32_t *)(second_data + 3) = 0;
  }
  else {
    first_capacity = 0;
    first_size = 0xf;
    first_buffer[0] = 0;
    second_capacity = 0;
    second_size = 0xf;
    second_buffer[0] = 0;
    param2_value = second_param;
    string_data = &system_buffer_ptr;
    if ((void *)second_data[1] != (void *)0x0) {
      string_data = (void *)second_data[1];
    }
    second_length = -1;
    first_length = -1;
    do {
      second_length = second_length + 1;
    } while (string_data[second_length] != '\0');
    param1_value = first_param;
    FUN_1800671b0(first_buffer);
    string_data = &system_buffer_ptr;
    if ((void *)first_data[1] != (void *)0x0) {
      string_data = (void *)first_data[1];
    }
    do {
      first_length = first_length + 1;
    } while (string_data[first_length] != '\0');
    FUN_1800671b0(second_buffer,string_data,first_length);
    engine_data = *(longlong **)(engine_data + 8);
    format_pointer = &format_data;
    format_data = &UNK_180a0aba8;
    engine_context = engine_data;
    temp_pointer = &format_data;
    (**(code **)(*engine_data + 0x30))(engine_data,first_buffer,&format_data,0);
    FUN_180067070(second_buffer);
    FUN_180067070(first_buffer);
    *first_data = &UNK_180a3c3e0;
    if (first_data[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    first_data[1] = 0;
    *(int32_t *)(first_data + 3) = 0;
    *first_data = &UNK_18098bcb0;
    *second_data = &UNK_180a3c3e0;
    if (second_data[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    second_data[1] = 0;
    *(int32_t *)(second_data + 3) = 0;
  }
  *second_data = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(security_xor ^ (ulonglong)security_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 处理数组数据格式化
 * 对数组数据进行格式化处理，遍历数组元素并执行相关的字符串操作
 * 
 * @param context 上下文指针
 * @param array_data 数组数据指针
 * @param array_size 数组大小
 */
void process_array_data_formatting(uint64_t context, longlong array_data, ulonglong array_size)

{
  longlong *engine_data;
  longlong security_check;
  void **array_start;
  void **array_current;
  ulonglong array_index;
  longlong string_length;
  int8_t security_buffer [32];
  void **array_head;
  void **array_tail;
  void **array_end;
  void **array_temp;
  uint64_t cleanup_flag;
  void *temp_string;
  longlong engine_context;
  uint64_t temp_capacity;
  uint64_t temp_size;
  uint64_t temp_data;
  void **format_pointer;
  ulonglong security_xor;
  
  engine_data = _DAT_180c8a9e0;
  cleanup_flag = 0xfffffffffffffffe;
  security_xor = _DAT_180bf00a8 ^ (ulonglong)security_buffer;
  if (*(longlong *)(_DAT_180c8a9e0 + 8) != 0) {
    array_head = (void **)0x0;
    array_tail = (void **)0x0;
    array_index = 0;
    array_end = (void **)0x0;
    if (array_size != 0) {
      do {
        temp_capacity = 0;
        temp_size = 0xf;
        temp_string = (void *)((ulonglong)temp_string & 0xffffffffffffff00);
        temp_data = 0;
        string_length = -1;
        do {
          string_length = string_length + 1;
        } while (*(char *)(*(longlong *)(array_data + array_index * 8) + string_length) != '\0');
        FUN_1800671b0(&temp_string);
        array_current = array_tail;
        if (array_end == array_tail) {
          FUN_180188f60(&array_head,array_tail,&temp_string);
        }
        else {
          array_temp = array_tail;
          FUN_18018b350(array_tail,&temp_string);
          *(int32_t *)(array_current + 4) = (int32_t)temp_data;
          *(int32_t *)((longlong)array_current + 0x24) = temp_data._4_4_;
          array_tail = array_tail + 5;
        }
        FUN_180067070(&temp_string);
        array_index = array_index + 1;
      } while (array_index < array_size);
    }
    engine_data = *(longlong **)(engine_data + 8);
    array_temp = &temp_string;
    temp_string = &UNK_180a0ab00;
    engine_context = engine_data;
    format_pointer = &temp_string;
    (**(code **)(*engine_data + 0x38))(engine_data,&array_head,&temp_string,0);
    array_start = array_tail;
    array_current = array_head;
    if (array_head != (void **)0x0) {
      for (; array_temp = array_current, array_current != array_start; array_current = array_current + 5) {
        FUN_180067070(array_current);
      }
      array_index = (((longlong)array_end - (longlong)array_head) / 0x28) * 0x28;
      array_current = array_head;
      if (0xfff < array_index) {
        array_index = array_index + 0x27;
        array_current = (void **)array_head[-1];
        if (0x1f < (ulonglong)((longlong)array_head + (-8 - (longlong)array_current))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(array_current,array_index);
      array_head = (void **)0x0;
      array_tail = (void **)0x0;
      array_end = (void **)0x0;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(security_xor ^ (ulonglong)security_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化内存池结构
 * 初始化核心引擎的内存池结构，分配内存并进行初始化设置
 * 
 */
void initialize_memory_pool_structure(void)

{
  longlong pool_memory;
  
  pool_memory = FUN_18062b1e0(_DAT_180c8ed18,0x88,8,3,0xfffffffffffffffe);
                    // WARNING: Subroutine does not return
  memset(pool_memory + 0x14,0,0x74);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 从字符串映射中删除指定条目
 * 在字符串映射结构中查找并删除指定的字符串条目，执行内存清理操作
 * 
 * @param context 上下文指针
 * @param string_data 字符串数据指针
 */
void remove_entry_from_string_map(uint64_t context, uint64_t *string_data)

{
  byte *current_char;
  int target_length;
  int entry_length;
  uint64_t *map_entry;
  uint64_t *map_end;
  longlong engine_data;
  byte *entry_string;
  int compare_result;
  uint64_t *map_start;
  longlong string_offset;
  
  engine_data = _DAT_180c8a9e0;
  map_start = *(uint64_t **)(_DAT_180c8a9e0 + 0x18);
  if (map_start != *(uint64_t **)(_DAT_180c8a9e0 + 0x20)) {
    target_length = *(int *)(string_data + 2);
    do {
      map_entry = (uint64_t *)*map_start;
      entry_length = *(int *)(map_entry + 2);
      compare_result = target_length;
      if (entry_length == target_length) {
        if (entry_length != 0) {
          entry_string = (byte *)map_entry[1];
          string_offset = string_data[1] - (longlong)entry_string;
          do {
            current_char = entry_string + string_offset;
            compare_result = (uint)*entry_string - (uint)*current_char;
            if (compare_result != 0) break;
            entry_string = entry_string + 1;
          } while (*current_char != 0);
        }
ENTRY_FOUND:
        if (compare_result == 0) {
          if (map_entry != (uint64_t *)0x0) {
            if (map_entry[0xd] != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            map_entry[4] = &UNK_180a3c3e0;
            if (map_entry[5] == 0) {
              map_entry[5] = 0;
              *(int32_t *)(map_entry + 7) = 0;
              map_entry[4] = &UNK_18098bcb0;
              *map_entry = &UNK_180a3c3e0;
              if (map_entry[1] == 0) {
                map_entry[1] = 0;
                *(int32_t *)(map_entry + 3) = 0;
                *map_entry = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
                FUN_18064e900(map_entry);
              }
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *map_start = 0;
          map_entry = map_start + 1;
          map_end = *(uint64_t **)(engine_data + 0x20);
          if (map_entry < map_end) {
                    // WARNING: Subroutine does not return
            memmove(map_start,map_entry,(longlong)map_end - (longlong)map_entry,target_length,0xfffffffffffffffe);
          }
          *(uint64_t **)(engine_data + 0x20) = map_end + -1;
          break;
        }
      }
      else if (entry_length == 0) goto ENTRY_FOUND;
      map_start = map_start + 1;
    } while (map_start != *(uint64_t **)(_DAT_180c8a9e0 + 0x20));
  }
  FUN_180187390(engine_data,&UNK_180a0aa34);
  *string_data = &UNK_180a3c3e0;
  if (string_data[1] == 0) {
    string_data[1] = 0;
    *(int32_t *)(string_data + 3) = 0;
    *string_data = &UNK_18098bcb0;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 处理字符串映射数据结构
 * 对字符串映射数据结构进行复杂的数据处理，包括字符串比较、内存分配和结果处理
 * 
 * @param map_ptr 映射结构指针
 * @param search_key 搜索键值
 */
void process_string_map_structure(void **map_ptr, longlong search_key)

{
  ulonglong compare_size;
  int8_t *string_buffer;
  int compare_result;
  uint64_t *node_data;
  uint64_t ref_count;
  uint64_t *string_ptr;
  int8_t *target_string;
  ulonglong buffer_size;
  uint64_t *current_node;
  uint64_t **node_iterator;
  longlong string_length;
  longlong node_offset;
  ulonglong min_size;
  ulonglong max_size;
  int8_t security_buffer [32];
  uint64_t process_result;
  uint64_t **iterator_start;
  uint64_t **iterator_current;
  ulonglong match_count;
  uint64_t *result_data;
  void **map_pointer;
  int8_t *match_string;
  longlong key_length;
  uint64_t cleanup_flag;
  void *temp_data;
  void **temp_pointer;
  uint64_t data_capacity;
  uint64_t data_size;
  int8_t is_found;
  uint64_t found_data;
  uint64_t *search_node;
  void **node_pointer;
  int8_t temp_string;
  uint8_t temp_padding;
  ulonglong temp_capacity;
  ulonglong temp_size;
  longlong result_start;
  longlong result_end;
  longlong result_capacity;
  int8_t key_buffer [16];
  uint64_t key_capacity;
  uint64_t key_size;
  ulonglong security_xor;
  
  cleanup_flag = 0xfffffffffffffffe;
  security_xor = _DAT_180bf00a8 ^ (ulonglong)security_buffer;
  current_node = (uint64_t *)*map_ptr;
  map_pointer = map_ptr;
  key_length = search_key;
  if ((current_node != (uint64_t *)0x0) &&
     (((longlong)map_ptr[4] - (longlong)map_ptr[3] & 0xfffffffffffffff8U) != 0)) {
    node_data = (uint64_t *)FUN_1808fc418(0x10);
    *node_data = &UNK_180a0ac88;
    *node_data = &UNK_180a0acd8;
    ref_count = 0;
    result_data = node_data;
    if (current_node != (uint64_t *)0x0) {
      if ((void *)*current_node == &UNK_180a0ad28) {
        ref_count = current_node[1];
      }
      else {
        ref_count = (**(code **)((void *)*current_node + 0x20))(current_node);
      }
    }
    node_data[1] = ref_count;
    current_node = (uint64_t *)map_ptr[1];
    map_ptr[1] = (void *)node_data;
    if (current_node != (uint64_t *)0x0) {
      (**(code **)*current_node)(current_node,1);
    }
    result_start = 0;
    result_end = 0;
    result_capacity = 0;
    key_capacity = 0;
    key_size = 0xf;
    key_buffer[0] = 0;
    string_length = -1;
    do {
      string_length = string_length + 1;
    } while (*(char *)(search_key + string_length) != '\0');
    FUN_1800671b0(key_buffer,search_key);
    for (node_iterator = (uint64_t **)map_ptr[3]; iterator_current = node_iterator,
        node_iterator != (uint64_t **)map_ptr[4]; node_iterator = (uint64_t **)((longlong *)node_iterator + 1))
    {
      data_capacity = 0;
      data_size = 0xf;
      temp_data = (void *)((ulonglong)temp_data & 0xffffffffffffff00);
      is_found = 1;
      found_data = 0;
      iterator_start = &search_node;
      search_node = (uint64_t *)0x0;
      node_pointer = (void **)0x0;
      search_node = (uint64_t *)FUN_180188490();
      string_length = -1;
      do {
        string_length = string_length + 1;
      } while (*(char *)(*(longlong *)((longlong)*node_iterator + 0x40) + string_length) != '\0');
      FUN_1800671b0(&temp_data);
      string_length = (longlong)*node_iterator;
      is_found = *(int8_t *)(string_length + 0x48);
      found_data = *(uint64_t *)(string_length + 0x4c);
      match_count = 0;
      if (*(longlong *)(string_length + 0x60) != 0) {
        iterator_start = (uint64_t **)0x0;
        do {
          string_length = *(longlong *)(*(longlong *)(string_length + 0x58) + 8 + (longlong)iterator_start);
          temp_capacity = 0;
          temp_size = 0xf;
          temp_string = 0;
          node_offset = -1;
          do {
            node_offset = node_offset + 1;
          } while (*(char *)(search_key + node_offset) != '\0');
          FUN_1800671b0(&temp_string,search_key);
          max_size = temp_size;
          buffer_size = temp_capacity;
          current_node = search_node;
          if (*(char *)((longlong)search_node[1] + 0x19) == '\0') {
            string_buffer = (int8_t *)CONCAT71(temp_padding,temp_string);
            node_data = (uint64_t *)search_node[1];
            do {
              string_ptr = node_data + 4;
              target_string = &temp_string;
              if (0xf < max_size) {
                target_string = string_buffer;
              }
              compare_size = node_data[6];
              if (0xf < (ulonglong)node_data[7]) {
                string_ptr = (uint64_t *)*string_ptr;
              }
              min_size = compare_size;
              if (buffer_size < compare_size) {
                min_size = buffer_size;
              }
              compare_result = memcmp(string_ptr,target_string,min_size);
              if (compare_result == 0) {
                if (compare_size < buffer_size) goto INSERT_LEFT;
TRAVERSE_RIGHT:
                string_ptr = (uint64_t *)*node_data;
                current_node = node_data;
              }
              else {
                if (-1 < compare_result) goto TRAVERSE_RIGHT;
INSERT_LEFT:
                string_ptr = (uint64_t *)node_data[2];
              }
              node_data = string_ptr;
            } while (*(char *)((longlong)string_ptr + 0x19) == '\0');
            if (current_node == search_node) goto INSERT_NEW;
            node_data = current_node + 4;
            compare_size = current_node[6];
            if (0xf < (ulonglong)current_node[7]) {
              node_data = (uint64_t *)*node_data;
            }
            target_string = &temp_string;
            if (0xf < max_size) {
              target_string = string_buffer;
            }
            max_size = buffer_size;
            if (compare_size < buffer_size) {
              max_size = compare_size;
            }
            compare_result = memcmp(target_string,node_data,max_size);
            if (compare_result == 0) {
              if (buffer_size < compare_size) goto INSERT_NEW;
            }
            else if (compare_result < 0) goto INSERT_NEW;
          }
          else {
INSERT_NEW:
            match_string = &temp_string;
            process_result = FUN_18018a130(&search_node);
            FUN_18018a1c0(&search_node,&result_data,current_node);
            current_node = result_data;
          }
          node_offset = -1;
          do {
            node_offset = node_offset + 1;
          } while (*(char *)(node_offset + string_length) != '\0');
          FUN_1800671b0(current_node + 8,string_length);
          if (0xf < temp_size) {
            if (0xfff < temp_size + 1) {
              string_length = *(longlong *)(CONCAT71(temp_padding,temp_string) + -8);
              if (0x1f < (CONCAT71(temp_padding,temp_string) - string_length) - 8U) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn(string_length,temp_size + 0x28);
              }
            }
            free();
          }
          temp_capacity = 0;
          temp_size = 0xf;
          temp_string = 0;
          match_count = match_count + 1;
          iterator_start = iterator_start + 2;
          string_length = (longlong)*iterator_current;
          search_key = key_length;
          node_iterator = iterator_current;
          map_ptr = map_pointer;
        } while (match_count < *(ulonglong *)(string_length + 0x60));
      }
      if (result_capacity == result_end) {
        FUN_1801891f0(&result_start,result_end,&temp_data);
      }
      else {
        FUN_180189190();
        result_end = result_end + 0x40;
      }
      current_node = search_node;
      iterator_current = &search_node;
      FUN_1801884d0(&search_node,search_node[1]);
      search_node[1] = current_node;
      *search_node = current_node;
      search_node[2] = current_node;
      node_pointer = (void **)0x0;
      free(search_node,0x60);
      FUN_180067070(&temp_data);
    }
    map_pointer = &temp_data;
    temp_data = &UNK_180a0ab38;
    node_pointer = &temp_data;
    temp_pointer = map_ptr;
    (**(code **)(*(longlong *)map_ptr[1] + 8))(map_ptr[1],&result_start,&temp_data,0);
    FUN_180067070(key_buffer);
    node_offset = result_end;
    string_length = result_start;
    if (result_start != 0) {
      for (; string_length != node_offset; string_length = string_length + 0x40) {
        FUN_180187950(string_length);
      }
      buffer_size = result_capacity - result_start & 0xffffffffffffffc0;
      string_length = result_start;
      if (0xfff < buffer_size) {
        buffer_size = buffer_size + 0x27;
        string_length = *(longlong *)(result_start + -8);
        if (0x1f < (result_start - string_length) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(string_length,buffer_size);
      result_start = 0;
      result_end = 0;
      result_capacity = 0;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(security_xor ^ (ulonglong)security_buffer);
}





/**
 * 释放数组块内存
 * 释放数组块的内存资源，遍历所有块并执行清理操作
 * 
 * @param array_ptr 数组指针
 */
void release_array_block_memory(longlong *array_ptr)

{
  longlong current_block;
  longlong end_block;
  
  FUN_180067070(array_ptr + 3);
  current_block = *array_ptr;
  if (current_block != 0) {
    end_block = array_ptr[1];
    if (current_block != end_block) {
      do {
        FUN_180187950(current_block);
        current_block = current_block + 0x40;
      } while (current_block != end_block);
      current_block = *array_ptr;
    }
    end_block = current_block;
    if ((0xfff < (array_ptr[2] - current_block & 0xffffffffffffffc0U)) &&
       (end_block = *(longlong *)(current_block + -8), 0x1f < (current_block - end_block) - 8U)) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(end_block);
    *array_ptr = 0;
    array_ptr[1] = 0;
    array_ptr[2] = 0;
  }
  return;
}





/**
 * 清理数据块资源
 * 清理指定的数据块资源，重置相关指针并释放内存
 * 
 * @param block_ptr 数据块指针
 * @param param2 保留参数
 * @param param3 保留参数
 * @param param4 保留参数
 */
void cleanup_data_block_resources(longlong block_ptr, uint64_t param2, uint64_t param3, uint64_t param4)

{
  longlong *data_pointer;
  longlong current_data;
  
  data_pointer = (longlong *)(block_ptr + 0x30);
  current_data = *data_pointer;
  FUN_1801884d0(data_pointer,*(uint64_t *)(current_data + 8),param3,param4,0xfffffffffffffffe);
  *(longlong *)(*data_pointer + 8) = current_data;
  *(longlong *)*data_pointer = current_data;
  *(longlong *)(*data_pointer + 0x10) = current_data;
  *(uint64_t *)(block_ptr + 0x38) = 0;
  free(*data_pointer,0x60);
  FUN_180067070(block_ptr);
  return;
}





/**
 * 释放对象实例内存
 * 释放对象实例的内存资源，清理相关联的数据结构
 * 
 * @param object_ptr 对象指针
 * @param param2 保留参数
 * @param param3 保留参数
 * @param param4 保留参数
 */
void release_object_instance_memory(longlong *object_ptr, uint64_t param2, uint64_t param3, uint64_t param4)

{
  longlong *instance_data;
  
  object_ptr = (longlong *)*object_ptr;
  if (object_ptr != (longlong *)0x0) {
    instance_data = (longlong *)object_ptr[7];
    if (instance_data != (longlong *)0x0) {
      (**(code **)(*instance_data + 0x20))(instance_data,instance_data != object_ptr,param3,param4,0xfffffffffffffffe);
      object_ptr[7] = 0;
    }
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
    free(object_ptr,0x48);
    return;
  }
  return;
}





/**
 * 释放16字节对齐的内存
 * 释放16字节对齐的内存块，执行内存大小验证和清理操作
 * 
 * @param memory_ptr 内存指针
 * @param param2 保留参数
 * @param param3 保留参数
 * @param param4 保留参数
 */
void release_16byte_aligned_memory(longlong *memory_ptr, uint64_t param2, uint64_t param3, uint64_t param4)

{
  longlong memory_start;
  longlong actual_start;
  ulonglong memory_size;
  
  memory_start = *memory_ptr;
  if (memory_start != 0) {
    memory_size = memory_ptr[2] - memory_start & 0xfffffffffffffff0;
    actual_start = memory_start;
    if (0xfff < memory_size) {
      actual_start = *(longlong *)(memory_start + -8);
      if (0x1f < (memory_start - actual_start) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn
                  (memory_start - actual_start,memory_size + 0x27,actual_start,param4,0xfffffffffffffffe);
      }
    }
    free(actual_start);
    *memory_ptr = 0;
    memory_ptr[1] = 0;
    memory_ptr[2] = 0;
  }
  return;
}





/**
 * 释放24字节对齐的数组内存
 * 释放24字节对齐的数组内存，先执行清理操作再释放内存
 * 
 * @param array_ptr 数组指针
 * @param param2 保留参数
 * @param param3 保留参数
 * @param param4 保留参数
 */
void release_24byte_aligned_array_memory(longlong *array_ptr, uint64_t param2, uint64_t param3, uint64_t param4)

{
  longlong array_start;
  longlong actual_start;
  ulonglong array_size;
  
  if (*array_ptr != 0) {
    FUN_180189900(*array_ptr,array_ptr[1],param3,param4,0xfffffffffffffffe);
    array_start = *array_ptr;
    array_size = ((array_ptr[2] - array_start) / 0x18) * 0x18;
    actual_start = array_start;
    if (0xfff < array_size) {
      actual_start = *(longlong *)(array_start + -8);
      if (0x1f < (array_start - actual_start) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(array_start - actual_start,array_size + 0x27);
      }
    }
    free(actual_start);
    *array_ptr = 0;
    array_ptr[1] = 0;
    array_ptr[2] = 0;
  }
  return;
}





/**
 * 释放40字节对齐的数组内存
 * 释放40字节对齐的数组内存，执行内存大小验证和清理操作
 * 
 * @param array_ptr 数组指针
 * @param param2 保留参数
 * @param param3 保留参数
 * @param param4 保留参数
 */
void release_40byte_aligned_array_memory(longlong *array_ptr, uint64_t param2, uint64_t param3, uint64_t param4)

{
  longlong array_start;
  longlong actual_start;
  ulonglong array_size;
  
  array_start = *array_ptr;
  if (array_start != 0) {
    array_size = ((array_ptr[2] - array_start) / 0x28) * 0x28;
    actual_start = array_start;
    if (0xfff < array_size) {
      actual_start = *(longlong *)(array_start + -8);
      if (0x1f < (array_start - actual_start) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn
                  (array_start - actual_start,array_size + 0x27,actual_start,param4,0xfffffffffffffffe);
      }
    }
    free(actual_start);
    *array_ptr = 0;
    array_ptr[1] = 0;
    array_ptr[2] = 0;
  }
  return;
}





