#include "TaleWorlds.Native.Split.h"

// 03_rendering_part049.c - 渲染系统高级图形处理模块 - 29 个函数

// 函数: void FUN_180293190(longlong param_1,undefined8 *param_2,uint param_3,uint param_4)
// 功能: 渲染系统顶点索引缓冲区处理函数
// 参数: param_1 - 渲染上下文指针, param_2 - 顶点数据数组, param_3 - 顶点数量, param_4 - 渲染标志
void RenderingSystem_ProcessVertexIndexBuffer(longlong render_context, undefined8 *vertex_data, uint vertex_count, uint render_flags)

{
  undefined4 render_flag1;
  undefined4 render_flag2;
  undefined8 vertex_data_item;
  longlong vertex_buffer_ptr;
  ulonglong vertex_loop_counter;
  short index_offset;
  int triangle_counter;
  short base_index;
  uint processed_render_flags;
  int index_buffer_size;
  ulonglong stack_protection;
  
  // 栈保护机制初始化
  stack_protection = STACK_PROTECTION_COOKIE ^ (ulonglong)&processed_render_flags;
  vertex_loop_counter = (ulonglong)vertex_count;
  
  // 处理顶点数量大于2的情况
  if (2 < (int)vertex_count) {
    render_flag1 = **(undefined4 **)(render_context + 0x38);
    render_flag2 = (*(undefined4 **)(render_context + 0x38))[1];
    if ((*(byte *)(render_context + 0x30) & 2) != 0) {
      processed_render_flags = render_flags & 0xffffff;
      index_buffer_size = vertex_count * 2;
      allocate_index_buffer(render_context, vertex_count * 9 + -6, index_buffer_size);
      render_flag1 = *(undefined4 *)(render_context + 0x48);
      triangle_counter = 2;
      if (2 < (int)vertex_count) {
        do {
          index_offset = (short)triangle_counter;
          triangle_counter = triangle_counter + 1;
          base_index = (short)render_flag1;
          index_offset = index_offset * 2 + base_index;
          **(short **)(render_context + 0x58) = base_index;
          *(short *)(*(longlong *)(render_context + 0x58) + 2) = index_offset + -2;
          *(short *)(*(longlong *)(render_context + 0x58) + 4) = index_offset;
          *(longlong *)(render_context + 0x58) = *(longlong *)(render_context + 0x58) + 6;
        } while (triangle_counter < (int)vertex_count);
      }
      vertex_loop_counter = (longlong)(int)vertex_count * 8 + 0xf;
      if (vertex_loop_counter <= (ulonglong)((longlong)(int)vertex_count * 8)) {
        vertex_loop_counter = 0xffffffffffffff0;
      }
      // 分配顶点缓冲区内存（此函数不返回）
      allocate_vertex_memory(vertex_loop_counter & 0xfffffffffffffff0);
    }
    allocate_index_buffer(render_context, (vertex_count - 2) * 3, vertex_loop_counter);
    if (0 < (int)vertex_count) {
      do {
        vertex_data_item = *vertex_data;
        vertex_data = vertex_data + 1;
        **(undefined8 **)(render_context + 0x50) = vertex_data_item;
        vertex_buffer_ptr = *(longlong *)(render_context + 0x50);
        *(undefined4 *)(vertex_buffer_ptr + 8) = render_flag1;
        *(undefined4 *)(vertex_buffer_ptr + 0xc) = render_flag2;
        *(uint *)(*(longlong *)(render_context + 0x50) + 0x10) = render_flags;
        *(longlong *)(render_context + 0x50) = *(longlong *)(render_context + 0x50) + 0x14;
        vertex_loop_counter = vertex_loop_counter - 1;
      } while (vertex_loop_counter != 0);
    }
    triangle_counter = 2;
    if (2 < (int)vertex_count) {
      do {
        **(undefined2 **)(render_context + 0x58) = *(undefined2 *)(render_context + 0x48);
        index_offset = (short)triangle_counter;
        *(short *)(*(longlong *)(render_context + 0x58) + 2) = index_offset + -1 + *(short *)(render_context + 0x48);
        triangle_counter = triangle_counter + 1;
        *(short *)(*(longlong *)(render_context + 0x58) + 4) = index_offset + *(short *)(render_context + 0x48);
        *(longlong *)(render_context + 0x58) = *(longlong *)(render_context + 0x58) + 6;
      } while (triangle_counter < (int)vertex_count);
    }
    *(int *)(render_context + 0x48) = *(int *)(render_context + 0x48) + (vertex_count & 0xffff);
  }
  // 栈保护检查（此函数不返回）
  check_stack_protection(stack_protection ^ (ulonglong)&processed_render_flags);
}



// 函数: 渲染纹理坐标变换处理
void RenderingSystem_TextureCoordinateTransform(longlong render_context, float *texture_coords, float scale_factor, int start_index, int end_index)

{
  int *buffer_ptr;
  float tex_coord_u;
  float tex_coord_v;
  float base_coord_u;
  float base_coord_v;
  int buffer_capacity;
  int current_index;
  int new_capacity;
  int loop_counter;
  
  // 检查缩放因子和索引范围有效性
  if ((scale_factor == 0.0) || (end_index < start_index)) {
    clear_render_buffer(render_context + 0x80);
  }
  else {
    buffer_ptr = (int *)(render_context + 0x80);
    // 扩展缓冲区容量以容纳新的纹理坐标
    expand_render_buffer(buffer_ptr, end_index + 1 + (*buffer_ptr - start_index));
    loop_counter = *buffer_ptr;
    do {
      buffer_capacity = *(int *)(render_context + 0x84);
      // 获取基础纹理坐标
      tex_coord_u = *(float *)(*(longlong *)(render_context + 0x38) + 0x28 + (longlong)(start_index % 0xc) * 8);
      tex_coord_v = *(float *)(*(longlong *)(render_context + 0x38) + 0x2c + (longlong)(start_index % 0xc) * 8);
      base_coord_u = *texture_coords;
      base_coord_v = texture_coords[1];
      if (loop_counter == buffer_capacity) {
        // 动态调整缓冲区大小
        if (buffer_capacity == 0) {
          buffer_capacity = 8;
        }
        else {
          buffer_capacity = buffer_capacity / 2 + buffer_capacity;
        }
        new_capacity = loop_counter + 1;
        if (loop_counter + 1 < buffer_capacity) {
          new_capacity = buffer_capacity;
        }
        expand_render_buffer(buffer_ptr, new_capacity);
        loop_counter = *buffer_ptr;
      }
      start_index = start_index + 1;
      // 应用缩放变换并存储变换后的纹理坐标
      *(ulonglong *)(*(longlong *)(render_context + 0x88) + (longlong)loop_counter * 8) =
           CONCAT44(scale_factor * tex_coord_v + base_coord_v, scale_factor * tex_coord_u + base_coord_u);
      *buffer_ptr = *buffer_ptr + 1;
      loop_counter = *buffer_ptr;
    } while (start_index <= end_index);
  }
  return;
}



