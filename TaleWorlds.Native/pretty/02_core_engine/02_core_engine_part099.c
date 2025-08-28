#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part099.c - 核心引擎模块第099部分
// 包含游戏对象管理、碰撞检测和渲染相关的函数

/**
 * 从对象数组中移除指定ID的对象
 * @param object_array 对象数组指针
 * @param object_id 要移除的对象ID
 */
void remove_object_from_array(int *object_array, int object_id)
{
  int array_size;
  int *array_data;
  longlong item_index;
  int current_index;
  int *current_item;
  
  if (object_id != 0) {
    array_size = *object_array;
    current_index = 0;
    if (0 < array_size) {
      array_data = *(int **)(object_array + 2);
      current_item = array_data;
      do {
        if (*current_item == object_id) {
          if (array_data + (longlong)current_index * 10 != (int *)0x0) {
            item_index = ((longlong)current_index * 0x28) / 0x28;
                    // WARNING: Subroutine does not return
            memmove(array_data + item_index * 10, array_data + item_index * 10 + 10, (array_size - item_index) * 0x28 + -0x28);
          }
          break;
        }
        current_index = current_index + 1;
        current_item = current_item + 10;
      } while (current_index < array_size);
    }
  }
  if (object_array[7] == object_id) {
    object_array[7] = 0;
  }
  if (object_array[5] == object_id) {
    object_array[5] = 0;
  }
  if (object_array[6] == object_id) {
    object_array[6] = 0;
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 处理对象碰撞和边界检测
 * @param object_data 对象数据指针
 * @return 返回碰撞处理结果指针
 */
int * process_object_collision(int *object_data)
{
  longlong engine_base;
  uint64_t *collision_data;
  int32_t *render_params;
  uint64_t *transform_data;
  int32_t *vertex_data;
  float position_x;
  float position_y;
  float position_z;
  float width;
  float height;
  float depth;
  float velocity_x;
  float velocity_y;
  int32_t temp_param1;
  int32_t temp_param2;
  int collision_flags;
  longlong object_transform;
  longlong camera_data;
  int *collision_result;
  int32_t render_state1;
  int32_t render_state2;
  int32_t render_state3;
  uint64_t matrix_data;
  bool is_colliding;
  longlong temp_offset;
  char collision_result_char;
  int object_count;
  int boundary_check;
  int *object_array;
  int *array_pointer;
  int *array_item;
  float collision_width;
  float collision_height;
  int32_t stack_param1;
  int32_t stack_param2;
  int32_t stack_param3;
  int32_t stack_param4;
  int32_t stack_param5;
  
  engine_base = SYSTEM_DATA_MANAGER_A;
  position_x = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1660);
  object_transform = *(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  position_y = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8);
  collision_height = position_y - 2.0;
  width = *(float *)(object_transform + 0x104);
  height = *(float *)(object_transform + 0x100);
  collision_width = (position_y + collision_height) - 2.0;
  if ((((height < (float)object_data[10]) || (width < (float)object_data[0xb])) ||
      ((float)object_data[0xc] < height + collision_width)) || ((float)object_data[0xd] < width)) {
    depth = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1674);
    is_colliding = true;
    velocity_x = (float)object_data[0xc];
    boundary_check = object_data[0xd];
    *(int8_t *)(object_transform + 0xb1) = 1;
    camera_data = *(longlong *)(engine_base + 0x1af8);
    FUN_180291b40(*(uint64_t *)(camera_data + 0x2e8), *(uint64_t *)(object_data + 10),
                  CONCAT44(boundary_check, depth + velocity_x), 1);
    collision_data = (uint64_t *)
             (*(longlong *)(*(longlong *)(camera_data + 0x2e8) + 0x68) + -0x10 +
             (longlong)*(int *)(*(longlong *)(camera_data + 0x2e8) + 0x60) * 0x10);
    matrix_data = collision_data[1];
    *(uint64_t *)(camera_data + 0x228) = *collision_data;
    *(uint64_t *)(camera_data + 0x230) = matrix_data;
  }
  else {
    is_colliding = false;
  }
  camera_data = SYSTEM_DATA_MANAGER_A;
  temp_param1 = *(int32_t *)(engine_base + 0x16c8);
  temp_param2 = *(int32_t *)(engine_base + 0x16cc);
  render_state1 = *(int32_t *)(engine_base + 0x16d0);
  velocity_x = *(float *)(engine_base + 0x16d4);
  collision_result = (int *)0x0;
  boundary_check = 0;
  stack_param1 = 0;
  stack_param2 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16c8);
  stack_param3 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16cc);
  stack_param4 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16d0);
  stack_param5 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16d4);
  FUN_18013e100(SYSTEM_DATA_MANAGER_A + 0x1b80, &stack_param1);
  stack_param1 = 0x15;
  *(int32_t *)(camera_data + 0x16c8) = temp_param1;
  *(int32_t *)(camera_data + 0x16cc) = temp_param2;
  *(int32_t *)(camera_data + 0x16d0) = render_state1;
  *(float *)(camera_data + 0x16d4) = velocity_x * 0.5;
  camera_data = SYSTEM_DATA_MANAGER_A;
  stack_param2 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1818);
  stack_param3 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x181c);
  stack_param4 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1820);
  stack_param5 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1824);
  FUN_18013e100(SYSTEM_DATA_MANAGER_A + 0x1b80, &stack_param1);
  *(uint64_t *)(camera_data + 0x1818) = 0;
  *(uint64_t *)(camera_data + 0x1820) = 0;
  temp_param1 = *(int32_t *)(engine_base + 0x90);
  temp_param2 = *(int32_t *)(engine_base + 0x94);
  matrix_data = CONCAT44(position_x + position_x + position_y, collision_height);
  *(int32_t *)(engine_base + 0x90) = 0x3e800000;
  *(int32_t *)(engine_base + 0x94) = 0x3e4ccccd;
  position_x = (float)object_data[0xc];
  *(int *)(object_transform + 0x104) = object_data[0xb];
  *(float *)(object_transform + 0x100) = position_x - collision_width;
  collision_result_char = FUN_18010fad0(&unknown_var_2296_ptr, 0, matrix_data);
  position_x = (float)object_data[0xc];
  *(int *)(object_transform + 0x104) = object_data[0xb];
  if (collision_result_char != '\0') {
    boundary_check = -1;
  }
  *(float *)(object_transform + 0x100) = (position_x - collision_width) + collision_height;
  collision_result_char = FUN_18010fad0(&unknown_var_2316_ptr, 1, matrix_data);
  camera_data = SYSTEM_DATA_MANAGER_A;
  if (collision_result_char != '\0') {
    boundary_check = 1;
  }
  collision_data = (uint64_t *)
           (*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1b88) + -0x10 +
           (longlong)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b80) * 0x14);
  matrix_data = collision_data[1];
  transform_data = (uint64_t *)
           (SYSTEM_DATA_MANAGER_A + 0x16c8 +
           (longlong)
           *(int *)(*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1b88) + -0x14 +
                   (longlong)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b80) * 0x14) * 0x10);
  *transform_data = *collision_data;
  transform_data[1] = matrix_data;
  collision_flags = *(int *)(camera_data + 0x1b80);
  *(int *)(camera_data + 0x1b80) = collision_flags + -1;
  temp_offset = (longlong)collision_flags + -2;
  render_params = (int32_t *)(*(longlong *)(camera_data + 0x1b88) + 4 + temp_offset * 0x14);
  render_state1 = render_params[1];
  render_state2 = render_params[2];
  render_state3 = render_params[3];
  vertex_data = (int32_t *)
           (camera_data + 0x16c8 +
           (longlong)*(int *)(*(longlong *)(camera_data + 0x1b88) + temp_offset * 0x14) * 0x10);
  *vertex_data = *render_params;
  vertex_data[1] = render_state1;
  vertex_data[2] = render_state2;
  vertex_data[3] = render_state3;
  *(int *)(camera_data + 0x1b80) = *(int *)(camera_data + 0x1b80) + -1;
  *(int32_t *)(engine_base + 0x94) = temp_param2;
  *(int32_t *)(engine_base + 0x90) = temp_param1;
  if (is_colliding) {
    FUN_180126d80();
  }
  array_item = collision_result;
  if (((boundary_check != 0) && (object_data[5] != 0)) && (collision_flags = *object_data, 0 < collision_flags)) {
    object_array = *(int **)(object_data + 2);
    array_pointer = object_array;
    do {
      object_count = (int)collision_result;
      array_item = (int *)0x0;
      if (*array_pointer == object_data[5]) {
        if (object_array + (longlong)object_count * 10 != (int *)0x0) {
          object_count = (int)(((longlong)object_count * 0x28) / 0x28);
          boundary_check = object_count + boundary_check;
          if ((boundary_check < 0) || (collision_flags <= boundary_check)) {
            boundary_check = object_count;
          }
          array_item = object_array + (longlong)boundary_check * 10;
        }
        break;
      }
      collision_result = (int *)(ulonglong)(object_count + 1U);
      array_pointer = array_pointer + 10;
    } while ((int)(object_count + 1U) < collision_flags);
  }
  *(float *)(object_transform + 0x100) = height;
  *(float *)(object_transform + 0x104) = width;
  object_data[0xc] = (int)((float)object_data[0xc] - (collision_width + 1.0));
  return array_item;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 更新对象位置和状态
 * @param object_data 对象数据指针
 * @return 返回更新状态标志
 */
