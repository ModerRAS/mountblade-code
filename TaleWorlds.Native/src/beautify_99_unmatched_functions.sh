#!/bin/bash

# 99_unmatched_functions.c 美化脚本
# 用于将FUN_函数名替换为语义化的名称

cd "/dev/shm/mountblade-code/TaleWorlds.Native/src"

# 创建备份
cp 99_unmatched_functions.c 99_unmatched_functions.c.backup

# 系统数据处理函数相关替换
sed -i 's/FUN_1800a1b20/ProcessSystemDataOperations/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a25c0/InitializeSystemResourceHandle/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a2ff0/ValidateSystemParameters/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a30a0/ConfigureSystemSettings/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a3660/ManageSystemMemoryPool/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a367b/ProcessSystemMemoryAllocation/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a3691/InitializeSystemMemoryManager/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a3880/ProcessSystemResourceRequest/g' 99_unmatched_functions.c

# 系统资源管理函数
sed -i 's/FUN_1800a4010/ProcessSystemResourceAllocation/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a43c0/ManageSystemComponents/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a4c50/ProcessSystemQueue/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a5110/ManageSystemTasks/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a5810/ProcessSystemDataFlow/g' 99_unmatched_functions.c

# 系统事件处理函数
sed -i 's/FUN_1800a5f50/HandleSystemEvents/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a5f90/ProcessSystemMessages/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a5fc0/HandleSystemSynchronization/g' 99_unmatched_functions.c

# 系统状态检查函数
sed -i 's/FUN_1800a6011/CheckSystemStatus/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a609a/ValidateSystemConfiguration/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a6184/ProcessSystemBatch/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a62cd/CleanupSystemOperations/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a62e7/ResetSystemState/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a62f7/InitializeSystemOperations/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a6320/ConfigureSystem/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a63d0/ValidateSystemDataIntegrity/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a6420/UpdateSystemStatus/g' 99_unmatched_functions.c

# 系统缓冲区处理函数
sed -i 's/FUN_1800a73c0/ProcessSystemBuffer/g' 99_unmatched_functions.c
sed -i 's/FUN_1800a73e0/AllocateSystemMemory/g' 99_unmatched_functions.c

# 系统数据管理函数
sed -i 's/FUN_1800aa220/ManageSystemData/g' 99_unmatched_functions.c
sed -i 's/FUN_1800aace0/MonitorSystemPerformance/g' 99_unmatched_functions.c
sed -i 's/FUN_1800aad40/MonitorSystemResources/g' 99_unmatched_functions.c
sed -i 's/FUN_1800ab420/ManageSystemStatus/g' 99_unmatched_functions.c

echo "函数名替换完成"