#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part237.c - 核心引擎模块第237部分
// 本文件包含13个函数，主要处理内存管理、数据结构和系统资源管理

// 函数: void initialize_entity_manager(undefined8 context_id, longlong *entity_data, longlong initialization_flags)
// 功能: 初始化实体管理器，分配内存并设置初始状态
// 参数:
//   context_id: 上下文标识符
//   entity_data: 实体数据指针
//   initialization_flags: 初始化标志
void initialize_entity_manager(undefined8 context_id, longlong *entity_data, longlong initialization_flags)
{
  int *manager_ptr;
  char entity_type;
  int entity_size;
  int entity_capacity;
  longlong entity_offset;
  undefined8 resource_handle;
  longlong base_address;
  int *memory_block;
  undefined8 *resource_ptr;
  ulonglong checksum;
  undefined *temp_ptr;
  int allocation_result;
  undefined1 temp_buffer[32];
  int stack_var1;
  undefined1 stack_flag;
  byte stack_byte1;
  byte stack_byte2;
  undefined8 stack_var2;
  undefined8 stack_var3;
  longlong *stack_ptr1;
  int *stack_ptr2;
  int *stack_ptr3;
  undefined1 stack_buffer[16];
  longlong *stack_ptr4;
  undefined *stack_ptr5;
  undefined1 *stack_ptr6;
  undefined4 stack_var4;
  undefined1 stack_buffer2[136];
  ulonglong stack_checksum;
  
  base_address = GLOBAL_ENGINE_BASE_ADDRESS;
  stack_var3 = 0xfffffffffffffffe;
  stack_checksum = GLOBAL_CHECKSUM_VALUE ^ (ulonglong)temp_buffer;
  entity_offset = *entity_data;
  entity_size = *(int *)(entity_offset + 0x14);
  stack_byte2 = entity_size == 4;
  entity_type = *(char *)(entity_offset + 0x18);
  entity_capacity = *(int *)(entity_offset + 0x10);
  stack_ptr1 = entity_data;
  memory_block = (int *)allocate_memory(GLOBAL_MEMORY_POOL, 0x28, 8, 0x20);
  manager_ptr = memory_block + 2;
  manager_ptr[0] = -1;
  manager_ptr[1] = -1;
  memory_block[4] = -1;
  memory_block[5] = 0x10;
  memory_block[6] = 0;
  memory_block[7] = 0;
  *memory_block = -1;
  *(byte *)(memory_block + 1) = *(byte *)(memory_block + 1) & 0xfe;
  *(undefined1 *)(memory_block + 8) = 0;
  stack_byte1 = *(byte *)(*entity_data + 0x28) & 1;
  stack_flag = 1;
  stack_var1 = entity_capacity;
  stack_ptr2 = memory_block;
  stack_ptr3 = manager_ptr;
  resource_ptr = (undefined8 *)create_resource_handle(base_address, stack_buffer, (entity_size == 4) + '\x0e', entity_type);
  *(undefined8 *)manager_ptr = *resource_ptr;
  memory_block[4] = *(int *)(resource_ptr + 1);
  memory_block[5] = *(int *)((longlong)resource_ptr + 0xc);
  resource_handle = resource_ptr[2];
  resource_ptr[2] = 0;
  stack_var2 = *(longlong **)(memory_block + 6);
  *(undefined8 *)(memory_block + 6) = resource_handle;
  if (stack_var2 != (longlong *)0x0) {
    (**(code **)(*stack_var2 + 0x38))();
  }
  if (stack_ptr4 != (longlong *)0x0) {
    (**(code **)(*stack_ptr4 + 0x38))();
  }
  *memory_block = entity_capacity;
  *(byte *)(memory_block + 1) = *(byte *)(memory_block + 1) & 0xfe;
  *(byte *)(memory_block + 1) = *(byte *)(memory_block + 1) | stack_byte2;
  *(char *)(memory_block + 8) = entity_type;
  allocation_result = 2;
  if (entity_size == 4) {
    allocation_result = 4;
  }
  entity_offset = *(longlong *)(*entity_data + 0x20);
  if (entity_offset != 0) {
    if (entity_type == '\x01') {
      register_resource_global(GLOBAL_RESOURCE_MANAGER, *(undefined8 *)(memory_block + 6), entity_offset);
      stack_ptr5 = &GLOBAL_CONSTANT_PTR;
      stack_ptr6 = stack_buffer2;
      stack_buffer2[0] = 0;
      stack_var4 = *(undefined4 *)(initialization_flags + 0x10);
      temp_ptr = &GLOBAL_STRING_CONSTANT;
      if (*(undefined **)(initialization_flags + 8) != (undefined *)0x0) {
        temp_ptr = *(undefined **)(initialization_flags + 8);
      }
      strcpy_s(stack_buffer2, 0x80, temp_ptr);
      stack_ptr5 = &GLOBAL_STRING_PTR2;
      goto resource_cleanup;
    }
    stack_var1 = allocation_result * entity_capacity;
    stack_flag = 1;
    allocate_resource_memory(GLOBAL_RESOURCE_MANAGER,
                           *(undefined8 *)
                           ((*(longlong)(((longlong)memory_block[5] + 0x25) * 0x20 + base_address) + 8 +
                           (longlong)memory_block[4] * 0x18)), *manager_ptr * allocation_result, entity_offset);
  }
  if (entity_type == '\0') {
    checksum = (ulonglong)memory_block % (ulonglong)*(uint *)(base_address + 0x40);
    for (resource_ptr = *(undefined8 **)(*(longlong *)(base_address + 0x38) + checksum * 8);
        resource_ptr != (undefined8 *)0x0; resource_ptr = (undefined8 *)resource_ptr[1]) {
      if (memory_block == (int *)*resource_ptr) goto resource_cleanup;
    }
    resource_ptr = (undefined8 *)allocate_memory_block(GLOBAL_MEMORY_POOL, 0x10, *(undefined1 *)(base_address + 0x5c));
    *resource_ptr = memory_block;
    resource_ptr[1] = 0;
    stack_var1 = 1;
    update_resource_hash(base_address + 0x50, &stack_var2, *(undefined4 *)(base_address + 0x40),
                         *(undefined4 *)(base_address + 0x48));
    if ((char)stack_var2 != '\0') {
      checksum = (ulonglong)memory_block % (ulonglong)stack_var2._4_4_;
      update_hash_table(base_address + 0x30, stack_var2._4_4_);
    }
    resource_ptr[1] = *(undefined8 *)(*(longlong *)(base_address + 0x38) + checksum * 8);
    *(undefined8 **)(*(longlong *)(base_address + 0x38) + checksum * 8) = resource_ptr;
    *(longlong *)(base_address + 0x48) = *(longlong *)(base_address + 0x48) + 1;
  }
resource_cleanup:
  if ((longlong *)*entity_data != (longlong *)0x0) {
    (**(code **)(*(longlong *)*entity_data + 0x38))();
  }
  // 清理资源
  cleanup_resource(stack_checksum ^ (ulonglong)temp_buffer);
}

