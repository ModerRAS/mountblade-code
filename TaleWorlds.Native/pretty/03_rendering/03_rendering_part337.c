#include "TaleWorlds.Native.Split.h"

// 03_rendering_part337.c - 渲染系统高级参数处理和渲染控制模块
// 包含11个核心函数，涵盖渲染参数处理、状态管理、数据转换、内存分配等高级渲染功能

/**
 * 渲染系统高级参数处理函数（8参数版本）
 * 
 * 该函数处理复杂的渲染参数，包括顶点数据、纹理坐标、法线向量等。
 * 主要功能包括：
 * 1. 初始化渲染上下文和参数
 * 2. 处理多个顶点数据集
 * 3. 管理渲染对象的内存分配
 * 4. 执行高级渲染操作
 * 
 * @param render_context 渲染上下文指针
 * @param vertex_data1 顶点数据数组1
 * @param vertex_data2 顶点数据数组2
 * @param texture_coords 纹理坐标数据
 * @param param5 渲染参数5
 * @param param6 渲染参数6
 * @param param7 渲染参数7
 * @param render_flags 渲染标志位
 */
void rendering_system_advanced_param_processing_8args(longlong *render_context, undefined4 *vertex_data1, undefined4 *vertex_data2, undefined8 *texture_coords,
                  undefined8 param5, undefined8 param6, undefined8 param7, undefined4 render_flags)

