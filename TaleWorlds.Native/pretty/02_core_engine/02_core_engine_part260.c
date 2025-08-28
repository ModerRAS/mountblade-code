#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part260.c - 核心引擎数据序列化和系统初始化

// 函数: 序列化数据块到缓冲区
// 原函数名: FUN_180228280
void serialize_data_block_to_buffer(int64_t data_context, int64_t *buffer_context)

{
  int32_t temp_val1;
  int64_t start_offset;
  int64_t end_offset;
  int32_t *buffer_ptr;
  int64_t block_size;
  uint64_t loop_counter;
  uint64_t total_size;
  uint block_count;
  uint64_t current_block;
  
  initialize_buffer_context(buffer_context, data_context);
  block_size = *(int64_t *)(data_context + 0x28);
  start_offset = *(int64_t *)(data_context + 0x20);
  buffer_ptr = (int32_t *)buffer_context[1];
  if ((uint64_t)((*buffer_context - (int64_t)buffer_ptr) + buffer_context[2]) < 5) {
    expand_buffer_capacity(buffer_context, (int64_t)buffer_ptr + (4 - *buffer_context));
    buffer_ptr = (int32_t *)buffer_context[1];
  }
  *buffer_ptr = (int)((block_size - start_offset) / 0xe0);
  buffer_context[1] = buffer_context[1] + 4;
  loop_counter = 0;
  block_size = *(int64_t *)(data_context + 0x20);
  end_offset = *(int64_t *)(data_context + 0x28) - block_size;
  start_offset = end_offset >> 0x3f;
  total_size = loop_counter;
  current_block = loop_counter;
  if (end_offset / 0xe0 + start_offset != start_offset) {
    do {
      initialize_buffer_context(buffer_context, block_size + 8 + loop_counter * 0xe0);
      buffer_ptr = (int32_t *)buffer_context[1];
      temp_val1 = *(int32_t *)(total_size + *(int64_t *)(data_context + 0x20));
      if ((uint64_t)((*buffer_context - (int64_t)buffer_ptr) + buffer_context[2]) < 5) {
        expand_buffer_capacity(buffer_context, (int64_t)buffer_ptr + (4 - *buffer_context));
        buffer_ptr = (int32_t *)buffer_context[1];
      }
      *buffer_ptr = temp_val1;
      buffer_context[1] = buffer_context[1] + 4;
      block_size = loop_counter * 0xe0 + *(int64_t *)(data_context + 0x20);
      if ((uint64_t)((*buffer_context - buffer_context[1]) + buffer_context[2]) < 0x41) {
        expand_buffer_capacity(buffer_context, (buffer_context[1] - *buffer_context) + 0x40);
      }
      write_data_to_buffer(buffer_context, block_size + 0xa0);
      write_data_to_buffer(buffer_context, block_size + 0xb0);
      write_data_to_buffer(buffer_context, block_size + 0xc0);
      write_data_to_buffer(buffer_context, block_size + 0xd0);
      block_size = *(int64_t *)(data_context + 0x20);
      block_count = (int)current_block + 1;
      loop_counter = (uint64_t)(int)block_count;
      total_size = total_size + 0xe0;
      current_block = (uint64_t)block_count;
    } while (loop_counter < (uint64_t)((*(int64_t *)(data_context + 0x28) - block_size) / 0xe0));
  }
  return;
}



// 函数: 批量处理数据序列化
// 原函数名: FUN_180228326
void batch_process_data_serialization(void)

{
  int32_t temp_val1;
  int32_t *buffer_ptr;
  int64_t data_size;
  int64_t *buffer_context;
  int64_t data_start;
  int64_t data_end;
  int64_t loop_counter;
  uint64_t data_offset;
  uint item_count;
  
  data_offset = (uint64_t)item_count;
  do {
    initialize_buffer_context();
    buffer_ptr = (int32_t *)buffer_context[1];
    temp_val1 = *(int32_t *)(data_offset + *(int64_t *)(data_start + 0x20));
    if ((uint64_t)((*buffer_context - (int64_t)buffer_ptr) + buffer_context[2]) < 5) {
      expand_buffer_capacity();
      buffer_ptr = (int32_t *)buffer_context[1];
    }
    *buffer_ptr = temp_val1;
    buffer_context[1] = buffer_context[1] + 4;
    if ((uint64_t)((*buffer_context - buffer_context[1]) + buffer_context[2]) < 0x41) {
      expand_buffer_capacity();
    }
    write_data_to_buffer();
    write_data_to_buffer();
    write_data_to_buffer();
    write_data_to_buffer();
    item_count = item_count + 1;
    data_size = calculate_block_size(item_count, 
                   calculate_total_size(*(int64_t *)(data_end + 0x28) - *(int64_t *)(data_end + 0x20)),8);
    data_offset = data_offset + 0xe0;
  } while ((uint64_t)(int64_t)(int)item_count < (uint64_t)((data_size >> 6) - (data_size >> 0x3f)));
  return;
}



// 函数: 空操作函数
// 原函数名: FUN_180228434
void empty_operation_function(void)

{
  return;
}