// 函数: void cleanup_entity_manager(undefined8 context_id, ulonglong entity_handle, longlong cleanup_flags, undefined8 cleanup_param)
// 功能: 清理实体管理器，释放资源并清理内存
void cleanup_entity_manager(undefined8 context_id, ulonglong entity_handle, longlong cleanup_flags, undefined8 cleanup_param)
{
  ulonglong *hash_entry_ptr;
  ulonglong *current_ptr;
  longlong base_address;
  ulonglong *prev_ptr;
  ulonglong *next_ptr;
  
  base_address = GLOBAL_ENGINE_BASE_ADDRESS;
  if ((entity_handle != 0) && (*(char *)(entity_handle + 0x20) == '\0')) {
    hash_entry_ptr = (ulonglong *)
                     (*(longlong *)(GLOBAL_ENGINE_BASE_ADDRESS + 0x38) +
                     (entity_handle % (ulonglong)*(uint *)(GLOBAL_ENGINE_BASE_ADDRESS + 0x40)) * 8);
    current_ptr = (ulonglong *)*hash_entry_ptr;
    while ((current_ptr != (ulonglong *)0x0 && (entity_handle != *current_ptr))) {
      hash_entry_ptr = current_ptr + 1;
      current_ptr = (ulonglong *)*hash_entry_ptr;
    }
    next_ptr = (ulonglong *)0x0;
    cleanup_flags = base_address;
    if (current_ptr != (ulonglong *)0x0) {
      do {
        prev_ptr = current_ptr;
        if (entity_handle != *prev_ptr) break;
        *hash_entry_ptr = prev_ptr[1];
        prev_ptr[1] = (ulonglong)next_ptr;
        *(longlong *)(base_address + 0x48) = *(longlong )(base_address + 0x48) + -1;
        current_ptr = (ulonglong *)*hash_entry_ptr;
        next_ptr = prev_ptr;
      } while ((ulonglong *)*hash_entry_ptr != (ulonglong *)0x0);
      if (next_ptr != (ulonglong *)0x0) {
        // 释放内存
        free_memory(next_ptr);
      }
    }
  }
  if (entity_handle != 0) {
    release_resource_memory(GLOBAL_ENGINE_BASE_ADDRESS, entity_handle + 8, cleanup_flags, cleanup_param, 0xfffffffffffffffe);
    if (*(longlong **)(entity_handle + 0x18) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(entity_handle + 0x18) + 0x38))();
    }
    // 释放实体内存
    free_memory(entity_handle);
  }
  return;
}

