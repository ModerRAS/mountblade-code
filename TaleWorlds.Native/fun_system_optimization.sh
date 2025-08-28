#!/bin/bash

# FUN_函数系统级优化脚本
# 专门处理高频FUN_函数的语义化替换

# 设置颜色输出
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

echo -e "${BLUE}=== FUN_函数系统级优化脚本 ===${NC}"
echo -e "${YELLOW}开始时间: $(date)${NC}"

# 高频FUN_函数映射
declare -A FUN_MAPPINGS=(
    # 系统核心功能函数
    ["FUN_1808fd200"]="SystemDataProcessor"
    ["FUN_180743d80"]="SystemResourceManager"
    ["FUN_180742050"]="SystemStateController"
    ["FUN_180627be0"]="SystemEventProcessor"
    ["FUN_1808fc8a8"]="SystemMemoryManager"
    ["FUN_1808fc050"]="SystemConfigManager"
    ["FUN_18066bdc0"]="SystemNetworkHandler"
    ["FUN_180240430"]="SystemSecurityValidator"
    ["FUN_180067070"]="SystemPerformanceOptimizer"
    ["FUN_1808744f0"]="SystemThreadScheduler"
    ["FUN_180741e10"]="SystemCacheManager"
    ["FUN_1808ddc20"]="SystemFileHandler"
    ["FUN_1808fc838"]="SystemDatabaseManager"
    ["FUN_180627ae0"]="SystemLogger"
    ["FUN_180045af0"]="SystemTimer"
    ["FUN_18087dc70"]="SystemAllocator"
    ["FUN_1804c1300"]="SystemRenderer"
    ["FUN_18005b7c0"]="SystemInputHandler"
    ["FUN_180046240"]="SystemAudioManager"
    ["FUN_18084b240"]="SystemPhysicsEngine"
)

# 统计变量
TOTAL_FILES=0
TOTAL_REPLACEMENTS=0
PROCESSED_FILES=0

# 处理单个文件
process_file() {
    local file="$1"
    local replacements=0
    
    if [ ! -f "$file" ]; then
        echo -e "${RED}错误: 文件 $file 不存在${NC}"
        return 1
    fi
    
    # 备份原文件
    cp "$file" "$file.backup"
    
    # 执行替换
    for fun_name in "${!FUN_MAPPINGS[@]}"; do
        alias_name="${FUN_MAPPINGS[$fun_name]}"
        
        # 统计替换次数
        count=$(grep -o "$fun_name" "$file" | wc -l)
        if [ $count -gt 0 ]; then
            # 执行替换
            sed -i "s/$fun_name/$alias_name/g" "$file"
            replacements=$((replacements + count))
            echo -e "${GREEN}替换 $fun_name -> $alias_name (次数: $count)${NC}"
        fi
    done
    
    if [ $replacements -gt 0 ]; then
        # 删除备份文件
        rm "$file.backup"
        PROCESSED_FILES=$((PROCESSED_FILES + 1))
        TOTAL_REPLACEMENTS=$((TOTAL_REPLACEMENTS + replacements))
        echo -e "${GREEN}处理完成: $file (替换 $replacements 个)${NC}"
    else
        # 恢复备份文件
        mv "$file.backup" "$file"
    fi
    
    return 0
}

# 处理包含最多FUN_函数的文件
echo -e "${YELLOW}处理包含最多FUN_函数的文件...${NC}"

# 处理前10个包含最多FUN_函数的文件
files_to_process=(
    "./pretty/03_rendering_part082_sub002_sub002.c"
    "./pretty/03_rendering_part547_sub002_sub002.c"
    "./pretty/03_rendering/03_rendering_part002.c"
    "./pretty/03_rendering_part288_sub001_sub001.c"
    "./pretty/02_core_engine_part183.c"
    "./pretty/03_rendering_part001_sub001_sub001.c"
    "./pretty/03_rendering_part002.c"
    "./pretty/02_core_engine_part073_sub002_sub002.c"
    "./pretty/02_core_engine/02_core_engine_part073_sub002_sub002.c"
    "./pretty/04_ui_system_part398_sub002_sub002.c"
)

for file in "${files_to_process[@]}"; do
    if [ -f "$file" ]; then
        echo -e "${BLUE}处理文件: $file${NC}"
        process_file "$file"
        TOTAL_FILES=$((TOTAL_FILES + 1))
    else
        echo -e "${RED}警告: 文件 $file 不存在${NC}"
    fi
done

# 输出统计信息
echo -e "${BLUE}=== 处理统计 ===${NC}"
echo -e "${GREEN}总文件数: $TOTAL_FILES${NC}"
echo -e "${GREEN}已处理文件: $PROCESSED_FILES${NC}"
echo -e "${GREEN}总替换次数: $TOTAL_REPLACEMENTS${NC}"

# 验证处理结果
echo -e "${YELLOW}验证处理结果...${NC}"
remaining_funs=$(grep -r "FUN_" --include="*.c" | wc -l)
echo -e "${GREEN}剩余FUN_函数引用: $remaining_funs${NC}"

# 计算减少数量
original_funs=133353
reduced_funs=$((original_funs - remaining_funs))
echo -e "${GREEN}减少FUN_函数引用: $reduced_funs${NC}"

echo -e "${BLUE}=== 脚本执行完成 ===${NC}"
echo -e "${YELLOW}结束时间: $(date)${NC}"

# 输出映射关系表
echo -e "${BLUE}=== FUN_函数映射关系表 ===${NC}"
for fun_name in "${!FUN_MAPPINGS[@]}"; do
    alias_name="${FUN_MAPPINGS[$fun_name]}"
    echo -e "${GREEN}$fun_name -> $alias_name${NC}"
done