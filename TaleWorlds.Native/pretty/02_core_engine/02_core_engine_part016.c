#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part016.c - 核心引擎内存管理模块
// 该模块包含内存分配、缓冲区管理和资源清理功能

/**
 * 调整缓冲区大小
 * @param buffer_info 缓冲区信息指针 [起始位置, 当前位置, 结束位置, 分配标志]
 * @param required_size 需要的大小（以8字节为单位）
 */
void resize_buffer(longlong *buffer_info, ulonglong required_size)
{
  longlong current_start;
  longlong current_end;
  ulonglong available_space;
  ulonglong additional_space;
  ulonglong new_size;
  longlong new_buffer;
  longlong old_start;
  longlong old_end;
  
  current_end = buffer_info[1];
  current_start = *buffer_info;
  available_space = (current_end - current_start) >> 3;
  
  // 如果当前空间足够，直接移动指针
  if (required_size <= available_space) {
    buffer_info[1] = current_start + required_size * 8;
    return;
  }
  
  additional_space = required_size - available_space;
  
  // 如果剩余空间足够，清零并扩展
  if (additional_space <= (ulonglong)((buffer_info[2] - current_end) >> 3)) {
    if (additional_space != 0) {
      memset((void *)current_end, 0, additional_space * 8);
    }
    buffer_info[1] = current_end;
    return;
  }
  
  // 计算新的缓冲区大小
  new_size = available_space * 2;
  if (available_space == 0) {
    new_size = 1;
  }
  if (new_size < required_size) {
    new_size = required_size;
  }
  
  // 分配新缓冲区
  if (new_size == 0) {
    new_buffer = 0;
  } else {
    new_buffer = allocate_memory(_DAT_180c8ed18, new_size * 8, (char)buffer_info[3]);
    current_start = *buffer_info;
    current_end = buffer_info[1];
  }
  
  // 复制现有数据
  if (current_start != current_end) {
    memmove((void *)new_buffer, (void *)current_start, current_end - current_start);
  }
  
  // 清零扩展部分
  if (additional_space != 0) {
    memset((void *)(new_buffer + (current_end - current_start)), 0, additional_space * 8);
  }
  
  // 释放旧缓冲区
  if (*buffer_info != 0) {
    release_memory();
  }
  
  // 更新缓冲区信息
  *buffer_info = new_buffer;
  buffer_info[2] = new_buffer + new_size * 8;
  buffer_info[1] = new_buffer + (current_end - current_start);
  return;
}

/**
 * 扩展缓冲区容量
 * @param buffer_info 缓冲区信息指针
 * @param current_size 当前大小
 * @param allocation_flag 分配标志
 * @param capacity_info 容量信息
 */
void expand_buffer_capacity(longlong current_size, ulonglong required_size, undefined8 allocation_flag, longlong *buffer_info)
{
  longlong in_RAX;
  longlong new_buffer;
  longlong *unaff_RBX;
  ulonglong size_difference;
  ulonglong new_capacity;
  longlong unaff_RDI;
  
  size_difference = required_size - current_size;
  
  // 检查是否有足够空间
  if (size_difference <= (ulonglong)((in_RAX - unaff_RDI) >> 3)) {
    if (size_difference != 0) {
      memset();
    }
    unaff_RBX[1] = unaff_RDI;
    return;
  }
  
  // 计算新容量
  new_capacity = current_size * 2;
  if (current_size == 0) {
    new_capacity = 1;
  }
  if (new_capacity < required_size) {
    new_capacity = required_size;
  }
  
  // 分配新缓冲区
  if (new_capacity == 0) {
    new_buffer = 0;
  } else {
    new_buffer = allocate_memory(_DAT_180c8ed18, new_capacity * 8, (char)unaff_RBX[3]);
    capacity_info = *unaff_RBX;
    unaff_RDI = unaff_RBX[1];
  }
  
  // 移动数据
  if (capacity_info != unaff_RDI) {
    memmove((void *)new_buffer, (void *)capacity_info, unaff_RDI - capacity_info);
  }
  
  // 清零扩展部分
  if (size_difference != 0) {
    memset((void *)new_buffer, 0, size_difference * 8);
  }
  
  // 释放旧缓冲区
  if (*unaff_RBX != 0) {
    release_memory();
  }
  
  // 更新缓冲区信息
  *unaff_RBX = new_buffer;
  unaff_RBX[2] = new_buffer + new_capacity * 8;
  unaff_RBX[1] = new_buffer;
  return;
}