{
  longlong *render_object_ptr;
  undefined4 *texture_ptr;
  undefined8 *vertex_ptr;
  int vertex_count;
  int data_index;
  undefined8 texture_data;
  longlong *object_data_ptr;
  undefined4 color_value;
  undefined4 normal_value;
  undefined4 position_value;
  int buffer_index;
  int buffer_size;
  longlong *stack_render_object;
  longlong *stack_buffer_ptr;
  longlong *stack_context_ptr;
  longlong stack_array [3];
  longlong *stack_allocator;
  char cleanup_flag1;
  char cleanup_flag2;
  char cleanup_flag3;
  longlong *stack_data_ptr;
  undefined8 stack_param1;
  undefined8 stack_param2;
  undefined8 stack_param3;
  undefined4 stack_color_r;
  undefined4 stack_color_g;
  undefined4 stack_color_b;
  undefined4 stack_color_a;
  undefined8 stack_texture_data;
  longlong *stack_vertex_ptr;
  
  // 初始化栈参数和渲染对象
  stack_texture_data = 0xfffffffffffffffe;
  stack_vertex_ptr = render_context;
  if (render_context != (longlong *)0x0) {
    // 调用渲染上下文的初始化函数
    (**(code **)(*render_context + 0x28))();
    stack_render_object = (longlong *)CONCAT44(stack_render_object._4_4_,render_flags);
    stack_param3 = param7;
    stack_param2 = param6;
    stack_param1 = param5;
    stack_data_ptr = render_context;
    (**(code **)(*render_context + 0x28))();
    
    // 初始化缓冲区指针和数组
    stack_buffer_ptr = (longlong *)0x0;
    stack_context_ptr = (longlong *)0x0;
    stack_data_ptr = stack_array;
    stack_allocator = (longlong *)0x0;
    stack_array[1] = 0;
    stack_array[0]._0_1_ = 0;
    
    // 创建渲染对象
    create_rendering_object(&stack_buffer_ptr, render_context, 0);
    (**(code **)(*render_context + 0x38))(render_context);
    
    render_object_ptr = stack_context_ptr;
    vertex_count = (int)stack_context_ptr[2];
    stack_data_ptr = (longlong *)CONCAT44(stack_data_ptr._4_4_,vertex_count);
    buffer_size = vertex_count + 1;
    data_index = *(int *)((longlong)stack_context_ptr + 0x14);
    
    // 检查并扩展缓冲区大小
    if (data_index < buffer_size) {
      if (data_index < 2) {
        *(undefined4 *)((longlong)stack_context_ptr + 0x14) = 8;
      }
      else {
        *(int *)((longlong)stack_context_ptr + 0x14) = (data_index >> 1) + data_index;
      }
      resize_render_buffer(stack_context_ptr + 2);
    }
    *(int *)(render_object_ptr + 2) = buffer_size;
    
    // 处理第一个顶点数据集
    color_value = vertex_data1[1];
    normal_value = vertex_data1[2];
    position_value = vertex_data1[3];
    texture_ptr = (undefined4 *)(stack_context_ptr[3] + (longlong)vertex_count * 0x10);
    *texture_ptr = *vertex_data1;
    texture_ptr[1] = color_value;
    texture_ptr[2] = normal_value;
    texture_ptr[3] = position_value;
    
    // 处理附加数据（如果启用）
    render_object_ptr = stack_context_ptr + 7;
    if ((int)*render_object_ptr != 0) {
      data_index = *(int *)((longlong)stack_context_ptr + 0x3c);
      if (data_index < buffer_size) {
        if (data_index < 2) {
          *(undefined4 *)((longlong)stack_context_ptr + 0x3c) = 8;
        }
        else {
          *(int *)((longlong)stack_context_ptr + 0x3c) = (data_index >> 1) + data_index;
        }
        resize_render_buffer(render_object_ptr);
      }
      *(int *)render_object_ptr = buffer_size;
      color_value = vertex_data1[1];
      normal_value = vertex_data1[2];
      position_value = vertex_data1[3];
      texture_ptr = (undefined4 *)(stack_context_ptr[8] + (longlong)vertex_count * 0x10);
      *texture_ptr = *vertex_data1;
      texture_ptr[1] = color_value;
      texture_ptr[2] = normal_value;
      texture_ptr[3] = position_value;
    }
    
    // 设置清理标志
    cleanup_flag1 = 1;
    cleanup_flag3 = 1;
    render_object_ptr = stack_context_ptr + 2;
    vertex_count = (int)*render_object_ptr;
    buffer_size = vertex_count + 1;
    data_index = *(int *)((longlong)stack_context_ptr + 0x14);
    
    // 再次检查并扩展缓冲区
    if (data_index < buffer_size) {
      if (data_index < 2) {
        *(undefined4 *)((longlong)stack_context_ptr + 0x14) = 8;
      }
      else {
        *(int *)((longlong)stack_context_ptr + 0x14) = (data_index >> 1) + data_index;
      }
      resize_render_buffer(render_object_ptr);
    }
    *(int *)render_object_ptr = buffer_size;
    
    // 处理第二个顶点数据集
    color_value = vertex_data2[1];
    normal_value = vertex_data2[2];
    position_value = vertex_data2[3];
    texture_ptr = (undefined4 *)(stack_context_ptr[3] + (longlong)vertex_count * 0x10);
    *texture_ptr = *vertex_data2;
    texture_ptr[1] = color_value;
    texture_ptr[2] = normal_value;
    texture_ptr[3] = position_value;
    
    // 处理附加数据（如果启用）
    render_object_ptr = stack_context_ptr + 7;
    if ((int)*render_object_ptr != 0) {
      data_index = *(int *)((longlong)stack_context_ptr + 0x3c);
      if (data_index < buffer_size) {
        if (data_index < 2) {
          *(undefined4 *)((longlong)stack_context_ptr + 0x3c) = 8;
        }
        else {
          *(int *)((longlong)stack_context_ptr + 0x3c) = (data_index >> 1) + data_index;
        }
        resize_render_buffer(render_object_ptr);
      }
      *(int *)render_object_ptr = buffer_size;
      color_value = vertex_data2[1];
      normal_value = vertex_data2[2];
      position_value = vertex_data2[3];
      texture_ptr = (undefined4 *)(stack_context_ptr[8] + (longlong)vertex_count * 0x10);
      *texture_ptr = *vertex_data2;
      texture_ptr[1] = color_value;
      texture_ptr[2] = normal_value;
      texture_ptr[3] = position_value;
    }
    
    // 设置清理标志
    cleanup_flag1 = 1;
    cleanup_flag3 = 1;
    render_object_ptr = stack_context_ptr + 2;
    data_index = (int)*render_object_ptr;
    buffer_index = data_index + 1;
    buffer_size = *(int *)((longlong)stack_context_ptr + 0x14);
    
    // 检查并扩展缓冲区
    if (buffer_size < buffer_index) {
      if (buffer_size < 2) {
        *(undefined4 *)((longlong)stack_context_ptr + 0x14) = 8;
      }
      else {
        *(int *)((longlong)stack_context_ptr + 0x14) = (buffer_size >> 1) + buffer_size;
      }
      resize_render_buffer(render_object_ptr);
    }
    object_data_ptr = stack_context_ptr;
    *(int *)render_object_ptr = buffer_index;
    
    // 处理纹理坐标数据
    color_value = *(undefined4 *)((longlong)texture_coords + 4);
    normal_value = *(undefined4 *)(texture_coords + 1);
    position_value = *(undefined4 *)((longlong)texture_coords + 0xc);
    texture_ptr = (undefined4 *)(stack_context_ptr[3] + (longlong)data_index * 0x10);
    *texture_ptr = *(undefined4 *)texture_coords;
    texture_ptr[1] = color_value;
    texture_ptr[2] = normal_value;
    texture_ptr[3] = position_value;
    
    // 处理附加纹理数据（如果启用）
    if ((int)stack_context_ptr[7] != 0) {
      buffer_size = *(int *)((longlong)stack_context_ptr + 0x3c);
      if (buffer_size < buffer_index) {
        if (buffer_size < 2) {
          *(undefined4 *)((longlong)stack_context_ptr + 0x3c) = 8;
        }
        else {
          *(int *)((longlong)stack_context_ptr + 0x3c) = (buffer_size >> 1) + buffer_size;
        }
        resize_render_buffer(stack_context_ptr + 7);
      }
      *(int *)(object_data_ptr + 7) = buffer_index;
      texture_data = texture_coords[1];
      vertex_ptr = (undefined8 *)(stack_context_ptr[8] + (longlong)data_index * 0x10);
      *vertex_ptr = *texture_coords;
      vertex_ptr[1] = texture_data;
    }
    
    // 设置最终的清理标志
    cleanup_flag1 = '\x01';
    cleanup_flag3 = '\x01';
    stack_color_r = 0;
    stack_color_g = 0;
    stack_color_b = 0x3f800000;  // 1.0f
    stack_color_a = 0x7f7fffff; // 最大浮点值
    
    // 执行高级渲染操作
    color_value = execute_rendering_operation(&stack_buffer_ptr, (ulonglong)stack_data_ptr & 0xffffffff, &stack_param1, &stack_render_object, &stack_color_r);
    normal_value = execute_rendering_operation(&stack_buffer_ptr, vertex_count, &stack_param2, &stack_render_object, &stack_color_r);
    position_value = execute_rendering_operation(&stack_buffer_ptr, data_index, &stack_param3, &stack_render_object, &stack_color_r);
    finalize_rendering_operation(&stack_buffer_ptr, color_value, normal_value, position_value);
    
    // 清理资源
    if ((stack_buffer_ptr != (longlong *)0x0) && (stack_context_ptr != (longlong *)0x0)) {
      if (cleanup_flag3 != '\0') {
        cleanup_rendering_resources();
      }
      cleanup_rendering_array(stack_array);
      if (cleanup_flag1 != '\0') {
        release_rendering_object(stack_buffer_ptr);
      }
      if (cleanup_flag2 != '\0') {
        release_rendering_object(stack_buffer_ptr);
      }
      render_object_ptr = stack_context_ptr;
      stack_render_object = stack_context_ptr;
      stack_context_ptr = (longlong *)0x0;
      if (render_object_ptr != (longlong *)0x0) {
        (**(code **)(*render_object_ptr + 0x38))();
      }
    }
    
    // 最终清理
    stack_render_object = stack_array;
    cleanup_rendering_array(stack_array);
    if (stack_allocator != (longlong *)0x0) {
      (**(code **)(*stack_allocator + 0x38))();
    }
    if (stack_context_ptr != (longlong *)0x0) {
      (**(code **)(*stack_context_ptr + 0x38))();
    }
    if (stack_buffer_ptr != (longlong *)0x0) {
      (**(code **)(*stack_buffer_ptr + 0x38))();
    }
  }
  
  // 清理渲染上下文
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x38))(render_context);
  }
  return;
}

