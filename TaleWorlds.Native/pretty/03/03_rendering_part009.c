#include "TaleWorlds.Native.Split.h"

// 03_rendering_part009.c - 渲染系统数据处理函数 (5个函数)

// 函数: 序列化渲染对象数据到缓冲区
// 原始函数名: FUN_1802722e0
void serialize_render_object_data(int64_t render_context, int64_t *buffer_context)

{
  int8_t byte_value;
  int32_t dword_value;
  int64_t range_size;
  int64_t temp_range;
  int8_t *byte_ptr;
  int32_t *dword_ptr;
  int *int_ptr;
  uint counter;
  uint64_t loop_index;
  uint64_t start_addr;
  uint64_t current_index;
  
  dword_ptr = (int32_t *)buffer_context[1];
  if ((uint64_t)((*buffer_context - (int64_t)dword_ptr) + buffer_context[2]) < 5) {
    ensure_buffer_capacity(buffer_context, (int64_t)dword_ptr + (4 - *buffer_context));
    dword_ptr = (int32_t *)buffer_context[1];
  }
  start_addr = 0;
  *dword_ptr = 0;
  buffer_context[1] = buffer_context[1] + 4;
  range_size = *(int64_t *)(render_context + 0x28) - *(int64_t *)(render_context + 0x20);
  int_ptr = (int *)buffer_context[1];
  range_size = range_size / 0x26 + (range_size >> 0x3f);
  if ((uint64_t)((*buffer_context - (int64_t)int_ptr) + buffer_context[2]) < 5) {
    ensure_buffer_capacity(buffer_context, (int64_t)int_ptr + (4 - *buffer_context));
    int_ptr = (int *)buffer_context[1];
  }
  *int_ptr = (int)(range_size >> 2) - (int)(range_size >> 0x3f);
  buffer_context[1] = buffer_context[1] + 4;
  temp_range = *(int64_t *)(render_context + 0x28) - *(int64_t *)(render_context + 0x20);
  range_size = temp_range >> 0x3f;
  current_index = start_addr;
  loop_index = start_addr;
  if (temp_range / 0x98 + range_size != range_size) {
    do {
      serialize_data_block(buffer_context, loop_index * 0x98 + *(int64_t *)(render_context + 0x20));
      counter = (int)current_index + 1;
      current_index = (uint64_t)counter;
      loop_index = (int64_t)(int)counter;
    } while ((uint64_t)(int64_t)(int)counter <
             (uint64_t)((*(int64_t *)(render_context + 0x28) - *(int64_t *)(render_context + 0x20)) / 0x98));
  }
  serialize_data_block(buffer_context, render_context + 0x40);
  byte_ptr = (int8_t *)buffer_context[1];
  byte_value = *(int8_t *)(render_context + 0xd8);
  if ((uint64_t)((*buffer_context - (int64_t)byte_ptr) + buffer_context[2]) < 2) {
    ensure_buffer_capacity(buffer_context, byte_ptr + (1 - *buffer_context));
    byte_ptr = (int8_t *)buffer_context[1];
  }
  *byte_ptr = byte_value;
  buffer_context[1] = buffer_context[1] + 1;
  dword_ptr = (int32_t *)buffer_context[1];
  dword_value = *(int32_t *)(render_context + 0xdc);
  if ((uint64_t)((*buffer_context - (int64_t)dword_ptr) + buffer_context[2]) < 5) {
    ensure_buffer_capacity(buffer_context, (int64_t)dword_ptr + (4 - *buffer_context));
    dword_ptr = (int32_t *)buffer_context[1];
  }
  *dword_ptr = dword_value;
  buffer_context[1] = buffer_context[1] + 4;
  serialize_data_block(buffer_context, render_context + 0xe0);
  range_size = *(int64_t *)(render_context + 0x180) - *(int64_t *)(render_context + 0x178);
  range_size = range_size / 0x26 + (range_size >> 0x3f);
  int_ptr = (int *)buffer_context[1];
  if ((uint64_t)((*buffer_context - (int64_t)int_ptr) + buffer_context[2]) < 5) {
    ensure_buffer_capacity(buffer_context, (int64_t)int_ptr + (4 - *buffer_context));
    int_ptr = (int *)buffer_context[1];
  }
  *int_ptr = (int)(range_size >> 2) - (int)(range_size >> 0x3f);
  buffer_context[1] = buffer_context[1] + 4;
  temp_range = *(int64_t *)(render_context + 0x180) - *(int64_t *)(render_context + 0x178);
  range_size = temp_range >> 0x3f;
  current_index = start_addr;
  loop_index = start_addr;
  if (temp_range / 0x98 + range_size != range_size) {
    do {
      serialize_data_block(buffer_context, loop_index * 0x98 + *(int64_t *)(render_context + 0x178));
      counter = (int)current_index + 1;
      current_index = (uint64_t)counter;
      loop_index = (int64_t)(int)counter;
    } while ((uint64_t)(int64_t)(int)counter <
             (uint64_t)((*(int64_t *)(render_context + 0x180) - *(int64_t *)(render_context + 0x178)) / 0x98));
  }
  range_size = render_context + 0x198;
  temp_range = 5;
  do {
    serialize_data_block(buffer_context, range_size);
    range_size = range_size + 0x98;
    temp_range = temp_range + -1;
  } while (temp_range != 0);
  range_size = *(int64_t *)(render_context + 0x498) - *(int64_t *)(render_context + 0x490);
  range_size = range_size / 0x26 + (range_size >> 0x3f);
  int_ptr = (int *)buffer_context[1];
  if ((uint64_t)((*buffer_context - (int64_t)int_ptr) + buffer_context[2]) < 5) {
    ensure_buffer_capacity(buffer_context, (int64_t)int_ptr + (4 - *buffer_context));
    int_ptr = (int *)buffer_context[1];
  }
  *int_ptr = (int)(range_size >> 2) - (int)(range_size >> 0x3f);
  buffer_context[1] = buffer_context[1] + 4;
  temp_range = *(int64_t *)(render_context + 0x498) - *(int64_t *)(render_context + 0x490);
  range_size = temp_range >> 0x3f;
  current_index = start_addr;
  loop_index = start_addr;
  if (temp_range / 0x98 + range_size != range_size) {
    do {
      serialize_data_block(buffer_context, loop_index * 0x98 + *(int64_t *)(render_context + 0x490));
      counter = (int)current_index + 1;
      current_index = (uint64_t)counter;
      loop_index = (int64_t)(int)counter;
    } while ((uint64_t)(int64_t)(int)counter <
             (uint64_t)((*(int64_t *)(render_context + 0x498) - *(int64_t *)(render_context + 0x490)) / 0x98));
  }
  range_size = render_context + 0xa30;
  temp_range = 9;
  do {
    serialize_data_block(buffer_context, range_size);
    range_size = range_size + 0x98;
    temp_range = temp_range + -1;
  } while (temp_range != 0);
  serialize_data_block(buffer_context, render_context + 0xf88);
  serialize_data_block(buffer_context, render_context + 0x1020);
  range_size = *(int64_t *)(render_context + 0x10c0) - *(int64_t *)(render_context + 0x10b8);
  range_size = range_size / 0x26 + (range_size >> 0x3f);
  int_ptr = (int *)buffer_context[1];
  if ((uint64_t)((*buffer_context - (int64_t)int_ptr) + buffer_context[2]) < 5) {
    ensure_buffer_capacity(buffer_context, (int64_t)int_ptr + (4 - *buffer_context));
    int_ptr = (int *)buffer_context[1];
  }
  *int_ptr = (int)(range_size >> 2) - (int)(range_size >> 0x3f);
  buffer_context[1] = buffer_context[1] + 4;
  temp_range = *(int64_t *)(render_context + 0x10c0) - *(int64_t *)(render_context + 0x10b8);
  range_size = temp_range >> 0x3f;
  current_index = start_addr;
  loop_index = start_addr;
  if (temp_range / 0x98 + range_size != range_size) {
    do {
      serialize_data_block(buffer_context, loop_index * 0x98 + *(int64_t *)(render_context + 0x10b8));
      counter = (int)current_index + 1;
      current_index = (uint64_t)counter;
      loop_index = (int64_t)(int)counter;
    } while ((uint64_t)(int64_t)(int)counter <
             (uint64_t)((*(int64_t *)(render_context + 0x10c0) - *(int64_t *)(render_context + 0x10b8)) / 0x98)
            );
  }
  serialize_data_block(buffer_context, render_context + 0x10d8);
  byte_ptr = (int8_t *)buffer_context[1];
  byte_value = *(int8_t *)(render_context + 0x10f9);
  if ((uint64_t)((*buffer_context - (int64_t)byte_ptr) + buffer_context[2]) < 2) {
    ensure_buffer_capacity(buffer_context, byte_ptr + (1 - *buffer_context));
    byte_ptr = (int8_t *)buffer_context[1];
  }
  *byte_ptr = byte_value;
  buffer_context[1] = buffer_context[1] + 1;
  dword_ptr = (int32_t *)buffer_context[1];
  if (*(char *)(render_context + 0x10f9) != '\0') {
    serialize_data_block(buffer_context, render_context + 0x1100);
    serialize_data_block(buffer_context, render_context + 0x1198);
    serialize_data_block(buffer_context, render_context + 0x1230);
    serialize_data_block(buffer_context, render_context + 0x12c8);
    serialize_data_block(buffer_context, render_context + 0x1360);
    serialize_data_block(buffer_context, render_context + 0x13f8);
    dword_ptr = (int32_t *)buffer_context[1];
  }
  if ((uint64_t)((*buffer_context - (int64_t)dword_ptr) + buffer_context[2]) < 5) {
    ensure_buffer_capacity(buffer_context, (int64_t)dword_ptr + (4 - *buffer_context));
    dword_ptr = (int32_t *)buffer_context[1];
  }
  *dword_ptr = 0x10;
  buffer_context[1] = buffer_context[1] + 4;
  render_context = render_context + 0x4b0;
  do {
    int_ptr = (int *)buffer_context[1];
    if ((uint64_t)((*buffer_context - (int64_t)int_ptr) + buffer_context[2]) < 5) {
      ensure_buffer_capacity(buffer_context, (int64_t)int_ptr + (4 - *buffer_context));
      int_ptr = (int *)buffer_context[1];
    }
    *int_ptr = (int)start_addr;
    buffer_context[1] = buffer_context[1] + 4;
    serialize_data_block(buffer_context, render_context);
    counter = (int)start_addr + 1;
    start_addr = (uint64_t)counter;
    render_context = render_context + 0x58;
  } while ((int)counter < 0x10);
  return;
}


