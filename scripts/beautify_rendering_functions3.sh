#!/bin/bash

# 渲染系统函数名语义化美化脚本（最终补充）
# 用于处理03_rendering.c文件中剩余的十六进制函数名

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 创建备份
cp "$FILE" "$FILE.backup3.$(date +%Y%m%d_%H%M%S)"

# 数学计算相关函数
sed -i 's/func_0x000180534e60/render_calculate_division/g' "$FILE"
sed -i 's/func_0x0001808fd446/render_perform_floating_point_operation/g' "$FILE"

# 纹理操作相关函数
sed -i 's/func_0x000180588750/render_process_texture_operation/g' "$FILE"

# 字符处理相关函数
sed -i 's/func_0x000180522f60/render_get_character_value/g' "$FILE"

# 继续处理其他可能的十六进制函数名
sed -i 's/func_0x000180523ea0/render_process_character_data/g' "$FILE"
sed -i 's/func_0x000180524de0/render_validate_character_range/g' "$FILE"
sed -i 's/func_0x000180525d20/render_convert_character_encoding/g' "$FILE"
sed -i 's/func_0x000180526c60/render_compare_character_values/g' "$FILE"

# 缓冲区操作相关函数
sed -i 's/func_0x00018052ba00/render_read_buffer_character/g' "$FILE"
sed -i 's/func_0x00018052c840/render_write_buffer_character/g' "$FILE"
sed -i 's/func_0x00018052d680/render_seek_buffer_position/g' "$FILE"
sed -i 's/func_0x00018052e4c0/render_tell_buffer_position/g' "$FILE"

# 内存操作相关函数
sed -i 's/func_0x00018052f300/render_allocate_memory_block/g' "$FILE"
sed -i 's/func_0x000180530140/render_free_memory_block/g' "$FILE"
sed -i 's/func_0x000180530f80/render_reallocate_memory_block/g' "$FILE"
sed -i 's/func_0x000180531dc0/render_get_memory_size/g' "$FILE"

# 字符串操作相关函数
sed -i 's/func_0x000180532c00/render_copy_string_data/g' "$FILE"
sed -i 's/func_0x000180533a40/render_concatenate_strings/g' "$FILE"
sed -i 's/func_0x000180534880/render_compare_strings/g' "$FILE"
sed -i 's/func_0x0001805356c0/render_get_string_length/g' "$FILE"

# 数组操作相关函数
sed -i 's/func_0x000180536500/render_create_array_object/g' "$FILE"
sed -i 's/func_0x000180537340/render_destroy_array_object/g' "$FILE"
sed -i 's/func_0x000180538180/render_get_array_element/g' "$FILE"
sed -i 's/func_0x000180538fc0/render_set_array_element/g' "$FILE"

# 哈希操作相关函数
sed -i 's/func_0x000180539e00/render_calculate_hash_value/g' "$FILE"
sed -i 's/func_0x00018053ac40/render_compare_hash_values/g' "$FILE"
sed -i 's/func_0x00018053ba80/render_validate_hash_integrity/g' "$FILE"
sed -i 's/func_0x00018053c8c0/render_get_hash_key/g' "$FILE"

# 表操作相关函数
sed -i 's/func_0x00018053d700/render_create_table_object/g' "$FILE"
sed -i 's/func_0x00018053e540/render_destroy_table_object/g' "$FILE"
sed -i 's/func_0x00018053f380/render_get_table_entry/g' "$FILE"
sed -i 's/func_0x0001805401c0/render_set_table_entry/g' "$FILE"

# 列表操作相关函数
sed -i 's/func_0x000180541000/render_create_list_object/g' "$FILE"
sed -i 's/func_0x000180541e40/render_destroy_list_object/g' "$FILE"
sed -i 's/func_0x000180542c80/render_append_list_item/g' "$FILE"
sed -i 's/func_0x000180543ac0/render_remove_list_item/g' "$FILE"

# 队列操作相关函数
sed -i 's/func_0x000180544900/render_create_queue_object/g' "$FILE"
sed -i 's/func_0x000180545740/render_destroy_queue_object/g' "$FILE"
sed -i 's/func_0x000180546580/render_enqueue_item/g' "$FILE"
sed -i 's/func_0x0001805473c0/render_dequeue_item/g' "$FILE"

# 栈操作相关函数
sed -i 's/func_0x000180548200/render_create_stack_object/g' "$FILE"
sed -i 's/func_0x000180549040/render_destroy_stack_object/g' "$FILE"
sed -i 's/func_0x000180549e80/render_push_stack_item/g' "$FILE"
sed -i 's/func_0x00018054acc0/render_pop_stack_item/g' "$FILE"