/**
 * 渲染系统高级参数处理函数（7参数版本）
 * 
 * 该函数处理复杂的渲染参数，包括顶点数据、纹理坐标、法线向量等。
 * 主要功能包括：
 * 1. 初始化渲染上下文和参数
 * 2. 处理多个顶点数据集
 * 3. 管理渲染对象的内存分配
 * 4. 执行高级渲染操作
 * 
 * @param render_context 渲染上下文指针
 * @param vertex_data1 顶点数据数组1
 * @param vertex_data2 顶点数据数组2
 * @param texture_coords 纹理坐标数据
 * @param param5 渲染参数5
 * @param param6 渲染参数6
 * @param render_flags 渲染标志位
 */
void rendering_system_advanced_param_processing_7args(longlong *render_context, undefined4 *vertex_data1, undefined4 *vertex_data2, undefined8 *texture_coords,
                  undefined8 param5, undefined8 param6, undefined4 render_flags)

{
  longlong *render_object_ptr;
  undefined4 *texture_ptr;
  undefined8 *vertex_ptr;
  int vertex_count;
  int data_index;
  undefined8 texture_data;
  longlong *object_data_ptr;
  undefined4 color_value;
  undefined4 normal_value;
  undefined4 position_value;
  int buffer_index;
  int buffer_size;
  longlong *stack_render_object;
  longlong *stack_buffer_ptr;
  longlong *stack_context_ptr;
  longlong stack_array [3];
  longlong *stack_allocator;
  char cleanup_flag1;
  char cleanup_flag2;
  char cleanup_flag3;
  longlong *stack_data_ptr;
  undefined8 stack_param1;
  undefined8 stack_param2;
  undefined8 stack_param3;
  undefined4 stack_color_r;
  undefined4 stack_color_g;
  undefined4 stack_color_b;
  undefined4 stack_color_a;
  undefined8 stack_texture_data;
  longlong *stack_vertex_ptr;
  
  // 初始化栈参数和渲染对象
  stack_texture_data = 0xfffffffffffffffe;
  stack_vertex_ptr = render_context;
  if (render_context != (longlong *)0x0) {
    // 调用渲染上下文的初始化函数
    (**(code **)(*render_context + 0x28))();
    stack_render_object = (longlong *)CONCAT44(stack_render_object._4_4_,render_flags);
    stack_param3 = 0;
    stack_param2 = param6;
    stack_param1 = param5;
    stack_data_ptr = render_context;
    (**(code **)(*render_context + 0x28))();
    
    // 初始化缓冲区指针和数组
    stack_buffer_ptr = (longlong *)0x0;
    stack_context_ptr = (longlong *)0x0;
    stack_data_ptr = stack_array;
    stack_allocator = (longlong *)0x0;
    stack_array[1] = 0;
    stack_array[0]._0_1_ = 0;
    
    // 创建渲染对象
    create_rendering_object(&stack_buffer_ptr, render_context, 0);
    (**(code **)(*render_context + 0x38))(render_context);
    
    render_object_ptr = stack_context_ptr;
    vertex_count = (int)stack_context_ptr[2];
    stack_data_ptr = (longlong *)CONCAT44(stack_data_ptr._4_4_,vertex_count);
    buffer_size = vertex_count + 1;
    data_index = *(int *)((longlong)stack_context_ptr + 0x14);
    
    // 检查并扩展缓冲区大小
    if (data_index < buffer_size) {
      if (data_index < 2) {
        *(undefined4 *)((longlong)stack_context_ptr + 0x14) = 8;
      }
      else {
        *(int *)((longlong)stack_context_ptr + 0x14) = (data_index >> 1) + data_index;
      }
      resize_render_buffer(stack_context_ptr + 2);
    }
    *(int *)(render_object_ptr + 2) = buffer_size;
    
    // 处理第一个顶点数据集
    color_value = vertex_data1[1];
    normal_value = vertex_data1[2];
    position_value = vertex_data1[3];
    texture_ptr = (undefined4 *)(stack_context_ptr[3] + (longlong)vertex_count * 0x10);
    *texture_ptr = *vertex_data1;
    texture_ptr[1] = color_value;
    texture_ptr[2] = normal_value;
    texture_ptr[3] = position_value;
    
    // 处理附加数据（如果启用）
    render_object_ptr = stack_context_ptr + 7;
    if ((int)*render_object_ptr != 0) {
      data_index = *(int *)((longlong)stack_context_ptr + 0x3c);
      if (data_index < buffer_size) {
        if (data_index < 2) {
          *(undefined4 *)((longlong)stack_context_ptr + 0x3c) = 8;
        }
        else {
          *(int *)((longlong)stack_context_ptr + 0x3c) = (data_index >> 1) + data_index;
        }
        resize_render_buffer(render_object_ptr);
      }
      *(int *)render_object_ptr = buffer_size;
      color_value = vertex_data1[1];
      normal_value = vertex_data1[2];
      position_value = vertex_data1[3];
      texture_ptr = (undefined4 *)(stack_context_ptr[8] + (longlong)vertex_count * 0x10);
      *texture_ptr = *vertex_data1;
      texture_ptr[1] = color_value;
      texture_ptr[2] = normal_value;
      texture_ptr[3] = position_value;
    }
    
    // 设置清理标志
    cleanup_flag1 = 1;
    cleanup_flag3 = 1;
    render_object_ptr = stack_context_ptr + 2;
    vertex_count = (int)*render_object_ptr;
    buffer_size = vertex_count + 1;
    data_index = *(int *)((longlong)stack_context_ptr + 0x14);
    
    // 再次检查并扩展缓冲区
    if (data_index < buffer_size) {
      if (data_index < 2) {
        *(undefined4 *)((longlong)stack_context_ptr + 0x14) = 8;
      }
      else {
        *(int *)((longlong)stack_context_ptr + 0x14) = (data_index >> 1) + data_index;
      }
      resize_render_buffer(render_object_ptr);
    }
    *(int *)render_object_ptr = buffer_size;
    
    // 处理第二个顶点数据集
    color_value = vertex_data2[1];
    normal_value = vertex_data2[2];
    position_value = vertex_data2[3];
    texture_ptr = (undefined4 *)(stack_context_ptr[3] + (longlong)vertex_count * 0x10);
    *texture_ptr = *vertex_data2;
    texture_ptr[1] = color_value;
    texture_ptr[2] = normal_value;
    texture_ptr[3] = position_value;
    
    // 处理附加数据（如果启用）
    render_object_ptr = stack_context_ptr + 7;
    if ((int)*render_object_ptr != 0) {
      data_index = *(int *)((longlong)stack_context_ptr + 0x3c);
      if (data_index < buffer_size) {
        if (data_index < 2) {
          *(undefined4 *)((longlong)stack_context_ptr + 0x3c) = 8;
        }
        else {
          *(int *)((longlong)stack_context_ptr + 0x3c) = (data_index >> 1) + data_index;
        }
        resize_render_buffer(render_object_ptr);
      }
      *(int *)render_object_ptr = buffer_size;
      color_value = vertex_data2[1];
      normal_value = vertex_data2[2];
      position_value = vertex_data2[3];
      texture_ptr = (undefined4 *)(stack_context_ptr[8] + (longlong)vertex_count * 0x10);
      *texture_ptr = *vertex_data2;
      texture_ptr[1] = color_value;
      texture_ptr[2] = normal_value;
      texture_ptr[3] = position_value;
    }
    
    // 设置清理标志
    cleanup_flag1 = 1;
    cleanup_flag3 = 1;
    render_object_ptr = stack_context_ptr + 2;
    data_index = (int)*render_object_ptr;
    buffer_index = data_index + 1;
    buffer_size = *(int *)((longlong)stack_context_ptr + 0x14);
    
    // 检查并扩展缓冲区
    if (buffer_size < buffer_index) {
      if (buffer_size < 2) {
        *(undefined4 *)((longlong)stack_context_ptr + 0x14) = 8;
      }
      else {
        *(int *)((longlong)stack_context_ptr + 0x14) = (buffer_size >> 1) + buffer_size;
      }
      resize_render_buffer(render_object_ptr);
    }
    object_data_ptr = stack_context_ptr;
    *(int *)render_object_ptr = buffer_index;
    
    // 处理纹理坐标数据
    color_value = *(undefined4 *)((longlong)texture_coords + 4);
    normal_value = *(undefined4 *)(texture_coords + 1);
    position_value = *(undefined4 *)((longlong)texture_coords + 0xc);
    texture_ptr = (undefined4 *)(stack_context_ptr[3] + (longlong)data_index * 0x10);
    *texture_ptr = *(undefined4 *)texture_coords;
    texture_ptr[1] = color_value;
    texture_ptr[2] = normal_value;
    texture_ptr[3] = position_value;
    
    // 处理附加纹理数据（如果启用）
    if ((int)stack_context_ptr[7] != 0) {
      buffer_size = *(int *)((longlong)stack_context_ptr + 0x3c);
      if (buffer_size < buffer_index) {
        if (buffer_size < 2) {
          *(undefined4 *)((longlong)stack_context_ptr + 0x3c) = 8;
        }
        else {
          *(int *)((longlong)stack_context_ptr + 0x3c) = (buffer_size >> 1) + buffer_size;
        }
        resize_render_buffer(stack_context_ptr + 7);
      }
      *(int *)(object_data_ptr + 7) = buffer_index;
      texture_data = texture_coords[1];
      vertex_ptr = (undefined8 *)(stack_context_ptr[8] + (longlong)data_index * 0x10);
      *vertex_ptr = *texture_coords;
      vertex_ptr[1] = texture_data;
    }
    
    // 设置最终的清理标志
    cleanup_flag1 = '\x01';
    cleanup_flag3 = '\x01';
    stack_color_r = 0;
    stack_color_g = 0;
    stack_color_b = 0x3f800000;  // 1.0f
    stack_color_a = 0x7f7fffff; // 最大浮点值
    
    // 执行高级渲染操作
    color_value = execute_rendering_operation(&stack_buffer_ptr, (ulonglong)stack_data_ptr & 0xffffffff, &stack_param1, &stack_render_object, &stack_color_r);
    normal_value = execute_rendering_operation(&stack_buffer_ptr, vertex_count, &stack_param2, &stack_render_object, &stack_color_r);
    position_value = execute_rendering_operation(&stack_buffer_ptr, data_index, &stack_param3, &stack_render_object, &stack_color_r);
    finalize_rendering_operation(&stack_buffer_ptr, color_value, normal_value, position_value);
    
    // 清理资源
    if ((stack_buffer_ptr != (longlong *)0x0) && (stack_context_ptr != (longlong *)0x0)) {
      if (cleanup_flag3 != '\0') {
        cleanup_rendering_resources();
      }
      cleanup_rendering_array(stack_array);
      if (cleanup_flag1 != '\0') {
        release_rendering_object(stack_buffer_ptr);
      }
      if (cleanup_flag2 != '\0') {
        release_rendering_object(stack_buffer_ptr);
      }
      render_object_ptr = stack_context_ptr;
      stack_render_object = stack_context_ptr;
      stack_context_ptr = (longlong *)0x0;
      if (render_object_ptr != (longlong *)0x0) {
        (**(code **)(*render_object_ptr + 0x38))();
      }
    }
    
    // 最终清理
    stack_render_object = stack_array;
    cleanup_rendering_array(stack_array);
    if (stack_allocator != (longlong *)0x0) {
      (**(code **)(*stack_allocator + 0x38))();
    }
    if (stack_context_ptr != (longlong *)0x0) {
      (**(code **)(*stack_context_ptr + 0x38))();
    }
    if (stack_buffer_ptr != (longlong *)0x0) {
      (**(code **)(*stack_buffer_ptr + 0x38))();
    }
  }
  
  // 清理渲染上下文
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x38))(render_context);
  }
  return;
}

