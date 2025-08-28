// Address range: 0x1808b31d5 - 0x1808b379a
// Decompilation date: 2025-08-27 14:30:00
// Translation: yes
// Platform: linux
// Status: completed
// Module: 渲染系统高级处理模块第022部分
// Description: 包含11个核心函数，涵盖渲染系统初始化、参数设置、状态管理、数据处理、变换计算、优化等功能

#include "TaleWorlds.Native.Split.h"

// 类型定义
typedef uint8_t undefined;
typedef uint32_t undefined4;
typedef uint64_t undefined8;

// 常量定义
#define MAX_RENDERING_QUEUE_SIZE 256
#define MAX_TRANSFORM_MATRICES 64
#define RENDERING_STATE_INITIALIZED 0x01
#define RENDERING_STATE_ACTIVE 0x02
#define RENDERING_STATE_PAUSED 0x04
#define MIN_FLOAT_THRESHOLD -80.0f
#define MAX_FLOAT_THRESHOLD 100.0f

// 渲染系统状态结构体
typedef struct {
    uint32_t state_flags;
    float current_time;
    float delta_time;
    void* render_context;
    uint32_t queue_count;
    uint32_t matrix_count;
} rendering_system_state_t;

// 渲染队列结构体
typedef struct {
    void* render_command;
    uint32_t priority;
    float execution_time;
    uint8_t command_type;
} render_queue_item_t;

// 变换矩阵结构体
typedef struct {
    float matrix[16];
    uint32_t matrix_id;
    uint8_t is_dirty;
} transform_matrix_t;

// 渲染参数结构体
typedef struct {
    float base_value;
    float time_scale;
    float interpolation_factor;
    uint32_t parameter_type;
    void* parameter_data;
} render_parameter_t;

// 函数原型声明
void rendering_system_initialize(void);
void rendering_system_cleanup(void);
void rendering_system_reset_state(void);
void rendering_system_process_command(void* command_data, void* render_context);
void rendering_system_set_time_scale(float time_scale);
void rendering_system_update_queue(void);
void rendering_system_flush_commands(void);
uint64_t rendering_system_allocate_matrix(int64_t matrix_id, int64_t* matrix_data);
uint64_t rendering_system_transform_matrix(int64_t matrix_id, int64_t transform_data);
float rendering_system_calculate_interpolation(uint32_t* state_data, float target_value, int interpolation_mode);
int rendering_system_set_render_target(int64_t* render_context, int64_t render_target);
uint8_t rendering_system_check_state(longlong context, longlong parameter);

// 函数别名定义
#define RenderingSystemInitialize rendering_system_initialize
#define RenderingSystemCleanup rendering_system_cleanup
#define RenderingSystemResetState rendering_system_reset_state
#define RenderingSystemProcessCommand rendering_system_process_command
#define RenderingSystemSetTimeScale rendering_system_set_time_scale
#define RenderingSystemUpdateQueue rendering_system_update_queue
#define RenderingSystemFlushCommands rendering_system_flush_commands
#define RenderingSystemAllocateMatrix rendering_system_allocate_matrix
#define RenderingSystemTransformMatrix rendering_system_transform_matrix
#define RenderingSystemCalculateInterpolation rendering_system_calculate_interpolation
#define RenderingSystemSetRenderTarget rendering_system_set_render_target
#define RenderingSystemCheckState rendering_system_check_state

/**
 * 渲染系统初始化函数
 * 功能：初始化渲染系统的基本状态和参数
 * 参数：无
 * 返回值：无
 * 说明：该函数负责设置渲染系统的初始状态，包括队列、矩阵和参数的初始化
 */
