#include "TaleWorlds.Native.Split.h"

// 01_initialization_part050.c - 初始化模块第50部分
// 本文件包含5个函数，主要处理渲染状态初始化和变换矩阵计算

// 函数: 初始化渲染状态并处理变换矩阵
// 参数: 通过寄存器和堆栈传递多个参数
// 功能: 初始化渲染系统的状态，计算变换矩阵，并更新相关状态标志
void initialize_render_state_and_transform_matrix(void)

{
  // 声明所有变量 - 包括矩阵元素、变换参数和渲染状态
  // 矩阵计算相关变量
  float transform_x1;
  float transform_y1;
  float transform_z1;
  float transform_x2;
  float transform_y2;
  int state_flag;
  int32_t texture_id_1;
  int32_t texture_id_2;
  float matrix_element_1;
  float matrix_element_2;
  float matrix_element_3;
  float matrix_element_4;
  float matrix_element_5;
  float matrix_element_6;
  float matrix_element_7;
  float matrix_element_8;
  float matrix_element_9;
  float matrix_element_10;
  float matrix_element_11;
  float matrix_element_12;
  float matrix_element_13;
  float matrix_element_14;
  float matrix_element_15;
  float matrix_element_16;
  uint64_t transform_matrix_1;
  uint64_t transform_matrix_2;
  uint64_t transform_matrix_3;
  uint64_t transform_matrix_4;
  uint64_t transform_matrix_5;
  uint64_t transform_matrix_6;
  uint64_t transform_matrix_7;
  uint64_t transform_matrix_8;
  longlong render_context;
  byte status_byte;
  byte mode_byte;
  int32_t render_flag;
  longlong context_ptr;
  int32_t *texture_ptr;
  longlong engine_base;
  float *matrix_ptr;
  int32_t render_param_1;
  longlong render_param_2;
  uint64_t render_param_3;
  uint64_t render_param_4;
  uint64_t render_param_5;
  uint64_t render_param_6;
  uint64_t render_param_7;
  uint64_t render_param_8;
  uint64_t render_param_9;
  uint64_t *render_param_3_ptr;
  // 渲染参数和矩阵计算相关变量
  float stack_matrix_1;
  float stack_matrix_2;
  float stack_matrix_3;
  float stack_matrix_4;
  float stack_matrix_5;
  float stack_matrix_6;
  float stack_matrix_7;
  float stack_matrix_8;
  float stack_matrix_9;
  float stack_matrix_10;
  float stack_matrix_11;
  float stack_matrix_12;
  float stack_matrix_13;
  float stack_matrix_14;
  float stack_matrix_15;
  float stack_matrix_16;
  int32_t stack_param_1;
  int32_t stack_param_2;
  int32_t stack_param_3;
  int32_t stack_param_4;
  int32_t stack_param_5;
  int32_t stack_param_6;
  int32_t stack_param_7;
  int32_t stack_param_8;
  int32_t stack_param_9;
  longlong stack_param_10;
  float *stack_param_11;
  uint64_t stack_param_12;
  longlong stack_param_13;
  
  // 初始化变量
  engine_base = stack_param_10;
  render_context = *(longlong *)(engine_base + 0x1b8);
  status_byte = *(byte *)(render_context + 0x38c);
  context_ptr = engine_base;
  if (status_byte == 9) {
    status_byte = get_next_render_mode();
    *(byte *)(render_context + 0x38c) = status_byte;
  }
  context_ptr = *(longlong *)(context_ptr + 0x1e0);
  // 设置渲染参数指针
  render_param_3_ptr = &render_param_3;
  *render_param_3_ptr = *(uint64_t *)(context_ptr + (ulonglong)status_byte * 0x18);
  render_param_3_ptr[1] = *(uint64_t *)(context_ptr + 8 + (ulonglong)status_byte * 0x18);
  *(int32_t *)(render_param_2 + 0x10) = *(int32_t *)(*(longlong *)(engine_base + 600) + 0x2c);
  *(int32_t *)(render_param_2 + 0x14) = *(int32_t *)(*(longlong *)(engine_base + 600) + 0x4c);
  *(int *)(render_param_2 + 0x48) = (int)*(char *)(*(longlong *)(engine_base + 600) + 0x44);
  if ((*(longlong *)(engine_base + 0x2d0) == 0) ||
     (*(int *)(*(longlong *)(engine_base + 0x2d0) + 0x14) == 0)) {
    render_flag = 0xffffffff;
  }
  else {
    render_flag = *(int32_t *)(engine_base + 0x108);
  }
  *(int32_t *)(render_param_2 + 0x18) = render_flag;
  if ((*(longlong *)(engine_base + 0x2d0) == 0) ||
     (*(int *)(*(longlong *)(engine_base + 0x2d0) + 0x14) == 0)) {
    render_flag = 0xffffffff;
  }
  else {
    render_flag = *(int32_t *)(engine_base + 0x10c);
  }
  *(int32_t *)(render_param_2 + 0x1c) = render_flag;
  if ((*(longlong *)(engine_base + 0x2d0) == 0) ||
     (*(int *)(*(longlong *)(engine_base + 0x2d0) + 0x14) == 0)) {
    render_flag = 0xffffffff;
  }
  else {
    render_flag = *(int32_t *)(engine_base + 0x110);
  }
  *(int32_t *)(render_param_2 + 0x20) = render_flag;
  *(byte *)(render_param_2 + 0x4e) = *(byte *)(engine_base + 0xfe) >> 3 & 1;
  if (*(int *)(engine_base + 0x108) != -1) {
    texture_ptr = *(int32_t **)(engine_base + 0x2d0);
    render_flag = texture_ptr[1];
    texture_id_1 = texture_ptr[2];
    texture_id_2 = texture_ptr[3];
    *(int32_t *)(render_param_2 + 0x28) = *texture_ptr;
    *(int32_t *)(render_param_2 + 0x2c) = render_flag;
    *(int32_t *)(render_param_2 + 0x30) = texture_id_1;
    *(int32_t *)(render_param_2 + 0x34) = texture_id_2;
    transform_matrix_1 = *(uint64_t *)(texture_ptr + 6);
    *(uint64_t *)(render_param_2 + 0x38) = *(uint64_t *)(texture_ptr + 4);
    *(uint64_t *)(render_param_2 + 0x40) = transform_matrix_1;
  }
  *(int8_t *)(render_param_2 + 0x4f) = *(int8_t *)(*(longlong *)(engine_base + 600) + 0x24);
  context_ptr = *(longlong *)(engine_base + 600);
  if (*(char *)(context_ptr + 0x24) != '\0') {
    render_flag = *(int32_t *)(engine_base + 0x2ac);
    texture_id_1 = *(int32_t *)(engine_base + 0x2b0);
    texture_id_2 = *(int32_t *)(engine_base + 0x2b4);
    *(int32_t *)(render_param_2 + 0x50) = *(int32_t *)(engine_base + 0x2a8);
    *(int32_t *)(render_param_2 + 0x54) = render_flag;
    *(int32_t *)(render_param_2 + 0x58) = texture_id_1;
    *(int32_t *)(render_param_2 + 0x5c) = texture_id_2;
    context_ptr = *(longlong *)(engine_base + 600);
  }
  *(bool *)(render_param_2 + 0x4c) = *(longlong *)(context_ptr + 0x10) != 0;
  *(int8_t *)(render_param_2 + 0x4d) = 1;
  if ((*(char *)(stack_param_13 + 0xc) != '\0') ||
     (0 < *(int *)(*(longlong *)(engine_base + 600) + 0x1c))) {
    *(int8_t *)(render_param_2 + 0x4d) = 0;
  }
  if (*(longlong *)(stack_param_10 + 0x28) == 0) {
    render_param_1 = 0xffffffff;
    texture_ptr = &stack_param_1;
    context_ptr = stack_param_10;
  }
  else {
    stack_param_9 = 0xffffffff;
    texture_ptr = &stack_param_9;
    context_ptr = *(longlong *)(stack_param_10 + 0x28);
  }
  // 设置渲染参数
  render_param_2 = stack_param_2;
  setup_render_parameters(context_ptr + 0x3388, texture_ptr, &stack_param_2);
  // 获取矩阵指针并检查是否需要进行矩阵计算
  matrix_ptr = stack_param_11;
  if ((*(uint *)(engine_base + 0x100) & 0x4000000) != 0) {
    matrix_element_1 = *stack_param_11;
    matrix_element_2 = stack_param_11[1];
    matrix_element_3 = stack_param_11[2];
    matrix_element_4 = stack_param_11[3];
    matrix_element_5 = stack_param_11[4];
    matrix_element_6 = stack_param_11[5];
    matrix_element_7 = stack_param_11[6];
    matrix_element_8 = stack_param_11[7];
    matrix_element_9 = stack_param_11[8];
    matrix_element_10 = stack_param_11[9];
    matrix_element_11 = stack_param_11[10];
    matrix_element_12 = stack_param_11[0xb];
    transform_x1 = *(float *)(engine_base + 0x124);
    transform_y1 = *(float *)(engine_base + 0x120);
    transform_z1 = *(float *)(engine_base + 0x128);
    transform_x2 = *(float *)(engine_base + 0x134);
    transform_y2 = *(float *)(engine_base + 0x130);
    stack_matrix_1 = transform_x1 * matrix_element_5 + transform_y1 * matrix_element_1 + transform_z1 * matrix_element_9;
    stack_matrix_2 = transform_x1 * matrix_element_6 + transform_y1 * matrix_element_2 + transform_z1 * matrix_element_10;
    stack_matrix_3 = transform_x1 * matrix_element_7 + transform_y1 * matrix_element_3 + transform_z1 * matrix_element_11;
    stack_matrix_4 = transform_x1 * matrix_element_8 + transform_y1 * matrix_element_4 + transform_z1 * matrix_element_12;
    transform_x1 = *(float *)(engine_base + 0x138);
    transform_y1 = *(float *)(engine_base + 0x140);
    transform_z1 = *(float *)(engine_base + 0x144);
    stack_matrix_5 = transform_x2 * matrix_element_5 + transform_y2 * matrix_element_1 + transform_x1 * matrix_element_9;
    stack_matrix_6 = transform_x2 * matrix_element_6 + transform_y2 * matrix_element_2 + transform_x1 * matrix_element_10;
    stack_matrix_7 = transform_x2 * matrix_element_7 + transform_y2 * matrix_element_3 + transform_x1 * matrix_element_11;
    stack_matrix_8 = transform_x2 * matrix_element_8 + transform_y2 * matrix_element_4 + transform_x1 * matrix_element_12;
    transform_x1 = *(float *)(engine_base + 0x148);
    transform_x2 = *(float *)(engine_base + 0x154);
    transform_y2 = *(float *)(engine_base + 0x150);
    stack_matrix_9 = transform_z1 * matrix_element_5 + transform_y1 * matrix_element_1 + transform_x1 * matrix_element_9;
    stack_matrix_10 = transform_z1 * matrix_element_6 + transform_y1 * matrix_element_2 + transform_x1 * matrix_element_10;
    stack_matrix_11 = transform_z1 * matrix_element_7 + transform_y1 * matrix_element_3 + transform_x1 * matrix_element_11;
    stack_matrix_12 = transform_z1 * matrix_element_8 + transform_y1 * matrix_element_4 + transform_x1 * matrix_element_12;
    transform_x1 = *(float *)(engine_base + 0x158);
    stack_matrix_13 =
         transform_x2 * matrix_element_5 + transform_y2 * matrix_element_1 + transform_x1 * matrix_element_9 + stack_param_11[0xc];
    stack_matrix_14 =
         transform_x2 * matrix_element_6 + transform_y2 * matrix_element_2 + transform_x1 * matrix_element_10 + stack_param_11[0xd];
    stack_matrix_15 =
         transform_x2 * matrix_element_7 + transform_y2 * matrix_element_3 + transform_x1 * matrix_element_11 + stack_param_11[0xe];
    stack_matrix_16 =
         transform_x2 * matrix_element_8 + transform_y2 * matrix_element_4 + transform_x1 * matrix_element_12 + stack_param_11[0xf];
    matrix_ptr = &stack_matrix_1;
  }
  // 应用渲染变换
  // 应用渲染变换
  apply_render_transform(&stack_param_3, render_context + 0x30, *(int8_t *)(engine_base + 0xf7), matrix_ptr);
  
  // 保存渲染参数用于后续恢复
  transform_matrix_8 = render_param_9;
  transform_matrix_7 = render_param_8;
  transform_matrix_6 = render_param_7;
  transform_matrix_5 = render_param_6;
  transform_matrix_4 = render_param_5;
  transform_matrix_3 = render_param_4;
  transform_matrix_2 = render_param_3;
  transform_matrix_1 = render_param_2;
  
  // 获取渲染模式和状态标志
  mode_byte = *(byte *)(render_context + 0x1bd8);
  state_flag = *(int *)(GLOBAL_RENDER_STATE + 0x224);
  if (((*(byte *)(engine_base + 0xfd) & 1) == 0) &&
     ((*(int *)(engine_base + 0x1d0) == state_flag || (*(int *)(engine_base + 0x1d0) == state_flag + -1)))) {
    status_byte = 0;
  }
  else {
    status_byte = 1;
  }
  *(byte *)(engine_base + 0xfd) = *(byte *)(engine_base + 0xfd) & 0xfe | status_byte;
  mode_byte = mode_byte & 0x20;
  if ((mode_byte != 0) && (status_byte != 0)) {
    *(uint64_t *)(engine_base + 0x160) = render_param_2;
    *(uint64_t *)(engine_base + 0x168) = render_param_3;
    *(uint64_t *)(engine_base + 0x170) = render_param_4;
    *(uint64_t *)(engine_base + 0x178) = render_param_5;
    *(uint64_t *)(engine_base + 0x180) = render_param_6;
    *(uint64_t *)(engine_base + 0x188) = render_param_7;
    *(uint64_t *)(engine_base + 400) = render_param_8;
    *(uint64_t *)(engine_base + 0x198) = render_param_9;
  }
  finalize_render_operation(render_context);
  *(byte *)(engine_base + 0xfd) = *(byte *)(engine_base + 0xfd) & 0xfe;
  *(int *)(engine_base + 0x1d0) = state_flag;
  if (mode_byte != 0) {
    *(uint64_t *)(engine_base + 0x160) = transform_matrix_1;
    *(uint64_t *)(engine_base + 0x168) = transform_matrix_2;
    *(uint64_t *)(engine_base + 0x170) = transform_matrix_3;
    *(uint64_t *)(engine_base + 0x178) = transform_matrix_4;
    *(uint64_t *)(engine_base + 0x180) = transform_matrix_5;
    *(uint64_t *)(engine_base + 0x188) = transform_matrix_6;
    *(uint64_t *)(engine_base + 400) = transform_matrix_7;
    *(uint64_t *)(engine_base + 0x198) = transform_matrix_8;
  }
  return;
}