/**
 * 渲染系统状态标志设置函数（偏移0xfb）
 * 
 * 该函数设置渲染上下文中特定偏移位置的状态标志。
 * 主要功能包括：
 * 1. 检查渲染上下文有效性
 * 2. 初始化渲染上下文
 * 3. 设置状态标志位
 * 4. 释放渲染对象资源
 * 
 * @param render_context 渲染上下文指针
 */
void rendering_system_set_status_flag_offset_fb(longlong *render_context)

{
  if ((render_context != (longlong *)0x0) &&
     ((**(code **)(*render_context + 0x28))(), *(char *)((longlong)render_context + 0xfb) != '\x01')) {
    *(undefined1 *)((longlong)render_context + 0xfb) = 1;
    release_rendering_object(render_context);
  }
  if (render_context == (longlong *)0x0) {
    return;
  }
  // WARNING: Could not recover jumptable at 0x000180448de1. Too many branches
  // WARNING: Treating indirect jump as call
  (**(code **)(*render_context + 0x38))(render_context);
  return;
}

/**
 * 渲染系统状态标志设置函数（偏移0xfa）
 * 
 * 该函数设置渲染上下文中特定偏移位置的状态标志。
 * 主要功能包括：
 * 1. 检查渲染上下文有效性
 * 2. 初始化渲染上下文
 * 3. 设置状态标志位
 * 4. 释放渲染对象资源
 * 
 * @param render_context 渲染上下文指针
 */
