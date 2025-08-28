#include "TaleWorlds.Native.Split.h"

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
undefined8 *create_data_container(undefined8 *container_ptr, undefined8 *source_data)
{
  undefined1 byte_data;
  undefined8 data_field1;
  undefined8 data_field2;
  undefined8 data_field3;
  undefined8 *new_container;
  
  // 从源数据提取字段信息
  data_field1 = *source_data;
  byte_data = *(undefined1 *)(source_data + 1);
  data_field2 = source_data[2];
  source_data[2] = 0;  // 清空源数据字段
  data_field3 = source_data[3];
  source_data[3] = 0;  // 清空源数据字段
  
  // 设置容器的函数指针
  container_ptr[2] = get_container_data_field1;
  container_ptr[3] = get_container_data_field2;
  
  // 分配新容器的内存
  new_container = (undefined8 *)allocate_container_memory(memory_allocator_ptr, 0x20, 8, default_memory_flags, 0xfffffffffffffffe);
  
  // 初始化新容器
  *new_container = data_field1;
  *(undefined1 *)(new_container + 1) = byte_data;
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
void create_quad_size_buffer(undefined8 param1, longlong *buffer_ptr, int size)
{
  undefined8 system_data;
  undefined8 allocated_memory;
  undefined1 stack_buffer[32];
  undefined4 stack_flag;
  undefined8 stack_param;
  longlong *buffer_info;
  undefined *stack_ptr1;
  undefined1 *stack_ptr2;
  undefined4 stack_size;
  undefined1 stack_data[72];
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
  *(undefined8 *)(*buffer_ptr + 0x10) = allocated_memory;
  *(int *)(*buffer_ptr + 0x18) = size;
  *(int *)(*buffer_ptr + 0x1c) = size;
  *(undefined1 *)(*buffer_ptr + 0x20) = 0;
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
void create_double_size_buffer(undefined8 param1, longlong *buffer_ptr, int size)
{
  undefined8 system_data;
  undefined8 allocated_memory;
  undefined1 stack_buffer[32];
  undefined4 stack_flag;
  undefined8 stack_param;
  longlong *buffer_info;
  undefined *stack_ptr1;
  undefined1 *stack_ptr2;
  undefined4 stack_size;
  undefined1 stack_data[72];
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
  *(undefined8 *)(*buffer_ptr + 0x10) = allocated_memory;
  *(int *)(*buffer_ptr + 0x18) = size;
  *(int *)(*buffer_ptr + 0x1c) = size;
  *(undefined1 *)(*buffer_ptr + 0x20) = 0;
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
void create_standard_buffer(undefined8 param1, longlong *buffer_ptr, undefined4 size)
{
  undefined8 allocated_memory;
  undefined1 stack_buffer[32];
  undefined4 stack_flag;
  undefined8 stack_param;
  longlong *buffer_info;
  undefined *stack_ptr1;
  undefined1 *stack_ptr2;
  undefined4 stack_size;
  undefined1 stack_data[72];
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
  *(undefined8 *)(*buffer_ptr + 0x10) = allocated_memory;
  *(undefined4 *)(*buffer_ptr + 0x18) = size;
  *(undefined4 *)(*buffer_ptr + 0x1c) = size;
  *(undefined1 *)(*buffer_ptr + 0x20) = 0;
  
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
void create_extended_buffer(undefined8 param1, longlong *buffer_ptr, undefined4 size)
{
  undefined8 system_data;
  undefined8 allocated_memory;
  undefined1 stack_buffer[32];
  undefined4 stack_flag;
  undefined8 stack_param;
  longlong *buffer_info;
  undefined *stack_ptr1;
  undefined1 *stack_ptr2;
  undefined4 stack_size;
  undefined1 stack_data[72];
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
  *(undefined8 *)(*buffer_ptr + 0x10) = allocated_memory;
  *(undefined4 *)(*buffer_ptr + 0x18) = size;
  *(undefined4 *)(*buffer_ptr + 0x1c) = size;
  *(undefined1 *)(*buffer_ptr + 0x20) = 0;
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
  undefined8 system_data;
  longlong *new_buffer;
  longlong allocated_memory;
  undefined1 stack_buffer [32];
  undefined4 stack_flag;
  longlong *temp_buffer;
  longlong *old_buffer;
  undefined8 stack_param;
  undefined *stack_ptr1;
  undefined1 *stack_ptr2;
  undefined4 stack_size;
  undefined1 stack_data [72];
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
    *(undefined1 *)(temp_buffer + 4) = 0;
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
    memcpy(*(undefined8 *)(*target_ptr + 0x10), *(undefined8 *)(source_array + 8),
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
  undefined8 system_data;
  longlong *new_buffer;
  longlong allocated_memory;
  undefined1 stack_buffer [32];
  undefined4 stack_flag;
  longlong *temp_buffer;
  longlong *old_buffer;
  undefined8 stack_param;
  undefined *stack_ptr1;
  undefined1 *stack_ptr2;
  undefined4 stack_size;
  undefined1 stack_data [72];
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
    *(undefined1 *)(temp_buffer + 4) = 0;
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
    memcpy(*(undefined8 *)(*target_ptr + 0x10), *(undefined8 *)(source_array + 8),
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
  undefined8 system_data;
  longlong *new_buffer;
  longlong allocated_memory;
  int array_size;
  undefined1 stack_buffer [32];
  undefined4 stack_flag;
  longlong *temp_buffer;
  longlong *old_buffer;
  undefined8 stack_param;
  undefined *stack_ptr1;
  undefined1 *stack_ptr2;
  undefined4 stack_size;
  undefined1 stack_data [72];
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
    *(undefined1 *)(temp_buffer + 4) = 0;
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
    memcpy(*(undefined8 *)(*target_ptr + 0x10), *(undefined8 *)(source_array + 8),
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
  undefined8 system_data;
  longlong *new_buffer;
  longlong allocated_memory;
  undefined1 stack_buffer [32];
  undefined4 stack_flag;
  longlong *temp_buffer;
  longlong *old_buffer;
  undefined8 stack_param;
  undefined *stack_ptr1;
  undefined1 *stack_ptr2;
  undefined4 stack_size;
  undefined1 stack_data [72];
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
    *(undefined1 *)(temp_buffer + 4) = 0;
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
    memcpy(*(undefined8 *)(*target_ptr + 0x10), *(undefined8 *)(source_array + 8),
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



// 函数: void FUN_180081d80(longlong param_1,longlong *param_2)
void FUN_180081d80(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined4 uStack_b8;
  longlong *plStack_b0;
  longlong *plStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  uStack_b8 = 0;
  iVar1 = **(int **)(param_1 + 8);
  *(int **)(param_1 + 8) = *(int **)(param_1 + 8) + 1;
  uVar2 = _DAT_180c8a998;
  if (iVar1 != 0) {
    iVar1 = iVar1 * 4;
    puStack_98 = &UNK_1809fcc58;
    puStack_90 = auStack_80;
    auStack_80[0] = 0;
    uStack_88 = 0x1c;
    strcpy_s(auStack_80,0x40,&DAT_1809ffc60);
    FUN_1802037e0();
    puStack_98 = &UNK_18098bcb0;
    lVar4 = FUN_18062b1e0(_DAT_180c8ed18,iVar1,0x10,0x1e);
    FUN_180082aa0(uVar2,&plStack_b0);
    plVar3 = plStack_b0;
    plStack_b0[2] = lVar4;
    *(int *)(plStack_b0 + 3) = iVar1;
    *(int *)((longlong)plStack_b0 + 0x1c) = iVar1;
    *(undefined1 *)(plStack_b0 + 4) = 0;
    uStack_b8 = 1;
    plStack_b0 = (longlong *)0x0;
    plStack_a8 = (longlong *)*param_2;
    *param_2 = (longlong)plVar3;
    if (plStack_a8 != (longlong *)0x0) {
      (**(code **)(*plStack_a8 + 0x38))();
    }
    uStack_b8 = 0;
    if (plStack_b0 != (longlong *)0x0) {
      (**(code **)(*plStack_b0 + 0x38))();
    }
                    // WARNING: Subroutine does not return
    memcpy(*(undefined8 *)(*param_2 + 0x10),*(undefined8 *)(param_1 + 8),
           (longlong)*(int *)(*param_2 + 0x1c));
  }
  plStack_a8 = (longlong *)*param_2;
  *param_2 = 0;
  if (plStack_a8 != (longlong *)0x0) {
    (**(code **)(*plStack_a8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180081f30(longlong param_1,longlong *param_2)
void FUN_180081f30(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined4 uStack_b8;
  longlong *plStack_b0;
  longlong *plStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  uStack_b8 = 0;
  iVar1 = **(int **)(param_1 + 8);
  *(int **)(param_1 + 8) = *(int **)(param_1 + 8) + 1;
  uVar2 = _DAT_180c8a998;
  if (iVar1 != 0) {
    puStack_98 = &UNK_1809fcc58;
    puStack_90 = auStack_80;
    auStack_80[0] = 0;
    uStack_88 = 0x1c;
    strcpy_s(auStack_80,0x40,&DAT_1809ffc60);
    FUN_1802037e0();
    puStack_98 = &UNK_18098bcb0;
    lVar4 = FUN_18062b1e0(_DAT_180c8ed18,iVar1,0x10,0x1e);
    FUN_1800828d0(uVar2,&plStack_b0);
    plVar3 = plStack_b0;
    plStack_b0[2] = lVar4;
    *(int *)(plStack_b0 + 3) = iVar1;
    *(int *)((longlong)plStack_b0 + 0x1c) = iVar1;
    *(undefined1 *)(plStack_b0 + 4) = 0;
    uStack_b8 = 1;
    plStack_b0 = (longlong *)0x0;
    plStack_a8 = (longlong *)*param_2;
    *param_2 = (longlong)plVar3;
    if (plStack_a8 != (longlong *)0x0) {
      (**(code **)(*plStack_a8 + 0x38))();
    }
    uStack_b8 = 0;
    if (plStack_b0 != (longlong *)0x0) {
      (**(code **)(*plStack_b0 + 0x38))();
    }
                    // WARNING: Subroutine does not return
    memcpy(*(undefined8 *)(*param_2 + 0x10),*(undefined8 *)(param_1 + 8),
           (longlong)*(int *)(*param_2 + 0x1c));
  }
  plStack_a8 = (longlong *)*param_2;
  *param_2 = 0;
  if (plStack_a8 != (longlong *)0x0) {
    (**(code **)(*plStack_a8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800820e0(longlong param_1,longlong *param_2)
void FUN_1800820e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined4 uStack_b8;
  longlong *plStack_b0;
  longlong *plStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  uStack_b8 = 0;
  iVar1 = **(int **)(param_1 + 8);
  *(int **)(param_1 + 8) = *(int **)(param_1 + 8) + 1;
  uVar2 = _DAT_180c8a998;
  if (iVar1 != 0) {
    iVar1 = iVar1 * 2;
    puStack_98 = &UNK_1809fcc58;
    puStack_90 = auStack_80;
    auStack_80[0] = 0;
    uStack_88 = 0x1c;
    strcpy_s(auStack_80,0x40,&DAT_1809ffc60);
    FUN_1802037e0();
    puStack_98 = &UNK_18098bcb0;
    lVar4 = FUN_18062b1e0(_DAT_180c8ed18,iVar1,0x10,0x1e);
    FUN_180082c20(uVar2,&plStack_b0);
    plVar3 = plStack_b0;
    plStack_b0[2] = lVar4;
    *(int *)(plStack_b0 + 3) = iVar1;
    *(int *)((longlong)plStack_b0 + 0x1c) = iVar1;
    *(undefined1 *)(plStack_b0 + 4) = 0;
    uStack_b8 = 1;
    plStack_b0 = (longlong *)0x0;
    plStack_a8 = (longlong *)*param_2;
    *param_2 = (longlong)plVar3;
    if (plStack_a8 != (longlong *)0x0) {
      (**(code **)(*plStack_a8 + 0x38))();
    }
    uStack_b8 = 0;
    if (plStack_b0 != (longlong *)0x0) {
      (**(code **)(*plStack_b0 + 0x38))();
    }
                    // WARNING: Subroutine does not return
    memcpy(*(undefined8 *)(*param_2 + 0x10),*(undefined8 *)(param_1 + 8),
           (longlong)*(int *)(*param_2 + 0x1c));
  }
  plStack_a8 = (longlong *)*param_2;
  *param_2 = 0;
  if (plStack_a8 != (longlong *)0x0) {
    (**(code **)(*plStack_a8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180082290(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)
void FUN_180082290(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  
  puVar7 = (undefined8 *)param_1[1];
  if ((ulonglong)(param_1[2] - (longlong)puVar7 >> 5) < param_2) {
    puVar10 = (undefined8 *)*param_1;
    lVar4 = (longlong)puVar7 - (longlong)puVar10 >> 5;
    uVar9 = lVar4 * 2;
    if (lVar4 == 0) {
      uVar9 = 1;
    }
    if (uVar9 < lVar4 + param_2) {
      uVar9 = lVar4 + param_2;
    }
    puVar5 = (undefined8 *)0x0;
    if (uVar9 != 0) {
      puVar5 = (undefined8 *)
               FUN_18062b420(_DAT_180c8ed18,uVar9 << 5,(char)param_1[3],param_4,0xfffffffffffffffe);
      puVar7 = (undefined8 *)param_1[1];
      puVar10 = (undefined8 *)*param_1;
    }
    puVar6 = puVar5;
    if (puVar10 != puVar7) {
      lVar4 = (longlong)puVar5 - (longlong)puVar10;
      puVar10 = puVar10 + 3;
      do {
        *puVar6 = 0;
        *(undefined8 *)(lVar4 + -0x10 + (longlong)puVar10) = 0;
        *(undefined8 *)(lVar4 + -8 + (longlong)puVar10) = 0;
        *(undefined4 *)(lVar4 + (longlong)puVar10) = *(undefined4 *)puVar10;
        uVar3 = *puVar6;
        *puVar6 = puVar10[-3];
        puVar10[-3] = uVar3;
        uVar3 = *(undefined8 *)(lVar4 + -0x10 + (longlong)puVar10);
        *(undefined8 *)(lVar4 + -0x10 + (longlong)puVar10) = puVar10[-2];
        puVar10[-2] = uVar3;
        uVar3 = *(undefined8 *)(lVar4 + -8 + (longlong)puVar10);
        *(undefined8 *)(lVar4 + -8 + (longlong)puVar10) = puVar10[-1];
        puVar10[-1] = uVar3;
        uVar2 = *(undefined4 *)(lVar4 + (longlong)puVar10);
        *(undefined4 *)(lVar4 + (longlong)puVar10) = *(undefined4 *)puVar10;
        *(undefined4 *)puVar10 = uVar2;
        puVar6 = puVar6 + 4;
        puVar1 = puVar10 + 1;
        puVar10 = puVar10 + 4;
      } while (puVar1 != puVar7);
    }
    if (param_2 != 0) {
      puVar7 = puVar6 + 1;
      uVar11 = param_2;
      do {
        puVar7[-1] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        *(undefined4 *)(puVar7 + 2) = 3;
        puVar7 = puVar7 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    plVar8 = (longlong *)*param_1;
    if (plVar8 != (longlong *)param_1[1]) {
      do {
        if (*plVar8 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        plVar8 = plVar8 + 4;
      } while (plVar8 != (longlong *)param_1[1]);
      plVar8 = (longlong *)*param_1;
    }
    if (plVar8 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar8);
    }
    *param_1 = (longlong)puVar5;
    param_1[1] = (longlong)(puVar6 + param_2 * 4);
    param_1[2] = (longlong)(puVar5 + uVar9 * 4);
  }
  else {
    uVar9 = param_2;
    if (param_2 != 0) {
      do {
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *(undefined4 *)(puVar7 + 3) = 3;
        puVar7 = puVar7 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      puVar7 = (undefined8 *)param_1[1];
    }
    param_1[1] = (longlong)(puVar7 + param_2 * 4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800824a0(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800824a0(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  
  puVar7 = (undefined8 *)param_1[1];
  if ((ulonglong)(param_1[2] - (longlong)puVar7 >> 5) < param_2) {
    puVar10 = (undefined8 *)*param_1;
    lVar4 = (longlong)puVar7 - (longlong)puVar10 >> 5;
    uVar9 = lVar4 * 2;
    if (lVar4 == 0) {
      uVar9 = 1;
    }
    if (uVar9 < lVar4 + param_2) {
      uVar9 = lVar4 + param_2;
    }
    puVar5 = (undefined8 *)0x0;
    if (uVar9 != 0) {
      puVar5 = (undefined8 *)
               FUN_18062b420(_DAT_180c8ed18,uVar9 << 5,(char)param_1[3],param_4,0xfffffffffffffffe);
      puVar7 = (undefined8 *)param_1[1];
      puVar10 = (undefined8 *)*param_1;
    }
    puVar6 = puVar5;
    if (puVar10 != puVar7) {
      lVar4 = (longlong)puVar5 - (longlong)puVar10;
      puVar10 = puVar10 + 3;
      do {
        *puVar6 = 0;
        *(undefined8 *)(lVar4 + -0x10 + (longlong)puVar10) = 0;
        *(undefined8 *)(lVar4 + -8 + (longlong)puVar10) = 0;
        *(undefined4 *)(lVar4 + (longlong)puVar10) = *(undefined4 *)puVar10;
        uVar3 = *puVar6;
        *puVar6 = puVar10[-3];
        puVar10[-3] = uVar3;
        uVar3 = *(undefined8 *)(lVar4 + -0x10 + (longlong)puVar10);
        *(undefined8 *)(lVar4 + -0x10 + (longlong)puVar10) = puVar10[-2];
        puVar10[-2] = uVar3;
        uVar3 = *(undefined8 *)(lVar4 + -8 + (longlong)puVar10);
        *(undefined8 *)(lVar4 + -8 + (longlong)puVar10) = puVar10[-1];
        puVar10[-1] = uVar3;
        uVar2 = *(undefined4 *)(lVar4 + (longlong)puVar10);
        *(undefined4 *)(lVar4 + (longlong)puVar10) = *(undefined4 *)puVar10;
        *(undefined4 *)puVar10 = uVar2;
        puVar6 = puVar6 + 4;
        puVar1 = puVar10 + 1;
        puVar10 = puVar10 + 4;
      } while (puVar1 != puVar7);
    }
    if (param_2 != 0) {
      puVar7 = puVar6 + 1;
      uVar11 = param_2;
      do {
        puVar7[-1] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        *(undefined4 *)(puVar7 + 2) = 3;
        puVar7 = puVar7 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    plVar8 = (longlong *)*param_1;
    if (plVar8 != (longlong *)param_1[1]) {
      do {
        if (*plVar8 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        plVar8 = plVar8 + 4;
      } while (plVar8 != (longlong *)param_1[1]);
      plVar8 = (longlong *)*param_1;
    }
    if (plVar8 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar8);
    }
    *param_1 = (longlong)puVar5;
    param_1[1] = (longlong)(puVar6 + param_2 * 4);
    param_1[2] = (longlong)(puVar5 + uVar9 * 4);
  }
  else {
    uVar9 = param_2;
    if (param_2 != 0) {
      do {
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *(undefined4 *)(puVar7 + 3) = 3;
        puVar7 = puVar7 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      puVar7 = (undefined8 *)param_1[1];
    }
    param_1[1] = (longlong)(puVar7 + param_2 * 4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



