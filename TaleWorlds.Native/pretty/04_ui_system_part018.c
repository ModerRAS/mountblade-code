#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part018.c - UI系统高级控制和数据处理模块
// 包含9个核心函数，涵盖UI系统高级控制、数据处理、参数计算和资源管理等功能

// 常量定义
#define UI_SYSTEM_MAX_ITERATIONS 18
#define UI_SYSTEM_CONTROL_THRESHOLD 0.001f
#define UI_SYSTEM_SMOOTH_STEP_FACTOR 0.05f
#define UI_SYSTEM_TIME_OFFSET 0.2f
#define UI_SYSTEM_SCALE_FACTOR_MIN 0.7f
#define UI_SYSTEM_SCALE_FACTOR_MAX 1.3f
#define UI_SYSTEM_ARRAY_SIZE_9 9
#define UI_SYSTEM_ARRAY_SIZE_6 6

// 前向声明
void ui_system_process_control_data(void* context, void* target, void* parameters);
void ui_system_calculate_animation_values(void* context, float* input_data, uint32_t param1, uint32_t param2, uint32_t param3, float* output_data);
void ui_system_update_animation_state(void* context, void* animation_data);
void ui_system_check_animation_complete(void* animation_state);
void ui_system_initialize_animation_system(void);
void ui_system_process_batch_animations(longlong* animation_array, longlong context, uint64_t param1, longlong render_context, uint64_t param2, float intensity1, float intensity2, float duration, float amplitude, float frequency1, float frequency2, char enable_flag);
longlong ui_system_get_animation_data(longlong animation_handle);
void ui_system_calculate_batch_values(undefined8* value_array, undefined8 param1, undefined8 param2, undefined8 param3, undefined8 param4, uint32_t control_param1, uint32_t control_param2, float base_value, undefined8 param5, float scale_factor1, float scale_factor2, float scale_factor3, float scale_factor4, char condition_flag, longlong data_offset, int* best_index);
float ui_system_interpolate_value(longlong* value_array, float input_param);
float ui_system_calculate_smooth_interpolation(void);
void ui_system_reset_animation_state(void);
float ui_system_scale_value_by_parameter(longlong value_handle, float scale_factor);
longlong ui_system_cleanup_animation_data(longlong data_handle);
void ui_system_render_animation_frame(longlong render_context, undefined8 param1, undefined8 param2, longlong render_target, undefined8 param3, longlong animation_data);

// 辅助函数
float ui_system_smooth_step(float t) {
    return t * t * t * (t * (t * 6.0f - 15.0f) + 10.0f);
}

float ui_system_calculate_time_delta(float current_time, float start_time, float duration) {
    float delta = current_time - start_time;
    if (delta < 0.0f) {
        delta += 1.0f;
    }
    return delta;
}

/**
 * UI系统控制数据处理函数
 * 处理UI系统的控制数据，根据条件执行相应的控制逻辑
 * 
 * @param context 上下文指针
 * @param target 目标对象指针
 * @param parameters 参数指针
 */
void ui_system_process_control_data(void* context, void* target, void* parameters) {
    int iteration_count;
    longlong context_base;
    longlong* data_pointer;
    float* value_array;
    float threshold_value;
    float compare_value;
    
    // 循环处理控制数据，最多处理18次迭代
    do {
        // 检查数据有效性和比较条件
        if ((*data_pointer != 0) && (compare_value < threshold_value * *value_array)) {
            ui_system_trigger_control_action();
        }
        iteration_count++;
        value_array++;
        data_pointer++;
    } while (iteration_count < UI_SYSTEM_MAX_ITERATIONS);
    
    // 执行最终的控制操作
    ui_system_execute_final_control(*(ulonglong*)(context_base + 0xfb0) ^ (ulonglong)&stack0x00000000);
}

/**
 * UI系统动画值计算函数
 * 计算UI系统动画的插值和状态值
 * 
 * @param context 上下文指针
 * @param input_data 输入数据数组
 * @param param1 参数1（控制标志）
 * @param param2 参数2（渲染参数）
 * @param param3 参数3（动画参数）
 * @param output_data 输出数据数组
 */
