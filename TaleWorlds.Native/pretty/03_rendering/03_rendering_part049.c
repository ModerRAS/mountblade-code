#include "TaleWorlds.Native.Split.h"

// 03_rendering_part049.c - 2ÓûßØ§þbŒàUØb!W - 29 *ýp

// ýp: 2ÓQ<"²:pn
void RenderingSystem_ProcessVertexIndexBuffer(longlong render_context, undefined8 *vertex_data, uint vertex_count, uint render_flags)

{
  undefined4 buffer_size_1;
  undefined4 buffer_size_2;
  undefined8 data_offset;
  longlong temp_offset;
  ulonglong stack_guard;
  short index_value;
  int loop_counter;
  short temp_index;
  uint stack_size_88;
  int stack_size_84;
  ulonglong stack_canary;
  
  // Ý¤:6Ë
  stack_canary = STACK_PROTECTION_COOKIE ^ (ulonglong)&stack_size_88;
  data_offset = (ulonglong)vertex_count;
  if (2 < (int)vertex_count) {
    buffer_size_1 = **(undefined4 **)(render_context + 0x38);
    buffer_size_2 = (*(undefined4 **)(render_context + 0x38))[1];
    if ((*(byte *)(render_context + 0x30) & 2) != 0) {
      // 2Ó×MÐÖ24Mœráo
      stack_size_88 = render_flags & 0xffffff;
      stack_size_84 = vertex_count * 2;
      // Mv¹²:…X
      allocate_vertex_buffer(render_context, vertex_count * 9 + -6, stack_size_84);
      buffer_size_1 = *(undefined4 *)(render_context + 0x48);
      loop_counter = 2;
      if (2 < (int)vertex_count) {
        do {
          index_value = (short)loop_counter;
          loop_counter = loop_counter + 1;
          temp_index = (short)buffer_size_1;
          index_value = index_value * 2 + temp_index;
          // ™e"pn0²:
          **(short **)(render_context + 0x58) = temp_index;
          *(short *)(*(longlong *)(render_context + 0x58) + 2) = index_value + -2;
          *(short *)(*(longlong *)(render_context + 0x58) + 4) = index_value;
          *(longlong *)(render_context + 0x58) = *(longlong *)(render_context + 0x58) + 6;
        } while (loop_counter < (int)vertex_count);
      }
      data_offset = (longlong)(int)vertex_count * 8 + 0xf;
      if (data_offset <= (ulonglong)((longlong)(int)vertex_count * 8)) {
        data_offset = 0xffffffffffffff0;
      }
      // M…XzôèdýpÔÞ
      allocate_render_memory(data_offset & 0xfffffffffffffff0);
    }
    // v¹pn
    process_vertex_data(render_context, (vertex_count - 2) * 3, data_offset);
    if (0 < (int)vertex_count) {
      do {
        data_offset = *vertex_data;
        vertex_data = vertex_data + 1;
        **(undefined8 **)(render_context + 0x50) = data_offset;
        temp_offset = *(longlong *)(render_context + 0x50);
        *(undefined4 *)(temp_offset + 8) = buffer_size_1;
        *(undefined4 *)(temp_offset + 0xc) = buffer_size_2;
        *(uint *)(*(longlong *)(render_context + 0x50) + 0x10) = render_flags;
        *(longlong *)(render_context + 0x50) = *(longlong *)(render_context + 0x50) + 0x14;
        data_offset = data_offset - 1;
      } while (data_offset != 0);
    }
    loop_counter = 2;
    if (2 < (int)vertex_count) {
      do {
        **(undefined2 **)(render_context + 0x58) = *(undefined2 *)(render_context + 0x48);
        index_value = (short)loop_counter;
        *(short *)(*(longlong *)(render_context + 0x58) + 2) = index_value + -1 + *(short *)(render_context + 0x48);
        loop_counter = loop_counter + 1;
        *(short *)(*(longlong *)(render_context + 0x58) + 4) = index_value + *(short *)(render_context + 0x48);
        *(longlong *)(render_context + 0x58) = *(longlong *)(render_context + 0x58) + 6;
      } while (loop_counter < (int)vertex_count);
    }
    *(int *)(render_context + 0x48) = *(int *)(render_context + 0x48) + (vertex_count & 0xffff);
  }
  // Ý¤ÀådýpÔÞ
  check_stack_canary(stack_canary ^ (ulonglong)&stack_size_88);
}



