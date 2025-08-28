#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part181.c - 核心引擎模块第181部分
// 本文件包含3个函数：
// 1. process_engine_string_formatting - 处理字符串格式化操作
// 2. process_engine_version_info - 处理版本信息
// 3. process_engine_file_operations - 处理文件系统操作

// 函数: 处理核心引擎字符串格式化操作
// 参数:
//   param_1: 上下文参数
//   param_2: 输出缓冲区指针
//   param_3: 操作标识符
//   param_4: 数据块指针
void process_engine_string_formatting(uint64_t param_1, uint64_t *param_2, uint64_t param_3, longlong *param_4)

{
  uint64_t *buffer_ptr;
  int32_t *format_ptr;
  uint char_count;
  void *string_ptr;
  int8_t local_buffer1[32];
  void **output_ptr;
  int32_t format_flag;
  void *temp_ptr1;
  byte *byte_ptr;
  int status_flag;
  int32_t temp_flag1;
  void *temp_ptr2;
  void *temp_ptr3;
  int32_t temp_flag2;
  void *temp_ptr4;
  void *temp_ptr5;
  int32_t temp_flag3;
  int32_t temp_flag4;
  void *temp_ptr6;
  void *temp_ptr7;
  int32_t temp_flag5;
  uint64_t local_var1;
  uint64_t local_var2;
  uint64_t local_var3;
  uint64_t local_var4;
  uint64_t local_var5;
  uint64_t local_var6;
  uint64_t local_var7;
  uint64_t local_var8;
  uint64_t local_var9;
  uint64_t local_var10;
  uint64_t local_var11;
  uint64_t local_var12;
  uint64_t local_var13;
  uint64_t local_var14;
  uint64_t local_var15;
  uint64_t local_var16;
  uint64_t local_var17;
  uint64_t local_var18;
  uint64_t local_var19;
  uint64_t local_var20;
  uint64_t *buffer_ptr2;
  void *temp_ptr8;
  int8_t *char_buffer1;
  int32_t buffer_size1;
  int8_t local_buffer2[64];
  void *temp_ptr9;
  int8_t *char_buffer2;
  int32_t buffer_size2;
  int8_t local_buffer3[64];
  void *temp_ptr10;
  int8_t *char_buffer3;
  int32_t buffer_size3;
  int8_t local_buffer4[64];
  int8_t local_flag1;
  void *temp_ptr11;
  int8_t *char_buffer4;
  int32_t buffer_size4;
  int8_t local_buffer5[72];
  int8_t local_buffer6[176];
  int8_t local_buffer7[48];
  ulonglong security_cookie;
  
  local_var19 = 0xfffffffffffffffe;
  security_cookie = GET_SECURITY_COOKIE() ^ (ulonglong)local_buffer1;
  format_flag = 0;
  buffer_ptr2 = param_2;
  if ((param_4[1] - *param_4 & 0xffffffffffffffe0U) == 0x80) {
    // 分配内存块用于处理不同类型的数据
    allocate_memory_block(&temp_ptr4);          // 基础内存块
    allocate_memory_block(&temp_ptr5, *param_4 + 0x20);  // 偏移0x20的内存块
    allocate_memory_block(&temp_ptr6, *param_4 + 0x40);  // 偏移0x40的内存块
    allocate_memory_block(&temp_ptr7, *param_4 + 0x60);  // 偏移0x60的内存块
    // 初始化三个字符串缓冲区用于存储处理结果
    temp_ptr8 = &GLOBAL_STRING_EMPTY;     // 第一个字符串缓冲区指针
    char_buffer1 = local_buffer2;          // 第一个缓冲区数据
    buffer_size1 = 0;                     // 第一个缓冲区大小
    local_buffer2[0] = 0;                  // 清空缓冲区
    
    temp_ptr9 = &GLOBAL_STRING_EMPTY;     // 第二个字符串缓冲区指针
    char_buffer2 = local_buffer3;          // 第二个缓冲区数据
    buffer_size2 = 0;                     // 第二个缓冲区大小
    local_buffer3[0] = 0;                  // 清空缓冲区
    
    output_ptr = &temp_ptr10;              // 输出指针数组
    temp_ptr10 = &GLOBAL_STRING_EMPTY;    // 第三个字符串缓冲区指针
    char_buffer3 = local_buffer4;          // 第三个缓冲区数据
    buffer_size3 = 0;                     // 第三个缓冲区大小
    local_buffer4[0] = 0;                  // 清空缓冲区
    // 获取源字符串并进行处理
    string_ptr = &GLOBAL_DATA_SOURCE_STRING;  // 默认数据源字符串
    if (temp_ptr3 != (void *)0x0) {      // 如果有自定义数据源，使用自定义数据源
      string_ptr = temp_ptr3;
    }
    process_string_data(&temp_ptr8, string_ptr);  // 处理第一个字符串缓冲区
    
    string_ptr = &GLOBAL_DATA_SOURCE_STRING;  // 重置为默认数据源
    if (temp_ptr7 != (void *)0x0) {      // 检查是否有自定义数据源
      string_ptr = temp_ptr7;
    }
    // 调用第二个缓冲区的处理函数指针
    (**(code **)(temp_ptr9 + 0x10))(&temp_ptr9, string_ptr);
    
    string_ptr = &GLOBAL_DATA_SOURCE_STRING;  // 重置为默认数据源
    if (temp_ptr3 != (void *)0x0) {      // 再次检查自定义数据源
      string_ptr = temp_ptr3;
    }
    // 调用第三个缓冲区的处理函数指针
    (**(code **)(temp_ptr10 + 0x10))(&temp_ptr10, string_ptr);
    if (status_flag == 1) {
      char_count = *byte_ptr - 0x31;
      if (char_count == 0) {
        char_count = (uint)byte_ptr[1];
      }
      local_flag1 = char_count == 0;
    }
    else {
      local_flag1 = false;
    }
    // 初始化数据结构用于文件操作
    initialize_file_operation_structure(local_buffer6);  // 初始化文件操作结构
    process_file_operation_structure(local_buffer6);      // 处理文件操作结构
    
    // 准备文件路径字符串
    temp_ptr11 = &GLOBAL_STRING_EMPTY;     // 文件路径字符串指针
    char_buffer4 = local_buffer5;          // 文件路径缓冲区
    local_buffer5[0] = 0;                  // 清空路径缓冲区
    buffer_size4 = temp_flag3;              // 路径缓冲区大小
    
    string_ptr = &GLOBAL_DATA_SOURCE_STRING;  // 获取路径源字符串
    if (temp_ptr5 != (void *)0x0) {      // 检查是否有自定义路径
      string_ptr = temp_ptr5;
    }
    // 安全复制路径字符串到缓冲区
    copy_string_safely(local_buffer5, 0x40, string_ptr);
    
    // 执行文件操作
    execute_file_operation(local_buffer6, &temp_ptr11, &temp_ptr8);
    temp_ptr11 = &unknown_var_720_ptr;
    *param_2 = &unknown_var_720_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &unknown_var_3456_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2, 5);
    format_ptr = (int32_t *)param_2[1];
    *format_ptr = 0x656e6f44;  // "Done"
    *(int16_t *)(format_ptr + 1) = 0x2e;
    *(int32_t *)(param_2 + 2) = 5;
    format_flag = 1;
    // 清零长整型数组用于存储操作结果
    clear_long_integer_array(&local_var1, 16);  // 清零16个长整型变量
    
    // 处理数据结构并存储结果
    process_data_structure_and_store_results(local_buffer6, &local_var1);
    cleanup_processed_data_structure(&local_var1);
    
    // 清理临时缓冲区
    output_ptr = (void **)local_buffer7;    // 设置输出指针
    cleanup_temporary_buffer(local_buffer7);      // 清理临时缓冲区
    cleanup_file_operation_structure(local_buffer6);  // 清理文件操作结构
    temp_ptr10 = &unknown_var_720_ptr;
    temp_ptr9 = &unknown_var_720_ptr;
    output_ptr = &temp_ptr8;
    temp_ptr8 = &unknown_var_720_ptr;
    temp_ptr7 = &unknown_var_3456_ptr;
    if (byte_ptr != (byte *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    byte_ptr = (byte *)0x0;
    temp_flag1 = 0;
    temp_ptr7 = &unknown_var_720_ptr;
    temp_ptr6 = &unknown_var_3456_ptr;
    if (temp_ptr7 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    temp_ptr7 = (void *)0x0;
    temp_flag5 = 0;
    temp_ptr6 = &unknown_var_720_ptr;
    temp_ptr5 = &unknown_var_3456_ptr;
    if (temp_ptr3 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    temp_ptr3 = (void *)0x0;
    temp_flag2 = 0;
    temp_ptr5 = &unknown_var_720_ptr;
    temp_ptr4 = &unknown_var_3456_ptr;
    if (temp_ptr5 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    temp_ptr5 = (void *)0x0;
    temp_flag4 = 0;
    temp_ptr4 = &unknown_var_720_ptr;
  }
  else {
    *param_2 = &unknown_var_720_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &unknown_var_3456_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2, 0x62);
    buffer_ptr = (uint64_t *)param_2[1];
    *buffer_ptr = 0x636572726f636e49;  // "Incorrect number of"
    buffer_ptr[1] = 0x7265626d756e2074;  // "umber of argu"
    buffer_ptr[2] = 0x7567726120666f20;  // "ugments fo"
    buffer_ptr[3] = 0x550a2173746e656d;  // "r\n<Momentu"
    buffer_ptr[4] = 0x4d3c203a65676173;  // "m< :Name<"
    buffer_ptr[5] = 0x6d614e656c75646f;  // "Nameodule"
    buffer_ptr[6] = 0x666572503c203e65;  // "erPer< >e"
    buffer_ptr[7] = 0x3e656d614e206261;  // ">eName ba"
    *(int32_t *)(buffer_ptr + 8) = 0x614d3c20;  // "aM< "
    *(int32_t *)((longlong)buffer_ptr + 0x44) = 0x72696574;  // "tier"
    *(int32_t *)(buffer_ptr + 9) = 0x4e206c61;  // "N la"
    *(int32_t *)((longlong)buffer_ptr + 0x4c) = 0x3e656d61;  // ">ema"
    buffer_ptr[10] = 0x6f6c472073493c20;  // "olG sI< "
    buffer_ptr[0xb] = 0x302f3128206c6162;  // "0/1( lab"
    *(int16_t *)(buffer_ptr + 0xc) = 0x3e29;  // ">)"
    *(int8_t *)((longlong)buffer_ptr + 0x62) = 0;
    *(int32_t *)(param_2 + 2) = 0x62;
    format_flag = 1;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(security_cookie ^ (ulonglong)local_buffer1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: 处理核心引擎版本信息
// 参数:
//   param_1: 上下文参数
//   param_2: 输出缓冲区指针
//   param_3: 操作标识符
//   param_4: 数据块指针
// 返回值: 输出缓冲区指针
uint64_t *
process_engine_version_info(uint64_t param_1, uint64_t *param_2, uint64_t param_3, longlong *param_4)

{
  uint64_t *result_ptr;
  int32_t temp_flag;
  int32_t *buffer_ptr;
  uint64_t *data_ptr;
  void *temp_ptr1;
  uint64_t *temp_ptr2;
  int32_t buffer_size1;
  uint64_t local_var1;
  void *temp_ptr3;
  uint64_t *temp_ptr4;
  int32_t buffer_size2;
  uint64_t local_var2;
  uint64_t *temp_ptr5;
  uint64_t *temp_ptr6;
  uint64_t local_var3;
  int32_t buffer_size3;
  
  // 检查参数范围是否有效
  if (param_4[1] - *param_4 >> 5 != 0) {
    // 初始化指针数组用于存储版本信息字符串
    temp_ptr5 = (uint64_t *)0x0;    // 版本字符串数组指针
    temp_ptr6 = (uint64_t *)0x0;    // 版本字符串数组结束指针
    local_var3 = 0;                   // 版本字符串计数器
    buffer_size3 = 3;                 // 预期版本字符串数量
    
    // 准备创建第一个版本字符串
    temp_ptr1 = &GLOBAL_STRING_TERMINATOR;  // 字符串终止符
    local_var1 = 0;                   // 字符串长度
    temp_ptr2 = (uint64_t *)0x0;    // 字符串数据指针
    buffer_size1 = 0;                  // 缓冲区大小
    // 分配内存并创建"base"字符串
    buffer_ptr = (int32_t *)allocate_memory_with_parameters(
      GLOBAL_MEMORY_ALLOCATOR, 0x10, 0x13, param_4, 0, 0xfffffffffffffffe);
    *(int8_t *)buffer_ptr = 0;               // 初始化内存
    temp_ptr2 = (uint64_t *)buffer_ptr;        // 设置字符串指针
    temp_flag = get_allocated_memory_size(buffer_ptr);  // 获取内存大小
    *buffer_ptr = 0x65736162;  // "base"       // 设置字符串内容
    *(int8_t *)(buffer_ptr + 1) = 0;         // 字符串终止符
    buffer_size1 = 4;                           // 字符串长度
    local_var1._0_4_ = temp_flag;               // 存储内存大小信息
    add_string_to_array(&temp_ptr5, &temp_ptr1);  // 添加到字符串数组
    temp_ptr1 = &unknown_var_3456_ptr;
    if (temp_ptr2 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    temp_ptr2 = (uint64_t *)0x0;
    local_var1 = (ulonglong)local_var1._4_4_ << 0x20;
    temp_ptr1 = &unknown_var_720_ptr;
    temp_ptr3 = &unknown_var_3456_ptr;
    local_var2 = 0;
    temp_ptr4 = (uint64_t *)0x0;
    buffer_size2 = 0;
    // 分配内存并创建"level1"字符串
    data_ptr = (uint64_t *)allocate_memory_with_parameters(
      GLOBAL_MEMORY_ALLOCATOR, 0x10, 0x13);
    *(int8_t *)data_ptr = 0;                 // 初始化内存
    temp_ptr4 = data_ptr;                        // 设置字符串指针
    temp_flag = get_allocated_memory_size(data_ptr);  // 获取内存大小
    *data_ptr = 0x315f6c6576656c;  // "level1"  // 设置字符串内容
    buffer_size2 = 7;                           // 字符串长度
    local_var2._0_4_ = temp_flag;               // 存储内存大小信息
    add_string_to_array(&temp_ptr5, &temp_ptr3);  // 添加到字符串数组
    temp_ptr3 = &unknown_var_3456_ptr;
    if (temp_ptr4 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    temp_ptr4 = (uint64_t *)0x0;
    local_var2 = (ulonglong)local_var2._4_4_ << 0x20;
    temp_ptr3 = &unknown_var_720_ptr;
    temp_ptr1 = &unknown_var_3456_ptr;
    local_var1 = 0;
    temp_ptr2 = (uint64_t *)0x0;
    buffer_size1 = 0;
    data_ptr = (uint64_t *)FUN_18062b420(_DAT_180c8ed18, 0x10, 0x13);
    *(int8_t *)data_ptr = 0;
    temp_ptr2 = data_ptr;
    temp_flag = FUN_18064e990(data_ptr);
    *data_ptr = 0x325f6c6576656c;  // "level2"
    buffer_size1 = 7;
    local_var1._0_4_ = temp_flag;
    FUN_180066df0(&temp_ptr5, &temp_ptr1);
    temp_ptr1 = &unknown_var_3456_ptr;
    if (temp_ptr2 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    temp_ptr2 = (uint64_t *)0x0;
    local_var1 = (ulonglong)local_var1._4_4_ << 0x20;
    temp_ptr1 = &unknown_var_720_ptr;
    temp_ptr3 = &unknown_var_3456_ptr;
    local_var2 = 0;
    temp_ptr4 = (uint64_t *)0x0;
    buffer_size2 = 0;
    data_ptr = (uint64_t *)FUN_18062b420(_DAT_180c8ed18, 0x10, 0x13);
    *(int8_t *)data_ptr = 0;
    temp_ptr4 = data_ptr;
    temp_flag = FUN_18064e990(data_ptr);
    *data_ptr = 0x335f6c6576656c;  // "level3"
    buffer_size2 = 7;
    local_var2._0_4_ = temp_flag;
    FUN_180066df0(&temp_ptr5, &temp_ptr3);
    temp_ptr3 = &unknown_var_3456_ptr;
    if (temp_ptr4 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    temp_ptr4 = (uint64_t *)0x0;
    local_var2 = (ulonglong)local_var2._4_4_ << 0x20;
    temp_ptr3 = &unknown_var_720_ptr;
    temp_ptr1 = &unknown_var_3456_ptr;
    local_var1 = 0;
    temp_ptr2 = (uint64_t *)0x0;
    buffer_size1 = 0;
    data_ptr = (uint64_t *)FUN_18062b420(_DAT_180c8ed18, 0x10, 0x13);
    *(int8_t *)data_ptr = 0;
    temp_ptr2 = data_ptr;
    temp_flag = FUN_18064e990(data_ptr);
    *data_ptr = 0x6e61696c69766963;  // "civilian"
    *(int8_t *)(data_ptr + 1) = 0;
    buffer_size1 = 8;
    local_var1._0_4_ = temp_flag;
    FUN_180066df0(&temp_ptr5, &temp_ptr1);
    temp_ptr1 = &unknown_var_3456_ptr;
    if (temp_ptr2 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    temp_ptr2 = (uint64_t *)0x0;
    local_var1 = (ulonglong)local_var1._4_4_ << 0x20;
    temp_ptr1 = &unknown_var_720_ptr;
    // 处理版本信息回调函数
    process_version_callbacks(0, *param_4, *param_4 + 0x20, &temp_ptr5);
    result_ptr = temp_ptr6;                      // 获取数组结束指针
    
    // 遍历并执行所有回调函数
    for (data_ptr = temp_ptr5; data_ptr != result_ptr; data_ptr = data_ptr + 4) {
      (**(code **)*data_ptr)(data_ptr, 0);      // 调用回调函数
    }
    
    // 清理字符串数组内存
    if (temp_ptr5 != (uint64_t *)0x0) {
      // 警告：子程序不返回
      free_string_array(temp_ptr5);
    }
  }
  *param_2 = &unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3456_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  FUN_1806277c0(param_2, 0x27);
  data_ptr = (uint64_t *)param_2[1];
  *data_ptr = 0x6f66207475706e49;  // "Input format of "
  data_ptr[1] = 0x6d3c203a74616d72;  // "m< :marmat" -> "format <marmat"
  data_ptr[2] = 0x616e5f656c75646f;  // "an_unname" -> "an_unnamed"
  data_ptr[3] = 0x6c69663c203e656d;  // "lif< >em" -> "lif< >em"
  data_ptr[4] = 0x3e656d616e5f65;  // ">emaname" -> ">emaname"
  *(int32_t *)(param_2 + 2) = 0x27;          // 字符串总长度
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 处理核心引擎文件系统操作
// 参数:
//   param_1: 上下文参数
//   param_2: 操作标识符
//   param_3: 数据块指针
void process_engine_file_operations(uint64_t param_1, uint64_t param_2, longlong *param_3)

{
  uint temp_uint;
  code *error_handler;
  char temp_char;
  int temp_int;
  longlong temp_long;
  int32_t *temp_ptr1;
  uint64_t temp_var1;
  int32_t temp_var2;
  ulonglong temp_ulong;
  void *temp_ptr2;
  int8_t local_buffer1[32];
  int16_t *wide_char_ptr;
  int32_t file_operation_flag;
  int32_t temp_flag1;
  void *temp_ptr3;
  void *temp_ptr4;
  uint buffer_size1;
  uint64_t local_var1;
  void *temp_ptr5;
  longlong temp_long1;
  uint buffer_size2;
  uint64_t local_var2;
  void *temp_ptr6;
  longlong temp_long2;
  int16_t *wide_char_ptr2;
  uint64_t local_var3;
  int16_t wide_char_flag;
  int32_t operation_flag;
  uint64_t local_var4;
  uint64_t local_var5;
  void *temp_ptr7;
  longlong temp_long3;
  int32_t temp_flag2;
  uint64_t local_var6;
  void *pointer_array[68];
  int16_t wide_char_buffer[280];
  ulonglong security_cookie;
  
  local_var6 = 0xfffffffffffffffe;
  security_cookie = GET_SECURITY_COOKIE() ^ (ulonglong)local_buffer1;
  temp_flag1 = 0;
  // 检查参数范围并处理文件路径
  if (param_3[1] - *param_3 >> 5 != 0) {
    // 获取路径信息
    temp_long = get_file_path_info(&temp_ptr6);
    
    // 准备路径字符串缓冲区
    temp_ptr3 = &GLOBAL_STRING_TERMINATOR;  // 字符串终止符
    local_var1 = 0;                         // 字符串长度
    temp_ptr4 = (void *)0x0;           // 字符串数据指针
    buffer_size1 = 0;                        // 缓冲区大小
    temp_flag1 = 1;                         // 操作标志
    
    temp_uint = *(uint *)(temp_long + 0x10); // 获取路径长度
    temp_ulong = (ulonglong)temp_uint;      // 转换为无符号长整型
    
    // 分配内存存储路径
    if (*(longlong *)(temp_long + 8) != 0) {
      allocate_string_memory(&temp_ptr3, temp_ulong);
    }
    
    // 复制路径数据
    if (temp_uint != 0) {
      // 警告：子程序不返回
      copy_path_data(temp_ptr4, *(uint64_t *)(temp_long + 8), temp_ulong);
    }
    if (temp_ptr4 != (void *)0x0) {
      *(int8_t *)(temp_ulong + (longlong)temp_ptr4) = 0;
    }
    local_var1 = CONCAT44(*(int32_t *)(temp_long + 0x1c), (int32_t)local_var1);
    buffer_size1 = temp_uint;
    FUN_1806277c0(&temp_ptr3, 0xf);
    temp_ptr1 = (int32_t *)((ulonglong)buffer_size1 + (longlong)temp_ptr4);
    *temp_ptr1 = 0x72726554;  // "Trra"
    temp_ptr1[1] = 0x536e6961;  // "Sina"
    temp_ptr1[2] = 0x65646168;  // "edah"
    temp_ptr1[3] = 0x2f7372;  // "/sr"
    buffer_size1 = 0xf;
    temp_long = FUN_180627ce0(&temp_ptr3, &temp_ptr7, *param_3);
    temp_ptr5 = &unknown_var_3456_ptr;
    local_var2 = 0;
    temp_long1 = 0;
    buffer_size2 = 0;
    temp_flag1 = 3;
    temp_uint = *(uint *)(temp_long + 0x10);
    temp_ulong = (ulonglong)temp_uint;
    if (*(longlong *)(temp_long + 8) != 0) {
      FUN_1806277c0(&temp_ptr5, temp_ulong);
    }
    if (temp_uint != 0) {
                    // WARNING: Subroutine does not return
      memcpy(temp_long1, *(uint64_t *)(temp_long + 8), temp_ulong);
    }
    if (temp_long1 != 0) {
      *(int8_t *)(temp_ulong + temp_long1) = 0;
    }
    local_var2 = CONCAT44(*(int32_t *)(temp_long + 0x1c), (int32_t)local_var2);
    temp_var2 = 1;
    buffer_size2 = temp_uint;
    FUN_1806277c0(&temp_ptr5, 1);
    *(int16_t *)((ulonglong)buffer_size2 + temp_long1) = 0x2f;  // "/"
    temp_ptr7 = &unknown_var_3456_ptr;
    buffer_size2 = temp_var2;
    if (temp_long3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    temp_long3 = 0;
    temp_flag2 = 0;
    temp_ptr7 = &unknown_var_720_ptr;
    temp_flag1 = 2;
    temp_ptr3 = &unknown_var_3456_ptr;
    if (temp_ptr4 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    temp_ptr4 = (void *)0x0;
    local_var1 = local_var1 & 0xffffffff00000000;
    temp_ptr3 = &unknown_var_720_ptr;
    temp_ptr6 = &unknown_var_3456_ptr;
    if (temp_long2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    temp_long2 = 0;
    local_var3 = (ulonglong)local_var3._4_4_ << 0x20;
    temp_ptr6 = &unknown_var_720_ptr;
    temp_char = FUN_180624a00(&temp_ptr5);
    if (temp_char != '\0') {
      temp_var1 = FUN_180624440(pointer_array, &temp_ptr5);
      FUN_1806279c0(&temp_ptr3, temp_var1);
      pointer_array[0] = &unknown_var_720_ptr;
      temp_ptr2 = &system_buffer_ptr;
      if (temp_ptr4 != (void *)0x0) {
        temp_ptr2 = temp_ptr4;
      }
      temp_flag1 = 0x118;
      wide_char_ptr = wide_char_buffer;
      temp_int = MultiByteToWideChar(0xfde9, 0, temp_ptr2, 0xffffffff);
      if (0x22f < (ulonglong)((longlong)temp_int * 2)) {
LAB_180167a3b:
        FUN_1808fcdc8();
        error_handler = (code *)swi(3);
        (*error_handler)();
        return;
      }
      wide_char_buffer[temp_int] = 0;
      if (0x22f < (ulonglong)((longlong)(temp_int + 1) * 2)) {
        FUN_1808fcdc8();
        goto LAB_180167a3b;
      }
      wide_char_buffer[temp_int + 1] = 0;
      temp_ptr6 = (void *)0x0;
      temp_long2 = CONCAT44(temp_long2._4_4_, 3);
      wide_char_ptr2 = wide_char_buffer;
      local_var3 = 0;
      wide_char_flag = 0x14;
      operation_flag = 0;
      local_var5 = 0;
      local_var4 = 0;
      SHFileOperationW(&temp_ptr6);
      temp_ptr3 = &unknown_var_3456_ptr;
      if (temp_ptr4 != (void *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      temp_ptr4 = (void *)0x0;
      local_var1 = local_var1 & 0xffffffff00000000;
      temp_ptr3 = &unknown_var_720_ptr;
    }
    temp_flag1 = 0;
    temp_ptr5 = &unknown_var_3456_ptr;
    if (temp_long1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    temp_long1 = 0;
    local_var2 = local_var2 & 0xffffffff00000000;
    temp_ptr5 = &unknown_var_720_ptr;
  }
  temp_flag1 = 0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(security_cookie ^ (ulonglong)local_buffer1);
}


