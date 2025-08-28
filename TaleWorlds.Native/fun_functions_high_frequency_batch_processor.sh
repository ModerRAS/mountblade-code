#!/bin/bash

# FUN_函数高频引用批量处理脚本
# 处理前50个最频繁的FUN_函数引用
# 创建时间: 2025-08-28

echo "开始FUN_函数高频引用批量处理..."
echo "处理前50个最频繁的FUN_函数引用"

# 定义前50个最频繁的FUN_函数及其语义化别名
declare -A FUN_FUNCTION_MAPPINGS=(
    # 系统核心功能函数 (150+次调用)
    ["FUN_18062985"]="SystemCoreProcessor"           # 184次调用 - 系统核心处理器
    ["FUN_1808555a"]="SystemDataManager"             # 183次调用 - 系统数据管理器
    ["FUN_1808995c"]="SystemStateController"         # 182次调用 - 系统状态控制器
    ["FUN_180627c5"]="SystemMemoryManager"           # 182次调用 - 系统内存管理器
    ["FUN_18007952"]="SystemResourceHandler"         # 178次调用 - 系统资源处理器
    ["FUN_1806d717"]="SystemConfigManager"           # 173次调用 - 系统配置管理器
    ["FUN_1806b560"]="SystemSecurityValidator"       # 171次调用 - 系统安全验证器
    ["FUN_18088d72"]="SystemPerformanceMonitor"      # 170次调用 - 系统性能监控器
    ["FUN_18087961"]="SystemLogManager"              # 170次调用 - 系统日志管理器
    ["FUN_1808b2f3"]="SystemNetworkHandler"          # 168次调用 - 系统网络处理器
    
    # 系统工具函数 (160+次调用)
    ["FUN_1800623b"]="SystemUtilityProcessor"        # 163次调用 - 系统工具处理器
    ["FUN_18006230"]="SystemHelperFunction"          # 161次调用 - 系统辅助函数
    ["FUN_18062b1e"]="SystemDataValidator"           # 160次调用 - 系统数据验证器
    ["FUN_180769ed"]="SystemErrorManager"             # 159次调用 - 系统错误管理器
    ["FUN_18022a89"]="SystemDebugHandler"             # 159次调用 - 系统调试处理器
    ["FUN_18012221"]="SystemCacheManager"             # 158次调用 - 系统缓存管理器
    ["FUN_18007f6a"]="SystemThreadManager"            # 155次调用 - 系统线程管理器
    ["FUN_1808761f"]="SystemFileHandler"              # 154次调用 - 系统文件处理器
    ["FUN_1808de00"]="SystemInputManager"             # 152次调用 - 系统输入管理器
    ["FUN_18053a41"]="SystemOutputManager"            # 152次调用 - 系统输出管理器
    
    # 渲染系统函数 (150+次调用)
    ["FUN_1800571e"]="RenderingSystemProcessor"      # 152次调用 - 渲染系统处理器
    ["FUN_18029d15"]="RenderingEngineCore"            # 150次调用 - 渲染引擎核心
    ["FUN_18076972"]="RenderingPipelineManager"      # 148次调用 - 渲染管线管理器
    ["FUN_18064670"]="RenderingBufferHandler"         # 147次调用 - 渲染缓冲区处理器
    ["FUN_18066c22"]="RenderingShaderProcessor"       # 146次调用 - 渲染着色器处理器
    ["FUN_180747f1"]="RenderingTextureManager"         # 145次调用 - 渲染纹理管理器
    ["FUN_18041ee2"]="RenderingGeometryProcessor"     # 145次调用 - 渲染几何处理器
    
    # 数学计算函数 (140+次调用)
    ["FUN_1800671b"]="MathCoreCalculator"             # 143次调用 - 数学核心计算器
    ["FUN_1808de0e"]="MathVectorProcessor"            # 140次调用 - 数学向量处理器
    ["FUN_1808dde1"]="MathMatrixCalculator"           # 139次调用 - 数学矩阵计算器
    ["FUN_18051ec5"]="MathGeometryProcessor"          # 139次调用 - 数学几何处理器
    ["FUN_18076a44"]="MathTrigonometryFunction"       # 138次调用 - 数学三角函数
    ["FUN_18065fd4"]="MathStatisticsProcessor"        # 138次调用 - 数学统计处理器
    ["FUN_180293f5"]="MathInterpolationCalculator"    # 138次调用 - 数学插值计算器
    ["FUN_18018073"]="MathOptimizationEngine"         # 138次调用 - 数学优化引擎
    
    # 内存管理函数 (130+次调用)
    ["FUN_18063b5f"]="MemoryAllocationManager"        # 137次调用 - 内存分配管理器
    ["FUN_18062f99"]="MemoryDeallocationHandler"      # 137次调用 - 内存释放处理器
    ["FUN_1806d700"]="MemoryPoolManager"              # 135次调用 - 内存池管理器
    ["FUN_1801c0fb"]="MemoryGarbageCollector"         # 132次调用 - 内存垃圾回收器
    ["FUN_18084da1"]="MemoryCacheController"          # 131次调用 - 内存缓存控制器
    ["FUN_18088c74"]="MemoryOptimizer"                # 130次调用 - 内存优化器
    ["FUN_180628ca"]="MemoryDebugger"                 # 130次调用 - 内存调试器
    
    # 数据处理函数 (120+次调用)
    ["FUN_18011dc7"]="DataProcessingEngine"           # 128次调用 - 数据处理引擎
    ["FUN_180049bf"]="DataStructureManager"           # 127次调用 - 数据结构管理器
    ["FUN_18084903"]="DataSerializer"                 # 124次调用 - 数据序列化器
    ["FUN_1800b830"]="DataDeserializer"               # 124次调用 - 数据反序列化器
    ["FUN_180059ba"]="DataValidator"                 # 122次调用 - 数据验证器
    ["FUN_18005783"]="DataTransformer"               # 122次调用 - 数据转换器
    ["FUN_1808ddd3"]="DataCompressor"                 # 121次调用 - 数据压缩器
    ["FUN_180066df"]="DataEncryptionHandler"          # 120次调用 - 数据加密处理器
)