// 函数: 初始化渲染资源管理器
// 原始函数名: FUN_180272880
int32_t * initialize_render_resource_manager(int32_t *resource_manager)

{
  *(void **)(resource_manager + 2) = &RENDER_RESOURCE_TABLE_BASE;
  *(uint64_t *)(resource_manager + 4) = 0;
  resource_manager[6] = 0;
  *(void **)(resource_manager + 2) = &RENDER_RESOURCE_TABLE_EXTENDED;
  *(uint64_t *)(resource_manager + 8) = 0;
  *(uint64_t *)(resource_manager + 4) = 0;
  resource_manager[6] = 0;
  *(void **)(resource_manager + 10) = &RENDER_RESOURCE_TABLE_BASE;
  *(uint64_t *)(resource_manager + 0xc) = 0;
  resource_manager[0xe] = 0;
  *(void **)(resource_manager + 10) = &RENDER_RESOURCE_TABLE_EXTENDED;
  *(uint64_t *)(resource_manager + 0x10) = 0;
  *(uint64_t *)(resource_manager + 0xc) = 0;
  resource_manager[0xe] = 0;
  *(void **)(resource_manager + 0x12) = &RENDER_RESOURCE_TABLE_BASE;
  *(uint64_t *)(resource_manager + 0x14) = 0;
  resource_manager[0x16] = 0;
  *(void **)(resource_manager + 0x12) = &RENDER_RESOURCE_TABLE_EXTENDED;
  *(uint64_t *)(resource_manager + 0x18) = 0;
  *(uint64_t *)(resource_manager + 0x14) = 0;
  resource_manager[0x16] = 0;
  *(void **)(resource_manager + 0x1a) = &RENDER_RESOURCE_TABLE_BASE;
  *(uint64_t *)(resource_manager + 0x1c) = 0;
  resource_manager[0x1e] = 0;
  *(void **)(resource_manager + 0x1a) = &RENDER_RESOURCE_TABLE_EXTENDED;
  *(uint64_t *)(resource_manager + 0x20) = 0;
  *(uint64_t *)(resource_manager + 0x1c) = 0;
  resource_manager[0x1e] = 0;
  *(void **)(resource_manager + 0x22) = &RENDER_RESOURCE_TABLE_BASE;
  *(uint64_t *)(resource_manager + 0x24) = 0;
  resource_manager[0x26] = 0;
  *(void **)(resource_manager + 0x22) = &RENDER_RESOURCE_TABLE_EXTENDED;
  *(uint64_t *)(resource_manager + 0x28) = 0;
  *(uint64_t *)(resource_manager + 0x24) = 0;
  resource_manager[0x26] = 0;
  *(void **)(resource_manager + 0x2a) = &RENDER_RESOURCE_TABLE_BASE;
  *(uint64_t *)(resource_manager + 0x2c) = 0;
  resource_manager[0x2e] = 0;
  *(void **)(resource_manager + 0x2a) = &RENDER_RESOURCE_TABLE_EXTENDED;
  *(uint64_t *)(resource_manager + 0x30) = 0;
  *(uint64_t *)(resource_manager + 0x2c) = 0;
  resource_manager[0x2e] = 0;
  *(void **)(resource_manager + 0x32) = &RENDER_RESOURCE_TABLE_BASE;
  *(uint64_t *)(resource_manager + 0x34) = 0;
  resource_manager[0x36] = 0;
  *(void **)(resource_manager + 0x32) = &RENDER_RESOURCE_TABLE_EXTENDED;
  *(uint64_t *)(resource_manager + 0x38) = 0;
  *(uint64_t *)(resource_manager + 0x34) = 0;
  resource_manager[0x36] = 0;
  *(void **)(resource_manager + 0x3a) = &RENDER_RESOURCE_TABLE_BASE;
  *(uint64_t *)(resource_manager + 0x3c) = 0;
  resource_manager[0x3e] = 0;
  *(void **)(resource_manager + 0x3a) = &RENDER_RESOURCE_TABLE_EXTENDED;
  *(uint64_t *)(resource_manager + 0x40) = 0;
  *(uint64_t *)(resource_manager + 0x3c) = 0;
  resource_manager[0x3e] = 0;
  *(void **)(resource_manager + 0x42) = &RENDER_RESOURCE_TABLE_BASE;
  *(uint64_t *)(resource_manager + 0x44) = 0;
  resource_manager[0x46] = 0;
  *(void **)(resource_manager + 0x42) = &RENDER_RESOURCE_TABLE_EXTENDED;
  *(uint64_t *)(resource_manager + 0x48) = 0;
  *(uint64_t *)(resource_manager + 0x44) = 0;
  resource_manager[0x46] = 0;
  *(uint64_t *)(resource_manager + 0x4a) = 0;
  *(uint64_t *)(resource_manager + 0x4c) = 0;
  *(uint64_t *)(resource_manager + 0x4e) = 0;
  resource_manager[0x50] = 3;
  *(void **)(resource_manager + 0x52) = &RENDER_RESOURCE_TABLE_BASE;
  *(uint64_t *)(resource_manager + 0x54) = 0;
  resource_manager[0x56] = 0;
  *(void **)(resource_manager + 0x52) = &RENDER_RESOURCE_TABLE_EXTENDED;
  *(uint64_t *)(resource_manager + 0x58) = 0;
  *(uint64_t *)(resource_manager + 0x54) = 0;
  resource_manager[0x56] = 0;
  *(void **)(resource_manager + 0x5a) = &RENDER_RESOURCE_TABLE_BASE;
  *(uint64_t *)(resource_manager + 0x5c) = 0;
  resource_manager[0x5e] = 0;
  *(void **)(resource_manager + 0x5a) = &RENDER_RESOURCE_TABLE_EXTENDED;
  *(uint64_t *)(resource_manager + 0x60) = 0;
  *(uint64_t *)(resource_manager + 0x5c) = 0;
  resource_manager[0x5e] = 0;
  *(void **)(resource_manager + 0x62) = &RENDER_RESOURCE_TABLE_BASE;
  *(uint64_t *)(resource_manager + 100) = 0;
  resource_manager[0x66] = 0;
  *(void **)(resource_manager + 0x62) = &RENDER_RESOURCE_TABLE_EXTENDED;
  *(uint64_t *)(resource_manager + 0x68) = 0;
  *(uint64_t *)(resource_manager + 100) = 0;
  resource_manager[0x66] = 0;
  *(void **)(resource_manager + 0x6a) = &RENDER_RESOURCE_TABLE_BASE;
  *(uint64_t *)(resource_manager + 0x6c) = 0;
  resource_manager[0x6e] = 0;
  *(void **)(resource_manager + 0x6a) = &RENDER_RESOURCE_TABLE_EXTENDED;
  *(uint64_t *)(resource_manager + 0x70) = 0;
  *(uint64_t *)(resource_manager + 0x6c) = 0;
  resource_manager[0x6e] = 0;
  *(void **)(resource_manager + 0x72) = &RENDER_RESOURCE_TABLE_BASE;
  *(uint64_t *)(resource_manager + 0x74) = 0;
  resource_manager[0x76] = 0;
  *(void **)(resource_manager + 0x72) = &RENDER_RESOURCE_TABLE_EXTENDED;
  *(uint64_t *)(resource_manager + 0x78) = 0;
  *(uint64_t *)(resource_manager + 0x74) = 0;
  resource_manager[0x76] = 0;
  *(void **)(resource_manager + 0x7a) = &RENDER_RESOURCE_TABLE_BASE;
  *(uint64_t *)(resource_manager + 0x7c) = 0;
  resource_manager[0x7e] = 0;
  *(void **)(resource_manager + 0x7a) = &RENDER_RESOURCE_TABLE_EXTENDED;
  *(uint64_t *)(resource_manager + 0x80) = 0;
  *(uint64_t *)(resource_manager + 0x7c) = 0;
  resource_manager[0x7e] = 0;
  *(void **)(resource_manager + 0x82) = &RENDER_RESOURCE_TABLE_BASE;
  *(uint64_t *)(resource_manager + 0x84) = 0;
  resource_manager[0x86] = 0;
  *(void **)(resource_manager + 0x82) = &RENDER_RESOURCE_TABLE_EXTENDED;
  *(uint64_t *)(resource_manager + 0x88) = 0;
  *(uint64_t *)(resource_manager + 0x84) = 0;
  resource_manager[0x86] = 0;
  *(void **)(resource_manager + 0x8a) = &RENDER_RESOURCE_TABLE_BASE;
  *(uint64_t *)(resource_manager + 0x8c) = 0;
  resource_manager[0x8e] = 0;
  *(void **)(resource_manager + 0x8a) = &RENDER_RESOURCE_TABLE_EXTENDED;
  *(uint64_t *)(resource_manager + 0x90) = 0;
  *(uint64_t *)(resource_manager + 0x8c) = 0;
  resource_manager[0x8e] = 0;
  initialize_render_component(resource_manager + 0x92, 0x58, 0x10, create_render_component, destroy_render_component);
  initialize_render_state(resource_manager + 500);
  *resource_manager = 0;
  resource_manager[0x1f2] = 0;
  *(int8_t *)(resource_manager + 499) = 0;
  return resource_manager;
}


