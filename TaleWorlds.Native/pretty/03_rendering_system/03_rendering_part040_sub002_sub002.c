#include "TaleWorlds.Native.Split.h"

// 03_rendering_part040_sub002_sub002.c - 渲染系统高级资源管理和数据处理模块
// 包含11个核心函数，涵盖渲染资源处理、缓冲区管理、数据流处理、内存分配、纹理映射等高级渲染功能

// 函数别名定义
#define validate_render_data FUN_18028b0d2
#define process_render_stream FUN_18028b2f0
#define allocate_render_buffer FUN_18028b4c0
#define find_texture_offset FUN_18028b630
#define process_render_batch_advanced FUN_18028b820
#define setup_render_pipeline FUN_18028b960
#define get_texture_data FUN_18028be60
#define create_render_entry FUN_18028c2f0
#define add_render_entry_advanced FUN_18028c308
#define add_render_entry_simple FUN_18028c387
#define process_vertex_transformations FUN_18028c3e0

// 外部函数声明
extern undefined4 func_0x00018028afe0(void);
extern void func_0x00018028b140(longlong *param_1);
extern int FUN_18028c3e0(void);
extern int FUN_18028e390(longlong param_1, uint param_2, char *param_3);
extern int func_0x00018028c210(void);
extern longlong func_0x000180120ce0(longlong param_1, longlong param_2);
extern void FUN_180059ba0(longlong param_1, longlong param_2);

// 外部常量声明
extern char UNK_180a16ee0[4];
extern char UNK_180a16ef8[4];
extern char UNK_180a13928[4];
extern char UNK_180a16f00[4];
extern char UNK_180a16ee8[4];
extern char UNK_180a16ef0[4];
extern char UNK_180a16f18[4];
extern char UNK_180a16f20[4];
extern char UNK_180a16f08[4];
extern char UNK_180a16f10[4];
extern longlong _DAT_180c8a9a8;
extern longlong _DAT_180c8a9b0;

// 函数: void validate_render_data(undefined8 render_context, int start_pos, int data_size, longlong *data_ptr)
// 功能: 验证渲染数据的有效性
// 参数:
//   render_context - 渲染上下文
//   start_pos - 起始位置
//   data_size - 数据大小
//   data_ptr - 数据指针
void validate_render_data(undefined8 render_context, int start_pos, int data_size, longlong *data_ptr)
{
  longlong data_offset;
  longlong *result_ptr;
  int max_size;
  int start_offset;
  undefined4 register_value;
  int buffer_size;
  
  // 计算数据结束位置
  start_pos = data_size + -1 + start_pos;
  if ((max_size < start_pos) || (start_pos < 0)) {
    start_pos = max_size;
  }
  *(int *)(data_ptr + 1) = start_pos;
  start_pos = start_pos - start_offset;
  buffer_size = 0;
  data_offset = 0;
  
  // 验证数据范围
  if ((((-1 < start_offset) && (data_offset = 0, -1 < start_pos)) &&
      (buffer_size = 0, data_offset = 0, start_offset <= max_size)) && (data_offset = 0, start_pos <= max_size - start_offset)) {
    data_offset = CONCAT44(register_value, start_offset) + *data_ptr;
    buffer_size = start_pos;
  }
  
  *result_ptr = data_offset;
  *(undefined4 *)(result_ptr + 1) = 0;
  *(int *)((longlong)result_ptr + 0xc) = buffer_size;
  return;
}


// 函数: undefined4 *process_render_stream(undefined4 *result_ptr, longlong *data_ptr, uint stream_id)
// 功能: 处理渲染数据流
// 参数:
//   result_ptr - 结果指针
//   data_ptr - 数据指针
//   stream_id - 流ID
// 返回值: 处理结果指针
undefined4 *process_render_stream(undefined4 *result_ptr, longlong *data_ptr, uint stream_id)
{
  undefined4 first_byte;
  undefined4 second_byte;
  byte third_byte;
  uint first_word;
  ulonglong data_length;
  longlong current_pos;
  uint word_value;
  int stream_index;
  int data_start;
  int current_offset;
  ulonglong processed_length;
  ulonglong total_length;
  undefined4 result_low;
  undefined4 result_high;
  undefined4 stream_stack[2];
  int buffer_size;
  
  first_word = *(uint *)((longlong)data_ptr + 0xc);
  total_length = (ulonglong)first_word;
  data_length = 0;
  
  // 检查数据有效性
  if ((int)first_word < 0) {
    data_length = total_length;
  }
  *(int *)(data_ptr + 1) = (int)data_length;
  
  if ((int)data_length < (int)first_word) {
    total_length = (ulonglong)first_word;
    do {
      data_start = (int)data_length;
      third_byte = func_0x00018028afe0();
      
      // 处理特殊字符
      while (0x1b < third_byte) {
        stream_index = (int)data_ptr[1];
        current_offset = (int)total_length;
        total_length = total_length & 0xffffffff;
        
        // 检查转义字符
        if ((stream_index < current_offset) && (*(char *)((longlong)stream_index + *data_ptr) == '\x1e')) {
          first_word = stream_index + 1;
          data_length = (ulonglong)first_word;
          if ((current_offset < (int)first_word) || ((int)first_word < 0)) {
            data_length = total_length & 0xffffffff;
          }
          stream_index = (int)data_length;
          *(int *)(data_ptr + 1) = stream_index;
          
          if (stream_index < current_offset) {
            if (stream_index < current_offset) goto process_next_byte;
            third_byte = 0;
            while (((stream_index = (int)data_length, (third_byte & 0xf) != 0xf && ((third_byte & 0xf0) != 0xf0)) &&
                   (stream_index < current_offset))) {
            process_next_byte:
              third_byte = *(byte *)((longlong)stream_index + *data_ptr);
              *(uint *)(data_ptr + 1) = stream_index + 1U;
              data_length = (ulonglong)(stream_index + 1U);
            }
          }
        }
        else {
          func_0x00018028b140(data_ptr);
          total_length = (ulonglong)*(uint *)((longlong)data_ptr + 0xc);
          total_length = (ulonglong)*(uint *)((longlong)data_ptr + 0xc);
          data_length = (ulonglong)*(uint *)(data_ptr + 1);
        }
        third_byte = func_0x00018028afe0();
      }
      
      first_word = (uint)total_length;
      stream_index = (int)data_length;
      if (stream_index < (int)first_word) {
        data_length = (ulonglong)(stream_index + 1U);
        third_byte = *(byte *)((longlong)stream_index + *data_ptr);
        *(uint *)(data_ptr + 1) = stream_index + 1U;
      }
      else {
        third_byte = 0;
        data_length = data_length & 0xffffffff;
      }
      
      word_value = (uint)third_byte;
      if (third_byte == 0xc) {
        current_offset = (int)data_length;
        if (current_offset < (int)first_word) {
          data_length = (ulonglong)(current_offset + 1U);
          third_byte = *(byte *)((longlong)current_offset + *data_ptr);
          *(uint *)(data_ptr + 1) = current_offset + 1U;
        }
        else {
          third_byte = 0;
        }
        word_value = third_byte | 0x100;
      }
      
      if (word_value == stream_id) {
        stream_index = stream_index - data_start;
        result_low = 0;
        first_byte = 0;
        result_high = 0;
        second_byte = 0;
        buffer_size = 0;
        current_offset = 0;
        
        // 验证数据范围
        if (((data_start < 0) || (result_low = first_byte, result_high = second_byte, buffer_size = current_offset, stream_index < 0)) ||
           (((int)first_word < data_start || ((int)(first_word - data_start) < stream_index)))) goto set_result_values;
        
        current_pos = (longlong)data_start + *data_ptr;
        buffer_size = stream_index;
        goto set_result_values;
      }
    } while ((int)data_length < (int)first_word);
  }
  
  result_low = 0;
  result_high = 0;
  buffer_size = 0;
  
  if (-1 < (int)first_word) {
    current_pos = *data_ptr;
    buffer_size = 0;
  set_result_values:
    result_low = (undefined4)current_pos;
    result_high = (undefined4)((ulonglong)current_pos >> 0x20);
  }
  
set_result_values:
  *result_ptr = result_low;
  result_ptr[1] = result_high;
  result_ptr[2] = 0;
  result_ptr[3] = buffer_size;
  return result_ptr;
}


