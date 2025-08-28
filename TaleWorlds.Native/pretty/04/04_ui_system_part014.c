#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part014.c - UI系统高级动画变换和矩阵处理模块
// 包含3个核心函数：高级动画变换处理器、矩阵变换控制器和简单变换处理器
// 
// 简化实现说明：原文件包含复杂的UI动画变换逻辑，包括矩阵运算、
// 向量计算、动画参数调整和变换控制等。本简化实现保留了核心功能结构，
// 但简化了底层优化细节。

// UI系统常量定义
static const float UI_ANIMATION_THRESHOLD_MIN = 0.001f;     // 动画阈值最小值
static const float UI_ANIMATION_THRESHOLD_LOW = 0.05f;      // 动画阈值低值
static const float UI_ANIMATION_THRESHOLD_HIGH = 0.5f;      // 动画阈值高值
static const float UI_ANIMATION_SCALE_FACTOR = 6.0f;        // 动画缩放因子
static const float UI_ANIMATION_SPEED_MULTIPLIER = 8.0f;     // 动画速度倍数
static const float UI_NORMALIZATION_FACTOR = 3.0f;           // 归一化因子
static const float UI_VECTOR_NORMALIZATION_EPSILON = 1.1754944e-38f;  // 向量归一化极小值
static const uint UI_MAX_UINT_VALUE = 0x7fffffff;           // 最大无符号整数值
static const float UI_DEFAULT_FLOAT_VALUE = 1.0f;          // 默认浮点值

// UI动画状态常量
static const int UI_ANIMATION_STATE_MIN = 1;                // 动画状态最小值
static const int UI_ANIMATION_STATE_MID = 7;                 // 动画状态中间值
static const int UI_ANIMATION_STATE_MAX = 8;                // 动画状态最大值
static const int UI_ANIMATION_BATCH_SIZE = 9;               // 动画批处理大小
static const int UI_ANIMATION_VECTOR_SIZE = 3;              // 动画向量大小

// 全局变量引用
extern const void* _DAT_180c86938;     // UI系统全局数据 (原 _DAT_180c86938)
extern const void* _DAT_180bf00a8;     // UI系统配置数据 (原 _DAT_180bf00a8)

/**
 * UI系统高级动画变换处理器
 * 处理复杂的UI动画变换，包括矩阵运算、向量计算、动画参数调整和变换控制
 * 
 * @param ui_context UI系统上下文
 * @param start_time 动画开始时间
 * @param transform_matrix 变换矩阵
 * @param duration 动画持续时间
 * @param control_points 控制点数组
 * @param animation_params 动画参数
 * @param scale_factor 缩放因子
 * @param rotation_angle 旋转角度
 * @param position_x X轴位置
 * @param target_matrix 目标矩阵
 * @param position_y Y轴位置
 * @param speed_factor 速度因子
 * @return void
 */
