#include "TaleWorlds.Native.Split.h"

// 03_rendering_part009.c - 渲染系统数据序列化与结构管理
// 本文件包含5个函数，主要负责渲染数据的序列化、结构体初始化和内存管理

/**
 * 序列化渲染材质数据
 * 将复杂的渲染材质数据结构序列化为字节流格式
 * 
 * @param material_context 材质上下文指针，包含材质的各个属性
 * @param data_buffer 数据缓冲区指针，用于存储序列化后的数据
 */
void serialize_rendering_material_data(longlong material_context, longlong *data_buffer)

{
  undefined1 material_flag;
  undefined4 texture_id;
  longlong range_size;
  longlong texture_count;
  undefined1 *buffer_ptr;
  undefined4 *data_ptr;
  int *count_ptr;
  uint texture_index;
  ulonglong loop_counter;
  ulonglong start_offset;
  ulonglong current_offset;
  
  data_ptr = (undefined4 *)data_buffer[1];
  if ((ulonglong)((*data_buffer - (longlong)data_ptr) + data_buffer[2]) < 5) {
    ensure_buffer_capacity(data_buffer,(longlong)data_ptr + (4 - *data_buffer));
    data_ptr = (undefined4 *)data_buffer[1];
  }
  current_offset = 0;
  *data_ptr = 0;
  data_buffer[1] = data_buffer[1] + 4;
  range_size = *(longlong *)(material_context + 0x28) - *(longlong *)(material_context + 0x20);
  count_ptr = (int *)data_buffer[1];
  range_size = range_size / 0x26 + (range_size >> 0x3f);
  if ((ulonglong)((*data_buffer - (longlong)count_ptr) + data_buffer[2]) < 5) {
    ensure_buffer_capacity(data_buffer,(longlong)count_ptr + (4 - *data_buffer));
    count_ptr = (int *)data_buffer[1];
  }
  *count_ptr = (int)(range_size >> 2) - (int)(range_size >> 0x3f);
  data_buffer[1] = data_buffer[1] + 4;
  texture_count = *(longlong *)(material_context + 0x28) - *(longlong *)(material_context + 0x20);
  range_size = texture_count >> 0x3f;
  loop_counter = current_offset;
  start_offset = current_offset;
  if (texture_count / 0x98 + range_size != range_size) {
    do {
      serialize_texture_data(data_buffer,start_offset * 0x98 + *(longlong *)(material_context + 0x20));
      texture_index = (int)loop_counter + 1;
      loop_counter = (ulonglong)texture_index;
      start_offset = (longlong)(int)texture_index;
    } while ((ulonglong)(longlong)(int)texture_index <
             (ulonglong)((*(longlong *)(material_context + 0x28) - *(longlong *)(material_context + 0x20)) / 0x98));
  }
  serialize_texture_data(data_buffer,material_context + 0x40);
  buffer_ptr = (undefined1 *)data_buffer[1];
  material_flag = *(undefined1 *)(material_context + 0xd8);
  if ((ulonglong)((*data_buffer - (longlong)buffer_ptr) + data_buffer[2]) < 2) {
    ensure_buffer_capacity(data_buffer,buffer_ptr + (1 - *data_buffer));
    buffer_ptr = (undefined1 *)data_buffer[1];
  }
  *buffer_ptr = material_flag;
  data_buffer[1] = data_buffer[1] + 1;
  data_ptr = (undefined4 *)data_buffer[1];
  texture_id = *(undefined4 *)(material_context + 0xdc);
  if ((ulonglong)((*data_buffer - (longlong)data_ptr) + data_buffer[2]) < 5) {
    ensure_buffer_capacity(data_buffer,(longlong)data_ptr + (4 - *data_buffer));
    data_ptr = (undefined4 *)data_buffer[1];
  }
  *data_ptr = texture_id;
  data_buffer[1] = data_buffer[1] + 4;
  serialize_texture_data(data_buffer,material_context + 0xe0);
  range_size = *(longlong *)(material_context + 0x180) - *(longlong *)(material_context + 0x178);
  range_size = range_size / 0x26 + (range_size >> 0x3f);
  count_ptr = (int *)data_buffer[1];
  if ((ulonglong)((*data_buffer - (longlong)count_ptr) + data_buffer[2]) < 5) {
    ensure_buffer_capacity(data_buffer,(longlong)count_ptr + (4 - *data_buffer));
    count_ptr = (int *)data_buffer[1];
  }
  *count_ptr = (int)(range_size >> 2) - (int)(range_size >> 0x3f);
  data_buffer[1] = data_buffer[1] + 4;
  texture_count = *(longlong *)(material_context + 0x180) - *(longlong *)(material_context + 0x178);
  range_size = texture_count >> 0x3f;
  loop_counter = current_offset;
  start_offset = current_offset;
  if (texture_count / 0x98 + range_size != range_size) {
    do {
      serialize_texture_data(data_buffer,start_offset * 0x98 + *(longlong *)(material_context + 0x178));
      texture_index = (int)loop_counter + 1;
      loop_counter = (ulonglong)texture_index;
      start_offset = (longlong)(int)texture_index;
    } while ((ulonglong)(longlong)(int)texture_index <
             (ulonglong)((*(longlong *)(material_context + 0x180) - *(longlong *)(material_context + 0x178)) / 0x98));
  }
  range_size = material_context + 0x198;
  texture_count = 5;
  do {
    serialize_texture_data(data_buffer,range_size);
    range_size = range_size + 0x98;
    texture_count = texture_count + -1;
  } while (texture_count != 0);
  range_size = *(longlong *)(material_context + 0x498) - *(longlong *)(material_context + 0x490);
  range_size = range_size / 0x26 + (range_size >> 0x3f);
  count_ptr = (int *)data_buffer[1];
  if ((ulonglong)((*data_buffer - (longlong)count_ptr) + data_buffer[2]) < 5) {
    ensure_buffer_capacity(data_buffer,(longlong)count_ptr + (4 - *data_buffer));
    count_ptr = (int *)data_buffer[1];
  }
  *count_ptr = (int)(range_size >> 2) - (int)(range_size >> 0x3f);
  data_buffer[1] = data_buffer[1] + 4;
  texture_count = *(longlong *)(material_context + 0x498) - *(longlong *)(material_context + 0x490);
  range_size = texture_count >> 0x3f;
  loop_counter = current_offset;
  start_offset = current_offset;
  if (texture_count / 0x98 + range_size != range_size) {
    do {
      serialize_texture_data(data_buffer,start_offset * 0x98 + *(longlong *)(material_context + 0x490));
      texture_index = (int)loop_counter + 1;
      loop_counter = (ulonglong)texture_index;
      start_offset = (longlong)(int)texture_index;
    } while ((ulonglong)(longlong)(int)texture_index <
             (ulonglong)((*(longlong *)(material_context + 0x498) - *(longlong *)(material_context + 0x490)) / 0x98));
  }
  range_size = material_context + 0xa30;
  texture_count = 9;
  do {
    serialize_texture_data(data_buffer,range_size);
    range_size = range_size + 0x98;
    texture_count = texture_count + -1;
  } while (texture_count != 0);
  serialize_texture_data(data_buffer,material_context + 0xf88);
  serialize_texture_data(data_buffer,material_context + 0x1020);
  range_size = *(longlong *)(material_context + 0x10c0) - *(longlong *)(material_context + 0x10b8);
  range_size = range_size / 0x26 + (range_size >> 0x3f);
  count_ptr = (int *)data_buffer[1];
  if ((ulonglong)((*data_buffer - (longlong)count_ptr) + data_buffer[2]) < 5) {
    ensure_buffer_capacity(data_buffer,(longlong)count_ptr + (4 - *data_buffer));
    count_ptr = (int *)data_buffer[1];
  }
  *count_ptr = (int)(range_size >> 2) - (int)(range_size >> 0x3f);
  data_buffer[1] = data_buffer[1] + 4;
  texture_count = *(longlong *)(material_context + 0x10c0) - *(longlong *)(material_context + 0x10b8);
  range_size = texture_count >> 0x3f;
  loop_counter = current_offset;
  start_offset = current_offset;
  if (texture_count / 0x98 + range_size != range_size) {
    do {
      serialize_texture_data(data_buffer,start_offset * 0x98 + *(longlong *)(material_context + 0x10b8));
      texture_index = (int)loop_counter + 1;
      loop_counter = (ulonglong)texture_index;
      start_offset = (longlong)(int)texture_index;
    } while ((ulonglong)(longlong)(int)texture_index <
             (ulonglong)((*(longlong *)(material_context + 0x10c0) - *(longlong *)(material_context + 0x10b8)) / 0x98)
            );
  }
  serialize_texture_data(data_buffer,material_context + 0x10d8);
  buffer_ptr = (undefined1 *)data_buffer[1];
  material_flag = *(undefined1 *)(material_context + 0x10f9);
  if ((ulonglong)((*data_buffer - (longlong)buffer_ptr) + data_buffer[2]) < 2) {
    ensure_buffer_capacity(data_buffer,buffer_ptr + (1 - *data_buffer));
    buffer_ptr = (undefined1 *)data_buffer[1];
  }
  *buffer_ptr = material_flag;
  data_buffer[1] = data_buffer[1] + 1;
  data_ptr = (undefined4 *)data_buffer[1];
  if (*(char *)(material_context + 0x10f9) != '\0') {
    serialize_texture_data(data_buffer,material_context + 0x1100);
    serialize_texture_data(data_buffer,material_context + 0x1198);
    serialize_texture_data(data_buffer,material_context + 0x1230);
    serialize_texture_data(data_buffer,material_context + 0x12c8);
    serialize_texture_data(data_buffer,material_context + 0x1360);
    serialize_texture_data(data_buffer,material_context + 0x13f8);
    data_ptr = (undefined4 *)data_buffer[1];
  }
  if ((ulonglong)((*data_buffer - (longlong)data_ptr) + data_buffer[2]) < 5) {
    ensure_buffer_capacity(data_buffer,(longlong)data_ptr + (4 - *data_buffer));
    data_ptr = (undefined4 *)data_buffer[1];
  }
  *data_ptr = 0x10;
  data_buffer[1] = data_buffer[1] + 4;
  material_context = material_context + 0x4b0;
  do {
    count_ptr = (int *)data_buffer[1];
    if ((ulonglong)((*data_buffer - (longlong)count_ptr) + data_buffer[2]) < 5) {
      ensure_buffer_capacity(data_buffer,(longlong)count_ptr + (4 - *data_buffer));
      count_ptr = (int *)data_buffer[1];
    }
    *count_ptr = (int)current_offset;
    data_buffer[1] = data_buffer[1] + 4;
    serialize_texture_data(data_buffer,material_context);
    texture_index = (int)current_offset + 1;
    current_offset = (ulonglong)texture_index;
    material_context = material_context + 0x58;
  } while ((int)texture_index < 0x10);
  return;
}