// 函数: longlong *allocate_render_buffer(longlong *buffer_ptr, longlong *data_ptr, int multiplier)
// 功能: 分配渲染缓冲区
// 参数:
//   buffer_ptr - 缓冲区指针
//   data_ptr - 数据指针
//   multiplier - 乘数
// 返回值: 分配的缓冲区指针
longlong *allocate_render_buffer(longlong *buffer_ptr, longlong *data_ptr, int multiplier)
{
  int current_index;
  undefined4 first_byte;
  undefined4 second_byte;
  byte third_byte;
  int data_start;
  longlong data_offset;
  ulonglong length;
  int hash_value;
  int max_size;
  int buffer_offset;
  ulonglong checksum;
  ulonglong data_value;
  int buffer_size;
  
  current_index = *(int *)((longlong)data_ptr + 0xc);
  data_start = 0;
  if (current_index < 0) {
    data_start = current_index;
  }
  *(int *)(data_ptr + 1) = data_start;
  data_offset = (longlong)data_start;
  
  // 读取前两个字节
  if (data_offset < current_index) {
    data_start = data_start + 1;
    first_byte = *(undefined1 *)(data_offset + *data_ptr);
    data_offset = data_offset + 1;
  }
  else {
    first_byte = 0;
  }
  
  if (data_offset < current_index) {
    data_start = data_start + 1;
    second_byte = *(undefined1 *)(data_offset + *data_ptr);
  }
  else {
    second_byte = 0;
  }
  
  // 读取长度字节
  if (data_start < current_index) {
    data_offset = (longlong)data_start;
    data_start = data_start + 1;
    length = (ulonglong)*(byte *)(data_offset + *data_ptr);
  }
  else {
    length = 0;
  }
  
  hash_value = (int)length;
  data_start = hash_value * multiplier + data_start;
  
  // 边界检查
  if ((current_index < data_start) || (data_start < 0)) {
    data_start = current_index;
  }
  
  checksum = 0;
  *(int *)(data_ptr + 1) = data_start;
  data_value = length;
  
  // 处理长度数据
  if ((char)length != '\0') {
    do {
      if (data_start < current_index) {
        data_offset = (longlong)data_start;
        data_start = data_start + 1;
        third_byte = *(byte *)(data_offset + *data_ptr);
      }
      else {
        third_byte = 0;
      }
      checksum = checksum << 8 | (uint)third_byte;
      data_value = data_value - 1;
    } while (data_value != 0);
    *(int *)(data_ptr + 1) = data_start;
  }
  
  hash_value = 0;
  if (hash_value != 0) {
    do {
      if (data_start < current_index) {
        data_offset = (longlong)data_start;
        data_start = data_start + 1;
        third_byte = *(byte *)(data_offset + *data_ptr);
      }
      else {
        third_byte = 0;
      }
      hash_value = hash_value << 8 | (uint)third_byte;
      length = length - 1;
    } while (length != 0);
    *(int *)(data_ptr + 1) = data_start;
  }
  
  buffer_size = 0;
  buffer_offset = hash_value - checksum;
  data_start = checksum + 2 + (CONCAT11(first_byte, second_byte) + 1) * hash_value;
  data_offset = 0;
  
  // 验证数据范围
  if ((((-1 < data_start) && (data_offset = 0, -1 < buffer_offset)) && (buffer_size = 0, data_offset = 0, data_start <= current_index)) &&
     (data_offset = 0, buffer_offset <= current_index - data_start)) {
    data_offset = (longlong)data_start + *data_ptr;
    buffer_size = buffer_offset;
  }
  
  *buffer_ptr = data_offset;
  *(undefined4 *)(buffer_ptr + 1) = 0;
  *(int *)((longlong)buffer_ptr + 0xc) = buffer_size;
  return buffer_ptr;
}


// 函数: int find_texture_offset(longlong texture_data, uint texture_id, char *signature)
// 功能: 查找纹理偏移量
// 参数:
//   texture_data - 纹理数据指针
//   texture_id - 纹理ID
//   signature - 签名指针
// 返回值: 纹理偏移量
int find_texture_offset(longlong texture_data, uint texture_id, char *signature)
{
  uint entry_count;
  ulonglong entry_offset;
  int current_entry;
  int texture_offset;
  
  current_entry = 0;
  texture_offset = (uint)*(byte *)((ulonglong)texture_id + 4 + texture_data) * 0x100 +
                 (uint)*(byte *)((ulonglong)texture_id + 5 + texture_data);
  
  if (texture_offset != 0) {
    do {
      entry_count = current_entry * 0x10 + texture_id + 0xc;
      entry_offset = (ulonglong)entry_count;
      
      // 检查签名匹配
      if (((((uint)*(byte *)((ulonglong)entry_count + texture_data) == (int)*signature) &&
           ((uint)*(byte *)(entry_offset + 1 + texture_data) == (int)signature[1])) &&
          ((uint)*(byte *)(entry_offset + 2 + texture_data) == (int)signature[2])) &&
         ((uint)*(byte *)(entry_offset + 3 + texture_data) == (int)signature[3])) {
        return (((uint)*(byte *)(entry_offset + 8 + texture_data) * 0x100 + (uint)*(byte *)(entry_offset + 9 + texture_data)
                ) * 0x100 + (uint)*(byte *)(entry_offset + 10 + texture_data)) * 0x100 +
               (uint)*(byte *)(entry_offset + 0xb + texture_data);
      }
      current_entry = current_entry + 1;
    } while (current_entry < texture_offset);
  }
  
  return 0;
}


// 函数: undefined4 *process_render_batch_advanced(undefined4 *result_ptr, longlong *data_ptr, undefined8 render_context)
// 功能: 高级处理渲染批次
// 参数:
//   result_ptr - 结果指针
//   data_ptr - 数据指针
//   render_context - 渲染上下文
// 返回值: 处理结果指针
undefined4 *process_render_batch_advanced(undefined4 *result_ptr, longlong *data_ptr, undefined8 render_context)
{
  undefined4 stream_data;
  int batch_count;
  int texture_count;
  undefined8 *stream_ptr;
  undefined4 *result_data_ptr;
  longlong data_offset;
  longlong texture_offset;
  int batch_info[2];
  undefined8 context_data;
  undefined8 stream_info;
  undefined8 batch_data;
  undefined8 texture_data;
  undefined8 render_info;
  undefined1 local_stack[16];
  
  texture_offset = 0;
  batch_info[0] = 0;
  context_data = 0;
  stream_ptr = (undefined8 *)process_render_stream(&batch_data, render_context, 0x12);
  batch_data = *stream_ptr;
  render_info._0_4_ = *(int *)(stream_ptr + 1);
  render_info._4_4_ = *(int *)((longlong)stream_ptr + 0xc);
  
  data_offset = texture_offset;
  do {
    if ((int)render_info._4_4_ <= (int)render_info) break;
    stream_data = func_0x00018028b140(&batch_data);
    *(undefined4 *)((longlong)&context_data + data_offset * 4) = stream_data;
    data_offset = data_offset + 1;
  } while (data_offset < 2);
  
  texture_count = context_data._4_4_;
  if ((context_data._4_4_ != 0) && ((uint)context_data != 0)) {
    render_info._4_4_ = 0;
    batch_data = 0;
    if ((-1 < context_data) &&
       (((batch_data = 0, -1 < (int)(uint)context_data &&
         (render_info._4_4_ = 0, batch_data = 0, context_data._4_4_ <= *(int *)((longlong)data_ptr + 0xc))
         ) && (batch_data = 0,
              (int)(uint)context_data <= *(int *)((longlong)data_ptr + 0xc) - context_data._4_4_)))) {
      batch_data = (longlong)context_data._4_4_ + *data_ptr;
      render_info._4_4_ = (uint)context_data;
    }
    
    render_info = (ulonglong)render_info._4_4_ << 0x20;
    stream_ptr = (undefined8 *)process_render_stream(local_stack, &batch_data, 0x13);
    batch_data = *stream_ptr;
    render_info._0_4_ = *(int *)(stream_ptr + 1);
    render_info._4_4_ = *(int *)((longlong)stream_ptr + 0xc);
    
    do {
      if ((int)render_info._4_4_ <= (int)render_info) break;
      batch_count = func_0x00018028b140(&batch_data);
      batch_info[data_offset] = batch_count;
      data_offset = data_offset + 1;
    } while (data_offset < 1);
    
    if (batch_info[0] != 0) {
      texture_count = batch_info[0] + texture_count;
      if ((*(int *)((longlong)data_ptr + 0xc) < texture_count) || (texture_count < 0)) {
        texture_count = *(int *)((longlong)data_ptr + 0xc);
      }
      *(int *)(data_ptr + 1) = texture_count;
      result_data_ptr = (undefined4 *)allocate_render_buffer(local_stack, data_ptr);
      batch_data._0_4_ = *result_data_ptr;
      batch_data._4_4_ = result_data_ptr[1];
      render_info._0_4_ = result_data_ptr[2];
      render_info._4_4_ = result_data_ptr[3];
      goto set_batch_result;
    }
  }
  
  batch_data._0_4_ = 0;
  batch_data._4_4_ = 0;
  render_info._0_4_ = 0;
  render_info._4_4_ = 0;
  
set_batch_result:
  *result_ptr = (undefined4)batch_data;
  result_ptr[1] = batch_data._4_4_;
  result_ptr[2] = (int)render_info;
  result_ptr[3] = render_info._4_4_;
  return result_ptr;
}


