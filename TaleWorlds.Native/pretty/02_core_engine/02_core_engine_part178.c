#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part178.c - 核心引擎字符串处理和错误消息生成模块

// 函数：更新链表节点指针
// 功能：在双向链表中插入一个新节点，更新前后节点的指针关系
void update_linked_list_node_pointers(void)

{
  int64_t next_node_ptr;          // 下一个节点的指针
  int64_t list_context_ptr;       // 链表上下文指针
  int64_t node_index;             // 节点索引
  int64_t value_offset;            // 值偏移量
  int64_t *node_ptr;               // 当前节点指针
  
  // 将下一个节点的数据复制到当前节点的0x40偏移位置
  *(uint64_t *)(node_index + 0x40) = *(uint64_t *)(*(int64_t *)(list_context_ptr + 8) + value_offset * 8);
  
  // 将当前节点插入到链表中，更新前后节点的指针
  *(int64_t *)(*(int64_t *)(list_context_ptr + 8) + value_offset * 8) = node_index;
  next_node_ptr = *(int64_t *)(list_context_ptr + 8);
  
  // 更新链表节点计数
  *(int64_t *)(list_context_ptr + 0x18) = *(int64_t *)(list_context_ptr + 0x18) + 1;
  
  // 设置新节点的指针
  *node_ptr = node_index;
  node_ptr[1] = next_node_ptr + value_offset * 8;
  *(int8_t *)(node_ptr + 2) = 1;  // 标记节点为活跃状态
  
  return;
}



// 警告：以'_'开头的全局变量与同一地址的较小符号重叠

// 函数：生成"Value too large"错误消息
// 功能：当检测到数值过大时，生成相应的错误消息
uint64_t *
generate_value_too_large_error_message(uint64_t *output_buffer,uint64_t input_value,int64_t *error_context,uint64_t error_code)