// 函数: void FUN_180293772(longlong param_1,int param_2,undefined8 param_3,int param_4)
// 功能: 渲染系统高级坐标变换处理函数（寄存器变量版本）
// 参数: param_1 - 渲染上下文指针, param_2 - 坐标数量, param_3 - 坐标数据指针, param_4 - 起始索引
void RenderingSystem_AdvancedCoordinateTransform(longlong render_context, int coordinate_count, undefined8 coordinate_data, int start_index)

{
  int *buffer_count_ptr;
  float transform_x;
  float transform_y;
  float coord_x;
  float coord_y;
  int buffer_capacity;
  int new_capacity;
  longlong context_reg;
  int end_index_reg;
  int current_index_reg;
  int current_count;
  float *coord_array_reg;
  float scale_factor_reg;
  
  buffer_count_ptr = (int *)(render_context + 0x80);
  // 重新分配缓冲区以容纳新的坐标点
  FUN_18011dc70(buffer_count_ptr, coordinate_count + (*buffer_count_ptr - start_index));
  current_count = *buffer_count_ptr;
  
  // 使用寄存器变量进行坐标变换
  do {
    buffer_capacity = *(int *)(render_context + 0x84);
    // 获取变换矩阵中的坐标值
    transform_x = *(float *)(*(longlong *)(context_reg + 0x38) + 0x28 + (longlong)(current_index_reg % 0xc) * 8);
    transform_y = *(float *)(*(longlong *)(context_reg + 0x38) + 0x2c + (longlong)(current_index_reg % 0xc) * 8);
    coord_x = *coord_array_reg;
    coord_y = coord_array_reg[1];
    
    // 检查缓冲区是否需要扩展
    if (current_count == buffer_capacity) {
      if (buffer_capacity == 0) {
        buffer_capacity = 8;
      }
      else {
        buffer_capacity = buffer_capacity / 2 + buffer_capacity;
      }
      new_capacity = current_count + 1;
      if (current_count + 1 < buffer_capacity) {
        new_capacity = buffer_capacity;
      }
      FUN_18011dc70(buffer_count_ptr, new_capacity);
      current_count = *buffer_count_ptr;
    }
    
    current_index_reg = current_index_reg + 1;
    // 应用变换并存储结果
    *(ulonglong *)(*(longlong *)(render_context + 0x88) + (longlong)current_count * 8) =
         CONCAT44(scale_factor_reg * transform_y + coord_y, scale_factor_reg * transform_x + coord_x);
    *buffer_count_ptr = *buffer_count_ptr + 1;
    current_count = *buffer_count_ptr;
  } while (current_index_reg <= end_index_reg);
  return;
}



// 函数: void FUN_180293836(longlong param_1)
// 功能: 渲染系统缓冲区清理函数
// 参数: param_1 - 渲染上下文指针
void RenderingSystem_ClearBuffer(longlong render_context)

{
  // 清理渲染缓冲区
  FUN_18011d9a0(render_context + 0x80);
  return;
}



// 函数: void FUN_180293860(longlong param_1,undefined8 param_2,float param_3,undefined8 param_4,
// 功能: 渲染系统缩放和初始化函数
// 参数: param_1 - 渲染上下文指针, param_2 - 数据指针, param_3 - 缩放因子, param_4 - 数据指针2, param_5 - 数据指针3, param_6 - 索引数量
void RenderingSystem_ScaleAndInitialize(longlong render_context, undefined8 data_ptr, float scale_factor, undefined8 data_ptr2, undefined8 data_ptr3, int index_count)

{
  // 检查缩放因子是否为0
  if (scale_factor == 0.0) {
    FUN_18011d9a0();
  }
  else {
    // 重新分配缓冲区并初始化
    FUN_18011dc70((int *)(render_context + 0x80), index_count + 1 + *(int *)(render_context + 0x80));
    if (-1 < index_count) {
      // 初始化渲染数据（此函数不返回）
      FUN_1808fd400();
    }
  }
  return;
}



// 函数: void FUN_18029389c(void)
// 功能: 渲染系统初始化函数
void RenderingSystem_Initialize(void)

{
  int stack_index;
  
  // 分配渲染缓冲区
  FUN_18011dc70();
  if (-1 < stack_index) {
    // 初始化渲染系统（此函数不返回）
    FUN_1808fd400();
  }
  return;
}



// 函数: void FUN_1802938c7(void)
// 功能: 渲染系统强制初始化函数
void RenderingSystem_ForceInitialize(void)

{
  // 强制初始化渲染系统（此函数不返回）
  FUN_1808fd400();
}



// 函数: void FUN_1802939a8(void)
// 功能: 渲染系统空操作函数1
void RenderingSystem_NoOperation1(void)

{
  // 空操作函数
  return;
}



// 函数: void FUN_1802939b8(void)
// 功能: 渲染系统空操作函数2
void RenderingSystem_NoOperation2(void)

{
  // 空操作函数
  return;
}



// 函数: void FUN_1802939e0(longlong param_1,float *param_2,float *param_3,float param_4,uint param_5)
// 功能: 渲染系统矩形区域处理函数
// 参数: param_1 - 渲染上下文指针, param_2 - 起始坐标点, param_3 - 结束坐标点, param_4 - 距离阈值, param_5 - 处理标志
void RenderingSystem_ProcessRectangleArea(longlong render_context, float *start_coord, float *end_coord, float distance_threshold, uint process_flags)

