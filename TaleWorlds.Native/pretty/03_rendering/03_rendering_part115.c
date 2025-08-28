#include "TaleWorlds.Native.Split.h"

/**
 * 渲染系统高级资源管理和对象创建模块
 * 
 * 本模块包含7个核心函数，主要功能涵盖：
 * - 渲染对象创建和初始化
 * - 资源池管理和分配
 * - 对象状态更新和同步
 * - 数据缓冲区管理
 * - 内存分配和释放
 * - 批量操作处理
 * - 系统清理和重置
 */

// 常量定义
#define RENDER_OBJECT_TYPE_NONE 0
#define RENDER_OBJECT_TYPE_BASIC 1
#define RENDER_OBJECT_TYPE_ADVANCED 2
#define RENDER_OBJECT_TYPE_SPECIAL 4
#define RENDER_OBJECT_TYPE_ENHANCED 6
#define RENDER_OBJECT_TYPE_EXTENDED 7

#define RENDER_OBJECT_SIZE_BASIC 0x1c8
#define RENDER_OBJECT_SIZE_ADVANCED 0x200
#define RENDER_OBJECT_SIZE_SPECIAL 0xd8
#define RENDER_OBJECT_SIZE_ENHANCED 0xf8
#define RENDER_OBJECT_CHUNK_SIZE 0x1a0

// 全局变量
extern void *g_rendering_memory_pool;
extern void *g_rendering_object_factory;
extern void *g_rendering_resource_manager;

// 函数别名定义
#define rendering_system_empty_function RenderingSystem_EmptyFunction
#define rendering_system_create_object_by_type RenderingSystem_CreateObjectByType
#define rendering_system_process_object_data RenderingSystem_ProcessObjectData
#define rendering_system_batch_process_objects RenderingSystem_BatchProcessObjects
#define rendering_system_copy_object_data RenderingSystem_CopyObjectData
#define rendering_system_allocate_object_memory RenderingSystem_AllocateObjectMemory
#define rendering_system_serialize_object RenderingSystem_SerializeObject

/**
 * 渲染系统空函数
 * 
 * 用于占位和系统初始化时的空操作
 */
void rendering_system_empty_function(void)
{
  return;
}

/**
 * 渲染系统对象创建器
 * 
 * 根据对象类型创建相应的渲染对象
 * 
 * @param object_context 对象上下文指针
 * @return 创建的对象指针，失败返回NULL
 */
longlong *rendering_system_create_object_by_type(longlong object_context)
{
  uint32_t object_type;
  void *object_memory;
  longlong *render_object;
  
  // 获取对象类型
  object_type = **(uint32_t **)(object_context + 8);
  *(uint32_t **)(object_context + 8) = *(uint32_t **)(object_context + 8) + 1;
  
  switch(object_type) {
  case RENDER_OBJECT_TYPE_NONE:
  case RENDER_OBJECT_TYPE_EXTENDED:
    // 创建基础类型对象
    object_memory = rendering_system_allocate_memory(g_rendering_memory_pool, RENDER_OBJECT_SIZE_BASIC, 8, 3);
    render_object = (longlong *)rendering_system_initialize_basic_object(object_memory);
    rendering_system_setup_object_callbacks(render_object, object_context, 0);
    *(uint32_t *)((longlong)render_object + 0x8c) = object_type;
    return render_object;
    
  case RENDER_OBJECT_TYPE_BASIC:
    // 创建高级类型对象
    object_memory = rendering_system_allocate_memory(g_rendering_memory_pool, RENDER_OBJECT_SIZE_ADVANCED, 8, 3);
    render_object = (longlong *)rendering_system_initialize_advanced_object(object_memory);
    rendering_system_setup_object_callbacks(render_object, object_context, 0);
    *(uint32_t *)((longlong)render_object + 0x8c) = RENDER_OBJECT_TYPE_BASIC;
    return render_object;
    
  case RENDER_OBJECT_TYPE_ADVANCED:
    // 创建特殊类型对象
    object_memory = rendering_system_allocate_memory(g_rendering_memory_pool, RENDER_OBJECT_SIZE_SPECIAL, 8, 3);
    render_object = (longlong *)rendering_system_initialize_special_object(object_memory);
    rendering_system_setup_object_callbacks(render_object, object_context, 0);
    *(uint32_t *)((longlong)render_object + 0x8c) = RENDER_OBJECT_TYPE_ADVANCED;
    return render_object;
    
  case RENDER_OBJECT_TYPE_SPECIAL:
    // 创建增强类型对象
    object_memory = rendering_system_allocate_memory(g_rendering_memory_pool, RENDER_OBJECT_SIZE_ENHANCED, 8, 3);
    render_object = (longlong *)rendering_system_initialize_enhanced_object(object_memory);
    rendering_system_setup_object_callbacks(render_object, object_context, 0);
    *(uint32_t *)((longlong)render_object + 0x8c) = RENDER_OBJECT_TYPE_SPECIAL;
    return render_object;
    
  case RENDER_OBJECT_TYPE_ENHANCED:
    // 创建扩展类型对象
    render_object = (longlong *)rendering_system_create_extended_object(&g_rendering_object_factory);
    rendering_system_setup_object_callbacks(render_object, object_context, 0);
    *(uint32_t *)((longlong)render_object + 0x8c) = RENDER_OBJECT_TYPE_ENHANCED;
    return render_object;
    
  default:
    return NULL;
  }
}

