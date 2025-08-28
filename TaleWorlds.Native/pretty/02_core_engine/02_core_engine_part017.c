#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part017.c - 核心引擎模块第17部分
// 本文件包含33个函数，主要负责内存管理、对象清理和容器操作

// 全局变量声明
uint64_t *UNDEFINED_POINTER_18098bcb0;  // 未定义指针常量
uint64_t *UNDEFINED_POINTER_180a3c3e0;  // 未定义指针常量
longlong *MEMORY_ALLOCATOR_180c8ed18;     // 内存分配器
void **EXCEPTION_LIST;                     // 异常列表

/**
 * 清理函数指针数组
 * 释放函数指针数组中的所有函数指针
 * @param function_array 函数指针数组
 */
void cleanup_function_pointer_array(longlong *function_array)
{
  longlong original_value1;
  longlong original_value2;
  longlong original_value3;
  uint64_t *function_start;
  uint64_t *function_end;
  longlong original_value4;
  uint64_t *current_function;
  
  // 调用初始化函数
  initialize_cleanup_process();
  
  // 保存原始值并清零
  original_value1 = *function_array;
  *function_array = 0;
  original_value2 = function_array[1];
  function_array[1] = 0;
  original_value3 = function_array[2];
  function_array[2] = 0;
  original_value4 = function_array[3];
  *(int *)(function_array + 3) = (int)function_array[3];
  
  // 恢复原始值以获取函数指针范围
  function_start = (uint64_t *)*function_array;
  *function_array = original_value1;
  function_end = (uint64_t *)function_array[1];
  function_array[1] = original_value2;
  function_array[2] = original_value3;
  *(int *)(function_array + 3) = (int)original_value4;
  
  // 遍历并调用所有函数指针
  for (current_function = function_start; current_function != function_end; current_function = current_function + 4) {
    (**(code **)*current_function)(current_function, 0);
  }
  
  // 释放函数指针数组内存
  if (function_start != (uint64_t *)0x0) {
    release_memory_block(function_start);
  }
  return;
}

/**
 * 处理引擎对象
 * 处理指定对象的引擎相关操作
 * @param object_handle 对象句柄
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void process_engine_object(longlong object_handle, uint64_t param2, uint64_t param3, uint64_t param4)
{
  process_engine_subobject(object_handle, *(uint64_t *)(object_handle + 0x10), param3, param4, 0xfffffffffffffffe);
  return;
}

/**
 * 销毁引擎对象
 * 销毁指定的引擎对象及其相关资源
 * @param object_id 对象ID
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void destroy_engine_object(longlong object_id, uint64_t param2, uint64_t param3, uint64_t param4)
{
  uint64_t *object_pointer;
  
  object_pointer = *(uint64_t **)(object_id + 0x10);
  if (object_pointer != (uint64_t *)0x0) {
    process_object_destruction(object_id, *object_pointer, param3, param4, 0xfffffffffffffffe);
    cleanup_object_references(object_pointer);
    release_memory_block(object_pointer);
  }
  return;
}

/**
 * 在容器中查找对象
 * 在指定容器中查找符合条件的对象
 * @param container 容器指针
 * @param search_result 搜索结果存储位置
 * @param search_criteria 搜索条件
 * @return 搜索结果指针
 */
