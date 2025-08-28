#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part258.c - 核心引擎模块第258部分
// 本文件包含字符串处理、内存管理、数据结构操作和错误处理相关函数

// 全局变量声明
uint64_t *GLOBAL_STRING_TABLE_180bf7e20;  // 全局字符串表指针
uint64_t *GLOBAL_MEMORY_POOL_180c8ed18;  // 全局内存池指针
uint64_t *GLOBAL_ERROR_HANDLER_180c86938; // 全局错误处理器指针
uint64_t *GLOBAL_FORMAT_MESSAGE_180bf00a8; // 全局格式化消息指针

// 函数: void process_command_and_validate_parameters(uint64_t param_1, uint64_t param_2, int32_t param_3, uint64_t param_4)
// 功能: 处理命令并验证参数，执行安全检查和初始化操作
void process_command_and_validate_parameters(uint64_t context_ptr, uint64_t data_ptr, int32_t flags, uint64_t error_handler)

{
  int64_t *error_handler_ptr;
  int8_t stack_buffer[32];
  void *validation_ptr;
  int64_t validation_result;
  int32_t status_code;
  uint64_t security_token;
  int64_t operation_result[2];
  int16_t operation_flags;
  int8_t operation_mode;
  uint64_t result_ptr;
  uint64_t temp_buffer_1;
  uint64_t temp_buffer_2;
  uint64_t temp_buffer_3;
  uint64_t temp_buffer_4;
  uint64_t temp_buffer_5;
  uint64_t temp_buffer_6;
  uint64_t temp_buffer_7;
  uint64_t temp_buffer_8;
  int32_t checksum;
  int16_t version_info;
  int32_t validation_flags;
  int8_t encryption_flag;
  uint64_t stack_cookie;
  
  error_handler_ptr = GLOBAL_ERROR_HANDLER_180c86938;
  security_token = 0xfffffffffffffffe;
  stack_cookie = GLOBAL_FORMAT_MESSAGE_180bf00a8 ^ (uint64_t)stack_buffer;
  initialize_security_context(&validation_ptr);
  perform_system_initialization();
  validation_ptr = &SECURITY_CONTEXT_180a3c3e0;
  if (validation_result != 0) {
    // 安全验证失败，触发错误处理
    trigger_security_failure();
  }
  validation_result = 0;
  status_code = 0;
  validation_ptr = &STRING_HANDLER_18098bcb0;
  operation_result[0] = 0;
  operation_result[1] = 0;
  operation_flags = 0;
  operation_mode = 3;
  validation_flags = 0;
  result_ptr = 0;
  checksum = 0;
  version_info = 0;
  encryption_flag = 0;
  temp_buffer_1 = 0;
  temp_buffer_2 = 0;
  temp_buffer_3 = 0;
  temp_buffer_4 = 0;
  temp_buffer_5 = 0;
  temp_buffer_6 = 0;
  temp_buffer_7 = 0;
  temp_buffer_8 = 0;
  // 调用全局处理函数执行核心操作
  (**(code **)(*error_handler_ptr + 0x108))(error_handler_ptr,error_handler,operation_result);
  execute_data_processing(data_ptr,operation_result,flags);
  if (operation_flags._1_1_ == '\0') {
    if (((char)operation_flags == '\0') && (operation_result[0] != 0)) {
      // 操作结果验证失败
      trigger_security_failure();
    }
    operation_result[0] = 0;
    operation_result[1] = 0;
    operation_flags = 0;
  }
  // 执行安全清理操作
  execute_secure_cleanup(stack_cookie ^ (uint64_t)stack_buffer);
}



// 警告：以'_'开头的全局变量与同一地址的较小符号重叠



// 函数: void reallocate_and_copy_structure_data(int64_t *structure_ptr, int64_t data_size, uint64_t flags, uint64_t allocator)
// 功能: 重新分配结构体内存并复制数据，处理内存对齐和数据迁移
void reallocate_and_copy_structure_data(int64_t *structure_ptr, int64_t data_size, uint64_t flags, uint64_t allocator)

