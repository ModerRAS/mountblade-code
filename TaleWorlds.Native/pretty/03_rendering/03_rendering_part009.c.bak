#include "TaleWorlds.Native.Split.h"

// 03_rendering_part009.c - 渲染系统数据处理和内存管理模块
// 本文件包含5个函数，主要负责渲染数据的序列化、内存管理和批量处理

// 函数: void serialize_rendering_data(longlong render_context, longlong *data_buffer)
// 功能: 序列化渲染上下文数据到缓冲区
// 参数: 
//   render_context - 渲染上下文指针
//   data_buffer - 数据缓冲区指针
void serialize_rendering_data(longlong render_context, longlong *data_buffer)

{
  int8_t byte_value;
  int32_t uint_value;
  longlong range_size;
  longlong temp_size;
  int8_t *byte_ptr;
  int32_t *uint_ptr;
  int *int_ptr;
  uint counter;
  ulonglong index;
  ulonglong start_index;
  ulonglong current_index;
  
  uint_ptr = (int32_t *)data_buffer[1];
  if ((ulonglong)((*data_buffer - (longlong)uint_ptr) + data_buffer[2]) < 5) {
    expand_buffer_if_needed(data_buffer,(longlong)uint_ptr + (4 - *data_buffer));
    uint_ptr = (int32_t *)data_buffer[1];
  }
  start_index = 0;
  *uint_ptr = 0;
  data_buffer[1] = data_buffer[1] + 4;
  range_size = *(longlong *)(render_context + 0x28) - *(longlong *)(render_context + 0x20);
  int_ptr = (int *)data_buffer[1];
  range_size = range_size / 0x26 + (range_size >> 0x3f);
  if ((ulonglong)((*data_buffer - (longlong)int_ptr) + data_buffer[2]) < 5) {
    expand_buffer_if_needed(data_buffer,(longlong)int_ptr + (4 - *data_buffer));
    int_ptr = (int *)data_buffer[1];
  }
  *int_ptr = (int)(range_size >> 2) - (int)(range_size >> 0x3f);
  data_buffer[1] = data_buffer[1] + 4;
  temp_size = *(longlong *)(render_context + 0x28) - *(longlong *)(render_context + 0x20);
  range_size = temp_size >> 0x3f;
  index = start_index;
  current_index = start_index;
  if (temp_size / 0x98 + range_size != range_size) {
    do {
      write_buffer_data(data_buffer,current_index * 0x98 + *(longlong *)(render_context + 0x20));
      counter = (int)index + 1;
      index = (ulonglong)counter;
      current_index = (longlong)(int)counter;
    } while ((ulonglong)(longlong)(int)counter <
             (ulonglong)((*(longlong *)(render_context + 0x28) - *(longlong *)(render_context + 0x20)) / 0x98));
  }
  write_buffer_data(data_buffer,render_context + 0x40);
  byte_ptr = (int8_t *)data_buffer[1];
  byte_value = *(int8_t *)(render_context + 0xd8);
  if ((ulonglong)((*data_buffer - (longlong)byte_ptr) + data_buffer[2]) < 2) {
    expand_buffer_if_needed(data_buffer,byte_ptr + (1 - *data_buffer));
    byte_ptr = (int8_t *)data_buffer[1];
  }
  *byte_ptr = byte_value;
  data_buffer[1] = data_buffer[1] + 1;
  uint_ptr = (int32_t *)data_buffer[1];
  uint_value = *(int32_t *)(render_context + 0xdc);
  if ((ulonglong)((*data_buffer - (longlong)uint_ptr) + data_buffer[2]) < 5) {
    expand_buffer_if_needed(data_buffer,(longlong)uint_ptr + (4 - *data_buffer));
    uint_ptr = (int32_t *)data_buffer[1];
  }
  *uint_ptr = uint_value;
  data_buffer[1] = data_buffer[1] + 4;
  write_buffer_data(data_buffer,render_context + 0xe0);
  range_size = *(longlong *)(render_context + 0x180) - *(longlong *)(render_context + 0x178);
  range_size = range_size / 0x26 + (range_size >> 0x3f);
  int_ptr = (int *)data_buffer[1];
  if ((ulonglong)((*data_buffer - (longlong)int_ptr) + data_buffer[2]) < 5) {
    expand_buffer_if_needed(data_buffer,(longlong)int_ptr + (4 - *data_buffer));
    int_ptr = (int *)data_buffer[1];
  }
  *int_ptr = (int)(range_size >> 2) - (int)(range_size >> 0x3f);
  data_buffer[1] = data_buffer[1] + 4;
  temp_size = *(longlong *)(render_context + 0x180) - *(longlong *)(render_context + 0x178);
  range_size = temp_size >> 0x3f;
  index = start_index;
  current_index = start_index;
  if (temp_size / 0x98 + range_size != range_size) {
    do {
      write_buffer_data(data_buffer,current_index * 0x98 + *(longlong *)(render_context + 0x178));
      counter = (int)index + 1;
      index = (ulonglong)counter;
      current_index = (longlong)(int)counter;
    } while ((ulonglong)(longlong)(int)counter <
             (ulonglong)((*(longlong *)(render_context + 0x180) - *(longlong *)(render_context + 0x178)) / 0x98));
  }
  range_size = render_context + 0x198;
  temp_size = 5;
  do {
    write_buffer_data(data_buffer,range_size);
    range_size = range_size + 0x98;
    temp_size = temp_size + -1;
  } while (temp_size != 0);
  range_size = *(longlong *)(render_context + 0x498) - *(longlong *)(render_context + 0x490);
  range_size = range_size / 0x26 + (range_size >> 0x3f);
  int_ptr = (int *)data_buffer[1];
  if ((ulonglong)((*data_buffer - (longlong)int_ptr) + data_buffer[2]) < 5) {
    expand_buffer_if_needed(data_buffer,(longlong)int_ptr + (4 - *data_buffer));
    int_ptr = (int *)data_buffer[1];
  }
  *int_ptr = (int)(range_size >> 2) - (int)(range_size >> 0x3f);
  data_buffer[1] = data_buffer[1] + 4;
  temp_size = *(longlong *)(render_context + 0x498) - *(longlong *)(render_context + 0x490);
  range_size = temp_size >> 0x3f;
  index = start_index;
  current_index = start_index;
  if (temp_size / 0x98 + range_size != range_size) {
    do {
      write_buffer_data(data_buffer,current_index * 0x98 + *(longlong *)(render_context + 0x490));
      counter = (int)index + 1;
      index = (ulonglong)counter;
      current_index = (longlong)(int)counter;
    } while ((ulonglong)(longlong)(int)counter <
             (ulonglong)((*(longlong *)(render_context + 0x498) - *(longlong *)(render_context + 0x490)) / 0x98));
  }
  range_size = render_context + 0xa30;
  temp_size = 9;
  do {
    write_buffer_data(data_buffer,range_size);
    range_size = range_size + 0x98;
    temp_size = temp_size + -1;
  } while (temp_size != 0);
  write_buffer_data(data_buffer,render_context + 0xf88);
  write_buffer_data(data_buffer,render_context + 0x1020);
  range_size = *(longlong *)(render_context + 0x10c0) - *(longlong *)(render_context + 0x10b8);
  range_size = range_size / 0x26 + (range_size >> 0x3f);
  int_ptr = (int *)data_buffer[1];
  if ((ulonglong)((*data_buffer - (longlong)int_ptr) + data_buffer[2]) < 5) {
    expand_buffer_if_needed(data_buffer,(longlong)int_ptr + (4 - *data_buffer));
    int_ptr = (int *)data_buffer[1];
  }
  *int_ptr = (int)(range_size >> 2) - (int)(range_size >> 0x3f);
  data_buffer[1] = data_buffer[1] + 4;
  temp_size = *(longlong *)(render_context + 0x10c0) - *(longlong *)(render_context + 0x10b8);
  range_size = temp_size >> 0x3f;
  index = start_index;
  current_index = start_index;
  if (temp_size / 0x98 + range_size != range_size) {
    do {
      write_buffer_data(data_buffer,current_index * 0x98 + *(longlong *)(render_context + 0x10b8));
      counter = (int)index + 1;
      index = (ulonglong)counter;
      current_index = (longlong)(int)counter;
    } while ((ulonglong)(longlong)(int)counter <
             (ulonglong)((*(longlong *)(render_context + 0x10c0) - *(longlong *)(render_context + 0x10b8)) / 0x98)
            );
  }
  write_buffer_data(data_buffer,render_context + 0x10d8);
  byte_ptr = (int8_t *)data_buffer[1];
  byte_value = *(int8_t *)(render_context + 0x10f9);
  if ((ulonglong)((*data_buffer - (longlong)byte_ptr) + data_buffer[2]) < 2) {
    expand_buffer_if_needed(data_buffer,byte_ptr + (1 - *data_buffer));
    byte_ptr = (int8_t *)data_buffer[1];
  }
  *byte_ptr = byte_value;
  data_buffer[1] = data_buffer[1] + 1;
  uint_ptr = (int32_t *)data_buffer[1];
  if (*(char *)(render_context + 0x10f9) != '\0') {
    write_buffer_data(data_buffer,render_context + 0x1100);
    write_buffer_data(data_buffer,render_context + 0x1198);
    write_buffer_data(data_buffer,render_context + 0x1230);
    write_buffer_data(data_buffer,render_context + 0x12c8);
    write_buffer_data(data_buffer,render_context + 0x1360);
    write_buffer_data(data_buffer,render_context + 0x13f8);
    uint_ptr = (int32_t *)data_buffer[1];
  }
  if ((ulonglong)((*data_buffer - (longlong)uint_ptr) + data_buffer[2]) < 5) {
    expand_buffer_if_needed(data_buffer,(longlong)uint_ptr + (4 - *data_buffer));
    uint_ptr = (int32_t *)data_buffer[1];
  }
  *uint_ptr = 0x10;
  data_buffer[1] = data_buffer[1] + 4;
  render_context = render_context + 0x4b0;
  do {
    int_ptr = (int *)data_buffer[1];
    if ((ulonglong)((*data_buffer - (longlong)int_ptr) + data_buffer[2]) < 5) {
      expand_buffer_if_needed(data_buffer,(longlong)int_ptr + (4 - *data_buffer));
      int_ptr = (int *)data_buffer[1];
    }
    *int_ptr = (int)start_index;
    data_buffer[1] = data_buffer[1] + 4;
    write_buffer_data(data_buffer,render_context);
    counter = (int)start_index + 1;
    start_index = (ulonglong)counter;
    render_context = render_context + 0x58;
  } while ((int)counter < 0x10);
  return;
}