// 函数: 序列化高级渲染数据
// 原始函数名: FUN_180272b60
void serialize_advanced_render_data(int64_t render_context, int64_t *buffer_context, uint64_t param_3, uint64_t param_4)

{
  int8_t byte_value;
  int32_t dword_value;
  int64_t range_size;
  int8_t *byte_ptr;
  int32_t *dword_ptr;
  int *int_ptr;
  int int_counter;
  uint uint_counter;
  uint64_t loop_index;
  int temp_int;
  int64_t temp_long;
  uint64_t current_index;
  uint64_t unaff_RDI;
  uint64_t start_addr;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  
  dword_ptr = (int32_t *)buffer_context[1];
  if ((uint64_t)((buffer_context[2] - (int64_t)dword_ptr) + *buffer_context) < 5) {
    ensure_buffer_capacity(buffer_context, (int64_t)dword_ptr + (4 - *buffer_context));
    dword_ptr = (int32_t *)buffer_context[1];
  }
  *dword_ptr = 0;
  buffer_context[1] = buffer_context[1] + 4;
  dword_ptr = (int32_t *)buffer_context[1];
  if ((uint64_t)((*buffer_context - (int64_t)dword_ptr) + buffer_context[2]) < 5) {
    ensure_buffer_capacity(buffer_context, (int64_t)dword_ptr + (4 - *buffer_context));
    dword_ptr = (int32_t *)buffer_context[1];
  }
  *dword_ptr = 1;
  buffer_context[1] = buffer_context[1] + 4;
  serialize_render_feature_flags(&RENDER_FEATURE_FLAG_TABLE, *(int32_t *)(render_context + 8), buffer_context);
  serialize_data_block(buffer_context, render_context + 0x10);
  serialize_data_block(buffer_context, render_context + 0x30);
  serialize_data_block(buffer_context, render_context + 0x50);
  serialize_data_block(buffer_context, render_context + 0x70);
  serialize_data_block(buffer_context, render_context + 0x90);
  serialize_data_block(buffer_context, render_context + 0xb0);
  serialize_data_block(buffer_context, render_context + 0xd0);
  serialize_data_block(buffer_context, render_context + 0xf0);
  serialize_data_block(buffer_context, render_context + 0x110);
  range_size = *(int64_t *)(render_context + 0x138) - *(int64_t *)(render_context + 0x130);
  range_size = range_size / 6 + (range_size >> 0x3f);
  int_ptr = (int *)buffer_context[1];
  temp_int = (int)(range_size >> 4) - (int)(range_size >> 0x3f);
  if ((uint64_t)((*buffer_context - (int64_t)int_ptr) + buffer_context[2]) < 5) {
    ensure_buffer_capacity(buffer_context, (int64_t)int_ptr + (4 - *buffer_context));
    int_ptr = (int *)buffer_context[1];
  }
  *int_ptr = temp_int;
  int_counter = 0;
  buffer_context[1] = buffer_context[1] + 4;
  range_size = (int64_t)temp_int;
  if (0 < temp_int) {
    temp_long = 0;
    do {
      serialize_data_block(buffer_context, (int64_t)int_counter * 0x60 + *(int64_t *)(render_context + 0x130));
      dword_ptr = (int32_t *)buffer_context[1];
      dword_value = *(int32_t *)(temp_long + 0x58 + *(int64_t *)(render_context + 0x130));
      if ((uint64_t)((*buffer_context - (int64_t)dword_ptr) + buffer_context[2]) < 5) {
        ensure_buffer_capacity(buffer_context, (int64_t)dword_ptr + (4 - *buffer_context));
        dword_ptr = (int32_t *)buffer_context[1];
      }
      *dword_ptr = dword_value;
      buffer_context[1] = buffer_context[1] + 4;
      dword_ptr = (int32_t *)buffer_context[1];
      dword_value = *(int32_t *)(temp_long + 0x5c + *(int64_t *)(render_context + 0x130));
      if ((uint64_t)((*buffer_context - (int64_t)dword_ptr) + buffer_context[2]) < 5) {
        ensure_buffer_capacity(buffer_context, (int64_t)dword_ptr + (4 - *buffer_context));
        dword_ptr = (int32_t *)buffer_context[1];
      }
      *dword_ptr = dword_value;
      int_counter = int_counter + 1;
      buffer_context[1] = buffer_context[1] + 4;
      temp_long = temp_long + 0x60;
      range_size = range_size + -1;
    } while (range_size != 0);
  }
  serialize_data_block(buffer_context, render_context + 0x150);
  serialize_data_block(buffer_context, render_context + 0x170);
  serialize_data_block(buffer_context, render_context + 400);
  serialize_data_block(buffer_context, render_context + 0x1b0);
  serialize_data_block(buffer_context, render_context + 0x1d0);
  serialize_data_block(buffer_context, render_context + 0x1f0);
  serialize_data_block(buffer_context, render_context + 0x210);
  serialize_data_block(buffer_context, render_context + 0x230);
  range_size = render_context + 0x250;
  temp_long = 0x10;
  do {
    serialize_data_block(buffer_context, range_size);
    range_size = range_size + 0x58;
    temp_long = temp_long + -1;
  } while (temp_long != 0);
  serialize_render_shader_params(&RENDER_SHADER_PARAM_TABLE, *(int32_t *)(render_context + 2000), buffer_context);
  byte_ptr = (int8_t *)buffer_context[1];
  byte_value = *(int8_t *)(render_context + 0x7d4);
  if ((uint64_t)((*buffer_context - (int64_t)byte_ptr) + buffer_context[2]) < 2) {
    ensure_buffer_capacity(buffer_context, byte_ptr + (1 - *buffer_context));
    byte_ptr = (int8_t *)buffer_context[1];
  }
  *byte_ptr = byte_value;
  buffer_context[1] = buffer_context[1] + 1;
  if (*(char *)(render_context + 0x7d4) == '\0') {
    return;
  }
  dword_ptr = (int32_t *)buffer_context[1];
  if ((uint64_t)((*buffer_context - (int64_t)dword_ptr) + buffer_context[2]) < 5) {
    ensure_buffer_capacity(buffer_context, (int64_t)dword_ptr + (4 - *buffer_context));
    dword_ptr = (int32_t *)buffer_context[1];
  }
  start_addr = 0;
  *dword_ptr = 0;
  buffer_context[1] = buffer_context[1] + 4;
  range_size = *(int64_t *)(render_context + 0x800) - *(int64_t *)(render_context + 0x7f8);
  int_ptr = (int *)buffer_context[1];
  range_size = range_size / 0x26 + (range_size >> 0x3f);
  if ((uint64_t)((*buffer_context - (int64_t)int_ptr) + buffer_context[2]) < 5) {
    temp_long = (int64_t)int_ptr - *buffer_context;
    ensure_buffer_capacity(buffer_context, temp_long + 4, temp_long, param_4, unaff_R15, unaff_R14, unaff_RDI);
    int_ptr = (int *)buffer_context[1];
  }
  *int_ptr = (int)(range_size >> 2) - (int)(range_size >> 0x3f);
  buffer_context[1] = buffer_context[1] + 4;
  temp_long = *(int64_t *)(render_context + 0x800) - *(int64_t *)(render_context + 0x7f8);
  range_size = temp_long >> 0x3f;
  loop_index = start_addr;
  current_index = start_addr;
  if (temp_long / 0x98 + range_size != range_size) {
    do {
      serialize_data_block(buffer_context, current_index * 0x98 + *(int64_t *)(render_context + 0x7f8));
      uint_counter = (int)loop_index + 1;
      loop_index = (uint64_t)uint_counter;
      current_index = (int64_t)(int)uint_counter;
    } while ((uint64_t)(int64_t)(int)uint_counter <
             (uint64_t)((*(int64_t *)(render_context + 0x800) - *(int64_t *)(render_context + 0x7f8)) / 0x98));
  }
  serialize_data_block(buffer_context, render_context + 0x818);
  byte_ptr = (int8_t *)buffer_context[1];
  byte_value = *(int8_t *)(render_context + 0x8b0);
  if ((uint64_t)((*buffer_context - (int64_t)byte_ptr) + buffer_context[2]) < 2) {
    ensure_buffer_capacity(buffer_context, byte_ptr + (1 - *buffer_context));
    byte_ptr = (int8_t *)buffer_context[1];
  }
  *byte_ptr = byte_value;
  buffer_context[1] = buffer_context[1] + 1;
  dword_ptr = (int32_t *)buffer_context[1];
  dword_value = *(int32_t *)(render_context + 0x8b4);
  if ((uint64_t)((*buffer_context - (int64_t)dword_ptr) + buffer_context[2]) < 5) {
    ensure_buffer_capacity(buffer_context, (int64_t)dword_ptr + (4 - *buffer_context));
    dword_ptr = (int32_t *)buffer_context[1];
  }
  *dword_ptr = dword_value;
  buffer_context[1] = buffer_context[1] + 4;
  serialize_data_block(buffer_context, render_context + 0x8b8);
  range_size = *(int64_t *)(render_context + 0x958) - *(int64_t *)(render_context + 0x950);
  range_size = range_size / 0x26 + (range_size >> 0x3f);
  int_ptr = (int *)buffer_context[1];
  if ((uint64_t)((*buffer_context - (int64_t)int_ptr) + buffer_context[2]) < 5) {
    ensure_buffer_capacity(buffer_context, (int64_t)int_ptr + (4 - *buffer_context));
    int_ptr = (int *)buffer_context[1];
  }
  *int_ptr = (int)(range_size >> 2) - (int)(range_size >> 0x3f);
  buffer_context[1] = buffer_context[1] + 4;
  temp_long = *(int64_t *)(render_context + 0x958) - *(int64_t *)(render_context + 0x950);
  range_size = temp_long >> 0x3f;
  loop_index = start_addr;
  current_index = start_addr;
  if (temp_long / 0x98 + range_size != range_size) {
    do {
      serialize_data_block(buffer_context, current_index * 0x98 + *(int64_t *)(render_context + 0x950));
      uint_counter = (int)loop_index + 1;
      loop_index = (uint64_t)uint_counter;
      current_index = (int64_t)(int)uint_counter;
    } while ((uint64_t)(int64_t)(int)uint_counter <
             (uint64_t)((*(int64_t *)(render_context + 0x958) - *(int64_t *)(render_context + 0x950)) / 0x98));
  }
  range_size = render_context + 0x970;
  temp_long = 5;
  do {
    serialize_data_block(buffer_context, range_size);
    range_size = range_size + 0x98;
    temp_long = temp_long + -1;
  } while (temp_long != 0);
  range_size = *(int64_t *)(render_context + 0xc70) - *(int64_t *)(render_context + 0xc68);
  range_size = range_size / 0x26 + (range_size >> 0x3f);
  int_ptr = (int *)buffer_context[1];
  if ((uint64_t)((*buffer_context - (int64_t)int_ptr) + buffer_context[2]) < 5) {
    ensure_buffer_capacity(buffer_context, (int64_t)int_ptr + (4 - *buffer_context));
    int_ptr = (int *)buffer_context[1];
  }
  *int_ptr = (int)(range_size >> 2) - (int)(range_size >> 0x3f);
  buffer_context[1] = buffer_context[1] + 4;
  temp_long = *(int64_t *)(render_context + 0xc70) - *(int64_t *)(render_context + 0xc68);
  range_size = temp_long >> 0x3f;
  loop_index = start_addr;
  current_index = start_addr;
  if (temp_long / 0x98 + range_size != range_size) {
    do {
      serialize_data_block(buffer_context, current_index * 0x98 + *(int64_t *)(render_context + 0xc68));
      uint_counter = (int)loop_index + 1;
      loop_index = (uint64_t)uint_counter;
      current_index = (int64_t)(int)uint_counter;
    } while ((uint64_t)(int64_t)(int)uint_counter <
             (uint64_t)((*(int64_t *)(render_context + 0xc70) - *(int64_t *)(render_context + 0xc68)) / 0x98));
  }
  range_size = render_context + 0x1208;
  temp_long = 9;
  do {
    serialize_data_block(buffer_context, range_size);
    range_size = range_size + 0x98;
    temp_long = temp_long + -1;
  } while (temp_long != 0);
  serialize_data_block(buffer_context, render_context + 0x1760);
  serialize_data_block(buffer_context, render_context + 0x17f8);
  range_size = *(int64_t *)(render_context + 0x1898) - *(int64_t *)(render_context + 0x1890);
  range_size = range_size / 0x26 + (range_size >> 0x3f);
  int_ptr = (int *)buffer_context[1];
  if ((uint64_t)((*buffer_context - (int64_t)int_ptr) + buffer_context[2]) < 5) {
    ensure_buffer_capacity(buffer_context, (int64_t)int_ptr + (4 - *buffer_context));
    int_ptr = (int *)buffer_context[1];
  }
  *int_ptr = (int)(range_size >> 2) - (int)(range_size >> 0x3f);
  buffer_context[1] = buffer_context[1] + 4;
  temp_long = *(int64_t *)(render_context + 0x1898) - *(int64_t *)(render_context + 0x1890);
  range_size = temp_long >> 0x3f;
  loop_index = start_addr;
  current_index = start_addr;
  if (temp_long / 0x98 + range_size != range_size) {
    do {
      serialize_data_block(buffer_context, current_index * 0x98 + *(int64_t *)(render_context + 0x1890));
      uint_counter = (int)loop_index + 1;
      loop_index = (uint64_t)uint_counter;
      current_index = (int64_t)(int)uint_counter;
    } while ((uint64_t)(int64_t)(int)uint_counter <
             (uint64_t)((*(int64_t *)(render_context + 0x1898) - *(int64_t *)(render_context + 0x1890)) / 0x98)
            );
  }
  serialize_data_block(buffer_context, render_context + 0x18b0);
  byte_ptr = (int8_t *)buffer_context[1];
  byte_value = *(int8_t *)(render_context + 0x18d1);
  if ((uint64_t)((*buffer_context - (int64_t)byte_ptr) + buffer_context[2]) < 2) {
    ensure_buffer_capacity(buffer_context, byte_ptr + (1 - *buffer_context));
    byte_ptr = (int8_t *)buffer_context[1];
  }
  *byte_ptr = byte_value;
  buffer_context[1] = buffer_context[1] + 1;
  dword_ptr = (int32_t *)buffer_context[1];
  if (*(char *)(render_context + 0x18d1) != '\0') {
    serialize_data_block(buffer_context, render_context + 0x18d8);
    serialize_data_block(buffer_context, render_context + 0x1970);
    serialize_data_block(buffer_context, render_context + 0x1a08);
    serialize_data_block(buffer_context, render_context + 0x1aa0);
    serialize_data_block(buffer_context, render_context + 0x1b38);
    serialize_data_block(buffer_context, render_context + 0x1bd0);
    dword_ptr = (int32_t *)buffer_context[1];
  }
  if ((uint64_t)((*buffer_context - (int64_t)dword_ptr) + buffer_context[2]) < 5) {
    ensure_buffer_capacity(buffer_context, (int64_t)dword_ptr + (4 - *buffer_context));
    dword_ptr = (int32_t *)buffer_context[1];
  }
  *dword_ptr = 0x10;
  buffer_context[1] = buffer_context[1] + 4;
  render_context = render_context + 0xc88;
  do {
    int_ptr = (int *)buffer_context[1];
    if ((uint64_t)((*buffer_context - (int64_t)int_ptr) + buffer_context[2]) < 5) {
      ensure_buffer_capacity(buffer_context, (int64_t)int_ptr + (4 - *buffer_context));
      int_ptr = (int *)buffer_context[1];
    }
    *int_ptr = (int)start_addr;
    buffer_context[1] = buffer_context[1] + 4;
    serialize_data_block(buffer_context, render_context);
    uint_counter = (int)start_addr + 1;
    start_addr = (uint64_t)uint_counter;
    render_context = render_context + 0x58;
  } while ((int)uint_counter < 0x10);
  return;
}