{
  void *target_ptr;
  uint64_t *source_ptr;
  int64_t old_start;
  int64_t old_end;
  int64_t new_size;
  uint64_t *new_block_ptr;
  int64_t element_count;
  uint64_t *copy_destination;
  int64_t allocation_size;
  uint64_t size_calculation;
  
  size_calculation = 0xfffffffffffffffe;
  old_end = structure_ptr[1];
  old_start = *structure_ptr;
  element_count = SUB168(SEXT816(-0x7777777777777777) * SEXT816(old_end - old_start),8) + (old_end - old_start);
  source_ptr = (uint64_t *)0x0;
  allocation_size = (element_count >> 6) - (element_count >> 0x3f);
  if (allocation_size == 0) {
    allocation_size = 1;
  }
  else {
    allocation_size = allocation_size * 2;
    if (allocation_size == 0) goto LAB_1802260bd;
  }
  source_ptr = (uint64_t *)
           allocate_memory_block(GLOBAL_MEMORY_POOL_180c8ed18,allocation_size * 0x78,(char)structure_ptr[3],allocator,
                                0xfffffffffffffffe);
  old_end = structure_ptr[1];
  old_start = *structure_ptr;
LAB_1802260bd:
  copy_destination = source_ptr;
  if (old_start != old_end) {
    new_block_ptr = source_ptr + 0xd;
    old_start = old_start - (int64_t)source_ptr;
    do {
      *copy_destination = &STRING_HANDLER_18098bcb0;
      new_block_ptr[-0xc] = 0;
      *(int32_t *)(new_block_ptr + -0xb) = 0;
      *copy_destination = &VTABLE_DESTRUCTOR_1809fcc58;
      new_block_ptr[-0xc] = new_block_ptr + -10;
      *(int32_t *)(new_block_ptr + -0xb) = 0;
      *(int8_t *)(new_block_ptr + -10) = 0;
      *(int32_t *)(new_block_ptr + -0xb) = *(int32_t *)((int64_t)new_block_ptr + old_start + -0x58);
      target_ptr = *(void **)((int64_t)new_block_ptr + old_start + -0x60);
      copy_destination = &DEFAULT_STRING_18098bc73;
      if (target_ptr != (void *)0x0) {
        copy_destination = target_ptr;
      }
      copy_string_secure(new_block_ptr[-0xc],0x40,copy_destination,allocator,size_calculation,copy_destination);
      new_block_ptr[-2] = &STRING_HANDLER_18098bcb0;
      new_block_ptr[-1] = 0;
      *(int32_t *)new_block_ptr = 0;
      new_block_ptr[-2] = &SECURITY_CONTEXT_180a3c3e0;
      new_block_ptr[1] = 0;
      new_block_ptr[-1] = 0;
      *(int32_t *)new_block_ptr = 0;
      *(int32_t *)new_block_ptr = *(int32_t *)((int64_t)new_block_ptr + old_start);
      new_block_ptr[-1] = *(uint64_t *)((int64_t)new_block_ptr + old_start + -8);
      *(int32_t *)((int64_t)new_block_ptr + 0xc) = *(int32_t *)((int64_t)new_block_ptr + old_start + 0xc);
      *(int32_t *)(new_block_ptr + 1) = *(int32_t *)((int64_t)new_block_ptr + old_start + 8);
      *(int32_t *)((int64_t)new_block_ptr + old_start) = 0;
      *(uint64_t *)((int64_t)new_block_ptr + old_start + -8) = 0;
      *(uint64_t *)((int64_t)new_block_ptr + old_start + 8) = 0;
      copy_destination = copy_destination + 0xf;
      new_block_ptr = new_block_ptr + 0xf;
    } while (old_start + -0x68 + (int64_t)new_block_ptr != old_end);
  }
  initialize_memory_block(copy_destination,data_size);
  initialize_extended_memory(copy_destination + 0xb,data_size + 0x58);
  old_end = structure_ptr[1];
  old_start = *structure_ptr;
  if (old_start != old_end) {
    do {
      release_memory_block(old_start);
      old_start = old_start + 0x78;
    } while (old_start != old_end);
    old_start = *structure_ptr;
  }
  if (old_start == 0) {
    *structure_ptr = (int64_t)source_ptr;
    structure_ptr[1] = (int64_t)(copy_destination + 0xf);
    structure_ptr[2] = (int64_t)(source_ptr + allocation_size * 0xf);
    return;
  }
  // 内存块非空，触发错误处理
  handle_memory_leak_error(old_start);
}



int64_t format_error_message(int64_t error_context)

{
  int64_t *message_buffer_ptr;
  int64_t message_length;
  ushort error_code;
  uint64_t string_length;
  void *message_source;
  uint format_flags;
  uint64_t loop_counter;
  
  message_buffer_ptr = (int64_t *)(error_context + 0x18);
  if (*message_buffer_ptr == 0) {
    FormatMessageA(0x1300,0,*(int32_t *)(error_context + 8),0x400,message_buffer_ptr,0,0);
    message_length = *message_buffer_ptr;
    if (message_length != 0) {
      string_length = 0xffffffffffffffff;
      do {
        loop_counter = string_length;
        string_length = loop_counter + 1;
      } while (*(char *)(message_length + string_length) != '\0');
      if (string_length < 2) {
        return message_length;
      }
      if (*(char *)(message_length + -1 + string_length) != '\n') {
        return message_length;
      }
      *(int8_t *)(message_length + -1 + string_length) = 0;
      message_length = *message_buffer_ptr;
      if (*(char *)((loop_counter - 1) + message_length) != '\r') {
        return message_length;
      }
      *(int8_t *)((loop_counter - 1) + message_length) = 0;
      return *message_buffer_ptr;
    }
    message_length = LocalAlloc(0,0x20);
    *message_buffer_ptr = message_length;
    if (message_length == 0) {
      return 0;
    }
    format_flags = *(uint *)(error_context + 8);
    if ((format_flags + 0x7ffbfe00 < 0xfe00) && (error_code = (short)format_flags - 0x200, error_code != 0)) {
      format_flags = (uint)error_code;
      message_source = &ERROR_MESSAGE_TABLE_180a13620;
    }
    else {
      message_source = &ERROR_MESSAGE_TABLE_180a13608;
    }
    format_error_string(message_length,0x20,message_source,format_flags);
  }
  return *message_buffer_ptr;
}





// 函数: void cleanup_error_message_buffer(uint64_t *buffer_ptr)
// 功能: 清理错误消息缓冲区，释放相关资源
void cleanup_error_message_buffer(uint64_t *buffer_ptr)

{
  *buffer_ptr = &CLEANUP_HANDLER_180a13640;
  if ((int64_t *)buffer_ptr[2] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)buffer_ptr[2] + 0x10))();
  }
  if (buffer_ptr[3] != 0) {
    LocalFree();
  }
  return;
}



uint64_t *
cleanup_and_free_buffer(uint64_t *buffer_ptr, uint64_t free_flags, uint64_t context, uint64_t allocator)

{
  uint64_t security_token;
  
  security_token = 0xfffffffffffffffe;
  *buffer_ptr = &CLEANUP_HANDLER_180a13640;
  if ((int64_t *)buffer_ptr[2] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)buffer_ptr[2] + 0x10))();
  }
  if (buffer_ptr[3] != 0) {
    LocalFree();
  }
  if ((free_flags & 1) != 0) {
    free(buffer_ptr,0x20,context,allocator,security_token);
  }
  return buffer_ptr;
}



uint64_t * initialize_data_structure(uint64_t *structure_ptr)

