#include "ultra_high_freq_fun_definitions.h"

// $fun 的语义化别名
#define $alias_name $fun

/* FUN_1808fcf5c - RenderingSystem_DataStructureProcessor */
#define RenderingSystem_DataStructureProcessor FUN_1808fcf5c


/* 函数别名定义: DataTransformer */
#define DataTransformer DataTransformer



// 03_rendering_part077.c - 渲染系统高级缓冲区管理和资源处理
// 本文件包含11个核心函数，主要负责渲染系统的高级缓冲区管理、资源处理和状态同步

/**
 * 渲染系统缓冲区重分配器 - 重新分配和管理渲染缓冲区
 * 
 * 参数:
 * - param_1: 长整型指针数组，缓冲区管理器上下文
 * - param_2: 未定义8字节参数，配置选项
 * 
 * 功能说明:
 * - 重新分配渲染缓冲区以适应新的大小需求
 * - 复制现有数据到新的缓冲区
 * - 管理缓冲区的生命周期和状态
 * - 处理缓冲区大小的动态调整
 */
void render_system_buffer_reallocator(int64_t *buffer_context, uint64_t config_option)
{
  uint64_t *temp_ptr1;
  int32_t *temp_ptr2;
  int32_t temp_var3;
  int32_t temp_var4;
  int32_t temp_var5;
  uint64_t temp_var6;
  int64_t buffer_start;
  int64_t buffer_end;
  uint64_t *temp_ptr9;
  int64_t new_buffer_size;
  int64_t current_position;
  int64_t stack_offset18;
  int64_t stack_offset20;
  uint64_t temp_var12;
  
  temp_var12 = 0xfffffffffffffffe;
  buffer_end = buffer_context[1];
  buffer_start = *buffer_context;
  stack_offset20 = (buffer_end - buffer_start) / 0x128;
  if (stack_offset20 == 0) {
    stack_offset20 = 1;
  }
  else {
    stack_offset20 = stack_offset20 * 2;
    if (stack_offset20 == 0) {
      stack_offset18 = 0;
      goto LAB_18030cb58;
    }
  }
  // 分配新的缓冲区空间
  stack_offset18 = CoreMemoryPoolAllocator(system_memory_pool_ptr, stack_offset20 * 0x128, (char)buffer_context[3]);
  buffer_end = buffer_context[1];
  buffer_start = *buffer_context;
LAB_18030cb58:
  new_buffer_size = stack_offset18;
  if (buffer_start != buffer_end) {
    buffer_start = buffer_start - stack_offset18;
    temp_ptr9 = (uint64_t *)(stack_offset18 + 0x110);
    do {
      // 复制缓冲区数据
      RenderingSystem_DataStructureProcessor(new_buffer_size, (int64_t)temp_ptr9 + buffer_start + -0x110, 0x58, 2, FUN_18030ccf0, FUN_1800f88f0, temp_var12, new_buffer_size);
      *(int32_t *)(temp_ptr9 + -0xc) = *(int32_t *)(buffer_start + -0x60 + (int64_t)temp_ptr9);
      temp_ptr1 = (uint64_t *)(buffer_start + -0x5c + (int64_t)temp_ptr9);
      temp_var6 = temp_ptr1[1];
      *(uint64_t *)((int64_t)temp_ptr9 + -0x5c) = *temp_ptr1;
      *(uint64_t *)((int64_t)temp_ptr9 + -0x54) = temp_var6;
      temp_ptr1 = (uint64_t *)(buffer_start + -0x4c + (int64_t)temp_ptr9);
      temp_var6 = temp_ptr1[1];
      *(uint64_t *)((int64_t)temp_ptr9 + -0x4c) = *temp_ptr1;
      *(uint64_t *)((int64_t)temp_ptr9 + -0x44) = temp_var6;
      temp_ptr1 = (uint64_t *)(buffer_start + -0x3c + (int64_t)temp_ptr9);
      temp_var6 = temp_ptr1[1];
      *(uint64_t *)((int64_t)temp_ptr9 + -0x3c) = *temp_ptr1;
      *(uint64_t *)((int64_t)temp_ptr9 + -0x34) = temp_var6;
      temp_ptr2 = (int32_t *)(buffer_start + -0x2c + (int64_t)temp_ptr9);
      temp_var3 = temp_ptr2[1];
      temp_var4 = temp_ptr2[2];
      temp_var5 = temp_ptr2[3];
      *(int32_t *)((int64_t)temp_ptr9 + -0x2c) = *temp_ptr2;
      *(int32_t *)(temp_ptr9 + -5) = temp_var3;
      *(int32_t *)((int64_t)temp_ptr9 + -0x24) = temp_var4;
      *(int32_t *)(temp_ptr9 + -4) = temp_var5;
      temp_ptr1 = (uint64_t *)(buffer_start + -0x1c + (int64_t)temp_ptr9);
      temp_var6 = temp_ptr1[1];
      *(uint64_t *)((int64_t)temp_ptr9 + -0x1c) = *temp_ptr1;
      *(uint64_t *)((int64_t)temp_ptr9 + -0x14) = temp_var6;
      temp_ptr9[-1] = &system_state_ptr;
      *temp_ptr9 = 0;
      *(int32_t *)(temp_ptr9 + 1) = 0;
      temp_ptr9[-1] = &system_data_buffer_ptr;
      temp_ptr9[2] = 0;
      *temp_ptr9 = 0;
      *(int32_t *)(temp_ptr9 + 1) = 0;
      *(int32_t *)(temp_ptr9 + 1) = *(int32_t *)(buffer_start + 8 + (int64_t)temp_ptr9);
      *temp_ptr9 = *(uint64_t *)(buffer_start + (int64_t)temp_ptr9);
      *(int32_t *)((int64_t)temp_ptr9 + 0x14) = *(int32_t *)(buffer_start + 0x14 + (int64_t)temp_ptr9);
      *(int32_t *)(temp_ptr9 + 2) = *(int32_t *)(buffer_start + 0x10 + (int64_t)temp_ptr9);
      *(int32_t *)(buffer_start + 8 + (int64_t)temp_ptr9) = 0;
      *(uint64_t *)(buffer_start + (int64_t)temp_ptr9) = 0;
      *(uint64_t *)(buffer_start + 0x10 + (int64_t)temp_ptr9) = 0;
      new_buffer_size = new_buffer_size + 0x128;
      current_position = (int64_t)temp_ptr9 + buffer_start + 0x18;
      temp_ptr9 = temp_ptr9 + 0x25;
    } while (current_position != buffer_end);
  }
  // 清理旧缓冲区
  FUN_1800f8570(new_buffer_size, config_option);
  buffer_end = buffer_context[1];
  buffer_start = *buffer_context;
  if (buffer_start != buffer_end) {
    do {
      FUN_1800f8930(buffer_start);
      buffer_start = buffer_start + 0x128;
    } while (buffer_start != buffer_end);
    buffer_start = *buffer_context;
  }
  if (buffer_start == 0) {
    *buffer_context = stack_offset18;
    buffer_context[1] = new_buffer_size + 0x128;
    buffer_context[2] = stack_offset20 * 0x128 + stack_offset18;
    return;
  }
  // 释放旧缓冲区
  CoreMemoryPoolInitializer(buffer_start);
}

