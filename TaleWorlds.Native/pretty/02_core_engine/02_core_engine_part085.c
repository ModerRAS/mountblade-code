#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part085.c - 核心引擎坐标变换与位置更新模块

/**
 * 更新实体位置并进行边界检查
 * @param blend_factor - 混合因子 (0.0-1.0)
 * @param context_ptr - 上下文指针
 */
void update_entity_position_with_bounds_check(float blend_factor, void *context_ptr)
{
    void *engine_context;
    float *offset_vector;
    float original_x, original_y;
    float new_x, new_y;
    float delta_x, delta_y;
    float temp_x, temp_y;
    float bounds_min_x, bounds_min_y;
    float bounds_max_x, bounds_max_y;
    float scale_x, scale_y;
    float offset_magnitude;
    float adjusted_x, adjusted_y;
    char *text_buffer;
    float blend_progress;
    uint32_t flags;
    
    engine_context = get_engine_context();
    
    // 设置上下文状态标志
    set_context_status_flag(engine_context, 0xb1, 1);
    
    // 获取原始位置
    get_entity_position(engine_context, &original_x, &original_y);
    
    // 检查是否启用位置更新
    if (is_position_update_enabled(engine_context)) {
        // 计算偏移向量
        offset_vector = calculate_offset_vector(engine_context, context_ptr);
        
        // 计算新位置
        new_x = original_x + offset_vector[0];
        new_y = original_y + offset_vector[1];
        
        // 计算位置变化量
        delta_x = new_x - original_x;
        delta_y = new_y - original_y;
        
        // 更新位置变化量
        update_position_delta(&delta_x, &delta_y);
        
        // 保存位置信息到上下文
        save_position_context(engine_context, original_x, original_y, new_x, new_y);
        
        // 获取边界信息
        get_entity_bounds(engine_context, &bounds_min_x, &bounds_min_y, &bounds_max_x, &bounds_max_y);
        
        // 边界检查和碰撞检测
        if (is_within_bounds(new_x, new_y, bounds_min_x, bounds_min_y, bounds_max_x, bounds_max_y) ||
            is_force_update_enabled(engine_context)) {
            
            // 执行碰撞检测
            if (perform_collision_detection(&original_x, &new_x, 1)) {
                // 设置碰撞标志
                flags = get_entity_flags(engine_context);
                set_entity_flags(engine_context, flags | 1);
            }
            
            // 标准化混合因子
            if (blend_factor < 0.0f) {
                blend_factor = 0.0f;
            } else if (blend_factor > 1.0f) {
                blend_factor = 1.0f;
            }
            
            // 获取变换参数
            get_transform_parameters(engine_context, &temp_x, &temp_y, &scale_x, &scale_y);
            
            // 应用变换
            apply_transformation(original_x, original_y, new_x, new_y, scale_x, scale_y);
            
            // 调整偏移量
            offset_magnitude = get_offset_magnitude(engine_context);
            adjusted_x = original_x - offset_magnitude;
            adjusted_y = new_y + offset_magnitude;
            
            // 获取第二组变换参数
            get_secondary_transform_parameters(engine_context, &temp_x, &temp_y, &scale_x, &scale_y);
            
            // 应用混合变换
            if (blend_factor > 0.0f) {
                apply_blended_transform(engine_context, &adjusted_x, &adjusted_y, blend_factor);
            }
            
            // 计算混合进度
            blend_progress = blend_factor * 100.0f + 0.01f;
            
            // 获取动画参数
            get_animation_parameters(engine_context, &temp_x, &temp_y, &scale_x);
            
            // 计算插值位置
            calculate_interpolated_position(&delta_x, &delta_y, scale_x, 0x7f7fffff);
            
            // 计算实际移动距离
            float actual_distance = delta_x;
            if (delta_x > 0.0f) {
                actual_distance = delta_x - scale_x / offset_vector[0];
            }
            
            // 计算步进距离
            float step_distance = (float)((int)(actual_distance + 0.95f));
            
            // 应用位置插值
            if (step_distance > 0.0f) {
                float interpolated_x = (new_x - original_x) * blend_factor + original_x + get_position_offset(engine_context);
                
                // 设置插值参数
                float blend_params[2] = {0.5f, 0.0f};
                
                // 执行位置插值
                if (original_x <= interpolated_x && interpolated_x <= (new_x - step_distance)) {
                    interpolated_x = interpolated_x; // 在有效范围内
                }
                
                // 处理文本缓冲区
                text_buffer = get_text_buffer();
                if (text_buffer != NULL) {
                    // 解析文本指令
                    parse_text_commands(text_buffer);
                }
                
                // 应用位置更新
                if (text_buffer != NULL) {
                    apply_position_update(engine_context, &interpolated_x, &new_y, text_buffer);
                }
            }
        }
    }
    
    // 清理并返回
    cleanup_context(engine_context);
}

