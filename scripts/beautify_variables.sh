#!/bin/bash

# 美化变量名脚本 - 用于02_core_engine.c文件
# 将engine_stack_buffer_param_前缀的变量替换为更语义化的名称

# 定义源文件路径
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"

# 备份文件（仅用于调试，实际不需要备份）
# cp "$FILE_PATH" "$FILE_PATH.backup"

# 变量名替换映射
# engine_stack_buffer_param_control -> engine_buffer_control_param
sed -i 's/engine_stack_buffer_param_control/engine_buffer_control_param/g' "$FILE_PATH"

# engine_stack_buffer_param_index -> engine_buffer_index_param  
sed -i 's/engine_stack_buffer_param_index/engine_buffer_index_param/g' "$FILE_PATH"

# engine_stack_buffer_param_result -> engine_buffer_result_param
sed -i 's/engine_stack_buffer_param_result/engine_buffer_result_param/g' "$FILE_PATH"

# engine_stack_buffer_param_context -> engine_buffer_context_param
sed -i 's/engine_stack_buffer_param_context/engine_buffer_context_param/g' "$FILE_PATH"

# engine_stack_buffer_param_network -> engine_buffer_network_param
sed -i 's/engine_stack_buffer_param_network/engine_buffer_network_param/g' "$FILE_PATH"

# engine_stack_buffer_param_memory_offset -> engine_buffer_memory_offset_param
sed -i 's/engine_stack_buffer_param_memory_offset/engine_buffer_memory_offset_param/g' "$FILE_PATH"

# engine_stack_buffer_param_buffer_size -> engine_buffer_size_param
sed -i 's/engine_stack_buffer_param_buffer_size/engine_buffer_size_param/g' "$FILE_PATH"

# engine_stack_buffer_param_data_size -> engine_buffer_data_size_param
sed -i 's/engine_stack_buffer_param_data_size/engine_buffer_data_size_param/g' "$FILE_PATH"

# engine_stack_buffer_param_resource_handle -> engine_buffer_resource_handle_param
sed -i 's/engine_stack_buffer_param_resource_handle/engine_buffer_resource_handle_param/g' "$FILE_PATH"

# engine_stack_buffer_param_file_offset -> engine_buffer_file_offset_param
sed -i 's/engine_stack_buffer_param_file_offset/engine_buffer_file_offset_param/g' "$FILE_PATH"

# engine_stack_buffer_param_face_count -> engine_buffer_face_count_param
sed -i 's/engine_stack_buffer_param_face_count/engine_buffer_face_count_param/g' "$FILE_PATH"

# engine_stack_buffer_param_animation_id -> engine_buffer_animation_id_param
sed -i 's/engine_stack_buffer_param_animation_id/engine_buffer_animation_id_param/g' "$FILE_PATH"

# engine_stack_buffer_param_stream_offset -> engine_buffer_stream_offset_param
sed -i 's/engine_stack_buffer_param_stream_offset/engine_buffer_stream_offset_param/g' "$FILE_PATH"

# engine_stack_buffer_param_texture_id -> engine_buffer_texture_id_param
sed -i 's/engine_stack_buffer_param_texture_id/engine_buffer_texture_id_param/g' "$FILE_PATH"

# engine_stack_buffer_param_shader_id -> engine_buffer_shader_id_param
sed -i 's/engine_stack_buffer_param_shader_id/engine_buffer_shader_id_param/g' "$FILE_PATH"

# engine_stack_buffer_param_vertex_count -> engine_buffer_vertex_count_param
sed -i 's/engine_stack_buffer_param_vertex_count/engine_buffer_vertex_count_param/g' "$FILE_PATH"

# engine_stack_buffer_param_material_id -> engine_buffer_material_id_param
sed -i 's/engine_stack_buffer_param_material_id/engine_buffer_material_id_param/g' "$FILE_PATH"

