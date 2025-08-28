#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part018.c - UI系统高级动画控制和参数处理模块
// 包含9个核心函数：UI系统条件渲染处理器、UI系统动画参数计算器、UI系统渲染状态控制器、UI系统动画优化器、UI系统资源清理器、UI系统渲染初始化器、UI系统动画权重计算器、UI系统资源获取器、UI系统渲染管线控制器
// 主要功能：UI动画控制、参数计算、渲染状态管理、资源清理、权重计算、渲染管线控制等高级UI功能

// 常量定义
#define UI_ZERO_FLOAT 0.0f
#define UI_ONE_FLOAT 1.0f
#define UI_TWO_FLOAT 2.0f
#define UI_THREE_FLOAT 3.0f
#define UI_FOUR_FLOAT 4.0f
#define UI_FIVE_FLOAT 5.0f
#define UI_SIX_FLOAT 6.0f
#define UI_TEN_FLOAT 10.0f
#define UI_FIFTEEN_FLOAT 15.0f
#define UI_POINT_ZERO_ONE_FLOAT 0.001f
#define UI_POINT_ZERO_FIVE_FLOAT 0.05f
#define UI_POINT_TWO_FLOAT 0.2f
#define UI_SMOOTH_STEP_FACTOR 6.0f
#define UI_NORMALIZATION_FACTOR 1.0f
#define UI_ARRAY_SIZE_18 0x12
#define UI_ARRAY_SIZE_9 9
#define UI_OFFSET_0X18 0x18
#define UI_OFFSET_0X1C 0x1c
#define UI_OFFSET_0XC 0xc
#define UI_OFFSET_0X10 0x10
#define UI_OFFSET_0X14 0x14
#define UI_OFFSET_0X20 0x20
#define UI_OFFSET_0X188 0x188
#define UI_OFFSET_0X198 0x198
#define UI_OFFSET_0X208 0x208
#define UI_OFFSET_0X30 0x30
#define UI_OFFSET_0X34 0x34
#define UI_OFFSET_0X38 0x38
#define UI_OFFSET_0X40 0x40
#define UI_OFFSET_0X44 0x44
#define UI_OFFSET_0XC30 0xc30
#define UI_OFFSET_0X104 0x104
#define UI_OFFSET_0X618 0x618
#define UI_OFFSET_0X24 0x24
#define UI_OFFSET_0X28 0x28
#define UI_OFFSET_0X2C 0x2c
#define UI_OFFSET_0X810 0x810
#define UI_OFFSET_0X808 0x808
#define UI_OFFSET_0X14 0x14
#define UI_OFFSET_0XD8 0xd8
#define UI_OFFSET_0X194 0x194
#define UI_OFFSET_0XFB0 0xfb0

// 函数别名定义
#define ui_system_conditional_render_processor FUN_18065edd0
#define ui_system_animation_parameter_calculator FUN_18065ee60
#define ui_system_render_state_controller FUN_18065f057
#define ui_system_animation_optimizer FUN_18065f1c2
#define ui_system_resource_cleanup_helper FUN_18065f210
#define ui_system_render_initiator FUN_18065fa20
#define ui_system_resource_accessor FUN_18065fd40
#define ui_system_render_pipeline_controller FUN_18065fdb0
#define ui_system_animation_weight_calculator FUN_18065ffa0
#define ui_system_animation_interpolator FUN_18065ffdf
#define ui_system_empty_function FUN_180660051
#define ui_system_animation_scale_calculator FUN_180660070
#define ui_system_memory_initializer FUN_180660100
#define ui_system_advanced_render_controller FUN_180660190

// UI系统条件渲染处理器 - 处理基于条件的UI渲染操作
// 该函数实现了基于条件的UI渲染处理，包括条件判断、参数比较、渲染控制等功能
void ui_system_conditional_render_processor(void)
{
  int loop_counter;
  longlong context_ptr;
  longlong *condition_array;
  float *parameter_array;
  float threshold_value;
  float comparison_value;
  
  // 条件渲染主循环
  do {
    // 条件判断和参数比较
    if ((*condition_array != 0) && (comparison_value < threshold_value * *parameter_array)) {
      FUN_180403910();
    }
    loop_counter = loop_counter + 1;
    parameter_array = parameter_array + 1;
    condition_array = condition_array + 1;
  } while (loop_counter < UI_ARRAY_SIZE_18);
  
  // 调用渲染处理函数
  FUN_1808fc050(*(ulonglong *)(context_ptr + UI_OFFSET_0XFB0) ^ (ulonglong)&stack0x00000000);
}

