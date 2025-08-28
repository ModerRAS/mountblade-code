#include "TaleWorlds.Native.Split.h"

// 03_rendering_part011.c - 渲染系统相关函数
// 本文件包含3个函数，主要用于处理渲染相关的数据结构和初始化

/**
 * 初始化渲染对象
 * 从数据流中读取渲染对象的信息并进行初始化
 * 
 * @param render_obj_ptr 渲染对象指针
 * @param data_stream_ptr 数据流指针
 */
void initialize_render_object(longlong render_obj_ptr, longlong data_stream_ptr)
{
  byte *buffer_ptr;
  uint count;
  int *int_ptr;
  undefined *undef_ptr;
  int int_val1;
  int int_val2;
  int int_val3;
  int int_val4;
  int int_val5;
  undefined8 undef_val1;
  longlong long_val1;
  byte *byte_ptr;
  uint *uint_ptr;
  undefined4 *undef4_ptr;
  undefined8 *undef8_ptr;
  int int_val6;
  ulonglong ulong_val1;
  undefined8 *undef8_ptr2;
  undefined8 *undef8_ptr3;
  uint uint_val1;
  longlong long_val2;
  ulonglong ulong_val2;
  undefined8 *undef8_ptr4;
  undefined *undef_ptr2;
  longlong *long_ptr;
  ulonglong ulong_val3;
  undefined1 stack_buffer1[32];
  uint stack_uint1;
  ulonglong stack_ulong1;
  undefined8 *stack_undef8_ptr1;
  longlong stack_long1;
  longlong stack_long2;
  undefined8 stack_undef8_val1;
  undefined *stack_undef_ptr1;
  undefined1 *stack_undef1_ptr1;
  undefined4 stack_undef4_val1;
  undefined1 stack_buffer2[72];
  undefined *stack_undef_ptr2;
  byte *stack_byte_ptr1;
  int stack_int1;
  byte stack_buffer3[1032];
  undefined *stack_undef_ptr3;
  byte *stack_byte_ptr2;
  int stack_int2;
  byte stack_buffer4[1032];
  ulonglong stack_ulong2;
  
  // 初始化栈变量
  stack_undef8_val1 = 0xfffffffffffffffe;
  stack_ulong2 = RENDER_DATA_OFFSET ^ (ulonglong)stack_buffer1;
  
  // 读取渲染对象类型数量
  uint_val1 = **(uint **)(data_stream_ptr + 8);
  *(uint **)(data_stream_ptr + 8) = *(uint **)(data_stream_ptr + 8) + 1;
  stack_uint1 = uint_val1;
  stack_long1 = data_stream_ptr;
  stack_long2 = render_obj_ptr;
  
  // 处理渲染对象类型
  process_render_type(&RENDER_TYPE_TABLE, data_stream_ptr, render_obj_ptr);
  *(longlong *)(data_stream_ptr + 8) = *(longlong *)(data_stream_ptr + 8) + 4;
  
  // 初始化渲染标志
  ulong_val1 = 0;
  *(undefined4 *)(render_obj_ptr + 4) = 0;
  
  // 读取材质类型数量
  uint_val1 = **(uint **)(data_stream_ptr + 8);
  *(uint **)(data_stream_ptr + 8) = *(uint **)(data_stream_ptr + 8) + 1;
  
  if (uint_val1 != 0) {
    ulong_val2 = (ulonglong)uint_val1;
    do {
      // 处理每个材质类型
      stack_undef_ptr3 = &RENDER_MATERIAL_BASE;
      stack_byte_ptr2 = stack_buffer4;
      stack_int2 = 0;
      stack_buffer4[0] = 0;
      
      // 读取材质名称
      uint_val1 = **(uint **)(data_stream_ptr + 8);
      uint_ptr = *(uint **)(data_stream_ptr + 8) + 1;
      *(uint **)(data_stream_ptr + 8) = uint_ptr;
      
      if (uint_val1 != 0) {
        read_string_data(&stack_undef_ptr3, uint_ptr, uint_val1);
        *(longlong *)(data_stream_ptr + 8) = *(longlong *)(data_stream_ptr + 8) + (ulonglong)uint_val1;
      }
      
      // 在材质表中查找匹配的材质
      long_ptr = (longlong *)&MATERIAL_LOOKUP_TABLE;
      ulong_val3 = ulong_val1;
      do {
        long_val1 = -1;
        do {
          long_val1 = long_val1 + 1;
        } while (*(char *)(*long_ptr + long_val1) != '\0');
        
        int_val6 = (int)long_val1;
        if (stack_int2 == int_val6) {
          if (stack_int2 != 0) {
            byte_ptr = stack_byte_ptr2;
            do {
              buffer_ptr = byte_ptr + (*long_ptr - (longlong)stack_byte_ptr2);
              int_val6 = (uint)*byte_ptr - (uint)*buffer_ptr;
              if (int_val6 != 0) break;
              byte_ptr = byte_ptr + 1;
            } while (*buffer_ptr != 0);
          }
MATERIAL_FOUND:
          if (int_val6 == 0) {
            // 设置材质标志
            *(uint *)(render_obj_ptr + 4) = 
                 *(uint *)(render_obj_ptr + 4) | *(uint *)(&MATERIAL_FLAG_TABLE + ulong_val3 * 0x10);
            break;
          }
        }
        else if (stack_int2 == 0) goto MATERIAL_FOUND;
        
        ulong_val3 = ulong_val3 + 1;
        long_ptr = long_ptr + 2;
      } while ((longlong)long_ptr < 0x18098e220);
      
      stack_undef_ptr3 = &RENDER_MATERIAL_BASE;
      ulong_val2 = ulong_val2 - 1;
      uint_val1 = stack_uint1;
    } while (ulong_val2 != 0);
  }
  
  // 处理渲染器类型
  stack_undef_ptr2 = &RENDER_MATERIAL_BASE;
  stack_byte_ptr1 = stack_buffer3;
  stack_int1 = 0;
  stack_buffer3[0] = 0;
  
  uint_val1 = **(uint **)(data_stream_ptr + 8);
  uint_ptr = *(uint **)(data_stream_ptr + 8) + 1;
  *(uint **)(data_stream_ptr + 8) = uint_ptr;
  
  if (uint_val1 != 0) {
    read_string_data(&stack_undef_ptr2, uint_ptr, uint_val1);
    *(longlong *)(data_stream_ptr + 8) = *(longlong *)(data_stream_ptr + 8) + (ulonglong)uint_val1;
  }
  
  // 在渲染器表中查找匹配的渲染器
  long_ptr = (longlong *)0x180bf8ff0;
  do {
    long_val1 = -1;
    do {
      long_val1 = long_val1 + 1;
    } while (*(char *)(*long_ptr + long_val1) != '\0');
    
    int_val6 = (int)long_val1;
    if (stack_int1 == int_val6) {
      if (stack_int1 != 0) {
        byte_ptr = stack_byte_ptr1;
        do {
          buffer_ptr = byte_ptr + (*long_ptr - (longlong)stack_byte_ptr1);
          int_val6 = (uint)*byte_ptr - (uint)*buffer_ptr;
          if (int_val6 != 0) break;
          byte_ptr = byte_ptr + 1;
        } while (*buffer_ptr != 0);
      }
RENDERER_FOUND:
      if (int_val6 == 0) {
        // 设置渲染器类型
        *(undefined1 *)(render_obj_ptr + 0x11c) = 
             *(undefined1 *)((longlong)(int)ulong_val1 * 0x10 + 0x180bf8ff8);
        break;
      }
    }
    else if (stack_int1 == 0) goto RENDERER_FOUND;
    
    ulong_val1 = (ulonglong)((int)ulong_val1 + 1);
    long_ptr = long_ptr + 2;
  } while ((longlong)long_ptr < 0x180bf90b0);
  
  stack_undef_ptr2 = &RENDER_MATERIAL_BASE;
  
  // 读取渲染对象的基本属性
  undef_val1 = (*(undefined8 **)(data_stream_ptr + 8))[1];
  *(undefined8 *)(render_obj_ptr + 8) = **(undefined8 **)(data_stream_ptr + 8);
  *(undefined8 *)(render_obj_ptr + 0x10) = undef_val1;
  
  long_val1 = *(longlong *)(data_stream_ptr + 8);
  uint_ptr = (uint *)(long_val1 + 0x10);
  *(uint **)(data_stream_ptr + 8) = uint_ptr;
  uint_val1 = *uint_ptr;
  *(longlong *)(data_stream_ptr + 8) = long_val1 + 0x14;
  
  // 初始化渲染对象的各个字段为0
  *(undefined8 *)(render_obj_ptr + 0x18) = 0;
  *(undefined8 *)(render_obj_ptr + 0x20) = 0;
  *(undefined8 *)(render_obj_ptr + 0x28) = 0;
  *(undefined8 *)(render_obj_ptr + 0x30) = 0;
  *(undefined8 *)(render_obj_ptr + 0x38) = 0;
  *(undefined8 *)(render_obj_ptr + 0x40) = 0;
  *(undefined8 *)(render_obj_ptr + 0x48) = 0;
  *(undefined8 *)(render_obj_ptr + 0x50) = 0;
  *(undefined8 *)(render_obj_ptr + 0x58) = 0;
  *(undefined8 *)(render_obj_ptr + 0x60) = 0;
  *(undefined8 *)(render_obj_ptr + 0x68) = 0;
  *(undefined8 *)(render_obj_ptr + 0x70) = 0;
  *(undefined8 *)(render_obj_ptr + 0x78) = 0;
  *(undefined8 *)(render_obj_ptr + 0x80) = 0;
  *(undefined8 *)(render_obj_ptr + 0x88) = 0;
  *(undefined8 *)(render_obj_ptr + 0x90) = 0;
  *(undefined8 *)(render_obj_ptr + 0x98) = 0;
  *(undefined8 *)(render_obj_ptr + 0xa0) = 0;
  *(undefined8 *)(render_obj_ptr + 0xa8) = 0;
  *(undefined8 *)(render_obj_ptr + 0xb0) = 0;
  *(undefined8 *)(render_obj_ptr + 0xb8) = 0;
  *(undefined8 *)(render_obj_ptr + 0xc0) = 0;
  *(undefined8 *)(render_obj_ptr + 200) = 0;
  *(undefined8 *)(render_obj_ptr + 0xd0) = 0;
  *(undefined8 *)(render_obj_ptr + 0xd8) = 0;
  *(undefined8 *)(render_obj_ptr + 0xe0) = 0;
  *(undefined8 *)(render_obj_ptr + 0xe8) = 0;
  *(undefined8 *)(render_obj_ptr + 0xf0) = 0;
  *(undefined4 *)(render_obj_ptr + 0xf8) = 0;
  *(undefined4 *)(render_obj_ptr + 0xfc) = 0;
  *(undefined4 *)(render_obj_ptr + 0x100) = 0;
  *(undefined4 *)(render_obj_ptr + 0x104) = 0;
  *(undefined8 *)(render_obj_ptr + 0x108) = 0;
  *(undefined8 *)(render_obj_ptr + 0x110) = 0;
  
  undef4_ptr = *(undefined4 **)(data_stream_ptr + 8);
  if (0 < (int)uint_val1) {
    ulong_val2 = (ulonglong)uint_val1;
    do {
      // 处理渲染对象的属性数组
      int_ptr = *(int **)(data_stream_ptr + 8);
      int_val6 = *int_ptr;
      *(int **)(data_stream_ptr + 8) = int_ptr + 1;
      int_val1 = int_ptr[1];
      int_val2 = int_ptr[2];
      int_val3 = int_ptr[3];
      int_val4 = int_ptr[4];
      *(int **)(data_stream_ptr + 8) = int_ptr + 5;
      
      int_ptr = (int *)(render_obj_ptr + 0x18 + (longlong)int_val6 * 0x10);
      *int_ptr = int_val1;
      int_ptr[1] = int_val2;
      int_ptr[2] = int_val3;
      int_ptr[3] = int_val4;
      
      ulong_val2 = ulong_val2 - 1;
    } while (ulong_val2 != 0);
    undef4_ptr = *(undefined4 **)(data_stream_ptr + 8);
  }
  
  *(undefined4 *)(render_obj_ptr + 0x118) = *undef4_ptr;
  long_val1 = *(longlong *)(data_stream_ptr + 8);
  uint_ptr = (uint *)(long_val1 + 4);
  *(uint **)(data_stream_ptr + 8) = uint_ptr;
  uint_val1 = *uint_ptr;
  undef4_ptr = (undefined4 *)(long_val1 + 8);
  *(undefined4 **)(data_stream_ptr + 8) = undef4_ptr;
  ulong_val2 = (ulonglong)uint_val1;
  
  if (0 < (int)uint_val1) {
    do {
      // 处理纹理数据
      stack_ulong1 = ulong_val2;
      stack_undef_ptr1 = &RENDER_TEXTURE_BASE;
      stack_undef1_ptr1 = stack_buffer2;
      stack_undef4_val1 = 0;
      stack_buffer2[0] = 0;
      
      uint_val1 = **(uint **)(data_stream_ptr + 8);
      *(uint **)(data_stream_ptr + 8) = *(uint **)(data_stream_ptr + 8) + 1;
      
      if (uint_val1 != 0) {
        process_texture_data(&stack_undef_ptr1);
        *(longlong *)(data_stream_ptr + 8) = *(longlong *)(data_stream_ptr + 8) + (ulonglong)uint_val1;
      }
      
      undef8_ptr = (undefined8 *)0x0;
      undef8_ptr2 = *(undefined8 **)(render_obj_ptr + 0x128);
      
      if (undef8_ptr2 < *(undefined8 **)(render_obj_ptr + 0x130)) {
        // 有足够的空间，直接添加纹理
        *(undefined8 **)(render_obj_ptr + 0x128) = undef8_ptr2 + 0xb;
        *undef8_ptr2 = &RENDER_MATERIAL_BASE;
        undef8_ptr2[1] = 0;
        *(undefined4 *)(undef8_ptr2 + 2) = 0;
        *undef8_ptr2 = &RENDER_TEXTURE_BASE;
        undef8_ptr2[1] = undef8_ptr2 + 3;
        *(undefined4 *)(undef8_ptr2 + 2) = 0;
        *(undefined1 *)(undef8_ptr2 + 3) = 0;
        *(undefined4 *)(undef8_ptr2 + 2) = stack_undef4_val1;
        stack_undef8_ptr1 = undef8_ptr2;
        copy_texture_name(undef8_ptr2[1], 0x40);
      }
      else {
        // 空间不足，需要重新分配内存
        undef8_ptr3 = *(undefined8 **)(render_obj_ptr + 0x120);
        long_val1 = ((longlong)undef8_ptr2 - (longlong)undef8_ptr3) / 0x58;
        
        if (long_val1 == 0) {
          long_val1 = 1;
ALLOCATE_MEMORY:
          undef8_ptr = (undefined8 *)allocate_texture_memory(RENDER_MEMORY_POOL, long_val1 * 0x58);
          undef8_ptr2 = *(undefined8 **)(render_obj_ptr + 0x128);
          undef8_ptr3 = *(undefined8 **)(render_obj_ptr + 0x120);
        }
        else {
          long_val1 = long_val1 * 2;
          if (long_val1 != 0) goto ALLOCATE_MEMORY;
        }
        
        undef8_ptr4 = undef8_ptr;
        if (undef8_ptr3 != undef8_ptr2) {
          // 复制现有纹理数据到新内存
          long_val2 = (longlong)undef8_ptr3 - (longlong)undef8_ptr;
          do {
            *undef8_ptr4 = &RENDER_MATERIAL_BASE;
            undef8_ptr4[1] = 0;
            *(undefined4 *)(undef8_ptr4 + 2) = 0;
            *undef8_ptr4 = &RENDER_TEXTURE_BASE;
            undef8_ptr4[1] = undef8_ptr4 + 3;
            *(undefined4 *)(undef8_ptr4 + 2) = 0;
            *(undefined1 *)(undef8_ptr4 + 3) = 0;
            *(undefined4 *)(undef8_ptr4 + 2) = *(undefined4 *)(long_val2 + 0x10 + (longlong)undef8_ptr4);
            undef_ptr = *(undefined **)(long_val2 + 8 + (longlong)undef8_ptr4);
            undef_ptr2 = &DEFAULT_TEXTURE_NAME;
            if (undef_ptr != (undefined *)0x0) {
              undef_ptr2 = undef_ptr;
            }
            stack_undef8_ptr1 = undef8_ptr4;
            copy_texture_name(undef8_ptr4[1], 0x40, undef_ptr2);
            undef8_ptr4 = undef8_ptr4 + 0xb;
            data_stream_ptr = stack_long1;
            render_obj_ptr = stack_long2;
          } while ((undefined8 *)(long_val2 + (longlong)undef8_ptr4) != undef8_ptr2);
        }
        
        // 添加新纹理
        *undef8_ptr4 = &RENDER_MATERIAL_BASE;
        undef8_ptr4[1] = 0;
        *(undefined4 *)(undef8_ptr4 + 2) = 0;
        *undef8_ptr4 = &RENDER_TEXTURE_BASE;
        undef8_ptr4[1] = undef8_ptr4 + 3;
        *(undefined4 *)(undef8_ptr4 + 2) = 0;
        *(undefined1 *)(undef8_ptr4 + 3) = 0;
        *(undefined4 *)(undef8_ptr4 + 2) = stack_undef4_val1;
        stack_undef8_ptr1 = undef8_ptr4;
        copy_texture_name(undef8_ptr4[1], 0x40);
        undef8_ptr2 = *(undefined8 **)(render_obj_ptr + 0x128);
        undef8_ptr3 = *(undefined8 **)(render_obj_ptr + 0x120);
        
        if (undef8_ptr3 != undef8_ptr2) {
          // 释放旧的纹理内存
          do {
            (**(code **)*undef8_ptr3)(undef8_ptr3, 0);
            undef8_ptr3 = undef8_ptr3 + 0xb;
          } while (undef8_ptr3 != undef8_ptr2);
          undef8_ptr3 = *(undefined8 **)(render_obj_ptr + 0x120);
        }
        
        if (undef8_ptr3 != (undefined8 *)0x0) {
          // 释放纹理内存池
          free_texture_memory(undef8_ptr3);
        }
        
        *(undefined8 **)(render_obj_ptr + 0x120) = undef8_ptr;
        *(undefined8 **)(render_obj_ptr + 0x128) = undef8_ptr4 + 0xb;
        *(undefined8 **)(render_obj_ptr + 0x130) = undef8_ptr + long_val1 * 0xb;
      }
      
      stack_undef_ptr1 = &RENDER_MATERIAL_BASE;
      ulong_val2 = stack_ulong1 - 1;
    } while (stack_ulong1 - 1 != 0);
    
    undef4_ptr = *(undefined4 **)(data_stream_ptr + 8);
    stack_ulong1 = 0;
    uint_val1 = stack_uint1;
  }
  
  // 继续处理渲染对象的其他属性...
  *(undefined4 *)(render_obj_ptr + 0x140) = *undef4_ptr;
  undef4_ptr = (undefined4 *)(*(longlong *)(data_stream_ptr + 8) + 4);
  *(undefined4 **)(data_stream_ptr + 8) = undef4_ptr;
  *(undefined4 *)(render_obj_ptr + 0x144) = *undef4_ptr;
  undef4_ptr = (undefined4 *)(*(longlong *)(data_stream_ptr + 8) + 4);
  *(undefined4 **)(data_stream_ptr + 8) = undef4_ptr;
  *(undefined4 *)(render_obj_ptr + 0x148) = *undef4_ptr;
  undef4_ptr = (undefined4 *)(*(longlong *)(data_stream_ptr + 8) + 4);
  *(undefined4 **)(data_stream_ptr + 8) = undef4_ptr;
  *(undefined4 *)(render_obj_ptr + 0x14c) = *undef4_ptr;
  
  long_val1 = *(longlong *)(data_stream_ptr + 8);
  *(undefined4 *)(render_obj_ptr + 0x150) = *(undefined4 *)(long_val1 + 4);
  *(undefined4 *)(render_obj_ptr + 0x154) = *(undefined4 *)(long_val1 + 8);
  *(undefined4 *)(render_obj_ptr + 0x158) = *(undefined4 *)(long_val1 + 0xc);
  *(undefined4 *)(render_obj_ptr + 0x15c) = *(undefined4 *)(long_val1 + 0x10);
  *(undefined4 *)(render_obj_ptr + 0x160) = *(undefined4 *)(long_val1 + 0x14);
  *(undefined4 *)(render_obj_ptr + 0x164) = *(undefined4 *)(long_val1 + 0x18);
  *(undefined4 *)(render_obj_ptr + 0x168) = *(undefined4 *)(long_val1 + 0x1c);
  *(undefined4 *)(render_obj_ptr + 0x16c) = *(undefined4 *)(long_val1 + 0x20);
  *(undefined4 *)(render_obj_ptr + 0x170) = *(undefined4 *)(long_val1 + 0x24);
  *(undefined4 *)(render_obj_ptr + 0x174) = *(undefined4 *)(long_val1 + 0x28);
  *(undefined4 *)(render_obj_ptr + 0x178) = *(undefined4 *)(long_val1 + 0x2c);
  *(undefined4 *)(render_obj_ptr + 0x17c) = *(undefined4 *)(long_val1 + 0x30);
  *(undefined4 *)(render_obj_ptr + 0x180) = *(undefined4 *)(long_val1 + 0x34);
  *(undefined4 *)(render_obj_ptr + 0x184) = *(undefined4 *)(long_val1 + 0x38);
  *(undefined4 *)(render_obj_ptr + 0x188) = *(undefined4 *)(long_val1 + 0x3c);
  *(undefined4 *)(render_obj_ptr + 0x18c) = *(undefined4 *)(long_val1 + 0x40);
  *(undefined4 **)(data_stream_ptr + 8) = (undefined4 *)(long_val1 + 0x44);
  *(undefined4 *)(render_obj_ptr + 400) = *(undefined4 *)(long_val1 + 0x44);
  
  undef4_ptr = (undefined4 *)(*(longlong *)(data_stream_ptr + 8) + 4);
  *(undefined4 **)(data_stream_ptr + 8) = undef4_ptr;
  *(undefined4 *)(render_obj_ptr + 0x194) = *undef4_ptr;
  undef4_ptr = (undefined4 *)(*(longlong *)(data_stream_ptr + 8) + 4);
  *(undefined4 **)(data_stream_ptr + 8) = undef4_ptr;
  *(undefined4 *)(render_obj_ptr + 0x198) = *undef4_ptr;
  undef4_ptr = (undefined4 *)(*(longlong *)(data_stream_ptr + 8) + 4);
  *(undefined4 **)(data_stream_ptr + 8) = undef4_ptr;
  *(undefined4 *)(render_obj_ptr + 0x19c) = *undef4_ptr;
  undef4_ptr = (undefined4 *)(*(longlong *)(data_stream_ptr + 8) + 4);
  *(undefined4 **)(data_stream_ptr + 8) = undef4_ptr;
  *(undefined4 *)(render_obj_ptr + 0x1a0) = *undef4_ptr;
  undef4_ptr = (undefined4 *)(*(longlong *)(data_stream_ptr + 8) + 4);
  *(undefined4 **)(data_stream_ptr + 8) = undef4_ptr;
  
  if (uint_val1 != 0) {
    *(undefined4 *)(render_obj_ptr + 0x1a4) = *undef4_ptr;
    *(longlong *)(data_stream_ptr + 8) = *(longlong *)(data_stream_ptr + 8) + 4;
    undef4_ptr = *(undefined4 **)(data_stream_ptr + 8);
  }
  
  *(undefined4 *)(render_obj_ptr + 0x1a8) = *undef4_ptr;
  undef4_ptr = (undefined4 *)(*(longlong *)(data_stream_ptr + 8) + 4);
  *(undefined4 **)(data_stream_ptr + 8) = undef4_ptr;
  
  if (1 < uint_val1) {
    *(undefined4 *)(render_obj_ptr + 0x1ac) = *undef4_ptr;
    *(longlong *)(data_stream_ptr + 8) = *(longlong *)(data_stream_ptr + 8) + 4;
  }
  
  // 清理栈数据并返回
  cleanup_stack_data(stack_ulong2 ^ (ulonglong)stack_buffer1);
}

