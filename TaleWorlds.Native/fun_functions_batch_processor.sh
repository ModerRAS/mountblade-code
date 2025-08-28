#!/bin/bash

# FUN_函数批量处理脚本
# 用于处理剩余的高频FUN_函数调用

# 定义颜色输出
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

# 获取脚本所在目录
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR"

echo -e "${BLUE}=== FUN_函数批量处理脚本 ===${NC}"
echo "开始处理高频FUN_函数调用..."

# 定义高频FUN_函数列表及其对应的语义化别名
declare -A FUN_FUNCTIONS=(
    ["FUN_18064e900"]="CoreEngineMemoryPoolCleaner"
    ["FUN_1808fc050"]="SystemSecurityChecker"
    ["FUN_18062b420"]="CoreEngineMemoryPoolAllocator"
    ["FUN_18062b1e0"]="CoreEngineMemoryPoolReallocator"
    ["FUN_180742250"]="SystemDataValidator"
    ["FUN_1806277c0"]="CoreEngineDataBufferProcessor"
    ["FUN_18074b880"]="SystemDataProcessor"
    ["FUN_180768400"]="SystemMemoryManager"
    ["FUN_18064e990"]="CoreEngineSystemCleanup"
    ["FUN_1808aed00"]="SystemErrorHandler"
    ["FUN_180768360"]="SystemMemoryAllocator"
    ["FUN_180627ae0"]="CoreEngineDataTransformer"
    ["FUN_180626f80"]="SystemDataInitializer"
    ["FUN_180741e10"]="SystemResourceManager"
    ["FUN_18064d630"]="SystemDataCleaner"
    ["FUN_180744cc0"]="SystemStatusChecker"
    ["FUN_1808995c0"]="SystemConfigManager"
    ["FUN_18005ea90"]="SystemInitializer"
    ["FUN_180769ed0"]="SystemDataAnalyzer"
    ["FUN_180059ba0"]="SystemResourceCleaner"
)

# 统计处理的文件数量
processed_files=0
total_replacements=0

# 遍历pretty目录下的所有.c文件
echo -e "${YELLOW}开始扫描和FUN_函数调用...${NC}"
find pretty -name "*.c" -type f | while read -r file; do
    # 检查文件是否包含FUN_函数调用
    has_fun_calls=false
    file_replacements=0
    
    for fun_function in "${!FUN_FUNCTIONS[@]}"; do
        if grep -q "$fun_function" "$file"; then
            has_fun_calls=true
            break
        fi
    done
    
    if [ "$has_fun_calls" = true ]; then
        echo -e "${GREEN}处理文件: $file${NC}"
        
        # 备份原文件
        cp "$file" "$file.bak"
        
        # 替换每个FUN_函数调用
        for fun_function in "${!FUN_FUNCTIONS[@]}"; do
            alias_name="${FUN_FUNCTIONS[$fun_function]}"
            
            # 统计替换次数
            count=$(grep -o "$fun_function" "$file" | wc -l)
            if [ "$count" -gt 0 ]; then
                echo -e "  替换 $fun_function -> $alias_name ($count 次)"
                
                # 执行替换
                sed -i "s/$fun_function/$alias_name/g" "$file"
                
                file_replacements=$((file_replacements + count))
                total_replacements=$((total_replacements + count))
            fi
        done
        
        if [ "$file_replacements" -gt 0 ]; then
            processed_files=$((processed_files + 1))
            echo -e "  文件替换完成: $file_replacements 个替换"
        fi
        
        # 删除备份文件
        rm "$file.bak"
    fi
done

echo -e "${BLUE}=== 处理结果 ===${NC}"
echo -e "${GREEN}处理的文件数量: $processed_files${NC}"
echo -e "${GREEN}总替换次数: $total_replacements${NC}"

# 显示处理后的统计信息
echo -e "${YELLOW}剩余FUN_函数调用统计:${NC}"
grep -r "FUN_" pretty/ | wc -l | xargs echo "剩余FUN_函数调用总数:"

echo -e "${YELLOW}最频繁的FUN_函数调用:${NC}"
grep -r "FUN_" pretty/ | grep -o "FUN_[a-f0-9]\+" | sort | uniq -c | sort -nr | head -10

echo -e "${BLUE}FUN_函数批量处理完成！${NC}"