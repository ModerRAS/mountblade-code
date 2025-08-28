#!/bin/bash

# FUN_函数批量处理脚本
# 处理最常见的FUN_函数，替换为语义化别名

echo "开始FUN_函数批量处理..."

# 定义最常见的FUN_函数别名映射
declare -A fun_aliases=(
    ["FUN_180847820"]="SystemCoreProcessor"
    ["FUN_1808fd200"]="SystemDataManager"
    ["FUN_18084b240"]="SystemMemoryManager"
    ["FUN_180743d60"]="SystemStateController"
    ["FUN_1808aed00"]="SystemEventProcessor"
    ["FUN_180744cc0"]="SystemResourceHandler"
    ["FUN_18066bdc0"]="SystemConfigManager"
    ["FUN_180645c10"]="SystemDataValidator"
    ["FUN_180897520"]="SystemPerformanceOptimizer"
    ["FUN_18088c740"]="SystemSecurityChecker"
    ["FUN_18076b390"]="SystemNetworkManager"
    ["FUN_18066d370"]="SystemThreadManager"
    ["FUN_180899ef0"]="SystemErrorHandler"
    ["FUN_180630b20"]="SystemInitializer"
    ["FUN_180849030"]="SystemCleanupHandler"
    ["FUN_1800b8300"]="SystemBufferManager"
    ["FUN_18055f260"]="SystemFileHandler"
    ["FUN_180626f80"]="SystemLockManager"
    ["FUN_180743d80"]="SystemSignalHandler"
    ["FUN_180742050"]="SystemTimerManager"
)

# 处理每个FUN_函数
for fun_name in "${!fun_aliases[@]}"; do
    alias_name="${fun_aliases[$fun_name]}"
    echo "处理 $fun_name -> $alias_name"
    
    # 在所有文件中替换函数定义
    find pretty/ -name "*.c" -type f -exec sed -i "s/void $fun_name(/void $alias_name(/g" {} \;
    find pretty/ -name "*.c" -type f -exec sed -i "s/int $fun_name(/int $alias_name(/g" {} \;
    find pretty/ -name "*.c" -type f -exec sed -i "s/uint $fun_name(/uint $alias_name(/g" {} \;
    find pretty/ -name "*.c" -type f -exec sed -i "s/bool $fun_name(/bool $alias_name(/g" {} \;
    find pretty/ -name "*.c" -type f -exec sed -i "s/char \*$fun_name(/char *$alias_name(/g" {} \;
    find pretty/ -name "*.c" -type f -exec sed -i "s/undefined8 $fun_name(/undefined8 $alias_name(/g" {} \;
    find pretty/ -name "*.c" -type f -exec sed -i "s/undefined4 $fun_name(/undefined4 $alias_name(/g" {} \;
    find pretty/ -name "*.c" -type f -exec sed -i "s/undefined $fun_name(/undefined $alias_name(/g" {} \;
    
    # 在所有文件中替换函数调用
    find pretty/ -name "*.c" -type f -exec sed -i "s/$fun_name(/$alias_name(/g" {} \;
    
    # 替换函数指针引用
    find pretty/ -name "*.c" -type f -exec sed -i "s/\&$fun_name/\&$alias_name/g" {} \;
    find pretty/ -name "*.c" -type f -exec sed -i "s/\*$fun_name/\*$alias_name/g" {} \;
    
    echo "✓ $fun_name 已替换为 $alias_name"
done

echo "FUN_函数批量处理完成！"

# 统计处理结果
echo "统计处理结果..."
total_fun=$(grep -r "FUN_" pretty/ | grep -v ".bak" | wc -l)
echo "剩余FUN_函数数量: $total_fun"