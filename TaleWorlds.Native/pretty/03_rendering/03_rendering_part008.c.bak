#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part008.c - 渲染系统高级渲染管线和数据处理模块
// 包含4个核心函数，涵盖渲染管线执行、渲染状态更新、渲染参数处理、渲染命令处理等高级渲染功能

// Function aliases definition
#define rendering_system_execute_render_pipeline           FUN_180271c54
#define rendering_system_process_render_state              FUN_180271ca1
#define rendering_system_handle_render_parameters          FUN_180271cc9
#define rendering_system_process_render_commands          FUN_180271cf0

// Constants definition
#define RENDER_DATA_BUFFER_SIZE                           0x98
#define RENDER_DATA_OFFSET_START                          0x7f0
#define RENDER_DATA_OFFSET_END                            0x7f8
#define RENDER_TEXTURE_DATA_OFFSET                        0x8a8
#define RENDER_TEXTURE_DATA_SIZE_OFFSET                   0x8ac
#define RENDER_COLOR_DATA_OFFSET                          0x948
#define RENDER_COLOR_DATA_SIZE_OFFSET                     0x950
#define RENDER_LIGHT_DATA_OFFSET                          0xc60
#define RENDER_LIGHT_DATA_SIZE_OFFSET                     0xc68
#define RENDER_SHADER_DATA_OFFSET                         0x1888
#define RENDER_SHADER_DATA_SIZE_OFFSET                    0x1890
#define RENDER_MATERIAL_DATA_OFFSET                       0x18c8
#define RENDER_MATERIAL_DATA_SIZE_OFFSET                  0x18c9
#define RENDER_PARAM_BUFFER_MIN_SIZE                      2
#define RENDER_PARAM_BUFFER_MAX_SIZE                      5
#define RENDER_ITERATION_COUNT                            0x10
#define RENDER_SHADER_COUNT                               5
#define RENDER_LIGHT_COUNT                               9
#define RENDER_MATERIAL_NAME_MAX_SIZE                     0x10

/**
 * 渲染系统管线执行函数
 * 执行渲染管线的主要流程，包括渲染参数设置、渲染状态更新、渲染命令处理等
 */