void rendering_system_initialize(void) {
    longlong *queue_ptr;
    int parameter_type;
    longlong *command_ptr;
    int render_mode;
    undefined4 param_a;
    undefined4 param_b;
    undefined4 param_c;
    undefined4 param_d;
    undefined4 param_e;
    undefined4 param_f;
    undefined4 param_g;
    undefined4 param_h;
    char state_flag;
    longlong context_ptr;
    longlong result_value;
    undefined8 render_context;
    longlong *next_command;
    longlong *base_context;
    longlong queue_base;
    int queue_count;
    longlong render_object;
    float scale_factor;
    float time_value;
    float calculated_value;
    float base_time;
    float render_time;
    float processed_value;
    float queue_time;
    undefined4 queue_param_a;
    undefined4 queue_param_b;
    int processing_mode;
    undefined8 context_data;
    longlong queue_context;
    int render_parameter;
    float accumulated_time;
    float final_time;
    int matrix_index;
    ulonglong stack_ptr;
    undefined4 stack_param_a;
    undefined4 stack_param_b;
    undefined4 stack_param_c;
    undefined4 stack_param_d;
    
    render_mode = render_parameter;
    queue_ptr = (longlong *)(queue_base + 0x38);
    next_command = (longlong *)(context_ptr + -8);
    if (context_ptr == 0) {
        next_command = base_context;
    }
    command_ptr = base_context;
    param_e = queue_param_b;
    param_f = queue_param_a;
    param_g = param_d;
    param_h = param_c;
    param_d = stack_param_d;
    param_c = stack_param_c;
    param_b = stack_param_b;
    param_a = stack_param_a;
    if (next_command != (longlong *)0x0) {
        command_ptr = next_command + 1;
        param_e = queue_param_b;
        param_f = queue_param_a;
        param_g = param_d;
        param_h = param_c;
    }
    while (stack_param_c = param_h, stack_param_d = param_g, stack_param_a = param_f,
           stack_param_b = param_e, processed_value = base_time, command_ptr != queue_ptr) {
        next_command = command_ptr + -1;
        if (command_ptr == (longlong *)0x0) {
            next_command = base_context;
        }
        scale_factor = (float)(**(code **)(*next_command + 8))(next_command);
        if (processing_mode == 0) {
            result_value = (**(code **)*next_command)(next_command);
            parameter_type = *(int *)(result_value + 0x48);
            if (render_object == 0) {
                time_value = MAX_FLOAT_THRESHOLD;
            }
            else {
                time_value = (float)func_0x0001808c64d0();
            }
            scale_factor = scale_factor * time_value * 0.01f;
            if ((parameter_type == 0) && (render_mode == 4)) {
                queue_time = queue_time * scale_factor;
            }
            else {
                accumulated_time = base_time + scale_factor;
                processed_value = accumulated_time;
            }
        }
        else if (processing_mode == 1) {
            if (render_object != 0) {
                scale_factor = (float)func_0x0001808c6590(scale_factor, scale_factor);
            }
            processed_value = render_time;
            accumulated_time = render_time;
            if ((base_time != render_time) && (MIN_FLOAT_THRESHOLD < scale_factor)) {
                accumulated_time = base_time + scale_factor;
                processed_value = accumulated_time;
            }
        }
        render_context = context_data;
        queue_base = queue_context;
        queue_count = processing_mode;
        final_time = queue_time;
        param_a = stack_param_a;
        param_b = stack_param_b;
        param_c = stack_param_c;
        param_d = stack_param_d;
        if (command_ptr == queue_ptr) break;
        next_command = (longlong *)(*command_ptr + -8);
        if (*command_ptr == 0) {
            next_command = base_context;
        }
        command_ptr = base_context;
        param_e = stack_param_b;
        param_f = stack_param_a;
        param_g = stack_param_d;
        param_h = stack_param_c;
        base_time = processed_value;
        if (next_command != (longlong *)0x0) {
            command_ptr = next_command + 1;
        }
    }
    stack_param_d = param_d;
    stack_param_c = param_c;
    stack_param_b = param_b;
    stack_param_a = param_a;
    render_mode = matrix_index;
    time_value = (float)rendering_system_calculate_interpolation(&render_parameter);
    scale_factor = time_value;
    do {
        calculated_value = *(float *)(&render_parameter + 0x12 + (longlong)base_context * 4);
        if (calculated_value != queue_time) {
            time_value = (float)rendering_system_calculate_interpolation(&render_parameter,
                                                                         *(undefined4 *)(&render_parameter + 0x10 + (longlong)base_context * 4),
                                                                         render_mode + 1);
            time_value = (time_value - scale_factor) * calculated_value;
            scale_factor = scale_factor + time_value;
        }
        base_context = (longlong *)((longlong)base_context + 1);
    } while ((longlong)base_context < 2);
    if (queue_count == 1) {
        calculated_value = scale_factor;
        if (((MIN_FLOAT_THRESHOLD < scale_factor) && (calculated_value = render_time, scale_factor != render_time)) &&
           (MIN_FLOAT_THRESHOLD < processed_value)) {
            calculated_value = scale_factor + processed_value;
        }
    }
    else {
        calculated_value = (processed_value + scale_factor) * queue_time;
        if ((queue_count == 0) && (render_object != 0)) {
            calculated_value = (float)func_0x0001808c6590(time_value, calculated_value);
        }
    }
    if ((calculated_value != *(float *)(queue_base + 0x54)) ||
       (state_flag = rendering_system_check_state(queue_base, render_context), state_flag != '\0')) {
        *(float *)(queue_base + 0x54) = calculated_value;
        if ((*(uint *)(queue_base + 0x5c) >> 3 & 1) == 0) {
            func_0x0001808b20c0(queue_base, calculated_value, render_context);
        }
        else {
            (**(code **)(**(longlong **)(queue_base + 0x28) + 0x10))
                      (*(longlong **)(queue_base + 0x28), queue_base);
        }
    }
    func_0x0001808fc050(stack_ptr ^ (ulonglong)&render_parameter);
}

/**
 * 渲染系统清理函数
 * 功能：清理渲染系统的状态和资源
 * 参数：无
 * 返回值：无
 * 说明：该函数负责释放渲染系统占用的资源，重置状态标志
 */
