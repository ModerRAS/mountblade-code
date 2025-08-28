#include "TaleWorlds.Native.Split.h"

// 03_rendering_part116.c - 渲染系统高级数据序列化和资源管理模块
// 包含6个核心函数，涵盖渲染系统数据序列化、资源管理、内存分配、数据比较等高级渲染功能

// 常量定义
#define RENDERING_SERIALIZATION_BUFFER_SIZE 0x1a0        // 渲染序列化缓冲区大小 (416字节)
#define RENDERING_RESOURCE_FLAG_OFFSET 0x10             // 渲染资源标志偏移量
#define RENDERING_COMPARISON_TOLERANCE 0.0001f          // 渲染比较容差值
#define RENDERING_DEFAULT_ALPHA 0x3f800000             // 渲染默认Alpha值 (1.0)
#define RENDERING_MAX_RESOURCE_COUNT 0xffffffff        // 渲染最大资源数量
#define RENDERING_DATA_BLOCK_SIZE 0x20                 // 渲染数据块大小 (32字节)
#define RENDERING_POINTER_ALIGNMENT 8                  // 渲染指针对齐大小

// 渲染系统标志位定义
#define RENDERING_FLAG_MODIFIED 0x08                  // 渲染数据已修改标志
#define RENDERING_FLAG_DIFFERENT 0x10                 // 渲染数据不同标志
#define RENDERING_FLAG_INITIALIZED 0x20               // 渲染数据已初始化标志

// 渲染系统内存管理常量
#define RENDERING_MEMORY_POOL_SIZE 0x1000             // 渲染内存池大小 (4KB)
#define RENDERING_CACHE_LINE_SIZE 64                   // 渲染缓存行大小
#define RENDERING_ALIGNMENT_MASK 0x3f                 // 渲染对齐掩码

// 渲染系统数据结构偏移量
#define RENDERING_CONTEXT_OFFSET 0x08                 // 渲染上下文偏移量
#define RENDERING_DATA_OFFSET 0xb0                    // 渲染数据偏移量
#define RENDERING_RESOURCE_OFFSET 0x168               // 渲染资源偏移量
#define RENDERING_STATE_OFFSET 0x1b8                  // 渲染状态偏移量

/**
 * 渲染系统高级数据序列化函数
 * 原始函数名: FUN_1803387a0
 * 功能: 对渲染系统的高级数据进行序列化处理，包括资源数据、对象数据和标志位的序列化
 * 参数: param_1 - 渲染上下文指针，param_2 - 数据上下文指针
 * 返回值: 无
 */
