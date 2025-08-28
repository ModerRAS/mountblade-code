#include "TaleWorlds.Native.Split.h"

// 03_rendering_part087.c - 4个函数
// 渲染系统高级参数处理和资源管理模块
// 包含渲染参数设置、批量处理、纹理生成、坐标计算、资源管理和状态清理等高级渲染功能

// 常量定义
#define RENDERING_SYSTEM_MAX_RESOLUTION 128
#define RENDERING_SYSTEM_TEXTURE_SIZE 32
#define RENDERING_SYSTEM_PARAMETER_COUNT 6
#define RENDERING_SYSTEM_MAGIC_NUMBER 0x1000001
#define RENDERING_SYSTEM_STACK_CANARY 0xfffffffffffffffe
#define RENDERING_SYSTEM_FLOAT_ONE 0x3f800000
#define RENDERING_SYSTEM_FLOAT_NEG_ONE 0xbf800000
#define RENDERING_SYSTEM_FLOAT_NAN 0x7fc00000
#define RENDERING_SYSTEM_TEXTURE_FORMAT 0x200020
#define RENDERING_SYSTEM_BUFFER_SIZE 0x3b0
#define RENDERING_SYSTEM_STRING_LENGTH 0x40

// 函数别名定义
#define rendering_system_advanced_parameter_setup FUN_1803198f0
#define rendering_system_batch_process_and_apply FUN_18031a020
#define rendering_system_texture_generation_and_coord_calculation FUN_18031a240
#define rendering_system_resource_management_and_cleanup FUN_18031a470

// 函数: void FUN_1803198f0(undefined8 param_1,longlong param_2,int param_3,int param_4,undefined4 param_5)
// 渲染系统高级参数设置函数
// 设置渲染系统的各种参数，包括纹理坐标、颜色值、缩放因子等
void rendering_system_advanced_parameter_setup(undefined8 param_1, longlong param_2, int param_3, int param_4, undefined4 param_5)

