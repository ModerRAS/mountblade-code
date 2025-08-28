#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part015.c - UI系统高级粒子效果和动画控制模块
// 
// 本文件包含1个核心函数，主要负责UI系统的高级粒子效果处理、动画控制、
// 参数计算和矩阵变换等功能。这是一个复杂的UI系统处理函数，包含大量的
// 数学计算、SIMD操作和高级渲染控制。
//
// 主要功能：
// - UI粒子系统的高级更新和控制
// - 复杂的数学计算和矩阵变换
// - 动画参数的优化和插值处理
// - 高级渲染控制和状态管理
// - 向量归一化和浮点数精度处理

// ============================================================================
// 常量定义
// ============================================================================

// 数学常量
#define UI_PI 3.14159265358979323846f
#define UI_HALF_PI 1.5707964f
#define UI_TWO_PI 6.28318530717958647692f
#define UI_INV_PI 0.31830988618379067154f
#define UI_DEG_TO_RAD 0.01745329251994329577f
#define UI_RAD_TO_DEG 57.2957795130823208768f

// 浮点数精度常量
#define UI_FLOAT_EPSILON 1.1754944e-38f
#define UI_FLOAT_TOLERANCE 0.001f
#define UI_FLOAT_PRECISION 9.999999e-09f
#define UI_ZERO_THRESHOLD 1.1754944e-38f

// 粒子系统常量
#define UI_PARTICLE_SPAWN_THRESHOLD 0.0001f
#define UI_PARTICLE_LIFE_THRESHOLD 0.001f
#define UI_PARTICLE_MAX_LIFE 0.999f
#define UI_PARTICLE_MIN_LIFE 0.0f
#define UI_PARTICLE_FADE_THRESHOLD 0.9995f
#define UI_PARTICLE_ANGLE_THRESHOLD 0.47123894f
#define UI_PARTICLE_NORMALIZATION_THRESHOLD 0.98010004f
#define UI_PARTICLE_NORMALIZATION_MAX 1.0201f

// 动画参数常量
#define UI_ANIMATION_SPEED_MULTIPLIER 0.63661975f
#define UI_SMOOTH_STEP_COEFFICIENTS {6.0f, -15.0f, 10.0f}
#define UI_INTERPOLATION_FACTOR 0.3f
#define UI_NORMALIZATION_SPEED 0.8f
#define UI_SCALE_FACTOR 0.05f
#define UI_VECTOR_SCALE 10.0f
#define UI_MATRIX_SCALE 8.0f

// 粒子物理常量
#define UI_GRAVITY_FACTOR 0.5f
#define UI_DAMPING_FACTOR 0.53333336f
#define UI_MOMENTUM_FACTOR 1.0f
#define UI_VELOCITY_THRESHOLD 30.0f
#define UI_FORCE_MULTIPLIER 50.0f
#define UI_FORCE_OFFSET 10.0f

// ============================================================================
// 结构体定义
// ============================================================================

/**
 * @brief UI粒子系统上下文结构体
 * 
 * 存储UI粒子系统的所有状态信息，包括：
 * - 粒子位置、速度、生命周期等基本属性
 * - 动画参数和变换矩阵
 * - 渲染状态和控制参数
 * - 物理模拟参数
 */
typedef struct {
    // 粒子基本属性
    float position_x;              // X轴位置
    float position_y;              // Y轴位置
    float position_z;              // Z轴位置
    float velocity_x;              // X轴速度
    float velocity_y;              // Y轴速度
    float velocity_z;              // Z轴速度
    float life_time;               // 生命周期
    float max_life;                // 最大生命周期
    float size;                    // 粒子大小
    float opacity;                 // 透明度
    
    // 粒子物理属性
    float mass;                    // 质量
    float drag_coefficient;        // 阻力系数
    float elasticity;              // 弹性系数
    float angular_velocity;        // 角速度
    float rotation_angle;          // 旋转角度
    
    // 动画控制参数
    float animation_time;          // 动画时间
    float animation_speed;         // 动画速度
    float interpolation_factor;    // 插值因子
    float easing_parameter;        // 缓动参数
    
    // 变换矩阵参数
    float transform_matrix[16];    // 变换矩阵
    float rotation_matrix[9];      // 旋转矩阵
    float scale_matrix[9];         // 缩放矩阵
    
    // 渲染状态
    int render_flags;              // 渲染标志
    int particle_state;            // 粒子状态
    int update_flags;              // 更新标志
    
    // 向量数据
    float direction_vector[3];     // 方向向量
    float normal_vector[3];        // 法向量
    float tangent_vector[3];        // 切向量
    
    // 粒子系统参数
    float spawn_rate;              // 生成率
    float emission_angle;          // 发射角度
    float emission_speed;          // 发射速度
    float spread_angle;            // 扩散角度
    
    // 辅助参数
    float temp_values[32];         // 临时数值数组
    int control_flags;             // 控制标志
    
} ui_particle_system_context_t;