/**
 * 序列化渲染对象数据
 * 将渲染对象的数据序列化到输出流中
 * 
 * @param render_data 渲染数据指针
 * @param output_stream 输出流指针
 */
void serialize_render_object(undefined4 *render_data, longlong *output_stream)
{
  int int_val1;
  undefined4 undef4_val1;
  undefined4 undef4_val2;
  undefined4 undef4_val3;
  char *char_ptr;
  longlong *long_ptr;
  longlong long_val1;
  ulonglong ulong_val1;
  longlong long_val2;
  int *int_ptr;
  uint uint_val1;
  ulonglong ulong_val2;
  undefined8 *undef8_ptr;
  longlong *long_ptr2;
  undefined4 *undef4_ptr;
  ulonglong ulong_val3;
  
  undef4_ptr = (undefined4 *)output_stream[1];
  
  // 检查输出流是否有足够的空间
  if ((ulonglong)((*output_stream - (longlong)undef4_ptr) + output_stream[2]) < 5) {
    expand_output_stream(output_stream, (longlong)undef4_ptr + (4 - *output_stream));
    undef4_ptr = (undefined4 *)output_stream[1];
  }
  
  // 写入序列化类型标识
  *undef4_ptr = 2;
  output_stream[1] = output_stream[1] + 4;
  
  // 序列化渲染对象类型
  serialize_render_type(&RENDER_TYPE_TABLE, *render_data, output_stream);
  
  undef4_ptr = (undefined4 *)output_stream[1];
  uint_val1 = render_data[1];
  
  // 检查输出流空间
  if ((ulonglong)((*output_stream - (longlong)undef4_ptr) + output_stream[2]) < 5) {
    expand_output_stream(output_stream, (longlong)undef4_ptr + (4 - *output_stream));
    undef4_ptr = (undefined4 *)output_stream[1];
  }
  
  ulong_val3 = 0;
  *undef4_ptr = 0;
  long_val2 = *output_stream;
  long_val1 = output_stream[1] + 4;
  output_stream[1] = long_val1;
  ulong_val1 = ulong_val3;
  
  if (long_val2 != 0) {
    ulong_val1 = long_val1 - long_val2;
  }
  
  // 检查并扩展输出流
  if ((ulonglong)((long_val2 - long_val1) + output_stream[2]) < 5) {
    expand_output_stream(output_stream, (long_val1 - long_val2) + 4);
    long_val1 = output_stream[1];
  }
  
  output_stream[1] = long_val1 + 4;
  undef8_ptr = (undefined8 *)&MATERIAL_FLAG_TABLE;
  ulong_val2 = ulong_val3;
  
  // 序列化材质标志
  do {
    if ((*(uint *)(undef8_ptr + 1) & uint_val1) != 0) {
      serialize_material_flag(output_stream, *undef8_ptr);
      ulong_val2 = (ulonglong)((int)ulong_val2 + 1);
    }
    undef8_ptr = undef8_ptr + 2;
  } while ((longlong)undef8_ptr < 0x18098e220);
  
  *(int *)(ulong_val1 + *output_stream) = (int)ulong_val2;
  
  // 序列化渲染器类型
  char_ptr = (char *)0x180bf8ff8;
  ulong_val1 = ulong_val3;
  do {
    if (*char_ptr == *(char *)(render_data + 0x47)) {
      serialize_renderer_type(output_stream, *(undefined8 *)((longlong)(int)ulong_val1 * 0x10 + 0x180bf8ff0));
      break;
    }
    ulong_val1 = (ulonglong)((int)ulong_val1 + 1);
    char_ptr = char_ptr + 0x10;
  } while ((longlong)char_ptr < 0x180bf90b8);
  
  undef4_ptr = (undefined4 *)output_stream[1];
  if ((ulonglong)((*output_stream - (longlong)undef4_ptr) + output_stream[2]) < 0x11) {
    expand_output_stream(output_stream, (longlong)undef4_ptr + (0x10 - *output_stream));
    undef4_ptr = (undefined4 *)output_stream[1];
  }
  
  // 序列化基本属性
  undef4_val1 = render_data[3];
  undef4_val2 = render_data[4];
  undef4_val3 = render_data[5];
  long_ptr2 = (longlong *)(render_data + 6);
  
  *undef4_ptr = render_data[2];
  undef4_ptr[1] = undef4_val1;
  undef4_ptr[2] = undef4_val2;
  undef4_ptr[3] = undef4_val3;
  output_stream[1] = output_stream[1] + 0x10;
  
  long_val2 = 0x10;
  undef4_ptr = (undefined4 *)output_stream[1];
  long_ptr = long_ptr2;
  ulong_val1 = ulong_val3;
  
  // 计算非零属性的数量
  do {
    if ((*long_ptr != 0) || (long_ptr[1] != 0)) {
      ulong_val1 = (ulonglong)((int)ulong_val1 + 1);
    }
    long_ptr = long_ptr + 2;
    long_val2 = long_val2 + -1;
  } while (long_val2 != 0);
  
  if ((ulonglong)((*output_stream - (longlong)undef4_ptr) + output_stream[2]) < 5) {
    expand_output_stream(output_stream, (longlong)undef4_ptr + (4 - *output_stream));
    undef4_ptr = (undefined4 *)output_stream[1];
  }
  
  *undef4_ptr = (int)ulong_val1;
  output_stream[1] = output_stream[1] + 4;
  ulong_val1 = ulong_val3;
  long_ptr = long_ptr2;
  
  // 序列化非零属性
  do {
    int_ptr = (int *)output_stream[1];
    if ((*long_ptr2 != 0) || (long_ptr2[1] != 0)) {
      if ((ulonglong)((*output_stream - (longlong)int_ptr) + output_stream[2]) < 5) {
        expand_output_stream(output_stream, (longlong)int_ptr + (4 - *output_stream));
        int_ptr = (int *)output_stream[1];
      }
      *int_ptr = (int)ulong_val1;
      output_stream[1] = output_stream[1] + 4;
      undef4_ptr = (undefined4 *)output_stream[1];
      if ((ulonglong)((*output_stream - (longlong)undef4_ptr) + output_stream[2]) < 0x11) {
        expand_output_stream(output_stream, (longlong)undef4_ptr + (0x10 - *output_stream));
        undef4_ptr = (undefined4 *)output_stream[1];
      }
      undef4_val1 = *(undefined4 *)((longlong)long_ptr + 4);
      long_val2 = long_ptr[1];
      undef4_val2 = *(undefined4 *)((longlong)long_ptr + 0xc);
      *undef4_ptr = (int)*long_ptr;
      undef4_ptr[1] = undef4_val1;
      undef4_ptr[2] = (int)long_val2;
      undef4_ptr[3] = undef4_val2;
      output_stream[1] = output_stream[1] + 0x10;
      int_ptr = (int *)output_stream[1];
    }
    uint_val1 = (int)ulong_val1 + 1;
    ulong_val1 = (ulonglong)uint_val1;
    long_ptr2 = long_ptr2 + 2;
    long_ptr = long_ptr + 2;
  } while ((int)uint_val1 < 0x10);
  
  // 继续序列化其他属性...
  int_val1 = render_data[0x46];
  if ((ulonglong)((*output_stream - (longlong)int_ptr) + output_stream[2]) < 5) {
    expand_output_stream(output_stream, (longlong)int_ptr + (4 - *output_stream));
    int_ptr = (int *)output_stream[1];
  }
  *int_ptr = int_val1;
  undef4_ptr = (undefined4 *)(output_stream[1] + 4);
  output_stream[1] = (longlong)undef4_ptr;
  
  long_val2 = *(longlong *)(render_data + 0x4a);
  long_val1 = *(longlong *)(render_data + 0x48);
  if ((ulonglong)((*output_stream - (longlong)undef4_ptr) + output_stream[2]) < 5) {
    expand_output_stream(output_stream, (longlong)undef4_ptr + (4 - *output_stream));
    undef4_ptr = (undefined4 *)output_stream[1];
  }
  
  *undef4_ptr = (int)((long_val2 - long_val1) / 0x58);
  output_stream[1] = output_stream[1] + 4;
  undef4_ptr = (undefined4 *)output_stream[1];
  
  long_val2 = *(longlong *)(render_data + 0x4a) - *(longlong *)(render_data + 0x48) >> 0x3f;
  ulong_val1 = ulong_val3;
  
  if ((*(longlong *)(render_data + 0x4a) - *(longlong *)(render_data + 0x48)) / 0x58 + long_val2 != long_val2) {
    // 序列化纹理数据
    do {
      serialize_texture_data(output_stream, ulong_val3 * 0x58 + *(longlong *)(render_data + 0x48));
      uint_val1 = (int)ulong_val1 + 1;
      ulong_val3 = (ulonglong)(int)uint_val1;
      ulong_val1 = (ulonglong)uint_val1;
    } while (ulong_val3 < (ulonglong)
                    ((*(longlong *)(render_data + 0x4a) - *(longlong *)(render_data + 0x48)) / 0x58));
    undef4_ptr = (undefined4 *)output_stream[1];
  }
  
  // 序列化各种渲染属性
  undef4_val1 = render_data[0x50];
  if ((ulonglong)((*output_stream - (longlong)undef4_ptr) + output_stream[2]) < 5) {
    expand_output_stream(output_stream, (longlong)undef4_ptr + (4 - *output_stream));
    undef4_ptr = (undefined4 *)output_stream[1];
  }
  *undef4_ptr = undef4_val1;
  undef4_ptr = (undefined4 *)(output_stream[1] + 4);
  output_stream[1] = (longlong)undef4_ptr;
  
  undef4_val1 = render_data[0x51];
  if ((ulonglong)((*output_stream - (longlong)undef4_ptr) + output_stream[2]) < 5) {
    expand_output_stream(output_stream, (longlong)undef4_ptr + (4 - *output_stream));
    undef4_ptr = (undefined4 *)output_stream[1];
  }
  *undef4_ptr = undef4_val1;
  undef4_ptr = (undefined4 *)(output_stream[1] + 4);
  output_stream[1] = (longlong)undef4_ptr;
  
  undef4_val1 = render_data[0x52];
  if ((ulonglong)((*output_stream - (longlong)undef4_ptr) + output_stream[2]) < 5) {
    expand_output_stream(output_stream, (longlong)undef4_ptr + (4 - *output_stream));
    undef4_ptr = (undefined4 *)output_stream[1];
  }
  *undef4_ptr = undef4_val1;
  undef4_ptr = (undefined4 *)(output_stream[1] + 4);
  output_stream[1] = (longlong)undef4_ptr;
  
  undef4_val1 = render_data[0x53];
  if ((ulonglong)((*output_stream - (longlong)undef4_ptr) + output_stream[2]) < 5) {
    expand_output_stream(output_stream, (longlong)undef4_ptr + (4 - *output_stream));
    undef4_ptr = (undefined4 *)output_stream[1];
  }
  *undef4_ptr = undef4_val1;
  undef4_ptr = (undefined4 *)(output_stream[1] + 4);
  output_stream[1] = (longlong)undef4_ptr;
  
  undef4_val1 = render_data[0x54];
  if ((ulonglong)((*output_stream - (longlong)undef4_ptr) + output_stream[2]) < 0x11) {
    expand_output_stream(output_stream, (longlong)undef4_ptr + (0x10 - *output_stream));
    undef4_ptr = (undefined4 *)output_stream[1];
  }
  *undef4_ptr = undef4_val1;
  long_val2 = output_stream[1];
  output_stream[1] = long_val2 + 4;
  *(undefined4 *)(long_val2 + 4) = render_data[0x55];
  long_val2 = output_stream[1];
  output_stream[1] = long_val2 + 4;
  *(undefined4 *)(long_val2 + 4) = render_data[0x56];
  long_val2 = output_stream[1];
  output_stream[1] = long_val2 + 4;
  *(undefined4 *)(long_val2 + 4) = render_data[0x57];
  undef4_ptr = (undefined4 *)(output_stream[1] + 4);
  output_stream[1] = (longlong)undef4_ptr;
  
  // 继续序列化更多属性...
  undef4_val1 = render_data[0x58];
  if ((ulonglong)((*output_stream - (longlong)undef4_ptr) + output_stream[2]) < 0x11) {
    expand_output_stream(output_stream, (longlong)undef4_ptr + (0x10 - *output_stream));
    undef4_ptr = (undefined4 *)output_stream[1];
  }
  *undef4_ptr = undef4_val1;
  long_val2 = output_stream[1];
  output_stream[1] = long_val2 + 4;
  *(undefined4 *)(long_val2 + 4) = render_data[0x59];
  long_val2 = output_stream[1];
  output_stream[1] = long_val2 + 4;
  *(undefined4 *)(long_val2 + 4) = render_data[0x5a];
  long_val2 = output_stream[1];
  output_stream[1] = long_val2 + 4;
  *(undefined4 *)(long_val2 + 4) = render_data[0x5b];
  undef4_ptr = (undefined4 *)(output_stream[1] + 4);
  output_stream[1] = (longlong)undef4_ptr;
  
  undef4_val1 = render_data[0x5c];
  if ((ulonglong)((*output_stream - (longlong)undef4_ptr) + output_stream[2]) < 0x11) {
    expand_output_stream(output_stream, (longlong)undef4_ptr + (0x10 - *output_stream));
    undef4_ptr = (undefined4 *)output_stream[1];
  }
  *undef4_ptr = undef4_val1;
  long_val2 = output_stream[1];
  output_stream[1] = long_val2 + 4;
  *(undefined4 *)(long_val2 + 4) = render_data[0x5d];
  long_val2 = output_stream[1];
  output_stream[1] = long_val2 + 4;
  *(undefined4 *)(long_val2 + 4) = render_data[0x5e];
  long_val2 = output_stream[1];
  output_stream[1] = long_val2 + 4;
  *(undefined4 *)(long_val2 + 4) = render_data[0x5f];
  undef4_ptr = (undefined4 *)(output_stream[1] + 4);
  output_stream[1] = (longlong)undef4_ptr;
  
  undef4_val1 = render_data[0x60];
  if ((ulonglong)((*output_stream - (longlong)undef4_ptr) + output_stream[2]) < 0x11) {
    expand_output_stream(output_stream, (longlong)undef4_ptr + (0x10 - *output_stream));
    undef4_ptr = (undefined4 *)output_stream[1];
  }
  *undef4_ptr = undef4_val1;
  long_val2 = output_stream[1];
  output_stream[1] = long_val2 + 4;
  *(undefined4 *)(long_val2 + 4) = render_data[0x61];
  long_val2 = output_stream[1];
  output_stream[1] = long_val2 + 4;
  *(undefined4 *)(long_val2 + 4) = render_data[0x62];
  long_val2 = output_stream[1];
  output_stream[1] = long_val2 + 4;
  *(undefined4 *)(long_val2 + 4) = render_data[99];
  undef4_ptr = (undefined4 *)(output_stream[1] + 4);
  output_stream[1] = (longlong)undef4_ptr;
  
  undef4_val1 = render_data[100];
  if ((ulonglong)((*output_stream - (longlong)undef4_ptr) + output_stream[2]) < 5) {
    expand_output_stream(output_stream, (longlong)undef4_ptr + (4 - *output_stream));
    undef4_ptr = (undefined4 *)output_stream[1];
  }
  *undef4_ptr = undef4_val1;
  undef4_ptr = (undefined4 *)(output_stream[1] + 4);
  output_stream[1] = (longlong)undef4_ptr;
  
  undef4_val1 = render_data[0x65];
  if ((ulonglong)((*output_stream - (longlong)undef4_ptr) + output_stream[2]) < 5) {
    expand_output_stream(output_stream, (longlong)undef4_ptr + (4 - *output_stream));
    undef4_ptr = (undefined4 *)output_stream[1];
  }
  *undef4_ptr = undef4_val1;
  undef4_ptr = (undefined4 *)(output_stream[1] + 4);
  output_stream[1] = (longlong)undef4_ptr;
  
  undef4_val1 = render_data[0x66];
  if ((ulonglong)((*output_stream - (longlong)undef4_ptr) + output_stream[2]) < 5) {
    expand_output_stream(output_stream, (longlong)undef4_ptr + (4 - *output_stream));
    undef4_ptr = (undefined4 *)output_stream[1];
  }
  *undef4_ptr = undef4_val1;
  undef4_ptr = (undefined4 *)(output_stream[1] + 4);
  output_stream[1] = (longlong)undef4_ptr;
  
  undef4_val1 = render_data[0x67];
  if ((ulonglong)((*output_stream - (longlong)undef4_ptr) + output_stream[2]) < 5) {
    expand_output_stream(output_stream, (longlong)undef4_ptr + (4 - *output_stream));
    undef4_ptr = (undefined4 *)output_stream[1];
  }
  *undef4_ptr = undef4_val1;
  undef4_ptr = (undefined4 *)(output_stream[1] + 4);
  output_stream[1] = (longlong)undef4_ptr;
  
  undef4_val1 = render_data[0x68];
  if ((ulonglong)((*output_stream - (longlong)undef4_ptr) + output_stream[2]) < 5) {
    expand_output_stream(output_stream, (longlong)undef4_ptr + (4 - *output_stream));
    undef4_ptr = (undefined4 *)output_stream[1];
  }
  *undef4_ptr = undef4_val1;
  undef4_ptr = (undefined4 *)(output_stream[1] + 4);
  output_stream[1] = (longlong)undef4_ptr;
  
  undef4_val1 = render_data[0x69];
  if ((ulonglong)((*output_stream - (longlong)undef4_ptr) + output_stream[2]) < 5) {
    expand_output_stream(output_stream, (longlong)undef4_ptr + (4 - *output_stream));
    undef4_ptr = (undefined4 *)output_stream[1];
  }
  *undef4_ptr = undef4_val1;
  undef4_ptr = (undefined4 *)(output_stream[1] + 4);
  output_stream[1] = (longlong)undef4_ptr;
  
  undef4_val1 = render_data[0x6a];
  if ((ulonglong)((*output_stream - (longlong)undef4_ptr) + output_stream[2]) < 5) {
    expand_output_stream(output_stream, (longlong)undef4_ptr + (4 - *output_stream));
    undef4_ptr = (undefined4 *)output_stream[1];
  }
  *undef4_ptr = undef4_val1;
  undef4_ptr = (undefined4 *)(output_stream[1] + 4);
  output_stream[1] = (longlong)undef4_ptr;
  
  undef4_val1 = render_data[0x6b];
  if ((ulonglong)((*output_stream - (longlong)undef4_ptr) + output_stream[2]) < 5) {
    expand_output_stream(output_stream, (longlong)undef4_ptr + (4 - *output_stream));
    *(undefined4 *)output_stream[1] = undef4_val1;
  }
  else {
    *undef4_ptr = undef4_val1;
  }
  output_stream[1] = output_stream[1] + 4;
  return;
}