{
  int64_t loop_counter;
  uint64_t *element_ptr;
  
  element_ptr = structure_ptr + 0x17;
  loop_counter = 0x10;
  do {
    cleanup_element_data(element_ptr);
    element_ptr = (uint64_t *)((int64_t)element_ptr + 0xc);
    loop_counter = loop_counter + -1;
  } while (loop_counter != 0);
  *structure_ptr = 0;
  structure_ptr[0x37] = 0;
  structure_ptr[1] = 0xffffffffffffffff;
  *(int32_t *)(structure_ptr + 8) = 0xe;
  *(int32_t *)((int64_t)structure_ptr + 0x44) = 0xe;
  structure_ptr[2] = 0xffffffffffffffff;
  *(int32_t *)(structure_ptr + 9) = 0xe;
  *(int32_t *)((int64_t)structure_ptr + 0x4c) = 0xe;
  structure_ptr[3] = 0xffffffffffffffff;
  *(int32_t *)(structure_ptr + 10) = 0xe;
  *(int32_t *)((int64_t)structure_ptr + 0x54) = 0xe;
  structure_ptr[4] = 0xffffffffffffffff;
  *(int32_t *)(structure_ptr + 0xb) = 0xe;
  *(int32_t *)((int64_t)structure_ptr + 0x5c) = 0xe;
  structure_ptr[5] = 0xffffffffffffffff;
  *(int32_t *)(structure_ptr + 0xc) = 0xe;
  *(int32_t *)((int64_t)structure_ptr + 100) = 0xe;
  structure_ptr[6] = 0xffffffffffffffff;
  *(int32_t *)(structure_ptr + 0xd) = 0xe;
  *(int32_t *)((int64_t)structure_ptr + 0x6c) = 0xe;
  structure_ptr[7] = 0xffffffffffffffff;
  *(int32_t *)(structure_ptr + 0xe) = 0xe;
  *(int32_t *)((int64_t)structure_ptr + 0x74) = 0xe;
  structure_ptr[0xf] = 0xffffffffffffffff;
  structure_ptr[0x2f] = 0xffffffffffffffff;
  structure_ptr[0x10] = 0xffffffffffffffff;
  structure_ptr[0x30] = 0xffffffffffffffff;
  structure_ptr[0x11] = 0xffffffffffffffff;
  structure_ptr[0x31] = 0xffffffffffffffff;
  structure_ptr[0x12] = 0xffffffffffffffff;
  structure_ptr[0x32] = 0xffffffffffffffff;
  structure_ptr[0x13] = 0xffffffffffffffff;
  structure_ptr[0x33] = 0xffffffffffffffff;
  structure_ptr[0x14] = 0xffffffffffffffff;
  structure_ptr[0x34] = 0xffffffffffffffff;
  structure_ptr[0x15] = 0xffffffffffffffff;
  structure_ptr[0x35] = 0xffffffffffffffff;
  structure_ptr[0x16] = 0xffffffffffffffff;
  structure_ptr[0x36] = 0xffffffffffffffff;
  return structure_ptr;
}



// 警告：以'_'开头的全局变量与同一地址的较小符号重叠



// 函数: void validate_and_process_data(uint64_t validation_flags, uint64_t *data_buffer)
// 功能: 验证和处理数据，执行完整性检查和数据转换
void validate_and_process_data(uint64_t validation_flags, uint64_t *data_buffer)

{
  uint validation_result;
  int8_t security_buffer[32];
  int32_t status_code;
  uint64_t checksum_1;
  uint64_t checksum_2;
  uint64_t data_pointer;
  uint64_t *buffer_ptr;
  int8_t validation_area[512];
  uint64_t stack_cookie;
  
  checksum_2 = 0xfffffffffffffffe;
  stack_cookie = GLOBAL_FORMAT_MESSAGE_180bf00a8 ^ (uint64_t)security_buffer;
  status_code = 0;
  checksum_1 = 0;
  data_pointer = 0;
  buffer_ptr = data_buffer;
  validation_result = (*GLOBAL_VALIDATOR_180c96828)(1,&VALIDATION_DATA_180c96810,&checksum_1);
  if ((validation_result & 0xfff00000) != 0xbad00000) {
    // 验证失败，执行安全清理
    memset(validation_area,0,0x200);
  }
  *data_buffer = &STRING_HANDLER_18098bcb0;
  data_buffer[1] = 0;
  *(int32_t *)(data_buffer + 2) = 0;
  *data_buffer = &SECURITY_CONTEXT_180a3c3e0;
  data_buffer[3] = 0;
  data_buffer[1] = 0;
  *(int32_t *)(data_buffer + 2) = 0;
  initialize_data_buffer(data_buffer,0);
  *(int32_t *)(data_buffer + 2) = 0;
  if ((int8_t *)data_buffer[1] != (int8_t *)0x0) {
    *(int8_t *)data_buffer[1] = 0;
  }
  status_code = 1;
  // 执行验证后的清理操作
  execute_post_validation_cleanup(stack_cookie ^ (uint64_t)security_buffer);
}





// 函数: void release_memory_resources(int64_t *resource_ptr, uint64_t context, uint64_t allocator, uint64_t flags)
// 功能: 释放内存资源，清理分配的内存块和相关结构
void release_memory_resources(int64_t *resource_ptr, uint64_t context, uint64_t allocator, uint64_t flags)

{
  uint64_t *memory_block;
  int64_t block_address;
  
  if (*resource_ptr != 0) {
    deallocate_memory_block(resource_ptr,resource_ptr[1],allocator,flags,0xfffffffffffffffe);
    memory_block = (uint64_t *)*resource_ptr;
    if (memory_block != (uint64_t *)0x0) {
      block_address = get_memory_block_address(memory_block);
      (**(code **)*memory_block)(memory_block,0);
      if (block_address != 0) {
        // 内存块地址非空，触发错误处理
        handle_memory_leak_error(block_address);
      }
    }
    *resource_ptr = 0;
  }
  return;
}