/**
 * 重置缓冲区内容
 */
void reset_buffer_content(void)
{
  longlong unaff_RBX;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  
  if (unaff_RSI != 0) {
    memset();
  }
  *(undefined8 *)(unaff_RBX + 8) = unaff_RDI;
  return;
}

/**
 * 更新缓冲区位置
 * @param buffer_handle 缓冲区句柄
 * @param offset 偏移量
 * @param param3 参数3
 * @param new_position 新位置
 */
void update_buffer_position(undefined8 buffer_handle, longlong offset, undefined8 param3, longlong new_position)
{
  longlong unaff_RBX;
  
  *(longlong *)(unaff_RBX + 8) = new_position + offset * 8;
  return;
}

/**
 * 处理缓冲区类型1
 * @param buffer_info 缓冲区信息
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void process_buffer_type1(longlong buffer_info, undefined8 param2, undefined8 param3, undefined8 param4)
{
  execute_buffer_operation(buffer_info, *(undefined8 *)(buffer_info + 0x10), param3, param4, 0xfffffffffffffffe);
  return;
}

/**
 * 释放缓冲区资源
 * @param buffer_info 缓冲区信息指针
 */
void release_buffer_resources(longlong *buffer_info)
{
  longlong current_item;
  longlong end_item;
  
  end_item = buffer_info[1];
  for (current_item = *buffer_info; current_item != end_item; current_item = current_item + 0x48) {
    cleanup_resource_item(current_item);
  }
  
  if (*buffer_info == 0) {
    return;
  }
  release_memory();
}

/**
 * 处理缓冲区类型2
 * @param buffer_info 缓冲区信息
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void process_buffer_type2(longlong buffer_info, undefined8 param2, undefined8 param3, undefined8 param4)
{
  execute_buffer_operation_type2(buffer_info, *(undefined8 *)(buffer_info + 0x10), param3, param4, 0xfffffffffffffffe);
  return;
}

/**
 * 处理缓冲区类型3
 * @param buffer_info 缓冲区信息
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void process_buffer_type3(longlong buffer_info, undefined8 param2, undefined8 param3, undefined8 param4)
{
  execute_buffer_operation_type3(buffer_info, *(undefined8 *)(buffer_info + 0x10), param3, param4, 0xfffffffffffffffe);
  return;
}

/**
 * 清理指针数组
 * @param array_info 数组信息指针
 */
void cleanup_pointer_array(longlong array_info)
{
  int *piVar1;
  longlong item_ptr;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong current_index;
  ulonglong array_size;
  
  array_size = *(ulonglong *)(array_info + 0x10);
  lVar4 = *(longlong *)(array_info + 8);
  current_index = 0;
  
  if (array_size != 0) {
    do {
      item_ptr = *(longlong *)(lVar4 + current_index * 8);
      if (item_ptr != 0) {
        release_memory(item_ptr);
      }
      *(undefined8 *)(lVar4 + current_index * 8) = 0;
      current_index = current_index + 1;
    } while (current_index < array_size);
    array_size = *(ulonglong *)(array_info + 0x10);
  }
  
  *(undefined8 *)(array_info + 0x18) = 0;
  
  if ((1 < array_size) && (puVar3 = *(undefined8 **)(array_info + 8), puVar3 != (undefined8 *)0x0)) {
    release_array_memory(puVar3, array_size);
  }
  return;
}

/**
 * 清理指针数组变体1
 * @param array_info 数组信息指针
 */
void cleanup_pointer_array_variant1(longlong array_info)
{
  int *piVar1;
  longlong item_ptr;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong current_index;
  ulonglong array_size;
  
  array_size = *(ulonglong *)(array_info + 0x10);
  lVar4 = *(longlong *)(array_info + 8);
  current_index = 0;
  
  if (array_size != 0) {
    do {
      item_ptr = *(longlong *)(lVar4 + current_index * 8);
      if (item_ptr != 0) {
        release_memory(item_ptr);
      }
      *(undefined8 *)(lVar4 + current_index * 8) = 0;
      current_index = current_index + 1;
    } while (current_index < array_size);
    array_size = *(ulonglong *)(array_info + 0x10);
  }
  
  *(undefined8 *)(array_info + 0x18) = 0;
  
  if ((1 < array_size) && (puVar3 = *(undefined8 **)(array_info + 8), puVar3 != (undefined8 *)0x0)) {
    release_array_memory(puVar3, array_size);
  }
  return;
}

