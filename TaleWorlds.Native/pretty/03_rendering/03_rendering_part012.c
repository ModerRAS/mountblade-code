#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part012.c - 渲染系统数据序列化函数

// 渲染系统常量定义
#define RENDER_VTABLE_BASE            (&system_state_ptr)
#define RENDER_VTABLE_EXTENDED        (&memory_allocator_3432_ptr)
#define RENDER_NAME_TEMPLATE          (&processed_var_8816_ptr)
#define RENDERER_VTABLE1              (&system_handler1_ptr)
#define RENDERER_VTABLE2              (&system_handler2_ptr)
#define RENDERER_SHADER_TABLE         (&processed_var_768_ptr)
#define RENDERER_CONFIG_TABLE         (&processed_var_9304_ptr)
#define RENDERER_LOCK_TABLE           (&processed_var_9288_ptr)
#define RENDER_STATE_NULL             (&system_state_ptr)
#define RENDER_MATERIAL_TABLE         (&system_data_buffer_ptr)
#define RENDER_SPECIAL_TABLE          (system_resource_state)
#define RENDER_ALLOC_TABLE            (system_memory_pool_ptr)
#define RENDER_CHECK_FUNCTION         (&processed_var_9120_ptr)

// 函数别名定义
#define expand_buffer_if_needed       System_BufferManager
#define write_buffer_entry            System_QueueProcessor
#define serialize_material_data      FUN_1806399d0
#define serialize_render_block_data  System_QueueProcessor
#define initialize_render_data_structures FUN_180285e20
#define initialize_render_internal_data FUN_1802786d0
#define apply_render_settings         FUN_18027a810
#define get_special_render_data      FUN_1800b6de0
#define apply_special_render_settings FUN_180275a60
#define trigger_render_error         CoreEngine_MemoryPoolManager
#define trigger_render_update        FUN_180079520
#define cleanup_render_internal_data FUN_180284500
#define cleanup_render_buffers       FUN_1802841d0
#define trigger_render_cleanup       func_0x0001802eeba0
#define allocate_render_memory       CoreSystem_LoggingManager0

/**
 * 序列化渲染对象数据到缓冲区
 * @param render_object 渲染对象指针
 * @param buffer 输出缓冲区
 */
void serialize_render_object_data(int64_t render_object, int64_t *buffer)