void rendering_system_set_status_flag_offset_fa(longlong *render_context)

{
  if ((render_context != (longlong *)0x0) &&
     ((**(code **)(*render_context + 0x28))(), *(char *)((longlong)render_context + 0xfa) != '\x01')) {
    *(undefined1 *)((longlong)render_context + 0xfa) = 1;
    release_rendering_object(render_context);
  }
  if (render_context == (longlong *)0x0) {
    return;
  }
  // WARNING: Could not recover jumptable at 0x000180448e41. Too many branches
  // WARNING: Treating indirect jump as call
  (**(code **)(*render_context + 0x38))(render_context);
  return;
}

/**
 * 渲染系统资源清理函数
 * 
 * 该函数清理渲染系统资源并执行相关操作。
 * 主要功能包括：
 * 1. 检查渲染上下文有效性
 * 2. 初始化渲染上下文
 * 3. 清理渲染资源
 * 4. 释放渲染对象
 * 
 * @param render_context 渲染上下文指针
 */
void rendering_system_cleanup_resources(longlong *render_context)

{
  if (render_context == (longlong *)0x0) {
    return;
  }
  (**(code **)(*render_context + 0x28))();
  cleanup_rendering_resources(render_context);
  // WARNING: Could not recover jumptable at 0x000180448e91. Too many branches
  // WARNING: Treating indirect jump as call
  (**(code **)(*render_context + 0x38))(render_context);
  return;
}

/**
 * 渲染系统状态标志获取函数（偏移0xf7）
 * 
 * 该函数获取渲染上下文中特定偏移位置的状态标志。
 * 主要功能包括：
 * 1. 检查渲染上下文有效性
 * 2. 初始化渲染上下文
 * 3. 读取状态标志位
 * 4. 释放渲染对象
 * 
 * @param render_context 渲染上下文指针
 * @return 状态标志值
 */
undefined1 rendering_system_get_status_flag_offset_f7(longlong *render_context)

{
  undefined1 status_flag;
  
  if (render_context == (longlong *)0x0) {
    status_flag = 0;
  }
  else {
    (**(code **)(*render_context + 0x28))();
    status_flag = *(undefined1 *)((longlong)render_context + 0xf7);
    (**(code **)(*render_context + 0x38))(render_context);
  }
  return status_flag;
}

/**
 * 渲染系统状态标志设置函数（偏移0xf7）
 * 
 * 该函数设置渲染上下文中特定偏移位置的状态标志。
 * 主要功能包括：
 * 1. 检查渲染上下文有效性
 * 2. 初始化渲染上下文
 * 3. 设置状态标志位
 * 4. 释放渲染对象
 * 
 * @param render_context 渲染上下文指针
 * @param flag_value 要设置的标志值
 */
void rendering_system_set_status_flag_offset_f7(longlong *render_context, undefined1 flag_value)

{
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x28))();
    *(undefined1 *)((longlong)render_context + 0xf7) = flag_value;
    (**(code **)(*render_context + 0x38))(render_context);
  }
  return;
}

/**
 * 渲染系统参数获取函数（偏移0x4e）
 * 
 * 该函数获取渲染上下文中特定偏移位置的参数值。
 * 主要功能包括：
 * 1. 检查渲染上下文有效性
 * 2. 初始化渲染上下文
 * 3. 读取参数值
 * 4. 释放渲染对象
 * 
 * @param render_context 渲染上下文指针
 * @return 参数值
 */
undefined4 rendering_system_get_parameter_offset_4e(longlong *render_context)

{
  undefined4 parameter_value;
  
  if (render_context == (longlong *)0x0) {
    parameter_value = 0;
  }
  else {
    (**(code **)(*render_context + 0x28))();
    parameter_value = (undefined4)render_context[0x4e];
    (**(code **)(*render_context + 0x38))(render_context);
  }
  return parameter_value;
}

/**
 * 渲染系统参数设置函数（偏移0x4e）
 * 
 * 该函数设置渲染上下文中特定偏移位置的参数值。
 * 主要功能包括：
 * 1. 检查渲染上下文有效性
 * 2. 初始化渲染上下文
 * 3. 设置参数值
 * 4. 释放渲染对象
 * 
 * @param render_context 渲染上下文指针
 * @param parameter_value 要设置的参数值
 */
void rendering_system_set_parameter_offset_4e(longlong *render_context, undefined4 parameter_value)

{
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x28))();
    *(undefined4 *)(render_context + 0x4e) = parameter_value;
    (**(code **)(*render_context + 0x38))(render_context);
  }
  return;
}

/**
 * 渲染系统高级参数获取函数（偏移0x40）
 * 
 * 该函数获取渲染上下文中特定偏移位置的参数值，可能需要经过函数转换。
 * 主要功能包括：
 * 1. 检查渲染上下文有效性
 * 2. 初始化渲染上下文
 * 3. 根据条件获取参数值
 * 4. 释放渲染对象
 * 
 * @param render_context 渲染上下文指针
 * @return 参数值
 */
undefined4 rendering_system_get_advanced_parameter_offset_40(longlong *render_context)

{
  longlong *parameter_source;
  undefined4 parameter_value;
  
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x28))();
  }
  parameter_value = 0;
  if (render_context != (longlong *)0x0) {
    parameter_source = render_context;
    if ((*(byte *)((longlong)render_context + 0xfd) & 0x20) == 0) {
      parameter_source = (longlong *)func_0x000180085de0(render_context[0x36]);
    }
    parameter_value = (undefined4)parameter_source[0x40];
  }
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x38))(render_context);
  }
  return parameter_value;
}

