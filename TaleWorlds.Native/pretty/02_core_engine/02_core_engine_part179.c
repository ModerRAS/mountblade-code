#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part179.c - 核心引擎模块第179部分
// 本文件包含容器管理、字符串处理和资源管理相关功能

// 函数: 向容器中添加元素
// 原始函数: void FUN_180161eb0(longlong param_1,longlong param_2)
void container_add_element(longlong container_ptr, longlong element_ptr)
{
  longlong *buffer_end;
  longlong *buffer_start;
  longlong capacity;
  longlong *new_buffer;
  
  // 将元素关联到容器
  *(longlong *)(element_ptr + 0x48) = container_ptr;
  
  // 获取容器缓冲区信息
  buffer_end = *(longlong **)(container_ptr + 0x30);
  buffer_start = *(longlong **)(container_ptr + 0x28);
  
  // 计算当前元素数量
  capacity = (longlong)buffer_end - (longlong)buffer_start >> 3;
  
  // 如果缓冲区未满，直接添加元素
  if (buffer_end < *(longlong **)(container_ptr + 0x38)) {
    *(longlong **)(container_ptr + 0x30) = buffer_end + 1;
    *buffer_end = element_ptr;
    return;
  }
  
  // 计算新的缓冲区大小
  if (capacity == 0) {
    capacity = 1;
  }
  else {
    capacity = capacity * 2;
    if (capacity == 0) goto ALLOCATE_NEW_BUFFER;
  }
  
  // 分配新的缓冲区
  new_buffer = (longlong *)memory_allocate_from_pool(_GLOBAL_MEMORY_POOL, capacity * 8, *(char *)(container_ptr + 0x40));
  buffer_start = *(longlong **)(container_ptr + 0x28);
  buffer_end = *(longlong **)(container_ptr + 0x30);
  
ALLOCATE_NEW_BUFFER:
  // 复制现有元素到新缓冲区
  if (buffer_start != buffer_end) {
    memmove(new_buffer, buffer_start, (longlong)buffer_end - (longlong)buffer_start);
  }
  
  // 添加新元素
  *new_buffer = element_ptr;
  
  // 更新容器指针
  if (*(longlong *)(container_ptr + 0x28) == 0) {
    *(longlong **)(container_ptr + 0x28) = new_buffer;
    *(longlong **)(container_ptr + 0x38) = new_buffer + capacity;
    *(longlong **)(container_ptr + 0x30) = new_buffer + 1;
    return;
  }
  
  // 如果容器已有数据，调用错误处理
  handle_critical_error();
}

