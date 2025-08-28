#include "TaleWorlds.Native.Split.h"

// 03_rendering_part080.c - 渲染系统高级参数处理和状态控制模块
// 包含3个核心函数，涵盖渲染参数计算、状态管理、数据变换等高级渲染功能

// 函数别名定义
#define rendering_system_advanced_parameter_processor FUN_18030fbd4
#define rendering_system_state_controller FUN_180310903
#define rendering_system_parameter_setter FUN_1803109a0

// 常量定义
#define RENDER_PARAM_THRESHOLD 0.2f
#define RENDER_DISTANCE_LIMIT 35.0f
#define RENDER_COORDINATE_THRESHOLD 0.5f
#define RENDER_FLOAT_MINIMUM 0.0f
#define RENDER_FLOAT_MAXIMUM 1.0f
#define RENDER_COLOR_MULTIPLIER 255.0f
#define RENDER_ALPHA_MASK 0xff
#define RENDER_POSITION_OFFSET 0x78
#define RENDER_STATE_OFFSET 0x334
#define RENDER_TEXTURE_OFFSET 0x110
#define RENDER_DATA_OFFSET 0x150

// 全局变量映射
#define g_render_data_table _DAT_180c86920
#define g_render_context_base _DAT_180c868d0
#define g_render_state_table _DAT_180c86950
#define g_render_memory_pool _DAT_180c86870
#define g_render_time_delta _DAT_180bf3ff8
#define g_render_constant_float _DAT_180a401f0

/**
 * 渲染系统高级参数处理器
 * 处理复杂的渲染参数计算、状态管理和数据变换
 * 支持多种渲染模式和参数优化
 */
void rendering_system_advanced_parameter_processor(void)

