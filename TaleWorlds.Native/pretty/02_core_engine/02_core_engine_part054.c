#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part054.c - 核心引擎模块第054部分
// 包含15个函数，主要涉及数据结构操作、内存管理和线程同步

// 函数：堆排序插入操作
// 用于在堆数据结构中插入元素并维护堆性质
/**
 * 堆排序插入和平衡操作
 * 在堆数据结构中插入元素并维护堆性质，确保父节点总是小于子节点
 * 
 * @param heap_base 堆的基地址
 * @param heap_size 堆的当前大小
 * @param capacity 堆的容量
 * @param index 插入位置的索引
 * @param new_element 要插入的新元素指针
 */
void heap_insert_and_balance(longlong heap_base, longlong heap_size, longlong capacity, 
                            longlong index, longlong *new_element)
{
  int left_child_key;
  byte *current_byte;
  int right_child_key;
  longlong left_child_data;
  bool should_swap;
  longlong swap_index;
  byte *string_ptr;
  uint compare_char;
  longlong child_index;
  longlong parent_index;
  longlong *parent_node;
  
  // 从当前节点开始向下调整堆
  parent_index = index * 2;
  while (child_index = parent_index + 2, child_index < capacity) {
    swap_index = child_index * 0x10;
    right_child_key = *(int *)(swap_index + 8 + heap_base);
    left_child_key = *(int *)(swap_index + -8 + heap_base);
    
    // 比较左右子节点的键值
    if (right_child_key == left_child_key) {
      left_child_data = *(longlong *)(swap_index + -0x10 + heap_base);
      if (*(int *)(left_child_data + 0x78) == 0) {
        should_swap = false;
      }
      else if (*(int *)(*(longlong *)(swap_index + heap_base) + 0x78) == 0) {
        should_swap = true;
      }
      else {
        // 比较字符串内容
        string_ptr = *(byte **)(left_child_data + 0x70);
        swap_index = *(longlong *)(*(longlong *)(swap_index + heap_base) + 0x70) - (longlong)string_ptr;
        do {
          current_byte = *string_ptr;
          compare_char = (uint)string_ptr[swap_index];
          if (current_byte != compare_char) break;
          string_ptr = string_ptr + 1;
        } while (compare_char != 0);
        should_swap = 0 < (int)(current_byte - compare_char);
      }
    }
    else {
      should_swap = right_child_key < left_child_key;
    }
    
    swap_index = parent_index + 1;
    if (!should_swap) {
      swap_index = child_index;
    }
    
    // 交换节点内容
    *(longlong *)(heap_base + index * 0x10) = *(longlong *)(heap_base + swap_index * 0x10);
    *(int *)(heap_base + 8 + index * 0x10) = *(int *)(heap_base + 8 + swap_index * 0x10);
    index = swap_index;
    parent_index = swap_index * 2;
  }
  
  // 处理最后一个可能的子节点
  if (child_index == capacity) {
    *(longlong *)(heap_base + index * 0x10) = *(longlong *)(heap_base + -0x10 + child_index * 0x10);
    *(int *)(heap_base + 8 + index * 0x10) = *(int *)(heap_base + -8 + child_index * 0x10);
    index = parent_index + 1;
  }
  
  // 向上调整堆，确保父节点小于子节点
  while (heap_size < index) {
    parent_index = index + -1 >> 1;
    parent_node = (longlong *)(parent_index * 0x10 + heap_base);
    
    if ((int)parent_node[1] == (int)new_element[1]) {
      if (*(int *)(*new_element + 0x78) == 0) {
        should_swap = false;
      }
      else if (*(int *)(*parent_node + 0x78) == 0) {
        should_swap = true;
      }
      else {
        // 比较字符串内容
        string_ptr = *(byte **)(*new_element + 0x70);
        child_index = *(longlong *)(*parent_node + 0x70) - (longlong)string_ptr;
        do {
          current_byte = *string_ptr;
          compare_char = (uint)string_ptr[child_index];
          if (current_byte != compare_char) break;
          string_ptr = string_ptr + 1;
        } while (compare_char != 0);
        should_swap = 0 < (int)(current_byte - compare_char);
      }
    }
    else {
      should_swap = (int)parent_node[1] < (int)new_element[1];
    }
    
    if (!should_swap) break;
    
    // 交换父子节点
    *(longlong *)(heap_base + index * 0x10) = *parent_node;
    *(int *)(heap_base + 8 + index * 0x10) = (int)parent_node[1];
    index = parent_index;
  }
  
  // 将新元素放入最终位置
  *(longlong *)(heap_base + index * 0x10) = *new_element;
  *(int *)(heap_base + 8 + index * 0x10) = (int)new_element[1];
  return;
}



/**
 * 初始化内存块并设置虚函数表
 * 为内存块设置默认的虚函数表指针，并根据标志决定是否释放内存
 * 
 * @param memory_block 内存块指针
 * @param flags 操作标志位
 * @param param3 保留参数
 * @param param4 保留参数
 * @return 返回初始化后的内存块指针
 */
undefined8 *
initialize_memory_block_with_vtable(undefined8 *memory_block, ulonglong flags, undefined8 param3, undefined8 param4)
{
  // 设置虚函数表指针
  *memory_block = &UNK_18098bcb0;
  
  // 如果设置了释放标志，则释放内存
  if ((flags & 1) != 0) {
    free(memory_block, 0x218, param3, param4, 0xfffffffffffffffe);
  }
  
  return memory_block;
}





/**
 * 安全复制字符串到字符串缓冲区
 * 将源字符串安全地复制到目标字符串缓冲区，处理长度限制和缓冲区溢出
 * 
 * @param string_buffer 字符串缓冲区结构体指针
 * @param source_string 源字符串指针
 */