/**
 * 渲染系统对象数据处理器
 * 
 * 处理对象数据的批量操作和内存管理
 * 
 * @param object_context 对象上下文
 * @param operation_type 操作类型
 * @param data_buffer 数据缓冲区指针
 */
void rendering_system_process_object_data(longlong object_context, uint64_t operation_type, uint64_t *data_buffer)
{
  longlong data_start;
  longlong data_end;
  longlong data_size;
  longlong *buffer_ptr;
  longlong *buffer_end;
  longlong *new_buffer;
  uint64_t chunk_index;
  longlong chunk_offset;
  int buffer_capacity;
  
  data_start = *(longlong *)(object_context + 0x90);
  data_end = *(longlong *)(object_context + 0x98) - data_start;
  buffer_capacity = 0;
  
  // 计算数据块数量
  chunk_offset = data_end >> 0x3f;
  if (data_end / RENDER_OBJECT_CHUNK_SIZE + chunk_offset != chunk_offset) {
    chunk_index = 0;
    do {
      buffer_ptr = (longlong *)data_buffer[1];
      chunk_offset = chunk_index * RENDER_OBJECT_CHUNK_SIZE + data_start;
      
      // 检查缓冲区容量
      if (buffer_ptr < (longlong *)data_buffer[2]) {
        data_buffer[1] = (uint64_t)(buffer_ptr + 1);
        *buffer_ptr = chunk_offset;
      }
      else {
        // 扩展缓冲区
        buffer_end = (longlong *)*data_buffer;
        data_size = (longlong)buffer_ptr - (longlong)buffer_end >> 3;
        
        if (data_size == 0) {
          data_size = 1;
        }
        
        new_buffer = (longlong *)rendering_system_reallocate_memory(g_rendering_memory_pool, data_size * 8, (char)data_buffer[3]);
        buffer_end = (longlong *)*data_buffer;
        buffer_ptr = (longlong *)data_buffer[1];
        
        if (buffer_end != buffer_ptr) {
          memmove(new_buffer, buffer_end, (longlong)buffer_ptr - (longlong)buffer_end);
        }
        
        *new_buffer = chunk_offset;
        
        if (*data_buffer != 0) {
          rendering_system_free_memory();
        }
        
        *data_buffer = (uint64_t)new_buffer;
        data_buffer[2] = (uint64_t)(new_buffer + data_size);
        data_buffer[1] = (uint64_t)(new_buffer + 1);
      }
      
      data_start = *(longlong *)(object_context + 0x90);
      buffer_capacity = buffer_capacity + 1;
      chunk_index = (uint64_t)buffer_capacity;
    } while (chunk_index < (uint64_t)((*(longlong *)(object_context + 0x98) - data_start) / RENDER_OBJECT_CHUNK_SIZE));
  }
  
  return;
}

/**
 * 渲染系统批量对象处理器
 * 
 * 批量处理多个对象的操作
 * 
 * @param operation_context 操作上下文
 * @param operation_params 操作参数
 * @param object_data 对象数据
 */