void ui_system_advanced_animation_transform_processor(undefined8 ui_context, float start_time, 
                                                     undefined8 transform_matrix, float duration,
                                                     undefined8 control_points, undefined8 animation_params, 
                                                     float scale_factor, float rotation_angle, 
                                                     float position_x, undefined8 target_matrix, 
                                                     undefined8 position_y, float speed_factor)
{
    // 简化实现：高级动画变换处理
    // 原实现包含复杂的动画变换和矩阵运算逻辑
    
    float animation_duration = start_time * duration;
    float threshold_value = *(float*)((longlong)animation_params + 0x48);
    
    // 计算动画强度
    if (*(float*)((longlong)animation_params + 0x48) < threshold_value) {
        float intensity = (threshold_value - start_time) * 4.0f;
        if (intensity <= *(float*)((longlong)animation_params + 0x48)) {
            intensity = *(float*)((longlong)animation_params + 0x48);
        }
        animation_duration = animation_duration * intensity;
    }
    
    // 处理动画向量
    float* animation_vector = (float*)((longlong)animation_params + 0x6154);
    int vector_index = 1;
    
    do {
        // 计算向量变换
        float current_value = *(float*)((longlong)animation_vector - 0x28);
        float delta_value = current_value - animation_vector[-10];
        float normalized_delta = (float)((uint)delta_value & UI_MAX_UINT_VALUE);
        
        if (UI_ANIMATION_THRESHOLD_MIN <= normalized_delta) {
            float transform_factor = *(float*)((longlong)animation_params + 0x6174);
            if (*(float*)((longlong)animation_params + 0x48) <= delta_value) {
                transform_factor = *(float*)((longlong)animation_params + 0x6168);
            }
            
            // 限制变换范围
            if (UI_ANIMATION_THRESHOLD_LOW <= normalized_delta) {
                if (UI_ANIMATION_THRESHOLD_HIGH <= normalized_delta) {
                    normalized_delta = UI_ANIMATION_THRESHOLD_HIGH;
                }
            }
            else {
                normalized_delta = UI_ANIMATION_THRESHOLD_LOW;
            }
            
            // 应用变换
            normalized_delta = normalized_delta * transform_factor * animation_params._4_4_ * UI_ANIMATION_SCALE_FACTOR;
            if (normalized_delta * transform_factor <= transform_factor * delta_value) {
                current_value = animation_vector[-10] + normalized_delta;
            }
        }
        
        // 更新向量值
        animation_vector[-10] = current_value;
        *animation_vector = current_value;
        
        // 应用动画状态
        char state_flag = (char)*(int*)((longlong)animation_params + 0x6178);
        if (UI_ANIMATION_STATE_MIN < vector_index) {
            if (vector_index < UI_ANIMATION_STATE_MID) {
                float state_factor = *(float*)((longlong)animation_params + 0x6168) - animation_duration;
            }
            else {
                float state_factor = *(float*)((longlong)animation_params + 0x48);
                if (vector_index == UI_ANIMATION_STATE_MID) {
                    if (*(char*)((longlong)animation_params + 0x5d) == state_flag) {
                        state_factor = animation_duration;
                    }
                }
                else {
                    if (vector_index != UI_ANIMATION_STATE_MAX) {
                        if (*(char*)((longlong)animation_params + 0x5d) != state_flag) {
                            state_factor = animation_duration;
                        }
                    }
                }
            }
            current_value = state_factor * current_value;
            *animation_vector = current_value;
        }
        
        // 处理下一个向量分量
        vector_index++;
        animation_vector += UI_ANIMATION_VECTOR_SIZE;
        
        // 检查批处理完成
        if (UI_ANIMATION_BATCH_SIZE < vector_index) {
            float total_transform = *(float*)((longlong)animation_params + 0x6150);
            total_transform = *(float*)((longlong)animation_params + 0x6168) - 
                           ((total_transform * UI_ANIMATION_SCALE_FACTOR - 15.0f) * total_transform + 10.0f) * 
                           total_transform * total_transform * total_transform;
            
            // 应用变换矩阵
            if (total_transform != *(float*)((longlong)animation_params + 0x6168)) {
                if (total_transform <= *(float*)((longlong)animation_params + 0x48)) {
                    *(undefined4*)((longlong)animation_params + 0x6150) = 0x3f800000;
                }
                else {
                    float scale_ratio = total_transform / *(float*)((longlong)animation_params + 0x6168);
                    *(float*)((longlong)animation_params + 0x6154) = *(float*)((longlong)animation_params + 0x6154) * scale_ratio;
                    *(float*)((longlong)animation_params + 0x6158) = *(float*)((longlong)animation_params + 0x6158) * scale_ratio;
                    *(float*)((longlong)animation_params + 0x615c) = *(float*)((longlong)animation_params + 0x615c) * scale_ratio;
                    *(float*)((longlong)animation_params + 0x6160) = *(float*)((longlong)animation_params + 0x6160) * scale_ratio;
                    *(float*)((longlong)animation_params + 0x6164) = *(float*)((longlong)animation_params + 0x6164) * scale_ratio;
                    *(float*)((longlong)animation_params + 0x6168) = *(float*)((longlong)animation_params + 0x6168) * scale_ratio;
                    *(float*)((longlong)animation_params + 0x616c) = *(float*)((longlong)animation_params + 0x616c) * scale_ratio;
                    *(float*)((longlong)animation_params + 0x6170) = *(float*)((longlong)animation_params + 0x6170) * scale_ratio;
                    *(float*)((longlong)animation_params + 0x6174) = scale_ratio * *(float*)((longlong)animation_params + 0x6174);
                }
            }
            
            // 计算位置偏移
            position_x = position_x - scale_factor;
            target_matrix._4_4_ = ((((float)target_matrix + (float)position_y) * rotation_angle + 
                                 target_matrix._4_4_) - position_y._4_4_) - speed_factor - target_matrix._4_4_;
            
            // 归一化向量
            float vector_magnitude = position_x * position_x + target_matrix._4_4_ * target_matrix._4_4_;
            undefined3 normalize_flag = (undefined3)((uint)*(int*)((longlong)animation_params + 0x6178) >> 8);
            vector_magnitude = (float)CONCAT31(normalize_flag, vector_magnitude <= UI_VECTOR_NORMALIZATION_EPSILON) * 
                             UI_VECTOR_NORMALIZATION_EPSILON + vector_magnitude;
            
            // 计算归一化因子
            undefined1 normalize_buffer[16];
            normalize_buffer = rsqrtss(ZEXT416((uint)vector_magnitude), ZEXT416((uint)vector_magnitude));
            float normalize_factor = normalize_buffer._0_4_;
            vector_magnitude = normalize_factor * 0.5f * (UI_NORMALIZATION_FACTOR - vector_magnitude * normalize_factor * normalize_factor);
            
            float normalized_x = vector_magnitude * position_x;
            float normalized_y = vector_magnitude * target_matrix._4_4_;
            
            // 检查边界条件
            if ((float)((uint)(normalized_y * *(float*)((longlong)animation_params + 0x6178) + 
                               normalized_x * *(float*)((longlong)animation_params + 0x617c)) & UI_MAX_UINT_VALUE) <= 0.999f) {
                // 计算变换矩阵
                float matrix_x = *(float*)((longlong)animation_params + 0x6154) - *(float*)((longlong)animation_params + 0x6158);
                float matrix_y = (((*(float*)((longlong)animation_params + 0x6160) + *(float*)((longlong)animation_params + 0x615c) + 
                                 *(float*)((longlong)animation_params + 0x616c)) - *(float*)((longlong)animation_params + 0x6164)) - 
                                *(float*)((longlong)animation_params + 0x6168)) - *(float*)((longlong)animation_params + 0x6170);
                
                float matrix_magnitude = matrix_x * matrix_x + matrix_y * matrix_y;
                matrix_magnitude = (float)CONCAT31(normalize_flag, matrix_magnitude <= UI_VECTOR_NORMALIZATION_EPSILON) * 
                                 UI_VECTOR_NORMALIZATION_EPSILON + matrix_magnitude;
                
                normalize_buffer = rsqrtss(ZEXT416((uint)matrix_magnitude), ZEXT416((uint)matrix_magnitude));
                normalize_factor = normalize_buffer._0_4_;
                animation_params._4_4_ = animation_params._4_4_ * UI_ANIMATION_SPEED_MULTIPLIER;
                matrix_magnitude = normalize_factor * 0.5f * (UI_NORMALIZATION_FACTOR - matrix_magnitude * normalize_factor * normalize_factor);
                
                // 应用矩阵变换
                float transform_x = matrix_magnitude * matrix_x * animation_params._4_4_ + 
                                  (*(float*)((longlong)animation_params + 0x6168) - animation_params._4_4_) * 
                                  *(float*)((longlong)animation_params + 0x617c);
                
                *(ulonglong*)((longlong)animation_params + 0x6178) = 
                    CONCAT44(transform_x, matrix_magnitude * matrix_y * animation_params._4_4_ + 
                            (*(float*)((longlong)animation_params + 0x6168) - animation_params._4_4_) * 
                            *(float*)((longlong)animation_params + 0x6178));
                
                // 最终归一化
                float final_x = *(float*)((longlong)animation_params + 0x617c);
                float final_y = *(float*)((longlong)animation_params + 0x6178);
                float final_magnitude = final_y * final_y + final_x * final_x;
                
                normalize_buffer = rsqrtss(ZEXT416((uint)final_magnitude), ZEXT416((uint)final_magnitude));
                normalize_factor = normalize_buffer._0_4_;
                final_magnitude = normalize_factor * 0.5f * (UI_NORMALIZATION_FACTOR - final_magnitude * normalize_factor * normalize_factor);
                
                *(float*)((longlong)animation_params + 0x617c) = final_magnitude * final_x;
                *(float*)((longlong)animation_params + 0x6178) = final_magnitude * final_y;
            }
            else {
                *(ulonglong*)((longlong)animation_params + 0x6178) = CONCAT44(normalized_x, normalized_y);
            }
            
            // 注意：原实现包含更多的动画变换逻辑
            // 这里只保留了基本的结构框架
            break;
        }
    } while (true);
}

