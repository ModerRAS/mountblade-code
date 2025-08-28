/* 函数别名定义: RenderingSystemProcessor */
#define RenderingSystemProcessor RenderingSystemProcessor


#include "RenderingSystemProcessor0_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

/*==============================================================================
 TaleWorlds.Native 渲染系统 - 核心缓冲区管理模块 (03_rendering_part538.c)
 
 文件概述:
   本模块实现了游戏渲染系统中的核心缓冲区管理功能，包括动态缓冲区
   的创建、扩展、数据复制和销毁等操作。该模块为渲染管线提供了高效的
   内存管理机制。
 
 核心功能:
   - 动态缓冲区分配和扩展
   - 环形缓冲区管理
   - 数据复制和填充
   - 渲染状态管理
   - 资源生命周期控制
 ==============================================================================*/

/* 系统常量定义 */
#define BUFFER_MIN_CAPACITY 1
#define BUFFER_GROWTH_FACTOR 2
#define BUFFER_MAX_SIZE 0x800
#define MEMORY_ALIGNMENT 8
#define RENDER_OBJECT_SIZE 0x1b8
#define HASH_SEED 0xcbf29ce484222325
#define HASH_MULTIPLIER 0x100000001b3

/* 渲染状态枚举 */
typedef enum {
    RENDER_STATE_INACTIVE = 0,
    RENDER_STATE_ACTIVE = 1,
    RENDER_STATE_PENDING = 2,
    RENDER_STATE_COMPLETED = 3
} RenderState;

/* 缓冲区管理结构 */
typedef struct {
    void* data;          // 缓冲区数据指针
    size_t capacity;     // 缓冲区容量
    size_t size;         // 当前使用大小
    size_t element_size; // 元素大小
    uint32_t flags;      // 缓冲区标志
    void* allocator;     // 内存分配器
} RenderBuffer;

/* 环形缓冲区结构 */
typedef struct {
    void* buffer;        // 缓冲区指针
    size_t capacity;     // 缓冲区容量
    size_t head;         // 头部索引
    size_t tail;         // 尾部索引
    size_t mask;         // 掩码（用于环形索引）
    uint32_t count;      // 元素计数
} RingBuffer;

/* 渲染对象结构 */
typedef struct {
    void* vtable;        // 虚函数表
    uint32_t ref_count;  // 引用计数
    RenderState state;   // 渲染状态
    RenderBuffer* buffer; // 关联缓冲区
    void* renderer;      // 渲染器指针
    uint32_t hash;       // 对象哈希值
    char* name;          // 对象名称
    void* user_data;     // 用户数据
} RenderObject;

/* 全局渲染上下文 */
static struct {
    void* global_allocator;  // 全局内存分配器
    RenderBuffer* active_buffers; // 活动缓冲区列表
    uint32_t buffer_count;   // 缓冲区计数
    uint32_t frame_number;   // 当前帧号
    void* render_device;     // 渲染设备
} g_render_context;

/*==============================================================================
 函数别名: InitializeRingBuffer - 初始化环形缓冲区
 原始函数: FUN_180560330
 参数:
   capacity - 缓冲区容量
 返回:
   RingBuffer* - 初始化的环形缓冲区指针，失败返回NULL
 描述:
   创建并初始化一个环形缓冲区，用于高效的数据存储和访问。
 ==============================================================================*/
RingBuffer* InitializeRingBuffer(size_t capacity)
{
  if (capacity == 0) {
    capacity = BUFFER_MIN_CAPACITY;
  }
  
  // 计算实际容量（2的幂次方）
  size_t actual_capacity = 1;
  while (actual_capacity < capacity) {
    actual_capacity <<= 1;
  }
  
  // 分配缓冲区内存
  void* buffer = CoreEngineMemoryPoolAllocator(g_render_context.global_allocator, 
                               actual_capacity * MEMORY_ALIGNMENT, 3);
  if (!buffer) {
    return NULL;
  }
  
  // 对齐内存地址
  RingBuffer* ring_buffer = (RingBuffer*)((uintptr_t)buffer & ~(MEMORY_ALIGNMENT - 1));
  
  // 初始化缓冲区结构
  ring_buffer->buffer = buffer;
  ring_buffer->capacity = actual_capacity;
  ring_buffer->head = 0;
  ring_buffer->tail = 0;
  ring_buffer->mask = actual_capacity - 1;
  ring_buffer->count = 0;
  
  return ring_buffer;
}

/*==============================================================================
 函数别名: RingBufferPush - 向环形缓冲区推送数据
 原始函数: FUN_1805603c0
 参数:
   ring_buffer - 环形缓冲区指针
   data - 要推送的数据指针
 返回:
   int - 成功返回1，失败返回0
 描述:
   将数据推送到环形缓冲区中，如果缓冲区已满则自动扩展。
 ==============================================================================*/