{
  uint render_flags;
  ushort texture_coord_u;
  ushort texture_coord_v;
  ushort position_x;
  ushort position_y;
  ushort render_index;
  longlong render_context;
  int render_mode;
  ulonglong param_data;
  byte alpha_value;
  int render_state;
  undefined4 render_params;
  longlong matrix_context;
  longlong data_context;
  char state_flag;
  int frame_count;
  undefined4 render_config;
  byte render_mask;
  int batch_count;
  longlong memory_ptr;
  float color_value;
  undefined8 transform_data;
  undefined1 color_buffer[16];
  undefined1 normal_buffer[16];
  undefined1 position_buffer[16];
  undefined1 uv_buffer[16];
  float depth_value;
  undefined1 alpha_buffer[16];
  undefined1 specular_buffer[16];
  undefined1 ambient_buffer[16];
  ulonglong vertex_data;
  undefined1 tangent_buffer[16];
  undefined1 bitangent_buffer[16];
  float light_intensity;
  float ambient_light;
  float directional_light;
  uint render_mask_uint;
  float point_light;
  float spot_light;
  undefined4 light_params;
  float shadow_value;
  float fog_density;
  undefined2 texture_index;
  float render_time;
  float frame_time;
  int vertex_count;
  undefined1 render_flag;
  float model_matrix[16];
  float view_matrix[16];
  int render_target;
  int texture_id;
  undefined8 pipeline_data;
  undefined8 extraout_xmm0_qb;
  undefined1 shader_buffer[16];
  
  color_value = (float)*(byte *)(matrix_context + 0xa9) * directional_light;
  if (spot_light <= (float)render_mode * directional_light) {
    point_light = (float)render_mode * directional_light;
  }
  light_intensity = spot_light;
  if (spot_light <= color_value) {
    light_intensity = color_value;
    light_params = 0;
    render_config = 0;
    texture_id = 0;
  }
  fog_density = (float)*(byte *)(matrix_context + -0x5c) * directional_light;
  color_value = (float)*(byte *)(matrix_context + -0x5b) * directional_light;
  shadow_value = (fog_density + fog_density) - ambient_light;
  fog_density = ambient_light - (color_value + color_value);
  *(float *)(matrix_context + -0x78) = fog_density;
  color_value = (float)*(byte *)(matrix_context + -0x5a) * directional_light;
  model_matrix[0] = (color_value + color_value) - ambient_light;
  color_value = (float)*(byte *)(matrix_context + -0x59) * directional_light;
  _view_matrix[0] = CONCAT44(view_matrix[1],ambient_light - (color_value + color_value));
  _model_matrix[0] =
       CONCAT44(render_config,(float)*(byte *)(matrix_context + -0x58) * directional_light);
  alpha_value = (byte)(*(uint *)(matrix_context + -0x60) >> 0x14) & render_mask;
  color_value = (float)*(byte *)(matrix_context + -0x57) * directional_light;
  transform_data = FUN_1803109a0(color_value,0xf0,(byte)(*(uint *)(matrix_context + -0x60) >> 4) & render_mask);
  transform_data = FUN_1803109a0(transform_data,0xf1,
                         CONCAT31((uint3)(*(uint *)(matrix_context + -0x60) >> 0xe),
                                  (byte)(*(uint *)(matrix_context + -0x60) >> 6) & render_mask));
  transform_data = FUN_1803109a0(transform_data,0xf2,
                         CONCAT31((uint3)(*(uint *)(matrix_context + -0x60) >> 0xf),
                                  (byte)(*(uint *)(matrix_context + -0x60) >> 7) & render_mask));
  transform_data = FUN_1803109a0(transform_data,0xf3,
                         CONCAT31((uint3)(*(uint *)(matrix_context + -0x60) >> 0xd),
                                  (byte)(*(uint *)(matrix_context + -0x60) >> 5) & render_mask));
  transform_data = FUN_1803109a0(transform_data,0xf6,
                         CONCAT31((uint3)(*(uint *)(matrix_context + -0x60) >> 0x17),
                                  (byte)(*(uint *)(matrix_context + -0x60) >> 0xf) & render_mask));
  transform_data = FUN_1803109a0(transform_data,0xf4,
                         CONCAT31((uint3)(*(uint *)(matrix_context + -0x60) >> 0x14),
                                  (byte)(*(uint *)(matrix_context + -0x60) >> 0xc) & render_mask));
  transform_data = FUN_1803109a0(transform_data,0xf5,
                         CONCAT31((uint3)(*(uint *)(matrix_context + -0x60) >> 0x16),
                                  (byte)(*(uint *)(matrix_context + -0x60) >> 0xe) & render_mask));
  transform_data = FUN_1803109a0(transform_data,0xf7,
                         CONCAT31((uint3)(*(uint *)(matrix_context + -0x60) >> 0x15),
                                  (byte)(*(uint *)(matrix_context + -0x60) >> 0xd) & render_mask));
  transform_data = FUN_1803109a0(transform_data,0xfa,alpha_value);
  transform_data = FUN_1803109a0(transform_data,0xfb,
                         CONCAT31((uint3)(*(uint *)(matrix_context + -0x60) >> 0xb),
                                  (byte)(*(uint *)(matrix_context + -0x60) >> 3) & render_mask));
  transform_data = FUN_1803109a0(transform_data,0xf8,
                         CONCAT31((uint3)(*(uint *)(matrix_context + -0x60) >> 0x12),
                                  (byte)(*(uint *)(matrix_context + -0x60) >> 10) & render_mask));
  transform_data = FUN_1803109a0(transform_data,0xf9,
                         CONCAT31((uint3)(*(uint *)(matrix_context + -0x60) >> 0x13),
                                  (byte)(*(uint *)(matrix_context + -0x60) >> 0xb) & render_mask));
  transform_data = FUN_1803109a0(transform_data,0xfc,
                         CONCAT31((uint3)(*(uint *)(matrix_context + -0x60) >> 9),
                                  (byte)(*(uint *)(matrix_context + -0x60) >> 1) & render_mask));
  FUN_1803109a0(transform_data,0xfd,
                CONCAT31((uint3)(*(uint *)(matrix_context + -0x60) >> 10),
                         (byte)(*(uint *)(matrix_context + -0x60) >> 2) & render_mask));
  if (model_matrix[0] <= spot_light) {
    pipeline_data = 0;
  }
  else {
    pipeline_data = CONCAT44(frame_count,model_matrix[0]);
    _model_matrix[0] = pipeline_data;
  }
  _model_matrix[0] = CONCAT14(0xfe,model_matrix[0]);
  FUN_180310a00();
  if (color_value <= spot_light) {
    pipeline_data = 0;
  }
  else {
    _model_matrix[0] = CONCAT44(frame_count,color_value);
    pipeline_data = _model_matrix[0];
  }
  _model_matrix[0] = CONCAT14(0xff,model_matrix[0]);
  FUN_180310a00();
  texture_index = (undefined2)((uint)color_value >> 0x10);
  render_state = *(int *)(g_render_data_table + 0x2300);
  state_flag = (char)frame_count;
  if (*(byte *)(matrix_context + -0x2c) < render_mask) {
    if ((((*(float *)(data_context + 0x68) != ambient_light) && (*(float *)(data_context + 0x68) <= RENDER_PARAM_THRESHOLD))
        && (*(char *)(data_context + 0x7c) == state_flag)) &&
       (color_value = *(float *)(data_context + 0x74) - *(float *)(data_context + 0x6c),
       depth_value = *(float *)(data_context + 0x78) - *(float *)(data_context + 0x70),
       color_value = SQRT(color_value * color_value + depth_value * depth_value), color_value <= RENDER_DISTANCE_LIMIT)) {
      _model_matrix[0] = 0x3f800000;
      _model_matrix[1] = 0x3f800000;
      render_flag = 0xe7;
      FUN_180310a00(color_value,&stack0x00000068);
    }
    _model_matrix[1] = 0;
    render_flag = 0xe7;
    FUN_180310a00();
    *(char *)(data_context + 0x7c) = state_flag;
    *(undefined4 *)(data_context + 0x68) = 0xbf800000;
    *(undefined8 *)(data_context + 0x6c) = 0;
    *(undefined8 *)(data_context + 0x74) = 0;
    alpha_value = 0;
  }
  else {
    if (alpha_value != 0) {
      *(byte *)(data_context + 0x7c) = render_mask;
    }
    if (*(float *)(data_context + 0x68) == ambient_light) {
      color_value = RENDER_FLOAT_MINIMUM;
      _model_matrix[0] =
           CONCAT44((float)*(ushort *)(matrix_context + -0x22),(float)*(ushort *)(matrix_context + -0x24));
      *(undefined8 *)(data_context + 0x6c) = _model_matrix[0];
    }
    else {
      color_value = *(float *)(data_context + 0x68) + g_render_time_delta;
    }
    *(float *)(data_context + 0x68) = color_value;
    pipeline_data = 0;
    _model_matrix[0] = CONCAT14(0xe7,model_matrix[0]);
    FUN_180310a00();
    _model_matrix[0] =
         CONCAT44((float)*(ushort *)(matrix_context + -0x22),(float)*(ushort *)(matrix_context + -0x24));
    *(undefined8 *)(data_context + 0x74) = _model_matrix[0];
    alpha_value = render_mask;
  }
  *(byte *)(data_context + 0x7d) = alpha_value;
  memory_ptr = g_render_context_base;
  color_value = shadow_value * shadow_value + fog_density * fog_density;
  if (point_light * point_light <= color_value) {
    fog_density = (float)g_render_constant_float;
    tangent_buffer._8_8_ = 0;
    tangent_buffer._0_8_ = CONCAT44(0,color_value);
    specular_buffer._8_8_ = 0;
    specular_buffer._0_8_ = CONCAT44(0,color_value);
    specular_buffer = rsqrtss(tangent_buffer,specular_buffer);
    shadow_value = specular_buffer._0_4_;
    atan2f();
    fog_density = (shadow_value * 0.5 * (fog_density - color_value * shadow_value * shadow_value) * color_value - point_light) /
             (ambient_light - point_light);
    color_value = (float)sinf();
    shadow_value = (float)((uint)(color_value * fog_density) ^ render_mask_uint);
    color_value = ambient_light;
    if ((ambient_light <= shadow_value) && (color_value = shadow_value, directional_light <= shadow_value)) {
      color_value = directional_light;
    }
    shadow_value = (float)cosf();
    shadow_value = shadow_value * fog_density;
    fog_density = ambient_light;
    if ((ambient_light <= shadow_value) && (fog_density = shadow_value, directional_light <= shadow_value)) {
      fog_density = directional_light;
    }
    *(float *)(matrix_context + -0x78) = color_value;
    *(float *)(matrix_context + -0x74) = fog_density;
    transform_data = *(undefined8 *)(matrix_context + -0x78);
    *(char *)(memory_ptr + 0x2028) = state_flag;
  }
  else {
    transform_data = 0;
  }
  render_context = g_render_data_table;
  render_params = *(undefined4 *)(matrix_context + -0x34);
  *(undefined4 *)(data_context + 0x338) = *(undefined4 *)(matrix_context + -0x38);
  *(undefined4 *)(data_context + 0x340) = *(undefined4 *)(matrix_context + -0x30);
  *(undefined4 *)(data_context + 0x33c) = render_params;
  *(undefined8 *)(matrix_context + -0x78) = transform_data;
  if (*(int *)(render_context + 0x2530) != frame_count) {
    if (*(byte *)(matrix_context + -0x2c) < render_mask) {
      *(int *)(data_context + 0x334) = frame_count;
    }
    else {
      texture_coord_u = *(ushort *)(matrix_context + -0x24);
      texture_coord_v = *(ushort *)(matrix_context + -0x22);
      position_x = *(ushort *)(data_context + 0x334);
      position_y = *(ushort *)(data_context + 0x336);
      *(short *)(data_context + 0x334) = (short)(int)(float)texture_coord_u;
      fog_density = (float)texture_coord_u - (float)position_x;
      color_value = (float)texture_coord_v - (float)position_y;
      *(short *)(data_context + 0x336) = (short)(int)(float)texture_coord_v;
      if ((((float)position_x != ambient_light) || ((float)position_y != ambient_light)) &&
         ((RENDER_COORDINATE_THRESHOLD <= ABS(fog_density) || (RENDER_COORDINATE_THRESHOLD <= ABS(color_value))))) {
        vertex_count = (int)fog_density;
        _model_matrix[1] = CONCAT44(render_config,frame_count);
        batch_count = (int)color_value;
        vertex_count = frame_count;
        render_target = vertex_count;
        texture_id = batch_count;
        FUN_1801edeb0();
        memory_ptr = g_render_context_base;
        if (*(char *)(g_render_state_table + 0x1609) != state_flag) {
          _model_matrix[0] = CONCAT44(batch_count,vertex_count);
          FUN_180174080(*(undefined8 *)(g_render_memory_pool + 8),_model_matrix[0]);
          memory_ptr = g_render_context_base;
        }
      }
      *(char *)(memory_ptr + 0x2028) = state_flag;
    }
  }
  color_value = model_matrix[0] * model_matrix[0] +
           view_matrix[0] * view_matrix[0];
  color_buffer._4_4_ = light_params;
  color_buffer._0_4_ = light_intensity;
  color_buffer._8_4_ = render_config;
  color_buffer._12_4_ = texture_id;
  normal_buffer._4_12_ = color_buffer._4_12_;
  normal_buffer._0_4_ = light_intensity * light_intensity;
  pipeline_data = normal_buffer._0_8_;
  if (normal_buffer._0_4_ <= color_value) {
    specular_buffer = rsqrtss(ZEXT416((uint)color_value),ZEXT416((uint)color_value));
    fog_density = specular_buffer._0_4_;
    atan2f();
    light_intensity = (fog_density * 0.5 * (3.0 - color_value * fog_density * fog_density) * color_value - light_intensity) /
             (ambient_light - light_intensity);
    color_value = (float)sinf();
    fog_density = (float)((uint)(color_value * light_intensity) ^ render_mask_uint);
    color_value = ambient_light;
    if ((ambient_light <= fog_density) && (color_value = fog_density, directional_light <= fog_density)) {
      color_value = directional_light;
    }
    position_buffer._0_8_ = cosf();
    position_buffer._8_8_ = extraout_xmm0_qb;
    uv_buffer._4_12_ = position_buffer._4_12_;
    uv_buffer._0_4_ = (float)position_buffer._0_8_ * light_intensity;
    pipeline_data = uv_buffer._0_8_;
    if ((ambient_light <= uv_buffer._0_4_) &&
       (ambient_light = uv_buffer._0_4_, directional_light <= uv_buffer._0_4_)) {
      ambient_light = directional_light;
    }
    *(char *)(memory_ptr + 0x2028) = state_flag;
  }
  else {
    color_value = RENDER_FLOAT_MINIMUM;
    ambient_light = RENDER_FLOAT_MINIMUM;
  }
  if (*(int *)(matrix_context + -0x60) != frame_count) {
    *(char *)(memory_ptr + 0x2028) = state_flag;
  }
  render_flag = 0xde;
  _model_matrix[1] = transform_data;
  view_matrix[0] = color_value;
  view_matrix[1] = ambient_light;
  transform_data = FUN_180310a00(pipeline_data,&stack0x00000068);
  render_flag = 0xdf;
  _model_matrix[1] = color_value;
  _model_matrix[1] = ambient_light;
  transform_data = FUN_180310a00(transform_data,&stack0x00000068);
  render_flags = *(uint *)(matrix_context + -0x74);
  _model_matrix[1] = CONCAT44(frame_count,render_flags);
  render_flag = 0xe8;
  model_matrix[0] = (float)render_flags;
  transform_data = FUN_180310a00(transform_data,&stack0x00000068);
  model_matrix[0] = (float)(render_flags ^ render_mask_uint);
  _model_matrix[1] = CONCAT44(frame_count,model_matrix[0]);
  render_flag = 0xe9;
  transform_data = FUN_180310a00(transform_data,&stack0x00000068);
  render_flags = *(uint *)(matrix_context + -0x78);
  _model_matrix[1] = CONCAT44(frame_count,render_flags);
  render_flag = 0xeb;
  model_matrix[0] = (float)render_flags;
  transform_data = FUN_180310a00(transform_data,&stack0x00000068);
  model_matrix[0] = (float)(render_flags ^ render_mask_uint);
  _model_matrix[1] = CONCAT44(frame_count,model_matrix[0]);
  render_flag = 0xea;
  transform_data = FUN_180310a00(transform_data,&stack0x00000068);
  color_value = view_matrix[1];
  model_matrix[0] = view_matrix[1];
  _model_matrix[1] = CONCAT44(frame_count,view_matrix[1]);
  render_flag = 0xec;
  transform_data = FUN_180310a00(transform_data,&stack0x00000068);
  model_matrix[0] = (float)((uint)color_value ^ render_mask_uint);
  _model_matrix[1] = CONCAT44(frame_count,model_matrix[0]);
  render_flag = 0xed;
  transform_data = FUN_180310a00(transform_data,&stack0x00000068);
  color_value = view_matrix[0];
  _view_matrix[0] = CONCAT44(frame_count,view_matrix[0]);
  _model_matrix[1] = _view_matrix[0];
  render_flag = 0xef;
  transform_data = FUN_180310a00(transform_data,&stack0x00000068);
  _view_matrix[0] = CONCAT44(frame_count,(uint)color_value ^ render_mask_uint);
  _model_matrix[1] = _view_matrix[0];
  render_flag = 0xee;
  FUN_180310a00(transform_data,&stack0x00000068);
  color_value = g_render_time_delta;
  param_data = 0;
  vertex_data = 0;
  if (*(char *)(data_context + 0x80) != state_flag) {
    param_data = (ulonglong)*(uint *)(data_context + 0x88);
    vertex_data = (ulonglong)*(uint *)(data_context + 0x84);
  }
  shader_buffer._8_8_ = 0;
  shader_buffer._0_8_ = vertex_data;
  ambient_buffer._8_8_ = 0;
  ambient_buffer._0_8_ = param_data;
  alpha_value = *(byte *)(data_context + 0x7f);
  if (*(byte *)(data_context + 0x7f) != 0) {
    *(char *)(data_context + 0x7f) = state_flag;
    alpha_value = 0;
    if (*(byte *)(data_context + 400) < *(byte *)(data_context + 0x8c)) {
      param_data = (ulonglong)*(byte *)(data_context + 400);
      ambient_buffer = ZEXT416(*(uint *)(data_context + 0x90 + param_data * 4));
      *(float *)(data_context + RENDER_TEXTURE_OFFSET + param_data * 4) = *(float *)(data_context + RENDER_TEXTURE_OFFSET + param_data * 4) - color_value
      ;
      if (*(float *)(data_context + RENDER_TEXTURE_OFFSET + (ulonglong)*(byte *)(data_context + 400) * 4) <=
          ambient_light) {
        *(byte *)(data_context + 400) = *(byte *)(data_context + 400) + 1;
      }
      *(byte *)(data_context + 0x7f) = render_mask;
      alpha_value = render_mask;
    }
    if (*(byte *)(data_context + 0x191) < *(byte *)(data_context + 0x8d)) {
      param_data = (ulonglong)*(byte *)(data_context + 0x191);
      shader_buffer = ZEXT416(*(uint *)(data_context + RENDER_DATA_OFFSET + param_data * 4));
      *(float *)(data_context + 0x150 + param_data * 4) = *(float *)(data_context + 0x150 + param_data * 4) - color_value
      ;
      if (*(float *)(data_context + 0x150 + (ulonglong)*(byte *)(data_context + 0x191) * 4) <=
          ambient_light) {
        *(byte *)(data_context + 0x191) = *(byte *)(data_context + 0x191) + 1;
      }
      *(byte *)(data_context + 0x7f) = render_mask;
      alpha_value = render_mask;
    }
  }
  if ((render_state != 0) && ((*(char *)(data_context + 0x80) != state_flag || (alpha_value != 0)))) {
    alpha_buffer._4_12_ = ambient_buffer._4_12_;
    alpha_buffer._0_4_ = ambient_buffer._0_4_ * RENDER_COLOR_MULTIPLIER;
    bitangent_buffer._4_12_ = shader_buffer._4_12_;
    bitangent_buffer._0_4_ = shader_buffer._0_4_ * RENDER_COLOR_MULTIPLIER;
    FUN_1808eecf0(*(undefined4 *)(data_context + 0x330),&stack0x00000020,alpha_buffer._0_8_,bitangent_buffer._0_8_,
                  CONCAT22(texture_index,CONCAT11((char)(int)bitangent_buffer._0_4_,(char)(int)alpha_buffer._0_4_)));
    color_value = g_render_time_delta;
  }
  if (*(char *)(data_context + 0x192) == state_flag) {
    render_params = 4;
    *(undefined4 *)(data_context + 100) = 4;
    render_state = FUN_1808ee530(*(undefined4 *)(data_context + 0x330),&stack0x00000038);
    if ((render_state == 0) && (render_target != 0)) {
      if (render_target == 1) {
        render_params = 2;
      }
      *(undefined4 *)(data_context + 100) = render_params;
    }
    *(undefined1 *)(data_context + 0x7e) = 1;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(*(ulonglong *)(matrix_context + 0xc0) ^ (ulonglong)&stack0x00000000);
  }
  alpha_value = *(byte *)(data_context + 0x318);
  *(char *)(data_context + 0x192) = state_flag;
  if (alpha_value < *(byte *)(data_context + 0x194)) {
    *(float *)(data_context + 0x298 + (ulonglong)alpha_value * 4) =
         *(float *)(data_context + 0x298 + (ulonglong)alpha_value * 4) - color_value;
    if (*(float *)(data_context + 0x298 + (ulonglong)*(byte *)(data_context + 0x318) * 4) <=
        ambient_light) {
      *(byte *)(data_context + 0x318) = *(byte *)(data_context + 0x318) + 1;
    }
    *(byte *)(data_context + 0x192) = render_mask;
  }
  alpha_value = *(byte *)(data_context + 0x319);
  if (alpha_value < *(byte *)(data_context + 0x195)) {
    *(float *)(data_context + 0x2d8 + (ulonglong)alpha_value * 4) =
         *(float *)(data_context + 0x2d8 + (ulonglong)alpha_value * 4) - color_value;
    if (*(float *)(data_context + 0x2d8 + (ulonglong)*(byte *)(data_context + 0x319) * 4) <=
        ambient_light) {
      *(byte *)(data_context + 0x319) = *(byte *)(data_context + 0x319) + 1;
    }
    *(byte *)(data_context + 0x192) = render_mask;
  }
                    // WARNING: Subroutine does not return
  memset(matrix_context + 0x20,0,0x78);
}

/**
 * 渲染系统状态控制器
 * 管理渲染状态切换和参数设置
 * 根据输入参数调整渲染模式
 */
void rendering_system_state_controller(void)

{
  undefined4 render_mode;
  longlong render_context;
  longlong data_context;
  undefined4 render_params;
  int render_target;
  
  if (render_target != 0) {
    if (render_target == 1) {
      render_mode = render_params;
    }
    *(undefined4 *)(data_context + 100) = render_mode;
  }
  *(undefined1 *)(data_context + 0x7e) = 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(render_context + 0xc0) ^ (ulonglong)&stack0x00000000);
}

/**
 * 渲染系统参数设置器
 * 设置渲染参数和状态标志
 * 支持条件参数设置和默认值处理
 */
void rendering_system_parameter_setter(undefined4 param_1,undefined1 param_2,char param_3)

{
  undefined1 param_buffer[4];
  undefined1 render_flag;
  undefined8 param_data;
  
  render_flag = param_2;
  if (param_3 != '\0') {
    param_data = 0x3f800000;
    FUN_180310a00(0x3f800000,param_buffer);
    return;
  }
  param_data = 0;
  FUN_180310a00(param_1,param_buffer);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