void rendering_system_cleanup(void) {
    longlong *queue_ptr;
    int parameter_type;
    longlong *command_ptr;
    int render_mode;
    undefined4 param_a;
    undefined4 param_b;
    undefined4 param_c;
    undefined4 param_d;
    undefined4 param_e;
    undefined4 param_f;
    undefined4 param_g;
    undefined4 param_h;
    char state_flag;
    longlong context_ptr;
    longlong result_value;
    undefined8 render_context;
    longlong *next_command;
    longlong *base_context;
    longlong queue_base;
    int queue_count;
    longlong render_object;
    float scale_factor;
    float time_value;
    float calculated_value;
    float base_time;
    float render_time;
    float processed_value;
    float queue_time;
    undefined4 queue_param_a;
    undefined4 queue_param_b;
    int processing_mode;
    undefined8 context_data;
    longlong queue_context;
    int render_parameter;
    float accumulated_time;
    float final_time;
    int matrix_index;
    ulonglong stack_ptr;
    undefined4 stack_param_a;
    undefined4 stack_param_b;
    undefined4 stack_param_c;
    undefined4 stack_param_d;
    bool cleanup_flag;
    
    render_mode = render_parameter;
    queue_ptr = (longlong *)(queue_base + 0x38);
    next_command = (longlong *)(context_ptr + -8);
    if (cleanup_flag) {
        next_command = base_context;
    }
    command_ptr = base_context;
    param_e = queue_param_b;
    param_f = queue_param_a;
    param_g = param_d;
    param_h = param_c;
    param_d = stack_param_d;
    param_c = stack_param_c;
    param_b = stack_param_b;
    param_a = stack_param_a;
    if (next_command != (longlong *)0x0) {
        command_ptr = next_command + 1;
        param_e = queue_param_b;
        param_f = queue_param_a;
        param_g = param_d;
        param_h = param_c;
    }
    while (stack_param_c = param_h, stack_param_d = param_g, stack_param_a = param_f,
           stack_param_b = param_e, processed_value = base_time, command_ptr != queue_ptr) {
        next_command = command_ptr + -1;
        if (command_ptr == (longlong *)0x0) {
            next_command = base_context;
        }
        scale_factor = (float)(**(code **)(*next_command + 8))(next_command);
        if (processing_mode == 0) {
            result_value = (**(code **)*next_command)(next_command);
            parameter_type = *(int *)(result_value + 0x48);
            if (render_object == 0) {
                time_value = MAX_FLOAT_THRESHOLD;
            }
            else {
                time_value = (float)func_0x0001808c64d0();
            }
            scale_factor = scale_factor * time_value * 0.01f;
            if ((parameter_type == 0) && (render_mode == 4)) {
                queue_time = queue_time * scale_factor;
            }
            else {
                accumulated_time = base_time + scale_factor;
                processed_value = accumulated_time;
            }
        }
        else if (processing_mode == 1) {
            if (render_object != 0) {
                scale_factor = (float)func_0x0001808c6590(scale_factor, scale_factor);
            }
            processed_value = render_time;
            accumulated_time = render_time;
            if ((base_time != render_time) && (MIN_FLOAT_THRESHOLD < scale_factor)) {
                accumulated_time = base_time + scale_factor;
                processed_value = accumulated_time;
            }
        }
        render_context = context_data;
        queue_base = queue_context;
        queue_count = processing_mode;
        final_time = queue_time;
        param_a = stack_param_a;
        param_b = stack_param_b;
        param_c = stack_param_c;
        param_d = stack_param_d;
        if (command_ptr == queue_ptr) break;
        next_command = (longlong *)(*command_ptr + -8);
        if (*command_ptr == 0) {
            next_command = base_context;
        }
        command_ptr = base_context;
        param_e = stack_param_b;
        param_f = stack_param_a;
        param_g = stack_param_d;
        param_h = stack_param_c;
        base_time = processed_value;
        if (next_command != (longlong *)0x0) {
            command_ptr = next_command + 1;
        }
    }
    stack_param_d = param_d;
    stack_param_c = param_c;
    stack_param_b = param_b;
    stack_param_a = param_a;
    render_mode = matrix_index;
    time_value = (float)rendering_system_calculate_interpolation(&render_parameter);
    scale_factor = time_value;
    do {
        calculated_value = *(float *)(&render_parameter + 0x12 + (longlong)base_context * 4);
        if (calculated_value != queue_time) {
            time_value = (float)rendering_system_calculate_interpolation(&render_parameter,
                                                                         *(undefined4 *)(&render_parameter + 0x10 + (longlong)base_context * 4),
                                                                         render_mode + 1);
            time_value = (time_value - scale_factor) * calculated_value;
            scale_factor = scale_factor + time_value;
        }
        base_context = (longlong *)((longlong)base_context + 1);
    } while ((longlong)base_context < 2);
    if (queue_count == 1) {
        calculated_value = scale_factor;
        if (((MIN_FLOAT_THRESHOLD < scale_factor) && (calculated_value = render_time, scale_factor != render_time)) &&
           (MIN_FLOAT_THRESHOLD < processed_value)) {
            calculated_value = scale_factor + processed_value;
        }
    }
    else {
        calculated_value = (processed_value + scale_factor) * queue_time;
        if ((queue_count == 0) && (render_object != 0)) {
            calculated_value = (float)func_0x0001808c6590(time_value, calculated_value);
        }
    }
    if ((calculated_value != *(float *)(queue_base + 0x54)) ||
       (state_flag = rendering_system_check_state(queue_base, render_context), state_flag != '\0')) {
        *(float *)(queue_base + 0x54) = calculated_value;
        if ((*(uint *)(queue_base + 0x5c) >> 3 & 1) == 0) {
            func_0x0001808b20c0(queue_base, calculated_value, render_context);
        }
        else {
            (**(code **)(**(longlong **)(queue_base + 0x28) + 0x10))
                      (*(longlong **)(queue_base + 0x28), queue_base);
        }
    }
    func_0x0001808fc050(stack_ptr ^ (ulonglong)&render_parameter);
}

/**
 * 渲染系统状态重置函数
 * 功能：重置渲染系统到初始状态
 * 参数：无
 * 返回值：无
 * 说明：该函数负责将渲染系统的所有状态重置为默认值
 */
