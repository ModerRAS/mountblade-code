#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part074.c - 核心引擎参数处理模块
// 本文件包含处理游戏引擎各种参数设置的函数

/**
 * 初始化引擎参数配置
 * 设置游戏引擎的各种参数，包括渲染、物理、音频等子系统的配置
 * 
 * @param engine_context 引擎上下文指针，包含引擎的核心数据结构
 * @param param2 第二个参数，用途未知
 * @param param3 第三个参数，用途未知  
 * @param param4 第四个参数，用途未知
 */
void initialize_engine_parameters(int64_t engine_context, uint64_t param2, uint64_t param3, uint64_t param4)
{
    int8_t *resource_ptr;
    int32_t *value_ptr;
    int64_t temp_offset;
    char operation_result;
    uint64_t function_ptr;
    void *data_ptr;
    int32_t temp_value;
    uint64_t stack_data;
    int8_t buffer[16];
    code *cleanup_function;
    void *resource_handler;
    
    // 初始化第一个资源处理器
    cleanup_function = (code *)&RESOURCE_CLEANUP_FUNCTION_1;
    resource_handler = &DEFAULT_RESOURCE_HANDLER;
    
    // 设置初始状态
    *(int32_t *)(engine_context + 0x128) = 0;
    resource_ptr = (int8_t *)(engine_context + 0x130);
    
    // 检查并清理现有资源
    if (resource_ptr != buffer) {
        if (*(code **)(engine_context + 0x140) != (code *)0x0) {
            // 调用清理函数释放资源
            (**(code **)(engine_context + 0x140))(resource_ptr, 0, 0, param4, 0xfffffffffffffffe);
        }
        if (cleanup_function != (code *)0x0) {
            (*cleanup_function)(resource_ptr, buffer, 1);
        }
        // 设置新的清理函数和处理器
        *(code **)(engine_context + 0x140) = cleanup_function;
        *(void **)(engine_context + 0x148) = resource_handler;
    }
    
    // 执行清理操作
    if (cleanup_function != (code *)0x0) {
        (*cleanup_function)(buffer, 0, 0);
    }
    
    // 调用渲染系统初始化
    (**(code **)(*(int64_t *)(engine_context + 0xe8) + 0x10))(engine_context + 0xe8, &RENDER_SYSTEM_CONFIG);
    
    // 处理渲染参数
    stack_data._0_4_ = 0;
    temp_value = 0;
    if ((*(int64_t *)(engine_context + 0x140) != 0) &&
        (operation_result = (**(code **)(engine_context + 0x148))(&stack_data), temp_value = (int32_t)stack_data,
         operation_result == '\0')) {
        if (DEBUG_MODE_ENABLED == '\0') {
            data_ptr = &ERROR_MESSAGE_HANDLER;
            if (*(void **)(engine_context + 0xf0) != (void *)0x0) {
                data_ptr = *(void **)(engine_context + 0xf0);
            }
            log_error_message(&ERROR_LOG_BUFFER, data_ptr);
        }
        temp_value = *(int32_t *)(engine_context + 0x128);
    }
    *(int32_t *)(engine_context + 0xe0) = temp_value;
    
    // 处理第二个渲染参数
    stack_data = (int32_t *)((uint64_t)stack_data._4_4_ << 0x20);
    temp_value = 0;
    if (*(int64_t *)(engine_context + 0x140) != 0) {
        operation_result = (**(code **)(engine_context + 0x148))(&stack_data, resource_ptr);
        if (operation_result == '\0') {
            if (DEBUG_MODE_ENABLED == '\0') {
                data_ptr = &ERROR_MESSAGE_HANDLER;
                if (*(void **)(engine_context + 0xf0) != (void *)0x0) {
                    data_ptr = *(void **)(engine_context + 0xf0);
                }
                log_error_message(&ERROR_LOG_BUFFER, data_ptr);
            }
            temp_value = *(int32_t *)(engine_context + 0x128);
        }
        else {
            temp_value = (int32_t)stack_data;
        }
    }
    *(int32_t *)(engine_context + 0xe4) = temp_value;
    
    // 应用渲染参数设置
    stack_data = (int32_t *)(engine_context + 0xe0);
    apply_engine_settings(engine_context + 8, &stack_data);
    
    // 初始化第二个资源处理器
    cleanup_function = (code *)&RESOURCE_CLEANUP_FUNCTION_2;
    resource_handler = &DEFAULT_RESOURCE_HANDLER;
    *(int32_t *)(engine_context + 0x198) = 1;
    resource_ptr = (int8_t *)(engine_context + 0x1a0);
    
    // 重复资源清理和设置流程
    if (resource_ptr != buffer) {
        if (*(code **)(engine_context + 0x1b0) != (code *)0x0) {
            (**(code **)(engine_context + 0x1b0))(resource_ptr, 0, 0);
        }
        if (cleanup_function != (code *)0x0) {
            (*cleanup_function)(resource_ptr, buffer, 1);
        }
        *(code **)(engine_context + 0x1b0) = cleanup_function;
        *(void **)(engine_context + 0x1b8) = resource_handler;
    }
    
    if (cleanup_function != (code *)0x0) {
        (*cleanup_function)(buffer, 0, 0);
    }
    
    // 调用物理系统初始化
    (**(code **)(*(int64_t *)(engine_context + 0x158) + 0x10))(engine_context + 0x158, &PHYSICS_SYSTEM_CONFIG);
    
    // 处理物理参数
    stack_data._0_4_ = 1;
    temp_value = 1;
    if ((*(int64_t *)(engine_context + 0x1b0) != 0) &&
        (operation_result = (**(code **)(engine_context + 0x1b8))(&stack_data), temp_value = (int32_t)stack_data,
         operation_result == '\0')) {
        if (DEBUG_MODE_ENABLED == '\0') {
            data_ptr = &ERROR_MESSAGE_HANDLER;
            if (*(void **)(engine_context + 0x160) != (void *)0x0) {
                data_ptr = *(void **)(engine_context + 0x160);
            }
            log_error_message(&ERROR_LOG_BUFFER, data_ptr);
        }
        temp_value = *(int32_t *)(engine_context + 0x198);
    }
    *(int32_t *)(engine_context + 0x150) = temp_value;
    
    stack_data = (int32_t *)CONCAT44(stack_data._4_4_, 1);
    temp_value = 1;
    if (*(int64_t *)(engine_context + 0x1b0) != 0) {
        operation_result = (**(code **)(engine_context + 0x1b8))(&stack_data, resource_ptr);
        if (operation_result == '\0') {
            if (DEBUG_MODE_ENABLED == '\0') {
                data_ptr = &ERROR_MESSAGE_HANDLER;
                if (*(void **)(engine_context + 0x160) != (void *)0x0) {
                    data_ptr = *(void **)(engine_context + 0x160);
                }
                log_error_message(&ERROR_LOG_BUFFER, data_ptr);
            }
            temp_value = *(int32_t *)(engine_context + 0x198);
        }
        else {
            temp_value = (int32_t)stack_data;
        }
    }
    *(int32_t *)(engine_context + 0x154) = temp_value;
    
    // 应用物理参数设置
    stack_data = (int32_t *)(engine_context + 0x150);
    apply_engine_settings(engine_context + 8, &stack_data);
    
    // 调用音频系统初始化
    (**(code **)(*(int64_t *)(engine_context + 0x3f8) + 0x10))(engine_context + 0x3f8, &AUDIO_SYSTEM_CONFIG);
    
    // 处理音频参数
    stack_data = (int32_t *)((uint64_t)stack_data & 0xffffffff00000000);
    temp_value = 0;
    if (*(int64_t *)(engine_context + 0x450) != 0) {
        operation_result = (**(code **)(engine_context + 0x458))(&stack_data);
        if (operation_result == '\0') {
            if (DEBUG_MODE_ENABLED == '\0') {
                data_ptr = &ERROR_MESSAGE_HANDLER;
                if (*(void **)(engine_context + 0x400) != (void *)0x0) {
                    data_ptr = *(void **)(engine_context + 0x400);
                }
                log_error_message(&ERROR_LOG_BUFFER, data_ptr);
            }
            temp_value = *(int32_t *)(engine_context + 0x438);
        }
        else {
            temp_value = (int32_t)stack_data;
        }
    }
    *(int32_t *)(engine_context + 0x3f0) = temp_value;
    
    // 处理第二个音频参数
    stack_data = (int32_t *)((uint64_t)stack_data & 0xffffffff00000000);
    temp_value = 0;
    if (*(int64_t *)(engine_context + 0x450) != 0) {
        operation_result = (**(code **)(engine_context + 0x458))(&stack_data);
        if (operation_result == '\0') {
            if (DEBUG_MODE_ENABLED == '\0') {
                data_ptr = &ERROR_MESSAGE_HANDLER;
                if (*(void **)(engine_context + 0x400) != (void *)0x0) {
                    data_ptr = *(void **)(engine_context + 0x400);
                }
                log_error_message(&ERROR_LOG_BUFFER, data_ptr);
            }
            temp_value = *(int32_t *)(engine_context + 0x438);
        }
        else {
            temp_value = (int32_t)stack_data;
        }
    }
    *(int32_t *)(engine_context + 0x3f4) = temp_value;
    
    // 应用音频参数设置
    stack_data = (int32_t *)(engine_context + 0x3f0);
    apply_engine_settings(engine_context + 8, &stack_data);
    
    // 初始化第三个资源处理器
    cleanup_function = (code *)&RESOURCE_CLEANUP_FUNCTION_3;
    resource_handler = &DEFAULT_RESOURCE_HANDLER;
    *(int32_t *)(engine_context + 0x208) = 1;
    resource_ptr = (int8_t *)(engine_context + 0x210);
    
    // 重复资源处理流程
    if (resource_ptr != buffer) {
        if (*(code **)(engine_context + 0x220) != (code *)0x0) {
            (**(code **)(engine_context + 0x220))(resource_ptr, 0, 0);
        }
        if (cleanup_function != (code *)0x0) {
            (*cleanup_function)(resource_ptr, buffer, 1);
        }
        *(code **)(engine_context + 0x220) = cleanup_function;
        *(void **)(engine_context + 0x228) = resource_handler;
    }
    
    if (cleanup_function != (code *)0x0) {
        (*cleanup_function)(buffer, 0, 0);
    }
    
    // 调用输入系统初始化
    (**(code **)(*(int64_t *)(engine_context + 0x1c8) + 0x10))(engine_context + 0x1c8, &INPUT_SYSTEM_CONFIG);
    
    // 处理输入参数
    stack_data._0_4_ = 1;
    temp_value = 1;
    if ((*(int64_t *)(engine_context + 0x220) != 0) &&
        (operation_result = (**(code **)(engine_context + 0x228))(&stack_data), temp_value = (int32_t)stack_data,
         operation_result == '\0')) {
        if (DEBUG_MODE_ENABLED == '\0') {
            data_ptr = &ERROR_MESSAGE_HANDLER;
            if (*(void **)(engine_context + 0x1d0) != (void *)0x0) {
                data_ptr = *(void **)(engine_context + 0x1d0);
            }
            log_error_message(&ERROR_LOG_BUFFER, data_ptr);
        }
        temp_value = *(int32_t *)(engine_context + 0x208);
    }
    *(int32_t *)(engine_context + 0x1c0) = temp_value;
    
    stack_data = (int32_t *)CONCAT44(stack_data._4_4_, 1);
    temp_value = 1;
    if (*(int64_t *)(engine_context + 0x220) != 0) {
        operation_result = (**(code **)(engine_context + 0x228))(&stack_data, resource_ptr);
        if (operation_result == '\0') {
            if (DEBUG_MODE_ENABLED == '\0') {
                data_ptr = &ERROR_MESSAGE_HANDLER;
                if (*(void **)(engine_context + 0x1d0) != (void *)0x0) {
                    data_ptr = *(void **)(engine_context + 0x1d0);
                }
                log_error_message(&ERROR_LOG_BUFFER, data_ptr);
            }
            temp_value = *(int32_t *)(engine_context + 0x208);
        }
        else {
            temp_value = (int32_t)stack_data;
        }
    }
    *(int32_t *)(engine_context + 0x1c4) = temp_value;
    
    // 应用输入参数设置
    stack_data = (int32_t *)(engine_context + 0x1c0);
    apply_engine_settings(engine_context + 8, &stack_data);
    
    // 调用网络系统初始化
    (**(code **)(*(int64_t *)(engine_context + 0x318) + 0x10))(engine_context + 0x318, &NETWORK_SYSTEM_CONFIG);
    
    // 处理网络参数
    value_ptr = (int32_t *)(engine_context + 0x310);
    stack_data._0_4_ = 0x3f800000;  // 1.0f
    temp_value = 0x3f800000;
    if ((*(int64_t *)(engine_context + 0x370) == 0) ||
        (operation_result = (**(code **)(engine_context + 0x378))(&stack_data), temp_value = (int32_t)stack_data,
         operation_result != '\0')) {
        *value_ptr = temp_value;
    }
    else {
        if (DEBUG_MODE_ENABLED == '\0') {
            data_ptr = &ERROR_MESSAGE_HANDLER;
            if (*(void **)(engine_context + 800) != (void *)0x0) {
                data_ptr = *(void **)(engine_context + 800);
            }
            log_error_message(&ERROR_LOG_BUFFER, data_ptr);
        }
        *value_ptr = *(int32_t *)(engine_context + 0x358);
    }
    
    stack_data = (int32_t *)CONCAT44(stack_data._4_4_, 0x3f800000);
    temp_value = 0x3f800000;
    if (*(int64_t *)(engine_context + 0x370) == 0) {
SET_NETWORK_PARAM:
        *(int32_t *)(engine_context + 0x314) = temp_value;
    }
    else {
        operation_result = (**(code **)(engine_context + 0x378))(&stack_data);
        if (operation_result != '\0') {
            temp_value = (int32_t)stack_data;
            goto SET_NETWORK_PARAM;
        }
        if (DEBUG_MODE_ENABLED == '\0') {
            data_ptr = &ERROR_MESSAGE_HANDLER;
            if (*(void **)(engine_context + 800) != (void *)0x0) {
                data_ptr = *(void **)(engine_context + 800);
            }
            log_error_message(&ERROR_LOG_BUFFER, data_ptr);
        }
        *(int32_t *)(engine_context + 0x314) = *(int32_t *)(engine_context + 0x358);
    }
    
    // 应用网络参数设置
    stack_data = value_ptr;
    apply_engine_settings(engine_context + 0x28, &stack_data);
    
    // 调用UI系统初始化
    (**(code **)(*(int64_t *)(engine_context + 0x238) + 0x10))(engine_context + 0x238, &UI_SYSTEM_CONFIG);
    
    // 处理UI参数
    stack_data = (int32_t *)((uint64_t)stack_data & 0xffffffff00000000);
    temp_value = 0;
    if (*(int64_t *)(engine_context + 0x290) != 0) {
        operation_result = (**(code **)(engine_context + 0x298))(&stack_data);
        if (operation_result == '\0') {
            if (DEBUG_MODE_ENABLED == '\0') {
                data_ptr = &ERROR_MESSAGE_HANDLER;
                if (*(void **)(engine_context + 0x240) != (void *)0x0) {
                    data_ptr = *(void **)(engine_context + 0x240);
                }
                log_error_message(&ERROR_LOG_BUFFER, data_ptr);
            }
            temp_value = *(int32_t *)(engine_context + 0x278);
        }
        else {
            temp_value = (int32_t)stack_data;
        }
    }
    *(int32_t *)(engine_context + 0x230) = temp_value;
    
    // 处理第二个UI参数
    stack_data = (int32_t *)((uint64_t)stack_data & 0xffffffff00000000);
    temp_value = 0;
    if (*(int64_t *)(engine_context + 0x290) != 0) {
        operation_result = (**(code **)(engine_context + 0x298))(&stack_data);
        if (operation_result == '\0') {
            if (DEBUG_MODE_ENABLED == '\0') {
                data_ptr = &ERROR_MESSAGE_HANDLER;
                if (*(void **)(engine_context + 0x240) != (void *)0x0) {
                    data_ptr = *(void **)(engine_context + 0x240);
                }
                log_error_message(&ERROR_LOG_BUFFER, data_ptr);
            }
            temp_value = *(int32_t *)(engine_context + 0x278);
        }
        else {
            temp_value = (int32_t)stack_data;
        }
    }
    *(int32_t *)(engine_context + 0x234) = temp_value;
    
    // 应用UI参数设置
    stack_data = (int32_t *)(engine_context + 0x230);
    apply_engine_settings(engine_context + 8, &stack_data);
    
    // 调用AI系统初始化
    (**(code **)(*(int64_t *)(engine_context + 0x2a8) + 0x10))(engine_context + 0x2a8, &AI_SYSTEM_CONFIG);
    
    // 处理AI参数
    stack_data._0_4_ = 1;
    temp_value = 1;
    if ((*(int64_t *)(engine_context + 0x300) != 0) &&
        (operation_result = (**(code **)(engine_context + 0x308))(&stack_data), temp_value = (int32_t)stack_data,
         operation_result == '\0')) {
        if (DEBUG_MODE_ENABLED == '\0') {
            data_ptr = &ERROR_MESSAGE_HANDLER;
            if (*(void **)(engine_context + 0x2b0) != (void *)0x0) {
                data_ptr = *(void **)(engine_context + 0x2b0);
            }
            log_error_message(&ERROR_LOG_BUFFER, data_ptr);
        }
        temp_value = *(int32_t *)(engine_context + 0x2e8);
    }
    *(int32_t *)(engine_context + 0x2a0) = temp_value;
    
    stack_data = (int32_t *)CONCAT44(stack_data._4_4_, 1);
    temp_value = 1;
    if (*(int64_t *)(engine_context + 0x300) != 0) {
        operation_result = (**(code **)(engine_context + 0x308))(&stack_data);
        if (operation_result == '\0') {
            if (DEBUG_MODE_ENABLED == '\0') {
                data_ptr = &ERROR_MESSAGE_HANDLER;
                if (*(void **)(engine_context + 0x2b0) != (void *)0x0) {
                    data_ptr = *(void **)(engine_context + 0x2b0);
                }
                log_error_message(&ERROR_LOG_BUFFER, data_ptr);
            }
            temp_value = *(int32_t *)(engine_context + 0x2e8);
        }
        else {
            temp_value = (int32_t)stack_data;
        }
    }
    *(int32_t *)(engine_context + 0x2a4) = temp_value;
    
    // 应用AI参数设置
    stack_data = (int32_t *)(engine_context + 0x2a0);
    apply_engine_settings(engine_context + 8, &stack_data);
    
    // 调用动画系统初始化
    (**(code **)(*(int64_t *)(engine_context + 0x528) + 0x10))(engine_context + 0x528, &ANIMATION_SYSTEM_CONFIG);
    
    // 处理动画参数
    stack_data = (int32_t *)((uint64_t)stack_data & 0xffffffff00000000);
    temp_value = 0;
    if (*(int64_t *)(engine_context + 0x580) != 0) {
        operation_result = (**(code **)(engine_context + 0x588))(&stack_data);
        if (operation_result == '\0') {
            if (DEBUG_MODE_ENABLED == '\0') {
                data_ptr = &ERROR_MESSAGE_HANDLER;
                if (*(void **)(engine_context + 0x530) != (void *)0x0) {
                    data_ptr = *(void **)(engine_context + 0x530);
                }
                log_error_message(&ERROR_LOG_BUFFER, data_ptr);
            }
            temp_value = *(int32_t *)(engine_context + 0x568);
        }
        else {
            temp_value = (int32_t)stack_data;
        }
    }
    *(int32_t *)(engine_context + 0x520) = temp_value;
    
    // 处理第二个动画参数
    stack_data = (int32_t *)((uint64_t)stack_data & 0xffffffff00000000);
    temp_value = 0;
    if (*(int64_t *)(engine_context + 0x580) == 0) {
SET_ANIMATION_PARAM:
        *(int32_t *)(engine_context + 0x524) = temp_value;
    }
    else {
        operation_result = (**(code **)(engine_context + 0x588))(&stack_data);
        if (operation_result != '\0') {
            temp_value = (int32_t)stack_data;
            goto SET_ANIMATION_PARAM;
        }
        if (DEBUG_MODE_ENABLED == '\0') {
            data_ptr = &ERROR_MESSAGE_HANDLER;
            if (*(void **)(engine_context + 0x530) != (void *)0x0) {
                data_ptr = *(void **)(engine_context + 0x530);
            }
            log_error_message(&ERROR_LOG_BUFFER, data_ptr);
        }
        *(int32_t *)(engine_context + 0x524) = *(int32_t *)(engine_context + 0x568);
    }
    
    // 应用动画参数设置
    stack_data = (int32_t *)(engine_context + 0x520);
    apply_engine_settings(engine_context + 8, &stack_data);
    
    // 调用粒子系统初始化
    (**(code **)(*(int64_t *)(engine_context + 0x388) + 0x10))(engine_context + 0x388, &PARTICLE_SYSTEM_CONFIG);
    
    // 处理粒子参数
    value_ptr = (int32_t *)(engine_context + 0x380);
    stack_data._0_4_ = 0x40000000;  // 2.0f
    temp_value = 0x40000000;
    if ((*(int64_t *)(engine_context + 0x3e0) == 0) ||
        (operation_result = (**(code **)(engine_context + 1000))(&stack_data), temp_value = (int32_t)stack_data,
         operation_result != '\0')) {
        *value_ptr = temp_value;
    }
    else {
        if (DEBUG_MODE_ENABLED == '\0') {
            data_ptr = &ERROR_MESSAGE_HANDLER;
            if (*(void **)(engine_context + 0x390) != (void *)0x0) {
                data_ptr = *(void **)(engine_context + 0x390);
            }
            log_error_message(&ERROR_LOG_BUFFER, data_ptr);
        }
        *value_ptr = *(int32_t *)(engine_context + 0x3c8);
    }
    
    stack_data = (int32_t *)CONCAT44(stack_data._4_4_, 0x40000000);
    temp_value = 0x40000000;
    if (*(int64_t *)(engine_context + 0x3e0) != 0) {
        operation_result = (**(code **)(engine_context + 1000))(&stack_data);
        if (operation_result == '\0') {
            if (DEBUG_MODE_ENABLED == '\0') {
                data_ptr = &ERROR_MESSAGE_HANDLER;
                if (*(void **)(engine_context + 0x390) != (void *)0x0) {
                    data_ptr = *(void **)(engine_context + 0x390);
                }
                log_error_message(&ERROR_LOG_BUFFER, data_ptr);
            }
            *(int32_t *)(engine_context + 900) = *(int32_t *)(engine_context + 0x3c8);
            goto APPLY_PARTICLE_SETTINGS;
        }
        temp_value = (int32_t)stack_data;
    }
    *(int32_t *)(engine_context + 900) = temp_value;
    
APPLY_PARTICLE_SETTINGS:
    // 应用粒子参数设置
    stack_data = value_ptr;
    apply_engine_settings(engine_context + 0x28, &stack_data);
    
    // 调用场景管理器初始化
    temp_offset = engine_context + 0x460;
    (**(code **)(*(int64_t *)(engine_context + 0x4a0) + 0x10))((int64_t *)(engine_context + 0x4a0), &SCENE_MANAGER_CONFIG);
    
    // 初始化场景资源
    function_ptr = get_system_time();
    initialize_scene_resources(temp_offset, function_ptr);
    function_ptr = get_system_time();
    load_scene_assets(temp_offset, function_ptr);
    
    // 应用场景管理器设置
    stack_data = (int32_t *)temp_offset;
    apply_engine_settings(engine_context + 0x48, &stack_data);
    
    // 标记引擎初始化完成
    *(int32_t *)(engine_context + 0x88) = 1;
    
    return;
}