{
  longlong *resource_manager;
  longlong context_base;
  longlong texture_manager;
  longlong *render_state;
  int resolution_value;
  undefined4 color_r;
  float scale_factor;
  undefined4 color_g;
  undefined4 color_b;
  undefined4 color_a;
  undefined4 tex_coord_u;
  undefined4 tex_coord_v;
  undefined4 param_x;
  undefined4 param_y;
  undefined1 stack_canary_check[32];
  undefined4 clear_color_r;
  undefined4 clear_color_g;
  undefined1 alignment_pad[8];
  longlong *texture_ptr;
  longlong *resource_ptrs[2];
  longlong *buffer_manager;
  undefined8 context_param1;
  undefined8 context_param2;
  undefined4 buffer_size;
  longlong *memory_pool;
  longlong *data_stream;
  longlong stream_position;
  undefined4 stream_param;
  ulonglong stack_protection;
  undefined4 render_flag1;
  undefined4 render_flag2;
  undefined4 render_flag3;
  undefined4 render_flag4;
  longlong *render_target;
  undefined8 render_context;
  longlong *shader_manager;
  undefined8 shader_param1;
  undefined8 shader_param2;
  undefined4 shader_param3;
  undefined1 texture_data[32];
  undefined8 texture_info1;
  undefined8 texture_info2;
  longlong *texture_handle;
  longlong **texture_ptr_ptr;
  int texture_width;
  int texture_height;
  undefined *render_target_ptr;
  undefined1 *shader_code_ptr;
  undefined4 shader_type;
  undefined1 shader_buffer[8];
  ulonglong hash_value;
  undefined8 render_state1;
  undefined8 render_state2;
  undefined4 render_state3;
  undefined4 render_state4;
  undefined4 render_state5;
  undefined8 render_config;
  float render_scale;
  undefined4 render_param1;
  undefined4 render_param2;
  undefined4 render_param3;
  ulonglong security_cookie;
  
  // 安全检查：设置堆栈保护
  render_context = RENDERING_SYSTEM_STACK_CANARY;
  security_cookie = _DAT_180bf00a8 ^ (ulonglong)stack_canary_check;
  
  // 初始化纹理参数
  FUN_1802c22a0(alignment_pad, &UNK_180a1abf8);
  context_base = _DAT_180c86938;
  
  // 计算分辨率值
  resolution_value = RENDERING_SYSTEM_MAX_RESOLUTION >> ((byte)param_3 & 0x1f);
  resource_manager = *(longlong **)(_DAT_180c86938 + 0x1cd8);
  
  // 检查并设置渲染状态
  if (*(longlong *)(param_2 + 0x1d8) == 0) {
    render_state = (longlong *)0x0;
  }
  else {
    // 更新渲染参数
    if (_DAT_180c86870 != 0) {
      *(longlong *)(param_2 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    }
    
    // 计算纹理索引
    render_state = (longlong *)
                   ((longlong)(int)((uint)*(byte *)(param_2 + 0x335) * param_4 + param_3) * 0x10 +
                   *(longlong *)(param_2 + 0x1d8));
    
    // 激活纹理状态
    if ((render_state != (longlong *)0x0) && (*render_state != 0)) {
      (**(code **)(*resource_manager + 0x70))(resource_manager, *render_state, 1);
      context_base = _DAT_180c86938;
    }
  }
  
  // 设置渲染状态指针
  resource_manager[0x1077] = (longlong)render_state;
  *(undefined8 *)(*(longlong *)(context_base + 0x1cd8) + 0x83f0) = 0;
  FUN_18029de40(*(undefined8 *)(context_base + 0x1cd8), 1);
  
  // 初始化清除颜色
  clear_color_r = 0;
  clear_color_g = 0;
  FUN_18029c8a0(*(undefined8 *)(_DAT_180c86938 + 0x1cd8), 1, 0xff000000, RENDERING_SYSTEM_FLOAT_ONE);
  
  context_base = _DAT_180c86938;
  render_scale = (float)resolution_value;
  scale_factor = 1.0 / render_scale;
  
  // 设置缩放参数
  *(float *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1be0) = scale_factor * 0.5;
  *(float *)(*(longlong *)(context_base + 0x1cd8) + 0x1be4) = scale_factor * 0.5;
  *(float *)(*(longlong *)(context_base + 0x1cd8) + 0x1be8) = scale_factor;
  *(float *)(*(longlong *)(context_base + 0x1cd8) + 0x1bec) = scale_factor;
  
  texture_manager = *(longlong *)(context_base + 0x1cd8);
  render_config = 0;
  render_param2 = 0;
  render_param3 = RENDERING_SYSTEM_FLOAT_ONE;
  resource_manager = *(longlong **)(texture_manager + 0x8400);
  render_param1 = render_scale;
  (**(code **)(*resource_manager + 0x160))(resource_manager, 1, &render_config);
  
  texture_ptr_ptr = (longlong **)0x0;
  resource_manager = *(longlong **)(texture_manager + 0x8400);
  texture_width = resolution_value;
  texture_height = resolution_value;
  (**(code **)(*resource_manager + 0x168))(resource_manager, 1, &texture_ptr_ptr);
  
  context_base = _DAT_180c86938;
  color_r = RENDERING_SYSTEM_FLOAT_NAN;
  color_g = RENDERING_SYSTEM_FLOAT_NAN;
  color_b = RENDERING_SYSTEM_FLOAT_NAN;
  color_a = RENDERING_SYSTEM_FLOAT_NAN;
  tex_coord_u = color_g;
  param_x = color_g;
  param_y = color_g;
  tex_coord_v = color_g;
  
  // 根据渲染模式设置颜色参数
  switch(param_4) {
  case 0:  // 正面渲染
    color_g = RENDERING_SYSTEM_FLOAT_ONE;
    tex_coord_v = 0;
    color_b = RENDERING_SYSTEM_FLOAT_NEG_ONE;
    goto set_color_values;
  case 1:  // 背面渲染
    color_r = RENDERING_SYSTEM_FLOAT_NEG_ONE;
    color_g = RENDERING_SYSTEM_FLOAT_NEG_ONE;
    tex_coord_v = 0;
    color_b = RENDERING_SYSTEM_FLOAT_ONE;
    break;
  case 2:  // 侧面渲染
    color_r = RENDERING_SYSTEM_FLOAT_NEG_ONE;
    color_g = RENDERING_SYSTEM_FLOAT_NEG_ONE;
    tex_coord_v = RENDERING_SYSTEM_FLOAT_ONE;
    color_b = 0;
    param_y = RENDERING_SYSTEM_FLOAT_ONE;
    color_a = 0;
    goto apply_side_colors;
  case 3:  // 顶部渲染
    color_r = RENDERING_SYSTEM_FLOAT_NEG_ONE;
    color_g = RENDERING_SYSTEM_FLOAT_ONE;
    param_x = RENDERING_SYSTEM_FLOAT_NEG_ONE;
    tex_coord_v = RENDERING_SYSTEM_FLOAT_ONE;
    color_b = 0;
    color_a = 0;
    param_y = param_x;
    goto apply_top_colors;
  case 4:  // 底部渲染
    color_r = RENDERING_SYSTEM_FLOAT_NEG_ONE;
    color_g = RENDERING_SYSTEM_FLOAT_ONE;
    tex_coord_v = RENDERING_SYSTEM_FLOAT_ONE;
    color_b = 0;
    break;
  case 5:  // 边缘渲染
    color_g = RENDERING_SYSTEM_FLOAT_NEG_ONE;
    tex_coord_v = RENDERING_SYSTEM_FLOAT_NEG_ONE;
    color_b = 0;
set_color_values:
    color_r = RENDERING_SYSTEM_FLOAT_ONE;
    break;
  default:
    goto apply_final_colors;
  }
  color_a = RENDERING_SYSTEM_FLOAT_NEG_ONE;
  param_y = 0;
apply_side_colors:
  param_x = RENDERING_SYSTEM_FLOAT_ONE;
apply_top_colors:
  tex_coord_u = 0;
apply_final_colors:
  
  // 应用颜色设置到渲染上下文
  *(undefined4 *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1bf0) = color_r;
  *(undefined4 *)(*(longlong *)(context_base + 0x1cd8) + 0x1bf4) = color_g;
  *(undefined4 *)(*(longlong *)(context_base + 0x1cd8) + 0x1bf8) = param_x;
  *(undefined4 *)(*(longlong *)(context_base + 0x1cd8) + 0x1bfc) = RENDERING_SYSTEM_FLOAT_ONE;
  *(undefined4 *)(*(longlong *)(context_base + 0x1cd8) + 0x1c10) = tex_coord_v;
  *(undefined4 *)(*(longlong *)(context_base + 0x1cd8) + 0x1c14) = color_b;
  *(undefined4 *)(*(longlong *)(context_base + 0x1cd8) + 0x1c18) = tex_coord_u;
  *(float *)(*(longlong *)(context_base + 0x1cd8) + 0x1c1c) = (float)param_3;
  *(undefined4 *)(*(longlong *)(context_base + 0x1cd8) + 0x1c20) = tex_coord_u;
  *(undefined4 *)(*(longlong *)(context_base + 0x1cd8) + 0x1c24) = param_y;
  *(undefined4 *)(*(longlong *)(context_base + 0x1cd8) + 0x1c28) = color_a;
  *(undefined4 *)(*(longlong *)(context_base + 0x1cd8) + 0x1c2c) = RENDERING_SYSTEM_FLOAT_ONE;
  
  // 处理纹理参数
  rendering_system_texture_generation_and_coord_calculation(resource_ptrs, param_5);
  FUN_18029fc10(*(longlong *)(_DAT_180c86938 + 0x1cd8), *(undefined8 *)(_DAT_180c86938 + 0x1c88),
                *(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1be0, 0x230);
  
  // 设置渲染管线
  render_target_ptr = &UNK_1809fcc58;
  shader_code_ptr = shader_buffer + 4;
  shader_buffer[4] = 0;
  shader_type = 0xd;
  strcpy_s(shader_buffer + 4, RENDERING_SYSTEM_STRING_LENGTH, &UNK_180a0d408);
  FUN_1800b4910(_DAT_180c86930, &texture_ptr, &render_target_ptr);
  render_target_ptr = &UNK_18098bcb0;
  
  // 初始化渲染配置
  render_config = 0;
  render_scale = 0.0;
  render_param1._0_2_ = 4;
  memory_pool = (longlong *)0x0;
  data_stream = (longlong *)&UNK_180a3c3e0;
  hash_value = 0;
  stream_position = 0;
  stream_param = 0;
  render_target = (longlong *)0x0;
  buffer_manager = texture_ptr;
  context_param2 = CONCAT26(render_param1._2_2_, 0x400000000);
  context_param1 = 0;
  buffer_size = 2;
  render_flag1 = 0;
  render_flag2 = 0;
  render_flag3 = 0;
  render_flag4 = 0;
  
  context_base = texture_ptr[0x2b7];
  texture_ptr_ptr = &shader_manager;
  shader_manager = texture_ptr;
  shader_param1 = 0;
  shader_param3 = 2;
  shader_param2 = 0;
  texture_info2 = context_param2;
  FUN_180627ae0(texture_data, &data_stream);
  texture_info1 = CONCAT44(render_flag2, render_flag1);
  texture_info2 = CONCAT44(render_flag4, render_flag3);
  texture_handle = render_target;
  
  // 初始化渲染目标
  if (render_target != (longlong *)0x0) {
    (**(code **)(*render_target + 0x28))();
  }
  
  render_target_ptr = (undefined *)FUN_180299eb0(context_base, 0, &shader_manager, alignment_pad);
  shader_type = 0xff;
  shader_buffer = (undefined1 [8])0x4000300;
  render_state1 = 0;
  render_state2 = 0;
  render_state3 = 0;
  render_state4 = 0;
  render_state5 = 0x400;
  shader_param3 = 1;
  hash_value = (ulonglong)*(uint *)(param_2 + 0x324);
  shader_code_ptr = (undefined1 *)0xff00000001060101;
  clear_color_r = 0xffffffff;
  
  // 应用渲染设置
  FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8), 5, param_1, 0x10);
  clear_color_r = 0xffffffff;
  FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8), 0, resource_ptrs[0], 0x10);
  FUN_18029d000(*(undefined8 *)(_DAT_180c86938 + 0x1cd8), 4);
  FUN_18029cdd0(*(undefined8 *)(_DAT_180c86938 + 0x1cd8), &render_target_ptr);
  
  context_base = _DAT_180c86938;
  stream_position = strnlen(&UNK_180a1abc8, 0x3f);
  strncpy(context_base + 0x1ce0, &UNK_180a1abc8, stream_position);
  *(undefined1 *)(stream_position + 0x1ce0 + context_base) = 0;
  FUN_18029e110(*(undefined8 *)(_DAT_180c86938 + 0x1cd8));
  
  // 清理资源
  if (render_target != (longlong *)0x0) {
    (**(code **)(*render_target + 0x38))();
  }
  
  texture_ptr_ptr = &data_stream;
  data_stream = (longlong *)&UNK_180a3c3e0;
  if (stream_position == 0) {
    stream_position = 0;
    hash_value = hash_value & 0xffffffff00000000;
    data_stream = (longlong *)&UNK_18098bcb0;
    if (memory_pool != (longlong *)0x0) {
      (**(code **)(*memory_pool + 0x38))();
    }
    if (texture_ptr != (longlong *)0x0) {
      (**(code **)(*texture_ptr + 0x38))();
    }
    if (resource_ptrs[0] != (longlong *)0x0) {
      (**(code **)(*resource_ptrs[0] + 0x38))();
    }
    _DAT_180c8695c = _DAT_180c8695c + -1;
    (**(code **)(*_DAT_180c86968 + 0x20))();
    // 安全检查：验证堆栈保护
    FUN_1808fc050(security_cookie ^ (ulonglong)stack_canary_check);
  }
  // 错误处理：不返回的函数调用
  FUN_18064e900();
}



