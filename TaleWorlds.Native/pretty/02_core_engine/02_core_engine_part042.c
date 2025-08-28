#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part042.c - 核心引擎内存管理函数
// 本文件包含14个函数，主要用于内存分配、数据结构管理和容器操作

/**
 * 验证指针数组的有效性
 * 检查数组中的每个指针是否为非空，如果发现空指针则触发错误处理
 * 
 * @param array_info 包含数组起始和结束地址的结构体指针
 */
void validate_pointer_array(longlong *array_info)
{
  longlong *current_ptr;
  
  // 遍历指针数组，检查每个指针的有效性
  for (current_ptr = (longlong *)*array_info; current_ptr != (longlong *)array_info[1]; current_ptr = current_ptr + 4) {
    if (*current_ptr != 0) {
      // 发现无效指针，触发错误处理（该函数不会返回）
      trigger_memory_error();
    }
  }
  
  // 检查数组起始指针是否为空
  if (*array_info == 0) {
    return;
  }
  
  // 起始指针无效，触发错误处理（该函数不会返回）
  trigger_memory_error();
}



/**
 * 创建并初始化数据容器
 * 分配内存并设置容器的相关函数指针和数据
 * 
 * @param container_ptr 指向容器指针的指针
 * @param source_data 源数据指针
 * @return 初始化后的容器指针
 */
uint64_t *create_data_container(uint64_t *container_ptr, uint64_t *source_data)
{
  int8_t byte_data;
  uint64_t data_field1;
  uint64_t data_field2;
  uint64_t data_field3;
  uint64_t *new_container;
  
  // 从源数据提取字段信息
  data_field1 = *source_data;
  byte_data = *(int8_t *)(source_data + 1);
  data_field2 = source_data[2];
  source_data[2] = 0;  // 清空源数据字段
  data_field3 = source_data[3];
  source_data[3] = 0;  // 清空源数据字段
  
  // 设置容器的函数指针
  container_ptr[2] = get_container_data_field1;
  container_ptr[3] = get_container_data_field2;
  
  // 分配新容器的内存
  new_container = (uint64_t *)allocate_container_memory(memory_allocator_ptr, 0x20, 8, default_memory_flags, 0xfffffffffffffffe);
  
  // 初始化新容器
  *new_container = data_field1;
  *(int8_t *)(new_container + 1) = byte_data;
  new_container[2] = data_field2;
  new_container[3] = data_field3;
  *container_ptr = new_container;
  
  // 调用源数据的析构函数（如果存在）
  if ((longlong *)source_data[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)source_data[3] + 0x38))();
  }
  if ((longlong *)source_data[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)source_data[2] + 0x38))();
  }
  
  return container_ptr;
}



// 核心引擎内存管理函数 - 第三部分：缓冲区创建函数

/**
 * 创建4倍大小的数据缓冲区
 * 为指定大小的数据分配4倍内存空间的缓冲区
 * 
 * @param param1 系统参数
 * @param buffer_ptr 指向缓冲区指针的指针
 * @param size 原始数据大小
 */
void create_quad_size_buffer(uint64_t param1, longlong *buffer_ptr, int size)
{
  uint64_t system_data;
  uint64_t allocated_memory;
  int8_t stack_buffer[32];
  int32_t stack_flag;
  uint64_t stack_param;
  longlong *buffer_info;
  void *stack_ptr1;
  int8_t *stack_ptr2;
  int32_t stack_size;
  int8_t stack_data[72];
  ulonglong stack_guard;
  
  system_data = system_config_data;
  stack_param = 0xfffffffffffffffe;
  stack_guard = STACK_GUARD_VALUE ^ (ulonglong)stack_buffer;
  stack_flag = 0;
  size = size * 4;  // 4倍大小
  
  // 设置栈参数
  stack_ptr1 = &debug_info_ptr;
  stack_ptr2 = stack_data;
  stack_data[0] = 0;
  stack_size = 0x1c;
  buffer_info = buffer_ptr;
  
  // 复制调试信息
  strcpy_s(stack_data, 0x40, &debug_string_data);
  initialize_debug_system();
  stack_ptr1 = &system_debug_ptr;
  
  // 分配内存
  allocated_memory = allocate_buffer_memory(memory_allocator_ptr, size, 0x10, 3);
  
  // 初始化缓冲区
  initialize_quad_buffer(system_data, buffer_ptr);
  *(uint64_t *)(*buffer_ptr + 0x10) = allocated_memory;
  *(int *)(*buffer_ptr + 0x18) = size;
  *(int *)(*buffer_ptr + 0x1c) = size;
  *(int8_t *)(*buffer_ptr + 0x20) = 0;
  stack_flag = 1;
  
  // 执行缓冲区操作（该函数不会返回）
  execute_buffer_operation(stack_guard ^ (ulonglong)stack_buffer);
}



/**
 * 创建2倍大小的数据缓冲区
 * 为指定大小的数据分配2倍内存空间的缓冲区
 * 
 * @param param1 系统参数
 * @param buffer_ptr 指向缓冲区指针的指针
 * @param size 原始数据大小
 */
