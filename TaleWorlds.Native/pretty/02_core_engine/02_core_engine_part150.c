#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part150.c - 核心引擎模块第150部分
// 本文件包含6个函数，主要用于渲染、纹理处理和引擎状态管理

// 函数: void render_shadow_mapping(void *render_context, longlong context_id, void *texture_data, longlong texture_id)
// 功能: 执行阴影映射渲染，处理纹理坐标和渲染状态
void render_shadow_mapping(void *render_context, longlong context_id, void *texture_data, longlong texture_id)

{
  bool is_shadow_enabled;
  uint texture_index;
  float shadow_intensity;
  void *shadow_buffer;
  char render_mode;
  uint render_flags;
  float *texture_coords;
  float *uv_coords;
  longlong shader_program;
  void *material_ptr;
  longlong vertex_count;
  ulonglong face_count;
  longlong polygon_count;
  int material_id;
  void *mesh_data;
  longlong light_position;
  float light_intensity;
  float ambient_light;
  float diffuse_light;
  float specular_light;
  float shadow_distance;
  float shadow_softness;
  float shadow_bias;
  void *render_state;
  longlong viewport_width;
  void *frame_buffer;
  float depth_value;
  float stencil_value;
  float color_value;
  float alpha_value;
  float blend_factor;
  longlong index_buffer;
  void *vertex_buffer;
  float near_plane;
  float far_plane;
  uint render_pass;
  longlong transform_matrix;
  float projection_matrix[16];
  float view_matrix[16];
  float model_matrix[16];
  longlong uniform_buffer;
  
  transform_matrix = _DAT_180c8a9b0;  // 全局引擎状态指针
  render_mode = *(char *)(_DAT_180c8a9b0 + 0xc3);  // 渲染模式标志
  shadow_buffer = render_context;
  context_id = context_id;
  texture_data = texture_data;
  texture_id = texture_id;
  render_pass = FUN_1801247c0(render_context[5]);  // 获取渲染通道
  material_id = 1;
  polygon_count = 1;
  index_buffer = 1;
  if ((render_context[5] != texture_data[5]) && (index_buffer = 1, render_mode == '\0')) {
    render_pass[1] = FUN_1801247c0();  // 获取第二个渲染通道
    polygon_count = 2;
    index_buffer = 2;
  }
  render_state = *(float **)(_DAT_180c8a9b0 + 0x18f8);  // 渲染状态
  depth_value = *(float *)(_DAT_180c8a9b0 + 0x1900);  // 深度值
  shadow_intensity = *(float *)(_DAT_180c8a9b0 + 0x1628);  // 阴影强度
  stencil_value = *(float *)(_DAT_180c8a9b0 + 0x1904) * shadow_intensity;  // 模板值
  shader_program = _DAT_180c8a9b0;
  color_value = (float)func_0x000180121e20(&render_state);  // 计算颜色值
  ambient_light = 0.6;  // 环境光强度
  if (render_mode == '\0') {
    light_intensity = 0.4;  // 光照强度
  }
  else {
    light_intensity = 0.6;  // 光照强度
  }
  render_state = *(float **)(shader_program + 0x1928);
  depth_value = *(float *)(shader_program + 0x1930);
  stencil_value = *(float *)(shader_program + 0x1934) * shadow_intensity * light_intensity;
  render_flags = func_0x000180121e20(&render_state);
  if (render_mode == '\0') {
    light_intensity = 0.7;
  }
  else {
    light_intensity = 0.9;
  }
  render_state = *(float **)(shader_program + 0x1928);
  depth_value = *(float *)(shader_program + 0x1930);
  stencil_value = *(float *)(shader_program + 0x1934) * shadow_intensity * light_intensity;
  blend_factor = func_0x000180121e20(&render_state);
  if (render_mode == '\0') {
    light_intensity = 1.0;
  }
  else {
    light_intensity = 1.2;
  }
  render_state = *(float **)(shader_program + 0x1928);
  depth_value = *(float *)(shader_program + 0x1930);
  stencil_value = *(float *)(shader_program + 0x1934) * shadow_intensity * light_intensity;
  alpha_value = func_0x000180121e20(&render_state);
  if (render_mode != '\0') {
    ambient_light = 0.8;
  }
  render_state = *(float **)(shader_program + 0x19b8);
  depth_value = *(float *)(shader_program + 0x19c0);
  stencil_value = *(float *)(shader_program + 0x19c4) * shadow_intensity * ambient_light;
  texture_index = func_0x000180121e20(&render_state);
  if ((texture_data[0x82] == 0) || (0 < *(int *)(texture_data[0x82] + 0x20))) {
    is_shadow_enabled = true;  // 阴影启用状态
  }
  else {
    is_shadow_enabled = false;
  }
  render_mode = *(char *)(texture_id + 0xa8);
  polygon_count = context_id;
  render_pass = texture_index;
  if (render_mode == '\0') goto LAB_180139e51;
  shadow_intensity = *(float *)(texture_id + 0x38);
  render_state = *(float **)(texture_id + 0x38);
  depth_value = shadow_intensity + *(float *)(texture_id + 0x40);
  stencil_value = *(float *)(texture_id + 0x3c) + *(float *)(texture_id + 0x44);
  if (*(int *)(texture_id + 0xb8) == -1) {
    if (is_shadow_enabled) {
      render_state = (float *)CONCAT44(*(float *)(shader_program + 0x1660) + *(float *)(shader_program + 0x1660) +
                                     *(float *)(shader_program + 0x19f8) + *(float *)(texture_id + 0x3c),
                                     shadow_intensity);
    }
    if (*(char *)(texture_id + 0xa9) != '\0') goto LAB_180139b2f;
  }
  else {
LAB_180139b2f:
    shader_program = 0;
    do {
      FUN_180293f50(render_pass[shader_program],&render_state,&depth_value,render_flags,*(int32_t *)(render_context + 0xf)
                    ,0xf);
      shader_program = shader_program + 1;
    } while (shader_program < polygon_count);
    render_mode = *(char *)(texture_id + 0xa8);
  }
  material_ptr = texture_data;
  polygon_count = context_id;
  if ((((render_mode != '\0') && (is_shadow_enabled)) && (*(int *)(texture_id + 0xb8) == -1)) &&
     (*(char *)(texture_id + 0xa9) != '\0')) {
    func_0x000180138fc0(&vertex_buffer,texture_id);
    polygon_count = context_id;
    shadow_intensity = (float)vertex_buffer;
    if ((context_id == 0) || (*(longlong *)(context_id + 0x30) == 0)) {
      ambient_light = (float)vertex_buffer;
      if ((*(uint *)((longlong)render_context + 0xc) & 0x20000000) == 0) {
        texture_coords = (float *)FUN_18011ce30(&render_state,*render_context,
                                        *(int8_t *)((longlong)render_context + 0xb7));
        ambient_light = *(float *)(transform_matrix + 0x1674) + *texture_coords + shadow_intensity;
      }
    }
    else {
      if ((*(byte *)(context_id + 0xa0) & 0x40) == 0) {
        ambient_light = *(float *)(*(longlong *)(context_id + 0x30) + 0x3c);
      }
      else {
        texture_coords = (float *)FUN_18011ce30(&render_state,
                                        *(uint64_t *)**(longlong **)(context_id + 0x28),
                                        *(int8_t *)(**(longlong **)(context_id + 0x28) + 0xb7));
        ambient_light = *texture_coords;
      }
      ambient_light = shadow_intensity + ambient_light + *(float *)(transform_matrix + 0x1674);
    }
    if (material_ptr[0x82] != 0) {
      material_id = **(int **)(material_ptr[0x82] + 0x30);
    }
    polygon_count = (longlong)material_id;
    texture_index = render_pass;
    if (0 < material_id) {
      shader_program = 0;
      light_intensity = vertex_buffer._4_4_;
      do {
        transform_matrix = transform_matrix;
        mesh_data = material_ptr;
        if (material_ptr[0x82] != 0) {
          mesh_data = *(uint64_t **)
                     (*(longlong *)(*(longlong *)(material_ptr[0x82] + 0x30) + 8) + 8 + shader_program);
        }
        render_mode = func_0x000180138e60(mesh_data,render_context);
        diffuse_light = ambient_light;
        if (render_mode != '\0') {
          FUN_18011ce30(&near_plane,*mesh_data,*(int8_t *)((longlong)mesh_data + 0xb7));
          shadow_buffer = vertex_buffer;
          color_value = color_value;
          specular_light = ambient_light + near_plane;
          shadow_softness = light_intensity + stencil_value;
          render_state = (float *)CONCAT44(light_intensity,ambient_light);
          face_count = 0;
          blend_factor = ambient_light + near_plane + *(float *)(transform_matrix + 0x1674);
          shadow_distance = light_intensity;
          depth_value = specular_light;
          stencil_value = shadow_softness;
          do {
            texture_index = *(uint *)((longlong)mesh_data + 0xc) >> 0x14 & 1 | 0x200000;
            if (((ambient_light < shadow_intensity) || (shadow_distance < light_intensity)) ||
               ((far_plane < specular_light || (near_plane < shadow_softness)))) {
              FUN_180291b40(render_pass[face_count],shadow_buffer,CONCAT44(near_plane,far_plane),0);
            }
            transform_matrix = render_pass[face_count];
            FUN_18011cf80(transform_matrix,&render_state,texture_index,color_value);
            FUN_18011d200(transform_matrix,&render_state,texture_index,*mesh_data,0,0);
            shadow_softness = stencil_value;
            specular_light = depth_value;
            ambient_light = (float)render_state;
            shadow_distance = render_state._4_4_;
            if (((((float)render_state < shadow_intensity) || (render_state._4_4_ < light_intensity)) ||
                (far_plane < depth_value)) || (near_plane < shadow_softness)) {
              *(int *)(transform_matrix + 0x60) = *(int *)(transform_matrix + 0x60) + -1;
              FUN_180291950(transform_matrix);
            }
            face_count = face_count + 1;
            material_ptr = texture_data;
            render_context = shadow_buffer;
            diffuse_light = blend_factor;
          } while (face_count < index_buffer);
        }
        shader_program = shader_program + 0x28;
        polygon_count = polygon_count + -1;
        polygon_count = context_id;
        ambient_light = diffuse_light;
        texture_index = render_pass;
      } while (polygon_count != 0);
    }
  }
LAB_180139e51:
  face_count = 0xffffffffffffffff;
  shadow_intensity = *(float *)(transform_matrix + 0x1664);
  if (shadow_intensity <= 3.0) {
    shadow_intensity = 3.0;
  }
  render_state = (float *)(texture_id + 0xc4);
  vertex_buffer = 0xffffffffffffffff;
  polygon_count = texture_id;
  shader_program = transform_matrix;
  do {
    face_count = index_buffer;
    texture_index = render_pass;
    material_id = (int)vertex_buffer;
    if ((render_state[-1] <= render_state[1]) && (*render_state <= render_state[2])) {
      shadow_distance = render_state[-1] - -2.0;
      diffuse_light = *render_state - -2.0;
      light_intensity = render_state[1] - 2.0;
      projection_matrix[0] = render_state[-1];
      projection_matrix[1] = *render_state;
      projection_matrix[2] = render_state[1];
      projection_matrix[3] = render_state[2];
      ambient_light = render_state[2] - 2.0;
      if ((*(int *)(polygon_count + 0xb8) != material_id) ||
         (render_flags = alpha_value, *(char *)(polygon_count + 0xab) == '\0')) {
        render_flags = blend_factor;
      }
      polygon_count = 0;
      specular_light = (float)(int)((shadow_distance + light_intensity) * 0.5);
      shadow_softness = (float)(int)((diffuse_light + ambient_light) * 0.5);
      do {
        transform_matrix = render_pass[polygon_count];
        FUN_180293f50(transform_matrix,&projection_matrix[0],&projection_matrix[2],render_flags,shadow_intensity,0xf);
        if ((texture_index & 0xff000000) != 0) {
          if ((*(byte *)(transform_matrix + 0x30) & 1) == 0) {
            near_plane = light_intensity - 0.49;
            stencil_value = ambient_light - 0.49;
            texture_coords = &near_plane;
            uv_coords = &blend_factor;
            blend_factor = shadow_distance + 0.5;
            far_plane = diffuse_light + 0.5;
          }
          else {
            shadow_buffer = (uint64_t *)CONCAT44(diffuse_light + 0.5,shadow_distance + 0.5);
            texture_coords = (float *)&texture_data;
            uv_coords = (float *)&shadow_buffer;
            texture_data = (uint64_t *)CONCAT44(ambient_light - 0.5,light_intensity - 0.5);
          }
          FUN_1802939e0(transform_matrix,uv_coords,texture_coords,shadow_intensity,0xf);
          FUN_1802923e0(transform_matrix,*(uint64_t *)(transform_matrix + 0x88),*(int32_t *)(transform_matrix + 0x80),texture_index,1
                        ,0x3f800000);
          *(int32_t *)(transform_matrix + 0x80) = 0;
        }
        if (face_count < 2) {
          color_value = specular_light;
          far_plane = ambient_light;
          projection_matrix[0] = specular_light;
          projection_matrix[1] = diffuse_light;
          FUN_180293d20(transform_matrix,&projection_matrix[0],&color_value,texture_index,0x3f800000);
        }
        if (face_count - 2 < 2) {
          model_matrix[0] = light_intensity;
          model_matrix[1] = shadow_softness;
          view_matrix[0] = shadow_distance;
          view_matrix[1] = shadow_softness;
          FUN_180293d20(transform_matrix,&view_matrix[0],&model_matrix[0],texture_index,0x3f800000);
        }
        polygon_count = polygon_count + 1;
      } while (polygon_count < face_count);
      material_id = (int)vertex_buffer;
      polygon_count = texture_id;
      shader_program = transform_matrix;
      transform_matrix = context_id;
    }
    if ((transform_matrix != 0) && ((*(byte *)(transform_matrix + 4) & 2) != 0)) {
      return;
    }
    if (*(char *)(shader_program + 0xc0) != '\0') {
      return;
    }
    vertex_buffer = (ulonglong)(material_id + 1);
    render_state = render_state + 4;
    face_count = face_count + 1;
    texture_index = render_pass;
  } while ((longlong)face_count < 4);
  return;
}