void safe_copy_string_to_buffer(longlong string_buffer, longlong source_string)
{
  longlong string_length;
  
  // 如果源字符串为空，清空缓冲区
  if (source_string == 0) {
    *(int *)(string_buffer + 0x10) = 0;  // 设置长度为0
    **(char **)(string_buffer + 8) = 0;  // 设置字符串内容为空
    return;
  }
  
  // 计算源字符串长度
  string_length = -1;
  do {
    string_length = string_length + 1;
  } while (*(char *)(source_string + string_length) != '\0');
  
  // 如果字符串长度小于512字节，直接复制
  if ((int)string_length < 0x200) {
    *(int *)(string_buffer + 0x10) = (int)string_length;  // 记录字符串长度
    // 安全复制字符串到缓冲区
    strcpy_s(*(char **)(string_buffer + 8), 0x200);
    return;
  }
  
  // 字符串过长，使用扩展处理函数
  FUN_180626f80(&UNK_18098bc48, 0x200, source_string);
  *(int *)(string_buffer + 0x10) = 0;  // 重置长度标志
  **(char **)(string_buffer + 8) = 0;  // 清空字符串内容
  return;
}





/**
 * 安全复制指定长度的字符串到缓冲区
 * 将源字符串的指定长度安全地复制到目标缓冲区，并确保字符串正确终止
 * 
 * @param string_buffer 字符串缓冲区结构体指针
 * @param source_data 源数据指针
 * @param data_length 要复制的数据长度
 */
void safe_copy_string_with_length(longlong string_buffer, undefined8 source_data, int data_length)
{
  // 检查缓冲区大小是否足够
  if (data_length + 1 < 0x200) {
    // 安全复制数据到缓冲区
    memcpy(*(char **)(string_buffer + 8), source_data, (longlong)data_length);
  }
  
  // 确保字符串正确终止
  **(char **)(string_buffer + 8) = 0;  // 添加字符串终止符
  *(int *)(string_buffer + 0x10) = 0;  // 重置长度标志
  return;
}





/**
 * 内存复制包装函数
 * 这是一个内存复制函数的包装，具体实现依赖于上下文
 * 注意：此函数可能不返回，调用时需要谨慎
 */
void memory_copy_wrapper(void)
{
  // 警告：此函数可能不返回
  memcpy();
}





/**
 * 重置字符串对象
 * 将字符串对象重置为初始状态，清空内容和长度信息
 * 
 * @param string_obj 字符串对象指针
 */