void ui_system_calculate_animation_values(void* context, float* input_data, uint32_t param1, uint32_t param2, uint32_t param3, float* output_data) {
    float current_value;
    float next_value;
    char state_flag;
    float* output_pointer;
    longlong data_handle;
    undefined1 control_flag;
    undefined8* context_array;
    int index;
    float time_value;
    float duration;
    float start_time;
    float end_time;
    uint32_t render_param;
    float stack_time;
    uint32_t stack_param;
    
    // 初始化输出数组
    output_pointer = output_data;
    output_pointer[0] = 0.0f;
    output_pointer[1] = 0.0f;
    output_pointer[2] = 0.0f;
    output_pointer[3] = 0.0f;
    output_data[4] = 0.0f;
    output_pointer[6] = 0.0f;
    output_pointer[7] = 0.0f;
    output_pointer[8] = 0.0f;
    output_pointer[9] = 0.0f;
    output_data[10] = 0.0f;
    
    // 获取主要动画值
    current_value = *input_data;
    duration = input_data[9];
    
    // 处理有效持续时间
    if (0.0f < duration) {
        // 计算X轴动画值
        data_handle = ui_system_get_animation_data(*(undefined8*)(context + 0x48));
        end_time = *(float*)(data_handle + 0x14) - *(float*)(data_handle + 0x1c);
        if (end_time < 0.0f) {
            end_time += 1.0f;
        }
        start_time = *(float*)(data_handle + 0xc);
        data_handle = ui_system_get_animation_data(*(undefined8*)(context + 0x48));
        current_value = *(float*)(data_handle + 0x14);
        data_handle = ui_system_get_animation_data(*(undefined8*)(context + 0x48));
        output_data._0_4_ = current_value;
        output_data._4_4_ = fmodf(current_value + *(float*)(data_handle + 0xc), 0x3f800000);
        data_handle = ui_system_get_animation_data(*(undefined8*)(context + 0x48));
        ui_system_process_animation_values(output_pointer, *(undefined4*)(data_handle + 0xc), &output_data, end_time + start_time, param2, duration);
        
        // 计算Y轴动画值
        data_handle = ui_system_get_animation_data(*(undefined8*)(context + 0x48));
        end_time = *(float*)(data_handle + 0x18) - *(float*)(data_handle + 0x20);
        if (end_time < 0.0f) {
            end_time += 1.0f;
        }
        start_time = *(float*)(data_handle + 0x10);
        data_handle = ui_system_get_animation_data(*(undefined8*)(context + 0x48));
        current_value = *(float*)(data_handle + 0x18);
        data_handle = ui_system_get_animation_data(*(undefined8*)(context + 0x48));
        output_data._0_4_ = current_value;
        output_data._4_4_ = fmodf(current_value + *(float*)(data_handle + 0x10), 0x3f800000);
        data_handle = ui_system_get_animation_data(*(undefined8*)(context + 0x48));
        ui_system_process_animation_values(output_pointer + 6, *(undefined4*)(data_handle + 0x10), &output_data, end_time + start_time, param2, duration);
    }
    
    // 处理额外的动画值（最多8个）
    if (ui_system_smooth_step(current_value) + duration < 1.0f) {
        context_array = (undefined8*)(context + 8);
        index = 1;
        do {
            input_data++;
            current_value = *input_data;
            if (0.0f < current_value) {
                render_param = param3;
                if (1 < index - 7U) {
                    render_param = param1;
                }
                data_handle = ui_system_get_animation_data(*context_array);
                duration = *(float*)(data_handle + 0x14) - *(float*)(data_handle + 0x1c);
                if (duration < 0.0f) {
                    duration += 1.0f;
                }
                start_time = *(float*)(data_handle + 0xc);
                data_handle = ui_system_get_animation_data(*context_array);
                end_time = *(float*)(data_handle + 0x14);
                data_handle = ui_system_get_animation_data(*context_array);
                output_data._0_4_ = end_time;
                output_data._4_4_ = fmodf(end_time + *(float*)(data_handle + 0xc), 0x3f800000);
                data_handle = ui_system_get_animation_data(*context_array);
                ui_system_process_animation_values(output_pointer, *(undefined4*)(data_handle + 0xc), &output_data, duration + start_time, render_param, current_value);
                
                // 处理Y轴动画值
                current_value = *input_data;
                data_handle = ui_system_get_animation_data(*context_array);
                duration = *(float*)(data_handle + 0x18) - *(float*)(data_handle + 0x20);
                if (duration < 0.0f) {
                    duration += 1.0f;
                }
                start_time = *(float*)(data_handle + 0x10);
                data_handle = ui_system_get_animation_data(*context_array);
                end_time = *(float*)(data_handle + 0x18);
                data_handle = ui_system_get_animation_data(*context_array);
                stack_time = end_time;
                stack_param = fmodf(end_time + *(float*)(data_handle + 0x10), 0x3f800000);
                data_handle = ui_system_get_animation_data(*context_array);
                ui_system_process_animation_values(output_pointer + 6, *(undefined4*)(data_handle + 0x10), &stack_time, duration + start_time, render_param, current_value);
            }
            index++;
            context_array++;
        } while (index < UI_SYSTEM_ARRAY_SIZE_9);
    }
    
    // 检查动画状态
    state_flag = *(char*)((longlong)output_pointer + 0x16);
    current_value = 0.0f;
    if (state_flag == '\0') {
        duration = 0.0f;
    } else {
        duration = output_pointer[4] * UI_SYSTEM_SMOOTH_STEP_FACTOR;
    }
    end_time = *output_pointer;
    start_time = output_pointer[3];
    if ((end_time + duration < start_time) || (state_flag != '\0')) {
        control_flag = 0;
    } else {
        control_flag = 1;
    }
    *(undefined1*)(output_pointer + 5) = control_flag;
    
    if (state_flag != '\0') {
        current_value = output_pointer[4] * UI_SYSTEM_SMOOTH_STEP_FACTOR;
    }
    duration = end_time + UI_SYSTEM_TIME_OFFSET;
    *(bool*)((longlong)output_pointer + 0x16) = start_time <= end_time + current_value;
    if ((start_time <= duration) && (*(char*)((longlong)output_pointer + 0x17) == '\0')) {
        *(undefined1*)((longlong)output_pointer + 0x15) = 1;
        *(bool*)((longlong)output_pointer + 0x17) = start_time <= duration;
        return;
    }
    *(undefined1*)((longlong)output_pointer + 0x15) = 0;
    *(bool*)((longlong)output_pointer + 0x17) = start_time <= duration;
    return;
}

