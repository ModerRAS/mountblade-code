#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// =============================================================================
// 03_rendering_part085.c - 渲染系统高级变换和资源处理模块
// =============================================================================

// 常量定义
#define RENDERING_OBJECT_NULL_OFFSET 0x38
#define RENDERING_TRANSFORM_OFFSET_1 0x10
#define RENDERING_TRANSFORM_OFFSET_2 0x18
#define RENDERING_POSITION_OFFSET_1 0x94
#define RENDERING_POSITION_OFFSET_2 0xe4
#define RENDERING_SCALE_OFFSET_1 0x98
#define RENDERING_SCALE_OFFSET_2 0xe8
#define RENDERING_SHADER_PARAM_OFFSET 0x58
#define RENDERING_MAX_FLOAT_VALUE 3.4028235e+38

// 全局变量
extern int64_t system_message_buffer;
extern int64_t GET_SECURITY_COOKIE();
extern int64_t render_system_control_buffer;
extern int64_t system_parameter_buffer;
extern int64_t system_memory_pool_ptr;
extern uint64_t global_state_5488_ptr;
extern uint64_t global_state_5720_ptr;
extern uint64_t global_state_5680_ptr;
extern uint64_t global_state_5640_ptr;
extern uint64_t global_state_5600_ptr;
extern uint64_t global_state_5872_ptr;
extern uint64_t global_state_5816_ptr;
extern uint64_t global_state_5792_ptr;
extern uint64_t global_state_3432_ptr;
extern uint64_t global_state_720_ptr;
extern uint64_t global_state_3456_ptr;

// =============================================================================
// 渲染系统对象清理函数
// =============================================================================
/**
 * 清理渲染系统对象的资源
 * 
 * 该函数负责释放渲染对象占用的资源，包括调用对象的清理函数指针。
 * 首先检查第二个指针是否有效，如果有效则调用其清理函数。
 * 然后检查第一个指针是否有效，如果有效则调用其清理函数。
 * 
 * @param object_handle - 渲染对象的句柄指针
 */
void rendering_system_cleanup_object_resources(int64_t *object_handle)
{
    // 检查第二个对象指针是否有效
    if ((int64_t *)object_handle[1] != (int64_t *)0x0) {
        // 调用第二个对象的清理函数
        (**(code **)(*(int64_t *)object_handle[1] + RENDERING_OBJECT_NULL_OFFSET))();
    }
    
    // 检查第一个对象指针是否有效
    if ((int64_t *)*object_handle != (int64_t *)0x0) {
        // 调用第一个对象的清理函数
        (**(code **)(*(int64_t *)*object_handle + RENDERING_OBJECT_NULL_OFFSET))();
    }
    
    return;
}

// =============================================================================
// 渲染系统高级变换处理函数
// =============================================================================
/**
 * 处理渲染系统的高级变换操作
 * 
 * 该函数执行复杂的变换计算，包括位置、缩放、旋转等变换的组合操作。
 * 支持条件执行，当param_2不为0时才执行变换处理。
 * 
 * @param transform_context - 变换上下文指针
 * @param enable_flag - 启用标志（0=禁用，非0=启用）
 */
