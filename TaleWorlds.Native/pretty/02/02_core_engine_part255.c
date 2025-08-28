#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part255.c - 核心引擎模块第255部分
// 本文件包含2个函数，主要负责资源管理和系统初始化

// 函数映射表
#define initialize_resource_manager     FUN_18021fbb0
#define execute_system_shutdown         FUN_180220810
#define get_system_context              FUN_1800b0a10
#define trigger_cleanup_callback        SystemSecurityChecker
#define perform_system_termination      FUN_1808fd200

// 常量定义
#define RESOURCE_HANDLE_OFFSET         0x1c70
#define RESOURCE_CALLBACK_OFFSET       0x38
#define DEFAULT_RESOURCE_SIZE          0x220
#define DEFAULT_RESOURCE_FLAGS         0x3
#define MAX_RESOURCE_NAME_LENGTH       0x40

// 资源类型常量
#define RESOURCE_TYPE_TEXTURE          0x6d0
#define RESOURCE_TYPE_BUFFER           0x210
#define RESOURCE_TYPE_MEMORY           0x1000
#define RESOURCE_TYPE_SHADER           0x140
#define RESOURCE_TYPE_MESH             0x200
#define RESOURCE_TYPE_AUDIO            0x230
#define RESOURCE_TYPE_LARGE_BUFFER     0x8000
#define RESOURCE_TYPE_SMALL_BUFFER     0x70
#define RESOURCE_TYPE_STREAM           0x6000
#define RESOURCE_TYPE_CONFIG           0x80
#define RESOURCE_TYPE_TEMP             0x30
#define RESOURCE_TYPE_CACHE            0xe0
#define RESOURCE_TYPE_HEAP             0x1a00

// 资源ID常量
#define RESOURCE_ID_TEXTURE_BASE        0x9
#define RESOURCE_ID_BUFFER_BASE        0xd
#define RESOURCE_ID_MEMORY_BASE        0x14
#define RESOURCE_ID_SHADER_BASE        0x1c
#define RESOURCE_ID_MESH_BASE         0x10
#define RESOURCE_ID_AUDIO_BASE        0xf
#define RESOURCE_ID_LARGE_BUFFER_BASE 0xb
#define RESOURCE_ID_SMALL_BUFFER_BASE 0xe
#define RESOURCE_ID_STREAM_BASE        9
#define RESOURCE_ID_CONFIG_BASE       0x16
#define RESOURCE_ID_TEMP_BASE         0x14
#define RESOURCE_ID_CACHE_BASE        0x1a

// 全局变量引用
extern char *RESOURCE_NAME_TEXTURE;      // global_state_4328
extern char *RESOURCE_NAME_BUFFER;       // global_state_4400
extern char *RESOURCE_NAME_MEMORY;       // global_state_4416
extern char *RESOURCE_NAME_SHADER;       // global_state_4344
extern char *RESOURCE_NAME_MESH;         // global_state_4376
extern char *RESOURCE_NAME_AUDIO;        // global_state_4472
extern char *RESOURCE_NAME_LARGE_BUFFER; // global_state_4488
extern char *RESOURCE_NAME_SMALL_BUFFER; // global_state_4440
extern char *RESOURCE_NAME_STREAM;       // global_state_4456
extern char *RESOURCE_NAME_CONFIG;       // global_state_4560
extern char *RESOURCE_NAME_TEMP;         // global_state_4576
extern char *RESOURCE_NAME_CACHE;        // global_state_4504
extern char *RESOURCE_NAME_HEAP;         // global_state_4528

extern void *SYSTEM_STATE_ACTIVE;        // global_state_720
extern void *SYSTEM_CONTEXT_POINTER;     // global_state_3480

/**
 * 初始化资源管理器
 * 
 * 这个函数负责初始化游戏引擎的资源管理系统，包括：
 * 1. 分配各种类型的资源（纹理、缓冲区、内存等）
 * 2. 设置资源清理回调函数
 * 3. 配置资源参数和属性
 * 4. 建立资源管理上下文
 * 
 * @param engine_context 引擎上下文指针，包含引擎状态和配置信息
 */
