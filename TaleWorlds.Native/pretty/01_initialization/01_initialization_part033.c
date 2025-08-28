#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 01_initialization_part033.c - 初始化模块第33部分
// 包含8个函数，主要处理控制台输出、字符串处理和系统初始化功能

// 函数: void initialize_console_output_system(int *output_counter)
// 功能: 初始化控制台输出系统，设置输出计数器并进行相关检查
void initialize_console_output_system(int *output_counter)

{
  char cVar1;
  char cVar2;
  int32_t uVar3;
  int64_t lVar4;
  int32_t *puVar5;
  char *pcVar6;
  uint64_t *puVar7;
  int iVar8;
  uint64_t uVar9;
  int8_t auStack_1f8 [64];
  int16_t auStack_1b8 [4];
  void *puStack_1b0;
  int32_t *puStack_1a8;
  int32_t uStack_1a0;
  uint64_t uStack_198;
  int32_t uStack_190;
  void *puStack_188;
  int64_t lStack_180;
  int32_t uStack_170;
  int64_t lStack_168;
  int64_t lStack_160;
  uint64_t uStack_158;
  int32_t uStack_150;
  uint64_t uStack_148;
  uint64_t uStack_38;
  
  uStack_148 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1f8;
  iVar8 = 0;
  uStack_190 = 0;
  output_counter = output_counter + 1;
  if ((*(int64_t *)(output_counter + 4) != 0) && (*(int64_t *)(output_counter + 2) != 0)) {
                    // WARNING: Subroutine does not return
    check_system_security(_SECURITY_CHECK_VALUE ^ (uint64_t)stack_buffer);
  }
  lStack_168 = 0;
  lStack_160 = 0;
  uStack_158 = 0;
  uStack_150 = 3;
  lVar4 = CoreEngineDataTransformer(&puStack_188,system_main_module_state + 0x2c0);
  uStack_190 = 1;
  auStack_1b8[0] = 0x20;
  if (*(int64_t *)(resource_handle + 8) != 0) {
    process_resource_data(resource_handle,&temp_buffer_1,buffer_config);
  }
  uStack_190 = 0;
  puStack_188 = &system_data_buffer_ptr;
  if (temp_buffer_2 != 0) {
                    // WARNING: Subroutine does not return
    trigger_system_error();
  }
  lStack_180 = 0;
  uStack_170 = 0;
  puStack_188 = &system_state_ptr;
  puStack_1b0 = &system_data_buffer_ptr;
  uStack_198 = 0;
  puStack_1a8 = (int32_t *)0x0;
  uStack_1a0 = 0;
  string_buffer = allocate_string_buffer(_STRING_BUFFER_CONFIG,0x13,0x13);
  *(int8_t *)string_buffer = 0;
  buffer_ptr = string_buffer;
  buffer_flags = set_buffer_flags(string_buffer);
  output_config = CONCAT44(output_config._4_4_,buffer_flags);
  *string_buffer = 0x5f657375;
  string_buffer[1] = 0x65726170;
  string_buffer[2] = 0x635f746e;
  string_buffer[3] = 0x6f736e6f;
  *(int16_t *)(string_buffer + 4) = 0x656c;
  *(int8_t *)((int64_t)string_buffer + 0x12) = 0;
  buffer_length = 0x12;
  uVar9 = lStack_160 - lStack_168 >> 5;
  if (uVar9 != 0) {
    puVar7 = (uint64_t *)(lStack_168 + 8);
    do {
      if (*(int *)(puVar7 + 1) == 0x12) {
        pcVar6 = (char *)*puVar7;
        lVar4 = (int64_t)puVar5 - (int64_t)pcVar6;
        do {
          cVar1 = *pcVar6;
          cVar2 = pcVar6[lVar4];
          if (cVar1 != cVar2) break;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) break;
      }
      iVar8 = iVar8 + 1;
      puVar7 = puVar7 + 4;
    } while ((uint64_t)(int64_t)iVar8 < uVar9);
  }
  puStack_1b0 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  release_string_buffer(string_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: bool set_console_color_theme(unsigned long console_handle, unsigned int color_index)
// 功能: 根据颜色索引设置控制台文本颜色主题
bool set_console_color_theme(unsigned long console_handle, unsigned int color_index)

{
  int16_t uVar1;
  int iVar2;
  
  switch(color_index) {
  case 0:
    color_code = 4;    // 红色
    break;
  case 1:
    color_code = 2;    // 绿色
    break;
  case 2:
    color_code = 1;    // 蓝色
    break;
  case 3:
    color_code = 0xc;   // 浅红色
    break;
  case 4:
    color_code = 10;   // 浅绿色
    break;
  case 5:
    color_code = 9;    // 浅蓝色
    break;
  case 6:
    color_code = 3;    // 青色
    break;
  case 7:
    color_code = 0xb;   // 浅青色
    break;
  case 8:
    color_code = 6;    // 黄色
    break;
  case 9:
    color_code = 0xe;   // 浅黄色
    break;
  case 10:
    color_code = 5;    // 紫色
    break;
  case 0xb:
    color_code = 0xd;   // 浅紫色
    break;
  case 0xc:
    color_code = 7;    // 白色
    break;
  default:
    color_code = 0xf;   // 亮白色
  }
  result = SetConsoleTextAttribute(_CONSOLE_HANDLE,color_code);
  if (result == 0) {
    log_error_message(&_ERROR_MESSAGE);
    return false;
  }
  return true;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void process_initialization_command(int64_t command_data)
// 功能: 处理初始化命令，根据命令类型执行相应的初始化操作
void process_initialization_command(int64_t command_data)

{
  uint uVar1;
  uint uVar2;
  int32_t uVar3;
  int iVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int iVar8;
  void *puVar9;
  void *puVar10;
  uint auStackX_8 [4];
  int8_t auStackX_18 [8];
  uint auStackX_20 [2];
  void *puStack_70;
  uint64_t *puStack_68;
  int32_t uStack_60;
  uint64_t uStack_58;
  
  command_type = *(uint *)(command_data + 0x28);
  if (command_type < 9) {
    switch(command_type) {
    case 1:  // 初始化日志系统
      log_config[0] = log_config[0] & 0xffffff00;
      log_message = &DEFAULT_LOG_MESSAGE;
      if (*(void **)(command_data + 0x38) != (void *)0x0) {
        log_message = *(void **)(command_data + 0x38);
      }
      initialize_logging_system(*(int64_t *)(command_data + 0x20) + 0x20,log_message,log_config);
      log_system = (int64_t *)(*(int64_t *)(command_data + 0x20) + 0x20);
      (**(code **)(*log_system + 0x108))(log_system,1);
      log_system = (int64_t *)(*(int64_t *)(command_data + 0x20) + 0x20);
      (**(code **)(*log_system + 0x70))(log_system,&LOG_SYSTEM_CONFIG);
      puStack_70 = &system_data_buffer_ptr;
      uStack_58 = 0;
      puStack_68 = (uint64_t *)0x0;
      uStack_60 = 0;
      puVar5 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
      *(int8_t *)puVar5 = 0;
      puStack_68 = puVar5;
      uVar3 = CoreEngineSystemCleanup(puVar5);
      uStack_58 = CONCAT44(uStack_58._4_4_,uVar3);
      *puVar5 = 0x73726f7272655f;
      uStack_60 = 7;
      iVar8 = *(int *)(param_1 + 0x40) + -1;
      if (-1 < iVar8) {
        lVar6 = (int64_t)iVar8;
        do {
          if (*(char *)(lVar6 + *(int64_t *)(param_1 + 0x38)) == '_') goto code_r0x0001800630e9;
          iVar8 = iVar8 + -1;
          lVar6 = lVar6 + -1;
        } while (-1 < lVar6);
      }
      iVar8 = -1;
code_r0x0001800630e9:
      FUN_1806288c0(param_1 + 0x30,iVar8,&puStack_70);
      puStack_70 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar5);
    case 2:
      plVar7 = (int64_t *)(*(int64_t *)(param_1 + 0x20) + 0xd8);
      (**(code **)(*plVar7 + 0x70))(plVar7,&memory_allocator_32_ptr);
      FUN_180639250(*(int64_t *)(param_1 + 0x20) + 0xd8);
      plVar7 = (int64_t *)(*(int64_t *)(param_1 + 0x20) + 0x20);
      (**(code **)(*plVar7 + 0x70))(plVar7,&memory_allocator_32_ptr);
      FUN_180639250(*(int64_t *)(param_1 + 0x20) + 0x20);
      if (((*(byte *)(*(int64_t *)(param_1 + 0x20) + 8) & 2) != 0) &&
         (iRam0000000180c912e0 = iRam0000000180c912e0 + -1, iRam0000000180c912e0 == 0)) {
        init_system_data_buffer = 0;
        lRam0000000180c912e8 = 0;
        LOCK();
        init_system_config_buffer = 0;
        UNLOCK();
        FreeConsole();
      }
      *(int32_t *)(*(int64_t *)(param_1 + 0x20) + 8) = 0xe;
      *(uint64_t *)(*(int64_t *)(param_1 + 0x20) + 0x10) = 0xffffffff00000000;
      *(int8_t *)(*(int64_t *)(param_1 + 0x20) + 0x18) = 0;
      **(uint64_t **)(param_1 + 0x20) = 0;
      break;
    case 3:
      plVar7 = (int64_t *)(*(int64_t *)(param_1 + 0x20) + 0xd8);
      (**(code **)(*plVar7 + 0x70))(plVar7,&memory_allocator_32_ptr);
      FUN_180639250(*(int64_t *)(param_1 + 0x20) + 0xd8);
      FUN_18062da70(*(int64_t *)(param_1 + 0x20) + 0xe0);
      break;
    case 4:
      auStackX_18[0] = 0;
      puVar9 = *(void **)(*(int64_t *)(param_1 + 0x20) + 0xe8);
      puVar10 = &system_buffer_ptr;
      if (puVar9 != (void *)0x0) {
        puVar10 = puVar9;
      }
      FUN_1806391a0(*(int64_t *)(param_1 + 0x20) + 0xd8,puVar10,auStackX_18);
      plVar7 = (int64_t *)(*(int64_t *)(param_1 + 0x20) + 0xd8);
      (**(code **)(*plVar7 + 0x108))(plVar7,1);
      plVar7 = (int64_t *)(*(int64_t *)(param_1 + 0x20) + 0xd8);
      (**(code **)(*plVar7 + 0x70))(plVar7,&processed_var_9984_ptr);
      break;
    case 5:
      iVar8 = *(int *)(param_1 + 0x58);
      if ((*(int *)(init_system_data_buffer + 0x150) <= iVar8) &&
         (puVar5 = *(uint64_t **)(param_1 + 0x20),
         (*(uint64_t *)(param_1 + 0x60) & puVar5[2]) != 0)) {
        uVar2 = *(uint *)(param_1 + 0x40);
        puVar9 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x38) != (void *)0x0) {
          puVar9 = *(void **)(param_1 + 0x38);
        }
        if ((*(byte *)(puVar5 + 1) & 2) != 0) {
          FUN_180062ee0((uint64_t)*(uint *)(&system_buffer_3480 + (int64_t)(int)uVar1 * 4) +
                        0x180000000,*(int32_t *)(param_1 + 0x50));
          iVar4 = WriteConsoleA(init_system_data_buffer,puVar9,uVar2,auStackX_20,0);
          if ((iVar4 == 0) || (auStackX_20[0] < uVar2)) {
            FUN_18005d3a0(&processed_var_92_ptr,puVar9);
          }
          iVar4 = SetConsoleTextAttribute(init_system_data_buffer,0xf);
          if (iVar4 == 0) {
            FUN_18005d3a0(&processed_var_9952_ptr);
          }
        }
        if ((*(byte *)(puVar5 + 1) & 8) != 0) {
          (**(code **)(puVar5[4] + 0x70))(puVar5 + 4,puVar9);
          if (1 < iVar8) {
            (**(code **)(puVar5[0x1b] + 0x70))(puVar5 + 0x1b,puVar9);
          }
        }
        if ((code *)*puVar5 != (code *)0x0) {
          (*(code *)*puVar5)(puVar9);
        }
      }
      break;
    case 6:
      if ((*(byte *)(*(int64_t *)(param_1 + 0x20) + 8) & 8) != 0) {
        (**(code **)(*(int64_t *)(*(int64_t *)(param_1 + 0x20) + 0x20) + 0x118))();
        (**(code **)(*(int64_t *)(*(int64_t *)(param_1 + 0x20) + 0xd8) + 0x118))();
      }
      break;
    case 7:
      *(uint64_t *)(*(int64_t *)(param_1 + 0x20) + 0x10) = *(uint64_t *)(param_1 + 0x60);
      break;
    case 8:
      if ((init_system_data_buffer != 0) && (lRam0000000180c912e8 != 0)) {
        auStackX_8[0] = *(uint *)(param_1 + 0x68);
        SetConsoleScreenBufferSize(init_system_data_buffer,auStackX_8[0]);
      }
    }
  }
  else {
    SystemDataInitializer(&processed_var_56_ptr);
  }
  return;
}



