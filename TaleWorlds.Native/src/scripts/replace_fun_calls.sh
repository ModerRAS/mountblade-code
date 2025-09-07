#!/bin/bash

# 批量替换99_unmatched_functions.c中的FUN_函数调用

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 备份原始文件
cp "$FILE" "$FILE.backup"

# 替换FUN_1800b88d0为ProcessSystemContextDataManagement
sed -i 's/FUN_1800b88d0(/ProcessSystemContextDataManagement(/g' "$FILE"

# 替换FUN_1800b4910为ProcessSystemDataTransfer
sed -i 's/FUN_1800b4910(/ProcessSystemDataTransfer(/g' "$FILE"

# 替换FUN_1800b8500为ProcessSystemBufferCleanupEx
sed -i 's/FUN_1800b8500(/ProcessSystemBufferCleanupEx(/g' "$FILE"

# 替换FUN_1800b8da0为ProcessSystemContextValidationEx
sed -i 's/FUN_1800b8da0(/ProcessSystemContextValidationEx(/g' "$FILE"

# 替换FUN_1800b9030为ProcessSystemDataProcessing
sed -i 's/FUN_1800b9030(/ProcessSystemDataProcessing(/g' "$FILE"

# 替换FUN_1800b8a90为ProcessSystemOutputManagement
sed -i 's/FUN_1800b8a90(/ProcessSystemOutputManagement(/g' "$FILE"

# 替换FUN_1800bc4a0为ProcessSystemResourceRegistration
sed -i 's/FUN_1800bc4a0(/ProcessSystemResourceRegistration(/g' "$FILE"

# 替换FUN_1800bc180为ProcessSystemContextRegistration
sed -i 's/FUN_1800bc180(/ProcessSystemContextRegistration(/g' "$FILE"

# 替换FUN_18006eb30为ProcessSystemCleanupOperations
sed -i 's/FUN_18006eb30(/ProcessSystemCleanupOperations(/g' "$FILE"

echo "函数调用替换完成"