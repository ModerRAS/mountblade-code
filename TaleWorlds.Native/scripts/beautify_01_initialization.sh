#!/bin/bash

# 美化01_initialization.c文件的脚本
# 重命名变量和函数使其更具可读性

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"
TEMP_FILE="/tmp/01_initialization_temp.c"

# 创建备份
cp "$INPUT_FILE" "$TEMP_FILE"

# 变量重命名映射
declare -A variable_renames=(
    # 游戏数据相关
    ["g_game_data_structure_1809fc768"]="g_game_data_structure"
    ["g_unknown_game_data_18098c7a0"]="g_unknown_game_data_1"
    ["g_game_config_data_18098c9b8"]="g_game_config_data"
    ["g_unknown_game_data_18098c7b8"]="g_unknown_game_data_2"
    ["g_game_state_data_18098c940"]="g_game_state_data"
    ["g_unknown_game_data_18098c7c8"]="g_unknown_game_data_3"
    ["g_game_memory_data_18098c918"]="g_game_memory_data"
    ["g_unknown_game_data_18098c7d8"]="g_unknown_game_data_4"
    ["g_game_render_data_18098c968"]="g_game_render_data"
    ["g_unknown_game_data_18098c7f0"]="g_unknown_game_data_5"
    ["g_game_audio_data_18098c990"]="g_game_audio_data"
    ["g_unknown_game_data_18098c810"]="g_unknown_game_data_6"
    ["g_game_network_data_18098c9e0"]="g_game_network_data"
    ["g_unknown_game_data_18098c870"]="g_unknown_game_data_7"
    ["g_game_input_data_18098c8f0"]="g_game_input_data"
    
    # 引擎数据相关
    ["InitializeGameEngine_180073930"]="InitializeGameEngine"
    ["g_unknown_engine_data_18098c880"]="g_unknown_engine_data_1"
    ["g_engine_config_data_18098c8c8"]="g_engine_config_data"
    ["g_unknown_engine_data_18098c898"]="g_unknown_engine_data_2"
    ["g_engine_state_data_180bf5268"]="g_engine_state_data"
    ["g_engine_memory_data_180bf5270"]="g_engine_memory_data"
    ["g_engine_render_data_180bf5280"]="g_engine_render_data"
    ["g_engine_audio_data_180bf5288"]="g_engine_audio_data"
    
    # 系统初始化函数
    ["InitializeGraphicsSystem_18005ab20"]="InitializeGraphicsSystem"
    ["g_graphics_config_data_180941760"]="g_graphics_config_data"
    ["InitializeAudioSystem_1800637c0"]="InitializeAudioSystem"
    ["g_audio_config_data_180941780"]="g_audio_config_data"
    ["InitializeInputSystem_1800637f0"]="InitializeInputSystem"
    ["g_input_system_data_180c91900"]="g_input_system_data"
    ["InitializeNetworkSystem_180045af0"]="InitializeNetworkSystem"
    
    # 网络相关
    ["g_network_socket_data_180c96330"]="g_network_socket_data"
    ["g_network_buffer_data_180c96340"]="g_network_buffer_data"
    ["g_network_config_data_180c96348"]="g_network_config_data"
    ["g_network_state_data_180c96350"]="g_network_state_data"
    ["g_network_timeout_data_180c96360"]="g_network_timeout_data"
    ["g_network_connection_data_180c96368"]="g_network_connection_data"
    ["g_network_buffer_size_180c96318"]="g_network_buffer_size"
    ["g_network_packet_data_180c96338"]="g_network_packet_data"
    
    # 子系统
    ["InitializeSubSystem_18005d5f0"]="InitializeSubSystem"
    ["g_unknown_system_data_180942f90"]="g_unknown_system_data"
    ["g_system_memory_data_180c96220"]="g_system_memory_data"
    ["g_system_flags_180c96358"]="g_system_flags"
    ["g_system_state_data_180bf64f8"]="g_system_state_data"
    ["g_system_config_data_180bf6500"]="g_system_config_data"
    ["g_system_error_data_180bf6508"]="g_system_error_data"
    ["g_system_debug_data_180bf6510"]="g_system_debug_data"
)

# 函数重命名映射
declare -A function_renames=(
    ["FUN_180059ba0"]="InitializeGameDataStructure"
    ["FUN_180059620"]="SetupEngineComponents"
    ["FUN_180044a30"]="ConfigureSystemSettings"
    ["FUN_180046860"]="InitializeMemoryManager"
    ["FUN_18005c060"]="SetupGraphicsContext"
)

# 未知数据重命名
declare -A unknown_renames=(
    ["UNK_180a092c4"]="g_unknown_data_1"
    ["DAT_180be0000"]="g_data_buffer"
    ["UNK_1809fdd78"]="g_unknown_ptr_1"
    ["UNK_1809fddc8"]="g_unknown_ptr_2"
    ["UNK_180a02968"]="g_unknown_ptr_3"
    ["UNK_1809fde10"]="g_unknown_ptr_4"
    ["UNK_1809fdea8"]="g_unknown_ptr_5"
    ["UNK_1809fdf38"]="g_unknown_ptr_6"
    ["UNK_1809fdfd0"]="g_unknown_ptr_7"
    ["UNK_1809fe050"]="g_unknown_ptr_8"
    ["UNK_1809fe058"]="g_unknown_ptr_9"
    ["UNK_1809fe188"]="g_unknown_ptr_10"
    ["UNK_1809fe190"]="g_unknown_ptr_11"
    ["UNK_1809fe198"]="g_unknown_ptr_12"
    ["UNK_1809fe1a0"]="g_unknown_ptr_13"
)

# 应用重命名
echo "开始重命名变量..."

for old_name in "${!variable_renames[@]}"; do
    new_name="${variable_renames[$old_name]}"
    echo "替换 $old_name -> $new_name"
    sed -i "s/\b$old_name\b/$new_name/g" "$TEMP_FILE"
done

echo "开始重命名函数..."

for old_name in "${!function_renames[@]}"; do
    new_name="${function_renames[$old_name]}"
    echo "替换 $old_name -> $new_name"
    sed -i "s/\b$old_name\b/$new_name/g" "$TEMP_FILE"
done

echo "开始重命名未知数据..."

for old_name in "${!unknown_renames[@]}"; do
    new_name="${unknown_renames[$old_name]}"
    echo "替换 $old_name -> $new_name"
    sed -i "s/\b$old_name\b/$new_name/g" "$TEMP_FILE"
done

# 添加注释说明美化
echo "添加注释说明..."
sed -i '3s/.*/\/\/ 01_initialization.c - 初始化系统代码（已美化变量名和函数名）/' "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "代码美化完成！"