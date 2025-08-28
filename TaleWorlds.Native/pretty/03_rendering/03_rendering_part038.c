#include "TaleWorlds.Native.Split.h"

// 03_rendering_part038.c - 渲染系统时间和动画控制模块
// 该模块包含14个函数，主要处理渲染时间控制、动画更新、字符串处理、资源清理等功能

// 全局变量定义
#define GLOBAL_RENDER_TIME_SCALE 0.00001f
#define MAX_RENDER_QUEUE_SIZE 0xffffffff
#define RENDER_FLAG_ACTIVE 0x40000
#define DEFAULT_RENDER_TIMEOUT 20000
#define MAX_RENDER_OBJECTS 1000000000

// 函数声明
void update_render_animation_time(longlong render_context, uint64_t param_2, uint64_t param_3, uint64_t param_4);
uint64_t* process_render_string(uint64_t param_1, uint64_t* string_buffer, uint64_t param_3, uint64_t param_4);
uint64_t* cleanup_render_resources(uint64_t* resource_ptr, ulonglong cleanup_flags, uint64_t param_3, uint64_t param_4);
uint64_t* initialize_render_data(uint64_t param_1, uint64_t* data_buffer, uint64_t param_3, uint64_t param_4);
longlong create_render_object(longlong object_params, longlong render_manager);
void cleanup_render_data_table(longlong* table_ptr);
void process_render_data_batch(longlong start_ptr, longlong end_ptr);
void render_empty_function(void);
void initialize_render_array(int* array_ptr, int start_index, int end_index, longlong data_ptr, int capacity);
void process_render_vector(int vector_size, uint64_t param_2, uint64_t param_3, longlong data_ptr);
void process_render_array(int array_size, uint64_t param_2, uint64_t param_3, longlong data_ptr);
uint calculate_render_range(uint64_t param_1, ushort* range_ptr, int min_val, int max_val, int* result_ptr);
uint calculate_render_accumulation(void);
int32_t get_render_value(void);

// 函数实现

/**
 * 更新渲染动画时间
 * 处理渲染系统中的时间控制和动画更新
 * 
 * @param render_context 渲染上下文指针
 * @param param_2 参数2
 * @param param_3 参数3  
 * @param param_4 参数4
 */
void update_render_animation_time(longlong render_context, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
  longlong render_data_ptr;
  int queue_index;
  float current_time;
  float time_diff;
  uint64_t stack_params[13];
  int32_t stack_flags[4];
  longlong result_flag;
  
  current_time = (float)_DAT_180c8ed30;
  time_diff = current_time * GLOBAL_RENDER_TIME_SCALE - *(float *)(render_context + 0x15c);
  render_data_ptr = *(longlong *)(render_context + 0x120);
  *(float *)(render_data_ptr + 0x2a8) = time_diff;
  *(int32_t *)(render_data_ptr + 0x2ac) = 0;
  *(int32_t *)(render_data_ptr + 0x2b0) = 0;
  *(int32_t *)(render_data_ptr + 0x2b4) = 0x7f7fffff;
  
  // 检查是否需要更新动画队列
  if ((*(longlong *)(render_context + 0x140) - *(longlong *)(render_context + 0x138) >> 5 != 0) && (5.0 < time_diff))
  {
    queue_index = (*(int *)(render_context + 0x118) + 1) %
            (int)(*(longlong *)(render_context + 0x100) - *(longlong *)(render_context + 0xf8) >> 3);
    
    // 处理渲染队列
    FUN_18022cd30(*(uint64_t *)(*(longlong *)(render_context + 0x120) + 0x1b8), 0,
                  *(uint64_t *)(*(longlong *)(render_context + 0xf8) + (longlong)queue_index * 8), param_4,
                  MAX_RENDER_QUEUE_SIZE);
    FUN_18022cd30(*(uint64_t *)(*(longlong *)(render_context + 0x120) + 0x1b8), 1,
                  *(uint64_t *)
                   (*(longlong *)(render_context + 0xf8) +
                   (((longlong)queue_index + 1U) %
                   (ulonglong)(*(longlong *)(render_context + 0x100) - *(longlong *)(render_context + 0xf8) >> 3))
                   * 8));
    
    // 设置堆栈参数
    stack_params[0] = 0;
    stack_flags[0] = 0;
    stack_flags[1] = 0xffffffff;
    stack_params[1] = 1;
    stack_params[2] = 0;
    stack_flags[2] = 0xffffffff;
    stack_params[3] = 1;
    stack_params[4] = 0;
    result_flag = 0;
    stack_params[5] = 0;
    stack_params[6] = 0;
    stack_flags[3] = 3;
    stack_params[7] = 0;
    
    // 执行渲染操作
    FUN_180076c50(*(uint64_t *)(render_context + 0x120), &stack_params);
    *(int *)(render_context + 0x118) = queue_index;
    *(float *)(render_context + 0x15c) = current_time * GLOBAL_RENDER_TIME_SCALE;
    
    // 检查操作结果
    if (result_flag != 0) {
      // 错误处理
      FUN_18064e900();
    }
  }
  return;
}