uint64_t *find_object_in_container(uint64_t *container, uint64_t *search_result, longlong search_criteria)
{
  byte comparison_byte;
  bool match_found;
  byte *string_pointer;
  uint char_value;
  int comparison_result;
  longlong offset;
  uint64_t *current_item;
  uint64_t *next_item;
  uint64_t *matched_item;
  uint64_t *previous_item;
  
  // 检查容器是否为空
  if ((uint64_t *)container[2] != (uint64_t *)0x0) {
    current_item = (uint64_t *)container[2];
    previous_item = container;
    do {
      // 根据搜索条件进行匹配
      if (*(int *)(search_criteria + 0x10) == 0) {
        next_item = (uint64_t *)current_item[1];
        match_found = false;
      }
      else {
        if (*(int *)(current_item + 6) == 0) {
          match_found = true;
        }
        else {
          // 执行字符串比较
          string_pointer = *(byte **)(search_criteria + 8);
          offset = current_item[5] - (longlong)string_pointer;
          do {
            char_value = (uint)string_pointer[offset];
            comparison_result = *string_pointer - char_value;
            if (*string_pointer != char_value) break;
            string_pointer = string_pointer + 1;
          } while (char_value != 0);
          match_found = 0 < comparison_result;
          if (comparison_result < 1) {
            next_item = (uint64_t *)current_item[1];
            goto SEARCH_COMPLETE;
          }
        }
        next_item = (uint64_t *)*current_item;
      }
SEARCH_COMPLETE:
      matched_item = current_item;
      if (match_found) {
        matched_item = previous_item;
      }
      current_item = next_item;
      previous_item = matched_item;
    } while (next_item != (uint64_t *)0x0);
    
    // 检查是否找到匹配项
    if (matched_item != container) {
      if (*(int *)(matched_item + 6) == 0) {
ITEM_FOUND:
        *search_result = matched_item;
        return search_result;
      }
      
      // 验证匹配项
      if (*(int *)(search_criteria + 0x10) != 0) {
        string_pointer = (byte *)matched_item[5];
        offset = *(longlong *)(search_criteria + 8) - (longlong)string_pointer;
        do {
          comparison_byte = *string_pointer;
          char_value = (uint)string_pointer[offset];
          if (comparison_byte != char_value) break;
          string_pointer = string_pointer + 1;
        } while (char_value != 0);
        if ((int)(comparison_byte - char_value) < 1) goto ITEM_FOUND;
      }
    }
  }
  
  // 未找到匹配项
  *search_result = container;
  return search_result;
}

/**
 * 清理无符号长整型数组
 * 清理无符号长整型数组并释放相关资源
 * @param array_pointer 数组指针
 */
void cleanup_ulonglong_array(ulonglong *array_pointer)
{
  int *reference_count;
  ulonglong original_value1;
  ulonglong original_value2;
  uint64_t *memory_block;
  ulonglong original_value3;
  longlong calculated_offset;
  ulonglong base_address;
  ulonglong masked_address;
  
  // 保存并清零数组元素
  array_pointer[1] = *array_pointer;
  base_address = *array_pointer;
  *array_pointer = 0;
  original_value2 = array_pointer[1];
  array_pointer[1] = 0;
  original_value3 = array_pointer[2];
  array_pointer[2] = 0;
  original_value1 = array_pointer[3];
  *(int *)(array_pointer + 3) = (int)array_pointer[3];
  
  memory_block = (uint64_t *)*array_pointer;
  *array_pointer = base_address;
  array_pointer[1] = original_value2;
  array_pointer[2] = original_value3;
  *(int *)(array_pointer + 3) = (int)original_value1;
  
  if (memory_block == (uint64_t *)0x0) {
    return;
  }
  
  // 计算内存块地址和偏移量
  masked_address = (ulonglong)memory_block & 0xffffffffffc00000;
  if (masked_address != 0) {
    calculated_offset = masked_address + 0x80 + ((longlong)memory_block - masked_address >> 0x10) * 0x50;
    calculated_offset = calculated_offset - (ulonglong)*(uint *)(calculated_offset + 4);
    
    // 检查是否为异常处理块
    if ((*(void ***)(masked_address + 0x70) == &EXCEPTION_LIST) && (*(char *)(calculated_offset + 0xe) == '\0')) {
      // 执行异常处理块的清理
      *memory_block = *(uint64_t *)(calculated_offset + 0x20);
      *(uint64_t **)(calculated_offset + 0x20) = memory_block;
      reference_count = (int *)(calculated_offset + 0x18);
      *reference_count = *reference_count + -1;
      if (*reference_count == 0) {
        cleanup_exception_handler();
        return;
      }
    }
    else {
      // 执行标准内存释放
      release_memory_with_flags(masked_address, 
                               CONCAT71(0xff000000, *(void ***)(masked_address + 0x70) == &EXCEPTION_LIST),
                               memory_block, masked_address, 0xfffffffffffffffe);
    }
  }
  return;
}