{
  int loop_counter;
  uint flag_value;
  uint temp_value1;
  uint temp_value2;
  char *char_ptr;
  int64_t *long_ptr;
  int64_t offset_value;
  uint64_t index_counter;
  int64_t buffer_start;
  int *int_ptr;
  uint *write_ptr;
  uint mask_value;
  uint64_t entry_count;
  uint64_t *entry_ptr;
  int64_t *data_array;
  uint64_t zero_counter;
  
  write_ptr = (uint *)buffer[1];
  if ((uint64_t)((*buffer - (int64_t)write_ptr) + buffer[2]) < 5) {
    expand_buffer_if_needed(buffer,(int64_t)write_ptr + (4 - *buffer));
    write_ptr = (uint *)buffer[1];
  }
  *write_ptr = 0;
  write_ptr = (uint *)(buffer[1] + 4);
  buffer[1] = (int64_t)write_ptr;
  if ((uint64_t)((*buffer - (int64_t)write_ptr) + buffer[2]) < 0x11) {
    expand_buffer_if_needed(buffer,(int64_t)write_ptr + (0x10 - *buffer));
    write_ptr = (uint *)buffer[1];
  }
  temp_value1 = *(uint *)(render_object + 0xc);
  temp_value2 = *(uint *)(render_object + 0x10);
  flag_value = *(uint *)(render_object + 0x14);
  *write_ptr = *(uint *)(render_object + 8);
  write_ptr[1] = temp_value1;
  write_ptr[2] = temp_value2;
  write_ptr[3] = flag_value;
  buffer[1] = buffer[1] + 0x10;
  write_ptr = (uint *)buffer[1];
  if ((uint64_t)((*buffer - (int64_t)write_ptr) + buffer[2]) < 5) {
    expand_buffer_if_needed(buffer,(int64_t)write_ptr + (4 - *buffer));
    write_ptr = (uint *)buffer[1];
  }
  *write_ptr = 2;
  buffer[1] = buffer[1] + 4;
  serialize_material_data(&RENDER_MATERIAL_TABLE,*(uint *)(render_object + 0x18),buffer);
  write_ptr = (uint *)buffer[1];
  mask_value = *(uint *)(render_object + 0x1c);
  if ((uint64_t)((*buffer - (int64_t)write_ptr) + buffer[2]) < 5) {
    expand_buffer_if_needed(buffer,(int64_t)write_ptr + (4 - *buffer));
    write_ptr = (uint *)buffer[1];
  }
  zero_counter = 0;
  *write_ptr = 0;
  buffer_start = *buffer;
  offset_value = buffer[1] + 4;
  buffer[1] = offset_value;
  index_counter = zero_counter;
  if (buffer_start != 0) {
    index_counter = offset_value - buffer_start;
  }
  if ((uint64_t)((buffer_start - offset_value) + buffer[2]) < 5) {
    expand_buffer_if_needed(buffer,(offset_value - buffer_start) + 4);
    offset_value = buffer[1];
  }
  buffer[1] = offset_value + 4;
  entry_ptr = (uint64_t *)0x18098e1e0;
  entry_count = zero_counter;
  do {
    if ((*(uint *)(entry_ptr + 1) & mask_value) != 0) {
      write_buffer_entry(buffer,*entry_ptr);
      entry_count = (uint64_t)((int)entry_count + 1);
    }
    entry_ptr = entry_ptr + 2;
  } while ((int64_t)entry_ptr < 0x18098e220);
  *(int *)(index_counter + *buffer) = (int)entry_count;
  char_ptr = (char *)0x180bf8ff8;
  index_counter = zero_counter;
  do {
    if (*char_ptr == *(char *)(render_object + 0x134)) {
      write_buffer_entry(buffer,*(uint64_t *)((int64_t)(int)index_counter * 0x10 + 0x180bf8ff0));
      break;
    }
    index_counter = (uint64_t)((int)index_counter + 1);
    char_ptr = char_ptr + 0x10;
  } while ((int64_t)char_ptr < 0x180bf90b8);
  write_ptr = (uint *)buffer[1];
  if ((uint64_t)((*buffer - (int64_t)write_ptr) + buffer[2]) < 0x11) {
    expand_buffer_if_needed(buffer,(int64_t)write_ptr + (0x10 - *buffer));
    write_ptr = (uint *)buffer[1];
  }
  temp_value1 = *(uint *)(render_object + 0x24);
  temp_value2 = *(uint *)(render_object + 0x28);
  flag_value = *(uint *)(render_object + 0x2c);
  data_array = (int64_t *)(render_object + 0x30);
  *write_ptr = *(uint *)(render_object + 0x20);
  write_ptr[1] = temp_value1;
  write_ptr[2] = temp_value2;
  write_ptr[3] = flag_value;
  buffer[1] = buffer[1] + 0x10;
  offset_value = 0x10;
  write_ptr = (uint *)buffer[1];
  long_ptr = data_array;
  index_counter = zero_counter;
  do {
    if ((*long_ptr != 0) || (long_ptr[1] != 0)) {
      index_counter = (uint64_t)((int)index_counter + 1);
    }
    long_ptr = long_ptr + 2;
    offset_value = offset_value + -1;
  } while (offset_value != 0);
  // 序列化渲染数据数组
  if ((uint64_t)((*buffer - (int64_t)write_ptr) + buffer[2]) < 5) {
    expand_buffer_if_needed(buffer, (int64_t)write_ptr + (4 - *buffer));
    write_ptr = (uint *)buffer[1];
  }
  *write_ptr = (int)index_counter;
  buffer[1] = buffer[1] + 4;
  index_counter = 0;
  data_array = (int64_t *)render_object + 0x30;
  do {
    if ((*data_array != 0) || (data_array[1] != 0)) {
      index_counter = (uint64_t)((int)index_counter + 1);
    }
    data_array = data_array + 2;
    offset_value = offset_value + -1;
  } while (offset_value != 0);
  
  // 序列化数据数组内容
  data_array = (int64_t *)render_object + 0x30;
  offset_value = 0;
  do {
    if ((*data_array != 0) || (data_array[1] != 0)) {
      write_ptr = (uint *)buffer[1];
      if ((uint64_t)((*buffer - (int64_t)write_ptr) + buffer[2]) < 5) {
        expand_buffer_if_needed(buffer, (int64_t)write_ptr + (4 - *buffer));
        write_ptr = (uint *)buffer[1];
      }
      *write_ptr = (int)offset_value;
      buffer[1] = buffer[1] + 4;
      write_ptr = (uint *)buffer[1];
      if ((uint64_t)((*buffer - (int64_t)write_ptr) + buffer[2]) < 0x11) {
        expand_buffer_if_needed(buffer, (int64_t)write_ptr + (0x10 - *buffer));
        write_ptr = (uint *)buffer[1];
      }
      temp_value1 = *(uint *)((int64_t)data_array + 4);
      flag_value = data_array[1];
      temp_value2 = *(uint *)((int64_t)data_array + 0xc);
      *write_ptr = (int)*data_array;
      write_ptr[1] = temp_value1;
      write_ptr[2] = (int)flag_value;
      write_ptr[3] = temp_value2;
      buffer[1] = buffer[1] + 0x10;
    }
    offset_value = (int)offset_value + 1;
    data_array = data_array + 2;
  } while ((int)offset_value < 0x10);
  
  // 序列化额外渲染数据
  temp_value1 = *(uint *)(render_object + 0x130);
  if ((uint64_t)((*buffer - (int64_t)write_ptr) + buffer[2]) < 5) {
    expand_buffer_if_needed(buffer, (int64_t)write_ptr + (4 - *buffer));
    write_ptr = (uint *)buffer[1];
  }
  *write_ptr = temp_value1;
  write_ptr = (uint *)(buffer[1] + 4);
  buffer[1] = (int64_t)write_ptr;
  flag_value = *(int64_t *)(render_object + 0x140);
  temp_value1 = *(int64_t *)(render_object + 0x138);
  if ((uint64_t)((*buffer - (int64_t)write_ptr) + buffer[2]) < 5) {
    expand_buffer_if_needed(buffer, (int64_t)write_ptr + (4 - *buffer));
    write_ptr = (uint *)buffer[1];
  }
  *write_ptr = (int)((flag_value - temp_value1) / 0x58);
  buffer[1] = buffer[1] + 4;
  
  // 序列化渲染块数据
  temp_value1 = *(int64_t *)(render_object + 0x140) - *(int64_t *)(render_object + 0x138);
  write_ptr = (uint *)buffer[1];
  flag_value = temp_value1 >> 0x3f;
  index_counter = 0;
  if (temp_value1 / 0x58 + flag_value != flag_value) {
    do {
      serialize_render_block_data(buffer, index_counter * 0x58 + *(int64_t *)(render_object + 0x138));
      offset_value = (int)index_counter + 1;
      index_counter = (uint64_t)(int)offset_value;
    } while (index_counter < (uint64_t)((*(int64_t *)(render_object + 0x140) - *(int64_t *)(render_object + 0x138)) / 0x58));
    write_ptr = (uint *)buffer[1];
  }
  
  // 序列化渲染参数
  temp_value1 = *(uint *)(render_object + 0x158);
  if ((uint64_t)((*buffer - (int64_t)write_ptr) + buffer[2]) < 5) {
    expand_buffer_if_needed(buffer, (int64_t)write_ptr + (4 - *buffer));
    write_ptr = (uint *)buffer[1];
  }
  *write_ptr = temp_value1;
  write_ptr = (uint *)(buffer[1] + 4);
  buffer[1] = (int64_t)write_ptr;
  temp_value1 = *(uint *)(render_object + 0x15c);
  if ((uint64_t)((*buffer - (int64_t)write_ptr) + buffer[2]) < 5) {
    expand_buffer_if_needed(buffer, (int64_t)write_ptr + (4 - *buffer));
    write_ptr = (uint *)buffer[1];
  }
  *write_ptr = temp_value1;
  write_ptr = (uint *)(buffer[1] + 4);
  buffer[1] = (int64_t)write_ptr;
  temp_value1 = *(uint *)(render_object + 0x160);
  if ((uint64_t)((*buffer - (int64_t)write_ptr) + buffer[2]) < 5) {
    expand_buffer_if_needed(buffer, (int64_t)write_ptr + (4 - *buffer));
    write_ptr = (uint *)buffer[1];
  }
  *write_ptr = temp_value1;
  write_ptr = (uint *)(buffer[1] + 4);
  buffer[1] = (int64_t)write_ptr;
  temp_value1 = *(uint *)(render_object + 0x164);
  if ((uint64_t)((*buffer - (int64_t)write_ptr) + buffer[2]) < 5) {
    expand_buffer_if_needed(buffer, (int64_t)write_ptr + (4 - *buffer));
    write_ptr = (uint *)buffer[1];
  }
  *write_ptr = temp_value1;
  write_ptr = (uint *)(buffer[1] + 4);
  buffer[1] = (int64_t)write_ptr;
  
  // 序列化渲染变换矩阵
  if ((uint64_t)((*buffer - (int64_t)write_ptr) + buffer[2]) < 0x11) {
    expand_buffer_if_needed(buffer, (int64_t)write_ptr + (0x10 - *buffer));
    write_ptr = (uint *)buffer[1];
  }
  *write_ptr = *(uint *)(render_object + 0x168);
  flag_value = buffer[1];
  buffer[1] = flag_value + 4;
  *(uint *)(flag_value + 4) = *(uint *)(render_object + 0x16c);
  flag_value = buffer[1];
  buffer[1] = flag_value + 4;
  *(uint *)(flag_value + 4) = *(uint *)(render_object + 0x170);
  flag_value = buffer[1];
  buffer[1] = flag_value + 4;
  *(uint *)(flag_value + 4) = *(uint *)(render_object + 0x174);
  write_ptr = (uint *)(buffer[1] + 4);
  buffer[1] = (int64_t)write_ptr;
  
  // 序列化渲染颜色数据
  if ((uint64_t)((*buffer - (int64_t)write_ptr) + buffer[2]) < 0x11) {
    expand_buffer_if_needed(buffer, (int64_t)write_ptr + (0x10 - *buffer));
    write_ptr = (uint *)buffer[1];
  }
  *write_ptr = *(uint *)(render_object + 0x178);
  flag_value = buffer[1];
  buffer[1] = flag_value + 4;
  *(uint *)(flag_value + 4) = *(uint *)(render_object + 0x17c);
  flag_value = buffer[1];
  buffer[1] = flag_value + 4;
  *(uint *)(flag_value + 4) = *(uint *)(render_object + 0x180);
  flag_value = buffer[1];
  buffer[1] = flag_value + 4;
  *(uint *)(flag_value + 4) = *(uint *)(render_object + 0x184);
  write_ptr = (uint *)(buffer[1] + 4);
  buffer[1] = (int64_t)write_ptr;
  
  // 序列化渲染光照数据
  if ((uint64_t)((*buffer - (int64_t)write_ptr) + buffer[2]) < 0x11) {
    expand_buffer_if_needed(buffer, (int64_t)write_ptr + (0x10 - *buffer));
    write_ptr = (uint *)buffer[1];
  }
  *write_ptr = *(uint *)(render_object + 0x188);
  flag_value = buffer[1];
  buffer[1] = flag_value + 4;
  *(uint *)(flag_value + 4) = *(uint *)(render_object + 0x18c);
  flag_value = buffer[1];
  buffer[1] = flag_value + 4;
  *(uint *)(flag_value + 4) = *(uint *)(render_object + 400);
  flag_value = buffer[1];
  buffer[1] = flag_value + 4;
  *(uint *)(flag_value + 4) = *(uint *)(render_object + 0x194);
  write_ptr = (uint *)(buffer[1] + 4);
  buffer[1] = (int64_t)write_ptr;
  
  // 序列化渲染纹理数据
  if ((uint64_t)((*buffer - (int64_t)write_ptr) + buffer[2]) < 0x11) {
    expand_buffer_if_needed(buffer, (int64_t)write_ptr + (0x10 - *buffer));
    write_ptr = (uint *)buffer[1];
  }
  *write_ptr = *(uint *)(render_object + 0x198);
  flag_value = buffer[1];
  buffer[1] = flag_value + 4;
  *(uint *)(flag_value + 4) = *(uint *)(render_object + 0x19c);
  flag_value = buffer[1];
  buffer[1] = flag_value + 4;
  *(uint *)(flag_value + 4) = *(uint *)(render_object + 0x1a0);
  flag_value = buffer[1];
  buffer[1] = flag_value + 4;
  *(uint *)(flag_value + 4) = *(uint *)(render_object + 0x1a4);
  write_ptr = (uint *)(buffer[1] + 4);
  buffer[1] = (int64_t)write_ptr;
  
  // 序列化渲染状态数据
  temp_value1 = *(uint *)(render_object + 0x1a8);
  if ((uint64_t)((*buffer - (int64_t)write_ptr) + buffer[2]) < 5) {
    expand_buffer_if_needed(buffer, (int64_t)write_ptr + (4 - *buffer));
    write_ptr = (uint *)buffer[1];
  }
  *write_ptr = temp_value1;
  write_ptr = (uint *)(buffer[1] + 4);
  buffer[1] = (int64_t)write_ptr;
  temp_value1 = *(uint *)(render_object + 0x1ac);
  if ((uint64_t)((*buffer - (int64_t)write_ptr) + buffer[2]) < 5) {
    expand_buffer_if_needed(buffer, (int64_t)write_ptr + (4 - *buffer));
    write_ptr = (uint *)buffer[1];
  }
  *write_ptr = temp_value1;
  write_ptr = (uint *)(buffer[1] + 4);
  buffer[1] = (int64_t)write_ptr;
  temp_value1 = *(uint *)(render_object + 0x1b0);
  if ((uint64_t)((*buffer - (int64_t)write_ptr) + buffer[2]) < 5) {
    expand_buffer_if_needed(buffer, (int64_t)write_ptr + (4 - *buffer));
    write_ptr = (uint *)buffer[1];
  }
  *write_ptr = temp_value1;
  write_ptr = (uint *)(buffer[1] + 4);
  buffer[1] = (int64_t)write_ptr;
  temp_value1 = *(uint *)(render_object + 0x1b4);
  if ((uint64_t)((*buffer - (int64_t)write_ptr) + buffer[2]) < 5) {
    expand_buffer_if_needed(buffer, (int64_t)write_ptr + (4 - *buffer));
    write_ptr = (uint *)buffer[1];
  }
  *write_ptr = temp_value1;
  write_ptr = (uint *)(buffer[1] + 4);
  buffer[1] = (int64_t)write_ptr;
  temp_value1 = *(uint *)(render_object + 0x1b8);
  if ((uint64_t)((*buffer - (int64_t)write_ptr) + buffer[2]) < 5) {
    expand_buffer_if_needed(buffer, (int64_t)write_ptr + (4 - *buffer));
    write_ptr = (uint *)buffer[1];
  }
  *write_ptr = temp_value1;
  write_ptr = (uint *)(buffer[1] + 4);
  buffer[1] = (int64_t)write_ptr;
  temp_value1 = *(uint *)(render_object + 0x1bc);
  if ((uint64_t)((*buffer - (int64_t)write_ptr) + buffer[2]) < 5) {
    expand_buffer_if_needed(buffer, (int64_t)write_ptr + (4 - *buffer));
    write_ptr = (uint *)buffer[1];
  }
  *write_ptr = temp_value1;
  write_ptr = (uint *)(buffer[1] + 4);
  buffer[1] = (int64_t)write_ptr;
  temp_value1 = *(uint *)(render_object + 0x1c0);
  if ((uint64_t)((*buffer - (int64_t)write_ptr) + buffer[2]) < 5) {
    expand_buffer_if_needed(buffer, (int64_t)write_ptr + (4 - *buffer));
    write_ptr = (uint *)buffer[1];
  }
  *write_ptr = temp_value1;
  write_ptr = (uint *)(buffer[1] + 4);
  buffer[1] = (int64_t)write_ptr;
  temp_value1 = *(uint *)(render_object + 0x1c4);
  if ((uint64_t)((*buffer - (int64_t)write_ptr) + buffer[2]) < 5) {
    expand_buffer_if_needed(buffer, (int64_t)write_ptr + (4 - *buffer));
    *(uint *)buffer[1] = temp_value1;
  }
  else {
    *write_ptr = temp_value1;
  }
  buffer[1] = buffer[1] + 4;
  return;
}