{
  byte process_flags_byte;
  int buffer_capacity;
  int new_capacity;
  int current_count;
  int *buffer_count_ptr;
  int default_capacity;
  float x_scale_factor;
  float x_distance;
  float y_scale_factor;
  float y_distance;
  float final_distance;
  float temp_coord_x;
  float temp_coord_y;
  
  x_scale_factor = 0.5;
  process_flags_byte = (byte)process_flags;
  
  // 根据处理标志确定X轴缩放因子
  if ((process_flags_byte & 3) == 3 || (process_flags_byte & 0xc) == 0xc) {
    x_distance = 0.5;
  }
  else {
    x_distance = 1.0;
  }
  
  // 计算X轴距离
  x_distance = ABS(*end_coord - *start_coord) * x_distance - 1.0;
  if (x_distance <= distance_threshold) {
    distance_threshold = x_distance;
  }
  
  // 根据处理标志确定Y轴缩放因子
  if ((process_flags_byte & 5) != 5 && (process_flags_byte & 10) != 10) {
    y_scale_factor = 1.0;
  }
  
  // 计算Y轴距离
  y_scale_factor = ABS(end_coord[1] - start_coord[1]) * y_scale_factor - 1.0;
  if (distance_threshold <= y_scale_factor) {
    y_scale_factor = distance_threshold;
  }
  
  // 检查距离是否在阈值范围内或处理标志为0
  if ((y_scale_factor <= 0.0) || (process_flags == 0)) {
    buffer_count_ptr = (int *)(render_context + 0x80);
    FUN_18011d9a0(buffer_count_ptr);
    temp_coord_x = *end_coord;
    default_capacity = 8;
    temp_coord_y = start_coord[1];
    current_count = *buffer_count_ptr;
    buffer_capacity = *(int *)(render_context + 0x84);
    
    // 检查缓冲区是否需要扩展
    if (current_count == buffer_capacity) {
      if (buffer_capacity == 0) {
        buffer_capacity = 8;
      }
      else {
        buffer_capacity = buffer_capacity / 2 + buffer_capacity;
      }
      new_capacity = current_count + 1;
      if (current_count + 1 < buffer_capacity) {
        new_capacity = buffer_capacity;
      }
      FUN_18011dc70(buffer_count_ptr, new_capacity);
      current_count = *buffer_count_ptr;
    }
    
    // 存储第一个坐标点
    *(ulonglong *)(*(longlong *)(render_context + 0x88) + (longlong)current_count * 8) =
         CONCAT44(temp_coord_y, temp_coord_x);
    *buffer_count_ptr = *buffer_count_ptr + 1;
    
    FUN_18011d9a0(buffer_count_ptr, end_coord);
    temp_coord_x = *start_coord;
    temp_coord_y = end_coord[1];
    current_count = *buffer_count_ptr;
    buffer_capacity = *(int *)(render_context + 0x84);
    
    // 检查缓冲区是否需要扩展
    if (current_count == buffer_capacity) {
      if (buffer_capacity != 0) {
        default_capacity = buffer_capacity + buffer_capacity / 2;
      }
      buffer_capacity = current_count + 1;
      if (current_count + 1 < default_capacity) {
        buffer_capacity = default_capacity;
      }
      FUN_18011dc70(buffer_count_ptr, buffer_capacity);
      current_count = *buffer_count_ptr;
    }
    
    // 存储第二个坐标点
    *(ulonglong *)(*(longlong *)(render_context + 0x88) + (longlong)current_count * 8) =
         CONCAT44(temp_coord_y, temp_coord_x);
    *buffer_count_ptr = *buffer_count_ptr + 1;
  }
  else {
    // 根据处理标志计算各个方向的偏移量
    final_distance = y_scale_factor;
    if ((process_flags & 1) == 0) {
      final_distance = 0.0;
    }
    
    y_distance = y_scale_factor;
    if ((process_flags & 2) == 0) {
      y_distance = 0.0;
    }
    
    x_distance = y_scale_factor;
    if ((process_flags & 8) == 0) {
      x_distance = 0.0;
    }
    
    if ((process_flags & 4) == 0) {
      y_scale_factor = 0.0;
    }
    
    // 处理四个方向的坐标变换
    temp_coord_x = *start_coord + final_distance;
    temp_coord_y = start_coord[1] + final_distance;
    FUN_180293730(render_context, &temp_coord_x, final_distance, 6, 9);
    
    temp_coord_y = y_distance + start_coord[1];
    temp_coord_x = *end_coord - y_distance;
    FUN_180293730(render_context, &temp_coord_x, y_distance, 9, 0xc);
    
    temp_coord_x = *end_coord - x_distance;
    temp_coord_y = end_coord[1] - x_distance;
    FUN_180293730(render_context, &temp_coord_x, x_distance, 0, 3);
    
    temp_coord_x = y_scale_factor + *start_coord;
    temp_coord_y = end_coord[1] - y_scale_factor;
    FUN_180293730(render_context, &temp_coord_x, y_scale_factor, 3, 6);
  }
  return;
}



// 函数: void FUN_180293ab9(undefined4 param_1)
// 功能: 渲染系统坐标偏移处理函数（寄存器变量版本）
// 参数: param_1 - 渲染上下文指针
void RenderingSystem_ProcessCoordinateOffset(undefined4 render_context)

{
  float *coord_ptr1;
  float *coord_ptr2;
  byte offset_flags;
  float base_coord_x;
  float offset_distance;
  float offset_x;
  float offset_y;
  float base_offset_x;
  float temp_coord_x;
  float temp_coord_y;
  
  temp_coord_y = offset_distance;
  // 根据标志位设置X轴偏移
  if ((offset_flags & 1) == 0) {
    temp_coord_y = 0.0;
  }
  offset_y = offset_distance;
  // 根据标志位设置Y轴偏移
  if ((offset_flags & 2) == 0) {
    offset_y = 0.0;
  }
  offset_x = offset_distance;
  // 根据标志位设置X轴偏移
  if ((offset_flags & 8) == 0) {
    offset_x = 0.0;
  }
  if ((offset_flags & 4) == 0) {
    offset_distance = 0.0;
  }
  temp_coord_x = base_offset_x + temp_coord_y;
  temp_coord_y = base_coord_x + temp_coord_y;
  FUN_180293730(render_context, &temp_coord_x);
  temp_coord_y = offset_y + coord_ptr1[1];
  temp_coord_x = *coord_ptr2 - offset_y;
  FUN_180293730(temp_coord_x, &temp_coord_x, offset_y, 9, 0xc);
  temp_coord_x = *coord_ptr2 - offset_x;
  temp_coord_y = coord_ptr2[1] - offset_x;
  FUN_180293730(temp_coord_x, &temp_coord_x, offset_x, 0, 3);
  temp_coord_x = offset_distance + *coord_ptr1;
  temp_coord_y = coord_ptr2[1] - offset_distance;
  FUN_180293730(temp_coord_x, &temp_coord_x, offset_distance, 3, 6);
  return;
}



// 函数: void FUN_180293c0e(void)
// 功能: 渲染系统双坐标点处理函数（寄存器变量版本）
void RenderingSystem_ProcessDualCoordinates(void)