// 警告：以'_'开头的全局变量与同一地址的较小符号重叠



// 函数: void initialize_resource_manager(int64_t *manager_ptr)
// 功能: 初始化资源管理器，创建必要的数据结构和处理机制
void initialize_resource_manager(int64_t *manager_ptr)

{
  int64_t resource_handle;
  int64_t resource_info;
  void *resource_name;
  int8_t security_buffer[32];
  uint64_t security_token;
  uint64_t *resource_buffer;
  void *resource_parameters[20];
  uint64_t stack_cookie;
  
  security_token = 0xfffffffffffffffe;
  stack_cookie = GLOBAL_FORMAT_MESSAGE_180bf00a8 ^ (uint64_t)security_buffer;
  if (*manager_ptr == 0) {
    resource_buffer = (uint64_t *)allocate_memory_block(GLOBAL_MEMORY_POOL_180c8ed18,0x98,8,3);
    *resource_buffer = &STRING_HANDLER_18098bcb0;
    resource_buffer[1] = 0;
    *(int32_t *)(resource_buffer + 2) = 0;
    *resource_buffer = &VTABLE_RESOURCE_1809fcc28;
    resource_buffer[1] = resource_buffer + 3;
    *(int32_t *)(resource_buffer + 2) = 0;
    *(int8_t *)(resource_buffer + 3) = 0;
    *manager_ptr = (int64_t)resource_buffer;
    resource_info = create_resource_instance(resource_buffer,resource_parameters,manager_ptr[1]);
    resource_handle = *manager_ptr;
    *(int32_t *)(resource_handle + 0x10) = *(int32_t *)(resource_info + 0x10);
    resource_name = &DEFAULT_STRING_18098bc73;
    if (*(void **)(resource_info + 8) != (void *)0x0) {
      resource_name = *(void **)(resource_info + 8);
    }
    copy_resource_name(*(uint64_t *)(resource_handle + 8),0x80,resource_name);
    resource_parameters[0] = &STRING_HANDLER_18098bcb0;
  }
  // 执行初始化后的安全检查
  perform_initialization_security_check(stack_cookie ^ (uint64_t)security_buffer);
}



// 警告：以'_'开头的全局变量与同一地址的较小符号重叠



// 函数: void add_resource_to_manager(int64_t *manager_ptr, int64_t resource_data)
// 功能: 向资源管理器添加资源，处理线程安全和资源注册
void add_resource_to_manager(int64_t *manager_ptr, int64_t resource_data)

{
  int64_t manager_handle;
  uint64_t *resource_entry;
  int64_t mutex_address;
  uint64_t *existing_resource;
  uint64_t *resource_list;
  uint64_t *comparison_target;
  int64_t resource_count;
  int mutex_result;
  uint64_t *insertion_point;
  uint64_t *current_resource;
  void *resource_name;
  uint64_t *new_resource;
  int64_t stack_offset;
  int8_t temp_buffer[16];
  
  if (*manager_ptr == 0) {
    new_resource = (uint64_t *)allocate_memory_block(GLOBAL_MEMORY_POOL_180c8ed18,0x98,8,3);
    *new_resource = &STRING_HANDLER_18098bcb0;
    new_resource[1] = 0;
    *(int32_t *)(new_resource + 2) = 0;
    *new_resource = &VTABLE_RESOURCE_1809fcc28;
    new_resource[1] = new_resource + 3;
    *(int32_t *)(new_resource + 2) = 0;
    *(int8_t *)(new_resource + 3) = 0;
    *manager_ptr = (int64_t)new_resource;
    insertion_point = new_resource;
  }
  else {
    resize_manager_capacity(manager_ptr,manager_ptr[1]);
    new_resource = (uint64_t *)*manager_ptr;
  }
  *(int32_t *)(new_resource + 2) = *(int32_t *)(resource_data + 0x10);
  resource_name = &DEFAULT_STRING_18098bc73;
  if (*(void **)(resource_data + 8) != (void *)0x0) {
    resource_name = *(void **)(resource_data + 8);
  }
  copy_resource_name(new_resource[1],0x80,resource_name);
  resource_count = GLOBAL_RESOURCE_TABLE_180c8ed70;
  manager_handle = *manager_ptr;
  resource_list = (uint64_t *)manager_ptr[1];
  mutex_address = GLOBAL_RESOURCE_TABLE_180c8ed70 + 200;
  insertion_point = resource_list;
  stack_offset = mutex_address;
  mutex_result = _Mtx_lock(mutex_address);
  if (mutex_result != 0) {
    __Throw_C_error_std__YAXH_Z(mutex_result);
  }
  existing_resource = (uint64_t *)(resource_count + 0x98);
  comparison_target = *(uint64_t **)(resource_count + 0xa8);
  current_resource = comparison_target;
  while (resource_list = existing_resource, current_resource != (uint64_t *)0x0) {
    if ((uint64_t *)current_resource[4] < new_resource) {
      current_resource = (uint64_t *)*current_resource;
    }
    else {
      current_resource = (uint64_t *)current_resource[1];
    }
  }
  while (comparison_target != (uint64_t *)0x0) {
    if ((uint64_t *)comparison_target[4] < new_resource) {
      comparison_target = (uint64_t *)*comparison_target;
    }
    else {
      resource_list = comparison_target;
      comparison_target = (uint64_t *)comparison_target[1];
    }
  }
  if ((resource_list == existing_resource) || (new_resource < (uint64_t *)resource_list[4])) {
    resource_list = (uint64_t *)insert_resource_node(existing_resource,temp_buffer,existing_resource,resource_list,&insertion_point);
    resource_list = (uint64_t *)*resource_list;
  }
  resource_name = &DEFAULT_STRING_18098bc73;
  if (*(void **)(manager_handle + 8) != (void *)0x0) {
    resource_name = *(void **)(manager_handle + 8);
  }
  (**(code **)(resource_list[5] + 0x10))(resource_list + 5,resource_name);
  mutex_result = _Mtx_unlock(mutex_address);
  if (mutex_result != 0) {
    __Throw_C_error_std__YAXH_Z(mutex_result);
  }
  return;
}



