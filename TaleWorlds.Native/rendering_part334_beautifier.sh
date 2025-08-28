#!/bin/bash

# 渲染系统高级控制和数据处理模块美化脚本
# 用于 pretty/03_rendering_part334.c 文件的 FUN_ 函数语义化替换

# 定义 FUN_ 函数到语义化别名的映射
declare -A FUN_MAPPING=(
    # 渲染对象管理函数
    ["FUN_180443820"]="RenderingObjectRemover"          # 渲染对象移除器
    ["FUN_180443930"]="RenderingDataTransformer"       # 渲染数据变换器
    ["FUN_1804439b0"]="RenderingObjectProcessor"       # 渲染对象处理器
    
    # 渲染资源管理函数
    ["FUN_1803982f0"]="RenderingResourceCleaner"        # 渲染资源清理器
    ["FUN_180398640"]="RenderingResourceFinalizer"       # 渲染资源终结器
    ["FUN_180080810"]="RenderingResourceManager"        # 渲染资源管理器
    ["FUN_1800b8630"]="RenderingObjectListManager"     # 渲染对象列表管理器
    
    # 渲染数据处理函数
    ["FUN_1802f4040"]="RenderingDataProcessor"         # 渲染数据处理器
    ["FUN_18063a7b0"]="RenderingTransformProcessor"     # 渲染变换处理器
    
    # 渲染状态管理函数
    ["FUN_1800b8f50"]="RenderingStateManager"          # 渲染状态管理器
    ["FUN_18063a9c0"]="RenderingStatusUpdater"         # 渲染状态更新器
    ["FUN_1800b8fc0"]="RenderingStateValidator"        # 渲染状态验证器
    
    # 渲染参数处理函数
    ["FUN_18063a800"]="RenderingParameterProcessor"    # 渲染参数处理器
    ["FUN_18063a870"]="RenderingParameterValidator"    # 渲染参数验证器
    ["FUN_18063a8e0"]="RenderingParameterManager"      # 渲染参数管理器
    
    # 渲染内存管理函数
    ["FUN_1800b9030"]="RenderingMemoryAllocator"       # 渲染内存分配器
    ["FUN_1800b90a0"]="RenderingMemoryCleaner"         # 渲染内存清理器
    ["FUN_1800b9110"]="RenderingMemoryManager"         # 渲染内存管理器
    
    # 渲染事件处理函数
    ["FUN_1800b9180"]="RenderingEventHandler"          # 渲染事件处理器
    ["FUN_1800b91f0"]="RenderingEventNotifier"         # 渲染事件通知器
    ["FUN_1800b9260"]="RenderingEventManager"          # 渲染事件管理器
    
    # 渲染配置管理函数
    ["FUN_1800b92d0"]="RenderingConfigManager"          # 渲染配置管理器
    ["FUN_1800b9340"]="RenderingConfigValidator"        # 渲染配置验证器
    ["FUN_1800b93b0"]="RenderingConfigProcessor"        # 渲染配置处理器
    
    # 渲染线程管理函数
    ["FUN_1800b9420"]="RenderingThreadManager"          # 渲染线程管理器
    ["FUN_1800b9490"]="RenderingThreadSynchronizer"     # 渲染线程同步器
    ["FUN_1800b9500"]="RenderingThreadProcessor"        # 渲染线程处理器
    
    # 渲染优化函数
    ["FUN_1800b9570"]="RenderingOptimizer"              # 渲染优化器
    ["FUN_1800b95e0"]="RenderingPerformanceMonitor"     # 渲染性能监控器
    ["FUN_1800b9650"]="RenderingQualityController"      # 渲染质量控制器的
)

# 目标文件路径
TARGET_FILE="pretty/03_rendering_part334.c"

# 备份原文件
cp "$TARGET_FILE" "$TARGET_FILE.bak"

echo "开始美化文件: $TARGET_FILE"

# 为每个 FUN_ 函数添加语义化别名定义
for fun_name in "${!FUN_MAPPING[@]}"; do
    alias_name="${FUN_MAPPING[$fun_name]}"
    
    # 在文件开头添加别名定义（在第一个常量定义之前）
    if ! grep -q "#define $alias_name" "$TARGET_FILE"; then
        # 查找第一个常量定义的位置
        first_const_line=$(grep -n "^#define" "$TARGET_FILE" | head -1 | cut -d: -f1)
        
        if [ -n "$first_const_line" ]; then
            # 在第一个常量定义之前插入别名定义
            sed -i "${first_const_line}i\\n// 渲染系统函数别名定义\\n#define $alias_name $fun_name  // ${FUN_MAPPING[$fun_name]}" "$TARGET_FILE"
            echo "添加别名定义: $alias_name -> $fun_name"
        fi
    fi
done

# 替换文件中的 FUN_ 函数调用
for fun_name in "${!FUN_MAPPING[@]}"; do
    alias_name="${FUN_MAPPING[$fun_name]}"
    
    # 统计替换次数
    count_before=$(grep -c "$fun_name" "$TARGET_FILE")
    
    # 执行替换
    sed -i "s/$fun_name/$alias_name/g" "$TARGET_FILE"
    
    count_after=$(grep -c "$fun_name" "$TARGET_FILE")
    replaced_count=$((count_before - count_after))
    
    if [ $replaced_count -gt 0 ]; then
        echo "替换函数调用: $fun_name -> $alias_name (替换了 $replaced_count 处)"
    fi
done

# 更新函数声明中的 FUN_ 函数名
for fun_name in "${!FUN_MAPPING[@]}"; do
    alias_name="${FUN_MAPPING[$fun_name]}"
    
    # 替换函数声明
    sed -i "s/^void $fun_name(/void $alias_name(/g" "$TARGET_FILE"
    sed -i "s/^int32_t $fun_name(/int32_t $alias_name(/g" "$TARGET_FILE"
    sed -i "s/^uint32_t $fun_name(/uint32_t $alias_name(/g" "$TARGET_FILE"
    sed -i "s/^int64_t $fun_name(/int64_t $alias_name(/g" "$TARGET_FILE"
    sed -i "s/^uint64_t $fun_name(/uint64_t $alias_name(/g" "$TARGET_FILE"
done

echo "文件美化完成: $TARGET_FILE"
echo "备份文件保存为: $TARGET_FILE.bak"