// UI系统动画参数计算器 - 计算UI动画的各种参数
// 该函数实现了UI动画参数的复杂计算，包括动画权重、插值计算、渲染参数设置等功能
void ui_system_animation_parameter_calculator(longlong render_context_ptr,
                                           float *animation_data_ptr,
                                           undefined4 render_param_1,
                                           undefined4 render_param_2,
                                           undefined4 render_param_3,
                                           float *output_buffer_ptr)
{
  float weight_factor_1;
  float weight_factor_2;
  char control_flag;
  float *buffer_ptr;
  longlong resource_ptr;
  undefined1 temp_flag;
  undefined8 *resource_array_ptr;
  int array_index;
  float animation_weight;
  float temp_weight_1;
  float temp_weight_2;
  undefined4 render_param_temp;
  float stack_param_1;
  undefined4 stack_param_2;
  
  buffer_ptr = output_buffer_ptr;
  // 初始化输出缓冲区
  buffer_ptr[0] = UI_ZERO_FLOAT;
  buffer_ptr[1] = UI_ZERO_FLOAT;
  buffer_ptr[2] = UI_ZERO_FLOAT;
  buffer_ptr[3] = UI_ZERO_FLOAT;
  output_buffer_ptr[4] = UI_ZERO_FLOAT;
  buffer_ptr[6] = UI_ZERO_FLOAT;
  buffer_ptr[7] = UI_ZERO_FLOAT;
  buffer_ptr[8] = UI_ZERO_FLOAT;
  buffer_ptr[9] = UI_ZERO_FLOAT;
  output_buffer_ptr[10] = UI_ZERO_FLOAT;
  
  animation_weight = *animation_data_ptr;
  temp_weight_1 = animation_data_ptr[9];
  
  // 处理主要动画权重
  if (UI_ZERO_FLOAT < temp_weight_1) {
    resource_ptr = FUN_18065fd40(*(undefined8 *)(render_context_ptr + UI_OFFSET_0X48));
    weight_factor_1 = *(float *)(resource_ptr + UI_OFFSET_0X14) - *(float *)(resource_ptr + UI_OFFSET_0X1C);
    if (weight_factor_1 < UI_ZERO_FLOAT) {
      weight_factor_1 = weight_factor_1 + UI_ONE_FLOAT;
    }
    weight_factor_2 = *(float *)(resource_ptr + UI_OFFSET_0XC);
    resource_ptr = FUN_18065fd40(*(undefined8 *)(render_context_ptr + UI_OFFSET_0X48));
    temp_weight_2 = *(float *)(resource_ptr + UI_OFFSET_0X14);
    resource_ptr = FUN_18065fd40(*(undefined8 *)(render_context_ptr + UI_OFFSET_0X48));
    output_buffer_ptr._0_4_ = temp_weight_2;
    output_buffer_ptr._4_4_ = fmodf(temp_weight_2 + *(float *)(resource_ptr + UI_OFFSET_0XC), UI_NORMALIZATION_FACTOR);
    resource_ptr = FUN_18065fd40(*(undefined8 *)(render_context_ptr + UI_OFFSET_0X48));
    func_0x000180669850(buffer_ptr, *(undefined4 *)(resource_ptr + UI_OFFSET_0XC), &output_buffer_ptr, 
                        weight_factor_1 + weight_factor_2, render_param_2, temp_weight_1);
    
    resource_ptr = FUN_18065fd40(*(undefined8 *)(render_context_ptr + UI_OFFSET_0X48));
    weight_factor_1 = *(float *)(resource_ptr + UI_OFFSET_0X18) - *(float *)(resource_ptr + UI_OFFSET_0X20);
    if (weight_factor_1 < UI_ZERO_FLOAT) {
      weight_factor_1 = weight_factor_1 + UI_ONE_FLOAT;
    }
    weight_factor_2 = *(float *)(resource_ptr + UI_OFFSET_0X10);
    resource_ptr = FUN_18065fd40(*(undefined8 *)(render_context_ptr + UI_OFFSET_0X48));
    temp_weight_2 = *(float *)(resource_ptr + UI_OFFSET_0X18);
    resource_ptr = FUN_18065fd40(*(undefined8 *)(render_context_ptr + UI_OFFSET_0X48));
    output_buffer_ptr._0_4_ = temp_weight_2;
    output_buffer_ptr._4_4_ = fmodf(temp_weight_2 + *(float *)(resource_ptr + UI_OFFSET_0X10), UI_NORMALIZATION_FACTOR);
    resource_ptr = FUN_18065fd40(*(undefined8 *)(render_context_ptr + UI_OFFSET_0X48));
    func_0x000180669850(buffer_ptr + 6, *(undefined4 *)(resource_ptr + UI_OFFSET_0X10), &output_buffer_ptr, 
                        weight_factor_1 + weight_factor_2, render_param_2, temp_weight_1);
  }
  
  // 处理额外的动画数据
  if (((animation_weight * UI_SMOOTH_STEP_FACTOR - UI_FIFTEEN_FLOAT) * animation_weight + UI_TEN_FLOAT) * 
      animation_weight * animation_weight * animation_weight + temp_weight_1 < UI_ONE_FLOAT) {
    resource_array_ptr = (undefined8 *)(render_context_ptr + 8);
    array_index = 1;
    do {
      animation_data_ptr = animation_data_ptr + 1;
      animation_weight = *animation_data_ptr;
      if (UI_ZERO_FLOAT < animation_weight) {
        render_param_temp = render_param_3;
        if (1 < array_index - 7U) {
          render_param_temp = render_param_1;
        }
        resource_ptr = FUN_18065fd40(*resource_array_ptr);
        temp_weight_1 = *(float *)(resource_ptr + UI_OFFSET_0X14) - *(float *)(resource_ptr + UI_OFFSET_0X1C);
        if (temp_weight_1 < UI_ZERO_FLOAT) {
          temp_weight_1 = temp_weight_1 + UI_ONE_FLOAT;
        }
        temp_weight_2 = *(float *)(resource_ptr + UI_OFFSET_0XC);
        resource_ptr = FUN_18065fd40(*resource_array_ptr);
        weight_factor_1 = *(float *)(resource_ptr + UI_OFFSET_0X14);
        resource_ptr = FUN_18065fd40(*resource_array_ptr);
        output_buffer_ptr._0_4_ = weight_factor_1;
        output_buffer_ptr._4_4_ = fmodf(weight_factor_1 + *(float *)(resource_ptr + UI_OFFSET_0XC), UI_NORMALIZATION_FACTOR);
        resource_ptr = FUN_18065fd40(*resource_array_ptr);
        func_0x000180669850(buffer_ptr, *(undefined4 *)(resource_ptr + UI_OFFSET_0XC), &output_buffer_ptr, 
                            temp_weight_1 + temp_weight_2, render_param_temp, animation_weight);
        
        animation_weight = *animation_data_ptr;
        resource_ptr = FUN_18065fd40(*resource_array_ptr);
        temp_weight_1 = *(float *)(resource_ptr + UI_OFFSET_0X18) - *(float *)(resource_ptr + UI_OFFSET_0X20);
        if (temp_weight_1 < UI_ZERO_FLOAT) {
          temp_weight_1 = temp_weight_1 + UI_ONE_FLOAT;
        }
        temp_weight_2 = *(float *)(resource_ptr + UI_OFFSET_0X10);
        resource_ptr = FUN_18065fd40(*resource_array_ptr);
        weight_factor_1 = *(float *)(resource_ptr + UI_OFFSET_0X18);
        resource_ptr = FUN_18065fd40(*resource_array_ptr);
        stack_param_1 = weight_factor_1;
        stack_param_2 = fmodf(weight_factor_1 + *(float *)(resource_ptr + UI_OFFSET_0X10), UI_NORMALIZATION_FACTOR);
        resource_ptr = FUN_18065fd40(*resource_array_ptr);
        func_0x000180669850(buffer_ptr + 6, *(undefined4 *)(resource_ptr + UI_OFFSET_0X10), &stack_param_1, 
                            temp_weight_1 + temp_weight_2, render_param_temp, animation_weight);
      }
      array_index = array_index + 1;
      resource_array_ptr = resource_array_ptr + 1;
    } while (array_index < UI_ARRAY_SIZE_9);
  }
  
  // 处理渲染状态和控制标志
  control_flag = *(char *)((longlong)buffer_ptr + 0x16);
  animation_weight = UI_ZERO_FLOAT;
  if (control_flag == '\0') {
    temp_weight_1 = UI_ZERO_FLOAT;
  }
  else {
    temp_weight_1 = buffer_ptr[4] * UI_POINT_ZERO_FIVE_FLOAT;
  }
  temp_weight_2 = *buffer_ptr;
  weight_factor_1 = buffer_ptr[3];
  if ((temp_weight_2 + temp_weight_1 < weight_factor_1) || (control_flag != '\0')) {
    temp_flag = 0;
  }
  else {
    temp_flag = 1;
  }
  *(undefined1 *)(buffer_ptr + 5) = temp_flag;
  
  if (control_flag != '\0') {
    animation_weight = buffer_ptr[4] * UI_POINT_ZERO_FIVE_FLOAT;
  }
  temp_weight_1 = temp_weight_2 + UI_POINT_TWO_FLOAT;
  *(bool *)((longlong)buffer_ptr + 0x16) = weight_factor_1 <= temp_weight_2 + animation_weight;
  
  if ((weight_factor_1 <= temp_weight_1) && (*(char *)((longlong)buffer_ptr + 0x17) == '\0')) {
    *(undefined1 *)((longlong)buffer_ptr + 0x15) = 1;
    *(bool *)((longlong)buffer_ptr + 0x17) = weight_factor_1 <= temp_weight_1;
    return;
  }
  *(undefined1 *)((longlong)buffer_ptr + 0x15) = 0;
  *(bool *)((longlong)buffer_ptr + 0x17) = weight_factor_1 <= temp_weight_1;
  return;
}

