#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 01_initialization_part051.c - 8 个函数

// 函数: void FUN_180078051(uint64_t param_1,uint64_t param_2,float param_3,float param_4)
// 功能: 矩阵变换函数，用于进行3D空间中的坐标变换
void FUN_180078051(uint64_t param_1, uint64_t param_2, float param_3, float param_4)

{
  float matrix_element_1;
  float matrix_element_2;
  float matrix_element_3;
  float matrix_element_4;
  float matrix_element_5;
  float matrix_element_6;
  float matrix_element_7;
  float matrix_element_8;
  float matrix_element_9;
  longlong transformation_base;
  float *matrix_pointer;
  int32_t matrix_flag;
  float x_component_1;
  float y_component_1;
  float z_component_1;
  float x_component_2;
  float y_component_2;
  float z_component_2;
  float x_component_3;
  float y_component_3;
  float z_component_3;
  int32_t stack_param_1;
  float transformed_x_1;
  float transformed_y_1;
  float transformed_z_1;
  int32_t stack_param_2;
  float transformed_x_2;
  float transformed_y_2;
  float transformed_z_2;
  int32_t stack_param_3;
  float transformed_x_3;
  float transformed_y_3;
  float transformed_z_3;
  int32_t stack_param_4;
  float transformed_x_4;
  float transformed_y_4;
  float transformed_z_4;
  int32_t stack_param_5;
  int32_t input_param_1;
  int32_t input_param_2;
  
  // 从矩阵指针获取变换矩阵元素
  matrix_element_1 = *matrix_pointer;
  matrix_element_2 = matrix_pointer[1];
  matrix_element_3 = matrix_pointer[2];
  matrix_element_4 = matrix_pointer[8];
  matrix_element_5 = matrix_pointer[9];
  matrix_element_6 = matrix_pointer[10];
  matrix_element_7 = *(float *)(transformation_base + 0x124);
  matrix_element_8 = *(float *)(transformation_base + 0x130);
  
  // 第一行变换计算
  transformed_x_1 = matrix_element_7 * x_component_2 + (float)param_1 * matrix_element_1 + (float)param_2 * matrix_element_4;
  transformed_y_1 = matrix_element_7 * y_component_2 + (float)((ulonglong)param_1 >> 0x20) * matrix_element_2 + (float)((ulonglong)param_2 >> 0x20) * matrix_element_5;
  transformed_z_1 = matrix_element_7 * z_component_2 + x_component_1 * matrix_element_3 + y_component_1 * matrix_element_6;
  
  matrix_element_7 = *(float *)(transformation_base + 0x138);
  matrix_element_9 = *(float *)(transformation_base + 0x140);
  
  // 第二行变换计算
  transformed_x_2 = x_component_3 * x_component_2 + matrix_element_8 * matrix_element_1 + matrix_element_7 * matrix_element_4;
  transformed_y_2 = x_component_3 * y_component_2 + matrix_element_8 * matrix_element_2 + matrix_element_7 * matrix_element_5;
  transformed_z_2 = x_component_3 * z_component_2 + matrix_element_8 * matrix_element_3 + matrix_element_7 * matrix_element_6;
  
  matrix_element_7 = *(float *)(transformation_base + 0x148);
  matrix_element_8 = *(float *)(transformation_base + 0x150);
  
  // 第三行变换计算
  transformed_x_3 = param_4 * x_component_2 + matrix_element_9 * matrix_element_1 + matrix_element_7 * matrix_element_4;
  transformed_y_3 = param_4 * y_component_2 + matrix_element_9 * matrix_element_2 + matrix_element_7 * matrix_element_5;
  transformed_z_3 = param_4 * z_component_2 + matrix_element_9 * matrix_element_3 + matrix_element_7 * matrix_element_6;
  
  matrix_element_7 = *(float *)(transformation_base + 0x158);
  
  // 第四行变换计算（包含平移）
  transformed_x_4 = param_3 * x_component_2 + matrix_element_8 * matrix_element_1 + matrix_element_7 * matrix_element_4 + matrix_pointer[0xc];
  transformed_y_4 = param_3 * y_component_2 + matrix_element_8 * matrix_element_2 + matrix_element_7 * matrix_element_5 + matrix_pointer[0xd];
  transformed_z_4 = param_3 * z_component_2 + matrix_element_8 * matrix_element_3 + matrix_element_7 * matrix_element_6 + matrix_pointer[0xe];
  
  // 设置栈参数
  stack_param_1 = input_param_2;
  stack_param_5 = 0x3f800000;  // 1.0f
  stack_param_4 = 0;
  stack_param_3 = 0;
  stack_param_2 = 0;
  
  // 调用渲染函数
  FUN_180252ca0(0x3f800000, matrix_element_7 * matrix_element_4, matrix_flag, &transformed_x_1, input_param_1);
  return;
}