// 函数: int32_t * initialize_rendering_pool(int32_t *pool_manager)
// 功能: 初始化渲染池管理器
// 参数: 
//   pool_manager - 渲染池管理器指针
// 返回: 初始化后的渲染池管理器指针
int32_t * initialize_rendering_pool(int32_t *pool_manager)

{
  *(void **)(pool_manager + 2) = &RENDERING_VTABLE_START;
  *(uint64_t *)(pool_manager + 4) = 0;
  pool_manager[6] = 0;
  *(void **)(pool_manager + 2) = &RENDERING_VTABLE_ENTRY;
  *(uint64_t *)(pool_manager + 8) = 0;
  *(uint64_t *)(pool_manager + 4) = 0;
  pool_manager[6] = 0;
  *(void **)(pool_manager + 10) = &RENDERING_VTABLE_START;
  *(uint64_t *)(pool_manager + 0xc) = 0;
  pool_manager[0xe] = 0;
  *(void **)(pool_manager + 10) = &RENDERING_VTABLE_ENTRY;
  *(uint64_t *)(pool_manager + 0x10) = 0;
  *(uint64_t *)(pool_manager + 0xc) = 0;
  pool_manager[0xe] = 0;
  *(void **)(pool_manager + 0x12) = &RENDERING_VTABLE_START;
  *(uint64_t *)(pool_manager + 0x14) = 0;
  pool_manager[0x16] = 0;
  *(void **)(pool_manager + 0x12) = &RENDERING_VTABLE_ENTRY;
  *(uint64_t *)(pool_manager + 0x18) = 0;
  *(uint64_t *)(pool_manager + 0x14) = 0;
  pool_manager[0x16] = 0;
  *(void **)(pool_manager + 0x1a) = &RENDERING_VTABLE_START;
  *(uint64_t *)(pool_manager + 0x1c) = 0;
  pool_manager[0x1e] = 0;
  *(void **)(pool_manager + 0x1a) = &RENDERING_VTABLE_ENTRY;
  *(uint64_t *)(pool_manager + 0x20) = 0;
  *(uint64_t *)(pool_manager + 0x1c) = 0;
  pool_manager[0x1e] = 0;
  *(void **)(pool_manager + 0x22) = &RENDERING_VTABLE_START;
  *(uint64_t *)(pool_manager + 0x24) = 0;
  pool_manager[0x26] = 0;
  *(void **)(pool_manager + 0x22) = &RENDERING_VTABLE_ENTRY;
  *(uint64_t *)(pool_manager + 0x28) = 0;
  *(uint64_t *)(pool_manager + 0x24) = 0;
  pool_manager[0x26] = 0;
  *(void **)(pool_manager + 0x2a) = &RENDERING_VTABLE_START;
  *(uint64_t *)(pool_manager + 0x2c) = 0;
  pool_manager[0x2e] = 0;
  *(void **)(pool_manager + 0x2a) = &RENDERING_VTABLE_ENTRY;
  *(uint64_t *)(pool_manager + 0x30) = 0;
  *(uint64_t *)(pool_manager + 0x2c) = 0;
  pool_manager[0x2e] = 0;
  *(void **)(pool_manager + 0x32) = &RENDERING_VTABLE_START;
  *(uint64_t *)(pool_manager + 0x34) = 0;
  pool_manager[0x36] = 0;
  *(void **)(pool_manager + 0x32) = &RENDERING_VTABLE_ENTRY;
  *(uint64_t *)(pool_manager + 0x38) = 0;
  *(uint64_t *)(pool_manager + 0x34) = 0;
  pool_manager[0x36] = 0;
  *(void **)(pool_manager + 0x3a) = &RENDERING_VTABLE_START;
  *(uint64_t *)(pool_manager + 0x3c) = 0;
  pool_manager[0x3e] = 0;
  *(void **)(pool_manager + 0x3a) = &RENDERING_VTABLE_ENTRY;
  *(uint64_t *)(pool_manager + 0x40) = 0;
  *(uint64_t *)(pool_manager + 0x3c) = 0;
  pool_manager[0x3e] = 0;
  *(void **)(pool_manager + 0x42) = &RENDERING_VTABLE_START;
  *(uint64_t *)(pool_manager + 0x44) = 0;
  pool_manager[0x46] = 0;
  *(void **)(pool_manager + 0x42) = &RENDERING_VTABLE_ENTRY;
  *(uint64_t *)(pool_manager + 0x48) = 0;
  *(uint64_t *)(pool_manager + 0x44) = 0;
  pool_manager[0x46] = 0;
  *(uint64_t *)(pool_manager + 0x4a) = 0;
  *(uint64_t *)(pool_manager + 0x4c) = 0;
  *(uint64_t *)(pool_manager + 0x4e) = 0;
  pool_manager[0x50] = 3;
  *(void **)(pool_manager + 0x52) = &RENDERING_VTABLE_START;
  *(uint64_t *)(pool_manager + 0x54) = 0;
  pool_manager[0x56] = 0;
  *(void **)(pool_manager + 0x52) = &RENDERING_VTABLE_ENTRY;
  *(uint64_t *)(pool_manager + 0x58) = 0;
  *(uint64_t *)(pool_manager + 0x54) = 0;
  pool_manager[0x56] = 0;
  *(void **)(pool_manager + 0x5a) = &RENDERING_VTABLE_START;
  *(uint64_t *)(pool_manager + 0x5c) = 0;
  pool_manager[0x5e] = 0;
  *(void **)(pool_manager + 0x5a) = &RENDERING_VTABLE_ENTRY;
  *(uint64_t *)(pool_manager + 0x60) = 0;
  *(uint64_t *)(pool_manager + 0x5c) = 0;
  pool_manager[0x5e] = 0;
  *(void **)(pool_manager + 0x62) = &RENDERING_VTABLE_START;
  *(uint64_t *)(pool_manager + 100) = 0;
  pool_manager[0x66] = 0;
  *(void **)(pool_manager + 0x62) = &RENDERING_VTABLE_ENTRY;
  *(uint64_t *)(pool_manager + 0x68) = 0;
  *(uint64_t *)(pool_manager + 100) = 0;
  pool_manager[0x66] = 0;
  *(void **)(pool_manager + 0x6a) = &RENDERING_VTABLE_START;
  *(uint64_t *)(pool_manager + 0x6c) = 0;
  pool_manager[0x6e] = 0;
  *(void **)(pool_manager + 0x6a) = &RENDERING_VTABLE_ENTRY;
  *(uint64_t *)(pool_manager + 0x70) = 0;
  *(uint64_t *)(pool_manager + 0x6c) = 0;
  pool_manager[0x6e] = 0;
  *(void **)(pool_manager + 0x72) = &RENDERING_VTABLE_START;
  *(uint64_t *)(pool_manager + 0x74) = 0;
  pool_manager[0x76] = 0;
  *(void **)(pool_manager + 0x72) = &RENDERING_VTABLE_ENTRY;
  *(uint64_t *)(pool_manager + 0x78) = 0;
  *(uint64_t *)(pool_manager + 0x74) = 0;
  pool_manager[0x76] = 0;
  *(void **)(pool_manager + 0x7a) = &RENDERING_VTABLE_START;
  *(uint64_t *)(pool_manager + 0x7c) = 0;
  pool_manager[0x7e] = 0;
  *(void **)(pool_manager + 0x7a) = &RENDERING_VTABLE_ENTRY;
  *(uint64_t *)(pool_manager + 0x80) = 0;
  *(uint64_t *)(pool_manager + 0x7c) = 0;
  pool_manager[0x7e] = 0;
  *(void **)(pool_manager + 0x82) = &RENDERING_VTABLE_START;
  *(uint64_t *)(pool_manager + 0x84) = 0;
  pool_manager[0x86] = 0;
  *(void **)(pool_manager + 0x82) = &RENDERING_VTABLE_ENTRY;
  *(uint64_t *)(pool_manager + 0x88) = 0;
  *(uint64_t *)(pool_manager + 0x84) = 0;
  pool_manager[0x86] = 0;
  *(void **)(pool_manager + 0x8a) = &RENDERING_VTABLE_START;
  *(uint64_t *)(pool_manager + 0x8c) = 0;
  pool_manager[0x8e] = 0;
  *(void **)(pool_manager + 0x8a) = &RENDERING_VTABLE_ENTRY;
  *(uint64_t *)(pool_manager + 0x90) = 0;
  *(uint64_t *)(pool_manager + 0x8c) = 0;
  pool_manager[0x8e] = 0;
  initialize_rendering_component(pool_manager + 0x92,0x58,0x10,create_render_component,destroy_render_component);
  setup_rendering_instance(pool_manager + 500);
  *pool_manager = 0;
  pool_manager[0x1f2] = 0;
  *(int8_t *)(pool_manager + 499) = 0;
  return pool_manager;
}