// ýp: 2Ó¹PØb
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
  
  // Àå)>àPŒ"ô	H'
  if ((scale_factor == 0.0) || (end_index < start_index)) {
    clear_render_buffer(render_context + 0x80);
  }
  else {
    buffer_ptr = (int *)(render_context + 0x80);
    // iU²:¹Ïå¹³°„¹P
    expand_render_buffer(buffer_ptr, end_index + 1 + (*buffer_ptr - start_index));
    loop_counter = *buffer_ptr;
    do {
      buffer_capacity = *(int *)(render_context + 0x84);
      // ·Öú@¹P
      tex_coord_u = *(float *)(*(longlong *)(render_context + 0x38) + 0x28 + (longlong)(start_index % 0xc) * 8);
      tex_coord_v = *(float *)(*(longlong *)(render_context + 0x38) + 0x2c + (longlong)(start_index % 0xc) * 8);
      base_coord_u = *texture_coords;
      base_coord_v = texture_coords[1];
      if (loop_counter == buffer_capacity) {
        // ¨t²:'
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
      // ”()>ØbvX¨Øb„¹P
      *(ulonglong *)(*(longlong *)(render_context + 0x88) + (longlong)loop_counter * 8) =
           CONCAT44(scale_factor * tex_coord_v + base_coord_v, scale_factor * tex_coord_u + base_coord_u);
      *buffer_ptr = *buffer_ptr + 1;
      loop_counter = *buffer_ptr;
    } while (start_index <= end_index);
  }
  return;
}



// ýp: 2ÓØbé5”(
void RenderingSystem_TransformMatrixApply(longlong render_context, int transform_count, undefined8 matrix_data, int render_mode)