/**
 * 处理渲染字符串
 * 处理渲染系统中的字符串操作和数据格式化
 * 
 * @param param_1 参数1
 * @param string_buffer 字符串缓冲区指针
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 处理后的字符串缓冲区指针
 */
uint64_t *
process_render_string(uint64_t param_1, uint64_t *string_buffer, uint64_t param_3, uint64_t param_4)
{
  *string_buffer = &UNK_18098bcb0;
  string_buffer[1] = 0;
  *(int32_t *)(string_buffer + 2) = 0;
  *string_buffer = &UNK_1809fcc28;
  string_buffer[1] = string_buffer + 3;
  *(int8_t *)(string_buffer + 3) = 0;
  *(int32_t *)(string_buffer + 2) = 0x16;
  strcpy_s(string_buffer[1], 0x80, &DAT_180a16c38, param_4, 0, MAX_RENDER_QUEUE_SIZE);
  return string_buffer;
}

/**
 * 清理渲染资源
 * 释放渲染系统中的资源占用
 * 
 * @param resource_ptr 资源指针
 * @param cleanup_flags 清理标志
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 清理后的资源指针
 */
uint64_t *
cleanup_render_resources(uint64_t *resource_ptr, ulonglong cleanup_flags, uint64_t param_3, uint64_t param_4)
{
  uint64_t cleanup_flag;
  
  cleanup_flag = MAX_RENDER_QUEUE_SIZE;
  *resource_ptr = &UNK_180a16c98;
  if ((longlong *)resource_ptr[0x1e] != (longlong *)0x0) {
    (**(code **)(*(longlong *)resource_ptr[0x1e] + 0x38))();
  }
  FUN_180244780(resource_ptr);
  if ((cleanup_flags & 1) != 0) {
    free(resource_ptr, 0xf8, param_3, param_4, cleanup_flag);
  }
  return resource_ptr;
}

/**
 * 初始化渲染数据
 * 设置渲染系统中的初始数据结构
 * 
 * @param param_1 参数1
 * @param data_buffer 数据缓冲区指针
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 初始化后的数据缓冲区指针
 */
uint64_t *
initialize_render_data(uint64_t param_1, uint64_t *data_buffer, uint64_t param_3, uint64_t param_4)
{
  uint64_t *data_ptr;
  
  *data_buffer = &UNK_18098bcb0;
  data_buffer[1] = 0;
  *(int32_t *)(data_buffer + 2) = 0;
  *data_buffer = &UNK_180a3c3e0;
  data_buffer[3] = 0;
  data_buffer[1] = 0;
  *(int32_t *)(data_buffer + 2) = 0;
  FUN_1806277c0(data_buffer, 0x16, param_3, param_4, 0, MAX_RENDER_QUEUE_SIZE);
  data_ptr = (uint64_t *)data_buffer[1];
  *data_ptr = 0x5f617465426c6772; // "_ateBlgr"
  data_ptr[1] = 0x6f74616369646e69; // "otacidni"
  *(int32_t *)(data_ptr + 2) = 0x69765f72; // "iv_r"
  *(int16_t *)((longlong)data_ptr + 0x14) = 0x7765; // "we"
  *(int8_t *)((longlong)data_ptr + 0x16) = 0;
  *(int32_t *)(data_buffer + 2) = 0x16;
  return data_buffer;
}

/**
 * 创建渲染对象
 * 在渲染系统中创建新的渲染对象
 * 
 * @param object_params 对象参数
 * @param render_manager 渲染管理器指针
 * @return 创建的渲染对象指针
 */