void rendering_system_batch_process_objects(uint64_t operation_context, uint64_t operation_params, longlong object_data)
{
  longlong *buffer_ptr;
  longlong *buffer_end;
  longlong buffer_size;
  uint64_t *data_buffer;
  longlong *new_buffer;
  uint64_t chunk_index;
  longlong chunk_offset;
  int buffer_capacity;
  
  chunk_index = 0;
  do {
    buffer_ptr = (longlong *)data_buffer[1];
    object_data = chunk_index * RENDER_OBJECT_CHUNK_SIZE + object_data;
    
    if (buffer_ptr < (longlong *)data_buffer[2]) {
      data_buffer[1] = (uint64_t)(buffer_ptr + 1);
      *buffer_ptr = object_data;
    }
    else {
      // 缓冲区扩展逻辑
      buffer_end = (longlong *)*data_buffer;
      buffer_size = (longlong)buffer_ptr - (longlong)buffer_end >> 3;
      
      if (buffer_size == 0) {
        buffer_size = 1;
      }
      
      new_buffer = (longlong *)rendering_system_reallocate_memory(g_rendering_memory_pool, buffer_size * 8, (char)data_buffer[3]);
      buffer_end = (longlong *)*data_buffer;
      buffer_ptr = (longlong *)data_buffer[1];
      
      if (buffer_end != buffer_ptr) {
        memmove(new_buffer, buffer_end, (longlong)buffer_ptr - (longlong)buffer_end);
      }
      
      *new_buffer = object_data;
      
      if (*data_buffer != 0) {
        rendering_system_free_memory();
      }
      
      *data_buffer = (uint64_t)new_buffer;
      data_buffer[2] = (uint64_t)(new_buffer + buffer_size);
      data_buffer[1] = (uint64_t)(new_buffer + 1);
    }
    
    object_data = *(longlong *)(operation_context + 0x90);
    buffer_capacity = buffer_capacity + 1;
    chunk_index = (uint64_t)buffer_capacity;
    
    // 检查是否完成所有对象处理
    buffer_size = (longlong)((*(longlong *)(operation_context + 0x98) - object_data) / RENDER_OBJECT_CHUNK_SIZE);
    if ((uint64_t)((buffer_size >> 7) - (buffer_size >> 0x3f)) <= chunk_index) {
      return;
    }
  } while( true );
}

/**
 * 渲染系统空函数2
 * 
 * 另一个空函数占位符
 */
void rendering_system_empty_function_2(void)
{
  return;
}

/**
 * 渲染系统对象数据复制器
 * 
 * 复制对象数据并进行内存管理
 * 
 * @param target_object 目标对象
 * @param source_object 源对象
 * @return 目标对象指针
 */