// 函数: void process_rendering_batch(longlong render_context, longlong *data_buffer, uint64_t batch_param1, uint64_t batch_param2)
// 功能: 处理渲染批次数据
// 参数: 
//   render_context - 渲染上下文指针
//   data_buffer - 数据缓冲区指针
//   batch_param1 - 批次参数1
//   batch_param2 - 批次参数2
void process_rendering_batch(longlong render_context, longlong *data_buffer, uint64_t batch_param1, uint64_t batch_param2)

{
  int8_t byte_value;
  int32_t uint_value;
  longlong range_size;
  int8_t *byte_ptr;
  int32_t *uint_ptr;
  int *int_ptr;
  int item_count;
  uint counter;
  ulonglong index;
  int temp_int;
  longlong item_offset;
  ulonglong current_index;
  uint64_t unused_param1;
  ulonglong start_index;
  uint64_t unused_param2;
  uint64_t unused_param3;
  
  uint_ptr = (int32_t *)data_buffer[1];
  if ((ulonglong)((data_buffer[2] - (longlong)uint_ptr) + *data_buffer) < 5) {
    expand_buffer_if_needed(data_buffer,(longlong)uint_ptr + (4 - *data_buffer));
    uint_ptr = (int32_t *)data_buffer[1];
  }
  *uint_ptr = 0;
  data_buffer[1] = data_buffer[1] + 4;
  uint_ptr = (int32_t *)data_buffer[1];
  if ((ulonglong)((*data_buffer - (longlong)uint_ptr) + data_buffer[2]) < 5) {
    expand_buffer_if_needed(data_buffer,(longlong)uint_ptr + (4 - *data_buffer));
    uint_ptr = (int32_t *)data_buffer[1];
  }
  *uint_ptr = 1;
  data_buffer[1] = data_buffer[1] + 4;
  process_rendering_flags(&RENDERING_FLAG_TABLE,*(int32_t *)(render_context + 8),data_buffer);
  write_buffer_data(data_buffer,render_context + 0x10);
  write_buffer_data(data_buffer,render_context + 0x30);
  write_buffer_data(data_buffer,render_context + 0x50);
  write_buffer_data(data_buffer,render_context + 0x70);
  write_buffer_data(data_buffer,render_context + 0x90);
  write_buffer_data(data_buffer,render_context + 0xb0);
  write_buffer_data(data_buffer,render_context + 0xd0);
  write_buffer_data(data_buffer,render_context + 0xf0);
  write_buffer_data(data_buffer,render_context + 0x110);
  range_size = *(longlong *)(render_context + 0x138) - *(longlong *)(render_context + 0x130);
  range_size = range_size / 6 + (range_size >> 0x3f);
  int_ptr = (int *)data_buffer[1];
  item_count = (int)(range_size >> 4) - (int)(range_size >> 0x3f);
  if ((ulonglong)((*data_buffer - (longlong)int_ptr) + data_buffer[2]) < 5) {
    expand_buffer_if_needed(data_buffer,(longlong)int_ptr + (4 - *data_buffer));
    int_ptr = (int *)data_buffer[1];
  }
  *int_ptr = item_count;
  temp_int = 0;
  data_buffer[1] = data_buffer[1] + 4;
  range_size = (longlong)item_count;
  if (0 < item_count) {
    item_offset = 0;
    do {
      write_buffer_data(data_buffer,(longlong)temp_int * 0x60 + *(longlong *)(render_context + 0x130));
      uint_ptr = (int32_t *)data_buffer[1];
      uint_value = *(int32_t *)(item_offset + 0x58 + *(longlong *)(render_context + 0x130));
      if ((ulonglong)((*data_buffer - (longlong)uint_ptr) + data_buffer[2]) < 5) {
        expand_buffer_if_needed(data_buffer,(longlong)uint_ptr + (4 - *data_buffer));
        uint_ptr = (int32_t *)data_buffer[1];
      }
      *uint_ptr = uint_value;
      data_buffer[1] = data_buffer[1] + 4;
      uint_ptr = (int32_t *)data_buffer[1];
      uint_value = *(int32_t *)(item_offset + 0x5c + *(longlong *)(render_context + 0x130));
      if ((ulonglong)((*data_buffer - (longlong)uint_ptr) + data_buffer[2]) < 5) {
        expand_buffer_if_needed(data_buffer,(longlong)uint_ptr + (4 - *data_buffer));
        uint_ptr = (int32_t *)data_buffer[1];
      }
      *uint_ptr = uint_value;
      temp_int = temp_int + 1;
      data_buffer[1] = data_buffer[1] + 4;
      item_offset = item_offset + 0x60;
      range_size = range_size + -1;
    } while (range_size != 0);
  }
  write_buffer_data(data_buffer,render_context + 0x150);
  write_buffer_data(data_buffer,render_context + 0x170);
  write_buffer_data(data_buffer,render_context + 400);
  write_buffer_data(data_buffer,render_context + 0x1b0);
  write_buffer_data(data_buffer,render_context + 0x1d0);
  write_buffer_data(data_buffer,render_context + 0x1f0);
  write_buffer_data(data_buffer,render_context + 0x210);
  write_buffer_data(data_buffer,render_context + 0x230);
  range_size = render_context + 0x250;
  item_offset = 0x10;
  do {
    write_buffer_data(data_buffer,range_size);
    range_size = range_size + 0x58;
    item_offset = item_offset + -1;
  } while (item_offset != 0);
  process_rendering_instance(&RENDERING_INSTANCE_TABLE,*(int32_t *)(render_context + 2000),data_buffer);
  byte_ptr = (int8_t *)data_buffer[1];
  byte_value = *(int8_t *)(render_context + 0x7d4);
  if ((ulonglong)((*data_buffer - (longlong)byte_ptr) + data_buffer[2]) < 2) {
    expand_buffer_if_needed(data_buffer,byte_ptr + (1 - *data_buffer));
    byte_ptr = (int8_t *)data_buffer[1];
  }
  *byte_ptr = byte_value;
  data_buffer[1] = data_buffer[1] + 1;
  if (*(char *)(render_context + 0x7d4) == '\0') {
    return;
  }
  uint_ptr = (int32_t *)data_buffer[1];
  if ((ulonglong)((*data_buffer - (longlong)uint_ptr) + data_buffer[2]) < 5) {
    expand_buffer_if_needed(data_buffer,(longlong)uint_ptr + (4 - *data_buffer));
    uint_ptr = (int32_t *)data_buffer[1];
  }
  start_index = 0;
  *uint_ptr = 0;
  data_buffer[1] = data_buffer[1] + 4;
  range_size = *(longlong *)(render_context + 0x800) - *(longlong *)(render_context + 0x7f8);
  int_ptr = (int *)data_buffer[1];
  range_size = range_size / 0x26 + (range_size >> 0x3f);
  if ((ulonglong)((*data_buffer - (longlong)int_ptr) + data_buffer[2]) < 5) {
    item_offset = (longlong)int_ptr - *data_buffer;
    expand_buffer_if_needed(data_buffer,item_offset + 4,item_offset,batch_param2,unused_param3,unused_param2,unused_param1);
    int_ptr = (int *)data_buffer[1];
  }
  *int_ptr = (int)(range_size >> 2) - (int)(range_size >> 0x3f);
  data_buffer[1] = data_buffer[1] + 4;
  item_offset = *(longlong *)(render_context + 0x800) - *(longlong *)(render_context + 0x7f8);
  range_size = item_offset >> 0x3f;
  index = start_index;
  current_index = start_index;
  if (item_offset / 0x98 + range_size != range_size) {
    do {
      write_buffer_data(data_buffer,current_index * 0x98 + *(longlong *)(render_context + 0x7f8));
      counter = (int)index + 1;
      index = (ulonglong)counter;
      current_index = (longlong)(int)counter;
    } while ((ulonglong)(longlong)(int)counter <
             (ulonglong)((*(longlong *)(render_context + 0x800) - *(longlong *)(render_context + 0x7f8)) / 0x98));
  }
  write_buffer_data(data_buffer,render_context + 0x818);
  byte_ptr = (int8_t *)data_buffer[1];
  byte_value = *(int8_t *)(render_context + 0x8b0);
  if ((ulonglong)((*data_buffer - (longlong)byte_ptr) + data_buffer[2]) < 2) {
    expand_buffer_if_needed(data_buffer,byte_ptr + (1 - *data_buffer));
    byte_ptr = (int8_t *)data_buffer[1];
  }
  *byte_ptr = byte_value;
  data_buffer[1] = data_buffer[1] + 1;
  uint_ptr = (int32_t *)data_buffer[1];
  uint_value = *(int32_t *)(render_context + 0x8b4);
  if ((ulonglong)((*data_buffer - (longlong)uint_ptr) + data_buffer[2]) < 5) {
    expand_buffer_if_needed(data_buffer,(longlong)uint_ptr + (4 - *data_buffer));
    uint_ptr = (int32_t *)data_buffer[1];
  }
  *uint_ptr = uint_value;
  data_buffer[1] = data_buffer[1] + 4;
  write_buffer_data(data_buffer,render_context + 0x8b8);
  range_size = *(longlong *)(render_context + 0x958) - *(longlong *)(render_context + 0x950);
  range_size = range_size / 0x26 + (range_size >> 0x3f);
  int_ptr = (int *)data_buffer[1];
  if ((ulonglong)((*data_buffer - (longlong)int_ptr) + data_buffer[2]) < 5) {
    expand_buffer_if_needed(data_buffer,(longlong)int_ptr + (4 - *data_buffer));
    int_ptr = (int *)data_buffer[1];
  }
  *int_ptr = (int)(range_size >> 2) - (int)(range_size >> 0x3f);
  data_buffer[1] = data_buffer[1] + 4;
  item_offset = *(longlong *)(render_context + 0x958) - *(longlong *)(render_context + 0x950);
  range_size = item_offset >> 0x3f;
  index = start_index;
  current_index = start_index;
  if (item_offset / 0x98 + range_size != range_size) {
    do {
      write_buffer_data(data_buffer,current_index * 0x98 + *(longlong *)(render_context + 0x950));
      counter = (int)index + 1;
      index = (ulonglong)counter;
      current_index = (longlong)(int)counter;
    } while ((ulonglong)(longlong)(int)counter <
             (ulonglong)((*(longlong *)(render_context + 0x958) - *(longlong *)(render_context + 0x950)) / 0x98));
  }
  range_size = render_context + 0x970;
  item_offset = 5;
  do {
    write_buffer_data(data_buffer,range_size);
    range_size = range_size + 0x98;
    item_offset = item_offset + -1;
  } while (item_offset != 0);
  range_size = *(longlong *)(render_context + 0xc70) - *(longlong *)(render_context + 0xc68);
  range_size = range_size / 0x26 + (range_size >> 0x3f);
  int_ptr = (int *)data_buffer[1];
  if ((ulonglong)((*data_buffer - (longlong)int_ptr) + data_buffer[2]) < 5) {
    expand_buffer_if_needed(data_buffer,(longlong)int_ptr + (4 - *data_buffer));
    int_ptr = (int *)data_buffer[1];
  }
  *int_ptr = (int)(range_size >> 2) - (int)(range_size >> 0x3f);
  data_buffer[1] = data_buffer[1] + 4;
  item_offset = *(longlong *)(render_context + 0xc70) - *(longlong *)(render_context + 0xc68);
  range_size = item_offset >> 0x3f;
  index = start_index;
  current_index = start_index;
  if (item_offset / 0x98 + range_size != range_size) {
    do {
      write_buffer_data(data_buffer,current_index * 0x98 + *(longlong *)(render_context + 0xc68));
      counter = (int)index + 1;
      index = (ulonglong)counter;
      current_index = (longlong)(int)counter;
    } while ((ulonglong)(longlong)(int)counter <
             (ulonglong)((*(longlong *)(render_context + 0xc70) - *(longlong *)(render_context + 0xc68)) / 0x98));
  }
  range_size = render_context + 0x1208;
  item_offset = 9;
  do {
    write_buffer_data(data_buffer,range_size);
    range_size = range_size + 0x98;
    item_offset = item_offset + -1;
  } while (item_offset != 0);
  write_buffer_data(data_buffer,render_context + 0x1760);
  write_buffer_data(data_buffer,render_context + 0x17f8);
  range_size = *(longlong *)(render_context + 0x1898) - *(longlong *)(render_context + 0x1890);
  range_size = range_size / 0x26 + (range_size >> 0x3f);
  int_ptr = (int *)data_buffer[1];
  if ((ulonglong)((*data_buffer - (longlong)int_ptr) + data_buffer[2]) < 5) {
    expand_buffer_if_needed(data_buffer,(longlong)int_ptr + (4 - *data_buffer));
    int_ptr = (int *)data_buffer[1];
  }
  *int_ptr = (int)(range_size >> 2) - (int)(range_size >> 0x3f);
  data_buffer[1] = data_buffer[1] + 4;
  item_offset = *(longlong *)(render_context + 0x1898) - *(longlong *)(render_context + 0x1890);
  range_size = item_offset >> 0x3f;
  index = start_index;
  current_index = start_index;
  if (item_offset / 0x98 + range_size != range_size) {
    do {
      write_buffer_data(data_buffer,current_index * 0x98 + *(longlong *)(render_context + 0x1890));
      counter = (int)index + 1;
      index = (ulonglong)counter;
      current_index = (longlong)(int)counter;
    } while ((ulonglong)(longlong)(int)counter <
             (ulonglong)((*(longlong *)(render_context + 0x1898) - *(longlong *)(render_context + 0x1890)) / 0x98)
            );
  }
  write_buffer_data(data_buffer,render_context + 0x18b0);
  byte_ptr = (int8_t *)data_buffer[1];
  byte_value = *(int8_t *)(render_context + 0x18d1);
  if ((ulonglong)((*data_buffer - (longlong)byte_ptr) + data_buffer[2]) < 2) {
    expand_buffer_if_needed(data_buffer,byte_ptr + (1 - *data_buffer));
    byte_ptr = (int8_t *)data_buffer[1];
  }
  *byte_ptr = byte_value;
  data_buffer[1] = data_buffer[1] + 1;
  uint_ptr = (int32_t *)data_buffer[1];
  if (*(char *)(render_context + 0x18d1) != '\0') {
    write_buffer_data(data_buffer,render_context + 0x18d8);
    write_buffer_data(data_buffer,render_context + 0x1970);
    write_buffer_data(data_buffer,render_context + 0x1a08);
    write_buffer_data(data_buffer,render_context + 0x1aa0);
    write_buffer_data(data_buffer,render_context + 0x1b38);
    write_buffer_data(data_buffer,render_context + 0x1bd0);
    uint_ptr = (int32_t *)data_buffer[1];
  }
  if ((ulonglong)((*data_buffer - (longlong)uint_ptr) + data_buffer[2]) < 5) {
    expand_buffer_if_needed(data_buffer,(longlong)uint_ptr + (4 - *data_buffer));
    uint_ptr = (int32_t *)data_buffer[1];
  }
  *uint_ptr = 0x10;
  data_buffer[1] = data_buffer[1] + 4;
  render_context = render_context + 0xc88;
  do {
    int_ptr = (int *)data_buffer[1];
    if ((ulonglong)((*data_buffer - (longlong)int_ptr) + data_buffer[2]) < 5) {
      expand_buffer_if_needed(data_buffer,(longlong)int_ptr + (4 - *data_buffer));
      int_ptr = (int *)data_buffer[1];
    }
    *int_ptr = (int)start_index;
    data_buffer[1] = data_buffer[1] + 4;
    write_buffer_data(data_buffer,render_context);
    counter = (int)start_index + 1;
    start_index = (ulonglong)counter;
    render_context = render_context + 0x58;
  } while ((int)counter < 0x10);
  return;
}



