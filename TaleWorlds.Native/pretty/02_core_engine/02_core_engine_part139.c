#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part139.c - 核心引擎模块第139部分
// 本文件包含4个函数，主要处理游戏对象的位置更新、动画状态管理和渲染相关操作

// 全局变量声明
ulonglong *global_engine_context;          // 全局引擎上下文指针
ulonglong global_render_state;            // 全局渲染状态
float global_time_scale;                  // 全局时间缩放因子
float global_animation_speed;            // 全局动画速度
int global_object_flags;                 // 全局对象标志位

// 函数: void update_object_position_and_animation_state(float time_delta)
// 功能: 根据时间增量更新对象位置和动画状态
// 参数: time_delta - 时间增量
void update_object_position_and_animation_state(float time_delta)

{
  ulonglong *engine_context;
  ulonglong render_state;
  undefined7 animation_flags;
  char animation_enabled;
  byte state_flag;
  char transition_flag;
  int object_id;
  longlong time_param;
  longlong current_object;
  float *position_ptr;
  uint state_index;
  undefined1 *stack_ptr;
  undefined8 stack_data;
  longlong unaff_RBX;
  ulonglong object_context;
  longlong target_object;
  char object_flag;
  char unaff_R14B;
  int frame_count;
  ulonglong animation_id;
  float position_x;
  float position_y;
  float time_threshold;
  float interpolation_factor;
  ulonglong temp_var;
  
  if (time_delta == time_threshold) {
    object_flag = '\x01';
LAB_1801338a5:
    if ((*(char *)(unaff_RBX + 0x134) == (char)target_object) || (*(int *)(unaff_RBX + 0x3c) < 0))
    goto LAB_1801338ca;
    state_flag = 1;
    animation_enabled = check_animation_enabled();
    if ((animation_enabled == '\0') || ((*(byte *)(unaff_RBX + 8) & state_flag) == 0)) goto LAB_1801338ca;
  }
  else {
    object_flag = '\0';
    if (time_param == 0) goto LAB_1801338a5;
LAB_1801338ca:
    state_flag = 0;
  }
  if (((object_flag != '\0') || (state_flag != 0)) &&
     ((current_object = *(longlong *)(unaff_RBX + 0x1c98), current_object != 0 ||
      (current_object = get_animation_object(*(int *)(unaff_RBX + 0x1ab0) + -1,0x80000001,0xffffffff), current_object != 0)))
     ) {
    *(longlong *)(unaff_RBX + 0x1ce0) = current_object;
    *(longlong *)(unaff_RBX + 0x1cd8) = current_object;
    *(byte *)(unaff_RBX + 0x1cf8) = state_flag ^ 1;
    *(uint *)(unaff_RBX + 0x1cc0) = (state_flag ^ 1) + 3;
    *(ulonglong *)(unaff_RBX + 0x1cf0) = animation_id;
  }
  interpolation_factor = *(float *)(unaff_RBX + 0x18) + *(float *)(unaff_RBX + 0x1cf0);
  *(float *)(unaff_RBX + 0x1cf0) = interpolation_factor;
  frame_count = (int)animation_id;
  if ((*(longlong *)(unaff_RBX + 0x1cd8) != target_object) && (*(int *)(unaff_RBX + 0x1cc0) == 4)) {
    interpolation_factor = (interpolation_factor - 0.2) * 20.0;
    if (time_threshold <= interpolation_factor) {
      if (1.0 <= interpolation_factor) {
        interpolation_factor = 1.0;
      }
    }
    else {
      interpolation_factor = 0.0;
    }
    if (interpolation_factor <= *(float *)(unaff_RBX + 0x1cf4)) {
      interpolation_factor = *(float *)(unaff_RBX + 0x1cf4);
    }
    *(float *)(unaff_RBX + 0x1cf4) = interpolation_factor;
    position_y = *(float *)(unaff_RBX + 0x14b8);
    if (time_threshold <= position_y) {
      object_id = calculate_animation_weight(position_y,position_y - *(float *)(unaff_RBX + 0x18),
                                  *(undefined4 *)(unaff_RBX + 0x90),
                                  *(float *)(unaff_RBX + 0x94) + *(float *)(unaff_RBX + 0x94));
      position_y = (float)object_id;
    }
    else {
      position_y = 0.0;
    }
    position_x = *(float *)(unaff_RBX + 0x14bc);
    if (time_threshold <= position_x) {
      object_id = calculate_animation_weight(position_x,position_x - *(float *)(unaff_RBX + 0x18),
                                  *(undefined4 *)(unaff_RBX + 0x90),
                                  *(float *)(unaff_RBX + 0x94) + *(float *)(unaff_RBX + 0x94));
      position_x = (float)object_id;
    }
    else {
      position_x = 0.0;
    }
    animation_flags = (undefined7)(animation_id >> 8);
    if ((int)CONCAT71(animation_flags,time_threshold < position_y) != (int)CONCAT71(animation_flags,time_threshold < position_x))
    {
      trigger_animation_state_update();
      *(undefined4 *)(unaff_RBX + 0x1cf4) = 0x3f800000;
      interpolation_factor = 1.0;
    }
    if (*(float *)(unaff_RBX + 0x344) <= time_threshold) {
      state_flag = interpolation_factor < 1.0 & *(byte *)(unaff_RBX + 0x1cf8);
      *(byte *)(unaff_RBX + 0x1cf8) = state_flag;
      if ((state_flag == 0) || (*(longlong *)(unaff_RBX + 0x1c98) == target_object)) {
        if (state_flag == 0) {
          target_object = *(longlong *)(unaff_RBX + 0x1cd8);
        }
      }
      else {
        unaff_R14B = '\x01';
      }
      *(ulonglong *)(unaff_RBX + 0x1cd8) = animation_id;
    }
  }
  current_object = *(longlong *)(unaff_RBX + 0x1cd8);
  object_flag = (char)animation_id;
  if ((current_object != 0) && (*(int *)(unaff_RBX + 0x1cc0) == 3)) {
    interpolation_factor = (*(float *)(unaff_RBX + 0x1cf0) - 0.2) * 20.0;
    if (time_threshold <= interpolation_factor) {
      if (1.0 <= interpolation_factor) {
        interpolation_factor = 1.0;
      }
    }
    else {
      interpolation_factor = 0.0;
    }
    if (interpolation_factor <= *(float *)(unaff_RBX + 0x1cf4)) {
      interpolation_factor = *(float *)(unaff_RBX + 0x1cf4);
    }
    *(float *)(unaff_RBX + 0x1cf4) = interpolation_factor;
    if (*(int *)(unaff_RBX + 0x3c) < 0) {
      animation_enabled = '\0';
    }
    else {
      animation_enabled = check_animation_enabled(*(int *)(unaff_RBX + 0x3c),1);
    }
    if (animation_enabled != '\0') {
      trigger_animation_state_update();
      current_object = *(longlong *)(unaff_RBX + 0x1cd8);
    }
    if (*(char *)(unaff_RBX + 0x134) == object_flag) {
      target_object = current_object;
    }
  }
  if ((time_threshold <= *(float *)(unaff_RBX + 0x14c8)) &&
     (*(float *)(unaff_RBX + 0x14c8) == time_threshold)) {
    *(undefined1 *)(unaff_RBX + 0x1cf8) = 1;
  }
  if ((((*(int *)(unaff_RBX + 0x1b2c) == frame_count) || (*(char *)(unaff_RBX + 0x1b3d) != object_flag)) &&
      (*(char *)(unaff_RBX + 0x1cf8) != object_flag)) &&
     ((*(float *)(unaff_RBX + 0x14c8) < time_threshold &&
      (time_threshold < *(float *)(unaff_RBX + 0x151c) ||
       time_threshold == *(float *)(unaff_RBX + 0x151c))))) {
    if ((*(float *)(unaff_RBX + 0x118) <= -256000.0 && *(float *)(unaff_RBX + 0x118) != -256000.0)
       || (*(float *)(unaff_RBX + 0x11c) <= -256000.0 && *(float *)(unaff_RBX + 0x11c) != -256000.0)
       ) {
      animation_enabled = '\0';
    }
    else {
      animation_enabled = '\x01';
    }
    position_ptr = (float *)(unaff_RBX + 0x3b4);
    if (position_ptr == (float *)0x0) {
      position_ptr = (float *)(unaff_RBX + 0x118);
    }
    if ((*position_ptr <= -256000.0 && *position_ptr != -256000.0) ||
       (position_ptr[1] <= -256000.0 && position_ptr[1] != -256000.0)) {
      transition_flag = '\0';
    }
    else {
      transition_flag = '\x01';
    }
    if (animation_enabled == transition_flag) {
      unaff_R14B = '\x01';
    }
  }
  if ((current_object != 0) && ((*(byte *)(current_object + 0xc) & 4) == 0)) {
    if (*(int *)(unaff_RBX + 0x1cc0) == 3) {
      if (*(char *)(unaff_RBX + 0x135) == object_flag) {
        stack_data = 1;
        stack_ptr = &stack0x000000a0;
LAB_180133c1e:
        position_ptr = (float *)get_animation_transform(stack_ptr,stack_data,0,0);
        interpolation_factor = position_ptr[1];
        if ((*position_ptr != time_threshold) || (interpolation_factor != time_threshold)) {
          position_y = *(float *)(unaff_RBX + 0xbc);
          if (*(float *)(unaff_RBX + 0xb8) <= *(float *)(unaff_RBX + 0xbc)) {
            position_y = *(float *)(unaff_RBX + 0xb8);
          }
          current_object = *(longlong *)(current_object + 0x3a0);
          position_y = (float)(int)(position_y * *(float *)(unaff_RBX + 0x18) * 800.0);
          *(float *)(current_object + 0x40) = *position_ptr * position_y + *(float *)(current_object + 0x40);
          *(float *)(current_object + 0x44) = interpolation_factor * position_y + *(float *)(current_object + 0x44);
          *(undefined1 *)(unaff_RBX + 0x1d07) = 1;
          if (((*(uint *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0xc) & 0x100) == 0) &&
             (*(float *)(unaff_RBX + 0x2e04) <= time_threshold)) {
            *(undefined4 *)(unaff_RBX + 0x2e04) = *(undefined4 *)(unaff_RBX + 0x1c);
          }
        }
      }
    }
    else if (*(int *)(unaff_RBX + 0x1cc0) == 4) {
      stack_data = 4;
      stack_ptr = &stack0x000000a8;
      goto LAB_180133c1e;
    }
  }
  if (target_object == 0) goto LAB_180133d4a;
  current_object = *(longlong *)(unaff_RBX + 0x1c98);
  object_context = animation_id;
  if (current_object == 0) {
LAB_180133ce2:
    *(undefined2 *)(unaff_RBX + 0x1d06) = 0x100;
    if (*(longlong *)(target_object + 0x3c0) != 0) {
      target_object = *(longlong *)(target_object + 0x3c0);
    }
    update_object_state(target_object);
    update_render_context(target_object);
    if (*(int *)(target_object + 0x3c8) == frame_count) {
      set_object_frame(target_object,0);
    }
    if (*(int *)(target_object + 0x174) == 2) {
      *(undefined4 *)(unaff_RBX + 0x1cfc) = 1;
    }
    if ((*(ulonglong *)(target_object + 0x28) != object_context) &&
       (*(code **)(unaff_RBX + 0x1578) != (code *)0x0)) {
      (**(code **)(unaff_RBX + 0x1578))();
    }
  }
  else if (target_object != *(longlong *)(current_object + 0x3a8)) {
    object_context = *(ulonglong *)(current_object + 0x28);
    goto LAB_180133ce2;
  }
  *(ulonglong *)(unaff_RBX + 0x1cd8) = animation_id;
LAB_180133d4a:
  if ((unaff_R14B != '\0') && (object_context = *(ulonglong *)(unaff_RBX + 0x1c98), object_context != 0)) {
    engine_context = (ulonglong *)(object_context + 0x398);
    temp_var = *engine_context;
    render_state = object_context;
    while (((temp_var != animation_id && ((*(byte *)(render_state + 0x174) & 2) == 0)) &&
           ((*(uint *)(render_state + 0xc) & 0x15000000) == 0x1000000))) {
      render_state = *engine_context;
      engine_context = (ulonglong *)(render_state + 0x398);
      temp_var = *engine_context;
    }
    if (render_state != object_context) {
      update_render_context(render_state);
      *(ulonglong *)(render_state + 0x3c0) = object_context;
      object_context = *(ulonglong *)(unaff_RBX + 0x1c98);
    }
    *(undefined2 *)(unaff_RBX + 0x1d06) = 0x100;
    if ((*(byte *)(object_context + 0x174) & 2) == 0) {
      temp_var = animation_id & 0xffffffff;
    }
    else {
      state_index = *(uint *)(unaff_RBX + 0x1cfc) ^ 1;
      temp_var = (ulonglong)state_index;
      if ((state_index == 1) && (*(ulonglong *)(render_state + 0x410) == animation_id)) {
        *(int *)(object_context + 0x3cc) = frame_count;
      }
    }
    set_animation_state(temp_var);
  }
  return;
}

