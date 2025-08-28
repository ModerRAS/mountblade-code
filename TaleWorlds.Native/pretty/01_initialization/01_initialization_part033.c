#include "TaleWorlds.Native.Split.h"

// 01_initialization_part033.c - 初始化模块第33部分
// 包含8个函数，主要处理控制台输出、字符串处理和系统初始化功能

// 函数: void initialize_console_output_system(int *output_counter)
// 功能: 初始化控制台输出系统，设置输出计数器并进行相关检查
void initialize_console_output_system(int *output_counter)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_1f8 [64];
  undefined2 auStack_1b8 [4];
  undefined *puStack_1b0;
  undefined4 *puStack_1a8;
  undefined4 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined *puStack_188;
  longlong lStack_180;
  undefined4 uStack_170;
  longlong lStack_168;
  longlong lStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_148;
  ulonglong uStack_38;
  
  uStack_148 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_1f8;
  iVar8 = 0;
  uStack_190 = 0;
  output_counter = output_counter + 1;
  if ((*(longlong *)(output_counter + 4) != 0) && (*(longlong *)(output_counter + 2) != 0)) {
                    // WARNING: Subroutine does not return
    check_system_security(_SECURITY_CHECK_VALUE ^ (ulonglong)stack_buffer);
  }
  lStack_168 = 0;
  lStack_160 = 0;
  uStack_158 = 0;
  uStack_150 = 3;
  lVar4 = FUN_180627ae0(&puStack_188,_DAT_180c86870 + 0x2c0);
  uStack_190 = 1;
  auStack_1b8[0] = 0x20;
  if (*(longlong *)(resource_handle + 8) != 0) {
    process_resource_data(resource_handle,&temp_buffer_1,buffer_config);
  }
  uStack_190 = 0;
  puStack_188 = &UNK_180a3c3e0;
  if (temp_buffer_2 != 0) {
                    // WARNING: Subroutine does not return
    trigger_system_error();
  }
  lStack_180 = 0;
  uStack_170 = 0;
  puStack_188 = &UNK_18098bcb0;
  puStack_1b0 = &UNK_180a3c3e0;
  uStack_198 = 0;
  puStack_1a8 = (undefined4 *)0x0;
  uStack_1a0 = 0;
  string_buffer = allocate_string_buffer(_STRING_BUFFER_CONFIG,0x13,0x13);
  *(undefined1 *)string_buffer = 0;
  buffer_ptr = string_buffer;
  buffer_flags = set_buffer_flags(string_buffer);
  output_config = CONCAT44(output_config._4_4_,buffer_flags);
  *string_buffer = 0x5f657375;
  string_buffer[1] = 0x65726170;
  string_buffer[2] = 0x635f746e;
  string_buffer[3] = 0x6f736e6f;
  *(undefined2 *)(string_buffer + 4) = 0x656c;
  *(undefined1 *)((longlong)string_buffer + 0x12) = 0;
  buffer_length = 0x12;
  uVar9 = lStack_160 - lStack_168 >> 5;
  if (uVar9 != 0) {
    puVar7 = (undefined8 *)(lStack_168 + 8);
    do {
      if (*(int *)(puVar7 + 1) == 0x12) {
        pcVar6 = (char *)*puVar7;
        lVar4 = (longlong)puVar5 - (longlong)pcVar6;
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
    } while ((ulonglong)(longlong)iVar8 < uVar9);
  }
  puStack_1b0 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  release_string_buffer(string_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: bool set_console_color_theme(unsigned long console_handle, unsigned int color_index)
// 功能: 根据颜色索引设置控制台文本颜色主题
bool set_console_color_theme(unsigned long console_handle, unsigned int color_index)

{
  undefined2 uVar1;
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



// 函数: void process_initialization_command(longlong command_data)
// 功能: 处理初始化命令，根据命令类型执行相应的初始化操作
void process_initialization_command(longlong command_data)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint auStackX_8 [4];
  undefined1 auStackX_18 [8];
  uint auStackX_20 [2];
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  
  command_type = *(uint *)(command_data + 0x28);
  if (command_type < 9) {
    switch(command_type) {
    case 1:  // 初始化日志系统
      log_config[0] = log_config[0] & 0xffffff00;
      log_message = &DEFAULT_LOG_MESSAGE;
      if (*(undefined **)(command_data + 0x38) != (undefined *)0x0) {
        log_message = *(undefined **)(command_data + 0x38);
      }
      initialize_logging_system(*(longlong *)(command_data + 0x20) + 0x20,log_message,log_config);
      log_system = (longlong *)(*(longlong *)(command_data + 0x20) + 0x20);
      (**(code **)(*log_system + 0x108))(log_system,1);
      log_system = (longlong *)(*(longlong *)(command_data + 0x20) + 0x20);
      (**(code **)(*log_system + 0x70))(log_system,&LOG_SYSTEM_CONFIG);
      puStack_70 = &UNK_180a3c3e0;
      uStack_58 = 0;
      puStack_68 = (undefined8 *)0x0;
      uStack_60 = 0;
      puVar5 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
      *(undefined1 *)puVar5 = 0;
      puStack_68 = puVar5;
      uVar3 = FUN_18064e990(puVar5);
      uStack_58 = CONCAT44(uStack_58._4_4_,uVar3);
      *puVar5 = 0x73726f7272655f;
      uStack_60 = 7;
      iVar8 = *(int *)(param_1 + 0x40) + -1;
      if (-1 < iVar8) {
        lVar6 = (longlong)iVar8;
        do {
          if (*(char *)(lVar6 + *(longlong *)(param_1 + 0x38)) == '_') goto code_r0x0001800630e9;
          iVar8 = iVar8 + -1;
          lVar6 = lVar6 + -1;
        } while (-1 < lVar6);
      }
      iVar8 = -1;
code_r0x0001800630e9:
      FUN_1806288c0(param_1 + 0x30,iVar8,&puStack_70);
      puStack_70 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar5);
    case 2:
      plVar7 = (longlong *)(*(longlong *)(param_1 + 0x20) + 0xd8);
      (**(code **)(*plVar7 + 0x70))(plVar7,&UNK_1809fe5f0);
      FUN_180639250(*(longlong *)(param_1 + 0x20) + 0xd8);
      plVar7 = (longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
      (**(code **)(*plVar7 + 0x70))(plVar7,&UNK_1809fe5f0);
      FUN_180639250(*(longlong *)(param_1 + 0x20) + 0x20);
      if (((*(byte *)(*(longlong *)(param_1 + 0x20) + 8) & 2) != 0) &&
         (iRam0000000180c912e0 = iRam0000000180c912e0 + -1, iRam0000000180c912e0 == 0)) {
        _DAT_180c912f0 = 0;
        lRam0000000180c912e8 = 0;
        LOCK();
        _DAT_180d48d28 = 0;
        UNLOCK();
        FreeConsole();
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 8) = 0xe;
      *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10) = 0xffffffff00000000;
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x18) = 0;
      **(undefined8 **)(param_1 + 0x20) = 0;
      break;
    case 3:
      plVar7 = (longlong *)(*(longlong *)(param_1 + 0x20) + 0xd8);
      (**(code **)(*plVar7 + 0x70))(plVar7,&UNK_1809fe5f0);
      FUN_180639250(*(longlong *)(param_1 + 0x20) + 0xd8);
      FUN_18062da70(*(longlong *)(param_1 + 0x20) + 0xe0);
      break;
    case 4:
      auStackX_18[0] = 0;
      puVar9 = *(undefined **)(*(longlong *)(param_1 + 0x20) + 0xe8);
      puVar10 = &DAT_18098bc73;
      if (puVar9 != (undefined *)0x0) {
        puVar10 = puVar9;
      }
      FUN_1806391a0(*(longlong *)(param_1 + 0x20) + 0xd8,puVar10,auStackX_18);
      plVar7 = (longlong *)(*(longlong *)(param_1 + 0x20) + 0xd8);
      (**(code **)(*plVar7 + 0x108))(plVar7,1);
      plVar7 = (longlong *)(*(longlong *)(param_1 + 0x20) + 0xd8);
      (**(code **)(*plVar7 + 0x70))(plVar7,&UNK_1809fe5c0);
      break;
    case 5:
      iVar8 = *(int *)(param_1 + 0x58);
      if ((*(int *)(_DAT_180c8a9c8 + 0x150) <= iVar8) &&
         (puVar5 = *(undefined8 **)(param_1 + 0x20),
         (*(ulonglong *)(param_1 + 0x60) & puVar5[2]) != 0)) {
        uVar2 = *(uint *)(param_1 + 0x40);
        puVar9 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
          puVar9 = *(undefined **)(param_1 + 0x38);
        }
        if ((*(byte *)(puVar5 + 1) & 2) != 0) {
          FUN_180062ee0((ulonglong)*(uint *)(&DAT_180063480 + (longlong)(int)uVar1 * 4) +
                        0x180000000,*(undefined4 *)(param_1 + 0x50));
          iVar4 = WriteConsoleA(_DAT_180c912f0,puVar9,uVar2,auStackX_20,0);
          if ((iVar4 == 0) || (auStackX_20[0] < uVar2)) {
            FUN_18005d3a0(&UNK_1809fe62c,puVar9);
          }
          iVar4 = SetConsoleTextAttribute(_DAT_180c912f0,0xf);
          if (iVar4 == 0) {
            FUN_18005d3a0(&UNK_1809fe5a0);
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
      if ((*(byte *)(*(longlong *)(param_1 + 0x20) + 8) & 8) != 0) {
        (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) + 0x118))();
        (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0xd8) + 0x118))();
      }
      break;
    case 7:
      *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10) = *(undefined8 *)(param_1 + 0x60);
      break;
    case 8:
      if ((_DAT_180c912f0 != 0) && (lRam0000000180c912e8 != 0)) {
        auStackX_8[0] = *(uint *)(param_1 + 0x68);
        SetConsoleScreenBufferSize(_DAT_180c912f0,auStackX_8[0]);
      }
    }
  }
  else {
    FUN_180626f80(&UNK_1809fe608);
  }
  return;
}