// 函数: 在容器中搜索匹配的元素
// 原始函数: longlong * FUN_180161f80(longlong param_1,longlong *param_2,longlong param_3)
longlong * container_search_elements(longlong container_ptr, longlong *result_array, longlong search_params)
{
  longlong *current_element;
  longlong element_count;
  longlong *new_buffer;
  char *search_string;
  uint string_length;
  longlong element_data;
  char *temp_buffer;
  uint temp_length;
  ulonglong buffer_size;
  ulonglong current_index;
  ulonglong max_capacity;
  uint result_capacity;
  
  max_capacity = 0xfffffffffffffffe;
  current_index = 0;
  
  // 初始化结果数组
  *result_array = 0;
  result_array[1] = 0;
  result_array[2] = 0;
  *(int *)(result_array + 3) = 3;
  result_capacity = 1;
  
  element_data = *(longlong *)(container_ptr + 0x28);
  buffer_size = current_index;
  
  // 遍历容器中的元素
  if (*(longlong *)(container_ptr + 0x30) - element_data >> 3 != 0) {
    do {
      ulonglong char_index = 0;
      element_data = *(longlong *)(element_data + current_index);
      
      // 准备临时缓冲区
      temp_buffer = (char *)0x0;
      temp_length = 0;
      
      // 获取元素的字符串数据
      string_buffer_init(&temp_buffer, *(int *)(element_data + 0x10));
      if (*(int *)(element_data + 0x10) != 0) {
        memcpy(temp_buffer, *(longlong *)(element_data + 8), *(int *)(element_data + 0x10) + 1);
      }
      
      // 处理字符串内容
      if (*(longlong *)(element_data + 8) != 0) {
        temp_length = 0;
        if (temp_buffer != (char *)0x0) {
          *temp_buffer = 0;
        }
        buffer_size = buffer_size & 0xffffffff;
      }
      
      // 转换字符串中的特殊字符
      if (temp_length != 0) {
        do {
          if ((byte)(temp_buffer[char_index] + 0xbf) < 0x1a) {
            temp_buffer[char_index] = temp_buffer[char_index] + ' ';
          }
          uint next_char = (int)char_index + 1;
          char_index = (ulonglong)next_char;
        } while (next_char < temp_length);
      }
      
      // 执行字符串搜索
      char *search_pattern = &GLOBAL_STRING_CONST;
      if (*(char **)(search_params + 8) != (char *)0x0) {
        search_pattern = *(char **)(search_params + 8);
      }
      
      char *source_string = &GLOBAL_STRING_CONST;
      if (temp_buffer != (char *)0x0) {
        source_string = temp_buffer;
      }
      
      longlong search_result = string_search(source_string, search_pattern, char_index, temp_buffer, result_capacity, max_capacity);
      
      // 如果找到匹配，添加到结果数组
      if (search_result != 0) {
        longlong *result_end = (longlong *)result_array[1];
        if (result_end < (longlong *)result_array[2]) {
          result_array[1] = (longlong)(result_end + 1);
          *result_end = element_data;
        }
        else {
          // 扩展结果数组
          element_count = (longlong)result_end - *result_array >> 3;
          if (element_count == 0) {
            element_count = 1;
EXPAND_RESULT_ARRAY:
            new_buffer = (longlong *)memory_allocate_from_pool(_GLOBAL_MEMORY_POOL, element_count * 8, (char)result_array[3]);
            result_end = (longlong *)result_array[1];
          }
          else {
            element_count = element_count * 2;
            if (element_count != 0) goto EXPAND_RESULT_ARRAY;
            new_buffer = (longlong *)0x0;
          }
          
          // 复制现有结果
          longlong *result_start = (longlong *)*result_array;
          if (result_start != result_end) {
            memmove(new_buffer, result_start, (longlong)result_end - (longlong)result_start);
          }
          
          // 添加新结果
          *new_buffer = element_data;
          if (*result_array != 0) {
            handle_critical_error();
          }
          
          // 更新结果数组指针
          *result_array = (longlong)new_buffer;
          result_array[1] = (longlong)(new_buffer + 1);
          result_array[2] = (longlong)(new_buffer + element_count);
        }
      }
      
      // 清理临时缓冲区
      temp_buffer = &GLOBAL_TEMP_BUFFER;
      if (temp_buffer != (char *)0x0) {
        release_temp_buffer();
      }
      
      uint next_element = (int)buffer_size + 1;
      current_index = current_index + 8;
      element_data = *(longlong *)(container_ptr + 0x28);
      buffer_size = (ulonglong)next_element;
    } while ((ulonglong)(longlong)(int)next_element < (ulonglong)(*(longlong *)(container_ptr + 0x30) - element_data >> 3));
  }
  
  return result_array;
}