longlong create_render_object(longlong object_params, longlong render_manager)
{
  int *object_counter;
  int current_count;
  longlong *resource_ptr1;
  longlong *resource_ptr2;
  int32_t render_flags[3];
  uint64_t texture_data[2];
  uint64_t *data_ptr1;
  uint64_t *data_ptr2;
  longlong render_context;
  uint64_t *data_ptr3;
  longlong data_offset;
  float texture_width;
  float texture_height;
  uint64_t stack_params[19];
  int32_t stack_flags[7];
  float matrix_values[16];
  int32_t render_params[5];
  float color_values[8];
  int32_t color_flags[4];
  float transform_values[8];
  int32_t transform_flags[4];
  
  texture_data[1] = MAX_RENDER_QUEUE_SIZE;
  render_context = FUN_1800daa50();
  FUN_180094b30(render_context, &DAT_180a16c38);
  resource_ptr1 = *(longlong **)(_DAT_180c86938 + 0x121e0);
  if (resource_ptr1 != (longlong *)0x0) {
    (**(code **)(*resource_ptr1 + 0x28))(resource_ptr1);
  }
  resource_ptr2 = *(longlong **)(render_context + 0x9690);
  *(longlong **)(render_context + 0x9690) = resource_ptr1;
  if (resource_ptr2 != (longlong *)0x0) {
    (**(code **)(*resource_ptr2 + 0x38))();
  }
  resource_ptr1 = *(longlong **)(render_context + 0x96a8);
  *(uint64_t *)(render_context + 0x96a8) = 0;
  if (resource_ptr1 != (longlong *)0x0) {
    (**(code **)(*resource_ptr1 + 0x38))();
  }
  texture_data[0] = *(uint64_t *)(object_params + 0x24);
  *(uint64_t *)(render_context + 0x11c18) = *(uint64_t *)(object_params + 0x1c);
  *(uint64_t *)(render_context + 0x11c20) = texture_data[0];
  *(uint64_t *)(render_context + 0x11c28) = *(uint64_t *)(object_params + 0x2c);
  *(int16_t *)(render_context + 0x11c36) = 0x100;
  *(int8_t *)(render_context + 0x9a31) = 0;
  data_offset = 2;
  *(int32_t *)(render_context + 4) = 2;
  *(float *)(render_context + 0x124e4) = (float)(_DAT_180c8ed30 % MAX_RENDER_OBJECTS) * GLOBAL_RENDER_TIME_SCALE;
  data_ptr1 = (uint64_t *)(_DAT_180c86950 + 0x16a0);
  data_ptr2 = (uint64_t *)(render_context + 0x30);
  
  // 复制纹理数据
  do {
    data_ptr3 = data_ptr2;
    data_ptr2 = data_ptr1;
    texture_data[0] = data_ptr2[1];
    *data_ptr3 = *data_ptr2;
    data_ptr3[1] = texture_data[0];
    texture_data[0] = data_ptr2[3];
    data_ptr3[2] = data_ptr2[2];
    data_ptr3[3] = texture_data[0];
    texture_data[0] = data_ptr2[5];
    data_ptr3[4] = data_ptr2[4];
    data_ptr3[5] = texture_data[0];
    texture_data[0] = data_ptr2[7];
    data_ptr3[6] = data_ptr2[6];
    data_ptr3[7] = texture_data[0];
    texture_data[0] = data_ptr2[9];
    data_ptr3[8] = data_ptr2[8];
    data_ptr3[9] = texture_data[0];
    texture_data[0] = data_ptr2[0xb];
    data_ptr3[10] = data_ptr2[10];
    data_ptr3[0xb] = texture_data[0];
    texture_data[0] = data_ptr2[0xd];
    data_ptr3[0xc] = data_ptr2[0xc];
    data_ptr3[0xd] = texture_data[0];
    texture_data[0] = data_ptr2[0xf];
    data_ptr3[0xe] = data_ptr2[0xe];
    data_ptr3[0xf] = texture_data[0];
    data_offset = data_offset + -1;
    data_ptr1 = data_ptr2 + 0x10;
    data_ptr2 = data_ptr3 + 0x10;
  } while (data_offset != 0);
  
  texture_data[0] = data_ptr2[0x11];
  data_ptr3[0x10] = data_ptr2[0x10];
  data_ptr3[0x11] = texture_data[0];
  texture_data[0] = data_ptr2[0x13];
  data_ptr3[0x12] = data_ptr2[0x12];
  data_ptr3[0x13] = texture_data[0];
  texture_data[0] = data_ptr2[0x15];
  data_ptr3[0x14] = data_ptr2[0x14];
  data_ptr3[0x15] = texture_data[0];
  render_flags[0] = *(int32_t *)((longlong)data_ptr2 + 0xb4);
  render_flags[1] = *(int32_t *)(data_ptr2 + 0x17);
  render_flags[2] = *(int32_t *)((longlong)data_ptr2 + 0xbc);
  *(int32_t *)(data_ptr3 + 0x16) = *(int32_t *)(data_ptr2 + 0x16);
  *(int32_t *)((longlong)data_ptr3 + 0xb4) = render_flags[0];
  *(int32_t *)(data_ptr3 + 0x17) = render_flags[1];
  *(int32_t *)((longlong)data_ptr3 + 0xbc) = render_flags[2];
  
  FUN_18024b8d0(render_context);
  
  // 设置渲染标志
  if (*(char *)(object_params + 0xdc) != '\0') {
    *(uint *)(render_context + 4) = *(uint *)(render_context + 4) | RENDER_FLAG_ACTIVE;
  }
  *(int32_t *)(render_context + 0x11cf0) = 0;
  *(int32_t *)(render_context + 0x9a2c) = DEFAULT_RENDER_TIMEOUT;
  
  // 初始化颜色和变换矩阵
  render_params[0] = 0;
  render_params[1] = 0;
  render_params[2] = 0x3f800000; // 1.0f
  data_offset = *(longlong *)(*(longlong *)(*(longlong *)(object_params + 0xf0) + 0x1b8) + 0xb8);
  texture_height = (float)*(ushort *)(data_offset + 0x32e) / *(float *)(_DAT_180c86950 + 0x17f0);
  texture_width = (float)*(ushort *)(data_offset + 0x32c) / *(float *)(_DAT_180c86950 + 0x17ec);
  
  // 设置颜色值
  color_values[0] = texture_width * 1.0 + 0.0 + 0.0;
  color_values[1] = texture_width * 0.0 + 0.0 + 0.0;
  color_values[2] = texture_width * 0.0 + 0.0 + 0.0;
  color_values[3] = texture_width * 0.0 + 0.0 + 0.0;
  color_values[4] = texture_height * 0.0 + 0.0 + 0.0;
  color_values[5] = texture_height * 1.0 + 0.0 + 0.0;
  color_values[6] = texture_height * 0.0 + 0.0 + 0.0;
  color_values[7] = texture_height * 0.0 + 0.0 + 0.0;
  
  color_flags[0] = 0;
  color_flags[1] = 0;
  color_flags[2] = 0x3f800000; // 1.0f
  color_flags[3] = 0;
  transform_values[0] = (1.0 - texture_height) + 0.0;
  
  // 设置堆栈参数
  stack_params[0] = 0;
  stack_flags[0] = 0xffffffff;
  stack_params[1] = 0xff00;
  stack_params[2] = 0;
  stack_params[3] = 0xffffffffffffffff;
  stack_flags[1] = 0xffffffff;
  stack_params[4] = 0xff;
  stack_flags[2] = 0xffffffff;
  stack_params[5] = 0;
  stack_params[6] = 0x400;
  stack_params[7] = 0;
  stack_flags[3] = 0;
  stack_params[8] = 0;
  render_params[3] = 0;
  stack_params[9] = 0;
  stack_params[10] = 0;
  
  // 设置变换矩阵
  matrix_values[0] = color_values[0];
  matrix_values[1] = color_values[1];
  matrix_values[2] = color_values[2];
  matrix_values[3] = color_values[3];
  matrix_values[4] = color_values[4];
  matrix_values[5] = color_values[5];
  matrix_values[6] = color_values[6];
  matrix_values[7] = color_values[7];
  transform_flags[0] = color_flags[0];
  transform_flags[1] = color_flags[1];
  transform_flags[2] = color_flags[2];
  transform_flags[3] = color_flags[3];
  
  // 执行渲染操作
  FUN_180077750(*(longlong *)(object_params + 0xf0), render_context, &color_values, 0, &stack_params);
  
  // 更新对象计数器
  LOCK();
  object_counter = (int *)(render_manager + 0x11a48);
  current_count = *object_counter;
  *object_counter = *object_counter + 1;
  UNLOCK();
  
  *(longlong *)(render_manager + 0x9a48 + (longlong)current_count * 8) = render_context;
  texture_data[0] = *(uint64_t *)(render_manager + 0x9a3c);
  *(uint64_t *)(render_context + 0x9a34) = *(uint64_t *)(render_manager + 0x9a34);
  *(uint64_t *)(render_context + 0x9a3c) = texture_data[0];
  return render_context;
}