{
  int *buffer_ptr;
  float matrix_element_1;
  float matrix_element_2;
  float transform_coord_x;
  float transform_coord_y;
  int buffer_capacity;
  int new_capacity;
  longlong transform_context;
  int start_index;
  int end_index;
  int loop_counter;
  float *vertex_ptr;
  float transform_scale;
  
  buffer_ptr = (int *)(render_context + 0x80);
  expand_render_buffer(buffer_ptr, transform_count + (*buffer_ptr - render_mode));
  loop_counter = *buffer_ptr;
  do {
    buffer_capacity = *(int *)(render_context + 0x84);
    // ·ÖØbé5C 
    matrix_element_1 = *(float *)(*(longlong *)(transform_context + 0x38) + 0x28 + (longlong)(start_index % 0xc) * 8);
    matrix_element_2 = *(float *)(*(longlong *)(transform_context + 0x38) + 0x2c + (longlong)(start_index % 0xc) * 8);
    transform_coord_x = *vertex_ptr;
    transform_coord_y = vertex_ptr[1];
    if (loop_counter == buffer_capacity) {
      // ¨t²:'
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
    // ”(Øbé5
    *(ulonglong *)(*(longlong *)(render_context + 0x88) + (longlong)loop_counter * 8) =
         CONCAT44(transform_scale * matrix_element_2 + transform_coord_y, transform_scale * matrix_element_1 + transform_coord_x);
    *buffer_ptr = *buffer_ptr + 1;
    loop_counter = *buffer_ptr;
  } while (start_index <= end_index);
  return;
}



// ýp: 2Ó²:
void RenderingSystem_ClearBuffer(longlong render_context)

{
  clear_render_buffer(render_context + 0x80);
  return;
}



// ýp: 2Óy!Ë
void RenderingSystem_BatchInit(longlong render_context, undefined8 batch_data, float batch_scale, undefined8 texture_data,
                              undefined8 shader_data, int batch_size)

{
  if (batch_scale == 0.0) {
    clear_render_buffer();
  }
  else {
    expand_render_buffer((int *)(render_context + 0x80), batch_size + 1 + *(int *)(render_context + 0x80));
    if (-1 < batch_size) {
      // Ë2Óy!dýpÔÞ
      init_render_batch();
    }
  }
  return;
}



// ýp: 2Óûß¶Ín
void RenderingSystem_ResetState(void)

{
  int batch_size;
  
  expand_render_buffer();
  if (-1 < batch_size) {
    // Ín2Óûß¶dýpÔÞ
    reset_render_system();
  }
  return;
}



// ýp: 2Ó¡¿
void RenderingSystem_CleanupPipeline(void)

{
  // 2Ó¡¿dýpÔÞ
  cleanup_render_pipeline();
}



// ýp: z2ÓÍ\`M&	
void RenderingSystem_EmptyOperation(void)

{
  return;
}



// ýp: z2ÓÍ\`M&	
void RenderingSystem_EmptyOperation2(void)

{
  return;
}



// ýp: 2Ó¹LF¡—Œ
void RenderingSystem_BoundingBoxCalc(longlong render_context, float *min_coords, float *max_coords, float threshold, uint boundary_flags)

{
  byte flag_byte;
  int distance_x;
  int distance_y;
  int temp_distance;
  int *buffer_ptr;
  int new_capacity;
  float coord_distance_x;
  float coord_distance_y;
  float coord_distance_z;
  float coord_distance_w;
  float temp_coord_x;
  float temp_coord_y;
  
  coord_distance_x = 0.5;
  flag_byte = (byte)boundary_flags;
  // 9n¹L×¡—Ý»àP
  if ((flag_byte & 3) == 3 || (flag_byte & 0xc) == 0xc) {
    coord_distance_y = 0.5;
  }
  else {
    coord_distance_y = 1.0;
  }
  coord_distance_y = ABS(*max_coords - *min_coords) * coord_distance_y - 1.0;
  if (coord_distance_y <= threshold) {
    threshold = coord_distance_y;
  }
  if ((flag_byte & 5) != 5 && (flag_byte & 10) != 10) {
    coord_distance_x = 1.0;
  }
  coord_distance_x = ABS(max_coords[1] - min_coords[1]) * coord_distance_x - 1.0;
  if (threshold <= coord_distance_x) {
    coord_distance_x = threshold;
  }
  if ((coord_distance_x <= 0.0) || (boundary_flags == 0)) {
    buffer_ptr = (int *)(render_context + 0x80);
    clear_render_buffer(buffer_ptr);
    temp_coord_x = *max_coords;
    new_capacity = 8;
    temp_coord_y = min_coords[1];
    distance_y = *buffer_ptr;
    distance_x = *(int *)(render_context + 0x84);
    if (distance_y == distance_x) {
      if (distance_x == 0) {
        distance_x = 8;
      }
      else {
        distance_x = distance_x / 2 + distance_x;
      }
      temp_distance = distance_y + 1;
      if (distance_y + 1 < distance_x) {
        temp_distance = distance_x;
      }
      expand_render_buffer(buffer_ptr, temp_distance);
      distance_y = *buffer_ptr;
    }
    // X¨¹LFP
    *(ulonglong *)(*(longlong *)(render_context + 0x88) + (longlong)distance_y * 8) =
         CONCAT44(temp_coord_y, temp_coord_x);
    *buffer_ptr = *buffer_ptr + 1;
    clear_render_buffer(buffer_ptr, max_coords);
    temp_coord_x = *min_coords;
    temp_coord_y = max_coords[1];
    distance_y = *buffer_ptr;
    distance_x = *(int *)(render_context + 0x84);
    if (distance_y == distance_x) {
      if (distance_x != 0) {
        new_capacity = distance_x + distance_x / 2;
      }
      distance_x = distance_y + 1;
      if (distance_y + 1 < new_capacity) {
        distance_x = new_capacity;
      }
      expand_render_buffer(buffer_ptr, distance_x);
      distance_y = *buffer_ptr;
    }
    *(ulonglong *)(*(longlong *)(render_context + 0x88) + (longlong)distance_y * 8) =
         CONCAT44(temp_coord_y, temp_coord_x);
    *buffer_ptr = *buffer_ptr + 1;
  }
  else {
    coord_distance_y = coord_distance_x;
    if ((boundary_flags & 1) == 0) {
      coord_distance_y = 0.0;
    }
    coord_distance_w = coord_distance_x;
    if ((boundary_flags & 2) == 0) {
      coord_distance_w = 0.0;
    }
    coord_distance_z = coord_distance_x;
    if ((boundary_flags & 8) == 0) {
      coord_distance_z = 0.0;
    }
    if ((boundary_flags & 4) == 0) {
      coord_distance_x = 0.0;
    }
    // 9n¹L×ÛLPØb
    temp_coord_x = *min_coords + coord_distance_y;
    temp_coord_y = min_coords[1] + coord_distance_y;
    RenderingSystem_TextureCoordinateTransform(render_context, &temp_coord_x, coord_distance_y, 6, 9);
    temp_coord_y = coord_distance_w + min_coords[1];
    temp_coord_x = *max_coords - coord_distance_w;
    RenderingSystem_TextureCoordinateTransform(render_context, &temp_coord_x, coord_distance_w, 9, 0xc);
    temp_coord_x = *max_coords - coord_distance_z;
    temp_coord_y = max_coords[1] - coord_distance_z;
    RenderingSystem_TextureCoordinateTransform(render_context, &temp_coord_x, coord_distance_z, 0, 3);
    temp_coord_x = coord_distance_x + *min_coords;
    temp_coord_y = max_coords[1] - coord_distance_x;
    RenderingSystem_TextureCoordinateTransform(render_context, &temp_coord_x, coord_distance_x, 3, 6);
  }
  return;
}



// ýp: 2Ó¹LiU
void RenderingSystem_BoundaryExpand(undefined4 render_context)

{
  float *vertex_ptr_1;
  float *vertex_ptr_2;
  byte boundary_flags;
  float base_offset;
  float expansion_factor;
  float temp_coord_1;
  float temp_coord_2;
  float scale_factor;
  float stack_coord_1;
  float stack_coord_2;
  
  stack_coord_2 = expansion_factor;
  if ((boundary_flags & 1) == 0) {
    stack_coord_2 = 0.0;
  }
  temp_coord_2 = expansion_factor;
  if ((boundary_flags & 2) == 0) {
    temp_coord_2 = 0.0;
  }
  temp_coord_1 = expansion_factor;
  if ((boundary_flags & 8) == 0) {
    temp_coord_1 = 0.0;
  }
  if ((boundary_flags & 4) == 0) {
    expansion_factor = 0.0;
  }
  stack_coord_1 = scale_factor + stack_coord_2;
  stack_coord_2 = base_offset + stack_coord_2;
  RenderingSystem_TextureCoordinateTransform(render_context, &stack_coord_1);
  stack_coord_2 = temp_coord_2 + vertex_ptr_1[1];
  stack_coord_1 = *vertex_ptr_2 - temp_coord_2;
  RenderingSystem_TextureCoordinateTransform(stack_coord_1, &stack_coord_1, temp_coord_2, 9, 0xc);
  stack_coord_1 = *vertex_ptr_2 - temp_coord_1;
  stack_coord_2 = vertex_ptr_2[1] - temp_coord_1;
  RenderingSystem_TextureCoordinateTransform(stack_coord_1, &stack_coord_1, temp_coord_1, 0, 3);
  stack_coord_1 = expansion_factor + *vertex_ptr_1;
  stack_coord_2 = vertex_ptr_2[1] - expansion_factor;
  RenderingSystem_TextureCoordinateTransform(stack_coord_1, &stack_coord_1, expansion_factor, 3, 6);
  return;
}



// ýp: 2Óv¹pnû 
void RenderingSystem_AddVertexData(void)

{
  undefined4 vertex_data_1;
  int buffer_capacity;
  int current_size;
  int new_capacity;
  longlong render_context;
  int *buffer_ptr;
  undefined4 *vertex_ptr_1;
  undefined4 *vertex_ptr_2;
  int expansion_size;
  undefined4 stack_vertex_2;
  
  buffer_ptr = (int *)(render_context + 0x80);
  clear_render_buffer(buffer_ptr);
  vertex_data_1 = *vertex_ptr_2;
  expansion_size = 8;
  stack_vertex_2 = vertex_ptr_1[1];
  current_size = *buffer_ptr;
  buffer_capacity = *(int *)(render_context + 0x84);
  if (current_size == buffer_capacity) {
    if (buffer_capacity == 0) {
      buffer_capacity = 8;
    }
    else {
      buffer_capacity = buffer_capacity / 2 + buffer_capacity;
    }
    new_capacity = current_size + 1;
    if (current_size + 1 < buffer_capacity) {
      new_capacity = buffer_capacity;
    }
    expand_render_buffer(buffer_ptr, new_capacity);
    current_size = *buffer_ptr;
  }
  // û v¹pn02Ó²:
  *(ulonglong *)(*(longlong *)(render_context + 0x88) + (longlong)current_size * 8) =
       CONCAT44(stack_vertex_2, vertex_data_1);
  *buffer_ptr = *buffer_ptr + 1;
  clear_render_buffer(buffer_ptr);
  vertex_data_1 = *vertex_ptr_1;
  stack_vertex_2 = vertex_ptr_2[1];
  current_size = *buffer_ptr;
  buffer_capacity = *(int *)(render_context + 0x84);
  if (current_size == buffer_capacity) {
    if (buffer_capacity != 0) {
      expansion_size = buffer_capacity + buffer_capacity / 2;
    }
    buffer_capacity = current_size + 1;
    if (current_size + 1 < expansion_size) {
      buffer_capacity = expansion_size;
    }
    expand_render_buffer(buffer_ptr, buffer_capacity);
    current_size = *buffer_ptr;
  }
  *(ulonglong *)(*(longlong *)(render_context + 0x88) + (longlong)current_size * 8) =
       CONCAT44(stack_vertex_2, vertex_data_1);
  *buffer_ptr = *buffer_ptr + 1;
  return;
}



// ýp: 2Óv¹pnû ØS	
void RenderingSystem_AddVertexDataVariant(void)

{
  undefined4 vertex_data_1;
  int buffer_capacity;
  int current_size;
  int new_capacity;
  int *buffer_ptr;
  undefined4 *vertex_ptr_1;
  undefined4 *vertex_ptr_2;
  int expansion_size;
  undefined4 stack_vertex_2;
  
  clear_render_buffer();
  vertex_data_1 = *vertex_ptr_2;
  expansion_size = 8;
  stack_vertex_2 = vertex_ptr_1[1];
  current_size = *buffer_ptr;
  buffer_capacity = buffer_ptr[1];
  if (current_size == buffer_capacity) {
    if (buffer_capacity == 0) {
      buffer_capacity = 8;
    }
    else {
      buffer_capacity = buffer_capacity / 2 + buffer_capacity;
    }
    new_capacity = current_size + 1;
    if (current_size + 1 < buffer_capacity) {
      new_capacity = buffer_capacity;
    }
    expand_render_buffer(vertex_data_1, new_capacity);
    current_size = *buffer_ptr;
  }
  *(ulonglong *)(*(longlong *)(buffer_ptr + 2) + (longlong)current_size * 8) =
       CONCAT44(stack_vertex_2, vertex_data_1);
  *buffer_ptr = *buffer_ptr + 1;
  clear_render_buffer();
  vertex_data_1 = *vertex_ptr_1;
  stack_vertex_2 = vertex_ptr_2[1];
  current_size = *buffer_ptr;
  buffer_capacity = buffer_ptr[1];
  if (current_size == buffer_capacity) {
    if (buffer_capacity != 0) {
      expansion_size = buffer_capacity + buffer_capacity / 2;
    }
    buffer_capacity = current_size + 1;
    if (current_size + 1 < expansion_size) {
      buffer_capacity = expansion_size;
    }
    expand_render_buffer(vertex_data_1, buffer_capacity);
    current_size = *buffer_ptr;
  }
  *(ulonglong *)(*(longlong *)(buffer_ptr + 2) + (longlong)current_size * 8) =
       CONCAT44(stack_vertex_2, vertex_data_1);
  *buffer_ptr = *buffer_ptr + 1;
  return;
}



// ýp: z2ÓÍ\`M&	
void RenderingSystem_EmptyOperation3(void)

{
  return;
}



// ýp: 2Ó¹ 
void RenderingSystem_TextureMappingProcess(longlong render_context, float *texture_coords_1, float *texture_coords_2, uint texture_flags, undefined4 render_params)

{
  int *buffer_ptr;
  float tex_coord_u_1;
  float tex_coord_v_1;
  int buffer_capacity;
  int current_size;
  int new_capacity;
  int expansion_size;
  
  if ((texture_flags & 0xff000000) != 0) {
    tex_coord_u_1 = *texture_coords_1;
    buffer_ptr = (int *)(render_context + 0x80);
    buffer_capacity = *(int *)(render_context + 0x84);
    expansion_size = 8;
    tex_coord_v_1 = texture_coords_1[1];
    current_size = *buffer_ptr;
    if (current_size == buffer_capacity) {
      if (buffer_capacity == 0) {
        buffer_capacity = 8;
      }
      else {
        buffer_capacity = buffer_capacity / 2 + buffer_capacity;
      }
      new_capacity = current_size + 1;
      if (current_size + 1 < buffer_capacity) {
        new_capacity = buffer_capacity;
      }
      expand_render_buffer(buffer_ptr, new_capacity);
      current_size = *buffer_ptr;
    }
    // û OûÏvX¨¹P
    *(ulonglong *)(*(longlong *)(render_context + 0x88) + (longlong)current_size * 8) =
         CONCAT44(tex_coord_v_1 + 0.5, tex_coord_u_1 + 0.5);
    *buffer_ptr = *buffer_ptr + 1;
    tex_coord_u_1 = *texture_coords_2;
    tex_coord_v_1 = texture_coords_2[1];
    buffer_capacity = *buffer_ptr;
    current_size = *(int *)(render_context + 0x84);
    if (buffer_capacity == current_size) {
      if (current_size != 0) {
        expansion_size = current_size + current_size / 2;
      }
      current_size = buffer_capacity + 1;
      if (buffer_capacity + 1 < expansion_size) {
        current_size = expansion_size;
      }
      expand_render_buffer(buffer_ptr, current_size);
      buffer_capacity = *buffer_ptr;
    }
    *(ulonglong *)(*(longlong *)(render_context + 0x88) + (longlong)buffer_capacity * 8) =
         CONCAT44(tex_coord_v_1 + 0.5, tex_coord_u_1 + 0.5);
    *buffer_ptr = *buffer_ptr + 1;
    // ¹ pn
    process_texture_mapping(render_context, *(undefined8 *)(render_context + 0x88), *buffer_ptr, texture_flags, 0, render_params);
    *buffer_ptr = 0;
  }
  return;
}



// ýp: 2Ó@rhÂp¾n
void RenderingSystem_SetShaderParams(float param_1, longlong render_context, float *shader_params, undefined8 texture_data,
                                    undefined8 shader_data, undefined8 uniform_data)

{
  int *buffer_ptr;
  float shader_param_1;
  float shader_param_2;
  int buffer_capacity;
  int current_size;
  int new_capacity;
  longlong param_ptr;
  longlong context_ptr;
  undefined4 render_flags;
  longlong texture_ptr;
  int expansion_size;
  undefined8 shader_buffer;
  undefined4 uniform_value_1;
  undefined4 uniform_value_2;
  undefined4 uniform_value_3;
  undefined4 uniform_value_4;
  undefined4 stack_param_1;
  
  *(undefined8 *)(param_ptr + 0x10) = shader_buffer;
  buffer_ptr = (int *)(context_ptr + 0x80);
  buffer_capacity = *(int *)(context_ptr + 0x84);
  *(undefined4 *)(param_ptr + -0x18) = uniform_value_1;
  *(undefined4 *)(param_ptr + -0x14) = uniform_value_2;
  *(undefined4 *)(param_ptr + -0x10) = uniform_value_3;
  *(undefined4 *)(param_ptr + -0xc) = uniform_value_4;
  expansion_size = 8;
  *(float *)(param_ptr + -0x28) = param_1 + 0.5;
  *(float *)(param_ptr + -0x24) = *(float *)(render_context + 4) + 0.5;
  current_size = *buffer_ptr;
  if (current_size == buffer_capacity) {
    if (buffer_capacity == 0) {
      buffer_capacity = 8;
    }
    else {
      buffer_capacity = buffer_capacity / 2 + buffer_capacity;
    }
    new_capacity = current_size + 1;
    if (current_size + 1 < buffer_capacity) {
      new_capacity = buffer_capacity;
    }
    expand_render_buffer(buffer_ptr, new_capacity);
    current_size = *buffer_ptr;
  }
  *(undefined8 *)(*(longlong *)(context_ptr + 0x88) + (longlong)current_size * 8) = uniform_data;
  *buffer_ptr = *buffer_ptr + 1;
  shader_param_1 = *shader_params;
  shader_param_2 = shader_params[1];
  buffer_capacity = *buffer_ptr;
  current_size = *(int *)(context_ptr + 0x84);
  if (buffer_capacity == current_size) {
    if (current_size != 0) {
      expansion_size = current_size + current_size / 2;
    }
    current_size = buffer_capacity + 1;
    if (buffer_capacity + 1 < expansion_size) {
      current_size = expansion_size;
    }
    expand_render_buffer(buffer_ptr, current_size);
    buffer_capacity = *buffer_ptr;
  }
  *(ulonglong *)(*(longlong *)(context_ptr + 0x88) + (longlong)buffer_capacity * 8) =
       CONCAT44(shader_param_2 + 0.5, shader_param_1 + 0.5);
  *buffer_ptr = *buffer_ptr + 1;
  process_texture_mapping(stack_param_1, *(undefined8 *)(texture_ptr + 0x88), *buffer_ptr, render_flags, 0);
  *buffer_ptr = 0;
  return;
}



// ýp: 2Óv¹^'¾n
void RenderingSystem_SetVertexAttributes(float position_x, longlong vertex_data)

{
  float temp_coord_1;
  int buffer_capacity;
  longlong param_ptr;
  int current_size;
  int new_capacity;
  int *buffer_ptr;
  undefined4 render_flags;
  longlong render_context;
  int expansion_size;
  float *vertex_ptr;
  float temp_coord_2;
  undefined4 uniform_value_1;
  undefined4 uniform_value_2;
  undefined4 uniform_value_3;
  undefined4 uniform_value_4;
  undefined8 stack_param_1;
  undefined4 stack_param_2;
  
  *(undefined4 *)(param_ptr + -0x18) = uniform_value_1;
  *(undefined4 *)(param_ptr + -0x14) = uniform_value_2;
  *(undefined4 *)(param_ptr + -0x10) = uniform_value_3;
  *(undefined4 *)(param_ptr + -0xc) = uniform_value_4;
  expansion_size = 8;
  *(float *)(param_ptr + -0x28) = position_x + 0.5;
  temp_coord_2 = *(float *)(vertex_data + 4) + 0.5;
  *(float *)(param_ptr + -0x24) = temp_coord_2;
  current_size = *buffer_ptr;
  if (current_size == current_size) {
    if (current_size == 0) {
      current_size = 8;
    }
    else {
      current_size = current_size / 2 + current_size;
    }
    new_capacity = current_size + 1;
    if (current_size + 1 < current_size) {
      new_capacity = current_size;
    }
    expand_render_buffer(temp_coord_2, new_capacity);
    current_size = *buffer_ptr;
  }
  *(undefined8 *)(*(longlong *)(buffer_ptr + 2) + (longlong)current_size * 8) = stack_param_1;
  *buffer_ptr = *buffer_ptr + 1;
  temp_coord_2 = *vertex_ptr;
  temp_coord_1 = vertex_ptr[1];
  current_size = *buffer_ptr;
  new_capacity = buffer_ptr[1];
  if (current_size == new_capacity) {
    if (new_capacity != 0) {
      expansion_size = new_capacity + new_capacity / 2;
    }
    new_capacity = current_size + 1;
    if (current_size + 1 < expansion_size) {
      new_capacity = expansion_size;
    }
    expand_render_buffer(temp_coord_2 + 0.5, new_capacity);
    current_size = *buffer_ptr;
  }
  *(ulonglong *)(*(longlong *)(buffer_ptr + 2) + (longlong)current_size * 8) =
       CONCAT44(temp_coord_1 + 0.5, temp_coord_2 + 0.5);
  *buffer_ptr = *buffer_ptr + 1;
  process_texture_mapping(stack_param_2, *(undefined8 *)(render_context + 0x88), *buffer_ptr, render_flags, 0);
  *buffer_ptr = 0;
  return;
}



// ýp: 2Ó²:iU
void RenderingSystem_ExpandBuffer(undefined4 render_context, undefined8 buffer_data, int expansion_size, undefined8 texture_data,
                                  undefined8 shader_data, undefined8 uniform_data)

{
  int current_size;
  int new_capacity;
  int *buffer_ptr;
  undefined4 render_flags;
  longlong render_context_ptr;
  int target_size;
  undefined4 stack_param_1;
  
  if (expansion_size != 0) {
    target_size = expansion_size + expansion_size / 2;
  }
  new_capacity = current_size + 1;
  if (current_size + 1 < target_size) {
    new_capacity = target_size;
  }
  expand_render_buffer(render_context, new_capacity);
  *(undefined8 *)(*(longlong *)(buffer_ptr + 2) + (longlong)*buffer_ptr * 8) = uniform_data;
  *buffer_ptr = *buffer_ptr + 1;
  process_texture_mapping(stack_param_1, *(undefined8 *)(render_context_ptr + 0x88), *buffer_ptr, render_flags, 0);
  *buffer_ptr = 0;
  return;
}



// ýp: z2ÓÍ\`M&	
void RenderingSystem_EmptyOperation4(void)

{
  return;
}



// ýp: 2Ó¿aØ6
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
  // ¡—¿a„¹LF
  RenderingSystem_BoundingBoxCalc(0x3f000000, &stack_coord_1, &temp_coord_1, line_width, line_style);
  // ¿aØ6pn
  process_line_drawing(render_context, *(undefined8 *)(render_context + 0x88), *(undefined4 *)(render_context + 0x80), line_color, 1,
                       line_style);
  *(undefined4 *)(render_context + 0x80) = 0;
  return;
}