// 函数: void process_animation_state_transition(void)
// 功能: 处理动画状态转换逻辑
void process_animation_state_transition(void)

{
  ulonglong *engine_context;
  ulonglong render_state;
  undefined7 animation_flags;
  byte state_flag;
  char animation_enabled;
  char transition_flag;
  int object_id;
  float *position_ptr;
  uint state_index;
  undefined1 *stack_ptr;
  undefined8 stack_data;
  longlong unaff_RBX;
  longlong current_object;
  ulonglong object_context;
  longlong target_object;
  char unaff_R14B;
  char object_flag;
  ulonglong animation_id;
  float position_x;
  float position_y;
  float time_threshold;
  float interpolation_factor;
  float max_threshold;
  float min_threshold;
  ulonglong temp_var;
  
  // 计算动画过渡插值因子
  interpolation_factor = global_animation_speed * 20.0;
  if (min_threshold <= interpolation_factor) {
    if (max_threshold <= interpolation_factor) {
      interpolation_factor = max_threshold;
    }
  }
  else {
    interpolation_factor = 0.0;
  }
  // 更新动画插值因子
  if (interpolation_factor <= *(float *)(object_context + 0x1cf4)) {
    interpolation_factor = *(float *)(object_context + 0x1cf4);
  }
  *(float *)(object_context + 0x1cf4) = interpolation_factor;
  // 计算水平和垂直动画权重
  position_y = *(float *)(object_context + 0x14b8);
  if (min_threshold <= position_y) {
    object_id = calculate_animation_weight(position_y,position_y - *(float *)(object_context + 0x18),
                                *(undefined4 *)(object_context + 0x90),
                                *(float *)(object_context + 0x94) + *(float *)(object_context + 0x94));
    position_y = (float)object_id;
  }
  else {
    position_y = 0.0;
  }
  position_x = *(float *)(object_context + 0x14bc);
  if (min_threshold <= position_x) {
    object_id = calculate_animation_weight(position_x,position_x - *(float *)(object_context + 0x18),
                                *(undefined4 *)(object_context + 0x90),
                                *(float *)(object_context + 0x94) + *(float *)(object_context + 0x94));
    position_x = (float)object_id;
  }
  else {
    position_x = 0.0;
  }
  // 检查动画权重变化并触发状态更新
  state_index = (int)animation_id;
  animation_flags = (undefined7)(animation_id >> 8);
  if ((int)CONCAT71(animation_flags,min_threshold < position_y) != (int)CONCAT71(animation_flags,min_threshold < position_x)) {
    trigger_animation_state_update();
    *(undefined4 *)(object_context + 0x1cf4) = 0x3f800000;
    interpolation_factor = max_threshold;
  }
  // 更新动画状态标志
  if (*(float *)(object_context + 0x344) <= min_threshold) {
    state_flag = interpolation_factor < max_threshold & *(byte *)(object_context + 0x1cf8);
    *(byte *)(object_context + 0x1cf8) = state_flag;
    if ((state_flag == 0) || (*(longlong *)(object_context + 0x1c98) == target_object)) {
      if (state_flag == 0) {
        target_object = *(longlong *)(object_context + 0x1cd8);
      }
    }
    else {
      unaff_R14B = '\x01';
    }
    *(ulonglong *)(object_context + 0x1cd8) = animation_id;
  }
  current_object = *(longlong *)(unaff_RBX + 0x1cd8);
  object_flag = (char)animation_id;
  if ((current_object != 0) && (*(int *)(unaff_RBX + 0x1cc0) == 3)) {
    interpolation_factor = (*(float *)(unaff_RBX + 0x1cf0) - 0.2) * 20.0;
    if (min_threshold <= interpolation_factor) {
      if (max_threshold <= interpolation_factor) {
        interpolation_factor = max_threshold;
      }
    }
    else {
      interpolation_factor = 0.0;
    }
    if (interpolation_factor <= *(float *)(unaff_RBX + 0x1cf4)) {
      interpolation_factor = *(float *)(unaff_RBX + 0x1cf4);
    }
    *(float *)(unaff_RBX + 0x1cf4) = interpolation_factor;
    if (*(int *)(unaff_RBX + 0x3c) < 0) {
      animation_enabled = '\0';
    }
    else {
      animation_enabled = check_animation_enabled(*(int *)(unaff_RBX + 0x3c),1);
    }
    if (animation_enabled != '\0') {
      trigger_animation_state_update();
      current_object = *(longlong *)(unaff_RBX + 0x1cd8);
    }
    if (*(char *)(unaff_RBX + 0x134) == object_flag) {
      target_object = current_object;
    }
  }
  if ((min_threshold <= *(float *)(unaff_RBX + 0x14c8)) &&
     (*(float *)(unaff_RBX + 0x14c8) == min_threshold)) {
    *(undefined1 *)(unaff_RBX + 0x1cf8) = 1;
  }
  if ((((*(int *)(unaff_RBX + 0x1b2c) == object_id) || (*(char *)(unaff_RBX + 0x1b3d) != object_flag)) &&
      (*(char *)(unaff_RBX + 0x1cf8) != object_flag)) &&
     ((*(float *)(unaff_RBX + 0x14c8) < min_threshold &&
      (min_threshold < *(float *)(unaff_RBX + 0x151c) ||
       min_threshold == *(float *)(unaff_RBX + 0x151c))))) {
    if ((*(float *)(unaff_RBX + 0x118) <= -256000.0 && *(float *)(unaff_RBX + 0x118) != -256000.0)
       || (*(float *)(unaff_RBX + 0x11c) <= -256000.0 && *(float *)(unaff_RBX + 0x11c) != -256000.0)
       ) {
      animation_enabled = '\0';
    }
    else {
      animation_enabled = '\x01';
    }
    position_ptr = (float *)(unaff_RBX + 0x3b4);
    if (position_ptr == (float *)0x0) {
      position_ptr = (float *)(unaff_RBX + 0x118);
    }
    if ((*position_ptr <= -256000.0 && *position_ptr != -256000.0) ||
       (position_ptr[1] <= -256000.0 && position_ptr[1] != -256000.0)) {
      transition_flag = '\0';
    }
    else {
      transition_flag = '\x01';
    }
    if (animation_enabled == transition_flag) {
      unaff_R14B = '\x01';
    }
  }
  if ((current_object != 0) && ((*(byte *)(current_object + 0xc) & 4) == 0)) {
    if (*(int *)(unaff_RBX + 0x1cc0) == 3) {
      if (*(char *)(unaff_RBX + 0x135) == object_flag) {
        stack_data = 1;
        stack_ptr = &stack0x000000a0;
LAB_180133c1e:
        position_ptr = (float *)get_animation_transform(stack_ptr,stack_data,0,0);
        interpolation_factor = position_ptr[1];
        if ((*position_ptr != min_threshold) || (interpolation_factor != min_threshold)) {
          position_y = *(float *)(unaff_RBX + 0xbc);
          if (*(float *)(unaff_RBX + 0xb8) <= *(float *)(unaff_RBX + 0xbc)) {
            position_y = *(float *)(unaff_RBX + 0xb8);
          }
          current_object = *(longlong *)(current_object + 0x3a0);
          position_y = (float)(int)(position_y * *(float *)(unaff_RBX + 0x18) * 800.0);
          *(float *)(current_object + 0x40) = *position_ptr * position_y + *(float *)(current_object + 0x40);
          *(float *)(current_object + 0x44) = interpolation_factor * position_y + *(float *)(current_object + 0x44);
          *(undefined1 *)(unaff_RBX + 0x1d07) = 1;
          if (((*(uint *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0xc) & 0x100) == 0) &&
             (*(float *)(unaff_RBX + 0x2e04) <= min_threshold)) {
            *(undefined4 *)(unaff_RBX + 0x2e04) = *(undefined4 *)(unaff_RBX + 0x1c);
          }
        }
      }
    }
    else if (*(int *)(unaff_RBX + 0x1cc0) == 4) {
      stack_data = 4;
      stack_ptr = &stack0x000000a8;
      goto LAB_180133c1e;
    }
  }
  if (target_object == 0) goto LAB_180133d4a;
  current_object = *(longlong *)(unaff_RBX + 0x1c98);
  object_context = animation_id;
  if (current_object == 0) {
LAB_180133ce2:
    *(undefined2 *)(unaff_RBX + 0x1d06) = 0x100;
    if (*(longlong *)(target_object + 0x3c0) != 0) {
      target_object = *(longlong *)(target_object + 0x3c0);
    }
    update_object_state(target_object);
    update_render_context(target_object);
    if (*(int *)(target_object + 0x3c8) == object_id) {
      set_object_frame(target_object,0);
    }
    if (*(int *)(target_object + 0x174) == 2) {
      *(undefined4 *)(unaff_RBX + 0x1cfc) = 1;
    }
    if ((*(ulonglong *)(target_object + 0x28) != object_context) &&
       (*(code **)(unaff_RBX + 0x1578) != (code *)0x0)) {
      (**(code **)(unaff_RBX + 0x1578))();
    }
  }
  else if (target_object != *(longlong *)(current_object + 0x3a8)) {
    object_context = *(ulonglong *)(current_object + 0x28);
    goto LAB_180133ce2;
  }
  *(ulonglong *)(unaff_RBX + 0x1cd8) = animation_id;
LAB_180133d4a:
  if ((unaff_R14B != '\0') && (object_context = *(ulonglong *)(unaff_RBX + 0x1c98), object_context != 0)) {
    engine_context = (ulonglong *)(object_context + 0x398);
    temp_var = *engine_context;
    render_state = object_context;
    while (((temp_var != animation_id && ((*(byte *)(render_state + 0x174) & 2) == 0)) &&
           ((*(uint *)(render_state + 0xc) & 0x15000000) == 0x1000000))) {
      render_state = *engine_context;
      engine_context = (ulonglong *)(render_state + 0x398);
      temp_var = *engine_context;
    }
    if (render_state != object_context) {
      update_render_context(render_state);
      *(ulonglong *)(render_state + 0x3c0) = object_context;
      object_context = *(ulonglong *)(unaff_RBX + 0x1c98);
    }
    *(undefined2 *)(unaff_RBX + 0x1d06) = 0x100;
    if ((*(byte *)(object_context + 0x174) & 2) == 0) {
      temp_var = animation_id & 0xffffffff;
    }
    else {
      state_index = *(uint *)(unaff_RBX + 0x1cfc) ^ 1;
      temp_var = (ulonglong)state_index;
      if ((state_index == 1) && (*(ulonglong *)(render_state + 0x410) == animation_id)) {
        *(int *)(object_context + 0x3cc) = object_id;
      }
    }
    set_animation_state(temp_var);
  }
  return;
}