/**
 * 清理渲染数据表
 * 释放渲染系统中的数据表资源
 * 
 * @param table_ptr 数据表指针
 */
void cleanup_render_data_table(longlong *table_ptr)
{
  byte *string_ptr1;
  int string_hash1;
  uint string_len;
  uint64_t *entry_ptr;
  longlong entry_offset;
  ulonglong entry_index;
  byte *string_ptr2;
  ulonglong data_size;
  int string_hash2;
  uint64_t *cleanup_ptr;
  int current_index;
  longlong table_start;
  longlong table_end;
  int entry_count;
  longlong current_offset;
  longlong next_offset;
  
  table_end = table_ptr[1];
  table_start = *table_ptr;
  if (table_end - table_start >> 5 != 0) {
    entry_count = 1;
    current_offset = 0;
    do {
      entry_index = (ulonglong)entry_count;
      entry_offset = current_offset;
      current_index = entry_count;
      if (entry_index < (ulonglong)(table_end - table_start >> 5)) {
        do {
          next_offset = entry_offset + 0x20;
          string_hash1 = *(int *)(table_start + 0x10 + current_offset);
          string_hash2 = *(int *)(current_offset + 0x30 + table_start);
          if (string_hash1 == string_hash2) {
            if (string_hash1 != 0) {
              string_ptr2 = *(byte **)(table_start + 8 + current_offset);
              table_end = *(longlong *)(current_offset + 0x28 + table_start) - (longlong)string_ptr2;
              do {
                string_ptr1 = string_ptr2 + table_end;
                string_hash2 = (uint)*string_ptr2 - (uint)*string_ptr1;
                if (string_hash2 != 0) break;
                string_ptr2 = string_ptr2 + 1;
              } while (*string_ptr1 != 0);
            }
          // 处理匹配的条目
          if (string_hash2 == 0) {
            table_start = *table_ptr;
            table_end = (table_ptr[1] - table_start & 0xffffffffffffffe0U) + table_start;
            next_offset = next_offset + table_start;
            string_len = *(uint *)(table_end + -0x10);
            data_size = (ulonglong)string_len;
            if (*(longlong *)(table_end + -0x18) != 0) {
              FUN_1806277c0(next_offset, data_size);
            }
            if (string_len != 0) {
              // 复制数据
              memcpy(*(uint64_t *)(next_offset + 8), *(uint64_t *)(table_end + -0x18), data_size);
            }
            *(int32_t *)(next_offset + 0x10) = 0;
            if (*(longlong *)(next_offset + 8) != 0) {
              *(int8_t *)(data_size + *(longlong *)(next_offset + 8)) = 0;
            }
            *(int32_t *)(next_offset + 0x1c) = *(int32_t *)(table_end + -4);
            entry_ptr = (uint64_t *)table_ptr[1];
            table_start = *table_ptr;
            entry_index = (longlong)entry_ptr - table_start >> 5;
            data_size = entry_index - 1;
            if (entry_index < data_size) {
              FUN_18025aec0(table_ptr, 0xffffffffffffffff);
            }
            else {
              table_end = data_size * 0x20;
              cleanup_ptr = (uint64_t *)(table_end + table_start);
              if (cleanup_ptr != entry_ptr) {
                do {
                  (**(code **)*cleanup_ptr)(cleanup_ptr, 0);
                  cleanup_ptr = cleanup_ptr + 4;
                } while (cleanup_ptr != entry_ptr);
                table_start = *table_ptr;
              }
              table_ptr[1] = table_end + table_start;
            }
            current_index = current_index + -1;
            next_offset = entry_offset;
          }
          }
          else if (string_hash1 == 0) {
            // 处理空条目
          }
          table_start = *table_ptr;
          current_index = current_index + 1;
          table_end = table_ptr[1];
          entry_offset = next_offset;
        } while ((ulonglong)(longlong)current_index < (ulonglong)(table_end - table_start >> 5));
      }
      entry_count = entry_count + 1;
      current_offset = current_offset + 0x20;
    } while (entry_index < (ulonglong)(table_end - table_start >> 5));
  }
  return;
}