void reset_string_object(undefined1 *string_obj)
{
  longlong object_base;
  
  // 清空字符串内容
  *string_obj = 0;
  
  // 重置长度信息
  *(int *)(object_base + 0x10) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 字符串替换和内存操作
 * 在字符串中查找并替换子字符串，执行复杂的内存操作
 * 
 * @param string_buffer 字符串缓冲区结构体指针
 * @param search_string 搜索字符串指针
 * @param replace_string 替换字符串指针
 */
void string_replace_and_memory_operation(longlong string_buffer, longlong search_string, longlong replace_string)
{
  longlong search_result;
  longlong search_len;
  longlong replace_len;
  undefined1 stack_buffer_298 [32];
  undefined8 stack_value_278;
  undefined *stack_ptr_268;
  undefined1 *stack_buffer_260;
  undefined4 stack_value_258;
  undefined1 stack_buffer_250 [520];
  ulonglong security_cookie;
  
  // 初始化栈变量和安全cookie
  stack_value_278 = 0xfffffffffffffffe;
  security_cookie = _DAT_180bf00a8 ^ (ulonglong)stack_buffer_298;
  stack_ptr_268 = &UNK_180a009c8;
  stack_buffer_260 = stack_buffer_250;
  stack_value_258 = 0;
  stack_buffer_250[0] = 0;
  
  // 在字符串中搜索目标子字符串
  search_result = strstr(*(char **)(string_buffer + 8));
  if (search_result != 0) {
    // 计算搜索字符串长度
    search_len = -1;
    replace_len = -1;
    do {
      replace_len = replace_len + 1;
    } while (*(char *)(search_string + replace_len) != '\0');
    
    // 计算替换字符串长度
    do {
      search_len = search_len + 1;
    } while (*(char *)(search_len + replace_string) != '\0');
    
    // 复制字符串到栈缓冲区
    memcpy(stack_buffer_260, *(longlong *)(string_buffer + 8), search_result - *(longlong *)(string_buffer + 8));
  }
  
  // 设置虚函数表指针
  stack_ptr_268 = &UNK_18098bcb0;
  
  // 执行内存清理操作
  FUN_1808fc050(security_cookie ^ (ulonglong)stack_buffer_298);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 创建并初始化内存管理器对象
 * 分配内存并初始化内存管理器的虚函数表和相关数据
 * 
 * @param memory_pool 内存池标识符
 * @param config_flags 配置标志
 * @return 返回初始化后的内存管理器对象指针
 */
undefined8 * create_memory_manager_object(undefined8 memory_pool, undefined4 config_flags)
{
  undefined8 *manager_ptr;
  
  // 分配内存管理器对象
  manager_ptr = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18, 0xb8, 8, 0x1a, 0xfffffffffffffffe);
  
  // 初始化管理器配置
  FUN_1802565b0(manager_ptr, memory_pool, config_flags);
  
  // 设置虚函数表
  *manager_ptr = &UNK_180a00a18;
  
  // 初始化成员变量
  manager_ptr[0x16] = 0;
  
  return manager_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 创建并初始化高级内存管理器对象
 * 分配内存并初始化高级内存管理器的虚函数表和相关数据
 * 
 * @param memory_pool 内存池标识符
 * @param config_flags 配置标志
 * @return 返回初始化后的高级内存管理器对象指针
 */
undefined8 * create_advanced_memory_manager_object(undefined8 memory_pool, undefined4 config_flags)
{
  undefined8 *manager_ptr;
  
  // 分配高级内存管理器对象
  manager_ptr = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18, 0xb8, 8, 0x1a, 0xfffffffffffffffe);
  
  // 初始化管理器配置
  FUN_1802565b0(manager_ptr, memory_pool, config_flags);
  
  // 设置高级虚函数表
  *manager_ptr = &UNK_180a00ae8;
  
  // 初始化成员变量
  manager_ptr[0x16] = 0;
  
  return manager_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 初始化线程管理器和相关组件
 * 创建并初始化线程管理器，包括互斥锁、线程池和同步对象
 * 
 * @param thread_manager 线程管理器对象指针
 * @return 返回初始化后的线程管理器指针
 */
undefined8 * initialize_thread_manager(undefined8 *thread_manager)
{
  longlong *old_object;
  int mutex_result;
  undefined8 new_object;
  longlong *thread_object;
  longlong object_ptr;
  longlong loop_counter;
  longlong *thread_pool;
  
  // 初始化32个线程槽位
  loop_counter = 0x20;
  FUN_1808fc838(thread_manager + 1, 8, 0x20, &SUB_18005d5f0, FUN_180045af0);
  thread_pool = thread_manager + 0x21;
  FUN_1808fc838(thread_pool, 8, 0x20, &SUB_18005d5f0, FUN_180045af0);
  
  // 初始化状态标志
  thread_manager[0x71] = 0;
  thread_manager[0x72] = 0;
  thread_manager[0x73] = 0;
  *(int *)(thread_manager + 0x74) = 3;
  
  // 初始化线程池
  FUN_1808fc838(thread_manager + 0x76, 0x20, 0x20, FUN_180627850, FUN_180627b90);
  thread_manager[0x75] = 0;
  
  // 初始化互斥锁
  _Mtx_init_in_situ(thread_manager + 0x106, 0x102);
  
  // 循环初始化线程对象
  do {
    // 创建主线程对象
    new_object = FUN_18062b1e0(_DAT_180c8ed18, 0x3d0, 8, 3);
    thread_object = (longlong *)FUN_180275090(new_object);
    if (thread_object != (longlong *)0x0) {
      // 调用线程对象的初始化函数
      (**(code **)(*thread_object + 0x28))(thread_object);
    }
    
    // 替换旧的线程对象
    old_object = (longlong *)thread_pool[-0x20];
    thread_pool[-0x20] = (longlong)thread_object;
    if (old_object != (longlong *)0x0) {
      // 清理旧的线程对象
      (**(code **)(*old_object + 0x38))();
    }
    
    // 创建辅助线程对象
    new_object = FUN_18062b1e0(_DAT_180c8ed18, 0x300, 0x10, 3);
    thread_object = (longlong *)FUN_180075030(new_object, 1);
    if (thread_object != (longlong *)0x0) {
      // 调用辅助线程对象的初始化函数
      (**(code **)(*thread_object + 0x28))(thread_object);
    }
    
    // 替换旧的辅助线程对象
    old_object = (longlong *)*thread_pool;
    *thread_pool = (longlong)thread_object;
    if (old_object != (longlong *)0x0) {
      // 清理旧的辅助线程对象
      (**(code **)(*old_object + 0x38))();
    }
    
    // 调用线程对象的设置函数
    (**(code **)(*(longlong *)(*thread_pool + 0x10) + 0x10))((longlong *)(*thread_pool + 0x10), &UNK_180a01310);
    
    object_ptr = *thread_pool;
    
    // 设置线程状态标志1
    if (*(char *)(object_ptr + 0xfa) != '\x01') {
      *(undefined1 *)(object_ptr + 0xfa) = 1;
      FUN_180079520(object_ptr);
      object_ptr = *thread_pool;
    }
    
    // 设置线程状态标志2
    if (*(char *)(object_ptr + 0xfb) != '\x01') {
      *(undefined1 *)(object_ptr + 0xfb) = 1;
      FUN_180079520(object_ptr);
      object_ptr = *thread_pool;
    }
    
    // 线程安全地增加引用计数
    mutex_result = _Mtx_lock(0x180c91910);
    if (mutex_result != 0) {
      __Throw_C_error_std__YAXH_Z(mutex_result);
    }
    *(char *)(object_ptr + 0xfc) = *(char *)(object_ptr + 0xfc) + '\x01';
    mutex_result = _Mtx_unlock(0x180c91910);
    if (mutex_result != 0) {
      __Throw_C_error_std__YAXH_Z(mutex_result);
    }
    
    thread_pool = thread_pool + 1;
    loop_counter = loop_counter + -1;
  } while (loop_counter != 0);
  
  // 清空管理器指针
  *thread_manager = 0;
  return thread_manager;
}





/**
 * 销毁线程管理器和相关资源
 * 清理线程管理器占用的所有资源，包括互斥锁和线程池
 * 
 * @param thread_manager 线程管理器对象指针
 */
void destroy_thread_manager(longlong thread_manager)
{
  undefined8 cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  
  // 销毁互斥锁
  _Mtx_destroy_in_situ();
  
  // 清理线程池资源
  FUN_1808fc8a8(thread_manager + 0x3b0, 0x20, 0x20, FUN_180627b90, cleanup_flag);
  
  // 清理内部状态
  FUN_18005d580();
  
  // 清理辅助线程池
  FUN_1808fc8a8(thread_manager + 0x108, 8, 0x20, FUN_180045af0);
  
  // 清理主线程池
  FUN_1808fc8a8(thread_manager + 8, 8, 0x20, FUN_180045af0);
  
  return;
}





/**
 * 清理资源管理器对象
 * 释放资源管理器占用的所有资源，包括内存池和对象引用
 * 
 * @param resource_manager 资源管理器对象指针
 */
void cleanup_resource_manager(longlong *resource_manager)
{
  longlong *old_object;
  undefined8 cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  
  // 计算并设置资源管理器的基地址
  resource_manager[0x1a5] = *(longlong *)(&DAT_180c8ed30 + (longlong)(int)resource_manager[0x1a6] * 8) + -100000;
  
  // 调用清理函数
  FUN_180090b80(resource_manager);
  
  // 重置状态标志
  *(int *)(resource_manager + 0x1a7) = 0;
  
  // 清理主要资源对象
  old_object = (longlong *)resource_manager[0x1a4];
  resource_manager[0x1a4] = 0;
  if (old_object != (longlong *)0x0) {
    (**(code **)(*old_object + 0x38))();
  }
  
  // 二次检查确保清理完成
  if ((longlong *)resource_manager[0x1a4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)resource_manager[0x1a4] + 0x38))();
  }
  
  // 清理资源池
  FUN_1808fc8a8(resource_manager + 6, 0x20, 0x50, FUN_180627b90, cleanup_flag);
  
  // 清理对象引用
  FUN_1808fc8a8(resource_manager + 1, 8, 4, FUN_180045af0);
  
  // 清理主对象引用
  if ((longlong *)*resource_manager != (longlong *)0x0) {
    (**(code **)(*(longlong *)*resource_manager + 0x38))();
  }
  
  return;
}





