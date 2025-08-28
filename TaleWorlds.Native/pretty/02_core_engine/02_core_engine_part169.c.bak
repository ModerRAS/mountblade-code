// 02_core_engine_part169.c - 核心引擎模块第169部分
// 本文件包含3个函数，主要涉及系统初始化、参数处理和配置管理

#include "TaleWorlds.Native.Split.h"

/**
 * 初始化引擎系统组件
 * @param engine_context 引擎上下文指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void initialize_engine_system_components(uint64_t *engine_context, uint64_t param2, uint64_t param3, uint64_t param4)
{
    // 清理和初始化多个系统组件
    cleanup_system_component(engine_context + 0x1ea);   // 清理组件1
    cleanup_system_component(engine_context + 0x1dc);   // 清理组件2
    cleanup_system_component(engine_context + 0x1ce);   // 清理组件3
    cleanup_system_component(engine_context + 0x1c0);   // 清理组件4
    cleanup_system_component(engine_context + 0x1b2);   // 清理组件5
    cleanup_system_component(engine_context + 0x1a4);   // 清理组件6
    cleanup_system_component(engine_context + 0x196);   // 清理组件7
    cleanup_system_component(engine_context + 0x188);   // 清理组件8
    cleanup_system_component(engine_context + 0x17a);   // 清理组件9
    cleanup_system_component(engine_context + 0x16c);   // 清理组件10
    cleanup_system_component(engine_context + 0x15e);   // 清理组件11
    cleanup_system_component(engine_context + 0x150);   // 清理组件12
    cleanup_system_component(engine_context + 0x142);   // 清理组件13
    cleanup_system_component(engine_context + 0x134);   // 清理组件14
    cleanup_system_component(engine_context + 0x126);   // 清理组件15
    cleanup_system_component(engine_context + 0x118);   // 清理组件16
    cleanup_system_component(engine_context + 0x10a);   // 清理组件17
    cleanup_system_component(engine_context + 0xfc);    // 清理组件18
    cleanup_system_component(engine_context + 0xee);    // 清理组件19
    cleanup_system_component(engine_context + 0xe0);    // 清理组件20
    cleanup_system_component(engine_context + 0xd2);    // 清理组件21
    cleanup_system_component(engine_context + 0xc4);    // 清理组件22
    cleanup_system_component(engine_context + 0xb6);    // 清理组件23
    cleanup_system_component(engine_context + 0xa8);    // 清理组件24
    cleanup_system_component(engine_context + 0x9a);    // 清理组件25
    cleanup_system_component(engine_context + 0x8c);    // 清理组件26
    cleanup_system_component(engine_context + 0x7e);    // 清理组件27
    cleanup_system_component(engine_context + 0x70);    // 清理组件28
    cleanup_system_component(engine_context + 0x62);    // 清理组件29
    cleanup_system_component(engine_context + 0x54);    // 清理组件30
    cleanup_system_component(engine_context + 0x46);    // 清理组件31
    cleanup_system_component(engine_context + 0x38);    // 清理组件32
    cleanup_system_component(engine_context + 0x2a);    // 清理组件33
    cleanup_system_component(engine_context + 0x1c);    // 清理组件34
    
    // 初始化系统管理器
    *engine_context = &global_system_manager;           // 设置系统管理器
    engine_context[0x18] = &resource_manager_v1;        // 设置资源管理器
    
    // 检查系统状态
    if (engine_context[0x19] != 0) {
        // 系统初始化失败，触发错误处理
        trigger_system_error();
    }
    
    // 重置系统状态
    engine_context[0x19] = 0;                           // 清除错误标志
    *(int32_t *)(engine_context + 0x1b) = 0;        // 重置状态字段
    
    // 设置资源管理器
    engine_context[0x18] = &resource_manager_v2;        // 更新资源管理器
    
    // 执行系统初始化回调
    execute_initialization_callback(engine_context + 0x12, engine_context[0x14], param3, param4, 0xfffffffffffffffe);
    
    // 验证系统完整性
    if (engine_context[0xd] != 0) {
        trigger_system_error();  // 系统组件错误
    }
    if (engine_context[9] != 0) {
        trigger_system_error();  // 系统状态错误
    }
    if (engine_context[5] != 0) {
        trigger_system_error();  // 系统配置错误
    }
    if (engine_context[1] != 0) {
        trigger_system_error();  // 系统初始化错误
    }
    
    return;
}

/**
 * 处理系统配置参数
 * @param config_context 配置上下文指针
 * @param param2 参数2
 * @param param3 参数3
 * @return 处理结果，1表示成功，0表示失败
 */