// 函数: 处理条件渲染状态和变换矩阵
// 参数: 通过寄存器和堆栈传递多个参数
// 功能: 根据条件标志处理渲染状态，计算变换矩阵
void process_conditional_render_state(void)

{
  float transform_x1;
  float transform_y1;
  float transform_z1;
  float transform_x2;
  float transform_y2;
  int state_flag;
  float matrix_element_1;
  float matrix_element_2;
  float matrix_element_3;
  float matrix_element_4;
  float matrix_element_5;
  float matrix_element_6;
  float matrix_element_7;
  float matrix_element_8;
  float matrix_element_9;
  float matrix_element_10;
  float matrix_element_11;
  float matrix_element_12;
  float matrix_element_13;
  float matrix_element_14;
  float matrix_element_15;
  float matrix_element_16;
  float matrix_element_17;
  float matrix_element_18;
  uint64_t transform_matrix_1;
  uint64_t transform_matrix_2;
  uint64_t transform_matrix_3;
  uint64_t transform_matrix_4;
  uint64_t transform_matrix_5;
  uint64_t transform_matrix_6;
  uint64_t transform_matrix_7;
  uint64_t transform_matrix_8;
  byte status_byte;
  longlong engine_base;
  byte mode_byte;
  float *matrix_ptr;
  longlong render_context;
  bool condition_flag;
  uint64_t render_param_1;
  uint64_t render_param_2;
  uint64_t render_param_3;
  uint64_t render_param_4;
  uint64_t render_param_5;
  uint64_t render_param_6;
  uint64_t render_param_7;
  uint64_t render_param_8;
  uint64_t render_param_9;
  float stack_matrix_1;
  float stack_matrix_2;
  float stack_matrix_3;
  float stack_matrix_4;
  float stack_matrix_5;
  float stack_matrix_6;
  float stack_matrix_7;
  float stack_matrix_8;
  float stack_matrix_9;
  float stack_matrix_10;
  float stack_matrix_11;
  float stack_matrix_12;
  float stack_matrix_13;
  float stack_matrix_14;
  float stack_matrix_15;
  float stack_matrix_16;
  
  // 初始化变量
  engine_base = stack_param_10;
  condition_flag = *(byte *)(engine_base + 0x108) != 0xff;
  matrix_ptr = stack_param_11;
  render_context = *(longlong *)(engine_base + 0x1b8);
  
  // 根据条件标志处理矩阵计算
  if (!condition_flag) {
    matrix_element_1 = *matrix_ptr;
    matrix_element_2 = matrix_ptr[1];
    matrix_element_3 = matrix_ptr[2];
    matrix_element_4 = matrix_ptr[3];
    matrix_element_5 = matrix_ptr[4];
    matrix_element_6 = matrix_ptr[5];
    matrix_element_7 = matrix_ptr[6];
    matrix_element_8 = matrix_ptr[7];
    matrix_element_9 = matrix_ptr[8];
    matrix_element_10 = matrix_ptr[9];
    matrix_element_11 = matrix_ptr[10];
    matrix_element_12 = matrix_ptr[0xb];
    transform_x1 = *(float *)(engine_base + 0x124);
    transform_y1 = *(float *)(engine_base + 0x120);
    transform_z1 = *(float *)(engine_base + 0x128);
    transform_x2 = *(float *)(engine_base + 0x134);
    transform_y2 = *(float *)(engine_base + 0x130);
    stack_matrix_1 = transform_x1 * matrix_element_5 + transform_y1 * matrix_element_1 + transform_z1 * matrix_element_9;
    stack_matrix_2 = transform_x1 * matrix_element_6 + transform_y1 * matrix_element_2 + transform_z1 * matrix_element_10;
    stack_matrix_3 = transform_x1 * matrix_element_7 + transform_y1 * matrix_element_3 + transform_z1 * matrix_element_11;
    stack_matrix_4 = transform_x1 * matrix_element_8 + transform_y1 * matrix_element_4 + transform_z1 * matrix_element_12;
    transform_x1 = *(float *)(engine_base + 0x138);
    transform_y1 = *(float *)(engine_base + 0x140);
    transform_z1 = *(float *)(engine_base + 0x144);
    stack_matrix_5 = transform_x2 * matrix_element_5 + transform_y2 * matrix_element_1 + transform_x1 * matrix_element_9;
    stack_matrix_6 = transform_x2 * matrix_element_6 + transform_y2 * matrix_element_2 + transform_x1 * matrix_element_10;
    stack_matrix_7 = transform_x2 * matrix_element_7 + transform_y2 * matrix_element_3 + transform_x1 * matrix_element_11;
    stack_matrix_8 = transform_x2 * matrix_element_8 + transform_y2 * matrix_element_4 + transform_x1 * matrix_element_12;
    transform_x1 = *(float *)(engine_base + 0x148);
    transform_x2 = *(float *)(engine_base + 0x154);
    transform_y2 = *(float *)(engine_base + 0x150);
    stack_matrix_9 = transform_z1 * matrix_element_5 + transform_y1 * matrix_element_1 + transform_x1 * matrix_element_9;
    stack_matrix_10 = transform_z1 * matrix_element_6 + transform_y1 * matrix_element_2 + transform_x1 * matrix_element_10;
    stack_matrix_11 = transform_z1 * matrix_element_7 + transform_y1 * matrix_element_3 + transform_x1 * matrix_element_11;
    stack_matrix_12 = transform_z1 * matrix_element_8 + transform_y1 * matrix_element_4 + transform_x1 * matrix_element_12;
    transform_x1 = *(float *)(engine_base + 0x158);
    stack_matrix_13 = transform_x2 * matrix_element_5 + transform_y2 * matrix_element_1 + transform_x1 * matrix_element_9 + matrix_ptr[0xc];
    stack_matrix_14 = transform_x2 * matrix_element_6 + transform_y2 * matrix_element_2 + transform_x1 * matrix_element_10 + matrix_ptr[0xd];
    stack_matrix_15 = transform_x2 * matrix_element_7 + transform_y2 * matrix_element_3 + transform_x1 * matrix_element_11 + matrix_ptr[0xe];
    stack_matrix_16 = transform_x2 * matrix_element_8 + transform_y2 * matrix_element_4 + transform_x1 * matrix_element_12 + matrix_ptr[0xf];
  }
  
  // 应用渲染变换
  apply_render_transform(&stack_param_1, render_context + 0x30, *(int8_t *)(engine_base + 0xf7));
  transform_matrix_8 = render_param_9;
  transform_matrix_7 = render_param_8;
  transform_matrix_6 = render_param_7;
  transform_matrix_5 = render_param_6;
  transform_matrix_4 = render_param_5;
  transform_matrix_3 = render_param_4;
  transform_matrix_2 = render_param_3;
  transform_matrix_1 = render_param_2;
  mode_byte = *(byte *)(render_context + 0x1bd8);
  state_flag = *(int *)(GLOBAL_RENDER_STATE + 0x224);
  if (((*(byte *)(engine_base + 0xfd) & 1) == 0) &&
     ((*(int *)(engine_base + 0x1d0) == state_flag || (*(int *)(engine_base + 0x1d0) == state_flag + -1)))) {
    status_byte = 0;
  }
  else {
    status_byte = 1;
  }
  *(byte *)(engine_base + 0xfd) = *(byte *)(engine_base + 0xfd) & 0xfe | status_byte;
  mode_byte = mode_byte & 0x20;
  if ((mode_byte != 0) && (status_byte != 0)) {
    *(uint64_t *)(engine_base + 0x160) = render_param_2;
    *(uint64_t *)(engine_base + 0x168) = render_param_3;
    *(uint64_t *)(engine_base + 0x170) = render_param_4;
    *(uint64_t *)(engine_base + 0x178) = render_param_5;
    *(uint64_t *)(engine_base + 0x180) = render_param_6;
    *(uint64_t *)(engine_base + 0x188) = render_param_7;
    *(uint64_t *)(engine_base + 400) = render_param_8;
    *(uint64_t *)(engine_base + 0x198) = render_param_9;
  }
  finalize_render_operation();
  *(byte *)(engine_base + 0xfd) = *(byte *)(engine_base + 0xfd) & 0xfe;
  *(int *)(engine_base + 0x1d0) = state_flag;
  if (mode_byte != 0) {
    *(uint64_t *)(engine_base + 0x160) = transform_matrix_1;
    *(uint64_t *)(engine_base + 0x168) = transform_matrix_2;
    *(uint64_t *)(engine_base + 0x170) = transform_matrix_3;
    *(uint64_t *)(engine_base + 0x178) = transform_matrix_4;
    *(uint64_t *)(engine_base + 0x180) = transform_matrix_5;
    *(uint64_t *)(engine_base + 0x188) = transform_matrix_6;
    *(uint64_t *)(engine_base + 400) = transform_matrix_7;
    *(uint64_t *)(engine_base + 0x198) = transform_matrix_8;
  }
  return;
}