{
  uint buffer_size;
  int64_t string_ptr;
  int64_t temp_ptr1;
  int64_t temp_ptr2;
  int64_t temp_ptr3;
  int64_t temp_ptr4;
  uint64_t format_result;
  void *stack_ptr1;
  int32_t *stack_ptr2;
  int current_length;
  int temp_length;
  int32_t xmm0_reg;
  int32_t xmm0_reg_00;
  int32_t flag_value;
  void *stack_var1;
  void *stack_var2;
  int stack_var3;
  void *stack_var4;
  int64_t stack_var5;
  int32_t stack_var6;
  
  // 初始化输出缓冲区
  *output_buffer = &STRING_CONSTANT_EMPTY;
  output_buffer[1] = 0;
  *(int32_t *)(output_buffer + 2) = 0;
  *output_buffer = &STRING_CONSTANT_EMPTY;
  output_buffer[3] = 0;
  output_buffer[1] = 0;
  *(int32_t *)(output_buffer + 2) = 0;
  
  // 初始化错误处理上下文
  CoreEngineDataBufferProcessor(output_buffer,0,error_context,error_code,0,0xfffffffffffffffe);
  *(int32_t *)(output_buffer + 2) = 0;
  
  // 清空缓冲区内容
  if ((int8_t *)output_buffer[1] != (int8_t *)0x0) {
    *(int8_t *)output_buffer[1] = 0;
  }
  
  flag_value = 1;
  CoreEngineDataTransformer(&stack_var1,input_value);
  
  // 检查错误上下文大小
  if (error_context[1] - *error_context >> 5 == 0) {
    stack_ptr1 = &DAT;
    if (stack_var2 != (void *)0x0) {
      stack_ptr1 = stack_var2;
    }
    
    // 搜索特定字符串模式
    string_ptr = strstr(stack_ptr1,&STRING_PATTERN_TOO_LARGE);
    current_length = *(int *)(output_buffer + 2);
    
    if (string_ptr == 0) {
      temp_length = current_length + 9;
      CoreEngineDataBufferProcessor(output_buffer,temp_length);
      buffer_size = *(uint *)(output_buffer + 2);
      string_ptr = output_buffer[1];
      
      // 写入"Value too "字符串
      *(uint64_t *)((uint64_t)buffer_size + string_ptr) = 0x666f2065756c6156;  // "Value "
      *(int16_t *)((uint64_t *)((uint64_t)buffer_size + string_ptr) + 1) = 0x20;
      *(int *)(output_buffer + 2) = temp_length;
      
      // 如果有额外数据，追加到缓冲区
      if (0 < stack_var3) {
        CoreEngineDataBufferProcessor(output_buffer,temp_length + stack_var3);
        // 警告：子函数不返回
        memcpy((uint64_t)*(uint *)(output_buffer + 2) + output_buffer[1],stack_var2,(int64_t)(stack_var3 + 1));
      }
      
      // 写入"is "字符串
      CoreEngineDataBufferProcessor(output_buffer,current_length + 0xd);
      buffer_size = *(uint *)(output_buffer + 2);
      string_ptr = output_buffer[1];
      *(int32_t *)((uint64_t)buffer_size + string_ptr) = 0x20736920;  // " is"
      *(int8_t *)((int32_t *)((uint64_t)buffer_size + string_ptr) + 1) = 0;
      *(int *)(output_buffer + 2) = current_length + 0xd;
      
      // 格式化错误消息
      format_result = FUN_1800af9f0(_DAT,&stack_var4,&stack_var1,error_code,flag_value);
      FUN_180628320(output_buffer,format_result);
      
      stack_var4 = &STRING_CONSTANT_EMPTY;
      if (stack_var5 != 0) {
        // 警告：子函数不返回
        CoreEngineMemoryPoolCleaner();
      }
      stack_var5 = 0;
      stack_var6 = 0;
      stack_var4 = &STRING_CONSTANT_EMPTY;
      
      current_length = *(int *)(output_buffer + 2) + 1;
      CoreEngineDataBufferProcessor(output_buffer,current_length);
      *(int16_t *)((uint64_t)*(uint *)(output_buffer + 2) + output_buffer[1]) = 10;  // 换行符
    }
    else {
      // 生成"Possible stack level overflow"错误消息
      CoreEngineDataBufferProcessor(output_buffer,current_length + 0x26);
      stack_ptr2 = (int32_t *)((uint64_t)*(uint *)(output_buffer + 2) + output_buffer[1]);
      
      // 写入"Possible stack level overflow "字符串
      *stack_ptr2 = 0x73736f50;                    // "Poss"
      stack_ptr2[1] = 0x656c6269;                   // "ible"
      stack_ptr2[2] = 0x6c617620;                   // " stac"
      stack_ptr2[3] = 0x20736575;                   // "k over"
      stack_ptr2[4] = 0x6120666f;                   // "flow "
      stack_ptr2[5] = 0x206f7475;                   // "out "
      stack_ptr2[6] = 0x20786667;                   // "xfig "
      stack_ptr2[7] = 0x6c617571;                   // "laqu"
      stack_ptr2[8] = 0x20797469;                   // "ity"
      *(int16_t *)(stack_ptr2 + 9) = 0xa3a;      // ":\n"
      *(int8_t *)((int64_t)stack_ptr2 + 0x26) = 0;
      *(int *)(output_buffer + 2) = current_length + 0x26;
      
      // 写入版本信息
      CoreEngineDataBufferProcessor(output_buffer,current_length + 0x2e);
      buffer_size = *(uint *)(output_buffer + 2);
      string_ptr = output_buffer[1];
      *(uint64_t *)((uint64_t)buffer_size + string_ptr) = 0xa776f4c203a2030;  // " L4v:\n"
      *(int8_t *)((uint64_t *)((uint64_t)buffer_size + string_ptr) + 1) = 0;
      *(int *)(output_buffer + 2) = current_length + 0x2e;
      
      // 写入"Media version"信息
      CoreEngineDataBufferProcessor(output_buffer,current_length + 0x39);
      buffer_size = *(uint *)(output_buffer + 2);
      string_ptr = output_buffer[1];
      *(uint64_t *)((uint64_t)buffer_size + string_ptr) = 0x6964654d203a2031;  // " Media v"
      *(int32_t *)((uint64_t *)((uint64_t)buffer_size + string_ptr) + 1) = 0xa6d75;  // "u:\n"
      *(int *)(output_buffer + 2) = current_length + 0x39;
      
      // 写入"High version"信息
      CoreEngineDataBufferProcessor(output_buffer,current_length + 0x42);
      buffer_size = *(uint *)(output_buffer + 2);
      string_ptr = output_buffer[1];
      *(uint64_t *)((uint64_t)buffer_size + string_ptr) = 0x68676948203a2032;  // " High v"
      *(int16_t *)((uint64_t *)((uint64_t)buffer_size + string_ptr) + 1) = 10;  // "2\n"
      *(int *)(output_buffer + 2) = current_length + 0x42;
      
      current_length = current_length + 0x51;
      CoreEngineDataBufferProcessor(output_buffer,current_length);
      stack_ptr2 = (int32_t *)((uint64_t)*(uint *)(output_buffer + 2) + output_buffer[1]);
      
      // 写入版本号3信息
      *stack_ptr2 = 0x203a2033;                    // " :3"
      stack_ptr2[1] = 0x79726556;                   // "Very"
      stack_ptr2[2] = 0x67694820;                   // " Hig"
      stack_ptr2[3] = 0xa0a68;                     // "h\n"
    }
    *(int *)(output_buffer + 2) = current_length;
  }
  else {
    // 处理其他错误情况
    CoreEngineDataTransformer(&stack_var4);
    stack_ptr1 = &DAT;
    if (stack_var2 != (void *)0x0) {
      stack_ptr1 = stack_var2;
    }
    
    // 搜索不同的错误模式
    string_ptr = strstr(stack_ptr1,&STRING_PATTERN_TOO_LARGE);
    if (string_ptr == 0) {
      FUN_1800af2c0(_DAT,&stack_var1,&stack_var4);
    }
    else {
      flag_value = atoi(stack_var5);
      FUN_180100ff0(xmm0_reg,flag_value);
    }
    
    // 搜索更多错误模式
    stack_ptr1 = &DAT;
    if (stack_var2 != (void *)0x0) {
      stack_ptr1 = stack_var2;
    }
    string_ptr = strstr(stack_ptr1,&STRING_PATTERN_TYPE1);
    
    stack_ptr1 = &DAT;
    if (stack_var2 != (void *)0x0) {
      stack_ptr1 = stack_var2;
    }
    temp_ptr1 = strstr(stack_ptr1,&STRING_PATTERN_TYPE2);
    
    stack_ptr1 = &DAT;
    if (stack_var2 != (void *)0x0) {
      stack_ptr1 = stack_var2;
    }
    temp_ptr2 = strstr(stack_ptr1,&STRING_PATTERN_TYPE3);
    
    stack_ptr1 = &DAT;
    if (stack_var2 != (void *)0x0) {
      stack_ptr1 = stack_var2;
    }
    temp_ptr3 = strstr(stack_ptr1,&STRING_PATTERN_TYPE4);
    
    // 检查是否找到任何错误模式
    if ((((string_ptr == 0) && (temp_ptr1 == 0)) && (temp_ptr2 == 0)) && (temp_ptr3 == 0)) {
      format_result = 0;
    }
    else {
      format_result = 1;
    }
    FUN_180103970(xmm0_reg_00,format_result);
    
    current_length = *(int *)(output_buffer + 2);
    CoreEngineDataBufferProcessor(output_buffer,current_length + 0x23);
    stack_ptr2 = (int32_t *)((uint64_t)*(uint *)(output_buffer + 2) + output_buffer[1]);
    
    // 写入"Engine config"错误消息
    *stack_ptr2 = 0x69676e45;                    // "Engin"
    stack_ptr2[1] = 0x6320656e;                   // "e con"
    stack_ptr2[2] = 0x69666e6f;                   // "fig c"
    stack_ptr2[3] = 0x68632067;                   // "hang "
    stack_ptr2[4] = 0x65676e61;                   // "ange"
    stack_ptr2[5] = 0x75732064;                   // "d us"
    stack_ptr2[6] = 0x73656363;                   // "cess"
    stack_ptr2[7] = 0x6c756673;                   // "ful."
    stack_ptr2[8] = 0x2e796c;                     // "yl."
    *(int *)(output_buffer + 2) = current_length + 0x23;
    
    stack_var4 = &STRING_CONSTANT_EMPTY;
    if (stack_var5 != 0) {
      // 警告：子函数不返回
      CoreEngineMemoryPoolCleaner();
    }
    stack_var5 = 0;
    stack_var6 = 0;
    stack_var4 = &STRING_CONSTANT_EMPTY;
  }
  
  stack_var1 = &STRING_CONSTANT_EMPTY;
  if (stack_var2 != (void *)0x0) {
    // 警告：子函数不返回
    CoreEngineMemoryPoolCleaner();
  }
  
  return output_buffer;
}