// 全局变量: _DAT_180c8a9b0 - 主引擎状态指针
// 警告: 以下全局变量与其他符号地址重叠


// 函数: void create_render_target(longlong engine_ptr, longlong target_ptr, int width, int height, float scale_factor,
//                                uint32_t *texture_params)
// 功能: 创建渲染目标，设置纹理参数和帧缓冲区
void create_render_target(longlong engine_ptr, longlong target_ptr, int width, int height, float scale_factor,
                          uint32_t *texture_params)

{
  float texture_width;
  longlong texture_format;
  byte texture_flags;
  uint32_t format_flags;
  uint32_t *texture_ptr;
  uint32_t *frame_buffer_ptr;
  longlong buffer_size;
  longlong memory_size;
  uint32_t color_format;
  uint32_t depth_format;
  uint32_t target_format;
  uint32_t render_format;
  uint32_t attachment_format;
  uint32_t mip_format;
  float texture_height;
  float texture_depth;
  float texture_levels;
  float texture_samples;
  uint32_t texture_filter;
  uint32_t texture_wrap;
  uint32_t texture_compare;
  uint8_t texture_data[16];
  uint32_t frame_buffer;
  uint32_t render_buffer;
  uint8_t target_data[16];
  uint32_t stencil_format;
  uint32_t blend_format;
  uint32_t multisample_format;
  
  render_buffer = 0xfffffffffffffffe;
  memory_size = (longlong)width;
  if ((texture_params == (uint32_t *)0x0) || (texture_ptr = texture_params, height == 0)) {
    format_flags = FUN_1801358c0();
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
    }
    buffer_size = func_0x000180120ce0(0xa8,_DAT_180c8a9a8);
    if (buffer_size == 0) {
      texture_ptr = (uint32_t *)0x0;
    }
    else {
      texture_ptr = (uint32_t *)FUN_180136a10(buffer_size,format_flags);
    }
    *(byte *)(texture_ptr + 0x28) = *(byte *)(texture_ptr + 0x28) | 3;
    FUN_180122160(*(uint64_t *)(engine_ptr + 0x2df8),*texture_ptr,texture_ptr);
  }
  *(longlong *)(texture_ptr + 2) = target_ptr;
  if ((texture_params == (uint32_t *)0x0) || (height == 1)) {
    format_flags = FUN_1801358c0(engine_ptr);
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
    }
    buffer_size = func_0x000180120ce0(0xa8,_DAT_180c8a9a8);
    if (buffer_size == 0) {
      texture_params = (uint32_t *)0x0;
    }
    else {
      texture_params = (uint32_t *)FUN_180136a10(buffer_size,format_flags);
    }
    *(byte *)(texture_params + 0x28) = *(byte *)(texture_params + 0x28) | 3;
    FUN_180122160(*(uint64_t *)(engine_ptr + 0x2df8),*texture_params,texture_params);
  }
  *(longlong *)(texture_params + 2) = target_ptr;
  frame_buffer_ptr = texture_params;
  if (height == 0) {
    frame_buffer_ptr = texture_ptr;
  }
  texture_format = *(longlong *)(target_ptr + 0x10);
  *(longlong *)(frame_buffer_ptr + 4) = texture_format;
  memory_size = *(longlong *)(target_ptr + 0x18);
  *(longlong *)(frame_buffer_ptr + 6) = memory_size;
  if (texture_format != 0) {
    *(uint32_t **)(texture_format + 8) = frame_buffer_ptr;
    memory_size = *(longlong *)(frame_buffer_ptr + 6);
  }
  if (memory_size != 0) {
    *(uint32_t **)(memory_size + 8) = frame_buffer_ptr;
  }
  frame_buffer_ptr[0x14] = *(uint32_t *)(target_ptr + 0x50);
  *(uint64_t *)(frame_buffer_ptr + 0x12) = *(uint64_t *)(target_ptr + 0x48);
  *(uint32_t **)(target_ptr + 0x10) = texture_ptr;
  *(uint32_t **)(target_ptr + 0x18) = texture_params;
  *(uint64_t *)(*(longlong *)(target_ptr + 0x10 + (longlong)height * 8) + 0x70) =
       *(uint64_t *)(target_ptr + 0x70);
  *(int *)(target_ptr + 0x50) = width;
  *(uint64_t *)(target_ptr + 0x70) = 0;
  texture_depth = *(float *)(target_ptr + 0x40 + memory_size * 4) - 2.0;
  format_flags = *(uint32_t *)(target_ptr + 0x40);
  target_format = *(uint32_t *)(target_ptr + 0x44);
  texture_params[0x12] = format_flags;
  texture_params[0x13] = target_format;
  texture_ptr[0x12] = format_flags;
  texture_ptr[0x13] = target_format;
  texture_height = (float)(int)(texture_depth * scale_factor);
  texture_ptr[memory_size + 0x12] = texture_height;
  texture_params[memory_size + 0x12] = (float)(int)(texture_depth - texture_height);
  FUN_180136f60(*(uint64_t *)(target_ptr + 0x10 + (longlong)height * 8),target_ptr);
  target_data[0] = *(ulonglong *)(target_ptr + 0x40);
  texture_data._8_8_ = 0;
  texture_data._0_8_ = target_data[0];
  target_data._8_8_ = 0;
  target_data._0_8_ = *(ulonglong *)(target_ptr + 0x38);
  *(ulonglong *)(target_ptr + 0x38) = *(ulonglong *)(target_ptr + 0x38);
  *(ulonglong *)(target_ptr + 0x40) = target_data[0];
  memory_size = *(longlong *)(target_ptr + 0x10);
  do {
    if (memory_size == 0) {
      return;
    }
    memory_size = *(longlong *)(target_ptr + 0x10);
    stencil_format = target_data._8_4_;
    blend_format = target_data._12_4_;
    texture_format = *(longlong *)(target_ptr + 0x18);
    format_flags = texture_data._0_4_;
    target_format = texture_data._4_4_;
    render_buffer = texture_data._0_8_;
    color_format = texture_data._8_4_;
    depth_format = texture_data._12_4_;
    render_format = render_buffer;
    texture_flags = *(byte *)(memory_size + 0xa0);
    if (((texture_flags & 4) != 0) && ((*(byte *)(texture_format + 0xa0) & 4) != 0)) {
      buffer_size = (longlong)*(int *)(target_ptr + 0x50);
      texture_height = *(float *)(_DAT_180c8a9b0 + 0x163c + buffer_size * 4);
      texture_levels = *(float *)((longlong)target_data + buffer_size * 4) - 2.0;
      texture_height = texture_height + texture_height;
      if (texture_levels <= 0.0) {
        texture_levels = 0.0;
      }
      if (texture_levels <= texture_height) {
        texture_height = texture_levels;
      }
      texture_height = (float)(int)(texture_height * 0.5);
      if ((*(byte *)(memory_size + 0xa1) & 4) == 0) {
        if ((*(byte *)(texture_format + 0xa1) & 4) == 0) {
          if (((*(byte *)(texture_format + 0xa0) & 0x20) == 0) ||
             (texture_width = *(float *)(memory_size + 0x48 + buffer_size * 4), texture_width == 0.0)) {
            if (((texture_flags & 0x20) != 0) &&
               (texture_width = *(float *)(texture_format + 0x48 + buffer_size * 4), texture_width != 0.0)) {
              texture_samples = texture_levels - texture_height;
              if (texture_width <= texture_levels - texture_height) {
                texture_samples = texture_width;
              }
              texture_width = texture_levels - texture_samples;
              goto LAB_18013a7a6;
            }
            texture_width = *(float *)(memory_size + 0x48 + buffer_size * 4);
            texture_width = (float)(int)((texture_width / (texture_width + *(float *)(texture_format + 0x48 + buffer_size * 4))) * texture_levels
                                 + 0.5);
            if (texture_width <= texture_height) {
              texture_width = texture_height;
            }
          }
          else {
            texture_width = texture_levels - texture_height;
            if (texture_width <= texture_levels - texture_height) {
              texture_width = texture_width;
            }
          }
          texture_samples = texture_levels - texture_width;
        }
        else {
          *(byte *)(texture_format + 0xa1) = *(byte *)(texture_format + 0xa1) & 0xfb;
          texture_samples = *(float *)(texture_format + 0x40 + buffer_size * 4);
          texture_width = texture_levels - texture_samples;
          *(float *)(texture_format + 0x48 + buffer_size * 4) = texture_samples;
          *(float *)(memory_size + 0x48 + buffer_size * 4) = texture_width;
        }
      }
      else {
        *(byte *)(memory_size + 0xa1) = *(byte *)(memory_size + 0xa1) & 0xfb;
        texture_width = *(float *)(memory_size + 0x40 + buffer_size * 4);
        texture_samples = texture_levels - texture_width;
        *(float *)(memory_size + 0x48 + buffer_size * 4) = texture_width;
        *(float *)(texture_format + 0x48 + buffer_size * 4) = texture_samples;
      }
LAB_18013a7a6:
      *(float *)((longlong)target_data + buffer_size * 4 + -8) = texture_samples;
      *(float *)((longlong)&render_format + buffer_size * 4) = texture_width;
      texture_flags = *(byte *)(memory_size + 0xa0);
      format_flags = (uint32_t)render_buffer;
      target_format = (uint32_t)((ulonglong)render_buffer >> 0x20);
      color_format = 0;
      depth_format = 0;
      *(float *)(&stack0x00000008 + buffer_size * 4) =
           texture_width + 2.0 + *(float *)(&stack0x00000008 + buffer_size * 4);
      stencil_format = 0;
      blend_format = 0;
    }
    if ((texture_flags & 4) != 0) {
      FUN_18013a5e0(memory_size,target_data._0_8_,render_format);
    }
    if ((*(byte *)(texture_format + 0xa0) & 4) == 0) {
      return;
    }
    *(uint64_t *)(texture_format + 0x38) = target_data._0_8_;
    *(ulonglong *)(texture_format + 0x40) = CONCAT44(target_format,format_flags);
    target_data._8_4_ = stencil_format;
    target_data._12_4_ = blend_format;
    memory_size = *(longlong *)(texture_format + 0x10);
    texture_data._4_4_ = target_format;
    texture_data._0_4_ = format_flags;
    texture_data._8_4_ = color_format;
    texture_data._12_4_ = depth_format;
    target_data[0] = CONCAT44(target_format,format_flags);
    target_ptr = texture_format;
  } while( true );
}