// 函数: 处理复合数据结构
// 原函数名: FUN_180228450
void process_complex_data_structure(int64_t *structure_context, int64_t data_param)

{
  uint data_size;
  int64_t structure_offset;
  int32_t *data_ptr;
  int64_t item_count;
  int64_t *item_list;
  uint *uint_ptr;
  int64_t item_index;
  
  data_size = **(uint **)(data_param + 8);
  uint_ptr = *(uint **)(data_param + 8) + 1;
  *(uint **)(data_param + 8) = uint_ptr;
  if (data_size != 0) {
    (**(code **)(*structure_context + 0x18))(structure_context, uint_ptr, data_size);
    *(int64_t *)(data_param + 8) = *(int64_t *)(data_param + 8) + (uint64_t)data_size;
    uint_ptr = *(uint **)(data_param + 8);
  }
  item_count = (int64_t)(int)*uint_ptr;
  *(uint **)(data_param + 8) = uint_ptr + 1;
  initialize_structure_array(structure_context + 4, item_count);
  if (0 < item_count) {
    uint_ptr = *(uint **)(data_param + 8);
    item_index = 0;
    do {
      data_size = *uint_ptr;
      uint_ptr = uint_ptr + 1;
      structure_offset = structure_context[4];
      *(uint **)(data_param + 8) = uint_ptr;
      item_list = (int64_t *)(structure_offset + 8 + item_index);
      if (data_size != 0) {
        (**(code **)(*item_list + 0x18))(item_list, uint_ptr, data_size);
        *(int64_t *)(data_param + 8) = *(int64_t *)(data_param + 8) + (uint64_t)data_size;
        uint_ptr = *(uint **)(data_param + 8);
      }
      *(uint *)(item_index + structure_context[4]) = *uint_ptr;
      *(int64_t *)(data_param + 8) = *(int64_t *)(data_param + 8) + 4;
      data_ptr = *(int32_t **)(data_param + 8);
      structure_offset = structure_context[4];
      *(int32_t *)(item_index + 0xa0 + structure_offset) = *data_ptr;
      *(int32_t *)(item_index + 0xa4 + structure_offset) = data_ptr[1];
      *(int32_t *)(item_index + 0xa8 + structure_offset) = data_ptr[2];
      *(int32_t *)(item_index + 0xac + structure_offset) = data_ptr[3];
      *(int32_t *)(item_index + 0xb0 + structure_offset) = data_ptr[4];
      *(int32_t *)(item_index + 0xb4 + structure_offset) = data_ptr[5];
      *(int32_t *)(item_index + 0xb8 + structure_offset) = data_ptr[6];
      *(int32_t *)(item_index + 0xbc + structure_offset) = data_ptr[7];
      *(int32_t *)(item_index + 0xc0 + structure_offset) = data_ptr[8];
      *(int32_t *)(item_index + 0xc4 + structure_offset) = data_ptr[9];
      *(int32_t *)(item_index + 200 + structure_offset) = data_ptr[10];
      *(int32_t *)(item_index + 0xcc + structure_offset) = data_ptr[0xb];
      *(int32_t *)(item_index + 0xd0 + structure_offset) = data_ptr[0xc];
      *(int32_t *)(item_index + 0xd4 + structure_offset) = data_ptr[0xd];
      *(int32_t *)(item_index + 0xd8 + structure_offset) = data_ptr[0xe];
      uint_ptr = data_ptr + 0x10;
      *(int32_t *)(item_index + 0xdc + structure_offset) = data_ptr[0xf];
      item_index = item_index + 0xe0;
      *(uint **)(data_param + 8) = uint_ptr;
      item_count = item_count + -1;
    } while (item_count != 0);
  }
  return;
}



// 函数: 处理数据块序列化
// 原函数名: FUN_1802284b5
void process_data_block_serialization(uint64_t context_param, uint *data_ptr)

