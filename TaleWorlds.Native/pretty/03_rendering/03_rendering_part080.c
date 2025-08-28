#include "TaleWorlds.Native.Split.h"

// 03_rendering_part080.c - 渲染系统高级渲染控制和参数处理模块

// 函数别名定义
#define rendering_system_advanced_render_controller FUN_18030fbd4
#define rendering_system_render_state_processor FUN_180310903
#define rendering_system_parameter_handler FUN_1803109a0

// 渲染系统常量定义
#define RENDERING_FLAG_MASK 0x3f800000  // 渲染标志掩码 (1.0f)
#define RENDERING_MAX_THRESHOLD 35.0     // 渲染最大阈值 (35单位)
#define RENDERING_MIN_THRESHOLD 0.2     // 渲染最小阈值 (0.2单位)
#define RENDERING_DISTANCE_THRESHOLD 0.5 // 渲染距离阈值 (0.5单位)
#define RENDERING_TIME_DELTA 0x3f000000 // 渲染时间增量 (0.5f)

// 渲染管线参数类型常量
#define RENDER_PARAM_COLOR_RED 0xf0      // 颜色红色通道
#define RENDER_PARAM_COLOR_GREEN 0xf1    // 颜色绿色通道
#define RENDER_PARAM_COLOR_BLUE 0xf2     // 颜色蓝色通道
#define RENDER_PARAM_COLOR_ALPHA 0xf3    // 颜色透明度通道
#define RENDER_PARAM_TEXTURE_U 0xf6      // 纹理U坐标
#define RENDER_PARAM_TEXTURE_V 0xf4      // 纹理V坐标
#define RENDER_PARAM_TEXTURE_W 0xf5      // 纹理W坐标
#define RENDER_PARAM_NORMAL_X 0xf7       // 法线X分量
#define RENDER_PARAM_SPECULAR 0xfa       // 镜面反射参数
#define RENDER_PARAM_EMISSION 0xfb       // 自发光参数
#define RENDER_PARAM_ROUGHNESS 0xf8      // 粗糙度参数
#define RENDER_PARAM_METALLIC 0xf9       // 金属度参数
#define RENDER_PARAM_AMBIENT 0xfc        // 环境光参数
#define RENDER_PARAM_DIFFUSE 0xfd        // 漫反射参数

// 渲染命令类型常量
#define RENDER_CMD_DEPTH_TEST 0xfe      // 深度测试命令
#define RENDER_CMD_DISTANCE_TEST 0xff    // 距离测试命令
#define RENDER_CMD_BEGIN_BATCH 0xe7      // 开始批次渲染
#define RENDER_CMD_END_BATCH 0xde        // 结束批次渲染
#define RENDER_CMD_SET_TRANSFORM 0xdf     // 设置变换矩阵
#define RENDER_CMD_SET_COLOR 0xe8         // 设置颜色
#define RENDER_CMD_SET_COLOR_INVERTED 0xe9 // 设置反转颜色
#define RENDER_CMD_SET_NORMAL 0xeb        // 设置法线
#define RENDER_CMD_SET_NORMAL_INVERTED 0xea // 设置反转法线
#define RENDER_CMD_SET_TEXCOORD_U 0xec    // 设置纹理U坐标
#define RENDER_CMD_SET_TEXCOORD_U_INVERTED 0xed // 设置反转纹理U坐标
#define RENDER_CMD_SET_TEXCOORD_V 0xef    // 设置纹理V坐标
#define RENDER_CMD_SET_TEXCOORD_V_INVERTED 0xee // 设置反转纹理V坐标

// 渲染系统地址常量
#define RENDER_SYSTEM_BASE_ADDR 0x180c86920    // 渲染系统基地址
#define RENDER_SYSTEM_CONTEXT_ADDR 0x180c868d0  // 渲染系统上下文地址
#define RENDER_SYSTEM_STATUS_ADDR 0x180c86950   // 渲染系统状态地址
#define RENDER_SYSTEM_DATA_ADDR 0x180c86870     // 渲染系统数据地址
#define RENDER_SYSTEM_CONSTANT_ADDR 0x180a401f0 // 渲染系统常量地址

