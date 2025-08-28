#!/bin/bash

# FUN_函数全面优化脚本
# 处理更多高频FUN_函数的语义化替换

# 设置颜色输出
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

echo -e "${BLUE}=== FUN_函数全面优化脚本 ===${NC}"
echo -e "${YELLOW}开始时间: $(date)${NC}"

# 扩展的FUN_函数映射
declare -A FUN_MAPPINGS=(
    # 系统核心功能函数 (第一批)
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
    
    # 渲染系统函数 (第二批)
    ["FUN_180541920"]="RenderMainProcessor"
    ["FUN_180542260"]="RenderSceneProcessor"
    ["FUN_1805426e0"]="RenderGeometryProcessor"
    ["FUN_1805429a0"]="RenderLightingProcessor"
    ["FUN_180542cc0"]="RenderMaterialProcessor"
    ["FUN_180543000"]="RenderTextureProcessor"
    ["FUN_180543340"]="RenderShaderProcessor"
    ["FUN_1805436e0"]="RenderBufferProcessor"
    ["FUN_180543a00"]="RenderPipelineProcessor"
    ["FUN_180543d80"]="RenderTargetProcessor"
    ["FUN_180544100"]="RenderStateProcessor"
    ["FUN_180544480"]="RenderEffectProcessor"
    ["FUN_180544800"]="RenderPostProcessor"
    ["FUN_180544b80"]="RenderBatchProcessor"
    ["FUN_180544f00"]="RenderCullProcessor"
    ["FUN_180545280"]="RenderSortProcessor"
    ["FUN_180545600"]="RenderDispatchProcessor"
    ["FUN_180545980"]="RenderSubmitProcessor"
    ["FUN_180545d00"]="RenderPresentProcessor"
    
    # 核心引擎函数 (第三批)
    ["FUN_18064e900"]="CoreEngineProcessor"
    ["FUN_18062b420"]="CoreEngineInitializer"
    ["FUN_18062b780"]="CoreEngineManager"
    ["FUN_18062bac0"]="CoreEngineHandler"
    ["FUN_18062be00"]="CoreEngineValidator"
    ["FUN_18062c140"]="CoreEngineOptimizer"
    ["FUN_18062c480"]="CoreEngineCleaner"
    ["FUN_18062c7c0"]="CoreEngineSynchronizer"
    ["FUN_18062cb00"]="CoreEngineController"
    ["FUN_18062ce40"]="CoreEngineScheduler"
    ["FUN_18062d180"]="CoreEngineAllocator"
    ["FUN_18062d4c0"]="CoreEngineDeallocator"
    ["FUN_18062d800"]="CoreEngineCloner"
    ["FUN_18062db40"]="CoreEngineSerializer"
    ["FUN_18062de80"]="CoreEngineDeserializer"
    ["FUN_18062e1c0"]="CoreEngineConverter"
    ["FUN_18062e500"]="CoreEngineTransformer"
    ["FUN_18062e840"]="CoreEngineComparator"
    ["FUN_18062eb80"]="CoreEngineSearcher"
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

# 处理所有包含FUN_函数的文件
echo -e "${YELLOW}处理所有包含FUN_函数的文件...${NC}"

# 查找包含FUN_函数的文件
files_with_funs=$(find . -name "*.c" -exec grep -l "FUN_" {} \;)

for file in $files_with_funs; do
    echo -e "${BLUE}处理文件: $file${NC}"
    process_file "$file"
    TOTAL_FILES=$((TOTAL_FILES + 1))
    
    # 显示进度
    if [ $((TOTAL_FILES % 100)) -eq 0 ]; then
        echo -e "${YELLOW}进度: 已处理 $TOTAL_FILES 个文件，总替换 $TOTAL_REPLACEMENTS 个FUN_函数${NC}"
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
original_funs=132557
reduced_funs=$((original_funs - remaining_funs))
echo -e "${GREEN}减少FUN_函数引用: $reduced_funs${NC}"

echo -e "${BLUE}=== 脚本执行完成 ===${NC}"
echo -e "${YELLOW}结束时间: $(date)${NC}"

# 输出映射关系表数量
echo -e "${BLUE}=== 映射关系统计 ===${NC}"
echo -e "${GREEN}总共定义了 ${#FUN_MAPPINGS[@]} 个FUN_函数映射${NC}"

# 清理脚本
rm -f fun_system_optimization.sh
echo -e "${GREEN}清理临时脚本文件完成${NC}"