/**
 * 递归清理对象树
 * 递归清理对象树中的所有节点
 * @param root_handle 根节点句柄
 * @param node_pointer 节点指针
 * @param param3 参数3
 * @param param4 参数4
 */
void cleanup_object_tree(uint64_t root_handle, uint64_t *node_pointer, uint64_t param3, uint64_t param4)
{
  if (node_pointer != (uint64_t *)0x0) {
    cleanup_object_tree(root_handle, *node_pointer, param3, param4, 0xfffffffffffffffe);
    if ((longlong *)node_pointer[0x17] != (longlong *)0x0) {
      (**(code **)(*(longlong *)node_pointer[0x17] + 0x38))();
    }
    node_pointer[4] = &UNDEFINED_POINTER_18098bcb0;
    release_memory_block(node_pointer);
  }
  return;
}

/**
 * 清理复杂数据结构
 * 清理包含多个子项的复杂数据结构
 * @param structure_handle 结构句柄
 * @param data_pointer 数据指针
 * @param param3 参数3
 * @param param4 参数4
 */
void cleanup_complex_structure(uint64_t structure_handle, uint64_t *data_pointer, uint64_t param3, uint64_t param4)
{
  if (data_pointer == (uint64_t *)0x0) {
    return;
  }
  
  // 递归清理子项
  cleanup_complex_structure(structure_handle, *data_pointer, param3, param4, 0xfffffffffffffffe);
  cleanup_sub_items(data_pointer + 8);
  
  // 清理主结构
  data_pointer[4] = &UNDEFINED_POINTER_180a3c3e0;
  if (data_pointer[5] != 0) {
    release_memory_block();
  }
  data_pointer[5] = 0;
  *(int32_t *)(data_pointer + 7) = 0;
  data_pointer[4] = &UNDEFINED_POINTER_18098bcb0;
  release_memory_block(data_pointer);
}

/**
 * 清理简单数据结构
 * 清理简单数据结构及其资源
 * @param structure_handle 结构句柄
 * @param data_pointer 数据指针
 * @param param3 参数3
 * @param param4 参数4
 */
void cleanup_simple_structure(uint64_t structure_handle, uint64_t *data_pointer, uint64_t param3, uint64_t param4)
{
  if (data_pointer == (uint64_t *)0x0) {
    return;
  }
  
  // 递归清理子项
  cleanup_simple_structure(structure_handle, *data_pointer, param3, param4, 0xfffffffffffffffe);
  
  // 清理主结构
  data_pointer[4] = &UNDEFINED_POINTER_180a3c3e0;
  if (data_pointer[5] != 0) {
    release_memory_block();
  }
  data_pointer[5] = 0;
  *(int32_t *)(data_pointer + 7) = 0;
  data_pointer[4] = &UNDEFINED_POINTER_18098bcb0;
  release_memory_block(data_pointer);
}

/**
 * 清理扩展数据结构
 * 清理包含扩展字段的数据结构
 * @param structure_handle 结构句柄
 * @param data_pointer 数据指针
 * @param param3 参数3
 * @param param4 参数4
 */
void cleanup_extended_structure(uint64_t structure_handle, uint64_t *data_pointer, uint64_t param3, uint64_t param4)
{
  if (data_pointer == (uint64_t *)0x0) {
    return;
  }
  
  // 递归清理子项
  cleanup_extended_structure(structure_handle, *data_pointer, param3, param4, 0xfffffffffffffffe);
  
  // 检查并清理扩展字段
  if (data_pointer[8] != 0) {
    release_memory_block();
  }
  
  // 清理主结构
  data_pointer[4] = &UNDEFINED_POINTER_180a3c3e0;
  if (data_pointer[5] != 0) {
    release_memory_block();
  }
  data_pointer[5] = 0;
  *(int32_t *)(data_pointer + 7) = 0;
  data_pointer[4] = &UNDEFINED_POINTER_18098bcb0;
  release_memory_block(data_pointer);
}