# 新增的变量名替换
# engine_stack_buffer_param_color_g -> engine_buffer_color_g_param
sed -i 's/engine_stack_buffer_param_color_g/engine_buffer_color_g_param/g' "$FILE_PATH"

# engine_stack_buffer_param_color_r -> engine_buffer_color_r_param
sed -i 's/engine_stack_buffer_param_color_r/engine_buffer_color_r_param/g' "$FILE_PATH"

# engine_stack_buffer_param_flag -> engine_buffer_flag_param
sed -i 's/engine_stack_buffer_param_flag/engine_buffer_flag_param/g' "$FILE_PATH"

# engine_stack_buffer_param_frame_offset -> engine_buffer_frame_offset_param
sed -i 's/engine_stack_buffer_param_frame_offset/engine_buffer_frame_offset_param/g' "$FILE_PATH"

# engine_stack_buffer_param_mask -> engine_buffer_mask_param
sed -i 's/engine_stack_buffer_param_mask/engine_buffer_mask_param/g' "$FILE_PATH"

# engine_stack_buffer_param_offset -> engine_buffer_offset_param
sed -i 's/engine_stack_buffer_param_offset/engine_buffer_offset_param/g' "$FILE_PATH"

# engine_stack_buffer_param_scale -> engine_buffer_scale_param
sed -i 's/engine_stack_buffer_param_scale/engine_buffer_scale_param/g' "$FILE_PATH"

# engine_stack_buffer_param_transform -> engine_buffer_transform_param
sed -i 's/engine_stack_buffer_param_transform/engine_buffer_transform_param/g' "$FILE_PATH"

# engine_stack_buffer_param_value -> engine_buffer_value_param
sed -i 's/engine_stack_buffer_param_value/engine_buffer_value_param/g' "$FILE_PATH"

# engine_stack_buffer_param_vector_w -> engine_buffer_vector_w_param
sed -i 's/engine_stack_buffer_param_vector_w/engine_buffer_vector_w_param/g' "$FILE_PATH"

# engine_stack_buffer_param_vector_x -> engine_buffer_vector_x_param
sed -i 's/engine_stack_buffer_param_vector_x/engine_buffer_vector_x_param/g' "$FILE_PATH"

# engine_stack_buffer_param_vector_y -> engine_buffer_vector_y_param
sed -i 's/engine_stack_buffer_param_vector_y/engine_buffer_vector_y_param/g' "$FILE_PATH"

# engine_stack_buffer_param_vector_z -> engine_buffer_vector_z_param
sed -i 's/engine_stack_buffer_param_vector_z/engine_buffer_vector_z_param/g' "$FILE_PATH"

# engine_stack_buffer_param_vertex_buffer -> engine_buffer_vertex_buffer_param
sed -i 's/engine_stack_buffer_param_vertex_buffer/engine_buffer_vertex_buffer_param/g' "$FILE_PATH"

# engine_stack_buffer_param_vertex_data -> engine_buffer_vertex_data_param
sed -i 's/engine_stack_buffer_param_vertex_data/engine_buffer_vertex_data_param/g' "$FILE_PATH"

# 对于包含十六进制数字的变量名，保持原名但添加注释说明
# engine_stack_buffer_param_d68 -> engine_buffer_param_d68 (保留原名)
# engine_stack_buffer_param_d78 -> engine_buffer_param_d78 (保留原名)
# engine_stack_buffer_param_e0 -> engine_buffer_param_e0 (保留原名)
# engine_stack_buffer_param_e88 -> engine_buffer_param_e88 (保留原名)
# engine_stack_buffer_param_ec8 -> engine_buffer_param_ec8 (保留原名)
# engine_stack_buffer_param_ed0 -> engine_buffer_param_ed0 (保留原名)
# engine_stack_buffer_param_ee8 -> engine_buffer_param_ee8 (保留原名)
# engine_stack_buffer_param_ef0 -> engine_buffer_param_ef0 (保留原名)

echo "变量名美化完成"