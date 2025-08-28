#include "TaleWorlds.Native.Split.h"

// 03_rendering_part015.c - 渲染系统矩阵变换和边界框计算模块
// 本文件包含5个函数，主要负责渲染对象的矩阵变换、边界框计算和碰撞检测等功能

/**
 * 执行渲染对象的矩阵变换和碰撞检测
 * @param render_context 渲染上下文指针
 */
void perform_render_matrix_transform_and_collision(int64_t render_context)
{
  uint *collision_flags;
  uint64_t *transform_data;
  float matrix_x, matrix_y, matrix_z, matrix_w;
  float scale_x, scale_y, scale_z, scale_w;
  float translate_x, translate_y, translate_z;
  float rotate_x, rotate_y, rotate_z, rotate_w;
  uint visibility_mask;
  int64_t bone_index;
  float bone_transform_x, bone_transform_y, bone_transform_z;
  float bone_scale_x, bone_scale_y, bone_scale_z;
  uint64_t bone_data1, bone_data2;
  int32_t bone_flags;
  int64_t object_ptr;
  float *matrix_ptr;
  int64_t render_object;
  uint64_t *transform_matrix;
  float *position_ptr;
  float *rotation_ptr;
  int64_t bone_offset;
  char bone_type;
  int64_t animation_data;
  float proj_x, proj_y, proj_z, proj_w;
  float near_x, near_y, near_z, near_w;
  float far_x, far_y, far_z, far_w;
  float depth_x, depth_y, depth_z, depth_w;
  float view_x, view_y, view_z, view_w;
  float screen_x, screen_y, screen_z, screen_w;
  float clip_x, clip_y, clip_z, clip_w;
  int32_t xmm8_data[4];
  float temp_x, temp_y, temp_z, temp_w;
  int32_t xmm9_data[4];
  int32_t xmm10_data[4];
  float stack_matrix[16];
  
  // 复制XMM8寄存器数据到栈
  *(int32_t *)(render_context + -0x58) = xmm8_data[0];
  *(int32_t *)(render_context + -0x54) = xmm8_data[1];
  *(int32_t *)(render_context + -0x50) = xmm8_data[2];
  *(int32_t *)(render_context + -0x4c) = xmm8_data[3];
  *(int32_t *)(render_context + -0x68) = xmm9_data[0];
  *(int32_t *)(render_context + -100) = xmm9_data[1];
  *(int32_t *)(render_context + -0x60) = xmm9_data[2];
  *(int32_t *)(render_context + -0x5c) = xmm9_data[3];
  *(int32_t *)(render_context + -0x78) = xmm10_data[0];
  *(int32_t *)(render_context + -0x74) = xmm10_data[1];
  *(int32_t *)(render_context + -0x70) = xmm10_data[2];
  *(int32_t *)(render_context + -0x6c) = xmm10_data[3];
  
  // 获取变换矩阵
  if (object_ptr == render_context) {
    matrix_ptr = (float *)(render_object + 0x330);
  }
  else {
    matrix_ptr = (float *)(**(code **)(object_ptr + 0x158))();
  }
  
  // 读取骨骼变换矩阵
  near_x = *(float *)(animation_data + 0x70);
  near_y = *(float *)(animation_data + 0x74);
  near_z = *(float *)(animation_data + 0x78);
  translate_x = *(float *)(animation_data + 0x7c);
  translate_y = *(float *)(animation_data + 0x80);
  translate_z = *(float *)(animation_data + 0x84);
  rotate_x = *(float *)(animation_data + 0x88);
  rotate_y = *(float *)(animation_data + 0x8c);
  rotate_z = *(float *)(animation_data + 0x90);
  rotate_w = *(float *)(animation_data + 0x94);
  scale_x = *(float *)(animation_data + 0x98);
  scale_y = *(float *)(animation_data + 0x9c);
  
  // 执行矩阵变换计算
  proj_y = matrix_ptr[1];
  proj_x = *matrix_ptr;
  proj_z = matrix_ptr[2];
  proj_w = matrix_ptr[5];
  far_x = matrix_ptr[9];
  far_y = matrix_ptr[0xd];
  far_z = matrix_ptr[4];
  depth_x = proj_y * translate_y + proj_x * near_x + proj_z * rotate_z;
  depth_y = proj_y * translate_z + proj_x * near_y + proj_z * rotate_y;
  depth_z = proj_y * rotate_x + proj_x * near_z + proj_z * rotate_x;
  depth_w = matrix_ptr[6];
  view_x = position_ptr[1];
  view_y = matrix_ptr[8];
  view_z = proj_w * translate_y + far_x * near_x + depth_w * rotate_z;
  view_w = proj_w * translate_z + far_x * near_y + depth_w * rotate_y;
  screen_x = proj_w * rotate_x + far_x * near_z + depth_w * rotate_x;
  screen_y = proj_w * rotate_w + far_x * translate_x + depth_w * translate_w;
  
  // 存储变换结果
  *(float *)(transform_matrix + -0xc) = depth_x;
  *(float *)((int64_t)transform_matrix + -0x5c) = depth_y;
  *(float *)(transform_matrix + -0xb) = depth_z;
  *(float *)((int64_t)transform_matrix + -0x54) = proj_y * rotate_w + proj_x * translate_x + proj_z * scale_y;
  clip_x = matrix_ptr[10];
  clip_y = matrix_ptr[0xc];
  clip_z = rotation_ptr[2];
  screen_z = far_y * translate_y + view_y * near_x + clip_x * rotate_z;
  screen_w = far_y * translate_z + view_y * near_y + clip_x * rotate_y;
  clip_x = far_y * rotate_x + view_y * near_z + clip_x * rotate_x;
  clip_y = far_y * rotate_w + view_y * translate_x + clip_x * scale_y;
  
  // 计算投影变换
  *(float *)(transform_matrix + -10) = view_z;
  *(float *)((int64_t)transform_matrix + -0x4c) = view_w;
  *(float *)(transform_matrix + -9) = screen_x;
  *(float *)((int64_t)transform_matrix + -0x44) = proj_w * rotate_w + far_x * translate_x + depth_w * scale_y;
  *(float *)(transform_matrix + -8) = screen_z;
  *(float *)((int64_t)transform_matrix + -0x3c) = screen_w;
  *(float *)(transform_matrix + -7) = clip_x;
  *(float *)((int64_t)transform_matrix + -0x34) = clip_y;
  
  // 计算最终变换结果
  far_y = far_y - *(float *)(animation_data + 0xa0);
  *(float *)(transform_matrix + -6) = *(float *)(animation_data + 0xa0);
  *(float *)((int64_t)transform_matrix + -0x2c) = *(float *)(animation_data + 0xa4);
  *(float *)(transform_matrix + -5) = *(float *)(animation_data + 0xa8);
  *(float *)((int64_t)transform_matrix + -0x24) = far_y * rotate_w + clip_y * near_x + matrix_ptr[0xe] * rotate_z + *(float *)(animation_data + 0xac);
  view_x = view_x - *(float *)(animation_data + 0xa4);
  clip_z = clip_z - *(float *)(animation_data + 0xa8);
  stack_matrix[0] = far_y * depth_x + view_x * depth_y + clip_z * depth_z;
  stack_matrix[1] = far_y * view_z + view_x * view_w + clip_z * screen_x;
  stack_matrix[2] = far_y * screen_z + view_x * screen_w + clip_z * clip_x;
  stack_matrix[3] = CONCAT44(stack_matrix[1], stack_matrix[0]);
  stack_matrix[4] = CONCAT44(far_y * clip_y + view_x * clip_y + clip_z * clip_y, stack_matrix[2]);
  
  // 处理骨骼动画数据
  bone_offset = (int64_t)bone_type * 0x100;
  bone_index = *(int64_t *)(*(int64_t *)(animation_data + 0x260) + 0x18);
  
  // 加锁处理碰撞数据
  do {
    LOCK();
    collision_flags = (uint *)(bone_offset + bone_index);
    visibility_mask = *collision_flags;
    *collision_flags = *collision_flags | 1;
    UNLOCK();
  } while ((visibility_mask & 1) != 0);
  
  // 读取碰撞数据
  transform_data = (uint64_t *)(bone_offset + 4 + bone_index);
  bone_data1 = *transform_data;
  bone_data2 = transform_data[1];
  matrix_ptr = (float *)(bone_offset + 0x14 + bone_index);
  proj_y = *matrix_ptr;
  proj_x = matrix_ptr[1];
  clip_z = matrix_ptr[2];
  far_x = matrix_ptr[3];
  transform_matrix[8] = bone_data1;
  transform_matrix[9] = bone_data2;
  *(float *)(transform_matrix + 10) = proj_y;
  *(float *)((int64_t)transform_matrix + 0x54) = proj_x;
  *(float *)(transform_matrix + 0xb) = clip_z;
  *(float *)((int64_t)transform_matrix + 0x5c) = far_x;
  transform_matrix[-4] = bone_data1;
  transform_matrix[-3] = bone_data2;
  stack_matrix[0] = stack_matrix[0] - proj_y;
  *(float *)(transform_matrix + -2) = proj_y;
  *(float *)((int64_t)transform_matrix + -0xc) = proj_x;
  *(float *)(transform_matrix + -1) = clip_z;
  *(float *)((int64_t)transform_matrix + -4) = far_x;
  *(int32_t *)(bone_offset + bone_index) = 0;
  bone_flags = 0x7f7fffff;
  stack_matrix[1] = stack_matrix[1] - proj_x;
  stack_matrix[2] = stack_matrix[2] - clip_z;
  FUN_180285b40(transform_matrix + -4, &temp_x, &stack_matrix[0]);
  stack_matrix[4] = _stack_matrix[2];
  
  // 执行碰撞检测
  clip_z = *position_ptr - *(float *)(transform_matrix + -6);
  proj_x = position_ptr[2] - *(float *)(transform_matrix + -5);
  proj_y = position_ptr[1] - *(float *)((int64_t)transform_matrix + -0x2c);
  bone_index = *(int64_t *)(*(int64_t *)(animation_data + 0x260) + 0x18);
  stack_matrix[5] = clip_z * depth_x + proj_y * depth_y + proj_x * depth_z;
  stack_matrix[6] = clip_z * view_z + proj_y * view_w + proj_x * screen_x;
  stack_matrix[7] = clip_z * screen_z + proj_y * screen_w + proj_x * clip_x;
  stack_matrix[8] = clip_z * clip_y + proj_y * clip_y + proj_x * clip_y;
  
  // 第二次加锁处理
  do {
    LOCK();
    collision_flags = (uint *)(bone_offset + bone_index);
    visibility_mask = *collision_flags;
    *collision_flags = *collision_flags | 1;
    UNLOCK();
  } while ((visibility_mask & 1) != 0);
  
  // 读取并处理碰撞数据
  transform_data = (uint64_t *)(bone_offset + 4 + bone_index);
  bone_data1 = *transform_data;
  bone_data2 = transform_data[1];
  matrix_ptr = (float *)(bone_offset + 0x14 + bone_index);
  proj_y = *matrix_ptr;
  proj_x = matrix_ptr[1];
  stack_matrix[9] = matrix_ptr[2];
  far_x = matrix_ptr[3];
  transform_matrix[0xc] = bone_data1;
  transform_matrix[0xd] = bone_data2;
  *(float *)(transform_matrix + 0xe) = proj_y;
  *(float *)((int64_t)transform_matrix + 0x74) = proj_x;
  *(float *)(transform_matrix + 0xf) = stack_matrix[9];
  *(float *)((int64_t)transform_matrix + 0x7c) = far_x;
  *transform_matrix = bone_data1;
  transform_matrix[1] = bone_data2;
  stack_matrix[10] = stack_matrix[5] - proj_y;
  *(float *)(transform_matrix + 2) = proj_y;
  *(float *)((int64_t)transform_matrix + 0x14) = proj_x;
  *(float *)(transform_matrix + 3) = stack_matrix[9];
  *(float *)((int64_t)transform_matrix + 0x1c) = far_x;
  *(int32_t *)(bone_offset + bone_index) = 0;
  bone_flags = 0x7f7fffff;
  stack_matrix[11] = stack_matrix[6] - proj_x;
  stack_matrix[9] = stack_matrix[7] - stack_matrix[9];
  FUN_180285b40(proj_x, &stack_matrix[12], &stack_matrix[10]);
  
  // 检查边界框碰撞
  if ((((*(float *)(render_object + 0x214) <= temp_x) &&
       (temp_x < *(float *)(render_object + 0x224) || temp_x == *(float *)(render_object + 0x224))) &&
      (*(float *)(render_object + 0x218) <= temp_y)) &&
     (((temp_y < *(float *)(render_object + 0x228) || temp_y == *(float *)(render_object + 0x228) &&
       (*(float *)(render_object + 0x21c) <= stack_matrix[2])) &&
      (stack_matrix[2] < *(float *)(render_object + 0x22c) || stack_matrix[2] == *(float *)(render_object + 0x22c))))) {
    
    // 处理碰撞响应
    if (*(int *)(render_object + 0x318) == -1) {
      *(int32_t *)(render_object + 0x314) = *(int32_t *)(transform_matrix + 0x26);
      bone_flags = FUN_1801b9a40(animation_data + 0x1218);
      *(int32_t *)(render_object + 0x318) = bone_flags;
      LOCK();
      *(int32_t *)(render_object + 0x310) = 0;
      UNLOCK();
    }
    
    // 更新碰撞数据
    *(int32_t *)(transform_matrix + 6) = stack_matrix[12];
    *(int32_t *)((int64_t)transform_matrix + 0x34) = stack_matrix[13];
    *(int32_t *)(transform_matrix + 7) = stack_matrix[14];
    *(float *)((int64_t)transform_matrix + 0x3c) = (float)*(int *)(transform_matrix + 0x27);
    *(float *)(transform_matrix + 4) = temp_x;
    *(float *)((int64_t)transform_matrix + 0x24) = temp_y;
    *(float *)(transform_matrix + 5) = stack_matrix[2];
    *(int32_t *)((int64_t)transform_matrix + 0x2c) = 0x3e19999a;
    FUN_18020a7b0(render_object + 0x308, stack_matrix[13], transform_matrix + 4);
  }
  
  // 继续处理后续渲染操作
  FUN_1808fc050(transform_matrix[0x10] ^ (uint64_t)&stack_matrix[0]);
}