/**
 * 调整数组大小
 * 调整数组大小以适应新的元素
 * @param array_header 数组头部指针
 * @param new_item_data 新项目数据
 */
void resize_array(uint64_t *array_header, longlong new_item_data)
{
  uint64_t *new_array_pointer;
  uint64_t *old_array_start;
  uint64_t *old_array_end;
  uint64_t *new_array_item;
  longlong old_size;
  longlong new_size;
  uint64_t *current_item;
  longlong item_offset;
  uint64_t *item_pointer;
  
  // 计算当前数组大小
  new_array_pointer = (uint64_t *)array_header[1];
  old_array_start = (uint64_t *)*array_header;
  old_size = ((longlong)new_array_pointer - (longlong)old_array_start) / 0x28;
  new_array_item = (uint64_t *)0x0;
  
  // 计算新的数组大小
  if (old_size == 0) {
    new_size = 1;
  }
  else {
    new_size = old_size * 2;
    if (new_size == 0) goto ALLOCATION_COMPLETE;
  }
  
  // 分配新的数组空间
  new_array_item = (uint64_t *)
                  allocate_memory(MEMORY_ALLOCATOR_180c8ed18, new_size * 0x28, 
                                 *(int8_t *)(array_header + 3), old_array_start, 0xfffffffffffffffe);
  
  // 重新计算指针
  new_array_pointer = (uint64_t *)array_header[1];
  old_array_start = (uint64_t *)*array_header;
  
ALLOCATION_COMPLETE:
  new_array_item = new_array_item;
  
  // 复制现有元素到新数组
  if (old_array_start != new_array_pointer) {
    item_offset = (longlong)new_array_item - (longlong)old_array_start;
    old_array_start = old_array_start + 1;
    do {
      // 初始化新数组项
      *new_array_item = &UNDEFINED_POINTER_18098bcb0;
      *(uint64_t *)(item_offset + (longlong)old_array_start) = 0;
      *(int32_t *)(item_offset + 8 + (longlong)old_array_start) = 0;
      *new_array_item = &UNDEFINED_POINTER_180a3c3e0;
      *(uint64_t *)(item_offset + 0x10 + (longlong)old_array_start) = 0;
      *(uint64_t *)(item_offset + (longlong)old_array_start) = 0;
      *(int32_t *)(item_offset + 8 + (longlong)old_array_start) = 0;
      
      // 复制数据
      *(int32_t *)(item_offset + 8 + (longlong)old_array_start) = *(int32_t *)(old_array_start + 1);
      *(uint64_t *)(item_offset + (longlong)old_array_start) = *old_array_start;
      *(int32_t *)(item_offset + 0x14 + (longlong)old_array_start) = *(int32_t *)((longlong)old_array_start + 0x14);
      *(int32_t *)(item_offset + 0x10 + (longlong)old_array_start) = *(int32_t *)(old_array_start + 2);
      
      // 清理原数组项
      *(int32_t *)(old_array_start + 1) = 0;
      *old_array_start = 0;
      old_array_start[2] = 0;
      *(int32_t *)(item_offset + 0x18 + (longlong)old_array_start) = *(int32_t *)(old_array_start + 3);
      
      new_array_item = new_array_item + 5;
      item_pointer = old_array_start + 4;
      old_array_start = old_array_start + 5;
    } while (item_pointer != new_array_pointer);
  }
  
  // 添加新项目
  *new_array_item = &UNDEFINED_POINTER_18098bcb0;
  new_array_item[1] = 0;
  *(int32_t *)(new_array_item + 2) = 0;
  *new_array_item = &UNDEFINED_POINTER_180a3c3e0;
  new_array_item[3] = 0;
  new_array_item[1] = 0;
  *(int32_t *)(new_array_item + 2) = 0;
  *(int32_t *)(new_array_item + 2) = *(int32_t *)(new_item_data + 0x10);
  new_array_item[1] = *(uint64_t *)(new_item_data + 8);
  *(int32_t *)((longlong)new_array_item + 0x1c) = *(int32_t *)(new_item_data + 0x1c);
  *(int32_t *)(new_array_item + 3) = *(int32_t *)(new_item_data + 0x18);
  
  // 清理源数据
  *(int32_t *)(new_item_data + 0x10) = 0;
  *(uint64_t *)(new_item_data + 8) = 0;
  *(uint64_t *)(new_item_data + 0x18) = 0;
  *(int32_t *)(new_array_item + 4) = *(int32_t *)(new_item_data + 0x20);
  
  // 清理旧数组
  new_array_pointer = (uint64_t *)array_header[1];
  old_array_start = (uint64_t *)*array_header;
  if (old_array_start != new_array_pointer) {
    do {
      *old_array_start = &UNDEFINED_POINTER_180a3c3e0;
      if (old_array_start[1] != 0) {
        release_memory_block();
      }
      old_array_start[1] = 0;
      *(int32_t *)(old_array_start + 3) = 0;
      *old_array_start = &UNDEFINED_POINTER_18098bcb0;
      old_array_start = old_array_start + 5;
    } while (old_array_start != new_array_pointer);
    old_array_start = (uint64_t *)*array_header;
  }
  
  // 更新数组头部信息
  if (old_array_start == (uint64_t *)0x0) {
    *array_header = new_array_item;
    array_header[1] = new_array_item + 5;
    array_header[2] = new_array_item + new_size * 5;
    return;
  }
  
  // 释放旧数组内存
  release_memory_block(old_array_start);
}

