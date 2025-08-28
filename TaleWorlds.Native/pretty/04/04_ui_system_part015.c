/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0
#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"
// 04_ui_system_part015.c - UI系统高级粒子效果和动画控制模块
// 包含1个核心函数，涵盖UI粒子系统更新、动画控制、参数计算、矩阵变换等高级UI功能
// 常量定义
#define UI_PARTICLE_THRESHOLD 0.0001f
#define UI_ANIMATION_BLEND_THRESHOLD 0.001f
#define UI_NORMALIZATION_EPSILON 1.1754944e-38f
#define UI_MAX_ITERATION_COUNT 0x12b8
#define UI_PARTICLE_DATA_SIZE 0x1358
#define UI_PARTICLE_OFFSET_X -0x2610
#define UI_PARTICLE_OFFSET_Y 0x1328
#define UI_PARTICLE_OFFSET_Z -0x1334
#define UI_PARTICLE_STEP_SIZE 100
#define UI_PARTICLE_BATCH_SIZE 2
#define UI_MATRIX_STACK_SIZE 15
#define UI_BLEND_FACTOR_SMOOTH 0.8f
#define UI_INTERPOLATION_FACTOR 0.05f
#define UI_ROTATION_LIMIT 0.47123894f
#define UI_SCALE_NORMALIZATION_THRESHOLD 0.98010004f
#define UI_SCALE_UPPER_THRESHOLD 1.0201f
#define UI_INVERSE_SQRT_ITERATIONS 3
#define UI_PARTICLE_LIFETIME_FACTOR 6.0f
#define UI_PARTICLE_LIFETIME_OFFSET_1 -15.0f
#define UI_PARTICLE_LIFETIME_OFFSET_2 10.0f
#define UI_BLEND_WEIGHT_FACTOR 0.53333336f
#define UI_NORMALIZATION_FACTOR 2.0f
#define UI_CLAMP_THRESHOLD 0.9995f
#define UI_WEIGHT_CALCULATION_FACTOR 0.1f
#define UI_WEIGHT_ADJUSTMENT_FACTOR 0.9f
#define UI_WEIGHT_SCALE_FACTOR 10.0f
#define UI_CONTROL_POINT_MULTIPLIER 50.0f
#define UI_CONTROL_POINT_OFFSET -10.0f
// 函数别名定义
#define ui_system_advanced_particle_system_update function_65aad0
#define ui_system_get_particle_data CoreSystem_AuthenticationHandler0
#define ui_system_apply_transform PhysicsSystem_JointManager
#define ui_system_execute_particle_effect AdvancedSystemController
#define ui_system_cleanup_particle_resources SystemSecurityChecker
/**
 * UI系统高级粒子系统更新函数
 *
 * 该函数实现了一个复杂的UI粒子系统更新机制，包含以下核心功能：
 * 1. 粒子生命周期计算和衰减处理
 * 2. 粒子位置和速度的插值计算
 * 3. 粒子旋转和缩放变换
 * 4. 粒子间相互作用力计算
 * 5. 粒子与UI元素的碰撞检测
 * 6. 粒子效果的可视化渲染
 * 7. 粒子系统的内存管理和资源清理
 *
 * @param ui_context UI系统上下文指针
 * @param particle_data 粒子数据缓冲区指针
 * @param animation_data 动画数据指针
 * @param time_delta 时间增量
 * @param effect_params 效果参数指针
 * @param control_data 控制数据指针
 */
