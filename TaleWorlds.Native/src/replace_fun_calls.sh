#!/bin/bash

# 替换99_unmatched_functions.c中的FUN_函数调用为语义化名称
# 这个脚本会批量替换文件中直接使用FUN_函数调用的地方

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 备份原始文件
cp "$FILE" "$FILE.backup_$(date +%Y%m%d_%H%M%S)"

# 替换FUN_函数调用为已定义的宏名称
sed -i 's/FUN_180627c50(/ProcessSystemDataEncodingAndBufferManagement(/g' "$FILE"
sed -i 's/FUN_1800863a0(/ProcessSystemGraphicsContextInitialization(/g' "$FILE"
sed -i 's/FUN_18029c460(/ProcessSystemGraphicsOutput(/g' "$FILE"
sed -i 's/FUN_180628040(/ProcessSystemDataQueueManagement(/g' "$FILE"
sed -i 's/FUN_180627be0(/ProcessSystemDataFlowEx(/g' "$FILE"
sed -i 's/FUN_1802abc50(/ProcessSystemMemoryAllocationEx(/g' "$FILE"
sed -i 's/FUN_1800622d0(/ProcessSystemSecurityValidation(/g' "$FILE"
sed -i 's/FUN_180627020(/ProcessSystemResourceOptimization(/g' "$FILE"
sed -i 's/FUN_1800bd410(/ProcessSystemMemoryDeallocationEx(/g' "$FILE"
sed -i 's/FUN_18005ce30(/ProcessSystemBufferInitialization(/g' "$FILE"
sed -i 's/FUN_18005e370(/ProcessSystemThreadManagement(/g' "$FILE"

echo "FUN_函数调用替换完成"