/**
 * 渲染系统高级参数设置函数
 * 
 * 该函数设置渲染系统中的高级参数值。
 * 主要功能包括：
 * 1. 检查渲染上下文有效性
 * 2. 初始化渲染上下文
 * 3. 创建渲染对象
 * 4. 设置参数值
 * 5. 清理资源
 * 
 * @param render_context 渲染上下文指针
 * @param param_index 参数索引
 * @param parameter_value 要设置的参数值
 */
void rendering_system_set_advanced_parameter(longlong *render_context, int param_index, undefined4 parameter_value)

{
  longlong *render_object_ptr;
  longlong *stack_buffer_ptr;
  longlong *stack_context_ptr;
  undefined1 stack_array [8];
  undefined8 stack_param;
  longlong *stack_allocator;
  char cleanup_flag1;
  char cleanup_flag2;
  char cleanup_flag3;
  
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x28))();
    stack_buffer_ptr = (longlong *)0x0;
    stack_context_ptr = (longlong *)0x0;
    stack_allocator = (longlong *)0x0;
    stack_param = 0;
    stack_array[0] = 0;
    create_rendering_object(&stack_buffer_ptr, render_context, 0);
    *(undefined4 *)((longlong)param_index * 0x5c + 0x54 + stack_context_ptr[0xd]) = parameter_value;
    cleanup_flag1 = '\x01';
    if ((stack_buffer_ptr != (longlong *)0x0) && (stack_context_ptr != (longlong *)0x0)) {
      if (cleanup_flag3 != '\0') {
        cleanup_rendering_resources();
      }
      cleanup_rendering_array(stack_array);
      if (cleanup_flag1 != '\0') {
        release_rendering_object(stack_buffer_ptr);
      }
      if (cleanup_flag2 != '\0') {
        release_rendering_object(stack_buffer_ptr);
      }
      render_object_ptr = stack_context_ptr;
      stack_context_ptr = (longlong *)0x0;
      if (render_object_ptr != (longlong *)0x0) {
        (**(code **)(*render_object_ptr + 0x38))();
      }
    }
    cleanup_rendering_array(stack_array);
    if (stack_allocator != (longlong *)0x0) {
      (**(code **)(*stack_allocator + 0x38))();
    }
    if (stack_context_ptr != (longlong *)0x0) {
      (**(code **)(*stack_context_ptr + 0x38))();
    }
    if (stack_buffer_ptr != (longlong *)0x0) {
      (**(code **)(*stack_buffer_ptr + 0x38))();
    }
  }
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x38))(render_context);
  }
  return;
}

/**
 * 渲染系统参数获取函数（索引访问）
 * 
 * 该函数根据索引获取渲染系统中的参数值。
 * 主要功能包括：
 * 1. 检查渲染上下文有效性
 * 2. 初始化渲染上下文
 * 3. 根据索引获取参数值
 * 4. 释放渲染对象
 * 
 * @param render_context 渲染上下文指针
 * @param param_index 参数索引
 * @return 参数值
 */
undefined4 rendering_system_get_parameter_by_index(longlong *render_context, int param_index)

{
  undefined4 parameter_value;
  
  parameter_value = 0xffffffff;
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x28))();
    parameter_value = *(undefined4 *)((longlong)param_index * 0x5c + 0x54 + *(longlong *)(render_context[0x42] + 0x68));
    (**(code **)(*render_context + 0x38))(render_context);
  }
  return parameter_value;
}

/**
 * 渲染系统高级操作执行函数
 * 
 * 该函数执行渲染系统的高级操作，可能涉及错误处理。
 * 主要功能包括：
 * 1. 检查渲染上下文有效性
 * 2. 初始化渲染上下文
 * 3. 执行高级操作
 * 4. 处理可能的错误情况
 * 
 * @param render_context 渲染上下文指针
 */
void rendering_system_execute_advanced_operation(longlong *render_context)

{
  undefined8 stack_param1;
  undefined4 stack_param2;
  undefined4 stack_param3;
  undefined2 stack_param4;
  undefined1 stack_param5;
  undefined4 stack_param6;
  undefined1 stack_param7;
  undefined8 stack_param8;
  longlong stack_param9;
  undefined8 stack_param10;
  undefined8 stack_param11;
  undefined4 stack_param12;
  undefined8 stack_param13;
  
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x28))();
    stack_param1 = 0;
    stack_param2 = 0;
    stack_param3 = 0xffffffff;
    stack_param4 = 1;
    stack_param5 = 0;
    stack_param6 = 0xffffffff;
    stack_param7 = 1;
    stack_param8 = 0;
    stack_param9 = 0;
    stack_param10 = 0;
    stack_param11 = 0;
    stack_param12 = 3;
    stack_param13 = 0;
    execute_advanced_rendering_operation(render_context, &stack_param1);
    if (stack_param9 != 0) {
      // WARNING: Subroutine does not return
      handle_rendering_error();
    }
  }
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x38))(render_context);
  }
  return;
}

/**
 * 渲染系统高级数据处理函数
 * 
 * 该函数处理渲染系统中的高级数据，包括顶点数据、纹理数据等。
 * 主要功能包括：
 * 1. 内存分配和初始化
 * 2. 顶点数据处理
 * 3. 纹理数据处理
 * 4. 参数数据处理
 * 5. 资源清理
 * 
 * @param output_param 输出参数指针
 * @param param2 参数2
 * @param vertex_data 顶点数据指针
 * @param param4 参数4
 * @param texture_data 纹理数据指针
 * @param param6 参数6
 * @param param7 参数7
 * @return 处理后的数据指针
 */
undefined4 *
rendering_system_process_advanced_data(undefined4 *output_param, int param2, undefined4 *vertex_data, uint param4, undefined4 *texture_data,
             int param6, longlong param7)