/**
 * 渲染系统缓冲区数据复制器 - 复制缓冲区数据
 * 
 * 参数:
 * - param_1: 8字节指针数组，目标缓冲区
 * - param_2: 8字节指针数组，源缓冲区
 * 
 * 返回值:
 * - uint64_t*: 目标缓冲区指针
 * 
 * 功能说明:
 * - 复制源缓冲区数据到目标缓冲区
 * - 处理缓冲区元数据的复制
 * - 确保数据完整性
 */
uint64_t * render_system_buffer_data_copier(uint64_t *dest_buffer, uint64_t *src_buffer)
{
  // 复制基本数据
  *dest_buffer = *src_buffer;
  dest_buffer[1] = src_buffer[1];
  *(int32_t *)(dest_buffer + 2) = *(int32_t *)(src_buffer + 2);
  // 复制扩展数据
  RenderingSystem_DataStructureProcessor(dest_buffer + 3, src_buffer + 3, 0x20, 2, FUN_180627a70, SystemValidator);
  return dest_buffer;
}

/**
 * 渲染系统资源状态检查器 - 检查资源状态
 * 
 * 参数:
 * - param_1: 长整型参数，资源上下文
 * 
 * 返回值:
 * - uint64_t: 资源状态信息
 * 
 * 功能说明:
 * - 检查资源的当前状态
 * - 返回资源的状态信息
 * - 处理资源的有效性验证
 */
uint64_t render_system_resource_status_checker(int64_t resource_context)
{
  int64_t *resource_ptr;
  char status_flag;
  
  resource_ptr = *(int64_t **)(resource_context + 0x48);
  if (*(code **)(*resource_ptr + 0xc0) == (code *)&processed_var_9120_ptr) {
    status_flag = (resource_ptr[8] - resource_ptr[7] & 0xfffffffffffffff0U) == 0;
  }
  else {
    status_flag = (**(code **)(*resource_ptr + 0xc0))(resource_ptr);
  }
  if (status_flag == '\0') {
    return *(uint64_t *)resource_ptr[7];
  }
  return 0;
}

/**
 * 渲染系统缓冲区清理器 - 清理缓冲区数据
 * 
 * 参数:
 * - param_1: 8字节指针数组，缓冲区上下文
 * 
 * 返回值:
 * - uint64_t*: 清理后的缓冲区指针
 * 
 * 功能说明:
 * - 清理缓冲区数据
 * - 重置缓冲区状态
 * - 释放缓冲区资源
 */
uint64_t * render_system_buffer_cleaner(uint64_t *buffer_context)
{
  // 清理缓冲区数据
  DataStructureManager(buffer_context + 3, 0x20, 2, FUN_180627850, SystemValidator);
  *buffer_context = 0xffffffffffffffff;
  buffer_context[1] = 0;
  *(int32_t *)(buffer_context + 2) = 0;
  return buffer_context;
}

/**
 * 渲染系统资源数据初始化器 - 初始化资源数据结构
 * 
 * 参数:
 * - param_1: 未定义8字节参数，资源标识符
 * - param_2: 8字节指针数组，资源数据上下文
 * - param_3: 未定义8字节参数，资源配置
 * - param_4: 未定义8字节参数，资源选项
 * 
 * 返回值:
 * - uint64_t*: 资源数据上下文指针
 * 
 * 功能说明:
 * - 初始化资源数据结构
 * - 设置资源数据的初始状态
 * - 配置资源管理参数
 */
uint64_t * render_system_resource_data_initializer(uint64_t resource_id, uint64_t *resource_data_context, uint64_t resource_config, uint64_t resource_options)
{
  // 初始化资源数据结构
  *resource_data_context = &system_state_ptr;
  resource_data_context[1] = 0;
  *(int32_t *)(resource_data_context + 2) = 0;
  *resource_data_context = &memory_allocator_3432_ptr;
  resource_data_context[1] = resource_data_context + 3;
  *(int8_t *)(resource_data_context + 3) = 0;
  *(int32_t *)(resource_data_context + 2) = 0x15;
  // 复制资源数据字符串
  strcpy_s(resource_data_context[1], 0x80, &processed_var_4936_ptr, resource_options, 0, 0xfffffffffffffffe);
  return resource_data_context;
}

// WARNING: 全局变量起始地址与较小符号重叠

/**
 * 渲染系统高级资源管理器 - 管理渲染资源的生命周期
 * 
 * 参数:
 * - param_1: 8字节指针数组，资源管理器上下文
 * 
 * 返回值:
 * - uint64_t*: 资源管理器上下文指针
 * 
 * 功能说明:
 * - 初始化和配置资源管理器
 * - 管理资源的生命周期和状态
 * - 处理资源的分配和释放
 * - 维护资源状态的一致性
 */