// 警告: 以'_'开头的全局变量与同一地址的较小符号重叠


// 函数: 处理渲染字符串哈希表
// 原始函数名: FUN_180272bd0
void process_render_string_hash_table(int64_t *hash_table, int64_t data_offset, uint *result_flags)

{
  uint *hash_ptr;
  byte *string_buffer;
  uint hash_value;
  int64_t str_length;
  byte *compare_buffer;
  int string_index;
  uint64_t loop_counter;
  int64_t temp_long;
  byte *temp_ptr;
  int comparison_result;
  int64_t *current_entry;
  int8_t stack_buffer [32];
  uint64_t stack_guard;
  void *vtable_ptr;
  byte *work_buffer;
  int work_index;
  byte temp_buffer [1032];
  uint64_t canary_value;
  
  stack_guard = 0xfffffffffffffffe;
  canary_value = DATA_STACK_CANARY ^ (uint64_t)stack_buffer;
  *(int64_t *)(data_offset + 8) = *(int64_t *)(data_offset + 8) + 4;
  *result_flags = 0;
  hash_value = **(uint **)(data_offset + 8);
  loop_counter = (uint64_t)hash_value;
  *(uint **)(data_offset + 8) = *(uint **)(data_offset + 8) + 1;
  if (hash_value != 0) {
    do {
      vtable_ptr = &RENDER_STRING_VTABLE_BASE;
      work_buffer = temp_buffer;
      work_index = 0;
      temp_buffer[0] = 0;
      hash_value = **(uint **)(data_offset + 8);
      hash_ptr = *(uint **)(data_offset + 8) + 1;
      *(uint **)(data_offset + 8) = hash_ptr;
      temp_long = 0;
      current_entry = hash_table;
      if (hash_value != 0) {
        process_render_string_data(&vtable_ptr, hash_ptr, hash_value);
        *(int64_t *)(data_offset + 8) = *(int64_t *)(data_offset + 8) + (uint64_t)hash_value;
      }
      do {
        str_length = -1;
        do {
          str_length = str_length + 1;
        } while (*(char *)(*current_entry + str_length) != '\0');
        string_index = (int)str_length;
        if (work_index == string_index) {
          if (work_index != 0) {
            temp_ptr = work_buffer;
            do {
              string_buffer = temp_ptr + (*current_entry - (int64_t)work_buffer);
              comparison_result = (uint)*temp_ptr - (uint)*string_buffer;
              if (comparison_result != 0) break;
              temp_ptr = temp_ptr + 1;
            } while (*string_buffer != 0);
          }
HASH_MATCH_FOUND:
          if (comparison_result == 0) {
            *result_flags = *result_flags | *(uint *)(hash_table + temp_long * 2 + 1);
            break;
          }
        }
        else if (work_index == 0) goto HASH_MATCH_FOUND;
        temp_long = temp_long + 1;
        current_entry = current_entry + 2;
      } while (temp_long < 0x15);
      vtable_ptr = &RENDER_RESOURCE_TABLE_BASE;
      loop_counter = loop_counter - 1;
    } while (loop_counter != 0);
  }
                    // 警告: 子函数不返回
  cleanup_stack_buffer(canary_value ^ (uint64_t)stack_buffer);
}