void rendering_system_reset_state(void) {
    int parameter_type;
    char state_flag;
    longlong result_value;
    int render_mode;
    longlong *queue_ptr;
    longlong *command_ptr;
    longlong *base_context;
    longlong *queue_context;
    int queue_count;
    longlong render_object;
    float scale_factor;
    float time_value;
    float calculated_value;
    float base_time;
    float processed_value;
    float queue_time;
    float render_time;
    float threshold_value;
    int processing_mode;
    undefined8 context_data;
    longlong queue_base;
    float render_parameter;
    float accumulated_time;
    ulonglong stack_ptr;
    
    do {
        command_ptr = queue_ptr + -1;
        if (queue_ptr == (longlong *)0x0) {
            command_ptr = base_context;
        }
        scale_factor = (float)(**(code **)(*command_ptr + 8))(command_ptr);
        processed_value = base_time;
        if (render_mode == 0) {
            result_value = (**(code **)*command_ptr)(command_ptr);
            parameter_type = *(int *)(result_value + 0x48);
            if (render_object == 0) {
                time_value = MAX_FLOAT_THRESHOLD;
            }
            else {
                time_value = (float)func_0x0001808c64d0();
            }
            scale_factor = scale_factor * time_value * 0.01f;
            if ((parameter_type == 0) && (queue_count == 4)) {
                queue_time = queue_time * scale_factor;
            }
            else {
                render_parameter = base_time + scale_factor;
                processed_value = render_parameter;
            }
        }
        else if (render_mode == 1) {
            if (render_object != 0) {
                scale_factor = (float)func_0x0001808c6590(scale_factor, scale_factor);
            }
            processed_value = render_time;
            render_parameter = render_time;
            if ((base_time != render_time) && (threshold_value < scale_factor)) {
                render_parameter = base_time + scale_factor;
                processed_value = render_parameter;
            }
        }
        parameter_type = queue_count;
        if (queue_ptr == queue_context) break;
        command_ptr = (longlong *)(*queue_ptr + -8);
        if (*queue_ptr == 0) {
            command_ptr = base_context;
        }
        queue_ptr = base_context;
        if (command_ptr != (longlong *)0x0) {
            queue_ptr = command_ptr + 1;
        }
        base_time = processed_value;
    } while (queue_ptr != queue_context);
    accumulated_time = queue_time;
    time_value = (float)rendering_system_calculate_interpolation(&render_parameter);
    scale_factor = time_value;
    do {
        calculated_value = *(float *)(&render_parameter + 0x12 + (longlong)base_context * 4);
        if (calculated_value != queue_time) {
            time_value = (float)rendering_system_calculate_interpolation(&render_parameter,
                                                                         *(undefined4 *)(&render_parameter + 0x10 + (longlong)base_context * 4),
                                                                         parameter_type + 1);
            time_value = (time_value - scale_factor) * calculated_value;
            scale_factor = scale_factor + time_value;
        }
        base_context = (longlong *)((longlong)base_context + 1);
    } while ((longlong)base_context < 2);
    if (processing_mode == 1) {
        calculated_value = scale_factor;
        if (((threshold_value < scale_factor) && (calculated_value = render_time, scale_factor != render_time)) &&
           (threshold_value < processed_value)) {
            calculated_value = scale_factor + processed_value;
        }
    }
    else {
        calculated_value = (processed_value + scale_factor) * queue_time;
        if ((processing_mode == 0) && (render_object != 0)) {
            calculated_value = (float)func_0x0001808c6590(time_value, calculated_value);
        }
    }
    if ((calculated_value != *(float *)(queue_base + 0x54)) ||
       (state_flag = rendering_system_check_state(queue_base, context_data), state_flag != '\0')) {
        *(float *)(queue_base + 0x54) = calculated_value;
        if ((*(uint *)(queue_base + 0x5c) >> 3 & 1) == 0) {
            func_0x0001808b20c0(queue_base, calculated_value, context_data);
        }
        else {
            (**(code **)(**(longlong **)(queue_base + 0x28) + 0x10))
                      (*(longlong **)(queue_base + 0x28), queue_base);
        }
    }
    func_0x0001808fc050(stack_ptr ^ (ulonglong)&render_parameter);
}

/**
 * 渲染系统命令处理函数
 * 功能：处理渲染命令队列中的命令
 * 参数：command_data - 命令数据指针
 *       render_context - 渲染上下文指针
 * 返回值：无
 * 说明：该函数负责执行渲染命令队列中的各个命令
 */
