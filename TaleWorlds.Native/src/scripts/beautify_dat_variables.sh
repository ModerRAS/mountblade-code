#!/bin/bash

# 美化99_unmatched_functions.c中的DAT_变量
# 使用sed进行批量替换

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# DAT_变量替换映射
# 格式: s/原始变量名/新变量名/g

# 系统核心数据
sed -i 's/DAT_180c86938/SystemCoreDataTable/g' "$FILE"

# 系统网络配置
sed -i 's/DAT_180c8a9c8/SystemNetworkConfigurationData/g' "$FILE"

# 系统安全验证
sed -i 's/DAT_180bf65b8/SystemSecurityValidationData/g' "$FILE"

# 系统连接状态
sed -i 's/DAT_180c86890/SystemConnectionStatusData/g' "$FILE"

# 系统内存分配
sed -i 's/DAT_180a002e0/SystemMemoryAllocationData/g' "$FILE"

# 系统线程管理
sed -i 's/DAT_180a00360/SystemThreadManagementData/g' "$FILE"

# 系统配置设置
sed -i 's/DAT_180a00410/SystemConfigurationSettingsData/g' "$FILE"

# 系统资源池
sed -i 's/DAT_180a009f0/SystemResourcePoolData/g' "$FILE"

# 系统对象元数据
sed -i 's/DAT_180a00c80/SystemObjectMetadataData/g' "$FILE"

# 系统对象实例
sed -i 's/DAT_180a00c90/SystemObjectInstanceData/g' "$FILE"

# 系统状态管理
sed -i 's/DAT_180a00ef8/SystemStateManagementData/g' "$FILE"

# 系统临界区
sed -i 's/DAT_180a01228/SystemCriticalSectionData/g' "$FILE"

# 系统同步
sed -i 's/DAT_180a012e0/SystemSynchronizationData/g' "$FILE"

# 系统锁管理
sed -i 's/DAT_180a012f0/SystemLockManagementData/g' "$FILE"

echo "DAT_变量美化完成"