uint64_t * render_system_advanced_resource_manager(uint64_t *resource_context)
{
  int64_t *callback_ptr;
  int64_t global_data;
  uint64_t *temp_ptr3;
  int64_t buffer_size;
  uint64_t *temp_ptr5;
  uint64_t *temp_ptr6;
  
  // 初始化资源管理器
  FUN_180244190();
  *resource_context = &processed_var_5008_ptr;
  resource_context[0x1e] = &system_state_ptr;
  temp_ptr5 = (uint64_t *)0x0;
  resource_context[0x1f] = 0;
  *(int32_t *)(resource_context + 0x20) = 0;
  resource_context[0x1e] = &system_data_buffer_ptr;
  resource_context[0x21] = 0;
  resource_context[0x1f] = 0;
  *(int32_t *)(resource_context + 0x20) = 0;
  // 初始化缓冲区
  DataStructureManager(resource_context + 0x26, 0x20, 2, FUN_180056e10, FUN_18004c030);
  DataStructureManager(resource_context + 0x2e, 0x20, 2, FUN_180056e10, FUN_18004c030);
  resource_context[0x36] = 0;
  temp_ptr3 = resource_context + 0x37;
  resource_context[0x3a] = 0;
  *(int32_t *)(resource_context + 0x3c) = 3;
  *temp_ptr3 = temp_ptr3;
  resource_context[0x38] = temp_ptr3;
  resource_context[0x39] = 0;
  *(int8_t *)(resource_context + 0x3a) = 0;
  resource_context[0x3b] = 0;
  // 分配资源管理内存
  temp_ptr3 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr, 0x20, 8, 3);
  *temp_ptr3 = 0;
  temp_ptr3[1] = 0;
  temp_ptr3[2] = 0;
  *(int32_t *)(temp_ptr3 + 3) = 3;
  resource_context[0x22] = temp_ptr3;
  resource_context[0x23] = 0;
  *(uint64_t *)((int64_t)resource_context + 0x124) = 0;
  *(int8_t *)(resource_context + 0x24) = 0;
  callback_ptr = (int64_t *)resource_context[0x36];
  resource_context[0x36] = 0;
  if (callback_ptr != (int64_t *)0x0) {
    (**(code **)(*callback_ptr + 0x38))();
  }
  *(int32_t *)((int64_t)resource_context + 0xcc) = 0;
  global_data = render_system_data_buffer;
  if (render_system_data_buffer == 0) {
    return resource_context;
  }
  temp_ptr3 = *(uint64_t **)(render_system_data_buffer + 0x20);
  if (temp_ptr3 < *(uint64_t **)(render_system_data_buffer + 0x28)) {
    *(uint64_t **)(render_system_data_buffer + 0x20) = temp_ptr3 + 1;
    *temp_ptr3 = resource_context;
    return resource_context;
  }
  temp_ptr6 = *(uint64_t **)(render_system_data_buffer + 0x18);
  buffer_size = (int64_t)temp_ptr3 - (int64_t)temp_ptr6 >> 3;
  if (buffer_size == 0) {
    buffer_size = 1;
  }
  else {
    buffer_size = buffer_size * 2;
    if (buffer_size == 0) goto LAB_18030d0ba;
  }
  // 重新分配缓冲区
  temp_ptr5 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr, buffer_size * 8, *(int8_t *)(render_system_data_buffer + 0x30));
  temp_ptr3 = *(uint64_t **)(global_data + 0x20);
  temp_ptr6 = *(uint64_t **)(global_data + 0x18);
LAB_18030d0ba:
  if (temp_ptr6 != temp_ptr3) {
    // 移动现有数据
    memmove(temp_ptr5, temp_ptr6, (int64_t)temp_ptr3 - (int64_t)temp_ptr6);
  }
  *temp_ptr5 = resource_context;
  if (*(int64_t *)(global_data + 0x18) == 0) {
    *(uint64_t **)(global_data + 0x18) = temp_ptr5;
    *(uint64_t **)(global_data + 0x20) = temp_ptr5 + 1;
    *(uint64_t **)(global_data + 0x28) = temp_ptr5 + buffer_size;
    return resource_context;
  }
  // 释放旧缓冲区
  CoreMemoryPoolInitializer();
}

/**
 * 渲染系统资源释放器 - 释放渲染资源
 * 
 * 参数:
 * - param_1: 未定义8字节参数，资源标识符
 * - param_2: 无符号长整型参数，释放标志
 * 
 * 返回值:
 * - uint64_t: 资源标识符
 * 
 * 功能说明:
 * - 释放指定的渲染资源
 * - 根据标志选择释放方式
 * - 清理资源相关数据
 */
uint64_t render_system_resource_releaser(uint64_t resource_id, uint64_t release_flag)
{
  // 调用资源释放函数
  FUN_18030d150();
  if ((release_flag & 1) != 0) {
    free(resource_id, 0x1e8);
  }
  return resource_id;
}

// WARNING: 全局变量起始地址与较小符号重叠

/**
 * 渲染系统资源清理器 - 清理渲染资源
 * 
 * 参数:
 * - param_1: 8字节指针数组，资源上下文
 * 
 * 功能说明:
 * - 清理渲染资源数据
 * - 释放相关内存
 * - 重置资源状态
 * - 处理资源依赖关系
 */
