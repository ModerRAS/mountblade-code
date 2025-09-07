#!/bin/bash

# 美化99_unmatched_functions.c文件中的变量名
# 作者: Claude Code
# 日期: 2025-09-07

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

INPUT_FILE="99_unmatched_functions.c"
BACKUP_FILE="${INPUT_FILE}.backup.$(date +%Y%m%d_%H%M%S)"

# 创建备份
cp "$INPUT_FILE" "$BACKUP_FILE"
echo "已创建备份文件: $BACKUP_FILE"

# 处理iVar变量
echo "处理iVar变量..."
sed -i 's/\biVar1\b/IntegerVariable_1/g' "$INPUT_FILE"
sed -i 's/\biVar2\b/IntegerVariable_2/g' "$INPUT_FILE"
sed -i 's/\biVar3\b/IntegerVariable_3/g' "$INPUT_FILE"
sed -i 's/\biVar4\b/IntegerVariable_4/g' "$INPUT_FILE"
sed -i 's/\biVar5\b/IntegerVariable_5/g' "$INPUT_FILE"
sed -i 's/\biVar6\b/IntegerVariable_6/g' "$INPUT_FILE"
sed -i 's/\biVar7\b/IntegerVariable_7/g' "$INPUT_FILE"
sed -i 's/\biVar8\b/IntegerVariable_8/g' "$INPUT_FILE"
sed -i 's/\biVar9\b/IntegerVariable_9/g' "$INPUT_FILE"
sed -i 's/\biVar10\b/IntegerVariable_10/g' "$INPUT_FILE"
sed -i 's/\biVar11\b/IntegerVariable_11/g' "$INPUT_FILE"
sed -i 's/\biVar12\b/IntegerVariable_12/g' "$INPUT_FILE"
sed -i 's/\biVar13\b/IntegerVariable_13/g' "$INPUT_FILE"
sed -i 's/\biVar14\b/IntegerVariable_14/g' "$INPUT_FILE"
sed -i 's/\biVar15\b/IntegerVariable_15/g' "$INPUT_FILE"
sed -i 's/\biVar16\b/IntegerVariable_16/g' "$INPUT_FILE"
sed -i 's/\biVar17\b/IntegerVariable_17/g' "$INPUT_FILE"
sed -i 's/\biVar18\b/IntegerVariable_18/g' "$INPUT_FILE"
sed -i 's/\biVar19\b/IntegerVariable_19/g' "$INPUT_FILE"
sed -i 's/\biVar20\b/IntegerVariable_20/g' "$INPUT_FILE"

# 处理uVar变量
echo "处理uVar变量..."
sed -i 's/\buVar1\b/UnsignedVariable_1/g' "$INPUT_FILE"
sed -i 's/\buVar2\b/UnsignedVariable_2/g' "$INPUT_FILE"
sed -i 's/\buVar3\b/UnsignedVariable_3/g' "$INPUT_FILE"
sed -i 's/\buVar4\b/UnsignedVariable_4/g' "$INPUT_FILE"
sed -i 's/\buVar5\b/UnsignedVariable_5/g' "$INPUT_FILE"
sed -i 's/\buVar6\b/UnsignedVariable_6/g' "$INPUT_FILE"
sed -i 's/\buVar7\b/UnsignedVariable_7/g' "$INPUT_FILE"
sed -i 's/\buVar8\b/UnsignedVariable_8/g' "$INPUT_FILE"
sed -i 's/\buVar9\b/UnsignedVariable_9/g' "$INPUT_FILE"
sed -i 's/\buVar10\b/UnsignedVariable_10/g' "$INPUT_FILE"

# 处理piVar变量
echo "处理piVar变量..."
sed -i 's/\bpiVar1\b/PointerInteger_1/g' "$INPUT_FILE"
sed -i 's/\bpiVar2\b/PointerInteger_2/g' "$INPUT_FILE"
sed -i 's/\bpiVar3\b/PointerInteger_3/g' "$INPUT_FILE"

echo "变量名美化完成！"
echo "处理后的文件: $INPUT_FILE"
echo "备份文件: $BACKUP_FILE"