{
  undefined4 coord_x;
  int buffer_capacity;
  int current_count;
  int new_capacity;
  longlong render_context_reg;
  int *buffer_count_ptr;
  undefined4 *coord_ptr1;
  undefined4 *coord_ptr2;
  int default_capacity;
  undefined4 coord_y;
  
  buffer_count_ptr = (int *)(render_context_reg + 0x80);
  FUN_18011d9a0(buffer_count_ptr);
  coord_x = *coord_ptr2;
  default_capacity = 8;
  coord_y = coord_ptr1[1];
  current_count = *buffer_count_ptr;
  buffer_capacity = *(int *)(render_context_reg + 0x84);
  
  // 检查缓冲区是否需要扩展
  if (current_count == buffer_capacity) {
    if (buffer_capacity == 0) {
      buffer_capacity = 8;
    }
    else {
      buffer_capacity = buffer_capacity / 2 + buffer_capacity;
    }
    new_capacity = current_count + 1;
    if (current_count + 1 < buffer_capacity) {
      new_capacity = buffer_capacity;
    }
    FUN_18011dc70(buffer_count_ptr, new_capacity);
    current_count = *buffer_count_ptr;
  }
  
  // 存储第一个坐标点
  *(ulonglong *)(*(longlong *)(render_context_reg + 0x88) + (longlong)current_count * 8) =
       CONCAT44(coord_y, coord_x);
  *buffer_count_ptr = *buffer_count_ptr + 1;
  
  FUN_18011d9a0(buffer_count_ptr);
  coord_x = *coord_ptr1;
  coord_y = coord_ptr2[1];
  current_count = *buffer_count_ptr;
  buffer_capacity = *(int *)(render_context_reg + 0x84);
  
  // 检查缓冲区是否需要扩展
  if (current_count == buffer_capacity) {
    if (buffer_capacity != 0) {
      default_capacity = buffer_capacity + buffer_capacity / 2;
    }
    buffer_capacity = current_count + 1;
    if (current_count + 1 < default_capacity) {
      buffer_capacity = default_capacity;
    }
    FUN_18011dc70(buffer_count_ptr, buffer_capacity);
    current_count = *buffer_count_ptr;
  }
  
  // 存储第二个坐标点
  *(ulonglong *)(*(longlong *)(render_context_reg + 0x88) + (longlong)current_count * 8) =
       CONCAT44(coord_y, coord_x);
  *buffer_count_ptr = *buffer_count_ptr + 1;
  return;
}



// 函数: void FUN_180293c12(void)
// 功能: 渲染系统双坐标点处理函数2（寄存器变量版本）
void RenderingSystem_ProcessDualCoordinates2(void)

{
  undefined4 coord_x;
  int buffer_capacity;
  int current_count;
  int new_capacity;
  int *buffer_count_ptr;
  undefined4 *coord_ptr1;
  undefined4 *coord_ptr2;
  int default_capacity;
  undefined4 coord_y;
  
  FUN_18011d9a0();
  coord_x = *coord_ptr2;
  default_capacity = 8;
  coord_y = coord_ptr1[1];
  current_count = *buffer_count_ptr;
  buffer_capacity = buffer_count_ptr[1];
  
  // 检查缓冲区是否需要扩展
  if (current_count == buffer_capacity) {
    if (buffer_capacity == 0) {
      buffer_capacity = 8;
    }
    else {
      buffer_capacity = buffer_capacity / 2 + buffer_capacity;
    }
    new_capacity = current_count + 1;
    if (current_count + 1 < buffer_capacity) {
      new_capacity = buffer_capacity;
    }
    FUN_18011dc70(coord_x, new_capacity);
    current_count = *buffer_count_ptr;
  }
  
  // 存储第一个坐标点
  *(ulonglong *)(*(longlong *)(buffer_count_ptr + 2) + (longlong)current_count * 8) =
       CONCAT44(coord_y, coord_x);
  *buffer_count_ptr = *buffer_count_ptr + 1;
  
  FUN_18011d9a0();
  coord_x = *coord_ptr1;
  coord_y = coord_ptr2[1];
  current_count = *buffer_count_ptr;
  buffer_capacity = buffer_count_ptr[1];
  
  // 检查缓冲区是否需要扩展
  if (current_count == buffer_capacity) {
    if (buffer_capacity != 0) {
      default_capacity = buffer_capacity + buffer_capacity / 2;
    }
    buffer_capacity = current_count + 1;
    if (current_count + 1 < default_capacity) {
      buffer_capacity = default_capacity;
    }
    FUN_18011dc70(coord_x, buffer_capacity);
    current_count = *buffer_count_ptr;
  }
  
  // 存储第二个坐标点
  *(ulonglong *)(*(longlong *)(buffer_count_ptr + 2) + (longlong)current_count * 8) =
       CONCAT44(coord_y, coord_x);
  *buffer_count_ptr = *buffer_count_ptr + 1;
  return;
}



// 函数: void FUN_180293cfe(void)
// 功能: 渲染系统空操作函数3
void RenderingSystem_NoOperation3(void)

{
  // 空操作函数
  return;
}



// 函数: void FUN_180293d20(longlong param_1,float *param_2,float *param_3,uint param_4,undefined4 param_5)
// 功能: 渲染系统纹理坐标对齐处理函数
// 参数: param_1 - 渲染上下文指针, param_2 - 起始纹理坐标, param_3 - 结束纹理坐标, param_4 - 渲染标志, param_5 - 纹理参数
void RenderingSystem_AlignTextureCoordinates(longlong render_context, float *start_texcoord, float *end_texcoord, uint render_flags, undefined4 texture_param)

{
  int *buffer_count_ptr;
  float texcoord_u;
  float texcoord_v;
  int new_capacity;
  int buffer_capacity;
  int current_count;
  int default_capacity;
  
  // 检查渲染标志是否有效
  if ((render_flags & 0xff000000) != 0) {
    texcoord_u = *start_texcoord;
    buffer_count_ptr = (int *)(render_context + 0x80);
    buffer_capacity = *(int *)(render_context + 0x84);
    default_capacity = 8;
    texcoord_v = start_texcoord[1];
    current_count = *buffer_count_ptr;
    
    // 检查缓冲区是否需要扩展
    if (current_count == buffer_capacity) {
      if (buffer_capacity == 0) {
        buffer_capacity = 8;
      }
      else {
        buffer_capacity = buffer_capacity / 2 + buffer_capacity;
      }
      new_capacity = current_count + 1;
      if (current_count + 1 < buffer_capacity) {
        new_capacity = buffer_capacity;
      }
      FUN_18011dc70(buffer_count_ptr, new_capacity);
      current_count = *buffer_count_ptr;
    }
    
    // 存储对齐后的起始纹理坐标
    *(ulonglong *)(*(longlong *)(render_context + 0x88) + (longlong)current_count * 8) =
         CONCAT44(texcoord_v + 0.5, texcoord_u + 0.5);
    *buffer_count_ptr = *buffer_count_ptr + 1;
    
    texcoord_u = *end_texcoord;
    texcoord_v = end_texcoord[1];
    buffer_capacity = *buffer_count_ptr;
    current_count = *(int *)(render_context + 0x84);
    
    // 检查缓冲区是否需要扩展
    if (buffer_capacity == current_count) {
      if (current_count != 0) {
        default_capacity = current_count + current_count / 2;
      }
      current_count = buffer_capacity + 1;
      if (buffer_capacity + 1 < default_capacity) {
        current_count = default_capacity;
      }
      FUN_18011dc70(buffer_count_ptr, current_count);
      buffer_capacity = *buffer_count_ptr;
    }
    
    // 存储对齐后的结束纹理坐标
    *(ulonglong *)(*(longlong *)(render_context + 0x88) + (longlong)buffer_capacity * 8) =
         CONCAT44(texcoord_v + 0.5, texcoord_u + 0.5);
    *buffer_count_ptr = *buffer_count_ptr + 1;
    
    // 执行纹理坐标渲染
    FUN_1802923e0(render_context, *(undefined8 *)(render_context + 0x88), *buffer_count_ptr, render_flags, 0, texture_param);
    *buffer_count_ptr = 0;
  }
  return;
}



