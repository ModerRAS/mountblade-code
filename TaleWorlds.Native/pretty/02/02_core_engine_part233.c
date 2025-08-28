#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part233.c - 核心引擎堆排序和字符串处理模块
// 包含8个函数，主要处理堆排序算法、字符串比较和内存管理

// 函数：check_engine_status_flag
// 功能：检查引擎状态标志（空函数实现）
void check_engine_status_flag(void)
{
  return;
}

// 函数：execute_engine_cleanup
// 功能：执行引擎清理操作
void execute_engine_cleanup(void)
{
  perform_system_cleanup();
  return;
}

// 函数：heap_sort_float_array
// 功能：对浮点数数组进行堆排序
// 参数：array_start - 数组起始指针
//        array_end - 数组结束指针  
//        buffer_end - 缓冲区结束指针
void heap_sort_float_array(float *array_start, float *array_end, float *buffer_end)
{
  float temp_value;
  ulonglong array_size;
  ulonglong heap_size;
  ulonglong node_index;
  ulonglong child_index;
  ulonglong parent_index;
  ulonglong swap_index;
  float *current_ptr;
  ulonglong element_count;
  bool comparison_result;
  
  element_count = (longlong)array_end - (longlong)array_start >> 2;
  if (1 < (longlong)element_count) {
    heap_size = ((longlong)(element_count - 2) >> 1) + 1;
    node_index = heap_size * 2 + 2;
    do {
      temp_value = array_start[heap_size - 1];
      heap_size = heap_size - 1;
      node_index = node_index - 2;
      parent_index = heap_size;
      child_index = node_index;
      while ((longlong)child_index < (longlong)element_count) {
        swap_index = child_index - 1;
        if (array_start[child_index - 1] < array_start[child_index] || array_start[child_index - 1] == array_start[child_index]) {
          swap_index = child_index;
        }
        array_start[parent_index] = array_start[swap_index];
        parent_index = swap_index;
        child_index = swap_index * 2 + 2;
      }
      if (child_index == element_count) {
        array_start[parent_index] = array_start[child_index - 1];
        parent_index = child_index - 1;
      }
      while ((longlong)heap_size < (longlong)parent_index) {
        child_index = (longlong)(parent_index - 1) >> 1;
        if (temp_value <= array_start[child_index]) break;
        array_start[parent_index] = array_start[child_index];
        parent_index = child_index;
      }
      array_start[parent_index] = temp_value;
    } while (heap_size != 0);
  }
  heap_size = 0;
  node_index = (ulonglong)((longlong)buffer_end + (3 - (longlong)array_end)) >> 2;
  if (buffer_end < array_end) {
    node_index = heap_size;
  }
  parent_index = heap_size;
  current_ptr = array_end;
  if (node_index != 0) {
    do {
      temp_value = *current_ptr;
      if (temp_value < *array_start) {
        child_index = 2;
        *current_ptr = *array_start;
        comparison_result = element_count == 2;
        swap_index = heap_size;
        child_index = heap_size;
        if (2 < (longlong)element_count) {
          do {
            swap_index = child_index - 1;
            if (array_start[child_index - 1] < array_start[child_index] || array_start[child_index - 1] == array_start[child_index]) {
              swap_index = child_index;
            }
            child_index = swap_index * 2 + 2;
            array_start[child_index] = array_start[swap_index];
            comparison_result = child_index == element_count;
            child_index = swap_index;
          } while ((longlong)child_index < (longlong)element_count);
        }
        if (comparison_result) {
          array_start[swap_index] = array_start[child_index - 1];
          swap_index = child_index - 1;
        }
        while (0 < (longlong)swap_index) {
          child_index = (longlong)(swap_index - 1) >> 1;
          if (temp_value <= array_start[child_index]) break;
          array_start[swap_index] = array_start[child_index];
          swap_index = child_index;
        }
        array_start[swap_index] = temp_value;
      }
      parent_index = parent_index + 1;
      current_ptr = current_ptr + 1;
    } while (parent_index < node_index);
  }
  if (1 < (longlong)element_count) {
    array_end = array_end + -1;
    do {
      temp_value = *array_end;
      element_count = element_count - 1;
      parent_index = 2;
      *array_end = *array_start;
      comparison_result = element_count == 2;
      swap_index = heap_size;
      node_index = heap_size;
      if (2 < (longlong)element_count) {
        do {
          node_index = parent_index - 1;
          if (array_start[parent_index - 1] < array_start[parent_index] || array_start[parent_index - 1] == array_start[parent_index]) {
            node_index = parent_index;
          }
          parent_index = node_index * 2 + 2;
          array_start[swap_index] = array_start[node_index];
          comparison_result = parent_index == element_count;
          swap_index = node_index;
        } while ((longlong)parent_index < (longlong)element_count);
      }
      if (comparison_result) {
        array_start[node_index] = array_start[parent_index - 1];
        node_index = parent_index - 1;
      }
      while (0 < (longlong)node_index) {
        element_count = (longlong)(node_index - 1) >> 1;
        if (temp_value <= array_start[element_count]) break;
        array_start[node_index] = array_start[element_count];
        node_index = element_count;
      }
      array_end = array_end + -1;
      array_start[node_index] = temp_value;
      element_count = (4 - (longlong)array_start) + (longlong)array_end >> 2;
    } while (1 < (longlong)element_count);
  }
  return;
}

