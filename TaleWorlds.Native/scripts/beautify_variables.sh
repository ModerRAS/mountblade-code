#!/bin/bash

# 变量名美化脚本 - 为TaleWorlds.Native.dll.c文件提供更有意义的变量名

# 源文件路径
SOURCE_FILE="/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/TaleWorlds.Native.dll.c"

# 备份文件
cp "$SOURCE_FILE" "$SOURCE_FILE.backup.$(date +%Y%m%d_%H%M%S)"

# 替换全局变量名为更有意义的名称
sed -i 's/UNK_18098c790/engine_runtime_data/g' "$SOURCE_FILE"
sed -i 's/UNK_18098c7a0/engine_system_data/g' "$SOURCE_FILE"
sed -i 's/UNK_18098c7b8/game_engine_context/g' "$SOURCE_FILE"
sed -i 's/UNK_18098c7c8/rendering_system_data/g' "$SOURCE_FILE"
sed -i 's/UNK_18098c7d8/physics_engine_data/g' "$SOURCE_FILE"
sed -i 's/UNK_18098c7f0/audio_engine_data/g' "$SOURCE_FILE"
sed -i 's/UNK_18098c810/input_engine_data/g' "$SOURCE_FILE"

# 替换函数前缀
sed -i 's/FUN_18007fcd0/engine_initialize_function/g' "$SOURCE_FILE"
sed -i 's/FUN_180073930/engine_setup_function/g' "$SOURCE_FILE"
sed -i 's/FUN_1809414f0/render_system_init/g' "$SOURCE_FILE"
sed -i 's/FUN_180941590/audio_system_init/g' "$SOURCE_FILE"
sed -i 's/FUN_1809415b0/input_system_init/g' "$SOURCE_FILE"
sed -i 's/FUN_1809415d0/physics_system_init/g' "$SOURCE_FILE"

echo "变量名美化完成"