// 警告：以'_'开头的全局变量与同一地址的较小符号重叠

// 函数：生成"Possible stack overflow"错误消息
// 功能：当检测到可能的堆栈溢出时，生成相应的错误消息
uint64_t *
generate_possible_stack_overflow_error(uint64_t *output_buffer,uint64_t input_value,int64_t *error_context,uint64_t error_code)

{
  uint buffer_size;
  int64_t string_ptr;
  int32_t *buffer_ptr;
  void *stack_ptr1;
  uint64_t *wide_buffer_ptr;
  int current_length;
  int temp_length;
  int32_t flag_value;
  void *stack_var1;
  void *stack_var2;
  int stack_var3;
  void *stack_var4;
  int64_t stack_var5;
  int32_t stack_var6;
  
  // 初始化输出缓冲区
  *output_buffer = &STRING_CONSTANT_EMPTY;
  output_buffer[1] = 0;
  *(int32_t *)(output_buffer + 2) = 0;
  *output_buffer = &STRING_CONSTANT_EMPTY;
  output_buffer[3] = 0;
  output_buffer[1] = 0;
  *(int32_t *)(output_buffer + 2) = 0;
  
  // 初始化错误处理上下文
  CoreEngineDataBufferProcessor(output_buffer,0,error_context,error_code,0,0xfffffffffffffffe);
  *(int32_t *)(output_buffer + 2) = 0;
  
  // 清空缓冲区内容
  if ((int8_t *)output_buffer[1] != (int8_t *)0x0) {
    *(int8_t *)output_buffer[1] = 0;
  }
  
  flag_value = 1;
  CoreEngineDataTransformer(&stack_var1,input_value);
  
  // 检查错误上下文大小
  if (error_context[1] - *error_context >> 5 == 0) {
    stack_ptr1 = &DAT;
    if (stack_var2 != (void *)0x0) {
      stack_ptr1 = stack_var2;
    }
    
    // 搜索堆栈溢出模式
    string_ptr = strstr(stack_ptr1,&STRING_PATTERN_STACK_OVERFLOW);
    current_length = *(int *)(output_buffer + 2);
    
    if (string_ptr != 0) {
      // 生成详细的堆栈溢出错误消息
      CoreEngineDataBufferProcessor(output_buffer,current_length + 0x2b);
      wide_buffer_ptr = (uint64_t *)((uint64_t)*(uint *)(output_buffer + 2) + output_buffer[1]);
      
      // 写入"Possible stack overflow "字符串
      *wide_buffer_ptr = 0x656c626973736f50;        // "Possible"
      wide_buffer_ptr[1] = 0x207365756c617620;       // " stack "
      *(int32_t *)(wide_buffer_ptr + 2) = 0x7320666f;  // "over"
      *(int32_t *)((int64_t)wide_buffer_ptr + 0x14) = 0x65657263;  // "rec"
      *(int32_t *)(wide_buffer_ptr + 3) = 0x6f68736e;  // "nsio"
      *(int32_t *)((int64_t)wide_buffer_ptr + 0x1c) = 0x6f662074;  // "n fo"
      wide_buffer_ptr[4] = 0x2073692074616d72;       // "r missi"
      *(int32_t *)(wide_buffer_ptr + 5) = 0xa203a;       // "ng:\n"
      *(int *)(output_buffer + 2) = current_length + 0x2b;
      
      // 写入版本信息
      CoreEngineDataBufferProcessor(output_buffer,current_length + 0x34);
      buffer_size = *(uint *)(output_buffer + 2);
      string_ptr = output_buffer[1];
      *(uint64_t *)((uint64_t)buffer_size + string_ptr) = 0x6765704a203a2030;  // " Jpeg:\n"
      *(int16_t *)((uint64_t *)((uint64_t)buffer_size + string_ptr) + 1) = 10;
      *(int *)(output_buffer + 2) = current_length + 0x34;
      
      // 写入引擎版本信息
      CoreEngineDataBufferProcessor(output_buffer,current_length + 0x3c);
      buffer_size = *(uint *)(output_buffer + 2);
      string_ptr = output_buffer[1];
      *(uint64_t *)((uint64_t)buffer_size + string_ptr) = 0xa676e50203a2031;  // " Eng:\n"
      *(int8_t *)((uint64_t *)((uint64_t)buffer_size + string_ptr) + 1) = 0;
      *(int *)(output_buffer + 2) = current_length + 0x3c;
      
      current_length = current_length + 0x45;
      CoreEngineDataBufferProcessor(output_buffer,current_length);
      buffer_size = *(uint *)(output_buffer + 2);
      string_ptr = output_buffer[1];
      *(uint64_t *)((uint64_t)buffer_size + string_ptr) = 0xa736444203a2032;  // " Dds:\n"
      *(int16_t *)((uint64_t *)((uint64_t)buffer_size + string_ptr) + 1) = 10;
      *(int *)(output_buffer + 2) = current_length;
    }
    
    temp_length = current_length + 9;
    CoreEngineDataBufferProcessor(output_buffer,temp_length);
    buffer_size = *(uint *)(output_buffer + 2);
    string_ptr = output_buffer[1];
    
    // 写入"Value too "字符串
    *(uint64_t *)((uint64_t)buffer_size + string_ptr) = 0x666f2065756c6156;  // "Value "
    *(int16_t *)((uint64_t *)((uint64_t)buffer_size + string_ptr) + 1) = 0x20;
    *(int *)(output_buffer + 2) = temp_length;
    
    // 如果有额外数据，追加到缓冲区
    if (0 < stack_var3) {
      CoreEngineDataBufferProcessor(output_buffer,temp_length + stack_var3);
      // 警告：子函数不返回
      memcpy((uint64_t)*(uint *)(output_buffer + 2) + output_buffer[1],stack_var2,(int64_t)(stack_var3 + 1));
    }
    
    // 写入"is "字符串
    CoreEngineDataBufferProcessor(output_buffer,current_length + 0xd);
    buffer_size = *(uint *)(output_buffer + 2);
    string_ptr = output_buffer[1];
    *(int32_t *)((uint64_t)buffer_size + string_ptr) = 0x20736920;  // " is"
    *(int8_t *)((int32_t *)((uint64_t)buffer_size + string_ptr) + 1) = 0;
    *(int *)(output_buffer + 2) = current_length + 0xd;
    
    // 格式化错误消息
    string_ptr = FUN_1800af9f0(_DAT,&stack_var4,&stack_var1);
    
    // 如果格式化结果有内容，追加到缓冲区
    if (0 < *(int *)(string_ptr + 0x10)) {
      CoreEngineDataBufferProcessor(output_buffer,*(int *)(output_buffer + 2) + *(int *)(string_ptr + 0x10));
      // 警告：子函数不返回
      memcpy((uint64_t)*(uint *)(output_buffer + 2) + output_buffer[1],*(uint64_t *)(string_ptr + 8),
             (int64_t)(*(int *)(string_ptr + 0x10) + 1));
    }
    
    stack_var4 = &STRING_CONSTANT_EMPTY;
    if (stack_var5 != 0) {
      // 警告：子函数不返回
      CoreEngineMemoryPoolCleaner();
    }
    stack_var5 = 0;
    stack_var6 = 0;
    stack_var4 = &STRING_CONSTANT_EMPTY;
    
    current_length = *(int *)(output_buffer + 2);
    CoreEngineDataBufferProcessor(output_buffer,current_length + 1);
    *(int16_t *)((uint64_t)*(uint *)(output_buffer + 2) + output_buffer[1]) = 10;  // 换行符
    *(int *)(output_buffer + 2) = current_length + 1;
  }
  else {
    // 处理其他错误情况
    CoreEngineDataTransformer(&stack_var4);
    FUN_1800af2c0(_DAT,&stack_var1,&stack_var4,error_code,flag_value);
    current_length = *(int *)(output_buffer + 2);
    CoreEngineDataBufferProcessor(output_buffer,current_length + 0x23);
    buffer_ptr = (int32_t *)((uint64_t)*(uint *)(output_buffer + 2) + output_buffer[1]);
    
    // 写入"Module config"错误消息
    *buffer_ptr = 0x75646f4d;                    // "Modul"
    buffer_ptr[1] = 0x6f20656c;                   // "e con"
    buffer_ptr[2] = 0x6f697470;                   // "fig c"
    buffer_ptr[3] = 0x6863206e;                   // "hang"
    buffer_ptr[4] = 0x65676e61;                   // "ange"
    buffer_ptr[5] = 0x75732064;                   // "d us"
    buffer_ptr[6] = 0x73656363;                   // "cess"
    buffer_ptr[7] = 0x6c756673;                   // "ful."
    buffer_ptr[8] = 0x2e796c;                     // "yl."
    *(int *)(output_buffer + 2) = current_length + 0x23;
    
    stack_var4 = &STRING_CONSTANT_EMPTY;
    if (stack_var5 != 0) {
      // 警告：子函数不返回
      CoreEngineMemoryPoolCleaner();
    }
    stack_var5 = 0;
    stack_var6 = 0;
    stack_var4 = &STRING_CONSTANT_EMPTY;
  }
  
  stack_var1 = &STRING_CONSTANT_EMPTY;
  if (stack_var2 != (void *)0x0) {
    // 警告：子函数不返回
    CoreEngineMemoryPoolCleaner();
  }
  
  return output_buffer;
}