// 函数: void reset_animation_state(void)
// 功能: 重置动画状态到初始值
void reset_animation_state(void)

{
  ulonglong *engine_context;
  ulonglong render_state;
  char animation_enabled;
  char transition_flag;
  float *position_ptr;
  uint state_index;
  undefined1 *stack_ptr;
  undefined8 stack_data;
  longlong unaff_RBX;
  longlong current_object;
  ulonglong object_context;
  longlong target_object;
  char unaff_R14B;
  char object_flag;
  int object_id;
  ulonglong animation_id;
  float position_x;
  float position_y;
  float time_threshold;
  float interpolation_factor;
  float max_threshold;
  float min_threshold;
  ulonglong temp_var;
  
  // 触发动画状态更新并重置插值因子
  trigger_animation_state_update();
  *(undefined4 *)(object_context + 0x1cf4) = 0x3f800000;
  if (*(float *)(object_context + 0x344) <= min_threshold) {
    *(undefined1 *)(object_context + 0x1cf8) = 0;
    target_object = *(longlong *)(object_context + 0x1cd8);
    *(ulonglong *)(object_context + 0x1cd8) = animation_id;
  }
  // 获取当前动画对象并计算重置插值
  current_object = *(longlong *)(object_context + 0x1cd8);
  object_flag = (char)animation_id;
  if ((current_object != 0) && (*(int *)(object_context + 0x1cc0) == 3)) {
    interpolation_factor = (*(float *)(object_context + 0x1cf0) - 0.2) * 20.0;
    if (min_threshold <= interpolation_factor) {
      if (max_threshold <= interpolation_factor) {
        interpolation_factor = max_threshold;
      }
    }
    else {
      interpolation_factor = 0.0;
    }
    if (interpolation_factor <= *(float *)(object_context + 0x1cf4)) {
      interpolation_factor = *(float *)(object_context + 0x1cf4);
    }
    *(float *)(object_context + 0x1cf4) = interpolation_factor;
    // 检查动画状态并更新目标对象
    if (*(int *)(object_context + 0x3c) < 0) {
      animation_enabled = '\0';
    }
    else {
      animation_enabled = check_animation_enabled(*(int *)(object_context + 0x3c),1);
    }
    if (animation_enabled != '\0') {
      trigger_animation_state_update();
      current_object = *(longlong *)(object_context + 0x1cd8);
    }
    if (*(char *)(object_context + 0x134) == object_flag) {
      target_object = current_object;
    }
  }
  if ((min_threshold <= *(float *)(unaff_RBX + 0x14c8)) &&
     (*(float *)(unaff_RBX + 0x14c8) == min_threshold)) {
    *(undefined1 *)(unaff_RBX + 0x1cf8) = 1;
  }
  object_id = (int)animation_id;
  if ((((*(int *)(unaff_RBX + 0x1b2c) == object_id) || (*(char *)(unaff_RBX + 0x1b3d) != object_flag)) &&
      (*(char *)(unaff_RBX + 0x1cf8) != object_flag)) &&
     ((*(float *)(unaff_RBX + 0x14c8) < min_threshold &&
      (min_threshold < *(float *)(unaff_RBX + 0x151c) ||
       min_threshold == *(float *)(unaff_RBX + 0x151c))))) {
    if ((*(float *)(unaff_RBX + 0x118) <= -256000.0 && *(float *)(unaff_RBX + 0x118) != -256000.0)
       || (*(float *)(unaff_RBX + 0x11c) <= -256000.0 && *(float *)(unaff_RBX + 0x11c) != -256000.0)
       ) {
      animation_enabled = '\0';
    }
    else {
      animation_enabled = '\x01';
    }
    position_ptr = (float *)(unaff_RBX + 0x3b4);
    if (position_ptr == (float *)0x0) {
      position_ptr = (float *)(unaff_RBX + 0x118);
    }
    if ((*position_ptr <= -256000.0 && *position_ptr != -256000.0) ||
       (position_ptr[1] <= -256000.0 && position_ptr[1] != -256000.0)) {
      transition_flag = '\0';
    }
    else {
      transition_flag = '\x01';
    }
    if (animation_enabled == transition_flag) {
      unaff_R14B = '\x01';
    }
  }
  if ((current_object != 0) && ((*(byte *)(current_object + 0xc) & 4) == 0)) {
    if (*(int *)(unaff_RBX + 0x1cc0) == 3) {
      if (*(char *)(unaff_RBX + 0x135) == object_flag) {
        stack_data = 1;
        stack_ptr = &stack0x000000a0;
LAB_180133c1e:
        position_ptr = (float *)get_animation_transform(stack_ptr,stack_data,0,0);
        position_x = position_ptr[1];
        if ((*position_ptr != min_threshold) || (position_x != min_threshold)) {
          position_y = *(float *)(unaff_RBX + 0xbc);
          if (*(float *)(unaff_RBX + 0xb8) <= *(float *)(unaff_RBX + 0xbc)) {
            position_y = *(float *)(unaff_RBX + 0xb8);
          }
          current_object = *(longlong *)(current_object + 0x3a0);
          position_y = (float)(int)(position_y * *(float *)(unaff_RBX + 0x18) * 800.0);
          *(float *)(current_object + 0x40) = *position_ptr * position_y + *(float *)(current_object + 0x40);
          *(float *)(current_object + 0x44) = position_x * position_y + *(float *)(current_object + 0x44);
          *(undefined1 *)(unaff_RBX + 0x1d07) = 1;
          if (((*(uint *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0xc) & 0x100) == 0) &&
             (*(float *)(unaff_RBX + 0x2e04) <= min_threshold)) {
            *(undefined4 *)(unaff_RBX + 0x2e04) = *(undefined4 *)(unaff_RBX + 0x1c);
          }
        }
      }
    }
    else if (*(int *)(unaff_RBX + 0x1cc0) == 4) {
      stack_data = 4;
      stack_ptr = &stack0x000000a8;
      goto LAB_180133c1e;
    }
  }
  if (target_object == 0) goto LAB_180133d4a;
  current_object = *(longlong *)(unaff_RBX + 0x1c98);
  object_context = animation_id;
  if (current_object == 0) {
LAB_180133ce2:
    *(undefined2 *)(unaff_RBX + 0x1d06) = 0x100;
    if (*(longlong *)(target_object + 0x3c0) != 0) {
      target_object = *(longlong *)(target_object + 0x3c0);
    }
    update_object_state(target_object);
    update_render_context(target_object);
    if (*(int *)(target_object + 0x3c8) == object_id) {
      set_object_frame(target_object,0);
    }
    if (*(int *)(target_object + 0x174) == 2) {
      *(undefined4 *)(unaff_RBX + 0x1cfc) = 1;
    }
    if ((*(ulonglong *)(target_object + 0x28) != object_context) &&
       (*(code **)(unaff_RBX + 0x1578) != (code *)0x0)) {
      (**(code **)(unaff_RBX + 0x1578))();
    }
  }
  else if (target_object != *(longlong *)(current_object + 0x3a8)) {
    object_context = *(ulonglong *)(current_object + 0x28);
    goto LAB_180133ce2;
  }
  *(ulonglong *)(unaff_RBX + 0x1cd8) = animation_id;
LAB_180133d4a:
  if ((unaff_R14B != '\0') && (object_context = *(ulonglong *)(unaff_RBX + 0x1c98), object_context != 0)) {
    engine_context = (ulonglong *)(object_context + 0x398);
    temp_var = *engine_context;
    render_state = object_context;
    while (((temp_var != animation_id && ((*(byte *)(render_state + 0x174) & 2) == 0)) &&
           ((*(uint *)(render_state + 0xc) & 0x15000000) == 0x1000000))) {
      render_state = *engine_context;
      engine_context = (ulonglong *)(render_state + 0x398);
      temp_var = *engine_context;
    }
    if (render_state != object_context) {
      update_render_context(render_state);
      *(ulonglong *)(render_state + 0x3c0) = object_context;
      object_context = *(ulonglong *)(unaff_RBX + 0x1c98);
    }
    *(undefined2 *)(unaff_RBX + 0x1d06) = 0x100;
    if ((*(byte *)(object_context + 0x174) & 2) == 0) {
      temp_var = animation_id & 0xffffffff;
    }
    else {
      state_index = *(uint *)(unaff_RBX + 0x1cfc) ^ 1;
      temp_var = (ulonglong)state_index;
      if ((state_index == 1) && (*(ulonglong *)(render_state + 0x410) == animation_id)) {
        *(int *)(object_context + 0x3cc) = object_id;
      }
    }
    set_animation_state(temp_var);
  }
  return;
}