void rendering_system_process_command(void* command_data, void* render_context) {
    int parameter_type;
    char state_flag;
    longlong context_ptr;
    longlong queue_base;
    int queue_count;
    longlong render_object;
    float scale_factor;
    float extraout_value;
    float calculated_value;
    float time_value;
    float base_time;
    float processed_value;
    float queue_time;
    float render_time;
    float threshold_value;
    int matrix_index;
    ulonglong stack_ptr;
    
    parameter_type = matrix_index;
    scale_factor = (float)rendering_system_calculate_interpolation(&render_parameter, render_context, matrix_index);
    time_value = scale_factor;
    do {
        calculated_value = *(float *)(&render_parameter + 0x12 + context_ptr * 4);
        if (calculated_value != queue_time) {
            scale_factor = (float)rendering_system_calculate_interpolation(&render_parameter,
                                                                          *(undefined4 *)(&render_parameter + 0x10 + context_ptr * 4),
                                                                          parameter_type + 1);
            scale_factor = (scale_factor - time_value) * calculated_value;
            time_value = time_value + scale_factor;
        }
        context_ptr = context_ptr + 1;
    } while (context_ptr < 2);
    if (queue_count == 1) {
        calculated_value = time_value;
        if (((threshold_value < time_value) && (calculated_value = render_time, time_value != render_time)) &&
           (threshold_value < base_time)) {
            calculated_value = time_value + base_time;
        }
    }
    else {
        calculated_value = (base_time + time_value) * queue_time;
        if ((queue_count == 0) && (render_object != 0)) {
            scale_factor = (float)func_0x0001808c6590(scale_factor, calculated_value);
            calculated_value = scale_factor;
        }
    }
    if ((calculated_value != *(float *)(queue_base + 0x54)) ||
       (state_flag = rendering_system_check_state(), scale_factor = extraout_value, state_flag != '\0')) {
        *(float *)(queue_base + 0x54) = calculated_value;
        if ((*(uint *)(queue_base + 0x5c) >> 3 & 1) == 0) {
            func_0x0001808b20c0(scale_factor, calculated_value);
        }
        else {
            (**(code **)(**(longlong **)(queue_base + 0x28) + 0x10))();
        }
    }
    func_0x0001808fc050(stack_ptr ^ (ulonglong)&render_parameter);
}

/**
 * 渲染系统时间缩放设置函数
 * 功能：设置渲染系统的时间缩放比例
 * 参数：time_scale - 时间缩放比例
 * 返回值：无
 * 说明：该函数负责调整渲染系统的时间缩放参数
 */
void rendering_system_set_time_scale(float time_scale) {
    char state_flag;
    int render_mode;
    longlong context_ptr;
    longlong queue_base;
    int queue_count;
    longlong render_object;
    float calculated_value;
    float extraout_value;
    float scale_factor;
    float base_time;
    float processed_value;
    float queue_time;
    float render_time;
    float threshold_value;
    ulonglong stack_ptr;
    
    do {
        processed_value = *(float *)(&render_parameter + 0x12 + context_ptr * 4);
        if (processed_value != queue_time) {
            calculated_value = (float)rendering_system_calculate_interpolation(&render_parameter,
                                                                               *(undefined4 *)(&render_parameter + 0x10 + context_ptr * 4),
                                                                               render_mode + 1);
            time_scale = (calculated_value - scale_factor) * processed_value;
            scale_factor = scale_factor + time_scale;
        }
        context_ptr = context_ptr + 1;
    } while (context_ptr < 2);
    if (queue_count == 1) {
        processed_value = scale_factor;
        if (((threshold_value < scale_factor) &&
            (processed_value = render_time, scale_factor != render_time)) &&
           (threshold_value < base_time)) {
            processed_value = scale_factor + base_time;
        }
    }
    else {
        processed_value = (base_time + scale_factor) * queue_time;
        if ((queue_count == 0) && (render_object != 0)) {
            time_scale = (float)func_0x0001808c6590(time_scale, processed_value);
            processed_value = time_scale;
        }
    }
    if ((processed_value != *(float *)(queue_base + 0x54)) ||
       (state_flag = rendering_system_check_state(), time_scale = extraout_value, state_flag != '\0')) {
        *(float *)(queue_base + 0x54) = processed_value;
        if ((*(uint *)(queue_base + 0x5c) >> 3 & 1) == 0) {
            func_0x0001808b20c0(time_scale, processed_value);
        }
        else {
            (**(code **)(**(longlong **)(queue_base + 0x28) + 0x10))();
        }
    }
    func_0x0001808fc050(stack_ptr ^ (ulonglong)&render_parameter);
}

/**
 * 渲染系统队列更新函数
 * 功能：更新渲染命令队列的状态
 * 参数：无
 * 返回值：无
 * 说明：该函数负责更新渲染命令队列中的各个命令状态
 */
void rendering_system_update_queue(void) {
    char state_flag;
    longlong queue_base;
    float scale_factor;
    float calculated_value;
    float base_time;
    float processed_value;
    float queue_time;
    float render_time;
    float threshold_value;
    ulonglong stack_ptr;
    
    calculated_value = scale_factor;
    if (((threshold_value < scale_factor) && (calculated_value = render_time, scale_factor != render_time)
        ) && (threshold_value < base_time)) {
        calculated_value = scale_factor + base_time;
    }
    if ((calculated_value != *(float *)(queue_base + 0x54)) || (state_flag = rendering_system_check_state(), state_flag != '\0')) {
        *(float *)(queue_base + 0x54) = calculated_value;
        if ((*(uint *)(queue_base + 0x5c) >> 3 & 1) == 0) {
            func_0x0001808b20c0();
        }
        else {
            (**(code **)(**(longlong **)(queue_base + 0x28) + 0x10))();
        }
    }
    func_0x0001808fc050(stack_ptr ^ (ulonglong)&render_parameter);
}

/**
 * 渲染系统命令刷新函数
 * 功能：刷新渲染命令队列
 * 参数：无
 * 返回值：无
 * 说明：该函数负责清空渲染命令队列中的所有命令
 */