// 函数: void process_rendering_flags(longlong *flag_table, longlong context_offset, uint *result_flags)
// 功能: 处理渲染标志位
// 参数: 
//   flag_table - 标志表指针
//   context_offset - 上下文偏移量
//   result_flags - 结果标志指针
// 注意: 此函数使用了栈保护机制
void process_rendering_flags(longlong *flag_table, longlong context_offset, uint *result_flags)

{
  uint *flag_ptr;
  byte *string_ptr;
  uint flag_value;
  longlong item_size;
  byte *compare_ptr;
  int string_length;
  ulonglong total_flags;
  longlong temp_offset;
  byte *temp_string;
  int temp_length;
  longlong *current_table;
  int8_t stack_guard[32];
  uint64_t guard_value1;
  void *guard_ptr1;
  byte *guard_ptr2;
  int guard_int;
  byte stack_buffer[1032];
  ulonglong guard_value2;
  
  guard_value1 = 0xfffffffffffffffe;
  guard_value2 = STACK_COOKIE ^ (ulonglong)stack_guard;
  *(longlong *)(context_offset + 8) = *(longlong *)(context_offset + 8) + 4;
  *result_flags = 0;
  flag_value = **(uint **)(context_offset + 8);
  total_flags = (ulonglong)flag_value;
  *(uint **)(context_offset + 8) = *(uint **)(context_offset + 8) + 1;
  if (flag_value != 0) {
    do {
      guard_ptr1 = &RENDERING_FLAG_NAMES;
      guard_ptr2 = stack_buffer;
      guard_int = 0;
      stack_buffer[0] = 0;
      flag_value = **(uint **)(context_offset + 8);
      flag_ptr = *(uint **)(context_offset + 8) + 1;
      *(uint **)(context_offset + 8) = flag_ptr;
      temp_offset = 0;
      current_table = flag_table;
      if (flag_value != 0) {
        copy_string_data(&guard_ptr1,flag_ptr,flag_value);
        *(longlong *)(context_offset + 8) = *(longlong *)(context_offset + 8) + (ulonglong)flag_value;
      }
      do {
        item_size = -1;
        do {
          item_size = item_size + 1;
        } while (*(char *)(*current_table + item_size) != '\0');
        string_length = (int)item_size;
        if (guard_int == string_length) {
          if (guard_int != 0) {
            compare_ptr = guard_ptr2;
            do {
              string_ptr = compare_ptr + (*current_table - (longlong)guard_ptr2);
              string_length = (uint)*compare_ptr - (uint)*string_ptr;
              if (string_length != 0) break;
              compare_ptr = compare_ptr + 1;
            } while (*string_ptr != 0);
          }
FLAG_MATCH_FOUND:
          if (string_length == 0) {
            *result_flags = *result_flags | *(uint *)(flag_table + temp_offset * 2 + 1);
            break;
          }
        }
        else if (guard_int == 0) goto FLAG_MATCH_FOUND;
        temp_offset = temp_offset + 1;
        current_table = current_table + 2;
      } while (temp_offset < 0x15);
      guard_ptr1 = &RENDERING_VTABLE_START;
      total_flags = total_flags - 1;
    } while (total_flags != 0);
  }
                    // WARNING: Subroutine does not return
  cleanup_stack_protection(guard_value2 ^ (ulonglong)stack_guard);
}