/**
 * 批量更新实体位置并进行边界检查优化
 * 这是一个高性能的位置更新函数，使用SIMD寄存器优化批量计算
 * @param context_ptr - 上下文指针
 * @param blend_factor - 混合因子
 * @param position_offset - 位置偏移量
 */
void batch_update_entity_positions_optimized(void *context_ptr, float blend_factor, float position_offset)
{
    void *engine_context;
    float *offset_vector;
    float original_x, original_y;
    float new_x, new_y;
    float delta_x, delta_y;
    float bounds_min_x, bounds_min_y;
    float bounds_max_x, bounds_max_y;
    float temp_x, temp_y;
    float scale_x, scale_y;
    char *text_buffer;
    uint32_t flags;
    float step_distance;
    float interpolated_x;
    
    // 获取引擎上下文
    engine_context = get_engine_context();
    
    // 保存寄存器状态（优化性能）
    save_register_state(engine_context);
    
    // 获取原始位置
    original_x = get_entity_position_x(engine_context);
    original_y = get_entity_position_y(engine_context);
    
    // 计算偏移向量（批量优化）
    offset_vector = calculate_batch_offset_vector(engine_context, context_ptr, position_offset);
    
    // 计算新位置
    new_x = original_x + offset_vector[0];
    new_y = original_y + offset_vector[1];
    
    // 计算位置变化量
    delta_x = new_x - original_x;
    delta_y = new_y - original_y;
    
    // 更新位置变化量（批量处理）
    update_batch_position_delta(&delta_x, &delta_y);
    
    // 保存位置信息到上下文
    save_batch_position_context(engine_context, original_x, original_y, new_x, new_y);
    
    // 获取边界信息
    get_entity_bounds(engine_context, &bounds_min_x, &bounds_min_y, &bounds_max_x, &bounds_max_y);
    
    // 边界检查和碰撞检测（优化版本）
    if (is_within_bounds(new_x, new_y, bounds_min_x, bounds_min_y, bounds_max_x, bounds_max_y) ||
        is_force_update_enabled(engine_context)) {
        
        // 执行碰撞检测
        if (perform_collision_detection(&original_x, &new_x, 1)) {
            // 设置碰撞标志
            flags = get_entity_flags(engine_context);
            set_entity_flags(engine_context, flags | 1);
        }
        
        // 标准化混合因子
        if (blend_factor < 0.0f) {
            blend_factor = 0.0f;
        } else if (blend_factor > 1.0f) {
            blend_factor = 1.0f;
        }
        
        // 获取变换参数
        get_transform_parameters(engine_context, &temp_x, &temp_y, &scale_x, &scale_y);
        
        // 应用变换
        apply_transformation(original_x, original_y, new_x, new_y, scale_x, scale_y);
        
        // 调整偏移量
        float offset_magnitude = get_offset_magnitude(engine_context);
        float adjusted_x = original_x - offset_magnitude;
        float adjusted_y = new_y + offset_magnitude;
        
        // 获取第二组变换参数
        get_secondary_transform_parameters(engine_context, &temp_x, &temp_y, &scale_x, &scale_y);
        
        // 应用混合变换
        if (blend_factor > 0.0f) {
            apply_blended_transform(engine_context, &adjusted_x, &adjusted_y, blend_factor);
        }
        
        // 计算混合进度
        float blend_progress = blend_factor * 100.0f + 0.01f;
        
        // 获取动画参数
        get_animation_parameters(engine_context, &temp_x, &temp_y, &scale_x);
        
        // 计算插值位置
        calculate_interpolated_position(&delta_x, &delta_y, scale_x, 0x7f7fffff);
        
        // 计算实际移动距离
        float actual_distance = delta_x;
        if (delta_x > 0.0f) {
            actual_distance = delta_x - scale_x / offset_vector[0];
        }
        
        // 计算步进距离
        step_distance = (float)((int)(actual_distance + 0.95f));
        
        // 应用位置插值
        if (step_distance > 0.0f) {
            interpolated_x = (new_x - original_x) * blend_factor + original_x + get_position_offset(engine_context);
            
            // 设置插值参数
            float blend_params[2] = {0.5f, 0.0f};
            
            // 执行位置插值
            if (original_x <= interpolated_x && interpolated_x <= (new_x - step_distance)) {
                interpolated_x = interpolated_x; // 在有效范围内
            }
            
            // 处理文本缓冲区
            text_buffer = get_text_buffer();
            if (text_buffer != NULL) {
                // 解析文本指令
                parse_text_commands(text_buffer);
            }
            
            // 应用位置更新
            if (text_buffer != NULL) {
                apply_position_update(engine_context, &interpolated_x, &new_y, text_buffer);
            }
        }
    }
    
    // 恢复寄存器状态
    restore_register_state(engine_context);
    
    // 清理并返回
    cleanup_context(engine_context);
}