void RenderingSystem_AdvancedSerializeData(longlong *render_context, longlong data_context)
{
  longlong *resource_ptr;
  ulonglong *flag_ptr;
  char condition_flag;
  int8_t data_byte;
  int32_t data_word;
  int resource_count;
  longlong resource_size;
  int32_t temp_data;
  int32_t temp_data2;
  int32_t temp_data3;
  uint64_t data_qword;
  uint64_t data_qword2;
  uint64_t data_qword3;
  uint64_t data_qword4;
  uint64_t data_qword5;
  uint64_t data_qword6;
  uint64_t data_qword7;
  uint64_t data_qword8;
  int32_t *data_ptr;
  int *int_ptr;
  uint64_t *qword_ptr;
  int8_t *byte_ptr;
  longlong offset;
  uint64_t *qword_ptr2;
  int8_t *byte_ptr2;
  uint *uint_ptr;
  uint64_t *qword_ptr3;
  int8_t *byte_ptr3;
  longlong array_size;
  int32_t *data_ptr2;
  uint data_size;
  ulonglong total_size;
  int32_t stack_data_48;
  int32_t stack_data_44;
  int32_t stack_data_40;
  int32_t stack_data_3c;
  
  // 获取数据大小并更新指针
  data_size = **(uint **)(data_context + 8);
  uint_ptr = *(uint **)(data_context + 8) + 1;
  *(uint **)(data_context + 8) = uint_ptr;
  if (data_size != 0) {
    // 处理数据块
    (**(code **)(*render_context + 0x18))(render_context, uint_ptr);
    *(longlong *)(data_context + 8) = *(longlong *)(data_context + 8) + (ulonglong)data_size;
    uint_ptr = *(uint **)(data_context + 8);
  }
  
  // 序列化渲染状态数据
  *(uint *)((longlong)render_context + 0x5c) = *uint_ptr;
  data_ptr = (int32_t *)(*(longlong *)(data_context + 8) + 4);
  *(int32_t **)(data_context + 8) = data_ptr;
  *(int32_t *)(render_context + 0xb) = *data_ptr;
  data_ptr = (int32_t *)(*(longlong *)(data_context + 8) + 4);
  *(int32_t **)(data_context + 8) = data_ptr;
  *(int32_t *)(render_context + 0xc) = *data_ptr;
  offset = *(longlong *)(data_context + 8);
  *(char **)(data_context + 8) = (char *)(offset + 4);
  condition_flag = *(char *)(offset + 4);
  *(int32_t **)(data_context + 8) = (int32_t *)(offset + 5);
  
  // 处理条件分支
  if (condition_flag == '\0') {
    // 处理渲染参数数据
    *(int32_t *)(render_context + 0x1a) = *(int32_t *)(offset + 5);
    *(int32_t *)((longlong)render_context + 0xd4) = *(int32_t *)(offset + 9);
    *(int32_t *)(render_context + 0x1b) = *(int32_t *)(offset + 0xd);
    *(int32_t *)((longlong)render_context + 0xdc) = *(int32_t *)(offset + 0x11);
    *(int32_t *)(render_context + 0x1c) = *(int32_t *)(offset + 0x15);
    *(int32_t *)((longlong)render_context + 0xe4) = *(int32_t *)(offset + 0x19);
    *(int32_t *)(render_context + 0x1d) = *(int32_t *)(offset + 0x1d);
    *(int32_t *)((longlong)render_context + 0xec) = *(int32_t *)(offset + 0x21);
    *(int32_t *)(render_context + 0x1e) = *(int32_t *)(offset + 0x25);
    *(int32_t *)((longlong)render_context + 0xf4) = *(int32_t *)(offset + 0x29);
    *(int32_t *)(render_context + 0x1f) = *(int32_t *)(offset + 0x2d);
    *(int32_t *)((longlong)render_context + 0xfc) = *(int32_t *)(offset + 0x31);
    *(int32_t *)(render_context + 0x20) = *(int32_t *)(offset + 0x35);
    *(int32_t *)((longlong)render_context + 0x104) = *(int32_t *)(offset + 0x39);
    *(int32_t *)(render_context + 0x21) = *(int32_t *)(offset + 0x3d);
    temp_data = *(int32_t *)(offset + 0x41);
    data_ptr = (int32_t *)(offset + 0x45);
    *(int32_t **)(data_context + 8) = data_ptr;
    *(int32_t *)((longlong)render_context + 0x10c) = temp_data;
  }
  else {
    // 设置默认渲染参数
    render_context[0x1a] = RENDERING_DEFAULT_ALPHA;
    render_context[0x1b] = 0;
    render_context[0x1c] = RENDERING_DEFAULT_ALPHA;
    render_context[0x1d] = 0;
    *(int32_t *)(render_context + 0x1e) = 0;
    *(int32_t *)((longlong)render_context + 0xf4) = 0;
    *(int32_t *)(render_context + 0x1f) = RENDERING_DEFAULT_ALPHA;
    *(int32_t *)((longlong)render_context + 0xfc) = 0;
    render_context[0x20] = 0;
    render_context[0x21] = RENDERING_DEFAULT_ALPHA;
    data_ptr = *(int32_t **)(data_context + 8);
  }
  
  // 继续序列化渲染数据
  *(int32_t *)((longlong)render_context + 100) = *data_ptr;
  offset = *(longlong *)(data_context + 8);
  *(int32_t *)(render_context + 0x10) = *(int32_t *)(offset + 4);
  *(int32_t *)((longlong)render_context + 0x84) = *(int32_t *)(offset + 8);
  *(int32_t *)(render_context + 0x11) = *(int32_t *)(offset + 0xc);
  *(int32_t *)((longlong)render_context + 0x8c) = *(int32_t *)(offset + 0x10);
  *(int32_t *)(render_context + 0x12) = *(int32_t *)(offset + 0x14);
  *(int32_t *)((longlong)render_context + 0x94) = *(int32_t *)(offset + 0x18);
  *(int32_t *)(render_context + 0x13) = *(int32_t *)(offset + 0x1c);
  *(int32_t *)((longlong)render_context + 0x9c) = *(int32_t *)(offset + 0x20);
  *(int32_t *)(render_context + 0x14) = *(int32_t *)(offset + 0x24);
  *(int32_t *)((longlong)render_context + 0xa4) = *(int32_t *)(offset + 0x28);
  *(int32_t *)(render_context + 0x15) = *(int32_t *)(offset + 0x2c);
  *(int32_t *)((longlong)render_context + 0xac) = *(int32_t *)(offset + 0x30);
  *(int32_t *)(render_context + 0x16) = *(int32_t *)(offset + 0x34);
  *(int32_t *)((longlong)render_context + 0xb4) = *(int32_t *)(offset + 0x38);
  *(int32_t *)(render_context + 0x17) = *(int32_t *)(offset + 0x3c);
  *(int32_t *)((longlong)render_context + 0xbc) = *(int32_t *)(offset + 0x40);
  *(int32_t *)(render_context + 0x18) = *(int32_t *)(offset + 0x44);
  *(int32_t *)((longlong)render_context + 0xc4) = *(int32_t *)(offset + 0x48);
  *(int32_t *)(render_context + 0x19) = *(int32_t *)(offset + 0x4c);
  temp_data = *(int32_t *)(offset + 0x50);
  *(int32_t **)(data_context + 8) = (int32_t *)(offset + 0x54);
  *(int32_t *)((longlong)render_context + 0xcc) = temp_data;
  *(int32_t *)(render_context + 0xd) = *(int32_t *)(offset + 0x54);
  data_ptr = (int32_t *)(*(longlong *)(data_context + 8) + 4);
  *(int32_t **)(data_context + 8) = data_ptr;
  *(int32_t *)(render_context + 0x33) = *data_ptr;
  offset = *(longlong *)(data_context + 8);
  int_ptr = (int *)(offset + 4);
  *(int **)(data_context + 8) = int_ptr;
  resource_count = *int_ptr;
  array_size = (longlong)resource_count;
  data_ptr = (int32_t *)(offset + 8);
  *(int32_t **)(data_context + 8) = data_ptr;
  
  // 处理资源数组
  if (0 < resource_count) {
    resource_ptr = render_context + 0x26;
    FUN_18033a920(resource_ptr, array_size);
    data_ptr = *(int32_t **)(data_context + 8);
    offset = 0;
    if (3 < array_size) {
      data_ptr2 = data_ptr;
      do {
        temp_data = *data_ptr2;
        resource_size = *resource_ptr;
        *(int32_t **)(data_context + 8) = data_ptr2 + 2;
        *(int32_t *)(resource_size + offset * 8) = temp_data;
        *(int32_t *)(resource_size + 4 + offset * 8) = data_ptr2[1];
        resource_size = *resource_ptr;
        *(int32_t *)(resource_size + 8 + offset * 8) = data_ptr2[2];
        *(int32_t *)(resource_size + 0xc + offset * 8) = data_ptr2[3];
        *(int32_t **)(data_context + 8) = data_ptr2 + 4;
        resource_size = *resource_ptr;
        *(int32_t *)(resource_size + 0x10 + offset * 8) = data_ptr2[4];
        *(int32_t *)(resource_size + 0x14 + offset * 8) = data_ptr2[5];
        *(int32_t **)(data_context + 8) = data_ptr2 + 6;
        resource_size = *resource_ptr;
        temp_data = data_ptr2[6];
        data_ptr = data_ptr2 + 8;
        *(int32_t **)(data_context + 8) = data_ptr;
        *(int32_t *)(resource_size + 0x18 + offset * 8) = temp_data;
        *(int32_t *)(resource_size + 0x1c + offset * 8) = data_ptr2[7];
        offset = offset + 4;
        data_ptr2 = data_ptr;
      } while (offset < array_size + -3);
    }
    for (; offset < array_size; offset = offset + 1) {
      resource_size = *resource_ptr;
      *(int32_t *)(resource_size + offset * 8) = *data_ptr;
      *(int32_t *)(resource_size + 4 + offset * 8) = data_ptr[1];
      *(int32_t **)(data_context + 8) = data_ptr + 2;
      data_ptr = data_ptr + 2;
    }
  }
  
  // 处理渲染标志数据
  flag_ptr = (ulonglong *)(render_context + 0x2a);
  *(int32_t *)((longlong)render_context + 0x7c) = *data_ptr;
  data_ptr = (int32_t *)(*(longlong *)(data_context + 8) + 4);
  *(int32_t **)(data_context + 8) = data_ptr;
  *(int32_t *)((longlong)render_context + 0x74) = *data_ptr;
  *(longlong *)(data_context + 8) = *(longlong *)(data_context + 8) + 4;
  FUN_180284120(flag_ptr, *(int32_t *)((longlong)render_context + 0x74));
  data_size = 0;
  if (*(int *)((longlong)render_context + 0x74) != 0) {
    do {
      qword_ptr3 = *(uint64_t **)(data_context + 8);
      data_qword = *qword_ptr3;
      data_qword2 = qword_ptr3[1];
      data_qword3 = qword_ptr3[2];
      data_qword4 = qword_ptr3[3];
      data_qword5 = qword_ptr3[4];
      data_qword6 = qword_ptr3[5];
      temp_data = *(int32_t *)(qword_ptr3 + 6);
      temp_data2 = *(int32_t *)((longlong)qword_ptr3 + 0x34);
      data_qword7 = qword_ptr3[6];
      temp_data3 = *(int32_t *)(qword_ptr3 + 7);
      stack_data_40 = *(int32_t *)((longlong)qword_ptr3 + 0x3c);
      data_qword8 = qword_ptr3[7];
      *(uint64_t **)(data_context + 8) = qword_ptr3 + 8;
      qword_ptr = (uint64_t *)render_context[0x2b];
      stack_data_48 = (int32_t)data_qword5;
      stack_data_44 = (int32_t)((ulonglong)data_qword5 >> 0x20);
      stack_data_40 = (int32_t)data_qword6;
      stack_data_3c = (int32_t)((ulonglong)data_qword6 >> 0x20);
      
      // 内存管理逻辑
      if (qword_ptr < (uint64_t *)render_context[0x2c]) {
        render_context[0x2b] = (longlong)(qword_ptr + 8);
        *qword_ptr = data_qword;
        qword_ptr[1] = data_qword2;
        qword_ptr[2] = data_qword3;
        qword_ptr[3] = data_qword4;
        *(int32_t *)(qword_ptr + 4) = stack_data_48;
        *(int32_t *)((longlong)qword_ptr + 0x24) = stack_data_44;
        *(int32_t *)(qword_ptr + 5) = stack_data_40;
        *(int32_t *)((longlong)qword_ptr + 0x2c) = stack_data_3c;
        qword_ptr[6] = data_qword7;
        qword_ptr[7] = data_qword8;
      }
      else {
        qword_ptr2 = (uint64_t *)*flag_ptr;
        offset = (longlong)qword_ptr - (longlong)qword_ptr2 >> 6;
        if (offset == 0) {
          offset = 1;
LAB_180338b93:
          qword_ptr3 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18, offset << 6, (char)render_context[0x2d]);
          qword_ptr2 = (uint64_t *)*flag_ptr;
          qword_ptr = (uint64_t *)render_context[0x2b];
        }
        else {
          offset = offset * 2;
          if (offset != 0) goto LAB_180338b93;
          qword_ptr3 = (uint64_t *)0x0;
        }
        if (qword_ptr2 != qword_ptr) {
          memmove(qword_ptr3, qword_ptr2, (longlong)qword_ptr - (longlong)qword_ptr2);
        }
        *qword_ptr3 = data_qword;
        qword_ptr3[1] = data_qword2;
        qword_ptr3[2] = data_qword3;
        qword_ptr3[3] = data_qword4;
        *(int32_t *)(qword_ptr3 + 4) = stack_data_48;
        *(int32_t *)((longlong)qword_ptr3 + 0x24) = stack_data_44;
        *(int32_t *)(qword_ptr3 + 5) = stack_data_40;
        *(int32_t *)((longlong)qword_ptr3 + 0x2c) = stack_data_3c;
        *(int32_t *)(qword_ptr3 + 6) = temp_data;
        *(int32_t *)((longlong)qword_ptr3 + 0x34) = temp_data2;
        *(int32_t *)(qword_ptr3 + 7) = temp_data3;
        *(int32_t *)((longlong)qword_ptr3 + 0x3c) = stack_data_40;
        if (*flag_ptr != 0) {
          FUN_18064e900();
        }
        *flag_ptr = (ulonglong)qword_ptr3;
        render_context[0x2c] = (longlong)(qword_ptr3 + offset * 8);
        render_context[0x2b] = (longlong)(qword_ptr3 + 8);
      }
      data_size = data_size + 1;
    } while (data_size < *(uint *)((longlong)render_context + 0x74));
  }
  
  // 处理渲染标志位
  *(int32_t *)(render_context + 0xf) = **(int32_t **)(data_context + 8);
  *(longlong *)(data_context + 8) = *(longlong *)(data_context + 8) + 4;
  offset = render_context[0x2e];
  total_size = (ulonglong)*(uint *)(render_context + 0xf);
  if ((ulonglong)(render_context[0x30] - offset) < total_size) {
    if (total_size == 0) {
      array_size = 0;
    }
    else {
      array_size = FUN_18062b420(_DAT_180c8ed18, total_size, (char)render_context[0x31]);
      offset = render_context[0x2e];
    }
    if (offset != render_context[0x2f]) {
      memmove(array_size, offset, render_context[0x2f] - offset);
    }
    if (offset != 0) {
      FUN_18064e900();
    }
    render_context[0x2e] = array_size;
    render_context[0x30] = array_size + total_size;
    render_context[0x2f] = array_size;
  }
  data_size = 0;
  if ((int)render_context[0xf] != 0) {
    do {
      data_byte = **(int8_t **)(data_context + 8);
      *(int8_t **)(data_context + 8) = *(int8_t **)(data_context + 8) + 1;
      byte_ptr3 = (int8_t *)render_context[0x2f];
      if (byte_ptr3 < (int8_t *)render_context[0x30]) {
        render_context[0x2f] = (longlong)(byte_ptr3 + 1);
        *byte_ptr3 = data_byte;
      }
      else {
        byte_ptr2 = (int8_t *)render_context[0x2e];
        if ((longlong)byte_ptr3 - (longlong)byte_ptr2 == 0) {
          offset = 1;
LAB_180338d21:
          byte_ptr = (int8_t *)FUN_18062b420(_DAT_180c8ed18, offset, (char)render_context[0x31]);
          byte_ptr2 = (int8_t *)render_context[0x2e];
          byte_ptr3 = (int8_t *)render_context[0x2f];
        }
        else {
          offset = ((longlong)byte_ptr3 - (longlong)byte_ptr2) * 2;
          if (offset != 0) goto LAB_180338d21;
          byte_ptr = (int8_t *)0x0;
        }
        if (byte_ptr2 != byte_ptr3) {
          memmove(byte_ptr, byte_ptr2, (longlong)byte_ptr3 - (longlong)byte_ptr2);
        }
        *byte_ptr = data_byte;
        if (render_context[0x2e] != 0) {
          FUN_18064e900();
        }
        render_context[0x2e] = (longlong)byte_ptr;
        render_context[0x30] = (longlong)(byte_ptr + offset);
        render_context[0x2f] = (longlong)(byte_ptr + 1);
      }
      data_size = data_size + 1;
    } while (data_size < *(uint *)(render_context + 0xf));
  }
  
  // 最终数据序列化
  *(int32_t *)((longlong)render_context + 0x6c) = **(int32_t **)(data_context + 8);
  offset = *(longlong *)(data_context + 8);
  uint_ptr = (uint *)(offset + 4);
  *(uint **)(data_context + 8) = uint_ptr;
  data_size = *uint_ptr;
  data_ptr = (int32_t *)(offset + 8);
  *(int32_t **)(data_context + 8) = data_ptr;
  if (data_size != 0) {
    (**(code **)(render_context[0x22] + 0x18))(render_context + 0x22, data_ptr, data_size);
    *(longlong *)(data_context + 8) = *(longlong *)(data_context + 8) + (ulonglong)data_size;
    data_ptr = *(int32_t **)(data_context + 8);
  }
  *(int32_t *)(render_context + 0xe) = *data_ptr;
  *(longlong *)(data_context + 8) = *(longlong *)(data_context + 8) + 4;
  return;
}