// 函数: 渲染系统高级渲染控制器
// 功能: 处理渲染系统的高级渲染控制、参数计算、状态管理和渲染管线控制
void rendering_system_advanced_render_controller(void)

{
  uint loop_counter;
  ushort texture_coord_u;
  ushort texture_coord_v;
  ushort existing_coord_u;
  ushort existing_coord_v;
  int64_t render_data_ptr;
  int render_parameter;
  int status_flag;
  uint64_t render_context;
  byte texture_index;
  int distance_value;
  int32_t render_flag;
  int64_t render_base_ptr;
  int64_t scene_context;
  char render_state;
  int render_quality;
  int32_t render_option;
  int64_t matrix_data;
  float scale_factor;
  uint64_t render_value;
  int8_t texture_buffer_1 [16];
  int8_t texture_buffer_2 [16];
  int8_t texture_buffer_3 [16];
  int8_t texture_buffer_4 [16];
  float depth_value;
  int8_t position_buffer_1 [16];
  int8_t position_buffer_2 [16];
  float light_intensity;
  float ambient_light;
  float specular_light;
  float diffuse_light;
  int16_t texture_format;
  float position_x;
  float position_y;
  float camera_distance;
  float fog_density;
  int32_t render_mode;
  uint64_t color_value;
  int8_t normal_buffer [16];
  
  // 计算缩放因子和深度值
  scale_factor = (float)*(byte *)(render_base_ptr + 0xa9) * diffuse_light;
  if (specular_light <= (float)render_parameter * diffuse_light) {
    camera_distance = (float)render_parameter * diffuse_light;
  }
  light_intensity = specular_light;
  if (specular_light <= scale_factor) {
    light_intensity = scale_factor;
    render_mode = 0;
    render_option = 0;
    fog_density = 0;
  }
  
  // 计算纹理坐标和位置参数
  position_x = (float)*(byte *)(render_base_ptr + -0x5c) * diffuse_light;
  scale_factor = (float)*(byte *)(render_base_ptr + -0x5b) * diffuse_light;
  position_y = (position_x + position_x) - ambient_light;
  position_x = ambient_light - (scale_factor + scale_factor);
  *(float *)(render_base_ptr + -0x78) = position_x;
  scale_factor = (float)*(byte *)(render_base_ptr + -0x5a) * diffuse_light;
  camera_distance = (scale_factor + scale_factor) - ambient_light;
  scale_factor = (float)*(byte *)(render_base_ptr + -0x59) * diffuse_light;
  
  // 处理纹理坐标和渲染参数
  texture_coord_v = CONCAT44(camera_distance,ambient_light - (scale_factor + scale_factor));
  texture_coord_u =
       CONCAT44(render_mode,(float)*(byte *)(render_base_ptr + -0x58) * diffuse_light);
  texture_index = (byte)(*(uint *)(render_base_ptr + -0x60) >> 0x14) & *(byte *)(render_base_ptr + 0x7d);
  scale_factor = (float)*(byte *)(render_base_ptr + -0x57) * diffuse_light;
  
  // 处理渲染管线参数
  render_value = rendering_system_parameter_handler(scale_factor,RENDER_PARAM_COLOR_RED,(byte)(*(uint *)(render_base_ptr + -0x60) >> 4) & *(byte *)(render_base_ptr + 0x7d));
  render_value = rendering_system_parameter_handler(render_value,RENDER_PARAM_COLOR_GREEN,
                         CONCAT31((uint3)(*(uint *)(render_base_ptr + -0x60) >> 0xe),
                                  (byte)(*(uint *)(render_base_ptr + -0x60) >> 6) & *(byte *)(render_base_ptr + 0x7d)));
  render_value = rendering_system_parameter_handler(render_value,RENDER_PARAM_COLOR_BLUE,
                         CONCAT31((uint3)(*(uint *)(render_base_ptr + -0x60) >> 0xf),
                                  (byte)(*(uint *)(render_base_ptr + -0x60) >> 7) & *(byte *)(render_base_ptr + 0x7d)));
  render_value = rendering_system_parameter_handler(render_value,RENDER_PARAM_COLOR_ALPHA,
                         CONCAT31((uint3)(*(uint *)(render_base_ptr + -0x60) >> 0xd),
                                  (byte)(*(uint *)(render_base_ptr + -0x60) >> 5) & *(byte *)(render_base_ptr + 0x7d)));
  render_value = rendering_system_parameter_handler(render_value,RENDER_PARAM_TEXTURE_U,
                         CONCAT31((uint3)(*(uint *)(render_base_ptr + -0x60) >> 0x17),
                                  (byte)(*(uint *)(render_base_ptr + -0x60) >> 0xf) & *(byte *)(render_base_ptr + 0x7d)));
  render_value = rendering_system_parameter_handler(render_value,RENDER_PARAM_TEXTURE_V,
                         CONCAT31((uint3)(*(uint *)(render_base_ptr + -0x60) >> 0x14),
                                  (byte)(*(uint *)(render_base_ptr + -0x60) >> 0xc) & *(byte *)(render_base_ptr + 0x7d)));
  render_value = rendering_system_parameter_handler(render_value,RENDER_PARAM_TEXTURE_W,
                         CONCAT31((uint3)(*(uint *)(render_base_ptr + -0x60) >> 0x16),
                                  (byte)(*(uint *)(render_base_ptr + -0x60) >> 0xe) & *(byte *)(render_base_ptr + 0x7d)));
  render_value = rendering_system_parameter_handler(render_value,RENDER_PARAM_NORMAL_X,
                         CONCAT31((uint3)(*(uint *)(render_base_ptr + -0x60) >> 0x15),
                                  (byte)(*(uint *)(render_base_ptr + -0x60) >> 0xd) & *(byte *)(render_base_ptr + 0x7d)));
  render_value = rendering_system_parameter_handler(render_value,RENDER_PARAM_SPECULAR,texture_index);
  render_value = rendering_system_parameter_handler(render_value,RENDER_PARAM_EMISSION,
                         CONCAT31((uint3)(*(uint *)(render_base_ptr + -0x60) >> 0xb),
                                  (byte)(*(uint *)(render_base_ptr + -0x60) >> 3) & *(byte *)(render_base_ptr + 0x7d)));
  render_value = rendering_system_parameter_handler(render_value,RENDER_PARAM_ROUGHNESS,
                         CONCAT31((uint3)(*(uint *)(render_base_ptr + -0x60) >> 0x12),
                                  (byte)(*(uint *)(render_base_ptr + -0x60) >> 10) & *(byte *)(render_base_ptr + 0x7d)));
  render_value = rendering_system_parameter_handler(render_value,RENDER_PARAM_METALLIC,
                         CONCAT31((uint3)(*(uint *)(render_base_ptr + -0x60) >> 0x13),
                                  (byte)(*(uint *)(render_base_ptr + -0x60) >> 0xb) & *(byte *)(render_base_ptr + 0x7d)));
  render_value = rendering_system_parameter_handler(render_value,RENDER_PARAM_AMBIENT,
                         CONCAT31((uint3)(*(uint *)(render_base_ptr + -0x60) >> 9),
                                  (byte)(*(uint *)(render_base_ptr + -0x60) >> 1) & *(byte *)(render_base_ptr + 0x7d)));
  rendering_system_parameter_handler(render_value,RENDER_PARAM_DIFFUSE,
                CONCAT31((uint3)(*(uint *)(render_base_ptr + -0x60) >> 10),
                         (byte)(*(uint *)(render_base_ptr + -0x60) >> 2) & *(byte *)(render_base_ptr + 0x7d)));
  
  // 处理深度值和渲染状态
  if (texture_coord_u <= specular_light) {
    color_value = 0;
  }
  else {
    color_value = CONCAT44(render_quality,texture_coord_u);
    texture_coord_u = color_value;
  }
  texture_coord_u = CONCAT14(RENDER_CMD_DEPTH_TEST,texture_coord_u);
  FUN_180310a00();
  
  if (scale_factor <= specular_light) {
    color_value = 0;
  }
  else {
    texture_coord_u = CONCAT44(render_quality,scale_factor);
    color_value = texture_coord_u;
  }
  texture_coord_u = CONCAT14(RENDER_CMD_DISTANCE_TEST,texture_coord_u);
  FUN_180310a00();
  
  texture_format = (int16_t)((uint)scale_factor >> 0x10);
  status_flag = *(int *)(RENDER_SYSTEM_BASE_ADDR + 0x2300);
  render_state = (char)render_quality;
  
  // 处理渲染上下文和场景数据
  if (*(byte *)(render_base_ptr + -0x2c) < *(byte *)(render_base_ptr + 0x7d)) {
    if ((((*(float *)(scene_context + 0x68) != ambient_light) && (*(float *)(scene_context + 0x68) <= RENDERING_MIN_THRESHOLD)) &&
        (*(char *)(scene_context + 0x7c) == render_state)) &&
       (scale_factor = *(float *)(scene_context + 0x74) - *(float *)(scene_context + 0x6c),
       depth_value = *(float *)(scene_context + 0x78) - *(float *)(scene_context + 0x70),
       scale_factor = SQRT(scale_factor * scale_factor + depth_value * depth_value), scale_factor <= RENDERING_MAX_THRESHOLD)) {
      texture_coord_u = RENDERING_FLAG_MASK;
      camera_distance = RENDERING_FLAG_MASK;
      render_mode = RENDER_CMD_BEGIN_BATCH;
      FUN_180310a00(scale_factor,&matrix_data);
    }
    camera_distance = 0;
    render_mode = RENDER_CMD_BEGIN_BATCH;
    FUN_180310a00();
    *(char *)(scene_context + 0x7c) = render_state;
    *(int32_t *)(scene_context + 0x68) = 0xbf800000;
    *(uint64_t *)(scene_context + 0x6c) = 0;
    *(uint64_t *)(scene_context + 0x74) = 0;
    texture_index = 0;
  }
  else {
    if (texture_index != 0) {
      *(byte *)(scene_context + 0x7c) = *(byte *)(render_base_ptr + 0x7d);
    }
    if (*(float *)(scene_context + 0x68) == ambient_light) {
      scale_factor = 0.0;
      texture_coord_u =
           CONCAT44((float)*(ushort *)(render_base_ptr + -0x22),(float)*(ushort *)(render_base_ptr + -0x24));
      *(uint64_t *)(scene_context + 0x6c) = texture_coord_u;
    }
    else {
      scale_factor = *(float *)(scene_context + 0x68) + RENDERING_TIME_DELTA;
    }
    *(float *)(scene_context + 0x68) = scale_factor;
    color_value = 0;
    texture_coord_u = CONCAT14(RENDER_CMD_BEGIN_BATCH,texture_coord_u);
    FUN_180310a00();
    texture_coord_u =
         CONCAT44((float)*(ushort *)(render_base_ptr + -0x22),(float)*(ushort *)(render_base_ptr + -0x24));
    *(uint64_t *)(scene_context + 0x74) = texture_coord_u;
    texture_index = *(byte *)(render_base_ptr + 0x7d);
  }
  *(byte *)(scene_context + 0x7d) = texture_index;
  matrix_data = RENDER_SYSTEM_CONTEXT_ADDR;
  scale_factor = position_y * position_y + position_x * position_x;
  
  // 处理光照和距离计算
  if (camera_distance * camera_distance <= scale_factor) {
    position_x = (float)RENDERING_FLAG_MASK;
    position_buffer_1._8_8_ = 0;
    position_buffer_1._0_8_ = CONCAT44(0,scale_factor);
    position_buffer_2._8_8_ = 0;
    position_buffer_2._0_8_ = CONCAT44(0,scale_factor);
    position_buffer_2 = rsqrtss(position_buffer_1,position_buffer_2);
    position_y = position_buffer_2._0_4_;
    atan2f();
    position_x = (position_y * 0.5 * (position_x - scale_factor * position_y * position_y) * scale_factor - camera_distance) /
             (ambient_light - camera_distance);
    scale_factor = (float)sinf();
    position_y = (float)((uint)(scale_factor * position_x) ^ *(uint *)&specular_light);
    scale_factor = ambient_light;
    if ((ambient_light <= position_y) && (scale_factor = position_y, diffuse_light <= position_y)) {
      scale_factor = diffuse_light;
    }
    position_y = (float)cosf();
    position_y = position_y * position_x;
    position_x = ambient_light;
    if ((ambient_light <= position_y) && (position_x = position_y, diffuse_light <= position_y)) {
      position_x = diffuse_light;
    }
    *(float *)(render_base_ptr + -0x78) = scale_factor;
    *(float *)(render_base_ptr + -0x74) = position_x;
    render_value = *(uint64_t *)(render_base_ptr + -0x78);
    *(char *)(matrix_data + 0x2028) = render_state;
  }
  else {
    render_value = 0;
  }
  
  // 处理渲染参数和状态更新
  render_data_ptr = RENDER_SYSTEM_BASE_ADDR;
  render_flag = *(int32_t *)(render_base_ptr + -0x34);
  *(int32_t *)(scene_context + 0x338) = *(int32_t *)(render_base_ptr + -0x38);
  *(int32_t *)(scene_context + 0x340) = *(int32_t *)(render_base_ptr + -0x30);
  *(int32_t *)(scene_context + 0x33c) = render_flag;
  *(uint64_t *)(render_base_ptr + -0x78) = render_value;
  if (*(int *)(render_data_ptr + 0x2530) != render_quality) {
    if (*(byte *)(render_base_ptr + -0x2c) < *(byte *)(render_base_ptr + 0x7d)) {
      *(int *)(scene_context + 0x334) = render_quality;
    }
    else {
      texture_coord_u = *(ushort *)(render_base_ptr + -0x24);
      texture_coord_v = *(ushort *)(render_base_ptr + -0x22);
      existing_coord_u = *(ushort *)(scene_context + 0x334);
      existing_coord_v = *(ushort *)(scene_context + 0x336);
      *(short *)(scene_context + 0x334) = (short)(int)(float)texture_coord_u;
      position_x = (float)texture_coord_u - (float)existing_coord_u;
      scale_factor = (float)texture_coord_v - (float)existing_coord_v;
      *(short *)(scene_context + 0x336) = (short)(int)(float)texture_coord_v;
      if ((((float)existing_coord_u != specular_light) || ((float)existing_coord_v != specular_light)) &&
         ((RENDERING_DISTANCE_THRESHOLD <= ABS(position_x) || (RENDERING_DISTANCE_THRESHOLD <= ABS(scale_factor))))) {
        distance_value = (int)position_x;
        camera_distance = CONCAT44(render_option,render_quality);
        loop_counter = (int)scale_factor;
        render_quality = render_quality;
        render_quality = distance_value;
        render_quality = loop_counter;
        FUN_1801edeb0();
        matrix_data = RENDER_SYSTEM_CONTEXT_ADDR;
        if (*(char *)(RENDER_SYSTEM_STATUS_ADDR + 0x1609) != render_state) {
          texture_coord_u = CONCAT44(loop_counter,distance_value);
          FUN_180174080(*(uint64_t *)(RENDER_SYSTEM_DATA_ADDR + 8),texture_coord_u);
          matrix_data = 0x180c868d0;
        }
      }
      *(char *)(matrix_data + 0x2028) = render_state;
    }
  }
  
  // 处理渲染批次和纹理映射
  scale_factor = camera_distance * camera_distance +
           texture_coord_v * texture_coord_v;
  texture_buffer_1._4_4_ = render_option;
  texture_buffer_1._0_4_ = light_intensity;
  texture_buffer_1._8_4_ = fog_density;
  texture_buffer_1._12_4_ = *(int32_t *)&specular_light;
  texture_buffer_2._4_12_ = texture_buffer_1._4_12_;
  texture_buffer_2._0_4_ = light_intensity * light_intensity;
  color_value = texture_buffer_2._0_8_;
  if (texture_buffer_2._0_4_ <= scale_factor) {
    texture_buffer_2 = rsqrtss(ZEXT416((uint)scale_factor),ZEXT416((uint)scale_factor));
    position_x = texture_buffer_2._0_4_;
    atan2f();
    light_intensity = (position_x * 0.5 * (3.0 - scale_factor * position_x * position_x) * scale_factor - light_intensity) /
             (ambient_light - light_intensity);
    scale_factor = (float)sinf();
    position_x = (float)((uint)(scale_factor * light_intensity) ^ *(uint *)&specular_light);
    scale_factor = ambient_light;
    if ((ambient_light <= position_x) && (scale_factor = position_x, diffuse_light <= position_x)) {
      scale_factor = diffuse_light;
    }
    position_buffer_1._0_8_ = cosf();
    position_buffer_1._8_8_ = *(uint64_t *)&position_x;
    position_buffer_2._4_12_ = position_buffer_1._4_12_;
    position_buffer_2._0_4_ = (float)position_buffer_1._0_8_ * light_intensity;
    color_value = position_buffer_2._0_8_;
    if ((ambient_light <= position_buffer_2._0_4_) &&
       (ambient_light = position_buffer_2._0_4_, diffuse_light <= position_buffer_2._0_4_)) {
      ambient_light = diffuse_light;
    }
    *(char *)(matrix_data + 0x2028) = render_state;
  }
  else {
    scale_factor = 0.0;
    ambient_light = 0.0;
  }
  
  // 处理渲染上下文更新
  if (*(int *)(render_base_ptr + -0x60) != render_quality) {
    *(char *)(matrix_data + 0x2028) = render_state;
  }
  render_mode = RENDER_CMD_END_BATCH;
  camera_distance = render_value;
  texture_coord_v = scale_factor;
  specular_light = ambient_light;
  render_value = FUN_180310a00(color_value,&matrix_data);
  render_mode = RENDER_CMD_SET_TRANSFORM;
  camera_distance = scale_factor;
  diffuse_light = ambient_light;
  render_value = FUN_180310a00(render_value,&matrix_data);
  loop_counter = *(uint *)(render_base_ptr + -0x74);
  camera_distance = CONCAT44(render_quality,loop_counter);
  render_mode = RENDER_CMD_SET_COLOR;
  texture_coord_u = (float)loop_counter;
  render_value = FUN_180310a00(render_value,&matrix_data);
  texture_coord_u = (float)(loop_counter ^ *(uint *)&specular_light);
  camera_distance = CONCAT44(render_quality,texture_coord_u);
  render_mode = RENDER_CMD_SET_COLOR_INVERTED;
  render_value = FUN_180310a00(render_value,&matrix_data);
  loop_counter = *(uint *)(render_base_ptr + -0x78);
  camera_distance = CONCAT44(render_quality,loop_counter);
  render_mode = RENDER_CMD_SET_NORMAL;
  texture_coord_u = (float)loop_counter;
  render_value = FUN_180310a00(render_value,&matrix_data);
  texture_coord_u = (float)(loop_counter ^ *(uint *)&specular_light);
  camera_distance = CONCAT44(render_quality,texture_coord_u);
  render_mode = RENDER_CMD_SET_NORMAL_INVERTED;
  render_value = FUN_180310a00(render_value,&matrix_data);
  scale_factor = diffuse_light;
  texture_coord_u = diffuse_light;
  camera_distance = CONCAT44(render_quality,diffuse_light);
  render_mode = RENDER_CMD_SET_TEXCOORD_U;
  render_value = FUN_180310a00(render_value,&matrix_data);
  texture_coord_u = (float)((uint)scale_factor ^ *(uint *)&specular_light);
  camera_distance = CONCAT44(render_quality,texture_coord_u);
  render_mode = RENDER_CMD_SET_TEXCOORD_U_INVERTED;
  render_value = FUN_180310a00(render_value,&matrix_data);
  scale_factor = texture_coord_v;
  texture_coord_v = CONCAT44(render_quality,texture_coord_v);
  camera_distance = texture_coord_v;
  render_mode = RENDER_CMD_SET_TEXCOORD_V;
  render_value = FUN_180310a00(render_value,&matrix_data);
  texture_coord_v = CONCAT44(render_quality,(uint)scale_factor ^ *(uint *)&specular_light);
  camera_distance = texture_coord_v;
  render_mode = RENDER_CMD_SET_TEXCOORD_V_INVERTED;
  FUN_180310a00(render_value,&matrix_data);
  
  // 处理渲染管线和资源管理
  scale_factor = RENDERING_TIME_DELTA;
  render_context = 0;
  render_value = 0;
  if (*(char *)(scene_context + 0x80) != render_state) {
    render_context = (uint64_t)*(uint *)(scene_context + 0x88);
    render_value = (uint64_t)*(uint *)(scene_context + 0x84);
  }
  normal_buffer._8_8_ = 0;
  normal_buffer._0_8_ = render_value;
  position_buffer_1._8_8_ = 0;
  position_buffer_1._0_8_ = render_context;
  texture_index = *(byte *)(scene_context + 0x7f);
  
  // 处理纹理和资源更新
  if (*(byte *)(scene_context + 0x7f) != 0) {
    *(char *)(scene_context + 0x7f) = render_state;
    texture_index = 0;
    if (*(byte *)(scene_context + 400) < *(byte *)(scene_context + 0x8c)) {
      render_context = (uint64_t)*(byte *)(scene_context + 400);
      position_buffer_1 = ZEXT416(*(uint *)(scene_context + 0x90 + render_context * 4));
      *(float *)(scene_context + 0x110 + render_context * 4) = *(float *)(scene_context + 0x110 + render_context * 4) - scale_factor;
      if (*(float *)(scene_context + 0x110 + (uint64_t)*(byte *)(scene_context + 400) * 4) <=
          specular_light) {
        *(byte *)(scene_context + 400) = *(byte *)(scene_context + 400) + 1;
      }
      *(byte *)(scene_context + 0x7f) = *(byte *)(render_base_ptr + 0x7d);
      texture_index = *(byte *)(render_base_ptr + 0x7d);
    }
    if (*(byte *)(scene_context + 0x191) < *(byte *)(scene_context + 0x8d)) {
      render_context = (uint64_t)*(byte *)(scene_context + 0x191);
      normal_buffer = ZEXT416(*(uint *)(scene_context + 0xd0 + render_context * 4));
      *(float *)(scene_context + 0x150 + render_context * 4) = *(float *)(scene_context + 0x150 + render_context * 4) - scale_factor;
      if (*(float *)(scene_context + 0x150 + (uint64_t)*(byte *)(scene_context + 0x191) * 4) <=
          specular_light) {
        *(byte *)(scene_context + 0x191) = *(byte *)(scene_context + 0x191) + 1;
      }
      *(byte *)(scene_context + 0x7f) = *(byte *)(render_base_ptr + 0x7d);
      texture_index = *(byte *)(render_base_ptr + 0x7d);
    }
  }
  
  // 处理渲染管线和状态同步
  if ((status_flag != 0) && ((*(char *)(scene_context + 0x80) != render_state || (texture_index != 0)))) {
    position_buffer_2._4_12_ = position_buffer_1._4_12_;
    position_buffer_2._0_4_ = position_buffer_1._0_4_ * 255.0;
    texture_buffer_2._4_12_ = normal_buffer._4_12_;
    texture_buffer_2._0_4_ = normal_buffer._0_4_ * 255.0;
    FUN_1808eecf0(*(int32_t *)(scene_context + 0x330),&position_buffer_1,position_buffer_2._0_8_,texture_buffer_2._0_8_,
                  CONCAT22(texture_format,CONCAT11((char)(int)texture_buffer_2._0_4_,(char)(int)position_buffer_2._0_4_)));
    scale_factor = RENDERING_TIME_DELTA;
  }
  
  // 处理渲染模式和状态切换
  if (*(char *)(scene_context + 0x192) == render_state) {
    render_flag = 4;
    *(int32_t *)(scene_context + 100) = 4;
    status_flag = FUN_1808ee530(*(int32_t *)(scene_context + 0x330),&matrix_data);
    if ((status_flag == 0) && (matrix_data != 0)) {
      if (matrix_data == 1) {
        render_flag = 2;
      }
      *(int32_t *)(scene_context + 100) = render_flag;
    }
    *(int8_t *)(scene_context + 0x7e) = 1;
    CoreSystemConfigManager(*(uint64_t *)(render_base_ptr + 0xc0) ^ (uint64_t)&matrix_data);
  }
  
  // 处理渲染缓冲区和资源清理
  texture_index = *(byte *)(scene_context + 0x318);
  *(char *)(scene_context + 0x192) = render_state;
  if (texture_index < *(byte *)(scene_context + 0x194)) {
    *(float *)(scene_context + 0x298 + (uint64_t)texture_index * 4) =
         *(float *)(scene_context + 0x298 + (uint64_t)texture_index * 4) - scale_factor;
    if (*(float *)(scene_context + 0x298 + (uint64_t)*(byte *)(scene_context + 0x318) * 4) <=
        specular_light) {
      *(byte *)(scene_context + 0x318) = *(byte *)(scene_context + 0x318) + 1;
    }
    *(byte *)(scene_context + 0x192) = *(byte *)(render_base_ptr + 0x7d);
  }
  
  texture_index = *(byte *)(scene_context + 0x319);
  if (texture_index < *(byte *)(scene_context + 0x195)) {
    *(float *)(scene_context + 0x2d8 + (uint64_t)texture_index * 4) =
         *(float *)(scene_context + 0x2d8 + (uint64_t)texture_index * 4) - scale_factor;
    if (*(float *)(scene_context + 0x2d8 + (uint64_t)*(byte *)(scene_context + 0x319) * 4) <=
        specular_light) {
      *(byte *)(scene_context + 0x319) = *(byte *)(scene_context + 0x319) + 1;
    }
    *(byte *)(scene_context + 0x192) = *(byte *)(render_base_ptr + 0x7d);
  }
  
  // 清理渲染上下文
  memset(render_base_ptr + 0x20,0,0x78);
}



