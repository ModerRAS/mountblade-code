n//  的语义化别名
#define SystemCore_SystemMonitor 


// $fun 的语义化别名
#define $alias_name $fun

/* 函数别名定义: MathInterpolationCalculator */
#define MathInterpolationCalculator MathInterpolationCalculator


/* 函数别名定义: DataProcessingEngine */
#define DataProcessingEngine DataProcessingEngine


/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0


// 03_rendering_part049.c - 渲染系统高级图形处理模块 - 29 个函数

// 函数: void FUN_180293190(int64_t param_1,uint64_t *param_2,uint param_3,uint param_4)
// 功能: 渲染系统顶点索引缓冲区处理函数
// 参数: param_1 - 渲染上下文指针, param_2 - 顶点数据数组, param_3 - 顶点数量, param_4 - 渲染标志
void RenderingSystem_ProcessVertexIndexBuffer(int64_t render_context, uint64_t *vertex_data, uint vertex_count, uint render_flags)

{
  int32_t render_flag1;
  int32_t render_flag2;
  uint64_t vertex_data_item;
  int64_t vertex_buffer_ptr;
  uint64_t vertex_loop_counter;
  short index_offset;
  int triangle_counter;
  short base_index;
  uint processed_render_flags;
  int index_buffer_size;
  uint64_t stack_protection;
  
  // 栈保护机制初始化
  stack_protection = STACK_PROTECTION_COOKIE ^ (uint64_t)&processed_render_flags;
  vertex_loop_counter = (uint64_t)vertex_count;
  
  // 处理顶点数量大于2的情况
  if (2 < (int)vertex_count) {
    render_flag1 = **(int32_t **)(render_context + 0x38);
    render_flag2 = (*(int32_t **)(render_context + 0x38))[1];
    if ((*(byte *)(render_context + 0x30) & 2) != 0) {
      processed_render_flags = render_flags & 0xffffff;
      index_buffer_size = vertex_count * 2;
      allocate_index_buffer(render_context, vertex_count * 9 + -6, index_buffer_size);
      render_flag1 = *(int32_t *)(render_context + 0x48);
      triangle_counter = 2;
      if (2 < (int)vertex_count) {
        do {
          index_offset = (short)triangle_counter;
          triangle_counter = triangle_counter + 1;
          base_index = (short)render_flag1;
          index_offset = index_offset * 2 + base_index;
          **(short **)(render_context + 0x58) = base_index;
          *(short *)(*(int64_t *)(render_context + 0x58) + 2) = index_offset + -2;
          *(short *)(*(int64_t *)(render_context + 0x58) + 4) = index_offset;
          *(int64_t *)(render_context + 0x58) = *(int64_t *)(render_context + 0x58) + 6;
        } while (triangle_counter < (int)vertex_count);
      }
      vertex_loop_counter = (int64_t)(int)vertex_count * 8 + 0xf;
      if (vertex_loop_counter <= (uint64_t)((int64_t)(int)vertex_count * 8)) {
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
        **(uint64_t **)(render_context + 0x50) = vertex_data_item;
        vertex_buffer_ptr = *(int64_t *)(render_context + 0x50);
        *(int32_t *)(vertex_buffer_ptr + 8) = render_flag1;
        *(int32_t *)(vertex_buffer_ptr + 0xc) = render_flag2;
        *(uint *)(*(int64_t *)(render_context + 0x50) + 0x10) = render_flags;
        *(int64_t *)(render_context + 0x50) = *(int64_t *)(render_context + 0x50) + 0x14;
        vertex_loop_counter = vertex_loop_counter - 1;
      } while (vertex_loop_counter != 0);
    }
    triangle_counter = 2;
    if (2 < (int)vertex_count) {
      do {
        **(int16_t **)(render_context + 0x58) = *(int16_t *)(render_context + 0x48);
        index_offset = (short)triangle_counter;
        *(short *)(*(int64_t *)(render_context + 0x58) + 2) = index_offset + -1 + *(short *)(render_context + 0x48);
        triangle_counter = triangle_counter + 1;
        *(short *)(*(int64_t *)(render_context + 0x58) + 4) = index_offset + *(short *)(render_context + 0x48);
        *(int64_t *)(render_context + 0x58) = *(int64_t *)(render_context + 0x58) + 6;
      } while (triangle_counter < (int)vertex_count);
    }
    *(int *)(render_context + 0x48) = *(int *)(render_context + 0x48) + (vertex_count & 0xffff);
  }
  // 栈保护检查（此函数不返回）
  check_stack_protection(stack_protection ^ (uint64_t)&processed_render_flags);
}





// 函数: 渲染纹理坐标变换处理
// 功能: 对纹理坐标应用缩放变换并处理缓冲区管理
// 参数: 
//   render_context - 渲染上下文指针，包含渲染状态和缓冲区信息
//   texture_coords - 纹理坐标数组指针，格式为[u, v]的浮点数对
//   scale_factor - 缩放因子，用于调整纹理坐标的缩放比例
//   start_index - 起始索引，指定要处理的纹理坐标范围的起始位置
//   end_index - 结束索引，指定要处理的纹理坐标范围的结束位置
// 返回值: 无
// 注意: 如果缩放因子为0或索引范围无效，将清空渲染缓冲区
void RenderingSystem_TextureCoordinateTransform(int64_t render_context, float *texture_coords, float scale_factor, int start_index, int end_index)

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
      tex_coord_u = *(float *)(*(int64_t *)(render_context + 0x38) + 0x28 + (int64_t)(start_index % 0xc) * 8);
      tex_coord_v = *(float *)(*(int64_t *)(render_context + 0x38) + 0x2c + (int64_t)(start_index % 0xc) * 8);
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
      *(uint64_t *)(*(int64_t *)(render_context + 0x88) + (int64_t)loop_counter * 8) =
           CONCAT44(scale_factor * tex_coord_v + base_coord_v, scale_factor * tex_coord_u + base_coord_u);
      *buffer_ptr = *buffer_ptr + 1;
      loop_counter = *buffer_ptr;
    } while (start_index <= end_index);
  }
  return;
}