/**
 * 渲染系统数据序列化输出函数
 * 原始函数名: FUN_180338e10
 * 功能: 将渲染系统数据序列化到输出缓冲区
 * 参数: param_1 - 渲染数据指针，param_2 - 输出缓冲区指针
 * 返回值: 无
 */
void RenderingSystem_SerializeOutput(longlong render_data, longlong *output_buffer)
{
  int8_t output_byte;
  int32_t output_word;
  int8_t *byte_ptr;
  int32_t *word_ptr;
  
  // 初始化序列化
  FUN_1803377b0();
  word_ptr = (int32_t *)output_buffer[1];
  output_word = *(int32_t *)(render_data + 8);
  
  // 检查缓冲区空间
  if ((ulonglong)((output_buffer[2] - (longlong)word_ptr) + *output_buffer) < 5) {
    FUN_180639bf0(output_buffer, (longlong)word_ptr + (4 - *output_buffer));
    word_ptr = (int32_t *)output_buffer[1];
  }
  *word_ptr = output_word;
  output_buffer[1] = output_buffer[1] + 4;
  
  // 序列化渲染数据块
  FUN_180639ec0(output_buffer, render_data + 0xb0);
  FUN_180639ec0(output_buffer, render_data + 0x108);
  FUN_180639ec0(output_buffer, render_data + 0x160);
  
  // 序列化渲染状态数据
  word_ptr = (int32_t *)output_buffer[1];
  output_word = *(int32_t *)(render_data + 0x1b8);
  if ((ulonglong)((output_buffer[2] - (longlong)word_ptr) + *output_buffer) < 5) {
    FUN_180639bf0(output_buffer, (longlong)word_ptr + (4 - *output_buffer));
    word_ptr = (int32_t *)output_buffer[1];
  }
  *word_ptr = output_word;
  output_buffer[1] = output_buffer[1] + 4;
  
  word_ptr = (int32_t *)output_buffer[1];
  output_word = *(int32_t *)(render_data + 0x1bc);
  if ((ulonglong)((output_buffer[2] - (longlong)word_ptr) + *output_buffer) < 5) {
    FUN_180639bf0(output_buffer, (longlong)word_ptr + (4 - *output_buffer));
    word_ptr = (int32_t *)output_buffer[1];
  }
  *word_ptr = output_word;
  output_buffer[1] = output_buffer[1] + 4;
  
  word_ptr = (int32_t *)output_buffer[1];
  output_word = *(int32_t *)(render_data + 0x1c0);
  if ((ulonglong)((output_buffer[2] - (longlong)word_ptr) + *output_buffer) < 5) {
    FUN_180639bf0(output_buffer, (longlong)word_ptr + (4 - *output_buffer));
    word_ptr = (int32_t *)output_buffer[1];
  }
  *word_ptr = output_word;
  output_buffer[1] = output_buffer[1] + 4;
  
  // 序列化标志位
  byte_ptr = (int8_t *)output_buffer[1];
  output_byte = *(int8_t *)(render_data + 0x1c4);
  if ((ulonglong)((output_buffer[2] - (longlong)byte_ptr) + *output_buffer) < 2) {
    FUN_180639bf0(output_buffer, byte_ptr + (1 - *output_buffer));
    *(int8_t *)output_buffer[1] = output_byte;
  }
  else {
    *byte_ptr = output_byte;
  }
  output_buffer[1] = output_buffer[1] + 1;
  return;
}