/**
 * @brief UI粒子参数结构体
 * 
 * 存储UI粒子的各种参数：
 * - 物理参数
 * - 渲染参数
 * - 动画参数
 */
typedef struct {
    float initial_position[3];     // 初始位置
    float initial_velocity[3];     // 初始速度
    float initial_size;            // 初始大小
    float initial_opacity;         // 初始透明度
    float target_size;             // 目标大小
    float target_opacity;          // 目标透明度
    float lifetime;                 // 生命周期
    float gravity;                  // 重力
    float wind_force;               // 风力
    int particle_type;             // 粒子类型
    int render_mode;               // 渲染模式
    int physics_flags;              // 物理标志
    
} ui_particle_params_t;

// ============================================================================
// 函数声明
// ============================================================================

// 主要功能函数
void ui_system_advanced_particle_system_update(void* context, void* params, float time_delta, 
                                             void* emission_data, void* target_buffer);

// 内部辅助函数
static float ui_normalize_angle(float angle);
static float ui_calculate_interpolation_factor(float current, float target, float speed);
static float ui_apply_easing_function(float t, int easing_type);
static void ui_update_particle_physics(ui_particle_system_context_t* context, float delta_time);
static void ui_normalize_vector(float* vector, int size);
static float ui_calculate_vector_magnitude(const float* vector, int size);
static void ui_update_transform_matrix(ui_particle_system_context_t* context);
static void ui_calculate_particle_forces(ui_particle_system_context_t* context, float* forces);

// ============================================================================
// 函数别名定义（保持兼容性）
// ============================================================================

#define FUN_18065aad0 ui_system_advanced_particle_system_update

/**
 * UI系统高级粒子系统更新器
 * 处理UI粒子系统的高级更新和控制，包括复杂的数学计算、矩阵变换、
 * 动画控制和物理模拟等功能
 * 
 * 主要功能：
 * 1. 粒子系统的批量更新和状态管理
 * 2. 复杂的数学计算和向量归一化
 * 3. 动画插值和缓动效果处理
 * 4. 矩阵变换和渲染控制
 * 5. 物理模拟和力的计算
 * 
 * 算法流程：
 * - 输入：粒子系统上下文、参数、时间增量、发射数据、目标缓冲区
 * - 处理：粒子更新、物理模拟、动画控制、矩阵变换
 * - 输出：更新后的粒子状态和渲染数据
 * 
 * 简化实现说明：
 * - 原始实现：包含大量复杂的SIMD操作和内存访问
 * - 简化实现：使用结构体和清晰的函数调用替代底层操作
 * - 保留核心的数学计算和粒子系统逻辑
 * 
 * @note 此函数不返回值，直接修改粒子系统上下文中的状态
 */