// 全局变量: _DAT_180c8a9a8 - 内存管理器指针
// 警告: 以下全局变量与其他符号地址重叠


// 函数: void update_render_target(longlong engine_ptr, uint32_t *target_params, longlong source_data)
// 功能: 更新渲染目标参数，重新链接纹理和帧缓冲区
void update_render_target(longlong engine_ptr, uint32_t *target_params, longlong source_data)

{
  uint32_t source_format;
  uint32_t target_format;
  uint32_t render_format;
  byte texture_flags;
  uint32_t *source_texture;
  uint32_t *target_texture;
  longlong source_size;
  longlong target_size;
  byte source_state;
  ulonglong update_count;
  uint update_index;
  ulonglong max_updates;
  
  source_texture = *(uint32_t **)(target_params + 4);
  target_texture = *(uint32_t **)(target_params + 6);
  source_format = target_params[0x12];
  target_format = target_params[0x13];
  source_size = *(longlong *)(source_data + 0x10);
  *(longlong *)(target_params + 4) = source_size;
  target_size = *(longlong *)(source_data + 0x18);
  *(longlong *)(target_params + 6) = target_size;
  if (source_size != 0) {
    *(uint32_t **)(source_size + 8) = target_params;
    target_size = *(longlong *)(target_params + 6);
  }
  if (target_size != 0) {
    *(uint32_t **)(target_size + 8) = target_params;
  }
  update_count = 0;
  target_params[0x14] = *(uint32_t *)(source_data + 0x50);
  *(uint64_t *)(target_params + 0x12) = *(uint64_t *)(source_data + 0x48);
  *(uint64_t *)(source_data + 0x18) = 0;
  *(uint64_t *)(source_data + 0x10) = 0;
  if (source_texture != (uint32_t *)0x0) {
    FUN_180136f60(target_params,source_texture);
    FUN_18013bf60(*source_texture,*target_params);
  }
  if (target_texture != (uint32_t *)0x0) {
    FUN_180136f60(target_params,target_texture);
    FUN_18013bf60(*target_texture,*target_params);
  }
  max_updates = update_count;
  if (0 < (int)target_params[8]) {
    do {
      update_index = (int)max_updates + 1;
      render_format = target_params[0xf];
      source_size = *(longlong *)(update_count + *(longlong *)(target_params + 10));
      *(uint32_t *)(source_size + 0x40) = target_params[0xe];
      *(uint32_t *)(source_size + 0x44) = render_format;
      render_format = target_params[0x11];
      source_size = *(longlong *)(update_count + *(longlong *)(target_params + 10));
      *(uint32_t *)(source_size + 0x50) = target_params[0x10];
      *(uint32_t *)(source_size + 0x54) = render_format;
      update_count = update_count + 8;
      max_updates = (ulonglong)update_index;
    } while ((int)update_index < (int)target_params[8]);
  }
  texture_flags = *(byte *)(target_params + 0x28);
  *(byte *)(target_params + 0x28) = texture_flags & 0xfc;
  *(uint64_t *)(target_params + 0x1c) = *(uint64_t *)(source_data + 0x70);
  if (((source_texture == (uint32_t *)0x0) || ((*(byte *)(source_texture + 0x28) & 0x20) == 0)) &&
     ((target_texture == (uint32_t *)0x0 || ((*(byte *)(target_texture + 0x28) & 0x20) == 0)))) {
    source_state = 0;
  }
  else {
    source_state = 0x20;
  }
  source_state = texture_flags & 0xdc | source_state;
  *(byte *)(target_params + 0x28) = source_state;
  texture_flags = *(byte *)(source_data + 0xa0);
  target_params[0x12] = source_format;
  target_params[0x13] = target_format;
  *(byte *)(target_params + 0x28) = (texture_flags ^ source_state) & 0x40 ^ source_state;
  if (source_texture == (uint32_t *)0x0) {
    if (target_texture == (uint32_t *)0x0) {
      return;
    }
    FUN_180122160(*(uint64_t *)(engine_ptr + 0x2df8),*target_texture,0);
    FUN_180136ab0(target_texture);
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
                    // 警告: 子函数不返回
    FUN_180059ba0(target_texture,_DAT_180c8a9a8);
  }
  FUN_180122160(*(uint64_t *)(engine_ptr + 0x2df8),*source_texture,0);
  FUN_180136ab0(source_texture);
  if (_DAT_180c8a9b0 != 0) {
    *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
  }
                    // 警告: 子函数不返回
  FUN_180059ba0(source_texture,_DAT_180c8a9a8);
}