/**
 * 处理渲染数据批量
 * 批量处理渲染系统中的数据操作
 * 
 * @param start_ptr 起始指针
 * @param end_ptr 结束指针
 */
void process_render_data_batch(longlong start_ptr, longlong end_ptr)
{
  byte *string_ptr1;
  int string_hash1;
  uint string_len;
  uint64_t *entry_ptr;
  longlong entry_offset;
  byte *string_ptr2;
  ulonglong data_size;
  int string_hash2;
  uint64_t *cleanup_ptr;
  int current_index;
  longlong table_start;
  longlong table_end;
  uint64_t param_1;
  uint64_t param_2;
  longlong current_offset;
  longlong next_offset;
  ulonglong batch_index;
  
  param_1 = start_ptr;
  param_2 = end_ptr;
  do {
    batch_index = (ulonglong)current_index;
    entry_offset = current_offset;
    current_index = current_index;
    if (batch_index < (ulonglong)(param_1 - param_2 >> 5)) {
      do {
        next_offset = entry_offset + 0x20;
        string_hash1 = *(int *)(param_2 + 0x10 + current_offset);
        string_hash2 = *(int *)(current_offset + 0x30 + param_2);
        if (string_hash1 == string_hash2) {
          if (string_hash1 != 0) {
            string_ptr2 = *(byte **)(param_2 + 8 + current_offset);
            table_end = *(longlong *)(current_offset + 0x28 + param_2) - (longlong)string_ptr2;
            do {
              string_ptr1 = string_ptr2 + table_end;
              string_hash2 = (uint)*string_ptr2 - (uint)*string_ptr1;
              if (string_hash2 != 0) break;
              string_ptr2 = string_ptr2 + 1;
            } while (*string_ptr1 != 0);
          }
        // 处理匹配的条目
        if (string_hash2 == 0) {
          table_start = *param_1;
          table_end = (param_1[1] - table_start & 0xffffffffffffffe0U) + table_start;
          next_offset = next_offset + table_start;
          string_len = *(uint *)(table_end + -0x10);
          data_size = (ulonglong)string_len;
          if (*(longlong *)(table_end + -0x18) != 0) {
            FUN_1806277c0(next_offset, data_size);
          }
          if (string_len != 0) {
            // 复制数据
            memcpy(*(uint64_t *)(next_offset + 8), *(uint64_t *)(table_end + -0x18), data_size);
          }
          *(int32_t *)(next_offset + 0x10) = 0;
          if (*(longlong *)(next_offset + 8) != 0) {
            *(int8_t *)(data_size + *(longlong *)(next_offset + 8)) = 0;
          }
          *(int32_t *)(next_offset + 0x1c) = *(int32_t *)(table_end + -4);
          entry_ptr = (uint64_t *)param_1[1];
          table_start = *param_1;
          batch_index = (longlong)entry_ptr - table_start >> 5;
          data_size = batch_index - 1;
          if (batch_index < data_size) {
            FUN_18025aec0();
          }
          else {
            table_end = data_size * 0x20;
            cleanup_ptr = (uint64_t *)(table_end + table_start);
            if (cleanup_ptr != entry_ptr) {
              do {
                (**(code **)*cleanup_ptr)(cleanup_ptr, 0);
                cleanup_ptr = cleanup_ptr + 4;
              } while (cleanup_ptr != entry_ptr);
              table_start = *param_1;
            }
            param_1[1] = table_end + table_start;
          }
          current_index = current_index + -1;
          next_offset = entry_offset;
        }
        }
        else if (string_hash1 == 0) {
          // 处理空条目
        }
        param_2 = *param_1;
        current_index = current_index + 1;
        param_1 = param_1[1];
        entry_offset = next_offset;
      } while ((ulonglong)(longlong)current_index < (ulonglong)(param_1 - param_2 >> 5));
    }
    current_index = current_index + 1;
    current_offset = current_offset + 0x20;
    if ((ulonglong)(param_1 - param_2 >> 5) <= batch_index) {
      return;
    }
  } while( true );
}