// 函数: void FUN_18031a020(undefined8 *param_1,longlong param_2,undefined4 param_3)
// 渲染系统批量处理和应用函数
// 批量处理渲染数据并应用到渲染管线中
void rendering_system_batch_process_and_apply(undefined8 *param_1, longlong param_2, undefined4 param_3)

{
  uint texture_index;
  undefined4 *texture_data;
  uint texture_size;
  int resolution_level;
  int mip_level;
  uint mip_count;
  undefined *render_target;
  undefined1 stack_canary_check[32];
  undefined4 render_param1;
  undefined *render_context;
  undefined *texture_buffer;
  uint buffer_size;
  undefined4 texture_format;
  undefined4 texture_width;
  undefined4 texture_height;
  undefined4 texture_depth;
  uint texture_mips;
  undefined4 texture_flags;
  undefined1 texture_type;
  undefined8 texture_info;
  undefined4 render_quality;
  undefined1 texture_filter;
  undefined8 render_params;
  undefined8 *texture_manager;
  undefined *shader_code;
  undefined1 *vertex_data;
  int vertex_count;
  undefined1 vertex_buffer[136];
  ulonglong security_cookie;
  
  // 安全检查：设置堆栈保护
  render_params = RENDERING_SYSTEM_STACK_CANARY;
  security_cookie = _DAT_180bf00a8 ^ (ulonglong)stack_canary_check;
  render_param1 = 0;
  texture_index = RENDERING_SYSTEM_MAX_RESOLUTION;
  resolution_level = -1;
  
  // 计算纹理分辨率级别
  do {
    mip_level = resolution_level;
    texture_index = texture_index >> 1;
    resolution_level = mip_level + 1;
  } while (texture_index != 0);
  mip_count = resolution_level + 2;
  
  // 初始化纹理参数
  texture_flags = 0;
  texture_width = 0;
  texture_height = 0;
  texture_depth = 0;
  texture_format = RENDERING_SYSTEM_FLOAT_ONE;
  texture_info = RENDERING_SYSTEM_MAGIC_NUMBER;
  texture_filter = 0;
  texture_height = RENDERING_SYSTEM_MAX_RESOLUTION;
  texture_depth = RENDERING_SYSTEM_MAX_RESOLUTION;
  texture_width = 6;
  texture_format = 0x1e;
  texture_type = 1;
  texture_mips = mip_count;
  render_quality = param_3;
  texture_manager = param_1;
  
  // 创建纹理缓冲区
  FUN_1806279c0(&render_context, param_2 + 0x10);
  texture_index = buffer_size;
  texture_size = buffer_size + 1;
  FUN_1806277c0(&render_context, texture_size);
  *(undefined2 *)(texture_buffer + buffer_size) = 0x5f;
  resolution_level = texture_index + 0x11;
  buffer_size = texture_size;
  FUN_1806277c0(&render_context, resolution_level);
  texture_data = (undefined4 *)(texture_buffer + buffer_size);
  
  // 设置纹理标识符
  *texture_data = 0x746c6966;  // "filt"
  texture_data[1] = 0x64657265;  // "ered"
  texture_data[2] = 0x6275635f;  // "_buc"
  texture_data[3] = 0x70616d65;  // "epam"
  *(undefined1 *)(texture_data + 4) = 0;
  
  // 设置渲染目标
  shader_code = &UNK_1809fcc28;
  vertex_data = vertex_buffer;
  vertex_buffer[0] = 0;
  render_target = &DAT_18098bc73;
  if (texture_buffer != (undefined *)0x0) {
    render_target = texture_buffer;
  }
  buffer_size = resolution_level;
  vertex_count = resolution_level;
  strcpy_s(vertex_buffer, RENDERING_SYSTEM_STRING_LENGTH, render_target);
  FUN_1800b1230(_DAT_180c86930, param_1, &shader_code, &texture_height);
  
  render_param1 = 1;
  shader_code = &UNK_18098bcb0;
  texture_index = 0;
  
  // 批量处理渲染数据
  do {
    texture_size = 0;
    if (mip_count != 0) {
      do {
        texture_height = param_3;
        rendering_system_advanced_parameter_setup(param_2, *param_1, texture_size, texture_index);
        texture_size = texture_size + 1;
      } while (texture_size < mip_count);
    }
    texture_index = texture_index + 1;
  } while ((int)texture_index < RENDERING_SYSTEM_PARAMETER_COUNT);
  
  render_context = &UNK_180a3c3e0;
  if (texture_buffer == (undefined *)0x0) {
    texture_buffer = (undefined *)0x0;
    texture_format = 0;
    render_context = &UNK_18098bcb0;
    // 安全检查：验证堆栈保护
    FUN_1808fc050(security_cookie ^ (ulonglong)stack_canary_check);
  }
  // 错误处理：不返回的函数调用
  FUN_18064e900();
}



