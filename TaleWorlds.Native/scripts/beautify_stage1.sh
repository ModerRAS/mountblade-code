#!/bin/bash

# 创建一个脚本用于批量替换变量名
# 注意：这是一个简化实现，实际项目中可能需要更复杂的分析

cd /dev/shm/mountblade-code/TaleWorlds.Native

# 备份当前文件
cp TaleWorlds.Native.dll.c TaleWorlds.Native.dll.c.backup

# 第一阶段：替换基本的undefined变量名为更具语义的名称
sed -i 's/undefined global_configuration_data/global_config_data_t global_configuration_data/g' TaleWorlds.Native.dll.c
sed -i 's/undefined global_configuration_flags/global_config_flags_t global_configuration_flags/g' TaleWorlds.Native.dll.c
sed -i 's/undefined engine_init_func/engine_init_func_t engine_init_func/g' TaleWorlds.Native.dll.c
sed -i 's/undefined engine_state_flags/engine_state_flags_t engine_state_flags/g' TaleWorlds.Native.dll.c
sed -i 's/undefined engine_state_data/engine_state_data_t engine_state_data/g' TaleWorlds.Native.dll.c
sed -i 's/undefined render_context_flags/render_context_flags_t render_context_flags/g' TaleWorlds.Native.dll.c
sed -i 's/undefined render_context_data/render_context_data_t render_context_data/g' TaleWorlds.Native.dll.c
sed -i 's/undefined physics_system_flags/physics_system_flags_t physics_system_flags/g' TaleWorlds.Native.dll.c
sed -i 's/undefined physics_system_data/physics_system_data_t physics_system_data/g' TaleWorlds.Native.dll.c
sed -i 's/undefined audio_system_flags/audio_system_flags_t audio_system_flags/g' TaleWorlds.Native.dll.c
sed -i 's/undefined audio_system_data/audio_system_data_t audio_system_data/g' TaleWorlds.Native.dll.c
sed -i 's/undefined audio_engine_data/audio_engine_data_t audio_engine_data/g' TaleWorlds.Native.dll.c
sed -i 's/undefined input_system_data/input_system_data_t input_system_data/g' TaleWorlds.Native.dll.c
sed -i 's/undefined input_engine_data/input_engine_data_t input_engine_data/g' TaleWorlds.Native.dll.c
sed -i 's/undefined script_system_data/script_system_data_t script_system_data/g' TaleWorlds.Native.dll.c
sed -i 's/undefined network_module_data/network_module_data_t network_module_data/g' TaleWorlds.Native.dll.c
sed -i 's/undefined engine_update_function/engine_update_function_t engine_update_function/g' TaleWorlds.Native.dll.c
sed -i 's/undefined memory_allocator_data/memory_allocator_data_t memory_allocator_data/g' TaleWorlds.Native.dll.c
sed -i 's/undefined game_engine_instance/game_engine_instance_t game_engine_instance/g' TaleWorlds.Native.dll.c
sed -i 's/undefined game_engine_flags/game_engine_flags_t game_engine_flags/g' TaleWorlds.Native.dll.c
sed -i 's/undefined game_world_data/game_world_data_t game_world_data/g' TaleWorlds.Native.dll.c
sed -i 's/undefined game_world_flags/game_world_flags_t game_world_flags/g' TaleWorlds.Native.dll.c

echo "第一阶段变量名替换完成"