/**
 * 清理简单资源管理器
 * 释放简单资源管理器占用的基础资源
 * 
 * @param simple_manager 简单资源管理器指针
 */
void cleanup_simple_resource_manager(longlong simple_manager)
{
  // 清理资源管理器的基础资源
  FUN_1808fc8a8(simple_manager + 8, 0x20, 0x20, FUN_180627b90, 0xfffffffffffffffe);
  return;
}





/**
 * 重置线程管理器状态
 * 线程安全地重置线程管理器的所有状态和计数器
 * 
 * @param thread_manager 线程管理器对象指针
 */
void reset_thread_manager_state(undefined8 *thread_manager)
{
  int mutex_result;
  longlong loop_counter;
  undefined8 *counter_ptr;
  undefined8 *thread_pool_ptr;
  
  // 获取互斥锁
  mutex_result = _Mtx_lock(thread_manager + 0x106);
  if (mutex_result != 0) {
    __Throw_C_error_std__YAXH_Z(mutex_result);
  }
  
  // 重置管理器状态
  *thread_manager = 0;
  thread_pool_ptr = thread_manager + 0x21;
  counter_ptr = thread_manager + 0x51;
  
  // 重置32个线程槽位的计数器
  loop_counter = 0x20;
  do {
    // 设置计数器初始值
    *(int *)(counter_ptr + -0x10) = 0x49742400;
    *(int *)counter_ptr = 0x3dcccccd;
    
    // 调用线程对象的清理函数
    (**(code **)(*(longlong *)thread_pool_ptr[-0x20] + 0xd8))();
    
    // 清理线程对象
    FUN_180076760(*thread_pool_ptr);
    
    counter_ptr = (undefined8 *)((longlong)counter_ptr + 4);
    thread_pool_ptr = thread_pool_ptr + 1;
    loop_counter = loop_counter + -1;
  } while (loop_counter != 0);
  
  // 清理管理器状态
  FUN_180057110(thread_manager + 0x71);
  
  // 释放互斥锁
  mutex_result = _Mtx_unlock(thread_manager + 0x106);
  if (mutex_result != 0) {
    __Throw_C_error_std__YAXH_Z(mutex_result);
  }
  
  return;
}





/**
 * 更新浮点数数组值
 * 线程安全地更新浮点数数组的所有元素，并调整基准值
 * 
 * @param float_array 浮点数数组指针
 * @param delta_value 要添加的增量值
 */
void update_float_array_values(float *float_array, float delta_value)
{
  int mutex_result;
  float new_base_value;
  
  // 获取互斥锁
  mutex_result = _Mtx_lock(float_array + 0x20c);
  if (mutex_result != 0) {
    __Throw_C_error_std__YAXH_Z(mutex_result);
  }
  
  // 更新所有浮点数数组元素
  float_array[0x82] = float_array[0x82] + delta_value;
  float_array[0x83] = float_array[0x83] + delta_value;
  float_array[0x84] = float_array[0x84] + delta_value;
  float_array[0x85] = float_array[0x85] + delta_value;
  float_array[0x86] = float_array[0x86] + delta_value;
  float_array[0x87] = float_array[0x87] + delta_value;
  float_array[0x88] = float_array[0x88] + delta_value;
  float_array[0x89] = float_array[0x89] + delta_value;
  float_array[0x8a] = float_array[0x8a] + delta_value;
  float_array[0x8b] = float_array[0x8b] + delta_value;
  float_array[0x8c] = float_array[0x8c] + delta_value;
  float_array[0x8d] = float_array[0x8d] + delta_value;
  float_array[0x8e] = float_array[0x8e] + delta_value;
  float_array[0x8f] = float_array[0x8f] + delta_value;
  float_array[0x90] = float_array[0x90] + delta_value;
  float_array[0x91] = float_array[0x91] + delta_value;
  float_array[0x92] = float_array[0x92] + delta_value;
  float_array[0x93] = float_array[0x93] + delta_value;
  float_array[0x94] = float_array[0x94] + delta_value;
  float_array[0x95] = float_array[0x95] + delta_value;
  float_array[0x96] = float_array[0x96] + delta_value;
  float_array[0x97] = float_array[0x97] + delta_value;
  float_array[0x98] = float_array[0x98] + delta_value;
  float_array[0x99] = float_array[0x99] + delta_value;
  float_array[0x9a] = float_array[0x9a] + delta_value;
  float_array[0x9b] = float_array[0x9b] + delta_value;
  float_array[0x9c] = float_array[0x9c] + delta_value;
  float_array[0x9d] = float_array[0x9d] + delta_value;
  float_array[0x9e] = float_array[0x9e] + delta_value;
  float_array[0x9f] = float_array[0x9f] + delta_value;
  float_array[0xa0] = float_array[0xa0] + delta_value;
  float_array[0xa1] = float_array[0xa1] + delta_value;
  
  // 调整基准值，减去增量的10%
  new_base_value = *float_array - delta_value * 0.1;
  *float_array = new_base_value;
  
  // 确保基准值不小于0
  if (new_base_value < 0.0) {
    *float_array = 0.0;
  }
  
  // 释放互斥锁
  mutex_result = _Mtx_unlock(float_array + 0x20c);
  if (mutex_result != 0) {
    __Throw_C_error_std__YAXH_Z(mutex_result);
  }
  
  return;
}



// WARNING: Removing unreachable block (ram,0x0001800909ad)



/**
 * 渲染对象处理和颜色管理
 * 处理游戏中的渲染对象，包括颜色计算、透明度设置和渲染参数调整
 * 
 * @param render_manager 渲染管理器对象指针
 * @param render_context 渲染上下文参数
 * @param color_param 颜色参数指针
 */
