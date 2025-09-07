#!/bin/bash

# 批量美化Unwind_函数的脚本
# 为Unwind_18090d160到Unwind_18090d4d0等函数提供语义化名称

# 定义函数映射
declare -A function_map=(
    ["Unwind_18090d160"]="ManageResourceReferenceCountA0"
    ["Unwind_18090d170"]="ManageResourceReferenceCountA1"
    ["Unwind_18090d180"]="ManageResourceReferenceCountA2"
    ["Unwind_18090d190"]="ExecuteResourceCallbackA0"
    ["Unwind_18090d1a0"]="ManageResourceReferenceCountA3"
    ["Unwind_18090d1b0"]="ManageResourceReferenceCountC0"
    ["Unwind_18090d1c0"]="ManageResourceReferenceCountC1"
    ["Unwind_18090d1d0"]="ManageResourceReferenceCountC2"
    ["Unwind_18090d1e0"]="ManageResourceReferenceCountC3"
    ["Unwind_18090d1f0"]="ManageResourceReferenceCountC4"
    ["Unwind_18090d200"]="ManageResourceReferenceCountC5"
    ["Unwind_18090d210"]="ManageResourceReferenceCountC6"
    ["Unwind_18090d220"]="ManageResourceReferenceCountC7"
    ["Unwind_18090d230"]="ManageResourceReferenceCountC8"
    ["Unwind_18090d240"]="ManageResourceReferenceCountC9"
    ["Unwind_18090d250"]="ManageResourceReferenceCountD0"
    ["Unwind_18090d260"]="ManageResourceReferenceCountD1"
    ["Unwind_18090d270"]="ManageResourceReferenceCountD2"
    ["Unwind_18090d280"]="ManageResourceReferenceCountD3"
    ["Unwind_18090d290"]="ManageResourceReferenceCountD4"
    ["Unwind_18090d2a0"]="ManageResourceReferenceCountD5"
    ["Unwind_18090d2b0"]="ManageResourceReferenceCountD6"
    ["Unwind_18090d2c0"]="ManageResourceReferenceCountD7"
    ["Unwind_18090d2d0"]="ManageResourceReferenceCountD8"
    ["Unwind_18090d2e0"]="ManageResourceReferenceCountD9"
    ["Unwind_18090d2f0"]="ManageResourceReferenceCountE0"
    ["Unwind_18090d300"]="ManageResourceReferenceCountE1"
    ["Unwind_18090d310"]="ManageResourceReferenceCountE2"
    ["Unwind_18090d320"]="ManageResourceReferenceCountE3"
    ["Unwind_18090d330"]="ManageResourceReferenceCountE4"
    ["Unwind_18090d340"]="ManageResourceReferenceCountE5"
    ["Unwind_18090d350"]="ManageResourceReferenceCountE6"
    ["Unwind_18090d360"]="ManageResourceReferenceCountE7"
    ["Unwind_18090d370"]="ManageResourceReferenceCountE8"
    ["Unwind_18090d380"]="ManageResourceReferenceCountE9"
    ["Unwind_18090d390"]="ManageResourceReferenceCountF0"
    ["Unwind_18090d3a0"]="ManageResourceReferenceCountF1"
    ["Unwind_18090d3b0"]="ManageResourceReferenceCountF2"
    ["Unwind_18090d3c0"]="ManageResourceReferenceCountF3"
    ["Unwind_18090d3d0"]="ManageResourceReferenceCountF4"
    ["Unwind_18090d3e0"]="ManageResourceReferenceCountF5"
    ["Unwind_18090d3f0"]="ManageResourceReferenceCountF6"
    ["Unwind_18090d400"]="ManageResourceReferenceCountF7"
    ["Unwind_18090d410"]="ManageResourceReferenceCountF8"
    ["Unwind_18090d420"]="ManageResourceReferenceCountF9"
    ["Unwind_18090d430"]="ManageResourceReferenceCountG0"
    ["Unwind_18090d440"]="ManageResourceReferenceCountG1"
    ["Unwind_18090d450"]="ManageResourceReferenceCountG2"
    ["Unwind_18090d460"]="ManageResourceReferenceCountG3"
    ["Unwind_18090d470"]="ManageResourceReferenceCountG4"
    ["Unwind_18090d480"]="ManageResourceReferenceCountG5"
    ["Unwind_18090d490"]="ManageResourceReferenceCountG6"
    ["Unwind_18090d4a0"]="ManageResourceReferenceCountG7"
    ["Unwind_18090d4b0"]="ManageResourceReferenceCountG8"
    ["Unwind_18090d4c0"]="ManageResourceReferenceCountG9"
    ["Unwind_18090d4d0"]="ManageResourceReferenceCountH0"
)

# 创建临时文件进行替换
temp_file=$(mktemp)

# 复制原文件到临时文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c "$temp_file"

# 对每个函数进行替换
for old_name in "${!function_map[@]}"; do
    new_name="${function_map[$old_name]}"
    echo "替换 $old_name 为 $new_name"
    
    # 使用sed进行替换
    sed -i "s/void $old_name(/void $new_name(/g" "$temp_file"
    sed -i "s/$old_name(/$new_name(/g" "$temp_file"
done

# 将修改后的文件复制回原位置
cp "$temp_file" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 清理临时文件
rm "$temp_file"

echo "Unwind_函数批量美化完成"