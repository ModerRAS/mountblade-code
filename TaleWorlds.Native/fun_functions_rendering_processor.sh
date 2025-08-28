#!/bin/bash

# FUN_函数优化处理脚本 - 2025年8月28日
# 专门处理渲染系统模块的FUN_函数优化

echo "=== FUN_函数优化处理脚本 ==="
echo "开始时间: $(date)"
echo

# 定义目标文件
TARGET_FILE="pretty/03_rendering_part287_sub001_sub001.c"

# 检查文件是否存在
if [ ! -f "$TARGET_FILE" ]; then
    echo "错误: 目标文件 $TARGET_FILE 不存在"
    exit 1
fi

echo "处理文件: $TARGET_FILE"

# 统计处理前的FUN_函数数量
FUN_COUNT_BEFORE=$(grep -c "FUN_" "$TARGET_FILE")
echo "处理前FUN_函数数量: $FUN_COUNT_BEFORE"

# 创建临时文件
TEMP_FILE="${TARGET_FILE}.tmp"

# 定义FUN_函数到语义化别名的映射
# 渲染系统相关函数
declare -A FUN_MAPPING=(
    # 渲染核心函数
    ["FUN_18054a540"]="RenderingCoreProcessor"
    ["FUN_180567870"]="RenderingSystemInitializer"
    ["FUN_180567960"]="RenderingSystemManager"
    ["FUN_180567730"]="RenderingSystemController"
    ["FUN_18060ef00"]="RenderingSystemValidator"
    
    # 数据处理函数
    ["FUN_180542260"]="RenderingDataProcessor"
    ["FUN_180541920"]="RenderingSceneProcessor"
    ["FUN_1805425a0"]="RenderingObjectProcessor"
    ["FUN_1805428e0"]="RenderingStateProcessor"
    
    # 内存管理函数
    ["FUN_18064e900"]="RenderingMemoryManager"
    ["FUN_18062b420"]="RenderingMemoryAllocator"
    ["FUN_1808fc050"]="RenderingSecurityChecker"
    
    # 几何处理函数
    ["FUN_18049c310"]="RenderingGeometryProcessor"
    ["FUN_18049c670"]="RenderingTransformProcessor"
    ["FUN_18049c9d0"]="RenderingMatrixProcessor"
    
    # 缓冲区管理函数
    ["FUN_18054d9c0"]="RenderingBufferManager"
    ["FUN_18054dd20"]="RenderingBufferProcessor"
    ["FUN_18054e080"]="RenderingBufferAllocator"
    
    # 资源管理函数
    ["FUN_18054e3e0"]="RenderingResourceManager"
    ["FUN_18054e740"]="RenderingResourceLoader"
    ["FUN_18054eaa0"]="RenderingResourceAllocator"
    
    # 着色器处理函数
    ["FUN_18054ee00"]="RenderingShaderProcessor"
    ["FUN_18054f160"]="RenderingShaderManager"
    ["FUN_18054f4c0"]="RenderingShaderCompiler"
    
    # 纹理处理函数
    ["FUN_18054f820"]="RenderingTextureProcessor"
    ["FUN_18054fb80"]="RenderingTextureManager"
    ["FUN_18054fee0"]="RenderingTextureLoader"
    
    # 材质处理函数
    ["FUN_180552400"]="RenderingMaterialProcessor"
    ["FUN_180552760"]="RenderingMaterialManager"
    ["FUN_180552ac0"]="RenderingMaterialAllocator"
)

# 处理文件
echo "开始处理FUN_函数..."

# 复制原文件到临时文件
cp "$TARGET_FILE" "$TEMP_FILE"

# 遍历所有映射，执行替换
for fun_name in "${!FUN_MAPPING[@]}"; do
    alias_name="${FUN_MAPPING[$fun_name]}"
    
    # 统计当前FUN_函数出现次数
    count=$(grep -c "$fun_name" "$TEMP_FILE")
    
    if [ $count -gt 0 ]; then
        echo "处理 $fun_name -> $alias_name (出现次数: $count)"
        
        # 执行替换
        sed -i "s/$fun_name/$alias_name/g" "$TEMP_FILE"
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
echo "备份文件: ${TARGET_FILE}.backup.$(date +%Y%m%d_%H%M%S)"

# 验证处理结果
echo "验证处理结果..."
NEW_FUN_COUNT=$(grep -c "FUN_" "$TARGET_FILE")
echo "最终FUN_函数数量: $NEW_FUN_COUNT"

echo
echo "=== 处理完成 ==="
echo "结束时间: $(date)"
echo "总处理FUN_函数数量: $PROCESSED_COUNT"