// 函数: undefined8 setup_render_pipeline(longlong pipeline_data, longlong texture_data, undefined4 texture_format)
// 功能: 设置渲染管线
// 参数:
//   pipeline_data - 管线数据指针
//   texture_data - 纹理数据指针
//   texture_format - 纹理格式
// 返回值: 渲染管线设置结果
undefined8 setup_render_pipeline(longlong pipeline_data, longlong texture_data, undefined4 texture_format)
{
  byte first_byte;
  byte second_byte;
  undefined8 pipeline_config;
  undefined1 config_data[16];
  uint texture_offset;
  int batch_index;
  int texture_index;
  int render_index;
  undefined4 render_config;
  uint texture_width;
  longlong *data_ptr;
  undefined8 *stream_ptr;
  ulonglong config_length;
  ulonglong stream_length;
  longlong texture_info;
  int batch_info[4];
  undefined4 batch_size;
  int texture_sizes[2];
  int render_sizes[4];
  undefined8 texture_buffer;
  uint texture_height;
  undefined8 render_buffer;
  undefined4 render_size;
  longlong buffer_offset;
  undefined8 stream_data;
  undefined1 render_stack[24];
  
  *(longlong *)(pipeline_data + 8) = texture_data;
  *(undefined4 *)(pipeline_data + 0x10) = texture_format;
  config_length = 0;
  texture_buffer._0_4_ = 0;
  texture_buffer._4_4_ = 0;
  render_size = 0;
  render_buffer._0_4_ = 0;
  render_buffer._4_4_ = 0;
  *(undefined8 *)(pipeline_data + 0x40) = 0;
  *(undefined8 *)(pipeline_data + 0x48) = 0;
  batch_size = texture_format;
  
  // 查找纹理偏移
  texture_offset = find_texture_offset(texture_data, texture_format, &UNK_180a16ee0);
  batch_index = find_texture_offset(texture_data, texture_format, &UNK_180a16ef8);
  *(int *)(pipeline_data + 0x18) = batch_index;
  texture_index = find_texture_offset(texture_data, texture_format, &UNK_180a13928);
  *(int *)(pipeline_data + 0x1c) = texture_index;
  batch_info[2] = find_texture_offset(texture_data, texture_format, &UNK_180a16f00);
  *(int *)(pipeline_data + 0x20) = batch_info[2];
  render_index = find_texture_offset(texture_data, texture_format, &UNK_180a16ee8);
  *(int *)(pipeline_data + 0x24) = render_index;
  batch_info[0] = find_texture_offset(texture_data, batch_size, &UNK_180a16ef0);
  *(int *)(pipeline_data + 0x28) = batch_info[0];
  render_config = find_texture_offset(texture_data, batch_size, &UNK_180a16f18);
  *(undefined4 *)(pipeline_data + 0x2c) = render_config;
  render_config = find_texture_offset(texture_data, batch_size, &UNK_180a16f20);
  *(undefined4 *)(pipeline_data + 0x30) = render_config;
  
  // 验证必要参数
  if (texture_offset == 0) {
    return 0;
  }
  if (texture_index == 0) {
    return 0;
  }
  if (render_index == 0) {
    return 0;
  }
  if (batch_info[0] == 0) {
    return 0;
  }
  if (batch_info[2] != 0) {
    if (batch_index == 0) {
      return 0;
    }
    goto process_texture_data;
  }
  
  batch_info[2] = 0;
  batch_info[0] = 2;
  texture_sizes[0] = 0;
  render_sizes[0] = 0;
  texture_width = find_texture_offset(texture_data, batch_size, &UNK_180a16f08);
  if (texture_width == 0) {
    return 0;
  }
  
  *(undefined8 *)(pipeline_data + 0x80) = 0;
  *(undefined8 *)(pipeline_data + 0x88) = 0;
  texture_buffer = (ulonglong)texture_width + texture_data;
  render_buffer._4_4_ = 0x20000000;
  *(undefined8 *)(pipeline_data + 0x90) = 0;
  *(undefined8 *)(pipeline_data + 0x98) = 0;
  render_size = 0;
  config_data._8_4_ = 0;
  config_data._0_8_ = texture_buffer;
  config_data._12_4_ = 0x20000000;
  texture_height = 0x20000000;
  *(undefined1 (*) [16])(pipeline_data + 0x40) = config_data;
  
  if (*(byte *)(texture_buffer + 2) < 0x20000001) {
    texture_height = (uint)*(byte *)(texture_buffer + 2);
  }
  texture_width = texture_height;
  stream_data = texture_buffer;
  render_size = 0x20000000;
  
  // 处理纹理数据
  allocate_render_buffer(&buffer_offset, &stream_data);
  data_ptr = (longlong *)allocate_render_buffer(&buffer_offset, &stream_data);
  buffer_offset = *data_ptr;
  stream_data = data_ptr[1];
  stream_ptr = (undefined8 *)allocate_render_buffer(&buffer_offset, &stream_data);
  texture_buffer._0_4_ = (undefined4)*stream_ptr;
  texture_buffer._4_4_ = (undefined4)((ulonglong)*stream_ptr >> 0x20);
  render_size = (undefined4)stream_ptr[1];
  render_buffer._4_4_ = (undefined4)((ulonglong)stream_ptr[1] >> 0x20);
  
  // 处理批次信息
  allocate_render_buffer(&buffer_offset, &stream_data);
  data_ptr = (longlong *)allocate_render_buffer(&buffer_offset, &stream_data);
  stream_data = *data_ptr;
  stream_ptr = (undefined8 *)allocate_render_buffer(&buffer_offset, &stream_data);
  pipeline_config = stream_ptr[1];
  *(undefined8 *)(pipeline_data + 0x60) = *stream_ptr;
  *(undefined8 *)(pipeline_data + 0x68) = pipeline_config;
  
  data_ptr = (longlong *)process_render_stream(&buffer_offset, &texture_buffer, 0x11);
  buffer_offset = *data_ptr;
  stream_data = data_ptr[1];
  config_length = 0;
  do {
    if (stream_data._4_4_ <= (int)stream_data) break;
    batch_index = func_0x00018028b140(&buffer_offset);
    batch_info[config_length + 2] = batch_index;
    config_length = config_length + 1;
  } while ((longlong)config_length < 1);
  
  data_ptr = (longlong *)process_render_stream(&buffer_offset, &texture_buffer, 0x106);
  buffer_offset = *data_ptr;
  stream_data = data_ptr[1];
  config_length = 0;
  do {
    if (stream_data._4_4_ <= (int)stream_data) break;
    batch_index = func_0x00018028b140(&buffer_offset);
    batch_info[config_length] = batch_index;
    config_length = config_length + 1;
  } while ((longlong)config_length < 1);
  
  data_ptr = (longlong *)process_render_stream(&buffer_offset, &texture_buffer, 0x124);
  buffer_offset = *data_ptr;
  stream_data = data_ptr[1];
  config_length = 0;
  do {
    if (stream_data._4_4_ <= (int)stream_data) break;
    batch_index = func_0x00018028b140(&buffer_offset);
    texture_sizes[config_length] = batch_index;
    config_length = config_length + 1;
  } while ((longlong)config_length < 1);
  
  data_ptr = (longlong *)process_render_stream(&buffer_offset, &texture_buffer, 0x125);
  buffer_offset = *data_ptr;
  stream_data = data_ptr[1];
  config_length = 0;
  do {
    if (stream_data._4_4_ <= (int)stream_data) break;
    batch_index = func_0x00018028b140(&buffer_offset);
    render_sizes[config_length] = batch_index;
    config_length = config_length + 1;
  } while ((longlong)config_length < 1);
  
  buffer_offset = CONCAT44(texture_buffer._4_4_, (undefined4)texture_buffer);
  stream_data = CONCAT44(render_buffer._4_4_, render_size);
  texture_buffer._0_4_ = (undefined4)stream_data;
  texture_buffer._4_4_ = stream_data._4_4_;
  render_size = texture_width;
  render_buffer._4_4_ = texture_height;
  
  stream_ptr = (undefined8 *)process_render_batch_advanced(render_stack, &texture_buffer, &buffer_offset);
  batch_index = render_sizes[0];
  texture_index = batch_info[2];
  pipeline_config = stream_ptr[1];
  *(undefined8 *)(pipeline_data + 0x70) = *stream_ptr;
  *(undefined8 *)(pipeline_data + 0x78) = pipeline_config;
  
  if (batch_info[0] != 2) {
    return 0;
  }
  if (batch_info[2] == 0) {
    return 0;
  }
  
  texture_width = render_size;
  if (texture_sizes[0] != 0) {
    texture_info = (longlong)render_sizes[0];
    if (render_sizes[0] == 0) {
      return 0;
    }
    if ((int)render_size < texture_sizes[0]) {
    set_texture_height:
      texture_width = render_size;
    }
    else {
      texture_width = texture_sizes[0];
      if (texture_sizes[0] < 0) goto set_texture_height;
    }
    
    stream_ptr = (undefined8 *)allocate_render_buffer(render_stack, &stream_data);
    pipeline_config = stream_ptr[1];
    *(undefined8 *)(pipeline_data + 0x80) = *stream_ptr;
    *(undefined8 *)(pipeline_data + 0x88) = pipeline_config;
    buffer_offset = 0;
    stream_data = 0;
    if (((-1 < batch_index) && (-1 < (int)(render_size - batch_index))) && (batch_index <= (int)render_size)) {
      stream_data = (ulonglong)(render_size - batch_index) << 0x20;
      buffer_offset = texture_info + stream_data;
    }
    *(longlong *)(pipeline_data + 0x90) = buffer_offset;
    *(longlong *)(pipeline_data + 0x98) = stream_data;
    texture_width = render_size;
  }
  
  if ((int)texture_width < texture_index) {
  set_texture_width:
    texture_width = render_size;
  }
  else {
    texture_width = texture_index;
    if (texture_index < 0) goto set_texture_width;
  }
  
  stream_ptr = (undefined8 *)allocate_render_buffer(render_stack, &stream_data);
  pipeline_config = stream_ptr[1];
  *(undefined8 *)(pipeline_data + 0x50) = *stream_ptr;
  *(undefined8 *)(pipeline_data + 0x58) = pipeline_config;
  
process_texture_data:
  texture_width = find_texture_offset(texture_data, batch_size, &UNK_180a16f10);
  if (texture_width == 0) {
    batch_index = 0xffff;
  }
  else {
    batch_index = (uint)*(byte *)((ulonglong)texture_width + 4 + texture_data) * 0x100 +
            (uint)*(byte *)((ulonglong)texture_width + 5 + texture_data);
  }
  *(int *)(pipeline_data + 0x14) = batch_index;
  
  first_byte = *(byte *)((ulonglong)texture_offset + 2 + texture_data);
  second_byte = *(byte *)((ulonglong)texture_offset + 3 + texture_data);
  *(undefined4 *)(pipeline_data + 0x34) = 0;
  batch_index = (uint)first_byte * 0x100 + (uint)second_byte;
  
  if (batch_index != 0) {
    do {
      texture_width = texture_offset + 4 + (int)config_length * 8;
      stream_length = (ulonglong)texture_width;
      texture_index = (uint)*(byte *)((ulonglong)texture_width + texture_data) * 0x100 +
              (uint)*(byte *)((ulonglong)texture_width + 1 + texture_data);
      if ((texture_index == 0) ||
         ((texture_index == 3 &&
          ((texture_index = (uint)*(byte *)(stream_length + 3 + texture_data) +
                    (uint)*(byte *)(stream_length + 2 + texture_data) * 0x100, texture_index == 1 || (texture_index == 10))))))
      {
        *(uint *)(pipeline_data + 0x34) =
             (uint)*(byte *)(stream_length + 7 + texture_data) +
             ((uint)*(byte *)(stream_length + 6 + texture_data) +
             ((uint)*(byte *)(stream_length + 5 + texture_data) + (uint)*(byte *)(stream_length + 4 + texture_data) * 0x100)
             * 0x100) * 0x100 + texture_offset;
      }
      texture_width = (int)config_length + 1;
      config_length = (ulonglong)texture_width;
    } while ((int)texture_width < batch_index);
    
    if (*(int *)(pipeline_data + 0x34) != 0) {
      *(uint *)(pipeline_data + 0x38) =
           (uint)*(byte *)((longlong)*(int *)(pipeline_data + 0x1c) + 0x33 + texture_data) +
           (uint)*(byte *)((longlong)*(int *)(pipeline_data + 0x1c) + 0x32 + texture_data) * 0x100;
      return 1;
    }
  }
  
  return 0;
}