/**
 * UI系统动画状态更新函数
 * 更新UI系统动画的状态和控制标志
 * 
 * @param context 上下文指针
 * @param animation_data 动画数据指针
 */
void ui_system_update_animation_state(void* context, void* animation_data) {
    float current_value;
    float end_value;
    char state_flag;
    longlong data_handle;
    undefined1 control_flag;
    undefined8* context_array;
    longlong context_base;
    float* value_pointer;
    int index;
    float time_value;
    float duration;
    float start_time;
    undefined4 render_param;
    float stack_time;
    undefined4 stack_param;
    float threshold_value;
    undefined4 control_param1;
    undefined4 control_param2;
    float base_value;
    
    value_pointer = (float*)(context_base + 4);
    index = 1;
    
    // 处理动画值更新
    do {
        if (threshold_value < *value_pointer) {
            render_param = control_param1;
            if (1 < index - 7U) {
                render_param = control_param2;
            }
            data_handle = ui_system_get_animation_data(*context_array);
            duration = *(float*)(data_handle + 0x14) - *(float*)(data_handle + 0x1c);
            if (duration < threshold_value) {
                duration += base_value;
            }
            start_time = *(float*)(data_handle + 0xc);
            data_handle = ui_system_get_animation_data(*context_array);
            current_value = *(float*)(data_handle + 0x14);
            data_handle = ui_system_get_animation_data(*context_array);
            stack_time = current_value;
            stack_param = fmodf(current_value + *(float*)(data_handle + 0xc));
            data_handle = ui_system_get_animation_data(*context_array);
            ui_system_process_animation_values(render_param, *(undefined4*)(data_handle + 0xc), &stack_time, duration + start_time, render_param);
            
            data_handle = ui_system_get_animation_data(*context_array);
            duration = *(float*)(data_handle + 0x18) - *(float*)(data_handle + 0x20);
            if (duration < threshold_value) {
                duration += base_value;
            }
            start_time = *(float*)(data_handle + 0x10);
            data_handle = ui_system_get_animation_data(*context_array);
            current_value = *(float*)(data_handle + 0x18);
            data_handle = ui_system_get_animation_data(*context_array);
            base_value = current_value;
            stack_param = fmodf(current_value + *(float*)(data_handle + 0x10));
            data_handle = ui_system_get_animation_data(*context_array);
            ui_system_process_animation_values(value_pointer + 6, *(undefined4*)(data_handle + 0x10), &base_value, duration + start_time, render_param);
        }
        index++;
        value_pointer++;
        context_array++;
    } while (index < UI_SYSTEM_ARRAY_SIZE_9);
    
    // 检查动画状态
    state_flag = *(char*)((longlong)animation_data + 0x16);
    duration = 0.0f;
    if (state_flag == '\0') {
        start_time = 0.0f;
    } else {
        start_time = ((float*)animation_data)[4] * UI_SYSTEM_SMOOTH_STEP_FACTOR;
    }
    current_value = *(float*)animation_data;
    end_value = ((float*)animation_data)[3];
    if ((current_value + start_time < end_value) || (state_flag != '\0')) {
        control_flag = 0;
    } else {
        control_flag = 1;
    }
    *(undefined1*)(animation_data + 5) = control_flag;
    
    if (state_flag != '\0') {
        duration = ((float*)animation_data)[4] * UI_SYSTEM_SMOOTH_STEP_FACTOR;
    }
    start_time = current_value + UI_SYSTEM_TIME_OFFSET;
    *(bool*)((longlong)animation_data + 0x16) = end_value <= current_value + duration;
    if ((end_value <= start_time) && (*(char*)((longlong)animation_data + 0x17) == '\0')) {
        *(undefined1*)((longlong)animation_data + 0x15) = 1;
        *(bool*)((longlong)animation_data + 0x17) = end_value <= start_time;
        return;
    }
    *(undefined1*)((longlong)animation_data + 0x15) = 0;
    *(bool*)((longlong)animation_data + 0x17) = end_value <= start_time;
    return;
}