/**
 * 空函数
 * 渲染系统中的占位符函数
 */
void render_empty_function(void)
{
  return;
}

/**
 * 初始化渲染数组
 * 初始化渲染系统中的数组结构
 * 
 * @param array_ptr 数组指针
 * @param start_index 起始索引
 * @param end_index 结束索引
 * @param data_ptr 数据指针
 * @param capacity 数组容量
 */
void initialize_render_array(int *array_ptr, int start_index, int end_index, longlong data_ptr, int capacity)
{
  uint vector_size;
  int8_t vector_data[16];
  uint aligned_size;
  int current_index;
  longlong *array_data;
  longlong offset;
  int loop_index;
  int8_t temp_data[16];
  int8_t vector_result[16];
  int8_t temp_data2[16];
  int8_t vector_result2[16];
  
  vector_data = _DAT_180a3f750;
  vector_size = capacity - 1;
  current_index = 0;
  if (((0 < (int)vector_size) && (current_index = 0, 3 < vector_size)) && (1 < _DAT_180bf00b0)) {
    aligned_size = vector_size & 0x80000003;
    if ((int)aligned_size < 0) {
      aligned_size = (aligned_size - 1 | 0xfffffffc) + 1;
    }
    array_data = (longlong *)(data_ptr + 0x28);
    loop_index = 0;
    do {
      current_index = loop_index + 2;
      temp_data2._8_8_ = 0;
      temp_data2._0_8_ = vector_data._0_8_;
      current_index = loop_index + 4;
      vector_result._0_4_ = loop_index + vector_data._0_4_ + 1;
      vector_result._4_4_ = loop_index + vector_data._4_4_ + 1;
      vector_result._8_4_ = loop_index;
      vector_result._12_4_ = loop_index;
      temp_data2 = pmovsxdq(temp_data2, vector_result);
      array_data[-4] = temp_data2._0_8_ * 0x10 + data_ptr;
      array_data[-2] = temp_data2._8_8_ + data_ptr;
      temp_data._8_8_ = 0;
      temp_data._0_8_ = vector_data._0_8_;
      vector_result2._0_4_ = current_index + vector_data._0_4_ + 1;
      vector_result2._4_4_ = current_index + vector_data._4_4_ + 1;
      vector_result2._8_4_ = current_index;
      vector_result2._12_4_ = current_index;
      temp_data2 = pmovsxdq(temp_data, vector_result2);
      *array_data = temp_data2._0_8_ * 0x10 + data_ptr;
      array_data[2] = temp_data2._8_8_ + data_ptr;
      array_data = array_data + 8;
      loop_index = current_index;
    } while (current_index < (int)(vector_size - aligned_size));
  }
  offset = (longlong)current_index;
  loop_index = current_index;
  if (offset < (int)vector_size) {
    offset = (int)vector_size - offset;
    loop_index = current_index + (int)offset;
    array_data = (longlong *)(offset * 0x10 + 8 + data_ptr);
    do {
      current_index = current_index + 1;
      *array_data = (longlong)current_index * 0x10 + data_ptr;
      offset = offset + -1;
      array_data = array_data + 2;
    } while (offset != 0);
  }
  *(uint64_t *)(data_ptr + 8 + (longlong)loop_index * 0x10) = 0;
  *array_ptr = start_index;
  array_ptr[1] = end_index;
  array_ptr[5] = capacity;
  array_ptr[3] = 1;
  array_ptr[4] = 0;
  *(longlong *)(array_ptr + 8) = data_ptr;
  *(int **)(array_ptr + 6) = array_ptr + 10;
  array_ptr[2] = (capacity + -1 + start_index) / capacity;
  *(short *)(array_ptr + 0xe) = (short)start_index;
  *(int **)(array_ptr + 0xc) = array_ptr + 0xe;
  *(int16_t *)((longlong)array_ptr + 0x3a) = 0xffff;
  *(int16_t *)(array_ptr + 10) = 0;
  *(int16_t *)((longlong)array_ptr + 0x2a) = 0;
  array_ptr[0x10] = 0;
  array_ptr[0x11] = 0;
  return;
}