void rendering_system_flush_commands(void) {
    char state_flag;
    longlong queue_base;
    undefined4 queue_param;
    ulonglong stack_ptr;
    
    state_flag = rendering_system_check_state();
    if (state_flag != '\0') {
        *(undefined4 *)(queue_base + 0x54) = queue_param;
        if ((*(uint *)(queue_base + 0x5c) >> 3 & 1) == 0) {
            func_0x0001808b20c0();
        }
        else {
            (**(code **)(**(longlong **)(queue_base + 0x28) + 0x10))();
        }
    }
    func_0x0001808fc050(stack_ptr ^ (ulonglong)&render_parameter);
}

/**
 * 渲染系统矩阵分配函数
 * 功能：为渲染系统分配变换矩阵
 * 参数：matrix_id - 矩阵ID
 *       matrix_data - 矩阵数据指针
 * 返回值：分配结果状态码
 * 说明：该函数负责为渲染系统分配和管理变换矩阵资源
 */
uint64_t rendering_system_allocate_matrix(int64_t matrix_id, int64_t* matrix_data) {
    longlong *queue_ptr;
    undefined8 *context_ptr;
    char allocation_flag;
    longlong *command_ptr;
    undefined8 result_value;
    longlong *next_command;
    longlong *stack_ptr;
    
    queue_ptr = (longlong *)(matrix_id + 0x10);
    next_command = (longlong *)0x0;
    stack_ptr = (longlong *)(*(longlong *)(matrix_id + 0x10) + -8);
    if (*(longlong *)(matrix_id + 0x10) == 0) {
        stack_ptr = next_command;
    }
    if (stack_ptr == (longlong *)0x0) {
        stack_ptr = (longlong *)0x0;
    }
    else {
        stack_ptr = stack_ptr + 1;
    }
    if (stack_ptr == queue_ptr) {
        if (stack_ptr != queue_ptr) {
            *(longlong *)stack_ptr[1] = *stack_ptr;
            *(longlong *)(*stack_ptr + 8) = stack_ptr[1];
            stack_ptr[1] = (longlong)stack_ptr;
            *stack_ptr = (longlong)stack_ptr;
            allocation_flag = func_0x0001808b22c0(matrix_id);
            if (allocation_flag == '\0') {
                for (context_ptr = *(undefined8 **)(matrix_id + 0x20); context_ptr != (undefined8 *)(matrix_id + 0x20);
                    context_ptr = (undefined8 *)*context_ptr) {
                    result_value = func_0x0001808b3060(context_ptr, 0);
                    if ((int)result_value != 0) {
                        return result_value;
                    }
                    if (context_ptr == (undefined8 *)(matrix_id + 0x20)) {
                        return 0;
                    }
                }
            }
            return 0;
        }
    }
    else {
        do {
            command_ptr = stack_ptr + -1;
            if (stack_ptr == (longlong *)0x0) {
                command_ptr = next_command;
            }
            if (command_ptr == matrix_data) {
                if (stack_ptr != queue_ptr) {
                    *(longlong *)stack_ptr[1] = *stack_ptr;
                    *(longlong *)(*stack_ptr + 8) = stack_ptr[1];
                    stack_ptr[1] = (longlong)stack_ptr;
                    *stack_ptr = (longlong)stack_ptr;
                    allocation_flag = func_0x0001808b22c0(matrix_id);
                    if (allocation_flag == '\0') {
                        for (context_ptr = *(undefined8 **)(matrix_id + 0x20); context_ptr != (undefined8 *)(matrix_id + 0x20);
                            context_ptr = (undefined8 *)*context_ptr) {
                            result_value = func_0x0001808b3060(context_ptr, 0);
                            if ((int)result_value != 0) {
                                return result_value;
                            }
                            if (context_ptr == (undefined8 *)(matrix_id + 0x20)) {
                                return 0;
                            }
                        }
                    }
                    return 0;
                }
            }
            if (stack_ptr == queue_ptr) {
                return 0x1c;
            }
            command_ptr = (longlong *)(*stack_ptr + -8);
            if (*stack_ptr == 0) {
                command_ptr = next_command;
            }
            stack_ptr = next_command;
            if (command_ptr != (longlong *)0x0) {
                stack_ptr = command_ptr + 1;
            }
        } while (stack_ptr != queue_ptr);
    }
    return 0x1c;
}

/**
 * 渲染系统矩阵变换函数
 * 功能：对渲染系统的变换矩阵进行变换操作
 * 参数：matrix_id - 矩阵ID
 *       transform_data - 变换数据
 * 返回值：变换结果状态码
 * 说明：该函数负责对渲染系统的变换矩阵进行各种变换操作
 */