/**
 * 初始化渲染状态对象
 * @param render_state 渲染状态对象指针
 * @return 初始化后的渲染状态对象指针
 */
uint64_t * initialize_render_state(uint64_t *render_state)

{
  *render_state = &system_state_ptr;
  render_state[1] = 0;
  *(int32_t *)(render_state + 2) = 0;
  *render_state = &processed_var_768_ptr;
  render_state[1] = render_state + 3;
  *(int32_t *)(render_state + 2) = 0;
  *(int8_t *)(render_state + 3) = 0;
  render_state[0x22] = &system_state_ptr;
  render_state[0x23] = 0;
  *(int32_t *)(render_state + 0x24) = 0;
  render_state[0x22] = &system_data_buffer_ptr;
  render_state[0x25] = 0;
  render_state[0x23] = 0;
  *(int32_t *)(render_state + 0x24) = 0;
  render_state[0x26] = 0;
  render_state[0x27] = 0;
  render_state[0x28] = 0;
  *(int32_t *)(render_state + 0x29) = 3;
  render_state[0x2a] = 0;
  render_state[0x2b] = 0;
  render_state[0x2c] = 0;
  *(int32_t *)(render_state + 0x2d) = 3;
  render_state[0x2e] = 0;
  render_state[0x2f] = 0;
  render_state[0x30] = 0;
  *(int32_t *)(render_state + 0x31) = 3;
  *(uint64_t *)((int64_t)render_state + 0x5c) = 0;
  *(int32_t *)((int64_t)render_state + 100) = 0;
  *(int32_t *)(render_state + 0x10) = 0;
  *(int32_t *)((int64_t)render_state + 0x84) = 0;
  *(int32_t *)(render_state + 0x11) = 0;
  *(int32_t *)((int64_t)render_state + 0x8c) = 0x3f800000;
  *(int32_t *)(render_state + 0x12) = 0;
  *(int32_t *)((int64_t)render_state + 0x94) = 0;
  *(int32_t *)(render_state + 0x13) = 0;
  *(int32_t *)((int64_t)render_state + 0x9c) = 0x3f800000;
  render_state[0x14] = 0;
  render_state[0x15] = 0;
  render_state[0x16] = 0;
  render_state[0x17] = 0;
  render_state[0x18] = 0;
  render_state[0x19] = 0;
  render_state[0x1a] = 0x3f800000;
  render_state[0x1b] = 0;
  render_state[0x1c] = 0x3f80000000000000;
  render_state[0x1d] = 0;
  render_state[0x1e] = 0;
  render_state[0x1f] = 0x3f800000;
  render_state[0x20] = 0;
  render_state[0x21] = 0x3f80000000000000;
  *(int32_t *)(render_state + 0xb) = 0;
  render_state[0xd] = 0;
  render_state[0xe] = 0;
  render_state[0xf] = 0;
  *(int32_t *)(render_state + 0x33) = 0xffffffff;
  render_state[0x32] = 0;
  return render_state;
}



