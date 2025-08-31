#!/bin/bash

# UI系统变量名美化脚本
# 用于将非语义化变量名替换为语义化变量名

echo "开始美化UI系统变量名..."

# 定义变量替换映射
declare -A VAR_MAP=(
    # 字符变量美化
    ["charuiui_stack_var_var_218"]="ui_stack_character_primary"
    ["charuiui_stack_var_var_217"]="ui_stack_character_secondary"
    ["charuiui_stack_var_var_216"]="ui_stack_character_ternary"
    ["charuiui_stack_var_var_54"]="ui_stack_character_control"
    
    # 整数变量美化
    ["ui_inputuiui_stack_var_var_110"]="ui_stack_integer_offset_110"
    ["ui_inputuiui_stack_var_var_118"]="ui_stack_integer_offset_118"
    
    # 浮点变量美化
    ["ui_ui_stack_float_temp_value_c"]="ui_stack_coordinate_x"
    ["ui_ui_stack_float_temp_value_d"]="ui_stack_coordinate_y"
    ["ui_inputuiui_stack_var_var_40"]="ui_stack_transition_alpha"
    ["ui_inputuiui_stack_var_var_30"]="ui_stack_data_offset_30"
    
    # 临时变量美化
    ["ui_stack_temp_228"]="ui_stack_temp_offset_228"
    ["ui_stack_temp_220"]="ui_stack_temp_offset_220"
    ["ui_stack_temp_215"]="ui_stack_temp_offset_215"
    ["ui_stack_temp_1fc"]="ui_stack_temp_offset_1fc"
    ["ui_stack_temp_1ec"]="ui_stack_temp_offset_1ec"
    
    # 浮点临时变量美化
    ["ui_stack_float_208"]="ui_stack_float_offset_208"
    ["ui_stack_float_204"]="ui_stack_float_offset_204"
    ["ui_stack_float_200"]="ui_stack_float_offset_200"
    ["ui_stack_float_1f8"]="ui_stack_float_offset_1f8"
    ["ui_stack_float_1f4"]="ui_stack_float_offset_1f4"
    ["ui_stack_float_1f0"]="ui_stack_float_offset_1f0"
    ["ui_stack_float_1e8"]="ui_stack_float_offset_1e8"
)

# 执行变量替换
for old_var in "${!VAR_MAP[@]}"; do
    new_var="${VAR_MAP[$old_var]}"
    echo "替换: $old_var -> $new_var"
    sed -i "s/\b$old_var\b/$new_var/g" "/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
done

echo "UI系统变量名美化完成"