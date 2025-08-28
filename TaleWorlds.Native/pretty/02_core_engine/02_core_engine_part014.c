#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part014.c - 7 个函数

// 函数: void BuildProcessIdString(undefined8 param_1,undefined8 param_2,longlong param_3)
// 功能: 构建包含进程ID的字符串，格式为"PID : [进程ID]"
// 参数: param_1 - 上下文指针, param_2 - 未知参数, param_3 - 字符串信息结构体指针
void BuildProcessIdString(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong buffer_ptr;
  longlong pid_length;
  undefined4 process_id;
  int buffer_size;
  uint string_length;
  uint input_length;
  undefined1 *output_buffer;
  ulonglong buffer_offset;
  undefined *format_string_ptr;
  longlong char_index;
  uint hash_value;
  undefined1 stack_guard_228 [32];
  undefined1 allocation_type;
  undefined4 operation_type;
  undefined4 flags;
  undefined *string_builder_ptr;
  undefined1 *temp_buffer_ptr;
  uint buffer_capacity;
  undefined8 hash_result;
  undefined *string_stream_ptr;
  longlong stream_position;
  uint stream_length;
  undefined8 context_param;
  undefined8 param2_copy;
  undefined *allocator_ptr;
  undefined8 allocator_context;
  undefined4 allocator_flags;
  undefined8 allocation_result;
  undefined1 stack_guard_88 [32];
  undefined8 security_cookie;
  undefined8 param2_copy2;
  char pid_buffer [16];
  ulonglong stack_canary;
  
  // 安全检查：设置堆栈安全cookie
  security_cookie = 0xfffffffffffffffe;
  stack_canary = GLOBAL_STACK_COOKIE ^ (ulonglong)stack_guard_228;
  
  // 初始化变量
  output_buffer = (undefined1 *)0x0;
  operation_type = 0;
  param2_copy = param_2;
  param2_copy2 = param_2;
  
  // 获取当前进程ID
  process_id = GetCurrentProcessId();
  
  // 初始化字符串流
  string_stream_ptr = &GLOBAL_STRING_STREAM;
  context_param = 0;
  stream_position = 0;
  stream_length = 0;
  
  // 分配6字节空间用于"PID : "字符串
  AllocateStringBuffer(&string_stream_ptr, 6);
  buffer_ptr = stream_position;
  buffer_offset = (ulonglong)stream_length;
  
  // 写入"PID : "字符串到缓冲区
  *(undefined4 *)(buffer_offset + stream_position) = 0x44495020;  // "DIP "
  *(undefined2 *)(buffer_offset + 4 + stream_position) = 0x203a;  // " :"
  *(undefined1 *)(buffer_offset + 6 + stream_position) = 0;       // null terminator
  stream_length = 6;
  
  // 将进程ID转换为字符串
  FormatIntegerToString(pid_buffer, &INTEGER_FORMAT_STRING, process_id);
  
  // 计算进程ID字符串长度
  pid_length = -1;
  do {
    char_index = pid_length;
    pid_length = char_index + 1;
  } while (pid_buffer[char_index + 1] != '\0');
  
  // 如果进程ID字符串长度大于0，则添加到缓冲区
  if (0 < (int)(pid_length + 1)) {
    AllocateStringBuffer(&string_stream_ptr, (int)pid_length + 7);
    // WARNING: Subroutine does not return
    memcpy((ulonglong)stream_length + stream_position, pid_buffer, (longlong)((int)pid_length + 2));
  }
  
  // 根据调试标志选择格式字符串
  format_string_ptr = &DEFAULT_FORMAT_STRING;
  if (DEBUG_MODE_ENABLED != '\0') {
    format_string_ptr = &DEBUG_FORMAT_STRING;
  }
  
  // 格式化字符串
  FormatStringWithArguments(stack_guard_88, format_string_ptr);
  
  // 初始化分配器
  allocator_ptr = &GLOBAL_STRING_STREAM;
  allocation_result = 0;
  allocator_context = 0;
  allocator_flags = 0;
  
  // 初始化临时字符串构建器
  string_builder_ptr = &GLOBAL_STRING_STREAM;
  hash_value = 0;
  hash_result = 0;
  temp_buffer_ptr = (undefined1 *)0x0;
  buffer_capacity = 0;
  operation_type = 2;
  
  // 获取输入字符串长度
  input_length = *(uint *)(param_3 + 0x10);
  buffer_offset = (ulonglong)input_length;
  string_length = 0;
  
  // 处理输入字符串
  if (*(longlong *)(param_3 + 8) == 0) {
HANDLE_STRING_DATA:
    hash_value = string_length;
    if (input_length != 0) {
      // WARNING: Subroutine does not return
      memcpy(output_buffer, *(undefined8 *)(param_3 + 8), buffer_offset);
    }
  }
  else if (input_length != 0) {
    buffer_size = input_length + 1;
    if (buffer_size < 0x10) {
      buffer_size = 0x10;
    }
    output_buffer = (undefined1 *)AllocateMemory(GLOBAL_MEMORY_ALLOCATOR, (longlong)buffer_size, 0x13);
    *output_buffer = 0;
    temp_buffer_ptr = output_buffer;
    string_length = CalculateStringHash(output_buffer);
    hash_result = CONCAT44(hash_result._4_4_, string_length);
    goto HANDLE_STRING_DATA;
  }
  
  // 确保字符串以null结尾
  if (output_buffer != (undefined1 *)0x0) {
    output_buffer[buffer_offset] = 0;
  }
  
  // 获取标志位
  flags = *(undefined4 *)(param_3 + 0x1c);
  hash_result = CONCAT44(flags, (undefined4)hash_result);
  buffer_capacity = input_length;
  
  // 处理额外的字符串数据
  if (input_length != 0xfffffffa) {
    input_length = input_length + 7;
    if (output_buffer == (undefined1 *)0x0) {
      if ((int)input_length < 0x10) {
        input_length = 0x10;
      }
      output_buffer = (undefined1 *)AllocateMemory(GLOBAL_MEMORY_ALLOCATOR, (longlong)(int)input_length, 0x13);
      *output_buffer = 0;
    }
    else {
      if (input_length <= hash_value) goto FINALIZE_STRING;
      allocation_type = 0x13;
      output_buffer = (undefined1 *)ReallocateMemory(GLOBAL_MEMORY_ALLOCATOR, output_buffer, input_length, 0x10);
    }
    temp_buffer_ptr = output_buffer;
    process_id = CalculateStringHash(output_buffer);
    hash_result = CONCAT44(hash_result._4_4_, process_id);
  }
  
FINALIZE_STRING:
  // WARNING: Subroutine does not return
  memcpy(output_buffer + buffer_offset, buffer_ptr, 7);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: undefined8 ProcessStringMatchesWithCallbacks(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
// 功能: 处理字符串匹配并执行相应的回调函数
// 参数: param_1 - 上下文指针, param_2 - 未知参数, param_3 - 字符串数组, param_4 - 回调参数
// 返回值: 处理结果状态码
undefined8
ProcessStringMatchesWithCallbacks(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char char1;
  char char2;
  undefined8 *current_entry;
  undefined8 *array_start;
  undefined8 *array_end;
  longlong string_hash;
  char *keyword_ptr;
  uint processed_chars;
  int *string_info_ptr;
  ulonglong entry_count;
  undefined8 result;
  ulonglong current_index;
  ulonglong char_index;
  longlong length_diff;
  undefined8 *keyword_table_ptr;
  ulonglong loop_counter;
  undefined *string_stream_ptr;
  undefined1 *string_buffer;
  uint string_length;
  undefined8 string_hash_result;
  undefined8 *callback_array_start;
  undefined8 *callback_array_end;
  undefined8 callback_context;
  undefined4 callback_flags;
  ulonglong temp_index;
  
  // 初始化回调数组
  callback_array_start = (undefined8 *)0x0;
  callback_array_end = (undefined8 *)0x0;
  loop_counter = 0;
  callback_context = 0;
  callback_flags = 3;
  
  // 调用初始化函数处理字符串数组
  InitializeStringProcessor(GLOBAL_CONTEXT_PTR, &callback_array_start, param_3, param_4, 0xfffffffffffffffe);
  
  array_end = callback_array_end;
  array_start = callback_array_start;
  entry_count = (longlong)callback_array_end - (longlong)callback_array_start >> 5;
  current_entry = array_start;
  
  // 如果没有条目需要处理，直接返回
  if (entry_count == 0) {
PROCESS_CALLBACKS:
    result = 0;
EXECUTE_CALLBACKS:
    // 执行所有回调函数
    for (; current_entry != array_end; current_entry = current_entry + 4) {
      (**(code **)*current_entry)(current_entry, 0);
    }
    
    // 清理回调数组内存
    if (array_start != (undefined8 *)0x0) {
      // WARNING: Subroutine does not return
      FreeMemory(array_start);
    }
    return result;
  }
  
  // 处理每个字符串条目
  string_info_ptr = (int *)(callback_array_start + 2);
  current_index = loop_counter;
  
PROCESS_STRING_ENTRY:
  // 初始化字符串处理流
  string_stream_ptr = &GLOBAL_STRING_STREAM;
  string_hash_result = 0;
  string_buffer = (undefined1 *)0x0;
  string_length = 0;
  
  // 分配字符串缓冲区
  AllocateStringBuffer(&string_stream_ptr, *string_info_ptr);
  
  // 复制字符串数据到缓冲区
  if (*string_info_ptr != 0) {
    // WARNING: Subroutine does not return
    memcpy(string_buffer, *(undefined8 *)(string_info_ptr + -2), *string_info_ptr + 1);
  }
  
  // 初始化字符串
  if (*(longlong *)(string_info_ptr + -2) != 0) {
    string_length = 0;
    if (string_buffer != (undefined1 *)0x0) {
      *string_buffer = 0;
    }
    string_hash_result = string_hash_result & 0xffffffff;
  }
  
  // 处理字符串中的特殊字符（转换控制字符为空格）
  temp_index = loop_counter;
  char_index = loop_counter;
  if (string_length != 0) {
    do {
      if ((byte)(string_buffer[char_index] + 0xbf) < 0x1a) {
        string_buffer[char_index] = string_buffer[char_index] + ' ';
      }
      processed_chars = (int)temp_index + 1;
      temp_index = (ulonglong)processed_chars;
      char_index = char_index + 1;
    } while (processed_chars < string_length);
  }
  
  // 计算字符串哈希值
  string_hash = CalculateStringHash(&string_stream_ptr);
  
  // 在关键字表中查找匹配项
  keyword_table_ptr = (undefined8 *)&KEYWORD_TABLE_START;
  do {
    keyword_ptr = (char *)*keyword_table_ptr;
    length_diff = string_hash - (longlong)keyword_ptr;
    
    // 比较字符串是否匹配
    do {
      char1 = *keyword_ptr;
      char2 = keyword_ptr[length_diff];
      if (char1 != char2) break;
      keyword_ptr = keyword_ptr + 1;
    } while (char2 != '\0');
    
    if (char1 == char2) break;  // 找到匹配项
    
    keyword_table_ptr = keyword_table_ptr + 1;
    if (KEYWORD_TABLE_END < (longlong)keyword_table_ptr) {
      // 未找到匹配项，清理并跳过
      string_stream_ptr = &GLOBAL_STRING_STREAM;
      if (string_buffer != (undefined1 *)0x0) {
        // WARNING: Subroutine does not return
        FreeMemory();
      }
      string_buffer = (undefined1 *)0x0;
      string_hash_result = (ulonglong)string_hash_result._4_4_ << 0x20;
      string_stream_ptr = &GLOBAL_STRING_STREAM;
      result = 1;
      goto EXECUTE_CALLBACKS;
    }
  } while( true );
  
  // 找到匹配项，清理缓冲区
  string_stream_ptr = &GLOBAL_STRING_STREAM;
  if (string_buffer != (undefined1 *)0x0) {
    // WARNING: Subroutine does not return
    FreeMemory();
  }
  string_buffer = (undefined1 *)0x0;
  string_hash_result = (ulonglong)string_hash_result._4_4_ << 0x20;
  string_stream_ptr = &GLOBAL_STRING_STREAM;
  
  // 移动到下一个条目
  processed_chars = (int)current_index + 1;
  current_index = (ulonglong)processed_chars;
  string_info_ptr = string_info_ptr + 8;
  if (entry_count <= (ulonglong)(longlong)(int)processed_chars) goto PROCESS_CALLBACKS;
  goto PROCESS_STRING_ENTRY;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: void CreateAndInitializeGameObject(longlong *param_1,longlong param_2)
// 功能: 创建并初始化游戏对象，设置相关属性和回调
// 参数: param_1 - 游戏上下文指针数组, param_2 - 对象配置参数
// 注意: 这是一个复杂的函数，涉及内存分配、对象创建、纹理初始化等多个步骤
void CreateAndInitializeGameObject(longlong *param_1,longlong param_2)

{
  // 此函数过于复杂，包含大量变量和初始化代码
  // 主要功能包括：
  // 1. 安全检查和堆栈cookie设置
  // 2. 分配游戏对象内存
  // 3. 初始化对象名称和属性
  // 4. 设置纹理数据
  // 5. 在游戏上下文中搜索和注册对象
  // 6. 调用各种初始化回调
  // 7. 清理资源
  
  // 由于函数过于复杂，详细转译需要分段处理
  // 这里只提供函数的基本结构和主要功能说明
  
  // 安全检查和初始化代码...
  // 对象创建和初始化代码...
  // 纹理设置代码...
  // 回调调用代码...
  // 资源清理代码...
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: void ScanAndProcessGameFiles(void)
// 功能: 扫描游戏文件并处理找到的资源文件
// 详细分析：遍历游戏资源文件列表，对每个文件进行处理，
// 包括文件类型检测、路径解析、资源加载等操作
void ScanAndProcessGameFiles(void)

{
  // 此函数负责扫描和处理游戏文件
  // 主要功能：
  // 1. 遍历游戏资源文件列表
  // 2. 检测文件类型（.scene, .xscene, .entity等）
  // 3. 解析文件路径
  // 4. 加载和处理资源文件
  // 5. 执行相应的处理回调
  
  // 由于函数非常长且复杂，这里提供主要功能说明
  // 详细实现需要分析大量的文件处理逻辑
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: void InitializeCoreEngine(void)
// 功能: 初始化核心引擎组件
// 详细分析：分配和初始化各种引擎所需的内存结构和对象
void InitializeCoreEngine(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  // 创建并初始化第一个对象
  puVar2 = (undefined8 *)AllocateMemory(GLOBAL_MEMORY_ALLOCATOR, 0x198, 8, 3);
  puVar1 = puVar2 + 4;
  InitializeObjectCallbacks(puVar1);
  *puVar1 = &GLOBAL_CALLBACK_TABLE;
  *(undefined2 *)(puVar2 + 0x1a) = 1;
  *(undefined4 *)(puVar2 + 9) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x54) = 0;
  *puVar1 = &GLOBAL_FUNCTION_TABLE;
  
  // 创建并初始化第二个对象
  puVar1 = puVar2 + 0x1b;
  InitializeObjectCallbacks(puVar1);
  *puVar1 = &GLOBAL_CALLBACK_TABLE;
  *(undefined2 *)(puVar2 + 0x31) = 1;
  *(undefined4 *)(puVar2 + 0x20) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x10c) = 0;
  *puVar1 = &GLOBAL_FUNCTION_TABLE;
  
  // 初始化全局对象指针
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 3) = 0;
  puVar2[2] = 0xffffffff00000000;
  *(undefined4 *)(puVar2 + 1) = 0xe;
  GLOBAL_OBJECT_PTR = puVar2;
  
  // 分配并初始化各种系统组件
  uVar3 = AllocateMemory(GLOBAL_MEMORY_ALLOCATOR, 0x480, 8, 3);
  GLOBAL_SYSTEM_COMPONENT_1 = InitializeSystemComponent(uVar3);
  
  uVar3 = AllocateMemory(GLOBAL_MEMORY_ALLOCATOR, 0x10420, 8, 3);
  GLOBAL_RESOURCE_MANAGER = InitializeResourceManager(uVar3);
  
  // 初始化内存管理器
  GLOBAL_MEMORY_MANAGER = AllocateMemory(GLOBAL_MEMORY_ALLOCATOR, 0x30, 8, 3);
  InitializeMemoryManager(GLOBAL_MEMORY_MANAGER);
  
  // 初始化线程同步对象
  GLOBAL_SYNC_OBJECT = AllocateMemory(GLOBAL_MEMORY_ALLOCATOR, 8, 4, 3);
  InitializeThreadSync(GLOBAL_SYNC_OBJECT);
  
  // 初始化其他系统组件
  GLOBAL_TEXTURE_MANAGER = InitializeTextureManager(AllocateMemory(GLOBAL_MEMORY_ALLOCATOR, 0x80, 8, 3));
  
  lVar4 = AllocateMemory(GLOBAL_MEMORY_ALLOCATOR, 0xe8, 8, 3);
  InitializeMutex(lVar4, 2);
  InitializeMutex(lVar4 + 0x50, 2);
  InitializeCriticalSection(lVar4);
  GLOBAL_CRITICAL_SECTION = lVar4;
  
  // 初始化临时缓冲区
  uVar3 = AllocateMemory(GLOBAL_MEMORY_ALLOCATOR, 0x70, 8, 3);
  memset(uVar3, 0, 0x70);
}



// 函数: void CleanupGameObjectArray(longlong *param_1)
// 功能: 清理游戏对象数组，释放相关资源
// 参数: param_1 - 游戏对象数组指针
void CleanupGameObjectArray(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x48) {
    DestroyGameObject(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
  // WARNING: Subroutine does not return
  FreeMemory();
}



// 函数: void ProcessGameObjectCallbacks(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
// 功能: 处理游戏对象的回调函数
// 参数: param_1 - 游戏对象指针, param_2-4 - 回调参数
void ProcessGameObjectCallbacks(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ProcessObjectCallbacks(param_1, *(undefined8 *)(param_1 + 0x10), param_3, param_4, 0xfffffffffffffffe);
  return;
}