void render_system_resource_cleaner(uint64_t *resource_context)
{
  uint64_t *temp_ptr1;
  uint64_t *temp_ptr2;
  uint temp_index;
  uint64_t temp_counter;
  uint64_t *temp_ptr5;
  int64_t resource_handle;
  int64_t *resource_ptr;
  uint64_t block_size;
  uint64_t iteration_count;
  
  // 重置资源上下文
  *resource_context = &processed_var_5008_ptr;
  temp_counter = 0;
  if (render_system_data_buffer != 0) {
    temp_ptr1 = *(uint64_t **)(render_system_data_buffer + 0x20);
    temp_ptr2 = *(uint64_t **)(render_system_data_buffer + 0x18);
    iteration_count = (int64_t)temp_ptr1 - (int64_t)temp_ptr2 >> 3;
    block_size = temp_counter;
    temp_ptr5 = temp_ptr2;
    if (iteration_count != 0) {
      do {
        // 查找并移除资源
        if ((uint64_t *)*temp_ptr5 == resource_context) {
          temp_ptr5 = temp_ptr2 + (int)block_size + 1;
          if (temp_ptr5 < temp_ptr1) {
            // 移动剩余数据
            memmove(temp_ptr2 + (int)block_size, temp_ptr5, (int64_t)temp_ptr1 - (int64_t)temp_ptr5, (int64_t)temp_ptr1 - (int64_t)temp_ptr5, 0xfffffffffffffffe);
          }
          *(uint64_t **)(render_system_data_buffer + 0x20) = temp_ptr1 + -1;
          break;
        }
        temp_index = (int)temp_counter + 1;
        temp_counter = (uint64_t)temp_index;
        temp_ptr5 = temp_ptr5 + 1;
      } while ((uint64_t)(int64_t)(int)temp_index < iteration_count);
    }
  }
  // 清理缓冲区
  SystemCore_Controller(resource_context + 0x26);
  SystemCore_Controller(resource_context + 0x2a);
  temp_ptr1 = resource_context + 0x37;
  // 清理资源链表
  for (temp_ptr2 = (uint64_t *)resource_context[0x38]; temp_ptr2 != temp_ptr1; temp_ptr2 = (uint64_t *)func_0x00018066bd70(temp_ptr2)) {
    resource_handle = temp_ptr2[6];
    if (resource_handle != 0) {
      DataTransformer0(resource_handle);
      // 释放资源
      CoreMemoryPoolInitializer(resource_handle);
    }
  }
  temp_ptr2 = (uint64_t *)resource_context[0x39];
  if (temp_ptr2 != (uint64_t *)0x0) {
    SystemCache_Manager(temp_ptr1, *temp_ptr2);
    // 释放资源
    CoreMemoryPoolInitializer(temp_ptr2);
  }
  // 重置链表指针
  *temp_ptr1 = temp_ptr1;
  resource_context[0x38] = temp_ptr1;
  resource_context[0x39] = 0;
  *(int8_t *)(resource_context + 0x3a) = 0;
  resource_context[0x3b] = 0;
  // 清理资源数组
  resource_ptr = (int64_t *)resource_context[0x22];
  resource_handle = *resource_ptr;
  block_size = temp_counter;
  if (resource_ptr[1] - resource_handle >> 3 != 0) {
    do {
      resource_handle = *(int64_t *)(resource_handle + block_size);
      if (resource_handle != 0) {
        *(int64_t *)(resource_handle + 0x10) = *(int64_t *)(resource_handle + 8);
        if (*(int64_t *)(resource_handle + 8) != 0) {
          // 释放资源
          CoreMemoryPoolInitializer();
        }
        // 释放资源
        CoreMemoryPoolInitializer(resource_handle);
      }
      temp_index = (int)temp_counter + 1;
      temp_counter = (uint64_t)temp_index;
      resource_ptr = (int64_t *)resource_context[0x22];
      resource_handle = *resource_ptr;
      block_size = block_size + 8;
    } while ((uint64_t)(int64_t)(int)temp_index < (uint64_t)(resource_ptr[1] - resource_handle >> 3));
  }
  if (resource_ptr != (int64_t *)0x0) {
    if (*resource_ptr != 0) {
      // 释放资源
      CoreMemoryPoolInitializer();
    }
    // 释放资源
    CoreMemoryPoolInitializer(resource_ptr);
  }
  resource_context[0x22] = 0;
  UtilitiesSystem_Processor(temp_ptr1);
  if ((int64_t *)resource_context[0x36] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)resource_context[0x36] + 0x38))();
  }
  // 清理缓冲区
  SystemDataValidator(resource_context + 0x2e, 0x20, 2, FUN_18004c030);
  SystemDataValidator(resource_context + 0x26, 0x20, 2, FUN_18004c030);
  // 重置资源状态
  resource_context[0x1e] = &system_data_buffer_ptr;
  if (resource_context[0x1f] != 0) {
    // 释放资源
    CoreMemoryPoolInitializer();
  }
  resource_context[0x1f] = 0;
  *(int32_t *)(resource_context + 0x21) = 0;
  resource_context[0x1e] = &system_state_ptr;
  *resource_context = &processed_var_9896_ptr;
  resource_context[0x15] = &system_data_buffer_ptr;
  if (resource_context[0x16] != 0) {
    // 释放资源
    CoreMemoryPoolInitializer();
  }
  resource_context[0x16] = 0;
  *(int32_t *)(resource_context + 0x18) = 0;
  resource_context[0x15] = &system_state_ptr;
  resource_context[0x11] = &system_data_buffer_ptr;
  if (resource_context[0x12] != 0) {
    // 释放资源
    CoreMemoryPoolInitializer();
  }
  resource_context[0x12] = 0;
  *(int32_t *)(resource_context + 0x14) = 0;
  resource_context[0x11] = &system_state_ptr;
  if ((int64_t *)resource_context[7] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)resource_context[7] + 0x38))();
  }
  if ((int64_t *)resource_context[2] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)resource_context[2] + 0x38))();
  }
  *resource_context = &system_handler2_ptr;
  *resource_context = &system_handler1_ptr;
  return;
}

// WARNING: 全局变量起始地址与较小符号重叠

/**
 * 渲染系统渲染对象创建器 - 创建渲染对象
 * 
 * 参数:
 * - param_1: 长整型参数，渲染上下文
 * 
 * 返回值:
 * - uint64_t: 创建结果
 * 
 * 功能说明:
 * - 创建新的渲染对象
 * - 初始化渲染对象的状态
 * - 将对象添加到渲染系统中
 */