void rendering_system_process_advanced_transforms(int64_t transform_context, char enable_flag)
{
    float *position_data;
    uint64_t *transform_matrix;
    float scale_x, scale_y, scale_z, scale_w;
    float position_x, position_y, position_z, position_w;
    float transform_x, transform_y, transform_z, transform_w;
    int64_t source_offset;
    int64_t target_offset_1, target_offset_2;
    int64_t object_count;
    int current_index;
    uint64_t object_total;
    int enabled_index, disabled_index;
    int64_t loop_index;
    int flag_result;
    bool is_enabled;
    uint64_t temp_storage;
    int64_t *target_array_1;
    int64_t *target_array_2;
    
    // 计算对象总数
    object_total = *(int64_t *)(transform_context + RENDERING_TRANSFORM_OFFSET_2) - 
                  *(int64_t *)(transform_context + RENDERING_TRANSFORM_OFFSET_1) >> 3;
    object_count = (int)object_total;
    
    // 检查是否需要处理对象
    if ((0 < object_count) && (enable_flag != '\0')) {
        // 分配临时存储空间
        temp_storage = FUN_1800f6ce0(transform_context, &target_array_2, object_count * 4);
        FUN_18031bde0(temp_storage, &target_array_1, object_total & 0xffffffff);
        
        // 获取目标数组偏移
        target_offset_1 = target_array_2[2];
        target_offset_2 = target_array_1[2];
        
        // 初始化索引
        enabled_index = 1;
        disabled_index = 0;
        
        // 处理每个对象
        if (0 < object_count) {
            loop_index = 0;
            do {
                // 检查对象是否启用
                is_enabled = disabled_index != *(int *)(transform_context + 0x30);
                flag_result = 0;
                if (is_enabled) {
                    flag_result = enabled_index;
                }
                if (is_enabled) {
                    enabled_index = enabled_index + 1;
                }
                
                // 获取对象指针
                source_offset = *(int64_t *)(*(int64_t *)(transform_context + RENDERING_TRANSFORM_OFFSET_1) + loop_index * 8);
                
                // 读取缩放值
                scale_y = *(float *)(source_offset + RENDERING_SCALE_OFFSET_1);
                scale_z = *(float *)(source_offset + 0x9c);
                position_x = *(float *)(source_offset + RENDERING_POSITION_OFFSET_1);
                position_y = *(float *)(source_offset + 0xec);
                
                // 计算位置变换
                loop_index = (int64_t)(flag_result * 4);
                *(float *)(target_offset_1 + loop_index * 4) = 
                    *(float *)(source_offset + 0x94) + *(float *)(source_offset + RENDERING_POSITION_OFFSET_2);
                *(float *)(target_offset_1 + 4 + loop_index * 4) = scale_y + position_x;
                *(float *)(target_offset_1 + 8 + loop_index * 4) = scale_z + position_y;
                *(int32_t *)(target_offset_1 + 0xc + loop_index * 4) = 
                    *(int32_t *)(source_offset + 0x48);
                
                // 读取更多缩放值
                scale_y = *(float *)(source_offset + RENDERING_SCALE_OFFSET_1);
                scale_z = *(float *)(source_offset + 0x9c);
                scale_w = *(float *)(source_offset + 0xa0);
                position_x = *(float *)(source_offset + RENDERING_SCALE_OFFSET_2);
                position_y = *(float *)(source_offset + 0xec);
                
                // 计算变换矩阵偏移
                loop_index = (int64_t)flag_result * 0x60;
                position_data = (float *)(loop_index + 0x40 + target_offset_2);
                
                // 应用位置变换
                *position_data = *(float *)(source_offset + 0x94) + *(float *)(source_offset + RENDERING_POSITION_OFFSET_2);
                position_data[1] = scale_y + position_x;
                position_data[2] = scale_z + position_y;
                position_data[3] = scale_w;
                
                // 计算透明度值
                *(float *)(loop_index + 0x4c + target_offset_2) = 
                    (float)*(byte *)(*(int64_t *)(*(int64_t *)(transform_context + RENDERING_TRANSFORM_OFFSET_1) + loop_index * 8) + 0x149);
                
                // 获取对象指针（重新加载）
                source_offset = *(int64_t *)(*(int64_t *)(transform_context + RENDERING_TRANSFORM_OFFSET_1) + loop_index * 8);
                
                // 读取变换参数
                position_x = *(float *)(source_offset + 0x88);
                position_y = *(float *)(source_offset + 0x84);
                scale_y = *(float *)(source_offset + 0x8c);
                scale_z = *(float *)(source_offset + 0x78);
                scale_w = *(float *)(source_offset + 0x74);
                transform_x = *(float *)(source_offset + 0x7c);
                
                // 计算位置数据指针
                position_data = (float *)(loop_index + 0x50 + target_offset_2);
                
                // 计算向量长度（用于标准化）
                *position_data = SQRT(*(float *)(source_offset + 100) * *(float *)(source_offset + 100) +
                               *(float *)(source_offset + 0x68) * *(float *)(source_offset + 0x68) +
                               *(float *)(source_offset + 0x6c) * *(float *)(source_offset + 0x6c));
                position_data[1] = SQRT(scale_w * scale_w + scale_z * scale_z + transform_x * transform_x);
                position_data[2] = SQRT(position_y * position_y + position_x * position_x + scale_y * scale_y);
                position_data[3] = RENDERING_MAX_FLOAT_VALUE;
                
                // 获取对象指针（再次重新加载）
                source_offset = *(int64_t *)(*(int64_t *)(transform_context + RENDERING_TRANSFORM_OFFSET_1) + loop_index * 8);
                
                // 复制变换矩阵数据
                temp_storage = *(uint64_t *)(source_offset + 0xac);
                *(uint64_t *)(loop_index + target_offset_2) = *(uint64_t *)(source_offset + 0xa4);
                ((uint64_t *)(loop_index + target_offset_2))[1] = temp_storage;
                
                // 复制更多变换数据
                temp_storage = *(uint64_t *)(source_offset + 0xbc);
                transform_matrix = (uint64_t *)(loop_index + 0x10 + target_offset_2);
                *transform_matrix = *(uint64_t *)(source_offset + 0xb4);
                transform_matrix[1] = temp_storage;
                
                // 继续复制变换数据
                temp_storage = *(uint64_t *)(source_offset + 0xcc);
                transform_matrix = (uint64_t *)(loop_index + 0x20 + target_offset_2);
                *transform_matrix = *(uint64_t *)(source_offset + 0xc4);
                transform_matrix[1] = temp_storage;
                
                // 复制最后的变换数据
                temp_storage = *(uint64_t *)(source_offset + 0xdc);
                transform_matrix = (uint64_t *)(loop_index + 0x30 + target_offset_2);
                *transform_matrix = *(uint64_t *)(source_offset + 0xd4);
                transform_matrix[1] = temp_storage;
                
                // 设置着色器参数
                *(int32_t *)(loop_index + 0xc + target_offset_2) = 
                    *(int32_t *)(*(int64_t *)(*(int64_t *)(transform_context + RENDERING_TRANSFORM_OFFSET_1) + loop_index * 8) + 0x60);
                *(int32_t *)(loop_index + 0x1c + target_offset_2) = 
                    *(int32_t *)(*(int64_t *)(*(int64_t *)(transform_context + RENDERING_TRANSFORM_OFFSET_1) + loop_index * 8) + 0x144);
                
                // 清理对象状态
                *(int8_t *)(*(int64_t *)(*(int64_t *)(transform_context + RENDERING_TRANSFORM_OFFSET_1) + loop_index * 8) + 0x50) = 0;
                *(int32_t *)(*(int64_t *)(*(int64_t *)(transform_context + RENDERING_TRANSFORM_OFFSET_1) + loop_index * 8) + RENDERING_SHADER_PARAM_OFFSET) = 
                    *(int32_t *)(transform_context + 4);
                
                // 更新循环变量
                disabled_index = disabled_index + 1;
                loop_index = loop_index + 1;
            } while (loop_index < object_count);
        }
        
        // 处理渲染批次
        FUN_18029b390(*(uint64_t *)(system_message_buffer + 0x1cd8), 
                      *(uint64_t *)(transform_context + 0x40), target_array_2);
        FUN_18029b390(*(uint64_t *)(system_message_buffer + 0x1cd8), 
                      *(uint64_t *)(transform_context + 0x48), target_array_1);
        
        // 清理临时资源
        if (target_array_1 != (int64_t *)0x0) {
            (**(code **)(*target_array_1 + RENDERING_OBJECT_NULL_OFFSET))();
        }
        if (target_array_2 != (int64_t *)0x0) {
            (**(code **)(*target_array_2 + RENDERING_OBJECT_NULL_OFFSET))();
        }
    }
    
    return;
}