// 函数: 简化版渲染状态处理
// 参数: 通过寄存器和堆栈传递多个参数
// 功能: 处理简化的渲染状态，包含矩阵计算和状态更新
void simplified_render_state_handler(void)

{
  float transform_x1;
  float transform_y1;
  float transform_z1;
  float transform_x2;
  float transform_y2;
  int state_flag;
  float matrix_element_1;
  float matrix_element_2;
  float matrix_element_3;
  float matrix_element_4;
  float matrix_element_5;
  float matrix_element_6;
  float matrix_element_7;
  float matrix_element_8;
  float matrix_element_9;
  float matrix_element_10;
  float matrix_element_11;
  float matrix_element_12;
  float matrix_element_13;
  float matrix_element_14;
  float matrix_element_15;
  float matrix_element_16;
  float matrix_element_17;
  float matrix_element_18;
  uint64_t transform_matrix_1;
  uint64_t transform_matrix_2;
  uint64_t transform_matrix_3;
  uint64_t transform_matrix_4;
  uint64_t transform_matrix_5;
  uint64_t transform_matrix_6;
  uint64_t transform_matrix_7;
  uint64_t transform_matrix_8;
  byte status_byte;
  longlong engine_base;
  byte mode_byte;
  float *matrix_ptr;
  longlong render_context;
  int32_t stack_param_1;
  uint64_t render_param_1;
  uint64_t render_param_2;
  uint64_t render_param_3;
  uint64_t render_param_4;
  uint64_t render_param_5;
  uint64_t render_param_6;
  uint64_t render_param_7;
  uint64_t render_param_8;
  uint64_t render_param_9;
  float stack_matrix_1;
  float stack_matrix_2;
  float stack_matrix_3;
  float stack_matrix_4;
  float stack_matrix_5;
  float stack_matrix_6;
  float stack_matrix_7;
  float stack_matrix_8;
  float stack_matrix_9;
  float stack_matrix_10;
  float stack_matrix_11;
  float stack_matrix_12;
  float stack_matrix_13;
  float stack_matrix_14;
  float stack_matrix_15;
  float stack_matrix_16;
  int32_t render_param_10;
  int32_t render_param_11;
  int32_t render_param_12;
  int32_t render_param_13;
  int32_t render_param_14;
  int32_t render_param_15;
  int32_t render_param_16;
  int32_t render_param_17;
  float *matrix_param;
  uint64_t transform_param;
  
  // 初始化变量
  engine_base = stack_param_10;
  render_context = *(longlong *)(engine_base + 0x1b8);
  
  // 设置渲染参数
  stack_param_1 = 0xffffffff;
  setup_render_parameters(render_context + 0x3388, &stack_param_1);
  
  // 获取矩阵参数指针
  matrix_ptr = matrix_param;
  
  // 检查是否需要矩阵计算
  if ((*(uint *)(engine_base + 0x100) & 0x4000000) != 0) {
    matrix_element_1 = *matrix_param;
    matrix_element_2 = matrix_param[1];
    matrix_element_3 = matrix_param[2];
    matrix_element_4 = matrix_param[3];
    matrix_element_5 = matrix_param[4];
    matrix_element_6 = matrix_param[5];
    matrix_element_7 = matrix_param[6];
    matrix_element_8 = matrix_param[7];
    matrix_element_9 = matrix_param[8];
    matrix_element_10 = matrix_param[9];
    matrix_element_11 = matrix_param[10];
    matrix_element_12 = matrix_param[0xb];
    transform_x1 = *(float *)(engine_base + 0x124);
    transform_y1 = *(float *)(engine_base + 0x120);
    transform_z1 = *(float *)(engine_base + 0x128);
    transform_x2 = *(float *)(engine_base + 0x134);
    transform_y2 = *(float *)(engine_base + 0x130);
    stack_matrix_1 = transform_x1 * matrix_element_5 + transform_y1 * matrix_element_1 + transform_z1 * matrix_element_9;
    stack_matrix_2 = transform_x1 * matrix_element_6 + transform_y1 * matrix_element_2 + transform_z1 * matrix_element_10;
    stack_matrix_3 = transform_x1 * matrix_element_7 + transform_y1 * matrix_element_3 + transform_z1 * matrix_element_11;
    stack_matrix_4 = transform_x1 * matrix_element_8 + transform_y1 * matrix_element_4 + transform_z1 * matrix_element_12;
    transform_x1 = *(float *)(engine_base + 0x138);
    transform_y1 = *(float *)(engine_base + 0x140);
    transform_z1 = *(float *)(engine_base + 0x144);
    stack_matrix_5 = transform_x2 * matrix_element_5 + transform_y2 * matrix_element_1 + transform_x1 * matrix_element_9;
    stack_matrix_6 = transform_x2 * matrix_element_6 + transform_y2 * matrix_element_2 + transform_x1 * matrix_element_10;
    stack_matrix_7 = transform_x2 * matrix_element_7 + transform_y2 * matrix_element_3 + transform_x1 * matrix_element_11;
    stack_matrix_8 = transform_x2 * matrix_element_8 + transform_y2 * matrix_element_4 + transform_x1 * matrix_element_12;
    transform_x1 = *(float *)(engine_base + 0x148);
    transform_x2 = *(float *)(engine_base + 0x154);
    transform_y2 = *(float *)(engine_base + 0x150);
    stack_matrix_9 = transform_z1 * matrix_element_5 + transform_y1 * matrix_element_1 + transform_x1 * matrix_element_9;
    stack_matrix_10 = transform_z1 * matrix_element_6 + transform_y1 * matrix_element_2 + transform_x1 * matrix_element_10;
    stack_matrix_11 = transform_z1 * matrix_element_7 + transform_y1 * matrix_element_3 + transform_x1 * matrix_element_11;
    stack_matrix_12 = transform_z1 * matrix_element_8 + transform_y1 * matrix_element_4 + transform_x1 * matrix_element_12;
    transform_x1 = *(float *)(engine_base + 0x158);
    stack_matrix_13 =
         transform_x2 * matrix_element_5 + transform_y2 * matrix_element_1 + transform_x1 * matrix_element_9 + matrix_param[0xc];
    stack_matrix_14 =
         transform_x2 * matrix_element_6 + transform_y2 * matrix_element_2 + transform_x1 * matrix_element_10 + matrix_param[0xd];
    stack_matrix_15 =
         transform_x2 * matrix_element_7 + transform_y2 * matrix_element_3 + transform_x1 * matrix_element_11 + matrix_param[0xe];
    stack_matrix_16 =
         transform_x2 * matrix_element_8 + transform_y2 * matrix_element_4 + transform_x1 * matrix_element_12 + matrix_param[0xf];
    matrix_ptr = &stack_matrix_1;
  }
  apply_render_transform(&stack_param_1, render_context + 0x30, *(int8_t *)(engine_base + 0xf7), matrix_ptr);
  transform_matrix_8 = render_param_9;
  transform_matrix_7 = render_param_8;
  transform_matrix_6 = render_param_7;
  transform_matrix_5 = render_param_6;
  transform_matrix_4 = render_param_5;
  transform_matrix_3 = render_param_4;
  transform_matrix_2 = render_param_3;
  transform_matrix_1 = render_param_2;
  mode_byte = *(byte *)(render_context + 0x1bd8);
  state_flag = *(int *)(GLOBAL_RENDER_STATE + 0x224);
  if (((*(byte *)(engine_base + 0xfd) & 1) == 0) &&
     ((*(int *)(engine_base + 0x1d0) == state_flag || (*(int *)(engine_base + 0x1d0) == state_flag + -1)))) {
    status_byte = 0;
  }
  else {
    status_byte = 1;
  }
  *(byte *)(engine_base + 0xfd) = *(byte *)(engine_base + 0xfd) & 0xfe | status_byte;
  mode_byte = mode_byte & 0x20;
  if ((mode_byte != 0) && (status_byte != 0)) {
    *(uint64_t *)(engine_base + 0x160) = render_param_2;
    *(uint64_t *)(engine_base + 0x168) = render_param_3;
    *(uint64_t *)(engine_base + 0x170) = render_param_4;
    *(uint64_t *)(engine_base + 0x178) = render_param_5;
    *(uint64_t *)(engine_base + 0x180) = render_param_6;
    *(uint64_t *)(engine_base + 0x188) = render_param_7;
    *(uint64_t *)(engine_base + 400) = render_param_8;
    *(uint64_t *)(engine_base + 0x198) = render_param_9;
  }
  finalize_render_operation();
  *(byte *)(engine_base + 0xfd) = *(byte *)(engine_base + 0xfd) & 0xfe;
  *(int *)(engine_base + 0x1d0) = state_flag;
  if (mode_byte != 0) {
    *(uint64_t *)(engine_base + 0x160) = transform_matrix_1;
    *(uint64_t *)(engine_base + 0x168) = transform_matrix_2;
    *(uint64_t *)(engine_base + 0x170) = transform_matrix_3;
    *(uint64_t *)(engine_base + 0x178) = transform_matrix_4;
    *(uint64_t *)(engine_base + 0x180) = transform_matrix_5;
    *(uint64_t *)(engine_base + 0x188) = transform_matrix_6;
    *(uint64_t *)(engine_base + 400) = transform_matrix_7;
    *(uint64_t *)(engine_base + 0x198) = transform_matrix_8;
  }
  return;
}