// ýp: 2ÓÛ¹bØ6
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
      // ËÛ¹bv¹²:
      init_quad_vertex_buffer(0, 6, 4);
      index_value = *(short *)(render_context + 0x48);
      vertex_data_1_a = *(undefined4 *)vertex_data_2;
      vertex_data_1_b = *(undefined4 *)((longlong)vertex_data_1 + 4);
      vertex_data_1_c = *(undefined4 *)vertex_data_1;
      vertex_data_1_d = (*(undefined4 **)(render_context + 0x38))[1];
      vertex_data_1_e = **(undefined4 **)(render_context + 0x38);
      vertex_data_1_f = *(undefined4 *)((longlong)vertex_data_2 + 4);
      // ¾nÛ¹b"
      **(short **)(render_context + 0x58) = index_value;
      *(short *)(*(longlong *)(render_context + 0x58) + 2) = index_value + 1;
      *(short *)(*(longlong *)(render_context + 0x58) + 4) = index_value + 2;
      *(short *)(*(longlong *)(render_context + 0x58) + 6) = index_value;
      *(short *)(*(longlong *)(render_context + 0x58) + 8) = index_value + 2;
      *(short *)(*(longlong *)(render_context + 0x58) + 10) = index_value + 3;
      // û Û¹bv¹pn
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
      // )>„Û¹bØ6
      RenderingSystem_BoundingBoxCalc(0, vertex_data_1, vertex_data_2, quad_scale, render_params);
      RenderingSystem_ProcessVertexIndexBuffer(render_context, *(undefined8 *)(render_context + 0x88), *(undefined4 *)(render_context + 0x80), render_flags);
      *(undefined4 *)(render_context + 0x80) = 0;
    }
  }
  return;
}