// 函数：初始化错误处理回调
// 功能：设置错误处理回调函数的初始状态
uint64_t *
initialize_error_handler_callback(uint64_t *callback_struct,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t callback_flag;
  
  callback_flag = 0xfffffffffffffffe;
  *callback_struct = &STRING_CONSTANT_EMPTY;
  callback_struct[1] = 0;
  *(int32_t *)(callback_struct + 2) = 0;
  *callback_struct = &STRING_CONSTANT_EMPTY;
  callback_struct[3] = 0;
  callback_struct[1] = 0;
  *(int32_t *)(callback_struct + 2) = 0;
  callback_struct[5] = 0;
  callback_struct[6] = 0;
  callback_struct[7] = 0;
  *(int32_t *)(callback_struct + 8) = 3;
  callback_struct[0xc] = 0;
  callback_struct[0xd] = _guard_check_icall;
  callback_struct[0xe] = 0;
  callback_struct[0xf] = 0;
  callback_struct[0x10] = 0;
  
  // 初始化回调环境
  FUN_180627be0();
  *(int32_t *)(callback_struct + 4) = 0;
  
  // 如果有回调函数，执行它
  if ((code *)callback_struct[0xc] != (code *)0x0) {
    (*(code *)callback_struct[0xc])(callback_struct + 10,0,0,param_4,callback_flag);
  }
  
  // 清理回调函数指针
  callback_struct[0xc] = 0;
  callback_struct[0xd] = _guard_check_icall;
  callback_struct[9] = 0;
  
  return callback_struct;
}