// 函数: void process_entity_batch(undefined8 context_id, longlong entity_base, char *entity_flags, longlong batch_size,
// 功能: 批量处理实体，根据标志位进行不同的操作
void process_entity_batch(undefined8 context_id, longlong entity_base, char *entity_flags, longlong batch_size,
                         undefined8 process_param, longlong output_buffer)
{
  longlong system_offset;
  int entity_count;
  longlong *temp_ptr;
  longlong data_offset;
  longlong entity_type_offset;
  longlong flag_offset;
  int *flag_ptr;
  undefined8 *resource_ptr;
  undefined1 temp_buffer[32];
  undefined4 temp_var1;
  undefined8 *temp_ptr2;
  undefined4 temp_var2;
  longlong *stack_ptr1;
  longlong *stack_ptr2;
  longlong stack_var1;
  longlong stack_var2;
  undefined8 stack_var3;
  undefined8 stack_buffer[2];
  char flag_array[16];
  ulonglong stack_checksum;
  
  stack_var3 = 0xfffffffffffffffe;
  stack_checksum = GLOBAL_CHECKSUM_VALUE ^ (ulonglong)temp_buffer;
  data_offset = 0;
  temp_var2 = 0;
  flag_offset = (ulonglong)*(byte *)(entity_base + 0x181) * 0x1c0 + GLOBAL_RESOURCE_TABLE_BASE;
  flag_array[0] = '\0';
  flag_array[1] = '\0';
  flag_array[2] = '\0';
  flag_array[3] = '\0';
  flag_array[4] = '\0';
  flag_array[5] = '\0';
  flag_array[6] = '\0';
  flag_array[7] = '\0';
  flag_array[8] = '\0';
  flag_array[9] = '\0';
  flag_array[10] = '\0';
  flag_array[11] = '\0';
  flag_array[12] = '\0';
  flag_array[13] = '\0';
  flag_array[14] = '\0';
  flag_array[15] = '\0';
  if ((*entity_flags != '\0') && (*(int *)(flag_offset + 0x78) != -1)) {
    flag_array[*(int *)(flag_offset + 0x78)] = '\x01';
  }
  if ((entity_flags[1] != '\0') && (*(int )(flag_offset + 0x7c) != -1)) {
    flag_array[*(int )(flag_offset + 0x7c)] = '\x01';
  }
  if ((entity_flags[2] != '\0') && (*(int *)(flag_offset + 0x80) != -1)) {
    flag_array[*(int )(flag_offset + 0x80)] = '\x01';
  }
  if ((entity_flags[3] != '\0') && (*(int *)(flag_offset + 0x84) != -1)) {
    flag_array[*(int )(flag_offset + 0x84)] = '\x01';
  }
  if ((entity_flags[4] != '\0') && (*(int )(flag_offset + 0x88) != -1)) {
    flag_array[*(int )(flag_offset + 0x88)] = '\x01';
  }
  if ((entity_flags[5] != '\0') && (*(int )(flag_offset + 0x8c) != -1)) {
    flag_array[*(int )(flag_offset + 0x8c)] = '\x01';
  }
  if ((entity_flags[6] != '\0') && (*(int )(flag_offset + 0x90) != -1)) {
    flag_array[*(int )(flag_offset + 0x90)] = '\x01';
  }
  if ((entity_flags[7] != '\0') && (*(int )(flag_offset + 0x94) != -1)) {
    flag_array[*(int )(flag_offset + 0x94)] = '\x01';
  }
  if ((entity_flags[8] != '\0') && (*(int )(flag_offset + 0x98) != -1)) {
    flag_array[*(int )(flag_offset + 0x98)] = '\x01';
  }
  if ((entity_flags[9] != '\0') && (*(int )(flag_offset + 0x9c) != -1)) {
    flag_array[*(int )(flag_offset + 0x9c)] = '\x01';
  }
  if ((entity_flags[10] != '\0') && (*(int )(flag_offset + 0xa0) != -1)) {
    flag_array[*(int )(flag_offset + 0xa0)] = '\x01';
  }
  if ((entity_flags[11] != '\0') && (*(int )(flag_offset + 0xa4) != -1)) {
    flag_array[*(int )(flag_offset + 0xa4)] = '\x01';
  }
  if ((entity_flags[12] != '\0') && (*(int )(flag_offset + 0xa8) != -1)) {
    flag_array[*(int )(flag_offset + 0xa8)] = '\x01';
  }
  if ((entity_flags[13] != '\0') && (*(int )(flag_offset + 0xac) != -1)) {
    flag_array[*(int )(flag_offset + 0xac)] = '\x01';
  }
  entity_count = *(int )(entity_base + 0x184);
  entity_type_offset = (longlong)*(int *)(flag_offset + 0x70);
  stack_var2 = batch_size;
  if (*(char *)(entity_base + 0x180) == '\x01') {
    if (0 < entity_type_offset) {
      resource_ptr = (undefined8 *)(output_buffer + 8);
      system_offset = (entity_base - output_buffer) + 8;
      stack_var1 = system_offset;
      do {
        if (flag_array[data_offset] != '\0') {
          temp_ptr = *(longlong *)(GLOBAL_RESOURCE_MANAGER_BASE + 0x1cd8);
          system_offset = *(longlong )(system_offset + (longlong)resource_ptr);
          *(undefined4 *)(system_offset + 0x16c) = *(undefined4 )(GLOBAL_CONSTANT_BASE + 0x224);
          temp_ptr = *(longlong **)(temp_ptr + 0x8400);
          temp_ptr2 = stack_buffer;
          temp_var1 = 0;
          entity_count = (**(code **)(*temp_ptr + 0x70))(temp_ptr, *(undefined8 *)(system_offset + 0x10), 0, 4);
          if (entity_count < 0) {
            handle_error(entity_count, &GLOBAL_ERROR_HANDLER);
          }
          *resource_ptr = stack_buffer[0];
          temp_ptr = (longlong *)get_current_context();
          temp_ptr = (longlong *)*temp_ptr;
          if (temp_ptr != (longlong *)0x0) {
            stack_ptr1 = temp_ptr;
            (**(code **)(*temp_ptr + 0x28))(temp_ptr);
          }
          stack_ptr1 = *(longlong **)(stack_var2 + data_offset * 8);
          *(longlong **)(stack_var2 + data_offset * 8) = temp_ptr;
          if (stack_ptr1 != (longlong *)0x0) {
            (**(code **)(*stack_ptr1 + 0x38))();
          }
          system_offset = stack_var1;
          if (stack_ptr2 != (longlong *)0x0) {
            (**(code **)(*stack_ptr2 + 0x38))();
            system_offset = stack_var1;
          }
        }
        data_offset = data_offset + 1;
        resource_ptr = resource_ptr + 3;
      } while (data_offset < entity_type_offset);
    }
  }
  else if (0 < entity_type_offset) {
    flag_ptr = (int *)(flag_offset + 0xe8);
    do {
      if (flag_array[data_offset] != '\0') {
        temp_ptr = (longlong *)allocate_entity_memory(GLOBAL_ENTITY_ALLOCATOR, &stack_ptr1, *flag_ptr * entity_count);
        temp_var2 = 1;
        temp_ptr = (longlong *)*temp_ptr;
        if (temp_ptr != (longlong *)0x0) {
          stack_ptr2 = temp_ptr;
          (**(code **)(*temp_ptr + 0x28))(temp_ptr);
        }
        stack_ptr2 = *(longlong **)(batch_size + data_offset * 8);
        *(longlong **)(batch_size + data_offset * 8) = temp_ptr;
        if (stack_ptr2 != (longlong *)0x0) {
          (**(code **)(*stack_ptr2 + 0x38))();
        }
        temp_var2 = 0;
        if (stack_ptr1 != (longlong *)0x0) {
          (**(code **)(*stack_ptr1 + 0x38))();
        }
      }
      data_offset = data_offset + 1;
      flag_ptr = flag_ptr + 1;
    } while (data_offset < entity_type_offset);
  }
  // 清理资源
  cleanup_resource(stack_checksum ^ (ulonglong)temp_buffer);
}