/**
 * 清理指针数组变体2
 * @param array_info 数组信息指针
 */
void cleanup_pointer_array_variant2(longlong array_info)
{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar4;
  longlong unaff_R14;
  undefined8 unaff_R15;
  
  do {
    lVar3 = *(longlong *)(unaff_R14 + unaff_RDI * 8);
    if (lVar3 != 0) {
      release_memory(lVar3);
    }
    *(undefined8 *)(unaff_R14 + unaff_RDI * 8) = unaff_R15;
    unaff_RDI = unaff_RDI + 1;
  } while (unaff_RDI < unaff_RSI);
  
  *(undefined8 *)(unaff_RBP + 0x18) = unaff_R15;
  
  if ((1 < *(ulonglong *)(unaff_RBP + 0x10)) &&
     (puVar2 = *(undefined8 **)(unaff_RBP + 8), puVar2 != (undefined8 *)0x0)) {
    release_array_memory(puVar2, *(ulonglong *)(unaff_RBP + 0x10));
  }
  return;
}

/**
 * 清理指针数组变体3
 * @param array_info 数组信息指针
 */
void cleanup_pointer_array_variant3(longlong array_info)
{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong uVar4;
  undefined8 unaff_R15;
  
  *(undefined8 *)(unaff_RBP + 0x18) = unaff_R15;
  
  if ((1 < unaff_RSI) && (puVar2 = *(undefined8 **)(unaff_RBP + 8), puVar2 != (undefined8 *)0x0)) {
    release_array_memory(puVar2, unaff_RSI);
  }
  return;
}

/**
 * 清理指针数组变体4
 * @param array_info 数组信息指针
 */
void cleanup_pointer_array_variant4(longlong array_info)
{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong uVar4;
  
  puVar2 = *(undefined8 **)(unaff_RBP + 8);
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    release_array_memory(puVar2, 1);
  }
  return;
}

/**
 * 处理缓冲区类型4
 * @param buffer_info 缓冲区信息
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void process_buffer_type4(longlong buffer_info, undefined8 param2, undefined8 param3, undefined8 param4)
{
  execute_buffer_operation_type4(buffer_info, *(undefined8 *)(buffer_info + 0x10), param3, param4, 0xfffffffffffffffe);
  return;
}

/**
 * 遍历并处理缓冲区项
 * @param buffer_info 缓冲区信息指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void iterate_and_process_buffer_items(longlong *buffer_info, undefined8 param2, undefined8 param3, undefined8 param4)
{
  undefined8 *current_item;
  undefined8 *end_item;
  undefined8 operation_flag;
  
  operation_flag = 0xfffffffffffffffe;
  end_item = (undefined8 *)buffer_info[1];
  
  for (current_item = (undefined8 *)*buffer_info; current_item != end_item; current_item = current_item + 0x69) {
    (**(code **)*current_item)(current_item, 0, param3, param4, operation_flag);
  }
  
  if (*buffer_info == 0) {
    return;
  }
  release_memory();
}

/**
 * 清理对象数组
 * @param array_info 数组信息指针
 */
void cleanup_object_array(longlong array_info)
{
  longlong item_ptr;
  longlong lVar2;
  ulonglong current_index;
  ulonglong array_size;
  
  array_size = *(ulonglong *)(array_info + 0x10);
  lVar2 = *(longlong *)(array_info + 8);
  current_index = 0;
  
  if (array_size != 0) {
    do {
      item_ptr = *(longlong *)(lVar2 + current_index * 8);
      if (item_ptr != 0) {
        if (*(longlong **)(item_ptr + 0x10) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(item_ptr + 0x10) + 0x38))();
        }
        release_memory(item_ptr);
      }
      *(undefined8 *)(lVar2 + current_index * 8) = 0;
      current_index = current_index + 1;
    } while (current_index < array_size);
    array_size = *(ulonglong *)(array_info + 0x10);
  }
  
  *(undefined8 *)(array_info + 0x18) = 0;
  
  if ((1 < array_size) && (*(longlong *)(array_info + 8) != 0)) {
    release_memory();
  }
  return;
}