// 函数：optimized_heap_sort
// 功能：优化版本的堆排序算法
// 参数：array_start - 数组起始指针
//        array_end - 数组结束指针
//        buffer_end - 缓冲区结束指针
void optimized_heap_sort(float *array_start, float *array_end, float *buffer_end)
{
  float temp_value;
  ulonglong array_size;
  ulonglong heap_size;
  ulonglong node_index;
  ulonglong child_index;
  ulonglong parent_index;
  ulonglong swap_index;
  float *current_ptr;
  ulonglong element_count;
  bool comparison_result;
  
  element_count = (longlong)array_end - (longlong)array_start >> 2;
  if (1 < (longlong)element_count) {
    heap_size = ((longlong)(element_count - 2) >> 1) + 1;
    node_index = heap_size * 2 + 2;
    do {
      temp_value = array_start[heap_size - 1];
      heap_size = heap_size - 1;
      node_index = node_index - 2;
      parent_index = heap_size;
      child_index = node_index;
      while ((longlong)child_index < (longlong)element_count) {
        swap_index = child_index - 1;
        if (array_start[child_index - 1] < array_start[child_index] || array_start[child_index - 1] == array_start[child_index]) {
          swap_index = child_index;
        }
        array_start[parent_index] = array_start[swap_index];
        parent_index = swap_index;
        child_index = swap_index * 2 + 2;
      }
      if (child_index == element_count) {
        array_start[parent_index] = array_start[child_index - 1];
        parent_index = child_index - 1;
      }
      while ((longlong)heap_size < (longlong)parent_index) {
        child_index = (longlong)(parent_index - 1) >> 1;
        if (temp_value <= array_start[child_index]) break;
        array_start[parent_index] = array_start[child_index];
        parent_index = child_index;
      }
      array_start[parent_index] = temp_value;
    } while (heap_size != 0);
  }
  heap_size = 0;
  node_index = (ulonglong)((longlong)buffer_end + (3 - (longlong)array_end)) >> 2;
  if (buffer_end < array_end) {
    node_index = heap_size;
  }
  parent_index = heap_size;
  current_ptr = array_end;
  if (node_index != 0) {
    do {
      temp_value = *current_ptr;
      if (temp_value < *array_start) {
        child_index = 2;
        *current_ptr = *array_start;
        comparison_result = element_count == 2;
        swap_index = heap_size;
        child_index = heap_size;
        if (2 < (longlong)element_count) {
          do {
            swap_index = child_index - 1;
            if (array_start[child_index - 1] < array_start[child_index] || array_start[child_index - 1] == array_start[child_index]) {
              swap_index = child_index;
            }
            child_index = swap_index * 2 + 2;
            array_start[child_index] = array_start[swap_index];
            comparison_result = child_index == element_count;
            child_index = swap_index;
          } while ((longlong)child_index < (longlong)element_count);
        }
        if (comparison_result) {
          array_start[swap_index] = array_start[child_index - 1];
          swap_index = child_index - 1;
        }
        while (0 < (longlong)swap_index) {
          child_index = (longlong)(swap_index - 1) >> 1;
          if (temp_value <= array_start[child_index]) break;
          array_start[swap_index] = array_start[child_index];
          swap_index = child_index;
        }
        array_start[swap_index] = temp_value;
      }
      parent_index = parent_index + 1;
      current_ptr = current_ptr + 1;
    } while (parent_index < node_index);
  }
  if (1 < (longlong)element_count) {
    array_end = array_end + -1;
    do {
      temp_value = *array_end;
      element_count = element_count - 1;
      parent_index = 2;
      *array_end = *array_start;
      comparison_result = element_count == 2;
      swap_index = heap_size;
      node_index = heap_size;
      if (2 < (longlong)element_count) {
        do {
          node_index = parent_index - 1;
          if (array_start[parent_index - 1] < array_start[parent_index] || array_start[parent_index - 1] == array_start[parent_index]) {
            node_index = parent_index;
          }
          parent_index = node_index * 2 + 2;
          array_start[swap_index] = array_start[node_index];
          comparison_result = parent_index == element_count;
          swap_index = node_index;
        } while ((longlong)parent_index < (longlong)element_count);
      }
      if (comparison_result) {
        array_start[node_index] = array_start[parent_index - 1];
        node_index = parent_index - 1;
      }
      while (0 < (longlong)node_index) {
        element_count = (longlong)(node_index - 1) >> 1;
        if (temp_value <= array_start[element_count]) break;
        array_start[node_index] = array_start[element_count];
        node_index = element_count;
      }
      array_end = array_end + -1;
      array_start[node_index] = temp_value;
      element_count = (4 - (longlong)array_start) + (longlong)array_end >> 2;
    } while (1 < (longlong)element_count);
  }
  return;
}

