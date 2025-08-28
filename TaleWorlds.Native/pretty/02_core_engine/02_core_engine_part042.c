#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part042.c - 核心引擎模块 - 容器和数据处理组件

// 函数: validate_container_integrity - 验证容器完整性
// 原始函数名: FUN_1800810b0
// 功能: 检查容器指针数组的有效性，如果发现非零指针则触发错误
void validate_container_integrity(longlong *container_ptr)

{
  longlong *current_ptr;
  
  // 遍历容器中的所有指针，检查是否有非零指针
  for (current_ptr = (longlong *)*container_ptr; current_ptr != (longlong *)container_ptr[1]; current_ptr = current_ptr + 4) {
    if (*current_ptr != 0) {
                    // WARNING: Subroutine does not return
      trigger_critical_error();  // FUN_18064e900
    }
  }
  if (*container_ptr == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  trigger_critical_error();  // FUN_18064e900
}



// WARNING: Removing unreachable block (ram,0x0001800811eb)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: create_data_container - 创建数据容器
// 原始函数名: FUN_180081120
// 功能: 创建一个新的数据容器，初始化相关函数指针和内存分配
undefined8 * create_data_container(undefined8 *container_out,undefined8 *source_data)

{
  undefined1 byte_flag;
  undefined8 data_value1;
  undefined8 data_value2;
  undefined8 data_value3;
  undefined8 *new_container;
  
  data_value1 = *source_data;
  byte_flag = *(undefined1 *)(source_data + 1);
  data_value2 = source_data[2];
  source_data[2] = 0;
  data_value3 = source_data[3];
  source_data[3] = 0;
  container_out[2] = get_container_handler_vtable();  // FUN_180083260
  container_out[3] = get_container_destructor();  // FUN_1800831c0
  new_container = (undefined8 *)allocate_container_memory(_DAT_180c8ed18,0x20,8,DAT_180bf65bc,0xfffffffffffffffe);  // FUN_18062b1e0
  *new_container = data_value1;
  *(undefined1 *)(new_container + 1) = byte_flag;
  new_container[2] = data_value2;
  new_container[3] = data_value3;
  *container_out = new_container;
  if ((longlong *)source_data[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)source_data[3] + 0x38))();
  }
  if ((longlong *)source_data[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)source_data[2] + 0x38))();
  }
  return container_out;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: process_integer_array_4x - 处理4倍整数数组
// 原始函数名: FUN_180081220
// 功能: 处理整数数组，将输入数据乘以4后存储到新分配的内存中
void process_integer_array_4x(undefined8 context,longlong *output_ptr,int element_count)