// 函数: 最简渲染状态处理
// 参数: 通过寄存器和堆栈传递多个参数
// 功能: 处理最简化的渲染状态更新，不包含矩阵计算
void minimal_render_state_handler(void)

{
  int state_flag;
  uint64_t transform_matrix_1;
  uint64_t transform_matrix_2;
  uint64_t transform_matrix_3;
  uint64_t transform_matrix_4;
  uint64_t transform_matrix_5;
  uint64_t transform_matrix_6;
  uint64_t transform_matrix_7;
  uint64_t transform_matrix_8;
  uint64_t transform_matrix_9;
  byte status_byte;
  longlong engine_base;
  byte mode_byte;
  longlong render_context;
  uint64_t render_param_1;
  uint64_t render_param_2;
  uint64_t render_param_3;
  uint64_t render_param_4;
  uint64_t render_param_5;
  uint64_t render_param_6;
  uint64_t render_param_7;
  uint64_t render_param_8;
  uint64_t render_param_9;
  
  // 初始化变量
  engine_base = stack_param_10;
  render_context = *(longlong *)(engine_base + 0x1b8);
  
  // 应用渲染变换
  apply_render_transform(&stack_param_1, render_context + 0x30, *(int8_t *)(engine_base + 0xf7));
  transform_matrix_9 = render_param_9;
  transform_matrix_8 = render_param_8;
  transform_matrix_7 = render_param_7;
  transform_matrix_6 = render_param_6;
  transform_matrix_5 = render_param_5;
  transform_matrix_4 = render_param_4;
  transform_matrix_3 = render_param_3;
  transform_matrix_2 = render_param_2;
  transform_matrix_1 = render_param_1;
  mode_byte = *(byte *)(render_context + 0x1bd8);
  state_flag = *(int *)(GLOBAL_RENDER_STATE + 0x224);
  if (((*(byte *)(engine_base + 0xfd) & 1) == 0) &&
     ((*(int *)(engine_base + 0x1d0) == state_flag || (*(int *)(engine_base + 0x1d0) == state_flag + -1)))) {
    status_byte = 0;
  }
  else {
    status_byte = 1;
  }
  *(byte *)(engine_base + 0xfd) = *(byte *)(engine_base + 0xfd) & 0xfe | status_byte;
  mode_byte = mode_byte & 0x20;
  if ((mode_byte != 0) && (status_byte != 0)) {
    *(uint64_t *)(engine_base + 0x160) = render_param_1;
    *(uint64_t *)(engine_base + 0x168) = render_param_2;
    *(uint64_t *)(engine_base + 0x170) = render_param_3;
    *(uint64_t *)(engine_base + 0x178) = render_param_4;
    *(uint64_t *)(engine_base + 0x180) = render_param_5;
    *(uint64_t *)(engine_base + 0x188) = render_param_6;
    *(uint64_t *)(engine_base + 400) = render_param_7;
    *(uint64_t *)(engine_base + 0x198) = render_param_8;
  }
  finalize_render_operation();
  *(byte *)(engine_base + 0xfd) = *(byte *)(engine_base + 0xfd) & 0xfe;
  *(int *)(engine_base + 0x1d0) = state_flag;
  if (mode_byte != 0) {
    *(uint64_t *)(engine_base + 0x160) = transform_matrix_1;
    *(uint64_t *)(engine_base + 0x168) = transform_matrix_2;
    *(uint64_t *)(engine_base + 0x170) = transform_matrix_3;
    *(uint64_t *)(engine_base + 0x178) = transform_matrix_4;
    *(uint64_t *)(engine_base + 0x180) = transform_matrix_5;
    *(uint64_t *)(engine_base + 0x188) = transform_matrix_6;
    *(uint64_t *)(engine_base + 400) = transform_matrix_7;
    *(uint64_t *)(engine_base + 0x198) = transform_matrix_8;
  }
  return;
}

