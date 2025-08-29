#!/bin/bash
# 美化01_initialization.c文件 - 修正版

input_file="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"
temp_file="/tmp/01_initialization_formatted.c"

# 备份原文件
cp "$input_file" "$temp_file"

# 统一注释格式，移除"函数："前缀
sed -i 's|// 函数: |// |g' "$temp_file"

# 减少空行数量 - 只保留必要的分隔
sed -i '/^$/N;/^\n$/D' "$temp_file"
sed -i '/^$/N;/^\n$/D' "$temp_file"

# 在函数声明前添加一个空行
sed -i '/^\/\/ [a-zA-Z_]/i\\
' "$temp_file"

# 移除连续的多个空行
sed -i '/^$/{ N; /^\n$/d; }' "$temp_file"

# 清理行尾空格
sed -i 's/[ \t]*$//' "$temp_file"

# 确保每个函数块之间有适当的分隔
sed -i '/^\/\/ [a-zA-Z_]/,+1{/^$/!{ /^\/\/ [a-zA-Z_]/!i\\
}}' "$temp_file"

# 最终清理多余空行
sed -i '/^$/N;/^\n$/D' "$temp_file"

mv "$temp_file" "$input_file"
echo "01_initialization.c 格式化完成（修正版）"