uint64_t rendering_system_transform_matrix(int64_t matrix_id, int64_t transform_data) {
    longlong *queue_ptr;
    char transform_flag;
    longlong result_value;
    longlong command_data;
    uint transform_param;
    longlong *command_ptr;
    float *matrix_data;
    longlong matrix_offset;
    longlong *next_command;
    undefined4 transform_result;
    float transform_stack[2];
    
    next_command = (longlong *)0x0;
    command_ptr = (longlong *)(*(longlong *)(matrix_id + 0x10) + -8);
    if (*(longlong *)(matrix_id + 0x10) == 0) {
        command_ptr = next_command;
    }
    queue_ptr = next_command;
    if (command_ptr != (longlong *)0x0) {
        queue_ptr = command_ptr + 1;
    }
    do {
        if (queue_ptr == (longlong *)(matrix_id + 0x10)) {
            return 0;
        }
        command_ptr = queue_ptr + -1;
        if (queue_ptr == (longlong *)0x0) {
            command_ptr = next_command;
        }
        transform_flag = (**(code **)(*command_ptr + 8))(command_ptr);
        if (transform_flag != '\0') {
            *(int *)(transform_data + 0x28) = *(int *)(transform_data + 0x28) + 1;
            transform_stack[0] = 0.0f;
            transform_result = (**(code **)(*command_ptr + 0x10))(command_ptr, transform_stack);
            if ((*(int *)(transform_data + 4) == 1) && (*(longlong *)(transform_data + 0x30) != 0)) {
                transform_result = func_0x0001808c6590(*(longlong *)(transform_data + 0x30), transform_result);
            }
            matrix_data = (float *)(transform_data + 0x18);
            if (transform_stack[0] == 1.0f) {
                func_0x0001808b2d60(transform_data, transform_result, transform_data + 0xc);
                result_value = transform_data + 0x10;
                matrix_offset = 2;
                do {
                    if (*matrix_data != 0.0f) {
                        func_0x0001808b2d60(transform_data, transform_result, result_value);
                    }
                    result_value = result_value + 4;
                    matrix_data = matrix_data + 1;
                    matrix_offset = matrix_offset + -1;
                } while (matrix_offset != 0);
            }
            else {
                if (*matrix_data == 0.0f) {
                    result_value = 0x18;
                    transform_param = 0x10;
                }
                else {
                    result_value = 0x1c;
                    transform_param = 0x14;
                }
                if (*(float *)(result_value + transform_data) != 0.0f) {
                    return 0x1c;
                }
                *(float *)(result_value + transform_data) = transform_stack[0];
                *(undefined4 *)((ulonglong)transform_param + transform_data) = *(undefined4 *)(transform_data + 0xc);
                func_0x0001808b2d60(transform_data, transform_result);
                *(int *)(transform_data + 0x28) = *(int *)(transform_data + 0x28) + -1;
            }
        }
        if (queue_ptr == (longlong *)(matrix_id + 0x10)) {
            return 0;
        }
        command_ptr = (longlong *)(*queue_ptr + -8);
        if (*queue_ptr == 0) {
            command_ptr = next_command;
        }
        queue_ptr = command_ptr + 1;
        if (command_ptr == (longlong *)0x0) {
            queue_ptr = next_command;
        }
    } while( true );
}

/**
 * 渲染系统插值计算函数
 * 功能：计算渲染系统中的插值参数
 * 参数：state_data - 状态数据指针
 *       target_value - 目标值
 *       interpolation_mode - 插值模式
 * 返回值：计算得到的插值结果
 * 说明：该函数负责根据不同的插值模式计算渲染参数的插值结果
 */
float rendering_system_calculate_interpolation(uint32_t* state_data, float target_value, int interpolation_mode) {
    float result_value;
    
    if (interpolation_mode < 1) {
        result_value = (float)state_data[2];
        if ((state_data[1] == 0) && (*(longlong *)(state_data + 0xc) != 0)) {
            result_value = (float)func_0x0001808c6500(*(longlong *)(state_data + 0xc), result_value);
        }
        return result_value;
    }
    switch(*state_data) {
        case 0:
        case 1:
        case 4:
        case 5:
            return target_value;
        case 2:
            if (state_data[1] != 1) {
                if (*(longlong *)(state_data + 0xc) == 0) {
                    return target_value + 0.0f;
                }
                result_value = (float)func_0x0001808c6500(*(longlong *)(state_data + 0xc), 0);
                return result_value + target_value;
            }
            if (target_value <= MIN_FLOAT_THRESHOLD) {
                target_value = MIN_FLOAT_THRESHOLD;
            }
            return target_value;
        case 3:
            return target_value / (float)interpolation_mode;
        default:
            return 0.0f;
    }
}

/**
 * 渲染系统渲染目标设置函数
 * 功能：设置渲染系统的渲染目标
 * 参数：render_context - 渲染上下文指针
 *       render_target - 渲染目标参数
 * 返回值：设置结果状态码
 * 说明：该函数负责设置渲染系统的渲染目标参数
 */
int rendering_system_set_render_target(int64_t* render_context, int64_t render_target) {
    longlong *queue_ptr;
    int result_code;
    int status_code;
    
    if (render_target == render_context[9]) {
        return 0;
    }
    if (render_context[9] != 0) {
        *(longlong *)render_context[1] = *render_context;
        *(longlong *)(*render_context + 8) = render_context[1];
        render_context[1] = (longlong)render_context;
        *render_context = (longlong)render_context;
        func_0x0001808b22c0();
    }
    render_context[9] = render_target;
    if (render_target == 0) {
        return 0;
    }
    queue_ptr = (longlong *)*render_context;
    status_code = 0;
    if (queue_ptr != render_context) {
        result_code = 0;
        do {
            queue_ptr = (longlong *)*queue_ptr;
            result_code = result_code + 1;
        } while (queue_ptr != render_context);
        if (result_code != 0) {
            status_code = 0x1c;
            return status_code;
        }
    }
    render_context[1] = *(longlong *)(render_target + 0x28);
    *render_context = render_target + 0x20;
    *(longlong **)(render_target + 0x28) = render_context;
    *(longlong **)render_context[1] = render_context;
    if (status_code == 0) {
        return 0;
    }
    return status_code;
}

/**
 * 渲染系统状态检查函数
 * 功能：检查渲染系统的当前状态
 * 参数：context - 渲染上下文
 *       parameter - 检查参数
 * 返回值：状态检查结果
 * 说明：该函数负责检查渲染系统的当前状态是否符合要求
 */