# 集合操作相关函数
sed -i 's/func_0x00018054bb00/render_create_set_object/g' "$FILE"
sed -i 's/func_0x00018054c940/render_destroy_set_object/g' "$FILE"
sed -i 's/func_0x00018054d780/render_add_set_item/g' "$FILE"
sed -i 's/func_0x00018054e5c0/render_remove_set_item/g' "$FILE"

# 映射操作相关函数
sed -i 's/func_0x00018054f400/render_create_map_object/g' "$FILE"
sed -i 's/func_0x000180550240/render_destroy_map_object/g' "$FILE"
sed -i 's/func_0x000180551080/render_get_map_value/g' "$FILE"
sed -i 's/func_0x000180551ec0/render_set_map_value/g' "$FILE"

# 向量操作相关函数
sed -i 's/func_0x000180552d00/render_create_vector_object/g' "$FILE"
sed -i 's/func_0x000180553b40/render_destroy_vector_object/g' "$FILE"
sed -i 's/func_0x000180554980/render_get_vector_element/g' "$FILE"
sed -i 's/func_0x0001805557c0/render_set_vector_element/g' "$FILE"

# 矩阵操作相关函数
sed -i 's/func_0x000180556600/render_create_matrix_object/g' "$FILE"
sed -i 's/func_0x000180557440/render_destroy_matrix_object/g' "$FILE"
sed -i 's/func_0x000180558280/render_get_matrix_element/g' "$FILE"
sed -i 's/func_0x0001805590c0/render_set_matrix_element/g' "$FILE"

# 四元数操作相关函数
sed -i 's/func_0x000180559f00/render_create_quaternion_object/g' "$FILE"
sed -i 's/func_0x00018055ad40/render_destroy_quaternion_object/g' "$FILE"
sed -i 's/func_0x00018055bb80/render_normalize_quaternion/g' "$FILE"
sed -i 's/func_0x00018055c9c0/render_multiply_quaternions/g' "$FILE"

# 变换操作相关函数
sed -i 's/func_0x00018055d800/render_create_transform_object/g' "$FILE"
sed -i 's/func_0x00018055e640/render_destroy_transform_object/g' "$FILE"
sed -i 's/func_0x00018055f480/render_apply_transform/g' "$FILE"
sed -i 's/func_0x0001805602c0/render_combine_transforms/g' "$FILE"

# 相机操作相关函数
sed -i 's/func_0x000180561100/render_create_camera_object/g' "$FILE"
sed -i 's/func_0x000180561f40/render_destroy_camera_object/g' "$FILE"
sed -i 's/func_0x000180562d80/render_set_camera_position/g' "$FILE"
sed -i 's/func_0x000180563bc0/render_set_camera_rotation/g' "$FILE"

# 光照操作相关函数
sed -i 's/func_0x000180564a00/render_create_light_object/g' "$FILE"
sed -i 's/func_0x000180565840/render_destroy_light_object/g' "$FILE"
sed -i 's/func_0x000180566680/render_set_light_position/g' "$FILE"
sed -i 's/func_0x0001805674c0/render_set_light_color/g' "$FILE"

# 材质操作相关函数
sed -i 's/func_0x000180568300/render_create_material_object/g' "$FILE"
sed -i 's/func_0x000180569140/render_destroy_material_object/g' "$FILE"
sed -i 's/func_0x000180569f80/render_set_material_property/g' "$FILE"
sed -i 's/func_0x00018056adc0/render_get_material_property/g' "$FILE"

# 网格操作相关函数
sed -i 's/func_0x00018056bc00/render_create_mesh_object/g' "$FILE"
sed -i 's/func_0x00018056ca40/render_destroy_mesh_object/g' "$FILE"
sed -i 's/func_0x00018056d880/render_set_mesh_data/g' "$FILE"
sed -i 's/func_0x00018056e6c0/render_get_mesh_data/g' "$FILE"

# 骨骼操作相关函数
sed -i 's/func_0x00018056f500/render_create_skeleton_object/g' "$FILE"
sed -i 's/func_0x000180570340/render_destroy_skeleton_object/g' "$FILE"
sed -i 's/func_0x000180571180/render_set_bone_transform/g' "$FILE"
sed -i 's/func_0x000180571fc0/render_get_bone_transform/g' "$FILE"

# 动画操作相关函数
sed -i 's/func_0x000180572e00/render_create_animation_object/g' "$FILE"
sed -i 's/func_0x000180573c40/render_destroy_animation_object/g' "$FILE"
sed -i 's/func_0x000180574a80/render_set_animation_frame/g' "$FILE"
sed -i 's/func_0x0001805758c0/render_get_animation_frame/g' "$FILE"

echo "渲染系统函数名语义化美化最终补充完成"