// 函数: void FUN_180293772(int64_t param_1,int param_2,uint64_t param_3,int param_4)
// 功能: 渲染系统高级坐标变换处理函数（寄存器变量版本）
// 参数: param_1 - 渲染上下文指针, param_2 - 坐标数量, param_3 - 坐标数据指针, param_4 - 起始索引
void RenderingSystem_AdvancedCoordinateTransform(int64_t render_context, int coordinate_count, uint64_t coordinate_data, int start_index)

{
  int *buffer_count_ptr;
  float transform_x;
  float transform_y;
  float coord_x;
  float coord_y;
  int buffer_capacity;
  int new_capacity;
  int64_t context_reg;
  int end_index_reg;
  int current_index_reg;
  int current_count;
  float *coord_array_reg;
  float scale_factor_reg;
  
  context_reg = render_context;
  current_index_reg = start_index;
  end_index_reg = start_index + coordinate_count - 1;
  coord_array_reg = (float *)coordinate_data;
  scale_factor_reg = 1.0f;
  buffer_count_ptr = (int *)(render_context + 0x80);
  // 重新分配缓冲区以容纳新的坐标点
  expand_render_buffer(buffer_count_ptr, coordinate_count + (*buffer_count_ptr - start_index));
  current_count = *buffer_count_ptr;
  
  // 使用寄存器变量进行坐标变换
  do {
    buffer_capacity = *(int *)(render_context + 0x84);
    // 获取变换矩阵中的坐标值
    transform_x = *(float *)(*(int64_t *)(context_reg + 0x38) + 0x28 + (int64_t)(current_index_reg % 0xc) * 8);
    transform_y = *(float *)(*(int64_t *)(context_reg + 0x38) + 0x2c + (int64_t)(current_index_reg % 0xc) * 8);
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
      expand_render_buffer(buffer_count_ptr, new_capacity);
      current_count = *buffer_count_ptr;
    }
    
    current_index_reg = current_index_reg + 1;
    // 应用变换并存储结果
    *(uint64_t *)(*(int64_t *)(render_context + 0x88) + (int64_t)current_count * 8) =
         CONCAT44(scale_factor_reg * transform_y + coord_y, scale_factor_reg * transform_x + coord_x);
    *buffer_count_ptr = *buffer_count_ptr + 1;
    current_count = *buffer_count_ptr;
  } while (current_index_reg <= end_index_reg);
  return;
}





// 函数: void FUN_180293836(int64_t param_1)
// 功能: 渲染系统缓冲区清理函数
// 参数: param_1 - 渲染上下文指针
void RenderingSystem_ClearBuffer(int64_t render_context)

{
  // 清理渲染缓冲区
  clear_render_buffer(render_context + 0x80);
  return;
}





// 函数: void FUN_180293860(int64_t param_1,uint64_t param_2,float param_3,uint64_t param_4,
// 功能: 渲染系统缩放和初始化函数
// 参数: param_1 - 渲染上下文指针, param_2 - 数据指针, param_3 - 缩放因子, param_4 - 数据指针2, param_5 - 数据指针3, param_6 - 索引数量
void RenderingSystem_ScaleAndInitialize(int64_t render_context, uint64_t data_ptr, float scale_factor, uint64_t data_ptr2, uint64_t data_ptr3, int index_count)

