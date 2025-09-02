#!/bin/bash

# 批量重命名06_utilities.c中的变量名

# 定义变量名映射
declare -A variable_map=(
    ["StackBuffer18"]="ResourceAccessValidationBuffer"
    ["StackBuffer94"]="SecondaryHashValidationBuffer"
    ["RegisterStorageBuffer2"]="SecondaryRegisterStorageBuffer"
    ["RegisterStorageBuffer3"]="TertiaryRegisterStorageBuffer"
)

# 遍历映射并替换
for old_name in "${!variable_map[@]}"; do
    new_name="${variable_map[$old_name]}"
    echo "替换 $old_name 为 $new_name"
    sed -i "s/\b$old_name\b/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
done

echo "变量名替换完成"