// 函数: void update_entity_data(undefined8 context_id, longlong entity_base, longlong data_buffer)
// 功能: 更新实体数据，处理不同类型的实体更新
void update_entity_data(undefined8 context_id, longlong entity_base, longlong data_buffer)
{
  int entity_index;
  int entity_total;
  int entity_step;
  longlong entity_ptr;
  longlong *manager_ptr;
  code *update_function;
  ulonglong index_counter;
  ulonglong step_counter;
  undefined4 *data_ptr;
  undefined4 *config_ptr;
  int config_array[4];
  longlong *temp_ptr;
  
  entity_index = *(int *)(entity_base + 0x184);
  index_counter = 0;
  entity_total = *(int )(entity_base + 0x188);
  if (0 < (longlong)entity_total) {
    config_ptr = (undefined4 *)((ulonglong)*(byte *)(entity_base + 0x181) * 0x1c0 + 0x1e8 + GLOBAL_RESOURCE_TABLE_BASE);
    data_ptr = (undefined4 *)(entity_base + 0xc);
    step_counter = index_counter;
    do {
      if (*(longlong *)(data_buffer + index_counter * 8) != 0) {
        if (*(char *)(entity_base + 0x180) == '\x01') {
          entity_ptr = *(longlong *)(data_ptr + 1);
          manager_ptr = *(longlong **)(*(longlong )(GLOBAL_RESOURCE_MANAGER_BASE + 0x1cd8) + 0x8400);
          update_function = *(code **)(*manager_ptr + 0x78);
          *(undefined4 *)(entity_ptr + 0x16c) = *(undefined4 )(GLOBAL_CONSTANT_BASE + 0x224);
          (*update_function)(manager_ptr, *(undefined8 *)(entity_ptr + 0x10), 0);
        }
        else {
          entity_step = config_ptr[-0x40];
          create_resource_entry(GLOBAL_ENGINE_BASE_ADDRESS, config_array, *data_ptr, *(char *)(entity_base + 0x180), entity_index, 1, 1);
          process_resource_batch(*(undefined8 *)(GLOBAL_RESOURCE_MANAGER_BASE + 0x1cd8), temp_ptr, config_array[0] * entity_step,
                                *(undefined8 *)(*(longlong )(data_buffer + index_counter * 8) + 0x10), entity_step * entity_index, 0);
          update_entity_properties(entity_base, config_array, step_counter, *config_ptr, entity_step);
          if (temp_ptr != (longlong *)0x0) {
            (**(code **)(*temp_ptr + 0x38))();
          }
        }
      }
      step_counter = (ulonglong)((int)step_counter + 1);
      index_counter = index_counter + 1;
      config_ptr = config_ptr + 1;
      data_ptr = data_ptr + 6;
    } while ((longlong)index_counter < (longlong)entity_total);
  }
  return;
}