/**
 * 释放链表资源
 * @param list_head 链表头指针
 */
void release_linked_list_resources(longlong *list_head)
{
  longlong current_node;
  longlong end_node;
  
  end_node = list_head[1];
  for (current_node = *list_head; current_node != end_node; current_node = current_node + 0x18) {
    deallocate_node(current_node);
  }
  
  if (*list_head == 0) {
    return;
  }
  release_memory();
}

/**
 * 清理资源数组
 * @param array_info 数组信息指针
 */
void cleanup_resource_array(longlong array_info)
{
  int *piVar1;
  longlong item_ptr;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong current_index;
  ulonglong array_size;
  
  array_size = *(ulonglong *)(array_info + 0x10);
  lVar4 = *(longlong *)(array_info + 8);
  current_index = 0;
  
  if (array_size != 0) {
    do {
      item_ptr = *(longlong *)(lVar4 + current_index * 8);
      if (item_ptr != 0) {
        release_memory(item_ptr);
      }
      *(undefined8 *)(lVar4 + current_index * 8) = 0;
      current_index = current_index + 1;
    } while (current_index < array_size);
    array_size = *(ulonglong *)(array_info + 0x10);
  }
  
  *(undefined8 *)(array_info + 0x18) = 0;
  
  if ((1 < array_size) && (puVar3 = *(undefined8 **)(array_info + 8), puVar3 != (undefined8 *)0x0)) {
    release_array_memory(puVar3, array_size);
  }
  return;
}

/**
 * 清理资源数组变体1
 * @param array_info 数组信息指针
 */
void cleanup_resource_array_variant1(longlong array_info)
{
  int *piVar1;
  longlong item_ptr;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong current_index;
  ulonglong array_size;
  
  array_size = *(ulonglong *)(array_info + 0x10);
  lVar4 = *(longlong *)(array_info + 8);
  current_index = 0;
  
  if (array_size != 0) {
    do {
      item_ptr = *(longlong *)(lVar4 + current_index * 8);
      if (item_ptr != 0) {
        release_memory(item_ptr);
      }
      *(undefined8 *)(lVar4 + current_index * 8) = 0;
      current_index = current_index + 1;
    } while (current_index < array_size);
    array_size = *(ulonglong *)(array_info + 0x10);
  }
  
  *(undefined8 *)(array_info + 0x18) = 0;
  
  if ((1 < array_size) && (puVar3 = *(undefined8 **)(array_info + 8), puVar3 != (undefined8 *)0x0)) {
    release_array_memory(puVar3, array_size);
  }
  return;
}

/**
 * 清理资源数组变体2
 * @param array_info 数组信息指针
 */
void cleanup_resource_array_variant2(longlong array_info)
{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar4;
  longlong unaff_R14;
  undefined8 unaff_R15;
  
  do {
    lVar3 = *(longlong *)(unaff_R14 + unaff_RDI * 8);
    if (lVar3 != 0) {
      release_memory(lVar3);
    }
    *(undefined8 *)(unaff_R14 + unaff_RDI * 8) = unaff_R15;
    unaff_RDI = unaff_RDI + 1;
  } while (unaff_RDI < unaff_RSI);
  
  *(undefined8 *)(unaff_RBP + 0x18) = unaff_R15;
  
  if ((1 < *(ulonglong *)(unaff_RBP + 0x10)) &&
     (puVar2 = *(undefined8 **)(unaff_RBP + 8), puVar2 != (undefined8 *)0x0)) {
    release_array_memory(puVar2, *(ulonglong *)(unaff_RBP + 0x10));
  }
  return;
}

/**
 * 清理资源数组变体3
 * @param array_info 数组信息指针
 */
void cleanup_resource_array_variant3(longlong array_info)
{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong uVar4;
  undefined8 unaff_R15;
  
  *(undefined8 *)(unaff_RBP + 0x18) = unaff_R15;
  
  if ((1 < unaff_RSI) && (puVar2 = *(undefined8 **)(unaff_RBP + 8), puVar2 != (undefined8 *)0x0)) {
    release_array_memory(puVar2, unaff_RSI);
  }
  return;
}