undefined4 * initialize_rendering_resource_pool(undefined4 *resource_pool)

{
  *(undefined **)(resource_pool + 2) = &RENDERING_RESOURCE_BASE_ADDRESS;
  *(undefined8 *)(resource_pool + 4) = 0;
  resource_pool[6] = 0;
  *(undefined **)(resource_pool + 2) = &RENDERING_RESOURCE_EXTENDED_ADDRESS;
  *(undefined8 *)(resource_pool + 8) = 0;
  *(undefined8 *)(resource_pool + 4) = 0;
  resource_pool[6] = 0;
  *(undefined **)(resource_pool + 10) = &RENDERING_RESOURCE_BASE_ADDRESS;
  *(undefined8 *)(resource_pool + 0xc) = 0;
  resource_pool[0xe] = 0;
  *(undefined **)(resource_pool + 10) = &RENDERING_RESOURCE_EXTENDED_ADDRESS;
  *(undefined8 *)(resource_pool + 0x10) = 0;
  *(undefined8 *)(resource_pool + 0xc) = 0;
  resource_pool[0xe] = 0;
  *(undefined **)(resource_pool + 0x12) = &RENDERING_RESOURCE_BASE_ADDRESS;
  *(undefined8 *)(resource_pool + 0x14) = 0;
  resource_pool[0x16] = 0;
  *(undefined **)(resource_pool + 0x12) = &RENDERING_RESOURCE_EXTENDED_ADDRESS;
  *(undefined8 *)(resource_pool + 0x18) = 0;
  *(undefined8 *)(resource_pool + 0x14) = 0;
  resource_pool[0x16] = 0;
  *(undefined **)(resource_pool + 0x1a) = &RENDERING_RESOURCE_BASE_ADDRESS;
  *(undefined8 *)(resource_pool + 0x1c) = 0;
  resource_pool[0x1e] = 0;
  *(undefined **)(resource_pool + 0x1a) = &RENDERING_RESOURCE_EXTENDED_ADDRESS;
  *(undefined8 *)(resource_pool + 0x20) = 0;
  *(undefined8 *)(resource_pool + 0x1c) = 0;
  resource_pool[0x1e] = 0;
  *(undefined **)(resource_pool + 0x22) = &RENDERING_RESOURCE_BASE_ADDRESS;
  *(undefined8 *)(resource_pool + 0x24) = 0;
  resource_pool[0x26] = 0;
  *(undefined **)(resource_pool + 0x22) = &RENDERING_RESOURCE_EXTENDED_ADDRESS;
  *(undefined8 *)(resource_pool + 0x28) = 0;
  *(undefined8 *)(resource_pool + 0x24) = 0;
  resource_pool[0x26] = 0;
  *(undefined **)(resource_pool + 0x2a) = &RENDERING_RESOURCE_BASE_ADDRESS;
  *(undefined8 *)(resource_pool + 0x2c) = 0;
  resource_pool[0x2e] = 0;
  *(undefined **)(resource_pool + 0x2a) = &RENDERING_RESOURCE_EXTENDED_ADDRESS;
  *(undefined8 *)(resource_pool + 0x30) = 0;
  *(undefined8 *)(resource_pool + 0x2c) = 0;
  resource_pool[0x2e] = 0;
  *(undefined **)(resource_pool + 0x32) = &RENDERING_RESOURCE_BASE_ADDRESS;
  *(undefined8 *)(resource_pool + 0x34) = 0;
  resource_pool[0x36] = 0;
  *(undefined **)(resource_pool + 0x32) = &RENDERING_RESOURCE_EXTENDED_ADDRESS;
  *(undefined8 *)(resource_pool + 0x38) = 0;
  *(undefined8 *)(resource_pool + 0x34) = 0;
  resource_pool[0x36] = 0;
  *(undefined **)(resource_pool + 0x3a) = &RENDERING_RESOURCE_BASE_ADDRESS;
  *(undefined8 *)(resource_pool + 0x3c) = 0;
  resource_pool[0x3e] = 0;
  *(undefined **)(resource_pool + 0x3a) = &RENDERING_RESOURCE_EXTENDED_ADDRESS;
  *(undefined8 *)(resource_pool + 0x40) = 0;
  *(undefined8 *)(resource_pool + 0x3c) = 0;
  resource_pool[0x3e] = 0;
  *(undefined **)(resource_pool + 0x42) = &RENDERING_RESOURCE_BASE_ADDRESS;
  *(undefined8 *)(resource_pool + 0x44) = 0;
  resource_pool[0x46] = 0;
  *(undefined **)(resource_pool + 0x42) = &RENDERING_RESOURCE_EXTENDED_ADDRESS;
  *(undefined8 *)(resource_pool + 0x48) = 0;
  *(undefined8 *)(resource_pool + 0x44) = 0;
  resource_pool[0x46] = 0;
  *(undefined8 *)(resource_pool + 0x4a) = 0;
  *(undefined8 *)(resource_pool + 0x4c) = 0;
  *(undefined8 *)(resource_pool + 0x4e) = 0;
  resource_pool[0x50] = 3;
  *(undefined **)(resource_pool + 0x52) = &RENDERING_RESOURCE_BASE_ADDRESS;
  *(undefined8 *)(resource_pool + 0x54) = 0;
  resource_pool[0x56] = 0;
  *(undefined **)(resource_pool + 0x52) = &RENDERING_RESOURCE_EXTENDED_ADDRESS;
  *(undefined8 *)(resource_pool + 0x58) = 0;
  *(undefined8 *)(resource_pool + 0x54) = 0;
  resource_pool[0x56] = 0;
  *(undefined **)(resource_pool + 0x5a) = &RENDERING_RESOURCE_BASE_ADDRESS;
  *(undefined8 *)(resource_pool + 0x5c) = 0;
  resource_pool[0x5e] = 0;
  *(undefined **)(resource_pool + 0x5a) = &RENDERING_RESOURCE_EXTENDED_ADDRESS;
  *(undefined8 *)(resource_pool + 0x60) = 0;
  *(undefined8 *)(resource_pool + 0x5c) = 0;
  resource_pool[0x5e] = 0;
  *(undefined **)(resource_pool + 0x62) = &RENDERING_RESOURCE_BASE_ADDRESS;
  *(undefined8 *)(resource_pool + 100) = 0;
  resource_pool[0x66] = 0;
  *(undefined **)(resource_pool + 0x62) = &RENDERING_RESOURCE_EXTENDED_ADDRESS;
  *(undefined8 *)(resource_pool + 0x68) = 0;
  *(undefined8 *)(resource_pool + 100) = 0;
  resource_pool[0x66] = 0;
  *(undefined **)(resource_pool + 0x6a) = &RENDERING_RESOURCE_BASE_ADDRESS;
  *(undefined8 *)(resource_pool + 0x6c) = 0;
  resource_pool[0x6e] = 0;
  *(undefined **)(resource_pool + 0x6a) = &RENDERING_RESOURCE_EXTENDED_ADDRESS;
  *(undefined8 *)(resource_pool + 0x70) = 0;
  *(undefined8 *)(resource_pool + 0x6c) = 0;
  resource_pool[0x6e] = 0;
  *(undefined **)(resource_pool + 0x72) = &RENDERING_RESOURCE_BASE_ADDRESS;
  *(undefined8 *)(resource_pool + 0x74) = 0;
  resource_pool[0x76] = 0;
  *(undefined **)(resource_pool + 0x72) = &RENDERING_RESOURCE_EXTENDED_ADDRESS;
  *(undefined8 *)(resource_pool + 0x78) = 0;
  *(undefined8 *)(resource_pool + 0x74) = 0;
  resource_pool[0x76] = 0;
  *(undefined **)(resource_pool + 0x7a) = &RENDERING_RESOURCE_BASE_ADDRESS;
  *(undefined8 *)(resource_pool + 0x7c) = 0;
  resource_pool[0x7e] = 0;
  *(undefined **)(resource_pool + 0x7a) = &RENDERING_RESOURCE_EXTENDED_ADDRESS;
  *(undefined8 *)(resource_pool + 0x80) = 0;
  *(undefined8 *)(resource_pool + 0x7c) = 0;
  resource_pool[0x7e] = 0;
  *(undefined **)(resource_pool + 0x82) = &RENDERING_RESOURCE_BASE_ADDRESS;
  *(undefined8 *)(resource_pool + 0x84) = 0;
  resource_pool[0x86] = 0;
  *(undefined **)(resource_pool + 0x82) = &RENDERING_RESOURCE_EXTENDED_ADDRESS;
  *(undefined8 *)(resource_pool + 0x88) = 0;
  *(undefined8 *)(resource_pool + 0x84) = 0;
  resource_pool[0x86] = 0;
  *(undefined **)(resource_pool + 0x8a) = &RENDERING_RESOURCE_BASE_ADDRESS;
  *(undefined8 *)(resource_pool + 0x8c) = 0;
  resource_pool[0x8e] = 0;
  *(undefined **)(resource_pool + 0x8a) = &RENDERING_RESOURCE_EXTENDED_ADDRESS;
  *(undefined8 *)(resource_pool + 0x90) = 0;
  *(undefined8 *)(resource_pool + 0x8c) = 0;
  resource_pool[0x8e] = 0;
  initialize_rendering_texture_array(resource_pool + 0x92,0x58,0x10,initialize_texture_descriptor,initialize_texture_sampler);
  initialize_rendering_buffer_pool(resource_pool + 500);
  *resource_pool = 0;
  resource_pool[0x1f2] = 0;
  *(undefined1 *)(resource_pool + 499) = 0;
  return resource_pool;
}