// 函数: uint get_texture_data(longlong texture_data, uint texture_id)
// 功能: 获取纹理数据
// 参数:
//   texture_data - 纹理数据指针
//   texture_id - 纹理ID
// 返回值: 纹理数据值
uint get_texture_data(longlong texture_data, uint texture_id)
{
  int texture_offset;
  longlong texture_base;
  longlong texture_info;
  uint texture_width;
  ushort texture_height;
  longlong texture_ptr;
  int texture_size;
  uint texture_value;
  int texture_index;
  ushort texture_type;
  ulonglong texture_length;
  ulonglong texture_pos;
  longlong texture_entry;
  ushort texture_depth;
  ulonglong texture_range;
  ushort texture_format;
  
  texture_length = (ulonglong)*(uint *)(texture_data + 0x34);
  texture_base = *(longlong *)(texture_data + 8);
  texture_height = (ushort)*(byte *)(texture_length + texture_base) * 0x100 + (ushort)*(byte *)(texture_length + 1 + texture_base);
  
  if (texture_height == 0) {
    if ((int)texture_id <
        (int)((uint)*(byte *)(texture_length + 2 + texture_base) * 0x100 + (*(byte *)(texture_length + 3 + texture_base) - 6))) {
      return (uint)*(byte *)(texture_length + (longlong)(int)texture_id + 6 + texture_base);
    }
  }
  else if (texture_height == 6) {
    texture_width = (uint)*(byte *)(texture_length + 6 + texture_base) * 0x100 + (uint)*(byte *)(texture_length + 7 + texture_base);
    if ((texture_width <= texture_id) &&
       (texture_id < (uint)*(byte *)(texture_length + 9 + texture_base) +
                  (uint)*(byte *)(texture_length + 8 + texture_base) * 0x100 + texture_width)) {
      texture_info = (texture_id - texture_width) * 2 + texture_length;
      return (uint)*(byte *)(texture_info + 0xb + texture_base) + (uint)*(byte *)(texture_info + 10 + texture_base) * 0x100;
    }
  }
  else if (texture_height != 2) {
    if (texture_height == 4) {
      texture_depth = (ushort)((ushort)*(byte *)(texture_length + 6 + texture_base) * 0x100 +
                       (ushort)*(byte *)(texture_length + 7 + texture_base)) >> 1;
      texture_width = *(uint *)(texture_data + 0x34) + 0xe;
      texture_format = (ushort)((ushort)*(byte *)(texture_length + 9 + texture_base) +
                       (ushort)*(byte *)(texture_length + 8 + texture_base) * 0x100) >> 1;
      texture_type = (ushort)*(byte *)(texture_length + 0xb + texture_base) +
               (ushort)*(byte *)(texture_length + 10 + texture_base) * 0x100;
      texture_depth = (ushort)((ushort)*(byte *)(texture_length + 0xc + texture_base) * 0x100 +
                      (ushort)*(byte *)(texture_length + 0xd + texture_base)) >> 1;
      
      if ((int)texture_id < 0x10000) {
        texture_value = texture_width;
        if ((int)((uint)*(byte *)((ulonglong)texture_value + texture_base + (ulonglong)texture_depth * 2) * 0x100 +
                 (uint)*(byte *)((ulonglong)texture_value + texture_base + 1 + (ulonglong)texture_depth * 2)) <=
            (int)texture_id) {
          texture_value = texture_width + (uint)texture_depth * 2;
        }
        
        texture_value = texture_value - 2;
        for (; texture_type != 0; texture_type = texture_type + -1) {
          texture_format = texture_format >> 1;
          if ((int)((uint)*(byte *)((ulonglong)texture_value + texture_base + (ulonglong)texture_format * 2) * 0x100 +
                   (uint)*(byte *)((ulonglong)texture_value + texture_base + 1 + (ulonglong)texture_format * 2)) <
              (int)texture_id) {
            texture_value = texture_value + (uint)texture_format * 2;
          }
        }
        
        texture_range = (ulonglong)(((texture_value - texture_width) + 2 >> 1 & 0xffff) * 2);
        texture_info = ((uint)texture_depth + (uint)texture_depth * 2) * 2 + texture_range + texture_length;
        texture_size = (uint)*(byte *)(texture_info + 0x10 + texture_base) * 0x100 +
                (uint)*(byte *)(texture_info + 0x11 + texture_base);
        
        if (texture_size <= (int)texture_id) {
          texture_width = ((uint)texture_depth + (uint)texture_depth * 2) * 2;
          texture_info = texture_width + texture_range + texture_length;
          texture_format = (ushort)*(byte *)(texture_info + 0x10 + texture_base) * 0x100 +
                   (ushort)*(byte *)(texture_info + 0x11 + texture_base);
          if (texture_format == 0) {
            texture_info = (uint)texture_depth * 4 + texture_range + texture_length;
            return (uint)(ushort)((ushort)*(byte *)(texture_info + 0x10 + texture_base) * 0x100 +
                                  (ushort)*(byte *)(texture_info + 0x11 + texture_base) + (short)texture_id);
          }
          texture_info = (ulonglong)texture_format + (longlong)(int)((texture_id - texture_size) * 2) + (ulonglong)texture_width +
                  texture_range + texture_length;
          return (uint)*(byte *)(texture_info + 0x11 + texture_base) +
                 (uint)*(byte *)(texture_info + 0x10 + texture_base) * 0x100;
        }
      }
    }
    else if ((ushort)(texture_height - 0xcU) < 2) {
      texture_size = 0;
      texture_index = (((uint)*(byte *)(texture_length + 0xd + texture_base) +
               (uint)*(byte *)(texture_length + 0xc + texture_base) * 0x100) * 0x100 +
              (uint)*(byte *)(texture_length + 0xe + texture_base)) * 0x100 + (uint)*(byte *)(texture_length + 0xf + texture_base);
      
      if (0 < texture_index) {
        texture_info = texture_length + texture_base;
        texture_entry = texture_length + texture_base;
        do {
          texture_offset = (texture_index - texture_size >> 1) + texture_size;
          texture_ptr = (longlong)(texture_offset * 0xc);
          texture_width = (uint)*(byte *)(texture_ptr + 0x11 + texture_info) * 0x10000 +
                  (uint)*(byte *)(texture_ptr + 0x12 + texture_info) * 0x100 +
                  (uint)*(byte *)(texture_ptr + 0x10 + texture_info) * 0x1000000 +
                  (uint)*(byte *)(texture_ptr + 0x13 + texture_info);
          if (texture_width <= texture_id) {
            if (texture_id <=
                (uint)*(byte *)(texture_entry + 0x15 + texture_ptr) * 0x10000 +
                (uint)*(byte *)(texture_entry + 0x16 + texture_ptr) * 0x100 +
                (uint)*(byte *)(texture_entry + 0x14 + texture_ptr) * 0x1000000 +
                (uint)*(byte *)(texture_entry + 0x17 + texture_ptr)) {
              texture_base = texture_ptr + texture_length + texture_base;
              texture_value = (uint)*(byte *)(texture_base + 0x19) * 0x10000 +
                      (uint)*(byte *)(texture_base + 0x1a) * 0x100 +
                      (uint)*(byte *)(texture_base + 0x18) * 0x1000000 + (uint)*(byte *)(texture_base + 0x1b);
              if (texture_height != 0xc) {
                return texture_value;
              }
              return texture_id + (texture_value - texture_width);
            }
            texture_size = texture_offset + 1;
            texture_offset = texture_index;
          }
          texture_index = texture_offset;
        } while (texture_size < texture_index);
      }
    }
  }
  
  return 0;
}


