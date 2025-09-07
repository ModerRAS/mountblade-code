#!/bin/bash

# 美化99_unmatched_functions.c文件中的变量名
# 作者: Claude Code
# 日期: 2025-09-07

INPUT_FILE="99_unmatched_functions.c"
TEMP_FILE="${INPUT_FILE}.temp"
BACKUP_FILE="${INPUT_FILE}.backup.$(date +%Y%m%d_%H%M%S)"

# 创建备份
cp "$INPUT_FILE" "$BACKUP_FILE"
echo "已创建备份文件: $BACKUP_FILE"

# 第一阶段：处理lStack_xxx变量
echo "处理lStack_xxx变量..."
sed -i 's/\blStack_\([0-9]\+\)\b/LongStackValue_\1/g' "$INPUT_FILE"

# 第二阶段：处理iVarX变量
echo "处理iVarX变量..."
sed -i 's/\biVar\([0-9]\+\)\b/IntegerVariable_\1/g' "$INPUT_FILE"

# 第三阶段：处理uVarX变量
echo "处理uVarX变量..."
sed -i 's/\buVar\([0-9]\+\)\b/UnsignedVariable_\1/g' "$INPUT_FILE"

# 第四阶段：处理piVarX变量
echo "处理piVarX变量..."
sed -i 's/\bpiVar\([0-9]\+\)\b/PointerInteger_\1/g' "$INPUT_FILE"

# 第五阶段：处理puStack_xxx变量
echo "处理puStack_xxx变量..."
sed -i 's/\bpuStack_\([0-9a-fA-F]\+\)\b/PointerStack_\1/g' "$INPUT_FILE"

# 第六阶段：处理ppuStack_xxx变量
echo "处理ppuStack_xxx变量..."
sed -i 's/\bppuStack_\([0-9a-fA-F]\+\)\b/PointerPointerStack_\1/g' "$INPUT_FILE"

# 第七阶段：处理uStack_xxx变量
echo "处理uStack_xxx变量..."
sed -i 's/\buStack_\([0-9a-fA-F]\+\)\b/UnsignedStack_\1/g' "$INPUT_FILE"

# 第八阶段：处理iStack_xxx变量
echo "处理iStack_xxx变量..."
sed -i 's/\biStack_\([0-9a-fA-F]\+\)\b/IntegerStack_\1/g' "$INPUT_FILE"

echo "变量名美化完成！"
echo "处理后的文件: $INPUT_FILE"
echo "备份文件: $BACKUP_FILE"