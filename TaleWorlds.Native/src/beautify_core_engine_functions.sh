#!/bin/bash

# 美化02_core_engine.c中的FUN_函数
# 这个脚本会批量重命名函数并添加文档注释

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"

# 函数名映射表
declare -A FUNCTION_MAP=(
    ["FUN_180036050"]="InitializeNetworkConfigurationNode"
    ["FUN_180036150"]="InitializeNetworkAuthenticationNode"
    ["FUN_180036250"]="InitializeNetworkSessionNode"
    ["FUN_180036350"]="InitializeNetworkConnectionNode"
    ["FUN_180036450"]="InitializeNetworkPacketNode"
    ["FUN_180036550"]="InitializeNetworkSecurityNode"
    ["FUN_180036650"]="InitializeNetworkProtocolNode"
    ["FUN_180036750"]="InitializeNetworkBufferNode"
    ["FUN_180036850"]="InitializeNetworkEventHandlerNode"
    ["FUN_180036950"]="InitializeNetworkThreadPoolNode"
    ["FUN_180036a50"]="InitializeNetworkMemoryManagerNode"
    ["FUN_180036b50"]="InitializeNetworkDebugNode"
    ["FUN_180036c50"]="InitializeNetworkLogNode"
    ["FUN_180036d50"]="InitializeNetworkPerformanceNode"
    ["FUN_180036e50"]="InitializeNetworkErrorNode"
    ["FUN_180036f50"]="InitializeNetworkStatisticsNode"
    ["FUN_180037050"]="InitializeNetworkConfigNode"
    ["FUN_180037150"]="InitializeNetworkStateNode"
    ["FUN_180037250"]="InitializeNetworkResourceNode"
)

# 函数描述映射表
declare -A FUNCTION_DESC=(
    ["InitializeNetworkConfigurationNode"]="初始化网络配置节点，负责设置网络配置的内存分配和数据结构"
    ["InitializeNetworkAuthenticationNode"]="初始化网络认证节点，负责设置网络认证的内存分配和认证数据结构"
    ["InitializeNetworkSessionNode"]="初始化网络会话节点，负责设置网络会话的内存分配和会话数据结构"
    ["InitializeNetworkConnectionNode"]="初始化网络连接节点，负责设置网络连接的内存分配和连接数据结构"
    ["InitializeNetworkPacketNode"]="初始化网络数据包节点，负责设置网络数据包的内存分配和数据包数据结构"
    ["InitializeNetworkSecurityNode"]="初始化网络安全节点，负责设置网络安全的内存分配和安全数据结构"
    ["InitializeNetworkProtocolNode"]="初始化网络协议节点，负责设置网络协议的内存分配和协议数据结构"
    ["InitializeNetworkBufferNode"]="初始化网络缓冲区节点，负责设置网络缓冲区的内存分配和缓冲区数据结构"
    ["InitializeNetworkEventHandlerNode"]="初始化网络事件处理节点，负责设置网络事件处理的内存分配和事件数据结构"
    ["InitializeNetworkThreadPoolNode"]="初始化网络线程池节点，负责设置网络线程池的内存分配和线程池数据结构"
    ["InitializeNetworkMemoryManagerNode"]="初始化网络内存管理器节点，负责设置网络内存管理的内存分配和内存管理数据结构"
    ["InitializeNetworkDebugNode"]="初始化网络调试节点，负责设置网络调试的内存分配和调试数据结构"
    ["InitializeNetworkLogNode"]="初始化网络日志节点，负责设置网络日志的内存分配和日志数据结构"
    ["InitializeNetworkPerformanceNode"]="初始化网络性能节点，负责设置网络性能的内存分配和性能数据结构"
    ["InitializeNetworkErrorNode"]="初始化网络错误节点，负责设置网络错误的内存分配和错误数据结构"
    ["InitializeNetworkStatisticsNode"]="初始化网络统计节点，负责设置网络统计的内存分配和统计数据结构"
    ["InitializeNetworkConfigNode"]="初始化网络配置管理节点，负责设置网络配置管理的内存分配和配置管理数据结构"
    ["InitializeNetworkStateNode"]="初始化网络状态节点，负责设置网络状态的内存分配和状态数据结构"
    ["InitializeNetworkResourceNode"]="初始化网络资源节点，负责设置网络资源的内存分配和资源数据结构"
)

# 遍历函数映射表，进行替换
for old_name in "${!FUNCTION_MAP[@]}"; do
    new_name="${FUNCTION_MAP[$old_name]}"
    description="${FUNCTION_DESC[$new_name]}"
    
    # 使用sed进行替换
    echo "处理函数: $old_name -> $new_name"
    
    # 首先替换函数声明
    sed -i "s|void $old_name(void)|/**\n * @brief $new_name\n * \n * $description\n */\nvoid $new_name(void)|g" "$FILE_PATH"
    
    # 然后替换函数调用
    sed -i "s|$old_name|$new_name|g" "$FILE_PATH"
done

echo "函数美化完成"