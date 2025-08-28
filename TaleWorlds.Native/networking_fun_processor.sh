#!/bin/bash

# 网络系统FUN_函数批处理脚本
# 用于处理 05_networking_part079_sub002_sub002.c 中的FUN_函数

# 设置输入文件
INPUT_FILE="pretty/05_networking_part079_sub002_sub002.c"
BACKUP_FILE="${INPUT_FILE}.backup"

# 创建备份
cp "$INPUT_FILE" "$BACKUP_FILE"
echo "已创建备份文件: $BACKUP_FILE"

# FUN_函数映射表
declare -A FUN_MAPPING=(
    # 高频网络锁相关函数
    ["FUN_180768400"]="NetworkLock_Release"
    ["FUN_180768360"]="NetworkLock_Acquire"
    
    # 哈希表处理函数
    ["FUN_180851a40"]="NetworkHashTable_CalculateHash"
    ["FUN_18084e8f0"]="NetworkHashTable_FindEntry"
    
    # 网络系统核心函数
    ["FUN_180883a80"]="NetworkPacketProcessor_ProcessPacket"
    ["FUN_180883a30"]="NetworkSystem_ErrorHandler"
    ["FUN_180883e00"]="NetworkPacketValidator_ValidatePacket"
    
    # 网络连接管理函数
    ["FUN_180871040"]="NetworkConnectionManager_UpdateConnection"
    ["FUN_18086fa90"]="NetworkConnectionManager_GetConnectionState"
    ["FUN_18086f9a0"]="NetworkConnectionManager_HandleDisconnect"
    ["FUN_18086f8b0"]="NetworkConnectionManager_EstablishConnection"
    
    # 网络数据包处理函数
    ["FUN_18086f7c0"]="NetworkPacketProcessor_CompressPacket"
    ["FUN_180866f50"]="NetworkPacketProcessor_DecompressPacket"
    ["FUN_180847820"]="NetworkPacketProcessor_EncryptPacket"
    ["FUN_180840100"]="NetworkPacketProcessor_DecryptPacket"
    
    # 网络状态检查函数
    ["FUN_180889ce0"]="NetworkStatusChecker_GetStatus"
    ["FUN_180871130"]="NetworkStatusChecker_IsConnected"
    
    # 网络哈希表管理函数
    ["FUN_18086ff40"]="NetworkHashTable_InsertEntry"
    ["FUN_18086fd10"]="NetworkHashTable_RemoveEntry"
    ["FUN_18086fc70"]="NetworkHashTable_ResizeTable"
    
    # 网络缓存管理函数
    ["FUN_18086fb80"]="NetworkCacheManager_GetCacheEntry"
    ["FUN_18086fa90"]="NetworkCacheManager_UpdateCacheEntry"
    ["FUN_18086f9a0"]="NetworkCacheManager_InvalidateCache"
    
    # 网络错误处理函数
    ["FUN_18086f8b0"]="NetworkErrorHandler_HandleError"
    ["FUN_18086f7c0"]="NetworkErrorHandler_LogError"
    ["FUN_180866f50"]="NetworkErrorHandler_RecoverFromError"
    
    # 网络配置管理函数
    ["FUN_180847820"]="NetworkConfigManager_GetConfig"
    ["FUN_180840100"]="NetworkConfigManager_SetConfig"
    ["FUN_180874b30"]="NetworkConfigManager_ValidateConfig"
    
    # 网络系统初始化函数
    ["FUN_180873460"]="NetworkSystemInitializer_Cleanup"
    ["FUN_180742250"]="NetworkSystemInitializer_Reinitialize"
    
    # 网络数据传输函数
    ["FUN_180768360"]="NetworkDataTransmitter_SendData"
    ["FUN_180768400"]="NetworkDataTransmitter_ReceiveData"
    
    # 网络协议处理函数
    ["FUN_180851a40"]="NetworkProtocolHandler_ProcessProtocol"
    ["FUN_18084e8f0"]="NetworkProtocolHandler_ValidateProtocol"
    
    # 网络事件处理函数
    ["FUN_180883a80"]="NetworkEventHandler_HandleEvent"
    ["FUN_180883a30"]="NetworkEventHandler_QueueEvent"
    ["FUN_180883e00"]="NetworkEventHandler_ProcessEventQueue"
    
    # 网络线程管理函数
    ["FUN_180871040"]="NetworkThreadManager_CreateThread"
    ["FUN_18086fa90"]="NetworkThreadManager_DestroyThread"
    ["FUN_18086f9a0"]="NetworkThreadManager_SuspendThread"
    ["FUN_18086f8b0"]="NetworkThreadManager_ResumeThread"
    
    # 网络内存管理函数
    ["FUN_18086f7c0"]="NetworkMemoryManager_Allocate"
    ["FUN_180866f50"]="NetworkMemoryManager_Deallocate"
    ["FUN_180847820"]="NetworkMemoryManager_Reallocate"
    
    # 网络时间管理函数
    ["FUN_180840100"]="NetworkTimeManager_GetCurrentTime"
    ["FUN_180874b30"]="NetworkTimeManager_SetTimeout"
    ["FUN_180873460"]="NetworkTimeManager_ClearTimeout"
    
    # 网络统计函数
    ["FUN_180742250"]="NetworkStatisticsCollector_UpdateStats"
    ["FUN_180768360"]="NetworkStatisticsCollector_GetStats"
    ["FUN_180768400"]="NetworkStatisticsCollector_ResetStats"
)