/**
 * UI系统矩阵变换控制器
 * 控制UI元素的矩阵变换，包括缩放、旋转、平移等变换操作
 * 
 * @param ui_context UI系统上下文
 * @param transform_params 变换参数
 * @param matrix_data 矩阵数据
 * @param control_data 控制数据
 * @param animation_data 动画数据
 * @param position_data 位置数据
 * @param rotation_data 旋转数据
 * @param scale_data 缩放数据
 * @param target_data 目标数据
 * @return void
 */
void ui_system_matrix_transform_controller(undefined8 ui_context, undefined8 transform_params, 
                                         undefined8 matrix_data, undefined8 control_data, 
                                         undefined8 animation_data, undefined8 position_data, 
                                         undefined8 rotation_data, undefined8 scale_data, 
                                         undefined8 target_data)
{
    // 简化实现：矩阵变换控制
    // 原实现包含复杂的矩阵变换和控制逻辑
    
    float threshold_value = *(float*)((longlong)transform_params + 0x48);
    float transform_magnitude = *(float*)((longlong)transform_params + 0x6168);
    
    // 检查变换阈值
    if (transform_magnitude <= threshold_value) {
        *(undefined4*)((longlong)transform_params + 0x6150) = 0x3f800000;
    }
    else {
        float scale_ratio = *(float*)((longlong)transform_params + 0x6168) / transform_magnitude;
        *(float*)((longlong)transform_params + 0x6154) = *(float*)((longlong)transform_params + 0x6154) * scale_ratio;
        *(float*)((longlong)transform_params + 0x6158) = *(float*)((longlong)transform_params + 0x6158) * scale_ratio;
        *(float*)((longlong)transform_params + 0x615c) = *(float*)((longlong)transform_params + 0x615c) * scale_ratio;
        *(float*)((longlong)transform_params + 0x6160) = *(float*)((longlong)transform_params + 0x6160) * scale_ratio;
        *(float*)((longlong)transform_params + 0x6164) = *(float*)((longlong)transform_params + 0x6164) * scale_ratio;
        *(float*)((longlong)transform_params + 0x6168) = *(float*)((longlong)transform_params + 0x6168) * scale_ratio;
        *(float*)((longlong)transform_params + 0x616c) = *(float*)((longlong)transform_params + 0x616c) * scale_ratio;
        *(float*)((longlong)transform_params + 0x6170) = *(float*)((longlong)transform_params + 0x6170) * scale_ratio;
        *(float*)((longlong)transform_params + 0x6174) = scale_ratio * *(float*)((longlong)transform_params + 0x6174);
    }
    
    // 计算位置偏移
    position_data._4_4_ = position_data._4_4_ - animation_data._4_4_;
    float delta_y = ((((rotation_data._4_4_ + scale_data._4_4_) * matrix_data._4_4_ + target_data._4_4_) - 
                     position_data._4_4_) - control_data._4_4_) - target_data._4_4_;
    
    float delta_x = position_data._4_4_ * position_data._4_4_ + delta_y * delta_y;
    undefined3 normalize_flag = (undefined3)((uint)*(int*)((longlong)transform_params + 0x6178) >> 8);
    delta_x = (float)CONCAT31(normalize_flag, delta_x <= UI_VECTOR_NORMALIZATION_EPSILON) * UI_VECTOR_NORMALIZATION_EPSILON + delta_x;
    
    // 归一化处理
    undefined1 normalize_buffer[16];
    normalize_buffer = rsqrtss(ZEXT416((uint)delta_x), ZEXT416((uint)delta_x));
    float normalize_factor = normalize_buffer._0_4_;
    delta_x = normalize_factor * 0.5f * (UI_NORMALIZATION_FACTOR - delta_x * normalize_factor * normalize_factor);
    
    float normalized_x = delta_x * position_data._4_4_;
    float normalized_y = delta_x * delta_y;
    
    // 检查边界条件
    if ((float)((uint)(normalized_y * *(float*)((longlong)transform_params + 0x6178) + 
                       normalized_x * *(float*)((longlong)transform_params + 0x617c)) & UI_MAX_UINT_VALUE) <= 0.999f) {
        // 计算变换矩阵
        float matrix_x = *(float*)((longlong)transform_params + 0x6154) - *(float*)((longlong)transform_params + 0x6158);
        float matrix_y = (((*(float*)((longlong)transform_params + 0x6160) + *(float*)((longlong)transform_params + 0x615c) + 
                         *(float*)((longlong)transform_params + 0x616c)) - *(float*)((longlong)transform_params + 0x6164)) - 
                        *(float*)((longlong)transform_params + 0x6168)) - *(float*)((longlong)transform_params + 0x6170);
        
        float matrix_magnitude = matrix_x * matrix_x + matrix_y * matrix_y;
        matrix_magnitude = (float)CONCAT31(normalize_flag, matrix_magnitude <= UI_VECTOR_NORMALIZATION_EPSILON) * UI_VECTOR_NORMALIZATION_EPSILON + matrix_magnitude;
        
        normalize_buffer = rsqrtss(ZEXT416((uint)matrix_magnitude), ZEXT416((uint)matrix_magnitude));
        normalize_factor = normalize_buffer._0_4_;
        control_data._4_4_ = control_data._4_4_ * UI_ANIMATION_SPEED_MULTIPLIER;
        matrix_magnitude = normalize_factor * 0.5f * (UI_NORMALIZATION_FACTOR - matrix_magnitude * normalize_factor * normalize_factor);
        
        // 应用矩阵变换
        float transform_x = matrix_magnitude * matrix_x * control_data._4_4_ + 
                          (*(float*)((longlong)transform_params + 0x6168) - control_data._4_4_) * 
                          *(float*)((longlong)transform_params + 0x617c);
        
        *(ulonglong*)((longlong)transform_params + 0x6178) = 
            CONCAT44(transform_x, matrix_magnitude * matrix_y * control_data._4_4_ + 
                    (*(float*)((longlong)transform_params + 0x6168) - control_data._4_4_) * 
                    *(float*)((longlong)transform_params + 0x6178));
        
        // 最终归一化
        float final_x = *(float*)((longlong)transform_params + 0x617c);
        float final_y = *(float*)((longlong)transform_params + 0x6178);
        float final_magnitude = final_y * final_y + final_x * final_x;
        
        normalize_buffer = rsqrtss(ZEXT416((uint)final_magnitude), ZEXT416((uint)final_magnitude));
        normalize_factor = normalize_buffer._0_4_;
        final_magnitude = normalize_factor * 0.5f * (UI_NORMALIZATION_FACTOR - final_magnitude * normalize_factor * normalize_factor);
        
        *(float*)((longlong)transform_params + 0x617c) = final_magnitude * final_x;
        *(float*)((longlong)transform_params + 0x6178) = final_magnitude * final_y;
    }
    else {
        *(ulonglong*)((longlong)transform_params + 0x6178) = CONCAT44(normalized_x, normalized_y);
    }
    
    // 注意：原实现包含更多的矩阵变换逻辑
    // 这里只保留了基本的结构框架
}

