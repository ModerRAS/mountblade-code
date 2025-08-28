#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part012.c - UI系统高级动画和变换处理模块
// 包含1个核心函数，涵盖UI元素复杂动画变换、矩阵运算、角度归一化、动画参数优化、高级渲染控制等高级UI功能

/**
 * 常量定义
 */
#define PI 3.1415927f
#define TWO_PI 6.2831855f
#define HALF_PI 1.5707964f
#define NORMALIZATION_FACTOR 0.63661975f
#define ANGLE_THRESHOLD 0.5f
#define MIN_DIFFERENCE 0.001f
#define MIN_VELOCITY 0.05f
#define MAX_VELOCITY 0.5f
#define DAMPING_FACTOR 0.75f
#define SPRING_CONSTANT 12.0f
#define ANIMATION_SCALE 8.0f
#define NORMALIZATION_THRESHOLD 0.999f

/**
 * UI系统高级动画和变换处理函数
 * 处理UI元素的复杂动画变换、角度归一化、动画参数优化和高级渲染控制
 * 
 * @param ui_context UI系统上下文指针
 * @param animation_param1 动画参数1
 * @param animation_param2 动画参数2
 * @param transform_matrix 变换矩阵
 * @param control_params 控制参数结构体
 * @param velocity_params 速度参数结构体
 * @param position_params 位置参数结构体
 * @param rotation_params 旋转参数结构体
 * @param scale_params 缩放参数结构体
 * @param animation_state 动画状态结构体
 * @param render_params 渲染参数结构体
 * @param timing_params 时序参数结构体
 */
