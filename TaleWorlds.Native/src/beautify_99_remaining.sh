#!/bin/bash

# 批量美化99_unmatched_functions.c中的剩余变量
# 此脚本用于处理剩余的FUN_函数调用、UNK_变量和DAT_变量

echo "开始美化99_unmatched_functions.c中的剩余变量..."

# 首先备份原文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c.backup

# 定义需要替换的函数和变量
# FUN_函数替换
sed -i 's/FUN_180094e80/ProcessSystemContextAndMemoryAllocation/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_180076a20/ProcessSystemContextCleanup/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_18022f2e0/ProcessSystemQueueManagement/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_180075b70/ProcessSystemBufferValidation/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1800c12e0/InitializeSystemContext/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_180094d40/ProcessSystemDataValidation/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_180079520/ExecuteSystemCleanup/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

# UNK_变量替换
sed -i 's/UNK_180a02548/SystemRuntimeData2548/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_180a028e0/SystemRuntimeData28E0/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_180a028f8/SystemRuntimeData28F8/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_180a02908/SystemRuntimeData2908/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_180a02928/SystemRuntimeData2928/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_180a02940/SystemRuntimeData2940/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

# DAT_变量替换
sed -i 's/DAT_1809fc8e4/SystemStringDataFC8E4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/DAT_180a035c0/SystemMemoryConfigurationA035C0/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

echo "美化完成！"

# 验证替换结果
echo "验证替换结果..."
echo "剩余FUN_函数调用数量：$(grep -c "FUN_180" /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c)"
echo "剩余UNK_变量数量：$(grep -c "UNK_180" /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c)"
echo "剩余DAT_变量数量：$(grep -c "DAT_180" /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c)"

# 删除备份文件
rm /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c.backup

echo "脚本执行完成！"