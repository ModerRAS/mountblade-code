#!/bin/bash

# 06_utilities.c 变量名美化脚本
# 用于批量替换Ghidra生成的变量名

# 设置文件路径
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 备份原文件
cp "$FILE_PATH" "${FILE_PATH}.backup"

# 美化系统初始化相关函数名
sed -i 's/FUN_18004b730/InitializeSystemValidation/g' "$FILE_PATH"
sed -i 's/FUN_180058370/ProcessSystemDataValidation/g' "$FILE_PATH"
sed -i 's/FUN_18004b790/ValidateSystemDataBuffer/g' "$FILE_PATH"
sed -i 's/FUN_18064e900/CleanupSystemDataPointer/g' "$FILE_PATH"
sed -i 's/FUN_18007f840/ProcessSystemContext/g' "$FILE_PATH"

# 美化系统状态处理函数名
sed -i 's/FUN_1808a54c0/ProcessSystemStatusA0/g' "$FILE_PATH"
sed -i 's/FUN_180883750/ValidateSystemParametersA0/g' "$FILE_PATH"
sed -i 's/FUN_1808af8b0/ValidateSystemStatusA0/g' "$FILE_PATH"
sed -i 's/FUN_1808af280/ValidateSystemContextA0/g' "$FILE_PATH"
sed -i 's/FUN_1808acb90/ProcessDataArrayA0/g' "$FILE_PATH"

# 美化数据处理函数名
sed -i 's/FUN_180893e69/UpdateSystemStatusA0/g' "$FILE_PATH"
sed -i 's/FUN_180897d20/ProcessDataBlockWithSecurityCheck/g' "$FILE_PATH"
sed -i 's/FUN_180899040/ValidateAndProcessData/g' "$FILE_PATH"
sed -i 's/FUN_180899090/ProcessDataBlocks/g' "$FILE_PATH"
sed -i 's/FUN_180899100/ValidateAndExecuteOperations/g' "$FILE_PATH"

# 美化系统组件函数名
sed -i 's/FUN_1808992c4/InitializeSystemComponents/g' "$FILE_PATH"
sed -i 's/FUN_1808995c0/ValidateDataWithSecurityCheck/g' "$FILE_PATH"
sed -i 's/FUN_180899790/CleanupSystemResources/g' "$FILE_PATH"
sed -i 's/FUN_180899799/ResetSystemState/g' "$FILE_PATH"
sed -i 's/FUN_1808997b0/SynchronizeData/g' "$FILE_PATH"

echo "变量名美化完成"