// 函数: int format_string_with_args(void *buffer, void *format, void *arg_list, void *extra_arg)
// 功能: 使用参数列表格式化字符串，类似于sprintf_s的安全版本
int format_string_with_args(void *buffer, void *format, void *arg_list, void *extra_arg)

{
  int result;
  uint64_t *stdio_config;
  uint64_t extra_param;
  
  extra_param = extra_arg;
  stdio_config = (uint64_t *)get_stdio_common_config();
  result = __stdio_common_vsprintf_s(*stdio_config,buffer,format,arg_list,0,&extra_param);
  if (result < 0) {
    result = -1;
  }
  return result;
}



// 函数: uint64_t find_string_in_hash_table(int64_t *hash_table, int64_t search_key)
// 功能: 在哈希表中查找字符串，返回查找结果
uint64_t find_string_in_hash_table(int64_t *hash_table, int64_t search_key)

{
  byte *string_ptr1;
  uint hash_value1;
  uint hash_value2;
  int64_t table_offset;
  uint64_t result;
  byte *string_ptr2;
  uint char_diff;
  uint64_t entry_count;
  int64_t string_length;
  int compare_index;
  int64_t current_entry;
  
  table_offset = *hash_table;
  compare_index = 0;
  entry_count = hash_table[1] - table_offset >> 5;
  if (entry_count != 0) {
    hash_value2 = *(uint *)(search_key + 0x10);
    current_entry = 0;
    do {
      hash_value1 = *(uint *)(current_entry + 0x10 + table_offset);
      string_ptr2 = (byte *)(uint64_t)hash_value1;
      char_diff = hash_value2;
      if (hash_value1 == hash_value2) {
        if (hash_value1 != 0) {
          string_ptr2 = *(byte **)(current_entry + 8 + table_offset);
          string_length = *(int64_t *)(search_key + 8) - (int64_t)string_ptr2;
          do {
            string_ptr1 = string_ptr2 + string_length;
            char_diff = (uint)*string_ptr2 - (uint)*string_ptr1;
            if (char_diff != 0) break;
            string_ptr2 = string_ptr2 + 1;
          } while (*string_ptr1 != 0);
        }
found_match:
        if (char_diff == 0) {
          return CONCAT71((int7)((uint64_t)string_ptr2 >> 8),1);
        }
      }
      else if (hash_value1 == 0) goto found_match;
      compare_index = compare_index + 1;
      current_entry = current_entry + 0x20;
      result = (uint64_t)compare_index;
    } while (result < entry_count);
  }
  return result & 0xffffffffffffff00;
}