uint64_t render_system_render_object_creator(int64_t render_context)
{
  uint64_t temp_var1;
  int64_t *render_obj;
  int64_t *stack_ptr8;
  
  // 分配渲染对象内存
  render_obj = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr, 200, 8, 3, 0xfffffffffffffffe);
  UltraHighFreq_PerformanceMonitor1(render_obj);
  *render_obj = (int64_t)&processed_var_5304_ptr;
  render_obj[0x18] = render_context;
  stack_ptr8 = render_obj;
  // 初始化渲染对象
  (**(code **)(*render_obj + 0x28))(render_obj);
  stack_ptr8 = *(int64_t **)(render_context + 0x1b0);
  *(int64_t **)(render_context + 0x1b0) = render_obj;
  if (stack_ptr8 != (int64_t *)0x0) {
    (**(code **)(*stack_ptr8 + 0x38))();
  }
  temp_var1 = system_context_ptr;
  stack_ptr8 = *(int64_t **)(render_context + 0x1b0);
  if (stack_ptr8 != (int64_t *)0x0) {
    (**(code **)(*stack_ptr8 + 0x28))();
  }
  SystemCore_TimerManager(temp_var1, &stack_ptr8);
  return 0;
}

// WARNING: 全局变量起始地址与较小符号重叠

/**
 * 渲染系统渲染数据处理器 - 处理渲染数据
 * 
 * 参数:
 * - param_1: 长整型参数，渲染上下文
 * 
 * 功能说明:
 * - 处理渲染系统的数据
 * - 更新渲染对象的状态
 * - 管理渲染数据缓冲区
 */
void render_system_render_data_processor(int64_t render_context)
{
  uint64_t temp_var1;
  int64_t data_ptr;
  uint temp_index;
  uint64_t outer_counter;
  int64_t element_ptr;
  uint64_t inner_counter;
  uint64_t element_size;
  uint64_t temp_stack_d8;
  int32_t temp_stack_d0;
  int16_t temp_stack_cc;
  uint64_t temp_stack_c8;
  uint64_t temp_stack_c0;
  int32_t temp_stack_b8;
  int8_t temp_stack_b4;
  int32_t temp_stack_b0;
  uint64_t temp_stack_ac;
  int16_t temp_stack_a4;
  uint64_t temp_stack_a0;
  int32_t temp_stack_98;
  uint64_t temp_stack_90;
  int32_t temp_stack_88;
  int8_t temp_stack_84;
  uint64_t temp_stack_70;
  uint64_t temp_stack_68;
  uint64_t temp_stack_60;
  uint64_t temp_stack_58;
  uint64_t temp_stack_50;
  int32_t temp_stack_48;
  int32_t temp_stack_44;
  int32_t temp_stack_40;
  int32_t temp_stack_3c;
  int32_t temp_stack_38;
  int32_t temp_stack_34;
  int32_t temp_stack_30;
  int32_t temp_stack_2c;
  uint64_t temp_var4;
  
  outer_counter = 0;
  data_ptr = *(int64_t *)(render_context + 0xc0);
  temp_var1 = *(uint64_t *)(render_system_data_buffer + 0x38);
  inner_counter = outer_counter;
  if ((*(int64_t **)(data_ptr + 0x110))[1] - **(int64_t **)(data_ptr + 0x110) >> 3 != 0) {
    do {
      temp_var4 = 0;
      data_ptr = *(int64_t *)(outer_counter + **(int64_t **)(data_ptr + 0x110));
      element_ptr = *(int64_t *)(data_ptr + 8);
      element_size = temp_var4;
      if (*(int64_t *)(data_ptr + 0x10) - element_ptr >> 3 != 0) {
        do {
          // 设置渲染数据参数
          temp_stack_68 = 0x3f800000;
          temp_stack_60 = 0;
          temp_stack_58 = 0x3f80000000000000;
          temp_stack_50 = 0;
          temp_stack_c8 = 0;
          temp_stack_a0 = 0;
          temp_stack_98 = 0;
          temp_stack_90 = 0;
          temp_stack_70 = 0;
          temp_stack_48 = 0;
          temp_stack_44 = 0;
          temp_stack_40 = 0x3f800000;
          temp_stack_3c = 0;
          temp_stack_38 = 0;
          temp_stack_34 = 0;
          temp_stack_30 = 0;
          temp_stack_2c = 0x3f800000;
          temp_stack_d8 = 0;
          temp_stack_d0 = 0xffffffff;
          temp_stack_cc = 0xff00;
          temp_stack_c0 = 0xffffffffffffffff;
          temp_stack_b8 = 0xffffffff;
          temp_stack_b4 = 0xff;
          temp_stack_b0 = 0xffffffff;
          temp_stack_ac = 0;
          temp_stack_a4 = 0x400;
          temp_stack_88 = 0;
          temp_stack_84 = 0;
          // 处理渲染数据
          SystemHealthMonitor(*(uint64_t *)(*(int64_t *)(data_ptr + 8) + element_size), temp_var1, &temp_stack_68, 0, &temp_stack_d8);
          element_ptr = *(int64_t *)(data_ptr + 8);
          temp_index = (int)temp_var4 + 1;
          temp_var4 = (uint64_t)temp_index;
          element_size = element_size + 8;
        } while ((uint64_t)(int64_t)(int)temp_index < (uint64_t)(*(int64_t *)(data_ptr + 0x10) - element_ptr >> 3));
      }
      *(int64_t *)(data_ptr + 0x10) = element_ptr;
      temp_index = (int)inner_counter + 1;
      data_ptr = *(int64_t *)(render_context + 0xc0);
      outer_counter = outer_counter + 8;
      inner_counter = (uint64_t)temp_index;
    } while ((uint64_t)(int64_t)(int)temp_index < (uint64_t)((*(int64_t **)(data_ptr + 0x110))[1] - **(int64_t **)(data_ptr + 0x110) >> 3));
  }
  return;
}

/**
 * 渲染系统高级渲染处理器 - 执行高级渲染处理
 * 
 * 参数:
 * - param_1: 未定义8字节参数，渲染标识符
 * - param_2: 未定义8字节参数，渲染参数
 * - param_3: 长整型参数，渲染上下文
 * - param_4: 无符号长整型参数，渲染标志
 * 
 * 功能说明:
 * - 执行高级渲染处理算法
 * - 处理渲染参数和上下文
 * - 管理渲染状态和缓冲区
 */