// 函数：process_string_comparison
// 功能：处理字符串比较和映射操作
// 参数：context_ptr - 上下文指针
//        compare_value - 比较值
//        string_data - 字符串数据指针
void process_string_comparison(uint64_t context_ptr, int compare_value, longlong string_data)
{
  byte char_diff;
  bool is_greater;
  uint64_t *hash_table_ptr;
  uint64_t *current_node;
  int *result_ptr;
  byte *string_ptr;
  uint string_length;
  longlong table_base;
  uint64_t *node_ptr;
  int temp_int;
  void *temp_ptr;
  uint64_t *next_node;
  int8_t stack_buffer1[32];
  uint64_t stack_guard1;
  void *stack_ptr1;
  byte *stack_string_ptr1;
  int stack_int1;
  byte stack_string_buffer1[72];
  void *stack_ptr2;
  int8_t *stack_ptr3;
  int32_t stack_uint1;
  int8_t stack_string_buffer2[72];
  ulonglong stack_checksum;
  
  table_base = global_string_table;
  stack_guard1 = 0xfffffffffffffffe;
  stack_checksum = global_checksum ^ (ulonglong)stack_buffer1;
  node_ptr = (uint64_t *)(global_string_table + 0x28);
  stack_ptr1 = &global_string_start;
  stack_string_ptr1 = stack_string_buffer1;
  stack_string_buffer1[0] = 0;
  stack_int1 = *(int *)(string_data + 0x10);
  temp_ptr = &default_string_data;
  if (*(void **)(string_data + 8) != (void *)0x0) {
    temp_ptr = *(void **)(string_data + 8);
  }
  strcpy_s(stack_string_buffer1, 0x40, temp_ptr);
  next_node = *(uint64_t **)(table_base + 0x38);
  current_node = node_ptr;
  if (next_node != (uint64_t *)0x0) {
    do {
      if (stack_int1 == 0) {
        is_greater = false;
        hash_table_ptr = (uint64_t *)next_node[1];
      }
      else {
        if (*(int *)(next_node + 6) == 0) {
          is_greater = true;
        }
        else {
          string_ptr = stack_string_ptr1;
          do {
            string_length = (uint)string_ptr[next_node[5] - (longlong)stack_string_ptr1];
            temp_int = *string_ptr - string_length;
            if (*string_ptr != string_length) break;
            string_ptr = string_ptr + 1;
          } while (string_length != 0);
          is_greater = 0 < temp_int;
          if (temp_int < 1) {
            hash_table_ptr = (uint64_t *)next_node[1];
            goto NODE_FOUND;
          }
        }
        hash_table_ptr = (uint64_t *)*next_node;
      }
NODE_FOUND:
      current_node = next_node;
      if (is_greater) {
        current_node = node_ptr;
      }
      node_ptr = current_node;
      next_node = hash_table_ptr;
    } while (hash_table_ptr != (uint64_t *)0x0);
    if (current_node != node_ptr) {
      if (*(int *)(current_node + 6) == 0) goto MATCH_FOUND;
      if (stack_int1 != 0) {
        string_ptr = (byte *)current_node[5];
        table_base = (longlong)stack_string_ptr1 - (longlong)string_ptr;
        do {
          char_diff = *string_ptr;
          string_length = (uint)string_ptr[table_base];
          if (char_diff != string_length) break;
          string_ptr = string_ptr + 1;
        } while (string_length != 0);
        if ((int)(char_diff - string_length) < 1) goto MATCH_FOUND;
      }
    }
  }
  current_node = node_ptr;
MATCH_FOUND:
  stack_ptr1 = &global_string_end;
  if (current_node == node_ptr) {
    stack_ptr2 = &global_string_start;
    stack_ptr3 = stack_string_buffer2;
    stack_string_buffer2[0] = 0;
    stack_uint1 = *(int32_t *)(string_data + 0x10);
    temp_ptr = &default_string_data;
    if (*(void **)(string_data + 8) != (void *)0x0) {
      temp_ptr = *(void **)(string_data + 8);
    }
    strcpy_s(stack_string_buffer2, 0x40, temp_ptr);
    result_ptr = (int *)find_hash_entry(node_ptr, &stack_ptr2);
    *result_ptr = compare_value;
  }
  else {
    stack_ptr2 = &global_string_start;
    stack_ptr3 = stack_string_buffer2;
    stack_string_buffer2[0] = 0;
    stack_uint1 = *(int32_t *)(string_data + 0x10);
    temp_ptr = &default_string_data;
    if (*(void **)(string_data + 8) != (void *)0x0) {
      temp_ptr = *(void **)(string_data + 8);
    }
    strcpy_s(stack_string_buffer2, 0x40, temp_ptr);
    result_ptr = (int *)find_hash_entry(node_ptr, &stack_ptr2);
    temp_int = *result_ptr;
    stack_ptr1 = &global_string_start;
    stack_string_ptr1 = stack_string_buffer1;
    stack_string_buffer1[0] = 0;
    stack_int1 = *(int *)(string_data + 0x10);
    temp_ptr = &default_string_data;
    if (*(void **)(string_data + 8) != (void *)0x0) {
      temp_ptr = *(void **)(string_data + 8);
    }
    strcpy_s(stack_string_buffer1, 0x40, temp_ptr);
    result_ptr = (int *)find_hash_entry(node_ptr, &stack_ptr1);
    *result_ptr = temp_int + compare_value;
    stack_ptr1 = &global_string_end;
  }
  stack_ptr2 = &global_string_end;
  // 注意：此函数不返回
  perform_memory_cleanup(stack_checksum ^ (ulonglong)stack_buffer1);
}