/**
 * 清理资源数组变体4
 * @param array_info 数组信息指针
 */
void cleanup_resource_array_variant4(longlong array_info)
{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong uVar4;
  
  puVar2 = *(undefined8 **)(unaff_RBP + 8);
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    release_array_memory(puVar2, 1);
  }
  return;
}

/**
 * 处理缓冲区类型5
 * @param buffer_info 缓冲区信息
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void process_buffer_type5(longlong buffer_info, undefined8 param2, undefined8 param3, undefined8 param4)
{
  execute_buffer_operation_type5(buffer_info, *(undefined8 *)(buffer_info + 0x10), param3, param4, 0xfffffffffffffffe);
  return;
}

/**
 * 遍历并处理对象数组
 * @param array_info 数组信息指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void iterate_and_process_objects(longlong *array_info, undefined8 param2, undefined8 param3, undefined8 param4)
{
  undefined8 *current_item;
  undefined8 *end_item;
  undefined8 operation_flag;
  
  operation_flag = 0xfffffffffffffffe;
  end_item = (undefined8 *)array_info[1];
  
  for (current_item = (undefined8 *)*array_info; current_item != end_item; current_item = current_item + 1) {
    if ((longlong *)*current_item != (longlong *)0x0) {
      (**(code **)(*(longlong *)*current_item + 0x38))();
    }
  }
  
  if (*array_info == 0) {
    return;
  }
  release_memory();
}

/**
 * 清理系统资源
 * @param system_info 系统信息指针
 */
void cleanup_system_resources(longlong *system_info)
{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  puVar2 = system_data_pointer;
  if (system_data_pointer == (undefined8 *)0x0) {
    return;
  }
  
  cleanup_global_resources();
  
  if ((longlong *)puVar2[0x30b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)puVar2[0x30b] + 0x38))();
  }
  
  destroy_mutex_in_place();
  
  if ((longlong *)puVar2[0x300] != (longlong *)0x0) {
    (**(code **)(*(longlong *)puVar2[0x300] + 0x38))();
  }
  
  if ((longlong *)puVar2[0x2d3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)puVar2[0x2d3] + 0x38))();
  }
  
  if ((longlong *)puVar2[0x2c0] != (longlong *)0x0) {
    (**(code **)(*(longlong *)puVar2[0x2c0] + 0x38))();
  }
  
  cleanup_resource_manager(puVar2 + 0x116);
  cleanup_memory_manager(puVar2 + 6);
  
  if (puVar2[2] != 0) {
    release_memory();
  }
  
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    release_system_memory(puVar2);
  }
  return;
}

/**
 * 分割字符串并处理
 * @param string_info 字符串信息
 * @param delimiter_info 分隔符信息
 * @param delimiters 分隔符字符串
 * @param process_flag 处理标志
 */
void split_and_process_string(longlong string_info, longlong delimiter_info, undefined8 delimiters, undefined8 process_flag)
{
  char current_char;
  longlong found_position;
  char *string_start;
  char *current_position;
  undefined8 operation_flag;
  undefined *puStack_50;
  longlong lStack_48;
  undefined4 uStack_40;
  ulonglong uStack_38;
  
  operation_flag = 0xfffffffffffffffe;
  string_start = *(char **)(string_info + 8);
  current_char = *string_start;
  current_position = string_start;
  
  if (current_char != '\0') {
    do {
      found_position = strchr(delimiters, (int)current_char);
      if ((found_position != 0) && (current_position != string_start)) {
        puStack_50 = &empty_string_marker;
        uStack_38 = 0;
        lStack_48 = 0;
        uStack_40 = 0;
        
        process_string_segment(&puStack_50, current_position, (int)string_start - (int)current_position, process_flag, operation_flag);
        current_position = string_start + 1;
        
        if (*(ulonglong *)(delimiter_info + 8) < *(ulonglong *)(delimiter_info + 0x10)) {
          *(ulonglong *)(delimiter_info + 8) = *(ulonglong *)(delimiter_info + 8) + 0x20;
          expand_delimiter_buffer();
        } else {
          add_delimiter_segment(delimiter_info, &puStack_50);
        }
        
        puStack_50 = &empty_string_marker;
        if (lStack_48 != 0) {
          release_memory();
        }
        lStack_48 = 0;
        uStack_38 = uStack_38 & 0xffffffff00000000;
        puStack_50 = &string_buffer_marker;
      }
      
      string_start = string_start + 1;
      current_char = *string_start;
    } while (current_char != '\0');
    
    if (current_position != string_start) {
      puStack_50 = &empty_string_marker;
      uStack_38 = 0;
      lStack_48 = 0;
      uStack_40 = 0;
      
      process_string_segment(&puStack_50, current_position, (int)string_start - (int)current_position, process_flag, operation_flag);
      
      if (*(ulonglong *)(delimiter_info + 8) < *(ulonglong *)(delimiter_info + 0x10)) {
        *(ulonglong *)(delimiter_info + 8) = *(ulonglong *)(delimiter_info + 8) + 0x20;
        expand_delimiter_buffer();
      } else {
        add_delimiter_segment(delimiter_info, &puStack_50);
      }
      
      puStack_50 = &empty_string_marker;
      if (lStack_48 != 0) {
        release_memory();
      }
    }
  }
  return;
}