// =============================================================================
// 渲染系统初始化函数
// =============================================================================
/**
 * 初始化渲染系统的状态
 * 
 * 该函数负责设置渲染系统的初始状态，包括配置参数和内存分配。
 * 
 * @param render_context - 渲染上下文指针
 */
void rendering_system_initialize_state(int64_t render_context)
{
    int64_t config_offset;
    int8_t stack_data[32];
    uint64_t stack_value_1;
    void *stack_pointer_1;
    int8_t *stack_pointer_2;
    int32_t stack_value_2;
    int8_t stack_data_2[32];
    uint64_t xor_value;
    
    // 设置堆栈保护值
    stack_value_1 = 0xfffffffffffffffe;
    xor_value = GET_SECURITY_COOKIE() ^ (uint64_t)stack_data;
    
    // 获取配置偏移
    config_offset = *(int64_t *)(render_context + 0x9650);
    
    // 设置系统标志
    render_system_control_buffer = 0x80;
    
    // 函数在此处被截断，实际的初始化代码应该继续执行
    // 这可能是一个代码分析器产生的函数片段
}

// =============================================================================
// 渲染系统高级渲染控制函数
// =============================================================================
/**
 * 渲染系统的高级渲染控制函数
 * 
 * 这是一个复杂的渲染控制函数，处理多种渲染模式和参数设置。
 * 支持不同的渲染类型，通过参数7进行选择。
 * 
 * @param render_engine - 渲染引擎指针
 * @param render_params - 渲染参数指针
 * @param target_buffer - 目标缓冲区指针
 * @param texture_data - 纹理数据
 * @param shader_data - 着色器数据指针
 * @param render_flags - 渲染标志
 * @param render_mode - 渲染模式（0-5支持特定模式，其他为默认）
 */