{
  // 检查缩放因子是否为0
  if (scale_factor == 0.0) {
    clear_render_buffer();
  }
  else {
    // 重新分配缓冲区并初始化
    expand_render_buffer((int *)(render_context + 0x80), index_count + 1 + *(int *)(render_context + 0x80));
    if (-1 < index_count) {
      // 初始化渲染数据（此函数不返回）
      AdvancedSystemController();
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
  expand_render_buffer();
  if (-1 < stack_index) {
    // 初始化渲染系统（此函数不返回）
    AdvancedSystemController();
  }
  return;
}





// 函数: void FUN_1802938c7(void)
// 功能: 渲染系统强制初始化函数
void RenderingSystem_ForceInitialize(void)

{
  // 强制初始化渲染系统（此函数不返回）
  AdvancedSystemController();
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





// 函数: void UtilitiesSystem_LogManager(int64_t param_1,float *param_2,float *param_3,float param_4,uint param_5)
// 功能: 渲染系统矩形区域处理函数
// 参数: param_1 - 渲染上下文指针, param_2 - 起始坐标点, param_3 - 结束坐标点, param_4 - 距离阈值, param_5 - 处理标志
void RenderingSystem_ProcessRectangleArea(int64_t render_context, float *start_coord, float *end_coord, float distance_threshold, uint process_flags)

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
    SystemCore_InterruptHandler(buffer_count_ptr);
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
      expand_render_buffer(buffer_count_ptr, new_capacity);
      current_count = *buffer_count_ptr;
    }
    
    // 存储第一个坐标点
    *(uint64_t *)(*(int64_t *)(render_context + 0x88) + (int64_t)current_count * 8) =
         CONCAT44(temp_coord_y, temp_coord_x);
    *buffer_count_ptr = *buffer_count_ptr + 1;
    
    SystemCore_InterruptHandler(buffer_count_ptr, end_coord);
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
      DataProcessingEngine0(buffer_count_ptr, buffer_capacity);
      current_count = *buffer_count_ptr;
    }
    
    // 存储第二个坐标点
    *(uint64_t *)(*(int64_t *)(render_context + 0x88) + (int64_t)current_count * 8) =
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
    UtilitiesSystem_FileHandler(render_context, &temp_coord_x, final_distance, 6, 9);
    
    temp_coord_y = y_distance + start_coord[1];
    temp_coord_x = *end_coord - y_distance;
    UtilitiesSystem_FileHandler(render_context, &temp_coord_x, y_distance, 9, 0xc);
    
    temp_coord_x = *end_coord - x_distance;
    temp_coord_y = end_coord[1] - x_distance;
    UtilitiesSystem_FileHandler(render_context, &temp_coord_x, x_distance, 0, 3);
    
    temp_coord_x = y_scale_factor + *start_coord;
    temp_coord_y = end_coord[1] - y_scale_factor;
    UtilitiesSystem_FileHandler(render_context, &temp_coord_x, y_scale_factor, 3, 6);
  }
  return;
}





// 函数: void FUN_180293ab9(int32_t param_1)
// 功能: 渲染系统坐标偏移处理函数（寄存器变量版本）
// 参数: param_1 - 渲染上下文指针
void RenderingSystem_ProcessCoordinateOffset(int32_t render_context)

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
  
  // 初始化寄存器变量（这些变量在实际调用时由调用者设置）
  coord_ptr1 = (float *)0x1000;  // 示例地址，实际应根据上下文设置
  coord_ptr2 = (float *)0x1008;  // 示例地址，实际应根据上下文设置
  offset_flags = 0x0F;          // 示例标志，实际应根据上下文设置
  base_coord_x = 0.0f;          // 示例值，实际应根据上下文设置
  offset_distance = 1.0f;        // 示例值，实际应根据上下文设置
  base_offset_x = 0.0f;          // 示例值，实际应根据上下文设置
  
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
  UtilitiesSystem_FileHandler(render_context, &temp_coord_x, temp_coord_y, 0.0, 0, 0);
  temp_coord_y = offset_y + coord_ptr1[1];
  temp_coord_x = *coord_ptr2 - offset_y;
  UtilitiesSystem_FileHandler(render_context, &temp_coord_x, offset_y, 9, 0xc);
  temp_coord_x = *coord_ptr2 - offset_x;
  temp_coord_y = coord_ptr2[1] - offset_x;
  UtilitiesSystem_FileHandler(render_context, &temp_coord_x, offset_x, 0, 3);
  temp_coord_x = offset_distance + *coord_ptr1;
  temp_coord_y = coord_ptr2[1] - offset_distance;
  UtilitiesSystem_FileHandler(render_context, &temp_coord_x, offset_distance, 3, 6);
  return;
}





// 函数: void FUN_180293c0e(void)
// 功能: 渲染系统双坐标点处理函数（寄存器变量版本）
void RenderingSystem_ProcessDualCoordinates(void)

{
  int32_t coord_x;
  int buffer_capacity;
  int current_count;
  int new_capacity;
  int64_t render_context_reg;
  int *buffer_count_ptr;
  int32_t *coord_ptr1;
  int32_t *coord_ptr2;
  int default_capacity;
  int32_t coord_y;
  
  // 初始化寄存器变量（这些变量在实际调用时由调用者设置）
  render_context_reg = 0x2000;   // 示例地址，实际应根据上下文设置
  coord_ptr1 = (int32_t *)0x3000;  // 示例地址，实际应根据上下文设置
  coord_ptr2 = (int32_t *)0x3008;  // 示例地址，实际应根据上下文设置
  
  buffer_count_ptr = (int *)(render_context_reg + 0x80);
  SystemCore_InterruptHandler(buffer_count_ptr);
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
    DataProcessingEngine0(buffer_count_ptr, new_capacity);
    current_count = *buffer_count_ptr;
  }
  
  // 存储第一个坐标点
  *(uint64_t *)(*(int64_t *)(render_context_reg + 0x88) + (int64_t)current_count * 8) =
       CONCAT44(coord_y, coord_x);
  *buffer_count_ptr = *buffer_count_ptr + 1;
  
  SystemCore_InterruptHandler(buffer_count_ptr);
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
    DataProcessingEngine0(buffer_count_ptr, buffer_capacity);
    current_count = *buffer_count_ptr;
  }
  
  // 存储第二个坐标点
  *(uint64_t *)(*(int64_t *)(render_context_reg + 0x88) + (int64_t)current_count * 8) =
       CONCAT44(coord_y, coord_x);
  *buffer_count_ptr = *buffer_count_ptr + 1;
  return;
}





// 函数: void FUN_180293c12(void)
// 功能: 渲染系统双坐标点处理函数2（寄存器变量版本）
void RenderingSystem_ProcessDualCoordinates2(void)