// 全局变量: _DAT_180c8a9a8 - 内存管理器指针
// 警告: 以下全局变量与其他符号地址重叠


// 函数: void calculate_texture_coordinates(longlong mesh_ptr, ulonglong uv_data, ulonglong texcoord_data)
// 功能: 计算纹理坐标，处理UV映射和纹理坐标变换
void calculate_texture_coordinates(longlong mesh_ptr, ulonglong uv_data, ulonglong texcoord_data)

{
  float texture_scale;
  longlong vertex_format;
  longlong texture_format;
  byte uv_flags;
  longlong texture_id;
  uint32_t format_flags;
  float uv_offset;
  float texture_size;
  float aspect_ratio;
  uint32_t wrap_mode;
  uint32_t filter_mode;
  uint32_t compare_mode;
  uint8_t coordinate_data[16];
  uint32_t texture_format;
  float texel_size;
  float mipmap_level;
  float anisotropy;
  uint32_t border_color;
  uint8_t uv_transform[16];
  uint32_t texture_flags;
  uint32_t texture_target;
  
  coordinate_data._8_8_ = 0;
  coordinate_data._0_8_ = texcoord_data;
  uv_transform._8_8_ = 0;
  uv_transform._0_8_ = uv_data;
  *(ulonglong *)(mesh_ptr + 0x38) = uv_data;
  *(ulonglong *)(mesh_ptr + 0x40) = texcoord_data;
  vertex_format = *(longlong *)(mesh_ptr + 0x10);
  texcoord_data = texcoord_data;
  do {
    if (vertex_format == 0) {
      return;
    }
    vertex_format = *(longlong *)(mesh_ptr + 0x10);
    texture_format = uv_transform._0_4_;
    wrap_mode = uv_transform._4_4_;
    filter_mode = uv_transform._8_4_;
    compare_mode = uv_transform._12_4_;
    texture_format = *(longlong *)(mesh_ptr + 0x18);
    format_flags = coordinate_data._0_4_;
    texture_size = coordinate_data._4_4_;
    texture_id = coordinate_data._0_8_;
    border_color = coordinate_data._8_4_;
    mipmap_level = coordinate_data._12_4_;
    uv_transform[0] = uv_transform._0_8_;
    texture_id = texture_id;
    uv_flags = *(byte *)(vertex_format + 0xa0);
    if (((uv_flags & 4) != 0) && ((*(byte *)(texture_format + 0xa0) & 4) != 0)) {
      texture_id = (longlong)*(int *)(mesh_ptr + 0x50);
      texture_scale = *(float *)(_DAT_180c8a9b0 + 0x163c + texture_id * 4);
      aspect_ratio = *(float *)((longlong)texcoord_data + texture_id * 4) - 2.0;
      texture_scale = texture_scale + texture_scale;
      if (aspect_ratio <= 0.0) {
        aspect_ratio = 0.0;
      }
      if (aspect_ratio <= texture_scale) {
        texture_scale = aspect_ratio;
      }
      texture_scale = (float)(int)(texture_scale * 0.5);
      if ((*(byte *)(vertex_format + 0xa1) & 4) == 0) {
        if ((*(byte *)(texture_format + 0xa1) & 4) == 0) {
          if (((*(byte *)(texture_format + 0xa0) & 0x20) == 0) ||
             (texture_size = *(float *)(vertex_format + 0x48 + texture_id * 4), texture_size == 0.0)) {
            if (((uv_flags & 0x20) != 0) &&
               (texture_size = *(float *)(texture_format + 0x48 + texture_id * 4), texture_size != 0.0)) {
              anisotropy = aspect_ratio - texture_scale;
              if (texture_size <= aspect_ratio - texture_scale) {
                anisotropy = texture_size;
              }
              texel_size = aspect_ratio - anisotropy;
              goto LAB_18013a7a6;
            }
            texture_size = *(float *)(vertex_format + 0x48 + texture_id * 4);
            texel_size = (float)(int)((texture_size / (texture_size + *(float *)(texture_format + 0x48 + texture_id * 4))) * aspect_ratio
                                 + 0.5);
            if (texel_size <= texture_scale) {
              texel_size = texture_scale;
            }
          }
          else {
            texel_size = aspect_ratio - texture_scale;
            if (texture_size <= aspect_ratio - texture_scale) {
              texel_size = texture_size;
            }
          }
          anisotropy = aspect_ratio - texel_size;
        }
        else {
          *(byte *)(texture_format + 0xa1) = *(byte *)(texture_format + 0xa1) & 0xfb;
          anisotropy = *(float *)(texture_format + 0x40 + texture_id * 4);
          texel_size = aspect_ratio - anisotropy;
          *(float *)(texture_format + 0x48 + texture_id * 4) = anisotropy;
          *(float *)(vertex_format + 0x48 + texture_id * 4) = texel_size;
        }
      }
      else {
        *(byte *)(vertex_format + 0xa1) = *(byte *)(vertex_format + 0xa1) & 0xfb;
        texel_size = *(float *)(vertex_format + 0x40 + texture_id * 4);
        anisotropy = aspect_ratio - texel_size;
        *(float *)(vertex_format + 0x48 + texture_id * 4) = texel_size;
        *(float *)(texture_format + 0x48 + texture_id * 4) = anisotropy;
      }
LAB_18013a7a6:
      *(float *)((longlong)texcoord_data + texture_id * 4 + -8) = anisotropy;
      *(float *)((longlong)&texture_id + texture_id * 4) = texel_size;
      uv_flags = *(byte *)(vertex_format + 0xa0);
      format_flags = (uint32_t)texture_id;
      texture_size = (uint32_t)((ulonglong)texture_id >> 0x20);
      border_color = 0;
      mipmap_level = 0;
      *(float *)((longlong)uv_transform + texture_id * 4) =
           texel_size + 2.0 + *(float *)((longlong)uv_transform + texture_id * 4);
      texture_format = (uint32_t)uv_transform[0];
      wrap_mode = (uint32_t)((ulonglong)uv_transform[0] >> 0x20);
      filter_mode = 0;
      compare_mode = 0;
    }
    if ((uv_flags & 4) != 0) {
      FUN_18013a5e0(vertex_format,uv_transform._0_8_,texture_id);
    }
    if ((*(byte *)(texture_format + 0xa0) & 4) == 0) {
      return;
    }
    *(ulonglong *)(texture_format + 0x38) = CONCAT44(wrap_mode,texture_format);
    *(ulonglong *)(texture_format + 0x40) = CONCAT44(texture_size,format_flags);
    uv_transform._4_4_ = wrap_mode;
    uv_transform._0_4_ = texture_format;
    uv_transform._8_4_ = filter_mode;
    uv_transform._12_4_ = compare_mode;
    vertex_format = *(longlong *)(texture_format + 0x10);
    coordinate_data._4_4_ = texture_size;
    coordinate_data._0_4_ = format_flags;
    coordinate_data._8_4_ = border_color;
    coordinate_data._12_4_ = mipmap_level;
    texcoord_data = CONCAT44(texture_size,format_flags);
    mesh_ptr = texture_format;
  } while( true );
}