// 函数: void initialize_string_formatter(void)
// 功能: 初始化字符串格式化系统
void initialize_string_formatter(void)

{
  setup_string_formatting();
  return;
}



// 函数: int format_string_unsafe(void *buffer, void *format, void *arg_list, void *extra_arg)
// 功能: 不安全版本的字符串格式化，使用stdio_common_vsprintf
int format_string_unsafe(void *buffer, void *format, void *arg_list, void *extra_arg)

{
  int result;
  uint64_t *stdio_config;
  
  stdio_config = (uint64_t *)get_stdio_common_config();
  result = __stdio_common_vsprintf(*stdio_config | 2,buffer,format,arg_list,0,extra_arg);
  if (result < 0) {
    result = -1;
  }
  return result;
}



// 函数: uint64_t *cleanup_string_buffer(uint64_t *buffer_ptr, uint64_t flags, uint64_t param3, uint64_t param4)
// 功能: 清理字符串缓冲区，根据标志决定是否释放内存
uint64_t *cleanup_string_buffer(uint64_t *buffer_ptr, uint64_t flags, uint64_t param3, uint64_t param4)

{
  buffer_ptr[6] = &system_data_buffer_ptr;
  if (buffer_ptr[7] != 0) {
                    // WARNING: Subroutine does not return
    release_string_buffer();
  }
  buffer_ptr[7] = 0;
  *(int32_t *)(buffer_ptr + 9) = 0;
  buffer_ptr[6] = &system_state_ptr;
  *buffer_ptr = &ui_system_data_1000_ptr;
  *buffer_ptr = &system_handler2_ptr;
  *buffer_ptr = &system_handler1_ptr;
  if ((flags & 1) != 0) {
    free(buffer_ptr,0x70,param3,param4,0xfffffffffffffffe);
  }
  return buffer_ptr;
}