// 函数: void process_rendering_flag_table(uint64_t *flag_table, uint flag_mask, longlong *data_buffer)
// 功能: 处理渲染标志表
// 参数: 
//   flag_table - 标志表指针
//   flag_mask - 标志掩码
//   data_buffer - 数据缓冲区指针
void process_rendering_flag_table(uint64_t *flag_table, uint flag_mask, longlong *data_buffer)

{
  int32_t *uint_ptr;
  longlong buffer_offset;
  longlong buffer_pos;
  int match_count;
  longlong buffer_size;
  
  uint_ptr = (int32_t *)data_buffer[1];
  if ((ulonglong)((*data_buffer - (longlong)uint_ptr) + data_buffer[2]) < 5) {
    expand_buffer_if_needed(data_buffer,(longlong)uint_ptr + (4 - *data_buffer));
    uint_ptr = (int32_t *)data_buffer[1];
  }
  match_count = 0;
  *uint_ptr = 0;
  buffer_pos = *data_buffer;
  buffer_offset = data_buffer[1] + 4;
  data_buffer[1] = buffer_offset;
  buffer_size = 0;
  if (buffer_pos != 0) {
    buffer_size = buffer_offset - buffer_pos;
  }
  if ((ulonglong)((buffer_pos - buffer_offset) + data_buffer[2]) < 5) {
    expand_buffer_if_needed(data_buffer,(buffer_offset - buffer_pos) + 4);
    buffer_offset = data_buffer[1];
  }
  buffer_pos = 0x15;
  data_buffer[1] = buffer_offset + 4;
  do {
    if ((*(uint *)(flag_table + 1) & flag_mask) != 0) {
      write_string_to_buffer(data_buffer,*flag_table);
      match_count = match_count + 1;
    }
    flag_table = flag_table + 2;
    buffer_pos = buffer_pos + -1;
  } while (buffer_pos != 0);
  *(int *)(buffer_size + *data_buffer) = match_count;
  return;
}



