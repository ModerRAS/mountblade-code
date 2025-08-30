#!/bin/bash

# 批量美化剩余变量
INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 美化更多全局变量
sed -i 's|render_global_345f30|render_global_input_layout|g' "$INPUT_FILE"
sed -i 's|render_global_a1cf38|render_global_primitive_topology|g' "$INPUT_FILE"
sed -i 's|render_global_a1cf50|render_global_index_format|g' "$INPUT_FILE"
sed -i 's|render_global_a1d218|render_global_vertex_stride|g' "$INPUT_FILE"
sed -i 's|render_global_a1d220|render_global_instance_stride|g' "$INPUT_FILE"
sed -i 's|render_global_a1d558|render_global_vertex_offset|g' "$INPUT_FILE"

# 美化更多buffer数据
sed -i 's|render_buffer_data_9935e0|render_buffer_command_list|g' "$INPUT_FILE"
sed -i 's|render_buffer_data_993650|render_buffer_descriptor_set|g' "$INPUT_FILE"
sed -i 's|render_buffer_data_993690|render_buffer_pipeline_layout|g' "$INPUT_FILE"
sed -i 's|render_buffer_data_993980|render_buffer_render_pass|g' "$INPUT_FILE"
sed -i 's|render_buffer_data_9939e0|render_buffer_framebuffer|g' "$INPUT_FILE"

echo "批量美化完成"