// 函数: int format_string_with_args(void *buffer, void *format, void *arg_list, void *extra_arg)
// 功能: 使用参数列表格式化字符串，类似于sprintf_s的安全版本
int format_string_with_args(void *buffer, void *format, void *arg_list, void *extra_arg)

{
  int result;
  undefined8 *stdio_config;
  undefined8 extra_param;
  
  extra_param = extra_arg;
  stdio_config = (undefined8 *)get_stdio_common_config();
  result = __stdio_common_vsprintf_s(*stdio_config,buffer,format,arg_list,0,&extra_param);
  if (result < 0) {
    result = -1;
  }
  return result;
}



// 函数: ulonglong find_string_in_hash_table(longlong *hash_table, longlong search_key)
// 功能: 在哈希表中查找字符串，返回查找结果
ulonglong find_string_in_hash_table(longlong *hash_table, longlong search_key)

{
  byte *string_ptr1;
  uint hash_value1;
  uint hash_value2;
  longlong table_offset;
  ulonglong result;
  byte *string_ptr2;
  uint char_diff;
  ulonglong entry_count;
  longlong string_length;
  int compare_index;
  longlong current_entry;
  
  table_offset = *hash_table;
  compare_index = 0;
  entry_count = hash_table[1] - table_offset >> 5;
  if (entry_count != 0) {
    hash_value2 = *(uint *)(search_key + 0x10);
    current_entry = 0;
    do {
      hash_value1 = *(uint *)(current_entry + 0x10 + table_offset);
      string_ptr2 = (byte *)(ulonglong)hash_value1;
      char_diff = hash_value2;
      if (hash_value1 == hash_value2) {
        if (hash_value1 != 0) {
          string_ptr2 = *(byte **)(current_entry + 8 + table_offset);
          string_length = *(longlong *)(search_key + 8) - (longlong)string_ptr2;
          do {
            string_ptr1 = string_ptr2 + string_length;
            char_diff = (uint)*string_ptr2 - (uint)*string_ptr1;
            if (char_diff != 0) break;
            string_ptr2 = string_ptr2 + 1;
          } while (*string_ptr1 != 0);
        }
found_match:
        if (char_diff == 0) {
          return CONCAT71((int7)((ulonglong)string_ptr2 >> 8),1);
        }
      }
      else if (hash_value1 == 0) goto found_match;
      compare_index = compare_index + 1;
      current_entry = current_entry + 0x20;
      result = (ulonglong)compare_index;
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
  ulonglong *stdio_config;
  
  stdio_config = (ulonglong *)get_stdio_common_config();
  result = __stdio_common_vsprintf(*stdio_config | 2,buffer,format,arg_list,0,extra_arg);
  if (result < 0) {
    result = -1;
  }
  return result;
}



// 函数: undefined8 *cleanup_string_buffer(undefined8 *buffer_ptr, ulonglong flags, undefined8 param3, undefined8 param4)
// 功能: 清理字符串缓冲区，根据标志决定是否释放内存
undefined8 *cleanup_string_buffer(undefined8 *buffer_ptr, ulonglong flags, undefined8 param3, undefined8 param4)

{
  buffer_ptr[6] = &UNK_180a3c3e0;
  if (buffer_ptr[7] != 0) {
                    // WARNING: Subroutine does not return
    release_string_buffer();
  }
  buffer_ptr[7] = 0;
  *(undefined4 *)(buffer_ptr + 9) = 0;
  buffer_ptr[6] = &UNK_18098bcb0;
  *buffer_ptr = &UNK_18098bdc8;
  *buffer_ptr = &UNK_180a21720;
  *buffer_ptr = &UNK_180a21690;
  if ((flags & 1) != 0) {
    free(buffer_ptr,0x70,param3,param4,0xfffffffffffffffe);
  }
  return buffer_ptr;
}



// 函数: undefined8 *initialize_string_buffer_with_config(undefined8 *buffer_ptr, undefined4 config, undefined8 param3, undefined8 param4)
// 功能: 使用配置初始化字符串缓冲区
undefined8 *initialize_string_buffer_with_config(undefined8 *buffer_ptr, undefined4 config, undefined8 param3, undefined8 param4)

{
  longlong *buffer_manager;
  
  *buffer_ptr = &UNK_180a21690;
  *buffer_ptr = &UNK_180a21720;
  *(undefined4 *)(buffer_ptr + 1) = 0;
  *buffer_ptr = &UNK_18098bdc8;
  LOCK();
  *(undefined1 *)(buffer_ptr + 2) = 0;
  UNLOCK();
  buffer_ptr[3] = 0xffffffffffffffff;
  *buffer_ptr = &UNK_1809fe650;
  buffer_manager = buffer_ptr + 6;
  *buffer_manager = (longlong)&UNK_18098bcb0;
  buffer_ptr[7] = 0;
  *(undefined4 *)(buffer_ptr + 8) = 0;
  *buffer_manager = (longlong)&UNK_180a3c3e0;
  buffer_ptr[9] = 0;
  buffer_ptr[7] = 0;
  *(undefined4 *)(buffer_ptr + 8) = 0;
  *(undefined4 *)(buffer_ptr + 5) = config;
  buffer_ptr[4] = param3;
  (**(code **)(*buffer_manager + 0x10))(buffer_manager,&DAT_18098bc73,param3,param4,0xfffffffffffffffe);
  *(undefined4 *)(buffer_ptr + 10) = 0xd;
  *(undefined8 *)((longlong)buffer_ptr + 0x54) = 0xe;
  buffer_ptr[0xc] = 0xffffffff00000000;
  *(undefined4 *)(buffer_ptr + 0xd) = 0;
  return buffer_ptr;
}



// 函数: longlong setup_function_pointer_table(longlong table_ptr)
// 功能: 设置函数指针表，用于初始化或其他配置
longlong setup_function_pointer_table(longlong table_ptr)

{
  *(undefined8 *)(table_ptr + 0x10) = 0;
  *(code **)(table_ptr + 0x18) = initialize_module_functions;
  return table_ptr;
}



// 函数: longlong setup_security_function_pointer(longlong table_ptr)
// 功能: 设置安全相关的函数指针，使用guard检查
longlong setup_security_function_pointer(longlong table_ptr)

{
  *(undefined8 *)(table_ptr + 0x10) = 0;
  *(code **)(table_ptr + 0x18) = _guard_check_icall;
  return table_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void initialize_system_buffers(undefined8 system_param)
// 功能: 初始化系统缓冲区，包括安全检查和内存清零
void initialize_system_buffers(undefined8 system_param)

{
  undefined1 security_buffer [96];
  undefined1 config_buffer [64];
  undefined8 stack_cookie;
  undefined8 param_value;
  undefined1 zero_buffer [512];
  ulonglong security_check;
  
  stack_cookie = 0xfffffffffffffffe;
  security_check = _DAT_180bf00a8 ^ (ulonglong)security_buffer;
  param_value = system_param;
  initialize_buffer_manager(config_buffer,_DAT_180c86928 + 0x28);
                    // WARNING: Subroutine does not return
  memset(zero_buffer,0,0x200);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180063b30(undefined8 param_1,longlong param_2)
void FUN_180063b30(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uStack_48;
  longlong lStack_40;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined4 uStack_18;
  
  uStack_48 = 0;
  lStack_40 = 0;
  FUN_180627e10(param_1,&puStack_30,&UNK_1809fe800);
  puVar2 = &DAT_18098bc73;
  if (puStack_28 != (undefined *)0x0) {
    puVar2 = puStack_28;
  }
  FUN_18062dee0(&uStack_48,puVar2,&UNK_1809fe80c);
  lVar6 = lStack_40;
  lVar5 = -1;
  lVar3 = lVar5;
  lVar4 = lVar5;
  if (param_2 != 0) {
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar3) != '\0');
    if (lVar3 != 0) {
      fwrite(param_2,lVar3,1,lStack_40);
    }
  }
  do {
    lVar3 = lVar4 + 1;
    pcVar1 = (char *)(lVar4 + 0x180c84871);
    lVar4 = lVar3;
  } while (*pcVar1 != '\0');
  if (lVar3 != 0) {
    fwrite(&DAT_1809fe810,0x30,1,lVar6);
    fwrite(&DAT_180c84870,lVar3,1,lVar6);


// 函数: void FUN_180063cf0(void)
void FUN_180063cf0(void)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined *puVar9;
  uint uVar10;
  undefined8 *puVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 auStack_2f8 [32];
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  undefined *puStack_290;
  longlong lStack_288;
  undefined4 uStack_278;
  undefined8 uStack_270;
  undefined1 auStack_268 [32];
  longlong lStack_248;
  undefined1 auStack_238 [512];
  ulonglong uStack_38;
  ulonglong uVar11;
  
  uStack_270 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_2f8;
  uVar11 = 0;
  FUN_1800ba980(&puStack_290);
  puStack_2d8 = (undefined8 *)0x0;
  puStack_2d0 = (undefined8 *)0x0;
  uStack_2c8 = 0;
  uStack_2c0 = 3;
  puStack_2b0 = (undefined8 *)0x0;
  puStack_2a8 = (undefined8 *)0x0;
  uStack_2a0 = 0;
  uStack_298 = 3;
  FUN_18062d3b0(&puStack_290,&puStack_2d8,&puStack_2b0);
  iVar14 = -1;
  lVar15 = -0x8000000000000000;
  uVar16 = (uint)((longlong)puStack_2d0 - (longlong)puStack_2d8 >> 5);
  uVar13 = uVar11;
  puVar3 = puStack_2d0;
  puVar12 = puStack_2b0;
  puVar4 = puStack_2a8;
  if (uVar16 != 0) {
    do {
      iVar6 = *(int *)((longlong)puStack_2d8 + uVar13 + 0x10);
      if (iVar6 < 4) {
LAB_180063de9:
        bVar2 = false;
      }
      else {
        lVar7 = 0;
        do {
          lVar8 = lVar7 + 1;
          if (*(char *)(*(longlong *)((longlong)puStack_2d8 + uVar13 + 8) + (longlong)(iVar6 + -4) +
                       lVar7) != (&UNK_1809fe85c)[lVar7]) goto LAB_180063de9;
          lVar7 = lVar8;
        } while (lVar8 != 5);
        bVar2 = true;
      }
      if (bVar2) {
        puVar1 = *(undefined **)((longlong)puStack_2d8 + uVar13 + 8);
        puVar9 = &DAT_18098bc73;
        if (puVar1 != (undefined *)0x0) {
          puVar9 = puVar1;
        }
        iVar6 = _stat64i32(puVar9,auStack_268);
        if ((iVar6 != -1) && (lVar15 < lStack_248)) {
          lVar15 = lStack_248;
          iVar14 = (int)uVar11;
        }
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      uVar13 = uVar13 + 0x20;
    } while (uVar10 < uVar16);
    puVar3 = puStack_2d0;
    puVar12 = puStack_2b0;
    puVar4 = puStack_2a8;
    if (-1 < iVar14) {
                    // WARNING: Subroutine does not return
      memset(auStack_238,0,0x200);
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
  if (puStack_2b0 == (undefined8 *)0x0) {
    puStack_2b0 = (undefined8 *)0x0;
    puStack_2a8 = puVar4;
    for (puVar12 = puStack_2d8; puVar12 != puVar3; puVar12 = puVar12 + 4) {
      (**(code **)*puVar12)(puVar12,0);
    }
    if (puStack_2d8 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_290 = &UNK_180a3c3e0;
    if (lStack_288 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_288 = 0;
    uStack_278 = 0;
    puStack_290 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_2f8);
  }
  puStack_2a8 = puVar4;
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180064010(undefined8 param_1)
void FUN_180064010(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_358 [64];
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined8 uStack_308;
  undefined4 uStack_300;
  undefined8 uStack_2f8;
  longlong lStack_2f0;
  undefined8 uStack_2e0;
  longlong lStack_2d8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  undefined4 uStack_2a8;
  undefined *puStack_2a0;
  longlong lStack_298;
  undefined4 uStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined4 uStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined4 uStack_248;
  undefined8 uStack_240;
  undefined1 auStack_238 [512];
  ulonglong uStack_38;
  
  uStack_240 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_358;
  FUN_1800ba940(&puStack_2a0);
  puStack_318 = (undefined8 *)0x0;
  puStack_310 = (undefined8 *)0x0;
  uStack_308 = 0;
  uStack_300 = 3;
  puStack_2c0 = (undefined8 *)0x0;
  puStack_2b8 = (undefined8 *)0x0;
  uStack_2b0 = 0;
  uStack_2a8 = 3;
  FUN_18062d3b0(&puStack_2a0,&puStack_318,&puStack_2c0);
  puVar2 = puStack_2b8;
  puVar1 = puStack_310;
  puVar4 = puStack_2c0;
  if ((int)((longlong)puStack_310 - (longlong)puStack_318 >> 5) != 0) {
                    // WARNING: Subroutine does not return
    memset(auStack_238,0,0x200);
  }
  for (; puStack_310 = puVar1, puVar4 != puVar2; puVar4 = puVar4 + 4) {
    (**(code **)*puVar4)(puVar4,0);
    puVar1 = puStack_310;
  }
  if (puStack_2c0 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_2c0 = (undefined8 *)0x0;
  for (puVar4 = puStack_318; puVar4 != puVar1; puVar4 = puVar4 + 4) {
    (**(code **)*puVar4)(puVar4,0);
  }
  if (puStack_318 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_2a0 = &UNK_180a3c3e0;
  if (lStack_298 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_298 = 0;
  uStack_288 = 0;
  puStack_2a0 = &UNK_18098bcb0;
  uStack_2f8 = 0;
  lStack_2f0 = 0;
  FUN_180627e10(param_1,&puStack_280,&UNK_1809fe868);
  puVar3 = &DAT_18098bc73;
  if (puStack_278 != (undefined *)0x0) {
    puVar3 = puStack_278;
  }
  FUN_18062dee0(&uStack_2f8,puVar3,&UNK_1809fe80c);
  FUN_1800ae730(_DAT_180c86920,&uStack_2f8);
  if (lStack_2f0 != 0) {
    fclose();
    lStack_2f0 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
  puStack_280 = &UNK_180a3c3e0;
  if (puStack_278 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_278 = (undefined *)0x0;
  uStack_268 = 0;
  puStack_280 = &UNK_18098bcb0;
  if (lStack_2f0 != 0) {
    fclose();
    lStack_2f0 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
  uStack_2e0 = 0;
  lStack_2d8 = 0;
  FUN_180627e10(param_1,&puStack_260,&UNK_1809fe880);
  puVar3 = &DAT_18098bc73;
  if (puStack_258 != (undefined *)0x0) {
    puVar3 = puStack_258;
  }
  FUN_18062dee0(&uStack_2e0,puVar3,&UNK_1809fe80c);
  FUN_1800ae730(_DAT_180c868b0,&uStack_2e0);
  if (lStack_2d8 != 0) {
    fclose();
    lStack_2d8 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
  puStack_260 = &UNK_180a3c3e0;
  if (puStack_258 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_258 = (undefined *)0x0;
  uStack_248 = 0;
  puStack_260 = &UNK_18098bcb0;
  if (lStack_2d8 != 0) {
    fclose();
    lStack_2d8 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_358);
}





// 函数: void FUN_180064400(void)
void FUN_180064400(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1800649d0(undefined8 param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puStack_b8;
  longlong lStack_b0;
  int iStack_a8;
  ulonglong uStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  longlong lStack_70;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  puStack_98 = (undefined8 *)0x0;
  puStack_90 = (undefined8 *)0x0;
  uStack_88 = 0;
  uStack_80 = 3;
  cVar1 = FUN_180064400(&puStack_98);
  puVar7 = puStack_90;
  puVar6 = puStack_98;
  if ((cVar1 == '\0') || (puStack_98 == puStack_90)) {
    FUN_1800622d0(_DAT_180c86928,5,3,&UNK_1809fe8b0);
    uVar2 = FUN_1800623e0();
    puVar4 = puVar6;
  }
  else {
    uStack_78 = 0;
    lStack_70 = 0;
    FUN_180627e10(param_1,&puStack_58,&UNK_1809fe898);
    puVar3 = &DAT_18098bc73;
    if (puStack_50 != (undefined *)0x0) {
      puVar3 = puStack_50;
    }
    FUN_18062dee0(&uStack_78,puVar3,&UNK_1809fe80c);
    uVar2 = (longlong)puVar7 - (longlong)puVar6 >> 5;
    puStack_b8 = &UNK_180a3c3e0;
    uStack_a0 = 0;
    lStack_b0 = 0;
    iStack_a8 = 0;
    if ((int)uVar2 != 0) {
      puVar4 = puVar6 + 1;
      uVar2 = uVar2 & 0xffffffff;
      do {
        puVar3 = &DAT_18098bc73;
        if ((undefined *)*puVar4 != (undefined *)0x0) {
          puVar3 = (undefined *)*puVar4;
        }
        FUN_180628040(&puStack_b8,&UNK_1809fe62c,puVar3);
        puVar4 = puVar4 + 4;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    lVar5 = lStack_70;
    uVar2 = fwrite(lStack_b0,1,(longlong)iStack_a8,lStack_70);
    if (lVar5 != 0) {
      fclose(lVar5);
      lStack_70 = 0;
      LOCK();
      uVar2 = (ulonglong)_DAT_180c8ed60;
      UNLOCK();
      lVar5 = 0;
      puVar6 = puStack_98;
      puVar7 = puStack_90;
      _DAT_180c8ed60 = _DAT_180c8ed60 - 1;
    }
    puStack_b8 = &UNK_180a3c3e0;
    if (lStack_b0 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_b0 = 0;
    uStack_a0 = uStack_a0 & 0xffffffff00000000;
    puStack_b8 = &UNK_18098bcb0;
    puStack_58 = &UNK_180a3c3e0;
    if (puStack_50 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_50 = (undefined *)0x0;
    uStack_40 = 0;
    puStack_58 = &UNK_18098bcb0;
    puVar4 = puVar6;
    if (lVar5 != 0) {
      uVar2 = fclose(lVar5);
      lStack_70 = 0;
      LOCK();
      _DAT_180c8ed60 = _DAT_180c8ed60 - 1;
      UNLOCK();
      puVar6 = puStack_98;
      puVar7 = puStack_90;
      puVar4 = puStack_98;
    }
  }
  for (; puVar6 != puVar7; puVar6 = puVar6 + 4) {
    uVar2 = (**(code **)*puVar6)(puVar6,0);
  }
  if (puVar4 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar4);
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