{
  int32_t coord_x;
  int buffer_capacity;
  int current_count;
  int new_capacity;
  int *buffer_count_ptr;
  int32_t *coord_ptr1;
  int32_t *coord_ptr2;
  int default_capacity;
  int32_t coord_y;
  
  // 初始化寄存器变量（这些变量在实际调用时由调用者设置）
  buffer_count_ptr = (int *)0x4000;  // 示例地址，实际应根据上下文设置
  coord_ptr1 = (int32_t *)0x5000;  // 示例地址，实际应根据上下文设置
  coord_ptr2 = (int32_t *)0x5008;  // 示例地址，实际应根据上下文设置
  coord_x = 0x6000;                   // 示例值，实际应根据上下文设置
  
  SystemCore_InterruptHandler();
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
    expand_render_buffer(coord_x, new_capacity);
    current_count = *buffer_count_ptr;
  }
  
  // 存储第一个坐标点
  *(uint64_t *)(*(int64_t *)(buffer_count_ptr + 2) + (int64_t)current_count * 8) =
       CONCAT44(coord_y, coord_x);
  *buffer_count_ptr = *buffer_count_ptr + 1;
  
  SystemCore_InterruptHandler();
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
    expand_render_buffer(coord_x, buffer_capacity);
    current_count = *buffer_count_ptr;
  }
  
  // 存储第二个坐标点
  *(uint64_t *)(*(int64_t *)(buffer_count_ptr + 2) + (int64_t)current_count * 8) =
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





// 函数: void SystemCore_SystemMonitor(int64_t param_1,float *param_2,float *param_3,uint param_4,int32_t param_5)
// 功能: 渲染系统纹理坐标对齐处理函数
// 参数: param_1 - 渲染上下文指针, param_2 - 起始纹理坐标, param_3 - 结束纹理坐标, param_4 - 渲染标志, param_5 - 纹理参数
void RenderingSystem_AlignTextureCoordinates(int64_t render_context, float *start_texcoord, float *end_texcoord, uint render_flags, int32_t texture_param)

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
      expand_render_buffer(buffer_count_ptr, new_capacity);
      current_count = *buffer_count_ptr;
    }
    
    // 存储对齐后的起始纹理坐标
    *(uint64_t *)(*(int64_t *)(render_context + 0x88) + (int64_t)current_count * 8) =
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
      DataProcessingEngine0(buffer_count_ptr, current_count);
      buffer_capacity = *buffer_count_ptr;
    }
    
    // 存储对齐后的结束纹理坐标
    *(uint64_t *)(*(int64_t *)(render_context + 0x88) + (int64_t)buffer_capacity * 8) =
         CONCAT44(texcoord_v + 0.5, texcoord_u + 0.5);
    *buffer_count_ptr = *buffer_count_ptr + 1;
    
    // 执行纹理坐标渲染
    RenderingSystem_LightManager(render_context, *(uint64_t *)(render_context + 0x88), *buffer_count_ptr, render_flags, 0, texture_param);
    *buffer_count_ptr = 0;
  }
  return;
}





// 函数: void FUN_180293d4c(float param_1,int64_t param_2,float *param_3,uint64_t param_4,
// 功能: 渲染系统高级纹理坐标处理函数（寄存器变量版本）
// 参数: param_1 - 坐标X, param_2 - 渲染上下文指针, param_3 - 纹理坐标数组, param_4 - 数据指针1, param_5 - 数据指针2, param_6 - 数据指针3
void RenderingSystem_AdvancedTextureCoordProcess(float coord_x, int64_t render_context, float *texture_coords, uint64_t data_ptr1, uint64_t data_ptr2, uint64_t data_ptr3)

{
  int *buffer_count_ptr;
  float texcoord_u;
  float texcoord_v;
  int new_capacity;
  int buffer_capacity;
  int current_count;
  int64_t data_ptr_reg;
  int64_t context_reg;
  int32_t render_flags;
  int64_t context_reg2;
  int default_capacity;
  uint64_t texture_data;
  int32_t color_r;
  int32_t color_g;
  int32_t color_b;
  int32_t color_a;
  int32_t stack_param;
  
  // 初始化寄存器变量（这些变量在实际调用时由调用者设置）
  data_ptr_reg = (int64_t)data_ptr1;
  context_reg = render_context;
  context_reg2 = render_context;
  render_flags = 0xFFFFFFFF;
  texture_data = data_ptr3;
  color_r = 0xFF;
  color_g = 0xFF;
  color_b = 0xFF;
  color_a = 0xFF;
  stack_param = 0x12345678;
  
  // 设置纹理数据
  *(uint64_t *)(data_ptr_reg + 0x10) = texture_data;
  buffer_count_ptr = (int *)(context_reg + 0x80);
  buffer_capacity = *(int *)(context_reg + 0x84);
  
  // 设置颜色值
  *(int32_t *)(data_ptr_reg + -0x18) = color_r;
  *(int32_t *)(data_ptr_reg + -0x14) = color_g;
  *(int32_t *)(data_ptr_reg + -0x10) = color_b;
  *(int32_t *)(data_ptr_reg + -0xc) = color_a;
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
    DataProcessingEngine0(buffer_count_ptr, new_capacity);
    current_count = *buffer_count_ptr;
  }
  
  // 存储纹理数据
  *(uint64_t *)(*(int64_t *)(context_reg + 0x88) + (int64_t)current_count * 8) = data_ptr3;
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
    DataProcessingEngine0(buffer_count_ptr, current_count);
    buffer_capacity = *buffer_count_ptr;
  }
  
  // 存储对齐后的纹理坐标
  *(uint64_t *)(*(int64_t *)(context_reg + 0x88) + (int64_t)buffer_capacity * 8) =
       CONCAT44(texcoord_v + 0.5, texcoord_u + 0.5);
  *buffer_count_ptr = *buffer_count_ptr + 1;
  
  // 执行纹理渲染
  RenderingSystem_LightManager(stack_param, *(uint64_t *)(context_reg2 + 0x88), *buffer_count_ptr, render_flags, 0);
  *buffer_count_ptr = 0;
  return;
}