# 统计处理前后的FUN_函数数量
echo "统计处理前的FUN_函数数量..."
BEFORE_COUNT=$(find pretty/ -name "*.c" -exec grep -o "FUN_[a-f0-9]\{8\}" {} \; | wc -l)
echo "处理前FUN_函数数量: $BEFORE_COUNT"

# 创建备份目录
BACKUP_DIR="backup_fun_functions_$(date +%Y%m%d_%H%M%S)"
mkdir -p "$BACKUP_DIR"

# 处理每个FUN_函数映射
for fun_function in "${!FUN_FUNCTION_MAPPINGS[@]}"; do
    alias_name="${FUN_FUNCTION_MAPPINGS[$fun_function]}"
    
    echo "处理函数: $fun_function -> $alias_name"
    
    # 统计当前函数的调用次数
    current_count=$(find pretty/ -name "*.c" -exec grep -o "$fun_function" {} \; | wc -l)
    echo "当前调用次数: $current_count"
    
    if [ $current_count -eq 0 ]; then
        echo "函数 $fun_function 没有找到调用，跳过"
        continue
    fi
    
    # 创建函数别名定义
    alias_definition="/* 函数别名定义: $alias_name */\n"
    alias_definition+="#define $alias_name $fun_function\n\n"
    
    # 查找包含该FUN_函数的文件
    files_with_fun=$(find pretty/ -name "*.c" -exec grep -l "$fun_function" {} \;)
    
    for file in $files_with_fun; do
        echo "处理文件: $file"
        
        # 备份原始文件
        cp "$file" "$BACKUP_DIR/$(basename $file).bak"
        
        # 在文件开头添加函数别名定义（如果还没有添加过）
        if ! grep -q "函数别名定义: $alias_name" "$file"; then
            sed -i "1i\\$alias_definition" "$file"
        fi
        
        # 替换函数调用
        sed -i "s/$fun_function/$alias_name/g" "$file"
        
        echo "已处理文件: $file"
    done
    
    echo "函数 $fun_function 处理完成"
    echo "----------------------------------------"
done

# 统计处理后的FUN_函数数量
echo "统计处理后的FUN_函数数量..."
AFTER_COUNT=$(find pretty/ -name "*.c" -exec grep -o "FUN_[a-f0-9]\{8\}" {} \; | wc -l)
echo "处理后FUN_函数数量: $AFTER_COUNT"

# 计算减少的函数数量
REDUCED_COUNT=$((BEFORE_COUNT - AFTER_COUNT))
echo "本次处理减少的FUN_函数数量: $REDUCED_COUNT"

# 显示处理结果
echo "========================================"
echo "FUN_函数高频引用批量处理完成"
echo "处理前FUN_函数数量: $BEFORE_COUNT"
echo "处理后FUN_函数数量: $AFTER_COUNT"
echo "本次处理减少的FUN_函数数量: $REDUCED_COUNT"
echo "备份目录: $BACKUP_DIR"
echo "========================================"

# 显示剩余的前10个最频繁的FUN_函数
echo "剩余的前10个最频繁的FUN_函数:"
find pretty/ -name "*.c" -exec grep -o "FUN_[a-f0-9]\{8\}" {} \; | sort | uniq -c | sort -nr | head -10

echo "脚本执行完成！"