// UI系统渲染状态控制器 - 控制UI系统的渲染状态
// 该函数实现了UI系统渲染状态的精确控制，包括状态更新、标志位管理、渲染参数调整等功能
void ui_system_render_state_controller(void)
{
  float weight_factor_1;
  float weight_factor_2;
  char control_flag;
  longlong resource_ptr;
  undefined1 state_flag;
  undefined8 *resource_array_ptr;
  longlong render_context_ptr;
  float *animation_data_ptr;
  int array_index;
  float *output_buffer_ptr;
  float threshold_value;
  undefined4 render_param_1;
  float temp_weight_1;
  undefined4 render_param_2;
  undefined4 render_param_3;
  undefined4 render_param_4;
  float stack_param_1;
  undefined4 stack_param_2;
  
  animation_data_ptr = (float *)(render_context_ptr + 4);
  array_index = 1;
  do {
    if (render_param_4 < *animation_data_ptr) {
      render_param_1 = render_param_2;
      if (1 < array_index - 7U) {
        render_param_1 = render_param_3;
      }
      resource_ptr = FUN_18065fd40(*resource_array_ptr);
      temp_weight_1 = *(float *)(resource_ptr + UI_OFFSET_0X14) - *(float *)(resource_ptr + UI_OFFSET_0X1C);
      if (temp_weight_1 < render_param_4) {
        temp_weight_1 = temp_weight_1 + threshold_value;
      }
      weight_factor_2 = *(float *)(resource_ptr + UI_OFFSET_0XC);
      resource_ptr = FUN_18065fd40(*resource_array_ptr);
      weight_factor_1 = *(float *)(resource_ptr + UI_OFFSET_0X14);
      resource_ptr = FUN_18065fd40(*resource_array_ptr);
      stack_param_1 = weight_factor_1;
      stack_param_2 = fmodf(weight_factor_1 + *(float *)(resource_ptr + UI_OFFSET_0XC));
      resource_ptr = FUN_18065fd40(*resource_array_ptr);
      func_0x000180669850(render_param_1, *(undefined4 *)(resource_ptr + UI_OFFSET_0XC), &stack_param_1, 
                          temp_weight_1 + weight_factor_2, render_param_1);
      
      resource_ptr = FUN_18065fd40(*resource_array_ptr);
      temp_weight_1 = *(float *)(resource_ptr + UI_OFFSET_0X18) - *(float *)(resource_ptr + UI_OFFSET_0X20);
      if (temp_weight_1 < render_param_4) {
        temp_weight_1 = temp_weight_1 + threshold_value;
      }
      weight_factor_2 = *(float *)(resource_ptr + UI_OFFSET_0X10);
      resource_ptr = FUN_18065fd40(*resource_array_ptr);
      weight_factor_1 = *(float *)(resource_ptr + UI_OFFSET_0X18);
      resource_ptr = FUN_18065fd40(*resource_array_ptr);
      stack_param_1 = weight_factor_1;
      stack_param_2 = fmodf(weight_factor_1 + *(float *)(resource_ptr + UI_OFFSET_0X10));
      resource_ptr = FUN_18065fd40(*resource_array_ptr);
      func_0x000180669850(output_buffer_ptr + 6, *(undefined4 *)(resource_ptr + UI_OFFSET_0X10), &stack_param_1, 
                          temp_weight_1 + weight_factor_2, render_param_1);
    }
    array_index = array_index + 1;
    animation_data_ptr = animation_data_ptr + 1;
    resource_array_ptr = resource_array_ptr + 1;
  } while (array_index < UI_ARRAY_SIZE_9);
  
  control_flag = *(char *)((longlong)output_buffer_ptr + 0x16);
  temp_weight_1 = UI_ZERO_FLOAT;
  if (control_flag == '\0') {
    weight_factor_2 = UI_ZERO_FLOAT;
  }
  else {
    weight_factor_2 = output_buffer_ptr[4] * UI_POINT_ZERO_FIVE_FLOAT;
  }
  weight_factor_1 = *output_buffer_ptr;
  weight_factor_2 = output_buffer_ptr[3];
  if ((weight_factor_1 + weight_factor_2 < weight_factor_2) || (control_flag != '\0')) {
    state_flag = 0;
  }
  else {
    state_flag = 1;
  }
  *(undefined1 *)(output_buffer_ptr + 5) = state_flag;
  
  if (control_flag != '\0') {
    temp_weight_1 = output_buffer_ptr[4] * UI_POINT_ZERO_FIVE_FLOAT;
  }
  weight_factor_2 = weight_factor_1 + UI_POINT_TWO_FLOAT;
  *(bool *)((longlong)output_buffer_ptr + 0x16) = weight_factor_2 <= weight_factor_1 + temp_weight_1;
  
  if ((weight_factor_2 <= weight_factor_2) && (*(char *)((longlong)output_buffer_ptr + 0x17) == '\0')) {
    *(undefined1 *)((longlong)output_buffer_ptr + 0x15) = 1;
    *(bool *)((longlong)output_buffer_ptr + 0x17) = weight_factor_2 <= weight_factor_2;
    return;
  }
  *(undefined1 *)((longlong)output_buffer_ptr + 0x15) = 0;
  *(bool *)((longlong)output_buffer_ptr + 0x17) = weight_factor_2 <= weight_factor_2;
  return;
}

