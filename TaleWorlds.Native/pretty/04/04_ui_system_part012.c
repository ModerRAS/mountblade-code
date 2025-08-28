/* 函数别名定义: MathStatisticsProcessor */
#define MathStatisticsProcessor MathStatisticsProcessor


/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part012.c - UI系统高级动画和变换处理模块
// 包含1个核心函数：ui_system_advanced_animation_processor
// 涵盖UI元素复杂动画变换、矩阵运算、角度归一化、动画参数优化、高级渲染控制等高级UI功能

// 常量定义
#define PI 3.1415927f
#define TWO_PI 6.2831855f
#define HALF_PI 1.5707964f
#define NORMALIZATION_FACTOR 0.63661975f
#define ANIMATION_THRESHOLD 0.001f
#define MINIMUM_DIFFERENCE 0.05f
#define MAXIMUM_DIFFERENCE 0.5f
#define WEIGHT_MULTIPLIER 12.0f
#define ANIMATION_SPEED_FACTOR 6.0f
#define NORMALIZATION_THRESHOLD 0.75f
#define DEFAULT_BLEND_FACTOR 0.5f
#define ANIMATION_BLEND_THRESHOLD 0.2f
#define SCALE_FACTOR 3.333333f
#define INTERPOLATION_FACTOR 4.0f
#define DEFAULT_MULTIPLIER 5.0f
#define MINIMUM_SCALE 2.0f
#define MEDIUM_SCALE 3.0f
#define MAXIMUM_SCALE 5.0f
#define NORMALIZATION_RANGE_MIN 0.95f
#define NORMALIZATION_RANGE_MAX 1.05f
#define MATRIX_MULTIPLIER 8.0f

// 函数别名定义
#define ui_system_advanced_animation_processor FUN_1806598ca
#define ui_system_calculate_angle_difference FUN_18065c070
#define ui_system_interpolate_animation_value FUN_18065bf60
#define ui_system_get_animation_data MathStatisticsProcessor0
#define ui_system_error_handler SystemSecurityChecker
#define ui_system_assertion_handler AdvancedSystemController

// 全局数组定义
static float ui_animation_buffer[6200];

/**
 * UI系统高级动画处理器
 * 
 * 该函数负责处理UI元素的复杂动画变换，包括：
 * - 角度归一化和动画插值
 * - 矩阵变换和渲染控制
 * - 动画参数优化和状态管理
 * - 高级渲染管线控制
 * 
 * @param ui_context UI系统上下文指针
 * @param animation_id 动画标识符
 * @param frame_count 帧计数
 * @param transform_matrix 变换矩阵
 * @param animation_params 动画参数结构
 * @param render_params 渲染参数结构
 * @param timing_params 时间参数结构
 * @param control_params 控制参数结构
 * @param blend_params 混合参数结构
 * @param effect_params 效果参数结构
 * @param state_params 状态参数结构
 * @param callback_params 回调参数结构
 * @param user_data 用户数据指针
 */