void create_double_size_buffer(uint64_t param1, longlong *buffer_ptr, int size)
{
  uint64_t system_data;
  uint64_t allocated_memory;
  int8_t stack_buffer[32];
  int32_t stack_flag;
  uint64_t stack_param;
  longlong *buffer_info;
  void *stack_ptr1;
  int8_t *stack_ptr2;
  int32_t stack_size;
  int8_t stack_data[72];
  ulonglong stack_guard;
  
  system_data = system_config_data;
  stack_param = 0xfffffffffffffffe;
  stack_guard = STACK_GUARD_VALUE ^ (ulonglong)stack_buffer;
  stack_flag = 0;
  size = size * 2;  // 2倍大小
  
  // 设置栈参数
  stack_ptr1 = &debug_info_ptr;
  stack_ptr2 = stack_data;
  stack_data[0] = 0;
  stack_size = 0x1c;
  buffer_info = buffer_ptr;
  
  // 复制调试信息
  strcpy_s(stack_data, 0x40, &debug_string_data);
  initialize_debug_system();
  stack_ptr1 = &system_debug_ptr;
  
  // 分配内存
  allocated_memory = allocate_buffer_memory(memory_allocator_ptr, size, 0x10, 3);
  
  // 初始化缓冲区
  initialize_double_buffer(system_data, buffer_ptr);
  *(uint64_t *)(*buffer_ptr + 0x10) = allocated_memory;
  *(int *)(*buffer_ptr + 0x18) = size;
  *(int *)(*buffer_ptr + 0x1c) = size;
  *(int8_t *)(*buffer_ptr + 0x20) = 0;
  stack_flag = 1;
  
  // 执行缓冲区操作（该函数不会返回）
  execute_buffer_operation(stack_guard ^ (ulonglong)stack_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 创建标准数据缓冲区
 * 为指定大小的数据分配标准内存空间的缓冲区
 * 
 * @param param1 系统参数
 * @param buffer_ptr 指向缓冲区指针的指针
 * @param size 数据大小
 */
void create_standard_buffer(uint64_t param1, longlong *buffer_ptr, int32_t size)
{
  uint64_t allocated_memory;
  int8_t stack_buffer[32];
  int32_t stack_flag;
  uint64_t stack_param;
  longlong *buffer_info;
  void *stack_ptr1;
  int8_t *stack_ptr2;
  int32_t stack_size;
  int8_t stack_data[72];
  ulonglong stack_guard;
  
  stack_param = 0xfffffffffffffffe;
  stack_guard = STACK_GUARD_VALUE ^ (ulonglong)stack_buffer;
  stack_flag = 0;
  
  // 设置栈参数
  stack_ptr1 = &debug_info_ptr;
  stack_ptr2 = stack_data;
  stack_data[0] = 0;
  stack_size = 0x1c;
  buffer_info = buffer_ptr;
  
  // 复制调试信息
  strcpy_s(stack_data, 0x40, &debug_string_data);
  initialize_debug_system();
  stack_ptr1 = &system_debug_ptr;
  
  // 分配内存
  allocated_memory = allocate_buffer_memory(memory_allocator_ptr, size, 0x10, 3);
  
  // 初始化标准缓冲区
  initialize_standard_buffer(param1, buffer_ptr);
  stack_flag = 1;
  *(uint64_t *)(*buffer_ptr + 0x10) = allocated_memory;
  *(int32_t *)(*buffer_ptr + 0x18) = size;
  *(int32_t *)(*buffer_ptr + 0x1c) = size;
  *(int8_t *)(*buffer_ptr + 0x20) = 0;
  
  // 执行缓冲区操作（该函数不会返回）
  execute_buffer_operation(stack_guard ^ (ulonglong)stack_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 创建扩展数据缓冲区
 * 为指定大小的数据分配扩展内存空间的缓冲区（使用不同的分配类型）
 * 
 * @param param1 系统参数
 * @param buffer_ptr 指向缓冲区指针的指针
 * @param size 数据大小
 */
void create_extended_buffer(uint64_t param1, longlong *buffer_ptr, int32_t size)
{
  uint64_t system_data;
  uint64_t allocated_memory;
  int8_t stack_buffer[32];
  int32_t stack_flag;
  uint64_t stack_param;
  longlong *buffer_info;
  void *stack_ptr1;
  int8_t *stack_ptr2;
  int32_t stack_size;
  int8_t stack_data[72];
  ulonglong stack_guard;
  
  system_data = system_config_data;
  stack_param = 0xfffffffffffffffe;
  stack_guard = STACK_GUARD_VALUE ^ (ulonglong)stack_buffer;
  stack_flag = 0;
  
  // 设置栈参数
  stack_ptr1 = &debug_info_ptr;
  stack_ptr2 = stack_data;
  stack_data[0] = 0;
  stack_size = 0x1c;
  buffer_info = buffer_ptr;
  
  // 复制调试信息
  strcpy_s(stack_data, 0x40, &debug_string_data);
  initialize_debug_system();
  stack_ptr1 = &system_debug_ptr;
  
  // 分配内存（使用扩展分配类型）
  allocated_memory = allocate_buffer_memory(memory_allocator_ptr, size, 0x10, 0x20);
  
  // 初始化标准缓冲区
  initialize_standard_buffer(system_data, buffer_ptr);
  *(uint64_t *)(*buffer_ptr + 0x10) = allocated_memory;
  *(int32_t *)(*buffer_ptr + 0x18) = size;
  *(int32_t *)(*buffer_ptr + 0x1c) = size;
  *(int8_t *)(*buffer_ptr + 0x20) = 0;
  stack_flag = 1;
  
  // 执行缓冲区操作（该函数不会返回）
  execute_buffer_operation(stack_guard ^ (ulonglong)stack_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 动态数组扩展函数 - 4字节元素
 * 当数组空间不足时，重新分配更大的内存空间并复制现有数据
 * 
 * @param source_array 源数组指针
 * @param target_ptr 指向目标数组指针的指针
 */
void expand_dynamic_array_4byte(longlong source_array, longlong *target_ptr)
{
  int array_size;
  uint64_t system_data;
  longlong *new_buffer;
  longlong allocated_memory;
  int8_t stack_buffer [32];
  int32_t stack_flag;
  longlong *temp_buffer;
  longlong *old_buffer;
  uint64_t stack_param;
  void *stack_ptr1;
  int8_t *stack_ptr2;
  int32_t stack_size;
  int8_t stack_data [72];
  ulonglong stack_guard;
  
  stack_param = 0xfffffffffffffffe;
  stack_guard = STACK_GUARD_VALUE ^ (ulonglong)stack_buffer;
  stack_flag = 0;
  array_size = **(int **)(source_array + 8);
  *(int **)(source_array + 8) = *(int **)(source_array + 8) + 1;
  system_data = system_config_data;
  if (array_size != 0) {
    array_size = array_size * 4;  // 4字节元素
    // 设置栈参数
    stack_ptr1 = &debug_info_ptr;
    stack_ptr2 = stack_data;
    stack_data[0] = 0;
    stack_size = 0x1c;
    strcpy_s(stack_data, 0x40, &debug_string_data);
    initialize_debug_system();
    stack_ptr1 = &system_debug_ptr;
    
    // 分配新内存
    allocated_memory = allocate_buffer_memory(memory_allocator_ptr, array_size, 0x10, 0x1e);
    initialize_4byte_array(system_data, &temp_buffer);
    new_buffer = temp_buffer;
    temp_buffer[2] = allocated_memory;
    *(int *)(temp_buffer + 3) = array_size;
    *(int *)((longlong)temp_buffer + 0x1c) = array_size;
    *(int8_t *)(temp_buffer + 4) = 0;
    stack_flag = 1;
    temp_buffer = (longlong *)0x0;
    old_buffer = (longlong *)*target_ptr;
    *target_ptr = (longlong)new_buffer;
    if (old_buffer != (longlong *)0x0) {
      (**(code **)(*old_buffer + 0x38))();  // 调用旧缓冲区的析构函数
    }
    stack_flag = 0;
    if (temp_buffer != (longlong *)0x0) {
      (**(code **)(*temp_buffer + 0x38))();
    }
    // 复制数据到新缓冲区
    memcpy(*(uint64_t *)(*target_ptr + 0x10), *(uint64_t *)(source_array + 8),
           (longlong)*(int *)(*target_ptr + 0x1c));
  }
  old_buffer = (longlong *)*target_ptr;
  *target_ptr = 0;
  if (old_buffer != (longlong *)0x0) {
    (**(code **)(*old_buffer + 0x38))();
  }
  // 执行缓冲区操作（该函数不会返回）
  execute_buffer_operation(stack_guard ^ (ulonglong)stack_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 动态数组扩展函数 - 替代实现
 * 与上一个函数功能相同，但使用不同的初始化函数
 * 
 * @param source_array 源数组指针
 * @param target_ptr 指向目标数组指针的指针
 */
void expand_dynamic_array_alt(longlong source_array, longlong *target_ptr)
{
  int array_size;
  uint64_t system_data;
  longlong *new_buffer;
  longlong allocated_memory;
  int8_t stack_buffer [32];
  int32_t stack_flag;
  longlong *temp_buffer;
  longlong *old_buffer;
  uint64_t stack_param;
  void *stack_ptr1;
  int8_t *stack_ptr2;
  int32_t stack_size;
  int8_t stack_data [72];
  ulonglong stack_guard;
  
  stack_param = 0xfffffffffffffffe;
  stack_guard = STACK_GUARD_VALUE ^ (ulonglong)stack_buffer;
  stack_flag = 0;
  array_size = **(int **)(source_array + 8);
  *(int **)(source_array + 8) = *(int **)(source_array + 8) + 1;
  system_data = system_config_data;
  if (array_size != 0) {
    array_size = array_size * 4;  // 4字节元素
    // 设置栈参数
    stack_ptr1 = &debug_info_ptr;
    stack_ptr2 = stack_data;
    stack_data[0] = 0;
    stack_size = 0x1c;
    strcpy_s(stack_data, 0x40, &debug_string_data);
    initialize_debug_system();
    stack_ptr1 = &system_debug_ptr;
    
    // 分配新内存
    allocated_memory = allocate_buffer_memory(memory_allocator_ptr, array_size, 0x10, 0x1e);
    initialize_alt_array(system_data, &temp_buffer);
    new_buffer = temp_buffer;
    temp_buffer[2] = allocated_memory;
    *(int *)(temp_buffer + 3) = array_size;
    *(int *)((longlong)temp_buffer + 0x1c) = array_size;
    *(int8_t *)(temp_buffer + 4) = 0;
    stack_flag = 1;
    temp_buffer = (longlong *)0x0;
    old_buffer = (longlong *)*target_ptr;
    *target_ptr = (longlong)new_buffer;
    if (old_buffer != (longlong *)0x0) {
      (**(code **)(*old_buffer + 0x38))();  // 调用旧缓冲区的析构函数
    }
    stack_flag = 0;
    if (temp_buffer != (longlong *)0x0) {
      (**(code **)(*temp_buffer + 0x38))();
    }
    // 复制数据到新缓冲区
    memcpy(*(uint64_t *)(*target_ptr + 0x10), *(uint64_t *)(source_array + 8),
           (longlong)*(int *)(*target_ptr + 0x1c));
  }
  old_buffer = (longlong *)*target_ptr;
  *target_ptr = 0;
  if (old_buffer != (longlong *)0x0) {
    (**(code **)(*old_buffer + 0x38))();
  }
  // 执行缓冲区操作（该函数不会返回）
  execute_buffer_operation(stack_guard ^ (ulonglong)stack_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 动态数组扩展函数 - 24字节元素
 * 处理大元素（24字节）的数组扩展操作
 * 
 * @param source_array 源数组指针
 * @param target_ptr 指向目标数组指针的指针
 */
void expand_dynamic_array_24byte(longlong source_array, longlong *target_ptr)
{
  uint64_t system_data;
  longlong *new_buffer;
  longlong allocated_memory;
  int array_size;
  int8_t stack_buffer [32];
  int32_t stack_flag;
  longlong *temp_buffer;
  longlong *old_buffer;
  uint64_t stack_param;
  void *stack_ptr1;
  int8_t *stack_ptr2;
  int32_t stack_size;
  int8_t stack_data [72];
  ulonglong stack_guard;
  
  stack_param = 0xfffffffffffffffe;
  stack_guard = STACK_GUARD_VALUE ^ (ulonglong)stack_buffer;
  stack_flag = 0;
  array_size = **(int **)(source_array + 8);
  *(int **)(source_array + 8) = *(int **)(source_array + 8) + 1;
  system_data = system_config_data;
  if (array_size != 0) {
    array_size = array_size * 0x18;  // 24字节元素
    // 设置栈参数
    stack_ptr1 = &debug_info_ptr;
    stack_ptr2 = stack_data;
    stack_data[0] = 0;
    stack_size = 0x1c;
    strcpy_s(stack_data, 0x40, &debug_string_data);
    initialize_debug_system();
    stack_ptr1 = &system_debug_ptr;
    
    // 分配新内存
    allocated_memory = allocate_buffer_memory(memory_allocator_ptr, array_size, 0x10, 0x1e);
    initialize_24byte_array(system_data, &temp_buffer);
    new_buffer = temp_buffer;
    temp_buffer[2] = allocated_memory;
    *(int *)(temp_buffer + 3) = array_size;
    *(int *)((longlong)temp_buffer + 0x1c) = array_size;
    *(int8_t *)(temp_buffer + 4) = 0;
    stack_flag = 1;
    temp_buffer = (longlong *)0x0;
    old_buffer = (longlong *)*target_ptr;
    *target_ptr = (longlong)new_buffer;
    if (old_buffer != (longlong *)0x0) {
      (**(code **)(*old_buffer + 0x38))();  // 调用旧缓冲区的析构函数
    }
    stack_flag = 0;
    if (temp_buffer != (longlong *)0x0) {
      (**(code **)(*temp_buffer + 0x38))();
    }
    // 复制数据到新缓冲区
    memcpy(*(uint64_t *)(*target_ptr + 0x10), *(uint64_t *)(source_array + 8),
           (longlong)*(int *)(*target_ptr + 0x1c));
  }
  old_buffer = (longlong *)*target_ptr;
  *target_ptr = 0;
  if (old_buffer != (longlong *)0x0) {
    (**(code **)(*old_buffer + 0x38))();
  }
  // 执行缓冲区操作（该函数不会返回）
  execute_buffer_operation(stack_guard ^ (ulonglong)stack_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 动态数组扩展函数 - 8字节元素
 * 处理8字节元素的数组扩展操作
 * 
 * @param source_array 源数组指针
 * @param target_ptr 指向目标数组指针的指针
 */
void expand_dynamic_array_8byte(longlong source_array, longlong *target_ptr)
{
  int array_size;
  uint64_t system_data;
  longlong *new_buffer;
  longlong allocated_memory;
  int8_t stack_buffer [32];
  int32_t stack_flag;
  longlong *temp_buffer;
  longlong *old_buffer;
  uint64_t stack_param;
  void *stack_ptr1;
  int8_t *stack_ptr2;
  int32_t stack_size;
  int8_t stack_data [72];
  ulonglong stack_guard;
  
  stack_param = 0xfffffffffffffffe;
  stack_guard = STACK_GUARD_VALUE ^ (ulonglong)stack_buffer;
  stack_flag = 0;
  array_size = **(int **)(source_array + 8);
  *(int **)(source_array + 8) = *(int **)(source_array + 8) + 1;
  system_data = system_config_data;
  if (array_size != 0) {
    array_size = array_size * 8;  // 8字节元素
    // 设置栈参数
    stack_ptr1 = &debug_info_ptr;
    stack_ptr2 = stack_data;
    stack_data[0] = 0;
    stack_size = 0x1c;
    strcpy_s(stack_data, 0x40, &debug_string_data);
    initialize_debug_system();
    stack_ptr1 = &system_debug_ptr;
    
    // 分配新内存
    allocated_memory = allocate_buffer_memory(memory_allocator_ptr, array_size, 0x10, 0x1e);
    initialize_8byte_array(system_data, &temp_buffer);
    new_buffer = temp_buffer;
    temp_buffer[2] = allocated_memory;
    *(int *)(temp_buffer + 3) = array_size;
    *(int *)((longlong)temp_buffer + 0x1c) = array_size;
    *(int8_t *)(temp_buffer + 4) = 0;
    stack_flag = 1;
    temp_buffer = (longlong *)0x0;
    old_buffer = (longlong *)*target_ptr;
    *target_ptr = (longlong)new_buffer;
    if (old_buffer != (longlong *)0x0) {
      (**(code **)(*old_buffer + 0x38))();  // 调用旧缓冲区的析构函数
    }
    stack_flag = 0;
    if (temp_buffer != (longlong *)0x0) {
      (**(code **)(*temp_buffer + 0x38))();
    }
    // 复制数据到新缓冲区
    memcpy(*(uint64_t *)(*target_ptr + 0x10), *(uint64_t *)(source_array + 8),
           (longlong)*(int *)(*target_ptr + 0x1c));
  }
  old_buffer = (longlong *)*target_ptr;
  *target_ptr = 0;
  if (old_buffer != (longlong *)0x0) {
    (**(code **)(*old_buffer + 0x38))();
  }
  // 执行缓冲区操作（该函数不会返回）
  execute_buffer_operation(stack_guard ^ (ulonglong)stack_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 动态数组扩展函数 - 4字节元素类型A
 * 为4字节元素类型的数组进行动态扩展，使用特定的初始化函数
 * 
 * @param source_array 源数组指针
 * @param target_ptr 指向目标数组指针的指针
 */
void expand_dynamic_array_4byte_typeA(longlong source_array, longlong *target_ptr)
{
  int array_size;
  uint64_t system_data;
  longlong *new_buffer;
  longlong allocated_memory;
  int8_t stack_buffer [32];
  int32_t stack_flag;
  longlong *temp_buffer;
  longlong *old_buffer;
  uint64_t stack_param;
  void *stack_ptr1;
  int8_t *stack_ptr2;
  int32_t stack_size;
  int8_t stack_data [72];
  ulonglong stack_guard;
  
  stack_param = 0xfffffffffffffffe;
  stack_guard = GET_SECURITY_COOKIE() ^ (ulonglong)stack_buffer;
  stack_flag = 0;
  array_size = **(int **)(source_array + 8);
  *(int **)(source_array + 8) = *(int **)(source_array + 8) + 1;
  system_data = _DAT_180c8a998;
  if (array_size != 0) {
    array_size = array_size * 4;  // 4字节元素
    // 设置栈参数
    stack_ptr1 = &unknown_var_3480_ptr;
    stack_ptr2 = stack_data;
    stack_data[0] = 0;
    stack_size = 0x1c;
    strcpy_s(stack_data, 0x40, &system_memory_fc60);
    FUN_1802037e0();
    stack_ptr1 = &unknown_var_720_ptr;
    
    // 分配新内存
    allocated_memory = FUN_18062b1e0(_DAT_180c8ed18, array_size, 0x10, 0x1e);
    FUN_180082aa0(system_data, &temp_buffer);
    new_buffer = temp_buffer;
    temp_buffer[2] = allocated_memory;
    *(int *)(temp_buffer + 3) = array_size;
    *(int *)((longlong)temp_buffer + 0x1c) = array_size;
    *(int8_t *)(temp_buffer + 4) = 0;
    stack_flag = 1;
    temp_buffer = (longlong *)0x0;
    old_buffer = (longlong *)*target_ptr;
    *target_ptr = (longlong)new_buffer;
    if (old_buffer != (longlong *)0x0) {
      (**(code **)(*old_buffer + 0x38))();  // 调用旧缓冲区的析构函数
    }
    stack_flag = 0;
    if (temp_buffer != (longlong *)0x0) {
      (**(code **)(*temp_buffer + 0x38))();
    }
    // 复制数据到新缓冲区
    memcpy(*(uint64_t *)(*target_ptr + 0x10), *(uint64_t *)(source_array + 8),
           (longlong)*(int *)(*target_ptr + 0x1c));
  }
  old_buffer = (longlong *)*target_ptr;
  *target_ptr = 0;
  if (old_buffer != (longlong *)0x0) {
    (**(code **)(*old_buffer + 0x38))();
  }
  // 执行缓冲区操作（该函数不会返回）
  FUN_1808fc050(stack_guard ^ (ulonglong)stack_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 动态数组扩展函数 - 4字节元素类型B
 * 为4字节元素类型的数组进行动态扩展，使用不同的初始化函数
 * 
 * @param source_array 源数组指针
 * @param target_ptr 指向目标数组指针的指针
 */
void expand_dynamic_array_4byte_typeB(longlong source_array, longlong *target_ptr)
{
  int array_size;
  uint64_t system_data;
  longlong *new_buffer;
  longlong allocated_memory;
  int8_t stack_buffer [32];
  int32_t stack_flag;
  longlong *temp_buffer;
  longlong *old_buffer;
  uint64_t stack_param;
  void *stack_ptr1;
  int8_t *stack_ptr2;
  int32_t stack_size;
  int8_t stack_data [72];
  ulonglong stack_guard;
  
  stack_param = 0xfffffffffffffffe;
  stack_guard = GET_SECURITY_COOKIE() ^ (ulonglong)stack_buffer;
  stack_flag = 0;
  array_size = **(int **)(source_array + 8);
  *(int **)(source_array + 8) = *(int **)(source_array + 8) + 1;
  system_data = _DAT_180c8a998;
  if (array_size != 0) {
    // 设置栈参数
    stack_ptr1 = &unknown_var_3480_ptr;
    stack_ptr2 = stack_data;
    stack_data[0] = 0;
    stack_size = 0x1c;
    strcpy_s(stack_data, 0x40, &system_memory_fc60);
    FUN_1802037e0();
    stack_ptr1 = &unknown_var_720_ptr;
    
    // 分配新内存
    allocated_memory = FUN_18062b1e0(_DAT_180c8ed18, array_size, 0x10, 0x1e);
    FUN_1800828d0(system_data, &temp_buffer);
    new_buffer = temp_buffer;
    temp_buffer[2] = allocated_memory;
    *(int *)(temp_buffer + 3) = array_size;
    *(int *)((longlong)temp_buffer + 0x1c) = array_size;
    *(int8_t *)(temp_buffer + 4) = 0;
    stack_flag = 1;
    temp_buffer = (longlong *)0x0;
    old_buffer = (longlong *)*target_ptr;
    *target_ptr = (longlong)new_buffer;
    if (old_buffer != (longlong *)0x0) {
      (**(code **)(*old_buffer + 0x38))();  // 调用旧缓冲区的析构函数
    }
    stack_flag = 0;
    if (temp_buffer != (longlong *)0x0) {
      (**(code **)(*temp_buffer + 0x38))();
    }
    // 复制数据到新缓冲区
    memcpy(*(uint64_t *)(*target_ptr + 0x10), *(uint64_t *)(source_array + 8),
           (longlong)*(int *)(*target_ptr + 0x1c));
  }
  old_buffer = (longlong *)*target_ptr;
  *target_ptr = 0;
  if (old_buffer != (longlong *)0x0) {
    (**(code **)(*old_buffer + 0x38))();
  }
  // 执行缓冲区操作（该函数不会返回）
  FUN_1808fc050(stack_guard ^ (ulonglong)stack_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 动态数组扩展函数 - 2字节元素
 * 为2字节元素类型的数组进行动态扩展，使用特定的初始化函数
 * 
 * @param source_array 源数组指针
 * @param target_ptr 指向目标数组指针的指针
 */
void expand_dynamic_array_2byte(longlong source_array, longlong *target_ptr)
{
  int array_size;
  uint64_t system_data;
  longlong *new_buffer;
  longlong allocated_memory;
  int8_t stack_buffer [32];
  int32_t stack_flag;
  longlong *temp_buffer;
  longlong *old_buffer;
  uint64_t stack_param;
  void *stack_ptr1;
  int8_t *stack_ptr2;
  int32_t stack_size;
  int8_t stack_data [72];
  ulonglong stack_guard;
  
  stack_param = 0xfffffffffffffffe;
  stack_guard = GET_SECURITY_COOKIE() ^ (ulonglong)stack_buffer;
  stack_flag = 0;
  array_size = **(int **)(source_array + 8);
  *(int **)(source_array + 8) = *(int **)(source_array + 8) + 1;
  system_data = _DAT_180c8a998;
  if (array_size != 0) {
    array_size = array_size * 2;  // 2字节元素
    // 设置栈参数
    stack_ptr1 = &unknown_var_3480_ptr;
    stack_ptr2 = stack_data;
    stack_data[0] = 0;
    stack_size = 0x1c;
    strcpy_s(stack_data, 0x40, &system_memory_fc60);
    FUN_1802037e0();
    stack_ptr1 = &unknown_var_720_ptr;
    
    // 分配新内存
    allocated_memory = FUN_18062b1e0(_DAT_180c8ed18, array_size, 0x10, 0x1e);
    FUN_180082c20(system_data, &temp_buffer);
    new_buffer = temp_buffer;
    temp_buffer[2] = allocated_memory;
    *(int *)(temp_buffer + 3) = array_size;
    *(int *)((longlong)temp_buffer + 0x1c) = array_size;
    *(int8_t *)(temp_buffer + 4) = 0;
    stack_flag = 1;
    temp_buffer = (longlong *)0x0;
    old_buffer = (longlong *)*target_ptr;
    *target_ptr = (longlong)new_buffer;
    if (old_buffer != (longlong *)0x0) {
      (**(code **)(*old_buffer + 0x38))();  // 调用旧缓冲区的析构函数
    }
    stack_flag = 0;
    if (temp_buffer != (longlong *)0x0) {
      (**(code **)(*temp_buffer + 0x38))();
    }
    // 复制数据到新缓冲区
    memcpy(*(uint64_t *)(*target_ptr + 0x10), *(uint64_t *)(source_array + 8),
           (longlong)*(int *)(*target_ptr + 0x1c));
  }
  old_buffer = (longlong *)*target_ptr;
  *target_ptr = 0;
  if (old_buffer != (longlong *)0x0) {
    (**(code **)(*old_buffer + 0x38))();
  }
  // 执行缓冲区操作（该函数不会返回）
  FUN_1808fc050(stack_guard ^ (ulonglong)stack_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 动态数组扩展和内存管理函数 - 类型A
 * 处理复杂的数据结构扩展，包括数据交换和内存重新分配
 * 该函数处理32字节（0x20）的数据块，包含复杂的指针操作
 * 
 * @param array_info 数组信息结构体指针，包含数组首地址、尾地址和容量信息
 * @param required_space 需要的额外空间大小（以32字节块为单位）
 * @param allocation_type 分配类型参数
 * @param memory_flags 内存分配标志
 */
void expand_and_manage_array_typeA(longlong *array_info, ulonglong required_space, uint64_t allocation_type, uint64_t memory_flags)
{
  uint64_t *current_end;
  int32_t temp_data;
  uint64_t swap_value;
  longlong offset_diff;
  uint64_t *new_memory;
  uint64_t *old_start;
  uint64_t *old_end;
  uint64_t *new_position;
  longlong *current_ptr;
  ulonglong new_capacity;
  uint64_t *new_start;
  ulonglong remaining_space;
  
  old_end = (uint64_t *)array_info[1];
  // 检查当前剩余空间是否足够
  if ((ulonglong)(array_info[2] - (longlong)old_end >> 5) < required_space) {
    old_start = (uint64_t *)*array_info;
    // 计算当前已使用的块数
    offset_diff = (longlong)old_end - (longlong)old_start >> 5;
    // 计算新的容量（至少翻倍）
    new_capacity = offset_diff * 2;
    if (offset_diff == 0) {
      new_capacity = 1;  // 最小容量为1个块
    }
    // 确保新容量足够容纳需要的空间
    if (new_capacity < offset_diff + required_space) {
      new_capacity = offset_diff + required_space;
    }
    new_memory = (uint64_t *)0x0;
    if (new_capacity != 0) {
      // 分配新的内存空间
      new_memory = (uint64_t *)
               FUN_18062b420(_DAT_180c8ed18, new_capacity << 5, (char)array_info[3], memory_flags, 0xfffffffffffffffe);
      old_end = (uint64_t *)array_info[1];
      old_start = (uint64_t *)*array_info;
    }
    new_position = new_memory;
    // 如果有现有数据，进行数据迁移
    if (old_start != old_end) {
      offset_diff = (longlong)new_memory - (longlong)old_start;
      old_start = old_start + 3;  // 跳过头部信息
      do {
        *new_position = 0;  // 清空新位置的第一个字段
        // 保存并交换复杂数据结构
        *(uint64_t *)(offset_diff + -0x10 + (longlong)old_start) = 0;
        *(uint64_t *)(offset_diff + -8 + (longlong)old_start) = 0;
        *(int32_t *)(offset_diff + (longlong)old_start) = *(int32_t *)old_start;
        swap_value = *new_position;
        *new_position = old_start[-3];  // 交换第三个字段
        old_start[-3] = swap_value;
        swap_value = *(uint64_t *)(offset_diff + -0x10 + (longlong)old_start);
        *(uint64_t *)(offset_diff + -0x10 + (longlong)old_start) = old_start[-2];  // 交换第二个字段
        old_start[-2] = swap_value;
        swap_value = *(uint64_t *)(offset_diff + -8 + (longlong)old_start);
        *(uint64_t *)(offset_diff + -8 + (longlong)old_start) = old_start[-1];  // 交换第一个字段
        old_start[-1] = swap_value;
        temp_data = *(int32_t *)(offset_diff + (longlong)old_start);
        *(int32_t *)(offset_diff + (longlong)old_start) = *(int32_t *)old_start;
        *(int32_t *)old_start = temp_data;
        new_position = new_position + 4;  // 移动到下一个块
        current_end = old_start + 1;
        old_start = old_start + 4;  // 移动到下一个块
      } while (current_end != old_end);
    }
    // 如果需要额外空间，初始化新的块
    if (required_space != 0) {
      old_end = new_position + 1;
      remaining_space = required_space;
      do {
        old_end[-1] = 0;  // 初始化新块的各个字段
        *old_end = 0;
        old_end[1] = 0;
        *(int32_t *)(old_end + 2) = 3;  // 设置标志位
        old_end = old_end + 4;  // 移动到下一个块
        remaining_space = remaining_space - 1;
      } while (remaining_space != 0);
    }
    // 清理旧内存
    current_ptr = (longlong *)*array_info;
    if (current_ptr != (longlong *)array_info[1]) {
      do {
        if (*current_ptr != 0) {
          // 触发错误处理（该函数不会返回）
          FUN_18064e900();
        }
        current_ptr = current_ptr + 4;
      } while (current_ptr != (longlong *)array_info[1]);
      current_ptr = (longlong *)*array_info;
    }
    if (current_ptr != (longlong *)0x0) {
      // 释放旧内存（该函数不会返回）
      FUN_18064e900(current_ptr);
    }
    // 更新数组信息
    *array_info = (longlong)new_memory;
    array_info[1] = (longlong)(new_position + required_space * 4);
    array_info[2] = (longlong)(new_memory + new_capacity * 4);
  }
  else {
    // 当前空间足够，直接在现有空间中初始化新的块
    remaining_space = required_space;
    if (required_space != 0) {
      do {
        *old_end = 0;  // 初始化新块的各个字段
        old_end[1] = 0;
        old_end[2] = 0;
        *(int32_t *)(old_end + 3) = 3;  // 设置标志位
        old_end = old_end + 4;  // 移动到下一个块
        remaining_space = remaining_space - 1;
      } while (remaining_space != 0);
      old_end = (uint64_t *)array_info[1];
    }
    array_info[1] = (longlong)(old_end + required_space * 4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 动态数组扩展和内存管理函数 - 类型B
 * 处理复杂的数据结构扩展，包括数据交换和内存重新分配
 * 该函数处理32字节（0x20）的数据块，包含复杂的指针操作
 * 与类型A基本相同，但在某些细节上可能有差异
 * 
 * @param array_info 数组信息结构体指针，包含数组首地址、尾地址和容量信息
 * @param required_space 需要的额外空间大小（以32字节块为单位）
 * @param allocation_type 分配类型参数
 * @param memory_flags 内存分配标志
 */
void expand_and_manage_array_typeB(longlong *array_info, ulonglong required_space, uint64_t allocation_type, uint64_t memory_flags)
{
  uint64_t *current_end;
  int32_t temp_data;
  uint64_t swap_value;
  longlong offset_diff;
  uint64_t *new_memory;
  uint64_t *old_start;
  uint64_t *old_end;
  uint64_t *new_position;
  longlong *current_ptr;
  ulonglong new_capacity;
  uint64_t *new_start;
  ulonglong remaining_space;
  
  old_end = (uint64_t *)array_info[1];
  // 检查当前剩余空间是否足够
  if ((ulonglong)(array_info[2] - (longlong)old_end >> 5) < required_space) {
    old_start = (uint64_t *)*array_info;
    // 计算当前已使用的块数
    offset_diff = (longlong)old_end - (longlong)old_start >> 5;
    // 计算新的容量（至少翻倍）
    new_capacity = offset_diff * 2;
    if (offset_diff == 0) {
      new_capacity = 1;  // 最小容量为1个块
    }
    // 确保新容量足够容纳需要的空间
    if (new_capacity < offset_diff + required_space) {
      new_capacity = offset_diff + required_space;
    }
    new_memory = (uint64_t *)0x0;
    if (new_capacity != 0) {
      // 分配新的内存空间
      new_memory = (uint64_t *)
               FUN_18062b420(_DAT_180c8ed18, new_capacity << 5, (char)array_info[3], memory_flags, 0xfffffffffffffffe);
      old_end = (uint64_t *)array_info[1];
      old_start = (uint64_t *)*array_info;
    }
    new_position = new_memory;
    // 如果有现有数据，进行数据迁移
    if (old_start != old_end) {
      offset_diff = (longlong)new_memory - (longlong)old_start;
      old_start = old_start + 3;  // 跳过头部信息
      do {
        *new_position = 0;  // 清空新位置的第一个字段
        // 保存并交换复杂数据结构
        *(uint64_t *)(offset_diff + -0x10 + (longlong)old_start) = 0;
        *(uint64_t *)(offset_diff + -8 + (longlong)old_start) = 0;
        *(int32_t *)(offset_diff + (longlong)old_start) = *(int32_t *)old_start;
        swap_value = *new_position;
        *new_position = old_start[-3];  // 交换第三个字段
        old_start[-3] = swap_value;
        swap_value = *(uint64_t *)(offset_diff + -0x10 + (longlong)old_start);
        *(uint64_t *)(offset_diff + -0x10 + (longlong)old_start) = old_start[-2];  // 交换第二个字段
        old_start[-2] = swap_value;
        swap_value = *(uint64_t *)(offset_diff + -8 + (longlong)old_start);
        *(uint64_t *)(offset_diff + -8 + (longlong)old_start) = old_start[-1];  // 交换第一个字段
        old_start[-1] = swap_value;
        temp_data = *(int32_t *)(offset_diff + (longlong)old_start);
        *(int32_t *)(offset_diff + (longlong)old_start) = *(int32_t *)old_start;
        *(int32_t *)old_start = temp_data;
        new_position = new_position + 4;  // 移动到下一个块
        current_end = old_start + 1;
        old_start = old_start + 4;  // 移动到下一个块
      } while (current_end != old_end);
    }
    // 如果需要额外空间，初始化新的块
    if (required_space != 0) {
      old_end = new_position + 1;
      remaining_space = required_space;
      do {
        old_end[-1] = 0;  // 初始化新块的各个字段
        *old_end = 0;
        old_end[1] = 0;
        *(int32_t *)(old_end + 2) = 3;  // 设置标志位
        old_end = old_end + 4;  // 移动到下一个块
        remaining_space = remaining_space - 1;
      } while (remaining_space != 0);
    }
    // 清理旧内存
    current_ptr = (longlong *)*array_info;
    if (current_ptr != (longlong *)array_info[1]) {
      do {
        if (*current_ptr != 0) {
          // 触发错误处理（该函数不会返回）
          FUN_18064e900();
        }
        current_ptr = current_ptr + 4;
      } while (current_ptr != (longlong *)array_info[1]);
      current_ptr = (longlong *)*array_info;
    }
    if (current_ptr != (longlong *)0x0) {
      // 释放旧内存（该函数不会返回）
      FUN_18064e900(current_ptr);
    }
    // 更新数组信息
    *array_info = (longlong)new_memory;
    array_info[1] = (longlong)(new_position + required_space * 4);
    array_info[2] = (longlong)(new_memory + new_capacity * 4);
  }
  else {
    // 当前空间足够，直接在现有空间中初始化新的块
    remaining_space = required_space;
    if (required_space != 0) {
      do {
        *old_end = 0;  // 初始化新块的各个字段
        old_end[1] = 0;
        old_end[2] = 0;
        *(int32_t *)(old_end + 3) = 3;  // 设置标志位
        old_end = old_end + 4;  // 移动到下一个块
        remaining_space = remaining_space - 1;
      } while (remaining_space != 0);
      old_end = (uint64_t *)array_info[1];
    }
    array_info[1] = (longlong)(old_end + required_space * 4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