// UI系统动画优化器 - 优化UI动画的性能和效果
// 该函数实现了UI动画的优化处理，包括状态检查、标志位管理、性能优化等功能
void ui_system_animation_optimizer(void)
{
  float weight_factor_1;
  float weight_factor_2;
  char control_flag;
  undefined1 state_flag;
  float *animation_buffer_ptr;
  float temp_weight_1;
  float temp_weight_2;
  
  control_flag = *(char *)((longlong)animation_buffer_ptr + 0x16);
  temp_weight_1 = UI_ZERO_FLOAT;
  if (control_flag == '\0') {
    temp_weight_2 = UI_ZERO_FLOAT;
  }
  else {
    temp_weight_2 = animation_buffer_ptr[4] * UI_POINT_ZERO_FIVE_FLOAT;
  }
  weight_factor_1 = *animation_buffer_ptr;
  weight_factor_2 = animation_buffer_ptr[3];
  if ((weight_factor_1 + temp_weight_2 < weight_factor_2) || (control_flag != '\0')) {
    state_flag = 0;
  }
  else {
    state_flag = 1;
  }
  *(undefined1 *)(animation_buffer_ptr + 5) = state_flag;
  
  if (control_flag != '\0') {
    temp_weight_1 = animation_buffer_ptr[4] * UI_POINT_ZERO_FIVE_FLOAT;
  }
  temp_weight_2 = weight_factor_1 + UI_POINT_TWO_FLOAT;
  *(bool *)((longlong)animation_buffer_ptr + 0x16) = weight_factor_2 <= weight_factor_1 + temp_weight_1;
  
  if ((weight_factor_2 <= temp_weight_2) && (*(char *)((longlong)animation_buffer_ptr + 0x17) == '\0')) {
    *(undefined1 *)((longlong)animation_buffer_ptr + 0x15) = 1;
    *(bool *)((longlong)animation_buffer_ptr + 0x17) = weight_factor_2 <= temp_weight_2;
    return;
  }
  *(undefined1 *)((longlong)animation_buffer_ptr + 0x15) = 0;
  *(bool *)((longlong)animation_buffer_ptr + 0x17) = weight_factor_2 <= temp_weight_2;
  return;
}