void process_render_objects(float *render_manager, undefined8 render_context, undefined4 *color_param)
{
  float object_color;
  longlong *render_object;
  int mutex_result;
  uint object_index;
  longlong color_data_ptr;
  longlong render_index;
  uint color_rgb;
  char is_aligned;
  float distance_factor;
  float alpha_value;
  undefined4 render_params_188;
  undefined4 render_params_184;
  undefined4 render_params_180;
  float alpha_stack;
  undefined8 transform_178;
  undefined4 material_170;
  undefined2 texture_16c;
  undefined8 shader_168;
  undefined8 uniform_160;
  undefined4 buffer_158;
  undefined1 flag_154;
  undefined4 state_150;
  undefined8 vertex_14c;
  undefined2 index_144;
  undefined8 fragment_140;
  undefined4 geometry_138;
  undefined8 tessellation_130;
  undefined4 compute_128;
  undefined1 attribute_124;
  undefined8 viewport_110;
  undefined8 projection_108;
  undefined8 view_100;
  undefined8 model_f8;
  undefined8 normal_f0;
  undefined8 tangent_e8;
  undefined8 bitangent_e0;
  undefined8 light_d8;
  undefined4 time_d0;
  undefined4 delta_cc;
  undefined8 frame_c8;
  
  // 初始化栈变量和帧参数
  frame_c8 = 0xfffffffffffffffe;
  
  // 获取互斥锁
  mutex_result = _Mtx_lock(render_manager + 0x20c);
  if (mutex_result != 0) {
    __Throw_C_error_std__YAXH_Z(mutex_result);
  }
  
  // 初始化渲染参数
  projection_108 = 0x3f800000;  // 投影矩阵
  view_100 = 0;                // 视图矩阵
  model_f8 = 0x3f80000000000000;  // 模型矩阵
  normal_f0 = 0;               // 法线矩阵
  tangent_e8 = 0;              // 切线矩阵
  bitangent_e0 = 0x3f800000;   // 副切线矩阵
  light_d8 = 0x3a03126f;       // 光照参数
  time_d0 = CONCAT44(0x3f800000, *color_param);  // 时间和颜色参数
  
  // 计算基础透明度值
  alpha_value = 0.1 - *render_manager;
  
  // 遍历32个渲染对象
  mutex_result = 0;
  do {
    // 计算对象索引，确保在有效范围内
    object_index = (int)render_manager[1] + 0x20 + mutex_result & 0x8000001f;
    if ((int)object_index < 0) {
      object_index = (object_index - 1 | 0xffffffe0) + 1;
    }
    render_index = (longlong)(int)object_index;
    
    // 只处理距离小于10.0的对象
    if (render_manager[render_index + 0x82] < 10.0) {
      // 更新透明度值
      alpha_value = alpha_value + render_manager[render_index + 0xa2];
      light_d8 = CONCAT44(alpha_value, (undefined4)light_d8);
      
      // 获取对象颜色
      object_color = render_manager[render_index + 0xc2];
      
      // 计算距离因子（用于透明度衰减）
      distance_factor = render_manager[render_index + 0x82] - 6.0;
      if (distance_factor <= 0.0) {
        distance_factor = 0.0;
      }
      
      // 计算基于距离的透明度
      alpha_stack = 1.0 - distance_factor * 0.16666666;  // 1/6的衰减率
      object_index = (uint)(alpha_stack * 256.0);
      
      // 限制透明度在0-254范围内
      if ((int)object_index < 0) {
        object_index = 0;
      }
      else if (0xfe < (int)object_index) {
        object_index = 0xfe;
      }
      
      // 提取RGB颜色值
      color_rgb = (uint)object_color & 0xffffff;
      
      // 初始化渲染参数
      render_params_188 = 0x3f800000;  // 红色通道
      render_params_184 = 0x3f800000;  // 绿色通道
      render_params_180 = 0x3f800000;  // 蓝色通道
      
      // 调用对象的渲染设置函数
      (**(code **)(**(longlong **)(render_manager + render_index * 2 + 2) + 0x108))
                (*(longlong **)(render_manager + render_index * 2 + 2), &render_params_188);
      
      // 获取渲染对象指针
      render_object = *(longlong **)(render_manager + render_index * 2 + 2);
      
      // 检查对象是否对齐
      if (*(code **)(*render_object + 0xc0) == (code *)&UNK_180277e10) {
        is_aligned = (render_object[8] - render_object[7] & 0xfffffffffffffff0U) == 0;
      }
      else {
        is_aligned = (**(code **)(*render_object + 0xc0))(render_object);
      }
      
      // 获取颜色数据指针
      color_data_ptr = 0;
      if (is_aligned == '\0') {
        color_data_ptr = *(longlong *)render_object[7];
      }
      
      // 设置主颜色（RGB转浮点数0.0-1.0）
      *(float *)(color_data_ptr + 0x238) = (float)(color_rgb >> 0x10) * 0.003921569;  // 红色
      *(float *)(color_data_ptr + 0x23c) = (float)(color_rgb >> 8 & 0xff) * 0.003921569;  // 绿色
      *(float *)(color_data_ptr + 0x240) = (float)((uint)object_color & 0xff) * 0.003921569;  // 蓝色
      *(float *)(color_data_ptr + 0x244) = (float)(object_index & 0xff) * 0.003921569;      // Alpha
      
      // 计算辅助透明度（用于边缘效果）
      object_index = ((0xff - object_index) * 2) / 3;
      if (0xfe < object_index) {
        object_index = 0xfe;
      }
      
      // 获取第二个颜色数据指针
      color_data_ptr = *(longlong *)(render_manager + render_index * 2 + 0x42);
      
      // 创建RGB颜色值（所有通道相同，用于单色效果）
      color_rgb = ((object_index | 0xffffff00) << 8 | object_index) << 8 | object_index;
      
      // 设置辅助颜色
      *(float *)(color_data_ptr + 0x238) = (float)(color_rgb >> 0x10 & 0xff) * 0.003921569;  // 红色
      *(float *)(color_data_ptr + 0x23c) = (float)(color_rgb >> 8 & 0xff) * 0.003921569;  // 绿色
      *(float *)(color_data_ptr + 0x240) = (float)(object_index & 0xff) * 0.003921569;      // 蓝色
      *(float *)(color_data_ptr + 0x244) = (float)(color_rgb >> 0x18) * 0.003921569;       // Alpha
      
      // 设置渲染状态和变换参数
      transform_178 = 0;              // 变换矩阵
      material_170 = 0xffffffff;      // 材质参数
      texture_16c = 0xff00;           // 纹理参数
      shader_168 = 0;                 // 着色器参数
      uniform_160 = 0xffffffffffffffff;  // Uniform变量
      buffer_158 = 0xffffffff;        // 缓冲区参数
      flag_154 = 0xff;                // 标志位
      state_150 = 0xffffffff;         // 渲染状态
      vertex_14c = 0;                 // 顶点着色器
      index_144 = 0x400;              // 索引缓冲区
      fragment_140 = 0;               // 片段着色器
      geometry_138 = 0;               // 几何着色器
      tessellation_130 = 0;           // 曲面细分着色器
      compute_128 = 0;                // 计算着色器
      attribute_124 = 0;              // 属性参数
      viewport_110 = 0;               // 视口参数
      
      // 调用渲染函数
      FUN_180077750(*(undefined8 *)(render_manager + render_index * 2 + 0x42), 
                  render_context, &projection_108, 0, &transform_178);
      
      // 调用对象的最终渲染函数
      (**(code **)(**(longlong **)(render_manager + render_index * 2 + 2) + 0x1c8))
                (*(longlong **)(render_manager + render_index * 2 + 2), render_context, 0, &projection_108, &transform_178);
    }
    
    mutex_result = mutex_result + 1;
  } while (mutex_result < 0x20);
  
  // 释放互斥锁
  mutex_result = _Mtx_unlock(render_manager + 0x20c);
  if (mutex_result != 0) {
    __Throw_C_error_std__YAXH_Z(mutex_result);
  }
  
  return;
}