// 全局变量: _DAT_180c8a9b0 - 全局引擎状态指针
// 警告: 以下全局变量与其他符号地址重叠


// 函数: void process_texture_sampling(longlong sampler_ptr, uint64_t param_2, uint64_t param_3, uint64_t param_4,
//                                   uint64_t param_5)
// 功能: 处理纹理采样，计算采样率和过滤参数
void process_texture_sampling(longlong sampler_ptr, uint64_t param_2, uint64_t param_3, uint64_t param_4,
                             uint64_t param_5)

{
  float sample_rate;
  longlong texture_unit;
  longlong sampler_state;
  byte sampler_flags;
  longlong texture_id;
  float mip_level;
  uint64_t in_XMM0_Qa;
  float lod_bias;
  float min_lod;
  float max_lod;
  uint32_t sampler_mode;
  uint32_t compare_func;
  float border_color[2];
  int32_t min_filter;
  int32_t mag_filter;
  float anisotropy;
  int32_t wrap_s;
  int32_t wrap_t;
  float afStackX_20 [2];
  uint64_t uStack0000000000000080;
  uint64_t uStack0000000000000098;
  
  afStackX_20[1] = (float)((ulonglong)in_XMM0_Qa >> 0x20);
  mip_level = (float)in_XMM0_Qa;
  min_filter = (int)param_4;
  mag_filter = (int)((ulonglong)param_4 >> 0x20);
  do {
    texture_unit = *(longlong *)(sampler_ptr + 0x10);
    sampler_state = *(longlong *)(sampler_ptr + 0x18);
    uStack0000000000000080 = CONCAT44(mag_filter,min_filter);
    uStack0000000000000098 = CONCAT44(afStackX_20[1],mip_level);
    sampler_flags = *(byte *)(texture_unit + 0xa0);
    wrap_s = min_filter;
    wrap_t = mag_filter;
    afStackX_20[0] = mip_level;
    if (((sampler_flags & 4) != 0) && ((*(byte *)(sampler_state + 0xa0) & 4) != 0)) {
      texture_id = (longlong)*(int *)(sampler_ptr + 0x50);
      mip_level = *(float *)(_DAT_180c8a9b0 + 0x163c + texture_id * 4);
      max_lod = *(float *)((longlong)&param_5 + texture_id * 4) - in_XMM5_Da;
      mip_level = mip_level + mip_level;
      if (max_lod <= 0.0) {
        max_lod = 0.0;
      }
      if (max_lod <= mip_level) {
        mip_level = max_lod;
      }
      mip_level = (float)(int)(mip_level * 0.5);
      if ((*(byte *)(texture_unit + 0xa1) & 4) == 0) {
        if ((*(byte *)(sampler_state + 0xa1) & 4) == 0) {
          if (((*(byte *)(sampler_state + 0xa0) & 0x20) == 0) ||
             (sample_rate = *(float *)(texture_unit + 0x48 + texture_id * 4), sample_rate == 0.0)) {
            if (((sampler_flags & 0x20) != 0) &&
               (sample_rate = *(float *)(sampler_state + 0x48 + texture_id * 4), sample_rate != 0.0)) {
              anisotropy = max_lod - mip_level;
              if (sample_rate <= max_lod - mip_level) {
                anisotropy = sample_rate;
              }
              min_lod = max_lod - anisotropy;
              goto LAB_18013a7a6;
            }
            sample_rate = *(float *)(texture_unit + 0x48 + texture_id * 4);
            min_lod = (float)(int)((sample_rate / (sample_rate + *(float *)(sampler_state + 0x48 + texture_id * 4))) * max_lod +
                                0.5);
            if (min_lod <= mip_level) {
              min_lod = mip_level;
            }
          }
          else {
            min_lod = max_lod - mip_level;
            if (sample_rate <= max_lod - mip_level) {
              min_lod = sample_rate;
            }
          }
          anisotropy = max_lod - min_lod;
        }
        else {
          *(byte *)(sampler_state + 0xa1) = *(byte *)(sampler_state + 0xa1) & 0xfb;
          anisotropy = *(float *)(sampler_state + 0x40 + texture_id * 4);
          min_lod = max_lod - anisotropy;
          *(float *)(sampler_state + 0x48 + texture_id * 4) = anisotropy;
          *(float *)(texture_unit + 0x48 + texture_id * 4) = min_lod;
        }
      }
      else {
        *(byte *)(texture_unit + 0xa1) = *(byte *)(texture_unit + 0xa1) & 0xfb;
        min_lod = *(float *)(texture_unit + 0x40 + texture_id * 4);
        anisotropy = max_lod - min_lod;
        *(float *)(texture_unit + 0x48 + texture_id * 4) = min_lod;
        *(float *)(sampler_state + 0x48 + texture_id * 4) = anisotropy;
      }
LAB_18013a7a6:
      afStackX_20[texture_id] = anisotropy;
      *(float *)((longlong)&stack0x00000098 + texture_id * 4) = min_lod;
      sampler_flags = *(byte *)(texture_unit + 0xa0);
      *(float *)((longlong)&stack0x00000080 + texture_id * 4) =
           min_lod + in_XMM5_Da + *(float *)((longlong)&stack0x00000080 + texture_id * 4);
      wrap_s = (uint32_t)uStack0000000000000080;
      wrap_t = (uint32_t)((ulonglong)uStack0000000000000080 >> 0x20);
    }
    mip_level = afStackX_20[0];
    if ((sampler_flags & 4) != 0) {
      FUN_18013a5e0(texture_unit,CONCAT44(mag_filter,min_filter),uStack0000000000000098);
      in_XMM5_Da = 2.0;
    }
    if ((*(byte *)(sampler_state + 0xa0) & 4) == 0) {
      return;
    }
    *(ulonglong *)(sampler_state + 0x38) = CONCAT44(wrap_t,wrap_s);
    *(ulonglong *)(sampler_state + 0x40) = CONCAT44(afStackX_20[1],mip_level);
    param_5 = CONCAT44(afStackX_20[1],mip_level);
    sampler_ptr = sampler_state;
    min_filter = wrap_s;
    mag_filter = wrap_t;
    if (*(longlong *)(sampler_state + 0x10) == 0) {
      return;
    }
  } while( true );
}


// 函数: void cleanup_render_resources(void)
// 功能: 清理渲染资源，释放内存和句柄
void cleanup_render_resources(void)

{
  return;
}


// 原始实现：函数 FUN_18013a851 是一个空函数，仅返回
// 简化实现：保持空函数实现，因为原始函数没有实际功能