longlong rendering_system_copy_object_data(longlong target_object, longlong source_object)
{
  uint32_t value1;
  uint32_t value2;
  uint32_t value3;
  uint64_t data_ptr;
  longlong offset1;
  longlong offset2;
  longlong offset3;
  longlong offset4;
  longlong offset5;
  uint64_t chunk_index;
  uint64_t buffer_size;
  int chunk_count;
  longlong stack_var;
  
  // 复制基础属性
  *(uint32_t *)(target_object + 8) = *(uint32_t *)(source_object + 8);
  *(uint32_t *)(target_object + 0x10) = *(uint32_t *)(source_object + 0x10);
  chunk_count = 0;
  *(uint32_t *)(target_object + 0x14) = *(uint32_t *)(source_object + 0x14);
  
  // 复制数据块
  data_ptr = *(uint64_t *)(source_object + 0x20);
  *(uint64_t *)(target_object + 0x18) = *(uint64_t *)(source_object + 0x18);
  *(uint64_t *)(target_object + 0x20) = data_ptr;
  
  data_ptr = *(uint64_t *)(source_object + 0x30);
  *(uint64_t *)(target_object + 0x28) = *(uint64_t *)(source_object + 0x28);
  *(uint64_t *)(target_object + 0x30) = data_ptr;
  
  data_ptr = *(uint64_t *)(source_object + 0x40);
  *(uint64_t *)(target_object + 0x38) = *(uint64_t *)(source_object + 0x38);
  *(uint64_t *)(target_object + 0x40) = data_ptr;
  
  data_ptr = *(uint64_t *)(source_object + 0x50);
  *(uint64_t *)(target_object + 0x48) = *(uint64_t *)(source_object + 0x48);
  *(uint64_t *)(target_object + 0x50) = data_ptr;
  
  data_ptr = *(uint64_t *)(source_object + 0x60);
  *(uint64_t *)(target_object + 0x58) = *(uint64_t *)(source_object + 0x58);
  *(uint64_t *)(target_object + 0x60) = data_ptr;
  
  data_ptr = *(uint64_t *)(source_object + 0x70);
  *(uint64_t *)(target_object + 0x68) = *(uint64_t *)(source_object + 0x68);
  *(uint64_t *)(target_object + 0x70) = data_ptr;
  
  // 复制状态标志
  value1 = *(uint32_t *)(source_object + 0x7c);
  value2 = *(uint32_t *)(source_object + 0x80);
  value3 = *(uint32_t *)(source_object + 0x84);
  *(uint32_t *)(target_object + 0x78) = *(uint32_t *)(source_object + 0x78);
  *(uint32_t *)(target_object + 0x7c) = value1;
  *(uint32_t *)(target_object + 0x80) = value2;
  *(uint32_t *)(target_object + 0x84) = value3;
  *(uint32_t *)(target_object + 0x88) = *(uint32_t *)(source_object + 0x88);
  *(uint32_t *)(target_object + 0x8c) = *(uint32_t *)(source_object + 0x8c);
  
  // 复制数据块
  offset1 = *(longlong *)(source_object + 0x90);
  offset2 = *(longlong *)(source_object + 0x98) - offset1;
  offset3 = offset2 >> 0x3f;
  
  if (offset2 / RENDER_OBJECT_CHUNK_SIZE + offset3 != offset3) {
    buffer_size = 0;
    do {
      chunk_index = *(uint64_t *)(target_object + 0x98);
      offset1 = buffer_size * RENDER_OBJECT_CHUNK_SIZE + offset1;
      
      if (chunk_index < *(uint64_t *)(target_object + 0xa0)) {
        *(uint64_t *)(target_object + 0x98) = chunk_index + RENDER_OBJECT_CHUNK_SIZE;
        rendering_system_copy_data_chunk(chunk_index, offset1);
      }
      else {
        // 重新分配内存
        offset3 = *(longlong *)(target_object + 0x90);
        offset2 = (longlong)(chunk_index - offset3) / RENDER_OBJECT_CHUNK_SIZE;
        
        if (offset2 == 0) {
          offset2 = 1;
        }
        
        offset4 = rendering_system_reallocate_memory(g_rendering_memory_pool, offset2 * RENDER_OBJECT_CHUNK_SIZE, *(uint8_t *)(target_object + 0xa8));
        chunk_index = *(uint64_t *)(target_object + 0x98);
        offset3 = *(longlong *)(target_object + 0x90);
        
        rendering_system_transfer_data(&stack_var, offset3, chunk_index, offset4);
        offset5 = stack_var;
        rendering_system_copy_data_chunk(stack_var, offset1);
        
        chunk_index = *(uint64_t *)(target_object + 0x98);
        offset3 = *(longlong *)(target_object + 0x90);
        
        // 清理旧内存
        if (offset3 != chunk_index) {
          do {
            rendering_system_free_data_chunk(offset3);
            offset3 = offset3 + RENDER_OBJECT_CHUNK_SIZE;
          } while (offset3 != chunk_index);
          offset3 = *(longlong *)(target_object + 0x90);
        }
        
        if (offset3 != 0) {
          rendering_system_free_memory(offset3);
        }
        
        *(longlong *)(target_object + 0x90) = offset4;
        *(longlong *)(target_object + 0x98) = offset5 + RENDER_OBJECT_CHUNK_SIZE;
        *(longlong *)(target_object + 0xa0) = offset2 * RENDER_OBJECT_CHUNK_SIZE + offset4;
      }
      
      offset1 = *(longlong *)(source_object + 0x90);
      chunk_count = chunk_count + 1;
      buffer_size = (uint64_t)chunk_count;
    } while (buffer_size < (uint64_t)((*(longlong *)(source_object + 0x98) - offset1) / RENDER_OBJECT_CHUNK_SIZE));
  }
  
  return target_object;
}

/**
 * 渲染系统内存分配器
 * 
 * 为渲染对象分配内存并进行管理
 * 
 * @param allocation_context 分配上下文
 * @param allocation_params 分配参数
 */
