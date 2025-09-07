#!/bin/bash

# 美化DAT_变量的脚本
# 用于将99_unmatched_functions.c中的DAT_变量重命名为语义化名称

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 创建备份
cp "$FILE_PATH" "$FILE_PATH.backup"

# DAT_变量美化映射
declare -A DAT_REPLACEMENTS=(
    # 系统配置相关
    ["DAT_180c86938"]="SystemCoreDataTable"
    ["DAT_180c8a9c8"]="SystemNetworkConfigurationData"
    ["DAT_180bf65b8"]="SystemSecurityValidationData"
    ["DAT_180c86890"]="SystemConnectionStatusData"
    ["DAT_180a002e0"]="SystemMemoryAllocationData"
    ["DAT_180a00360"]="SystemThreadManagementData"
    ["DAT_180a00410"]="SystemConfigurationSettingsData"
    ["DAT_180a009f0"]="SystemResourcePoolData"
    ["DAT_180a00c80"]="SystemObjectMetadataData"
    ["DAT_180a00c90"]="SystemObjectInstanceData"
    ["DAT_180a00ef8"]="SystemStateManagementData"
    ["DAT_180a01228"]="SystemCriticalSectionData"
    ["DAT_180a012e0"]="SystemSynchronizationData"
    ["DAT_180a012f0"]="SystemLockManagementData"
    
    # 系统缓冲区和数据表
    ["DAT_180c8ecec"]="SystemStringBuffer"
    ["DAT_180c82853"]="SystemSecurityFlag"
    ["DAT_180c82842"]="SystemValidationFlag"
    ["DAT_180c82851"]="SystemInitializationFlag"
    ["DAT_180c82844"]="SystemProcessingFlag"
    ["DAT_180c82843"]="SystemCleanupFlag"
    ["DAT_180bf0101"]="SystemStatusFlag"
    ["DAT_180c82852"]="SystemControlFlag"
    
    # 系统通信和协议
    ["DAT_180c868b0"]="SystemCommunicationDataTable"
    ["DAT_180c86930"]="SystemProtocolDataTable"
    ["DAT_180c868a8"]="SystemConnectionDataTable"
    ["DAT_180c82858"]="SystemNetworkDataTable"
    ["DAT_180c82870"]="SystemCommunicationDataTable2"
    ["DAT_180c84870"]="SystemMessageDataTable"
    ["DAT_180c86918"]="SystemProtocolDataTable2"
    ["DAT_180c86950"]="SystemConnectionDataTable2"
    
    # 系统监控和性能
    ["DAT_180c8a9a0"]="SystemMonitoringDataTable"
    ["DAT_180c8a9b0"]="SystemOptimizationDataTable"
    ["DAT_180c8a9f0"]="SystemPerformanceDataTable"
)

# 应用替换
for original in "${!DAT_REPLACEMENTS[@]}"; do
    replacement="${DAT_REPLACEMENTS[$original]}"
    
    # 使用sed进行替换，添加注释说明原始变量名
    sed -i "s/\b${original}\b/${replacement}/g" "$FILE_PATH"
    
    echo "已替换: $original -> $replacement"
done

echo "DAT_变量美化完成"