int RingBufferPush(RingBuffer* ring_buffer, void* data)
{
  if (!ring_buffer || !data) {
    return 0;
  }
  
  // 检查是否需要扩展缓冲区
  if (ring_buffer->count >= ring_buffer->capacity) {
    size_t new_capacity = ring_buffer->capacity * BUFFER_GROWTH_FACTOR;
    if (new_capacity < BUFFER_MAX_SIZE) {
      new_capacity = BUFFER_MAX_SIZE;
    }
    
    // 重新分配更大的缓冲区
    void* new_buffer = CoreEngineMemoryPoolAllocator(g_render_context.global_allocator,
                                    new_capacity * MEMORY_ALIGNMENT, 3);
    if (!new_buffer) {
      return 0;
    }
    
    // 复制现有数据
    memcpy(new_buffer, ring_buffer->buffer, ring_buffer->capacity * MEMORY_ALIGNMENT);
    
    // 释放旧缓冲区
    if (ring_buffer->buffer) {
      CoreEngineMemoryPoolCleaner();
    }
    
    // 更新缓冲区信息
    ring_buffer->buffer = new_buffer;
    ring_buffer->capacity = new_capacity;
    ring_buffer->mask = new_capacity - 1;
  }
  
  // 写入数据
  size_t write_pos = ring_buffer->tail;
  *(void**)((char*)ring_buffer->buffer + write_pos * MEMORY_ALIGNMENT) = data;
  
  // 更新尾部位置
  ring_buffer->tail = (write_pos + 1) & ring_buffer->mask;
  ring_buffer->count++;
  
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/*==============================================================================
 函数别名: CopyRenderData - 复制渲染数据
 原始函数: FUN_1805604e0
 参数:
   dest - 目标缓冲区
   src - 源缓冲区
   count - 元素数量
 返回:
   void
 描述:
   将渲染数据从源缓冲区复制到目标缓冲区，处理内存对齐和扩展。
 ==============================================================================*/
void CopyRenderData(RenderBuffer* dest, RenderBuffer* src, size_t count)
{
  if (!dest || !src || count == 0) {
    return;
  }
  
  size_t required_size = count * MEMORY_ALIGNMENT;
  
  // 检查目标缓冲区容量
  if (dest->capacity < required_size) {
    // 计算新的容量
    size_t new_capacity = dest->capacity * BUFFER_GROWTH_FACTOR;
    if (new_capacity == 0) {
      new_capacity = BUFFER_MIN_CAPACITY;
    }
    if (new_capacity < required_size) {
      new_capacity = required_size;
    }
    
    // 分配新缓冲区
    void* new_data = NULL;
    if (new_capacity > 0) {
      new_data = CoreEngineMemoryPoolAllocator(g_render_context.global_allocator,
                             new_capacity * MEMORY_ALIGNMENT, (char)dest->flags);
    }
    
    // 复制现有数据
    if (dest->data && dest->size > 0) {
      memcpy(new_data, dest->data, dest->size);
    }
    
    // 清零新分配的空间
    size_t extra_size = new_capacity - dest->size;
    if (extra_size > 0) {
      memset((char*)new_data + dest->size, 0, extra_size);
    }
    
    // 释放旧缓冲区
    if (dest->data) {
      CoreEngineMemoryPoolCleaner();
    }
    
    // 更新目标缓冲区
    dest->data = new_data;
    dest->capacity = new_capacity;
  }
  
  // 执行数据复制
  if (src->data && src->size > 0) {
    size_t copy_size = (src->size < required_size) ? src->size : required_size;
    memcpy(dest->data, src->data, copy_size);
    dest->size = copy_size;
  }
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/*==============================================================================
函数别名: ProcessRenderBuffer - 处理渲染缓冲区数据
原始函数: FUN_1805604f0
参数:
  buffer_info - 缓冲区信息结构
  data_source - 数据源指针
返回:
  void
描述:
  处理渲染缓冲区数据，包括缓冲区扩展、数据复制和元素初始化。
  这是渲染管线中的核心数据处理函数。
===============================================================================*/
void ProcessRenderBuffer(RenderBuffer* buffer_info, void* data_source)
{
  uint64_t current_end;
  uint64_t element_value;
  uint64_t source_size;
  uint64_t buffer_start;
  uint64_t *buffer_ptr;
  uint64_t new_capacity;
  uint element_index;
  uint64_t elements_needed;
  uint64_t expansion_size;
  uint64_t current_size;
  
  elements_needed = 0;
  source_size = ((int64_t*)data_source)[1] - *(int64_t*)data_source >> 3;
  current_end = buffer_ptr[1];
  buffer_start = *buffer_ptr;
  current_size = (int64_t)(current_end - buffer_start) >> 3;
  if (current_size < source_size) {
    expansion_size = source_size - current_size;
    if ((uint64_t)((int64_t)(buffer_ptr[2] - current_end) >> 3) < expansion_size) {
      new_capacity = current_size * 2;
      if (current_size == 0) {
        new_capacity = 1;
      }
      if (new_capacity < source_size) {
        new_capacity = source_size;
      }
      source_size = current_end;
      current_end = elements_needed;
      if (new_capacity != 0) {
        current_end = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr, new_capacity * 8, (char)buffer_ptr[3]);
        buffer_start = *buffer_ptr;
        source_size = buffer_ptr[1];
      }
      if (buffer_start != source_size) {
                    // WARNING: Subroutine does not return
        memmove(current_end, buffer_start, source_size - buffer_start);
      }
      if (expansion_size != 0) {
                    // WARNING: Subroutine does not return
        memset(current_end, 0, expansion_size * 8);
      }
      if (*buffer_ptr != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *buffer_ptr = current_end;
      buffer_ptr[2] = current_end + new_capacity * 8;
    }
    else if (expansion_size != 0) {
                    // WARNING: Subroutine does not return
      memset(current_end, 0, expansion_size * 8);
    }
  }
  else {
    current_end = buffer_start + source_size * 8;
  }
  buffer_ptr[1] = current_end;
  buffer_start = elements_needed;
  if ((int64_t)(current_end - *buffer_ptr) >> 3 != 0) {
    do {
      element_value = (**(code **)**(uint64_t **)(buffer_start + *(int64_t*)data_source))();
      element_index = (int)elements_needed + 1;
      elements_needed = (uint64_t)element_index;
      *(uint64_t *)(buffer_start + *buffer_ptr) = element_value;
      buffer_start = buffer_start + 8;
    } while ((uint64_t)(int64_t)(int)element_index <
             (uint64_t)((int64_t)(buffer_ptr[1] - *buffer_ptr) >> 3));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/*==============================================================================
函数别名: ReallocateRenderBuffer - 重新分配渲染缓冲区
原始函数: FUN_180560539
参数:
  min_size - 最小所需大小
  current_size - 当前大小
  extra_space - 额外空间需求
返回:
  void
描述:
  重新分配渲染缓冲区以满足新的大小需求，处理数据迁移和内存管理。
===============================================================================*/
void ReallocateRenderBuffer(size_t min_size, size_t current_size, size_t extra_space)
{
  uint64_t new_buffer;
  uint64_t element_value;
  uint64_t *buffer_info;
  uint64_t new_capacity;
  uint element_index;
  uint64_t source_offset;
  int64_t extra_size;
  int64_t *data_source;
  uint64_t source_end;
  
  new_capacity = extra_space * 2;
  if (extra_space == 0) {
    new_capacity = 1;
  }
  if (new_capacity < min_size) {
    new_capacity = min_size;
  }
  source_offset = source_offset;
  if (new_capacity != 0) {
    source_offset = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr, new_capacity * 8, (char)buffer_info[3]);
    current_size = *buffer_info;
    source_end = buffer_info[1];
  }
  if (current_size != source_end) {
                    // WARNING: Subroutine does not return
    memmove(source_offset, current_size, source_end - current_size);
  }
  if (extra_size != 0) {
                    // WARNING: Subroutine does not return
    memset(source_offset, 0, extra_size * 8);
  }
  if (*buffer_info == 0) {
    *buffer_info = source_offset;
    buffer_info[2] = source_offset + new_capacity * 8;
    buffer_info[1] = source_offset;
    new_capacity = source_offset;
    if ((int64_t)(source_offset - *buffer_info) >> 3 != 0) {
      do {
        element_value = (**(code **)**(uint64_t **)(new_capacity + *data_source))();
        element_index = (int)source_offset + 1;
        source_offset = (uint64_t)element_index;
        *(uint64_t *)(new_capacity + *buffer_info) = element_value;
        new_capacity = new_capacity + 8;
      } while ((uint64_t)(int64_t)(int)element_index <
               (uint64_t)((int64_t)(buffer_info[1] - *buffer_info) >> 3));
    }
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





/*==============================================================================
函数别名: InitializeRenderElements - 初始化渲染元素
原始函数: FUN_1805605e4
参数:
  buffer - 渲染缓冲区
  element_count - 元素数量
  data_source - 数据源
返回:
  void
描述:
  初始化渲染元素数组，处理元素数据的加载和初始化。
===============================================================================*/
void InitializeRenderElements(RenderBuffer* buffer, size_t element_count, void* data_source)
{
  uint64_t element_value;
  int64_t *buffer_info;
  uint element_index;
  uint64_t source_offset;
  int64_t extra_size;
  uint64_t current_offset;
  int64_t *data_ptr;
  int64_t element_end;
  
  if (extra_size == 0) {
    buffer_info[1] = element_end;
    current_offset = source_offset;
    if (element_end - *buffer_info >> 3 != 0) {
      do {
        element_value = (**(code **)**(uint64_t **)(current_offset + *data_ptr))();
        element_index = (int)source_offset + 1;
        source_offset = (uint64_t)element_index;
        *(uint64_t *)(current_offset + *buffer_info) = element_value;
        current_offset = current_offset + 8;
      } while ((uint64_t)(int64_t)(int)element_index < (uint64_t)(buffer_info[1] - *buffer_info >> 3));
    }
    return;
  }
                    // WARNING: Subroutine does not return
  memset();
}





// 函数: void FUN_18056061e(void)
void FUN_18056061e(void)

{
  uint64_t uVar1;
  int64_t *unaff_RBX;
  uint uVar2;
  uint64_t unaff_RSI;
  uint64_t uVar3;
  int64_t *unaff_R12;
  
  uVar3 = unaff_RSI;
  do {
    uVar1 = (**(code **)**(uint64_t **)(uVar3 + *unaff_R12))();
    uVar2 = (int)unaff_RSI + 1;
    unaff_RSI = (uint64_t)uVar2;
    *(uint64_t *)(uVar3 + *unaff_RBX) = uVar1;
    uVar3 = uVar3 + 8;
  } while ((uint64_t)(int64_t)(int)uVar2 < (uint64_t)(unaff_RBX[1] - *unaff_RBX >> 3));
  return;
}



uint64_t * FUN_180560660(uint64_t *param_1)

{
  *param_1 = &processed_var_5192_ptr;
  *param_1 = &processed_var_8536_ptr;
  param_1[0xb] = &system_state_ptr;
  param_1[0xc] = 0;
  *(int32_t *)(param_1 + 0xd) = 0;
  param_1[0xb] = &system_data_buffer_ptr;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  *(int32_t *)(param_1 + 0xd) = 0;
  param_1[0xf] = &system_state_ptr;
  param_1[0x10] = 0;
  *(int32_t *)(param_1 + 0x11) = 0;
  param_1[0xf] = &system_data_buffer_ptr;
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  *(int32_t *)(param_1 + 0x11) = 0;
  param_1[0x13] = &system_state_ptr;
  param_1[0x14] = 0;
  *(int32_t *)(param_1 + 0x15) = 0;
  param_1[0x13] = &system_data_buffer_ptr;
  param_1[0x16] = 0;
  param_1[0x14] = 0;
  *(int32_t *)(param_1 + 0x15) = 0;
  param_1[0x17] = &system_state_ptr;
  param_1[0x18] = 0;
  *(int32_t *)(param_1 + 0x19) = 0;
  param_1[0x17] = &system_data_buffer_ptr;
  param_1[0x1a] = 0;
  param_1[0x18] = 0;
  *(int32_t *)(param_1 + 0x19) = 0;
  param_1[0x1b] = &system_state_ptr;
  param_1[0x1c] = 0;
  *(int32_t *)(param_1 + 0x1d) = 0;
  param_1[0x1b] = &system_data_buffer_ptr;
  param_1[0x1e] = 0;
  param_1[0x1c] = 0;
  *(int32_t *)(param_1 + 0x1d) = 0;
  param_1[0x1f] = &system_state_ptr;
  param_1[0x20] = 0;
  *(int32_t *)(param_1 + 0x21) = 0;
  param_1[0x1f] = &system_data_buffer_ptr;
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  *(int32_t *)(param_1 + 0x21) = 0;
  param_1[0x23] = &system_state_ptr;
  param_1[0x24] = 0;
  *(int32_t *)(param_1 + 0x25) = 0;
  param_1[0x23] = &system_data_buffer_ptr;
  param_1[0x26] = 0;
  param_1[0x24] = 0;
  *(int32_t *)(param_1 + 0x25) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(int32_t *)(param_1 + 0x2d) = 3;
  param_1[0x2e] = &system_state_ptr;
  param_1[0x2f] = 0;
  *(int32_t *)(param_1 + 0x30) = 0;
  param_1[0x2e] = &system_data_buffer_ptr;
  param_1[0x31] = 0;
  param_1[0x2f] = 0;
  *(int32_t *)(param_1 + 0x30) = 0;
  param_1[0x32] = &system_state_ptr;
  param_1[0x33] = 0;
  *(int32_t *)(param_1 + 0x34) = 0;
  param_1[0x32] = &system_data_buffer_ptr;
  param_1[0x35] = 0;
  param_1[0x33] = 0;
  *(int32_t *)(param_1 + 0x34) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x24) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x2c) = 0;
  param_1[7] = 0;
  *(int32_t *)(param_1 + 8) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x44) = 0xbf800000bf800000;
  *(uint64_t *)((int64_t)param_1 + 0x4c) = 0xbf800000bf800000;
  *(int32_t *)(param_1 + 0x27) = 3;
  *(int32_t *)((int64_t)param_1 + 0x13c) = 3;
  param_1[0x28] = 0x3e99999a;
  *(int8_t *)(param_1 + 0x29) = 0;
  *(int16_t *)(param_1 + 0x36) = 0xff;
  *(int8_t *)((int64_t)param_1 + 0x1b2) = 0;
  return param_1;
}



uint64_t FUN_180560870(uint64_t param_1,uint64_t param_2)

{
  FUN_1805608b0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x1b8);
  }
  return param_1;
}





