#!/bin/bash

# 渲染系统变量名美化脚本
# 简化实现：将常见的非语义化变量名替换为语义化名称
# 原本实现：完全重构所有变量命名体系

# 定义美化规则
# 变量名美化规则
declare -A VAR_REPLACEMENTS=(
    # 渲染上下文相关变量
    ["render_context_stack_var_buffer_size"]="render_context_buffer_size"
    ["render_context_stack_var_meta_data"]="render_context_metadata"
    ["render_context_stack_var_control_code"]="render_context_control_code"
    ["render_context_stack_var_alternate_code"]="render_context_alternate_code"
    
    # 渲染设备相关变量
    ["render_device_object_info"]="render_device_info"
    ["render_device_object_capabilities"]="render_device_capabilities"
    ["render_device_object_limits"]="render_device_limits"
    ["render_device_object_features"]="render_device_features"
    ["render_device_object_extensions"]="render_device_extensions"
    
    # 渲染纹理相关变量
    ["render_texture_object_loader"]="render_texture_loader"
    ["render_texture_object_encoder"]="render_texture_encoder"
    ["render_texture_object_decoder"]="render_texture_decoder"
    ["render_texture_object_compressor"]="render_texture_compressor"
    ["render_texture_object_filter"]="render_texture_filter"
    ["render_texture_object_format"]="render_texture_format"
    ["render_texture_object_usage"]="render_texture_usage"
    ["render_texture_object_mipmaps"]="render_texture_mipmaps"
    ["render_texture_object_bind"]="render_texture_bind"
    ["render_texture_multisample"]="render_texture_multisample"
    ["render_texture_object_group"]="render_texture_group"
    
    # 渲染着色器相关变量
    ["render_shader_object_compiler"]="render_shader_compiler"
    ["render_shader_object_linker"]="render_shader_linker"
    ["render_shader_object_reflector"]="render_shader_reflector"
    ["render_shader_object_debugger"]="render_shader_debugger"
    ["render_shader_object_optimizer"]="render_shader_optimizer"
    ["render_shader_object_validator"]="render_shader_validator"
    ["render_shader_object_cache"]="render_shader_cache"
    ["render_shader_object_target"]="render_shader_target"
    ["render_shader_object_entry"]="render_shader_entry"
    ["render_shader_object_version"]="render_shader_version"
    ["render_shader_object_module"]="render_shader_module"
    ["render_shader_object_features"]="render_shader_features"
    ["render_shader_object_extensions"]="render_shader_extensions"
    
    # 渲染缓冲区相关变量
    ["render_buffer_object_layout"]="render_buffer_layout"
    ["render_buffer_object_stride"]="render_buffer_stride"
    ["render_buffer_object_flags"]="render_buffer_flags"
    ["render_buffer_object_offset"]="render_buffer_offset"
    ["render_buffer_object_size"]="render_buffer_size"
    ["render_buffer_object_usage"]="render_buffer_usage"
    
    # 渲染管线相关变量
    ["render_pipeline_state_object"]="render_pipeline_state"
    ["render_swap_chain_object"]="render_swap_chain"
    ["render_swap_chain_object_desc"]="render_swap_chain_desc"
    ["render_swap_chain_object_format"]="render_swap_chain_format"
    ["render_swap_chain_object_buffer"]="render_swap_chain_buffer"
    ["render_swap_chain_object_index"]="render_swap_chain_index"
    
    # 渲染目标相关变量
    ["render_render_target_object"]="render_render_target"
    ["render_depth_buffer_storage"]="render_depth_buffer"
    ["render_context_object_global"]="render_global_context"
    ["render_main_system"]="render_system"
    ["render_create_device"]="render_device_creator"
    ["render_create_swap_chain"]="render_swap_chain_creator"
    
    # 其他渲染变量
    ["render_legacy_system_state"]="render_legacy_state"
    ["render_buffer_pointer"]="render_buffer_ptr"
    ["render_display_mode"]="render_display"
    ["render_display_format"]="render_format"
    ["render_texture_handle_value"]="render_texture_handle"
    ["render_main_context_object_ptr"]="render_main_context_ptr"
    ["render_init_flag"]="render_initialized"
    ["render_state_flag"]="render_state"
    ["render_init_context_object"]="render_context_initializer"
    ["render_compute_shader"]="render_shader_computer"
)

# 应用变量名替换
for old_name in "${!VAR_REPLACEMENTS[@]}"; do
    new_name="${VAR_REPLACEMENTS[$old_name]}"
    
    # 使用sed进行替换，只替换变量声明和使用
    sed -i "s/\b$old_name\b/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
done

echo "渲染系统变量名美化完成"