/**
 * 渲染系统数据反序列化函数
 * 原始函数名: FUN_180338f90
 * 功能: 从输入缓冲区反序列化渲染系统数据
 * 参数: param_1 - 渲染数据指针，param_2 - 输入缓冲区指针
 * 返回值: 无
 */
void RenderingSystem_DeserializeInput(longlong render_data, longlong input_buffer)
{
  uint data_size;
  uint *uint_ptr;
  
  // 初始化反序列化
  FUN_180337990();
  *(int32_t *)(render_data + 8) = **(int32_t **)(input_buffer + 8);
  *(longlong *)(input_buffer + 8) = *(longlong *)(input_buffer + 8) + 4;
  
  // 反序列化数据块
  data_size = **(uint **)(input_buffer + 8);
  uint_ptr = *(uint **)(input_buffer + 8) + 1;
  *(uint **)(input_buffer + 8) = uint_ptr;
  if (data_size != 0) {
    (**(code **)(*(longlong *)(render_data + 0xb0) + 0x18))((longlong *)(render_data + 0xb0), uint_ptr, data_size);
    *(longlong *)(input_buffer + 8) = *(longlong *)(input_buffer + 8) + (ulonglong)data_size;
    uint_ptr = *(uint **)(input_buffer + 8);
  }
  
  data_size = *uint_ptr;
  uint_ptr = uint_ptr + 1;
  *(uint **)(input_buffer + 8) = uint_ptr;
  if (data_size != 0) {
    (**(code **)(*(longlong *)(render_data + 0x108) + 0x18))((longlong *)(render_data + 0x108), uint_ptr, data_size);
    *(longlong *)(input_buffer + 8) = *(longlong *)(input_buffer + 8) + (ulonglong)data_size;
    uint_ptr = *(uint **)(input_buffer + 8);
  }
  
  data_size = *uint_ptr;
  uint_ptr = uint_ptr + 1;
  *(uint **)(input_buffer + 8) = uint_ptr;
  if (data_size != 0) {
    (**(code **)(*(longlong *)(render_data + 0x160) + 0x18))((longlong *)(render_data + 0x160), uint_ptr, data_size);
    *(longlong *)(input_buffer + 8) = *(longlong *)(input_buffer + 8) + (ulonglong)data_size;
    uint_ptr = *(uint **)(input_buffer + 8);
  }
  
  // 反序列化状态数据
  *(uint *)(render_data + 0x1b8) = *uint_ptr;
  *(longlong *)(input_buffer + 8) = *(longlong *)(input_buffer + 8) + 4;
  *(int32_t *)(render_data + 0x1bc) = **(int32_t **)(input_buffer + 8);
  *(longlong *)(input_buffer + 8) = *(longlong *)(input_buffer + 8) + 4;
  *(int32_t *)(render_data + 0x1c0) = **(int32_t **)(input_buffer + 8);
  *(longlong *)(input_buffer + 8) = *(longlong *)(input_buffer + 8) + 4;
  *(int8_t *)(render_data + 0x1c4) = **(int8_t **)(input_buffer + 8);
  *(longlong *)(input_buffer + 8) = *(longlong *)(input_buffer + 8) + 1;
  return;
}