void ui_system_advanced_animation_processor(
    uint64_t ui_context,
    uint animation_id,
    uint frame_count,
    uint64_t transform_matrix,
    uint64_t animation_params,
    uint64_t render_params,
    uint64_t timing_params,
    uint64_t control_params,
    uint64_t blend_params,
    uint64_t effect_params,
    uint64_t state_params,
    uint64_t callback_params,
    uint64_t user_data)
{
    float *animation_data_ptr;
    char status_flag;
    bool animation_active;
    int64_t temp_offset;
    float *weight_ptr;
    int index_counter;
    int64_t animation_offset;
    int64_t matrix_offset;
    uint64_t context_register;
    int64_t base_pointer;
    int loop_counter;
    uint64_t data_register;
    uint64_t iteration_count;
    int64_t offset_register;
    char condition_flag;
    float time_scale;
    float *animation_array;
    char state_byte;
    bool zero_flag;
    float current_value;
    float target_value;
    float interpolated_value;
    float normalized_value;
    float animation_speed;
    float blend_factor;
    float interpolation_weight;
    float result_value;
    float delta_value;
    float matrix_value;
    int8_t temp_array[16];
    float temp_float;
    float stack_value_1;
    float stack_value_2;
    float stack_value_3;
    float stack_value_4;
    float stack_value_5;
    float local_buffer[6200];
    uint64_t stack_canary;
    
    // 初始化检查
    if (!zero_flag) {
        // WARNING: Subroutine does not return
        stack_canary = 0x1806598e8;
        ui_system_assertion_handler(animation_id ^ frame_count);
    }
    
    // 初始化动画参数
    temp_float = stack_value_2;
    normalized_value = stack_value_1;
    result_value = animation_array[0x185d];
    
    // 检查动画激活状态
    if (((animation_array[0x10] == time_scale) || (animation_array[0x10] == 0.5f)) || 
        (result_value <= time_scale)) {
        animation_active = false;
    } else {
        animation_active = true;
    }
    
    // 设置栈帧标识
    stack_canary = 0x1806599e0;
    
    // 计算动画角度
    current_value = (float)atan2f(
        *(uint *)(*(int64_t *)(offset_register + 0x10) + 0x80) ^ frame_count,
        *(int32_t *)(*(int64_t *)(offset_register + 0x10) + 0x84));
    current_value = current_value + animation_array[6];
    animation_array[0xb] = current_value;
    
    // 角度归一化处理
    if (current_value <= PI) {
        if (current_value < -PI) {
            current_value = current_value + TWO_PI;
            goto angle_normalization_complete;
        }
    } else {
        current_value = current_value - TWO_PI;
    angle_normalization_complete:
        animation_array[0xb] = current_value;
    }
    
    // 处理动画帧数据
    current_value = animation_array[0x18];
    matrix_offset = (int64_t)(int)current_value;
    condition_flag = SUB41(time_scale, 0);
    
    if (0 < (int)current_value) {
        target_value = time_scale;
        if (*(char *)(matrix_offset * 0x1358 + 0x4e + (int64_t)animation_array) != condition_flag) {
            target_value = animation_array[matrix_offset * 0x4d6 + 0x12] * 0.05f;
        }
        
        if ((target_value + animation_array[matrix_offset * 0x4d6 + 0xe] < 
             animation_array[matrix_offset * 0x4d6 + 0x11]) ||
            (*(char *)(animation_array + matrix_offset * 0x4d6 + 0x13) != condition_flag)) {
            animation_array[0xc] = animation_array[0xb];
            current_value = animation_array[0x18];
        }
        
        matrix_offset = (int64_t)(int)current_value;
        target_value = time_scale;
        if (*(char *)(matrix_offset * 0x1358 + 0x66 + (int64_t)animation_array) != condition_flag) {
            target_value = animation_array[matrix_offset * 0x4d6 + 0x18] * 0.05f;
        }
        
        if ((target_value + animation_array[matrix_offset * 0x4d6 + 0x14] < 
             animation_array[matrix_offset * 0x4d6 + 0x17]) ||
            (*(char *)(animation_array + matrix_offset * 0x4d6 + 0x19) != condition_flag)) {
            animation_array[0xd] = animation_array[0xb];
            current_value = animation_array[0x18];
        }
    }
    
    // 检查动画状态条件
    if ((((((int)current_value < 1) || (time_scale != animation_array[2])) || 
          (time_scale != animation_array[3])) || (time_scale == animation_array[6])) ||
        ((ABS(animation_array[0xb] - animation_array[0xc]) < DEFAULT_BLEND_FACTOR && 
          (ABS(animation_array[0xb] - animation_array[0xd]) < DEFAULT_BLEND_FACTOR)))) {
        
        if (((animation_active) && ((time_scale == animation_array[2] && 
                                   (time_scale == animation_array[3])))) ||
            ((animation_array[0x14] = time_scale, render_params._0_4_ = time_scale,
              time_scale <= stack_value_1 &&
              (render_params._0_4_ = stack_value_3, stack_value_1 <= time_scale)))) {
            goto animation_processing_complete;
        }
    } else {
        animation_active = true;
        animation_array[0x14] = 1.0f;
    animation_processing_complete:
        if (((state_byte == '\0') ||
            (render_params._0_4_ = stack_value_3,
             stack_value_3 < animation_array[0x1854] || stack_value_3 == animation_array[0x1854])) &&
            (render_params._0_4_ = stack_value_3, *(char *)(animation_array + 0x17) != condition_flag)) {
            render_params._0_4_ = time_scale;
        }
    }
    
    // 处理动画插值
    if ((result_value <= time_scale) && (time_scale < animation_array[0x14])) {
        result_value = animation_array[0xb] - animation_array[0xc];
        current_value = animation_array[0xb] - animation_array[0xd];
        if (ABS(result_value) <= ABS(current_value)) {
            result_value = current_value;
        }
        
        if (result_value <= PI) {
            if (result_value < -PI) {
                result_value = result_value + TWO_PI;
            }
        } else {
            result_value = result_value - TWO_PI;
        }
        
        current_value = time_scale;
        if (time_scale < result_value) {
            current_value = 0.5f;
        }
        animation_array[0x10] = current_value;
    }
    
    // 处理动画权重
    if ((animation_active) && (0 < (int)animation_array[0x18])) {
        weight_ptr = animation_array + 0x1b;
        iteration_count = (uint64_t)(uint)animation_array[0x18];
        result_value = time_scale;
        
        do {
            animation_data_ptr = weight_ptr + 0x495;
            current_value = *weight_ptr;
            weight_ptr = weight_ptr + 0x4d6;
            result_value = result_value + 
                *(float *)(*(int64_t *)(*(int64_t *)animation_data_ptr + 0x48) + 0x188) * current_value;
            iteration_count = iteration_count - 1;
        } while (iteration_count != 0);
        
        current_value = animation_array[0x10];
        result_value = (timing_params._4_4_ * animation_array[7]) / result_value + current_value;
        animation_array[0x10] = result_value;
        
        if (result_value <= stack_value_3) {
            if ((((current_value <= 0.5f) && (0.5f < result_value)) && 
                 (ABS(animation_array[0xb] - animation_array[0xc]) < 0.5f)) &&
                (ABS(animation_array[0xb] - animation_array[0xd]) < 0.5f)) {
                animation_array[0x10] = 0.5f;
            }
        } else if ((0.5f <= ABS(animation_array[0xb] - animation_array[0xc])) ||
                  (0.5f <= ABS(animation_array[0xb] - animation_array[0xd]))) {
            animation_array[0x10] = result_value - stack_value_3;
        } else {
            animation_array[0x10] = time_scale;
        }
    }
    
    // 处理动画状态标志
    condition_flag = *(char *)(base_pointer + 0xa0);
    status_flag = *(char *)(base_pointer + 0xa8);
    
    if ((((condition_flag != '\0') || (status_flag != '\0')) &&
        ((time_scale != animation_array[2] || (time_scale != animation_array[3])))) ||
        (((time_scale != animation_array[4] || (time_scale != animation_array[5])) ||
          (result_value = stack_value_3, time_scale < animation_array[0x14])))) {
        result_value = time_scale;
    }
    
    // 计算动画参数
    interpolated_value = timing_params._4_4_ + timing_params._4_4_;
    target_value = *animation_array - animation_array[1];
    current_value = target_value;
    
    if ((interpolated_value < ABS(target_value)) && 
        (current_value = interpolated_value, target_value < time_scale)) {
        current_value = -interpolated_value;
    }
    
    animation_array[1] = animation_array[1] + current_value;
    stack_canary = 0x180659d72;
    current_value = (float)ui_system_calculate_angle_difference(
        ABS(target_value), current_value, user_data);
    
    if (current_value <= NORMALIZATION_THRESHOLD) {
        current_value = NORMALIZATION_THRESHOLD;
    }
    
    target_value = current_value - animation_array[0x16];
    if (ANIMATION_THRESHOLD <= ABS(target_value)) {
        current_value = target_value * timing_params._4_4_ + animation_array[0x16];
    }
    animation_array[0x16] = current_value;
    
    // 处理动画时间线
    if ((stack_value_4 <= time_scale) || (animation_array[0x1854] <= time_scale)) {
        animation_array[0xf] = 0.0f;
    } else {
        current_value = time_scale;
        if (0 < (int)animation_array[0x18]) {
            weight_ptr = animation_array + 0x1b;
            iteration_count = (uint64_t)(uint)animation_array[0x18];
            
            do {
                animation_data_ptr = weight_ptr + 0x495;
                target_value = *weight_ptr;
                weight_ptr = weight_ptr + 0x4d6;
                current_value = current_value + 
                    *(float *)(**(int64_t **)animation_data_ptr + 0x188) * target_value;
                iteration_count = iteration_count - 1;
            } while (iteration_count != 0);
        }
        
        stack_canary = 0x180659e10;
        current_value = (float)fmodf(timing_params._4_4_ / current_value + animation_array[0xf]);
        animation_array[0xf] = current_value;
    }
    
    // 处理动画插值序列
    target_value = animation_array[0x18];
    loop_counter = 0;
    interpolated_value = time_scale;
    
    if (0 < (int)target_value) {
        weight_ptr = animation_array + 0x1b;
        
        do {
            stack_canary = 0x180659e3d;
            current_value = (float)ui_system_interpolate_animation_value(
                current_value, loop_counter);
            current_value = current_value * *weight_ptr;
            loop_counter = loop_counter + 1;
            weight_ptr = weight_ptr + 0x4d6;
            interpolated_value = interpolated_value + current_value;
        } while (loop_counter < (int)target_value);
        
        condition_flag = *(char *)(base_pointer + 0xa0);
    }
    
    // 处理动画混合
    if (result_value < stack_value_3) {
        if (animation_array[0x1854] <= stack_value_3 && stack_value_3 != animation_array[0x1854]) {
            current_value = interpolated_value * timing_params._4_4_ + animation_array[0xe];
            animation_array[0xe] = current_value;
            
            if (stack_value_3 < current_value) {
                animation_array[0xe] = current_value - stack_value_3;
            }
        } else if ((int)target_value < 1) {
            animation_array[0xe] = time_scale;
        } else {
            current_value = stack_value_3;
            if (*(char *)(animation_array + 0x17) != '\0') {
                current_value = -1.0f;
            }
            
            temp_offset = *(int64_t *)(animation_array + (int64_t)(int)target_value * 0x4d6 + -0x26);
            stack_canary = 0x180659ea7;
            matrix_offset = ui_system_get_animation_data(*(uint64_t *)(temp_offset + 8));
            animation_offset = 0x14;
            
            if (time_scale <= (effect_params._4_4_ - ABS((float)effect_params)) * current_value) {
                animation_offset = 0x18;
            }
            
            current_value = *(float *)(animation_offset + matrix_offset);
            stack_canary = 0x180659edd;
            ui_system_get_animation_data(*(uint64_t *)(temp_offset + 8));
            animation_array[0xe] = current_value;
        }
    }
    
    // 处理矩阵变换
    stack_value_2 = (float)((uint64_t)data_register >> 0x20);
    stack_value_1 = (float)data_register;
    target_value = stack_value_2 * stack_value_2 + stack_value_1 * stack_value_1;
    target_value = (float)(target_value <= 1.1754944e-38) * 1.1754944e-38 + target_value;
    temp_array = rsqrtss(ZEXT416((uint)target_value), ZEXT416((uint)target_value));
    matrix_value = temp_array._0_4_;
    current_value = stack_value_3;
    
    if (stack_value_2 * matrix_value * 0.5f * (3.0f - target_value * matrix_value * matrix_value) < -0.2f) {
        current_value = time_scale;
    }
    animation_array[0x13] = current_value;
    
    // 处理动画变换
    stack_value_1 = (float)context_register;
    stack_value_2 = (float)((uint64_t)context_register >> 0x20);
    
    if ((normalized_value != time_scale) || (temp_float != time_scale)) {
        if (time_scale <= stack_value_1 * normalized_value) {
            if (ABS(stack_value_1) < ABS(normalized_value)) {
                stack_value_1 = normalized_value;
            }
        } else {
            stack_value_1 = stack_value_1 + normalized_value;
        }
        
        if (time_scale <= temp_float * stack_value_2) {
            if (ABS(stack_value_2) < ABS(temp_float)) {
                stack_value_2 = temp_float;
            }
        } else {
            stack_value_2 = stack_value_2 + temp_float;
        }
    }
    
    // 计算动画角度
    stack_canary = 0x18065a04d;
    target_value = (float)atan2f(-stack_value_1, stack_value_2);
    target_value = ABS(target_value);
    
    if (HALF_PI < target_value) {
        target_value = PI - target_value;
    }
    
    target_value = target_value * NORMALIZATION_FACTOR;
    blend_factor = (stack_value_3 - *(float *)(base_pointer + 0xc0)) * 0.3f;
    matrix_value = time_scale;
    
    if ((blend_factor + 0.05f <= target_value) && 
        (matrix_value = target_value, NORMALIZATION_RANGE_MAX - blend_factor < target_value)) {
        matrix_value = stack_value_3;
    }
    
    blend_factor = matrix_value - animation_array[0x15];
    temp_float = ABS(blend_factor);
    target_value = matrix_value;
    
    if (ANIMATION_THRESHOLD <= temp_float) {
        interpolated_value = timing_params._4_4_;
        if (blend_factor < time_scale) {
            interpolated_value = -timing_params._4_4_;
        }
        
        blend_factor = 0.1f;
        if ((0.1f <= temp_float) && (blend_factor = temp_float, 0.5f <= temp_float)) {
            blend_factor = 0.5f;
        }
        
        blend_factor = blend_factor * interpolated_value * WEIGHT_MULTIPLIER;
        if (ABS(blend_factor) <= temp_float) {
            target_value = animation_array[0x15] + blend_factor;
        }
    }
    animation_array[0x15] = target_value;
    
    // 处理动画状态转换
    if ((((effect_params._4_4_ <= -0.1f) || (status_flag == '\0')) || 
         (condition_flag != '\0')) || (temp_float <= -0.1f)) {
    animation_state_processing:
        if ((animation_array[0x11] <= time_scale) || (stack_value_3 <= animation_array[0x11])) {
            animation_array[0x11] = 0.0f;
            animation_array[0x12] = -1.0f;
            goto animation_complete;
        }
    } else {
        temp_float = effect_params._4_4_ * effect_params._4_4_ + 
                     effect_params._4_4_ * effect_params._4_4_;
        temp_float = temp_float + temp_float;
        
        if (temp_float <= stack_value_3) {
            temp_float = stack_value_3;
        }
        
        if (-temp_float <= (float)effect_params * normalized_value) {
            goto animation_state_processing;
        }
    }
    
    // 处理动画数据更新
    temp_float = animation_array[0x11];
    if (temp_float == time_scale) {
        *(bool *)((int64_t)animation_array + 0x5d) = normalized_value < time_scale;
    }
    
    temp_float = (*(float *)(*(int64_t *)
                            (*(int64_t *)(animation_array + 
                              (int64_t)(int)animation_array[0x18] * 0x4d6 + -0x26) + 8) + 0x188) /
                *(float *)(*(int64_t *)
                           (*(int64_t *)(animation_array + 
                             (int64_t)(int)animation_array[0x18] * 0x4d6 + -0x26) + 0x38) + 0x188)) * 
                interpolated_value * timing_params._4_4_ + temp_float;
    
    if (stack_value_3 <= temp_float) {
        temp_float = stack_value_3;
    }
    animation_array[0x11] = temp_float;
    
    // 处理动画混合参数
    if (animation_array[0x12] <= time_scale && time_scale != animation_array[0x12]) {
        target_value = stack_value_3;
        if (*(char *)((int64_t)animation_array + 0x5d) != '\0') {
            target_value = -1.0f;
        }
        
        if (time_scale <= target_value * normalized_value) {
            normalized_value = temp_float;
            if (*(char *)((int64_t)animation_array + 0x5d) == '\0') {
                stack_canary = 0x18065a252;
                normalized_value = (float)fmodf(temp_float + 0.5f);
            }
            
            normalized_value = normalized_value - animation_array[0xe];
            if (normalized_value <= 0.5f) {
                if (normalized_value < -0.5f) {
                    normalized_value = normalized_value + stack_value_3;
                }
            } else {
                normalized_value = normalized_value - 1.0f;
            }
            
            target_value = temp_float * temp_float * temp_float + timing_params._4_4_;
            if (stack_value_3 <= target_value) {
                target_value = stack_value_3;
            }
            
            normalized_value = target_value * temp_float * normalized_value + animation_array[0xe];
            animation_array[0xe] = normalized_value;
            
            if (time_scale <= normalized_value) {
                if (stack_value_3 <= normalized_value) {
                    animation_array[0xe] = normalized_value - stack_value_3;
                }
            } else {
                animation_array[0xe] = normalized_value + stack_value_3;
            }
        } else {
            animation_array[0x12] = temp_float + 0.25f;
        }
    }
    
animation_complete:
    // 处理动画渲染参数
    normalized_value = animation_array[0x14];
    blend_params._4_4_ = (stack_value_3 - normalized_value) * (stack_value_3 - result_value);
    target_value = (stack_value_3 - current_value) * blend_params._4_4_;
    stack_value_3 = (stack_value_3 - matrix_value) * current_value * blend_params._4_4_;
    current_value = current_value * blend_params._4_4_ * matrix_value;
    interpolated_value = target_value * matrix_value;
    blend_params._4_4_ = blend_params._4_4_ * matrix_value;
    stack_value_4 = current_value * (float)state_params;
    *(float *)(base_pointer + -0x7c) = blend_params._4_4_;
    *(float *)(base_pointer + -0x78) = blend_params._4_4_;
    *(float *)(base_pointer + -0x74) = (stack_value_3 - result_value) * normalized_value;
    temp_float = (stack_value_3 - (float)state_params) * interpolated_value;
    callback_params._4_4_ = (stack_value_3 - (float)state_params) * current_value;
    *(float *)(base_pointer + -0x80) = temp_float;
    
    // 处理动画缩放参数
    if (((char)timing_params == '\0') || (time_scale < (float)state_params)) {
        if (normalized_value <= time_scale) {
            normalized_value = MEDIUM_SCALE;
        } else {
            normalized_value = MAXIMUM_SCALE;
        }
    } else {
        normalized_value = MINIMUM_SCALE;
    }
    
    blend_factor = animation_array[0x184a];
    if (result_value <= blend_factor) {
        blend_factor = blend_factor - normalized_value * timing_params._4_4_;
        if (blend_factor <= result_value) {
            blend_factor = result_value;
        }
    } else {
        blend_factor = blend_factor + normalized_value * timing_params._4_4_;
        if (result_value <= blend_factor) {
            blend_factor = result_value;
        }
    }
    animation_array[0x184a] = blend_factor;
    animation_array[0x1854] = blend_factor;
    
    // 处理动画混合权重
    result_value = animation_array[0x11];
    if (ANIMATION_BLEND_THRESHOLD <= result_value) {
        normalized_value = stack_value_3;
        if (0.7f < result_value) {
            normalized_value = (stack_value_3 - result_value) * SCALE_FACTOR;
        }
    } else {
        normalized_value = result_value * DEFAULT_MULTIPLIER;
    }
    
    if (time_scale < animation_array[0x12]) {
        result_value = (animation_array[0x12] - result_value) * INTERPOLATION_FACTOR;
        if (result_value <= time_scale) {
            result_value = time_scale;
        }
        normalized_value = normalized_value * result_value;
    }
    
    // 处理动画数据数组
    weight_ptr = animation_array + 0x1855;
    loop_counter = 1;
    result_value = time_scale;
    
    do {
        blend_factor = *(float *)(((int64_t)local_buffer - (int64_t)animation_array) + 
                                 (int64_t)weight_ptr);
        temp_float = blend_factor - weight_ptr[-10];
        interpolated_value = ABS(temp_float);
        
        if (ANIMATION_THRESHOLD <= interpolated_value) {
            matrix_value = stack_value_3;
            if (temp_float < time_scale) {
                matrix_value = -1.0f;
            }
            
            if (MINIMUM_DIFFERENCE <= interpolated_value) {
                if (MAXIMUM_DIFFERENCE <= interpolated_value) {
                    interpolated_value = MAXIMUM_DIFFERENCE;
                }
            } else {
                interpolated_value = MINIMUM_DIFFERENCE;
            }
            
            interpolated_value = interpolated_value * matrix_value * 
                                 timing_params._4_4_ * ANIMATION_SPEED_FACTOR;
            
            if (interpolated_value * matrix_value <= matrix_value * temp_float) {
                blend_factor = weight_ptr[-10] + interpolated_value;
            }
        }
        
        weight_ptr[-10] = blend_factor;
        *weight_ptr = blend_factor;
        
        if (2 < loop_counter) {
            if (loop_counter < 7) {
                temp_float = stack_value_3 - normalized_value;
            } else {
                temp_float = time_scale;
                if (loop_counter == 7) {
                    if (*(char *)((int64_t)animation_array + 0x5d) == '\0') {
                    animation_value_assignment:
                        temp_float = normalized_value;
                    }
                } else {
                    if (loop_counter != 8) {
                        goto continue_animation_loop;
                    }
                    if (*(char *)((int64_t)animation_array + 0x5d) != '\0') {
                        goto animation_value_assignment;
                    }
                }
            }
            blend_factor = temp_float * blend_factor;
            *weight_ptr = blend_factor;
        }
        
    continue_animation_loop:
        temp_float = *(float *)((int64_t)local_buffer + (4 - (int64_t)animation_array) + 
                               (int64_t)weight_ptr);
        interpolated_value = temp_float - weight_ptr[-9];
        matrix_value = ABS(interpolated_value);
        
        if (ANIMATION_THRESHOLD <= matrix_value) {
            current_value = stack_value_3;
            if (interpolated_value < time_scale) {
                current_value = -1.0f;
            }
            
            if (MINIMUM_DIFFERENCE <= matrix_value) {
                if (MAXIMUM_DIFFERENCE <= matrix_value) {
                    matrix_value = MAXIMUM_DIFFERENCE;
                }
            } else {
                matrix_value = MINIMUM_DIFFERENCE;
            }
            
            matrix_value = matrix_value * current_value * timing_params._4_4_ * 
                           ANIMATION_SPEED_FACTOR;
            
            if (matrix_value * current_value <= current_value * interpolated_value) {
                temp_float = weight_ptr[-9] + matrix_value;
            }
        }
        
        index_counter = loop_counter + 1;
        weight_ptr[-9] = temp_float;
        weight_ptr[1] = temp_float;
        
        if (2 < index_counter) {
            if (index_counter < 7) {
                interpolated_value = stack_value_3 - normalized_value;
            } else {
                interpolated_value = time_scale;
                if (index_counter == 7) {
                    if (*(char *)((int64_t)animation_array + 0x5d) == '\0') {
                    animation_value_assignment_2:
                        interpolated_value = normalized_value;
                    }
                } else {
                    if (index_counter != 8) {
                        goto continue_animation_loop_2;
                    }
                    if (*(char *)((int64_t)animation_array + 0x5d) != '\0') {
                        goto animation_value_assignment_2;
                    }
                }
            }
            temp_float = interpolated_value * temp_float;
            weight_ptr[1] = temp_float;
        }
        
    continue_animation_loop_2:
        interpolated_value = *(float *)((int64_t)local_buffer + 
                                        (8 - (int64_t)animation_array) + (int64_t)weight_ptr);
        matrix_value = interpolated_value - weight_ptr[-8];
        current_value = ABS(matrix_value);
        
        if (ANIMATION_THRESHOLD <= current_value) {
            target_value = stack_value_3;
            if (matrix_value < time_scale) {
                target_value = -1.0f;
            }
            
            if (MINIMUM_DIFFERENCE <= current_value) {
                if (MAXIMUM_DIFFERENCE <= current_value) {
                    current_value = MAXIMUM_DIFFERENCE;
                }
            } else {
                current_value = MINIMUM_DIFFERENCE;
            }
            
            current_value = current_value * target_value * timing_params._4_4_ * 
                           ANIMATION_SPEED_FACTOR;
            
            if (current_value * target_value <= target_value * matrix_value) {
                interpolated_value = weight_ptr[-8] + current_value;
            }
        }
        
        index_counter = loop_counter + 2;
        weight_ptr[-8] = interpolated_value;
        weight_ptr[2] = interpolated_value;
        
        if (2 < index_counter) {
            if (index_counter < 7) {
                matrix_value = stack_value_3 - normalized_value;
            } else {
                matrix_value = time_scale;
                if (index_counter == 7) {
                    if (*(char *)((int64_t)animation_array + 0x5d) == '\0') {
                    animation_value_assignment_3:
                        matrix_value = normalized_value;
                    }
                } else {
                    if (index_counter != 8) {
                        goto continue_animation_loop_3;
                    }
                    if (*(char *)((int64_t)animation_array + 0x5d) != '\0') {
                        goto animation_value_assignment_3;
                    }
                }
            }
            interpolated_value = matrix_value * interpolated_value;
            weight_ptr[2] = interpolated_value;
        }
        
    continue_animation_loop_3:
        loop_counter = loop_counter + 3;
        result_value = result_value + blend_factor + temp_float + interpolated_value;
        weight_ptr = weight_ptr + 3;
        
        if (9 < loop_counter) {
            normalized_value = animation_array[0x1854];
            normalized_value = stack_value_3 - 
                              ((normalized_value * 6.0f - 15.0f) * normalized_value + 10.0f) * 
                              normalized_value * normalized_value * normalized_value;
            
            if (result_value != normalized_value) {
                if (result_value <= time_scale) {
                    animation_array[0x1854] = 1.0f;
                } else {
                    normalized_value = normalized_value / result_value;
                    animation_array[0x1855] = animation_array[0x1855] * normalized_value;
                    animation_array[0x1856] = animation_array[0x1856] * normalized_value;
                    animation_array[0x1857] = animation_array[0x1857] * normalized_value;
                    animation_array[0x1858] = animation_array[0x1858] * normalized_value;
                    animation_array[0x1859] = animation_array[0x1859] * normalized_value;
                    animation_array[0x185a] = animation_array[0x185a] * normalized_value;
                    animation_array[0x185b] = animation_array[0x185b] * normalized_value;
                    animation_array[0x185c] = animation_array[0x185c] * normalized_value;
                    animation_array[0x185d] = normalized_value * animation_array[0x185d];
                }
            }
            
            target_value = stack_value_3 - (stack_value_3 - matrix_value) * target_value;
            temp_float = ((((interpolated_value + current_value) * (float)state_params + 
                            blend_params._4_4_) - callback_params._4_4_) - temp_float) - 
                         blend_params._4_4_;
            result_value = target_value * target_value + temp_float * temp_float;
            result_value = (float)(result_value <= 1.1754944e-38) * 1.1754944e-38 + result_value;
            temp_array = rsqrtss(ZEXT416((uint)result_value), ZEXT416((uint)result_value));
            normalized_value = temp_array._0_4_;
            result_value = normalized_value * 0.5f * (3.0f - result_value * normalized_value * normalized_value);
            target_value = result_value * target_value;
            result_value = result_value * temp_float;
            
            // 处理动画矩阵变换
            if (ABS(result_value * animation_array[0x185e] + 
                     target_value * animation_array[0x185f]) <= 0.999f) {
                temp_float = animation_array[0x1855] - animation_array[0x1856];
                current_value = (((animation_array[0x1858] + animation_array[0x1857] + 
                                  animation_array[0x185b]) - animation_array[0x1859]) - 
                                 animation_array[0x185a]) - animation_array[0x185c];
                result_value = temp_float * temp_float + current_value * current_value;
                result_value = (float)(result_value <= 1.1754944e-38) * 1.1754944e-38 + result_value;
                temp_array = rsqrtss(ZEXT416((uint)result_value), ZEXT416((uint)result_value));
                normalized_value = temp_array._0_4_;
                timing_params._4_4_ = timing_params._4_4_ * MATRIX_MULTIPLIER;
                result_value = normalized_value * 0.5f * 
                              (3.0f - result_value * normalized_value * normalized_value);
                
                // 设置动画矩阵数据
                *(uint64_t *)(animation_array + 0x185e) = 
                    CONCAT44(result_value * temp_float * timing_params._4_4_ +
                            (stack_value_3 - timing_params._4_4_) * animation_array[0x185f],
                            result_value * current_value * timing_params._4_4_ +
                            (stack_value_3 - timing_params._4_4_) * animation_array[0x185e]);
                
                result_value = animation_array[0x185f];
                normalized_value = animation_array[0x185e];
                temp_float = normalized_value * normalized_value + result_value * result_value;
                temp_array = rsqrtss(ZEXT416((uint)temp_float), ZEXT416((uint)temp_float));
                current_value = temp_array._0_4_;
                temp_float = current_value * 0.5f * (3.0f - temp_float * current_value * current_value);
                animation_array[0x185f] = temp_float * result_value;
                animation_array[0x185e] = temp_float * normalized_value;
            } else {
                *(uint64_t *)(animation_array + 0x185e) = CONCAT44(target_value, result_value);
            }
            
            // WARNING: Subroutine does not return
            stack_canary = 0x18065aa9f;
            stack_value_5 = callback_params._4_4_;
            ui_system_error_handler(*(uint64_t *)(base_pointer + -0x70) ^ 
                                   (uint64_t)&stack0x00000000);
        }
    } while (true);
}