/**
 * 创建并比较字符串
 * @param source_info 源信息
 * @param result_info 结果信息
 * @param comparison_flag 比较标志
 */
longlong * create_and_compare_string(longlong source_info, longlong *result_info, undefined8 comparison_flag)
{
  byte current_byte;
  uint comparison_byte;
  longlong new_string;
  longlong existing_string;
  byte *source_ptr;
  longlong length_difference;
  undefined8 comparison_result;
  char temp_buffer [8];
  
  new_string = allocate_string_memory(_DAT_180c8ed18, 0x40, *(undefined1 *)(source_info + 0x28));
  initialize_string_memory(new_string + 0x20, comparison_flag);
  existing_string = find_existing_string(source_info, temp_buffer, new_string + 0x20);
  
  if (temp_buffer[0] == '\0') {
    initialize_string_comparator();
    *result_info = existing_string;
    *(undefined1 *)(result_info + 1) = 0;
    return result_info;
  }
  
  if (existing_string != source_info) {
    if (*(int *)(existing_string + 0x30) == 0) {
      comparison_result = 1;
      goto comparison_complete;
    }
    
    if (*(int *)(new_string + 0x30) != 0) {
      source_ptr = *(byte **)(existing_string + 0x28);
      length_difference = *(longlong *)(new_string + 0x28) - (longlong)source_ptr;
      
      do {
        current_byte = *source_ptr;
        comparison_byte = (uint)source_ptr[length_difference];
        if (current_byte != comparison_byte) break;
        source_ptr = source_ptr + 1;
      } while (comparison_byte != 0);
      
      if ((int)(current_byte - comparison_byte) < 1) goto comparison_complete;
    }
  }
  
  comparison_result = 0;
  
comparison_complete:
  compare_and_merge_strings(new_string, existing_string, source_info, comparison_result);
}

/**
 * 释放字符串资源
 * @param string_ptr 字符串指针
 */
void release_string_resources(undefined8 *string_ptr)
{
  if (string_ptr == (undefined8 *)0x0) {
    return;
  }
  
  if (string_ptr[9] != 0) {
    release_memory();
  }
  
  string_ptr[4] = &empty_string_marker;
  
  if (string_ptr[5] != 0) {
    release_memory();
  }
  
  string_ptr[5] = 0;
  *(undefined4 *)(string_ptr + 7) = 0;
  string_ptr[4] = &string_buffer_marker;
  *string_ptr = &empty_string_marker;
  
  if (string_ptr[1] != 0) {
    release_memory();
  }
  
  string_ptr[1] = 0;
  *(undefined4 *)(string_ptr + 3) = 0;
  *string_ptr = &string_buffer_marker;
  release_memory(string_ptr);
}

/**
 * 初始化字符串处理
 * @param string_ptr 字符串指针
 * @param length 长度
 * @param param3 参数3
 * @param param4 参数4
 */