// 函数: 递归处理容器元素
// 原始函数: void FUN_180162220(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)
void process_container_elements_recursive(longlong container_ptr, longlong output_buffer, char *input_string, longlong processing_flags)
{
  longlong string_length;
  ulonglong element_index;
  ulonglong current_index;
  uint element_count;
  char *temp_string;
  longlong temp_buffer;
  uint temp_length;
  ulonglong buffer_size;
  
  element_index = 0;
  temp_string = &GLOBAL_TEMP_BUFFER;
  temp_buffer = 0;
  temp_length = 0;
  
  // 处理输入字符串
  if (*(longlong *)(container_ptr + 0x48) == 0) {
    element_count = *(uint *)(input_string + 2);
    string_length = (ulonglong)element_count;
    
    if (input_string[1] != 0) {
      string_buffer_init(&temp_string, string_length);
    }
    
    if (element_count != 0) {
      memcpy(temp_buffer, input_string[1], string_length);
    }
    
    if (temp_buffer != 0) {
      *(char *)(string_length + temp_buffer) = 0;
    }
    
    // 处理字符串格式
    temp_string = CONCAT44(*(int *)((longlong)input_string + 0x1c), (int)temp_string);
    temp_length = 0;
    
PROCESS_STRING:
    if (*(int *)(container_ptr + 0x20) == 0) goto PROCESS_ELEMENTS;
  }
  else {
    // 处理复杂的字符串解析
    string_length = parse_complex_string(input_string, &temp_string, container_ptr, processing_flags, 0xfffffffffffffffe);
    
    if (temp_buffer != 0) {
      handle_critical_error();
    }
    
    temp_length = *(uint *)(string_length + 0x10);
    temp_buffer = *(longlong *)(string_length + 8);
    temp_string = *(ulonglong *)(string_length + 0x18);
    
    // 清理解析结果
    *(int *)(string_length + 0x10) = 0;
    *(longlong *)(string_length + 8) = 0;
    *(ulonglong *)(string_length + 0x18) = 0;
    
    temp_string = &GLOBAL_TEMP_BUFFER;
    if (temp_string != (char *)0x0) {
      release_temp_buffer();
    }
    
    temp_string = (char *)0x0;
    buffer_size = buffer_size & 0xffffffff00000000;
    temp_string = &GLOBAL_STRING_END_MARKER;
    
    if (*(int *)(container_ptr + 0x20) == 0) {
      string_buffer_init(&temp_string, temp_length + 1);
      *(char *)((ulonglong)temp_length + temp_buffer) = '.';
      *(char *)((ulonglong)(temp_length + 1) + temp_buffer) = 0;
      temp_length = temp_length + 1;
      goto PROCESS_STRING;
    }
  }
  
  // 检查输出缓冲区空间
  if (*(ulonglong *)(output_buffer + 8) < *(ulonglong *)(output_buffer + 0x10)) {
    *(ulonglong *)(output_buffer + 8) = *(ulonglong *)(output_buffer + 8) + 0x20;
    expand_output_buffer();
  }
  else {
    write_to_output_buffer(output_buffer, &temp_string);
  }
  
PROCESS_ELEMENTS:
  // 处理容器中的每个元素
  string_length = *(longlong *)(container_ptr + 0x28);
  string_length = element_index;
  
  if (*(longlong *)(container_ptr + 0x30) - string_length >> 3 != 0) {
    do {
      longlong element_data = *(longlong *)(element_index + string_length);
      temp_string = &GLOBAL_TEMP_BUFFER;
      buffer_size = 0;
      temp_string = (char *)0x0;
      element_count = 0;
      
      string_buffer_init(&temp_string, temp_length);
      
      if (temp_length != 0) {
        memcpy(temp_string, temp_buffer, temp_length + 1);
      }
      
      if (temp_buffer != 0) {
        element_count = 0;
        if (temp_string != (char *)0x0) {
          *temp_string = 0;
        }
        buffer_size = buffer_size & 0xffffffff;
      }
      
      // 递归处理子元素
      process_container_elements_recursive(element_data, output_buffer, &temp_string);
      
      uint next_element = (int)string_length + 1;
      element_index = element_index + 8;
      string_length = *(longlong *)(container_ptr + 0x28);
      string_length = (ulonglong)next_element;
    } while ((ulonglong)(longlong)(int)next_element < (ulonglong)(*(longlong *)(container_ptr + 0x30) - string_length >> 3));
  }
  
  // 清理资源
  temp_string = &GLOBAL_TEMP_BUFFER;
  if (temp_buffer == 0) {
    temp_buffer = 0;
    temp_string = temp_string & 0xffffffff00000000;
    temp_string = &GLOBAL_STRING_END_MARKER;
    *input_string = &GLOBAL_TEMP_BUFFER;
    
    if (input_string[1] == 0) {
      input_string[1] = 0;
      *(int *)(input_string + 3) = 0;
      *input_string = &GLOBAL_STRING_END_MARKER;
      return;
    }
    
    handle_critical_error();
  }
  
  handle_critical_error();
}

// 函数: 构建路径字符串
// 原始函数: undefined8 * FUN_1801624e0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)
char * build_path_string(longlong path_info, char *output_buffer, longlong param_3, longlong param_4)
{
  longlong parent_path;
  longlong path_segment;
  char *temp_buffer;
  longlong temp_string;
  int string_length;
  
  // 初始化输出缓冲区
  *output_buffer = &GLOBAL_STRING_END_MARKER;
  output_buffer[1] = 0;
  *(int *)(output_buffer + 2) = 0;
  *output_buffer = &GLOBAL_TEMP_BUFFER;
  output_buffer[3] = 0;
  output_buffer[1] = 0;
  *(int *)(output_buffer + 2) = 0;
  
  parent_path = *(longlong *)(path_info + 0x48);
  
  // 递归处理父路径
  if ((parent_path != 0) && (*(longlong *)(parent_path + 0x48) != 0)) {
    path_segment = build_path_string(parent_path, &temp_buffer, param_3, param_4, 1, 0xfffffffffffffffe);
    append_to_output_buffer(output_buffer, path_segment);
    
    temp_buffer = &GLOBAL_TEMP_BUFFER;
    if (temp_string != 0) {
      handle_critical_error();
    }
    
    temp_string = 0;
    string_length = 0;
    temp_buffer = &GLOBAL_STRING_END_MARKER;
    
    // 添加路径分隔符
    string_buffer_init(output_buffer, *(int *)(output_buffer + 2) + 1);
    *(char *)((ulonglong)*(uint *)(output_buffer + 2) + output_buffer[1]) = '.';
    *(char *)((ulonglong)(*(int *)(output_buffer + 2) + 1) + output_buffer[1]) = 0;
    *(int *)(output_buffer + 2) = *(int *)(output_buffer + 2) + 1;
  }
  
  // 添加当前路径段
  if (0 < *(int *)(path_info + 0x10)) {
    string_buffer_init(output_buffer, *(int *)(output_buffer + 2) + *(int *)(path_info + 0x10));
    memcpy((ulonglong)*(uint *)(output_buffer + 2) + output_buffer[1], *(longlong *)(path_info + 8), (longlong)(*(int *)(path_info + 0x10) + 1));
  }
  
  return output_buffer;
}