// UI系统资源清理器 - 清理UI系统资源
// 该函数实现了UI系统资源的清理功能，是一个简单的资源清理接口
void ui_system_resource_cleanup_helper(void)
{
  FUN_1808fd200();
}

// UI系统渲染初始化器 - 初始化UI系统的渲染参数
// 该函数实现了UI系统渲染的初始化处理，包括参数设置、权重计算、渲染控制等功能
void ui_system_render_initiator(longlong *render_object_array_ptr,
                               longlong render_context_ptr,
                               undefined8 render_param_1,
                               longlong resource_manager_ptr,
                               undefined8 render_param_2,
                               float base_weight_1,
                               float base_weight_2,
                               float animation_scale,
                               float weight_factor_1,
                               float weight_factor_2,
                               char control_flag)
{
  undefined8 resource_handle;
  longlong resource_ptr;
  char temp_flag;
  undefined1 render_state;
  int param_index;
  float calculated_weight;
  float weight_sum;
  float weight_difference;
  undefined1 stack_buffer_1 [8];
  undefined8 stack_param_1;
  ulonglong render_handle;
  undefined8 resource_handle_2;
  undefined8 stack_resource_1;
  longlong stack_context_1;
  char stack_flag_1;
  undefined8 stack_resource_2;
  longlong stack_context_2;
  char stack_flag_2;
  undefined8 stack_resource_3;
  undefined1 stack_buffer_2 [32];
  undefined1 stack_buffer_3 [96];
  
  stack_resource_2 = 0xfffffffffffffffe;
  resource_handle = *(undefined8 *)(render_context_ptr + UI_OFFSET_0X208);
  weight_sum = (UI_ONE_FLOAT - weight_factor_1) - weight_factor_2;
  param_index = 0;
  stack_param_1 = render_param_1;
  do {
    calculated_weight = weight_factor_1;
    switch(param_index) {
    case 0:
      calculated_weight = weight_sum * weight_factor_1;
      break;
    case 1:
      calculated_weight = (UI_ONE_FLOAT - weight_factor_1) * weight_sum;
      break;
    case 2:
      goto joined_r0x00018065faf6;
    case 3:
      calculated_weight = weight_factor_2;
    joined_r0x00018065faf6:
      if (control_flag == '\0') break;
      goto LAB_18065fce5;
    case 4:
      goto joined_r0x00018065fb15;
    case 5:
      calculated_weight = weight_factor_2;
    joined_r0x00018065fb15:
      if (control_flag != '\0') break;
    default:
      goto LAB_18065fce5;
    }
    calculated_weight = animation_scale * calculated_weight;
    if (UI_POINT_ZERO_ONE_FLOAT < calculated_weight) {
      weight_difference = base_weight_1;
      if (param_index - 2U < 4) {
        weight_difference = base_weight_2;
      }
      render_handle = (ulonglong)(uint)calculated_weight;
      resource_handle_2 = resource_handle;
      FUN_180403910(*render_object_array_ptr, render_param_1, render_param_1, weight_difference, render_handle, resource_handle);
      if (*(longlong *)(resource_manager_ptr + UI_OFFSET_0X810) != 0) {
        render_handle = (ulonglong)(uint)calculated_weight;
        resource_handle_2 = resource_handle;
        FUN_180403910(render_object_array_ptr[6], resource_manager_ptr);
      }
      temp_flag = func_0x000180435420(render_param_2, 0);
      render_param_1 = stack_param_1;
      if (-1 < temp_flag) {
        render_state = func_0x000180435400();
        resource_ptr = *render_object_array_ptr;
        weight_difference = (float)(*(int *)(resource_ptr + 400) - *(int *)(resource_ptr + UI_OFFSET_0X18C)) * 
                           weight_difference + (float)*(int *)(resource_ptr + UI_OFFSET_0X18C);
        stack_buffer_1[0] = 0;
        FUN_180405240(&stack_resource_1, resource_ptr, weight_difference, 0, render_handle, resource_handle_2);
        FUN_18040dbf0(stack_resource_1, stack_buffer_2, temp_flag, weight_difference, resource_handle_2, stack_buffer_1);
        if ((stack_flag_1 == '\0') && (*(char *)(stack_context_1 + UI_OFFSET_0X194) != '\0')) {
          LOCK();
          *(int *)(stack_context_1 + UI_OFFSET_0XD8) = *(int *)(stack_context_1 + UI_OFFSET_0XD8) + -1;
          UNLOCK();
        }
        FUN_180405240(&stack_resource_2, *render_object_array_ptr, weight_difference, 0);
        FUN_18040dbf0(stack_resource_2, stack_buffer_3, render_state, weight_difference, resource_handle_2, stack_buffer_1);
        if ((stack_flag_2 == '\0') && (*(char *)(stack_context_2 + UI_OFFSET_0X194) != '\0')) {
          LOCK();
          *(int *)(stack_context_2 + UI_OFFSET_0XD8) = *(int *)(stack_context_2 + UI_OFFSET_0XD8) + -1;
          UNLOCK();
        }
        FUN_180403be0(render_param_2, temp_flag, stack_buffer_2, calculated_weight);
        FUN_180403be0(render_param_2, render_state, stack_buffer_3, calculated_weight);
        render_param_1 = stack_param_1;
      }
    }
  LAB_18065fce5:
    param_index = param_index + 1;
    render_object_array_ptr = render_object_array_ptr + 1;
    if (5 < param_index) {
      return;
    }
  } while( true );
}