// 函数：设置错误处理回调
// 功能：配置错误处理回调函数和相关参数
uint64_t *
setup_error_handler_callback(uint64_t *callback_struct,uint64_t param_2,uint64_t *callback_target,uint64_t param_4)

{
  uint64_t *callback_data;
  code *callback_func;
  uint64_t callback_flag;
  
  callback_flag = 0xfffffffffffffffe;
  *callback_struct = &STRING_CONSTANT_EMPTY;
  callback_struct[1] = 0;
  *(int32_t *)(callback_struct + 2) = 0;
  *callback_struct = &STRING_CONSTANT_EMPTY;
  callback_struct[3] = 0;
  callback_struct[1] = 0;
  *(int32_t *)(callback_struct + 2) = 0;
  callback_struct[5] = 0;
  callback_struct[6] = 0;
  callback_struct[7] = 0;
  *(int32_t *)(callback_struct + 8) = 3;
  callback_data = callback_struct + 10;
  callback_struct[0xc] = 0;
  callback_struct[0xd] = _guard_check_icall;
  callback_struct[0xe] = 0;
  callback_struct[0xf] = 0;
  callback_struct[0x10] = 0;
  
  // 初始化回调环境
  FUN_180627be0();
  *(int32_t *)(callback_struct + 4) = 1;
  
  // 如果回调目标不同，执行回调切换
  if (callback_data != callback_target) {
    if ((code *)callback_struct[0xc] != (code *)0x0) {
      (*(code *)callback_struct[0xc])(callback_data,0,0,param_4,callback_flag);
    }
    callback_func = (code *)callback_target[2];
    if (callback_func != (code *)0x0) {
      (*callback_func)(callback_data,callback_target,1);
      callback_func = (code *)callback_target[2];
    }
    callback_struct[0xc] = callback_func;
    callback_struct[0xd] = callback_target[3];
  }
  
  callback_struct[9] = 0;
  
  // 执行目标回调函数
  if ((code *)callback_target[2] != (code *)0x0) {
    (*(code *)callback_target[2])(callback_target,0,0);
  }
  
  return callback_struct;
}



// 警告：以'_'开头的全局变量与同一地址的较小符号重叠

// 函数：处理配置命令
// 功能：根据命令类型处理不同的配置操作，生成相应的响应消息
uint64_t * process_config_command(int64_t command_context,uint64_t *output_buffer,uint64_t input_param)