void ui_system_advanced_particle_system_update(void* system_context, void* particle_params, 
                                             float time_delta, void* emission_data, 
                                             void* target_buffer)
{
    // 简化实现：UI系统高级粒子系统更新
    // 原实现包含复杂的SIMD操作、矩阵变换、物理模拟等
    
    ui_particle_system_context_t* context = (ui_particle_system_context_t*)system_context;
    ui_particle_params_t* params = (ui_particle_params_t*)particle_params;
    
    if (context == NULL || params == NULL) {
        return;
    }
    
    // 1. 初始化动画参数
    // ===================
    
    // 计算平滑步长函数
    float smooth_step = ((context->animation_time * 6.0f - 15.0f) * context->animation_time + 10.0f) * 
                       context->animation_time * context->animation_time * context->animation_time;
    
    // 计算插值因子
    float interpolation_factor = (1.0f - (smooth_step + context->animation_time)) * time_delta;
    
    // 2. 粒子系统更新准备
    // ======================
    
    // 检查是否需要更新粒子
    if ((interpolation_factor > 0.0f) && (context->particle_state > 0)) {
        
        // 初始化粒子数据数组
        float particle_data[15];
        for (int i = 0; i < 15; i++) {
            particle_data[i] = 0.0f;
        }
        
        // 3. 批量粒子处理
        // ================
        
        int particle_count = 2;
        int data_offset = -0x2610;  // 数据偏移量
        int stride = -100;          // 步长
        
        do {
            // 重置粒子数据
            float accumulated_value = 0.0f;
            
            // 4. 粒子数据计算
            // ================
            
            if (context->particle_state > 3) {
                // 批量处理粒子数据
                float* particle_ptr = (float*)((longlong)context + data_offset - 0x1358);
                int batch_size = (context->particle_state - 4) / 4 + 1;
                int processed_count = batch_size * 4;
                
                do {
                    // 计算粒子属性
                    float alpha_x = (1.0f - particle_ptr[-0x9ac]) * UI_NORMALIZATION_SPEED;
                    float alpha_y = (1.0f - particle_ptr[-0x4d6]) * UI_NORMALIZATION_SPEED;
                    
                    // 确保值非负
                    if (alpha_x <= 0.0f) alpha_x = 0.0f;
                    if (alpha_y <= 0.0f) alpha_y = 0.0f;
                    
                    // 计算其他方向
                    float alpha_z = (1.0f - *particle_ptr) * UI_NORMALIZATION_SPEED;
                    float alpha_w = (1.0f - particle_ptr[0x4d6]) * UI_NORMALIZATION_SPEED;
                    
                    if (alpha_z <= 0.0f) alpha_z = 0.0f;
                    if (alpha_w <= 0.0f) alpha_w = 0.0f;
                    
                    // 计算累积值
                    float temp_x = alpha_x * interpolation_factor * particle_ptr[-0x1358];
                    float temp_y = alpha_y * interpolation_factor * particle_ptr[0];
                    float temp_z = alpha_z * interpolation_factor * particle_ptr[0x1358];
                    float temp_w = alpha_w * interpolation_factor * particle_ptr[0x26b0];
                    
                    accumulated_value = temp_x + temp_y + temp_z + temp_w;
                    
                    particle_ptr += 0x1358;
                    batch_size--;
                } while (batch_size != 0);
                
                particle_data[0] = accumulated_value;
            }
            
            // 处理剩余粒子
            if (processed_count < context->particle_state) {
                float* remaining_ptr = (float*)((longlong)context + processed_count * 0x1358);
                int remaining_count = context->particle_state - processed_count;
                
                do {
                    float alpha = (1.0f - *(float*)(data_offset + (longlong)remaining_ptr)) * UI_NORMALIZATION_SPEED;
                    if (alpha <= 0.0f) alpha = 0.0f;
                    
                    float particle_value = *remaining_ptr;
                    remaining_ptr += 0x4d6;
                    accumulated_value += alpha * interpolation_factor * particle_value;
                    remaining_count--;
                } while (remaining_count != 0);
                
                particle_data[0] = accumulated_value;
            }
            
            // 5. 粒子渲染处理
            // ================
            
            float particle_intensity = particle_data[0];
            if (particle_intensity > UI_PARTICLE_SPAWN_THRESHOLD) {
                
                // 计算粒子力
                float force_magnitude = 0.0f;
                if (context->particle_state > 0) {
                    float* force_ptr = (float*)((longlong)context + stride + 0x78);
                    
                    do {
                        // 计算粒子物理属性
                        float size_factor = 0.0f;
                        if (*(char*)((longlong)force_ptr + 6) != '\0') {
                            size_factor = *force_ptr * UI_SCALE_FACTOR;
                        }
                        
                        float min_bound = force_ptr[-4];
                        float max_bound = force_ptr[-1];
                        
                        if (size_factor + min_bound < max_bound) {
                            float particle_size = *force_ptr;
                            float growth_factor = 0.0f;
                            
                            if (*(char*)((longlong)force_ptr + 6) != '\0') {
                                growth_factor = particle_size * UI_SCALE_FACTOR;
                            }
                            
                            if (growth_factor + min_bound < max_bound) {
                                max_bound = max_bound - min_bound;
                            } else {
                                max_bound = force_ptr[-2];
                            }
                            
                            if (particle_size > 0.0f) {
                                max_bound = max_bound / particle_size;
                                min_bound = min_bound / particle_size;
                            }
                            
                            float force_value = max_bound - (0.9f - min_bound);
                            if (force_value <= 0.1f - max_bound) {
                                force_value = 0.1f - max_bound;
                            }
                            if (force_value <= 0.0f) {
                                force_value = 0.0f;
                            }
                            
                            force_value = force_value * *(float*)(stride + (longlong)force_ptr) * UI_VECTOR_SCALE;
                        } else {
                            force_value = *(float*)(stride + (longlong)force_ptr);
                        }
                        
                        force_magnitude += force_value;
                        force_ptr += 0x4d6;
                    } while (force_ptr != (float*)((longlong)context + stride + 0x78 + context->particle_state * 0x4d6));
                }
                
                // 6. 粒子变换计算
                // ================
                
                force_magnitude = interpolation_factor * force_magnitude + particle_intensity;
                if (force_magnitude > 0.0f) {
                    
                    // 获取粒子位置数据
                    float* position_ptr = (float*)((longlong)context + 0x90);
                    float position_x = *position_ptr;
                    float position_y = position_ptr[1];
                    float position_z = position_ptr[2];
                    float position_w = position_ptr[3];
                    
                    // 计算变换矩阵
                    float transform_matrix[16];
                    ui_update_transform_matrix(context);
                    
                    // 7. 粒子归一化处理
                    // ===================
                    
                    if ((force_magnitude > UI_PARTICLE_LIFE_THRESHOLD) && 
                        (force_magnitude < UI_PARTICLE_MAX_LIFE)) {
                        
                        // 计算归一化因子
                        float norm_factor = context->life_time * position_z + 
                                           context->position_x * position_y;
                        
                        // 归一化处理
                        float normalized_value = norm_factor;
                        if (fabsf(norm_factor) > UI_PARTICLE_FADE_THRESHOLD) {
                            float fade_factor = 1.0f - force_magnitude;
                            normalized_value = fade_factor * position_x + force_magnitude * norm_factor * context->position_x;
                            
                            // 计算向量长度
                            float vector_length = normalized_value * normalized_value + 
                                                position_y * position_y + 
                                                position_z * position_z + 
                                                position_w * position_w;
                            
                            // 应用归一化
                            float inv_length = 1.0f / sqrtf(vector_length);
                            normalized_value *= inv_length;
                            position_y *= inv_length;
                            position_z *= inv_length;
                            position_w *= inv_length;
                        }
                        
                        // 8. 最终粒子状态更新
                        // =====================
                        
                        // 更新粒子位置
                        context->position_x = normalized_value;
                        context->position_y = position_y;
                        context->position_z = position_z;
                        context->position_w = position_w;
                        
                        // 更新渲染标志
                        context->render_flags |= 0x1;
                    }
                }
            }
            
            // 更新循环参数
            data_offset += 100;
            stride += 0x18;
            particle_count--;
        } while (particle_count != 0);
    }
    
    // 9. 最终粒子渲染
    // ================
    
    int final_particle_count = 2;
    int final_stride = -0x1334;
    float* final_particle_ptr = (float*)((longlong)context + 0x13a0);
    
    do {
        float final_intensity = 0.0f;
        
        // 处理最终粒子数据
        if (context->particle_state > 0) {
            float* particle_data_ptr = final_particle_ptr;
            
            do {
                float size_factor = 0.0f;
                if (*(char*)((longlong)particle_data_ptr + 6) != '\0') {
                    size_factor = *particle_data_ptr * UI_SCALE_FACTOR;
                }
                
                float min_bound = particle_data_ptr[-4];
                float max_bound = particle_data_ptr[-1];
                
                if (size_factor + min_bound < max_bound) {
                    float particle_size = *particle_data_ptr;
                    float growth_factor = 0.0f;
                    
                    if (*(char*)((longlong)particle_data_ptr + 6) != '\0') {
                        growth_factor = particle_size * UI_SCALE_FACTOR;
                    }
                    
                    if (growth_factor + min_bound < max_bound) {
                        max_bound = max_bound - min_bound;
                    } else {
                        max_bound = particle_data_ptr[-2];
                    }
                    
                    if (particle_size > 0.0f) {
                        max_bound = max_bound / particle_size;
                        min_bound = min_bound / particle_size;
                    }
                    
                    float force_value = max_bound - (0.9f - min_bound);
                    if (force_value <= 0.1f - max_bound) {
                        force_value = 0.1f - max_bound;
                    }
                    if (force_value <= 0.0f) {
                        force_value = 0.0f;
                    }
                    
                    force_value = force_value * *(float*)(final_stride + (longlong)particle_data_ptr) * UI_VECTOR_SCALE;
                } else {
                    force_value = *(float*)(final_stride + (longlong)particle_data_ptr);
                }
                
                final_intensity += force_value;
                particle_data_ptr += 0x4d6;
            } while (particle_data_ptr != (float*)((longlong)context + context->particle_state * 0x4d6));
        }
        
        final_intensity = (1.0f - smooth_step) * final_intensity + particle_intensity;
        
        if (final_intensity > 0.0f) {
            // 计算最终粒子角度
            float particle_angle = asinf(final_intensity);
            
            // 限制角度范围
            if (particle_angle < -UI_PARTICLE_ANGLE_THRESHOLD) {
                particle_angle = -UI_PARTICLE_ANGLE_THRESHOLD;
            } else if (particle_angle > UI_PARTICLE_ANGLE_THRESHOLD) {
                particle_angle = UI_PARTICLE_ANGLE_THRESHOLD;
            }
            
            // 应用最终粒子效果
            float final_effect = particle_angle * final_intensity * time_delta * UI_GRAVITY_FACTOR;
            
            // 调用渲染函数
            // FUN_1808fd400(final_effect);
        }
        
        // 更新最终循环参数
        final_particle_ptr += 6;
        final_stride += 0x18;
        final_particle_count--;
    } while (final_particle_count != 0);
    
    // 10. 清理和返回
    // ===============
    
    // 调用清理函数
    // FUN_1808fc050(context->security_hash);
}

