#!/bin/bash

# 综合FUN_函数处理器 - 2025年8月28日
# 专门处理包含大量FUN_函数的文件

echo "=== 综合FUN_函数处理器 ==="
echo "开始时间: $(date)"
echo

# 定义高频FUN_函数到语义化别名的映射
declare -A FUN_MAPPING=(
    # 系统核心功能函数
    ["FUN_1808fd200"]="SystemCoreManager"
    ["FUN_180743d80"]="SystemEventHandler"
    ["FUN_180742050"]="SystemStateValidator"
    ["FUN_180627be0"]="SystemInitializer"
    ["FUN_1808fc8a8"]="SystemSecurityChecker"
    ["FUN_1808fc050"]="SystemSecurityValidator"
    ["FUN_18066bdc0"]="SystemMemoryController"
    ["FUN_180240430"]="SystemNetworkHandler"
    ["FUN_180067070"]="SystemFileSystemManager"
    ["FUN_1808744f0"]="SystemProcessManager"
    ["FUN_180741e10"]="SystemEventDispatcher"
    ["FUN_18010f010"]="SystemErrorHandler"
    ["FUN_1808ddc20"]="SystemTimerManager"
    ["FUN_1806279c0"]="SystemLogger"
    ["FUN_1808fc838"]="SystemMonitor"
    ["FUN_180627ae0"]="SystemDataProcessor"
    ["FUN_180045af0"]="SystemResourceManager"
    ["FUN_18087dc70"]="SystemThreadManager"
    ["FUN_1804c1300"]="SystemNetworkManager"
    ["FUN_18005b7c0"]="SystemCacheManager"
    
    # 渲染系统函数
    ["FUN_180645c10"]="RenderingBufferManager"
    ["FUN_180849030"]="RenderingDatabaseProcessor"
    ["FUN_18055f260"]="RenderingSyncProcessor"
    ["FUN_1808aed00"]="RenderingLockProcessor"
    ["FUN_180744cc0"]="RenderingAccessProcessor"
    ["FUN_1806d6f60"]="RenderingResourceProcessor"
    ["FUN_180847820"]="RenderingFlowProcessor"
    ["FUN_18088c740"]="RenderingSecurityChecker"
    ["FUN_18076b390"]="RenderingValidationProcessor"
    ["FUN_18066d370"]="RenderingInitializationProcessor"
    ["FUN_180899ef0"]="RenderingCleanupProcessor"
    ["FUN_180630b20"]="RenderingAllocationProcessor"
    ["FUN_1800b8300"]="RenderingCommunicationProcessor"
    ["FUN_1806d80c0"]="RenderingMonitoringProcessor"
    ["FUN_180741e30"]="RenderingRenderProcessor"
    ["FUN_180742070"]="RenderingDrawProcessor"
    ["FUN_180743d90"]="RenderingShaderProcessor"
    ["FUN_180744cd0"]="RenderingTextureProcessor"
    ["FUN_180745ce0"]="RenderingGeometryProcessor"
    ["FUN_180746cf0"]="RenderingLightProcessor"
    ["FUN_180747d00"]="RenderingCameraProcessor"
    ["FUN_180748d10"]="RenderingTransformProcessor"
    ["FUN_180749d20"]="RenderingAnimationProcessor"
    ["FUN_18074ad30"]="RenderingMaterialProcessor"
    ["FUN_18074bd40"]="RenderingMeshProcessor"
    ["FUN_18074cd50"]="RenderingVertexProcessor"
    ["FUN_18074dd60"]="RenderingFragmentProcessor"
    ["FUN_18074ed70"]="RenderingComputeProcessor"
    ["FUN_18074fd80"]="RenderingTessellationProcessor"
    
    # 更多高频函数
    ["FUN_18064e900"]="RenderingCoreProcessor"
    ["FUN_18062b420"]="RenderingMemoryAllocator"
    ["FUN_18064b7f0"]="RenderingShaderManager"
    ["FUN_18064c1e0"]="RenderingTextureHandler"
    ["FUN_18064c530"]="RenderingBufferManager"
    ["FUN_18064c880"]="RenderingPipelineController"
    ["FUN_18064cbd0"]="RenderingLightingSystem"
    ["FUN_18064d020"]="RenderingCameraManager"
    ["FUN_18064d470"]="RenderingMaterialProcessor"
    ["FUN_18064d8c0"]="RenderingGeometryHandler"
    ["FUN_18064dd10"]="RenderingAnimationSystem"
    ["FUN_18064e160"]="RenderingPostProcessor"
    ["FUN_18064e5b0"]="RenderingUIRenderer"
    ["FUN_18064ea00"]="RenderingDebugManager"
)

# 目标文件列表
TARGET_FILES=(
    "pretty/03_rendering_part287_sub001_sub001.c"
    "pretty/03_rendering_part082_sub002_sub002.c"
    "pretty/03_rendering_part547_sub002_sub002.c"
    "pretty/03_rendering/03_rendering_part002.c"
    "pretty/03_rendering_part288_sub001_sub001.c"
    "pretty/02_core_engine_part183.c"
    "pretty/03_rendering_part001_sub001_sub001.c"
    "pretty/03_rendering_part002.c"
    "pretty/02_core_engine_part073_sub002_sub002.c"
    "pretty/02_core_engine/02_core_engine_part073_sub002_sub002.c"
)

# 统计总处理数量
TOTAL_PROCESSED=0

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
    
    # 只有实际处理了函数才备份和替换文件
    if [ $PROCESSED_COUNT -gt 0 ]; then
        # 备份原文件
        cp "$TARGET_FILE" "${TARGET_FILE}.backup.$(date +%Y%m%d_%H%M%S)"
        
        # 替换原文件
        mv "$TEMP_FILE" "$TARGET_FILE"
        
        echo "文件处理完成: $TARGET_FILE"
        echo
        
        # 累加到总处理数量
        TOTAL_PROCESSED=$((TOTAL_PROCESSED + PROCESSED_COUNT))
    else
        # 删除临时文件
        rm -f "$TEMP_FILE"
        echo "文件无需处理: $TARGET_FILE"
        echo
    fi
done

echo "=== 综合处理完成 ==="
echo "结束时间: $(date)"
echo "总处理FUN_函数数量: $TOTAL_PROCESSED"

# 验证整体处理结果
echo "验证整体处理结果..."
TOTAL_FUN_BEFORE=$(grep -r "FUN_" pretty/ | wc -l)
echo "当前总FUN_函数数量: $TOTAL_FUN_BEFORE"

echo "处理完成！"