// 函数: 初始化全局变量表
// 原始函数: void FUN_180162600(void)
void initialize_global_variable_table(void)
{
  longlong *global_table_ptr;
  longlong table_handle;
  int table_size;
  char *table_name;
  longlong name_buffer;
  
  global_table_ptr = _GLOBAL_VARIABLE_TABLE;
  table_handle = 0xfffffffffffffffe;
  
  // 创建变量表
  table_handle = create_memory_table(_GLOBAL_MEMORY_POOL, 0x88, 8, 3);
  
  table_name = &GLOBAL_TEMP_BUFFER;
  name_buffer = 0;
  table_name = (char *)0x0;
  table_size = 0;
  
  // 创建表名
  name_buffer = (longlong *)memory_allocate_from_pool(_GLOBAL_MEMORY_POOL, 0x16, 0x13);
  *(char *)name_buffer = 0;
  table_name = name_buffer;
  
  table_size = calculate_string_hash(name_buffer);
  name_buffer = CONCAT44(name_buffer._4_4_, table_size);
  
  // 设置表名: "IVNIBLE_ROOT_TOOTEM"
  *name_buffer = 0x49564e49;  // "IVNI"
  name_buffer[1] = 0x4c424953;  // "LBIS"
  name_buffer[2] = 0x525f5f45;  // "R__E"
  name_buffer[3] = 0x5f544f4f;  // "_TOO"
  name_buffer[4] = 0x4554495f;  // "ETI_"
  *(short *)(name_buffer + 5) = 0x4d;  // "M"
  
  table_size = 0x15;
  
  // 注册变量表
  table_handle = register_variable_table(table_handle, &table_name);
  *global_table_ptr = table_handle;
  
  table_name = &GLOBAL_TEMP_BUFFER;
  release_temp_buffer(name_buffer);
}

// 函数: 创建默认资源路径
// 原始函数: undefined8 * FUN_180165950(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)
char * create_default_resource_path(longlong param_1, char *output_buffer, longlong param_3, longlong param_4)
{
  char *path_buffer;
  int path_length;
  longlong path_handle;
  
  path_handle = 0xfffffffffffffffe;
  path_length = 0;
  
  // 初始化资源系统
  initialize_resource_system();
  
  // 初始化输出缓冲区
  *output_buffer = &GLOBAL_STRING_END_MARKER;
  output_buffer[1] = 0;
  *(int *)(output_buffer + 2) = 0;
  *output_buffer = &GLOBAL_TEMP_BUFFER;
  output_buffer[3] = 0;
  output_buffer[1] = 0;
  *(int *)(output_buffer + 2) = 0;
  
  // 创建默认路径 "Done."
  string_buffer_init(output_buffer, 5, param_3, param_4, path_length, path_handle);
  path_buffer = (char *)output_buffer[1];
  *path_buffer = 0x656e6f44;  // "Done"
  *(short *)(path_buffer + 1) = 0x2e;  // "."
  *(int *)(output_buffer + 2) = 5;
  
  return output_buffer;
}

// 全局变量定义
longlong *_GLOBAL_VARIABLE_TABLE = (longlong *)0x180c868f8;  // 全局变量表指针
char *_GLOBAL_MEMORY_POOL = (char *)0x180c8ed18;            // 全局内存池
char *GLOBAL_STRING_CONST = (char *)0x18098bc73;             // 字符串常量
char *GLOBAL_TEMP_BUFFER = (char *)0x180a3c3e0;              // 临时缓冲区
char *GLOBAL_STRING_END_MARKER = (char *)0x18098bcb0;        // 字符串结束标记