/**
 * 处理渲染向量
 * 处理渲染系统中的向量运算
 * 
 * @param vector_size 向量大小
 * @param param_2 参数2
 * @param param_3 参数3
 * @param data_ptr 数据指针
 */
void process_render_vector(int vector_size, uint64_t param_2, uint64_t param_3, longlong data_ptr)
{
  int current_index;
  uint in_EAX;
  uint aligned_size;
  longlong *vector_data;
  int loop_index;
  longlong offset;
  int temp_index;
  int8_t vector_input[16];
  int8_t vector_result[16];
  int8_t temp_data[16];
  int8_t temp_data2[16];
  
  aligned_size = in_EAX & 0x80000003;
  if ((int)aligned_size < 0) {
    aligned_size = (aligned_size - 1 | 0xfffffffc) + 1;
  }
  vector_data = (longlong *)(in_R9 + 0x28);
  do {
    loop_index = in_R11D;
    current_index = loop_index + 2;
    vector_input._8_8_ = 0;
    vector_input._0_8_ = in_XMM4_Qa;
    temp_index = (int)(in_XMM4_Qa >> 0x20);
    in_R11D = loop_index + 4;
    vector_result._0_4_ = loop_index + (int)in_XMM4_Qa + 1;
    vector_result._4_4_ = loop_index + temp_index + 1;
    vector_result._8_4_ = loop_index;
    vector_result._12_4_ = loop_index;
    vector_input = pmovsxdq(vector_input, vector_result);
    vector_data[-4] = vector_input._0_8_ * 0x10 + data_ptr;
    vector_data[-2] = vector_input._8_8_ + in_XMM3_Qb;
    temp_data._8_8_ = 0;
    temp_data._0_8_ = in_XMM4_Qa;
    temp_data2._0_4_ = current_index + (int)in_XMM4_Qa + 1;
    temp_data2._4_4_ = current_index + temp_index + 1;
    temp_data2._8_4_ = current_index;
    temp_data2._12_4_ = current_index;
    vector_input = pmovsxdq(temp_data, temp_data2);
    *vector_data = vector_input._0_8_ * 0x10 + data_ptr;
    vector_data[2] = vector_input._8_8_ + in_XMM3_Qb;
    vector_data = vector_data + 8;
  } while (in_R11D < (int)(vector_size - aligned_size));
  offset = (longlong)in_R11D;
  if (offset < vector_size) {
    loop_index = loop_index + 5;
    offset = vector_size - offset;
    in_R11D = in_R11D + (int)offset;
    vector_data = (longlong *)(offset * 0x10 + 8 + in_R9);
    do {
      offset = (longlong)loop_index;
      loop_index = loop_index + 1;
      *vector_data = offset * 0x10 + in_R9;
      offset = offset + -1;
      vector_data = vector_data + 2;
    } while (offset != 0);
  }
  *(uint64_t *)(in_R9 + 8 + (longlong)in_R11D * 0x10) = unaff_R14;
  *in_R10 = unaff_ESI;
  in_R10[1] = unaff_EBP;
  in_R10[5] = unaff_EDI;
  in_R10[3] = 1;
  in_R10[4] = 0;
  *(longlong *)(in_R10 + 8) = in_R9;
  *(int **)(in_R10 + 6) = in_R10 + 10;
  in_R10[2] = (unaff_EDI + -1 + unaff_ESI) / unaff_EDI;
  *(short *)(in_R10 + 0xe) = (short)unaff_ESI;
  *(int **)(in_R10 + 0xc) = in_R10 + 0xe;
  *(int16_t *)((longlong)in_R10 + 0x3a) = 0xffff;
  *(short *)(in_R10 + 10) = (short)unaff_R14;
  *(short *)((longlong)in_R10 + 0x2a) = (short)unaff_R14;
  *(uint64_t *)(in_R10 + 0x10) = unaff_R14;
  return;
}

/**
 * 处理渲染数组
 * 处理渲染系统中的数组操作
 * 
 * @param array_size 数组大小
 * @param param_2 参数2
 * @param param_3 参数3
 * @param data_ptr 数据指针
 */