// 函数: void FUN_180293d4c(float param_1,longlong param_2,float *param_3,undefined8 param_4,
// 功能: 渲染系统高级纹理坐标处理函数（寄存器变量版本）
// 参数: param_1 - 坐标X, param_2 - 渲染上下文指针, param_3 - 纹理坐标数组, param_4 - 数据指针1, param_5 - 数据指针2, param_6 - 数据指针3
void RenderingSystem_AdvancedTextureCoordProcess(float coord_x, longlong render_context, float *texture_coords, undefined8 data_ptr1, undefined8 data_ptr2, undefined8 data_ptr3)

{
  int *buffer_count_ptr;
  float texcoord_u;
  float texcoord_v;
  int new_capacity;
  int buffer_capacity;
  int current_count;
  longlong data_ptr_reg;
  longlong context_reg;
  undefined4 render_flags;
  longlong context_reg2;
  int default_capacity;
  undefined8 texture_data;
  undefined4 color_r;
  undefined4 color_g;
  undefined4 color_b;
  undefined4 color_a;
  undefined4 stack_param;
  
  // 设置纹理数据
  *(undefined8 *)(data_ptr_reg + 0x10) = texture_data;
  buffer_count_ptr = (int *)(context_reg + 0x80);
  buffer_capacity = *(int *)(context_reg + 0x84);
  
  // 设置颜色值
  *(undefined4 *)(data_ptr_reg + -0x18) = color_r;
  *(undefined4 *)(data_ptr_reg + -0x14) = color_g;
  *(undefined4 *)(data_ptr_reg + -0x10) = color_b;
  *(undefined4 *)(data_ptr_reg + -0xc) = color_a;
  default_capacity = 8;
  
  // 对齐坐标
  *(float *)(data_ptr_reg + -0x28) = coord_x + 0.5;
  *(float *)(data_ptr_reg + -0x24) = *(float *)(render_context + 4) + 0.5;
  current_count = *buffer_count_ptr;
  
  // 检查缓冲区是否需要扩展
  if (current_count == buffer_capacity) {
    if (buffer_capacity == 0) {
      buffer_capacity = 8;
    }
    else {
      buffer_capacity = buffer_capacity / 2 + buffer_capacity;
    }
    new_capacity = current_count + 1;
    if (current_count + 1 < buffer_capacity) {
      new_capacity = buffer_capacity;
    }
    FUN_18011dc70(buffer_count_ptr, new_capacity);
    current_count = *buffer_count_ptr;
  }
  
  // 存储纹理数据
  *(undefined8 *)(*(longlong *)(context_reg + 0x88) + (longlong)current_count * 8) = data_ptr3;
  *buffer_count_ptr = *buffer_count_ptr + 1;
  
  texcoord_u = *texture_coords;
  texcoord_v = texture_coords[1];
  buffer_capacity = *buffer_count_ptr;
  current_count = *(int *)(context_reg + 0x84);
  
  // 检查缓冲区是否需要扩展
  if (buffer_capacity == current_count) {
    if (current_count != 0) {
      default_capacity = current_count + current_count / 2;
    }
    current_count = buffer_capacity + 1;
    if (buffer_capacity + 1 < default_capacity) {
      current_count = default_capacity;
    }
    FUN_18011dc70(buffer_count_ptr, current_count);
    buffer_capacity = *buffer_count_ptr;
  }
  
  // 存储对齐后的纹理坐标
  *(ulonglong *)(*(longlong *)(context_reg + 0x88) + (longlong)buffer_capacity * 8) =
       CONCAT44(texcoord_v + 0.5, texcoord_u + 0.5);
  *buffer_count_ptr = *buffer_count_ptr + 1;
  
  // 执行纹理渲染
  FUN_1802923e0(stack_param, *(undefined8 *)(context_reg2 + 0x88), *buffer_count_ptr, render_flags, 0);
  *buffer_count_ptr = 0;
  return;
}



// 函数: void FUN_180293d5d(float param_1,longlong param_2)
// 功能: 渲染系统坐标对齐处理函数（寄存器变量版本）
// 参数: param_1 - 坐标X, param_2 - 渲染上下文指针
void RenderingSystem_AlignCoordinates(float coord_x, longlong render_context)