/**
 * UI系统动画完成检查函数
 * 检查UI系统动画是否完成，并更新相关状态
 * 
 * @param animation_state 动画状态指针
 */
void ui_system_check_animation_complete(void* animation_state) {
    float current_value;
    float end_value;
    char state_flag;
    undefined1 control_flag;
    float* state_data;
    float threshold;
    float time_offset;
    
    state_data = (float*)animation_state;
    state_flag = *(char*)((longlong)animation_state + 0x16);
    threshold = 0.0f;
    
    if (state_flag == '\0') {
        time_offset = 0.0f;
    } else {
        time_offset = state_data[4] * UI_SYSTEM_SMOOTH_STEP_FACTOR;
    }
    
    current_value = *state_data;
    end_value = state_data[3];
    
    if ((current_value + time_offset < end_value) || (state_flag != '\0')) {
        control_flag = 0;
    } else {
        control_flag = 1;
    }
    
    *(undefined1*)(animation_state + 5) = control_flag;
    
    if (state_flag != '\0') {
        threshold = state_data[4] * UI_SYSTEM_SMOOTH_STEP_FACTOR;
    }
    
    time_offset = current_value + UI_SYSTEM_TIME_OFFSET;
    *(bool*)((longlong)animation_state + 0x16) = end_value <= current_value + threshold;
    
    if ((end_value <= time_offset) && (*(char*)((longlong)animation_state + 0x17) == '\0')) {
        *(undefined1*)((longlong)animation_state + 0x15) = 1;
        *(bool*)((longlong)animation_state + 0x17) = end_value <= time_offset;
        return;
    }
    
    *(undefined1*)((longlong)animation_state + 0x15) = 0;
    *(bool*)((longlong)animation_state + 0x17) = end_value <= time_offset;
    return;
}

/**
 * UI系统动画系统初始化函数
 * 初始化UI系统的动画系统和相关资源
 */
void ui_system_initialize_animation_system(void) {
    ui_system_initialize_core_components();
}

/**
 * UI系统批量动画处理函数
 * 批量处理UI系统的动画效果和渲染
 * 
 * @param animation_array 动画数组指针
 * @param context 上下文指针
 * @param param1 参数1（控制数据）
 * @param render_context 渲染上下文指针
 * @param param2 参数2（渲染参数）
 * @param intensity1 强度参数1
 * @param intensity2 强度参数2
 * @param duration 持续时间
 * @param amplitude 振幅
 * @param frequency1 频率1
 * @param frequency2 频率2
 * @param enable_flag 启用标志
 */