// 函数: 渲染系统渲染状态处理器
// 功能: 处理渲染状态的切换和参数更新
void rendering_system_render_state_processor(void)

{
  int32_t render_mode;
  int64_t render_context;
  int64_t scene_data;
  int32_t render_option;
  int status_flag;
  
  if (status_flag != 0) {
    if (status_flag == 1) {
      render_mode = render_option;
    }
    *(int32_t *)(scene_data + 100) = render_mode;
  }
  *(int8_t *)(scene_data + 0x7e) = 1;
  CoreSystemConfigManager(*(uint64_t *)(render_context + 0xc0) ^ (uint64_t)&status_flag);
}



// 函数: 渲染系统参数处理器
// 参数: param_1 - 渲染参数值, param_2 - 参数类型, param_3 - 参数标志
// 功能: 处理渲染系统参数的设置和验证
void rendering_system_parameter_handler(int32_t param_1,int8_t param_2,char param_3)

{
  int8_t parameter_buffer [4];
  int8_t parameter_type;
  uint64_t parameter_value;
  
  parameter_type = param_2;
  if (param_3 != '\0') {
    parameter_value = RENDERING_FLAG_MASK;
    FUN_180310a00(RENDERING_FLAG_MASK,parameter_buffer);
    return;
  }
  parameter_value = 0;
  FUN_180310a00(param_1,parameter_buffer);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