// 函数: uint64_t *initialize_string_buffer_with_config(uint64_t *buffer_ptr, int32_t config, uint64_t param3, uint64_t param4)
// 功能: 使用配置初始化字符串缓冲区
uint64_t *initialize_string_buffer_with_config(uint64_t *buffer_ptr, int32_t config, uint64_t param3, uint64_t param4)

{
  int64_t *buffer_manager;
  
  *buffer_ptr = &system_handler1_ptr;
  *buffer_ptr = &system_handler2_ptr;
  *(int32_t *)(buffer_ptr + 1) = 0;
  *buffer_ptr = &ui_system_data_1000_ptr;
  LOCK();
  *(int8_t *)(buffer_ptr + 2) = 0;
  UNLOCK();
  buffer_ptr[3] = 0xffffffffffffffff;
  *buffer_ptr = &ui_system_data_128_ptr;
  buffer_manager = buffer_ptr + 6;
  *buffer_manager = (int64_t)&system_state_ptr;
  buffer_ptr[7] = 0;
  *(int32_t *)(buffer_ptr + 8) = 0;
  *buffer_manager = (int64_t)&system_data_buffer_ptr;
  buffer_ptr[9] = 0;
  buffer_ptr[7] = 0;
  *(int32_t *)(buffer_ptr + 8) = 0;
  *(int32_t *)(buffer_ptr + 5) = config;
  buffer_ptr[4] = param3;
  (**(code **)(*buffer_manager + 0x10))(buffer_manager,&system_buffer_ptr,param3,param4,0xfffffffffffffffe);
  *(int32_t *)(buffer_ptr + 10) = 0xd;
  *(uint64_t *)((int64_t)buffer_ptr + 0x54) = 0xe;
  buffer_ptr[0xc] = 0xffffffff00000000;
  *(int32_t *)(buffer_ptr + 0xd) = 0;
  return buffer_ptr;
}