// 函数: void process_entity_creation(longlong *context_ptr, int *entity_config, longlong *output_ptr, undefined8 creation_flags,
// 功能: 处理实体创建过程，分配资源并初始化实体
void process_entity_creation(longlong *context_ptr, int *entity_config, longlong *output_ptr, undefined8 creation_flags,
                            longlong result_buffer)
{
  longlong resource_manager;
  longlong entity_data;
  int config_size;
  longlong *allocator_ptr;
  undefined8 resource_handle;
  longlong *temp_ptr1;
  longlong *temp_ptr2;
  undefined8 temp_buffer[2];
  
  temp_ptr1 = context_ptr;
  if ((char)entity_config[8] == '\x01') {
    resource_manager = *(longlong )(GLOBAL_RESOURCE_MANAGER_BASE + 0x1cd8);
    entity_data = *(longlong )(entity_config + 6);
    *(undefined4 *)(entity_data + 0x16c) = *(undefined4 )(GLOBAL_CONSTANT_BASE + 0x224);
    allocator_ptr = *(longlong **)(resource_manager + 0x8400);
    config_size = (**(code **)(*allocator_ptr + 0x70))
                      (allocator_ptr, *(undefined8 )(entity_data + 0x10), 0, 4, 0, temp_buffer, 0, 0xfffffffffffffffe);
    if (config_size < 0) {
      handle_error(config_size, &GLOBAL_ERROR_HANDLER);
    }
    *(undefined8 *)(result_buffer + 8) = temp_buffer[0];
    allocator_ptr = (longlong *)get_current_context();
    allocator_ptr = (longlong *)*allocator_ptr;
    if (allocator_ptr != (longlong *)0x0) {
      temp_ptr1 = allocator_ptr;
      (**(code **)(*allocator_ptr + 0x28))(allocator_ptr);
    }
    temp_ptr1 = (longlong *)*output_ptr;
    *output_ptr = (longlong)allocator_ptr;
    if (temp_ptr1 != (longlong *)0x0) {
      (**(code **)(*temp_ptr1 + 0x38))();
    }
  }
  else {
    resource_handle = allocate_entity_memory(GLOBAL_ENTITY_ALLOCATOR, &temp_ptr1,
                                           ((*(byte *)(entity_config + 1) & 1) + 1) * *entity_config * 2);
    copy_entity_data(output_ptr, resource_handle);
    temp_ptr2 = temp_ptr1;
  }
  if (temp_ptr2 != (longlong *)0x0) {
    (**(code **)(*temp_ptr2 + 0x38))();
  }
  return;
}

// 函数: void update_entity_resources(undefined8 context_id, int *entity_config, longlong *resource_ptr)
// 功能: 更新实体资源，处理不同类型的资源更新
void update_entity_resources(undefined8 context_id, int *entity_config, longlong *resource_ptr)
{
  int resource_type;
  longlong resource_data;
  longlong *manager_ptr;
  code *update_function;
  undefined8 engine_base;
  undefined1 temp_buffer[16];
  longlong *temp_ptr;
  
  engine_base = GLOBAL_ENGINE_BASE_ADDRESS;
  if ((char)entity_config[8] == '\x01') {
    resource_data = *(longlong )(entity_config + 6);
    manager_ptr = *(longlong **)(*(longlong )(GLOBAL_RESOURCE_MANAGER_BASE + 0x1cd8) + 0x8400);
    update_function = *(code **)(*manager_ptr + 0x78);
    *(undefined4 )(resource_data + 0x16c) = *(undefined4 )(GLOBAL_CONSTANT_BASE + 0x224);
    (*update_function)(manager_ptr, *(undefined8 )(resource_data + 0x10), 0);
  }
  else {
    release_resource_memory(GLOBAL_ENGINE_BASE_ADDRESS, entity_config + 2);
    resource_type = (*(byte *)(entity_config + 1) & 1) * 2 + 2;
    engine_base = create_resource_entry(engine_base, temp_buffer, (*(byte )(entity_config + 1) & 1) + 0xe, (char)entity_config[8],
                                       *entity_config, 1, 1);
    update_resource_references(entity_config + 2, engine_base);
    if (temp_ptr != (longlong *)0x0) {
      (**(code **)(*temp_ptr + 0x38))();
    }
    process_resource_batch(*(undefined8 )(GLOBAL_RESOURCE_MANAGER_BASE + 0x1cd8), *(undefined8 )(entity_config + 6),
                           entity_config[2] * resource_type, *(undefined8 )(*resource_ptr + 0x10), *entity_config * resource_type, 0);
  }
  return;
}

// 函数: void setup_entity_callbacks(undefined8 context_id, undefined8 callback_param1, undefined8 callback_param2, undefined8 callback_param3)
// 功能: 设置实体回调函数，配置事件处理机制
void setup_entity_callbacks(undefined8 context_id, undefined8 callback_param1, undefined8 callback_param2, undefined8 callback_param3)
{
  undefined8 engine_base;
  undefined4 stack_param1;
  undefined4 stack_param2;
  undefined4 stack_param3;
  undefined4 stack_param4;
  undefined4 stack_param5;
  undefined4 stack_param6;
  undefined4 stack_param7;
  undefined4 stack_param8;
  undefined4 *callback_ptr[2];
  code *callback1;
  code *callback2;
  
  engine_base = GLOBAL_ENGINE_BASE_ADDRESS;
  callback1 = entity_callback_handler1;
  callback2 = entity_callback_handler2;
  callback_ptr[0] =
       (undefined4 *)allocate_callback_memory(GLOBAL_MEMORY_POOL, 0x20, 8, GLOBAL_CALLBACK_CONSTANT, 0xfffffffffffffffe);
  stack_param1 = (undefined4)callback_param1;
  stack_param2 = (undefined4)((ulonglong)callback_param1 >> 0x20);
  stack_param3 = (undefined4)callback_param2;
  stack_param4 = (undefined4)((ulonglong)callback_param2 >> 0x20);
  *callback_ptr[0] = stack_param1;
  callback_ptr[0][1] = stack_param2;
  callback_ptr[0][2] = stack_param3;
  callback_ptr[0][3] = stack_param4;
  stack_param5 = (undefined4)callback_param3;
  stack_param6 = (undefined4)((ulonglong)callback_param3 >> 0x20);
  stack_param7 = (undefined4)engine_base;
  stack_param8 = (undefined4)((ulonglong)engine_base >> 0x20);
  callback_ptr[0][4] = stack_param5;
  callback_ptr[0][5] = stack_param6;
  callback_ptr[0][6] = stack_param7;
  callback_ptr[0][7] = stack_param8;
  register_callback(callback_ptr);
  return;
}

