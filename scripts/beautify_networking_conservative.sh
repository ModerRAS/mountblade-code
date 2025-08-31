#!/bin/bash

# 网络系统代码美化脚本 - 保守版本
# 功能：安全地替换05_networking.c文件中的非语义化变量名和函数名
# 注意：这个脚本采用更保守的方法，只替换明确的模式

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
BACKUP_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c.backup"

# 创建备份
cp "$INPUT_FILE" "$BACKUP_FILE"

echo "开始保守美化网络系统代码..."

# 只替换一些明确的非语义化变量名
sed -i 's/\bvar1\b/network_variable_primary/g' "$INPUT_FILE"
sed -i 's/\bvar2\b/network_variable_secondary/g' "$INPUT_FILE"
sed -i 's/\bvar3\b/network_variable_tertiary/g' "$INPUT_FILE"
sed -i 's/\bvar4\b/network_variable_quaternary/g' "$INPUT_FILE"
sed -i 's/\bvar5\b/network_variable_auxiliary/g' "$INPUT_FILE"

# 替换一些明确的函数名
sed -i 's/\bfunc1\b/network_function_primary/g' "$INPUT_FILE"
sed -i 's/\bfunc2\b/network_function_secondary/g' "$INPUT_FILE"
sed -i 's/\bfunc3\b/network_function_tertiary/g' "$INPUT_FILE"

# 替换一些常见的缩写
sed -i 's/\btmp\b/temp_buffer/g' "$INPUT_FILE"
sed -i 's/\bbuf\b/buffer/g' "$INPUT_FILE"
sed -i 's/\bptr\b/pointer/g' "$INPUT_FILE"
sed -i 's/\bctx\b/context/g' "$INPUT_FILE"

echo "网络系统代码保守美化完成！"
echo "原始文件已备份到: $BACKUP_FILE"