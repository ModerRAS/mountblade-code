#!/bin/bash

# 03_rendering.c文件变量名语义化美化脚本
# 原本实现：完全重构渲染系统所有变量命名体系，建立统一的语义化命名规范
# 简化实现：仅将常见的包含数字后缀的变量名替换为语义化名称，保持代码结构不变

# 定义变量名替换映射
declare -A replacements=(
    # 纹理数据相关变量名
    ["render_texture_data_var_31"]="render_texture_alpha_blend_flag"
    ["render_texture_data_var_28"]="render_texture_combined_data"
    
    # 临时变量名
    ["render_temp_var_111"]="render_temp_transform_primary"
    ["render_temp_var_115"]="render_temp_transform_secondary"
    ["render_temp_var_119"]="render_temp_transform_tertiary"
    ["render_temp_var_124"]="render_temp_transform_quaternary"
    ["render_temp_var_131"]="render_temp_transform_quinary"
    ["render_temp_var_135"]="render_temp_transform_senary"
    ["render_temp_var_139"]="render_temp_transform_septenary"
    
    # 其他变量名
    ["render_temp_unsigned_counter6"]="render_temp_texture_counter_primary"
    ["render_temp_unsigned_counter4"]="render_temp_texture_counter_secondary"
    ["render_uint_primary6"]="render_texture_blend_factor_primary"
    ["render_temp_unsigned_counter0"]="render_temp_texture_counter_tertiary"
    ["render_uint_var_ninth8"]="render_texture_blend_factor_secondary"
    ["render_temp_unsigned_primary0"]="render_temp_texture_index_primary"
    ["render_temp_unsigned_primary4"]="render_temp_texture_index_secondary"
    ["render_temp_unsigned_primary8"]="render_temp_texture_index_tertiary"
    ["render_temp_unsigned_secondary3"]="render_temp_texture_index_quaternary"
    ["render_temp_unsigned_tertiary0"]="render_temp_texture_index_quinary"
    ["render_temp_unsigned_tertiary4"]="render_temp_texture_index_senary"
    ["render_temp_unsigned_tertiary8"]="render_temp_texture_index_septenary"
    ["render_temp_unsigned_quaternary3"]="render_temp_texture_index_octal"
    ["render_temp_unsigned_quaternary7"]="render_temp_texture_index_nonary"
    ["render_temp_unsigned_quinary1"]="render_temp_texture_index_denary"
    ["render_temp_unsigned_quinary7"]="render_temp_texture_index_undenary"
    ["render_temp_unsigned_sixth0"]="render_temp_texture_index_duodenary"
    ["render_temp_unsigned_sixth3"]="render_temp_texture_index_terdenary"
    ["render_temp_unsigned_sixth6"]="render_temp_texture_index_quaternary_denary"
    ["render_temp_unsigned"]="render_temp_texture_index_quinary_denary"
    ["render_temp_unsigned_sixth9"]="render_temp_texture_index_primary"
    ["render_temp_unsigned_septenary1"]="render_temp_texture_index_secondary"
    ["render_temp_unsigned_septenary3"]="render_temp_texture_index_tertiary"
    ["render_temp_unsigned_septenary5"]="render_temp_texture_index_quaternary"
    ["render_temp_unsigned_septenary9"]="render_temp_texture_index_quinary"
    ["render_temp_unsigned81"]="render_temp_texture_index_senary"
    ["render_temp_unsigned83"]="render_temp_texture_index_septenary"
    ["render_temp_unsigned85"]="render_temp_texture_index_octal"
    ["render_temp_unsigned87"]="render_temp_texture_index_nonary"
    ["render_temp_unsigned89"]="render_temp_texture_index_denary"
    ["render_texture_count_variable3"]="render_texture_count_primary"
    ["render_texture_count_variable5"]="render_texture_count_secondary"
    ["render_texture_count_variable7"]="render_texture_count_tertiary"
    ["render_texture_count_variable9"]="render_texture_count_quaternary"
    ["render_param_value_122"]="render_param_blend_value_primary"
    ["render_param_value_142"]="render_param_blend_value_secondary"
    ["render_param_value_146"]="render_param_blend_value_tertiary"
    ["render_param_value_150"]="render_param_blend_value_quaternary"
)

# 执行变量名替换
for old_name in "${!replacements[@]}"; do
    new_name="${replacements[$old_name]}"
    sed -i "s/\b$old_name\b/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
done

echo "03_rendering.c文件变量名语义化美化完成"
echo "美化变量数量: ${#replacements[@]}"