uint8_t rendering_system_check_state(longlong context, longlong parameter) {
    char state_flag;
    
    if (((*(uint *)(context + 0x5c) >> 1 & 1) == 0) || (parameter != 0)) {
        return 1;
    }
    state_flag = (**(code **)(**(longlong **)(context + 0x28) + 0x20))();
    if ((state_flag == '\0') && (state_flag = func_0x0001808b2c50(context), state_flag == '\0')) {
        return 1;
    }
    return 0;
}

/**
 * 渲染系统参数设置函数
 * 功能：设置渲染系统的参数
 * 参数：render_context - 渲染上下文
 *       param_a - 参数A
 *       param_b - 参数B
 *       param_c - 参数C
 * 返回值：无
 * 说明：该函数负责设置渲染系统的各种参数
 */
void rendering_system_set_parameters(longlong render_context, undefined4 param_a, undefined4 param_b, char param_c) {
    undefined4 render_mode;
    
    render_mode = 5;
    if ((param_c != '\0') && (render_mode = 5, *(short *)(*(longlong *)(render_context + 0x20) + 0x4a) == 1)) {
        render_mode = 4;
    }
    func_0x0001808b1d10(render_context, render_context + 0x58, param_a, param_b, render_mode, 0, 0, 0);
    return;
}

/**
 * 渲染系统队列处理函数
 * 功能：处理渲染系统队列中的项目
 * 参数：queue_ptr - 队列指针
 * 返回值：无
 * 说明：该函数负责处理渲染系统队列中的各个项目
 */
void rendering_system_process_queue(longlong *queue_ptr) {
    undefined8 *context_ptr;
    longlong queue_data;
    int process_status;
    undefined8 result_value;
    longlong process_data;
    
    context_ptr = (undefined8 *)queue_ptr[1];
    if ((((context_ptr != (undefined8 *)0x0) && (queue_data = *queue_ptr, queue_data != 0)) &&
        ((context_ptr[0xb] == 0 ||
         (((*(uint *)(context_ptr + 0x11) >> 2 & 1) == 0 || (process_status = func_0x0001808b4e20(context_ptr), process_status == 0))))))
        && ((context_ptr[9] == 0 ||
            (((*(int *)(context_ptr + 0xe) == -1 && (*(int *)((longlong)context_ptr + 0x74) == -1)) ||
             (process_status = func_0x000180862910(context_ptr[9], context_ptr), process_status == 0)))))) {
        result_value = (**(code **)*context_ptr)(context_ptr);
        process_status = func_0x0001808b5a30(context_ptr, result_value);
        if (process_status == 0) {
            if (context_ptr[6] != 0) {
                process_status = func_0x000180740d90();
                if (process_status != 0) {
                    return;
                }
                context_ptr[6] = 0;
            }
            process_data = (**(code **)*context_ptr)(context_ptr);
            if (*(short *)(process_data + 0xc) == 7) {
                result_value = (**(code **)*context_ptr)(context_ptr);
                process_status = func_0x0001808b4d60(context_ptr, result_value);
                if (process_status != 0) {
                    return;
                }
            }
            *(uint *)(context_ptr + 0x11) = *(uint *)(context_ptr + 0x11) | 0x80000000;
            process_status = func_0x0001808b5780(*(undefined8 *)(queue_data + 8), context_ptr);
            if (process_status == 0) {
                func_0x0001808bef30(*(undefined8 *)(queue_data + 0x10), context_ptr);
            }
        }
    }
    return;
}

/**
 * 渲染系统队列清理函数
 * 功能：清理渲染系统队列
 * 参数：queue_ptr - 队列指针
 * 返回值：无
 * 说明：该函数负责清理渲染系统队列中的项目
 */
void rendering_system_cleanup_queue(longlong *queue_ptr) {
    longlong queue_data;
    int process_status;
    longlong process_data;
    undefined8 *context_ptr;
    
    queue_data = *queue_ptr;
    if (queue_data != 0) {
        if (((context_ptr[0xb] != 0) && ((*(uint *)(context_ptr + 0x11) >> 2 & 1) != 0)) &&
           (process_status = func_0x0001808b4e20(), process_status != 0)) {
            return;
        }
        if (((context_ptr[9] != 0) &&
            ((*(int *)(context_ptr + 0xe) != -1 || (*(int *)((longlong)context_ptr + 0x74) != -1)))) &&
           (process_status = func_0x000180862910(), process_status != 0)) {
            return;
        }
        (**(code **)*context_ptr)();
        process_status = func_0x0001808b5a30();
        if (process_status == 0) {
            if (context_ptr[6] != 0) {
                process_status = func_0x000180740d90();
                if (process_status != 0) {
                    return;
                }
                context_ptr[6] = 0;
            }
            process_data = (**(code **)*context_ptr)();
            if (*(short *)(process_data + 0xc) == 7) {
                (**(code **)*context_ptr)();
                process_status = func_0x0001808b4d60();
                if (process_status != 0) {
                    return;
                }
            }
            *(uint *)(context_ptr + 0x11) = *(uint *)(context_ptr + 0x11) | 0x80000000;
            process_status = func_0x0001808b5780(*(undefined8 *)(queue_data + 8));
            if (process_status == 0) {
                func_0x0001808bef30(*(undefined8 *)(queue_data + 0x10));
            }
        }
    }
    return;
}