// 函数: 渲染状态标志获取
// 返回值: 状态标志 (总是返回0)
// 功能: 获取渲染状态的标志位，简化实现
int8_t get_render_state_flag(void)

{
  return 0;
}

// 函数: 高级渲染处理
// 参数: engine_base - 引擎基础指针
//        render_params - 渲染参数
//        texture_id - 纹理ID
//        matrix_ptr - 矩阵指针
//        render_flags - 渲染标志
//        transform_params - 变换参数
// 返回值: 处理结果
// 功能: 执行高级渲染处理，包括状态检查、矩阵计算和渲染调用
ulonglong advanced_render_processing(longlong engine_base, uint64_t render_params, int32_t texture_id, float *matrix_ptr,
                                     int32_t render_flags, int32_t transform_params)

{
  float transform_x1;
  float transform_y1;
  float transform_z1;
  float transform_x2;
  float transform_y2;
  float transform_element_1;
  float transform_element_2;
  float transform_element_3;
  float transform_element_4;
  float transform_element_5;
  float transform_element_6;
  float transform_element_7;
  float transform_element_8;
  float transform_element_9;
  float transform_element_10;
  float transform_element_11;
  float transform_element_12;
  float transform_element_13;
  float transform_element_14;
  float transform_element_15;
  float transform_element_16;
  float transform_element_17;
  float transform_element_18;
  char render_mode;
  ulonglong result;
  longlong context_ptr;
  ulonglong render_result;
  longlong render_context;
  byte mode_flag;
  uint64_t transform_param_1;
  ulonglong transform_param_2;
  uint64_t transform_param_3;
  ulonglong transform_param_4;
  uint64_t transform_param_5;
  ulonglong transform_param_6;
  float matrix_stack_1;
  float matrix_stack_2;
  float matrix_stack_3;
  int32_t render_param_stack;
  
  render_context = *(longlong *)(engine_base + 0x1b8);
  if (render_context != 0) {
    mode_flag = *(byte *)(engine_base + 0xfd) & 0x20;
    context_ptr = engine_base;
    if (mode_flag == 0) {
      context_ptr = get_render_context_from_handle(*(uint64_t *)(engine_base + 0x1b0));
    }
    if (*(int *)(context_ptr + 0x200) != 0) {
      context_ptr = engine_base;
      if (mode_flag == 0) {
        context_ptr = get_render_context_from_handle(*(uint64_t *)(engine_base + 0x1b0));
      }
      if (*(int *)(context_ptr + 0x1fc) * 3 != 0) goto PROCESS_RENDER;
    }
    if ((*(byte *)(engine_base + 0x100) & 4) != 0) {
PROCESS_RENDER:
      render_context = *(longlong *)(engine_base + 0x1b8);
      render_mode = *(char *)(render_context + 0x38c);
      if (render_mode == '\t') {
        render_mode = get_next_render_mode();
        *(char *)(render_context + 0x38c) = render_mode;
      }
      render_mode = process_render_batch(engine_base, engine_base + 0x1e8, render_mode, 1);
      if (render_mode == '\0') {
        *(byte *)(engine_base + 0xfe) = *(byte *)(engine_base + 0xfe) & 0xfb;
      }
      if ((*(uint *)(engine_base + 0x100) & 0x4000000) == 0) {
        transform_param_1 = *(uint64_t *)matrix_ptr;
        transform_param_2._0_4_ = (float)*(uint64_t *)(matrix_ptr + 2);
        transform_param_3 = *(uint64_t *)(matrix_ptr + 4);
        transform_param_4._0_4_ = (float)*(uint64_t *)(matrix_ptr + 6);
        transform_param_5 = *(uint64_t *)(matrix_ptr + 8);
        transform_param_6._0_4_ = (float)*(uint64_t *)(matrix_ptr + 10);
        matrix_stack_1 = matrix_ptr[0xc];
        matrix_stack_2 = matrix_ptr[0xd];
        matrix_stack_3 = matrix_ptr[0xe];
      }
      else {
        transform_element_10 = matrix_ptr[4];
        transform_element_11 = matrix_ptr[5];
        transform_element_12 = matrix_ptr[6];
        transform_x1 = *(float *)(engine_base + 0x120);
        transform_y1 = *(float *)(engine_base + 0x128);
        transform_z1 = *(float *)(engine_base + 0x134);
        transform_x2 = *(float *)(engine_base + 0x144);
        transform_y2 = *(float *)(engine_base + 0x154);
        transform_element_13 = *matrix_ptr;
        transform_element_14 = matrix_ptr[1];
        transform_element_15 = matrix_ptr[2];
        transform_element_16 = matrix_ptr[8];
        transform_element_17 = matrix_ptr[9];
        transform_element_18 = matrix_ptr[10];
        transform_element_1 = *(float *)(engine_base + 0x124);
        transform_element_2 = *(float *)(engine_base + 0x130);
        transform_param_2._0_4_ = transform_element_1 * transform_element_12 + transform_x1 * transform_element_15 + transform_y1 * transform_element_18;
        transform_element_3 = *(float *)(engine_base + 0x138);
        transform_element_4 = *(float *)(engine_base + 0x140);
        transform_param_4._0_4_ = transform_z1 * transform_element_12 + transform_element_2 * transform_element_15 + transform_element_3 * transform_element_18;
        transform_param_1 = CONCAT44(transform_element_1 * transform_element_11 + transform_x1 * transform_element_14 + transform_y1 * transform_element_17,
                                    transform_element_1 * transform_element_10 + transform_x1 * transform_element_13 + transform_y1 * transform_element_16);
        transform_element_5 = *(float *)(engine_base + 0x148);
        transform_element_6 = *(float *)(engine_base + 0x150);
        transform_param_6._0_4_ = transform_x2 * transform_element_12 + transform_element_4 * transform_element_15 + transform_element_5 * transform_element_18;
        transform_element_7 = *(float *)(engine_base + 0x158);
        transform_param_3 = CONCAT44(transform_z1 * transform_element_11 + transform_element_2 * transform_element_14 + transform_element_3 * transform_element_17,
                                      transform_z1 * transform_element_10 + transform_element_2 * transform_element_13 + transform_element_3 * transform_element_16);
        transform_param_5 = CONCAT44(transform_x2 * transform_element_11 + transform_element_4 * transform_element_14 + transform_element_5 * transform_element_17,
                                      transform_x2 * transform_element_10 + transform_element_4 * transform_element_13 + transform_element_5 * transform_element_16);
        matrix_stack_1 = transform_y2 * transform_element_10 + transform_element_6 * transform_element_13 + transform_element_7 * transform_element_16 + matrix_ptr[0xc];
        matrix_stack_2 = transform_y2 * transform_element_11 + transform_element_6 * transform_element_14 + transform_element_7 * transform_element_17 + matrix_ptr[0xd];
        matrix_stack_3 = transform_y2 * transform_element_12 + transform_element_6 * transform_element_15 + transform_element_7 * transform_element_18 + matrix_ptr[0xe];
      }
      render_param_stack = 0x3f800000;
      transform_param_6 = (ulonglong)(uint)(float)transform_param_6;
      transform_param_4 = (ulonglong)(uint)(float)transform_param_4;
      transform_param_2 = (ulonglong)(uint)(float)transform_param_2;
      render_result = execute_render_operation(render_params, engine_base, texture_id, &transform_param_1, render_flags, transform_params);
      return render_result;
    }
    result = 0;
    if (*(char *)(render_context + 0x38c) == '\t') {
      result = get_next_render_mode(render_context);
      *(char *)(render_context + 0x38c) = (char)result;
      if ((char)result == '\t') goto PROCESS_RENDER;
    }
  }
  return result & 0xffffffffffffff00;
}