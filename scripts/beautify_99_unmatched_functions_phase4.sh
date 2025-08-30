#!/bin/bash

# 继续美化99_unmatched_functions.c文件中的变量名
# 将剩余的system_data变量名替换为语义化名称

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# system_data变量名替换 - 高级内存管理
sed -i 's/system_data_a032a8/system_data_memory_allocator_primary/g' "$FILE"
sed -i 's/system_data_a032c0/system_data_memory_allocator_secondary/g' "$FILE"
sed -i 's/system_data_a032d0/system_data_memory_allocator_tertiary/g' "$FILE"
sed -i 's/system_data_a032e0/system_data_memory_allocator_quaternary/g' "$FILE"
sed -i 's/system_data_a03300/system_data_memory_allocator_penta/g' "$FILE"
sed -i 's/system_data_a03340/system_data_memory_allocator_hexa/g' "$FILE"
sed -i 's/system_data_a03360/system_data_memory_allocator_hepta/g' "$FILE"
sed -i 's/system_data_0bef74/system_data_memory_allocator_octa/g' "$FILE"
sed -i 's/system_data_a033a8/system_data_memory_allocator_nona/g' "$FILE"
sed -i 's/system_data_a033b8/system_data_memory_allocator_deca/g' "$FILE"
sed -i 's/system_data_a033d8/system_data_memory_allocator_undeca/g' "$FILE"
sed -i 's/system_data_a033f0/system_data_memory_allocator_dodeca/g' "$FILE"
sed -i 's/system_data_a03410/system_data_memory_allocator_trideca/g' "$FILE"
sed -i 's/system_data_a03430/system_data_memory_allocator_tetradeca/g' "$FILE"
sed -i 's/system_data_a03458/system_data_memory_allocator_pentadeca/g' "$FILE"
sed -i 's/system_data_a03478/system_data_memory_allocator_hexadeca/g' "$FILE"
sed -i 's/system_data_a03490/system_data_memory_allocator_heptadeca/g' "$FILE"
sed -i 's/system_data_a034c0/system_data_memory_allocator_octadeca/g' "$FILE"
sed -i 's/system_data_a03528/system_data_memory_allocator_novadeca/g' "$FILE"
sed -i 's/system_data_a03508/system_data_memory_allocator_eicosa/g' "$FILE"
sed -i 's/system_data_a03540/system_data_memory_allocator_heneicosa/g' "$FILE"

# 系统数据变量名替换 - 线程管理
sed -i 's/g_thread_manager_data/g_thread_manager_primary/g' "$FILE"
sed -i 's/system_data_a03600/system_data_thread_pool_primary/g' "$FILE"
sed -i 's/system_data_a036f0/system_data_thread_scheduler_primary/g' "$FILE"

# 系统数据变量名替换 - 网络系统
sed -i 's/g_network_config_data/g_network_config_primary/g' "$FILE"
sed -i 's/system_data_a03720/system_data_network_socket_primary/g' "$FILE"
sed -i 's/system_data_a03758/system_data_network_protocol_primary/g' "$FILE"
sed -i 's/system_data_0c0ea0/system_data_network_connection_primary/g' "$FILE"

# 系统数据变量名替换 - 渲染系统
sed -i 's/system_data_a037a0/system_data_rendering_display_primary/g' "$FILE"
sed -i 's/system_data_a037c0/system_data_rendering_swap_chain_primary/g' "$FILE"
sed -i 's/system_data_a037e0/system_data_rendering_present_primary/g' "$FILE"
sed -i 's/system_data_a03810/system_data_rendering_sync_primary/g' "$FILE"

# 全局变量名替换
sed -i 's/g_main_thread_mutex/g_main_thread_mutex_primary/g' "$FILE"
sed -i 's/g_file_system_data/g_file_system_primary/g' "$FILE"
sed -i 's/g_graphics_system_data/g_graphics_system_primary/g' "$FILE"
sed -i 's/g_audio_system_data/g_audio_system_primary/g' "$FILE"

# 系统数据变量名替换 - 文件系统
sed -i 's/system_data_a03888/system_data_file_manager_primary/g' "$FILE"
sed -i 's/system_data_a03898/system_data_file_handler_primary/g' "$FILE"
sed -i 's/system_data_a038b0/system_data_file_cache_primary/g' "$FILE"
sed -i 's/system_data_a038c8/system_data_file_stream_primary/g' "$FILE"

# 系统数据变量名替换 - 图形系统
sed -i 's/system_data_a038e8/system_data_graphics_driver_primary/g' "$FILE"
sed -i 's/system_data_a038f8/system_data_graphics_device_primary/g' "$FILE"
sed -i 's/system_data_a03908/system_data_graphics_context_primary/g' "$FILE"
sed -i 's/system_data_a03930/system_data_graphics_surface_primary/g' "$FILE"
sed -i 's/system_data_a03988/system_data_graphics_format_primary/g' "$FILE"
sed -i 's/system_data_a03948/system_data_graphics_resource_primary/g' "$FILE"
sed -i 's/system_data_a039a0/system_data_graphics_shader_primary/g' "$FILE"

echo "第四阶段变量名美化完成"