// ýp: 2ÓÛ¹by!
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
  
  // ËÛ¹by!v¹²:
  init_quad_vertex_buffer(batch_size, vertex_count, (int)vertex_count + -2);
  index_value = *(short *)(render_context + 0x48);
  vertex_data_1 = *(undefined4 *)vertex_ptr_2;
  vertex_data_1_b = *(undefined4 *)((longlong)vertex_ptr_1 + 4);
  vertex_data_1_c = *(undefined4 *)vertex_ptr_1;
  vertex_data_1_d = (*(undefined4 **)(render_context + 0x38))[1];
  vertex_data_1_e = **(undefined4 **)(render_context + 0x38);
  vertex_data_1_f = *(undefined4 *)((longlong)vertex_ptr_2 + 4);
  // ¾nÛ¹b"
  **(short **)(render_context + 0x58) = index_value;
  *(short *)(*(longlong *)(render_context + 0x58) + 2) = index_value + 1;
  *(short *)(*(longlong *)(render_context + 0x58) + 4) = index_value + 2;
  *(short *)(*(longlong *)(render_context + 0x58) + 6) = index_value;
  *(short *)(*(longlong *)(render_context + 0x58) + 8) = index_value + 2;
  *(short *)(*(longlong *)(render_context + 0x58) + 10) = index_value + 3;
  // û Û¹bv¹pn
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