void initialize_resource_manager(int64_t engine_context)
{
  // 堆栈保护变量
  uint64_t stack_guard_value;
  uint64_t *context_pointer;
  int8_t resource_name_buffer[MAX_RESOURCE_NAME_LENGTH];
  int32_t resource_size;
  int32_t resource_flags;
  int32_t resource_type;
  int32_t resource_priority;
  int32_t resource_alignment;
  uint64_t resource_handle;
  int8_t is_volatile;
  int32_t access_mode;
  int64_t *resource_callback;
  int64_t *cleanup_handler;
  int64_t *temp_resource_ptr;
  uint64_t cleanup_context;
  void *system_state_ptr;
  int8_t *name_buffer_ptr;
  int32_t name_length;
  int8_t temp_buffer[MAX_RESOURCE_NAME_LENGTH];
  uint64_t checksum_value;
  
  // 初始化堆栈保护
  stack_guard_value = 0xfffffffffffffffe;
  checksum_value = GET_SECURITY_COOKIE() ^ (uint64_t)resource_name_buffer;
  
  // 初始化纹理资源
  system_state_ptr = SYSTEM_STATE_ACTIVE;
  name_buffer_ptr = resource_name_buffer;
  resource_name_buffer[0] = 0;
  name_length = RESOURCE_ID_TEXTURE_BASE;
  strcpy_s(resource_name_buffer, MAX_RESOURCE_NAME_LENGTH, RESOURCE_NAME_TEXTURE);
  access_mode = 1;
  is_volatile = 0;
  resource_handle = 0;
  resource_alignment = 1;
  resource_type = RESOURCE_TYPE_TEXTURE;
  resource_priority = 0;
  resource_flags = DEFAULT_RESOURCE_FLAGS;
  resource_size = DEFAULT_RESOURCE_SIZE;
  
  // 获取系统上下文并设置资源
  context_pointer = (uint64_t *)get_system_context();
  stack_guard_value = *context_pointer;
  *context_pointer = 0;
  
  // 设置纹理资源回调
  resource_callback = *(int64_t **)(engine_context + RESOURCE_HANDLE_OFFSET);
  *(uint64_t *)(engine_context + RESOURCE_HANDLE_OFFSET) = stack_guard_value;
  if (resource_callback != (int64_t *)0x0) {
    (**(code **)(*resource_callback + RESOURCE_CALLBACK_OFFSET))();
  }
  if (cleanup_handler != (int64_t *)0x0) {
    (**(code **)(*cleanup_handler + RESOURCE_CALLBACK_OFFSET))();
  }
  
  // 初始化缓冲区资源
  system_state_ptr = SYSTEM_STATE_ACTIVE;
  context_pointer = SYSTEM_CONTEXT_POINTER;
  name_buffer_ptr = temp_buffer;
  temp_buffer[0] = 0;
  name_length = RESOURCE_ID_BUFFER_BASE;
  strcpy_s(temp_buffer, MAX_RESOURCE_NAME_LENGTH, RESOURCE_NAME_BUFFER);
  access_mode = 1;
  is_volatile = 0;
  resource_handle = 0;
  resource_alignment = 1;
  resource_type = RESOURCE_TYPE_BUFFER;
  resource_priority = 0;
  resource_flags = DEFAULT_RESOURCE_FLAGS;
  resource_size = DEFAULT_RESOURCE_SIZE;
  
  // 获取系统上下文并设置资源
  context_pointer = (uint64_t *)get_system_context();
  stack_guard_value = *context_pointer;
  *context_pointer = 0;
  
  // 设置缓冲区资源回调
  resource_callback = *(int64_t **)(engine_context + RESOURCE_HANDLE_OFFSET + 0x48);
  *(uint64_t *)(engine_context + RESOURCE_HANDLE_OFFSET + 0x48) = stack_guard_value;
  if (resource_callback != (int64_t *)0x0) {
    (**(code **)(*resource_callback + RESOURCE_CALLBACK_OFFSET))();
  }
  if (temp_resource_ptr != (int64_t *)0x0) {
    (**(code **)(*temp_resource_ptr + RESOURCE_CALLBACK_OFFSET))();
  }
  
  // 初始化内存资源
  system_state_ptr = SYSTEM_STATE_ACTIVE;
  context_pointer = SYSTEM_CONTEXT_POINTER;
  name_buffer_ptr = resource_name_buffer;
  resource_name_buffer[0] = 0;
  name_length = RESOURCE_ID_MEMORY_BASE;
  strcpy_s(resource_name_buffer, MAX_RESOURCE_NAME_LENGTH, RESOURCE_NAME_MEMORY);
  access_mode = 1;
  is_volatile = 0;
  resource_handle = 0;
  resource_alignment = 1;
  resource_type = RESOURCE_TYPE_MEMORY;
  resource_priority = 0;
  resource_flags = DEFAULT_RESOURCE_FLAGS;
  resource_size = DEFAULT_RESOURCE_SIZE;
  
  // 获取系统上下文并设置资源
  context_pointer = (uint64_t *)get_system_context();
  stack_guard_value = *context_pointer;
  *context_pointer = 0;
  
  // 设置内存资源回调
  cleanup_handler = *(int64_t **)(engine_context + RESOURCE_HANDLE_OFFSET + 0x8);
  *(uint64_t *)(engine_context + RESOURCE_HANDLE_OFFSET + 0x8) = stack_guard_value;
  if (cleanup_handler != (int64_t *)0x0) {
    (**(code **)(*cleanup_handler + RESOURCE_CALLBACK_OFFSET))();
  }
  if (resource_callback != (int64_t *)0x0) {
    (**(code **)(*resource_callback + RESOURCE_CALLBACK_OFFSET))();
  }
  
  // 初始化着色器资源
  system_state_ptr = SYSTEM_STATE_ACTIVE;
  context_pointer = SYSTEM_CONTEXT_POINTER;
  name_buffer_ptr = temp_buffer;
  temp_buffer[0] = 0;
  name_length = RESOURCE_ID_SHADER_BASE;
  strcpy_s(temp_buffer, MAX_RESOURCE_NAME_LENGTH, RESOURCE_NAME_SHADER);
  access_mode = 1;
  is_volatile = 0;
  resource_handle = 0;
  resource_alignment = 1;
  resource_type = RESOURCE_TYPE_SHADER;
  resource_priority = 0;
  resource_flags = DEFAULT_RESOURCE_FLAGS;
  resource_size = DEFAULT_RESOURCE_SIZE;
  
  // 获取系统上下文并设置资源
  context_pointer = (uint64_t *)get_system_context();
  stack_guard_value = *context_pointer;
  *context_pointer = 0;
  
  // 设置着色器资源回调
  temp_resource_ptr = *(int64_t **)(engine_context + RESOURCE_HANDLE_OFFSET + 0x40);
  *(uint64_t *)(engine_context + RESOURCE_HANDLE_OFFSET + 0x40) = stack_guard_value;
  if (temp_resource_ptr != (int64_t *)0x0) {
    (**(code **)(*temp_resource_ptr + RESOURCE_CALLBACK_OFFSET))();
  }
  if (cleanup_handler != (int64_t *)0x0) {
    (**(code **)(*cleanup_handler + RESOURCE_CALLBACK_OFFSET))();
  }
  
  // 初始化网格资源
  system_state_ptr = SYSTEM_STATE_ACTIVE;
  context_pointer = SYSTEM_CONTEXT_POINTER;
  name_buffer_ptr = resource_name_buffer;
  resource_name_buffer[0] = 0;
  name_length = RESOURCE_ID_MESH_BASE;
  strcpy_s(resource_name_buffer, MAX_RESOURCE_NAME_LENGTH, RESOURCE_NAME_MESH);
  access_mode = 1;
  is_volatile = 0;
  resource_handle = 0;
  resource_alignment = 1;
  resource_type = RESOURCE_TYPE_MESH;
  resource_priority = 0;
  resource_flags = DEFAULT_RESOURCE_FLAGS;
  resource_size = DEFAULT_RESOURCE_SIZE;
  
  // 获取系统上下文并设置资源
  context_pointer = (uint64_t *)get_system_context();
  stack_guard_value = *context_pointer;
  *context_pointer = 0;
  
  // 设置网格资源回调
  temp_resource_ptr = *(int64_t **)(engine_context + RESOURCE_HANDLE_OFFSET + 0x10);
  *(uint64_t *)(engine_context + RESOURCE_HANDLE_OFFSET + 0x10) = stack_guard_value;
  if (temp_resource_ptr != (int64_t *)0x0) {
    (**(code **)(*temp_resource_ptr + RESOURCE_CALLBACK_OFFSET))();
  }
  if (resource_callback != (int64_t *)0x0) {
    (**(code **)(*resource_callback + RESOURCE_CALLBACK_OFFSET))();
  }
  
  // 初始化音频资源
  system_state_ptr = SYSTEM_STATE_ACTIVE;
  context_pointer = SYSTEM_CONTEXT_POINTER;
  name_buffer_ptr = temp_buffer;
  temp_buffer[0] = 0;
  name_length = RESOURCE_ID_AUDIO_BASE;
  strcpy_s(temp_buffer, MAX_RESOURCE_NAME_LENGTH, RESOURCE_NAME_AUDIO);
  access_mode = 1;
  is_volatile = 0;
  resource_handle = 0;
  resource_alignment = 1;
  resource_type = RESOURCE_TYPE_AUDIO;
  resource_priority = 0;
  resource_flags = DEFAULT_RESOURCE_FLAGS;
  resource_size = DEFAULT_RESOURCE_SIZE;
  
  // 获取系统上下文并设置资源
  context_pointer = (uint64_t *)get_system_context();
  stack_guard_value = *context_pointer;
  *context_pointer = 0;
  
  // 设置音频资源回调
  temp_resource_ptr = *(int64_t **)(engine_context + RESOURCE_HANDLE_OFFSET + 0x18);
  *(uint64_t *)(engine_context + RESOURCE_HANDLE_OFFSET + 0x18) = stack_guard_value;
  if (temp_resource_ptr != (int64_t *)0x0) {
    (**(code **)(*temp_resource_ptr + RESOURCE_CALLBACK_OFFSET))();
  }
  if (cleanup_handler != (int64_t *)0x0) {
    (**(code **)(*cleanup_handler + RESOURCE_CALLBACK_OFFSET))();
  }
  
  // 初始化大缓冲区资源
  system_state_ptr = SYSTEM_STATE_ACTIVE;
  context_pointer = SYSTEM_CONTEXT_POINTER;
  name_buffer_ptr = resource_name_buffer;
  resource_name_buffer[0] = 0;
  name_length = RESOURCE_ID_LARGE_BUFFER_BASE;
  strcpy_s(resource_name_buffer, MAX_RESOURCE_NAME_LENGTH, RESOURCE_NAME_LARGE_BUFFER);
  access_mode = 1;
  is_volatile = 0;
  resource_handle = 0;
  resource_alignment = 1;
  resource_type = RESOURCE_TYPE_LARGE_BUFFER;
  resource_priority = 0;
  resource_flags = DEFAULT_RESOURCE_FLAGS;
  resource_size = DEFAULT_RESOURCE_SIZE;
  
  // 获取系统上下文并设置资源
  context_pointer = (uint64_t *)get_system_context();
  stack_guard_value = *context_pointer;
  *context_pointer = 0;
  
  // 设置大缓冲区资源回调
  temp_resource_ptr = *(int64_t **)(engine_context + RESOURCE_HANDLE_OFFSET + 0x20);
  *(uint64_t *)(engine_context + RESOURCE_HANDLE_OFFSET + 0x20) = stack_guard_value;
  if (temp_resource_ptr != (int64_t *)0x0) {
    (**(code **)(*temp_resource_ptr + RESOURCE_CALLBACK_OFFSET))();
  }
  if (resource_callback != (int64_t *)0x0) {
    (**(code **)(*resource_callback + RESOURCE_CALLBACK_OFFSET))();
  }
  
  // 初始化小缓冲区资源
  system_state_ptr = SYSTEM_STATE_ACTIVE;
  context_pointer = SYSTEM_CONTEXT_POINTER;
  name_buffer_ptr = temp_buffer;
  temp_buffer[0] = 0;
  name_length = RESOURCE_ID_SMALL_BUFFER_BASE;
  strcpy_s(temp_buffer, MAX_RESOURCE_NAME_LENGTH, RESOURCE_NAME_SMALL_BUFFER);
  access_mode = 1;
  is_volatile = 0;
  resource_handle = 0;
  resource_alignment = 1;
  resource_type = RESOURCE_TYPE_SMALL_BUFFER;
  resource_priority = 0;
  resource_flags = DEFAULT_RESOURCE_FLAGS;
  resource_size = DEFAULT_RESOURCE_SIZE;
  
  // 获取系统上下文并设置资源
  context_pointer = (uint64_t *)get_system_context();
  stack_guard_value = *context_pointer;
  *context_pointer = 0;
  
  // 设置小缓冲区资源回调
  temp_resource_ptr = *(int64_t **)(engine_context + RESOURCE_HANDLE_OFFSET + 0x30);
  *(uint64_t *)(engine_context + RESOURCE_HANDLE_OFFSET + 0x30) = stack_guard_value;
  if (temp_resource_ptr != (int64_t *)0x0) {
    (**(code **)(*temp_resource_ptr + RESOURCE_CALLBACK_OFFSET))();
  }
  if (cleanup_handler != (int64_t *)0x0) {
    (**(code **)(*cleanup_handler + RESOURCE_CALLBACK_OFFSET))();
  }
  
  // 初始化流资源
  system_state_ptr = SYSTEM_STATE_ACTIVE;
  context_pointer = SYSTEM_CONTEXT_POINTER;
  name_buffer_ptr = resource_name_buffer;
  resource_name_buffer[0] = 0;
  name_length = RESOURCE_ID_STREAM_BASE;
  strcpy_s(resource_name_buffer, MAX_RESOURCE_NAME_LENGTH, RESOURCE_NAME_STREAM);
  access_mode = 1;
  is_volatile = 0;
  resource_handle = 0;
  resource_alignment = 1;
  resource_type = RESOURCE_TYPE_STREAM;
  resource_priority = 0;
  resource_flags = DEFAULT_RESOURCE_FLAGS;
  resource_size = DEFAULT_RESOURCE_SIZE;
  
  // 获取系统上下文并设置资源
  context_pointer = (uint64_t *)get_system_context();
  stack_guard_value = *context_pointer;
  *context_pointer = 0;
  
  // 设置流资源回调
  temp_resource_ptr = *(int64_t **)(engine_context + RESOURCE_HANDLE_OFFSET + 0x28);
  *(uint64_t *)(engine_context + RESOURCE_HANDLE_OFFSET + 0x28) = stack_guard_value;
  if (temp_resource_ptr != (int64_t *)0x0) {
    (**(code **)(*temp_resource_ptr + RESOURCE_CALLBACK_OFFSET))();
  }
  if (resource_callback != (int64_t *)0x0) {
    (**(code **)(*resource_callback + RESOURCE_CALLBACK_OFFSET))();
  }
  
  // 初始化配置资源
  system_state_ptr = SYSTEM_STATE_ACTIVE;
  context_pointer = SYSTEM_CONTEXT_POINTER;
  name_buffer_ptr = temp_buffer;
  temp_buffer[0] = 0;
  name_length = RESOURCE_ID_CONFIG_BASE;
  strcpy_s(temp_buffer, MAX_RESOURCE_NAME_LENGTH, RESOURCE_NAME_CONFIG);
  access_mode = 1;
  is_volatile = 0;
  resource_handle = 0;
  resource_alignment = 1;
  resource_type = RESOURCE_TYPE_CONFIG;
  resource_priority = 0;
  resource_flags = DEFAULT_RESOURCE_FLAGS;
  resource_size = DEFAULT_RESOURCE_SIZE;
  
  // 获取系统上下文并设置资源
  context_pointer = (uint64_t *)get_system_context();
  stack_guard_value = *context_pointer;
  *context_pointer = 0;
  
  // 设置配置资源回调
  temp_resource_ptr = *(int64_t **)(engine_context + RESOURCE_HANDLE_OFFSET + 0x58);
  *(uint64_t *)(engine_context + RESOURCE_HANDLE_OFFSET + 0x58) = stack_guard_value;
  if (temp_resource_ptr != (int64_t *)0x0) {
    (**(code **)(*temp_resource_ptr + RESOURCE_CALLBACK_OFFSET))();
  }
  if (cleanup_handler != (int64_t *)0x0) {
    (**(code **)(*cleanup_handler + RESOURCE_CALLBACK_OFFSET))();
  }
  
  // 初始化临时资源
  system_state_ptr = SYSTEM_STATE_ACTIVE;
  context_pointer = SYSTEM_CONTEXT_POINTER;
  name_buffer_ptr = resource_name_buffer;
  resource_name_buffer[0] = 0;
  name_length = RESOURCE_ID_TEMP_BASE;
  strcpy_s(resource_name_buffer, MAX_RESOURCE_NAME_LENGTH, RESOURCE_NAME_TEMP);
  access_mode = 1;
  is_volatile = 0;
  resource_handle = 0;
  resource_alignment = 1;
  resource_type = RESOURCE_TYPE_TEMP;
  resource_priority = 0;
  resource_flags = DEFAULT_RESOURCE_FLAGS;
  resource_size = DEFAULT_RESOURCE_SIZE;
  
  // 获取系统上下文并设置资源
  context_pointer = (uint64_t *)get_system_context();
  stack_guard_value = *context_pointer;
  *context_pointer = 0;
  
  // 设置临时资源回调
  temp_resource_ptr = *(int64_t **)(engine_context + RESOURCE_HANDLE_OFFSET + 0x50);
  *(uint64_t *)(engine_context + RESOURCE_HANDLE_OFFSET + 0x50) = stack_guard_value;
  if (temp_resource_ptr != (int64_t *)0x0) {
    (**(code **)(*temp_resource_ptr + RESOURCE_CALLBACK_OFFSET))();
  }
  if (cleanup_handler != (int64_t *)0x0) {
    (**(code **)(*cleanup_handler + RESOURCE_CALLBACK_OFFSET))();
  }
  
  // 初始化缓存资源
  system_state_ptr = SYSTEM_STATE_ACTIVE;
  context_pointer = SYSTEM_CONTEXT_POINTER;
  name_buffer_ptr = temp_buffer;
  temp_buffer[0] = 0;
  name_length = RESOURCE_ID_CACHE_BASE;
  strcpy_s(temp_buffer, MAX_RESOURCE_NAME_LENGTH, RESOURCE_NAME_CACHE);
  access_mode = 1;
  is_volatile = 0;
  resource_handle = 0;
  resource_alignment = 1;
  resource_type = RESOURCE_TYPE_CACHE;
  resource_priority = 0;
  resource_flags = DEFAULT_RESOURCE_FLAGS;
  resource_size = DEFAULT_RESOURCE_SIZE;
  
  // 获取系统上下文并设置资源
  context_pointer = (uint64_t *)get_system_context();
  stack_guard_value = *context_pointer;
  *context_pointer = 0;
  
  // 设置缓存资源回调
  temp_resource_ptr = *(int64_t **)(engine_context + RESOURCE_HANDLE_OFFSET + 0x60);
  *(uint64_t *)(engine_context + RESOURCE_HANDLE_OFFSET + 0x60) = stack_guard_value;
  if (temp_resource_ptr != (int64_t *)0x0) {
    (**(code **)(*temp_resource_ptr + RESOURCE_CALLBACK_OFFSET))();
  }
  if (resource_callback != (int64_t *)0x0) {
    (**(code **)(*resource_callback + RESOURCE_CALLBACK_OFFSET))();
  }
  
  // 初始化堆资源
  system_state_ptr = SYSTEM_STATE_ACTIVE;
  context_pointer = SYSTEM_CONTEXT_POINTER;
  name_buffer_ptr = resource_name_buffer;
  resource_name_buffer[0] = 0;
  name_length = RESOURCE_ID_HEAP_BASE;
  strcpy_s(resource_name_buffer, MAX_RESOURCE_NAME_LENGTH, RESOURCE_NAME_HEAP);
  access_mode = 1;
  is_volatile = 0;
  resource_handle = 0;
  resource_alignment = 1;
  resource_type = RESOURCE_TYPE_HEAP;
  resource_priority = 0;
  resource_flags = DEFAULT_RESOURCE_FLAGS;
  resource_size = DEFAULT_RESOURCE_SIZE;
  
  // 获取系统上下文并设置资源
  context_pointer = (uint64_t *)get_system_context();
  stack_guard_value = *context_pointer;
  *context_pointer = 0;
  
  // 设置堆资源回调
  temp_resource_ptr = *(int64_t **)(engine_context + RESOURCE_HANDLE_OFFSET + 0x68);
  *(uint64_t *)(engine_context + RESOURCE_HANDLE_OFFSET + 0x68) = stack_guard_value;
  if (temp_resource_ptr != (int64_t *)0x0) {
    (**(code **)(*temp_resource_ptr + RESOURCE_CALLBACK_OFFSET))();
  }
  if (resource_callback != (int64_t *)0x0) {
    (**(code **)(*resource_callback + RESOURCE_CALLBACK_OFFSET))();
  }
  
  // 执行清理回调并终止函数
  system_state_ptr = SYSTEM_STATE_ACTIVE;
  
  // 触发清理回调函数，不返回
  trigger_cleanup_callback(checksum_value ^ (uint64_t)resource_name_buffer);
}

/**
 * 执行系统关闭
 * 
 * 这个函数负责安全地关闭游戏引擎系统，包括：
 * 1. 释放所有分配的资源
 * 2. 清理系统状态
 * 3. 关闭所有子系统
 * 4. 执行最终的清理操作
 * 
 * 注意：此函数不返回，会直接终止程序
 */
void execute_system_shutdown(void)
{
  // 调用系统终止函数，不返回
  perform_system_termination();
}