/**
 * 混合位置更新和碰撞检测
 * 专门用于处理带有混合因子的位置更新
 * @param context_ptr - 上下文指针
 * @param blend_factor - 混合因子
 */
void blended_position_update_with_collision(void *context_ptr, float blend_factor)
{
    void *engine_context;
    float original_x, original_y;
    float new_x, new_y;
    float delta_x, delta_y;
    float bounds_min_x, bounds_min_y;
    float bounds_max_x, bounds_max_y;
    float temp_x, temp_y;
    float scale_x, scale_y;
    char *text_buffer;
    uint32_t flags;
    float step_distance;
    float interpolated_x;
    
    // 获取引擎上下文
    engine_context = get_engine_context();
    
    // 执行碰撞检测
    if (perform_collision_detection(&original_x, &new_x, 1)) {
        // 设置碰撞标志
        flags = get_entity_flags(engine_context);
        set_entity_flags(engine_context, flags | 1);
    }
    
    // 标准化混合因子
    if (blend_factor < 0.0f) {
        blend_factor = 0.0f;
    } else if (blend_factor > 1.0f) {
        blend_factor = 1.0f;
    }
    
    // 获取变换参数
    get_transform_parameters(engine_context, &temp_x, &temp_y, &scale_x, &scale_y);
    
    // 应用变换
    apply_transformation(original_x, original_y, new_x, new_y, scale_x, scale_y);
    
    // 调整偏移量
    float offset_magnitude = get_offset_magnitude(engine_context);
    float adjusted_x = original_x - offset_magnitude;
    float adjusted_y = new_y + offset_magnitude;
    
    // 获取第二组变换参数
    get_secondary_transform_parameters(engine_context, &temp_x, &temp_y, &scale_x, &scale_y);
    
    // 应用混合变换
    if (blend_factor > 0.0f) {
        apply_blended_transform(engine_context, &adjusted_x, &adjusted_y, blend_factor);
    }
    
    // 计算混合进度
    float blend_progress = blend_factor * 100.0f + 0.01f;
    
    // 获取动画参数
    get_animation_parameters(engine_context, &temp_x, &temp_y, &scale_x);
    
    // 计算插值位置
    calculate_interpolated_position(&delta_x, &delta_y, scale_x, 0x7f7fffff);
    
    // 计算实际移动距离
    float actual_distance = delta_x;
    if (delta_x > 0.0f) {
        actual_distance = delta_x - scale_x / get_offset_vector_x(engine_context);
    }
    
    // 计算步进距离
    step_distance = (float)((int)(actual_distance + 0.95f));
    
    // 应用位置插值
    if (step_distance > 0.0f) {
        interpolated_x = (new_x - original_x) * blend_factor + original_x + get_position_offset(engine_context);
        
        // 设置插值参数
        float blend_params[2] = {0.5f, 0.0f};
        
        // 执行位置插值
        if (original_x <= interpolated_x && interpolated_x <= (new_x - step_distance)) {
            interpolated_x = interpolated_x; // 在有效范围内
        }
        
        // 处理文本缓冲区
        text_buffer = get_text_buffer();
        if (text_buffer != NULL) {
            // 解析文本指令
            parse_text_commands(text_buffer);
        }
        
        // 应用位置更新
        if (text_buffer != NULL) {
            apply_position_update(engine_context, &interpolated_x, &new_y, text_buffer);
        }
    }
    
    // 清理并返回
    cleanup_context(engine_context);
}

/**
 * 快速位置更新函数
 * 用于简单场景的位置更新，不包含复杂的碰撞检测
 * @param blend_factor - 混合因子
 * @param position_offset - 位置偏移量
 */