// UI系统资源获取器 - 获取UI系统资源
// 该函数实现了UI系统资源的获取功能，包括资源查找、状态检查、资源返回等功能
undefined8 ui_system_resource_accessor(longlong resource_context_ptr)
{
  int status_code_1;
  int status_code_2;
  longlong *resource_array_ptr;
  
  resource_array_ptr = (longlong *)(resource_context_ptr + UI_OFFSET_0X198);
  status_code_2 = 0;
  do {
    if ((longlong *)*resource_array_ptr != (longlong *)0x0) {
      status_code_1 = (**(code **)(*(longlong *)*resource_array_ptr + 0x18))();
      if (status_code_1 == 2) {
        return *(undefined8 *)(resource_context_ptr + UI_OFFSET_0X198 + (longlong)status_code_2 * 8);
      }
    }
    status_code_2 = status_code_2 + 1;
    resource_array_ptr = resource_array_ptr + 1;
  } while (status_code_2 < 2);
  return 0;
}

// UI系统渲染管线控制器 - 控制UI系统的渲染管线
// 该函数实现了UI系统渲染管线的控制，包括权重计算、渲染参数设置、管线控制等功能
void ui_system_render_pipeline_controller(undefined8 *render_object_array_ptr,
                                        undefined8 render_param_1,
                                        undefined8 render_param_2,
                                        undefined8 render_param_3,
                                        undefined8 render_param_4,
                                        undefined4 render_flag_1,
                                        undefined4 render_flag_2,
                                        float render_scale,
                                        undefined8 render_param_5,
                                        float weight_factor_1,
                                        float weight_factor_2,
                                        float weight_factor_3,
                                        char control_flag,
                                        longlong context_ptr,
                                        int *output_index_ptr)
{
  undefined8 resource_handle;
  int param_index;
  float calculated_weight;
  undefined4 render_flag_temp;
  float max_weight;
  float weight_sum;
  
  max_weight = -UI_ONE_FLOAT;
  param_index = 0;
  weight_sum = (UI_ONE_FLOAT - weight_factor_3) - weight_factor_2;
  resource_handle = *(undefined8 *)(context_ptr + UI_OFFSET_0X208);
  do {
    switch(param_index) {
    case 0:
      calculated_weight = weight_sum * weight_factor_1 * render_scale;
      break;
    case 1:
      calculated_weight = (UI_ONE_FLOAT - weight_factor_1) * weight_sum * render_scale;
      break;
    case 2:
      if (control_flag != '\0') goto LAB_18065fef9;
      calculated_weight = render_scale * weight_factor_3;
      break;
    case 3:
      if (control_flag != '\0') goto LAB_18065fef9;
      calculated_weight = render_scale * weight_factor_2;
      break;
    case 4:
      if (control_flag == '\0') goto LAB_18065fef9;
      calculated_weight = render_scale * weight_factor_3;
      break;
    case 5:
      if (control_flag == '\0') goto LAB_18065fef9;
      calculated_weight = render_scale * weight_factor_2;
      break;
    default:
    LAB_18065fef9:
      calculated_weight = UI_ZERO_FLOAT;
    }
    if ((output_index_ptr != (int *)0x0) && (max_weight < calculated_weight)) {
      *output_index_ptr = param_index;
      max_weight = calculated_weight;
    }
    if (UI_POINT_ZERO_ONE_FLOAT < calculated_weight) {
      render_flag_temp = render_flag_1;
      if (param_index - 2U < 4) {
        render_flag_temp = render_flag_2;
      }
      FUN_180403910(*render_object_array_ptr, render_param_1, render_param_2, render_flag_temp, calculated_weight, resource_handle);
    }
    param_index = param_index + 1;
    render_object_array_ptr = render_object_array_ptr + 1;
    if (5 < param_index) {
      return;
    }
  } while( true );
}