/**
 * 初始化渲染对象结构
 * 初始化渲染对象的各个字段为默认值
 * 
 * @param render_obj 渲染对象指针
 * @return 初始化后的渲染对象指针
 */
undefined8 *initialize_render_structure(undefined8 *render_obj)
{
  // 初始化基本字段
  render_obj[0x24] = 0;
  render_obj[0x25] = 0;
  render_obj[0x26] = 0;
  *(undefined4 *)(render_obj + 0x27) = 0x11;
  *render_obj = 0;
  render_obj[1] = 0;
  render_obj[2] = 0;
  *(undefined4 *)(render_obj + 0x23) = 0;
  *(undefined1 *)((longlong)render_obj + 0x11c) = 0;
  render_obj[0x32] = 0;
  
  // 设置默认浮点数值
  *(undefined4 *)(render_obj + 0x28) = 0x3f800000;  // 1.0f
  *(undefined4 *)((longlong)render_obj + 0x144) = 0x3f266666;  // 0.65f
  *(undefined4 *)(render_obj + 0x29) = 0x3f800000;  // 1.0f
  *(undefined4 *)((longlong)render_obj + 0x14c) = 0x3f800000;  // 1.0f
  *(undefined4 *)(render_obj + 0x35) = 0x3f800000;  // 1.0f
  *(undefined4 *)(render_obj + 0x34) = 0;
  *(undefined4 *)((longlong)render_obj + 0x1a4) = 0x3f000000;  // 0.5f
  *(undefined4 *)((longlong)render_obj + 0x1ac) = 0x3f800000;  // 1.0f
  *(undefined4 *)(render_obj + 0x33) = 0x3f800000;  // 1.0f
  *(undefined4 *)((longlong)render_obj + 0x19c) = 0x3f800000;  // 1.0f
  
  // 初始化其他字段
  render_obj[0x2a] = 0;
  render_obj[0x2b] = 0;
  render_obj[0x2c] = 0;
  render_obj[0x2d] = 0;
  render_obj[0x2e] = 0x3f8000003f800000;  // 1.0f, 1.0f
  render_obj[0x2f] = 0x3f8000003f800000;  // 1.0f, 1.0f
  render_obj[0x30] = 0x3f8000003f800000;  // 1.0f, 1.0f
  render_obj[0x31] = 0x3f8000003f800000;  // 1.0f, 1.0f
  
  // 清零大型数组字段
  render_obj[3] = 0;
  render_obj[4] = 0;
  render_obj[5] = 0;
  render_obj[6] = 0;
  render_obj[7] = 0;
  render_obj[8] = 0;
  render_obj[9] = 0;
  render_obj[10] = 0;
  render_obj[0xb] = 0;
  render_obj[0xc] = 0;
  render_obj[0xd] = 0;
  render_obj[0xe] = 0;
  render_obj[0xf] = 0;
  render_obj[0x10] = 0;
  render_obj[0x11] = 0;
  render_obj[0x12] = 0;
  render_obj[0x13] = 0;
  render_obj[0x14] = 0;
  render_obj[0x15] = 0;
  render_obj[0x16] = 0;
  render_obj[0x17] = 0;
  render_obj[0x18] = 0;
  render_obj[0x19] = 0;
  render_obj[0x1a] = 0;
  render_obj[0x1b] = 0;
  render_obj[0x1c] = 0;
  render_obj[0x1d] = 0;
  render_obj[0x1e] = 0;
  render_obj[0x1f] = 0;
  render_obj[0x20] = 0;
  render_obj[0x21] = 0;
  render_obj[0x22] = 0;
  
  return render_obj;
}

