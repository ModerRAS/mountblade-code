#!/bin/bash

# 美化99_unmatched_functions.c文件的脚本
# 批量替换FUN_、DAT_、UNK_等宏定义为语义化名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建备份
cp 99_unmatched_functions.c 99_unmatched_functions.c.backup

# 替换FUN_函数定义
sed -i 's/FUN_1800a1010/InitializeGameDataStructure/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a1310/ProcessSystemMemoryAllocation/g' 99_unmatched_functions.c
sed -i 's/FUN_18009fc60/HandleSystemResourceAllocation/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a0040/InitializeSystemBufferManager/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a0820/ProcessSystemConfigurationData/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a05a0/HandleSystemQueueOperations/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a0a00/ProcessSystemTaskExecution/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a099d/HandleSystemEventProcessing/g' 99_unmatched_functions.c
sed -i 's/FUN_1800adc50/ProcessSystemCleanupOperations/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a4010/ManageSystemResources/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a43c0/ProcessSystemComponents/g' 99_unmatched_functions.c

# 替换更多FUN_函数
sed -i 's/FUN_1800a4910/InitializeSystemDataProcessor/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a4b70/ProcessSystemMemoryManager/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a4c90/HandleSystemAllocationManager/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a4d40/InitializeSystemBufferController/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a4f00/ProcessSystemConfigurationManager/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a5080/HandleSystemQueueManager/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a5160/ProcessSystemTaskManager/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a52c0/HandleSystemEventManager/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a5450/ProcessSystemCleanupManager/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a5690/ManageSystemResourceController/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a58b0/ProcessSystemComponentManager/g' 99_unmatched_functions.c

echo "美化完成"