/**
 * 渲染系统资源管理器初始化函数
 * 原始函数名: FUN_180339080
 * 功能: 初始化渲染系统资源管理器，设置默认参数和内存布局
 * 参数: param_1 - 资源管理器指针
 * 返回值: 无
 */
void RenderingSystem_InitializeResourceManager(longlong resource_manager)
{
  // 设置资源管理器参数
  *(int32_t *)(resource_manager + 0x8c) = 8;
  *(uint64_t *)(resource_manager + 8) = 0;
  *(uint64_t *)(resource_manager + 0x10) = 0;
  
  // 初始化渲染系统组件
  FUN_180284720(resource_manager + 0x90);
  *(int32_t *)(resource_manager + 0xc0) = 0;
  **(int8_t **)(resource_manager + 0xb8) = 0;
  *(int32_t *)(resource_manager + 0x118) = 0;
  **(int8_t **)(resource_manager + 0x110) = 0;
  *(int32_t *)(resource_manager + 0x170) = 0;
  **(int8_t **)(resource_manager + 0x168) = 0;
  
  // 重置资源管理器状态
  *(int32_t *)(resource_manager + 0x8c) = 0;
  *(int8_t *)(resource_manager + 0x1c4) = 0;
  *(int32_t *)(resource_manager + 0x1bc) = RENDERING_MAX_RESOURCE_COUNT;
  *(int32_t *)(resource_manager + 0x1c0) = 0;
  *(int32_t *)(resource_manager + 0x1b8) = 0;
  return;
}

/**
 * 渲染系统资源管理器创建函数
 * 原始函数名: FUN_180339110
 * 功能: 创建渲染系统资源管理器并初始化各项参数
 * 参数: param_1 - 资源管理器指针
 * 返回值: 创建的资源管理器指针
 */
uint64_t *RenderingSystem_CreateResourceManager(uint64_t *resource_manager)
{
  // 初始化资源管理器结构
  FUN_180320470();
  *resource_manager = &UNK_180a1b430;
  resource_manager[0x16] = &UNK_18098bcb0;
  resource_manager[0x17] = 0;
  *(int32_t *)(resource_manager + 0x18) = 0;
  resource_manager[0x16] = &UNK_1809fcc58;
  resource_manager[0x17] = resource_manager + 0x19;
  *(int32_t *)(resource_manager + 0x18) = 0;
  *(int8_t *)(resource_manager + 0x19) = 0;
  
  // 设置资源管理器参数
  resource_manager[0x21] = &UNK_18098bcb0;
  resource_manager[0x22] = 0;
  *(int32_t *)(resource_manager + 0x23) = 0;
  resource_manager[0x21] = &UNK_1809fcc58;
  resource_manager[0x22] = resource_manager + 0x24;
  *(int32_t *)(resource_manager + 0x23) = 0;
  *(int8_t *)(resource_manager + 0x24) = 0;
  
  // 初始化资源管理器
  resource_manager[0x2c] = &UNK_18098bcb0;
  resource_manager[0x2d] = 0;
  *(int32_t *)(resource_manager + 0x2e) = 0;
  resource_manager[0x2c] = &UNK_1809fcc58;
  resource_manager[0x2d] = resource_manager + 0x2f;
  *(int32_t *)(resource_manager + 0x2e) = 0;
  *(int8_t *)(resource_manager + 0x2f) = 0;
  
  // 调用初始化函数
  FUN_180339080(resource_manager);
  return resource_manager;
}

/**
 * 渲染系统数据比较函数
 * 原始函数名: FUN_1803391e0
 * 功能: 比较两个渲染系统数据对象的差异
 * 参数: param_1 - 第一个渲染数据对象，param_2 - 第二个渲染数据对象
 * 返回值: 布尔值，true表示有差异，false表示相同
 */