/**
 * 处理渲染对象的边界框更新
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @param depth_value 深度值
 */
void update_render_object_bounding_box(uint64_t param1, int64_t param2, uint64_t param3, int64_t param4, float depth_value)
{
  uint *collision_flags;
  uint64_t *transform_data;
  float *matrix_ptr;
  uint visibility_mask;
  float bounding_x, bounding_y, bounding_z;
  uint64_t bounding_data1, bounding_data2;
  int32_t bounding_flags;
  int64_t render_object;
  uint64_t *transform_matrix;
  int32_t render_flags;
  int64_t animation_data;
  float temp_x, temp_y;
  float stack_matrix[16];
  
  // 加锁处理边界框数据
  do {
    LOCK();
    collision_flags = (uint *)(param4 + param2);
    visibility_mask = *collision_flags;
    *collision_flags = *collision_flags | 1;
    UNLOCK();
  } while ((visibility_mask & 1) != 0);
  
  // 读取边界框数据
  transform_data = (uint64_t *)(param4 + 4 + param2);
  bounding_data1 = *transform_data;
  bounding_data2 = transform_data[1];
  matrix_ptr = (float *)(param4 + 0x14 + param2);
  bounding_x = *matrix_ptr;
  bounding_y = matrix_ptr[1];
  stack_matrix[2] = matrix_ptr[2];
  bounding_z = matrix_ptr[3];
  transform_matrix[0xc] = bounding_data1;
  transform_matrix[0xd] = bounding_data2;
  *(float *)(transform_matrix + 0xe) = bounding_x;
  *(float *)((int64_t)transform_matrix + 0x74) = bounding_y;
  *(float *)(transform_matrix + 0xf) = stack_matrix[2];
  *(float *)((int64_t)transform_matrix + 0x7c) = bounding_z;
  *transform_matrix = bounding_data1;
  transform_matrix[1] = bounding_data2;
  stack_matrix[0] = stack_matrix[5] - bounding_x;
  *(float *)(transform_matrix + 2) = bounding_x;
  *(float *)((int64_t)transform_matrix + 0x14) = bounding_y;
  *(float *)(transform_matrix + 3) = stack_matrix[2];
  *(float *)((int64_t)transform_matrix + 0x1c) = bounding_z;
  *(int32_t *)(param4 + param2) = render_flags;
  bounding_flags = 0x7f7fffff;
  stack_matrix[1] = stack_matrix[6] - bounding_y;
  stack_matrix[2] = stack_matrix[7] - stack_matrix[2];
  FUN_180285b40(bounding_y, &stack_matrix[12], &stack_matrix[0]);
  
  // 检查边界框碰撞
  if ((((*(float *)(render_object + 0x214) <= temp_x) &&
       (temp_x < *(float *)(render_object + 0x224) || temp_x == *(float *)(render_object + 0x224))) &&
      (*(float *)(render_object + 0x218) <= temp_y)) &&
     (((temp_y < *(float *)(render_object + 0x228) || temp_y == *(float *)(render_object + 0x228) &&
       (*(float *)(render_object + 0x21c) <= depth_value)) &&
      (depth_value < *(float *)(render_object + 0x22c) || depth_value == *(float *)(render_object + 0x22c))))) {
    
    // 处理碰撞响应
    if (*(int *)(render_object + 0x318) == -1) {
      *(int32_t *)(render_object + 0x314) = *(int32_t *)(transform_matrix + 0x26);
      bounding_flags = FUN_1801b9a40(animation_data + 0x1218);
      *(int32_t *)(render_object + 0x318) = bounding_flags;
      LOCK();
      *(int32_t *)(render_object + 0x310) = render_flags;
      UNLOCK();
    }
    
    // 更新边界框数据
    *(int32_t *)(transform_matrix + 6) = stack_matrix[12];
    *(int32_t *)((int64_t)transform_matrix + 0x34) = stack_matrix[13];
    *(int32_t *)(transform_matrix + 7) = stack_matrix[14];
    *(float *)((int64_t)transform_matrix + 0x3c) = (float)*(int *)(transform_matrix + 0x27);
    *(float *)(transform_matrix + 4) = temp_x;
    *(float *)((int64_t)transform_matrix + 0x24) = temp_y;
    *(float *)(transform_matrix + 5) = depth_value;
    *(int32_t *)((int64_t)transform_matrix + 0x2c) = 0x3e19999a;
    FUN_18020a7b0(render_object + 0x308, stack_matrix[13], transform_matrix + 4);
  }
  
  // 继续处理后续渲染操作
  FUN_1808fc050(transform_matrix[0x10] ^ (uint64_t)&stack_matrix[0]);
}