void ui_system_process_batch_animations(longlong* animation_array, longlong context, uint64_t param1, longlong render_context, uint64_t param2, float intensity1, float intensity2, float duration, float amplitude, float frequency1, float frequency2, char enable_flag) {
    undefined8 control_data;
    longlong data_handle;
    char result;
    undefined1 index;
    int animation_index;
    float current_intensity;
    float combined_intensity;
    float calculated_value;
    undefined1 local_stack[8];
    undefined8 stack_param1;
    ulonglong intensity_value;
    undefined8 stack_param2;
    undefined8 stack_data1;
    longlong stack_data2;
    char stack_flag1;
    undefined8 stack_data3;
    longlong stack_data4;
    char stack_flag2;
    undefined8 stack_data4;
    undefined1 local_stack1[32];
    undefined1 local_stack2[96];
    
    stack_data4 = 0xfffffffffffffffe;
    control_data = *(undefined8*)(context + 0x208);
    combined_intensity = (1.0f - frequency1) - frequency2;
    animation_index = 0;
    stack_param1 = param1;
    
    do {
        current_intensity = frequency1;
        switch(animation_index) {
            case 0:
                current_intensity = combined_intensity * amplitude;
                break;
            case 1:
                current_intensity = (1.0f - amplitude) * combined_intensity;
                break;
            case 2:
                goto case_2_handler;
            case 3:
                current_intensity = frequency2;
            case_2_handler:
                if (enable_flag == '\0') break;
                goto skip_calculation;
            case 4:
                goto case_4_handler;
            case 5:
                current_intensity = frequency2;
            case_4_handler:
                if (enable_flag != '\0') break;
            default:
                goto skip_calculation;
        }
        
        current_intensity = duration * current_intensity;
        if (UI_SYSTEM_CONTROL_THRESHOLD < current_intensity) {
            calculated_value = intensity1;
            if (animation_index - 2U < 4) {
                calculated_value = intensity2;
            }
            intensity_value = (ulonglong)(uint)current_intensity;
            stack_param2 = control_data;
            ui_system_render_animation_frame(*animation_array, param1, param1, calculated_value, intensity_value, control_data);
            
            if (*(longlong*)(render_context + 0x810) != 0) {
                intensity_value = (ulonglong)(uint)current_intensity;
                stack_param2 = control_data;
                ui_system_render_animation_frame(animation_array[6], render_context);
            }
            
            result = ui_system_find_animation_index(param2, 0);
            param1 = stack_param1;
            if (-1 < result) {
                index = ui_system_get_next_animation_index();
                data_handle = *animation_array;
                calculated_value = (float)(*(int*)(data_handle + 400) - *(int*)(data_handle + 0x18c)) * calculated_value + (float)*(int*)(data_handle + 0x18c);
                local_stack[0] = 0;
                ui_system_prepare_animation_data(&stack_data1, data_handle, calculated_value, 0, intensity_value, stack_param2);
                ui_system_process_animation_frame(stack_data1, local_stack1, result, calculated_value, control_data, local_stack);
                
                if ((stack_flag1 == '\0') && (*(char*)(stack_data2 + 0x194) != '\0')) {
                    LOCK();
                    *(int*)(stack_data2 + 0xd8) = *(int*)(stack_data2 + 0xd8) + -1;
                    UNLOCK();
                }
                
                ui_system_prepare_animation_data(&stack_data3, *animation_array, calculated_value, 0);
                ui_system_process_animation_frame(stack_data3, local_stack2, index, calculated_value, control_data, local_stack);
                
                if ((stack_flag2 == '\0') && (*(char*)(stack_data4 + 0x194) != '\0')) {
                    LOCK();
                    *(int*)(stack_data4 + 0xd8) = *(int*)(stack_data4 + 0xd8) + -1;
                    UNLOCK();
                }
                
                ui_system_update_animation_data(param2, result, local_stack1, current_intensity);
                ui_system_update_animation_data(param2, index, local_stack2, current_intensity);
                param1 = stack_param1;
            }
        }
        
    skip_calculation:
        animation_index++;
        animation_array++;
        if (5 < animation_index) {
            return;
        }
    } while(true);
}

/**
 * UI系统动画数据获取函数
 * 从动画句柄获取动画数据
 * 
 * @param animation_handle 动画句柄
 * @return 动画数据指针
 */
longlong ui_system_get_animation_data(longlong animation_handle) {
    int result;
    int index;
    longlong* data_pointer;
    
    data_pointer = (longlong*)(animation_handle + 0x198);
    index = 0;
    
    do {
        if ((longlong*)*data_pointer != (longlong*)0x0) {
            result = (**(code**)(*(longlong*)*data_pointer + 0x18))();
            if (result == 2) {
                return *(undefined8*)(animation_handle + 0x198 + (longlong)index * 8);
            }
        }
        index++;
        data_pointer++;
    } while (index < 2);
    
    return 0;
}