bool RenderingSystem_CompareData(longlong render_data1, longlong render_data2)
{
  byte *data_ptr1;
  longlong offset1;
  char compare_result1;
  char compare_result2;
  byte *data_ptr2;
  longlong offset2;
  int size1;
  int size2;
  longlong data_offset;
  ulonglong index;
  bool has_difference;
  float value1;
  float value2;
  
  // 比较渲染数据
  compare_result1 = func_0x000180274d30(render_data1 + 0x58, render_data2 + 0x58);
  if (compare_result1 == '\0') {
    *(uint *)(render_data1 + 0x10) = *(uint *)(render_data1 + 0x10) | RENDERING_FLAG_MODIFIED;
  }
  
  value2 = RENDERING_COMPARISON_TOLERANCE;
  compare_result2 = func_0x000180285f10(render_data1 + 0x18, render_data2 + 0x18);
  if (compare_result2 == '\0') {
    *(uint *)(render_data1 + 0x10) = *(uint *)(render_data1 + 0x10) | RENDERING_FLAG_MODIFIED;
  }
  
  has_difference = *(int *)(render_data1 + 0x14) != *(int *)(render_data2 + 0x14);
  if (has_difference) {
    *(uint *)(render_data1 + 0x10) = *(uint *)(render_data1 + 0x10) | RENDERING_FLAG_MODIFIED;
  }
  has_difference = has_difference || (compare_result2 == '\0' || compare_result1 == '\0');
  
  // 比较资源数据
  size1 = *(int *)(render_data1 + 0x170);
  size2 = *(int *)(render_data2 + 0x170);
  if (size1 == size2) {
    if (size1 != 0) {
      data_ptr2 = *(byte **)(render_data1 + 0x168);
      data_offset = *(longlong *)(render_data2 + 0x168) - (longlong)data_ptr2;
      do {
        data_ptr1 = data_ptr2 + data_offset;
        size2 = (uint)*data_ptr2 - (uint)*data_ptr1;
        if (size2 != 0) break;
        data_ptr2 = data_ptr2 + 1;
      } while (*data_ptr1 != 0);
    }
LAB_18033928d:
    if (size2 == 0) goto LAB_180339296;
  }
  else if (size1 == 0) goto LAB_18033928d;
  
  *(uint *)(render_data1 + 0x10) = *(uint *)(render_data1 + 0x10) | RENDERING_FLAG_DIFFERENT;
  has_difference = true;
  
LAB_180339296:
  // 比较浮点数值
  value1 = *(float *)(render_data1 + 0x1b8) - *(float *)(render_data2 + 0x1b8);
  if ((value1 <= -RENDERING_COMPARISON_TOLERANCE) || (RENDERING_COMPARISON_TOLERANCE <= value1)) {
    *(uint *)(render_data1 + 0x10) = *(uint *)(render_data1 + 0x10) | RENDERING_FLAG_MODIFIED;
    has_difference = true;
  }
  
  // 比较渲染块数据
  data_offset = *(longlong *)(render_data1 + 0x90);
  offset1 = *(longlong *)(render_data1 + 0x98) - data_offset;
  offset2 = offset1 >> 0x3f;
  offset1 = offset1 / RENDERING_SERIALIZATION_BUFFER_SIZE + offset2;
  if (offset1 - offset2 == (*(longlong *)(render_data2 + 0x98) - *(longlong *)(render_data2 + 0x90)) / RENDERING_SERIALIZATION_BUFFER_SIZE) {
    size1 = 0;
    if (offset1 != offset2) {
      index = 0;
      do {
        compare_result1 = FUN_180327250(index * RENDERING_SERIALIZATION_BUFFER_SIZE + data_offset, *(longlong *)(render_data2 + 0x90) + index * RENDERING_SERIALIZATION_BUFFER_SIZE);
        if (compare_result1 != '\0') {
          *(uint *)(render_data1 + 0x10) = *(uint *)(render_data1 + 0x10) | RENDERING_FLAG_MODIFIED;
          has_difference = true;
        }
        data_offset = *(longlong *)(render_data1 + 0x90);
        size1 = size1 + 1;
        index = (ulonglong)size1;
      } while (index < (ulonglong)((*(longlong *)(render_data1 + 0x98) - data_offset) / RENDERING_SERIALIZATION_BUFFER_SIZE));
    }
  }
  else {
    *(uint *)(render_data1 + 0x10) = *(uint *)(render_data1 + 0x10) | RENDERING_FLAG_MODIFIED;
  }
  return has_difference;
}

/**
 * 渲染系统资源比较函数
 * 原始函数名: FUN_18033931a
 * 功能: 比较两个渲染系统资源的差异
 * 参数: param_1 - 资源管理器1，param_2 - 资源管理器2，param_3 - 资源数量，param_4 - 资源偏移量
 * 返回值: 无符号字符，表示比较结果
 */
int8_t RenderingSystem_CompareResources(uint64_t resource_manager1, uint64_t resource_manager2, longlong resource_count, longlong resource_offset)
{
  char compare_result;
  longlong temp_offset;
  longlong unaff_RBX;
  int index;
  longlong unaff_RSI;
  int8_t unaff_DIL;
  ulonglong resource_index;
  longlong unaff_R14;
  
  index = 0;
  if (resource_count != 0) {
    resource_index = 0;
    do {
      compare_result = FUN_180327250(resource_index * RENDERING_SERIALIZATION_BUFFER_SIZE + resource_offset, *(longlong *)(unaff_RSI + 0x90) + resource_index * RENDERING_SERIALIZATION_BUFFER_SIZE);
      if (compare_result != '\0') {
        *(uint *)(unaff_RBX + 0x10) = *(uint *)(unaff_RBX + 0x10) | RENDERING_FLAG_MODIFIED;
        unaff_DIL = 1;
      }
      resource_offset = *(longlong *)(unaff_RBX + 0x90);
      index = index + 1;
      resource_index = (ulonglong)index;
      temp_offset = SUB168(SEXT816(unaff_R14) * SEXT816(*(longlong *)(unaff_RBX + 0x98) - resource_offset), 8);
    } while (resource_index < (ulonglong)((temp_offset >> 7) - (temp_offset >> 0x3f)));
  }
  return unaff_DIL;
}

/**
 * 渲染系统空函数
 * 原始函数名: FUN_180339388
 * 功能: 空函数，用于占位或调试
 * 参数: 无
 * 返回值: 无符号字符
 */
int8_t RenderingSystem_EmptyFunction(void)
{
  int8_t unaff_DIL;
  
  return unaff_DIL;
}

/**
 * 渲染系统资源序列化函数
 * 原始函数名: FUN_1803393b0
 * 功能: 序列化渲染系统资源到输出缓冲区
 * 参数: param_1 - 渲染数据指针，param_2 - 输出缓冲区指针，param_3 - 资源管理器1，param_4 - 资源管理器2
 * 返回值: 无
 */