{
  float coord_y;
  int current_count;
  longlong data_ptr_reg;
  int buffer_capacity;
  int new_capacity;
  int *buffer_count_ptr;
  undefined4 render_flags;
  longlong context_reg;
  int default_capacity;
  float *coord_array_reg;
  float aligned_coord;
  undefined4 color_r;
  undefined4 color_g;
  undefined4 color_b;
  undefined4 color_a;
  undefined8 texture_data;
  undefined4 stack_param;
  
  // 设置颜色值
  *(undefined4 *)(data_ptr_reg + -0x18) = color_r;
  *(undefined4 *)(data_ptr_reg + -0x14) = color_g;
  *(undefined4 *)(data_ptr_reg + -0x10) = color_b;
  *(undefined4 *)(data_ptr_reg + -0xc) = color_a;
  default_capacity = 8;
  
  // 对齐坐标
  *(float *)(data_ptr_reg + -0x28) = coord_x + 0.5;
  aligned_coord = *(float *)(render_context + 4) + 0.5;
  *(float *)(data_ptr_reg + -0x24) = aligned_coord;
  current_count = *buffer_count_ptr;
  
  // 检查缓冲区是否需要扩展
  if (current_count == buffer_capacity) {
    if (buffer_capacity == 0) {
      buffer_capacity = 8;
    }
    else {
      buffer_capacity = buffer_capacity / 2 + buffer_capacity;
    }
    new_capacity = current_count + 1;
    if (current_count + 1 < buffer_capacity) {
      new_capacity = buffer_capacity;
    }
    FUN_18011dc70(aligned_coord, new_capacity);
    current_count = *buffer_count_ptr;
  }
  
  // 存储纹理数据
  *(undefined8 *)(*(longlong *)(buffer_count_ptr + 2) + (longlong)current_count * 8) = texture_data;
  *buffer_count_ptr = *buffer_count_ptr + 1;
  
  aligned_coord = *coord_array_reg;
  coord_y = coord_array_reg[1];
  current_count = *buffer_count_ptr;
  buffer_capacity = buffer_count_ptr[1];
  
  // 检查缓冲区是否需要扩展
  if (current_count == buffer_capacity) {
    if (buffer_capacity != 0) {
      default_capacity = buffer_capacity + buffer_capacity / 2;
    }
    buffer_capacity = current_count + 1;
    if (current_count + 1 < default_capacity) {
      buffer_capacity = default_capacity;
    }
    FUN_18011dc70(aligned_coord + 0.5, buffer_capacity);
    current_count = *buffer_count_ptr;
  }
  
  // 存储对齐后的坐标
  *(ulonglong *)(*(longlong *)(buffer_count_ptr + 2) + (longlong)current_count * 8) =
       CONCAT44(coord_y + 0.5, aligned_coord + 0.5);
  *buffer_count_ptr = *buffer_count_ptr + 1;
  
  // 执行坐标渲染
  FUN_1802923e0(stack_param, *(undefined8 *)(context_reg + 0x88), *buffer_count_ptr, render_flags, 0);
  *buffer_count_ptr = 0;
  return;
}



// 函数: void FUN_180293df5(undefined4 param_1,undefined8 param_2,int param_3,undefined8 param_4,
// 功能: 渲染系统缓冲区扩展和数据处理函数（寄存器变量版本）
// 参数: param_1 - 缓冲区指针, param_2 - 数据指针1, param_3 - 缓冲区大小, param_4 - 数据指针2, param_5 - 数据指针3, param_6 - 数据指针4
void RenderingSystem_ExpandBufferAndProcessData(undefined4 buffer_ptr, undefined8 data_ptr1, int buffer_size, undefined8 data_ptr2, undefined8 data_ptr3, undefined8 data_ptr4)

{
  int current_size;
  int new_size;
  int *buffer_count_ptr;
  undefined4 render_flags;
  longlong context_reg;
  int expanded_size;
  undefined4 stack_param;
  
  // 计算扩展后的缓冲区大小
  if (buffer_size != 0) {
    expanded_size = buffer_size + buffer_size / 2;
  }
  new_size = current_size + 1;
  if (current_size + 1 < expanded_size) {
    new_size = expanded_size;
  }
  
  // 扩展缓冲区
  FUN_18011dc70(buffer_ptr, new_size);
  
  // 存储数据
  *(undefined8 *)(*(longlong *)(buffer_count_ptr + 2) + (longlong)*buffer_count_ptr * 8) = data_ptr4;
  *buffer_count_ptr = *buffer_count_ptr + 1;
  
  // 执行数据处理
  FUN_1802923e0(stack_param, *(undefined8 *)(context_reg + 0x88), *buffer_count_ptr, render_flags, 0);
  *buffer_count_ptr = 0;
  return;
}



// 函数: void FUN_180293e75(void)
// 功能: 渲染系统空操作函数4
void RenderingSystem_NoOperation4(void)

{
  // 空操作函数
  return;
}



// 函数: void FUN_180293e80(longlong param_1,float *param_2,float *param_3,undefined4 param_4,
void RenderingSystem_LineDrawingProcess(longlong render_context, float *start_point, float *end_point, undefined4 line_color,
                                        undefined4 line_width, undefined4 line_style)

{
  float temp_coord_1;
  float temp_coord_2;
  float stack_coord_1;
  float stack_coord_2;
  
  stack_coord_1 = *start_point + 0.5;
  stack_coord_2 = start_point[1] + 0.5;
  if ((*(byte *)(render_context + 0x30) & 1) == 0) {
    temp_coord_1 = *end_point - 0.49;
    temp_coord_2 = end_point[1] - 0.49;
  }
  else {
    temp_coord_1 = *end_point - 0.5;
    temp_coord_2 = end_point[1] - 0.5;
  }
  // 处理边界框计算
  RenderingSystem_ProcessRectangleArea(0x3f000000, &stack_coord_1, &temp_coord_1, line_width, line_style);
  // 执行线条绘制
  FUN_1802923e0(render_context, *(undefined8 *)(render_context + 0x88), *(undefined4 *)(render_context + 0x80), line_color, 1,
                line_style);
  *(undefined4 *)(render_context + 0x80) = 0;
  return;
}



// 函数: void FUN_180293f50(longlong param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
void RenderingSystem_QuadDrawingProcess(longlong render_context, undefined8 *vertex_data_1, undefined8 *vertex_data_2, uint render_flags,
                                       float quad_scale, undefined4 render_params)