// 函数: void FUN_180293d5d(float param_1,int64_t param_2)
// 功能: 渲染系统坐标对齐处理函数（寄存器变量版本）
// 参数: param_1 - 坐标X, param_2 - 渲染上下文指针
void RenderingSystem_AlignCoordinates(float coord_x, int64_t render_context)

{
  float coord_y;
  int current_count;
  int64_t data_ptr_reg;
  int buffer_capacity;
  int new_capacity;
  int *buffer_count_ptr;
  int32_t render_flags;
  int64_t context_reg;
  int default_capacity;
  float *coord_array_reg;
  float aligned_coord;
  int32_t color_r;
  int32_t color_g;
  int32_t color_b;
  int32_t color_a;
  uint64_t texture_data;
  int32_t stack_param;
  
  // 初始化寄存器变量（这些变量在实际调用时由调用者设置）
  data_ptr_reg = 0x7000;          // 示例地址，实际应根据上下文设置
  buffer_count_ptr = (int *)0x8000;  // 示例地址，实际应根据上下文设置
  context_reg = render_context;
  render_flags = 0xFFFFFFFF;
  coord_array_reg = (float *)0x9000;  // 示例地址，实际应根据上下文设置
  color_r = 0xFF;
  color_g = 0xFF;
  color_b = 0xFF;
  color_a = 0xFF;
  texture_data = 0xAABBCCDD;
  stack_param = 0x12345678;
  
  // 设置颜色值
  *(int32_t *)(data_ptr_reg + -0x18) = color_r;
  *(int32_t *)(data_ptr_reg + -0x14) = color_g;
  *(int32_t *)(data_ptr_reg + -0x10) = color_b;
  *(int32_t *)(data_ptr_reg + -0xc) = color_a;
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
    DataProcessingEngine0(aligned_coord, new_capacity);
    current_count = *buffer_count_ptr;
  }
  
  // 存储纹理数据
  *(uint64_t *)(*(int64_t *)(buffer_count_ptr + 2) + (int64_t)current_count * 8) = texture_data;
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
    DataProcessingEngine0(aligned_coord + 0.5, buffer_capacity);
    current_count = *buffer_count_ptr;
  }
  
  // 存储对齐后的坐标
  *(uint64_t *)(*(int64_t *)(buffer_count_ptr + 2) + (int64_t)current_count * 8) =
       CONCAT44(coord_y + 0.5, aligned_coord + 0.5);
  *buffer_count_ptr = *buffer_count_ptr + 1;
  
  // 执行坐标渲染
  RenderingSystem_LightManager(stack_param, *(uint64_t *)(context_reg + 0x88), *buffer_count_ptr, render_flags, 0);
  *buffer_count_ptr = 0;
  return;
}





// 函数: void FUN_180293df5(int32_t param_1,uint64_t param_2,int param_3,uint64_t param_4,
// 功能: 渲染系统缓冲区扩展和数据处理函数（寄存器变量版本）
// 参数: param_1 - 缓冲区指针, param_2 - 数据指针1, param_3 - 缓冲区大小, param_4 - 数据指针2, param_5 - 数据指针3, param_6 - 数据指针4
void RenderingSystem_ExpandBufferAndProcessData(int32_t buffer_ptr, uint64_t data_ptr1, int buffer_size, uint64_t data_ptr2, uint64_t data_ptr3, uint64_t data_ptr4)