void rendering_system_execute_render_pipeline(void)
{
  int8_t char_value;
  int32_t int_value;
  longlong data_size;
  longlong iteration_count;
  int8_t *char_buffer_ptr;
  int32_t *int_buffer_ptr;
  int *int_ptr;
  longlong *buffer_manager;
  int loop_counter;
  longlong render_context;
  int zero_counter;
  longlong data_context;
  
  // 初始化渲染管线
  do {
    System_QueueProcessor();
    render_context = render_context + -1;
  } while (render_context != 0);
  
  // 处理渲染数据
  FUN_18025a940(&unknown_var_9712_ptr, *(int32_t *)(data_context + 0x7c8));
  char_buffer_ptr = (int8_t *)buffer_manager[1];
  char_value = *(int8_t *)(data_context + 0x7cc);
  
  // 检查字符缓冲区空间
  if ((ulonglong)((*buffer_manager - (longlong)char_buffer_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MIN_SIZE) {
    System_BufferManager();
    char_buffer_ptr = (int8_t *)buffer_manager[1];
  }
  
  *char_buffer_ptr = char_value;
  buffer_manager[1] = buffer_manager[1] + 1;
  
  if (*(char *)(data_context + 0x7cc) == '\0') {
    return;
  }
  
  // 处理整数数据
  int_buffer_ptr = (int32_t *)buffer_manager[1];
  if ((ulonglong)((*buffer_manager - (longlong)int_buffer_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MAX_SIZE) {
    System_BufferManager();
    int_buffer_ptr = (int32_t *)buffer_manager[1];
  }
  
  zero_counter = 0;
  *int_buffer_ptr = 0;
  buffer_manager[1] = buffer_manager[1] + 4;
  
  // 计算数据大小
  data_size = *(longlong *)(data_context + RENDER_DATA_OFFSET_END) - *(longlong *)(data_context + RENDER_DATA_OFFSET_START);
  int_ptr = (int *)buffer_manager[1];
  data_size = data_size / 0x26 + (data_size >> 0x3f);
  
  if ((ulonglong)((*buffer_manager - (longlong)int_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MAX_SIZE) {
    System_BufferManager();
    int_ptr = (int *)buffer_manager[1];
  }
  
  *int_ptr = (int)(data_size >> 2) - (int)(data_size >> 0x3f);
  buffer_manager[1] = buffer_manager[1] + 4;
  
  // 处理数据迭代
  iteration_count = *(longlong *)(data_context + RENDER_DATA_OFFSET_END) - *(longlong *)(data_context + RENDER_DATA_OFFSET_START);
  data_size = iteration_count >> 0x3f;
  loop_counter = zero_counter;
  
  if (iteration_count / RENDER_DATA_BUFFER_SIZE + data_size != data_size) {
    do {
      System_QueueProcessor();
      loop_counter = loop_counter + 1;
    } while ((ulonglong)(longlong)loop_counter <
             (ulonglong)((*(longlong *)(data_context + RENDER_DATA_OFFSET_END) - 
                        *(longlong *)(data_context + RENDER_DATA_OFFSET_START)) / RENDER_DATA_BUFFER_SIZE));
  }
  
  System_QueueProcessor();
  char_buffer_ptr = (int8_t *)buffer_manager[1];
  char_value = *(int8_t *)(data_context + RENDER_TEXTURE_DATA_OFFSET);
  
  if ((ulonglong)((*buffer_manager - (longlong)char_buffer_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MIN_SIZE) {
    System_BufferManager();
    char_buffer_ptr = (int8_t *)buffer_manager[1];
  }
  
  *char_buffer_ptr = char_value;
  buffer_manager[1] = buffer_manager[1] + 1;
  int_buffer_ptr = (int32_t *)buffer_manager[1];
  int_value = *(int32_t *)(data_context + RENDER_TEXTURE_DATA_SIZE_OFFSET);
  
  if ((ulonglong)((*buffer_manager - (longlong)int_buffer_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MAX_SIZE) {
    System_BufferManager();
    int_buffer_ptr = (int32_t *)buffer_manager[1];
  }
  
  *int_buffer_ptr = int_value;
  buffer_manager[1] = buffer_manager[1] + 4;
  
  System_QueueProcessor();
  data_size = *(longlong *)(data_context + RENDER_COLOR_DATA_SIZE_OFFSET) - *(longlong *)(data_context + RENDER_COLOR_DATA_OFFSET);
  data_size = data_size / 0x26 + (data_size >> 0x3f);
  int_ptr = (int *)buffer_manager[1];
  
  if ((ulonglong)((*buffer_manager - (longlong)int_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MAX_SIZE) {
    System_BufferManager();
    int_ptr = (int *)buffer_manager[1];
  }
  
  *int_ptr = (int)(data_size >> 2) - (int)(data_size >> 0x3f);
  buffer_manager[1] = buffer_manager[1] + 4;
  
  iteration_count = *(longlong *)(data_context + RENDER_COLOR_DATA_SIZE_OFFSET) - *(longlong *)(data_context + RENDER_COLOR_DATA_OFFSET);
  data_size = iteration_count >> 0x3f;
  loop_counter = zero_counter;
  
  if (iteration_count / RENDER_DATA_BUFFER_SIZE + data_size != data_size) {
    do {
      System_QueueProcessor();
      loop_counter = loop_counter + 1;
    } while ((ulonglong)(longlong)loop_counter <
             (ulonglong)((*(longlong *)(data_context + RENDER_COLOR_DATA_SIZE_OFFSET) - 
                        *(longlong *)(data_context + RENDER_COLOR_DATA_OFFSET)) / RENDER_DATA_BUFFER_SIZE));
  }
  
  // 处理着色器数据
  loop_counter = RENDER_SHADER_COUNT;
  do {
    System_QueueProcessor();
    loop_counter = loop_counter + -1;
  } while (loop_counter != 0);
  
  data_size = *(longlong *)(data_context + RENDER_LIGHT_DATA_SIZE_OFFSET) - *(longlong *)(data_context + RENDER_LIGHT_DATA_OFFSET);
  data_size = data_size / 0x26 + (data_size >> 0x3f);
  int_ptr = (int *)buffer_manager[1];
  
  if ((ulonglong)((*buffer_manager - (longlong)int_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MAX_SIZE) {
    System_BufferManager();
    int_ptr = (int *)buffer_manager[1];
  }
  
  *int_ptr = (int)(data_size >> 2) - (int)(data_size >> 0x3f);
  buffer_manager[1] = buffer_manager[1] + 4;
  
  iteration_count = *(longlong *)(data_context + RENDER_LIGHT_DATA_SIZE_OFFSET) - *(longlong *)(data_context + RENDER_LIGHT_DATA_OFFSET);
  data_size = iteration_count >> 0x3f;
  loop_counter = zero_counter;
  
  if (iteration_count / RENDER_DATA_BUFFER_SIZE + data_size != data_size) {
    do {
      System_QueueProcessor();
      loop_counter = loop_counter + 1;
    } while ((ulonglong)(longlong)loop_counter <
             (ulonglong)((*(longlong *)(data_context + RENDER_LIGHT_DATA_SIZE_OFFSET) - 
                        *(longlong *)(data_context + RENDER_LIGHT_DATA_OFFSET)) / RENDER_DATA_BUFFER_SIZE));
  }
  
  // 处理光照数据
  loop_counter = RENDER_LIGHT_COUNT;
  do {
    System_QueueProcessor();
    loop_counter = loop_counter + -1;
  } while (loop_counter != 0);
  
  System_QueueProcessor();
  System_QueueProcessor();
  
  data_size = *(longlong *)(data_context + RENDER_SHADER_DATA_SIZE_OFFSET) - *(longlong *)(data_context + RENDER_SHADER_DATA_OFFSET);
  data_size = data_size / 0x26 + (data_size >> 0x3f);
  int_ptr = (int *)buffer_manager[1];
  
  if ((ulonglong)((*buffer_manager - (longlong)int_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MAX_SIZE) {
    System_BufferManager();
    int_ptr = (int *)buffer_manager[1];
  }
  
  *int_ptr = (int)(data_size >> 2) - (int)(data_size >> 0x3f);
  buffer_manager[1] = buffer_manager[1] + 4;
  
  iteration_count = *(longlong *)(data_context + RENDER_SHADER_DATA_SIZE_OFFSET) - *(longlong *)(data_context + RENDER_SHADER_DATA_OFFSET);
  data_size = iteration_count >> 0x3f;
  loop_counter = zero_counter;
  
  if (iteration_count / RENDER_DATA_BUFFER_SIZE + data_size != data_size) {
    do {
      System_QueueProcessor();
      loop_counter = loop_counter + 1;
    } while ((ulonglong)(longlong)loop_counter <
             (ulonglong)((*(longlong *)(data_context + RENDER_SHADER_DATA_SIZE_OFFSET) - 
                        *(longlong *)(data_context + RENDER_SHADER_DATA_OFFSET)) / RENDER_DATA_BUFFER_SIZE));
  }
  
  System_QueueProcessor();
  char_buffer_ptr = (int8_t *)buffer_manager[1];
  char_value = *(int8_t *)(data_context + RENDER_MATERIAL_DATA_OFFSET);
  
  if ((ulonglong)((*buffer_manager - (longlong)char_buffer_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MIN_SIZE) {
    System_BufferManager();
    char_buffer_ptr = (int8_t *)buffer_manager[1];
  }
  
  *char_buffer_ptr = char_value;
  buffer_manager[1] = buffer_manager[1] + 1;
  int_buffer_ptr = (int32_t *)buffer_manager[1];
  
  if (*(char *)(data_context + RENDER_MATERIAL_DATA_OFFSET) != '\0') {
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    int_buffer_ptr = (int32_t *)buffer_manager[1];
  }
  
  if ((ulonglong)((*buffer_manager - (longlong)int_buffer_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MAX_SIZE) {
    System_BufferManager();
    int_buffer_ptr = (int32_t *)buffer_manager[1];
  }
  
  *int_buffer_ptr = RENDER_MATERIAL_NAME_MAX_SIZE;
  buffer_manager[1] = buffer_manager[1] + 4;
  
  // 处理材质数据
  do {
    int_ptr = (int *)buffer_manager[1];
    if ((ulonglong)((*buffer_manager - (longlong)int_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MAX_SIZE) {
      System_BufferManager();
      int_ptr = (int *)buffer_manager[1];
    }
    *int_ptr = zero_counter;
    buffer_manager[1] = buffer_manager[1] + 4;
    System_QueueProcessor();
    zero_counter = zero_counter + 1;
  } while (zero_counter < RENDER_MATERIAL_NAME_MAX_SIZE);
  
  return;
}

/**
 * 渲染系统状态处理函数
 * 处理渲染系统的状态更新，包括渲染参数设置、渲染状态更新等
 */
void rendering_system_process_render_state(void)
{
  int8_t char_value;
  int32_t int_value;
  longlong data_size;
  longlong iteration_count;
  int8_t *char_buffer_ptr;
  int32_t *int_buffer_ptr;
  int *int_ptr;
  longlong *buffer_manager;
  int loop_counter;
  int8_t stack_value;
  int zero_counter;
  longlong data_context;
  
  // 初始化缓冲区
  System_BufferManager();
  *(int8_t *)buffer_manager[1] = stack_value;
  buffer_manager[1] = buffer_manager[1] + 1;
  
  if (*(char *)(data_context + 0x7cc) == '\0') {
    return;
  }
  
  // 处理整数数据
  int_buffer_ptr = (int32_t *)buffer_manager[1];
  if ((ulonglong)((*buffer_manager - (longlong)int_buffer_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MAX_SIZE) {
    System_BufferManager();
    int_buffer_ptr = (int32_t *)buffer_manager[1];
  }
  
  zero_counter = 0;
  *int_buffer_ptr = 0;
  buffer_manager[1] = buffer_manager[1] + 4;
  
  // 计算数据大小
  data_size = *(longlong *)(data_context + RENDER_DATA_OFFSET_END) - *(longlong *)(data_context + RENDER_DATA_OFFSET_START);
  int_ptr = (int *)buffer_manager[1];
  data_size = data_size / 0x26 + (data_size >> 0x3f);
  
  if ((ulonglong)((*buffer_manager - (longlong)int_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MAX_SIZE) {
    System_BufferManager();
    int_ptr = (int *)buffer_manager[1];
  }
  
  *int_ptr = (int)(data_size >> 2) - (int)(data_size >> 0x3f);
  buffer_manager[1] = buffer_manager[1] + 4;
  
  // 处理数据迭代
  iteration_count = *(longlong *)(data_context + RENDER_DATA_OFFSET_END) - *(longlong *)(data_context + RENDER_DATA_OFFSET_START);
  data_size = iteration_count >> 0x3f;
  loop_counter = zero_counter;
  
  if (iteration_count / RENDER_DATA_BUFFER_SIZE + data_size != data_size) {
    do {
      System_QueueProcessor();
      loop_counter = loop_counter + 1;
    } while ((ulonglong)(longlong)loop_counter <
             (ulonglong)((*(longlong *)(data_context + RENDER_DATA_OFFSET_END) - 
                        *(longlong *)(data_context + RENDER_DATA_OFFSET_START)) / RENDER_DATA_BUFFER_SIZE));
  }
  
  System_QueueProcessor();
  char_buffer_ptr = (int8_t *)buffer_manager[1];
  char_value = *(int8_t *)(data_context + RENDER_TEXTURE_DATA_OFFSET);
  
  if ((ulonglong)((*buffer_manager - (longlong)char_buffer_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MIN_SIZE) {
    System_BufferManager();
    char_buffer_ptr = (int8_t *)buffer_manager[1];
  }
  
  *char_buffer_ptr = char_value;
  buffer_manager[1] = buffer_manager[1] + 1;
  int_buffer_ptr = (int32_t *)buffer_manager[1];
  int_value = *(int32_t *)(data_context + RENDER_TEXTURE_DATA_SIZE_OFFSET);
  
  if ((ulonglong)((*buffer_manager - (longlong)int_buffer_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MAX_SIZE) {
    System_BufferManager();
    int_buffer_ptr = (int32_t *)buffer_manager[1];
  }
  
  *int_buffer_ptr = int_value;
  buffer_manager[1] = buffer_manager[1] + 4;
  
  System_QueueProcessor();
  data_size = *(longlong *)(data_context + RENDER_COLOR_DATA_SIZE_OFFSET) - *(longlong *)(data_context + RENDER_COLOR_DATA_OFFSET);
  data_size = data_size / 0x26 + (data_size >> 0x3f);
  int_ptr = (int *)buffer_manager[1];
  
  if ((ulonglong)((*buffer_manager - (longlong)int_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MAX_SIZE) {
    System_BufferManager();
    int_ptr = (int *)buffer_manager[1];
  }
  
  *int_ptr = (int)(data_size >> 2) - (int)(data_size >> 0x3f);
  buffer_manager[1] = buffer_manager[1] + 4;
  
  iteration_count = *(longlong *)(data_context + RENDER_COLOR_DATA_SIZE_OFFSET) - *(longlong *)(data_context + RENDER_COLOR_DATA_OFFSET);
  data_size = iteration_count >> 0x3f;
  loop_counter = zero_counter;
  
  if (iteration_count / RENDER_DATA_BUFFER_SIZE + data_size != data_size) {
    do {
      System_QueueProcessor();
      loop_counter = loop_counter + 1;
    } while ((ulonglong)(longlong)loop_counter <
             (ulonglong)((*(longlong *)(data_context + RENDER_COLOR_DATA_SIZE_OFFSET) - 
                        *(longlong *)(data_context + RENDER_COLOR_DATA_OFFSET)) / RENDER_DATA_BUFFER_SIZE));
  }
  
  // 处理着色器数据
  loop_counter = RENDER_SHADER_COUNT;
  do {
    System_QueueProcessor();
    loop_counter = loop_counter + -1;
  } while (loop_counter != 0);
  
  data_size = *(longlong *)(data_context + RENDER_LIGHT_DATA_SIZE_OFFSET) - *(longlong *)(data_context + RENDER_LIGHT_DATA_OFFSET);
  data_size = data_size / 0x26 + (data_size >> 0x3f);
  int_ptr = (int *)buffer_manager[1];
  
  if ((ulonglong)((*buffer_manager - (longlong)int_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MAX_SIZE) {
    System_BufferManager();
    int_ptr = (int *)buffer_manager[1];
  }
  
  *int_ptr = (int)(data_size >> 2) - (int)(data_size >> 0x3f);
  buffer_manager[1] = buffer_manager[1] + 4;
  
  iteration_count = *(longlong *)(data_context + RENDER_LIGHT_DATA_SIZE_OFFSET) - *(longlong *)(data_context + RENDER_LIGHT_DATA_OFFSET);
  data_size = iteration_count >> 0x3f;
  loop_counter = zero_counter;
  
  if (iteration_count / RENDER_DATA_BUFFER_SIZE + data_size != data_size) {
    do {
      System_QueueProcessor();
      loop_counter = loop_counter + 1;
    } while ((ulonglong)(longlong)loop_counter <
             (ulonglong)((*(longlong *)(data_context + RENDER_LIGHT_DATA_SIZE_OFFSET) - 
                        *(longlong *)(data_context + RENDER_LIGHT_DATA_OFFSET)) / RENDER_DATA_BUFFER_SIZE));
  }
  
  // 处理光照数据
  loop_counter = RENDER_LIGHT_COUNT;
  do {
    System_QueueProcessor();
    loop_counter = loop_counter + -1;
  } while (loop_counter != 0);
  
  System_QueueProcessor();
  System_QueueProcessor();
  
  data_size = *(longlong *)(data_context + RENDER_SHADER_DATA_SIZE_OFFSET) - *(longlong *)(data_context + RENDER_SHADER_DATA_OFFSET);
  data_size = data_size / 0x26 + (data_size >> 0x3f);
  int_ptr = (int *)buffer_manager[1];
  
  if ((ulonglong)((*buffer_manager - (longlong)int_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MAX_SIZE) {
    System_BufferManager();
    int_ptr = (int *)buffer_manager[1];
  }
  
  *int_ptr = (int)(data_size >> 2) - (int)(data_size >> 0x3f);
  buffer_manager[1] = buffer_manager[1] + 4;
  
  iteration_count = *(longlong *)(data_context + RENDER_SHADER_DATA_SIZE_OFFSET) - *(longlong *)(data_context + RENDER_SHADER_DATA_OFFSET);
  data_size = iteration_count >> 0x3f;
  loop_counter = zero_counter;
  
  if (iteration_count / RENDER_DATA_BUFFER_SIZE + data_size != data_size) {
    do {
      System_QueueProcessor();
      loop_counter = loop_counter + 1;
    } while ((ulonglong)(longlong)loop_counter <
             (ulonglong)((*(longlong *)(data_context + RENDER_SHADER_DATA_SIZE_OFFSET) - 
                        *(longlong *)(data_context + RENDER_SHADER_DATA_OFFSET)) / RENDER_DATA_BUFFER_SIZE));
  }
  
  System_QueueProcessor();
  char_buffer_ptr = (int8_t *)buffer_manager[1];
  char_value = *(int8_t *)(data_context + RENDER_MATERIAL_DATA_OFFSET);
  
  if ((ulonglong)((*buffer_manager - (longlong)char_buffer_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MIN_SIZE) {
    System_BufferManager();
    char_buffer_ptr = (int8_t *)buffer_manager[1];
  }
  
  *char_buffer_ptr = char_value;
  buffer_manager[1] = buffer_manager[1] + 1;
  int_buffer_ptr = (int32_t *)buffer_manager[1];
  
  if (*(char *)(data_context + RENDER_MATERIAL_DATA_OFFSET) != '\0') {
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    int_buffer_ptr = (int32_t *)buffer_manager[1];
  }
  
  if ((ulonglong)((*buffer_manager - (longlong)int_buffer_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MAX_SIZE) {
    System_BufferManager();
    int_buffer_ptr = (int32_t *)buffer_manager[1];
  }
  
  *int_buffer_ptr = RENDER_MATERIAL_NAME_MAX_SIZE;
  buffer_manager[1] = buffer_manager[1] + 4;
  
  // 处理材质数据
  do {
    int_ptr = (int *)buffer_manager[1];
    if ((ulonglong)((*buffer_manager - (longlong)int_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MAX_SIZE) {
      System_BufferManager();
      int_ptr = (int *)buffer_manager[1];
    }
    *int_ptr = zero_counter;
    buffer_manager[1] = buffer_manager[1] + 4;
    System_QueueProcessor();
    zero_counter = zero_counter + 1;
  } while (zero_counter < RENDER_MATERIAL_NAME_MAX_SIZE);
  
  return;
}

/**
 * 渲染系统参数处理函数
 * 处理渲染系统的参数，包括渲染参数设置、渲染状态更新等
 */
void rendering_system_handle_render_parameters(void)
{
  int8_t char_value;
  int32_t int_value;
  longlong data_size;
  longlong iteration_count;
  int8_t *char_buffer_ptr;
  int32_t *int_buffer_ptr;
  int *int_ptr;
  longlong *buffer_manager;
  int loop_counter;
  int zero_counter;
  longlong data_context;
  uint64_t stack_param_1;
  uint64_t stack_param_2;
  
  stack_param_2 = stack_param_1;
  int_buffer_ptr = (int32_t *)buffer_manager[1];
  
  if ((ulonglong)((*buffer_manager - (longlong)int_buffer_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MAX_SIZE) {
    System_BufferManager();
    int_buffer_ptr = (int32_t *)buffer_manager[1];
  }
  
  zero_counter = 0;
  *int_buffer_ptr = 0;
  buffer_manager[1] = buffer_manager[1] + 4;
  
  // 计算数据大小
  data_size = *(longlong *)(data_context + RENDER_DATA_OFFSET_END) - *(longlong *)(data_context + RENDER_DATA_OFFSET_START);
  int_ptr = (int *)buffer_manager[1];
  data_size = data_size / 0x26 + (data_size >> 0x3f);
  
  if ((ulonglong)((*buffer_manager - (longlong)int_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MAX_SIZE) {
    System_BufferManager();
    int_ptr = (int *)buffer_manager[1];
  }
  
  *int_ptr = (int)(data_size >> 2) - (int)(data_size >> 0x3f);
  buffer_manager[1] = buffer_manager[1] + 4;
  
  // 处理数据迭代
  iteration_count = *(longlong *)(data_context + RENDER_DATA_OFFSET_END) - *(longlong *)(data_context + RENDER_DATA_OFFSET_START);
  data_size = iteration_count >> 0x3f;
  loop_counter = zero_counter;
  
  if (iteration_count / RENDER_DATA_BUFFER_SIZE + data_size != data_size) {
    do {
      System_QueueProcessor();
      loop_counter = loop_counter + 1;
    } while ((ulonglong)(longlong)loop_counter <
             (ulonglong)((*(longlong *)(data_context + RENDER_DATA_OFFSET_END) - 
                        *(longlong *)(data_context + RENDER_DATA_OFFSET_START)) / RENDER_DATA_BUFFER_SIZE));
  }
  
  System_QueueProcessor();
  char_buffer_ptr = (int8_t *)buffer_manager[1];
  char_value = *(int8_t *)(data_context + RENDER_TEXTURE_DATA_OFFSET);
  
  if ((ulonglong)((*buffer_manager - (longlong)char_buffer_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MIN_SIZE) {
    System_BufferManager();
    char_buffer_ptr = (int8_t *)buffer_manager[1];
  }
  
  *char_buffer_ptr = char_value;
  buffer_manager[1] = buffer_manager[1] + 1;
  int_buffer_ptr = (int32_t *)buffer_manager[1];
  int_value = *(int32_t *)(data_context + RENDER_TEXTURE_DATA_SIZE_OFFSET);
  
  if ((ulonglong)((*buffer_manager - (longlong)int_buffer_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MAX_SIZE) {
    System_BufferManager();
    int_buffer_ptr = (int32_t *)buffer_manager[1];
  }
  
  *int_buffer_ptr = int_value;
  buffer_manager[1] = buffer_manager[1] + 4;
  
  System_QueueProcessor();
  data_size = *(longlong *)(data_context + RENDER_COLOR_DATA_SIZE_OFFSET) - *(longlong *)(data_context + RENDER_COLOR_DATA_OFFSET);
  data_size = data_size / 0x26 + (data_size >> 0x3f);
  int_ptr = (int *)buffer_manager[1];
  
  if ((ulonglong)((*buffer_manager - (longlong)int_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MAX_SIZE) {
    System_BufferManager();
    int_ptr = (int *)buffer_manager[1];
  }
  
  *int_ptr = (int)(data_size >> 2) - (int)(data_size >> 0x3f);
  buffer_manager[1] = buffer_manager[1] + 4;
  
  iteration_count = *(longlong *)(data_context + RENDER_COLOR_DATA_SIZE_OFFSET) - *(longlong *)(data_context + RENDER_COLOR_DATA_OFFSET);
  data_size = iteration_count >> 0x3f;
  loop_counter = zero_counter;
  
  if (iteration_count / RENDER_DATA_BUFFER_SIZE + data_size != data_size) {
    do {
      System_QueueProcessor();
      loop_counter = loop_counter + 1;
    } while ((ulonglong)(longlong)loop_counter <
             (ulonglong)((*(longlong *)(data_context + RENDER_COLOR_DATA_SIZE_OFFSET) - 
                        *(longlong *)(data_context + RENDER_COLOR_DATA_OFFSET)) / RENDER_DATA_BUFFER_SIZE));
  }
  
  // 处理着色器数据
  loop_counter = RENDER_SHADER_COUNT;
  do {
    System_QueueProcessor();
    loop_counter = loop_counter + -1;
  } while (loop_counter != 0);
  
  data_size = *(longlong *)(data_context + RENDER_LIGHT_DATA_SIZE_OFFSET) - *(longlong *)(data_context + RENDER_LIGHT_DATA_OFFSET);
  data_size = data_size / 0x26 + (data_size >> 0x3f);
  int_ptr = (int *)buffer_manager[1];
  
  if ((ulonglong)((*buffer_manager - (longlong)int_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MAX_SIZE) {
    System_BufferManager();
    int_ptr = (int *)buffer_manager[1];
  }
  
  *int_ptr = (int)(data_size >> 2) - (int)(data_size >> 0x3f);
  buffer_manager[1] = buffer_manager[1] + 4;
  
  iteration_count = *(longlong *)(data_context + RENDER_LIGHT_DATA_SIZE_OFFSET) - *(longlong *)(data_context + RENDER_LIGHT_DATA_OFFSET);
  data_size = iteration_count >> 0x3f;
  loop_counter = zero_counter;
  
  if (iteration_count / RENDER_DATA_BUFFER_SIZE + data_size != data_size) {
    do {
      System_QueueProcessor();
      loop_counter = loop_counter + 1;
    } while ((ulonglong)(longlong)loop_counter <
             (ulonglong)((*(longlong *)(data_context + RENDER_LIGHT_DATA_SIZE_OFFSET) - 
                        *(longlong *)(data_context + RENDER_LIGHT_DATA_OFFSET)) / RENDER_DATA_BUFFER_SIZE));
  }
  
  // 处理光照数据
  loop_counter = RENDER_LIGHT_COUNT;
  do {
    System_QueueProcessor();
    loop_counter = loop_counter + -1;
  } while (loop_counter != 0);
  
  System_QueueProcessor();
  System_QueueProcessor();
  
  data_size = *(longlong *)(data_context + RENDER_SHADER_DATA_SIZE_OFFSET) - *(longlong *)(data_context + RENDER_SHADER_DATA_OFFSET);
  data_size = data_size / 0x26 + (data_size >> 0x3f);
  int_ptr = (int *)buffer_manager[1];
  
  if ((ulonglong)((*buffer_manager - (longlong)int_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MAX_SIZE) {
    System_BufferManager();
    int_ptr = (int *)buffer_manager[1];
  }
  
  *int_ptr = (int)(data_size >> 2) - (int)(data_size >> 0x3f);
  buffer_manager[1] = buffer_manager[1] + 4;
  
  iteration_count = *(longlong *)(data_context + RENDER_SHADER_DATA_SIZE_OFFSET) - *(longlong *)(data_context + RENDER_SHADER_DATA_OFFSET);
  data_size = iteration_count >> 0x3f;
  loop_counter = zero_counter;
  
  if (iteration_count / RENDER_DATA_BUFFER_SIZE + data_size != data_size) {
    do {
      System_QueueProcessor();
      loop_counter = loop_counter + 1;
    } while ((ulonglong)(longlong)loop_counter <
             (ulonglong)((*(longlong *)(data_context + RENDER_SHADER_DATA_SIZE_OFFSET) - 
                        *(longlong *)(data_context + RENDER_SHADER_DATA_OFFSET)) / RENDER_DATA_BUFFER_SIZE));
  }
  
  System_QueueProcessor();
  char_buffer_ptr = (int8_t *)buffer_manager[1];
  char_value = *(int8_t *)(data_context + RENDER_MATERIAL_DATA_OFFSET);
  
  if ((ulonglong)((*buffer_manager - (longlong)char_buffer_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MIN_SIZE) {
    System_BufferManager();
    char_buffer_ptr = (int8_t *)buffer_manager[1];
  }
  
  *char_buffer_ptr = char_value;
  buffer_manager[1] = buffer_manager[1] + 1;
  int_buffer_ptr = (int32_t *)buffer_manager[1];
  
  if (*(char *)(data_context + RENDER_MATERIAL_DATA_OFFSET) != '\0') {
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    int_buffer_ptr = (int32_t *)buffer_manager[1];
  }
  
  if ((ulonglong)((*buffer_manager - (longlong)int_buffer_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MAX_SIZE) {
    System_BufferManager();
    int_buffer_ptr = (int32_t *)buffer_manager[1];
  }
  
  *int_buffer_ptr = RENDER_MATERIAL_NAME_MAX_SIZE;
  buffer_manager[1] = buffer_manager[1] + 4;
  
  // 处理材质数据
  do {
    int_ptr = (int *)buffer_manager[1];
    if ((ulonglong)((*buffer_manager - (longlong)int_ptr) + buffer_manager[2]) < RENDER_PARAM_BUFFER_MAX_SIZE) {
      System_BufferManager();
      int_ptr = (int *)buffer_manager[1];
    }
    *int_ptr = zero_counter;
    buffer_manager[1] = buffer_manager[1] + 4;
    System_QueueProcessor();
    zero_counter = zero_counter + 1;
  } while (zero_counter < RENDER_MATERIAL_NAME_MAX_SIZE);
  
  return;
}

/**
 * 渲染系统命令处理函数
 * 处理渲染系统的命令，包括渲染命令执行、渲染参数更新、渲染状态管理等
 * 
 * @param param1 参数1指针
 * @param param2 参数2指针
 */
void rendering_system_process_render_commands(longlong param1, longlong param2)
{
  int int_value;
  longlong data_size;
  longlong iteration_count;
  int *int_ptr;
  int32_t *uint_ptr;
  longlong data_offset;
  longlong *render_object;
  uint *uint_buffer;
  void *char_buffer;
  ulonglong buffer_offset;
  ulonglong data_offset_temp;
  uint uint_value;
  ulonglong iteration_offset;
  longlong render_data;
  int8_t stack_buffer[32];
  uint64_t stack_param_1;
  void *stack_buffer_ptr;
  void *stack_buffer_ptr2;
  int32_t stack_value;
  uint8_t stack_data_buffer[136];
  ulonglong stack_data_offset;
  
  stack_param_1 = 0xfffffffffffffffe;
  stack_data_offset = GET_SECURITY_COOKIE() ^ (ulonglong)stack_buffer;
  render_data = *(longlong *)(param2 + 8);
  int_ptr = (int *)(render_data + 4);
  *(int **)(param2 + 8) = int_ptr;
  int_value = *int_ptr;
  *(longlong *)(param2 + 8) = render_data + 8;
  
  // 处理渲染数据
  FUN_180272e40(param1 + 0x20, (longlong)int_value);
  data_offset_temp = 0;
  render_data = *(longlong *)(param1 + 0x20);
  iteration_count = *(longlong *)(param1 + 0x28) - render_data;
  data_size = iteration_count >> 0x3f;
  buffer_offset = data_offset_temp;
  data_offset = data_offset_temp;
  
  if (iteration_count / RENDER_DATA_BUFFER_SIZE + data_size == data_size) {
    uint_buffer = *(uint **)(param2 + 8);
  }
  else {
    do {
      uint_value = **(uint **)(param2 + 8);
      uint_buffer = *(uint **)(param2 + 8) + 1;
      *(uint **)(param2 + 8) = uint_buffer;
      if (uint_value != 0) {
        (**(code **)(*(longlong *)(buffer_offset + render_data) + 0x18))
                  ((longlong *)(buffer_offset + render_data), uint_buffer, uint_value);
        *(longlong *)(param2 + 8) = *(longlong *)(param2 + 8) + (ulonglong)uint_value;
        uint_buffer = *(uint **)(param2 + 8);
      }
      uint_value = (int)data_offset + 1;
      render_data = *(longlong *)(param1 + 0x20);
      buffer_offset = buffer_offset + RENDER_DATA_BUFFER_SIZE;
      data_offset = (ulonglong)uint_value;
    } while ((ulonglong)(longlong)(int)uint_value <
             (ulonglong)((*(longlong *)(param1 + 0x28) - render_data) / RENDER_DATA_BUFFER_SIZE));
  }
  
  uint_value = *uint_buffer;
  uint_buffer = uint_buffer + 1;
  *(uint **)(param2 + 8) = uint_buffer;
  
  if (uint_value != 0) {
    (**(code **)(*(longlong *)(param1 + 0x40) + 0x18))((longlong *)(param1 + 0x40), uint_buffer, uint_value);
    *(longlong *)(param2 + 8) = *(longlong *)(param2 + 8) + (ulonglong)uint_value;
    uint_buffer = *(uint **)(param2 + 8);
  }
  
  *(char *)(param1 + 0xd8) = (char)*uint_buffer;
  uint_ptr = (int32_t *)(*(longlong *)(param2 + 8) + 1);
  *(int32_t **)(param2 + 8) = uint_ptr;
  *(int32_t *)(param1 + 0xdc) = *uint_ptr;
  
  render_data = *(longlong *)(param2 + 8);
  uint_buffer = (uint *)(render_data + 4);
  *(uint **)(param2 + 8) = uint_buffer;
  uint_value = *uint_buffer;
  int_ptr = (int *)(render_data + 8);
  *(int **)(param2 + 8) = int_ptr;
  
  if (uint_value != 0) {
    (**(code **)(*(longlong *)(param1 + 0xe0) + 0x18))((longlong *)(param1 + 0xe0), int_ptr, uint_value);
    *(longlong *)(param2 + 8) = *(longlong *)(param2 + 8) + (ulonglong)uint_value;
    int_ptr = *(int **)(param2 + 8);
  }
  
  int_value = *int_ptr;
  *(int **)(param2 + 8) = int_ptr + 1;
  FUN_180272e40(param1 + 0x178, (longlong)int_value);
  
  render_data = *(longlong *)(param1 + 0x178);
  iteration_count = *(longlong *)(param1 + 0x180) - render_data;
  data_size = iteration_count >> 0x3f;
  buffer_offset = data_offset_temp;
  data_offset = data_offset_temp;
  
  if (iteration_count / RENDER_DATA_BUFFER_SIZE + data_size != data_size) {
    do {
      uint_value = **(uint **)(param2 + 8);
      uint_buffer = *(uint **)(param2 + 8) + 1;
      *(uint **)(param2 + 8) = uint_buffer;
      if (uint_value != 0) {
        (**(code **)(*(longlong *)(buffer_offset + render_data) + 0x18))
                  ((longlong *)(buffer_offset + render_data), uint_buffer, uint_value);
        *(longlong *)(param2 + 8) = *(longlong *)(param2 + 8) + (ulonglong)uint_value;
      }
      uint_value = (int)data_offset + 1;
      render_data = *(longlong *)(param1 + 0x178);
      buffer_offset = buffer_offset + RENDER_DATA_BUFFER_SIZE;
      data_offset = (ulonglong)uint_value;
    } while ((ulonglong)(longlong)(int)uint_value <
             (ulonglong)((*(longlong *)(param1 + 0x180) - render_data) / RENDER_DATA_BUFFER_SIZE));
  }
  
  // 处理渲染对象
  render_object = (longlong *)(param1 + 0x198);
  iteration_count = RENDER_SHADER_COUNT;
  do {
    uint_value = **(uint **)(param2 + 8);
    uint_buffer = *(uint **)(param2 + 8) + 1;
    *(uint **)(param2 + 8) = uint_buffer;
    if (uint_value != 0) {
      (**(code **)(*render_object + 0x18))(render_object, uint_buffer, uint_value);
      *(longlong *)(param2 + 8) = *(longlong *)(param2 + 8) + (ulonglong)uint_value;
      uint_buffer = *(uint **)(param2 + 8);
    }
    render_object = render_object + 0x13;
    iteration_count = iteration_count + -1;
  } while (iteration_count != 0);
  
  iteration_count = (longlong)(int)*uint_buffer;
  *(uint **)(param2 + 8) = uint_buffer + 1;
  FUN_180272e40(param1 + 0x490, iteration_count);
  buffer_offset = data_offset_temp;
  
  if (0 < iteration_count) {
    do {
      render_object = (longlong *)(*(longlong *)(param1 + 0x490) + buffer_offset);
      uint_value = **(uint **)(param2 + 8);
      uint_buffer = *(uint **)(param2 + 8) + 1;
      *(uint **)(param2 + 8) = uint_buffer;
      if (uint_value != 0) {
        (**(code **)(*render_object + 0x18))(render_object, uint_buffer, uint_value);
        *(longlong *)(param2 + 8) = *(longlong *)(param2 + 8) + (ulonglong)uint_value;
      }
      iteration_count = iteration_count + -1;
      buffer_offset = buffer_offset + RENDER_DATA_BUFFER_SIZE;
    } while (iteration_count != 0);
  }
  
  // 处理光照数据
  render_object = (longlong *)(param1 + 0xa30);
  iteration_count = RENDER_LIGHT_COUNT;
  do {
    uint_value = **(uint **)(param2 + 8);
    uint_buffer = *(uint **)(param2 + 8) + 1;
    *(uint **)(param2 + 8) = uint_buffer;
    if (uint_value != 0) {
      (**(code **)(*render_object + 0x18))(render_object, uint_buffer, uint_value);
      *(longlong *)(param2 + 8) = *(longlong *)(param2 + 8) + (ulonglong)uint_value;
      uint_buffer = *(uint **)(param2 + 8);
    }
    render_object = render_object + 0x13;
    iteration_count = iteration_count + -1;
  } while (iteration_count != 0);
  
  uint_value = *uint_buffer;
  uint_buffer = uint_buffer + 1;
  *(uint **)(param2 + 8) = uint_buffer;
  
  if (uint_value != 0) {
    (**(code **)(*(longlong *)(param1 + 0xf88) + 0x18))(param1 + 0xf88, uint_buffer, uint_value);
    *(longlong *)(param2 + 8) = *(longlong *)(param2 + 8) + (ulonglong)uint_value;
    uint_buffer = *(uint **)(param2 + 8);
  }
  
  uint_value = *uint_buffer;
  uint_buffer = uint_buffer + 1;
  *(uint **)(param2 + 8) = uint_buffer;
  
  if (uint_value != 0) {
    (**(code **)(*(longlong *)(param1 + 0x1020) + 0x18))(param1 + 0x1020, uint_buffer, uint_value);
    *(longlong *)(param2 + 8) = *(longlong *)(param2 + 8) + (ulonglong)uint_value;
    uint_buffer = *(uint **)(param2 + 8);
  }
  
  iteration_count = (longlong)(int)*uint_buffer;
  *(uint **)(param2 + 8) = uint_buffer + 1;
  FUN_180272e40(param1 + 0x10b8, iteration_count);
  
  if (iteration_count < 1) {
    uint_buffer = *(uint **)(param2 + 8);
  }
  else {
    do {
      render_object = (longlong *)(*(longlong *)(param1 + 0x10b8) + data_offset_temp);
      uint_value = **(uint **)(param2 + 8);
      uint_buffer = *(uint **)(param2 + 8) + 1;
      *(uint **)(param2 + 8) = uint_buffer;
      if (uint_value != 0) {
        (**(code **)(*render_object + 0x18))(render_object, uint_buffer, uint_value);
        *(longlong *)(param2 + 8) = *(longlong *)(param2 + 8) + (ulonglong)uint_value;
        uint_buffer = *(uint **)(param2 + 8);
      }
      data_offset_temp = data_offset_temp + RENDER_DATA_BUFFER_SIZE;
      iteration_count = iteration_count + -1;
    } while (iteration_count != 0);
  }
  
  uint_value = *uint_buffer;
  uint_buffer = uint_buffer + 1;
  *(uint **)(param2 + 8) = uint_buffer;
  
  if (uint_value != 0) {
    (**(code **)(*(longlong *)(param1 + 0x10d8) + 0x18))
              ((longlong *)(param1 + 0x10d8), uint_buffer, uint_value);
    *(longlong *)(param2 + 8) = *(longlong *)(param2 + 8) + (ulonglong)uint_value;
    uint_buffer = *(uint **)(param2 + 8);
  }
  
  *(char *)(param1 + 0x10f9) = (char)*uint_buffer;
  render_data = *(longlong *)(param2 + 8);
  uint_buffer = (uint *)(render_data + 1);
  *(uint **)(param2 + 8) = uint_buffer;
  
  if (*(char *)(param1 + 0x10f9) != '\0') {
    uint_value = *uint_buffer;
    uint_buffer = (uint *)(render_data + 5);
    *(uint **)(param2 + 8) = uint_buffer;
    if (uint_value != 0) {
      (**(code **)(*(longlong *)(param1 + 0x1100) + 0x18))
                ((longlong *)(param1 + 0x1100), uint_buffer, uint_value);
      *(longlong *)(param2 + 8) = *(longlong *)(param2 + 8) + (ulonglong)uint_value;
      uint_buffer = *(uint **)(param2 + 8);
    }
    uint_value = *uint_buffer;
    uint_buffer = uint_buffer + 1;
    *(uint **)(param2 + 8) = uint_buffer;
    if (uint_value != 0) {
      (**(code **)(*(longlong *)(param1 + 0x1198) + 0x18))
                ((longlong *)(param1 + 0x1198), uint_buffer, uint_value);
      *(longlong *)(param2 + 8) = *(longlong)(param2 + 8) + (ulonglong)uint_value;
      uint_buffer = *(uint **)(param2 + 8);
    }
    uint_value = *uint_buffer;
    uint_buffer = uint_buffer + 1;
    *(uint **)(param2 + 8) = uint_buffer;
    if (uint_value != 0) {
      (**(code **)(*(longlong *)(param1 + 0x1230) + 0x18))
                ((longlong *)(param1 + 0x1230), uint_buffer, uint_value);
      *(longlong *)(param2 + 8) = *(longlong)(param2 + 8) + (ulonglong)uint_value;
      uint_buffer = *(uint **)(param2 + 8);
    }
    uint_value = *uint_buffer;
    uint_buffer = uint_buffer + 1;
    *(uint **)(param2 + 8) = uint_buffer;
    if (uint_value != 0) {
      (**(code **)(*(longlong *)(param1 + 0x12c8) + 0x18))
                ((longlong *)(param1 + 0x12c8), uint_buffer, uint_value);
      *(longlong *)(param2 + 8) = *(longlong)(param2 + 8) + (ulonglong)uint_value;
      uint_buffer = *(uint **)(param2 + 8);
    }
    uint_value = *uint_buffer;
    uint_buffer = uint_buffer + 1;
    *(uint **)(param2 + 8) = uint_buffer;
    if (uint_value != 0) {
      (**(code **)(*(longlong *)(param1 + 0x1360) + 0x18))
                ((longlong *)(param1 + 0x1360), uint_buffer, uint_value);
      *(longlong *)(param2 + 8) = *(longlong)(param2 + 8) + (ulonglong)uint_value;
      uint_buffer = *(uint **)(param2 + 8);
    }
    uint_value = *uint_buffer;
    uint_buffer = uint_buffer + 1;
    *(uint **)(param2 + 8) = uint_buffer;
    if (uint_value != 0) {
      (**(code **)(*(longlong *)(param1 + 0x13f8) + 0x18))
                ((longlong *)(param1 + 0x13f8), uint_buffer, uint_value);
      *(longlong *)(param2 + 8) = *(longlong)(param2 + 8) + (ulonglong)uint_value;
      uint_buffer = *(uint **)(param2 + 8);
    }
  }
  
  uint_value = *uint_buffer;
  iteration_count = (longlong)(int)uint_value;
  *(uint **)(param2 + 8) = uint_buffer + 1;
  
  if (0 < (int)uint_value) {
    render_object = (longlong *)(param1 + 0x4b0);
    do {
      int_value = **(int **)(param2 + 8);
      *(int **)(param2 + 8) = *(int **)(param2 + 8) + 1;
      stack_buffer_ptr = &unknown_var_3432_ptr;
      stack_buffer_ptr2 = stack_data_buffer;
      stack_value = 0;
      stack_data_buffer[0] = 0;
      uint_value = **(uint **)(param2 + 8);
      uint_buffer = *(uint **)(param2 + 8) + 1;
      *(uint **)(param2 + 8) = uint_buffer;
      if (uint_value != 0) {
        FUN_180049910(&stack_buffer_ptr, uint_buffer, uint_value);
        *(longlong *)(param2 + 8) = *(longlong)(param2 + 8) + (ulonglong)uint_value;
      }
      if (int_value < RENDER_MATERIAL_NAME_MAX_SIZE) {
        char_buffer = &system_buffer_ptr;
        if (stack_buffer_ptr2 != (void *)0x0) {
          char_buffer = stack_buffer_ptr2;
        }
        (**(code **)(*render_object + 0x10))(render_object, char_buffer);
      }
      stack_buffer_ptr = &system_state_ptr;
      render_object = render_object + 0xb;
      iteration_count = iteration_count + -1;
    } while (iteration_count != 0);
  }
  
  // 清理栈资源
  FUN_1808fc050(stack_data_offset ^ (ulonglong)stack_buffer);
}