ulonglong update_object_position(int *object_data)
{
  longlong engine_base;
  uint64_t *position_data;
  int32_t *render_params;
  uint64_t *transform_data;
  int32_t *vertex_data;
  int32_t position_x;
  int32_t position_y;
  int array_size;
  longlong object_transform;
  int32_t render_state1;
  int32_t render_state2;
  int32_t render_state3;
  uint64_t matrix_data;
  longlong camera_offset;
  char update_flag;
  uint loop_counter;
  ulonglong result_flag;
  ulonglong temp_result;
  float position_z;
  int32_t stack_param1;
  int32_t stack_param2;
  int32_t stack_param3;
  int32_t stack_param4;
  int32_t stack_param5;
  ulonglong collision_result;
  
  engine_base = SYSTEM_DATA_MANAGER_A;
  object_transform = *(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  position_x = *(int32_t *)(object_transform + 0x100);
  position_y = *(int32_t *)(object_transform + 0x104);
  position_z = (float)object_data[0xc] -
           (*(float *)(SYSTEM_DATA_MANAGER_A + 0x1660) + *(float *)(SYSTEM_DATA_MANAGER_A + 0x1660) +
           *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8));
  object_data[0xc] = (int)position_z;
  if (*(char *)(object_transform + 0xb7) != '\0') {
    position_z = position_z + *(float *)(engine_base + 0x1674);
    object_data[0xc] = (int)position_z;
  }
  *(int *)(object_transform + 0x104) = object_data[0xb];
  *(float *)(object_transform + 0x100) = position_z;
  collision_result = 0;
  render_state1 = *(int32_t *)(engine_base + 0x16c8);
  render_state2 = *(int32_t *)(engine_base + 0x16cc);
  render_state3 = *(int32_t *)(engine_base + 0x16d0);
  position_z = *(float *)(engine_base + 0x16d4);
  stack_param1 = 0;
  stack_param2 = *(int32_t *)(engine_base + 0x16c8);
  stack_param3 = *(int32_t *)(engine_base + 0x16cc);
  stack_param4 = *(int32_t *)(engine_base + 0x16d0);
  stack_param5 = *(int32_t *)(engine_base + 0x16d4);
  FUN_18013e100(engine_base + 0x1b80, &stack_param1);
  stack_param1 = 0x15;
  *(int32_t *)(engine_base + 0x16c8) = render_state1;
  *(int32_t *)(engine_base + 0x16cc) = render_state2;
  *(int32_t *)(engine_base + 0x16d0) = render_state3;
  *(float *)(engine_base + 0x16d4) = position_z * 0.5;
  engine_base = SYSTEM_DATA_MANAGER_A;
  stack_param2 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1818);
  stack_param3 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x181c);
  stack_param4 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1820);
  stack_param5 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1824);
  FUN_18013e100(SYSTEM_DATA_MANAGER_A + 0x1b80, &stack_param1);
  *(uint64_t *)(engine_base + 0x1818) = 0;
  *(uint64_t *)(engine_base + 0x1820) = 0;
  update_flag = FUN_1801129b0(&unknown_var_2224_ptr, 0, 0x41);
  camera_offset = SYSTEM_DATA_MANAGER_A;
  position_data = (uint64_t *)
           (*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1b88) + -0x10 +
           (longlong)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b80) * 0x14);
  matrix_data = position_data[1];
  transform_data = (uint64_t *)
           (SYSTEM_DATA_MANAGER_A + 0x16c8 +
           (longlong)
           *(int *)(*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1b88) + -0x14 +
                   (longlong)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b80) * 0x14) * 0x10);
  *transform_data = *position_data;
  transform_data[1] = matrix_data;
  array_size = *(int *)(camera_offset + 0x1b80);
  *(int *)(camera_offset + 0x1b80) = array_size + -1;
  engine_base = (longlong)array_size + -2;
  render_params = (int32_t *)(*(longlong *)(camera_offset + 0x1b88) + 4 + engine_base * 0x14);
  render_state1 = render_params[1];
  render_state2 = render_params[2];
  render_state3 = render_params[3];
  vertex_data = (int32_t *)
           (camera_offset + 0x16c8 +
           (longlong)*(int *)(*(longlong *)(camera_offset + 0x1b88) + engine_base * 0x14) * 0x10);
  *vertex_data = *render_params;
  vertex_data[1] = render_state1;
  vertex_data[2] = render_state2;
  vertex_data[3] = render_state3;
  *(int *)(camera_offset + 0x1b80) = *(int *)(camera_offset + 0x1b80) + -1;
  result_flag = collision_result;
  if (update_flag != '\0') {
    temp_result = collision_result;
    if (0 < *object_data) {
      do {
        engine_base = *(longlong *)(object_data + 2);
        update_flag = FUN_18011aad0(**(uint64_t **)(engine_base + temp_result + 8));
        if (update_flag != '\0') {
          result_flag = engine_base + temp_result;
        }
        loop_counter = (int)collision_result + 1;
        collision_result = (ulonglong)loop_counter;
        temp_result = temp_result + 0x28;
      } while ((int)loop_counter < *object_data);
    }
    FUN_18012f0c0();
  }
  *(int32_t *)(object_transform + 0x100) = position_x;
  *(int32_t *)(object_transform + 0x104) = position_y;
  return result_flag;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 计算对象移动距离
 * @param distance_x X轴距离
 * @param distance_y Y轴距离
 * @return 返回计算结果
 */