// 函数: void configure_entity_properties(longlong entity_base, int *property_config, int property_index, int property_type, int property_count)
// 功能: 配置实体属性，设置属性值和类型
void configure_entity_properties(longlong entity_base, int *property_config, int property_index, int property_type, int property_count)
{
  int config_value;
  int multiplier;
  longlong property_data;
  byte property_flag;
  undefined1 index_flag;
  longlong property_offset;
  longlong config_offset;
  
  config_offset = (longlong)property_type;
  property_offset = entity_base + (longlong)property_index * 0x18;
  if (*(int )(entity_base + (longlong)property_index * 0x18) != -1) {
    release_resource_memory(GLOBAL_ENGINE_BASE_ADDRESS, property_offset);
  }
  copy_property_data(property_offset, property_config);
  property_offset = GLOBAL_CONSTANT_BASE;
  if (property_type != -1) {
    property_data = *(longlong )(property_config + 4);
    *(undefined4 )(property_data + 0x16c) = *(undefined4 )(GLOBAL_CONSTANT_BASE + 0x224);
    *(undefined8 *)(entity_base + 0x1a0 + config_offset * 8) = *(undefined8 )(property_data + 0x10);
    config_value = *property_config;
    *(int )(entity_base + 0x260 + config_offset * 4) = property_count;
    *(int )(entity_base + 0x220 + config_offset * 4) = config_value * property_count;
  }
  config_value = property_config[3];
  index_flag = (undefined1)property_index;
  switch(config_value) {
  case 2:
    config_offset = *(longlong )(property_config + 4);
    *(undefined4 )(config_offset + 0x16c) = *(undefined4 )(property_offset + 0x224);
    *(undefined8 )(entity_base + 0x2a8) = *(undefined8 )(config_offset + 0x10);
    multiplier = *property_config;
    *(int )(entity_base + 700) = property_count;
    *(int )(entity_base + 0x2b4) = multiplier * property_count;
    property_offset = (longlong)property_config[2];
    *(undefined1 *)(entity_base + 0x19d) = 0;
    property_flag = get_property_bit_position(config_value);
    *(undefined1 *)(entity_base + 0x193) = index_flag;
    goto update_property_bits;
  case 4:
  case 5:
    config_offset = *(longlong )(property_config + 4);
    *(undefined4 )(config_offset + 0x16c) = *(undefined4 )(property_offset + 0x224);
    *(undefined8 )(entity_base + 0x2a0) = *(undefined8 )(config_offset + 0x10);
    multiplier = *property_config;
    *(int )(entity_base + 0x2b8) = property_count;
    *(int )(entity_base + 0x2b0) = multiplier * property_count;
    property_offset = (longlong)property_config[2] + 1;
    *(undefined1 *)(entity_base + 0x198) = 0;
    property_flag = get_property_bit_position(config_value);
    *(undefined1 *)(entity_base + 400) = index_flag;
    *(ulonglong *)(entity_base + 0x198) = *(ulonglong *)(entity_base + 0x198) | property_offset << (property_flag & 0x3f);
    break;
  case 8:
    property_offset = (longlong)property_config[2] + 1;
    *(undefined1 *)(entity_base + 0x19b) = 0;
    property_flag = get_property_bit_position(config_value);
    *(undefined1 *)(entity_base + 0x194) = index_flag;
    *(ulonglong *)(entity_base + 0x198) = *(ulonglong *)(entity_base + 0x198) | property_offset << (property_flag & 0x3f);
    break;
  case 9:
    property_offset = (longlong)property_config[2] + 1;
    *(undefined1 *)(entity_base + 0x19a) = 0;
    property_flag = get_property_bit_position(config_value);
    *(undefined1 *)(entity_base + 0x195) = index_flag;
    *(ulonglong *)(entity_base + 0x198) = *(ulonglong )(entity_base + 0x198) | property_offset << (property_flag & 0x3f);
    break;
  case 10:
    property_offset = (longlong)property_config[2];
    *(undefined1 *)(entity_base + 0x19c) = 0;
    property_flag = get_property_bit_position(config_value);
    *(undefined1 *)(entity_base + 0x191) = index_flag;
    goto update_property_bits;
  case 0xb:
    property_offset = (longlong)property_config[2];
    *(undefined1 *)(entity_base + 0x19e) = 0;
    property_flag = get_property_bit_position(config_value);
    *(undefined1 *)(entity_base + 0x192) = index_flag;
  update_property_bits:
    *(ulonglong *)(entity_base + 0x198) = *(ulonglong )(entity_base + 0x198) | property_offset + 1 << (property_flag & 0x3f);
    break;
  case 0xc:
    property_offset = (longlong)property_config[2] + 1;
    *(undefined1 *)(entity_base + 0x199) = 0;
    property_flag = get_property_bit_position(config_value);
    *(undefined1 *)(entity_base + 400) = index_flag;
    *(ulonglong *)(entity_base + 0x198) = *(ulonglong )(entity_base + 0x198) | property_offset << (property_flag & 0x3f);
  }
  return;
}