// 函数：find_hash_entry
// 功能：在哈希表中查找条目
// 参数：hash_table - 哈希表指针
//        search_key - 搜索键指针
// 返回值：找到的条目指针
uint64_t * find_hash_entry(uint64_t *hash_table, longlong search_key)
{
  byte char_diff;
  bool is_greater;
  byte *key_ptr;
  longlong *entry_ptr;
  uint key_length;
  int compare_result;
  uint64_t *current_entry;
  uint64_t *next_entry;
  uint64_t *prev_entry;
  longlong key_offset;
  int8_t stack_buffer[8];
  
  next_entry = (uint64_t *)hash_table[2];
  prev_entry = hash_table;
  if (next_entry != (uint64_t *)0x0) {
    do {
      if (*(int *)(search_key + 0x10) == 0) {
        current_entry = (uint64_t *)next_entry[1];
        is_greater = false;
      }
      else {
        if (*(int *)(next_entry + 6) == 0) {
          is_greater = true;
        }
        else {
          key_ptr = *(byte **)(search_key + 8);
          key_offset = next_entry[5] - (longlong)key_ptr;
          do {
            key_length = (uint)key_ptr[key_offset];
            compare_result = *key_ptr - key_length;
            if (*key_ptr != key_length) break;
            key_ptr = key_ptr + 1;
          } while (key_length != 0);
          is_greater = 0 < compare_result;
          if (compare_result < 1) {
            current_entry = (uint64_t *)next_entry[1];
            goto ENTRY_FOUND;
          }
        }
        current_entry = (uint64_t *)*next_entry;
      }
ENTRY_FOUND:
      if (is_greater) {
        next_entry = prev_entry;
      }
      prev_entry = next_entry;
      next_entry = current_entry;
    } while (current_entry != (uint64_t *)0x0);
    next_entry = (uint64_t *)0x0;
  }
  if (prev_entry != hash_table) {
    if (*(int *)(prev_entry + 6) == 0) {
ENTRY_RETURN:
      return prev_entry + 0xf;
    }
    if (*(int *)(search_key + 0x10) != 0) {
      key_ptr = (byte *)prev_entry[5];
      next_entry = (uint64_t *)(*(longlong *)(search_key + 8) - (longlong)key_ptr);
      do {
        char_diff = *key_ptr;
        key_length = (uint)key_ptr[(longlong)next_entry];
        if (char_diff != key_length) break;
        key_ptr = key_ptr + 1;
      } while (key_length != 0);
      if ((int)(char_diff - key_length) < 1) goto ENTRY_RETURN;
    }
  }
  entry_ptr = (longlong *)create_hash_entry(hash_table, stack_buffer, next_entry, prev_entry, search_key);
  return (uint64_t *)(*entry_ptr + 0x78);
}

