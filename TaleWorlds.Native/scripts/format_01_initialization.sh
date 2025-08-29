#!/bin/bash
# 美化01_initialization.c文件

input_file="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"
temp_file="/tmp/01_initialization_formatted.c"

# 备份原文件
cp "$input_file" "$temp_file"

# 统一注释格式
sed -i 's|// 函数: |// |g' "$temp_file"

# 确保变量声明之间有空行
sed -i '/^undefined [a-zA-Z_]/,/[^\\]$/{ /[^\\]$/a\\
}' "$temp_file"

# 移除多余的空行
sed -i '/^$/N;/^\n$/D' "$temp_file"

# 统一缩进
sed -i 's/^void/void/g' "$temp_file"
sed -i 's/^undefined/undefined/g' "$temp_file"

# 添加函数间的分隔
sed -i '/^\/\/ 函数:/i\\
' "$temp_file"

# 清理格式
sed -i 's/[ \t]*$//' "$temp_file"

mv "$temp_file" "$input_file"
echo "01_initialization.c 格式化完成"