// 常量定义
#define RENDER_DATA_OFFSET 0x180bf00a8
#define RENDER_TYPE_TABLE 0x18098e220
#define MATERIAL_LOOKUP_TABLE 0x18098e1c0
#define MATERIAL_FLAG_TABLE 0x18098e1c8
#define RENDER_MATERIAL_BASE 0x18098bb30
#define RENDER_TEXTURE_BASE 0x1809fcc58
#define DEFAULT_TEXTURE_NAME 0x18098bc73
#define RENDER_MEMORY_POOL 0x180c8ed18

// 函数声明（简化实现）
void process_render_type(undefined8 *table, longlong data_stream, longlong render_obj);
void read_string_data(undefined8 **buffer, uint *data, uint size);
void process_texture_data(undefined8 **buffer);
undefined8 *allocate_texture_memory(undefined8 *pool, longlong size);
void free_texture_memory(undefined8 *memory);
void copy_texture_name(undefined8 *dest, uint size, undefined8 *src);
void cleanup_stack_data(ulonglong data);
void serialize_render_type(undefined8 *table, undefined4 render_data, longlong *output_stream);
void serialize_material_flag(longlong *output_stream, undefined8 flag);
void serialize_renderer_type(longlong *output_stream, undefined8 renderer_type);
void expand_output_stream(longlong *stream, longlong size);
void serialize_texture_data(longlong *output_stream, ulonglong offset);