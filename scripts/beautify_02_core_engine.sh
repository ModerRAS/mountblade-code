#!/bin/bash

# 美化02_core_engine.c文件中的十六进制地址变量名
# 简化实现：仅将常见的十六进制地址变量名替换为语义化名称

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"

# 全局数据变量名美化
sed -i 's/engine_global_data_20f868/engine_global_data_thread_context/g' "$FILE_PATH"
sed -i 's/engine_global_data_211f50/engine_global_data_memory_manager/g' "$FILE_PATH"
sed -i 's/engine_global_data_211ec0/engine_global_data_resource_manager/g' "$FILE_PATH"
sed -i 's/engine_global_data_180bf5c18/engine_global_data_primary_context/g' "$FILE_PATH"
sed -i 's/engine_global_data_180bf5c28/engine_global_data_secondary_context/g' "$FILE_PATH"
sed -i 's/engine_global_data_180c8ecd0/engine_global_data_system_heap/g' "$FILE_PATH"
sed -i 's/engine_global_data_180c8ecb0/engine_global_data_system_cache/g' "$FILE_PATH"
sed -i 's/engine_global_data_180c8eca8/engine_global_data_system_buffer/g' "$FILE_PATH"
sed -i 's/engine_global_data_180d48daa/engine_global_data_status_flag_primary/g' "$FILE_PATH"
sed -i 's/engine_global_data_180d48dab/engine_global_data_status_flag_secondary/g' "$FILE_PATH"

# 比较数据变量名美化
sed -i 's/engine_global_data_180a01028/engine_global_data_compare_pattern_standard/g' "$FILE_PATH"
sed -i 's/engine_global_data_180a01000/engine_global_data_compare_pattern_alternate/g' "$FILE_PATH"
sed -i 's/engine_global_data_180a00fd8/engine_global_data_compare_pattern_extended/g' "$FILE_PATH"
sed -i 's/engine_global_data_180a00fb0/engine_global_data_compare_pattern_special/g' "$FILE_PATH"
sed -i 's/engine_global_data_1809ff9e8/engine_global_data_compare_pattern_backup/g' "$FILE_PATH"
sed -i 's/engine_global_data_1809ff9c0/engine_global_data_compare_pattern_reserved/g' "$FILE_PATH"

# 缓冲区数据变量名美化
sed -i 's/engine_global_data_180a0b1c8/engine_global_data_buffer_pattern_primary/g' "$FILE_PATH"
sed -i 's/engine_global_data_180a13a98/engine_global_data_buffer_pattern_secondary/g' "$FILE_PATH"
sed -i 's/engine_global_data_180a13e48/engine_global_data_buffer_pattern_tertiary/g' "$FILE_PATH"
sed -i 's/engine_global_data_180a140f8/engine_global_data_buffer_pattern_quaternary/g' "$FILE_PATH"
sed -i 's/engine_global_data_180a14290/engine_global_data_buffer_pattern_extended/g' "$FILE_PATH"
sed -i 's/engine_global_data_180a14668/engine_global_data_buffer_pattern_additional/g' "$FILE_PATH"
sed -i 's/engine_global_data_180a14640/engine_global_data_buffer_pattern_custom/g' "$FILE_PATH"
sed -i 's/engine_global_data_180a14840/engine_global_data_buffer_pattern_final/g' "$FILE_PATH"

# 内存管理变量名美化
sed -i 's/engine_global_data_180c919e0/engine_global_data_memory_pool_primary/g' "$FILE_PATH"
sed -i 's/engine_global_data_180c91d54/engine_global_data_memory_pool_secondary/g' "$FILE_PATH"
sed -i 's/engine_global_data_180c91d5c/engine_global_data_memory_pool_tertiary/g' "$FILE_PATH"
sed -i 's/engine_global_data_180c91d60/engine_global_data_memory_pool_quaternary/g' "$FILE_PATH"
sed -i 's/engine_global_data_180c91d64/engine_global_data_memory_pool_extended/g' "$FILE_PATH"
sed -i 's/engine_global_data_180c91d68/engine_global_data_memory_pool_additional/g' "$FILE_PATH"
sed -i 's/engine_global_data_180c91d6c/engine_global_data_memory_pool_custom/g' "$FILE_PATH"
sed -i 's/engine_global_data_180c91d70/engine_global_data_memory_pool_final/g' "$FILE_PATH"