// ýp: z2ÓÍ\`M&	
void RenderingSystem_EmptyOperation5(void)

{
  return;
}



// ýp: 2Ó	Òby!
void RenderingSystem_TriangleBatchProcess(longlong render_context, undefined8 vertex_data_1, undefined8 vertex_data_2, undefined8 vertex_data_3,
                                           uint render_flags)

{
  if ((render_flags & 0xff000000) != 0) {
    clear_render_buffer(render_context + 0x80);
    clear_render_buffer(render_context + 0x80, vertex_data_2);
    clear_render_buffer(render_context + 0x80, vertex_data_3);
    RenderingSystem_ProcessVertexIndexBuffer(render_context, *(undefined8 *)(render_context + 0x88), *(undefined4 *)(render_context + 0x80), render_flags);
    *(undefined4 *)(render_context + 0x80) = 0;
  }
  return;
}



// ýp: 2Ó	Òby!ØS	
void RenderingSystem_TriangleBatchProcessVariant(void)

{
  longlong render_context;
  
  clear_render_buffer();
  clear_render_buffer(render_context + 0x80);
  clear_render_buffer(render_context + 0x80);
  RenderingSystem_ProcessVertexIndexBuffer();
  *(undefined4 *)(render_context + 0x80) = 0;
  return;
}