void rendering_system_allocate_object_memory(longlong allocation_context, longlong *allocation_params)
{
  longlong buffer_size;
  longlong new_buffer;
  longlong buffer_start;
  longlong buffer_end;
  uint64_t allocation_size;
  uint64_t chunk_index;
  longlong chunk_offset;
  int allocation_count;
  
  chunk_index = 0;
  do {
    allocation_size = *(uint64_t *)(allocation_context + 0x98);
    chunk_offset = chunk_index * RENDER_OBJECT_CHUNK_SIZE + chunk_offset;
    
    if (allocation_size < *(uint64_t *)(allocation_context + 0xa0)) {
      *(uint64_t *)(allocation_context + 0x98) = allocation_size + RENDER_OBJECT_CHUNK_SIZE;
      rendering_system_copy_data_chunk(allocation_size, chunk_offset);
    }
    else {
      buffer_start = *(longlong *)(allocation_context + 0x90);
      buffer_size = (longlong)((longlong)allocation_size - buffer_start) / RENDER_OBJECT_CHUNK_SIZE;
      buffer_size = (buffer_size >> 7) - (buffer_size >> 0x3f);
      
      if (buffer_size == 0) {
        buffer_size = 1;
      }
      
      new_buffer = rendering_system_reallocate_memory(g_rendering_memory_pool, buffer_size * RENDER_OBJECT_CHUNK_SIZE, *(uint8_t *)(allocation_context + 0xa8));
      allocation_size = *(uint64_t *)(allocation_context + 0x98);
      buffer_start = *(longlong *)(allocation_context + 0x90);
      
      rendering_system_transfer_data(&allocation_params, buffer_start, allocation_size, new_buffer);
      buffer_end = allocation_params;
      rendering_system_copy_data_chunk(allocation_params, chunk_offset);
      
      allocation_size = *(uint64_t *)(allocation_context + 0x98);
      buffer_start = *(longlong *)(allocation_context + 0x90);
      buffer_end = *(longlong *)(allocation_context + 0x90);
      
      // 清理旧内存
      if (buffer_end != allocation_size) {
        do {
          rendering_system_free_data_chunk(buffer_end);
          buffer_end = buffer_end + RENDER_OBJECT_CHUNK_SIZE;
        } while (buffer_end != allocation_size);
        buffer_end = *(longlong *)(allocation_context + 0x90);
      }
      
      if (buffer_end != 0) {
        rendering_system_free_memory(buffer_end);
      }
      
      *(longlong *)(allocation_context + 0x90) = new_buffer;
      *(longlong *)(allocation_context + 0x98) = buffer_end + RENDER_OBJECT_CHUNK_SIZE;
      *(longlong *)(allocation_context + 0xa0) = buffer_size * RENDER_OBJECT_CHUNK_SIZE + new_buffer;
    }
    
    chunk_offset = *(longlong *)(allocation_context + 0x90);
    allocation_count = allocation_count + 1;
    chunk_index = (uint64_t)allocation_count;
    
    if ((uint64_t)((*(longlong *)(allocation_context + 0x98) - chunk_offset) / RENDER_OBJECT_CHUNK_SIZE) <= chunk_index) {
      return;
    }
  } while( true );
}

/**
 * 渲染系统空函数3
 * 
 * 第三个空函数占位符
 */
void rendering_system_empty_function_3(void)
{
  return;
}

/**
 * 渲染系统对象序列化器
 * 
 * 将渲染对象数据序列化到缓冲区
 * 
 * @param object_data 对象数据
 * @param output_buffer 输出缓冲区
 */