// 函数: void FUN_18031a240(undefined8 *param_1,undefined4 param_2)
// 渲染系统纹理生成和坐标计算函数
// 生成纹理数据并计算纹理坐标映射
void rendering_system_texture_generation_and_coord_calculation(undefined8 *param_1, undefined4 param_2)

{
  uint pixel_index;
  undefined8 texture_handle;
  longlong *texture_manager;
  uint color_value;
  float *texture_data;
  int x_coord;
  int y_coord;
  float u_coord;
  double intensity;
  double weight;
  float v_coord;
  undefined1 stack_canary_check[32];
  undefined8 render_context;
  undefined4 texture_param1;
  undefined4 texture_param2;
  undefined8 texture_info;
  undefined8 *texture_buffer;
  float *pixel_data;
  undefined8 texture_size;
  undefined2 texture_width;
  undefined1 texture_height;
  undefined8 texture_format;
  undefined8 texture_type;
  undefined8 texture_flags;
  undefined8 texture_mips;
  undefined8 texture_filter;
  undefined8 texture_address;
  undefined8 texture_lod;
  undefined4 texture_usage;
  undefined2 texture_dimension;
  undefined2 texture_format_flags;
  undefined2 texture_access;
  undefined1 texture_misc;
  ulonglong security_cookie;
  
  // 安全检查：设置堆栈保护
  texture_type = RENDERING_SYSTEM_STACK_CANARY;
  security_cookie = _DAT_180bf00a8 ^ (ulonglong)stack_canary_check;
  texture_param2 = 0;
  pixel_data = (float *)0x0;
  texture_size = 0;
  texture_width = 0;
  texture_height = 3;
  texture_misc = 0;
  texture_format = 0;
  texture_type = 0;
  texture_flags = 0;
  texture_mips = 0;
  texture_filter = 0;
  texture_address = 0;
  texture_lod = 0;
  texture_dimension = 1;
  texture_access = 1;
  texture_usage = RENDERING_SYSTEM_TEXTURE_FORMAT;
  texture_filter = 0x21;
  texture_access = 0x102;
  texture_buffer = param_1;
  
  // 分配纹理数据缓冲区
  FUN_1802a1bc0(&pixel_data);
  v_coord = 0.0;
  texture_data = pixel_data;
  y_coord = 0;
  
  // 生成纹理坐标数据
  do {
    u_coord = 0.0;
    x_coord = 0;
    do {
      color_value = (uint)(v_coord * 32.0 + u_coord);
      *texture_data = (float)(int)color_value * 0.0009765625;  // 1/1024
      
      // 计算像素强度
      intensity = 0.0;
      weight = 0.5;
      for (; color_value != 0; color_value = (int)color_value / 2) {
        pixel_index = color_value & 0x80000001;
        if ((int)pixel_index < 0) {
          pixel_index = (pixel_index - 1 | 0xfffffffe) + 1;
        }
        intensity = intensity + (double)(int)pixel_index * weight;
        weight = weight * 0.5;
      }
      
      texture_data[1] = (float)intensity;
      texture_data[2] = 0.0;
      texture_data[3] = 1.0;
      texture_data = texture_data + 4;
      x_coord = x_coord + 1;
      u_coord = (float)x_coord;
    } while (u_coord < 32.0);
    y_coord = y_coord + 1;
    v_coord = (float)y_coord;
  } while (v_coord < 32.0);
  
  // 创建纹理对象
  texture_handle = FUN_18062b1e0(_DAT_180c8ed18, RENDERING_SYSTEM_BUFFER_SIZE, 0x10, 
                                CONCAT71((uint7)(uint3)((uint)x_coord >> 8), 3));
  texture_manager = (longlong *)FUN_18023a2e0(texture_handle, 0);
  *param_1 = texture_manager;
  
  // 初始化纹理管理器
  if (texture_manager != (longlong *)0x0) {
    (**(code **)(*texture_manager + 0x28))(texture_manager);
  }
  
  texture_param2 = 1;
  render_context = *param_1;
  texture_param1 = param_2;
  FUN_1800a5810(_DAT_180c86938, &pixel_data, 1, 0);
  
  // 清理纹理数据
  if (texture_width._1_1_ == '\0') {
    if (((char)texture_width == '\0') && (pixel_data != (float *)0x0)) {
      // 错误处理：不返回的函数调用
      FUN_18064e900();
    }
    pixel_data = (float *)0x0;
    texture_size = 0;
    texture_width = 0;
  }
  // 安全检查：验证堆栈保护
  FUN_1808fc050(security_cookie ^ (ulonglong)stack_canary_check);
}