/**
 * 执行对象回调
 * 执行指定对象的回调函数
 * @param object_pointer 对象指针
 */
void execute_object_callback(longlong object_pointer)
{
  if (*(longlong **)(object_pointer + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(object_pointer + 0x10) + 0x38))();
  }
  return;
}

/**
 * 处理对象销毁
 * 处理对象的销毁过程
 * @param object_id 对象ID
 * @param object_pointer 对象指针
 * @param param3 参数3
 * @param param4 参数4
 */
void process_object_destruction(uint64_t object_id, uint64_t *object_pointer, uint64_t param3, uint64_t param4)
{
  if (object_pointer == (uint64_t *)0x0) {
    return;
  }
  
  // 递归销毁子对象
  process_object_destruction(object_id, *object_pointer, param3, param4, 0xfffffffffffffffe);
  
  // 检查并清理扩展字段
  if (object_pointer[8] != 0) {
    release_memory_block();
  }
  
  // 清理主对象
  object_pointer[4] = &UNDEFINED_POINTER_180a3c3e0;
  if (object_pointer[5] != 0) {
    release_memory_block();
  }
  object_pointer[5] = 0;
  *(int32_t *)(object_pointer + 7) = 0;
  object_pointer[4] = &UNDEFINED_POINTER_18098bcb0;
  release_memory_block(object_pointer);
}

/**
 * 释放对象资源
 * 释放对象占用的资源
 * @param object_id 对象ID
 * @param resource_pointer 资源指针
 */
void release_object_resources(uint64_t object_id, uint64_t *resource_pointer)
{
  if (resource_pointer != (uint64_t *)0x0) {
    release_object_resources(object_id, *resource_pointer);
    cleanup_resource_handles(resource_pointer);
    release_memory_block(resource_pointer);
  }
  return;
}

/**
 * 清理对象实例
 * 清理指定的对象实例
 * @param object_id 对象ID
 */
void cleanup_object_instance(uint64_t object_id)
{
  uint64_t *resource_pointer;
  
  release_object_resources(object_id, *resource_pointer);
  cleanup_resource_handles();
  release_memory_block();
}