// 函数: void FUN_180078143(void)
// 功能: 初始化渲染状态，设置默认渲染参数
void FUN_180078143(void)

{
  uint64_t *render_context;
  int32_t render_flags;
  int32_t stack_param_1;
  uint64_t context_data_1;
  ulonglong context_data_2;
  uint64_t context_data_3;
  ulonglong context_data_4;
  uint64_t context_data_5;
  ulonglong context_data_6;
  int32_t render_param_1;
  int32_t render_param_2;
  int32_t render_param_3;
  int32_t render_param_4;
  int32_t input_param_1;
  int32_t input_param_2;
  
  // 从渲染上下文获取数据
  context_data_1 = *render_context;
  context_data_3 = render_context[2];
  context_data_5 = render_context[4];
  render_param_1 = *(int32_t *)(render_context + 6);
  render_param_2 = *(int32_t *)((longlong)render_context + 0x34);
  render_param_3 = *(int32_t *)(render_context + 7);
  stack_param_1 = input_param_2;
  render_param_4 = 0x3f800000;  // 1.0f
  context_data_6 = render_context[5] & 0xffffffff;
  context_data_4 = render_context[3] & 0xffffffff;
  context_data_2 = render_context[1] & 0xffffffff;
  
  // 调用渲染初始化函数
  FUN_180252ca0(0x3f800000, render_param_1, render_flags, &context_data_1, input_param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: void FUN_1800781e0(longlong param_1)
// 功能: 初始化对象状态，设置渲染标志和变换参数
void FUN_1800781e0(longlong param_1)

{
  longlong object_data;
  int32_t flag_1;
  int32_t flag_2;
  int32_t flag_3;
  char visibility_flag;
  int8_t render_mode;
  uint64_t *data_pointer;
  longlong transform_data;
  uint render_flags;
  bool is_visible;
  float determinant;
  
  transform_data = param_1;
  
  // 检查对象是否有变换数据
  if ((*(longlong *)(param_1 + 0x1c8) != 0) &&
     (object_data = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x28), object_data != 0)) {
    // 计算变换矩阵的行列式
    determinant = (*(float *)(object_data + 0x74) * *(float *)(object_data + 0x88) -
                  *(float *)(object_data + 0x78) * *(float *)(object_data + 0x84)) * *(float *)(object_data + 0x90);
    func_0x0001800773c0(determinant, (*(float *)(object_data + 0x78) * *(float *)(object_data + 0x80) -
                                     *(float *)(object_data + 0x70) * *(float *)(object_data + 0x88)) *
                                     *(float *)(object_data + 0x94) + determinant +
                                     (*(float *)(object_data + 0x70) * *(float *)(object_data + 0x84) -
                                     *(float *)(object_data + 0x74) * *(float *)(object_data + 0x80)) *
                                     *(float *)(object_data + 0x98) < 0.0);
  }
  
  // 检查对象是否有渲染数据
  if (*(longlong *)(transform_data + 0x1b8) == 0) {
LAB_1800782d4:
    is_visible = (*(byte *)(param_1 + 0xfd) & 2) != 0;
  }
  else {
    render_flags = *(uint *)(*(longlong *)(transform_data + 0x1b8) + 0x138);
    if ((render_flags & 0x20) != 0) {
      visibility_flag = '\0';
      goto LAB_1800782e0;
    }
    if ((render_flags & 0x10) == 0) goto LAB_1800782d4;
    is_visible = (*(byte *)(param_1 + 0xfd) & 2) == 0;
  }
  visibility_flag = is_visible + '\x01';
LAB_1800782e0:
  *(char *)(param_1 + 0xff) = visibility_flag;
  
  transform_data = *(longlong *)(param_1 + 0x1b8);
  render_flags = *(uint *)(transform_data + 0x138) & 0x3000;
  render_mode = 0;
  
  // 设置渲染模式
  if (render_flags == 0x1000) {
    *(int8_t *)(param_1 + 0xf7) = 1;
  }
  else {
    if (render_flags == 0x2000) {
      render_mode = 2;
    }
    *(int8_t *)(param_1 + 0xf7) = render_mode;
  }
  
  // 复制变换参数
  if ((((*(float *)(transform_data + 0x288) != 0.0) || (*(float *)(transform_data + 0x28c) != 0.0)) ||
      (*(float *)(transform_data + 0x290) != 0.0)) || (*(float *)(transform_data + 0x294) != 0.0)) {
    flag_1 = *(int32_t *)(transform_data + 0x28c);
    flag_2 = *(int32_t *)(transform_data + 0x290);
    flag_3 = *(int32_t *)(transform_data + 0x294);
    *(int32_t *)(param_1 + 0x2a8) = *(int32_t *)(transform_data + 0x288);
    *(int32_t *)(param_1 + 0x2ac) = flag_1;
    *(int32_t *)(param_1 + 0x2b0) = flag_2;
    *(int32_t *)(param_1 + 0x2b4) = flag_3;
  }
  
  if (((*(float *)(transform_data + 0x298) != 0.0) || (*(float *)(transform_data + 0x29c) != 0.0)) ||
     ((*(float *)(transform_data + 0x2a0) != 0.0 || (*(float *)(transform_data + 0x2a4) != 0.0)))) {
    flag_1 = *(int32_t *)(transform_data + 0x29c);
    flag_2 = *(int32_t *)(transform_data + 0x2a0);
    flag_3 = *(int32_t *)(transform_data + 0x2a4);
    *(int32_t *)(param_1 + 0x2b8) = *(int32_t *)(transform_data + 0x298);
    *(int32_t *)(param_1 + 700) = flag_1;
    *(int32_t *)(param_1 + 0x2c0) = flag_2;
    *(int32_t *)(param_1 + 0x2c4) = flag_3;
  }
  
  // 设置渲染状态标志
  *(int16_t *)(transform_data + 0x3c0) = 0xffff;
  FUN_180077150(param_1);
  
  // 创建对象数据结构
  if ((*(longlong *)(param_1 + 600) == 0) &&
     ((*(uint *)(*(longlong *)(param_1 + 0x1b8) + 0x388) >> 0x19 & 1) != 0)) {
    data_pointer = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18, 0x58, 8, 9);
    *(uint64_t *)((longlong)data_pointer + 0x2c) = 0xffffffffffffffff;
    *(int32_t *)(data_pointer + 9) = 0xffffffff;
    *data_pointer = 0;
    data_pointer[2] = 0;
    data_pointer[7] = 0;
    *(int32_t *)(data_pointer + 5) = 0xffffffff;
    *(int32_t *)(data_pointer + 4) = 0xffffffff;
    data_pointer[3] = 0;
    *(int32_t *)(data_pointer + 8) = 0;
    *(int32_t *)(data_pointer + 1) = 0;
    *(int8_t *)((longlong)data_pointer + 0x44) = 0;
    *(int8_t *)((longlong)data_pointer + 0x24) = 0;
    *(uint64_t **)(param_1 + 600) = data_pointer;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: void FUN_1800781f4(longlong param_1)
// 功能: 简化版本的对象状态初始化，处理渲染和变换
void FUN_1800781f4(longlong param_1)

{
  longlong object_data;
  int32_t flag_1;
  int32_t flag_2;
  int32_t flag_3;
  char visibility_flag;
  int8_t render_mode;
  longlong transform_base;
  uint64_t *data_pointer;
  uint render_flags;
  longlong object_base;
  bool is_visible;
  float determinant;
  
  // 计算变换矩阵行列式
  if ((transform_base != 0) && (object_data = *(longlong *)(transform_base + 0x28), object_data != 0)) {
    determinant = (*(float *)(object_data + 0x74) * *(float *)(object_data + 0x88) -
                  *(float *)(object_data + 0x78) * *(float *)(object_data + 0x84)) * *(float *)(object_data + 0x90);
    func_0x0001800773c0(determinant, (*(float *)(object_data + 0x78) * *(float *)(object_data + 0x80) -
                                     *(float *)(object_data + 0x70) * *(float *)(object_data + 0x88)) *
                                     *(float *)(object_data + 0x94) + determinant +
                                     (*(float *)(object_data + 0x70) * *(float *)(object_data + 0x84) -
                                     *(float *)(object_data + 0x74) * *(float *)(object_data + 0x80)) *
                                     *(float *)(object_data + 0x98) < 0.0);
  }
  
  // 检查渲染数据
  if (*(longlong *)(param_1 + 0x1b8) == 0) {
LAB_1800782d4:
    is_visible = (*(byte *)(object_base + 0xfd) & 2) != 0;
  }
  else {
    render_flags = *(uint *)(*(longlong *)(param_1 + 0x1b8) + 0x138);
    if ((render_flags & 0x20) != 0) {
      visibility_flag = '\0';
      goto LAB_1800782e0;
    }
    if ((render_flags & 0x10) == 0) goto LAB_1800782d4;
    is_visible = (*(byte *)(object_base + 0xfd) & 2) == 0;
  }
  visibility_flag = is_visible + '\x01';
LAB_1800782e0:
  *(char *)(object_base + 0xff) = visibility_flag;
  
  object_data = *(longlong *)(object_base + 0x1b8);
  render_flags = *(uint *)(object_data + 0x138) & 0x3000;
  render_mode = 0;
  
  // 设置渲染模式
  if (render_flags == 0x1000) {
    *(int8_t *)(object_base + 0xf7) = 1;
  }
  else {
    if (render_flags == 0x2000) {
      render_mode = 2;
    }
    *(int8_t *)(object_base + 0xf7) = render_mode;
  }
  
  // 复制变换参数
  if ((((*(float *)(object_data + 0x288) != 0.0) || (*(float *)(object_data + 0x28c) != 0.0)) ||
      (*(float *)(object_data + 0x290) != 0.0)) || (*(float *)(object_data + 0x294) != 0.0)) {
    flag_1 = *(int32_t *)(object_data + 0x28c);
    flag_2 = *(int32_t *)(object_data + 0x290);
    flag_3 = *(int32_t *)(object_data + 0x294);
    *(int32_t *)(object_base + 0x2a8) = *(int32_t *)(object_data + 0x288);
    *(int32_t *)(object_base + 0x2ac) = flag_1;
    *(int32_t *)(object_base + 0x2b0) = flag_2;
    *(int32_t *)(object_base + 0x2b4) = flag_3;
  }
  
  if (((*(float *)(object_data + 0x298) != 0.0) || (*(float *)(object_data + 0x29c) != 0.0)) ||
     ((*(float *)(object_data + 0x2a0) != 0.0 || (*(float *)(object_data + 0x2a4) != 0.0)))) {
    flag_1 = *(int32_t *)(object_data + 0x29c);
    flag_2 = *(int32_t *)(object_data + 0x2a0);
    flag_3 = *(int32_t *)(object_data + 0x2a4);
    *(int32_t *)(object_base + 0x2b8) = *(int32_t *)(object_data + 0x298);
    *(int32_t *)(object_base + 700) = flag_1;
    *(int32_t *)(object_base + 0x2c0) = flag_2;
    *(int32_t *)(object_base + 0x2c4) = flag_3;
  }
  
  // 设置渲染状态
  *(int16_t *)(object_data + 0x3c0) = 0xffff;
  FUN_180077150();
  
  // 创建数据结构
  if ((*(longlong *)(object_base + 600) == 0) &&
     ((*(uint *)(*(longlong *)(object_base + 0x1b8) + 0x388) >> 0x19 & 1) != 0)) {
    data_pointer = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18, 0x58, 8, 9);
    *(uint64_t *)((longlong)data_pointer + 0x2c) = 0xffffffffffffffff;
    *(int32_t *)(data_pointer + 9) = 0xffffffff;
    *data_pointer = 0;
    data_pointer[2] = 0;
    data_pointer[7] = 0;
    *(int32_t *)(data_pointer + 5) = 0xffffffff;
    *(int32_t *)(data_pointer + 4) = 0xffffffff;
    data_pointer[3] = 0;
    *(int32_t *)(data_pointer + 8) = 0;
    *(int32_t *)(data_pointer + 1) = 0;
    *(int8_t *)((longlong)data_pointer + 0x44) = 0;
    *(int8_t *)((longlong)data_pointer + 0x24) = 0;
    *(uint64_t **)(object_base + 600) = data_pointer;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: void FUN_180078239(float param_1,float param_2,float param_3,float param_4)
// 功能: 使用参数化变换进行对象状态初始化
void FUN_180078239(float param_1, float param_2, float param_3, float param_4)

{
  longlong object_data;
  int32_t flag_1;
  int32_t flag_2;
  int32_t flag_3;
  char visibility_flag;
  int8_t render_mode;
  longlong transform_base;
  uint64_t *data_pointer;
  longlong context_data;
  uint render_flags;
  longlong object_base;
  bool is_visible;
  float determinant;
  float transform_x;
  float transform_y;
  float transform_z;
  
  // 计算参数化变换的行列式
  determinant = (*(float *)(transform_base + 0x74) * param_2 - param_3 * param_4) * *(float *)(transform_base + 0x90);
  func_0x0001800773c0(determinant, (param_3 * transform_x - param_1 * param_2) * *(float *)(transform_base + 0x94)
                             + determinant +
                             (transform_y * param_4 - *(float *)(transform_base + 0x74) * transform_x) *
                             *(float *)(transform_base + 0x98) < transform_z);
  
  // 检查渲染数据
  if (*(longlong *)(context_data + 0x1b8) == 0) {
LAB_1800782d4:
    is_visible = (*(byte *)(object_base + 0xfd) & 2) != 0;
  }
  else {
    render_flags = *(uint *)(*(longlong *)(context_data + 0x1b8) + 0x138);
    if ((render_flags & 0x20) != 0) {
      visibility_flag = '\0';
      goto LAB_1800782e0;
    }
    if ((render_flags & 0x10) == 0) goto LAB_1800782d4;
    is_visible = (*(byte *)(object_base + 0xfd) & 2) == 0;
  }
  visibility_flag = is_visible + '\x01';
LAB_1800782e0:
  *(char *)(object_base + 0xff) = visibility_flag;
  
  object_data = *(longlong *)(object_base + 0x1b8);
  render_flags = *(uint *)(object_data + 0x138) & 0x3000;
  render_mode = 0;
  
  // 设置渲染模式
  if (render_flags == 0x1000) {
    *(int8_t *)(object_base + 0xf7) = 1;
  }
  else {
    if (render_flags == 0x2000) {
      render_mode = 2;
    }
    *(int8_t *)(object_base + 0xf7) = render_mode;
  }
  
  // 复制非零变换参数
  if (((transform_z != *(float *)(object_data + 0x288)) || (transform_z != *(float *)(object_data + 0x28c))) ||
      (transform_z != *(float *)(object_data + 0x290))) || (transform_z != *(float *)(object_data + 0x294))) {
    flag_1 = *(int32_t *)(object_data + 0x28c);
    flag_2 = *(int32_t *)(object_data + 0x290);
    flag_3 = *(int32_t *)(object_data + 0x294);
    *(int32_t *)(object_base + 0x2a8) = *(int32_t *)(object_data + 0x288);
    *(int32_t *)(object_base + 0x2ac) = flag_1;
    *(int32_t *)(object_base + 0x2b0) = flag_2;
    *(int32_t *)(object_base + 0x2b4) = flag_3;
  }
  
  if (((transform_z != *(float *)(object_data + 0x298)) || (transform_z != *(float *)(object_data + 0x29c))) ||
     ((transform_z != *(float *)(object_data + 0x2a0) || (transform_z != *(float *)(object_data + 0x2a4))))) {
    flag_1 = *(int32_t *)(object_data + 0x29c);
    flag_2 = *(int32_t *)(object_data + 0x2a0);
    flag_3 = *(int32_t *)(object_data + 0x2a4);
    *(int32_t *)(object_base + 0x2b8) = *(int32_t *)(object_data + 0x298);
    *(int32_t *)(object_base + 700) = flag_1;
    *(int32_t *)(object_base + 0x2c0) = flag_2;
    *(int32_t *)(object_base + 0x2c4) = flag_3;
  }
  
  // 设置渲染状态
  *(int16_t *)(object_data + 0x3c0) = 0xffff;
  FUN_180077150();
  
  // 创建数据结构
  if ((*(longlong *)(object_base + 600) == 0) &&
     ((*(uint *)(*(longlong *)(object_base + 0x1b8) + 0x388) >> 0x19 & 1) != 0)) {
    data_pointer = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18, 0x58, 8, 9);
    *(uint64_t *)((longlong)data_pointer + 0x2c) = 0xffffffffffffffff;
    *(int32_t *)(data_pointer + 9) = 0xffffffff;
    *data_pointer = 0;
    data_pointer[2] = 0;
    data_pointer[7] = 0;
    *(int32_t *)(data_pointer + 5) = 0xffffffff;
    *(int32_t *)(data_pointer + 4) = 0xffffffff;
    data_pointer[3] = 0;
    *(int32_t *)(data_pointer + 8) = 0;
    *(int32_t *)(data_pointer + 1) = 0;
    *(int8_t *)((longlong)data_pointer + 0x44) = 0;
    *(int8_t *)((longlong)data_pointer + 0x24) = 0;
    *(uint64_t **)(object_base + 600) = data_pointer;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: void FUN_1800782a8(longlong param_1)
// 功能: 最简化版本的对象状态初始化
void FUN_1800782a8(longlong param_1)

{
  longlong object_data;
  int32_t flag_1;
  int32_t flag_2;
  int32_t flag_3;
  char visibility_flag;
  int8_t render_mode;
  uint64_t *data_pointer;
  uint render_flags;
  longlong object_base;
  bool is_visible;
  float zero_threshold;
  
  // 检查渲染数据
  if (*(longlong *)(param_1 + 0x1b8) == 0) {
LAB_1800782d4:
    is_visible = (*(byte *)(object_base + 0xfd) & 2) != 0;
  }
  else {
    render_flags = *(uint *)(*(longlong *)(param_1 + 0x1b8) + 0x138);
    if ((render_flags & 0x20) != 0) {
      visibility_flag = '\0';
      goto LAB_1800782e0;
    }
    if ((render_flags & 0x10) == 0) goto LAB_1800782d4;
    is_visible = (*(byte *)(object_base + 0xfd) & 2) == 0;
  }
  visibility_flag = is_visible + '\x01';
LAB_1800782e0:
  *(char *)(object_base + 0xff) = visibility_flag;
  
  object_data = *(longlong *)(object_base + 0x1b8);
  render_flags = *(uint *)(object_data + 0x138) & 0x3000;
  render_mode = 0;
  
  // 设置渲染模式
  if (render_flags == 0x1000) {
    *(int8_t *)(object_base + 0xf7) = 1;
  }
  else {
    if (render_flags == 0x2000) {
      render_mode = 2;
    }
    *(int8_t *)(object_base + 0xf7) = render_mode;
  }
  
  // 复制非零变换参数
  if (((zero_threshold != *(float *)(object_data + 0x288)) || (zero_threshold != *(float *)(object_data + 0x28c))) ||
      (zero_threshold != *(float *)(object_data + 0x290))) || (zero_threshold != *(float *)(object_data + 0x294))) {
    flag_1 = *(int32_t *)(object_data + 0x28c);
    flag_2 = *(int32_t *)(object_data + 0x290);
    flag_3 = *(int32_t *)(object_data + 0x294);
    *(int32_t *)(object_base + 0x2a8) = *(int32_t *)(object_data + 0x288);
    *(int32_t *)(object_base + 0x2ac) = flag_1;
    *(int32_t *)(object_base + 0x2b0) = flag_2;
    *(int32_t *)(object_base + 0x2b4) = flag_3;
  }
  
  if (((zero_threshold != *(float *)(object_data + 0x298)) || (zero_threshold != *(float *)(object_data + 0x29c))) ||
     ((zero_threshold != *(float *)(object_data + 0x2a0) || (zero_threshold != *(float *)(object_data + 0x2a4))))) {
    flag_1 = *(int32_t *)(object_data + 0x29c);
    flag_2 = *(int32_t *)(object_data + 0x2a0);
    flag_3 = *(int32_t *)(object_data + 0x2a4);
    *(int32_t *)(object_base + 0x2b8) = *(int32_t *)(object_data + 0x298);
    *(int32_t *)(object_base + 700) = flag_1;
    *(int32_t *)(object_base + 0x2c0) = flag_2;
    *(int32_t *)(object_base + 0x2c4) = flag_3;
  }
  
  // 设置渲染状态
  *(int16_t *)(object_data + 0x3c0) = 0xffff;
  FUN_180077150();
  
  // 创建数据结构
  if ((*(longlong *)(object_base + 600) == 0) &&
     ((*(uint *)(*(longlong *)(object_base + 0x1b8) + 0x388) >> 0x19 & 1) != 0)) {
    data_pointer = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18, 0x58, 8, 9);
    *(uint64_t *)((longlong)data_pointer + 0x2c) = 0xffffffffffffffff;
    *(int32_t *)(data_pointer + 9) = 0xffffffff;
    *data_pointer = 0;
    data_pointer[2] = 0;
    data_pointer[7] = 0;
    *(int32_t *)(data_pointer + 5) = 0xffffffff;
    *(int32_t *)(data_pointer + 4) = 0xffffffff;
    data_pointer[3] = 0;
    *(int32_t *)(data_pointer + 8) = 0;
    *(int32_t *)(data_pointer + 1) = 0;
    *(int8_t *)((longlong)data_pointer + 0x44) = 0;
    *(int8_t *)((longlong)data_pointer + 0x24) = 0;
    *(uint64_t **)(object_base + 600) = data_pointer;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: void FUN_1800783b0(void)
// 功能: 创建和初始化对象数据结构
void FUN_1800783b0(void)

{
  uint64_t *data_pointer;
  longlong object_base;
  uint64_t context_data;
  
  // 检查是否需要创建数据结构
  if ((*(uint *)(*(longlong *)(object_base + 0x1b8) + 0x388) >> 0x19 & 1) != 0) {
    data_pointer = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18, 0x58, 8, 9);
    *(uint64_t *)((longlong)data_pointer + 0x2c) = 0xffffffffffffffff;
    *(int32_t *)(data_pointer + 9) = 0xffffffff;
    *data_pointer = context_data;
    data_pointer[2] = context_data;
    data_pointer[7] = context_data;
    *(int32_t *)(data_pointer + 5) = 0xffffffff;
    *(int32_t *)(data_pointer + 4) = 0xffffffff;
    data_pointer[3] = context_data;
    *(int *)(data_pointer + 8) = (int)context_data;
    *(int *)(data_pointer + 1) = (int)context_data;
    *(char *)((longlong)data_pointer + 0x44) = (char)context_data;
    *(char *)((longlong)data_pointer + 0x24) = (char)context_data;
    *(uint64_t **)(object_base + 600) = data_pointer;
  }
  return;
}



uint64_t * FUN_1800784e0(uint64_t *param_1, ulonglong param_2)

{
  uint64_t memory_flag;
  
  memory_flag = 0xfffffffffffffffe;
  *param_1 = &unknown_var_7192_ptr;
  FUN_180078550();
  FUN_1808fc8a8(param_1 + 1, 8, 7, FUN_180045af0, memory_flag);
  if ((param_2 & 1) != 0) {
    free(param_1, 0x158);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: void FUN_180078550(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
// 功能: 初始化渲染上下文和参数
void FUN_180078550(uint64_t *param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  longlong *callback_pointer;
  longlong *context_data;
  longlong loop_counter;
  int32_t render_param;
  uint64_t init_flag;
  
  init_flag = 0xfffffffffffffffe;
  
  // 如果有初始化数据，复制到参数
  if (0 < *(int *)(_DAT_180c8aa00 + 0x40)) {
    param_1[0x26] = *(uint64_t *)(_DAT_180c8aa00 + 0x38);
  }
  
  // 执行回调函数清理
  context_data = param_1 + 1;
  loop_counter = 7;
  do {
    callback_pointer = (longlong *)*context_data;
    *context_data = 0;
    if (callback_pointer != (longlong *)0x0) {
      (**(code **)(*callback_pointer + 0x38))();
    }
    context_data = context_data + 1;
    loop_counter = loop_counter + -1;
  } while (loop_counter != 0);
  
  // 初始化渲染参数
  param_1[0x20] = 0x3f8000003f800000;
  param_1[0x21] = 0x3f8000003f800000;
  param_1[0x22] = 0;
  *(int32_t *)(param_1 + 0x23) = 0;
  *(int32_t *)((longlong)param_1 + 0x11c) = 0x3f800000;
  param_1[0x24] = 0x3f800000;
  *(int32_t *)(param_1 + 0x25) = 0;
  *(uint64_t *)((longlong)param_1 + 0x13c) = 0;
  *(int32_t *)((longlong)param_1 + 0x144) = 0;
  *(int32_t *)(param_1 + 0x29) = 0x3f800000;
  *(int32_t *)((longlong)param_1 + 0x14c) = 0x3f800000;
  *(int16_t *)(param_1 + 0x2a) = 0;
  *(int8_t *)((longlong)param_1 + 0x152) = 1;
  *(int32_t *)(param_1 + 0x27) = 0;
  param_1[8] = 0x3f800000;
  param_1[9] = 0;
  param_1[10] = 0x3f80000000000000;
  param_1[0xb] = 0;
  *(int32_t *)(param_1 + 0xc) = 0;
  *(int32_t *)((longlong)param_1 + 100) = 0;
  *(int32_t *)(param_1 + 0xd) = 0x3f800000;
  *(int32_t *)((longlong)param_1 + 0x6c) = 0;
  *(int32_t *)(param_1 + 0xe) = 0;
  *(int32_t *)((longlong)param_1 + 0x74) = 0;
  *(int32_t *)(param_1 + 0xf) = 0;
  *(int32_t *)((longlong)param_1 + 0x7c) = 0x3f800000;
  
  // 根据上下文类型进行不同的初始化
  if ((void *)*param_1 == &unknown_var_7192_ptr) {
    param_1[0x10] = param_1[8];
    param_1[0x11] = param_1[9];
    param_1[0x12] = param_1[10];
    param_1[0x13] = param_1[0xb];
    *(int32_t *)(param_1 + 0x14) = *(int32_t *)(param_1 + 0xc);
    *(int32_t *)((longlong)param_1 + 0xa4) = *(int32_t *)((longlong)param_1 + 100);
    *(int32_t *)(param_1 + 0x15) = *(int32_t *)(param_1 + 0xd);
    *(int32_t *)((longlong)param_1 + 0xac) = *(int32_t *)((longlong)param_1 + 0x6c);
    *(int32_t *)(param_1 + 0x16) = *(int32_t *)(param_1 + 0xe);
    *(int32_t *)((longlong)param_1 + 0xb4) = *(int32_t *)((longlong)param_1 + 0x74);
    *(int32_t *)(param_1 + 0x17) = *(int32_t *)(param_1 + 0xf);
    *(int32_t *)((longlong)param_1 + 0xbc) = *(int32_t *)((longlong)param_1 + 0x7c);
    render_param = FUN_180084ae0();
    *(int32_t *)((longlong)param_1 + 0x8c) = 0;
    *(int32_t *)((longlong)param_1 + 0x9c) = 0;
    *(int32_t *)((longlong)param_1 + 0xac) = 0;
    *(int32_t *)((longlong)param_1 + 0xbc) = 0x3f800000;
    FUN_180084760(render_param, param_1 + 0x18);
  }
  else {
    (**(code **)((void *)*param_1 + 0x10))(param_1, 0, param_3, param_4, init_flag);
  }
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address