uint64_t *
cleanup_resource_manager(uint64_t *manager_ptr, uint64_t cleanup_flags, uint64_t context, uint64_t allocator)

{
  *manager_ptr = &RESOURCE_CLEANUP_HANDLER_1809ffa18;
  if ((cleanup_flags & 1) != 0) {
    free(manager_ptr,0x20,context,allocator,0xfffffffffffffffe);
  }
  return manager_ptr;
}





// 函数: void process_command_data(char *command_ptr, int64_t *data_buffer)
// 功能: 处理命令数据，解析命令类型并执行相应的数据处理操作
void process_command_data(char *command_ptr, int64_t *data_buffer)

{
  char command_type;
  char *string_table_ptr;
  int table_index;
  int32_t *buffer_ptr;
  int32_t data_value;
  
  buffer_ptr = (int32_t *)data_buffer[1];
  if ((uint64_t)((*data_buffer - (int64_t)buffer_ptr) + data_buffer[2]) < 5) {
    expand_buffer_capacity(data_buffer,(int64_t)buffer_ptr + (4 - *data_buffer));
    buffer_ptr = (int32_t *)data_buffer[1];
  }
  table_index = 0;
  string_table_ptr = (char *)0x180bf7e28;
  *buffer_ptr = 0;
  data_buffer[1] = data_buffer[1] + 4;
  do {
    if (*string_table_ptr == *command_ptr) {
      write_command_identifier(data_buffer,*(uint64_t *)((int64_t)table_index * 0x10 + 0x180bf7e20));
      break;
    }
    table_index = table_index + 1;
    string_table_ptr = string_table_ptr + 0x10;
  } while ((int64_t)string_table_ptr < 0x180bf7e68);
  write_data_reference(data_buffer,*(uint64_t *)(command_ptr + 0x58));
  write_data_reference(data_buffer,*(int64_t *)(command_ptr + 0x58) + 0x20);
  write_data_reference(data_buffer,*(int64_t *)(command_ptr + 0x58) + 0x40);
  write_command_parameters(data_buffer,command_ptr + 0x10);
  command_type = *command_ptr;
  if (command_type == '\0') {
    buffer_ptr = (int32_t *)data_buffer[1];
    data_value = *(int32_t *)(command_ptr + 0x30);
    if ((uint64_t)((*data_buffer - (int64_t)buffer_ptr) + data_buffer[2]) < 5) {
      expand_buffer_capacity(data_buffer,(int64_t)buffer_ptr + (4 - *data_buffer));
      buffer_ptr = (int32_t *)data_buffer[1];
    }
    *buffer_ptr = data_value;
    data_buffer[1] = data_buffer[1] + 4;
    data_value = *(int32_t *)(command_ptr + 0x34);
  }
  else if (command_type == '\x01') {
    execute_extended_command_sequence();
    execute_extended_command_sequence();
    execute_extended_command_sequence();
    execute_extended_command_sequence();
    execute_extended_command_sequence();
    execute_extended_command_sequence();
    buffer_ptr = (int32_t *)data_buffer[1];
    data_value = *(int32_t *)(command_ptr + 0x34);
    if ((uint64_t)((*data_buffer - (int64_t)buffer_ptr) + data_buffer[2]) < 5) {
      expand_buffer_capacity(data_buffer,(int64_t)buffer_ptr + (4 - *data_buffer));
      buffer_ptr = (int32_t *)data_buffer[1];
    }
    *buffer_ptr = data_value;
    data_buffer[1] = data_buffer[1] + 4;
    buffer_ptr = (int32_t *)data_buffer[1];
    data_value = *(int32_t *)(command_ptr + 0x3c);
    if ((uint64_t)((*data_buffer - (int64_t)buffer_ptr) + data_buffer[2]) < 5) {
      expand_buffer_capacity(data_buffer,(int64_t)buffer_ptr + (4 - *data_buffer));
      buffer_ptr = (int32_t *)data_buffer[1];
    }
    *buffer_ptr = data_value;
    data_buffer[1] = data_buffer[1] + 4;
    buffer_ptr = (int32_t *)data_buffer[1];
    data_value = *(int32_t *)(command_ptr + 0x40);
    if ((uint64_t)((*data_buffer - (int64_t)buffer_ptr) + data_buffer[2]) < 5) {
      expand_buffer_capacity(data_buffer,(int64_t)buffer_ptr + (4 - *data_buffer));
      buffer_ptr = (int32_t *)data_buffer[1];
    }
    *buffer_ptr = data_value;
    data_buffer[1] = data_buffer[1] + 4;
    buffer_ptr = (int32_t *)data_buffer[1];
    data_value = *(int32_t *)(command_ptr + 0x48);
    if ((uint64_t)((*data_buffer - (int64_t)buffer_ptr) + data_buffer[2]) < 5) {
      expand_buffer_capacity(data_buffer,(int64_t)buffer_ptr + (4 - *data_buffer));
      buffer_ptr = (int32_t *)data_buffer[1];
    }
    *buffer_ptr = data_value;
    data_buffer[1] = data_buffer[1] + 4;
    data_value = *(int32_t *)(command_ptr + 0x4c);
  }
  else {
    if (command_type != '\x02') {
      return;
    }
    buffer_ptr = (int32_t *)data_buffer[1];
    data_value = *(int32_t *)(command_ptr + 0x30);
    if ((uint64_t)((*data_buffer - (int64_t)buffer_ptr) + data_buffer[2]) < 5) {
      expand_buffer_capacity(data_buffer,(int64_t)buffer_ptr + (4 - *data_buffer));
      buffer_ptr = (int32_t *)data_buffer[1];
    }
    *buffer_ptr = data_value;
    data_buffer[1] = data_buffer[1] + 4;
    buffer_ptr = (int32_t *)data_buffer[1];
    data_value = *(int32_t *)(command_ptr + 0x3c);
    if ((uint64_t)((*data_buffer - (int64_t)buffer_ptr) + data_buffer[2]) < 5) {
      expand_buffer_capacity(data_buffer,(int64_t)buffer_ptr + (4 - *data_buffer));
      buffer_ptr = (int32_t *)data_buffer[1];
    }
    *buffer_ptr = data_value;
    data_buffer[1] = data_buffer[1] + 4;
    buffer_ptr = (int32_t *)data_buffer[1];
    data_value = *(int32_t *)(command_ptr + 0x40);
    if ((uint64_t)((*data_buffer - (int64_t)buffer_ptr) + data_buffer[2]) < 5) {
      expand_buffer_capacity(data_buffer,(int64_t)buffer_ptr + (4 - *data_buffer));
      buffer_ptr = (int32_t *)data_buffer[1];
    }
    *buffer_ptr = data_value;
    data_buffer[1] = data_buffer[1] + 4;
    buffer_ptr = (int32_t *)data_buffer[1];
    data_value = *(int32_t *)(command_ptr + 0x34);
    if ((uint64_t)((*data_buffer - (int64_t)buffer_ptr) + data_buffer[2]) < 5) {
      expand_buffer_capacity(data_buffer,(int64_t)buffer_ptr + (4 - *data_buffer));
      buffer_ptr = (int32_t *)data_buffer[1];
    }
    *buffer_ptr = data_value;
    data_buffer[1] = data_buffer[1] + 4;
    data_value = *(int32_t *)(command_ptr + 0x38);
  }
  buffer_ptr = (int32_t *)data_buffer[1];
  if ((uint64_t)((*data_buffer - (int64_t)buffer_ptr) + data_buffer[2]) < 5) {
    expand_buffer_capacity(data_buffer,(int64_t)buffer_ptr + (4 - *data_buffer));
    buffer_ptr = (int32_t *)data_buffer[1];
  }
  *buffer_ptr = data_value;
  data_buffer[1] = data_buffer[1] + 4;
  return;
}