ulonglong calculate_object_distance(float distance_x, float distance_y)
{
  longlong engine_base;
  uint64_t *distance_data;
  int32_t *render_params;
  uint64_t *transform_data;
  int32_t *vertex_data;
  int32_t position_x;
  int32_t position_y;
  int array_size;
  int32_t render_state1;
  int32_t render_state2;
  int32_t render_state3;
  uint64_t matrix_data;
  longlong camera_offset;
  char update_flag;
  longlong register_RCX;
  longlong register_RBX;
  uint loop_counter;
  int *register_RSI;
  ulonglong result_flag;
  ulonglong temp_result;
  longlong register_R15;
  float calculated_distance;
  int32_t stack_param1;
  float stack_param2;
  int32_t stack_param3;
  int32_t stack_param4;
  int32_t stack_param5;
  int32_t stack_param6;
  ulonglong distance_result;
  
  position_x = *(int32_t *)(register_R15 + 0x100);
  position_y = *(int32_t *)(register_R15 + 0x104);
  distance_y = distance_y - (distance_x + *(float *)(register_RBX + 0x19f8));
  *(float *)(register_RCX + 0x30) = distance_y;
  if (*(char *)(register_R15 + 0xb7) != '\0') {
    distance_y = distance_y + *(float *)(register_RBX + 0x1674);
    *(float *)(register_RCX + 0x30) = distance_y;
  }
  *(int32_t *)(register_R15 + 0x104) = *(int32_t *)(register_RCX + 0x2c);
  *(float *)(register_R15 + 0x100) = distance_y;
  distance_result = 0;
  render_state1 = *(int32_t *)(register_RBX + 0x16c8);
  render_state2 = *(int32_t *)(register_RBX + 0x16cc);
  stack_param3 = *(int32_t *)(register_RBX + 0x16d0);
  stack_param2 = *(float *)(register_RBX + 0x16d4);
  stack_param1 = 0;
  calculated_distance = stack_param2 * 0.5;
  stack_param4 = *(int32_t *)(register_RBX + 0x16c8);
  stack_param5 = *(int32_t *)(register_RBX + 0x16cc);
  stack_param6 = *(int32_t *)(register_RBX + 0x16d0);
  FUN_18013e100(register_RBX + 0x1b80, &stack0x00000030);
  stack_param1 = 0x15;
  *(int32_t *)(register_RBX + 0x16c8) = render_state1;
  *(int32_t *)(register_RBX + 0x16cc) = render_state2;
  *(int32_t *)(register_RBX + 0x16d0) = stack_param3;
  *(float *)(register_RBX + 0x16d4) = calculated_distance;
  engine_base = SYSTEM_DATA_MANAGER_A;
  stack_param4 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1818);
  stack_param5 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x181c);
  stack_param6 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1820);
  FUN_18013e100(SYSTEM_DATA_MANAGER_A + 0x1b80, &stack0x00000030);
  *(uint64_t *)(engine_base + 0x1818) = 0;
  *(uint64_t *)(engine_base + 0x1820) = 0;
  update_flag = FUN_1801129b0(&unknown_var_2224_ptr, 0, 0x41);
  camera_offset = SYSTEM_DATA_MANAGER_A;
  distance_data = (uint64_t *)
           (*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1b88) + -0x10 +
           (longlong)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b80) * 0x14);
  matrix_data = distance_data[1];
  transform_data = (uint64_t *)
           (SYSTEM_DATA_MANAGER_A + 0x16c8 +
           (longlong)
           *(int *)(*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1b88) + -0x14 +
                   (longlong)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b80) * 0x14) * 0x10);
  *transform_data = *distance_data;
  transform_data[1] = matrix_data;
  array_size = *(int *)(camera_offset + 0x1b80);
  *(int *)(camera_offset + 0x1b80) = array_size + -1;
  engine_base = (longlong)array_size + -2;
  render_params = (int32_t *)(*(longlong *)(camera_offset + 0x1b88) + 4 + engine_base * 0x14);
  render_state1 = render_params[1];
  render_state2 = render_params[2];
  render_state3 = render_params[3];
  vertex_data = (int32_t *)
           (camera_offset + 0x16c8 +
           (longlong)*(int *)(*(longlong *)(camera_offset + 0x1b88) + engine_base * 0x14) * 0x10);
  *vertex_data = *render_params;
  vertex_data[1] = render_state1;
  vertex_data[2] = render_state2;
  vertex_data[3] = render_state3;
  *(int *)(camera_offset + 0x1b80) = *(int *)(camera_offset + 0x1b80) + -1;
  result_flag = distance_result;
  if (update_flag != '\0') {
    temp_result = distance_result;
    if (0 < *register_RSI) {
      do {
        engine_base = *(longlong *)(register_RSI + 2);
        update_flag = FUN_18011aad0(**(uint64_t **)(engine_base + temp_result + 8));
        if (update_flag != '\0') {
          result_flag = engine_base + temp_result;
        }
        loop_counter = (int)distance_result + 1;
        distance_result = (ulonglong)loop_counter;
        temp_result = temp_result + 0x28;
      } while ((int)loop_counter < *register_RSI);
    }
    FUN_18012f0c0();
  }
  *(int32_t *)(register_R15 + 0x100) = position_x;
  *(int32_t *)(register_R15 + 0x104) = position_y;
  return result_flag;
}

