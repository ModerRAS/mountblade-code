#!/bin/bash

# 渲染系统高级函数注册和初始化模块FUN_函数批量处理脚本 v2
# 专门处理 pretty/03_rendering_part287_sub001_sub001.c 文件中剩余的FUN_函数

TARGET_FILE="pretty/03_rendering_part287_sub001_sub001.c"

echo "开始处理渲染系统高级函数注册和初始化模块的剩余FUN_函数..."
echo "目标文件: $TARGET_FILE"

# 统计处理前的FUN_函数数量
FUN_COUNT_BEFORE=$(grep -c "FUN_" "$TARGET_FILE")
echo "处理前FUN_函数数量: $FUN_COUNT_BEFORE"

# 定义剩余FUN_函数到语义化别名的映射
declare -A FUN_MAPPING=(
    # 系统核心功能函数
    ["FUN_1806163f0"]="RenderingSystemCoreProcessor"
    ["FUN_1806163c0"]="RenderingSystemCoreManager"
    ["FUN_1806162c0"]="RenderingSystemCoreController"
    ["FUN_180616230"]="RenderingSystemCoreValidator"
    ["FUN_1806160b0"]="RenderingSystemCoreOptimizer"
    ["FUN_180615f80"]="RenderingSystemCoreHandler"
    ["FUN_180615ed0"]="RenderingSystemCoreCleaner"
    ["FUN_180615df0"]="RenderingSystemCoreResetter"
    ["FUN_180615d40"]="RenderingSystemCoreFinalizer"
    ["FUN_180615ca0"]="RenderingSystemCoreSynchronizer"
    ["FUN_180615c40"]="RenderingSystemCoreCoordinator"
    ["FUN_180615b90"]="RenderingSystemCoreIntegrator"
    ["FUN_180615ac0"]="RenderingSystemCoreUnifier"
    ["FUN_180615a00"]="RenderingSystemCoreTransformer"
    ["FUN_180615960"]="RenderingSystemCoreAnalyzer"
    ["FUN_1806158b0"]="RenderingSystemCoreMonitor"
    ["FUN_180615770"]="RenderingSystemCoreReporter"
    ["FUN_180615680"]="RenderingSystemCoreLogger"
    ["FUN_180615590"]="RenderingSystemCoreArchiver"
    ["FUN_1806154a0"]="RenderingSystemCoreCompressor"
    ["FUN_1806153b0"]="RenderingSystemCoreDecompressor"
    ["FUN_1806152f0"]="RenderingSystemCoreEncryptor"
    ["FUN_180615130"]="RenderingSystemCoreDecryptor"
    ["FUN_180615080"]="RenderingSystemCoreAuthenticator"
    ["FUN_180614f60"]="RenderingSystemCoreAuthorizer"
    ["FUN_180614eb0"]="RenderingSystemCoreAuditor"
    ["FUN_180614e00"]="RenderingSystemCoreValidator2"
    ["FUN_180614d50"]="RenderingSystemCoreSanitizer"
    ["FUN_180614650"]="RenderingSystemCoreNormalizer"
    ["FUN_180614620"]="RenderingSystemCoreSerializer"
    ["FUN_1806144b0"]="RenderingSystemMemoryProcessor"
    ["FUN_1806143e0"]="RenderingSystemMemoryManager"
    ["FUN_180614250"]="RenderingSystemMemoryController"
    ["FUN_1806141c0"]="RenderingSystemMemoryValidator"
    ["FUN_180614020"]="RenderingSystemMemoryOptimizer"
    ["FUN_1806139f0"]="RenderingSystemMemoryHandler"
    ["FUN_180613860"]="RenderingSystemMemoryCleaner"
    ["FUN_180613800"]="RenderingSystemMemoryResetter"
    ["FUN_1806136e0"]="RenderingSystemMemoryFinalizer"
    ["FUN_180613650"]="RenderingSystemMemorySynchronizer"
)

# 创建临时文件
TEMP_FILE=$(mktemp)

# 复制原始文件到临时文件
cp "$TARGET_FILE" "$TEMP_FILE"

# 执行批量替换
echo "开始批量替换剩余FUN_函数..."
for fun_name in "${!FUN_MAPPING[@]}"; do
    alias_name="${FUN_MAPPING[$fun_name]}"
    
    # 统计当前函数的调用次数
    count=$(grep -c "$fun_name" "$TARGET_FILE")
    if [ $count -gt 0 ]; then
        echo "替换 $fun_name -> $alias_name (调用次数: $count)"
        
        # 执行替换
        sed -i "s/$fun_name/$alias_name/g" "$TARGET_FILE"
        
        # 添加函数定义注释
        sed -i "/^\/\/ 函数: uint8_t $fun_name;/a\\
// 函数: uint8_t $alias_name;  // 渲染系统核心功能处理器" "$TARGET_FILE"
        
        # 替换函数声明
        sed -i "s/^uint8_t $fun_name;/uint8_t $alias_name;/g" "$TARGET_FILE"
    fi
done

# 统计处理后的FUN_函数数量
FUN_COUNT_AFTER=$(grep -c "FUN_" "$TARGET_FILE")
REPLACED_COUNT=$((FUN_COUNT_BEFORE - FUN_COUNT_AFTER))

echo "处理完成!"
echo "处理前FUN_函数数量: $FUN_COUNT_BEFORE"
echo "处理后FUN_函数数量: $FUN_COUNT_AFTER"
echo "成功替换FUN_函数数量: $REPLACED_COUNT"

# 验证替换结果
echo "验证替换结果..."
echo "前10个替换的函数:"
grep -o "RenderingSystem.*" "$TARGET_FILE" | head -10

# 清理临时文件
rm -f "$TEMP_FILE"

echo "渲染系统高级函数注册和初始化模块FUN_函数批量处理v2完成!"