void render_system_advanced_render_processor(uint64_t render_id, uint64_t render_param, int64_t render_context, uint64_t render_flags)
{
  int64_t element_ptr;
  uint64_t temp_var2;
  int64_t data_start;
  uint64_t global_rbx;
  int64_t global_rbp;
  uint temp_index;
  uint64_t global_rsi;
  uint64_t outer_counter;
  uint64_t global_rdi;
  uint64_t inner_counter;
  int64_t in_r11;
  int64_t global_r13;
  uint64_t global_r14;
  uint64_t element_size;
  int global_r15d;
  
  // 设置渲染参数
  *(uint64_t *)(in_r11 + 8) = global_rbx;
  *(uint64_t *)(in_r11 + 0x10) = global_rsi;
  *(uint64_t *)(in_r11 + 0x18) = global_rdi;
  *(uint64_t *)(in_r11 + -0x28) = global_r14;
  element_size = render_flags & 0xffffffff;
  do {
    outer_counter = render_flags & 0xffffffff;
    element_ptr = *(int64_t *)(element_size + **(int64_t **)(render_context + 0x110));
    data_start = *(int64_t *)(element_ptr + 8);
    inner_counter = render_flags;
    if (*(int64_t *)(element_ptr + 0x10) - data_start >> 3 != 0) {
      do {
        data_start = *(int64_t *)(element_ptr + 8);
        // 设置渲染状态
        *(uint64_t *)(global_rbp + -9) = 0x3f800000;
        *(uint64_t *)(global_rbp + -1) = 0;
        *(uint64_t *)(global_rbp + 7) = 0x3f80000000000000;
        *(uint64_t *)(global_rbp + 0xf) = 0;
        temp_var2 = *(uint64_t *)(data_start + render_flags);
        *(uint64_t *)(global_rbp + -0x69) = inner_counter;
        *(uint64_t *)(global_rbp + -0x41) = inner_counter;
        *(int *)(global_rbp + -0x39) = (int)inner_counter;
        *(uint64_t *)(global_rbp + -0x31) = inner_counter;
        *(uint64_t *)(global_rbp + -0x11) = inner_counter;
        *(int32_t *)(global_rbp + 0x17) = 0;
        *(int32_t *)(global_rbp + 0x1b) = 0;
        *(int32_t *)(global_rbp + 0x1f) = 0x3f800000;
        *(int32_t *)(global_rbp + 0x23) = 0;
        *(int32_t *)(global_rbp + 0x27) = 0;
        *(int32_t *)(global_rbp + 0x2b) = 0;
        *(int32_t *)(global_rbp + 0x2f) = 0x3f800000;
        *(uint64_t *)(global_rbp + -0x79) = 0;
        *(int32_t *)(global_rbp + -0x71) = 0xffffffff;
        *(int16_t *)(global_rbp + -0x6d) = 0xff00;
        *(uint64_t *)(global_rbp + -0x61) = 0xffffffffffffffff;
        *(int32_t *)(global_rbp + -0x59) = 0xffffffff;
        *(int8_t *)(global_rbp + -0x55) = 0xff;
        *(int32_t *)(global_rbp + -0x51) = 0xffffffff;
        *(uint64_t *)(global_rbp + -0x4d) = 0;
        *(int16_t *)(global_rbp + -0x45) = 0x400;
        *(int32_t *)(global_rbp + -0x29) = 0;
        *(int8_t *)(global_rbp + -0x25) = 0;
        // 执行渲染处理
        SystemHealthMonitor(temp_var2, 0, global_rbp + -9, 0, global_rbp + -0x79);
        data_start = *(int64_t *)(element_ptr + 8);
        render_flags = render_flags + 8;
        temp_index = (int)outer_counter + 1;
        outer_counter = (uint64_t)temp_index;
        inner_counter = 0;
      } while ((uint64_t)(int64_t)(int)temp_index < (uint64_t)(*(int64_t *)(element_ptr + 0x10) - data_start >> 3));
    }
    *(int64_t *)(element_ptr + 0x10) = data_start;
    global_r15d = global_r15d + 1;
    render_context = *(int64_t *)(global_r13 + 0xc0);
    element_size = element_size + 8;
    render_flags = inner_counter;
  } while ((uint64_t)(int64_t)global_r15d < (uint64_t)((*(int64_t **)(render_context + 0x110))[1] - **(int64_t **)(render_context + 0x110) >> 3));
  return;
}

/**
 * 渲染系统空操作函数 - 空操作函数
 * 
 * 功能说明:
 * - 空操作函数，用于占位或同步
 */
void render_system_no_operation(void)
{
  return;
}

/**
 * 渲染系统内存管理器 - 管理渲染系统内存
 * 
 * 参数:
 * - param_1: 未定义8字节参数，内存标识符
 * - param_2: 无符号长整型参数，内存标志
 * - param_3: 未定义8字节参数，内存配置
 * - param_4: 未定义8字节参数，内存选项
 * 
 * 返回值:
 * - uint64_t: 内存标识符
 * 
 * 功能说明:
 * - 管理渲染系统的内存分配
 * - 处理内存的释放和清理
 * - 维护内存状态的一致性
 */
uint64_t render_system_memory_manager(uint64_t memory_id, uint64_t memory_flags, uint64_t memory_config, uint64_t memory_options)
{
  uint64_t temp_var1;
  
  temp_var1 = 0xfffffffffffffffe;
  SystemCore_SecurityManager();
  if ((memory_flags & 1) != 0) {
    free(memory_id, 200, memory_config, memory_options, temp_var1);
  }
  return memory_id;
}

// WARNING: 全局变量起始地址与较小符号重叠

/**
 * 渲染系统数据结构管理器 - 管理渲染数据结构
 * 
 * 参数:
 * - param_1: 长整型参数，渲染上下文
 * - param_2: 长整型指针数组，数据结构指针
 * - param_3: 整型参数，管理标志
 * 
 * 功能说明:
 * - 管理渲染数据结构的生命周期
 * - 处理数据结构的分配和释放
 * - 维护数据结构的一致性
 */
