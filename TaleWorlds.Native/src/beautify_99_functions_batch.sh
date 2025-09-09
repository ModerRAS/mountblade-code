#!/bin/bash

# 批量美化99_unmatched_functions.c中的FUN_函数
# 为常用的FUN_函数添加语义化名称

# 定义函数映射
declare -A function_mappings=(
    ["FUN_180095000"]="AllocateSystemMemory"
    ["FUN_18005d400"]="ProcessNodeData"
    ["FUN_180244ff0"]="ProcessInputStringData"
    ["FUN_1802eee20"]="ValidateQueueEntry"
    ["FUN_18038d0a0"]="ProcessStringMatching"
    ["FUN_1802a7680"]="ValidateSystemBuffer"
    ["FUN_1801c6b50"]="ProcessSystemDataBuffer"
    ["FUN_1801e1020"]="ProcessSystemDataEncoding"
    ["FUN_1801c7500"]="ProcessSystemConfiguration"
    ["FUN_18029e2f0"]="ProcessSystemDataAndUpdateStatus"
)

# 创建临时文件
temp_file="/tmp/99_unmatched_functions_temp.c"

# 复制原文件
cp "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c" "$temp_file"

# 为每个函数映射创建替换规则
for fun_name in "${!function_mappings[@]}"; do
    semantic_name="${function_mappings[$fun_name]}"
    
    # 替换函数调用
    sed -i "s/\b$fun_name\b/$semantic_name/g" "$temp_file"
    
    # 添加函数定义宏（如果还没有）
    if ! grep -q "#define $fun_name $semantic_name" "$temp_file"; then
        # 在文件开头的宏定义区域添加
        sed -i "/^\/\/ 栈变量语义化定义 - 数值处理变量$/i\\#define $fun_name $semantic_name" "$temp_file"
    fi
done

# 替换文件
mv "$temp_file" "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

echo "批量美化完成"