// 函数: void write_extended_command_data(int32_t *output_buffer)
// 功能: 写入扩展命令数据，处理多字段数据输出
void write_extended_command_data(int32_t *output_buffer)

{
  int32_t data_field_1;
  int64_t buffer_position;
  int32_t *current_buffer;
  int64_t *buffer_info;
  int64_t command_context;
  
  data_field_1 = *(int32_t *)(command_context + 0x30);
  if ((uint64_t)(buffer_position + buffer_info[2]) < 5) {
    expand_buffer_capacity();
    output_buffer = (int32_t *)buffer_info[1];
  }
  *output_buffer = data_field_1;
  buffer_info[1] = buffer_info[1] + 4;
  current_buffer = (int32_t *)buffer_info[1];
  data_field_1 = *(int32_t *)(command_context + 0x3c);
  if ((uint64_t)((*buffer_info - (int64_t)current_buffer) + buffer_info[2]) < 5) {
    expand_buffer_capacity();
    current_buffer = (int32_t *)buffer_info[1];
  }
  *current_buffer = data_field_1;
  buffer_info[1] = buffer_info[1] + 4;
  current_buffer = (int32_t *)buffer_info[1];
  data_field_1 = *(int32_t *)(command_context + 0x40);
  if ((uint64_t)((*buffer_info - (int64_t)current_buffer) + buffer_info[2]) < 5) {
    expand_buffer_capacity();
    current_buffer = (int32_t *)buffer_info[1];
  }
  *current_buffer = data_field_1;
  buffer_info[1] = buffer_info[1] + 4;
  current_buffer = (int32_t *)buffer_info[1];
  data_field_1 = *(int32_t *)(command_context + 0x34);
  if ((uint64_t)((*buffer_info - (int64_t)current_buffer) + buffer_info[2]) < 5) {
    expand_buffer_capacity();
    current_buffer = (int32_t *)buffer_info[1];
  }
  *current_buffer = data_field_1;
  buffer_info[1] = buffer_info[1] + 4;
  data_field_1 = *(int32_t *)(command_context + 0x38);
  current_buffer = (int32_t *)buffer_info[1];
  if ((uint64_t)((*buffer_info - (int64_t)current_buffer) + buffer_info[2]) < 5) {
    expand_buffer_capacity();
    current_buffer = (int32_t *)buffer_info[1];
  }
  *current_buffer = data_field_1;
  buffer_info[1] = buffer_info[1] + 4;
  return;
}





// 函数: void write_command_data_field(void)
// 功能: 写入命令数据字段，处理数据序列化
void write_command_data_field(void)

{
  int32_t data_field;
  int32_t *current_buffer;
  int64_t *buffer_info;
  int64_t command_context;
  int32_t field_value;
  
  expand_buffer_capacity();
  *(int32_t *)buffer_info[1] = field_value;
  buffer_info[1] = buffer_info[1] + 4;
  current_buffer = (int32_t *)buffer_info[1];
  data_field = *(int32_t *)(command_context + 0x40);
  if ((uint64_t)((*buffer_info - (int64_t)current_buffer) + buffer_info[2]) < 5) {
    expand_buffer_capacity();
    current_buffer = (int32_t *)buffer_info[1];
  }
  *current_buffer = data_field;
  buffer_info[1] = buffer_info[1] + 4;
  current_buffer = (int32_t *)buffer_info[1];
  data_field = *(int32_t *)(command_context + 0x34);
  if ((uint64_t)((*buffer_info - (int64_t)current_buffer) + buffer_info[2]) < 5) {
    expand_buffer_capacity();
    current_buffer = (int32_t *)buffer_info[1];
  }
  *current_buffer = data_field;
  buffer_info[1] = buffer_info[1] + 4;
  data_field = *(int32_t *)(command_context + 0x38);
  current_buffer = (int32_t *)buffer_info[1];
  if ((uint64_t)((*buffer_info - (int64_t)current_buffer) + buffer_info[2]) < 5) {
    expand_buffer_capacity();
    current_buffer = (int32_t *)buffer_info[1];
  }
  *current_buffer = data_field;
  buffer_info[1] = buffer_info[1] + 4;
  return;
}





