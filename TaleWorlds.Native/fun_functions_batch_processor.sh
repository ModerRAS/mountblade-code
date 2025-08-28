#!/bin/bash

# FUN_函数批量处理脚本
# 用于将最常见的FUN_函数替换为语义化别名

# 定义FUN_函数到语义化别名的映射
declare -A FUN_MAPPING=(
    # 核心内存管理函数
    ["FUN_18064e900"]="CoreMemoryPoolInitializer"
    ["FUN_18062b420"]="CoreMemoryPoolAllocator"
    ["FUN_1806277c0"]="CoreMemoryPoolProcessor"
    ["FUN_18062b1e0"]="CoreMemoryPoolReallocator"
    ["FUN_18064e990"]="CoreMemoryPoolCleaner"
    ["FUN_180627910"]="CoreMemoryPoolValidator"
    
    # 系统初始化和配置函数
    ["FUN_1808fc050"]="SystemSecurityChecker"
    ["FUN_180742250"]="SystemInitializer"
    ["FUN_180768400"]="SystemConfigManager"
    ["FUN_180768360"]="SystemStateManager"
    
    # 数据处理函数
    ["FUN_18074b880"]="DataProcessor"
    ["FUN_180749ef0"]="DataTransformer"
    ["FUN_18062b8b0"]="DataValidator"
    
    # 网络和通信函数
    ["FUN_18008f0d0"]="NetworkConnectionManager"
    ["FUN_18008d070"]="NetworkDataProcessor"
    ["FUN_18008f140"]="NetworkProtocolHandler"
    
    # 高级系统函数
    ["FUN_18088c790"]="AdvancedSystemProcessor"
    ["FUN_1808fd400"]="AdvancedSystemController"
    ["FUN_18010cbc0"]="AdvancedSystemOptimizer"
    ["FUN_1808ddf80"]="AdvancedSystemManager"
)

# 处理包含FUN_函数的文件
process_file() {
    local file="$1"
    local modified=false
    
    # 检查文件是否存在
    if [[ ! -f "$file" ]]; then
        return 1
    fi
    
    # 为每个FUN_函数创建备份并替换
    for fun_name in "${!FUN_MAPPING[@]}"; do
        alias_name="${FUN_MAPPING[$fun_name]}"
        
        # 检查文件中是否包含该FUN_函数
        if grep -q "$fun_name" "$file"; then
            # 创建备份
            cp "$file" "$file.bak"
            
            # 替换FUN_函数调用
            sed -i "s/$fun_name/$alias_name/g" "$file"
            
            echo "处理文件: $file - 替换 $fun_name 为 $alias_name"
            modified=true
        fi
    done
    
    return 0
}

# 主处理流程
main() {
    echo "开始FUN_函数批量处理..."
    echo "处理函数数量: ${#FUN_MAPPING[@]}"
    
    # 查找包含FUN_函数的文件
    find pretty/ -name "*.c" -exec grep -l "FUN_" {} \; | while read -r file; do
        process_file "$file"
    done
    
    echo "FUN_函数批量处理完成"
    
    # 统计处理结果
    echo "统计处理结果..."
    total_count=$(grep -r "FUN_" pretty/ | wc -l)
    echo "剩余FUN_函数调用数量: $total_count"
}

# 执行主流程
main "$@"