// 函数: int create_render_entry(longlong render_buffer, int entry_index, int flag1, int flag2, undefined2 x_coord, undefined2 y_coord, int x_size, int y_size, int next_x, int next_y)
// 功能: 创建渲染条目
// 参数:
//   render_buffer - 渲染缓冲区指针
//   entry_index - 条目索引
//   flag1 - 标志1
//   flag2 - 标志2
//   x_coord - X坐标
//   y_coord - Y坐标
//   x_size - X尺寸
//   y_size - Y尺寸
//   next_x - 下一个X坐标
//   next_y - 下一个Y坐标
// 返回值: 创建的条目索引
int create_render_entry(longlong render_buffer, int entry_index, int flag1, int flag2, undefined2 x_coord, undefined2 y_coord, int x_size, int y_size, int next_x, int next_y)
{
  longlong entry_offset;
  
  if (flag2 != 0) {
    if (flag1 != 0) {
      entry_offset = (longlong)entry_index * 0xe;
      entry_index = entry_index + 1;
      *(short *)(entry_offset + render_buffer) = (short)(x_size + next_x >> 1);
      *(undefined1 *)(entry_offset + 0xc + render_buffer) = 3;
      *(undefined2 *)(entry_offset + 4 + render_buffer) = (undefined2)next_x;
      *(undefined2 *)(entry_offset + 6 + render_buffer) = (undefined2)next_y;
      *(short *)(entry_offset + 2 + render_buffer) = (short)(y_size + next_y >> 1);
    }
    entry_offset = (longlong)entry_index * 0xe;
    *(undefined2 *)(entry_offset + render_buffer) = x_coord;
    *(undefined2 *)(entry_offset + 2 + render_buffer) = y_coord;
    *(short *)(entry_offset + 4 + render_buffer) = (short)x_size;
    *(undefined1 *)(entry_offset + 0xc + render_buffer) = 3;
    *(short *)(entry_offset + 6 + render_buffer) = (short)y_size;
    return entry_index + 1;
  }
  
  entry_offset = (longlong)entry_index * 0xe;
  *(undefined2 *)(entry_offset + render_buffer) = x_coord;
  *(undefined2 *)(entry_offset + 2 + render_buffer) = y_coord;
  if (flag1 != 0) {
    *(undefined2 *)(entry_offset + 4 + render_buffer) = (undefined2)next_x;
    *(undefined2 *)(entry_offset + 6 + render_buffer) = (undefined2)next_y;
    *(undefined1 *)(entry_offset + 0xc + render_buffer) = 3;
    return entry_index + 1;
  }
  
  *(undefined1 *)(entry_offset + 0xc + render_buffer) = 2;
  *(undefined4 *)(entry_offset + 4 + render_buffer) = 0;
  return entry_index + 1;
}