// 警告：以'_'开头的全局变量与同一地址的较小符号重叠



// 函数: void parse_and_process_command(char *command_data, int64_t parser_context)
// 功能: 解析和处理命令，执行命令识别和数据提取
void parse_and_process_command(char *command_data, int64_t parser_context)

{
  byte *pattern_ptr;
  char command_char;
  uint pattern_length;
  int64_t string_length;
  byte *comparison_ptr;
  int comparison_result;
  uint *data_stream;
  int stream_index;
  int64_t *table_entry;
  int8_t security_buffer[32];
  int8_t validation_flag;
  int32_t processing_status;
  uint64_t data_pointer;
  char *current_command;
  void *format_handler;
  byte *processing_buffer;
  int buffer_index;
  byte command_buffer[1032];
  uint64_t stack_cookie;
  
  data_pointer = 0xfffffffffffffffe;
  stack_cookie = GLOBAL_FORMAT_MESSAGE_180bf00a8 ^ (uint64_t)security_buffer;
  stream_index = 0;
  processing_status = 0;
  *(int64_t *)(parser_context + 8) = *(int64_t *)(parser_context + 8) + 4;
  format_handler = &FORMAT_HANDLER_18098bb30;
  processing_buffer = command_buffer;
  buffer_index = 0;
  command_buffer[0] = 0;
  pattern_length = **(uint **)(parser_context + 8);
  data_stream = *(uint **)(parser_context + 8) + 1;
  *(uint **)(parser_context + 8) = data_stream;
  current_command = command_data;
  if (pattern_length != 0) {
    process_pattern_data(&format_handler,data_stream,pattern_length);
    *(int64_t *)(parser_context + 8) = *(int64_t *)(parser_context + 8) + (uint64_t)pattern_length;
  }
  table_entry = (int64_t *)0x180bf7e20;
  do {
    string_length = -1;
    do {
      string_length = string_length + 1;
    } while (*(char *)(*table_entry + string_length) != '\0');
    comparison_result = (int)string_length;
    if (buffer_index == comparison_result) {
      if (buffer_index != 0) {
        comparison_ptr = processing_buffer;
        do {
          pattern_ptr = comparison_ptr + (*table_entry - (int64_t)processing_buffer);
          comparison_result = (uint)*comparison_ptr - (uint)*pattern_ptr;
          if (comparison_result != 0) break;
          comparison_ptr = comparison_ptr + 1;
        } while (*pattern_ptr != 0);
      }
LAB_180226f1e:
      if (comparison_result == 0) {
        validation_flag = *(int8_t *)((int64_t)stream_index * 0x10 + 0x180bf7e28);
        break;
      }
    }
    else if (buffer_index == 0) goto LAB_180226f1e;
    stream_index = stream_index + 1;
    table_entry = table_entry + 2;
  } while ((int64_t)table_entry < 0x180bf7e60);
  format_handler = &STRING_HANDLER_18098bcb0;
  execute_command_processing(command_data,validation_flag);
  processing_status = 1;
  table_entry = *(int64_t **)(command_data + 0x58);
  pattern_length = **(uint **)(parser_context + 8);
  data_stream = *(uint **)(parser_context + 8) + 1;
  *(uint **)(parser_context + 8) = data_stream;
  if (pattern_length != 0) {
    (**(code **)(*table_entry + 0x18))(table_entry,data_stream,pattern_length);
    *(int64_t *)(parser_context + 8) = *(int64_t *)(parser_context + 8) + (uint64_t)pattern_length;
    data_stream = *(uint **)(parser_context + 8);
  }
  string_length = *(int64_t *)(command_data + 0x58);
  pattern_length = *data_stream;
  data_stream = data_stream + 1;
  *(uint **)(parser_context + 8) = data_stream;
  if (pattern_length != 0) {
    (**(code **)(*(int64_t *)(string_length + 0x20) + 0x18))((int64_t *)(string_length + 0x20),data_stream,pattern_length);
    *(int64_t *)(parser_context + 8) = *(int64_t *)(parser_context + 8) + (uint64_t)pattern_length;
    data_stream = *(uint **)(parser_context + 8);
  }
  string_length = *(int64_t *)(command_data + 0x58);
  pattern_length = *data_stream;
  data_stream = data_stream + 1;
  *(uint **)(parser_context + 8) = data_stream;
  if (pattern_length != 0) {
    (**(code **)(*(int64_t *)(string_length + 0x40) + 0x18))((int64_t *)(string_length + 0x40),data_stream,pattern_length);
    data_stream = (uint *)((uint64_t)pattern_length + *(int64_t *)(parser_context + 8));
  }
  *(uint *)(command_data + 0x10) = *data_stream;
  *(uint *)(command_data + 0x14) = data_stream[1];
  *(uint *)(command_data + 0x18) = data_stream[2];
  *(uint *)(command_data + 0x1c) = data_stream[3];
  *(uint *)(command_data + 0x20) = data_stream[4];
  *(uint *)(command_data + 0x24) = data_stream[5];
  *(uint *)(command_data + 0x28) = data_stream[6];
  *(uint *)(command_data + 0x2c) = data_stream[7];
  data_stream = data_stream + 8;
  *(uint **)(parser_context + 8) = data_stream;
  command_char = *command_data;
  if (command_char == '\0') {
    *(uint *)(command_data + 0x30) = *data_stream;
    *(int64_t *)(parser_context + 8) = *(int64_t *)(parser_context + 8) + 4;
    *(int32_t *)(command_data + 0x34) = **(int32_t **)(parser_context + 8);
  }
  else if (command_char == '\x01') {
    execute_secondary_command_sequence();
    execute_secondary_command_sequence();
    execute_secondary_command_sequence();
    execute_secondary_command_sequence();
    execute_secondary_command_sequence();
    execute_secondary_command_sequence();
    *(int32_t *)(command_data + 0x34) = **(int32_t **)(parser_context + 8);
    *(int64_t *)(parser_context + 8) = *(int64_t *)(parser_context + 8) + 4;
    *(int32_t *)(command_data + 0x3c) = **(int32_t **)(parser_context + 8);
    *(int64_t *)(parser_context + 8) = *(int64_t *)(parser_context + 8) + 4;
    *(int32_t *)(command_data + 0x40) = **(int32_t **)(parser_context + 8);
    *(int64_t *)(parser_context + 8) = *(int64_t *)(parser_context + 8) + 4;
    *(int32_t *)(command_data + 0x48) = **(int32_t **)(parser_context + 8);
    *(int64_t *)(parser_context + 8) = *(int64_t *)(parser_context + 8) + 4;
    *(int32_t *)(command_data + 0x4c) = **(int32_t **)(parser_context + 8);
  }
  else {
    if (command_char != '\x02') goto LAB_1802270fc;
    *(uint *)(command_data + 0x30) = *data_stream;
    *(int64_t *)(parser_context + 8) = *(int64_t *)(parser_context + 8) + 4;
    *(int32_t *)(command_data + 0x3c) = **(int32_t **)(parser_context + 8);
    *(int64_t *)(parser_context + 8) = *(int64_t *)(parser_context + 8) + 4;
    *(int32_t *)(command_data + 0x40) = **(int32_t **)(parser_context + 8);
    *(int64_t *)(parser_context + 8) = *(int64_t *)(parser_context + 8) + 4;
    *(int32_t *)(command_data + 0x34) = **(int32_t **)(parser_context + 8);
    *(int64_t *)(parser_context + 8) = *(int64_t *)(parser_context + 8) + 4;
    *(int32_t *)(command_data + 0x38) = **(int32_t **)(parser_context + 8);
  }
  *(int64_t *)(parser_context + 8) = *(int64_t *)(parser_context + 8) + 4;
LAB_1802270fc:
  // 执行解析后的安全清理
  execute_post_parsing_security_check(stack_cookie ^ (uint64_t)security_buffer);
}