/**
 * 处理渲染对象的深度缓冲区
 */
void process_render_object_depth_buffer(void)
{
  uint64_t *transform_matrix;
  
  // 继续处理深度缓冲区操作
  FUN_1808fc050(*(uint64_t *)(transform_matrix + 0x80) ^ (uint64_t)&stack_matrix[0]);
}

/**
 * 执行渲染对象的矩阵变换（简化版）
 * @param object_ptr 对象指针
 */
void perform_render_matrix_transform_simplified(int64_t object_ptr)
{
  uint *collision_flags;
  uint64_t *transform_data;
  float matrix_x, matrix_y, matrix_z, matrix_w;
  float scale_x, scale_y, scale_z, scale_w;
  float translate_x, translate_y, translate_z;
  float rotate_x, rotate_y, rotate_z, rotate_w;
  uint visibility_mask;
  int64_t bone_index;
  float bone_transform_x, bone_transform_y, bone_transform_z;
  float bone_scale_x, bone_scale_y, bone_scale_z;
  uint64_t bone_data1, bone_data2;
  int32_t bone_flags;
  int64_t render_context;
  float *matrix_ptr;
  int64_t render_object;
  uint64_t *transform_matrix;
  float *position_ptr;
  float *rotation_ptr;
  int64_t bone_offset;
  char bone_type;
  int64_t animation_data;
  float proj_x, proj_y, proj_z, proj_w;
  float near_x, near_y, near_z, near_w;
  float far_x, far_y, far_z, far_w;
  float depth_x, depth_y, depth_z, depth_w;
  float view_x, view_y, view_z, view_w;
  float screen_x, screen_y, screen_z, screen_w;
  float clip_x, clip_y, clip_z, clip_w;
  float temp_x, temp_y, temp_z, temp_w;
  float stack_matrix[16];
  
  // 获取变换矩阵
  matrix_ptr = (float *)(**(code **)(object_ptr + 0x158))();
  
  // 读取骨骼变换矩阵
  near_x = *(float *)(animation_data + 0x70);
  near_y = *(float *)(animation_data + 0x74);
  near_z = *(float *)(animation_data + 0x78);
  translate_x = *(float *)(animation_data + 0x7c);
  translate_y = *(float *)(animation_data + 0x80);
  translate_z = *(float *)(animation_data + 0x84);
  rotate_x = *(float *)(animation_data + 0x88);
  rotate_y = *(float *)(animation_data + 0x8c);
  rotate_z = *(float *)(animation_data + 0x90);
  rotate_w = *(float *)(animation_data + 0x94);
  scale_x = *(float *)(animation_data + 0x98);
  scale_y = *(float *)(animation_data + 0x9c);
  
  // 执行矩阵变换计算
  proj_y = matrix_ptr[1];
  proj_x = *matrix_ptr;
  proj_z = matrix_ptr[2];
  proj_w = matrix_ptr[5];
  far_x = matrix_ptr[9];
  far_y = matrix_ptr[0xd];
  far_z = matrix_ptr[4];
  depth_x = proj_y * translate_y + proj_x * near_x + proj_z * rotate_z;
  depth_y = proj_y * translate_z + proj_x * near_y + proj_z * rotate_y;
  depth_z = proj_y * rotate_x + proj_x * near_z + proj_z * rotate_x;
  depth_w = matrix_ptr[6];
  view_x = position_ptr[1];
  view_y = matrix_ptr[8];
  view_z = proj_w * translate_y + far_x * near_x + depth_w * rotate_z;
  view_w = proj_w * translate_z + far_x * near_y + depth_w * rotate_y;
  screen_x = proj_w * rotate_x + far_x * near_z + depth_w * rotate_x;
  screen_y = proj_w * rotate_w + far_x * translate_x + depth_w * translate_w;
  
  // 存储变换结果
  *(float *)(transform_matrix + -0xc) = depth_x;
  *(float *)((int64_t)transform_matrix + -0x5c) = depth_y;
  *(float *)(transform_matrix + -0xb) = depth_z;
  *(float *)((int64_t)transform_matrix + -0x54) = proj_y * rotate_w + proj_x * translate_x + proj_z * scale_y;
  clip_x = matrix_ptr[10];
  clip_y = matrix_ptr[0xc];
  clip_z = rotation_ptr[2];
  screen_z = far_y * translate_y + view_y * near_x + clip_x * rotate_z;
  screen_w = far_y * translate_z + view_y * near_y + clip_x * rotate_y;
  clip_x = far_y * rotate_x + view_y * near_z + clip_x * rotate_x;
  clip_y = far_y * rotate_w + view_y * translate_x + clip_x * scale_y;
  
  // 计算投影变换
  *(float *)(transform_matrix + -10) = view_z;
  *(float *)((int64_t)transform_matrix + -0x4c) = view_w;
  *(float *)(transform_matrix + -9) = screen_x;
  *(float *)((int64_t)transform_matrix + -0x44) = proj_w * rotate_w + far_x * translate_x + depth_w * scale_y;
  *(float *)(transform_matrix + -8) = screen_z;
  *(float *)((int64_t)transform_matrix + -0x3c) = screen_w;
  *(float *)(transform_matrix + -7) = clip_x;
  *(float *)((int64_t)transform_matrix + -0x34) = clip_y;
  
  // 计算最终变换结果
  far_y = far_y - *(float *)(animation_data + 0xa0);
  *(float *)(transform_matrix + -6) = *(float *)(animation_data + 0xa0);
  *(float *)((int64_t)transform_matrix + -0x2c) = *(float *)(animation_data + 0xa4);
  *(float *)(transform_matrix + -5) = *(float *)(animation_data + 0xa8);
  *(float *)((int64_t)transform_matrix + -0x24) = far_y * rotate_w + clip_y * near_x + matrix_ptr[0xe] * rotate_z + *(float *)(animation_data + 0xac);
  view_x = view_x - *(float *)(animation_data + 0xa4);
  clip_z = clip_z - *(float *)(animation_data + 0xa8);
  stack_matrix[0] = far_y * depth_x + view_x * depth_y + clip_z * depth_z;
  stack_matrix[1] = far_y * view_z + view_x * view_w + clip_z * screen_x;
  stack_matrix[2] = far_y * screen_z + view_x * screen_w + clip_z * clip_x;
  stack_matrix[3] = CONCAT44(stack_matrix[1], stack_matrix[0]);
  stack_matrix[4] = CONCAT44(far_y * clip_y + view_x * clip_y + clip_z * clip_y, stack_matrix[2]);
  
  // 处理骨骼动画数据
  bone_offset = (int64_t)bone_type * 0x100;
  bone_index = *(int64_t *)(*(int64_t *)(animation_data + 0x260) + 0x18);
  
  // 加锁处理碰撞数据
  do {
    LOCK();
    collision_flags = (uint *)(bone_offset + bone_index);
    visibility_mask = *collision_flags;
    *collision_flags = *collision_flags | 1;
    UNLOCK();
  } while ((visibility_mask & 1) != 0);
  
  // 读取碰撞数据
  transform_data = (uint64_t *)(bone_offset + 4 + bone_index);
  bone_data1 = *transform_data;
  bone_data2 = transform_data[1];
  matrix_ptr = (float *)(bone_offset + 0x14 + bone_index);
  proj_y = *matrix_ptr;
  proj_x = matrix_ptr[1];
  clip_z = matrix_ptr[2];
  far_x = matrix_ptr[3];
  transform_matrix[8] = bone_data1;
  transform_matrix[9] = bone_data2;
  *(float *)(transform_matrix + 10) = proj_y;
  *(float *)((int64_t)transform_matrix + 0x54) = proj_x;
  *(float *)(transform_matrix + 0xb) = clip_z;
  *(float *)((int64_t)transform_matrix + 0x5c) = far_x;
  transform_matrix[-4] = bone_data1;
  transform_matrix[-3] = bone_data2;
  stack_matrix[0] = stack_matrix[0] - proj_y;
  *(float *)(transform_matrix + -2) = proj_y;
  *(float *)((int64_t)transform_matrix + -0xc) = proj_x;
  *(float *)(transform_matrix + -1) = clip_z;
  *(float *)((int64_t)transform_matrix + -4) = far_x;
  *(int32_t *)(bone_offset + bone_index) = 0;
  bone_flags = 0x7f7fffff;
  stack_matrix[1] = stack_matrix[1] - proj_x;
  stack_matrix[2] = stack_matrix[2] - clip_z;
  FUN_180285b40(transform_matrix + -4, &temp_x, &stack_matrix[0]);
  stack_matrix[4] = _stack_matrix[2];
  
  // 执行碰撞检测
  clip_z = *position_ptr - *(float *)(transform_matrix + -6);
  proj_x = position_ptr[2] - *(float *)(transform_matrix + -5);
  proj_y = position_ptr[1] - *(float *)((int64_t)transform_matrix + -0x2c);
  bone_index = *(int64_t *)(*(int64_t *)(animation_data + 0x260) + 0x18);
  stack_matrix[5] = clip_z * depth_x + proj_y * depth_y + proj_x * depth_z;
  stack_matrix[6] = clip_z * view_z + proj_y * view_w + proj_x * screen_x;
  stack_matrix[7] = clip_z * screen_z + proj_y * screen_w + proj_x * clip_x;
  stack_matrix[8] = clip_z * clip_y + proj_y * clip_y + proj_x * clip_y;
  
  // 第二次加锁处理
  do {
    LOCK();
    collision_flags = (uint *)(bone_offset + bone_index);
    visibility_mask = *collision_flags;
    *collision_flags = *collision_flags | 1;
    UNLOCK();
  } while ((visibility_mask & 1) != 0);
  
  // 读取并处理碰撞数据
  transform_data = (uint64_t *)(bone_offset + 4 + bone_index);
  bone_data1 = *transform_data;
  bone_data2 = transform_data[1];
  matrix_ptr = (float *)(bone_offset + 0x14 + bone_index);
  proj_y = *matrix_ptr;
  proj_x = matrix_ptr[1];
  stack_matrix[9] = matrix_ptr[2];
  far_x = matrix_ptr[3];
  transform_matrix[0xc] = bone_data1;
  transform_matrix[0xd] = bone_data2;
  *(float *)(transform_matrix + 0xe) = proj_y;
  *(float *)((int64_t)transform_matrix + 0x74) = proj_x;
  *(float *)(transform_matrix + 0xf) = stack_matrix[9];
  *(float *)((int64_t)transform_matrix + 0x7c) = far_x;
  *transform_matrix = bone_data1;
  transform_matrix[1] = bone_data2;
  stack_matrix[10] = stack_matrix[5] - proj_y;
  *(float *)(transform_matrix + 2) = proj_y;
  *(float *)((int64_t)transform_matrix + 0x14) = proj_x;
  *(float *)(transform_matrix + 3) = stack_matrix[9];
  *(float *)((int64_t)transform_matrix + 0x1c) = far_x;
  *(int32_t *)(bone_offset + bone_index) = 0;
  bone_flags = 0x7f7fffff;
  stack_matrix[11] = stack_matrix[6] - proj_x;
  stack_matrix[9] = stack_matrix[7] - stack_matrix[9];
  FUN_180285b40(proj_x, &stack_matrix[12], &stack_matrix[10]);
  
  // 检查边界框碰撞
  if ((((*(float *)(render_object + 0x214) <= temp_x) &&
       (temp_x < *(float *)(render_object + 0x224) || temp_x == *(float *)(render_object + 0x224))) &&
      (*(float *)(render_object + 0x218) <= temp_y)) &&
     (((temp_y < *(float *)(render_object + 0x228) || temp_y == *(float *)(render_object + 0x228) &&
       (*(float *)(render_object + 0x21c) <= stack_matrix[2])) &&
      (stack_matrix[2] < *(float *)(render_object + 0x22c) || stack_matrix[2] == *(float *)(render_object + 0x22c))))) {
    
    // 处理碰撞响应
    if (*(int *)(render_object + 0x318) == -1) {
      *(int32_t *)(render_object + 0x314) = *(int32_t *)(transform_matrix + 0x26);
      bone_flags = FUN_1801b9a40(animation_data + 0x1218);
      *(int32_t *)(render_object + 0x318) = bone_flags;
      LOCK();
      *(int32_t *)(render_object + 0x310) = 0;
      UNLOCK();
    }
    
    // 更新碰撞数据
    *(int32_t *)(transform_matrix + 6) = stack_matrix[12];
    *(int32_t *)((int64_t)transform_matrix + 0x34) = stack_matrix[13];
    *(int32_t *)(transform_matrix + 7) = stack_matrix[14];
    *(float *)((int64_t)transform_matrix + 0x3c) = (float)*(int *)(transform_matrix + 0x27);
    *(float *)(transform_matrix + 4) = temp_x;
    *(float *)((int64_t)transform_matrix + 0x24) = temp_y;
    *(float *)(transform_matrix + 5) = stack_matrix[2];
    *(int32_t *)((int64_t)transform_matrix + 0x2c) = 0x3e19999a;
    FUN_18020a7b0(render_object + 0x308, stack_matrix[13], transform_matrix + 4);
  }
  
  // 继续处理后续渲染操作
  FUN_1808fc050(transform_matrix[0x10] ^ (uint64_t)&stack_matrix[0]);
}