// 函数: void FUN_18031a470(longlong param_1,longlong param_2)
// 渲染系统资源管理和清理函数
// 管理渲染资源并进行内存清理
void rendering_system_resource_management_and_cleanup(longlong param_1, longlong param_2)

{
  longlong *resource_manager;
  longlong resource_count;
  longlong *texture_resource;
  int object_count;
  longlong *render_target;
  
  render_target = (longlong *)0x0;
  texture_resource = *(longlong **)(param_1 + 0x58);
  object_count = (int)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 3);
  
  // 处理渲染对象
  if (object_count < 1) {
    // 清理纹理资源
    if (texture_resource != (longlong *)0x0) {
      (**(code **)(*texture_resource + 0x28))(texture_resource);
    }
    resource_manager = *(longlong **)(param_2 + 0x9970);
    *(longlong **)(param_2 + 0x9970) = texture_resource;
    if (resource_manager != (longlong *)0x0) {
      (**(code **)(*resource_manager + 0x38))();
    }
    
    // 清理渲染目标资源
    texture_resource = *(longlong **)(param_1 + 0x40);
    if (texture_resource != (longlong *)0x0) {
      (**(code **)(*texture_resource + 0x28))(texture_resource);
    }
    resource_manager = *(longlong **)(param_2 + 0x9720);
    *(longlong **)(param_2 + 0x9720) = texture_resource;
    if (resource_manager != (longlong *)0x0) {
      (**(code **)(*resource_manager + 0x38))();
    }
    
    // 清理缓冲区资源
    texture_resource = *(longlong **)(param_1 + 0x48);
    if (texture_resource != (longlong *)0x0) {
      (**(code **)(*texture_resource + 0x28))(texture_resource);
    }
    resource_manager = *(longlong **)(param_2 + 0x9728);
    *(longlong **)(param_2 + 0x9728) = texture_resource;
    if (resource_manager != (longlong *)0x0) {
      (**(code **)(*resource_manager + 0x38))();
    }
    
    // 重置渲染状态
    *(undefined4 *)(param_2 + 0x124c0) = 0;
  }
  else {
    // 处理多个渲染对象
    if (texture_resource != (longlong *)0x0) {
      (**(code **)(*texture_resource + 0x28))(texture_resource);
    }
    resource_manager = *(longlong **)(param_2 + 0x9970);
    *(longlong **)(param_2 + 0x9970) = texture_resource;
    if (resource_manager != (longlong *)0x0) {
      (**(code **)(*resource_manager + 0x38))();
    }
    
    texture_resource = *(longlong **)(param_1 + 0x40);
    if (texture_resource != (longlong *)0x0) {
      (**(code **)(*texture_resource + 0x28))(texture_resource);
    }
    resource_manager = *(longlong **)(param_2 + 0x9720);
    *(longlong **)(param_2 + 0x9720) = texture_resource;
    if (resource_manager != (longlong *)0x0) {
      (**(code **)(*resource_manager + 0x38))();
    }
    
    texture_resource = *(longlong **)(param_1 + 0x48);
    if (texture_resource != (longlong *)0x0) {
      (**(code **)(*texture_resource + 0x28))(texture_resource);
    }
    resource_manager = *(longlong **)(param_2 + 0x9728);
    *(longlong **)(param_2 + 0x9728) = texture_resource;
    if (resource_manager != (longlong *)0x0) {
      (**(code **)(*resource_manager + 0x38))();
    }
    
    // 设置对象计数
    *(int *)(param_2 + 0x124c0) = object_count;
  }
  
  // 检查并创建资源管理器
  if (*(longlong *)(param_2 + 0x9970) == 0) {
    texture_resource = (longlong *)FUN_1800bde30();
    if (texture_resource != (longlong *)0x0) {
      (**(code **)(*texture_resource + 0x28))(texture_resource);
    }
    resource_manager = *(longlong **)(param_2 + 0x9970);
    *(longlong **)(param_2 + 0x9970) = texture_resource;
    if (resource_manager != (longlong *)0x0) {
      (**(code **)(*resource_manager + 0x38))();
    }
    *(undefined4 *)(param_2 + 0x124c0) = 0;
  }
  
  // 处理特殊的渲染对象
  if ((*(char *)(*(longlong *)(param_1 + 0x38) + 0x331d) == '\0') &&
     (*(int *)(param_1 + 0x30) != -1)) {
    resource_count = *(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 0x30) * 8);
    if (*(longlong *)(resource_count + 0x40) == 0) {
      render_target = *(longlong **)(resource_count + 0x128);
    }
    else {
      render_target = *(longlong **)(resource_count + 0x28);
    }
  }
  
  // 清理渲染目标
  if (render_target != (longlong *)0x0) {
    (**(code **)(*render_target + 0x28))(render_target);
  }
  texture_resource = *(longlong **)(param_2 + 0x9988);
  *(longlong **)(param_2 + 0x9988) = render_target;
  if (texture_resource != (longlong *)0x0) {
    (**(code **)(*texture_resource + 0x38))();
  }
  return;
}