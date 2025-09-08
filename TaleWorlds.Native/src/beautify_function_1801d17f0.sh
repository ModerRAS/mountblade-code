#!/bin/bash

# 函数美化脚本 - 专门用于美化 FUN_1801d17f0 函数
# 这个脚本将批量替换函数中的变量名

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
BACKUP_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c.backup"

# 创建备份
cp "$INPUT_FILE" "$BACKUP_FILE"

# 首先替换函数名
sed -i 's/^void FUN_1801d17f0(/void ProcessSystemResourceManagementAndDataProcessing(/g' "$INPUT_FILE"

# 替换变量声明部分
sed -i 's/longlong \*\*\*\* pppResourceLockPointer;/longlong **** ResourceLockPointer;/g' "$INPUT_FILE"
sed -i 's/longlong \*\*\*\* pppSystemContextPointer;/longlong **** SystemContextPointer;/g' "$INPUT_FILE"
sed -i 's/byte bVar4;/byte ProcessingFlag;/g' "$INPUT_FILE"
sed -i 's/bool bVar9;/bool InsertionFlag;/g' "$INPUT_FILE"
sed -i 's/int iVar12;/int ErrorCode;/g' "$INPUT_FILE"
sed -i 's/char \*pcVar24;/char *StringDataPointer;/g' "$INPUT_FILE"

# 替换变量使用
sed -i 's/pppResourceLockPointer/ResourceLockPointer/g' "$INPUT_FILE"
sed -i 's/pppSystemContextPointer/SystemContextPointer/g' "$INPUT_FILE"
sed -i 's/bVar4/ProcessingFlag/g' "$INPUT_FILE"
sed -i 's/bVar9/InsertionFlag/g' "$INPUT_FILE"
sed -i 's/iVar12/ErrorCode/g' "$INPUT_FILE"
sed -i 's/pcVar24/StringDataPointer/g' "$INPUT_FILE"

echo "函数美化完成"