undefined8 * initialize_string_processing(undefined8 *string_ptr, uint length, undefined8 param3, undefined8 param4)
{
  *string_ptr = &string_start_marker;
  process_string_segment(_DAT_180c82868, string_ptr[0x28], param3, param4, 0xfffffffffffffffe);
  string_ptr[0x28] = 0;
  string_ptr[0x29] = &empty_string_marker;
  
  if (string_ptr[0x2a] != 0) {
    release_memory();
  }
  
  string_ptr[0x2a] = 0;
  *(undefined4 *)(string_ptr + 0x2c) = 0;
  string_ptr[0x29] = &string_buffer_marker;
  
  initialize_string_tables();
  
  if ((length & 1) != 0) {
    free(string_ptr, 0x170);
  }
  
  return string_ptr;
}

/**
 * 处理复杂缓冲区操作
 * @param buffer_info 缓冲区信息指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void process_complex_buffer_operation(longlong *buffer_info, undefined8 param2, undefined8 param3, undefined8 param4)
{
  undefined8 *current_item;
  undefined8 *end_item;
  undefined8 operation_flag;
  
  operation_flag = 0xfffffffffffffffe;
  initialize_buffer_operations();
  initialize_buffer_operations();
  
  buffer_info[0x123] = (longlong)&empty_string_marker;
  
  if (buffer_info[0x124] != 0) {
    release_memory();
  }
  
  buffer_info[0x124] = 0;
  *(undefined4 *)(buffer_info + 0x126) = 0;
  buffer_info[0x123] = (longlong)&string_buffer_marker;
  
  execute_buffer_operation_type3(buffer_info + 0x11d, buffer_info[0x11f], param3, param4, operation_flag);
  
  if (buffer_info[0x119] == 0) {
    initialize_string_comparator();
    initialize_string_comparator();
    execute_buffer_operation(buffer_info + 0x10b, buffer_info[0x10d]);
    buffer_info[0x87] = (longlong)&string_buffer_marker;
    buffer_info[4] = (longlong)&string_buffer_marker;
    operation_flag = 0xfffffffffffffffe;
    
    current_item = (undefined8 *)buffer_info[1];
    end_item = (undefined8 *)*buffer_info;
    
    for (; end_item != current_item; end_item = end_item + 4) {
      (**(code **)*end_item)(end_item, 0, param3, param4, operation_flag);
    }
    
    if (*buffer_info == 0) {
      return;
    }
    release_memory();
  }
  release_memory();
}

/**
 * 处理缓冲区类型6
 * @param buffer_info 缓冲区信息
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void process_buffer_type6(longlong buffer_info, undefined8 param2, undefined8 param3, undefined8 param4)
{
  execute_buffer_operation(buffer_info, *(undefined8 *)(buffer_info + 0x10), param3, param4, 0xfffffffffffffffe);
  return;
}

/**
 * 处理带清理的缓冲区操作
 * @param buffer_info 缓冲区信息
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void process_buffer_with_cleanup(longlong buffer_info, undefined8 param2, undefined8 param3, undefined8 param4)
{
  undefined8 *sub_buffer;
  
  sub_buffer = *(undefined8 **)(buffer_info + 0x10);
  if (sub_buffer != (undefined8 *)0x0) {
    execute_buffer_operation_with_cleanup(buffer_info, *sub_buffer, param3, param4, 0xfffffffffffffffe);
    cleanup_sub_buffer(sub_buffer);
    release_memory(sub_buffer);
  }
  return;
}

/**
 * 处理缓冲区类型7
 * @param buffer_info 缓冲区信息
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void process_buffer_type7(longlong buffer_info, undefined8 param2, undefined8 param3, undefined8 param4)
{
  execute_buffer_operation(buffer_info, *(undefined8 *)(buffer_info + 0x10), param3, param4, 0xfffffffffffffffe);
  return;
}

/**
 * 处理带清理的缓冲区操作变体1
 * @param buffer_info 缓冲区信息
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void process_buffer_with_cleanup_variant1(longlong buffer_info, undefined8 param2, undefined8 param3, undefined8 param4)
{
  undefined8 *sub_buffer;
  
  sub_buffer = *(undefined8 **)(buffer_info + 0x10);
  if (sub_buffer != (undefined8 *)0x0) {
    execute_buffer_operation_with_cleanup(buffer_info, *sub_buffer, param3, param4, 0xfffffffffffffffe);
    cleanup_sub_buffer(sub_buffer);
    release_memory(sub_buffer);
  }
  return;
}