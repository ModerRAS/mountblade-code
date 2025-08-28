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