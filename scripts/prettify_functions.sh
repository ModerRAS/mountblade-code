#!/bin/bash

# 函数名美化脚本
# 将非语义化的函数名替换为语义化的名称

# 定义要替换的函数名映射
declare -A function_replacements=(
    ["FUN_18011e520"]="engine_calculate_render_transform_matrix"
    ["FUN_18011e8f0"]="engine_process_render_vertex_data"
    ["FUN_18011ed10"]="engine_apply_render_scaling_factor"
    ["FUN_18011f070"]="engine_compute_render_projection_matrix"
    ["FUN_18013f220"]="engine_process_resource_allocation"
    ["FUN_18013f590"]="engine_validate_resource_handle"
    ["FUN_18014a2d0"]="engine_initialize_texture_manager"
    ["FUN_18014aa50"]="engine_setup_texture_mapping"
    ["FUN_180150730"]="engine_create_render_buffer"
    ["FUN_1801507b0"]="engine_allocate_render_buffer"
    ["FUN_1801566b0"]="engine_setup_shader_program"
    ["FUN_180157b70"]="engine_compile_shader_source"
    ["FUN_180157ef0"]="engine_link_shader_program"
    ["FUN_1801580f0"]="engine_validate_shader_program"
    ["FUN_180159820"]="engine_create_vertex_buffer"
    ["FUN_180159870"]="engine_create_index_buffer"
    ["FUN_18015b2b0"]="engine_setup_vertex_attributes"
    ["FUN_18015c2b0"]="engine_configure_render_state"
    ["FUN_180160860"]="engine_process_render_command"
    ["FUN_180160af0"]="engine_execute_render_command"
    ["FUN_180160d20"]="engine_submit_render_batch"
    ["FUN_180161170"]="engine_flush_render_queue"
    ["FUN_1801614d0"]="engine_clear_render_buffer"
    ["FUN_1801615a0"]="engine_swap_render_buffers"
    ["FUN_1801624e0"]="engine_present_render_frame"
    ["FUN_180165950"]="engine_create_render_context"
    ["FUN_180165bb0"]="engine_destroy_render_context"
    ["FUN_180165f80"]="engine_bind_render_context"
    ["FUN_1801661b0"]="engine_unbind_render_context"
    ["FUN_180166580"]="engine_set_render_viewport"
    ["FUN_180166950"]="engine_set_render_scissor"
    ["FUN_180166b10"]="engine_enable_render_feature"
    ["FUN_1801672e0"]="engine_disable_render_feature"
    ["FUN_180167f80"]="engine_set_render_blend_mode"
    ["FUN_1801681e0"]="engine_set_render_depth_mode"
    ["FUN_180168430"]="engine_set_render_stencil_mode"
    ["FUN_180168590"]="engine_set_render_cull_mode"
    ["FUN_180168670"]="engine_set_render_fill_mode"
    ["FUN_180168840"]="engine_set_render_polygon_offset"
    ["FUN_180168960"]="engine_create_render_texture"
    ["FUN_18016a6c0"]="engine_destroy_render_texture"
    ["FUN_18016a740"]="engine_update_render_texture"
    ["FUN_18016d870"]="engine_create_render_sampler"
    ["FUN_18016d910"]="engine_destroy_render_sampler"
    ["FUN_18016dbb0"]="engine_set_render_sampler_state"
    ["FUN_18016de20"]="engine_bind_render_sampler"
    ["FUN_18016e320"]="engine_create_render_shader"
    ["FUN_18016e450"]="engine_destroy_render_shader"
    ["FUN_18016e630"]="engine_compile_render_shader"
    ["FUN_18016e6a0"]="engine_link_render_shader"
    ["FUN_18016e850"]="engine_validate_render_shader"
    ["FUN_18016e940"]="engine_set_render_uniform"
)

# 获取文件路径
file_path="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"

# 备份原始文件
cp "$file_path" "$file_path.backup"

# 进行函数名替换
for old_name in "${!function_replacements[@]}"; do
    new_name="${function_replacements[$old_name]}"
    
    # 使用sed进行替换
    sed -i "s/\b$old_name\b/$new_name/g" "$file_path"
    
    echo "替换函数名: $old_name -> $new_name"
done

echo "函数名美化完成"