void rendering_system_serialize_object(longlong object_data, longlong *output_buffer)
{
  uint32_t header_value;
  longlong data_offset;
  char *buffer_ptr;
  int *int_ptr;
  uint32_t *uint_ptr;
  longlong array_size;
  char flag_value;
  int element_count;
  uint64_t write_index;
  uint64_t read_index;
  longlong array_start;
  longlong array_end;
  uint element_count_uint;
  uint64_t element_index;
  
  // 初始化序列化缓冲区
  rendering_system_initialize_serialization(output_buffer, object_data);
  uint_ptr = (uint32_t *)output_buffer[1];
  header_value = *(uint32_t *)(object_data + 0x5c);
  
  // 检查缓冲区空间
  if ((uint64_t)((*output_buffer - (longlong)uint_ptr) + output_buffer[2]) < 5) {
    rendering_system_expand_buffer(output_buffer, (longlong)uint_ptr + (4 - *output_buffer));
    uint_ptr = (uint32_t *)output_buffer[1];
  }
  
  // 写入头部信息
  *uint_ptr = header_value;
  output_buffer[1] = output_buffer[1] + 4;
  uint_ptr = (uint32_t *)output_buffer[1];
  header_value = *(uint32_t *)(object_data + 0x58);
  
  if ((uint64_t)((*output_buffer - (longlong)uint_ptr) + output_buffer[2]) < 5) {
    rendering_system_expand_buffer(output_buffer, (longlong)uint_ptr + (4 - *output_buffer));
    uint_ptr = (uint32_t *)output_buffer[1];
  }
  
  *uint_ptr = header_value;
  output_buffer[1] = output_buffer[1] + 4;
  uint_ptr = (uint32_t *)output_buffer[1];
  header_value = *(uint32_t *)(object_data + 0x60);
  
  if ((uint64_t)((*output_buffer - (longlong)uint_ptr) + output_buffer[2]) < 5) {
    rendering_system_expand_buffer(output_buffer, (longlong)uint_ptr + (4 - *output_buffer));
    uint_ptr = (uint32_t *)output_buffer[1];
  }
  
  *uint_ptr = header_value;
  output_buffer[1] = output_buffer[1] + 4;
  buffer_ptr = (char *)output_buffer[1];
  
  // 检查特殊标志
  if (((((*(float *)(object_data + 0x100) == 0.0) && (*(float *)(object_data + 0x104) == 0.0)) &&
       (*(float *)(object_data + 0x108) == 0.0)) &&
      ((((*(float *)(object_data + 0xd0) == 1.0 && (*(float *)(object_data + 0xd4) == 0.0)) &&
        ((*(float *)(object_data + 0xd8) == 0.0 &&
         ((*(float *)(object_data + 0xe0) == 0.0 && (*(float *)(object_data + 0xe4) == 1.0)))))) &&
       (*(float *)(object_data + 0xe8) == 0.0)))) &&
     (((*(float *)(object_data + 0xf0) == 0.0 && (*(float *)(object_data + 0xf4) == 0.0)) &&
      (*(float *)(object_data + 0xf8) == 1.0)))) {
    flag_value = '\x01';
  }
  else {
    flag_value = '\0';
  }
  
  // 写入标志
  if ((uint64_t)((*output_buffer - (longlong)buffer_ptr) + output_buffer[2]) < 2) {
    rendering_system_expand_buffer(output_buffer, buffer_ptr + (1 - *output_buffer));
    buffer_ptr = (char *)output_buffer[1];
  }
  
  *buffer_ptr = flag_value;
  output_buffer[1] = output_buffer[1] + 1;
  uint_ptr = (uint32_t *)output_buffer[1];
  
  // 处理附加数据
  if (flag_value == '\0') {
    rendering_system_serialize_transform_data(output_buffer, (float *)(object_data + 0xd0));
    uint_ptr = (uint32_t *)output_buffer[1];
  }
  
  // 写入对象ID
  header_value = *(uint32_t *)(object_data + 100);
  if ((uint64_t)((*output_buffer - (longlong)uint_ptr) + output_buffer[2]) < 5) {
    rendering_system_expand_buffer(output_buffer, (longlong)uint_ptr + (4 - *output_buffer));
    uint_ptr = (uint32_t *)output_buffer[1];
  }
  
  *uint_ptr = header_value;
  output_buffer[1] = output_buffer[1] + 4;
  
  // 序列化各个数据块
  rendering_system_serialize_data_block(output_buffer, object_data + 0x80);
  rendering_system_serialize_data_block(output_buffer, object_data + 0x90);
  rendering_system_serialize_data_block(output_buffer, object_data + 0xa0);
  rendering_system_serialize_data_block(output_buffer, object_data + 0xb0);
  rendering_system_serialize_data_block(output_buffer, object_data + 0xc0);
  
  // 写入状态信息
  uint_ptr = (uint32_t *)output_buffer[1];
  header_value = *(uint32_t *)(object_data + 0x68);
  if ((uint64_t)((*output_buffer - (longlong)uint_ptr) + output_buffer[2]) < 5) {
    rendering_system_expand_buffer(output_buffer, (longlong)uint_ptr + (4 - *output_buffer));
    uint_ptr = (uint32_t *)output_buffer[1];
  }
  
  *uint_ptr = header_value;
  output_buffer[1] = output_buffer[1] + 4;
  uint_ptr = (uint32_t *)output_buffer[1];
  header_value = *(uint32_t *)(object_data + 0x198);
  
  if ((uint64_t)((*output_buffer - (longlong)uint_ptr) + output_buffer[2]) < 5) {
    rendering_system_expand_buffer(output_buffer, (longlong)uint_ptr + (4 - *output_buffer));
    uint_ptr = (uint32_t *)output_buffer[1];
  }
  
  *uint_ptr = header_value;
  output_buffer[1] = output_buffer[1] + 4;
  
  // 处理数组数据
  int_ptr = (int *)output_buffer[1];
  array_size = *(longlong *)(object_data + 0x138);
  array_start = *(longlong *)(object_data + 0x130);
  
  if ((uint64_t)((*output_buffer - (longlong)int_ptr) + output_buffer[2]) < 5) {
    rendering_system_expand_buffer(output_buffer, (longlong)int_ptr + (4 - *output_buffer));
    int_ptr = (int *)output_buffer[1];
  }
  
  element_count = (int)(array_size - array_start >> 3);
  *int_ptr = element_count;
  element_index = 0;
  uint_ptr = (uint32_t *)(output_buffer[1] + 4);
  output_buffer[1] = (longlong)uint_ptr;
  read_index = element_index;
  
  if (0 < element_count) {
    do {
      array_size = *(longlong *)(object_data + 0x130);
      if ((uint64_t)((*output_buffer - (longlong)uint_ptr) + output_buffer[2]) < 9) {
        rendering_system_expand_buffer(output_buffer, (longlong)uint_ptr + (8 - *output_buffer));
        uint_ptr = (uint32_t *)output_buffer[1];
      }
      
      *uint_ptr = *(uint32_t *)(array_size + read_index * 8);
      output_buffer[1] = output_buffer[1] + 4;
      element_index = read_index + 1;
      *(uint32_t *)output_buffer[1] = *(uint32_t *)(array_size + 4 + read_index * 8);
      uint_ptr = (uint32_t *)(output_buffer[1] + 4);
      output_buffer[1] = (longlong)uint_ptr;
      read_index = element_index;
    } while ((longlong)element_index < (longlong)element_count);
  }
  
  // 写入其他属性
  header_value = *(uint32_t *)(object_data + 0x7c);
  if ((uint64_t)((*output_buffer - (longlong)uint_ptr) + output_buffer[2]) < 5) {
    rendering_system_expand_buffer(output_buffer, (longlong)uint_ptr + (4 - *output_buffer));
    uint_ptr = (uint32_t *)output_buffer[1];
  }
  
  *uint_ptr = header_value;
  output_buffer[1] = output_buffer[1] + 4;
  uint_ptr = (uint32_t *)output_buffer[1];
  header_value = *(uint32_t *)(object_data + 0x74);
  
  if ((uint64_t)((*output_buffer - (longlong)uint_ptr) + output_buffer[2]) < 5) {
    rendering_system_expand_buffer(output_buffer, (longlong)uint_ptr + (4 - *output_buffer));
    uint_ptr = (uint32_t *)output_buffer[1];
  }
  
  *uint_ptr = header_value;
  uint_ptr = (uint32_t *)(output_buffer[1] + 4);
  output_buffer[1] = (longlong)uint_ptr;
  element_index = 0;
  read_index = 0;
  
  // 处理纹理数据
  if (*(int *)(object_data + 0x74) != 0) {
    do {
      array_size = *output_buffer;
      array_end = output_buffer[2];
      data_offset = *(longlong *)(object_data + 0x150);
      
      if ((uint64_t)((array_size - (longlong)uint_ptr) + array_end) < 0x41) {
        rendering_system_expand_buffer(output_buffer, (longlong)uint_ptr + (0x40 - array_size));
        uint_ptr = (uint32_t *)output_buffer[1];
        array_end = output_buffer[2];
        array_size = *output_buffer;
      }
      
      if ((uint64_t)((array_size - (longlong)uint_ptr) + array_end) < 0x11) {
        rendering_system_expand_buffer(output_buffer, (longlong)uint_ptr + (0x10 - array_size));
        uint_ptr = (uint32_t *)output_buffer[1];
      }
      
      // 写入纹理坐标数据
      *uint_ptr = *(uint32_t *)(element_index + data_offset);
      output_buffer[1] = output_buffer[1] + 4;
      *(uint32_t *)output_buffer[1] = *(uint32_t *)(element_index + 4 + data_offset);
      output_buffer[1] = output_buffer[1] + 4;
      *(uint32_t *)output_buffer[1] = *(uint32_t *)(element_index + 8 + data_offset);
      output_buffer[1] = output_buffer[1] + 4;
      *(uint32_t *)output_buffer[1] = *(uint32_t *)(element_index + 0xc + data_offset);
      uint_ptr = (uint32_t *)(output_buffer[1] + 4);
      output_buffer[1] = (longlong)uint_ptr;
      
      // 写入UV数据
      if ((uint64_t)((*output_buffer - (longlong)uint_ptr) + output_buffer[2]) < 0x11) {
        rendering_system_expand_buffer(output_buffer, (longlong)uint_ptr + (0x10 - *output_buffer));
        uint_ptr = (uint32_t *)output_buffer[1];
      }
      
      *uint_ptr = *(uint32_t *)(element_index + 0x10 + data_offset);
      output_buffer[1] = output_buffer[1] + 4;
      *(uint32_t *)output_buffer[1] = *(uint32_t *)(element_index + 0x14 + data_offset);
      output_buffer[1] = output_buffer[1] + 4;
      *(uint32_t *)output_buffer[1] = *(uint32_t *)(element_index + 0x18 + data_offset);
      output_buffer[1] = output_buffer[1] + 4;
      *(uint32_t *)output_buffer[1] = *(uint32_t *)(element_index + 0x1c + data_offset);
      uint_ptr = (uint32_t *)(output_buffer[1] + 4);
      output_buffer[1] = (longlong)uint_ptr;
      
      // 写入法线数据
      if ((uint64_t)((*output_buffer - (longlong)uint_ptr) + output_buffer[2]) < 0x11) {
        rendering_system_expand_buffer(output_buffer, (longlong)uint_ptr + (0x10 - *output_buffer));
        uint_ptr = (uint32_t *)output_buffer[1];
      }
      
      *uint_ptr = *(uint32_t *)(element_index + 0x20 + data_offset);
      output_buffer[1] = output_buffer[1] + 4;
      *(uint32_t *)output_buffer[1] = *(uint32_t *)(element_index + 0x24 + data_offset);
      output_buffer[1] = output_buffer[1] + 4;
      *(uint32_t *)output_buffer[1] = *(uint32_t *)(element_index + 0x28 + data_offset);
      output_buffer[1] = output_buffer[1] + 4;
      *(uint32_t *)output_buffer[1] = *(uint32_t *)(element_index + 0x2c + data_offset);
      uint_ptr = (uint32_t *)(output_buffer[1] + 4);
      output_buffer[1] = (longlong)uint_ptr;
      
      // 写入切线数据
      if ((uint64_t)((*output_buffer - (longlong)uint_ptr) + output_buffer[2]) < 0x11) {
        rendering_system_expand_buffer(output_buffer, (longlong)uint_ptr + (0x10 - *output_buffer));
        uint_ptr = (uint32_t *)output_buffer[1];
      }
      
      element_count_uint = (uint32_t)read_index + 1;
      *uint_ptr = *(uint32_t *)(element_index + 0x30 + data_offset);
      output_buffer[1] = output_buffer[1] + 4;
      *(uint32_t *)output_buffer[1] = *(uint32_t *)(element_index + 0x34 + data_offset);
      output_buffer[1] = output_buffer[1] + 4;
      *(uint32_t *)output_buffer[1] = *(uint32_t *)(element_index + 0x38 + data_offset);
      output_buffer[1] = output_buffer[1] + 4;
      *(uint32_t *)output_buffer[1] = *(uint32_t *)(element_index + 0x3c + data_offset);
      uint_ptr = (uint32_t *)(output_buffer[1] + 4);
      output_buffer[1] = (longlong)uint_ptr;
      element_index = element_index + 0x40;
      read_index = (uint64_t)element_count_uint;
    } while (element_count_uint < *(uint *)(object_data + 0x74));
  }
  
  // 写入材质数据
  header_value = *(uint32_t *)(object_data + 0x78);
  if ((uint64_t)((*output_buffer - (longlong)uint_ptr) + output_buffer[2]) < 5) {
    rendering_system_expand_buffer(output_buffer, (longlong)uint_ptr + (4 - *output_buffer));
    uint_ptr = (uint32_t *)output_buffer[1];
  }
  
  *uint_ptr = header_value;
  uint_ptr = (uint32_t *)(output_buffer[1] + 4);
  output_buffer[1] = (longlong)uint_ptr;
  
  // 处理材质属性
  if (*(int *)(object_data + 0x78) != 0) {
    do {
      element_count = (int)element_index;
      array_size = *(longlong *)(object_data + 0x170);
      
      if ((uint64_t)((*output_buffer - (longlong)uint_ptr) + output_buffer[2]) < 2) {
        rendering_system_expand_buffer(output_buffer, (uint8_t *)((longlong)uint_ptr + (1 - *output_buffer)));
        uint_ptr = (uint32_t *)output_buffer[1];
      }
      
      element_count_uint = element_count + 1;
      element_index = (uint64_t)element_count_uint;
      *(uint8_t *)uint_ptr = *(uint8_t *)(element_count + array_size);
      uint_ptr = (uint32_t *)(output_buffer[1] + 1);
      output_buffer[1] = (longlong)uint_ptr;
    } while (element_count_uint < *(uint *)(object_data + 0x78));
  }
  
  // 写入最终属性
  header_value = *(uint32_t *)(object_data + 0x6c);
  if ((uint64_t)((*output_buffer - (longlong)uint_ptr) + output_buffer[2]) < 5) {
    rendering_system_expand_buffer(output_buffer, (uint8_t *)((longlong)uint_ptr + (4 - *output_buffer)));
    uint_ptr = (uint32_t *)output_buffer[1];
  }
  
  *uint_ptr = header_value;
  output_buffer[1] = output_buffer[1] + 4;
  rendering_system_serialize_data_block(output_buffer, object_data + 0x110);
  uint_ptr = (uint32_t *)output_buffer[1];
  header_value = *(uint32_t *)(object_data + 0x70);
  
  if ((uint64_t)((*output_buffer - (longlong)uint_ptr) + output_buffer[2]) < 5) {
    rendering_system_expand_buffer(output_buffer, (longlong)uint_ptr + (4 - *output_buffer));
    *(uint32_t *)output_buffer[1] = header_value;
  }
  else {
    *uint_ptr = header_value;
  }
  
  output_buffer[1] = output_buffer[1] + 4;
  return;
}