// 函数：search_hash_chain
// 功能：在哈希链中搜索指定条目
// 参数：search_param - 搜索参数
//        key_data - 键数据指针
//        current_node - 当前节点指针
//        prev_node - 前一个节点指针
// 返回值：找到的条目指针
uint64_t *
search_hash_chain(uint64_t search_param, longlong key_data, uint64_t *current_node, uint64_t *prev_node)
{
  byte char_diff;
  bool is_greater;
  byte *key_ptr;
  longlong *entry_ptr;
  uint key_length;
  int compare_result;
  longlong key_offset;
  uint64_t *next_node;
  uint64_t *found_node;
  
  do {
    if (*(int *)(key_data + 0x10) == 0) {
      next_node = (uint64_t *)current_node[1];
      is_greater = false;
    }
    else {
      if (*(int *)(current_node + 6) == 0) {
        is_greater = true;
      }
      else {
        key_ptr = *(byte **)(key_data + 8);
        key_offset = current_node[5] - (longlong)key_ptr;
        do {
          key_length = (uint)key_ptr[key_offset];
          compare_result = *key_ptr - key_length;
          if (*key_ptr != key_length) break;
          key_ptr = key_ptr + 1;
        } while (key_length != 0);
        is_greater = 0 < compare_result;
        if (compare_result < 1) {
          next_node = (uint64_t *)current_node[1];
          goto ENTRY_FOUND;
        }
      }
      next_node = (uint64_t *)*current_node;
    }
ENTRY_FOUND:
    if (is_greater) {
      current_node = prev_node;
    }
    prev_node = current_node;
    current_node = next_node;
  } while (next_node != (uint64_t *)0x0);
  if (prev_node != found_node) {
    if (*(int *)(prev_node + 6) == 0) {
ENTRY_RETURN:
      return prev_node + 0xf;
    }
    if (*(int *)(key_data + 0x10) != 0) {
      key_ptr = (byte *)prev_node[5];
      key_offset = *(longlong *)(key_data + 8) - (longlong)key_ptr;
      do {
        char_diff = *key_ptr;
        key_length = (uint)key_ptr[key_offset];
        if (char_diff != key_length) break;
        key_ptr = key_ptr + 1;
      } while (key_length != 0);
      if ((int)(char_diff - key_length) < 1) goto ENTRY_RETURN;
    }
  }
  entry_ptr = (longlong *)create_hash_entry();
  return (uint64_t *)(*entry_ptr + 0x78);
}