// 函数: void resize_entity_array(longlong *array_ptr, undefined8 resize_param, undefined8 capacity_param, undefined8 alignment_param)
// 功能: 调整数组大小，重新分配内存并复制数据
void resize_entity_array(longlong *array_ptr, undefined8 resize_param, undefined8 capacity_param, undefined8 alignment_param)
{
  longlong *start_ptr;
  longlong *end_ptr;
  undefined8 *new_buffer;
  undefined8 *current_ptr;
  longlong array_size;
  longlong current_size;
  longlong element_size;
  
  array_size = array_ptr[1];
  current_size = *array_ptr;
  element_size = (array_size - current_size) / 0x18;
  new_buffer = (undefined8 *)0x0;
  if (element_size == 0) {
    element_size = 1;
  }
  else {
    element_size = element_size * 2;
    if (element_size == 0) goto allocation_complete;
  }
  new_buffer = (undefined8 *)
           allocate_memory_block(GLOBAL_MEMORY_POOL, element_size * 0x18, (char)array_ptr[3], alignment_param, 0xfffffffffffffffe);
  array_size = array_ptr[1];
  current_size = *array_ptr;
allocation_complete:
  current_ptr = new_buffer;
  if (current_size != array_size) {
    current_size = current_size - (longlong)new_buffer;
    do {
      current_ptr[1] = 0;
      current_ptr[2] = 0;
      *current_ptr = *(undefined8 )(current_size + (longlong)current_ptr);
      start_ptr = *(longlong **)(current_size + 8 + (longlong)current_ptr);
      if (start_ptr != (longlong *)0x0) {
        (**(code **)(*start_ptr + 0x28))(start_ptr);
      }
      end_ptr = (longlong *)current_ptr[1];
      current_ptr[1] = start_ptr;
      if (end_ptr != (longlong *)0x0) {
        (**(code **)(*end_ptr + 0x38))();
      }
      start_ptr = *(longlong **)(current_size + 0x10 + (longlong)current_ptr);
      if (start_ptr != (longlong *)0x0) {
        (**(code **)(*start_ptr + 0x28))(start_ptr);
      }
      end_ptr = (longlong *)current_ptr[2];
      current_ptr[2] = start_ptr;
      if (end_ptr != (longlong *)0x0) {
        (**(code **)(*end_ptr + 0x38))();
      }
      *(undefined8 )(current_size + (longlong)current_ptr) = 0;
      start_ptr = *(longlong **)(current_size + 8 + (longlong)current_ptr);
      *(undefined8 )(current_size + 8 + (longlong)current_ptr) = 0;
      if (start_ptr != (longlong *)0x0) {
        (**(code **)(*start_ptr + 0x38))();
      }
      start_ptr = *(longlong **)(current_size + 0x10 + (longlong)current_ptr);
      *(undefined8 )(current_size + 0x10 + (longlong)current_ptr) = 0;
      if (start_ptr != (longlong *)0x0) {
        (**(code **)(*start_ptr + 0x38))();
      }
      current_ptr = current_ptr + 3;
    } while (current_size + (longlong)current_ptr != array_size);
  }
  initialize_array_data(current_ptr, resize_param);
  array_size = array_ptr[1];
  current_size = *array_ptr;
  if (current_size != array_size) {
    do {
      free_memory_block(current_size);
      current_size = current_size + 0x18;
    } while (current_size != array_size);
    current_size = *array_ptr;
  }
  if (current_size == 0) {
    *array_ptr = (longlong)new_buffer;
    array_ptr[1] = (longlong)(current_ptr + 3);
    array_ptr[2] = (longlong)(new_buffer + element_size * 3);
    return;
  }
  // 释放旧内存
  free_memory(current_size);
}

// 函数: void collect_entity_statistics(undefined8 *stats_ptr)
// 功能: 收集实体统计信息，计算各种指标
void collect_entity_statistics(undefined8 *stats_ptr)
{
  int *entity_counter;
  int stat_value;
  int processed_count;
  int total_count;
  uint entity_type;
  longlong *entity_list;
  longlong list_size;
  uint max_count;
  longlong current_offset;
  uint min_count;
  longlong list_capacity;
  int stack_var1;
  longlong stack_var2;
  
  stats_ptr = (undefined8 *)*stats_ptr;
  *(undefined4 *)*stats_ptr = 0;
  *(undefined4 *)stats_ptr[1] = 0;
  *(undefined4 *)stats_ptr[2] = 0;
  stack_var1 = 0;
  list_capacity = 0x4a0;
  do {
    stat_value = (int)((*(longlong )(list_capacity + 8 + stats_ptr[3]) - *(longlong )(list_capacity + stats_ptr[3])) / 0x18);
    stack_var2 = (longlong)stat_value;
    if (0 < stat_value) {
      stat_value = get_entity_type_count(stack_var1);
      current_offset = 0;
      do {
        entity_counter = *(int **)(current_offset + *(longlong )(list_capacity + stats_ptr[3]));
        processed_count = lock_mutex(entity_counter + 6);
        if (processed_count != 0) {
          throw_mutex_error(processed_count);
        }
        entity_list = *(longlong **)(entity_counter + 2);
        list_size = 0;
        if (entity_list != (longlong *)0x0) {
          min_count = 0;
          do {
            entity_type = *(uint *)(entity_list + 2);
            list_size = list_size + (int)entity_type;
            entity_list = (longlong *)*entity_list;
            if (entity_type < min_count) {
              entity_type = min_count;
            }
            min_count = entity_type;
          } while (entity_list != (longlong *)0x0);
        }
        total_count = *entity_counter;
        processed_count = unlock_mutex(entity_counter + 6);
        if (processed_count != 0) {
          throw_mutex_error(processed_count);
        }
        *(int *)stats_ptr[1] = *(int *)stats_ptr[1] + total_count * stat_value;
        *(int *)*stats_ptr = *(int *)*stats_ptr + (total_count - (int)list_size) * stat_value;
        processed_count = 0;
        if (total_count == list_size) {
          processed_count = total_count;
        }
        *(int *)stats_ptr[2] = *(int *)stats_ptr[2] + processed_count;
        current_offset = current_offset + 0x18;
        stack_var2 = stack_var2 + -1;
      } while (stack_var2 != 0);
    }
    stack_var1 = stack_var1 + 1;
    list_capacity = list_capacity + 0x20;
  } while (stack_var1 < 0x10);
  return;
}