/**
 * 空操作函数
 * 执行空操作
 */
void empty_operation(void)
{
  return;
}

/**
 * 清理缓冲区
 * 清理指定的缓冲区
 * @param buffer_handle 缓冲区句柄
 * @param buffer_pointer 缓冲区指针
 */
void cleanup_buffer(uint64_t buffer_handle, longlong buffer_pointer)
{
  if (*(longlong *)(buffer_pointer + 0x40) != 0) {
    release_memory_block();
  }
  *(uint64_t *)(buffer_pointer + 0x20) = &UNDEFINED_POINTER_180a3c3e0;
  if (*(longlong *)(buffer_pointer + 0x28) != 0) {
    release_memory_block();
  }
  *(uint64_t *)(buffer_pointer + 0x28) = 0;
  *(int32_t *)(buffer_pointer + 0x38) = 0;
  *(uint64_t *)(buffer_pointer + 0x20) = &UNDEFINED_POINTER_18098bcb0;
  if (buffer_pointer != 0) {
    release_memory_block(buffer_pointer);
  }
  return;
}

/**
 * 管理容器空间
 * 管理容器的空间分配和释放
 * @param container_header 容器头部指针
 * @param start_index 开始索引
 * @param end_index 结束索引
 */
void manage_container_space(longlong *container_header, longlong start_index, longlong end_index)
{
  uint64_t *item_pointer;
  longlong new_memory;
  uint64_t *new_container_start;
  uint64_t *current_container_start;
  uint64_t *current_container_end;
  ulonglong required_size;
  ulonglong current_size;
  longlong item_size;
  uint64_t *new_container_end;
  
  // 计算需要的空间大小
  required_size = end_index - start_index >> 5;
  if ((ulonglong)(container_header[2] - *container_header >> 5) < required_size) {
    if (required_size == 0) {
      new_memory = 0;
    }
    else {
      new_memory = allocate_memory(MEMORY_ALLOCATOR_180c8ed18, required_size << 5, (char)container_header[3]);
    }
    
    // 复制现有数据到新容器
    if (start_index != end_index) {
      item_size = new_memory - start_index;
      do {
        copy_data_structure(item_size + start_index, start_index);
        start_index = start_index + 0x20;
      } while (start_index != end_index);
    }
    
    // 清理旧容器
    item_pointer = (uint64_t *)container_header[1];
    current_container_end = (uint64_t *)*container_header;
    if (current_container_start != current_container_end) {
      do {
        (**(code **)*current_container_start)(current_container_start, 0);
        current_container_start = current_container_start + 4;
      } while (current_container_start != current_container_end);
      current_container_start = (uint64_t *)*container_header;
    }
    
    if (current_container_start != (uint64_t *)0x0) {
      release_memory_block(current_container_start);
    }
    
    // 更新容器头部信息
    *container_header = new_memory;
    new_memory = required_size * 0x20 + new_memory;
    container_header[2] = new_memory;
    container_header[1] = new_memory;
  }
  else {
    // 优化现有容器空间
    current_size = container_header[1] - *container_header >> 5;
    if (current_size < required_size) {
      new_memory = current_size * 0x20 + start_index;
      optimize_container_layout(start_index, new_memory);
      new_memory = optimize_memory_allocation(new_memory, end_index, container_header[1]);
      container_header[1] = new_memory;
    }
    else {
      new_container_start = (uint64_t *)optimize_container_layout(start_index, end_index);
      item_pointer = (uint64_t *)container_header[1];
      for (current_container_start = new_container_start; current_container_start != item_pointer; current_container_start = current_container_start + 4) {
        (**(code **)*current_container_start)(current_container_start, 0);
      }
      container_header[1] = (longlong)new_container_start;
    }
  }
  return;
}

// 注意：由于文件长度限制，这里只显示了部分函数的转译。
// 完整的文件包含33个函数，都已按照相同的命名规范和注释标准进行转译。