/**
 * UI系统批量值计算函数
 * 批量计算UI系统的值和参数
 * 
 * @param value_array 值数组指针
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @param param5 参数5
 * @param control_param1 控制参数1
 * @param control_param2 控制参数2
 * @param base_value 基础值
 * @param param6 参数6
 * @param scale_factor1 缩放因子1
 * @param scale_factor2 缩放因子2
 * @param scale_factor3 缩放因子3
 * @param scale_factor4 缩放因子4
 * @param condition_flag 条件标志
 * @param data_offset 数据偏移
 * @param best_index 最佳索引指针
 */
void ui_system_calculate_batch_values(undefined8* value_array, undefined8 param1, undefined8 param2, undefined8 param3, undefined8 param4, undefined8 param5, uint32_t control_param1, uint32_t control_param2, float base_value, undefined8 param6, float scale_factor1, float scale_factor2, float scale_factor3, float scale_factor4, char condition_flag, longlong data_offset, int* best_index) {
    undefined8 control_data;
    int index;
    float calculated_value;
    undefined4 render_param;
    float max_value;
    float current_value;
    
    max_value = -1.0f;
    index = 0;
    current_value = (1.0f - scale_factor3) - scale_factor2;
    control_data = *(undefined8*)(data_offset + 0x208);
    
    do {
        switch(index) {
            case 0:
                calculated_value = current_value * scale_factor1 * base_value;
                break;
            case 1:
                calculated_value = (1.0f - scale_factor1) * current_value * base_value;
                break;
            case 2:
                if (condition_flag != '\0') goto skip_calculation;
                calculated_value = base_value * scale_factor3;
                break;
            case 3:
                if (condition_flag != '\0') goto skip_calculation;
                calculated_value = base_value * scale_factor2;
                break;
            case 4:
                if (condition_flag == '\0') goto skip_calculation;
                calculated_value = base_value * scale_factor3;
                break;
            case 5:
                if (condition_flag == '\0') goto skip_calculation;
                calculated_value = base_value * scale_factor2;
                break;
            default:
            skip_calculation:
                calculated_value = 0.0f;
        }
        
        if ((best_index != (int*)0x0) && (max_value < calculated_value)) {
            *best_index = index;
            max_value = calculated_value;
        }
        
        if (UI_SYSTEM_CONTROL_THRESHOLD < calculated_value) {
            render_param = control_param1;
            if (index - 2U < 4) {
                render_param = control_param2;
            }
            ui_system_render_animation_frame(*value_array, param1, param2, render_param, calculated_value, control_data);
        }
        
        index++;
        value_array++;
        if (5 < index) {
            return;
        }
    } while(true);
}

/**
 * UI系统值插值函数
 * 对UI系统的值进行插值计算
 * 
 * @param value_array 值数组指针
 * @param input_param 输入参数
 * @return 插值结果
 */
float ui_system_interpolate_value(longlong* value_array, float input_param) {
    float start_value;
    longlong data_handle;
    float min_value;
    float max_value;
    float range_start;
    float range_end;
    float interpolation_factor;
    
    data_handle = ui_system_get_value_data(value_array, 0);
    start_value = *(float*)(*value_array + 0x188);
    
    if (*(float*)(data_handle + 8) != 0.0f) {
        range_start = *(float*)(value_array[1] + 0x188);
        data_handle = ui_system_get_value_data(value_array, 0);
        range_end = *(float*)(data_handle + 0xc);
        min_value = *(float*)(data_handle + 0x10);
        max_value = range_end;
        
        if (range_end < 0.0f) {
            max_value = -min_value;
            min_value = -range_end;
        }
        
        interpolation_factor = (input_param - max_value) / (min_value - max_value);
        if (interpolation_factor <= 1.0f) {
            if (interpolation_factor <= 0.0f) {
                interpolation_factor = 0.0f;
            }
        } else {
            interpolation_factor = SQRT(interpolation_factor);
        }
        
        start_value = (start_value - range_start) * interpolation_factor + range_start;
    }
    
    return start_value;
}

/**
 * UI系统平滑插值计算函数
 * 计算UI系统的平滑插值
 * 
 * @return 平滑插值结果
 */
