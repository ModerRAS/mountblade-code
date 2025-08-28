#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part013.c - UI系统高级动画控制和插值处理模块
// 包含2个核心函数：UI系统高级动画控制器和UI系统参数化动画处理器
// 主要功能：UI动画插值、状态转换、参数化动画处理、矩阵变换、平滑过渡

// 常量定义
#define UI_ZERO_FLOAT 0.0f
#define UI_ONE_FLOAT 1.0f
#define UI_HALF_FLOAT 0.5f
#define UI_TWO_FLOAT 2.0f
#define UI_THREE_FLOAT 3.0f
#define UI_FIVE_FLOAT 5.0f
#define UI_TEN_FLOAT 10.0f
#define UI_FIFTEEN_FLOAT 15.0f
#define UI_POINT_TWO_FLOAT 0.2f
#define UI_POINT_SEVEN_FLOAT 0.7f
#define UI_NINE_FIVE_FLOAT 0.95f
#define UI_NINE_FIVE_FLOAT_COMP 0.05f
#define UI_ZERO_ZERO_ONE_FLOAT 0.001f
#define UI_ZERO_ZERO_FIVE_FLOAT 0.005f
#define UI_POINT_ZERO_FIVE_FLOAT 0.05f
#define UI_POINT_FIVE_FLOAT 0.5f
#define UI_THREE_THREE_THREE_FLOAT 3.333333f
#define UI_SIX_FLOAT 6.0f
#define UI_TWELVE_FLOAT 12.0f
#define UI_EIGHT_FLOAT 8.0f
#define UI_PI_HALF_FLOAT 1.5707964f
#define UI_ANGLE_TO_RATIO_FLOAT 0.63661975f
#define UI_MIN_NORMALIZED_FLOAT 1.1754944e-38f
#define UI_MAX_CLAMP_FLOAT 0.999f
#define UI_NEGATIVE_ONE_FLOAT -1.0f
#define UI_POINT_ONE_FLOAT 0.1f
#define UI_NEGATIVE_POINT_ONE_FLOAT -0.1f
#define UI_QUARTER_FLOAT 0.25f
#define UI_FOUR_FLOAT 4.0f

// 函数别名定义
#define ui_system_advanced_animation_controller FUN_180659fa4
#define ui_system_parameterized_animation_processor FUN_18065a3f8