/**
 * 创建基础渲染对象
 * @param param_1 渲染对象指针
 * @param param_2 渲染对象输出指针
 * @param param_3 渲染参数1
 * @param param_4 渲染参数2
 * @return 渲染对象指针
 */
uint64_t * create_base_render_object(uint64_t param_1, uint64_t *render_object_ptr, uint64_t render_param1, uint64_t render_param2)

{
  *render_object_ptr = &RENDER_VTABLE_BASE;
  render_object_ptr[1] = 0;
  *(int32_t *)(render_object_ptr + 2) = 0;
  *render_object_ptr = &RENDER_VTABLE_EXTENDED;
  render_object_ptr[1] = render_object_ptr + 3;
  *(int8_t *)(render_object_ptr + 3) = 0;
  *(int32_t *)(render_object_ptr + 2) = 0xc;
  strcpy_s(render_object_ptr[1], 0x80, &RENDER_NAME_TEMPLATE, render_param2, 0, 0xfffffffffffffffe);
  return render_object_ptr;
}



/**
 * 初始化渲染器
 * @param renderer 渲染器指针
 * @return 初始化后的渲染器指针
 */
uint64_t * initialize_renderer(uint64_t *renderer)

{
  *renderer = &RENDERER_VTABLE1;
  *renderer = &RENDERER_VTABLE2;
  *(int32_t *)(renderer + 1) = 0;
  *renderer = &RENDERER_SHADER_TABLE;
  *(int32_t *)(renderer + 2) = 4;
  renderer[3] = 0;
  renderer[4] = 0;
  *(int32_t *)(renderer + 1) = 0;
  renderer[5] = 0;
  *renderer = &RENDERER_CONFIG_TABLE;
  renderer[7] = 0;
  renderer[8] = 0;
  renderer[9] = 0;
  *(int32_t *)(renderer + 10) = 0x16;
  initialize_render_data_structures(renderer + 0xd);
  renderer[0x3e] = &RENDER_STATE_NULL;
  renderer[0x3f] = 0;
  *(int32_t *)(renderer + 0x40) = 0;
  renderer[0x3e] = &RENDER_MATERIAL_TABLE;
  renderer[0x41] = 0;
  renderer[0x3f] = 0;
  *(int32_t *)(renderer + 0x40) = 0;
  *(int32_t *)((int64_t)renderer + 0x244) = 0;
  *(uint64_t *)((int64_t)renderer + 0x214) = 0;
  *(uint64_t *)((int64_t)renderer + 0x21c) = 0;
  *(uint64_t *)((int64_t)renderer + 0x224) = 0;
  *(uint64_t *)((int64_t)renderer + 0x22c) = 0;
  *(uint64_t *)((int64_t)renderer + 0x234) = 0;
  *(uint64_t *)((int64_t)renderer + 0x23c) = 0;
  *(uint64_t *)((int64_t)renderer + 0x24c) = 0;
  *(uint64_t *)((int64_t)renderer + 0x254) = 0x7f7fffff00000000;
  *(uint64_t *)((int64_t)renderer + 0x25c) = 0;
  *(uint64_t *)((int64_t)renderer + 0x264) = 0x7f7fffff00000000;
  *(uint64_t *)((int64_t)renderer + 0x26c) = 0;
  *(uint64_t *)((int64_t)renderer + 0x274) = 0x7f7fffff00000000;
  *(uint64_t *)((int64_t)renderer + 0x2fc) = 0;
  *(uint64_t *)((int64_t)renderer + 0x27c) = 0;
  *(uint64_t *)((int64_t)renderer + 0x284) = 0;
  *(uint64_t *)((int64_t)renderer + 0x28c) = 0;
  *(uint64_t *)((int64_t)renderer + 0x294) = 0;
  *(uint64_t *)((int64_t)renderer + 0x29c) = 0;
  *(uint64_t *)((int64_t)renderer + 0x2a4) = 0;
  *(uint64_t *)((int64_t)renderer + 0x2ac) = 0;
  *(uint64_t *)((int64_t)renderer + 0x2b4) = 0;
  *(uint64_t *)((int64_t)renderer + 700) = 0;
  *(uint64_t *)((int64_t)renderer + 0x2c4) = 0;
  *(uint64_t *)((int64_t)renderer + 0x2cc) = 0;
  *(uint64_t *)((int64_t)renderer + 0x2d4) = 0;
  *(int32_t *)((int64_t)renderer + 0x2dc) = 0;
  *(int32_t *)(renderer + 0x5c) = 0;
  *(int32_t *)((int64_t)renderer + 0x2e4) = 0;
  *(int32_t *)(renderer + 0x5d) = 0;
  *(int32_t *)((int64_t)renderer + 0x2ec) = 0;
  *(int32_t *)(renderer + 0x5e) = 0;
  *(int32_t *)((int64_t)renderer + 0x2f4) = 0;
  *(int32_t *)(renderer + 0x5f) = 0;
  renderer[0x61] = &RENDERER_LOCK_TABLE;
  LOCK();
  *(int32_t *)(renderer + 0x62) = 0;
  UNLOCK();
  renderer[99] = 0xffffffffffffffff;
  renderer[0x77] = 0;
  renderer[0x79] = 0;
  initialize_render_internal_data(renderer);
  *(int32_t *)(renderer + 1) = 0;
  return renderer;
}