// 函数：get_hash_entry_offset
// 功能：获取哈希表条目的偏移量
// 返回值：条目偏移量
longlong get_hash_entry_offset(void)
{
  byte char_diff;
  byte *key_ptr;
  longlong *entry_ptr;
  uint key_length;
  longlong table_base;
  longlong entry_base;
  longlong key_offset;
  longlong search_param;
  
  if (search_param != entry_base) {
    if (*(int *)(search_param + 0x30) == 0) {
ENTRY_RETURN:
      return search_param + 0x78;
    }
    if (*(int *)(table_base + 0x10) != 0) {
      key_ptr = *(byte **)(search_param + 0x28);
      key_offset = *(longlong *)(table_base + 8) - (longlong)key_ptr;
      do {
        char_diff = *key_ptr;
        key_length = (uint)key_ptr[key_offset];
        if (char_diff != key_length) break;
        key_ptr = key_ptr + 1;
      } while (key_length != 0);
      if ((int)(char_diff - key_length) < 1) goto ENTRY_RETURN;
    }
  }
  entry_ptr = (longlong *)create_hash_entry();
  return *entry_ptr + 0x78;
}

// 函数：create_hash_entry
// 功能：创建新的哈希表条目
// 参数：table_ptr - 表指针
//        buffer_ptr - 缓冲区指针
//        entry_param - 条目参数
//        node_ptr - 节点指针
//        key_data - 键数据指针
// 返回值：创建的条目指针
uint64_t *
create_hash_entry(longlong *table_ptr, uint64_t *buffer_ptr, uint64_t entry_param, longlong *node_ptr,
             longlong key_data)
{
  byte char_diff;
  bool is_greater;
  longlong *current_ptr;
  byte *key_ptr;
  longlong *search_ptr;
  uint key_length;
  longlong key_offset;
  longlong *temp_ptr;
  ulonglong entry_flags;
  uint64_t entry_value;
  
  temp_ptr = (longlong *)*table_ptr;
  if ((node_ptr == temp_ptr) || (node_ptr == table_ptr)) {
    if ((table_ptr[4] != 0) && (*(int *)(key_data + 0x10) != 0)) {
      search_ptr = node_ptr;
      if (*(int *)(temp_ptr + 6) != 0) {
        key_ptr = *(byte **)(key_data + 8);
        search_ptr = (longlong *)(temp_ptr[5] - (longlong)key_ptr);
        do {
          char_diff = *key_ptr;
          key_length = (uint)key_ptr[(longlong)search_ptr];
          if (char_diff != key_length) break;
          key_ptr = key_ptr + 1;
        } while (key_length != 0);
        if ((int)(char_diff - key_length) < 1) goto ENTRY_EXISTS;
      }
ENTRY_INSERT:
      entry_flags = (ulonglong)search_ptr & 0xffffffffffffff00;
ENTRY_CONTINUE:
      if (temp_ptr != (longlong *)0x0) {
        insert_hash_entry(table_ptr, buffer_ptr, temp_ptr, entry_flags, key_data);
        return buffer_ptr;
      }
    }
  }
  else {
    current_ptr = (longlong *)get_node_reference(node_ptr);
    if (*(int *)(key_data + 0x10) != 0) {
      if ((int)node_ptr[6] != 0) {
        key_ptr = *(byte **)(key_data + 8);
        key_offset = node_ptr[5] - (longlong)key_ptr;
        do {
          char_diff = *key_ptr;
          key_length = (uint)key_ptr[key_offset];
          if (char_diff != key_length) break;
          key_ptr = key_ptr + 1;
        } while (key_length != 0);
        if ((int)(char_diff - key_length) < 1) goto ENTRY_EXISTS;
      }
      if ((int)current_ptr[6] != 0) {
        key_ptr = (byte *)current_ptr[5];
        search_ptr = (longlong *)(*(longlong *)(key_data + 8) - (longlong)key_ptr);
        do {
          char_diff = *key_ptr;
          key_length = (uint)key_ptr[(longlong)search_ptr];
          if (char_diff != key_length) break;
          key_ptr = key_ptr + 1;
        } while (key_length != 0);
        if (0 < (int)(char_diff - key_length)) {
          temp_ptr = node_ptr;
          if (*node_ptr == 0) goto ENTRY_INSERT;
          entry_flags = CONCAT71((int7)((ulonglong)search_ptr >> 8), 1);
          temp_ptr = current_ptr;
          goto ENTRY_CONTINUE;
        }
      }
    }
  }
ENTRY_EXISTS:
  is_greater = true;
  temp_ptr = (longlong *)table_ptr[2];
  search_ptr = table_ptr;
  while (temp_ptr != (longlong *)0x0) {
    search_ptr = temp_ptr;
    if ((int)temp_ptr[6] == 0) {
      is_greater = false;
TRAVERSE_NODE:
      temp_ptr = (longlong *)*temp_ptr;
    }
    else {
      if (*(int *)(key_data + 0x10) == 0) {
        is_greater = true;
      }
      else {
        key_ptr = (byte *)temp_ptr[5];
        key_offset = *(longlong *)(key_data + 8) - (longlong)key_ptr;
        do {
          char_diff = *key_ptr;
          key_length = (uint)key_ptr[key_offset];
          if (char_diff != key_length) break;
          key_ptr = key_ptr + 1;
        } while (key_length != 0);
        is_greater = 0 < (int)(char_diff - key_length);
      }
      if (!is_greater) goto TRAVERSE_NODE;
      temp_ptr = (longlong *)temp_ptr[1];
    }
  }
  temp_ptr = search_ptr;
  if (is_greater) {
    if (search_ptr != (longlong *)table_ptr[1]) {
      temp_ptr = (longlong *)remove_node_reference(search_ptr);
      goto CREATE_NEW;
    }
  }
  else {
CREATE_NEW:
    if (*(int *)(key_data + 0x10) == 0) {
ENTRY_FINAL:
      *buffer_ptr = temp_ptr;
      return buffer_ptr;
    }
    if ((int)temp_ptr[6] != 0) {
      key_ptr = *(byte **)(key_data + 8);
      key_offset = temp_ptr[5] - (longlong)key_ptr;
      do {
        char_diff = *key_ptr;
        key_length = (uint)key_ptr[key_offset];
        if (char_diff != key_length) break;
        key_ptr = key_ptr + 1;
      } while (key_length != 0);
      if ((int)(char_diff - key_length) < 1) goto ENTRY_FINAL;
    }
  }
  if (search_ptr != table_ptr) {
    if ((int)search_ptr[6] == 0) {
ALLOCATE_ENTRY:
      entry_value = 1;
      goto SETUP_ENTRY;
    }
    if (*(int *)(key_data + 0x10) != 0) {
      key_ptr = (byte *)search_ptr[5];
      key_offset = *(longlong *)(key_data + 8) - (longlong)key_ptr;
      do {
        char_diff = *key_ptr;
        key_length = (uint)key_ptr[key_offset];
        if (char_diff != key_length) break;
        key_ptr = key_ptr + 1;
      } while (key_length != 0);
      if ((int)(char_diff - key_length) < 1) goto ALLOCATE_ENTRY;
    }
  }
  entry_value = 0;
SETUP_ENTRY:
  key_offset = allocate_memory_block(global_memory_allocator, 0x80, (char)table_ptr[5]);
  initialize_memory_block(key_offset + 0x20, key_data);
  *(int32_t *)(key_offset + 0x78) = 0;
  // 注意：此函数不返回
  insert_into_hash_table(key_offset, search_ptr, table_ptr, entry_value);
}

// 注意：全局变量名在相同地址上重叠

// 简化实现说明：
// - 将原始的FUN_*函数名改为语义化名称
// - 将复杂的变量名改为描述性名称
// - 将原始代码中的大量直接内存操作封装为函数调用
// - 添加了中文注释说明各部分功能
// - 保留了原始的堆排序算法和字符串处理逻辑结构
// - 简化了复杂的嵌套条件判断和循环逻辑

// 原始实现与简化实现的对比：
// 原始实现：包含复杂的堆排序算法实现和字符串哈希表操作
// 简化实现：使用函数封装和语义化命名提高代码可读性，同时保持核心功能

// 文件位置：pretty/02/02_core_engine_part233.c
// 相关函数：heap_sort_float_array(), optimized_heap_sort(), process_string_comparison() 等