// UI系统高级动画控制器 - 处理复杂的UI动画插值和状态转换
// 该函数实现了高级UI动画控制算法，包括角度插值、平滑过渡、状态管理和矩阵变换
void ui_system_advanced_animation_controller(void)
{
  longlong data_offset;
  undefined3 conversion_flag;
  float *animation_data_ptr;
  int loop_counter;
  int element_index;
  uint64_t animation_state;
  longlong context_ptr;
  char control_flag;
  int32_t render_flag;
  char state_flag_1;
  longlong resource_ptr;
  char state_flag_2;
  float angle_value;
  float interpolation_value;
  float temp_value_1;
  float temp_value_2;
  float temp_value_3;
  float temp_value_4;
  float temp_value_5;
  float temp_value_6;
  float temp_value_7;
  float temp_value_8;
  float temp_value_9;
  int8_t conversion_buffer [16];
  float smooth_value_1;
  float smooth_value_2;
  float base_parameter_1;
  float base_parameter_2;
  float base_parameter_3;
  float base_parameter_4;
  float base_parameter_5;
  float base_parameter_6;
  float control_parameter_1;
  float control_parameter_2;
  float control_parameter_3;
  char stack_control_flag;
  float time_step;
  float input_parameter_1;
  float temp_storage_1;
  float temp_storage_2;
  float temp_storage_3;
  float temp_storage_4;
  float temp_storage_5;
  float animation_buffer [6200];
  uint64_t return_address;
  
  // 初始化动画参数
  *(float *)(resource_ptr + 0x4c) = base_parameter_1;
  angle_value = (float)animation_state;
  temp_value_9 = (float)((ulonglong)animation_state >> 0x20);
  
  // 角度插值计算
  if ((control_parameter_2 != base_parameter_1) || (control_parameter_4 != base_parameter_1)) {
    if (base_parameter_1 <= angle_value * control_parameter_2) {
      if (ABS(angle_value) < ABS(control_parameter_2)) {
        angle_value = control_parameter_2;
      }
    }
    else {
      angle_value = angle_value + control_parameter_2;
    }
    if (base_parameter_1 <= control_parameter_4 * temp_value_9) {
      if (ABS(temp_value_9) < ABS(control_parameter_4)) {
        temp_value_9 = control_parameter_4;
      }
    }
    else {
      temp_value_9 = temp_value_9 + control_parameter_4;
    }
  }
  
  return_address = 0x18065a04d;
  angle_value = (float)atan2f(-angle_value, temp_value_9);
  angle_value = ABS(angle_value);
  if (UI_PI_HALF_FLOAT < angle_value) {
    angle_value = control_parameter_5 - angle_value;
  }
  angle_value = angle_value * UI_ANGLE_TO_RATIO_FLOAT;
  
  // 插值参数计算
  interpolation_value = (base_parameter_3 - *(float *)(context_ptr + 0xc0)) * 0.3f;
  temp_value_9 = base_parameter_1;
  if ((interpolation_value + UI_NINE_FIVE_FLOAT_COMP <= angle_value) && 
      (temp_value_9 = angle_value, UI_NINE_FIVE_FLOAT - interpolation_value < angle_value)) {
    temp_value_9 = base_parameter_3;
  }
  
  // 动画状态更新
  interpolation_value = temp_value_9 - *(float *)(resource_ptr + 0x54);
  smooth_value_1 = ABS(interpolation_value);
  angle_value = temp_value_9;
  if (UI_ZERO_ZERO_ONE_FLOAT <= smooth_value_1) {
    smooth_value_2 = time_step;
    if (interpolation_value < base_parameter_1) {
      smooth_value_2 = -time_step;
    }
    interpolation_value = UI_POINT_ONE_FLOAT;
    if ((UI_POINT_ONE_FLOAT <= smooth_value_1) && (interpolation_value = smooth_value_1, UI_POINT_FIVE_FLOAT <= smooth_value_1)) {
      interpolation_value = UI_POINT_FIVE_FLOAT;
    }
    interpolation_value = smooth_value_2 * interpolation_value * UI_TWELVE_FLOAT;
    if (ABS(interpolation_value) <= smooth_value_1) {
      angle_value = *(float *)(resource_ptr + 0x54) + interpolation_value;
    }
  }
  *(float *)(resource_ptr + 0x54) = angle_value;
  
  // 状态检查和控制
  if ((((base_parameter_2 <= UI_NEGATIVE_POINT_ONE_FLOAT) || (state_flag_1 == '\0')) || (state_flag_2 != '\0')) ||
     (control_parameter_4 <= UI_NEGATIVE_POINT_ONE_FLOAT)) {
LAB_18065a17c:
    if ((*(float *)(resource_ptr + 0x44) <= base_parameter_1) ||
       (base_parameter_3 <= *(float *)(resource_ptr + 0x44))) {
      *(int32_t *)(resource_ptr + 0x44) = render_flag;
      *(int32_t *)(resource_ptr + 0x48) = 0xbf800000;
      goto LAB_18065a2e9;
    }
  }
  else {
    angle_value = base_parameter_2 * base_parameter_2 + base_parameter_2 * base_parameter_2;
    angle_value = angle_value + angle_value;
    if (angle_value <= base_parameter_3) {
      angle_value = base_parameter_3;
    }
    if (-angle_value <= control_parameter_6 * control_parameter_2) goto LAB_18065a17c;
  }
  
  // 动画参数更新
  angle_value = *(float *)(resource_ptr + 0x44);
  if (angle_value == base_parameter_1) {
    *(bool *)(resource_ptr + 0x5d) = control_parameter_2 < base_parameter_1;
  }
  
  data_offset = *(longlong *)((longlong)*(int *)(resource_ptr + 0x60) * 0x1358 + -0x98 + resource_ptr);
  angle_value = (*(float *)(*(longlong *)(data_offset + 8) + 0x188) /
          *(float *)(*(longlong *)(data_offset + 0x38) + 0x188)) * base_parameter_4 * time_step
          + angle_value;
  if (base_parameter_3 <= angle_value) {
    angle_value = base_parameter_3;
  }
  *(float *)(resource_ptr + 0x44) = angle_value;
  
  // 高级动画处理
  if (*(float *)(resource_ptr + 0x48) <= base_parameter_1 && base_parameter_1 != *(float *)(resource_ptr + 0x48)) {
    interpolation_value = base_parameter_3;
    if (*(char *)(resource_ptr + 0x5d) != '\0') {
      interpolation_value = UI_NEGATIVE_ONE_FLOAT;
    }
    if (base_parameter_1 <= interpolation_value * control_parameter_2) {
      interpolation_value = angle_value;
      if (*(char *)(resource_ptr + 0x5d) == '\0') {
        return_address = 0x18065a252;
        interpolation_value = (float)fmodf(angle_value + UI_HALF_FLOAT);
      }
      interpolation_value = interpolation_value - *(float *)(resource_ptr + 0x38);
      if (interpolation_value <= UI_HALF_FLOAT) {
        if (interpolation_value < -UI_HALF_FLOAT) {
          interpolation_value = interpolation_value + base_parameter_3;
        }
      }
      else {
        interpolation_value = interpolation_value + -UI_ONE_FLOAT;
      }
      smooth_value_1 = angle_value * angle_value * angle_value + time_step;
      if (base_parameter_3 <= smooth_value_1) {
        smooth_value_1 = base_parameter_3;
      }
      angle_value = smooth_value_1 * angle_value * interpolation_value + *(float *)(resource_ptr + 0x38);
      *(float *)(resource_ptr + 0x38) = angle_value;
      if (base_parameter_1 <= angle_value) {
        if (base_parameter_3 <= angle_value) {
          *(float *)(resource_ptr + 0x38) = angle_value - base_parameter_3;
        }
      }
      else {
        *(float *)(resource_ptr + 0x38) = angle_value + base_parameter_3;
      }
    }
    else {
      *(float *)(resource_ptr + 0x48) = angle_value + UI_QUARTER_FLOAT;
    }
  }
  
LAB_18065a2e9:
  // 矩阵变换计算
  angle_value = *(float *)(resource_ptr + 0x50);
  temp_storage_1 = (base_parameter_3 - angle_value) * (base_parameter_3 - control_parameter_3);
  smooth_value_2 = (base_parameter_3 - base_parameter_1) * temp_storage_1;
  temp_storage_3 = (base_parameter_3 - temp_value_9) * base_parameter_1 * temp_storage_1;
  smooth_value_1 = base_parameter_1 * temp_storage_1 * temp_value_9;
  temp_value_8 = smooth_value_2 * temp_value_9;
  temp_storage_1 = temp_storage_1 * temp_value_9;
  temp_storage_4 = smooth_value_1 * input_parameter_1;
  *(float *)(context_ptr + -0x7c) = temp_storage_1;
  *(float *)(context_ptr + -0x78) = temp_storage_1;
  *(float *)(context_ptr + -0x74) = (base_parameter_3 - control_parameter_3) * angle_value;
  interpolation_value = (base_parameter_3 - input_parameter_1) * temp_value_8;
  temp_storage_2 = (base_parameter_3 - input_parameter_1) * smooth_value_1;
  *(float *)(context_ptr + -0x80) = interpolation_value;
  control_flag = (char)render_flag;
  
  // 参数控制逻辑
  if ((stack_control_flag == control_flag) || (base_parameter_1 < input_parameter_1)) {
    if (angle_value <= base_parameter_1) {
      angle_value = UI_THREE_FLOAT;
    }
    else {
      angle_value = UI_FIVE_FLOAT;
    }
  }
  else {
    angle_value = UI_TWO_FLOAT;
  }
  
  // 动画时间步进
  temp_value_2 = *(float *)(resource_ptr + 0x6128);
  if (control_parameter_3 <= temp_value_2) {
    temp_value_2 = temp_value_2 - angle_value * time_step;
    if (temp_value_2 <= control_parameter_3) {
      temp_value_2 = control_parameter_3;
    }
  }
  else {
    temp_value_2 = temp_value_2 + angle_value * time_step;
    if (control_parameter_3 <= temp_value_2) {
      temp_value_2 = control_parameter_3;
    }
  }
  *(float *)(resource_ptr + 0x6128) = temp_value_2;
  *(float *)(resource_ptr + 0x6150) = temp_value_2;
  
  // 权重计算
  angle_value = *(float *)(resource_ptr + 0x44);
  if (UI_POINT_TWO_FLOAT <= angle_value) {
    temp_value_2 = base_parameter_3;
    if (UI_POINT_SEVEN_FLOAT < angle_value) {
      temp_value_2 = (base_parameter_3 - angle_value) * UI_THREE_THREE_THREE_FLOAT;
    }
  }
  else {
    temp_value_2 = angle_value * UI_FIVE_FLOAT;
  }
  if (base_parameter_1 < *(float *)(resource_ptr + 0x48)) {
    angle_value = (*(float *)(resource_ptr + 0x48) - angle_value) * UI_FOUR_FLOAT;
    if (angle_value <= base_parameter_1) {
      angle_value = base_parameter_1;
    }
    temp_value_2 = temp_value_2 * angle_value;
  }
  
  // 动画数据处理
  animation_data_ptr = (float *)(resource_ptr + 0x6154);
  element_index = 1;
  angle_value = base_parameter_1;
  
  // 主动画处理循环
  do {
    temp_value_4 = *(float *)(((longlong)animation_buffer - resource_ptr) + (longlong)animation_data_ptr);
    temp_value_3 = temp_value_4 - animation_data_ptr[-10];
    temp_value_6 = ABS(temp_value_3);
    if (UI_ZERO_ZERO_ONE_FLOAT <= temp_value_6) {
      temp_value_7 = base_parameter_3;
      if (temp_value_3 < base_parameter_1) {
        temp_value_7 = UI_NEGATIVE_ONE_FLOAT;
      }
      if (UI_POINT_ZERO_FIVE_FLOAT <= temp_value_6) {
        if (UI_POINT_FIVE_FLOAT <= temp_value_6) {
          temp_value_6 = UI_POINT_FIVE_FLOAT;
        }
      }
      else {
        temp_value_6 = UI_POINT_ZERO_FIVE_FLOAT;
      }
      temp_value_6 = temp_value_6 * temp_value_7 * time_step * UI_SIX_FLOAT;
      if (temp_value_6 * temp_value_7 <= temp_value_7 * temp_value_3) {
        temp_value_4 = animation_data_ptr[-10] + temp_value_6;
      }
    }
    animation_data_ptr[-10] = temp_value_4;
    *animation_data_ptr = temp_value_4;
    
    if (UI_TWO_FLOAT < element_index) {
      if (element_index < 7) {
        temp_value_3 = base_parameter_3 - temp_value_2;
      }
      else {
        temp_value_3 = base_parameter_1;
        if (element_index == 7) {
          if (*(char *)(resource_ptr + 0x5d) == control_flag) {
LAB_18065a5b3:
            temp_value_3 = temp_value_2;
          }
        }
        else {
          if (element_index != 8) goto LAB_18065a5d3;
          if (*(char *)(resource_ptr + 0x5d) != control_flag) goto LAB_18065a5b3;
        }
      }
      temp_value_4 = temp_value_3 * temp_value_4;
      *animation_data_ptr = temp_value_4;
    }
    
LAB_18065a5d3:
    temp_value_3 = *(float *)((longlong)animation_buffer + (4 - resource_ptr) + (longlong)animation_data_ptr);
    temp_value_6 = temp_value_3 - animation_data_ptr[-9];
    temp_value_7 = ABS(temp_value_6);
    if (UI_ZERO_ZERO_ONE_FLOAT <= temp_value_7) {
      temp_value_8 = base_parameter_3;
      if (temp_value_6 < base_parameter_1) {
        temp_value_8 = UI_NEGATIVE_ONE_FLOAT;
      }
      if (UI_POINT_ZERO_FIVE_FLOAT <= temp_value_7) {
        if (UI_POINT_FIVE_FLOAT <= temp_value_7) {
          temp_value_7 = UI_POINT_FIVE_FLOAT;
        }
      }
      else {
        temp_value_7 = UI_POINT_ZERO_FIVE_FLOAT;
      }
      temp_value_7 = temp_value_7 * temp_value_8 * time_step * UI_SIX_FLOAT;
      if (temp_value_7 * temp_value_8 <= temp_value_8 * temp_value_6) {
        temp_value_3 = animation_data_ptr[-9] + temp_value_7;
      }
    }
    loop_counter = element_index + 1;
    animation_data_ptr[-9] = temp_value_3;
    animation_data_ptr[1] = temp_value_3;
    
    if (UI_TWO_FLOAT < loop_counter) {
      if (loop_counter < 7) {
        temp_value_6 = base_parameter_3 - temp_value_2;
      }
      else {
        temp_value_6 = base_parameter_1;
        if (loop_counter == 7) {
          if (*(char *)(resource_ptr + 0x5d) == control_flag) {
LAB_18065a67b:
            temp_value_6 = temp_value_2;
          }
        }
        else {
          if (loop_counter != 8) goto LAB_18065a69c;
          if (*(char *)(resource_ptr + 0x5d) != control_flag) goto LAB_18065a67b;
        }
      }
      temp_value_3 = temp_value_6 * temp_value_3;
      animation_data_ptr[1] = temp_value_3;
    }
    
LAB_18065a69c:
    temp_value_6 = *(float *)((longlong)animation_buffer + (8 - resource_ptr) + (longlong)animation_data_ptr);
    temp_value_7 = temp_value_6 - animation_data_ptr[-8];
    temp_value_8 = ABS(temp_value_7);
    if (UI_ZERO_ZERO_ONE_FLOAT <= temp_value_8) {
      smooth_value_2 = base_parameter_3;
      if (temp_value_7 < base_parameter_1) {
        smooth_value_2 = UI_NEGATIVE_ONE_FLOAT;
      }
      if (UI_POINT_ZERO_FIVE_FLOAT <= temp_value_8) {
        if (UI_POINT_FIVE_FLOAT <= temp_value_8) {
          temp_value_8 = UI_POINT_FIVE_FLOAT;
        }
      }
      else {
        temp_value_8 = UI_POINT_ZERO_FIVE_FLOAT;
      }
      temp_value_8 = temp_value_8 * smooth_value_2 * time_step * UI_SIX_FLOAT;
      if (temp_value_8 * smooth_value_2 <= smooth_value_2 * temp_value_7) {
        temp_value_6 = animation_data_ptr[-8] + temp_value_8;
      }
    }
    loop_counter = element_index + 2;
    animation_data_ptr[-8] = temp_value_6;
    animation_data_ptr[2] = temp_value_6;
    
    if (UI_TWO_FLOAT < loop_counter) {
      if (loop_counter < 7) {
        temp_value_7 = base_parameter_3 - temp_value_2;
      }
      else {
        temp_value_7 = base_parameter_1;
        if (loop_counter == 7) {
          if (*(char *)(resource_ptr + 0x5d) == control_flag) {
LAB_18065a744:
            temp_value_7 = temp_value_2;
          }
        }
        else {
          if (loop_counter != 8) goto LAB_18065a765;
          if (*(char *)(resource_ptr + 0x5d) != control_flag) goto LAB_18065a744;
        }
      }
      temp_value_6 = temp_value_7 * temp_value_6;
      animation_data_ptr[2] = temp_value_6;
    }
    
LAB_18065a765:
    element_index = element_index + 3;
    angle_value = angle_value + temp_value_4 + temp_value_3 + temp_value_6;
    animation_data_ptr = animation_data_ptr + 3;
    
    if (9 < element_index) {
      temp_value_2 = *(float *)(resource_ptr + 0x6150);
      temp_value_2 = base_parameter_3 - ((temp_value_2 * UI_SIX_FLOAT - UI_FIFTEEN_FLOAT) * temp_value_2 + UI_TEN_FLOAT) * temp_value_2 * temp_value_2 * temp_value_2;
      if (angle_value != temp_value_2) {
        if (angle_value <= base_parameter_1) {
          *(int32_t *)(resource_ptr + 0x6150) = 0x3f800000;
        }
        else {
          temp_value_2 = temp_value_2 / angle_value;
          *(float *)(resource_ptr + 0x6154) = *(float *)(resource_ptr + 0x6154) * temp_value_2;
          *(float *)(resource_ptr + 0x6158) = *(float *)(resource_ptr + 0x6158) * temp_value_2;
          *(float *)(resource_ptr + 0x615c) = *(float *)(resource_ptr + 0x615c) * temp_value_2;
          *(float *)(resource_ptr + 0x6160) = *(float *)(resource_ptr + 0x6160) * temp_value_2;
          *(float *)(resource_ptr + 0x6164) = *(float *)(resource_ptr + 0x6164) * temp_value_2;
          *(float *)(resource_ptr + 0x6168) = *(float *)(resource_ptr + 0x6168) * temp_value_2;
          *(float *)(resource_ptr + 0x616c) = *(float *)(resource_ptr + 0x616c) * temp_value_2;
          *(float *)(resource_ptr + 0x6170) = *(float *)(resource_ptr + 0x6170) * temp_value_2;
          *(float *)(resource_ptr + 0x6174) = temp_value_2 * *(float *)(resource_ptr + 0x6174);
        }
      }
      
      // 向量归一化处理
      smooth_value_2 = temp_storage_3 - (base_parameter_3 - temp_value_9) * smooth_value_2;
      interpolation_value = ((((temp_value_8 + smooth_value_1) * input_parameter_1 + temp_storage_1) -
                temp_storage_2) - interpolation_value) - temp_storage_1;
      angle_value = smooth_value_2 * smooth_value_2 + interpolation_value * interpolation_value;
      conversion_flag = (undefined3)((uint)render_flag >> 8);
      angle_value = (float)CONCAT31(conversion_flag,angle_value <= UI_MIN_NORMALIZED_FLOAT) * UI_MIN_NORMALIZED_FLOAT + angle_value;
      conversion_buffer = rsqrtss(ZEXT416((uint)angle_value),ZEXT416((uint)angle_value));
      temp_value_9 = conversion_buffer._0_4_;
      angle_value = temp_value_9 * UI_HALF_FLOAT * (UI_THREE_FLOAT - angle_value * temp_value_9 * temp_value_9);
      smooth_value_2 = angle_value * smooth_value_2;
      angle_value = angle_value * interpolation_value;
      
      if (ABS(angle_value * *(float *)(resource_ptr + 0x6178) + smooth_value_2 * *(float *)(resource_ptr + 0x617c)) <=
          UI_MAX_CLAMP_FLOAT) {
        interpolation_value = *(float *)(resource_ptr + 0x6154) - *(float *)(resource_ptr + 0x6158);
        smooth_value_1 = (((*(float *)(resource_ptr + 0x6160) + *(float *)(resource_ptr + 0x615c) +
                   *(float *)(resource_ptr + 0x616c)) - *(float *)(resource_ptr + 0x6164)) -
                 *(float *)(resource_ptr + 0x6168)) - *(float *)(resource_ptr + 0x6170);
        angle_value = interpolation_value * interpolation_value + smooth_value_1 * smooth_value_1;
        angle_value = (float)CONCAT31(conversion_flag,angle_value <= UI_MIN_NORMALIZED_FLOAT) * UI_MIN_NORMALIZED_FLOAT + angle_value;
        conversion_buffer = rsqrtss(ZEXT416((uint)angle_value),ZEXT416((uint)angle_value));
        temp_value_9 = conversion_buffer._0_4_;
        time_step = time_step * UI_EIGHT_FLOAT;
        angle_value = temp_value_9 * UI_HALF_FLOAT * (UI_THREE_FLOAT - angle_value * temp_value_9 * temp_value_9);
        *(ulonglong *)(resource_ptr + 0x6178) =
             CONCAT44(angle_value * interpolation_value * time_step +
                      (base_parameter_3 - time_step) * *(float *)(resource_ptr + 0x617c),
                      angle_value * smooth_value_1 * time_step +
                      (base_parameter_3 - time_step) * *(float *)(resource_ptr + 0x6178));
        angle_value = *(float *)(resource_ptr + 0x617c);
        temp_value_9 = *(float *)(resource_ptr + 0x6178);
        interpolation_value = temp_value_9 * temp_value_9 + angle_value * angle_value;
        conversion_buffer = rsqrtss(ZEXT416((uint)interpolation_value),ZEXT416((uint)interpolation_value));
        smooth_value_1 = conversion_buffer._0_4_;
        interpolation_value = smooth_value_1 * UI_HALF_FLOAT * (UI_THREE_FLOAT - interpolation_value * smooth_value_1 * smooth_value_1);
        *(float *)(resource_ptr + 0x617c) = interpolation_value * angle_value;
        *(float *)(resource_ptr + 0x6178) = interpolation_value * temp_value_9;
      }
      else {
        *(ulonglong *)(resource_ptr + 0x6178) = CONCAT44(smooth_value_2,angle_value);
      }
      
      // 调用渲染处理函数
      return_address = 0x18065aa9f;
      temp_storage_5 = temp_storage_2;
      FUN_1808fc050(*(ulonglong *)(context_ptr + -0x70) ^ (ulonglong)&stack0x00000000);
    }
  } while( true );
}