void RenderingSystem_SerializeResources(longlong render_data, longlong *output_buffer, uint64_t resource_manager1, uint64_t resource_manager2)
{
  ulonglong buffer_size;
  int32_t output_word;
  uint data_size;
  longlong temp_offset;
  int32_t *word_ptr;
  uint *uint_ptr;
  void *data_ptr;
  uint64_t unaff_RDI;
  
  // 初始化序列化
  FUN_1803377b0();
  word_ptr = (int32_t *)output_buffer[1];
  output_word = *(int32_t *)(render_data + 0xb0);
  
  // 检查缓冲区空间并写入数据
  if ((ulonglong)((output_buffer[2] - (longlong)word_ptr) + *output_buffer) < 5) {
    FUN_180639bf0(output_buffer, (longlong)word_ptr + (4 - *output_buffer));
    word_ptr = (int32_t *)output_buffer[1];
  }
  *word_ptr = output_word;
  output_buffer[1] = output_buffer[1] + 4;
  
  // 序列化渲染参数
  word_ptr = (int32_t *)output_buffer[1];
  output_word = *(int32_t *)(render_data + 0xb4);
  if ((ulonglong)((output_buffer[2] - (longlong)word_ptr) + *output_buffer) < 5) {
    FUN_180639bf0(output_buffer, (longlong)word_ptr + (4 - *output_buffer));
    word_ptr = (int32_t *)output_buffer[1];
  }
  *word_ptr = output_word;
  output_buffer[1] = output_buffer[1] + 4;
  
  word_ptr = (int32_t *)output_buffer[1];
  output_word = *(int32_t *)(render_data + 0xb8);
  if ((ulonglong)((output_buffer[2] - (longlong)word_ptr) + *output_buffer) < 5) {
    FUN_180639bf0(output_buffer, (longlong)word_ptr + (4 - *output_buffer));
    word_ptr = (int32_t *)output_buffer[1];
  }
  *word_ptr = output_word;
  output_buffer[1] = output_buffer[1] + 4;
  
  word_ptr = (int32_t *)output_buffer[1];
  output_word = *(int32_t *)(render_data + 0xbc);
  if ((ulonglong)((output_buffer[2] - (longlong)word_ptr) + *output_buffer) < 5) {
    FUN_180639bf0(output_buffer, (longlong)word_ptr + (4 - *output_buffer));
    word_ptr = (int32_t *)output_buffer[1];
  }
  *word_ptr = output_word;
  output_buffer[1] = output_buffer[1] + 4;
  
  word_ptr = (int32_t *)output_buffer[1];
  output_word = *(int32_t *)(render_data + 0xc0);
  if ((ulonglong)((output_buffer[2] - (longlong)word_ptr) + *output_buffer) < 5) {
    FUN_180639bf0(output_buffer, (longlong)word_ptr + (4 - *output_buffer));
    word_ptr = (int32_t *)output_buffer[1];
  }
  *word_ptr = output_word;
  output_buffer[1] = output_buffer[1] + 4;
  
  word_ptr = (int32_t *)output_buffer[1];
  output_word = *(int32_t *)(render_data + 0xc4);
  if ((ulonglong)((output_buffer[2] - (longlong)word_ptr) + *output_buffer) < 5) {
    FUN_180639bf0(output_buffer, (longlong)word_ptr + (4 - *output_buffer));
    word_ptr = (int32_t *)output_buffer[1];
  }
  *word_ptr = output_word;
  output_buffer[1] = output_buffer[1] + 4;
  
  word_ptr = (int32_t *)output_buffer[1];
  output_word = *(int32_t *)(render_data + 200);
  if ((ulonglong)((output_buffer[2] - (longlong)word_ptr) + *output_buffer) < 5) {
    FUN_180639bf0(output_buffer, (longlong)word_ptr + (4 - *output_buffer));
    word_ptr = (int32_t *)output_buffer[1];
  }
  *word_ptr = output_word;
  output_buffer[1] = output_buffer[1] + 4;
  
  word_ptr = (int32_t *)output_buffer[1];
  output_word = *(int32_t *)(render_data + 0xcc);
  if ((ulonglong)((output_buffer[2] - (longlong)word_ptr) + *output_buffer) < 5) {
    FUN_180639bf0(output_buffer, (longlong)word_ptr + (4 - *output_buffer));
    word_ptr = (int32_t *)output_buffer[1];
  }
  *word_ptr = output_word;
  output_buffer[1] = output_buffer[1] + 4;
  
  word_ptr = (int32_t *)output_buffer[1];
  output_word = *(int32_t *)(render_data + 0xd0);
  if ((ulonglong)((output_buffer[2] - (longlong)word_ptr) + *output_buffer) < 5) {
    FUN_180639bf0(output_buffer, (longlong)word_ptr + (4 - *output_buffer));
    word_ptr = (int32_t *)output_buffer[1];
  }
  *word_ptr = output_word;
  output_buffer[1] = output_buffer[1] + 4;
  
  word_ptr = (int32_t *)output_buffer[1];
  output_word = *(int32_t *)(render_data + 0xd4);
  if ((ulonglong)((output_buffer[2] - (longlong)word_ptr) + *output_buffer) < 5) {
    FUN_180639bf0(output_buffer, (longlong)word_ptr + (4 - *output_buffer));
    word_ptr = (int32_t *)output_buffer[1];
  }
  *word_ptr = output_word;
  output_buffer[1] = output_buffer[1] + 4;
  
  // 序列化渲染数据块
  FUN_180639fd0(output_buffer, render_data + 0xd8);
  FUN_180639fd0(output_buffer, render_data + 0xe8);
  FUN_180639ec0(output_buffer, render_data + 0xf8);
  FUN_180639ec0(output_buffer, render_data + 0x150);
  
  // 序列化资源数据
  data_size = *(uint *)(render_data + 0x1b8);
  uint_ptr = (uint *)output_buffer[1];
  buffer_size = (ulonglong)data_size + 4;
  temp_offset = *output_buffer;
  if ((ulonglong)((output_buffer[2] - (longlong)uint_ptr) + temp_offset) <= buffer_size) {
    FUN_180639bf0(output_buffer, (longlong)uint_ptr + (buffer_size - temp_offset), temp_offset, resource_manager2, unaff_RDI);
    uint_ptr = (uint *)output_buffer[1];
  }
  *uint_ptr = data_size;
  temp_offset = output_buffer[1];
  output_buffer[1] = temp_offset + 4;
  data_ptr = &system_buffer_ptr;
  if (*(void **)(render_data + 0x1b0) != (void *)0x0) {
    data_ptr = *(void **)(render_data + 0x1b0);
  }
  memcpy(temp_offset + 4, data_ptr, (ulonglong)data_size);
}

