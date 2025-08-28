#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part076.c - 核心引擎模块第076部分
// 功能：初始化和管理引擎的各种状态和配置

// 全局变量和常量定义
static const char* ENGINE_CONFIG_PATH = "engine_config";
static const char* RENDER_SETTINGS_PATH = "render_settings";
static const char* PHYSICS_SETTINGS_PATH = "physics_settings";
static const char* DEBUG_MODE_FLAG = "debug_mode_enabled";

// 函数：初始化引擎状态管理器
// 参数：engine_context - 引擎上下文指针
// 功能：初始化和管理引擎的各种状态和配置，包括渲染、物理和调试设置
void initialize_engine_state_manager(int64_t engine_context)
{
    char operation_result;
    uint32_t config_value;
    void* config_pointer;
    uint32_t status_flags;
    
    // 栈变量定义
    char render_config_buffer[32];
    uint32_t render_config_values[2];
    uint32_t render_config_backup[2];
    uint32_t render_status;
    uint64_t render_context_handle;
    void* render_config_ptr;
    char* render_data_ptr;
    uint32_t render_control;
    
    char physics_config_buffer[32];
    void* physics_config_ptr;
    char* physics_data_ptr;
    uint32_t physics_control;
    
    char debug_config_buffer[32];
    void* debug_config_ptr;
    char* debug_data_ptr;
    uint32_t debug_control;
    
    char system_config_buffer[32];
    uint64_t system_context_id;
    
    // 初始化系统上下文
    render_context_handle = 0xfffffffffffffffe;
    system_context_id = get_system_context_id() ^ (uint64_t)render_config_buffer;
    status_flags = 0;
    render_config_backup[0] = 0;
    config_value = 0;
    
    // 检查并初始化渲染配置
    if ((*(int64_t*)(engine_context + 0x370) != 0) &&
        (operation_result = (**(code **)(engine_context + 0x378))(render_config_backup), 
         config_value = render_config_backup[0], operation_result == '\0')) {
        
        if (!is_debug_mode_enabled()) {
            config_pointer = &default_engine_config;
            if (*(void**)(engine_context + 800) != (void*)0x0) {
                config_pointer = *(void**)(engine_context + 800);
            }
            apply_engine_configuration(&global_engine_settings, config_pointer);
        }
        config_value = *(uint32_t*)(engine_context + 0x358);
    }
    *(uint32_t*)(engine_context + 0x310) = config_value;
    
    // 设置渲染配置
    render_config_ptr = &render_settings_template;
    render_data_ptr = physics_config_buffer;
    physics_config_buffer[0] = 0;
    render_control = 0xb;
    strcpy_s(physics_config_buffer, 0x20, &render_config_path);
    operation_result = process_configuration_request(get_config_manager(), &render_config_ptr);
    
    render_config_ptr = &physics_settings_template;
    if (operation_result != '\0') {
        render_config_backup[0] = 1;
        config_value = 1;
        
        // 检查并初始化物理配置
        if ((*(int64_t*)(engine_context + 0x680) != 0) &&
            (operation_result = (**(code **)(engine_context + 0x688))(render_config_backup), 
             config_value = render_config_backup[0], operation_result == '\0')) {
            
            if (!is_debug_mode_enabled()) {
                config_pointer = &default_engine_config;
                if (*(void**)(engine_context + 0x630) != (void*)0x0) {
                    config_pointer = *(void**)(engine_context + 0x630);
                }
                apply_engine_configuration(&global_engine_settings, config_pointer);
            }
            config_value = *(uint32_t*)(engine_context + 0x668);
        }
        *(uint32_t*)(engine_context + 0x620) = config_value;
        
        // 检查并初始化调试配置
        render_config_values[0] = 1;
        config_value = 1;
        if ((*(int64_t*)(engine_context + 0x450) != 0) &&
            (operation_result = (**(code **)(engine_context + 0x458))(render_config_values), 
             config_value = render_config_values[0], operation_result == '\0')) {
            
            if (!is_debug_mode_enabled()) {
                config_pointer = &default_engine_config;
                if (*(void**)(engine_context + 0x400) != (void*)0x0) {
                    config_pointer = *(void**)(engine_context + 0x400);
                }
                apply_engine_configuration(&global_engine_settings, config_pointer);
            }
            config_value = *(uint32_t*)(engine_context + 0x438);
        }
        *(uint32_t*)(engine_context + 0x3f0) = config_value;
    }
    
    // 设置系统配置
    debug_config_ptr = &render_settings_template;
    debug_data_ptr = debug_config_buffer;
    debug_config_buffer[0] = 0;
    debug_control = 8;
    strcpy_s(debug_config_buffer, 0x20, &system_config_path);
    status_flags = 1;
    operation_result = process_configuration_request(get_config_manager(), &debug_config_ptr);
    
    if (operation_result == '\0') {
        debug_config_ptr = &render_settings_template;
        debug_data_ptr = system_config_buffer;
        system_config_buffer[0] = 0;
        debug_control = 0x14;
        strcpy_s(system_config_buffer, 0x20, &extended_config_path);
        status_flags = 3;
        operation_result = process_configuration_request(get_config_manager(), &debug_config_ptr);
        if (operation_result == '\0') goto config_complete;
    }
    
    operation_result = '\x01';
    
config_complete:
    // 处理配置标志位
    if ((status_flags & 2) != 0) {
        status_flags = status_flags & 0xfffffffd;
        debug_config_ptr = &physics_settings_template;
        status_flags = status_flags;
    }
    
    if ((status_flags & 1) != 0) {
        status_flags = status_flags & 0xfffffffe;
        debug_config_ptr = &physics_settings_template;
    }
    
    // 最终配置应用
    if (operation_result != '\0') {
        render_config_values[0] = 0;
        config_value = 0;
        
        // 应用物理配置
        if ((*(int64_t*)(engine_context + 0x680) != 0) &&
            (operation_result = (**(code **)(engine_context + 0x688))(render_config_values), 
             config_value = render_config_values[0], operation_result == '\0')) {
            
            if (!is_debug_mode_enabled()) {
                config_pointer = &default_engine_config;
                if (*(void**)(engine_context + 0x630) != (void*)0x0) {
                    config_pointer = *(void**)(engine_context + 0x630);
                }
                apply_engine_configuration(&global_engine_settings, config_pointer);
            }
            config_value = *(uint32_t*)(engine_context + 0x668);
        }
        *(uint32_t*)(engine_context + 0x620) = config_value;
        
        // 应用调试配置
        render_config_values[0] = 1;
        config_value = 1;
        if ((*(int64_t*)(engine_context + 0x450) == 0) ||
            (operation_result = (**(code **)(engine_context + 0x458))(render_config_values), 
             config_value = render_config_values[0], operation_result != '\0')) {
            *(uint32_t*)(engine_context + 0x3f0) = config_value;
        } else {
            if (!is_debug_mode_enabled()) {
                config_pointer = &default_engine_config;
                if (*(void**)(engine_context + 0x400) != (void*)0x0) {
                    config_pointer = *(void**)(engine_context + 0x400);
                }
                apply_engine_configuration(&global_engine_settings, config_pointer);
            }
            *(uint32_t*)(engine_context + 0x3f0) = *(uint32_t*)(engine_context + 0x438);
        }
    }
    
    // 最终状态设置
    render_config_values[0] = 0;
    if ((*(int64_t*)(engine_context + 0x680) == 0) ||
        (operation_result = (**(code **)(engine_context + 0x688))(render_config_values), 
         operation_result != '\0')) {
        *(uint32_t*)(engine_context + 0x620) = render_config_values[0];
    } else {
        if (!is_debug_mode_enabled()) {
            config_pointer = &default_engine_config;
            if (*(void**)(engine_context + 0x630) != (void*)0x0) {
                config_pointer = *(void**)(engine_context + 0x630);
            }
            apply_engine_configuration(&global_engine_settings, config_pointer);
        }
        *(uint32_t*)(engine_context + 0x620) = *(uint32_t*)(engine_context + 0x668);
    }
    
    // 调用引擎初始化完成函数
    complete_engine_initialization(engine_context);
    
    // 清理和返回
    cleanup_system_context(system_context_id ^ (uint64_t)render_config_buffer);
}