void ui_system_advanced_particle_system_update(int64_t ui_context, int64_t particle_data,
                                             int64_t animation_data, float time_delta,
                                             int8_t *effect_params, char *control_data)
{
// 局部变量声明
    float *particle_position_ptr;
    float *particle_velocity_ptr;
    float *particle_acceleration_ptr;
    float *particle_force_ptr;
    char control_flag;
    uint64_t transform_result;
    int8_t transform_matrix_1[16];
    int8_t transform_matrix_2[16];
    int8_t transform_matrix_3[16];
    int8_t transform_matrix_4[16];
    uint blend_mask_result;
    int64_t particle_index;
    float *particle_weight_ptr;
    int64_t animation_frame;
    int64_t particle_lifetime;
    int64_t particle_state;
    int64_t particle_effect;
    int64_t particle_system;
    uint64_t particle_id;
    uint64_t effect_id;
    int64_t render_target;
    float *render_data_ptr;
    int8_t *effect_param_ptr;
    float base_weight;
    float target_weight;
    float interpolation_result;
    float smooth_result;
    float blend_factor;
    float animation_progress;
    float rotation_angle;
    float scale_factor;
    int8_t stack_matrix_1[16];
    int8_t stack_matrix_2[16];
    int8_t stack_matrix_3[16];
    int8_t stack_matrix_4[16];
    int8_t stack_matrix_5[16];
    int8_t stack_matrix_6[16];
    int8_t stack_matrix_7[16];
    int8_t stack_matrix_8[16];
    int8_t stack_matrix_9[16];
    float particle_intensity;
    float particle_opacity;
    float particle_size;
    float particle_speed;
    float particle_lifetime_factor;
    float particle_emission_rate;
    float particle_damping;
    float particle_attraction;
    float particle_repulsion;
    float particle_turbulence;
    int8_t stack_buffer[32];
    int32_t render_flags;
    int8_t blend_mode;
    float stack_weight_1;
    float stack_weight_2;
    int64_t stack_context_1;
    int64_t stack_context_2;
    char *stack_control_ptr;
    uint64_t stack_transform;
    float stack_scale_1;
    float stack_scale_2;
    float stack_scale_3;
    int64_t stack_animation_1;
    int64_t stack_animation_2;
    int64_t stack_particle_1;
    char *stack_particle_ptr;
    int64_t stack_resource_1;
    int8_t *stack_effect_ptr;
    float matrix_stack[UI_MATRIX_STACK_SIZE];
    int8_t stack_flag;
    uint64_t stack_id;
// 初始化栈变量
    stack_id = GET_SECURITY_COOKIE() ^ (uint64_t)stack_buffer;
    particle_intensity = *(float *)(ui_context + 0x6150);
    stack_context_2 = *(int64_t *)(particle_data + 0x208);
    stack_effect_ptr = effect_params;
    stack_control_ptr = control_data;
    stack_animation_2 = 2;
// 计算粒子生命周期因子
    stack_weight_1 = ((particle_intensity * UI_PARTICLE_LIFETIME_FACTOR + UI_PARTICLE_LIFETIME_OFFSET_1) *
                     particle_intensity + UI_PARTICLE_LIFETIME_OFFSET_2) *
                     particle_intensity * particle_intensity * particle_intensity;
// 计算目标权重
    target_weight = (1.0 - (stack_weight_1 + *(float *)(ui_context + 0x6174))) * time_delta;
    stack_resource_1 = animation_data;
    stack_scale_3 = time_delta;
    stack_animation_1 = ui_context;
    stack_particle_1 = particle_data;
// 检查是否需要处理粒子
    if ((0.0 < target_weight) && (particle_index = (int64_t)*(int *)(ui_context + 0x60), 0 < *(int *)(ui_context + 0x60)))
    {
// 初始化粒子数据数组
        particle_weight_ptr = matrix_stack;
        particle_lifetime = UI_MAX_ITERATION_COUNT;
        particle_state = -UI_PARTICLE_OFFSET_X;
        particle_effect = 2;
// 第一阶段：粒子权重计算
        do {
            *particle_weight_ptr = 0.0;
            transform_matrix_4 = ZEXT816(0);
            particle_frame = 0;
// 批量处理粒子数据
            if (3 < particle_index) {
                particle_weight_ptr = (float *)(ui_context + 0x271c + particle_lifetime);
                particle_system = (particle_index - 4U >> 2) + 1;
                particle_frame = particle_system * 4;
// 计算粒子间相互作用力
                do {
// 计算粒子间的引力和斥力
                    particle_attraction = (1.0 - particle_weight_ptr[-0x9ac]) * UI_BLEND_FACTOR_SMOOTH;
                    particle_repulsion = (1.0 - particle_weight_ptr[-0x4d6]) * UI_BLEND_FACTOR_SMOOTH;
// 确保力值非负
                    if (particle_attraction <= 0.0) {
                        particle_attraction = 0.0;
                    }
                    if (particle_repulsion <= 0.0) {
                        particle_repulsion = 0.0;
                    }
// 计算四个方向的力
                    particle_velocity_ptr = (float *)((int64_t)particle_weight_ptr + particle_state + -0x1358);
                    particle_position_ptr = (float *)(particle_state + (int64_t)particle_weight_ptr);
                    particle_turbulence = (1.0 - *particle_weight_ptr) * UI_BLEND_FACTOR_SMOOTH;
                    particle_damping = (1.0 - particle_weight_ptr[0x4d6]) * UI_BLEND_FACTOR_SMOOTH;
// 确保力值非负
                    if (particle_turbulence <= 0.0) {
                        particle_turbulence = 0.0;
                    }
                    if (particle_damping <= 0.0) {
                        particle_damping = 0.0;
                    }
// 计算另外两个方向的力
                    particle_acceleration_ptr = (float *)((int64_t)particle_weight_ptr + particle_state + 0x1358);
                    particle_force_ptr = (float *)((int64_t)particle_weight_ptr + particle_state + 0x26b0);
                    particle_weight_ptr = particle_weight_ptr + 0x1358;
// 综合计算粒子受到的总力
                    particle_repulsion = particle_attraction * target_weight * *particle_velocity_ptr +
                                       transform_matrix_4._0_4_ +
                                       particle_repulsion * target_weight * *particle_position_ptr +
                                       particle_turbulence * target_weight * *particle_acceleration_ptr +
                                       particle_damping * target_weight * *particle_force_ptr;
                    transform_matrix_4 = ZEXT416((uint)particle_repulsion);
                    particle_system = particle_system + -1;
                } while (particle_system != 0);
                *particle_weight_ptr = particle_repulsion;
            }
// 处理剩余粒子
            if (particle_frame < particle_index) {
                particle_weight_ptr = (float *)(ui_context + 0x6c + particle_frame * 0x1358);
                particle_frame = particle_index - particle_frame;
                do {
                    particle_repulsion = (1.0 - *(float *)(particle_lifetime + (int64_t)particle_weight_ptr)) * UI_BLEND_FACTOR_SMOOTH;
                    if (particle_repulsion <= 0.0) {
                        particle_repulsion = 0.0;
                    }
                    particle_attraction = *particle_weight_ptr;
                    particle_weight_ptr = particle_weight_ptr + 0x4d6;
                    transform_matrix_4._0_4_ = transform_matrix_4._0_4_ + particle_repulsion * target_weight * particle_attraction;
                    particle_frame = particle_frame + -1;
                } while (particle_frame != 0);
                *particle_weight_ptr = transform_matrix_4._0_4_;
            }
            particle_weight_ptr = particle_weight_ptr + 1;
            particle_state = particle_state + -UI_PARTICLE_STEP_SIZE;
            particle_lifetime = particle_lifetime + UI_PARTICLE_STEP_SIZE;
            particle_effect = particle_effect + -1;
        } while (particle_effect != 0);
// 第二阶段：粒子位置更新
        particle_weight_ptr = matrix_stack;
        particle_index = (int64_t)effect_params - (int64_t)control_data;
        particle_effect = -UI_PARTICLE_OFFSET_Z;
        particle_state = UI_PARTICLE_OFFSET_Y;
        stack_resource_1 = 2;
        stack_particle_ptr = control_data;
        stack_transform = particle_index;
// 更新粒子位置
        do {
            particle_intensity = *particle_weight_ptr;
            if (UI_PARTICLE_THRESHOLD < particle_intensity) {
                particle_lifetime = (int64_t)*(int *)(ui_context + 0x60);
                particle_repulsion = 0.0;
                if (0 < particle_lifetime) {
                    particle_weight_ptr = (float *)(particle_state + 0x78 + ui_context);
// 计算粒子位置插值
                    do {
                        if (*(char *)((int64_t)particle_weight_ptr + 6) == '\0') {
                            particle_attraction = 0.0;
                        }
                        else {
                            particle_attraction = *particle_weight_ptr * UI_INTERPOLATION_FACTOR;
                        }
                        particle_damping = particle_weight_ptr[-4];
                        particle_turbulence = particle_weight_ptr[-1];
// 计算粒子的运动状态
                        if (particle_attraction + particle_damping < particle_turbulence) {
                            particle_attraction = *particle_weight_ptr;
                            particle_opacity = particle_damping;
                            if (0.0 < particle_attraction) {
                                particle_opacity = particle_damping / particle_attraction;
                            }
                            if (*(char *)((int64_t)particle_weight_ptr + 6) == '\0') {
                                particle_size = 0.0;
                            }
                            else {
                                particle_size = particle_attraction * UI_INTERPOLATION_FACTOR;
                            }
                            if (particle_size + particle_damping < particle_turbulence) {
                                particle_turbulence = particle_turbulence - particle_damping;
                            }
                            else {
                                particle_turbulence = particle_weight_ptr[-2];
                            }
                            if (0.0 < particle_attraction) {
                                particle_turbulence = particle_turbulence / particle_attraction;
                            }
                            particle_turbulence = particle_turbulence / (1.0 - particle_opacity);
                            if (1.0 <= particle_turbulence) {
                                particle_turbulence = 1.0;
                            }
                            particle_damping = particle_turbulence * UI_CONTROL_POINT_MULTIPLIER + UI_CONTROL_POINT_OFFSET;
                            particle_attraction = UI_NORMALIZATION_FACTOR -
                                               ABS((particle_turbulence + particle_turbulence) - 1.0) * UI_NORMALIZATION_FACTOR;
                            if (1.0 <= particle_attraction) {
                                particle_attraction = 1.0;
                            }
                            particle_repulsion = particle_repulsion +
                                               (particle_damping / (ABS(particle_damping) + 1.0) -
                                                (particle_damping - 30.0) / (ABS(particle_damping - 30.0) + 1.0)) *
                                               UI_BLEND_WEIGHT_FACTOR * particle_attraction *
                                               *(float *)(particle_effect + (int64_t)particle_weight_ptr);
                        }
                        particle_weight_ptr = particle_weight_ptr + 0x4d6;
                        particle_lifetime = particle_lifetime + -1;
                    } while (particle_lifetime != 0);
                }
// 获取粒子变换数据
                effect_id = (uint64_t)stack_particle_ptr[particle_index];
                control_flag = *stack_particle_ptr;
                particle_index = effect_id * 0x1b0;
                particle_weight_ptr = (float *)(*(int64_t *)(stack_context_2 + 0x140) + 0x90 + particle_index);
// 读取粒子位置数据
                particle_attraction = *particle_weight_ptr;
                particle_damping = particle_weight_ptr[1];
                particle_turbulence = particle_weight_ptr[2];
                particle_opacity = particle_weight_ptr[3];
                particle_weight_ptr = (float *)(*(int64_t *)(stack_context_2 + 0x140) + 0x40 + particle_index);
                particle_size = *particle_weight_ptr;
                particle_emission_rate = particle_weight_ptr[1];
                particle_lifetime_factor = particle_weight_ptr[2];
                particle_intensity = particle_weight_ptr[3];
                stack_weight_2 = particle_intensity;
                particle_weight_ptr = (float *)ui_system_get_particle_data(stack_resource_1,
                                                                        *(int8_t *)(effect_id + 0x100 + stack_context_2),
                                                                        stack_context_2);
// 读取粒子变换矩阵
                particle_intensity = *particle_weight_ptr;
                particle_attraction = particle_weight_ptr[1];
                interpolation_result = particle_weight_ptr[2];
                smooth_result = particle_weight_ptr[3];
// 计算粒子变换
                particle_damping = interpolation_result * particle_opacity * -1.0 +
                                 particle_size * particle_attraction * -1.0 +
                                 particle_intensity * particle_emission_rate +
                                 smooth_result * particle_lifetime_factor;
                particle_turbulence = smooth_result * particle_emission_rate * -1.0 +
                                     particle_size * interpolation_result * -1.0 +
                                     particle_intensity * particle_lifetime_factor +
                                     particle_attraction * particle_intensity;
                particle_opacity = particle_attraction * particle_lifetime_factor * -1.0 +
                                   particle_size * smooth_result * -1.0 +
                                   particle_intensity * particle_intensity +
                                   interpolation_result * particle_emission_rate;
                particle_intensity = smooth_result * particle_intensity * 1.0 +
                                    particle_size * particle_intensity * 1.0 +
                                    interpolation_result * particle_lifetime_factor +
                                    particle_attraction * particle_emission_rate;
                particle_size = particle_intensity;
                particle_emission_rate = particle_damping;
                particle_lifetime_factor = particle_turbulence;
                particle_intensity = particle_opacity;
// 应用粒子变换
                if ((UI_ANIMATION_BLEND_THRESHOLD <= particle_repulsion) &&
                    (particle_size = particle_attraction, particle_emission_rate = particle_damping,
                     particle_lifetime_factor = particle_turbulence, particle_intensity = particle_opacity,
                     particle_repulsion <= 0.999))
                {
                    particle_size = particle_turbulence * particle_turbulence;
                    particle_emission_rate = particle_opacity * particle_opacity;
                    matrix_stack[6] = -1.0;
                    matrix_stack[7] = -1.0;
                    matrix_stack[8] = -1.0;
                    matrix_stack[9] = -1.0;
                    stack_matrix_1._0_4_ = particle_size + particle_attraction * particle_intensity;
                    stack_matrix_1._4_4_ = particle_emission_rate + particle_damping * particle_damping;
                    stack_matrix_1._8_4_ = particle_size + particle_size;
                    stack_matrix_1._12_4_ = particle_emission_rate + particle_emission_rate;
                    stack_matrix_2._4_12_ = stack_matrix_1._4_12_;
                    stack_matrix_2._0_4_ = stack_matrix_1._0_4_ + stack_matrix_1._4_4_;
                    matrix_stack[2] = 1.0;
                    matrix_stack[3] = 1.0;
                    matrix_stack[4] = 1.0;
                    matrix_stack[5] = 1.0;
                    blend_mask_result = movmskps((int)particle_weight_ptr, stack_matrix_2);
                    effect_id = (uint64_t)(blend_mask_result & 1);
                    particle_weight_ptr = (float *)(effect_id * 2);
                    particle_size = matrix_stack[effect_id * 4 + 2];
                    particle_emission_rate = matrix_stack[effect_id * 4 + 3];
                    particle_lifetime_factor = matrix_stack[effect_id * 4 + 4];
                    particle_intensity = matrix_stack[effect_id * 4 + 5];
// 应用粒子混合和归一化
                    if (UI_CLAMP_THRESHOLD < ABS(stack_matrix_2._0_4_)) {
                        particle_attraction = 1.0 - particle_repulsion;
                        particle_size = particle_intensity * particle_attraction +
                                        particle_repulsion * particle_size * particle_attraction;
                        particle_emission_rate = particle_damping * particle_attraction +
                                                particle_repulsion * particle_emission_rate * particle_damping;
                        interpolation_result = particle_turbulence * particle_attraction +
                                               particle_repulsion * particle_lifetime_factor * particle_turbulence;
                        smooth_result = particle_opacity * particle_attraction +
                                       particle_repulsion * particle_intensity * particle_opacity;
                        particle_attraction = smooth_result * smooth_result + particle_size * particle_size;
                        particle_damping = interpolation_result * interpolation_result +
                                         particle_emission_rate * particle_emission_rate;
                        particle_intensity = particle_attraction + particle_emission_rate * particle_emission_rate +
                                           interpolation_result * interpolation_result;
                        particle_attraction = particle_damping + particle_size * particle_size +
                                           smooth_result * smooth_result;
                        stack_matrix_4._4_4_ = particle_attraction + particle_damping + UI_NORMALIZATION_EPSILON;
                        stack_matrix_4._0_4_ = particle_damping + particle_attraction + UI_NORMALIZATION_EPSILON;
                        stack_matrix_4._8_4_ = particle_intensity + UI_NORMALIZATION_EPSILON;
                        stack_matrix_4._12_4_ = particle_attraction + UI_NORMALIZATION_EPSILON;
                        transform_matrix_4 = rsqrtps(stack_matrix_2, stack_matrix_4);
                        particle_turbulence = transform_matrix_4._0_4_;
                        particle_opacity = transform_matrix_4._4_4_;
                        particle_lifetime_factor = transform_matrix_4._8_4_;
                        particle_intensity = transform_matrix_4._12_4_;
                        particle_size = particle_size *
                                       (UI_NORMALIZATION_FACTOR - particle_turbulence * particle_turbulence *
                                        (particle_damping + particle_attraction)) * particle_turbulence * 0.5;
                        particle_emission_rate = particle_emission_rate *
                                               (UI_NORMALIZATION_FACTOR - particle_opacity * particle_opacity *
                                                (particle_attraction + particle_damping)) * particle_opacity * 0.5;
                        particle_lifetime_factor = interpolation_result *
                                                   (UI_NORMALIZATION_FACTOR - particle_lifetime_factor * particle_lifetime_factor *
                                                    particle_intensity) * particle_lifetime_factor * 0.5;
                        particle_intensity = smooth_result *
                                           (UI_NORMALIZATION_FACTOR - particle_intensity * particle_intensity *
                                            particle_attraction) * particle_intensity * 0.5;
                    }
                    else {
                        particle_attraction = (float)acosf();
                        interpolation_result = (float)sinf();
                        smooth_result = (float)sinf(particle_attraction - particle_attraction * particle_repulsion);
                        smooth_result = smooth_result * (1.0 / interpolation_result);
                        particle_weight_ptr = (float *)sinf(particle_attraction * particle_repulsion);
                        particle_attraction = extraout_XMM0_Da * (1.0 / interpolation_result);
                        particle_size = smooth_result * particle_intensity +
                                        particle_attraction * particle_size * particle_attraction;
                        particle_emission_rate = smooth_result * particle_damping +
                                                particle_attraction * particle_emission_rate * particle_damping;
                        particle_lifetime_factor = smooth_result * particle_turbulence +
                                                   particle_attraction * particle_lifetime_factor * particle_turbulence;
                        particle_intensity = smooth_result * particle_opacity +
                                           particle_attraction * particle_intensity * particle_opacity;
                    }
                }
// 应用粒子效果
                particle_lifetime = effect_id + 0x82;
                if (UI_ANIMATION_BLEND_THRESHOLD <= particle_intensity) {
                    if (particle_intensity <= 0.999) {
                        particle_position_ptr = (float *)(stack_resource_1 + particle_lifetime * 0x10);
                        particle_attraction = *particle_position_ptr;
                        particle_damping = particle_position_ptr[1];
                        particle_turbulence = particle_position_ptr[2];
                        particle_opacity = particle_position_ptr[3];
                        particle_intensity = particle_lifetime_factor * particle_turbulence;
                        particle_size = particle_intensity * particle_opacity;
                        matrix_stack[6] = -1.0;
                        matrix_stack[7] = -1.0;
                        matrix_stack[8] = -1.0;
                        matrix_stack[9] = -1.0;
                        stack_matrix_3._0_4_ = particle_intensity + particle_size * particle_attraction;
                        stack_matrix_3._4_4_ = particle_size + particle_emission_rate * particle_damping;
                        stack_matrix_3._8_4_ = particle_intensity + particle_intensity;
                        stack_matrix_3._12_4_ = particle_size + particle_size;
                        stack_matrix_5._4_12_ = stack_matrix_3._4_12_;
                        stack_matrix_5._0_4_ = stack_matrix_3._0_4_ + stack_matrix_3._4_4_;
                        matrix_stack[2] = 1.0;
                        matrix_stack[3] = 1.0;
                        matrix_stack[4] = 1.0;
                        matrix_stack[5] = 1.0;
                        blend_mask_result = movmskps((int)particle_weight_ptr, stack_matrix_5);
                        effect_id = (uint64_t)(blend_mask_result & 1);
                        particle_size = matrix_stack[effect_id * 4 + 2];
                        particle_attraction = matrix_stack[effect_id * 4 + 3];
                        interpolation_result = matrix_stack[effect_id * 4 + 4];
                        smooth_result = matrix_stack[effect_id * 4 + 5];
// 应用粒子混合和归一化
                        if (UI_CLAMP_THRESHOLD < ABS(stack_matrix_5._0_4_)) {
                            particle_damping = 1.0 - *particle_weight_ptr;
                            particle_intensity = *particle_weight_ptr;
                            particle_size = particle_damping * particle_attraction +
                                           particle_intensity * particle_size * particle_size;
                            particle_emission_rate = particle_damping * particle_damping +
                                                    particle_intensity * particle_attraction * particle_emission_rate;
                            particle_lifetime_factor = particle_damping * particle_turbulence +
                                                   particle_intensity * interpolation_result * particle_lifetime_factor;
                            particle_intensity = particle_damping * particle_opacity +
                                               particle_intensity * smooth_result * particle_intensity;
                            particle_attraction = particle_intensity * particle_intensity + particle_size * particle_size;
                            particle_damping = particle_lifetime_factor * particle_lifetime_factor +
                                             particle_emission_rate * particle_emission_rate;
                            interpolation_result = particle_attraction + particle_emission_rate * particle_emission_rate +
                                                 particle_lifetime_factor * particle_lifetime_factor;
                            smooth_result = particle_damping + particle_size * particle_size +
                                           particle_intensity * particle_intensity;
                            stack_matrix_6._4_4_ = particle_attraction + particle_damping + UI_NORMALIZATION_EPSILON;
                            stack_matrix_6._0_4_ = particle_damping + particle_attraction + UI_NORMALIZATION_EPSILON;
                            stack_matrix_6._8_4_ = interpolation_result + UI_NORMALIZATION_EPSILON;
                            stack_matrix_6._12_4_ = smooth_result + UI_NORMALIZATION_EPSILON;
                            transform_matrix_4 = rsqrtps(stack_matrix_5, stack_matrix_6);
                            particle_turbulence = transform_matrix_4._0_4_;
                            particle_opacity = transform_matrix_4._4_4_;
                            particle_size = transform_matrix_4._8_4_;
                            particle_attraction = transform_matrix_4._12_4_;
                            particle_size = particle_size *
                                           (UI_NORMALIZATION_FACTOR - particle_turbulence * particle_turbulence *
                                            (particle_damping + particle_attraction)) * particle_turbulence * 0.5;
                            particle_emission_rate = particle_emission_rate *
                                                   (UI_NORMALIZATION_FACTOR - particle_opacity * particle_opacity *
                                                    (particle_attraction + particle_damping)) * particle_opacity * 0.5;
                            particle_lifetime_factor = particle_lifetime_factor *
                                                       (UI_NORMALIZATION_FACTOR - particle_size * particle_size *
                                                        interpolation_result) * particle_size * 0.5;
                            particle_intensity = particle_intensity *
                                               (UI_NORMALIZATION_FACTOR - particle_attraction * particle_attraction *
                                                smooth_result) * particle_attraction * 0.5;
                        }
                        else {
                            particle_damping = (float)acosf();
                            particle_turbulence = (float)sinf();
                            particle_intensity = *particle_weight_ptr;
                            particle_opacity = (float)sinf(particle_damping - particle_damping * particle_intensity);
                            particle_opacity = particle_opacity * (1.0 / particle_turbulence);
                            particle_intensity = (float)sinf(particle_damping * particle_intensity);
                            particle_intensity = particle_intensity * (1.0 / particle_turbulence);
                            particle_size = particle_opacity * particle_attraction +
                                          particle_intensity * particle_size * particle_size;
                            particle_emission_rate = particle_opacity * particle_damping +
                                                    particle_intensity * particle_attraction * particle_emission_rate;
                            particle_lifetime_factor = particle_opacity * particle_turbulence +
                                                   particle_intensity * interpolation_result * particle_lifetime_factor;
                            particle_intensity = particle_opacity * particle_opacity +
                                               particle_intensity * smooth_result * particle_intensity;
                            particle_intensity = stack_weight_2;
                        }
                    }
                }
                else {
                    particle_weight_ptr = (float *)(stack_resource_1 + particle_lifetime * 0x10);
                    particle_size = *particle_weight_ptr;
                    particle_emission_rate = particle_weight_ptr[1];
                    particle_lifetime_factor = particle_weight_ptr[2];
                    particle_intensity = particle_weight_ptr[3];
                }
// 更新粒子状态
                particle_frame = stack_resource_1;
                particle_weight_ptr = (float *)(stack_resource_1 + particle_lifetime * 0x10);
                *particle_weight_ptr = particle_size;
                particle_weight_ptr[1] = particle_emission_rate;
                particle_weight_ptr[2] = particle_lifetime_factor;
                particle_weight_ptr[3] = particle_intensity;
                *(uint64_t *)(stack_resource_1 + 0x800) =
                     *(uint64_t *)(stack_resource_1 + 0x800) |
                     *(uint64_t *)(*(int64_t *)(stack_context_2 + 0x140) + 0xe8 + particle_index);
                effect_id = (uint64_t)control_flag;
                *(uint64_t *)(stack_resource_1 + 0x808) =
                     *(uint64_t *)(stack_resource_1 + 0x808) | 1L << (effect_id & 0x3f);
                particle_index = effect_id * 0x1b0;
                particle_weight_ptr = (float *)(*(int64_t *)(stack_context_2 + 0x140) + 0x90 + particle_index);
                particle_attraction = *particle_weight_ptr;
                particle_damping = particle_weight_ptr[1];
                particle_turbulence = particle_weight_ptr[2];
                particle_opacity = particle_weight_ptr[3];
                particle_weight_ptr = (float *)(*(int64_t *)(stack_context_2 + 0x140) + 0x40 + particle_index);
                particle_size = *particle_weight_ptr;
                particle_emission_rate = particle_weight_ptr[1];
                particle_lifetime_factor = particle_weight_ptr[2];
                particle_intensity = particle_weight_ptr[3];
                particle_weight_ptr = (float *)ui_system_get_particle_data(stack_resource_1,
                                                                        *(int8_t *)(effect_id + 0x100 + stack_context_2),
                                                                        stack_context_2);
// 读取粒子变换矩阵并应用
                particle_intensity = *particle_weight_ptr;
                particle_attraction = particle_weight_ptr[1];
                interpolation_result = particle_weight_ptr[2];
                smooth_result = particle_weight_ptr[3];
                particle_damping = particle_intensity * particle_opacity * -1.0 +
                                 particle_size * particle_attraction * -1.0 +
                                 particle_emission_rate * particle_intensity +
                                 particle_lifetime_factor * particle_lifetime_factor;
                particle_turbulence = particle_emission_rate * smooth_result * -1.0 +
                                     particle_size * interpolation_result * -1.0 +
                                     particle_lifetime_factor * particle_intensity +
                                     particle_intensity * particle_attraction;
                particle_opacity = particle_lifetime_factor * particle_attraction * -1.0 +
                                   particle_size * smooth_result * -1.0 +
                                   particle_intensity * particle_intensity +
                                   particle_attraction * particle_emission_rate;
                particle_intensity = particle_lifetime_factor * smooth_result * 1.0 +
                                    particle_size * particle_intensity * 1.0 +
                                     particle_lifetime_factor * interpolation_result +
                                    particle_emission_rate * particle_attraction;
                particle_size = particle_intensity;
                particle_emission_rate = particle_damping;
                particle_lifetime_factor = particle_turbulence;
                particle_intensity = particle_opacity;
// 应用粒子变换
                if ((UI_ANIMATION_BLEND_THRESHOLD <= particle_repulsion) &&
                    (particle_size = particle_attraction, particle_emission_rate = particle_damping,
                     particle_lifetime_factor = particle_turbulence, particle_intensity = particle_opacity,
                     particle_repulsion <= 0.999))
                {
                    particle_size = particle_turbulence * particle_turbulence;
                    particle_emission_rate = particle_opacity * particle_opacity;
                    matrix_stack[6] = -1.0;
                    matrix_stack[7] = -1.0;
                    matrix_stack[8] = -1.0;
                    matrix_stack[9] = -1.0;
                    stack_matrix_7._0_4_ = particle_size + particle_attraction * particle_intensity;
                    stack_matrix_7._4_4_ = particle_emission_rate + particle_damping * particle_damping;
                    stack_matrix_7._8_4_ = particle_size + particle_size;
                    stack_matrix_7._12_4_ = particle_emission_rate + particle_emission_rate;
                    stack_matrix_8._4_12_ = stack_matrix_7._4_12_;
                    stack_matrix_8._0_4_ = stack_matrix_7._0_4_ + stack_matrix_7._4_4_;
                    matrix_stack[2] = 1.0;
                    matrix_stack[3] = 1.0;
                    matrix_stack[4] = 1.0;
                    matrix_stack[5] = 1.0;
                    blend_mask_result = movmskps((int)particle_weight_ptr, stack_matrix_8);
                    effect_id = (uint64_t)(blend_mask_result & 1);
                    particle_weight_ptr = (float *)(effect_id * 2);
                    particle_size = matrix_stack[effect_id * 4 + 2];
                    particle_emission_rate = matrix_stack[effect_id * 4 + 3];
                    particle_lifetime_factor = matrix_stack[effect_id * 4 + 4];
                    particle_intensity = matrix_stack[effect_id * 4 + 5];
// 应用粒子混合和归一化
                    if (UI_CLAMP_THRESHOLD < ABS(stack_matrix_8._0_4_)) {
                        particle_attraction = 1.0 - particle_repulsion;
                        particle_size = particle_intensity * particle_attraction +
                                        particle_repulsion * particle_size * particle_attraction;
                        particle_emission_rate = particle_damping * particle_attraction +
                                                particle_repulsion * particle_emission_rate * particle_damping;
                        interpolation_result = particle_turbulence * particle_attraction +
                                               particle_repulsion * particle_lifetime_factor * particle_turbulence;
                        smooth_result = particle_opacity * particle_attraction +
                                       particle_repulsion * particle_intensity * particle_opacity;
                        particle_repulsion = smooth_result * smooth_result + particle_size * particle_size;
                        particle_attraction = interpolation_result * interpolation_result +
                                             particle_emission_rate * particle_emission_rate;
                        particle_lifetime_factor = particle_repulsion + particle_emission_rate * particle_emission_rate +
                                                 interpolation_result * interpolation_result;
                        particle_opacity = particle_attraction + particle_size * particle_size +
                                          smooth_result * smooth_result;
                        stack_matrix_9._4_4_ = particle_repulsion + particle_attraction + UI_NORMALIZATION_EPSILON;
                        stack_matrix_9._0_4_ = particle_attraction + particle_repulsion + UI_NORMALIZATION_EPSILON;
                        stack_matrix_9._8_4_ = particle_lifetime_factor + UI_NORMALIZATION_EPSILON;
                        stack_matrix_9._12_4_ = particle_opacity + UI_NORMALIZATION_EPSILON;
                        transform_matrix_4 = rsqrtps(stack_matrix_8, stack_matrix_9);
                        particle_damping = transform_matrix_4._0_4_;
                        particle_turbulence = transform_matrix_4._4_4_;
                        particle_opacity = transform_matrix_4._8_4_;
                        particle_intensity = transform_matrix_4._12_4_;
                        particle_size = particle_size *
                                       (UI_NORMALIZATION_FACTOR - particle_damping * particle_damping *
                                        (particle_attraction + particle_repulsion)) * particle_damping * 0.5;
                        particle_emission_rate = particle_emission_rate *
                                               (UI_NORMALIZATION_FACTOR - particle_turbulence * particle_turbulence *
                                                (particle_repulsion + particle_attraction)) * particle_turbulence * 0.5;
                        particle_lifetime_factor = interpolation_result *
                                                   (UI_NORMALIZATION_FACTOR - particle_opacity * particle_opacity *
                                                    particle_lifetime_factor) * particle_opacity * 0.5;
                        particle_intensity = smooth_result *
                                           (UI_NORMALIZATION_FACTOR - particle_intensity * particle_intensity *
                                            particle_opacity) * particle_intensity * 0.5;
                    }
                    else {
                        particle_attraction = (float)acosf();
                        interpolation_result = (float)sinf();
                        smooth_result = (float)sinf(particle_attraction - particle_attraction * particle_repulsion);
                        smooth_result = smooth_result * (1.0 / interpolation_result);
                        particle_weight_ptr = (float *)sinf(particle_attraction * particle_repulsion);
                        particle_repulsion = extraout_XMM0_Da_00 * (1.0 / interpolation_result);
                        particle_size = smooth_result * particle_intensity +
                                        particle_repulsion * particle_size * particle_attraction;
                        particle_emission_rate = smooth_result * particle_damping +
                                                particle_repulsion * particle_emission_rate * particle_damping;
                        particle_lifetime_factor = smooth_result * particle_turbulence +
                                                   particle_repulsion * particle_lifetime_factor * particle_turbulence;
                        particle_intensity = smooth_result * particle_opacity +
                                           particle_repulsion * particle_intensity * particle_opacity;
                    }
                }
// 应用粒子效果
                particle_lifetime = effect_id + 0x82;
                if (UI_ANIMATION_BLEND_THRESHOLD <= particle_intensity) {
                    if (particle_intensity <= 0.999) {
                        particle_position_ptr = (float *)(particle_frame + particle_lifetime * 0x10);
                        particle_repulsion = *particle_position_ptr;
                        particle_attraction = particle_position_ptr[1];
                        particle_damping = particle_position_ptr[2];
                        particle_turbulence = particle_position_ptr[3];
                        particle_opacity = particle_lifetime_factor * particle_damping;
                        particle_size = particle_intensity * particle_turbulence;
                        matrix_stack[6] = -1.0;
                        matrix_stack[7] = -1.0;
                        matrix_stack[8] = -1.0;
                        matrix_stack[9] = -1.0;
                        stack_matrix_1._0_4_ = particle_opacity + particle_size * particle_repulsion;
                        stack_matrix_1._4_4_ = particle_size + particle_emission_rate * particle_attraction;
                        stack_matrix_1._8_4_ = particle_opacity + particle_opacity;
                        stack_matrix_1._12_4_ = particle_size + particle_size;
                        stack_matrix_2._4_12_ = stack_matrix_1._4_12_;
                        stack_matrix_2._0_4_ = stack_matrix_1._0_4_ + stack_matrix_1._4_4_;
                        matrix_stack[2] = 1.0;
                        matrix_stack[3] = 1.0;
                        matrix_stack[4] = 1.0;
                        matrix_stack[5] = 1.0;
                        blend_mask_result = movmskps((int)particle_weight_ptr, stack_matrix_2);
                        effect_id = (uint64_t)(blend_mask_result & 1);
                        particle_opacity = matrix_stack[effect_id * 4 + 2];
                        particle_size = matrix_stack[effect_id * 4 + 3];
                        particle_attraction = matrix_stack[effect_id * 4 + 4];
                        interpolation_result = matrix_stack[effect_id * 4 + 5];
// 应用粒子混合和归一化
                        if (UI_CLAMP_THRESHOLD < ABS(stack_matrix_2._0_4_)) {
                            smooth_result = 1.0 - particle_intensity;
                            particle_size = smooth_result * particle_repulsion +
                                           particle_intensity * particle_opacity * particle_size;
                            particle_emission_rate = smooth_result * particle_attraction +
                                                    particle_intensity * particle_size * particle_emission_rate;
                            particle_lifetime_factor = smooth_result * particle_damping +
                                                   particle_intensity * particle_attraction * particle_lifetime_factor;
                            particle_intensity = smooth_result * particle_turbulence +
                                               particle_intensity * interpolation_result * particle_intensity;
                            particle_intensity = particle_intensity * particle_intensity + particle_size * particle_size;
                            particle_repulsion = particle_lifetime_factor * particle_lifetime_factor +
                                                 particle_emission_rate * particle_emission_rate;
                            particle_size = particle_intensity + particle_emission_rate * particle_emission_rate +
                                           particle_lifetime_factor * particle_lifetime_factor;
                            particle_attraction = particle_repulsion + particle_size * particle_size +
                                                particle_intensity * particle_intensity;
                            stack_matrix_3._4_4_ = particle_intensity + particle_repulsion + UI_NORMALIZATION_EPSILON;
                            stack_matrix_3._0_4_ = particle_repulsion + particle_intensity + UI_NORMALIZATION_EPSILON;
                            stack_matrix_3._8_4_ = particle_size + UI_NORMALIZATION_EPSILON;
                            stack_matrix_3._12_4_ = particle_attraction + UI_NORMALIZATION_EPSILON;
                            transform_matrix_4 = rsqrtps(stack_matrix_2, stack_matrix_3);
                            particle_attraction = transform_matrix_4._0_4_;
                            particle_damping = transform_matrix_4._4_4_;
                            particle_turbulence = transform_matrix_4._8_4_;
                            particle_opacity = transform_matrix_4._12_4_;
                            particle_size = particle_size *
                                           (UI_NORMALIZATION_FACTOR - particle_attraction * particle_attraction *
                                            (particle_repulsion + particle_intensity)) * particle_attraction * 0.5;
                            particle_emission_rate = particle_emission_rate *
                                                   (UI_NORMALIZATION_FACTOR - particle_damping * particle_damping *
                                                    (particle_intensity + particle_repulsion)) * particle_damping * 0.5;
                            particle_lifetime_factor = particle_lifetime_factor *
                                                       (UI_NORMALIZATION_FACTOR - particle_turbulence * particle_turbulence *
                                                        particle_size) * particle_turbulence * 0.5;
                            particle_intensity = particle_intensity *
                                               (UI_NORMALIZATION_FACTOR - particle_opacity * particle_opacity *
                                                particle_attraction) * particle_opacity * 0.5;
                        }
                        else {
                            smooth_result = (float)acosf();
                            particle_damping = (float)sinf();
                            particle_turbulence = (float)sinf(smooth_result - smooth_result * particle_intensity);
                            particle_turbulence = particle_turbulence * (1.0 / particle_damping);
                            particle_intensity = (float)sinf(smooth_result * particle_intensity);
                            particle_intensity = particle_intensity * (1.0 / particle_damping);
                            particle_size = particle_turbulence * particle_repulsion +
                                          particle_intensity * particle_opacity * particle_size;
                            particle_emission_rate = particle_turbulence * particle_attraction +
                                                    particle_intensity * particle_size * particle_emission_rate;
                            particle_lifetime_factor = particle_turbulence * particle_damping +
                                                   particle_intensity * particle_attraction * particle_lifetime_factor;
                            particle_intensity = particle_turbulence * particle_turbulence +
                                               particle_intensity * interpolation_result * particle_intensity;
                        }
                    }
                }
                else {
                    particle_weight_ptr = (float *)(particle_frame + particle_lifetime * 0x10);
                    particle_size = *particle_weight_ptr;
                    particle_emission_rate = particle_weight_ptr[1];
                    particle_lifetime_factor = particle_weight_ptr[2];
                    particle_intensity = particle_weight_ptr[3];
                }
// 更新粒子状态
                particle_weight_ptr = (float *)(particle_frame + particle_lifetime * 0x10);
                *particle_weight_ptr = particle_size;
                particle_weight_ptr[1] = particle_emission_rate;
                particle_weight_ptr[2] = particle_lifetime_factor;
                particle_weight_ptr[3] = particle_intensity;
                *(uint64_t *)(particle_frame + 0x800) =
                     *(uint64_t *)(particle_frame + 0x800) |
                     *(uint64_t *)(*(int64_t *)(stack_context_2 + 0x140) + 0xe8 + particle_index);
                *(uint64_t *)(particle_frame + 0x808) =
                     *(uint64_t *)(particle_frame + 0x808) | 1L << (effect_id & 0x3f);
                ui_context = stack_animation_1;
                particle_index = stack_transform;
            }
            stack_particle_ptr = stack_particle_ptr + 1;
            particle_state = particle_state + 0x18;
            particle_effect = particle_effect + -0x18;
            particle_weight_ptr = particle_weight_ptr + 1;
            stack_resource_1 = stack_resource_1 + -1;
        } while (stack_resource_1 != 0);
        stack_resource_1 = 0;
        control_data = stack_control_ptr;
    }
// 第三阶段：粒子效果渲染和清理
    particle_index = stack_resource_1;
    particle_effect = -UI_PARTICLE_OFFSET_Z;
    particle_state = 2;
    particle_weight_ptr = (float *)(ui_context + 0x13a0);
    particle_repulsion = 1.0 - stack_weight_1;
    stack_control_ptr = (char *)((int64_t)control_data - (int64_t)stack_effect_ptr);
    stack_effect_ptr = stack_effect_ptr;
    particle_intensity = stack_weight_1;
    stack_weight_2 = particle_repulsion;
// 渲染粒子效果
    do {
        particle_lifetime = (int64_t)*(int *)(ui_context + 0x60);
        particle_attraction = 0.0;
        particle_weight_ptr_temp = particle_weight_ptr;
        if (0 < particle_lifetime) {
            do {
                if (*(char *)((int64_t)particle_weight_ptr_temp + 6) == '\0') {
                    particle_damping = 0.0;
                }
                else {
                    particle_damping = *particle_weight_ptr_temp * UI_INTERPOLATION_FACTOR;
                }
                particle_turbulence = particle_weight_ptr_temp[-4];
                particle_opacity = particle_weight_ptr_temp[-1];
// 计算粒子的运动状态
                if (particle_damping + particle_turbulence < particle_opacity) {
                    particle_damping = *particle_weight_ptr_temp;
                    if (*(char *)((int64_t)particle_weight_ptr_temp + 6) == '\0') {
                        particle_size = 0.0;
                    }
                    else {
                        particle_size = particle_damping * UI_INTERPOLATION_FACTOR;
                    }
                    if (particle_size + particle_turbulence < particle_opacity) {
                        particle_opacity = particle_opacity - particle_turbulence;
                    }
                    else {
                        particle_opacity = particle_weight_ptr_temp[-2];
                    }
                    if (0.0 < particle_damping) {
                        particle_opacity = particle_opacity / particle_damping;
                        particle_turbulence = particle_turbulence / particle_damping;
                    }
                    particle_damping = particle_opacity - (UI_WEIGHT_ADJUSTMENT_FACTOR - particle_turbulence);
                    if (particle_damping <= UI_WEIGHT_CALCULATION_FACTOR - particle_opacity) {
                        particle_damping = UI_WEIGHT_CALCULATION_FACTOR - particle_opacity;
                    }
                    if (particle_damping <= 0.0) {
                        particle_damping = 0.0;
                    }
                    particle_damping = particle_damping *
                                     *(float *)(particle_effect + (int64_t)particle_weight_ptr_temp) *
                                     UI_WEIGHT_SCALE_FACTOR;
                }
                else {
                    particle_damping = *(float *)(particle_effect + (int64_t)particle_weight_ptr_temp);
                }
                particle_attraction = particle_damping + particle_attraction;
                particle_lifetime = particle_lifetime + -1;
                particle_weight_ptr_temp = particle_weight_ptr_temp + 0x4d6;
            } while (particle_lifetime != 0);
        }
        particle_attraction = particle_repulsion * particle_attraction + particle_intensity;
        if (0.0 < particle_attraction) {
            control_flag = stack_effect_ptr[(int64_t)stack_control_ptr];
            particle_state = *(int64_t *)(stack_particle_1 + 0x10);
            matrix_stack[6] = 0.0;
            matrix_stack[7] = 0.0;
            matrix_stack[8] = 1.0;
            matrix_stack[9] = 3.4028235e+38;
            stack_flag = 0;
            matrix_stack[0xe] = 0.0;
            transform_result = *(uint64_t *)(particle_state + 0x20);
            matrix_stack[10] = 0.0;
            matrix_stack[0xb] = 0.0;
            matrix_stack[0xc] = 0.0;
            matrix_stack[0xd] = 0.0;
            ui_system_get_particle_data(particle_index, control_flag, stack_context_2);
            blend_mode = 1;
            render_flags = 0x51b189;
            particle_weight_ptr_temp = (float *)(particle_index + ((int64_t)control_flag + 0x40) * 0x10);
            particle_intensity = *particle_weight_ptr_temp;
            particle_damping = particle_weight_ptr_temp[1];
            particle_turbulence = particle_weight_ptr_temp[2];
            stack_scale_1 = *(float *)(particle_state + 0x88) * particle_damping +
                           *(float *)(particle_state + 0x78) * particle_intensity +
                           *(float *)(particle_state + 0x98) * particle_turbulence +
                           *(float *)(particle_state + 0xa8);
            stack_scale_2 = *(float *)(particle_state + 0x8c) * particle_damping +
                           *(float *)(particle_state + 0x7c) * particle_intensity +
                           *(float *)(particle_state + 0x9c) * particle_turbulence +
                           *(float *)(particle_state + 0xac);
            stack_transform = CONCAT44(*(float *)(particle_state + 0x84) * particle_damping +
                                     *(float *)(particle_state + 0x74) * particle_intensity +
                                     *(float *)(particle_state + 0x94) * particle_turbulence +
                                     *(float *)(particle_state + 0xa4),
                                     *(float *)(particle_state + 0x80) * particle_damping +
                                     *(float *)(particle_state + 0x70) * particle_intensity +
                                     *(float *)(particle_state + 0x90) * particle_turbulence +
                                     *(float *)(particle_state + 0xa0));
            ui_system_apply_transform(transform_result, &stack_transform);
            particle_turbulence = -matrix_stack[7];
            particle_damping = matrix_stack[6] * matrix_stack[6] + particle_turbulence * particle_turbulence;
            particle_state = stack_animation_2;
            ui_context = stack_animation_1;
            particle_intensity = stack_weight_1;
// 应用粒子效果变换
            if (9.999999e-09 < particle_damping) {
                transform_matrix_4 = rsqrss(ZEXT416((uint)particle_damping),
                                          ZEXT416((uint)particle_damping));
                particle_intensity = transform_matrix_4._0_4_;
                particle_intensity = particle_intensity * 0.5 *
                                   (UI_NORMALIZATION_FACTOR - particle_damping * particle_intensity * particle_intensity);
                particle_damping = particle_intensity * particle_damping;
                particle_turbulence = particle_intensity * particle_turbulence;
                particle_intensity = particle_intensity * matrix_stack[6];
                if (0.0 <= particle_damping) {
                    if (1.0 <= particle_damping) {
                        particle_damping = 1.0;
                    }
                }
                else {
                    particle_damping = 0.0;
                }
                particle_damping = (float)asinf(particle_damping);
                particle_state = *(int64_t *)(stack_particle_1 + 0x10);
                particle_repulsion = *(float *)(particle_state + 0x90);
                particle_opacity = *(float *)(particle_state + 0x74) * particle_intensity +
                                 *(float *)(particle_state + 0x70) * particle_turbulence +
                                 *(float *)(particle_state + 0x78) * 0.0;
                particle_size = *(float *)(particle_state + 0x84) * particle_intensity +
                               *(float *)(particle_state + 0x80) * particle_turbulence +
                               *(float *)(particle_state + 0x88) * 0.0;
                particle_intensity = *(float *)(particle_state + 0x94) * particle_intensity +
                                   particle_repulsion * particle_turbulence +
                                   *(float *)(particle_state + 0x98) * 0.0;
                particle_intensity = particle_opacity * particle_opacity + particle_size * particle_size +
                                   particle_intensity * particle_intensity;
                if ((particle_intensity <= UI_SCALE_NORMALIZATION_THRESHOLD) ||
                    (UI_SCALE_UPPER_THRESHOLD <= particle_intensity)) {
                    transform_matrix_4 = rsqrss(ZEXT416((uint)particle_intensity),
                                              ZEXT416((uint)particle_intensity));
                    particle_repulsion = transform_matrix_4._0_4_;
                    particle_repulsion = particle_repulsion * 0.5 *
                                       (UI_NORMALIZATION_FACTOR - particle_intensity * particle_repulsion * particle_repulsion);
                }
                if (-UI_ROTATION_LIMIT <= particle_damping) {
                    if (UI_ROTATION_LIMIT <= particle_damping) {
                        particle_damping = UI_ROTATION_LIMIT;
                    }
                }
                else {
                    particle_damping = -UI_ROTATION_LIMIT;
                }
                ui_system_get_particle_data(particle_index, *stack_effect_ptr, stack_context_2, particle_repulsion);
// 执行粒子效果
                ui_system_execute_particle_effect(particle_damping * particle_attraction * stack_scale_3 * 0.5);
            }
        }
        particle_weight_ptr = particle_weight_ptr + 6;
        particle_effect = particle_effect + -0x18;
        stack_effect_ptr = stack_effect_ptr + 1;
        particle_state = particle_state + -1;
        stack_animation_2 = particle_state;
    } while (particle_state != 0);
// 清理粒子系统资源
    ui_system_cleanup_particle_resources(stack_id ^ (uint64_t)stack_buffer);
}