#!/bin/bash

# 网络函数重命名脚本
# 用于批量重命名网络模块中的FUN_函数

# 定义要重命名的函数映射
declare -A function_mappings=(
    ["FUN_180854fc3"]="NetworkConnectionFinalizer"
    ["FUN_18085510b"]="NetworkResourceCleaner"
    ["FUN_1808556a0"]="NetworkContextInitializer"
    ["FUN_1808556b9"]="NetworkMemoryAllocator"
    ["FUN_180855774"]="NetworkBufferFlusher"
    ["FUN_180855780"]="NetworkConnectionValidator"
    ["FUN_180855810"]="NetworkPacketValidator"
    ["FUN_180856512"]="NetworkSystemInitializer"
    ["FUN_180856ec0"]="NetworkDataProcessor"
    ["FUN_18085791f"]="NetworkErrorHandler"
    ["FUN_180857aa1"]="NetworkStatusChecker"
    ["FUN_180857b70"]="NetworkConnectionHandler"
    ["FUN_180857bad"]="NetworkPacketSender"
    ["FUN_180857c7a"]="NetworkConnectionCloser"
    ["FUN_180857c8f"]="NetworkStatusUpdater"
    ["FUN_180857de5"]="NetworkDataValidator"
)

# 遍历函数映射并执行替换
for old_name in "${!function_mappings[@]}"; do
    new_name="${function_mappings[$old_name]}"
    
    # 使用sed进行替换
    sed -i "s/void $old_name(/void $new_name(/g" "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
    sed -i "s/\/\/ 函数: void $old_name/\/\/ 函数: void $new_name/g" "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
    
    echo "重命名函数: $old_name -> $new_name"
done

echo "函数重命名完成"