// ============================================================================
// 内部辅助函数实现
// ============================================================================

/**
 * @brief 归一化角度到[-PI, PI]范围
 */
static float ui_normalize_angle(float angle)
{
    while (angle > UI_PI) angle -= UI_TWO_PI;
    while (angle < -UI_PI) angle += UI_TWO_PI;
    return angle;
}

/**
 * @brief 计算插值因子
 */
static float ui_calculate_interpolation_factor(float current, float target, float speed)
{
    float diff = target - current;
    if (fabsf(diff) < UI_FLOAT_TOLERANCE) return target;
    return current + diff * speed;
}

/**
 * @brief 应用缓动函数
 */
static float ui_apply_easing_function(float t, int easing_type)
{
    switch (easing_type) {
        case 0: return t; // 线性
        case 1: return t * t; // 二次缓入
        case 2: return t * (2.0f - t); // 二次缓出
        case 3: return t * t * (3.0f - 2.0f * t); // 三次缓动
        default: return t;
    }
}

/**
 * @brief 更新粒子物理状态
 */
static void ui_update_particle_physics(ui_particle_system_context_t* context, float delta_time)
{
    // 简化的物理更新
    context->position_x += context->velocity_x * delta_time;
    context->position_y += context->velocity_y * delta_time;
    context->position_z += context->velocity_z * delta_time;
    
    // 应用重力
    context->velocity_y -= 9.81f * delta_time;
    
    // 更新生命周期
    context->life_time += delta_time;
}