/**
 * 初始化渲染参数和资源管理
 * 设置渲染系统的初始参数，清理旧的资源并初始化新的渲染对象
 * 
 * @param render_system 渲染系统对象指针
 * @param param2 保留参数
 * @param param3 保留参数
 * @param param4 保留参数
 */
void initialize_render_parameters(longlong render_system, undefined8 param2, undefined8 param3, undefined8 param4)
{
  longlong loop_counter;
  longlong *old_resource;
  longlong *resource_array;
  undefined8 cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  
  // 设置渲染系统的基地址
  *(undefined8 *)(render_system + 0xd28) = 
       *(undefined8 *)(&DAT_180c8ed30 + (longlong)*(int *)(render_system + 0xd30) * 8);
  
  // 清理旧的渲染资源
  old_resource = *(longlong **)(render_system + 0xd20);
  *(undefined8 *)(render_system + 0xd20) = 0;
  if (old_resource != (longlong *)0x0) {
    (**(code **)(*old_resource + 0x38))();
  }
  
  // 设置渲染状态标志
  *(undefined4 *)(render_system + 0xd3c) = 0xffffffff;  // 完整性标志
  *(undefined4 *)(render_system + 0x28) = 0xff101010;    // 渲染模式
  
  // 初始化资源数组
  resource_array = (longlong *)(render_system + 0x30);
  loop_counter = 0x50;
  
  // 循环初始化80个资源对象
  do {
    // 调用每个资源的初始化函数
    (**(code **)(*resource_array + 0x10))(resource_array, &DAT_18098bc73, param3, param4, cleanup_flag);
    resource_array = resource_array + 4;
    loop_counter = loop_counter + -1;
  } while (loop_counter != 0);
  
  // 重置渲染计数器和状态
  *(undefined4 *)(render_system + 0xd04) = 0;      // 渲染计数器
  *(undefined4 *)(render_system + 0xd08) = 0xbcf5c28f;  // 状态哈希
  *(undefined4 *)(render_system + 0xd00) = 0;      // 帧计数器
  
  // 再次清理渲染资源（确保完全清理）
  old_resource = *(longlong **)(render_system + 0xd20);
  *(undefined8 *)(render_system + 0xd20) = 0;
  if (old_resource != (longlong *)0x0) {
    (**(code **)(*old_resource + 0x38))();
  }
  
  // 重置最终状态标志
  *(undefined4 *)(render_system + 0xd40) = 0;
  
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 创建并初始化渲染管理器
 * 分配内存并初始化渲染管理器的所有组件，包括线程池和资源管理
 * 
 * @param render_manager 渲染管理器对象指针
 * @return 返回初始化后的渲染管理器指针
 */
longlong * create_render_manager(longlong *render_manager)
{
  longlong *old_object;
  undefined8 new_object;
  longlong *resource_object;
  
  // 重置管理器状态
  *render_manager = 0;
  
  // 初始化主线程池（4个线程槽位）
  FUN_1808fc838(render_manager + 1, 8, 4, &SUB_18005d5f0, FUN_180045af0);
  
  // 初始化资源池（80个资源槽位，每个80字节）
  FUN_1808fc838(render_manager + 6, 0x20, 0x50, FUN_180627850, FUN_180627b90);
  
  // 设置资源管理参数
  render_manager[0x1a4] = 0;           // 资源对象指针
  *(undefined4 *)(render_manager + 0x1a6) = 0;  // 资源计数器
  render_manager[0x1a5] = _DAT_180c8ed30;      // 资源基地址
  
  // 清理旧的资源对象
  resource_object = (longlong *)render_manager[0x1a4];
  render_manager[0x1a4] = 0;
  if (resource_object != (longlong *)0x0) {
    (**(code **)(*resource_object + 0x38))();
  }
  
  // 设置渲染状态
  render_manager[0x1a0] = 0;           // 状态标志
  *(undefined4 *)(render_manager + 0x1a1) = 0xbcf5c28f;  // 状态哈希值
  
  // 清理5个主要资源对象
  resource_object = (longlong *)render_manager[1];
  render_manager[1] = 0;
  if (resource_object != (longlong *)0x0) {
    (**(code **)(*resource_object + 0x38))();
  }
  
  resource_object = (longlong *)render_manager[2];
  render_manager[2] = 0;
  if (resource_object != (longlong *)0x0) {
    (**(code **)(*resource_object + 0x38))();
  }
  
  resource_object = (longlong *)render_manager[3];
  render_manager[3] = 0;
  if (resource_object != (longlong *)0x0) {
    (**(code **)(*resource_object + 0x38))();
  }
  
  resource_object = (longlong *)render_manager[4];
  render_manager[4] = 0;
  if (resource_object != (longlong *)0x0) {
    (**(code **)(*resource_object + 0x38))();
  }
  
  // 设置最终状态标志
  *(undefined4 *)(render_manager + 0x1a7) = 0;      // 完成标志
  *(undefined4 *)(render_manager + 5) = 0xff101010;   // 渲染模式
  
  // 创建新的渲染对象（768字节，16字节对齐）
  new_object = FUN_18062b1e0(_DAT_180c8ed18, 0x300, 0x10, 3);
  resource_object = (longlong *)FUN_180075030(new_object, 1);
  
  // 初始化新创建的渲染对象
  if (resource_object != (longlong *)0x0) {
    (**(code **)(*resource_object + 0x28))(resource_object);
  }
  
  // 替换旧的渲染对象
  old_object = (longlong *)*render_manager;
  *render_manager = (longlong)resource_object;
  if (old_object != (longlong *)0x0) {
    (**(code **)(*old_object + 0x38))();
  }
  
  // 调用渲染对象的设置函数
  (**(code **)(*(longlong *)(*render_manager + 0x10) + 0x10))
            ((longlong *)(*render_manager + 0x10), &UNK_180a01378);
  
  return render_manager;
}



/**
 * 初始化完整渲染系统
 * 创建并初始化完整的渲染系统，包括渲染管线、缓冲区、同步机制等
 * 
 * @param render_system 渲染系统对象指针
 * @param param2 保留参数
 * @param param3 保留参数
 * @param param4 保留参数
 * @return 返回初始化后的渲染系统指针
 */
undefined8 * initialize_render_system(undefined8 *render_system, undefined8 param2, undefined8 param3, undefined8 param4)
{
  longlong *old_object;
  undefined8 init_flag;
  
  init_flag = 0xfffffffffffffffe;
  
  // 重置主要组件指针
  render_system[2] = 0;  // 渲染管线
  render_system[3] = 0;  // 着色器管理器
  render_system[4] = 0;  // 纹理管理器
  *(undefined4 *)(render_system + 5) = 3;  // 渲染质量级别
  
  // 初始化渲染管线组件
  FUN_180090130(render_system + 6);
  
  // 初始化渲染管理器
  FUN_180090c80(render_system + 0x116);
  
  // 设置渲染目标
  render_system[0x2c0] = 0;  // 渲染目标指针
  func_0x0001800e7950((longlong)render_system + 0x1614);  // 初始化渲染目标
  
  // 设置深度缓冲区参数
  render_system[0x2d3] = 0;  // 深度测试模式
  FUN_180094c20(render_system + 0x2d4);  // 初始化深度缓冲区
  
  // 设置帧缓冲区
  render_system[0x2fc] = 0;  // 帧缓冲区指针
  *(undefined8 *)((longlong)render_system + 0x17ec) = 0;  // 帧缓冲区大小
  render_system[0x300] = 0;  // 帧缓冲区对象
  
  // 初始化渲染同步互斥锁
  _Mtx_init_in_situ(render_system + 0x301, 2, param3, param4, init_flag);
  
  // 设置渲染状态标志
  render_system[0x30b] = 0;  // 垂直同步标志
  render_system[0x30d] = 0;  // 多重采样标志
  render_system[0x30e] = 0;  // 抗锯齿标志
  render_system[0x30f] = 0;  // 后处理效果标志
  *(undefined4 *)(render_system + 0x310) = 3;  // 渲染精度
  
  // 设置视口参数
  *(undefined2 *)((longlong)render_system + 0x1609) = 0x101;  // 视口宽度
  *(undefined4 *)((longlong)render_system + 0x160c) = 1;       // 视口高度
  
  // 清理旧的渲染目标
  old_object = (longlong *)render_system[0x2c0];
  render_system[0x2c0] = 0;
  if (old_object != (longlong *)0x0) {
    (**(code **)(*old_object + 0x38))();
  }
  
  // 设置初始化完成标志
  *(undefined1 *)(render_system + 0x2fd) = 1;
  
  // 重置线程管理器状态
  FUN_180090520(render_system + 6);
  
  // 清理主渲染对象
  *render_system = 0;
  old_object = (longlong *)render_system[0x300];
  render_system[0x300] = 0;
  if (old_object != (longlong *)0x0) {
    (**(code **)(*old_object + 0x38))();
  }
  
  // 清理垂直同步对象
  old_object = (longlong *)render_system[0x30b];
  render_system[0x30b] = 0;
  if (old_object != (longlong *)0x0) {
    (**(code **)(*old_object + 0x38))();
  }
  
  // 设置最终渲染参数
  *(undefined2 *)(render_system + 0x311) = 0x101;  // 刷新率
  render_system[0x2fc] = 0x3f0000003f000000;     // 渲染分辨率
  *(undefined8 *)((longlong)render_system + 0x17ec) = 0x4434000044a00000;  // 显示模式
  
  // 清理状态标志
  *(undefined1 *)(render_system + 0x2bf) = 0;  // 错误状态
  render_system[0x2c4] = 0;                   // 警告计数
  *(undefined2 *)(render_system + 0x2c5) = 0;  // 性能计数器
  *(undefined1 *)((longlong)render_system + 0x162a) = 0;  // 调试标志
  *(undefined1 *)(render_system + 0x2c2) = 0;             // 优化标志
  *(undefined1 *)(render_system + 1) = 0;                 // 保留字段
  render_system[0x30c] = 0;                               // 最后错误代码
  
  return render_system;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180091020(void)
void FUN_180091020(void)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined1 auStack_d8 [32];
  undefined1 uStack_b8;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  longlong *plStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [72];
  ulonglong uStack_28;
  
  lVar6 = _DAT_180c86950;
  uStack_90 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  *(undefined1 *)(_DAT_180c86950 + 0x1889) = *(undefined1 *)(_DAT_180c86950 + 0x1888);
  cVar1 = *(char *)(*(longlong *)(_DAT_180c86870 + 8) + 0xbc +
                   (ulonglong)(*(uint *)(*(longlong *)(_DAT_180c86870 + 8) + 0x13c) & 1) * 0x48);
  *(char *)(lVar6 + 0x1888) = cVar1;
  cVar2 = *(char *)(lVar6 + 0x1889);
  if (*(int *)(_DAT_180c86920 + 0x2370) == 0) {
    if (cVar1 == cVar2) goto LAB_1800911c4;
    if (cVar1 != '\0') goto LAB_180091164;
    puStack_88 = &UNK_1809fcc58;
    puStack_80 = auStack_70;
    auStack_70[0] = 0;
    uStack_78 = 0x17;
    uVar11 = strcpy_s(auStack_70,0x40,&UNK_180a01360);
    uStack_b8 = 1;
    uVar11 = FUN_180157390(uVar11,&plStack_98,&puStack_88,0);
    FUN_180060b80(lVar6 + 0x1698,uVar11);
    if (plStack_98 != (longlong *)0x0) {
      (**(code **)(*plStack_98 + 0x38))();
    }
    puStack_88 = &UNK_18098bcb0;
    (**(code **)(**(longlong **)(lVar6 + 0x1698) + 0x60))();
LAB_180091192:
    (**(code **)(*_DAT_180c86878 + 0x10))();
  }
  else {
LAB_180091164:
    if (*(longlong **)(lVar6 + 0x1698) != (longlong *)0x0) {
      cVar7 = (**(code **)(**(longlong **)(lVar6 + 0x1698) + 0xd8))();
      if (cVar7 != '\0') {
        (**(code **)(**(longlong **)(lVar6 + 0x1698) + 0x68))();
        goto LAB_180091192;
      }
    }
  }
  if (((cVar1 != cVar2) && (_DAT_180c8a9c0 != 0)) && (*(longlong *)(_DAT_180c8a9c0 + 0x10) != 0)) {
    (**(code **)(_DAT_180c8a9c0 + 0x80))(*(undefined1 *)(lVar6 + 0x1888));
  }
LAB_1800911c4:
  FUN_180093af0(lVar6);
  FUN_1800905f0(lVar6 + 0x30);
  if ((DAT_180c82860 == '\0') && (*(int *)(_DAT_180c86908 + 0x7e0) == 0)) {
    if ((**(char **)(_DAT_180c868d0 + 0x2010) == '\0') ||
       (*(char *)(*(longlong *)(_DAT_180c86870 + 8) + 0xbc +
                 (ulonglong)(*(uint *)(*(longlong *)(_DAT_180c86870 + 8) + 0x13c) & 1) * 0x48) ==
        '\0')) {
      FUN_180171fb0(*(undefined8 *)(_DAT_180c86870 + 8),0);
    }
    else {
      lVar3 = *(longlong *)(_DAT_180c86870 + 8);
      uVar8 = (ulonglong)(*(uint *)(lVar3 + 0x13c) & 1);
      lVar4 = *(longlong *)(_DAT_180c86870 + 8);
      uVar9 = (ulonglong)(*(uint *)(lVar4 + 0x13c) & 1);
      lVar5 = *(longlong *)(_DAT_180c86870 + 8);
      uVar10 = (ulonglong)(*(uint *)(lVar5 + 0x13c) & 1);
      iStack_a4 = *(int *)(lVar4 + 0xf0 + uVar9 * 0x48) + *(int *)(lVar3 + 0xb0 + uVar8 * 0x48);
      iStack_a8 = *(int *)(lVar4 + 0xec + uVar9 * 0x48) + *(int *)(lVar3 + 0xac + uVar8 * 0x48);
      iStack_9c = *(int *)(lVar5 + 0xf0 + uVar10 * 0x48) + *(int *)(lVar3 + 0xb8 + uVar8 * 0x48);
      iStack_a0 = *(int *)(lVar5 + 0xec + uVar10 * 0x48) + *(int *)(lVar3 + 0xb4 + uVar8 * 0x48);
      FUN_180171fb0(*(undefined8 *)(_DAT_180c86870 + 8),&iStack_a8);
      lVar3 = *(longlong *)(_DAT_180c868d0 + 0x2010);
      FUN_180093780(lVar3,*(undefined4 *)(lVar3 + 4),*(undefined4 *)(lVar3 + 8));
      lVar3 = _DAT_180c868d0;
      *(float *)(lVar6 + 0x17e0) =
           (float)*(int *)(*(longlong *)(_DAT_180c868d0 + 0x2010) + 4) / *(float *)(lVar6 + 0x17ec);
      *(float *)(lVar6 + 0x17e4) =
           (float)*(int *)(*(longlong *)(lVar3 + 0x2010) + 8) / *(float *)(lVar6 + 0x17f0);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800913a0(void)
void FUN_1800913a0(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = *(char **)(_DAT_180c868d0 + 0x2010);
  iVar2 = (int)(*(float *)(_DAT_180c86950 + 0x17f0) * *(float *)(_DAT_180c86950 + 0x17e4));
  iVar3 = (int)(*(float *)(_DAT_180c86950 + 0x17ec) * *(float *)(_DAT_180c86950 + 0x17e0));
  if (*pcVar1 == '\0') {
    *(int *)(pcVar1 + 4) = iVar3;
    *(int *)(pcVar1 + 8) = iVar2;
    *pcVar1 = '\x01';
    return;
  }
  if ((*(int *)(pcVar1 + 4) == iVar3) && (*(int *)(pcVar1 + 8) == iVar2)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_180062300(_DAT_180c86928,&UNK_180a16bd0,*(int *)(pcVar1 + 4),*(undefined4 *)(pcVar1 + 8),iVar3
                ,iVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