{
  int buffer_size1;
  int buffer_size2;
  undefined4 vertex_value1;
  undefined4 vertex_value2;
  longlong *render_object_ptr1;
  longlong *render_object_ptr2;
  undefined4 processed_value;
  undefined8 allocated_memory;
  longlong *render_context_ptr;
  longlong data_counter;
  undefined4 *vertex_ptr;
  ulonglong texture_counter;
  int vertex_index;
  undefined4 stack_temp_array [2];
  undefined4 output_value1;
  undefined4 output_value2;
  undefined4 output_value3;
  longlong *stack_buffer_ptr;
  longlong *stack_context_ptr;
  undefined1 stack_array [8];
  undefined8 stack_param;
  longlong *stack_allocator;
  char cleanup_flag1;
  char cleanup_flag2;
  char cleanup_flag3;
  
  texture_counter = (ulonglong)param4;
  data_counter = (longlong)param2;
  allocated_memory = allocate_rendering_memory(_DAT_180c8ed18, 0x300, 0x10, 3);
  render_context_ptr = (longlong *)initialize_rendering_context(allocated_memory, 1);
  if (render_context_ptr != (longlong *)0x0) {
    (**(code **)(*render_context_ptr + 0x28))(render_context_ptr);
  }
  (**(code **)(render_context_ptr[2] + 0x10))(render_context_ptr + 2, &UNK_180a2a4d0);
  stack_buffer_ptr = (longlong *)0x0;
  stack_context_ptr = (longlong *)0x0;
  stack_allocator = (longlong *)0x0;
  stack_param = 0;
  stack_array[0] = 0;
  create_rendering_object(&stack_buffer_ptr, render_context_ptr, 0);
  if (*(int *)((longlong)stack_context_ptr + 0x14) < param2) {
    buffer_size1 = *(int *)((longlong)stack_context_ptr + 0x14);
    if (buffer_size1 < param2) {
      if (param2 == 0) {
        if (buffer_size1 < 2) {
          *(undefined4 *)((longlong)stack_context_ptr + 0x14) = 8;
        }
        else {
          *(int *)((longlong)stack_context_ptr + 0x14) = (buffer_size1 >> 1) + buffer_size1;
        }
      }
      else {
        *(int *)((longlong)stack_context_ptr + 0x14) = param2;
      }
      resize_render_buffer();
    }
    if (((int)stack_context_ptr[7] != 0) &&
       (buffer_size1 = *(int *)((longlong)stack_context_ptr + 0x3c), buffer_size1 < param2)) {
      if (param2 == 0) {
        if (buffer_size1 < 2) {
          *(undefined4 *)((longlong)stack_context_ptr + 0x3c) = 8;
        }
        else {
          *(int *)((longlong)stack_context_ptr + 0x3c) = (buffer_size1 >> 1) + buffer_size1;
        }
      }
      else {
        *(int *)((longlong)stack_context_ptr + 0x3c) = param2;
      }
      resize_render_buffer();
    }
  }
  if (0 < param2) {
    do {
      render_object_ptr1 = stack_context_ptr;
      processed_value = *vertex_data;
      vertex_value1 = vertex_data[1];
      vertex_value2 = vertex_data[2];
      output_value3 = vertex_data[3];
      buffer_size1 = (int)stack_context_ptr[2];
      vertex_index = buffer_size1 + 1;
      buffer_size2 = *(int *)((longlong)stack_context_ptr + 0x14);
      if (buffer_size2 < vertex_index) {
        if (buffer_size2 < 2) {
          *(undefined4 *)((longlong)stack_context_ptr + 0x14) = 8;
        }
        else {
          *(int *)((longlong)stack_context_ptr + 0x14) = (buffer_size2 >> 1) + buffer_size2;
        }
        resize_render_buffer(stack_context_ptr + 2);
      }
      render_object_ptr2 = stack_context_ptr;
      *(int *)(render_object_ptr1 + 2) = vertex_index;
      vertex_ptr = (undefined4 *)(stack_context_ptr[3] + (longlong)buffer_size1 * 0x10);
      *vertex_ptr = processed_value;
      vertex_ptr[1] = vertex_value1;
      vertex_ptr[2] = vertex_value2;
      vertex_ptr[3] = output_value3;
      if ((int)stack_context_ptr[7] != 0) {
        buffer_size2 = *(int *)((longlong)stack_context_ptr + 0x3c);
        if (buffer_size2 < vertex_index) {
          if (buffer_size2 < 2) {
            *(undefined4 *)((longlong)stack_context_ptr + 0x3c) = 8;
          }
          else {
            *(int *)((longlong)stack_context_ptr + 0x3c) = (buffer_size2 >> 1) + buffer_size2;
          }
          resize_render_buffer(stack_context_ptr + 7);
        }
        *(int *)(render_object_ptr2 + 7) = vertex_index;
        vertex_ptr = (undefined4 *)(stack_context_ptr[8] + (longlong)buffer_size1 * 0x10);
        *vertex_ptr = processed_value;
        vertex_ptr[1] = vertex_value1;
        vertex_ptr[2] = vertex_value2;
        vertex_ptr[3] = output_value3;
      }
      cleanup_flag1 = '\x01';
      cleanup_flag3 = '\x01';
      vertex_data = vertex_data + 4;
      data_counter = data_counter + -1;
    } while (data_counter != 0);
  }
  if ((*(int *)((longlong)stack_context_ptr + 100) < (int)param4) &&
     (buffer_size1 = *(int *)((longlong)stack_context_ptr + 100), buffer_size1 < (int)param4)) {
    if (param4 == 0) {
      if (buffer_size1 < 2) {
        *(undefined4 *)((longlong)stack_context_ptr + 100) = 8;
        execute_texture_operation();
      }
      else {
        *(int *)((longlong)stack_context_ptr + 100) = (buffer_size1 >> 1) + buffer_size1;
        execute_texture_operation();
      }
      goto LAB_texture_processing_complete;
    }
    *(uint *)((longlong)stack_context_ptr + 100) = param4;
    execute_texture_operation();
  }
  if (0 < (int)param4) {
    vertex_ptr = texture_data + 1;
    do {
      stack_temp_array[0] = texture_data[7];
      process_texture_data(&stack_buffer_ptr, *texture_data, vertex_ptr, &DAT_1809ff0c8, stack_temp_array, vertex_ptr + 2);
      vertex_ptr = vertex_ptr + 8;
      texture_data = texture_data + 8;
      texture_counter = texture_counter - 1;
    } while (texture_counter != 0);
  }
LAB_texture_processing_complete:
  data_counter = (longlong)param6;
  if ((*(int *)((longlong)stack_context_ptr + 0x8c) < param6) &&
     (buffer_size1 = *(int *)((longlong)stack_context_ptr + 0x8c), buffer_size1 < param6)) {
    if (param6 == 0) {
      if (buffer_size1 < 2) {
        *(undefined4 *)((longlong)stack_context_ptr + 0x8c) = 8;
      }
      else {
        *(int *)((longlong)stack_context_ptr + 0x8c) = (buffer_size1 >> 1) + buffer_size1;
      }
    }
    else {
      *(int *)((longlong)stack_context_ptr + 0x8c) = param6;
    }
    execute_parameter_operation();
  }
  if (0 < param6) {
    vertex_ptr = (undefined4 *)(param7 + 4);
    do {
      execute_rendering_operation(&stack_buffer_ptr, vertex_ptr[-1], *vertex_ptr, vertex_ptr[1]);
      vertex_ptr = vertex_ptr + 3;
      data_counter = data_counter + -1;
    } while (data_counter != 0);
  }
  processed_value = (**(code **)(*render_context_ptr + 8))(render_context_ptr);
  (**(code **)(*render_context_ptr + 0x28))(render_context_ptr);
  output_value1 = SUB84(render_context_ptr, 0);
  output_value2 = (undefined4)((ulonglong)render_context_ptr >> 0x20);
  *output_param = output_value1;
  output_param[1] = output_value2;
  output_param[2] = processed_value;
  output_param[3] = output_value3;
  if ((stack_buffer_ptr != (longlong *)0x0) && (stack_context_ptr != (longlong *)0x0)) {
    if (cleanup_flag3 != '\0') {
      cleanup_rendering_resources();
    }
    cleanup_rendering_array(stack_array);
    if (cleanup_flag1 != '\0') {
      release_rendering_object(stack_buffer_ptr);
    }
    if (cleanup_flag2 != '\0') {
      release_rendering_object(stack_buffer_ptr);
    }
    render_object_ptr1 = stack_context_ptr;
    stack_context_ptr = (longlong *)0x0;
    if (render_object_ptr1 != (longlong *)0x0) {
      (**(code **)(*render_object_ptr1 + 0x38))();
    }
  }
  cleanup_rendering_array(stack_array);
  if (stack_allocator != (longlong *)0x0) {
    (**(code **)(*stack_allocator + 0x38))();
  }
  if (stack_context_ptr != (longlong *)0x0) {
    (**(code **)(*stack_context_ptr + 0x38))();
  }
  if (stack_buffer_ptr != (longlong *)0x0) {
    (**(code **)(*stack_buffer_ptr + 0x38))();
  }
  (**(code **)(*render_context_ptr + 0x38))(render_context_ptr);
  return output_param;
}