/**
 * 查找匹配的对象
 * @param search_param1 搜索参数1
 * @param search_param2 搜索参数2
 * @return 返回找到的对象指针
 */
ulonglong find_matching_object(uint64_t search_param1, uint64_t search_param2)
{
  longlong object_pointer;
  char match_found;
  uint loop_counter;
  ulonglong current_index;
  int *object_array;
  ulonglong search_index;
  longlong transform_data;
  int32_t render_param1;
  int32_t render_param2;
  
  current_index = search_index & 0xffffffff;
  if ((int)search_index < *object_array) {
    search_index = search_index & 0xffffffff;
    do {
      object_pointer = *(longlong *)(object_array + 2);
      match_found = FUN_18011aad0(**(uint64_t **)(object_pointer + search_index + 8), search_param2, 0);
      if (match_found != '\0') {
        search_index = object_pointer + search_index;
      }
      loop_counter = (int)current_index + 1;
      current_index = (ulonglong)loop_counter;
      search_index = search_index + 0x28;
    } while ((int)loop_counter < *object_array);
  }
  FUN_18012f0c0();
  *(int32_t *)(transform_data + 0x100) = render_param1;
  *(int32_t *)(transform_data + 0x104) = render_param2;
  return search_index;
}

/**
 * 遍历对象数组查找匹配项
 * @param search_param1 搜索参数1
 * @param search_param2 搜索参数2
 * @return 返回找到的对象指针
 */