# 线程上下文变量名美化
sed -i 's/engine_global_data_180bf6750/engine_global_data_thread_context_primary/g' "$FILE_PATH"
sed -i 's/engine_global_data_180bf6758/engine_global_data_thread_context_secondary/g' "$FILE_PATH"
sed -i 's/engine_global_data_180bf6768/engine_global_data_thread_context_tertiary/g' "$FILE_PATH"
sed -i 's/engine_global_data_180bf7e90/engine_global_data_thread_context_quaternary/g' "$FILE_PATH"
sed -i 's/engine_global_data_180bf7e98/engine_global_data_thread_context_extended/g' "$FILE_PATH"
sed -i 's/engine_global_data_180bf7ea8/engine_global_data_thread_context_additional/g' "$FILE_PATH"

# 特殊数据变量名美化
sed -i 's/engine_global_data_180a00bb0/engine_global_data_special_pattern_primary/g' "$FILE_PATH"
sed -i 's/engine_global_data_180a00b88/engine_global_data_special_pattern_secondary/g' "$FILE_PATH"
sed -i 's/engine_global_data_180a00e28/engine_global_data_special_pattern_tertiary/g' "$FILE_PATH"
sed -i 's/engine_global_data_180a00d48/engine_global_data_special_pattern_quaternary/g' "$FILE_PATH"
sed -i 's/engine_global_data_1809fe0d0/engine_global_data_special_pattern_extended/g' "$FILE_PATH"

# 栈变量名美化
sed -i 's/engine_stack_pointer_18/engine_stack_pointer_context/g' "$FILE_PATH"
sed -i 's/engine_stack_buffer_98/engine_stack_buffer_temp/g' "$FILE_PATH"
sed -i 's/engine_stack_array_88/engine_stack_array_temp/g' "$FILE_PATH"

# 循环计数器变量名美化
sed -i 's/engine_loop_counter_1/engine_loop_counter_primary/g' "$FILE_PATH"
sed -i 's/engine_loop_counter_2/engine_loop_counter_secondary/g' "$FILE_PATH"

# 全局变量名美化
sed -i 's/g_global_1800868c0/engine_global_context_reference/g' "$FILE_PATH"

# 其他数据变量名美化
sed -i 's/engine_global_data_180a09dc0/engine_global_data_system_config/g' "$FILE_PATH"
sed -i 's/engine_global_data_180a157e0/engine_global_data_system_state/g' "$FILE_PATH"
sed -i 's/engine_global_data_180a157e4/engine_global_data_system_status/g' "$FILE_PATH"
sed -i 's/engine_global_data_180d48db0/engine_global_data_heap_manager/g' "$FILE_PATH"
sed -i 's/engine_global_data_180d48db8/engine_global_data_cache_manager/g' "$FILE_PATH"
sed -i 's/engine_global_data_180d48dc0/engine_global_data_buffer_manager/g' "$FILE_PATH"
sed -i 's/engine_global_data_180d48dc8/engine_global_data_thread_manager/g' "$FILE_PATH"
sed -i 's/engine_global_data_180d48dd0/engine_global_data_resource_manager/g' "$FILE_PATH"
sed -i 's/engine_global_data_180d49994/engine_global_data_memory_allocator/g' "$FILE_PATH"
sed -i 's/engine_global_data_180d49998/engine_global_data_memory_deallocator/g' "$FILE_PATH"
sed -i 's/engine_global_data_180bf65ec/engine_global_data_service_manager/g' "$FILE_PATH"
sed -i 's/engine_global_data_180bfc170/engine_global_data_event_manager/g' "$FILE_PATH"
sed -i 's/engine_global_data_180a0af70/engine_global_data_system_scheduler/g' "$FILE_PATH"
sed -i 's/engine_global_data_180c92498/engine_global_data_process_manager/g' "$FILE_PATH"
sed -i 's/engine_global_data_180a25d28/engine_global_data_module_loader/g' "$FILE_PATH"
sed -i 's/engine_global_data_180a0209c/engine_global_data_plugin_manager/g' "$FILE_PATH"
sed -i 's/engine_global_data_180a022f0/engine_global_data_dependency_resolver/g' "$FILE_PATH"
sed -i 's/engine_global_data_180a02320/engine_global_data_lifecycle_manager/g' "$FILE_PATH"
sed -i 's/engine_global_data_180a25cb4/engine_global_data_system_monitor/g' "$FILE_PATH"
sed -i 's/engine_global_data_180a02030/engine_global_data_system_profiler/g' "$FILE_PATH"
sed -i 's/engine_global_data_180a0206c/engine_global_data_system_analyzer/g' "$FILE_PATH"
sed -i 's/engine_global_data_180a02080/engine_global_data_system_optimizer/g' "$FILE_PATH"

echo "核心引擎系统变量名语义化美化完成"