{
  undefined4 vertex_data_1_a;
  undefined4 vertex_data_1_b;
  undefined4 vertex_data_1_c;
  undefined4 vertex_data_1_d;
  undefined4 vertex_data_1_e;
  undefined4 vertex_data_1_f;
  short index_value;
  longlong data_offset;
  
  if ((render_flags & 0xff000000) != 0) {
    if (quad_scale <= 0.0) {
      // 初始化四边形顶点缓冲区
      FUN_1802921e0(0, 6, 4);
      index_value = *(short *)(render_context + 0x48);
      vertex_data_1_a = *(undefined4 *)vertex_data_2;
      vertex_data_1_b = *(undefined4 *)((longlong)vertex_data_1 + 4);
      vertex_data_1_c = *(undefined4 *)vertex_data_1;
      vertex_data_1_d = (*(undefined4 **)(render_context + 0x38))[1];
      vertex_data_1_e = **(undefined4 **)(render_context + 0x38);
      vertex_data_1_f = *(undefined4 *)((longlong)vertex_data_2 + 4);
      // 设置四边形索引
      **(short **)(render_context + 0x58) = index_value;
      *(short *)(*(longlong *)(render_context + 0x58) + 2) = index_value + 1;
      *(short *)(*(longlong *)(render_context + 0x58) + 4) = index_value + 2;
      *(short *)(*(longlong *)(render_context + 0x58) + 6) = index_value;
      *(short *)(*(longlong *)(render_context + 0x58) + 8) = index_value + 2;
      *(short *)(*(longlong *)(render_context + 0x58) + 10) = index_value + 3;
      // 处理四边形顶点数据
      **(undefined8 **)(render_context + 0x50) = *vertex_data_1;
      data_offset = *(longlong *)(render_context + 0x50);
      *(undefined4 *)(data_offset + 8) = vertex_data_1_e;
      *(undefined4 *)(data_offset + 0xc) = vertex_data_1_d;
      *(uint *)(*(longlong *)(render_context + 0x50) + 0x10) = render_flags;
      data_offset = *(longlong *)(render_context + 0x50);
      *(undefined4 *)(data_offset + 0x14) = vertex_data_1_a;
      *(undefined4 *)(data_offset + 0x18) = vertex_data_1_b;
      data_offset = *(longlong *)(render_context + 0x50);
      *(undefined4 *)(data_offset + 0x1c) = vertex_data_1_e;
      *(undefined4 *)(data_offset + 0x20) = vertex_data_1_d;
      *(uint *)(*(longlong *)(render_context + 0x50) + 0x24) = render_flags;
      *(undefined8 *)(*(longlong *)(render_context + 0x50) + 0x28) = *vertex_data_2;
      data_offset = *(longlong *)(render_context + 0x50);
      *(undefined4 *)(data_offset + 0x30) = vertex_data_1_e;
      *(undefined4 *)(data_offset + 0x34) = vertex_data_1_d;
      *(uint *)(*(longlong *)(render_context + 0x50) + 0x38) = render_flags;
      data_offset = *(longlong *)(render_context + 0x50);
      *(undefined4 *)(data_offset + 0x3c) = vertex_data_1_c;
      *(undefined4 *)(data_offset + 0x40) = vertex_data_1_f;
      data_offset = *(longlong *)(render_context + 0x50);
      *(undefined4 *)(data_offset + 0x44) = vertex_data_1_e;
      *(undefined4 *)(data_offset + 0x48) = vertex_data_1_d;
      *(uint *)(*(longlong *)(render_context + 0x50) + 0x4c) = render_flags;
      *(longlong *)(render_context + 0x50) = *(longlong *)(render_context + 0x50) + 0x50;
      *(int *)(render_context + 0x48) = *(int *)(render_context + 0x48) + 4;
      *(longlong *)(render_context + 0x58) = *(longlong *)(render_context + 0x58) + 0xc;
    }
    else {
      // 处理缩放的四边形绘制
      RenderingSystem_ProcessRectangleArea(0, vertex_data_1, vertex_data_2, quad_scale, render_params);
      RenderingSystem_ProcessVertexIndexBuffer(render_context, *(undefined8 *)(render_context + 0x88), *(undefined4 *)(render_context + 0x80), render_flags);
      *(undefined4 *)(render_context + 0x80) = 0;
    }
  }
  return;
}



// 函数: void FUN_180293fc5(undefined8 param_1,undefined8 param_2)
void RenderingSystem_QuadBatchProcess(undefined8 batch_size, undefined8 vertex_count)

{
  undefined4 vertex_data_1;
  undefined4 vertex_data_1_b;
  undefined4 vertex_data_1_c;
  undefined4 vertex_data_1_d;
  undefined4 vertex_data_1_e;
  undefined4 vertex_data_1_f;
  short index_value;
  longlong data_offset;
  longlong render_context;
  undefined8 *vertex_ptr_1;
  undefined8 *vertex_ptr_2;
  undefined4 render_flags;
  
  // 初始化四边形批处理
  FUN_1802921e0(batch_size, vertex_count, (int)vertex_count + -2);
  index_value = *(short *)(render_context + 0x48);
  vertex_data_1 = *(undefined4 *)vertex_ptr_2;
  vertex_data_1_b = *(undefined4 *)((longlong)vertex_ptr_1 + 4);
  vertex_data_1_c = *(undefined4 *)vertex_ptr_1;
  vertex_data_1_d = (*(undefined4 **)(render_context + 0x38))[1];
  vertex_data_1_e = **(undefined4 **)(render_context + 0x38);
  vertex_data_1_f = *(undefined4 *)((longlong)vertex_ptr_2 + 4);
  // 设置四边形索引
  **(short **)(render_context + 0x58) = index_value;
  *(short *)(*(longlong *)(render_context + 0x58) + 2) = index_value + 1;
  *(short *)(*(longlong *)(render_context + 0x58) + 4) = index_value + 2;
  *(short *)(*(longlong *)(render_context + 0x58) + 6) = index_value;
  *(short *)(*(longlong *)(render_context + 0x58) + 8) = index_value + 2;
  *(short *)(*(longlong *)(render_context + 0x58) + 10) = index_value + 3;
  // 处理四边形顶点数据
  **(undefined8 **)(render_context + 0x50) = *vertex_ptr_1;
  data_offset = *(longlong *)(render_context + 0x50);
  *(undefined4 *)(data_offset + 8) = vertex_data_1_e;
  *(undefined4 *)(data_offset + 0xc) = vertex_data_1_d;
  *(undefined4 *)(*(longlong *)(render_context + 0x50) + 0x10) = render_flags;
  data_offset = *(longlong *)(render_context + 0x50);
  *(undefined4 *)(data_offset + 0x14) = vertex_data_1;
  *(undefined4 *)(data_offset + 0x18) = vertex_data_1_b;
  data_offset = *(longlong *)(render_context + 0x50);
  *(undefined4 *)(data_offset + 0x1c) = vertex_data_1_e;
  *(undefined4 *)(data_offset + 0x20) = vertex_data_1_d;
  *(undefined4 *)(*(longlong *)(render_context + 0x50) + 0x24) = render_flags;
  *(undefined8 *)(*(longlong *)(render_context + 0x50) + 0x28) = *vertex_ptr_2;
  data_offset = *(longlong *)(render_context + 0x50);
  *(undefined4 *)(data_offset + 0x30) = vertex_data_1_e;
  *(undefined4 *)(data_offset + 0x34) = vertex_data_1_d;
  *(undefined4 *)(*(longlong *)(render_context + 0x50) + 0x38) = render_flags;
  data_offset = *(longlong *)(render_context + 0x50);
  *(undefined4 *)(data_offset + 0x3c) = vertex_data_1_c;
  *(undefined4 *)(data_offset + 0x40) = vertex_data_1_f;
  data_offset = *(longlong *)(render_context + 0x50);
  *(undefined4 *)(data_offset + 0x44) = vertex_data_1_e;
  *(undefined4 *)(data_offset + 0x48) = vertex_data_1_d;
  *(undefined4 *)(*(longlong *)(render_context + 0x50) + 0x4c) = render_flags;
  *(longlong *)(render_context + 0x50) = *(longlong *)(render_context + 0x50) + 0x50;
  *(int *)(render_context + 0x48) = *(int *)(render_context + 0x48) + 4;
  *(longlong *)(render_context + 0x58) = *(longlong *)(render_context + 0x58) + 0xc;
  return;
}



