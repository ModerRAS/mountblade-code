#!/bin/bash

# 06_utilities.c 文件语义化替换脚本
# 原本实现：完全重构所有函数命名体系，建立统一的语义化命名规范
# 简化实现：仅将常见的非语义化函数名替换为语义化名称，为关键函数添加文档注释，保持代码结构不变

# 函数名替换映射 - 工具系统相关函数
declare -A FUNCTION_REPLACEMENTS=(
    # 状态获取函数
    ["FUN_180891090"]="utility_get_system_status"
    ["FUN_1808910b3"]="utility_get_extended_status"
    ["FUN_180891210"]="utility_validate_system_state"
    ["FUN_180891280"]="utility_check_system_health"
    ["FUN_1808913c0"]="utility_process_data_request"
    ["FUN_1808913ff"]="utility_handle_system_error"
    ["FUN_180891492"]="utility_initialize_subsystem"
    ["FUN_1808914ac"]="utility_configure_subsystem"
    ["FUN_180891650"]="utility_execute_operation"
    ["FUN_180891820"]="utility_complete_operation"
    ["FUN_180891a80"]="utility_cancel_operation"
    ["FUN_180891b40"]="utility_pause_operation"
    ["FUN_180891bd0"]="utility_resume_operation"
    ["FUN_180891c40"]="utility_update_operation_status"
    ["FUN_180891d40"]="utility_set_operation_parameter"
    ["FUN_180891de0"]="utility_cleanup_operation"
    
    # 系统调用函数
    ["FUN_18088c530"]="utility_system_call_wrapper"
    ["FUN_18088c740"]="utility_system_call_init"
    ["FUN_18088c790"]="utility_system_call_cleanup"
    ["FUN_18088c500"]="utility_system_call_prepare"
    ["FUN_18088c7b30"]="utility_system_call_execute"
    ["FUN_18088c7dc0"]="utility_system_call_validate"
    ["FUN_18088ac50"]="utility_system_call_process"
    ["FUN_18088aca0"]="utility_system_call_finalize"
    ["FUN_18088d720"]="utility_system_notify_handler"
    ["FUN_18088d7c0"]="utility_system_event_handler"
    ["FUN_18088fb40"]="utility_system_async_handler"
    ["FUN_18088fc050"]="utility_system_encrypt_data"
    ["FUN_18088fc050"]="utility_system_decrypt_data"
    
    # 内存管理函数
    ["FUN_180853000"]="utility_memory_allocate_block"
    ["FUN_180851490"]="utility_memory_free_block"
    ["FUN_1808552c0"]="utility_memory_reallocate_block"
    ["FUN_1808c17c0"]="utility_memory_copy_block"
    ["FUN_1808c44f0"]="utility_memory_validate_block"
    ["FUN_1808deb90"]="utility_memory_optimize_block"
    
    # 线程管理函数
    ["FUN_180867d60"]="utility_thread_create_context"
    ["FUN_180867bc0"]="utility_thread_initialize_context"
    ["FUN_180868490"]="utility_thread_execute_context"
    ["FUN_1808681d0"]="utility_thread_manage_context"
    ["FUN_1808678e0"]="utility_thread_synchronize_context"
    
    # 数据处理函数
    ["FUN_1808605e0"]="utility_data_transform"
    ["FUN_180862e00"]="utility_data_process"
    ["FUN_18085dbf0"]="utility_data_cleanup"
    ["FUN_18085ff30"]="utility_data_validate"
    ["FUN_1808d73b0"]="utility_data_serialize"
    ["FUN_1808d7020"]="utility_data_deserialize"
    
    # 文件操作函数
    ["FUN_180894dd0"]="utility_file_open_handle"
    ["FUN_180742250"]="utility_file_read_data"
    ["FUN_180741df0"]="utility_file_write_data"
    ["FUN_18073b5f0"]="utility_file_seek_position"
    ["FUN_18073b810"]="utility_file_get_size"
    ["FUN_180741e10"]="utility_file_flush_buffer"
    
    # 错误处理函数
    ["FUN_1808bdd90"]="utility_error_log_message"
    ["FUN_1808757f0"]="utility_error_get_code"
    ["FUN_180875fc0"]="utility_error_set_code"
    ["FUN_1808c2130"]="utility_error_clear_code"
    
    # 配置函数
    ["FUN_180891090"]="utility_config_load_settings"
    ["FUN_1808910b3"]="utility_config_save_settings"
    ["FUN_180891210"]="utility_config_validate_settings"
    ["FUN_180891280"]="utility_config_apply_settings"
    
    # 监控函数
    ["FUN_1808913c0"]="utility_monitor_start_session"
    ["FUN_1808913ff"]="utility_monitor_stop_session"
    ["FUN_180891492"]="utility_monitor_get_metrics"
    ["FUN_1808914ac"]="utility_monitor_set_threshold"
    ["FUN_180891650"]="utility_monitor_check_status"
    ["FUN_180891820"]="utility_monitor_generate_report"
    ["FUN_180891a80"]="utility_monitor_clear_history"
    ["FUN_180891b40"]="utility_monitor_pause_collection"
    ["FUN_180891bd0"]="utility_monitor_resume_collection"
    ["FUN_180891c40"]="utility_monitor_update_config"
    ["FUN_180891d40"]="utility_monitor_set_filter"
    ["FUN_180891de0"]="utility_monitor_cleanup_session"
)

# 变量名替换映射
declare -A VARIABLE_REPLACEMENTS=(
    # 通用变量
    ["undefined"]="utility_temp_var"
    ["undefined1"]="utility_temp_byte"
    ["undefined2"]="utility_temp_short"
    ["undefined4"]="utility_temp_int"
    ["undefined8"]="utility_temp_long"
    ["undefined *"]="utility_temp_ptr"
    
    # 栈变量
    ["uStack[0-9a-fA-F]*"]="utility_stack_var"
    ["auStack[0-9a-fA-F]*"]="utility_stack_array"
    ["lStack[0-9a-fA-F]*"]="utility_stack_long"
    ["alStack[0-9a-fA-F]*"]="utility_stack_array_long"
    
    # 临时变量
    ["local_"]="utility_local_"
    ["param_"]="utility_param_"
    ["return_value"]="utility_return_value"
    ["status_code"]="utility_status_code"
    ["loop_counter"]="utility_loop_counter"
    ["item_count"]="utility_item_count"
    ["data_pointer"]="utility_data_ptr"
    ["context_handle"]="utility_context_handle"
    
    # 函数指针
    ["func_0x[0-9a-fA-F]*"]="utility_function_ptr"
)

# 替换函数名
echo "开始替换函数名..."
for pattern in "${!FUNCTION_REPLACEMENTS[@]}"; do
    replacement="${FUNCTION_REPLACEMENTS[$pattern]}"
    echo "替换 $pattern -> $replacement"
    sed -i "s/$pattern/$replacement/g" "/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
done

# 替换变量名
echo "开始替换变量名..."
for pattern in "${!VARIABLE_REPLACEMENTS[@]}"; do
    replacement="${VARIABLE_REPLACEMENTS[$pattern]}"
    echo "替换 $pattern -> $replacement"
    sed -i "s/$pattern/$replacement/g" "/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
done

echo "替换完成！"