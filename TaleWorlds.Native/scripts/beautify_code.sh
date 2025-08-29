#!/bin/bash

# 美化代码脚本 - 改进变量命名
# 注意：这是一个简化实现，用于批量重命名变量

cd /dev/shm/mountblade-code/TaleWorlds.Native

# 创建临时脚本文件
cat > temp_beautify.sed << 'EOF'
# 替换全局配置相关变量
s/global_configuration_data/engine_global_config/g
s/global_configuration_flags/engine_runtime_flags/g

# 替换渲染相关变量
s/render_context_flags/renderer_context_flags/g
s/render_context_data/renderer_context_data/g
s/render_system_initialize/renderer_init_func/g
s/render_system_data1/renderer_data_1/g
s/render_system_data2/renderer_data_2/g

# 替换物理系统相关变量
s/physics_system_flags/physics_engine_flags/g
s/physics_system_data/physics_engine_data/g

# 替换音频系统相关变量
s/audio_system_flags/audio_engine_flags/g
s/audio_system_data/audio_engine_data/g
s/audio_engine_data/audio_runtime_data/g
s/audio_system_initialize/audio_system_init/g

# 替换输入系统相关变量
s/input_system_data/input_system_runtime_data/g
s/input_engine_data/input_engine_runtime_data/g

# 替换游戏引擎相关变量
s/engine_update_function/engine_update_loop/g
s/memory_allocator_data/memory_allocator/g
s/game_engine_instance/game_engine_instance/g
s/game_world_data/game_world_runtime_data/g
s/game_world_flags/game_world_status_flags/g

# 替换游戏UI相关变量
s/game_ui_flag1/game_ui_init_flag/g
s/game_ui_flag2/game_ui_active_flag/g
s/game_ui_data/game_ui_runtime_data/g

# 替换网络模块相关变量
s/network_module_data/network_module_runtime_data/g
s/network_module_data1/network_data_1/g
s/network_module_data2/network_data_2/g

# 替换游戏渲染相关变量
s/game_render_data/game_renderer_data/g
s/game_render_flags/game_renderer_flags/g

# 替换游戏音频相关变量
s/game_audio_system_data/game_audio_data/g

# 替换游戏输入相关变量
s/game_input_data/game_input_runtime_data/g

# 替换引擎配置相关变量
s/engine_configuration_data_/engine_config_param_/g
s/engine_init_subsystem/engine_subsystem_init/g
EOF

# 应用sed脚本到文件
sed -i -f temp_beautify.sed TaleWorlds.Native.dll.c

# 清理临时文件
rm temp_beautify.sed

echo "代码美化完成"