// UI系统动画权重计算器 - 计算UI动画的权重
// 该函数实现了UI动画权重的计算，包括插值计算、权重优化、参数调整等功能
float ui_system_animation_weight_calculator(longlong *render_context_ptr, float input_param)
{
  float base_value;
  longlong resource_ptr;
  float weight_factor_1;
  float weight_factor_2;
  float weight_factor_3;
  float weight_factor_4;
  
  resource_ptr = FUN_18065cec0(render_context_ptr, 0);
  weight_factor_4 = *(float *)(*render_context_ptr + UI_OFFSET_0X188);
  if (*(float *)(resource_ptr + 8) != UI_ZERO_FLOAT) {
    base_value = *(float *)(render_context_ptr[1] + UI_OFFSET_0X188);
    resource_ptr = FUN_18065cec0(render_context_ptr, 0);
    weight_factor_3 = *(float *)(resource_ptr + UI_OFFSET_0XC);
    weight_factor_1 = *(float *)(resource_ptr + UI_OFFSET_0X10);
    weight_factor_2 = weight_factor_3;
    if (weight_factor_3 < UI_ZERO_FLOAT) {
      weight_factor_2 = -weight_factor_1;
      weight_factor_1 = -weight_factor_3;
    }
    weight_factor_3 = (input_param - weight_factor_2) / (weight_factor_1 - weight_factor_2);
    if (weight_factor_3 <= UI_ONE_FLOAT) {
      if (weight_factor_3 <= UI_ZERO_FLOAT) {
        weight_factor_3 = UI_ZERO_FLOAT;
      }
    }
    else {
      weight_factor_3 = SQRT(weight_factor_3);
    }
    weight_factor_4 = (weight_factor_4 - base_value) * weight_factor_3 + base_value;
  }
  return weight_factor_4;
}

// UI系统动画插值器 - 执行UI动画的插值计算
// 该函数实现了UI动画的插值计算，包括参数插值、权重计算、优化处理等功能
float ui_system_animation_interpolator(void)
{
  float base_value;
  longlong input_param;
  longlong resource_ptr;
  float weight_factor_1;
  float weight_factor_2;
  float threshold_value;
  float target_value_1;
  float target_value_2;
  
  base_value = *(float *)(input_param + UI_OFFSET_0X188);
  resource_ptr = FUN_18065cec0();
  target_value_2 = *(float *)(resource_ptr + UI_OFFSET_0XC);
  weight_factor_1 = *(float *)(resource_ptr + UI_OFFSET_0X10);
  weight_factor_2 = target_value_2;
  if (target_value_2 < threshold_value) {
    weight_factor_2 = -weight_factor_1;
    weight_factor_1 = -target_value_2;
  }
  target_value_2 = (threshold_value - weight_factor_2) / (weight_factor_1 - weight_factor_2);
  if (target_value_2 <= UI_ONE_FLOAT) {
    if (target_value_2 <= threshold_value) {
      target_value_2 = threshold_value;
    }
  }
  else {
    target_value_2 = SQRT(target_value_2);
  }
  return (target_value_1 - base_value) * target_value_2 + base_value;
}

// UI系统空函数 - 空操作函数
// 该函数是一个空操作函数，用于占位或默认处理
void ui_system_empty_function(void)
{
  return;
}

// UI系统动画缩放计算器 - 计算UI动画的缩放比例
// 该函数实现了UI动画缩放比例的计算，包括缩放参数计算、范围检查、优化处理等功能
float ui_system_animation_scale_calculator(longlong render_context_ptr, float scale_factor)
{
  float base_value;
  longlong resource_ptr;
  float calculated_scale;
  float min_scale;
  float max_scale;
  
  base_value = *(float *)(*(longlong *)(render_context_ptr + UI_OFFSET_0X10) + UI_OFFSET_0X188);
  if (UI_ZERO_FLOAT < scale_factor) {
    resource_ptr = FUN_18065cec0(render_context_ptr, 2);
    calculated_scale = *(float *)(resource_ptr + 8) / (base_value * scale_factor);
    min_scale = base_value * 0.7f;
    if ((base_value * 0.7f <= calculated_scale) && (min_scale = base_value * 1.3f, calculated_scale <= base_value * 1.3f)) {
      min_scale = calculated_scale;
    }
    return min_scale;
  }
  return base_value;
}