/**
 * 释放渲染资源
 * @param render_object 渲染对象指针
 * @param free_flags 释放标志位
 * @return 渲染对象指针
 */
uint64_t release_render_resources(uint64_t render_object, uint64_t free_flags)

{
  destroy_render_object();
  if ((free_flags & 1) != 0) {
    free(render_object, 0x3d0);
  }
  return render_object;
}





/**
 * 清理渲染队列
 * @param render_queue 渲染队列指针
 */
void cleanup_render_queue(int64_t *render_queue)

{
  int64_t *current_entry;
  int64_t *queue_end;
  
  current_entry = (int64_t *)render_queue[1];
  for (queue_end = (int64_t *)*render_queue; queue_end != current_entry; queue_end = queue_end + 2) {
    if ((int64_t *)*queue_end != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*queue_end + 0x38))();
    }
  }
  if (*render_queue == 0) {
    return;
  }
  // WARNING: Subroutine does not return
  trigger_render_error();
}





/**
 * 重置渲染状态
 * @param render_context 渲染上下文指针
 */
void reset_render_state(int64_t render_context)

{
  *(uint64_t *)(render_context + 0x168) = &RENDER_MATERIAL_TABLE;
  if (*(int64_t *)(render_context + 0x170) != 0) {
    // WARNING: Subroutine does not return
    trigger_render_error();
  }
  *(uint64_t *)(render_context + 0x170) = 0;
  *(int32_t *)(render_context + 0x180) = 0;
  *(uint64_t *)(render_context + 0x168) = &RENDER_STATE_NULL;
  *(uint64_t *)(render_context + 0x148) = &RENDER_MATERIAL_TABLE;
  if (*(int64_t *)(render_context + 0x150) != 0) {
    // WARNING: Subroutine does not return
    trigger_render_error();
  }
  *(uint64_t *)(render_context + 0x150) = 0;
  *(int32_t *)(render_context + 0x160) = 0;
  *(uint64_t *)(render_context + 0x148) = &RENDER_STATE_NULL;
  *(void **)(render_context + 0xb0) = &RENDER_STATE_NULL;
  *(void **)(render_context + 0x18) = &RENDER_STATE_NULL;
  return;
}