void render_system_data_structure_manager(int64_t render_context, int64_t *data_structure, int management_flag)
{
  uint64_t *temp_ptr1;
  int temp_index;
  int64_t data_start;
  int64_t *data_ptr4;
  int64_t *data_ptr5;
  int64_t *data_ptr6;
  int64_t *stack_ptr8;
  int64_t *stack_ptr10;
  uint64_t temp_stack_e8;
  int32_t temp_stack_e0;
  int32_t temp_stack_dc;
  int16_t temp_stack_d8;
  char temp_stack_d6;
  int32_t temp_stack_d4;
  int8_t temp_stack_d0;
  uint64_t temp_stack_c8;
  int64_t stack_array_c0 [3];
  int32_t temp_stack_a8;
  uint64_t temp_stack_a0;
  uint64_t temp_stack_98;
  int32_t temp_stack_90;
  int32_t temp_stack_8c;
  int16_t temp_stack_88;
  int8_t temp_stack_86;
  int32_t temp_stack_84;
  int8_t temp_stack_80;
  uint64_t temp_stack_78;
  int64_t stack_array_70 [3];
  int32_t temp_stack_58;
  uint64_t temp_stack_50;
  uint64_t temp_stack_48;
  
  temp_stack_48 = 0xfffffffffffffffe;
  data_ptr6 = *(int64_t **)(render_context + 0x110);
  data_ptr4 = (int64_t *)0x0;
  if (*data_ptr6 != data_ptr6[1]) goto LAB_18030d811;
  // 分配新的数据结构
  stack_ptr8 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr, 0x28, 8, CONCAT71((int7)((uint64_t)data_ptr6 >> 8), 3));
  stack_ptr10 = stack_ptr8 + 1;
  *stack_ptr10 = 0;
  stack_ptr8[2] = 0;
  stack_ptr8[3] = 0;
  *(int32_t *)(stack_ptr8 + 4) = 3;
  temp_ptr1 = *(uint64_t **)(render_context + 0x110);
  data_ptr6 = (int64_t *)temp_ptr1[1];
  if (data_ptr6 < (int64_t *)temp_ptr1[2]) {
    temp_ptr1[1] = (uint64_t)(data_ptr6 + 1);
    *data_ptr6 = (int64_t)stack_ptr8;
    goto LAB_18030d811;
  }
  data_ptr5 = (int64_t *)*temp_ptr1;
  data_start = (int64_t)data_ptr6 - (int64_t)data_ptr5 >> 3;
  if (data_start == 0) {
    data_start = 1;
LAB_18030d7a4:
    data_ptr4 = (int64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr, data_start * 8, (char)temp_ptr1[3]);
    data_ptr6 = (int64_t *)temp_ptr1[1];
    data_ptr5 = (int64_t *)*temp_ptr1;
  }
  else {
    data_start = data_start * 2;
    if (data_start != 0) goto LAB_18030d7a4;
  }
  if (data_ptr5 != data_ptr6) {
    // 移动现有数据
    memmove(data_ptr4, data_ptr5, (int64_t)data_ptr6 - (int64_t)data_ptr5);
  }
  *data_ptr4 = (int64_t)stack_ptr8;
  if (*temp_ptr1 != 0) {
    // 释放旧数据
    CoreMemoryPoolInitializer();
  }
  *temp_ptr1 = (uint64_t)data_ptr4;
  temp_ptr1[1] = (uint64_t)(data_ptr4 + 1);
  temp_ptr1[2] = (uint64_t)(data_ptr4 + data_start);
LAB_18030d811:
  data_start = *(int64_t *)**(uint64_t **)(render_context + 0x110);
  // 初始化数据结构
  temp_stack_98 = 0;
  temp_stack_90 = 0;
  temp_stack_8c = 0xffffffff;
  temp_stack_88 = 1;
  temp_stack_86 = 0;
  temp_stack_84 = 0xffffffff;
  temp_stack_80 = 1;
  temp_stack_78 = 0;
  stack_array_70[0] = 0;
  stack_array_70[1] = 0;
  stack_array_70[2] = 0;
  temp_stack_58 = 3;
  temp_stack_50 = 0;
  temp_stack_e8 = 0;
  temp_stack_e0 = 0;
  temp_stack_dc = 0xffffffff;
  temp_stack_d8 = 1;
  temp_stack_d6 = '\0';
  temp_stack_d4 = 0xffffffff;
  temp_stack_d0 = 1;
  temp_stack_c8 = 0;
  stack_ptr8 = stack_array_c0;
  stack_array_c0[0] = 0;
  stack_array_c0[1] = 0;
  stack_array_c0[2] = 0;
  temp_stack_a8 = 3;
  temp_stack_a0 = 0;
  // 处理数据结构
  FUN_18022d470(data_structure[0x37], &temp_stack_98);
  if ((temp_stack_d6 != '\0') || (temp_index = FUN_18022d470(data_structure[0x37], &temp_stack_e8), temp_index == 0)) {
    stack_ptr8 = data_structure;
    SystemSecurity_Manager(data_start + 8, &stack_ptr8);
    if (*(int *)(render_context + 0x11c) < management_flag) {
      *(int *)(render_context + 0x11c) = management_flag;
    }
    *(int *)((int64_t)data_structure + 0x104) = *(int *)(render_context + 0x118) + management_flag;
  }
  stack_ptr8 = stack_array_c0;
  if (stack_array_c0[0] == 0) {
    stack_ptr8 = stack_array_70;
    if (stack_array_70[0] == 0) {
      return;
    }
    // 释放数据结构
    CoreMemoryPoolInitializer();
  }
  // 释放数据结构
  CoreMemoryPoolInitializer();
}

// WARNING: 全局变量起始地址与较小符号重叠

