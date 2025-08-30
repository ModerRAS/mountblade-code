#!/bin/bash

# 处理99_unmatched_functions.c中的重复变量声明问题
# 这是简化实现，主要处理重复的system_memory_release_ptr声明

FILE="99_unmatched_functions.c"

# 创建临时文件
temp_file=$(mktemp)

# 使用awk处理重复声明
awk '
{
    # 记录当前行
    current_line = $0
    
    # 检查是否是重复的system_memory_release_ptr声明
    if (current_line ~ /^[[:space:]]*long long \*system_memory_release_ptr;$/) {
        # 检查上一行是否也是相同的声明
        if (prev_line ~ /^[[:space:]]*long long \*system_memory_release_ptr;$/) {
            # 跳过这一行（重复声明）
            prev_line = current_line
            next
        }
    }
    
    # 输出上一行（如果不是重复的）
    if (prev_line != "") {
        print prev_line
    }
    
    # 更新上一行
    prev_line = current_line
}

# 输出最后一行
END {
    if (prev_line != "") {
        print prev_line
    }
}
' "$FILE" > "$temp_file"

# 替换原文件
mv "$temp_file" "$FILE"

echo "重复声明处理完成"