/**
 * 计算渲染对象的边界框
 * @param render_object 渲染对象指针
 * @param bounding_box_ptr 边界框指针
 * @param should_process 是否处理标志
 */
void calculate_render_object_bounding_box(int64_t render_object, uint64_t *bounding_box_ptr, char should_process)
{
  int64_t bone_array_end;
  uint64_t bounding_data1, bounding_data2;
  int64_t bone_array_start;
  int64_t *bone_ptr;
  float min_x, min_y, min_z, min_w;
  float max_x, max_y, max_z, max_w;
  float bone_x, bone_y, bone_z, bone_w;
  float distance_x, distance_y, distance_z;
  float bounding_sphere_radius;
  int8_t bone_buffer[224];
  
  bone_array_end = *(int64_t *)(render_object + 0x40);
  bone_array_start = *(int64_t *)(render_object + 0x38);
  *(int32_t *)(bounding_box_ptr + 6) = 0;
  
  // 如果没有骨骼数据，初始化边界框
  if (bone_array_end - bone_array_start >> 4 == 0) {
    *bounding_box_ptr = 0;
    bounding_box_ptr[1] = 0;
    bounding_box_ptr[2] = 0;
    bounding_box_ptr[3] = 0;
    bounding_box_ptr[4] = 0;
    bounding_box_ptr[5] = 0;
  }
  else {
    // 初始化边界框为最大范围
    *bounding_box_ptr = 0x4cbebc204cbebc20;
    bounding_box_ptr[1] = 0x7f7fffff4cbebc20;
    *(int32_t *)(bounding_box_ptr + 4) = 0;
    *(int32_t *)((int64_t)bounding_box_ptr + 0x24) = 0;
    *(int32_t *)(bounding_box_ptr + 5) = 0;
    *(int32_t *)((int64_t)bounding_box_ptr + 0x2c) = 0x7f7fffff;
    bounding_box_ptr[2] = 0xccbebc20ccbebc20;
    bounding_box_ptr[3] = 0x7f7fffffccbebc20;
    
    bone_ptr = *(int64_t **)(render_object + 0x38);
    if (bone_ptr < *(int64_t **)(render_object + 0x40)) {
      do {
        bone_array_end = *bone_ptr;
        if (should_process != '\0') {
          FUN_180075b70(bone_array_end);
        }
        
        // 处理骨骼变换数据
        if (((*(byte *)(bone_array_end + 0x100) & 0x20) == 0) || (*(int64_t *)(render_object + 0x28) == 0)) {
          bone_array_start = bone_array_end + 0x120;
        }
        else {
          bone_array_start = FUN_180194940(bone_array_end + 0x120, bone_buffer, *(int64_t *)(render_object + 0x28) + 0x70);
        }
        
        // 更新边界框
        FUN_18063a240(bounding_box_ptr, bone_array_end + 0x274, bone_array_start);
        bone_ptr = bone_ptr + 2;
      } while (bone_ptr < *(int64_t **)(render_object + 0x40));
    }
    
    // 检查是否可以直接使用预计算的边界框
    if (((*(int64_t *)(render_object + 0x40) - (int64_t)*(int64_t **)(render_object + 0x38) & 0xfffffffffffffff0U) == 0x10) &&
       (bone_array_end = **(int64_t **)(render_object + 0x38), (*(uint *)(bone_array_end + 0x100) & 0x4000000) == 0)) {
      bounding_data1 = *(uint64_t *)(bone_array_end + 0x29c);
      bounding_box_ptr[4] = *(uint64_t *)(bone_array_end + 0x294);
      bounding_box_ptr[5] = bounding_data1;
      *(int32_t *)(bounding_box_ptr + 6) = *(int32_t *)(**(int64_t **)(render_object + 0x38) + 0x2a4);
    }
    else {
      // 计算边界球半径
      FUN_1800b9f60(bounding_box_ptr);
      bone_ptr = *(int64_t **)(render_object + 0x38);
      bounding_sphere_radius = 0.0;
      
      if (bone_ptr < *(int64_t **)(render_object + 0x40)) {
        do {
          bone_array_end = *bone_ptr;
          if ((*(uint *)(bone_array_end + 0x100) & 0x4000000) == 0) {
            bone_x = *(float *)(bone_array_end + 0x294);
            bone_y = *(float *)(bone_array_end + 0x298);
            bone_z = *(float *)(bone_array_end + 0x29c);
            bone_w = *(float *)(bone_array_end + 0x2a4);
          }
          else {
            // 处理蒙皮骨骼的边界框计算
            bone_w = *(float *)(bone_array_end + 0x298);
            bone_z = *(float *)(bone_array_end + 0x294);
            distance_y = *(float *)(bone_array_end + 0x29c);
            bone_x = *(float *)(bone_array_end + 0x130) * bone_w + *(float *)(bone_array_end + 0x120) * bone_z +
                    *(float *)(bone_array_end + 0x140) * distance_y + *(float *)(bone_array_end + 0x150);
            bone_y = *(float *)(bone_array_end + 0x134) * bone_w + *(float *)(bone_array_end + 0x124) * bone_z +
                    *(float *)(bone_array_end + 0x144) * distance_y + *(float *)(bone_array_end + 0x154);
            bone_z = *(float *)(bone_array_end + 0x138) * bone_w + *(float *)(bone_array_end + 0x128) * bone_z +
                     *(float *)(bone_array_end + 0x148) * distance_y + *(float *)(bone_array_end + 0x158);
            bone_w = *(float *)(bone_array_end + 0x140) * *(float *)(bone_array_end + 0x140) +
                    *(float *)(bone_array_end + 0x144) * *(float *)(bone_array_end + 0x144) +
                    *(float *)(bone_array_end + 0x148) * *(float *)(bone_array_end + 0x148);
            distance_y = *(float *)(bone_array_end + 0x130) * *(float *)(bone_array_end + 0x130) +
                    *(float *)(bone_array_end + 0x134) * *(float *)(bone_array_end + 0x134) +
                    *(float *)(bone_array_end + 0x138) * *(float *)(bone_array_end + 0x138);
            distance_z = *(float *)(bone_array_end + 0x120) * *(float *)(bone_array_end + 0x120) +
                     *(float *)(bone_array_end + 0x124) * *(float *)(bone_array_end + 0x124) +
                     *(float *)(bone_array_end + 0x128) * *(float *)(bone_array_end + 0x128);
            
            // 计算缩放因子
            if (distance_z <= distance_y) {
              if (bone_w <= distance_y) {
                bone_w = distance_y;
              }
            }
            else if (bone_w <= distance_z) {
              bone_w = distance_z;
            }
            
            // 计算边界球半径
            if ((bone_w - 1.0 <= -1e-06) || (1e-06 <= bone_w - 1.0)) {
              bone_w = SQRT(bone_w) * *(float *)(bone_array_end + 0x2a4);
            }
            else {
              bone_w = *(float *)(bone_array_end + 0x2a4) * 1.0;
            }
          }
          
          // 计算距离边界框中心的距离
          bone_y = *(float *)((int64_t)bounding_box_ptr + 0x24) - bone_y;
          bone_y = bone_y * bone_y + (*(float *)(bounding_box_ptr + 4) - bone_x) * (*(float *)(bounding_box_ptr + 4) - bone_x) +
                  (*(float *)(bounding_box_ptr + 5) - bone_z) * (*(float *)(bounding_box_ptr + 5) - bone_z);
          bone_x = bounding_sphere_radius - bone_w;
          
          if (bone_x <= 0.0) {
            bone_x = 0.0;
          }
          
          // 更新边界球半径
          if (bone_x * bone_x < bone_y) {
            bounding_sphere_radius = SQRT(bone_y) + bone_w;
          }
          
          bone_ptr = bone_ptr + 2;
        } while (bone_ptr < *(int64_t **)(render_object + 0x40));
        
        // 更新边界球半径
        if ((0.0 < bounding_sphere_radius) && (bounding_sphere_radius < *(float *)(bounding_box_ptr + 6) || bounding_sphere_radius == *(float *)(bounding_box_ptr + 6))) {
          *(float *)(bounding_box_ptr + 6) = bounding_sphere_radius;
        }
      }
    }
  }
  return;
}