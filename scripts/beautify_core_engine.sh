#!/bin/bash

# 核心引擎函数名美化脚本
# 2025年8月31日 - 美化核心引擎系统中的函数名
# 简化实现：仅将常见的包含数字的函数名替换为语义化名称

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"

# 备份原文件
cp "$INPUT_FILE" "${INPUT_FILE}.backup"

# 美化engine_array_initializer_function系列
sed -i 's/engine_array_initializer_function_5/engine_initialize_texture_arrays/g' "$INPUT_FILE"
sed -i 's/engine_array_initializer_function_6/engine_initialize_shader_arrays/g' "$INPUT_FILE"
sed -i 's/engine_array_initializer_function_7/engine_initialize_buffer_arrays/g' "$INPUT_FILE"
sed -i 's/engine_array_initializer_function_8/engine_initialize_vertex_arrays/g' "$INPUT_FILE"
sed -i 's/engine_array_initializer_function_9/engine_initialize_index_arrays/g' "$INPUT_FILE"
sed -i 's/engine_array_initializer_function_10/engine_initialize_material_arrays/g' "$INPUT_FILE"
sed -i 's/engine_array_initializer_function_11/engine_initialize_light_arrays/g' "$INPUT_FILE"
sed -i 's/engine_array_initializer_function_12/engine_initialize_camera_arrays/g' "$INPUT_FILE"
sed -i 's/engine_array_initializer_function_13/engine_initialize_transform_arrays/g' "$INPUT_FILE"
sed -i 's/engine_array_initializer_function_14/engine_initialize_animation_arrays/g' "$INPUT_FILE"
sed -i 's/engine_array_initializer_function_15/engine_initialize_particle_arrays/g' "$INPUT_FILE"
sed -i 's/engine_array_initializer_function_16/engine_initialize_sound_arrays/g' "$INPUT_FILE"
sed -i 's/engine_array_initializer_function_18/engine_initialize_physics_arrays/g' "$INPUT_FILE"
sed -i 's/engine_array_initializer_function_19/engine_initialize_collision_arrays/g' "$INPUT_FILE"
sed -i 's/engine_array_initializer_function_20/engine_initialize_input_arrays/g' "$INPUT_FILE"
sed -i 's/engine_array_initializer_function_21/engine_initialize_ui_arrays/g' "$INPUT_FILE"
sed -i 's/engine_array_initializer_function_22/engine_initialize_network_arrays/g' "$INPUT_FILE"
sed -i 's/engine_array_initializer_function_23/engine_initialize_resource_arrays/g' "$INPUT_FILE"
sed -i 's/engine_array_initializer_function_24/engine_initialize_memory_arrays/g' "$INPUT_FILE"
sed -i 's/engine_array_initializer_function_25/engine_initialize_system_arrays/g' "$INPUT_FILE"

echo "核心引擎函数名美化完成"