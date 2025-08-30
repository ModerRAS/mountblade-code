#!/bin/bash

# 01_initialization.c 美化脚本（第二批次）
# 将剩余的非语义化变量名替换为语义化变量名

# 定义源文件路径
SOURCE_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"

# 替换 UNK_180277350 为 g_system_heap
sed -i 's/UNK_180277350/g_system_heap/g' "$SOURCE_FILE"

# 替换 UNK_180a06dc8 为 g_audio_buffer
sed -i 's/UNK_180a06dc8/g_audio_buffer/g' "$SOURCE_FILE"

# 替换 UNK_180a071e8 为 g_graphics_buffer
sed -i 's/UNK_180a071e8/g_graphics_buffer/g' "$SOURCE_FILE"

# 替换 UNK_180a071c8 为 g_network_buffer
sed -i 's/UNK_180a071c8/g_network_buffer/g' "$SOURCE_FILE"

# 替换 UNK_180a071d8 为 g_resource_buffer
sed -i 's/UNK_180a071d8/g_resource_buffer/g' "$SOURCE_FILE"

# 替换 FUN_180049b30 为 InitializeGraphicsSystem
sed -i 's/FUN_180049b30/InitializeGraphicsSystem/g' "$SOURCE_FILE"

# 替换 FUN_18004ca00 为 InitializeAudioSystem
sed -i 's/FUN_18004ca00/InitializeAudioSystem/g' "$SOURCE_FILE"

# 替换 UNK_180a08fd0 为 g_shader_manager
sed -i 's/UNK_180a08fd0/g_shader_manager/g' "$SOURCE_FILE"

# 替换 UNK_180a09008 为 g_texture_manager
sed -i 's/UNK_180a09008/g_texture_manager/g' "$SOURCE_FILE"

# 替换 UNK_180a09048 为 g_mesh_manager
sed -i 's/UNK_180a09048/g_mesh_manager/g' "$SOURCE_FILE"

# 替换 UNK_180a09078 为 g_material_manager
sed -i 's/UNK_180a09078/g_material_manager/g' "$SOURCE_FILE"

# 替换 UNK_180a090c0 为 g_light_manager
sed -i 's/UNK_180a090c0/g_light_manager/g' "$SOURCE_FILE"

# 替换 UNK_180a090e8 为 g_camera_manager
sed -i 's/UNK_180a090e8/g_camera_manager/g' "$SOURCE_FILE"

# 替换 UNK_180a09118 为 g_render_target
sed -i 's/UNK_180a09118/g_render_target/g' "$SOURCE_FILE"

# 替换 UNK_180a09140 为 g_depth_buffer
sed -i 's/UNK_180a09140/g_depth_buffer/g' "$SOURCE_FILE"

# 替换 UNK_180a094b0 为 g_stencil_buffer
sed -i 's/UNK_180a094b0/g_stencil_buffer/g' "$SOURCE_FILE"

# 替换 UNK_180a094e8 为 g_frame_buffer
sed -i 's/UNK_180a094e8/g_frame_buffer/g' "$SOURCE_FILE"

# 替换 UNK_180a09520 为 g_swap_chain
sed -i 's/UNK_180a09520/g_swap_chain/g' "$SOURCE_FILE"

echo "第二批次变量名替换完成"