// 函数: 序列化渲染特性标志
// 原始函数名: System_DataSerializer
void serialize_render_feature_flags(uint64_t *feature_table, uint feature_mask, int64_t *buffer_context)

{
  int32_t *dword_ptr;
  int64_t buffer_size;
  int64_t buffer_pos;
  int feature_count;
  int64_t buffer_offset;
  
  dword_ptr = (int32_t *)buffer_context[1];
  if ((uint64_t)((*buffer_context - (int64_t)dword_ptr) + buffer_context[2]) < 5) {
    ensure_buffer_capacity(buffer_context, (int64_t)dword_ptr + (4 - *buffer_context));
    dword_ptr = (int32_t *)buffer_context[1];
  }
  feature_count = 0;
  *dword_ptr = 0;
  buffer_pos = *buffer_context;
  buffer_size = buffer_context[1] + 4;
  buffer_context[1] = buffer_size;
  buffer_offset = 0;
  if (buffer_pos != 0) {
    buffer_offset = buffer_size - buffer_pos;
  }
  if ((uint64_t)((buffer_pos - buffer_size) + buffer_context[2]) < 5) {
    ensure_buffer_capacity(buffer_context, (buffer_size - buffer_pos) + 4);
    buffer_size = buffer_context[1];
  }
  buffer_pos = 0x15;
  buffer_context[1] = buffer_size + 4;
  do {
    if ((*(uint *)(feature_table + 1) & feature_mask) != 0) {
      serialize_string_to_buffer(buffer_context, *feature_table);
      feature_count = feature_count + 1;
    }
    feature_table = feature_table + 2;
    buffer_pos = buffer_pos + -1;
  } while (buffer_pos != 0);
  *(int *)(buffer_offset + *buffer_context) = feature_count;
  return;
}