{
  uint data_size;
  int64_t base_offset;
  int32_t *buffer_ptr;
  int64_t *item_list;
  int64_t context_a;
  int64_t context_b;
  int64_t item_index;
  
  item_index = 0;
  do {
    data_size = *data_ptr;
    data_ptr = data_ptr + 1;
    base_offset = *(int64_t *)(context_b + 0x20);
    *(uint **)(context_a + 8) = data_ptr;
    item_list = (int64_t *)(base_offset + 8 + item_index);
    if (data_size != 0) {
      (**(code **)(*item_list + 0x18))(item_list, data_ptr, data_size);
      *(int64_t *)(context_a + 8) = *(int64_t *)(context_a + 8) + (uint64_t)data_size;
      data_ptr = *(uint **)(context_a + 8);
    }
    *(uint *)(item_index + *(int64_t *)(context_b + 0x20)) = *data_ptr;
    *(int64_t *)(context_a + 8) = *(int64_t *)(context_a + 8) + 4;
    buffer_ptr = *(int32_t **)(context_a + 8);
    base_offset = *(int64_t *)(context_b + 0x20);
    *(int32_t *)(item_index + 0xa0 + base_offset) = *buffer_ptr;
    *(int32_t *)(item_index + 0xa4 + base_offset) = buffer_ptr[1];
    *(int32_t *)(item_index + 0xa8 + base_offset) = buffer_ptr[2];
    *(int32_t *)(item_index + 0xac + base_offset) = buffer_ptr[3];
    *(int32_t *)(item_index + 0xb0 + base_offset) = buffer_ptr[4];
    *(int32_t *)(item_index + 0xb4 + base_offset) = buffer_ptr[5];
    *(int32_t *)(item_index + 0xb8 + base_offset) = buffer_ptr[6];
    *(int32_t *)(item_index + 0xbc + base_offset) = buffer_ptr[7];
    *(int32_t *)(item_index + 0xc0 + base_offset) = buffer_ptr[8];
    *(int32_t *)(item_index + 0xc4 + base_offset) = buffer_ptr[9];
    *(int32_t *)(item_index + 200 + base_offset) = buffer_ptr[10];
    *(int32_t *)(item_index + 0xcc + base_offset) = buffer_ptr[0xb];
    *(int32_t *)(item_index + 0xd0 + base_offset) = buffer_ptr[0xc];
    *(int32_t *)(item_index + 0xd4 + base_offset) = buffer_ptr[0xd];
    *(int32_t *)(item_index + 0xd8 + base_offset) = buffer_ptr[0xe];
    data_ptr = buffer_ptr + 0x10;
    *(int32_t *)(item_index + 0xdc + base_offset) = buffer_ptr[0xf];
    item_index = item_index + 0xe0;
    *(uint **)(context_a + 8) = data_ptr;
    context_b = context_b + -1;
  } while (context_b != 0);
  return;
}



// 函数: 空操作函数
// 原函数名: FUN_1802285bd
void empty_operation_function_2(void)