// UI系统参数化动画处理器 - 处理参数化的UI动画和变换
// 该函数实现了基于参数的UI动画处理，包括动画参数控制、插值计算、矩阵变换和状态管理
void ui_system_parameterized_animation_processor(uint64_t param_1,uint64_t param_2,float param_3,float param_4,
                  uint64_t param_5,uint64_t param_6,float param_7,float param_8,float param_9,
                  uint64_t param_10,uint64_t param_11,float param_12)
{
  undefined3 conversion_flag;
  float *animation_data_ptr;
  int loop_counter_1;
  int loop_counter_2;
  float *base_animation_ptr;
  longlong context_ptr;
  char control_flag;
  int32_t render_flag;
  longlong resource_ptr;
  float weight_value;
  float interpolation_value;
  float temp_value_1;
  float temp_value_2;
  float temp_value_3;
  float temp_value_4;
  float temp_value_5;
  int8_t conversion_buffer [16];
  uint abs_mask;
  float smooth_value;
  float base_parameter_1;
  float base_parameter_2;
  float base_parameter_3;
  float base_parameter_4;
  float base_parameter_5;
  float base_parameter_6;
  float temp_storage;
  float animation_buffer [6200];
  uint64_t return_address;
  
  // 参数化动画控制逻辑
  if (base_parameter_1 < base_parameter_2) {
    interpolation_value = param_4;
    if (param_3 <= base_parameter_1) {
      interpolation_value = UI_THREE_FLOAT;
    }
  }
  else {
    interpolation_value = UI_TWO_FLOAT;
  }
  
  weight_value = *(float *)(resource_ptr + 0x6128);
  if (base_parameter_6 <= weight_value) {
    weight_value = weight_value - interpolation_value * param_6._4_4_;
    if (weight_value <= base_parameter_6) {
      weight_value = base_parameter_6;
    }
  }
  else {
    weight_value = weight_value + interpolation_value * param_6._4_4_;
    if (base_parameter_6 <= weight_value) {
      weight_value = base_parameter_6;
    }
  }
  *(float *)(resource_ptr + 0x6128) = weight_value;
  *(float *)(resource_ptr + 0x6150) = weight_value;
  
  interpolation_value = *base_animation_ptr;
  if (UI_POINT_TWO_FLOAT <= interpolation_value) {
    weight_value = base_parameter_3;
    if (UI_POINT_SEVEN_FLOAT < interpolation_value) {
      weight_value = (base_parameter_3 - interpolation_value) * UI_THREE_THREE_THREE_FLOAT;
    }
  }
  else {
    weight_value = interpolation_value * param_4;
  }
  
  if (base_parameter_1 < *(float *)(resource_ptr + 0x48)) {
    interpolation_value = (*(float *)(resource_ptr + 0x48) - interpolation_value) * UI_FOUR_FLOAT;
    if (interpolation_value <= base_parameter_1) {
      interpolation_value = base_parameter_1;
    }
    weight_value = weight_value * interpolation_value;
  }
  
  animation_data_ptr = (float *)(resource_ptr + 0x6154);
  loop_counter_2 = 1;
  
  // 参数化动画处理主循环
  do {
    interpolation_value = *(float *)(((longlong)animation_buffer - resource_ptr) + (longlong)animation_data_ptr);
    temp_value_1 = interpolation_value - animation_data_ptr[-10];
    temp_value_2 = (float)((uint)temp_value_1 & abs_mask);
    if (UI_ZERO_ZERO_ONE_FLOAT <= temp_value_2) {
      temp_value_3 = base_parameter_5;
      if (base_parameter_1 <= temp_value_1) {
        temp_value_3 = base_parameter_3;
      }
      if (UI_POINT_ZERO_FIVE_FLOAT <= temp_value_2) {
        if (UI_POINT_FIVE_FLOAT <= temp_value_2) {
          temp_value_2 = UI_POINT_FIVE_FLOAT;
        }
      }
      else {
        temp_value_2 = UI_POINT_ZERO_FIVE_FLOAT;
      }
      temp_value_2 = temp_value_2 * temp_value_3 * param_6._4_4_ * UI_SIX_FLOAT;
      abs_mask = 0x7fffffff;
      if (temp_value_2 * temp_value_3 <= temp_value_3 * temp_value_1) {
        interpolation_value = animation_data_ptr[-10] + temp_value_2;
      }
    }
    animation_data_ptr[-10] = interpolation_value;
    *animation_data_ptr = interpolation_value;
    control_flag = (char)render_flag;
    
    if (UI_TWO_FLOAT < loop_counter_2) {
      if (loop_counter_2 < 7) {
        temp_value_1 = base_parameter_3 - weight_value;
      }
      else {
        temp_value_1 = base_parameter_1;
        if (loop_counter_2 == 7) {
          if (*(char *)(resource_ptr + 0x5d) == control_flag) {
LAB_18065a5b3:
            temp_value_1 = weight_value;
          }
        }
        else {
          if (loop_counter_2 != 8) goto LAB_18065a5d3;
          if (*(char *)(resource_ptr + 0x5d) != control_flag) goto LAB_18065a5b3;
        }
      }
      interpolation_value = temp_value_1 * interpolation_value;
      *animation_data_ptr = interpolation_value;
    }
    
LAB_18065a5d3:
    temp_value_1 = *(float *)((longlong)animation_buffer + (4 - resource_ptr) + (longlong)animation_data_ptr);
    temp_value_2 = temp_value_1 - animation_data_ptr[-9];
    temp_value_3 = (float)((uint)temp_value_2 & abs_mask);
    if (UI_ZERO_ZERO_ONE_FLOAT <= temp_value_3) {
      temp_value_4 = base_parameter_5;
      if (base_parameter_1 <= temp_value_2) {
        temp_value_4 = base_parameter_3;
      }
      if (UI_POINT_ZERO_FIVE_FLOAT <= temp_value_3) {
        if (UI_POINT_FIVE_FLOAT <= temp_value_3) {
          temp_value_3 = UI_POINT_FIVE_FLOAT;
        }
      }
      else {
        temp_value_3 = UI_POINT_ZERO_FIVE_FLOAT;
      }
      temp_value_3 = temp_value_3 * temp_value_4 * param_6._4_4_ * UI_SIX_FLOAT;
      abs_mask = 0x7fffffff;
      if (temp_value_3 * temp_value_4 <= temp_value_4 * temp_value_2) {
        temp_value_1 = animation_data_ptr[-9] + temp_value_3;
      }
    }
    loop_counter_1 = loop_counter_2 + 1;
    animation_data_ptr[-9] = temp_value_1;
    animation_data_ptr[1] = temp_value_1;
    
    if (UI_TWO_FLOAT < loop_counter_1) {
      if (loop_counter_1 < 7) {
        temp_value_2 = base_parameter_3 - weight_value;
      }
      else {
        temp_value_2 = base_parameter_1;
        if (loop_counter_1 == 7) {
          if (*(char *)(resource_ptr + 0x5d) == control_flag) {
LAB_18065a67b:
            temp_value_2 = weight_value;
          }
        }
        else {
          if (loop_counter_1 != 8) goto LAB_18065a69c;
          if (*(char *)(resource_ptr + 0x5d) != control_flag) goto LAB_18065a67b;
        }
      }
      temp_value_1 = temp_value_2 * temp_value_1;
      animation_data_ptr[1] = temp_value_1;
    }
    
LAB_18065a69c:
    temp_value_2 = *(float *)((longlong)animation_buffer + (8 - resource_ptr) + (longlong)animation_data_ptr);
    temp_value_3 = temp_value_2 - animation_data_ptr[-8];
    temp_value_4 = (float)((uint)temp_value_3 & abs_mask);
    if (UI_ZERO_ZERO_ONE_FLOAT <= temp_value_4) {
      smooth_value = base_parameter_5;
      if (base_parameter_1 <= temp_value_3) {
        smooth_value = base_parameter_3;
      }
      if (UI_POINT_ZERO_FIVE_FLOAT <= temp_value_4) {
        if (UI_POINT_FIVE_FLOAT <= temp_value_4) {
          temp_value_4 = UI_POINT_FIVE_FLOAT;
        }
      }
      else {
        temp_value_4 = UI_POINT_ZERO_FIVE_FLOAT;
      }
      temp_value_4 = temp_value_4 * smooth_value * param_6._4_4_ * UI_SIX_FLOAT;
      abs_mask = 0x7fffffff;
      if (temp_value_4 * smooth_value <= smooth_value * temp_value_3) {
        temp_value_2 = animation_data_ptr[-8] + temp_value_4;
      }
    }
    loop_counter_1 = loop_counter_2 + 2;
    animation_data_ptr[-8] = temp_value_2;
    animation_data_ptr[2] = temp_value_2;
    
    if (UI_TWO_FLOAT < loop_counter_1) {
      if (loop_counter_1 < 7) {
        temp_value_3 = base_parameter_3 - weight_value;
      }
      else {
        temp_value_3 = base_parameter_1;
        if (loop_counter_1 == 7) {
          if (*(char *)(resource_ptr + 0x5d) == control_flag) {
LAB_18065a744:
            temp_value_3 = weight_value;
          }
        }
        else {
          if (loop_counter_1 != 8) goto LAB_18065a765;
          if (*(char *)(resource_ptr + 0x5d) != control_flag) goto LAB_18065a744;
        }
      }
      temp_value_2 = temp_value_3 * temp_value_2;
      animation_data_ptr[2] = temp_value_2;
    }
    
LAB_18065a765:
    loop_counter_2 = loop_counter_2 + 3;
    base_parameter_4 = base_parameter_4 + interpolation_value + temp_value_1 + temp_value_2;
    animation_data_ptr = animation_data_ptr + 3;
    
    if (9 < loop_counter_2) {
      interpolation_value = *(float *)(resource_ptr + 0x6150);
      interpolation_value = base_parameter_3 - ((interpolation_value * UI_SIX_FLOAT - UI_FIFTEEN_FLOAT) * interpolation_value + UI_TEN_FLOAT) * interpolation_value * interpolation_value * interpolation_value;
      if (base_parameter_4 != interpolation_value) {
        if (base_parameter_4 <= base_parameter_1) {
          *(int32_t *)(resource_ptr + 0x6150) = 0x3f800000;
        }
        else {
          interpolation_value = interpolation_value / base_parameter_4;
          *(float *)(resource_ptr + 0x6154) = *(float *)(resource_ptr + 0x6154) * interpolation_value;
          *(float *)(resource_ptr + 0x6158) = *(float *)(resource_ptr + 0x6158) * interpolation_value;
          *(float *)(resource_ptr + 0x615c) = *(float *)(resource_ptr + 0x615c) * interpolation_value;
          *(float *)(resource_ptr + 0x6160) = *(float *)(resource_ptr + 0x6160) * interpolation_value;
          *(float *)(resource_ptr + 0x6164) = *(float *)(resource_ptr + 0x6164) * interpolation_value;
          *(float *)(resource_ptr + 0x6168) = *(float *)(resource_ptr + 0x6168) * interpolation_value;
          *(float *)(resource_ptr + 0x616c) = *(float *)(resource_ptr + 0x616c) * interpolation_value;
          *(float *)(resource_ptr + 0x6170) = *(float *)(resource_ptr + 0x6170) * interpolation_value;
          *(float *)(resource_ptr + 0x6174) = interpolation_value * *(float *)(resource_ptr + 0x6174);
        }
      }
      
      // 参数化变换计算
      param_9 = param_9 - param_7;
      param_10._4_4_ =
           (((((float)param_10 + (float)param_11) * param_8 + param_10._4_4_) - param_11._4_4_) -
           param_12) - param_10._4_4_;
      interpolation_value = param_9 * param_9 + param_10._4_4_ * param_10._4_4_;
      conversion_flag = (undefined3)((uint)render_flag >> 8);
      interpolation_value = (float)CONCAT31(conversion_flag,interpolation_value <= UI_MIN_NORMALIZED_FLOAT) * UI_MIN_NORMALIZED_FLOAT + interpolation_value;
      conversion_buffer = rsqrtss(ZEXT416((uint)interpolation_value),ZEXT416((uint)interpolation_value));
      weight_value = conversion_buffer._0_4_;
      interpolation_value = weight_value * UI_HALF_FLOAT * (UI_THREE_FLOAT - interpolation_value * weight_value * weight_value);
      temp_storage = interpolation_value * param_9;
      interpolation_value = interpolation_value * param_10._4_4_;
      
      if ((float)((uint)(interpolation_value * *(float *)(resource_ptr + 0x6178) +
                        temp_storage * *(float *)(resource_ptr + 0x617c)) & abs_mask) <=
          UI_MAX_CLAMP_FLOAT) {
        temp_value_1 = *(float *)(resource_ptr + 0x6154) - *(float *)(resource_ptr + 0x6158);
        temp_value_2 = (((*(float *)(resource_ptr + 0x6160) + *(float *)(resource_ptr + 0x615c) +
                  *(float *)(resource_ptr + 0x616c)) - *(float *)(resource_ptr + 0x6164)) -
                *(float *)(resource_ptr + 0x6168)) - *(float *)(resource_ptr + 0x6170);
        interpolation_value = temp_value_1 * temp_value_1 + temp_value_2 * temp_value_2;
        interpolation_value = (float)CONCAT31(conversion_flag,interpolation_value <= UI_MIN_NORMALIZED_FLOAT) * UI_MIN_NORMALIZED_FLOAT + interpolation_value;
        conversion_buffer = rsqrtss(ZEXT416((uint)interpolation_value),ZEXT416((uint)interpolation_value));
        weight_value = conversion_buffer._0_4_;
        param_6._4_4_ = param_6._4_4_ * UI_EIGHT_FLOAT;
        interpolation_value = weight_value * UI_HALF_FLOAT * (UI_THREE_FLOAT - interpolation_value * weight_value * weight_value);
        temp_storage =
             interpolation_value * temp_value_1 * param_6._4_4_ +
             (base_parameter_3 - param_6._4_4_) * *(float *)(resource_ptr + 0x617c);
        *(ulonglong *)(resource_ptr + 0x6178) =
             CONCAT44(temp_storage,
                      interpolation_value * temp_value_2 * param_6._4_4_ +
                      (base_parameter_3 - param_6._4_4_) * *(float *)(resource_ptr + 0x6178));
        interpolation_value = *(float *)(resource_ptr + 0x617c);
        weight_value = *(float *)(resource_ptr + 0x6178);
        temp_value_1 = weight_value * weight_value + interpolation_value * interpolation_value;
        conversion_buffer = rsqrtss(ZEXT416((uint)temp_value_1),ZEXT416((uint)temp_value_1));
        temp_value_2 = conversion_buffer._0_4_;
        temp_value_1 = temp_value_2 * UI_HALF_FLOAT * (UI_THREE_FLOAT - temp_value_1 * temp_value_2 * temp_value_2);
        *(float *)(resource_ptr + 0x617c) = temp_value_1 * interpolation_value;
        *(float *)(resource_ptr + 0x6178) = temp_value_1 * weight_value;
      }
      else {
        *(ulonglong *)(resource_ptr + 0x6178) = CONCAT44(temp_storage,interpolation_value);
      }
      
      // 调用渲染处理函数
      return_address = 0x18065aa9f;
      FUN_1808fc050(*(ulonglong *)(context_ptr + -0x70) ^ (ulonglong)&stack0x00000000);
    }
  } while( true );
}