# 函数定义映射
declare -A FUN_DEFINITIONS=(
    ["FUN_180768400"]="void NetworkLock_Release(int64_t *lock_context)"
    ["FUN_180768360"]="void NetworkLock_Acquire(int64_t *lock_context)"
    ["FUN_180851a40"]="uint NetworkHashTable_CalculateHash(int64_t *hash_table_context)"
    ["FUN_18084e8f0"]="uint64_t NetworkHashTable_FindEntry(int64_t *hash_table_context, uint64_t *packet_key, uint64_t *packet_data, int64_t *current_entry)"
    ["FUN_180883a80"]="uint64_t NetworkPacketProcessor_ProcessPacket(int64_t *param_1, int64_t *param_2, uint64_t *param_3, uint64_t *param_4)"
    ["FUN_180883a30"]="void NetworkSystem_ErrorHandler(uint64_t param_1)"
    ["FUN_180883e00"]="uint64_t NetworkPacketValidator_ValidatePacket(int64_t *packet_context)"
    ["FUN_180871040"]="uint64_t NetworkConnectionManager_UpdateConnection(int64_t *connection_context)"
    ["FUN_18086fa90"]="uint64_t NetworkConnectionManager_GetConnectionState(int64_t *connection_context)"
    ["FUN_18086f9a0"]="void NetworkConnectionManager_HandleDisconnect(int64_t *connection_context)"
    ["FUN_18086f8b0"]="uint64_t NetworkConnectionManager_EstablishConnection(int64_t *connection_context)"
)

# 处理函数定义
process_function_definitions() {
    echo "处理函数定义..."
    
    for fun_name in "${!FUN_DEFINITIONS[@]}"; do
        if grep -q "void $fun_name\|uint64_t $fun_name\|uint $fun_name\|int $fun_name" "$INPUT_FILE"; then
            new_definition="${FUN_DEFINITIONS[$fun_name]}"
            sed -i "s/void $fun_name(/$new_definition(/g" "$INPUT_FILE"
            sed -i "s/uint64_t $fun_name(/$new_definition(/g" "$INPUT_FILE"
            sed -i "s/uint $fun_name(/$new_definition(/g" "$INPUT_FILE"
            sed -i "s/int $fun_name(/$new_definition(/g" "$INPUT_FILE"
            echo "替换函数定义: $fun_name -> ${FUN_MAPPING[$fun_name]}"
        fi
    done
}

# 处理函数调用
process_function_calls() {
    echo "处理函数调用..."
    
    for fun_name in "${!FUN_MAPPING[@]}"; do
        if grep -q "$fun_name(" "$INPUT_FILE"; then
            new_name="${FUN_MAPPING[$fun_name]}"
            # 替换函数调用
            sed -i "s/$fun_name(/$new_name(/g" "$INPUT_FILE"
            echo "替换函数调用: $fun_name -> $new_name"
        fi
    done
}

# 统计处理结果
count_fun_functions() {
    echo "统计剩余FUN_函数..."
    remaining_count=$(grep -o "FUN_180[0-9a-f]*" "$INPUT_FILE" | wc -l)
    echo "剩余FUN_函数数量: $remaining_count"
    
    # 显示前10个最常见的FUN_函数
    echo "最常见的FUN_函数:"
    grep -o "FUN_180[0-9a-f]*" "$INPUT_FILE" | sort | uniq -c | sort -nr | head -10
}

# 主处理流程
echo "开始处理网络系统FUN_函数..."
echo "输入文件: $INPUT_FILE"

# 备份原始文件
if [ ! -f "$BACKUP_FILE" ]; then
    cp "$INPUT_FILE" "$BACKUP_FILE"
    echo "已创建备份文件: $BACKUP_FILE"
fi

# 处理前统计
echo "处理前统计:"
original_count=$(grep -o "FUN_180[0-9a-f]*" "$INPUT_FILE" | wc -l)
echo "原始FUN_函数数量: $original_count"

# 执行处理
process_function_definitions
process_function_calls

# 处理后统计
echo "处理后统计:"
count_fun_functions

echo "网络系统FUN_函数批处理完成!"
echo "处理文件: $INPUT_FILE"
echo "备份文件: $BACKUP_FILE"