{
  int command_type;
  double double_value;
  uint buffer_size;
  int32_t temp_value;
  int8_t *string_buffer;
  uint64_t *buffer_ptr;
  void *stack_ptr1;
  uint64_t temp_ulong;
  int8_t *temp_ptr1;
  uint64_t temp_ulong2;
  uint8_t temp_var7;
  int64_t temp_long;
  int temp_int1;
  uint temp_uint;
  uint64_t *temp_ptr2;
  int8_t *temp_ptr3;
  uint stack_var8;
  uint64_t *stack_ptr_c0;
  uint64_t *stack_ptr_b8;
  uint stack_b0;
  uint stack_a8;
  int32_t stack_a4;
  void *stack_a0;
  void *stack_98;
  int32_t stack_88;
  uint64_t *stack_80;
  uint64_t *stack_78;
  int32_t stack_68;
  uint64_t *stack_60;
  uint64_t *stack_58;
  uint64_t stack_40;
  
  stack_40 = 0xfffffffffffffffe;
  temp_ptr1 = (int8_t *)0x0;
  command_type = *(int *)(command_context + 0x20);
  
  // 根据命令类型处理不同的配置操作
  if (command_type == 0) {
    // 未知命令类型
    *output_buffer = &STRING_CONSTANT_EMPTY;
    output_buffer[1] = 0;
    *(int32_t *)(output_buffer + 2) = 0;
    *output_buffer = &STRING_CONSTANT_EMPTY;
    output_buffer[3] = 0;
    output_buffer[1] = 0;
    *(int32_t *)(output_buffer + 2) = 0;
    CoreEngineDataBufferProcessor(output_buffer,0xf);
    buffer_ptr = (uint64_t *)output_buffer[1];
    *buffer_ptr = 0x206e776f6e6b6e55;  // "Unknown"
    buffer_ptr[1] = 0x646e616d6d6f63;  // " command"
    *(int32_t *)(output_buffer + 2) = 0xf;
  }
  else {
    if (command_type == 1) {
      // 处理版本查询命令
      SystemCore_EncryptionEngine0(&stack_a0,input_param);
      FUN_180169c30(&stack_80,&stack_a0);
      stack_a0 = &STRING_CONSTANT_EMPTY;
      
      if (stack_98 != (void *)0x0) {
        // 警告：子函数不返回
        CoreEngineMemoryPoolCleaner();
      }
      stack_98 = (void *)0x0;
      stack_88 = 0;
      stack_a0 = &STRING_CONSTANT_EMPTY;
      
      // 执行版本查询
      temp_long = (**(code **)(command_context + 0x68))(&stack_a0,command_context,&stack_80);
      
      *output_buffer = &STRING_CONSTANT_EMPTY;
      output_buffer[1] = 0;
      *(int32_t *)(output_buffer + 2) = 0;
      *output_buffer = &STRING_CONSTANT_EMPTY;
      output_buffer[3] = 0;
      output_buffer[1] = 0;
      *(int32_t *)(output_buffer + 2) = 0;
      
      // 复制版本信息到输出缓冲区
      *(int32_t *)(output_buffer + 2) = *(int32_t *)(temp_long + 0x10);
      output_buffer[1] = *(uint64_t *)(temp_long + 8);
      *(int32_t *)((int64_t)output_buffer + 0x1c) = *(int32_t *)(temp_long + 0x1c);
      *(int32_t *)(output_buffer + 3) = *(int32_t *)(temp_long + 0x18);
      
      // 清理版本信息缓冲区
      *(int32_t *)(temp_long + 0x10) = 0;
      *(uint64_t *)(temp_long + 8) = 0;
      *(uint64_t *)(temp_long + 0x18) = 0;
      
      stack_a0 = &STRING_CONSTANT_EMPTY;
      if (stack_98 != (void *)0x0) {
        // 警告：子函数不返回
        CoreEngineMemoryPoolCleaner();
      }
      stack_98 = (void *)0x0;
      stack_88 = 0;
      stack_a0 = &STRING_CONSTANT_EMPTY;
      
      stack_ptr_c0 = stack_80;
      
      // 执行清理回调
      for (buffer_ptr = stack_80; buffer_ptr != stack_78; buffer_ptr = buffer_ptr + 4) {
        stack_80 = stack_ptr_c0;
        (**(code **)*buffer_ptr)(buffer_ptr,0);
        stack_ptr_c0 = stack_80;
      }
    }
    else {
      if (command_type != 2) {
        if (command_type != 3) {
          // 无效命令类型
          *output_buffer = &STRING_CONSTANT_EMPTY;
          output_buffer[1] = 0;
          *(int32_t *)(output_buffer + 2) = 0;
          *output_buffer = &STRING_CONSTANT_EMPTY;
          output_buffer[3] = 0;
          output_buffer[1] = 0;
          *(int32_t *)(output_buffer + 2) = 0;
          CoreEngineDataBufferProcessor(output_buffer,0x1a);
          buffer_ptr = (uint64_t *)output_buffer[1];
          *buffer_ptr = 0x206e776f6e6b6e75;  // "Unknown "
          buffer_ptr[1] = 0x20646e616d6d6f63;  // " command "
          buffer_ptr[2] = 0x70797420656e696c;  // "type #"
          *(int16_t *)(buffer_ptr + 3) = 0x2165;  // "e!"
          *(int8_t *)((int64_t)buffer_ptr + 0x1a) = 0;
          *(int32_t *)(output_buffer + 2) = 0x1a;
          return output_buffer;
        }
        
        // 处理复杂配置命令
        FUN_1801624e0(command_context,&stack_a0);
        SystemCore_EncryptionEngine0(&stack_80,input_param);
        FUN_180169c30(&stack_60);
        stack_80 = (uint64_t *)&STRING_CONSTANT_EMPTY;
        
        if (stack_78 != (uint64_t *)0x0) {
          // 警告：子函数不返回
          CoreEngineMemoryPoolCleaner();
        }
        stack_78 = (uint64_t *)0x0;
        stack_68 = 0;
        stack_80 = (uint64_t *)&STRING_CONSTANT_EMPTY;
        stack_ptr_c0 = (uint64_t *)&STRING_CONSTANT_EMPTY;
        stack_a8 = 0;
        stack_ptr_b8 = (uint64_t *)0x0;
        stack_b0 = 0;
        stack_a4 = 0;
        temp_ulong2 = 0;
        stack_var8 = 0;
        temp_ptr3 = temp_ptr1;
        
        // 处理配置参数
        if ((int64_t)stack_58 - (int64_t)stack_60 >> 5 != 0) {
          temp_ulong = 0;
          temp_long = 0;
          buffer_ptr = stack_58;
          temp_ptr2 = stack_60;
          temp_ptr3 = temp_ptr1;
          
          do {
            command_type = *(int *)((int64_t)temp_ptr2 + temp_long + 0x10);
            temp_uint64_t = (uint8_t)(temp_ulong2 >> 8);
            temp_int1 = (int)temp_ptr3;
            
            if (0 < command_type) {
              temp_int1 = temp_int1 + command_type;
              if (temp_int1 != 0) {
                temp_uint = temp_int1 + 1;
                
                if (temp_ptr1 == (int8_t *)0x0) {
                  if ((int)temp_uint < 0x10) {
                    temp_uint = 0x10;
                  }
                  temp_ptr1 = (int8_t *)
                           CoreEngineMemoryPoolAllocator(_DAT,(int64_t)(int)temp_uint,CONCAT71(temp_var7,0x13))
                  ;
                  *temp_ptr1 = 0;
                  stack_ptr_b8 = (uint64_t *)temp_ptr1;
                  stack_a8 = CoreEngineSystemCleanup(temp_ptr1);
                }
                else if ((uint)temp_ptr1 < temp_uint) {
                  temp_ptr1 = (int8_t *)DataValidator(_DAT,temp_ptr1,temp_uint,0x10,0x13);
                  stack_ptr_b8 = (uint64_t *)temp_ptr1;
                  stack_a8 = CoreEngineSystemCleanup(temp_ptr1);
                }
              }
              // 警告：子函数不返回
              memcpy(temp_ptr3 + (int64_t)temp_ptr1,*(uint64_t *)((int64_t)temp_ptr2 + temp_long + 8),
                     (int64_t)(*(int *)((int64_t)temp_ptr2 + temp_long + 0x10) + 1));
            }
            
            temp_uint = (uint)temp_ulong2;
            if (temp_ulong != ((int64_t)buffer_ptr - (int64_t)temp_ptr2 >> 5) - 1U) {
              temp_uint = temp_int1 + 1;
              if (temp_uint != 0) {
                buffer_size = temp_int1 + 2;
                
                if (temp_ptr1 == (int8_t *)0x0) {
                  if ((int)buffer_size < 0x10) {
                    buffer_size = 0x10;
                  }
                  temp_ptr1 = (int8_t *)
                           CoreEngineMemoryPoolAllocator(_DAT,(int64_t)(int)buffer_size,CONCAT71(temp_var7,0x13))
                  ;
                  *temp_ptr1 = 0;
                }
                else {
                  if (buffer_size <= (uint)temp_ptr1) goto LAB_18016195a;
                  temp_ptr1 = (int8_t *)DataValidator(_DAT,temp_ptr1,buffer_size,0x10,0x13);
                }
                stack_ptr_b8 = (uint64_t *)temp_ptr1;
                stack_a8 = CoreEngineSystemCleanup(temp_ptr1);
                temp_ptr1 = (int8_t *)(uint64_t)stack_a8;
              }
LAB_18016195a:
              temp_ptr3[(int64_t)temp_ptr1] = 0x20;
              temp_ptr1[temp_uint] = 0;
              temp_ptr3 = (int8_t *)(uint64_t)temp_uint;
              buffer_ptr = stack_58;
              temp_ptr2 = stack_60;
              stack_b0 = temp_uint;
              temp_uint = stack_var8;
            }
            
            stack_var8 = temp_uint + 1;
            temp_ulong2 = (uint64_t)stack_var8;
            temp_long = temp_long + 0x20;
            temp_ulong = (uint64_t)(int)stack_var8;
          } while (temp_ulong < (uint64_t)((int64_t)buffer_ptr - (int64_t)temp_ptr2 >> 5));
        }
        
        // 处理配置字符串
        temp_ptr3 = &DAT;
        if (temp_ptr1 != (int8_t *)0x0) {
          temp_ptr3 = temp_ptr1;
        }
        
        stack_ptr1 = &DAT;
        if (stack_98 != (void *)0x0) {
          stack_ptr1 = stack_98;
        }
        
        // 执行配置处理
        temp_long = (**(code **)(_DAT + 0x48))(stack_ptr1,temp_ptr3);
        
        stack_ptr1 = &DAT;
        if (*(void **)(temp_long + 8) != (void *)0x0) {
          stack_ptr1 = *(void **)(temp_long + 8);
        }
        
        CoreMemoryPoolValidator(output_buffer,stack_ptr1);
        stack_ptr_c0 = (uint64_t *)&STRING_CONSTANT_EMPTY;
        
        if (temp_ptr1 == (int8_t *)0x0) {
          stack_ptr_b8 = (uint64_t *)0x0;
          stack_a8 = 0;
          stack_ptr_c0 = (uint64_t *)&STRING_CONSTANT_EMPTY;
          
          // 执行清理回调
          for (buffer_ptr = stack_60; buffer_ptr != stack_58; buffer_ptr = buffer_ptr + 4) {
            (**(code **)*buffer_ptr)(buffer_ptr,0);
          }
          
          if (stack_60 == (uint64_t *)0x0) {
            stack_a0 = &STRING_CONSTANT_EMPTY;
            if (stack_98 == (void *)0x0) {
              return output_buffer;
            }
            // 警告：子函数不返回
            CoreEngineMemoryPoolCleaner();
          }
          // 警告：子函数不返回
          CoreEngineMemoryPoolCleaner();
        }
        // 警告：子函数不返回
        CoreEngineMemoryPoolCleaner(temp_ptr1);
      }
      
      // 处理简单配置命令
      SystemCore_EncryptionEngine0(&stack_a0,input_param);
      FUN_180169c30(&stack_ptr_c0,&stack_a0);
      stack_a0 = &STRING_CONSTANT_EMPTY;
      
      if (stack_98 != (void *)0x0) {
        // 警告：子函数不返回
        CoreEngineMemoryPoolCleaner();
      }
      stack_98 = (void *)0x0;
      stack_88 = 0;
      stack_a0 = &STRING_CONSTANT_EMPTY;
      
      temp_long = (int64_t)stack_ptr_b8 - (int64_t)stack_ptr_c0 >> 5;
      
      if (temp_long == 0) {
        // 无参数处理
        FUN_18016a740(command_context + 0x70,output_buffer);
        
        // 执行清理回调
        for (buffer_ptr = stack_ptr_c0; buffer_ptr != stack_ptr_b8; buffer_ptr = buffer_ptr + 4) {
          (**(code **)*buffer_ptr)(buffer_ptr,0);
        }
      }
      else if (temp_long == 1) {
        // 单参数处理
        if (*(int64_t *)(command_context + 0x70) == 0) {
          if (*(int64_t *)(command_context + 0x78) == 0) {
            if (*(int64_t *)(command_context + 0x80) != 0) {
              FUN_180627be0();
            }
          }
          else {
            // 处理浮点数值
            double_value = (double)atof(stack_ptr_c0[1]);
            **(float **)(command_context + 0x78) = (float)double_value;
          }
        }
        else {
          // 处理整数值
          temp_value = atoi(stack_ptr_c0[1]);
          **(int32_t **)(command_context + 0x70) = temp_value;
        }
        
        // 生成成功消息
        *output_buffer = &STRING_CONSTANT_EMPTY;
        output_buffer[1] = 0;
        *(int32_t *)(output_buffer + 2) = 0;
        *output_buffer = &STRING_CONSTANT_EMPTY;
        output_buffer[3] = 0;
        output_buffer[1] = 0;
        *(int32_t *)(output_buffer + 2) = 0;
        CoreEngineDataBufferProcessor(output_buffer,10);
        buffer_ptr = (uint64_t *)output_buffer[1];
        *buffer_ptr = 0x65732065756c6156;  // "Value s"
        *(int16_t *)(buffer_ptr + 1) = 0x2e74;  // "et."
        *(int8_t *)((int64_t)buffer_ptr + 10) = 0;
        *(int32_t *)(output_buffer + 2) = 10;
        
        // 执行清理回调
        for (buffer_ptr = stack_ptr_c0; buffer_ptr != stack_ptr_b8; buffer_ptr = buffer_ptr + 4) {
          (**(code **)*buffer_ptr)(buffer_ptr,0);
        }
      }
      else {
        // 多参数错误处理
        *output_buffer = &STRING_CONSTANT_EMPTY;
        output_buffer[1] = 0;
        *(int32_t *)(output_buffer + 2) = 0;
        *output_buffer = &STRING_CONSTANT_EMPTY;
        output_buffer[3] = 0;
        output_buffer[1] = 0;
        *(int32_t *)(output_buffer + 2) = 0;
        CoreEngineDataBufferProcessor(output_buffer,0x2d);
        buffer_ptr = (uint64_t *)output_buffer[1];
        *buffer_ptr = 0x2064696c61766e49;  // "Invalid "
        buffer_ptr[1] = 0x6f207265626d756e;  // "number o"
        buffer_ptr[2] = 0x656d756772612066;  // "f argume"
        buffer_ptr[3] = 0x707845202e73746e;  // "nts. Ex"
        buffer_ptr[4] = 0x3020676e69746365;  // "pected 0"
        *(int32_t *)(buffer_ptr + 5) = 0x20726f20;  // " or 1"
        *(int16_t *)((int64_t)buffer_ptr + 0x2c) = 0x31;  // "1"
        *(int32_t *)(output_buffer + 2) = 0x2d;
        
        // 执行清理回调
        for (buffer_ptr = stack_ptr_c0; buffer_ptr != stack_ptr_b8; buffer_ptr = buffer_ptr + 4) {
          (**(code **)*buffer_ptr)(buffer_ptr,0);
        }
      }
    }
    
    if (stack_ptr_c0 != (uint64_t *)0x0) {
      // 警告：子函数不返回
      CoreEngineMemoryPoolCleaner();
    }
  }
  
  return output_buffer;
}