// 函数: void serialize_command_data(int64_t command_id, int64_t *output_buffer)
// 功能: 序列化命令数据，将命令信息转换为可传输的格式
void serialize_command_data(int64_t command_id, int64_t *output_buffer)

{
  int8_t data_byte;
  uint64_t data_field_1;
  uint64_t data_field_2;
  int8_t *byte_ptr;
  uint64_t *field_ptr;
  int32_t *data_ptr;
  
  data_ptr = (int32_t *)output_buffer[1];
  if ((uint64_t)((*output_buffer - (int64_t)data_ptr) + output_buffer[2]) < 5) {
    expand_buffer_capacity(output_buffer,(int64_t)data_ptr + (4 - *output_buffer));
    data_ptr = (int32_t *)output_buffer[1];
  }
  *data_ptr = 0;
  byte_ptr = (int8_t *)(output_buffer[1] + 4);
  output_buffer[1] = (int64_t)byte_ptr;
  data_byte = *(int8_t *)(command_id + 0x18);
  if ((uint64_t)((*output_buffer - (int64_t)byte_ptr) + output_buffer[2]) < 2) {
    expand_buffer_capacity(output_buffer,byte_ptr + (1 - *output_buffer));
    byte_ptr = (int8_t *)output_buffer[1];
  }
  *byte_ptr = data_byte;
  field_ptr = (uint64_t *)(output_buffer[1] + 1);
  output_buffer[1] = (int64_t)field_ptr;
  if ((uint64_t)((*output_buffer - (int64_t)field_ptr) + output_buffer[2]) < 0x11) {
    expand_buffer_capacity(output_buffer,(int64_t)field_ptr + (0x10 - *output_buffer));
    field_ptr = (uint64_t *)output_buffer[1];
  }
  data_field_2 = *(uint64_t *)(command_id + 0x10);
  *field_ptr = *(uint64_t *)(command_id + 8);
  field_ptr[1] = data_field_2;
  output_buffer[1] = output_buffer[1] + 0x10;
  return;
}



// 警告：以'_'开头的全局变量与同一地址的较小符号重叠

uint64_t * create_command_structure(uint64_t context, int64_t parameters)

{
  uint64_t security_token;
  uint64_t *command_structure;
  
  command_structure = (uint64_t *)allocate_memory_block(GLOBAL_MEMORY_POOL_180c8ed18,0x20,8,3,0xfffffffffffffffe);
  *command_structure = &COMMAND_HANDLER_1809ffa18;
  *command_structure = &COMMAND_VTABLE_180a139f0;
  *(int8_t *)(command_structure + 3) = 0;
  command_structure[1] = 0;
  command_structure[2] = 0;
  if (parameters != 0) {
    security_token = *(uint64_t *)(parameters + 0x10);
    command_structure[1] = *(uint64_t *)(parameters + 8);
    command_structure[2] = security_token;
    *(int8_t *)(command_structure + 3) = *(int8_t *)(parameters + 0x18);
  }
  return command_structure;
}



// 警告：以'_'开头的全局变量与同一地址的较小符号重叠