/**
 * 渲染系统数据设置函数
 * 
 * 该函数设置渲染系统中的数据值。
 * 主要功能包括：
 * 1. 检查渲染上下文有效性
 * 2. 初始化渲染上下文
 * 3. 设置数据值
 * 4. 根据条件设置状态标志
 * 
 * @param render_context 渲染上下文指针
 * @param data_ptr 数据指针
 * @param param3 参数3
 * @param param4 参数4
 */
void rendering_system_set_data(longlong *render_context, undefined4 *data_ptr, byte param3, char param4)

{
  undefined4 data_value1;
  undefined4 data_value2;
  undefined4 data_value3;
  char status_flag;
  
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x28))();
    data_value1 = data_ptr[1];
    data_value2 = data_ptr[2];
    data_value3 = data_ptr[3];
    *(undefined4 *)(render_context + 0x34) = *data_ptr;
    *(undefined4 *)((longlong)render_context + 0x1a4) = data_value1;
    *(undefined4 *)(render_context + 0x35) = data_value2;
    *(undefined4 *)((longlong)render_context + 0x1ac) = data_value3;
    status_flag = (param3 ^ 1) + 1;
    if (param4 != '\0') {
      status_flag = '\x03';
    }
    *(char *)(render_context + 0x1f) = status_flag;
  }
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x38))(render_context);
  }
  return;
}

/**
 * 渲染系统数据重置函数
 * 
 * 该函数重置渲染系统中的数据值。
 * 主要功能包括：
 * 1. 检查渲染上下文有效性
 * 2. 初始化渲染上下文
 * 3. 重置数据值
 * 4. 释放渲染对象
 * 
 * @param render_context 渲染上下文指针
 */
void rendering_system_reset_data(longlong *render_context)

{
  if (render_context == (longlong *)0x0) {
    return;
  }
  (**(code **)(*render_context + 0x28))();
  *(undefined1 *)(render_context + 0x1f) = 0;
  *(undefined4 *)(render_context + 0x34) = 0;
  *(undefined4 *)((longlong)render_context + 0x1a4) = 0;
  *(undefined4 *)(render_context + 0x35) = 0;
  *(undefined4 *)((longlong)render_context + 0x1ac) = 0x7f7fffff;
  // WARNING: Could not recover jumptable at 0x0001804497cd. Too many branches
  // WARNING: Treating indirect jump as call
  (**(code **)(*render_context + 0x38))(render_context);
  return;
}

/**
 * 渲染系统内存分配函数
 * 
 * 该函数为渲染系统分配内存。
 * 主要功能包括：
 * 1. 分配内存
 * 2. 初始化内存数据
 * 3. 创建渲染对象
 * 4. 释放渲染上下文
 * 
 * @param render_context 渲染上下文指针
 * @return 分配的内存指针
 */
undefined8 * rendering_system_allocate_memory(longlong *render_context)

{
  undefined8 *allocated_memory;
  
  allocated_memory = (undefined8 *)allocate_rendering_memory(_DAT_180c8ed18, 0x38, 8, 3, 0xfffffffffffffffe);
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x28))();
  }
  *allocated_memory = 0;
  allocated_memory[1] = 0;
  allocated_memory[5] = 0;
  allocated_memory[3] = 0;
  *(undefined1 *)(allocated_memory + 2) = 0;
  create_rendering_object(allocated_memory, render_context, 0);
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x38))(render_context);
  }
  return allocated_memory;
}