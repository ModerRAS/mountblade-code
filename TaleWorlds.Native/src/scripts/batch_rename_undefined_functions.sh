#!/bin/bash

# 批量重命名undefined函数的脚本
# 这个脚本会批量重命名99_unmatched_functions.c中的undefined函数

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 函数映射表
declare -A FUNCTION_MAP=(
    ["FUN_1802542a0"]="SystemDataProcessor"
    ["FUN_180254410"]="SystemConfigurationManager"
    ["FUN_1801e7680"]="SystemMemoryAllocator"
    ["FUN_1801cfcb0"]="SystemStatusChecker"
    ["FUN_1801cfcf0"]="SystemErrorHandler"
    ["FUN_1801cfd30"]="SystemEventHandler"
    ["FUN_1801cfe20"]="SystemResourceManager"
    ["FUN_1801cfab0"]="SystemSecurityManager"
    ["FUN_1801cfb90"]="SystemPerformanceMonitor"
    ["FUN_1801eb1e0"]="SystemNetworkHandler"
    ["FUN_1801ecb30"]="SystemDatabaseManager"
    ["FUN_1801ecbb0"]="SystemFileSystemHandler"
    ["FUN_1801eb0f0"]="SystemProcessManager"
    ["FUN_1801deed0"]="SystemThreadScheduler"
    ["FUN_1801eb320"]="SystemMemoryOptimizer"
    ["FUN_1801eb3d0"]="SystemCacheManager"
    ["FUN_1803f5b70"]="SystemVirtualMemoryHandler"
    ["FUN_1801f34f0"]="SystemDeviceManager"
    ["FUN_1801f9cf0"]="SystemDriverHandler"
    ["FUN_1801feca0"]="SystemServiceManager"
    ["FUN_180239530"]="SystemProtocolHandler"
    ["FUN_180239610"]="SystemEncryptionManager"
    ["FUN_180239720"]="SystemAuthenticationHandler"
    ["FUN_180234880"]="SystemAuthorizationManager"
    ["FUN_18023eac0"]="SystemSessionManager"
)

# 批量替换函数
for func_name in "${!FUNCTION_MAP[@]}"; do
    new_name="${FUNCTION_MAP[$func_name]}"
    
    # 替换函数声明
    sed -i "s/undefined $func_name;/undefined $new_name;/g" "$INPUT_FILE"
    
    # 替换注释中的函数名
    sed -i "s/函数: undefined $func_name;/函数: ${new_name描述函数};/g" "$INPUT_FILE"
    
    echo "已将 $func_name 重命名为 $new_name"
done

echo "批量重命名完成"