/**
 * 创建带参数的渲染对象
 * @param render_object 渲染对象指针
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 * @return 渲染对象指针
 */
uint64_t * create_render_object_with_params(uint64_t *render_object, uint64_t param1, uint64_t param2, uint64_t param3)

{
  *render_object = &RENDERER_VTABLE1;
  *render_object = &RENDERER_VTABLE2;
  *(int32_t *)(render_object + 1) = 0;
  *render_object = &RENDERER_SHADER_TABLE;
  *(int32_t *)(render_object + 2) = 4;
  render_object[3] = 0;
  render_object[4] = 0;
  *(int32_t *)(render_object + 1) = 0;
  render_object[5] = 0;
  *render_object = &RENDERER_CONFIG_TABLE;
  render_object[7] = 0;
  render_object[8] = 0;
  render_object[9] = 0;
  *(int32_t *)(render_object + 10) = 0x16;
  initialize_render_data_structures(render_object + 0xd, param1, param2, param3, 0xfffffffffffffffe);
  render_object[0x3e] = &RENDER_STATE_NULL;
  render_object[0x3f] = 0;
  *(int32_t *)(render_object + 0x40) = 0;
  render_object[0x3e] = &RENDER_MATERIAL_TABLE;
  render_object[0x41] = 0;
  render_object[0x3f] = 0;
  *(int32_t *)(render_object + 0x40) = 0;
  *(int32_t *)((int64_t)render_object + 0x244) = 0;
  *(uint64_t *)((int64_t)render_object + 0x214) = 0;
  *(uint64_t *)((int64_t)render_object + 0x21c) = 0;
  *(uint64_t *)((int64_t)render_object + 0x224) = 0;
  *(uint64_t *)((int64_t)render_object + 0x22c) = 0;
  *(uint64_t *)((int64_t)render_object + 0x234) = 0;
  *(uint64_t *)((int64_t)render_object + 0x23c) = 0;
  *(uint64_t *)((int64_t)render_object + 0x24c) = 0;
  *(uint64_t *)((int64_t)render_object + 0x254) = 0x7f7fffff00000000;
  *(uint64_t *)((int64_t)render_object + 0x25c) = 0;
  *(uint64_t *)((int64_t)render_object + 0x264) = 0x7f7fffff00000000;
  *(uint64_t *)((int64_t)render_object + 0x26c) = 0;
  *(uint64_t *)((int64_t)render_object + 0x274) = 0x7f7fffff00000000;
  *(uint64_t *)((int64_t)render_object + 0x2fc) = 0;
  *(uint64_t *)((int64_t)render_object + 0x27c) = 0;
  *(uint64_t *)((int64_t)render_object + 0x284) = 0;
  *(uint64_t *)((int64_t)render_object + 0x28c) = 0;
  *(uint64_t *)((int64_t)render_object + 0x294) = 0;
  *(uint64_t *)((int64_t)render_object + 0x29c) = 0;
  *(uint64_t *)((int64_t)render_object + 0x2a4) = 0;
  *(uint64_t *)((int64_t)render_object + 0x2ac) = 0;
  *(uint64_t *)((int64_t)render_object + 0x2b4) = 0;
  *(uint64_t *)((int64_t)render_object + 700) = 0;
  *(uint64_t *)((int64_t)render_object + 0x2c4) = 0;
  *(uint64_t *)((int64_t)render_object + 0x2cc) = 0;
  *(uint64_t *)((int64_t)render_object + 0x2d4) = 0;
  *(int32_t *)((int64_t)render_object + 0x2dc) = 0;
  *(int32_t *)(render_object + 0x5c) = 0;
  *(int32_t *)((int64_t)render_object + 0x2e4) = 0;
  *(int32_t *)(render_object + 0x5d) = 0;
  *(int32_t *)((int64_t)render_object + 0x2ec) = 0;
  *(int32_t *)(render_object + 0x5e) = 0;
  *(int32_t *)((int64_t)render_object + 0x2f4) = 0;
  *(int32_t *)(render_object + 0x5f) = 0;
  render_object[0x61] = &RENDERER_LOCK_TABLE;
  LOCK();
  *(int32_t *)(render_object + 0x62) = 0;
  UNLOCK();
  render_object[99] = 0xffffffffffffffff;
  render_object[0x77] = 0;
  render_object[0x79] = 0;
  initialize_render_internal_data(render_object);
  *(int32_t *)(render_object + 1) = 0;
  apply_render_settings(render_object, param1);
  return render_object;
}