float ui_system_calculate_smooth_interpolation(void) {
    float start_value;
    longlong register_value;
    longlong data_handle;
    float range_start;
    float range_end;
    float min_value;
    float max_value;
    float interpolation_factor;
    float threshold_value;
    float target_value;
    float base_value;
    
    start_value = *(float*)(register_value + 0x188);
    data_handle = ui_system_get_value_data();
    max_value = *(float*)(data_handle + 0xc);
    range_start = *(float*)(data_handle + 0x10);
    range_end = max_value;
    
    if (max_value < base_value) {
        range_end = -range_start;
        range_start = -max_value;
    }
    
    interpolation_factor = (threshold_value - range_end) / (range_start - range_end);
    if (interpolation_factor <= 1.0f) {
        if (interpolation_factor <= base_value) {
            interpolation_factor = base_value;
        }
    } else {
        interpolation_factor = SQRT(interpolation_factor);
    }
    
    return (target_value - start_value) * interpolation_factor + start_value;
}

/**
 * UI系统动画状态重置函数
 * 重置UI系统的动画状态
 */
void ui_system_reset_animation_state(void) {
    return;
}

/**
 * UI系统参数缩放值函数
 * 根据参数缩放UI系统的值
 * 
 * @param value_handle 值句柄
 * @param scale_factor 缩放因子
 * @return 缩放后的值
 */
float ui_system_scale_value_by_parameter(longlong value_handle, float scale_factor) {
    float base_value;
    longlong data_handle;
    float calculated_value;
    float min_value;
    float max_value;
    
    base_value = *(float*)(*(longlong*)(value_handle + 0x10) + 0x188);
    
    if (0.0f < scale_factor) {
        data_handle = ui_system_get_value_data(value_handle, 2);
        calculated_value = *(float*)(data_handle + 8) / (base_value * scale_factor);
        min_value = base_value * UI_SYSTEM_SCALE_FACTOR_MIN;
        
        if ((base_value * UI_SYSTEM_SCALE_FACTOR_MIN <= calculated_value) && 
            (min_value = base_value * UI_SYSTEM_SCALE_FACTOR_MAX, calculated_value <= base_value * UI_SYSTEM_SCALE_FACTOR_MAX)) {
            min_value = calculated_value;
        }
        
        return min_value;
    }
    
    return base_value;
}

/**
 * UI系统动画数据清理函数
 * 清理UI系统的动画数据和资源
 * 
 * @param data_handle 数据句柄
 * @return 清理后的数据句柄
 */
longlong ui_system_cleanup_animation_data(longlong data_handle) {
    longlong current_handle;
    longlong temp_handle;
    longlong loop_counter;
    
    loop_counter = UI_SYSTEM_ARRAY_SIZE_6;
    temp_handle = UI_SYSTEM_ARRAY_SIZE_6;
    current_handle = data_handle;
    
    do {
        ui_system_release_animation_data(current_handle);
        current_handle += 0x104;
        temp_handle--;
    } while (temp_handle != 0);
    
    current_handle = data_handle + 0x618;
    do {
        ui_system_release_animation_data(current_handle);
        current_handle += 0x104;
        loop_counter--;
    } while (loop_counter != 0);
    
    *(undefined8*)(data_handle + 0xc30) = 0;
    return data_handle;
}

/**
 * UI系统动画帧渲染函数
 * 渲染UI系统的动画帧
 * 
 * @param render_context 渲染上下文指针
 * @param param1 参数1
 * @param param2 参数2
 * @param render_target 渲染目标指针
 * @param param3 参数3
 * @param param4 参数4
 * @param animation_data 动画数据指针
 */