/**
 * 渲染系统资源反序列化函数
 * 原始函数名: FUN_180339680
 * 功能: 从输入缓冲区反序列化渲染系统资源
 * 参数: param_1 - 渲染数据指针，param_2 - 输入缓冲区指针
 * 返回值: 无
 */
void RenderingSystem_DeserializeResources(longlong render_data, longlong input_buffer)
{
  uint data_size;
  longlong temp_offset;
  uint *uint_ptr;
  
  // 初始化反序列化
  FUN_180337990();
  
  // 反序列化渲染参数
  *(int32_t *)(render_data + 0xb0) = **(int32_t **)(input_buffer + 8);
  *(longlong *)(input_buffer + 8) = *(longlong *)(input_buffer + 8) + 4;
  *(int32_t *)(render_data + 0xb4) = **(int32_t **)(input_buffer + 8);
  *(longlong *)(input_buffer + 8) = *(longlong *)(input_buffer + 8) + 4;
  *(int32_t *)(render_data + 0xb8) = **(int32_t **)(input_buffer + 8);
  *(longlong *)(input_buffer + 8) = *(longlong *)(input_buffer + 8) + 4;
  *(int32_t *)(render_data + 0xbc) = **(int32_t **)(input_buffer + 8);
  *(longlong *)(input_buffer + 8) = *(longlong *)(input_buffer + 8) + 4;
  *(int32_t *)(render_data + 0xc0) = **(int32_t **)(input_buffer + 8);
  *(longlong *)(input_buffer + 8) = *(longlong *)(input_buffer + 8) + 4;
  *(int32_t *)(render_data + 0xc4) = **(int32_t **)(input_buffer + 8);
  *(longlong *)(input_buffer + 8) = *(longlong *)(input_buffer + 8) + 4;
  *(int32_t *)(render_data + 200) = **(int32_t **)(input_buffer + 8);
  *(longlong *)(input_buffer + 8) = *(longlong *)(input_buffer + 8) + 4;
  *(int32_t *)(render_data + 0xcc) = **(int32_t **)(input_buffer + 8);
  *(longlong *)(input_buffer + 8) = *(longlong *)(input_buffer + 8) + 4;
  *(int32_t *)(render_data + 0xd0) = **(int32_t **)(input_buffer + 8);
  *(longlong *)(input_buffer + 8) = *(longlong *)(input_buffer + 8) + 4;
  *(int32_t *)(render_data + 0xd4) = **(int32_t **)(input_buffer + 8);
  *(longlong *)(input_buffer + 8) = *(longlong *)(input_buffer + 8) + 4;
  
  // 反序列化渲染数据块
  *(int32_t *)(render_data + 0xd8) = **(int32_t **)(input_buffer + 8);
  *(longlong *)(input_buffer + 8) = *(longlong *)(input_buffer + 8) + 4;
  *(int32_t *)(render_data + 0xdc) = **(int32_t **)(input_buffer + 8);
  *(longlong *)(input_buffer + 8) = *(longlong *)(input_buffer + 8) + 4;
  *(int32_t *)(render_data + 0xe0) = **(int32_t **)(input_buffer + 8);
  *(longlong *)(input_buffer + 8) = *(longlong *)(input_buffer + 8) + 4;
  *(int32_t *)(render_data + 0xe4) = **(int32_t **)(input_buffer + 8);
  *(longlong *)(input_buffer + 8) = *(longlong *)(input_buffer + 8) + 4;
  *(int32_t *)(render_data + 0xe8) = **(int32_t **)(input_buffer + 8);
  *(longlong *)(input_buffer + 8) = *(longlong *)(input_buffer + 8) + 4;
  *(int32_t *)(render_data + 0xec) = **(int32_t **)(input_buffer + 8);
  *(longlong *)(input_buffer + 8) = *(longlong *)(input_buffer + 8) + 4;
  *(int32_t *)(render_data + 0xf0) = **(int32_t **)(input_buffer + 8);
  *(longlong *)(input_buffer + 8) = *(longlong *)(input_buffer + 8) + 4;
  *(int32_t *)(render_data + 0xf4) = **(int32_t **)(input_buffer + 8);
  temp_offset = *(longlong *)(input_buffer + 8);
  uint_ptr = (uint *)(temp_offset + 4);
  *(uint **)(input_buffer + 8) = uint_ptr;
  data_size = *uint_ptr;
  uint_ptr = (uint *)(temp_offset + 8);
  *(uint **)(input_buffer + 8) = uint_ptr;
  
  // 反序列化资源数据
  if (data_size != 0) {
    (**(code **)(*(longlong *)(render_data + 0xf8) + 0x18))((longlong *)(render_data + 0xf8), uint_ptr, data_size);
    *(longlong *)(input_buffer + 8) = *(longlong *)(input_buffer + 8) + (ulonglong)data_size;
    uint_ptr = *(uint **)(input_buffer + 8);
  }
  
  data_size = *uint_ptr;
  uint_ptr = uint_ptr + 1;
  *(uint **)(input_buffer + 8) = uint_ptr;
  if (data_size != 0) {
    (**(code **)(*(longlong *)(render_data + 0x150) + 0x18))((longlong *)(render_data + 0x150), uint_ptr, data_size);
    *(longlong *)(input_buffer + 8) = *(longlong *)(input_buffer + 8) + (ulonglong)data_size;
    uint_ptr = *(uint **)(input_buffer + 8);
  }
  
  data_size = *uint_ptr;
  *(uint **)(input_buffer + 8) = uint_ptr + 1;
  if (data_size != 0) {
    (**(code **)(*(longlong *)(render_data + 0x1a8) + 0x18))
              ((longlong *)(render_data + 0x1a8), uint_ptr + 1, data_size);
    *(longlong *)(input_buffer + 8) = *(longlong *)(input_buffer + 8) + (ulonglong)data_size;
  }
  return;
}

// 函数别名定义 - 保持向后兼容性
#define FUN_1803387a0 RenderingSystem_AdvancedSerializeData
#define FUN_180338e10 RenderingSystem_SerializeOutput
#define FUN_180338f90 RenderingSystem_DeserializeInput
#define FUN_180339080 RenderingSystem_InitializeResourceManager
#define FUN_180339110 RenderingSystem_CreateResourceManager
#define FUN_1803391e0 RenderingSystem_CompareData
#define FUN_18033931a RenderingSystem_CompareResources
#define FUN_180339388 RenderingSystem_EmptyFunction
#define FUN_1803393b0 RenderingSystem_SerializeResources
#define FUN_180339680 RenderingSystem_DeserializeResources