/**
 * 序列化渲染场景数据
 * 将场景相关的渲染数据序列化为可传输的格式
 * 
 * @param scene_data 场景数据指针，包含场景中的所有渲染对象
 * @param data_buffer 数据缓冲区，用于存储序列化结果
 * @param flags 序列化标志，控制序列化行为
 * @param config 配置参数，影响序列化过程
 */
void serialize_rendering_scene_data(longlong scene_data,longlong *data_buffer,undefined8 flags,undefined8 config)

{
  undefined1 scene_flag;
  undefined4 object_id;
  longlong data_size;
  undefined1 *buffer_ptr;
  undefined4 *data_ptr;
  int *count_ptr;
  int object_count;
  uint object_index;
  ulonglong loop_counter;
  int array_size;
  longlong array_start;
  ulonglong uVar12;
  undefined8 unaff_RDI;
  ulonglong uVar13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  
  data_ptr = (undefined4 *)data_buffer[1];
  if ((ulonglong)((data_buffer[2] - (longlong)data_ptr) + *data_buffer) < 5) {
    ensure_buffer_capacity(data_buffer,(longlong)data_ptr + (4 - *data_buffer));
    data_ptr = (undefined4 *)data_buffer[1];
  }
  *data_ptr = 0;
  data_buffer[1] = data_buffer[1] + 4;
  data_ptr = (undefined4 *)data_buffer[1];
  if ((ulonglong)((*data_buffer - (longlong)data_ptr) + data_buffer[2]) < 5) {
    ensure_buffer_capacity(data_buffer,(longlong)data_ptr + (4 - *data_buffer));
    data_ptr = (undefined4 *)data_buffer[1];
  }
  *data_ptr = 1;
  data_buffer[1] = data_buffer[1] + 4;
  serialize_rendering_shader_data(&RENDERING_SHADER_TABLE,*(undefined4 *)(scene_data + 8),data_buffer);
  serialize_texture_data(data_buffer,scene_data + 0x10);
  serialize_texture_data(data_buffer,scene_data + 0x30);
  serialize_texture_data(data_buffer,scene_data + 0x50);
  serialize_texture_data(data_buffer,scene_data + 0x70);
  serialize_texture_data(data_buffer,scene_data + 0x90);
  serialize_texture_data(data_buffer,scene_data + 0xb0);
  serialize_texture_data(data_buffer,scene_data + 0xd0);
  serialize_texture_data(data_buffer,scene_data + 0xf0);
  serialize_texture_data(data_buffer,scene_data + 0x110);
  data_size = *(longlong *)(scene_data + 0x138) - *(longlong *)(scene_data + 0x130);
  data_size = data_size / 6 + (data_size >> 0x3f);
  count_ptr = (int *)data_buffer[1];
  array_size = (int)(data_size >> 4) - (int)(data_size >> 0x3f);
  if ((ulonglong)((*data_buffer - (longlong)count_ptr) + data_buffer[2]) < 5) {
    ensure_buffer_capacity(data_buffer,(longlong)count_ptr + (4 - *data_buffer));
    count_ptr = (int *)data_buffer[1];
  }
  *count_ptr = array_size;
  object_count = 0;
  data_buffer[1] = data_buffer[1] + 4;
  data_size = (longlong)array_size;
  if (0 < array_size) {
    array_start = 0;
    do {
      serialize_texture_data(data_buffer,(longlong)object_count * 0x60 + *(longlong *)(scene_data + 0x130));
      data_ptr = (undefined4 *)data_buffer[1];
      object_id = *(undefined4 *)(array_start + 0x58 + *(longlong *)(scene_data + 0x130));
      if ((ulonglong)((*data_buffer - (longlong)data_ptr) + data_buffer[2]) < 5) {
        ensure_buffer_capacity(data_buffer,(longlong)data_ptr + (4 - *data_buffer));
        data_ptr = (undefined4 *)data_buffer[1];
      }
      *data_ptr = object_id;
      data_buffer[1] = data_buffer[1] + 4;
      data_ptr = (undefined4 *)data_buffer[1];
      object_id = *(undefined4 *)(array_start + 0x5c + *(longlong *)(scene_data + 0x130));
      if ((ulonglong)((*data_buffer - (longlong)data_ptr) + data_buffer[2]) < 5) {
        ensure_buffer_capacity(data_buffer,(longlong)data_ptr + (4 - *data_buffer));
        data_ptr = (undefined4 *)data_buffer[1];
      }
      *data_ptr = object_id;
      object_count = object_count + 1;
      data_buffer[1] = data_buffer[1] + 4;
      array_start = array_start + 0x60;
      data_size = data_size + -1;
    } while (data_size != 0);
  }
  serialize_texture_data(data_buffer,scene_data + 0x150);
  serialize_texture_data(data_buffer,scene_data + 0x170);
  serialize_texture_data(data_buffer,scene_data + 400);
  serialize_texture_data(data_buffer,scene_data + 0x1b0);
  serialize_texture_data(data_buffer,scene_data + 0x1d0);
  serialize_texture_data(data_buffer,scene_data + 0x1f0);
  serialize_texture_data(data_buffer,scene_data + 0x210);
  serialize_texture_data(data_buffer,scene_data + 0x230);
  data_size = scene_data + 0x250;
  array_start = 0x10;
  do {
    serialize_texture_data(data_buffer,data_size);
    data_size = data_size + 0x58;
    array_start = array_start + -1;
  } while (array_start != 0);
  serialize_rendering_light_data(&RENDERING_LIGHT_TABLE,*(undefined4 *)(scene_data + 2000),data_buffer);
  buffer_ptr = (undefined1 *)data_buffer[1];
  scene_flag = *(undefined1 *)(scene_data + 0x7d4);
  if ((ulonglong)((*data_buffer - (longlong)buffer_ptr) + data_buffer[2]) < 2) {
    ensure_buffer_capacity(data_buffer,buffer_ptr + (1 - *data_buffer));
    buffer_ptr = (undefined1 *)data_buffer[1];
  }
  *buffer_ptr = scene_flag;
  data_buffer[1] = data_buffer[1] + 1;
  if (*(char *)(scene_data + 0x7d4) == '\0') {
    return;
  }
  data_ptr = (undefined4 *)data_buffer[1];
  if ((ulonglong)((*data_buffer - (longlong)data_ptr) + data_buffer[2]) < 5) {
    ensure_buffer_capacity(data_buffer,(longlong)data_ptr + (4 - *data_buffer));
    data_ptr = (undefined4 *)data_buffer[1];
  }
  uVar12 = 0;
  *data_ptr = 0;
  data_buffer[1] = data_buffer[1] + 4;
  data_size = *(longlong *)(scene_data + 0x800) - *(longlong *)(scene_data + 0x7f8);
  count_ptr = (int *)data_buffer[1];
  data_size = data_size / 0x26 + (data_size >> 0x3f);
  if ((ulonglong)((*data_buffer - (longlong)count_ptr) + data_buffer[2]) < 5) {
    array_start = (longlong)count_ptr - *data_buffer;
    ensure_buffer_capacity(data_buffer,array_start + 4,array_start,config,unaff_R15,unaff_R14,unaff_RDI);
    count_ptr = (int *)data_buffer[1];
  }
  *count_ptr = (int)(data_size >> 2) - (int)(data_size >> 0x3f);
  data_buffer[1] = data_buffer[1] + 4;
  array_start = *(longlong *)(scene_data + 0x800) - *(longlong *)(scene_data + 0x7f8);
  data_size = array_start >> 0x3f;
  loop_counter = uVar12;
  uVar13 = uVar12;
  if (array_start / 0x98 + data_size != data_size) {
    do {
      serialize_texture_data(data_buffer,uVar13 * 0x98 + *(longlong *)(scene_data + 0x7f8));
      object_index = (int)loop_counter + 1;
      loop_counter = (ulonglong)object_index;
      uVar13 = (longlong)(int)object_index;
    } while ((ulonglong)(longlong)(int)object_index <
             (ulonglong)((*(longlong *)(scene_data + 0x800) - *(longlong *)(scene_data + 0x7f8)) / 0x98));
  }
  serialize_texture_data(data_buffer,scene_data + 0x818);
  buffer_ptr = (undefined1 *)data_buffer[1];
  scene_flag = *(undefined1 *)(scene_data + 0x8b0);
  if ((ulonglong)((*data_buffer - (longlong)buffer_ptr) + data_buffer[2]) < 2) {
    ensure_buffer_capacity(data_buffer,buffer_ptr + (1 - *data_buffer));
    buffer_ptr = (undefined1 *)data_buffer[1];
  }
  *buffer_ptr = scene_flag;
  data_buffer[1] = data_buffer[1] + 1;
  data_ptr = (undefined4 *)data_buffer[1];
  object_id = *(undefined4 *)(scene_data + 0x8b4);
  if ((ulonglong)((*data_buffer - (longlong)data_ptr) + data_buffer[2]) < 5) {
    ensure_buffer_capacity(data_buffer,(longlong)data_ptr + (4 - *data_buffer));
    data_ptr = (undefined4 *)data_buffer[1];
  }
  *data_ptr = object_id;
  data_buffer[1] = data_buffer[1] + 4;
  serialize_texture_data(data_buffer,scene_data + 0x8b8);
  data_size = *(longlong *)(scene_data + 0x958) - *(longlong *)(scene_data + 0x950);
  data_size = data_size / 0x26 + (data_size >> 0x3f);
  count_ptr = (int *)data_buffer[1];
  if ((ulonglong)((*data_buffer - (longlong)count_ptr) + data_buffer[2]) < 5) {
    ensure_buffer_capacity(data_buffer,(longlong)count_ptr + (4 - *data_buffer));
    count_ptr = (int *)data_buffer[1];
  }
  *count_ptr = (int)(data_size >> 2) - (int)(data_size >> 0x3f);
  data_buffer[1] = data_buffer[1] + 4;
  array_start = *(longlong *)(scene_data + 0x958) - *(longlong *)(scene_data + 0x950);
  data_size = array_start >> 0x3f;
  loop_counter = uVar12;
  uVar13 = uVar12;
  if (array_start / 0x98 + data_size != data_size) {
    do {
      serialize_texture_data(data_buffer,uVar13 * 0x98 + *(longlong *)(scene_data + 0x950));
      object_index = (int)loop_counter + 1;
      loop_counter = (ulonglong)object_index;
      uVar13 = (longlong)(int)object_index;
    } while ((ulonglong)(longlong)(int)object_index <
             (ulonglong)((*(longlong *)(scene_data + 0x958) - *(longlong *)(scene_data + 0x950)) / 0x98));
  }
  data_size = scene_data + 0x970;
  array_start = 5;
  do {
    serialize_texture_data(data_buffer,data_size);
    data_size = data_size + 0x98;
    array_start = array_start + -1;
  } while (array_start != 0);
  data_size = *(longlong *)(scene_data + 0xc70) - *(longlong *)(scene_data + 0xc68);
  data_size = data_size / 0x26 + (data_size >> 0x3f);
  count_ptr = (int *)data_buffer[1];
  if ((ulonglong)((*data_buffer - (longlong)count_ptr) + data_buffer[2]) < 5) {
    ensure_buffer_capacity(data_buffer,(longlong)count_ptr + (4 - *data_buffer));
    count_ptr = (int *)data_buffer[1];
  }
  *count_ptr = (int)(data_size >> 2) - (int)(data_size >> 0x3f);
  data_buffer[1] = data_buffer[1] + 4;
  array_start = *(longlong *)(scene_data + 0xc70) - *(longlong *)(scene_data + 0xc68);
  data_size = array_start >> 0x3f;
  loop_counter = uVar12;
  uVar13 = uVar12;
  if (array_start / 0x98 + data_size != data_size) {
    do {
      serialize_texture_data(data_buffer,uVar13 * 0x98 + *(longlong *)(scene_data + 0xc68));
      object_index = (int)loop_counter + 1;
      loop_counter = (ulonglong)object_index;
      uVar13 = (longlong)(int)object_index;
    } while ((ulonglong)(longlong)(int)object_index <
             (ulonglong)((*(longlong *)(scene_data + 0xc70) - *(longlong *)(scene_data + 0xc68)) / 0x98));
  }
  data_size = scene_data + 0x1208;
  array_start = 9;
  do {
    serialize_texture_data(data_buffer,data_size);
    data_size = data_size + 0x98;
    array_start = array_start + -1;
  } while (array_start != 0);
  serialize_texture_data(data_buffer,scene_data + 0x1760);
  serialize_texture_data(data_buffer,scene_data + 0x17f8);
  data_size = *(longlong *)(scene_data + 0x1898) - *(longlong *)(scene_data + 0x1890);
  data_size = data_size / 0x26 + (data_size >> 0x3f);
  count_ptr = (int *)data_buffer[1];
  if ((ulonglong)((*data_buffer - (longlong)count_ptr) + data_buffer[2]) < 5) {
    ensure_buffer_capacity(data_buffer,(longlong)count_ptr + (4 - *data_buffer));
    count_ptr = (int *)data_buffer[1];
  }
  *count_ptr = (int)(data_size >> 2) - (int)(data_size >> 0x3f);
  data_buffer[1] = data_buffer[1] + 4;
  array_start = *(longlong *)(scene_data + 0x1898) - *(longlong *)(scene_data + 0x1890);
  data_size = array_start >> 0x3f;
  loop_counter = uVar12;
  uVar13 = uVar12;
  if (array_start / 0x98 + data_size != data_size) {
    do {
      serialize_texture_data(data_buffer,uVar13 * 0x98 + *(longlong *)(scene_data + 0x1890));
      object_index = (int)loop_counter + 1;
      loop_counter = (ulonglong)object_index;
      uVar13 = (longlong)(int)object_index;
    } while ((ulonglong)(longlong)(int)object_index <
             (ulonglong)((*(longlong *)(scene_data + 0x1898) - *(longlong *)(scene_data + 0x1890)) / 0x98)
            );
  }
  serialize_texture_data(data_buffer,scene_data + 0x18b0);
  buffer_ptr = (undefined1 *)data_buffer[1];
  scene_flag = *(undefined1 *)(scene_data + 0x18d1);
  if ((ulonglong)((*data_buffer - (longlong)buffer_ptr) + data_buffer[2]) < 2) {
    ensure_buffer_capacity(data_buffer,buffer_ptr + (1 - *data_buffer));
    buffer_ptr = (undefined1 *)data_buffer[1];
  }
  *buffer_ptr = scene_flag;
  data_buffer[1] = data_buffer[1] + 1;
  data_ptr = (undefined4 *)data_buffer[1];
  if (*(char *)(scene_data + 0x18d1) != '\0') {
    serialize_texture_data(data_buffer,scene_data + 0x18d8);
    serialize_texture_data(data_buffer,scene_data + 0x1970);
    serialize_texture_data(data_buffer,scene_data + 0x1a08);
    serialize_texture_data(data_buffer,scene_data + 0x1aa0);
    serialize_texture_data(data_buffer,scene_data + 0x1b38);
    serialize_texture_data(data_buffer,scene_data + 0x1bd0);
    data_ptr = (undefined4 *)data_buffer[1];
  }
  if ((ulonglong)((*data_buffer - (longlong)data_ptr) + data_buffer[2]) < 5) {
    ensure_buffer_capacity(data_buffer,(longlong)data_ptr + (4 - *data_buffer));
    data_ptr = (undefined4 *)data_buffer[1];
  }
  *data_ptr = 0x10;
  data_buffer[1] = data_buffer[1] + 4;
  scene_data = scene_data + 0xc88;
  do {
    count_ptr = (int *)data_buffer[1];
    if ((ulonglong)((*data_buffer - (longlong)count_ptr) + data_buffer[2]) < 5) {
      ensure_buffer_capacity(data_buffer,(longlong)count_ptr + (4 - *data_buffer));
      count_ptr = (int *)data_buffer[1];
    }
    *count_ptr = (int)uVar12;
    data_buffer[1] = data_buffer[1] + 4;
    serialize_texture_data(data_buffer,scene_data);
    object_index = (int)uVar12 + 1;
    uVar12 = (ulonglong)object_index;
    scene_data = scene_data + 0x58;
  } while ((int)object_index < 0x10);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address


/**
 * 解析渲染对象标识符
 * 从数据流中解析渲染对象的标识符并返回匹配的标志位
 * 
 * @param object_table 对象表指针，包含所有可用的渲染对象
 * @param stream_offset 数据流中的偏移量
 * @param identifier_flags 输出参数，返回解析到的标识符标志
 */
void parse_rendering_object_identifier(longlong *object_table,longlong stream_offset,uint *identifier_flags)

{
  uint *data_pointer;
  byte *string_buffer;
  uint string_length;
  longlong object_offset;
  byte *object_name;
  int name_length;
  ulonglong object_count;
  longlong object_size;
  longlong *current_object;
  undefined1 local_stack_buffer [32];
  undefined8 stack_guard_1;
  undefined *stack_guard_2;
  byte *temp_buffer;
  int temp_int;
  byte comparison_buffer [1032];
  ulonglong stack_guard_3;
  
  stack_guard_1 = 0xfffffffffffffffe;
  stack_guard_3 = MEMORY_PROTECTION_KEY ^ (ulonglong)local_stack_buffer;
  *(longlong *)(stream_offset + 8) = *(longlong *)(stream_offset + 8) + 4;
  *identifier_flags = 0;
  string_length = **(uint **)(stream_offset + 8);
  object_count = (ulonglong)string_length;
  *(uint **)(stream_offset + 8) = *(uint **)(stream_offset + 8) + 1;
  if (string_length != 0) {
    do {
      stack_guard_2 = &RENDERING_STRING_TABLE;
      temp_buffer = comparison_buffer;
      temp_int = 0;
      comparison_buffer[0] = 0;
      string_length = **(uint **)(stream_offset + 8);
      data_pointer = *(uint **)(stream_offset + 8) + 1;
      *(uint **)(stream_offset + 8) = data_pointer;
      object_size = 0;
      current_object = object_table;
      if (string_length != 0) {
        initialize_string_buffer(&stack_guard_2,data_pointer,string_length);
        *(longlong *)(stream_offset + 8) = *(longlong *)(stream_offset + 8) + (ulonglong)string_length;
      }
      do {
        object_offset = -1;
        do {
          object_offset = object_offset + 1;
        } while (*(char *)(*current_object + object_offset) != '\0');
        name_length = (int)object_offset;
        if (temp_int == name_length) {
          if (temp_int != 0) {
            object_name = temp_buffer;
            do {
              string_buffer = object_name + (*current_object - (longlong)temp_buffer);
              name_length = (uint)*object_name - (uint)*string_buffer;
              if (name_length != 0) break;
              object_name = object_name + 1;
            } while (*string_buffer != 0);
          }
LAB_180272cfe:
          if (name_length == 0) {
            *identifier_flags = *identifier_flags | *(uint *)(object_table + object_size * 2 + 1);
            break;
          }
        }
        else if (temp_int == 0) goto LAB_180272cfe;
        object_size = object_size + 1;
        current_object = current_object + 2;
      } while (object_size < 0x15);
      stack_guard_2 = &RENDERING_RESOURCE_BASE_ADDRESS;
      object_count = object_count - 1;
    } while (object_count != 0);
  }
                    // WARNING: Subroutine does not return
  cleanup_stack_protection(stack_guard_3 ^ (ulonglong)local_stack_buffer);
}


/**
 * 序列化渲染着色器数据
 * 将着色器相关的数据序列化到数据缓冲区中
 * 
 * @param shader_table 着色器表指针，包含所有着色器信息
 * @param shader_flags 着色器标志，用于筛选需要序列化的着色器
 * @param data_buffer 数据缓冲区，用于存储序列化结果
 */
void serialize_rendering_shader_data(undefined8 *shader_table,uint shader_flags,longlong *data_buffer)

{
  undefined4 *buffer_ptr;
  longlong buffer_offset;
  longlong buffer_position;
  int shader_count;
  longlong array_start;
  
  buffer_ptr = (undefined4 *)data_buffer[1];
  if ((ulonglong)((*data_buffer - (longlong)buffer_ptr) + data_buffer[2]) < 5) {
    ensure_buffer_capacity(data_buffer,(longlong)buffer_ptr + (4 - *data_buffer));
    buffer_ptr = (undefined4 *)data_buffer[1];
  }
  shader_count = 0;
  *buffer_ptr = 0;
  buffer_position = *data_buffer;
  buffer_offset = data_buffer[1] + 4;
  data_buffer[1] = buffer_offset;
  array_start = 0;
  if (buffer_position != 0) {
    array_start = buffer_offset - buffer_position;
  }
  if ((ulonglong)((buffer_position - buffer_offset) + data_buffer[2]) < 5) {
    ensure_buffer_capacity(data_buffer,(buffer_offset - buffer_position) + 4);
    buffer_offset = data_buffer[1];
  }
  buffer_position = 0x15;
  data_buffer[1] = buffer_offset + 4;
  do {
    if ((*(uint *)(shader_table + 1) & shader_flags) != 0) {
      serialize_shader_descriptor(data_buffer,*shader_table);
      shader_count = shader_count + 1;
    }
    shader_table = shader_table + 2;
    buffer_position = buffer_position + -1;
  } while (buffer_position != 0);
  *(int *)(array_start + *data_buffer) = shader_count;
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address


/**
 * 调整渲染对象数组大小
 * 动态调整渲染对象数组的大小，支持扩容和缩容操作
 * 
 * @param object_array 对象数组指针，包含数组信息和对象数据
 * @param new_size 新的数组大小
 */
void resize_rendering_object_array(longlong *object_array,ulonglong new_size)

{
  undefined *destructor_ptr;
  undefined8 *array_start;
  ulonglong current_size;
  undefined8 *array_end;
  undefined8 *current_object;
  undefined8 *new_object;
  undefined *object_data;
  longlong array_capacity;
  
  array_start = (undefined8 *)object_array[1];
  array_capacity = *object_array;
  current_size = ((longlong)array_start - array_capacity) / 0x98;
  if (new_size <= current_size) {
    new_object = (undefined8 *)(new_size * 0x98 + array_capacity);
    if (new_object != array_start) {
      do {
        (**(code **)*new_object)(new_object,0);
        new_object = new_object + 0x13;
      } while (new_object != array_start);
      array_capacity = *object_array;
    }
    object_array[1] = new_size * 0x98 + array_capacity;
    return;
  }
  new_size = new_size - current_size;
  array_start = (undefined8 *)object_array[1];
  if ((ulonglong)((object_array[2] - (longlong)array_start) / 0x98) < new_size) {
    new_object = (undefined8 *)*object_array;
    array_capacity = ((longlong)array_start - (longlong)new_object) / 0x98;
    current_size = array_capacity * 2;
    if (array_capacity == 0) {
      current_size = 1;
    }
    if (current_size < array_capacity + new_size) {
      current_size = array_capacity + new_size;
    }
    array_end = (undefined8 *)0x0;
    if (current_size != 0) {
      array_end = (undefined8 *)
               allocate_rendering_memory(MEMORY_POOL_HANDLE,current_size * 0x98,(char)object_array[3],MEMORY_ALLOCATOR_FLAGS,
                             MEMORY_PROTECTION_MASK);
      array_start = (undefined8 *)object_array[1];
      new_object = (undefined8 *)*object_array;
    }
    current_object = array_end;
    if (new_object != array_start) {
      array_capacity = (longlong)new_object - (longlong)array_end;
      do {
        *current_object = &RENDERING_RESOURCE_BASE_ADDRESS;
        current_object[1] = 0;
        *(undefined4 *)(current_object + 2) = 0;
        *current_object = &RENDERING_OBJECT_CONSTRUCTOR;
        current_object[1] = current_object + 3;
        *(undefined4 *)(current_object + 2) = 0;
        *(undefined1 *)(current_object + 3) = 0;
        *(undefined4 *)(current_object + 2) = *(undefined4 *)((longlong)current_object + array_capacity + 0x10);
        destructor_ptr = *(undefined **)((longlong)current_object + array_capacity + 8);
        object_data = &DEFAULT_OBJECT_NAME;
        if (destructor_ptr != (undefined *)0x0) {
          object_data = destructor_ptr;
        }
        strcpy_s(current_object[1],0x80,object_data);
        current_object = current_object + 0x13;
      } while ((undefined8 *)((longlong)current_object + array_capacity) != array_start);
    }
    if (new_size != 0) {
      array_start = current_object + 1;
      current_size = new_size;
      do {
        array_start[-1] = &RENDERING_RESOURCE_BASE_ADDRESS;
        *array_start = 0;
        *(undefined4 *)(array_start + 1) = 0;
        array_start[-1] = &RENDERING_OBJECT_CONSTRUCTOR;
        *array_start = array_start + 2;
        *(undefined4 *)(array_start + 1) = 0;
        *(undefined1 *)(array_start + 2) = 0;
        array_start = array_start + 0x13;
        current_size = current_size - 1;
      } while (current_size != 0);
    }
    array_start = (undefined8 *)object_array[1];
    new_object = (undefined8 *)*object_array;
    if (new_object != array_start) {
      do {
        (**(code **)*new_object)(new_object,0);
        new_object = new_object + 0x13;
      } while (new_object != array_start);
      new_object = (undefined8 *)*object_array;
    }
    if (new_object != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      free_rendering_memory(new_object);
    }
    *object_array = (longlong)array_end;
    object_array[1] = (longlong)(current_object + new_size * 0x13);
    object_array[2] = (longlong)(array_end + current_size * 0x13);
  }
  else {
    current_size = new_size;
    if (new_size != 0) {
      do {
        *array_start = &RENDERING_RESOURCE_BASE_ADDRESS;
        array_start[1] = 0;
        *(undefined4 *)(array_start + 2) = 0;
        *array_start = &RENDERING_OBJECT_CONSTRUCTOR;
        array_start[1] = array_start + 3;
        *(undefined4 *)(array_start + 2) = 0;
        *(undefined1 *)(array_start + 3) = 0;
        array_start = array_start + 0x13;
        current_size = current_size - 1;
      } while (current_size != 0);
      array_start = (undefined8 *)object_array[1];
    }
    object_array[1] = (longlong)(array_start + new_size * 0x13);
  }
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address