void ui_system_advanced_animation_transform(void* ui_context, uint animation_param1, uint animation_param2, 
                                          void* transform_matrix, void* control_params, void* velocity_params,
                                          void* position_params, void* rotation_params, void* scale_params,
                                          void* animation_state, void* render_params, void* timing_params)
{
    float* animation_data;
    char state_flag;
    bool animation_active;
    int64_t temp_offset;
    float* transform_ptr;
    int index_counter;
    int64_t data_offset;
    int64_t structure_offset;
    void* context_ptr;
    int64_t timing_data;
    char status_flag;
    float base_velocity;
    float current_angle;
    float target_angle;
    float angle_diff;
    float rotation_speed;
    float position_x;
    float position_y;
    float scale_x;
    float scale_y;
    float animation_buffer[6200];
    void* stack_context;
    
    // 初始化检查和错误处理
    if (!state_flag) {
        // 错误处理：参数验证失败
        stack_context = (void*)0x1806598e8;
        // 调用错误处理函数（不返回）
        ui_system_error_handler(animation_param1 ^ animation_param2);
    }
    
    // 初始化动画参数
    scale_y = animation_buffer[15];
    target_angle = animation_buffer[14];
    rotation_speed = transform_ptr[6205];
    
    // 速度阈值检查
    if (((transform_ptr[16] == base_velocity) || (transform_ptr[16] == 0.5f)) || (rotation_speed <= base_velocity)) {
        animation_active = false;
    } else {
        animation_active = true;
    }
    
    stack_context = (void*)0x1806599e0;
    
    // 计算目标角度
    current_angle = (float)atan2f(*(uint*)(*(int64_t*)(timing_data + 16) + 128) ^ animation_param2,
                                  *(uint*)(*(int64_t*)(timing_data + 16) + 132));
    current_angle = current_angle + transform_ptr[6];
    transform_ptr[11] = current_angle;
    
    // 角度归一化处理
    if (current_angle <= PI) {
        if (current_angle < -PI) {
            current_angle = current_angle + TWO_PI;
            goto angle_normalized;
        }
    } else {
        current_angle = current_angle - TWO_PI;
    angle_normalized:
        transform_ptr[11] = current_angle;
    }
    
    // 动画帧处理
    current_angle = transform_ptr[24];
    data_offset = (int64_t)(int)current_angle;
    status_flag = ui_system_get_animation_state(base_velocity, 0);
    
    if (0 < (int)current_angle) {
        position_x = base_velocity;
        if (*(char*)(data_offset * 4952 + 78 + (int64_t)transform_ptr) != status_flag) {
            position_x = transform_ptr[data_offset * 1238 + 18] * 0.05f;
        }
        
        if ((position_x + transform_ptr[data_offset * 1238 + 14] < transform_ptr[data_offset * 1238 + 17]) ||
            (*(char*)(transform_ptr + data_offset * 1238 + 19) != status_flag)) {
            transform_ptr[12] = transform_ptr[11];
            current_angle = transform_ptr[24];
        }
        
        data_offset = (int64_t)(int)current_angle;
        position_x = base_velocity;
        if (*(char*)(data_offset * 4952 + 102 + (int64_t)transform_ptr) != status_flag) {
            position_x = transform_ptr[data_offset * 1238 + 24] * 0.05f;
        }
        
        if ((position_x + transform_ptr[data_offset * 1238 + 20] < transform_ptr[data_offset * 1238 + 23]) ||
            (*(char*)(transform_ptr + data_offset * 1238 + 25) != status_flag)) {
            transform_ptr[13] = transform_ptr[11];
            current_angle = transform_ptr[24];
        }
    }
    
    // 动画状态检查和控制
    if ((((((int)current_angle < 1) || (base_velocity != transform_ptr[2])) || (base_velocity != transform_ptr[3])) ||
        (base_velocity == transform_ptr[6])) ||
        ((ABS(transform_ptr[11] - transform_ptr[12]) < ANGLE_THRESHOLD && 
          (ABS(transform_ptr[11] - transform_ptr[13]) < ANGLE_THRESHOLD)))) {
        
        if (((animation_active) && ((base_velocity == transform_ptr[2] && (base_velocity == transform_ptr[3])))) ||
            ((transform_ptr[20] = base_velocity, velocity_params->velocity = base_velocity,
              base_velocity <= animation_buffer[14] &&
              (velocity_params->velocity = position_x, animation_buffer[14] <= base_velocity)))) {
            goto animation_control;
        }
    } else {
        animation_active = true;
        transform_ptr[20] = 1.0f;
    animation_control:
        if (((status_flag == '\0') ||
            (velocity_params->velocity = position_x, position_x < transform_ptr[6212] || position_x == transform_ptr[6212])) &&
            (velocity_params->velocity = position_x, *(char*)(transform_ptr + 23) != status_flag)) {
            velocity_params->velocity = base_velocity;
        }
    }
    
    // 旋转速度控制
    if ((rotation_speed <= base_velocity) && (base_velocity < transform_ptr[20])) {
        rotation_speed = transform_ptr[11] - transform_ptr[12];
        current_angle = transform_ptr[11] - transform_ptr[13];
        if (ABS(rotation_speed) <= ABS(current_angle)) {
            rotation_speed = current_angle;
        }
        
        // 角度标准化
        if (rotation_speed <= PI) {
            if (rotation_speed < -PI) {
                rotation_speed = rotation_speed + TWO_PI;
            }
        } else {
            rotation_speed = rotation_speed - TWO_PI;
        }
        
        current_angle = base_velocity;
        if (base_velocity < rotation_speed) {
            current_angle = 0.5f;
        }
        transform_ptr[16] = current_angle;
    }
    
    // 高级动画处理
    if ((animation_active) && (0 < (int)transform_ptr[24])) {
        transform_ptr = transform_ptr + 27;
        timing_data = (uint64_t)(uint)transform_ptr[24];
        rotation_speed = base_velocity;
        
        do {
            animation_data = transform_ptr + 1173;
            current_angle = *transform_ptr;
            transform_ptr = transform_ptr + 1238;
            rotation_speed = rotation_speed + *(float*)(*(int64_t*)(*(int64_t*)animation_data + 72) + 392) * current_angle;
            timing_data = timing_data - 1;
        } while (timing_data != 0);
        
        current_angle = transform_ptr[16];
        rotation_speed = (velocity_params->velocity_y * transform_ptr[7]) / rotation_speed + current_angle;
        transform_ptr[16] = rotation_speed;
        
        if (rotation_speed <= position_x) {
            if ((((current_angle <= 0.5f) && (0.5f < rotation_speed)) && 
                  (ABS(transform_ptr[11] - transform_ptr[12]) < ANGLE_THRESHOLD)) &&
                 (ABS(transform_ptr[11] - transform_ptr[13]) < ANGLE_THRESHOLD)) {
                transform_ptr[16] = 0.5f;
            }
        } else if ((0.5f <= ABS(transform_ptr[11] - transform_ptr[12])) ||
                  (0.5f <= ABS(transform_ptr[11] - transform_ptr[13]))) {
            transform_ptr[16] = rotation_speed - position_x;
        } else {
            transform_ptr[16] = base_velocity;
        }
    }
    
    // 状态标志检查
    status_flag = *(char*)(structure_offset + 160);
    state_flag = *(char*)(structure_offset + 168);
    
    if ((((status_flag != '\0') || (state_flag != '\0')) &&
        ((base_velocity != transform_ptr[2] || (base_velocity != transform_ptr[3])))) ||
        (((base_velocity != transform_ptr[4] || (base_velocity != transform_ptr[5])) ||
          (rotation_speed = position_x, base_velocity < transform_ptr[20])))) {
        rotation_speed = base_velocity;
    }
    
    // 位置和速度计算
    scale_x = velocity_params->velocity_y + velocity_params->velocity_y;
    position_x = *transform_ptr - transform_ptr[1];
    current_angle = position_x;
    
    if ((scale_x < ABS(position_x)) && (current_angle = scale_x, position_x < base_velocity)) {
        current_angle = -scale_x;
    }
    
    transform_ptr[1] = transform_ptr[1] + current_angle;
    stack_context = (void*)0x180659d72;
    current_angle = (float)ui_system_calculate_spring_damping(ABS(position_x), current_angle, timing_params);
    
    if (current_angle <= DAMPING_FACTOR) {
        current_angle = DAMPING_FACTOR;
    }
    
    position_x = current_angle - transform_ptr[22];
    if (MIN_DIFFERENCE <= ABS(position_x)) {
        current_angle = position_x * velocity_params->velocity_y + transform_ptr[22];
    }
    transform_ptr[22] = current_angle;
    
    // 动画频率控制
    if ((scale_params->scale_y <= base_velocity) || (transform_ptr[6212] <= base_velocity)) {
        transform_ptr[15] = 0.0f;
    } else {
        current_angle = base_velocity;
        if (0 < (int)transform_ptr[24]) {
            transform_ptr = transform_ptr + 27;
            timing_data = (uint64_t)(uint)transform_ptr[24];
            
            do {
                animation_data = transform_ptr + 1173;
                position_x = *transform_ptr;
                transform_ptr = transform_ptr + 1238;
                current_angle = current_angle + *(float*)(**(int64_t**)animation_data + 392) * position_x;
                timing_data = timing_data - 1;
            } while (timing_data != 0);
        }
        
        stack_context = (void*)0x180659e10;
        current_angle = (float)fmodf(velocity_params->velocity_y / current_angle + transform_ptr[15]);
        transform_ptr[15] = current_angle;
    }
    
    // 高级动画渲染
    position_x = transform_ptr[24];
    index_counter = 0;
    scale_x = base_velocity;
    
    if (0 < (int)position_x) {
        transform_ptr = transform_ptr + 27;
        do {
            stack_context = (void*)0x180659e3d;
            current_angle = (float)ui_system_calculate_animation_weight(current_angle, index_counter);
            current_angle = current_angle * *transform_ptr;
            index_counter = index_counter + 1;
            transform_ptr = transform_ptr + 1238;
            scale_x = scale_x + current_angle;
        } while (index_counter < (int)position_x);
        status_flag = *(char*)(structure_offset + 160);
    }
    
    // 位置更新和边界检查
    if (rotation_speed < position_x) {
        if (transform_ptr[6212] <= position_x && position_x != transform_ptr[6212]) {
            current_angle = scale_x * velocity_params->velocity_y + transform_ptr[14];
            transform_ptr[14] = current_angle;
            if (position_x < current_angle) {
                transform_ptr[14] = current_angle - position_x;
            }
        } else if ((int)position_x < 1) {
            transform_ptr[14] = base_velocity;
        } else {
            current_angle = position_x;
            if (*(char*)(transform_ptr + 23) != '\0') {
                current_angle = -1.0f;
            }
            
            data_offset = *(int64_t*)(transform_ptr + (int64_t)(int)position_x * 1238 + -38);
            stack_context = (void*)0x180659ea7;
            temp_offset = ui_system_get_animation_data(*(void*)(data_offset + 8));
            structure_offset = 20;
            
            if (base_velocity <= (rotation_params->rotation_x - ABS((float)rotation_params)) * current_angle) {
                structure_offset = 24;
            }
            
            current_angle = *(float*)(structure_offset + temp_offset);
            stack_context = (void*)0x180659edd;
            ui_system_get_animation_data(*(void*)(data_offset + 8));
            transform_ptr[14] = current_angle;
        }
    }
    
    // 矩阵归一化处理
    animation_buffer[15] = (float)((uint64_t)context_ptr >> 32);
    animation_buffer[14] = (float)context_ptr;
    position_x = animation_buffer[15] * animation_buffer[15] + animation_buffer[14] * animation_buffer[14];
    position_x = (float)(position_x <= 1.1754944e-38f) * 1.1754944e-38f + position_x;
    
    // 快速平方根倒数计算
    animation_data = rsqrtss(ZEXT416((uint)position_x), ZEXT416((uint)position_x));
    scale_y = animation_data->_0_4_;
    current_angle = position_x;
    
    if (animation_buffer[15] * scale_y * 0.5f * (3.0f - position_x * scale_y * scale_y) < -0.2f) {
        current_angle = base_velocity;
    }
    
    transform_ptr[19] = current_angle;
    animation_buffer[14] = (float)context_ptr;
    animation_buffer[15] = (float)((uint64_t)context_ptr >> 32);
    
    // 向量合成处理
    if ((target_angle != base_velocity) || (scale_y != base_velocity)) {
        if (base_velocity <= animation_buffer[14] * target_angle) {
            if (ABS(animation_buffer[14]) < ABS(target_angle)) {
                animation_buffer[14] = target_angle;
            }
        } else {
            animation_buffer[14] = animation_buffer[14] + target_angle;
        }
        
        if (base_velocity <= scale_y * animation_buffer[15]) {
            if (ABS(animation_buffer[15]) < ABS(scale_y)) {
                animation_buffer[15] = scale_y;
            }
        } else {
            animation_buffer[15] = animation_buffer[15] + scale_y;
        }
    }
    
    stack_context = (void*)0x18065a04d;
    position_x = (float)atan2f(-animation_buffer[14], animation_buffer[15]);
    position_x = ABS(position_x);
    
    if (HALF_PI < position_x) {
        position_x = PI - position_x;
    }
    
    position_x = position_x * NORMALIZATION_FACTOR;
    scale_x = (position_x - *(float*)(structure_offset + 192)) * 0.3f;
    scale_y = base_velocity;
    
    if ((scale_x + 0.05f <= position_x) && (scale_y = position_x, 0.95f - scale_x < position_x)) {
        scale_y = position_x;
    }
    
    scale_x = scale_y - transform_ptr[21];
    rotation_speed = ABS(scale_x);
    position_x = scale_y;
    
    if (MIN_DIFFERENCE <= rotation_speed) {
        target_angle = velocity_params->velocity_y;
        if (scale_x < base_velocity) {
            target_angle = -velocity_params->velocity_y;
        }
        
        scale_x = MIN_VELOCITY;
        if ((MIN_VELOCITY <= rotation_speed) && (scale_x = rotation_speed, MAX_VELOCITY <= rotation_speed)) {
            scale_x = MAX_VELOCITY;
        }
        
        scale_x = target_angle * scale_x * SPRING_CONSTANT;
        if (ABS(scale_x) <= rotation_speed) {
            position_x = transform_ptr[21] + scale_x;
        }
    }
    
    transform_ptr[21] = position_x;
    
    // 高级状态控制和条件判断
    if ((((rotation_params->rotation_x <= -0.1f) || (state_flag == '\0')) || (status_flag != '\0')) || (scale_y <= -0.1f)) {
    state_control:
        if ((transform_ptr[17] <= base_velocity) || (position_x <= transform_ptr[17])) {
            transform_ptr[17] = 0.0f;
            transform_ptr[18] = -1.0f;
            goto final_processing;
        }
    } else {
        scale_y = rotation_params->rotation_x * rotation_params->rotation_x + rotation_params->rotation_x * rotation_params->rotation_x;
        scale_y = scale_y + scale_y;
        if (scale_y <= position_x) {
            scale_y = position_x;
        }
        if (-scale_y <= (float)rotation_params * target_angle) goto state_control;
    }
    
    scale_y = transform_ptr[17];
    if (scale_y == base_velocity) {
        *(bool*)((int64_t)transform_ptr + 93) = target_angle < base_velocity;
    }
    
    scale_y = (*(float*)(*(int64_t*)((*(int64_t*)(transform_ptr + (int64_t)(int)transform_ptr[24] * 1238 + -38) + 8) + 392) /
               *(float*)(*(int64_t*)((*(int64_t*)(transform_ptr + (int64_t)(int)transform_ptr[24] * 1238 + -38) + 56) + 392))) * 
               scale_x * velocity_params->velocity_y + scale_y;
    
    if (position_x <= scale_y) {
        scale_y = position_x;
    }
    
    transform_ptr[17] = scale_y;
    
    if (transform_ptr[18] <= base_velocity && base_velocity != transform_ptr[18]) {
        position_x = position_x;
        if (*(char*)((int64_t)transform_ptr + 93) != '\0') {
            position_x = -1.0f;
        }
        
        if (base_velocity <= position_x * target_angle) {
            target_angle = scale_y;
            if (*(char*)((int64_t)transform_ptr + 93) == '\0') {
                stack_context = (void*)0x18065a252;
                target_angle = (float)fmodf(scale_y + 0.5f);
            }
            
            target_angle = target_angle - transform_ptr[14];
            if (target_angle <= 0.5f) {
                if (target_angle < -0.5f) {
                    target_angle = target_angle + position_x;
                }
            } else {
                target_angle = target_angle - 1.0f;
            }
            
            position_x = scale_y * scale_y * scale_y + velocity_params->velocity_y;
            if (position_x <= position_x) {
                position_x = position_x;
            }
            
            target_angle = position_x * scale_y * target_angle + transform_ptr[14];
            transform_ptr[14] = target_angle;
            
            if (base_velocity <= target_angle) {
                if (position_x <= target_angle) {
                    transform_ptr[14] = target_angle - position_x;
                }
            } else {
                transform_ptr[14] = target_angle + position_x;
            }
        } else {
            transform_ptr[18] = scale_y + 0.25f;
        }
    }
    
final_processing:
    target_angle = transform_ptr[20];
    render_params->render_param = (position_x - target_angle) * (position_x - rotation_speed);
    position_x = (position_x - current_angle) * render_params->render_param;
    animation_buffer[27] = (position_x - scale_y) * current_angle * render_params->render_param;
    current_angle = current_angle * render_params->render_param * scale_y;
    scale_x = position_x * scale_y;
    render_params->render_param = render_params->render_param * scale_y;
    animation_buffer[29] = current_angle * (float)animation_state;
    *(float*)(structure_offset + -124) = render_params->render_param;
    *(float*)(structure_offset + -120) = render_params->render_param;
    *(float*)(structure_offset + -116) = (position_x - rotation_speed) * target_angle;
    scale_y = (position_x - (float)animation_state) * scale_x;
    timing_params->timing_param = (position_x - (float)animation_state) * current_angle;
    *(float*)(structure_offset + -128) = scale_y;
    
    // 渲染参数计算
    if (((char)velocity_params == '\0') || (base_velocity < (float)animation_state)) {
        if (target_angle <= base_velocity) {
            target_angle = 3.0f;
        } else {
            target_angle = 5.0f;
        }
    } else {
        target_angle = 2.0f;
    }
    
    scale_x = transform_ptr[6218];
    if (rotation_speed <= scale_x) {
        scale_x = scale_x - target_angle * velocity_params->velocity_y;
        if (scale_x <= rotation_speed) {
            scale_x = rotation_speed;
        }
    } else {
        scale_x = scale_x + target_angle * velocity_params->velocity_y;
        if (rotation_speed <= scale_x) {
            scale_x = rotation_speed;
        }
    }
    
    transform_ptr[6218] = scale_x;
    transform_ptr[6212] = scale_x;
    rotation_speed = transform_ptr[17];
    
    if (0.2f <= rotation_speed) {
        target_angle = position_x;
        if (0.7f < rotation_speed) {
            target_angle = (position_x - rotation_speed) * 3.333333f;
        }
    } else {
        target_angle = rotation_speed * 5.0f;
    }
    
    if (base_velocity < transform_ptr[18]) {
        rotation_speed = (transform_ptr[18] - rotation_speed) * 4.0f;
        if (rotation_speed <= base_velocity) {
            rotation_speed = base_velocity;
        }
        target_angle = target_angle * rotation_speed;
    }
    
    // 高级渲染管线处理
    transform_ptr = transform_ptr + 6213;
    index_counter = 1;
    rotation_speed = base_velocity;
    
    do {
        scale_x = *(float*)(((int64_t)animation_buffer - (int64_t)transform_ptr) + (int64_t)transform_ptr);
        target_angle = scale_x - transform_ptr[-10];
        scale_y = ABS(target_angle);
        
        if (MIN_DIFFERENCE <= scale_y) {
            position_x = position_x;
            if (target_angle < base_velocity) {
                position_x = -1.0f;
            }
            
            if (MIN_VELOCITY <= scale_y) {
                if (MAX_VELOCITY <= scale_y) {
                    scale_y = MAX_VELOCITY;
                }
            } else {
                scale_y = MIN_VELOCITY;
            }
            
            scale_y = scale_y * position_x * velocity_params->velocity_y * 6.0f;
            if (scale_y * position_x <= position_x * target_angle) {
                scale_x = transform_ptr[-10] + scale_y;
            }
        }
        
        transform_ptr[-10] = scale_x;
        *transform_ptr = scale_x;
        
        if (2 < index_counter) {
            if (index_counter < 7) {
                target_angle = position_x - target_angle;
            } else {
                target_angle = base_velocity;
                if (index_counter == 7) {
                    if (*(char*)((int64_t)transform_ptr + 93) == '\0') {
                    target_angle_set:
                        target_angle = target_angle;
                    }
                } else {
                    if (index_counter != 8) goto target_angle_set;
                    if (*(char*)((int64_t)transform_ptr + 93) != '\0') goto target_angle_set;
                }
            }
            scale_x = target_angle * scale_x;
            *transform_ptr = scale_x;
        }
        
    target_angle_set:
        target_angle = *(float*)((int64_t)animation_buffer + (4 - (int64_t)transform_ptr) + (int64_t)transform_ptr);
        scale_y = target_angle - transform_ptr[-9];
        position_x = ABS(scale_y);
        
        if (MIN_DIFFERENCE <= position_x) {
            current_angle = position_x;
            if (scale_y < base_velocity) {
                current_angle = -1.0f;
            }
            
            if (MIN_VELOCITY <= position_x) {
                if (MAX_VELOCITY <= position_x) {
                    position_x = MAX_VELOCITY;
                }
            } else {
                position_x = MIN_VELOCITY;
            }
            
            position_x = position_x * current_angle * velocity_params->velocity_y * 6.0f;
            if (position_x * current_angle <= current_angle * scale_y) {
                target_angle = transform_ptr[-9] + position_x;
            }
        }
        
        data_offset = index_counter + 1;
        transform_ptr[-9] = target_angle;
        transform_ptr[1] = target_angle;
        
        if (2 < data_offset) {
            if (data_offset < 7) {
                scale_y = position_x - target_angle;
            } else {
                scale_y = base_velocity;
                if (data_offset == 7) {
                    if (*(char*)((int64_t)transform_ptr + 93) == '\0') {
                    scale_y_set:
                        scale_y = target_angle;
                    }
                } else {
                    if (data_offset != 8) goto scale_y_set;
                    if (*(char*)((int64_t)transform_ptr + 93) != '\0') goto scale_y_set;
                }
            }
            target_angle = scale_y * target_angle;
            transform_ptr[1] = target_angle;
        }
        
    scale_y_set:
        scale_y = *(float*)((int64_t)animation_buffer + (8 - (int64_t)transform_ptr) + (int64_t)transform_ptr);
        position_x = scale_y - transform_ptr[-8];
        current_angle = ABS(position_x);
        
        if (MIN_DIFFERENCE <= current_angle) {
            rotation_speed = position_x;
            if (position_x < base_velocity) {
                rotation_speed = -1.0f;
            }
            
            if (MIN_VELOCITY <= current_angle) {
                if (MAX_VELOCITY <= current_angle) {
                    current_angle = MAX_VELOCITY;
                }
            } else {
                current_angle = MIN_VELOCITY;
            }
            
            current_angle = current_angle * rotation_speed * velocity_params->velocity_y * 6.0f;
            if (current_angle * rotation_speed <= rotation_speed * position_x) {
                scale_y = transform_ptr[-8] + current_angle;
            }
        }
        
        data_offset = index_counter + 2;
        transform_ptr[-8] = scale_y;
        transform_ptr[2] = scale_y;
        
        if (2 < data_offset) {
            if (data_offset < 7) {
                position_x = position_x - target_angle;
            } else {
                position_x = base_velocity;
                if (data_offset == 7) {
                    if (*(char*)((int64_t)transform_ptr + 93) == '\0') {
                    position_x_set:
                        position_x = target_angle;
                    }
                } else {
                    if (data_offset != 8) goto position_x_set;
                    if (*(char*)((int64_t)transform_ptr + 93) != '\0') goto position_x_set;
                }
            }
            scale_y = position_x * scale_y;
            transform_ptr[2] = scale_y;
        }
        
    position_x_set:
        index_counter = index_counter + 3;
        rotation_speed = rotation_speed + scale_x + target_angle + scale_y;
        transform_ptr = transform_ptr + 3;
        
        if (9 < index_counter) {
            target_angle = transform_ptr[6212];
            target_angle = position_x - ((target_angle * 6.0f - 15.0f) * target_angle + 10.0f) * target_angle * target_angle * target_angle;
            
            if (rotation_speed != target_angle) {
                if (rotation_speed <= base_velocity) {
                    transform_ptr[6212] = 1.0f;
                } else {
                    target_angle = target_angle / rotation_speed;
                    transform_ptr[6213] = transform_ptr[6213] * target_angle;
                    transform_ptr[6214] = transform_ptr[6214] * target_angle;
                    transform_ptr[6215] = transform_ptr[6215] * target_angle;
                    transform_ptr[6216] = transform_ptr[6216] * target_angle;
                    transform_ptr[6217] = transform_ptr[6217] * target_angle;
                    transform_ptr[6218] = transform_ptr[6218] * target_angle;
                    transform_ptr[6219] = transform_ptr[6219] * target_angle;
                    transform_ptr[6220] = transform_ptr[6220] * target_angle;
                    transform_ptr[6221] = target_angle * transform_ptr[6221];
                }
            }
            
            position_x = animation_buffer[27] - (position_x - scale_y) * position_x;
            scale_y = ((((scale_x + current_angle) * (float)animation_state + render_params->render_param) - timing_params->timing_param) - scale_y) - render_params->render_param;
            rotation_speed = position_x * position_x + scale_y * scale_y;
            rotation_speed = (float)(rotation_speed <= 1.1754944e-38f) * 1.1754944e-38f + rotation_speed;
            
            animation_data = rsqrtss(ZEXT416((uint)rotation_speed), ZEXT416((uint)rotation_speed));
            target_angle = animation_data->_0_4_;
            rotation_speed = target_angle * 0.5f * (3.0f - rotation_speed * target_angle * target_angle);
            position_x = rotation_speed * position_x;
            rotation_speed = rotation_speed * scale_y;
            
            // 法向量标准化
            if (ABS(rotation_speed * transform_ptr[6222] + position_x * transform_ptr[6223]) <= NORMALIZATION_THRESHOLD) {
                scale_y = transform_ptr[6213] - transform_ptr[6214];
                current_angle = (((transform_ptr[6216] + transform_ptr[6215] + transform_ptr[6219]) - transform_ptr[6217]) - transform_ptr[6218]) - transform_ptr[6220];
                rotation_speed = scale_y * scale_y + current_angle * current_angle;
                rotation_speed = (float)(rotation_speed <= 1.1754944e-38f) * 1.1754944e-38f + rotation_speed;
                
                animation_data = rsqrtss(ZEXT416((uint)rotation_speed), ZEXT416((uint)rotation_speed));
                target_angle = animation_data->_0_4_;
                velocity_params->velocity_y = velocity_params->velocity_y * ANIMATION_SCALE;
                rotation_speed = target_angle * 0.5f * (3.0f - rotation_speed * target_angle * target_angle);
                
                // 重新计算变换矩阵
                transform_matrix = CONCAT44(rotation_speed * scale_y * velocity_params->velocity_y + (position_x - velocity_params->velocity_y) * transform_ptr[6223],
                                           rotation_speed * current_angle * velocity_params->velocity_y + (position_x - velocity_params->velocity_y) * transform_ptr[6222]);
                *(void**)(transform_ptr + 6222) = transform_matrix;
                
                rotation_speed = transform_ptr[6223];
                target_angle = transform_ptr[6222];
                scale_y = target_angle * target_angle + rotation_speed * rotation_speed;
                animation_data = rsqrtss(ZEXT416((uint)scale_y), ZEXT416((uint)scale_y));
                current_angle = animation_data->_0_4_;
                scale_y = current_angle * 0.5f * (3.0f - scale_y * current_angle * current_angle);
                transform_ptr[6223] = scale_y * rotation_speed;
                transform_ptr[6222] = scale_y * target_angle;
            } else {
                *(void**)(transform_ptr + 6222) = transform_matrix;
            }
            
            // 最终渲染处理
            stack_context = (void*)0x18065aa9f;
            animation_buffer[31] = timing_params->timing_param;
            ui_system_render_final_processing(*(uint64_t*)(structure_offset + -112) ^ (uint64_t)&stack0x00000000);
        }
    } while (true);
}

/**
 * 函数别名定义 - 便于理解和维护
 */
#define ui_system_complex_animation_handler ui_system_advanced_animation_transform
#define ui_system_process_ui_transformations ui_system_advanced_animation_transform
#define ui_system_calculate_animation_matrices ui_system_advanced_animation_transform