ulonglong traverse_object_array(uint64_t search_param1, uint64_t search_param2)
{
  longlong object_pointer;
  char match_found;
  int loop_counter;
  int *object_array;
  ulonglong current_index;
  longlong transform_data;
  int32_t render_param1;
  int32_t render_param2;
  
  current_index = search_index & 0xffffffff;
  do {
    object_pointer = *(longlong *)(object_array + 2);
    match_found = FUN_18011aad0(**(uint64_t **)(object_pointer + current_index + 8), search_param2, 0);
    if (match_found != '\0') {
      search_index = object_pointer + current_index;
    }
    loop_counter = loop_counter + 1;
    current_index = current_index + 0x28;
  } while (loop_counter < *object_array);
  FUN_18012f0c0();
  *(int32_t *)(transform_data + 0x100) = render_param1;
  *(int32_t *)(transform_data + 0x104) = render_param2;
  return search_index;
}

/**
 * 重置渲染状态
 * 重置对象的渲染参数和变换矩阵
 */
void reset_render_state(void)
{
  longlong transform_data;
  int32_t render_param1;
  int32_t render_param2;
  
  FUN_18012f0c0();
  *(int32_t *)(transform_data + 0x100) = render_param1;
  *(int32_t *)(transform_data + 0x104) = render_param2;
  return;
}

