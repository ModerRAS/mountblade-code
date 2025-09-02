#!/bin/bash

# 美化UI系统变量名的简单脚本
# 只处理一些简单的变量名替换

# 变量映射
declare -A var_map=(
    ["AnimationFrameIndex"]="animationFrameIndex"
    ["cleanupCounter"]="cleanupCounter"
    ["longlongVariable3"]="systemContext"
    ["pAnimationSize"]="animationSizePointer"
    ["fVar5"]="floatValue5"
)

# 处理文件
input_file="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
temp_file="/tmp/ui_system_vars_temp.c"

# 复制文件
cp "$input_file" "$temp_file"

# 替换变量名
for old_var in "${!var_map[@]}"; do
    new_var="${var_map[$old_var]}"
    sed -i "s/\b$old_var\b/$new_var/g" "$temp_file"
done

# 写回原文件
mv "$temp_file" "$input_file"

echo "变量名美化完成"