// ýp: z2ÓÍ\`M&	
void RenderingSystem_EmptyOperation6(void)

{
  return;
}



// ýp: 2ÓbØ6
void RenderingSystem_CircleDrawingProcess(longlong render_context, undefined8 circle_data, undefined8 center_point, undefined8 radius_data,
                                         uint render_flags)

{
  if ((render_flags & 0xff000000) != 0) {
    RenderingSystem_BatchInit(0x40bc7edd, circle_data, radius_data - 0.5, 0, 0x40bc7edd, 0xf);
    process_line_drawing(render_context, *(undefined8 *)(render_context + 0x88), *(undefined4 *)(render_context + 0x80), render_flags, 1,
                       render_flags);
    *(undefined4 *)(render_context + 0x80) = 0;
  }
  return;
}



// ýp: 2Ó‡,Ø6
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
        // Áj‡,Mn0š¹L
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
      // ‡,Ø6
      process_text_rendering(font_data, render_context, font_size, *text_data, text_flags, &stack_data_1, text_buffer, text_length, text_color,
                            text_position != (float *)0x0);
    }
  }
  return;
}



// ýp: 2Ó‡,y
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
      process_text_rendering(*(undefined8 *)(*(longlong *)(render_context + 0x38) + 8), render_context,
                            *(undefined4 *)(*(longlong *)(render_context + 0x38) + 0x10), *text_data, text_flags,
                            &stack_data_1, text_buffer, data_offset + text_buffer, 0, 0);
    }
  }
  return;
}



// fJå'_' 4„h@ØÏ 0@„ƒ&÷Íà