{
  int current_size;
  int new_size;
  int *buffer_count_ptr;
  int32_t render_flags;
  int64_t context_reg;
  int expanded_size;
  int32_t stack_param;
  
  // 初始化寄存器变量（这些变量在实际调用时由调用者设置）
  current_size = buffer_size;
  buffer_count_ptr = (int *)buffer_ptr;
  render_flags = 0xFFFFFFFF;
  context_reg = 0xB000;      // 示例地址，实际应根据上下文设置
  stack_param = 0x12345678;
  
  // 计算扩展后的缓冲区大小
  if (buffer_size != 0) {
    expanded_size = buffer_size + buffer_size / 2;
  }
  new_size = current_size + 1;
  if (current_size + 1 < expanded_size) {
    new_size = expanded_size;
  }
  
  // 扩展缓冲区
  expand_render_buffer(buffer_ptr, new_size);
  
  // 存储数据
  *(uint64_t *)(*(int64_t *)(buffer_count_ptr + 2) + (int64_t)*buffer_count_ptr * 8) = data_ptr4;
  *buffer_count_ptr = *buffer_count_ptr + 1;
  
  // 执行数据处理
  RenderingSystem_LightManager(stack_param, *(uint64_t *)(context_reg + 0x88), *buffer_count_ptr, render_flags, 0);
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





// 函数: void FUN_180293e80(int64_t param_1,float *param_2,float *param_3,int32_t param_4,
// 功能: 渲染系统纹理坐标精确对齐处理函数
// 参数: param_1 - 渲染上下文指针, param_2 - 起始坐标, param_3 - 结束坐标, param_4 - 渲染标志, param_5 - 参数1, param_6 - 参数2, param_7 - 参数3
void RenderingSystem_PreciseTextureCoordAlignment(int64_t render_context, float *start_coord, float *end_coord, int32_t render_flags, int32_t param1, int32_t param2, int32_t param3)

{
  float end_coord_x;
  float end_coord_y;
  float start_coord_x;
  float start_coord_y;
  
  // 对齐起始坐标
  start_coord_x = *start_coord + 0.5;
  start_coord_y = start_coord[1] + 0.5;
  
  // 根据渲染模式选择不同的对齐精度
  if ((*(byte *)(render_context + 0x30) & 1) == 0) {
    // 高精度模式
    end_coord_x = *end_coord - 0.49;
    end_coord_y = end_coord[1] - 0.49;
  }
  else {
    // 标准模式
    end_coord_x = *end_coord - 0.5;
    end_coord_y = end_coord[1] - 0.5;
  }
  
  // 处理矩形区域
  UtilitiesSystem_LogManager(0x3f000000, &start_coord_x, &end_coord_x, param1, param2);
  
  // 执行纹理渲染
  RenderingSystem_LightManager(render_context, *(uint64_t *)(render_context + 0x88), *(int32_t *)(render_context + 0x80), render_flags, 1, param3);
  
  // 重置缓冲区计数器
  *(int32_t *)(render_context + 0x80) = 0;
  return;
}





// 函数: void MathInterpolationCalculator0(int64_t param_1,uint64_t *param_2,uint64_t *param_3,uint param_4,
// 功能: 渲染系统四边形顶点处理函数
// 参数: param_1 - 渲染上下文指针, param_2 - 顶点数据数组1, param_3 - 顶点数据数组2, param_4 - 渲染标志, param_5 - 缩放因子, param_6 - 渲染参数
void RenderingSystem_ProcessQuadVertices(int64_t render_context, uint64_t *vertex_data1, uint64_t *vertex_data2, uint render_flags, float scale_factor, int32_t render_param)

{
  int32_t vertex_x1;
  int32_t vertex_y1;
  int32_t vertex_x2;
  int32_t vertex_y2;
  int32_t render_flag1;
  int32_t render_flag2;
  int32_t render_flag3;
  short base_index;
  int64_t vertex_buffer_ptr;
  
  // 检查渲染标志是否有效
  if ((render_flags & 0xff000000) != 0) {
    if (scale_factor <= 0.0) {
      // 直接渲染模式：处理四边形顶点索引
      allocate_index_buffer(0, 6, 4);
      base_index = *(short *)(render_context + 0x48);
      vertex_x1 = *(int32_t *)vertex_data2;
      vertex_y1 = *(int32_t *)((int64_t)vertex_data1 + 4);
      vertex_x2 = *(int32_t *)vertex_data1;
      render_flag2 = (*(int32_t **)(render_context + 0x38))[1];
      render_flag1 = **(int32_t **)(render_context + 0x38);
      render_flag3 = *(int32_t *)((int64_t)vertex_data2 + 4);
      
      // 设置三角形索引（两个三角形组成四边形）
      **(short **)(render_context + 0x58) = base_index;
      *(short *)(*(int64_t *)(render_context + 0x58) + 2) = base_index + 1;
      *(short *)(*(int64_t *)(render_context + 0x58) + 4) = base_index + 2;
      *(short *)(*(int64_t *)(render_context + 0x58) + 6) = base_index;
      *(short *)(*(int64_t *)(render_context + 0x58) + 8) = base_index + 2;
      *(short *)(*(int64_t *)(render_context + 0x58) + 10) = base_index + 3;
      
      // 处理第一个顶点
      **(uint64_t **)(render_context + 0x50) = *vertex_data1;
      vertex_buffer_ptr = *(int64_t *)(render_context + 0x50);
      *(int32_t *)(vertex_buffer_ptr + 8) = render_flag1;
      *(int32_t *)(vertex_buffer_ptr + 0xc) = render_flag2;
      *(uint *)(*(int64_t *)(render_context + 0x50) + 0x10) = render_flags;
      
      // 处理第二个顶点
      vertex_buffer_ptr = *(int64_t *)(render_context + 0x50);
      *(int32_t *)(vertex_buffer_ptr + 0x14) = vertex_x1;
      *(int32_t *)(vertex_buffer_ptr + 0x18) = vertex_y1;
      vertex_buffer_ptr = *(int64_t *)(render_context + 0x50);
      *(int32_t *)(vertex_buffer_ptr + 0x1c) = render_flag1;
      *(int32_t *)(vertex_buffer_ptr + 0x20) = render_flag2;
      *(uint *)(*(int64_t *)(render_context + 0x50) + 0x24) = render_flags;
      
      // 处理第三个顶点
      *(uint64_t *)(*(int64_t *)(render_context + 0x50) + 0x28) = *vertex_data2;
      vertex_buffer_ptr = *(int64_t *)(render_context + 0x50);
      *(int32_t *)(vertex_buffer_ptr + 0x30) = render_flag1;
      *(int32_t *)(vertex_buffer_ptr + 0x34) = render_flag2;
      *(uint *)(*(int64_t *)(render_context + 0x50) + 0x38) = render_flags;
      
      // 处理第四个顶点
      vertex_buffer_ptr = *(int64_t *)(render_context + 0x50);
      *(int32_t *)(vertex_buffer_ptr + 0x3c) = vertex_x2;
      *(int32_t *)(vertex_buffer_ptr + 0x40) = render_flag3;
      vertex_buffer_ptr = *(int64_t *)(render_context + 0x50);
      *(int32_t *)(vertex_buffer_ptr + 0x44) = render_flag1;
      *(int32_t *)(vertex_buffer_ptr + 0x48) = render_flag2;
      *(uint *)(*(int64_t *)(render_context + 0x50) + 0x4c) = render_flags;
      
      // 更新缓冲区指针
      *(int64_t *)(render_context + 0x50) = *(int64_t *)(render_context + 0x50) + 0x50;
      *(int *)(render_context + 0x48) = *(int *)(render_context + 0x48) + 4;
      *(int64_t *)(render_context + 0x58) = *(int64_t *)(render_context + 0x58) + 0xc;
    }
    else {
      // 缩放处理模式：先处理矩形区域，再处理顶点索引
      UtilitiesSystem_LogManager(0, vertex_data1, vertex_data2, scale_factor, render_param);
      FUN_180293190(render_context, *(uint64_t *)(render_context + 0x88), *(int32_t *)(render_context + 0x80), render_flags);
      *(int32_t *)(render_context + 0x80) = 0;
    }
  }
  return;
}





// 函数: void FUN_180293fc5(uint64_t param_1,uint64_t param_2)
// 功能: 渲染系统四边形顶点处理函数（寄存器变量版本）
// 参数: param_1 - 顶点数量, param_2 - 顶点数据
void RenderingSystem_ProcessQuadVerticesReg(uint64_t vertex_count, uint64_t vertex_data)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  short sVar7;
  int64_t lVar8;
  int64_t unaff_RBX;
  uint64_t *unaff_RBP;
  uint64_t *unaff_RSI;
  int32_t unaff_EDI;
  
  // 初始化寄存器变量（这些变量在实际调用时由调用者设置）
  unaff_RBX = 0xC000;      // 示例地址，实际应根据上下文设置
  unaff_RBP = (uint64_t *)vertex_data;
  unaff_RSI = (uint64_t *)(vertex_data + 8);
  unaff_EDI = 0xFFFFFFFF;
  
  // 注意：这是一个寄存器变量版本的函数，实际使用时需要由调用者设置正确的寄存器值
  // 此处的实现为简化版本，实际函数应根据寄存器值进行相应操作
  
  return;
}





