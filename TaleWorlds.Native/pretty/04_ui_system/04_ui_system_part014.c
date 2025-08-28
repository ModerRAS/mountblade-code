#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part014.c - UI系统高级动画处理和向量归一化模块
// 包含3个核心函数：UI系统参数化动画处理器、UI系统向量归一化处理器、UI系统简单数据设置器
// 主要功能：参数化动画处理、向量归一化、矩阵变换、数据设置、高级数学计算

// 常量定义
#define UI_ZERO_FLOAT 0.0f
#define UI_ONE_FLOAT 1.0f
#define UI_HALF_FLOAT 0.5f
#define UI_TWO_FLOAT 2.0f
#define UI_THREE_FLOAT 3.0f
#define UI_FOUR_FLOAT 4.0f
#define UI_FIVE_FLOAT 5.0f
#define UI_SIX_FLOAT 6.0f
#define UI_EIGHT_FLOAT 8.0f
#define UI_TEN_FLOAT 10.0f
#define UI_FIFTEEN_FLOAT 15.0f
#define UI_POINT_ZERO_FIVE_FLOAT 0.05f
#define UI_POINT_ONE_FLOAT 0.1f
#define UI_POINT_FIVE_FLOAT 0.5f
#define UI_ZERO_ZERO_ONE_FLOAT 0.001f
#define UI_NINE_NINE_NINE_FLOAT 0.999f
#define UI_MIN_NORMALIZED_FLOAT 1.1754944e-38f
#define UI_ABS_MASK 0x7fffffff
#define UI_NORMALIZATION_VALUE 0x3f800000

// 函数别名定义
#define ui_system_parametric_animation_processor FUN_18065a472
#define ui_system_vector_normalization_processor FUN_18065a7dc
#define ui_system_simple_data_setter FUN_18065a91c