void rendering_system_advanced_render_control(int64_t render_engine, int64_t render_params, 
                                          int64_t *target_buffer, uint64_t texture_data,
                                          int64_t *shader_data, uint64_t render_flags, 
                                          int32_t render_mode)
{
    int *render_counter;
    int current_count;
    int32_t mode_param_1, mode_param_2;
    uint64_t *texture_ptr;
    int8_t mode_flag;
    int32_t render_quality;
    int32_t *render_buffer;
    int64_t *render_context;
    uint64_t *texture_manager;
    uint64_t *shader_manager;
    uint64_t *render_manager;
    int64_t memory_pool;
    byte render_state;
    uint64_t stack_data;
    int8_t stack_protect[32];
    uint64_t *stack_manager;
    int8_t stack_flag;
    int64_t *stack_context;
    void *stack_pointer;
    uint64_t *stack_data_ptr;
    int32_t stack_param_1;
    uint64_t stack_value_1;
    int32_t stack_param_2;
    int32_t stack_param_3;
    int32_t stack_param_4;
    uint64_t stack_value_2;
    int32_t stack_param_5;
    int32_t stack_param_6;
    int32_t stack_param_7;
    int64_t *stack_buffer_1;
    int64_t *stack_buffer_2;
    int64_t *stack_buffer_3;
    int64_t *stack_buffer_4;
    int64_t *stack_buffer_5;
    int64_t *stack_buffer_6;
    int64_t *stack_buffer_7;
    uint64_t stack_value_3;
    int32_t stack_param_8;
    int16_t stack_param_9;
    uint64_t stack_value_4;
    uint64_t stack_value_5;
    int32_t stack_param_10;
    int8_t stack_param_11;
    int32_t stack_param_12;
    uint64_t stack_value_6;
    int16_t stack_param_13;
    uint64_t stack_value_7;
    int32_t stack_param_14;
    uint64_t stack_value_8;
    int32_t stack_param_15;
    int8_t stack_param_16;
    uint64_t stack_value_9;
    uint64_t stack_value_10;
    int64_t stack_offset_1;
    int64_t stack_offset_2;
    void *stack_pointer_2;
    int8_t *stack_pointer_3;
    int32_t stack_param_16_copy;
    int8_t stack_data_3[136];
    uint64_t stack_data_4[40];
    uint64_t stack_xor;
    
    // 设置堆栈保护
    stack_value_10 = 0xfffffffffffffffe;
    stack_xor = GET_SECURITY_COOKIE() ^ (uint64_t)stack_protect;
    
    // 设置目标缓冲区
    stack_context = target_buffer;
    
    // 获取渲染缓冲区
    render_buffer = (int32_t *)FUN_1800daa50();
    
    // 根据渲染模式设置参数
    switch(render_mode) {
    case 0:
        FUN_180094b30(render_buffer, &global_state_5488_ptr);
        break;
    case 1:
        FUN_180094b30(render_buffer, &global_state_5720_ptr);
        break;
    case 2:
        FUN_180094b30(render_buffer, &global_state_5680_ptr);
        break;
    case 3:
        FUN_180094b30(render_buffer, &global_state_5640_ptr);
        break;
    case 4:
        FUN_180094b30(render_buffer, &global_state_5600_ptr);
        break;
    case 5:
        FUN_180094b30(render_buffer, &global_state_5872_ptr);
        break;
    default:
        FUN_180626ee0(&global_state_5816_ptr);
    }
    
    // 获取渲染上下文
    render_context = (int64_t *)FUN_1800bde30();
    if (render_context != (int64_t *)0x0) {
        stack_buffer_2 = render_context;
        (**(code **)(*render_context + 0x28))(render_context);
    }
    
    // 管理渲染上下文
    stack_buffer_2 = *(int64_t **)(render_buffer + 0x2662);
    *(int64_t **)(render_buffer + 0x2662) = render_context;
    if (stack_buffer_2 != (int64_t *)0x0) {
        (**(code **)(*stack_buffer_2 + RENDERING_OBJECT_NULL_OFFSET))();
    }
    
    // 设置渲染缓冲区参数
    *render_buffer = 0x41;
    *(uint64_t *)(render_buffer + 0x4706) = 0;
    render_buffer[0x4708] = (float)*(ushort *)((int64_t)shader_data + 0x32c);
    render_buffer[0x4709] = (float)*(ushort *)((int64_t)shader_data + 0x32e);
    render_buffer[0x470a] = 0;
    render_buffer[0x470b] = 0x3f800000;
    render_buffer[0xd62] = (uint)*(ushort *)((int64_t)shader_data + 0x32c);
    render_buffer[0xd63] = (uint)*(ushort *)((int64_t)shader_data + 0x32e);
    render_buffer[0xd64] = (uint)*(ushort *)((int64_t)shader_data + 0x32c);
    render_buffer[0xd65] = (uint)*(ushort *)((int64_t)shader_data + 0x32e);
    render_buffer[1] = 0x10141;
    render_buffer[0x473c] = 0;
    *(int8_t *)((int64_t)render_buffer + 0x11c37) = 1;
    *(byte *)((int64_t)render_buffer + 0x1bd9) = *(byte *)((int64_t)render_buffer + 0x1bd9) | 2;
    *(byte *)(render_buffer + 0x6f6) = *(byte *)(render_buffer + 0x6f6) | 0x40;
    *(int16_t *)((int64_t)render_buffer + 0x9a31) = 0;
    *(int8_t *)(render_buffer + 0x4931) = 1;
    
    // 检查渲染状态
    if (*(int64_t *)(render_buffer + 0x2674) != 0) {
        // 设置渲染参数
        stack_param_4 = 1;
        stack_param_6 = 0x1018a;
        stack_value_2 = 0x2f;
        stack_param_3 = 0x80;
        stack_param_5 = 0x80;
        stack_param_7 = *(int32_t *)(render_params + 0x1bd4);
        stack_pointer_2 = &global_state_3432_ptr;
        stack_pointer_3 = stack_data_3;
        stack_data_3[0] = 0;
        stack_param_16_copy = 0x11;
        stack_data = strcpy_s(stack_data_3, 0x80, &global_state_5792_ptr);
        FUN_1800b1d80(stack_data, &stack_buffer_1, &stack_pointer_2, &stack_param_3);
        
        // 管理渲染缓冲区
        render_context = stack_buffer_1;
        stack_pointer_2 = &global_state_720_ptr;
        render_buffer[1] = render_buffer[1] | 2;
        *(uint64_t *)(render_buffer + 0x2684) = 0;
        *(uint64_t *)(render_buffer + 0x2686) = 0;
        
        // 处理渲染上下文
        stack_buffer_3 = stack_buffer_1;
        if (stack_buffer_1 != (int64_t *)0x0) {
            (**(code **)(*stack_buffer_1 + 0x28))(stack_buffer_1);
        }
        
        // 继续上下文管理
        stack_buffer_3 = *(int64_t **)(render_buffer + 0x25aa);
        *(int64_t **)(render_buffer + 0x25aa) = render_context;
        if (stack_buffer_3 != (int64_t *)0x0) {
            (**(code **)(*stack_buffer_3 + RENDERING_OBJECT_NULL_OFFSET))();
        }
        
        // 处理着色器数据
        stack_buffer_4 = shader_data;
        (**(code **)(*shader_data + 0x28))(shader_data);
        stack_buffer_4 = *(int64_t **)(render_buffer + 0x25a4);
        *(int64_t **)(render_buffer + 0x25a4) = shader_data;
        if (stack_buffer_4 != (int64_t *)0x0) {
            (**(code **)(*stack_buffer_4 + RENDERING_OBJECT_NULL_OFFSET))();
        }
        
        // 初始化渲染状态
        render_state = 0;
        render_buffer[0xd5f] = 0;
        render_buffer[0xd5e] = render_mode;
        
        // 清理渲染资源
        stack_buffer_5 = *(int64_t **)(render_buffer + 0x265c);
        *(uint64_t *)(render_buffer + 0x265c) = 0;
        if (stack_buffer_5 != (int64_t *)0x0) {
            (**(code **)(*stack_buffer_5 + RENDERING_OBJECT_NULL_OFFSET))();
        }
        
        // 获取内存池
        render_context = (int64_t *)FUN_1800be440();
        if (render_context != (int64_t *)0x0) {
            stack_buffer_6 = render_context;
            (**(code **)(*render_context + 0x28))(render_context);
        }
        
        // 管理内存池
        stack_buffer_6 = *(int64_t **)(render_buffer + 0x2660);
        *(int64_t **)(render_buffer + 0x2660) = render_context;
        if (stack_buffer_6 != (int64_t *)0x0) {
            (**(code **)(*stack_buffer_6 + RENDERING_OBJECT_NULL_OFFSET))();
        }
        
        // 获取渲染配置
        memory_pool = *(int64_t *)(*(int64_t *)(render_engine + 0x38) + 0x60b80);
        if (memory_pool == 0) {
            // 设置默认浮点值
            stack_param_12 = 0x3f800000;
            stack_param_11 = 0x3f800000;
            stack_data = 0x3f8000003f800000;
        }
        else {
            // 从内存池获取配置
            stack_data = *(uint64_t *)(memory_pool + 0x20);
        }
        *(uint64_t *)(render_buffer + 0x4932) = stack_data;
        
        // 初始化渲染数据
        FUN_180094c20(stack_data_4);
        stack_offset_1 = *stack_context;
        stack_offset_2 = stack_context[1];
        stack_flag = 1;
        stack_manager = (uint64_t *)CONCAT44(stack_manager._4_4_, 0x447a0000);
        FUN_180286300(stack_data_4, render_mode, &stack_offset_1);
        
        // 复制渲染数据
        memory_pool = 2;
        texture_ptr = (uint64_t *)(render_buffer + 0xc);
        texture_manager = stack_data_4;
        do {
            shader_manager = texture_manager;
            render_manager = texture_ptr;
            stack_data = shader_manager[1];
            *render_manager = *shader_manager;
            render_manager[1] = stack_data;
            stack_data = shader_manager[3];
            render_manager[2] = shader_manager[2];
            render_manager[3] = stack_data;
            stack_data = shader_manager[5];
            render_manager[4] = shader_manager[4];
            render_manager[5] = stack_data;
            stack_data = shader_manager[7];
            render_manager[6] = shader_manager[6];
            render_manager[7] = stack_data;
            stack_data = shader_manager[9];
            render_manager[8] = shader_manager[8];
            render_manager[9] = stack_data;
            stack_data = shader_manager[0xb];
            render_manager[10] = shader_manager[10];
            render_manager[0xb] = stack_data;
            stack_data = shader_manager[0xd];
            render_manager[0xc] = shader_manager[0xc];
            render_manager[0xd] = stack_data;
            stack_data = shader_manager[0xf];
            render_manager[0xe] = shader_manager[0xe];
            render_manager[0xf] = stack_data;
            memory_pool = memory_pool + -1;
            texture_ptr = render_manager + 0x10;
            texture_manager = shader_manager + 0x10;
        } while (memory_pool != 0);
        
        // 完成数据复制
        stack_data = shader_manager[0x11];
        render_manager[0x10] = shader_manager[0x10];
        render_manager[0x11] = stack_data;
        stack_data = shader_manager[0x13];
        render_manager[0x12] = shader_manager[0x12];
        render_manager[0x13] = stack_data;
        stack_data = shader_manager[0x15];
        render_manager[0x14] = shader_manager[0x14];
        render_manager[0x15] = stack_data;
        
        // 复制渲染参数
        render_quality = *(int32_t *)((int64_t)shader_manager + 0xb4);
        mode_param_1 = *(int32_t *)(shader_manager + 0x17);
        mode_param_2 = *(int32_t *)((int64_t)shader_manager + 0xbc);
        *(int32_t *)(render_manager + 0x16) = *(int32_t *)(shader_manager + 0x16);
        *(int32_t *)((int64_t)render_manager + 0xb4) = render_quality;
        *(int32_t *)(render_manager + 0x17) = mode_param_1;
        *(int32_t *)((int64_t)render_manager + 0xbc) = mode_param_2;
        
        // 执行渲染处理
        FUN_18024b8d0(render_buffer);
        
        // 检查渲染引擎状态
        if (*(int64_t *)(render_engine + 0x38) == -14000) {
            *(int8_t *)(render_buffer + 0x473d) = 0;
        }
        else {
            FUN_1801c1c40(render_buffer + 0x4740);
            *(int8_t *)(render_buffer + 0x473d) = 1;
        }
        
        // 设置渲染标志
        *(int8_t *)(render_buffer + 0x268c) = 1;
        *(byte *)(render_buffer + 0x6f6) = *(byte *)(render_buffer + 0x6f6) | 0x20;
        
        // 处理渲染队列
        render_context = *(int64_t **)(render_params + 0x3580);
        if (render_context != (int64_t *)0x0) {
            stack_buffer_7 = render_context;
            (**(code **)(*render_context + 0x28))(render_context);
        }
        
        // 管理渲染队列
        stack_buffer_7 = *(int64_t **)(render_buffer + 0xd60);
        *(int64_t **)(render_buffer + 0xd60) = render_context;
        if (stack_buffer_7 != (int64_t *)0x0) {
            (**(code **)(*stack_buffer_7 + RENDERING_OBJECT_NULL_OFFSET))();
        }
        
        // 设置渲染质量参数
        render_buffer[0x4a7d] = *(int32_t *)(*(int64_t *)(render_engine + 0x38) + 0x3ec4);
        render_buffer[0x4a7e] = 
            *(float *)(*(int64_t *)(render_engine + 0x38) + 0x3ec8) * 0.05 *
            *(float *)(*(int64_t *)(*(int64_t *)(render_engine + 0x38) + 0x81f0) + 0xc);
        
        // 启用渲染特性
        *(int8_t *)(render_buffer + 0x718) = 1;
        mode_flag = func_0x0001800e2bf0(system_parameter_buffer, render_buffer);
        *(int8_t *)((int64_t)render_buffer + 0x1c61) = mode_flag;
        
        // 检查渲染状态
        if (render_buffer[2] != -1) {
            render_state = (byte)render_buffer[6];
        }
        *(byte *)((int64_t)render_buffer + 0x1c62) = render_state & 1;
        render_quality = func_0x00018024c420(render_buffer);
        render_buffer[0x719] = render_quality;
        
        // 设置渲染缓冲区参数
        stack_value_3 = 0;
        stack_param_9 = 0xff00;
        stack_value_4 = 0;
        stack_value_5 = 0xffffffffffffffff;
        stack_param_10 = 0xffffffff;
        stack_param_11 = 0xff;
        stack_param_12 = 0xffffffff;
        stack_value_6 = 0;
        stack_param_13 = 0x400;
        stack_value_7 = 0;
        stack_param_14 = 0;
        stack_value_8 = 0;
        stack_param_15 = 0;
        stack_param_16 = 0;
        stack_value_9 = 0;
        stack_param_8 = 0;
        
        // 检查特殊渲染模式
        if (*(char *)(*(int64_t *)(render_engine + 0x38) + 0x27b8) != '\0') {
            render_context = (int64_t *)
                     **(uint64_t **)(*(int64_t *)(*(int64_t *)(render_engine + 0x38) + 0x81f8) + 0xf0);
            (**(code **)(*render_context + 0xa8))(render_context, &stack_context);
            
            // 处理渲染上下文
            if (stack_context != (int64_t *)0x0) {
                memory_pool = (**(code **)(*stack_context + 0x178))();
                *(int32_t *)(memory_pool + 0x2c4) = 0x3f800000;
                stack_manager = &stack_value_3;
                (**(code **)(*stack_context + 0x1c8))
                          (stack_context, render_buffer, *(int64_t *)(render_engine + 0x38),
                           *(int64_t *)(*(int64_t *)(render_engine + 0x38) + 0x81f8) + 0x70);
            }
            
            // 继续渲染处理
            stack_manager = &stack_value_3;
            (**(code **)(*stack_context + 0x1c8))
                      (stack_context, render_buffer, *(int64_t *)(render_engine + 0x38),
                       *(int64_t *)(*(int64_t *)(render_engine + 0x38) + 0x81f8) + 0x70);
            
            // 清理渲染上下文
            if (stack_context != (int64_t *)0x0) {
                (**(code **)(*stack_context + RENDERING_OBJECT_NULL_OFFSET))();
            }
        }
        
        // 线程安全的渲染计数器更新
        LOCK();
        render_counter = (int *)(render_params + 0x11a48);
        current_count = *render_counter;
        *render_counter = *render_counter + 1;
        UNLOCK();
        
        // 更新渲染缓冲区
        *(int32_t **)(render_params + 0x9a48 + (int64_t)current_count * 8) = render_buffer;
        stack_data = *(uint64_t *)(render_params + 0x9a3c);
        *(uint64_t *)(render_buffer + 0x268d) = *(uint64_t *)(render_params + 0x9a34);
        *(uint64_t *)(render_buffer + 0x268f) = stack_data;
        
        // 清理临时缓冲区
        if (stack_buffer_1 != (int64_t *)0x0) {
            (**(code **)(*stack_buffer_1 + RENDERING_OBJECT_NULL_OFFSET))();
        }
        
        // 函数在此处结束（不返回）
        FUN_1808fc050(stack_xor ^ (uint64_t)stack_protect);
    }
    
    // 处理其他渲染路径
    stack_pointer = &global_state_3456_ptr;
    stack_value_1 = 0;
    stack_data_ptr = (uint64_t *)0x0;
    stack_param_1 = 0;
    texture_ptr = (uint64_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr, 0x10, 0x13);
    *(int8_t *)texture_ptr = 0;
    stack_data_ptr = texture_ptr;
    render_quality = FUN_18064e990(texture_ptr);
    stack_value_1 = CONCAT44(stack_value_1._4_4_, render_quality);
    *texture_ptr = 0x616d776f64616873;
    texture_ptr[1] = 0x68706172675f70;
    stack_param_1 = 0xf;
    
    // 获取渲染管理器
    render_context = (int64_t *)FUN_1801f20c0();
    if (render_context != (int64_t *)0x0) {
        stack_buffer_3 = render_context;
        (**(code **)(*render_context + 0x28))(render_context);
    }
    
    // 管理渲染器
    stack_buffer_3 = *(int64_t **)(render_buffer + 0x2674);
    *(int64_t **)(render_buffer + 0x2674) = render_context;
    if (stack_buffer_3 != (int64_t *)0x0) {
        (**(code **)(*stack_buffer_3 + RENDERING_OBJECT_NULL_OFFSET))();
    }
    
    // 设置渲染路径
    stack_pointer = &global_state_3456_ptr;
    
    // 函数在此处结束（不返回）
    CoreEngine_MemoryPoolManager(texture_ptr);
}

// =============================================================================
// 函数别名定义 - 保持与原始代码的兼容性
// =============================================================================

// 原始函数名称的别名
#define FUN_180317990 rendering_system_cleanup_object_resources
#define FUN_1803179d0 rendering_system_process_advanced_transforms
#define FUN_180317e00 rendering_system_initialize_state
#define FUN_180317ee0 rendering_system_advanced_render_control