// 函数：在哈希表中查找节点
// 功能：在给定的哈希表中查找匹配指定键的节点
int64_t find_node_in_hash_table(int64_t hash_table_ptr,int64_t search_key_ptr)

{
  int key_length1;
  int key_length2;
  int comparison_result;
  int64_t node_ptr;
  int64_t start_ptr;
  
  start_ptr = *(int64_t *)(hash_table_ptr + 0x28);
  comparison_result = 0;
  
  // 遍历哈希表中的节点
  if (*(int64_t *)(hash_table_ptr + 0x30) - start_ptr >> 3 != 0) {
    node_ptr = 0;
    do {
      start_ptr = *(int64_t *)(node_ptr + start_ptr);
      key_length2 = *(int *)(search_key_ptr + 0x10);
      key_length1 = *(int *)(start_ptr + 0x10);
      
      // 比较键长度
      if (key_length1 == key_length2) {
        if (key_length1 != 0) {
          // 比较键内容（不区分大小写）
          key_length2 = _stricmp(*(uint64_t *)(start_ptr + 8),*(uint64_t *)(search_key_ptr + 8));
        }
LAB_180161e6a:
        // 如果匹配，返回节点指针
        if (key_length2 == 0) {
          return start_ptr;
        }
      }
      else if (key_length1 == 0) goto LAB_180161e6a;
      
      start_ptr = *(int64_t *)(hash_table_ptr + 0x28);
      comparison_result = comparison_result + 1;
      node_ptr = node_ptr + 8;
    } while ((uint64_t)(int64_t)comparison_result < (uint64_t)(*(int64_t *)(hash_table_ptr + 0x30) - start_ptr >> 3));
  }
  
  return 0;
}



// 警告：以'_'开头的全局变量与同一地址的较小符号重叠