// 函数: longlong handle_entity_callback(longlong *param1, longlong *param2, int callback_type)
// 功能: 处理实体回调，根据回调类型执行相应的操作
longlong handle_entity_callback(longlong *param1, longlong *param2, int callback_type)
{
  undefined8 *temp_ptr;
  undefined8 temp_value;
  undefined8 *source_ptr;
  
  if (callback_type == 3) {
    return GLOBAL_CALLBACK_TABLE_ADDRESS;
  }
  if (callback_type == 4) {
    return *param1;
  }
  if (callback_type == 0) {
    if (*param1 != 0) {
      // 释放内存
      free_memory();
    }
  }
  else {
    if (callback_type == 1) {
      source_ptr = (undefined8 *)allocate_callback_memory(GLOBAL_MEMORY_POOL, 0x20, 8, GLOBAL_CALLBACK_CONSTANT, 0xfffffffffffffffe);
      temp_ptr = (undefined8 *)*param2;
      temp_value = temp_ptr[1];
      *source_ptr = *temp_ptr;
      source_ptr[1] = temp_value;
      temp_value = temp_ptr[3];
      source_ptr[2] = temp_ptr[2];
      source_ptr[3] = temp_value;
      *param1 = (longlong)source_ptr;
      return 0;
    }
    if (callback_type == 2) {
      *param1 = *param2;
      *param2 = 0;
      return 0;
    }
  }
  return 0;
}

// 函数: void initialize_hash_table(longlong table_base, longlong table_size)
// 功能: 初始化哈希表，分配内存并清零
void initialize_hash_table(longlong table_base, longlong table_size)
{
  undefined8 table_ptr;
  
  table_ptr = allocate_memory_block(GLOBAL_MEMORY_POOL, table_size * 8 + 8, 8, *(undefined1 )(table_base + 0x2c));
  // 清零内存
  memset(table_ptr, 0, table_size * 8);
}

// 函数: undefined8 * initialize_resource_handle(undefined8 *handle_ptr)
// 功能: 初始化资源句柄，设置默认值
undefined8 * initialize_resource_handle(undefined8 *handle_ptr)
{
  *handle_ptr = 0xffffffffffffffff;
  *(undefined4 )(handle_ptr + 1) = 0xffffffff;
  *(undefined4 *)((longlong)handle_ptr + 0xc) = 0x10;
  handle_ptr[2] = 0;
  return handle_ptr;
}

// 函数: void reset_resource_handle(undefined8 *handle_ptr)
// 功能: 重置资源句柄，清理资源
void reset_resource_handle(undefined8 *handle_ptr)
{
  longlong *resource_ptr;
  
  *handle_ptr = 0xffffffffffffffff;
  resource_ptr = (longlong *)handle_ptr[2];
  handle_ptr[2] = 0;
  if (resource_ptr != (longlong *)0x0) {
    (**(code **)(*resource_ptr + 0x38))();
  }
  *(undefined4 *)((longlong)handle_ptr + 0xc) = 0x10;
  *(undefined4 )(handle_ptr + 1) = 0xffffffff;
  return;
}

// 函数: void cleanup_entity_resources(longlong *resource_manager)
// 功能: 清理实体资源，释放内存并重置状态
void cleanup_entity_resources(longlong *resource_manager)
{
  uint *flag_ptr;
  longlong table_offset;
  int lock_result;
  longlong entry_count;
  longlong current_offset;
  longlong next_offset;
  
  next_offset = *resource_manager;
  if ((next_offset != 0) &&
     (lock_result = (int)((*(longlong )(next_offset + 0x40) - *(longlong )(next_offset + 0x38) >> 4),
     next_offset = (longlong)lock_result, 0 < lock_result)) {
    current_offset = 0;
    do {
      flag_ptr = (uint *)(*(longlong )(current_offset + *(longlong )(*resource_manager + 0x38)) + 0x100);
      *flag_ptr = *flag_ptr & 0xfffff7ff;
      table_offset = *(longlong )(current_offset + *(longlong )(*resource_manager + 0x38));
      *(undefined8 )(table_offset + 0x108) = 0xffffffffffffffff;
      *(undefined4 )(table_offset + 0x110) = 0xffffffff;
      current_offset = current_offset + 0x10;
      next_offset = next_offset + -1;
    } while (next_offset != 0);
  }
  if (resource_manager[0xb] != 0) {
    // 释放内存
    free_memory();
  }
  if ((longlong *)resource_manager[2] != (longlong *)0x0) {
    (**(code **)(*(longlong )resource_manager[2] + 0x38))();
  }
  if ((longlong *)*resource_manager != (longlong *)0x0) {
    (**(code **)(*(longlong *)*resource_manager + 0x38))();
  }
  return;
}