// UI系统内存初始化器 - 初始化UI系统内存
// 该函数实现了UI系统内存的初始化，包括内存清理、资源初始化、状态设置等功能
longlong ui_system_memory_initializer(longlong memory_context_ptr)
{
  longlong loop_counter_1;
  longlong loop_counter_2;
  longlong temp_ptr;
  
  loop_counter_2 = 6;
  loop_counter_1 = 6;
  temp_ptr = memory_context_ptr;
  do {
    func_0x0001804aabb0(temp_ptr);
    temp_ptr = temp_ptr + UI_OFFSET_0X104;
    loop_counter_1 = loop_counter_1 + -1;
  } while (loop_counter_1 != 0);
  temp_ptr = memory_context_ptr + UI_OFFSET_0X618;
  do {
    func_0x0001804aabb0(temp_ptr);
    temp_ptr = temp_ptr + UI_OFFSET_0X104;
    loop_counter_2 = loop_counter_2 + -1;
  } while (loop_counter_2 != 0);
  *(undefined8 *)(memory_context_ptr + UI_OFFSET_0XC30) = 0;
  return memory_context_ptr;
}

// UI系统高级渲染控制器 - 高级渲染控制功能
// 该函数实现了UI系统的高级渲染控制，包括渲染参数计算、状态管理、管线控制等功能
void ui_system_advanced_render_controller(longlong render_context_ptr,
                                        undefined8 render_param_1,
                                        undefined8 render_param_2,
                                        longlong resource_manager_ptr,
                                        undefined8 render_param_3,
                                        longlong render_data_ptr)
{
  undefined4 render_flag_1;
  undefined4 render_flag_2;
  undefined4 render_flag_3;
  undefined4 render_flag_4;
  int data_index;
  float weight_factor_1;
  float weight_factor_2;
  undefined4 render_flag_5;
  undefined4 render_flag_6;
  undefined4 render_flag_7;
  undefined4 render_flag_8;
  undefined1 control_flag;
  
  weight_factor_1 = *(float *)(render_data_ptr + UI_OFFSET_0X2C);
  data_index = *(int *)(render_data_ptr + UI_OFFSET_0X10);
  render_flag_6 = *(undefined4 *)(render_data_ptr + UI_OFFSET_0X40);
  render_flag_1 = *(undefined4 *)(render_data_ptr + UI_OFFSET_0X30);
  render_flag_2 = *(undefined4 *)(render_data_ptr + UI_OFFSET_0X34);
  render_flag_3 = *(undefined4 *)(render_data_ptr + UI_OFFSET_0X38);
  render_flag_4 = *(undefined4 *)(render_data_ptr + UI_OFFSET_0X44);
  render_flag_8 = *(undefined4 *)(render_data_ptr + UI_OFFSET_0X24);
  weight_factor_2 = (UI_THREE_FLOAT - (weight_factor_1 + weight_factor_1)) * weight_factor_1 * weight_factor_1;
  weight_factor_1 = UI_ONE_FLOAT - weight_factor_2;
  if (UI_ZERO_FLOAT < weight_factor_1) {
    if (*(int *)(render_data_ptr + UI_OFFSET_0X14) == 1) {
      control_flag = *(undefined1 *)(render_data_ptr + UI_OFFSET_0X28);
      render_flag_5 = render_flag_4;
      render_flag_7 = render_flag_8;
    }
    else {
      control_flag = 0;
      render_flag_5 = render_flag_6;
      render_flag_7 = render_flag_6;
    }
    FUN_18065fa20(**(longlong **)(render_context_ptr + UI_OFFSET_0XC30) + 
                  (longlong)*(int *)(render_data_ptr + UI_OFFSET_0X14) * 0x60,
                  render_param_1, weight_factor_1, resource_manager_ptr, render_param_3, 
                  render_flag_5, render_flag_7, weight_factor_1, render_flag_1, render_flag_2, 
                  render_flag_3, control_flag);
  }
  if (data_index == 1) {
    control_flag = *(undefined1 *)(render_data_ptr + UI_OFFSET_0X28);
    render_flag_6 = render_flag_4;
  }
  else {
    control_flag = 0;
    render_flag_8 = render_flag_6;
  }
  FUN_18065fa20(**(longlong **)(render_context_ptr + UI_OFFSET_0XC30) + (longlong)data_index * 0x60, 
                render_param_1, render_param_2, resource_manager_ptr, render_param_3, 
                render_flag_6, render_flag_8, weight_factor_2, render_flag_1, render_flag_2, 
                render_flag_3, control_flag);
  func_0x000180435370(render_param_2);
  if (*(longlong *)(resource_manager_ptr + UI_OFFSET_0X808) != 0) {
    func_0x000180435370(resource_manager_ptr);
  }
  return;
}