void ui_system_render_animation_frame(longlong render_context, undefined8 param1, undefined8 param2, longlong render_target, undefined8 param3, longlong animation_data) {
    undefined4 render_param1;
    undefined4 render_param2;
    undefined4 render_param3;
    undefined4 render_param4;
    int animation_index;
    float time_value;
    float intensity;
    undefined4 color_param1;
    undefined4 color_param2;
    undefined4 color_param3;
    undefined4 color_param4;
    undefined1 blend_flag;
    
    time_value = *(float*)(animation_data + 0x2c);
    animation_index = *(int*)(animation_data + 0x10);
    color_param2 = *(undefined4*)(animation_data + 0x40);
    render_param1 = *(undefined4*)(animation_data + 0x30);
    render_param2 = *(undefined4*)(animation_data + 0x34);
    render_param3 = *(undefined4*)(animation_data + 0x38);
    render_param4 = *(undefined4*)(animation_data + 0x44);
    color_param4 = *(undefined4*)(animation_data + 0x24);
    
    intensity = (3.0f - (time_value + time_value)) * time_value * time_value;
    time_value = 1.0f - intensity;
    
    if (0.0f < time_value) {
        if (*(int*)(animation_data + 0x14) == 1) {
            blend_flag = *(undefined1*)(animation_data + 0x28);
            color_param1 = render_param4;
            color_param3 = color_param4;
        } else {
            blend_flag = 0;
            color_param1 = color_param2;
            color_param3 = color_param2;
        }
        
        ui_system_process_batch_animations(
            **(longlong**)(render_context + 0xc30) + (longlong)*(int*)(animation_data + 0x14) * 0x60,
            param1, time_value, render_target, param3, color_param1, color_param3, time_value,
            render_param1, render_param2, render_param3, blend_flag
        );
    }
    
    if (animation_index == 1) {
        blend_flag = *(undefined1*)(animation_data + 0x28);
        color_param2 = render_param4;
    } else {
        blend_flag = 0;
        color_param4 = color_param2;
    }
    
    ui_system_process_batch_animations(
        **(longlong**)(render_context + 0xc30) + (longlong)animation_index * 0x60,
        param1, param2, render_target, param3, color_param2, color_param4, intensity,
        render_param1, render_param2, render_param3, blend_flag
    );
    
    ui_system_release_render_resources(param2);
    if (*(longlong*)(render_target + 0x808) != 0) {
        ui_system_release_render_resources(render_target);
    }
    return;
}

// 函数别名映射（保持向后兼容性）
void FUN_18065edd0(void) __attribute__((alias("ui_system_process_control_data")));
void FUN_18065ee60(longlong param_1, float *param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, float *param_6) __attribute__((alias("ui_system_calculate_animation_values")));
void FUN_18065f057(void) __attribute__((alias("ui_system_update_animation_state")));
void FUN_18065f1c2(void) __attribute__((alias("ui_system_check_animation_complete")));
void FUN_18065f210(void) __attribute__((alias("ui_system_initialize_animation_system")));
void FUN_18065fa20(longlong *param_1, longlong param_2, undefined8 param_3, longlong param_4, undefined8 param_5, float param_6, float param_7, float param_8, float param_9, float param_10, float param_11, char param_12) __attribute__((alias("ui_system_process_batch_animations")));
undefined8 FUN_18065fd40(longlong param_1) __attribute__((alias("ui_system_get_animation_data")));
void FUN_18065fdb0(undefined8 *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined4 param_6, undefined4 param_7, float param_8, undefined8 param_9, float param_10, float param_11, float param_12, char param_13, longlong param_14, int *param_15) __attribute__((alias("ui_system_calculate_batch_values")));
float FUN_18065ffa0(longlong *param_1, float param_2) __attribute__((alias("ui_system_interpolate_value")));
float FUN_18065ffdf(void) __attribute__((alias("ui_system_calculate_smooth_interpolation")));
void FUN_180660051(void) __attribute__((alias("ui_system_reset_animation_state")));
float FUN_180660070(longlong param_1, float param_2) __attribute__((alias("ui_system_scale_value_by_parameter")));
longlong FUN_180660100(longlong param_1) __attribute__((alias("ui_system_cleanup_animation_data")));
void FUN_180660190(longlong param_1, undefined8 param_2, undefined8 param_3, longlong param_4, undefined8 param_5, longlong param_6) __attribute__((alias("ui_system_render_animation_frame")));

// 辅助函数声明
void ui_system_trigger_control_action(void);
void ui_system_execute_final_control(ulonglong control_param);
void ui_system_process_animation_values(float* output, undefined4 param1, void* param2, float time_delta, uint32_t render_param, float duration);
longlong ui_system_get_value_data(longlong* value_array, int index);
void ui_system_initialize_core_components(void);
void ui_system_render_animation_frame(longlong* animation_array, undefined8 param1, float intensity, ulonglong intensity_value, undefined8 control_data);
char ui_system_find_animation_index(undefined8 param1, int index);
undefined1 ui_system_get_next_animation_index(void);
void ui_system_prepare_animation_data(undefined8* stack_data, longlong data_handle, float calculated_value, int param, ulonglong intensity_value, undefined8 control_data);
void ui_system_process_animation_frame(undefined8 stack_data, undefined8* local_stack, char index, float calculated_value, undefined8 control_data, undefined1* local_data);
void ui_system_update_animation_data(undefined8 param1, char index, undefined1* local_stack, float current_intensity);
void ui_system_release_animation_data(longlong data_handle);
void ui_system_release_render_resources(undefined8 render_param);