/**
 * 创建特殊渲染对象
 * @param render_object 渲染对象指针
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 * @return 渲染对象指针
 */
uint64_t * create_special_render_object(uint64_t *render_object, uint64_t param1, uint64_t param2, uint64_t param3)

{
  int64_t special_result;
  
  *render_object = &RENDERER_VTABLE1;
  *render_object = &RENDERER_VTABLE2;
  *(int32_t *)(render_object + 1) = 0;
  *render_object = &RENDERER_SHADER_TABLE;
  *(int32_t *)(render_object + 2) = 4;
  render_object[3] = 0;
  render_object[4] = 0;
  *(int32_t *)(render_object + 1) = 0;
  render_object[5] = 0;
  *render_object = &RENDERER_CONFIG_TABLE;
  render_object[7] = 0;
  render_object[8] = 0;
  render_object[9] = 0;
  *(int32_t *)(render_object + 10) = 0x16;
  initialize_render_data_structures(render_object + 0xd, param1, (char)param2, param3, 0xfffffffffffffffe);
  render_object[0x3e] = &RENDER_STATE_NULL;
  render_object[0x3f] = 0;
  *(int32_t *)(render_object + 0x40) = 0;
  render_object[0x3e] = &RENDER_MATERIAL_TABLE;
  render_object[0x41] = 0;
  render_object[0x3f] = 0;
  *(int32_t *)(render_object + 0x40) = 0;
  *(int32_t *)((int64_t)render_object + 0x244) = 0;
  *(uint64_t *)((int64_t)render_object + 0x214) = 0;
  *(uint64_t *)((int64_t)render_object + 0x21c) = 0;
  *(uint64_t *)((int64_t)render_object + 0x224) = 0;
  *(uint64_t *)((int64_t)render_object + 0x22c) = 0;
  *(uint64_t *)((int64_t)render_object + 0x234) = 0;
  *(uint64_t *)((int64_t)render_object + 0x23c) = 0;
  *(uint64_t *)((int64_t)render_object + 0x24c) = 0;
  *(uint64_t *)((int64_t)render_object + 0x254) = 0x7f7fffff00000000;
  *(uint64_t *)((int64_t)render_object + 0x25c) = 0;
  *(uint64_t *)((int64_t)render_object + 0x264) = 0x7f7fffff00000000;
  *(uint64_t *)((int64_t)render_object + 0x26c) = 0;
  *(uint64_t *)((int64_t)render_object + 0x274) = 0x7f7fffff00000000;
  *(uint64_t *)((int64_t)render_object + 0x2fc) = 0;
  *(uint64_t *)((int64_t)render_object + 0x27c) = 0;
  *(uint64_t *)((int64_t)render_object + 0x284) = 0;
  *(uint64_t *)((int64_t)render_object + 0x28c) = 0;
  *(uint64_t *)((int64_t)render_object + 0x294) = 0;
  *(uint64_t *)((int64_t)render_object + 0x29c) = 0;
  *(uint64_t *)((int64_t)render_object + 0x2a4) = 0;
  *(uint64_t *)((int64_t)render_object + 0x2ac) = 0;
  *(uint64_t *)((int64_t)render_object + 0x2b4) = 0;
  *(uint64_t *)((int64_t)render_object + 700) = 0;
  *(uint64_t *)((int64_t)render_object + 0x2c4) = 0;
  *(uint64_t *)((int64_t)render_object + 0x2cc) = 0;
  *(uint64_t *)((int64_t)render_object + 0x2d4) = 0;
  *(int32_t *)((int64_t)render_object + 0x2dc) = 0;
  *(int32_t *)(render_object + 0x5c) = 0;
  *(int32_t *)((int64_t)render_object + 0x2e4) = 0;
  *(int32_t *)(render_object + 0x5d) = 0;
  *(int32_t *)((int64_t)render_object + 0x2ec) = 0;
  *(int32_t *)(render_object + 0x5e) = 0;
  *(int32_t *)((int64_t)render_object + 0x2f4) = 0;
  *(int32_t *)(render_object + 0x5f) = 0;
  render_object[0x61] = &RENDERER_LOCK_TABLE;
  LOCK();
  *(int32_t *)(render_object + 0x62) = 0;
  UNLOCK();
  render_object[99] = 0xffffffffffffffff;
  render_object[0x77] = 0;
  render_object[0x79] = 0;
  initialize_render_internal_data(render_object);
  *(int32_t *)(render_object + 1) = 0;
  special_result = get_special_render_data(RENDER_SPECIAL_TABLE, param1, 1);
  if (special_result != 0) {
    apply_special_render_settings(special_result, render_object, 1);
  }
  apply_render_settings(render_object, param2);
  return render_object;
}





/**
 * 销毁渲染对象
 * @param render_object 渲染对象指针
 */
void destroy_render_object(uint64_t *render_object)

{
  *render_object = &RENDERER_CONFIG_TABLE;
  cleanup_render_cache();
  if ((int64_t *)render_object[0x79] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)render_object[0x79] + 0x38))();
  }
  if ((int64_t *)render_object[0x77] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)render_object[0x77] + 0x38))();
  }
  render_object[0x61] = &RENDERER_LOCK_TABLE;
  render_object[0x3e] = &RENDER_MATERIAL_TABLE;
  if (render_object[0x3f] != 0) {
    // WARNING: Subroutine does not return
    trigger_render_error();
  }
  render_object[0x3f] = 0;
  *(int32_t *)(render_object + 0x41) = 0;
  render_object[0x3e] = &RENDER_STATE_NULL;
  reset_render_state(render_object + 0xd);
  cleanup_render_buffers();
  *render_object = &RENDERER_SHADER_TABLE;
  render_object[5] = 0;
  *render_object = &RENDERER_VTABLE2;
  *render_object = &RENDERER_VTABLE1;
  return;
}



/**
 * 获取渲染数据
 * @param render_object 渲染对象指针
 * @return 渲染数据指针
 */