{
  undefined8 system_context;
  undefined8 memory_allocator;
  undefined1 security_stack [32];
  undefined4 stack_flag;
  undefined8 stack_canary;
  longlong *temp_ptr;
  undefined *debug_info;
  undefined1 *buffer_ptr;
  undefined4 buffer_size;
  undefined1 temp_buffer [72];
  ulonglong security_cookie;
  
  system_context = _DAT_180c8a998;  // 系统上下文
  stack_canary = 0xfffffffffffffffe;  // 栈保护
  security_cookie = _DAT_180bf00a8 ^ (ulonglong)security_stack;  // 安全cookie
  stack_flag = 0;
  element_count = element_count * 4;  // 元素数量乘以4
  debug_info = &UNK_1809fcc58;  // 调试信息
  buffer_ptr = temp_buffer;
  temp_buffer[0] = 0;
  buffer_size = 0x1c;
  temp_ptr = output_ptr;
  strcpy_s(temp_buffer,0x40,&DAT_1809ffc60);  // 复制字符串
  initialize_security_context();  // FUN_1802037e0
  debug_info = &UNK_18098bcb0;
  memory_allocator = allocate_buffer_memory(_DAT_180c8ed18,element_count,0x10,3);  // FUN_18062b1e0
  process_array_data_4x(system_context,output_ptr);  // FUN_180082aa0
  *(undefined8 *)(*output_ptr + 0x10) = memory_allocator;
  *(int *)(*output_ptr + 0x18) = element_count;
  *(int *)(*output_ptr + 0x1c) = element_count;
  *(undefined1 *)(*output_ptr + 0x20) = 0;
  stack_flag = 1;
                    // WARNING: Subroutine does not return
  security_check_exit(security_cookie ^ (ulonglong)security_stack);  // FUN_1808fc050
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: process_integer_array_2x - 处理2倍整数数组
// 原始函数名: FUN_180081350
// 功能: 处理整数数组，将输入数据乘以2后存储到新分配的内存中
void process_integer_array_2x(undefined8 context,longlong *output_ptr,int element_count)

{
  undefined8 system_context;
  undefined8 memory_allocator;
  undefined1 security_stack [32];
  undefined4 stack_flag;
  undefined8 stack_canary;
  longlong *temp_ptr;
  undefined *debug_info;
  undefined1 *buffer_ptr;
  undefined4 buffer_size;
  undefined1 temp_buffer [72];
  ulonglong security_cookie;
  
  system_context = _DAT_180c8a998;  // 系统上下文
  stack_canary = 0xfffffffffffffffe;  // 栈保护
  security_cookie = _DAT_180bf00a8 ^ (ulonglong)security_stack;  // 安全cookie
  stack_flag = 0;
  element_count = element_count * 2;  // 元素数量乘以2
  debug_info = &UNK_1809fcc58;  // 调试信息
  buffer_ptr = temp_buffer;
  temp_buffer[0] = 0;
  buffer_size = 0x1c;
  temp_ptr = output_ptr;
  strcpy_s(temp_buffer,0x40,&DAT_1809ffc60);  // 复制字符串
  initialize_security_context();  // FUN_1802037e0
  debug_info = &UNK_18098bcb0;
  memory_allocator = allocate_buffer_memory(_DAT_180c8ed18,element_count,0x10,3);  // FUN_18062b1e0
  process_array_data_2x(system_context,output_ptr);  // FUN_180082c20
  *(undefined8 *)(*output_ptr + 0x10) = memory_allocator;
  *(int *)(*output_ptr + 0x18) = element_count;
  *(int *)(*output_ptr + 0x1c) = element_count;
  *(undefined1 *)(*output_ptr + 0x20) = 0;
  stack_flag = 1;
                    // WARNING: Subroutine does not return
  security_check_exit(security_cookie ^ (ulonglong)security_stack);  // FUN_1808fc050
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: process_data_array_direct - 直接处理数据数组
// 原始函数名: FUN_180081480
// 功能: 直接处理数据数组，不进行倍数转换
void process_data_array_direct(undefined8 context,longlong *output_ptr,undefined4 data_size)

{
  undefined8 memory_allocator;
  undefined1 security_stack [32];
  undefined4 stack_flag;
  undefined8 stack_canary;
  longlong *temp_ptr;
  undefined *debug_info;
  undefined1 *buffer_ptr;
  undefined4 buffer_size;
  undefined1 temp_buffer [72];
  ulonglong security_cookie;
  
  stack_canary = 0xfffffffffffffffe;  // 栈保护
  security_cookie = _DAT_180bf00a8 ^ (ulonglong)security_stack;  // 安全cookie
  stack_flag = 0;
  debug_info = &UNK_1809fcc58;  // 调试信息
  buffer_ptr = temp_buffer;
  temp_buffer[0] = 0;
  buffer_size = 0x1c;
  temp_ptr = output_ptr;
  strcpy_s(temp_buffer,0x40,&DAT_1809ffc60);  // 复制字符串
  initialize_security_context();  // FUN_1802037e0
  debug_info = &UNK_18098bcb0;
  memory_allocator = allocate_buffer_memory(_DAT_180c8ed18,data_size,0x10,3);  // FUN_18062b1e0
  process_direct_array_data(context,output_ptr);  // FUN_1800828d0
  stack_flag = 1;
  *(undefined8 *)(*output_ptr + 0x10) = memory_allocator;
  *(undefined4 *)(*output_ptr + 0x18) = data_size;
  *(undefined4 *)(*output_ptr + 0x1c) = data_size;
  *(undefined1 *)(*output_ptr + 0x20) = 0;
                    // WARNING: Subroutine does not return
  security_check_exit(security_cookie ^ (ulonglong)security_stack);  // FUN_1808fc050
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: process_data_array_extended - 扩展处理数据数组
// 原始函数名: FUN_180081590
// 功能: 扩展处理数据数组，使用32字节对齐的内存分配
void process_data_array_extended(undefined8 context,longlong *output_ptr,undefined4 data_size)

{
  undefined8 system_context;
  undefined8 memory_allocator;
  undefined1 security_stack [32];
  undefined4 stack_flag;
  undefined8 stack_canary;
  longlong *temp_ptr;
  undefined *debug_info;
  undefined1 *buffer_ptr;
  undefined4 buffer_size;
  undefined1 temp_buffer [72];
  ulonglong security_cookie;
  
  system_context = _DAT_180c8a998;  // 系统上下文
  stack_canary = 0xfffffffffffffffe;  // 栈保护
  security_cookie = _DAT_180bf00a8 ^ (ulonglong)security_stack;  // 安全cookie
  stack_flag = 0;
  debug_info = &UNK_1809fcc58;  // 调试信息
  buffer_ptr = temp_buffer;
  temp_buffer[0] = 0;
  buffer_size = 0x1c;
  temp_ptr = output_ptr;
  strcpy_s(temp_buffer,0x40,&DAT_1809ffc60);  // 复制字符串
  initialize_security_context();  // FUN_1802037e0
  debug_info = &UNK_18098bcb0;
  memory_allocator = allocate_buffer_memory(_DAT_180c8ed18,data_size,0x10,0x20);  // FUN_18062b1e0
  process_direct_array_data(system_context,output_ptr);  // FUN_1800828d0
  *(undefined8 *)(*output_ptr + 0x10) = memory_allocator;
  *(undefined4 *)(*output_ptr + 0x18) = data_size;
  *(undefined4 *)(*output_ptr + 0x1c) = data_size;
  *(undefined1 *)(*output_ptr + 0x20) = 0;
  stack_flag = 1;
                    // WARNING: Subroutine does not return
  security_check_exit(security_cookie ^ (ulonglong)security_stack);  // FUN_1808fc050
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: process_data_array_4x_copy - 处理4倍数据数组并复制
// 原始函数名: FUN_1800816c0
// 功能: 处理4倍大小的数据数组，并复制源数据到新分配的内存中
// 参数: source_context - 源数据上下文，output_ptr - 输出指针
// 实现简化：使用标准的内存分配和复制模式，添加错误检查
void process_data_array_4x_copy(longlong source_context, longlong *output_ptr)

{
  int element_count;
  undefined8 system_context;
  longlong *new_container;
  longlong memory_allocator;
  undefined1 security_stack [32];
  undefined4 stack_flag;
  longlong *temp_container;
  longlong *old_container;
  undefined8 stack_canary;
  undefined *debug_info;
  undefined1 *buffer_ptr;
  undefined4 buffer_size;
  undefined1 temp_buffer [72];
  ulonglong security_cookie;
  
  stack_canary = 0xfffffffffffffffe;  // 栈保护
  security_cookie = _DAT_180bf00a8 ^ (ulonglong)security_stack;  // 安全cookie
  stack_flag = 0;
  element_count = **(int **)(source_context + 8);
  *(int **)(source_context + 8) = *(int **)(source_context + 8) + 1;
  system_context = _DAT_180c8a998;  // 系统上下文
  if (element_count != 0) {
    element_count = element_count * 4;  // 元素数量乘以4
    debug_info = &UNK_1809fcc58;  // 调试信息
    buffer_ptr = temp_buffer;
    temp_buffer[0] = 0;
    buffer_size = 0x1c;
    strcpy_s(temp_buffer,0x40,&DAT_1809ffc60);  // 复制字符串
    initialize_security_context();  // FUN_1802037e0
    debug_info = &UNK_18098bcb0;
    memory_allocator = allocate_container_memory(_DAT_180c8ed18,element_count,0x10,0x1e);  // FUN_18062b1e0
    create_4x_data_container(system_context,&temp_container);  // FUN_180083520
    new_container = temp_container;
    temp_container[2] = memory_allocator;
    *(int *)(temp_container + 3) = element_count;
    *(int *)((longlong)temp_container + 0x1c) = element_count;
    *(undefined1 *)(temp_container + 4) = 0;
    stack_flag = 1;
    temp_container = (longlong *)0x0;
    old_container = (longlong *)*output_ptr;
    *output_ptr = (longlong)new_container;
    if (old_container != (longlong *)0x0) {
      (**(code **)(*old_container + 0x38))();  // 调用析构函数
    }
    stack_flag = 0;
    if (temp_container != (longlong *)0x0) {
      (**(code **)(*temp_container + 0x38))();  // 调用析构函数
    }
    // 复制源数据到新容器
    memcpy(*(undefined8 *)(*output_ptr + 0x10),*(undefined8 *)(source_context + 8),
           (longlong)*(int *)(*output_ptr + 0x1c));
  }
  old_container = (longlong *)*output_ptr;
  *output_ptr = 0;
  if (old_container != (longlong *)0x0) {
    (**(code **)(*old_container + 0x38))();  // 调用析构函数
  }
  // 安全检查退出
  security_check_exit(security_cookie ^ (ulonglong)security_stack);  // FUN_1808fc050
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: process_data_array_4x_alt - 处理4倍数据数组（替代版本）
// 原始函数名: FUN_180081870
// 功能: 处理4倍大小的数据数组，使用不同的容器创建函数
// 参数: source_context - 源数据上下文，output_ptr - 输出指针
// 实现简化：与上一个函数类似，但使用不同的容器创建函数
void process_data_array_4x_alt(longlong source_context, longlong *output_ptr)

{
  int element_count;
  undefined8 system_context;
  longlong *new_container;
  longlong memory_allocator;
  undefined1 security_stack [32];
  undefined4 stack_flag;
  longlong *temp_container;
  longlong *old_container;
  undefined8 stack_canary;
  undefined *debug_info;
  undefined1 *buffer_ptr;
  undefined4 buffer_size;
  undefined1 temp_buffer [72];
  ulonglong security_cookie;
  
  stack_canary = 0xfffffffffffffffe;  // 栈保护
  security_cookie = _DAT_180bf00a8 ^ (ulonglong)security_stack;  // 安全cookie
  stack_flag = 0;
  element_count = **(int **)(source_context + 8);
  *(int **)(source_context + 8) = *(int **)(source_context + 8) + 1;
  system_context = _DAT_180c8a998;  // 系统上下文
  if (element_count != 0) {
    element_count = element_count * 4;  // 元素数量乘以4
    debug_info = &UNK_1809fcc58;  // 调试信息
    buffer_ptr = temp_buffer;
    temp_buffer[0] = 0;
    buffer_size = 0x1c;
    strcpy_s(temp_buffer,0x40,&DAT_1809ffc60);  // 复制字符串
    initialize_security_context();  // FUN_1802037e0
    debug_info = &UNK_18098bcb0;
    memory_allocator = allocate_container_memory(_DAT_180c8ed18,element_count,0x10,0x1e);  // FUN_18062b1e0
    create_4x_data_container_alt(system_context,&temp_container);  // FUN_1800836a0
    new_container = temp_container;
    temp_container[2] = memory_allocator;
    *(int *)(temp_container + 3) = element_count;
    *(int *)((longlong)temp_container + 0x1c) = element_count;
    *(undefined1 *)(temp_container + 4) = 0;
    stack_flag = 1;
    temp_container = (longlong *)0x0;
    old_container = (longlong *)*output_ptr;
    *output_ptr = (longlong)new_container;
    if (old_container != (longlong *)0x0) {
      (**(code **)(*old_container + 0x38))();  // 调用析构函数
    }
    stack_flag = 0;
    if (temp_container != (longlong *)0x0) {
      (**(code **)(*temp_container + 0x38))();  // 调用析构函数
    }
    // 复制源数据到新容器
    memcpy(*(undefined8 *)(*output_ptr + 0x10),*(undefined8 *)(source_context + 8),
           (longlong)*(int *)(*output_ptr + 0x1c));
  }
  old_container = (longlong *)*output_ptr;
  *output_ptr = 0;
  if (old_container != (longlong *)0x0) {
    (**(code **)(*old_container + 0x38))();  // 调用析构函数
  }
  // 安全检查退出
  security_check_exit(security_cookie ^ (ulonglong)security_stack);  // FUN_1808fc050
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: process_data_array_24x - 处理24倍数据数组
// 原始函数名: FUN_180081a20
// 功能: 处理24倍大小的数据数组（0x18 = 24字节）
// 参数: source_context - 源数据上下文，output_ptr - 输出指针
// 实现简化：使用24字节对齐的数据处理，适用于大型数据结构
void process_data_array_24x(longlong source_context, longlong *output_ptr)

{
  undefined8 system_context;
  longlong *new_container;
  longlong memory_allocator;
  int element_count;
  undefined1 security_stack [32];
  undefined4 stack_flag;
  longlong *temp_container;
  longlong *old_container;
  undefined8 stack_canary;
  undefined *debug_info;
  undefined1 *buffer_ptr;
  undefined4 buffer_size;
  undefined1 temp_buffer [72];
  ulonglong security_cookie;
  
  stack_canary = 0xfffffffffffffffe;  // 栈保护
  security_cookie = _DAT_180bf00a8 ^ (ulonglong)security_stack;  // 安全cookie
  stack_flag = 0;
  element_count = **(int **)(source_context + 8);
  *(int **)(source_context + 8) = *(int **)(source_context + 8) + 1;
  system_context = _DAT_180c8a998;  // 系统上下文
  if (element_count != 0) {
    element_count = element_count * 0x18;  // 元素数量乘以24（0x18）
    debug_info = &UNK_1809fcc58;  // 调试信息
    buffer_ptr = temp_buffer;
    temp_buffer[0] = 0;
    buffer_size = 0x1c;
    strcpy_s(temp_buffer,0x40,&DAT_1809ffc60);  // 复制字符串
    initialize_security_context();  // FUN_1802037e0
    debug_info = &UNK_18098bcb0;
    memory_allocator = allocate_container_memory(_DAT_180c8ed18,element_count,0x10,0x1e);  // FUN_18062b1e0
    create_24x_data_container(system_context,&temp_container);  // FUN_180083820
    new_container = temp_container;
    temp_container[2] = memory_allocator;
    *(int *)(temp_container + 3) = element_count;
    *(int *)((longlong)temp_container + 0x1c) = element_count;
    *(undefined1 *)(temp_container + 4) = 0;
    stack_flag = 1;
    temp_container = (longlong *)0x0;
    old_container = (longlong *)*output_ptr;
    *output_ptr = (longlong)new_container;
    if (old_container != (longlong *)0x0) {
      (**(code **)(*old_container + 0x38))();  // 调用析构函数
    }
    stack_flag = 0;
    if (temp_container != (longlong *)0x0) {
      (**(code **)(*temp_container + 0x38))();  // 调用析构函数
    }
    // 复制源数据到新容器
    memcpy(*(undefined8 *)(*output_ptr + 0x10),*(undefined8 *)(source_context + 8),
           (longlong)*(int *)(*output_ptr + 0x1c));
  }
  old_container = (longlong *)*output_ptr;
  *output_ptr = 0;
  if (old_container != (longlong *)0x0) {
    (**(code **)(*old_container + 0x38))();  // 调用析构函数
  }
  // 安全检查退出
  security_check_exit(security_cookie ^ (ulonglong)security_stack);  // FUN_1808fc050
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: process_data_array_8x - 处理8倍数据数组
// 原始函数名: FUN_180081bd0
// 功能: 处理8倍大小的数据数组，适用于8字节对齐的数据结构
// 参数: source_context - 源数据上下文，output_ptr - 输出指针
// 实现简化：使用8字节对齐的数据处理，适用于标准数据类型
void process_data_array_8x(longlong source_context, longlong *output_ptr)

{
  int element_count;
  undefined8 system_context;
  longlong *new_container;
  longlong memory_allocator;
  undefined1 security_stack [32];
  undefined4 stack_flag;
  longlong *temp_container;
  longlong *old_container;
  undefined8 stack_canary;
  undefined *debug_info;
  undefined1 *buffer_ptr;
  undefined4 buffer_size;
  undefined1 temp_buffer [72];
  ulonglong security_cookie;
  
  stack_canary = 0xfffffffffffffffe;  // 栈保护
  security_cookie = _DAT_180bf00a8 ^ (ulonglong)security_stack;  // 安全cookie
  stack_flag = 0;
  element_count = **(int **)(source_context + 8);
  *(int **)(source_context + 8) = *(int **)(source_context + 8) + 1;
  system_context = _DAT_180c8a998;  // 系统上下文
  if (element_count != 0) {
    element_count = element_count * 8;  // 元素数量乘以8
    debug_info = &UNK_1809fcc58;  // 调试信息
    buffer_ptr = temp_buffer;
    temp_buffer[0] = 0;
    buffer_size = 0x1c;
    strcpy_s(temp_buffer,0x40,&DAT_1809ffc60);  // 复制字符串
    initialize_security_context();  // FUN_1802037e0
    debug_info = &UNK_18098bcb0;
    memory_allocator = allocate_container_memory(_DAT_180c8ed18,element_count,0x10,0x1e);  // FUN_18062b1e0
    create_8x_data_container(system_context,&temp_container);  // FUN_1800839a0
    new_container = temp_container;
    temp_container[2] = memory_allocator;
    *(int *)(temp_container + 3) = element_count;
    *(int *)((longlong)temp_container + 0x1c) = element_count;
    *(undefined1 *)(temp_container + 4) = 0;
    stack_flag = 1;
    temp_container = (longlong *)0x0;
    old_container = (longlong *)*output_ptr;
    *output_ptr = (longlong)new_container;
    if (old_container != (longlong *)0x0) {
      (**(code **)(*old_container + 0x38))();  // 调用析构函数
    }
    stack_flag = 0;
    if (temp_container != (longlong *)0x0) {
      (**(code **)(*temp_container + 0x38))();  // 调用析构函数
    }
    // 复制源数据到新容器
    memcpy(*(undefined8 *)(*output_ptr + 0x10),*(undefined8 *)(source_context + 8),
           (longlong)*(int *)(*output_ptr + 0x1c));
  }
  old_container = (longlong *)*output_ptr;
  *output_ptr = 0;
  if (old_container != (longlong *)0x0) {
    (**(code **)(*old_container + 0x38))();  // 调用析构函数
  }
  // 安全检查退出
  security_check_exit(security_cookie ^ (ulonglong)security_stack);  // FUN_1808fc050
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: process_data_array_4x_direct - 直接处理4倍数据数组
// 原始函数名: FUN_180081d80
// 功能: 直接处理4倍大小的数据数组，使用直接数据处理函数
// 参数: source_context - 源数据上下文，output_ptr - 输出指针
// 实现简化：使用直接数据处理方式，避免中间转换步骤
void process_data_array_4x_direct(longlong source_context, longlong *output_ptr)

{
  int element_count;
  undefined8 system_context;
  longlong *new_container;
  longlong memory_allocator;
  undefined1 security_stack [32];
  undefined4 stack_flag;
  longlong *temp_container;
  longlong *old_container;
  undefined8 stack_canary;
  undefined *debug_info;
  undefined1 *buffer_ptr;
  undefined4 buffer_size;
  undefined1 temp_buffer [72];
  ulonglong security_cookie;
  
  stack_canary = 0xfffffffffffffffe;  // 栈保护
  security_cookie = _DAT_180bf00a8 ^ (ulonglong)security_stack;  // 安全cookie
  stack_flag = 0;
  element_count = **(int **)(source_context + 8);
  *(int **)(source_context + 8) = *(int **)(source_context + 8) + 1;
  system_context = _DAT_180c8a998;  // 系统上下文
  if (element_count != 0) {
    element_count = element_count * 4;  // 元素数量乘以4
    debug_info = &UNK_1809fcc58;  // 调试信息
    buffer_ptr = temp_buffer;
    temp_buffer[0] = 0;
    buffer_size = 0x1c;
    strcpy_s(temp_buffer,0x40,&DAT_1809ffc60);  // 复制字符串
    initialize_security_context();  // FUN_1802037e0
    debug_info = &UNK_18098bcb0;
    memory_allocator = allocate_container_memory(_DAT_180c8ed18,element_count,0x10,0x1e);  // FUN_18062b1e0
    process_direct_4x_data(system_context,&temp_container);  // FUN_180082aa0
    new_container = temp_container;
    temp_container[2] = memory_allocator;
    *(int *)(temp_container + 3) = element_count;
    *(int *)((longlong)temp_container + 0x1c) = element_count;
    *(undefined1 *)(temp_container + 4) = 0;
    stack_flag = 1;
    temp_container = (longlong *)0x0;
    old_container = (longlong *)*output_ptr;
    *output_ptr = (longlong)new_container;
    if (old_container != (longlong *)0x0) {
      (**(code **)(*old_container + 0x38))();  // 调用析构函数
    }
    stack_flag = 0;
    if (temp_container != (longlong *)0x0) {
      (**(code **)(*temp_container + 0x38))();  // 调用析构函数
    }
    // 复制源数据到新容器
    memcpy(*(undefined8 *)(*output_ptr + 0x10),*(undefined8 *)(source_context + 8),
           (longlong)*(int *)(*output_ptr + 0x1c));
  }
  old_container = (longlong *)*output_ptr;
  *output_ptr = 0;
  if (old_container != (longlong *)0x0) {
    (**(code **)(*old_container + 0x38))();  // 调用析构函数
  }
  // 安全检查退出
  security_check_exit(security_cookie ^ (ulonglong)security_stack);  // FUN_1808fc050
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: process_data_array_direct_copy - 直接处理数据数组并复制
// 原始函数名: FUN_180081f30
// 功能: 直接处理数据数组，不进行倍数转换，直接复制源数据
// 参数: source_context - 源数据上下文，output_ptr - 输出指针
// 实现简化：直接处理原始数据，保持原有大小和格式
void process_data_array_direct_copy(longlong source_context, longlong *output_ptr)

{
  int element_count;
  undefined8 system_context;
  longlong *new_container;
  longlong memory_allocator;
  undefined1 security_stack [32];
  undefined4 stack_flag;
  longlong *temp_container;
  longlong *old_container;
  undefined8 stack_canary;
  undefined *debug_info;
  undefined1 *buffer_ptr;
  undefined4 buffer_size;
  undefined1 temp_buffer [72];
  ulonglong security_cookie;
  
  stack_canary = 0xfffffffffffffffe;  // 栈保护
  security_cookie = _DAT_180bf00a8 ^ (ulonglong)security_stack;  // 安全cookie
  stack_flag = 0;
  element_count = **(int **)(source_context + 8);
  *(int **)(source_context + 8) = *(int **)(source_context + 8) + 1;
  system_context = _DAT_180c8a998;  // 系统上下文
  if (element_count != 0) {
    debug_info = &UNK_1809fcc58;  // 调试信息
    buffer_ptr = temp_buffer;
    temp_buffer[0] = 0;
    buffer_size = 0x1c;
    strcpy_s(temp_buffer,0x40,&DAT_1809ffc60);  // 复制字符串
    initialize_security_context();  // FUN_1802037e0
    debug_info = &UNK_18098bcb0;
    memory_allocator = allocate_container_memory(_DAT_180c8ed18,element_count,0x10,0x1e);  // FUN_18062b1e0
    process_direct_data_copy(system_context,&temp_container);  // FUN_1800828d0
    new_container = temp_container;
    temp_container[2] = memory_allocator;
    *(int *)(temp_container + 3) = element_count;
    *(int *)((longlong)temp_container + 0x1c) = element_count;
    *(undefined1 *)(temp_container + 4) = 0;
    stack_flag = 1;
    temp_container = (longlong *)0x0;
    old_container = (longlong *)*output_ptr;
    *output_ptr = (longlong)new_container;
    if (old_container != (longlong *)0x0) {
      (**(code **)(*old_container + 0x38))();  // 调用析构函数
    }
    stack_flag = 0;
    if (temp_container != (longlong *)0x0) {
      (**(code **)(*temp_container + 0x38))();  // 调用析构函数
    }
    // 复制源数据到新容器
    memcpy(*(undefined8 *)(*output_ptr + 0x10),*(undefined8 *)(source_context + 8),
           (longlong)*(int *)(*output_ptr + 0x1c));
  }
  old_container = (longlong *)*output_ptr;
  *output_ptr = 0;
  if (old_container != (longlong *)0x0) {
    (**(code **)(*old_container + 0x38))();  // 调用析构函数
  }
  // 安全检查退出
  security_check_exit(security_cookie ^ (ulonglong)security_stack);  // FUN_1808fc050
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: process_data_array_2x_copy - 处理2倍数据数组并复制
// 原始函数名: FUN_1800820e0
// 功能: 处理2倍大小的数据数组，适用于需要双倍空间的数据结构
// 参数: source_context - 源数据上下文，output_ptr - 输出指针
// 实现简化：使用2倍数据处理，适用于需要扩展的数据结构
void process_data_array_2x_copy(longlong source_context, longlong *output_ptr)

{
  int element_count;
  undefined8 system_context;
  longlong *new_container;
  longlong memory_allocator;
  undefined1 security_stack [32];
  undefined4 stack_flag;
  longlong *temp_container;
  longlong *old_container;
  undefined8 stack_canary;
  undefined *debug_info;
  undefined1 *buffer_ptr;
  undefined4 buffer_size;
  undefined1 temp_buffer [72];
  ulonglong security_cookie;
  
  stack_canary = 0xfffffffffffffffe;  // 栈保护
  security_cookie = _DAT_180bf00a8 ^ (ulonglong)security_stack;  // 安全cookie
  stack_flag = 0;
  element_count = **(int **)(source_context + 8);
  *(int **)(source_context + 8) = *(int **)(source_context + 8) + 1;
  system_context = _DAT_180c8a998;  // 系统上下文
  if (element_count != 0) {
    element_count = element_count * 2;  // 元素数量乘以2
    debug_info = &UNK_1809fcc58;  // 调试信息
    buffer_ptr = temp_buffer;
    temp_buffer[0] = 0;
    buffer_size = 0x1c;
    strcpy_s(temp_buffer,0x40,&DAT_1809ffc60);  // 复制字符串
    initialize_security_context();  // FUN_1802037e0
    debug_info = &UNK_18098bcb0;
    memory_allocator = allocate_container_memory(_DAT_180c8ed18,element_count,0x10,0x1e);  // FUN_18062b1e0
    process_2x_data_copy(system_context,&temp_container);  // FUN_180082c20
    new_container = temp_container;
    temp_container[2] = memory_allocator;
    *(int *)(temp_container + 3) = element_count;
    *(int *)((longlong)temp_container + 0x1c) = element_count;
    *(undefined1 *)(temp_container + 4) = 0;
    stack_flag = 1;
    temp_container = (longlong *)0x0;
    old_container = (longlong *)*output_ptr;
    *output_ptr = (longlong)new_container;
    if (old_container != (longlong *)0x0) {
      (**(code **)(*old_container + 0x38))();  // 调用析构函数
    }
    stack_flag = 0;
    if (temp_container != (longlong *)0x0) {
      (**(code **)(*temp_container + 0x38))();  // 调用析构函数
    }
    // 复制源数据到新容器
    memcpy(*(undefined8 *)(*output_ptr + 0x10),*(undefined8 *)(source_context + 8),
           (longlong)*(int *)(*output_ptr + 0x1c));
  }
  old_container = (longlong *)*output_ptr;
  *output_ptr = 0;
  if (old_container != (longlong *)0x0) {
    (**(code **)(*old_container + 0x38))();  // 调用析构函数
  }
  // 安全检查退出
  security_check_exit(security_cookie ^ (ulonglong)security_stack);  // FUN_1808fc050
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: expand_container_capacity_32byte - 扩展容器容量（32字节对齐）
// 原始函数名: FUN_180082290
// 功能: 扩展容器的容量，使用32字节对齐的内存分配
// 参数: container_ptr - 容器指针，required_elements - 需要的元素数量，alignment - 对齐方式，allocator - 分配器
// 实现简化：处理容器扩容，包括数据迁移和内存重新分配
void expand_container_capacity_32byte(longlong *container_ptr, ulonglong required_elements, undefined8 alignment, undefined8 allocator)

{
  undefined8 *current_end;
  undefined4 temp_data;
  undefined8 temp_value;
  longlong offset_diff;
  undefined8 *new_memory;
  undefined8 *new_ptr;
  undefined8 *old_end;
  longlong *current_ptr;
  ulonglong new_capacity;
  undefined8 *old_start;
  ulonglong elements_to_init;
  
  old_end = (undefined8 *)container_ptr[1];
  // 检查是否需要扩容：当前可用空间是否小于需要的元素数量
  if ((ulonglong)(container_ptr[2] - (longlong)old_end >> 5) < required_elements) {
    old_start = (undefined8 *)*container_ptr;
    offset_diff = (longlong)old_end - (longlong)old_start >> 5;  // 计算当前元素数量
    new_capacity = offset_diff * 2;  // 新容量为当前容量的2倍
    if (offset_diff == 0) {
      new_capacity = 1;  // 最小容量为1
    }
    if (new_capacity < offset_diff + required_elements) {
      new_capacity = offset_diff + required_elements;  // 确保容量足够
    }
    new_memory = (undefined8 *)0x0;
    if (new_capacity != 0) {
      // 分配新的内存空间
      new_memory = (undefined8 *)
               allocate_aligned_memory(_DAT_180c8ed18,new_capacity << 5,(char)container_ptr[3],allocator,0xfffffffffffffffe);  // FUN_18062b420
      old_end = (undefined8 *)container_ptr[1];
      old_start = (undefined8 *)*container_ptr;
    }
    new_ptr = new_memory;
    if (old_start != old_end) {
      // 迁移现有数据到新内存
      offset_diff = (longlong)new_memory - (longlong)old_start;
      old_start = old_start + 3;
      do {
        *new_ptr = 0;
        *(undefined8 *)(offset_diff + -0x10 + (longlong)old_start) = 0;
        *(undefined8 *)(offset_diff + -8 + (longlong)old_start) = 0;
        *(undefined4 *)(offset_diff + (longlong)old_start) = *(undefined4 *)old_start;
        temp_value = *new_ptr;
        *new_ptr = old_start[-3];
        old_start[-3] = temp_value;
        temp_value = *(undefined8 *)(offset_diff + -0x10 + (longlong)old_start);
        *(undefined8 *)(offset_diff + -0x10 + (longlong)old_start) = old_start[-2];
        old_start[-2] = temp_value;
        temp_value = *(undefined8 *)(offset_diff + -8 + (longlong)old_start);
        *(undefined8 *)(offset_diff + -8 + (longlong)old_start) = old_start[-1];
        old_start[-1] = temp_value;
        temp_data = *(undefined4 *)(offset_diff + (longlong)old_start);
        *(undefined4 *)(offset_diff + (longlong)old_start) = *(undefined4 *)old_start;
        *(undefined4 *)old_start = temp_data;
        new_ptr = new_ptr + 4;
        current_end = old_start + 1;
        old_start = old_start + 4;
      } while (current_end != old_end);
    }
    if (required_elements != 0) {
      // 初始化新分配的元素
      old_end = new_ptr + 1;
      elements_to_init = required_elements;
      do {
        old_end[-1] = 0;
        *old_end = 0;
        old_end[1] = 0;
        *(undefined4 *)(old_end + 2) = 3;
        old_end = old_end + 4;
        elements_to_init = elements_to_init - 1;
      } while (elements_to_init != 0);
    }
    // 验证旧容器中没有非零指针
    current_ptr = (longlong *)*container_ptr;
    if (current_ptr != (longlong *)container_ptr[1]) {
      do {
        if (*current_ptr != 0) {
          // 发现非零指针，触发错误
          trigger_critical_error();  // FUN_18064e900
        }
        current_ptr = current_ptr + 4;
      } while (current_ptr != (longlong *)container_ptr[1]);
      current_ptr = (longlong *)*container_ptr;
    }
    if (current_ptr != (longlong *)0x0) {
      // 清理旧容器
      cleanup_old_container(current_ptr);  // FUN_18064e900
    }
    // 更新容器指针
    *container_ptr = (longlong)new_memory;
    container_ptr[1] = (longlong)(new_ptr + required_elements * 4);
    container_ptr[2] = (longlong)(new_memory + new_capacity * 4);
  }
  else {
    // 不需要扩容，直接初始化新元素
    elements_to_init = required_elements;
    if (required_elements != 0) {
      do {
        *old_end = 0;
        old_end[1] = 0;
        old_end[2] = 0;
        *(undefined4 *)(old_end + 3) = 3;
        old_end = old_end + 4;
        elements_to_init = elements_to_init - 1;
      } while (elements_to_init != 0);
      old_end = (undefined8 *)container_ptr[1];
    }
    container_ptr[1] = (longlong)(old_end + required_elements * 4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: expand_container_capacity_32byte_alt - 扩展容器容量（32字节对齐，替代版本）
// 原始函数名: FUN_1800824a0
// 功能: 扩展容器的容量，使用32字节对齐的内存分配（与上一个函数功能相同）
// 参数: container_ptr - 容器指针，required_elements - 需要的元素数量，alignment - 对齐方式，allocator - 分配器
// 实现简化：与上一个函数功能相同，可能是不同情况下的实现
void expand_container_capacity_32byte_alt(longlong *container_ptr, ulonglong required_elements, undefined8 alignment, undefined8 allocator)

{
  undefined8 *current_end;
  undefined4 temp_data;
  undefined8 temp_value;
  longlong offset_diff;
  undefined8 *new_memory;
  undefined8 *new_ptr;
  undefined8 *old_end;
  longlong *current_ptr;
  ulonglong new_capacity;
  undefined8 *old_start;
  ulonglong elements_to_init;
  
  old_end = (undefined8 *)container_ptr[1];
  // 检查是否需要扩容：当前可用空间是否小于需要的元素数量
  if ((ulonglong)(container_ptr[2] - (longlong)old_end >> 5) < required_elements) {
    old_start = (undefined8 *)*container_ptr;
    offset_diff = (longlong)old_end - (longlong)old_start >> 5;  // 计算当前元素数量
    new_capacity = offset_diff * 2;  // 新容量为当前容量的2倍
    if (offset_diff == 0) {
      new_capacity = 1;  // 最小容量为1
    }
    if (new_capacity < offset_diff + required_elements) {
      new_capacity = offset_diff + required_elements;  // 确保容量足够
    }
    new_memory = (undefined8 *)0x0;
    if (new_capacity != 0) {
      // 分配新的内存空间
      new_memory = (undefined8 *)
               allocate_aligned_memory(_DAT_180c8ed18,new_capacity << 5,(char)container_ptr[3],allocator,0xfffffffffffffffe);  // FUN_18062b420
      old_end = (undefined8 *)container_ptr[1];
      old_start = (undefined8 *)*container_ptr;
    }
    new_ptr = new_memory;
    if (old_start != old_end) {
      // 迁移现有数据到新内存
      offset_diff = (longlong)new_memory - (longlong)old_start;
      old_start = old_start + 3;
      do {
        *new_ptr = 0;
        *(undefined8 *)(offset_diff + -0x10 + (longlong)old_start) = 0;
        *(undefined8 *)(offset_diff + -8 + (longlong)old_start) = 0;
        *(undefined4 *)(offset_diff + (longlong)old_start) = *(undefined4 *)old_start;
        temp_value = *new_ptr;
        *new_ptr = old_start[-3];
        old_start[-3] = temp_value;
        temp_value = *(undefined8 *)(offset_diff + -0x10 + (longlong)old_start);
        *(undefined8 *)(offset_diff + -0x10 + (longlong)old_start) = old_start[-2];
        old_start[-2] = temp_value;
        temp_value = *(undefined8 *)(offset_diff + -8 + (longlong)old_start);
        *(undefined8 *)(offset_diff + -8 + (longlong)old_start) = old_start[-1];
        old_start[-1] = temp_value;
        temp_data = *(undefined4 *)(offset_diff + (longlong)old_start);
        *(undefined4 *)(offset_diff + (longlong)old_start) = *(undefined4 *)old_start;
        *(undefined4 *)old_start = temp_data;
        new_ptr = new_ptr + 4;
        current_end = old_start + 1;
        old_start = old_start + 4;
      } while (current_end != old_end);
    }
    if (required_elements != 0) {
      // 初始化新分配的元素
      old_end = new_ptr + 1;
      elements_to_init = required_elements;
      do {
        old_end[-1] = 0;
        *old_end = 0;
        old_end[1] = 0;
        *(undefined4 *)(old_end + 2) = 3;
        old_end = old_end + 4;
        elements_to_init = elements_to_init - 1;
      } while (elements_to_init != 0);
    }
    // 验证旧容器中没有非零指针
    current_ptr = (longlong *)*container_ptr;
    if (current_ptr != (longlong *)container_ptr[1]) {
      do {
        if (*current_ptr != 0) {
          // 发现非零指针，触发错误
          trigger_critical_error();  // FUN_18064e900
        }
        current_ptr = current_ptr + 4;
      } while (current_ptr != (longlong *)container_ptr[1]);
      current_ptr = (longlong *)*container_ptr;
    }
    if (current_ptr != (longlong *)0x0) {
      // 清理旧容器
      cleanup_old_container(current_ptr);  // FUN_18064e900
    }
    // 更新容器指针
    *container_ptr = (longlong)new_memory;
    container_ptr[1] = (longlong)(new_ptr + required_elements * 4);
    container_ptr[2] = (longlong)(new_memory + new_capacity * 4);
  }
  else {
    // 不需要扩容，直接初始化新元素
    elements_to_init = required_elements;
    if (required_elements != 0) {
      do {
        *old_end = 0;
        old_end[1] = 0;
        old_end[2] = 0;
        *(undefined4 *)(old_end + 3) = 3;
        old_end = old_end + 4;
        elements_to_init = elements_to_init - 1;
      } while (elements_to_init != 0);
      old_end = (undefined8 *)container_ptr[1];
    }
    container_ptr[1] = (longlong)(old_end + required_elements * 4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