// 函数: int64_t setup_function_pointer_table(int64_t table_ptr)
// 功能: 设置函数指针表，用于初始化或其他配置
int64_t setup_function_pointer_table(int64_t table_ptr)

{
  *(uint64_t *)(table_ptr + 0x10) = 0;
  *(code **)(table_ptr + 0x18) = initialize_module_functions;
  return table_ptr;
}



// 函数: int64_t setup_security_function_pointer(int64_t table_ptr)
// 功能: 设置安全相关的函数指针，使用guard检查
int64_t setup_security_function_pointer(int64_t table_ptr)

{
  *(uint64_t *)(table_ptr + 0x10) = 0;
  *(code **)(table_ptr + 0x18) = _guard_check_icall;
  return table_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void initialize_system_buffers(uint64_t system_param)
// 功能: 初始化系统缓冲区，包括安全检查和内存清零
void initialize_system_buffers(uint64_t system_param)

{
  int8_t security_buffer [96];
  int8_t config_buffer [64];
  uint64_t stack_cookie;
  uint64_t param_value;
  int8_t zero_buffer [512];
  uint64_t security_check;
  
  stack_cookie = 0xfffffffffffffffe;
  security_check = GET_SECURITY_COOKIE() ^ (uint64_t)security_buffer;
  param_value = system_param;
  initialize_buffer_manager(config_buffer,system_message_context + 0x28);
                    // WARNING: Subroutine does not return
  memset(zero_buffer,0,0x200);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void write_log_to_file(uint64_t file_handle, int64_t message_data)
// 功能: 将日志消息写入文件，包括系统信息和自定义消息
void write_log_to_file(uint64_t file_handle, int64_t message_data)

{
  char *message_ptr;
  void *default_message;
  int64_t message_length;
  int64_t system_prefix_length;
  int64_t temp_var1;
  int64_t temp_var2;
  uint64_t log_buffer;
  int64_t file_stream;
  void *message_ptr2;
  void *message_ptr3;
  int32_t stack_var;
  
  log_buffer = 0;
  file_stream = 0;
  initialize_file_stream(file_handle,&message_ptr2,&processed_var_560_ptr);
  default_message = &system_buffer_ptr;
  if (message_ptr3 != (void *)0x0) {
    default_message = message_ptr3;
  }
  initialize_log_buffer(&log_buffer,default_message,&processed_var_572_ptr);
  file_stream2 = file_stream;
  temp_var2 = -1;
  message_length = temp_var2;
  system_prefix_length = temp_var2;
  if (message_data != 0) {
    do {
      message_length = message_length + 1;
    } while (*(char *)(message_data + message_length) != '\0');
    if (message_length != 0) {
      fwrite(message_data,message_length,1,file_stream);
    }
  }
  do {
    message_length = system_prefix_length + 1;
    message_ptr = (char *)(system_prefix_length + 0x180c84871);
    system_prefix_length = message_length;
  } while (*message_ptr != '\0');
  if (message_length != 0) {
    fwrite(&system_buffer_e810,0x30,1,file_stream2);
    fwrite(&system_buffer_4870,message_length,1,file_stream2);
  }
  fclose(file_stream);
  return;
}


// 函数: void scan_file_system(void)
// 功能: 扫描文件系统，查找特定文件并执行相关操作
void scan_file_system(void)

{
  void *file_path;
  bool is_match;
  uint64_t *file_list1;
  uint64_t *file_list2;
  uint64_t *file_list3;
  int file_length;
  int64_t char_index1;
  int64_t char_index2;
  void *file_name;
  uint file_count;
  uint64_t *current_file;
  uint64_t scan_index;
  int best_match_index;
  int64_t latest_time;
  uint total_files;
  int8_t security_buffer [32];
  uint64_t *file_array1;
  uint64_t *file_array2;
  uint64_t array1_size;
  int32_t array1_flags;
  uint64_t *file_array3;
  uint64_t *file_array4;
  uint64_t array2_size;
  int32_t array2_flags;
  void *file_scanner;
  int64_t scanner_handle;
  int32_t scanner_flags;
  uint64_t stack_cookie;
  int8_t stat_buffer [32];
  int64_t file_time;
  int8_t zero_buffer [512];
  uint64_t security_check;
  uint64_t file_index;
  
  stack_cookie = 0xfffffffffffffffe;
  security_check = GET_SECURITY_COOKIE() ^ (uint64_t)security_buffer;
  file_index = 0;
  initialize_file_scanner(&file_scanner);
  file_array1 = (uint64_t *)0x0;
  file_array2 = (uint64_t *)0x0;
  array1_size = 0;
  array1_flags = 3;
  file_array3 = (uint64_t *)0x0;
  file_array4 = (uint64_t *)0x0;
  array2_size = 0;
  array2_flags = 3;
  populate_file_arrays(&file_scanner,&file_array1,&file_array3);
  best_match_index = -1;
  latest_time = -0x8000000000000000;
  total_files = (uint)((int64_t)file_array2 - (int64_t)file_array1 >> 5);
  scan_index = file_index;
  file_list1 = file_array2;
  current_file = file_array3;
  file_list2 = file_array4;
  if (total_files != 0) {
    do {
      file_length = *(int *)((int64_t)file_array1 + scan_index + 0x10);
      if (file_length < 4) {
not_found:
        is_match = false;
      }
      else {
        char_index1 = 0;
        do {
          char_index2 = char_index1 + 1;
          if (*(char *)(*(int64_t *)((int64_t)file_array1 + scan_index + 8) + (int64_t)(file_length + -4) +
                       char_index1) != (&processed_var_652_ptr)[char_index1]) goto not_found;
          char_index1 = char_index2;
        } while (char_index2 != 5);
        is_match = true;
      }
      if (is_match) {
        file_path = *(void **)((int64_t)file_array1 + scan_index + 8);
        file_name = &system_buffer_ptr;
        if (file_path != (void *)0x0) {
          file_name = file_path;
        }
        file_length = _stat64i32(file_name,stat_buffer);
        if ((file_length != -1) && (latest_time < file_time)) {
          latest_time = file_time;
          best_match_index = (int)file_index;
        }
      }
      file_count = (int)file_index + 1;
      file_index = (uint64_t)file_count;
      scan_index = scan_index + 0x20;
    } while (file_count < total_files);
    file_list1 = file_array2;
    current_file = file_array3;
    file_list2 = file_array4;
    if (-1 < best_match_index) {
                    // WARNING: Subroutine does not return
      memset(zero_buffer,0,0x200);
    }
  }
  for (; puVar5 = puStack_2a8, puStack_2d0 = puVar3, puVar12 != puStack_2a8; puVar12 = puVar12 + 4)
  {
    puStack_2a8 = puVar4;
    (**(code **)*puVar12)(puVar12,0);
    puVar3 = puStack_2d0;
    puVar4 = puStack_2a8;
    puStack_2a8 = puVar5;
  }
  if (puStack_2b0 == (uint64_t *)0x0) {
    puStack_2b0 = (uint64_t *)0x0;
    puStack_2a8 = puVar4;
    for (puVar12 = puStack_2d8; puVar12 != puVar3; puVar12 = puVar12 + 4) {
      (**(code **)*puVar12)(puVar12,0);
    }
    if (puStack_2d8 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    puStack_290 = &system_data_buffer_ptr;
    if (lStack_288 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_288 = 0;
    uStack_278 = 0;
    puStack_290 = &system_state_ptr;
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_2f8);
  }
  puStack_2a8 = puVar4;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180064010(uint64_t param_1)
void FUN_180064010(uint64_t param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  void *puVar3;
  uint64_t *puVar4;
  int8_t auStack_358 [64];
  uint64_t *puStack_318;
  uint64_t *puStack_310;
  uint64_t uStack_308;
  int32_t uStack_300;
  uint64_t uStack_2f8;
  int64_t lStack_2f0;
  uint64_t uStack_2e0;
  int64_t lStack_2d8;
  uint64_t *puStack_2c0;
  uint64_t *puStack_2b8;
  uint64_t uStack_2b0;
  int32_t uStack_2a8;
  void *puStack_2a0;
  int64_t lStack_298;
  int32_t uStack_288;
  void *puStack_280;
  void *puStack_278;
  int32_t uStack_268;
  void *puStack_260;
  void *puStack_258;
  int32_t uStack_248;
  uint64_t uStack_240;
  int8_t auStack_238 [512];
  uint64_t uStack_38;
  
  uStack_240 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_358;
  FUN_1800ba940(&puStack_2a0);
  puStack_318 = (uint64_t *)0x0;
  puStack_310 = (uint64_t *)0x0;
  uStack_308 = 0;
  uStack_300 = 3;
  puStack_2c0 = (uint64_t *)0x0;
  puStack_2b8 = (uint64_t *)0x0;
  uStack_2b0 = 0;
  uStack_2a8 = 3;
  FUN_18062d3b0(&puStack_2a0,&puStack_318,&puStack_2c0);
  puVar2 = puStack_2b8;
  puVar1 = puStack_310;
  puVar4 = puStack_2c0;
  if ((int)((int64_t)puStack_310 - (int64_t)puStack_318 >> 5) != 0) {
                    // WARNING: Subroutine does not return
    memset(auStack_238,0,0x200);
  }
  for (; puStack_310 = puVar1, puVar4 != puVar2; puVar4 = puVar4 + 4) {
    (**(code **)*puVar4)(puVar4,0);
    puVar1 = puStack_310;
  }
  if (puStack_2c0 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_2c0 = (uint64_t *)0x0;
  for (puVar4 = puStack_318; puVar4 != puVar1; puVar4 = puVar4 + 4) {
    (**(code **)*puVar4)(puVar4,0);
  }
  if (puStack_318 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_2a0 = &system_data_buffer_ptr;
  if (lStack_298 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_298 = 0;
  uStack_288 = 0;
  puStack_2a0 = &system_state_ptr;
  uStack_2f8 = 0;
  lStack_2f0 = 0;
  FUN_180627e10(param_1,&puStack_280,&processed_var_664_ptr);
  puVar3 = &system_buffer_ptr;
  if (puStack_278 != (void *)0x0) {
    puVar3 = puStack_278;
  }
  FUN_18062dee0(&uStack_2f8,puVar3,&processed_var_572_ptr);
  FUN_1800ae730(SYSTEM_STATE_MANAGER,&uStack_2f8);
  if (lStack_2f0 != 0) {
    fclose();
    lStack_2f0 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
  }
  puStack_280 = &system_data_buffer_ptr;
  if (puStack_278 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_278 = (void *)0x0;
  uStack_268 = 0;
  puStack_280 = &system_state_ptr;
  if (lStack_2f0 != 0) {
    fclose();
    lStack_2f0 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
  }
  uStack_2e0 = 0;
  lStack_2d8 = 0;
  FUN_180627e10(param_1,&puStack_260,&processed_var_688_ptr);
  puVar3 = &system_buffer_ptr;
  if (puStack_258 != (void *)0x0) {
    puVar3 = puStack_258;
  }
  FUN_18062dee0(&uStack_2e0,puVar3,&processed_var_572_ptr);
  FUN_1800ae730(init_system_data_buffer,&uStack_2e0);
  if (lStack_2d8 != 0) {
    fclose();
    lStack_2d8 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
  }
  puStack_260 = &system_data_buffer_ptr;
  if (puStack_258 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_258 = (void *)0x0;
  uStack_248 = 0;
  puStack_260 = &system_state_ptr;
  if (lStack_2d8 != 0) {
    fclose();
    lStack_2d8 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_358);
}





// 函数: void initialize_system_resources(void)
// 功能: 初始化系统资源，调用底层初始化函数
void initialize_system_resources(void)

{
                    // WARNING: Subroutine does not return
  initialize_core_system();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: uint64_t process_file_operations(uint64_t file_handle)
// 功能: 处理文件操作，包括文件读取、写入和资源管理
uint64_t process_file_operations(uint64_t file_handle)

{
  char status_char;
  uint64_t operation_result;
  void *default_path;
  uint64_t *file_list1;
  int64_t file_handle2;
  uint64_t *file_list2;
  uint64_t *file_list3;
  void *output_buffer;
  int64_t stream_handle;
  int buffer_size;
  uint64_t buffer_pos;
  uint64_t *file_array1;
  uint64_t *file_array2;
  uint64_t array1_size;
  int32_t array1_flags;
  uint64_t log_buffer;
  int64_t log_handle;
  void *message_ptr;
  void *custom_message;
  int32_t message_flags;
  uint64_t stack_cookie;
  
  stack_cookie = 0xfffffffffffffffe;
  file_array1 = (uint64_t *)0x0;
  file_array2 = (uint64_t *)0x0;
  array1_size = 0;
  array1_flags = 3;
  status_char = initialize_system_resources(&file_array1);
  file_list3 = file_array2;
  file_list2 = file_array1;
  if ((status_char == '\0') || (file_array1 == file_array2)) {
    log_system_message(system_message_context,5,3,&processed_var_736_ptr);
    operation_result = get_operation_result();
    file_list1 = file_list2;
  }
  else {
    log_buffer = 0;
    log_handle = 0;
    initialize_file_stream(file_handle,&message_ptr,&processed_var_712_ptr);
    default_path = &system_buffer_ptr;
    if (custom_message != (void *)0x0) {
      default_path = custom_message;
    }
    initialize_log_buffer(&log_buffer,default_path,&processed_var_572_ptr);
    operation_result = (int64_t)file_list3 - (int64_t)file_list2 >> 5;
    output_buffer = &system_data_buffer_ptr;
    buffer_pos = 0;
    stream_handle = 0;
    buffer_size = 0;
    if ((int)operation_result != 0) {
      file_list1 = file_list2 + 1;
      operation_result = operation_result & 0xffffffff;
      do {
        default_path = &system_buffer_ptr;
        if ((void *)*file_list1 != (void *)0x0) {
          default_path = (void *)*file_list1;
        }
        write_error_message(&output_buffer,&processed_var_92_ptr,default_path);
        file_list1 = file_list1 + 4;
        operation_result = operation_result - 1;
      } while (operation_result != 0);
    }
    file_handle2 = log_handle;
    operation_result = fwrite(stream_handle,1,(int64_t)buffer_size,log_handle);
    if (file_handle2 != 0) {
      fclose(file_handle2);
      log_handle = 0;
      LOCK();
      operation_result = (uint64_t)SYSTEM_FILE_COUNTER_ADDR;
      UNLOCK();
      file_handle2 = 0;
      file_list2 = file_array1;
      file_list3 = file_array2;
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR - 1;
    }
    output_buffer = &system_data_buffer_ptr;
    if (stream_handle != 0) {
                    // WARNING: Subroutine does not return
      release_string_buffer();
    }
    stream_handle = 0;
    buffer_pos = buffer_pos & 0xffffffff00000000;
    output_buffer = &system_state_ptr;
    message_ptr = &system_data_buffer_ptr;
    if (custom_message != (void *)0x0) {
                    // WARNING: Subroutine does not return
      release_string_buffer();
    }
    custom_message = (void *)0x0;
    message_flags = 0;
    message_ptr = &system_state_ptr;
    file_list1 = file_list2;
    if (file_handle2 != 0) {
      operation_result = fclose(file_handle2);
      log_handle = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR - 1;
      UNLOCK();
      file_list2 = file_array1;
      file_list3 = file_array2;
      file_list1 = file_array1;
    }
  }
  for (; file_list2 != file_list3; file_list2 = file_list2 + 4) {
    operation_result = (**(code **)*file_list2)(file_list2,0);
  }
  if (file_list1 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    release_string_buffer(file_list1);
  }
  return operation_result;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



