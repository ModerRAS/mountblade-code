#!/bin/bash

# 网络系统第二批次变量名美化脚本
# 继续美化剩余的临时变量名

# 定义替换规则
declare -A replacements=(
    ["bStack_c8"]="network_validation_status_flag"
    ["bStack_f0"]="network_byte_buffer_f0"
    ["bStack_ef"]="network_byte_buffer_ef"
    ["bStack_ee"]="network_byte_buffer_ee"
    ["bStack_ed"]="network_byte_buffer_ed"
    ["bStack_ec"]="network_byte_buffer_ec"
    ["bStack_eb"]="network_byte_buffer_eb"
    ["bStack_ea"]="network_byte_buffer_ea"
    ["bStack_e9"]="network_byte_buffer_e9"
    ["network_stack_templong_main"]="network_stack_temporary_long_main"
    ["network_stack_templong_config"]="network_stack_temporary_long_config"
    ["network_stack_templong_seventy_eight"]="network_stack_temporary_long_seventy_eight"
    ["network_stack_templong_validation"]="network_stack_temporary_long_validation"
    ["network_stack_templong_checksum_value"]="network_stack_temporary_long_checksum"
    ["network_stack_templong_secondary_buffer"]="network_stack_temporary_long_secondary_buffer"
)

# 应用替换规则
for old_name in "${!replacements[@]}"; do
    new_name="${replacements[$old_name]}"
    echo "替换: $old_name -> $new_name"
    sed -i "s/$old_name/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
done

echo "网络系统第二批次变量名美化完成"