/**
 * 渲染系统高级渲染控制器 - 控制高级渲染流程
 * 
 * 参数:
 * - param_1: 未定义8字节参数，渲染标识符
 * - param_2: 长整型参数，渲染上下文
 * - param_3: 长整型参数，渲染数据
 * - param_4: 未定义1字节参数，渲染标志
 * - param_5: 未定义4字节参数，渲染参数1
 * - param_6: 未定义4字节参数，渲染参数2
 * - param_7: 长整型指针数组，渲染对象
 * - param_8: 浮点指针数组，渲染数据
 * 
 * 功能说明:
 * - 控制高级渲染流程的执行
 * - 处理渲染参数和上下文
 * - 管理渲染对象和数据
 * - 实现复杂的渲染算法
 */
void render_system_advanced_render_controller(uint64_t render_id, int64_t render_context, int64_t render_data, int8_t render_flag, int32_t render_param1, int32_t render_param2, int64_t *render_object, float *render_data_array)
{
  float temp_float1;
  float temp_float2;
  float *float_ptr3;
  int64_t temp_long4;
  uint64_t temp_var5;
  uint temp_index;
  float *float_ptr7;
  int64_t temp_long8;
  int32_t temp_var9;
  int64_t stack_b8;
  uint64_t temp_stack_98;
  int32_t temp_stack_90;
  int32_t temp_stack_8c;
  int16_t temp_stack_88;
  int8_t temp_stack_86;
  int32_t temp_stack_84;
  int8_t temp_stack_80;
  uint64_t temp_stack_78;
  int64_t stack_70;
  uint64_t temp_stack_68;
  uint64_t temp_stack_60;
  int32_t temp_stack_58;
  uint64_t temp_stack_50;
  
  if (render_data_array[0x21] == 0.0) {
    // 执行标准渲染流程
    FUN_18030eaf0(render_id, render_context, render_data, render_flag, render_param1, render_param2, render_object, render_data_array);
  }
  else if (render_data_array[0x21] == 2.8026e-45) {
    // 执行特殊渲染流程
    temp_float1 = *render_data_array;
    render_data = render_data - render_context;
    float_ptr3 = (float *)(render_context + 0x24);
    stack_b8 = 3;
    do {
      *render_data_array = temp_float1;
      temp_long8 = 3;
      float_ptr7 = float_ptr3;
      do {
        temp_long4 = FUN_18030f1e0(render_id);
        UltraHighFreq_SecurityValidator1(temp_long4, render_object);
        temp_float2 = render_data_array[8];
        temp_index = (uint)temp_float2 >> 0x10 & 0xff;
        *(float *)(temp_long4 + 0x238) = (float)temp_index * 0.003921569;
        *(float *)(temp_long4 + 0x23c) = (float)((uint)temp_float2 >> 8 & 0xff) * 0.003921569;
        *(float *)(temp_long4 + 0x240) = (float)((uint)temp_float2 & 0xff) * 0.003921569;
        *(float *)(temp_long4 + 0x244) = (float)((uint)temp_float2 >> 0x18) * 0.003921569;
        if (*(int64_t *)(temp_long4 + 0x2c8) == 0) {
          *(uint *)(temp_long4 + 0x100) = *(uint *)(temp_long4 + 0x100) | 8;
          temp_var5 = CoreMemoryPoolReallocator(system_memory_pool_ptr, 0xd0, 4, 9);
          // 初始化渲染缓冲区
          memset(temp_var5, 0, 0xd0);
        }
        // 更新渲染数据
        render_data_array[0x1b] = float_ptr7[-7] - float_ptr7[-9];
        render_data_array[0x1c] = *float_ptr7 - float_ptr7[-8];
        render_data_array[0x1d] = *(float *)(render_data + -0x24 + (int64_t)float_ptr7);
        render_data_array[0x1f] = *(float *)(render_data + -0x1c + (int64_t)float_ptr7);
        render_data_array[0x1e] = *(float *)(render_data + -0x20 + (int64_t)float_ptr7);
        render_data_array[0x20] = *(float *)(render_data + (int64_t)float_ptr7);
        FUN_18030ef70(temp_index, temp_long4, render_data_array);
        *render_data_array = render_data_array[0x1b] + *render_data_array;
        FUN_18030d6e0(render_id);
        float_ptr7 = float_ptr7 + 2;
        temp_long8 = temp_long8 + -1;
      } while (temp_long8 != 0);
      render_data_array[1] = render_data_array[1] + render_data_array[0x1c];
      float_ptr3 = float_ptr3 + 8;
      stack_b8 = stack_b8 + -1;
    } while (stack_b8 != 0);
  }
  else {
    // 执行高级渲染流程
    temp_long8 = FUN_18030f1e0();
    UltraHighFreq_SecurityValidator1(temp_long8, render_object);
    temp_float1 = render_data_array[8];
    *(float *)(temp_long8 + 0x238) = (float)((uint)temp_float1 >> 0x10 & 0xff) * 0.003921569;
    *(float *)(temp_long8 + 0x23c) = (float)((uint)temp_float1 >> 8 & 0xff) * 0.003921569;
    *(float *)(temp_long8 + 0x240) = (float)((uint)temp_float1 & 0xff) * 0.003921569;
    *(float *)(temp_long8 + 0x244) = (float)((uint)temp_float1 >> 0x18) * 0.003921569;
    temp_var9 = FUN_18007e930(temp_long8);
    FUN_18030ef70(temp_var9, temp_long8, render_data_array);
    FUN_18030d6e0(render_id);
  }
  if (*render_object != 0) {
    // 清理渲染对象
    temp_stack_98 = 0;
    temp_stack_90 = 0;
    temp_stack_8c = 0xffffffff;
    temp_stack_88 = 1;
    temp_stack_86 = 0;
    temp_stack_84 = 0xffffffff;
    temp_stack_80 = 1;
    temp_stack_78 = 0;
    stack_70 = 0;
    temp_stack_68 = 0;
    temp_stack_60 = 0;
    temp_stack_58 = 3;
    temp_stack_50 = 0;
    FUN_18022d470(*render_object, &temp_stack_98);
    if (stack_70 != 0) {
      // 释放渲染对象
      CoreMemoryPoolInitializer();
    }
  }
  return;
}

// WARNING: 全局变量起始地址与较小符号重叠