uint64_t get_render_data(int64_t *render_object)

{
  char is_ready;
  
  if (*(code **)(*render_object + 0xc0) == (code *)&RENDER_CHECK_FUNCTION) {
    is_ready = (render_object[8] - render_object[7] & 0xfffffffffffffff0U) == 0;
  }
  else {
    is_ready = (**(code **)(*render_object + 0xc0))();
  }
  if (is_ready == '\0') {
    return *(uint64_t *)render_object[7];
  }
  return 0;
}



/**
 * 检查渲染状态
 * @param render_object 渲染对象指针
 * @return 渲染状态指针
 */
uint64_t check_render_status(uint64_t *render_object)

{
  char is_complete;
  
  if ((void *)*render_object == &RENDERER_CONFIG_TABLE) {
    is_complete = (render_object[8] - render_object[7] & 0xfffffffffffffff0) == 0;
  }
  else {
    is_complete = (**(code **)((void *)*render_object + 0xc0))(render_object);
  }
  if (is_complete == '\0') {
    return *(uint64_t *)render_object[7];
  }
  return 0;
}





/**
 * 设置渲染标志
 * @param render_context 渲染上下文
 * @param flag_value 标志值
 */
void set_render_flag(int64_t render_context, char flag_value)

{
  uint64_t entry_index;
  uint entry_count;
  uint64_t max_entries;
  int64_t entry_ptr;
  
  entry_ptr = *(int64_t *)(render_context + 0x38);
  entry_index = 0;
  max_entries = entry_index;
  if (*(int64_t *)(render_context + 0x40) - entry_ptr >> 4 != 0) {
    do {
      entry_ptr = *(int64_t *)(entry_index + entry_ptr);
      if (flag_value == '\0') {
        if (*(char *)(entry_ptr + 0xfa) != '\0') {
          *(int8_t *)(entry_ptr + 0xfa) = 0;
FLAG_SET_TRIGGER:
          trigger_render_update();
        }
      }
      else if (*(char *)(entry_ptr + 0xfa) != '\x01') {
        *(int8_t *)(entry_ptr + 0xfa) = 1;
        goto FLAG_SET_TRIGGER;
      }
      entry_ptr = *(int64_t *)(render_context + 0x38);
      entry_count = (int)max_entries + 1;
      entry_index = entry_index + 0x10;
      max_entries = (uint64_t)entry_count;
    } while ((uint64_t)(int64_t)(int)entry_count <
             (uint64_t)(*(int64_t *)(render_context + 0x40) - entry_ptr >> 4));
  }
  return;
}





/**
 * 批量设置渲染标志
 * @param param1 参数1
 * @param param2 参数2
 * @param render_context 渲染上下文
 */
void batch_set_render_flags(uint64_t param1, uint64_t param2, int64_t render_context)

{
  int64_t entry_ptr;
  uint64_t entry_index;
  char flag_value;
  int64_t context_ptr;
  uint entry_counter;
  
  entry_index = (uint64_t)entry_counter;
  do {
    entry_ptr = *(int64_t *)(entry_index + render_context);
    if (flag_value == '\0') {
      if (*(char *)(entry_ptr + 0xfa) != '\0') {
        *(int8_t *)(entry_ptr + 0xfa) = 0;
BATCH_FLAG_TRIGGER:
        trigger_render_update();
      }
    }
    else if (*(char *)(entry_ptr + 0xfa) != '\x01') {
      *(int8_t *)(entry_ptr + 0xfa) = 1;
      goto BATCH_FLAG_TRIGGER;
    }
    render_context = *(int64_t *)(context_ptr + 0x38);
    entry_counter = entry_counter + 1;
    entry_index = entry_index + 0x10;
    if ((uint64_t)(*(int64_t *)(context_ptr + 0x40) - render_context >> 4) <=
        (uint64_t)(int64_t)(int)entry_counter) {
      return;
    }
  } while( true );
}





/**
 * 空函数 - 占位符
 */
void empty_function(void)

{
  return;
}





/**
 * 清理渲染缓存
 * @param render_context 渲染上下文
 */
void cleanup_render_cache(int64_t render_context)

{
  int entry_count;
  int64_t entry_ptr;
  int64_t counter;
  
  entry_ptr = 0;
  entry_count = (int)(*(int64_t *)(render_context + 0x40) - *(int64_t *)(render_context + 0x38) >> 4);
  counter = (int64_t)entry_count;
  if (0 < entry_count) {
    do {
      *(uint64_t *)(*(int64_t *)(entry_ptr + *(int64_t *)(render_context + 0x38)) + 0x1c8) = 0;
      counter = counter + -1;
      entry_ptr = entry_ptr + 0x10;
    } while (counter != 0);
  }
  cleanup_render_internal_data();
  entry_ptr = *(int64_t *)(render_context + 0x28);
  *(int32_t *)(render_context + 0x58) = 0;
  if ((entry_ptr != 0) &&
     (*(short *)(entry_ptr + 0x2b0) = *(short *)(entry_ptr + 0x2b0) + 1, *(int64_t *)(entry_ptr + 0x168) != 0))
  {
    trigger_render_cleanup();
  }
  return;
}



/**
 * 创建渲染实例
 * @param param1 参数1
 * @param render_instance_ptr 渲染实例指针
 * @return 渲染实例指针
 */
uint64_t * create_render_instance(uint64_t param1, uint64_t *render_instance_ptr)

{
  uint64_t instance_handle;
  int64_t *instance_data;
  
  instance_handle = allocate_render_memory(RENDER_ALLOC_TABLE, 0x3d0, 8, 0x16, 0, 0xfffffffffffffffe);
  instance_data = (int64_t *)initialize_renderer(instance_handle);
  *render_instance_ptr = instance_data;
  if (instance_data != (int64_t *)0x0) {
    (**(code **)(*instance_data + 0x28))(instance_data);
  }
  apply_special_render_settings(param1, *render_instance_ptr, 1);
  return render_instance_ptr;
}





