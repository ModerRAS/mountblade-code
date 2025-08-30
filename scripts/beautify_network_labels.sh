#!/bin/bash

# 05_networking.c文件LAB_标签语义化美化脚本（2025年8月30日最终批次）
# 简化实现：将常见的LAB_标签替换为语义化标签名
# 原本实现：完全重构所有LAB_标签命名体系，建立统一的语义化命名规范

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原文件
cp 05_networking.c 05_networking.c.backup

# 定义LAB_标签替换映射
declare -A label_mappings=(
    ["LAB_18073d93d"]="NETWORK_LABEL_CONNECTION_CLEANUP_ENTRY"
    ["LAB_180854383"]="NETWORK_LABEL_SOCKET_VALIDATION_PRIMARY"
    ["LAB_18085439a"]="NETWORK_LABEL_SOCKET_VALIDATION_SECONDARY"
    ["LAB_1808547b7"]="NETWORK_LABEL_DATA_VALIDATION_PRIMARY"
    ["LAB_1808547bc"]="NETWORK_LABEL_DATA_VALIDATION_SECONDARY"
    ["LAB_1808555d5"]="NETWORK_LABEL_PACKET_PROCESSING_START"
    ["LAB_1808555e0"]="NETWORK_LABEL_PACKET_PROCESSING_END"
    ["LAB_1808555f2"]="NETWORK_LABEL_CONNECTION_STATUS_CHECK"
    ["LAB_180855607"]="NETWORK_LABEL_ENCRYPTION_VALIDATION"
    ["LAB_18085561c"]="NETWORK_LABEL_SOCKET_OPERATION_COMPLETE"
    ["LAB_180855631"]="NETWORK_LABEL_ERROR_HANDLING_PRIMARY"
    ["LAB_180855646"]="NETWORK_LABEL_ERROR_HANDLING_SECONDARY"
    ["LAB_18085565b"]="NETWORK_LABEL_MEMORY_CLEANUP_START"
    ["LAB_180855670"]="NETWORK_LABEL_MEMORY_CLEANUP_END"
    ["LAB_180855685"]="NETWORK_LABEL_RESOURCE_DEALLOCATION"
    ["LAB_18085569a"]="NETWORK_LABEL_CONNECTION_TERMINATION"
    ["LAB_1808556af"]="NETWORK_LABEL_NETWORK_SHUTDOWN"
    ["LAB_1808556c4"]="NETWORK_LABEL_SYSTEM_CLEANUP_COMPLETE"
    ["LAB_1808556d9"]="NETWORK_LABEL_FUNCTION_RETURN_POINT"
    ["LAB_1808556ee"]="NETWORK_LABEL_EXIT_SUCCESS"
    ["LAB_180855703"]="NETWORK_LABEL_EXIT_ERROR"
)

# 遍历所有LAB_标签进行替换
for label in "${!label_mappings[@]}"; do
    replacement="${label_mappings[$label]}"
    echo "替换: $label -> $replacement"
    sed -i "s/$label/$replacement/g" 05_networking.c
done

# 统计替换结果
echo "替换完成，统计结果："
grep -o "NETWORK_LABEL_[A-Z_]*" 05_networking.c | sort | uniq -c | sort -nr

# 清理备份文件
rm -f 05_networking.c.backup

echo "LAB_标签语义化美化完成"