{
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 初始化引擎组件
// 原函数名: FUN_1802285e0
void initialize_engine_components(uint64_t param1, int32_t param2, uint64_t param3)

{
  int8_t temp_buffer_118 [32];
  void **resource_ptr_f8;
  uint64_t stack_val_f0;
  int32_t stack_val_e8;
  uint64_t stack_val_e4;
  uint64_t stack_val_dc;
  uint64_t stack_val_d4;
  uint64_t stack_val_cc;
  int8_t stack_val_c4;
  void *resource_ptr_c0;
  int8_t *resource_ptr_b8;
  int32_t stack_val_b0;
  int8_t temp_buffer_a8 [64];
  int32_t stack_val_68;
  int32_t stack_val_64;
  int32_t stack_val_60;
  int32_t stack_val_5c;
  uint64_t stack_val_58;
  uint64_t stack_val_50;
  uint64_t stack_val_48;
  int32_t stack_val_40;
  uint64_t stack_val_38;
  uint64_t stack_val_30;
  uint64_t stack_val_28;
  int32_t stack_val_20;
  uint64_t checksum_val_18;
  
  stack_val_f0 = 0xfffffffffffffffe;
  checksum_val_18 = ENGINE_DATA_CHECKSUM ^ (uint64_t)temp_buffer_118;
  resource_ptr_c0 = &ENGINE_RESOURCE_TABLE;
  resource_ptr_b8 = temp_buffer_a8;
  stack_val_b0 = 0;
  temp_buffer_a8[0] = 0;
  stack_val_58 = 0;
  stack_val_50 = 0;
  stack_val_48 = 0;
  stack_val_40 = 3;
  resource_ptr_f8 = (void **)&stack_val_38;
  stack_val_38 = 0;
  stack_val_30 = 0;
  stack_val_28 = 0;
  stack_val_20 = 3;
  stack_val_e4 = 0;
  stack_val_dc = 0;
  stack_val_d4 = 0;
  stack_val_cc = 0;
  stack_val_e8 = 0;
  stack_val_c4 = 2;
  stack_val_68 = 0;
  stack_val_64 = 0;
  stack_val_60 = 0;
  stack_val_5c = 0;
  configure_engine_settings(&stack_val_e8, param1, param2);
  setup_engine_resources(&stack_val_e8, param3);
  resource_ptr_f8 = (void **)&stack_val_38;
  initialize_engine_subsystems(&stack_val_38);
  resource_ptr_f8 = (void **)&stack_val_58;
  setup_engine_callbacks(&stack_val_58);
  resource_ptr_f8 = &resource_ptr_c0;
  resource_ptr_c0 = &ENGINE_CALLBACK_TABLE;
                    // WARNING: Subroutine does not return
  finalize_engine_initialization(checksum_val_18 ^ (uint64_t)temp_buffer_118);
}



// 函数: 处理复杂数据序列化
// 原函数名: FUN_180228730
void process_complex_data_serialization(int32_t *config_ptr, int64_t *buffer_context)

{
  int32_t config_val1;
  int8_t data_byte;
  int64_t data_offset;
  int32_t config_val4;
  int32_t config_val5;
  char *char_ptr;
  int8_t *byte_ptr;
  int32_t *data_ptr;
  uint64_t lookup_index;
  int item_count;
  uint64_t loop_counter;
  int *int_ptr;
  int64_t remaining_items;
  uint64_t data_size;
  
  data_ptr = (int32_t *)buffer_context[1];
  config_val1 = *config_ptr;
  if ((uint64_t)((buffer_context[2] - (int64_t)data_ptr) + *buffer_context) < 5) {
    expand_buffer_capacity(buffer_context, (int64_t)data_ptr + (4 - *buffer_context));
    data_ptr = (int32_t *)buffer_context[1];
  }
  *data_ptr = config_val1;
  buffer_context[1] = buffer_context[1] + 4;
  write_buffer_data(buffer_context, config_ptr + 1);
  write_buffer_data(buffer_context, config_ptr + 5);
  char_ptr = (char *)0x180bf7cf8;
  data_size = 0;
  loop_counter = data_size;
  do {
    if (*char_ptr == *(char *)(config_ptr + 9)) {
      write_buffer_reference(buffer_context, *(uint64_t *)((int64_t)(int)loop_counter * 0x10 + 0x180bf7cf0));
      break;
    }
    loop_counter = (uint64_t)((int)loop_counter + 1);
    char_ptr = char_ptr + 0x10;
  } while ((int64_t)char_ptr < 0x180bf7d28);
  initialize_buffer_context(buffer_context, config_ptr + 10);
  data_ptr = (int32_t *)buffer_context[1];
  if ((uint64_t)((buffer_context[2] - (int64_t)data_ptr) + *buffer_context) < 0x11) {
    expand_buffer_capacity(buffer_context, (int64_t)data_ptr + (0x10 - *buffer_context));
    data_ptr = (int32_t *)buffer_context[1];
  }
  config_val1 = config_ptr[0x21];
  config_val4 = config_ptr[0x22];
  config_val5 = config_ptr[0x23];
  *data_ptr = config_ptr[0x20];
  data_ptr[1] = config_val1;
  data_ptr[2] = config_val4;
  data_ptr[3] = config_val5;
  int_ptr = (int *)(buffer_context[1] + 0x10);
  buffer_context[1] = (int64_t)int_ptr;
  remaining_items = (*(int64_t *)(config_ptr + 0x26) - *(int64_t *)(config_ptr + 0x24)) +
           calculate_data_size(calculate_data_size(*(int64_t *)(config_ptr + 0x26) - *(int64_t *)(config_ptr + 0x24)),8);
  item_count = (int)((uint64_t)remaining_items >> 8) - (int)(remaining_items >> 0x3f);
  if ((uint64_t)((buffer_context[2] - (int64_t)int_ptr) + *buffer_context) < 5) {
    expand_buffer_capacity(buffer_context, (int64_t)int_ptr + (4 - *buffer_context));
    int_ptr = (int *)buffer_context[1];
  }
  *int_ptr = item_count;
  buffer_context[1] = buffer_context[1] + 4;
  data_ptr = (int32_t *)buffer_context[1];
  remaining_items = (int64_t)item_count;
  loop_counter = data_size;
  if (0 < item_count) {
    do {
      data_offset = *(int64_t *)(config_ptr + 0x24);
      initialize_buffer_context(buffer_context, data_offset + 8 + loop_counter);
      byte_ptr = (int8_t *)buffer_context[1];
      data_byte = *(int8_t *)(loop_counter + data_offset);
      if ((uint64_t)((buffer_context[2] - (int64_t)byte_ptr) + *buffer_context) < 2) {
        expand_buffer_capacity(buffer_context, byte_ptr + (1 - *buffer_context));
        byte_ptr = (int8_t *)buffer_context[1];
      }
      *byte_ptr = data_byte;
      buffer_context[1] = buffer_context[1] + 1;
      initialize_buffer_context(buffer_context, data_offset + 0xa0 + loop_counter);
      char_ptr = (char *)0x180bf7d28;
      lookup_index = data_size;
      do {
        if (*char_ptr == *(char *)(loop_counter + 0xf8 + data_offset)) {
          write_buffer_reference(buffer_context, *(uint64_t *)(lookup_index * 0x10 + 0x180bf7d20));
          break;
        }
        lookup_index = lookup_index + 1;
        char_ptr = char_ptr + 0x10;
      } while ((int64_t)char_ptr < 0x180bf7e28);
      data_ptr = (int32_t *)buffer_context[1];
      config_val1 = *(int32_t *)(loop_counter + 0xfc + data_offset);
      if ((uint64_t)((buffer_context[2] - (int64_t)data_ptr) + *buffer_context) < 5) {
        expand_buffer_capacity(buffer_context, (int64_t)data_ptr + (4 - *buffer_context));
        data_ptr = (int32_t *)buffer_context[1];
      }
      *data_ptr = config_val1;
      buffer_context[1] = buffer_context[1] + 4;
      data_ptr = (int32_t *)buffer_context[1];
      if ((uint64_t)((buffer_context[2] - (int64_t)data_ptr) + *buffer_context) < 0x11) {
        expand_buffer_capacity(buffer_context, (int64_t)data_ptr + (0x10 - *buffer_context));
        data_ptr = (int32_t *)buffer_context[1];
      }
      *data_ptr = *(int32_t *)(loop_counter + 0x104 + data_offset);
      buffer_context[1] = buffer_context[1] + 4;
      *(int32_t *)buffer_context[1] = *(int32_t *)(loop_counter + 0x108 + data_offset);
      buffer_context[1] = buffer_context[1] + 4;
      *(int32_t *)buffer_context[1] = *(int32_t *)(loop_counter + 0x10c + data_offset);
      buffer_context[1] = buffer_context[1] + 4;
      *(int32_t *)buffer_context[1] = 0x3f800000;
      buffer_context[1] = buffer_context[1] + 4;
      data_ptr = (int32_t *)buffer_context[1];
      if ((uint64_t)((buffer_context[2] - (int64_t)data_ptr) + *buffer_context) < 0x11) {
        expand_buffer_capacity(buffer_context, (int64_t)data_ptr + (0x10 - *buffer_context));
        data_ptr = (int32_t *)buffer_context[1];
      }
      *data_ptr = *(int32_t *)(loop_counter + 0x114 + data_offset);
      buffer_context[1] = buffer_context[1] + 4;
      *(int32_t *)buffer_context[1] = *(int32_t *)(loop_counter + 0x118 + data_offset);
      buffer_context[1] = buffer_context[1] + 4;
      *(int32_t *)buffer_context[1] = *(int32_t *)(loop_counter + 0x11c + data_offset);
      buffer_context[1] = buffer_context[1] + 4;
      *(int32_t *)buffer_context[1] = 0x3f800000;
      buffer_context[1] = buffer_context[1] + 4;
      data_ptr = (int32_t *)buffer_context[1];
      config_val1 = *(int32_t *)(loop_counter + 0x124 + data_offset);
      if ((uint64_t)((buffer_context[2] - (int64_t)data_ptr) + *buffer_context) < 5) {
        expand_buffer_capacity(buffer_context, (int64_t)data_ptr + (4 - *buffer_context));
        data_ptr = (int32_t *)buffer_context[1];
      }
      *data_ptr = config_val1;
      buffer_context[1] = buffer_context[1] + 4;
      data_ptr = (int32_t *)buffer_context[1];
      if ((uint64_t)((buffer_context[2] - (int64_t)data_ptr) + *buffer_context) < 0x11) {
        expand_buffer_capacity(buffer_context, (int64_t)data_ptr + (0x10 - *buffer_context));
        data_ptr = (int32_t *)buffer_context[1];
      }
      *data_ptr = *(int32_t *)(loop_counter + 0x128 + data_offset);
      buffer_context[1] = buffer_context[1] + 4;
      *(int32_t *)buffer_context[1] = *(int32_t *)(loop_counter + 300 + data_offset);
      buffer_context[1] = buffer_context[1] + 4;
      *(int32_t *)buffer_context[1] = *(int32_t *)(loop_counter + 0x130 + data_offset);
      buffer_context[1] = buffer_context[1] + 4;
      *(int32_t *)buffer_context[1] = 0x3f800000;
      buffer_context[1] = buffer_context[1] + 4;
      data_ptr = (int32_t *)buffer_context[1];
      if ((uint64_t)((buffer_context[2] - (int64_t)data_ptr) + *buffer_context) < 0x11) {
        expand_buffer_capacity(buffer_context, (int64_t)data_ptr + (0x10 - *buffer_context));
        data_ptr = (int32_t *)buffer_context[1];
      }
      *data_ptr = *(int32_t *)(loop_counter + 0x138 + data_offset);
      buffer_context[1] = buffer_context[1] + 4;
      *(int32_t *)buffer_context[1] = *(int32_t *)(loop_counter + 0x13c + data_offset);
      buffer_context[1] = buffer_context[1] + 4;
      *(int32_t *)buffer_context[1] = *(int32_t *)(loop_counter + 0x140 + data_offset);
      buffer_context[1] = buffer_context[1] + 4;
      *(int32_t *)buffer_context[1] = 0x3f800000;
      buffer_context[1] = buffer_context[1] + 4;
      data_ptr = (int32_t *)buffer_context[1];
      config_val1 = *(int32_t *)(loop_counter + 0x148 + data_offset);
      if ((uint64_t)((buffer_context[2] - (int64_t)data_ptr) + *buffer_context) < 5) {
        expand_buffer_capacity(buffer_context, (int64_t)data_ptr + (4 - *buffer_context));
        data_ptr = (int32_t *)buffer_context[1];
      }
      *data_ptr = config_val1;
      buffer_context[1] = buffer_context[1] + 4;
      data_ptr = (int32_t *)buffer_context[1];
      config_val1 = *(int32_t *)(loop_counter + 0x100 + data_offset);
      if ((uint64_t)((buffer_context[2] - (int64_t)data_ptr) + *buffer_context) < 5) {
        expand_buffer_capacity(buffer_context, (int64_t)data_ptr + (4 - *buffer_context));
        data_ptr = (int32_t *)buffer_context[1];
      }
      *data_ptr = config_val1;
      data_ptr = (int32_t *)(buffer_context[1] + 4);
      buffer_context[1] = (int64_t)data_ptr;
      remaining_items = remaining_items + -1;
      loop_counter = loop_counter + 0x150;
    } while (remaining_items != 0);
  }
  if ((uint64_t)((buffer_context[2] - (int64_t)data_ptr) + *buffer_context) < 5) {
    expand_buffer_capacity(buffer_context, (int64_t)data_ptr + (4 - *buffer_context));
    data_ptr = (int32_t *)buffer_context[1];
  }
  *data_ptr = 0;
  int_ptr = (int *)(buffer_context[1] + 4);
  buffer_context[1] = (int64_t)int_ptr;
  remaining_items = (*(int64_t *)(config_ptr + 0x2e) - *(int64_t *)(config_ptr + 0x2c)) / 6 +
           (*(int64_t *)(config_ptr + 0x2e) - *(int64_t *)(config_ptr + 0x2c) >> 0x3f);
  loop_counter = (remaining_items >> 4) - (remaining_items >> 0x3f);
  if ((uint64_t)((buffer_context[2] - (int64_t)int_ptr) + *buffer_context) < 5) {
    expand_buffer_capacity(buffer_context, (int64_t)int_ptr + (4 - *buffer_context));
    int_ptr = (int *)buffer_context[1];
  }
  item_count = (int)loop_counter;
  *int_ptr = item_count;
  buffer_context[1] = buffer_context[1] + 4;
  if (0 < item_count) {
    loop_counter = loop_counter & 0xffffffff;
    do {
      process_data_item(*(int64_t *)(config_ptr + 0x2c) + data_size, buffer_context);
      data_size = data_size + 0x60;
      loop_counter = loop_counter - 1;
    } while (loop_counter != 0);
  }
  return;
}



// 函数: 处理复杂数据序列化（变体）
// 原函数名: FUN_18022873e
void process_complex_data_serialization_variant(int32_t *config_ptr, int64_t buffer_param)

{
  int32_t config_val1;
  int8_t data_byte;
  int64_t data_offset;
  int32_t config_val4;
  int32_t config_val5;
  char *char_ptr;
  int8_t *byte_ptr;
  int32_t *data_ptr;
  uint64_t lookup_index;
  int64_t *buffer_context;
  int item_count;
  uint64_t loop_counter;
  int *int_ptr;
  int64_t remaining_items;
  uint64_t data_size;
  int32_t temp_val;
  int32_t config_val15;
  
  data_ptr = *(int32_t **)(buffer_param + 8);
  config_val15 = *config_ptr;
  if ((uint64_t)((buffer_context[2] - (int64_t)data_ptr) + *buffer_context) < 5) {
    temp_val = expand_buffer_capacity(temp_val, (int64_t)data_ptr + (4 - *buffer_context));
    data_ptr = (int32_t *)buffer_context[1];
  }
  *data_ptr = config_val15;
  buffer_context[1] = buffer_context[1] + 4;
  config_val15 = write_buffer_data(temp_val, config_ptr + 1);
  config_val15 = write_buffer_data(config_val15, config_ptr + 5);
  char_ptr = (char *)0x180bf7cf8;
  data_size = 0;
  loop_counter = data_size;
  do {
    if (*char_ptr == *(char *)(config_ptr + 9)) {
      config_val15 = write_buffer_reference(config_val15, *(uint64_t *)((int64_t)(int)loop_counter * 0x10 + 0x180bf7cf0));
      break;
    }
    loop_counter = (uint64_t)((int)loop_counter + 1);
    char_ptr = char_ptr + 0x10;
  } while ((int64_t)char_ptr < 0x180bf7d28);
  config_val15 = initialize_buffer_context(config_val15, config_ptr + 10);
  data_ptr = (int32_t *)buffer_context[1];
  if ((uint64_t)((buffer_context[2] - (int64_t)data_ptr) + *buffer_context) < 0x11) {
    expand_buffer_capacity(config_val15, (int64_t)data_ptr + (0x10 - *buffer_context));
    data_ptr = (int32_t *)buffer_context[1];
  }
  config_val15 = config_ptr[0x20];
  config_val1 = config_ptr[0x21];
  config_val4 = config_ptr[0x22];
  config_val5 = config_ptr[0x23];
  *data_ptr = config_val15;
  data_ptr[1] = config_val1;
  data_ptr[2] = config_val4;
  data_ptr[3] = config_val5;
  int_ptr = (int *)(buffer_context[1] + 0x10);
  buffer_context[1] = (int64_t)int_ptr;
  remaining_items = (*(int64_t *)(config_ptr + 0x26) - *(int64_t *)(config_ptr + 0x24)) +
           calculate_data_size(calculate_data_size(*(int64_t *)(config_ptr + 0x26) - *(int64_t *)(config_ptr + 0x24)),8);
  item_count = (int)((uint64_t)remaining_items >> 8) - (int)(remaining_items >> 0x3f);
  if ((uint64_t)((buffer_context[2] - (int64_t)int_ptr) + *buffer_context) < 5) {
    config_val15 = expand_buffer_capacity(config_val15, (int64_t)int_ptr + (4 - *buffer_context));
    int_ptr = (int *)buffer_context[1];
  }
  *int_ptr = item_count;
  buffer_context[1] = buffer_context[1] + 4;
  data_ptr = (int32_t *)buffer_context[1];
  remaining_items = (int64_t)item_count;
  loop_counter = data_size;
  if (0 < item_count) {
    do {
      data_offset = *(int64_t *)(config_ptr + 0x24);
      config_val15 = initialize_buffer_context(config_val15, data_offset + 8 + loop_counter);
      byte_ptr = (int8_t *)buffer_context[1];
      data_byte = *(int8_t *)(loop_counter + data_offset);
      if ((uint64_t)((buffer_context[2] - (int64_t)byte_ptr) + *buffer_context) < 2) {
        config_val15 = expand_buffer_capacity(config_val15, byte_ptr + (1 - *buffer_context));
        byte_ptr = (int8_t *)buffer_context[1];
      }
      *byte_ptr = data_byte;
      buffer_context[1] = buffer_context[1] + 1;
      config_val15 = initialize_buffer_context(config_val15, data_offset + 0xa0 + loop_counter);
      char_ptr = (char *)0x180bf7d28;
      lookup_index = data_size;
      do {
        if (*char_ptr == *(char *)(loop_counter + 0xf8 + data_offset)) {
          config_val15 = write_buffer_reference(config_val15, *(uint64_t *)(lookup_index * 0x10 + 0x180bf7d20));
          break;
        }
        lookup_index = lookup_index + 1;
        char_ptr = char_ptr + 0x10;
      } while ((int64_t)char_ptr < 0x180bf7e28);
      data_ptr = (int32_t *)buffer_context[1];
      config_val1 = *(int32_t *)(loop_counter + 0xfc + data_offset);
      if ((uint64_t)((buffer_context[2] - (int64_t)data_ptr) + *buffer_context) < 5) {
        config_val15 = expand_buffer_capacity(config_val15, (int64_t)data_ptr + (4 - *buffer_context));
        data_ptr = (int32_t *)buffer_context[1];
      }
      *data_ptr = config_val1;
      buffer_context[1] = buffer_context[1] + 4;
      data_ptr = (int32_t *)buffer_context[1];
      if ((uint64_t)((buffer_context[2] - (int64_t)data_ptr) + *buffer_context) < 0x11) {
        config_val15 = expand_buffer_capacity(config_val15, (int64_t)data_ptr + (0x10 - *buffer_context));
        data_ptr = (int32_t *)buffer_context[1];
      }
      *data_ptr = *(int32_t *)(loop_counter + 0x104 + data_offset);
      buffer_context[1] = buffer_context[1] + 4;
      *(int32_t *)buffer_context[1] = *(int32_t *)(loop_counter + 0x108 + data_offset);
      buffer_context[1] = buffer_context[1] + 4;
      *(int32_t *)buffer_context[1] = *(int32_t *)(loop_counter + 0x10c + data_offset);
      buffer_context[1] = buffer_context[1] + 4;
      *(int32_t *)buffer_context[1] = 0x3f800000;
      buffer_context[1] = buffer_context[1] + 4;
      data_ptr = (int32_t *)buffer_context[1];
      if ((uint64_t)((buffer_context[2] - (int64_t)data_ptr) + *buffer_context) < 0x11) {
        config_val15 = expand_buffer_capacity(config_val15, (int64_t)data_ptr + (0x10 - *buffer_context));
        data_ptr = (int32_t *)buffer_context[1];
      }
      *data_ptr = *(int32_t *)(loop_counter + 0x114 + data_offset);
      buffer_context[1] = buffer_context[1] + 4;
      *(int32_t *)buffer_context[1] = *(int32_t *)(loop_counter + 0x118 + data_offset);
      buffer_context[1] = buffer_context[1] + 4;
      *(int32_t *)buffer_context[1] = *(int32_t *)(loop_counter + 0x11c + data_offset);
      buffer_context[1] = buffer_context[1] + 4;
      *(int32_t *)buffer_context[1] = 0x3f800000;
      buffer_context[1] = buffer_context[1] + 4;
      data_ptr = (int32_t *)buffer_context[1];
      config_val1 = *(int32_t *)(loop_counter + 0x124 + data_offset);
      if ((uint64_t)((buffer_context[2] - (int64_t)data_ptr) + *buffer_context) < 5) {
        config_val15 = expand_buffer_capacity(config_val15, (int64_t)data_ptr + (4 - *buffer_context));
        data_ptr = (int32_t *)buffer_context[1];
      }
      *data_ptr = config_val1;
      buffer_context[1] = buffer_context[1] + 4;
      data_ptr = (int32_t *)buffer_context[1];
      if ((uint64_t)((buffer_context[2] - (int64_t)data_ptr) + *buffer_context) < 0x11) {
        config_val15 = expand_buffer_capacity(config_val15, (int64_t)data_ptr + (0x10 - *buffer_context));
        data_ptr = (int32_t *)buffer_context[1];
      }
      *data_ptr = *(int32_t *)(loop_counter + 0x128 + data_offset);
      buffer_context[1] = buffer_context[1] + 4;
      *(int32_t *)buffer_context[1] = *(int32_t *)(loop_counter + 300 + data_offset);
      buffer_context[1] = buffer_context[1] + 4;
      *(int32_t *)buffer_context[1] = *(int32_t *)(loop_counter + 0x130 + data_offset);
      buffer_context[1] = buffer_context[1] + 4;
      *(int32_t *)buffer_context[1] = 0x3f800000;
      buffer_context[1] = buffer_context[1] + 4;
      data_ptr = (int32_t *)buffer_context[1];
      if ((uint64_t)((buffer_context[2] - (int64_t)data_ptr) + *buffer_context) < 0x11) {
        config_val15 = expand_buffer_capacity(config_val15, (int64_t)data_ptr + (0x10 - *buffer_context));
        data_ptr = (int32_t *)buffer_context[1];
      }
      *data_ptr = *(int32_t *)(loop_counter + 0x138 + data_offset);
      buffer_context[1] = buffer_context[1] + 4;
      *(int32_t *)buffer_context[1] = *(int32_t *)(loop_counter + 0x13c + data_offset);
      buffer_context[1] = buffer_context[1] + 4;
      *(int32_t *)buffer_context[1] = *(int32_t *)(loop_counter + 0x140 + data_offset);
      buffer_context[1] = buffer_context[1] + 4;
      *(int32_t *)buffer_context[1] = 0x3f800000;
      buffer_context[1] = buffer_context[1] + 4;
      data_ptr = (int32_t *)buffer_context[1];
      config_val1 = *(int32_t *)(loop_counter + 0x148 + data_offset);
      if ((uint64_t)((buffer_context[2] - (int64_t)data_ptr) + *buffer_context) < 5) {
        config_val15 = expand_buffer_capacity(config_val15, (int64_t)data_ptr + (4 - *buffer_context));
        data_ptr = (int32_t *)buffer_context[1];
      }
      *data_ptr = config_val1;
      buffer_context[1] = buffer_context[1] + 4;
      data_ptr = (int32_t *)buffer_context[1];
      config_val1 = *(int32_t *)(loop_counter + 0x100 + data_offset);
      if ((uint64_t)((buffer_context[2] - (int64_t)data_ptr) + *buffer_context) < 5) {
        config_val15 = expand_buffer_capacity(config_val15, (int64_t)data_ptr + (4 - *buffer_context));
        data_ptr = (int32_t *)buffer_context[1];
      }
      *data_ptr = config_val1;
      data_ptr = (int32_t *)(buffer_context[1] + 4);
      buffer_context[1] = (int64_t)data_ptr;
      remaining_items = remaining_items + -1;
      loop_counter = loop_counter + 0x150;
    } while (remaining_items != 0);
  }
  if ((uint64_t)((buffer_context[2] - (int64_t)data_ptr) + *buffer_context) < 5) {
    config_val15 = expand_buffer_capacity(config_val15, (int64_t)data_ptr + (4 - *buffer_context));
    data_ptr = (int32_t *)buffer_context[1];
  }
  *data_ptr = 0;
  int_ptr = (int *)(buffer_context[1] + 4);
  buffer_context[1] = (int64_t)int_ptr;
  remaining_items = (*(int64_t *)(config_ptr + 0x2e) - *(int64_t *)(config_ptr + 0x2c)) / 6 +
           (*(int64_t *)(config_ptr + 0x2e) - *(int64_t *)(config_ptr + 0x2c) >> 0x3f);
  loop_counter = (remaining_items >> 4) - (remaining_items >> 0x3f);
  if ((uint64_t)((buffer_context[2] - (int64_t)int_ptr) + *buffer_context) < 5) {
    expand_buffer_capacity(config_val15, (int64_t)int_ptr + (4 - *buffer_context));
    int_ptr = (int *)buffer_context[1];
  }
  item_count = (int)loop_counter;
  *int_ptr = item_count;
  buffer_context[1] = buffer_context[1] + 4;
  if (0 < item_count) {
    loop_counter = loop_counter & 0xffffffff;
    do {
      process_data_item(*(int64_t *)(config_ptr + 0x2c) + data_size);
      data_size = data_size + 0x60;
      loop_counter = loop_counter - 1;
    } while (loop_counter != 0);
  }
  return;
}


/* 
 * 简化实现说明：
 * 原始实现包含复杂的原始代码，包括多个数据序列化和处理函数。
 * 简化实现使用了更有意义的变量名和函数名，保留了核心功能结构。
 * 
 * 原始实现中的关键部分：
 * - FUN_180228280: 数据块序列化到缓冲区
 * - FUN_180228326: 批量数据序列化处理
 * - FUN_180228434: 空操作函数
 * - FUN_180228450: 复合数据结构处理
 * - FUN_1802284b5: 数据块序列化处理
 * - FUN_1802285bd: 空操作函数
 * - FUN_1802285e0: 引擎组件初始化
 * - FUN_180228730: 复杂数据序列化处理
 * - FUN_18022873e: 复杂数据序列化处理变体
 * 
 * 简化实现改进：
 * - 使用描述性变量名替换DATA_和SYSTEM_前缀
 * - 添加了中文注释说明功能
 * - 保持了原有的代码结构和逻辑流程
 * - 将复杂的原始代码转换为更易读的形式
 */