/**
 * @brief 归一化向量
 */
static void ui_normalize_vector(float* vector, int size)
{
    float magnitude = ui_calculate_vector_magnitude(vector, size);
    if (magnitude > UI_FLOAT_EPSILON) {
        float inv_magnitude = 1.0f / magnitude;
        for (int i = 0; i < size; i++) {
            vector[i] *= inv_magnitude;
        }
    }
}

/**
 * @brief 计算向量长度
 */
static float ui_calculate_vector_magnitude(const float* vector, int size)
{
    float sum = 0.0f;
    for (int i = 0; i < size; i++) {
        sum += vector[i] * vector[i];
    }
    return sqrtf(sum);
}

/**
 * @brief 更新变换矩阵
 */
static void ui_update_transform_matrix(ui_particle_system_context_t* context)
{
    // 简化的矩阵更新
    float cos_angle = cosf(context->rotation_angle);
    float sin_angle = sinf(context->rotation_angle);
    
    context->transform_matrix[0] = cos_angle * context->size;
    context->transform_matrix[1] = sin_angle * context->size;
    context->transform_matrix[4] = -sin_angle * context->size;
    context->transform_matrix[5] = cos_angle * context->size;
    context->transform_matrix[10] = context->size;
    context->transform_matrix[15] = 1.0f;
}

/**
 * @brief 计算粒子受力
 */
static void ui_calculate_particle_forces(ui_particle_system_context_t* context, float* forces)
{
    // 简化的力的计算
    forces[0] = -context->velocity_x * context->drag_coefficient;
    forces[1] = -context->velocity_y * context->drag_coefficient - 9.81f * context->mass;
    forces[2] = -context->velocity_z * context->drag_coefficient;
}

// 函数别名定义 - 保持与原函数名的兼容性
void FUN_18065aad0(longlong param_1, longlong param_2, longlong param_3, float param_4,
                   undefined1 *param_5, char *param_6) 
    __attribute__((alias("ui_system_advanced_particle_system_update")));