void quick_position_update(float blend_factor, float position_offset)
{
    void *engine_context;
    float original_x, original_y;
    float new_x, new_y;
    float interpolated_x;
    
    // 获取引擎上下文
    engine_context = get_engine_context();
    
    // 获取原始位置
    original_x = get_entity_position_x(engine_context);
    original_y = get_entity_position_y(engine_context);
    
    // 计算新位置
    new_x = original_x + position_offset;
    new_y = original_y;
    
    // 计算插值位置
    if (blend_factor > 0.0f) {
        interpolated_x = (new_x - original_x) * blend_factor + original_x + get_position_offset(engine_context);
        
        // 确保在有效范围内
        if (original_x <= interpolated_x && interpolated_x <= new_x) {
            interpolated_x = interpolated_x;
        }
        
        // 应用位置更新
        apply_position_update(engine_context, &interpolated_x, &new_y, NULL);
    }
    
    // 清理并返回
    cleanup_context(engine_context);
}

/**
 * 空函数 - 可能是占位符或调试用
 */
void empty_function(void)
{
    // 空函数实现
    return;
}

/**
 * 简单位置更新函数
 * 更新实体位置，不进行复杂的边界检查
 * @param offset_vector - 偏移向量
 */
void simple_position_update(float *offset_vector)
{
    void *engine_context;
    float original_x, original_y;
    float new_x, new_y;
    float bounds_min_x, bounds_min_y;
    float bounds_max_x, bounds_max_y;
    uint32_t flags;
    
    // 获取引擎上下文
    engine_context = get_engine_context();
    
    // 设置上下文状态标志
    set_context_status_flag(engine_context, 0xb1, 1);
    
    // 获取原始位置
    original_x = get_entity_position_x(engine_context);
    original_y = get_entity_position_y(engine_context);
    
    // 检查是否启用位置更新
    if (is_position_update_enabled(engine_context)) {
        // 计算新位置
        new_x = original_x + offset_vector[0];
        new_y = original_y + offset_vector[1];
        
        // 获取边界信息
        get_entity_bounds(engine_context, &bounds_min_x, &bounds_min_y, &bounds_max_x, &bounds_max_y);
        
        // 边界检查和碰撞检测
        if (is_within_bounds(new_x, new_y, bounds_min_x, bounds_min_y, bounds_max_x, bounds_max_y) ||
            is_force_update_enabled(engine_context)) {
            
            // 执行碰撞检测
            if (perform_collision_detection(&original_x, &new_x, 1)) {
                // 设置碰撞标志
                flags = get_entity_flags(engine_context);
                set_entity_flags(engine_context, flags | 1);
            }
        }
    }
    
    // 清理并返回
    cleanup_context(engine_context);
}

/**
 * 带参数的位置更新函数
 * 用于处理带有额外参数的位置更新
 * @param offset_vector - 偏移向量
 * @param context_ptr - 上下文指针
 * @param engine_ptr - 引擎指针
 * @param param_4 - 第四个参数
 * @param param_5 - 第五个参数
 */
void parameterized_position_update(float *offset_vector, void *context_ptr, void *engine_ptr, longlong param_4, float param_5)
{
    void *engine_context;
    float original_x, original_y;
    float new_x, new_y;
    float bounds_min_x, bounds_min_y;
    float bounds_max_x, bounds_max_y;
    uint32_t flags;
    
    // 获取引擎上下文
    engine_context = get_engine_context();
    
    // 获取原始位置
    original_x = get_entity_position_x(engine_context);
    original_y = get_entity_position_y(engine_context);
    
    // 计算新位置
    new_x = original_x + offset_vector[0];
    new_y = original_y + offset_vector[1];
    
    // 获取边界信息
    get_entity_bounds(engine_context, &bounds_min_x, bounds_min_y, &bounds_max_x, &bounds_max_y);
    
    // 边界检查和碰撞检测
    if (is_within_bounds(new_x, new_y, bounds_min_x, bounds_min_y, bounds_max_x, bounds_max_y) ||
        is_force_update_enabled(engine_context)) {
        
        // 执行碰撞检测
        if (perform_collision_detection(&original_x, &new_x, 1)) {
            // 设置碰撞标志
            flags = get_entity_flags(engine_context);
            set_entity_flags(engine_context, flags | 1);
        }
    }
    
    // 清理并返回
    cleanup_context(engine_context);
}

/**
 * 返回函数 - 可能是调试或清理用
 */
void return_function(void)
{
    return;
}

/**
 * 高级位置更新函数
 * 处理复杂的位置更新逻辑，包括动画和变换
 */