// 函数: void resize_rendering_buffer(longlong *buffer_manager, ulonglong new_size)
// 功能: 调整渲染缓冲区大小
// 参数: 
//   buffer_manager - 缓冲区管理器指针
//   new_size - 新的缓冲区大小
void resize_rendering_buffer(longlong *buffer_manager, ulonglong new_size)

{
  void *vtable_ptr;
  uint64_t *buffer_ptr;
  ulonglong current_size;
  uint64_t *end_ptr;
  ulonglong temp_size;
  uint64_t *new_buffer;
  uint64_t *copy_src;
  void *vtable_copy;
  longlong offset_diff;
  
  end_ptr = (uint64_t *)buffer_manager[1];
  buffer_pos = *buffer_manager;
  current_size = ((longlong)end_ptr - buffer_pos) / 0x98;
  if (new_size <= current_size) {
    new_buffer = (uint64_t *)(new_size * 0x98 + buffer_pos);
    if (new_buffer != end_ptr) {
      do {
        (**(code **)*new_buffer)(new_buffer,0);
        new_buffer = new_buffer + 0x13;
      } while (new_buffer != end_ptr);
      buffer_pos = *buffer_manager;
    }
    buffer_manager[1] = new_size * 0x98 + buffer_pos;
    return;
  }
  new_size = new_size - current_size;
  end_ptr = (uint64_t *)buffer_manager[1];
  if ((ulonglong)((buffer_manager[2] - (longlong)end_ptr) / 0x98) < new_size) {
    new_buffer = (uint64_t *)*buffer_manager;
    buffer_pos = ((longlong)end_ptr - (longlong)new_buffer) / 0x98;
    current_size = buffer_pos * 2;
    if (buffer_pos == 0) {
      current_size = 1;
    }
    if (current_size < buffer_pos + new_size) {
      current_size = buffer_pos + new_size;
    }
    buffer_ptr = (uint64_t *)0x0;
    if (current_size != 0) {
      buffer_ptr = (uint64_t *)
               allocate_rendering_memory(GLOBAL_MEMORY_MANAGER,current_size * 0x98,(char)buffer_manager[3],MEMORY_TAG_RENDERING,
                            0xfffffffffffffffe);
      end_ptr = (uint64_t *)buffer_manager[1];
      new_buffer = (uint64_t *)*buffer_manager;
    }
    copy_src = buffer_ptr;
    if (new_buffer != end_ptr) {
      buffer_pos = (longlong)new_buffer - (longlong)buffer_ptr;
      do {
        *copy_src = &RENDERING_VTABLE_START;
        copy_src[1] = 0;
        *(int32_t *)(copy_src + 2) = 0;
        *copy_src = &RENDERING_DESTRUCTOR_TABLE;
        copy_src[1] = copy_src + 3;
        *(int32_t *)(copy_src + 2) = 0;
        *(int8_t *)(copy_src + 3) = 0;
        *(int32_t *)(copy_src + 2) = *(int32_t *)((longlong)copy_src + buffer_pos + 0x10);
        vtable_ptr = *(void **)((longlong)copy_src + buffer_pos + 8);
        vtable_copy = &DEFAULT_STRING_DATA;
        if (vtable_ptr != (void *)0x0) {
          vtable_copy = vtable_ptr;
        }
        strcpy_s(copy_src[1],0x80,vtable_copy);
        copy_src = copy_src + 0x13;
      } while ((uint64_t *)((longlong)copy_src + buffer_pos) != end_ptr);
    }
    if (new_size != 0) {
      end_ptr = copy_src + 1;
      temp_size = new_size;
      do {
        end_ptr[-1] = &RENDERING_VTABLE_START;
        *end_ptr = 0;
        *(int32_t *)(end_ptr + 1) = 0;
        end_ptr[-1] = &RENDERING_DESTRUCTOR_TABLE;
        *end_ptr = end_ptr + 2;
        *(int32_t *)(end_ptr + 1) = 0;
        *(int8_t *)(end_ptr + 2) = 0;
        end_ptr = end_ptr + 0x13;
        temp_size = temp_size - 1;
      } while (temp_size != 0);
    }
    end_ptr = (uint64_t *)buffer_manager[1];
    new_buffer = (uint64_t *)*buffer_manager;
    if (new_buffer != end_ptr) {
      do {
        (**(code **)*new_buffer)(new_buffer,0);
        new_buffer = new_buffer + 0x13;
      } while (new_buffer != end_ptr);
      new_buffer = (uint64_t *)*buffer_manager;
    }
    if (new_buffer != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      free_rendering_memory(new_buffer);
    }
    *buffer_manager = (longlong)buffer_ptr;
    buffer_manager[1] = (longlong)(copy_src + new_size * 0x13);
    buffer_manager[2] = (longlong)(buffer_ptr + current_size * 0x13);
  }
  else {
    current_size = new_size;
    if (new_size != 0) {
      do {
        *end_ptr = &RENDERING_VTABLE_START;
        end_ptr[1] = 0;
        *(int32_t *)(end_ptr + 2) = 0;
        *end_ptr = &RENDERING_DESTRUCTOR_TABLE;
        end_ptr[1] = end_ptr + 3;
        *(int32_t *)(end_ptr + 2) = 0;
        *(int8_t *)(end_ptr + 3) = 0;
        end_ptr = end_ptr + 0x13;
        current_size = current_size - 1;
      } while (current_size != 0);
      end_ptr = (uint64_t *)buffer_manager[1];
    }
    buffer_manager[1] = (longlong)(end_ptr + new_size * 0x13);
  }
  return;
}