#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

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
void heap_insert_and_balance(int64_t heap_base, int64_t heap_size, int64_t capacity, 
                            int64_t index, int64_t *new_element)
{
  int left_child_key;
  byte *current_byte;
  int right_child_key;
  int64_t left_child_data;
  bool should_swap;
  int64_t swap_index;
  byte *string_ptr;
  uint compare_char;
  int64_t child_index;
  int64_t parent_index;
  int64_t *parent_node;
  
  // 从当前节点开始向下调整堆
  parent_index = index * 2;
  while (child_index = parent_index + 2, child_index < capacity) {
    swap_index = child_index * 0x10;
    right_child_key = *(int *)(swap_index + 8 + heap_base);
    left_child_key = *(int *)(swap_index + -8 + heap_base);
    
    // 比较左右子节点的键值
    if (right_child_key == left_child_key) {
      left_child_data = *(int64_t *)(swap_index + -0x10 + heap_base);
      if (*(int *)(left_child_data + 0x78) == 0) {
        should_swap = false;
      }
      else if (*(int *)(*(int64_t *)(swap_index + heap_base) + 0x78) == 0) {
        should_swap = true;
      }
      else {
        // 比较字符串内容
        string_ptr = *(byte **)(left_child_data + 0x70);
        swap_index = *(int64_t *)(*(int64_t *)(swap_index + heap_base) + 0x70) - (int64_t)string_ptr;
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
    *(int64_t *)(heap_base + index * 0x10) = *(int64_t *)(heap_base + swap_index * 0x10);
    *(int *)(heap_base + 8 + index * 0x10) = *(int *)(heap_base + 8 + swap_index * 0x10);
    index = swap_index;
    parent_index = swap_index * 2;
  }
  
  // 处理最后一个可能的子节点
  if (child_index == capacity) {
    *(int64_t *)(heap_base + index * 0x10) = *(int64_t *)(heap_base + -0x10 + child_index * 0x10);
    *(int *)(heap_base + 8 + index * 0x10) = *(int *)(heap_base + -8 + child_index * 0x10);
    index = parent_index + 1;
  }
  
  // 向上调整堆，确保父节点小于子节点
  while (heap_size < index) {
    parent_index = index + -1 >> 1;
    parent_node = (int64_t *)(parent_index * 0x10 + heap_base);
    
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
        child_index = *(int64_t *)(*parent_node + 0x70) - (int64_t)string_ptr;
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
    *(int64_t *)(heap_base + index * 0x10) = *parent_node;
    *(int *)(heap_base + 8 + index * 0x10) = (int)parent_node[1];
    index = parent_index;
  }
  
  // 将新元素放入最终位置
  *(int64_t *)(heap_base + index * 0x10) = *new_element;
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
uint64_t *
initialize_memory_block_with_vtable(uint64_t *memory_block, uint64_t flags, uint64_t param3, uint64_t param4)
{
  // 设置虚函数表指针
  *memory_block = &system_state_ptr;
  
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
void safe_copy_string_to_buffer(int64_t string_buffer, int64_t source_string)
{
  int64_t string_length;
  
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
  SystemDataInitializer(&unknown_var_616_ptr, 0x200, source_string);
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
void safe_copy_string_with_length(int64_t string_buffer, uint64_t source_data, int data_length)
{
  // 检查缓冲区大小是否足够
  if (data_length + 1 < 0x200) {
    // 安全复制数据到缓冲区
    memcpy(*(char **)(string_buffer + 8), source_data, (int64_t)data_length);
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
void reset_string_object(int8_t *string_obj)
{
  int64_t object_base;
  
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
void string_replace_and_memory_operation(int64_t string_buffer, int64_t search_string, int64_t replace_string)
{
  int64_t search_result;
  int64_t search_len;
  int64_t replace_len;
  int8_t stack_buffer_298 [32];
  uint64_t stack_value_278;
  void *stack_ptr_268;
  int8_t *stack_buffer_260;
  int32_t stack_value_258;
  int8_t stack_buffer_250 [520];
  uint64_t security_cookie;
  
  // 初始化栈变量和安全cookie
  stack_value_278 = 0xfffffffffffffffe;
  security_cookie = GET_SECURITY_COOKIE() ^ (uint64_t)stack_buffer_298;
  stack_ptr_268 = &unknown_var_9208_ptr;
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
    memcpy(stack_buffer_260, *(int64_t *)(string_buffer + 8), search_result - *(int64_t *)(string_buffer + 8));
  }
  
  // 设置虚函数表指针
  stack_ptr_268 = &system_state_ptr;
  
  // 执行内存清理操作
  SystemSecurityChecker(security_cookie ^ (uint64_t)stack_buffer_298);
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
uint64_t * create_memory_manager_object(uint64_t memory_pool, int32_t config_flags)
{
  uint64_t *manager_ptr;
  
  // 分配内存管理器对象
  manager_ptr = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr, 0xb8, 8, 0x1a, 0xfffffffffffffffe);
  
  // 初始化管理器配置
  FUN_1802565b0(manager_ptr, memory_pool, config_flags);
  
  // 设置虚函数表
  *manager_ptr = &unknown_var_9288_ptr;
  
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
uint64_t * create_advanced_memory_manager_object(uint64_t memory_pool, int32_t config_flags)
{
  uint64_t *manager_ptr;
  
  // 分配高级内存管理器对象
  manager_ptr = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr, 0xb8, 8, 0x1a, 0xfffffffffffffffe);
  
  // 初始化管理器配置
  FUN_1802565b0(manager_ptr, memory_pool, config_flags);
  
  // 设置高级虚函数表
  *manager_ptr = &unknown_var_9496_ptr;
  
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
uint64_t * initialize_thread_manager(uint64_t *thread_manager)
{
  int64_t *old_object;
  int mutex_result;
  uint64_t new_object;
  int64_t *thread_object;
  int64_t object_ptr;
  int64_t loop_counter;
  int64_t *thread_pool;
  
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
    new_object = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr, 0x3d0, 8, 3);
    thread_object = (int64_t *)FUN_180275090(new_object);
    if (thread_object != (int64_t *)0x0) {
      // 调用线程对象的初始化函数
      (**(code **)(*thread_object + 0x28))(thread_object);
    }
    
    // 替换旧的线程对象
    old_object = (int64_t *)thread_pool[-0x20];
    thread_pool[-0x20] = (int64_t)thread_object;
    if (old_object != (int64_t *)0x0) {
      // 清理旧的线程对象
      (**(code **)(*old_object + 0x38))();
    }
    
    // 创建辅助线程对象
    new_object = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr, 0x300, 0x10, 3);
    thread_object = (int64_t *)FUN_180075030(new_object, 1);
    if (thread_object != (int64_t *)0x0) {
      // 调用辅助线程对象的初始化函数
      (**(code **)(*thread_object + 0x28))(thread_object);
    }
    
    // 替换旧的辅助线程对象
    old_object = (int64_t *)*thread_pool;
    *thread_pool = (int64_t)thread_object;
    if (old_object != (int64_t *)0x0) {
      // 清理旧的辅助线程对象
      (**(code **)(*old_object + 0x38))();
    }
    
    // 调用线程对象的设置函数
    (**(code **)(*(int64_t *)(*thread_pool + 0x10) + 0x10))((int64_t *)(*thread_pool + 0x10), &unknown_var_1584_ptr);
    
    object_ptr = *thread_pool;
    
    // 设置线程状态标志1
    if (*(char *)(object_ptr + 0xfa) != '\x01') {
      *(int8_t *)(object_ptr + 0xfa) = 1;
      FUN_180079520(object_ptr);
      object_ptr = *thread_pool;
    }
    
    // 设置线程状态标志2
    if (*(char *)(object_ptr + 0xfb) != '\x01') {
      *(int8_t *)(object_ptr + 0xfb) = 1;
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
void destroy_thread_manager(int64_t thread_manager)
{
  uint64_t cleanup_flag;
  
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
void cleanup_resource_manager(int64_t *resource_manager)
{
  int64_t *old_object;
  uint64_t cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  
  // 计算并设置资源管理器的基地址
  resource_manager[0x1a5] = *(int64_t *)(&system_error_code + (int64_t)(int)resource_manager[0x1a6] * 8) + -100000;
  
  // 调用清理函数
  FUN_180090b80(resource_manager);
  
  // 重置状态标志
  *(int *)(resource_manager + 0x1a7) = 0;
  
  // 清理主要资源对象
  old_object = (int64_t *)resource_manager[0x1a4];
  resource_manager[0x1a4] = 0;
  if (old_object != (int64_t *)0x0) {
    (**(code **)(*old_object + 0x38))();
  }
  
  // 二次检查确保清理完成
  if ((int64_t *)resource_manager[0x1a4] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)resource_manager[0x1a4] + 0x38))();
  }
  
  // 清理资源池
  FUN_1808fc8a8(resource_manager + 6, 0x20, 0x50, FUN_180627b90, cleanup_flag);
  
  // 清理对象引用
  FUN_1808fc8a8(resource_manager + 1, 8, 4, FUN_180045af0);
  
  // 清理主对象引用
  if ((int64_t *)*resource_manager != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*resource_manager + 0x38))();
  }
  
  return;
}





/**
 * 清理简单资源管理器
 * 释放简单资源管理器占用的基础资源
 * 
 * @param simple_manager 简单资源管理器指针
 */
void cleanup_simple_resource_manager(int64_t simple_manager)
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
void reset_thread_manager_state(uint64_t *thread_manager)
{
  int mutex_result;
  int64_t loop_counter;
  uint64_t *counter_ptr;
  uint64_t *thread_pool_ptr;
  
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
    (**(code **)(*(int64_t *)thread_pool_ptr[-0x20] + 0xd8))();
    
    // 清理线程对象
    FUN_180076760(*thread_pool_ptr);
    
    counter_ptr = (uint64_t *)((int64_t)counter_ptr + 4);
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
void process_render_objects(float *render_manager, uint64_t render_context, int32_t *color_param)
{
  float object_color;
  int64_t *render_object;
  int mutex_result;
  uint object_index;
  int64_t color_data_ptr;
  int64_t render_index;
  uint color_rgb;
  char is_aligned;
  float distance_factor;
  float alpha_value;
  int32_t render_params_188;
  int32_t render_params_184;
  int32_t render_params_180;
  float alpha_stack;
  uint64_t transform_178;
  int32_t material_170;
  int16_t texture_16c;
  uint64_t shader_168;
  uint64_t uniform_160;
  int32_t buffer_158;
  int8_t flag_154;
  int32_t state_150;
  uint64_t vertex_14c;
  int16_t index_144;
  uint64_t fragment_140;
  int32_t geometry_138;
  uint64_t tessellation_130;
  int32_t compute_128;
  int8_t attribute_124;
  uint64_t viewport_110;
  uint64_t projection_108;
  uint64_t view_100;
  uint64_t model_f8;
  uint64_t normal_f0;
  uint64_t tangent_e8;
  uint64_t bitangent_e0;
  uint64_t light_d8;
  int32_t time_d0;
  int32_t delta_cc;
  uint64_t frame_c8;
  
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
    render_index = (int64_t)(int)object_index;
    
    // 只处理距离小于10.0的对象
    if (render_manager[render_index + 0x82] < 10.0) {
      // 更新透明度值
      alpha_value = alpha_value + render_manager[render_index + 0xa2];
      light_d8 = CONCAT44(alpha_value, (int32_t)light_d8);
      
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
      (**(code **)(**(int64_t **)(render_manager + render_index * 2 + 2) + 0x108))
                (*(int64_t **)(render_manager + render_index * 2 + 2), &render_params_188);
      
      // 获取渲染对象指针
      render_object = *(int64_t **)(render_manager + render_index * 2 + 2);
      
      // 检查对象是否对齐
      if (*(code **)(*render_object + 0xc0) == (code *)&unknown_var_9120_ptr) {
        is_aligned = (render_object[8] - render_object[7] & 0xfffffffffffffff0U) == 0;
      }
      else {
        is_aligned = (**(code **)(*render_object + 0xc0))(render_object);
      }
      
      // 获取颜色数据指针
      color_data_ptr = 0;
      if (is_aligned == '\0') {
        color_data_ptr = *(int64_t *)render_object[7];
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
      color_data_ptr = *(int64_t *)(render_manager + render_index * 2 + 0x42);
      
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
      FUN_180077750(*(uint64_t *)(render_manager + render_index * 2 + 0x42), 
                  render_context, &projection_108, 0, &transform_178);
      
      // 调用对象的最终渲染函数
      (**(code **)(**(int64_t **)(render_manager + render_index * 2 + 2) + 0x1c8))
                (*(int64_t **)(render_manager + render_index * 2 + 2), render_context, 0, &projection_108, &transform_178);
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
void initialize_render_parameters(int64_t render_system, uint64_t param2, uint64_t param3, uint64_t param4)
{
  int64_t loop_counter;
  int64_t *old_resource;
  int64_t *resource_array;
  uint64_t cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  
  // 设置渲染系统的基地址
  *(uint64_t *)(render_system + 0xd28) = 
       *(uint64_t *)(&system_error_code + (int64_t)*(int *)(render_system + 0xd30) * 8);
  
  // 清理旧的渲染资源
  old_resource = *(int64_t **)(render_system + 0xd20);
  *(uint64_t *)(render_system + 0xd20) = 0;
  if (old_resource != (int64_t *)0x0) {
    (**(code **)(*old_resource + 0x38))();
  }
  
  // 设置渲染状态标志
  *(int32_t *)(render_system + 0xd3c) = 0xffffffff;  // 完整性标志
  *(int32_t *)(render_system + 0x28) = 0xff101010;    // 渲染模式
  
  // 初始化资源数组
  resource_array = (int64_t *)(render_system + 0x30);
  loop_counter = 0x50;
  
  // 循环初始化80个资源对象
  do {
    // 调用每个资源的初始化函数
    (**(code **)(*resource_array + 0x10))(resource_array, &system_buffer_ptr, param3, param4, cleanup_flag);
    resource_array = resource_array + 4;
    loop_counter = loop_counter + -1;
  } while (loop_counter != 0);
  
  // 重置渲染计数器和状态
  *(int32_t *)(render_system + 0xd04) = 0;      // 渲染计数器
  *(int32_t *)(render_system + 0xd08) = 0xbcf5c28f;  // 状态哈希
  *(int32_t *)(render_system + 0xd00) = 0;      // 帧计数器
  
  // 再次清理渲染资源（确保完全清理）
  old_resource = *(int64_t **)(render_system + 0xd20);
  *(uint64_t *)(render_system + 0xd20) = 0;
  if (old_resource != (int64_t *)0x0) {
    (**(code **)(*old_resource + 0x38))();
  }
  
  // 重置最终状态标志
  *(int32_t *)(render_system + 0xd40) = 0;
  
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
int64_t * create_render_manager(int64_t *render_manager)
{
  int64_t *old_object;
  uint64_t new_object;
  int64_t *resource_object;
  
  // 重置管理器状态
  *render_manager = 0;
  
  // 初始化主线程池（4个线程槽位）
  FUN_1808fc838(render_manager + 1, 8, 4, &SUB_18005d5f0, FUN_180045af0);
  
  // 初始化资源池（80个资源槽位，每个80字节）
  FUN_1808fc838(render_manager + 6, 0x20, 0x50, FUN_180627850, FUN_180627b90);
  
  // 设置资源管理参数
  render_manager[0x1a4] = 0;           // 资源对象指针
  *(int32_t *)(render_manager + 0x1a6) = 0;  // 资源计数器
  render_manager[0x1a5] = system_error_code;      // 资源基地址
  
  // 清理旧的资源对象
  resource_object = (int64_t *)render_manager[0x1a4];
  render_manager[0x1a4] = 0;
  if (resource_object != (int64_t *)0x0) {
    (**(code **)(*resource_object + 0x38))();
  }
  
  // 设置渲染状态
  render_manager[0x1a0] = 0;           // 状态标志
  *(int32_t *)(render_manager + 0x1a1) = 0xbcf5c28f;  // 状态哈希值
  
  // 清理5个主要资源对象
  resource_object = (int64_t *)render_manager[1];
  render_manager[1] = 0;
  if (resource_object != (int64_t *)0x0) {
    (**(code **)(*resource_object + 0x38))();
  }
  
  resource_object = (int64_t *)render_manager[2];
  render_manager[2] = 0;
  if (resource_object != (int64_t *)0x0) {
    (**(code **)(*resource_object + 0x38))();
  }
  
  resource_object = (int64_t *)render_manager[3];
  render_manager[3] = 0;
  if (resource_object != (int64_t *)0x0) {
    (**(code **)(*resource_object + 0x38))();
  }
  
  resource_object = (int64_t *)render_manager[4];
  render_manager[4] = 0;
  if (resource_object != (int64_t *)0x0) {
    (**(code **)(*resource_object + 0x38))();
  }
  
  // 设置最终状态标志
  *(int32_t *)(render_manager + 0x1a7) = 0;      // 完成标志
  *(int32_t *)(render_manager + 5) = 0xff101010;   // 渲染模式
  
  // 创建新的渲染对象（768字节，16字节对齐）
  new_object = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr, 0x300, 0x10, 3);
  resource_object = (int64_t *)FUN_180075030(new_object, 1);
  
  // 初始化新创建的渲染对象
  if (resource_object != (int64_t *)0x0) {
    (**(code **)(*resource_object + 0x28))(resource_object);
  }
  
  // 替换旧的渲染对象
  old_object = (int64_t *)*render_manager;
  *render_manager = (int64_t)resource_object;
  if (old_object != (int64_t *)0x0) {
    (**(code **)(*old_object + 0x38))();
  }
  
  // 调用渲染对象的设置函数
  (**(code **)(*(int64_t *)(*render_manager + 0x10) + 0x10))
            ((int64_t *)(*render_manager + 0x10), &unknown_var_1688_ptr);
  
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
uint64_t * initialize_render_system(uint64_t *render_system, uint64_t param2, uint64_t param3, uint64_t param4)
{
  int64_t *old_object;
  uint64_t init_flag;
  
  init_flag = 0xfffffffffffffffe;
  
  // 重置主要组件指针
  render_system[2] = 0;  // 渲染管线
  render_system[3] = 0;  // 着色器管理器
  render_system[4] = 0;  // 纹理管理器
  *(int32_t *)(render_system + 5) = 3;  // 渲染质量级别
  
  // 初始化渲染管线组件
  FUN_180090130(render_system + 6);
  
  // 初始化渲染管理器
  FUN_180090c80(render_system + 0x116);
  
  // 设置渲染目标
  render_system[0x2c0] = 0;  // 渲染目标指针
  func_0x0001800e7950((int64_t)render_system + 0x1614);  // 初始化渲染目标
  
  // 设置深度缓冲区参数
  render_system[0x2d3] = 0;  // 深度测试模式
  FUN_180094c20(render_system + 0x2d4);  // 初始化深度缓冲区
  
  // 设置帧缓冲区
  render_system[0x2fc] = 0;  // 帧缓冲区指针
  *(uint64_t *)((int64_t)render_system + 0x17ec) = 0;  // 帧缓冲区大小
  render_system[0x300] = 0;  // 帧缓冲区对象
  
  // 初始化渲染同步互斥锁
  _Mtx_init_in_situ(render_system + 0x301, 2, param3, param4, init_flag);
  
  // 设置渲染状态标志
  render_system[0x30b] = 0;  // 垂直同步标志
  render_system[0x30d] = 0;  // 多重采样标志
  render_system[0x30e] = 0;  // 抗锯齿标志
  render_system[0x30f] = 0;  // 后处理效果标志
  *(int32_t *)(render_system + 0x310) = 3;  // 渲染精度
  
  // 设置视口参数
  *(int16_t *)((int64_t)render_system + 0x1609) = 0x101;  // 视口宽度
  *(int32_t *)((int64_t)render_system + 0x160c) = 1;       // 视口高度
  
  // 清理旧的渲染目标
  old_object = (int64_t *)render_system[0x2c0];
  render_system[0x2c0] = 0;
  if (old_object != (int64_t *)0x0) {
    (**(code **)(*old_object + 0x38))();
  }
  
  // 设置初始化完成标志
  *(int8_t *)(render_system + 0x2fd) = 1;
  
  // 重置线程管理器状态
  FUN_180090520(render_system + 6);
  
  // 清理主渲染对象
  *render_system = 0;
  old_object = (int64_t *)render_system[0x300];
  render_system[0x300] = 0;
  if (old_object != (int64_t *)0x0) {
    (**(code **)(*old_object + 0x38))();
  }
  
  // 清理垂直同步对象
  old_object = (int64_t *)render_system[0x30b];
  render_system[0x30b] = 0;
  if (old_object != (int64_t *)0x0) {
    (**(code **)(*old_object + 0x38))();
  }
  
  // 设置最终渲染参数
  *(int16_t *)(render_system + 0x311) = 0x101;  // 刷新率
  render_system[0x2fc] = 0x3f0000003f000000;     // 渲染分辨率
  *(uint64_t *)((int64_t)render_system + 0x17ec) = 0x4434000044a00000;  // 显示模式
  
  // 清理状态标志
  *(int8_t *)(render_system + 0x2bf) = 0;  // 错误状态
  render_system[0x2c4] = 0;                   // 警告计数
  *(int16_t *)(render_system + 0x2c5) = 0;  // 性能计数器
  *(int8_t *)((int64_t)render_system + 0x162a) = 0;  // 调试标志
  *(int8_t *)(render_system + 0x2c2) = 0;             // 优化标志
  *(int8_t *)(render_system + 1) = 0;                 // 保留字段
  render_system[0x30c] = 0;                               // 最后错误代码
  
  return render_system;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 主渲染循环和帧同步处理
 * 处理游戏的主渲染循环，包括帧同步、状态更新和渲染调度
 * 
 * 注意：此函数不返回，是游戏的主循环入口点
 */
void main_render_loop(void)
{
  char current_state;
  char previous_state;
  int64_t context_ptr1;
  int64_t context_ptr2;
  int64_t context_ptr3;
  int64_t engine_context;
  char is_active;
  uint64_t context_index1;
  uint64_t context_index2;
  uint64_t context_index3;
  uint64_t render_result;
  int8_t stack_buffer_d8 [32];
  int8_t active_flag;
  int render_height;
  int render_width;
  int viewport_x;
  int viewport_y;
  int64_t *resource_ptr;
  uint64_t cleanup_flag;
  void *resource_manager;
  int8_t *string_buffer;
  int32_t buffer_size;
  int8_t stack_buffer_70 [72];
  uint64_t security_cookie;
  
  // 获取引擎上下文
  engine_context = system_operation_state;
  cleanup_flag = 0xfffffffffffffffe;
  security_cookie = GET_SECURITY_COOKIE() ^ (uint64_t)stack_buffer_d8;
  
  // 保存当前渲染状态
  *(int8_t *)(system_operation_state + 0x1889) = *(int8_t *)(system_operation_state + 0x1888);
  
  // 获取新的渲染状态
  current_state = *(char *)(*(int64_t *)(system_main_module_state + 8) + 0xbc +
                          (uint64_t)(*(uint *)(*(int64_t *)(system_main_module_state + 8) + 0x13c) & 1) * 0x48);
  
  // 更新状态寄存器
  *(char *)(engine_context + 0x1888) = current_state;
  previous_state = *(char *)(engine_context + 0x1889);
  
  // 检查渲染模式
  if (*(int *)(SYSTEM_STATE_MANAGER + 0x2370) == 0) {
    // 如果状态未改变，跳过处理
    if (current_state == previous_state) goto RENDER_CONTINUE;
    
    // 如果状态为空，初始化渲染系统
    if (current_state != '\0') goto ACTIVE_RENDERING;
    
    // 初始化渲染资源
    resource_manager = &unknown_var_3480_ptr;
    string_buffer = stack_buffer_70;
    stack_buffer_70[0] = 0;
    buffer_size = 0x17;
    render_result = strcpy_s(stack_buffer_70, 0x40, &unknown_var_1664_ptr);
    active_flag = 1;
    render_result = FUN_180157390(render_result, &resource_ptr, &resource_manager, 0);
    FUN_180060b80(engine_context + 0x1698, render_result);
    
    // 清理资源指针
    if (resource_ptr != (int64_t *)0x0) {
      (**(code **)(*resource_ptr + 0x38))();
    }
    
    // 设置资源管理器
    resource_manager = &system_state_ptr;
    (**(code **)(**(int64_t **)(engine_context + 0x1698) + 0x60))();
    
RENDER_CONTINUE:
    // 继续渲染循环
    (**(code **)(*core_system_data_string + 0x10))();
  }
  else {
ACTIVE_RENDERING:
    // 活跃渲染模式
    if (*(int64_t **)(engine_context + 0x1698) != (int64_t *)0x0) {
      is_active = (**(code **)(**(int64_t **)(engine_context + 0x1698) + 0xd8))();
      if (is_active != '\0') {
        // 执行活跃渲染任务
        (**(code **)(**(int64_t **)(engine_context + 0x1698) + 0x68))();
        goto RENDER_CONTINUE;
      }
    }
  }
  
  // 状态变化处理
  if (((current_state != previous_state) && (core_system_data_string != 0)) && (*(int64_t *)(core_system_data_string + 0x10) != 0)) {
    (**(code **)(core_system_data_string + 0x80))(*(int8_t *)(engine_context + 0x1888));
  }
  
RENDER_CONTINUE:
  // 执行渲染任务
  FUN_180093af0(engine_context);
  FUN_1800905f0(engine_context + 0x30);
  
  // 检查是否需要更新显示设置
  if ((system_debug_flag == '\0') && (*(int *)(system_module_state + 0x7e0) == 0)) {
    // 如果显示配置为空或无效，使用默认设置
    if ((**(char **)(core_system_data_string + 0x2010) == '\0') ||
       (*(char *)(*(int64_t *)(system_main_module_state + 8) + 0xbc +
                 (uint64_t)(*(uint *)(*(int64_t *)(system_main_module_state + 8) + 0x13c) & 1) * 0x48) ==
        '\0')) {
      FUN_180171fb0(*(uint64_t *)(system_main_module_state + 8), 0);
    }
    else {
      // 计算显示参数
      context_ptr1 = *(int64_t *)(system_main_module_state + 8);
      context_index1 = (uint64_t)(*(uint *)(context_ptr1 + 0x13c) & 1);
      context_ptr2 = *(int64_t *)(system_main_module_state + 8);
      context_index2 = (uint64_t)(*(uint *)(context_ptr2 + 0x13c) & 1);
      context_ptr3 = *(int64_t *)(system_main_module_state + 8);
      context_index3 = (uint64_t)(*(uint *)(context_ptr3 + 0x13c) & 1);
      
      // 计算渲染尺寸
      render_width = *(int *)(context_ptr2 + 0xf0 + context_index2 * 0x48) + *(int *)(context_ptr1 + 0xb0 + context_index1 * 0x48);
      render_height = *(int *)(context_ptr2 + 0xec + context_index2 * 0x48) + *(int *)(context_ptr1 + 0xac + context_index1 * 0x48);
      viewport_x = *(int *)(context_ptr3 + 0xf0 + context_index3 * 0x48) + *(int *)(context_ptr1 + 0xb8 + context_index1 * 0x48);
      viewport_y = *(int )(context_ptr3 + 0xec + context_index3 * 0x48) + *(int )(context_ptr1 + 0xb4 + context_index1 * 0x48);
      
      // 更新显示设置
      FUN_180171fb0(*(uint64_t *)(system_main_module_state + 8), &render_height);
      
      // 更新显示比例
      context_ptr1 = *(int64_t *)(core_system_data_string + 0x2010);
      FUN_180093780(context_ptr1, *(int32_t *)(context_ptr1 + 4), *(int32_t *)(context_ptr1 + 8));
      context_ptr1 = core_system_data_string;
      
      // 计算并设置宽高比
      *(float *)(engine_context + 0x17e0) =
           (float)*(int *)(*(int64_t *)(core_system_data_string + 0x2010) + 4) / *(float *)(engine_context + 0x17ec);
      *(float *)(engine_context + 0x17e4) =
           (float)*(int *)(*(int64_t *)(context_ptr1 + 0x2010) + 8) / *(float *)(engine_context + 0x17f0);
    }
  }
  
  // 清理栈帧并继续循环（此函数不返回）
  SystemSecurityChecker(security_cookie ^ (uint64_t)stack_buffer_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 更新渲染参数和分辨率设置
 * 检查并更新渲染参数，如果分辨率发生变化则重新配置渲染系统
 * 
 * 注意：当检测到分辨率变化时，此函数可能不返回并触发系统重新配置
 */
void update_render_parameters(void)
{
  char *config_ptr;
  int new_width;
  int new_height;
  
  // 获取配置指针
  config_ptr = *(char **)(core_system_data_string + 0x2010);
  
  // 计算新的分辨率（基于当前显示比例）
  new_width = (int)(*(float *)(system_operation_state + 0x17f0) * *(float *)(system_operation_state + 0x17e4));
  new_height = (int)(*(float *)(system_operation_state + 0x17ec) * *(float *)(system_operation_state + 0x17e0));
  
  // 如果配置未初始化，设置初始参数
  if (*config_ptr == '\0') {
    *(int *)(config_ptr + 4) = new_height;     // 设置高度
    *(int *)(config_ptr + 8) = new_width;      // 设置宽度
    *config_ptr = '\x01';                     // 标记为已配置
    return;
  }
  
  // 检查分辨率是否发生变化
  if ((*(int *)(config_ptr + 4) == new_height) && (*(int *)(config_ptr + 8) == new_width)) {
    // 分辨率未变化，无需更新
    return;
  }
  
  // 分辨率发生变化，触发重新配置
  // 注意：此函数可能不返回，将触发系统重新初始化
  FUN_180062300(system_message_context, &unknown_var_9840_ptr, *(int *)(config_ptr + 4), 
                *(int32_t *)(config_ptr + 8), new_height, new_width);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