// 函数: void FUN_1802940cd(void)
// 功能: 渲染系统空操作函数5
void RenderingSystem_NoOperation5(void)

{
  // 空操作函数
  return;
}



// 函数: void FUN_1802940f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
void RenderingSystem_TriangleBatchProcess(longlong render_context, undefined8 vertex_data_1, undefined8 vertex_data_2, undefined8 vertex_data_3,
                                           uint render_flags)

{
  if ((render_flags & 0xff000000) != 0) {
    FUN_18011d9a0(render_context + 0x80);
    FUN_18011d9a0(render_context + 0x80, vertex_data_2);
    FUN_18011d9a0(render_context + 0x80, vertex_data_3);
    RenderingSystem_ProcessVertexIndexBuffer(render_context, *(undefined8 *)(render_context + 0x88), *(undefined4 *)(render_context + 0x80), render_flags);
    *(undefined4 *)(render_context + 0x80) = 0;
  }
  return;
}



// 函数: void FUN_180294117(void)
// 功能: 渲染系统三角形批处理变体函数
void RenderingSystem_TriangleBatchProcessVariant(void)

{
  longlong render_context;
  
  FUN_18011d9a0();
  FUN_18011d9a0(render_context + 0x80);
  FUN_18011d9a0(render_context + 0x80);
  RenderingSystem_ProcessVertexIndexBuffer();
  *(undefined4 *)(render_context + 0x80) = 0;
  return;
}



// 函数: void FUN_180294169(void)
// 功能: 渲染系统空操作函数6
void RenderingSystem_NoOperation6(void)

{
  // 空操作函数
  return;
}



// 函数: void FUN_180294180(longlong param_1,undefined8 param_2,float param_3,uint param_4,undefined8 param_5
void RenderingSystem_CircleDrawingProcess(longlong render_context, undefined8 circle_data, undefined8 center_point, undefined8 radius_data,
                                         uint render_flags)

{
  if ((render_flags & 0xff000000) != 0) {
    RenderingSystem_ScaleAndInitialize(0x40bc7edd, circle_data, radius_data - 0.5, 0, 0x40bc7edd, 0xf);
    FUN_1802923e0(render_context, *(undefined8 *)(render_context + 0x88), *(undefined4 *)(render_context + 0x80), render_flags, 1,
                  render_flags);
    *(undefined4 *)(render_context + 0x80) = 0;
  }
  return;
}



// 函数: void FUN_180294200(longlong param_1,longlong param_2,float param_3,undefined8 *param_4,uint param_5,
void RenderingSystem_TextDrawingProcess(longlong render_context, longlong font_data, float font_size, undefined8 *text_data, uint text_flags,
                                       longlong text_length, longlong text_buffer, undefined4 text_color, float *text_position)

{
  undefined8 *texture_ptr;
  undefined8 stack_data_1;
  undefined8 stack_data_2;
  
  if ((text_flags & 0xff000000) != 0) {
    if (text_length == 0) {
      text_length = -1;
      do {
        text_length = text_length + 1;
      } while (*(char *)(text_buffer + text_length) != '\0');
      text_length = text_length + text_buffer;
    }
    if (text_buffer != text_length) {
      if (font_data == 0) {
        font_data = *(longlong *)(*(longlong *)(render_context + 0x38) + 8);
      }
      if (font_size == 0.0) {
        font_size = *(float *)(*(longlong *)(render_context + 0x38) + 0x10);
      }
      texture_ptr = (undefined8 *)
               (*(longlong *)(render_context + 0x68) + -0x10 + (longlong)*(int *)(render_context + 0x60) * 0x10);
      stack_data_1 = *texture_ptr;
      stack_data_2 = texture_ptr[1];
      if (text_position != (float *)0x0) {
        // 调整文本位置边界
        if ((float)stack_data_1 < *text_position) {
          stack_data_1._4_4_ = (float)((ulonglong)stack_data_1 >> 0x20);
          stack_data_1 = CONCAT44(stack_data_1._4_4_, *text_position);
        }
        if (stack_data_1._4_4_ < text_position[1]) {
          stack_data_1 = CONCAT44(text_position[1], (float)stack_data_1);
        }
        if (text_position[2] <= (float)stack_data_2) {
          stack_data_2._4_4_ = (float)((ulonglong)stack_data_2 >> 0x20);
          stack_data_2 = CONCAT44(stack_data_2._4_4_, text_position[2]);
        }
        if (text_position[3] <= stack_data_2._4_4_) {
          stack_data_2 = CONCAT44(text_position[3], (float)stack_data_2);
        }
      }
      // 执行文本渲染
      FUN_180297590(font_data, render_context, font_size, *text_data, text_flags, &stack_data_1, text_buffer, text_length, text_color,
                    text_position != (float *)0x0);
    }
  }
  return;
}



// 函数: void FUN_180294330(longlong param_1,undefined8 *param_2,uint param_3,longlong param_4)
void RenderingSystem_TextBatchProcess(longlong render_context, undefined8 *text_data, uint text_flags, longlong text_buffer)

{
  undefined4 *texture_ptr;
  longlong data_offset;
  undefined4 stack_data_1;
  undefined4 stack_data_2;
  undefined4 stack_data_3;
  undefined4 stack_data_4;
  
  if ((text_flags & 0xff000000) != 0) {
    data_offset = -1;
    do {
      data_offset = data_offset + 1;
    } while (*(char *)(text_buffer + data_offset) != '\0');
    if (text_buffer != data_offset + text_buffer) {
      texture_ptr = (undefined4 *)
               (*(longlong *)(render_context + 0x68) + -0x10 + (longlong)*(int *)(render_context + 0x60) * 0x10);
      stack_data_1 = *texture_ptr;
      stack_data_2 = texture_ptr[1];
      stack_data_3 = texture_ptr[2];
      stack_data_4 = texture_ptr[3];
      FUN_180297590(*(undefined8 *)(*(longlong *)(render_context + 0x38) + 8), render_context,
                    *(undefined4 *)(*(longlong *)(render_context + 0x38) + 0x10), *text_data, text_flags,
                    &stack_data_1, text_buffer, data_offset + text_buffer, 0, 0);
    }
  }
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address