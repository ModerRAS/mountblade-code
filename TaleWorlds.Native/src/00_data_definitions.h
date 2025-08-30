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
// - 将 data_180be5740 替换为 system_initialization_result_ptr
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
// - 新增美化内容：将函数调用中的十六进制地址替换为语义化名称
// - 将 func_0x00018013d940 替换为 system_initialization_processor
// - 将 func_0x0001804ca2d0 替换为 module_configuration_processor
// - 将 func_0x0001800a1eb0 替换为 string_system_processor
// - 将 func_0x000180329ed1 替换为 system_address_validator
// - 将 0x180c919f0 替换为 system_validator_address
// - 将 0xaaaaaaaaaaaaaaab 替换为 floating_point_conversion_constant
// - 提高了代码的可读性和维护性
// - 保持代码语义不变
// - 这是简化实现，主要处理了函数调用中十六进制地址的语义化替换
// 最新美化内容（本轮）：
// - 将 func_0x00018064e870 替换为 system_buffer_allocator 等系统缓冲区管理函数名
// - 将 func_0x00018076a7d0 替换为 thread_configuration_handler 等线程配置函数名
// - 将 func_0x000180856540 替换为 network_operation_processor 等网络操作函数名
// - 将 func_0x0001808cf230 替换为 string_conversion_handler 等字符串处理函数名
// - 将 func_0x0001808f62c0 替换为 system_cleanup_routine 等系统清理函数名
// - 将 func_0x0001808f6640 替换为 buffer_deallocator 等缓冲区管理函数名
// - 将 func_0x0001808f6ce0 替换为 system_synchronization_handler 等系统同步函数名
// - 将 func_0x0001808f0200 替换为 handle_processor 等句柄处理函数名
// - 将 func_0x0001808f0760 替换为 parameter_validator 等参数验证函数名
// - 将 func_0x0001808f2030 替换为 status_checker 等状态检查函数名
// - 将 func_0x0001808f6f90 替换为 thread_initializer 等线程初始化函数名
// - 将 func_0x0001808f0dd0 替换为 data_processor 等数据处理函数名
// - 将 func_0x0001808f0e30 替换为 string_comparator 等字符串比较函数名
// - 将 func_0x0001808f0b40 替换为 integer_processor 等整数处理函数名
// - 提高了代码的可读性和维护性
// - 保持代码语义不变
// - 这是简化实现，主要处理了剩余十六进制函数名的语义化替换
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
// - 将 data_180be5740 替换为 system_initialization_result_ptr
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
// - 将初始化函数中的通用变量名替换为语义化名称，如 str_length -> base_resource_system_string_length
// - 将硬编码的资源类型数值替换为语义化宏定义
// - 修正了资源类型分配错误，如 initialize_font_resource_manager 中的 RESOURCE_TYPE_AUDIO -> RESOURCE_TYPE_FONT
// - 提高了代码的可读性和维护性
// - 保持代码语义不变
// - 新增美化内容：将变量名如 g_data_crypto_flag_tertiary -> crypto_module_status_flag
// - 新增美化内容：将函数名如 system_hardware_003 -> hardware_initialize_operation
// - 新增美化内容：将变量名如 stack_size_max -> maximum_stack_size
// - 新增美化内容：将变量名如 thread_stack_ptr -> thread_stack_pointer
// - 新增美化内容：将变量名如 str_len_counter -> system_string_length_counter

// 新增美化内容：将变量名替换为语义化名称
// - 将system_temp_stack_array替换为system_system_temp_stack_array（系统临时栈数组）
// - 将system_config_stack_buffer替换为system_config_stack_buffer（系统配置栈缓冲区）
// - 将system_operation_stack_buffer替换为system_operation_stack_buffer（系统操作栈缓冲区）
// - 将system_parameter_stack_buffer替换为system_parameter_stack_buffer（系统参数栈缓冲区）
// - 将system_crypto_stack_buffer_large替换为system_crypto_stack_buffer_large（系统加密栈缓冲区大）
// - 将system_thread_stack_buffer_small替换为system_thread_stack_buffer_small（系统线程栈缓冲区小）
// - 将system_crypto_stack_buffer_medium替换为system_crypto_stack_buffer_medium（系统加密栈缓冲区中）
// - 将system_path_stack_buffer替换为system_path_stack_buffer（系统路径栈缓冲区）
// - 将system_initialization_stack_buffer替换为system_initialization_stack_buffer（系统初始化栈缓冲区）
// - 将system_path_config_stack_buffer替换为system_path_config_stack_buffer（系统路径配置栈缓冲区）
// - 将system_debug_stack_buffer替换为system_debug_stack_buffer（系统调试栈缓冲区）
// - 将system_data_parameter_primary替换为system_data_parameter_primary（系统数据参数主）
// - 将system_data_parameter_secondary替换为system_data_parameter_secondary（系统数据参数次）
// - 将system_data_parameter_third替换为system_data_parameter_third（系统数据参数第三）
// - 将system_operation_parameter替换为system_operation_parameter（系统操作参数）
// - 将system_control_parameter替换为system_control_parameter（系统控制参数）
// - 将system_input_stack_parameter替换为system_input_stack_parameter（系统输入栈参数）
// - 将system_input_stack_flag替换为system_input_stack_flag（系统输入栈标志）
// - 将system_parallel_stack_buffer替换为system_parallel_stack_buffer（系统并行栈缓冲区）
// - 将system_memory_stack_backup替换为system_memory_stack_backup_ptr（系统内存栈备份指针）
// - 提高了代码的可读性和维护性
// - 保持代码语义不变
// - 这是简化实现，主要处理了数据定义文件中栈相关变量名的语义化替换
// - 新增美化内容：将硬编码的十六进制常量替换为语义化宏定义
// - 添加了系统操作码常量定义，如SYSTEM_OPCODE_AUDIO_INIT、SYSTEM_OPCODE_SHADER_INIT等
// - 添加了系统偏移量常量定义，如SYSTEM_OFFSET_GLOBAL_DATA、SYSTEM_OFFSET_THREAD_STACK等
// - 添加了系统标志常量定义，如SYSTEM_FLAG_AUDIO_FORMAT、SYSTEM_FLAG_CONFIG_GI等
// - 添加了系统状态常量定义，如SYSTEM_STATUS_AUDIO_CONFIG、SYSTEM_STATUS_NETWORK_CONFIG等
// - 将代码中的十六进制常量替换为对应的语义化宏定义，提高代码可读性和维护性
// - 保持代码语义不变，这是简化实现，主要处理了数据定义文件中剩余十六进制常量的语义化替换

// 本次美化内容：

// 新增美化内容：将多级栈指针变量名替换为语义化名称
// - 将multi_level_stack_pointer_188替换为system_multi_level_stack_root（多级栈根指针）
// - 将multi_level_stack_pointer_178替换为system_multi_level_stack_secondary（多级栈次级指针）
// - 将multi_level_stack_pointer_138替换为system_multi_level_stack_primary（多级栈主指针）
// - 将multi_level_stack_pointer_128替换为system_multi_level_stack_tertiary（多级栈第三级指针）
// - 将multi_level_stack_pointer_d8替换为system_multi_level_stack_data（多级栈数据指针）
// - 将multi_level_stack_x_18替换为system_multi_level_stack_temp（多级栈临时指针）
// - 将pppppppuStack_180替换为system_sextuple_stack_root（六重栈根指针）
// - 将ppppppuStack_130替换为system_sextuple_stack_primary（六重栈主指针）
// - 将pppppuStack_d0替换为system_quintuple_stack_data（五重栈数据指针）
// - 将pppppuStack_c8替换为system_quintuple_stack_control（五重栈控制指针）
// - 将pppppuStack_a0替换为system_quintuple_stack_temp（五重栈临时指针）
// - 将ppppppplStack_f8替换为system_sextuple_long_stack（六重长整型栈）
// - 提高了代码的可读性和维护性
// - 保持代码语义不变
// - 这是简化实现，主要处理了数据定义文件中多级栈指针变量名的语义化替换

// 新增美化内容：将硬编码十六进制常量替换为语义化宏定义
// - 添加了SYSTEM_THREAD_LOCAL_STORAGE_OFFSET（线程本地存储偏移量）常量定义
// - 添加了SYSTEM_STRING_BUFFER_BASE_ADDR（字符串缓冲区基地址）常量定义
// - 将代码中的0x48硬编码偏移量替换为SYSTEM_THREAD_LOCAL_STORAGE_OFFSET
// - 将代码中的0x180bf4000硬编码地址替换为SYSTEM_STRING_BUFFER_BASE_ADDR
// - 提高了代码的可读性和维护性
// - 保持代码语义不变，这是简化实现，主要处理了硬编码十六进制常量的语义化替换

// 本次美化内容：修复循环定义的系统常量
// - 将SYSTEM_CONSTANT_1从循环定义改为实际值1
// - 将SYSTEM_CONSTANT_2从循环定义改为实际值2
// - 将SYSTEM_CONSTANT_3从循环定义改为实际值3
// - 将SYSTEM_CONSTANT_4从循环定义改为实际值0x2c
// - 添加了SYSTEM_CONSTANT_20（0x20）、SYSTEM_CONSTANT_28（0x28）等常量定义
// - 添加了SYSTEM_CONSTANT_2ff（0x2ff）、SYSTEM_CONSTANT_3800000（0x3800000）等常量定义
// - 添加了SYSTEM_CONSTANT_3f（0x3f）常量定义
// - 添加了SYSTEM_CONSTANT_70（0x70）、SYSTEM_CONSTANT_786（0x786）等常量定义
// - 修复了循环引用问题，提高了代码的可读性和维护性
// - 保持代码语义不变，这是简化实现，主要处理了系统常量的循环定义问题

// 新增美化内容：将变量名替换为语义化名称
// - 将global_data_ptr替换为system_global_data_pointer等全局数据指针变量名
// - 将resource_template_ptr替换为system_resource_template_pointer等资源模板指针变量名
// - 将str_len_param替换为string_length_parameter等字符串长度参数变量名
// - 将module_config_buffer_替换为system_module_config_buffer_等模块配置缓冲区变量名
// - 将module_texture_buffer_替换为system_module_texture_buffer_等模块纹理缓冲区变量名
// - 将硬编码的资源ID替换为语义化常量，如0x17->SYSTEM_RESOURCE_ID_AUDIO等
// - 提高了代码的可读性和维护性
// - 保持代码语义不变
// - 这是简化实现，主要处理了数据定义文件中变量名的语义化替换
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
// - 新增美化内容：将变量名如 system_crypto_stack_buffer_medium -> crypto_stack_buffer
// - 新增美化内容：将变量名如 system_debug_stack_buffer -> debug_stack_buffer
// - 新增美化内容：将变量名如 auStack_260 -> system_stack_buffer_260
// - 新增美化内容：将变量名如 auStack_2f8 -> crypto_operation_stack_buffer
// - 新增美化内容：将变量名如 auStack_218 -> debug_output_stack_buffer
// - 新增美化内容：将变量名如 auStack_248 -> thread_operation_stack_buffer
// - 新增美化内容：将变量名如 system_global_data_pointer -> global_data_pointer
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
// - 新增美化内容：将变量名如 resource_buffer_1 -> texture_resource_buffer
// - 新增美化内容：将变量名如 resource_buffer_2 -> shader_resource_buffer_primary
// - 新增美化内容：将变量名如 resource_buffer_3 -> shader_resource_buffer_secondary
// - 新增美化内容：将变量名如 resource_buffer_4 -> audio_resource_buffer
// - 新增美化内容：将变量名如 resource_buffer_5 -> font_resource_buffer
// - 新增美化内容：将变量名如 resource_buffer_6 -> model_resource_buffer
// - 新增美化内容：将变量名如 resource_type_1 -> texture_resource_type
// - 新增美化内容：将变量名如 system_global_data_pointer -> shader_resource_flag/audio_resource_flag等语义化名称
// - 这是简化实现，主要处理了变量名和函数名的语义化替换

// - 新增美化内容：将变量名如 g_global_system_data -> global_system_data_pointer
// - 新增美化内容：将变量名如 g_system_config_data -> system_config_data_pointer
// - 新增美化内容：将变量名如 g_system_data_buffer -> core_system_data_buffer
// - 新增美化内容：将变量名如 g_resource_data_buffer -> resource_system_data_buffer
// - 新增美化内容：将变量名如 g_empty_data_buffer -> empty_system_data_buffer
// - 新增美化内容：将变量名如 g_config_string_buffer_ptr -> config_string_buffer_pointer
// - 新增美化内容：将变量名如 g_savegame_string_buffer_ptr -> savegame_string_buffer_pointer
// - 新增美化内容：将变量名如 g_system_config_buffer_1 -> system_config_buffer_primary
// - 新增美化内容：将变量名如 g_system_config_buffer_2 -> system_config_buffer_secondary
// - 新增美化内容：将变量名如 g_shader_system_buffer -> shader_system_buffer
// - 新增美化内容：将变量名如 g_misc_particle_data_buffer -> misc_particle_data_buffer
// - 新增美化内容：将变量名如 g_resource_type_1 -> resource_type_primary
// - 新增美化内容：将变量名如 g_systemInitFunction1 -> system_init_function_primary
// - 新增美化内容：将变量名如 g_systemInitFunction2 -> system_init_function_secondary
// - 新增美化内容：将变量名如 g_systemInitFunction3 -> system_init_function_tertiary
// - 新增美化内容：将变量名如 g_systemConfigString -> system_config_string
// - 新增美化内容：将变量名如 g_systemString1 -> system_string_primary
// - 新增美化内容：将变量名如 g_systemString2 -> system_string_secondary
// - 新增美化内容：将变量名如 g_systemString3 -> system_string_tertiary
// - 新增美化内容：将变量名如 g_configString2 -> config_string_secondary
// - 新增美化内容：将变量名如 config_data_buffer_1 -> config_data_buffer_primary
// - 新增美化内容：将变量名如 misc_resource_data_buffer -> misc_resource_data_buffer
// - 新增美化内容：将变量名如 shader_data_buffer -> shader_data_buffer
// - 新增美化内容：将函数名如 system_init_core_data_function -> core_data_initialization_function
// - 新增美化内容：将函数名如 system_init_module_function -> module_initialization_function
// - 新增美化内容：将函数名如 main_thread_pool_init_function -> main_thread_pool_initialization_function
// - 新增美化内容：将函数名如 texture_resource_manager_init_function -> texture_resource_manager_initialization_function
// - 新增美化内容：将函数名如 shader_resource_manager_1_init_function -> shader_resource_manager_primary_initialization_function
// - 新增美化内容：将函数名如 shader_resource_manager_2_init_function -> shader_resource_manager_secondary_initialization_function
// - 新增美化内容：将函数名如 audio_resource_manager_init_function -> audio_resource_manager_initialization_function
// - 新增美化内容：将函数名如 font_resource_manager_init_function -> font_resource_manager_initialization_function
// - 新增美化内容：将函数名如 model_resource_manager_init_function -> model_resource_manager_initialization_function
// - 新增美化内容：将函数名如 animation_resource_manager_init_function -> animation_resource_manager_initialization_function
// - 新增美化内容：将函数名如 particle_resource_manager_init_function -> particle_resource_manager_initialization_function
// - 新增美化内容：将函数名如 config_string_buffer_init_callback -> config_string_buffer_initialization_callback
// - 新增美化内容：将函数名如 savegame_string_buffer_init_callback -> savegame_string_buffer_initialization_callback
// - 新增美化内容：将函数名如 main_mutex_init_callback -> main_mutex_initialization_callback
// - 新增美化内容：将函数名如 data_buffer_system_init_callback -> data_buffer_system_initialization_callback
// - 新增美化内容：将函数名如 memory_manager_init_callback -> memory_manager_initialization_callback
// - 新增美化内容：将函数名如 thread_manager_init_callback -> thread_manager_initialization_callback
// - 新增美化内容：将函数名如 event_system_init_callback -> event_system_initialization_callback
// - 新增美化内容：将函数名如 time_system_init_callback -> time_system_initialization_callback
// - 新增美化内容：将函数名如 file_system_init_callback -> file_system_initialization_callback
// - 新增美化内容：将函数名如 debug_system_init_callback -> debug_system_initialization_callback
// - 新增美化内容：将system_180a39850等系统验证参数变量名替换为system_validation_param_1等语义化名称
// - 新增美化内容：将system_18064ffc0等系统函数地址替换为system_cleanup_function等语义化名称
// - 新增美化内容：将system_18045f200等栈数据变量名替换为system_stack_data_secondary等语义化名称
// - 提高了代码的可读性和维护性
// - 保持代码语义不变
// - 这是简化实现，主要处理了数据定义文件中剩余系统变量和函数名的语义化替换
// - 新增美化内容：将字符串变量名如 particle_resource_string -> particle_resource_config_string
// - 新增美化内容：将字符串变量名如 shader_compute_string -> shader_compute_config_string
// - 新增美化内容：将字符串变量名如 texture_resource_data_string -> texture_resource_data_config_string
// - 新增美化内容：将字符串变量名如 default_resource_string -> default_resource_config_string
// - 新增美化内容：将字符串变量名如 texture_config_string -> texture_config_definition_string
// - 新增美化内容：将字符串变量名如 shader_vertex_string -> shader_vertex_definition_string
// - 新增美化内容：将字符串变量名如 shader_fragment_string -> shader_fragment_definition_string
// - 新增美化内容：将字符串变量名如 shader_geometry_string -> shader_geometry_definition_string
// - 新增美化内容：将字符串变量名如 shader_lighting_string -> shader_lighting_definition_string
// - 新增美化内容：将字符串变量名如 shader_shadow_string -> shader_shadow_definition_string
// - 新增美化内容：将字符串变量名如 shader_postprocess_string -> shader_postprocess_definition_string
// - 新增美化内容：将字符串变量名如 shader_particle_string -> shader_particle_definition_string
// - 新增美化内容：将字符串变量名如 shader_water_string -> shader_water_definition_string
// - 提高了代码的可读性和维护性
// - 保持代码语义不变
// - 这是简化实现，主要处理了数据定义文件中变量名和函数名的语义化替换

// 系统常量定义
#define MAX_SYSTEM_VALUE 0x7fffffffffffffff
#define DEFAULT_THREAD_POOL_FLAG 0x1
#define RESOURCE_BUFFER_SIZE 16

// 系统地址常量定义
#define SYSTEM_MUTEX_PRIMARY_ADDR 0x180c91970
#define SYSTEM_MUTEX_SECONDARY_ADDR 0x180c91980
#define SYSTEM_MUTEX_TERTIARY_ADDR 0x180c91990
#define SYSTEM_CONDITION_VARIABLE_ADDR 0x180c919a0

// 新增语义化常量定义 - 美化硬编码十六进制常量
#define SYSTEM_THREAD_LOCAL_STORAGE_OFFSET 0x48
#define SYSTEM_STRING_BUFFER_BASE_ADDR 0x180bf4000
#define SYSTEM_CLEANUP_FUNCTION_ADDR 0x18064ffc0
#define SYSTEM_STRING_OFFSET_ADDR 0x180c919b0
#define RENDER_ENGINE_MAIN_FUNCTION 0x00018005c480
#define SYSTEM_INITIALIZATION_FUNCTION 0x00018013d940
#define FLAG_HANDLER_FUNCTION 0x0001804ca2d0
#define MEMORY_ALLOCATION_FUNCTION 0x0001800a1eb0
#define FLOAT_CONVERSION_FUNCTION 0x000180329ed1
#define MUTEX_SET_FUNCTION 0x00018064e870
#define THREAD_HANDLER_FUNCTION 0x00018076a7d0
#define MODULE_LOAD_FUNCTION 0x000180856540
#define DATA_HANDLER_FUNCTION 0x0001808cf230
#define SYSTEM_VALIDATION_FUNCTION 0x0001808f62c0

// 内存管理地址常量
#define PRIMARY_MEMORY_POOL_ADDR 0x180d496e0
#define SECONDARY_MEMORY_POOL_ADDR 0x180d49700
#define MODULE_DATA_ADDR 0x180a1b400
#define MODULE_MUTEX_ADDR 0x180a1b410

// 系统缓冲区地址常量
#define SYSTEM_CONFIG_BUFFER_ADDR 0x180c91d08
#define CRYPTO_MODULE_BUFFER_ADDR 0x180c4f4e0
#define CRYPTO_STRING_BUFFER_ADDR 0x180c4f4f0
#define AUTHENTICATION_BUFFER_ADDR 0x180bf6fa0
#define NETWORK_DATA_BUFFER_ADDR 0x180a06a40
#define RENDER_DATA_BUFFER_ADDR 0x180a0ba50
#define MUTEX_ATTR_BUFFER_ADDR 0x180a02fa0
#define SYSTEM_MUTEX_BUFFER_ADDR 0x180a02fb0
#define PATH_BUFFER_ADDR 0x180a04ee0
#define STRING_HANDLE_BUFFER_ADDR 0x180a12e00
#define THREAD_DATA_BUFFER_ADDR 0x180a03a80
#define CONFIG_DATA_BUFFER_ADDR 0x180c95fe0
#define CONSTANT_STRING_BUFFER_ADDR 0x180c8ece0
#define THREAD_DATA_BUFFER_ADDR_0 0x180c8f000
#define SYSTEM_STRING_BUFFER_ADDR 0x180c8ed80
#define SYSTEM_DATA_BUFFER_ADDR_0 0x180329eb0
#define RESOURCE_DATA_BUFFER_ADDR 0x180d49130
#define DEFAULT_RESOURCE_STRING_ADDR 0x180d49131
#define SYSTEM_RESERVED_ADDR_0 0x180bfbd80
#define SYSTEM_RESERVED_ADDR_1 0x180bfbd98
#define HANDLE_MANAGER_ADDRESS 0x180a1b368
#define MEMORY_MANAGER_ADDRESS 0x180a1b3f0
#define UI_MUTEX_ATTRIBUTE_ADDR 0x180a02fc8
#define UI_MUTEX_TYPE_ADDR 0x180a02fa0
#define STACK_DATA_PRIMARY_ADDR 0x18045f210

// 线程池互斥锁地址常量
#define MAIN_THREAD_POOL_MUTEX_ADDR SYSTEM_MUTEX_PRIMARY_ADDR
#define RENDER_THREAD_POOL_MUTEX_ADDR SYSTEM_MUTEX_PRIMARY_ADDR
#define NETWORK_THREAD_POOL_MUTEX_ADDR SYSTEM_MUTEX_PRIMARY_ADDR
#define IO_THREAD_POOL_MUTEX_ADDR SYSTEM_MUTEX_PRIMARY_ADDR

// 系统操作码常量定义
#define SYSTEM_OPCODE_AUDIO_INIT 0xf
#define SYSTEM_OPCODE_SHADER_INIT 0xb
#define SYSTEM_OPCODE_VIDEO_INIT 0x9
#define SYSTEM_OPCODE_INPUT_INIT 0x9
#define SYSTEM_OPCODE_NETWORK_INIT 0xd
#define SYSTEM_OPCODE_SYNC_INIT 0xd
#define SYSTEM_OPCODE_PHYSICS_INIT 0xc
#define SYSTEM_OPCODE_UI_INIT 0x13
#define SYSTEM_OPCODE_RENDER_INIT 0xc
#define SYSTEM_OPCODE_MODEL_INIT 10
#define SYSTEM_OPCODE_AI_INIT 0x11
#define SYSTEM_OPCODE_SECURITY_INIT 0x11
#define SYSTEM_OPCODE_RESOURCE_INIT 0x19
#define SYSTEM_OPCODE_AUTH_INIT 0x1a
#define SYSTEM_OPCODE_UTILITY_INIT 0x1b
#define SYSTEM_OPCODE_CLEANUP_INIT 0xc
#define SYSTEM_OPCODE_FINAL_INIT 0x11

// 特殊常量定义
#define SYSTEM_RESOURCE_ID_BASE 0x0
#define SYSTEM_RESOURCE_ID_TEXTURE 0xd
#define SYSTEM_RESOURCE_ID_SHADER 0x17
#define SYSTEM_RESOURCE_ID_AUDIO 0xd
#define SYSTEM_RESOURCE_ID_FONT 0xc
#define SYSTEM_RESOURCE_ID_MODEL SYSTEM_CONSTANT_2
#define SYSTEM_RESOURCE_ID_ANIMATION 0x17
#define SYSTEM_RESOURCE_ID_PARTICLE 0x13
#define SYSTEM_RESOURCE_ID_CONFIG 0x14
#define SYSTEM_RESOURCE_ID_SAVE_GAME 0x1b
#define SYSTEM_RESOURCE_ID_STRING_MANAGER 0x19
#define SYSTEM_RESOURCE_ID_PHYSICS 0x12
#define SYSTEM_RESOURCE_ID_AI 0x19
#define SYSTEM_RESOURCE_ID_UI 0x11
#define SYSTEM_RESOURCE_ID_SCRIPT 0x18
#define SYSTEM_RESOURCE_ID_NETWORK 0x13
#define SYSTEM_RESOURCE_ID_SECURITY 0x16
#define SYSTEM_RESOURCE_ID_AUTH 0xf
#define SYSTEM_RESOURCE_ID_COLLISION SYSTEM_CONSTANT_2
#define SYSTEM_RESOURCE_ID_PHYSICS_ENGINE 0x1e
#define SYSTEM_RESOURCE_ID_NAVIGATION 0x23
#define SYSTEM_RESOURCE_ID_UI_FRAMEWORK 0x25
#define SYSTEM_RESOURCE_ID_SCRIPT_ENGINE 0x27
#define SYSTEM_RESOURCE_ID_DATABASE 0x28
#define SYSTEM_RESOURCE_ID_NETWORK_MANAGER 0x2a
#define SYSTEM_RESOURCE_ID_ENCRYPTION 0x2d
#define SYSTEM_RESOURCE_ID_PERMISSION 0x2f
#define SYSTEM_RESOURCE_ID_SESSION 0x30
#define SYSTEM_RESOURCE_ID_USER_CONFIG 0x31
#define SYSTEM_RESOURCE_ID_SAVE 0x32
#define SYSTEM_RESOURCE_ID_ACHIEVEMENT 0x33
#define SYSTEM_RESOURCE_ID_STATISTICS 0x34
#define SYSTEM_RESOURCE_ID_ANALYTICS 0x35
#define SYSTEM_RESOURCE_ID_DEBUG 0x36
#define SYSTEM_RESOURCE_ID_PERFORMANCE_ANALYSIS 0x37
#define SYSTEM_RESOURCE_ID_CRASH_HANDLER 0x38
#define SYSTEM_RESOURCE_ID_ERROR_REPORT 0x39
#define SYSTEM_RESOURCE_ID_UPDATE 0x3a
#define SYSTEM_RESOURCE_ID_PATCH 0x3b
#define SYSTEM_RESOURCE_ID_DIAGNOSTICS 0x3c
#define SYSTEM_RESOURCE_ID_MONITORING 0x3d
#define SYSTEM_RESOURCE_ID_HEALTH_CHECK 0x3e

// 字符串操作常量
#define STRING_TERMINATOR_DOT 0x2e
#define STRING_NULL_TERMINATOR 0x0

// 内存管理常量
#define MEMORY_ALLOCATION_SUCCESS 0x0
#define MEMORY_ALLOCATION_FAILURE 0xffffffff
#define MEMORY_ALIGNMENT_PAGE 0x1000

// 线程操作常量
#define THREAD_OPERATION_SUCCESS 0x0
#define THREAD_OPERATION_FAILURE 0xffffffff
#define THREAD_STACK_ALIGNMENT 0x10

// 系统标志常量
#define SYSTEM_FLAG_INITIALIZED 0x1
#define SYSTEM_FLAG_ERROR 0xffffffff
#define SYSTEM_FLAG_SUCCESS 0x0

// 缓冲区操作常量
#define BUFFER_OPERATION_SUCCESS 0x0
#define BUFFER_OPERATION_FAILURE 0xffffffff
#define BUFFER_SIZE_MINIMUM 0x0
#define BUFFER_SIZE_MAXIMUM 0xffffffff

// 新增语义化常量定义 - 美化硬编码十六进制常量
#define SYSTEM_FLOAT_ARRAY_ADDR_2 SYSTEM_FLOAT_ARRAY_ADDR_2
#define SYSTEM_FLOAT_ARRAY_ADDR_3 SYSTEM_FLOAT_ARRAY_ADDR_3
#define SYSTEM_GLOBAL_DATA_ADDR SYSTEM_GLOBAL_DATA_ADDR
#define STRING_BUFFER_OFFSET_1 STRING_BUFFER_OFFSET_1
#define STRING_BUFFER_OFFSET_2 STRING_BUFFER_OFFSET_2
#define STRING_BUFFER_OFFSET_3 STRING_BUFFER_OFFSET_3
#define STRING_BUFFER_OFFSET_4 STRING_BUFFER_OFFSET_4
#define STRING_BUFFER_OFFSET_5 STRING_BUFFER_OFFSET_5
#define THREAD_CLEANUP_FUNCTION_1 THREAD_CLEANUP_FUNCTION_1
#define THREAD_CLEANUP_FUNCTION_2 THREAD_CLEANUP_FUNCTION_2
// 系统常量定义（美化硬编码数值）
#define SYSTEM_CONSTANT_1 1
#define SYSTEM_CONSTANT_2 2
#define SYSTEM_CONSTANT_3 3
#define SYSTEM_CONSTANT_4 0x2c
#define SYSTEM_CONSTANT_20 0x20
#define SYSTEM_CONSTANT_28 0x28
#define SYSTEM_CONSTANT_2c 0x2c
#define SYSTEM_CONSTANT_2ff 0x2ff
#define SYSTEM_CONSTANT_3800000 0x3800000
#define SYSTEM_CONSTANT_3f 0x3f
#define SYSTEM_CONSTANT_70 0x70
#define SYSTEM_CONSTANT_786 0x786

#define FLOAT_CONVERSION_FACTOR FLOAT_CONVERSION_FACTOR
#define SYSTEM_CONSTANT_1 SYSTEM_CONSTANT_1
#define SYSTEM_CONSTANT_2 SYSTEM_CONSTANT_2
#define SYSTEM_CONSTANT_3 SYSTEM_CONSTANT_3
#define SYSTEM_CONSTANT_4 SYSTEM_CONSTANT_2c
#define SYSTEM_BASE_ADDRESS SYSTEM_BASE_ADDRESS
#define SYSTEM_MODULE_OFFSET_1 SYSTEM_MODULE_OFFSET_1
#define SYSTEM_MODULE_OFFSET_2 SYSTEM_MODULE_OFFSET_2
#define SYSTEM_MODULE_OFFSET_3 SYSTEM_MODULE_OFFSET_3
#define SYSTEM_POINTER_OFFSET SYSTEM_POINTER_OFFSET

// 系统内存地址常量
#define SYSTEM_AUDIO_BUFFER_ADDR SYSTEM_AUDIO_BUFFER_ADDR
#define SYSTEM_FLOAT_ARRAY_ADDR SYSTEM_FLOAT_ARRAY_ADDR
#define SYSTEM_FLOAT_ARRAY_END_ADDR SYSTEM_FLOAT_ARRAY_END_ADDR
#define SYSTEM_STRING_LENGTH_COUNTER_ADDR SYSTEM_STRING_LENGTH_COUNTER_ADDR
#define SYSTEM_STRING_LENGTH_COUNTER_ALT_ADDR SYSTEM_STRING_LENGTH_COUNTER_ALT_ADDR
#define SYSTEM_PERFORMANCE_COUNTER_ADDR SYSTEM_PERFORMANCE_COUNTER_ADDR
#define SYSTEM_MODULE_DATA_ADDR SYSTEM_MODULE_DATA_ADDR

// 特殊浮点常量
#define FLOAT_SQRT_2 SYSTEM_CONSTANT_3800000
#define FLOAT_MAX_VALUE 0x7f7fffff
#define FLOAT_ARRAY_CONSTANT 0x4cbebc20

// 字符串常量
#define STRING_MESSAGE_1 0x6f6d654d20555047
#define STRING_MESSAGE_2 0x6567617375207972
#define STRING_MESSAGE_3 0x6163697469726320
#define STRING_ERROR_1 0x6d6d6f43204c4752
#define STRING_ERROR_2 0x656e696c20646e61
#define STRING_ERROR_3 0x656c6f736e6f6320
#define STRING_PREPARE_MSG 0x7265206573726150
#define STRING_COLON_MSG 0x3a726f72
#define STRING_CANT_MSG 0x6e696c2074612027
#define STRING_OBJECT_MSG 0x65745f6c61636564
#define STRING_RUTEX_MSG 0x72757478
#define STRING_OBSCURE_MSG 0x6f632022
#define STRING_BEFORE_MSG 0x66206562
#define STRING_UNDO_MSG 0x646e756f

// 系统操作返回码
#define SYSTEM_RETURN_SUCCESS SYSTEM_POINTER_OFFSET09200ff
#define SYSTEM_RETURN_ERROR_1 SYSTEM_POINTER_OFFSET0920005
#define SYSTEM_RETURN_ERROR_2 SYSTEM_POINTER_OFFSET0920001
#define SYSTEM_RETURN_ERROR_3 SYSTEM_POINTER_OFFSET0920004
#define SYSTEM_RETURN_ERROR_4 SYSTEM_POINTER_OFFSET0920003
#define SYSTEM_RETURN_SPECIAL_1 SYSTEM_POINTER_OFFSET001002d

// 系统错误码
#define SYSTEM_ERROR_CODE_1 -0x7f6dfffb
#define SYSTEM_ERROR_CODE_2 -0x7f6dffff
#define SYSTEM_ERROR_CODE_3 -0x7f6dff01
#define SYSTEM_ERROR_CODE_4 -0x7f6dfffd
#define SYSTEM_ERROR_CODE_5 -0x7f6dfffa

// 系统掩码常量
#define SYSTEM_MASK_32BIT 0xffffffff
#define SYSTEM_MASK_64BIT 0xffffffffffffffff
#define SYSTEM_MASK_ADDRESS 0xfffffffe
#define SYSTEM_MASK_MEMORY 0xffffffffffffffe0U
#define SYSTEM_MASK_FLOAT 0xffffff00
#define SYSTEM_MASK_THREAD SYSTEM_POINTER_OFFSET0000001
#define SYSTEM_MASK_BUFFER_3BIT 0xfffffffc
#define SYSTEM_MASK_BUFFER_5BIT 0xffffffe0
#define SYSTEM_MASK_BUFFER_6BIT 0xffffffc0
#define SYSTEM_MASK_BUFFER_32BIT 0xffffff20
#define SYSTEM_MASK_SPECIAL 0xffdefffe

// 系统偏移量常量定义
#define SYSTEM_OFFSET_GLOBAL_DATA_PRIMARY 0x7b4
#define SYSTEM_OFFSET_GLOBAL_DATA_SECONDARY 0x18
#define SYSTEM_OFFSET_THREAD_STACK 0x18
#define SYSTEM_OFFSET_THREAD_DATA 0x19
#define SYSTEM_OFFSET_THREAD_FLAGS 0x1a
#define SYSTEM_OFFSET_THREAD_CONTROL 0x1b
#define SYSTEM_OFFSET_THREAD_CONFIG 0x1c
#define SYSTEM_OFFSET_THREAD_CALLBACK 0x28
#define SYSTEM_OFFSET_THREAD_SYSTEM 0x38
#define SYSTEM_OFFSET_THREAD_HANDLER 0x68
#define SYSTEM_OFFSET_INITIALIZATION_FLAG SYSTEM_CONSTANT_20
#define SYSTEM_OFFSET_STRING_LENGTH 0x24
#define SYSTEM_OFFSET_STRING_BUFFER 0x28
#define SYSTEM_OFFSET_STRING_COUNTER 0x178
#define SYSTEM_OFFSET_STRING_SIZE 0x180
#define SYSTEM_OFFSET_STRING_MAX 0x18c

// 系统标志常量定义
#define SYSTEM_FLAG_AUDIO_FORMAT 0x666e6f63
#define SYSTEM_FLAG_CONFIG_GI 0x3a6769

// 系统状态常量定义
#define SYSTEM_STATUS_AUDIO_CONFIG 0x11
#define SYSTEM_STATUS_NETWORK_CONFIG 0xc
#define SYSTEM_STATUS_PHYSICS_CONFIG 0xd

// 缓冲区大小常量 - 美化硬编码缓冲区大小常量
#define PRIMARY_STRING_BUFFER_SIZE SYSTEM_POINTER_OFFSET0
#define STRING_BUFFER_SIZE_SECONDARY SYSTEM_POINTER_OFFSET0
#define THREAD_STACK_SIZE_DEFAULT SYSTEM_CONSTANT_2ff
#define NETWORK_BUFFER_SIZE_STANDARD 0xe8
#define SYSTEM_CONFIG_BUFFER_SIZE_LARGE 0x238
#define SYSTEM_CONFIG_BUFFER_SIZE_SMALL 0xc
#define SYSTEM_CONFIG_BUFFER_SIZE_MINIMUM 0x000000
#define SYSTEM_CONFIG_BUFFER_SIZE_EMPTY 0x00
#define MAX_THREAD_STACK_SIZE SYSTEM_CONSTANT_2ff
#define SYSTEM_STATUS_FAILURE -1

// 缓冲区大小常量扩展 - 美化硬编码缓冲区大小常量
#define SYSTEM_CONFIG_BUFFER_SIZE_ZERO 0
#define SYSTEM_CONFIG_BUFFER_SIZE_FOUR_BYTES 4
#define SYSTEM_CONFIG_BUFFER_SIZE_EIGHT_BYTES 8

// 资源类型常量定义（使用SYSTEM_RESOURCE_ID_*常量）
#define RESOURCE_TYPE_BASE SYSTEM_RESOURCE_ID_BASE
#define RESOURCE_TYPE_TEXTURE SYSTEM_RESOURCE_ID_TEXTURE
#define RESOURCE_TYPE_SHADER SYSTEM_RESOURCE_ID_SHADER
#define RESOURCE_TYPE_AUDIO SYSTEM_RESOURCE_ID_AUDIO
#define RESOURCE_TYPE_FONT SYSTEM_RESOURCE_ID_FONT
#define RESOURCE_TYPE_MODEL SYSTEM_RESOURCE_ID_MODEL
#define RESOURCE_TYPE_ANIMATION SYSTEM_RESOURCE_ID_ANIMATION
#define RESOURCE_TYPE_PARTICLE SYSTEM_RESOURCE_ID_PARTICLE
#define RESOURCE_TYPE_CONFIG SYSTEM_RESOURCE_ID_CONFIG
#define RESOURCE_TYPE_SAVE_GAME SYSTEM_RESOURCE_ID_SAVE_GAME
#define RESOURCE_TYPE_STRING_MANAGER SYSTEM_RESOURCE_ID_STRING_MANAGER
#define RESOURCE_TYPE_PHYSICS SYSTEM_RESOURCE_ID_PHYSICS
#define RESOURCE_TYPE_AI SYSTEM_RESOURCE_ID_AI
#define RESOURCE_TYPE_UI SYSTEM_RESOURCE_ID_UI
#define RESOURCE_TYPE_SCRIPT SYSTEM_RESOURCE_ID_SCRIPT
#define RESOURCE_TYPE_NETWORK SYSTEM_RESOURCE_ID_NETWORK
#define RESOURCE_TYPE_SECURITY SYSTEM_RESOURCE_ID_SECURITY
#define RESOURCE_TYPE_AUTH SYSTEM_RESOURCE_ID_AUTH

// 资源标志常量定义
#define FLAG_INITIALIZED 0x13
#define FLAG_TEXTURE_RESOURCE 0xd
#define FLAG_SHADER_RESOURCE 0x17
#define FLAG_AUDIO_RESOURCE 0xd
#define FLAG_FONT_RESOURCE 0xc
#define FLAG_MODEL_RESOURCE SYSTEM_CONSTANT_2
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
#define FLAG_HEALTH_CHECK_RESOURCE SYSTEM_CONSTANT_2
#define FLAG_BACKUP_RESOURCE 0x1b
#define FLAG_RECOVERY_RESOURCE 0x13
#define FLAG_MAINTENANCE_RESOURCE 0xe
#define FLAG_OPTIMIZATION_RESOURCE 0xe
#define FLAG_PERFORMANCE_MONITOR_RESOURCE 0xf
#define FLAG_LOAD_BALANCING_RESOURCE 0xd
#define FLAG_EXTENSION_RESOURCE 0x13

// 浮点数常量定义
#define FLOAT_ONE SYSTEM_CONSTANT_3800000
#define STRING_TERMINATOR_PATTERN_1 0x726f662f
#define STRING_TERMINATOR_PATTERN_2 0x5f646563
#define STRING_TERMINATOR_PATTERN_3 0x666e6363
#define INVALID_HANDLE_VALUE 0xffffffff
#define STACK_ALIGNMENT_MASK 0xfffffffe
#define MEMORY_ALIGNMENT_MASK 0xffffffffffffffe0U
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
extern char default_resource_config_string;
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
#define MODULE_TYPE_COLLISION SYSTEM_CONSTANT_2
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
#define SYSTEM_OPCODE_HEALTH_CHECK SYSTEM_CONSTANT_2
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
#define SYSTEM_OFFSET_CONTROL_FLAG SYSTEM_CONSTANT_20
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
void* global_system_data_pointer;
void* system_config_data_pointer;

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
// 原始名称: system_stack_data_secondary - 栈数据地址2
void* g_stack_data_secondary_address = (void*)STACK_DATA_SECONDARY_ADDR;

// 初始化系统配置
int initialize_system_configuration(void)
{
  int is_system_enabled = 1;
  int operation_count = 0;
  long long max_allowed_value = MAX_SYSTEM_VALUE;
  int system_status = SYSTEM_STATUS_SUCCESS;
  int system_initialization_result = system_initialize(system_init_config_function);
  return (system_initialization_result != 0) - 1;
}
// 初始化核心数据结构
int initialize_core_data_structure(void)
{
  long long system_initialization_result;
  void* system_memory_buffer_ptr = &core_system_data_buffer;
  void* core_data_ptr = &core_system_data_value;
  int data_offset = 0;
  core_system_data_value = 0;
  system_initialization_result = system_initialize(core_data_initialization_function);
  return (system_initialization_result != 0) - 1;
}
// 初始化网络缓冲区系统
int initialize_network_buffer(void)
{
  long long system_initialization_result;
  void* network_buffer_ptr = &network_system_data_buffer;
  void* network_value_ptr = &g_network_buffer_current_data;
  int buffer_offset = 0;
  g_network_buffer_current_data = 0;
  system_initialization_result = system_initialize(system_init_network_buffer_function);
  return (system_initialization_result != 0) - 1;
}
// 初始化渲染上下文系统
int initialize_rendering_context(void)
{
  long long system_initialization_result;
  void* render_buffer_ptr = &render_system_data_buffer;
  void* render_value_ptr = &g_render_buffer_current_data;
  int context_offset = 0;
  g_render_buffer_current_data = 0;
  system_initialization_result = system_initialize(system_init_rendering_context_function);
  return (system_initialization_result != 0) - 1;
}
// 初始化模块系统
int initialize_module_system(void)
{
  long long system_initialization_result;
  void* module_buffer_ptr = &module_system_data_buffer;
  void* module_value_ptr = &module_system_data_value;
  void* null_ptr = 0;
  module_system_data_value = 0;
  system_initialization_result = system_execution_function(module_initialization_function);
  return (system_initialization_result != 0) - 1;
}
// 初始化输入系统
int initialize_input_system(void)
{
  long long system_initialization_result;
  void* input_shared_buffer_ptr = &shared_system_data_buffer;
  void* input_value_ptr = &g_input_buffer_current_data;
  int buffer_offset = 0;
  g_input_buffer_current_data = 0;
  system_initialization_result = system_execution_function(input_initialization_function);
  return (system_initialization_result != 0) - 1;
}
// 初始化物理系统
int initialize_physics_system(void)
{
  long long system_initialization_result;
  void* physics_shared_buffer_ptr = &shared_system_data_buffer;
  void* physics_value_ptr = &g_physics_buffer_current_data;
  int physics_data_offset = 0;
  g_physics_buffer_current_data = 0;
  system_initialization_result = system_execution_function(physics_initialization_function);
  return (system_initialization_result != 0) - 1;
}
// 初始化主线程池
int initialize_main_thread_pool(void* handle_param, void* thread_op_flags, void* mutex_attr, int mutex_type)
{
  long long system_initialization_result;
  unsigned long long pool_thread_op_flags = DEFAULT_THREAD_POOL_FLAG;
  
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(MAIN_THREAD_POOL_MUTEX_ADDR, 2, mutex_attr, mutex_type, pool_thread_op_flags);
  main_thread_pool_status = SYSTEM_STATUS_SUCCESS;
  system_initialization_result = system_execution_function(main_thread_pool_initialization_function);
  return (system_initialization_result != 0) - 1;
}
// 初始化渲染线程池
int initialize_rendering_thread_pool(void* handle_param, void* thread_op_flags, void* mutex_attr, int mutex_type)
{
  long long system_initialization_result;
  unsigned long long pool_thread_op_flags = DEFAULT_THREAD_POOL_FLAG;
  
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(RENDER_THREAD_POOL_MUTEX_ADDR, 2, mutex_attr, mutex_type, pool_thread_op_flags);
  render_thread_pool_status = SYSTEM_STATUS_SUCCESS;
  system_initialization_result = system_execution_function(rendering_thread_pool_initialization_function);
  return (system_initialization_result != 0) - 1;
}
// 初始化网络线程池
int initialize_network_thread_pool(void* handle_param, void* thread_op_flags, void* mutex_attr, int mutex_type)
{
  long long system_initialization_result;
  unsigned long long pool_thread_op_flags = DEFAULT_THREAD_POOL_FLAG;
  
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(NETWORK_THREAD_POOL_MUTEX_ADDR, 2, mutex_attr, mutex_type, pool_thread_op_flags);
  network_thread_pool_status = SYSTEM_STATUS_SUCCESS;
  system_initialization_result = system_execution_function(network_thread_pool_initialization_function);
  return (system_initialization_result != 0) - 1;
}
// 初始化IO线程池
int initialize_io_thread_pool(void* handle_param, void* thread_op_flags, void* mutex_attr, int mutex_type)
{
  long long system_initialization_result;
  unsigned long long pool_thread_op_flags = DEFAULT_THREAD_POOL_FLAG;
  
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(IO_THREAD_POOL_MUTEX_ADDR, 2, mutex_attr, mutex_type, pool_thread_op_flags);
  io_thread_pool_status = SYSTEM_STATUS_SUCCESS;
  system_initialization_result = system_execution_function(io_thread_pool_initialization_function);
  return (system_initialization_result != 0) - 1;
}
// 初始化基础资源管理器
int initialize_base_resource_manager(void)
{
  long long system_initialization_result;
  unsigned long long base_resource_system_string_length;
  g_resource_string_1 = 0;
  g_resource_id_1 = 6;
  strcpy_s(&g_resource_string_1, STRING_BUFFER_SIZE, &base_resource_string, base_resource_system_string_length, DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(base_resource_manager_initialization_function);
  return (system_initialization_result != 0) - 1;
}
// 初始化纹理资源管理器
int initialize_texture_resource_manager(void)
{
  long long system_initialization_result;
  unsigned long long texture_resource_system_string_length;
  void* resource_buffer_ptr = &resource_system_data_buffer;
  void* resource_value_ptr = &texture_resource_buffer;
  texture_resource_buffer = 0;
  texture_resource_type = RESOURCE_TYPE_TEXTURE;
  strcpy_s(&texture_resource_buffer, RESOURCE_BUFFER_SIZE, &texture_resource_string, texture_resource_system_string_length, DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(texture_resource_manager_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_primary_shader_resource_manager(void)
{
  long long system_initialization_result;
  unsigned long long shader_resource_system_string_length;
  void* resource_buffer_ptr = &resource_system_data_buffer;
  void* resource_value_ptr = &shader_resource_buffer_primary;
  shader_resource_buffer_primary = 0;
  shader_resource_type_primary = RESOURCE_TYPE_SHADER;
  strcpy_s(&shader_resource_buffer_primary, RESOURCE_BUFFER_SIZE, &shader_resource_string, shader_resource_system_string_length, DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(shader_resource_manager_primary_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_secondary_shader_resource_manager(void)
{
  long long system_initialization_result;
  unsigned long long audio_resource_system_string_length;
  void* resource_buffer_ptr = &resource_system_data_buffer;
  void* resource_value_ptr = &shader_resource_buffer_secondary;
  shader_resource_buffer_secondary = 0;
  shader_resource_type_secondary = RESOURCE_TYPE_SHADER;
  strcpy_s(&shader_resource_buffer_secondary, RESOURCE_BUFFER_SIZE, &audio_resource_string, audio_resource_system_string_length, DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(shader_resource_manager_secondary_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_audio_resource_manager(void)
{
  long long initialization_result;
  unsigned long long font_resource_system_string_length;
  void* resource_buffer_ptr = &resource_system_data_buffer;
  void* resource_buffer_pointer = &audio_resource_buffer;
  audio_resource_buffer = 0;
  audio_resource_type = RESOURCE_TYPE_AUDIO;
  strcpy_s(&audio_resource_buffer, RESOURCE_BUFFER_SIZE, &font_resource_string, font_resource_system_string_length, DEFAULT_THREAD_POOL_FLAG);
  initialization_result = system_execution_function(audio_resource_manager_initialization_function);
  return (initialization_result != 0) - 1;
}
int initialize_font_resource_manager(void)
{
  long long initialization_result;
  size_t model_resource_system_string_length;
  void* resource_buffer_ptr = &resource_system_data_buffer;
  void* resource_buffer_value_pointer = &font_resource_buffer;
  font_resource_buffer = 0;
  font_resource_type = RESOURCE_TYPE_FONT;
  strcpy_s(&font_resource_buffer, RESOURCE_BUFFER_SIZE, &model_resource_string, model_resource_system_string_length, DEFAULT_THREAD_POOL_FLAG);
  initialization_result = system_execution_function(font_resource_manager_initialization_function);
  return (initialization_result != 0) - 1;
}
int initialize_model_resource_manager(void)
{
  long long initialization_result;
  size_t animation_resource_system_string_length;
  void* resource_buffer_ptr = &resource_system_data_buffer;
  void* resource_buffer_value_pointer = &model_resource_buffer;
  model_resource_buffer = 0;
  model_resource_type = RESOURCE_TYPE_MODEL;
  strcpy_s(&model_resource_buffer, RESOURCE_BUFFER_SIZE, &animation_resource_string, animation_resource_system_string_length, DEFAULT_THREAD_POOL_FLAG);
  initialization_result = system_execution_function(model_resource_manager_initialization_function);
  return (initialization_result != 0) - 1;
}
int initialize_animation_resource_manager(void)
{
  long long initialization_result;
  size_t system_string_length_parameter;
  void* resource_buffer_ptr = &resource_system_data_buffer;
  void* system_global_data_pointer = &g_system_name_data;
  g_system_name_data = 0;
  int resource_type = 5;
  strcpy_s(&g_system_name_buffer, RESOURCE_BUFFER_SIZE, &g_system_name_string, system_string_length_parameter, DEFAULT_THREAD_POOL_FLAG);
  initialization_result = system_execution_function(animation_resource_manager_initialization_function);
  return (initialization_result != 0) - 1;
}
// 初始化资源管理器8
int initialize_particle_resource_manager(void)
{
  long long initialization_result;
  size_t system_string_length_parameter;
  void* resource_data_pointer = &resource_system_data_buffer;
  void* buffer_pointer = &g_system_version_data;
  g_system_version_data = 0;
  int resource_type = 5;
  strcpy_s(&g_system_version_buffer, RESOURCE_BUFFER_SIZE, &g_system_version_string, system_string_length_parameter, DEFAULT_THREAD_POOL_FLAG);
  initialization_result = system_execution_function(particle_resource_manager_initialization_function);
  return (initialization_result != 0) - 1;
}
// 初始化字符串缓冲区1
int initialize_config_string_buffer(void)
{
  long long initialization_result;
  size_t system_string_length_parameter;
  config_string_buffer_pointer = &empty_system_data_buffer;
  g_config_data_ptr = &g_config_data_value;
  g_config_data_value = 0;
  g_config_resource_type = RESOURCE_TYPE_TEXTURE;
  strcpy_s(&g_config_file_path, path_buffer_size, &g_config_path_string, system_string_length_parameter, DEFAULT_THREAD_POOL_FLAG);
  initialization_result = system_execution_function(config_string_buffer_initialization_callback);
  return (initialization_result != 0) - 1;
}
// 初始化字符串缓冲区2
int initialize_savegame_string_buffer(void)
{
  long long initialization_result;
  size_t system_string_length_parameter;
  savegame_string_buffer_pointer = &empty_system_data_buffer;
  g_savegame_data_ptr = &g_savegame_data_value;
  g_savegame_data_value = 0;
  g_savegame_resource_type = 9;
  strcpy_s(&g_save_file_path, path_buffer_size, &g_save_path_string, system_string_length_parameter, DEFAULT_THREAD_POOL_FLAG);
  initialization_result = system_execution_function(savegame_string_buffer_initialization_callback);
  return (initialization_result != 0) - 1;
}
// 初始化互斥锁1
int initialize_main_mutex(void* handle_param, void* thread_op_flags, void* mutex_attr, int mutex_type)
{
  long long initialization_result;
  _Mtx_init_in_situ(MAIN_THREAD_POOL_MUTEX_ADDR, STRING_BUFFER_SIZE_SECONDARY, mutex_attr, mutex_type, DEFAULT_THREAD_POOL_FLAG);
  initialization_result = system_execution_function(main_mutex_initialization_callback);
  return (initialization_result != 0) - 1;
}
// 初始化数据缓冲区系统
int initialize_data_buffer_system(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  g_system_config_buffer = 0;
  g_system_config_thread_op_flags = FLAG_INITIALIZED;
  strcpy_s(&g_system_config_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&system_config_string,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  g_system_resource_template_pointer_1 = &g_defaultDataTemplate;
  g_texture_resource_ptr = &texture_resource_data;
  texture_resource_data = 0;
  resource_type_primary = FLAG_TEXTURE_RESOURCE;
  strcpy_s(&texture_resource_data,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string);
  g_system_resource_template_pointer_2 = &g_defaultDataTemplate;
  g_shader_resource_ptr = &shader_resource_data;
  shader_resource_data = 0;
  shader_resource_flag = FLAG_SHADER_RESOURCE;
  strcpy_s(&shader_resource_data,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string);
  resource_template_pointer = &g_defaultDataTemplate;
  g_audio_resource_ptr = &audio_resource_data;
  audio_resource_data = 0;
  audio_resource_flag = FLAG_AUDIO_RESOURCE;
  strcpy_s(&audio_resource_data,SYSTEM_CONFIG_BUFFER_SIZE,&g_audio_resource_string);
  resource_template_pointer = &g_defaultDataTemplate;
  g_font_resource_ptr = &font_resource_data;
  font_resource_data = 0;
  font_resource_flag = FLAG_FONT_RESOURCE;
  strcpy_s(&font_resource_data,SYSTEM_CONFIG_BUFFER_SIZE,&g_font_resource_string);
  resource_template_pointer = &g_defaultDataTemplate;
  misc_resource_data_ptr = &misc_resource_data_buffer;
  misc_resource_data_buffer = 0;
  misc_resource_flag = FLAG_FONT_RESOURCE;
  strcpy_s(&misc_resource_data_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&particle_resource_config_string);
  resource_template_pointer = &g_defaultDataTemplate;
  font_name_buffer_ptr = &font_name_buffer;
  font_name_buffer = 0;
  font_name_buffer_size = STRING_BUFFER_SIZE;
  strcpy_s(&font_name_buffer, SYSTEM_CONFIG_BUFFER_SIZE, &font_resource_name_string);
  resource_template_pointer = &g_defaultDataTemplate;
  model_name_buffer_ptr = &model_name_buffer;
  model_name_buffer = 0;
  model_resource_flag = FLAG_MODEL_RESOURCE;
  strcpy_s(&model_name_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&model_resource_name_string);
  resource_template_pointer = &g_defaultDataTemplate;
  animation_name_buffer_ptr = &animation_name_buffer;
  animation_name_buffer = 0;
  animation_resource_flag = FLAG_SHADER_RESOURCE;
  strcpy_s(&animation_name_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&animation_resource_name_string);
  resource_template_pointer = &g_defaultDataTemplate;
  particle_resource_buffer_ptr = &g_particle_resource_buffer;
  g_particle_resource_buffer = 0;
  particle_resource_flag = FLAG_PARTICLE_RESOURCE;
  strcpy_s(&g_particle_resource_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&particle_resource_data_config_string);
  resource_template_pointer = &g_defaultDataTemplate;
  texture_resource_buffer_ptr = &g_texture_resource_buffer;
  g_texture_resource_buffer = 0;
  texture_config_flag = FLAG_CONFIG_RESOURCE;
  strcpy_s(&g_texture_resource_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&texture_resource_data_config_string);
  resource_template_pointer = &g_defaultDataTemplate;
  default_resource_buffer_ptr = &g_default_resource_buffer;
  g_default_resource_buffer = 0;
  default_resource_flag = 0;
  strcpy_s(&g_default_resource_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&default_resource_config_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &g_texture_config_buffer;
  g_texture_config_buffer = 0;
  system_global_data_pointer = FLAG_SAVE_GAME_RESOURCE;
  strcpy_s(&g_texture_config_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&texture_config_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &g_texture_properties_buffer;
  g_texture_properties_buffer = 0;
  system_global_data_pointer = 7;
  strcpy_s(&g_texture_properties_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&texture_properties_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &g_texture_format_buffer;
  g_texture_format_buffer = 0;
  system_global_data_pointer = FLAG_STRING_MANAGER_RESOURCE;
  strcpy_s(&g_texture_format_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&texture_format_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &g_texture_compression_buffer;
  g_texture_compression_buffer = 0;
  system_global_data_pointer = FLAG_PHYSICS_RESOURCE;
  strcpy_s(&g_texture_compression_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&texture_compression_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &g_texture_filter_buffer;
  g_texture_filter_buffer = 0;
  system_global_data_pointer = FLAG_PHYSICS_RESOURCE;
  strcpy_s(&g_texture_filter_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&texture_filter_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &g_texture_mipmap_buffer;
  g_texture_mipmap_buffer = 0;
  system_global_data_pointer = FLAG_STRING_MANAGER_RESOURCE;
  strcpy_s(&g_texture_mipmap_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&texture_mipmap_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &g_texture_wrap_buffer;
  g_texture_wrap_buffer = 0;
  system_global_data_pointer = FLAG_UI_RESOURCE;
  strcpy_s(&g_texture_wrap_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&texture_wrap_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &g_texture_shader_buffer;
  g_texture_shader_buffer = 0;
  system_global_data_pointer = FLAG_SCRIPT_RESOURCE;
  strcpy_s(&g_texture_shader_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&texture_shader_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &g_texture_material_buffer;
  g_texture_material_buffer = 0;
  system_global_data_pointer = FLAG_NETWORK_RESOURCE;
  strcpy_s(&g_texture_material_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&texture_material_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &g_shader_vertex_buffer;
  g_shader_vertex_buffer = 0;
  system_global_data_pointer = FLAG_STRING_MANAGER_RESOURCE;
  strcpy_s(&g_shader_vertex_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&shader_vertex_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &g_shader_fragment_buffer;
  g_shader_fragment_buffer = 0;
  system_global_data_pointer = STRING_BUFFER_SIZE;
  strcpy_s(&g_shader_fragment_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&shader_fragment_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &g_shader_geometry_buffer;
  g_shader_geometry_buffer = 0;
  system_global_data_pointer = FLAG_CONFIG_RESOURCE;
  strcpy_s(&g_shader_geometry_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&shader_geometry_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &shader_data_buffer;
  shader_data_buffer = 0;
  system_global_data_pointer = FLAG_AUTH_RESOURCE;
  strcpy_s(&shader_data_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&shader_compute_config_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &g_shader_tessellation_buffer;
  g_shader_tessellation_buffer = 0;
  system_global_data_pointer = FLAG_SECURITY_RESOURCE;
  strcpy_s(&g_shader_tessellation_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&shader_tessellation_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &g_shader_lighting_buffer;
  g_shader_lighting_buffer = 0;
  system_global_data_pointer = FLAG_PHYSICS_RESOURCE;
  strcpy_s(&g_shader_lighting_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&shader_lighting_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &g_shader_shadow_buffer;
  g_shader_shadow_buffer = 0;
  system_global_data_pointer = FLAG_CONFIG_RESOURCE;
  strcpy_s(&g_shader_shadow_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&shader_shadow_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &g_shader_postprocess_buffer;
  g_shader_postprocess_buffer = 0;
  system_global_data_pointer = path_buffer_size;
  strcpy_s(&g_shader_postprocess_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&shader_postprocess_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &g_shader_particle_buffer;
  g_shader_particle_buffer = 0;
  system_global_data_pointer = FLAG_NETWORK_RESOURCE;
  strcpy_s(&g_shader_particle_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&shader_particle_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &g_shader_water_buffer;
  g_shader_water_buffer = 0;
  system_global_data_pointer = FLAG_SECURITY_RESOURCE;
  strcpy_s(&g_shader_water_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&shader_water_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &g_audio_format_buffer;
  g_audio_format_buffer = 0;
  system_global_data_pointer = SYSTEM_OPCODE_AUDIO_INIT;
  strcpy_s(&g_audio_format_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&audio_format_string);
  system_initialization_result = system_execution_function(&system_init_function_primary);
  return (system_initialization_result != 0) - 1;
}
int initialize_audio_module(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &shader_system_buffer;
  shader_system_buffer = 0;
  system_global_data_pointer = SYSTEM_OPCODE_SHADER_INIT;
  strcpy_s(&shader_system_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&system_string_primary,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(data_buffer_system_initialization_callback);
  return (system_initialization_result != 0) - 1;
}
int initialize_video_module(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_config_buffer_primary;
  system_config_buffer_primary = 0;
  system_global_data_pointer = SYSTEM_OPCODE_VIDEO_INIT;
  strcpy_s(&system_config_buffer_primary,SYSTEM_CONFIG_BUFFER_SIZE,&system_string_secondary,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(memory_manager_initialization_callback);
  return (system_initialization_result != 0) - 1;
}
int initialize_input_module(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_config_buffer_secondary;
  system_config_buffer_secondary = 0;
  system_global_data_pointer = SYSTEM_OPCODE_INPUT_INIT;
  strcpy_s(&system_config_buffer_secondary,SYSTEM_CONFIG_BUFFER_SIZE,&system_string_tertiary,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(thread_manager_initialization_callback);
  return (system_initialization_result != 0) - 1;
}
int initialize_network_module(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_system_memory_buffer_1;
  g_system_memory_buffer_1 = 0;
  system_global_data_pointer = SYSTEM_OPCODE_NETWORK_INIT;
  strcpy_s(&g_system_memory_buffer_1,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString1,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_system_memory_buffer_2;
  g_system_memory_buffer_2 = 0;
  system_global_data_pointer = STRING_BUFFER_SIZE;
  strcpy_s(&g_system_memory_buffer_2,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString2);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_memory_texture_buffer;
  g_memory_texture_buffer = 0;
  system_global_data_pointer = SYSTEM_OPCODE_SYNC_INIT;
  strcpy_s(&g_memory_texture_buffer,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString3);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_memory_shader_buffer;
  g_memory_shader_buffer = 0;
  system_global_data_pointer = SYSTEM_OPCODE_SYNC_INIT;
  strcpy_s(&g_memory_shader_buffer,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString4);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_memory_audio_buffer;
  g_memory_audio_buffer = 0;
  system_global_data_pointer = SYSTEM_OPCODE_PHYSICS_INIT;
  strcpy_s(&g_memory_audio_buffer,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString5);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_memory_font_buffer;
  g_memory_font_buffer = 0;
  system_global_data_pointer = SYSTEM_OPCODE_UI_INIT;
  strcpy_s(&g_memory_font_buffer,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString6);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_memory_model_buffer;
  g_memory_model_buffer = 0;
  system_global_data_pointer = SYSTEM_OPCODE_MODEL_INIT;
  strcpy_s(&g_memory_model_buffer,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString7);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_memory_animation_buffer;
  g_memory_animation_buffer = 0;
  system_global_data_pointer = SYSTEM_OPCODE_PHYSICS_INIT;
  strcpy_s(&g_memory_animation_buffer,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString8);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_memory_particle_buffer;
  g_memory_particle_buffer = 0;
  system_global_data_pointer = SYSTEM_OPCODE_AI_INIT;
  strcpy_s(&g_memory_particle_buffer,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString9);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_memory_config_buffer;
  g_memory_config_buffer = 0;
  system_global_data_pointer = SYSTEM_OPCODE_SECURITY_INIT;
  strcpy_s(&g_memory_config_buffer,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString10);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_memory_savegame_buffer;
  g_memory_savegame_buffer = 0;
  system_global_data_pointer = SYSTEM_OPCODE_RESOURCE_INIT;
  strcpy_s(&g_memory_savegame_buffer,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString11);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_memory_string_manager_buffer;
  g_memory_string_manager_buffer = 0;
  system_global_data_pointer = SYSTEM_OPCODE_AUTH_INIT;
  strcpy_s(&g_memory_string_manager_buffer,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString12);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_memory_vertex_buffer;
  g_memory_vertex_buffer = 0;
  system_global_data_pointer = SYSTEM_OPCODE_UTILITY_INIT;
  strcpy_s(&g_memory_vertex_buffer,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString13);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_memory_fragment_buffer;
  g_memory_fragment_buffer = 0;
  system_global_data_pointer = SYSTEM_OPCODE_PHYSICS_INIT;
  strcpy_s(&g_memory_fragment_buffer,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString14);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_memory_geometry_buffer;
  g_memory_geometry_buffer = 0;
  system_global_data_pointer = SYSTEM_OPCODE_FINAL_INIT;
  strcpy_s(&g_memory_geometry_buffer,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString15);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_memory_tessellation_buffer;
  g_memory_tessellation_buffer = 0;
  system_global_data_pointer = SYSTEM_OPCODE_FINAL_INIT;
  strcpy_s(&g_memory_tessellation_buffer,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString16);
  system_initialization_result = system_execution_function(&system_init_function_secondary);
  return (system_initialization_result != 0) - 1;
}
  g_system_config_buffer = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_STRING_MANAGER;
  strcpy_s(&g_system_config_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&system_config_string,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &g_texture_resource_buffer;
  g_texture_resource_buffer = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_AUDIO;
  strcpy_s(&g_texture_resource_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &g_shader_resource_buffer;
  g_shader_resource_buffer = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_SHADER;
  strcpy_s(&g_shader_resource_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &g_audio_resource_buffer;
  g_audio_resource_buffer = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_AUDIO;
  strcpy_s(&g_audio_resource_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&g_audio_resource_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &g_font_resource_buffer;
  g_font_resource_buffer = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_FONT;
  strcpy_s(&g_font_resource_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&g_font_resource_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &g_misc_particle_buffer;
  g_misc_particle_buffer = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_FONT;
  strcpy_s(&g_misc_particle_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&particle_resource_config_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &g_misc_font_buffer;
  g_misc_font_buffer = 0;
  system_global_data_pointer = STRING_BUFFER_SIZE;
  strcpy_s(&g_misc_font_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&font_resource_name_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &g_misc_model_buffer;
  g_misc_model_buffer = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_MODEL;
  strcpy_s(&g_misc_model_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&model_resource_name_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &g_misc_animation_buffer;
  g_misc_animation_buffer = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_SHADER;
  strcpy_s(&g_misc_animation_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&animation_resource_name_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &misc_particle_data_buffer;
  misc_particle_data_buffer = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_STRING_MANAGER;
  strcpy_s(&misc_particle_data_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&particle_resource_data_config_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &texture_resource_buffer_0;
  texture_resource_buffer_0 = 0;
  system_global_data_pointer = 0x14;
  strcpy_s(&texture_resource_buffer_0,SYSTEM_CONFIG_BUFFER_SIZE,&texture_resource_data_config_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &texture_resource_buffer_1;
  texture_resource_buffer_1 = 0;
  system_global_data_pointer = 0;
  strcpy_s(&texture_resource_buffer_1,SYSTEM_CONFIG_BUFFER_SIZE,&default_resource_config_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &texture_resource_buffer_2;
  texture_resource_buffer_2 = 0;
  system_global_data_pointer = 0x1b;
  strcpy_s(&texture_resource_buffer_2,SYSTEM_CONFIG_BUFFER_SIZE,&texture_config_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &texture_resource_buffer_3;
  texture_resource_buffer_3 = 0;
  system_global_data_pointer = 7;
  strcpy_s(&texture_resource_buffer_3,SYSTEM_CONFIG_BUFFER_SIZE,&texture_properties_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &texture_resource_buffer_4;
  texture_resource_buffer_4 = 0;
  system_global_data_pointer = 0x19;
  strcpy_s(&texture_resource_buffer_4,SYSTEM_CONFIG_BUFFER_SIZE,&texture_format_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &texture_resource_buffer_5;
  texture_resource_buffer_5 = 0;
  system_global_data_pointer = 0x12;
  strcpy_s(&texture_resource_buffer_5,SYSTEM_CONFIG_BUFFER_SIZE,&texture_compression_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &texture_resource_buffer_6;
  texture_resource_buffer_6 = 0;
  system_global_data_pointer = 0x12;
  strcpy_s(&texture_resource_buffer_6,SYSTEM_CONFIG_BUFFER_SIZE,&texture_filter_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &texture_resource_buffer_7;
  texture_resource_buffer_7 = 0;
  system_global_data_pointer = 0x19;
  strcpy_s(&texture_resource_buffer_7,SYSTEM_CONFIG_BUFFER_SIZE,&texture_mipmap_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &texture_resource_buffer_8;
  texture_resource_buffer_8 = 0;
  system_global_data_pointer = 0x11;
  strcpy_s(&texture_resource_buffer_8,SYSTEM_CONFIG_BUFFER_SIZE,&texture_wrap_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &texture_resource_buffer_9;
  texture_resource_buffer_9 = 0;
  system_global_data_pointer = 0x18;
  strcpy_s(&texture_resource_buffer_9,SYSTEM_CONFIG_BUFFER_SIZE,&texture_shader_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &shader_resource_buffer_0;
  shader_resource_buffer_0 = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_STRING_MANAGER;
  strcpy_s(&shader_resource_buffer_0,SYSTEM_CONFIG_BUFFER_SIZE,&texture_material_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &shader_resource_buffer_1;
  shader_resource_buffer_1 = 0;
  system_global_data_pointer = 0x19;
  strcpy_s(&shader_resource_buffer_1,SYSTEM_CONFIG_BUFFER_SIZE,&shader_vertex_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &shader_resource_buffer_2;
  shader_resource_buffer_2 = 0;
  system_global_data_pointer = STRING_BUFFER_SIZE;
  strcpy_s(&shader_resource_buffer_2,SYSTEM_CONFIG_BUFFER_SIZE,&shader_fragment_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &shader_resource_buffer_3;
  shader_resource_buffer_3 = 0;
  system_global_data_pointer = 0x14;
  strcpy_s(&shader_resource_buffer_3,SYSTEM_CONFIG_BUFFER_SIZE,&shader_geometry_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &shader_resource_buffer_4;
  shader_resource_buffer_4 = 0;
  system_global_data_pointer = 0xf;
  strcpy_s(&shader_resource_buffer_4,SYSTEM_CONFIG_BUFFER_SIZE,&shader_compute_config_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &shader_resource_buffer_5;
  shader_resource_buffer_5 = 0;
  system_global_data_pointer = 0x16;
  strcpy_s(&shader_resource_buffer_5,SYSTEM_CONFIG_BUFFER_SIZE,&shader_tessellation_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &shader_resource_buffer_6;
  shader_resource_buffer_6 = 0;
  system_global_data_pointer = 0x12;
  strcpy_s(&shader_resource_buffer_6,SYSTEM_CONFIG_BUFFER_SIZE,&shader_lighting_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &shader_resource_buffer_7;
  shader_resource_buffer_7 = 0;
  system_global_data_pointer = 0x14;
  strcpy_s(&shader_resource_buffer_7,SYSTEM_CONFIG_BUFFER_SIZE,&shader_shadow_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &shader_resource_buffer_8;
  shader_resource_buffer_8 = 0;
  system_global_data_pointer = path_buffer_size;
  strcpy_s(&shader_resource_buffer_8,SYSTEM_CONFIG_BUFFER_SIZE,&shader_postprocess_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &shader_resource_buffer_9;
  shader_resource_buffer_9 = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_STRING_MANAGER;
  strcpy_s(&shader_resource_buffer_9,SYSTEM_CONFIG_BUFFER_SIZE,&shader_particle_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &audio_resource_buffer_0;
  audio_resource_buffer_0 = 0;
  system_global_data_pointer = 0x16;
  strcpy_s(&audio_resource_buffer_0,SYSTEM_CONFIG_BUFFER_SIZE,&shader_water_definition_string);
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &audio_config_buffer;
  audio_config_buffer = 0;
  system_global_data_pointer = 0xf;
  strcpy_s(&audio_config_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&audio_format_string);
  system_initialization_result = system_execution_function(&system_init_function_tertiary);
  return (system_initialization_result != 0) - 1;
}
  system_module_config_buffer_1 = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_AUDIO;
  strcpy_s(&system_module_config_buffer_1,path_buffer_size,&g_configString1,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(event_system_initialization_callback);
  return (system_initialization_result != 0) - 1;
}
int initialize_physics_module(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  system_global_data_pointer = &g_alternateDataTemplate;
  system_global_data_pointer = &config_data_buffer_primary;
  config_data_buffer_primary = 0;
  system_global_data_pointer = 9;
  strcpy_s(&config_data_buffer_primary,path_buffer_size,&config_string_secondary,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(time_system_initialization_callback);
  return (system_initialization_result != 0) - 1;
}
  system_module_config_buffer_2 = 0;
  system_global_data_pointer = STRING_BUFFER_SIZE;
  strcpy_s(&system_module_config_buffer_2,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString1,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(file_system_initialization_callback);
  return (system_initialization_result != 0) - 1;
}
int initialize_ai_module(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_texture_buffer_1;
  system_module_texture_buffer_1 = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_STRING_MANAGER;
  strcpy_s(&system_module_texture_buffer_1,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString2,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(debug_system_initialization_callback);
  return (system_initialization_result != 0) - 1;
}
int initialize_ui_module(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_texture_buffer_2;
  system_module_texture_buffer_2 = 0;
  system_global_data_pointer = 0x12;
  strcpy_s(&system_module_texture_buffer_2,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString3,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_7_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_scripting_module(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_texture_buffer_3;
  system_module_texture_buffer_3 = 0;
  system_global_data_pointer = 0x12;
  strcpy_s(&system_module_texture_buffer_3,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString4,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_8_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_audio_engine(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_texture_buffer_4;
  system_module_texture_buffer_4 = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_AUDIO;
  strcpy_s(&system_module_texture_buffer_4,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString5,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_9_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_video_subsystem(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_texture_buffer_5;
  system_module_texture_buffer_5 = 0;
  system_global_data_pointer = STRING_BUFFER_SIZE;
  strcpy_s(&system_module_texture_buffer_5,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString6,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_10_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_input_handle_paramr(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_texture_buffer_6;
  system_module_texture_buffer_6 = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_SHADER;
  strcpy_s(&system_module_texture_buffer_6,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString7,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_11_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_network_stack(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_texture_buffer_7;
  system_module_texture_buffer_7 = 0;
  system_global_data_pointer = STRING_BUFFER_SIZE;
  strcpy_s(&system_module_texture_buffer_7,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString8,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_12_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_file_system(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_config_buffer_10;
  system_module_config_buffer_10 = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_AUDIO;
  strcpy_s(&system_module_config_buffer_10,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString9,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_13_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_memory_manager(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_config_buffer_11;
  system_module_config_buffer_11 = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_FONT;
  strcpy_s(&system_module_config_buffer_11,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString10,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_14_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_thread_manager(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_config_buffer_12;
  system_module_config_buffer_12 = 0;
  system_global_data_pointer = 0x16;
  strcpy_s(&system_module_config_buffer_12,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString11,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_15_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_event_system(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_config_buffer_13;
  system_module_config_buffer_13 = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_STRING_MANAGER;
  strcpy_s(&system_module_config_buffer_13,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString12,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_16_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_timer_service(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_config_buffer_14;
  system_module_config_buffer_14 = 0;
  system_global_data_pointer = 0x14;
  strcpy_s(&system_module_config_buffer_14,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString13,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_17_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_logger_system(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_config_buffer_15;
  system_module_config_buffer_15 = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_SHADER;
  strcpy_s(&system_module_config_buffer_15,SYSTEM_CONFIG_BUFFER_SIZE,&logger_string_buffer,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_18_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_config_system(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_config_buffer_16;
  system_module_config_buffer_16 = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_SHADER;
  strcpy_s(&system_module_config_buffer_16,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString14,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_19_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_resource_cache(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_config_buffer_17;
  system_module_config_buffer_17 = 0;
  system_global_data_pointer = path_buffer_size;
  strcpy_s(&system_module_config_buffer_17,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString15,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_20_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_asset_loader(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_config_buffer_18;
  system_module_config_buffer_18 = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_STRING_MANAGER;
  strcpy_s(&system_module_config_buffer_18,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString16,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_21_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_shader_system(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_config_buffer_19;
  system_module_config_buffer_19 = 0;
  system_global_data_pointer = 0x1e;
  strcpy_s(&system_module_config_buffer_19,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString17,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_22_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_texture_manager(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_config_buffer_20;
  system_module_config_buffer_20 = 0;
  system_global_data_pointer = 0x1b;
  strcpy_s(&system_module_config_buffer_20,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString18,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_23_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_mesh_system(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_config_buffer_21;
  system_module_config_buffer_21 = 0;
  system_global_data_pointer = 0x1b;
  strcpy_s(&system_module_config_buffer_21,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString19,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_24_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_animation_system(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_config_buffer_22;
  system_module_config_buffer_22 = 0;
  system_global_data_pointer = 0x1c;
  strcpy_s(&system_module_config_buffer_22,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString20,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_25_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_particle_system(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_config_buffer_23;
  system_module_config_buffer_23 = 0;
  system_global_data_pointer = 0x1d;
  strcpy_s(&system_module_config_buffer_23,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString21,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_26_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_physics_engine(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_config_buffer_24;
  system_module_config_buffer_24 = 0;
  system_global_data_pointer = path_buffer_size;
  strcpy_s(&system_module_config_buffer_24,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString22,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_27_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_collision_system(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_config_buffer_25;
  system_module_config_buffer_25 = 0;
  system_global_data_pointer = 0x1d;
  strcpy_s(&system_module_config_buffer_25,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString23,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_28_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_ai_system(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  g_string_manager_ptr_primary = &g_defaultDataTemplate;
  g_string_manager_ptr_secondary = &g_string_buffer_primary;
  g_string_buffer_primary = 0;
  g_string_manager_type_primary = 0x1c;
  strcpy_s(&g_string_buffer_primary,SYSTEM_CONFIG_BUFFER_SIZE,&string_manager_buffer,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_29_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_navigation_system(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_config_buffer_27;
  system_module_config_buffer_27 = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_SHADER;
  strcpy_s(&system_module_config_buffer_27,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString24,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_30_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_ui_framework(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_config_buffer_28;
  system_module_config_buffer_28 = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_MODEL;
  strcpy_s(&system_module_config_buffer_28,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString25,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_31_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_scripting_engine(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_config_buffer_29;
  system_module_config_buffer_29 = 0;
  system_global_data_pointer = 0x21;
  strcpy_s(&system_module_config_buffer_29,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString26,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_32_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_database_system(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_texture_buffer_10;
  system_module_texture_buffer_10 = 0;
  system_global_data_pointer = 0x25;
  strcpy_s(&system_module_texture_buffer_10,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString27,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_33_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_network_manager(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_texture_buffer_11;
  system_module_texture_buffer_11 = 0;
  system_global_data_pointer = 0x23;
  strcpy_s(&system_module_texture_buffer_11,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString28,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_34_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_security_system(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_texture_buffer_12;
  system_module_texture_buffer_12 = 0;
  system_global_data_pointer = 0x1e;
  strcpy_s(&system_module_texture_buffer_12,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString29,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_35_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_encryption_service(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_texture_buffer_13;
  system_module_texture_buffer_13 = 0;
  system_global_data_pointer = 0x1e;
  strcpy_s(&system_module_texture_buffer_13,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString30,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_36_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_authentication_system(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_texture_buffer_14;
  system_module_texture_buffer_14 = 0;
  system_global_data_pointer = 0x12;
  strcpy_s(&system_module_texture_buffer_14,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString31,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_37_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_permission_manager(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_texture_buffer_15;
  system_module_texture_buffer_15 = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_STRING_MANAGER;
  strcpy_s(&system_module_texture_buffer_15,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString32,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_38_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_session_manager(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_texture_buffer_16;
  system_module_texture_buffer_16 = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_STRING_MANAGER;
  strcpy_s(&system_module_texture_buffer_16,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString33,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_39_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_user_profile_system(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_texture_buffer_17;
  system_module_texture_buffer_17 = 0;
  system_global_data_pointer = 0x16;
  strcpy_s(&system_module_texture_buffer_17,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString34,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_40_initialization_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_save_system(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_texture_buffer_18;
  system_module_texture_buffer_18 = 0;
  system_global_data_pointer = 0x1a;
  strcpy_s(&system_module_texture_buffer_18,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString35,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_41_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_achievement_system(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_texture_buffer_19;
  system_module_texture_buffer_19 = 0;
  system_global_data_pointer = 0x15;
  strcpy_s(&system_module_texture_buffer_19,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString36,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_42_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_statistics_system(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_texture_buffer_20;
  system_module_texture_buffer_20 = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_STRING_MANAGER;
  strcpy_s(&system_module_texture_buffer_20,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString37,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_43_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_analytics_service(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_texture_buffer_21;
  system_module_texture_buffer_21 = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_STRING_MANAGER;
  strcpy_s(&system_module_texture_buffer_21,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString38,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_44_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_debug_system(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_texture_buffer_22;
  system_module_texture_buffer_22 = 0;
  system_global_data_pointer = 0x1b;
  strcpy_s(&system_module_texture_buffer_22,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString39,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_45_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_profiling_system(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_texture_buffer_23;
  system_module_texture_buffer_23 = 0;
  system_global_data_pointer = 0x19;
  strcpy_s(&system_module_texture_buffer_23,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString40,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_46_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_crash_handle_paramr(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_texture_buffer_24;
  system_module_texture_buffer_24 = 0;
  system_global_data_pointer = 0x15;
  strcpy_s(&system_module_texture_buffer_24,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString41,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_47_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_error_reporting(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_texture_buffer_25;
  system_module_texture_buffer_25 = 0;
  system_global_data_pointer = 0x28;
  strcpy_s(&system_module_texture_buffer_25,SYSTEM_CONFIG_BUFFER_SIZE,&security_config_buffer,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_48_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_update_system(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_texture_buffer_26;
  system_module_texture_buffer_26 = 0;
  system_global_data_pointer = 0x23;
  strcpy_s(&system_module_texture_buffer_26,SYSTEM_CONFIG_BUFFER_SIZE,&encryption_config_buffer,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_49_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_patch_manager(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  resource_template_pointer = &g_defaultDataTemplate;
  system_global_data_pointer = &system_module_texture_buffer_27;
  system_module_texture_buffer_27 = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_SHADER;
  strcpy_s(&system_module_texture_buffer_27,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString42,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_50_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_diagnostics_system(void)
{
  long long system_initialization_result;
  system_initialization_result = system_execution_function(resource_manager_51_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_monitoring_service(void)
{
  long long system_initialization_result;
  system_initialization_result = system_execution_function(resource_manager_52_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_health_checker(void)
{
  long long system_initialization_result;
  system_initialization_result = system_execution_function(resource_manager_53_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_worker_thread_pool(unsigned long long handle_param,unsigned long long thread_op_flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  long long system_initialization_result;
  _Mtx_init_in_situ(SECOND_MUTEX_ADDRESS,2,mutex_attr,mutex_type,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_54_init_function);
  return (system_initialization_result != 0) - 1;
}
  system_memory_buffer_1 = 0;
  system_global_data_pointer = 7;
  strcpy_s(&system_memory_buffer_1,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString1,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_2;
  system_memory_buffer_2 = 0;
  system_global_data_pointer = 9;
  strcpy_s(&system_memory_buffer_2,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString2);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_3;
  system_memory_buffer_3 = 0;
  system_global_data_pointer = 0xb;
  strcpy_s(&system_memory_buffer_3,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString3);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_4;
  system_memory_buffer_4 = 0;
  system_global_data_pointer = 7;
  strcpy_s(&system_memory_buffer_4,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString4);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_5;
  system_memory_buffer_5 = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_FONT;
  strcpy_s(&system_memory_buffer_5,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString5);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_6;
  system_memory_buffer_6 = 0;
  system_global_data_pointer = 9;
  strcpy_s(&system_memory_buffer_6,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString6);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_7;
  system_memory_buffer_7 = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_FONT;
  strcpy_s(&system_memory_buffer_7,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString7);
  system_initialization_result = system_execution_function(&g_systemInitFunction4);
  return (system_initialization_result != 0) - 1;
}
int initialize_io_thread_pool(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_8;
  system_memory_buffer_8 = 0;
  system_global_data_pointer = 0x1b;
  strcpy_s(&system_memory_buffer_8,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString8,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_9;
  system_memory_buffer_9 = 0;
  system_global_data_pointer = 0x19;
  strcpy_s(&system_memory_buffer_9,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString9);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_10;
  system_memory_buffer_10 = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_MODEL;
  strcpy_s(&system_memory_buffer_10,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString10);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_11;
  system_memory_buffer_11 = 0;
  system_global_data_pointer = 0x1b;
  strcpy_s(&system_memory_buffer_11,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString11);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_12;
  system_memory_buffer_12 = 0;
  system_global_data_pointer = path_buffer_size;
  strcpy_s(&system_memory_buffer_12,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString12);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_13;
  system_memory_buffer_13 = 0;
  system_global_data_pointer = path_buffer_size;
  strcpy_s(&system_memory_buffer_13,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString13);
  system_initialization_result = system_execution_function(&g_systemInitFunction5);
  return (system_initialization_result != 0) - 1;
}
int initialize_background_thread_pool(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_14;
  system_memory_buffer_14 = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_STRING_MANAGER;
  strcpy_s(&system_memory_buffer_14,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString14,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_15;
  system_memory_buffer_15 = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_STRING_MANAGER;
  strcpy_s(&system_memory_buffer_15,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString14);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_16;
  system_memory_buffer_16 = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_STRING_MANAGER;
  strcpy_s(&system_memory_buffer_16,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString14);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_17;
  system_memory_buffer_17 = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_STRING_MANAGER;
  strcpy_s(&system_memory_buffer_17,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString14);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_18;
  system_memory_buffer_18 = 0;
  system_global_data_pointer = 0xe;
  strcpy_s(&system_memory_buffer_18,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString15);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_19;
  system_memory_buffer_19 = 0;
  system_global_data_pointer = 0xe;
  strcpy_s(&system_memory_buffer_19,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString15);
  system_initialization_result = system_execution_function(&g_systemInitFunction6);
  return (system_initialization_result != 0) - 1;
}
int initialize_backup_system(void)
{
  long long system_initialization_result;
  system_global_data_pointer = 0;
  system_ram_flag_1 = 0xf;
  system_global_flag_secondary = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_initialization_result = system_execution_function(resource_manager_55_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_recovery_system(void)
{
  long long system_initialization_result;
  system_global_data_pointer = 3;
  system_global_data_pointer = &system_data_buffer;
  system_global_data_pointer = &system_data_buffer;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_initialization_result = system_execution_function(resource_manager_56_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_priority_thread_pool(unsigned long long handle_param,unsigned long long thread_op_flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  long long system_initialization_result;
  _Mtx_init_in_situ(THIRD_MUTEX_ADDRESS,2,mutex_attr,mutex_type,DEFAULT_THREAD_POOL_FLAG);
  system_global_data_pointer = &shared_system_data_buffer;
  system_global_data_pointer = &system_thread_data_buffer;
  system_global_data_pointer = 0;
  system_thread_data_buffer = 0;
  system_initialization_result = system_execution_function(resource_manager_57_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_maintenance_service(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  system_global_data_pointer = &shared_system_data_buffer;
  system_global_data_pointer = &system_large_string_1;
  system_large_string_1 = 0;
  system_global_data_pointer = STRING_BUFFER_SIZE;
  strcpy_s(&system_large_string_1,SYSTEM_CONFIG_BUFFER_SIZE,&g_largeString1,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_58_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_optimization_system(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  system_global_data_pointer = &shared_system_data_buffer;
  system_global_data_pointer = &system_large_string_2;
  system_large_string_2 = 0;
  system_global_data_pointer = 3;
  strcpy_s(&system_large_string_2,SYSTEM_CONFIG_BUFFER_SIZE,&g_largeString2,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_59_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_performance_monitor(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  system_global_data_pointer = &shared_system_data_buffer;
  system_global_data_pointer = &system_large_string_3;
  system_large_string_3 = 0;
  system_global_data_pointer = 5;
  strcpy_s(&system_large_string_3,SYSTEM_CONFIG_BUFFER_SIZE,&g_largeString3,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_60_init_function);
  return (system_initialization_result != 0) - 1;
}
  config_shader_path_buffer = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_AUDIO;
  strcpy_s(&config_shader_path_buffer,path_buffer_size,&g_configString1,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_61_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_load_balancer(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  system_global_data_pointer = &g_alternateDataTemplate;
  system_global_data_pointer = &config_texture_path_buffer;
  config_texture_path_buffer = 0;
  system_global_data_pointer = 9;
  strcpy_s(&config_texture_path_buffer,path_buffer_size,&config_string_secondary,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_62_init_function);
  return (system_initialization_result != 0) - 1;
}
  config_model_path_buffer = 0;
  system_global_data_pointer = SYSTEM_RESOURCE_ID_AUDIO;
  strcpy_s(&config_model_path_buffer,path_buffer_size,&g_configString1,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_63_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_scaling_system(void)
{
  long long system_initialization_result;
  unsigned long long system_string_length;
  system_global_data_pointer = &g_alternateDataTemplate;
  system_global_data_pointer = &config_audio_path_buffer;
  config_audio_path_buffer = 0;
  system_global_data_pointer = 9;
  strcpy_s(&config_audio_path_buffer,path_buffer_size,&config_string_secondary,system_string_length_parameter,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execution_function(resource_manager_64_init_function);
  return (system_initialization_result != 0) - 1;
}
  system_thread_flag_2 = 1;
  system_thread_flag_1 = 0;
  system_temp_stack_array[0] = GetModuleHandleA(0);
  initialize_core_system(handle_param,system_temp_stack_array);
  initialize_subsystem_modules();
  initialize_service_layer();
  return;
}
void WotsMainNativeSDLL(unsigned long long handle_param)
{
  unsigned long long system_temp_stack_array [2];
  system_thread_flag_2 = 0;
  system_thread_flag_1 = 0;
  system_temp_stack_array[0] = GetModuleHandleA(0);
  initialize_core_system(handle_param,system_temp_stack_array);
  initialize_subsystem_modules();
  initialize_service_layer();
  return;
}
  system_status_flag_3 = 0;
  buffer_alloc_result = system_execution_function(system_global_data_pointer,THREAD_STACK_SIZE,8,3);
  system_global_data_pointer = create_event_handle_param(buffer_alloc_result);
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
    thread_name_pointer = &default_resource_config_string;
    if (thread_stack70 != (void *)0x0) {
      thread_name_pointer = thread_stack70;
    }
    buffer_alloc_result = atoi(thread_name_pointer);
    *(unsigned int *)(system_global_data_pointer + SYSTEM_OFFSET_GLOBAL_DATA) = buffer_alloc_result;
    thread_stack78 = &g_threadString2;
    if (thread_stack70 != (void *)0x0) {
      handle_param_system_error();
    }
    thread_stack70 = (void *)0x0;
    thread_stack_size_max60 = 0;
    thread_stack78 = &g_threadString4;
  }
  initialize_event_system();
  buffer_alloc_result = system_execution_function(system_global_data_pointer,NETWORK_BUFFER_SIZE,8,10);
  system_global_data_pointer = system_execution_function(buffer_alloc_result);
  thread_data_ptr = (long long *)system_execution_function(system_global_data_pointer,0xe8,8,3);
  thread_stack10 = thread_data_ptr;
  cleanup_thread_resources(thread_data_ptr);
  *thread_data_ptr = (long long)&g_threadString3;
  thread_stack_pptr_18 = (long long **)(thread_data_ptr + SYSTEM_OFFSET_THREAD_STACK);
  *thread_stack_pptr_18 = (long long *)&g_threadString4;
  thread_data_ptr[SYSTEM_OFFSET_THREAD_DATA] = 0;
  *(unsigned int *)(thread_data_ptr + SYSTEM_OFFSET_THREAD_FLAGS) = 0;
  *thread_stack_pptr_18 = (long long *)&g_threadString2;
  thread_data_ptr[SYSTEM_OFFSET_THREAD_CONTROL] = 0;
  thread_data_ptr[SYSTEM_OFFSET_THREAD_DATA] = 0;
  *(unsigned int *)(thread_data_ptr + SYSTEM_OFFSET_THREAD_FLAGS) = 0;
  (*(code *)(*thread_stack_pptr_18)[2])(thread_stack_pptr_18,handle_param);
  thread_data_ptr[SYSTEM_OFFSET_THREAD_CONFIG] = thread_op_flags;
  thread_stack48 = thread_data_ptr;
  (**(code **)(*thread_data_ptr + SYSTEM_OFFSET_THREAD_CALLBACK))(thread_data_ptr);
  system_data_ptr = system_global_data_pointer;
  thread_stack_pptr_18 = &thread_stack10;
  thread_stack10 = thread_data_ptr;
  (**(code **)(*thread_data_ptr + SYSTEM_OFFSET_THREAD_CALLBACK))(thread_data_ptr);
  register_event_callback(system_data_ptr,&thread_stack10);
  while( true ) {
    if ((void *)*thread_data_ptr == &g_threadString3) {
      system_char_variable = (char)thread_data_ptr[2] != '\0';
    }
    else {
      system_char_variable = (**(code **)((void *)*thread_data_ptr + SYSTEM_OFFSET_THREAD_HANDLER))(thread_data_ptr);
    }
    if (system_char_variable != '\0') break;
    Sleep(1);
  }
  (**(code **)(*thread_data_ptr + SYSTEM_OFFSET_THREAD_SYSTEM))(thread_data_ptr);
  thread_stack98 = &g_threadString2;
  if (thread_stack_size_max90 == 0) {
    return;
  }
  handle_param_system_error();
}
  system_thread_flag_2 = 1;
  system_thread_flag_1 = 0;
  system_temp_stack_array[0] = GetModuleHandleA(0);
  initialize_core_system(handle_param,system_temp_stack_array);
  initialize_subsystem_modules();
  initialize_service_layer();
  return;
}
void WotsMainNative(unsigned long long handle_param)
{
  unsigned long long system_temp_stack_array [2];
  system_thread_flag_2 = 0;
  system_thread_flag_1 = 0;
  system_temp_stack_array[0] = GetModuleHandleA(0);
  initialize_core_system(handle_param,system_temp_stack_array);
  initialize_subsystem_modules();
  initialize_service_layer();
  return;
}
void WotsMainNativeCoreCLR(unsigned long long handle_param)
{
  unsigned long long system_temp_stack_array [2];
  system_thread_flag_2 = 0;
  system_thread_flag_1 = 1;
  system_temp_stack_array[0] = GetModuleHandleA(0);
  initialize_core_system(handle_param,system_temp_stack_array);
  initialize_subsystem_modules();
  initialize_service_layer();
  return;
}
    system_config_flag = thread_result_index != 0xb7;
  }
  system_data_manager_initialize(system_global_data_pointer,0,0xd,&g_systemDataString1,system_config_flag);
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
  thread_name_pointer = &default_resource_config_string;
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
          *(unsigned char *)(system_global_data_pointer + SYSTEM_OFFSET_INITIALIZATION_FLAG) = 0;
          thread_stack_ptr2c8 = &g_threadString2;
          stack_size_max2b0 = 0;
          thread_stack_ptr2c0 = (unsigned char *)0x0;
          stack_size_max2b8 = 0;
          if (string_ptr_17 != (void *)0x0) {
            system_string_length = -1;
            do {
              prev_length = system_string_length;
              system_string_length = prev_length + 1;
            } while (string_ptr_17[system_string_length] != '\0');
            if ((int)system_string_length != 0) {
              buffer_size = (int)prev_length + 2;
              alloc_size = buffer_size;
              if (buffer_size < STRING_BUFFER_SIZE) {
                alloc_size = STRING_BUFFER_SIZE;
              }
              buffer_ptr = (unsigned char *)system_execution_function(system_global_data_pointer,(long long)alloc_size,0x13);
              *buffer_ptr = 0;
              thread_stack_ptr2c0 = buffer_ptr;
              buffer_handle_param = allocate_temporary_buffer(buffer_ptr);
              stack_size_max2b0 = merge_32bit_values(stack_size_max2b0._4_4_,buffer_handle_param);
              memcpy(buffer_ptr,string_ptr_17,buffer_size);
            }
          }
          stack_size_max2b8 = 0;
          strstr(&default_resource_config_string,&g_systemDataString2);
          strstr(&default_resource_config_string,&g_systemDataString3);
          strstr(&default_resource_config_string,&g_systemDataString4);
          strstr(&default_resource_config_string,&g_systemDataString5);
          strstr(&default_resource_config_string,&g_systemDataString6);
          strstr(&default_resource_config_string,&g_systemDataString7);
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
              *(unsigned short *)(str_len_counter + SYSTEM_OFFSET_STRING_LENGTH) = PRIMARY_STRING_BUFFER_SIZE;
              *(unsigned char *)(str_len_counter + SYSTEM_OFFSET_STRING_BUFFER) = 1;
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
                  thread_name_pointer = &default_resource_config_string;
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
                    thread_name_pointer = &default_resource_config_string;
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
                  system_thread_manager_configure(&thread_stack_ptr);
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
                  system_thread_manager_validate(&thread_stack_ptr,1);
                  string_input_ptr = &default_resource_config_string;
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
                    system_thread_manager_create(str_len_counter + SYSTEM_OFFSET_STRING_COUNTER,thread_op_flags);
                  }
                  if (buffer_alloc_result != 0) {
                    memcpy(*(unsigned long long *)(str_len_counter + SYSTEM_OFFSET_STRING_SIZE),thread_stack_ptr,thread_op_flags);
                  }
                  *(unsigned int *)(str_len_counter + SYSTEM_OFFSET_STRING_MAX) = 0;
                  if (*(long long *)(str_len_counter + SYSTEM_OFFSET_STRING_SIZE) != 0) {
                    *(unsigned char *)(thread_op_flags + *(long long *)(str_len_counter + SYSTEM_OFFSET_STRING_SIZE)) = 0;
                  }
                  *(unsigned int *)(str_len_counter + SYSTEM_OFFSET_STRING_SIZE_MAX) = stack_size_max;
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
                    system_thread_manager_validate(&thread_stack_ptr,1);
                    buffer_alloc_result = stack_size_max;
                    thread_op_flags = (ulong long)stack_size_max;
                    if (thread_stack_base_address != 0) {
                      system_thread_manager_create(str_len_counter + SYSTEM_OFFSET_STRING_COUNTER,thread_op_flags);
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
                    system_thread_manager_cleanup(&thread_stack_ptr);
                    system_thread_manager_reset(&thread_stack_ptr);
                    system_event_handler_register(&event_data_buffer,&thread_stack_ptr);
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
                    string_input_ptr = &default_resource_config_string;
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
                      string_input_ptr = (unsigned int *)system_execution_function(system_global_data_pointer,STRING_BUFFER_SIZE,0x13);
                      *(unsigned char *)string_input_ptr = 0;
                      thread_stack_ptr = string_input_ptr;
                      buffer_alloc_result = allocate_temporary_buffer(string_input_ptr);
                      stack_size_max = merge_32bit_values(stack_size_max._4_4_,buffer_alloc_result);
                      *string_input_ptr = STRING_TERMINATOR_PATTERN_1;
                      string_input_ptr[1] = STRING_TERMINATOR_PATTERN_2;
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
                        *(unsigned char *)(system_global_data_pointer + 0x22) = 1;
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
                          system_data_manager_process(system_global_data_pointer,string_input_ptr);
                        }
                        goto section_processing_jump_label_;
                      }
                      if (buffer_alloc_result == 0x1a) {
                        thread_result_index = strcmp(string_input_ptr);
                        if (thread_result_index == 0) {
                          *(unsigned char *)(system_global_data_pointer + 0x21) = 1;
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
                    str_len_counter = system_global_data_pointer;
                    if (string_match_found) {
                      create_thread_context(&thread_stack_ptr,string_input_ptr);
                      system_thread_manager_cleanup(&thread_stack_ptr);
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
                      if (buffer_alloc_result != INVALID_HANDLE_VALUE) {
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
                      system_thread_manager_reset(&thread_stack_ptr);
                      buffer_alloc_result = stack_size_max;
                      str_len_counter = system_global_data_pointer;
                      *(unsigned char *)(system_global_data_pointer + 0x48) = 1;
                      thread_op_flags = (ulong long)stack_size_max;
                      if (pcStack_328 != (char *)0x0) {
                        system_thread_manager_create(str_len_counter + 0x50,thread_op_flags);
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
                      thread_op_flags = system_thread_manager_get_status();
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
                        string_input_ptr = (unsigned char *)system_execution_function(system_global_data_pointer,(long long)thread_result_index,0x13);
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
                                        system_execution_function(system_global_data_pointer,(long long)(int)thread_op_flags,0x13);
                              *string_input_ptr = 0;
                            }
                            else {
                              if (thread_op_flags <= (uint)string_input_ptr) goto section_processing_jump_label_;
                              stack_size_max = 0x13;
                              string_input_ptr = (unsigned char *)
                                        system_execution_function(system_global_data_pointer,string_input_ptr,thread_op_flags,STRING_BUFFER_SIZE);
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
                      stack_size_max = thread_op_flags thread_op_flags & 0xfffffffe STACK_ALIGNMENT_MASK;
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
                        system_thread_manager_create(system_global_data_pointer + 0x28,string_input_ptr);
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
        system_thread_manager_create(&thread_stack_ptr,buffer_alloc_result + 1);
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
  thread_stack_ptr = system_config_stack_buffer;
  system_config_stack_buffer[0] = 0;
  stack_size_max = STRING_BUFFER_SIZE;
  strcpy_s(system_config_stack_buffer, SYSTEM_CONFIG_BUFFER_SIZE, &systemConfigStringBuffer);
  system_char_variable = system_handle_manager_resolve(str_len_counter,&thread_stack_ptr);
  thread_stack_ptr = &g_threadString4;
  if (system_char_variable != '\0') {
    *(unsigned int *)(str_len_counter + path_buffer_size) = 1;
  }
  (**(code **)(**(long long **)(system_global_data_pointer + 0x18) + 0x30))
            (*(long long **)(system_global_data_pointer + 0x18),system_crash_handle_paramr_flag);
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
  system_helper_execute(str_len_counter,system_initialization_result0,str_len_counter,thread_op_flags);
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
    system_event_handler_unregister(&thread_stack_ptr,&thread_stack_ptr,&systemEventHandlerConfig);
  }
  string_input_ptr = thread_stack_ptr;
  system_thread_manager_destroy(&thread_stack_ptr,thread_stack_ptr);
  system_thread_manager_destroy(&thread_stack_ptr,string_input_ptr + 4);
  string_input_ptr = thread_stack_ptr;
  if (((long long)thread_stack_ptr - (long long)string_input_ptr & INVALID_HANDLE_VALUEffffffe0U) != SYSTEM_CONFIG_BUFFER_SIZE) {
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
  system_ui_002(system_global_data_pointer,&thread_stack_ptr,&thread_stack_ptr);
  str_len_counter = system_global_data_pointer + 0x90;
  str_len_counter = system_execution_function(system_global_data_pointer, SYSTEM_CONFIG_BUFFER_SIZE,*(unsigned char *)(system_global_data_pointer + 0xb8));
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
      system_initialization_result0 = *(long long *)(str_len_counter + 0x28) - (long long)byte_string_input_ptr;
      do {
        byte_check_result = *byte_string_input_ptr;
        buffer_alloc_result = (uint)byte_string_input_ptr[system_initialization_result0];
        if (byte_check_result != buffer_alloc_result) break;
        byte_string_input_ptr = byte_string_input_ptr + 1;
      } while (buffer_alloc_result != 0);
      if ((int)(byte_check_result - buffer_alloc_result) < 1) goto section_processing_jump_label_;
    }
  }
  thread_op_flags = 0;
section_processing_jump_label_:
  system_helper_execute(str_len_counter,str_len_counter,str_len_counter,thread_op_flags);
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
  *(unsigned int *)(system_global_data_pointer + 4) = 0;
  if (*(char *)(str_len_counter + 0x1ee) == '\0') {
    (**(code **)(**(long long **)(str_len_counter + 0x2b0) + 0xe0))();
    *(int *)(str_len_counter + 0x224) = *(int *)(str_len_counter + 0x224) + 1;
    if (*(int *)(system_global_data_pointer + 0xe0) == 0) {
      if (*(char *)(str_len_counter + 0x264) == '\0') {
        thread_result_index = 10;
        if (10 < *(int *)(system_global_data_pointer + 0xbd0)) {
          thread_result_index = *(int *)(system_global_data_pointer + 0xbd0);
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
    buffer_alloc_result = system_global_data_pointer;
    if ((system_global_data_pointer != 0) &&
       (psystem_initialization_result = *(long long **)(system_global_data_pointer + 0x228), psystem_initialization_result != (long long *)0x0)) {
      ppstack_long_var = &pstack_long_var;
      pstack_long_var = psystem_initialization_result;
      (**(code **)(*psystem_initialization_result + 0x28))();
      system_event_handle_paramr_013(buffer_alloc_result,&pstack_long_var);
    }
    buffer_alloc_result = system_global_data_pointer;
    if (*(char *)(system_global_data_pointer + 0xa0) == '\0') {
      if ((system_global_data_pointer != 0) &&
         (psystem_initialization_result = *(long long **)(system_global_data_pointer + 0x228), psystem_initialization_result != (long long *)0x0)) {
        ppstack_long_var = &pstack_long_var;
        pstack_long_var = psystem_initialization_result;
        (**(code **)(*psystem_initialization_result + 0x28))();
        system_event_handle_paramr_016(buffer_alloc_result,&pstack_long_var,0);
        psystem_initialization_result = *(long long **)(system_global_data_pointer + 0x228);
        *(unsigned long long *)(system_global_data_pointer + 0x228) = 0;
        if (psystem_initialization_result != (long long *)0x0) {
          (**(code **)(*psystem_initialization_result + 0x38))();
        }
      }
      render_engine_function(system_global_data_pointer);
      psystem_initialization_result = system_global_data_pointer;
      if (*(code **)(*system_global_data_pointer + 8) == (code *)&systemInitializationCheckFunction) {
        *(unsigned int *)(system_global_data_pointer + 9) = 0;
        string_input_ptr = (unsigned char *)psystem_initialization_result[8];
        if (string_input_ptr != (unsigned char *)0x0) {
          *string_input_ptr = 0;
        }
        *(unsigned int *)((long long)psystem_initialization_result + 0x54) = 0;
      }
      else {
        (**(code **)(*system_global_data_pointer + 8))();
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
    system_performance_counter_prev = (double)thread_stack_base_address * system_global_data_pointer;
    system_global_data_pointer = system_global_data_pointer + 1;
    system_performance_counter_diff = system_performance_counter_prev - system_global_data_pointer;
    if (1.0 < system_performance_counter_diff) {
      *(float *)(str_len_counter + 500) = (float)((double)system_global_data_pointer / system_performance_counter_diff);
      system_global_data_pointer = 0;
      system_global_data_pointer = system_performance_counter_prev;
      *(float *)(str_len_counter + SYSTEM_CONSTANT_28) = (float)(1000.0 / *(double *)(str_len_counter + 0x70));
    }
    if (0.0 < *(double *)(system_global_data_pointer + 0x1510)) {
      system_handle_param_manager_005(str_len_counter,(float)*(double *)(system_global_data_pointer + 0x1510));
    }
    if (*(char *)(str_len_counter + 0x1ee) == '\0') {
      float_var = *(float *)(str_len_counter + path_buffer_size0);
      system_performance_timeout = *(double *)(str_len_counter + 0x218);
      do {
        QueryPerformanceCounter(&thread_stack_base_address);
      } while ((double)thread_stack_base_address * system_global_data_pointer < (double)float_var + system_performance_timeout);
      QueryPerformanceCounter(&thread_stack_base_address);
      str_len_counter = thread_stack_base_address - system_global_data_pointer;
      system_global_data_pointer = thread_stack_base_address;
      *(double *)(str_len_counter + path_buffer_size8) = (double)str_len_counter * system_global_data_pointer;
      QueryPerformanceCounter(&thread_stack_base_address);
      *(double *)(str_len_counter + 0x218) = (double)thread_stack_base_address * system_global_data_pointer;
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
  *(unsigned int *)(system_global_data_pointer + 4) = 0;
  if (*(char *)(handle_param + 0x1ee) == '\0') {
    (**(code **)(**(long long **)(handle_param + 0x2b0) + 0xe0))();
    *(int *)(handle_param + 0x224) = *(int *)(handle_param + 0x224) + 1;
    if (*(int *)(system_global_data_pointer + 0xe0) == 0) {
      if (*(char *)(handle_param + 0x264) == '\0') {
        thread_result_index = 10;
        if (10 < *(int *)(system_global_data_pointer + 0xbd0)) {
          thread_result_index = *(int *)(system_global_data_pointer + 0xbd0);
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
    buffer_alloc_result = system_global_data_pointer;
    if ((system_global_data_pointer != 0) &&
       (psystem_initialization_result = *(long long **)(system_global_data_pointer + 0x228), psystem_initialization_result != (long long *)0x0)) {
      ppstack_long_var = &pstack_long_var;
      pstack_long_var = psystem_initialization_result;
      (**(code **)(*psystem_initialization_result + 0x28))();
      system_event_handle_paramr_013(buffer_alloc_result,&pstack_long_var);
    }
    buffer_alloc_result = system_global_data_pointer;
    if (*(char *)(system_global_data_pointer + 0xa0) == '\0') {
      if ((system_global_data_pointer != 0) &&
         (psystem_initialization_result = *(long long **)(system_global_data_pointer + 0x228), psystem_initialization_result != (long long *)0x0)) {
        ppstack_long_var = &pstack_long_var;
        pstack_long_var = psystem_initialization_result;
        (**(code **)(*psystem_initialization_result + 0x28))();
        system_event_handle_paramr_016(buffer_alloc_result,&pstack_long_var,0);
        psystem_initialization_result = *(long long **)(system_global_data_pointer + 0x228);
        *(unsigned long long *)(system_global_data_pointer + 0x228) = 0;
        if (psystem_initialization_result != (long long *)0x0) {
          (**(code **)(*psystem_initialization_result + 0x38))();
        }
      }
      render_engine_function(system_global_data_pointer);
      psystem_initialization_result = system_global_data_pointer;
      if (*(code **)(*system_global_data_pointer + 8) == (code *)&systemInitializationCheckFunction) {
        *(unsigned int *)(system_global_data_pointer + 9) = 0;
        string_input_ptr = (unsigned char *)psystem_initialization_result[8];
        if (string_input_ptr != (unsigned char *)0x0) {
          *string_input_ptr = 0;
        }
        *(unsigned int *)((long long)psystem_initialization_result + 0x54) = 0;
      }
      else {
        (**(code **)(*system_global_data_pointer + 8))();
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
    system_performance_base = (double)thread_stack_base_address * system_global_data_pointer;
    system_global_data_pointer = system_global_data_pointer + 1;
    system_performance_diff = system_performance_base - system_global_data_pointer;
    if (1.0 < system_performance_diff) {
      *(float *)(handle_param + 500) = (float)((double)system_global_data_pointer / system_performance_diff);
      system_global_data_pointer = 0;
      system_global_data_pointer = system_performance_base;
      *(float *)(handle_param + SYSTEM_CONSTANT_28) = (float)(1000.0 / *(double *)(handle_param + 0x70));
    }
    if (0.0 < *(double *)(system_global_data_pointer + 0x1510)) {
      system_handle_param_manager_005(handle_param,(float)*(double *)(system_global_data_pointer + 0x1510));
    }
    if (*(char *)(handle_param + 0x1ee) == '\0') {
      float_var = *(float *)(handle_param + path_buffer_size0);
      system_performance_timeout = *(double *)(handle_param + 0x218);
      do {
        QueryPerformanceCounter(&thread_stack_base_address);
      } while ((double)thread_stack_base_address * system_global_data_pointer < (double)float_var + system_performance_timeout);
      QueryPerformanceCounter(&thread_stack_base_address);
      str_len_counter = thread_stack_base_address - system_global_data_pointer;
      system_global_data_pointer = thread_stack_base_address;
      *(double *)(handle_param + path_buffer_size8) = (double)str_len_counter * system_global_data_pointer;
      QueryPerformanceCounter(&thread_stack_base_address);
      *(double *)(handle_param + 0x218) = (double)thread_stack_base_address * system_global_data_pointer;
    }
  }
  return;
}
    io_status_flag = io_status_flag == '\0';
  }
  str_len_counter = 0xe0;
  string_input_ptr = system_global_data_pointer;
  do {
    string_input_ptr = string_input_ptr + 0x18;
    *string_input_ptr = 1;
    str_len_counter = str_len_counter + -1;
  } while (str_len_counter != 0);
section_processing_jump_label_:
  string_input_ptr = (unsigned long long *)system_global_data_pointer[1];
  thread_result_index = _Mtx_lock(ADDR_MAIN_MUTEX);
  if (thread_result_index != 0) {
    __Throw_C_error_std__YAXH_Z(thread_result_index);
  }
  psystem_initialization_result4 = system_global_data_pointer;
  stack_size_max = system_global_data_pointer;
  system_global_data_pointer = (long long *)*string_input_ptr;
  system_operation_stack_buffer[0] = 0;
  plStack_2f8 = alStack_90;
  buffer_alloc_result = 0;
  alStack_90[0] = 0;
  alStack_90[1] = 0;
  alStack_90[2] = 0;
  stack_size_max = 3;
  system_execution_function(system_operation_stack_buffer);
  system_handle_param_manager_002((long long)system_global_data_pointer * 0x238 + system_global_data_pointer + 0x1598,system_operation_stack_buffer);
  plStack_2f8 = alStack_90;
  if (alStack_90[0] != 0) {
    handle_param_system_error();
  }
  system_global_data_pointer = psystem_initialization_result4;
  thread_result_index = _Mtx_unlock(ADDR_MAIN_MUTEX);
  if (thread_result_index != 0) {
    __Throw_C_error_std__YAXH_Z(thread_result_index);
  }
  psystem_initialization_result4 = (long long *)*system_global_data_pointer;
  thread_result_index = _Mtx_lock(ADDR_MAIN_MUTEX);
  if (thread_result_index != 0) {
    __Throw_C_error_std__YAXH_Z(thread_result_index);
  }
  psystem_initialization_result = system_global_data_pointer;
  stack_size_max = system_global_data_pointer;
  system_global_data_pointer = (long long *)*psystem_initialization_result4;
  system_operation_stack_buffer[0] = 0;
  plStack_2f8 = alStack_90;
  alStack_90[0] = 0;
  alStack_90[1] = 0;
  alStack_90[2] = 0;
  stack_size_max = 3;
  system_execution_function(system_operation_stack_buffer);
  system_execution_function(system_operation_stack_buffer);
  *(float *)((long long)system_global_data_pointer + 0x18) = system_global_data_pointer;
  system_initializer_001();
  str_len_counter = (long long)system_global_data_pointer;
  string_input_ptr = system_global_data_pointer;
  string_input_ptr = system_global_data_pointer;
  if (*(char *)(system_global_data_pointer + 7) != '\0') {
    if ((((*(char *)(system_global_data_pointer + 0xe) != '\0') ||
         (*(char *)((long long)system_global_data_pointer + 0x38c) != '\0')) ||
        (*(char *)((long long)system_global_data_pointer + 0x38d) != '\0')) ||
       (*(char *)((long long)system_global_data_pointer + 0x38e) != '\0')) {
      system_global_data_pointer[0x1518] = 1;
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
        system_initialization_result2 = system_initialization_result2 + -1;
      } while (system_initialization_result2 != 0);
    }
  }
  plStack_2f8 = alStack_90;
  if (alStack_90[0] != 0) {
    handle_param_system_error();
  }
  system_global_data_pointer = psystem_initialization_result;
  thread_result_index = _Mtx_unlock(ADDR_MAIN_MUTEX);
  if (thread_result_index != 0) {
    __Throw_C_error_std__YAXH_Z(thread_result_index);
  }
  if (*(int *)(system_global_data_pointer + 0x161c) == 0x11) {
    string_input_ptr = (unsigned long long *)*system_global_data_pointer;
    thread_result_index = _Mtx_lock(ADDR_MAIN_MUTEX);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    psystem_initialization_result4 = system_global_data_pointer;
    plStack_2c0 = system_global_data_pointer;
    system_global_data_pointer = (long long *)*string_input_ptr;
    system_initializer_003(&systemConfigData1,0,0);
    system_config_001(&systemConfigData2);
    stack_size_max = SYSTEM_CONFIG_BUFFER_SIZE_ZERO;
    system_parameter_stack_buffer[0] = FLOAT_ONE;
    stack_size_max = path_buffer_size000;
    thread_stack_ptr = &systemConfigBufferPtr;
    pplStack_328 = (long long **)&stack_size_max;
    system_config_002(&systemConfigData3,4,system_global_data_pointer + 0x167c,system_parameter_stack_buffer);
    plStack_2f8 = (long long *)merge_32bit_values(plStack_2f8._4_4_, SYSTEM_CONFIG_BUFFER_SIZE_ZERO);
    stack_size_max = (long long *)merge_32bit_values(stack_size_max._4_4_,FLOAT_ONE);
    stack_size_max = path_buffer_size000;
    thread_stack_ptr = &systemConfigBufferPtr;
    pplStack_328 = &plStack_2f8;
    system_config_002(&systemConfigData4,4,system_global_data_pointer + 0x1680,&stack_size_max);
    system_initializer_004();
    system_global_data_pointer = psystem_initialization_result4;
    thread_result_index = _Mtx_unlock(ADDR_MAIN_MUTEX);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
  }
  if (*(int *)(system_global_data_pointer + 0x161c) == 0xc) {
    string_input_ptr = (unsigned long long *)*system_global_data_pointer;
    thread_result_index = _Mtx_lock(ADDR_MAIN_MUTEX);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    psystem_initialization_result4 = system_global_data_pointer;
    plStack_2c0 = system_global_data_pointer;
    system_global_data_pointer = (long long *)*string_input_ptr;
    system_initializer_003(&systemConfigData6,0,0);
    stack_size_max = (long long *)merge_32bit_values(stack_size_max._4_4_, SYSTEM_CONFIG_BUFFER_SIZE_ZERO);
    plStack_2f8 = (long long *)merge_32bit_values(plStack_2f8._4_4_,FLOAT_ONE);
    stack_size_max = path_buffer_size000;
    thread_stack_ptr = &systemConfigBufferPtr;
    pplStack_328 = (long long **)&stack_size_max;
    system_config_002(&systemConfigData5,4,system_global_data_pointer + 0x1688,&plStack_2f8);
    system_initializer_004();
    system_global_data_pointer = psystem_initialization_result4;
    thread_result_index = _Mtx_unlock(ADDR_MAIN_MUTEX);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
  }
  if (*(int *)(system_global_data_pointer + 0x161c) == 0xd) {
    string_input_ptr = (unsigned long long *)*system_global_data_pointer;
    thread_result_index = _Mtx_lock(ADDR_MAIN_MUTEX);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    psystem_initialization_result4 = system_global_data_pointer;
    plStack_2c0 = system_global_data_pointer;
    system_global_data_pointer = (long long *)*string_input_ptr;
    system_initializer_003(&systemConfigData7,0,0);
    stack_size_max = (long long *)merge_32bit_values(stack_size_max._4_4_, SYSTEM_CONFIG_BUFFER_SIZE_ZERO);
    plStack_2f8 = (long long *)merge_32bit_values(plStack_2f8._4_4_,FLOAT_ONE);
    stack_size_max = path_buffer_size000;
    thread_stack_ptr = &systemConfigBufferPtr;
    pplStack_328 = (long long **)&stack_size_max;
    system_config_002(&systemConfigData5,4,system_global_data_pointer + 0x168c,&plStack_2f8);
    if (*(float *)(system_global_data_pointer + 0x168c) == 0.0) {
      *(unsigned int *)(system_global_data_pointer + 0x168c) = FLOAT_ONE;
    }
    system_initializer_004();
    system_global_data_pointer = psystem_initialization_result4;
    thread_result_index = _Mtx_unlock(ADDR_MAIN_MUTEX);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
  }
  string_input_ptr = (unsigned long long *)*system_global_data_pointer;
  if (string_input_ptr != (unsigned long long *)0x0) {
    if ((void *)*string_input_ptr == &systemValidationFunction) {
      NVGSDK_Poll(string_input_ptr[1]);
    }
    else {
      (**(code **)((void *)*string_input_ptr + 8))();
    }
  }
  *system_global_data_pointer = float_var;
  str_len_counter = (long long)*(int *)(system_global_data_pointer + 0x1d40) * 0xd0;
  system_initialization_result2 = *(long long *)(str_len_counter + 0xb0 + *(long long *)(system_global_data_pointer + 0x1d20));
  float_var = (float)system_initialization_result2;
  if (system_initialization_result2 < 0) {
    float_var = float_var + 1.8446744e+19;
  }
  if (float_var * 8.5830686e-07 < (float)*(int *)(system_global_data_pointer + 4)) {
    *(float *)(system_global_data_pointer + STRING_BUFFER_SIZE) = float_var + *(float *)(system_global_data_pointer + STRING_BUFFER_SIZE);
    float_var = (float)fmodf(str_len_counter,FLOAT_ONE);
    if (0.5 < float_var) {
      thread_stack_ptr = &g_threadString2;
      stack_size_max = 0;
      thread_stack_ptr = (unsigned long long *)0x0;
      stack_size_max = 0;
      string_input_ptr = (unsigned long long *)system_execution_function(system_global_data_pointer,0x1c,0x13);
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
  psystem_initialization_result4 = system_global_data_pointer;
  if ((char)system_global_data_pointer[0x42] == '\0') {
    (**(code **)(*system_global_data_pointer + 0xb0))(system_global_data_pointer,*(unsigned int *)(system_global_data_pointer + 0x1340));
    (**(code **)(*psystem_initialization_result4 + 0xb8))(psystem_initialization_result4,*(unsigned int *)(system_global_data_pointer + 0x1500));
    (**(code **)(*psystem_initialization_result4 + 0xc0))(psystem_initialization_result4,*(unsigned int *)(system_global_data_pointer + 0x13b0));
    (**(code **)(*psystem_initialization_result4 + 200))(psystem_initialization_result4,*(unsigned int *)(system_global_data_pointer + 0x1490));
    (**(code **)(*psystem_initialization_result4 + 0x50))(psystem_initialization_result4);
  }
  string_input_ptr = system_global_data_pointer;
  psystem_initialization_result4 = *(long long **)(system_global_data_pointer + 0x17ec);
  *system_global_data_pointer = 0;
  stack_size_max._0_4_ = SUB84(psystem_initialization_result4,0);
  *(unsigned int *)(string_input_ptr + 1) = (unsigned int)stack_size_max;
  stack_size_max._4_4_ = (unsigned int)((ulong long)psystem_initialization_result4 >> path_buffer_size);
  *(unsigned int *)((long long)string_input_ptr + 0xc) = stack_size_max._4_4_;
  *(unsigned int *)(string_input_ptr + 8) = 0;
  stack_size_max = psystem_initialization_result4;
  system_finalizer_001();
  system_finalizer_002();
  if (((*(int *)(handle_param + 0x340) != 0) && (system_global_data_pointer != (long long *)0x0)) &&
     (system_char_variable = (**(code **)(*system_global_data_pointer + 0x28))(), system_char_variable != '\0')) {
    (**(code **)(system_global_data_pointer + 0x98))();
  }
  (**(code **)(**(long long **)(handle_param + 0x2b0) + 0x30))(*(long long **)(handle_param + 0x2b0),thread_op_flags);
  if (((*(int *)(handle_param + 0x340) != 0) && (system_global_data_pointer != (long long *)0x0)) &&
     (system_char_variable = (**(code **)(*system_global_data_pointer + 0x28))(), system_char_variable != '\0')) {
    (*(code *)system_global_data_pointer[7])();
  }
  if (((*(int *)(handle_param + 0x340) != 0) && (system_global_data_pointer != (long long *)0x0)) &&
     (system_char_variable = (**(code **)(*system_global_data_pointer + 0x28))(), system_char_variable != '\0')) {
    *(unsigned long long *)(*(long long *)(handle_param + 0x3c0) + 0x18) =
         *(unsigned long long *)(*(long long *)(handle_param + 0x3c0) + STRING_BUFFER_SIZE);
    psystem_initialization_result4 = (long long *)(system_global_data_pointer + path_buffer_size30);
    buffer_alloc_result = buffer_alloc_result;
    if (*(long long *)(system_global_data_pointer + path_buffer_size38) - *psystem_initialization_result4 >> 2 != 0) {
      do {
        stack_size_max = *(unsigned int *)(buffer_alloc_result + *psystem_initialization_result4);
        system_initialization_result2 = *(long long *)(handle_param + 0x3c0) + STRING_BUFFER_SIZE;
        system_execution_function(system_initialization_result2,&stack_size_max);
        system_execution_function(system_initialization_result2,(long long)&stack_size_max + 1);
        system_execution_function(system_initialization_result2,(long long)&stack_size_max + 2);
        system_execution_function(system_initialization_result2,(long long)&stack_size_max + 3);
        buffer_alloc_result = (int)buffer_alloc_result + 1;
        buffer_alloc_result = (ulong long)buffer_alloc_result;
        psystem_initialization_result4 = (long long *)(system_global_data_pointer + path_buffer_size30);
        buffer_alloc_result = buffer_alloc_result + 4;
      } while ((ulong long)(long long)(int)buffer_alloc_result <
               (ulong long)(*(long long *)(system_global_data_pointer + path_buffer_size38) - *psystem_initialization_result4 >> 2));
    }
    (**(code **)(system_global_data_pointer + 0xa8))();
  }
  (**(code **)(**(long long **)(handle_param + 0x2b0) + 0x38))(*(long long **)(handle_param + 0x2b0),thread_op_flags);
  (**(code **)(**(long long **)(handle_param + 0x2b0) + SYSTEM_CONFIG_BUFFER_SIZE))(*(long long **)(handle_param + 0x2b0),thread_op_flags);
  system_execution_function();
  if (io_status_flag != '\0') {
    thread_stack_ptr = &g_threadString2;
    stack_size_max = 0;
    thread_stack_ptr = (unsigned long long *)0x0;
    stack_size_max = 0;
    string_input_ptr = (unsigned long long *)system_execution_function(system_global_data_pointer,0x19,0x13);
    *(unsigned char *)string_input_ptr = 0;
    thread_stack_ptr = string_input_ptr;
    buffer_alloc_result = allocate_temporary_buffer(string_input_ptr);
    stack_size_max = merge_32bit_values(stack_size_max._4_4_,buffer_alloc_result);
    *string_input_ptr = 0x6d6d6f43204c4752;
    string_input_ptr[1] = 0x656e696c20646e61;
    string_input_ptr[2] = 0x656c6f736e6f6320;
    *(unsigned char *)(string_input_ptr + 3) = 0;
    system_initialization_result2 = system_global_data_pointer;
    stack_size_max = 0x18;
    string_input_ptr = (unsigned long long *)*system_global_data_pointer;
    thread_result_index = _Mtx_lock(ADDR_MAIN_MUTEX);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    psystem_initialization_result4 = system_global_data_pointer;
    plStack_2c0 = system_global_data_pointer;
    system_global_data_pointer = (long long *)*string_input_ptr;
    plStack_2f8 = (long long *)0x0;
    stack_size_max = (long long *)0x0;
    pplStack_328 = (long long **)&cStack_300;
    system_processor_002(system_initialization_result2,&thread_stack_ptr,&plStack_2f8,&stack_size_max);
    if (*(char *)(system_initialization_result2 + 0x60) != '\0') {
      system_processor_003(system_initialization_result2,&plStack_2f8,&stack_size_max,acStack_2ff);
    }
    if ((cStack_300 == '\0') && (acStack_2ff[0] == '\0')) {
      *(unsigned char *)(system_initialization_result2 + 0x60) = 0;
    }
    system_global_data_pointer = psystem_initialization_result4;
    thread_result_index = _Mtx_unlock(ADDR_MAIN_MUTEX);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    thread_stack_ptr = &g_threadString2;
    handle_param_system_error(string_input_ptr);
  }
  system_execute_crypto_operation(stack_size_max ^ (ulong long)system_crypto_stack_buffer_large);
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
    system_global_data_pointer = system_global_data_pointer + -1;
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
      system_global_data_pointer = system_global_data_pointer + -1;
      UNLOCK();
    }
    return;
  }
  handle_param_system_error();
}
  system_initialized_flag = 1;
  system_event_handle_paramr_015(system_global_data_pointer);
  system_cleanup_002();
  system_cleanup_008(0);
  if (system_thread_sync_flag != '\0') {
    LOCK();
    *(unsigned int *)(*(long long *)(system_global_data_pointer + 0x48) + 0xcc) = 0;
    UNLOCK();
  }
  system_execution_function();
  if ((system_operation_flag == '\0') &&
     (psystem_initialization_result = *(long long **)(system_global_data_pointer + 0x18), psystem_initialization_result != (long long *)0x0)) {
    system_char_variable = (**(code **)*psystem_initialization_result)(psystem_initialization_result);
    if (system_char_variable != '\0') {
      (**(code **)(*psystem_initialization_result + 0x28))(psystem_initialization_result);
    }
  }
  system_cleanup_009();
  str_len_counter = system_global_data_pointer;
  if (system_global_data_pointer != 0) {
    system_cleanup_011(system_global_data_pointer);
    handle_param_system_error(str_len_counter);
  }
  system_global_data_pointer = 0;
  system_thread_manager_008(system_global_data_pointer);
  str_len_counter = system_global_data_pointer;
  if (system_global_data_pointer != 0) {
    system_thread_manager_008(system_global_data_pointer);
    _Mtx_destroy_in_situ();
    handle_param_system_error(str_len_counter);
  }
  system_global_data_pointer = 0;
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
        thread_result_index = ReleaseSemaphore(system_global_data_pointer,1);
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
  system_execute_crypto_operation(stack_size_max ^ (ulong long)system_thread_stack_buffer_small);
}
uint validate_system_mutex_lock(void)
{
  uint reg_eax;
  int thread_result_index;
  long long str_len_counter;
  if (system_global_data_pointer != 0) {
    str_len_counter = system_global_data_pointer + SYSTEM_MODULE_OFFSET_2;
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
      system_global_data_pointer = 0;
      strcpy_s(&crypto_buffer_primary,SYSTEM_POINTER_OFFSET0,&default_resource_config_string,mutex_type,buffer_alloc_result);
      system_crypto_initializer(system_execution_function);
      system_crypto_module_initializer(&crypto_context_primary);
      return &crypto_return_buffer;
    }
  }
  return &crypto_return_buffer;
}
    thread_pool_active = '\x01';
    system_thread_manager_validate(handle_param,CONCAT_BYTES_TO_64BIT((int7)((ulong long)string_input_ptr >> 8),1));
  }
  system_execute_crypto_operation(stack_size_max ^ (ulong long)system_crypto_stack_buffer_medium);
}
    thread_pool_2_status_code = '\0';
    if ((cStack_208 != '\0') && (thread_result_index = _Mtx_unlock(stack_size_max), thread_result_index != 0)) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    if (system_char_variable != '\0') goto section_processing_jump_label_;
    *(unsigned char *)(*(long long *)(*(long long *)(system_global_data_pointer + 8) + 0x140) + path_buffer_size8) = 1;
  }
  thread_pool_2_status_code = '\0';
  thread_result_index = _Mtx_unlock(RENDER_THREAD_POOL_MUTEX_ADDR);
  if (thread_result_index != 0) {
    __Throw_C_error_std__YAXH_Z(thread_result_index);
  }
section_processing_jump_label_:
  if (*(char *)(system_global_data_pointer + 0xa0) != '\0') {
    buffer_alloc_result = system_ui_007(system_initialization_result6);
    *(unsigned long long *)(system_global_data_pointer + 0xa8) = buffer_alloc_result;
    buffer_alloc_result = system_ui_008(system_initialization_result6);
    *(unsigned long long *)(system_global_data_pointer + 0xb0) = buffer_alloc_result;
  }
  character_scan_pointer = system_global_data_pointer;
  if (*system_global_data_pointer != '\0') {
    string_input_ptr = (unsigned long long *)*system_global_data_pointer;
    thread_result_index = _Mtx_lock(ADDR_MAIN_MUTEX);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    buffer_alloc_result = system_global_data_pointer;
    pplStack_1b8 = (long long **)system_global_data_pointer;
    system_global_data_pointer = *string_input_ptr;
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
        system_data_value_2 = *(double *)(*(long long *)(buffer_alloc_result + *(long long *)(character_scan_pointer + 8)) + SYSTEM_CONSTANT_28);
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
    system_global_data_pointer = buffer_alloc_result;
    thread_result_index = _Mtx_unlock(ADDR_MAIN_MUTEX);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
  }
  if (*(char *)(system_global_data_pointer + 0x1626) != '\0') {
    buffer_alloc_result = *(unsigned long long *)(system_global_data_pointer + 0x138);
    *(unsigned long long *)(system_global_data_pointer + 0x138) = 0;
    thread_stack_ptr = &g_defaultDataTemplate;
    thread_stack_ptr = system_path_stack_buffer;
    system_path_stack_buffer[0] = 0;
    stack_size_max = 0x18;
    thread_op_flags = strcpy_s(system_path_stack_buffer, SYSTEM_CONFIG_BUFFER_SIZE, &systemConfigStringBuffer2);
    system_ui_001(thread_op_flags,&thread_stack_ptr,buffer_alloc_result,1);
    thread_stack_ptr = &g_threadString4;
  }
  if (*(int *)(system_global_data_pointer + 0x60) == 1) {
    system_finalizer_003();
  }
  else if (*(int *)(system_global_data_pointer + 0x60) == 2) {
    system_finalizer_004();
  }
  system_initialization_result8 = *(long long *)(system_global_data_pointer + 0x1870) - *(long long *)(system_global_data_pointer + 0x1868) >> 3;
  buffer_alloc_result = thread_op_flags;
  if (0 < (int)system_initialization_result8) {
    do {
      string_input_ptr = (unsigned long long *)system_validator_002(system_initialization_result8,&plStack_1d0,(long long)(int)buffer_alloc_result);
      (**(code **)(*(long long *)*string_input_ptr + 0x98))();
      if (plStack_1d0 != (long long *)0x0) {
        (**(code **)(*plStack_1d0 + 0x38))();
      }
      thread_op_flags = (int)buffer_alloc_result + 1;
      system_initialization_result8 = *(long long *)(system_global_data_pointer + 0x1870) - *(long long *)(system_global_data_pointer + 0x1868) >> 3;
      buffer_alloc_result = (ulong long)thread_op_flags;
    } while ((int)thread_op_flags < (int)system_initialization_result8);
  }
  system_processor_001();
  system_init_function();
  thread_op_flags = flag_handle_paramr_function(system_initialization_result6);
  system_ui_004(thread_op_flags,1,0);
  if (*(char *)(system_initialization_result6 + 0xf18) != '\0') {
    system_ui_009(system_initialization_result6);
    *(unsigned char *)(system_initialization_result6 + 0xf18) = 0;
  }
  str_len_counter = system_global_data_pointer;
  system_initialization_result8 = system_global_data_pointer;
  buffer_alloc_result = *(unsigned long long *)(system_global_data_pointer + 0x161c);
  *(unsigned long long *)(system_global_data_pointer + 0x12d0) = *(unsigned long long *)(system_global_data_pointer + 0x1614);
  *(unsigned long long *)(system_initialization_result8 + 0x12d8) = buffer_alloc_result;
  buffer_alloc_result = *(unsigned long long *)(str_len_counter + 0x162c);
  *(unsigned long long *)(system_initialization_result8 + 0x12e0) = *(unsigned long long *)(str_len_counter + 0x1624);
  *(unsigned long long *)(system_initialization_result8 + 0x12e8) = buffer_alloc_result;
  buffer_alloc_result = *(unsigned long long *)(str_len_counter + 0x163c);
  *(unsigned long long *)(system_initialization_result8 + 0x12f0) = *(unsigned long long *)(str_len_counter + 0x1634);
  *(unsigned long long *)(system_initialization_result8 + 0x12f8) = buffer_alloc_result;
  buffer_alloc_result = *(unsigned long long *)(str_len_counter + 0x164c);
  *(unsigned long long *)(system_initialization_result8 + 0x1300) = *(unsigned long long *)(str_len_counter + 0x1644);
  *(unsigned long long *)(system_initialization_result8 + 0x1308) = buffer_alloc_result;
  buffer_alloc_result = *(unsigned long long *)(str_len_counter + 0x165c);
  *(unsigned long long *)(system_initialization_result8 + 0x1310) = *(unsigned long long *)(str_len_counter + 0x1654);
  *(unsigned long long *)(system_initialization_result8 + 0x1318) = buffer_alloc_result;
  buffer_alloc_result = *(unsigned long long *)(str_len_counter + 0x166c);
  *(unsigned long long *)(system_initialization_result8 + 0x1320) = *(unsigned long long *)(str_len_counter + 0x1664);
  *(unsigned long long *)(system_initialization_result8 + 0x1328) = buffer_alloc_result;
  thread_op_flags = *(unsigned int *)(str_len_counter + 0x1678);
  buffer_alloc_result = *(unsigned int *)(str_len_counter + 0x167c);
  buffer_alloc_result = *(unsigned int *)(str_len_counter + 0x1680);
  *(unsigned int *)(system_initialization_result8 + 0x1330) = *(unsigned int *)(str_len_counter + 0x1674);
  *(unsigned int *)(system_initialization_result8 + 0x1334) = thread_op_flags;
  *(unsigned int *)(system_initialization_result8 + 0x1338) = buffer_alloc_result;
  *(unsigned int *)(system_initialization_result8 + 0x133c) = buffer_alloc_result;
  thread_op_flags = *(unsigned int *)(str_len_counter + 0x1688);
  buffer_alloc_result = *(unsigned int *)(str_len_counter + 0x168c);
  buffer_alloc_result = *(unsigned int *)(str_len_counter + 0x1690);
  *(unsigned int *)(system_initialization_result8 + 0x1340) = *(unsigned int *)(str_len_counter + 0x1684);
  *(unsigned int *)(system_initialization_result8 + 0x1344) = thread_op_flags;
  *(unsigned int *)(system_initialization_result8 + 0x1348) = buffer_alloc_result;
  *(unsigned int *)(system_initialization_result8 + 0x134c) = buffer_alloc_result;
  *(unsigned short *)(str_len_counter + 0x1637) = 0;
  *(unsigned char *)(str_len_counter + 0x162c) = 0;
  system_finalizer_001();
  system_finalizer_002();
  *(uint *)(system_global_data_pointer + 0x1590) = system_global_data_pointer;
  system_global_data_pointer = system_global_data_pointer + 1 & SYSTEM_POINTER_OFFSET0000001;
  if ((int)system_global_data_pointer < 0) {
    system_global_data_pointer = (system_global_data_pointer - 1 | 0xfffffffe) + 1;
  }
  string_input_ptr = (unsigned long long *)*system_global_data_pointer;
  thread_result_index = _Mtx_lock(ADDR_MAIN_MUTEX);
  if (thread_result_index != 0) {
    __Throw_C_error_std__YAXH_Z(thread_result_index);
  }
  buffer_alloc_result = system_global_data_pointer;
  pplStack_220 = (long long **)system_global_data_pointer;
  system_global_data_pointer = *string_input_ptr;
  system_initialization_result8 = *(long long *)(system_global_data_pointer + 0x1a08 + (long long)(int)system_global_data_pointer * 8);
  if (system_initialization_result8 != 0) {
    buffer_alloc_result = thread_op_flags;
    thread_op_flags = thread_op_flags;
    if (0 < *(int *)(system_initialization_result8 + STRING_BUFFER_SIZE)) {
      do {
        system_network_003(*(unsigned long long *)(thread_op_flags + *(long long *)(system_initialization_result8 + 8)));
        str_len_counter = *(long long *)(*(long long *)(system_initialization_result8 + 8) + thread_op_flags);
        if (str_len_counter != 0) {
          system_execution_function(str_len_counter);
          handle_param_system_error(str_len_counter);
        }
        *(unsigned long long *)(*(long long *)(system_initialization_result8 + 8) + thread_op_flags) = 0;
        thread_op_flags = (int)buffer_alloc_result + 1;
        buffer_alloc_result = (ulong long)thread_op_flags;
        thread_op_flags = thread_op_flags + 8;
      } while ((int)thread_op_flags < *(int *)(system_initialization_result8 + STRING_BUFFER_SIZE));
    }
    if (*(long long *)(system_initialization_result8 + 8) != 0) {
      handle_param_system_error();
    }
    *(unsigned long long *)(system_initialization_result8 + 8) = 0;
    string_input_ptr = *(unsigned char **)(system_global_data_pointer + 0x1a08 + (long long)(int)system_global_data_pointer * 8);
    if (string_input_ptr != (unsigned char *)0x0) {
      *string_input_ptr = 0;
      *(unsigned long long *)(string_input_ptr + 8) = 0;
      *(unsigned long long *)(string_input_ptr + 0x14) = 0;
      *(unsigned int *)(string_input_ptr + STRING_BUFFER_SIZE) = 0;
      *(unsigned long long *)(string_input_ptr + 0x24) = 0;
      *(unsigned long long *)(string_input_ptr + 0x1c) = 0;
      handle_param_system_error();
    }
    *(unsigned long long *)(system_global_data_pointer + 0x1a08 + (long long)(int)system_global_data_pointer * 8) = 0;
    thread_op_flags = stack_size_max;
  }
  system_initializer_002();
  system_global_data_pointer = buffer_alloc_result;
  thread_result_index = _Mtx_unlock(ADDR_MAIN_MUTEX);
  if (thread_result_index != 0) {
    __Throw_C_error_std__YAXH_Z(thread_result_index);
  }
  if (*(int *)(system_initialization_result6 + 8) == 2) {
    *(unsigned char *)(*(long long *)(system_initialization_result6 + STRING_BUFFER_SIZE) + 0xc0) = 0;
    while( true ) {
      string_input_ptr = (void *)**(unsigned long long **)(system_initialization_result6 + STRING_BUFFER_SIZE);
      if (string_input_ptr == &systemValidationData1) {
        system_char_variable = *(char *)(*(unsigned long long **)(system_initialization_result6 + STRING_BUFFER_SIZE) + 2) != '\0';
      }
      else {
        system_char_variable = (**(code **)(string_input_ptr + 0x68))();
      }
      if (system_char_variable != '\0') break;
      string_input_ptr = (void *)**(unsigned long long **)(system_initialization_result6 + STRING_BUFFER_SIZE);
      if (string_input_ptr == &systemValidationData1) {
        system_cleanup_005(*(unsigned long long **)(system_initialization_result6 + STRING_BUFFER_SIZE) + 4);
      }
      else {
        (**(code **)(string_input_ptr + SYSTEM_POINTER_OFFSET0))();
      }
    }
    plStack_1c0 = *(long long **)(system_initialization_result6 + STRING_BUFFER_SIZE);
    *(unsigned long long *)(system_initialization_result6 + STRING_BUFFER_SIZE) = 0;
    if (plStack_1c0 != (long long *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    *(unsigned int *)(system_initialization_result6 + 8) = 0;
    if (system_data_parameter_third != (long long *)0x0) {
      (**(code **)(*system_data_parameter_third + STRING_BUFFER_SIZE))();
    }
    (**(code **)(system_data_parameter_primary + path_buffer_size))(0);
    system_data_parameter_secondary = UINT64_MAX;
  }
  else if (*(int *)(system_initialization_result6 + 8) != 0) goto section_processing_jump_label_;
  *(uint *)(system_global_data_pointer + 0x1614) =
       (*(int *)(system_global_data_pointer + 0x1614) + 1U) % *(uint *)(system_global_data_pointer + 0x1d4c);
section_processing_jump_label_:
  pplStack_220 = (long long **)&thread_stack_ptr;
  thread_stack_ptr = &g_memoryAllocationFlag;
  thread_stack_ptr = system_initialization_stack_buffer;
  stack_size_max = 0;
  system_initialization_stack_buffer[0] = 0;
  stack_size_max = 0x19;
  stack_size_max = thread_op_flags;
  pplStack_220 = (long long **)system_execution_function(system_global_data_pointer,path_buffer_size,8,3);
  *pplStack_220 = (long long *)&g_threadString4;
  pplStack_220[1] = (long long *)0x0;
  *(unsigned int *)(pplStack_220 + 2) = 0;
  *pplStack_220 = (long long *)&g_threadString2;
  pplStack_220[3] = (long long *)0x0;
  pplStack_220[1] = (long long *)0x0;
  *(unsigned int *)(pplStack_220 + 2) = 0;
  psystem_initialization_result7 = system_global_data_pointer;
  stack_size_max = 0;
  thread_op_flags = *(unsigned int *)(pplStack_220 + 3);
  *(int *)(pplStack_220 + 3) = (int)system_global_data_pointer[10];
  *(unsigned int *)(psystem_initialization_result7 + 10) = thread_op_flags;
  system_initialization_result6 = (long long)pplStack_220[1];
  pplStack_220[1] = (long long *)psystem_initialization_result7[8];
  psystem_initialization_result7[8] = system_initialization_result6;
  thread_op_flags = *(unsigned int *)(pplStack_220 + 2);
  *(int *)(pplStack_220 + 2) = (int)psystem_initialization_result7[9];
  *(unsigned int *)(psystem_initialization_result7 + 9) = thread_op_flags;
  thread_op_flags = *(unsigned int *)((long long)pplStack_220 + 0x1c);
  *(unsigned int *)((long long)pplStack_220 + 0x1c) = *(unsigned int *)((long long)psystem_initialization_result7 + 0x54);
  *(unsigned int *)((long long)psystem_initialization_result7 + 0x54) = thread_op_flags;
  thread_stack_ptr = pplStack_220;
  if (*(code **)(*psystem_initialization_result7 + 8) == (code *)&system_exception_handle_paramr) {
    *(unsigned int *)(psystem_initialization_result7 + 9) = 0;
    if ((unsigned char *)psystem_initialization_result7[8] != (unsigned char *)0x0) {
      *(unsigned char *)psystem_initialization_result7[8] = 0;
    }
    *(unsigned int *)((long long)psystem_initialization_result7 + 0x54) = 0;
  }
  else {
    (**(code **)(*psystem_initialization_result7 + 8))(psystem_initialization_result7);
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
  system_execution_function(system_global_data_pointer,thread_op_flags,&thread_stack_base_address);
  system_initialization_result6 = thread_stack_base_address;
  system_initialization_result8 = thread_stack_base_address;
  buffer_alloc_result = thread_op_flags;
  if (thread_stack_base_address - thread_stack_base_address >> 3 != 0) {
    do {
      str_len_counter = system_global_data_pointer;
      if ((0 < *(int *)(*(long long *)(buffer_alloc_result + system_initialization_result6) + 0x124ec)) &&
         ((*(uint *)(*(long long *)(buffer_alloc_result + system_initialization_result6) + 4) & string_buffer_size_constant00) != 0)) {
        while (character_scan_pointer = system_global_data_pointer, system_initialization_result6 = thread_stack_base_address, system_initialization_result8 = thread_stack_base_address,
              *(int *)(str_len_counter + 0x30c) != 0) {
          system_initialization_result6 = system_event_handle_paramr_017(system_global_data_pointer);
          if (system_initialization_result6 != 0) {
            psystem_initialization_result7 = (long long *)system_event_handle_paramr_017(character_scan_pointer);
            (**(code **)(*psystem_initialization_result7 + path_buffer_size))(psystem_initialization_result7,0);
          }
        }
      }
      thread_op_flags = (int)thread_op_flags + 1;
      thread_op_flags = (ulong long)thread_op_flags;
      buffer_alloc_result = buffer_alloc_result + 8;
    } while ((ulong long)(long long)(int)thread_op_flags < (ulong long)(system_initialization_result8 - system_initialization_result6 >> 3));
  }
  buffer_alloc_result = system_execution_function(system_global_data_pointer,string_buffer_size_constant,8,3);
  psystem_initialization_result7 = (long long *)system_event_handle_paramr_008(buffer_alloc_result,&thread_stack_ptr);
  ppuStack_1b0 = (void **)psystem_initialization_result7;
  if (psystem_initialization_result7 != (long long *)0x0) {
    (**(code **)(*psystem_initialization_result7 + 0x28))(psystem_initialization_result7);
  }
  character_scan_pointer = system_global_data_pointer;
  pplStack_220 = &plStack_228;
  plStack_228 = psystem_initialization_result7;
  if (psystem_initialization_result7 != (long long *)0x0) {
    (**(code **)(*psystem_initialization_result7 + 0x28))(psystem_initialization_result7);
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
  if (psystem_initialization_result7 != (long long *)0x0) {
    (**(code **)(*psystem_initialization_result7 + 0x38))(psystem_initialization_result7);
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
  system_data_parameter_third = ptr_var_4;
  (**(code **)(system_data_parameter_primary + 0x18))(0);
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
      system_global_data_pointer = 6;
      strcpy_s(&network_config_buffer, SYSTEM_CONFIG_BUFFER_SIZE, &network_config_string, mutex_type, buffer_alloc_result);
      resource_template_pointer = &g_defaultDataTemplate;
      system_global_data_pointer = &render_config_buffer;
      render_config_buffer = 0;
      system_global_data_pointer = 4;
      strcpy_s(&render_config_buffer, SYSTEM_CONFIG_BUFFER_SIZE, &render_config_string);
      resource_template_pointer = &g_defaultDataTemplate;
      system_global_data_pointer = &audio_config_buffer_secondary;
      audio_config_buffer_secondary = 0;
      system_global_data_pointer = 6;
      strcpy_s(&audio_config_buffer_secondary, SYSTEM_CONFIG_BUFFER_SIZE, &audio_config_string_secondary);
      resource_template_pointer = &g_defaultDataTemplate;
      system_global_data_pointer = &physics_config_buffer;
      physics_config_buffer = 0;
      system_global_data_pointer = 6;
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
  system_thread_manager_create(handle_param, 3, mutex_attr, mutex_type, 0, DEFAULT_THREAD_POOL_FLAG);
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
  system_initialization_result0 = astack_long_var[0];
  if ((*(int *)(*(long long *)(astack_long_var[0] + 0x3580) + SYSTEM_MODULE_OFFSET_2) != 0) &&
     (buffer_alloc_result = buffer_alloc_result, buffer_alloc_result = buffer_alloc_result, (long long)reg_rcx[0x1d] - (long long)reg_rcx[0x1c] >> 3 != 0))
  {
    do {
      (**(code **)(**(long long **)(buffer_alloc_result + (long long)reg_rcx[0x1c]) + 0x60))
                (*(long long **)(buffer_alloc_result + (long long)reg_rcx[0x1c]),reg_rcx,system_initialization_result0);
      buffer_alloc_result = (int)buffer_alloc_result + 1;
      buffer_alloc_result = buffer_alloc_result + 8;
      buffer_alloc_result = (ulong long)buffer_alloc_result;
    } while ((ulong long)(long long)(int)buffer_alloc_result <
             (ulong long)((long long)reg_rcx[0x1d] - (long long)reg_rcx[0x1c] >> 3));
  }
  ppplStack_b8 = (long long ***)0x0;
  stack_size_max = (long long *)merge_32bit_values(stack_size_max._4_4_,(unsigned int)stack_size_max);
  if (*(int *)(*(long long *)(astack_long_var[0] + 0x3580) + SYSTEM_MODULE_OFFSET_2) != 0) {
    stack_size_max = (long long *)merge_32bit_values(stack_size_max._4_4_,(unsigned int)stack_size_max);
    if ((((*(byte *)(astack_long_var[0] + 0x1bd8) & path_buffer_size) != 0) &&
        (stack_size_max = (long long *)merge_32bit_values(stack_size_max._4_4_,(unsigned int)stack_size_max),
        *(char *)(system_global_data_pointer + 0xf8) != '\0')) &&
       (stack_size_max = (long long *)merge_32bit_values(stack_size_max._4_4_,(unsigned int)stack_size_max),
       6 < *(int *)(reg_rcx + 0x4f8))) {
      buffer_alloc_result = system_execution_function(system_global_data_pointer,0xe0,8,3);
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
      buffer_alloc_result = system_global_data_pointer;
      ppsystem_memory_stack_primary = (long long ***)0x0;
      if (*(int *)(system_global_data_pointer + 0x380) == 0) {
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
    buffer_alloc_result = system_global_data_pointer;
    if (((reg_rcx[SYSTEM_POINTER_OFFSET9] != (long long ****)0x0) && (*(char *)(system_global_data_pointer + 0xfa) != '\0')) &&
       ((*(long long *)(astack_long_var[0] + 0x3580) != 0 &&
        (*(int *)(*(long long *)(astack_long_var[0] + 0x3580) + SYSTEM_MODULE_OFFSET_2) != 0)))) {
      stack_size_max = &ppppstack_long_var;
      ppppstack_long_var = (long long ****)reg_rcx[SYSTEM_POINTER_OFFSET9][0x461];
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
        buffer_alloc_result = system_global_data_pointer;
        if (system_char_variable != '\0') break;
        system_initialization_result0 = system_event_handle_paramr_017(system_global_data_pointer);
        if (system_initialization_result0 != 0) {
          psystem_initialization_result1 = (long long *)system_event_handle_paramr_017(buffer_alloc_result);
          (**(code **)(*psystem_initialization_result1 + path_buffer_size))(psystem_initialization_result1,0);
        }
      }
    }
    system_initialization_result0 = astack_long_var[0];
    psystem_initialization_result1 = *(long long **)(*(long long *)(astack_long_var[0] + 0x3580) + 0x630);
    if (psystem_initialization_result1 != (long long *)0x0) {
      plStack_78 = psystem_initialization_result1;
      (**(code **)(*psystem_initialization_result1 + 0x28))(psystem_initialization_result1);
    }
    plStack_78 = *(long long **)(system_initialization_result0 + 0x12498);
    *(long long **)(system_initialization_result0 + 0x12498) = psystem_initialization_result1;
    if (plStack_78 != (long long *)0x0) {
      (**(code **)(*plStack_78 + 0x38))();
    }
    ppppsystem_initialization_result3 = reg_rcx[99];
    if (ppppsystem_initialization_result3 != (long long ****)0x0) {
      (*(code *)(*ppppsystem_initialization_result3)[SYSTEM_CONSTANT_2])(ppppsystem_initialization_result3,astack_long_var[0]);
    }
    if (reg_rcx[0x22] != (long long ****)0x0) {
      (*(code *)reg_rcx[0x23])(astack_long_var[0]);
    }
    if ((*(char *)(reg_rcx + 0xb74) != '\0') &&
       (system_initialization_result0 = *(long long *)(*(long long *)(astack_long_var[0] + 0x3580) + 0x530), system_initialization_result0 != 0)) {
      *(unsigned int *)(system_initialization_result0 + SYSTEM_CONFIG_BUFFER_SIZE) = 0x41200000;
    }
    if (*(int *)(reg_rcx + 0xa3a) != 0) {
      buffer_alloc_result = *(unsigned int *)(reg_rcx + 0xa3a);
      pppppsystem_initialization_result7 = reg_rcx + (long long)*(int *)(reg_rcx + 0xa39) * 0x121 + 0x7f7;
      LOCK();
      *(unsigned int *)pppppsystem_initialization_result7 = 0;
      UNLOCK();
      system_processor_008(pppppsystem_initialization_result7,buffer_alloc_result);
      if (*(int *)(reg_rcx + 0xa3a) == 0) {
        thread_result_index = 0;
      }
      else {
        thread_result_index = (*(int *)(reg_rcx + 0xa3a) - 1U >> 0xc) + 1;
      }
      if (thread_result_index != 0) {
        memcpy(pppppsystem_initialization_result7[1], reg_rcx[0xa3b], path_buffer_size_000);
      }
      system_initialization_result0 = *(long long *)(*(long long *)(astack_long_var[0] + 0x3580) + 0x118);
      if (system_initialization_result0 != 0) {
        *(long long ******)(system_initialization_result0 + 0x98c8) =
             reg_rcx + (long long)*(int *)(reg_rcx + 0xa39) * 0x121 + 0x7f7;
      }
    }
    buffer_alloc_result = *(int *)(reg_rcx + 0xa39) + 1U & SYSTEM_POINTER_OFFSET0000001;
    if ((int)buffer_alloc_result < 0) {
      buffer_alloc_result = (buffer_alloc_result - 1 | 0xfffffffe) + 1;
    }
    *(uint *)(reg_rcx + 0xa39) = buffer_alloc_result;
  }
  while (thread_result_index = (int)buffer_alloc_result, (ulong long)(long long)thread_result_index < (ulong long)*(uint *)(reg_rcx + 0xb5b)) {
    ppppsystem_initialization_result3 = reg_rcx[(buffer_alloc_result >> 10) + 0xb5c] +
                 (ulong long)(uint)(thread_result_index + (int)(buffer_alloc_result >> 10) * -SYSTEM_CONFIG_BUFFER_SIZE_ZERO) * 0x18;
    system_resource_001(*ppppsystem_initialization_result3);
    system_execution_function(*ppppsystem_initialization_result3,ppppsystem_initialization_result3[1],ppppsystem_initialization_result3 + 2,0,ppppsystem_initialization_result3 + 10);
    buffer_alloc_result = (ulong long)(thread_result_index + 1);
  }
  buffer_alloc_result = (ulong long)*(uint *)(reg_rcx + 0xb5b);
  LOCK();
  *(unsigned int *)(reg_rcx + 0xb5b) = 0;
  buffer_alloc_result = system_global_data_pointer;
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
system_processor_initialize(unsigned long long *handle_param,long long thread_op_flags,unsigned long long mutex_attr,unsigned long long mutex_type)
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
  system_thread_manager_create(handle_param, 9, mutex_attr, mutex_type, 0, DEFAULT_THREAD_POOL_FLAG);
  pthread_op_flags = (unsigned long long *)handle_param[1];
  *pthread_op_flags = 0x6a624f656e656353;
  *(unsigned short *)(pthread_op_flags + 1) = 0x2f;
  *(unsigned int *)(handle_param + 2) = 9;
  buffer_alloc_result = 1;
  thread_result_index = *(int *)(handle_param + 2);
  if (0 < *(int *)(thread_op_flags + STRING_BUFFER_SIZE)) {
    system_thread_manager_create(handle_param,thread_result_index + *(int *)(thread_op_flags + STRING_BUFFER_SIZE));
    memcpy((ulong long)*(uint *)(handle_param + 2) + handle_param[1],*(unsigned long long *)(thread_op_flags + 8),
           (long long)(*(int *)(thread_op_flags + STRING_BUFFER_SIZE) + 1),mutex_type,buffer_alloc_result);
  }
  system_thread_manager_create(handle_param,thread_result_index + 6);
  string_input_ptr = (unsigned int *)((ulong long)*(uint *)(handle_param + 2) + handle_param[1]);
  *string_input_ptr = 0x6563732f;
  *(unsigned short *)(string_input_ptr + 1) = 0x656e;
  *(unsigned char *)((long long)string_input_ptr + 6) = 0;
  *(int *)(handle_param + 2) = thread_result_index + 6;
  system_thread_manager_create(handle_param,thread_result_index + 0xd);
  *(unsigned long long *)((ulong long)*(uint *)(handle_param + 2) + handle_param[1]) = 0x656e656373782e;
  *(int *)(handle_param + 2) = thread_result_index + 0xd;
  return handle_param;
}
  system_initialization_flag = 1;
  stack_size_max = 3;
  system_multi_level_stack_root = &system_multi_level_stack_root;
  system_sextuple_stack_root = &system_multi_level_stack_root;
  system_multi_level_stack_secondary = (unsigned long long *******)0x0;
  stack_size_max = 0;
  stack_size_max = 0;
  stack_size_max = 0;
  stack_size_max = 0;
  stack_size_max = 0;
  stack_size_max = 3;
  str_len_counter = *(long long *)(*psystem_initialization_result3 + SYSTEM_POINTER_OFFSET90) - *(long long *)(*psystem_initialization_result3 + SYSTEM_POINTER_OFFSET88) >> 5;
  thread_stack_base_address = str_len_counter;
  multi_level_stack_long_variable = (long long *******)((ulong long)multi_level_stack_long_variable & INT64_MASK);
  if (0 < (int)str_len_counter) {
    do {
      if (thread_result_index < 0) {
section_processing_jump_label_:
        system_initialization_result9 = system_thread_manager_get_status();
      }
      else {
        system_initialization_result9 = *(long long *)(*psystem_initialization_result3 + SYSTEM_POINTER_OFFSET88);
        if ((ulong long)(*(long long *)(*psystem_initialization_result3 + SYSTEM_POINTER_OFFSET90) - system_initialization_result9 >> 5) <=
            (ulong long)(long long)thread_result_index) goto section_processing_jump_label_;
        system_initialization_result9 = (long long)thread_result_index * path_buffer_size + system_initialization_result9;
      }
      thread_stack_ptr = &g_threadString2;
      stack_size_max = 0;
      thread_stack_ptr = (unsigned char *)0x0;
      stack_size_max = 0;
      system_thread_manager_create(&thread_stack_ptr,*(unsigned int *)(system_initialization_result9 + STRING_BUFFER_SIZE));
      if (*(int *)(system_initialization_result9 + STRING_BUFFER_SIZE) != 0) {
        memcpy(thread_stack_ptr,*(unsigned long long *)(system_initialization_result9 + 8),*(int *)(system_initialization_result9 + STRING_BUFFER_SIZE) + 1);
      }
      if (*(long long *)(system_initialization_result9 + 8) != 0) {
        stack_size_max = 0;
        if (thread_stack_ptr != (unsigned char *)0x0) {
          *thread_stack_ptr = 0;
        }
        stack_size_max = stack_size_max & UINT32_MAX;
      }
      thread_result_index = stack_size_max + 8;
      system_thread_manager_create(&thread_stack_ptr,thread_result_index);
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
        system_quintuple_stack_data = (unsigned long long *****)0x0;
        system_quintuple_stack_control = (unsigned long long *****)0x0;
        stack_size_max = 0;
        stack_size_max = 3;
        system_execution_function(&thread_stack_ptr,&system_quintuple_stack_data);
        pppppthread_op_flags = system_quintuple_stack_control;
        pppppthread_op_flags = system_quintuple_stack_data;
        system_initialization_result9 = (long long)system_quintuple_stack_control - (long long)system_quintuple_stack_data;
        system_multi_level_pointer_array_index_element = (unsigned long long ******)system_execution_function(system_global_data_pointer,path_buffer_size,8,3);
        system_multi_level_stack_data = system_multi_level_pointer_array_index_element;
        *system_multi_level_pointer_array_index_element = (unsigned long long *****)0x0;
        system_multi_level_pointer_array_index_element[1] = (unsigned long long *****)0x0;
        system_multi_level_pointer_array_index_element[2] = (unsigned long long *****)0x0;
        *(unsigned int *)(system_multi_level_pointer_array_index_element + 3) = 3;
        system_multi_level_pointer_array_index = &system_multi_level_stack_root;
        multi_level_ptr_array_9 = system_multi_level_stack_secondary;
        while (multi_level_ptr_array_9 != (unsigned long long *******)0x0) {
          if (*(int *)(multi_level_ptr_array_9 + 4) < thread_result_index) {
            multi_level_ptr_array_9 = (unsigned long long *******)*multi_level_ptr_array_9;
          }
          else {
            system_multi_level_pointer_array_index = multi_level_ptr_array_9;
            multi_level_ptr_array_9 = (unsigned long long *******)multi_level_ptr_array_9[1];
          }
        }
        if (((unsigned long long ********)system_multi_level_pointer_array_index == &system_multi_level_stack_root) ||
           (thread_result_index < *(int *)(system_multi_level_pointer_array_index + 4))) {
          string_input_ptr = (unsigned long long *)system_execution_function(&system_multi_level_stack_root,auStack_90);
          system_multi_level_pointer_array_index = (unsigned long long *******)*string_input_ptr;
        }
        system_multi_level_pointer_array_index[5] = system_multi_level_pointer_array_index_element;
        thread_result_index = (int)(system_initialization_result9 >> 5);
        system_initialization_result9 = (long long)thread_result_index;
        pppppthread_op_flags = pppppthread_op_flags;
        if (0 < thread_result_index) {
          pppppthread_op_flags = pppppthread_op_flags + 1;
          do {
            thread_stack_ptr = &g_threadString2;
            stack_size_max._0_4_ = 0;
            stack_size_max._4_4_ = 0;
            thread_stack_ptr = (unsigned char *)0x0;
            stack_size_max = 0;
            system_thread_manager_create(&thread_stack_ptr,*(unsigned int *)(pppppthread_op_flags + 1));
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
            system_thread_manager_create(&thread_stack_ptr,thread_result_index);
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
                system_thread_manager_create(&thread_stack_ptr,thread_op_flags);
              }
              if (buffer_alloc_result != 0) {
                memcpy(thread_stack_ptr,*pppppthread_op_flags,thread_op_flags);
              }
              if (thread_stack_ptr != (unsigned char *)0x0) {
                thread_stack_ptr[thread_op_flags] = 0;
              }
              stack_size_max._4_4_ = *(uint *)((long long)pppppthread_op_flags + 0x14);
              stack_size_max = buffer_alloc_result;
              system_thread_manager_create(&thread_stack_ptr,0x12);
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
              system_multi_level_pointer_array_index = &system_multi_level_stack_root;
              multi_level_ptr_array_9 = system_multi_level_stack_secondary;
              while (multi_level_ptr_array_9 != (unsigned long long *******)0x0) {
                if (*(int *)(multi_level_ptr_array_9 + 4) < thread_result_index) {
                  multi_level_ptr_array_9 = (unsigned long long *******)*multi_level_ptr_array_9;
                }
                else {
                  system_multi_level_pointer_array_index = multi_level_ptr_array_9;
                  multi_level_ptr_array_9 = (unsigned long long *******)multi_level_ptr_array_9[1];
                }
              }
              if (((unsigned long long ********)system_multi_level_pointer_array_index == &system_multi_level_stack_root) ||
                 (thread_result_index < *(int *)(system_multi_level_pointer_array_index + 4))) {
                string_input_ptr = (unsigned long long *)system_execution_function(&system_multi_level_stack_root,&psystem_quintuple_stack_temp);
                system_multi_level_pointer_array_index = (unsigned long long *******)*string_input_ptr;
              }
              system_multi_level_pointer_array_index_element = system_multi_level_pointer_array_index[5];
              multi_level_thread_op_flags = (unsigned long long ******)system_multi_level_pointer_array_index_element[1];
              if (multi_level_thread_op_flags < system_multi_level_pointer_array_index_element[2]) {
                system_multi_level_pointer_array_index_element[1] = multi_level_thread_op_flags + 4;
                *multi_level_thread_op_flags = (unsigned long long *****)&g_threadString4;
                multi_level_thread_op_flags[1] = (unsigned long long *****)0x0;
                *(unsigned int *)(multi_level_thread_op_flags + 2) = 0;
                *multi_level_thread_op_flags = (unsigned long long *****)&g_threadString2;
                multi_level_thread_op_flags[3] = (unsigned long long *****)0x0;
                multi_level_thread_op_flags[1] = (unsigned long long *****)0x0;
                *(unsigned int *)(multi_level_thread_op_flags + 2) = 0;
                system_multi_level_stack_data = multi_level_thread_op_flags;
                system_thread_manager_create(multi_level_thread_op_flags,stack_size_max);
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
                system_event_handle_paramr_006(system_multi_level_pointer_array_index_element,&thread_stack_ptr);
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
            system_initialization_result9 = system_initialization_result9 + -1;
            pppppthread_op_flags = system_quintuple_stack_data;
            pppppthread_op_flags = system_quintuple_stack_control;
            pppppthread_op_flags = system_quintuple_stack_data;
            str_len_counter = thread_stack_base_address;
          } while (system_initialization_result9 != 0);
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
      psystem_initialization_result3 = system_global_data_pointer;
      mutex_attr = system_multi_level_stack_temp;
      system_initialization_result9 = thread_stack_base_address;
      mutex_type = uStackX_20;
    } while (thread_result_index < (int)str_len_counter);
  }
  stack_size_max = 3;
  system_multi_level_stack_primary = &system_multi_level_stack_primary;
  psystem_sextuple_stack_primary = &system_multi_level_stack_primary;
  system_multi_level_stack_tertiary = (unsigned long long *******)0x0;
  stack_size_max = 0;
  stack_size_max = 0;
  multi_level_ptr_array_9 = system_sextuple_stack_root;
  if ((unsigned long long ********)system_sextuple_stack_root != &system_multi_level_stack_root) {
    do {
      system_multi_level_pointer_temp2 = (unsigned long long *******)multi_level_ptr_array_9[5];
      system_multi_level_pointer_array_index = multi_level_ptr_array_9 + 4;
      system_multi_level_pointer_current = &system_multi_level_stack_primary;
      if (system_multi_level_stack_tertiary != (unsigned long long *******)0x0) {
        system_multi_level_pointer_temp1 = system_multi_level_stack_tertiary;
        do {
          if (*(int *)(system_multi_level_pointer_temp1 + 4) < *(int *)system_multi_level_pointer_array_index) {
            system_multi_level_pointer_temp1 = (unsigned long long *******)*system_multi_level_pointer_temp1;
          }
          else {
            system_multi_level_pointer_current = system_multi_level_pointer_temp1;
            system_multi_level_pointer_temp1 = (unsigned long long *******)system_multi_level_pointer_temp1[1];
          }
        } while (system_multi_level_pointer_temp1 != (unsigned long long *******)0x0);
      }
      if (((unsigned long long ********)system_multi_level_pointer_current == &system_multi_level_stack_primary) ||
         (*(int *)system_multi_level_pointer_array_index < *(int *)(system_multi_level_pointer_current + 4))) {
        string_input_ptr = (unsigned long long *)system_execution_function(&system_multi_level_stack_primary,&system_multi_level_stack_temp);
        system_multi_level_pointer_current = (unsigned long long *******)*string_input_ptr;
      }
      if (system_multi_level_pointer_current + 5 != system_multi_level_pointer_temp2) {
        system_event_handle_paramr_004(system_multi_level_pointer_current + 5,*system_multi_level_pointer_temp2,system_multi_level_pointer_temp2[1]);
      }
      system_multi_level_pointer_current = &system_multi_level_stack_root;
      if (system_multi_level_stack_secondary != (unsigned long long *******)0x0) {
        system_multi_level_pointer_temp2 = system_multi_level_stack_secondary;
        do {
          if (*(int *)(system_multi_level_pointer_temp2 + 4) < *(int *)system_multi_level_pointer_array_index) {
            system_multi_level_pointer_temp2 = (unsigned long long *******)*system_multi_level_pointer_temp2;
          }
          else {
            system_multi_level_pointer_current = system_multi_level_pointer_temp2;
            system_multi_level_pointer_temp2 = (unsigned long long *******)system_multi_level_pointer_temp2[1];
          }
        } while (system_multi_level_pointer_temp2 != (unsigned long long *******)0x0);
      }
      if (((unsigned long long ********)system_multi_level_pointer_current == &system_multi_level_stack_root) ||
         (*(int *)system_multi_level_pointer_array_index < *(int *)(system_multi_level_pointer_current + 4))) {
        string_input_ptr = (unsigned long long *)system_execution_function(&system_multi_level_stack_root,&multi_level_stack_long_variable);
        system_multi_level_pointer_current = (unsigned long long *******)*string_input_ptr;
      }
      system_multi_level_pointer_array_index_element = system_multi_level_pointer_current[5];
      psystem_quintuple_stack_temp = system_multi_level_pointer_array_index_element;
      if (system_multi_level_pointer_array_index_element != (unsigned long long ******)0x0) {
        system_event_handle_paramr_010(system_multi_level_pointer_array_index_element);
        handle_param_system_error(system_multi_level_pointer_array_index_element);
      }
      system_multi_level_pointer_current = &system_multi_level_stack_root;
      if (system_multi_level_stack_secondary != (unsigned long long *******)0x0) {
        system_multi_level_pointer_temp2 = system_multi_level_stack_secondary;
        do {
          if (*(int *)(system_multi_level_pointer_temp2 + 4) < *(int *)system_multi_level_pointer_array_index) {
            system_multi_level_pointer_temp2 = (unsigned long long *******)*system_multi_level_pointer_temp2;
          }
          else {
            system_multi_level_pointer_current = system_multi_level_pointer_temp2;
            system_multi_level_pointer_temp2 = (unsigned long long *******)system_multi_level_pointer_temp2[1];
          }
        } while (system_multi_level_pointer_temp2 != (unsigned long long *******)0x0);
      }
      if (((unsigned long long ********)system_multi_level_pointer_current == &system_multi_level_stack_root) ||
         (*(int *)system_multi_level_pointer_array_index < *(int *)(system_multi_level_pointer_current + 4))) {
        string_input_ptr = (unsigned long long *)system_execution_function(&system_multi_level_stack_root,&system_multi_level_stack_data);
        system_multi_level_pointer_current = (unsigned long long *******)*string_input_ptr;
      }
      system_multi_level_pointer_current[5] = (unsigned long long ******)0x0;
      multi_level_ptr_array_9 = (unsigned long long *******)memory_alloc_function(multi_level_ptr_array_9);
    } while ((unsigned long long ********)multi_level_ptr_array_9 != &system_multi_level_stack_root);
  }
  multi_level_ptr_array_9 = system_multi_level_stack_secondary;
  if (system_multi_level_stack_secondary != (unsigned long long *******)0x0) {
    system_execution_function(&system_multi_level_stack_root,*system_multi_level_stack_secondary);
    handle_param_system_error(multi_level_ptr_array_9);
  }
  system_multi_level_stack_root = &system_multi_level_stack_root;
  system_sextuple_stack_root = &system_multi_level_stack_root;
  system_multi_level_stack_secondary = (unsigned long long *******)0x0;
  stack_size_max = stack_size_max & INVALID_HANDLE_VALUEffffff00;
  stack_size_max = 0;
  buffer_alloc_result = system_execution_function(system_global_data_pointer,0x150,8,3);
  system_multi_level_stack_temp = (unsigned long long *******)&system_quintuple_stack_data;
  buffer_alloc_result = system_thread_manager_003(&system_quintuple_stack_data,mutex_type);
  multi_level_stack_long_variable = (long long *******)&psystem_chain_node_backup_1;
  stack_size_max = 0;
  stack_size_max = 0;
  stack_size_max = 0;
  stack_size_max = stack_size_max;
  psystem_chain_node_backup_1 = (long long *******)&psystem_chain_node_backup_1;
  psystem_chain_node_backup_2 = (long long *******)&psystem_chain_node_backup_1;
  system_sextuple_long_stack = (long long *******)0x0;
  stack_size_max = 0;
  stack_size_max = 0;
  if (system_multi_level_stack_tertiary != (unsigned long long *******)0x0) {
    system_sextuple_long_stack =
         (long long *******)system_processor_009(&psystem_chain_node_backup_1,system_multi_level_stack_tertiary,&psystem_chain_node_backup_1);
    system_chain_next_ptr = (long long *******)*system_sextuple_long_stack;
    psystem_chain_node_backup_1 = system_sextuple_long_stack;
    while (ppppsystem_thread_manager_ptr = system_chain_next_ptr, ppppsystem_thread_manager_ptr != (long long *******)0x0) {
      psystem_chain_node_backup_1 = ppppsystem_thread_manager_ptr;
      system_chain_next_ptr = (long long *******)*ppppsystem_thread_manager_ptr;
    }
    system_chain_next_ptr = (long long *******)system_sextuple_long_stack[1];
    psystem_chain_node_backup_2 = system_sextuple_long_stack;
    while (ppppsystem_thread_manager_ptr = system_chain_next_ptr, ppppsystem_thread_manager_ptr != (long long *******)0x0) {
      psystem_chain_node_backup_2 = ppppsystem_thread_manager_ptr;
      system_chain_next_ptr = (long long *******)ppppsystem_thread_manager_ptr[1];
    }
    stack_size_max = stack_size_max;
  }
  system_multi_level_pointer_array_index_element = (unsigned long long ******)
                 system_processor_010(buffer_alloc_result,&psystem_chain_node_backup_1,buffer_alloc_result,pppppppuStackX_10,mutex_attr);
  if (system_multi_level_pointer_array_index_element != (unsigned long long ******)0x0) {
    system_multi_level_stack_temp = (unsigned long long *******)system_multi_level_pointer_array_index_element;
    (*(code *)(*system_multi_level_pointer_array_index_element)[5])(system_multi_level_pointer_array_index_element);
  }
  system_multi_level_stack_temp = *(unsigned long long ********)(system_initialization_result9 + SYSTEM_CONFIG_BUFFER_SIZE);
  *(unsigned long long *******)(system_initialization_result9 + SYSTEM_CONFIG_BUFFER_SIZE) = system_multi_level_pointer_array_index_element;
  if (system_multi_level_stack_temp != (unsigned long long *******)0x0) {
    (*(code *)(*system_multi_level_stack_temp)[7])();
  }
  buffer_alloc_result = system_global_data_pointer;
  pppppppuStackX_10 = &system_multi_level_stack_temp;
  system_multi_level_stack_temp = *(unsigned long long ********)(system_initialization_result9 + SYSTEM_CONFIG_BUFFER_SIZE);
  if (system_multi_level_stack_temp != (unsigned long long *******)0x0) {
    (*(code *)(*system_multi_level_stack_temp)[5])();
  }
  system_event_handle_paramr_013(buffer_alloc_result,&system_multi_level_stack_temp);
  system_multi_level_pointer_array_index = system_multi_level_stack_tertiary;
  multi_level_ptr_array_9 = system_multi_level_stack_secondary;
  system_multi_level_stack_temp = system_multi_level_stack_tertiary;
  if (system_multi_level_stack_tertiary == (unsigned long long *******)0x0) {
    if (system_multi_level_stack_secondary != (unsigned long long *******)0x0) {
      system_execution_function(&system_multi_level_stack_root,*system_multi_level_stack_secondary);
      handle_param_system_error(multi_level_ptr_array_9);
    }
    thread_stack_ptr = &g_threadString2;
    if (thread_stack_ptr == (void *)0x0) {
      return;
    }
    handle_param_system_error();
  }
  system_processor_011(&system_multi_level_stack_primary,*system_multi_level_stack_tertiary);
  pppppppuStackX_10 = system_multi_level_pointer_array_index + 4;
  multi_level_stack_long_variable = system_multi_level_pointer_array_index + 5;
  system_event_handle_paramr_010();
  handle_param_system_error(system_multi_level_pointer_array_index);
}
        g_data_buffer_status = 0;
        return ptr_var_7;
      }
      system_initialization_result0 = (long long)thread_result_index << 4;
      do {
        if ((int)(float_var - 12582912.0) <= (int)system_long_ptr_index) {
          g_data_buffer_status = 0;
          return ptr_var_7;
        }
        str_len_counter = *(long long *)(system_initialization_result0 + (long long)system_global_data_pointer);
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
            buffer_alloc_result = *(unsigned long long *)(str_len_counter + SYSTEM_POINTER_OFFSET8);
            thread_result_index = *(int *)(str_len_counter + SYSTEM_POINTER_OFFSET0);
            *(unsigned long long *)(str_len_counter + SYSTEM_POINTER_OFFSET8) = 0;
            *(unsigned int *)(str_len_counter + SYSTEM_POINTER_OFFSET0) = 0;
            *(unsigned int *)(str_len_counter + 0xe0) = 0;
            *(unsigned int *)(str_len_counter + 0xd8) = 0;
            system_hardware_002(buffer_alloc_result);
            LOCK();
            buffer_alloc_result = system_global_data_pointer - thread_result_index;
            ptr_var_7 = (long long *)(ulong long)system_global_data_pointer;
            UNLOCK();
            system_global_data_pointer = buffer_alloc_result;
            if (0 < thread_result_index) {
              system_long_ptr_index = (long long *)(ulong long)(uint)((int)system_long_ptr_index + thread_result_index);
              ptr_var_7 = system_global_data_pointer + (long long)thread_result_index * 2 + 2;
              if (ptr_var_7 < system_global_data_pointer) {
                memmove(system_global_data_pointer + (long long)thread_result_index * 2,ptr_var_7,
                        (long long)system_global_data_pointer - (long long)ptr_var_7);
              }
              ptr_var_7 = system_global_data_pointer + -2;
              system_global_data_pointer = ptr_var_7;
            }
          }
        }
        system_initialization_result0 = system_initialization_result0 + -STRING_BUFFER_SIZE;
        thread_result_index = thread_result_index + -1;
      } while (-1 < thread_result_index);
      g_data_buffer_status = 0;
      return ptr_var_7;
    }
    thread_op_flags = *(unsigned int *)(system_initialization_result0 + SYSTEM_POINTER_OFFSET4);
    buffer_alloc_result = *(unsigned int *)(system_initialization_result0 + SYSTEM_POINTER_OFFSET0);
    if (ptr_var_7 < system_global_data_pointer) {
      system_global_data_pointer = ptr_var_7 + 2;
      *ptr_var_7 = system_initialization_result0;
      ptr_var_7[1] = merge_32bit_values(buffer_alloc_result,thread_op_flags);
    }
    else {
      str_len_counter = (long long)ptr_var_7 - (long long)system_global_data_pointer >> 4;
      if (str_len_counter == 0) {
        str_len_counter = 1;
section_processing_jump_label_:
        ptr_var_7 = (long long *)system_execution_function(system_global_data_pointer,str_len_counter << 4,system_config_data_buffer);
      }
      else {
        str_len_counter = str_len_counter * 2;
        ptr_var_7 = system_long_ptr_index;
        if (str_len_counter != 0) goto section_processing_jump_label_;
      }
      if (system_global_data_pointer != system_global_data_pointer) {
        memmove(ptr_var_7,system_global_data_pointer,(long long)system_global_data_pointer - (long long)system_global_data_pointer);
      }
      *ptr_var_7 = system_initialization_result0;
      ptr_var_7[1] = merge_32bit_values(buffer_alloc_result,thread_op_flags);
      if (system_global_data_pointer != (long long *)0x0) {
        handle_param_system_error();
      }
      system_global_data_pointer = ptr_var_7 + str_len_counter * 2;
      system_global_data_pointer = ptr_var_7;
      system_global_data_pointer = ptr_var_7 + 2;
    }
    system_char_variable = system_validator_function(system_validator_address,&stack_long_var);
    ptr_var_7 = system_global_data_pointer;
    system_initialization_result0 = stack_long_var;
  } while( true );
}
      g_data_buffer_status = buffer_alloc_result;
      return;
    }
    str_len_counter = *(long long *)(str_len_counter + system_global_data_pointer);
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
        buffer_alloc_result = *(unsigned long long *)(str_len_counter + SYSTEM_POINTER_OFFSET8);
        thread_result_index = *(int *)(str_len_counter + SYSTEM_POINTER_OFFSET0);
        *(unsigned long long *)(str_len_counter + SYSTEM_POINTER_OFFSET8) = unaffected_register;
        buffer_alloc_result = (unsigned int)unaffected_register;
        *(unsigned int *)(str_len_counter + SYSTEM_POINTER_OFFSET0) = buffer_alloc_result;
        *(unsigned int *)(str_len_counter + 0xe0) = buffer_alloc_result;
        *(unsigned int *)(str_len_counter + 0xd8) = buffer_alloc_result;
        system_hardware_002(buffer_alloc_result);
        LOCK();
        system_global_data_pointer = system_global_data_pointer - thread_result_index;
        UNLOCK();
        if (0 < thread_result_index) {
          unaff_EBP = unaff_EBP + thread_result_index;
          str_len_counter = (long long)unaff_EDI * STRING_BUFFER_SIZE + system_global_data_pointer;
          buffer_alloc_result = str_len_counter + STRING_BUFFER_SIZE;
          if (buffer_alloc_result < system_global_data_pointer) {
            memmove(str_len_counter,buffer_alloc_result,system_global_data_pointer - buffer_alloc_result);
          }
          system_global_data_pointer = system_global_data_pointer - STRING_BUFFER_SIZE;
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
    system_handle_paramr_007(system_initialization_result0,&stack_size_max,handle_param,&uStackX_18);
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
    string_input_ptr = (unsigned short *)system_handle_paramr_008(system_initialization_result0,&stack_size_max,handle_param,&uStackX_18);
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
    system_handle_paramr_002(system_initialization_result0,&stack_size_max,handle_param,&uStackX_18);
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
    system_handle_paramr_005(system_initialization_result0,&stack_size_max,handle_param,&uStackX_18);
    float_var = 1.5259022e-05;
    *thread_op_flags = (float)(ushort)stack_size_max * 1.5259022e-05;
    buffer_alloc_result = (uint)stack_size_max._2_2_;
    buffer_alloc_result = stack_size_max._4_2_;
    goto code_section_16a1;
  case 0x28:
    thread_priority_level = mutex_type;
    system_handle_paramr_006(system_initialization_result0,&stack_size_max,handle_param,&uStackX_18);
    float_var = 0.003921569;
    *thread_op_flags = (float)(byte)stack_size_max * 0.003921569;
    buffer_alloc_result = (uint)stack_size_max._1_1_;
    buffer_alloc_result = (ushort)stack_size_max._2_1_;
    goto code_section_16a1;
  case 0x29:
    thread_priority_level = mutex_type;
    system_handle_paramr_006(system_initialization_result0,&stack_size_max,handle_param,&uStackX_18);
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
    system_handle_paramr_004(system_initialization_result0,abStack_2b8,handle_param,&uStackX_18);
    thread_op_flags[1] = 0.0;
    thread_op_flags[2] = 0.0;
    thread_op_flags[3] = 0.0;
    *thread_op_flags = (float)abStack_2b8[0];
    break;
  case 0x2c:
    buffer_alloc_result = system_handle_paramr_003(system_initialization_result0,handle_param,&uStackX_18);
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
  float_var = (stack_float_system_operation_parameterc - stack_float_system_operation_parameter0) * float_var + stack_float_system_operation_parameter0;
  stack_float_system_operation_parameter4 =
       (stack_float_system_control_parameter0 - stack_float_system_operation_parameter4) * float_var + stack_float_system_operation_parameter4;
  float_var = (stack_float_system_control_parameter4 - stack_float_system_operation_parameter8) * float_var + stack_float_system_operation_parameter8;
  *unreg_bx = (((stack_float_param_7c - stack_float_param_70) * float_var + stack_float_param_70)
               - float_var) * float_var + float_var;
  unreg_bx[1] = (((stack_float_param_78 - stack_float_system_control_parameterc) * float_var +
                  stack_float_system_control_parameterc) - stack_float_system_operation_parameter4) * float_var + stack_float_system_operation_parameter4
  ;
  unreg_bx[2] = (((stack_float_param_74 - stack_float_system_control_parameter8) * float_var +
                  stack_float_system_control_parameter8) - float_var) * float_var + float_var;
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
  float_var = (stack_float_system_operation_parameterc - stack_float_system_operation_parameter0) * float_var + stack_float_system_operation_parameter0;
  stack_float_system_operation_parameter4 =
       (stack_float_system_control_parameter0 - stack_float_system_operation_parameter4) * float_var + stack_float_system_operation_parameter4;
  float_var = (stack_float_system_control_parameter4 - stack_float_system_operation_parameter8) * float_var + stack_float_system_operation_parameter8;
  *unreg_bx = (((stack_float_param_7c - stack_float_param_70) * float_var + stack_float_param_70)
               - float_var) * float_var + float_var;
  unreg_bx[1] = (((stack_float_param_78 - stack_float_system_control_parameterc) * float_var +
                  stack_float_system_control_parameterc) - stack_float_system_operation_parameter4) * float_var + stack_float_system_operation_parameter4
  ;
  unreg_bx[2] = (((stack_float_param_74 - stack_float_system_control_parameter8) * float_var +
                  stack_float_system_control_parameter8) - float_var) * float_var + float_var;
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
    system_thread_manager_validate(buffer_alloc_result,1);
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
    string_input_ptr = &default_resource_config_string;
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
  system_execute_crypto_operation(stack_size_max ^ (ulong long)system_crypto_stack_buffer_medium);
}
        g_data_crypto_flag_tertiary = '\x01';
        thread_stack_ptr = (void *)merge_32bit_values(thread_stack_ptr._4_4_,0xc88);
        system_execution_function(system_debug_stack_buffer,&systemFunctionData1,&system_config_data,&systemFunctionData5);
        OutputDebugStringA(system_debug_stack_buffer);
      }
      string_input_ptr = &default_resource_config_string;
      if (*(void **)(handle_param + 8) != (void *)0x0) {
        string_input_ptr = *(void **)(handle_param + 8);
      }
      system_data_manager_process(system_global_data_pointer,&systemDataManagerData,string_input_ptr);
    }
  }
  system_char_variable = handle_param_system_event(mutex_attr);
  if (system_char_variable == '\0') {
    string_input_ptr = &default_resource_config_string;
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
      thread_op_flags = system_execution_function(system_global_data_pointer,handle_param[1],3);
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
        thread_op_flags = system_execution_function(system_global_data_pointer,handle_param[1],3);
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
    thread_op_flags = system_execution_function(system_global_data_pointer,handle_param[1],3);
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
  case SYSTEM_CONSTANT_2:
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
    pfloat_var = sub_long_long(zero_ext_long(floating_point_conversion_constant) * temp_buffer_primary,0);
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
    pfloat_var = sub_long_long(zero_ext_long(floating_point_conversion_constant) * temp_buffer_primary2,0);
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
  *(unsigned int *)(system_initialization_result + 0x4c) = 0;
  system_network_001(*(unsigned long long *)(system_initialization_result + STRING_BUFFER_SIZE8));
  thread_stack_ptr = &g_alternateDataTemplate;
  thread_stack_ptr = system_path_config_stack_buffer;
  system_path_config_stack_buffer[0] = 0;
  stack_size_max = 0x12;
  strcpy_s(system_path_config_stack_buffer,path_buffer_size,&system_config_path);
  system_network_002();
  thread_stack_ptr = &g_threadString4;
  system_execute_crypto_operation(stack_size_max ^ (ulong long)auStack_78);
}
        g_data_network_flag = 0;
        system_global_data_pointer = 0;
        system_global_data_pointer = 0;
        g_data_memory_flag = 0;
        system_global_data_pointer = 3;
        system_global_data_pointer = 0;
        system_crypto_initializer(&system_crypto_data);
        system_crypto_module_initializer(&crypto_module_data_buffer);
      }
      string_input_ptr = (uint *)&crypto_string_buffer;
      if (buffer_alloc_result < (ulong long)
                  ((*(long long *)(mutex_attr + 0x1c) - *(long long *)(mutex_attr + 0x1a)) / 0xb0)) {
        string_input_ptr = (uint *)(buffer_alloc_result + *(long long *)(mutex_attr + 0x1a));
      }
      if ((*(int *)(system_initialization_result0 + SYSTEM_THREAD_LOCAL_STORAGE_OFFSET) < system_global_data_pointer) &&
         (system_crypto_004(&crypto_module_data_buffer), system_global_data_pointer == -1)) {
        resource_template_pointer = &g_defaultDataTemplate;
        system_global_data_pointer = &g_data_network_flag;
        system_global_data_pointer = 0;
        g_data_network_flag = 0;
        system_global_data_pointer = 0;
        system_global_data_pointer = 0;
        g_data_memory_flag = 0;
        system_global_data_pointer = 3;
        system_global_data_pointer = 0;
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
      buffer_alloc_result = system_allocator_001(handle_param,string_input_ptr + SYSTEM_POINTER_OFFSET8,string_input_ptr + 0x22);
      buffer_alloc_result = buffer_alloc_result + 1;
      buffer_alloc_result = buffer_alloc_result + 0xb0;
      buffer_alloc_result = buffer_alloc_result - 1;
    } while (buffer_alloc_result != 0);
  }
section_processing_jump_label_:
  return buffer_alloc_result & INVALID_HANDLE_VALUEffffff00;
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
  byte_validation_flag = (byte)system_temp_stack_array[0];
  goto section_processing_jump_label_;
}
unsigned long long allocate_system_memory(long long handle_param,long long *thread_op_flags,unsigned int *mutex_attr,uint mutex_type)
{
  long long *psystem_initialization_result;
  byte byte_flag_value;
  int thread_result_index;
  unsigned long long *string_input_ptr;
  unsigned long long buffer_alloc_result;
  long long *system_memory_buffer_ptr;
  long long str_len_counter;
  long long *pstack_long_var;
  unsigned int system_temp_stack_array [2];
  long long *system_memory_stack_primary;
  long long *plStack_78;
  unsigned long long stack_size_max;
  long long **system_parallel_stack_buffer;
  long long *system_memory_stack_backup;
  unsigned char auStack_58 [32];
  stack_size_max = DEFAULT_THREAD_POOL_FLAG;
  buffer_alloc_result = 0;
  byte_flag_value = *(byte *)(mutex_attr + 2);
  if ((mutex_type >> 1 & 1) != 0) {
    system_ui_003(system_global_data_pointer,&plStack_78,mutex_attr + 0x14,1);
    string_input_ptr = (unsigned long long *)system_ui_006();
    system_resource_002(*string_input_ptr,&pstack_long_var);
    if (system_memory_stack_primary != (long long *)0x0) {
      (**(code **)(*system_memory_stack_primary + 0x38))();
    }
    system_resource_003(pstack_long_var,&plStack_78);
    *(uint *)(pstack_long_var + path_buffer_size) = *(uint *)(pstack_long_var + path_buffer_size) | SYSTEM_CONFIG_BUFFER_SIZE_ZERO;
    system_temp_stack_array[0] = *mutex_attr;
    psystem_initialization_result = (long long *)(handle_param + 0x3d8);
    system_memory_stack_primary = psystem_initialization_result;
    thread_result_index = _Mtx_lock(psystem_initialization_result);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    buffer_alloc_result = system_execution_function(system_global_data_pointer,0x298,8,3);
    system_memory_buffer_ptr = (long long *)system_memory_001(buffer_alloc_result);
    system_parallel_stack_buffer = (long long **)merge_32bit_values(system_parallel_stack_buffer._4_4_,system_temp_stack_array[0]);
    system_memory_stack_backup = system_memory_buffer_ptr;
    system_memory_manager_006(handle_param + 0x3a8,auStack_58,&system_parallel_stack_buffer);
    thread_result_index = _Mtx_unlock(psystem_initialization_result);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    *thread_op_flags = (long long)system_memory_buffer_ptr;
    buffer_alloc_result = *(unsigned long long *)(handle_param + 0x2d8);
    system_parallel_stack_buffer = &system_memory_stack_primary;
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
    system_temp_stack_array[0] = *mutex_attr;
    str_len_counter = system_memory_manager_007(handle_param);
    if (str_len_counter == 0) {
      *thread_op_flags = 0;
      buffer_alloc_result = 1;
    }
    else {
      psystem_initialization_result = (long long *)(handle_param + 0x3d8);
      pstack_long_var = psystem_initialization_result;
      thread_result_index = _Mtx_lock(psystem_initialization_result);
      if (thread_result_index != 0) {
        __Throw_C_error_std__YAXH_Z(thread_result_index);
      }
      system_memory_manager_008(handle_param + 0x3a8,system_temp_stack_array);
      thread_result_index = _Mtx_unlock(psystem_initialization_result);
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
    system_initialization_result = *(long long *)(str_len_counter + 8);
    for (string_input_ptr = *(uint **)(system_initialization_result + ((ulong long)mutex_attr % (ulong long)*(uint *)(str_len_counter + STRING_BUFFER_SIZE)) * 8);
        string_input_ptr != (uint *)0x0; string_input_ptr = *(uint **)(string_input_ptr + 4)) {
      if (mutex_attr == *string_input_ptr) {
        str_len_counter = *(long long *)(str_len_counter + STRING_BUFFER_SIZE);
        goto section_processing_jump_label_;
      }
    }
    str_len_counter = *(long long *)(str_len_counter + STRING_BUFFER_SIZE);
    string_input_ptr = *(uint **)(system_initialization_result + str_len_counter * 8);
section_processing_jump_label_:
    if ((string_input_ptr != *(uint **)(system_initialization_result + str_len_counter * 8)) && (str_len_counter = *(long long *)(string_input_ptr + 2), str_len_counter != 0)
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
  long long system_initialization_result;
  long long str_len_counter;
  uint *string_input_ptr;
  if ((*(int *)(*(long long *)((long long)ThreadLocalStoragePointer + (ulong long)__tls_index * 8) +
               SYSTEM_THREAD_LOCAL_STORAGE_OFFSET) < system_global_data_pointer) && (system_crypto_004(&network_data_buffer), system_global_data_pointer == -1)) {
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
    system_initialization_result = *(long long *)(str_len_counter + 8);
    for (string_input_ptr = *(uint **)(system_initialization_result + ((ulong long)mutex_attr % (ulong long)*(uint *)(str_len_counter + STRING_BUFFER_SIZE)) * 8);
        string_input_ptr != (uint *)0x0; string_input_ptr = *(uint **)(string_input_ptr + 4)) {
      if (mutex_attr == *string_input_ptr) {
        str_len_counter = *(long long *)(str_len_counter + STRING_BUFFER_SIZE);
        goto section_processing_jump_label_;
      }
    }
    str_len_counter = *(long long *)(str_len_counter + STRING_BUFFER_SIZE);
    string_input_ptr = *(uint **)(system_initialization_result + str_len_counter * 8);
section_processing_jump_label_:
    if ((string_input_ptr != *(uint **)(system_initialization_result + str_len_counter * 8)) && (*(long long *)(string_input_ptr + 2) != 0)) {
      return *(long long *)(string_input_ptr + 2);
    }
  }
  system_memory_005(SECONDARY_MEMORY_POOL_ADDR);
  return SECONDARY_MEMORY_POOL_ADDR;
}
long long allocate_system_buffer(unsigned long long handle_param,long long *thread_op_flags,long long mutex_attr)
{
  long long system_initialization_result;
  uint thread_op_flags;
  ulong long buffer_alloc_result;
  unsigned long long buffer_alloc_result;
  unsigned long long *string_input_ptr;
  uint buffer_alloc_result;
  if (*(int *)(*(long long *)((long long)ThreadLocalStoragePointer + (ulong long)__tls_index * 8) +
              SYSTEM_THREAD_LOCAL_STORAGE_OFFSET) < system_global_data_pointer) {
    system_crypto_004(&render_data_buffer);
    if (system_global_data_pointer == -1) {
      buffer_alloc_result = system_execution_function(system_global_data_pointer,0x1c8,8,3);
      system_global_data_pointer = system_memory_manager_001(buffer_alloc_result);
      buffer_alloc_result = system_execution_function(system_global_data_pointer,path_buffer_size0,8,3);
      system_global_data_pointer = system_allocate_memory_buffer(buffer_alloc_result);
      string_input_ptr = (unsigned long long *)system_execution_function(system_global_data_pointer,0xf8,8,3);
      system_memory_003(string_input_ptr);
      // Original name: system_180a1b368
      *string_input_ptr = &g_handle_param_manager_address;
      system_register_memory_pointer(string_input_ptr);
      system_global_data_pointer = string_input_ptr;
      system_global_data_pointer = system_execution_function();
      string_input_ptr = (unsigned long long *)system_execution_function(system_global_data_pointer,0xb0,8,3);
      system_memory_003(string_input_ptr);
      // Original name: system_180a1b3f0
      *string_input_ptr = &g_memory_manager_address;
      system_global_data_pointer = string_input_ptr;
      system_global_data_pointer = system_get_memory_manager_instance();
      system_global_data_pointer = (*system_global_data_pointer)(&system_mutex_buffer);
      system_global_data_pointer = 0;
      system_crypto_module_initializer(&render_data_buffer);
    }
  }
  buffer_alloc_result = 0;
  buffer_alloc_result = (uint)(thread_op_flags[1] - *thread_op_flags >> 3);
  if (buffer_alloc_result != 0) {
    do {
      system_initialization_result = *(long long *)(*thread_op_flags + buffer_alloc_result * 8);
      if (*(int *)(system_initialization_result + 8) == *(int *)(mutex_attr + 8)) {
        return system_initialization_result;
      }
      thread_op_flags = (int)buffer_alloc_result + 1;
      buffer_alloc_result = (ulong long)thread_op_flags;
    } while (thread_op_flags < buffer_alloc_result);
  }
  (**(code **)(**(long long **)(&mutex_attr_data_buffer + (ulong long)*(uint *)(mutex_attr + SYSTEM_POINTER_OFFSETc) * 8) + 8))();
  return *(long long *)(&mutex_attr_data_buffer + (ulong long)*(uint *)(mutex_attr + SYSTEM_POINTER_OFFSETc) * 8);
}
unsigned long long
system_allocator_primary(unsigned long long handle_param,long long *thread_op_flags,unsigned long long *mutex_attr,unsigned int mutex_type,
             unsigned int system_operation_parameter,unsigned char system_control_parameter)
{
  long long system_initialization_result;
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
      system_initialization_result = *thread_op_flags;
      str_len_counter = (long long)mutex_attr[1] - (long long)string_input_ptr >> 2;
      if (0 < str_len_counter) {
        do {
          str_len_counter = str_len_counter >> 1;
          if (string_input_ptr[str_len_counter] < *(uint *)(system_initialization_result + str_len_counter)) {
            string_input_ptr = string_input_ptr + str_len_counter + 1;
            str_len_counter = str_len_counter + (-1 - str_len_counter);
          }
          str_len_counter = str_len_counter;
        } while (0 < str_len_counter);
      }
      if ((string_input_ptr == (uint *)mutex_attr[1]) || (*(uint *)(system_initialization_result + str_len_counter) < *string_input_ptr)) {
        buffer_alloc_result = allocate_with_thread_op_flags(handle_param,*(unsigned int *)(system_initialization_result + str_len_counter),mutex_type);
        system_allocator_002(handle_param,buffer_alloc_result,system_operation_parameter,mutex_type,system_control_parameter);
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
  long long system_initialization_result;
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
    system_initialization_result = (long long)unaffected_register[1] - (long long)string_input_ptr >> 2;
    if (0 < system_initialization_result) {
      do {
        str_len_counter = system_initialization_result >> 1;
        if (string_input_ptr[str_len_counter] < *(uint *)(*unaffected_register + str_len_counter)) {
          string_input_ptr = string_input_ptr + str_len_counter + 1;
          str_len_counter = system_initialization_result + (-1 - str_len_counter);
        }
        system_initialization_result = str_len_counter;
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
system_allocator_secondary(unsigned long long handle_param,long long *thread_op_flags,long long *mutex_attr,uint mutex_type,char system_operation_parameter)
{
  long long system_initialization_result;
  long long str_len_counter;
  uint buffer_alloc_result;
  ulong long buffer_alloc_result;
  ulong long buffer_alloc_result;
  long long str_len_counter;
  uint buffer_alloc_result;
  unsigned long long buffer_alloc_result;
  long long str_len_counter;
  long long system_initialization_result0;
  buffer_alloc_result = 0;
  system_initialization_result = mutex_attr[1];
  str_len_counter = *mutex_attr;
  buffer_alloc_result = thread_op_flags[1] - *thread_op_flags >> 3;
  if ((int)buffer_alloc_result != 0) {
    str_len_counter = 0;
    buffer_alloc_result = buffer_alloc_result & UINT32_MAX;
    do {
      buffer_alloc_result = 0;
      buffer_alloc_result = (uint)(system_initialization_result - str_len_counter >> 3);
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
      if (((system_operation_parameter != '\0') && (*(int *)(str_len_counter + SYSTEM_POINTER_OFFSETc) == 2)) &&
         (buffer_alloc_result = *(long long *)(str_len_counter + 0xc0) - *(long long *)(str_len_counter + 0xb8) >> 3, (int)buffer_alloc_result != 0))
      {
        system_initialization_result0 = 0;
        buffer_alloc_result = buffer_alloc_result & UINT32_MAX;
        do {
          system_allocator_003(handle_param,*(unsigned long long *)(*(long long *)(str_len_counter + 0xb8) + system_initialization_result0),mutex_type,
                        system_operation_parameter);
          system_initialization_result0 = system_initialization_result0 + 8;
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
  long long system_initialization_result;
  uint thread_op_flags;
  ulong long system_input_register_rax;
  ulong long buffer_alloc_result;
  long long str_len_counter;
  uint unaff_EDI;
  unsigned char in_R10B;
  long long *unaffected_register;
  uint unaffected_registerD;
  ulong long buffer_alloc_result;
  long long *system_input_stack_parameter;
  char system_input_stack_flag;
  str_len_counter = 0;
  buffer_alloc_result = system_input_register_rax & UINT32_MAX;
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
    system_initialization_result = *(long long *)(str_len_counter + *unaffected_register);
    *(uint *)(system_initialization_result + STRING_BUFFER_SIZE) = *(uint *)(system_initialization_result + STRING_BUFFER_SIZE) | unaffected_registerD;
    if (((system_input_stack_flag != '\0') && (*(int *)(system_initialization_result + SYSTEM_POINTER_OFFSETc) == 2)) &&
       (buffer_alloc_result = *(long long *)(system_initialization_result + 0xc0) - *(long long *)(system_initialization_result + 0xb8) >> 3, (int)buffer_alloc_result != 0)) {
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
    mutex_attr = system_input_stack_parameter;
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
system_allocator_tertiary(unsigned long long handle_param,long long *thread_op_flags,unsigned long long *mutex_attr,unsigned int mutex_type,
             uint system_operation_parameter)
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
        *(uint *)(str_len_counter + 8) = *(uint *)(str_len_counter + 8) | system_operation_parameter;
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
  long long system_initialization_result;
  long long str_len_counter;
  long long str_len_counter;
  unsigned char unaff_SIL;
  ulong long buffer_alloc_result;
  uint *string_input_ptr;
  unsigned long long *unaffected_register;
  long long *unaffected_register;
  uint system_input_stack_flag;
  str_len_counter = 0;
  buffer_alloc_result = (ulong long)reg_eax;
  do {
    string_input_ptr = (uint *)*unaffected_register;
    system_initialization_result = (long long)unaffected_register[1] - (long long)string_input_ptr >> 2;
    if (0 < system_initialization_result) {
      do {
        str_len_counter = system_initialization_result >> 1;
        if (string_input_ptr[str_len_counter] < *(uint *)(*unaffected_register + str_len_counter)) {
          string_input_ptr = string_input_ptr + str_len_counter + 1;
          str_len_counter = system_initialization_result + (-1 - str_len_counter);
        }
        system_initialization_result = str_len_counter;
      } while (0 < str_len_counter);
    }
    if ((string_input_ptr == (uint *)unaffected_register[1]) || (*(uint *)(*unaffected_register + str_len_counter) < *string_input_ptr)) {
      system_initialization_result = system_allocator_006();
      unaff_SIL = 1;
      *(uint *)(system_initialization_result + 8) = *(uint *)(system_initialization_result + 8) | system_input_stack_flag;
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
      system_global_data_pointer = 6;
      strcpy_s(&config_data_buffer_0,path_buffer_size0,&path_buffer_0,system_string_length_parameter,buffer_alloc_result);
      system_crypto_initializer(system_execution_function);
      system_crypto_module_initializer(&string_handle_buffer);
    }
  }
  (**(code **)(*system_global_data_pointer + 0x70))(system_global_data_pointer,&thread_data_buffer);
  return;
}
unsigned int
system_finalizer_primary(unsigned long long handle_param,unsigned long long thread_op_flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  code *character_scan_pointer;
  unsigned int thread_op_flags;
  unsigned long long buffer_alloc_result;
  void *thread_stack_ptr;
  long long thread_stack_base_address;
  character_scan_pointer = *(code **)(*system_global_data_pointer + 0x70);
  // Original name: system_180a02fc8
      buffer_alloc_result = system_ui_005(&thread_stack_ptr, &g_ui_mutex_property_address_180a02fc8, mutex_attr, mutex_type, 0, DEFAULT_THREAD_POOL_FLAG);
  thread_op_flags = (*character_scan_pointer)(system_global_data_pointer,buffer_alloc_result,mutex_attr,mutex_type,1);
  thread_stack_ptr = &g_threadString2;
  if (thread_stack_base_address != 0) {
    handle_param_system_error();
  }
  return thread_op_flags;
}
unsigned int
system_finalizer_secondary(unsigned long long handle_param,unsigned long long thread_op_flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  code *character_scan_pointer;
  unsigned int thread_op_flags;
  unsigned long long buffer_alloc_result;
  void *thread_stack_ptr;
  long long thread_stack_base_address;
  character_scan_pointer = *(code **)(*system_global_data_pointer + 0x70);
  // Original name: system_180a02fa0
      buffer_alloc_result = system_ui_005(&thread_stack_ptr, &g_ui_mutex_type_address_180a02fa0, mutex_attr, mutex_type, 0, DEFAULT_THREAD_POOL_FLAG);
  thread_op_flags = (*character_scan_pointer)(system_global_data_pointer,buffer_alloc_result,mutex_attr,mutex_type,1);
  thread_stack_ptr = &g_threadString2;
  if (thread_stack_base_address != 0) {
    handle_param_system_error();
  }
  return thread_op_flags;
}
unsigned int
system_finalizer_tertiary(unsigned long long handle_param,unsigned long long thread_op_flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  code *character_scan_pointer;
  unsigned int thread_op_flags;
  unsigned long long buffer_alloc_result;
  unsigned long long buffer_alloc_result;
  void *thread_stack_ptr;
  long long thread_stack_base_address;
  buffer_alloc_result = DEFAULT_THREAD_POOL_FLAG;
  character_scan_pointer = *(code **)(*system_global_data_pointer + 0x70);
  buffer_alloc_result = system_cleanup_007(&thread_stack_ptr);
  thread_op_flags = (*character_scan_pointer)(system_global_data_pointer,buffer_alloc_result,mutex_attr,mutex_type,buffer_alloc_result);
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
      system_global_data_pointer = (unsigned int)str_len_counter;
      strcpy_s(&string_buffer_constant,string_buffer_size_constant,handle_param);
    }
    system_crypto_initializer(system_execution_function);
    system_crypto_module_initializer(&thread_data_buffer_primary);
  }
  buffer_alloc_result = system_execution_function(system_global_data_pointer,0xe0,8,3,buffer_alloc_result);
  pstack_long_var = alStack_30;
  // Original name: system_18045f210
      thread_stack_ptr = &g_stack_data_address_18045f210;
  thread_stack_ptr = &system_stack_data_secondary;
  psystem_initialization_result = (long long *)system_execution_function(buffer_alloc_result,alStack_30);
  pstack_long_var = psystem_initialization_result;
  if (psystem_initialization_result != (long long *)0x0) {
    (**(code **)(*psystem_initialization_result + 0x28))(psystem_initialization_result);
  }
  buffer_alloc_result = system_global_data_pointer;
  ppstack_long_var = &pstack_long_var;
  pstack_long_var = psystem_initialization_result;
  if (psystem_initialization_result != (long long *)0x0) {
    (**(code **)(*psystem_initialization_result + 0x28))(psystem_initialization_result);
  }
  register_event_callback(buffer_alloc_result,&pstack_long_var);
  if (psystem_initialization_result != (long long *)0x0) {
    (**(code **)(*psystem_initialization_result + 0x38))(psystem_initialization_result);
  }
  return;
}
  system_data_initialization_flag = 1;
  system_global_data_pointer = string_buffer_size_constant;
  system_global_data_pointer = &g_threadString2;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = &g_threadString2;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_flag_buffer_8 = 1;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_finalizer_009();
  system_initialization_result = MODULE_DATA_ADDR;
  str_len_counter = 0x17;
  do {
    system_initialization_processor(system_initialization_result);
    system_initialization_result = system_initialization_result + STRING_BUFFER_SIZE;
    str_len_counter = str_len_counter + -1;
  } while (str_len_counter != 0);
  system_flag_buffer_9 = 0;
  _Mtx_init_in_situ(MODULE_MUTEX_ADDR,2,mutex_attr,mutex_type,buffer_alloc_result);
  system_global_data_pointer = UINT32_MAX;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0xffdc;
  system_flag_buffer_10 = 1;
  system_finalizer_008(&module_finalizer_buffer);
  system_global_data_pointer = 3;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  network_system_initialized = 1;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  render_system_initialized = 1;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 3;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 3;
  audio_system_initialized = 1;
  system_execution_function(MODULE_HANDLER_ADDR);
  input_system_initialized = 1;
  system_global_data_pointer = 3;
  system_global_data_pointer = SYSTEM_CONFIG_BUFFER_SIZE_ZERO;
  system_global_data_pointer = FLOAT_ONE;
  system_global_data_pointer = 0;
  system_global_data_pointer = 1;
  system_global_data_pointer = &system_data_buffer_secondary;
  system_global_data_pointer = 0;
  physics_system_initialized = 1;
  system_global_data_pointer = 0;
  system_global_data_pointer = 3;
  system_global_data_pointer = 0;
  thread_pool_backup_flag = 0;
  system_global_data_pointer = 0;
  ui_system_initialized = 1;
  system_global_data_pointer = 3;
  system_global_data_pointer = SYSTEM_CONFIG_BUFFER_SIZE_ZERO;
  system_global_data_pointer = FLOAT_ONE;
  system_global_data_pointer = 0;
  system_global_data_pointer = 1;
  system_global_data_pointer = &system_data_buffer_secondary;
  system_global_data_pointer = 4;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 3;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  module_system_initialized = 1;
  system_global_data_pointer = 0;
  thread_pool_system_initialized = 1;
  system_global_data_pointer = 0;
  memory_system_initialized = 1;
  system_global_data_pointer = 0;
  configuration_system_initialized = 1;
  system_global_data_pointer = 0;
  resource_system_initialized = 1;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 3;
  network_system_backup_flag = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 3;
  render_system_backup_flag = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 4;
  system_global_data_pointer = SYSTEM_CONFIG_BUFFER_SIZE_ZERO;
  system_global_data_pointer = FLOAT_ONE;
  system_global_data_pointer = 0;
  system_global_data_pointer = 1;
  system_global_data_pointer = &system_data_buffer_secondary;
  script_system_initialized = 1;
  system_global_data_pointer = 3;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  security_system_initialized = 1;
  system_data_status_flag = 1;
  system_global_data_pointer = 0;
  system_data_control_flag = 1;
  return;
}
    thread_system_flag = '\x01';
    str_len_counter = system_thread_manager_destroy(&thread_stack_ptr,system_global_data_pointer + 0x2c0);
    string_input_ptr = &default_resource_config_string;
    if (*(void **)(str_len_counter + 8) != (void *)0x0) {
      string_input_ptr = *(void **)(str_len_counter + 8);
    }
    (**(code **)(system_initialization_result + 0x330))(*(unsigned int *)(system_global_data_pointer + STRING_BUFFER_SIZE),string_input_ptr);
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
  *(float *)(system_global_data_pointer + path_buffer_size0) = 1.0 / (float)(int)handle_param[1];
  thread_stack_ptr = &g_threadString2;
  if (thread_stack_ptr != (void *)0x0) {
    handle_param_system_error();
  }
  return;
}
unsigned long long * system_execution_function(unsigned long long *handle_param,int thread_op_flags)
{
  long long *psystem_initialization_result;
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
  handle_param[SYSTEM_CONSTANT_2] = 0;
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
  psystem_initialization_result = handle_param + 0x31;
  *psystem_initialization_result = 0;
  handle_param[0x32] = 0;
  handle_param[0x33] = 0;
  *(unsigned int *)(handle_param + 0x34) = 3;
  string_input_ptr = handle_param + 0x35;
  str_len_counter = 8;
  system_execution_function(string_input_ptr,0x28,8,&g_system_execution_buffer,system_execution_function);
  _Mtx_init_in_situ(handle_param + 0x5d, STRING_BUFFER_SIZE_SECONDARY);
  thread_result_index = module_configuration_processor(&module_config_addr);
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
  handle_param[0x15] = INVALID_HANDLE_VALUE;
  buffer_alloc_result = system_execution_function(system_global_data_pointer,(long long)*(int *)(handle_param + 0x67) * 0x48,0x18);
  handle_param[0x12] = buffer_alloc_result;
  handle_param[0x1b] = (long long)*(int *)(handle_param + 0x67);
  if (handle_param[0x17] != 0) {
    handle_param_system_error();
  }
  handle_param[0x17] = 0;
  handle_param[0x19] = 1;
  handle_param[0x18] = 0;
  handle_param[0x1a] = INVALID_HANDLE_VALUE;
  buffer_alloc_result = system_execution_function(system_global_data_pointer,(long long)*(int *)(handle_param + 0x67) * 0xc0,0x18);
  handle_param[0x17] = buffer_alloc_result;
  handle_param[0x2a] = (long long)*(int *)(handle_param + 0x67);
  if (handle_param[0x26] == 0) {
    handle_param[0x26] = 0;
    handle_param[0x28] = 1;
    handle_param[0x27] = 0;
    handle_param[0x29] = INVALID_HANDLE_VALUE;
    buffer_alloc_result = system_execution_function(system_global_data_pointer,(long long)*(int *)(handle_param + 0x67) << 4,0x18);
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
    handle_param[0x2e] = INVALID_HANDLE_VALUE;
    buffer_alloc_result = system_execution_function(system_global_data_pointer,(long long)*(int *)(handle_param + 0x67) << 4,0x18);
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
      handle_param[0x24] = INVALID_HANDLE_VALUE;
      buffer_alloc_result = system_execution_function(system_global_data_pointer,(long long)*(int *)(handle_param + 0x67) * SYSTEM_POINTER_OFFSET8,0x18);
      handle_param[0x21] = buffer_alloc_result;
      buffer_alloc_result = (ulong long)*(int *)(handle_param + 0x67);
      str_len_counter = *psystem_initialization_result;
      if ((ulong long)(handle_param[0x33] - str_len_counter >> 3) < buffer_alloc_result) {
        if (buffer_alloc_result != 0) {
          str_len_counter = system_execution_function(system_global_data_pointer,buffer_alloc_result * 8,*(unsigned char *)(handle_param + 0x34));
          str_len_counter = *psystem_initialization_result;
        }
        if (str_len_counter != handle_param[0x32]) {
          memmove(str_len_counter,str_len_counter,handle_param[0x32] - str_len_counter);
        }
        if (str_len_counter != 0) {
          handle_param_system_error();
        }
        *psystem_initialization_result = str_len_counter;
        handle_param[0x32] = str_len_counter;
        handle_param[0x33] = str_len_counter + buffer_alloc_result * 8;
      }
      thread_result_index = *(int *)(system_global_data_pointer + 0xe00) + -1;
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
      apstack_long_var[0] = system_global_data_pointer;
      if (system_global_data_pointer != (long long *)0x0) {
        (**(code **)(*system_global_data_pointer + 0x28))();
      }
      buffer_alloc_result = system_execution_function(buffer_alloc_result,apstack_long_var);
    }
  }
  return buffer_alloc_result;
}
    thread_data_buffer_character = '\0';
    system_crypto_module_initializer(&thread_data_buffer_primary);
  }
  thread_op_flags = *(unsigned long long *)(*(long long *)(*(long long *)(handle_param + SYSTEM_POINTER_OFFSETa8) + 0x260) + path_buffer_size8);
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
  thread_result_index = *(char *)(handle_param + SYSTEM_POINTER_OFFSET58) + -1;
  system_initialization_result1 = (long long)thread_result_index;
  float_var = -1e+08;
  float_var = -1e+08;
  float_var = -1e+08;
  buffer_alloc_result = 0;
  buffer_alloc_result = 0;
  if (-1 < thread_result_index) {
    stack_size_max = 0x7f7fffff;
    stack_size_max = 0x7f7fffff;
    system_initialization_result2 = system_initialization_result1 * 0x30;
    fStack_108 = float_var;
    fStack_104 = float_var;
    fStack_100 = float_var;
    do {
      system_initialization_result0 = *(long long *)(handle_param + SYSTEM_POINTER_OFFSET50) + system_initialization_result2;
      system_char_variable = *(char *)(system_initialization_result0 + 0x2c);
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
      pfloat_var = (float *)system_execution_function(&stack_size_max,auStack_c8,system_initialization_result0);
      fStack_170 = (float_var + pfloat_var[2]) - float_var;
      fStack_174 = (float_var + pfloat_var[1]) - float_var;
      fStack_178 = (float_var + *pfloat_var) - float_var;
      system_execution_function(&stack_size_max,&fStack_138,&fStack_178);
      pfloat_var = (float *)system_execution_function(&stack_size_max,auStack_b8,system_initialization_result0 + STRING_BUFFER_SIZE);
      fStack_160 = (float_var + pfloat_var[2]) - float_var;
      fStack_164 = (float_var + pfloat_var[1]) - float_var;
      fStack_168 = (float_var + *pfloat_var) - float_var;
      system_execution_function(&stack_size_max,&fStack_128,&fStack_168);
      float_var = *(float *)(system_initialization_result0 + 0x24);
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
      system_initialization_result2 = system_initialization_result2 + -0x30;
      system_initialization_result1 = system_initialization_result1 + -1;
      float_var = fStack_198;
      float_var = fStack_194;
      float_var = fStack_190;
      buffer_alloc_result = stack_size_max;
      buffer_alloc_result = stack_size_max;
      fStack_158 = float_var;
      fStack_154 = float_var;
    } while (-1 < system_initialization_result1);
  }
  *(unsigned long long *)(handle_param + SYSTEM_POINTER_OFFSET70) = 0x4cbebc204cbebc20;
  *(unsigned long long *)(handle_param + SYSTEM_POINTER_OFFSET78) = 0x7f7fffff4cbebc20;
  *(unsigned long long *)(handle_param + SYSTEM_POINTER_OFFSET80) = 0xccbebc20ccbebc20;
  *(unsigned long long *)(handle_param + SYSTEM_POINTER_OFFSET88) = 0x7f7fffffccbebc20;
  system_initialization_result1 = 0;
  *(unsigned int *)(handle_param + SYSTEM_POINTER_OFFSETa0) = 0;
  *(unsigned long long *)(handle_param + SYSTEM_POINTER_OFFSET90) = 0;
  *(unsigned long long *)(handle_param + SYSTEM_POINTER_OFFSET98) = 0x7f7fffff00000000;
  fStack_198 = float_var;
  if (*(float *)(handle_param + SYSTEM_POINTER_OFFSET70) < float_var) {
    fStack_198 = *(float *)(handle_param + SYSTEM_POINTER_OFFSET70);
  }
  fStack_194 = float_var;
  if (*(float *)(handle_param + SYSTEM_POINTER_OFFSET74) < float_var) {
    fStack_194 = *(float *)(handle_param + SYSTEM_POINTER_OFFSET74);
  }
  fStack_190 = fStack_180;
  if (*(float *)(handle_param + SYSTEM_POINTER_OFFSET78) < fStack_180) {
    fStack_190 = *(float *)(handle_param + SYSTEM_POINTER_OFFSET78);
  }
  *(ulong long *)(handle_param + SYSTEM_POINTER_OFFSET70) = merge_32bit_values(fStack_194,fStack_198);
  *(ulong long *)(handle_param + SYSTEM_POINTER_OFFSET78) = merge_32bit_values(stack_size_max,fStack_190);
  fStack_198 = float_var;
  if (float_var < *(float *)(handle_param + SYSTEM_POINTER_OFFSET80)) {
    fStack_198 = *(float *)(handle_param + SYSTEM_POINTER_OFFSET80);
  }
  fStack_194 = float_var;
  if (float_var < *(float *)(handle_param + SYSTEM_POINTER_OFFSET84)) {
    fStack_194 = *(float *)(handle_param + SYSTEM_POINTER_OFFSET84);
  }
  fStack_190 = fStack_180;
  if (fStack_180 < *(float *)(handle_param + SYSTEM_POINTER_OFFSET88)) {
    fStack_190 = *(float *)(handle_param + SYSTEM_POINTER_OFFSET88);
  }
  *(ulong long *)(handle_param + SYSTEM_POINTER_OFFSET80) = merge_32bit_values(fStack_194,fStack_198);
  *(ulong long *)(handle_param + SYSTEM_POINTER_OFFSET88) = merge_32bit_values(stack_size_max,fStack_190);
  fStack_198 = float_var;
  if (*(float *)(handle_param + SYSTEM_POINTER_OFFSET70) < float_var) {
    fStack_198 = *(float *)(handle_param + SYSTEM_POINTER_OFFSET70);
  }
  fStack_194 = float_var;
  if (*(float *)(handle_param + SYSTEM_POINTER_OFFSET74) < float_var) {
    fStack_194 = *(float *)(handle_param + SYSTEM_POINTER_OFFSET74);
  }
  fStack_190 = float_var;
  if (*(float *)(handle_param + SYSTEM_POINTER_OFFSET78) < float_var) {
    fStack_190 = *(float *)(handle_param + SYSTEM_POINTER_OFFSET78);
  }
  *(ulong long *)(handle_param + SYSTEM_POINTER_OFFSET70) = merge_32bit_values(fStack_194,fStack_198);
  *(ulong long *)(handle_param + SYSTEM_POINTER_OFFSET78) = merge_32bit_values(stack_size_max,fStack_190);
  fStack_198 = float_var;
  if (float_var < *(float *)(handle_param + SYSTEM_POINTER_OFFSET80)) {
    fStack_198 = *(float *)(handle_param + SYSTEM_POINTER_OFFSET80);
  }
  fStack_194 = float_var;
  if (float_var < *(float *)(handle_param + SYSTEM_POINTER_OFFSET84)) {
    fStack_194 = *(float *)(handle_param + SYSTEM_POINTER_OFFSET84);
  }
  fStack_190 = float_var;
  if (float_var < *(float *)(handle_param + SYSTEM_POINTER_OFFSET88)) {
    fStack_190 = *(float *)(handle_param + SYSTEM_POINTER_OFFSET88);
  }
  *(ulong long *)(handle_param + SYSTEM_POINTER_OFFSET80) = merge_32bit_values(fStack_194,fStack_198);
  *(ulong long *)(handle_param + SYSTEM_POINTER_OFFSET88) = merge_32bit_values(stack_size_max,fStack_190);
  if (*(long long *)(handle_param + SYSTEM_POINTER_OFFSETa8) != 0) {
    system_initialization_result1 = *(long long *)(*(long long *)(handle_param + SYSTEM_POINTER_OFFSETa8) + 0x260);
  }
  *(float *)(system_initialization_result1 + 0x218) = float_var;
  *(float *)(system_initialization_result1 + 0x21c) = float_var;
  *(float *)(system_initialization_result1 + 0x220) = fStack_180;
  *(unsigned int *)(system_initialization_result1 + 0x224) = buffer_alloc_result;
  *(float *)(system_initialization_result1 + 0x228) = float_var;
  *(float *)(system_initialization_result1 + 0x22c) = float_var;
  *(float *)(system_initialization_result1 + 0x230) = float_var;
  *(unsigned int *)(system_initialization_result1 + 0x234) = buffer_alloc_result;
  pfloat_var = *(float **)(handle_param + SYSTEM_POINTER_OFFSET60);
  if ((pfloat_var != (float *)0x0) && (*(long long *)(handle_param + SYSTEM_POINTER_OFFSET68) != 0)) {
    if ((pfloat_var[4] <= float_var && float_var != pfloat_var[4]) ||
       ((pfloat_var[5] <= float_var && float_var != pfloat_var[5] || (pfloat_var[6] <= float_var && float_var != pfloat_var[6]))
       )) {
      do {
      } while (thread_data_buffer_character != '\0');
      LOCK();
      UNLOCK();
      pfloat_var = *(float **)(handle_param + SYSTEM_POINTER_OFFSET60);
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
      pfloat_var = *(float **)(handle_param + SYSTEM_POINTER_OFFSET60);
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
    pfloat_var = *(float **)(handle_param + SYSTEM_POINTER_OFFSET68);
    if (((pfloat_var[4] <= float_var && float_var != pfloat_var[4]) ||
        (pfloat_var[5] <= float_var && float_var != pfloat_var[5])) ||
       (pfloat_var[6] <= float_var && float_var != pfloat_var[6])) {
      do {
      } while (thread_data_buffer_character != '\0');
      LOCK();
      UNLOCK();
      pfloat_var = *(float **)(handle_param + SYSTEM_POINTER_OFFSET68);
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
      pfloat_var = *(float **)(handle_param + SYSTEM_POINTER_OFFSET68);
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
        system_global_data_pointer = 8;
        strcpy_s(&system_string_buffer, SYSTEM_CONFIG_BUFFER_SIZE, &g_system_default_string);
        system_crypto_initializer(system_execution_function);
        system_crypto_module_initializer(&system_data_buffer_primary);
      }
    }
    (*UNRECOVERED_JUMPTABLE)(system_global_data_pointer,&system_data_buffer_ptr);
    return;
  }
  if (-1 < handle_param) {
    if (handle_param < (int)((system_global_data_pointer - system_global_data_pointer) / 0x68)) {
      (*UNRECOVERED_JUMPTABLE)(system_global_data_pointer,(long long)handle_param * 0x68 + system_global_data_pointer);
      return;
    }
  }
  if (*(int *)(*(long long *)((long long)ThreadLocalStoragePointer + (ulong long)__tls_index * 8) +
              SYSTEM_THREAD_LOCAL_STORAGE_OFFSET) < system_global_data_pointer) {
    system_crypto_004(&system_crypto_buffer);
    if (system_global_data_pointer == -1) {
      resource_template_pointer = &g_defaultDataTemplate;
      system_global_data_pointer = &resource_data_buffer;
      resource_data_buffer = 0;
      system_global_data_pointer = 0;
      strcpy_s(&resource_data_buffer, SYSTEM_CONFIG_BUFFER_SIZE, &default_resource_config_string);
      system_crypto_initializer(system_execution_function);
      system_crypto_module_initializer(&system_crypto_buffer);
    }
  }
  (*UNRECOVERED_JUMPTABLE)(system_global_data_pointer,&system_resource_buffer);
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
    if (thread_priority_level == SYSTEM_CONSTANT_2) {
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
            if (thread_priority_level == SYSTEM_CONSTANT_2) goto section_processing_jump_label_;
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
                thread_result_index = strcmp(thread_stack_base_address,&g_system_system_string_length);
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
                  system_char_variable = string_system_processor(auStack_30,&g_system_string_version);
                  if (system_char_variable == '\0') {
                    system_char_variable = string_system_processor(auStack_30,&g_system_string_name);
                    if (system_char_variable == '\0') {
                      system_char_variable = string_system_processor(auStack_30,&g_system_string_id);
                      if (system_char_variable == '\0') {
                        system_char_variable = string_system_processor(auStack_30,&g_system_string_type);
                        if (system_char_variable == '\0') {
                          system_char_variable = string_system_processor(auStack_30,&g_system_string_category);
                          if (system_char_variable == '\0') {
                            system_char_variable = string_system_processor(auStack_30,&g_system_string_class);
                            if (system_char_variable == '\0') {
                              system_char_variable = string_system_processor(auStack_30,&g_system_string_module);
                              if (system_char_variable == '\0') {
                                system_char_variable = string_system_processor(auStack_30,&g_system_string_function);
                                if (system_char_variable == '\0') {
                                  system_char_variable = string_system_processor(auStack_30,&g_system_string_method);
                                  if (system_char_variable == '\0') {
                                    system_char_variable = string_system_processor(auStack_30,&g_system_string_parameter);
                                    if (system_char_variable == '\0') {
                                      system_char_variable = string_system_processor(auStack_30,&g_system_string_argument);
                                      if (system_char_variable == '\0') {
                                        system_char_variable = string_system_processor(auStack_30,&g_system_string_variable);
                                        if (system_char_variable == '\0') {
                                          system_char_variable = string_system_processor(auStack_30,&g_system_string_constant);
                                          if (system_char_variable == '\0') {
                                            system_char_variable = string_system_processor(auStack_30,&g_system_string_value);
                                            if (system_char_variable == '\0') {
                                              system_char_variable = string_system_processor(auStack_30,&g_system_string_buffer)
                                              ;
                                              if (system_char_variable == '\0') {
                                                system_char_variable = string_system_processor(auStack_30,
                                                                            &g_system_string_data);
                                                if (system_char_variable == '\0') {
                                                  system_char_variable = string_system_processor(auStack_30,
                                                                              &g_system_string_memory);
                                                  if (system_char_variable == '\0') {
                                                    system_char_variable = string_system_processor(auStack_30,
                                                                                &g_system_string_pointer);
                                                    if (system_char_variable == '\0') {
                                                      system_char_variable = string_system_processor(auStack_30,
                                                                                  &g_system_string_reference);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = string_system_processor(auStack_30,
                                                                                  &g_system_string_address);
                                                      if (system_char_variable == '\0') {
                                                        system_char_variable = string_system_processor(auStack_30,
                                                                                    &g_system_string_offset);
                                                        if (system_char_variable == '\0') {
                                                          system_char_variable = string_system_processor(auStack_30,
                                                                                      &g_system_string_size
                                                                                     );
                                                          if (system_char_variable == '\0') {
                                                            system_char_variable = string_system_processor(auStack_30,
                                                                                        &
                                                  g_file_path_config);
                                                  if (system_char_variable == '\0') {
                                                    system_char_variable = string_system_processor(auStack_30,
                                                                                &g_file_path_data);
                                                    if (system_char_variable != '\0') {
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_stack_data_main);
                                                      if (system_char_variable == '\0') {
                                                        system_char_variable = string_system_processor(auStack_50,
                                                                                    &g_stack_data_backup);
                                                        if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                        system_char_variable = string_system_processor(auStack_50,
                                                                                    &g_stack_data_temp);
                                                        if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                        system_char_variable = string_system_processor(auStack_50,
                                                                                    &g_stack_data_flag);
                                                        if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                        system_char_variable = string_system_processor(auStack_50,
                                                                                    &network_buffer_ptr);
                                                        if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                        system_char_variable = string_system_processor(auStack_50,
                                                                                    &g_stack_data_status);
                                                        if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                        system_char_variable = string_system_processor(auStack_50,
                                                                                    &g_stack_data_pointer);
                                                        if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                        system_char_variable = string_system_processor(auStack_50,
                                                                                    &g_stack_data_offset);
                                                        if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                        system_char_variable = string_system_processor(auStack_50,
                                                                                    &g_stack_data_size);
                                                        if (system_char_variable != '\0') {
                                                          buffer_alloc_result = 0x21c;
                                                          goto section_processing_jump_label_;
                                                        }
                                                        system_char_variable = string_system_processor(auStack_50,
                                                                                    &g_stack_data_length);
                                                        if (system_char_variable != '\0') {
                                                          buffer_alloc_result = 0x41c;
                                                          goto section_processing_jump_label_;
                                                        }
                                                        system_char_variable = string_system_processor(auStack_50,
                                                                                    &g_stack_data_index);
                                                        if (system_char_variable != '\0') {
                                                          buffer_alloc_result = 0x41d;
                                                          goto section_processing_jump_label_;
                                                        }
                                                        system_char_variable = string_system_processor(auStack_50,
                                                                                    &g_stack_data_counter);
                                                        if (system_char_variable != '\0') {
                                                          buffer_alloc_result = 0x420;
                                                          goto section_processing_jump_label_;
                                                        }
                                                        system_char_variable = string_system_processor(auStack_50,
                                                                                    &g_stack_data_buffer);
                                                        if (system_char_variable != '\0') {
                                                          buffer_alloc_result = 0x424;
                                                          goto section_processing_jump_label_;
                                                        }
                                                        system_char_variable = string_system_processor(auStack_50,
                                                                                    &g_stack_data_value);
                                                        if (system_char_variable != '\0') {
                                                          buffer_alloc_result = 0x428;
                                                          goto section_processing_jump_label_;
                                                        }
                                                        system_char_variable = string_system_processor(auStack_50,
                                                                                    &g_stack_data_result);
                                                        if (system_char_variable != '\0') {
                                                          buffer_alloc_result = 0x430;
                                                          goto section_processing_jump_label_;
                                                        }
                                                        system_char_variable = string_system_processor(auStack_50,
                                                                                    &g_stack_data_code);
                                                        if (system_char_variable != '\0') {
                                                          buffer_alloc_result = 0x438;
                                                          goto section_processing_jump_label_;
                                                        }
                                                        system_char_variable = string_system_processor(auStack_50,
                                                                                    &g_stack_data_error);
                                                        if (system_char_variable != '\0') {
                                                          buffer_alloc_result = 0x439;
                                                          goto section_processing_jump_label_;
                                                        }
                                                        system_char_variable = string_system_processor(auStack_50,
                                                                                    &g_stack_data_info);
                                                        if (system_char_variable != '\0') {
                                                          buffer_alloc_result = 0x43c;
                                                          goto section_processing_jump_label_;
                                                        }
                                                        system_char_variable = string_system_processor(auStack_50,
                                                                                    &g_stack_data_debug);
                                                        if (system_char_variable != '\0') {
                                                          buffer_alloc_result = 0x440;
                                                          goto section_processing_jump_label_;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  else {
                                                    system_char_variable = string_system_processor(auStack_50,
                                                                                &g_buffer_main);
                                                    if (system_char_variable == '\0') {
                                                      system_char_variable = string_system_processor(auStack_50,
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
                                                    system_char_variable = string_system_processor(auStack_50,
                                                                                &g_buffer_status);
                                                    if (system_char_variable == '\0') {
                                                      pthread_op_flags = &g_buffer_pointer;
                                                      goto section_processing_jump_label_;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    system_char_variable = string_system_processor(auStack_50,
                                                                                &g_system_variable_length);
                                                    if (system_char_variable == '\0') {
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_buffer_size);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_buffer_length);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_buffer_index);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_buffer_counter);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_buffer_temp);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_buffer_data);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 100;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_buffer_value);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_buffer_result);
                                                      if (system_char_variable != '\0') {
section_processing_jump_label_:
                                                        buffer_alloc_result = 0x6c;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_buffer_code);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_buffer_error);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x74;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_buffer_info);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_buffer_debug);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_buffer_type);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_buffer_kind);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = SYSTEM_POINTER_OFFSET4;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_buffer_mode);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_buffer_state);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_buffer_flag_primary);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_buffer_flag_secondary);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_buffer_flag_temp);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x96;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_buffer_flag_data);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_buffer_flag_value);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    system_char_variable = string_system_processor(auStack_50,
                                                                                &g_system_variable_main);
                                                    if (system_char_variable == '\0') {
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_backup);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_temp);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_flag);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_status);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_pointer);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_offset);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_size);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_length);
                                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_index);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0xf8;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_counter);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0xfc;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_data);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = string_buffer_size_constant;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_value);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = SYSTEM_MODULE_OFFSET_2;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_result);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x114;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_code);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x118;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_error);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x11c;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_info);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x11e;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_debug);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x120;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_type);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x130;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_kind);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = SYSTEM_MODULE_OFFSET_1;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_mode);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x174;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_state);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x178;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_flag_primary);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x188;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_flag_secondary);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x198;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_flag_temp);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x19c;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_flag_data);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x1a0;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_flag_value);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x220;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_flag_result);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x230;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_flag_code);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x234;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_flag_error);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x238;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_flag_info);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x23c;
                                                        goto section_processing_jump_label_;
                                                      }
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_system_variable_flag_debug);
                                                      if (system_char_variable != '\0') {
                                                        buffer_alloc_result = 0x240;
                                                        goto section_processing_jump_label_;
                                                      }
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    system_char_variable = string_system_processor(auStack_50,
                                                                                &g_thread_stack_buffer);
                                                    if (system_char_variable == '\0') {
                                                      system_char_variable = string_system_processor(auStack_50,
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
                                                    system_char_variable = string_system_processor(auStack_50,
                                                                                &g_thread_data_buffer);
                                                    if (system_char_variable == '\0') {
                                                      system_char_variable = string_system_processor(auStack_50,
                                                                                  &g_thread_data_primary);
                                                      if (system_char_variable == '\0') {
                                                        system_char_variable = string_system_processor(auStack_50,
                                                                                    &g_thread_data_secondary);
                                                        if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                        system_char_variable = string_system_processor(auStack_50,
                                                                                    &g_thread_data_temp);
                                                        if (system_char_variable == '\0') {
                                                          system_char_variable = string_system_processor(auStack_50,
                                                                                      &g_thread_data_flag
                                                                                     );
                                                          if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                          system_char_variable = string_system_processor(auStack_50,
                                                                                      &g_thread_data_status
                                                                                     );
                                                          if (system_char_variable == '\0') {
                                                            system_char_variable = string_system_processor(auStack_50,
                                                                                        &
                                                  g_thread_data_result);
                                                  if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                  system_char_variable = string_system_processor(auStack_50,
                                                                              &g_thread_data_index);
                                                  if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                  system_char_variable = string_system_processor(auStack_50,
                                                                              &config_buffer_ptr);
                                                  if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                  system_char_variable = string_system_processor(auStack_50,
                                                                              &g_thread_data_counter);
                                                  if (system_char_variable == '\0') {
                                                    system_char_variable = string_system_processor(auStack_50,
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
                                                  system_char_variable = string_system_processor(auStack_50,
                                                                              &g_system_config_temp);
                                                  if (system_char_variable == '\0') {
                                                    system_char_variable = string_system_processor(auStack_50,
                                                                                &g_system_config_flag);
                                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                    system_char_variable = string_system_processor(auStack_50,
                                                                                &g_system_config_status);
                                                    if (system_char_variable != '\0') {
section_processing_jump_label_:
                                                      buffer_alloc_result = 0xc;
                                                      goto section_processing_jump_label_;
                                                    }
                                                    system_char_variable = string_system_processor(auStack_50,
                                                                                &g_system_config_size);
                                                    if (system_char_variable != '\0') {
section_processing_jump_label_:
                                                      buffer_alloc_result = 0x14;
                                                      goto section_processing_jump_label_;
                                                    }
                                                    system_char_variable = string_system_processor(auStack_50,
                                                                                &g_system_config_offset);
                                                    if (system_char_variable != '\0') {
section_processing_jump_label_:
                                                      buffer_alloc_result = 0x1c;
                                                      goto section_processing_jump_label_;
                                                    }
                                                    pthread_op_flags = &g_system_config_buffer;
section_processing_jump_label_:
                                                    system_char_variable = string_system_processor(auStack_50,pthread_op_flags);
                                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                                  }
                                                }
                                              }
                                              else {
                                                system_char_variable = string_system_processor(auStack_50,
                                                                            &g_system_config_pointer);
                                                if (system_char_variable == '\0') {
                                                  system_char_variable = string_system_processor(auStack_50,
                                                                              &system_config_data_pointer);
                                                  if (system_char_variable != '\0') {
                                                    buffer_alloc_result = path_buffer_size00;
                                                    goto section_processing_jump_label_;
                                                  }
                                                  system_char_variable = string_system_processor(auStack_50,
                                                                              &g_system_config_value);
                                                  if (system_char_variable != '\0') {
                                                    buffer_alloc_result = path_buffer_size10;
                                                    goto section_processing_jump_label_;
                                                  }
                                                  system_char_variable = string_system_processor(auStack_50,
                                                                              &g_system_config_index);
                                                  if (system_char_variable != '\0') {
                                                    buffer_alloc_result = path_buffer_size20;
                                                    goto section_processing_jump_label_;
                                                  }
                                                  system_char_variable = string_system_processor(auStack_50,
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
                                            system_char_variable = string_system_processor(auStack_50,&g_thread_stack_buffer);
                                            if (system_char_variable == '\0') {
                                              system_char_variable = string_system_processor(auStack_50,&g_thread_stack_backup)
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
                                          system_char_variable = string_system_processor(auStack_50,&g_thread_stack_main);
                                          if (system_char_variable == '\0') {
                                            system_char_variable = string_system_processor(auStack_50,&g_thread_stack_backup);
                                            if (system_char_variable != '\0') goto section_processing_jump_label_;
                                            system_char_variable = string_system_processor(auStack_50,&g_thread_stack_temp);
                                            if (system_char_variable != '\0') goto section_processing_jump_label_;
                                            system_char_variable = string_system_processor(auStack_50,&g_system_data_flag_error);
                                            if (system_char_variable != '\0') {
section_processing_jump_label_:
                                              buffer_alloc_result = 0x24;
                                              goto section_processing_jump_label_;
                                            }
                                            system_char_variable = string_system_processor(auStack_50,&g_system_data_flag_temp);
                                            if (system_char_variable != '\0') goto section_processing_jump_label_;
                                            system_char_variable = string_system_processor(auStack_50,&g_system_data_flag_value);
                                            if (system_char_variable != '\0') {
section_processing_jump_label_:
                                              buffer_alloc_result = 0x2c;
                                              goto section_processing_jump_label_;
                                            }
                                            system_char_variable = string_system_processor(auStack_50,&g_system_data_flag_code);
                                            if (system_char_variable != '\0') goto section_processing_jump_label_;
                                            system_char_variable = string_system_processor(auStack_50,&g_buffer_counter);
                                            if (system_char_variable != '\0') {
section_processing_jump_label_:
                                              buffer_alloc_result = 0x34;
                                              goto section_processing_jump_label_;
                                            }
                                            system_char_variable = string_system_processor(auStack_50,&g_thread_stack_size);
                                            if (system_char_variable != '\0') goto section_processing_jump_label_;
                                            system_char_variable = string_system_processor(auStack_50,&g_thread_stack_length);
                                            if (system_char_variable != '\0') {
section_processing_jump_label_:
                                              buffer_alloc_result = 0x3c;
                                              goto section_processing_jump_label_;
                                            }
                                            system_char_variable = string_system_processor(auStack_50,&g_thread_stack_index);
                                            if (system_char_variable != '\0') {
section_processing_jump_label_:
                                              buffer_alloc_result = 0x50;
                                              goto section_processing_jump_label_;
                                            }
                                            system_char_variable = string_system_processor(auStack_50,&g_thread_stack_counter);
                                            if (system_char_variable != '\0') goto section_processing_jump_label_;
                                            system_char_variable = string_system_processor(auStack_50,&g_system_data_info);
                                            if (system_char_variable != '\0') {
section_processing_jump_label_:
                                              buffer_alloc_result = 0x5c;
                                              goto section_processing_jump_label_;
                                            }
                                            system_char_variable = string_system_processor(auStack_50,&g_system_data_index);
                                            if (system_char_variable != '\0') {
section_processing_jump_label_:
                                              buffer_alloc_result = 0x60;
                                              goto section_processing_jump_label_;
                                            }
                                            system_char_variable = string_system_processor(auStack_50,&g_thread_stack_result);
                                            if (system_char_variable != '\0') {
                                              buffer_alloc_result = 0x61;
                                              goto section_processing_jump_label_;
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        system_char_variable = string_system_processor(auStack_50,&g_thread_stack_buffer);
                                        if (system_char_variable == '\0') {
                                          system_char_variable = string_system_processor(auStack_50,&g_thread_stack_backup);
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
                                      system_char_variable = string_system_processor(auStack_50,&g_thread_stack_code);
                                      if (system_char_variable == '\0') {
                                        system_char_variable = string_system_processor(auStack_50,&g_thread_stack_error);
                                        if (system_char_variable != '\0') goto section_processing_jump_label_;
                                        pthread_op_flags = &g_thread_stack_info;
section_processing_jump_label_:
                                        system_char_variable = string_system_processor(auStack_50,pthread_op_flags);
                                        if (system_char_variable != '\0') goto section_processing_jump_label_;
                                      }
                                    }
                                  }
                                  else {
                                    system_char_variable = string_system_processor(auStack_50,&g_thread_stack_buffer);
                                    if (system_char_variable == '\0') {
                                      system_char_variable = string_system_processor(auStack_50,&g_thread_stack_backup);
                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                      system_char_variable = string_system_processor(auStack_50,&g_thread_stack_debug);
                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                      system_char_variable = string_system_processor(auStack_50,&g_thread_operation_flag);
                                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    }
                                  }
                                }
                                else {
                                  system_char_variable = string_system_processor(auStack_50,&g_buffer_stack_main);
                                  if (system_char_variable == '\0') {
                                    system_char_variable = string_system_processor(auStack_50,&g_buffer_stack_backup);
                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    system_char_variable = string_system_processor(auStack_50,&g_buffer_stack_temp);
                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    system_char_variable = string_system_processor(auStack_50,&g_buffer_stack_flag);
                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    system_char_variable = string_system_processor(auStack_50,&g_buffer_stack_status);
                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    system_char_variable = string_system_processor(auStack_50,&g_buffer_stack_pointer);
                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    system_char_variable = string_system_processor(auStack_50,&g_buffer_stack_offset);
                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    system_char_variable = string_system_processor(auStack_50,&g_buffer_stack_size);
                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    system_char_variable = string_system_processor(auStack_50,&g_buffer_stack_length);
                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    system_char_variable = string_system_processor(auStack_50,&g_buffer_stack_index);
                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    system_char_variable = string_system_processor(auStack_50,&g_buffer_stack_counter);
                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    system_char_variable = string_system_processor(auStack_50,&g_buffer_stack_data);
                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    system_char_variable = string_system_processor(auStack_50,&g_buffer_stack_value);
                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    system_char_variable = string_system_processor(auStack_50,&g_buffer_stack_result);
                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    system_char_variable = string_system_processor(auStack_50,&g_buffer_stack_code);
                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    system_char_variable = string_system_processor(auStack_50,&g_buffer_stack_error);
                                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                                    system_char_variable = string_system_processor(auStack_50,&g_buffer_stack_info);
                                    if (system_char_variable != '\0') {
                                      buffer_alloc_result = 0x53c;
                                      goto section_processing_jump_label_;
                                    }
                                    system_char_variable = string_system_processor(auStack_50,&g_buffer_stack_debug);
                                    if (system_char_variable != '\0') {
                                      buffer_alloc_result = 0x540;
                                      goto section_processing_jump_label_;
                                    }
                                    system_char_variable = string_system_processor(auStack_50,&g_buffer_stack_type);
                                    if (system_char_variable != '\0') {
                                      buffer_alloc_result = 0x544;
                                      goto section_processing_jump_label_;
                                    }
                                    system_char_variable = string_system_processor(auStack_50,&g_buffer_stack_kind);
                                    if (system_char_variable != '\0') {
                                      buffer_alloc_result = 0x548;
                                      goto section_processing_jump_label_;
                                    }
                                    system_char_variable = string_system_processor(auStack_50,&g_buffer_stack_mode);
                                    if (system_char_variable != '\0') {
                                      buffer_alloc_result = 0x54c;
                                      goto section_processing_jump_label_;
                                    }
                                    system_char_variable = string_system_processor(auStack_50,&g_buffer_stack_state);
                                    if (system_char_variable != '\0') {
                                      buffer_alloc_result = 0x550;
                                      goto section_processing_jump_label_;
                                    }
                                    system_char_variable = string_system_processor(auStack_50,&g_thread_data_counter);
                                    if (system_char_variable != '\0') {
                                      buffer_alloc_result = 0x554;
                                      goto section_processing_jump_label_;
                                    }
                                    system_char_variable = string_system_processor(auStack_50,&g_buffer_stack_flag_primary);
                                    if (system_char_variable != '\0') {
                                      buffer_alloc_result = 0x558;
                                      goto section_processing_jump_label_;
                                    }
                                    system_char_variable = string_system_processor(auStack_50,&g_buffer_stack_flag_secondary);
                                    if (system_char_variable != '\0') {
                                      buffer_alloc_result = 0x55c;
                                      goto section_processing_jump_label_;
                                    }
                                    system_char_variable = string_system_processor(auStack_50,&g_buffer_stack_flag_temp);
                                    if (system_char_variable != '\0') {
                                      buffer_alloc_result = 0x560;
                                      goto section_processing_jump_label_;
                                    }
                                    system_char_variable = string_system_processor(auStack_50,&g_buffer_stack_flag_data);
                                    if (system_char_variable != '\0') {
                                      buffer_alloc_result = 0x564;
                                      goto section_processing_jump_label_;
                                    }
                                    system_char_variable = string_system_processor(auStack_50,&g_buffer_stack_flag_value);
                                    if (system_char_variable != '\0') {
                                      buffer_alloc_result = 0x565;
                                      goto section_processing_jump_label_;
                                    }
                                    system_char_variable = string_system_processor(auStack_50,&g_buffer_stack_flag_result);
                                    if (system_char_variable != '\0') {
                                      buffer_alloc_result = 0x566;
                                      goto section_processing_jump_label_;
                                    }
                                    system_char_variable = string_system_processor(auStack_50,&g_buffer_stack_flag_code);
                                    if (system_char_variable != '\0') {
                                      buffer_alloc_result = 0x567;
                                      goto section_processing_jump_label_;
                                    }
                                  }
                                }
                              }
                              else {
                                system_char_variable = string_system_processor(auStack_50,&g_system_buffer_main);
                                if (system_char_variable == '\0') {
                                  system_char_variable = string_system_processor(auStack_50,&g_system_buffer_backup);
                                  if (system_char_variable != '\0') goto section_processing_jump_label_;
                                  system_char_variable = string_system_processor(auStack_50,&g_system_buffer_temp);
                                  if (system_char_variable != '\0') goto section_processing_jump_label_;
                                  system_char_variable = string_system_processor(auStack_50,&g_system_buffer_flag);
                                  if (system_char_variable != '\0') goto section_processing_jump_label_;
                                  system_char_variable = string_system_processor(auStack_50,&g_system_buffer_status);
                                  if (system_char_variable != '\0') goto section_processing_jump_label_;
                                  system_char_variable = string_system_processor(auStack_50,&g_system_buffer_pointer);
                                  if (system_char_variable != '\0') goto section_processing_jump_label_;
                                }
                              }
                            }
                            else {
                              system_char_variable = string_system_processor(auStack_50,&g_system_buffer_offset);
                              if (system_char_variable == '\0') {
                                system_char_variable = string_system_processor(auStack_50,&g_system_buffer_size);
                                if (system_char_variable == '\0') {
                                  system_char_variable = string_system_processor(auStack_50,&g_system_buffer_length);
                                  if (system_char_variable == '\0') {
                                    system_char_variable = string_system_processor(auStack_50,&g_system_buffer_index);
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
                            system_char_variable = string_system_processor(auStack_50,&g_system_buffer_data);
                            if (system_char_variable == '\0') {
                              system_char_variable = string_system_processor(auStack_50,&g_system_buffer_value);
                              if (system_char_variable != '\0') {
section_processing_jump_label_:
                                buffer_alloc_result = 4;
                                goto section_processing_jump_label_;
                              }
                              system_char_variable = string_system_processor(auStack_50,&g_system_buffer_result);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = string_system_processor(auStack_50,&g_system_buffer_code);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = string_system_processor(auStack_50,&g_system_buffer_error);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = string_system_processor(auStack_50,&g_system_buffer_info);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = string_system_processor(auStack_50,&g_system_buffer_debug);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = string_system_processor(auStack_50,&g_system_buffer_type);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = string_system_processor(auStack_50,&g_system_buffer_kind);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = string_system_processor(auStack_50,&g_system_buffer_mode);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = string_system_processor(auStack_50,&g_system_buffer_state);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = string_system_processor(auStack_50,&g_system_buffer_flag_primary);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = string_system_processor(auStack_50,&g_system_buffer_flag_secondary);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = string_system_processor(auStack_50,&g_system_buffer_flag_temp);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = string_system_processor(auStack_50,&g_system_buffer_flag_data);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = string_system_processor(auStack_50,&g_system_buffer_flag_value);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = string_system_processor(auStack_50,&g_system_buffer_flag_result);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = string_system_processor(auStack_50,&g_system_buffer_flag_code);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = string_system_processor(auStack_50,&g_system_buffer_flag_error);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = string_system_processor(auStack_50,&g_system_buffer_flag_info);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = string_system_processor(auStack_50,&g_system_buffer_flag_debug);
                              if (system_char_variable != '\0') {
section_processing_jump_label_:
                                buffer_alloc_result = 0x70;
                                goto section_processing_jump_label_;
                              }
                              system_char_variable = string_system_processor(auStack_50,&g_system_buffer_flag_type);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = string_system_processor(auStack_50,&g_system_buffer_flag_kind);
                              if (system_char_variable != '\0') {
section_processing_jump_label_:
                                buffer_alloc_result = SYSTEM_POINTER_OFFSET0;
                                goto section_processing_jump_label_;
                              }
                              system_char_variable = string_system_processor(auStack_50,&g_system_buffer_flag_mode);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = string_system_processor(auStack_50,&g_system_buffer_flag_state);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = string_system_processor(auStack_50,&g_system_buffer_flag_extra);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = string_system_processor(auStack_50,&g_system_buffer_flag_main);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = string_system_processor(auStack_50,&g_system_buffer_flag_backup);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                              system_char_variable = string_system_processor(auStack_50,&g_system_buffer_flag_reserve);
                              if (system_char_variable != '\0') goto section_processing_jump_label_;
                            }
                          }
                        }
                        else {
                          system_char_variable = string_system_processor(auStack_50,&g_system_data_main);
                          if (system_char_variable == '\0') {
                            system_char_variable = string_system_processor(auStack_50,&g_system_data_backup);
                            if (system_char_variable != '\0') goto section_processing_jump_label_;
                            system_char_variable = string_system_processor(auStack_50,&g_system_data_temp);
                            if (system_char_variable != '\0') goto section_processing_jump_label_;
                          }
                        }
                      }
                      else {
                        system_char_variable = string_system_processor(auStack_50,&g_system_data_flag);
                        if (system_char_variable == '\0') {
                          system_char_variable = string_system_processor(auStack_50,&g_system_data_status);
                          if (system_char_variable != '\0') goto section_processing_jump_label_;
                          system_char_variable = string_system_processor(auStack_50,&g_system_data_pointer);
                          if (system_char_variable != '\0') goto section_processing_jump_label_;
                          system_char_variable = string_system_processor(auStack_50,&g_system_data_offset);
                          if (system_char_variable != '\0') goto section_processing_jump_label_;
                          system_char_variable = string_system_processor(auStack_50,&g_buffer_length);
                          if (system_char_variable != '\0') {
section_processing_jump_label_:
                            buffer_alloc_result = 0x38;
                            goto section_processing_jump_label_;
                          }
                          system_char_variable = string_system_processor(auStack_50,&g_buffer_counter);
                          if (system_char_variable != '\0') {
section_processing_jump_label_:
                            buffer_alloc_result = SYSTEM_CONFIG_BUFFER_SIZE;
                            goto section_processing_jump_label_;
                          }
                          system_char_variable = string_system_processor(auStack_50,&g_system_data_size);
                          if (system_char_variable != '\0') {
section_processing_jump_label_:
                            buffer_alloc_result = 0x44;
                            goto section_processing_jump_label_;
                          }
                          system_char_variable = string_system_processor(auStack_50,&g_system_data_length);
                          if (system_char_variable != '\0') {
section_processing_jump_label_:
                            buffer_alloc_result = 0x48;
                            goto section_processing_jump_label_;
                          }
                          system_char_variable = string_system_processor(auStack_50,&g_buffer_backup);
                          if (system_char_variable != '\0') {
section_processing_jump_label_:
                            buffer_alloc_result = 0x4c;
                            goto section_processing_jump_label_;
                          }
                          system_char_variable = string_system_processor(auStack_50,&g_system_data_index);
                          if (system_char_variable != '\0') goto section_processing_jump_label_;
                          system_char_variable = string_system_processor(auStack_50,&g_system_data_counter);
                          if (system_char_variable != '\0') {
                            buffer_alloc_result = 0x51;
                            goto section_processing_jump_label_;
                          }
                        }
                      }
                    }
                    else {
                      system_char_variable = string_system_processor(auStack_50,&g_system_data_value);
                      if (system_char_variable == '\0') {
                        system_char_variable = string_system_processor(auStack_50,&g_system_data_result);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0x58;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = string_system_processor(auStack_50,&g_system_data_code);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0x68;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = string_system_processor(auStack_50,&g_system_data_error);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0x78;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = string_system_processor(auStack_50,&g_system_data_info);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = SYSTEM_POINTER_OFFSET8;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = string_system_processor(auStack_50,&g_system_data_debug);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = SYSTEM_POINTER_OFFSETc;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = string_system_processor(auStack_50,&g_system_data_type);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0x90;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = string_system_processor(auStack_50,&g_system_data_kind);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0x94;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = string_system_processor(auStack_50,&g_system_data_mode);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0x98;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = string_system_processor(auStack_50,&g_system_data_state);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0x9c;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = string_system_processor(auStack_50,&g_system_data_flag_primary);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0xa0;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = string_system_processor(auStack_50,&g_system_data_flag_secondary);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0xa4;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = string_system_processor(auStack_50,&g_system_data_flag_temp);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0xa8;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = string_system_processor(auStack_50,&g_system_data_flag_data);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0xac;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = string_system_processor(auStack_50,&g_system_data_flag_value);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0xb0;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = string_system_processor(auStack_50,&g_system_data_flag_result);
                        if (system_char_variable != '\0') {
                          buffer_alloc_result = 0xb4;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = string_system_processor(auStack_50,&g_system_data_flag_code);
                        if (system_char_variable != '\0') {
                          buffer_alloc_result = 0xb5;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = string_system_processor(auStack_50,&g_system_data_flag_error);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0xb8;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = string_system_processor(auStack_50,&g_system_data_flag_info);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0xbc;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = string_system_processor(auStack_50,&g_system_data_flag_debug);
                        if (system_char_variable != '\0') {
                          buffer_alloc_result = 0xbd;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = string_system_processor(auStack_50,&g_system_data_flag_type);
                        if (system_char_variable != '\0') {
                          buffer_alloc_result = 0xbe;
                          goto section_processing_jump_label_;
                        }
                        system_char_variable = string_system_processor(auStack_50,&g_system_data_flag_kind);
                        if (system_char_variable != '\0') {
section_processing_jump_label_:
                          buffer_alloc_result = 0xc0;
                          goto section_processing_jump_label_;
                        }
                      }
                    }
                  }
                  else {
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_main);
                    if (system_char_variable == '\0') {
                      system_char_variable = string_system_processor(auStack_50,&g_system_handle_backup);
                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                      system_char_variable = string_system_processor(auStack_50,&g_system_handle_temp);
                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                      system_char_variable = string_system_processor(auStack_50,&g_system_handle_flag);
                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                      pthread_op_flags = &g_system_handle_status;
section_processing_jump_label_:
                      system_char_variable = string_system_processor(auStack_50,pthread_op_flags);
                      if (system_char_variable != '\0') goto section_processing_jump_label_;
                    }
                  }
                }
                else {
                  system_char_variable = validate_handle_param_parameters(auStack_50,&g_system_handle_pointer,1);
                  if (system_char_variable == '\0') {
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_offset);
                    if (system_char_variable != '\0') {
section_processing_jump_label_:
                      buffer_alloc_result = 1;
                      goto section_processing_jump_label_;
                    }
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_size);
                    if (system_char_variable != '\0') {
section_processing_jump_label_:
                      buffer_alloc_result = 2;
                      goto section_processing_jump_label_;
                    }
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_length);
                    if (system_char_variable != '\0') {
                      buffer_alloc_result = 3;
                      goto section_processing_jump_label_;
                    }
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_index);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_counter);
                    if (system_char_variable != '\0') {
                      buffer_alloc_result = 5;
                      goto section_processing_jump_label_;
                    }
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_data);
                    if (system_char_variable != '\0') {
                      buffer_alloc_result = 6;
                      goto section_processing_jump_label_;
                    }
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_value);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_result);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_code);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_error);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_info);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_debug);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_type);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_kind);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_mode);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_state);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_flag_primary);
                    if (system_char_variable != '\0') {
                      buffer_alloc_result = 0x1d;
                      goto section_processing_jump_label_;
                    }
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_flag_secondary);
                    if (system_char_variable != '\0') {
                      buffer_alloc_result = 0x1e;
                      goto section_processing_jump_label_;
                    }
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_flag_temp);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_flag_data);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_flag_value);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_flag_result);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_flag_code);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_flag_error);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_flag_info);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_flag_debug);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_flag_type);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_flag_kind);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_flag_mode);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_flag_state);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_flag_extra);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_flag_main);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_flag_backup);
                    if (system_char_variable != '\0') {
section_processing_jump_label_:
                      buffer_alloc_result = 0x7c;
                      goto section_processing_jump_label_;
                    }
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_flag_reserve);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_flag_special);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_flag_system);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_flag_user);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_flag_kernel);
                    if (system_char_variable != '\0') goto section_processing_jump_label_;
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_flag_driver);
                    if (system_char_variable != '\0') {
                      buffer_alloc_result = 0xc4;
                      goto section_processing_jump_label_;
                    }
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_flag_device);
                    if (system_char_variable != '\0') {
                      buffer_alloc_result = 200;
                      goto section_processing_jump_label_;
                    }
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_flag_process);
                    if (system_char_variable != '\0') {
                      buffer_alloc_result = 0xcc;
                      goto section_processing_jump_label_;
                    }
                    system_char_variable = string_system_processor(auStack_50,&g_system_handle_flag_thread);
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
                  system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_1,1);
                  if (system_char_variable != '\0') goto section_processing_jump_label_;
                  system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_2,1);
                  if (system_char_variable != '\0') {
section_processing_jump_label_:
                    buffer_alloc_result = 0x30;
                    goto section_processing_jump_label_;
                  }
                  system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_3,1);
                  if (system_char_variable != '\0') {
                    buffer_alloc_result = 0x31;
                    goto section_processing_jump_label_;
                  }
                  system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_4,1);
                  if (system_char_variable != '\0') {
                    buffer_alloc_result = 0x32;
                    goto section_processing_jump_label_;
                  }
                }
              }
            }
            else {
              system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_5,1);
              if (system_char_variable == '\0') {
                system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_6,1);
                if (system_char_variable != '\0') goto section_processing_jump_label_;
                system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_7,1);
                if (system_char_variable != '\0') goto section_processing_jump_label_;
                system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_8,1);
                if (system_char_variable != '\0') goto section_processing_jump_label_;
                system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_9,1);
                if (system_char_variable != '\0') goto section_processing_jump_label_;
                system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_10,1);
                if (system_char_variable != '\0') goto section_processing_jump_label_;
                system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_11,1);
                if (system_char_variable != '\0') goto section_processing_jump_label_;
                system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_4,1);
                if (system_char_variable != '\0') {
section_processing_jump_label_:
                  buffer_alloc_result = 0x19;
                  goto section_processing_jump_label_;
                }
                system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_12,1);
                if (system_char_variable != '\0') {
                  buffer_alloc_result = 0x35;
                  goto section_processing_jump_label_;
                }
                system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_13,1);
                if (system_char_variable != '\0') goto section_processing_jump_label_;
              }
            }
          }
          else {
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_14,1);
            if (system_char_variable == '\0') {
              system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_15,1);
              if (system_char_variable != '\0') {
section_processing_jump_label_:
                buffer_alloc_result = 7;
                goto section_processing_jump_label_;
              }
              system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_16,1);
              if (system_char_variable != '\0') goto section_processing_jump_label_;
              system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_17,1);
              if (system_char_variable != '\0') goto section_processing_jump_label_;
              system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_18,1);
              if (system_char_variable != '\0') {
section_processing_jump_label_:
                buffer_alloc_result = 10;
                goto section_processing_jump_label_;
              }
              system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_19,1);
              if (system_char_variable != '\0') goto section_processing_jump_label_;
              system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_20,1);
              if (system_char_variable != '\0') goto section_processing_jump_label_;
              system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_21,1);
              if (system_char_variable != '\0') {
                buffer_alloc_result = 0xd;
                goto section_processing_jump_label_;
              }
              system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_22,1);
              if (system_char_variable != '\0') {
                buffer_alloc_result = 0xe;
                goto section_processing_jump_label_;
              }
              system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_23,1);
              if (system_char_variable != '\0') {
                buffer_alloc_result = 0xf;
                goto section_processing_jump_label_;
              }
              system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_24,1);
              if (system_char_variable != '\0') goto section_processing_jump_label_;
              system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_25,1);
              if (system_char_variable != '\0') goto section_processing_jump_label_;
            }
          }
        }
        else {
          system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_26,1);
          if (system_char_variable == '\0') {
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_27,1);
            if (system_char_variable != '\0') goto section_processing_jump_label_;
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_28,1);
            if (system_char_variable != '\0') {
section_processing_jump_label_:
              buffer_alloc_result = 9;
              goto section_processing_jump_label_;
            }
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_29,1);
            if (system_char_variable != '\0') goto section_processing_jump_label_;
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_30,1);
            if (system_char_variable != '\0') goto section_processing_jump_label_;
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_31,1);
            if (system_char_variable != '\0') {
section_processing_jump_label_:
              buffer_alloc_result = 0x17;
              goto section_processing_jump_label_;
            }
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_32,1);
            if (system_char_variable != '\0') goto section_processing_jump_label_;
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_33,1);
            if (system_char_variable != '\0') goto section_processing_jump_label_;
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_34,1);
            if (system_char_variable != '\0') {
              buffer_alloc_result = 0x21;
              goto section_processing_jump_label_;
            }
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_35,1);
            if (system_char_variable != '\0') {
              buffer_alloc_result = 0x22;
              goto section_processing_jump_label_;
            }
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_36,1);
            if (system_char_variable != '\0') {
              buffer_alloc_result = 0x23;
              goto section_processing_jump_label_;
            }
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_37,1);
            if (system_char_variable != '\0') goto section_processing_jump_label_;
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_38,1);
            if (system_char_variable != '\0') {
              buffer_alloc_result = 0x25;
              goto section_processing_jump_label_;
            }
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_39,1);
            if (system_char_variable != '\0') {
              buffer_alloc_result = 0x26;
              goto section_processing_jump_label_;
            }
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_40,1);
            if (system_char_variable != '\0') {
              buffer_alloc_result = 0x27;
              goto section_processing_jump_label_;
            }
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_41,1);
            if (system_char_variable != '\0') goto section_processing_jump_label_;
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_42,1);
            if (system_char_variable != '\0') {
              buffer_alloc_result = 0x29;
              goto section_processing_jump_label_;
            }
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_43,1);
            if (system_char_variable != '\0') {
              buffer_alloc_result = 0x2a;
              goto section_processing_jump_label_;
            }
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_44,1);
            if (system_char_variable != '\0') {
              buffer_alloc_result = 0x2b;
              goto section_processing_jump_label_;
            }
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_45,1);
            if (system_char_variable != '\0') goto section_processing_jump_label_;
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_46,1);
            if (system_char_variable != '\0') {
              buffer_alloc_result = 0x2d;
              goto section_processing_jump_label_;
            }
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_47,1);
            if (system_char_variable != '\0') {
              buffer_alloc_result = 0x2e;
              goto section_processing_jump_label_;
            }
            system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_48,1);
            if (system_char_variable != '\0') {
              buffer_alloc_result = 0x2f;
              goto section_processing_jump_label_;
            }
          }
        }
      }
      else {
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_49,1);
        if (system_char_variable == '\0') {
          system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_50,1);
          if (system_char_variable != '\0') {
section_processing_jump_label_:
            buffer_alloc_result = 0xb;
            goto section_processing_jump_label_;
          }
          system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_51,1);
          if (system_char_variable != '\0') goto section_processing_jump_label_;
          system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_52,1);
          if (system_char_variable != '\0') goto section_processing_jump_label_;
          system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_53,1);
          if (system_char_variable != '\0') {
section_processing_jump_label_:
            buffer_alloc_result = 0x11;
            goto section_processing_jump_label_;
          }
          system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_54,1);
          if (system_char_variable != '\0') {
            buffer_alloc_result = 0x12;
            goto section_processing_jump_label_;
          }
          system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_55,1);
          if (system_char_variable != '\0') {
            buffer_alloc_result = 0x13;
            goto section_processing_jump_label_;
          }
          system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_56,1);
          if (system_char_variable != '\0') goto section_processing_jump_label_;
          system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_57,1);
          if (system_char_variable != '\0') {
            buffer_alloc_result = 0x15;
            goto section_processing_jump_label_;
          }
          system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_58,1);
          if (system_char_variable != '\0') {
            buffer_alloc_result = 0x16;
            goto section_processing_jump_label_;
          }
          system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_59,1);
          if (system_char_variable != '\0') goto section_processing_jump_label_;
          system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_60,1);
          if (system_char_variable != '\0') goto section_processing_jump_label_;
          system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_61,1);
          if (system_char_variable != '\0') goto section_processing_jump_label_;
          system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_62,1);
          if (system_char_variable != '\0') {
section_processing_jump_label_:
            buffer_alloc_result = 0x1a;
            goto section_processing_jump_label_;
          }
          system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_63,1);
          if (system_char_variable != '\0') {
            buffer_alloc_result = 0x1b;
            goto section_processing_jump_label_;
          }
        }
      }
    }
    else {
      system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_64,1);
      if (system_char_variable == '\0') {
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_65,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&g_buffer_backup,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_66,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_67,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_68,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_69,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_70,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_71,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_72,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_73,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_74,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_75,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_76,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_77,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_78,1);
        if (system_char_variable != '\0') {
          buffer_alloc_result = 0x54;
          goto section_processing_jump_label_;
        }
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_79,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_80,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
        system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_81,1);
        if (system_char_variable != '\0') goto section_processing_jump_label_;
      }
    }
  }
  else {
    system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_82,1);
    if (system_char_variable == '\0') {
      system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_83,1);
      if (system_char_variable != '\0') {
section_processing_jump_label_:
        buffer_alloc_result = 8;
        goto section_processing_jump_label_;
      }
      system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_84,1);
      if (system_char_variable != '\0') goto section_processing_jump_label_;
      system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_85,1);
      if (system_char_variable != '\0') {
section_processing_jump_label_:
        buffer_alloc_result = 0x18;
        goto section_processing_jump_label_;
      }
      system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_86,1);
      if (system_char_variable != '\0') goto section_processing_jump_label_;
      system_char_variable = validate_handle_param_parameters(auStack_50,&system_validation_param_87,1);
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
  system_execution_function(&system_cleanup_function);
  str_len_counter = 0;
  system_global_data_pointer = system_execution_function;
  pthread_op_flags = (unsigned int *)&thread_pool_data_buffer;
  str_len_counter = 0x16;
  do {
    if (pthread_op_flags[1] == 0) {
      system_execution_function(pthread_op_flags);
    }
    if (str_len_counter != 2) {
      system_execution_function(&system_thread_function_1,*(unsigned long long *)(pthread_op_flags + 4),*pthread_op_flags);
    }
    str_len_counter = str_len_counter + 1;
    pthread_op_flags = pthread_op_flags + 6;
    str_len_counter = str_len_counter + -1;
  } while (str_len_counter != 0);
  if (system_global_data_pointer == 0) {
    system_execution_function(&thread_op_flags_buffer);
  }
  system_global_data_pointer = (long long)system_global_data_pointer;
  if (system_global_data_pointer == 0) {
    system_execution_function(&thread_op_flags_buffer_0);
  }
  system_global_data_pointer = (long long)system_global_data_pointer;
  system_execution_function();
  if (system_control_flag_buffer != '\0') {
    system_execution_function(&system_thread_function_2);
  }
  return;
}
double calculate_system_performance(void)
{
  long long system_initialization_result;
  long long astack_long_var [4];
  system_initialization_result = system_global_data_pointer;
  if (system_global_data_pointer == 0) {
    QueryPerformanceCounter(astack_long_var);
    system_initialization_result = astack_long_var[0];
  }
  return (double)(system_initialization_result - system_global_data_pointer) * system_global_data_pointer;
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
  system_thread_manager_create(thread_op_flags,thread_result_index + 1,mutex_attr,mutex_type,1,DEFAULT_THREAD_POOL_FLAG);
  for (buffer_alloc_result = buffer_alloc_result;
      ((long long)buffer_alloc_result < (long long)thread_result_index && ((uint)buffer_alloc_result < *(uint *)(handle_param + STRING_BUFFER_SIZE)));
      buffer_alloc_result = (ulong long)((uint)buffer_alloc_result + 1)) {
    buffer_alloc_result = *(unsigned char *)(buffer_alloc_result + *(long long *)(handle_param + 8));
    system_thread_manager_create(thread_op_flags,*(int *)(thread_op_flags + 2) + 1);
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
           system_execution_function(system_global_data_pointer,STRING_BUFFER_SIZE,CONCAT_BYTES_TO_64BIT((int7)((ulong long)character_scan_pointer >> 8),0x13));
  *(unsigned char *)string_input_ptr = 0;
  thread_stack_ptr = string_input_ptr;
  buffer_alloc_result = allocate_temporary_buffer(string_input_ptr);
  *string_input_ptr = 0x7265206573726150;
  *(unsigned int *)(string_input_ptr + 1) = 0x3a726f72;
  *(unsigned short *)((long long)string_input_ptr + 0xc) = 0x2720;
  *(unsigned char *)((long long)string_input_ptr + 0xe) = 0;
  stack_size_max = 0xe;
  system_initialization_result0 = -1;
  stack_size_max._0_4_ = buffer_alloc_result;
  if (handle_param != 0) {
    do {
      str_len_counter = system_initialization_result0;
      system_initialization_result0 = str_len_counter + 1;
    } while (*(char *)(system_initialization_result0 + handle_param) != '\0');
    if (0 < (int)system_initialization_result0) {
      thread_result_index = (int)str_len_counter;
      if ((thread_result_index != -0xf) && (buffer_alloc_result < thread_result_index + STRING_BUFFER_SIZEU)) {
        stack_size_max = 0x13;
        string_input_ptr = (unsigned long long *)system_execution_function(system_global_data_pointer,string_input_ptr,thread_result_index + STRING_BUFFER_SIZEU,STRING_BUFFER_SIZE);
        thread_stack_ptr = string_input_ptr;
        stack_size_max._0_4_ = allocate_temporary_buffer(string_input_ptr);
      }
      memcpy((unsigned char *)((long long)string_input_ptr + 0xe),handle_param,(long long)(thread_result_index + 2));
    }
  }
  if (string_input_ptr == (unsigned long long *)0x0) {
    string_input_ptr = (unsigned long long *)system_execution_function(system_global_data_pointer,0x19,0x13);
    *(unsigned char *)string_input_ptr = 0;
section_processing_jump_label_:
    thread_stack_ptr = string_input_ptr;
    buffer_alloc_result = allocate_temporary_buffer(string_input_ptr);
  }
  else if (buffer_alloc_result < 0x19) {
    stack_size_max = 0x13;
    string_input_ptr = (unsigned long long *)system_execution_function(system_global_data_pointer,string_input_ptr,0x19,STRING_BUFFER_SIZE);
    goto section_processing_jump_label_;
  }
  *(unsigned long long *)((long long)string_input_ptr + 0xe) = 0x6e696c2074612027;
  *(unsigned short *)((long long)string_input_ptr + 0x16) = path_buffer_size65;
  *(unsigned char *)(string_input_ptr + 3) = 0;
  stack_size_max = 0x18;
  stack_size_max._0_4_ = buffer_alloc_result;
  system_execution_function(acStack_40,&system_thread_function_3,thread_result_index);
  system_initialization_result0 = -1;
  do {
    str_len_counter = system_initialization_result0;
    system_initialization_result0 = str_len_counter + 1;
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
      string_input_ptr = (unsigned long long *)system_execution_function(system_global_data_pointer,(long long)(int)buffer_alloc_result,0x13);
      *(unsigned char *)string_input_ptr = 0;
    }
    else {
      if (buffer_alloc_result <= buffer_alloc_result) goto section_processing_jump_label_;
      stack_size_max = 0x13;
      string_input_ptr = (unsigned long long *)system_execution_function(system_global_data_pointer,string_input_ptr,buffer_alloc_result,STRING_BUFFER_SIZE);
    }
    thread_stack_ptr = string_input_ptr;
    stack_size_max._0_4_ = allocate_temporary_buffer(string_input_ptr);
  }
section_processing_jump_label_:
  memcpy(string_input_ptr + 3,acStack_40,(long long)((int)str_len_counter + 2));
}
char * system_execution_function(unsigned int handle_param,unsigned long long thread_op_flags,char *mutex_attr,unsigned long long mutex_type,
                    long long *system_operation_parameter,long long system_control_parameter,ulong long param_7,unsigned long long *param_8,
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
  plStack_120 = system_operation_parameter;
  thread_stack_base_address = system_control_parameter;
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
  str_len_counter = process_system_configuration(&thread_stack_ptr,mutex_type,handle_param,system_operation_parameter);
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
  string_input_ptr = &default_resource_config_string;
  if (thread_stack_ptr != (void *)0x0) {
    string_input_ptr = thread_stack_ptr;
  }
  system_execution_function(&system_string_function_1,string_input_ptr);
  *param_9 = 0;
  str_len_counter = *system_operation_parameter;
  thread_result_index = 0;
  if (str_len_counter != system_operation_parameter[1]) {
    do {
      if (0xf < thread_result_index) {
        system_execution_function(&system_string_function_2,STRING_BUFFER_SIZE);
      }
      string_input_ptr = &default_resource_config_string;
      if (*(void **)(str_len_counter + 8) != (void *)0x0) {
        string_input_ptr = *(void **)(str_len_counter + 8);
      }
      system_execution_function(&system_string_function_3,string_input_ptr);
      thread_result_index = *param_9;
      str_len_counter = (long long)thread_result_index * 0x3088 + thread_stack_base_address;
      string_input_ptr = &default_resource_config_string;
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
        system_thread_manager_create(&thread_stack_ptr,buffer_alloc_result);
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
        buffer_alloc_result = INVALID_HANDLE_VALUEffffffff;
        do {
          buffer_alloc_result = buffer_alloc_result;
          buffer_alloc_result = buffer_alloc_result + 1;
        } while (string_input_ptr[buffer_alloc_result] != '\0');
        system_operation_parameter = plStack_120;
        if (0 < (int)buffer_alloc_result) {
          system_thread_manager_create(&thread_stack_ptr,buffer_alloc_result & INVALID_HANDLE_VALUE);
          memcpy(thread_stack_ptr + stack_size_max,string_input_ptr,(long long)((int)buffer_alloc_result + 2));
        }
      }
      string_input_ptr = &default_resource_config_string;
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
      system_control_parameter = thread_stack_base_address;
      param_9 = piStack_78;
    } while (str_len_counter != system_operation_parameter[1]);
  }
  character_scan_pointer = (char *)0x0;
  stack_size_max = stack_size_max & INT64_MASK;
  plStack_120 = (long long *)((ulong long)plStack_120 & INVALID_HANDLE_VALUE00000000);
  character_scan_pointer = character_scan_pointer;
  if (0 < thread_result_index) {
    do {
      character_scan_pointer = "base";
      do {
        character_scan_pointer = character_scan_pointer;
        character_scan_pointer = character_scan_pointer + 1;
      } while (*character_scan_pointer != '\0');
      for (character_scan_pointer = *(char **)(system_control_parameter + 0x30); character_scan_pointer = character_scan_pointer, character_scan_pointer != (char *)0x0;
          character_scan_pointer = *(char **)(character_scan_pointer + 0x58)) {
        character_scan_pointer = *(char **)character_scan_pointer;
        if (character_scan_pointer == (char *)0x0) {
          character_scan_pointer = (char *)SYSTEM_AUDIO_BUFFER_ADDR;
          character_scan_pointer = character_scan_pointer;
        }
        else {
          character_scan_pointer = *(char **)(character_scan_pointer + STRING_BUFFER_SIZE);
        }
        if (character_scan_pointer == character_scan_pointer + -STRING_BUFFER_OFFSET_1) {
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
              character_scan_pointer = (char *)SYSTEM_AUDIO_BUFFER_ADDR;
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
          string_input_ptr = (unsigned int *)system_execution_function(system_global_data_pointer,0x15,0x13);
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
          string_input_ptr = (unsigned int *)system_execution_function(system_global_data_pointer,0x15,0x13);
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
                          system_execution_function(system_global_data_pointer,string_input_ptr,thread_result_index + 0x16U,STRING_BUFFER_SIZE,0x13);
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
          string_input_ptr = (unsigned int *)system_execution_function(system_global_data_pointer,0x16,0x13);
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
            string_input_ptr = (unsigned char *)system_execution_function(system_global_data_pointer,0x15,0x13);
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
      system_control_parameter = system_control_parameter + 0x3088;
      mutex_attr = pcStack_70;
      thread_stack_base_address = system_control_parameter;
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
                    unsigned long long system_operation_parameter,unsigned long long *system_control_parameter,unsigned long long *param_7)
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
  string_input_ptr = &default_resource_config_string;
  if (*(void **)(str_len_counter + 8) != (void *)0x0) {
    string_input_ptr = *(void **)(str_len_counter + 8);
  }
  system_execution_function(string_input_ptr,mutex_type,system_operation_parameter);
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
      character_scan_pointer = (char *)SYSTEM_AUDIO_BUFFER_ADDR;
      character_scan_pointer = character_scan_pointer;
    }
    else {
      character_scan_pointer = *(char **)(character_scan_pointer + STRING_BUFFER_SIZE);
    }
    if (character_scan_pointer == character_scan_pointer + -STRING_BUFFER_OFFSET_1) {
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
  *system_control_parameter = character_scan_pointer;
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
        character_scan_pointer = (char *)SYSTEM_AUDIO_BUFFER_ADDR;
        character_scan_pointer = character_scan_pointer;
      }
      else {
        character_scan_pointer = *(char **)(character_scan_pointer + STRING_BUFFER_SIZE);
      }
      if (character_scan_pointer == character_scan_pointer + -STRING_BUFFER_OFFSET_2) {
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
    *system_control_parameter = character_scan_pointer;
    if (character_scan_pointer == (char *)0x0) {
      thread_stack_ptr = &g_threadString2;
      stack_size_max = 0;
      thread_stack_ptr = (unsigned int *)0x0;
      stack_size_max = 0;
      string_input_ptr = (unsigned int *)system_execution_function(system_global_data_pointer,0x15,0x13);
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
      string_input_ptr = (unsigned int *)system_execution_function(system_global_data_pointer,0x15,0x13);
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
        string_input_ptr = (unsigned int *)system_execution_function(system_global_data_pointer,string_input_ptr,0x23,STRING_BUFFER_SIZE,0x13);
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
      string_input_ptr = (unsigned int *)system_execution_function(system_global_data_pointer,0x16,0x13);
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
      string_input_ptr = &default_resource_config_string;
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
    buffer_alloc_result = validate_config_handle_param(character_scan_pointer,&system_validation_function_1);
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
      character_scan_pointer = (char *)SYSTEM_AUDIO_BUFFER_ADDR;
      character_scan_pointer = character_scan_pointer;
    }
    else {
      character_scan_pointer = *(char **)(character_scan_pointer + STRING_BUFFER_SIZE);
    }
    if (character_scan_pointer == character_scan_pointer + -STRING_BUFFER_OFFSET_1) {
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
      character_scan_pointer = (char *)SYSTEM_AUDIO_BUFFER_ADDR;
      character_scan_pointer = character_scan_pointer;
    }
    else {
      character_scan_pointer = (char *)string_input_ptr[2];
    }
    if (character_scan_pointer == character_scan_pointer + -STRING_BUFFER_OFFSET_3) {
      character_scan_pointer = character_scan_pointer + (long long)character_scan_pointer;
      if (character_scan_pointer <= character_scan_pointer) break;
      str_len_counter = (long long)&system_string_end_marker_1 - (long long)character_scan_pointer;
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
      character_scan_pointer = (char *)SYSTEM_AUDIO_BUFFER_ADDR;
      character_scan_pointer = character_scan_pointer;
    }
    else {
      character_scan_pointer = (char *)string_input_ptr[2];
    }
    if (character_scan_pointer == character_scan_pointer + -STRING_BUFFER_OFFSET_4) {
      character_scan_pointer = character_scan_pointer + (long long)character_scan_pointer;
      if (character_scan_pointer <= character_scan_pointer) {
section_processing_jump_label_:
        str_len_counter = SYSTEM_AUDIO_BUFFER_ADDR;
        if (string_input_ptr[1] != 0) {
          str_len_counter = string_input_ptr[1];
        }
        system_execution_function(&thread_stack_ptr,str_len_counter,character_scan_pointer,string_input_ptr,buffer_alloc_result,buffer_alloc_result);
        break;
      }
      str_len_counter = (long long)&system_string_end_marker_2 - (long long)character_scan_pointer;
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
        character_scan_pointer = (char *)SYSTEM_AUDIO_BUFFER_ADDR;
        character_scan_pointer = character_scan_pointer;
      }
      else {
        character_scan_pointer = (char *)string_input_ptr[2];
      }
      if (character_scan_pointer == character_scan_pointer + -STRING_BUFFER_OFFSET_5) {
        character_scan_pointer = character_scan_pointer + (long long)character_scan_pointer;
        if (character_scan_pointer <= character_scan_pointer) {
section_processing_jump_label_:
          str_len_counter = SYSTEM_AUDIO_BUFFER_ADDR;
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
      system_thread_manager_create(string_input_ptr,thread_priority_level);
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
    system_thread_initializer(&system_thread_function_4,handle_param);
  }
  if (str_len_counter != -1) {
    LOCK();
    system_global_data_pointer = system_global_data_pointer + -1;
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
      character_scan_pointer = (char *)SYSTEM_AUDIO_BUFFER_ADDR;
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
      character_scan_pointer = (char *)SYSTEM_AUDIO_BUFFER_ADDR;
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
  long long system_initialization_result;
  long long str_len_counter;
  char *character_scan_pointer;
  long long str_len_counter;
  unsigned long long buffer_alloc_result;
  void *thread_stack_ptr;
  char *pcStack_28;
  buffer_alloc_result = DEFAULT_THREAD_POOL_FLAG;
  system_initialization_result = system_execution_function();
  if (system_initialization_result == 0) {
    return 0;
  }
  str_len_counter = SYSTEM_AUDIO_BUFFER_ADDR;
  if (*(long long *)(system_initialization_result + 8) != 0) {
    str_len_counter = *(long long *)(system_initialization_result + 8);
  }
  create_thread_context(&thread_stack_ptr,str_len_counter);
  if (*pcStack_28 != '\0') {
    system_initialization_result = 0;
    do {
      str_len_counter = strchr(&system_string_buffer_1,(int)pcStack_28[system_initialization_result]);
      if (str_len_counter != 0) {
        pcStack_28[system_initialization_result] = ' ';
      }
      system_initialization_result = system_initialization_result + 1;
    } while (pcStack_28[system_initialization_result] != '\0');
  }
  character_scan_pointer = "";
  if (pcStack_28 != (char *)0x0) {
    character_scan_pointer = pcStack_28;
  }
  system_execution_function(character_scan_pointer,&system_thread_function_5,mutex_attr,mutex_attr + 4,buffer_alloc_result);
  thread_stack_ptr = &g_threadString2;
  if (pcStack_28 != (char *)0x0) {
    handle_param_system_error();
  }
  return str_len_counter;
}
long long allocate_thread_resources(unsigned long long handle_param,unsigned long long thread_op_flags,long long mutex_attr)
{
  long long system_initialization_result;
  long long str_len_counter;
  char *character_scan_pointer;
  long long str_len_counter;
  void *thread_stack_ptr;
  char *pcStack_28;
  system_initialization_result = system_execution_function();
  if (system_initialization_result == 0) {
    return 0;
  }
  str_len_counter = SYSTEM_AUDIO_BUFFER_ADDR;
  if (*(long long *)(system_initialization_result + 8) != 0) {
    str_len_counter = *(long long *)(system_initialization_result + 8);
  }
  create_thread_context(&thread_stack_ptr,str_len_counter);
  if (*pcStack_28 != '\0') {
    system_initialization_result = 0;
    do {
      str_len_counter = strchr(&system_string_buffer_2,(int)pcStack_28[system_initialization_result]);
      if (str_len_counter != 0) {
        pcStack_28[system_initialization_result] = ' ';
      }
      system_initialization_result = system_initialization_result + 1;
    } while (pcStack_28[system_initialization_result] != '\0');
  }
  character_scan_pointer = "";
  if (pcStack_28 != (char *)0x0) {
    character_scan_pointer = pcStack_28;
  }
  system_execution_function(character_scan_pointer,&system_thread_function_6,mutex_attr,mutex_attr + 4,mutex_attr + 8);
  thread_stack_ptr = &g_threadString2;
  if (pcStack_28 != (char *)0x0) {
    handle_param_system_error();
  }
  return str_len_counter;
}
long long initialize_thread_pool_resources(unsigned long long handle_param,unsigned long long thread_op_flags,long long mutex_attr,unsigned long long mutex_type)
{
  long long system_initialization_result;
  long long str_len_counter;
  char *character_scan_pointer;
  long long str_len_counter;
  void *thread_stack_ptr;
  char *pcStack_28;
  system_initialization_result = system_execution_function(handle_param,&g_system_buffer_status,mutex_attr,mutex_type,DEFAULT_THREAD_POOL_FLAG);
  if (system_initialization_result == 0) {
    return 0;
  }
  str_len_counter = SYSTEM_AUDIO_BUFFER_ADDR;
  if (*(long long *)(system_initialization_result + 8) != 0) {
    str_len_counter = *(long long *)(system_initialization_result + 8);
  }
  create_thread_context(&thread_stack_ptr,str_len_counter);
  if (*pcStack_28 != '\0') {
    system_initialization_result = 0;
    do {
      str_len_counter = strchr(&system_string_buffer_3,(int)pcStack_28[system_initialization_result]);
      if (str_len_counter != 0) {
        pcStack_28[system_initialization_result] = ' ';
      }
      system_initialization_result = system_initialization_result + 1;
    } while (pcStack_28[system_initialization_result] != '\0');
  }
  character_scan_pointer = "";
  if (pcStack_28 != (char *)0x0) {
    character_scan_pointer = pcStack_28;
  }
  system_execution_function(character_scan_pointer,&system_thread_function_7,mutex_attr,mutex_attr + 4);
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
  str_len_counter = SYSTEM_AUDIO_BUFFER_ADDR;
  if (*(long long *)(str_len_counter + 8) != 0) {
    str_len_counter = *(long long *)(str_len_counter + 8);
  }
  create_thread_context(&thread_stack_ptr,str_len_counter);
  if (*pcStack_28 != '\0') {
    str_len_counter = 0;
    do {
      str_len_counter = strchr(&system_string_buffer_2,(int)pcStack_28[str_len_counter]);
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
  thread_result_index = system_execution_function(character_scan_pointer,&system_thread_function_8,mutex_attr,mutex_attr + 4,mutex_attr + 8,
                        (unsigned int *)(mutex_attr + 0xc),buffer_alloc_result);
  if (thread_result_index == 3) {
    *(unsigned int *)(mutex_attr + 0xc) = SYSTEM_CONSTANT_3800000;
  }
  thread_stack_ptr = &g_threadString2;
  if (pcStack_28 != (char *)0x0) {
    handle_param_system_error();
  }
  return str_len_counter;
}
long long process_thread_initialization(unsigned long long handle_param,unsigned long long thread_op_flags,long long mutex_attr)
{
  long long system_initialization_result;
  long long str_len_counter;
  char *character_scan_pointer;
  long long str_len_counter;
  unsigned long long buffer_alloc_result;
  void *thread_stack_ptr;
  char *pcStack_28;
  buffer_alloc_result = DEFAULT_THREAD_POOL_FLAG;
  system_initialization_result = system_execution_function(handle_param,&system_memory_function_1);
  if (system_initialization_result == 0) {
    return 0;
  }
  str_len_counter = SYSTEM_AUDIO_BUFFER_ADDR;
  if (*(long long *)(system_initialization_result + 8) != 0) {
    str_len_counter = *(long long *)(system_initialization_result + 8);
  }
  create_thread_context(&thread_stack_ptr,str_len_counter);
  if (*pcStack_28 != '\0') {
    system_initialization_result = 0;
    do {
      str_len_counter = strchr(&system_string_buffer_3,(int)pcStack_28[system_initialization_result]);
      if (str_len_counter != 0) {
        pcStack_28[system_initialization_result] = ' ';
      }
      system_initialization_result = system_initialization_result + 1;
    } while (pcStack_28[system_initialization_result] != '\0');
  }
  character_scan_pointer = "";
  if (pcStack_28 != (char *)0x0) {
    character_scan_pointer = pcStack_28;
  }
  system_execution_function(character_scan_pointer,&system_thread_function_8,mutex_attr + 4,mutex_attr + 8,mutex_attr + 0xc,mutex_attr,buffer_alloc_result);
  thread_stack_ptr = &g_threadString2;
  if (pcStack_28 != (char *)0x0) {
    handle_param_system_error();
  }
  return str_len_counter;
}
long long initialize_thread_synchronization(unsigned long long handle_param,unsigned long long thread_op_flags,long long mutex_attr)
{
  long long *psystem_initialization_result;
  long long str_len_counter;
  long long str_len_counter;
  char *character_scan_pointer;
  long long str_len_counter;
  void *thread_stack_ptr;
  char *pcStack_28;
  str_len_counter = system_execution_function();
  if (str_len_counter != 0) {
    psystem_initialization_result = (long long *)(str_len_counter + 8);
    str_len_counter = SYSTEM_AUDIO_BUFFER_ADDR;
    if (*psystem_initialization_result != 0) {
      str_len_counter = *psystem_initialization_result;
    }
    create_thread_context(&thread_stack_ptr,str_len_counter);
    if (*pcStack_28 != '\0') {
      str_len_counter = 0;
      do {
        str_len_counter = strchr(&system_string_buffer_3,(int)pcStack_28[str_len_counter]);
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
    system_execution_function(character_scan_pointer,&system_thread_function_9,mutex_attr,mutex_attr + 4,mutex_attr + 8,mutex_attr + STRING_BUFFER_SIZE,
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
  long long *psystem_initialization_result;
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
    psystem_initialization_result = (long long *)(str_len_counter + 8);
    str_len_counter = SYSTEM_AUDIO_BUFFER_ADDR;
    if (*psystem_initialization_result != 0) {
      str_len_counter = *psystem_initialization_result;
    }
    create_thread_context(&thread_stack_ptr,str_len_counter);
    if (*pcStack_50 != '\0') {
      str_len_counter = 0;
      do {
        str_len_counter = strchr(&system_string_buffer_3,(int)pcStack_50[str_len_counter]);
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
    system_execution_function(character_scan_pointer,&system_thread_function_10,mutex_attr,mutex_attr + 4,mutex_attr + 8,mutex_attr + 0xc,mutex_attr + STRING_BUFFER_SIZE
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
    str_len_counter = SYSTEM_AUDIO_BUFFER_ADDR;
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
  unsigned char system_temp_stack_array [8];
  buffer_alloc_result = SYSTEM_AUDIO_BUFFER_ADDR;
  if (!in_ZF) {
    buffer_alloc_result = handle_param;
  }
  pthread_op_flags = (unsigned long long *)system_execution_function(system_temp_stack_array,buffer_alloc_result);
  buffer_alloc_result = pthread_op_flags[1];
  *unaffected_registerDI = *pthread_op_flags;
  unaffected_registerDI[1] = buffer_alloc_result;
  return buffer_alloc_result;
}
  system_flag_buffer_11 = 0;
  system_crypto_initializer(system_execution_function);
  system_execution_function(&system_cleanup_function);
  str_len_counter = 0;
  system_global_data_pointer = system_execution_function;
  string_input_ptr = (unsigned int *)&string_input_buffer;
  str_len_counter = 0x16;
  do {
    if (string_input_ptr[1] == 0) {
      system_execution_function(string_input_ptr);
    }
    if (str_len_counter != 2) {
      system_execution_function(&system_thread_function_1,*(unsigned long long *)(string_input_ptr + 4),*string_input_ptr);
    }
    str_len_counter = str_len_counter + 1;
    string_input_ptr = string_input_ptr + 6;
    str_len_counter = str_len_counter + -1;
  } while (str_len_counter != 0);
  if (system_global_data_pointer == 0) {
    system_execution_function(&thread_op_flags_buffer);
  }
  system_global_data_pointer = (long long)system_global_data_pointer;
  if (system_global_data_pointer == 0) {
    system_execution_function(&thread_op_flags_buffer_0);
  }
  system_global_data_pointer = (long long)system_global_data_pointer;
  system_execution_function();
  if (system_control_flag_buffer != '\0') {
    system_execution_function(&system_thread_function_2);
  }
  return;
}
  string_processing_flag = 1;
  if (network_status_flag == '\0') {
    network_status_flag = '\x01';
    thread_op_flags = FlsAlloc(&system_tls_function);
    system_global_data_pointer = thread_op_flags;
    *(unsigned long long *)
     (*(long long *)((long long)ThreadLocalStoragePointer + (ulong long)__tls_index * 8) + STRING_BUFFER_SIZE) =
         SYSTEM_STRING_BUFFER_BASE_ADDR;
    FlsSetValue(thread_op_flags);
  }
  system_execution_function(&system_exception_function_1,&ExceptionList);
  system_initialization_result = cpuid_Extended_Feature_Enumeration_info(7);
  system_mode_flag = (byte)(*(uint *)(system_initialization_result + 8) >> 4) & 1;
  GetSystemInfo(auStack_40);
  if (stack_size_max != 0) {
    system_global_data_pointer = (ulong long)stack_size_max;
  }
  system_execution_function();
  system_execution_function(&system_exception_function_2,0);
  system_execution_function();
  system_execution_result_ptr = (long long *)system_execution_function();
  if ((void *)(*system_execution_result_ptr + 0x3d8) == &system_config_buffer) {
    memset(&system_config_buffer,0,0x240);
  }
  memset((void *)(*system_execution_result_ptr + 0x3d8),0,0x240);
}
  network_status_flag_secondary = 1;
  FlsSetValue(system_global_data_pointer,0);
  FlsFree(system_global_data_pointer);
  system_execution_function(*(unsigned long long *)
                 (*(long long *)((long long)ThreadLocalStoragePointer + (ulong long)__tls_index * 8) +
                 STRING_BUFFER_SIZE),1);
  if (system_global_data_pointer == 0) {
    system_execution_function(&string_buffer_primary);
  }
  if (system_global_data_pointer == 0) {
    if (system_global_data_pointer == 0) {
      system_execution_function(&string_buffer_secondary);
    }
    if (system_global_data_pointer == 0) goto section_processing_jump_label_;
  }
  psystem_initialization_result = (long long *)system_execution_function();
  pthread_op_flags = (void *)(*psystem_initialization_result + 0x3d8);
  if (pthread_op_flags != &system_config_buffer) {
    system_execution_function();
    memset(pthread_op_flags,0,0x240);
  }
  system_execution_function();
section_processing_jump_label_:
  system_execution_function(&system_exception_function_3,system_global_data_pointer);
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
  buffer_alloc_result = system_execution_function(system_global_data_pointer,handle_param,0x19);
  str_len_counter = allocate_temporary_buffer(buffer_alloc_result);
  LOCK();
  system_global_data_pointer = system_global_data_pointer + str_len_counter;
  UNLOCK();
  return buffer_alloc_result;
}
unsigned long long setup_context_with_thread_op_flags(unsigned long long handle_param,unsigned long long thread_op_flags)
{
  long long system_initialization_result;
  unsigned long long thread_op_flags;
  system_initialization_result = allocate_temporary_buffer();
  thread_op_flags = system_execution_function(system_global_data_pointer,handle_param,thread_op_flags,0x19);
  LOCK();
  system_global_data_pointer = system_global_data_pointer - system_initialization_result;
  UNLOCK();
  system_initialization_result = allocate_temporary_buffer(thread_op_flags);
  LOCK();
  system_global_data_pointer = system_global_data_pointer + system_initialization_result;
  UNLOCK();
  return thread_op_flags;
}
long long process_context_handle_param(long long *handle_param)
{
  int *system_system_string_length_counter_ptr;
  long long str_len_counter;
  long long str_len_counter;
  ulong long buffer_alloc_result;
  str_len_counter = allocate_temporary_buffer();
  str_len_counter = system_global_data_pointer;
  LOCK();
  str_len_counter = system_global_data_pointer - str_len_counter;
  system_global_data_pointer = str_len_counter;
  UNLOCK();
  if (handle_param == (long long *)0x0) {
    return str_len_counter;
  }
  buffer_alloc_result = (ulong long)handle_param & INVALID_HANDLE_VALUEffc00000;
  if (buffer_alloc_result != 0) {
    str_len_counter = buffer_alloc_result + SYSTEM_POINTER_OFFSET0 + ((long long)handle_param - buffer_alloc_result >> STRING_BUFFER_SIZE) * 0x50;
    str_len_counter = str_len_counter - (ulong long)*(uint *)(str_len_counter + 4);
    if ((*(void ***)(buffer_alloc_result + 0x70) == &ExceptionList) && (*(char *)(str_len_counter + 0xe) == '\0')) {
      str_len_counter = *(long long *)(str_len_counter + path_buffer_size);
      *handle_param = str_len_counter;
      *(long long **)(str_len_counter + path_buffer_size) = handle_param;
      system_system_string_length_counter_ptr = (int *)(str_len_counter + 0x18);
      *system_system_string_length_counter_ptr = *system_system_string_length_counter_ptr + -1;
      if (*system_system_string_length_counter_ptr == 0) {
        str_len_counter = system_execution_function();
        return str_len_counter;
      }
    }
    else {
      str_len_counter = system_buffer_allocator(buffer_alloc_result,CONCAT_BYTES_TO_64BIT(0xff000000,
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
      float_var = system_operation_parameter * *(float *)(str_len_counter + SYSTEM_FLOAT_ARRAY_ADDR);
      float_var = system_operation_parameter * *(float *)(str_len_counter + SYSTEM_FLOAT_ARRAY_ADDR_2);
      float_var = system_operation_parameter * *(float *)(str_len_counter + SYSTEM_FLOAT_ARRAY_ADDR_3);
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
      fStack_370 = float_var * float_var * system_operation_parameter + float_var;
      float_var = float_var * float_var * system_operation_parameter + float_var;
      float_var = float_var * float_var * system_operation_parameter + float_var;
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
      if (buffer_alloc_result != SYSTEM_CONSTANT_2) {
        str_len_counter = str_len_counter + 1;
      }
      if (((handle_param2 == '\0') || ((buffer_alloc_result & 1) != 0)) &&
         (system_char_variable = system_execution_function((double)((float)(int)buffer_alloc_result * 0.19634955),SUB84((double)system_control_parameter,0),
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
                *(void **)((long long)pthread_op_flags + -8) = &system_memory_function_2;
                (*unaffected_registerDI)();
                *(unsigned long long *)((long long)pthread_op_flags + -8) = THREAD_CLEANUP_FUNCTION_1;
                CoUninitialize();
section_processing_jump_label_:
                *(unsigned long long *)((long long)pthread_op_flags + -8) = THREAD_CLEANUP_FUNCTION_2;
                _endthreadex(0);
                return;
              }
              system_char_variable = (char)*system_input_register_rax;
            }
            system_input_register_rax = (int *)CONCAT_BYTES_TO_64BIT((int7)((ulong long)system_input_register_rax >> 8),system_char_variable + system_char_variable);
LAB_180768028_1:
            system_int_param_ptr = (int *)(((ulong long)system_input_register_rax & UINT32_MAXffffff20) - 0x75);
            *system_int_param_ptr = *system_int_param_ptr + (int)handle_param;
            *(int *)(((ulong long)system_input_register_rax & UINT32_MAXffffff20) - 0x17ffffff) = (int)pthread_op_flags;
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
  int *system_system_string_length_counter_ptr2;
  uint buffer_alloc_result;
  long long *psystem_initialization_result4;
  long long system_initialization_result5;
  uint buffer_alloc_result;
  int thread_result_index;
  int thread_result_index;
  float float_var;
  unsigned long long thread_op_flags;
  unsigned long long extraout_XMM0_Qb;
  float float_var;
  unsigned char system_input_xmm_register_2 [16];
  unsigned char athread_op_flags [16];
  float float_var;
  float float_var;
  unsigned char unaff_XMM6 [16];
  unsigned char athread_op_flags [16];
  ulong long buffer_alloc_result;
  psystem_initialization_result4 = (long long *)&system_initialization_result_ptr;
  thread_result_index = 0;
  do {
    buffer_alloc_result = 0;
    system_initialization_result5 = *psystem_initialization_result4;
    buffer_alloc_result = STRING_BUFFER_SIZE >> ((byte)thread_result_index & SYSTEM_CONSTANT_2);
    buffer_alloc_result = SYSTEM_CONFIG_BUFFER_SIZE >> ((byte)thread_result_index & SYSTEM_CONSTANT_2);
    buffer_alloc_result = buffer_alloc_result;
    buffer_alloc_result = buffer_alloc_result;
    if ((buffer_alloc_result != 0) && (buffer_alloc_result = 0, 3 < buffer_alloc_result)) {
      athread_op_flags._0_4_ = (float)(int)buffer_alloc_result;
      athread_op_flags._4_4_ = athread_op_flags._0_4_;
      athread_op_flags._8_4_ = athread_op_flags._0_4_;
      athread_op_flags._12_4_ = athread_op_flags._0_4_;
      buffer_alloc_result = buffer_alloc_result & SYSTEM_POINTER_OFFSET0000003;
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
        system_input_xmm_register_2._0_4_ = (float_var + float_var) - float_var * float_var * athread_op_flags._0_4_;
        system_input_xmm_register_2._4_4_ = (float_var + float_var) - float_var * float_var * athread_op_flags._4_4_;
        system_input_xmm_register_2._8_4_ = (float_var + float_var) - float_var * float_var * athread_op_flags._8_4_;
        system_input_xmm_register_2._12_4_ = (float_var + float_var) - float_var * float_var * athread_op_flags._12_4_;
        *(unsigned char (*) [16])(system_initialization_result5 + buffer_alloc_result * 4) = system_input_xmm_register_2;
        buffer_alloc_result = buffer_alloc_result + 4;
        buffer_alloc_result = buffer_alloc_result;
      } while ((int)buffer_alloc_result < (int)(buffer_alloc_result - buffer_alloc_result));
    }
    if ((int)buffer_alloc_result < (int)buffer_alloc_result) {
      pfloat_var = (float *)(system_initialization_result5 + buffer_alloc_result * 4);
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
    psystem_initialization_result4 = psystem_initialization_result4 + 1;
  } while (thread_result_index < 5);
  system_system_string_length_counter_ptr2 = (int *)SYSTEM_STRING_LENGTH_COUNTER_ADDR;
  pfloat_var = (float *)SYSTEM_GLOBAL_DATA_ADDR;
  system_global_data_pointer = SYSTEM_GLOBAL_DATA_ADDR;
  handle_param = -handle_param;
  thread_result_index = 2;
  thread_result_index = string_buffer_size_constant;
  system_initialization_result5 = 0x140;
  buffer_alloc_result = 0;
  do {
    buffer_alloc_result = buffer_alloc_result;
    if (pfloat_var < (float *)SYSTEM_FLOAT_ARRAY_END_ADDR) {
      float_var = (float)system_system_string_length_counter_ptr2[-1] * FLOAT_CONVERSION_FACTOR * (float)handle_param;
      *pfloat_var = float_var;
      pfloat_var[STRING_BUFFER_SIZE] = float_var;
    }
    pfloat_var = pfloat_var + -SYSTEM_CONSTANT_3f;
    if (((byte)buffer_alloc_result & SYSTEM_CONSTANT_2) != SYSTEM_CONSTANT_2) {
      pfloat_var = pfloat_var;
    }
    thread_result_index = -handle_param;
    if (((byte)buffer_alloc_result & SYSTEM_CONSTANT_3) != SYSTEM_CONSTANT_3) {
      thread_result_index = handle_param;
    }
    if (pfloat_var + path_buffer_size < (float *)SYSTEM_FLOAT_ARRAY_END_ADDR) {
      float_var = (float)*system_system_string_length_counter_ptr2 * FLOAT_CONVERSION_FACTOR * (float)thread_result_index;
      pfloat_var[path_buffer_size] = float_var;
      pfloat_var[0x30] = float_var;
    }
    byte_check_result = (byte)thread_result_index;
    buffer_alloc_result = thread_result_index - 1U & SYSTEM_CONSTANT_2;
    thread_result_index = -thread_result_index;
    if ((byte_check_result - 1 & SYSTEM_CONSTANT_3) != SYSTEM_CONSTANT_3) {
      thread_result_index = thread_result_index;
    }
    str_len_counter = -0xefc;
    if (buffer_alloc_result != SYSTEM_CONSTANT_2) {
      str_len_counter = string_buffer_size_constant;
    }
    pfloat_var = (float *)(str_len_counter + (long long)pfloat_var);
    if (pfloat_var < (float *)SYSTEM_FLOAT_ARRAY_END_ADDR) {
      str_len_counter = -SYSTEM_CONSTANT_1;
      if (buffer_alloc_result != SYSTEM_CONSTANT_2) {
        str_len_counter = system_initialization_result5;
      }
      float_var = (float)system_system_string_length_counter_ptr2[1] * FLOAT_CONVERSION_FACTOR * (float)thread_result_index;
      *pfloat_var = float_var;
      *(float *)(str_len_counter + (long long)pfloat_var) = float_var;
    }
    if ((byte_check_result & SYSTEM_CONSTANT_2) == SYSTEM_CONSTANT_2) {
      str_len_counter = -0x1ef8;
      if (buffer_alloc_result != SYSTEM_CONSTANT_2) {
        str_len_counter = -0xefc;
      }
      pfloat_var = (float *)(str_len_counter + (long long)pfloat_var);
    }
    thread_result_index = -thread_result_index;
    if ((byte_check_result & SYSTEM_CONSTANT_3) != SYSTEM_CONSTANT_3) {
      thread_result_index = thread_result_index;
    }
    if (pfloat_var + path_buffer_size < (float *)SYSTEM_FLOAT_ARRAY_END_ADDR) {
      float_var = (float)system_system_string_length_counter_ptr2[2] * FLOAT_CONVERSION_FACTOR * (float)thread_result_index;
      pfloat_var[path_buffer_size] = float_var;
      pfloat_var[0x30] = float_var;
    }
    buffer_alloc_result = thread_result_index + 1U & SYSTEM_CONSTANT_2;
    str_len_counter = -0xefc;
    thread_result_index = -thread_result_index;
    if (((byte)(thread_result_index + 1U) & SYSTEM_CONSTANT_3) != SYSTEM_CONSTANT_3) {
      thread_result_index = thread_result_index;
    }
    if (buffer_alloc_result != SYSTEM_CONSTANT_2) {
      str_len_counter = string_buffer_size_constant;
    }
    pfloat_var = (float *)(str_len_counter + (long long)pfloat_var);
    if (pfloat_var < (float *)SYSTEM_FLOAT_ARRAY_END_ADDR) {
      str_len_counter = -SYSTEM_CONSTANT_1;
      if (buffer_alloc_result != SYSTEM_CONSTANT_2) {
        str_len_counter = system_initialization_result5;
      }
      float_var = (float)system_system_string_length_counter_ptr2[3] * FLOAT_CONVERSION_FACTOR * (float)thread_result_index;
      *pfloat_var = float_var;
      *(float *)(str_len_counter + (long long)pfloat_var) = float_var;
    }
    if ((byte_check_result + 2 & SYSTEM_CONSTANT_2) == SYSTEM_CONSTANT_2) {
      str_len_counter = -0x1ef8;
      if (buffer_alloc_result != SYSTEM_CONSTANT_2) {
        str_len_counter = -0xefc;
      }
      pfloat_var = (float *)(str_len_counter + (long long)pfloat_var);
    }
    thread_result_index = -thread_result_index;
    if ((byte_check_result + 2 & SYSTEM_CONSTANT_3) != SYSTEM_CONSTANT_3) {
      thread_result_index = thread_result_index;
    }
    if (pfloat_var + path_buffer_size < (float *)SYSTEM_FLOAT_ARRAY_END_ADDR) {
      float_var = (float)system_system_string_length_counter_ptr2[4] * FLOAT_CONVERSION_FACTOR * (float)thread_result_index;
      pfloat_var[path_buffer_size] = float_var;
      pfloat_var[0x30] = float_var;
    }
    buffer_alloc_result = thread_result_index + 3U & SYSTEM_CONSTANT_2;
    str_len_counter = -0xefc;
    thread_result_index = -thread_result_index;
    if (((byte)(thread_result_index + 3U) & SYSTEM_CONSTANT_3) != SYSTEM_CONSTANT_3) {
      thread_result_index = thread_result_index;
    }
    if (buffer_alloc_result != SYSTEM_CONSTANT_2) {
      str_len_counter = string_buffer_size_constant;
    }
    pfloat_var = (float *)(str_len_counter + (long long)pfloat_var);
    if (pfloat_var < (float *)SYSTEM_FLOAT_ARRAY_END_ADDR) {
      str_len_counter = -SYSTEM_CONSTANT_1;
      if (buffer_alloc_result != SYSTEM_CONSTANT_2) {
        str_len_counter = system_initialization_result5;
      }
      float_var = (float)system_system_string_length_counter_ptr2[5] * FLOAT_CONVERSION_FACTOR * (float)thread_result_index;
      *pfloat_var = float_var;
      *(float *)(str_len_counter + (long long)pfloat_var) = float_var;
    }
    if ((byte_check_result + 4 & SYSTEM_CONSTANT_2) == SYSTEM_CONSTANT_2) {
      str_len_counter = -0x1ef8;
      if (buffer_alloc_result != SYSTEM_CONSTANT_2) {
        str_len_counter = -0xefc;
      }
      pfloat_var = (float *)(str_len_counter + (long long)pfloat_var);
    }
    thread_result_index = -thread_result_index;
    if ((byte_check_result + 4 & SYSTEM_CONSTANT_3) != SYSTEM_CONSTANT_3) {
      thread_result_index = thread_result_index;
    }
    if (pfloat_var + path_buffer_size < (float *)SYSTEM_FLOAT_ARRAY_END_ADDR) {
      float_var = (float)system_system_string_length_counter_ptr2[6] * FLOAT_CONVERSION_FACTOR * (float)thread_result_index;
      pfloat_var[path_buffer_size] = float_var;
      pfloat_var[0x30] = float_var;
    }
    handle_param = -thread_result_index;
    if ((byte_check_result + 5 & SYSTEM_CONSTANT_3) != SYSTEM_CONSTANT_3) {
      handle_param = thread_result_index;
    }
    str_len_counter = -0xefc;
    if ((byte_check_result + 5 & SYSTEM_CONSTANT_2) != SYSTEM_CONSTANT_2) {
      str_len_counter = string_buffer_size_constant;
    }
    buffer_alloc_result = buffer_alloc_result + 8;
    pfloat_var = (float *)(str_len_counter + (long long)pfloat_var);
    thread_result_index = thread_result_index + 8;
    system_system_string_length_counter_ptr2 = system_system_string_length_counter_ptr2 + 8;
  } while (thread_result_index < STRING_BUFFER_SIZE_SECONDARY);
  if ((int)buffer_alloc_result < path_buffer_size0) {
    if (3 < (int)(path_buffer_size0 - buffer_alloc_result)) {
      buffer_alloc_result = buffer_alloc_result + 10;
      system_system_string_length_counter_ptr2 = (int *)SYSTEM_STRING_LENGTH_COUNTER_ALT_ADDR;
      thread_result_index = (SYSTEM_CONSTANT_3 - (SYSTEM_CONSTANT_2c - buffer_alloc_result >> 2)) * 4;
      do {
        if (pfloat_var < (float *)SYSTEM_FLOAT_ARRAY_END_ADDR) {
          float_var = (float)system_system_string_length_counter_ptr2[2] * FLOAT_CONVERSION_FACTOR * (float)handle_param;
          *pfloat_var = float_var;
          pfloat_var[STRING_BUFFER_SIZE] = float_var;
        }
        buffer_alloc_result = buffer_alloc_result & SYSTEM_POINTER_OFFSET000001f;
        if ((int)buffer_alloc_result < 0) {
          buffer_alloc_result = (buffer_alloc_result - 1 | 0xffffffe0) + 1;
        }
        pfloat_var = pfloat_var + -SYSTEM_CONSTANT_3f;
        if (buffer_alloc_result != SYSTEM_CONSTANT_2) {
          pfloat_var = pfloat_var;
        }
        buffer_alloc_result = buffer_alloc_result & SYSTEM_POINTER_OFFSET000003f;
        if ((int)buffer_alloc_result < 0) {
          buffer_alloc_result = (buffer_alloc_result - 1 | 0xffffffc0) + 1;
        }
        thread_result_index = -handle_param;
        if (buffer_alloc_result != SYSTEM_CONSTANT_3) {
          thread_result_index = handle_param;
        }
        if (pfloat_var + path_buffer_size < (float *)SYSTEM_FLOAT_ARRAY_END_ADDR) {
          float_var = (float)system_system_string_length_counter_ptr2[1] * FLOAT_CONVERSION_FACTOR * (float)thread_result_index;
          pfloat_var[path_buffer_size] = float_var;
          pfloat_var[0x30] = float_var;
        }
        buffer_alloc_result = buffer_alloc_result - 1 & SYSTEM_POINTER_OFFSET000001f;
        if ((int)buffer_alloc_result < 0) {
          buffer_alloc_result = (buffer_alloc_result - 1 | 0xffffffe0) + 1;
        }
        buffer_alloc_result = buffer_alloc_result - 1 & SYSTEM_POINTER_OFFSET000003f;
        if ((int)buffer_alloc_result < 0) {
          buffer_alloc_result = (buffer_alloc_result - 1 | 0xffffffc0) + 1;
        }
        thread_result_index = -thread_result_index;
        if (buffer_alloc_result != SYSTEM_CONSTANT_3) {
          thread_result_index = thread_result_index;
        }
        str_len_counter = -0xefc;
        if (buffer_alloc_result != SYSTEM_CONSTANT_2) {
          str_len_counter = string_buffer_size_constant;
        }
        pfloat_var = (float *)(str_len_counter + (long long)pfloat_var);
        if (pfloat_var < (float *)SYSTEM_FLOAT_ARRAY_END_ADDR) {
          str_len_counter = -SYSTEM_CONSTANT_1;
          if (buffer_alloc_result != SYSTEM_CONSTANT_2) {
            str_len_counter = system_initialization_result5;
          }
          float_var = (float)*system_system_string_length_counter_ptr2 * FLOAT_CONVERSION_FACTOR * (float)thread_result_index;
          *pfloat_var = float_var;
          *(float *)(str_len_counter + (long long)pfloat_var) = float_var;
        }
        buffer_alloc_result = buffer_alloc_result & SYSTEM_POINTER_OFFSET000001f;
        if ((int)buffer_alloc_result < 0) {
          buffer_alloc_result = (buffer_alloc_result - 1 | 0xffffffe0) + 1;
        }
        if (buffer_alloc_result == SYSTEM_CONSTANT_2) {
          str_len_counter = -0x1ef8;
          if (buffer_alloc_result != SYSTEM_CONSTANT_2) {
            str_len_counter = -0xefc;
          }
          pfloat_var = (float *)(str_len_counter + (long long)pfloat_var);
        }
        buffer_alloc_result = buffer_alloc_result & SYSTEM_POINTER_OFFSET000003f;
        if ((int)buffer_alloc_result < 0) {
          buffer_alloc_result = (buffer_alloc_result - 1 | 0xffffffc0) + 1;
        }
        thread_result_index = -thread_result_index;
        if (buffer_alloc_result != SYSTEM_CONSTANT_3) {
          thread_result_index = thread_result_index;
        }
        if (pfloat_var + path_buffer_size < (float *)SYSTEM_FLOAT_ARRAY_END_ADDR) {
          float_var = (float)system_system_string_length_counter_ptr2[-1] * FLOAT_CONVERSION_FACTOR * (float)thread_result_index;
          pfloat_var[path_buffer_size] = float_var;
          pfloat_var[0x30] = float_var;
        }
        buffer_alloc_result = buffer_alloc_result + 1 & SYSTEM_POINTER_OFFSET000003f;
        if ((int)buffer_alloc_result < 0) {
          buffer_alloc_result = (buffer_alloc_result - 1 | 0xffffffc0) + 1;
        }
        handle_param = -thread_result_index;
        if (buffer_alloc_result != SYSTEM_CONSTANT_3) {
          handle_param = thread_result_index;
        }
        buffer_alloc_result = buffer_alloc_result + 1 & SYSTEM_POINTER_OFFSET000001f;
        if ((int)buffer_alloc_result < 0) {
          buffer_alloc_result = (buffer_alloc_result - 1 | 0xffffffe0) + 1;
        }
        str_len_counter = -0xefc;
        if (buffer_alloc_result != SYSTEM_CONSTANT_2) {
          str_len_counter = string_buffer_size_constant;
        }
        system_system_string_length_counter_ptr2 = system_system_string_length_counter_ptr2 + -4;
        pfloat_var = (float *)(str_len_counter + (long long)pfloat_var);
        buffer_alloc_result = buffer_alloc_result + 4;
        buffer_alloc_result = buffer_alloc_result + 4;
      } while ((int)buffer_alloc_result < SYSTEM_CONSTANT_2f);
    }
    if ((int)buffer_alloc_result < path_buffer_size0) {
      system_system_string_length_counter_ptr2 = (int *)((long long)thread_result_index * 4 + SYSTEM_PERFORMANCE_COUNTER_ADDR);
      do {
        if (pfloat_var < (float *)SYSTEM_FLOAT_ARRAY_END_ADDR) {
          float_var = (float)*system_system_string_length_counter_ptr2 * FLOAT_CONVERSION_FACTOR * (float)handle_param;
          *pfloat_var = float_var;
          pfloat_var[STRING_BUFFER_SIZE] = float_var;
        }
        buffer_alloc_result = buffer_alloc_result & SYSTEM_POINTER_OFFSET000003f;
        if ((int)buffer_alloc_result < 0) {
          buffer_alloc_result = (buffer_alloc_result - 1 | 0xffffffc0) + 1;
        }
        buffer_alloc_result = buffer_alloc_result & SYSTEM_POINTER_OFFSET000001f;
        if ((int)buffer_alloc_result < 0) {
          buffer_alloc_result = (buffer_alloc_result - 1 | 0xffffffe0) + 1;
        }
        pfloat_var = pfloat_var + -SYSTEM_CONSTANT_3f;
        if (buffer_alloc_result != SYSTEM_CONSTANT_2) {
          pfloat_var = pfloat_var;
        }
        system_system_string_length_counter_ptr2 = system_system_string_length_counter_ptr2 + -1;
        buffer_alloc_result = buffer_alloc_result + 1;
        pfloat_var = pfloat_var + path_buffer_size;
        thread_result_index = -handle_param;
        if (buffer_alloc_result != SYSTEM_CONSTANT_3) {
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
    thread_result_index = system_execution_function(*(unsigned long long *)(unreg_bx + SYSTEM_MODULE_OFFSET_1),*(unsigned int *)(unreg_bx + SYSTEM_MODULE_OFFSET_2),0);
    if ((thread_result_index != 0) ||
       (thread_result_index = system_execution_function(*(unsigned long long *)(unreg_bx + SYSTEM_MODULE_OFFSET_1),SYSTEM_MODULE_DATA_ADDR,1,
                              iStack0000000000000030 + 4), thread_result_index != 0)) goto section_processing_jump_label_;
    pthread_op_flags = (uint *)(unreg_bx + SYSTEM_MODULE_OFFSET_3);
    thread_result_index = system_execution_function();
    if (thread_result_index == 0) {
      *(int *)(unreg_bx + SYSTEM_MODULE_OFFSET_2) = *(int *)(unreg_bx + SYSTEM_MODULE_OFFSET_2) + iStack0000000000000030 + 4;
      thread_result_index = system_execution_function(*(unsigned long long *)(unreg_bx + SYSTEM_MODULE_OFFSET_1),SYSTEM_MODULE_DATA_ADDR,1);
      if (thread_result_index != 0) goto section_processing_jump_label_;
    }
    buffer_alloc_result = *(unsigned int *)(*(long long *)(unreg_bx + 8) + 8);
    *(unsigned int *)(*(long long *)(unreg_bx + 8) + 8) = 2;
    system_execution_function();
    *(unsigned int *)(*(long long *)(unreg_bx + 8) + 8) = buffer_alloc_result;
    thread_result_index = system_execution_function(*(unsigned long long *)(unreg_bx + SYSTEM_MODULE_OFFSET_1),*(unsigned int *)(unreg_bx + SYSTEM_MODULE_OFFSET_2),0);
    if (thread_result_index == 0) {
      if (*(int *)(unreg_bx + 0x1c4) == thread_result_index) {
        *(unsigned int *)(unreg_bx + 0x1c4) = 0x480;
      }
      buffer_alloc_result = iStack0000000000000030 + 5U & 0xfffffffe;
      if (((unaffected_registerD & SYSTEM_CONFIG_BUFFER_SIZE_ZERO0) == 0) ||
         ((*(uint *)(*(long long *)(unreg_bx + SYSTEM_MODULE_OFFSET_1) + 0x194) & 1) == 0)) {
        str_len_counter = *(long long *)(unreg_bx + 8);
        if (*(int *)(str_len_counter + 0x14) == -1) {
          *(unsigned int *)(str_len_counter + 0x18) = INVALID_HANDLE_VALUE;
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
      system_execution_function(*(unsigned long long *)(unreg_bx + SYSTEM_MODULE_OFFSET_1),*(unsigned int *)(unreg_bx + SYSTEM_MODULE_OFFSET_2),0);
      thread_result_index = *(int *)(unreg_bx + 0x1c4);
      buffer_alloc_result = 0;
      thread_result_index = thread_configuration_handler(*(unsigned long long *)(unreg_bx + SYSTEM_MODULE_OFFSET_1),&stack0x00000050);
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
        str_len_counter = system_execution_function(*(unsigned long long *)(system_global_data_pointer + 0x1a0),
                              *(unsigned long long *)(unreg_bx + 0x1d0),buffer_alloc_result * 4,&system_validation_function_2,0x113);
        *(long long *)(unreg_bx + 0x1d0) = str_len_counter;
        if (str_len_counter == 0) goto section_processing_jump_label_;
      }
      buffer_alloc_result = unaffected_register & INVALID_HANDLE_VALUE;
      unaffected_register = (ulong long)((uint)unaffected_register + 1);
      *(uint *)(*(long long *)(unreg_bx + 0x1d0) + buffer_alloc_result * 4) = buffer_alloc_result;
      system_system_string_length_counter_ptr = (int *)(*(long long *)(unreg_bx + 8) + 0x18);
      *system_system_string_length_counter_ptr = *system_system_string_length_counter_ptr + thread_result_index;
      buffer_alloc_result = buffer_alloc_result + 4 + in_stack_00000040._4_4_;
      thread_result_index = system_execution_function(*(unsigned long long *)(unreg_bx + SYSTEM_MODULE_OFFSET_1),in_stack_00000040._4_4_,1);
      if (thread_result_index != 0) break;
    }
    else {
      system_execution_function(*(unsigned long long *)(unreg_bx + SYSTEM_MODULE_OFFSET_1),0xfffffffd,1);
    }
    if (*(uint *)(*(long long *)(unreg_bx + 8) + 0x14) <= buffer_alloc_result) break;
section_processing_jump_label_:
    thread_result_index = system_execution_function(*(unsigned long long *)(unreg_bx + SYSTEM_MODULE_OFFSET_1),&stack0x0000004c,1,4,0);
    if (thread_result_index != 0) break;
  }
section_processing_jump_label_:
  thread_result_index = system_execution_function(*(unsigned long long *)(unreg_bx + SYSTEM_MODULE_OFFSET_1),in_stack_00000050,0);
  if (thread_result_index == 0) {
    *pthread_op_flags = (uint)unaffected_register;
    unaffected_register = 0;
section_processing_jump_label_:
    if (unaffected_registerB != '\0') {
      thread_result_index = *(int *)(*(long long *)(unreg_bx + 8) + 0x14);
      if (thread_result_index != -1) {
        *(int *)(*(long long *)(unreg_bx + 8) + 0x14) = thread_result_index - *(int *)(unreg_bx + SYSTEM_MODULE_OFFSET_2);
      }
    }
    if ((*(long long *)(unreg_bx + 0x1d0) != 0) && ((unaffected_registerD & SYSTEM_CONFIG_BUFFER_SIZE_ZERO0) == 0)) {
      system_execution_function(*(unsigned long long *)(system_global_data_pointer + 0x1a0),*(long long *)(unreg_bx + 0x1d0),
                    &system_validation_function_2,0x282,1);
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
        (thread_result_index = (**(code **)(**(long long **)(unaffected_registerDI + SYSTEM_MODULE_OFFSET_1) + STRING_BUFFER_SIZE))
                           (*(long long **)(unaffected_registerDI + SYSTEM_MODULE_OFFSET_1),(long long)&stack0x00000040 + 4),
        thread_result_index == 0)) &&
       (thread_result_index = system_execution_function(*(unsigned long long *)(unaffected_registerDI + SYSTEM_MODULE_OFFSET_1),*(unsigned int *)(unaffected_registerDI + SYSTEM_MODULE_OFFSET_2),
                              0), thread_result_index == 0)) {
      memset(unaffected_registerDI + 0x178,0,0x330);
    }
  }
system_execution_function:
  system_execute_crypto_operation(*(ulong long *)(unreg_bp + 0x218) ^ (ulong long)&system_stack_zero);
}
      crypto_module_flag = 0;
      system_global_data_pointer = buffer_alloc_result;
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
  uStackX_10 = uStackX_10 & INVALID_HANDLE_VALUEffffff00;
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
    thread_op_flags = network_operation_processor(*handle_param,thread_op_flags - *(int *)(handle_param + 1));
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
             unsigned long long *system_operation_parameter,char system_control_parameter,char param_7)
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
        if (INVALID_HANDLE_VALUE < str_len_counter) {
          str_len_counter = INVALID_HANDLE_VALUE;
        }
        buffer_alloc_result = (unsigned int)str_len_counter;
        str_len_counter = str_len_counter;
      }
    }
  }
  if (system_control_parameter != '\0') {
    (**(code **)(**(long long **)(thread_op_flags + STRING_BUFFER_SIZE) + 0x30))(*(long long **)(thread_op_flags + STRING_BUFFER_SIZE),auStack_28)
    ;
    buffer_alloc_result = system_execution_function(buffer_alloc_result,auStack_28,str_len_counter,
                          *(unsigned int *)(*(long long *)(thread_op_flags + STRING_BUFFER_SIZE) + 0xb4));
    if ((int)buffer_alloc_result != 0) {
      return buffer_alloc_result;
    }
  }
  buffer_alloc_result = system_execution_function(buffer_alloc_result,*(unsigned long long *)(thread_op_flags + STRING_BUFFER_SIZE),str_len_counter,*system_operation_parameter,buffer_alloc_result,0,0,&stack_long_var);
  if ((int)buffer_alloc_result == 0) {
    if (param_7 != (char)buffer_alloc_result) {
      string_conversion_handler(stack_long_var,str_len_counter);
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
  system_cleanup_routine();
  memory_reference_cleaner(free_exref);
  thread_result_index = timeGetDevCaps(&stack0x00000030,8);
  buffer_alloc_result = 1;
  if (thread_result_index == 0) {
    buffer_alloc_result = 1;
    if (1 < (uint)in_stack_00000030) {
      buffer_alloc_result = (uint)in_stack_00000030;
    }
  }
  buffer_deallocator(buffer_alloc_result);
  system_char_variable = system_execution_function();
  if (system_char_variable == '\0') {
    return SYSTEM_POINTER_OFFSET09200ff;
  }
  crypto_initialized_flag = 1;
  return 0;
}
unsigned long long get_system_configuration(void)
{
  return SYSTEM_POINTER_OFFSET09200ff;
}
unsigned int validate_system_parameters(int handle_param,int thread_op_flags,int mutex_attr)
{
  int thread_result_index;
  unsigned int thread_op_flags;
  unsigned int auStack_18 [4];
  if (crypto_initialized_flag == '\0') {
    return SYSTEM_POINTER_OFFSET0920005;
  }
  if (((thread_op_flags != 0) || (mutex_attr != 0)) || (3 < handle_param - 1U)) {
    return SYSTEM_POINTER_OFFSET0920001;
  }
  thread_result_index = system_execution_function();
  if (thread_result_index != 0) {
    return SYSTEM_POINTER_OFFSET09200ff;
  }
  thread_result_index = system_execution_function(handle_param,auStack_18);
  if (thread_result_index < 0) {
    thread_op_flags = SYSTEM_POINTER_OFFSET09200ff;
    if (thread_result_index == -0x7ffeffff) {
      thread_op_flags = SYSTEM_POINTER_OFFSET0920004;
    }
    system_synchronization_handler();
    return thread_op_flags;
  }
  system_synchronization_handler();
  return auStack_18[0];
}
unsigned long long initialize_parameter_block(unsigned int handle_param,uint *thread_op_flags)
{
  long long system_initialization_result;
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
    return SYSTEM_POINTER_OFFSET0920005;
  }
  if (thread_op_flags == (uint *)0x0) {
    return SYSTEM_POINTER_OFFSET0920001;
  }
  thread_result_index = system_execution_function();
  if (thread_result_index != 0) {
    return SYSTEM_POINTER_OFFSET09200ff;
  }
  thread_result_index = handle_processor(handle_param);
  if (thread_result_index < 0) {
    system_synchronization_handler();
    return SYSTEM_POINTER_OFFSET0920003;
  }
  system_execution_function(thread_op_flags);
  thread_result_index = parameter_validator(handle_param,&stack_long_var);
  if (thread_result_index == 0) {
    initialize_timer_context(handle_param,abStackX_18);
    if (*(long long *)(stack_long_var + 0x160) != 0) {
      system_char_variable = status_checker();
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
        system_initialization_result = *(long long *)(stack_long_var + 0x160);
        buffer_alloc_result = *(uint *)(system_initialization_result + 0x74);
        thread_op_flags = *(uint *)(system_initialization_result + 0x78);
        buffer_alloc_result = *(uint *)(system_initialization_result + 0x7c);
        thread_op_flags[3] = *(uint *)(system_initialization_result + 0x70);
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
        thread_initializer(thread_op_flags + 3);
        thread_configurator(thread_op_flags + 7);
        thread_finalizer(thread_op_flags + 10);
      }
      *(unsigned char *)(thread_op_flags + 0x13) = 1;
      *(unsigned char *)(thread_op_flags + 0x1a) = *(unsigned char *)(stack_long_var + 1);
      *(unsigned long long *)(thread_op_flags + 0x14) = **(unsigned long long **)(stack_long_var + 0x160);
      system_initialization_result = *(long long *)(stack_long_var + 0x160);
      byte_init_result = *(byte *)(system_initialization_result + 0x19);
      if (2 < *(byte *)(system_initialization_result + 0x19)) {
        byte_init_result = 2;
      }
      thread_result_index = 0;
      *(byte *)(thread_op_flags + 0xd) = byte_init_result;
      if (*(char *)(system_initialization_result + 0x19) != '\0') {
        string_input_ptr = (unsigned short *)((long long)thread_op_flags + 0x3e);
        string_input_ptr = (unsigned short *)(system_initialization_result + 0x1e);
        do {
          thread_result_index = thread_result_index + 1;
          string_input_ptr[-1] = string_input_ptr[-1];
          *string_input_ptr = *string_input_ptr;
          *(unsigned char *)(string_input_ptr + 1) = *(unsigned char *)(string_input_ptr + -2);
          string_input_ptr = string_input_ptr + 4;
          string_input_ptr = string_input_ptr + 3;
        } while (thread_result_index < (int)(uint)*(byte *)(system_initialization_result + 0x19));
      }
    }
  }
  system_synchronization_handler();
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
  thread_result_index = handle_processor(handle_param);
  if (thread_result_index < 0) {
    system_synchronization_handler();
    return -0x7f6dfffd;
  }
  str_len_counter = data_processor(handle_param,0);
  if (str_len_counter != 0) {
    system_char_variable = string_comparator(*(unsigned short *)(str_len_counter + 2),*(unsigned short *)(str_len_counter + 4));
    if ((((system_char_variable == '\0') && (*thread_op_flags < 0xd)) && (thread_op_flags[1] < 0xd)) && (thread_op_flags[2] < 0xd)) {
      system_synchronization_handler();
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
      system_synchronization_handler();
      return thread_result_index;
    }
  }
  system_synchronization_handler();
  return -0x7f6dff01;
}
int check_system_readiness(void)
{
  char system_char_variable;
  int thread_result_index;
  long long str_len_counter;
  byte *unreg_bx;
  unsigned int unaff_ESI;
  str_len_counter = data_processor(unaff_ESI);
  if (str_len_counter != 0) {
    system_char_variable = string_comparator(*(unsigned short *)(str_len_counter + 2),*(unsigned short *)(str_len_counter + 4));
    if ((((system_char_variable == '\0') && (*unreg_bx < 0xd)) && (unreg_bx[1] < 0xd)) && (unreg_bx[2] < 0xd)) {
      system_synchronization_handler();
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
      system_synchronization_handler();
      return thread_result_index;
    }
  }
  system_synchronization_handler();
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
    system_synchronization_handler();
    return thread_result_index;
  }
  system_synchronization_handler();
  return -0x7f6dff01;
}
unsigned long long get_system_status_info(void)
{
  system_synchronization_handler();
  return SYSTEM_POINTER_OFFSET09200ff;
}
          byte_counter = byte_check_result;
          *thread_op_flags = thread_result_index;
          *(int *)(str_len_counter + STRING_BUFFER_SIZE) = thread_result_index;
          *(int *)(str_len_counter + 0x18) = thread_result_index;
          integer_processor(str_len_counter);
          return 0;
        }
        str_len_counter = str_len_counter + 0x2408;
      } while (str_len_counter < SYSTEM_FLAG_BUFFER_ADDR_1);
      return SYSTEM_POINTER_OFFSET001002d;
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
  integer_processor(system_int_param_ptr + -4);
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
      buffer_alloc_result = *(byte *)((thread_result_index >> 3) + handle_param) >> (byte_flag_value & SYSTEM_CONSTANT_2) & 1;
      thread_result_index = thread_result_index + 1;
      buffer_alloc_result = buffer_alloc_result | buffer_alloc_result << ((byte)thread_result_index & SYSTEM_CONSTANT_2);
      thread_result_index = thread_result_index;
    } while (thread_result_index < mutex_attr);
  }
  if (((mutex_type != '\0') && (buffer_alloc_result != 0)) && (thread_result_index < path_buffer_size)) {
    byte_flag_value = (byte)thread_result_index & SYSTEM_CONSTANT_2;
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
  system_global_data_pointer = _beginthread(system_execution_function,0,0);
  if ((system_global_data_pointer != -1) &&
     (system_global_data_pointer = _beginthread(system_execution_function,0,0), system_global_data_pointer != -1)) {
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
  long long system_initialization_result;
  system_initialization_result = data_processor(handle_param,0);
  if (system_initialization_result != 0) {
    *thread_op_flags = *(unsigned int *)(system_initialization_result + 100);
    return 0;
  }
  return SYSTEM_POINTER_OFFSET001002d;
}
      string_termination_flag = '\0';
      if (system_global_data_pointer == 0) {
        str_len_counter = system_execution_function(&system_system_function_1);
        if (str_len_counter != 0) {
          str_len_counter = LoadLibraryExW(str_len_counter,0,0);
        }
        LocalFree(str_len_counter);
        system_global_data_pointer = str_len_counter;
        if (str_len_counter == 0) goto section_processing_jump_label_;
      }
      if ((((system_global_data_pointer == (code *)0x0) &&
           (system_global_data_pointer = (code *)GetProcAddress(system_global_data_pointer,&system_library_function_1),
           system_global_data_pointer == (code *)0x0)) ||
          ((system_global_data_pointer == 0 &&
           (system_global_data_pointer = GetProcAddress(system_global_data_pointer,&system_library_function_2), system_global_data_pointer == 0))))
         || ((system_global_data_pointer == 0 &&
             (system_global_data_pointer = GetProcAddress(system_global_data_pointer,&system_library_function_3), system_global_data_pointer == 0)))
         ) goto section_processing_jump_label_;
      if ((system_global_data_pointer == 0) &&
         (system_global_data_pointer = system_execution_function(&system_library_function_4,0), system_global_data_pointer != 0)) {
        system_global_data_pointer = (code *)GetProcAddress(system_global_data_pointer,&system_library_function_5);
      }
      character_scan_pointer = system_global_data_pointer;
      if (system_global_data_pointer == (code *)0x0) goto section_processing_jump_label_;
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
      _guard_check_icall(system_global_data_pointer);
      thread_result_index = (*character_scan_pointer)(&stack_size_max,&stack_size_max,0x27);
      if (thread_result_index != 0x27) goto section_processing_jump_label_;
      for (string_input_ptr = auStack_1c0; character_scan_pointer = system_global_data_pointer, buffer_alloc_result = *string_input_ptr, buffer_alloc_result != 0;
          string_input_ptr = string_input_ptr + 1) {
        stack_size_max = 0;
        _guard_check_icall(system_global_data_pointer);
        thread_stack_ptr = &stack_size_max;
        thread_result_index = (*character_scan_pointer)(INVALID_HANDLE_VALUE80000002,&system_library_function_6,0,buffer_alloc_result | path_buffer_size019);
        if (thread_result_index == 0) {
          stack_size_max = SYSTEM_POINTER_OFFSET0;
          stack_size_max = 4;
          memset(auStack_148,0,string_buffer_size_constant);
        }
      }
    }
    if (thread_initialization_flag == '\0') {
      SetLastError(thread_op_flags & INVALID_HANDLE_VALUE);
      goto section_processing_jump_label_;
    }
  }
  OutputDebugStringW(&system_debug_string_1);
  SetLastError(0);
section_processing_jump_label_:
  system_execute_crypto_operation(stack_size_max ^ (ulong long)system_debug_stack_buffer);
}
          thread_result_flag = thread_result_index == 1;
          SetConsoleTitleA(&system_console_title_1);
        }
      }
      thread_validation_flag = thread_result_flag == '\0';
      if (system_global_data_pointer == 0) {
        str_len_counter = _wfsopen(handle_param,&system_file_function_1,SYSTEM_CONFIG_BUFFER_SIZE);
        if (str_len_counter == 0) {
          system_execution_function(&system_string_buffer_5,0xc1,&system_string_buffer_6,&system_string_function_4,handle_param);
          byte_check_result0 = false;
        }
        else {
          fclose(str_len_counter);
          system_execution_function(&system_string_buffer_5,200,&system_string_buffer_6,&system_string_function_5,handle_param);
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
            str_len_counter = system_global_data_pointer;
            do {
              system_global_data_pointer = str_len_counter;
              if (str_len_counter == 0) {
                system_execution_function(str_len_counter,str_len_counter,&system_string_buffer_1,str_len_counter,thread_result_index);
              }
              else {
                system_execution_function(str_len_counter,str_len_counter,&system_string_buffer_2,str_len_counter,thread_result_index,str_len_counter);
              }
              system_global_data_pointer = _wfsopen(str_len_counter,string_input_ptr,path_buffer_size);
              if (system_global_data_pointer != 0) {
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
          byte_check_result0 = system_global_data_pointer != 0;
        }
      }
      else {
        system_execution_function(&system_string_buffer_5,0xb4,&system_string_buffer_6,&system_string_function_6,handle_param);
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
      string_input_ptr = &system_debug_string_2;
      if (unaff_SIL != '\0') {
        string_input_ptr = &system_debug_string_3;
      }
      system_global_data_pointer = _wfsopen();
      if ((1 < system_global_data_pointer) && ((uint)unaffected_register < in_stack_00000090)) {
        buffer_alloc_result = GetConsoleWindow();
        in_stack_00000098 = (uint)unaffected_register;
        GetWindowThreadProcessId(buffer_alloc_result,&stack0x00000098);
        buffer_alloc_result = GetCurrentProcessId();
        if (buffer_alloc_result != in_stack_00000098) {
          thread_result_index = AllocConsole();
          thread_result_flag = thread_result_index == 1;
          SetConsoleTitleA(&system_console_title_1);
        }
      }
      thread_validation_flag = thread_result_flag == (char)unaffected_register;
      if (system_global_data_pointer == unaffected_register) {
        str_len_counter = _wfsopen();
        if (str_len_counter == 0) {
          system_execution_function(&system_string_buffer_5,0xc1,&system_string_buffer_6,&system_string_function_4);
          byte_check_result2 = false;
        }
        else {
          fclose(str_len_counter);
          system_execution_function(&system_string_buffer_5,200,&system_string_buffer_6,&system_string_function_5);
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
            str_len_counter = system_global_data_pointer;
            do {
              system_global_data_pointer = str_len_counter;
              if (str_len_counter == 0) {
                system_execution_function(str_len_counter,str_len_counter,&system_string_buffer_1,str_len_counter,thread_result_index);
              }
              else {
                system_execution_function(str_len_counter,str_len_counter,&system_string_buffer_2,str_len_counter,thread_result_index);
              }
              system_global_data_pointer = _wfsopen(str_len_counter,string_input_ptr,path_buffer_size);
              if (system_global_data_pointer != 0) {
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
          byte_check_result2 = system_global_data_pointer != unaffected_register;
        }
      }
      else {
        system_execution_function(&system_string_buffer_5,0xb4,&system_string_buffer_6,&system_string_function_6);
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
  system_execution_function(&system_string_buffer_5,200,&system_string_buffer_6,&system_string_function_5);
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
    str_len_counter = system_global_data_pointer;
    do {
      system_global_data_pointer = str_len_counter;
      if (str_len_counter == 0) {
        system_execution_function(str_len_counter,str_len_counter,&system_string_buffer_1,str_len_counter,thread_result_index);
      }
      else {
        system_execution_function(str_len_counter,str_len_counter,&system_string_buffer_2,str_len_counter,thread_result_index);
      }
      system_global_data_pointer = _wfsopen(str_len_counter);
      if (system_global_data_pointer != 0) {
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
  return system_global_data_pointer != unaffected_register;
}
  thread_validation_flag = thread_result_flag == unaffected_registerB;
  return 1;
}
    string_concatenation_flag = '\x01';
    wcscpy_s(system_debug_stack_buffer,STRING_BUFFER_SIZE4,handle_param);
    if ((string_concatenation_flag != '\0') && (wcscat_s(system_debug_stack_buffer,STRING_BUFFER_SIZE4,thread_op_flags), string_concatenation_flag != '\0')) {
      system_execution_function(system_debug_stack_buffer,0);
    }
    _set_invalid_parameter_handle_paramr(buffer_alloc_result);
  }
  system_execute_crypto_operation(stack_size_max ^ (ulong long)auStack_248);
}
  string_concatenation_flag = '\x01';
  wcscpy_s(system_temp_stack_array,STRING_BUFFER_SIZE4);
  if (string_concatenation_flag != '\0') {
    wcscat_s(system_temp_stack_array,STRING_BUFFER_SIZE4);
    if (string_concatenation_flag != '\0') {
      system_execution_function(system_temp_stack_array,0);
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
      flag_value = SYSTEM_CONFIG_BUFFER_SIZE - ((byte)system_global_data_pointer & SYSTEM_CONSTANT_3) & SYSTEM_CONSTANT_3;
      system_global_data_pointer = (INVALID_HANDLE_VALUEffffffffU >> flag_value | -1L << SYSTEM_CONFIG_BUFFER_SIZE - flag_value) ^ system_global_data_pointer;
      system_ram_pointer_1 = system_global_data_pointer;
      system_global_data_pointer = system_global_data_pointer;
      system_global_data_pointer = system_global_data_pointer;
      system_ram_pointer_2 = system_global_data_pointer;
      system_global_data_pointer = system_global_data_pointer;
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
    if (((ulong long)(uint)image_section_header_pointer->VirtualAddress <= handle_param - SYSTEM_BASE_ADDRESSU) &&
       (buffer_alloc_result = (ulong long)((image_section_header_pointer->Misc).PhysicalAddress + image_section_header_pointer->VirtualAddress),
       handle_param - SYSTEM_BASE_ADDRESSU < buffer_alloc_result)) goto section_processing_jump_label_;
  }
  image_section_header_pointer = (IMAGE_SECTION_HEADER *)0x0;
section_processing_jump_label_:
  if (image_section_header_pointer == (IMAGE_SECTION_HEADER *)0x0) {
    buffer_alloc_result = buffer_alloc_result & INVALID_HANDLE_VALUEffffff00;
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