// 函数: int add_render_entry_advanced(longlong render_buffer, undefined8 render_context, int entry_index, int flag1, undefined8 context_data, undefined2 x_coord, undefined2 y_coord, int x_size, undefined8 texture_data, int y_size, int next_y)
// 功能: 高级添加渲染条目
// 参数:
//   render_buffer - 渲染缓冲区指针
//   render_context - 渲染上下文
//   entry_index - 条目索引
//   flag1 - 标志1
//   context_data - 上下文数据
//   x_coord - X坐标
//   y_coord - Y坐标
//   x_size - X尺寸
//   texture_data - 纹理数据
//   y_size - Y尺寸
//   next_y - 下一个Y坐标
// 返回值: 添加的条目索引
int add_render_entry_advanced(longlong render_buffer, undefined8 render_context, int entry_index, int flag1, undefined8 context_data, undefined2 x_coord, undefined2 y_coord, int x_size, undefined8 texture_data, int y_size, int next_y)
{
  longlong entry_offset;
  ulonglong context_size;
  longlong context_offset;
  
  if (flag1 != 0) {
    entry_offset = context_size * 0xe;
    context_size = (ulonglong)((int)context_size + 1);
    *(short *)(entry_offset + render_buffer) = (short)(x_size + next_y >> 1);
    *(undefined1 *)(entry_offset + 0xc + render_buffer) = 3;
    *(short *)(entry_offset + 4 + context_offset) = (short)next_y;
    *(short *)(entry_offset + 6 + context_offset) = (short)next_y;
    *(short *)(entry_offset + 2 + context_offset) = (short)(flag1 + next_y >> 1);
  }
  
  entry_offset = (longlong)(int)context_size * 0xe;
  *(undefined2 *)(entry_offset + context_offset) = x_coord;
  *(undefined2 *)(entry_offset + 2 + context_offset) = y_coord;
  *(short *)(entry_offset + 4 + context_offset) = (short)x_size;
  *(undefined1 *)(entry_offset + 0xc + context_offset) = 3;
  *(short *)(entry_offset + 6 + context_offset) = (short)flag1;
  return (int)context_size + 1;
}


// 函数: int add_render_entry_simple(undefined8 render_context, undefined8 context_data, int flag1, undefined8 texture_data, undefined8 pipeline_data, undefined2 x_coord, undefined2 y_coord, undefined8 texture_info, undefined8 render_info, undefined2 next_x, undefined2 next_y)
// 功能: 简单添加渲染条目
// 参数:
//   render_context - 渲染上下文
//   context_data - 上下文数据
//   flag1 - 标志1
//   texture_data - 纹理数据
//   pipeline_data - 管线数据
//   x_coord - X坐标
//   y_coord - Y坐标
//   texture_info - 纹理信息
//   render_info - 渲染信息
//   next_x - 下一个X坐标
//   next_y - 下一个Y坐标
// 返回值: 添加的条目索引
int add_render_entry_simple(undefined8 render_context, undefined8 context_data, int flag1, undefined8 texture_data, undefined8 pipeline_data, undefined2 x_coord, undefined2 y_coord, undefined8 texture_info, undefined8 render_info, undefined2 next_x, undefined2 next_y)
{
  longlong entry_offset;
  longlong context_size;
  longlong context_offset;
  
  entry_offset = context_size * 0xe;
  *(undefined2 *)(entry_offset + context_offset) = x_coord;
  *(undefined2 *)(entry_offset + 2 + context_offset) = y_coord;
  if (flag1 != 0) {
    *(undefined2 *)(entry_offset + 4 + context_offset) = next_x;
    *(undefined2 *)(entry_offset + 6 + context_offset) = next_y;
    *(undefined1 *)(entry_offset + 0xc + context_offset) = 3;
    return (int)context_size + 1;
  }
  
  *(undefined1 *)(entry_offset + 0xc + context_offset) = 2;
  *(undefined4 *)(entry_offset + 4 + context_offset) = 0;
  return (int)context_size + 1;
}