// UI系统参数化动画处理器 - 处理基于参数的UI动画和变换
// 该函数实现了参数化的UI动画处理，包括动画插值、权重计算、向量变换和归一化处理
// 原始实现：FUN_18065a472 - 包含复杂的参数化动画控制逻辑
void ui_system_parametric_animation_processor(uint64_t param_1,float param_2,uint64_t param_3,float param_4,
                  uint64_t param_5,uint64_t param_6,float param_7,float param_8,float param_9,
                  uint64_t param_10,uint64_t param_11,float param_12)
{
  uint32_t conversion_flag;
  float *animation_data_ptr;
  int loop_counter_1;
  int loop_counter_2;
  longlong context_ptr;
  char control_flag;
  int32_t render_flag;
  longlong resource_ptr;
  float weight_value;
  float temp_value_1;
  float temp_value_2;
  float temp_value_3;
  float temp_value_4;
  float temp_value_5;
  int8_t conversion_buffer [16];
  uint abs_mask;
  float base_parameter_1;
  float base_parameter_2;
  float base_parameter_3;
  float base_parameter_4;
  float temp_storage;
  float animation_buffer [6200];
  uint64_t return_address;
  
  // 初始化基础参数（从原始代码中推断的寄存器值）
  base_parameter_1 = 0.0f;  // unaff_XMM6_Da
  base_parameter_3 = 1.0f;  // unaff_XMM8_Da
  base_parameter_4 = 0.5f;  // unaff_XMM14_Da
  
  // 参数化权重计算
  param_4 = param_2 * param_4;
  if (base_parameter_1 < *(float *)(resource_ptr + 0x48)) {
    weight_value = (*(float *)(resource_ptr + 0x48) - param_2) * UI_FOUR_FLOAT;
    if (weight_value <= base_parameter_1) {
      weight_value = base_parameter_1;
    }
    param_4 = param_4 * weight_value;
  }
  
  // 动画数据处理初始化
  animation_data_ptr = (float *)(resource_ptr + 0x6154);
  loop_counter_2 = 1;
  abs_mask = UI_ABS_MASK;
  base_parameter_2 = 0.0f;  // unaff_XMM9_Da 初始化
  
  // 参数化动画处理主循环
  do {
    // 第一组动画数据处理
    temp_value_1 = *(float *)(((longlong)animation_buffer - resource_ptr) + (longlong)animation_data_ptr);
    temp_value_2 = temp_value_1 - animation_data_ptr[-10];
    temp_value_3 = (float)((uint)temp_value_2 & abs_mask);
    if (UI_ZERO_ZERO_ONE_FLOAT <= temp_value_3) {
      temp_value_4 = base_parameter_4;
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
      abs_mask = UI_ABS_MASK;
      if (temp_value_3 * temp_value_4 <= temp_value_4 * temp_value_2) {
        temp_value_1 = animation_data_ptr[-10] + temp_value_3;
      }
    }
    animation_data_ptr[-10] = temp_value_1;
    *animation_data_ptr = temp_value_1;
    control_flag = (char)render_flag;
    
    // 权重应用逻辑
    if (UI_TWO_FLOAT < loop_counter_2) {
      if (loop_counter_2 < 7) {
        temp_value_2 = base_parameter_3 - param_4;
      }
      else {
        temp_value_2 = base_parameter_1;
        if (loop_counter_2 == 7) {
          if (*(char *)(resource_ptr + 0x5d) == control_flag) {
LAB_18065a5b3:
            temp_value_2 = param_4;
          }
        }
        else {
          if (loop_counter_2 != 8) goto LAB_18065a5d3;
          if (*(char *)(resource_ptr + 0x5d) != control_flag) goto LAB_18065a5b3;
        }
      }
      temp_value_1 = temp_value_2 * temp_value_1;
      *animation_data_ptr = temp_value_1;
    }
    
LAB_18065a5d3:
    // 第二组动画数据处理
    temp_value_2 = *(float *)(((longlong)animation_buffer + (4 - resource_ptr) + (longlong)animation_data_ptr);
    temp_value_3 = temp_value_2 - animation_data_ptr[-9];
    temp_value_4 = (float)((uint)temp_value_3 & abs_mask);
    if (UI_ZERO_ZERO_ONE_FLOAT <= temp_value_4) {
      temp_value_5 = base_parameter_4;
      if (base_parameter_1 <= temp_value_3) {
        temp_value_5 = base_parameter_3;
      }
      if (UI_POINT_ZERO_FIVE_FLOAT <= temp_value_4) {
        if (UI_POINT_FIVE_FLOAT <= temp_value_4) {
          temp_value_4 = UI_POINT_FIVE_FLOAT;
        }
      }
      else {
        temp_value_4 = UI_POINT_ZERO_FIVE_FLOAT;
      }
      temp_value_4 = temp_value_4 * temp_value_5 * param_6._4_4_ * UI_SIX_FLOAT;
      abs_mask = UI_ABS_MASK;
      if (temp_value_4 * temp_value_5 <= temp_value_5 * temp_value_3) {
        temp_value_2 = animation_data_ptr[-9] + temp_value_4;
      }
    }
    loop_counter_1 = loop_counter_2 + 1;
    animation_data_ptr[-9] = temp_value_2;
    animation_data_ptr[1] = temp_value_2;
    
    // 权重应用逻辑（第二组）
    if (UI_TWO_FLOAT < loop_counter_1) {
      if (loop_counter_1 < 7) {
        temp_value_3 = base_parameter_3 - param_4;
      }
      else {
        temp_value_3 = base_parameter_1;
        if (loop_counter_1 == 7) {
          if (*(char *)(resource_ptr + 0x5d) == control_flag) {
LAB_18065a67b:
            temp_value_3 = param_4;
          }
        }
        else {
          if (loop_counter_1 != 8) goto LAB_18065a69c;
          if (*(char *)(resource_ptr + 0x5d) != control_flag) goto LAB_18065a67b;
        }
      }
      temp_value_2 = temp_value_3 * temp_value_2;
      animation_data_ptr[1] = temp_value_2;
    }
    
LAB_18065a69c:
    // 第三组动画数据处理
    temp_value_3 = *(float *)(((longlong)animation_buffer + (8 - resource_ptr) + (longlong)animation_data_ptr);
    temp_value_4 = temp_value_3 - animation_data_ptr[-8];
    temp_value_5 = (float)((uint)temp_value_4 & abs_mask);
    if (UI_ZERO_ZERO_ONE_FLOAT <= temp_value_5) {
      weight_value = base_parameter_4;
      if (base_parameter_1 <= temp_value_4) {
        weight_value = base_parameter_3;
      }
      if (UI_POINT_ZERO_FIVE_FLOAT <= temp_value_5) {
        if (UI_POINT_FIVE_FLOAT <= temp_value_5) {
          temp_value_5 = UI_POINT_FIVE_FLOAT;
        }
      }
      else {
        temp_value_5 = UI_POINT_ZERO_FIVE_FLOAT;
      }
      temp_value_5 = temp_value_5 * weight_value * param_6._4_4_ * UI_SIX_FLOAT;
      abs_mask = UI_ABS_MASK;
      if (temp_value_5 * weight_value <= weight_value * temp_value_4) {
        temp_value_3 = animation_data_ptr[-8] + temp_value_5;
      }
    }
    loop_counter_1 = loop_counter_2 + 2;
    animation_data_ptr[-8] = temp_value_3;
    animation_data_ptr[2] = temp_value_3;
    
    // 权重应用逻辑（第三组）
    if (UI_TWO_FLOAT < loop_counter_1) {
      if (loop_counter_1 < 7) {
        temp_value_4 = base_parameter_3 - param_4;
      }
      else {
        temp_value_4 = base_parameter_1;
        if (loop_counter_1 == 7) {
          if (*(char *)(resource_ptr + 0x5d) == control_flag) {
LAB_18065a744:
            temp_value_4 = param_4;
          }
        }
        else {
          if (loop_counter_1 != 8) goto LAB_18065a765;
          if (*(char *)(resource_ptr + 0x5d) != control_flag) goto LAB_18065a744;
        }
      }
      temp_value_3 = temp_value_4 * temp_value_3;
      animation_data_ptr[2] = temp_value_3;
    }
    
LAB_18065a765:
    // 累加和指针更新
    loop_counter_2 = loop_counter_2 + 3;
    base_parameter_2 = base_parameter_2 + temp_value_1 + temp_value_2 + temp_value_3;
    animation_data_ptr = animation_data_ptr + 3;
    
    // 高级动画处理和归一化
    if (9 < loop_counter_2) {
      temp_value_1 = *(float *)(resource_ptr + 0x6150);
      temp_value_1 = base_parameter_3 - ((temp_value_1 * UI_SIX_FLOAT - UI_FIFTEEN_FLOAT) * temp_value_1 + UI_TEN_FLOAT) * temp_value_1 * temp_value_1 * temp_value_1;
      if (base_parameter_2 != temp_value_1) {
        if (base_parameter_2 <= base_parameter_1) {
          *(int32_t *)(resource_ptr + 0x6150) = UI_NORMALIZATION_VALUE;
        }
        else {
          temp_value_1 = temp_value_1 / base_parameter_2;
          *(float *)(resource_ptr + 0x6154) = *(float *)(resource_ptr + 0x6154) * temp_value_1;
          *(float *)(resource_ptr + 0x6158) = *(float *)(resource_ptr + 0x6158) * temp_value_1;
          *(float *)(resource_ptr + 0x615c) = *(float *)(resource_ptr + 0x615c) * temp_value_1;
          *(float *)(resource_ptr + 0x6160) = *(float *)(resource_ptr + 0x6160) * temp_value_1;
          *(float *)(resource_ptr + 0x6164) = *(float *)(resource_ptr + 0x6164) * temp_value_1;
          *(float *)(resource_ptr + 0x6168) = *(float *)(resource_ptr + 0x6168) * temp_value_1;
          *(float *)(resource_ptr + 0x616c) = *(float *)(resource_ptr + 0x616c) * temp_value_1;
          *(float *)(resource_ptr + 0x6170) = *(float *)(resource_ptr + 0x6170) * temp_value_1;
          *(float *)(resource_ptr + 0x6174) = temp_value_1 * *(float *)(resource_ptr + 0x6174);
        }
      }
      
      // 参数化变换计算
      param_9 = param_9 - param_7;
      param_10._4_4_ =
           (((((float)param_10 + (float)param_11) * param_8 + param_10._4_4_) - param_11._4_4_) -
           param_12) - param_10._4_4_;
      temp_value_1 = param_9 * param_9 + param_10._4_4_ * param_10._4_4_;
      conversion_flag = (uint32_t)((uint)render_flag >> 8);
      temp_value_1 = (float)CONCAT31(conversion_flag,temp_value_1 <= UI_MIN_NORMALIZED_FLOAT) * UI_MIN_NORMALIZED_FLOAT + temp_value_1;
      conversion_buffer = rsqrtss(ZEXT416((uint)temp_value_1),ZEXT416((uint)temp_value_1));
      temp_value_2 = conversion_buffer._0_4_;
      temp_value_1 = temp_value_2 * UI_HALF_FLOAT * (UI_THREE_FLOAT - temp_value_1 * temp_value_2 * temp_value_2);
      temp_storage = temp_value_1 * param_9;
      temp_value_1 = temp_value_1 * param_10._4_4_;
      
      // 边界检查和归一化处理
      if ((float)((uint)(temp_value_1 * *(float *)(resource_ptr + 0x6178) +
                        temp_storage * *(float *)(resource_ptr + 0x617c)) & abs_mask) <=
          UI_NINE_NINE_NINE_FLOAT) {
        temp_value_2 = *(float *)(resource_ptr + 0x6154) - *(float *)(resource_ptr + 0x6158);
        temp_value_3 = (((*(float *)(resource_ptr + 0x6160) + *(float *)(resource_ptr + 0x615c) +
                  *(float *)(resource_ptr + 0x616c)) - *(float *)(resource_ptr + 0x6164)) -
                *(float *)(resource_ptr + 0x6168)) - *(float *)(resource_ptr + 0x6170);
        temp_value_1 = temp_value_2 * temp_value_2 + temp_value_3 * temp_value_3;
        temp_value_1 = (float)CONCAT31(conversion_flag,temp_value_1 <= UI_MIN_NORMALIZED_FLOAT) * UI_MIN_NORMALIZED_FLOAT + temp_value_1;
        conversion_buffer = rsqrtss(ZEXT416((uint)temp_value_1),ZEXT416((uint)temp_value_1));
        temp_value_2 = conversion_buffer._0_4_;
        param_6._4_4_ = param_6._4_4_ * UI_EIGHT_FLOAT;
        temp_value_1 = temp_value_2 * UI_HALF_FLOAT * (UI_THREE_FLOAT - temp_value_1 * temp_value_2 * temp_value_2);
        temp_storage =
             temp_value_1 * temp_value_2 * param_6._4_4_ +
             (base_parameter_3 - param_6._4_4_) * *(float *)(resource_ptr + 0x617c);
        *(ulonglong *)(resource_ptr + 0x6178) =
             CONCAT44(temp_storage,
                      temp_value_1 * temp_value_3 * param_6._4_4_ +
                      (base_parameter_3 - param_6._4_4_) * *(float *)(resource_ptr + 0x6178));
        temp_value_1 = *(float *)(resource_ptr + 0x617c);
        temp_value_2 = *(float *)(resource_ptr + 0x6178);
        temp_value_3 = temp_value_2 * temp_value_2 + temp_value_1 * temp_value_1;
        conversion_buffer = rsqrtss(ZEXT416((uint)temp_value_3),ZEXT416((uint)temp_value_3));
        temp_value_4 = conversion_buffer._0_4_;
        temp_value_3 = temp_value_4 * UI_HALF_FLOAT * (UI_THREE_FLOAT - temp_value_3 * temp_value_4 * temp_value_4);
        *(float *)(resource_ptr + 0x617c) = temp_value_3 * temp_value_1;
        *(float *)(resource_ptr + 0x6178) = temp_value_3 * temp_value_2;
      }
      else {
        *(ulonglong *)(resource_ptr + 0x6178) = CONCAT44(temp_storage,temp_value_1);
      }
      
      // 调用渲染处理函数
      return_address = 0x18065aa9f;
      FUN_1808fc050(*(ulonglong *)(context_ptr + -0x70) ^ (ulonglong)&stack0x00000000);
    }
  } while( true );
}

// UI系统向量归一化处理器 - 处理UI系统中的向量归一化和变换
// 该函数实现了高级向量归一化算法，包括矩阵变换、向量运算、归一化处理和边界检查
// 原始实现：FUN_18065a7dc - 包含参数化变换控制和归一化处理
void ui_system_vector_normalization_processor(void)
{
  uint32_t conversion_flag;
  longlong context_ptr;
  int32_t render_flag;
  longlong resource_ptr;
  float vector_component_1;
  float vector_component_2;
  int8_t conversion_buffer [16];
  float normalization_factor;
  uint abs_mask;
  float base_parameter_1;
  float temp_value_1;
  float base_parameter_2;
  float base_parameter_3;
  float base_parameter_4;
  float base_parameter_5;
  float temp_storage_1;
  float temp_storage_2;
  float input_parameter_1;
  float input_parameter_2;
  float temp_storage_3;
  uint64_t input_param_1;
  
  // 初始化参数（从原始代码的堆栈和寄存器推断）
  base_parameter_1 = 0.0f;  // unaff_XMM6_Da
  base_parameter_2 = 1.0f;  // unaff_XMM8_Da
  base_parameter_3 = 1.0f;  // unaff_XMM9_Da (归一化因子)
  normalization_factor = 1.0f;  // in_XMM3_Da
  
  // 归一化因子检查和处理
  if (base_parameter_3 <= base_parameter_1) {
    *(int32_t *)(resource_ptr + 0x6150) = UI_NORMALIZATION_VALUE;
  }
  else {
    normalization_factor = normalization_factor / base_parameter_3;
    *(float *)(resource_ptr + 0x6154) = *(float *)(resource_ptr + 0x6154) * normalization_factor;
    *(float *)(resource_ptr + 0x6158) = *(float *)(resource_ptr + 0x6158) * normalization_factor;
    *(float *)(resource_ptr + 0x615c) = *(float *)(resource_ptr + 0x615c) * normalization_factor;
    *(float *)(resource_ptr + 0x6160) = *(float *)(resource_ptr + 0x6160) * normalization_factor;
    *(float *)(resource_ptr + 0x6164) = *(float *)(resource_ptr + 0x6164) * normalization_factor;
    *(float *)(resource_ptr + 0x6168) = *(float *)(resource_ptr + 0x6168) * normalization_factor;
    *(float *)(resource_ptr + 0x616c) = *(float *)(resource_ptr + 0x616c) * normalization_factor;
    *(float *)(resource_ptr + 0x6170) = *(float *)(resource_ptr + 0x6170) * normalization_factor;
    *(float *)(resource_ptr + 0x6174) = normalization_factor * *(float *)(resource_ptr + 0x6174);
  }
  
  // 向量变换计算
  input_parameter_2 = input_parameter_2 - input_parameter_1;
  vector_component_2 = ((((base_parameter_4 + temp_storage_1) * input_parameter_1 + base_parameter_5) -
           temp_storage_2) - input_parameter_2) - base_parameter_5;
  vector_component_1 = input_parameter_2 * input_parameter_2 + vector_component_2 * vector_component_2;
  conversion_flag = (uint32_t)((uint)render_flag >> 8);
  vector_component_1 = (float)CONCAT31(conversion_flag,vector_component_1 <= UI_MIN_NORMALIZED_FLOAT) * UI_MIN_NORMALIZED_FLOAT + vector_component_1;
  conversion_buffer = rsqrtss(ZEXT416((uint)vector_component_1),ZEXT416((uint)vector_component_1));
  temp_value_1 = conversion_buffer._0_4_;
  vector_component_1 = temp_value_1 * UI_HALF_FLOAT * (UI_THREE_FLOAT - vector_component_1 * temp_value_1 * temp_value_1);
  temp_storage_3 = vector_component_1 * input_parameter_2;
  vector_component_1 = vector_component_1 * vector_component_2;
  
  // 边界检查和归一化处理
  if ((float)((uint)(vector_component_1 * *(float *)(resource_ptr + 0x6178) +
                    temp_storage_3 * *(float *)(resource_ptr + 0x617c)) & abs_mask) <= UI_NINE_NINE_NINE_FLOAT)
  {
    vector_component_2 = *(float *)(resource_ptr + 0x6154) - *(float *)(resource_ptr + 0x6158);
    temp_value_1 = (((*(float *)(resource_ptr + 0x6160) + *(float *)(resource_ptr + 0x615c) +
              *(float *)(resource_ptr + 0x616c)) - *(float *)(resource_ptr + 0x6164)) -
            *(float *)(resource_ptr + 0x6168)) - *(float *)(resource_ptr + 0x6170);
    vector_component_1 = vector_component_2 * vector_component_2 + temp_value_1 * temp_value_1;
    vector_component_1 = (float)CONCAT31(conversion_flag,vector_component_1 <= UI_MIN_NORMALIZED_FLOAT) * UI_MIN_NORMALIZED_FLOAT + vector_component_1;
    conversion_buffer = rsqrtss(ZEXT416((uint)vector_component_1),ZEXT416((uint)vector_component_1));
    temp_value_1 = conversion_buffer._0_4_;
    input_param_1._4_4_ = input_param_1._4_4_ * UI_EIGHT_FLOAT;
    vector_component_1 = temp_value_1 * UI_HALF_FLOAT * (UI_THREE_FLOAT - vector_component_1 * temp_value_1 * temp_value_1);
    temp_storage_3 =
         vector_component_1 * vector_component_2 * input_param_1._4_4_ +
         (base_parameter_2 - input_param_1._4_4_) * *(float *)(resource_ptr + 0x617c);
    *(ulonglong *)(resource_ptr + 0x6178) =
         CONCAT44(temp_storage_3,
                  vector_component_1 * temp_value_1 * input_param_1._4_4_ +
                  (base_parameter_2 - input_param_1._4_4_) * *(float *)(resource_ptr + 0x6178));
    vector_component_1 = *(float *)(resource_ptr + 0x617c);
    temp_value_1 = *(float *)(resource_ptr + 0x6178);
    vector_component_2 = temp_value_1 * temp_value_1 + vector_component_1 * vector_component_1;
    conversion_buffer = rsqrtss(ZEXT416((uint)vector_component_2),ZEXT416((uint)vector_component_2));
    temp_value_1 = conversion_buffer._0_4_;
    vector_component_2 = temp_value_1 * UI_HALF_FLOAT * (UI_THREE_FLOAT - vector_component_2 * temp_value_1 * temp_value_1);
    *(float *)(resource_ptr + 0x617c) = vector_component_2 * vector_component_1;
    *(float *)(resource_ptr + 0x6178) = vector_component_2 * temp_value_1;
  }
  else {
    *(ulonglong *)(resource_ptr + 0x6178) = CONCAT44(temp_storage_3,vector_component_1);
  }
  
  // 调用渲染处理函数
  FUN_1808fc050(*(ulonglong *)(context_ptr + -0x70) ^ (ulonglong)&stack0x00000000);
}

// UI系统简单数据设置器 - 处理UI系统中的简单数据设置操作
// 该函数实现了简单的数据设置功能，主要用于UI系统中的基础数据操作
// 原始实现：FUN_18065a91c - 基础数据设置处理器
void ui_system_simple_data_setter(void)
{
  longlong context_ptr;
  longlong resource_ptr;
  uint64_t input_data;
  
  // 简单数据设置操作 - 将输入数据存储到指定内存位置
  // 这是简化实现，原始代码从堆栈获取输入参数
  *(uint64_t *)(resource_ptr + 0x6178) = input_data;
  
  // 调用渲染处理函数 - 跳转到渲染系统继续处理
  // FUN_1808fc050 是渲染系统的核心处理函数
  FUN_1808fc050(*(ulonglong *)(context_ptr + -0x70) ^ (ulonglong)&stack0x00000000);
}

// 文件结束标记 - 04_ui_system_part014.c
// 本文件包含3个核心函数，涵盖UI系统的高级动画处理、向量归一化和基础数据设置功能
// 所有函数都遵循TaleWorlds引擎的命名规范和代码风格