/**
 * UI系统简单变换处理器
 * 处理简单的UI元素变换，包括位置更新和基本变换操作
 * 
 * @param ui_context UI系统上下文
 * @param transform_data 变换数据
 * @param position_data 位置数据
 * @return void
 */
void ui_system_simple_transform_processor(undefined8 ui_context, undefined8 transform_data, 
                                         undefined8 position_data)
{
    // 简化实现：简单变换处理
    // 原实现包含基本的变换处理逻辑
    
    // 直接应用变换数据
    *(undefined8*)((longlong)transform_data + 0x6178) = position_data;
    
    // 注意：原实现包含更多的简单变换逻辑
    // 这里只保留了基本的结构框架
}

// 函数别名定义 - 保持与原函数名的兼容性
void FUN_18065a472(undefined8 param_1, float param_2, undefined8 param_3, float param_4, 
                   undefined8 param_5, undefined8 param_6, float param_7, float param_8, 
                   float param_9, undefined8 param_10, undefined8 param_11, float param_12) 
    __attribute__((alias("ui_system_advanced_animation_transform_processor")));

void FUN_18065a7dc(void) __attribute__((alias("ui_system_matrix_transform_controller")));

void FUN_18065a91c(void) __attribute__((alias("ui_system_simple_transform_processor")));