// 函数: void update_animation_with_parameters(void)
// 功能: 使用指定参数更新动画状态
void update_animation_with_parameters(void)

{
  ulonglong *engine_context;
  longlong current_object;
  ulonglong object_context;
  char animation_enabled;
  char transition_flag;
  float *position_ptr;
  uint state_index;
  undefined1 *stack_ptr;
  longlong unaff_RBX;
  longlong animation_parameter;
  ulonglong render_state;
  longlong target_object;
  char object_flag;
  uint parameter_index;
  char unaff_R14B;
  char parameter_flag;
  int object_id;
  ulonglong animation_id;
  float position_x;
  float position_y;
  float time_threshold;
  float interpolation_factor;
  float max_threshold;
  float min_threshold;
  ulonglong temp_var;
  
  // 获取动画参数并计算更新因子
  parameter_flag = (char)animation_parameter;
  object_flag = (char)animation_id;
  if (*(int *)(object_context + 0x1cc0) == 3) {
    interpolation_factor = (*(float *)(object_context + 0x1cf0) - 0.2) * 20.0;
    if (min_threshold <= interpolation_factor) {
      if (max_threshold <= interpolation_factor) {
        interpolation_factor = max_threshold;
      }
    }
    else {
      interpolation_factor = 0.0;
    }
    if (interpolation_factor <= *(float *)(object_context + 0x1cf4)) {
      interpolation_factor = *(float *)(object_context + 0x1cf4);
    }
    *(float *)(object_context + 0x1cf4) = interpolation_factor;
    // 使用参数检查动画状态并更新
    if (*(int *)(object_context + 0x3c) < 0) {
      animation_enabled = '\0';
    }
    else {
      animation_enabled = check_animation_enabled(*(int *)(object_context + 0x3c),animation_parameter & 0xff);
    }
    if (animation_enabled != '\0') {
      trigger_animation_state_update();
      current_object = *(longlong *)(object_context + 0x1cd8);
    }
    if (*(char *)(object_context + 0x134) == object_flag) {
      target_object = current_object;
    }
  }
  // 更新动画状态标志
  if ((min_threshold <= *(float *)(object_context + 0x14c8)) &&
     (*(float *)(object_context + 0x14c8) == min_threshold)) {
    *(char *)(object_context + 0x1cf8) = parameter_flag;
  }
  object_id = (int)animation_id;
  if ((((*(int *)(unaff_RBX + 0x1b2c) == object_id) || (*(char *)(unaff_RBX + 0x1b3d) != parameter_flag)) &&
      (*(char *)(unaff_RBX + 0x1cf8) != parameter_flag)) &&
     ((*(float *)(unaff_RBX + 0x14c8) < min_threshold &&
      (min_threshold < *(float *)(unaff_RBX + 0x151c) ||
       min_threshold == *(float *)(unaff_RBX + 0x151c))))) {
    if ((*(float *)(unaff_RBX + 0x118) <= -256000.0 && *(float *)(unaff_RBX + 0x118) != -256000.0)
       || (transition_flag = object_flag,
          *(float *)(unaff_RBX + 0x11c) <= -256000.0 && *(float *)(unaff_RBX + 0x11c) != -256000.0))
    {
      transition_flag = '\0';
    }
    position_ptr = (float *)(unaff_RBX + 0x3b4);
    if (position_ptr == (float *)0x0) {
      position_ptr = (float *)(unaff_RBX + 0x118);
    }
    if ((*position_ptr <= -256000.0 && *position_ptr != -256000.0) ||
       (transition_flag = object_flag, position_ptr[1] <= -256000.0 && position_ptr[1] != -256000.0)) {
      transition_flag = '\0';
    }
    if (animation_enabled == transition_flag) {
      unaff_R14B = object_flag;
    }
  }
  if ((animation_parameter != 0) && ((*(byte *)(animation_parameter + 0xc) & 4) == 0)) {
    if (*(int *)(unaff_RBX + 0x1cc0) == 3) {
      if (*(char *)(unaff_RBX + 0x135) == parameter_flag) {
        stack_ptr = &stack0x000000a0;
        state_index = parameter_index;
LAB_180133c1e:
        position_ptr = (float *)get_animation_transform(stack_ptr,state_index,0,0);
        position_x = position_ptr[1];
        if ((*position_ptr != min_threshold) || (position_x != min_threshold)) {
          position_y = *(float *)(unaff_RBX + 0xbc);
          if (*(float *)(unaff_RBX + 0xb8) <= *(float *)(unaff_RBX + 0xbc)) {
            position_y = *(float *)(unaff_RBX + 0xb8);
          }
          current_object = *(longlong *)(animation_parameter + 0x3a0);
          position_y = (float)(int)(position_y * *(float *)(unaff_RBX + 0x18) * 800.0);
          *(float *)(current_object + 0x40) = *position_ptr * position_y + *(float *)(current_object + 0x40);
          *(float *)(current_object + 0x44) = position_x * position_y + *(float *)(current_object + 0x44);
          *(char *)(unaff_RBX + 0x1d07) = object_flag;
          if (((*(uint *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0xc) & 0x100) == 0) &&
             (*(float *)(unaff_RBX + 0x2e04) <= min_threshold)) {
            *(undefined4 *)(unaff_RBX + 0x2e04) = *(undefined4 *)(unaff_RBX + 0x1c);
          }
        }
      }
    }
    else if (*(int *)(unaff_RBX + 0x1cc0) == 4) {
      state_index = 4;
      stack_ptr = &stack0x000000a8;
      goto LAB_180133c1e;
    }
  }
  if (target_object == 0) goto LAB_180133d4a;
  current_object = *(longlong *)(unaff_RBX + 0x1c98);
  object_context = animation_id;
  if (current_object == 0) {
LAB_180133ce2:
    *(undefined2 *)(unaff_RBX + 0x1d06) = 0x100;
    if (*(longlong *)(target_object + 0x3c0) != 0) {
      target_object = *(longlong *)(target_object + 0x3c0);
    }
    update_object_state(target_object);
    update_render_context(target_object);
    if (*(int *)(target_object + 0x3c8) == object_id) {
      set_object_frame(target_object,0);
    }
    if (*(int *)(target_object + 0x174) == 2) {
      *(uint *)(unaff_RBX + 0x1cfc) = parameter_index;
    }
    if ((*(ulonglong *)(target_object + 0x28) != object_context) &&
       (*(code **)(unaff_RBX + 0x1578) != (code *)0x0)) {
      (**(code **)(unaff_RBX + 0x1578))();
    }
  }
  else if (target_object != *(longlong *)(current_object + 0x3a8)) {
    object_context = *(ulonglong *)(current_object + 0x28);
    goto LAB_180133ce2;
  }
  *(ulonglong *)(unaff_RBX + 0x1cd8) = animation_id;
LAB_180133d4a:
  if ((unaff_R14B != '\0') && (object_context = *(ulonglong *)(unaff_RBX + 0x1c98), object_context != 0)) {
    engine_context = (ulonglong *)(object_context + 0x398);
    temp_var = *engine_context;
    render_state = object_context;
    while (((temp_var != animation_id && ((*(byte *)(render_state + 0x174) & 2) == 0)) &&
           ((*(uint *)(render_state + 0xc) & 0x15000000) == 0x1000000))) {
      render_state = *engine_context;
      engine_context = (ulonglong *)(render_state + 0x398);
      temp_var = *engine_context;
    }
    if (render_state != object_context) {
      update_render_context(render_state);
      *(ulonglong *)(render_state + 0x3c0) = object_context;
      object_context = *(ulonglong *)(unaff_RBX + 0x1c98);
    }
    *(undefined2 *)(unaff_RBX + 0x1d06) = 0x100;
    if ((*(byte *)(object_context + 0x174) & 2) == 0) {
      temp_var = animation_id & 0xffffffff;
    }
    else {
      state_index = *(uint *)(unaff_RBX + 0x1cfc) ^ 1;
      temp_var = (ulonglong)state_index;
      if ((state_index == 1) && (*(ulonglong *)(render_state + 0x410) == animation_id)) {
        *(int *)(object_context + 0x3cc) = object_id;
      }
    }
    set_animation_state(temp_var);
  }
  return;
}
