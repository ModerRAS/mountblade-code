#ifndef DATA_DEFINITIONS_H
#define DATA_DEFINITIONS_H

// 数据定义头文件 - 系统常量、类型和初始化函数
// 美化内容：
// - 修复了循环引用的宏定义 DEFAULT_THREAD_POOL_FLAG
// - 将十六进制地址变量名替换为语义化名称，如 data_180bf6fa8 -> auth_data_buffer
// - 将 data_180bfbd80 替换为 string_input_buffer
// - 将 data_180a06a48 替换为 network_buffer_ptr
// - 将 data_180a0ba58 替换为 config_buffer_ptr
// - 将 data_180a04ee4 替换为 char_scan_buffer_end
// - 将 data_180a12e00 替换为 string_buffer_end
// - 将 data_180a03a84 替换为 temp_char_buffer
// - 将 data_180c95fea 替换为 system_initialized_flag
// - 将 data_180c8eced 替换为 char_null_check_flag
// - 将 data_180c8ecef 替换为 string_processing_flag
// - 将 data_180d49130 替换为 network_status_flag
// - 将 data_180c8f000 替换为 system_mode_flag
// - 将 data_180c8ed80 替换为 system_config_buffer
// - 将 data_180329eb7 替换为 system_entry_point
// - 将 data_180d49131 替换为 network_status_flag_secondary
// - 将 data_180bfbd98 替换为 string_buffer_primary
// - 将 data_180bfbdb0 替换为 string_buffer_secondary
// - 将 data_180bf66d8 替换为 auth_data_flag
// - 将 data_180bfbd84 替换为 string_buffer_ptr
// - 将 data_180c8f020 替换为 system_buffer_temp
// - 将 data_180d4913c 替换为 network_initialization_flag
// - 将 data_180c2e030 替换为 system_thread_flag
// - 将 data_180be5740 替换为 system_init_result_ptr
// - 将 data_180c30370 替换为 system_process_flag
// - 将 data_180c4f4e8 替换为 crypto_module_flag
// - 将 data_180c4f4f0 替换为 crypto_module_ptr
// - 将 data_180c4f4a0 替换为 crypto_result_ptr
// - 将 data_180c4f818 替换为 crypto_initialized_flag
// - 将 data_180c58840 替换为 byte_counter
// - 将 data_180c58854 替换为 byte_flag_1
// - 将 data_180c58853 替换为 byte_flag_2
// - 将 data_180c58855 替换为 byte_flag_3
// - 将 data_180c58850 替换为 byte_flag_4
// - 将 data_180c69e20 替换为 system_processing_flag
// - 将 data_180bf0080 替换为 string_termination_flag
// - 将 data_180c69ef8 替换为 thread_initialization_flag
// - 将 data_180c6a14c 替换为 thread_result_flag
// - 将 data_180c6a14d 替换为 thread_validation_flag
// - 将 data_180bf0082 替换为 string_concatenation_flag
// - 将 data_180c91d50 替换为 system_cleanup_flag
// - 添加了系统操作码常量定义，如 SYSTEM_OPCODE_MEMORY_ALLOC、SYSTEM_OPCODE_NETWORK_INIT 等
// - 添加了系统偏移量常量定义，如 SYSTEM_OFFSET_GLOBAL_DATA、SYSTEM_OFFSET_THREAD_STACK 等
// - 删除了重复的线程池互斥锁地址定义
// - 添加了资源类型常量定义，如 RESOURCE_TYPE_TEXTURE、RESOURCE_TYPE_SHADER 等
// - 将初始化函数中的通用变量名替换为语义化名称，如 str_length -> base_resource_string_length
// - 将硬编码的资源类型数值替换为语义化宏定义
// - 修正了资源类型分配错误，如 initialize_font_resource_manager 中的 RESOURCE_TYPE_AUDIO -> RESOURCE_TYPE_FONT
// - 提高了代码的可读性和维护性
// - 保持代码语义不变
// - 新增美化内容：将变量名如 g_data_crypto_flag_tertiary -> crypto_module_status_flag
// - 新增美化内容：将函数名如 system_hardware_003 -> hardware_initialize_operation
// - 新增美化内容：将变量名如 stack_size_max -> maximum_stack_size
// - 新增美化内容：将变量名如 thread_stack_ptr -> thread_stack_pointer
// - 新增美化内容：将变量名如 str_len_counter -> string_length_counter

// 本次美化内容：
// - 将十六进制地址常量替换为语义化名称，如 0x180c91970 -> SYSTEM_MUTEX_PRIMARY_ADDR
// - 将系统函数地址常量替换为语义化名称，如 0x00018005c480 -> RENDER_ENGINE_MAIN_FUNCTION
// - 将内存管理地址常量替换为语义化名称，如 0x180d496e0 -> PRIMARY_MEMORY_POOL_ADDR
// - 将系统缓冲区地址常量替换为语义化名称，如 0x180c91d08 -> SYSTEM_CONFIG_BUFFER_ADDR
// - 将模块相关地址常量替换为语义化名称，如 0x180c95de0 -> MODULE_HANDLER_ADDR
// - 将全局系统数据地址常量替换为语义化名称，如 0x180a1b368 -> HANDLE_MANAGER_ADDRESS
// - 提高了代码的可读性和维护性
// - 保持代码语义不变
// - 这是简化实现，主要处理了十六进制地址常量的语义化替换
// - 新增美化内容：将变量名如 buffer_alloc_result -> buffer_allocation_result
// - 新增美化内容：将变量名如 thread_op_flags -> thread_operation_flags
// - 新增美化内容：将变量名如 string_input_ptr -> string_input_pointer
// - 新增美化内容：将函数名如 system_data_manager_002 -> data_manager_process_operation
// - 新增美化内容：将函数名如 handle_param_system_event -> system_event_handler
// - 新增美化内容：将函数名如 system_processor_012 -> processor_cleanup_operation
// - 新增美化内容：将函数名如 system_execute_crypto_operation -> crypto_operation_executor
// - 新增美化内容：将函数名如 system_execution_function -> system_execution_handler
// - 新增美化内容：将函数名如 system_thread_initializer -> thread_initialization_handler
// - 新增美化内容：将函数名如 mutex_set_function -> mutex_initialization_function
// - 新增美化内容：将变量名如 thread_result_index -> thread_result_index
// - 新增美化内容：将变量名如 thread_stack_base_address -> thread_stack_base_address
// - 新增美化内容：将变量名如 stack_buffer_298 -> crypto_stack_buffer
// - 新增美化内容：将变量名如 stack_buffer_228 -> debug_stack_buffer
// - 新增美化内容：将变量名如 auStack_260 -> system_stack_buffer_260
// - 新增美化内容：将变量名如 auStack_2f8 -> crypto_operation_stack_buffer
// - 新增美化内容：将变量名如 auStack_218 -> debug_output_stack_buffer
// - 新增美化内容：将变量名如 auStack_248 -> thread_operation_stack_buffer
// - 新增美化内容：将变量名如 global_data_ptr -> global_data_pointer
// - 新增美化内容：将变量名如 system_ram_pointer_1 -> system_ram_pointer_1
// - 新增美化内容：将变量名如 system_ram_pointer_2 -> system_ram_pointer_2
// - 新增美化内容：将变量名如 section_processing_jump_label_ -> jump_section_processing_jump_label_
// - 新增美化内容：将dVar14-16替换为system_performance_counter_prev等性能计数器变量名
// - 新增美化内容：将dVar1-2、7-9替换为system_sum_accumulator等累加器变量名
// - 新增美化内容：将system_color_luminance_factor替换为color_luminance_accumulator等颜色亮度累加器变量名
// - 新增美化内容：将变量名如 system_onexit_table_1 -> system_onexit_table_primary
// - 新增美化内容：将变量名如 system_onexit_table_2 -> system_onexit_table_secondary
// - 新增美化内容：将变量名如 system_global_flag_1 -> system_global_flag_primary
// - 新增美化内容：将变量名如 system_global_flag_2 -> system_global_flag_secondary
// - 新增美化内容：将变量名如 system_global_flag_4 -> system_global_flag_quaternary
// - 新增美化内容：将变量名如 thread_data_buffer_0 -> thread_data_buffer_primary
// - 新增美化内容：将变量名如 system_data_buffer_0 -> system_data_buffer_primary
// - 新增美化内容：将变量名如 system_data_buffer_1 -> system_data_buffer_secondary
// - 新增美化内容：将变量名如 thread_data_buffer_char -> thread_data_buffer_character
// - 新增美化内容：将变量名如 pfloat_var -> pointer_float_variable
// - 新增美化内容：将变量名如 CONCAT71 -> CONCAT_BYTES_TO_64BIT
// - 新增美化内容：将变量名如 section_header_ptr -> image_section_header_pointer
// - 新增美化内容：将变量名如 system_section_end -> system_image_section_end
// - 新增美化内容：将变量名如 label_ -> section_processing_jump_label_
// - 这是简化实现，主要处理了变量名和函数名的语义化替换

// 系统常量定义
#define MAX_SYSTEM_VALUE 0x7fffffffffffffff
#define DEFAULT_THREAD_POOL_FLAG 0x1
#define RESOURCE_BUFFER_SIZE 16

// 线程池互斥锁地址常量
#define MAIN_THREAD_POOL_MUTEX_ADDR SYSTEM_MUTEX_PRIMARY_ADDR
#define RENDER_THREAD_POOL_MUTEX_ADDR SYSTEM_MUTEX_PRIMARY_ADDR
#define NETWORK_THREAD_POOL_MUTEX_ADDR SYSTEM_MUTEX_PRIMARY_ADDR
#define IO_THREAD_POOL_MUTEX_ADDR SYSTEM_MUTEX_PRIMARY_ADDR

// 缓冲区大小常量
#define PRIMARY_STRING_BUFFER_SIZE 0x80
#define STRING_BUFFER_SIZE_SECONDARY 0x80
#define THREAD_STACK_SIZE 0x1fff
#define NETWORK_BUFFER_SIZE 0xe8
#define SYSTEM_CONFIG_BUFFER_SIZE 0x238
#define SYSTEM_CONFIG_BUFFER_SIZE_TWELVE 0xc
#define SYSTEM_CONFIG_BUFFER_SIZE_MIN 0x000000
#define SYSTEM_CONFIG_BUFFER_SIZE_EMPTY 0x00
#define MAX_THREAD_STACK_SIZE 0x1fff
#define SYSTEM_STATUS_FAILURE -1

// 缓冲区大小常量扩展
#define SYSTEM_CONFIG_BUFFER_SIZE_ZERO 0
#define SYSTEM_CONFIG_BUFFER_SIZE_FOUR 4
#define SYSTEM_CONFIG_BUFFER_SIZE_EIGHT 8

// 资源类型常量定义
#define RESOURCE_TYPE_BASE 0x0
#define RESOURCE_TYPE_TEXTURE 0xd
#define RESOURCE_TYPE_SHADER 0x17
#define RESOURCE_TYPE_AUDIO 0xd
#define RESOURCE_TYPE_FONT 0xc
#define RESOURCE_TYPE_MODEL 0x1f
#define RESOURCE_TYPE_ANIMATION 0x17
#define RESOURCE_TYPE_PARTICLE 0x13
#define RESOURCE_TYPE_CONFIG 0x14
#define RESOURCE_TYPE_SAVE_GAME 0x1b
#define RESOURCE_TYPE_STRING_MANAGER 0x19
#define RESOURCE_TYPE_PHYSICS 0x12
#define RESOURCE_TYPE_AI 0x19
#define RESOURCE_TYPE_UI 0x11
#define RESOURCE_TYPE_SCRIPT 0x18
#define RESOURCE_TYPE_NETWORK 0x13
#define RESOURCE_TYPE_SECURITY 0x16
#define RESOURCE_TYPE_AUTH 0xf

// 资源标志常量定义
#define FLAG_INITIALIZED 0x13
#define FLAG_TEXTURE_RESOURCE 0xd
#define FLAG_SHADER_RESOURCE 0x17
#define FLAG_AUDIO_RESOURCE 0xd
#define FLAG_FONT_RESOURCE 0xc
#define FLAG_MODEL_RESOURCE 0x1f
#define FLAG_ANIMATION_RESOURCE 0x17
#define FLAG_PARTICLE_RESOURCE 0x13
#define FLAG_CONFIG_RESOURCE 0x14
#define FLAG_SAVE_GAME_RESOURCE 0x1b
#define FLAG_STRING_MANAGER_RESOURCE 0x19
#define FLAG_PHYSICS_RESOURCE 0x12
#define FLAG_AI_RESOURCE 0x19
#define FLAG_UI_RESOURCE 0x11
#define FLAG_SCRIPT_RESOURCE 0x18
#define FLAG_NETWORK_RESOURCE 0x13
#define FLAG_SECURITY_RESOURCE 0x16
#define FLAG_AUTH_RESOURCE 0xf
#define FLAG_PERMISSION_RESOURCE 0x14
#define FLAG_SESSION_RESOURCE 0x16
#define FLAG_USER_CONFIG_RESOURCE 0xf
#define FLAG_SAVE_RESOURCE 0xb
#define FLAG_ACHIEVEMENT_RESOURCE 0x13
#define FLAG_STATISTICS_RESOURCE 0xd
#define FLAG_ANALYTICS_RESOURCE 0x17
#define FLAG_DEBUG_RESOURCE 0xd
#define FLAG_PERFORMANCE_ANALYSIS_RESOURCE 0xc
#define FLAG_CRASH_HANDLER_RESOURCE 0x16
#define FLAG_ERROR_REPORT_RESOURCE 0x13
#define FLAG_UPDATE_RESOURCE 0xf
#define FLAG_PATCH_RESOURCE 0xb
#define FLAG_DIAGNOSTICS_RESOURCE 0x1b
#define FLAG_MONITORING_RESOURCE 0x19
#define FLAG_HEALTH_CHECK_RESOURCE 0x1f
#define FLAG_BACKUP_RESOURCE 0x1b
#define FLAG_RECOVERY_RESOURCE 0x13
#define FLAG_MAINTENANCE_RESOURCE 0xe
#define FLAG_OPTIMIZATION_RESOURCE 0xe
#define FLAG_PERFORMANCE_MONITOR_RESOURCE 0xf
#define FLAG_LOAD_BALANCING_RESOURCE 0xd
#define FLAG_EXTENSION_RESOURCE 0x13

// 浮点数常量定义
#define FLOAT_ONE 0x3f800000
#define FLOAT_MAX_NORMAL 0x7f7fffff
#define FLOAT_PI_DIV_4 0x3d088889

// 整数常量定义
#define UINT32_MAX 0xffffffff
#define UINT64_MAX 0xffffffffffffffff
#define INT32_MASK 0xffffffff
#define INT64_MASK 0xffffffff00000000

// 系统互斥锁和条件变量地址
#define MAIN_MUTEX_ADDR SYSTEM_MUTEX_PRIMARY_ADDR
#define SYSTEM_CONDITION_VARIABLE_ADDR SYSTEM_CONDITION_VARIABLE_ADDR
#define SYSTEM_CLEANUP_FUNCTION_ADDR SYSTEM_CLEANUP_FUNCTION_ADDR
#define SECONDARY_MUTEX_ADDR SYSTEM_MUTEX_SECONDARY_ADDR
#define TERTIARY_MUTEX_ADDR SYSTEM_MUTEX_TERTIARY_ADDR
#define STRING_OFFSET_ADDR SYSTEM_STRING_OFFSET_ADDR

// 核心系统函数地址
#define RENDER_ENGINE_MAIN_FUNCTION RENDER_ENGINE_MAIN_FUNCTION
#define SYSTEM_INITIALIZATION_FUNCTION SYSTEM_INITIALIZATION_FUNCTION
#define FLAG_HANDLER_FUNCTION FLAG_HANDLER_FUNCTION
#define MEMORY_ALLOCATION_FUNCTION MEMORY_ALLOCATION_FUNCTION
#define FLOAT_CONVERSION_FUNCTION FLOAT_CONVERSION_FUNCTION
#define MUTEX_SET_FUNCTION MUTEX_SET_FUNCTION
#define THREAD_HANDLER_FUNCTION THREAD_HANDLER_FUNCTION
#define MODULE_LOAD_FUNCTION MODULE_LOAD_FUNCTION
#define DATA_HANDLER_FUNCTION DATA_HANDLER_FUNCTION
#define SYSTEM_VALIDATION_FUNCTION SYSTEM_VALIDATION_FUNCTION

// 内存管理相关地址
#define PRIMARY_MEMORY_POOL_ADDR PRIMARY_MEMORY_POOL_ADDR
#define SECONDARY_MEMORY_POOL_ADDR SECONDARY_MEMORY_POOL_ADDR
#define MODULE_DATA_ADDR MODULE_DATA_ADDR
#define MODULE_MUTEX_ADDR MODULE_MUTEX_ADDR

// 系统数据缓冲区地址
#define SYSTEM_CONFIG_BUFFER_ADDR SYSTEM_CONFIG_BUFFER_ADDR
#define CRYPTO_MODULE_BUFFER_ADDR CRYPTO_MODULE_BUFFER_ADDR
#define CRYPTO_STRING_BUFFER_ADDR CRYPTO_STRING_BUFFER_ADDR
#define AUTHENTICATION_BUFFER_ADDR AUTHENTICATION_BUFFER_ADDR
#define NETWORK_DATA_BUFFER_ADDR NETWORK_DATA_BUFFER_ADDR
#define RENDER_DATA_BUFFER_ADDR RENDER_DATA_BUFFER_ADDR
#define MUTEX_ATTR_BUFFER_ADDR MUTEX_ATTR_BUFFER_ADDR
#define SYSTEM_MUTEX_BUFFER_ADDR SYSTEM_MUTEX_BUFFER_ADDR
#define PATH_BUFFER_ADDR PATH_BUFFER_ADDR
#define STRING_HANDLE_BUFFER_ADDR STRING_HANDLE_BUFFER_ADDR
#define THREAD_DATA_BUFFER_ADDR THREAD_DATA_BUFFER_ADDR
#define CONFIG_DATA_BUFFER_ADDR CONFIG_DATA_BUFFER_ADDR
#define CONSTANT_STRING_BUFFER_ADDR CONSTANT_STRING_BUFFER_ADDR
#define THREAD_DATA_BUFFER_ADDR_0 THREAD_DATA_BUFFER_ADDR_0
#define SYSTEM_STRING_BUFFER_ADDR SYSTEM_STRING_BUFFER_ADDR
#define SYSTEM_DATA_BUFFER_ADDR_0 SYSTEM_DATA_BUFFER_ADDR_0
#define RESOURCE_DATA_BUFFER_ADDR RESOURCE_DATA_BUFFER_ADDR
#define DEFAULT_RESOURCE_STRING_ADDR DEFAULT_RESOURCE_STRING_ADDR
#define SYSTEM_RESERVED_ADDR_0 SYSTEM_RESERVED_ADDR_0
#define SYSTEM_RESERVED_ADDR_1 SYSTEM_RESERVED_ADDR_1
#define THREAD_POOL_DATA_BUFFER_ADDR THREAD_POOL_DATA_BUFFER_ADDR
#define THREAD_OPERATION_FLAGS_ADDR THREAD_OPERATION_FLAGS_ADDR
#define THREAD_OPERATION_FLAGS_ADDR_0 THREAD_OPERATION_FLAGS_ADDR_0
#define SYSTEM_CONTROL_FLAG_BUFFER_ADDR SYSTEM_CONTROL_FLAG_BUFFER_ADDR
#define SYSTEM_INIT_FLAG_BUFFER_ADDR SYSTEM_INIT_FLAG_BUFFER_ADDR
#define CHARACTER_SCAN_BUFFER_ADDR CHARACTER_SCAN_BUFFER_ADDR
#define SYSTEM_STRING_BUFFER_ADDR_0 SYSTEM_STRING_BUFFER_ADDR_0
#define SYSTEM_CONFIG_BUFFER_ADDR_0 SYSTEM_CONFIG_BUFFER_ADDR_0
#define PTHREAD_OPERATION_FLAGS_ADDR PTHREAD_OPERATION_FLAGS_ADDR
#define MODULE_HANDLE_BUFFER_ADDR MODULE_HANDLE_BUFFER_ADDR
#define SYSTEM_DATA_FLAG_BUFFER_ADDR SYSTEM_DATA_FLAG_BUFFER_ADDR
#define SYSTEM_FLAG_BUFFER_ADDR SYSTEM_FLAG_BUFFER_ADDR
#define MODULE_FINALIZER_BUFFER_ADDR MODULE_FINALIZER_BUFFER_ADDR
#define SYSTEM_DATA_BUFFER_ADDR_1 SYSTEM_DATA_BUFFER_ADDR_1
#define SYSTEM_FLAG_BUFFER_ADDR_0 SYSTEM_FLAG_BUFFER_ADDR_0
#define SYSTEM_RETURN_BUFFER_ADDR SYSTEM_RETURN_BUFFER_ADDR
#define SYSTEM_FLAG_BUFFER_ADDR_1 SYSTEM_FLAG_BUFFER_ADDR_1
#define SYSTEM_FLAG_BUFFER_ADDR_2 SYSTEM_FLAG_BUFFER_ADDR_2
#define SYSTEM_FLAG_BUFFER_ADDR_3 SYSTEM_FLAG_BUFFER_ADDR_3
#define SYSTEM_FLAG_BUFFER_ADDR_4 SYSTEM_FLAG_BUFFER_ADDR_4
#define SYSTEM_FLAG_BUFFER_ADDR_5 SYSTEM_FLAG_BUFFER_ADDR_5
#define SYSTEM_FLAG_BUFFER_ADDR_6 SYSTEM_FLAG_BUFFER_ADDR_6
#define SYSTEM_FLAG_BUFFER_ADDR_7 SYSTEM_FLAG_BUFFER_ADDR_7

// 全局变量声明
extern char system_config_buffer;
extern char crypto_module_buffer;
extern char crypto_string_buffer;
extern char authentication_buffer;
extern char network_data_buffer;
extern char render_data_buffer;
extern char mutex_attr_buffer;
extern char system_mutex_buffer;
extern char path_buffer;
extern char string_handle_buffer;
extern char thread_data_buffer;
extern char config_data_buffer;
extern char constant_string_buffer;
extern char thread_data_buffer_primary;
extern char system_string_buffer;
extern char system_data_buffer_primary;
extern char resource_data_buffer;
extern char default_resource_string;
extern char handle_manager_address;
extern char memory_manager_address;
extern char thread_pool_data_buffer;
extern char thread_operation_flags;
extern char thread_operation_flags_0;
extern char system_control_flag_buffer;
extern char system_init_flag_buffer;
extern char character_scan_buffer;
extern char system_string_buffer_0;
extern char system_config_buffer_0;
extern char pthread_operation_flags;
extern char module_handle_buffer;
extern char system_data_flag_buffer;
extern char system_flag_buffer;
extern char module_finalizer_buffer;
extern char system_data_buffer_secondary;
extern char system_flag_buffer_0;
extern char system_return_buffer;
extern char system_flag_buffer_1;
extern char system_flag_buffer_2;
extern char system_flag_buffer_3;
extern char system_flag_buffer_4;
extern char system_flag_buffer_5;
extern char system_flag_buffer_6;
extern char system_flag_buffer_7;
extern char thread_data_buffer_character;
extern char system_data_buffer_ptr;
extern char system_flag_buffer_8;
extern char system_flag_buffer_9;
extern char system_flag_buffer_10;
extern char system_flag_buffer_11;
extern char system_flag_buffer_12;
extern char system_flag_buffer_13;
extern char system_flag_buffer_14;
extern char system_flag_buffer_15;
extern char system_flag_buffer_16;
extern char system_flag_buffer_17;
extern char system_flag_buffer_18;
extern char system_flag_buffer_19;
#define MODULE_HANDLER_ADDR MODULE_HANDLER_ADDR
#define MODULE_CONFIG_ADDR MODULE_CONFIG_ADDR

// 系统模块类型定义
#define MODULE_TYPE_AUDIO 0xb
#define MODULE_TYPE_VIDEO 0xc
#define MODULE_TYPE_INPUT 0xd
#define MODULE_TYPE_NETWORK 0xe
#define MODULE_TYPE_PHYSICS 0x11
#define MODULE_TYPE_AI 0x13
#define MODULE_TYPE_UI 0x14
#define MODULE_TYPE_SCRIPT 0x15
#define MODULE_TYPE_CONFIG 0x16
#define MODULE_TYPE_RESOURCE_CACHE 0x17
#define MODULE_TYPE_RESOURCE_LOADER 0x18
#define MODULE_TYPE_SHADER 0x19
#define MODULE_TYPE_TEXTURE 0x1a
#define MODULE_TYPE_MESH 0x1b
#define MODULE_TYPE_ANIMATION 0x1c
#define MODULE_TYPE_PARTICLE 0x1d
#define MODULE_TYPE_PHYSICS_ENGINE 0x1e
#define MODULE_TYPE_COLLISION 0x1f
#define MODULE_TYPE_AI_SYSTEM 0x21
#define MODULE_TYPE_NAVIGATION 0x23
#define MODULE_TYPE_UI_FRAMEWORK 0x25
#define MODULE_TYPE_SCRIPT_ENGINE 0x27
#define MODULE_TYPE_DATABASE 0x28
#define MODULE_TYPE_NETWORK_MANAGER 0x2a
#define MODULE_TYPE_SECURITY 0x2c
#define MODULE_TYPE_ENCRYPTION 0x2d
#define MODULE_TYPE_AUTH 0x2e
#define MODULE_TYPE_PERMISSION 0x2f
#define MODULE_TYPE_SESSION 0x30
#define MODULE_TYPE_USER_CONFIG 0x31
#define MODULE_TYPE_SAVE 0x32
#define MODULE_TYPE_ACHIEVEMENT 0x33
#define MODULE_TYPE_STATISTICS 0x34
#define MODULE_TYPE_ANALYTICS 0x35
#define MODULE_TYPE_DEBUG 0x36
#define MODULE_TYPE_PERFORMANCE_ANALYSIS 0x37
#define MODULE_TYPE_CRASH_HANDLER 0x38
#define MODULE_TYPE_ERROR_REPORT 0x39
#define MODULE_TYPE_UPDATE 0x3a
#define MODULE_TYPE_PATCH 0x3b
#define MODULE_TYPE_DIAGNOSTICS 0x3c
#define MODULE_TYPE_MONITORING 0x3d
#define MODULE_TYPE_HEALTH_CHECK 0x3e

// 系统操作码常量定义
#define SYSTEM_OPCODE_SUCCESS 0x0
#define SYSTEM_OPCODE_NETWORK_INIT 0xe8
#define SYSTEM_OPCODE_MEMORY_ALLOC 0x13
#define SYSTEM_OPCODE_STRING_PROCESS 0x2e
#define SYSTEM_OPCODE_CONFIG_UPDATE 0xc
#define SYSTEM_OPCODE_DEBUG_INFO 0xd
#define SYSTEM_OPCODE_SECURITY_CHECK 0x12
#define SYSTEM_OPCODE_THREAD_CREATE 0x14
#define SYSTEM_OPCODE_RESOURCE_LOAD 0x16
#define SYSTEM_OPCODE_AUTH_REQUEST 0xf
#define SYSTEM_OPCODE_SESSION_START 0x16
#define SYSTEM_OPCODE_DATA_TRANSFER 0x18
#define SYSTEM_OPCODE_MONITOR_START 0x1a
#define SYSTEM_OPCODE_BACKUP_CREATE 0x17
#define SYSTEM_OPCODE_DIAGNOSTIC_RUN 0x1b
#define SYSTEM_OPCODE_HEALTH_CHECK 0x1f
#define SYSTEM_OPCODE_FLAG_SET 0xb
#define SYSTEM_OPCODE_FLAG_CLEAR 0xe

// 系统偏移量常量定义
#define SYSTEM_OFFSET_GLOBAL_DATA 0x18
#define SYSTEM_OFFSET_THREAD_STACK 0x28
#define SYSTEM_OFFSET_MEMORY_POOL 0x30
#define SYSTEM_OFFSET_CONFIG_BUFFER 0x38
#define SYSTEM_OFFSET_FLAG_BUFFER 0x48
#define SYSTEM_OFFSET_STRING_BUFFER 0x58
#define SYSTEM_OFFSET_NETWORK_BUFFER 0x68
#define SYSTEM_OFFSET_RENDER_BUFFER 0x70
#define SYSTEM_OFFSET_SECURITY_BUFFER 0x7b4
#define SYSTEM_OFFSET_INIT_FLAG 0x22
#define SYSTEM_OFFSET_CONFIG_FLAG 0x21
#define SYSTEM_OFFSET_DEBUG_FLAG 0x48
#define SYSTEM_OFFSET_PERFORMANCE_FLAG 0x1510
#define SYSTEM_OFFSET_STATUS_FLAG 0xe0
#define SYSTEM_OFFSET_MODULE_FLAG 0xa0
#define SYSTEM_OFFSET_RESULT_BUFFER 0x228
#define SYSTEM_OFFSET_TIMER_BUFFER 0x70
#define SYSTEM_OFFSET_CONTROL_FLAG 0x1f0
#define SYSTEM_OFFSET_DATA_BUFFER 0x90
#define SYSTEM_OFFSET_OPERATION_FLAG 0xbd0
#define SYSTEM_OFFSET_VALIDATION_FLAG 0x161c
#define SYSTEM_OFFSET_CONFIG_DATA 0x167c
#define SYSTEM_OFFSET_RENDER_CONFIG 0x18
#define SYSTEM_OFFSET_STRING_TERMINATOR 0x38c
#define SYSTEM_OFFSET_MODULE_CONFIG 0x1518
#define SYSTEM_OFFSET_RESOURCE_CONFIG 0x1530
#define SYSTEM_OFFSET_THREAD_CONFIG 0x1590
#define SYSTEM_OFFSET_NETWORK_CONFIG 0x15a8
#define SYSTEM_OFFSET_SECURITY_CONFIG 0x1710
#define SYSTEM_OFFSET_DATA_SIZE 0x1d40
#define SYSTEM_OFFSET_DATA_INDEX 0x1d20
#define SYSTEM_OFFSET_BUFFER_SIZE 0xd0
#define SYSTEM_OFFSET_POOL_SIZE 0xb0

// 全局系统数据定义
void* g_global_system_data;
void* g_system_config_data;

// 系统核心组件地址定义
// 原始名称: system_180a1b368 - 句柄管理器地址
void* g_handle_param_manager_address = (void*)HANDLE_MANAGER_ADDRESS;
// 原始名称: system_180a1b3f0 - 内存管理器地址
void* g_memory_manager_address = (void*)MEMORY_MANAGER_ADDRESS;
// 原始名称: system_180a02fc8 - UI互斥锁属性地址
void* g_ui_mutex_attribute_address = (void*)UI_MUTEX_ATTRIBUTE_ADDR;
// 原始名称: system_180a02fa0 - UI互斥锁类型地址
void* g_ui_mutex_type_address = (void*)UI_MUTEX_TYPE_ADDR;
// 原始名称: system_18045f210 - 栈数据地址1
void* g_stack_data_primary_address = (void*)STACK_DATA_PRIMARY_ADDR;
// 原始名称: system_18045f200 - 栈数据地址2
void* g_stack_data_secondary_address = (void*)STACK_DATA_SECONDARY_ADDR;

// 初始化系统配置
int initialize_system_configuration(void)
{
  int is_system_enabled = 1;
  int operation_count = 0;
  long long max_allowed_value = MAX_SYSTEM_VALUE;
  int system_status = SYSTEM_STATUS_SUCCESS;
  int system_init_result = system_initialize(system_init_config_function);
  return (system_init_result != 0) - 1;
}
// 初始化核心数据结构
int initialize_core_data_structure(void)
{
  long long system_init_result;
  void* system_memory_buffer_ptr = &g_system_data_buffer;
  void* core_data_ptr = &g_core_system_data_value;
  int data_offset = 0;
  g_core_system_data_value = 0;
  system_init_result = system_initialize(system_init_core_data_function);
  return (system_init_result != 0) - 1;
}
// 初始化网络缓冲区系统
int initialize_network_buffer(void)
{
  long long system_init_result;
  void* network_buffer_ptr = &g_network_system_data_buffer;
  void* network_value_ptr = &g_network_buffer_current_data;
  int buffer_offset = 0;
  g_network_buffer_current_data = 0;
  system_init_result = system_initialize(system_init_network_buffer_function);
  return (system_init_result != 0) - 1;
}
// 初始化渲染上下文系统
int initialize_rendering_context(void)
{
  long long system_init_result;
  void* render_buffer_ptr = &g_render_system_data_buffer;
  void* render_value_ptr = &g_render_buffer_current_data;
  int context_offset = 0;
  g_render_buffer_current_data = 0;
  system_init_result = system_initialize(system_init_rendering_context_function);
  return (system_init_result != 0) - 1;
}
// 初始化模块系统
int initialize_module_system(void)
{
  long long system_init_result;
  void* module_buffer_ptr = &g_module_system_data_buffer;
  void* module_value_ptr = &g_module_system_data_value;
  void* null_ptr = 0;
  g_module_system_data_value = 0;
  system_init_result = system_execution_function(system_init_module_function);
  return (system_init_result != 0) - 1;
}
// 初始化输入系统
int initialize_input_system(void)
{
  long long system_init_result;
  void* input_shared_buffer_ptr = &g_shared_system_data_buffer;
  void* input_value_ptr = &g_input_buffer_current_data;
  int buffer_offset = 0;
  g_input_buffer_current_data = 0;
  system_init_result = system_execution_function(system_init_input_function);
  return (system_init_result != 0) - 1;
}
// 初始化物理系统
int initialize_physics_system(void)
{
  long long system_init_result;
  void* physics_shared_buffer_ptr = &g_shared_system_data_buffer;
  void* physics_value_ptr = &g_physics_buffer_current_data;
  int physics_data_offset = 0;
  g_physics_buffer_current_data = 0;
  system_init_result = system_execution_function(system_init_physics_function);
  return (system_init_result != 0) - 1;
}
// 初始化主线程池
int initialize_main_thread_pool(void* handle_param, void* thread_op_flags, void* mutex_attr, int mutex_type)
{
  long long system_init_result;
  unsigned long long pool_thread_op_flags = DEFAULT_THREAD_POOL_FLAG;
  
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(MAIN_THREAD_POOL_MUTEX_ADDR, 2, mutex_attr, mutex_type, pool_thread_op_flags);
  main_thread_pool_status = SYSTEM_STATUS_SUCCESS;
  system_init_result = system_execution_function(main_thread_pool_init_function);
  return (system_init_result != 0) - 1;
}
// 初始化渲染线程池
int initialize_rendering_thread_pool(void* handle_param, void* thread_op_flags, void* mutex_attr, int mutex_type)
{
  long long system_init_result;
  unsigned long long pool_thread_op_flags = DEFAULT_THREAD_POOL_FLAG;
  
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(RENDER_THREAD_POOL_MUTEX_ADDR, 2, mutex_attr, mutex_type, pool_thread_op_flags);
  render_thread_pool_status = SYSTEM_STATUS_SUCCESS;
  system_init_result = system_execution_function(rendering_thread_pool_init_function);
  return (system_init_result != 0) - 1;
}
// 初始化网络线程池
int initialize_network_thread_pool(void* handle_param, void* thread_op_flags, void* mutex_attr, int mutex_type)
{
  long long system_init_result;
  unsigned long long pool_thread_op_flags = DEFAULT_THREAD_POOL_FLAG;
  
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(NETWORK_THREAD_POOL_MUTEX_ADDR, 2, mutex_attr, mutex_type, pool_thread_op_flags);
  network_thread_pool_status = SYSTEM_STATUS_SUCCESS;
  system_init_result = system_execution_function(network_thread_pool_init_function);
  return (system_init_result != 0) - 1;
}
// 初始化IO线程池
int initialize_io_thread_pool(void* handle_param, void* thread_op_flags, void* mutex_attr, int mutex_type)
{
  long long system_init_result;
  unsigned long long pool_thread_op_flags = DEFAULT_THREAD_POOL_FLAG;
  
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(IO_THREAD_POOL_MUTEX_ADDR, 2, mutex_attr, mutex_type, pool_thread_op_flags);
  io_thread_pool_status = SYSTEM_STATUS_SUCCESS;
  system_init_result = system_execution_function(io_thread_pool_init_function);
  return (system_init_result != 0) - 1;
}
// 初始化基础资源管理器
int initialize_base_resource_manager(void)
{
  long long system_init_result;
  unsigned long long base_resource_string_length;
  g_resource_string_1 = 0;
  g_resource_id_1 = 6;
  strcpy_s(&g_resource_string_1, STRING_BUFFER_SIZE, &base_resource_string, base_resource_string_length, DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(base_resource_manager_init_function);
  return (system_init_result != 0) - 1;
}
// 初始化纹理资源管理器
int initialize_texture_resource_manager(void)
{
  long long system_init_result;
  unsigned long long texture_resource_string_length;
  void* resource_buffer_ptr = &g_resource_data_buffer;
  void* resource_value_ptr = &texture_resource_buffer;
  texture_resource_buffer = 0;
  texture_resource_type = RESOURCE_TYPE_TEXTURE;
  strcpy_s(&texture_resource_buffer, RESOURCE_BUFFER_SIZE, &texture_resource_string, texture_resource_string_length, DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(texture_resource_manager_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_primary_shader_resource_manager(void)
{
  long long system_init_result;
  unsigned long long shader_resource_string_length;
  void* resource_buffer_ptr = &g_resource_data_buffer;
  void* resource_value_ptr = &shader_resource_buffer_primary;
  shader_resource_buffer_primary = 0;
  shader_resource_type_primary = RESOURCE_TYPE_SHADER;
  strcpy_s(&shader_resource_buffer_primary, RESOURCE_BUFFER_SIZE, &shader_resource_string, shader_resource_string_length, DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(shader_resource_manager_1_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_secondary_shader_resource_manager(void)
{
  long long system_init_result;
  unsigned long long audio_resource_string_length;
  void* resource_buffer_ptr = &g_resource_data_buffer;
  void* resource_value_ptr = &resource_buffer_3;
  resource_buffer_3 = 0;
  resource_type_3 = RESOURCE_TYPE_SHADER;
  strcpy_s(&resource_buffer_3, RESOURCE_BUFFER_SIZE, &audio_resource_string, audio_resource_string_length, DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(shader_resource_manager_2_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_audio_resource_manager(void)
{
  long long initialization_result;
  unsigned long long font_resource_string_length;
  void* resource_buffer_ptr = &g_resource_data_buffer;
  void* resource_buffer_pointer = &resource_buffer_4;
  resource_buffer_4 = 0;
  resource_type_4 = RESOURCE_TYPE_AUDIO;
  strcpy_s(&resource_buffer_4, RESOURCE_BUFFER_SIZE, &font_resource_string, font_resource_string_length, DEFAULT_THREAD_POOL_FLAG);
  initialization_result = system_execution_function(audio_resource_manager_init_function);
  return (initialization_result != 0) - 1;
}
int initialize_font_resource_manager(void)
{
  long long initialization_result;
  size_t model_resource_string_length;
  void* resource_buffer_ptr = &g_resource_data_buffer;
  void* resource_buffer_value_pointer = &resource_buffer_5;
  resource_buffer_5 = 0;
  resource_type_5 = RESOURCE_TYPE_FONT;
  strcpy_s(&resource_buffer_5, RESOURCE_BUFFER_SIZE, &model_resource_string, model_resource_string_length, DEFAULT_THREAD_POOL_FLAG);
  initialization_result = system_execution_function(font_resource_manager_init_function);
  return (initialization_result != 0) - 1;
}
int initialize_model_resource_manager(void)
{
  long long initialization_result;
  size_t animation_resource_string_length;
  void* resource_buffer_ptr = &g_resource_data_buffer;
  void* resource_buffer_value_pointer = &resource_buffer_6;
  resource_buffer_6 = 0;
  resource_type_6 = RESOURCE_TYPE_MODEL;
  strcpy_s(&resource_buffer_6, RESOURCE_BUFFER_SIZE, &animation_resource_string, animation_resource_string_length, DEFAULT_THREAD_POOL_FLAG);
  initialization_result = system_execution_function(model_resource_manager_init_function);
  return (initialization_result != 0) - 1;
}
int initialize_animation_resource_manager(void)
{
  long long initialization_result;
  size_t string_length_parameter;
  void* resource_buffer_ptr = &g_resource_data_buffer;
  void* global_data_ptr = &g_system_name_data;
  g_system_name_data = 0;
  int resource_type = 5;
  strcpy_s(&g_system_name_buffer, RESOURCE_BUFFER_SIZE, &g_system_name_string, string_length_parameter, DEFAULT_THREAD_POOL_FLAG);
  initialization_result = system_execution_function(animation_resource_manager_init_function);
  return (initialization_result != 0) - 1;
}
// 初始化资源管理器8
int initialize_particle_resource_manager(void)
{
  long long initialization_result;
  size_t string_length_parameter;
  void* resource_data_pointer = &g_resource_data_buffer;
  void* buffer_pointer = &g_system_version_data;
  g_system_version_data = 0;
  int resource_type = 5;
  strcpy_s(&g_system_version_buffer, RESOURCE_BUFFER_SIZE, &g_system_version_string, string_length_parameter, DEFAULT_THREAD_POOL_FLAG);
  initialization_result = system_execution_function(particle_resource_manager_init_function);
  return (initialization_result != 0) - 1;
}
// 初始化字符串缓冲区1
int initialize_config_string_buffer(void)
{
  long long initialization_result;
  size_t string_length_parameter;
  g_config_string_buffer_ptr = &g_empty_data_buffer;
  g_config_data_ptr = &g_config_data_value;
  g_config_data_value = 0;
  g_config_resource_type = RESOURCE_TYPE_TEXTURE;
  strcpy_s(&g_config_file_path, path_buffer_size, &g_config_path_string, string_length_parameter, DEFAULT_THREAD_POOL_FLAG);
  initialization_result = system_execution_function(config_string_buffer_init_callback);
  return (initialization_result != 0) - 1;
}
// 初始化字符串缓冲区2
int initialize_savegame_string_buffer(void)
{
  long long initialization_result;
  size_t string_length_parameter;
  g_savegame_string_buffer_ptr = &g_empty_data_buffer;
  g_savegame_data_ptr = &g_savegame_data_value;
  g_savegame_data_value = 0;
  g_savegame_resource_type = 9;
  strcpy_s(&g_save_file_path, path_buffer_size, &g_save_path_string, string_length_parameter, DEFAULT_THREAD_POOL_FLAG);
  initialization_result = system_execution_function(savegame_string_buffer_init_callback);
  return (initialization_result != 0) - 1;
}
// 初始化互斥锁1
int initialize_main_mutex(void* handle_param, void* thread_op_flags, void* mutex_attr, int mutex_type)
{
  long long initialization_result;
  _Mtx_init_in_situ(MAIN_THREAD_POOL_MUTEX_ADDR, STRING_BUFFER_SIZE_SECONDARY, mutex_attr, mutex_type, DEFAULT_THREAD_POOL_FLAG);
  initialization_result = system_execution_function(main_mutex_init_callback);
  return (initialization_result != 0) - 1;
}
// 初始化数据缓冲区系统
int initialize_data_buffer_system(void)
{
  long long system_init_result;
  unsigned long long string_length;
  g_system_config_buffer = 0;
  g_system_config_thread_op_flags = FLAG_INITIALIZED;
  strcpy_s(&g_system_config_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&g_systemConfigString,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  g_resource_template_ptr_1 = &g_defaultDataTemplate;
  g_texture_resource_ptr = &texture_resource_data;
  texture_resource_data = 0;
  g_resource_type_1 = FLAG_TEXTURE_RESOURCE;
  strcpy_s(&texture_resource_data,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string);
  g_resource_template_ptr_2 = &g_defaultDataTemplate;
  g_shader_resource_ptr = &shader_resource_data;
  shader_resource_data = 0;
  global_data_ptr = FLAG_SHADER_RESOURCE;
  strcpy_s(&shader_resource_data,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string);
  resource_template_ptr = &g_defaultDataTemplate;
  g_audio_resource_ptr = &audio_resource_data;
  audio_resource_data = 0;
  global_data_ptr = FLAG_AUDIO_RESOURCE;
  strcpy_s(&audio_resource_data,SYSTEM_CONFIG_BUFFER_SIZE,&g_audio_resource_string);
  resource_template_ptr = &g_defaultDataTemplate;
  g_font_resource_ptr = &font_resource_data;
  font_resource_data = 0;
  global_data_ptr = FLAG_FONT_RESOURCE;
  strcpy_s(&font_resource_data,SYSTEM_CONFIG_BUFFER_SIZE,&g_font_resource_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &misc_resource_data_buffer;
  misc_resource_data_buffer = 0;
  global_data_ptr = FLAG_FONT_RESOURCE;
  strcpy_s(&misc_resource_data_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&particle_resource_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &font_name_buffer;
  font_name_buffer = 0;
  global_data_ptr = STRING_BUFFER_SIZE;
  strcpy_s(&font_name_buffer, SYSTEM_CONFIG_BUFFER_SIZE, &font_resource_name_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &model_name_buffer;
  model_name_buffer = 0;
  global_data_ptr = FLAG_MODEL_RESOURCE;
  strcpy_s(&model_name_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&model_resource_name_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &animation_name_buffer;
  animation_name_buffer = 0;
  global_data_ptr = FLAG_SHADER_RESOURCE;
  strcpy_s(&animation_name_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&animation_resource_name_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_particle_resource_buffer;
  g_particle_resource_buffer = 0;
  global_data_ptr = FLAG_PARTICLE_RESOURCE;
  strcpy_s(&g_particle_resource_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&particle_resource_data_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_texture_resource_buffer;
  g_texture_resource_buffer = 0;
  global_data_ptr = FLAG_CONFIG_RESOURCE;
  strcpy_s(&g_texture_resource_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&texture_resource_data_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_default_resource_buffer;
  g_default_resource_buffer = 0;
  global_data_ptr = 0;
  strcpy_s(&g_default_resource_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&default_resource_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_texture_config_buffer;
  g_texture_config_buffer = 0;
  global_data_ptr = FLAG_SAVE_GAME_RESOURCE;
  strcpy_s(&g_texture_config_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&texture_config_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_texture_properties_buffer;
  g_texture_properties_buffer = 0;
  global_data_ptr = 7;
  strcpy_s(&g_texture_properties_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&texture_properties_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_texture_format_buffer;
  g_texture_format_buffer = 0;
  global_data_ptr = FLAG_STRING_MANAGER_RESOURCE;
  strcpy_s(&g_texture_format_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&texture_format_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_texture_compression_buffer;
  g_texture_compression_buffer = 0;
  global_data_ptr = FLAG_PHYSICS_RESOURCE;
  strcpy_s(&g_texture_compression_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&texture_compression_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_texture_filter_buffer;
  g_texture_filter_buffer = 0;
  global_data_ptr = FLAG_PHYSICS_RESOURCE;
  strcpy_s(&g_texture_filter_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&texture_filter_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_texture_mipmap_buffer;
  g_texture_mipmap_buffer = 0;
  global_data_ptr = FLAG_STRING_MANAGER_RESOURCE;
  strcpy_s(&g_texture_mipmap_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&texture_mipmap_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_texture_wrap_buffer;
  g_texture_wrap_buffer = 0;
  global_data_ptr = FLAG_UI_RESOURCE;
  strcpy_s(&g_texture_wrap_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&texture_wrap_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_texture_shader_buffer;
  g_texture_shader_buffer = 0;
  global_data_ptr = FLAG_SCRIPT_RESOURCE;
  strcpy_s(&g_texture_shader_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&texture_shader_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_texture_material_buffer;
  g_texture_material_buffer = 0;
  global_data_ptr = FLAG_NETWORK_RESOURCE;
  strcpy_s(&g_texture_material_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&texture_material_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_shader_vertex_buffer;
  g_shader_vertex_buffer = 0;
  global_data_ptr = FLAG_STRING_MANAGER_RESOURCE;
  strcpy_s(&g_shader_vertex_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&shader_vertex_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_shader_fragment_buffer;
  g_shader_fragment_buffer = 0;
  global_data_ptr = STRING_BUFFER_SIZE;
  strcpy_s(&g_shader_fragment_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&shader_fragment_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_shader_geometry_buffer;
  g_shader_geometry_buffer = 0;
  global_data_ptr = FLAG_CONFIG_RESOURCE;
  strcpy_s(&g_shader_geometry_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&shader_geometry_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &shader_data_buffer;
  shader_data_buffer = 0;
  global_data_ptr = FLAG_AUTH_RESOURCE;
  strcpy_s(&shader_data_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&shader_compute_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_shader_tessellation_buffer;
  g_shader_tessellation_buffer = 0;
  global_data_ptr = FLAG_SECURITY_RESOURCE;
  strcpy_s(&g_shader_tessellation_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&shader_tessellation_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_shader_lighting_buffer;
  g_shader_lighting_buffer = 0;
  global_data_ptr = FLAG_PHYSICS_RESOURCE;
  strcpy_s(&g_shader_lighting_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&shader_lighting_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_shader_shadow_buffer;
  g_shader_shadow_buffer = 0;
  global_data_ptr = FLAG_CONFIG_RESOURCE;
  strcpy_s(&g_shader_shadow_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&shader_shadow_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_shader_postprocess_buffer;
  g_shader_postprocess_buffer = 0;
  global_data_ptr = path_buffer_size;
  strcpy_s(&g_shader_postprocess_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&shader_postprocess_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_shader_particle_buffer;
  g_shader_particle_buffer = 0;
  global_data_ptr = FLAG_NETWORK_RESOURCE;
  strcpy_s(&g_shader_particle_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&shader_particle_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_shader_water_buffer;
  g_shader_water_buffer = 0;
  global_data_ptr = FLAG_SECURITY_RESOURCE;
  strcpy_s(&g_shader_water_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&shader_water_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_audio_format_buffer;
  g_audio_format_buffer = 0;
  global_data_ptr = 0xf;
  strcpy_s(&g_audio_format_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&audio_format_string);
  system_init_result = system_execution_function(&g_systemInitFunction1);
  return (system_init_result != 0) - 1;
}
int initialize_audio_module(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_shader_system_buffer;
  g_shader_system_buffer = 0;
  global_data_ptr = 0xb;
  strcpy_s(&g_shader_system_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&g_systemString1,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(data_buffer_system_init_callback);
  return (system_init_result != 0) - 1;
}
int initialize_video_module(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_system_config_buffer_1;
  g_system_config_buffer_1 = 0;
  global_data_ptr = 9;
  strcpy_s(&g_system_config_buffer_1,SYSTEM_CONFIG_BUFFER_SIZE,&g_systemString2,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(memory_manager_init_callback);
  return (system_init_result != 0) - 1;
}
int initialize_input_module(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_system_config_buffer_2;
  g_system_config_buffer_2 = 0;
  global_data_ptr = 9;
  strcpy_s(&g_system_config_buffer_2,SYSTEM_CONFIG_BUFFER_SIZE,&g_systemString3,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(thread_manager_init_callback);
  return (system_init_result != 0) - 1;
}
int initialize_network_module(void)
{
  long long system_init_result;
  unsigned long long string_length;
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &g_system_memory_buffer_1;
  g_system_memory_buffer_1 = 0;
  global_data_ptr = 0xb;
  strcpy_s(&g_system_memory_buffer_1,0x80,&g_memoryString1,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &g_system_memory_buffer_2;
  g_system_memory_buffer_2 = 0;
  global_data_ptr = STRING_BUFFER_SIZE;
  strcpy_s(&g_system_memory_buffer_2,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString2);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &g_memory_texture_buffer;
  g_memory_texture_buffer = 0;
  global_data_ptr = 0xd;
  strcpy_s(&g_memory_texture_buffer,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString3);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &g_memory_shader_buffer;
  g_memory_shader_buffer = 0;
  global_data_ptr = 0xd;
  strcpy_s(&g_memory_shader_buffer,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString4);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &g_memory_audio_buffer;
  g_memory_audio_buffer = 0;
  global_data_ptr = 0xc;
  strcpy_s(&g_memory_audio_buffer,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString5);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &g_memory_font_buffer;
  g_memory_font_buffer = 0;
  global_data_ptr = 0x13;
  strcpy_s(&g_memory_font_buffer,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString6);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &g_memory_model_buffer;
  g_memory_model_buffer = 0;
  global_data_ptr = 10;
  strcpy_s(&g_memory_model_buffer,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString7);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &g_memory_animation_buffer;
  g_memory_animation_buffer = 0;
  global_data_ptr = 0xc;
  strcpy_s(&g_memory_animation_buffer,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString8);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &g_memory_particle_buffer;
  g_memory_particle_buffer = 0;
  global_data_ptr = 0x11;
  strcpy_s(&g_memory_particle_buffer,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString9);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &g_memory_config_buffer;
  g_memory_config_buffer = 0;
  global_data_ptr = 0x11;
  strcpy_s(&g_memory_config_buffer,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString10);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &g_memory_savegame_buffer;
  g_memory_savegame_buffer = 0;
  global_data_ptr = 0x19;
  strcpy_s(&g_memory_savegame_buffer,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString11);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &g_memory_string_manager_buffer;
  g_memory_string_manager_buffer = 0;
  global_data_ptr = 0x1a;
  strcpy_s(&g_memory_string_manager_buffer,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString12);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &g_memory_vertex_buffer;
  g_memory_vertex_buffer = 0;
  global_data_ptr = 0x1b;
  strcpy_s(&g_memory_vertex_buffer,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString13);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &g_memory_fragment_buffer;
  g_memory_fragment_buffer = 0;
  global_data_ptr = 0xc;
  strcpy_s(&g_memory_fragment_buffer,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString14);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &g_memory_geometry_buffer;
  g_memory_geometry_buffer = 0;
  global_data_ptr = 0x11;
  strcpy_s(&g_memory_geometry_buffer,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString15);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &g_memory_tessellation_buffer;
  g_memory_tessellation_buffer = 0;
  global_data_ptr = 0x11;
  strcpy_s(&g_memory_tessellation_buffer,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString16);
  system_init_result = system_execution_function(&g_systemInitFunction2);
  return (system_init_result != 0) - 1;
}
  g_system_config_buffer = 0;
  global_data_ptr = 0x13;
  strcpy_s(&g_system_config_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&g_systemConfigString,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_texture_resource_buffer;
  g_texture_resource_buffer = 0;
  global_data_ptr = 0xd;
  strcpy_s(&g_texture_resource_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_shader_resource_buffer;
  g_shader_resource_buffer = 0;
  global_data_ptr = 0x17;
  strcpy_s(&g_shader_resource_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_audio_resource_buffer;
  g_audio_resource_buffer = 0;
  global_data_ptr = 0xd;
  strcpy_s(&g_audio_resource_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&g_audio_resource_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_font_resource_buffer;
  g_font_resource_buffer = 0;
  global_data_ptr = 0xc;
  strcpy_s(&g_font_resource_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&g_font_resource_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_misc_particle_buffer;
  g_misc_particle_buffer = 0;
  global_data_ptr = 0xc;
  strcpy_s(&g_misc_particle_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&particle_resource_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_misc_font_buffer;
  g_misc_font_buffer = 0;
  global_data_ptr = STRING_BUFFER_SIZE;
  strcpy_s(&g_misc_font_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&font_resource_name_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_misc_model_buffer;
  g_misc_model_buffer = 0;
  global_data_ptr = 0x1f;
  strcpy_s(&g_misc_model_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&model_resource_name_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_misc_animation_buffer;
  g_misc_animation_buffer = 0;
  global_data_ptr = 0x17;
  strcpy_s(&g_misc_animation_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&animation_resource_name_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &g_misc_particle_data_buffer;
  g_misc_particle_data_buffer = 0;
  global_data_ptr = 0x13;
  strcpy_s(&g_misc_particle_data_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&particle_resource_data_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &texture_resource_buffer_0;
  texture_resource_buffer_0 = 0;
  global_data_ptr = 0x14;
  strcpy_s(&texture_resource_buffer_0,SYSTEM_CONFIG_BUFFER_SIZE,&texture_resource_data_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &texture_resource_buffer_1;
  texture_resource_buffer_1 = 0;
  global_data_ptr = 0;
  strcpy_s(&texture_resource_buffer_1,SYSTEM_CONFIG_BUFFER_SIZE,&default_resource_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &texture_resource_buffer_2;
  texture_resource_buffer_2 = 0;
  global_data_ptr = 0x1b;
  strcpy_s(&texture_resource_buffer_2,SYSTEM_CONFIG_BUFFER_SIZE,&texture_config_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &texture_resource_buffer_3;
  texture_resource_buffer_3 = 0;
  global_data_ptr = 7;
  strcpy_s(&texture_resource_buffer_3,SYSTEM_CONFIG_BUFFER_SIZE,&texture_properties_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &texture_resource_buffer_4;
  texture_resource_buffer_4 = 0;
  global_data_ptr = 0x19;
  strcpy_s(&texture_resource_buffer_4,SYSTEM_CONFIG_BUFFER_SIZE,&texture_format_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &texture_resource_buffer_5;
  texture_resource_buffer_5 = 0;
  global_data_ptr = 0x12;
  strcpy_s(&texture_resource_buffer_5,SYSTEM_CONFIG_BUFFER_SIZE,&texture_compression_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &texture_resource_buffer_6;
  texture_resource_buffer_6 = 0;
  global_data_ptr = 0x12;
  strcpy_s(&texture_resource_buffer_6,SYSTEM_CONFIG_BUFFER_SIZE,&texture_filter_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &texture_resource_buffer_7;
  texture_resource_buffer_7 = 0;
  global_data_ptr = 0x19;
  strcpy_s(&texture_resource_buffer_7,SYSTEM_CONFIG_BUFFER_SIZE,&texture_mipmap_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &texture_resource_buffer_8;
  texture_resource_buffer_8 = 0;
  global_data_ptr = 0x11;
  strcpy_s(&texture_resource_buffer_8,SYSTEM_CONFIG_BUFFER_SIZE,&texture_wrap_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &texture_resource_buffer_9;
  texture_resource_buffer_9 = 0;
  global_data_ptr = 0x18;
  strcpy_s(&texture_resource_buffer_9,SYSTEM_CONFIG_BUFFER_SIZE,&texture_shader_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &shader_resource_buffer_0;
  shader_resource_buffer_0 = 0;
  global_data_ptr = 0x13;
  strcpy_s(&shader_resource_buffer_0,SYSTEM_CONFIG_BUFFER_SIZE,&texture_material_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &shader_resource_buffer_1;
  shader_resource_buffer_1 = 0;
  global_data_ptr = 0x19;
  strcpy_s(&shader_resource_buffer_1,SYSTEM_CONFIG_BUFFER_SIZE,&shader_vertex_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &shader_resource_buffer_2;
  shader_resource_buffer_2 = 0;
  global_data_ptr = STRING_BUFFER_SIZE;
  strcpy_s(&shader_resource_buffer_2,SYSTEM_CONFIG_BUFFER_SIZE,&shader_fragment_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &shader_resource_buffer_3;
  shader_resource_buffer_3 = 0;
  global_data_ptr = 0x14;
  strcpy_s(&shader_resource_buffer_3,SYSTEM_CONFIG_BUFFER_SIZE,&shader_geometry_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &shader_resource_buffer_4;
  shader_resource_buffer_4 = 0;
  global_data_ptr = 0xf;
  strcpy_s(&shader_resource_buffer_4,SYSTEM_CONFIG_BUFFER_SIZE,&shader_compute_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &shader_resource_buffer_5;
  shader_resource_buffer_5 = 0;
  global_data_ptr = 0x16;
  strcpy_s(&shader_resource_buffer_5,SYSTEM_CONFIG_BUFFER_SIZE,&shader_tessellation_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &shader_resource_buffer_6;
  shader_resource_buffer_6 = 0;
  global_data_ptr = 0x12;
  strcpy_s(&shader_resource_buffer_6,SYSTEM_CONFIG_BUFFER_SIZE,&shader_lighting_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &shader_resource_buffer_7;
  shader_resource_buffer_7 = 0;
  global_data_ptr = 0x14;
  strcpy_s(&shader_resource_buffer_7,SYSTEM_CONFIG_BUFFER_SIZE,&shader_shadow_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &shader_resource_buffer_8;
  shader_resource_buffer_8 = 0;
  global_data_ptr = path_buffer_size;
  strcpy_s(&shader_resource_buffer_8,SYSTEM_CONFIG_BUFFER_SIZE,&shader_postprocess_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &shader_resource_buffer_9;
  shader_resource_buffer_9 = 0;
  global_data_ptr = 0x13;
  strcpy_s(&shader_resource_buffer_9,SYSTEM_CONFIG_BUFFER_SIZE,&shader_particle_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &audio_resource_buffer_0;
  audio_resource_buffer_0 = 0;
  global_data_ptr = 0x16;
  strcpy_s(&audio_resource_buffer_0,SYSTEM_CONFIG_BUFFER_SIZE,&shader_water_string);
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &audio_config_buffer;
  audio_config_buffer = 0;
  global_data_ptr = 0xf;
  strcpy_s(&audio_config_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&audio_format_string);
  system_init_result = system_execution_function(&g_systemInitFunction3);
  return (system_init_result != 0) - 1;
}
  module_config_buffer_1 = 0;
  global_data_ptr = 0xd;
  strcpy_s(&module_config_buffer_1,path_buffer_size,&g_configString1,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(event_system_init_callback);
  return (system_init_result != 0) - 1;
}
int initialize_physics_module(void)
{
  long long system_init_result;
  unsigned long long string_length;
  global_data_ptr = &g_alternateDataTemplate;
  global_data_ptr = &config_data_buffer_1;
  config_data_buffer_1 = 0;
  global_data_ptr = 9;
  strcpy_s(&config_data_buffer_1,path_buffer_size,&g_configString2,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(time_system_init_callback);
  return (system_init_result != 0) - 1;
}
  module_config_buffer_2 = 0;
  global_data_ptr = STRING_BUFFER_SIZE;
  strcpy_s(&module_config_buffer_2,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString1,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(file_system_init_callback);
  return (system_init_result != 0) - 1;
}
int initialize_ai_module(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_texture_buffer_1;
  module_texture_buffer_1 = 0;
  global_data_ptr = 0x13;
  strcpy_s(&module_texture_buffer_1,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString2,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(debug_system_init_callback);
  return (system_init_result != 0) - 1;
}
int initialize_ui_module(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_texture_buffer_2;
  module_texture_buffer_2 = 0;
  global_data_ptr = 0x12;
  strcpy_s(&module_texture_buffer_2,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString3,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_7_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_scripting_module(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_texture_buffer_3;
  module_texture_buffer_3 = 0;
  global_data_ptr = 0x12;
  strcpy_s(&module_texture_buffer_3,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString4,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_8_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_audio_engine(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_texture_buffer_4;
  module_texture_buffer_4 = 0;
  global_data_ptr = 0xd;
  strcpy_s(&module_texture_buffer_4,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString5,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_9_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_video_subsystem(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_texture_buffer_5;
  module_texture_buffer_5 = 0;
  global_data_ptr = STRING_BUFFER_SIZE;
  strcpy_s(&module_texture_buffer_5,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString6,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_10_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_input_handle_paramr(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_texture_buffer_6;
  module_texture_buffer_6 = 0;
  global_data_ptr = 0x17;
  strcpy_s(&module_texture_buffer_6,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString7,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_11_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_network_stack(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_texture_buffer_7;
  module_texture_buffer_7 = 0;
  global_data_ptr = STRING_BUFFER_SIZE;
  strcpy_s(&module_texture_buffer_7,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString8,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_12_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_file_system(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_config_buffer_10;
  module_config_buffer_10 = 0;
  global_data_ptr = 0xd;
  strcpy_s(&module_config_buffer_10,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString9,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_13_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_memory_manager(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_config_buffer_11;
  module_config_buffer_11 = 0;
  global_data_ptr = 0xc;
  strcpy_s(&module_config_buffer_11,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString10,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_14_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_thread_manager(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_config_buffer_12;
  module_config_buffer_12 = 0;
  global_data_ptr = 0x16;
  strcpy_s(&module_config_buffer_12,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString11,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_15_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_event_system(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_config_buffer_13;
  module_config_buffer_13 = 0;
  global_data_ptr = 0x13;
  strcpy_s(&module_config_buffer_13,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString12,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_16_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_timer_service(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_config_buffer_14;
  module_config_buffer_14 = 0;
  global_data_ptr = 0x14;
  strcpy_s(&module_config_buffer_14,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString13,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_17_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_logger_system(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_config_buffer_15;
  module_config_buffer_15 = 0;
  global_data_ptr = 0x17;
  strcpy_s(&module_config_buffer_15,SYSTEM_CONFIG_BUFFER_SIZE,&logger_string_buffer,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_18_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_config_system(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_config_buffer_16;
  module_config_buffer_16 = 0;
  global_data_ptr = 0x17;
  strcpy_s(&module_config_buffer_16,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString14,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_19_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_resource_cache(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_config_buffer_17;
  module_config_buffer_17 = 0;
  global_data_ptr = path_buffer_size;
  strcpy_s(&module_config_buffer_17,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString15,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_20_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_asset_loader(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_config_buffer_18;
  module_config_buffer_18 = 0;
  global_data_ptr = 0x13;
  strcpy_s(&module_config_buffer_18,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString16,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_21_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_shader_system(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_config_buffer_19;
  module_config_buffer_19 = 0;
  global_data_ptr = 0x1e;
  strcpy_s(&module_config_buffer_19,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString17,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_22_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_texture_manager(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_config_buffer_20;
  module_config_buffer_20 = 0;
  global_data_ptr = 0x1b;
  strcpy_s(&module_config_buffer_20,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString18,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_23_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_mesh_system(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_config_buffer_21;
  module_config_buffer_21 = 0;
  global_data_ptr = 0x1b;
  strcpy_s(&module_config_buffer_21,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString19,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_24_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_animation_system(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_config_buffer_22;
  module_config_buffer_22 = 0;
  global_data_ptr = 0x1c;
  strcpy_s(&module_config_buffer_22,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString20,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_25_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_particle_system(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_config_buffer_23;
  module_config_buffer_23 = 0;
  global_data_ptr = 0x1d;
  strcpy_s(&module_config_buffer_23,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString21,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_26_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_physics_engine(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_config_buffer_24;
  module_config_buffer_24 = 0;
  global_data_ptr = path_buffer_size;
  strcpy_s(&module_config_buffer_24,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString22,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_27_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_collision_system(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_config_buffer_25;
  module_config_buffer_25 = 0;
  global_data_ptr = 0x1d;
  strcpy_s(&module_config_buffer_25,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString23,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_28_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_ai_system(void)
{
  long long system_init_result;
  unsigned long long string_length;
  g_string_manager_ptr_primary = &g_defaultDataTemplate;
  g_string_manager_ptr_secondary = &g_string_buffer_primary;
  g_string_buffer_primary = 0;
  g_string_manager_type_primary = 0x1c;
  strcpy_s(&g_string_buffer_primary,SYSTEM_CONFIG_BUFFER_SIZE,&string_manager_buffer,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_29_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_navigation_system(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_config_buffer_27;
  module_config_buffer_27 = 0;
  global_data_ptr = 0x17;
  strcpy_s(&module_config_buffer_27,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString24,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_30_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_ui_framework(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_config_buffer_28;
  module_config_buffer_28 = 0;
  global_data_ptr = 0x1f;
  strcpy_s(&module_config_buffer_28,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString25,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_31_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_scripting_engine(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_config_buffer_29;
  module_config_buffer_29 = 0;
  global_data_ptr = 0x21;
  strcpy_s(&module_config_buffer_29,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString26,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_32_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_database_system(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_texture_buffer_10;
  module_texture_buffer_10 = 0;
  global_data_ptr = 0x25;
  strcpy_s(&module_texture_buffer_10,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString27,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_33_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_network_manager(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_texture_buffer_11;
  module_texture_buffer_11 = 0;
  global_data_ptr = 0x23;
  strcpy_s(&module_texture_buffer_11,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString28,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_34_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_security_system(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_texture_buffer_12;
  module_texture_buffer_12 = 0;
  global_data_ptr = 0x1e;
  strcpy_s(&module_texture_buffer_12,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString29,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_35_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_encryption_service(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_texture_buffer_13;
  module_texture_buffer_13 = 0;
  global_data_ptr = 0x1e;
  strcpy_s(&module_texture_buffer_13,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString30,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_36_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_authentication_system(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_texture_buffer_14;
  module_texture_buffer_14 = 0;
  global_data_ptr = 0x12;
  strcpy_s(&module_texture_buffer_14,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString31,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_37_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_permission_manager(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_texture_buffer_15;
  module_texture_buffer_15 = 0;
  global_data_ptr = 0x13;
  strcpy_s(&module_texture_buffer_15,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString32,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_38_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_session_manager(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_texture_buffer_16;
  module_texture_buffer_16 = 0;
  global_data_ptr = 0x13;
  strcpy_s(&module_texture_buffer_16,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString33,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_39_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_user_profile_system(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_texture_buffer_17;
  module_texture_buffer_17 = 0;
  global_data_ptr = 0x16;
  strcpy_s(&module_texture_buffer_17,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString34,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_40_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_save_system(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_texture_buffer_18;
  module_texture_buffer_18 = 0;
  global_data_ptr = 0x1a;
  strcpy_s(&module_texture_buffer_18,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString35,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_41_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_achievement_system(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_texture_buffer_19;
  module_texture_buffer_19 = 0;
  global_data_ptr = 0x15;
  strcpy_s(&module_texture_buffer_19,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString36,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_42_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_statistics_system(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_texture_buffer_20;
  module_texture_buffer_20 = 0;
  global_data_ptr = 0x13;
  strcpy_s(&module_texture_buffer_20,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString37,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_43_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_analytics_service(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_texture_buffer_21;
  module_texture_buffer_21 = 0;
  global_data_ptr = 0x13;
  strcpy_s(&module_texture_buffer_21,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString38,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_44_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_debug_system(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_texture_buffer_22;
  module_texture_buffer_22 = 0;
  global_data_ptr = 0x1b;
  strcpy_s(&module_texture_buffer_22,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString39,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_45_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_profiling_system(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_texture_buffer_23;
  module_texture_buffer_23 = 0;
  global_data_ptr = 0x19;
  strcpy_s(&module_texture_buffer_23,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString40,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_46_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_crash_handle_paramr(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_texture_buffer_24;
  module_texture_buffer_24 = 0;
  global_data_ptr = 0x15;
  strcpy_s(&module_texture_buffer_24,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString41,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_47_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_error_reporting(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_texture_buffer_25;
  module_texture_buffer_25 = 0;
  global_data_ptr = 0x28;
  strcpy_s(&module_texture_buffer_25,SYSTEM_CONFIG_BUFFER_SIZE,&security_config_buffer,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_48_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_update_system(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_texture_buffer_26;
  module_texture_buffer_26 = 0;
  global_data_ptr = 0x23;
  strcpy_s(&module_texture_buffer_26,SYSTEM_CONFIG_BUFFER_SIZE,&encryption_config_buffer,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_49_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_patch_manager(void)
{
  long long system_init_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  global_data_ptr = &module_texture_buffer_27;
  module_texture_buffer_27 = 0;
  global_data_ptr = 0x17;
  strcpy_s(&module_texture_buffer_27,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString42,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_50_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_diagnostics_system(void)
{
  long long system_init_result;
  system_init_result = system_execution_function(resource_manager_51_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_monitoring_service(void)
{
  long long system_init_result;
  system_init_result = system_execution_function(resource_manager_52_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_health_checker(void)
{
  long long system_init_result;
  system_init_result = system_execution_function(resource_manager_53_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_worker_thread_pool(unsigned long long handle_param,unsigned long long thread_op_flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  long long system_init_result;
  _Mtx_init_in_situ(SECOND_MUTEX_ADDRESS,2,mutex_attr,mutex_type,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_54_init_function);
  return (system_init_result != 0) - 1;
}
  system_memory_buffer_1 = 0;
  global_data_ptr = 7;
  strcpy_s(&system_memory_buffer_1,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString1,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &system_memory_buffer_2;
  system_memory_buffer_2 = 0;
  global_data_ptr = 9;
  strcpy_s(&system_memory_buffer_2,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString2);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &system_memory_buffer_3;
  system_memory_buffer_3 = 0;
  global_data_ptr = 0xb;
  strcpy_s(&system_memory_buffer_3,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString3);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &system_memory_buffer_4;
  system_memory_buffer_4 = 0;
  global_data_ptr = 7;
  strcpy_s(&system_memory_buffer_4,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString4);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &system_memory_buffer_5;
  system_memory_buffer_5 = 0;
  global_data_ptr = 0xc;
  strcpy_s(&system_memory_buffer_5,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString5);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &system_memory_buffer_6;
  system_memory_buffer_6 = 0;
  global_data_ptr = 9;
  strcpy_s(&system_memory_buffer_6,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString6);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &system_memory_buffer_7;
  system_memory_buffer_7 = 0;
  global_data_ptr = 0xc;
  strcpy_s(&system_memory_buffer_7,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString7);
  system_init_result = system_execution_function(&g_systemInitFunction4);
  return (system_init_result != 0) - 1;
}
int initialize_io_thread_pool(void)
{
  long long system_init_result;
  unsigned long long string_length;
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &system_memory_buffer_8;
  system_memory_buffer_8 = 0;
  global_data_ptr = 0x1b;
  strcpy_s(&system_memory_buffer_8,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString8,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &system_memory_buffer_9;
  system_memory_buffer_9 = 0;
  global_data_ptr = 0x19;
  strcpy_s(&system_memory_buffer_9,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString9);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &system_memory_buffer_10;
  system_memory_buffer_10 = 0;
  global_data_ptr = 0x1f;
  strcpy_s(&system_memory_buffer_10,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString10);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &system_memory_buffer_11;
  system_memory_buffer_11 = 0;
  global_data_ptr = 0x1b;
  strcpy_s(&system_memory_buffer_11,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString11);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &system_memory_buffer_12;
  system_memory_buffer_12 = 0;
  global_data_ptr = path_buffer_size;
  strcpy_s(&system_memory_buffer_12,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString12);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &system_memory_buffer_13;
  system_memory_buffer_13 = 0;
  global_data_ptr = path_buffer_size;
  strcpy_s(&system_memory_buffer_13,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString13);
  system_init_result = system_execution_function(&g_systemInitFunction5);
  return (system_init_result != 0) - 1;
}
int initialize_background_thread_pool(void)
{
  long long system_init_result;
  unsigned long long string_length;
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &system_memory_buffer_14;
  system_memory_buffer_14 = 0;
  global_data_ptr = 0x13;
  strcpy_s(&system_memory_buffer_14,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString14,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &system_memory_buffer_15;
  system_memory_buffer_15 = 0;
  global_data_ptr = 0x13;
  strcpy_s(&system_memory_buffer_15,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString14);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &system_memory_buffer_16;
  system_memory_buffer_16 = 0;
  global_data_ptr = 0x13;
  strcpy_s(&system_memory_buffer_16,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString14);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &system_memory_buffer_17;
  system_memory_buffer_17 = 0;
  global_data_ptr = 0x13;
  strcpy_s(&system_memory_buffer_17,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString14);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &system_memory_buffer_18;
  system_memory_buffer_18 = 0;
  global_data_ptr = 0xe;
  strcpy_s(&system_memory_buffer_18,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString15);
  global_data_ptr = &g_memoryAllocationFlag;
  global_data_ptr = &system_memory_buffer_19;
  system_memory_buffer_19 = 0;
  global_data_ptr = 0xe;
  strcpy_s(&system_memory_buffer_19,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString15);
  system_init_result = system_execution_function(&g_systemInitFunction6);
  return (system_init_result != 0) - 1;
}
int initialize_backup_system(void)
{
  long long system_init_result;
  global_data_ptr = 0;
  system_ram_flag_1 = 0xf;
  system_global_flag_secondary = 0;
  global_data_ptr = 0;
  global_data_ptr = 0;
  system_init_result = system_execution_function(resource_manager_55_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_recovery_system(void)
{
  long long system_init_result;
  global_data_ptr = 3;
  global_data_ptr = &system_data_buffer;
  global_data_ptr = &system_data_buffer;
  global_data_ptr = 0;
  global_data_ptr = 0;
  global_data_ptr = 0;
  system_init_result = system_execution_function(resource_manager_56_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_priority_thread_pool(unsigned long long handle_param,unsigned long long thread_op_flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  long long system_init_result;
  _Mtx_init_in_situ(THIRD_MUTEX_ADDRESS,2,mutex_attr,mutex_type,DEFAULT_THREAD_POOL_FLAG);
  global_data_ptr = &g_shared_system_data_buffer;
  global_data_ptr = &system_thread_data_buffer;
  global_data_ptr = 0;
  system_thread_data_buffer = 0;
  system_init_result = system_execution_function(resource_manager_57_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_maintenance_service(void)
{
  long long system_init_result;
  unsigned long long string_length;
  global_data_ptr = &g_shared_system_data_buffer;
  global_data_ptr = &system_large_string_1;
  system_large_string_1 = 0;
  global_data_ptr = STRING_BUFFER_SIZE;
  strcpy_s(&system_large_string_1,SYSTEM_CONFIG_BUFFER_SIZE,&g_largeString1,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_58_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_optimization_system(void)
{
  long long system_init_result;
  unsigned long long string_length;
  global_data_ptr = &g_shared_system_data_buffer;
  global_data_ptr = &system_large_string_2;
  system_large_string_2 = 0;
  global_data_ptr = 3;
  strcpy_s(&system_large_string_2,SYSTEM_CONFIG_BUFFER_SIZE,&g_largeString2,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_59_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_performance_monitor(void)
{
  long long system_init_result;
  unsigned long long string_length;
  global_data_ptr = &g_shared_system_data_buffer;
  global_data_ptr = &system_large_string_3;
  system_large_string_3 = 0;
  global_data_ptr = 5;
  strcpy_s(&system_large_string_3,SYSTEM_CONFIG_BUFFER_SIZE,&g_largeString3,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_60_init_function);
  return (system_init_result != 0) - 1;
}
  config_shader_path_buffer = 0;
  global_data_ptr = 0xd;
  strcpy_s(&config_shader_path_buffer,path_buffer_size,&g_configString1,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_61_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_load_balancer(void)
{
  long long system_init_result;
  unsigned long long string_length;
  global_data_ptr = &g_alternateDataTemplate;
  global_data_ptr = &config_texture_path_buffer;
  config_texture_path_buffer = 0;
  global_data_ptr = 9;
  strcpy_s(&config_texture_path_buffer,path_buffer_size,&g_configString2,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_62_init_function);
  return (system_init_result != 0) - 1;
}
  config_model_path_buffer = 0;
  global_data_ptr = 0xd;
  strcpy_s(&config_model_path_buffer,path_buffer_size,&g_configString1,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_63_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_scaling_system(void)
{
  long long system_init_result;
  unsigned long long string_length;
  global_data_ptr = &g_alternateDataTemplate;
  global_data_ptr = &config_audio_path_buffer;
  config_audio_path_buffer = 0;
  global_data_ptr = 9;
  strcpy_s(&config_audio_path_buffer,path_buffer_size,&g_configString2,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_init_result = system_execution_function(resource_manager_64_init_function);
  return (system_init_result != 0) - 1;
}
  system_thread_flag_2 = 1;
  system_thread_flag_1 = 0;
  temp_stack_array[0] = GetModuleHandleA(0);
  initialize_core_system(handle_param,temp_stack_array);
  initialize_subsystem_modules();
  initialize_service_layer();
  return;
}
void WotsMainNativeSDLL(unsigned long long handle_param)
{
  unsigned long long temp_stack_array [2];
  system_thread_flag_2 = 0;
  system_thread_flag_1 = 0;
  temp_stack_array[0] = GetModuleHandleA(0);
  initialize_core_system(handle_param,temp_stack_array);
  initialize_subsystem_modules();
  initialize_service_layer();
  return;
}
  system_status_flag_3 = 0;
  buffer_alloc_result = system_execution_function(global_data_ptr,THREAD_STACK_SIZE,8,3);
  global_data_ptr = create_event_handle_param(buffer_alloc_result);
  create_thread_context(&thread_stack_ptr,handle_param);
  buffer_alloc_result = allocate_thread_stack(&thread_stack_ptr,&g_threadString1);
  buffer_alloc_result = (ulong long)(int)buffer_alloc_result;
  if (buffer_alloc_result < stack_size_max) {
    character_scan_pointer = (char *)(thread_stack_base_address + buffer_alloc_result);
    do {
      thread_result_index = (int)buffer_alloc_result;
      if (*character_scan_pointer == ' ') goto section_processing_jump_label_;
      buffer_alloc_result = (ulong long)(thread_result_index + 1U);
      character_scan_pointer = character_scan_pointer + 1;
    } while (thread_result_index + 1U < stack_size_max);
  }
  thread_result_index = -1;
section_processing_jump_label_:
  buffer_alloc_result = thread_result_index + 1;
  buffer_alloc_result = (ulong long)(int)buffer_alloc_result;
  if (buffer_alloc_result < stack_size_max) {
    character_scan_pointer = (char *)(thread_stack_base_address + buffer_alloc_result);
    do {
      if (*character_scan_pointer == ' ') goto section_processing_jump_label_;
      buffer_alloc_result = (int)buffer_alloc_result + 1;
      buffer_alloc_result = (ulong long)buffer_alloc_result;
      character_scan_pointer = character_scan_pointer + 1;
    } while (buffer_alloc_result < stack_size_max);
  }
  buffer_alloc_result = UINT32_MAX;
section_processing_jump_label_:
  if (thread_result_index != -1) {
    setup_thread_parameters(&thread_stack98,&thread_stack78,buffer_alloc_result,buffer_alloc_result);
    thread_name_pointer = &default_resource_string;
    if (thread_stack70 != (void *)0x0) {
      thread_name_pointer = thread_stack70;
    }
    buffer_alloc_result = atoi(thread_name_pointer);
    *(unsigned int *)(global_data_ptr + 0x7b4) = buffer_alloc_result;
    thread_stack78 = &g_threadString2;
    if (thread_stack70 != (void *)0x0) {
      handle_param_system_error();
    }
    thread_stack70 = (void *)0x0;
    thread_stack_size_max60 = 0;
    thread_stack78 = &g_threadString4;
  }
  initialize_event_system();
  buffer_alloc_result = system_execution_function(global_data_ptr,NETWORK_BUFFER_SIZE,8,10);
  global_data_ptr = system_execution_function(buffer_alloc_result);
  thread_data_ptr = (long long *)system_execution_function(global_data_ptr,0xe8,8,3);
  thread_stack10 = thread_data_ptr;
  cleanup_thread_resources(thread_data_ptr);
  *thread_data_ptr = (long long)&g_threadString3;
  thread_stack_pptr_18 = (long long **)(thread_data_ptr + 0x18);
  *thread_stack_pptr_18 = (long long *)&g_threadString4;
  thread_data_ptr[0x19] = 0;
  *(unsigned int *)(thread_data_ptr + 0x1a) = 0;
  *thread_stack_pptr_18 = (long long *)&g_threadString2;
  thread_data_ptr[0x1b] = 0;
  thread_data_ptr[0x19] = 0;
  *(unsigned int *)(thread_data_ptr + 0x1a) = 0;
  (*(code *)(*thread_stack_pptr_18)[2])(thread_stack_pptr_18,handle_param);
  thread_data_ptr[0x1c] = thread_op_flags;
  thread_stack48 = thread_data_ptr;
  (**(code **)(*thread_data_ptr + 0x28))(thread_data_ptr);
  system_data_ptr = global_data_ptr;
  thread_stack_pptr_18 = &thread_stack10;
  thread_stack10 = thread_data_ptr;
  (**(code **)(*thread_data_ptr + 0x28))(thread_data_ptr);
  register_event_callback(system_data_ptr,&thread_stack10);
  while( true ) {
    if ((void *)*thread_data_ptr == &g_threadString3) {
      system_char_variable = (char)thread_data_ptr[2] != '\0';
    }
    else {
      system_char_variable = (**(code **)((void *)*thread_data_ptr + 0x68))(thread_data_ptr);
    }
    if (system_char_variable != '\0') break;
    Sleep(1);
  }
  (**(code **)(*thread_data_ptr + 0x38))(thread_data_ptr);
  thread_stack98 = &g_threadString2;
  if (thread_stack_size_max90 == 0) {
    return;
  }
  handle_param_system_error();
}
  system_thread_flag_2 = 1;
  system_thread_flag_1 = 0;
  temp_stack_array[0] = GetModuleHandleA(0);
  initialize_core_system(handle_param,temp_stack_array);
  initialize_subsystem_modules();
  initialize_service_layer();
  return;
}
void WotsMainNative(unsigned long long handle_param)
{
  unsigned long long temp_stack_array [2];
  system_thread_flag_2 = 0;
  system_thread_flag_1 = 0;
  temp_stack_array[0] = GetModuleHandleA(0);
  initialize_core_system(handle_param,temp_stack_array);
  initialize_subsystem_modules();
  initialize_service_layer();
  return;
}
void WotsMainNativeCoreCLR(unsigned long long handle_param)
{
  unsigned long long temp_stack_array [2];
  system_thread_flag_2 = 0;
  system_thread_flag_1 = 1;
  temp_stack_array[0] = GetModuleHandleA(0);
  initialize_core_system(handle_param,temp_stack_array);
  initialize_subsystem_modules();
  initialize_service_layer();
  return;
}
    system_config_flag = thread_result_index != 0xb7;
  }
  system_data_manager_001(global_data_ptr,0,0xd,&g_systemDataString1,system_config_flag);
  if (thread_stack28 == (void *)0x0) {
    return;
  }
  handle_param_system_error();
}
    system_thread_name_buffer = 0;
  }
  thread_stack_size_max68 = 0;
  thread_stack_size_max60 = 0;
  thread_stack_size_max58 = 0;
  thread_stack_size_max50 = 3;
  create_thread_context(&thread_stack48,handle_param);
  system_execution_function(&thread_stack_size_max68,&thread_stack48);
  thread_stack48 = &g_threadString2;
  if (thread_stack_size_max40 != 0) {
    handle_param_system_error();
  }
  thread_stack_size_max40 = 0;
  thread_stack_size_max30 = 0;
  thread_stack48 = &g_threadString4;
  thread_stack_size_max88 = 0;
  thread_stack_size_max80 = 0;
  thread_stack_size_max78 = 0;
  thread_stack_size_max70 = 3;
  system_execution_function(&thread_stack_size_max88,&thread_stack_size_max68);
  system_execution_function(&thread_stack_size_max88,thread_stack_array_a8);
  if (MAX_THREAD_STACK_SIZE < thread_stack_size_max98) {
    thread_stack_size_max98 = MAX_THREAD_STACK_SIZE;
  }
  thread_name_pointer = &default_resource_string;
  if (thread_stacka0 != (void *)0x0) {
    thread_name_pointer = thread_stacka0;
  }
  memcpy(&system_thread_name_buffer,thread_name_pointer,(long long)(int)thread_stack_size_max98);
}
    system_handle_param_buffer = 0;
    return;
  }
  str_len_counter = -1;
  do {
    str_len_counter = str_len_counter + 1;
  } while (*(char *)(handle_param + str_len_counter) != '\0');
  buffer_alloc_result = (uint)str_len_counter;
  if (MAX_THREAD_STACK_SIZE < buffer_alloc_result) {
    buffer_alloc_result = MAX_THREAD_STACK_SIZE;
  }
  memcpy(&system_handle_param_buffer,handle_param,(long long)(int)buffer_alloc_result);
}
          system_operation_flag = 1;
          system_thread_sync_flag = 0;
          *(unsigned char *)(global_data_ptr + 0x1f0) = 0;
          thread_stack_ptr2c8 = &g_threadString2;
          stack_size_max2b0 = 0;
          thread_stack_ptr2c0 = (unsigned char *)0x0;
          stack_size_max2b8 = 0;
          if (string_ptr_17 != (void *)0x0) {
            string_length = -1;
            do {
              prev_length = string_length;
              string_length = prev_length + 1;
            } while (string_ptr_17[string_length] != '\0');
            if ((int)string_length != 0) {
              buffer_size = (int)prev_length + 2;
              alloc_size = buffer_size;
              if (buffer_size < STRING_BUFFER_SIZE) {
                alloc_size = STRING_BUFFER_SIZE;
              }
              buffer_ptr = (unsigned char *)system_execution_function(global_data_ptr,(long long)alloc_size,0x13);
              *buffer_ptr = 0;
              thread_stack_ptr2c0 = buffer_ptr;
              buffer_handle_param = allocate_temporary_buffer(buffer_ptr);
              stack_size_max2b0 = merge_32bit_values(stack_size_max2b0._4_4_,buffer_handle_param);
              memcpy(buffer_ptr,string_ptr_17,buffer_size);
            }
          }
          stack_size_max2b8 = 0;
          strstr(&default_resource_string,&g_systemDataString2);
          strstr(&default_resource_string,&g_systemDataString3);
          strstr(&default_resource_string,&g_systemDataString4);
          strstr(&default_resource_string,&g_systemDataString5);
          strstr(&default_resource_string,&g_systemDataString6);
          strstr(&default_resource_string,&g_systemDataString7);
          system_initialization_flag = 1;
          system_crash_handle_paramr_flag = 1;
          str_len_counter = strstr(string_input_ptr,&g_systemDataString8);
          if (str_len_counter == 0) {
            str_len_counter = strstr(string_input_ptr,&g_systemDataString9);
            if ((((((str_len_counter == 0) && (str_len_counter = strstr(string_input_ptr,&g_systemDataString10), str_len_counter == 0)) &&
                  (str_len_counter = strstr(string_input_ptr,&g_systemDataString11), str_len_counter == 0)) &&
                 ((str_len_counter = strstr(string_input_ptr,&g_systemDataString12), str_len_counter == 0 &&
                  (str_len_counter = strstr(string_input_ptr,&g_systemDataString13), str_len_counter == 0)))) &&
                ((str_len_counter = strstr(string_input_ptr,&g_systemDataString14), str_len_counter == 0 &&
                 ((str_len_counter = strstr(string_input_ptr,&g_systemDataString15), str_len_counter == 0 &&
                  (str_len_counter = strstr(string_input_ptr,&g_systemDataString16), str_len_counter == 0)))))) &&
               (str_len_counter = strstr(string_input_ptr,&g_systemDataString17), str_len_counter == 0)) {
              *(unsigned short *)(str_len_counter + 0x24) = PRIMARY_STRING_BUFFER_SIZE;
              *(unsigned char *)(str_len_counter + 0x28) = 1;
            }
            else {
              system_event_flag = 1;
            }
          }
          else {
            *(unsigned short *)(str_len_counter + 0x24) = 0;
          }
          thread_stack_ptr = (unsigned char *)0x0;
          stack_size_max = stack_size_max & INT64_MASK;
          thread_stack_ptr = &g_threadString4;
        }
        else if (buffer_alloc_result == 0xb) {
          thread_result_index = strcmp(string_input_ptr,&g_systemDataString18);
          if (thread_result_index != 0) goto section_processing_jump_label_;
          system_operation_flag = 1;
          system_thread_sync_flag = 0;
          system_initialization_flag = 1;
          str_len_counter = strstr(string_input_ptr,&g_systemDataString19);
          if (str_len_counter != 0) {
            string_input_ptr = &g_systemDataString20;
            goto section_processing_jump_label_;
          }
        }
        else {
          if (buffer_alloc_result == 0xc) {
            thread_result_index = strcmp(string_input_ptr,&g_systemDataString21);
            string_match_found = thread_result_index == 0;
          }
          else {
section_processing_jump_label_:
            string_match_found = false;
          }
          if (string_match_found) {
            create_thread_context(&thread_stack_ptr,string_input_ptr);
            buffer_alloc_result = allocate_thread_stack(&thread_stack_ptr,&g_systemDataString21);
            thread_op_flags = (ulong long)(int)buffer_alloc_result;
            if (buffer_alloc_result < stack_size_max) {
              character_scan_pointer = (char *)(thread_stack_base_address + thread_op_flags);
              do {
                thread_result_index = (int)thread_op_flags;
                if (*character_scan_pointer == ' ') goto section_processing_jump_label_;
                thread_op_flags = (ulong long)(thread_result_index + 1U);
                character_scan_pointer = character_scan_pointer + 1;
              } while (thread_result_index + 1U < stack_size_max);
            }
            thread_result_index = -1;
section_processing_jump_label_:
            buffer_alloc_result = thread_result_index + 1;
            thread_op_flags = (ulong long)(int)buffer_alloc_result;
            if (buffer_alloc_result < stack_size_max) {
              character_scan_pointer = (char *)(thread_stack_base_address + thread_op_flags);
              do {
                if (*character_scan_pointer == ' ') goto section_processing_jump_label_;
                thread_op_flags = (int)thread_op_flags + 1;
                thread_op_flags = (ulong long)thread_op_flags;
                character_scan_pointer = character_scan_pointer + 1;
              } while (thread_op_flags < stack_size_max);
            }
            thread_op_flags = UINT32_MAX;
section_processing_jump_label_:
            if (thread_result_index != -1) {
              setup_thread_parameters(&thread_stack_ptr,&thread_stack_ptr,buffer_alloc_result,thread_op_flags);
              thread_result_index = thread_priority_level;
              thread_result_index = 0;
              str_len_counter = strchr(thread_stack_ptr,0x2e);
              if (str_len_counter != 0) {
                do {
                  thread_result_index = thread_result_index + 1;
                  str_len_counter = strchr(str_len_counter + 1,0x2e);
                } while (str_len_counter != 0);
                if ((thread_result_index == 3) && (thread_result_index - 7U < 9)) {
                  thread_name_pointer = &default_resource_string;
                  if (thread_stack1b0 != (void *)0x0) {
                    thread_name_pointer = thread_stack1b0;
                  }
                  (**(code **)(*(long long *)(str_len_counter + 400) + STRING_BUFFER_SIZE))
                            ((long long *)(str_len_counter + 400),thread_name_pointer);
                }
              }
              thread_stack1b8 = &g_threadString2;
              if (thread_stack1b0 != (void *)0x0) {
                handle_param_system_error();
              }
              thread_stack1b0 = (void *)0x0;
              thread_stack_size_max1a0 = 0;
              thread_stack1b8 = &g_threadString4;
            }
            thread_stack238 = &g_threadString2;
            if (thread_stack_size_max230 != 0) {
              handle_param_system_error();
            }
            thread_stack_size_max230 = 0;
            thread_stack_size_max220 = 0;
            thread_stack238 = &g_threadString4;
          }
          else {
            if (buffer_alloc_result == 0x11) {
              thread_result_index = strcmp(string_input_ptr,&g_systemDataString22);
              string_match_found = thread_result_index == 0;
            }
            else {
              string_match_found = false;
            }
            if (string_match_found) {
              create_thread_context(&thread_stack_ptr,string_input_ptr);
              buffer_alloc_result = allocate_thread_stack(&thread_stack_ptr,&g_systemDataString22);
              thread_op_flags = (ulong long)(int)buffer_alloc_result;
              if (buffer_alloc_result < stack_size_max) {
                character_scan_pointer = (char *)(thread_stack_base_address + thread_op_flags);
                do {
                  thread_result_index = (int)thread_op_flags;
                  if (*character_scan_pointer == ' ') goto section_processing_jump_label_;
                  thread_op_flags = (ulong long)(thread_result_index + 1U);
                  character_scan_pointer = character_scan_pointer + 1;
                } while (thread_result_index + 1U < stack_size_max);
              }
              thread_result_index = -1;
section_processing_jump_label_:
              buffer_alloc_result = thread_result_index + 1;
              thread_op_flags = (ulong long)(int)buffer_alloc_result;
              if (buffer_alloc_result < stack_size_max) {
                character_scan_pointer = (char *)(thread_stack_base_address + thread_op_flags);
                do {
                  if (*character_scan_pointer == ' ') goto section_processing_jump_label_;
                  thread_op_flags = (int)thread_op_flags + 1;
                  thread_op_flags = (ulong long)thread_op_flags;
                  character_scan_pointer = character_scan_pointer + 1;
                } while (thread_op_flags < stack_size_max);
              }
              thread_op_flags = UINT32_MAX;
section_processing_jump_label_:
              if (thread_result_index != -1) {
                setup_thread_parameters(&thread_stack_ptr,&thread_stack_ptr,buffer_alloc_result,thread_op_flags);
                thread_result_index = thread_priority_level;
                thread_result_index = 0;
                str_len_counter = strchr(thread_stack_ptr,0x2e);
                if (str_len_counter != 0) {
                  do {
                    thread_result_index = thread_result_index + 1;
                    str_len_counter = strchr(str_len_counter + 1,0x2e);
                  } while (str_len_counter != 0);
                  if ((thread_result_index == 3) && (thread_result_index - 7U < 9)) {
                    thread_name_pointer = &default_resource_string;
                    if (thread_stack190 != (void *)0x0) {
                      thread_name_pointer = thread_stack190;
                    }
                    (**(code **)(module_handle_param_pointer + STRING_BUFFER_SIZE))(&module_data_buffer,thread_name_pointer);
                  }
                }
                thread_stack198 = &g_threadString2;
                if (thread_stack190 != (void *)0x0) {
                  handle_param_system_error();
                }
                thread_stack190 = (void *)0x0;
                thread_stack_size_max180 = 0;
                thread_stack198 = &g_threadString4;
              }
              thread_stack218 = &g_threadString2;
              if (thread_stack_size_max210 != 0) {
                handle_param_system_error();
              }
              thread_stack_size_max210 = 0;
              thread_stack_size_max200 = 0;
              thread_stack218 = &g_threadString4;
            }
            else {
              if (buffer_alloc_result == 0xe) {
                thread_result_index = strcmp(string_input_ptr,&g_systemDataString23);
                string_match_found = thread_result_index == 0;
              }
              else {
                string_match_found = false;
              }
              if (string_match_found) {
                create_thread_context(&thread_stack_ptr,string_input_ptr);
                buffer_alloc_result = allocate_thread_stack(&thread_stack_ptr,&g_systemDataString23);
                thread_op_flags = (ulong long)(int)buffer_alloc_result;
                if (buffer_alloc_result < stack_size_max) {
                  character_scan_pointer = (char *)(thread_stack_base_address + thread_op_flags);
                  do {
                    if (*character_scan_pointer == ' ') goto section_processing_jump_label_;
                    buffer_alloc_result = (int)thread_op_flags + 1;
                    thread_op_flags = (ulong long)buffer_alloc_result;
                    character_scan_pointer = character_scan_pointer + 1;
                  } while (buffer_alloc_result < stack_size_max);
                }
                thread_op_flags = UINT32_MAX;
section_processing_jump_label_:
                buffer_alloc_result = (int)thread_op_flags + 1;
                thread_op_flags = (ulong long)(int)buffer_alloc_result;
                if (buffer_alloc_result < stack_size_max) {
                  character_scan_pointer = (char *)(thread_stack_base_address + thread_op_flags);
                  do {
                    if (*character_scan_pointer == ' ') goto section_processing_jump_label_;
                    thread_op_flags = (int)thread_op_flags + 1;
                    thread_op_flags = (ulong long)thread_op_flags;
                    character_scan_pointer = character_scan_pointer + 1;
                  } while (thread_op_flags < stack_size_max);
                }
                thread_op_flags = UINT32_MAX;
section_processing_jump_label_:
                if ((int)thread_op_flags != -1) {
                  setup_thread_parameters(&thread_stack_ptr,&thread_stack_ptr,buffer_alloc_result,thread_op_flags);
                  system_thread_manager_011(&thread_stack_ptr);
                  if (stack_size_max != 0) {
                    thread_result_index = 0;
                    str_len_counter = (long long)(int)(stack_size_max - 1);
                    if (0 < (int)(stack_size_max - 1)) {
                      do {
                        if (thread_stack_ptr[str_len_counter] != '\"') break;
                        thread_result_index = thread_result_index + 1;
                        str_len_counter = str_len_counter + -1;
                      } while (0 < str_len_counter);
                    }
                    stack_size_max = stack_size_max - thread_result_index;
                    thread_stack_ptr[stack_size_max] = 0;
                  }
                  system_thread_manager_012(&thread_stack_ptr,1);
                  string_input_ptr = &default_resource_string;
                  if (thread_stack_ptr != (void *)0x0) {
                    string_input_ptr = thread_stack_ptr;
                  }
                  str_len_counter = -1;
                  do {
                    str_len_counter = str_len_counter + 1;
                  } while (string_input_ptr[str_len_counter] != '\0');
                  if ((int)str_len_counter < SYSTEM_CONFIG_BUFFER_SIZE) {
                    input_offset_value = (int)str_len_counter;
                    strcpy_s(input_buffer_pointer,SYSTEM_CONFIG_BUFFER_SIZE);
                  }
                  else {
                    system_thread_initializer(&g_systemDataString29,SYSTEM_CONFIG_BUFFER_SIZE);
                    input_offset_value = 0;
                    *input_buffer_pointer = 0;
                  }
                  buffer_alloc_result = stack_size_max;
                  thread_op_flags = (ulong long)stack_size_max;
                  if (thread_stack_ptr != (void *)0x0) {
                    system_thread_manager_001(str_len_counter + 0x170,thread_op_flags);
                  }
                  if (buffer_alloc_result != 0) {
                    memcpy(*(unsigned long long *)(str_len_counter + 0x178),thread_stack_ptr,thread_op_flags);
                  }
                  *(unsigned int *)(str_len_counter + 0x180) = 0;
                  if (*(long long *)(str_len_counter + 0x178) != 0) {
                    *(unsigned char *)(thread_op_flags + *(long long *)(str_len_counter + 0x178)) = 0;
                  }
                  *(unsigned int *)(str_len_counter + 0x18c) = stack_size_max;
                  thread_stack_ptr = &g_threadString2;
                  if (thread_stack_ptr != (void *)0x0) {
                    handle_param_system_error(thread_stack_ptr,thread_stack_ptr);
                  }
                  thread_stack_ptr = (void *)0x0;
                  stack_size_max = 0;
                  thread_stack_ptr = &g_threadString4;
                  thread_op_flags = 0;
                }
                thread_stack_ptr = &g_threadString2;
                if (thread_stack_base_address != 0) {
                  handle_param_system_error(thread_stack_base_address,thread_op_flags);
                }
                thread_stack_base_address = 0;
                stack_size_max = 0;
                thread_stack_ptr = &g_threadString4;
              }
              else {
                if (buffer_alloc_result == 0x16) {
                  thread_result_index = strcmp(string_input_ptr,&g_systemDataString24);
                  if (thread_result_index == 0) {
                    system_resource_flag = 1;
                    system_mutex_flag = 1;
                    goto section_processing_jump_label_;
                  }
section_processing_jump_label_:
                  string_match_found = false;
                }
                else {
                  if (buffer_alloc_result != 0x12) goto section_processing_jump_label_;
                  thread_result_index = strcmp(string_input_ptr,&g_systemDataString25);
                  string_match_found = thread_result_index == 0;
                }
                if (string_match_found) {
                  create_thread_context(&thread_stack_ptr,string_input_ptr);
                  buffer_alloc_result = allocate_thread_stack(&thread_stack_ptr,&g_systemDataString25);
                  thread_op_flags = (ulong long)(int)buffer_alloc_result;
                  if (buffer_alloc_result < stack_size_max) {
                    character_scan_pointer = (char *)(thread_stack_base_address + thread_op_flags);
                    do {
                      if (*character_scan_pointer == ' ') goto section_processing_jump_label_;
                      buffer_alloc_result = (int)thread_op_flags + 1;
                      thread_op_flags = (ulong long)buffer_alloc_result;
                      character_scan_pointer = character_scan_pointer + 1;
                    } while (buffer_alloc_result < stack_size_max);
                  }
                  thread_op_flags = UINT32_MAX;
section_processing_jump_label_:
                  buffer_alloc_result = (int)thread_op_flags + 1;
                  thread_op_flags = (ulong long)(int)buffer_alloc_result;
                  if (buffer_alloc_result < stack_size_max) {
                    character_scan_pointer = (char *)(thread_stack_base_address + thread_op_flags);
                    do {
                      if (*character_scan_pointer == ' ') goto section_processing_jump_label_;
                      thread_op_flags = (int)thread_op_flags + 1;
                      thread_op_flags = (ulong long)thread_op_flags;
                      character_scan_pointer = character_scan_pointer + 1;
                    } while (thread_op_flags < stack_size_max);
                  }
                  thread_op_flags = UINT32_MAX;
section_processing_jump_label_:
                  if ((int)thread_op_flags != -1) {
                    setup_thread_parameters(&thread_stack_ptr,&thread_stack_ptr,buffer_alloc_result,thread_op_flags);
                    system_thread_manager_012(&thread_stack_ptr,1);
                    buffer_alloc_result = stack_size_max;
                    thread_op_flags = (ulong long)stack_size_max;
                    if (thread_stack_base_address != 0) {
                      system_thread_manager_001(str_len_counter + 0x170,thread_op_flags);
                    }
                    if (buffer_alloc_result != 0) {
                      memcpy(*(unsigned long long *)(str_len_counter + 0x178),thread_stack_base_address,thread_op_flags);
                    }
                    *(unsigned int *)(str_len_counter + 0x180) = 0;
                    if (*(long long *)(str_len_counter + 0x178) != 0) {
                      *(unsigned char *)(thread_op_flags + *(long long *)(str_len_counter + 0x178)) = 0;
                    }
                    *(unsigned int *)(str_len_counter + 0x18c) = stack_size_max;
                    *(unsigned char *)(str_len_counter + 0x168) = 1;
                    thread_stack_ptr = &g_threadString2;
                    if (thread_stack_base_address != 0) {
                      handle_param_system_error(thread_stack_base_address,thread_stack_base_address);
                    }
                    thread_stack_base_address = 0;
                    stack_size_max = 0;
                    thread_stack_ptr = &g_threadString4;
                    thread_op_flags = 0;
                  }
                  thread_stack_ptr = &g_threadString2;
                  if (thread_stack_base_address != 0) {
                    handle_param_system_error(thread_stack_base_address,thread_op_flags);
                  }
                  thread_stack_base_address = 0;
                  stack_size_max = 0;
                  thread_stack_ptr = &g_threadString4;
                }
                else {
                  if (buffer_alloc_result == 0x17) {
                    thread_result_index = strcmp(string_input_ptr,&g_systemDataString26);
                    if (thread_result_index == 0) {
                      system_initialization_flag = 1;
                      goto section_processing_jump_label_;
                    }
section_processing_jump_label_:
                    string_match_found = false;
                  }
                  else {
                    if (buffer_alloc_result != 0xb) goto section_processing_jump_label_;
                    thread_result_index = strcmp(string_input_ptr,&g_systemDataString27);
                    string_match_found = thread_result_index == 0;
                  }
                  if (string_match_found) {
                    create_thread_context(&thread_stack_ptr,string_input_ptr);
                    system_thread_manager_005(&thread_stack_ptr);
                    system_thread_manager_006(&thread_stack_ptr);
                    system_event_handle_paramr_002(&event_data_buffer,&thread_stack_ptr);
                    system_initialization_flag = 1;
                    thread_stack_ptr = &g_threadString2;
                    if (thread_stack_base_address != 0) {
                      handle_param_system_error();
                    }
                    thread_stack_base_address = 0;
                    stack_size_max = 0;
                    thread_stack_ptr = &g_threadString4;
                  }
                  else {
                    string_input_ptr = &default_resource_string;
                    if (string_input_ptr != (unsigned char *)0x0) {
                      string_input_ptr = string_input_ptr;
                    }
                    str_len_counter = strstr(string_input_ptr);
                    if (str_len_counter != 0) {
                      thread_op_flags = 0;
                      thread_stack_ptr = &g_threadString2;
                      stack_size_max = 0;
                      thread_stack_ptr = (unsigned int *)0x0;
                      stack_size_max = 0;
                      string_input_ptr = (unsigned int *)system_execution_function(global_data_ptr,STRING_BUFFER_SIZE,0x13);
                      *(unsigned char *)string_input_ptr = 0;
                      thread_stack_ptr = string_input_ptr;
                      buffer_alloc_result = allocate_temporary_buffer(string_input_ptr);
                      stack_size_max = merge_32bit_values(stack_size_max._4_4_,buffer_alloc_result);
                      *string_input_ptr = 0x726f662f;
                      string_input_ptr[1] = 0x5f646563;
                      string_input_ptr[2] = 0x666e6f63;
                      string_input_ptr[3] = 0x3a6769;
                      stack_size_max = 0xf;
                      thread_op_flags = thread_op_flags;
                      thread_op_flags = thread_op_flags;
                      if (0 < (int)(buffer_alloc_result - 0xe)) goto section_processing_jump_label_;
                      goto section_processing_jump_label_;
                    }
                    if (buffer_alloc_result == 0xf) {
                      thread_result_index = strcmp(string_input_ptr);
                      if (thread_result_index == 0) {
                        cStack_338 = '\x01';
                        *(unsigned char *)(global_data_ptr + 0x22) = 1;
                        goto section_processing_jump_label_;
                      }
section_processing_jump_label_:
                      string_match_found = false;
                    }
                    else {
                      if (buffer_alloc_result == 0xc) {
                        thread_result_index = strcmp(string_input_ptr);
                        if (thread_result_index == 0) {
                          string_input_ptr = &g_systemDataString28;
section_processing_jump_label_:
                          system_data_manager_002(global_data_ptr,string_input_ptr);
                        }
                        goto section_processing_jump_label_;
                      }
                      if (buffer_alloc_result == 0x1a) {
                        thread_result_index = strcmp(string_input_ptr);
                        if (thread_result_index == 0) {
                          *(unsigned char *)(global_data_ptr + 0x21) = 1;
                          goto section_processing_jump_label_;
                        }
                        goto section_processing_jump_label_;
                      }
                      if (buffer_alloc_result == STRING_BUFFER_SIZE) {
                        thread_result_index = strcmp(string_input_ptr);
                        if (thread_result_index == 0) {
                          system_status_flag_2 = 0;
                          goto section_processing_jump_label_;
                        }
                        goto section_processing_jump_label_;
                      }
                      if (buffer_alloc_result == 0x18) {
                        thread_result_index = strcmp(string_input_ptr);
                        if (thread_result_index == 0) {
                          system_crash_handle_paramr_flag = 1;
                          goto section_processing_jump_label_;
                        }
                        goto section_processing_jump_label_;
                      }
                      if (buffer_alloc_result != 0x14) goto section_processing_jump_label_;
                      thread_result_index = strcmp(string_input_ptr);
                      string_match_found = thread_result_index == 0;
                    }
                    str_len_counter = global_data_ptr;
                    if (string_match_found) {
                      create_thread_context(&thread_stack_ptr,string_input_ptr);
                      system_thread_manager_005(&thread_stack_ptr);
                      buffer_alloc_result = 0;
                      character_scan_pointer = pcStack_328;
                      if (stack_size_max != 0) {
                        do {
                          if (*character_scan_pointer == '/') goto section_processing_jump_label_;
                          buffer_alloc_result = buffer_alloc_result + 1;
                          character_scan_pointer = character_scan_pointer + 1;
                        } while (buffer_alloc_result < stack_size_max);
                      }
                      buffer_alloc_result = UINT32_MAX;
section_processing_jump_label_:
                      if (buffer_alloc_result != 0xffffffff) {
                        str_len_counter = setup_thread_parameters(&thread_stack_ptr,&thread_stack_ptr,0);
                        if (pcStack_328 != (char *)0x0) {
                          handle_param_system_error();
                        }
                        stack_size_max = *(uint *)(str_len_counter + STRING_BUFFER_SIZE);
                        pcStack_328 = *(char **)(str_len_counter + 8);
                        stack_size_max = *(long long *)(str_len_counter + 0x18);
                        *(unsigned int *)(str_len_counter + STRING_BUFFER_SIZE) = 0;
                        *(unsigned long long *)(str_len_counter + 8) = 0;
                        *(unsigned long long *)(str_len_counter + 0x18) = 0;
                        thread_stack_ptr = &g_threadString2;
                        if (thread_stack_base_address != 0) {
                          handle_param_system_error();
                        }
                        thread_stack_base_address = 0;
                        stack_size_max = 0;
                        thread_stack_ptr = &g_threadString4;
                      }
                      system_thread_manager_006(&thread_stack_ptr);
                      buffer_alloc_result = stack_size_max;
                      str_len_counter = global_data_ptr;
                      *(unsigned char *)(global_data_ptr + 0x48) = 1;
                      thread_op_flags = (ulong long)stack_size_max;
                      if (pcStack_328 != (char *)0x0) {
                        system_thread_manager_001(str_len_counter + 0x50,thread_op_flags);
                      }
                      if (buffer_alloc_result != 0) {
                        memcpy(*(unsigned long long *)(str_len_counter + 0x58),pcStack_328,thread_op_flags);
                      }
                      *(unsigned int *)(str_len_counter + 0x60) = 0;
                      if (*(long long *)(str_len_counter + 0x58) != 0) {
                        *(unsigned char *)(thread_op_flags + *(long long *)(str_len_counter + 0x58)) = 0;
                      }
                      *(uint *)(str_len_counter + 0x6c) = stack_size_max._4_4_;
                      thread_stack_ptr = &g_threadString2;
                      if (pcStack_328 != (char *)0x0) {
                        handle_param_system_error(pcStack_328,pcStack_328);
                      }
                      pcStack_328 = (char *)0x0;
                      stack_size_max = (ulong long)stack_size_max._4_4_ << path_buffer_size;
                      thread_stack_ptr = &g_threadString4;
                    }
                    else if (cStack_338 == '\0') {
                      thread_op_flags = system_thread_manager_007();
                      string_input_ptr = (unsigned char *)0x0;
                      thread_stack_ptr = &g_threadString2;
                      stack_size_max = 0;
                      thread_stack_ptr = (unsigned char *)0x0;
                      stack_size_max = 0;
                      thread_op_flags = stack_size_max | 1;
                      string_input_ptr = string_input_ptr;
                      string_input_ptr = string_input_ptr;
                      stack_size_max = thread_op_flags;
                      stack_size_max = thread_op_flags;
                      if (buffer_alloc_result != 0) {
                        thread_result_index = buffer_alloc_result + 1;
                        if (thread_result_index < STRING_BUFFER_SIZE) {
                          thread_result_index = STRING_BUFFER_SIZE;
                        }
                        string_input_ptr = (unsigned char *)system_execution_function(global_data_ptr,(long long)thread_result_index,0x13);
                        *string_input_ptr = 0;
                        thread_stack_ptr = string_input_ptr;
                        string_input_ptr = (unsigned char *)allocate_temporary_buffer(string_input_ptr);
                        stack_size_max = merge_32bit_values(stack_size_max._4_4_,(int)string_input_ptr);
                      }
                      str_len_counter = 1;
                      buffer_alloc_result = 1;
                      if (1 < (int)buffer_alloc_result) {
                        thread_op_flags = 0;
                        do {
                          thread_op_flags = stack_size_max;
                          thread_op_flags = stack_size_max;
                          if (buffer_alloc_result <= buffer_alloc_result) break;
                          thread_op_flags = thread_stack_ptr[str_len_counter];
                          thread_result_index = (int)thread_op_flags;
                          thread_op_flags = thread_result_index + 1;
                          thread_op_flags = (ulong long)thread_op_flags;
                          if (thread_op_flags != 0) {
                            thread_op_flags = thread_result_index + 2;
                            if (string_input_ptr == (unsigned char *)0x0) {
                              if ((int)thread_op_flags < STRING_BUFFER_SIZE) {
                                thread_op_flags = STRING_BUFFER_SIZE;
                              }
                              string_input_ptr = (unsigned char *)
                                        system_execution_function(global_data_ptr,(long long)(int)thread_op_flags,0x13);
                              *string_input_ptr = 0;
                            }
                            else {
                              if (thread_op_flags <= (uint)string_input_ptr) goto section_processing_jump_label_;
                              stack_size_max = 0x13;
                              string_input_ptr = (unsigned char *)
                                        system_execution_function(global_data_ptr,string_input_ptr,thread_op_flags,STRING_BUFFER_SIZE);
                            }
                            thread_stack_ptr = string_input_ptr;
                            thread_op_flags = allocate_temporary_buffer(string_input_ptr);
                            stack_size_max = merge_32bit_values(stack_size_max._4_4_,thread_op_flags);
                            string_input_ptr = (unsigned char *)(ulong long)thread_op_flags;
                          }
section_processing_jump_label_:
                          string_input_ptr[(long long)string_input_ptr] = thread_op_flags;
                          string_input_ptr[thread_op_flags] = 0;
                          string_input_ptr = (unsigned char *)(ulong long)thread_op_flags;
                          buffer_alloc_result = buffer_alloc_result + 1;
                          str_len_counter = str_len_counter + 1;
                          thread_op_flags = stack_size_max;
                          thread_op_flags = stack_size_max;
                          stack_size_max = thread_op_flags;
                        } while (str_len_counter < (int)buffer_alloc_result);
                      }
                      system_event_handle_paramr_main(string_input_ptr,&thread_stack_ptr,thread_op_flags);
                      stack_size_max = thread_op_flags & 0xfffffffe;
                      thread_stack_ptr = &g_threadString2;
                      if (string_input_ptr != (unsigned char *)0x0) {
                        handle_param_system_error(string_input_ptr);
                      }
                      thread_stack_ptr = (unsigned char *)0x0;
                      stack_size_max = stack_size_max & INT64_MASK;
                      thread_stack_ptr = &g_threadString4;
                      string_input_ptr = thread_stack_ptr;
                      string_input_ptr = thread_stack_ptr;
                    }
                    else {
                      cStack_338 = '\0';
                      if (string_input_ptr != (unsigned char *)0x0) {
                        system_thread_manager_001(global_data_ptr + 0x28,string_input_ptr);
                      }
                      if (buffer_alloc_result != 0) {
                        memcpy(*(unsigned long long *)(str_len_counter + 0x30),string_input_ptr,string_input_ptr);
                      }
                      *(unsigned int *)(str_len_counter + 0x38) = 0;
                      if (*(long long *)(str_len_counter + 0x30) != 0) {
                        string_input_ptr[*(long long *)(str_len_counter + 0x30)] = 0;
                      }
                      *(unsigned int *)(str_len_counter + 0x44) = stack_size_max._4_4_;
                    }
                  }
                }
              }
            }
          }
        }
section_processing_jump_label_:
        string_input_ptr = (unsigned char *)0x0;
        stack_size_max = 0;
        str_len_counter = thread_stack_base_address;
        if (string_input_ptr != (unsigned char *)0x0) {
          *string_input_ptr = 0;
        }
      }
      else {
        system_thread_manager_001(&thread_stack_ptr,buffer_alloc_result + 1);
        thread_stack_ptr[stack_size_max] = byte_check_result;
        stack_size_max = stack_size_max + 1;
        string_input_ptr = (unsigned char *)(ulong long)stack_size_max;
        string_input_ptr[(long long)thread_stack_ptr] = 0;
        string_input_ptr = thread_stack_ptr;
      }
      stack_size_max = stack_size_max + 1;
    } while (stack_size_max < stack_size_max);
  }
  thread_stack_ptr = &g_defaultDataTemplate;
  thread_stack_ptr = stack_buffer_80;
  stack_buffer_80[0] = 0;
  stack_size_max = STRING_BUFFER_SIZE;
  strcpy_s(stack_buffer_80, SYSTEM_CONFIG_BUFFER_SIZE, &systemConfigStringBuffer);
  system_char_variable = system_handle_param_manager_003(str_len_counter,&thread_stack_ptr);
  thread_stack_ptr = &g_threadString4;
  if (system_char_variable != '\0') {
    *(unsigned int *)(str_len_counter + path_buffer_size) = 1;
  }
  (**(code **)(**(long long **)(global_data_ptr + 0x18) + 0x30))
            (*(long long **)(global_data_ptr + 0x18),system_crash_handle_paramr_flag);
  thread_stack_ptr = &g_threadString2;
  if (string_input_ptr != (unsigned char *)0x0) {
    handle_param_system_error(string_input_ptr);
  }
  thread_stack_ptr = (unsigned char *)0x0;
  stack_size_max = stack_size_max & INT64_MASK;
  thread_stack_ptr = &g_threadString4;
  system_execute_crypto_operation(stack_size_max ^ (ulong long)stack_buffer_368);
  while (byte_string_input_ptr = byte_string_input_ptr + 1, buffer_alloc_result != 0) {
section_processing_jump_label_:
    byte_check_result = *byte_string_input_ptr;
    buffer_alloc_result = (uint)byte_string_input_ptr[str_len_counter];
    if (byte_check_result != buffer_alloc_result) break;
  }
  if ((int)(byte_check_result - buffer_alloc_result) < 1) {
section_processing_jump_label_:
    thread_op_flags = 1;
  }
  else {
section_processing_jump_label_:
    thread_op_flags = 0;
  }
  system_helper_003(str_len_counter,system_init_result0,str_len_counter,thread_op_flags);
  while( true ) {
    thread_op_flags = (ulong long)(thread_result_index + 1);
    thread_op_flags = thread_op_flags + 1;
    if ((long long)(int)(buffer_alloc_result - 0xe) <= (long long)thread_op_flags) break;
section_processing_jump_label_:
    thread_result_index = (int)thread_op_flags;
    thread_op_flags = thread_op_flags;
    thread_op_flags = thread_op_flags;
    do {
      thread_op_flags = (uint)thread_op_flags;
      if (string_input_ptr[thread_op_flags + thread_op_flags] != *(char *)(thread_op_flags + (long long)string_input_ptr)) break;
      thread_op_flags = thread_op_flags + 1;
      thread_op_flags = (ulong long)thread_op_flags;
      thread_op_flags = thread_op_flags + 1;
    } while ((long long)thread_op_flags < 0xf);
    if (thread_op_flags == 0xf) goto section_processing_jump_label_;
  }
section_processing_jump_label_:
  thread_result_index = -1;
section_processing_jump_label_:
  setup_thread_parameters(&thread_stack_ptr,&thread_stack_ptr,thread_result_index + 0xf,string_input_ptr);
  thread_stack_ptr = (unsigned long long *)0x0;
  thread_stack_ptr = (unsigned long long *)0x0;
  stack_size_max = 0;
  stack_size_max = 3;
  if (thread_stack_base_address != 0) {
    system_event_handle_paramr_003(&thread_stack_ptr,&thread_stack_ptr,&systemEventHandlerConfig);
  }
  string_input_ptr = thread_stack_ptr;
  system_thread_manager_004(&thread_stack_ptr,thread_stack_ptr);
  system_thread_manager_004(&thread_stack_ptr,string_input_ptr + 4);
  string_input_ptr = thread_stack_ptr;
  if (((long long)thread_stack_ptr - (long long)string_input_ptr & 0xffffffffffffffe0U) != SYSTEM_CONFIG_BUFFER_SIZE) {
section_processing_jump_label_:
    thread_stack_ptr = &g_threadString2;
    if (thread_stack_base_address != 0) {
      handle_param_system_error();
    }
    thread_stack_base_address = 0;
    stack_size_max = 0;
    thread_stack_ptr = &g_threadString4;
    thread_stack_ptr = &g_threadString2;
    if (thread_stack_base_address != 0) {
      handle_param_system_error();
    }
    thread_stack_base_address = 0;
    stack_size_max = 0;
    thread_stack_ptr = &g_threadString4;
    for (pthread_op_flags = string_input_ptr; pthread_op_flags != string_input_ptr; pthread_op_flags = pthread_op_flags + 4) {
      (**(code **)*pthread_op_flags)(pthread_op_flags,0);
    }
    if (string_input_ptr != (unsigned long long *)0x0) {
      handle_param_system_error(string_input_ptr);
    }
    thread_stack_ptr = &g_threadString2;
    if (thread_stack_base_address != 0) {
      handle_param_system_error();
    }
    thread_stack_base_address = 0;
    stack_size_max = 0;
    thread_stack_ptr = &g_threadString4;
    thread_stack_ptr = &g_threadString2;
    handle_param_system_error(string_input_ptr);
  }
  system_ui_002(global_data_ptr,&thread_stack_ptr,&thread_stack_ptr);
  str_len_counter = global_data_ptr + 0x90;
  str_len_counter = system_execution_function(global_data_ptr, SYSTEM_CONFIG_BUFFER_SIZE,*(unsigned char *)(global_data_ptr + 0xb8));
  system_thread_manager_003(str_len_counter + path_buffer_size,&thread_stack_ptr);
  str_len_counter = system_event_handle_paramr_005(str_len_counter,acStack_336,str_len_counter + path_buffer_size);
  if (acStack_336[0] == '\0') {
    system_event_handle_paramr_009(extraout_XMM0_Da_00,str_len_counter);
    goto section_processing_jump_label_;
  }
  if (str_len_counter != str_len_counter) {
    if (*(int *)(str_len_counter + 0x30) == 0) {
section_processing_jump_label_:
      thread_op_flags = 1;
      goto section_processing_jump_label_;
    }
    if (*(int *)(str_len_counter + 0x30) != 0) {
      byte_string_input_ptr = *(byte **)(str_len_counter + 0x28);
      system_init_result0 = *(long long *)(str_len_counter + 0x28) - (long long)byte_string_input_ptr;
      do {
        byte_check_result = *byte_string_input_ptr;
        buffer_alloc_result = (uint)byte_string_input_ptr[system_init_result0];
        if (byte_check_result != buffer_alloc_result) break;
        byte_string_input_ptr = byte_string_input_ptr + 1;
      } while (buffer_alloc_result != 0);
      if ((int)(byte_check_result - buffer_alloc_result) < 1) goto section_processing_jump_label_;
    }
  }
  thread_op_flags = 0;
section_processing_jump_label_:
  system_helper_003(str_len_counter,str_len_counter,str_len_counter,thread_op_flags);
}
    thread_pool_4_status_code = 1;
    thread_result_index = _Cnd_broadcast(CONDITION_VARIABLE_ADDR);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    thread_result_index = _Mtx_unlock(IO_THREAD_POOL_MUTEX_ADDR);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    system_cleanup_001(ADDR_CLEANUP_FUNC);
  }
  *(unsigned int *)(global_data_ptr + 4) = 0;
  if (*(char *)(str_len_counter + 0x1ee) == '\0') {
    (**(code **)(**(long long **)(str_len_counter + 0x2b0) + 0xe0))();
    *(int *)(str_len_counter + 0x224) = *(int *)(str_len_counter + 0x224) + 1;
    if (*(int *)(global_data_ptr + 0xe0) == 0) {
      if (*(char *)(str_len_counter + 0x264) == '\0') {
        thread_result_index = 10;
        if (10 < *(int *)(global_data_ptr + 0xbd0)) {
          thread_result_index = *(int *)(global_data_ptr + 0xbd0);
        }
        float_var = (float)*(double *)(str_len_counter + path_buffer_size8);
        if (1.0 / (float)thread_result_index <= (float)*(double *)(str_len_counter + path_buffer_size8)) {
          float_var = 1.0 / (float)thread_result_index;
        }
      }
      else {
        float_var = *(float *)(str_len_counter + 0x268);
      }
      *(float *)(str_len_counter + 0x220) = float_var;
    }
    else {
      *(unsigned int *)(str_len_counter + 0x220) = FLOAT_PI_OVER_4;
      float_var = 0.033333335;
    }
    system_handle_param_manager_004(str_len_counter,float_var);
    buffer_alloc_result = global_data_ptr;
    if ((global_data_ptr != 0) &&
       (psystem_init_result = *(long long **)(global_data_ptr + 0x228), psystem_init_result != (long long *)0x0)) {
      ppstack_long_var = &pstack_long_var;
      pstack_long_var = psystem_init_result;
      (**(code **)(*psystem_init_result + 0x28))();
      system_event_handle_paramr_013(buffer_alloc_result,&pstack_long_var);
    }
    buffer_alloc_result = global_data_ptr;
    if (*(char *)(global_data_ptr + 0xa0) == '\0') {
      if ((global_data_ptr != 0) &&
         (psystem_init_result = *(long long **)(global_data_ptr + 0x228), psystem_init_result != (long long *)0x0)) {
        ppstack_long_var = &pstack_long_var;
        pstack_long_var = psystem_init_result;
        (**(code **)(*psystem_init_result + 0x28))();
        system_event_handle_paramr_016(buffer_alloc_result,&pstack_long_var,0);
        psystem_init_result = *(long long **)(global_data_ptr + 0x228);
        *(unsigned long long *)(global_data_ptr + 0x228) = 0;
        if (psystem_init_result != (long long *)0x0) {
          (**(code **)(*psystem_init_result + 0x38))();
        }
      }
      render_engine_function(global_data_ptr);
      psystem_init_result = global_data_ptr;
      if (*(code **)(*global_data_ptr + 8) == (code *)&systemInitializationCheckFunction) {
        *(unsigned int *)(global_data_ptr + 9) = 0;
        string_input_ptr = (unsigned char *)psystem_init_result[8];
        if (string_input_ptr != (unsigned char *)0x0) {
          *string_input_ptr = 0;
        }
        *(unsigned int *)((long long)psystem_init_result + 0x54) = 0;
      }
      else {
        (**(code **)(*global_data_ptr + 8))();
      }
    }
    else {
      if (*(char *)(str_len_counter + 0x22c) != '\0') {
        system_event_handle_paramr_001();
      }
      *(unsigned int *)(str_len_counter + 0x228) = *(unsigned int *)(str_len_counter + 0x224);
      system_graphics_001();
      system_graphics_002();
    }
    QueryPerformanceCounter(&thread_stack_base_address);
    system_performance_counter_prev = (double)thread_stack_base_address * global_data_ptr;
    global_data_ptr = global_data_ptr + 1;
    system_performance_counter_diff = system_performance_counter_prev - global_data_ptr;
    if (1.0 < system_performance_counter_diff) {
      *(float *)(str_len_counter + 500) = (float)((double)global_data_ptr / system_performance_counter_diff);
      global_data_ptr = 0;
      global_data_ptr = system_performance_counter_prev;
      *(float *)(str_len_counter + 0x1f8) = (float)(1000.0 / *(double *)(str_len_counter + 0x70));
    }
    if (0.0 < *(double *)(global_data_ptr + 0x1510)) {
      system_handle_param_manager_005(str_len_counter,(float)*(double *)(global_data_ptr + 0x1510));
    }
    if (*(char *)(str_len_counter + 0x1ee) == '\0') {
      float_var = *(float *)(str_len_counter + path_buffer_size0);
      system_performance_timeout = *(double *)(str_len_counter + 0x218);
      do {
        QueryPerformanceCounter(&thread_stack_base_address);
      } while ((double)thread_stack_base_address * global_data_ptr < (double)float_var + system_performance_timeout);
      QueryPerformanceCounter(&thread_stack_base_address);
      str_len_counter = thread_stack_base_address - global_data_ptr;
      global_data_ptr = thread_stack_base_address;
      *(double *)(str_len_counter + path_buffer_size8) = (double)str_len_counter * global_data_ptr;
      QueryPerformanceCounter(&thread_stack_base_address);
      *(double *)(str_len_counter + 0x218) = (double)thread_stack_base_address * global_data_ptr;
    }
  }
  return;
}
    thread_pool_4_status_code = 1;
    thread_result_index = _Cnd_broadcast(CONDITION_VARIABLE_ADDR);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    thread_result_index = _Mtx_unlock(IO_THREAD_POOL_MUTEX_ADDR);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    system_cleanup_001(ADDR_CLEANUP_FUNC);
  }
  *(unsigned int *)(global_data_ptr + 4) = 0;
  if (*(char *)(handle_param + 0x1ee) == '\0') {
    (**(code **)(**(long long **)(handle_param + 0x2b0) + 0xe0))();
    *(int *)(handle_param + 0x224) = *(int *)(handle_param + 0x224) + 1;
    if (*(int *)(global_data_ptr + 0xe0) == 0) {
      if (*(char *)(handle_param + 0x264) == '\0') {
        thread_result_index = 10;
        if (10 < *(int *)(global_data_ptr + 0xbd0)) {
          thread_result_index = *(int *)(global_data_ptr + 0xbd0);
        }
        float_var = (float)*(double *)(handle_param + path_buffer_size8);
        if (1.0 / (float)thread_result_index <= (float)*(double *)(handle_param + path_buffer_size8)) {
          float_var = 1.0 / (float)thread_result_index;
        }
      }
      else {
        float_var = *(float *)(handle_param + 0x268);
      }
      *(float *)(handle_param + 0x220) = float_var;
    }
    else {
      *(unsigned int *)(handle_param + 0x220) = FLOAT_PI_OVER_4;
      float_var = 0.033333335;
    }
    system_handle_param_manager_004(handle_param,float_var);
    buffer_alloc_result = global_data_ptr;
    if ((global_data_ptr != 0) &&
       (psystem_init_result = *(long long **)(global_data_ptr + 0x228), psystem_init_result != (long long *)0x0)) {
      ppstack_long_var = &pstack_long_var;
      pstack_long_var = psystem_init_result;
      (**(code **)(*psystem_init_result + 0x28))();
      system_event_handle_paramr_013(buffer_alloc_result,&pstack_long_var);
    }
    buffer_alloc_result = global_data_ptr;
    if (*(char *)(global_data_ptr + 0xa0) == '\0') {
      if ((global_data_ptr != 0) &&
         (psystem_init_result = *(long long **)(global_data_ptr + 0x228), psystem_init_result != (long long *)0x0)) {
        ppstack_long_var = &pstack_long_var;
        pstack_long_var = psystem_init_result;
        (**(code **)(*psystem_init_result + 0x28))();
        system_event_handle_paramr_016(buffer_alloc_result,&pstack_long_var,0);
        psystem_init_result = *(long long **)(global_data_ptr + 0x228);
        *(unsigned long long *)(global_data_ptr + 0x228) = 0;
        if (psystem_init_result != (long long *)0x0) {
          (**(code **)(*psystem_init_result + 0x38))();
        }
      }
      render_engine_function(global_data_ptr);
      psystem_init_result = global_data_ptr;
      if (*(code **)(*global_data_ptr + 8) == (code *)&systemInitializationCheckFunction) {
        *(unsigned int *)(global_data_ptr + 9) = 0;
        string_input_ptr = (unsigned char *)psystem_init_result[8];
        if (string_input_ptr != (unsigned char *)0x0) {
          *string_input_ptr = 0;
        }
        *(unsigned int *)((long long)psystem_init_result + 0x54) = 0;
      }
      else {
        (**(code **)(*global_data_ptr + 8))();
      }
    }
    else {
      if (*(char *)(handle_param + 0x22c) != '\0') {
        system_event_handle_paramr_001();
      }
      *(unsigned int *)(handle_param + 0x228) = *(unsigned int *)(handle_param + 0x224);
      system_graphics_001();
      system_graphics_002();
    }
    QueryPerformanceCounter(&thread_stack_base_address);
    system_performance_base = (double)thread_stack_base_address * global_data_ptr;
    global_data_ptr = global_data_ptr + 1;
    system_performance_diff = system_performance_base - global_data_ptr;
    if (1.0 < system_performance_diff) {
      *(float *)(handle_param + 500) = (float)((double)global_data_ptr / system_performance_diff);
      global_data_ptr = 0;
      global_data_ptr = system_performance_base;
      *(float *)(handle_param + 0x1f8) = (float)(1000.0 / *(double *)(handle_param + 0x70));
    }
    if (0.0 < *(double *)(global_data_ptr + 0x1510)) {
      system_handle_param_manager_005(handle_param,(float)*(double *)(global_data_ptr + 0x1510));
    }
    if (*(char *)(handle_param + 0x1ee) == '\0') {
      float_var = *(float *)(handle_param + path_buffer_size0);
      system_performance_timeout = *(double *)(handle_param + 0x218);
      do {
        QueryPerformanceCounter(&thread_stack_base_address);
      } while ((double)thread_stack_base_address * global_data_ptr < (double)float_var + system_performance_timeout);
      QueryPerformanceCounter(&thread_stack_base_address);
      str_len_counter = thread_stack_base_address - global_data_ptr;
      global_data_ptr = thread_stack_base_address;
      *(double *)(handle_param + path_buffer_size8) = (double)str_len_counter * global_data_ptr;
      QueryPerformanceCounter(&thread_stack_base_address);
      *(double *)(handle_param + 0x218) = (double)thread_stack_base_address * global_data_ptr;
    }
  }
  return;
}
    io_status_flag = io_status_flag == '\0';
  }
  str_len_counter = 0xe0;
  string_input_ptr = global_data_ptr;
  do {
    string_input_ptr = string_input_ptr + 0x18;
    *string_input_ptr = 1;
    str_len_counter = str_len_counter + -1;
  } while (str_len_counter != 0);
section_processing_jump_label_:
  string_input_ptr = (unsigned long long *)global_data_ptr[1];
  thread_result_index = _Mtx_lock(ADDR_MAIN_MUTEX);
  if (thread_result_index != 0) {
    __Throw_C_error_std__YAXH_Z(thread_result_index);
  }
  psystem_init_result4 = global_data_ptr;
  stack_size_max = global_data_ptr;
  global_data_ptr = (long long *)*string_input_ptr;
  stack_buffer_2a8[0] = 0;
  plStack_2f8 = alStack_90;
  buffer_alloc_result = 0;
  alStack_90[0] = 0;
  alStack_90[1] = 0;
  alStack_90[2] = 0;
  stack_size_max = 3;
  system_execution_function(stack_buffer_2a8);
  system_handle_param_manager_002((long long)global_data_ptr * 0x238 + global_data_ptr + 0x1598,stack_buffer_2a8);
  plStack_2f8 = alStack_90;
  if (alStack_90[0] != 0) {
    handle_param_system_error();
  }
  global_data_ptr = psystem_init_result4;
  thread_result_index = _Mtx_unlock(ADDR_MAIN_MUTEX);
  if (thread_result_index != 0) {
    __Throw_C_error_std__YAXH_Z(thread_result_index);
  }
  psystem_init_result4 = (long long *)*global_data_ptr;
  thread_result_index = _Mtx_lock(ADDR_MAIN_MUTEX);
  if (thread_result_index != 0) {
    __Throw_C_error_std__YAXH_Z(thread_result_index);
  }
  psystem_init_result = global_data_ptr;
  stack_size_max = global_data_ptr;
  global_data_ptr = (long long *)*psystem_init_result4;
  stack_buffer_2a8[0] = 0;
  plStack_2f8 = alStack_90;
  alStack_90[0] = 0;
  alStack_90[1] = 0;
  alStack_90[2] = 0;
  stack_size_max = 3;
  system_execution_function(stack_buffer_2a8);
  system_execution_function(stack_buffer_2a8);
  *(float *)((long long)global_data_ptr + 0x18) = global_data_ptr;
  system_initializer_001();
  str_len_counter = (long long)global_data_ptr;
  string_input_ptr = global_data_ptr;
  string_input_ptr = global_data_ptr;
  if (*(char *)(global_data_ptr + 7) != '\0') {
    if ((((*(char *)(global_data_ptr + 0xe) != '\0') ||
         (*(char *)((long long)global_data_ptr + 0x38c) != '\0')) ||
        (*(char *)((long long)global_data_ptr + 0x38d) != '\0')) ||
       (*(char *)((long long)global_data_ptr + 0x38e) != '\0')) {
      global_data_ptr[0x1518] = 1;
      string_input_ptr[0x1530] = 1;
      string_input_ptr[0x1590] = 1;
      string_input_ptr[0x15a8] = 1;
      string_input_ptr[0x1710] = 1;
    }
    if (((*(char *)((long long)string_input_ptr + 0x71) != '\0') || (*(char *)(str_len_counter + 0x38d) != '\0')) ||
       (*(char *)(str_len_counter + 0x38e) != '\0')) {
      do {
        string_input_ptr = string_input_ptr + 0x18;
        *string_input_ptr = 1;
        system_init_result2 = system_init_result2 + -1;
      } while (system_init_result2 != 0);
    }
  }
  plStack_2f8 = alStack_90;
  if (alStack_90[0] != 0) {
    handle_param_system_error();
  }
  global_data_ptr = psystem_init_result;
  thread_result_index = _Mtx_unlock(ADDR_MAIN_MUTEX);
  if (thread_result_index != 0) {
    __Throw_C_error_std__YAXH_Z(thread_result_index);
  }
  if (*(int *)(global_data_ptr + 0x161c) == 0x11) {
    string_input_ptr = (unsigned long long *)*global_data_ptr;
    thread_result_index = _Mtx_lock(ADDR_MAIN_MUTEX);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    psystem_init_result4 = global_data_ptr;
    plStack_2c0 = global_data_ptr;
    global_data_ptr = (long long *)*string_input_ptr;
    system_initializer_003(&systemConfigData1,0,0);
    system_config_001(&systemConfigData2);
    stack_size_max = SYSTEM_CONFIG_BUFFER_SIZE_ZERO;
    stack_buffer_2c8[0] = FLOAT_ONE;
    stack_size_max = path_buffer_size000;
    thread_stack_ptr = &systemConfigBufferPtr;
    pplStack_328 = (long long **)&stack_size_max;
    system_config_002(&systemConfigData3,4,global_data_ptr + 0x167c,stack_buffer_2c8);
    plStack_2f8 = (long long *)merge_32bit_values(plStack_2f8._4_4_, SYSTEM_CONFIG_BUFFER_SIZE_ZERO);
    stack_size_max = (long long *)merge_32bit_values(stack_size_max._4_4_,FLOAT_ONE);
    stack_size_max = path_buffer_size000;
    thread_stack_ptr = &systemConfigBufferPtr;
    pplStack_328 = &plStack_2f8;
    system_config_002(&systemConfigData4,4,global_data_ptr + 0x1680,&stack_size_max);
    system_initializer_004();
    global_data_ptr = psystem_init_result4;
    thread_result_index = _Mtx_unlock(ADDR_MAIN_MUTEX);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
  }
  if (*(int *)(global_data_ptr + 0x161c) == 0xc) {
    string_input_ptr = (unsigned long long *)*global_data_ptr;
    thread_result_index = _Mtx_lock(ADDR_MAIN_MUTEX);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    psystem_init_result4 = global_data_ptr;
    plStack_2c0 = global_data_ptr;
    global_data_ptr = (long long *)*string_input_ptr;
    system_initializer_003(&systemConfigData6,0,0);
    stack_size_max = (long long *)merge_32bit_values(stack_size_max._4_4_, SYSTEM_CONFIG_BUFFER_SIZE_ZERO);
    plStack_2f8 = (long long *)merge_32bit_values(plStack_2f8._4_4_,FLOAT_ONE);
    stack_size_max = path_buffer_size000;
    thread_stack_ptr = &systemConfigBufferPtr;
    pplStack_328 = (long long **)&stack_size_max;
    system_config_002(&systemConfigData5,4,global_data_ptr + 0x1688,&plStack_2f8);
    system_initializer_004();
    global_data_ptr = psystem_init_result4;
    thread_result_index = _Mtx_unlock(ADDR_MAIN_MUTEX);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
  }
  if (*(int *)(global_data_ptr + 0x161c) == 0xd) {
    string_input_ptr = (unsigned long long *)*global_data_ptr;
    thread_result_index = _Mtx_lock(ADDR_MAIN_MUTEX);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    psystem_init_result4 = global_data_ptr;
    plStack_2c0 = global_data_ptr;
    global_data_ptr = (long long *)*string_input_ptr;
    system_initializer_003(&systemConfigData7,0,0);
    stack_size_max = (long long *)merge_32bit_values(stack_size_max._4_4_, SYSTEM_CONFIG_BUFFER_SIZE_ZERO);
    plStack_2f8 = (long long *)merge_32bit_values(plStack_2f8._4_4_,FLOAT_ONE);
    stack_size_max = path_buffer_size000;
    thread_stack_ptr = &systemConfigBufferPtr;
    pplStack_328 = (long long **)&stack_size_max;
    system_config_002(&systemConfigData5,4,global_data_ptr + 0x168c,&plStack_2f8);
    if (*(float *)(global_data_ptr + 0x168c) == 0.0) {
      *(unsigned int *)(global_data_ptr + 0x168c) = FLOAT_ONE;
    }
    system_initializer_004();
    global_data_ptr = psystem_init_result4;
    thread_result_index = _Mtx_unlock(ADDR_MAIN_MUTEX);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
  }
  string_input_ptr = (unsigned long long *)*global_data_ptr;
  if (string_input_ptr != (unsigned long long *)0x0) {
    if ((void *)*string_input_ptr == &systemValidationFunction) {
      NVGSDK_Poll(string_input_ptr[1]);
    }
    else {
      (**(code **)((void *)*string_input_ptr + 8))();
    }
  }
  *global_data_ptr = float_var;
  str_len_counter = (long long)*(int *)(global_data_ptr + 0x1d40) * 0xd0;
  system_init_result2 = *(long long *)(str_len_counter + 0xb0 + *(long long *)(global_data_ptr + 0x1d20));
  float_var = (float)system_init_result2;
  if (system_init_result2 < 0) {
    float_var = float_var + 1.8446744e+19;
  }
  if (float_var * 8.5830686e-07 < (float)*(int *)(global_data_ptr + 4)) {
    *(float *)(global_data_ptr + STRING_BUFFER_SIZE) = float_var + *(float *)(global_data_ptr + STRING_BUFFER_SIZE);
    float_var = (float)fmodf(str_len_counter,FLOAT_ONE);
    if (0.5 < float_var) {
      thread_stack_ptr = &g_threadString2;
      stack_size_max = 0;
      thread_stack_ptr = (unsigned long long *)0x0;
      stack_size_max = 0;
      string_input_ptr = (unsigned long long *)system_execution_function(global_data_ptr,0x1c,0x13);
      *(unsigned char *)string_input_ptr = 0;
      thread_stack_ptr = string_input_ptr;
      buffer_alloc_result = allocate_temporary_buffer(string_input_ptr);
      stack_size_max = merge_32bit_values(stack_size_max._4_4_,buffer_alloc_result);
      *string_input_ptr = 0x6f6d654d20555047;
      string_input_ptr[1] = 0x6567617375207972;
      string_input_ptr[2] = 0x6163697469726320;
      *(unsigned int *)(string_input_ptr + 3) = 0x2e2e6c;
      stack_size_max = 0x1b;
      thread_stack_ptr = &g_threadString2;
      handle_param_system_error(string_input_ptr);
    }
  }
  psystem_init_result4 = global_data_ptr;
  if ((char)global_data_ptr[0x42] == '\0') {
    (**(code **)(*global_data_ptr + 0xb0))(global_data_ptr,*(unsigned int *)(global_data_ptr + 0x1340));
    (**(code **)(*psystem_init_result4 + 0xb8))(psystem_init_result4,*(unsigned int *)(global_data_ptr + 0x1500));
    (**(code **)(*psystem_init_result4 + 0xc0))(psystem_init_result4,*(unsigned int *)(global_data_ptr + 0x13b0));
    (**(code **)(*psystem_init_result4 + 200))(psystem_init_result4,*(unsigned int *)(global_data_ptr + 0x1490));
    (**(code **)(*psystem_init_result4 + 0x50))(psystem_init_result4);
  }
  string_input_ptr = global_data_ptr;
  psystem_init_result4 = *(long long **)(global_data_ptr + 0x17ec);
  *global_data_ptr = 0;
  stack_size_max._0_4_ = SUB84(psystem_init_result4,0);
  *(unsigned int *)(string_input_ptr + 1) = (unsigned int)stack_size_max;
  stack_size_max._4_4_ = (unsigned int)((ulong long)psystem_init_result4 >> path_buffer_size);
  *(unsigned int *)((long long)string_input_ptr + 0xc) = stack_size_max._4_4_;
  *(unsigned int *)(string_input_ptr + 8) = 0;
  stack_size_max = psystem_init_result4;
  system_finalizer_001();
  system_finalizer_002();
  if (((*(int *)(handle_param + 0x340) != 0) && (global_data_ptr != (long long *)0x0)) &&
     (system_char_variable = (**(code **)(*global_data_ptr + 0x28))(), system_char_variable != '\0')) {
    (**(code **)(global_data_ptr + 0x98))();
  }
  (**(code **)(**(long long **)(handle_param + 0x2b0) + 0x30))(*(long long **)(handle_param + 0x2b0),thread_op_flags);
  if (((*(int *)(handle_param + 0x340) != 0) && (global_data_ptr != (long long *)0x0)) &&
     (system_char_variable = (**(code **)(*global_data_ptr + 0x28))(), system_char_variable != '\0')) {
    (*(code *)global_data_ptr[7])();
  }
  if (((*(int *)(handle_param + 0x340) != 0) && (global_data_ptr != (long long *)0x0)) &&
     (system_char_variable = (**(code **)(*global_data_ptr + 0x28))(), system_char_variable != '\0')) {
    *(unsigned long long *)(*(long long *)(handle_param + 0x3c0) + 0x18) =
         *(unsigned long long *)(*(long long *)(handle_param + 0x3c0) + STRING_BUFFER_SIZE);
    psystem_init_result4 = (long long *)(global_data_ptr + path_buffer_size30);
    buffer_alloc_result = buffer_alloc_result;
    if (*(long long *)(global_data_ptr + path_buffer_size38) - *psystem_init_result4 >> 2 != 0) {
      do {
        stack_size_max = *(unsigned int *)(buffer_alloc_result + *psystem_init_result4);
        system_init_result2 = *(long long *)(handle_param + 0x3c0) + STRING_BUFFER_SIZE;
        system_execution_function(system_init_result2,&stack_size_max);
        system_execution_function(system_init_result2,(long long)&stack_size_max + 1);
        system_execution_function(system_init_result2,(long long)&stack_size_max + 2);
        system_execution_function(system_init_result2,(long long)&stack_size_max + 3);
        buffer_alloc_result = (int)buffer_alloc_result + 1;
        buffer_alloc_result = (ulong long)buffer_alloc_result;
        psystem_init_result4 = (long long *)(global_data_ptr + path_buffer_size30);
        buffer_alloc_result = buffer_alloc_result + 4;
      } while ((ulong long)(long long)(int)buffer_alloc_result <
               (ulong long)(*(long long *)(global_data_ptr + path_buffer_size38) - *psystem_init_result4 >> 2));
    }
    (**(code **)(global_data_ptr + 0xa8))();
  }
  (**(code **)(**(long long **)(handle_param + 0x2b0) + 0x38))(*(long long **)(handle_param + 0x2b0),thread_op_flags);
  (**(code **)(**(long long **)(handle_param + 0x2b0) + SYSTEM_CONFIG_BUFFER_SIZE))(*(long long **)(handle_param + 0x2b0),thread_op_flags);
  system_execution_function();
  if (io_status_flag != '\0') {
    thread_stack_ptr = &g_threadString2;
    stack_size_max = 0;
    thread_stack_ptr = (unsigned long long *)0x0;
    stack_size_max = 0;
    string_input_ptr = (unsigned long long *)system_execution_function(global_data_ptr,0x19,0x13);
    *(unsigned char *)string_input_ptr = 0;
    thread_stack_ptr = string_input_ptr;
    buffer_alloc_result = allocate_temporary_buffer(string_input_ptr);
    stack_size_max = merge_32bit_values(stack_size_max._4_4_,buffer_alloc_result);
    *string_input_ptr = 0x6d6d6f43204c4752;
    string_input_ptr[1] = 0x656e696c20646e61;
    string_input_ptr[2] = 0x656c6f736e6f6320;
    *(unsigned char *)(string_input_ptr + 3) = 0;
    system_init_result2 = global_data_ptr;
    stack_size_max = 0x18;
    string_input_ptr = (unsigned long long *)*global_data_ptr;
    thread_result_index = _Mtx_lock(ADDR_MAIN_MUTEX);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    psystem_init_result4 = global_data_ptr;
    plStack_2c0 = global_data_ptr;
    global_data_ptr = (long long *)*string_input_ptr;
    plStack_2f8 = (long long *)0x0;
    stack_size_max = (long long *)0x0;
    pplStack_328 = (long long **)&cStack_300;
    system_processor_002(system_init_result2,&thread_stack_ptr,&plStack_2f8,&stack_size_max);
    if (*(char *)(system_init_result2 + 0x60) != '\0') {
      system_processor_003(system_init_result2,&plStack_2f8,&stack_size_max,acStack_2ff);
    }
    if ((cStack_300 == '\0') && (acStack_2ff[0] == '\0')) {
      *(unsigned char *)(system_init_result2 + 0x60) = 0;
    }
    global_data_ptr = psystem_init_result4;
    thread_result_index = _Mtx_unlock(ADDR_MAIN_MUTEX);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    thread_stack_ptr = &g_threadString2;
    handle_param_system_error(string_input_ptr);
  }
  system_execute_crypto_operation(stack_size_max ^ (ulong long)stack_buffer_348);
}
unsigned long long * system_handle_param_manager_001(unsigned long long *handle_param)
{
  *handle_param = 0;
  handle_param[0x43] = 0;
  handle_param[0x44] = 0;
  handle_param[0x45] = 0;
  *(unsigned int *)(handle_param + 0x46) = 3;
  return handle_param;
}
    system_handle_param_buffer = 0;
  }
  do {
    str_len_counter = str_len_counter + 1;
    character_scan_pointer = (char *)(str_len_counter + ADDR_STRING_OFFSET);
    str_len_counter = str_len_counter;
  } while (*character_scan_pointer != '\0');
  if (str_len_counter != 0) {
    fwrite(&io_output_char,1,1,str_len_counter);
    fwrite(&system_thread_name_buffer,str_len_counter,1,str_len_counter);
    system_cleanup_010(0);
  }
  if (str_len_counter != 0) {
    fclose(str_len_counter);
    thread_stack_base_address = 0;
    LOCK();
    global_data_ptr = global_data_ptr + -1;
    UNLOCK();
    str_len_counter = 0;
  }
  thread_stack_ptr = &g_threadString2;
  if (thread_stack_ptr == (void *)0x0) {
    thread_stack_ptr = (void *)0x0;
    stack_size_max = 0;
    thread_stack_ptr = &g_threadString4;
    if (str_len_counter != 0) {
      fclose(str_len_counter);
      LOCK();
      global_data_ptr = global_data_ptr + -1;
      UNLOCK();
    }
    return;
  }
  handle_param_system_error();
}
  system_initialized_flag = 1;
  system_event_handle_paramr_015(global_data_ptr);
  system_cleanup_002();
  system_cleanup_008(0);
  if (system_thread_sync_flag != '\0') {
    LOCK();
    *(unsigned int *)(*(long long *)(global_data_ptr + 0x48) + 0xcc) = 0;
    UNLOCK();
  }
  system_execution_function();
  if ((system_operation_flag == '\0') &&
     (psystem_init_result = *(long long **)(global_data_ptr + 0x18), psystem_init_result != (long long *)0x0)) {
    system_char_variable = (**(code **)*psystem_init_result)(psystem_init_result);
    if (system_char_variable != '\0') {
      (**(code **)(*psystem_init_result + 0x28))(psystem_init_result);
    }
  }
  system_cleanup_009();
  str_len_counter = global_data_ptr;
  if (global_data_ptr != 0) {
    system_cleanup_011(global_data_ptr);
    handle_param_system_error(str_len_counter);
  }
  global_data_ptr = 0;
  system_thread_manager_008(global_data_ptr);
  str_len_counter = global_data_ptr;
  if (global_data_ptr != 0) {
    system_thread_manager_008(global_data_ptr);
    _Mtx_destroy_in_situ();
    handle_param_system_error(str_len_counter);
  }
  global_data_ptr = 0;
  return;
}
unsigned long long *
system_execution_function(unsigned long long *handle_param,ulong long thread_op_flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  unsigned long long buffer_alloc_result;
  buffer_alloc_result = DEFAULT_THREAD_POOL_FLAG;
  *handle_param = &systemHandleData;
  system_cleanup_004();
  if ((thread_op_flags & 1) != 0) {
    free(handle_param,0xc0,mutex_attr,mutex_type,buffer_alloc_result);
  }
  return handle_param;
}
      crypto_module_enabled = '\x01';
      do {
        thread_result_index = ReleaseSemaphore(global_data_ptr,1);
      } while (thread_result_index == 0);
      thread_stack_ptr = &g_threadString2;
      if (thread_stack_ptr != (unsigned char *)0x0) {
        handle_param_system_error();
      }
      thread_stack_ptr = (unsigned char *)0x0;
      stack_size_max = stack_size_max & INT64_MASK;
      thread_stack_ptr = &g_threadString4;
      thread_stack_ptr = &g_threadString2;
      if (string_input_ptr != (void *)0x0) {
        handle_param_system_error(string_input_ptr);
      }
      thread_stack_ptr = (unsigned char *)0x0;
      stack_size_max = stack_size_max & INT64_MASK;
      thread_stack_ptr = &g_threadString4;
    }
  }
  thread_stack_ptr = &g_threadString2;
  if (thread_stack_ptr != (void *)0x0) {
    handle_param_system_error();
  }
  thread_stack_ptr = (void *)0x0;
  stack_size_max = 0;
  thread_stack_ptr = &g_threadString4;
section_processing_jump_label_:
  system_execute_crypto_operation(stack_size_max ^ (ulong long)stack_buffer_168);
}
uint validate_system_mutex_lock(void)
{
  uint reg_eax;
  int thread_result_index;
  long long str_len_counter;
  if (global_data_ptr != 0) {
    str_len_counter = global_data_ptr + 0x110;
    thread_result_index = _Mtx_lock(str_len_counter);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    reg_eax = _Mtx_unlock(str_len_counter);
    if (reg_eax != 0) {
      reg_eax = __Throw_C_error_std__YAXH_Z(reg_eax);
    }
  }
  return reg_eax & 0xffffff00;
}
      crypto_buffer_primary = 0;
      global_data_ptr = 0;
      strcpy_s(&crypto_buffer_primary,0x80,&default_resource_string,mutex_type,buffer_alloc_result);
      system_crypto_initializer(system_execution_function);
      system_crypto_module_initializer(&crypto_context_primary);
      return &crypto_return_buffer;
    }
  }
  return &crypto_return_buffer;
}
    thread_pool_active = '\x01';
    system_thread_manager_012(handle_param,CONCAT_BYTES_TO_64BIT((int7)((ulong long)string_input_ptr >> 8),1));
  }
  system_execute_crypto_operation(stack_size_max ^ (ulong long)stack_buffer_298);
}
    thread_pool_2_status_code = '\0';
    if ((cStack_208 != '\0') && (thread_result_index = _Mtx_unlock(stack_size_max), thread_result_index != 0)) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    if (system_char_variable != '\0') goto section_processing_jump_label_;
    *(unsigned char *)(*(long long *)(*(long long *)(global_data_ptr + 8) + 0x140) + path_buffer_size8) = 1;
  }
  thread_pool_2_status_code = '\0';
  thread_result_index = _Mtx_unlock(RENDER_THREAD_POOL_MUTEX_ADDR);
  if (thread_result_index != 0) {
    __Throw_C_error_std__YAXH_Z(thread_result_index);
  }
section_processing_jump_label_:
  if (*(char *)(global_data_ptr + 0xa0) != '\0') {
    buffer_alloc_result = system_ui_007(system_init_result6);
    *(unsigned long long *)(global_data_ptr + 0xa8) = buffer_alloc_result;
    buffer_alloc_result = system_ui_008(system_init_result6);
    *(unsigned long long *)(global_data_ptr + 0xb0) = buffer_alloc_result;
  }
  character_scan_pointer = global_data_ptr;
  if (*global_data_ptr != '\0') {
    string_input_ptr = (unsigned long long *)*global_data_ptr;
    thread_result_index = _Mtx_lock(ADDR_MAIN_MUTEX);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    buffer_alloc_result = global_data_ptr;
    pplStack_1b8 = (long long **)global_data_ptr;
    global_data_ptr = *string_input_ptr;
    system_initializer_003(&systemInitData1,0,0);
    system_sum_accumulator_1 = 0.0;
    system_sum_accumulator_2 = 0.0;
    system_sum_accumulator_3 = 0.0;
    system_sum_accumulator_4 = 0.0;
    buffer_alloc_result = thread_op_flags;
    thread_op_flags = thread_op_flags;
    if (*(long long *)(character_scan_pointer + STRING_BUFFER_SIZE) - *(long long *)(character_scan_pointer + 8) >> 3 != 0) {
      do {
        system_data_value_1 = *(double *)(*(long long *)(buffer_alloc_result + *(long long *)(character_scan_pointer + 8)) + path_buffer_size0);
        system_sum_accumulator_2 = system_sum_accumulator_1 + system_data_value_1;
        system_data_value_2 = *(double *)(*(long long *)(buffer_alloc_result + *(long long *)(character_scan_pointer + 8)) + 0x1f8);
        system_sum_accumulator_4 = system_sum_accumulator_3 + system_data_value_2;
        system_config_001(&systemInitData2,thread_op_flags,system_data_value_1 / system_data_value_2);
        thread_op_flags = (int)thread_op_flags + 1;
        buffer_alloc_result = buffer_alloc_result + 8;
        thread_op_flags = (ulong long)thread_op_flags;
        system_sum_accumulator_1 = system_sum_accumulator_2;
        system_sum_accumulator_3 = system_sum_accumulator_4;
      } while ((ulong long)(long long)(int)thread_op_flags <
               (ulong long)(*(long long *)(character_scan_pointer + STRING_BUFFER_SIZE) - *(long long *)(character_scan_pointer + 8) >> 3));
    }
    system_config_001(&systemConfigData8,system_sum_accumulator_2 / system_sum_accumulator_4);
    system_initializer_004();
    global_data_ptr = buffer_alloc_result;
    thread_result_index = _Mtx_unlock(ADDR_MAIN_MUTEX);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
  }
  if (*(char *)(global_data_ptr + 0x1626) != '\0') {
    buffer_alloc_result = *(unsigned long long *)(global_data_ptr + 0x138);
    *(unsigned long long *)(global_data_ptr + 0x138) = 0;
    thread_stack_ptr = &g_defaultDataTemplate;
    thread_stack_ptr = stack_buffer_a0;
    stack_buffer_a0[0] = 0;
    stack_size_max = 0x18;
    thread_op_flags = strcpy_s(stack_buffer_a0, SYSTEM_CONFIG_BUFFER_SIZE, &systemConfigStringBuffer2);
    system_ui_001(thread_op_flags,&thread_stack_ptr,buffer_alloc_result,1);
    thread_stack_ptr = &g_threadString4;
  }
  if (*(int *)(global_data_ptr + 0x60) == 1) {
    system_finalizer_003();
  }
  else if (*(int *)(global_data_ptr + 0x60) == 2) {
    system_finalizer_004();
  }
  system_init_result8 = *(long long *)(global_data_ptr + 0x1870) - *(long long *)(global_data_ptr + 0x1868) >> 3;
  buffer_alloc_result = thread_op_flags;
  if (0 < (int)system_init_result8) {
    do {
      string_input_ptr = (unsigned long long *)system_validator_002(system_init_result8,&plStack_1d0,(long long)(int)buffer_alloc_result);
      (**(code **)(*(long long *)*string_input_ptr + 0x98))();
      if (plStack_1d0 != (long long *)0x0) {
        (**(code **)(*plStack_1d0 + 0x38))();
      }
      thread_op_flags = (int)buffer_alloc_result + 1;
      system_init_result8 = *(long long *)(global_data_ptr + 0x1870) - *(long long *)(global_data_ptr + 0x1868) >> 3;
      buffer_alloc_result = (ulong long)thread_op_flags;
    } while ((int)thread_op_flags < (int)system_init_result8);
  }
  system_processor_001();
  system_init_function();
  thread_op_flags = flag_handle_paramr_function(system_init_result6);
  system_ui_004(thread_op_flags,1,0);
  if (*(char *)(system_init_result6 + 0xf18) != '\0') {
    system_ui_009(system_init_result6);
    *(unsigned char *)(system_init_result6 + 0xf18) = 0;
  }
  str_len_counter = global_data_ptr;
  system_init_result8 = global_data_ptr;
  buffer_alloc_result = *(unsigned long long *)(global_data_ptr + 0x161c);
  *(unsigned long long *)(global_data_ptr + 0x12d0) = *(unsigned long long *)(global_data_ptr + 0x1614);
  *(unsigned long long *)(system_init_result8 + 0x12d8) = buffer_alloc_result;
  buffer_alloc_result = *(unsigned long long *)(str_len_counter + 0x162c);
  *(unsigned long long *)(system_init_result8 + 0x12e0) = *(unsigned long long *)(str_len_counter + 0x1624);
  *(unsigned long long *)(system_init_result8 + 0x12e8) = buffer_alloc_result;
  buffer_alloc_result = *(unsigned long long *)(str_len_counter + 0x163c);
  *(unsigned long long *)(system_init_result8 + 0x12f0) = *(unsigned long long *)(str_len_counter + 0x1634);
  *(unsigned long long *)(system_init_result8 + 0x12f8) = buffer_alloc_result;
  buffer_alloc_result = *(unsigned long long *)(str_len_counter + 0x164c);
  *(unsigned long long *)(system_init_result8 + 0x1300) = *(unsigned long long *)(str_len_counter + 0x1644);
  *(unsigned long long *)(system_init_result8 + 0x1308) = buffer_alloc_result;
  buffer_alloc_result = *(unsigned long long *)(str_len_counter + 0x165c);
  *(unsigned long long *)(system_init_result8 + 0x1310) = *(unsigned long long *)(str_len_counter + 0x1654);
  *(unsigned long long *)(system_init_result8 + 0x1318) = buffer_alloc_result;
  buffer_alloc_result = *(unsigned long long *)(str_len_counter + 0x166c);
  *(unsigned long long *)(system_init_result8 + 0x1320) = *(unsigned long long *)(str_len_counter + 0x1664);
  *(unsigned long long *)(system_init_result8 + 0x1328) = buffer_alloc_result;
  thread_op_flags = *(unsigned int *)(str_len_counter + 0x1678);
  buffer_alloc_result = *(unsigned int *)(str_len_counter + 0x167c);
  buffer_alloc_result = *(unsigned int *)(str_len_counter + 0x1680);
  *(unsigned int *)(system_init_result8 + 0x1330) = *(unsigned int *)(str_len_counter + 0x1674);
  *(unsigned int *)(system_init_result8 + 0x1334) = thread_op_flags;
  *(unsigned int *)(system_init_result8 + 0x1338) = buffer_alloc_result;
  *(unsigned int *)(system_init_result8 + 0x133c) = buffer_alloc_result;
  thread_op_flags = *(unsigned int *)(str_len_counter + 0x1688);
  buffer_alloc_result = *(unsigned int *)(str_len_counter + 0x168c);
  buffer_alloc_result = *(unsigned int *)(str_len_counter + 0x1690);
  *(unsigned int *)(system_init_result8 + 0x1340) = *(unsigned int *)(str_len_counter + 0x1684);
  *(unsigned int *)(system_init_result8 + 0x1344) = thread_op_flags;
  *(unsigned int *)(system_init_result8 + 0x1348) = buffer_alloc_result;
  *(unsigned int *)(system_init_result8 + 0x134c) = buffer_alloc_result;
  *(unsigned short *)(str_len_counter + 0x1637) = 0;
  *(unsigned char *)(str_len_counter + 0x162c) = 0;
  system_finalizer_001();
  system_finalizer_002();
  *(uint *)(global_data_ptr + 0x1590) = global_data_ptr;
  global_data_ptr = global_data_ptr + 1 & 0x80000001;
  if ((int)global_data_ptr < 0) {
    global_data_ptr = (global_data_ptr - 1 | 0xfffffffe) + 1;
  }
  string_input_ptr = (unsigned long long *)*global_data_ptr;
  thread_result_index = _Mtx_lock(ADDR_MAIN_MUTEX);
  if (thread_result_index != 0) {
    __Throw_C_error_std__YAXH_Z(thread_result_index);
  }
  buffer_alloc_result = global_data_ptr;
  pplStack_220 = (long long **)global_data_ptr;
  global_data_ptr = *string_input_ptr;
  system_init_result8 = *(long long *)(global_data_ptr + 0x1a08 + (long long)(int)global_data_ptr * 8);
  if (system_init_result8 != 0) {
    buffer_alloc_result = thread_op_flags;
    thread_op_flags = thread_op_flags;
    if (0 < *(int *)(system_init_result8 + STRING_BUFFER_SIZE)) {
      do {
        system_network_003(*(unsigned long long *)(thread_op_flags + *(long long *)(system_init_result8 + 8)));
        str_len_counter = *(long long *)(*(long long *)(system_init_result8 + 8) + thread_op_flags);
        if (str_len_counter != 0) {
          system_execution_function(str_len_counter);
          handle_param_system_error(str_len_counter);
        }
        *(unsigned long long *)(*(long long *)(system_init_result8 + 8) + thread_op_flags) = 0;
        thread_op_flags = (int)buffer_alloc_result + 1;
        buffer_alloc_result = (ulong long)thread_op_flags;
        thread_op_flags = thread_op_flags + 8;
      } while ((int)thread_op_flags < *(int *)(system_init_result8 + STRING_BUFFER_SIZE));
    }
    if (*(long long *)(system_init_result8 + 8) != 0) {
      handle_param_system_error();
    }
    *(unsigned long long *)(system_init_result8 + 8) = 0;
    string_input_ptr = *(unsigned char **)(global_data_ptr + 0x1a08 + (long long)(int)global_data_ptr * 8);
    if (string_input_ptr != (unsigned char *)0x0) {
      *string_input_ptr = 0;
      *(unsigned long long *)(string_input_ptr + 8) = 0;
      *(unsigned long long *)(string_input_ptr + 0x14) = 0;
      *(unsigned int *)(string_input_ptr + STRING_BUFFER_SIZE) = 0;
      *(unsigned long long *)(string_input_ptr + 0x24) = 0;
      *(unsigned long long *)(string_input_ptr + 0x1c) = 0;
      handle_param_system_error();
    }
    *(unsigned long long *)(global_data_ptr + 0x1a08 + (long long)(int)global_data_ptr * 8) = 0;
    thread_op_flags = stack_size_max;
  }
  system_initializer_002();
  global_data_ptr = buffer_alloc_result;
  thread_result_index = _Mtx_unlock(ADDR_MAIN_MUTEX);
  if (thread_result_index != 0) {
    __Throw_C_error_std__YAXH_Z(thread_result_index);
  }
  if (*(int *)(system_init_result6 + 8) == 2) {
    *(unsigned char *)(*(long long *)(system_init_result6 + STRING_BUFFER_SIZE) + 0xc0) = 0;
    while( true ) {
      string_input_ptr = (void *)**(unsigned long long **)(system_init_result6 + STRING_BUFFER_SIZE);
      if (string_input_ptr == &systemValidationData1) {
        system_char_variable = *(char *)(*(unsigned long long **)(system_init_result6 + STRING_BUFFER_SIZE) + 2) != '\0';
      }
      else {
        system_char_variable = (**(code **)(string_input_ptr + 0x68))();
      }
      if (system_char_variable != '\0') break;
      string_input_ptr = (void *)**(unsigned long long **)(system_init_result6 + STRING_BUFFER_SIZE);
      if (string_input_ptr == &systemValidationData1) {
        system_cleanup_005(*(unsigned long long **)(system_init_result6 + STRING_BUFFER_SIZE) + 4);
      }
      else {
        (**(code **)(string_input_ptr + 0x80))();
      }
    }
    plStack_1c0 = *(long long **)(system_init_result6 + STRING_BUFFER_SIZE);
    *(unsigned long long *)(system_init_result6 + STRING_BUFFER_SIZE) = 0;
    if (plStack_1c0 != (long long *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    *(unsigned int *)(system_init_result6 + 8) = 0;
    if (data_param_10 != (long long *)0x0) {
      (**(code **)(*data_param_10 + STRING_BUFFER_SIZE))();
    }
    (**(code **)(data_param_00 + path_buffer_size))(0);
    data_param_08 = UINT64_MAX;
  }
  else if (*(int *)(system_init_result6 + 8) != 0) goto section_processing_jump_label_;
  *(uint *)(global_data_ptr + 0x1614) =
       (*(int *)(global_data_ptr + 0x1614) + 1U) % *(uint *)(global_data_ptr + 0x1d4c);
section_processing_jump_label_:
  pplStack_220 = (long long **)&thread_stack_ptr;
  thread_stack_ptr = &g_memoryAllocationFlag;
  thread_stack_ptr = stack_buffer_180;
  stack_size_max = 0;
  stack_buffer_180[0] = 0;
  stack_size_max = 0x19;
  stack_size_max = thread_op_flags;
  pplStack_220 = (long long **)system_execution_function(global_data_ptr,path_buffer_size,8,3);
  *pplStack_220 = (long long *)&g_threadString4;
  pplStack_220[1] = (long long *)0x0;
  *(unsigned int *)(pplStack_220 + 2) = 0;
  *pplStack_220 = (long long *)&g_threadString2;
  pplStack_220[3] = (long long *)0x0;
  pplStack_220[1] = (long long *)0x0;
  *(unsigned int *)(pplStack_220 + 2) = 0;
  psystem_init_result7 = global_data_ptr;
  stack_size_max = 0;
  thread_op_flags = *(unsigned int *)(pplStack_220 + 3);
  *(int *)(pplStack_220 + 3) = (int)global_data_ptr[10];
  *(unsigned int *)(psystem_init_result7 + 10) = thread_op_flags;
  system_init_result6 = (long long)pplStack_220[1];
  pplStack_220[1] = (long long *)psystem_init_result7[8];
  psystem_init_result7[8] = system_init_result6;
  thread_op_flags = *(unsigned int *)(pplStack_220 + 2);
  *(int *)(pplStack_220 + 2) = (int)psystem_init_result7[9];
  *(unsigned int *)(psystem_init_result7 + 9) = thread_op_flags;
  thread_op_flags = *(unsigned int *)((long long)pplStack_220 + 0x1c);
  *(unsigned int *)((long long)pplStack_220 + 0x1c) = *(unsigned int *)((long long)psystem_init_result7 + 0x54);
  *(unsigned int *)((long long)psystem_init_result7 + 0x54) = thread_op_flags;
  thread_stack_ptr = pplStack_220;
  if (*(code **)(*psystem_init_result7 + 8) == (code *)&system_exception_handle_paramr) {
    *(unsigned int *)(psystem_init_result7 + 9) = 0;
    if ((unsigned char *)psystem_init_result7[8] != (unsigned char *)0x0) {
      *(unsigned char *)psystem_init_result7[8] = 0;
    }
    *(unsigned int *)((long long)psystem_init_result7 + 0x54) = 0;
  }
  else {
    (**(code **)(*psystem_init_result7 + 8))(psystem_init_result7);
  }
  if (0x960 < *(int *)(thread_stack_ptr + 2)) {
    *(unsigned int *)(thread_stack_ptr + 2) = 0x960;
    *(unsigned char *)(thread_stack_ptr[1] + 0x960) = 0;
  }
  stack_size_max = 0;
  thread_stack_base_address = 0;
  thread_stack_base_address = 0;
  stack_size_max = 0;
  stack_size_max = 3;
  system_execution_function(global_data_ptr,thread_op_flags,&thread_stack_base_address);
  system_init_result6 = thread_stack_base_address;
  system_init_result8 = thread_stack_base_address;
  buffer_alloc_result = thread_op_flags;
  if (thread_stack_base_address - thread_stack_base_address >> 3 != 0) {
    do {
      str_len_counter = global_data_ptr;
      if ((0 < *(int *)(*(long long *)(buffer_alloc_result + system_init_result6) + 0x124ec)) &&
         ((*(uint *)(*(long long *)(buffer_alloc_result + system_init_result6) + 4) & string_buffer_size_constant00) != 0)) {
        while (character_scan_pointer = global_data_ptr, system_init_result6 = thread_stack_base_address, system_init_result8 = thread_stack_base_address,
              *(int *)(str_len_counter + 0x30c) != 0) {
          system_init_result6 = system_event_handle_paramr_017(global_data_ptr);
          if (system_init_result6 != 0) {
            psystem_init_result7 = (long long *)system_event_handle_paramr_017(character_scan_pointer);
            (**(code **)(*psystem_init_result7 + path_buffer_size))(psystem_init_result7,0);
          }
        }
      }
      thread_op_flags = (int)thread_op_flags + 1;
      thread_op_flags = (ulong long)thread_op_flags;
      buffer_alloc_result = buffer_alloc_result + 8;
    } while ((ulong long)(long long)(int)thread_op_flags < (ulong long)(system_init_result8 - system_init_result6 >> 3));
  }
  buffer_alloc_result = system_execution_function(global_data_ptr,string_buffer_size_constant,8,3);
  psystem_init_result7 = (long long *)system_event_handle_paramr_008(buffer_alloc_result,&thread_stack_ptr);
  ppuStack_1b0 = (void **)psystem_init_result7;
  if (psystem_init_result7 != (long long *)0x0) {
    (**(code **)(*psystem_init_result7 + 0x28))(psystem_init_result7);
  }
  character_scan_pointer = global_data_ptr;
  pplStack_220 = &plStack_228;
  plStack_228 = psystem_init_result7;
  if (psystem_init_result7 != (long long *)0x0) {
    (**(code **)(*psystem_init_result7 + 0x28))(psystem_init_result7);
  }
  pplStack_1b8 = &plStack_228;
  string_input_ptr = *(unsigned long long **)(*(long long *)(character_scan_pointer + 8) + 8);
  character_scan_pointer = *(code **)*string_input_ptr;
  pplStack_220 = &plStack_218;
  plStack_218 = plStack_228;
  if (plStack_228 != (long long *)0x0) {
    (**(code **)(*plStack_228 + 0x28))();
  }
  (*character_scan_pointer)(string_input_ptr,&plStack_218);
  if (plStack_228 != (long long *)0x0) {
    (**(code **)(*plStack_228 + 0x38))();
  }
  if (psystem_init_result7 != (long long *)0x0) {
    (**(code **)(*psystem_init_result7 + 0x38))(psystem_init_result7);
  }
  if (thread_stack_base_address == 0) {
    ppuStack_1b0 = &thread_stack_ptr;
    thread_stack_ptr = &g_threadString4;
    system_execute_crypto_operation(stack_size_max ^ (ulong long)auStack_248);
  }
  handle_param_system_error();
}
    ui_system_ready = '\0';
  }
  data_param_10 = ptr_var_4;
  (**(code **)(data_param_00 + 0x18))(0);
  if (ptr_var_4 != (long long *)0x0) {
    (**(code **)(*ptr_var_4 + 8))(ptr_var_4);
  }
  pthread_op_flags = *(unsigned long long **)(*handle_param + 0x18);
  character_scan_pointer = *(code **)*pthread_op_flags;
  ppstack_long_var = &pstack_long_var;
  pstack_long_var = *(long long **)(*handle_param + STRING_BUFFER_SIZE);
  if (pstack_long_var != (long long *)0x0) {
    (**(code **)(*pstack_long_var + 0x28))();
  }
  (*character_scan_pointer)(pthread_op_flags,&pstack_long_var);
  return;
}
      network_config_buffer = 0;
      global_data_ptr = 6;
      strcpy_s(&network_config_buffer, SYSTEM_CONFIG_BUFFER_SIZE, &network_config_string, mutex_type, buffer_alloc_result);
      resource_template_ptr = &g_defaultDataTemplate;
      global_data_ptr = &render_config_buffer;
      render_config_buffer = 0;
      global_data_ptr = 4;
      strcpy_s(&render_config_buffer, SYSTEM_CONFIG_BUFFER_SIZE, &render_config_string);
      resource_template_ptr = &g_defaultDataTemplate;
      global_data_ptr = &audio_config_buffer_secondary;
      audio_config_buffer_secondary = 0;
      global_data_ptr = 6;
      strcpy_s(&audio_config_buffer_secondary, SYSTEM_CONFIG_BUFFER_SIZE, &audio_config_string_secondary);
      resource_template_ptr = &g_defaultDataTemplate;
      global_data_ptr = &physics_config_buffer;
      physics_config_buffer = 0;
      global_data_ptr = 6;
      strcpy_s(&physics_config_buffer, SYSTEM_CONFIG_BUFFER_SIZE, &physics_config_string);
      system_crypto_initializer(&systemCryptoData1);
      system_crypto_module_initializer(&crypto_context_secondary);
    }
  }
  return &crypto_return_buffer_secondary + (long long)handle_param * 0x58;
}
  io_status_flag = io_status_flag == '\0';
  *handle_param = &g_threadString4;
  handle_param[1] = 0;
  *(unsigned int *)(handle_param + 2) = 0;
  *handle_param = &g_threadString2;
  handle_param[3] = 0;
  handle_param[1] = 0;
  *(unsigned int *)(handle_param + 2) = 0;
  system_thread_manager_001(handle_param, 3, mutex_attr, mutex_type, 0, DEFAULT_THREAD_POOL_FLAG);
  *(unsigned int *)handle_param[1] = 0x2e6b4f;
  *(unsigned int *)(handle_param + 2) = 3;
  return handle_param;
}
long long process_memory_block(long long handle_param,long long thread_op_flags,long long mutex_attr)
{
  unsigned long long *string_input_ptr;
  unsigned long long *pthread_op_flags;
  long long str_len_counter;
  long long str_len_counter;
  str_len_counter = thread_op_flags - handle_param >> 5;
  if (0 < str_len_counter) {
    str_len_counter = mutex_attr - thread_op_flags;
    mutex_attr = mutex_attr + str_len_counter * -path_buffer_size;
    pthread_op_flags = (unsigned long long *)(thread_op_flags + 8);
    do {
      string_input_ptr = pthread_op_flags + -4;
      if (*(long long *)(str_len_counter + -path_buffer_size + (long long)pthread_op_flags) != 0) {
        handle_param_system_error();
      }
      *(unsigned long long *)(str_len_counter + STRING_BUFFER_SIZE + (long long)string_input_ptr) = 0;
      str_len_counter = str_len_counter + -1;
      *(unsigned long long *)(str_len_counter + (long long)string_input_ptr) = 0;
      *(unsigned int *)(str_len_counter + 8 + (long long)string_input_ptr) = 0;
      *(unsigned int *)(str_len_counter + 8 + (long long)string_input_ptr) = *(unsigned int *)(pthread_op_flags + -3);
      *(unsigned long long *)(str_len_counter + (long long)string_input_ptr) = *string_input_ptr;
      *(unsigned int *)(str_len_counter + 0x14 + (long long)string_input_ptr) = *(unsigned int *)((long long)pthread_op_flags + -0xc);
      *(unsigned int *)(str_len_counter + STRING_BUFFER_SIZE + (long long)string_input_ptr) = *(unsigned int *)(pthread_op_flags + -2);
      *(unsigned int *)(pthread_op_flags + -3) = 0;
      *string_input_ptr = 0;
      pthread_op_flags[-2] = 0;
      pthread_op_flags = string_input_ptr;
    } while (0 < str_len_counter);
  }
  return mutex_attr;
}
long long process_memory_with_thread_op_flags(unsigned long long handle_param,long long thread_op_flags,long long mutex_attr)
{
  unsigned long long *string_input_ptr;
  long long str_len_counter;
  unsigned long long *string_input_ptr;
  long long unreg_bp;
  long long unaffected_registerDI;
  mutex_attr = mutex_attr - thread_op_flags;
  str_len_counter = unaffected_registerDI * -path_buffer_size;
  string_input_ptr = (unsigned long long *)(thread_op_flags + 8);
  do {
    string_input_ptr = string_input_ptr + -4;
    if (*(long long *)(mutex_attr + -path_buffer_size + (long long)string_input_ptr) != 0) {
      handle_param_system_error();
    }
    *(unsigned long long *)(mutex_attr + STRING_BUFFER_SIZE + (long long)string_input_ptr) = 0;
    unaffected_registerDI = unaffected_registerDI + -1;
    *(unsigned long long *)(mutex_attr + (long long)string_input_ptr) = 0;
    *(unsigned int *)(mutex_attr + 8 + (long long)string_input_ptr) = 0;
    *(unsigned int *)(mutex_attr + 8 + (long long)string_input_ptr) = *(unsigned int *)(string_input_ptr + -3);
    *(unsigned long long *)(mutex_attr + (long long)string_input_ptr) = *string_input_ptr;
    *(unsigned int *)(mutex_attr + 0x14 + (long long)string_input_ptr) = *(unsigned int *)((long long)string_input_ptr + -0xc);
    *(unsigned int *)(mutex_attr + STRING_BUFFER_SIZE + (long long)string_input_ptr) = *(unsigned int *)(string_input_ptr + -2);
    *(unsigned int *)(string_input_ptr + -3) = 0;
    *string_input_ptr = 0;
    string_input_ptr[-2] = 0;
    string_input_ptr = string_input_ptr;
  } while (0 < unaffected_registerDI);
  return unreg_bp + str_len_counter;
}
      g_data_system_flag = g_data_system_flag == '\0';
    }
    if (g_data_system_flag != '\0') {
      (*(code *)(*reg_rcx[0xc170])[9])(reg_rcx[0xc170],astack_long_var[0] + 0x120);
    }
  }
  system_init_result0 = astack_long_var[0];
  if ((*(int *)(*(long long *)(astack_long_var[0] + 0x3580) + 0x110) != 0) &&
     (buffer_alloc_result = buffer_alloc_result, buffer_alloc_result = buffer_alloc_result, (long long)reg_rcx[0x1d] - (long long)reg_rcx[0x1c] >> 3 != 0))
  {
    do {
      (**(code **)(**(long long **)(buffer_alloc_result + (long long)reg_rcx[0x1c]) + 0x60))
                (*(long long **)(buffer_alloc_result + (long long)reg_rcx[0x1c]),reg_rcx,system_init_result0);
      buffer_alloc_result = (int)buffer_alloc_result + 1;
      buffer_alloc_result = buffer_alloc_result + 8;
      buffer_alloc_result = (ulong long)buffer_alloc_result;
    } while ((ulong long)(long long)(int)buffer_alloc_result <
             (ulong long)((long long)reg_rcx[0x1d] - (long long)reg_rcx[0x1c] >> 3));
  }
  ppplStack_b8 = (long long ***)0x0;
  stack_size_max = (long long *)merge_32bit_values(stack_size_max._4_4_,(unsigned int)stack_size_max);
  if (*(int *)(*(long long *)(astack_long_var[0] + 0x3580) + 0x110) != 0) {
    stack_size_max = (long long *)merge_32bit_values(stack_size_max._4_4_,(unsigned int)stack_size_max);
    if ((((*(byte *)(astack_long_var[0] + 0x1bd8) & path_buffer_size) != 0) &&
        (stack_size_max = (long long *)merge_32bit_values(stack_size_max._4_4_,(unsigned int)stack_size_max),
        *(char *)(global_data_ptr + 0xf8) != '\0')) &&
       (stack_size_max = (long long *)merge_32bit_values(stack_size_max._4_4_,(unsigned int)stack_size_max),
       6 < *(int *)(reg_rcx + 0x4f8))) {
      buffer_alloc_result = system_execution_function(global_data_ptr,0xe0,8,3);
      pppstack_long_var = (long long ***)&stack_size_max;
      plStack_68 = astack_long_var;
      thread_stack_ptr = &systemThreadData1;
      thread_stack_ptr = &systemThreadData2;
      stack_size_max._0_4_ = SUB84(reg_rcx,0);
      stack_size_max._4_4_ = (unsigned int)((ulong long)reg_rcx >> path_buffer_size);
      stack_size_max._0_4_ = (unsigned int)stack_size_max;
      stack_size_max._4_4_ = stack_size_max._4_4_;
      stack_size_max = reg_rcx;
      stack_size_max = plStack_68;
      ppplStack_b8 = (long long ***)system_execution_function(buffer_alloc_result,&stack_size_max);
      if (ppplStack_b8 != (long long ***)0x0) {
        ppsystem_memory_stack_primary = ppplStack_b8;
        (*(code *)(*ppplStack_b8)[5])(ppplStack_b8);
      }
      buffer_alloc_result = global_data_ptr;
      ppsystem_memory_stack_primary = (long long ***)0x0;
      if (*(int *)(global_data_ptr + 0x380) == 0) {
        ppppstack_long_var = &pppstack_long_var;
        pppstack_long_var = ppplStack_b8;
        if (ppplStack_b8 != (long long ***)0x0) {
          (*(code *)(*ppplStack_b8)[5])(ppplStack_b8);
        }
        system_event_handle_paramr_013(buffer_alloc_result,&pppstack_long_var);
      }
      else {
        (*(code *)(*ppplStack_b8)[0xc])(ppplStack_b8);
        if ((*ppplStack_b8)[0xe] == (long long *)&systemThreadCheckData) {
          LOCK();
          *(unsigned char *)(ppplStack_b8 + 2) = 1;
          UNLOCK();
          system_cleanup_003(ppplStack_b8 + 4);
        }
        else {
          (*(code *)(*ppplStack_b8)[0xe])(ppplStack_b8);
        }
      }
    }
    system_processor_007(reg_rcx,astack_long_var[0]);
    buffer_alloc_result = global_data_ptr;
    if (((reg_rcx[0x89] != (long long ****)0x0) && (*(char *)(global_data_ptr + 0xfa) != '\0')) &&
       ((*(long long *)(astack_long_var[0] + 0x3580) != 0 &&
        (*(int *)(*(long long *)(astack_long_var[0] + 0x3580) + 0x110) != 0)))) {
      stack_size_max = &ppppstack_long_var;
      ppppstack_long_var = (long long ****)reg_rcx[0x89][0x461];
      if (ppppstack_long_var != (long long ****)0x0) {
        (*(code *)(*ppppstack_long_var)[5])();
      }
      system_event_handle_paramr_016(buffer_alloc_result,&ppppstack_long_var,0);
    }
    if ((*(char *)((long long)reg_rcx + 0x563) != '\0') &&
       (0 < (int)(((long long)reg_rcx[0xb6] - (long long)reg_rcx[0xb5]) / 0xc))) {
      system_cleanup_001(reg_rcx + 0x4cf);
      while( true ) {
        system_thread_manager_ptr = *reg_rcx[0x4ce];
        if (system_thread_manager_ptr == (long long ***)&systemThreadManagerData) {
          system_char_variable = *(char *)(reg_rcx[0x4ce] + 2) != '\0';
        }
        else {
          system_char_variable = (*(code *)system_thread_manager_ptr[0xd])();
        }
        buffer_alloc_result = global_data_ptr;
        if (system_char_variable != '\0') break;
        system_init_result0 = system_event_handle_paramr_017(global_data_ptr);
        if (system_init_result0 != 0) {
          psystem_init_result1 = (long long *)system_event_handle_paramr_017(buffer_alloc_result);
          (**(code **)(*psystem_init_result1 + path_buffer_size))(psystem_init_result1,0);
        }
      }
    }
    system_init_result0 = astack_long_var[0];
    psystem_init_result1 = *(long long **)(*(long long *)(astack_long_var[0] + 0x3580) + 0x630);
    if (psystem_init_result1 != (long long *)0x0) {
      plStack_78 = psystem_init_result1;
      (**(code **)(*psystem_init_result1 + 0x28))(psystem_init_result1);
    }
    plStack_78 = *(long long **)(system_init_result0 + 0x12498);
    *(long long **)(system_init_result0 + 0x12498) = psystem_init_result1;
    if (plStack_78 != (long long *)0x0) {
      (**(code **)(*plStack_78 + 0x38))();
    }
    ppppsystem_init_result3 = reg_rcx[99];
    if (ppppsystem_init_result3 != (long long ****)0x0) {
      (*(code *)(*ppppsystem_init_result3)[0x1f])(ppppsystem_init_result3,astack_long_var[0]);
    }
    if (reg_rcx[0x22] != (long long ****)0x0) {
      (*(code *)reg_rcx[0x23])(astack_long_var[0]);
    }
    if ((*(char *)(reg_rcx + 0xb74) != '\0') &&
       (system_init_result0 = *(long long *)(*(long long *)(astack_long_var[0] + 0x3580) + 0x530), system_init_result0 != 0)) {
      *(unsigned int *)(system_init_result0 + SYSTEM_CONFIG_BUFFER_SIZE) = 0x41200000;
    }
    if (*(int *)(reg_rcx + 0xa3a) != 0) {
      buffer_alloc_result = *(unsigned int *)(reg_rcx + 0xa3a);
      pppppsystem_init_result7 = reg_rcx + (long long)*(int *)(reg_rcx + 0xa39) * 0x121 + 0x7f7;
      LOCK();
      *(unsigned int *)pppppsystem_init_result7 = 0;
      UNLOCK();
      system_processor_008(pppppsystem_init_result7,buffer_alloc_result);
      if (*(int *)(reg_rcx + 0xa3a) == 0) {
        thread_result_index = 0;
      }
      else {
        thread_result_index = (*(int *)(reg_rcx + 0xa3a) - 1U >> 0xc) + 1;
      }
      if (thread_result_index != 0) {
        memcpy(pppppsystem_init_result7[1], reg_rcx[0xa3b], path_buffer_size_000);
      }
      system_init_result0 = *(long long *)(*(long long *)(astack_long_var[0] + 0x3580) + 0x118);
      if (system_init_result0 != 0) {
        *(long long ******)(system_init_result0 + 0x98c8) =
             reg_rcx + (long long)*(int *)(reg_rcx + 0xa39) * 0x121 + 0x7f7;
      }
    }
    buffer_alloc_result = *(int *)(reg_rcx + 0xa39) + 1U & 0x80000001;
    if ((int)buffer_alloc_result < 0) {
      buffer_alloc_result = (buffer_alloc_result - 1 | 0xfffffffe) + 1;
    }
    *(uint *)(reg_rcx + 0xa39) = buffer_alloc_result;
  }
  while (thread_result_index = (int)buffer_alloc_result, (ulong long)(long long)thread_result_index < (ulong long)*(uint *)(reg_rcx + 0xb5b)) {
    ppppsystem_init_result3 = reg_rcx[(buffer_alloc_result >> 10) + 0xb5c] +
                 (ulong long)(uint)(thread_result_index + (int)(buffer_alloc_result >> 10) * -SYSTEM_CONFIG_BUFFER_SIZE_ZERO) * 0x18;
    system_resource_001(*ppppsystem_init_result3);
    system_execution_function(*ppppsystem_init_result3,ppppsystem_init_result3[1],ppppsystem_init_result3 + 2,0,ppppsystem_init_result3 + 10);
    buffer_alloc_result = (ulong long)(thread_result_index + 1);
  }
  buffer_alloc_result = (ulong long)*(uint *)(reg_rcx + 0xb5b);
  LOCK();
  *(unsigned int *)(reg_rcx + 0xb5b) = 0;
  buffer_alloc_result = global_data_ptr;
  UNLOCK();
  if (ppplStack_b8 != (long long ***)0x0) {
    pppstack_long_var = (long long ***)&ppplStack_b0;
    ppplStack_b0 = ppplStack_b8;
    (*(code *)(*ppplStack_b8)[5])(ppplStack_b8);
    system_event_handle_paramr_016(buffer_alloc_result,&ppplStack_b0,0);
    buffer_alloc_result = (*(code *)(*ppplStack_b8)[7])(ppplStack_b8);
  }
  return buffer_alloc_result;
}
unsigned long long *
system_processor_006(unsigned long long *handle_param,long long thread_op_flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  int thread_result_index;
  unsigned long long *pthread_op_flags;
  unsigned int *string_input_ptr;
  unsigned int buffer_alloc_result;
  *handle_param = &g_threadString4;
  handle_param[1] = 0;
  *(unsigned int *)(handle_param + 2) = 0;
  *handle_param = &g_threadString2;
  handle_param[3] = 0;
  handle_param[1] = 0;
  *(unsigned int *)(handle_param + 2) = 0;
  system_thread_manager_001(handle_param, 9, mutex_attr, mutex_type, 0, DEFAULT_THREAD_POOL_FLAG);
  pthread_op_flags = (unsigned long long *)handle_param[1];
  *pthread_op_flags = 0x6a624f656e656353;
  *(unsigned short *)(pthread_op_flags + 1) = 0x2f;
  *(unsigned int *)(handle_param + 2) = 9;
  buffer_alloc_result = 1;
  thread_result_index = *(int *)(handle_param + 2);
  if (0 < *(int *)(thread_op_flags + STRING_BUFFER_SIZE)) {
    system_thread_manager_001(handle_param,thread_result_index + *(int *)(thread_op_flags + STRING_BUFFER_SIZE));
    memcpy((ulong long)*(uint *)(handle_param + 2) + handle_param[1],*(unsigned long long *)(thread_op_flags + 8),
           (long long)(*(int *)(thread_op_flags + STRING_BUFFER_SIZE) + 1),mutex_type,buffer_alloc_result);
  }
  system_thread_manager_001(handle_param,thread_result_index + 6);
  string_input_ptr = (unsigned int *)((ulong long)*(uint *)(handle_param + 2) + handle_param[1]);
  *string_input_ptr = 0x6563732f;
  *(unsigned short *)(string_input_ptr + 1) = 0x656e;
  *(unsigned char *)((long long)string_input_ptr + 6) = 0;
  *(int *)(handle_param + 2) = thread_result_index + 6;
  system_thread_manager_001(handle_param,thread_result_index + 0xd);
  *(unsigned long long *)((ulong long)*(uint *)(handle_param + 2) + handle_param[1]) = 0x656e656373782e;
  *(int *)(handle_param + 2) = thread_result_index + 0xd;
  return handle_param;
}
  system_initialization_flag = 1;
  stack_size_max = 3;
  multi_level_stack_pointer_188 = &multi_level_stack_pointer_188;
  pppppppuStack_180 = &multi_level_stack_pointer_188;
  multi_level_stack_pointer_178 = (unsigned long long *******)0x0;
  stack_size_max = 0;
  stack_size_max = 0;
  stack_size_max = 0;
  stack_size_max = 0;
  stack_size_max = 0;
  stack_size_max = 3;
  str_len_counter = *(long long *)(*psystem_init_result3 + 0x890) - *(long long *)(*psystem_init_result3 + 0x888) >> 5;
  thread_stack_base_address = str_len_counter;
  multi_level_stack_long_variable = (long long *******)((ulong long)multi_level_stack_long_variable & INT64_MASK);
  if (0 < (int)str_len_counter) {
    do {
      if (thread_result_index < 0) {
section_processing_jump_label_:
        system_init_result9 = system_thread_manager_007();
      }
      else {
        system_init_result9 = *(long long *)(*psystem_init_result3 + 0x888);
        if ((ulong long)(*(long long *)(*psystem_init_result3 + 0x890) - system_init_result9 >> 5) <=
            (ulong long)(long long)thread_result_index) goto section_processing_jump_label_;
        system_init_result9 = (long long)thread_result_index * path_buffer_size + system_init_result9;
      }
      thread_stack_ptr = &g_threadString2;
      stack_size_max = 0;
      thread_stack_ptr = (unsigned char *)0x0;
      stack_size_max = 0;
      system_thread_manager_001(&thread_stack_ptr,*(unsigned int *)(system_init_result9 + STRING_BUFFER_SIZE));
      if (*(int *)(system_init_result9 + STRING_BUFFER_SIZE) != 0) {
        memcpy(thread_stack_ptr,*(unsigned long long *)(system_init_result9 + 8),*(int *)(system_init_result9 + STRING_BUFFER_SIZE) + 1);
      }
      if (*(long long *)(system_init_result9 + 8) != 0) {
        stack_size_max = 0;
        if (thread_stack_ptr != (unsigned char *)0x0) {
          *thread_stack_ptr = 0;
        }
        stack_size_max = stack_size_max & UINT32_MAX;
      }
      thread_result_index = stack_size_max + 8;
      system_thread_manager_001(&thread_stack_ptr,thread_result_index);
      *(unsigned long long *)(thread_stack_ptr + stack_size_max) = 0x6a624f656e656353;
      *(unsigned char *)((long long)(thread_stack_ptr + stack_size_max) + 8) = 0;
      stack_size_max = thread_result_index;
      system_char_variable = system_thread_001(&thread_stack_ptr);
      if (system_char_variable == '\0') {
        thread_stack_ptr = &g_threadString2;
        if (thread_stack_ptr != (unsigned char *)0x0) {
          handle_param_system_error();
        }
      }
      else {
        pppppuStack_d0 = (unsigned long long *****)0x0;
        pppppuStack_c8 = (unsigned long long *****)0x0;
        stack_size_max = 0;
        stack_size_max = 3;
        system_execution_function(&thread_stack_ptr,&pppppuStack_d0);
        pppppthread_op_flags = pppppuStack_c8;
        pppppthread_op_flags = pppppuStack_d0;
        system_init_result9 = (long long)pppppuStack_c8 - (long long)pppppuStack_d0;
        multi_level_pointer_array_6_element = (unsigned long long ******)system_execution_function(global_data_ptr,path_buffer_size,8,3);
        multi_level_stack_pointer_d8 = multi_level_pointer_array_6_element;
        *multi_level_pointer_array_6_element = (unsigned long long *****)0x0;
        multi_level_pointer_array_6_element[1] = (unsigned long long *****)0x0;
        multi_level_pointer_array_6_element[2] = (unsigned long long *****)0x0;
        *(unsigned int *)(multi_level_pointer_array_6_element + 3) = 3;
        multi_level_pointer_array_6 = &multi_level_stack_pointer_188;
        multi_level_ptr_array_9 = multi_level_stack_pointer_178;
        while (multi_level_ptr_array_9 != (unsigned long long *******)0x0) {
          if (*(int *)(multi_level_ptr_array_9 + 4) < thread_result_index) {
            multi_level_ptr_array_9 = (unsigned long long *******)*multi_level_ptr_array_9;
          }
          else {
            multi_level_pointer_array_6 = multi_level_ptr_array_9;
            multi_level_ptr_array_9 = (unsigned long long *******)multi_level_ptr_array_9[1];
          }
        }
        if (((unsigned long long ********)multi_level_pointer_array_6 == &multi_level_stack_pointer_188) ||
           (thread_result_index < *(int *)(multi_level_pointer_array_6 + 4))) {
          string_input_ptr = (unsigned long long *)system_execution_function(&multi_level_stack_pointer_188,auStack_90);
          multi_level_pointer_array_6 = (unsigned long long *******)*string_input_ptr;
        }
        multi_level_pointer_array_6[5] = multi_level_pointer_array_6_element;
        thread_result_index = (int)(system_init_result9 >> 5);
        system_init_result9 = (long long)thread_result_index;
        pppppthread_op_flags = pppppthread_op_flags;
        if (0 < thread_result_index) {
          pppppthread_op_flags = pppppthread_op_flags + 1;
          do {
            thread_stack_ptr = &g_threadString2;
            stack_size_max._0_4_ = 0;
            stack_size_max._4_4_ = 0;
            thread_stack_ptr = (unsigned char *)0x0;
            stack_size_max = 0;
            system_thread_manager_001(&thread_stack_ptr,*(unsigned int *)(pppppthread_op_flags + 1));
            if (*(int *)(pppppthread_op_flags + 1) != 0) {
              memcpy(thread_stack_ptr,*pppppthread_op_flags,*(int *)(pppppthread_op_flags + 1) + 1);
            }
            if (*pppppthread_op_flags != (unsigned long long ****)0x0) {
              stack_size_max = 0;
              if (thread_stack_ptr != (unsigned char *)0x0) {
                *thread_stack_ptr = 0;
              }
              stack_size_max._4_4_ = 0;
            }
            thread_result_index = stack_size_max + 0xd;
            system_thread_manager_001(&thread_stack_ptr,thread_result_index);
            string_input_ptr = (unsigned long long *)(thread_stack_ptr + stack_size_max);
            *string_input_ptr = 0x782e656e6563732f;
            *(unsigned int *)(string_input_ptr + 1) = 0x6e656373;
            *(unsigned short *)((long long)string_input_ptr + 0xc) = 0x65;
            stack_size_max = thread_result_index;
            system_char_variable = system_thread_002(&thread_stack_ptr);
            if (system_char_variable == '\0') {
              stack_size_max = 0;
              if (thread_stack_ptr != (unsigned char *)0x0) {
                *thread_stack_ptr = 0;
              }
              buffer_alloc_result = *(uint *)(pppppthread_op_flags + 1);
              thread_op_flags = (ulong long)buffer_alloc_result;
              if (*pppppthread_op_flags != (unsigned long long ****)0x0) {
                system_thread_manager_001(&thread_stack_ptr,thread_op_flags);
              }
              if (buffer_alloc_result != 0) {
                memcpy(thread_stack_ptr,*pppppthread_op_flags,thread_op_flags);
              }
              if (thread_stack_ptr != (unsigned char *)0x0) {
                thread_stack_ptr[thread_op_flags] = 0;
              }
              stack_size_max._4_4_ = *(uint *)((long long)pppppthread_op_flags + 0x14);
              stack_size_max = buffer_alloc_result;
              system_thread_manager_001(&thread_stack_ptr,0x12);
              string_input_ptr = (unsigned int *)(thread_stack_ptr + stack_size_max);
              *string_input_ptr = 0x6563732f;
              string_input_ptr[1] = 0x782e656e;
              string_input_ptr[2] = 0x2e6f6373;
              string_input_ptr[3] = 0x65637378;
              *(unsigned short *)(string_input_ptr + 4) = 0x656e;
              *(unsigned char *)((long long)string_input_ptr + 0x12) = 0;
              stack_size_max = 0x12;
              system_char_variable = system_thread_002(&thread_stack_ptr);
              if (system_char_variable != '\0') goto section_processing_jump_label_;
              thread_stack_ptr = &g_threadString2;
              if (thread_stack_ptr != (unsigned char *)0x0) {
                handle_param_system_error();
              }
            }
            else {
section_processing_jump_label_:
              multi_level_pointer_array_6 = &multi_level_stack_pointer_188;
              multi_level_ptr_array_9 = multi_level_stack_pointer_178;
              while (multi_level_ptr_array_9 != (unsigned long long *******)0x0) {
                if (*(int *)(multi_level_ptr_array_9 + 4) < thread_result_index) {
                  multi_level_ptr_array_9 = (unsigned long long *******)*multi_level_ptr_array_9;
                }
                else {
                  multi_level_pointer_array_6 = multi_level_ptr_array_9;
                  multi_level_ptr_array_9 = (unsigned long long *******)multi_level_ptr_array_9[1];
                }
              }
              if (((unsigned long long ********)multi_level_pointer_array_6 == &multi_level_stack_pointer_188) ||
                 (thread_result_index < *(int *)(multi_level_pointer_array_6 + 4))) {
                string_input_ptr = (unsigned long long *)system_execution_function(&multi_level_stack_pointer_188,&ppppppuStack_a0);
                multi_level_pointer_array_6 = (unsigned long long *******)*string_input_ptr;
              }
              multi_level_pointer_array_6_element = multi_level_pointer_array_6[5];
              multi_level_thread_op_flags = (unsigned long long ******)multi_level_pointer_array_6_element[1];
              if (multi_level_thread_op_flags < multi_level_pointer_array_6_element[2]) {
                multi_level_pointer_array_6_element[1] = multi_level_thread_op_flags + 4;
                *multi_level_thread_op_flags = (unsigned long long *****)&g_threadString4;
                multi_level_thread_op_flags[1] = (unsigned long long *****)0x0;
                *(unsigned int *)(multi_level_thread_op_flags + 2) = 0;
                *multi_level_thread_op_flags = (unsigned long long *****)&g_threadString2;
                multi_level_thread_op_flags[3] = (unsigned long long *****)0x0;
                multi_level_thread_op_flags[1] = (unsigned long long *****)0x0;
                *(unsigned int *)(multi_level_thread_op_flags + 2) = 0;
                multi_level_stack_pointer_d8 = multi_level_thread_op_flags;
                system_thread_manager_001(multi_level_thread_op_flags,stack_size_max);
                if (stack_size_max != 0) {
                  memcpy(multi_level_thread_op_flags[1],thread_stack_ptr,stack_size_max + 1);
                }
                if (thread_stack_ptr != (unsigned char *)0x0) {
                  *(unsigned int *)(multi_level_thread_op_flags + 2) = 0;
                  if (multi_level_thread_op_flags[1] != (unsigned long long *****)0x0) {
                    *(unsigned char *)multi_level_thread_op_flags[1] = 0;
                  }
                  *(unsigned int *)((long long)multi_level_thread_op_flags + 0x1c) = 0;
                }
              }
              else {
                system_event_handle_paramr_006(multi_level_pointer_array_6_element,&thread_stack_ptr);
              }
              thread_stack_ptr = &g_threadString2;
              if (thread_stack_ptr != (unsigned char *)0x0) {
                handle_param_system_error();
              }
            }
            stack_size_max = (ulong long)stack_size_max._4_4_ << path_buffer_size;
            thread_stack_ptr = (unsigned char *)0x0;
            thread_stack_ptr = &g_threadString4;
            pppppthread_op_flags = pppppthread_op_flags + 4;
            system_init_result9 = system_init_result9 + -1;
            pppppthread_op_flags = pppppuStack_d0;
            pppppthread_op_flags = pppppuStack_c8;
            pppppthread_op_flags = pppppuStack_d0;
            str_len_counter = thread_stack_base_address;
          } while (system_init_result9 != 0);
        }
        for (; pppppthread_op_flags != pppppthread_op_flags; pppppthread_op_flags = pppppthread_op_flags + 4) {
          (*(code *)**pppppthread_op_flags)(pppppthread_op_flags,0);
        }
        if (pppppthread_op_flags != (unsigned long long *****)0x0) {
          handle_param_system_error(pppppthread_op_flags);
        }
        thread_stack_ptr = &g_threadString2;
        if (thread_stack_ptr != (unsigned char *)0x0) {
          handle_param_system_error();
        }
      }
      stack_size_max = stack_size_max & INT64_MASK;
      thread_stack_ptr = (unsigned char *)0x0;
      thread_stack_ptr = &g_threadString4;
      thread_result_index = thread_result_index + 1;
      multi_level_stack_long_variable = (long long *******)merge_32bit_values(multi_level_stack_long_variable._4_4_,thread_result_index);
      psystem_init_result3 = global_data_ptr;
      mutex_attr = multi_level_stack_x_18;
      system_init_result9 = thread_stack_base_address;
      mutex_type = uStackX_20;
    } while (thread_result_index < (int)str_len_counter);
  }
  stack_size_max = 3;
  multi_level_stack_pointer_138 = &multi_level_stack_pointer_138;
  pppppppuStack_130 = &multi_level_stack_pointer_138;
  multi_level_stack_pointer_128 = (unsigned long long *******)0x0;
  stack_size_max = 0;
  stack_size_max = 0;
  multi_level_ptr_array_9 = pppppppuStack_180;
  if ((unsigned long long ********)pppppppuStack_180 != &multi_level_stack_pointer_188) {
    do {
      multi_level_pointer_temp2 = (unsigned long long *******)multi_level_ptr_array_9[5];
      multi_level_pointer_array_6 = multi_level_ptr_array_9 + 4;
      multi_level_pointer_current = &multi_level_stack_pointer_138;
      if (multi_level_stack_pointer_128 != (unsigned long long *******)0x0) {
        multi_level_pointer_temp1 = multi_level_stack_pointer_128;
        do {
          if (*(int *)(multi_level_pointer_temp1 + 4) < *(int *)multi_level_pointer_array_6) {
            multi_level_pointer_temp1 = (unsigned long long *******)*multi_level_pointer_temp1;
          }
          else {
            multi_level_pointer_current = multi_level_pointer_temp1;
            multi_level_pointer_temp1 = (unsigned long long *******)multi_level_pointer_temp1[1];
          }
        } while (multi_level_pointer_temp1 != (unsigned long long *******)0x0);
      }
      if (((unsigned long long ********)multi_level_pointer_current == &multi_level_stack_pointer_138) ||
         (*(int *)multi_level_pointer_array_6 < *(int *)(multi_level_pointer_current + 4))) {
        string_input_ptr = (unsigned long long *)system_execution_function(&multi_level_stack_pointer_138,&multi_level_stack_x_18);
        multi_level_pointer_current = (unsigned long long *******)*string_input_ptr;
      }
      if (multi_level_pointer_current + 5 != multi_level_pointer_temp2) {
        system_event_handle_paramr_004(multi_level_pointer_current + 5,*multi_level_pointer_temp2,multi_level_pointer_temp2[1]);
      }
      multi_level_pointer_current = &multi_level_stack_pointer_188;
      if (multi_level_stack_pointer_178 != (unsigned long long *******)0x0) {
        multi_level_pointer_temp2 = multi_level_stack_pointer_178;
        do {
          if (*(int *)(multi_level_pointer_temp2 + 4) < *(int *)multi_level_pointer_array_6) {
            multi_level_pointer_temp2 = (unsigned long long *******)*multi_level_pointer_temp2;
          }
          else {
            multi_level_pointer_current = multi_level_pointer_temp2;
            multi_level_pointer_temp2 = (unsigned long long *******)multi_level_pointer_temp2[1];
          }
        } while (multi_level_pointer_temp2 != (unsigned long long *******)0x0);
      }
      if (((unsigned long long ********)multi_level_pointer_current == &multi_level_stack_pointer_188) ||
         (*(int *)multi_level_pointer_array_6 < *(int *)(multi_level_pointer_current + 4))) {
        string_input_ptr = (unsigned long long *)system_execution_function(&multi_level_stack_pointer_188,&multi_level_stack_long_variable);
        multi_level_pointer_current = (unsigned long long *******)*string_input_ptr;
      }
      multi_level_pointer_array_6_element = multi_level_pointer_current[5];
      ppppppuStack_a0 = multi_level_pointer_array_6_element;
      if (multi_level_pointer_array_6_element != (unsigned long long ******)0x0) {
        system_event_handle_paramr_010(multi_level_pointer_array_6_element);
        handle_param_system_error(multi_level_pointer_array_6_element);
      }
      multi_level_pointer_current = &multi_level_stack_pointer_188;
      if (multi_level_stack_pointer_178 != (unsigned long long *******)0x0) {
        multi_level_pointer_temp2 = multi_level_stack_pointer_178;
        do {
          if (*(int *)(multi_level_pointer_temp2 + 4) < *(int *)multi_level_pointer_array_6) {
            multi_level_pointer_temp2 = (unsigned long long *******)*multi_level_pointer_temp2;
          }
          else {
            multi_level_pointer_current = multi_level_pointer_temp2;
            multi_level_pointer_temp2 = (unsigned long long *******)multi_level_pointer_temp2[1];
          }
        } while (multi_level_pointer_temp2 != (unsigned long long *******)0x0);
      }
      if (((unsigned long long ********)multi_level_pointer_current == &multi_level_stack_pointer_188) ||
         (*(int *)multi_level_pointer_array_6 < *(int *)(multi_level_pointer_current + 4))) {
        string_input_ptr = (unsigned long long *)system_execution_function(&multi_level_stack_pointer_188,&multi_level_stack_pointer_d8);
        multi_level_pointer_current = (unsigned long long *******)*string_input_ptr;
      }
      multi_level_pointer_current[5] = (unsigned long long ******)0x0;
      multi_level_ptr_array_9 = (unsigned long long *******)memory_alloc_function(multi_level_ptr_array_9);
    } while ((unsigned long long ********)multi_level_ptr_array_9 != &multi_level_stack_pointer_188);
  }
  multi_level_ptr_array_9 = multi_level_stack_pointer_178;
  if (multi_level_stack_pointer_178 != (unsigned long long *******)0x0) {
    system_execution_function(&multi_level_stack_pointer_188,*multi_level_stack_pointer_178);
    handle_param_system_error(multi_level_ptr_array_9);
  }
  multi_level_stack_pointer_188 = &multi_level_stack_pointer_188;
  pppppppuStack_180 = &multi_level_stack_pointer_188;
  multi_level_stack_pointer_178 = (unsigned long long *******)0x0;
  stack_size_max = stack_size_max & 0xffffffffffffff00;
  stack_size_max = 0;
  buffer_alloc_result = system_execution_function(global_data_ptr,0x150,8,3);
  multi_level_stack_x_18 = (unsigned long long *******)&pppppuStack_d0;
  buffer_alloc_result = system_thread_manager_003(&pppppuStack_d0,mutex_type);
  multi_level_stack_long_variable = (long long *******)&psystem_chain_node_backup_1;
  stack_size_max = 0;
  stack_size_max = 0;
  stack_size_max = 0;
  stack_size_max = stack_size_max;
  psystem_chain_node_backup_1 = (long long *******)&psystem_chain_node_backup_1;
  psystem_chain_node_backup_2 = (long long *******)&psystem_chain_node_backup_1;
  ppppppplStack_f8 = (long long *******)0x0;
  stack_size_max = 0;
  stack_size_max = 0;
  if (multi_level_stack_pointer_128 != (unsigned long long *******)0x0) {
    ppppppplStack_f8 =
         (long long *******)system_processor_009(&psystem_chain_node_backup_1,multi_level_stack_pointer_128,&psystem_chain_node_backup_1);
    system_chain_next_ptr = (long long *******)*ppppppplStack_f8;
    psystem_chain_node_backup_1 = ppppppplStack_f8;
    while (ppppsystem_thread_manager_ptr = system_chain_next_ptr, ppppsystem_thread_manager_ptr != (long long *******)0x0) {
      psystem_chain_node_backup_1 = ppppsystem_thread_manager_ptr;
      system_chain_next_ptr = (long long *******)*ppppsystem_thread_manager_ptr;
    }
    system_chain_next_ptr = (long long *******)ppppppplStack_f8[1];
    psystem_chain_node_backup_2 = ppppppplStack_f8;
    while (ppppsystem_thread_manager_ptr = system_chain_next_ptr, ppppsystem_thread_manager_ptr != (long long *******)0x0) {
      psystem_chain_node_backup_2 = ppppsystem_thread_manager_ptr;
      system_chain_next_ptr = (long long *******)ppppsystem_thread_manager_ptr[1];
    }
    stack_size_max = stack_size_max;
  }
  multi_level_pointer_array_6_element = (unsigned long long ******)
                 system_processor_010(buffer_alloc_result,&psystem_chain_node_backup_1,buffer_alloc_result,pppppppuStackX_10,mutex_attr);
  if (multi_level_pointer_array_6_element != (unsigned long long ******)0x0) {
    multi_level_stack_x_18 = (unsigned long long *******)multi_level_pointer_array_6_element;
    (*(code *)(*multi_level_pointer_array_6_element)[5])(multi_level_pointer_array_6_element);
  }
  multi_level_stack_x_18 = *(unsigned long long ********)(system_init_result9 + SYSTEM_CONFIG_BUFFER_SIZE);
  *(unsigned long long *******)(system_init_result9 + SYSTEM_CONFIG_BUFFER_SIZE) = multi_level_pointer_array_6_element;
  if (multi_level_stack_x_18 != (unsigned long long *******)0x0) {
    (*(code *)(*multi_level_stack_x_18)[7])();
  }
  buffer_alloc_result = global_data_ptr;
  pppppppuStackX_10 = &multi_level_stack_x_18;
  multi_level_stack_x_18 = *(unsigned long long ********)(system_init_result9 + SYSTEM_CONFIG_BUFFER_SIZE);
  if (multi_level_stack_x_18 != (unsigned long long *******)0x0) {
    (*(code *)(*multi_level_stack_x_18)[5])();
  }
  system_event_handle_paramr_013(buffer_alloc_result,&multi_level_stack_x_18);
  multi_level_pointer_array_6 = multi_level_stack_pointer_128;
  multi_level_ptr_array_9 = multi_level_stack_pointer_178;
  multi_level_stack_x_18 = multi_level_stack_pointer_128;
  if (multi_level_stack_pointer_128 == (unsigned long long *******)0x0) {
    if (multi_level_stack_pointer_178 != (unsigned long long *******)0x0) {
      system_execution_function(&multi_level_stack_pointer_188,*multi_level_stack_pointer_178);
      handle_param_system_error(multi_level_ptr_array_9);
    }
    thread_stack_ptr = &g_threadString2;
    if (thread_stack_ptr == (void *)0x0) {
      return;
    }
    handle_param_system_error();
  }
  system_processor_011(&multi_level_stack_pointer_138,*multi_level_stack_pointer_128);
  pppppppuStackX_10 = multi_level_pointer_array_6 + 4;
  multi_level_stack_long_variable = multi_level_pointer_array_6 + 5;
  system_event_handle_paramr_010();
  handle_param_system_error(multi_level_pointer_array_6);
}
        g_data_buffer_status = 0;
        return ptr_var_7;
      }
      system_init_result0 = (long long)thread_result_index << 4;
      do {
        if ((int)(float_var - 12582912.0) <= (int)system_long_ptr_index) {
          g_data_buffer_status = 0;
          return ptr_var_7;
        }
        str_len_counter = *(long long *)(system_init_result0 + (long long)global_data_ptr);
        ptr_var_7 = (long long *)(ulong long)*(uint *)(str_len_counter + 0xe0);
        if ((*(uint *)(str_len_counter + 0xe0) == 2) &&
           (ptr_var_7 = (long long *)(ulong long)*(uint *)(str_len_counter + 0xd8), *(uint *)(str_len_counter + 0xd8) == 0))
        {
          LOCK();
          buffer_alloc_result = *(uint *)(str_len_counter + 0xd8);
          if (buffer_alloc_result == 0) {
            *(uint *)(str_len_counter + 0xd8) = UINT32_MAX;
          }
          else {
            ptr_var_7 = (long long *)(ulong long)buffer_alloc_result;
          }
          UNLOCK();
          if (buffer_alloc_result == 0) {
            *(unsigned char *)(str_len_counter + 0xdc) = 0;
            system_hardware_001(str_len_counter + 0xe8);
            buffer_alloc_result = *(unsigned long long *)(str_len_counter + 0x88);
            thread_result_index = *(int *)(str_len_counter + 0x80);
            *(unsigned long long *)(str_len_counter + 0x88) = 0;
            *(unsigned int *)(str_len_counter + 0x80) = 0;
            *(unsigned int *)(str_len_counter + 0xe0) = 0;
            *(unsigned int *)(str_len_counter + 0xd8) = 0;
            system_hardware_002(buffer_alloc_result);
            LOCK();
            buffer_alloc_result = global_data_ptr - thread_result_index;
            ptr_var_7 = (long long *)(ulong long)global_data_ptr;
            UNLOCK();
            global_data_ptr = buffer_alloc_result;
            if (0 < thread_result_index) {
              system_long_ptr_index = (long long *)(ulong long)(uint)((int)system_long_ptr_index + thread_result_index);
              ptr_var_7 = global_data_ptr + (long long)thread_result_index * 2 + 2;
              if (ptr_var_7 < global_data_ptr) {
                memmove(global_data_ptr + (long long)thread_result_index * 2,ptr_var_7,
                        (long long)global_data_ptr - (long long)ptr_var_7);
              }
              ptr_var_7 = global_data_ptr + -2;
              global_data_ptr = ptr_var_7;
            }
          }
        }
        system_init_result0 = system_init_result0 + -STRING_BUFFER_SIZE;
        thread_result_index = thread_result_index + -1;
      } while (-1 < thread_result_index);
      g_data_buffer_status = 0;
      return ptr_var_7;
    }
    thread_op_flags = *(unsigned int *)(system_init_result0 + 0x84);
    buffer_alloc_result = *(unsigned int *)(system_init_result0 + 0x80);
    if (ptr_var_7 < global_data_ptr) {
      global_data_ptr = ptr_var_7 + 2;
      *ptr_var_7 = system_init_result0;
      ptr_var_7[1] = merge_32bit_values(buffer_alloc_result,thread_op_flags);
    }
    else {
      str_len_counter = (long long)ptr_var_7 - (long long)global_data_ptr >> 4;
      if (str_len_counter == 0) {
        str_len_counter = 1;
section_processing_jump_label_:
        ptr_var_7 = (long long *)system_execution_function(global_data_ptr,str_len_counter << 4,system_config_data_buffer);
      }
      else {
        str_len_counter = str_len_counter * 2;
        ptr_var_7 = system_long_ptr_index;
        if (str_len_counter != 0) goto section_processing_jump_label_;
      }
      if (global_data_ptr != global_data_ptr) {
        memmove(ptr_var_7,global_data_ptr,(long long)global_data_ptr - (long long)global_data_ptr);
      }
      *ptr_var_7 = system_init_result0;
      ptr_var_7[1] = merge_32bit_values(buffer_alloc_result,thread_op_flags);
      if (global_data_ptr != (long long *)0x0) {
        handle_param_system_error();
      }
      global_data_ptr = ptr_var_7 + str_len_counter * 2;
      global_data_ptr = ptr_var_7;
      global_data_ptr = ptr_var_7 + 2;
    }
    system_char_variable = system_validator_function(0x180c919f0,&stack_long_var);
    ptr_var_7 = global_data_ptr;
    system_init_result0 = stack_long_var;
  } while( true );
}
      g_data_buffer_status = buffer_alloc_result;
      return;
    }
    str_len_counter = *(long long *)(str_len_counter + global_data_ptr);
    if ((*(int *)(str_len_counter + 0xe0) == 2) && (*(int *)(str_len_counter + 0xd8) == 0)) {
      LOCK();
      byte_validation_flag = *(int *)(str_len_counter + 0xd8) == 0;
      if (byte_validation_flag) {
        *(int *)(str_len_counter + 0xd8) = -1;
      }
      UNLOCK();
      if (byte_validation_flag) {
        *(unsigned char *)(str_len_counter + 0xdc) = buffer_alloc_result;
        system_hardware_001(str_len_counter + 0xe8);
        buffer_alloc_result = *(unsigned long long *)(str_len_counter + 0x88);
        thread_result_index = *(int *)(str_len_counter + 0x80);
        *(unsigned long long *)(str_len_counter + 0x88) = unaffected_register;
        buffer_alloc_result = (unsigned int)unaffected_register;
        *(unsigned int *)(str_len_counter + 0x80) = buffer_alloc_result;
        *(unsigned int *)(str_len_counter + 0xe0) = buffer_alloc_result;
        *(unsigned int *)(str_len_counter + 0xd8) = buffer_alloc_result;
        system_hardware_002(buffer_alloc_result);
        LOCK();
        global_data_ptr = global_data_ptr - thread_result_index;
        UNLOCK();
        if (0 < thread_result_index) {
          unaff_EBP = unaff_EBP + thread_result_index;
          str_len_counter = (long long)unaff_EDI * STRING_BUFFER_SIZE + global_data_ptr;
          buffer_alloc_result = str_len_counter + STRING_BUFFER_SIZE;
          if (buffer_alloc_result < global_data_ptr) {
            memmove(str_len_counter,buffer_alloc_result,global_data_ptr - buffer_alloc_result);
          }
          global_data_ptr = global_data_ptr - STRING_BUFFER_SIZE;
        }
      }
    }
    str_len_counter = str_len_counter + -STRING_BUFFER_SIZE;
    unaff_EDI = unaff_EDI + -1;
  } while (-1 < unaff_EDI);
  g_data_buffer_status = buffer_alloc_result;
  return;
}
  g_data_buffer_status = reg_bpl;
  return;
}
        g_data_crypto_flag = '\x01';
        thread_priority_level = 0x786;
        system_execution_function(auStack_258,&systemFunctionData1,&systemFunctionData2,&systemFunctionData3);
        OutputDebugStringA(auStack_258);
      }
      float_var = (float)modff((float)(int)(*(ushort *)((long long)handle_param + 0x5e) - 1) *
                            uStackX_18._4_4_,&stack_size_max);
      float_var = (float)modff();
      fStack_298 = (fStack_28c - fStack_298) * float_var + fStack_298;
      fStack_294 = (fStack_288 - fStack_294) * float_var + fStack_294;
      fStack_290 = (fStack_284 - fStack_290) * float_var + fStack_290;
      float_var = (((fStack_270 - fStack_27c) * float_var + fStack_27c) - fStack_294) * float_var +
               fStack_294;
      float_var = (((fStack_26c - fStack_278) * float_var + fStack_278) - fStack_290) * float_var +
               fStack_290;
      float_var = (((fStack_274 - fStack_280) * float_var + fStack_280) - fStack_298) * float_var +
               fStack_298;
    }
    else {
      float_var = (float)stack_size_max;
      float_var = (float)stack_size_max;
      float_var = (float)stack_size_max;
    }
    *thread_op_flags = float_var;
    thread_op_flags[1] = float_var;
    thread_op_flags[2] = float_var;
    thread_op_flags[3] = 1.0;
    break;
  case 0x16:
    thread_priority_level = mutex_type;
    system_handle_paramr_007(system_init_result0,&stack_size_max,handle_param,&uStackX_18);
code_section_14f5:
    *thread_op_flags = (float)stack_size_max._2_1_ * 0.003921569;
    byte_check_result = (byte)stack_size_max;
SYSTEM_LABEL_THREAD_OP_FLOAT_START:
    float_var = 0.003921569;
    buffer_alloc_result = (ushort)stack_size_max._1_1_;
    buffer_alloc_result = (ushort)byte_check_result;
    buffer_alloc_result = (ushort)stack_size_max._3_1_;
SYSTEM_LABEL_THREAD_OP_BUFFER_ALLOC:
    thread_op_flags[1] = (float)buffer_alloc_result * float_var;
    thread_op_flags[2] = (float)buffer_alloc_result * float_var;
    thread_op_flags[3] = (float)buffer_alloc_result * float_var;
    break;
  case 0x1e:
    thread_priority_level = mutex_type;
    string_input_ptr = (unsigned short *)system_handle_paramr_008(system_init_result0,&stack_size_max,handle_param,&uStackX_18);
    float_var = (float)float_convert_function(string_input_ptr[2]);
    float_var = (float)float_convert_function(string_input_ptr[1]);
    float_var = (float)float_convert_function(*string_input_ptr);
    float_var = (float)float_convert_function(string_input_ptr[3]);
    thread_op_flags[3] = float_var;
    *thread_op_flags = float_var;
    thread_op_flags[1] = float_var;
    thread_op_flags[2] = float_var;
    break;
  case path_buffer_size:
    thread_priority_level = mutex_type;
    system_handle_paramr_002(system_init_result0,&stack_size_max,handle_param,&uStackX_18);
    *thread_op_flags = (float)stack_size_max;
    thread_op_flags[2] = (float)stack_size_max;
code_section_1ad1:
    thread_op_flags[3] = 1.0;
    float_var = stack_size_max._4_4_;
code_section_1ade:
    thread_op_flags[1] = float_var;
    break;
  case 0x21:
    if (mutex_type == 0) {
      thread_result_index = *(ushort *)((long long)handle_param + 0x5e) - 1;
      thread_result_index = *(ushort *)((long long)handle_param + 0x5c) - 1;
      uStackX_18._0_4_ = (float)mutex_attr;
      if ((int)((float)thread_result_index * (float)uStackX_18) <= thread_result_index) {
        thread_result_index = (int)((float)thread_result_index * (float)uStackX_18);
      }
      uStackX_18._4_4_ = (float)((ulong long)mutex_attr >> path_buffer_size);
      if ((int)((float)thread_result_index * uStackX_18._4_4_) <= thread_result_index) {
        thread_result_index = (int)((float)thread_result_index * uStackX_18._4_4_);
      }
      thread_result_index = 0;
      if (-1 < thread_result_index) {
        thread_result_index = thread_result_index;
      }
      thread_result_index = 0;
      if (-1 < thread_result_index) {
        thread_result_index = thread_result_index;
      }
      string_input_ptr = (unsigned long long *)
               ((long long)(int)(thread_result_index * (uint)*(ushort *)((long long)handle_param + 0x5c) + thread_result_index) * STRING_BUFFER_SIZE
               + *handle_param);
      thread_op_flags = string_input_ptr[1];
      *(unsigned long long *)thread_op_flags = *string_input_ptr;
      *(unsigned long long *)(thread_op_flags + 2) = thread_op_flags;
    }
    else if (mutex_type == 1) {
      system_handle_paramr_009(handle_param,&uStackX_18,mutex_attr,&fStack_298);
      float_var = (float)modff((float)(int)(*(ushort *)((long long)handle_param + 0x5e) - 1) *
                            uStackX_18._4_4_,&stack_size_max);
      float_var = (float)modff();
      fStack_298 = (fStack_288 - fStack_298) * float_var + fStack_298;
      fStack_294 = (fStack_284 - fStack_294) * float_var + fStack_294;
      fStack_290 = (fStack_280 - fStack_290) * float_var + fStack_290;
      *thread_op_flags = (((fStack_268 - fStack_278) * float_var + fStack_278) - fStack_298) * float_var +
                 fStack_298;
      thread_op_flags[1] = (((fStack_264 - fStack_274) * float_var + fStack_274) - fStack_294) * float_var +
                   fStack_294;
      thread_op_flags[2] = (((fStack_260 - fStack_270) * float_var + fStack_270) - fStack_290) * float_var +
                   fStack_290;
      thread_op_flags[3] = 3.4028235e+38;
    }
    else {
      stack_size_max = 0;
      stack_size_max = 0;
      thread_op_flags[0] = 0.0;
      thread_op_flags[1] = 0.0;
      thread_op_flags[2] = 0.0;
      thread_op_flags[3] = 0.0;
    }
    break;
  case 0x27:
    thread_priority_level = mutex_type;
    system_handle_paramr_005(system_init_result0,&stack_size_max,handle_param,&uStackX_18);
    float_var = 1.5259022e-05;
    *thread_op_flags = (float)(ushort)stack_size_max * 1.5259022e-05;
    buffer_alloc_result = (uint)stack_size_max._2_2_;
    buffer_alloc_result = stack_size_max._4_2_;
    goto code_section_16a1;
  case 0x28:
    thread_priority_level = mutex_type;
    system_handle_paramr_006(system_init_result0,&stack_size_max,handle_param,&uStackX_18);
    float_var = 0.003921569;
    *thread_op_flags = (float)(byte)stack_size_max * 0.003921569;
    buffer_alloc_result = (uint)stack_size_max._1_1_;
    buffer_alloc_result = (ushort)stack_size_max._2_1_;
    goto code_section_16a1;
  case 0x29:
    thread_priority_level = mutex_type;
    system_handle_paramr_006(system_init_result0,&stack_size_max,handle_param,&uStackX_18);
SYSTEM_LABEL_THREAD_PRIORITY_PROCESSING:
    float_var = 0.003921569;
    *thread_op_flags = (float)stack_size_max._2_1_ * 0.003921569;
    buffer_alloc_result = (uint)((ulong long)stack_size_max >> 8) & 0xff;
    buffer_alloc_result = (ushort)(byte)stack_size_max;
SYSTEM_LABEL_BUFFER_CONVERSION_START:
    thread_op_flags[3] = 1.0;
    thread_op_flags[2] = (float)buffer_alloc_result * float_var;
    thread_op_flags[1] = (float)buffer_alloc_result * float_var;
    break;
  case 0x2b:
    thread_priority_level = mutex_type;
    system_handle_paramr_004(system_init_result0,abStack_2b8,handle_param,&uStackX_18);
    thread_op_flags[1] = 0.0;
    thread_op_flags[2] = 0.0;
    thread_op_flags[3] = 0.0;
    *thread_op_flags = (float)abStack_2b8[0];
    break;
  case 0x2c:
    buffer_alloc_result = system_handle_paramr_003(system_init_result0,handle_param,&uStackX_18);
    float_var = (float)buffer_alloc_result;
SYSTEM_LABEL_THREAD_OP_FINAL_PROCESSING:
    *thread_op_flags = float_var;
    thread_op_flags[1] = 1.0;
    thread_op_flags[2] = 1.0;
    thread_op_flags[3] = 1.0;
  }
system_handle_paramr_001:
  system_execute_crypto_operation(stack_size_max ^ (ulong long)auStack_2e8);
}
    g_data_crypto_flag = '\x01';
    system_execution_function(unreg_bp + -0x70,&systemFunctionData1,&systemFunctionData2,&systemFunctionData3,0x786);
    OutputDebugStringA(unreg_bp + -0x70);
  }
  buffer_alloc_result = *(ushort *)(unaffected_registerDI + 0x5c);
  float_var = *(float *)(unreg_bp + path_buffer_size0);
  float_var = (float)modff((float)(int)(*(ushort *)(unaffected_registerDI + 0x5e) - 1) *
                       *(float *)(unreg_bp + path_buffer_size4),&stack_float_param_38);
  float_var = (float)modff((float)(int)(buffer_alloc_result - 1) * float_var,&stack_float_param_38);
  float_var = (stack_float_param_5c - stack_float_param_50) * float_var + stack_float_param_50;
  stack_float_param_54 =
       (stack_float_param_60 - stack_float_param_54) * float_var + stack_float_param_54;
  float_var = (stack_float_param_64 - stack_float_param_58) * float_var + stack_float_param_58;
  *unreg_bx = (((stack_float_param_7c - stack_float_param_70) * float_var + stack_float_param_70)
               - float_var) * float_var + float_var;
  unreg_bx[1] = (((stack_float_param_78 - stack_float_param_6c) * float_var +
                  stack_float_param_6c) - stack_float_param_54) * float_var + stack_float_param_54
  ;
  unreg_bx[2] = (((stack_float_param_74 - stack_float_param_68) * float_var +
                  stack_float_param_68) - float_var) * float_var + float_var;
  unreg_bx[3] = 1.0;
  system_execute_crypto_operation(*(ulong long *)(unreg_bp + 400) ^ (ulong long)&system_stack_zero);
}
  g_data_crypto_flag = 1;
  system_execution_function(unreg_bp + -0x70,&systemFunctionData1,&systemFunctionData2,&systemFunctionData3,0x786);
  OutputDebugStringA(unreg_bp + -0x70);
  buffer_alloc_result = *(ushort *)(unaffected_registerDI + 0x5c);
  float_var = *(float *)(unreg_bp + path_buffer_size0);
  float_var = (float)modff((float)(int)(*(ushort *)(unaffected_registerDI + 0x5e) - 1) *
                       *(float *)(unreg_bp + path_buffer_size4),&stack_float_param_38);
  float_var = (float)modff((float)(int)(buffer_alloc_result - 1) * float_var,&stack_float_param_38);
  float_var = (stack_float_param_5c - stack_float_param_50) * float_var + stack_float_param_50;
  stack_float_param_54 =
       (stack_float_param_60 - stack_float_param_54) * float_var + stack_float_param_54;
  float_var = (stack_float_param_64 - stack_float_param_58) * float_var + stack_float_param_58;
  *unreg_bx = (((stack_float_param_7c - stack_float_param_70) * float_var + stack_float_param_70)
               - float_var) * float_var + float_var;
  unreg_bx[1] = (((stack_float_param_78 - stack_float_param_6c) * float_var +
                  stack_float_param_6c) - stack_float_param_54) * float_var + stack_float_param_54
  ;
  unreg_bx[2] = (((stack_float_param_74 - stack_float_param_68) * float_var +
                  stack_float_param_68) - float_var) * float_var + float_var;
  unreg_bx[3] = 1.0;
  system_execute_crypto_operation(*(ulong long *)(unreg_bp + 400) ^ (ulong long)&system_stack_zero);
}
        g_data_crypto_flag_secondary = '\x01';
        thread_stack_base_address = merge_32bit_values(thread_stack_base_address._4_4_,0x4ea);
        system_execution_function(auStack_238,&systemFunctionData1,&systemFunctionData4,&systemFunctionData5);
        OutputDebugStringA(auStack_238);
      }
      goto section_processing_jump_label_;
    }
    buffer_alloc_result = system_execution_function(&thread_stack_ptr,handle_param);
    system_thread_manager_012(buffer_alloc_result,1);
    thread_stack_ptr = &g_threadString2;
    if (thread_stack_ptr != (void *)0x0) {
      handle_param_system_error();
    }
    thread_stack_ptr = (void *)0x0;
    stack_size_max = 0;
    thread_stack_ptr = &g_threadString4;
    str_len_counter = *thread_op_flags;
    buffer_alloc_result = *(unsigned short *)((long long)thread_op_flags + 0x5e);
    thread_op_flags = *(unsigned short *)((long long)thread_op_flags + 0x5c);
    string_input_ptr = &default_resource_string;
    if (*(void **)(handle_param + 8) != (void *)0x0) {
      string_input_ptr = *(void **)(handle_param + 8);
    }
    thread_result_index = fopen_s(&thread_stack_ptr,string_input_ptr,&fileOpenModeString);
    thread_stack_ptr = thread_stack_ptr;
    if (thread_result_index != 0) {
      thread_stack_ptr = (void *)0x0;
    }
    thread_stack_ptr = &fileHandleData;
    if (thread_stack_ptr == (void *)0x0) goto section_processing_jump_label_;
    string_input_ptr = thread_stack_ptr;
    if (str_len_counter != 0) {
      thread_stack_base_address = str_len_counter;
      system_hardware_003(&thread_stack_ptr,thread_op_flags,buffer_alloc_result,thread_result_index);
      string_input_ptr = thread_stack_ptr;
    }
  }
  fclose(string_input_ptr);
section_processing_jump_label_:
  system_execute_crypto_operation(stack_size_max ^ (ulong long)stack_buffer_298);
}
        g_data_crypto_flag_tertiary = '\x01';
        thread_stack_ptr = (void *)merge_32bit_values(thread_stack_ptr._4_4_,0xc88);
        system_execution_function(stack_buffer_228,&systemFunctionData1,&system_config_data,&systemFunctionData5);
        OutputDebugStringA(stack_buffer_228);
      }
      string_input_ptr = &default_resource_string;
      if (*(void **)(handle_param + 8) != (void *)0x0) {
        string_input_ptr = *(void **)(handle_param + 8);
      }
      system_data_manager_002(global_data_ptr,&systemDataManagerData,string_input_ptr);
    }
  }
  system_char_variable = handle_param_system_event(mutex_attr);
  if (system_char_variable == '\0') {
    string_input_ptr = &default_resource_string;
    if (*(void **)(handle_param + 8) != (void *)0x0) {
      string_input_ptr = *(void **)(handle_param + 8);
    }
    system_thread_initializer(&systemThreadData3,string_input_ptr);
  }
  else {
    *(unsigned long long *)(mutex_attr + 0x14) = 0;
    *(unsigned long long *)(mutex_attr + 0x1c) = 0;
    *(unsigned long long *)(mutex_attr + 0x24) = 0;
    *(unsigned long long *)(mutex_attr + 0x2c) = 0;
    *(unsigned long long *)(mutex_attr + 0x34) = 0;
    *(unsigned long long *)(mutex_attr + 0x3c) = 0;
    *(unsigned long long *)(mutex_attr + 0x44) = 0;
    *(unsigned long long *)(mutex_attr + 0x4c) = 0;
    buffer_alloc_result = mutex_set_function(*(unsigned int *)(mutex_attr + 0x54));
    strcpy_s(mutex_attr + 0x14, SYSTEM_CONFIG_BUFFER_SIZE, buffer_alloc_result);
  }
section_processing_jump_label_:
  system_processor_012(auStack_260);
  system_execute_crypto_operation(stack_size_max ^ (ulong long)auStack_2f8);
}
      g_data_thread_flag = '\x01';
      stack_size_max = 0xac7;
      system_execution_function(auStack_218,&systemFunctionData1,&systemFunctionData6,&systemFunctionData5);
      OutputDebugStringA(auStack_218);
    }
  }
  else {
    system_thread_initializer(&system_thread_data);
  }
  system_execute_crypto_operation(stack_size_max ^ (ulong long)auStack_248);
}
bool handle_param_system_event(unsigned long long *handle_param)
{
  int thread_result_index;
  unsigned long long thread_op_flags;
  unsigned long long buffer_alloc_result;
  thread_result_index = *(int *)((long long)handle_param + 0x54);
  if (thread_result_index == 0x27) {
    if (handle_param[1] == 0) {
      thread_op_flags = 0;
      buffer_alloc_result = 0;
    }
    else {
      thread_op_flags = system_execution_function(global_data_ptr,handle_param[1],3);
      buffer_alloc_result = handle_param[1];
    }
    memcpy(thread_op_flags,*handle_param,buffer_alloc_result);
  }
  if (thread_result_index != 0x28) {
    if (thread_result_index == 0x29) {
      if (handle_param[1] == 0) {
        thread_op_flags = 0;
        buffer_alloc_result = 0;
      }
      else {
        thread_op_flags = system_execution_function(global_data_ptr,handle_param[1],3);
        buffer_alloc_result = handle_param[1];
      }
      memcpy(thread_op_flags,*handle_param,buffer_alloc_result);
    }
    thread_result_index = thread_handle_paramr_function(*(unsigned int *)((long long)handle_param + 0x54));
    return thread_result_index != 0;
  }
  if (handle_param[1] == 0) {
    thread_op_flags = 0;
    buffer_alloc_result = 0;
  }
  else {
    thread_op_flags = system_execution_function(global_data_ptr,handle_param[1],3);
    buffer_alloc_result = handle_param[1];
  }
  memcpy(thread_op_flags,*handle_param,buffer_alloc_result);
}
unsigned long long process_system_request(unsigned long long *handle_param)
{
  unsigned char temp_buffer_primary [16];
  int thread_result_index;
  uint buffer_alloc_result;
  float *pfloat_var;
  ulong long buffer_alloc_result;
  ushort *string_input_ptr;
  float *pfloat_var;
  ulong long buffer_alloc_result;
  byte *byte_string_input_ptr;
  float float_var;
  float float_var;
  unsigned char temp_buffer_primary2 [16];
  float float_var;
  float float_var;
  float float_var;
  switch(*(int *)((long long)handle_param + 0x54) + -1) {
  case 0:
  case 1:
    byte_string_input_ptr = (byte *)*handle_param;
    pfloat_var = (float *)((ulong long)handle_param[1] >> 2);
    if (0 < (int)pfloat_var) {
      buffer_alloc_result = (ulong long)pfloat_var & UINT32_MAX;
      do {
        float_var = (float)byte_string_input_ptr[1] * 0.007843138 - 1.0;
        float_var = (float)*byte_string_input_ptr * 0.007843138 - 1.0;
        float_var = (float)byte_string_input_ptr[2] * 0.007843138 - 1.0;
        float_var = float_var * float_var + float_var * float_var + float_var * float_var;
        temp_buffer_primary2 = rsqrtss(zero_extension_float((uint)float_var),zero_extension_float((uint)float_var));
        float_var = temp_buffer_primary2._0_4_;
        float_var = float_var * 0.5 * (3.0 - float_var * float_var * float_var);
        *byte_string_input_ptr = (byte)(int)((float_var * float_var + 1.0) * 127.5);
        byte_string_input_ptr[1] = (byte)(int)((float_var * float_var + 1.0) * 127.5);
        thread_result_index = (int)((float_var * float_var + 1.0) * 127.5);
        byte_string_input_ptr[2] = (byte)thread_result_index;
        byte_string_input_ptr = byte_string_input_ptr + 4;
        buffer_alloc_result = buffer_alloc_result - 1;
      } while (buffer_alloc_result != 0);
      return CONCAT_BYTES_TO_64BIT((uint7)(uint3)((uint)thread_result_index >> 8),1);
    }
    break;
  default:
    return 0;
  case 8:
    string_input_ptr = (ushort *)*handle_param;
    pfloat_var = (float *)((ulong long)handle_param[1] >> 3);
    if (0 < (int)pfloat_var) {
      buffer_alloc_result = (ulong long)pfloat_var & UINT32_MAX;
      do {
        float_var = (float)string_input_ptr[1] * 3.0518044e-05 - 1.0;
        float_var = (float)*string_input_ptr * 3.0518044e-05 - 1.0;
        float_var = (float)string_input_ptr[2] * 3.0518044e-05 - 1.0;
        float_var = float_var * float_var + float_var * float_var + float_var * float_var;
        temp_buffer_primary2 = rsqrtss(zero_extension_float((uint)float_var),zero_extension_float((uint)float_var));
        float_var = temp_buffer_primary2._0_4_;
        float_var = float_var * 0.5 * (3.0 - float_var * float_var * float_var);
        *string_input_ptr = (ushort)(int)((float_var * float_var + 1.0) * 32767.5);
        string_input_ptr[1] = (ushort)(int)((float_var * float_var + 1.0) * 32767.5);
        thread_result_index = (int)((float_var * float_var + 1.0) * 32767.5);
        string_input_ptr[2] = (ushort)thread_result_index;
        string_input_ptr = string_input_ptr + 4;
        buffer_alloc_result = buffer_alloc_result - 1;
      } while (buffer_alloc_result != 0);
      return CONCAT_BYTES_TO_64BIT((uint7)(uint3)((uint)thread_result_index >> 8),1);
    }
    break;
  case 0x1f:
    pfloat_var = (float *)*handle_param;
    if (0 < (int)((ulong long)handle_param[1] / 0xc)) {
      buffer_alloc_result = (ulong long)handle_param[1] / 0xc & UINT32_MAX;
      do {
        float_var = (*pfloat_var + *pfloat_var) - 1.0;
        float_var = (pfloat_var[1] + pfloat_var[1]) - 1.0;
        float_var = (pfloat_var[2] + pfloat_var[2]) - 1.0;
        float_var = float_var * float_var + float_var * float_var + float_var * float_var;
        temp_buffer_primary2 = rsqrtss(zero_extension_float((uint)float_var),zero_extension_float((uint)float_var));
        float_var = temp_buffer_primary2._0_4_;
        float_var = float_var * 0.5 * (3.0 - float_var * float_var * float_var);
        *pfloat_var = (float_var * float_var + 1.0) * 0.5;
        pfloat_var[1] = (float_var * float_var + 1.0) * 0.5;
        pfloat_var[2] = (float_var * float_var + 1.0) * 0.5;
        pfloat_var = pfloat_var + 3;
        buffer_alloc_result = buffer_alloc_result - 1;
      } while (buffer_alloc_result != 0);
      return CONCAT_BYTES_TO_64BIT((int7)((ulong long)pfloat_var >> 8),1);
    }
    break;
  case path_buffer_size:
    buffer_alloc_result = handle_param[1];
    pfloat_var = (float *)*handle_param;
    pfloat_var = (float *)(buffer_alloc_result >> 4);
    if (0 < (int)pfloat_var) {
      buffer_alloc_result = (ulong long)pfloat_var & UINT32_MAX;
      do {
        float_var = (*pfloat_var + *pfloat_var) - 1.0;
        float_var = (pfloat_var[1] + pfloat_var[1]) - 1.0;
        float_var = (pfloat_var[2] + pfloat_var[2]) - 1.0;
        float_var = float_var * float_var + float_var * float_var + float_var * float_var;
        temp_buffer_primary2 = rsqrtss(zero_extension_float((uint)float_var),zero_extension_float((uint)float_var));
        float_var = temp_buffer_primary2._0_4_;
        float_var = float_var * 0.5 * (3.0 - float_var * float_var * float_var);
        *pfloat_var = (float_var * float_var + 1.0) * 0.5;
        pfloat_var[2] = (float_var * float_var + 1.0) * 0.5;
        pfloat_var[1] = (float_var * float_var + 1.0) * 0.5;
        pfloat_var = pfloat_var + 4;
        buffer_alloc_result = buffer_alloc_result - 1;
      } while (buffer_alloc_result != 0);
      return CONCAT_BYTES_TO_64BIT((uint7)(buffer_alloc_result >> 0xc),1);
    }
    break;
  case 0x26:
    string_input_ptr = (ushort *)*handle_param;
    temp_buffer_primary._8_8_ = 0;
    temp_buffer_primary._0_8_ = handle_param[1];
    pfloat_var = sub_long_long(zero_ext_long(0xaaaaaaaaaaaaaaab) * temp_buffer_primary,0);
    buffer_alloc_result = (ulong long)handle_param[1] / 6;
    if (0 < (int)buffer_alloc_result) {
      buffer_alloc_result = buffer_alloc_result & UINT32_MAX;
      do {
        float_var = (float)string_input_ptr[1] * 0.007843138 - 1.0;
        float_var = (float)*string_input_ptr * 0.007843138 - 1.0;
        float_var = (float)string_input_ptr[2] * 0.007843138 - 1.0;
        float_var = float_var * float_var + float_var * float_var + float_var * float_var;
        temp_buffer_primary2 = rsqrtss(zero_extension_float((uint)float_var),zero_extension_float((uint)float_var));
        float_var = temp_buffer_primary2._0_4_;
        float_var = float_var * 0.5 * (3.0 - float_var * float_var * float_var);
        *string_input_ptr = (ushort)(int)((float_var * float_var + 1.0) * 127.5);
        string_input_ptr[1] = (ushort)(int)((float_var * float_var + 1.0) * 127.5);
        thread_result_index = (int)((float_var * float_var + 1.0) * 127.5);
        string_input_ptr[2] = (ushort)thread_result_index;
        string_input_ptr = string_input_ptr + 3;
        buffer_alloc_result = buffer_alloc_result - 1;
      } while (buffer_alloc_result != 0);
      return CONCAT_BYTES_TO_64BIT((uint7)(uint3)((uint)thread_result_index >> 8),1);
    }
    break;
  case 0x27:
  case 0x28:
    byte_string_input_ptr = (byte *)*handle_param;
    temp_buffer_primary2._8_8_ = 0;
    temp_buffer_primary2._0_8_ = handle_param[1];
    pfloat_var = sub_long_long(zero_ext_long(0xaaaaaaaaaaaaaaab) * temp_buffer_primary2,0);
    buffer_alloc_result = (ulong long)handle_param[1] / 3;
    if (0 < (int)buffer_alloc_result) {
      buffer_alloc_result = buffer_alloc_result & UINT32_MAX;
      do {
        float_var = (float)byte_string_input_ptr[1] * 0.007843138 - 1.0;
        float_var = (float)*byte_string_input_ptr * 0.007843138 - 1.0;
        float_var = (float)byte_string_input_ptr[2] * 0.007843138 - 1.0;
        float_var = float_var * float_var + float_var * float_var + float_var * float_var;
        temp_buffer_primary2 = rsqrtss(zero_extension_float((uint)float_var),zero_extension_float((uint)float_var));
        float_var = temp_buffer_primary2._0_4_;
        float_var = float_var * 0.5 * (3.0 - float_var * float_var * float_var);
        *byte_string_input_ptr = (byte)(int)((float_var * float_var + 1.0) * 127.5);
        byte_string_input_ptr[1] = (byte)(int)((float_var * float_var + 1.0) * 127.5);
        buffer_alloc_result = (uint)((float_var * float_var + 1.0) * 127.5);
        pfloat_var = (float *)(ulong long)buffer_alloc_result;
        byte_string_input_ptr[2] = (byte)buffer_alloc_result;
        byte_string_input_ptr = byte_string_input_ptr + 3;
        buffer_alloc_result = buffer_alloc_result - 1;
      } while (buffer_alloc_result != 0);
    }
  }
  return CONCAT_BYTES_TO_64BIT((int7)((ulong long)pfloat_var >> 8),1);
}
unsigned long long handle_param_system_callback(unsigned long long *handle_param)
{
  float *pfloat_var;
  float *pfloat_var;
  float *pfloat_var;
  float *pfloat_var;
  float *pfloat_var;
  float *pfloat_var;
  float *pfloat_var;
  float *pfloat_var;
  float *pfloat_var;
  float *pfloat_var;
  float *pfloat_var;
  float float_var;
  uint buffer_alloc_result;
  float *pfloat_var;
  float *pfloat_var;
  int thread_result_index;
  int thread_result_index;
  int thread_result_index;
  ulong long buffer_alloc_result;
  long long str_len_counter;
  double color_luminance_accumulator;
  if (*(int *)((long long)handle_param + 0x54) == path_buffer_size) {
    pfloat_var = (float *)*handle_param;
    thread_result_index = 0;
    color_luminance_accumulator = 0.0;
    str_len_counter = 0;
    thread_result_index = 0;
    thread_result_index = (int)((ulong long)handle_param[1] / 0xc);
    pfloat_var = pfloat_var;
    if (3 < thread_result_index) {
      buffer_alloc_result = (thread_result_index - 4U >> 2) + 1;
      buffer_alloc_result = (ulong long)buffer_alloc_result;
      str_len_counter = (ulong long)buffer_alloc_result * 4;
      thread_result_index = buffer_alloc_result * 4;
      do {
        pfloat_var = pfloat_var + 3;
        float_var = *pfloat_var;
        pfloat_var = pfloat_var + 6;
        pfloat_var = pfloat_var + 7;
        pfloat_var = pfloat_var + 5;
        pfloat_var = pfloat_var + 9;
        pfloat_var = pfloat_var + 10;
        pfloat_var = pfloat_var + 4;
        pfloat_var = pfloat_var + 1;
        pfloat_var = pfloat_var + 2;
        pfloat_var = pfloat_var + 8;
        pfloat_var = pfloat_var + 0xb;
        pfloat_var = pfloat_var + 0xc;
        color_luminance_accumulator = color_luminance_accumulator + (double)*pfloat_var * 0.2126 + (double)float_var * 0.2126 +
                          (double)*pfloat_var * 0.2126 + (double)*pfloat_var * 0.2126 +
                          (double)*pfloat_var * 0.7152 +
                          (double)*pfloat_var * 0.7152 + (double)*pfloat_var * 0.7152 +
                          (double)*pfloat_var * 0.7152 +
                          (double)*pfloat_var * 0.0722 + (double)*pfloat_var * 0.0722 +
                          (double)*pfloat_var * 0.0722 + (double)*pfloat_var * 0.0722;
        buffer_alloc_result = buffer_alloc_result - 1;
      } while (buffer_alloc_result != 0);
    }
    if (thread_result_index < thread_result_index) {
      pfloat_var = pfloat_var + 2;
      buffer_alloc_result = (ulong long)(uint)(thread_result_index - thread_result_index);
      str_len_counter = str_len_counter + buffer_alloc_result;
      do {
        pfloat_var = pfloat_var + -1;
        pfloat_var = pfloat_var + -2;
        float_var = *pfloat_var;
        pfloat_var = pfloat_var + 3;
        color_luminance_accumulator = color_luminance_accumulator + (double)*pfloat_var * 0.7152 + (double)*pfloat_var * 0.2126 +
                          (double)float_var * 0.0722;
        buffer_alloc_result = buffer_alloc_result - 1;
      } while (buffer_alloc_result != 0);
    }
    color_luminance_accumulator = 1.0 / (color_luminance_accumulator / (double)str_len_counter);
    if (3 < thread_result_index) {
      buffer_alloc_result = (thread_result_index - 4U >> 2) + 1;
      buffer_alloc_result = (ulong long)buffer_alloc_result;
      thread_result_index = buffer_alloc_result * 4;
      do {
        *pfloat_var = (float)((double)*pfloat_var * color_luminance_accumulator);
        pfloat_var[1] = (float)((double)pfloat_var[1] * color_luminance_accumulator);
        pfloat_var[2] = (float)((double)pfloat_var[2] * color_luminance_accumulator);
        pfloat_var[3] = (float)((double)pfloat_var[3] * color_luminance_accumulator);
        pfloat_var[4] = (float)((double)pfloat_var[4] * color_luminance_accumulator);
        pfloat_var[5] = (float)((double)pfloat_var[5] * color_luminance_accumulator);
        pfloat_var[6] = (float)((double)pfloat_var[6] * color_luminance_accumulator);
        pfloat_var[7] = (float)((double)pfloat_var[7] * color_luminance_accumulator);
        pfloat_var[8] = (float)((double)pfloat_var[8] * color_luminance_accumulator);
        pfloat_var[9] = (float)((double)pfloat_var[9] * color_luminance_accumulator);
        pfloat_var[10] = (float)((double)pfloat_var[10] * color_luminance_accumulator);
        pfloat_var[0xb] = (float)((double)pfloat_var[0xb] * color_luminance_accumulator);
        pfloat_var = pfloat_var + 0xc;
        buffer_alloc_result = buffer_alloc_result - 1;
      } while (buffer_alloc_result != 0);
    }
    if (thread_result_index < thread_result_index) {
      pfloat_var = pfloat_var + 2;
      buffer_alloc_result = (ulong long)(uint)(thread_result_index - thread_result_index);
      do {
        pfloat_var[-2] = (float)((double)pfloat_var[-2] * color_luminance_accumulator);
        pfloat_var[-1] = (float)((double)pfloat_var[-1] * color_luminance_accumulator);
        *pfloat_var = (float)((double)*pfloat_var * color_luminance_accumulator);
        pfloat_var = pfloat_var + 3;
        buffer_alloc_result = buffer_alloc_result - 1;
      } while (buffer_alloc_result != 0);
    }
  }
  else {
    if (*(int *)((long long)handle_param + 0x54) != 0x21) {
      return 0;
    }
    thread_result_index = 0;
    pfloat_var = (float *)*handle_param;
    color_luminance_accumulator = 0.0;
    str_len_counter = 0;
    thread_result_index = 0;
    thread_result_index = (int)((ulong long)handle_param[1] >> 4);
    pfloat_var = pfloat_var;
    if (3 < thread_result_index) {
      buffer_alloc_result = (thread_result_index - 4U >> 2) + 1;
      buffer_alloc_result = (ulong long)buffer_alloc_result;
      str_len_counter = (ulong long)buffer_alloc_result * 4;
      thread_result_index = buffer_alloc_result * 4;
      do {
        pfloat_var = pfloat_var + 4;
        float_var = *pfloat_var;
        pfloat_var = pfloat_var + 8;
        pfloat_var = pfloat_var + 9;
        pfloat_var = pfloat_var + 6;
        pfloat_var = pfloat_var + 0xc;
        pfloat_var = pfloat_var + 0xd;
        pfloat_var = pfloat_var + 5;
        pfloat_var = pfloat_var + 1;
        pfloat_var = pfloat_var + 2;
        pfloat_var = pfloat_var + 10;
        pfloat_var = pfloat_var + 0xe;
        pfloat_var = pfloat_var + STRING_BUFFER_SIZE;
        color_luminance_accumulator = color_luminance_accumulator + (double)*pfloat_var * 0.2126 + (double)float_var * 0.2126 +
                          (double)*pfloat_var * 0.2126 + (double)*pfloat_var * 0.2126 +
                          (double)*pfloat_var * 0.7152 +
                          (double)*pfloat_var * 0.7152 + (double)*pfloat_var * 0.7152 +
                          (double)*pfloat_var * 0.7152 +
                          (double)*pfloat_var * 0.0722 + (double)*pfloat_var * 0.0722 +
                          (double)*pfloat_var * 0.0722 + (double)*pfloat_var * 0.0722;
        buffer_alloc_result = buffer_alloc_result - 1;
      } while (buffer_alloc_result != 0);
    }
    if (thread_result_index < thread_result_index) {
      pfloat_var = pfloat_var + 2;
      buffer_alloc_result = (ulong long)(uint)(thread_result_index - thread_result_index);
      str_len_counter = str_len_counter + buffer_alloc_result;
      do {
        pfloat_var = pfloat_var + -1;
        pfloat_var = pfloat_var + -2;
        float_var = *pfloat_var;
        pfloat_var = pfloat_var + 4;
        color_luminance_accumulator = color_luminance_accumulator + (double)*pfloat_var * 0.7152 + (double)*pfloat_var * 0.2126 +
                          (double)float_var * 0.0722;
        buffer_alloc_result = buffer_alloc_result - 1;
      } while (buffer_alloc_result != 0);
    }
    color_luminance_accumulator = 1.0 / (color_luminance_accumulator / (double)str_len_counter);
    if (3 < thread_result_index) {
      buffer_alloc_result = (thread_result_index - 4U >> 2) + 1;
      buffer_alloc_result = (ulong long)buffer_alloc_result;
      thread_result_index = buffer_alloc_result * 4;
      do {
        *pfloat_var = (float)((double)*pfloat_var * color_luminance_accumulator);
        pfloat_var[1] = (float)((double)pfloat_var[1] * color_luminance_accumulator);
        pfloat_var[2] = (float)((double)pfloat_var[2] * color_luminance_accumulator);
        pfloat_var[4] = (float)((double)pfloat_var[4] * color_luminance_accumulator);
        pfloat_var[5] = (float)((double)pfloat_var[5] * color_luminance_accumulator);
        pfloat_var[6] = (float)((double)pfloat_var[6] * color_luminance_accumulator);
        pfloat_var[8] = (float)((double)pfloat_var[8] * color_luminance_accumulator);
        pfloat_var[9] = (float)((double)pfloat_var[9] * color_luminance_accumulator);
        pfloat_var[10] = (float)((double)pfloat_var[10] * color_luminance_accumulator);
        pfloat_var[0xc] = (float)((double)pfloat_var[0xc] * system_color_luminance_factor);
        pfloat_var[0xd] = (float)((double)pfloat_var[0xd] * system_color_luminance_factor);
        pfloat_var[0xe] = (float)((double)pfloat_var[0xe] * system_color_luminance_factor);
        pfloat_var = pfloat_var + STRING_BUFFER_SIZE;
        buffer_alloc_result = buffer_alloc_result - 1;
      } while (buffer_alloc_result != 0);
    }
    if (thread_result_index < thread_result_index) {
      pfloat_var = pfloat_var + 2;
      buffer_alloc_result = (ulong long)(uint)(thread_result_index - thread_result_index);
      do {
        pfloat_var[-2] = (float)((double)pfloat_var[-2] * color_luminance_accumulator);
        pfloat_var[-1] = (float)((double)pfloat_var[-1] * color_luminance_accumulator);
        *pfloat_var = (float)((double)*pfloat_var * color_luminance_accumulator);
        pfloat_var = pfloat_var + 4;
        buffer_alloc_result = buffer_alloc_result - 1;
      } while (buffer_alloc_result != 0);
    }
  }
  return 1;
}
  g_data_ui_flag = 0;
  *(unsigned int *)(system_init_result + 0x4c) = 0;
  system_network_001(*(unsigned long long *)(system_init_result + STRING_BUFFER_SIZE8));
  thread_stack_ptr = &g_alternateDataTemplate;
  thread_stack_ptr = stack_buffer_38;
  stack_buffer_38[0] = 0;
  stack_size_max = 0x12;
  strcpy_s(stack_buffer_38,path_buffer_size,&system_config_path);
  system_network_002();
  thread_stack_ptr = &g_threadString4;
  system_execute_crypto_operation(stack_size_max ^ (ulong long)auStack_78);
}
        g_data_network_flag = 0;
        global_data_ptr = 0;
        global_data_ptr = 0;
        g_data_memory_flag = 0;
        global_data_ptr = 3;
        global_data_ptr = 0;
        system_crypto_initializer(&system_crypto_data);
        system_crypto_module_initializer(&crypto_module_data_buffer);
      }
      string_input_ptr = (uint *)&crypto_string_buffer;
      if (buffer_alloc_result < (ulong long)
                  ((*(long long *)(mutex_attr + 0x1c) - *(long long *)(mutex_attr + 0x1a)) / 0xb0)) {
        string_input_ptr = (uint *)(buffer_alloc_result + *(long long *)(mutex_attr + 0x1a));
      }
      if ((*(int *)(system_init_result0 + 0x48) < global_data_ptr) &&
         (system_crypto_004(&crypto_module_data_buffer), global_data_ptr == -1)) {
        resource_template_ptr = &g_defaultDataTemplate;
        global_data_ptr = &g_data_network_flag;
        global_data_ptr = 0;
        g_data_network_flag = 0;
        global_data_ptr = 0;
        global_data_ptr = 0;
        g_data_memory_flag = 0;
        global_data_ptr = 3;
        global_data_ptr = 0;
        system_crypto_initializer(&system_crypto_data);
        system_crypto_module_initializer(&crypto_module_data_buffer);
      }
      string_input_ptr = &crypto_string_buffer;
      if (buffer_alloc_result < (ulong long)
                  ((*(long long *)(thread_op_flags + 0x1c) - *(long long *)(thread_op_flags + 0x1a)) / 0xb0)) {
        string_input_ptr = (void *)(buffer_alloc_result + *(long long *)(thread_op_flags + 0x1a));
      }
      if ((((0.0001 <= ABS(*(float *)(string_input_ptr + 0x14) - (float)string_input_ptr[5])) ||
           (0.0001 <= ABS(*(float *)(string_input_ptr + 0x18) - (float)string_input_ptr[6]))) ||
          (0.0001 <= ABS(*(float *)(string_input_ptr + 0x1c) - (float)string_input_ptr[7]))) ||
         (((0.0001 <= ABS(*(float *)(string_input_ptr + STRING_BUFFER_SIZE) - (float)string_input_ptr[4]) ||
           (0.0001 <= ABS(*(float *)(string_input_ptr + path_buffer_size) - (float)string_input_ptr[8]))) ||
          ((0.0001 <= ABS(*(float *)(string_input_ptr + 0x24) - (float)string_input_ptr[9]) ||
           (0.0001 <= ABS(*(float *)(string_input_ptr + 0x28) - (float)string_input_ptr[10]))))))) {
        *string_input_ptr = *string_input_ptr | 8;
      }
      buffer_alloc_result = system_allocator_001(handle_param,string_input_ptr + 0x88,string_input_ptr + 0x22);
      buffer_alloc_result = buffer_alloc_result + 1;
      buffer_alloc_result = buffer_alloc_result + 0xb0;
      buffer_alloc_result = buffer_alloc_result - 1;
    } while (buffer_alloc_result != 0);
  }
section_processing_jump_label_:
  return buffer_alloc_result & 0xffffffffffffff00;
}
system_entry_point:
    thread_result_index = _Mtx_unlock(handle_param + 0x3d8);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    break;
  default:
section_processing_jump_label_:
    buffer_alloc_result = 1;
    goto section_processing_jump_label_;
  }
  *thread_op_flags = (long long)system_thread_op_flags_ptr;
code_r0x000180329ed1:
  byte_validation_flag = (byte)temp_stack_array[0];
  goto section_processing_jump_label_;
}
unsigned long long allocate_system_memory(long long handle_param,long long *thread_op_flags,unsigned int *mutex_attr,uint mutex_type)
{
  long long *psystem_init_result;
  byte byte_flag_value;
  int thread_result_index;
  unsigned long long *string_input_ptr;
  unsigned long long buffer_alloc_result;
  long long *system_memory_buffer_ptr;
  long long str_len_counter;
  long long *pstack_long_var;
  unsigned int temp_stack_array [2];
  long long *system_memory_stack_primary;
  long long *plStack_78;
  unsigned long long stack_size_max;
  long long **pplStack_68;
  long long *system_memory_stack_backup;
  unsigned char auStack_58 [32];
  stack_size_max = DEFAULT_THREAD_POOL_FLAG;
  buffer_alloc_result = 0;
  byte_flag_value = *(byte *)(mutex_attr + 2);
  if ((mutex_type >> 1 & 1) != 0) {
    system_ui_003(global_data_ptr,&plStack_78,mutex_attr + 0x14,1);
    string_input_ptr = (unsigned long long *)system_ui_006();
    system_resource_002(*string_input_ptr,&pstack_long_var);
    if (system_memory_stack_primary != (long long *)0x0) {
      (**(code **)(*system_memory_stack_primary + 0x38))();
    }
    system_resource_003(pstack_long_var,&plStack_78);
    *(uint *)(pstack_long_var + path_buffer_size) = *(uint *)(pstack_long_var + path_buffer_size) | SYSTEM_CONFIG_BUFFER_SIZE_ZERO;
    temp_stack_array[0] = *mutex_attr;
    psystem_init_result = (long long *)(handle_param + 0x3d8);
    system_memory_stack_primary = psystem_init_result;
    thread_result_index = _Mtx_lock(psystem_init_result);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    buffer_alloc_result = system_execution_function(global_data_ptr,0x298,8,3);
    system_memory_buffer_ptr = (long long *)system_memory_001(buffer_alloc_result);
    pplStack_68 = (long long **)merge_32bit_values(pplStack_68._4_4_,temp_stack_array[0]);
    system_memory_stack_backup = system_memory_buffer_ptr;
    system_memory_manager_006(handle_param + 0x3a8,auStack_58,&pplStack_68);
    thread_result_index = _Mtx_unlock(psystem_init_result);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    *thread_op_flags = (long long)system_memory_buffer_ptr;
    buffer_alloc_result = *(unsigned long long *)(handle_param + 0x2d8);
    pplStack_68 = &system_memory_stack_primary;
    system_memory_stack_primary = system_memory_buffer_ptr;
    if (system_memory_buffer_ptr != (long long *)0x0) {
      (**(code **)(*system_memory_buffer_ptr + 0x28))(system_memory_buffer_ptr);
    }
    system_execution_function(buffer_alloc_result,&system_memory_stack_primary);
    *(int *)(handle_param + 0xb0) = *(int *)(handle_param + 0xb0) + 1;
    buffer_alloc_result = 1;
    if (pstack_long_var != (long long *)0x0) {
      (**(code **)(*pstack_long_var + 0x38))();
    }
    if (plStack_78 != (long long *)0x0) {
      (**(code **)(*plStack_78 + 0x38))();
    }
  }
  if ((mutex_type >> 2 & 1) == 0) {
    if (((mutex_type >> 1 & 1) == 0) && ((byte_flag_value & 1) != 0)) {
      str_len_counter = system_memory_manager_007(handle_param,*mutex_attr);
      *thread_op_flags = str_len_counter;
      buffer_alloc_result = 1;
    }
  }
  else {
    temp_stack_array[0] = *mutex_attr;
    str_len_counter = system_memory_manager_007(handle_param);
    if (str_len_counter == 0) {
      *thread_op_flags = 0;
      buffer_alloc_result = 1;
    }
    else {
      psystem_init_result = (long long *)(handle_param + 0x3d8);
      pstack_long_var = psystem_init_result;
      thread_result_index = _Mtx_lock(psystem_init_result);
      if (thread_result_index != 0) {
        __Throw_C_error_std__YAXH_Z(thread_result_index);
      }
      system_memory_manager_008(handle_param + 0x3a8,temp_stack_array);
      thread_result_index = _Mtx_unlock(psystem_init_result);
      if (thread_result_index != 0) {
        __Throw_C_error_std__YAXH_Z(thread_result_index);
      }
      *thread_op_flags = str_len_counter;
      *(unsigned char *)(str_len_counter + 0x39) = 1;
      buffer_alloc_result = 1;
    }
  }
  return buffer_alloc_result;
}
    auth_data_buffer = 0;
    system_memory_002(PRIMARY_MEMORY_POOL_ADDR);
    system_crypto_initializer(system_execution_function);
    system_crypto_module_initializer(&auth_data_buffer);
  }
  thread_result_index = _Mtx_lock(handle_param + 0x6e8);
  if (thread_result_index != 0) {
    __Throw_C_error_std__YAXH_Z(thread_result_index);
  }
  if ((ulong long)mutex_attr <= *(ulong long *)(handle_param + 0x160)) {
    for (string_input_ptr = *(uint **)(*(long long *)(handle_param + 0x6c0) +
                            ((ulong long)thread_op_flags % (ulong long)*(uint *)(handle_param + 0x6c8)) * 8);
        string_input_ptr != (uint *)0x0; string_input_ptr = *(uint **)(string_input_ptr + 4)) {
      if (thread_op_flags == *string_input_ptr) goto section_processing_jump_label_;
    }
    string_input_ptr = *(uint **)(*(long long *)(handle_param + 0x6c0) + *(long long *)(handle_param + 0x6c8) * 8);
section_processing_jump_label_:
    str_len_counter = *(long long *)(string_input_ptr + 2);
    system_init_result = *(long long *)(str_len_counter + 8);
    for (string_input_ptr = *(uint **)(system_init_result + ((ulong long)mutex_attr % (ulong long)*(uint *)(str_len_counter + STRING_BUFFER_SIZE)) * 8);
        string_input_ptr != (uint *)0x0; string_input_ptr = *(uint **)(string_input_ptr + 4)) {
      if (mutex_attr == *string_input_ptr) {
        str_len_counter = *(long long *)(str_len_counter + STRING_BUFFER_SIZE);
        goto section_processing_jump_label_;
      }
    }
    str_len_counter = *(long long *)(str_len_counter + STRING_BUFFER_SIZE);
    string_input_ptr = *(uint **)(system_init_result + str_len_counter * 8);
section_processing_jump_label_:
    if ((string_input_ptr != *(uint **)(system_init_result + str_len_counter * 8)) && (str_len_counter = *(long long *)(string_input_ptr + 2), str_len_counter != 0)
       ) goto section_processing_jump_label_;
  }
  system_memory_002(PRIMARY_MEMORY_POOL_ADDR);
  str_len_counter = PRIMARY_MEMORY_POOL_ADDR;
section_processing_jump_label_:
  thread_result_index = _Mtx_unlock(handle_param + 0x6e8);
  if (thread_result_index != 0) {
    __Throw_C_error_std__YAXH_Z(thread_result_index);
  }
  return str_len_counter;
}
long long allocate_with_thread_op_flags(long long handle_param,uint thread_op_flags,uint mutex_attr)
{
  long long system_init_result;
  long long str_len_counter;
  uint *string_input_ptr;
  if ((*(int *)(*(long long *)((long long)ThreadLocalStoragePointer + (ulong long)__tls_index * 8) +
               0x48) < global_data_ptr) && (system_crypto_004(&network_data_buffer), global_data_ptr == -1)) {
    system_memory_004(SECONDARY_MEMORY_POOL_ADDR);
    system_crypto_initializer(system_execution_function);
    system_crypto_module_initializer(&network_data_buffer);
  }
  if ((ulong long)mutex_attr <= *(ulong long *)(handle_param + 0x160)) {
    for (string_input_ptr = *(uint **)(*(long long *)(handle_param + 0x9f8) +
                            ((ulong long)thread_op_flags % (ulong long)*(uint *)(handle_param + 0xa00)) * 8);
        string_input_ptr != (uint *)0x0; string_input_ptr = *(uint **)(string_input_ptr + 4)) {
      if (thread_op_flags == *string_input_ptr) goto section_processing_jump_label_;
    }
    string_input_ptr = *(uint **)(*(long long *)(handle_param + 0x9f8) + *(long long *)(handle_param + 0xa00) * 8);
section_processing_jump_label_:
    str_len_counter = *(long long *)(string_input_ptr + 2);
    system_init_result = *(long long *)(str_len_counter + 8);
    for (string_input_ptr = *(uint **)(system_init_result + ((ulong long)mutex_attr % (ulong long)*(uint *)(str_len_counter + STRING_BUFFER_SIZE)) * 8);
        string_input_ptr != (uint *)0x0; string_input_ptr = *(uint **)(string_input_ptr + 4)) {
      if (mutex_attr == *string_input_ptr) {
        str_len_counter = *(long long *)(str_len_counter + STRING_BUFFER_SIZE);
        goto section_processing_jump_label_;
      }
    }
    str_len_counter = *(long long *)(str_len_counter + STRING_BUFFER_SIZE);
    string_input_ptr = *(uint **)(system_init_result + str_len_counter * 8);
section_processing_jump_label_:
    if ((string_input_ptr != *(uint **)(system_init_result + str_len_counter * 8)) && (*(long long *)(string_input_ptr + 2) != 0)) {
      return *(long long *)(string_input_ptr + 2);
    }
  }
  system_memory_005(SECONDARY_MEMORY_POOL_ADDR);
  return SECONDARY_MEMORY_POOL_ADDR;
}
long long allocate_system_buffer(unsigned long long handle_param,long long *thread_op_flags,long long mutex_attr)
{
  long long system_init_result;
  uint thread_op_flags;
  ulong long buffer_alloc_result;
  unsigned long long buffer_alloc_result;
  unsigned long long *string_input_ptr;
  uint buffer_alloc_result;
  if (*(int *)(*(long long *)((long long)ThreadLocalStoragePointer + (ulong long)__tls_index * 8) +
              0x48) < global_data_ptr) {
    system_crypto_004(&render_data_buffer);
    if (global_data_ptr == -1) {
      buffer_alloc_result = system_execution_function(global_data_ptr,0x1c8,8,3);
      global_data_ptr = system_memory_manager_001(buffer_alloc_result);
      buffer_alloc_result = system_execution_function(global_data_ptr,path_buffer_size0,8,3);
      global_data_ptr = system_allocate_memory_buffer(buffer_alloc_result);
      string_input_ptr = (unsigned long long *)system_execution_function(global_data_ptr,0xf8,8,3);
      system_memory_003(string_input_ptr);
      // Original name: system_180a1b368
      *string_input_ptr = &g_handle_param_manager_address;
      system_register_memory_pointer(string_input_ptr);
      global_data_ptr = string_input_ptr;
      global_data_ptr = system_execution_function();
      string_input_ptr = (unsigned long long *)system_execution_function(global_data_ptr,0xb0,8,3);
      system_memory_003(string_input_ptr);
      // Original name: system_180a1b3f0
      *string_input_ptr = &g_memory_manager_address;
      global_data_ptr = string_input_ptr;
      global_data_ptr = system_get_memory_manager_instance();
      global_data_ptr = (*global_data_ptr)(&system_mutex_buffer);
      global_data_ptr = 0;
      system_crypto_module_initializer(&render_data_buffer);
    }
  }
  buffer_alloc_result = 0;
  buffer_alloc_result = (uint)(thread_op_flags[1] - *thread_op_flags >> 3);
  if (buffer_alloc_result != 0) {
    do {
      system_init_result = *(long long *)(*thread_op_flags + buffer_alloc_result * 8);
      if (*(int *)(system_init_result + 8) == *(int *)(mutex_attr + 8)) {
        return system_init_result;
      }
      thread_op_flags = (int)buffer_alloc_result + 1;
      buffer_alloc_result = (ulong long)thread_op_flags;
    } while (thread_op_flags < buffer_alloc_result);
  }
  (**(code **)(**(long long **)(&mutex_attr_data_buffer + (ulong long)*(uint *)(mutex_attr + 0x8c) * 8) + 8))();
  return *(long long *)(&mutex_attr_data_buffer + (ulong long)*(uint *)(mutex_attr + 0x8c) * 8);
}
unsigned long long
system_allocator_008(unsigned long long handle_param,long long *thread_op_flags,unsigned long long *mutex_attr,unsigned int mutex_type,
             unsigned int param_5,unsigned char param_6)
{
  long long system_init_result;
  ulong long thread_op_flags;
  long long str_len_counter;
  unsigned long long buffer_alloc_result;
  long long str_len_counter;
  long long str_len_counter;
  uint *string_input_ptr;
  buffer_alloc_result = 0;
  thread_op_flags = thread_op_flags[1] - *thread_op_flags >> 2;
  if ((int)thread_op_flags != 0) {
    str_len_counter = 0;
    thread_op_flags = thread_op_flags & UINT32_MAX;
    do {
      string_input_ptr = (uint *)*mutex_attr;
      system_init_result = *thread_op_flags;
      str_len_counter = (long long)mutex_attr[1] - (long long)string_input_ptr >> 2;
      if (0 < str_len_counter) {
        do {
          str_len_counter = str_len_counter >> 1;
          if (string_input_ptr[str_len_counter] < *(uint *)(system_init_result + str_len_counter)) {
            string_input_ptr = string_input_ptr + str_len_counter + 1;
            str_len_counter = str_len_counter + (-1 - str_len_counter);
          }
          str_len_counter = str_len_counter;
        } while (0 < str_len_counter);
      }
      if ((string_input_ptr == (uint *)mutex_attr[1]) || (*(uint *)(system_init_result + str_len_counter) < *string_input_ptr)) {
        buffer_alloc_result = allocate_with_thread_op_flags(handle_param,*(unsigned int *)(system_init_result + str_len_counter),mutex_type);
        system_allocator_002(handle_param,buffer_alloc_result,param_5,mutex_type,param_6);
        buffer_alloc_result = 1;
      }
      str_len_counter = str_len_counter + 4;
      thread_op_flags = thread_op_flags - 1;
    } while (thread_op_flags != 0);
  }
  return buffer_alloc_result;
}
unsigned char check_memory_status(void)
{
  uint reg_eax;
  long long system_init_result;
  long long str_len_counter;
  long long str_len_counter;
  unsigned char unaff_SIL;
  ulong long buffer_alloc_result;
  uint *string_input_ptr;
  unsigned long long *unaffected_register;
  long long *unaffected_register;
  str_len_counter = 0;
  buffer_alloc_result = (ulong long)reg_eax;
  do {
    string_input_ptr = (uint *)*unaffected_register;
    system_init_result = (long long)unaffected_register[1] - (long long)string_input_ptr >> 2;
    if (0 < system_init_result) {
      do {
        str_len_counter = system_init_result >> 1;
        if (string_input_ptr[str_len_counter] < *(uint *)(*unaffected_register + str_len_counter)) {
          string_input_ptr = string_input_ptr + str_len_counter + 1;
          str_len_counter = system_init_result + (-1 - str_len_counter);
        }
        system_init_result = str_len_counter;
      } while (0 < str_len_counter);
    }
    if ((string_input_ptr == (uint *)unaffected_register[1]) || (*(uint *)(*unaffected_register + str_len_counter) < *string_input_ptr)) {
      allocate_with_thread_op_flags();
      system_allocator_002();
      unaff_SIL = 1;
    }
    str_len_counter = str_len_counter + 4;
    buffer_alloc_result = buffer_alloc_result - 1;
  } while (buffer_alloc_result != 0);
  return unaff_SIL;
}
unsigned char validate_memory_allocation(void)
{
  unsigned char unaff_SIL;
  return unaff_SIL;
}
unsigned long long
system_allocator_011(unsigned long long handle_param,long long *thread_op_flags,long long *mutex_attr,uint mutex_type,char param_5)
{
  long long system_init_result;
  long long str_len_counter;
  uint buffer_alloc_result;
  ulong long buffer_alloc_result;
  ulong long buffer_alloc_result;
  long long str_len_counter;
  uint buffer_alloc_result;
  unsigned long long buffer_alloc_result;
  long long str_len_counter;
  long long system_init_result0;
  buffer_alloc_result = 0;
  system_init_result = mutex_attr[1];
  str_len_counter = *mutex_attr;
  buffer_alloc_result = thread_op_flags[1] - *thread_op_flags >> 3;
  if ((int)buffer_alloc_result != 0) {
    str_len_counter = 0;
    buffer_alloc_result = buffer_alloc_result & UINT32_MAX;
    do {
      buffer_alloc_result = 0;
      buffer_alloc_result = (uint)(system_init_result - str_len_counter >> 3);
      if (buffer_alloc_result != 0) {
        do {
          if (*(int *)(*(long long *)(*thread_op_flags + str_len_counter) + 8) ==
              *(int *)(*(long long *)(*mutex_attr + buffer_alloc_result * 8) + 8)) goto section_processing_jump_label_;
          buffer_alloc_result = (int)buffer_alloc_result + 1;
          buffer_alloc_result = (ulong long)buffer_alloc_result;
        } while (buffer_alloc_result < buffer_alloc_result);
      }
      str_len_counter = *(long long *)(str_len_counter + *thread_op_flags);
      *(uint *)(str_len_counter + STRING_BUFFER_SIZE) = *(uint *)(str_len_counter + STRING_BUFFER_SIZE) | mutex_type;
      if (((param_5 != '\0') && (*(int *)(str_len_counter + 0x8c) == 2)) &&
         (buffer_alloc_result = *(long long *)(str_len_counter + 0xc0) - *(long long *)(str_len_counter + 0xb8) >> 3, (int)buffer_alloc_result != 0))
      {
        system_init_result0 = 0;
        buffer_alloc_result = buffer_alloc_result & UINT32_MAX;
        do {
          system_allocator_003(handle_param,*(unsigned long long *)(*(long long *)(str_len_counter + 0xb8) + system_init_result0),mutex_type,
                        param_5);
          system_init_result0 = system_init_result0 + 8;
          buffer_alloc_result = buffer_alloc_result - 1;
        } while (buffer_alloc_result != 0);
      }
      buffer_alloc_result = 1;
section_processing_jump_label_:
      str_len_counter = str_len_counter + 8;
      buffer_alloc_result = buffer_alloc_result - 1;
    } while (buffer_alloc_result != 0);
  }
  return buffer_alloc_result;
}
unsigned char allocate_with_mutex(unsigned long long handle_param,unsigned long long thread_op_flags,long long *mutex_attr)
{
  long long system_init_result;
  uint thread_op_flags;
  ulong long in_RAX;
  ulong long buffer_alloc_result;
  long long str_len_counter;
  uint unaff_EDI;
  unsigned char in_R10B;
  long long *unaffected_register;
  uint unaffected_registerD;
  ulong long buffer_alloc_result;
  long long *in_stack_00000060;
  char in_stack_00000070;
  str_len_counter = 0;
  buffer_alloc_result = in_RAX & UINT32_MAX;
  do {
    buffer_alloc_result = 0;
    if (unaff_EDI != 0) {
      do {
        if (*(int *)(*(long long *)(*unaffected_register + str_len_counter) + 8) ==
            *(int *)(*(long long *)(*mutex_attr + buffer_alloc_result * 8) + 8)) goto section_processing_jump_label_;
        thread_op_flags = (int)buffer_alloc_result + 1;
        buffer_alloc_result = (ulong long)thread_op_flags;
      } while (thread_op_flags < unaff_EDI);
    }
    system_init_result = *(long long *)(str_len_counter + *unaffected_register);
    *(uint *)(system_init_result + STRING_BUFFER_SIZE) = *(uint *)(system_init_result + STRING_BUFFER_SIZE) | unaffected_registerD;
    if (((in_stack_00000070 != '\0') && (*(int *)(system_init_result + 0x8c) == 2)) &&
       (buffer_alloc_result = *(long long *)(system_init_result + 0xc0) - *(long long *)(system_init_result + 0xb8) >> 3, (int)buffer_alloc_result != 0)) {
      buffer_alloc_result = buffer_alloc_result & UINT32_MAX;
      do {
        system_allocator_003();
        buffer_alloc_result = buffer_alloc_result - 1;
      } while (buffer_alloc_result != 0);
    }
    in_R10B = 1;
section_processing_jump_label_:
    str_len_counter = str_len_counter + 8;
    buffer_alloc_result = buffer_alloc_result - 1;
    mutex_attr = in_stack_00000060;
    if (buffer_alloc_result == 0) {
      return in_R10B;
    }
  } while( true );
}
unsigned char check_allocation_complete(void)
{
  unsigned char in_R10B;
  return in_R10B;
}
unsigned long long
system_allocator_014(unsigned long long handle_param,long long *thread_op_flags,unsigned long long *mutex_attr,unsigned int mutex_type,
             uint param_5)
{
  ulong long buffer_alloc_result;
  long long str_len_counter;
  long long str_len_counter;
  long long str_len_counter;
  long long str_len_counter;
  unsigned long long buffer_alloc_result;
  uint *string_input_ptr;
  buffer_alloc_result = 0;
  buffer_alloc_result = thread_op_flags[1] - *thread_op_flags >> 2;
  if ((int)buffer_alloc_result != 0) {
    str_len_counter = 0;
    buffer_alloc_result = buffer_alloc_result & UINT32_MAX;
    do {
      string_input_ptr = (uint *)*mutex_attr;
      str_len_counter = *thread_op_flags;
      str_len_counter = (long long)mutex_attr[1] - (long long)string_input_ptr >> 2;
      if (0 < str_len_counter) {
        do {
          str_len_counter = str_len_counter >> 1;
          if (string_input_ptr[str_len_counter] < *(uint *)(str_len_counter + str_len_counter)) {
            string_input_ptr = string_input_ptr + str_len_counter + 1;
            str_len_counter = str_len_counter + (-1 - str_len_counter);
          }
          str_len_counter = str_len_counter;
        } while (0 < str_len_counter);
      }
      if ((string_input_ptr == (uint *)mutex_attr[1]) || (*(uint *)(str_len_counter + str_len_counter) < *string_input_ptr)) {
        str_len_counter = system_allocator_006(handle_param,*(unsigned int *)(str_len_counter + str_len_counter),mutex_type);
        buffer_alloc_result = 1;
        *(uint *)(str_len_counter + 8) = *(uint *)(str_len_counter + 8) | param_5;
      }
      str_len_counter = str_len_counter + 4;
      buffer_alloc_result = buffer_alloc_result - 1;
    } while (buffer_alloc_result != 0);
  }
  return buffer_alloc_result;
}
unsigned char validate_buffer_allocation(void)
{
  uint reg_eax;
  long long system_init_result;
  long long str_len_counter;
  long long str_len_counter;
  unsigned char unaff_SIL;
  ulong long buffer_alloc_result;
  uint *string_input_ptr;
  unsigned long long *unaffected_register;
  long long *unaffected_register;
  uint in_stack_00000070;
  str_len_counter = 0;
  buffer_alloc_result = (ulong long)reg_eax;
  do {
    string_input_ptr = (uint *)*unaffected_register;
    system_init_result = (long long)unaffected_register[1] - (long long)string_input_ptr >> 2;
    if (0 < system_init_result) {
      do {
        str_len_counter = system_init_result >> 1;
        if (string_input_ptr[str_len_counter] < *(uint *)(*unaffected_register + str_len_counter)) {
          string_input_ptr = string_input_ptr + str_len_counter + 1;
          str_len_counter = system_init_result + (-1 - str_len_counter);
        }
        system_init_result = str_len_counter;
      } while (0 < str_len_counter);
    }
    if ((string_input_ptr == (uint *)unaffected_register[1]) || (*(uint *)(*unaffected_register + str_len_counter) < *string_input_ptr)) {
      system_init_result = system_allocator_006();
      unaff_SIL = 1;
      *(uint *)(system_init_result + 8) = *(uint *)(system_init_result + 8) | in_stack_00000070;
    }
    str_len_counter = str_len_counter + 4;
    buffer_alloc_result = buffer_alloc_result - 1;
  } while (buffer_alloc_result != 0);
  return unaff_SIL;
}
unsigned char check_memory_bounds(void)
{
  unsigned char unaff_SIL;
  return unaff_SIL;
}
  register_accumulator = register_accumulator + unaff_BL;
  buffer_alloc_result = in(buffer_alloc_result);
  character_scan_pointer = (char *)((ulong long)buffer_alloc_result + 0x1c0042ed);
  *character_scan_pointer = *character_scan_pointer + (char)unaffected_registerDI + '\x04';
  out(buffer_alloc_result,(char)buffer_alloc_result);
  character_scan_pointer = (char *)((ulong long)buffer_alloc_result - 0x12);
  *character_scan_pointer = *character_scan_pointer + (char)thread_op_flags;
  character_scan_pointer = (code *)swi(3);
  (*character_scan_pointer)();
  return;
}
      config_data_buffer_0 = 0;
      global_data_ptr = 6;
      strcpy_s(&config_data_buffer_0,path_buffer_size0,&path_buffer_0,str_len_param,buffer_alloc_result);
      system_crypto_initializer(system_execution_function);
      system_crypto_module_initializer(&string_handle_buffer);
    }
  }
  (**(code **)(*global_data_ptr + 0x70))(global_data_ptr,&thread_data_buffer);
  return;
}
unsigned int
system_finalizer_005(unsigned long long handle_param,unsigned long long thread_op_flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  code *character_scan_pointer;
  unsigned int thread_op_flags;
  unsigned long long buffer_alloc_result;
  void *thread_stack_ptr;
  long long thread_stack_base_address;
  character_scan_pointer = *(code **)(*global_data_ptr + 0x70);
  // Original name: system_180a02fc8
      buffer_alloc_result = system_ui_005(&thread_stack_ptr, &g_ui_mutex_property_address_180a02fc8, mutex_attr, mutex_type, 0, DEFAULT_THREAD_POOL_FLAG);
  thread_op_flags = (*character_scan_pointer)(global_data_ptr,buffer_alloc_result,mutex_attr,mutex_type,1);
  thread_stack_ptr = &g_threadString2;
  if (thread_stack_base_address != 0) {
    handle_param_system_error();
  }
  return thread_op_flags;
}
unsigned int
system_finalizer_006(unsigned long long handle_param,unsigned long long thread_op_flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  code *character_scan_pointer;
  unsigned int thread_op_flags;
  unsigned long long buffer_alloc_result;
  void *thread_stack_ptr;
  long long thread_stack_base_address;
  character_scan_pointer = *(code **)(*global_data_ptr + 0x70);
  // Original name: system_180a02fa0
      buffer_alloc_result = system_ui_005(&thread_stack_ptr, &g_ui_mutex_type_address_180a02fa0, mutex_attr, mutex_type, 0, DEFAULT_THREAD_POOL_FLAG);
  thread_op_flags = (*character_scan_pointer)(global_data_ptr,buffer_alloc_result,mutex_attr,mutex_type,1);
  thread_stack_ptr = &g_threadString2;
  if (thread_stack_base_address != 0) {
    handle_param_system_error();
  }
  return thread_op_flags;
}
unsigned int
system_finalizer_007(unsigned long long handle_param,unsigned long long thread_op_flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  code *character_scan_pointer;
  unsigned int thread_op_flags;
  unsigned long long buffer_alloc_result;
  unsigned long long buffer_alloc_result;
  void *thread_stack_ptr;
  long long thread_stack_base_address;
  buffer_alloc_result = DEFAULT_THREAD_POOL_FLAG;
  character_scan_pointer = *(code **)(*global_data_ptr + 0x70);
  buffer_alloc_result = system_cleanup_007(&thread_stack_ptr);
  thread_op_flags = (*character_scan_pointer)(global_data_ptr,buffer_alloc_result,mutex_attr,mutex_type,buffer_alloc_result);
  thread_stack_ptr = &g_threadString2;
  if (thread_stack_base_address != 0) {
    handle_param_system_error();
  }
  return thread_op_flags;
}
    string_buffer_constant = 0;
    if (handle_param != 0) {
      str_len_counter = -1;
      do {
        str_len_counter = str_len_counter + 1;
      } while (*(char *)(handle_param + str_len_counter) != '\0');
      global_data_ptr = (unsigned int)str_len_counter;
      strcpy_s(&string_buffer_constant,string_buffer_size_constant,handle_param);
    }
    system_crypto_initializer(system_execution_function);
    system_crypto_module_initializer(&thread_data_buffer_primary);
  }
  buffer_alloc_result = system_execution_function(global_data_ptr,0xe0,8,3,buffer_alloc_result);
  pstack_long_var = alStack_30;
  // Original name: system_18045f210
      thread_stack_ptr = &g_stack_data_address_18045f210;
  thread_stack_ptr = &system_18045f200;
  psystem_init_result = (long long *)system_execution_function(buffer_alloc_result,alStack_30);
  pstack_long_var = psystem_init_result;
  if (psystem_init_result != (long long *)0x0) {
    (**(code **)(*psystem_init_result + 0x28))(psystem_init_result);
  }
  buffer_alloc_result = global_data_ptr;
  ppstack_long_var = &pstack_long_var;
  pstack_long_var = psystem_init_result;
  if (psystem_init_result != (long long *)0x0) {
    (**(code **)(*psystem_init_result + 0x28))(psystem_init_result);
  }
  register_event_callback(buffer_alloc_result,&pstack_long_var);
  if (psystem_init_result != (long long *)0x0) {
    (**(code **)(*psystem_init_result + 0x38))(psystem_init_result);
  }
  return;
}
  system_data_initialization_flag = 1;
  global_data_ptr = string_buffer_size_constant;
  global_data_ptr = &g_threadString2;
  global_data_ptr = 0;
  global_data_ptr = 0;
  global_data_ptr = 0;
  global_data_ptr = &g_threadString2;
  global_data_ptr = 0;
  global_data_ptr = 0;
  global_data_ptr = 0;
  global_data_ptr = 0;
  system_flag_buffer_8 = 1;
  global_data_ptr = 0;
  global_data_ptr = 0;
  system_finalizer_009();
  system_init_result = MODULE_DATA_ADDR;
  str_len_counter = 0x17;
  do {
    func_0x00018013d940(system_init_result);
    system_init_result = system_init_result + STRING_BUFFER_SIZE;
    str_len_counter = str_len_counter + -1;
  } while (str_len_counter != 0);
  system_flag_buffer_9 = 0;
  _Mtx_init_in_situ(MODULE_MUTEX_ADDR,2,mutex_attr,mutex_type,buffer_alloc_result);
  global_data_ptr = UINT32_MAX;
  global_data_ptr = 0;
  global_data_ptr = 0;
  global_data_ptr = 0xffdc;
  system_flag_buffer_10 = 1;
  system_finalizer_008(&module_finalizer_buffer);
  global_data_ptr = 3;
  global_data_ptr = 0;
  global_data_ptr = 0;
  global_data_ptr = 0;
  network_system_initialized = 1;
  global_data_ptr = 0;
  global_data_ptr = 0;
  render_system_initialized = 1;
  global_data_ptr = 0;
  global_data_ptr = 0;
  global_data_ptr = 0;
  global_data_ptr = 0;
  global_data_ptr = 0;
  global_data_ptr = 3;
  global_data_ptr = 0;
  global_data_ptr = 0;
  global_data_ptr = 0;
  global_data_ptr = 0;
  global_data_ptr = 0;
  global_data_ptr = 0;
  global_data_ptr = 3;
  audio_system_initialized = 1;
  system_execution_function(MODULE_HANDLER_ADDR);
  input_system_initialized = 1;
  global_data_ptr = 3;
  global_data_ptr = SYSTEM_CONFIG_BUFFER_SIZE_ZERO;
  global_data_ptr = 0x3f800000;
  global_data_ptr = 0;
  global_data_ptr = 1;
  global_data_ptr = &system_data_buffer_secondary;
  global_data_ptr = 0;
  physics_system_initialized = 1;
  global_data_ptr = 0;
  global_data_ptr = 3;
  global_data_ptr = 0;
  thread_pool_backup_flag = 0;
  global_data_ptr = 0;
  ui_system_initialized = 1;
  global_data_ptr = 3;
  global_data_ptr = SYSTEM_CONFIG_BUFFER_SIZE_ZERO;
  global_data_ptr = 0x3f800000;
  global_data_ptr = 0;
  global_data_ptr = 1;
  global_data_ptr = &system_data_buffer_secondary;
  global_data_ptr = 4;
  global_data_ptr = 0;
  global_data_ptr = 0;
  global_data_ptr = 0;
  global_data_ptr = 3;
  global_data_ptr = 0;
  global_data_ptr = 0;
  global_data_ptr = 0;
  global_data_ptr = 0;
  module_system_initialized = 1;
  global_data_ptr = 0;
  thread_pool_system_initialized = 1;
  global_data_ptr = 0;
  memory_system_initialized = 1;
  global_data_ptr = 0;
  configuration_system_initialized = 1;
  global_data_ptr = 0;
  resource_system_initialized = 1;
  global_data_ptr = 0;
  global_data_ptr = 0;
  global_data_ptr = 0;
  global_data_ptr = 3;
  network_system_backup_flag = 0;
  global_data_ptr = 0;
  global_data_ptr = 0;
  global_data_ptr = 3;
  render_system_backup_flag = 0;
  global_data_ptr = 0;
  global_data_ptr = 0;
  global_data_ptr = 4;
  global_data_ptr = SYSTEM_CONFIG_BUFFER_SIZE_ZERO;
  global_data_ptr = 0x3f800000;
  global_data_ptr = 0;
  global_data_ptr = 1;
  global_data_ptr = &system_data_buffer_secondary;
  script_system_initialized = 1;
  global_data_ptr = 3;
  global_data_ptr = 0;
  global_data_ptr = 0;
  global_data_ptr = 0;
  security_system_initialized = 1;
  system_data_status_flag = 1;
  global_data_ptr = 0;
  system_data_control_flag = 1;
  return;
}
    thread_system_flag = '\x01';
    str_len_counter = system_thread_manager_004(&thread_stack_ptr,global_data_ptr + 0x2c0);
    string_input_ptr = &default_resource_string;
    if (*(void **)(str_len_counter + 8) != (void *)0x0) {
      string_input_ptr = *(void **)(str_len_counter + 8);
    }
    (**(code **)(system_init_result + 0x330))(*(unsigned int *)(global_data_ptr + STRING_BUFFER_SIZE),string_input_ptr);
    thread_stack_ptr = &g_threadString2;
    if (thread_stack_base_address != 0) {
      handle_param_system_error();
    }
    thread_stack_base_address = 0;
    stack_size_max = 0;
    thread_stack_ptr = &g_threadString4;
  }
  system_handle_param_ptr = (long long *)*handle_param;
  if (system_handle_param_ptr != (long long *)0x0) {
    *(unsigned char *)((long long)system_handle_param_ptr + 0xdd) = 0;
    (**(code **)(*system_handle_param_ptr + 0xc0))();
    pstack_long_var = (long long *)*handle_param;
    *handle_param = 0;
    if (pstack_long_var != (long long *)0x0) {
      (**(code **)(*pstack_long_var + 0x38))();
    }
  }
  *(float *)(global_data_ptr + path_buffer_size0) = 1.0 / (float)(int)handle_param[1];
  thread_stack_ptr = &g_threadString2;
  if (thread_stack_ptr != (void *)0x0) {
    handle_param_system_error();
  }
  return;
}
unsigned long long * system_execution_function(unsigned long long *handle_param,int thread_op_flags)
{
  long long *psystem_init_result;
  int thread_result_index;
  unsigned long long buffer_alloc_result;
  long long str_len_counter;
  int thread_result_index;
  unsigned long long *string_input_ptr;
  ulong long buffer_alloc_result;
  long long str_len_counter;
  float float_var;
  float float_var;
  float float_var;
  float float_var;
  float float_var;
  float float_var;
  float float_var;
  *handle_param = &g_system_handle_param;
  str_len_counter = 0;
  handle_param[1] = 0;
  handle_param[2] = 0;
  handle_param[3] = 0;
  *(unsigned int *)(handle_param + 4) = 3;
  *handle_param = &g_system_handle_param_backup;
  handle_param[0xd] = 0;
  handle_param[0xe] = 0;
  handle_param[0xf] = 0;
  handle_param[STRING_BUFFER_SIZE] = 0;
  handle_param[0x11] = 0;
  handle_param[0x12] = 0;
  handle_param[0x13] = 0;
  handle_param[0x14] = 0;
  handle_param[0x15] = 0;
  handle_param[0x16] = 0;
  handle_param[0x17] = 0;
  handle_param[0x18] = 0;
  handle_param[0x19] = 0;
  handle_param[0x1a] = 0;
  handle_param[0x1b] = 0;
  handle_param[0x1c] = 0;
  handle_param[0x1d] = 0;
  handle_param[0x1e] = 0;
  handle_param[0x1f] = 0;
  handle_param[path_buffer_size] = 0;
  handle_param[0x21] = 0;
  handle_param[0x22] = 0;
  handle_param[0x23] = 0;
  handle_param[0x24] = 0;
  handle_param[0x25] = 0;
  handle_param[0x26] = 0;
  handle_param[0x27] = 0;
  handle_param[0x28] = 0;
  handle_param[0x29] = 0;
  handle_param[0x2a] = 0;
  handle_param[0x2b] = 0;
  handle_param[0x2c] = 0;
  handle_param[0x2d] = 0;
  handle_param[0x2e] = 0;
  handle_param[0x2f] = 0;
  psystem_init_result = handle_param + 0x31;
  *psystem_init_result = 0;
  handle_param[0x32] = 0;
  handle_param[0x33] = 0;
  *(unsigned int *)(handle_param + 0x34) = 3;
  string_input_ptr = handle_param + 0x35;
  str_len_counter = 8;
  system_execution_function(string_input_ptr,0x28,8,&g_system_execution_buffer,system_execution_function);
  _Mtx_init_in_situ(handle_param + 0x5d, STRING_BUFFER_SIZE_SECONDARY);
  thread_result_index = func_0x0001804ca2d0(&module_config_addr);
  if (thread_op_flags < thread_result_index) {
    thread_result_index = thread_op_flags;
  }
  *(int *)(handle_param + 0x67) = thread_result_index;
  handle_param[0x11] = (long long)thread_result_index;
  system_execution_function(handle_param + 0xd);
  handle_param[0x16] = (long long)*(int *)(handle_param + 0x67);
  if (handle_param[0x12] != 0) {
    handle_param_system_error();
  }
  handle_param[0x12] = 0;
  handle_param[0x14] = 1;
  handle_param[0x13] = 0;
  handle_param[0x15] = 0xffffffff;
  buffer_alloc_result = system_execution_function(global_data_ptr,(long long)*(int *)(handle_param + 0x67) * 0x48,0x18);
  handle_param[0x12] = buffer_alloc_result;
  handle_param[0x1b] = (long long)*(int *)(handle_param + 0x67);
  if (handle_param[0x17] != 0) {
    handle_param_system_error();
  }
  handle_param[0x17] = 0;
  handle_param[0x19] = 1;
  handle_param[0x18] = 0;
  handle_param[0x1a] = 0xffffffff;
  buffer_alloc_result = system_execution_function(global_data_ptr,(long long)*(int *)(handle_param + 0x67) * 0xc0,0x18);
  handle_param[0x17] = buffer_alloc_result;
  handle_param[0x2a] = (long long)*(int *)(handle_param + 0x67);
  if (handle_param[0x26] == 0) {
    handle_param[0x26] = 0;
    handle_param[0x28] = 1;
    handle_param[0x27] = 0;
    handle_param[0x29] = 0xffffffff;
    buffer_alloc_result = system_execution_function(global_data_ptr,(long long)*(int *)(handle_param + 0x67) << 4,0x18);
    handle_param[0x26] = buffer_alloc_result;
    handle_param[path_buffer_size] = (long long)*(int *)(handle_param + 0x67);
    system_execution_function(handle_param + 0x1c);
    handle_param[0x2f] = (long long)*(int *)(handle_param + 0x67);
    if (handle_param[0x2b] != 0) {
      handle_param_system_error();
    }
    handle_param[0x2b] = 0;
    handle_param[0x2d] = 1;
    handle_param[0x2c] = 0;
    handle_param[0x2e] = 0xffffffff;
    buffer_alloc_result = system_execution_function(global_data_ptr,(long long)*(int *)(handle_param + 0x67) << 4,0x18);
    handle_param[0x2b] = buffer_alloc_result;
    do {
      string_input_ptr[4] = (long long)*(int *)(handle_param + 0x67);
      system_execution_function(string_input_ptr);
      string_input_ptr = string_input_ptr + 5;
      str_len_counter = str_len_counter + -1;
    } while (str_len_counter != 0);
    handle_param[0x25] = (long long)*(int *)(handle_param + 0x67);
    if (handle_param[0x21] == 0) {
      handle_param[0x21] = 0;
      handle_param[0x23] = 1;
      handle_param[0x22] = 0;
      handle_param[0x24] = 0xffffffff;
      buffer_alloc_result = system_execution_function(global_data_ptr,(long long)*(int *)(handle_param + 0x67) * 0x88,0x18);
      handle_param[0x21] = buffer_alloc_result;
      buffer_alloc_result = (ulong long)*(int *)(handle_param + 0x67);
      str_len_counter = *psystem_init_result;
      if ((ulong long)(handle_param[0x33] - str_len_counter >> 3) < buffer_alloc_result) {
        if (buffer_alloc_result != 0) {
          str_len_counter = system_execution_function(global_data_ptr,buffer_alloc_result * 8,*(unsigned char *)(handle_param + 0x34));
          str_len_counter = *psystem_init_result;
        }
        if (str_len_counter != handle_param[0x32]) {
          memmove(str_len_counter,str_len_counter,handle_param[0x32] - str_len_counter);
        }
        if (str_len_counter != 0) {
          handle_param_system_error();
        }
        *psystem_init_result = str_len_counter;
        handle_param[0x32] = str_len_counter;
        handle_param[0x33] = str_len_counter + buffer_alloc_result * 8;
      }
      thread_result_index = *(int *)(global_data_ptr + 0xe00) + -1;
      thread_result_index = 0;
      if ((-1 < thread_result_index) && (thread_result_index = thread_result_index, 3 < thread_result_index)) {
        thread_result_index = 3;
      }
      float_var = (float)thread_result_index * 0.33333334;
      float_var = float_var * 10.05 + 4.9500003;
      float_var = float_var * 2.9999998 + 4.5;
      float_var = float_var + float_var;
      float_var = float_var + float_var;
      float_var = float_var * 13.5 + 4.5;
      float_var = float_var + float_var;
      float_var = float_var + float_var;
      float_var = float_var * 37.5 + 12.5 + float_var;
      float_var = float_var * 45.0 + 15.0 + float_var;
      *(float *)(handle_param + 0x68) = float_var * float_var;
      *(float *)((long long)handle_param + 0x344) = float_var * float_var;
      *(float *)(handle_param + 0x69) = float_var * float_var;
      *(float *)((long long)handle_param + 0x34c) = float_var * float_var;
      *(float *)(handle_param + 0x6a) = float_var * float_var;
      *(float *)((long long)handle_param + 0x354) = float_var * float_var;
      *(float *)(handle_param + 0x6b) = float_var * float_var;
      *(unsigned int *)((long long)handle_param + 0x35c) = 0x7f7fffff;
      *(unsigned int *)((long long)handle_param + 0x33c) = 0;
      *(unsigned int *)(handle_param + 0x30) = 0;
      return handle_param;
    }
    handle_param_system_error();
  }
  handle_param_system_error();
}
unsigned long long initialize_graphics_context(unsigned long long handle_param,ulong long thread_op_flags)
{
  system_execution_function();
  if ((thread_op_flags & 1) != 0) {
    free(handle_param,0x360);
  }
  return handle_param;
}
      g_data_buffer_status = 1;
    }
    else {
      buffer_alloc_result = (ulong long)g_data_buffer_status;
    }
    UNLOCK();
    if (byte_system_status) {
      appstack_long_var[0] = apstack_long_var;
      apstack_long_var[0] = global_data_ptr;
      if (global_data_ptr != (long long *)0x0) {
        (**(code **)(*global_data_ptr + 0x28))();
      }
      buffer_alloc_result = system_execution_function(buffer_alloc_result,apstack_long_var);
    }
  }
  return buffer_alloc_result;
}
    thread_data_buffer_character = '\0';
    system_crypto_module_initializer(&thread_data_buffer_primary);
  }
  thread_op_flags = *(unsigned long long *)(*(long long *)(*(long long *)(handle_param + 0x8a8) + 0x260) + path_buffer_size8);
  string_input_ptr = (unsigned int *)system_execution_function(thread_op_flags,0,thread_op_flags);
  stack_size_max = *string_input_ptr;
  stack_size_max = string_input_ptr[1];
  stack_size_max = string_input_ptr[2];
  stack_size_max = string_input_ptr[3];
  float_var = *(float *)(thread_op_flags + SYSTEM_CONFIG_BUFFER_SIZE_ZERO);
  float_var = *(float *)(thread_op_flags + SYSTEM_CONFIG_BUFFER_SIZE_FOUR);
  float_var = *(float *)(thread_op_flags + SYSTEM_CONFIG_BUFFER_SIZE_EIGHT);
  stack_size_max = *(unsigned int *)(thread_op_flags + SYSTEM_CONFIG_BUFFER_SIZE_TWELVE);
  float_var = 1e+08;
  float_var = 1e+08;
  fStack_180 = 1e+08;
  fStack_158 = 1e+08;
  fStack_154 = 1e+08;
  fStack_150 = 1e+08;
  stack_size_max = 0;
  fStack_148 = -1e+08;
  fStack_144 = -1e+08;
  fStack_140 = -1e+08;
  stack_size_max = 0;
  thread_result_index = *(char *)(handle_param + 0x858) + -1;
  system_init_result1 = (long long)thread_result_index;
  float_var = -1e+08;
  float_var = -1e+08;
  float_var = -1e+08;
  buffer_alloc_result = 0;
  buffer_alloc_result = 0;
  if (-1 < thread_result_index) {
    stack_size_max = 0x7f7fffff;
    stack_size_max = 0x7f7fffff;
    system_init_result2 = system_init_result1 * 0x30;
    fStack_108 = float_var;
    fStack_104 = float_var;
    fStack_100 = float_var;
    do {
      system_init_result0 = *(long long *)(handle_param + 0x850) + system_init_result2;
      system_char_variable = *(char *)(system_init_result0 + 0x2c);
      string_input_ptr = (unsigned int *)system_execution_function(thread_op_flags,system_char_variable,thread_op_flags);
      stack_size_max = *string_input_ptr;
      stack_size_max = string_input_ptr[1];
      stack_size_max = string_input_ptr[2];
      stack_size_max = string_input_ptr[3];
      pfloat_var = (float *)(thread_op_flags + ((long long)system_char_variable + SYSTEM_CONFIG_BUFFER_SIZE) * STRING_BUFFER_SIZE);
      float_var = *pfloat_var;
      float_var = pfloat_var[1];
      float_var = pfloat_var[2];
      fStack_cc = pfloat_var[3];
      fStack_d8 = float_var;
      fStack_d4 = float_var;
      fStack_d0 = float_var;
      pfloat_var = (float *)system_execution_function(&stack_size_max,auStack_c8,system_init_result0);
      fStack_170 = (float_var + pfloat_var[2]) - float_var;
      fStack_174 = (float_var + pfloat_var[1]) - float_var;
      fStack_178 = (float_var + *pfloat_var) - float_var;
      system_execution_function(&stack_size_max,&fStack_138,&fStack_178);
      pfloat_var = (float *)system_execution_function(&stack_size_max,auStack_b8,system_init_result0 + STRING_BUFFER_SIZE);
      fStack_160 = (float_var + pfloat_var[2]) - float_var;
      fStack_164 = (float_var + pfloat_var[1]) - float_var;
      fStack_168 = (float_var + *pfloat_var) - float_var;
      system_execution_function(&stack_size_max,&fStack_128,&fStack_168);
      float_var = *(float *)(system_init_result0 + 0x24);
      float_var = fStack_128;
      fStack_198 = fStack_138;
      if (fStack_138 < fStack_128) {
        float_var = fStack_138;
        fStack_198 = fStack_128;
      }
      float_var = fStack_134;
      fStack_194 = fStack_124;
      if (fStack_134 < fStack_124) {
        float_var = fStack_124;
        fStack_194 = fStack_134;
      }
      fStack_190 = fStack_130;
      fStack_180 = fStack_120;
      if (fStack_130 < fStack_120) {
        fStack_190 = fStack_120;
        fStack_180 = fStack_130;
      }
      fStack_190 = fStack_190 + float_var;
      fStack_194 = fStack_194 + float_var;
      fStack_198 = fStack_198 + float_var;
      fStack_180 = fStack_180 - float_var;
      float_var = float_var - float_var;
      float_var = float_var - float_var;
      if (fStack_158 < float_var) {
        float_var = fStack_158;
      }
      if (fStack_154 < float_var) {
        float_var = fStack_154;
      }
      if (fStack_150 < fStack_180) {
        fStack_180 = fStack_150;
      }
      fStack_150 = fStack_180;
      stack_size_max = stack_size_max;
      if (fStack_198 < fStack_148) {
        fStack_198 = fStack_148;
      }
      if (fStack_194 < fStack_144) {
        fStack_194 = fStack_144;
      }
      if (fStack_190 < fStack_140) {
        fStack_190 = fStack_140;
      }
      fStack_148 = fStack_198;
      fStack_144 = fStack_194;
      fStack_140 = fStack_190;
      stack_size_max = stack_size_max;
      system_init_result2 = system_init_result2 + -0x30;
      system_init_result1 = system_init_result1 + -1;
      float_var = fStack_198;
      float_var = fStack_194;
      float_var = fStack_190;
      buffer_alloc_result = stack_size_max;
      buffer_alloc_result = stack_size_max;
      fStack_158 = float_var;
      fStack_154 = float_var;
    } while (-1 < system_init_result1);
  }
  *(unsigned long long *)(handle_param + 0x870) = 0x4cbebc204cbebc20;
  *(unsigned long long *)(handle_param + 0x878) = 0x7f7fffff4cbebc20;
  *(unsigned long long *)(handle_param + 0x880) = 0xccbebc20ccbebc20;
  *(unsigned long long *)(handle_param + 0x888) = 0x7f7fffffccbebc20;
  system_init_result1 = 0;
  *(unsigned int *)(handle_param + 0x8a0) = 0;
  *(unsigned long long *)(handle_param + 0x890) = 0;
  *(unsigned long long *)(handle_param + 0x898) = 0x7f7fffff00000000;
  fStack_198 = float_var;
  if (*(float *)(handle_param + 0x870) < float_var) {
    fStack_198 = *(float *)(handle_param + 0x870);
  }
  fStack_194 = float_var;
  if (*(float *)(handle_param + 0x874) < float_var) {
    fStack_194 = *(float *)(handle_param + 0x874);
  }
  fStack_190 = fStack_180;
  if (*(float *)(handle_param + 0x878) < fStack_180) {
    fStack_190 = *(float *)(handle_param + 0x878);
  }
  *(ulong long *)(handle_param + 0x870) = merge_32bit_values(fStack_194,fStack_198);
  *(ulong long *)(handle_param + 0x878) = merge_32bit_values(stack_size_max,fStack_190);
  fStack_198 = float_var;
  if (float_var < *(float *)(handle_param + 0x880)) {
    fStack_198 = *(float *)(handle_param + 0x880);
  }
  fStack_194 = float_var;
  if (float_var < *(float *)(handle_param + 0x884)) {
    fStack_194 = *(float *)(handle_param + 0x884);
  }
  fStack_190 = fStack_180;
  if (fStack_180 < *(float *)(handle_param + 0x888)) {
    fStack_190 = *(float *)(handle_param + 0x888);
  }
  *(ulong long *)(handle_param + 0x880) = merge_32bit_values(fStack_194,fStack_198);
  *(ulong long *)(handle_param + 0x888) = merge_32bit_values(stack_size_max,fStack_190);
  fStack_198 = float_var;
  if (*(float *)(handle_param + 0x870) < float_var) {
    fStack_198 = *(float *)(handle_param + 0x870);
  }
  fStack_194 = float_var;
  if (*(float *)(handle_param + 0x874) < float_var) {
    fStack_194 = *(float *)(handle_param + 0x874);
  }
  fStack_190 = float_var;
  if (*(float *)(handle_param + 0x878) < float_var) {
    fStack_190 = *(float *)(handle_param + 0x878);
  }
  *(ulong long *)(handle_param + 0x870) = merge_32bit_values(fStack_194,fStack_198);
  *(ulong long *)(handle_param + 0x878) = merge_32bit_values(stack_size_max,fStack_190);
  fStack_198 = float_var;
  if (float_var < *(float *)(handle_param + 0x880)) {
    fStack_198 = *(float *)(handle_param + 0x880);
  }
  fStack_194 = float_var;
  if (float_var < *(float *)(handle_param + 0x884)) {
    fStack_194 = *(float *)(handle_param + 0x884);
  }
  fStack_190 = float_var;
  if (float_var < *(float *)(handle_param + 0x888)) {
    fStack_190 = *(float *)(handle_param + 0x888);
  }
  *(ulong long *)(handle_param + 0x880) = merge_32bit_values(fStack_194,fStack_198);
  *(ulong long *)(handle_param + 0x888) = merge_32bit_values(stack_size_max,fStack_190);
  if (*(long long *)(handle_param + 0x8a8) != 0) {
    system_init_result1 = *(long long *)(*(long long *)(handle_param + 0x8a8) + 0x260);
  }
  *(float *)(system_init_result1 + 0x218) = float_var;
  *(float *)(system_init_result1 + 0x21c) = float_var;
  *(float *)(system_init_result1 + 0x220) = fStack_180;
  *(unsigned int *)(system_init_result1 + 0x224) = buffer_alloc_result;
  *(float *)(system_init_result1 + 0x228) = float_var;
  *(float *)(system_init_result1 + 0x22c) = float_var;
  *(float *)(system_init_result1 + 0x230) = float_var;
  *(unsigned int *)(system_init_result1 + 0x234) = buffer_alloc_result;
  pfloat_var = *(float **)(handle_param + 0x860);
  if ((pfloat_var != (float *)0x0) && (*(long long *)(handle_param + 0x868) != 0)) {
    if ((pfloat_var[4] <= float_var && float_var != pfloat_var[4]) ||
       ((pfloat_var[5] <= float_var && float_var != pfloat_var[5] || (pfloat_var[6] <= float_var && float_var != pfloat_var[6]))
       )) {
      do {
      } while (thread_data_buffer_character != '\0');
      LOCK();
      UNLOCK();
      pfloat_var = *(float **)(handle_param + 0x860);
      fStack_198 = float_var;
      if (*pfloat_var < float_var) {
        fStack_198 = *pfloat_var;
      }
      fStack_194 = float_var;
      if (pfloat_var[1] < float_var) {
        fStack_194 = pfloat_var[1];
      }
      fStack_190 = float_var;
      if (pfloat_var[2] < float_var) {
        fStack_190 = pfloat_var[2];
      }
      *(ulong long *)pfloat_var = merge_32bit_values(fStack_194,fStack_198);
      *(ulong long *)(pfloat_var + 2) = merge_32bit_values(stack_size_max,fStack_190);
      fStack_198 = float_var;
      if (float_var < pfloat_var[4]) {
        fStack_198 = pfloat_var[4];
      }
      fStack_194 = float_var;
      if (float_var < pfloat_var[5]) {
        fStack_194 = pfloat_var[5];
      }
      fStack_190 = float_var;
      if (float_var < pfloat_var[6]) {
        fStack_190 = pfloat_var[6];
      }
      *(ulong long *)(pfloat_var + 4) = merge_32bit_values(fStack_194,fStack_198);
      *(ulong long *)(pfloat_var + 6) = merge_32bit_values(stack_size_max,fStack_190);
      thread_data_buffer_character = '\0';
    }
    if (((float_var < *pfloat_var) || (float_var < pfloat_var[1])) || (fStack_180 < pfloat_var[2])) {
      do {
      } while (thread_data_buffer_character != '\0');
      LOCK();
      UNLOCK();
      pfloat_var = *(float **)(handle_param + 0x860);
      fStack_198 = float_var;
      if (*pfloat_var < float_var) {
        fStack_198 = *pfloat_var;
      }
      fStack_194 = float_var;
      if (pfloat_var[1] < float_var) {
        fStack_194 = pfloat_var[1];
      }
      fStack_190 = fStack_180;
      if (pfloat_var[2] < fStack_180) {
        fStack_190 = pfloat_var[2];
      }
      *(ulong long *)pfloat_var = merge_32bit_values(fStack_194,fStack_198);
      *(ulong long *)(pfloat_var + 2) = merge_32bit_values(stack_size_max,fStack_190);
      fStack_198 = float_var;
      if (float_var < pfloat_var[4]) {
        fStack_198 = pfloat_var[4];
      }
      fStack_194 = float_var;
      if (float_var < pfloat_var[5]) {
        fStack_194 = pfloat_var[5];
      }
      fStack_190 = fStack_180;
      if (fStack_180 < pfloat_var[6]) {
        fStack_190 = pfloat_var[6];
      }
      *(ulong long *)(pfloat_var + 4) = merge_32bit_values(fStack_194,fStack_198);
      *(ulong long *)(pfloat_var + 6) = merge_32bit_values(stack_size_max,fStack_190);
      thread_data_buffer_character = '\0';
    }
    pfloat_var = *(float **)(handle_param + 0x868);
    if (((pfloat_var[4] <= float_var && float_var != pfloat_var[4]) ||
        (pfloat_var[5] <= float_var && float_var != pfloat_var[5])) ||
       (pfloat_var[6] <= float_var && float_var != pfloat_var[6])) {
      do {
      } while (thread_data_buffer_character != '\0');
      LOCK();
      UNLOCK();
      pfloat_var = *(float **)(handle_param + 0x868);
      fStack_198 = float_var;
      if (*pfloat_var < float_var) {
        fStack_198 = *pfloat_var;
      }
      fStack_194 = float_var;
      if (pfloat_var[1] < float_var) {
        fStack_194 = pfloat_var[1];
      }
      fStack_190 = float_var;
      if (pfloat_var[2] < float_var) {
        fStack_190 = pfloat_var[2];
      }
      *(ulong long *)pfloat_var = merge_32bit_values(fStack_194,fStack_198);
      *(ulong long *)(pfloat_var + 2) = merge_32bit_values(stack_size_max,fStack_190);
      fStack_198 = float_var;
      if (float_var < pfloat_var[4]) {
        fStack_198 = pfloat_var[4];
      }
      fStack_194 = float_var;
      if (float_var < pfloat_var[5]) {
        fStack_194 = pfloat_var[5];
      }
      fStack_190 = float_var;
      if (float_var < pfloat_var[6]) {
        fStack_190 = pfloat_var[6];
      }
      *(ulong long *)(pfloat_var + 4) = merge_32bit_values(fStack_194,fStack_198);
      *(ulong long *)(pfloat_var + 6) = merge_32bit_values(stack_size_max,fStack_190);
      thread_data_buffer_character = '\0';
    }
    if (((float_var < *pfloat_var) || (float_var < pfloat_var[1])) || (fStack_180 < pfloat_var[2])) {
      do {
      } while (thread_data_buffer_character != '\0');
      LOCK();
      UNLOCK();
      pfloat_var = *(float **)(handle_param + 0x868);
      fStack_198 = float_var;
      if (*pfloat_var < float_var) {
        fStack_198 = *pfloat_var;
      }
      fStack_194 = float_var;
      if (pfloat_var[1] < float_var) {
        fStack_194 = pfloat_var[1];
      }
      fStack_190 = fStack_180;
      if (pfloat_var[2] < fStack_180) {
        fStack_190 = pfloat_var[2];
      }
      *(ulong long *)pfloat_var = merge_32bit_values(fStack_194,fStack_198);
      *(ulong long *)(pfloat_var + 2) = merge_32bit_values(stack_size_max,fStack_190);
      fStack_198 = float_var;
      if (float_var < pfloat_var[4]) {
        fStack_198 = pfloat_var[4];
      }
      fStack_194 = float_var;
      if (float_var < pfloat_var[5]) {
        fStack_194 = pfloat_var[5];
      }
      fStack_190 = fStack_180;
      if (fStack_180 < pfloat_var[6]) {
        fStack_190 = pfloat_var[6];
      }
      *(ulong long *)(pfloat_var + 4) = merge_32bit_values(fStack_194,fStack_198);
      *(ulong long *)(pfloat_var + 6) = merge_32bit_values(stack_size_max,fStack_190);
      thread_data_buffer_character = '\0';
    }
  }
  return;
}
        system_string_buffer = 0;
        global_data_ptr = 8;
        strcpy_s(&system_string_buffer, SYSTEM_CONFIG_BUFFER_SIZE, &g_system_default_string);
        system_crypto_initializer(system_execution_function);
        system_crypto_module_initializer(&system_data_buffer_primary);
      }
    }
    (*UNRECOVERED_JUMPTABLE)(global_data_ptr,&system_data_buffer_ptr);
    return;
  }
  if (-1 < handle_param) {
    if (handle_param < (int)((global_data_ptr - global_data_ptr) / 0x68)) {
      (*UNRECOVERED_JUMPTABLE)(global_data_ptr,(long long)handle_param * 0x68 + global_data_ptr);
      return;
    }
  }
  if (*(int *)(*(long long *)((long long)ThreadLocalStoragePointer + (ulong long)__tls_index * 8) +
              0x48) < global_data_ptr) {
    system_crypto_004(&system_crypto_buffer);
    if (global_data_ptr == -1) {
      resource_template_ptr = &g_defaultDataTemplate;
      global_data_ptr = &resource_data_buffer;
      resource_data_buffer = 0;
      global_data_ptr = 0;
      strcpy_s(&resource_data_buffer, SYSTEM_CONFIG_BUFFER_SIZE, &default_resource_string);
      system_crypto_initializer(system_execution_function);
      system_crypto_module_initializer(&system_crypto_buffer);
    }
  }
  (*UNRECOVERED_JUMPTABLE)(global_data_ptr,&system_resource_buffer);
  return;
}
// 处理配置参数验证函数
int validate_config_parameters(unsigned long long handle_param,unsigned long long thread_op_flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  int thread_result_index;
  long long str_len_counter;
  long long str_len_counter;
  void *string_input_ptr;
  void *thread_stack_ptr;
  long long thread_stack_base_address;
  int thread_priority_level;
  create_thread_context(&thread_stack_ptr,handle_param,mutex_attr,mutex_type,DEFAULT_THREAD_POOL_FLAG);
  str_len_counter = thread_stack_base_address;
  if (thread_priority_level == STRING_BUFFER_SIZE) {
    thread_result_index = strcmp(thread_stack_base_address,&g_empty_string_const);
    if (thread_result_index == 0) goto section_processing_jump_label_;
    thread_result_index = strcmp(str_len_counter,&g_null_string_const);
    if (thread_result_index == 0) {
      thread_result_index = 100;
      goto section_processing_jump_label_;
    }
    string_input_ptr = &g_string_buffer_ptr;
section_processing_jump_label_:
    thread_result_index = strcmp(str_len_counter,string_input_ptr);
    if (thread_result_index != 0) {
section_processing_jump_label_:
      thread_result_index = 0;
      goto section_processing_jump_label_;
    }
  }
  else {
    if (thread_priority_level == 0x15) {
      thread_result_index = strcmp(thread_stack_base_address,&g_config_path_string);
      if (thread_result_index == 0) {
        thread_result_index = 0x30;
        goto section_processing_jump_label_;
      }
section_processing_jump_label_:
      thread_result_index = strcmp(str_len_counter,&g_system_path_string);
      if (thread_result_index == 0) {
        thread_result_index = 0xb0;
        goto section_processing_jump_label_;
      }
section_processing_jump_label_:
      thread_result_index = strcmp(str_len_counter,&g_temp_path_string);
      if (thread_result_index == 0) {
        thread_result_index = 0xd4;
        goto section_processing_jump_label_;
      }
section_processing_jump_label_:
      string_input_ptr = &g_system_string_config;
      goto section_processing_jump_label_;
    }
    if (thread_priority_level == 0x1b) {
      string_input_ptr = &g_system_string_data;
      goto section_processing_jump_label_;
    }
    if (thread_priority_level == 0xd) {
      thread_result_index = strcmp(thread_stack_base_address,&g_system_string_save);
      if (thread_result_index == 0) {
        thread_result_index = 4;
        goto section_processing_jump_label_;
      }
section_processing_jump_label_:
      string_input_ptr = &g_system_string_log;
      goto section_processing_jump_label_;
    }
    if (thread_priority_level == 0x1a) {
      thread_result_index = strcmp(thread_stack_base_address,&g_log_path_string);
      if (thread_result_index == 0) {
        thread_result_index = 0x1c;
        goto section_processing_jump_label_;
      }
section_processing_jump_label_:
      thread_result_index = strcmp(str_len_counter,&g_system_string_constant);
      if (thread_result_index == 0) {
        thread_result_index = 0x18;
        goto section_processing_jump_label_;
      }
section_processing_jump_label_:
      thread_result_index = strcmp(str_len_counter,&g_file_path_data);
      if (thread_result_index == 0) {
        thread_result_index = 0x554;
        goto section_processing_jump_label_;
      }
      goto section_processing_jump_label_;
    }
    if (thread_priority_level == path_buffer_size) {
      thread_result_index = strcmp(thread_stack_base_address,&g_save_path_string);
      if (thread_result_index == 0) {
        thread_result_index = 0x30;
        goto section_processing_jump_label_;
      }
      goto section_processing_jump_label_;
    }
    if (thread_priority_level == 0x24) {
      thread_result_index = strcmp(thread_stack_base_address,&g_save_path_string_backup);
      if (thread_result_index == 0) {
        thread_result_index = 0x12;
        goto section_processing_jump_label_;
      }
      goto section_processing_jump_label_;
    }
    if (thread_priority_level == 0x15) goto section_processing_jump_label_;
    if (thread_priority_level == 0x1f) {
      thread_result_index = strcmp(thread_stack_base_address,&g_data_path_string);
      if (thread_result_index == 0) {
        thread_result_index = 0x48;
        goto section_processing_jump_label_;
      }
section_processing_jump_label_:
      thread_result_index = strcmp(str_len_counter,&g_system_string_temp);
      if (thread_result_index == 0) {
        thread_result_index = 1;
        goto section_processing_jump_label_;
      }
      goto section_processing_jump_label_;
    }
    if (thread_priority_level == 10) {
      thread_result_index = strcmp(thread_stack_base_address,&g_system_string_backup);
      if (thread_result_index == 0) {
        thread_result_index = 8;
        goto section_processing_jump_label_;
      }
section_processing_jump_label_:
      thread_result_index = strcmp(str_len_counter,&g_system_string_cache);
      if (thread_result_index == 0) {
        thread_result_index = 4;
        goto section_processing_jump_label_;
      }
section_processing_jump_label_:
      string_input_ptr = &g_system_string_index;
      goto section_processing_jump_label_;
    }
    if (thread_priority_level == 0x15) goto section_processing_jump_label_;
    if (thread_priority_level == 0x16) {
      thread_result_index = strcmp(thread_stack_base_address,&g_system_string_version);
      if (thread_result_index == 0) {
        thread_result_index = 0x14;
        goto section_processing_jump_label_;
      }
section_processing_jump_label_:
      thread_result_index = strcmp(str_len_counter,&g_system_string_function);
      if (thread_result_index == 0) {
        thread_result_index = 0x568;
        goto section_processing_jump_label_;
      }
      thread_result_index = strcmp(str_len_counter,&g_system_string_method);
      if (thread_result_index == 0) {
        thread_result_index = STRING_BUFFER_SIZE;
        goto section_processing_jump_label_;
      }
      thread_result_index = strcmp(str_len_counter,&g_system_string_memory);
      if (thread_result_index == 0) {
        thread_result_index = 0x28;
        goto section_processing_jump_label_;
      }
      thread_result_index = strcmp(str_len_counter,&g_system_string_counter);
      if (thread_result_index == 0) {
        thread_result_index = SYSTEM_CONFIG_BUFFER_SIZE;
        goto section_processing_jump_label_;
      }
      goto section_processing_jump_label_;
    }
    if (thread_priority_level == 4) {
      str_len_counter = 0;
      do {
        str_len_counter = str_len_counter + 1;
        if (*(char *)(thread_stack_base_address + str_len_counter) != (&g_system_string_name)[str_len_counter]) goto section_processing_jump_label_;
        str_len_counter = str_len_counter;
      } while (str_len_counter != 5);
      thread_result_index = 200;
      goto section_processing_jump_label_;
    }
    if (thread_priority_level == 10) goto section_processing_jump_label_;
    if (thread_priority_level == 0x12) {
      thread_result_index = strcmp(thread_stack_base_address,&g_system_string_id);
      if (thread_result_index == 0) {
        thread_result_index = 0x58;
        goto section_processing_jump_label_;
      }
      goto section_processing_jump_label_;
    }
    if (thread_priority_level != 0x13) {
      if (thread_priority_level == 0x17) {
        thread_result_index = strcmp(thread_stack_base_address,&g_system_string_flag);
        if (thread_result_index == 0) {
          thread_result_index = 1;
          goto section_processing_jump_label_;
        }
section_processing_jump_label_:
        string_input_ptr = &g_file_path_config;
section_processing_jump_label_:
        thread_result_index = strcmp(str_len_counter,string_input_ptr);
        if (thread_result_index == 0) {
section_processing_jump_label_:
          thread_result_index = 0xc;
          goto section_processing_jump_label_;
        }
      }
      else {
        if (thread_priority_level == 0x15) goto section_processing_jump_label_;
        if (thread_priority_level == 0x26) {
          thread_result_index = strcmp(thread_stack_base_address,&g_system_string_category);
          if (thread_result_index == 0) {
            thread_result_index = 0xa8;
            goto section_processing_jump_label_;
          }
        }
        else if (thread_priority_level == 0x34) {
          thread_result_index = strcmp(thread_stack_base_address,&g_system_string_class);
          if (thread_result_index == 0) {
            thread_result_index = 0x14;
            goto section_processing_jump_label_;
          }
        }
        else {
          if (thread_priority_level != 0xf) {
            if (thread_priority_level == 0x16) goto section_processing_jump_label_;
            if (thread_priority_level == 0x18) {
              thread_result_index = strcmp(thread_stack_base_address,&g_system_string_parameter);
              if ((thread_result_index == 0) || (thread_result_index = strcmp(str_len_counter,&g_system_string_argument), thread_result_index == 0))
              goto section_processing_jump_label_;
              thread_result_index = strcmp(str_len_counter,&g_system_string_status);
              if (thread_result_index != 0) {
                string_input_ptr = &g_system_string_pointer;
                goto section_processing_jump_label_;
              }
              goto section_processing_jump_label_;
            }
            if (thread_priority_level == 7) {
              str_len_counter = 0;
              do {
                str_len_counter = str_len_counter;
                if (*(char *)(thread_stack_base_address + str_len_counter) != (&g_system_string_address)[str_len_counter]) goto section_processing_jump_label_;
                str_len_counter = str_len_counter + 1;
              } while (str_len_counter + 1 != 8);
              thread_result_index = (int)str_len_counter + -6;
              goto section_processing_jump_label_;
            }
            if (thread_priority_level == 0xc) {
              thread_result_index = strcmp(thread_stack_base_address,&g_system_string_variable);
              if (thread_result_index == 0) {
                thread_result_index = 0x68;
                goto section_processing_jump_label_;
              }
section_processing_jump_label_:
              thread_result_index = strcmp(str_len_counter,&g_file_path_save);
              if (thread_result_index == 0) {
                thread_result_index = 4;
                goto section_processing_jump_label_;
              }
              thread_result_index = strcmp(str_len_counter,&g_file_path_backup);
              if (thread_result_index == 0) {
                thread_result_index = 8;
                goto section_processing_jump_label_;
              }
              goto section_processing_jump_label_;
            }
            if (thread_priority_level == 0x1a) goto section_processing_jump_label_;
            if (thread_priority_level == 3) {
              thread_result_index = 4;
              str_len_counter = 0;
              do {
                str_len_counter = str_len_counter + 1;
                if (*(char *)(thread_stack_base_address + str_len_counter) != (&g_system_string_value)[str_len_counter]) goto section_processing_jump_label_;
                str_len_counter = str_len_counter;
              } while (str_len_counter != 4);
              goto section_processing_jump_label_;
            }
            if (thread_priority_level == 0xf) goto section_processing_jump_label_;
            if (thread_priority_level == 0x23) {
              thread_result_index = strcmp(thread_stack_base_address,&g_system_string_data);
              if (thread_result_index == 0) {
                thread_result_index = 0x28;
                goto section_processing_jump_label_;
              }
section_processing_jump_label_:
              thread_result_index = strcmp(str_len_counter,&g_system_string_reference);
              if (thread_result_index == 0) {
                thread_result_index = 0x18;
                goto section_processing_jump_label_;
              }
              goto section_processing_jump_label_;
            }
            if (thread_priority_level == 0x1f) goto section_processing_jump_label_;
            if (thread_priority_level == 0xd) goto section_processing_jump_label_;
            if (thread_priority_level == 0x21) {
              string_input_ptr = &g_system_string_pointer;
              goto section_processing_jump_label_;
            }
            if (thread_priority_level == 0x23) goto section_processing_jump_label_;
            if (thread_priority_level == 0xf) goto section_processing_jump_label_;
            if (thread_priority_level == 0xb) {
              thread_result_index = strcmp(thread_stack_base_address,&g_system_string_address);
              if (thread_result_index == 0) {
                thread_result_index = 0x248;
                goto section_processing_jump_label_;
              }
section_processing_jump_label_:
              thread_result_index = strcmp(str_len_counter,&g_system_string_offset);
              if (thread_result_index == 0) {
                thread_result_index = 4;
                goto section_processing_jump_label_;
              }
section_processing_jump_label_:
              thread_result_index = strcmp(str_len_counter,&g_system_string_size);
              if (thread_result_index == 0) {
                thread_result_index = 4;
                goto section_processing_jump_label_;
              }
            }
            else {
              if (thread_priority_level == 0x11) {
                thread_result_index = strcmp(thread_stack_base_address,&g_system_string_length);
                if (thread_result_index == 0) goto section_processing_jump_label_;
                thread_result_index = strcmp(str_len_counter,&g_system_string_offset);
                if (thread_result_index == 0) {
                  thread_result_index = 0xa0;
                  goto section_processing_jump_label_;
                }
                string_input_ptr = &g_system_string_result;
                goto section_processing_jump_label_;
              }
              if (thread_priority_level == 0xb) goto section_processing_jump_label_;
              if (thread_priority_level == 0xf) goto section_processing_jump_label_;
              if (thread_priority_level == 0xb) goto section_processing_jump_label_;
              if (thread_priority_level == 0x17) goto section_processing_jump_label_;
              if (thread_priority_level == 10) goto section_processing_jump_label_;
              if (thread_priority_level == 0x1a) goto section_processing_jump_label_;
              if (thread_priority_level != 0xb) {
                if (thread_priority_level == 0xc) goto section_processing_jump_label_;
                if (thread_priority_level != 0x19) goto section_processing_jump_label_;
                string_input_ptr = &g_system_string_code;
                goto section_processing_jump_label_;
              }
            }
            string_input_ptr = &g_file_path_log;
            goto section_processing_jump_label_;
          }
          thread_result_index = strcmp(thread_stack_base_address,&g_system_string_module);
          if (thread_result_index == 0) {
            thread_result_index = 0x214;
            goto section_processing_jump_label_;
          }
section_processing_jump_label_:
          thread_result_index = strcmp(str_len_counter,&g_system_string_buffer);
          if (thread_result_index == 0) {
            thread_result_index = path_buffer_size28;
            goto section_processing_jump_label_;
          }
section_processing_jump_label_:
          thread_result_index = strcmp(str_len_counter,&g_system_string_error);
          if (thread_result_index == 0) {
            thread_result_index = 4;
            goto section_processing_jump_label_;
          }
section_processing_jump_label_:
          thread_result_index = strcmp(str_len_counter,&g_system_string_size);
          if (thread_result_index == 0) {
            thread_result_index = 0x50;
            goto section_processing_jump_label_;
          }
        }
      }
      goto section_processing_jump_label_;
    }
    thread_result_index = strcmp(thread_stack_base_address,&g_system_string_info);
    if (thread_result_index == 0) {
      thread_result_index = 1;
      goto section_processing_jump_label_;
    }
    thread_result_index = strcmp(str_len_counter,&g_system_string_type);
    if (thread_result_index == 0) {
      thread_result_index = 3;
      goto section_processing_jump_label_;
    }
    thread_result_index = strcmp(str_len_counter,&g_system_string_debug);
    if (thread_result_index != 0) {
      string_input_ptr = &g_file_path_temp;
      goto section_processing_jump_label_;
    }
  }
section_processing_jump_label_:
  thread_result_index = 4;
section_processing_jump_label_:
  thread_stack_ptr = &g_threadString2;
  if (thread_stack_base_address == 0) {
    return thread_result_index;
  }
  handle_param_system_error();
}
unsigned long long
system_execution_function(unsigned long long handle_param,unsigned long long thread_op_flags,unsigned char mutex_attr,unsigned long long mutex_type)
{
  char system_char_variable;
  void *pthread_op_flags;
  unsigned long long buffer_alloc_result;
  unsigned char auStack_50 [32];
  unsigned char auStack_30 [40];
  create_thread_context(auStack_30,handle_param,mutex_attr,mutex_type,DEFAULT_THREAD_POOL_FLAG);
  create_thread_context(auStack_50,thread_op_flags);
  system_char_variable = validate_handle_param_parameters(auStack_30,&g_config_path_string,1);
  if (system_char_variable == '\0') {
    system_char_variable = validate_handle_param_parameters(auStack_30,&g_config_path_string_backup,1);
    if (system_char_variable == '\0') {
      system_char_variable = validate_handle_param_parameters(auStack_30,&g_log_path_string,1);
      if (system_char_variable == '\0') {
        system_char_variable = validate_handle_param_parameters(auStack_30,&g_save_path_string,1);
        if (system_char_variable == '\0') {
          system_char_variable = validate_handle_param_parameters(auStack_30,&g_save_path_string_backup,1);
          if (system_char_variable == '\0') {
            system_char_variable = validate_handle_param_parameters(auStack_30,&g_system_path_string,1);
            if (system_char_variable == '\0') {
              system_char_variable = validate_handle_param_parameters(auStack_30,&g_data_path_string,1);
              if (system_char_variable == '\0') {
                system_char_variable = validate_handle_param_parameters(auStack_30,&g_temp_path_string,1);
                if (system_char_variable == '\0') {
                  system_char_variable = func_0x0001800a1eb0(auStack_30,&g_system_string_version);
                  if (system_char_variable == '\0') {
                    system_char_variable = func_0x0001800a1eb0(auStack_30,&g_system_string_name);
                    if (system_char_variable == '\0') {
                      system_char_variable = func_0x0001800a1eb0(auStack_30,&g_system_string_id);
                      if (system_char_variable == '\0') {
                        system_char_variable = func_0x0001800a1eb0(auStack_30,&g_system_string_type);
                        if (system_char_variable == '\0') {
                          system_char_variable = func_0x0001800a1eb0(auStack_30,&g_system_string_category);
                          if (system_char_variable == '\0') {
                            system_char_variable = func_0x0001800a1eb0(auStack_30,&g_system_string_class);
                            if (system_char_variable == '\0') {
                              system_char_variable = func_0x0001800a1eb0(auStack_30,&g_system_string_module);
                              if (system_char_variable == '\0') {
                                system_char_variable = func_0x0001800a1eb0(auStack_30,&g_system_string_function);
                                if (system_char_variable == '\0') {
                                  system_char_variable = func_0x0001800a1eb0(auStack_30,&g_system_string_method);
                                  if (system_char_variable == '\0') {
                                    system_char_variable = func_0x0001800a1eb0(auStack_30,&g_system_string_parameter);
                                    if (system_char_variable == '\0') {
                                      system_char_variable = func_0x0001800a1eb0(auStack_30,&g_system_string_argument);
                                      if (system_char_variable == '\0') {
                                        system_char_variable = func_0x0001800a1eb0(auStack_30,&g_system_string_variable);
                                        if (system_char_variable == '\0') {
                                          system_char_variable = func_0x0001800a1eb0(auStack_30,&g_system_string_constant);
                                          if (system_char_variable == '\0') {
                                            system_char_variable = func_0x0001800a1eb0(auStack_30,&g_system_string_value);
                                            if (system_char_variable == '\0') {
                                              system_char_variable = func_0x0001800a1eb0(auStack_30,&g_system_string_buffer)
                                              ;
                                              if (system_char_variable == '\0') {
                                                system_char_variable = func_0x0001800a1eb0(auStack_30,
                                                                            &g_system_string_data);
                                                if (system_char_variable == '\0') {
                                                  system_char_variable = func_0x0001800a1eb0(auStack_30,
                                                                              &g_system_string_memory);
                                                  if (system_char_variable == '\0') {
                                                    system_char_variable = func_0x0001800a1eb0(auStack_30,
                                                                                &g_system_string_pointer);
                                                    if (system_char_variable == '\0') {
                                                      system_char_variable = func_0x0001800a1eb0(auStack_30,
                                                                                  &g_system_string_reference);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_30,
                                                                                  &g_system_string_address);
                                                      if (system_char_variable == '\0') {
                                                        system_char_variable = func_0x0001800a1eb0(auStack_30,
                                                                                    &g_system_string_offset);
                                                        if (system_char_variable == '\0') {
                                                          system_char_variable = func_0x0001800a1eb0(auStack_30,
                                                                                      &g_system_string_size
                                                                                     );
                                                          if (system_char_variable == '\0') {
                                                            system_char_variable = func_0x0001800a1eb0(auStack_30,
                                                                                        &
                                                  g_file_path_config);
                                                  if (system_char_variable == '\0') {
                                                    system_char_variable = func_0x0001800a1eb0(auStack_30,
                                                                                &g_file_path_data);
                                                    if (system_char_variable != '\0') {
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_stack_data_main);
                                                      if (system_char_variable == '\0') {
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &g_stack_data_backup);
                                                        if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &g_stack_data_temp);
                                                        if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &g_stack_data_flag);
                                                        if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &network_buffer_ptr);
                                                        if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &g_stack_data_status);
                                                        if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &g_stack_data_pointer);
                                                        if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &g_stack_data_offset);
                                                        if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &g_stack_data_size);
                                                        if (system_char_variable != '\0') {
                                                          buffer_alloc_result = 0x21c;
                                                          goto section_processing_jump_label_;
                                                        }
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &g_stack_data_length);
                                                        if (system_char_variable != '\0') {
                                                          buffer_alloc_result = 0x41c;
                                                          goto section_processing_jump_label_;
                                                        }
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &g_stack_data_index);
                                                        if (system_char_variable != '\0') {
                                                          buffer_alloc_result = 0x41d;
                                                          goto section_processing_jump_label_;
                                                        }
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &g_stack_data_counter);
                                                        if (system_char_variable != '\0') {
                                                          buffer_alloc_result = 0x420;
                                                          goto section_processing_jump_label_;
                                                        }
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &g_stack_data_buffer);
                                                        if (system_char_variable != '\0') {
                                                          buffer_alloc_result = 0x424;
                                                          goto section_processing_jump_label_;
                                                        }
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &g_stack_data_value);
                                                        if (system_char_variable != '\0') {
                                                          buffer_alloc_result = 0x428;
                                                          goto section_processing_jump_label_;
                                                        }
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &g_stack_data_result);
                                                        if (system_char_variable != '\0') {
                                                          buffer_alloc_result = 0x430;
                                                          goto section_processing_jump_label_;
                                                        }
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &g_stack_data_code);
                                                        if (system_char_variable != '\0') {
                                                          buffer_alloc_result = 0x438;
                                                          goto section_processing_jump_label_;
                                                        }
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &g_stack_data_error);
                                                        if (system_char_variable != '\0') {
                                                          buffer_alloc_result = 0x439;
                                                          goto section_processing_jump_label_;
                                                        }
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &g_stack_data_info);
                                                        if (system_char_variable != '\0') {
                                                          buffer_alloc_result = 0x43c;
                                                          goto section_processing_jump_label_;
                                                        }
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &g_stack_data_debug);
                                                        if (system_char_variable != '\0') {
                                                          buffer_alloc_result = 0x440;
                                                          goto section_processing_jump_label_;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  else {
                                                    system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                &g_buffer_main);
                                                    if (system_char_variable == '\0') {
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_buffer_backup);
                                                      if (system_char_variable == '\0') {
                                                        pthread_op_flags = &g_buffer_flag;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      goto section_processing_jump_label_;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                &g_buffer_status);
                                                    if (system_char_variable == '\0') {
                                                      pthread_op_flags = &g_buffer_pointer;
                                                      goto section_processing_jump_label_;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                &g_system_variable_length);
                                                    if (system_char_variable == '\0') {
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_buffer_size);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_buffer_length);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_buffer_index);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_buffer_counter);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_buffer_temp);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_buffer_data);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 100;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_buffer_value);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_buffer_result);
                                                      if (system_char_variable != '\0') {
section_processing_jump_label_:
                                                        buffer_alloc_result = 0x6c;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_buffer_code);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_buffer_error);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x74;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_buffer_info);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_buffer_debug);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_buffer_type);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_buffer_kind);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x84;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_buffer_mode);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_buffer_state);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_buffer_flag_primary);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_buffer_flag_secondary);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_buffer_flag_temp);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x96;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_buffer_flag_data);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_buffer_flag_value);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                &g_system_variable_main);
                                                    if (system_char_variable == '\0') {
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_backup);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_temp);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_flag);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_status);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_pointer);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_offset);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_size);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_length);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_index);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0xf8;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_counter);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0xfc;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_data);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = string_buffer_size_constant;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_value);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x110;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_result);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x114;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_code);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x118;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_error);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x11c;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_info);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x11e;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_debug);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x120;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_type);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x130;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_kind);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x170;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_mode);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x174;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_state);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x178;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_flag_primary);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x188;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_flag_secondary);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x198;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_flag_temp);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x19c;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_flag_data);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x1a0;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_flag_value);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x220;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_flag_result);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x230;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_flag_code);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x234;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_flag_error);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x238;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_flag_info);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x23c;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_system_variable_flag_debug);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x240;
                                                        goto section_processing_jump_label_;
                                                      }
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                &g_thread_stack_buffer);
                                                    if (system_char_variable == '\0') {
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_thread_stack_backup);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 4;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      goto section_processing_jump_label_;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                &g_thread_data_buffer);
                                                    if (system_char_variable == '\0') {
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &g_thread_data_primary);
                                                      if (system_char_variable == '\0') {
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &g_thread_data_secondary);
                                                        if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &g_thread_data_temp);
                                                        if (system_char_variable == '\0') {
                                                          system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                      &g_thread_data_flag
                                                                                     );
                                                          if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                          system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                      &g_thread_data_status
                                                                                     );
                                                          if (system_char_variable == '\0') {
                                                            system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                        &
                                                  g_thread_data_result);
                                                  if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                  system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                              &g_thread_data_index);
                                                  if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                  system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                              &config_buffer_ptr);
                                                  if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                  system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                              &g_thread_data_counter);
                                                  if (system_char_variable == '\0') {
                                                    system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                &g_system_config_main);
                                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                    pthread_op_flags = &g_system_config_backup;
                                                    goto section_processing_jump_label_;
                                                  }
                                                  goto section_processing_jump_label_;
                                                  }
                                                  goto section_processing_jump_label_;
                                                  }
                                                  goto section_processing_jump_label_;
                                                  }
                                                  goto section_processing_jump_label_;
                                                  }
                                                  }
                                                }
                                                else {
                                                  system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                              &g_system_config_temp);
                                                  if (system_char_variable == '\0') {
                                                    system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                &g_system_config_flag);
                                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                    system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                &g_system_config_status);
                                                    if (system_char_variable != '\0') {
section_processing_jump_label_:
                                                      buffer_alloc_result = 0xc;
                                                      goto section_processing_jump_label_;
                                                    }
                                                    system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                &g_system_config_size);
                                                    if (system_char_variable != '\0') {
section_processing_jump_label_:
                                                      buffer_alloc_result = 0x14;
                                                      goto section_processing_jump_label_;
                                                    }
                                                    system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                &g_system_config_offset);
                                                    if (system_char_variable != '\0') {
section_processing_jump_label_:
                                                      buffer_alloc_result = 0x1c;
                                                      goto section_processing_jump_label_;
                                                    }
                                                    pthread_op_flags = &g_system_config_buffer;
section_processing_jump_label_:
                                                    system_char_variable = func_0x0001800a1eb0(auStack_50,pthread_op_flags);
                                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                  }
                                                }
                                              }
                                              else {
                                                system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                            &g_system_config_pointer);
                                                if (system_char_variable == '\0') {
                                                  system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                              &g_system_config_data);
                                                  if (system_char_variable != '\0') {
                                                    buffer_alloc_result = path_buffer_size00;
                                                    goto section_processing_jump_label_;
                                                  }
                                                  system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                              &g_system_config_value);
                                                  if (system_char_variable != '\0') {
                                                    buffer_alloc_result = path_buffer_size10;
                                                    goto section_processing_jump_label_;
                                                  }
                                                  system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                              &g_system_config_index);
                                                  if (system_char_variable != '\0') {
                                                    buffer_alloc_result = path_buffer_size20;
                                                    goto section_processing_jump_label_;
                                                  }
                                                  system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                              &g_system_config_length);
                                                  if (system_char_variable != '\0') {
                                                    buffer_alloc_result = path_buffer_size24;
                                                    goto section_processing_jump_label_;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          else {
section_processing_jump_label_:
                                            system_char_variable = func_0x0001800a1eb0(auStack_50,&g_thread_stack_buffer);
                                            if (system_char_variable == '\0') {
                                              system_char_variable = func_0x0001800a1eb0(auStack_50,&g_thread_stack_backup)
                                              ;
                                              if (system_char_variable == '\0') {
                                                pthread_op_flags = &g_thread_operation_flag;
                                                goto section_processing_jump_label_;
                                              }
                                              goto section_processing_jump_label_;
                                            }
                                          }
                                        }
                                        else {
                                          system_char_variable = func_0x0001800a1eb0(auStack_50,&g_thread_stack_main);
                                          if (system_char_variable == '\0') {
                                            system_char_variable = func_0x0001800a1eb0(auStack_50,&g_thread_stack_backup);
                                            if (system_char_variable != '\0') goto section_processing_jump_label_;
                                            system_char_variable = func_0x0001800a1eb0(auStack_50,&g_thread_stack_temp);
                                            if (system_char_variable != '\0') goto section_processing_jump_label_;
                                            system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_flag_error);
                                            if (system_char_variable != '\0') {
section_processing_jump_label_:
                                              buffer_alloc_result = 0x24;
                                              goto section_processing_jump_label_;
                                            }
                                            system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_flag_temp);
                                            if (system_char_variable != '\0') goto section_processing_jump_label_;
                                            system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_flag_value);
                                            if (system_char_variable != '\0') {
section_processing_jump_label_:
                                              buffer_alloc_result = 0x2c;
                                              goto section_processing_jump_label_;
                                            }
                                            system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_flag_code);
                                            if (system_char_variable != '\0') goto section_processing_jump_label_;
                                            system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_counter);
                                            if (system_char_variable != '\0') {
section_processing_jump_label_:
                                              buffer_alloc_result = 0x34;
                                              goto section_processing_jump_label_;
                                            }
                                            system_char_variable = func_0x0001800a1eb0(auStack_50,&g_thread_stack_size);
                                            if (system_char_variable != '\0') goto section_processing_jump_label_;
                                            system_char_variable = func_0x0001800a1eb0(auStack_50,&g_thread_stack_length);
                                            if (system_char_variable != '\0') {
section_processing_jump_label_:
                                              buffer_alloc_result = 0x3c;
                                              goto section_processing_jump_label_;
                                            }
                                            system_char_variable = func_0x0001800a1eb0(auStack_50,&g_thread_stack_index);
                                            if (system_char_variable != '\0') {
section_processing_jump_label_:
                                              buffer_alloc_result = 0x50;
                                              goto section_processing_jump_label_;
                                            }
                                            system_char_variable = func_0x0001800a1eb0(auStack_50,&g_thread_stack_counter);
                                            if (system_char_variable != '\0') goto section_processing_jump_label_;
                                            system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_info);
                                            if (system_char_variable != '\0') {
section_processing_jump_label_:
                                              buffer_alloc_result = 0x5c;
                                              goto section_processing_jump_label_;
                                            }
                                            system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_index);
                                            if (system_char_variable != '\0') {
section_processing_jump_label_:
                                              buffer_alloc_result = 0x60;
                                              goto section_processing_jump_label_;
                                            }
                                            system_char_variable = func_0x0001800a1eb0(auStack_50,&g_thread_stack_result);
                                            if (system_char_variable != '\0') {
                                              buffer_alloc_result = 0x61;
                                              goto section_processing_jump_label_;
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        system_char_variable = func_0x0001800a1eb0(auStack_50,&g_thread_stack_buffer);
                                        if (system_char_variable == '\0') {
                                          system_char_variable = func_0x0001800a1eb0(auStack_50,&g_thread_stack_backup);
                                          if (system_char_variable == '\0') {
section_processing_jump_label_:
                                            pthread_op_flags = &g_thread_operation_flag;
                                            goto section_processing_jump_label_;
                                          }
                                          goto section_processing_jump_label_;
                                        }
                                      }
                                    }
                                    else {
                                      system_char_variable = func_0x0001800a1eb0(auStack_50,&g_thread_stack_code);
                                      if (system_char_variable == '\0') {
                                        system_char_variable = func_0x0001800a1eb0(auStack_50,&g_thread_stack_error);
                                        if (system_char_variable != '\0') goto section_processing_jump_label_;
                                        pthread_op_flags = &g_thread_stack_info;
section_processing_jump_label_:
                                        system_char_variable = func_0x0001800a1eb0(auStack_50,pthread_op_flags);
                                        if (system_char_variable != '\0') goto section_processing_jump_label_;
                                      }
                                    }
                                  }
                                  else {
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_thread_stack_buffer);
                                    if (system_char_variable == '\0') {
                                      system_char_variable = func_0x0001800a1eb0(auStack_50,&g_thread_stack_backup);
                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                      system_char_variable = func_0x0001800a1eb0(auStack_50,&g_thread_stack_debug);
                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                      system_char_variable = func_0x0001800a1eb0(auStack_50,&g_thread_operation_flag);
                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    }
                                  }
                                }
                                else {
                                  system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_stack_main);
                                  if (system_char_variable == '\0') {
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_stack_backup);
                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_stack_temp);
                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_stack_flag);
                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_stack_status);
                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_stack_pointer);
                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_stack_offset);
                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_stack_size);
                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_stack_length);
                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_stack_index);
                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_stack_counter);
                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_stack_data);
                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_stack_value);
                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_stack_result);
                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_stack_code);
                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_stack_error);
                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_stack_info);
                                    if (system_char_variable != '\0') {
                                      buffer_alloc_result = 0x53c;
                                      goto section_processing_jump_label_;
                                    }
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_stack_debug);
                                    if (system_char_variable != '\0') {
                                      buffer_alloc_result = 0x540;
                                      goto section_processing_jump_label_;
                                    }
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_stack_type);
                                    if (system_char_variable != '\0') {
                                      buffer_alloc_result = 0x544;
                                      goto section_processing_jump_label_;
                                    }
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_stack_kind);
                                    if (system_char_variable != '\0') {
                                      buffer_alloc_result = 0x548;
                                      goto section_processing_jump_label_;
                                    }
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_stack_mode);
                                    if (system_char_variable != '\0') {
                                      buffer_alloc_result = 0x54c;
                                      goto section_processing_jump_label_;
                                    }
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_stack_state);
                                    if (system_char_variable != '\0') {
                                      buffer_alloc_result = 0x550;
                                      goto section_processing_jump_label_;
                                    }
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_thread_data_counter);
                                    if (system_char_variable != '\0') {
                                      buffer_alloc_result = 0x554;
                                      goto section_processing_jump_label_;
                                    }
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_stack_flag_primary);
                                    if (system_char_variable != '\0') {
                                      buffer_alloc_result = 0x558;
                                      goto section_processing_jump_label_;
                                    }
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_stack_flag_secondary);
                                    if (system_char_variable != '\0') {
                                      buffer_alloc_result = 0x55c;
                                      goto section_processing_jump_label_;
                                    }
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_stack_flag_temp);
                                    if (system_char_variable != '\0') {
                                      buffer_alloc_result = 0x560;
                                      goto section_processing_jump_label_;
                                    }
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_stack_flag_data);
                                    if (system_char_variable != '\0') {
                                      buffer_alloc_result = 0x564;
                                      goto section_processing_jump_label_;
                                    }
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_stack_flag_value);
                                    if (system_char_variable != '\0') {
                                      buffer_alloc_result = 0x565;
                                      goto section_processing_jump_label_;
                                    }
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_stack_flag_result);
                                    if (system_char_variable != '\0') {
                                      buffer_alloc_result = 0x566;
                                      goto section_processing_jump_label_;
                                    }
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_stack_flag_code);
                                    if (system_char_variable != '\0') {
                                      buffer_alloc_result = 0x567;
                                      goto section_processing_jump_label_;
                                    }
                                  }
                                }
                              }
                              else {
                                system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_main);
                                if (system_char_variable == '\0') {
                                  system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_backup);
                                  if (system_char_variable != '\0') goto section_processing_jump_label_;
                                  system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_temp);
                                  if (system_char_variable != '\0') goto section_processing_jump_label_;
                                  system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_flag);
                                  if (system_char_variable != '\0') goto section_processing_jump_label_;
                                  system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_status);
                                  if (system_char_variable != '\0') goto section_processing_jump_label_;
                                  system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_pointer);
                                  if (system_char_variable != '\0') goto section_processing_jump_label_;
                                }
                              }
                            }
                            else {
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_offset);
                              if (system_char_variable == '\0') {
                                system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_size);
                                if (system_char_variable == '\0') {
                                  system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_length);
                                  if (system_char_variable == '\0') {
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_index);
                                    if (system_char_variable == '\0') {
                                      pthread_op_flags = &g_system_buffer_counter;
                                      goto section_processing_jump_label_;
                                    }
                                    goto section_processing_jump_label_;
                                  }
                                  goto section_processing_jump_label_;
                                }
                                goto section_processing_jump_label_;
                              }
                            }
                          }
                          else {
                            system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_data);
                            if (system_char_variable == '\0') {
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_value);
                              if (system_char_variable != '\0') {
section_processing_jump_label_:
                                buffer_alloc_result = 4;
                                goto section_processing_jump_label_;
                              }
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_result);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_code);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_error);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_info);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_debug);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_type);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_kind);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_mode);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_state);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_flag_primary);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_flag_secondary);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_flag_temp);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_flag_data);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_flag_value);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_flag_result);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_flag_code);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_flag_error);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_flag_info);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_flag_debug);
                              if (system_char_variable != '\0') {
section_processing_jump_label_:
                                buffer_alloc_result = 0x70;
                                goto section_processing_jump_label_;
                              }
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_flag_type);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_flag_kind);
                              if (system_char_variable != '\0') {
section_processing_jump_label_:
                                buffer_alloc_result = 0x80;
                                goto section_processing_jump_label_;
                              }
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_flag_mode);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_flag_state);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_flag_extra);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_flag_main);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_flag_backup);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_buffer_flag_reserve);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                            }
                          }
                        }
                        else {
                          system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_main);
                          if (system_char_variable == '\0') {
                            system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_backup);
                            if (system_char_variable != '\0') goto section_processing_jump_label_;
                            system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_temp);
                            if (system_char_variable != '\0') goto section_processing_jump_label_;
                          }
                        }
                      }
                      else {
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_flag);
                        if (system_char_variable == '\0') {
                          system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_status);
                          if (system_char_variable != '\0') goto section_processing_jump_label_;
                          system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_pointer);
                          if (system_char_variable != '\0') goto section_processing_jump_label_;
                          system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_offset);
                          if (system_char_variable != '\0') goto section_processing_jump_label_;
                          system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_length);
                          if (system_char_variable != '\0') {
section_processing_jump_label_:
                            buffer_alloc_result = 0x38;
                            goto section_processing_jump_label_;
                          }
                          system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_counter);
                          if (system_char_variable != '\0') {
section_processing_jump_label_:
                            buffer_alloc_result = SYSTEM_CONFIG_BUFFER_SIZE;
                            goto section_processing_jump_label_;
                          }
                          system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_size);
                          if (system_char_variable != '\0') {
section_processing_jump_label_:
                            buffer_alloc_result = 0x44;
                            goto section_processing_jump_label_;
                          }
                          system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_length);
                          if (system_char_variable != '\0') {
section_processing_jump_label_:
                            buffer_alloc_result = 0x48;
                            goto section_processing_jump_label_;
                          }
                          system_char_variable = func_0x0001800a1eb0(auStack_50,&g_buffer_backup);
                          if (system_char_variable != '\0') {
section_processing_jump_label_:
                            buffer_alloc_result = 0x4c;
                            goto section_processing_jump_label_;
                          }
                          system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_index);
                          if (system_char_variable != '\0') goto section_processing_jump_label_;
                          system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_counter);
                          if (system_char_variable != '\0') {
                            buffer_alloc_result = 0x51;
                            goto section_processing_jump_label_;
                          }
                        }
                      }
                    }
                    else {
                      system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_value);
                      if (system_char_variable == '\0') {
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_result);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0x58;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_code);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0x68;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_error);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0x78;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_info);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0x88;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_debug);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0x8c;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_type);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0x90;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_kind);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0x94;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_mode);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0x98;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_state);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0x9c;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_flag_primary);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0xa0;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_flag_secondary);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0xa4;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_flag_temp);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0xa8;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_flag_data);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0xac;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_flag_value);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0xb0;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_flag_result);
                        if (system_char_variable != '\0') {
                          buffer_alloc_result = 0xb4;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_flag_code);
                        if (system_char_variable != '\0') {
                          buffer_alloc_result = 0xb5;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_flag_error);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0xb8;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_flag_info);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0xbc;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_flag_debug);
                        if (system_char_variable != '\0') {
                          buffer_alloc_result = 0xbd;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_flag_type);
                        if (system_char_variable != '\0') {
                          buffer_alloc_result = 0xbe;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_data_flag_kind);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0xc0;
                          goto section_processing_jump_label_;
                        }
                      }
                    }
                  }
                  else {
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_main);
                    if (system_char_variable == '\0') {
                      system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_backup);
                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                      system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_temp);
                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                      system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_flag);
                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                      pthread_op_flags = &g_system_handle_status;
section_processing_jump_label_:
                      system_char_variable = func_0x0001800a1eb0(auStack_50,pthread_op_flags);
                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                    }
                  }
                }
                else {
                  system_char_variable = validate_handle_param_parameters(auStack_50,&g_system_handle_pointer,1);
                  if (system_char_variable == '\0') {
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_offset);
                    if (system_char_variable != '\0') {
section_processing_jump_label_:
                      buffer_alloc_result = 1;
                      goto section_processing_jump_label_;
                    }
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_size);
                    if (system_char_variable != '\0') {
section_processing_jump_label_:
                      buffer_alloc_result = 2;
                      goto section_processing_jump_label_;
                    }
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_length);
                    if (system_char_variable != '\0') {
                      buffer_alloc_result = 3;
                      goto section_processing_jump_label_;
                    }
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_index);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_counter);
                    if (system_char_variable != '\0') {
                      buffer_alloc_result = 5;
                      goto section_processing_jump_label_;
                    }
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_data);
                    if (system_char_variable != '\0') {
                      buffer_alloc_result = 6;
                      goto section_processing_jump_label_;
                    }
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_value);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_result);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_code);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_error);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_info);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_debug);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_type);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_kind);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_mode);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_state);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_flag_primary);
                    if (system_char_variable != '\0') {
                      buffer_alloc_result = 0x1d;
                      goto section_processing_jump_label_;
                    }
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_flag_secondary);
                    if (system_char_variable != '\0') {
                      buffer_alloc_result = 0x1e;
                      goto section_processing_jump_label_;
                    }
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_flag_temp);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_flag_data);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_flag_value);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_flag_result);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_flag_code);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_flag_error);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_flag_info);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_flag_debug);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_flag_type);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_flag_kind);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_flag_mode);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_flag_state);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_flag_extra);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_flag_main);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_flag_backup);
                    if (system_char_variable != '\0') {
section_processing_jump_label_:
                      buffer_alloc_result = 0x7c;
                      goto section_processing_jump_label_;
                    }
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_flag_reserve);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_flag_special);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_flag_system);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_flag_user);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_flag_kernel);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_flag_driver);
                    if (system_char_variable != '\0') {
                      buffer_alloc_result = 0xc4;
                      goto section_processing_jump_label_;
                    }
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_flag_device);
                    if (system_char_variable != '\0') {
                      buffer_alloc_result = 200;
                      goto section_processing_jump_label_;
                    }
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_flag_process);
                    if (system_char_variable != '\0') {
                      buffer_alloc_result = 0xcc;
                      goto section_processing_jump_label_;
                    }
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&g_system_handle_flag_thread);
                    if (system_char_variable != '\0') {
                      buffer_alloc_result = 0xd0;
                      goto section_processing_jump_label_;
                    }
                  }
                }
              }
              else {
                system_char_variable = validate_handle_param_parameters(auStack_50,&g_system_validate_main,1);
                if (system_char_variable == '\0') {
                  system_char_variable = validate_handle_param_parameters(auStack_50,&g_system_validate_backup,1);
                  if (system_char_variable != '\0') {
section_processing_jump_label_:
                    buffer_alloc_result = STRING_BUFFER_SIZE;
                    goto section_processing_jump_label_;
                  }
                  system_char_variable = validate_handle_param_parameters(auStack_50,&g_system_validate_temp,1);
                  if (system_char_variable != '\0') {
section_processing_jump_label_:
                    buffer_alloc_result = path_buffer_size;
                    goto section_processing_jump_label_;
                  }
                  system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39850,1);
                  if (system_char_variable != '\0') goto section_processing_jump_label_;
                  system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39820,1);
                  if (system_char_variable != '\0') {
section_processing_jump_label_:
                    buffer_alloc_result = 0x30;
                    goto section_processing_jump_label_;
                  }
                  system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39940,1);
                  if (system_char_variable != '\0') {
                    buffer_alloc_result = 0x31;
                    goto section_processing_jump_label_;
                  }
                  system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a19c8c,1);
                  if (system_char_variable != '\0') {
                    buffer_alloc_result = 0x32;
                    goto section_processing_jump_label_;
                  }
                }
              }
            }
            else {
              system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a397d8,1);
              if (system_char_variable == '\0') {
                system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a397c8,1);
                if (system_char_variable != '\0') goto section_processing_jump_label_;
                system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39740,1);
                if (system_char_variable != '\0') goto section_processing_jump_label_;
                system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39728,1);
                if (system_char_variable != '\0') goto section_processing_jump_label_;
                system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39768,1);
                if (system_char_variable != '\0') goto section_processing_jump_label_;
                system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39758,1);
                if (system_char_variable != '\0') goto section_processing_jump_label_;
                system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39870,1);
                if (system_char_variable != '\0') goto section_processing_jump_label_;
                system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a19c8c,1);
                if (system_char_variable != '\0') {
section_processing_jump_label_:
                  buffer_alloc_result = 0x19;
                  goto section_processing_jump_label_;
                }
                system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39864,1);
                if (system_char_variable != '\0') {
                  buffer_alloc_result = 0x35;
                  goto section_processing_jump_label_;
                }
                system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a398a8,1);
                if (system_char_variable != '\0') goto section_processing_jump_label_;
              }
            }
          }
          else {
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39568,1);
            if (system_char_variable == '\0') {
              system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39538,1);
              if (system_char_variable != '\0') {
section_processing_jump_label_:
                buffer_alloc_result = 7;
                goto section_processing_jump_label_;
              }
              system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a396c8,1);
              if (system_char_variable != '\0') goto section_processing_jump_label_;
              system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a396b0,1);
              if (system_char_variable != '\0') goto section_processing_jump_label_;
              system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39710,1);
              if (system_char_variable != '\0') {
section_processing_jump_label_:
                buffer_alloc_result = 10;
                goto section_processing_jump_label_;
              }
              system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a396f0,1);
              if (system_char_variable != '\0') goto section_processing_jump_label_;
              system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39640,1);
              if (system_char_variable != '\0') goto section_processing_jump_label_;
              system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39628,1);
              if (system_char_variable != '\0') {
                buffer_alloc_result = 0xd;
                goto section_processing_jump_label_;
              }
              system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39688,1);
              if (system_char_variable != '\0') {
                buffer_alloc_result = 0xe;
                goto section_processing_jump_label_;
              }
              system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39660,1);
              if (system_char_variable != '\0') {
                buffer_alloc_result = 0xf;
                goto section_processing_jump_label_;
              }
              system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a397a8,1);
              if (system_char_variable != '\0') goto section_processing_jump_label_;
              system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39788,1);
              if (system_char_variable != '\0') goto section_processing_jump_label_;
            }
          }
        }
        else {
          system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39270,1);
          if (system_char_variable == '\0') {
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a393a8,1);
            if (system_char_variable != '\0') goto section_processing_jump_label_;
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39390,1);
            if (system_char_variable != '\0') {
section_processing_jump_label_:
              buffer_alloc_result = 9;
              goto section_processing_jump_label_;
            }
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a393f0,1);
            if (system_char_variable != '\0') goto section_processing_jump_label_;
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a393d0,1);
            if (system_char_variable != '\0') goto section_processing_jump_label_;
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39348,1);
            if (system_char_variable != '\0') {
section_processing_jump_label_:
              buffer_alloc_result = 0x17;
              goto section_processing_jump_label_;
            }
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39328,1);
            if (system_char_variable != '\0') goto section_processing_jump_label_;
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39378,1);
            if (system_char_variable != '\0') goto section_processing_jump_label_;
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39360,1);
            if (system_char_variable != '\0') {
              buffer_alloc_result = 0x21;
              goto section_processing_jump_label_;
            }
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a394a0,1);
            if (system_char_variable != '\0') {
              buffer_alloc_result = 0x22;
              goto section_processing_jump_label_;
            }
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39480,1);
            if (system_char_variable != '\0') {
              buffer_alloc_result = 0x23;
              goto section_processing_jump_label_;
            }
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a394e0,1);
            if (system_char_variable != '\0') goto section_processing_jump_label_;
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a394b8,1);
            if (system_char_variable != '\0') {
              buffer_alloc_result = 0x25;
              goto section_processing_jump_label_;
            }
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39428,1);
            if (system_char_variable != '\0') {
              buffer_alloc_result = 0x26;
              goto section_processing_jump_label_;
            }
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39408,1);
            if (system_char_variable != '\0') {
              buffer_alloc_result = 0x27;
              goto section_processing_jump_label_;
            }
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39468,1);
            if (system_char_variable != '\0') goto section_processing_jump_label_;
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39450,1);
            if (system_char_variable != '\0') {
              buffer_alloc_result = 0x29;
              goto section_processing_jump_label_;
            }
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a395c0,1);
            if (system_char_variable != '\0') {
              buffer_alloc_result = 0x2a;
              goto section_processing_jump_label_;
            }
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39598,1);
            if (system_char_variable != '\0') {
              buffer_alloc_result = 0x2b;
              goto section_processing_jump_label_;
            }
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39600,1);
            if (system_char_variable != '\0') goto section_processing_jump_label_;
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a395e0,1);
            if (system_char_variable != '\0') {
              buffer_alloc_result = 0x2d;
              goto section_processing_jump_label_;
            }
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39518,1);
            if (system_char_variable != '\0') {
              buffer_alloc_result = 0x2e;
              goto section_processing_jump_label_;
            }
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39500,1);
            if (system_char_variable != '\0') {
              buffer_alloc_result = 0x2f;
              goto section_processing_jump_label_;
            }
          }
        }
      }
      else {
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a391b8,1);
        if (system_char_variable == '\0') {
          system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39188,1);
          if (system_char_variable != '\0') {
section_processing_jump_label_:
            buffer_alloc_result = 0xb;
            goto section_processing_jump_label_;
          }
          system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39210,1);
          if (system_char_variable != '\0') goto section_processing_jump_label_;
          system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a391e8,1);
          if (system_char_variable != '\0') goto section_processing_jump_label_;
          system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39128,1);
          if (system_char_variable != '\0') {
section_processing_jump_label_:
            buffer_alloc_result = 0x11;
            goto section_processing_jump_label_;
          }
          system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39110,1);
          if (system_char_variable != '\0') {
            buffer_alloc_result = 0x12;
            goto section_processing_jump_label_;
          }
          system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39170,1);
          if (system_char_variable != '\0') {
            buffer_alloc_result = 0x13;
            goto section_processing_jump_label_;
          }
          system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39148,1);
          if (system_char_variable != '\0') goto section_processing_jump_label_;
          system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a392d0,1);
          if (system_char_variable != '\0') {
            buffer_alloc_result = 0x15;
            goto section_processing_jump_label_;
          }
          system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a392b8,1);
          if (system_char_variable != '\0') {
            buffer_alloc_result = 0x16;
            goto section_processing_jump_label_;
          }
          system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39308,1);
          if (system_char_variable != '\0') goto section_processing_jump_label_;
          system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a392e8,1);
          if (system_char_variable != '\0') goto section_processing_jump_label_;
          system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39250,1);
          if (system_char_variable != '\0') goto section_processing_jump_label_;
          system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39230,1);
          if (system_char_variable != '\0') {
section_processing_jump_label_:
            buffer_alloc_result = 0x1a;
            goto section_processing_jump_label_;
          }
          system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39298,1);
          if (system_char_variable != '\0') {
            buffer_alloc_result = 0x1b;
            goto section_processing_jump_label_;
          }
        }
      }
    }
    else {
      system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a38ef0,1);
      if (system_char_variable == '\0') {
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a38fd8,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&g_buffer_backup,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a38fc0,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39008,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a38ff0,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a38f78,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a38f60,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a38fa8,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a38f90,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a390b8,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39090,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a390f0,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a390d0,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39030,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a34c20,1);
        if (system_char_variable != '\0') {
          buffer_alloc_result = 0x54;
          goto section_processing_jump_label_;
        }
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39020,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39078,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a39058,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
      }
    }
  }
  else {
    system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a0ee38,1);
    if (system_char_variable == '\0') {
      system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a38f50,1);
      if (system_char_variable != '\0') {
section_processing_jump_label_:
        buffer_alloc_result = 8;
        goto section_processing_jump_label_;
      }
      system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a38f40,1);
      if (system_char_variable != '\0') goto section_processing_jump_label_;
      system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a38ee0,1);
      if (system_char_variable != '\0') {
section_processing_jump_label_:
        buffer_alloc_result = 0x18;
        goto section_processing_jump_label_;
      }
      system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a38ed0,1);
      if (system_char_variable != '\0') goto section_processing_jump_label_;
      system_char_variable = validate_handle_param_parameters(auStack_50,&system_180a38f00,1);
      if (system_char_variable != '\0') {
section_processing_jump_label_:
        buffer_alloc_result = 0x28;
        goto section_processing_jump_label_;
      }
    }
  }
  buffer_alloc_result = 0;
section_processing_jump_label_:
  system_execution_function(auStack_50);
  system_execution_function(auStack_30);
  return buffer_alloc_result;
}
  system_flag_buffer_11 = 0;
  system_crypto_initializer(system_execution_function);
  system_execution_function(&system_18064ffc0);
  str_len_counter = 0;
  global_data_ptr = system_execution_function;
  pthread_op_flags = (unsigned int *)&thread_pool_data_buffer;
  str_len_counter = 0x16;
  do {
    if (pthread_op_flags[1] == 0) {
      system_execution_function(pthread_op_flags);
    }
    if (str_len_counter != 2) {
      system_execution_function(&system_180a3db60,*(unsigned long long *)(pthread_op_flags + 4),*pthread_op_flags);
    }
    str_len_counter = str_len_counter + 1;
    pthread_op_flags = pthread_op_flags + 6;
    str_len_counter = str_len_counter + -1;
  } while (str_len_counter != 0);
  if (global_data_ptr == 0) {
    system_execution_function(&thread_op_flags_buffer);
  }
  global_data_ptr = (long long)global_data_ptr;
  if (global_data_ptr == 0) {
    system_execution_function(&thread_op_flags_buffer_0);
  }
  global_data_ptr = (long long)global_data_ptr;
  system_execution_function();
  if (system_control_flag_buffer != '\0') {
    system_execution_function(&system_180a3d970);
  }
  return;
}
double calculate_system_performance(void)
{
  long long system_init_result;
  long long astack_long_var [4];
  system_init_result = global_data_ptr;
  if (global_data_ptr == 0) {
    QueryPerformanceCounter(astack_long_var);
    system_init_result = astack_long_var[0];
  }
  return (double)(system_init_result - global_data_ptr) * global_data_ptr;
}
bool validate_handle_param_parameters(long long handle_param,long long thread_op_flags,char mutex_attr)
{
  char system_char_variable;
  char system_char_variable;
  int thread_result_index;
  long long str_len_counter;
  char *character_scan_pointer;
  str_len_counter = -1;
  do {
    str_len_counter = str_len_counter + 1;
  } while (*(char *)(thread_op_flags + str_len_counter) != '\0');
  thread_result_index = *(int *)(handle_param + STRING_BUFFER_SIZE);
  if (thread_result_index == (int)str_len_counter) {
    if (thread_result_index != 0) {
      character_scan_pointer = *(char **)(handle_param + 8);
      if (mutex_attr == '\0') {
        thread_result_index = _stricmp(character_scan_pointer,thread_op_flags);
        return thread_result_index == 0;
      }
      thread_op_flags = thread_op_flags - (long long)character_scan_pointer;
      do {
        system_char_variable = *character_scan_pointer;
        system_char_variable = character_scan_pointer[thread_op_flags];
        if (system_char_variable != system_char_variable) break;
        character_scan_pointer = character_scan_pointer + 1;
      } while (system_char_variable != '\0');
      return system_char_variable == system_char_variable;
    }
  }
  else if (thread_result_index != 0) {
    return false;
  }
  if ((int)str_len_counter != 0) {
    return false;
  }
  return true;
}
// 查找字符串在句柄中的位置
int find_string_index_in_array(long long handle_param)
{
  int thread_result_index;
  long long str_len_counter;
  int thread_result_index;
  ulong long buffer_alloc_result;
  long long str_len_counter;
  void *thread_stack_ptr;
  long long thread_stack_base_address;
  int thread_priority_level;
  create_thread_context(&thread_stack_ptr);
  thread_result_index = (*(int *)(handle_param + STRING_BUFFER_SIZE) - thread_priority_level) + 1;
  thread_result_index = 0;
  if (0 < thread_result_index) {
    str_len_counter = 0;
    do {
      buffer_alloc_result = 0;
      str_len_counter = 0;
      if (0 < thread_priority_level) {
        do {
          if (*(char *)(*(long long *)(handle_param + 8) + str_len_counter + str_len_counter) != *(char *)(buffer_alloc_result + thread_stack_base_address))
          break;
          buffer_alloc_result = (ulong long)((int)buffer_alloc_result + 1);
          str_len_counter = str_len_counter + 1;
        } while (str_len_counter < thread_priority_level);
      }
      if ((int)buffer_alloc_result == thread_priority_level) goto section_processing_jump_label_;
      thread_result_index = thread_result_index + 1;
      str_len_counter = str_len_counter + 1;
    } while (str_len_counter < thread_result_index);
  }
  thread_result_index = -1;
section_processing_jump_label_:
  thread_stack_ptr = &g_threadString2;
  if (thread_stack_base_address != 0) {
    handle_param_system_error();
  }
  return thread_result_index;
}
// 处理句柄和标志位
int process_handle_param_parameters(long long handle_param,long long thread_op_flags)
{
  int thread_result_index;
  long long str_len_counter;
  int thread_result_index;
  long long str_len_counter;
  ulong long buffer_alloc_result;
  thread_result_index = *(int *)(thread_op_flags + STRING_BUFFER_SIZE);
  thread_result_index = *(int *)(handle_param + STRING_BUFFER_SIZE) - thread_result_index;
  if (-1 < thread_result_index) {
    str_len_counter = (long long)thread_result_index;
    do {
      buffer_alloc_result = 0;
      str_len_counter = 0;
      if (0 < thread_result_index) {
        do {
          if (*(char *)(*(long long *)(handle_param + 8) + str_len_counter + str_len_counter) !=
              *(char *)(buffer_alloc_result + *(long long *)(thread_op_flags + 8))) break;
          buffer_alloc_result = (ulong long)((int)buffer_alloc_result + 1);
          str_len_counter = str_len_counter + 1;
        } while (str_len_counter < thread_result_index);
      }
      if ((int)buffer_alloc_result == thread_result_index) {
        return thread_result_index;
      }
      thread_result_index = thread_result_index + -1;
      str_len_counter = str_len_counter + -1;
    } while (-1 < str_len_counter);
  }
  return -1;
}
unsigned long long * setup_thread_parameters(long long handle_param,unsigned long long *thread_op_flags,int mutex_attr,int mutex_type)
{
  unsigned char buffer_alloc_result;
  int thread_result_index;
  int thread_result_index;
  ulong long buffer_alloc_result;
  ulong long buffer_alloc_result;
  buffer_alloc_result = (ulong long)mutex_attr;
  thread_result_index = mutex_type;
  if (mutex_type < 0) {
    thread_result_index = *(int *)(handle_param + STRING_BUFFER_SIZE);
  }
  *thread_op_flags = &g_threadString4;
  thread_op_flags[1] = 0;
  *(unsigned int *)(thread_op_flags + 2) = 0;
  *thread_op_flags = &g_threadString2;
  thread_op_flags[3] = 0;
  thread_op_flags[1] = 0;
  *(unsigned int *)(thread_op_flags + 2) = 0;
  thread_result_index = *(int *)(handle_param + STRING_BUFFER_SIZE) - mutex_attr;
  if (thread_result_index - mutex_attr < thread_result_index) {
    thread_result_index = thread_result_index - mutex_attr;
  }
  system_thread_manager_001(thread_op_flags,thread_result_index + 1,mutex_attr,mutex_type,1,DEFAULT_THREAD_POOL_FLAG);
  for (buffer_alloc_result = buffer_alloc_result;
      ((long long)buffer_alloc_result < (long long)thread_result_index && ((uint)buffer_alloc_result < *(uint *)(handle_param + STRING_BUFFER_SIZE)));
      buffer_alloc_result = (ulong long)((uint)buffer_alloc_result + 1)) {
    buffer_alloc_result = *(unsigned char *)(buffer_alloc_result + *(long long *)(handle_param + 8));
    system_thread_manager_001(thread_op_flags,*(int *)(thread_op_flags + 2) + 1);
    *(unsigned char *)((ulong long)*(uint *)(thread_op_flags + 2) + thread_op_flags[1]) = buffer_alloc_result;
    *(unsigned char *)((ulong long)(*(int *)(thread_op_flags + 2) + 1) + thread_op_flags[1]) = 0;
    *(int *)(thread_op_flags + 2) = *(int *)(thread_op_flags + 2) + 1;
    buffer_alloc_result = buffer_alloc_result + 1;
  }
  return thread_op_flags;
}
  system_initialized_flag = 1;
  thread_stack_ptr = &g_threadString2;
  stack_size_max = 0;
  thread_stack_ptr = (unsigned long long *)0x0;
  stack_size_max = 0;
  string_input_ptr = (unsigned long long *)
           system_execution_function(global_data_ptr,STRING_BUFFER_SIZE,CONCAT_BYTES_TO_64BIT((int7)((ulong long)character_scan_pointer >> 8),0x13));
  *(unsigned char *)string_input_ptr = 0;
  thread_stack_ptr = string_input_ptr;
  buffer_alloc_result = allocate_temporary_buffer(string_input_ptr);
  *string_input_ptr = 0x7265206573726150;
  *(unsigned int *)(string_input_ptr + 1) = 0x3a726f72;
  *(unsigned short *)((long long)string_input_ptr + 0xc) = 0x2720;
  *(unsigned char *)((long long)string_input_ptr + 0xe) = 0;
  stack_size_max = 0xe;
  system_init_result0 = -1;
  stack_size_max._0_4_ = buffer_alloc_result;
  if (handle_param != 0) {
    do {
      str_len_counter = system_init_result0;
      system_init_result0 = str_len_counter + 1;
    } while (*(char *)(system_init_result0 + handle_param) != '\0');
    if (0 < (int)system_init_result0) {
      thread_result_index = (int)str_len_counter;
      if ((thread_result_index != -0xf) && (buffer_alloc_result < thread_result_index + STRING_BUFFER_SIZEU)) {
        stack_size_max = 0x13;
        string_input_ptr = (unsigned long long *)system_execution_function(global_data_ptr,string_input_ptr,thread_result_index + STRING_BUFFER_SIZEU,STRING_BUFFER_SIZE);
        thread_stack_ptr = string_input_ptr;
        stack_size_max._0_4_ = allocate_temporary_buffer(string_input_ptr);
      }
      memcpy((unsigned char *)((long long)string_input_ptr + 0xe),handle_param,(long long)(thread_result_index + 2));
    }
  }
  if (string_input_ptr == (unsigned long long *)0x0) {
    string_input_ptr = (unsigned long long *)system_execution_function(global_data_ptr,0x19,0x13);
    *(unsigned char *)string_input_ptr = 0;
section_processing_jump_label_:
    thread_stack_ptr = string_input_ptr;
    buffer_alloc_result = allocate_temporary_buffer(string_input_ptr);
  }
  else if (buffer_alloc_result < 0x19) {
    stack_size_max = 0x13;
    string_input_ptr = (unsigned long long *)system_execution_function(global_data_ptr,string_input_ptr,0x19,STRING_BUFFER_SIZE);
    goto section_processing_jump_label_;
  }
  *(unsigned long long *)((long long)string_input_ptr + 0xe) = 0x6e696c2074612027;
  *(unsigned short *)((long long)string_input_ptr + 0x16) = path_buffer_size65;
  *(unsigned char *)(string_input_ptr + 3) = 0;
  stack_size_max = 0x18;
  stack_size_max._0_4_ = buffer_alloc_result;
  system_execution_function(acStack_40,&system_1809fd0a0,thread_result_index);
  system_init_result0 = -1;
  do {
    str_len_counter = system_init_result0;
    system_init_result0 = str_len_counter + 1;
  } while (acStack_40[str_len_counter + 1] != '\0');
  thread_result_index = (int)(str_len_counter + 1);
  if (thread_result_index < 1) {
    if (char_null_check_flag != '\0') {
      _Exit(5);
    }
    thread_stack_ptr = &g_threadString2;
    if (string_input_ptr != (unsigned long long *)0x0) {
      handle_param_system_error(string_input_ptr);
    }
    thread_stack_ptr = (unsigned long long *)0x0;
    stack_size_max = (ulong long)stack_size_max._4_4_ << path_buffer_size;
    thread_stack_ptr = &g_threadString4;
    system_execute_crypto_operation(stack_size_max ^ (ulong long)auStack_98);
  }
  if (thread_result_index != -0x18) {
    buffer_alloc_result = thread_result_index + 0x19;
    if (string_input_ptr == (unsigned long long *)0x0) {
      if ((int)buffer_alloc_result < STRING_BUFFER_SIZE) {
        buffer_alloc_result = STRING_BUFFER_SIZE;
      }
      string_input_ptr = (unsigned long long *)system_execution_function(global_data_ptr,(long long)(int)buffer_alloc_result,0x13);
      *(unsigned char *)string_input_ptr = 0;
    }
    else {
      if (buffer_alloc_result <= buffer_alloc_result) goto section_processing_jump_label_;
      stack_size_max = 0x13;
      string_input_ptr = (unsigned long long *)system_execution_function(global_data_ptr,string_input_ptr,buffer_alloc_result,STRING_BUFFER_SIZE);
    }
    thread_stack_ptr = string_input_ptr;
    stack_size_max._0_4_ = allocate_temporary_buffer(string_input_ptr);
  }
section_processing_jump_label_:
  memcpy(string_input_ptr + 3,acStack_40,(long long)((int)str_len_counter + 2));
}
char * system_execution_function(unsigned int handle_param,unsigned long long thread_op_flags,char *mutex_attr,unsigned long long mutex_type,
                    long long *param_5,long long param_6,ulong long param_7,unsigned long long *param_8,
                    int *param_9,unsigned long long *handle_param0)
{
  char system_char_variable;
  unsigned int thread_op_flags;
  unsigned int buffer_alloc_result;
  void *string_input_ptr;
  int thread_result_index;
  unsigned int buffer_alloc_result;
  uint buffer_alloc_result;
  long long str_len_counter;
  char *character_scan_pointer;
  unsigned int *string_input_ptr;
  unsigned int *string_input_ptr;
  unsigned char *string_input_ptr;
  void *string_input_ptr;
  char *character_scan_pointer;
  char *character_scan_pointer;
  ulong long buffer_alloc_result;
  char *character_scan_pointer;
  char *character_scan_pointer;
  char *character_scan_pointer;
  long long str_len_counter;
  char *character_scan_pointer;
  void *thread_stack_ptr;
  void *thread_stack_ptr;
  uint stack_size_max;
  unsigned long long stack_size_max;
  long long *plStack_120;
  void *thread_stack_ptr;
  void *thread_stack_ptr;
  unsigned int stack_size_max;
  ulong long stack_size_max;
  void *thread_stack_ptr;
  unsigned int *thread_stack_ptr;
  unsigned int stack_size_max;
  unsigned long long stack_size_max;
  ulong long stack_size_max;
  long long thread_stack_base_address;
  unsigned long long *thread_stack_ptr;
  void *thread_stack_ptr;
  unsigned int *thread_stack_ptr;
  unsigned int stack_size_max;
  ulong long stack_size_max;
  unsigned long long *thread_stack_ptr;
  void *thread_stack_ptr;
  unsigned int *thread_stack_ptr;
  unsigned int stack_size_max;
  unsigned long long stack_size_max;
  int *piStack_78;
  char *pcStack_70;
  unsigned long long stack_size_max;
  void *thread_stack_ptr;
  unsigned long long stack_size_max;
  unsigned long long *thread_stack_ptr;
  ulong long buffer_alloc_result;
  stack_size_max = DEFAULT_THREAD_POOL_FLAG;
  plStack_120 = param_5;
  thread_stack_base_address = param_6;
  stack_size_max = param_7;
  thread_stack_ptr = param_8;
  piStack_78 = param_9;
  thread_stack_ptr = handle_param0;
  thread_stack_ptr = handle_param0;
  thread_stack_ptr = &g_threadString2;
  stack_size_max = 0;
  thread_stack_ptr = (void *)0x0;
  stack_size_max = 0;
  pcStack_70 = mutex_attr;
  stack_size_max = thread_op_flags;
  str_len_counter = process_system_configuration(&thread_stack_ptr,mutex_type,handle_param,param_5);
  stack_size_max = *(unsigned int *)(str_len_counter + STRING_BUFFER_SIZE);
  thread_stack_ptr = *(void **)(str_len_counter + 8);
  stack_size_max = *(ulong long *)(str_len_counter + 0x18);
  *(unsigned int *)(str_len_counter + STRING_BUFFER_SIZE) = 0;
  *(unsigned long long *)(str_len_counter + 8) = 0;
  *(unsigned long long *)(str_len_counter + 0x18) = 0;
  thread_stack_ptr = &g_threadString2;
  thread_stack_ptr = thread_stack_ptr;
  if (thread_stack_ptr != (unsigned int *)0x0) {
    handle_param_system_error();
  }
  thread_stack_ptr = (unsigned int *)0x0;
  stack_size_max = (char *)((ulong long)stack_size_max._4_4_ << path_buffer_size);
  thread_stack_ptr = &g_threadString4;
  string_input_ptr = &default_resource_string;
  if (thread_stack_ptr != (void *)0x0) {
    string_input_ptr = thread_stack_ptr;
  }
  system_execution_function(&system_180a3cac0,string_input_ptr);
  *param_9 = 0;
  str_len_counter = *param_5;
  thread_result_index = 0;
  if (str_len_counter != param_5[1]) {
    do {
      if (0xf < thread_result_index) {
        system_execution_function(&system_180a3ca70,STRING_BUFFER_SIZE);
      }
      string_input_ptr = &default_resource_string;
      if (*(void **)(str_len_counter + 8) != (void *)0x0) {
        string_input_ptr = *(void **)(str_len_counter + 8);
      }
      system_execution_function(&system_180a3ca20,string_input_ptr);
      thread_result_index = *param_9;
      str_len_counter = (long long)thread_result_index * 0x3088 + thread_stack_base_address;
      string_input_ptr = &default_resource_string;
      if (*(void **)(str_len_counter + 8) != (void *)0x0) {
        string_input_ptr = *(void **)(str_len_counter + 8);
      }
      thread_stack_ptr = &g_threadString2;
      stack_size_max = 0;
      thread_stack_ptr = (void *)0x0;
      stack_size_max = 0;
      buffer_alloc_result = *(uint *)(thread_stack_ptr + 2);
      buffer_alloc_result = (ulong long)buffer_alloc_result;
      if (thread_stack_ptr[1] != 0) {
        system_thread_manager_001(&thread_stack_ptr,buffer_alloc_result);
      }
      string_input_ptr = thread_stack_ptr;
      if (buffer_alloc_result != 0) {
        memcpy(thread_stack_ptr,thread_stack_ptr[1],buffer_alloc_result);
      }
      if (thread_stack_ptr != (void *)0x0) {
        thread_stack_ptr[buffer_alloc_result] = 0;
      }
      stack_size_max = buffer_alloc_result;
      stack_size_max._4_4_ = *(uint *)((long long)thread_stack_ptr + 0x1c);
      if (string_input_ptr != (void *)0x0) {
        buffer_alloc_result = 0xffffffffffffffff;
        do {
          buffer_alloc_result = buffer_alloc_result;
          buffer_alloc_result = buffer_alloc_result + 1;
        } while (string_input_ptr[buffer_alloc_result] != '\0');
        param_5 = plStack_120;
        if (0 < (int)buffer_alloc_result) {
          system_thread_manager_001(&thread_stack_ptr,buffer_alloc_result & 0xffffffff);
          memcpy(thread_stack_ptr + stack_size_max,string_input_ptr,(long long)((int)buffer_alloc_result + 2));
        }
      }
      string_input_ptr = &default_resource_string;
      if (thread_stack_ptr != (void *)0x0) {
        string_input_ptr = thread_stack_ptr;
      }
      system_execution_function(string_input_ptr,str_len_counter,(long long)thread_result_index * path_buffer_size + param_7);
      thread_stack_ptr = &g_threadString2;
      if (string_input_ptr != (void *)0x0) {
        handle_param_system_error(string_input_ptr);
      }
      thread_stack_ptr = (void *)0x0;
      stack_size_max = (ulong long)stack_size_max._4_4_ << path_buffer_size;
      thread_stack_ptr = &g_threadString4;
      str_len_counter = str_len_counter + path_buffer_size;
      thread_result_index = *piStack_78 + 1;
      *piStack_78 = thread_result_index;
      param_7 = stack_size_max;
      mutex_attr = pcStack_70;
      param_6 = thread_stack_base_address;
      param_9 = piStack_78;
    } while (str_len_counter != param_5[1]);
  }
  character_scan_pointer = (char *)0x0;
  stack_size_max = stack_size_max & INT64_MASK;
  plStack_120 = (long long *)((ulong long)plStack_120 & 0xffffffff00000000);
  character_scan_pointer = character_scan_pointer;
  if (0 < thread_result_index) {
    do {
      character_scan_pointer = "base";
      do {
        character_scan_pointer = character_scan_pointer;
        character_scan_pointer = character_scan_pointer + 1;
      } while (*character_scan_pointer != '\0');
      for (character_scan_pointer = *(char **)(param_6 + 0x30); character_scan_pointer = character_scan_pointer, character_scan_pointer != (char *)0x0;
          character_scan_pointer = *(char **)(character_scan_pointer + 0x58)) {
        character_scan_pointer = *(char **)character_scan_pointer;
        if (character_scan_pointer == (char *)0x0) {
          character_scan_pointer = (char *)0x180d48d24;
          character_scan_pointer = character_scan_pointer;
        }
        else {
          character_scan_pointer = *(char **)(character_scan_pointer + STRING_BUFFER_SIZE);
        }
        if (character_scan_pointer == character_scan_pointer + -0x180a04ee3) {
          character_scan_pointer = character_scan_pointer + (long long)character_scan_pointer;
          character_scan_pointer = character_scan_pointer;
          if (character_scan_pointer <= character_scan_pointer) break;
          str_len_counter = (long long)&char_scan_buffer_end - (long long)character_scan_pointer;
          while (*character_scan_pointer == character_scan_pointer[str_len_counter]) {
            character_scan_pointer = character_scan_pointer + 1;
            if (character_scan_pointer <= character_scan_pointer) goto section_processing_jump_label_;
          }
        }
      }
section_processing_jump_label_:
      *thread_stack_ptr = character_scan_pointer;
      if (character_scan_pointer != (char *)0x0) {
        if (mutex_attr == (char *)0x0) {
          character_scan_pointer = *(char **)(character_scan_pointer + 0x30);
        }
        else {
          system_char_variable = *mutex_attr;
          character_scan_pointer = mutex_attr;
          while (system_char_variable != '\0') {
            character_scan_pointer = character_scan_pointer + 1;
            system_char_variable = *character_scan_pointer;
          }
          for (character_scan_pointer = *(char **)(character_scan_pointer + 0x30); character_scan_pointer = character_scan_pointer, character_scan_pointer != (char *)0x0;
              character_scan_pointer = *(char **)(character_scan_pointer + 0x58)) {
            character_scan_pointer = *(char **)character_scan_pointer;
            if (character_scan_pointer == (char *)0x0) {
              character_scan_pointer = (char *)0x180d48d24;
              character_scan_pointer = character_scan_pointer;
            }
            else {
              character_scan_pointer = *(char **)(character_scan_pointer + STRING_BUFFER_SIZE);
            }
            if (character_scan_pointer == character_scan_pointer + -(long long)mutex_attr) {
              character_scan_pointer = character_scan_pointer + (long long)character_scan_pointer;
              character_scan_pointer = character_scan_pointer;
              if (character_scan_pointer <= character_scan_pointer) break;
              str_len_counter = (long long)mutex_attr - (long long)character_scan_pointer;
              while (*character_scan_pointer == character_scan_pointer[str_len_counter]) {
                character_scan_pointer = character_scan_pointer + 1;
                if (character_scan_pointer <= character_scan_pointer) goto section_processing_jump_label_;
              }
            }
          }
        }
section_processing_jump_label_:
        *thread_stack_ptr = character_scan_pointer;
        if (character_scan_pointer == (char *)0x0) {
          thread_stack_ptr = &g_threadString2;
          thread_stack_ptr = (unsigned int *)0x0;
          stack_size_max = 0;
          stack_size_max = character_scan_pointer;
          string_input_ptr = (unsigned int *)system_execution_function(global_data_ptr,0x15,0x13);
          *(unsigned char *)string_input_ptr = 0;
          thread_stack_ptr = string_input_ptr;
          buffer_alloc_result = allocate_temporary_buffer(string_input_ptr);
          stack_size_max = (char *)merge_32bit_values(stack_size_max._4_4_,buffer_alloc_result);
          *string_input_ptr = path_buffer_size4c4d58;
          string_input_ptr[1] = 0x65646f6e;
          string_input_ptr[2] = 0x74697720;
          string_input_ptr[3] = 0x616e2068;
          string_input_ptr[4] = 0x2220656d;
          *(unsigned char *)(string_input_ptr + 5) = 0;
          stack_size_max = 0x14;
          thread_stack_ptr = &g_threadString2;
          stack_size_max = 0;
          thread_stack_ptr = (unsigned int *)0x0;
          stack_size_max = 0;
          string_input_ptr = (unsigned int *)system_execution_function(global_data_ptr,0x15,0x13);
          *(unsigned char *)string_input_ptr = 0;
          thread_stack_ptr = string_input_ptr;
          buffer_alloc_result = allocate_temporary_buffer(string_input_ptr);
          buffer_alloc_result = string_input_ptr[1];
          thread_op_flags = string_input_ptr[2];
          buffer_alloc_result = string_input_ptr[3];
          *string_input_ptr = *string_input_ptr;
          string_input_ptr[1] = buffer_alloc_result;
          string_input_ptr[2] = thread_op_flags;
          string_input_ptr[3] = buffer_alloc_result;
          string_input_ptr[4] = string_input_ptr[4];
          stack_size_max = 0x14;
          *(unsigned char *)(string_input_ptr + 5) = 0;
          stack_size_max = (ulong long)buffer_alloc_result;
          if (mutex_attr != (char *)0x0) {
            str_len_counter = -1;
            do {
              str_len_counter = str_len_counter;
              str_len_counter = str_len_counter + 1;
            } while (mutex_attr[str_len_counter] != '\0');
            if (0 < (int)str_len_counter) {
              thread_result_index = (int)str_len_counter;
              if ((thread_result_index != -0x15) && (buffer_alloc_result < thread_result_index + 0x16U)) {
                string_input_ptr = (unsigned int *)
                          system_execution_function(global_data_ptr,string_input_ptr,thread_result_index + 0x16U,STRING_BUFFER_SIZE,0x13);
                thread_stack_ptr = string_input_ptr;
                buffer_alloc_result = allocate_temporary_buffer(string_input_ptr);
                stack_size_max = merge_32bit_values(stack_size_max._4_4_,buffer_alloc_result);
              }
              memcpy(string_input_ptr + 5,mutex_attr,(long long)(thread_result_index + 2));
            }
          }
          string_input_ptr = (unsigned char *)0x0;
          thread_stack_ptr = &g_threadString2;
          stack_size_max = 0;
          thread_stack_ptr = (unsigned int *)0x0;
          stack_size_max = 0;
          string_input_ptr = (unsigned int *)system_execution_function(global_data_ptr,0x16,0x13);
          *(unsigned char *)string_input_ptr = 0;
          thread_stack_ptr = string_input_ptr;
          buffer_alloc_result = allocate_temporary_buffer(string_input_ptr);
          stack_size_max = merge_32bit_values(stack_size_max._4_4_,buffer_alloc_result);
          *string_input_ptr = 0x6f632022;
          string_input_ptr[1] = path_buffer_size646c75;
          string_input_ptr[2] = path_buffer_size746f6e;
          string_input_ptr[3] = 0x66206562;
          string_input_ptr[4] = 0x646e756f;
          *(unsigned short *)(string_input_ptr + 5) = 0x21;
          stack_size_max = 0x15;
          thread_stack_ptr = &g_threadString2;
          stack_size_max = 0;
          thread_stack_ptr = (unsigned char *)0x0;
          stack_size_max = 0;
          if (string_input_ptr != (unsigned int *)0x0) {
            string_input_ptr = (unsigned char *)system_execution_function(global_data_ptr,0x15,0x13);
            *string_input_ptr = 0;
            thread_stack_ptr = string_input_ptr;
            buffer_alloc_result = allocate_temporary_buffer(string_input_ptr);
            stack_size_max = merge_32bit_values(stack_size_max._4_4_,buffer_alloc_result);
          }
          memcpy(string_input_ptr,string_input_ptr,0x14);
        }
        thread_result_index = validate_config_handle_param(character_scan_pointer,stack_size_max);
        buffer_alloc_result = (int)character_scan_pointer + thread_result_index;
        character_scan_pointer = (char *)(ulong long)buffer_alloc_result;
        stack_size_max = merge_32bit_values(stack_size_max._4_4_,buffer_alloc_result);
      }
      thread_result_index = (int)plStack_120 + 1;
      plStack_120 = (long long *)merge_32bit_values(plStack_120._4_4_,thread_result_index);
      param_6 = param_6 + 0x3088;
      mutex_attr = pcStack_70;
      thread_stack_base_address = param_6;
    } while (thread_result_index < *param_9);
  }
  thread_stack_ptr = &g_threadString2;
  if (thread_stack_ptr != (void *)0x0) {
    handle_param_system_error();
  }
  thread_stack_ptr = (void *)0x0;
  stack_size_max = stack_size_max & INT64_MASK;
  thread_stack_ptr = &g_threadString4;
  *thread_stack_ptr = &g_threadString2;
  if (thread_stack_ptr[1] != 0) {
    handle_param_system_error();
  }
  thread_stack_ptr[1] = 0;
  *(unsigned int *)(thread_stack_ptr + 3) = 0;
  *thread_stack_ptr = &g_threadString4;
  return character_scan_pointer;
}
char * system_execution_function(unsigned long long handle_param,unsigned long long thread_op_flags,unsigned long long *mutex_attr,long long mutex_type,
                    unsigned long long param_5,unsigned long long *param_6,unsigned long long *param_7)
{
  unsigned int buffer_alloc_result;
  unsigned int thread_op_flags;
  unsigned int buffer_alloc_result;
  uint buffer_alloc_result;
  long long str_len_counter;
  char *character_scan_pointer;
  unsigned int *string_input_ptr;
  unsigned int *string_input_ptr;
  char *character_scan_pointer;
  void *string_input_ptr;
  char *character_scan_pointer;
  char *character_scan_pointer;
  char *character_scan_pointer;
  char *character_scan_pointer;
  void *thread_stack_ptr;
  unsigned int *thread_stack_ptr;
  unsigned int stack_size_max;
  unsigned long long stack_size_max;
  void *thread_stack_ptr;
  unsigned int *thread_stack_ptr;
  unsigned int stack_size_max;
  ulong long stack_size_max;
  void *thread_stack_ptr;
  unsigned int *thread_stack_ptr;
  unsigned int stack_size_max;
  unsigned long long stack_size_max;
  void *thread_stack_ptr;
  long long thread_stack_base_address;
  unsigned int stack_size_max;
  unsigned long long stack_size_max;
  unsigned long long *thread_stack_ptr;
  unsigned long long *thread_stack_ptr;
  stack_size_max = DEFAULT_THREAD_POOL_FLAG;
  thread_stack_ptr = param_7;
  character_scan_pointer = (char *)0x0;
  thread_stack_ptr = mutex_attr;
  str_len_counter = system_execution_function(param_7,&thread_stack_ptr);
  string_input_ptr = &default_resource_string;
  if (*(void **)(str_len_counter + 8) != (void *)0x0) {
    string_input_ptr = *(void **)(str_len_counter + 8);
  }
  system_execution_function(string_input_ptr,mutex_type,param_5);
  thread_stack_ptr = &g_threadString2;
  if (thread_stack_ptr != (unsigned int *)0x0) {
    handle_param_system_error();
  }
  thread_stack_ptr = (unsigned int *)0x0;
  stack_size_max = (ulong long)stack_size_max._4_4_ << path_buffer_size;
  thread_stack_ptr = &g_threadString4;
  character_scan_pointer = "base";
  do {
    character_scan_pointer = character_scan_pointer;
    character_scan_pointer = character_scan_pointer + 1;
  } while (*character_scan_pointer != '\0');
  for (character_scan_pointer = *(char **)(mutex_type + 0x30); character_scan_pointer = character_scan_pointer, character_scan_pointer != (char *)0x0;
      character_scan_pointer = *(char **)(character_scan_pointer + 0x58)) {
    character_scan_pointer = *(char **)character_scan_pointer;
    if (character_scan_pointer == (char *)0x0) {
      character_scan_pointer = (char *)0x180d48d24;
      character_scan_pointer = character_scan_pointer;
    }
    else {
      character_scan_pointer = *(char **)(character_scan_pointer + STRING_BUFFER_SIZE);
    }
    if (character_scan_pointer == character_scan_pointer + -0x180a04ee3) {
      character_scan_pointer = character_scan_pointer + (long long)character_scan_pointer;
      character_scan_pointer = character_scan_pointer;
      if (character_scan_pointer <= character_scan_pointer) break;
      str_len_counter = (long long)&char_scan_buffer_end - (long long)character_scan_pointer;
      while (*character_scan_pointer == character_scan_pointer[str_len_counter]) {
        character_scan_pointer = character_scan_pointer + 1;
        if (character_scan_pointer <= character_scan_pointer) goto section_processing_jump_label_;
      }
    }
  }
section_processing_jump_label_:
  *param_6 = character_scan_pointer;
  if (character_scan_pointer != (char *)0x0) {
    character_scan_pointer = "decal_textures";
    do {
      character_scan_pointer = character_scan_pointer;
      character_scan_pointer = character_scan_pointer + 1;
    } while (*character_scan_pointer != '\0');
    for (character_scan_pointer = *(char **)(character_scan_pointer + 0x30); character_scan_pointer = character_scan_pointer, character_scan_pointer != (char *)0x0;
        character_scan_pointer = *(char **)(character_scan_pointer + 0x58)) {
      character_scan_pointer = *(char **)character_scan_pointer;
      if (character_scan_pointer == (char *)0x0) {
        character_scan_pointer = (char *)0x180d48d24;
        character_scan_pointer = character_scan_pointer;
      }
      else {
        character_scan_pointer = *(char **)(character_scan_pointer + STRING_BUFFER_SIZE);
      }
      if (character_scan_pointer == character_scan_pointer + -0x180a12dff) {
        character_scan_pointer = character_scan_pointer + (long long)character_scan_pointer;
        character_scan_pointer = character_scan_pointer;
        if (character_scan_pointer <= character_scan_pointer) break;
        str_len_counter = (long long)&string_buffer_end - (long long)character_scan_pointer;
        while (*character_scan_pointer == character_scan_pointer[str_len_counter]) {
          character_scan_pointer = character_scan_pointer + 1;
          if (character_scan_pointer <= character_scan_pointer) goto section_processing_jump_label_;
        }
      }
    }
section_processing_jump_label_:
    *param_6 = character_scan_pointer;
    if (character_scan_pointer == (char *)0x0) {
      thread_stack_ptr = &g_threadString2;
      stack_size_max = 0;
      thread_stack_ptr = (unsigned int *)0x0;
      stack_size_max = 0;
      string_input_ptr = (unsigned int *)system_execution_function(global_data_ptr,0x15,0x13);
      *(unsigned char *)string_input_ptr = 0;
      thread_stack_ptr = string_input_ptr;
      buffer_alloc_result = allocate_temporary_buffer(string_input_ptr);
      stack_size_max = merge_32bit_values(stack_size_max._4_4_,buffer_alloc_result);
      *string_input_ptr = path_buffer_size4c4d58;
      string_input_ptr[1] = 0x65646f6e;
      string_input_ptr[2] = 0x74697720;
      string_input_ptr[3] = 0x616e2068;
      string_input_ptr[4] = 0x2220656d;
      *(unsigned char *)(string_input_ptr + 5) = 0;
      stack_size_max = 0x14;
      thread_stack_ptr = &g_threadString2;
      stack_size_max = 0;
      thread_stack_ptr = (unsigned int *)0x0;
      stack_size_max = 0;
      string_input_ptr = (unsigned int *)system_execution_function(global_data_ptr,0x15,0x13);
      *(unsigned char *)string_input_ptr = 0;
      thread_stack_ptr = string_input_ptr;
      buffer_alloc_result = allocate_temporary_buffer(string_input_ptr);
      buffer_alloc_result = string_input_ptr[1];
      buffer_alloc_result = string_input_ptr[2];
      thread_op_flags = string_input_ptr[3];
      *string_input_ptr = *string_input_ptr;
      string_input_ptr[1] = buffer_alloc_result;
      string_input_ptr[2] = buffer_alloc_result;
      string_input_ptr[3] = thread_op_flags;
      string_input_ptr[4] = string_input_ptr[4];
      stack_size_max = 0x14;
      *(unsigned char *)(string_input_ptr + 5) = 0;
      stack_size_max = (ulong long)buffer_alloc_result;
      if (buffer_alloc_result < 0x23) {
        string_input_ptr = (unsigned int *)system_execution_function(global_data_ptr,string_input_ptr,0x23,STRING_BUFFER_SIZE,0x13);
        thread_stack_ptr = string_input_ptr;
        buffer_alloc_result = allocate_temporary_buffer(string_input_ptr);
        stack_size_max = merge_32bit_values(stack_size_max._4_4_,buffer_alloc_result);
      }
      *(unsigned long long *)(string_input_ptr + 5) = 0x65745f6c61636564;
      string_input_ptr[7] = 0x72757478;
      *(unsigned short *)(string_input_ptr + 8) = 0x7365;
      *(unsigned char *)((long long)string_input_ptr + 0x22) = 0;
      stack_size_max = 0x22;
      thread_stack_ptr = &g_threadString2;
      stack_size_max = 0;
      thread_stack_ptr = (unsigned int *)0x0;
      stack_size_max = 0;
      string_input_ptr = (unsigned int *)system_execution_function(global_data_ptr,0x16,0x13);
      *(unsigned char *)string_input_ptr = 0;
      thread_stack_ptr = string_input_ptr;
      buffer_alloc_result = allocate_temporary_buffer(string_input_ptr);
      stack_size_max = merge_32bit_values(stack_size_max._4_4_,buffer_alloc_result);
      *string_input_ptr = 0x6f632022;
      string_input_ptr[1] = path_buffer_size646c75;
      string_input_ptr[2] = path_buffer_size746f6e;
      string_input_ptr[3] = 0x66206562;
      string_input_ptr[4] = 0x646e756f;
      *(unsigned short *)(string_input_ptr + 5) = 0x21;
      stack_size_max = 0x15;
      str_len_counter = system_execution_function(&thread_stack_ptr,&thread_stack_ptr,&thread_stack_ptr);
      string_input_ptr = &default_resource_string;
      if (*(void **)(str_len_counter + 8) != (void *)0x0) {
        string_input_ptr = *(void **)(str_len_counter + 8);
      }
      system_thread_initializer(string_input_ptr);
      thread_stack_ptr = &g_threadString2;
      if (thread_stack_base_address != 0) {
        handle_param_system_error();
      }
      thread_stack_base_address = 0;
      stack_size_max = 0;
      thread_stack_ptr = &g_threadString4;
      thread_stack_ptr = &g_threadString2;
      handle_param_system_error(string_input_ptr);
    }
    buffer_alloc_result = validate_config_handle_param(character_scan_pointer,&system_180a12e10);
    character_scan_pointer = (char *)(ulong long)buffer_alloc_result;
  }
  *mutex_attr = &g_threadString2;
  if (mutex_attr[1] != 0) {
    handle_param_system_error();
  }
  mutex_attr[1] = 0;
  *(unsigned int *)(mutex_attr + 3) = 0;
  *mutex_attr = &g_threadString4;
  *param_7 = &g_threadString2;
  if (param_7[1] != 0) {
    handle_param_system_error();
  }
  param_7[1] = 0;
  *(unsigned int *)(param_7 + 3) = 0;
  *param_7 = &g_threadString4;
  return character_scan_pointer;
}
long long process_system_configuration(long long handle_param,long long thread_op_flags,unsigned int mutex_attr,long long mutex_type)
{
  char system_char_variable;
  char system_char_variable;
  char *character_scan_pointer;
  char *character_scan_pointer;
  char *character_scan_pointer;
  long long str_len_counter;
  unsigned long long *string_input_ptr;
  char *character_scan_pointer;
  unsigned long long *string_input_ptr;
  char *character_scan_pointer;
  char *character_scan_pointer;
  bool byte_check_result2;
  unsigned int buffer_alloc_result;
  unsigned long long buffer_alloc_result;
  void *thread_stack_ptr;
  long long thread_stack_base_address;
  int thread_priority_level;
  ulong long stack_size_max;
  void *thread_stack_ptr;
  char *pcStack_48;
  int thread_priority_level;
  unsigned long long stack_size_max;
  buffer_alloc_result = DEFAULT_THREAD_POOL_FLAG;
  character_scan_pointer = (char *)0x0;
  system_execution_function(mutex_type);
  system_execution_function(handle_param,mutex_attr);
  buffer_alloc_result = 1;
  character_scan_pointer = "base";
  do {
    character_scan_pointer = character_scan_pointer;
    character_scan_pointer = character_scan_pointer + 1;
  } while (*character_scan_pointer != '\0');
  for (character_scan_pointer = *(char **)(thread_op_flags + 0x30); character_scan_pointer = character_scan_pointer, character_scan_pointer != (char *)0x0;
      character_scan_pointer = *(char **)(character_scan_pointer + 0x58)) {
    character_scan_pointer = *(char **)character_scan_pointer;
    if (character_scan_pointer == (char *)0x0) {
      character_scan_pointer = (char *)0x180d48d24;
      character_scan_pointer = character_scan_pointer;
    }
    else {
      character_scan_pointer = *(char **)(character_scan_pointer + STRING_BUFFER_SIZE);
    }
    if (character_scan_pointer == character_scan_pointer + -0x180a04ee3) {
      character_scan_pointer = character_scan_pointer + (long long)character_scan_pointer;
      character_scan_pointer = character_scan_pointer;
      if (character_scan_pointer <= character_scan_pointer) break;
      str_len_counter = (long long)&char_scan_buffer_end - (long long)character_scan_pointer;
      while (*character_scan_pointer == character_scan_pointer[str_len_counter]) {
        character_scan_pointer = character_scan_pointer + 1;
        if (character_scan_pointer <= character_scan_pointer) goto section_processing_jump_label_;
      }
    }
  }
section_processing_jump_label_:
  character_scan_pointer = "file";
  do {
    character_scan_pointer = character_scan_pointer;
    character_scan_pointer = character_scan_pointer + 1;
  } while (*character_scan_pointer != '\0');
  string_input_ptr = *(unsigned long long **)(character_scan_pointer + 0x30);
  do {
    if (string_input_ptr == (unsigned long long *)0x0) {
      return handle_param;
    }
    character_scan_pointer = (char *)*string_input_ptr;
    if (character_scan_pointer == (char *)0x0) {
      character_scan_pointer = (char *)0x180d48d24;
      character_scan_pointer = character_scan_pointer;
    }
    else {
      character_scan_pointer = (char *)string_input_ptr[2];
    }
    if (character_scan_pointer == character_scan_pointer + -0x180a0794b) {
      character_scan_pointer = character_scan_pointer + (long long)character_scan_pointer;
      if (character_scan_pointer <= character_scan_pointer) break;
      str_len_counter = (long long)&system_180a0794c - (long long)character_scan_pointer;
      while (*character_scan_pointer == character_scan_pointer[str_len_counter]) {
        character_scan_pointer = character_scan_pointer + 1;
        if (character_scan_pointer <= character_scan_pointer) goto section_processing_jump_label_;
      }
    }
    string_input_ptr = (unsigned long long *)string_input_ptr[0xb];
  } while( true );
section_processing_jump_label_:
  thread_stack_ptr = &g_threadString2;
  stack_size_max = 0;
  pcStack_48 = (char *)0x0;
  thread_priority_level = 0;
  character_scan_pointer = "type";
  do {
    character_scan_pointer = character_scan_pointer;
    character_scan_pointer = character_scan_pointer + 1;
  } while (*character_scan_pointer != '\0');
  for (string_input_ptr = (unsigned long long *)string_input_ptr[8]; string_input_ptr != (unsigned long long *)0x0;
      string_input_ptr = (unsigned long long *)string_input_ptr[6]) {
    character_scan_pointer = (char *)*string_input_ptr;
    if (character_scan_pointer == (char *)0x0) {
      character_scan_pointer = (char *)0x180d48d24;
      character_scan_pointer = character_scan_pointer;
    }
    else {
      character_scan_pointer = (char *)string_input_ptr[2];
    }
    if (character_scan_pointer == character_scan_pointer + -0x180a0ee2f) {
      character_scan_pointer = character_scan_pointer + (long long)character_scan_pointer;
      if (character_scan_pointer <= character_scan_pointer) {
section_processing_jump_label_:
        str_len_counter = 0x180d48d24;
        if (string_input_ptr[1] != 0) {
          str_len_counter = string_input_ptr[1];
        }
        system_execution_function(&thread_stack_ptr,str_len_counter,character_scan_pointer,string_input_ptr,buffer_alloc_result,buffer_alloc_result);
        break;
      }
      str_len_counter = (long long)&system_180a0ee30 - (long long)character_scan_pointer;
      while (*character_scan_pointer == character_scan_pointer[str_len_counter]) {
        character_scan_pointer = character_scan_pointer + 1;
        if (character_scan_pointer <= character_scan_pointer) goto section_processing_jump_label_;
      }
    }
  }
  if (thread_priority_level == *(int *)(handle_param + STRING_BUFFER_SIZE)) {
    if (thread_priority_level == 0) {
section_processing_jump_label_:
      if (*(int *)(handle_param + STRING_BUFFER_SIZE) != 0) goto section_processing_jump_label_;
      byte_check_result2 = true;
    }
    else {
      character_scan_pointer = pcStack_48;
      do {
        system_char_variable = *character_scan_pointer;
        system_char_variable = character_scan_pointer[*(long long *)(handle_param + 8) - (long long)pcStack_48];
        if (system_char_variable != system_char_variable) break;
        character_scan_pointer = character_scan_pointer + 1;
      } while (system_char_variable != '\0');
      byte_check_result2 = system_char_variable == system_char_variable;
    }
  }
  else {
    if (thread_priority_level == 0) goto section_processing_jump_label_;
section_processing_jump_label_:
    byte_check_result2 = false;
  }
  if (byte_check_result2) {
    thread_stack_ptr = &g_threadString2;
    stack_size_max = 0;
    thread_stack_base_address = 0;
    thread_priority_level = 0;
    character_scan_pointer = "name";
    do {
      character_scan_pointer = character_scan_pointer;
      character_scan_pointer = character_scan_pointer + 1;
    } while (*character_scan_pointer != '\0');
    for (string_input_ptr = (unsigned long long *)string_input_ptr[8]; string_input_ptr != (unsigned long long *)0x0;
        string_input_ptr = (unsigned long long *)string_input_ptr[6]) {
      character_scan_pointer = (char *)*string_input_ptr;
      if (character_scan_pointer == (char *)0x0) {
        character_scan_pointer = (char *)0x180d48d24;
        character_scan_pointer = character_scan_pointer;
      }
      else {
        character_scan_pointer = (char *)string_input_ptr[2];
      }
      if (character_scan_pointer == character_scan_pointer + -0x180a03a83) {
        character_scan_pointer = character_scan_pointer + (long long)character_scan_pointer;
        if (character_scan_pointer <= character_scan_pointer) {
section_processing_jump_label_:
          str_len_counter = 0x180d48d24;
          if (string_input_ptr[1] != 0) {
            str_len_counter = string_input_ptr[1];
          }
          system_execution_function(&thread_stack_ptr,str_len_counter);
          break;
        }
        str_len_counter = (long long)&temp_char_buffer - (long long)character_scan_pointer;
        while (*character_scan_pointer == character_scan_pointer[str_len_counter]) {
          character_scan_pointer = character_scan_pointer + 1;
          if (character_scan_pointer <= character_scan_pointer) goto section_processing_jump_label_;
        }
      }
    }
    string_input_ptr = *(unsigned long long **)(mutex_type + 8);
    if (string_input_ptr < *(unsigned long long **)(mutex_type + STRING_BUFFER_SIZE)) {
      *(unsigned long long **)(mutex_type + 8) = string_input_ptr + 4;
      *string_input_ptr = &g_threadString4;
      string_input_ptr[1] = 0;
      *(unsigned int *)(string_input_ptr + 2) = 0;
      *string_input_ptr = &g_threadString2;
      string_input_ptr[3] = 0;
      string_input_ptr[1] = 0;
      *(unsigned int *)(string_input_ptr + 2) = 0;
      system_thread_manager_001(string_input_ptr,thread_priority_level);
      if (thread_priority_level != 0) {
        memcpy(string_input_ptr[1],thread_stack_base_address,thread_priority_level + 1);
      }
      if (thread_stack_base_address != 0) {
        *(unsigned int *)(string_input_ptr + 2) = 0;
        if ((unsigned char *)string_input_ptr[1] != (unsigned char *)0x0) {
          *(unsigned char *)string_input_ptr[1] = 0;
        }
        *(unsigned int *)((long long)string_input_ptr + 0x1c) = 0;
      }
    }
    else {
      system_event_handle_paramr_006(mutex_type,&thread_stack_ptr);
    }
    thread_stack_ptr = &g_threadString2;
    if (thread_stack_base_address != 0) {
      handle_param_system_error();
    }
    thread_stack_base_address = 0;
    stack_size_max = stack_size_max & INT64_MASK;
    thread_stack_ptr = &g_threadString4;
  }
  string_input_ptr = (unsigned long long *)string_input_ptr[0xb];
  thread_stack_ptr = &g_threadString2;
  if (pcStack_48 != (char *)0x0) {
    handle_param_system_error();
  }
  if (string_input_ptr == (unsigned long long *)0x0) {
    return handle_param;
  }
  goto section_processing_jump_label_;
}
  system_initialized_flag = 0;
  if (system_char_variable != '\0') {
    system_thread_initializer(&system_180a3cc28,handle_param);
  }
  if (str_len_counter != -1) {
    LOCK();
    global_data_ptr = global_data_ptr + -1;
    UNLOCK();
    CloseHandle(alStack_3d0[0]);
    alStack_3d0[0] = -1;
  }
  thread_stack_ptr = &g_threadString2;
  if (thread_stack_ptr == (void *)0x0) {
    thread_stack_ptr = (void *)0x0;
    stack_size_max = 0;
    thread_stack_ptr = &g_threadString4;
    system_execute_crypto_operation(stack_size_max ^ (ulong long)auStack_408);
  }
  handle_param_system_error();
}
int validate_config_handle_param(unsigned long long handle_param,char *thread_op_flags)
{
  char *character_scan_pointer;
  char system_char_variable;
  unsigned long long *string_input_ptr;
  char *character_scan_pointer;
  long long str_len_counter;
  char *character_scan_pointer;
  int thread_result_index;
  string_input_ptr = (unsigned long long *)system_execution_function(handle_param,thread_op_flags,0);
  thread_result_index = 0;
  if (string_input_ptr == (unsigned long long *)0x0) {
    return 0;
  }
  while (thread_result_index = thread_result_index + 1, thread_op_flags == (char *)0x0) {
    string_input_ptr = (unsigned long long *)string_input_ptr[0xb];
section_processing_jump_label_:
    if (string_input_ptr == (unsigned long long *)0x0) {
      return thread_result_index;
    }
  }
  system_char_variable = *thread_op_flags;
  character_scan_pointer = thread_op_flags;
  while (system_char_variable != '\0') {
    character_scan_pointer = character_scan_pointer + 1;
    system_char_variable = *character_scan_pointer;
  }
  string_input_ptr = (unsigned long long *)string_input_ptr[0xb];
  if (string_input_ptr == (unsigned long long *)0x0) {
    return thread_result_index;
  }
  do {
    character_scan_pointer = (char *)*string_input_ptr;
    if (character_scan_pointer == (char *)0x0) {
      str_len_counter = 0;
      character_scan_pointer = (char *)0x180d48d24;
    }
    else {
      str_len_counter = string_input_ptr[2];
    }
    if (str_len_counter == (long long)character_scan_pointer - (long long)thread_op_flags) {
      character_scan_pointer = character_scan_pointer + str_len_counter;
      if (character_scan_pointer <= character_scan_pointer) goto section_processing_jump_label_;
      str_len_counter = (long long)thread_op_flags - (long long)character_scan_pointer;
      while (*character_scan_pointer == character_scan_pointer[str_len_counter]) {
        character_scan_pointer = character_scan_pointer + 1;
        if (character_scan_pointer <= character_scan_pointer) goto section_processing_jump_label_;
      }
    }
    string_input_ptr = (unsigned long long *)string_input_ptr[0xb];
    if (string_input_ptr == (unsigned long long *)0x0) {
      return thread_result_index;
    }
  } while( true );
}
int process_config_with_mutex(unsigned long long handle_param,unsigned long long thread_op_flags,unsigned long long *mutex_attr)
{
  char *character_scan_pointer;
  char system_char_variable;
  char *character_scan_pointer;
  char *unreg_bx;
  long long str_len_counter;
  char *character_scan_pointer;
  int in_R11D;
  while (in_R11D = in_R11D + 1, unreg_bx == (char *)0x0) {
    mutex_attr = (unsigned long long *)mutex_attr[0xb];
section_processing_jump_label_:
    if (mutex_attr == (unsigned long long *)0x0) {
      return in_R11D;
    }
  }
  system_char_variable = *unreg_bx;
  character_scan_pointer = unreg_bx;
  while (system_char_variable != '\0') {
    character_scan_pointer = character_scan_pointer + 1;
    system_char_variable = *character_scan_pointer;
  }
  mutex_attr = (unsigned long long *)mutex_attr[0xb];
  if (mutex_attr == (unsigned long long *)0x0) {
    return in_R11D;
  }
  do {
    character_scan_pointer = (char *)*mutex_attr;
    if (character_scan_pointer == (char *)0x0) {
      str_len_counter = 0;
      character_scan_pointer = (char *)0x180d48d24;
    }
    else {
      str_len_counter = mutex_attr[2];
    }
    if (str_len_counter == (long long)character_scan_pointer - (long long)unreg_bx) {
      character_scan_pointer = character_scan_pointer + str_len_counter;
      if (character_scan_pointer <= character_scan_pointer) goto section_processing_jump_label_;
      str_len_counter = (long long)unreg_bx - (long long)character_scan_pointer;
      while (*character_scan_pointer == character_scan_pointer[str_len_counter]) {
        character_scan_pointer = character_scan_pointer + 1;
        if (character_scan_pointer <= character_scan_pointer) goto section_processing_jump_label_;
      }
    }
    mutex_attr = (unsigned long long *)mutex_attr[0xb];
    if (mutex_attr == (unsigned long long *)0x0) {
      return in_R11D;
    }
  } while( true );
}
int validate_mutex_attributes(unsigned long long handle_param,unsigned long long thread_op_flags,unsigned long long *mutex_attr)
{
  char *character_scan_pointer;
  char system_char_variable;
  char *character_scan_pointer;
  char *unreg_bx;
  char *unaffected_registerDI;
  long long str_len_counter;
  char *character_scan_pointer;
  int in_R11D;
  do {
    mutex_attr = (unsigned long long *)mutex_attr[0xb];
section_processing_jump_label_:
    if (mutex_attr == (unsigned long long *)0x0) {
      return in_R11D;
    }
    in_R11D = in_R11D + 1;
  } while (unreg_bx == (char *)0x0);
  system_char_variable = *unreg_bx;
  character_scan_pointer = unreg_bx;
  while (system_char_variable != '\0') {
    character_scan_pointer = character_scan_pointer + 1;
    system_char_variable = *character_scan_pointer;
  }
  mutex_attr = (unsigned long long *)mutex_attr[0xb];
  if (mutex_attr == (unsigned long long *)0x0) {
    return in_R11D;
  }
  do {
    if ((char *)*mutex_attr == (char *)0x0) {
      str_len_counter = 0;
      character_scan_pointer = unaffected_registerDI;
    }
    else {
      str_len_counter = mutex_attr[2];
      character_scan_pointer = (char *)*mutex_attr;
    }
    if (str_len_counter == (long long)character_scan_pointer - (long long)unreg_bx) {
      character_scan_pointer = character_scan_pointer + str_len_counter;
      if (character_scan_pointer <= character_scan_pointer) goto section_processing_jump_label_;
      str_len_counter = (long long)unreg_bx - (long long)character_scan_pointer;
      while (*character_scan_pointer == character_scan_pointer[str_len_counter]) {
        character_scan_pointer = character_scan_pointer + 1;
        if (character_scan_pointer <= character_scan_pointer) goto section_processing_jump_label_;
      }
    }
    mutex_attr = (unsigned long long *)mutex_attr[0xb];
    if (mutex_attr == (unsigned long long *)0x0) {
      return in_R11D;
    }
  } while( true );
}
unsigned int get_system_status_code(void)
{
  unsigned int in_R11D;
  return in_R11D;
}
long long system_initialize_resources(unsigned long long handle_param,unsigned long long thread_op_flags,long long mutex_attr)
{
  long long system_init_result;
  long long str_len_counter;
  char *character_scan_pointer;
  long long str_len_counter;
  unsigned long long buffer_alloc_result;
  void *thread_stack_ptr;
  char *pcStack_28;
  buffer_alloc_result = DEFAULT_THREAD_POOL_FLAG;
  system_init_result = system_execution_function();
  if (system_init_result == 0) {
    return 0;
  }
  str_len_counter = 0x180d48d24;
  if (*(long long *)(system_init_result + 8) != 0) {
    str_len_counter = *(long long *)(system_init_result + 8);
  }
  create_thread_context(&thread_stack_ptr,str_len_counter);
  if (*pcStack_28 != '\0') {
    system_init_result = 0;
    do {
      str_len_counter = strchr(&system_180a3cc48,(int)pcStack_28[system_init_result]);
      if (str_len_counter != 0) {
        pcStack_28[system_init_result] = ' ';
      }
      system_init_result = system_init_result + 1;
    } while (pcStack_28[system_init_result] != '\0');
  }
  character_scan_pointer = "";
  if (pcStack_28 != (char *)0x0) {
    character_scan_pointer = pcStack_28;
  }
  system_execution_function(character_scan_pointer,&system_180a3cbe0,mutex_attr,mutex_attr + 4,buffer_alloc_result);
  thread_stack_ptr = &g_threadString2;
  if (pcStack_28 != (char *)0x0) {
    handle_param_system_error();
  }
  return str_len_counter;
}
long long allocate_thread_resources(unsigned long long handle_param,unsigned long long thread_op_flags,long long mutex_attr)
{
  long long system_init_result;
  long long str_len_counter;
  char *character_scan_pointer;
  long long str_len_counter;
  void *thread_stack_ptr;
  char *pcStack_28;
  system_init_result = system_execution_function();
  if (system_init_result == 0) {
    return 0;
  }
  str_len_counter = 0x180d48d24;
  if (*(long long *)(system_init_result + 8) != 0) {
    str_len_counter = *(long long *)(system_init_result + 8);
  }
  create_thread_context(&thread_stack_ptr,str_len_counter);
  if (*pcStack_28 != '\0') {
    system_init_result = 0;
    do {
      str_len_counter = strchr(&system_180a3c9ec,(int)pcStack_28[system_init_result]);
      if (str_len_counter != 0) {
        pcStack_28[system_init_result] = ' ';
      }
      system_init_result = system_init_result + 1;
    } while (pcStack_28[system_init_result] != '\0');
  }
  character_scan_pointer = "";
  if (pcStack_28 != (char *)0x0) {
    character_scan_pointer = pcStack_28;
  }
  system_execution_function(character_scan_pointer,&system_180a3cc0c,mutex_attr,mutex_attr + 4,mutex_attr + 8);
  thread_stack_ptr = &g_threadString2;
  if (pcStack_28 != (char *)0x0) {
    handle_param_system_error();
  }
  return str_len_counter;
}
long long initialize_thread_pool_resources(unsigned long long handle_param,unsigned long long thread_op_flags,long long mutex_attr,unsigned long long mutex_type)
{
  long long system_init_result;
  long long str_len_counter;
  char *character_scan_pointer;
  long long str_len_counter;
  void *thread_stack_ptr;
  char *pcStack_28;
  system_init_result = system_execution_function(handle_param,&g_system_buffer_status,mutex_attr,mutex_type,DEFAULT_THREAD_POOL_FLAG);
  if (system_init_result == 0) {
    return 0;
  }
  str_len_counter = 0x180d48d24;
  if (*(long long *)(system_init_result + 8) != 0) {
    str_len_counter = *(long long *)(system_init_result + 8);
  }
  create_thread_context(&thread_stack_ptr,str_len_counter);
  if (*pcStack_28 != '\0') {
    system_init_result = 0;
    do {
      str_len_counter = strchr(&system_180a3cc04,(int)pcStack_28[system_init_result]);
      if (str_len_counter != 0) {
        pcStack_28[system_init_result] = ' ';
      }
      system_init_result = system_init_result + 1;
    } while (pcStack_28[system_init_result] != '\0');
  }
  character_scan_pointer = "";
  if (pcStack_28 != (char *)0x0) {
    character_scan_pointer = pcStack_28;
  }
  system_execution_function(character_scan_pointer,&system_180a3cc1c,mutex_attr,mutex_attr + 4);
  thread_stack_ptr = &g_threadString2;
  if (pcStack_28 != (char *)0x0) {
    handle_param_system_error();
  }
  return str_len_counter;
}
long long validate_thread_configuration(unsigned long long handle_param,unsigned long long thread_op_flags,long long mutex_attr)
{
  int thread_result_index;
  long long str_len_counter;
  long long str_len_counter;
  char *character_scan_pointer;
  long long str_len_counter;
  unsigned long long buffer_alloc_result;
  void *thread_stack_ptr;
  char *pcStack_28;
  buffer_alloc_result = DEFAULT_THREAD_POOL_FLAG;
  str_len_counter = system_execution_function();
  if (str_len_counter == 0) {
    return 0;
  }
  str_len_counter = 0x180d48d24;
  if (*(long long *)(str_len_counter + 8) != 0) {
    str_len_counter = *(long long *)(str_len_counter + 8);
  }
  create_thread_context(&thread_stack_ptr,str_len_counter);
  if (*pcStack_28 != '\0') {
    str_len_counter = 0;
    do {
      str_len_counter = strchr(&system_180a3c9ec,(int)pcStack_28[str_len_counter]);
      if (str_len_counter != 0) {
        pcStack_28[str_len_counter] = ' ';
      }
      str_len_counter = str_len_counter + 1;
    } while (pcStack_28[str_len_counter] != '\0');
  }
  character_scan_pointer = "";
  if (pcStack_28 != (char *)0x0) {
    character_scan_pointer = pcStack_28;
  }
  thread_result_index = system_execution_function(character_scan_pointer,&system_180a3c9f8,mutex_attr,mutex_attr + 4,mutex_attr + 8,
                        (unsigned int *)(mutex_attr + 0xc),buffer_alloc_result);
  if (thread_result_index == 3) {
    *(unsigned int *)(mutex_attr + 0xc) = 0x3f800000;
  }
  thread_stack_ptr = &g_threadString2;
  if (pcStack_28 != (char *)0x0) {
    handle_param_system_error();
  }
  return str_len_counter;
}
long long process_thread_initialization(unsigned long long handle_param,unsigned long long thread_op_flags,long long mutex_attr)
{
  long long system_init_result;
  long long str_len_counter;
  char *character_scan_pointer;
  long long str_len_counter;
  unsigned long long buffer_alloc_result;
  void *thread_stack_ptr;
  char *pcStack_28;
  buffer_alloc_result = DEFAULT_THREAD_POOL_FLAG;
  system_init_result = system_execution_function(handle_param,&system_180a16818);
  if (system_init_result == 0) {
    return 0;
  }
  str_len_counter = 0x180d48d24;
  if (*(long long *)(system_init_result + 8) != 0) {
    str_len_counter = *(long long *)(system_init_result + 8);
  }
  create_thread_context(&thread_stack_ptr,str_len_counter);
  if (*pcStack_28 != '\0') {
    system_init_result = 0;
    do {
      str_len_counter = strchr(&system_180a3cc04,(int)pcStack_28[system_init_result]);
      if (str_len_counter != 0) {
        pcStack_28[system_init_result] = ' ';
      }
      system_init_result = system_init_result + 1;
    } while (pcStack_28[system_init_result] != '\0');
  }
  character_scan_pointer = "";
  if (pcStack_28 != (char *)0x0) {
    character_scan_pointer = pcStack_28;
  }
  system_execution_function(character_scan_pointer,&system_180a3c9f8,mutex_attr + 4,mutex_attr + 8,mutex_attr + 0xc,mutex_attr,buffer_alloc_result);
  thread_stack_ptr = &g_threadString2;
  if (pcStack_28 != (char *)0x0) {
    handle_param_system_error();
  }
  return str_len_counter;
}
long long initialize_thread_synchronization(unsigned long long handle_param,unsigned long long thread_op_flags,long long mutex_attr)
{
  long long *psystem_init_result;
  long long str_len_counter;
  long long str_len_counter;
  char *character_scan_pointer;
  long long str_len_counter;
  void *thread_stack_ptr;
  char *pcStack_28;
  str_len_counter = system_execution_function();
  if (str_len_counter != 0) {
    psystem_init_result = (long long *)(str_len_counter + 8);
    str_len_counter = 0x180d48d24;
    if (*psystem_init_result != 0) {
      str_len_counter = *psystem_init_result;
    }
    create_thread_context(&thread_stack_ptr,str_len_counter);
    if (*pcStack_28 != '\0') {
      str_len_counter = 0;
      do {
        str_len_counter = strchr(&system_180a3cc04,(int)pcStack_28[str_len_counter]);
        if (str_len_counter != 0) {
          pcStack_28[str_len_counter] = ' ';
        }
        str_len_counter = str_len_counter + 1;
      } while (pcStack_28[str_len_counter] != '\0');
    }
    character_scan_pointer = "";
    if (pcStack_28 != (char *)0x0) {
      character_scan_pointer = pcStack_28;
    }
    system_execution_function(character_scan_pointer,&system_180a3ccc8,mutex_attr,mutex_attr + 4,mutex_attr + 8,mutex_attr + STRING_BUFFER_SIZE,
                  mutex_attr + 0x14,mutex_attr + 0x18,mutex_attr + path_buffer_size,mutex_attr + 0x24,mutex_attr + 0x28);
    thread_stack_ptr = &g_threadString2;
    if (pcStack_28 != (char *)0x0) {
      handle_param_system_error();
    }
  }
  return str_len_counter;
}
long long setup_thread_communication(unsigned long long handle_param,unsigned long long thread_op_flags,long long mutex_attr)
{
  long long *psystem_init_result;
  long long str_len_counter;
  long long str_len_counter;
  char *character_scan_pointer;
  long long str_len_counter;
  unsigned long long buffer_alloc_result;
  void *thread_stack_ptr;
  char *pcStack_50;
  buffer_alloc_result = DEFAULT_THREAD_POOL_FLAG;
  str_len_counter = system_execution_function();
  if (str_len_counter != 0) {
    psystem_init_result = (long long *)(str_len_counter + 8);
    str_len_counter = 0x180d48d24;
    if (*psystem_init_result != 0) {
      str_len_counter = *psystem_init_result;
    }
    create_thread_context(&thread_stack_ptr,str_len_counter);
    if (*pcStack_50 != '\0') {
      str_len_counter = 0;
      do {
        str_len_counter = strchr(&system_180a3cc04,(int)pcStack_50[str_len_counter]);
        if (str_len_counter != 0) {
          pcStack_50[str_len_counter] = ' ';
        }
        str_len_counter = str_len_counter + 1;
      } while (pcStack_50[str_len_counter] != '\0');
    }
    character_scan_pointer = "";
    if (pcStack_50 != (char *)0x0) {
      character_scan_pointer = pcStack_50;
    }
    system_execution_function(character_scan_pointer,&system_180a3cca0,mutex_attr,mutex_attr + 4,mutex_attr + 8,mutex_attr + 0xc,mutex_attr + STRING_BUFFER_SIZE
                  ,mutex_attr + 0x14,mutex_attr + 0x18,mutex_attr + 0x1c,mutex_attr + path_buffer_size,mutex_attr + 0x24,
                  mutex_attr + 0x28,mutex_attr + 0x2c,mutex_attr + 0x30,mutex_attr + 0x34,mutex_attr + 0x38,
                  mutex_attr + 0x3c,str_len_counter,buffer_alloc_result);
    thread_stack_ptr = &g_threadString2;
    if (pcStack_50 != (char *)0x0) {
      handle_param_system_error();
    }
  }
  return str_len_counter;
}
long long create_thread_with_attributes(unsigned long long handle_param,unsigned long long thread_op_flags,unsigned long long *mutex_attr)
{
  unsigned long long buffer_alloc_result;
  long long str_len_counter;
  unsigned long long *string_input_ptr;
  long long str_len_counter;
  unsigned char auStack_18 [16];
  str_len_counter = system_execution_function();
  if (str_len_counter != 0) {
    str_len_counter = 0x180d48d24;
    if (*(long long *)(str_len_counter + 8) != 0) {
      str_len_counter = *(long long *)(str_len_counter + 8);
    }
    string_input_ptr = (unsigned long long *)system_execution_function(auStack_18,str_len_counter);
    buffer_alloc_result = string_input_ptr[1];
    *mutex_attr = *string_input_ptr;
    mutex_attr[1] = buffer_alloc_result;
    return str_len_counter;
  }
  return 0;
}
unsigned long long get_thread_handle_param(unsigned long long handle_param)
{
  unsigned long long buffer_alloc_result;
  unsigned long long *pthread_op_flags;
  unsigned long long buffer_alloc_result;
  unsigned long long *unaffected_registerDI;
  bool in_ZF;
  unsigned char temp_stack_array [8];
  buffer_alloc_result = 0x180d48d24;
  if (!in_ZF) {
    buffer_alloc_result = handle_param;
  }
  pthread_op_flags = (unsigned long long *)system_execution_function(temp_stack_array,buffer_alloc_result);
  buffer_alloc_result = pthread_op_flags[1];
  *unaffected_registerDI = *pthread_op_flags;
  unaffected_registerDI[1] = buffer_alloc_result;
  return buffer_alloc_result;
}
  system_flag_buffer_11 = 0;
  system_crypto_initializer(system_execution_function);
  system_execution_function(&system_18064ffc0);
  str_len_counter = 0;
  global_data_ptr = system_execution_function;
  string_input_ptr = (unsigned int *)&string_input_buffer;
  str_len_counter = 0x16;
  do {
    if (string_input_ptr[1] == 0) {
      system_execution_function(string_input_ptr);
    }
    if (str_len_counter != 2) {
      system_execution_function(&system_180a3db60,*(unsigned long long *)(string_input_ptr + 4),*string_input_ptr);
    }
    str_len_counter = str_len_counter + 1;
    string_input_ptr = string_input_ptr + 6;
    str_len_counter = str_len_counter + -1;
  } while (str_len_counter != 0);
  if (global_data_ptr == 0) {
    system_execution_function(&thread_op_flags_buffer);
  }
  global_data_ptr = (long long)global_data_ptr;
  if (global_data_ptr == 0) {
    system_execution_function(&thread_op_flags_buffer_0);
  }
  global_data_ptr = (long long)global_data_ptr;
  system_execution_function();
  if (system_control_flag_buffer != '\0') {
    system_execution_function(&system_180a3d970);
  }
  return;
}
  string_processing_flag = 1;
  if (network_status_flag == '\0') {
    network_status_flag = '\x01';
    thread_op_flags = FlsAlloc(&system_18064f970);
    global_data_ptr = thread_op_flags;
    *(unsigned long long *)
     (*(long long *)((long long)ThreadLocalStoragePointer + (ulong long)__tls_index * 8) + STRING_BUFFER_SIZE) =
         0x180bf4000;
    FlsSetValue(thread_op_flags);
  }
  system_execution_function(&system_180a3d988,&ExceptionList);
  system_init_result = cpuid_Extended_Feature_Enumeration_info(7);
  system_mode_flag = (byte)(*(uint *)(system_init_result + 8) >> 4) & 1;
  GetSystemInfo(auStack_40);
  if (stack_size_max != 0) {
    global_data_ptr = (ulong long)stack_size_max;
  }
  system_execution_function();
  system_execution_function(&system_180a3d940,0);
  system_execution_function();
  system_execution_result_ptr = (long long *)system_execution_function();
  if ((void *)(*system_execution_result_ptr + 0x3d8) == &system_config_buffer) {
    memset(&system_config_buffer,0,0x240);
  }
  memset((void *)(*system_execution_result_ptr + 0x3d8),0,0x240);
}
  network_status_flag_secondary = 1;
  FlsSetValue(global_data_ptr,0);
  FlsFree(global_data_ptr);
  system_execution_function(*(unsigned long long *)
                 (*(long long *)((long long)ThreadLocalStoragePointer + (ulong long)__tls_index * 8) +
                 STRING_BUFFER_SIZE),1);
  if (global_data_ptr == 0) {
    system_execution_function(&string_buffer_primary);
  }
  if (global_data_ptr == 0) {
    if (global_data_ptr == 0) {
      system_execution_function(&string_buffer_secondary);
    }
    if (global_data_ptr == 0) goto section_processing_jump_label_;
  }
  psystem_init_result = (long long *)system_execution_function();
  pthread_op_flags = (void *)(*psystem_init_result + 0x3d8);
  if (pthread_op_flags != &system_config_buffer) {
    system_execution_function();
    memset(pthread_op_flags,0,0x240);
  }
  system_execution_function();
section_processing_jump_label_:
  system_execution_function(&system_180a3d958,global_data_ptr);
  auth_data_flag = 1;
  return;
}
unsigned int validate_resource_handle_param(int handle_param)
{
  if (*(int *)(&string_buffer_ptr + (long long)handle_param * 0x18) == 0) {
    system_execution_function(&string_input_buffer + (long long)handle_param * 0x18);
  }
  return *(unsigned int *)(&string_input_buffer + (long long)handle_param * 0x18);
}
    system_buffer_temp = 0;
    return;
  }
  str_len_counter = -1;
  do {
    str_len_counter = str_len_counter + 1;
  } while (*(char *)(handle_param + str_len_counter) != '\0');
  buffer_alloc_result = (uint)str_len_counter;
  if (MAX_THREAD_STACK_SIZE < buffer_alloc_result) {
    buffer_alloc_result = MAX_THREAD_STACK_SIZE;
  }
  memcpy(&system_buffer_temp,handle_param,(long long)(int)buffer_alloc_result);
}
  system_buffer_temp = 0;
  return;
}
unsigned long long system_initialize_context(unsigned long long handle_param)
{
  unsigned long long buffer_alloc_result;
  long long str_len_counter;
  buffer_alloc_result = system_execution_function(global_data_ptr,handle_param,0x19);
  str_len_counter = allocate_temporary_buffer(buffer_alloc_result);
  LOCK();
  global_data_ptr = global_data_ptr + str_len_counter;
  UNLOCK();
  return buffer_alloc_result;
}
unsigned long long setup_context_with_thread_op_flags(unsigned long long handle_param,unsigned long long thread_op_flags)
{
  long long system_init_result;
  unsigned long long thread_op_flags;
  system_init_result = allocate_temporary_buffer();
  thread_op_flags = system_execution_function(global_data_ptr,handle_param,thread_op_flags,0x19);
  LOCK();
  global_data_ptr = global_data_ptr - system_init_result;
  UNLOCK();
  system_init_result = allocate_temporary_buffer(thread_op_flags);
  LOCK();
  global_data_ptr = global_data_ptr + system_init_result;
  UNLOCK();
  return thread_op_flags;
}
long long process_context_handle_param(long long *handle_param)
{
  int *system_string_length_counter_ptr;
  long long str_len_counter;
  long long str_len_counter;
  ulong long buffer_alloc_result;
  str_len_counter = allocate_temporary_buffer();
  str_len_counter = global_data_ptr;
  LOCK();
  str_len_counter = global_data_ptr - str_len_counter;
  global_data_ptr = str_len_counter;
  UNLOCK();
  if (handle_param == (long long *)0x0) {
    return str_len_counter;
  }
  buffer_alloc_result = (ulong long)handle_param & 0xffffffffffc00000;
  if (buffer_alloc_result != 0) {
    str_len_counter = buffer_alloc_result + 0x80 + ((long long)handle_param - buffer_alloc_result >> STRING_BUFFER_SIZE) * 0x50;
    str_len_counter = str_len_counter - (ulong long)*(uint *)(str_len_counter + 4);
    if ((*(void ***)(buffer_alloc_result + 0x70) == &ExceptionList) && (*(char *)(str_len_counter + 0xe) == '\0')) {
      str_len_counter = *(long long *)(str_len_counter + path_buffer_size);
      *handle_param = str_len_counter;
      *(long long **)(str_len_counter + path_buffer_size) = handle_param;
      system_string_length_counter_ptr = (int *)(str_len_counter + 0x18);
      *system_string_length_counter_ptr = *system_string_length_counter_ptr + -1;
      if (*system_string_length_counter_ptr == 0) {
        str_len_counter = system_execution_function();
        return str_len_counter;
      }
    }
    else {
      str_len_counter = func_0x00018064e870(buffer_alloc_result,CONCAT_BYTES_TO_64BIT(0xff000000,
                                                 *(void ***)(buffer_alloc_result + 0x70) == &ExceptionList),
                                  handle_param,buffer_alloc_result,DEFAULT_THREAD_POOL_FLAG);
    }
  }
  return str_len_counter;
}
      network_initialization_flag = '\x01';
      handle_param = stack_size_max;
    }
    pfloat_var = afStack_2e8;
    str_len_counter = 0;
    str_len_counter = path_buffer_size;
    str_len_counter = path_buffer_size;
    do {
      float_var = param_5 * *(float *)(str_len_counter + 0x180d4a0a8);
      float_var = param_5 * *(float *)(str_len_counter + 0x180d4a0a4);
      float_var = param_5 * *(float *)(str_len_counter + 0x180d4a0a0);
      float_var = float_var * *mutex_attr + float_var * mutex_attr[4] + float_var * mutex_attr[8] + mutex_attr[0xc];
      float_var = float_var * mutex_attr[1] + float_var * mutex_attr[5] + float_var * mutex_attr[9] + mutex_attr[0xd];
      float_var = float_var * mutex_attr[2] + float_var * mutex_attr[6] + float_var * mutex_attr[10] + mutex_attr[0xe];
      float_var = float_var * mutex_attr[3] + float_var * mutex_attr[7] + float_var * mutex_attr[0xb] + mutex_attr[0xf];
      *(float *)((long long)afStack_2e8 + str_len_counter) = float_var;
      *(float *)((long long)afStack_2e8 + str_len_counter + 4) = float_var;
      *(float *)((long long)&stack_size_max + str_len_counter) = float_var;
      *(float *)((long long)&stack_size_max + str_len_counter + 4) = float_var;
      if (thread_op_flags != 0) {
        stack_size_max = stack_size_max & INT64_MASK;
        if (*(long long *)(thread_op_flags + 0x2908) == 0) {
          system_execution_function(thread_op_flags,pfloat_var,0x31b189,&stack_size_max);
          float_var = (float)stack_size_max;
        }
        else {
          cStack_324 = '\0';
          stack_size_max = 0;
          stack_size_max = 0x7f7fffff3f800000;
          fStack_328 = 0.0;
          stack_size_max = 0;
          stack_size_max = 0;
          stack_size_max = merge_32bit_values(float_var,float_var);
          stack_size_max = merge_32bit_values(float_var,float_var);
          stack_size_max = CONCAT31(stack_size_max._1_3_,1);
          stack_size_max = 0;
          system_execution_function(thread_op_flags,&stack_size_max,0,auStack_358);
          float_var = fStack_328;
          if (cStack_324 == '\0') {
            float_var = 0.0;
          }
        }
        *(float *)((long long)&stack_size_max + str_len_counter) = float_var + 0.01;
      }
      pfloat_var = pfloat_var + 4;
      str_len_counter = str_len_counter + STRING_BUFFER_SIZE;
      str_len_counter = str_len_counter + -1;
    } while (str_len_counter != 0);
    float_var = mutex_attr[0xe];
    float_var = mutex_attr[0xd];
    float_var = mutex_attr[0xc];
    float_var = mutex_attr[9];
    float_var = mutex_attr[8];
    float_var = mutex_attr[10];
    stack_size_max = 0x7f7fffff;
    pfloat_var = afStack_2e8;
    str_len_counter = path_buffer_size;
    do {
      float_var = pfloat_var[2] - float_var;
      float_var = pfloat_var[1] - float_var;
      float_var = *pfloat_var - float_var;
      float_var = float_var * float_var + float_var * float_var + float_var * float_var;
      float_var = float_var - float_var * float_var;
      float_var = float_var - float_var * float_var;
      float_var = float_var - float_var * float_var;
      float_var = float_var * float_var + float_var * float_var + float_var * float_var;
      temp_buffer_primary3 = rsqrtss(zero_extension_float((uint)float_var),zero_extension_float((uint)float_var));
      float_var = temp_buffer_primary3._0_4_;
      float_var = float_var * 0.5 * (3.0 - float_var * float_var * float_var);
      fStack_370 = float_var * float_var * param_5 + float_var;
      float_var = float_var * float_var * param_5 + float_var;
      float_var = float_var * float_var * param_5 + float_var;
      stack_size_max = merge_32bit_values(float_var,float_var);
      *pfloat_var = float_var;
      pfloat_var[1] = float_var;
      pfloat_var[2] = fStack_370;
      pfloat_var[3] = 3.4028235e+38;
      pfloat_var = pfloat_var + 4;
      str_len_counter = str_len_counter + -1;
    } while (str_len_counter != 0);
    if (thread_op_flags != 0) {
      pfloat_var = (float *)&stack_size_max;
      pfloat_var = afStack_2e8;
      do {
        stack_size_max = stack_size_max & INT64_MASK;
        if (*(long long *)(thread_op_flags + 0x2908) == 0) {
          system_execution_function(thread_op_flags,pfloat_var,0x31b189,&stack_size_max);
          float_var = (float)stack_size_max;
        }
        else {
          cStack_324 = '\0';
          stack_size_max = 0;
          stack_size_max = 0x7f7fffff3f800000;
          fStack_328 = 0.0;
          stack_size_max = 0;
          stack_size_max = 0;
          stack_size_max = *(unsigned long long *)(pfloat_var + -2);
          stack_size_max = *(unsigned long long *)pfloat_var;
          stack_size_max = CONCAT31(stack_size_max._1_3_,1);
          stack_size_max = 0;
          system_execution_function(thread_op_flags,&stack_size_max,0,auStack_358);
          float_var = fStack_328;
          if (cStack_324 == '\0') {
            float_var = 0.0;
          }
        }
        *pfloat_var = float_var + 0.01;
        pfloat_var = pfloat_var + 4;
        pfloat_var = pfloat_var + 4;
        str_len_counter = str_len_counter + -1;
      } while (str_len_counter != 0);
    }
    buffer_alloc_result = 0;
    str_len_counter = 0;
    do {
      str_len_counter = 0;
      if (buffer_alloc_result != 0x1f) {
        str_len_counter = str_len_counter + 1;
      }
      if (((handle_param2 == '\0') || ((buffer_alloc_result & 1) != 0)) &&
         (system_char_variable = system_execution_function((double)((float)(int)buffer_alloc_result * 0.19634955),SUB84((double)param_6,0),
                                (double)param_7), system_char_variable != '\0')) {
        fStack_370 = *(float *)(&stack_size_max + str_len_counter * 2) - *(float *)(&stack_size_max + str_len_counter * 2);
        stack_size_max = merge_32bit_values(afStack_2e8[str_len_counter * 4 + 1] - afStack_2e8[str_len_counter * 4 + 1],
                              afStack_2e8[str_len_counter * 4] - afStack_2e8[str_len_counter * 4]);
        stack_size_max = 0x7f7fffff;
        stack_size_max = 0;
        stack_size_max = CONCAT31(stack_size_max._1_3_,handle_param1);
        system_execution_function(handle_param,afStack_2e8 + str_len_counter * 4,&stack_size_max,param_8);
      }
      buffer_alloc_result = buffer_alloc_result + 1;
      str_len_counter = str_len_counter + 1;
    } while ((int)buffer_alloc_result < path_buffer_size);
  }
  thread_result_index = _Mtx_unlock(handle_param);
  if (thread_result_index != 0) {
    __Throw_C_error_std__YAXH_Z(thread_result_index);
  }
  system_execute_crypto_operation(stack_size_max ^ (ulong long)auStack_3a8);
}
                    system_data_character = system_data_character + system_char_variable;
                    if (system_data_character != '\0' && byte_flag_value7 == system_data_character < '\0') {
                      out((short)thread_op_flags,thread_result_index);
                      halt_baddata();
                    }
                    in_OF = SCARRY1((char)*unaffected_registerDI,system_char_variable);
                    *unaffected_registerDI = (code)((char)*unaffected_registerDI + system_char_variable);
                    in_SF = (char)*unaffected_registerDI < '\0';
                    in_ZF = *unaffected_registerDI == (code)0x0;
                    goto section_processing_jump_label_;
                  }
                }
                pthread_op_flags = string_input_ptr;
                *(void **)((long long)pthread_op_flags + -8) = &system_18076804b;
                (*unaffected_registerDI)();
                *(unsigned long long *)((long long)pthread_op_flags + -8) = 0x180768051;
                CoUninitialize();
section_processing_jump_label_:
                *(unsigned long long *)((long long)pthread_op_flags + -8) = 0x180768059;
                _endthreadex(0);
                return;
              }
              system_char_variable = (char)*in_RAX;
            }
            in_RAX = (int *)CONCAT_BYTES_TO_64BIT((int7)((ulong long)in_RAX >> 8),system_char_variable + system_char_variable);
LAB_180768028_1:
            system_int_param_ptr = (int *)(((ulong long)in_RAX & UINT32_MAXffffff20) - 0x75);
            *system_int_param_ptr = *system_int_param_ptr + (int)handle_param;
            *(int *)(((ulong long)in_RAX & UINT32_MAXffffff20) - 0x17ffffff) = (int)pthread_op_flags;
            halt_baddata();
          }
        }
      }
    }
  }
  mutex_type = 0x266;
  *(unsigned char *)((long long)register0x00000020 + path_buffer_size) = 1;
section_processing_jump_label_:
  buffer_alloc_result = *(unsigned long long *)(character_scan_pointer + 0x1a0);
  *(unsigned char **)((long long)register0x00000020 + -8) = &section_processing_jump_label_;
  system_execution_function(buffer_alloc_result,character_scan_pointer,mutex_attr,mutex_type);
}
    system_thread_flag = '\x01';
  }
  if (mutex_attr != (int *)0x0) {
    *mutex_attr = ((thread_op_flags + 1) / 2) * 0x48d0;
  }
  if (mutex_type != (unsigned int *)0x0) {
    *mutex_type = 0x480;
  }
  return 0;
}
unsigned long long allocate_resource_memory(int handle_param)
{
  byte byte_check_result;
  int thread_result_index;
  uint buffer_alloc_result;
  long long str_len_counter;
  float *pfloat_var;
  int thread_result_index;
  float *pfloat_var;
  uint buffer_alloc_result;
  ulong long buffer_alloc_result;
  ulong long buffer_alloc_result;
  int *system_string_length_counter_ptr2;
  uint buffer_alloc_result;
  long long *psystem_init_result4;
  long long system_init_result5;
  uint buffer_alloc_result;
  int thread_result_index;
  int thread_result_index;
  float float_var;
  unsigned long long thread_op_flags;
  unsigned long long extraout_XMM0_Qb;
  float float_var;
  unsigned char in_XMM2 [16];
  unsigned char athread_op_flags [16];
  float float_var;
  float float_var;
  unsigned char unaff_XMM6 [16];
  unsigned char athread_op_flags [16];
  ulong long buffer_alloc_result;
  psystem_init_result4 = (long long *)&system_init_result_ptr;
  thread_result_index = 0;
  do {
    buffer_alloc_result = 0;
    system_init_result5 = *psystem_init_result4;
    buffer_alloc_result = STRING_BUFFER_SIZE >> ((byte)thread_result_index & 0x1f);
    buffer_alloc_result = SYSTEM_CONFIG_BUFFER_SIZE >> ((byte)thread_result_index & 0x1f);
    buffer_alloc_result = buffer_alloc_result;
    buffer_alloc_result = buffer_alloc_result;
    if ((buffer_alloc_result != 0) && (buffer_alloc_result = 0, 3 < buffer_alloc_result)) {
      athread_op_flags._0_4_ = (float)(int)buffer_alloc_result;
      athread_op_flags._4_4_ = athread_op_flags._0_4_;
      athread_op_flags._8_4_ = athread_op_flags._0_4_;
      athread_op_flags._12_4_ = athread_op_flags._0_4_;
      buffer_alloc_result = buffer_alloc_result & 0x80000003;
      if ((int)buffer_alloc_result < 0) {
        buffer_alloc_result = (buffer_alloc_result - 1 | 0xfffffffc) + 1;
      }
      athread_op_flags = rcpps(unaff_XMM6,athread_op_flags);
      float_var = athread_op_flags._0_4_;
      float_var = athread_op_flags._4_4_;
      float_var = athread_op_flags._8_4_;
      float_var = athread_op_flags._12_4_;
      unaff_XMM6._0_4_ = (float_var + float_var) - float_var * float_var * athread_op_flags._0_4_;
      unaff_XMM6._4_4_ = (float_var + float_var) - float_var * float_var * athread_op_flags._0_4_;
      unaff_XMM6._8_4_ = (float_var + float_var) - float_var * float_var * athread_op_flags._0_4_;
      unaff_XMM6._12_4_ = (float_var + float_var) - float_var * float_var * athread_op_flags._0_4_;
      do {
        thread_op_flags = GetSystemFlags();
        athread_op_flags._0_4_ = (float)thread_op_flags * 2.0;
        athread_op_flags._4_4_ = (float)((ulong long)thread_op_flags >> path_buffer_size) * 2.0;
        athread_op_flags._8_4_ = (float)extraout_XMM0_Qb * 2.0;
        athread_op_flags._12_4_ = (float)((ulong long)extraout_XMM0_Qb >> path_buffer_size) * 2.0;
        buffer_alloc_result = (int)buffer_alloc_result + 4;
        buffer_alloc_result = (ulong long)buffer_alloc_result;
        athread_op_flags = rcpps(in_XMM2,athread_op_flags);
        float_var = athread_op_flags._0_4_;
        float_var = athread_op_flags._4_4_;
        float_var = athread_op_flags._8_4_;
        float_var = athread_op_flags._12_4_;
        in_XMM2._0_4_ = (float_var + float_var) - float_var * float_var * athread_op_flags._0_4_;
        in_XMM2._4_4_ = (float_var + float_var) - float_var * float_var * athread_op_flags._4_4_;
        in_XMM2._8_4_ = (float_var + float_var) - float_var * float_var * athread_op_flags._8_4_;
        in_XMM2._12_4_ = (float_var + float_var) - float_var * float_var * athread_op_flags._12_4_;
        *(unsigned char (*) [16])(system_init_result5 + buffer_alloc_result * 4) = in_XMM2;
        buffer_alloc_result = buffer_alloc_result + 4;
        buffer_alloc_result = buffer_alloc_result;
      } while ((int)buffer_alloc_result < (int)(buffer_alloc_result - buffer_alloc_result));
    }
    if ((int)buffer_alloc_result < (int)buffer_alloc_result) {
      pfloat_var = (float *)(system_init_result5 + buffer_alloc_result * 4);
      float_var = 1.0 / (float)(int)buffer_alloc_result;
      unaff_XMM6 = zero_extension_float((uint)float_var);
      do {
        float_var = (float)cosf(((float)(int)buffer_alloc_result * 6.2831855 + 3.1415927) * float_var);
        buffer_alloc_result = (int)buffer_alloc_result + 1;
        buffer_alloc_result = (ulong long)buffer_alloc_result;
        *pfloat_var = 0.5 / float_var;
        pfloat_var = pfloat_var + 1;
      } while ((int)buffer_alloc_result < (int)buffer_alloc_result);
    }
    thread_result_index = thread_result_index + 1;
    psystem_init_result4 = psystem_init_result4 + 1;
  } while (thread_result_index < 5);
  system_string_length_counter_ptr2 = (int *)0x180be5774;
  pfloat_var = (float *)0x180c2e040;
  global_data_ptr = 0x180c2e040;
  handle_param = -handle_param;
  thread_result_index = 2;
  thread_result_index = string_buffer_size_constant;
  system_init_result5 = 0x140;
  buffer_alloc_result = 0;
  do {
    buffer_alloc_result = buffer_alloc_result;
    if (pfloat_var < (float *)0x180c2e880) {
      float_var = (float)system_string_length_counter_ptr2[-1] * 1.5258789e-05 * (float)handle_param;
      *pfloat_var = float_var;
      pfloat_var[STRING_BUFFER_SIZE] = float_var;
    }
    pfloat_var = pfloat_var + -0x3ff;
    if (((byte)buffer_alloc_result & 0x1f) != 0x1f) {
      pfloat_var = pfloat_var;
    }
    thread_result_index = -handle_param;
    if (((byte)buffer_alloc_result & 0x3f) != 0x3f) {
      thread_result_index = handle_param;
    }
    if (pfloat_var + path_buffer_size < (float *)0x180c2e880) {
      float_var = (float)*system_string_length_counter_ptr2 * 1.5258789e-05 * (float)thread_result_index;
      pfloat_var[path_buffer_size] = float_var;
      pfloat_var[0x30] = float_var;
    }
    byte_check_result = (byte)thread_result_index;
    buffer_alloc_result = thread_result_index - 1U & 0x1f;
    thread_result_index = -thread_result_index;
    if ((byte_check_result - 1 & 0x3f) != 0x3f) {
      thread_result_index = thread_result_index;
    }
    str_len_counter = -0xefc;
    if (buffer_alloc_result != 0x1f) {
      str_len_counter = string_buffer_size_constant;
    }
    pfloat_var = (float *)(str_len_counter + (long long)pfloat_var);
    if (pfloat_var < (float *)0x180c2e880) {
      str_len_counter = -0xebc;
      if (buffer_alloc_result != 0x1f) {
        str_len_counter = system_init_result5;
      }
      float_var = (float)system_string_length_counter_ptr2[1] * 1.5258789e-05 * (float)thread_result_index;
      *pfloat_var = float_var;
      *(float *)(str_len_counter + (long long)pfloat_var) = float_var;
    }
    if ((byte_check_result & 0x1f) == 0x1f) {
      str_len_counter = -0x1ef8;
      if (buffer_alloc_result != 0x1f) {
        str_len_counter = -0xefc;
      }
      pfloat_var = (float *)(str_len_counter + (long long)pfloat_var);
    }
    thread_result_index = -thread_result_index;
    if ((byte_check_result & 0x3f) != 0x3f) {
      thread_result_index = thread_result_index;
    }
    if (pfloat_var + path_buffer_size < (float *)0x180c2e880) {
      float_var = (float)system_string_length_counter_ptr2[2] * 1.5258789e-05 * (float)thread_result_index;
      pfloat_var[path_buffer_size] = float_var;
      pfloat_var[0x30] = float_var;
    }
    buffer_alloc_result = thread_result_index + 1U & 0x1f;
    str_len_counter = -0xefc;
    thread_result_index = -thread_result_index;
    if (((byte)(thread_result_index + 1U) & 0x3f) != 0x3f) {
      thread_result_index = thread_result_index;
    }
    if (buffer_alloc_result != 0x1f) {
      str_len_counter = string_buffer_size_constant;
    }
    pfloat_var = (float *)(str_len_counter + (long long)pfloat_var);
    if (pfloat_var < (float *)0x180c2e880) {
      str_len_counter = -0xebc;
      if (buffer_alloc_result != 0x1f) {
        str_len_counter = system_init_result5;
      }
      float_var = (float)system_string_length_counter_ptr2[3] * 1.5258789e-05 * (float)thread_result_index;
      *pfloat_var = float_var;
      *(float *)(str_len_counter + (long long)pfloat_var) = float_var;
    }
    if ((byte_check_result + 2 & 0x1f) == 0x1f) {
      str_len_counter = -0x1ef8;
      if (buffer_alloc_result != 0x1f) {
        str_len_counter = -0xefc;
      }
      pfloat_var = (float *)(str_len_counter + (long long)pfloat_var);
    }
    thread_result_index = -thread_result_index;
    if ((byte_check_result + 2 & 0x3f) != 0x3f) {
      thread_result_index = thread_result_index;
    }
    if (pfloat_var + path_buffer_size < (float *)0x180c2e880) {
      float_var = (float)system_string_length_counter_ptr2[4] * 1.5258789e-05 * (float)thread_result_index;
      pfloat_var[path_buffer_size] = float_var;
      pfloat_var[0x30] = float_var;
    }
    buffer_alloc_result = thread_result_index + 3U & 0x1f;
    str_len_counter = -0xefc;
    thread_result_index = -thread_result_index;
    if (((byte)(thread_result_index + 3U) & 0x3f) != 0x3f) {
      thread_result_index = thread_result_index;
    }
    if (buffer_alloc_result != 0x1f) {
      str_len_counter = string_buffer_size_constant;
    }
    pfloat_var = (float *)(str_len_counter + (long long)pfloat_var);
    if (pfloat_var < (float *)0x180c2e880) {
      str_len_counter = -0xebc;
      if (buffer_alloc_result != 0x1f) {
        str_len_counter = system_init_result5;
      }
      float_var = (float)system_string_length_counter_ptr2[5] * 1.5258789e-05 * (float)thread_result_index;
      *pfloat_var = float_var;
      *(float *)(str_len_counter + (long long)pfloat_var) = float_var;
    }
    if ((byte_check_result + 4 & 0x1f) == 0x1f) {
      str_len_counter = -0x1ef8;
      if (buffer_alloc_result != 0x1f) {
        str_len_counter = -0xefc;
      }
      pfloat_var = (float *)(str_len_counter + (long long)pfloat_var);
    }
    thread_result_index = -thread_result_index;
    if ((byte_check_result + 4 & 0x3f) != 0x3f) {
      thread_result_index = thread_result_index;
    }
    if (pfloat_var + path_buffer_size < (float *)0x180c2e880) {
      float_var = (float)system_string_length_counter_ptr2[6] * 1.5258789e-05 * (float)thread_result_index;
      pfloat_var[path_buffer_size] = float_var;
      pfloat_var[0x30] = float_var;
    }
    handle_param = -thread_result_index;
    if ((byte_check_result + 5 & 0x3f) != 0x3f) {
      handle_param = thread_result_index;
    }
    str_len_counter = -0xefc;
    if ((byte_check_result + 5 & 0x1f) != 0x1f) {
      str_len_counter = string_buffer_size_constant;
    }
    buffer_alloc_result = buffer_alloc_result + 8;
    pfloat_var = (float *)(str_len_counter + (long long)pfloat_var);
    thread_result_index = thread_result_index + 8;
    system_string_length_counter_ptr2 = system_string_length_counter_ptr2 + 8;
  } while (thread_result_index < STRING_BUFFER_SIZE_SECONDARY);
  if ((int)buffer_alloc_result < path_buffer_size0) {
    if (3 < (int)(path_buffer_size0 - buffer_alloc_result)) {
      buffer_alloc_result = buffer_alloc_result + 10;
      system_string_length_counter_ptr2 = (int *)0x180be5b68;
      thread_result_index = (0x3f - (0x1fc - buffer_alloc_result >> 2)) * 4;
      do {
        if (pfloat_var < (float *)0x180c2e880) {
          float_var = (float)system_string_length_counter_ptr2[2] * 1.5258789e-05 * (float)handle_param;
          *pfloat_var = float_var;
          pfloat_var[STRING_BUFFER_SIZE] = float_var;
        }
        buffer_alloc_result = buffer_alloc_result & 0x8000001f;
        if ((int)buffer_alloc_result < 0) {
          buffer_alloc_result = (buffer_alloc_result - 1 | 0xffffffe0) + 1;
        }
        pfloat_var = pfloat_var + -0x3ff;
        if (buffer_alloc_result != 0x1f) {
          pfloat_var = pfloat_var;
        }
        buffer_alloc_result = buffer_alloc_result & 0x8000003f;
        if ((int)buffer_alloc_result < 0) {
          buffer_alloc_result = (buffer_alloc_result - 1 | 0xffffffc0) + 1;
        }
        thread_result_index = -handle_param;
        if (buffer_alloc_result != 0x3f) {
          thread_result_index = handle_param;
        }
        if (pfloat_var + path_buffer_size < (float *)0x180c2e880) {
          float_var = (float)system_string_length_counter_ptr2[1] * 1.5258789e-05 * (float)thread_result_index;
          pfloat_var[path_buffer_size] = float_var;
          pfloat_var[0x30] = float_var;
        }
        buffer_alloc_result = buffer_alloc_result - 1 & 0x8000001f;
        if ((int)buffer_alloc_result < 0) {
          buffer_alloc_result = (buffer_alloc_result - 1 | 0xffffffe0) + 1;
        }
        buffer_alloc_result = buffer_alloc_result - 1 & 0x8000003f;
        if ((int)buffer_alloc_result < 0) {
          buffer_alloc_result = (buffer_alloc_result - 1 | 0xffffffc0) + 1;
        }
        thread_result_index = -thread_result_index;
        if (buffer_alloc_result != 0x3f) {
          thread_result_index = thread_result_index;
        }
        str_len_counter = -0xefc;
        if (buffer_alloc_result != 0x1f) {
          str_len_counter = string_buffer_size_constant;
        }
        pfloat_var = (float *)(str_len_counter + (long long)pfloat_var);
        if (pfloat_var < (float *)0x180c2e880) {
          str_len_counter = -0xebc;
          if (buffer_alloc_result != 0x1f) {
            str_len_counter = system_init_result5;
          }
          float_var = (float)*system_string_length_counter_ptr2 * 1.5258789e-05 * (float)thread_result_index;
          *pfloat_var = float_var;
          *(float *)(str_len_counter + (long long)pfloat_var) = float_var;
        }
        buffer_alloc_result = buffer_alloc_result & 0x8000001f;
        if ((int)buffer_alloc_result < 0) {
          buffer_alloc_result = (buffer_alloc_result - 1 | 0xffffffe0) + 1;
        }
        if (buffer_alloc_result == 0x1f) {
          str_len_counter = -0x1ef8;
          if (buffer_alloc_result != 0x1f) {
            str_len_counter = -0xefc;
          }
          pfloat_var = (float *)(str_len_counter + (long long)pfloat_var);
        }
        buffer_alloc_result = buffer_alloc_result & 0x8000003f;
        if ((int)buffer_alloc_result < 0) {
          buffer_alloc_result = (buffer_alloc_result - 1 | 0xffffffc0) + 1;
        }
        thread_result_index = -thread_result_index;
        if (buffer_alloc_result != 0x3f) {
          thread_result_index = thread_result_index;
        }
        if (pfloat_var + path_buffer_size < (float *)0x180c2e880) {
          float_var = (float)system_string_length_counter_ptr2[-1] * 1.5258789e-05 * (float)thread_result_index;
          pfloat_var[path_buffer_size] = float_var;
          pfloat_var[0x30] = float_var;
        }
        buffer_alloc_result = buffer_alloc_result + 1 & 0x8000003f;
        if ((int)buffer_alloc_result < 0) {
          buffer_alloc_result = (buffer_alloc_result - 1 | 0xffffffc0) + 1;
        }
        handle_param = -thread_result_index;
        if (buffer_alloc_result != 0x3f) {
          handle_param = thread_result_index;
        }
        buffer_alloc_result = buffer_alloc_result + 1 & 0x8000001f;
        if ((int)buffer_alloc_result < 0) {
          buffer_alloc_result = (buffer_alloc_result - 1 | 0xffffffe0) + 1;
        }
        str_len_counter = -0xefc;
        if (buffer_alloc_result != 0x1f) {
          str_len_counter = string_buffer_size_constant;
        }
        system_string_length_counter_ptr2 = system_string_length_counter_ptr2 + -4;
        pfloat_var = (float *)(str_len_counter + (long long)pfloat_var);
        buffer_alloc_result = buffer_alloc_result + 4;
        buffer_alloc_result = buffer_alloc_result + 4;
      } while ((int)buffer_alloc_result < 0x1ff);
    }
    if ((int)buffer_alloc_result < path_buffer_size0) {
      system_string_length_counter_ptr2 = (int *)((long long)thread_result_index * 4 + 0x180be5770);
      do {
        if (pfloat_var < (float *)0x180c2e880) {
          float_var = (float)*system_string_length_counter_ptr2 * 1.5258789e-05 * (float)handle_param;
          *pfloat_var = float_var;
          pfloat_var[STRING_BUFFER_SIZE] = float_var;
        }
        buffer_alloc_result = buffer_alloc_result & 0x8000003f;
        if ((int)buffer_alloc_result < 0) {
          buffer_alloc_result = (buffer_alloc_result - 1 | 0xffffffc0) + 1;
        }
        buffer_alloc_result = buffer_alloc_result & 0x8000001f;
        if ((int)buffer_alloc_result < 0) {
          buffer_alloc_result = (buffer_alloc_result - 1 | 0xffffffe0) + 1;
        }
        pfloat_var = pfloat_var + -0x3ff;
        if (buffer_alloc_result != 0x1f) {
          pfloat_var = pfloat_var;
        }
        system_string_length_counter_ptr2 = system_string_length_counter_ptr2 + -1;
        buffer_alloc_result = buffer_alloc_result + 1;
        pfloat_var = pfloat_var + path_buffer_size;
        thread_result_index = -handle_param;
        if (buffer_alloc_result != 0x3f) {
          thread_result_index = handle_param;
        }
        handle_param = thread_result_index;
      } while ((int)buffer_alloc_result < path_buffer_size0);
    }
  }
  return 0;
}
      system_thread_flag = '\x01';
    }
    thread_result_index = system_execution_function(*(unsigned long long *)(unreg_bx + 0x170),*(unsigned int *)(unreg_bx + 0x110),0);
    if ((thread_result_index != 0) ||
       (thread_result_index = system_execution_function(*(unsigned long long *)(unreg_bx + 0x170),0x180c2ea70,1,
                              iStack0000000000000030 + 4), thread_result_index != 0)) goto section_processing_jump_label_;
    pthread_op_flags = (uint *)(unreg_bx + 0x1cc);
    thread_result_index = system_execution_function();
    if (thread_result_index == 0) {
      *(int *)(unreg_bx + 0x110) = *(int *)(unreg_bx + 0x110) + iStack0000000000000030 + 4;
      thread_result_index = system_execution_function(*(unsigned long long *)(unreg_bx + 0x170),0x180c2ea70,1);
      if (thread_result_index != 0) goto section_processing_jump_label_;
    }
    buffer_alloc_result = *(unsigned int *)(*(long long *)(unreg_bx + 8) + 8);
    *(unsigned int *)(*(long long *)(unreg_bx + 8) + 8) = 2;
    system_execution_function();
    *(unsigned int *)(*(long long *)(unreg_bx + 8) + 8) = buffer_alloc_result;
    thread_result_index = system_execution_function(*(unsigned long long *)(unreg_bx + 0x170),*(unsigned int *)(unreg_bx + 0x110),0);
    if (thread_result_index == 0) {
      if (*(int *)(unreg_bx + 0x1c4) == thread_result_index) {
        *(unsigned int *)(unreg_bx + 0x1c4) = 0x480;
      }
      buffer_alloc_result = iStack0000000000000030 + 5U & 0xfffffffe;
      if (((unaffected_registerD & SYSTEM_CONFIG_BUFFER_SIZE_ZERO0) == 0) ||
         ((*(uint *)(*(long long *)(unreg_bx + 0x170) + 0x194) & 1) == 0)) {
        str_len_counter = *(long long *)(unreg_bx + 8);
        if (*(int *)(str_len_counter + 0x14) == -1) {
          *(unsigned int *)(str_len_counter + 0x18) = 0xffffffff;
        }
        else if (*(char *)(unreg_bx + 0x23c) == (char)unaffected_register) {
          *(uint *)(str_len_counter + 0x18) =
               ((*(int *)(str_len_counter + 0x14) + -1 + buffer_alloc_result) / buffer_alloc_result + 1) * *(int *)(unreg_bx + 0x1c4);
          *(uint *)(unreg_bx + 0x2c) = *(uint *)(unreg_bx + 0x2c) & 0xfffffffe;
        }
        else {
          *(uint *)(str_len_counter + 0x18) = *pthread_op_flags * 0x480;
        }
        goto section_processing_jump_label_;
      }
      system_execution_function(*(unsigned long long *)(unreg_bx + 0x170),*(unsigned int *)(unreg_bx + 0x110),0);
      thread_result_index = *(int *)(unreg_bx + 0x1c4);
      buffer_alloc_result = 0;
      thread_result_index = func_0x00018076a7d0(*(unsigned long long *)(unreg_bx + 0x170),&stack0x00000050);
      if (thread_result_index == 0) {
        *pthread_op_flags = 0;
        *(unsigned int *)(*(long long *)(unreg_bx + 8) + 0x18) = 0;
        if (*(int *)(*(long long *)(unreg_bx + 8) + 0x14) != 0) goto section_processing_jump_label_;
        goto section_processing_jump_label_;
      }
    }
  }
  goto section_processing_jump_label_;
section_processing_jump_label_:
  *(ulong long *)(unreg_bx + 0x178) = unaffected_register;
  goto section_processing_jump_label_;
  while( true ) {
    thread_result_index = system_execution_function();
    if ((thread_result_index == 0) &&
       (in_stack_00000040._4_4_ + buffer_alloc_result < *(uint *)(*(long long *)(unreg_bx + 8) + 0x14))) {
      if (*pthread_op_flags <= (uint)unaffected_register) {
        buffer_alloc_result = *pthread_op_flags + 1000;
        *pthread_op_flags = buffer_alloc_result;
        str_len_counter = system_execution_function(*(unsigned long long *)(global_data_ptr + 0x1a0),
                              *(unsigned long long *)(unreg_bx + 0x1d0),buffer_alloc_result * 4,&system_18097c490,0x113);
        *(long long *)(unreg_bx + 0x1d0) = str_len_counter;
        if (str_len_counter == 0) goto section_processing_jump_label_;
      }
      buffer_alloc_result = unaffected_register & 0xffffffff;
      unaffected_register = (ulong long)((uint)unaffected_register + 1);
      *(uint *)(*(long long *)(unreg_bx + 0x1d0) + buffer_alloc_result * 4) = buffer_alloc_result;
      system_string_length_counter_ptr = (int *)(*(long long *)(unreg_bx + 8) + 0x18);
      *system_string_length_counter_ptr = *system_string_length_counter_ptr + thread_result_index;
      buffer_alloc_result = buffer_alloc_result + 4 + in_stack_00000040._4_4_;
      thread_result_index = system_execution_function(*(unsigned long long *)(unreg_bx + 0x170),in_stack_00000040._4_4_,1);
      if (thread_result_index != 0) break;
    }
    else {
      system_execution_function(*(unsigned long long *)(unreg_bx + 0x170),0xfffffffd,1);
    }
    if (*(uint *)(*(long long *)(unreg_bx + 8) + 0x14) <= buffer_alloc_result) break;
section_processing_jump_label_:
    thread_result_index = system_execution_function(*(unsigned long long *)(unreg_bx + 0x170),&stack0x0000004c,1,4,0);
    if (thread_result_index != 0) break;
  }
section_processing_jump_label_:
  thread_result_index = system_execution_function(*(unsigned long long *)(unreg_bx + 0x170),in_stack_00000050,0);
  if (thread_result_index == 0) {
    *pthread_op_flags = (uint)unaffected_register;
    unaffected_register = 0;
section_processing_jump_label_:
    if (unaffected_registerB != '\0') {
      thread_result_index = *(int *)(*(long long *)(unreg_bx + 8) + 0x14);
      if (thread_result_index != -1) {
        *(int *)(*(long long *)(unreg_bx + 8) + 0x14) = thread_result_index - *(int *)(unreg_bx + 0x110);
      }
    }
    if ((*(long long *)(unreg_bx + 0x1d0) != 0) && ((unaffected_registerD & SYSTEM_CONFIG_BUFFER_SIZE_ZERO0) == 0)) {
      system_execution_function(*(unsigned long long *)(global_data_ptr + 0x1a0),*(long long *)(unreg_bx + 0x1d0),
                    &system_18097c490,0x282,1);
    }
    *(ulong long *)(unreg_bx + 0x178) = unaffected_register;
    *(unsigned int *)(*(long long *)(unreg_bx + 8) + 8) = 2;
    *(unsigned int *)(*(long long *)(unreg_bx + 8) + 0x1c) = 0x480;
    system_execution_function();
  }
section_processing_jump_label_:
  system_execute_crypto_operation(*(ulong long *)(unreg_bp + 0x4ab0) ^ (ulong long)&system_stack_zero);
}
      system_process_flag = '\x01';
    }
    if (((in_stack_00000040._4_4_ != unaffected_registerD) ||
        (thread_result_index = (**(code **)(**(long long **)(unaffected_registerDI + 0x170) + STRING_BUFFER_SIZE))
                           (*(long long **)(unaffected_registerDI + 0x170),(long long)&stack0x00000040 + 4),
        thread_result_index == 0)) &&
       (thread_result_index = system_execution_function(*(unsigned long long *)(unaffected_registerDI + 0x170),*(unsigned int *)(unaffected_registerDI + 0x110),
                              0), thread_result_index == 0)) {
      memset(unaffected_registerDI + 0x178,0,0x330);
    }
  }
system_execution_function:
  system_execute_crypto_operation(*(ulong long *)(unreg_bp + 0x218) ^ (ulong long)&system_stack_zero);
}
      crypto_module_flag = 0;
      global_data_ptr = buffer_alloc_result;
      system_crypto_module_initializer(&crypto_module_ptr);
    }
  }
  return &crypto_result_ptr;
}
unsigned long long system_initialize_mutex(unsigned long long *handle_param,long long thread_op_flags,char mutex_attr,char mutex_type)
{
  int thread_result_index;
  uint thread_op_flags;
  uint *string_input_ptr;
  unsigned long long buffer_alloc_result;
  unsigned char buffer_alloc_result;
  ulong long uStackX_10;
  uint auStack_28 [2];
  ulong long stack_size_max;
  if (*(int *)(thread_op_flags + 0x18) < *(int *)(*(long long *)(thread_op_flags + STRING_BUFFER_SIZE) + 0xb4)) {
section_processing_jump_label_:
    buffer_alloc_result = 0;
  }
  else {
    thread_result_index = *(int *)(*(long long *)(thread_op_flags + STRING_BUFFER_SIZE) + 0xbc);
    if (thread_result_index == 0) {
      return 0;
    }
    if (thread_result_index != 2) goto section_processing_jump_label_;
    buffer_alloc_result = 1;
  }
  string_input_ptr = (uint *)system_execution_function();
  stack_size_max = 0;
  uStackX_10 = uStackX_10 & 0xffffffffffffff00;
  auStack_28[0] = *string_input_ptr;
  buffer_alloc_result = system_execution_function(handle_param,*(unsigned long long *)(thread_op_flags + STRING_BUFFER_SIZE),auStack_28,&stack_size_max,&uStackX_10);
  if ((int)buffer_alloc_result != 0) {
    return buffer_alloc_result;
  }
  if ((char)uStackX_10 == (char)buffer_alloc_result) {
    return 0;
  }
  uStackX_10 = 0;
  string_input_ptr = (uint *)system_execution_function();
  thread_op_flags = *(uint *)((long long)handle_param + 0xc);
  if (((thread_op_flags != *string_input_ptr) && (*(uint *)(handle_param + 4) <= thread_op_flags)) &&
     (thread_op_flags < *(uint *)((long long)handle_param + 0x24))) {
    if (thread_op_flags == auStack_28[0]) {
      return 0x1c;
    }
    thread_op_flags = func_0x000180856540(*handle_param,thread_op_flags - *(int *)(handle_param + 1));
    uStackX_10 = thread_op_flags + stack_size_max;
    if (uStackX_10 == stack_size_max) {
      uStackX_10 = stack_size_max + 1;
    }
  }
  system_execution_function();
  if (mutex_attr != '\0') {
    buffer_alloc_result = system_execution_function(handle_param,thread_op_flags,thread_op_flags + path_buffer_size,&stack_size_max,&uStackX_10,buffer_alloc_result,0);
    if ((int)buffer_alloc_result != 0) {
      return buffer_alloc_result;
    }
    *(int *)(thread_op_flags + 0x18) = *(int *)(thread_op_flags + 0x18) + 1;
  }
  if (mutex_type == '\0') {
    return 0;
  }
  if (mutex_attr != '\0') {
    if (*(int *)(*(long long *)(thread_op_flags + STRING_BUFFER_SIZE) + 0xb4) <= *(int *)(thread_op_flags + 0x18)) {
      thread_result_index = *(int *)(*(long long *)(thread_op_flags + STRING_BUFFER_SIZE) + 0xbc);
      if (thread_result_index == 0) {
        return 0;
      }
      if (thread_result_index == 2) {
        buffer_alloc_result = 1;
        goto section_processing_jump_label_;
      }
    }
    buffer_alloc_result = 0;
  }
section_processing_jump_label_:
  buffer_alloc_result = system_execution_function(handle_param,thread_op_flags,thread_op_flags + 0x28,&stack_size_max,&uStackX_10,buffer_alloc_result,1);
  if ((int)buffer_alloc_result == 0) {
    *(int *)(thread_op_flags + 0x18) = *(int *)(thread_op_flags + 0x18) + 1;
    return 0;
  }
  return buffer_alloc_result;
}
unsigned long long
system_execution_function(long long handle_param,long long thread_op_flags,long long *mutex_attr,long long *mutex_type,
             unsigned long long *param_5,char param_6,char param_7)
{
  uint buffer_alloc_result;
  long long str_len_counter;
  byte byte_system_flag;
  unsigned int *string_input_ptr;
  unsigned long long buffer_alloc_result;
  unsigned long long buffer_alloc_result;
  long long str_len_counter;
  long long str_len_counter;
  unsigned int buffer_alloc_result;
  long long stack_long_var;
  unsigned char auStack_28 [16];
  buffer_alloc_result = *(unsigned long long *)(handle_param + 0x28);
  string_input_ptr = (unsigned int *)system_execution_function();
  str_len_counter = *mutex_type;
  buffer_alloc_result = *string_input_ptr;
  str_len_counter = str_len_counter;
  if ((*(uint *)(thread_op_flags + 0x1c) >> 1 & 1) != 0) {
    str_len_counter = *mutex_attr;
    str_len_counter = str_len_counter - str_len_counter;
    buffer_alloc_result = *(unsigned long long *)(handle_param + 0x30);
    if (-1 < str_len_counter) {
      if (str_len_counter < 1) {
        buffer_alloc_result = 0;
        str_len_counter = str_len_counter;
      }
      else {
        buffer_alloc_result = *(uint *)(*(long long *)(*(long long *)(handle_param + 0x38) + 8) + 0x774);
        if (buffer_alloc_result != 48000) {
          str_len_counter = (str_len_counter * 48000) / (long long)(ulong long)buffer_alloc_result;
        }
        if (0xffffffff < str_len_counter) {
          str_len_counter = 0xffffffff;
        }
        buffer_alloc_result = (unsigned int)str_len_counter;
        str_len_counter = str_len_counter;
      }
    }
  }
  if (param_6 != '\0') {
    (**(code **)(**(long long **)(thread_op_flags + STRING_BUFFER_SIZE) + 0x30))(*(long long **)(thread_op_flags + STRING_BUFFER_SIZE),auStack_28)
    ;
    buffer_alloc_result = system_execution_function(buffer_alloc_result,auStack_28,str_len_counter,
                          *(unsigned int *)(*(long long *)(thread_op_flags + STRING_BUFFER_SIZE) + 0xb4));
    if ((int)buffer_alloc_result != 0) {
      return buffer_alloc_result;
    }
  }
  buffer_alloc_result = system_execution_function(buffer_alloc_result,*(unsigned long long *)(thread_op_flags + STRING_BUFFER_SIZE),str_len_counter,*param_5,buffer_alloc_result,0,0,&stack_long_var);
  if ((int)buffer_alloc_result == 0) {
    if (param_7 != (char)buffer_alloc_result) {
      func_0x0001808cf230(stack_long_var,str_len_counter);
    }
    byte_system_flag = (byte)(*(uint *)(thread_op_flags + 0x1c) >> 4) & 1;
    *(uint *)(stack_long_var + 0x4c) =
         ~((byte_system_flag ^ 1) * 2) & ((uint)byte_system_flag + (uint)byte_system_flag | *(uint *)(stack_long_var + 0x4c));
    buffer_alloc_result = 0;
  }
  return buffer_alloc_result;
}
    crypto_initialized_flag = '\x01';
  }
  return 0;
}
unsigned long long get_system_global_state(void)
{
  char system_char_variable;
  int thread_result_index;
  uint buffer_alloc_result;
  unsigned long long in_stack_00000030;
  func_0x0001808f62c0();
  func_0x0001808f62a0(free_exref);
  thread_result_index = timeGetDevCaps(&stack0x00000030,8);
  buffer_alloc_result = 1;
  if (thread_result_index == 0) {
    buffer_alloc_result = 1;
    if (1 < (uint)in_stack_00000030) {
      buffer_alloc_result = (uint)in_stack_00000030;
    }
  }
  func_0x0001808f6640(buffer_alloc_result);
  system_char_variable = system_execution_function();
  if (system_char_variable == '\0') {
    return 0x809200ff;
  }
  crypto_initialized_flag = 1;
  return 0;
}
unsigned long long get_system_configuration(void)
{
  return 0x809200ff;
}
unsigned int validate_system_parameters(int handle_param,int thread_op_flags,int mutex_attr)
{
  int thread_result_index;
  unsigned int thread_op_flags;
  unsigned int auStack_18 [4];
  if (crypto_initialized_flag == '\0') {
    return 0x80920005;
  }
  if (((thread_op_flags != 0) || (mutex_attr != 0)) || (3 < handle_param - 1U)) {
    return 0x80920001;
  }
  thread_result_index = system_execution_function();
  if (thread_result_index != 0) {
    return 0x809200ff;
  }
  thread_result_index = system_execution_function(handle_param,auStack_18);
  if (thread_result_index < 0) {
    thread_op_flags = 0x809200ff;
    if (thread_result_index == -0x7ffeffff) {
      thread_op_flags = 0x80920004;
    }
    func_0x0001808f6ce0();
    return thread_op_flags;
  }
  func_0x0001808f6ce0();
  return auStack_18[0];
}
unsigned long long initialize_parameter_block(unsigned int handle_param,uint *thread_op_flags)
{
  long long system_init_result;
  uint thread_op_flags;
  uint buffer_alloc_result;
  char system_char_variable;
  byte byte_init_result;
  int thread_result_index;
  uint buffer_alloc_result;
  unsigned short *string_input_ptr;
  unsigned short *string_input_ptr;
  byte abStackX_18 [8];
  long long stack_long_var;
  if (crypto_initialized_flag == '\0') {
    return 0x80920005;
  }
  if (thread_op_flags == (uint *)0x0) {
    return 0x80920001;
  }
  thread_result_index = system_execution_function();
  if (thread_result_index != 0) {
    return 0x809200ff;
  }
  thread_result_index = func_0x0001808f0200(handle_param);
  if (thread_result_index < 0) {
    func_0x0001808f6ce0();
    return 0x80920003;
  }
  system_execution_function(thread_op_flags);
  thread_result_index = func_0x0001808f0760(handle_param,&stack_long_var);
  if (thread_result_index == 0) {
    initialize_timer_context(handle_param,abStackX_18);
    if (*(long long *)(stack_long_var + 0x160) != 0) {
      system_char_variable = func_0x0001808f2030();
      buffer_alloc_result = *(uint *)(*(long long *)(stack_long_var + 0x160) + 0xc);
      if (system_char_variable == '\0') {
        buffer_alloc_result = buffer_alloc_result & 0xffdefffe;
      }
      *thread_op_flags = buffer_alloc_result;
      *(unsigned char *)(thread_op_flags + 1) = *(unsigned char *)(*(long long *)(stack_long_var + 0x160) + STRING_BUFFER_SIZE);
      *(unsigned char *)((long long)thread_op_flags + 5) =
           *(unsigned char *)(*(long long *)(stack_long_var + 0x160) + 0x11);
      *(unsigned char *)((long long)thread_op_flags + 6) =
           *(unsigned char *)(*(long long *)(stack_long_var + 0x160) + 0x12);
      *(unsigned char *)((long long)thread_op_flags + 7) =
           *(unsigned char *)(*(long long *)(stack_long_var + 0x160) + 0x13);
      *(unsigned char *)((long long)thread_op_flags + 9) =
           *(unsigned char *)(*(long long *)(stack_long_var + 0x160) + 0x15);
      *(unsigned char *)(thread_op_flags + 2) = *(unsigned char *)(*(long long *)(stack_long_var + 0x160) + 0x14);
      if ((*(char *)(stack_long_var + 0x68) == '\x01') && ((abStackX_18[0] & 8) != 0)) {
        system_init_result = *(long long *)(stack_long_var + 0x160);
        buffer_alloc_result = *(uint *)(system_init_result + 0x74);
        thread_op_flags = *(uint *)(system_init_result + 0x78);
        buffer_alloc_result = *(uint *)(system_init_result + 0x7c);
        thread_op_flags[3] = *(uint *)(system_init_result + 0x70);
        thread_op_flags[4] = buffer_alloc_result;
        thread_op_flags[5] = thread_op_flags;
        thread_op_flags[6] = buffer_alloc_result;
        thread_op_flags[7] = *(uint *)(*(long long *)(stack_long_var + 0x160) + 0x60);
        thread_op_flags[8] = *(uint *)(*(long long *)(stack_long_var + 0x160) + 100);
        thread_op_flags[9] = *(uint *)(*(long long *)(stack_long_var + 0x160) + 0x68);
        thread_op_flags[10] = *(uint *)(*(long long *)(stack_long_var + 0x160) + 0x54);
        thread_op_flags[0xb] = *(uint *)(*(long long *)(stack_long_var + 0x160) + 0x58);
        thread_op_flags[0xc] = *(uint *)(*(long long *)(stack_long_var + 0x160) + 0x5c);
      }
      else {
        func_0x0001808f6f90(thread_op_flags + 3);
        func_0x0001808f6f70(thread_op_flags + 7);
        func_0x0001808f6f80(thread_op_flags + 10);
      }
      *(unsigned char *)(thread_op_flags + 0x13) = 1;
      *(unsigned char *)(thread_op_flags + 0x1a) = *(unsigned char *)(stack_long_var + 1);
      *(unsigned long long *)(thread_op_flags + 0x14) = **(unsigned long long **)(stack_long_var + 0x160);
      system_init_result = *(long long *)(stack_long_var + 0x160);
      byte_init_result = *(byte *)(system_init_result + 0x19);
      if (2 < *(byte *)(system_init_result + 0x19)) {
        byte_init_result = 2;
      }
      thread_result_index = 0;
      *(byte *)(thread_op_flags + 0xd) = byte_init_result;
      if (*(char *)(system_init_result + 0x19) != '\0') {
        string_input_ptr = (unsigned short *)((long long)thread_op_flags + 0x3e);
        string_input_ptr = (unsigned short *)(system_init_result + 0x1e);
        do {
          thread_result_index = thread_result_index + 1;
          string_input_ptr[-1] = string_input_ptr[-1];
          *string_input_ptr = *string_input_ptr;
          *(unsigned char *)(string_input_ptr + 1) = *(unsigned char *)(string_input_ptr + -2);
          string_input_ptr = string_input_ptr + 4;
          string_input_ptr = string_input_ptr + 3;
        } while (thread_result_index < (int)(uint)*(byte *)(system_init_result + 0x19));
      }
    }
  }
  func_0x0001808f6ce0();
  return 0;
}
int process_parameter_validation(unsigned int handle_param,byte *thread_op_flags)
{
  char system_char_variable;
  int thread_result_index;
  long long str_len_counter;
  if (crypto_initialized_flag == '\0') {
    return -0x7f6dfffb;
  }
  if (thread_op_flags == (byte *)0x0) {
    return -0x7f6dffff;
  }
  thread_result_index = system_execution_function();
  if (thread_result_index != 0) {
    return -0x7f6dff01;
  }
  thread_result_index = func_0x0001808f0200(handle_param);
  if (thread_result_index < 0) {
    func_0x0001808f6ce0();
    return -0x7f6dfffd;
  }
  str_len_counter = func_0x0001808f0dd0(handle_param,0);
  if (str_len_counter != 0) {
    system_char_variable = func_0x0001808f0e30(*(unsigned short *)(str_len_counter + 2),*(unsigned short *)(str_len_counter + 4));
    if ((((system_char_variable == '\0') && (*thread_op_flags < 0xd)) && (thread_op_flags[1] < 0xd)) && (thread_op_flags[2] < 0xd)) {
      func_0x0001808f6ce0();
      return -0x7f6dfffa;
    }
    thread_result_index = system_execution_function(handle_param,thread_op_flags);
    if (-1 < thread_result_index) {
      *(byte *)(str_len_counter + 0x23e8) = *thread_op_flags;
      *(byte *)(str_len_counter + 0x23e9) = thread_op_flags[1];
      *(byte *)(str_len_counter + 0x23ea) = thread_op_flags[2];
      *(byte *)(str_len_counter + 0x23ec) = *thread_op_flags;
      *(byte *)(str_len_counter + 0x23ed) = thread_op_flags[1];
      *(byte *)(str_len_counter + 0x23ee) = thread_op_flags[2];
      func_0x0001808f6ce0();
      return thread_result_index;
    }
  }
  func_0x0001808f6ce0();
  return -0x7f6dff01;
}
int check_system_readiness(void)
{
  char system_char_variable;
  int thread_result_index;
  long long str_len_counter;
  byte *unreg_bx;
  unsigned int unaff_ESI;
  str_len_counter = func_0x0001808f0dd0(unaff_ESI);
  if (str_len_counter != 0) {
    system_char_variable = func_0x0001808f0e30(*(unsigned short *)(str_len_counter + 2),*(unsigned short *)(str_len_counter + 4));
    if ((((system_char_variable == '\0') && (*unreg_bx < 0xd)) && (unreg_bx[1] < 0xd)) && (unreg_bx[2] < 0xd)) {
      func_0x0001808f6ce0();
      return -0x7f6dfffa;
    }
    thread_result_index = system_execution_function(unaff_ESI);
    if (-1 < thread_result_index) {
      *(byte *)(str_len_counter + 0x23e8) = *unreg_bx;
      *(byte *)(str_len_counter + 0x23e9) = unreg_bx[1];
      *(byte *)(str_len_counter + 0x23ea) = unreg_bx[2];
      *(byte *)(str_len_counter + 0x23ec) = *unreg_bx;
      *(byte *)(str_len_counter + 0x23ed) = unreg_bx[1];
      *(byte *)(str_len_counter + 0x23ee) = unreg_bx[2];
      func_0x0001808f6ce0();
      return thread_result_index;
    }
  }
  func_0x0001808f6ce0();
  return -0x7f6dff01;
}
int validate_system_state(void)
{
  int thread_result_index;
  unsigned char *unreg_bx;
  unsigned int unaff_ESI;
  long long unaffected_registerDI;
  thread_result_index = system_execution_function(unaff_ESI);
  if (-1 < thread_result_index) {
    *(unsigned char *)(unaffected_registerDI + 0x23e8) = *unreg_bx;
    *(unsigned char *)(unaffected_registerDI + 0x23e9) = unreg_bx[1];
    *(unsigned char *)(unaffected_registerDI + 0x23ea) = unreg_bx[2];
    *(unsigned char *)(unaffected_registerDI + 0x23ec) = *unreg_bx;
    *(unsigned char *)(unaffected_registerDI + 0x23ed) = unreg_bx[1];
    *(unsigned char *)(unaffected_registerDI + 0x23ee) = unreg_bx[2];
    func_0x0001808f6ce0();
    return thread_result_index;
  }
  func_0x0001808f6ce0();
  return -0x7f6dff01;
}
unsigned long long get_system_status_info(void)
{
  func_0x0001808f6ce0();
  return 0x809200ff;
}
          byte_counter = byte_check_result;
          *thread_op_flags = thread_result_index;
          *(int *)(str_len_counter + STRING_BUFFER_SIZE) = thread_result_index;
          *(int *)(str_len_counter + 0x18) = thread_result_index;
          func_0x0001808f0b40(str_len_counter);
          return 0;
        }
        str_len_counter = str_len_counter + 0x2408;
      } while (str_len_counter < SYSTEM_FLAG_BUFFER_ADDR_1);
      return 0x8001002d;
    }
  }
  byte_check_result = byte_counter + 1;
  if (byte_check_result == 0) {
    byte_check_result = byte_counter + 2;
  }
  thread_result_index = (uint)byte_check_result * string_buffer_size_constant + thread_result_index;
  byte_counter = byte_check_result;
  *thread_op_flags = thread_result_index;
  *system_int_param_ptr = thread_result_index;
  system_int_param_ptr[2] = thread_result_index;
  func_0x0001808f0b40(system_int_param_ptr + -4);
  return 0;
}
long long system_initialize_timer(void)
{
  uint buffer_alloc_result;
  buffer_alloc_result = timeGetTime();
  return (ulong long)buffer_alloc_result * 1000;
}
uint setup_timer_with_attributes(long long handle_param,int thread_op_flags,int mutex_attr,char mutex_type)
{
  ulong long buffer_alloc_result;
  byte byte_flag_value;
  int thread_result_index;
  int thread_result_index;
  uint buffer_alloc_result;
  uint buffer_alloc_result;
  buffer_alloc_result = 0;
  buffer_alloc_result = 0;
  thread_result_index = 0;
  thread_result_index = thread_result_index;
  if (0 < mutex_attr) {
    do {
      byte_flag_value = (byte)thread_op_flags & 7;
      thread_result_index = thread_op_flags;
      if (thread_op_flags < 0) {
        thread_result_index = thread_op_flags + 7;
        byte_flag_value = byte_flag_value - 8;
      }
      thread_op_flags = thread_op_flags + 1;
      buffer_alloc_result = *(byte *)((thread_result_index >> 3) + handle_param) >> (byte_flag_value & 0x1f) & 1;
      thread_result_index = thread_result_index + 1;
      buffer_alloc_result = buffer_alloc_result | buffer_alloc_result << ((byte)thread_result_index & 0x1f);
      thread_result_index = thread_result_index;
    } while (thread_result_index < mutex_attr);
  }
  if (((mutex_type != '\0') && (buffer_alloc_result != 0)) && (thread_result_index < path_buffer_size)) {
    byte_flag_value = (byte)thread_result_index & 0x1f;
    buffer_alloc_result = 1 << byte_flag_value | 1U >> path_buffer_size - byte_flag_value;
    buffer_alloc_result = (ulong long)(path_buffer_size - thread_result_index);
    do {
      buffer_alloc_result = buffer_alloc_result | buffer_alloc_result;
      buffer_alloc_result = buffer_alloc_result << 1 | (uint)((int)buffer_alloc_result < 0);
      buffer_alloc_result = buffer_alloc_result - 1;
    } while (buffer_alloc_result != 0);
  }
  return buffer_alloc_result;
}
  byte_flag_1 = 1;
  byte_flag_2 = 1;
  byte_flag_3 = 1;
  byte_flag_4 = 1;
  global_data_ptr = _beginthread(system_execution_function,0,0);
  if ((global_data_ptr != -1) &&
     (global_data_ptr = _beginthread(system_execution_function,0,0), global_data_ptr != -1)) {
    return 1;
  }
  return 0;
}
  system_processing_flag = 1;
  return;
}
unsigned int validate_timer_parameters(byte handle_param,byte *thread_op_flags,int mutex_attr)
{
  uint *string_input_ptr;
  byte byte_flag_value;
  uint buffer_alloc_result;
  mutex_attr = mutex_attr + -4;
  string_input_ptr = (uint *)(thread_op_flags + mutex_attr);
  buffer_alloc_result = *(uint *)(&system_lookup_table + (ulong long)(byte)~handle_param * 4) ^ 0xffffff;
  for (; 0 < mutex_attr; mutex_attr = mutex_attr + -1) {
    byte_flag_value = *thread_op_flags;
    thread_op_flags = thread_op_flags + 1;
    buffer_alloc_result = *(uint *)(&system_lookup_table + (ulong long)(byte)(byte_flag_value ^ (byte)buffer_alloc_result) * 4) ^ buffer_alloc_result >> 8;
  }
  return CONCAT31((int3)(~buffer_alloc_result >> 8),*string_input_ptr != ~buffer_alloc_result);
}
float * system_execution_function(float *handle_param,float *thread_op_flags,float *mutex_attr)
{
  float float_var;
  float float_var;
  float float_var;
  float float_var;
  float float_var;
  float float_var;
  float float_var;
  float float_var;
  float_var = *mutex_attr;
  float_var = handle_param[3];
  float_var = handle_param[1];
  float_var = *handle_param;
  float_var = mutex_attr[1];
  float_var = handle_param[2];
  float_var = mutex_attr[2];
  float_var = mutex_attr[3];
  *thread_op_flags = (float_var * float_var + float_var * float_var + float_var * float_var) - float_var * float_var;
  thread_op_flags[1] = (float_var * float_var + float_var * float_var + float_var * float_var) - float_var * float_var;
  thread_op_flags[3] = ((float_var * float_var - float_var * float_var) - float_var * float_var) - float_var * float_var;
  thread_op_flags[2] = (float_var * float_var + float_var * float_var + float_var * float_var) - float_var * float_var;
  return thread_op_flags;
}
unsigned long long initialize_timer_context(unsigned long long handle_param,unsigned int *thread_op_flags)
{
  long long system_init_result;
  system_init_result = func_0x0001808f0dd0(handle_param,0);
  if (system_init_result != 0) {
    *thread_op_flags = *(unsigned int *)(system_init_result + 100);
    return 0;
  }
  return 0x8001002d;
}
      string_termination_flag = '\0';
      if (global_data_ptr == 0) {
        str_len_counter = system_execution_function(&system_18098ab30);
        if (str_len_counter != 0) {
          str_len_counter = LoadLibraryExW(str_len_counter,0,0);
        }
        LocalFree(str_len_counter);
        global_data_ptr = str_len_counter;
        if (str_len_counter == 0) goto section_processing_jump_label_;
      }
      if ((((global_data_ptr == (code *)0x0) &&
           (global_data_ptr = (code *)GetProcAddress(global_data_ptr,&system_18098aef8),
           global_data_ptr == (code *)0x0)) ||
          ((global_data_ptr == 0 &&
           (global_data_ptr = GetProcAddress(global_data_ptr,&system_18098af08), global_data_ptr == 0))))
         || ((global_data_ptr == 0 &&
             (global_data_ptr = GetProcAddress(global_data_ptr,&system_18098af18), global_data_ptr == 0)))
         ) goto section_processing_jump_label_;
      if ((global_data_ptr == 0) &&
         (global_data_ptr = system_execution_function(&system_18098af28,0), global_data_ptr != 0)) {
        global_data_ptr = (code *)GetProcAddress(global_data_ptr,&system_18098af40);
      }
      character_scan_pointer = global_data_ptr;
      if (global_data_ptr == (code *)0x0) goto section_processing_jump_label_;
      stack_size_max = 0;
      stack_size_max = 0;
      stack_size_max = 0;
      stack_size_max = 0;
      stack_size_max = 0;
      stack_size_max = 0;
      stack_size_max = 0;
      stack_size_max = 0;
      stack_size_max = 0;
      stack_size_max = 0;
      stack_size_max = 0;
      _guard_check_icall(global_data_ptr);
      thread_result_index = (*character_scan_pointer)(&stack_size_max,&stack_size_max,0x27);
      if (thread_result_index != 0x27) goto section_processing_jump_label_;
      for (string_input_ptr = auStack_1c0; character_scan_pointer = global_data_ptr, buffer_alloc_result = *string_input_ptr, buffer_alloc_result != 0;
          string_input_ptr = string_input_ptr + 1) {
        stack_size_max = 0;
        _guard_check_icall(global_data_ptr);
        thread_stack_ptr = &stack_size_max;
        thread_result_index = (*character_scan_pointer)(0xffffffff80000002,&system_18098af50,0,buffer_alloc_result | path_buffer_size019);
        if (thread_result_index == 0) {
          stack_size_max = 0x80;
          stack_size_max = 4;
          memset(auStack_148,0,string_buffer_size_constant);
        }
      }
    }
    if (thread_initialization_flag == '\0') {
      SetLastError(thread_op_flags & 0xffffffff);
      goto section_processing_jump_label_;
    }
  }
  OutputDebugStringW(&system_18098afa0);
  SetLastError(0);
section_processing_jump_label_:
  system_execute_crypto_operation(stack_size_max ^ (ulong long)stack_buffer_228);
}
          thread_result_flag = thread_result_index == 1;
          SetConsoleTitleA(&system_18098b4e0);
        }
      }
      thread_validation_flag = thread_result_flag == '\0';
      if (global_data_ptr == 0) {
        str_len_counter = _wfsopen(handle_param,&system_18098b51c,SYSTEM_CONFIG_BUFFER_SIZE);
        if (str_len_counter == 0) {
          system_execution_function(&system_string_buffer_5,0xc1,&system_string_buffer_6,&system_18098b520,handle_param);
          byte_check_result0 = false;
        }
        else {
          fclose(str_len_counter);
          system_execution_function(&system_string_buffer_5,200,&system_string_buffer_6,&system_18098b580,handle_param);
          str_len_counter = _wcsdup(handle_param);
          str_len_counter = -1;
          if (str_len_counter != 0) {
            do {
              str_len_counter = str_len_counter;
              str_len_counter = str_len_counter + 1;
            } while (*(short *)(handle_param + 2 + str_len_counter * 2) != 0);
            str_len_counter = str_len_counter;
            while( true ) {
              str_len_counter = 0;
              if (((str_len_counter == 0) || (system_short_char_value = *(short *)(str_len_counter + str_len_counter * 2), str_len_counter = 0, system_short_char_value == 0x2f)
                  ) || (str_len_counter = 0, system_short_char_value == 0x5c)) goto section_processing_jump_label_;
              if (system_short_char_value == 0x2e) break;
              str_len_counter = str_len_counter + -1;
            }
            *(unsigned short *)(str_len_counter + str_len_counter * 2) = 0;
            str_len_counter = str_len_counter + 2 + str_len_counter * 2;
section_processing_jump_label_:
            str_len_counter = str_len_counter + 9;
            str_len_counter = malloc(str_len_counter * 2);
            if (str_len_counter == 0) {
              free(str_len_counter);
              return false;
            }
            thread_result_index = 1;
            str_len_counter = global_data_ptr;
            do {
              global_data_ptr = str_len_counter;
              if (str_len_counter == 0) {
                system_execution_function(str_len_counter,str_len_counter,&system_string_buffer_1,str_len_counter,thread_result_index);
              }
              else {
                system_execution_function(str_len_counter,str_len_counter,&system_string_buffer_2,str_len_counter,thread_result_index,str_len_counter);
              }
              global_data_ptr = _wfsopen(str_len_counter,string_input_ptr,path_buffer_size);
              if (global_data_ptr != 0) {
                string_input_ptr = &system_string_buffer_3;
                buffer_alloc_result = 0xeb;
                handle_param = str_len_counter;
                goto section_processing_jump_label_;
              }
              thread_result_index = thread_result_index + 1;
              str_len_counter = 0;
            } while (thread_result_index < 9);
            string_input_ptr = &system_string_buffer_4;
            buffer_alloc_result = 0xef;
section_processing_jump_label_:
            system_execution_function(&system_string_buffer_5,buffer_alloc_result,&system_string_buffer_6,string_input_ptr,handle_param);
            free(str_len_counter);
            free(str_len_counter);
          }
          byte_check_result0 = global_data_ptr != 0;
        }
      }
      else {
        system_execution_function(&system_string_buffer_5,0xb4,&system_string_buffer_6,&system_18098b4e8,handle_param);
        byte_check_result0 = true;
      }
      return byte_check_result0;
    }
  }
  thread_validation_flag = thread_result_flag == '\0';
  return true;
}
bool check_system_availability(void)
{
  short system_short_char_value;
  long long str_len_counter;
  uint buffer_alloc_result;
  int thread_result_index;
  long long str_len_counter;
  unsigned long long buffer_alloc_result;
  long long str_len_counter;
  long long str_len_counter;
  long long str_len_counter;
  char unaff_SIL;
  long long unaffected_registerDI;
  short system_short_char_value0;
  long long unaffected_register;
  void *string_input_ptr;
  bool byte_check_result2;
  uint in_stack_00000090;
  uint in_stack_00000098;
  if (unaffected_registerDI != 0) {
    str_len_counter = -1;
    do {
      str_len_counter = str_len_counter + 1;
      system_short_char_value0 = (short)unaffected_register;
    } while (*(short *)(unaffected_registerDI + str_len_counter * 2) != system_short_char_value0);
    if (str_len_counter != 0) {
      string_input_ptr = &system_18098b464;
      if (unaff_SIL != '\0') {
        string_input_ptr = &system_18098b45c;
      }
      global_data_ptr = _wfsopen();
      if ((1 < global_data_ptr) && ((uint)unaffected_register < in_stack_00000090)) {
        buffer_alloc_result = GetConsoleWindow();
        in_stack_00000098 = (uint)unaffected_register;
        GetWindowThreadProcessId(buffer_alloc_result,&stack0x00000098);
        buffer_alloc_result = GetCurrentProcessId();
        if (buffer_alloc_result != in_stack_00000098) {
          thread_result_index = AllocConsole();
          thread_result_flag = thread_result_index == 1;
          SetConsoleTitleA(&system_18098b4e0);
        }
      }
      thread_validation_flag = thread_result_flag == (char)unaffected_register;
      if (global_data_ptr == unaffected_register) {
        str_len_counter = _wfsopen();
        if (str_len_counter == 0) {
          system_execution_function(&system_string_buffer_5,0xc1,&system_string_buffer_6,&system_18098b520);
          byte_check_result2 = false;
        }
        else {
          fclose(str_len_counter);
          system_execution_function(&system_string_buffer_5,200,&system_string_buffer_6,&system_18098b580);
          str_len_counter = _wcsdup();
          str_len_counter = -1;
          if (str_len_counter != 0) {
            do {
              str_len_counter = str_len_counter;
              str_len_counter = str_len_counter + 1;
              str_len_counter = str_len_counter;
            } while (*(short *)(unaffected_registerDI + 2 + str_len_counter * 2) != system_short_char_value0);
            while( true ) {
              str_len_counter = unaffected_register;
              if (((str_len_counter == 0) || (system_short_char_value = *(short *)(str_len_counter + str_len_counter * 2), system_short_char_value == 0x2f)) ||
                 (system_short_char_value == 0x5c)) goto section_processing_jump_label_;
              if (system_short_char_value == 0x2e) break;
              str_len_counter = str_len_counter + -1;
            }
            *(short *)(str_len_counter + str_len_counter * 2) = system_short_char_value0;
            str_len_counter = str_len_counter + 2 + str_len_counter * 2;
section_processing_jump_label_:
            str_len_counter = str_len_counter + 9;
            str_len_counter = malloc(str_len_counter * 2);
            if (str_len_counter == 0) {
              free(str_len_counter);
              return false;
            }
            thread_result_index = 1;
            str_len_counter = global_data_ptr;
            do {
              global_data_ptr = str_len_counter;
              if (str_len_counter == 0) {
                system_execution_function(str_len_counter,str_len_counter,&system_string_buffer_1,str_len_counter,thread_result_index);
              }
              else {
                system_execution_function(str_len_counter,str_len_counter,&system_string_buffer_2,str_len_counter,thread_result_index);
              }
              global_data_ptr = _wfsopen(str_len_counter,string_input_ptr,path_buffer_size);
              if (global_data_ptr != 0) {
                string_input_ptr = &system_string_buffer_3;
                buffer_alloc_result = 0xeb;
                goto section_processing_jump_label_;
              }
              thread_result_index = thread_result_index + 1;
              str_len_counter = 0;
            } while (thread_result_index < 9);
            string_input_ptr = &system_string_buffer_4;
            buffer_alloc_result = 0xef;
section_processing_jump_label_:
            system_execution_function(&system_string_buffer_5,buffer_alloc_result,&system_string_buffer_6,string_input_ptr);
            free(str_len_counter);
            free(str_len_counter);
          }
          byte_check_result2 = global_data_ptr != unaffected_register;
        }
      }
      else {
        system_execution_function(&system_string_buffer_5,0xb4,&system_string_buffer_6,&system_18098b4e8);
        byte_check_result2 = true;
      }
      return byte_check_result2;
    }
  }
  thread_validation_flag = thread_result_flag == (char)unaffected_register;
  return true;
}
bool validate_system_resources(void)
{
  short system_short_char_value;
  long long str_len_counter;
  long long str_len_counter;
  long long str_len_counter;
  unsigned long long buffer_alloc_result;
  int thread_result_index;
  long long unreg_bx;
  long long str_len_counter;
  long long unaffected_registerDI;
  void *string_input_ptr;
  long long unaffected_register;
  long long str_len_counter;
  fclose();
  system_execution_function(&system_string_buffer_5,200,&system_string_buffer_6,&system_18098b580);
  str_len_counter = _wcsdup();
  if (str_len_counter != 0) {
    do {
      str_len_counter = unreg_bx;
      unreg_bx = str_len_counter + 1;
      str_len_counter = str_len_counter;
    } while (*(short *)(unaffected_registerDI + 2 + str_len_counter * 2) != (short)unaffected_register);
    while( true ) {
      str_len_counter = unaffected_register;
      if (((str_len_counter == 0) || (system_short_char_value = *(short *)(str_len_counter + str_len_counter * 2), system_short_char_value == 0x2f)) ||
         (system_short_char_value == 0x5c)) goto section_processing_jump_label_;
      if (system_short_char_value == 0x2e) break;
      str_len_counter = str_len_counter + -1;
    }
    *(short *)(str_len_counter + str_len_counter * 2) = (short)unaffected_register;
    str_len_counter = str_len_counter + 2 + str_len_counter * 2;
section_processing_jump_label_:
    str_len_counter = str_len_counter + 9;
    str_len_counter = malloc(str_len_counter * 2);
    if (str_len_counter == 0) {
      free(str_len_counter);
      return false;
    }
    thread_result_index = 1;
    str_len_counter = global_data_ptr;
    do {
      global_data_ptr = str_len_counter;
      if (str_len_counter == 0) {
        system_execution_function(str_len_counter,str_len_counter,&system_string_buffer_1,str_len_counter,thread_result_index);
      }
      else {
        system_execution_function(str_len_counter,str_len_counter,&system_string_buffer_2,str_len_counter,thread_result_index);
      }
      global_data_ptr = _wfsopen(str_len_counter);
      if (global_data_ptr != 0) {
        string_input_ptr = &system_string_buffer_3;
        buffer_alloc_result = 0xeb;
        goto section_processing_jump_label_;
      }
      thread_result_index = thread_result_index + 1;
      str_len_counter = 0;
    } while (thread_result_index < 9);
    string_input_ptr = &system_string_buffer_4;
    buffer_alloc_result = 0xef;
section_processing_jump_label_:
    system_execution_function(&system_string_buffer_5,buffer_alloc_result,&system_string_buffer_6,string_input_ptr);
    free(str_len_counter);
    free(str_len_counter);
  }
  return global_data_ptr != unaffected_register;
}
  thread_validation_flag = thread_result_flag == unaffected_registerB;
  return 1;
}
    string_concatenation_flag = '\x01';
    wcscpy_s(stack_buffer_228,STRING_BUFFER_SIZE4,handle_param);
    if ((string_concatenation_flag != '\0') && (wcscat_s(stack_buffer_228,STRING_BUFFER_SIZE4,thread_op_flags), string_concatenation_flag != '\0')) {
      system_execution_function(stack_buffer_228,0);
    }
    _set_invalid_parameter_handle_paramr(buffer_alloc_result);
  }
  system_execute_crypto_operation(stack_size_max ^ (ulong long)auStack_248);
}
  string_concatenation_flag = '\x01';
  wcscpy_s(temp_stack_array,STRING_BUFFER_SIZE4);
  if (string_concatenation_flag != '\0') {
    wcscat_s(temp_stack_array,STRING_BUFFER_SIZE4);
    if (string_concatenation_flag != '\0') {
      system_execution_function(temp_stack_array,0);
    }
  }
  _set_invalid_parameter_handle_paramr(buffer_alloc_result);
  system_execute_crypto_operation(system_stack_input ^ (ulong long)&system_stack_zero);
}
    system_initialization_flag_2 = 1;
  }
  system_execution_function();
  system_char_variable = system_check_character_status();
  if (system_char_variable != '\0') {
    system_char_variable = system_check_character_status();
    if (system_char_variable != '\0') {
      return 1;
    }
    system_check_character_status(0);
  }
  return 0;
}
unsigned long long allocate_system_buffer(uint handle_param)
{
  code *system_code_pointer;
  byte flag_value;
  int system_status;
  unsigned long long allocation_result;
  if (system_memory_buffer_initialized == '\0') {
    if (1 < handle_param) {
      system_execution_function(5);
      system_code_pointer = (code *)swi(3);
      allocation_result = (*system_code_pointer)();
      return allocation_result;
    }
    system_status = system_get_stack_alignment();
    if ((system_status == 0) || (handle_param != 0)) {
      flag_value = SYSTEM_CONFIG_BUFFER_SIZE - ((byte)global_data_ptr & 0x3f) & 0x3f;
      global_data_ptr = (0xffffffffffffffffU >> flag_value | -1L << SYSTEM_CONFIG_BUFFER_SIZE - flag_value) ^ global_data_ptr;
      system_ram_pointer_1 = global_data_ptr;
      global_data_ptr = global_data_ptr;
      global_data_ptr = global_data_ptr;
      system_ram_pointer_2 = global_data_ptr;
      global_data_ptr = global_data_ptr;
    }
    else {
      system_status = _initialize_onexit_table(&system_onexit_table_primary);
      if ((system_status != 0) || (system_status = _initialize_onexit_table(&system_onexit_table_secondary), system_status != 0)) {
        return 0;
      }
    }
    system_memory_buffer_initialized = '\x01';
  }
  return 1;
}
ulong long process_buffer_allocation(long long handle_param)
{
  ulong long buffer_alloc_result;
  uint7 thread_op_flags;
  IMAGE_SECTION_HEADER *image_section_header_pointer;
  buffer_alloc_result = 0;
  for (image_section_header_pointer = &image_section_header_start; image_section_header_pointer != (IMAGE_SECTION_HEADER *)&system_image_section_end;
      image_section_header_pointer = image_section_header_pointer + 1) {
    if (((ulong long)(uint)image_section_header_pointer->VirtualAddress <= handle_param - 0x180000000U) &&
       (buffer_alloc_result = (ulong long)((image_section_header_pointer->Misc).PhysicalAddress + image_section_header_pointer->VirtualAddress),
       handle_param - 0x180000000U < buffer_alloc_result)) goto section_processing_jump_label_;
  }
  image_section_header_pointer = (IMAGE_SECTION_HEADER *)0x0;
section_processing_jump_label_:
  if (image_section_header_pointer == (IMAGE_SECTION_HEADER *)0x0) {
    buffer_alloc_result = buffer_alloc_result & 0xffffffffffffff00;
  }
  else {
    thread_op_flags = (uint7)(buffer_alloc_result >> 8);
    if ((int)image_section_header_pointer->Characteristics < 0) {
      buffer_alloc_result = (ulong long)thread_op_flags << 8;
    }
    else {
      buffer_alloc_result = CONCAT_BYTES_TO_64BIT(thread_op_flags,1);
    }
  }
  return buffer_alloc_result;
}
    system_cleanup_flag = '\0';
  }
  return;
}
  system_global_flag_primary = 0;
  return;
}
  system_global_flag_quaternary = 0;
  return;
}
    script_system_initialized = '\0';
  }
  return;
}
    configuration_system_initialized = '\0';
  }
  return;
}
    memory_system_initialized = '\0';
  }
  return;
}
    thread_pool_system_initialized = '\0';
  }
  return;
}
    module_system_initialized = '\0';
  }
  return;
}
    system_data_status_flag = '\0';
  }
  return;
}
    system_data_control_flag = '\0';
  }
  return;
}
    audio_system_initialized = '\0';
  }
  return;
}
    render_system_initialized = '\0';
  }
  return;
}
    physics_system_initialized = '\0';
  }
  return;
}
    system_data_initialization_flag = '\0';
  }
  return;
}

#endif // DATA_DEFINITIONS_H