// 警告: 以'_'开头的全局变量与同一地址的较小符号重叠


// 函数: 调整渲染对象数组大小
// 原始函数名: FUN_180272e40
void resize_render_object_array(int64_t *array_manager, uint64_t new_size)

{
  void *vtable_ptr;
  uint64_t *current_ptr;
  uint64_t current_size;
  uint64_t *end_ptr;
  uint64_t size_diff;
  uint64_t *new_ptr;
  uint64_t *alloc_ptr;
  void *destructor_vtable;
  int64_t offset;
  
  current_ptr = (uint64_t *)array_manager[1];
  offset = *array_manager;
  current_size = ((int64_t)current_ptr - offset) / 0x98;
  if (new_size <= current_size) {
    end_ptr = (uint64_t *)(new_size * 0x98 + offset);
    if (end_ptr != current_ptr) {
      do {
        (**(code **)*end_ptr)(end_ptr, 0);
        end_ptr = end_ptr + 0x13;
      } while (end_ptr != current_ptr);
      offset = *array_manager;
    }
    array_manager[1] = new_size * 0x98 + offset;
    return;
  }
  new_size = new_size - current_size;
  current_ptr = (uint64_t *)array_manager[1];
  if ((uint64_t)((array_manager[2] - (int64_t)current_ptr) / 0x98) < new_size) {
    end_ptr = (uint64_t *)*array_manager;
    offset = ((int64_t)current_ptr - (int64_t)end_ptr) / 0x98;
    current_size = offset * 2;
    if (offset == 0) {
      current_size = 1;
    }
    if (current_size < offset + new_size) {
      current_size = offset + new_size;
    }
    alloc_ptr = (uint64_t *)0x0;
    if (current_size != 0) {
      alloc_ptr = (uint64_t *)
               allocate_render_memory(DATA_MEMORY_POOL_BASE, current_size * 0x98, (char)array_manager[3], 0x6bca1af286bca1b,
                             0xfffffffffffffffe);
      current_ptr = (uint64_t *)array_manager[1];
      end_ptr = (uint64_t *)*array_manager;
    }
    new_ptr = alloc_ptr;
    if (end_ptr != current_ptr) {
      offset = (int64_t)end_ptr - (int64_t)alloc_ptr;
      do {
        *new_ptr = &RENDER_RESOURCE_TABLE_BASE;
        new_ptr[1] = 0;
        *(int32_t *)(new_ptr + 2) = 0;
        *new_ptr = &RENDER_DESTRUCTOR_VTABLE;
        new_ptr[1] = new_ptr + 3;
        *(int32_t *)(new_ptr + 2) = 0;
        *(int8_t *)(new_ptr + 3) = 0;
        *(int32_t *)(new_ptr + 2) = *(int32_t *)((int64_t)new_ptr + offset + 0x10);
        vtable_ptr = *(void **)((int64_t)new_ptr + offset + 8);
        destructor_vtable = &RENDER_DEFAULT_DESTRUCTOR;
        if (vtable_ptr != (void *)0x0) {
          destructor_vtable = vtable_ptr;
        }
        strcpy_s(new_ptr[1], 0x80, destructor_vtable);
        new_ptr = new_ptr + 0x13;
      } while ((uint64_t *)((int64_t)new_ptr + offset) != current_ptr);
    }
    if (new_size != 0) {
      current_ptr = new_ptr + 1;
      size_diff = new_size;
      do {
        current_ptr[-1] = &RENDER_RESOURCE_TABLE_BASE;
        *current_ptr = 0;
        *(int32_t *)(current_ptr + 1) = 0;
        current_ptr[-1] = &RENDER_DESTRUCTOR_VTABLE;
        *current_ptr = current_ptr + 2;
        *(int32_t *)(current_ptr + 1) = 0;
        *(int8_t *)(current_ptr + 2) = 0;
        current_ptr = current_ptr + 0x13;
        size_diff = size_diff - 1;
      } while (size_diff != 0);
    }
    current_ptr = (uint64_t *)array_manager[1];
    end_ptr = (uint64_t *)*array_manager;
    if (end_ptr != current_ptr) {
      do {
        (**(code **)*end_ptr)(end_ptr, 0);
        end_ptr = end_ptr + 0x13;
      } while (end_ptr != current_ptr);
      end_ptr = (uint64_t *)*array_manager;
    }
    if (end_ptr != (uint64_t *)0x0) {
                    // 警告: 子函数不返回
      free_render_memory(end_ptr);
    }
    *array_manager = (int64_t)alloc_ptr;
    array_manager[1] = (int64_t)(new_ptr + new_size * 0x13);
    array_manager[2] = (int64_t)(alloc_ptr + current_size * 0x13);
  }
  else {
    current_size = new_size;
    if (new_size != 0) {
      do {
        *current_ptr = &RENDER_RESOURCE_TABLE_BASE;
        current_ptr[1] = 0;
        *(int32_t *)(current_ptr + 2) = 0;
        *current_ptr = &RENDER_DESTRUCTOR_VTABLE;
        current_ptr[1] = current_ptr + 3;
        *(int32_t *)(current_ptr + 2) = 0;
        *(int8_t *)(current_ptr + 3) = 0;
        current_ptr = current_ptr + 0x13;
        current_size = current_size - 1;
      } while (current_size != 0);
      current_ptr = (uint64_t *)array_manager[1];
    }
    array_manager[1] = (int64_t)(current_ptr + new_size * 0x13);
  }
  return;
}


// 警告: 以'_'开头的全局变量与同一地址的较小符号重叠