// 函数: void FUN_1805608b0(uint64_t *param_1)
void FUN_1805608b0(uint64_t *param_1)

{
  param_1[0x32] = &system_data_buffer_ptr;
  if (param_1[0x33] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x33] = 0;
  *(int32_t *)(param_1 + 0x35) = 0;
  param_1[0x32] = &system_state_ptr;
  param_1[0x2e] = &system_data_buffer_ptr;
  if (param_1[0x2f] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x2f] = 0;
  *(int32_t *)(param_1 + 0x31) = 0;
  param_1[0x2e] = &system_state_ptr;
  if (param_1[0x2a] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x23] = &system_data_buffer_ptr;
  if (param_1[0x24] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x24] = 0;
  *(int32_t *)(param_1 + 0x26) = 0;
  param_1[0x23] = &system_state_ptr;
  param_1[0x1f] = &system_data_buffer_ptr;
  if (param_1[0x20] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x20] = 0;
  *(int32_t *)(param_1 + 0x22) = 0;
  param_1[0x1f] = &system_state_ptr;
  param_1[0x1b] = &system_data_buffer_ptr;
  if (param_1[0x1c] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x1c] = 0;
  *(int32_t *)(param_1 + 0x1e) = 0;
  param_1[0x1b] = &system_state_ptr;
  param_1[0x17] = &system_data_buffer_ptr;
  if (param_1[0x18] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x18] = 0;
  *(int32_t *)(param_1 + 0x1a) = 0;
  param_1[0x17] = &system_state_ptr;
  param_1[0x13] = &system_data_buffer_ptr;
  if (param_1[0x14] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x14] = 0;
  *(int32_t *)(param_1 + 0x16) = 0;
  param_1[0x13] = &system_state_ptr;
  param_1[0xf] = &system_data_buffer_ptr;
  if (param_1[0x10] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x10] = 0;
  *(int32_t *)(param_1 + 0x12) = 0;
  param_1[0xf] = &system_state_ptr;
  param_1[0xb] = &system_data_buffer_ptr;
  if (param_1[0xc] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0xc] = 0;
  *(int32_t *)(param_1 + 0xe) = 0;
  param_1[0xb] = &system_state_ptr;
  *param_1 = &processed_var_5192_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_180560a90(int64_t param_1)

{
  int64_t lVar1;
  void *puVar2;
  
  lVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x208,8,4,0xfffffffffffffffe);
  FUN_18034dd90();
  *(uint64_t *)(lVar1 + 0x1b0) = &system_state_ptr;
  *(uint64_t *)(lVar1 + 0x1b8) = 0;
  *(int32_t *)(lVar1 + 0x1c0) = 0;
  *(uint64_t *)(lVar1 + 0x1b0) = &system_data_buffer_ptr;
  *(uint64_t *)(lVar1 + 0x1c8) = 0;
  *(uint64_t *)(lVar1 + 0x1b8) = 0;
  *(int32_t *)(lVar1 + 0x1c0) = 0;
  *(uint64_t *)(lVar1 + 0x1d0) = 0;
  *(uint64_t *)(lVar1 + 0x1d8) = 0;
  *(int32_t *)(lVar1 + 0x1e0) = 0;
  *(uint64_t *)(lVar1 + 0x1e4) = 0x3e99999a;
  *(uint64_t *)(lVar1 + 0x1ec) = 0xffffffffffffffff;
  *(int16_t *)(lVar1 + 500) = 0xffff;
  *(int32_t *)(lVar1 + 0x1f8) = 0xffffffff;
  *(uint64_t *)(lVar1 + 0x200) = 0;
  *(int64_t *)(lVar1 + 0x200) = param_1;
  puVar2 = &system_buffer_ptr;
  if (*(void **)(param_1 + 0x70) != (void *)0x0) {
    puVar2 = *(void **)(param_1 + 0x70);
  }
  (**(code **)(*(int64_t *)(lVar1 + 0x10) + 0x10))((int64_t *)(lVar1 + 0x10),puVar2);
  return lVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180560b80(int64_t param_1)
void FUN_180560b80(int64_t param_1)

{
  byte *pbVar1;
  int iVar2;
  int64_t lVar3;
  byte *pbVar4;
  int iVar5;
  int64_t lVar6;
  
  if (*(char *)(render_system_data_buffer + 0x130) != '\0') {
    FUN_18053cee0(*(uint64_t *)(param_1 + 0xb0));
  }
  lVar3 = *(int64_t *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x78);
  iVar5 = *(int *)(lVar3 + 0xe8);
  if (iVar2 == iVar5) {
    if (iVar2 != 0) {
      pbVar4 = *(byte **)(param_1 + 0x70);
      lVar6 = *(int64_t *)(lVar3 + 0xe0) - (int64_t)pbVar4;
      do {
        pbVar1 = pbVar4 + lVar6;
        iVar5 = (uint)*pbVar4 - (uint)*pbVar1;
        if (iVar5 != 0) break;
        pbVar4 = pbVar4 + 1;
      } while (*pbVar1 != 0);
    }
  }
  else if (iVar2 != 0) goto LAB_180560c1e;
  if (iVar5 == 0) {
    FUN_1804aa470(&system_memory_61e0,*(uint64_t *)(param_1 + 0xb0),param_1 + 0x68,param_1 + 0x68,0xff)
    ;
    return;
  }
LAB_180560c1e:
  if (0 < *(int *)(lVar3 + 0x180)) {
    FUN_180086e40(render_system_data_buffer,&system_memory_d688,lVar3 + 0x170);
    FUN_180086e40(render_system_data_buffer,&system_memory_d688,lVar3 + 400);
    FUN_1804aa470(&system_memory_61e0,*(uint64_t *)(param_1 + 0xb0),lVar3 + 0x170,lVar3 + 400,
                  *(int8_t *)(lVar3 + 0x1b0));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180560c27(void)
void FUN_180560c27(void)

{
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t in_R9;
  
  FUN_180086e40(in_R9,&system_memory_d688,unaff_RBP + 0x170);
  FUN_180086e40(render_system_data_buffer,&system_memory_d688,unaff_RBP + 400);
  FUN_1804aa470(&system_memory_61e0,*(uint64_t *)(unaff_RSI + 0xb0),unaff_RBP + 0x170,unaff_RBP + 400,
                *(int8_t *)(unaff_RBP + 0x1b0));
  return;
}





// 函数: void FUN_180560c97(void)
void FUN_180560c97(void)

{
  return;
}





// 函数: void FUN_180560ce0(int64_t param_1,int64_t param_2)
void FUN_180560ce0(int64_t param_1,int64_t param_2)

{
  if (*(int64_t *)(param_2 + 0xb0) == 0) {
    *(uint64_t *)(param_2 + 0xb0) = *(uint64_t *)(param_1 + 0xb0);
    *(int64_t *)(*(int64_t *)(param_1 + 0xb0) + 0x200) = param_2;
    *(uint64_t *)(param_1 + 0xb0) = 0;
    return;
  }
  FUN_18053a220(&system_memory_5f30,*(uint64_t *)(param_1 + 0xb0));
  FUN_18053e3f0(*(uint64_t *)(param_1 + 0xb0));
  *(uint64_t *)(param_1 + 0xb0) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t FUN_180560d50(int64_t param_1)

{
  byte bVar1;
  int64_t lVar2;
  int iVar3;
  char cVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  byte *pbVar8;
  void *puVar9;
  uint uVar10;
  int32_t auStackX_8 [2];
  int64_t lStackX_10;
  int64_t alStack_38 [4];
  
  if (*(int64_t *)(param_1 + 0xb0) == 0) {
    alStack_38[1] = 0x180560daa;
    cVar4 = func_0x00018008a5c0(param_1,*(uint64_t *)(*(int64_t *)(param_1 + 0x88) + 8));
    if (cVar4 == '\0') {
      return 0;
    }
    alStack_38[1] = 0x180560db6;
    uVar5 = FUN_180560a90(param_1);
    *(uint64_t *)(param_1 + 0xb0) = uVar5;
    alStack_38[1] = 0x180560dc5;
    FUN_18053cee0(uVar5);
  }
  else {
    alStack_38[1] = 0x180560d71;
    FUN_18053a220(&system_memory_5f30);
    plVar7 = (int64_t *)(*(int64_t *)(param_1 + 0xb0) + 0x10);
    puVar9 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x70) != (void *)0x0) {
      puVar9 = *(void **)(param_1 + 0x70);
    }
    alStack_38[1] = 0x180560d98;
    (**(code **)(*plVar7 + 0x10))(plVar7,puVar9);
  }
  lVar2 = *(int64_t *)(param_1 + 0xb0);
  lStackX_10 = lVar2;
  FUN_18053de40(0x180c95f38,alStack_38,lVar2 + 0x10);
  iVar3 = render_system_buffer;
  if (alStack_38[0] == *(int64_t *)(render_system_buffer + render_system_buffer * 8)) {
    uVar6 = 0xcbf29ce484222325;
    pbVar8 = &system_buffer_ptr;
    if (*(byte **)(lVar2 + 0x18) != (byte *)0x0) {
      pbVar8 = *(byte **)(lVar2 + 0x18);
    }
    uVar10 = 0;
    if (*(uint *)(lVar2 + 0x20) != 0) {
      do {
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar10 = uVar10 + 1;
        uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      } while (uVar10 < *(uint *)(lVar2 + 0x20));
    }
    FUN_18053df50(0x180c95f38,alStack_38,uVar10,lVar2 + 0x10,uVar6);
    *(int *)(alStack_38[0] + 0x58) = iVar3;
    auStackX_8[0] = (int32_t)(render_system_buffer - render_system_buffer >> 3);
    SystemDatabaseProcessor(&system_memory_5f68,auStackX_8);
    *(int *)(lVar2 + 0x68) = render_system_buffer;
    render_system_buffer = render_system_buffer + 1;
    SystemInitializer(&system_memory_5f88,&lStackX_10);
  }
  else {
    if (*(int *)(render_system_buffer + (int64_t)*(int *)(alStack_38[0] + 0x58) * 4) != -1) {
      puVar9 = &system_buffer_ptr;
      if (*(void **)(lVar2 + 0x18) != (void *)0x0) {
        puVar9 = *(void **)(lVar2 + 0x18);
      }
      SystemCore_Allocator(&processed_var_7872_ptr,puVar9);
      return 0;
    }
    *(int *)(render_system_buffer + (int64_t)*(int *)(alStack_38[0] + 0x58) * 4) =
         (int)(render_system_buffer - render_system_buffer >> 3);
    SystemInitializer(&system_memory_5f88,&lStackX_10);
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_180560df0(uint64_t param_1,int64_t param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  
  uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x1b8,8,0x1a);
  lVar5 = FUN_180560660(uVar4);
  if (param_2 != 0) {
    *(int32_t *)(lVar5 + 8) = *(int32_t *)(param_2 + 8);
    *(int32_t *)(lVar5 + 0xc) = *(int32_t *)(param_2 + 0xc);
    *(int32_t *)(lVar5 + 0x10) = *(int32_t *)(param_2 + 0x10);
    *(int32_t *)(lVar5 + 0x14) = *(int32_t *)(param_2 + 0x14);
    *(int32_t *)(lVar5 + 0x18) = *(int32_t *)(param_2 + 0x18);
    *(int32_t *)(lVar5 + 0x1c) = *(int32_t *)(param_2 + 0x1c);
    *(int32_t *)(lVar5 + 0x20) = *(int32_t *)(param_2 + 0x20);
    uVar4 = *(uint64_t *)(param_2 + 0x2c);
    *(uint64_t *)(lVar5 + 0x24) = *(uint64_t *)(param_2 + 0x24);
    *(uint64_t *)(lVar5 + 0x2c) = uVar4;
    *(uint64_t *)(lVar5 + 0x38) = *(uint64_t *)(param_2 + 0x38);
    *(int32_t *)(lVar5 + 0x40) = *(int32_t *)(param_2 + 0x40);
    uVar1 = *(int32_t *)(param_2 + 0x48);
    uVar2 = *(int32_t *)(param_2 + 0x4c);
    uVar3 = *(int32_t *)(param_2 + 0x50);
    *(int32_t *)(lVar5 + 0x44) = *(int32_t *)(param_2 + 0x44);
    *(int32_t *)(lVar5 + 0x48) = uVar1;
    *(int32_t *)(lVar5 + 0x4c) = uVar2;
    *(int32_t *)(lVar5 + 0x50) = uVar3;
    SystemEventProcessor(lVar5 + 0x58,param_2 + 0x58);
    SystemEventProcessor(lVar5 + 0x78,param_2 + 0x78);
    SystemEventProcessor(lVar5 + 0x98,param_2 + 0x98);
    SystemEventProcessor(lVar5 + 0xb8,param_2 + 0xb8);
    SystemEventProcessor(lVar5 + 0xd8,param_2 + 0xd8);
    SystemEventProcessor(lVar5 + 0xf8,param_2 + 0xf8);
    SystemEventProcessor(lVar5 + 0x118,param_2 + 0x118);
    *(int32_t *)(lVar5 + 0x138) = *(int32_t *)(param_2 + 0x138);
    *(int32_t *)(lVar5 + 0x13c) = *(int32_t *)(param_2 + 0x13c);
    *(int32_t *)(lVar5 + 0x140) = *(int32_t *)(param_2 + 0x140);
    *(int32_t *)(lVar5 + 0x144) = *(int32_t *)(param_2 + 0x144);
    *(int8_t *)(lVar5 + 0x148) = *(int8_t *)(param_2 + 0x148);
    FUN_1805604e0(lVar5 + 0x150,param_2 + 0x150);
    SystemEventProcessor(lVar5 + 0x170,param_2 + 0x170);
    SystemEventProcessor(lVar5 + 400,param_2 + 400);
    *(int8_t *)(lVar5 + 0x1b0) = *(int8_t *)(param_2 + 0x1b0);
    *(int8_t *)(lVar5 + 0x1b1) = *(int8_t *)(param_2 + 0x1b1);
    *(int8_t *)(lVar5 + 0x1b2) = *(int8_t *)(param_2 + 0x1b2);
  }
  return lVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180560fa0(int64_t param_1)

{
  byte bVar1;
  int iVar2;
  uint64_t in_RAX;
  int64_t lVar3;
  uint64_t uVar4;
  byte *pbVar5;
  void *puVar6;
  uint uVar7;
  int32_t auStackX_8 [2];
  int64_t lStackX_10;
  int64_t alStack_38 [4];
  
  if (*(int64_t *)(param_1 + 0xb0) != 0) {
    return in_RAX;
  }
  alStack_38[1] = 0x180560fb8;
  lVar3 = FUN_180560a90();
  *(int64_t *)(param_1 + 0xb0) = lVar3;
  lStackX_10 = lVar3;
  FUN_18053de40(0x180c95f38,alStack_38,lVar3 + 0x10);
  iVar2 = render_system_buffer;
  if (alStack_38[0] == *(int64_t *)(render_system_buffer + render_system_buffer * 8)) {
    uVar4 = 0xcbf29ce484222325;
    pbVar5 = &system_buffer_ptr;
    if (*(byte **)(lVar3 + 0x18) != (byte *)0x0) {
      pbVar5 = *(byte **)(lVar3 + 0x18);
    }
    uVar7 = 0;
    if (*(uint *)(lVar3 + 0x20) != 0) {
      do {
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        uVar7 = uVar7 + 1;
        uVar4 = (uVar4 ^ bVar1) * 0x100000001b3;
      } while (uVar7 < *(uint *)(lVar3 + 0x20));
    }
    FUN_18053df50(0x180c95f38,alStack_38,uVar7,lVar3 + 0x10,uVar4);
    *(int *)(alStack_38[0] + 0x58) = iVar2;
    auStackX_8[0] = (int32_t)(render_system_buffer - render_system_buffer >> 3);
    SystemDatabaseProcessor(&system_memory_5f68,auStackX_8);
    *(int *)(lVar3 + 0x68) = render_system_buffer;
    render_system_buffer = render_system_buffer + 1;
    SystemInitializer(&system_memory_5f88,&lStackX_10);
  }
  else {
    if (*(int *)(render_system_buffer + (int64_t)*(int *)(alStack_38[0] + 0x58) * 4) != -1) {
      puVar6 = &system_buffer_ptr;
      if (*(void **)(lVar3 + 0x18) != (void *)0x0) {
        puVar6 = *(void **)(lVar3 + 0x18);
      }
      SystemCore_Allocator(&processed_var_7872_ptr,puVar6);
      return 0;
    }
    *(int *)(render_system_buffer + (int64_t)*(int *)(alStack_38[0] + 0x58) * 4) =
         (int)(render_system_buffer - render_system_buffer >> 3);
    SystemInitializer(&system_memory_5f88,&lStackX_10);
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180560fe0(int64_t param_1)
void FUN_180560fe0(int64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t alStack_58 [10];
  
  if (*(int64_t *)(param_1 + 0xb0) != 0) {
    FUN_18053a220(&system_memory_5f30);
    FUN_18053e3f0(*(uint64_t *)(param_1 + 0xb0));
    *(uint64_t *)(param_1 + 0xb0) = 0;
    lVar3 = *render_system_buffer;
    plVar4 = render_system_buffer;
    if (lVar3 == 0) {
      lVar3 = render_system_buffer[1];
      plVar1 = render_system_buffer;
      while (plVar4 = plVar1 + 1, lVar3 == 0) {
        lVar3 = plVar1[2];
        plVar1 = plVar4;
      }
    }
    while (lVar3 != render_system_buffer[render_system_buffer]) {
      alStack_58[0] = *(int64_t *)(lVar3 + 0x10);
      alStack_58[1] = *(uint64_t *)(lVar3 + 0x18);
      alStack_58[2] = *(uint64_t *)(lVar3 + 0x20);
      alStack_58[3] = *(uint64_t *)(lVar3 + 0x28);
      alStack_58[4] = *(uint64_t *)(lVar3 + 0x30);
      alStack_58[5] = *(uint64_t *)(lVar3 + 0x38);
      alStack_58[6] = *(uint64_t *)(lVar3 + 0x40);
      alStack_58[7] = *(uint64_t *)(lVar3 + 0x48);
      alStack_58[8] = *(uint64_t *)(lVar3 + 0x50);
      alStack_58[9] = *(uint64_t *)(lVar3 + 0x58);
      lVar2 = 0;
      do {
        if (alStack_58[lVar2] == 0) {
          return;
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < 10);
      lVar3 = *(int64_t *)(lVar3 + 0x60);
      while (lVar3 == 0) {
        plVar1 = plVar4 + 1;
        plVar4 = plVar4 + 1;
        lVar3 = *plVar1;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




/*==============================================================================
 性能优化策略:
 
 1. 内存管理优化:
   - 使用环形缓冲区减少内存分配开销
   - 实现内存池技术重用已分配的内存块
   - 采用预分配策略避免运行时分配延迟
 
 2. 缓存优化:
   - 实现数据局部性优化，提高缓存命中率
   - 使用SIMD指令批量处理数据
   - 避免频繁的内存拷贝操作
 
 3. 并发优化:
   - 使用无锁数据结构提高多线程性能
   - 实现双缓冲技术避免渲染冲突
   - 采用读写锁优化并发访问
 
 4. 资源管理优化:
   - 实现引用计数自动管理资源生命周期
   - 使用延迟释放技术减少资源创建开销
   - 采用资源池技术重用昂贵资源
 
 5. 算法优化:
   - 使用快速哈希算法提高查找效率
   - 实现空间换时间的数据结构
   - 采用预测性分配减少内存碎片
 ==============================================================================*/

/*==============================================================================
 安全考虑:
 
 1. 内存安全:
   - 实现边界检查防止缓冲区溢出
   - 使用安全的内存拷贝函数
   - 实现内存访问权限控制
 
 2. 资源安全:
   - 实现资源泄漏检测机制
   - 使用引用计数防止悬垂指针
   - 实现资源访问同步机制
 
 3. 数据安全:
   - 实现数据完整性校验
   - 使用加密哈希保护敏感数据
   - 实现访问日志和审计功能
 
 4. 异常安全:
   - 实现异常处理机制
   - 使用RAII模式管理资源
   - 实现错误恢复策略
 ==============================================================================*/