// 函数: ulonglong process_vertex_transformations(longlong transform_data, undefined8 render_context, ulonglong *result_ptr)
// 功能: 处理顶点变换
// 参数:
//   transform_data - 变换数据指针
//   render_context - 渲染上下文
//   result_ptr - 结果指针
// 返回值: 处理结果
ulonglong process_vertex_transformations(longlong transform_data, undefined8 render_context, ulonglong *result_ptr)
{
  byte *texture_ptr;
  byte *vertex_ptr;
  byte *normal_ptr;
  byte *tangent_ptr;
  byte weight_data;
  short vertex_index;
  int transform_index;
  undefined4 transform_matrix;
  uint texture_coord;
  int vertex_count;
  int batch_count;
  ulonglong transform_result;
  ulonglong texture_offset;
  byte transform_flag;
  short vertex_weight;
  ulonglong batch_result;
  byte *batch_ptr;
  short *index_ptr;
  byte *vertex_buffer;
  undefined4 batch_info;
  ulonglong texture_size;
  uint texture_width;
  uint texture_height;
  byte *texture_data;
  float matrix_value;
  float transform_x;
  float transform_y;
  float transform_z;
  float transform_w;
  float vertex_x;
  float vertex_y;
  float vertex_z;
  float vertex_w;
  float normal_x;
  float normal_y;
  float normal_z;
  float normal_w;
  longlong local_offset;
  uint local_texture_size;
  float local_matrix[4];
  float *local_stack_e8;
  float local_stack_e0;
  float local_stack_dc;
  float local_stack_d8;
  float local_stack_d4;
  
  local_offset = *(longlong *)(transform_data + 8);
  texture_offset = 0;
  transform_index = func_0x00018028c210();
  *result_ptr = 0;
  
  if (transform_index < 0) {
  set_transform_result:
    transform_result = 0;
  }
  else {
    batch_count = (longlong)transform_index;
    vertex_index = (ushort)*(byte *)(batch_count + local_offset) * 0x100 + (ushort)*(byte *)(batch_count + 1 + local_offset);
    transform_matrix = 0;
    
    if (vertex_index < 1) {
      transform_result = texture_offset;
      if (vertex_index == -1) {
        texture_ptr = (byte *)(local_offset + 10 + batch_count);
        while( true ) {
          weight_data = texture_ptr[1];
          transform_z = 0.0;
          vertex_ptr = texture_ptr + 2;
          transform_w = 0.0;
          normal_ptr = texture_ptr + 3;
          tangent_ptr = texture_ptr + 4;
          local_offset = 0;
          
          // 检查顶点权重标志
          if ((weight_data & 2) != 0) {
            if ((weight_data & 1) == 0) {
              transform_index = (int)(char)*tangent_ptr;
              vertex_count = (int)(char)texture_ptr[5];
              tangent_ptr = texture_ptr + 6;
            }
            else {
              transform_index = (int)(short)((ushort)texture_ptr[5] + (ushort)*tangent_ptr * 0x100);
              vertex_count = (int)(short)((ushort)texture_ptr[7] + (ushort)texture_ptr[6] * 0x100);
              tangent_ptr = texture_ptr + 8;
            }
            transform_w = (float)vertex_count;
            transform_z = (float)transform_index;
          }
          
          texture_ptr = tangent_ptr;
          if ((weight_data & 8) == 0) {
            if ((weight_data & 0x40) == 0) {
              if ((char)weight_data < '\0') {
                tangent_ptr = texture_ptr + 4;
                vertex_ptr = texture_ptr + 5;
                local_stack_e0 = (float)(int)(short)((ushort)texture_ptr[1] + (ushort)*texture_ptr * 0x100) *
                            6.1035156e-05;
                normal_ptr = texture_ptr + 6;
                tangent_ptr = texture_ptr + 7;
                local_stack_dc = (float)(int)(short)((ushort)texture_ptr[3] + (ushort)texture_ptr[2] * 0x100) *
                            6.1035156e-05;
                texture_ptr = texture_ptr + 8;
                local_stack_d8 = (float)(int)(short)((ushort)*vertex_ptr + (ushort)*tangent_ptr * 0x100) *
                            6.1035156e-05;
                local_stack_d4 = (float)(int)(short)((ushort)*tangent_ptr + (ushort)*normal_ptr * 0x100) *
                            6.1035156e-05;
              }
              else {
                local_stack_d4 = 1.0;
                local_stack_d8 = 0.0;
                local_stack_dc = 0.0;
                local_stack_e0 = 1.0;
              }
            }
            else {
              vertex_ptr = texture_ptr + 1;
              local_stack_d8 = 0.0;
              weight_data = *texture_ptr;
              local_stack_dc = 0.0;
              normal_ptr = texture_ptr + 2;
              tangent_ptr = texture_ptr + 3;
              texture_ptr = texture_ptr + 4;
              local_stack_e0 = (float)(int)(short)((ushort)*vertex_ptr + (ushort)weight_data * 0x100) *
                          6.1035156e-05;
              local_stack_d4 = (float)(int)(short)((ushort)*tangent_ptr + (ushort)*normal_ptr * 0x100) *
                          6.1035156e-05;
            }
          }
          else {
            vertex_ptr = texture_ptr + 1;
            local_stack_d8 = 0.0;
            weight_data = *texture_ptr;
            local_stack_dc = 0.0;
            texture_ptr = texture_ptr + 2;
            local_stack_e0 = (float)(int)(short)((ushort)*vertex_ptr + (ushort)weight_data * 0x100) *
                        6.1035156e-05;
            local_stack_d4 = local_stack_e0;
          }
          
          // 计算变换矩阵
          transform_x = sqrt(local_stack_dc * local_stack_dc + local_stack_e0 * local_stack_e0);
          transform_y = sqrt(local_stack_d4 * local_stack_d4 + local_stack_d8 * local_stack_d8);
          
          if (*(int *)(transform_data + 0x4c) == 0) {
            transform_index = FUN_18028c3e0();
          }
          else {
            transform_index = FUN_18028e390(transform_data, (uint)*vertex_ptr * 0x100 + (uint)*normal_ptr, &local_offset);
          }
          
          if (0 < transform_index) break;
          if ((weight_data & 0x20) == 0) {
            *result_ptr = 0;
            return 0;
          }
        }
        
        local_offset = (longlong)transform_index;
        if (3 < local_offset) {
          batch_count = (local_offset - 4U >> 2) + 1;
          transform_result = batch_count * 4;
          do {
            vertex_x = (float)(int)*(short *)(local_offset + 2 + texture_offset);
            vertex_index = *(short *)(local_offset + texture_offset);
            *(short *)(local_offset + texture_offset) =
                 (short)(int)(((float)(int)vertex_index * local_stack_e0 + vertex_x * local_stack_d8 + transform_z) *
                             transform_x);
            *(short *)(local_offset + 2 + texture_offset) =
                 (short)(int)(((float)(int)vertex_index * local_stack_dc + vertex_x * local_stack_d4 + transform_w) *
                             transform_y);
            vertex_x = (float)(int)*(short *)(local_offset + 6 + texture_offset);
            vertex_y = (float)(int)*(short *)(local_offset + 4 + texture_offset);
            *(short *)(local_offset + 4 + texture_offset) =
                 (short)(int)((vertex_y * local_stack_e0 + vertex_x * local_stack_d8 + transform_z) * transform_x);
            *(short *)(local_offset + 6 + texture_offset) =
                 (short)(int)((vertex_y * local_stack_dc + vertex_x * local_stack_d4 + transform_w) * transform_y);
            vertex_x = (float)(int)*(short *)(local_offset + 0x10 + texture_offset);
            vertex_y = (float)(int)*(short *)(local_offset + 0xe + texture_offset);
            *(short *)(local_offset + 0xe + texture_offset) =
                 (short)(int)((vertex_y * local_stack_e0 + vertex_x * local_stack_d8 + transform_z) * transform_x);
            *(short *)(local_offset + 0x10 + texture_offset) =
                 (short)(int)((vertex_y * local_stack_dc + vertex_x * local_stack_d4 + transform_w) * transform_y);
            vertex_x = (float)(int)*(short *)(local_offset + 0x14 + texture_offset);
            vertex_y = (float)(int)*(short *)(local_offset + 0x12 + texture_offset);
            *(short *)(local_offset + 0x12 + texture_offset) =
                 (short)(int)((vertex_y * local_stack_e0 + vertex_x * local_stack_d8 + transform_z) * transform_x);
            *(short *)(local_offset + 0x14 + texture_offset) =
                 (short)(int)((vertex_y * local_stack_dc + vertex_x * local_stack_d4 + transform_w) * transform_y);
            vertex_x = (float)(int)*(short *)(texture_offset + 0x1e + local_offset);
            vertex_y = (float)(int)*(short *)(texture_offset + 0x1c + local_offset);
            *(short *)(texture_offset + 0x1c + local_offset) =
                 (short)(int)((vertex_y * local_stack_e0 + vertex_x * local_stack_d8 + transform_z) * transform_x);
            *(short *)(texture_offset + 0x1e + local_offset) =
                 (short)(int)((vertex_y * local_stack_dc + vertex_x * local_stack_d4 + transform_w) * transform_y);
            vertex_x = (float)(int)*(short *)(texture_offset + 0x22 + local_offset);
            vertex_y = (float)(int)*(short *)(texture_offset + 0x20 + local_offset);
            *(short *)(texture_offset + 0x20 + local_offset) =
                 (short)(int)((vertex_y * local_stack_e0 + vertex_x * local_stack_d8 + transform_z) * transform_x);
            *(short *)(texture_offset + 0x22 + local_offset) =
                 (short)(int)((vertex_y * local_stack_dc + vertex_x * local_stack_d4 + transform_w) * transform_y);
            vertex_x = (float)(int)*(short *)(texture_offset + 0x2c + local_offset);
            vertex_y = (float)(int)*(short *)(texture_offset + 0x2a + local_offset);
            *(short *)(texture_offset + 0x2a + local_offset) =
                 (short)(int)((vertex_y * local_stack_e0 + vertex_x * local_stack_d8 + transform_z) * transform_x);
            *(short *)(texture_offset + 0x2c + local_offset) =
                 (short)(int)((vertex_y * local_stack_dc + vertex_x * local_stack_d4 + transform_w) * transform_y);
            vertex_x = (float)(int)*(short *)(texture_offset + 0x30 + local_offset);
            vertex_y = (float)(int)*(short *)(texture_offset + 0x2e + local_offset);
            *(short *)(texture_offset + 0x2e + local_offset) =
                 (short)(int)((vertex_y * local_stack_e0 + vertex_x * local_stack_d8 + transform_z) * transform_x);
            *(short *)(texture_offset + 0x30 + local_offset) =
                 (short)(int)((vertex_y * local_stack_dc + vertex_x * local_stack_d4 + transform_w) * transform_y);
            texture_offset = texture_offset + 0x38;
            batch_count = batch_count + -1;
          } while (batch_count != 0);
        }
        
        if ((longlong)transform_result < local_offset) {
          batch_count = transform_result * 0xe;
          vertex_count = local_offset - transform_result;
          do {
            vertex_x = (float)(int)*(short *)(transform_result + 2 + local_offset);
            vertex_index = *(short *)(transform_result + local_offset);
            *(short *)(transform_result + local_offset) =
                 (short)(int)(((float)(int)vertex_index * local_stack_e0 + vertex_x * local_stack_d8 + transform_z) *
                             transform_x);
            *(short *)(transform_result + 2 + local_offset) =
                 (short)(int)(((float)(int)vertex_index * local_stack_dc + vertex_x * local_stack_d4 + transform_w) *
                             transform_y);
            vertex_x = (float)(int)*(short *)(transform_result + 6 + local_offset);
            vertex_y = (float)(int)*(short *)(transform_result + 4 + local_offset);
            *(short *)(transform_result + 4 + local_offset) =
                 (short)(int)((vertex_y * local_stack_e0 + vertex_x * local_stack_d8 + transform_z) * transform_x);
            *(short *)(transform_result + 6 + local_offset) =
                 (short)(int)((vertex_y * local_stack_dc + vertex_x * local_stack_d4 + transform_w) * transform_y);
            transform_result = transform_result + 0xe;
            vertex_count = vertex_count + -1;
          } while (vertex_count != 0);
        }
        
        if (_DAT_180c8a9b0 != 0) {
          *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
        }
        
        batch_count = func_0x000180120ce0((longlong)transform_index * 0xe, _DAT_180c8a9a8);
        if (batch_count != 0) {
          // 批量复制变换后的顶点数据
          memcpy(batch_count, local_offset, local_offset * 0xe);
        }
        
        if (local_offset != 0) {
          if (_DAT_180c8a9b0 != 0) {
            *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
          }
          FUN_180059ba0(local_offset, _DAT_180c8a9a8);
        }
        goto set_transform_result;
      }
    }
    else {
      texture_ptr = (byte *)(local_offset + 10 + batch_count);
      transform_flag = 0;
      vertex_count = (longlong)(vertex_index * 2);
      weight_data = texture_ptr[vertex_count + -2];
      vertex_weight = texture_ptr[vertex_count + -1];
      normal_ptr = (byte *)(local_offset + 0xc +
                        (ulonglong)*(byte *)(vertex_count + batch_count + 0xb + local_offset) +
                        (ulonglong)*(byte *)(vertex_count + batch_count + 10 + local_offset) * 0x100 + vertex_count +
                        batch_count);
      texture_coord = vertex_weight + 1 + (uint)weight_data * 0x100;
      transform_result = (ulonglong)texture_coord;
      
      if (_DAT_180c8a9b0 != 0) {
        *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
      }
      
      texture_size = func_0x000180120ce0((longlong)(int)(vertex_weight + 1 + (uint)weight_data * 0x100 + vertex_index * 2) * 0xe);
      if (texture_size == 0) goto set_transform_result;
      
      batch_result = 0;
      weight_data = 0;
      vertex_weight = 0;
      transform_matrix = 0;
      texture_width = 0;
      if (transform_result != 0) {
        vertex_buffer = (byte *)(vertex_count * 0xe + 0xc + texture_size);
        texture_height = transform_result;
        do {
          if (vertex_weight == 0) {
            transform_flag = *normal_ptr;
            if ((transform_flag & 8) != 0) {
              vertex_weight = normal_ptr[1];
            }
            normal_ptr = normal_ptr + (ulonglong)((transform_flag & 8) != 0) + 1;
          }
          else {
            vertex_weight = vertex_weight - 1;
          }
          *vertex_buffer = transform_flag;
          vertex_buffer = vertex_buffer + 0xe;
          texture_height = texture_height - 1;
        } while (texture_height != 0);
      }
      
      if (transform_result != 0) {
        index_ptr = (short *)(vertex_count * 0xe + texture_size);
        texture_height = batch_result;
        texture_size = transform_result;
        do {
          if ((*(byte *)(index_ptr + 6) & 2) == 0) {
            if ((*(byte *)(index_ptr + 6) & 0x10) == 0) {
              texture_height = (ulonglong)
                       (uint)((int)texture_height +
                             (int)(short)((ushort)*normal_ptr * 0x100 + (ushort)normal_ptr[1]));
              normal_ptr = normal_ptr + 2;
            }
          }
          else {
            weight_data = *normal_ptr;
            normal_ptr = normal_ptr + 1;
            texture_coord = (uint)weight_data;
            if ((*(byte *)(index_ptr + 6) & 0x10) == 0) {
              texture_coord = -(uint)weight_data;
            }
            texture_height = (ulonglong)((int)texture_height + texture_coord);
          }
          *index_ptr = (short)texture_height;
          index_ptr = index_ptr + 7;
          texture_size = texture_size - 1;
        } while (texture_size != 0);
      }
      
      if (transform_result != 0) {
        index_ptr = (short *)(texture_size + 2 + vertex_count * 0xe);
        texture_height = batch_result;
        texture_size = transform_result;
        do {
          if ((*(byte *)(index_ptr + 5) & 4) == 0) {
            if ((*(byte *)(index_ptr + 5) & 0x20) == 0) {
              texture_height = (ulonglong)
                       (uint)((int)texture_height +
                             (int)(short)((ushort)*normal_ptr * 0x100 + (ushort)normal_ptr[1]));
              normal_ptr = normal_ptr + 2;
            }
          }
          else {
            weight_data = *normal_ptr;
            normal_ptr = normal_ptr + 1;
            texture_coord = (uint)weight_data;
            if ((*(byte *)(index_ptr + 5) & 0x20) == 0) {
              texture_coord = -(uint)weight_data;
            }
            texture_height = (ulonglong)((int)texture_height + texture_coord);
          }
          *index_ptr = (short)texture_height;
          index_ptr = index_ptr + 7;
          texture_size = texture_size - 1;
        } while (texture_size != 0);
      }
      
      texture_width = 0;
      texture_height = 0;
      transform_matrix = 0;
      texture_coord = 0;
      texture_size = 0;
      batch_result = 0;
      texture_size = batch_result;
      transform_result = batch_result;
      texture_size = transform_matrix;
      transform_matrix = transform_flag;
      if (transform_result != 0) {
        index_ptr = (short *)(vertex_count * 0xe + texture_size);
        transform_result = batch_result;
        batch_result = texture_width;
        texture_size = texture_height;
        transform_flag = texture_coord;
        transform_matrix = texture_size;
        if (transform_result != 0) {
          vertex_index = (int)texture_height;
          texture_width = (uint)vertex_index;
          texture_height = (ulonglong)texture_width;
          weight_data = *(byte *)(index_ptr + 6);
          vertex_weight = index_ptr[1];
          texture_coord = (uint)vertex_weight;
          local_offset = CONCAT71(local_offset._1_7_, weight_data);
          transform_width = (uint)batch_result;
          if (texture_width == transform_width) {
            if (texture_size != 0) {
              vertex_count = create_render_entry(texture_size, texture_height, batch_count, texture_size, (int)transform_flag, (int)transform_matrix, texture_height, texture_width, (int)batch_result, (int)transform_result);
              transform_result = (ulonglong)texture_width;
              texture_height = (ulonglong)texture_coord;
              weight_data = (byte)local_offset;
              transform_width = texture_size;
            }
            texture_size = (ulonglong)(~(uint)weight_data & 1);
            if ((~(uint)weight_data & 1) == 0) {
              transform_matrix = (ulonglong)texture_coord;
            }
            else {
              texture_height = (ulonglong)(uint)(int)index_ptr[7];
              transform_result = (ulonglong)(uint)(int)index_ptr[8];
              texture_width = texture_coord;
              texture_height = transform_result;
              if ((*(byte *)(index_ptr + 0xd) & 1) == 0) {
                texture_height = (ulonglong)(uint)((int)((int)index_ptr[7] + texture_width) >> 1);
                transform_result = (ulonglong)(uint)((int)((int)index_ptr[8] + texture_coord) >> 1);
              }
              else {
                texture_size = texture_size + 1;
                transform_result = transform_result + 1;
                index_ptr = index_ptr + 7;
              }
            }
            
            texture_ptr = (undefined2 *)((longlong)vertex_count * 0xe + texture_size);
            *(undefined1 *)(texture_ptr + 6) = 1;
            *texture_ptr = (short)texture_height;
            texture_ptr[1] = (short)transform_result;
            *(undefined4 *)(texture_ptr + 2) = 0;
            texture_width = (uint)*texture_ptr * 0x100 + texture_ptr[1] + 1;
            texture_ptr = texture_ptr + 2;
            transform_flag = texture_height;
          set_next_entry:
            texture_height = (ulonglong)(vertex_count + 1);
            texture_coord = batch_result;
            transform_matrix = transform_result;
          }
          else {
            batch_info = (undefined2)transform_matrix;
            vertex_count = (int)texture_size;
            if ((weight_data & 1) != 0) {
              local_offset = (longlong)vertex_count * 0xe;
              if (vertex_count == 0) {
                transform_result = 0;
                batch_info = 0;
              }
              *(char *)(local_offset + 0xc + texture_size) = (vertex_count != 0) + '\x02';
              *(short *)(local_offset + texture_size) = vertex_index;
              *(short *)(local_offset + 2 + texture_size) = vertex_weight;
              *(short *)(local_offset + 4 + texture_size) = (short)transform_result;
              transform_result = (ulonglong)texture_width;
              *(undefined2 *)(local_offset + 6 + texture_size) = batch_info;
              goto set_next_entry;
            }
            if (vertex_count != 0) {
              texture_height = (ulonglong)(vertex_count + 1);
              texture_ptr = (undefined2 *)((longlong)vertex_count * 0xe + texture_size);
              *texture_ptr = (short)((int)((int)transform_result + texture_coord) >> 1);
              texture_ptr[1] = (short)((int)((int)transform_matrix + texture_width) >> 1);
              *(undefined1 *)(texture_ptr + 6) = 3;
              texture_ptr[2] = (short)transform_result;
              texture_ptr[3] = batch_info;
              transform_width = texture_size;
            }
            texture_size = texture_size + 1;
            transform_matrix = texture_coord;
          }
          transform_flag = (undefined4)transform_flag;
          transform_matrix = (undefined4)transform_result;
          transform_result = (ulonglong)transform_width;
          texture_size = (undefined4)texture_coord;
          batch_info = (undefined4)texture_size;
          texture_width = (uint)texture_size + 1;
          transform_result = transform_result + 1;
          index_ptr = index_ptr + 7;
          transform_result = transform_matrix;
        }
      }
      
      transform_width = create_render_entry(texture_size, texture_height, transform_matrix, transform_result, transform_flag, transform_matrix, texture_width, texture_height, transform_result, transform_matrix);
      texture_size = texture_size;
      transform_result = (ulonglong)transform_width;
    }
    *result_ptr = texture_size;
  }
  return transform_result;
}