void process_render_array(int array_size, uint64_t param_2, uint64_t param_3, longlong data_ptr)
{
  longlong *array_data;
  int current_index;
  longlong offset;
  int temp_index;
  
  offset = (longlong)in_R11D;
  if (offset < array_size) {
    current_index = in_R11D + 1;
    offset = array_size - offset;
    in_R11D = in_R11D + (int)offset;
    array_data = (longlong *)(offset * 0x10 + 8 + data_ptr);
    do {
      offset = (longlong)current_index;
      current_index = current_index + 1;
      *array_data = offset * 0x10 + data_ptr;
      offset = offset + -1;
      array_data = array_data + 2;
    } while (offset != 0);
  }
  *(uint64_t *)(data_ptr + 8 + (longlong)in_R11D * 0x10) = unaff_R14;
  *in_R10 = unaff_ESI;
  in_R10[1] = unaff_EBP;
  in_R10[5] = unaff_EDI;
  in_R10[3] = 1;
  in_R10[4] = 0;
  *(longlong *)(in_R10 + 8) = data_ptr;
  *(int **)(in_R10 + 6) = in_R10 + 10;
  in_R10[2] = (unaff_EDI + -1 + unaff_ESI) / unaff_EDI;
  *(short *)(in_R10 + 0xe) = (short)unaff_ESI;
  *(int **)(in_R10 + 0xc) = in_R10 + 0xe;
  *(int16_t *)((longlong)in_R10 + 0x3a) = 0xffff;
  *(short *)(in_R10 + 10) = (short)unaff_R14;
  *(short *)((longlong)in_R10 + 0x2a) = (short)unaff_R14;
  *(uint64_t *)(in_R10 + 0x10) = unaff_R14;
  return;
}

/**
 * 计算渲染范围
 * 计算渲染系统中的范围值
 * 
 * @param param_1 参数1
 * @param range_ptr 范围指针
 * @param min_val 最小值
 * @param max_val 最大值
 * @param result_ptr 结果指针
 * @return 计算结果
 */
uint FUN_18028aa10(uint64_t param_1, ushort *range_ptr, int min_val, int max_val, int *result_ptr)
{
  ushort current_val;
  uint range_end;
  uint range_start;
  int calc_result;
  uint accumulated_val;
  int temp_index;
  ushort *next_range;
  
  accumulated_val = 0;
  calc_result = 0;
  temp_index = 0;
  if ((int)(uint)*range_ptr < min_val + max_val) {
    do {
      range_start = (uint)range_ptr[1];
      if (accumulated_val < range_ptr[1]) {
        next_range = *(ushort **)(range_ptr + 4);
        temp_index = (range_start - accumulated_val) * temp_index;
        current_val = *next_range;
        range_end = (uint)current_val;
        accumulated_val = range_start;
        if ((int)(uint)*range_ptr < min_val) {
          temp_index = temp_index + ((uint)current_val - min_val);
        }
        else {
          temp_index = temp_index + ((uint)current_val - (uint)*range_ptr);
        }
      }
      else {
        next_range = *(ushort **)(range_ptr + 4);
        range_end = (uint)*next_range;
        temp_index = max_val - temp_index;
        if ((int)((range_end - *range_ptr) + temp_index) <= max_val) {
          temp_index = range_end - *range_ptr;
        }
        temp_index = temp_index + temp_index;
        temp_index = (accumulated_val - range_start) * temp_index;
      }
      calc_result = calc_result + temp_index;
      range_ptr = next_range;
    } while ((int)range_end < min_val + max_val);
    *result_ptr = calc_result;
  }
  else {
    *result_ptr = 0;
  }
  return accumulated_val;
}

/**
 * 计算渲染累加值
 * 计算渲染系统中的累加值
 * 
 * @return 累加结果
 */
uint FUN_18028aa42(void)
{
  ushort current_val;
  uint range_end;
  uint range_start;
  int min_val;
  int max_val;
  uint accumulated_val;
  int temp_index;
  ushort *next_range;
  
  do {
    range_start = (uint)in_R11[1];
    if ((int)unaff_EDI < (int)(uint)in_R11[1]) {
      next_range = *(ushort **)(in_R11 + 4);
      temp_index = (range_start - unaff_EDI) * in_R10D;
      current_val = *next_range;
      range_end = (uint)current_val;
      unaff_EDI = range_start;
      if ((int)(uint)*in_R11 < unaff_R14D) {
        in_R10D = in_R10D + ((uint)current_val - unaff_R14D);
      }
      else {
        in_R10D = in_R10D + ((uint)current_val - (uint)*in_R11);
      }
    }
    else {
      next_range = *(ushort **)(in_R11 + 4);
      range_end = (uint)*next_range;
      temp_index = unaff_R15D - in_R10D;
      if ((int)((range_end - *in_R11) + in_R10D) <= unaff_R15D) {
        temp_index = range_end - *in_R11;
      }
      in_R10D = in_R10D + temp_index;
      temp_index = (unaff_EDI - range_start) * temp_index;
    }
    unaff_ESI = unaff_ESI + temp_index;
    in_R11 = next_range;
  } while ((int)range_end < unaff_EBP);
  *in_stack_00000038 = unaff_ESI;
  return unaff_EDI;
}

/**
 * 获取渲染值
 * 获取渲染系统中的特定值
 * 
 * @return 渲染值
 */
int32_t FUN_18028aacb(void)
{
  int32_t return_value;
  
  *in_stack_00000038 = return_value;
  return return_value;
}