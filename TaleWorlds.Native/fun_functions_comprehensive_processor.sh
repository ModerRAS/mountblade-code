#!/bin/bash

# 综合FUN_函数批量处理脚本 - 2025年8月28日
# 处理所有高频FUN_函数的优化替换

echo "=== 综合FUN_函数批量处理脚本 ==="
echo "开始时间: $(date)"
echo

# 定义目标文件 - 处理包含最多FUN_函数的文件
TARGET_FILES=(
    "pretty/03_rendering_part287_sub001_sub001.c"
    "pretty/03_rendering_part082_sub002_sub002.c"
    "pretty/99_part_04_part015_sub002_sub002.c"
    "pretty/03_rendering_part547_sub002_sub002.c"
    "pretty/99_part_10_part053_sub002_sub002.c"
)

# 统计总处理数量
TOTAL_PROCESSED=0

# 定义高频FUN_函数到语义化别名的映射
declare -A FUN_MAPPING=(
    # 核心系统函数
    ["FUN_18064e900"]="CoreMemoryPoolInitializer"
    ["FUN_1808fc050"]="SystemSecurityChecker"
    ["FUN_18062b420"]="CoreMemoryPoolAllocator"
    ["FUN_18063f6b0"]="SystemDataValidator"
    ["FUN_18063f6e0"]="SystemDataProcessor"
    ["FUN_18063f710"]="SystemDataInitializer"
    ["FUN_18063f740"]="SystemDataManager"
    ["FUN_18063f770"]="SystemDataController"
    
    # 渲染系统函数
    ["FUN_18054a540"]="RenderingCoreProcessor"
    ["FUN_180567870"]="RenderingSystemInitializer"
    ["FUN_180567960"]="RenderingSystemManager"
    ["FUN_180567730"]="RenderingSystemController"
    ["FUN_18060ef00"]="RenderingSystemValidator"
    ["FUN_180542260"]="RenderingDataProcessor"
    ["FUN_180541920"]="RenderingSceneProcessor"
    ["FUN_1805425a0"]="RenderingObjectProcessor"
    ["FUN_1805428e0"]="RenderingStateProcessor"
    
    # 内存管理函数
    ["FUN_18062b440"]="MemoryPoolManager"
    ["FUN_18062b470"]="MemoryPoolProcessor"
    ["FUN_18062b4a0"]="MemoryPoolAllocator"
    ["FUN_18062b4d0"]="MemoryPoolCleaner"
    ["FUN_18062b500"]="MemoryPoolValidator"
    
    # 数据处理函数
    ["FUN_18063f7a0"]="DataStructureProcessor"
    ["FUN_18063f7d0"]="DataStructureManager"
    ["FUN_18063f800"]="DataStructureInitializer"
    ["FUN_18063f830"]="DataStructureAllocator"
    ["FUN_18063f860"]="DataStructureCleaner"
    
    # 网络系统函数
    ["FUN_1800f7260"]="NetworkSystemController"
    ["FUN_1800f7290"]="NetworkProtocolHandler"
    ["FUN_1800f72c0"]="NetworkConnectionManager"
    ["FUN_1800f72f0"]="NetworkDataProcessor"
    ["FUN_1800f7320"]="NetworkSecurityValidator"
    
    # UI系统函数
    ["FUN_180631000"]="UISystemProcessor"
    ["FUN_180631b90"]="UIEventManager"
    ["FUN_180631f30"]="UIRenderer"
    ["FUN_180632270"]="UIInputHandler"
    ["FUN_1806325b0"]="UILayoutManager"
    
    # 工具函数
    ["FUN_1803be690"]="UtilityFunctionProcessor"
    ["FUN_1803be9f0"]="UtilityFunctionManager"
    ["FUN_1803bed50"]="UtilityFunctionInitializer"
    ["FUN_1803bf0b0"]="UtilityFunctionAllocator"
    ["FUN_1803bf410"]="UtilityFunctionCleaner"
)

# 处理每个文件
for TARGET_FILE in "${TARGET_FILES[@]}"; do
    echo "处理文件: $TARGET_FILE"
    
    # 检查文件是否存在
    if [ ! -f "$TARGET_FILE" ]; then
        echo "警告: 文件 $TARGET_FILE 不存在，跳过"
        continue
    fi
    
    # 统计处理前的FUN_函数数量
    FUN_COUNT_BEFORE=$(grep -c "FUN_" "$TARGET_FILE")
    echo "处理前FUN_函数数量: $FUN_COUNT_BEFORE"
    
    # 创建临时文件
    TEMP_FILE="${TARGET_FILE}.tmp"
    
    # 复制原文件到临时文件
    cp "$TARGET_FILE" "$TEMP_FILE"
    
    # 遍历所有映射，执行替换
    FILE_PROCESSED=0
    for fun_name in "${!FUN_MAPPING[@]}"; do
        alias_name="${FUN_MAPPING[$fun_name]}"
        
        # 统计当前FUN_函数出现次数
        count=$(grep -c "$fun_name" "$TEMP_FILE")
        
        if [ $count -gt 0 ]; then
            echo "  处理 $fun_name -> $alias_name (出现次数: $count)"
            
            # 执行替换
            sed -i "s/$fun_name/$alias_name/g" "$TEMP_FILE"
            FILE_PROCESSED=$((FILE_PROCESSED + count))
        fi
    done
    
    # 统计处理后的FUN_函数数量
    FUN_COUNT_AFTER=$(grep -c "FUN_" "$TEMP_FILE")
    echo "处理后FUN_函数数量: $FUN_COUNT_AFTER"
    
    # 计算处理的函数数量
    PROCESSED_COUNT=$((FUN_COUNT_BEFORE - FUN_COUNT_AFTER))
    echo "成功处理FUN_函数数量: $PROCESSED_COUNT"
    
    # 备份原文件
    cp "$TARGET_FILE" "${TARGET_FILE}.backup.$(date +%Y%m%d_%H%M%S)"
    
    # 替换原文件
    mv "$TEMP_FILE" "$TARGET_FILE"
    
    echo "文件处理完成: $TARGET_FILE"
    echo
    
    # 累加到总处理数量
    TOTAL_PROCESSED=$((TOTAL_PROCESSED + PROCESSED_COUNT))
done

echo "=== 批量处理完成 ==="
echo "结束时间: $(date)"
echo "总处理FUN_函数数量: $TOTAL_PROCESSED"

# 验证整体处理结果
echo "验证整体处理结果..."
TOTAL_FUN_BEFORE=$(find pretty -name "*.c" -exec grep -c "FUN_" {} + | awk '{sum += $1} END {print sum}')
echo "当前总FUN_函数数量: $TOTAL_FUN_BEFORE"

echo "处理完成！"