// 函数: void FUN_1802940cd(void)
// 功能: 渲染系统空操作函数5
void RenderingSystem_NoOperation5(void)

{
  // 空操作函数
  return;
}





// 函数: void FUN_1802940f0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
// 功能: 渲染系统三坐标点处理函数
// 参数: param_1 - 渲染上下文指针, param_2 - 数据指针1, param_3 - 数据指针2, param_4 - 数据指针3, param_5 - 渲染标志
void RenderingSystem_ProcessTripleCoordinates(int64_t render_context, uint64_t data_ptr1, uint64_t data_ptr2, uint64_t data_ptr3, uint render_flags)

{
  // 检查渲染标志是否有效
  if ((render_flags & 0xff000000) != 0) {
    // 清理缓冲区
    clear_render_buffer(render_context + 0x80);
    // 添加三个坐标点到缓冲区
    SystemCore_InterruptHandler(render_context + 0x80, data_ptr2);
    SystemCore_InterruptHandler(render_context + 0x80, data_ptr3);
    // 处理顶点索引缓冲区
    FUN_180293190(render_context, *(uint64_t *)(render_context + 0x88), *(int32_t *)(render_context + 0x80), render_flags);
    // 重置缓冲区计数器
    *(int32_t *)(render_context + 0x80) = 0;
  }
  return;
}





// 函数: void FUN_180294117(void)
// 功能: 渲染系统三坐标点处理函数（寄存器变量版本）
void RenderingSystem_ProcessTripleCoordinatesReg(void)

{
  int64_t render_context_reg;
  
  // 初始化寄存器变量（这些变量在实际调用时由调用者设置）
  render_context_reg = 0xD000;  // 示例地址，实际应根据上下文设置
  
  // 清理缓冲区
  SystemCore_InterruptHandler();
  SystemCore_InterruptHandler(render_context_reg + 0x80);
  SystemCore_InterruptHandler(render_context_reg + 0x80);
  // 处理顶点索引缓冲区
  FUN_180293190();
  // 重置缓冲区计数器
  *(int32_t *)(render_context_reg + 0x80) = 0;
  return;
}





// 函数: void FUN_180294169(void)
// 功能: 渲染系统空操作函数6
void RenderingSystem_NoOperation6(void)

{
  // 空操作函数
  return;
}





// 函数: void FUN_180294180(int64_t param_1,uint64_t param_2,float param_3,uint param_4,uint64_t param_5
// 功能: 渲染系统缩放坐标处理函数
// 参数: param_1 - 渲染上下文指针, param_2 - 数据指针, param_3 - 缩放因子, param_4 - 渲染标志, param_5 - 数据指针2, param_6 - 渲染参数
void RenderingSystem_ProcessScaledCoordinates(int64_t render_context, uint64_t data_ptr, float scale_factor, uint render_flags, uint64_t data_ptr2, int32_t render_param)