uint64_t process_system_configuration(longlong config_context, longlong param2, longlong param3)
{
    longlong config_ptr;
    char validation_result;
    int compare_result;
    void *string_ptr;
    uint config_values[2];
    
    // 检查是否为端口配置参数
    if ((*(int *)(param2 + 0x10) == 0x15) &&
        (compare_result = strcmp(*(uint64_t *)(param2 + 8), &PORT_CONFIG_STRING), compare_result == 0)) {
        
        // 获取配置值字符串
        string_ptr = &DEFAULT_CONFIG_STRING;
        if (*(void **)(param3 + 8) != (void *)0x0) {
            string_ptr = *(void **)(param3 + 8);
        }
        
        // 转换配置值为整数
        config_values[0] = atoi(string_ptr);
        config_ptr = global_config_manager;
        
        // 验证配置值
        if ((*(longlong *)(global_config_manager + 0x530) != 0) &&
            (validation_result = (**(code **)(global_config_manager + 0x538))(config_values), validation_result == '\0')) {
            
            // 配置验证失败，使用默认值
            if (DEBUG_MODE_DISABLED == '\0') {
                string_ptr = &DEFAULT_CONFIG_STRING;
                if (*(void **)(config_ptr + 0x4e0) != (void *)0x0) {
                    string_ptr = *(void **)(config_ptr + 0x4e0);
                }
                log_configuration_error(&ERROR_LOG_PREFIX, string_ptr);
            }
            
            // 使用默认配置值
            *(int32_t *)(config_ptr + 0x4d0) = *(int32_t *)(config_ptr + 0x518);
            return 1;
        }
        
        // 应用配置值
        *(uint *)(config_ptr + 0x4d0) = config_values[0];
        return 1;
    }
    
    // 检查是否为调试模式配置参数
    if ((*(int *)(param2 + 0x10) == 0x12) &&
        (compare_result = strcmp(*(uint64_t *)(param2 + 8), &DEBUG_CONFIG_STRING), compare_result == 0)) {
        
        // 获取配置值字符串
        string_ptr = &DEFAULT_CONFIG_STRING;
        if (*(void **)(param3 + 8) != (void *)0x0) {
            string_ptr = *(void **)(param3 + 8);
        }
        
        // 转换配置值为布尔值
        compare_result = atoi(string_ptr);
        config_values[0] = (uint)(compare_result != 0);
        
        // 验证配置值
        if ((*(longlong *)(config_context + 0xa00) != 0) &&
            (validation_result = (**(code **)(config_context + 0xa08))(config_values), validation_result == '\0')) {
            
            // 配置验证失败，使用默认值
            if (DEBUG_MODE_DISABLED == '\0') {
                string_ptr = &DEFAULT_CONFIG_STRING;
                if (*(void **)(config_context + 0x9b0) != (void *)0x0) {
                    string_ptr = *(void **)(config_context + 0x9b0);
                }
                log_configuration_error(&ERROR_LOG_PREFIX, string_ptr);
            }
            
            // 使用默认配置值
            *(int32_t *)(config_context + 0x9a0) = *(int32_t *)(config_context + 0x9e8);
            return 0;
        }
        
        // 应用配置值
        *(uint *)(config_context + 0x9a0) = config_values[0];
    }
    
    return 0;
}

/**
 * 执行系统清理和资源释放
 * @param system_context 系统上下文指针
 */
void execute_system_cleanup(longlong system_context)
{
    int cleanup_level;
    char cleanup_status;
    int8_t temp_buffer[32];
    uint64_t cleanup_flag;
    void *log_prefix;
    int8_t *log_message;
    int32_t log_code;
    int8_t log_buffer[32];
    ulonglong security_key;
    
    // 设置清理标志
    cleanup_flag = 0xfffffffffffffffe;
    
    // 生成安全密钥
    security_key = global_security_key ^ (ulonglong)temp_buffer;
    
    // 确定清理级别
    cleanup_level = *(int *)(system_context + 0xbd0);
    if (*(int *)(system_context + 0xbd0) < 1) {
        cleanup_level = 1;  // 最小清理级别
    }
    
    // 执行系统清理
    perform_system_cleanup(system_context, cleanup_level);
    
    // 准备日志消息
    log_prefix = &CLEANUP_LOG_PREFIX;
    log_message = log_buffer;
    log_buffer[0] = 0;
    log_code = 0x1b;  // 清理完成代码
    
    // 设置日志消息
    strcpy_s(log_buffer, 0x20, &CLEANUP_SUCCESS_MESSAGE);
    
    // 记录清理状态
    cleanup_status = log_system_event(global_event_logger, &log_prefix);
    log_prefix = &CLEANUP_LOG_PREFIX;
    
    // 检查清理状态
    if (cleanup_status != '\0') {
        // 清理过程中出现问题，执行深度清理
        perform_system_cleanup(system_context, 10);
    }
    
    // 执行最终清理并退出
    execute_final_cleanup(security_key ^ (ulonglong)temp_buffer);
}