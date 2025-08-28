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