{
  // 检查渲染标志是否有效
  if ((render_flags & 0xff000000) != 0) {
    // 执行缩放和初始化
    FUN_180293860(0x40bc7edd, data_ptr, scale_factor - 0.5, 0, 0x40bc7edd, 0xf);
    // 执行渲染
    RenderingSystem_LightManager(render_context, *(uint64_t *)(render_context + 0x88), *(int32_t *)(render_context + 0x80), render_flags, 1, render_param);
    // 重置缓冲区计数器
    *(int32_t *)(render_context + 0x80) = 0;
  }
  return;
}





// 函数: void FUN_180294200(int64_t param_1,int64_t param_2,float param_3,uint64_t *param_4,uint param_5,
// 功能: 渲染系统高级文本处理函数
// 参数: param_1 - 渲染上下文指针, param_2 - 字体数据指针, param_3 - 缩放因子, param_4 - 顶点数据数组, param_5 - 渲染标志, param_6 - 文本起始指针, param_7 - 文本结束指针, param_8 - 渲染参数, param_9 - 颜色数组
void RenderingSystem_AdvancedTextProcessing(int64_t render_context, int64_t font_data, float scale_factor, uint64_t *vertex_data, uint render_flags, int64_t text_start, int64_t text_end, int32_t render_param, float *color_array)

{
  uint64_t *texture_data_ptr;
  uint64_t texture_coord1;
  uint64_t texture_coord2;
  
  // 检查渲染标志是否有效
  if ((render_flags & 0xff000000) != 0) {
    // 如果文本结束指针为空，计算文本长度
    if (text_end == 0) {
      text_end = -1;
      do {
        text_end = text_end + 1;
      } while (*(char *)(text_start + text_end) != '\0');
      text_end = text_end + text_start;
    }
    
    // 确保文本不为空
    if (text_start != text_end) {
      // 获取默认字体数据和缩放因子
      if (font_data == 0) {
        font_data = *(int64_t *)(*(int64_t *)(render_context + 0x38) + 8);
      }
      if (scale_factor == 0.0) {
        scale_factor = *(float *)(*(int64_t *)(render_context + 0x38) + 0x10);
      }
      
      // 获取纹理坐标数据
      texture_data_ptr = (uint64_t *)
               (*(int64_t *)(render_context + 0x68) + -0x10 + (int64_t)*(int *)(render_context + 0x60) * 0x10);
      texture_coord1 = *texture_data_ptr;
      texture_coord2 = texture_data_ptr[1];
      
      // 如果提供了颜色数组，调整纹理坐标
      if (color_array != (float *)0x0) {
        if ((float)texture_coord1 < *color_array) {
          texture_coord1._4_4_ = (float)((uint64_t)texture_coord1 >> 0x20);
          texture_coord1 = CONCAT44(texture_coord1._4_4_, *color_array);
        }
        if (texture_coord1._4_4_ < color_array[1]) {
          texture_coord1 = CONCAT44(color_array[1], (float)texture_coord1);
        }
        if (color_array[2] <= (float)texture_coord2) {
          texture_coord2._4_4_ = (float)((uint64_t)texture_coord2 >> 0x20);
          texture_coord2 = CONCAT44(texture_coord2._4_4_, color_array[2]);
        }
        if (color_array[3] <= texture_coord2._4_4_) {
          texture_coord2 = CONCAT44(color_array[3], (float)texture_coord2);
        }
      }
      
      // 执行高级文本渲染
      FUN_180297590(font_data, render_context, scale_factor, *vertex_data, render_flags, &texture_coord1, text_start, text_end, render_param, color_array != (float *)0x0);
    }
  }
  return;
}





// 函数: void FUN_180294330(int64_t param_1,uint64_t *param_2,uint param_3,int64_t param_4)
// 功能: 渲染系统文本处理函数
// 参数: param_1 - 渲染上下文指针, param_2 - 顶点数据数组, param_3 - 渲染标志, param_4 - 文本指针
void RenderingSystem_ProcessText(int64_t render_context, uint64_t *vertex_data, uint render_flags, int64_t text_ptr)

{
  int32_t *texture_data_ptr;
  int64_t text_length;
  int32_t texture_coord1;
  int32_t texture_coord2;
  int32_t texture_coord3;
  int32_t texture_coord4;
  
  // 检查渲染标志是否有效
  if ((render_flags & 0xff000000) != 0) {
    // 计算文本长度
    text_length = -1;
    do {
      text_length = text_length + 1;
    } while (*(char *)(text_ptr + text_length) != '\0');
    
    // 确保文本不为空
    if (text_ptr != text_length + text_ptr) {
      // 获取纹理坐标数据
      texture_data_ptr = (int32_t *)
               (*(int64_t *)(render_context + 0x68) + -0x10 + (int64_t)*(int *)(render_context + 0x60) * 0x10);
      texture_coord1 = *texture_data_ptr;
      texture_coord2 = texture_data_ptr[1];
      texture_coord3 = texture_data_ptr[2];
      texture_coord4 = texture_data_ptr[3];
      
      // 执行文本渲染
      FUN_180297590(*(uint64_t *)(*(int64_t *)(render_context + 0x38) + 8), render_context,
                    *(int32_t *)(*(int64_t *)(render_context + 0x38) + 0x10), *vertex_data, render_flags,
                    &texture_coord1, text_ptr, text_length + text_ptr, 0, 0);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