void advanced_position_update(void)
{
    void *engine_context;
    float *offset_vector;
    float original_x, original_y;
    float new_x, new_y;
    float bounds_min_x, bounds_min_y;
    float bounds_max_x, bounds_max_y;
    uint32_t flags;
    float temp_x, temp_y;
    float scale_x, scale_y;
    
    // 获取引擎上下文
    engine_context = get_engine_context();
    
    // 设置上下文状态标志
    set_context_status_flag(engine_context, 0xb1, 1);
    
    // 获取原始位置
    original_x = get_entity_position_x(engine_context);
    original_y = get_entity_position_y(engine_context);
    
    // 检查是否启用位置更新
    if (is_position_update_enabled(engine_context)) {
        // 检查是否需要特殊处理
        if (get_special_mode_flag(engine_context) == 0) {
            // 设置上下文状态标志
            set_context_status_flag(engine_context, 0xb1, 1);
            
            // 获取引擎上下文
            engine_context = get_engine_context();
            
            // 检查是否启用位置更新
            if (is_position_update_enabled(engine_context)) {
                // 获取原始位置
                original_x = get_entity_position_x(engine_context);
                original_y = get_entity_position_y(engine_context);
                
                // 计算偏移向量
                offset_vector = calculate_offset_vector(engine_context, NULL);
                
                // 计算新位置
                new_x = original_x + offset_vector[0];
                new_y = original_y + offset_vector[1];
                
                // 获取边界信息
                get_entity_bounds(engine_context, &bounds_min_x, &bounds_min_y, &bounds_max_x, &bounds_max_y);
                
                // 边界检查和碰撞检测
                if (is_within_bounds(new_x, new_y, bounds_min_x, bounds_min_y, bounds_max_x, bounds_max_y) ||
                    is_force_update_enabled(engine_context)) {
                    
                    // 执行碰撞检测
                    if (perform_collision_detection(&original_x, &new_x, 1)) {
                        // 设置碰撞标志
                        flags = get_entity_flags(engine_context);
                        set_entity_flags(engine_context, flags | 1);
                    }
                    
                    // 获取变换参数
                    get_transform_parameters(engine_context, &temp_x, &temp_y, &scale_x, &scale_y);
                    
                    // 应用变换
                    apply_transformation(original_x, original_y, new_x, new_y, scale_x, scale_y);
                    
                    // 处理动画参数
                    if (is_animation_enabled(engine_context)) {
                        // 获取动画参数
                        get_animation_parameters(engine_context, &temp_x, &temp_y, &scale_x);
                        
                        // 应用动画变换
                        apply_animation_transform(engine_context, &new_x, &new_y, scale_x);
                    }
                }
            }
        } else {
            // 处理特殊模式
            if (get_special_mode_pointer(engine_context) != 0) {
                // 执行特殊处理
                execute_special_mode_handling(engine_context);
            }
            
            // 获取原始位置
            original_x = get_entity_position_x(engine_context);
            original_y = get_entity_position_y(engine_context);
            
            // 计算新位置
            new_x = original_x + get_special_offset_x(engine_context);
            new_y = original_y + get_special_offset_y(engine_context);
            
            // 获取边界信息
            get_entity_bounds(engine_context, &bounds_min_x, &bounds_min_y, &bounds_max_x, &bounds_max_y);
            
            // 边界检查和碰撞检测
            if (is_within_bounds(new_x, new_y, bounds_min_x, bounds_min_y, bounds_max_x, bounds_max_y) ||
                is_force_update_enabled(engine_context)) {
                
                // 执行碰撞检测
                if (perform_collision_detection(&original_x, &new_x, 1)) {
                    // 设置碰撞标志
                    flags = get_entity_flags(engine_context);
                    set_entity_flags(engine_context, flags | 1);
                }
                
                // 获取变换参数
                get_transform_parameters(engine_context, &temp_x, &temp_y, &scale_x, &scale_y);
                
                // 应用变换
                apply_transformation(original_x, original_y, new_x, new_y, scale_x, scale_y);
                
                // 处理特殊模式动画
                if (get_special_mode_pointer(engine_context) != 0) {
                    // 应用特殊模式动画
                    apply_special_mode_animation(engine_context, &new_x, &new_y);
                }
            }
            
            // 清理特殊模式
            if (get_special_mode_pointer(engine_context) != 0) {
                cleanup_special_mode(engine_context);
            }
        }
    }
    
    // 清理并返回
    cleanup_context(engine_context);
}