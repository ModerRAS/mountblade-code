#!/bin/bash

# 渲染系统高级函数注册和初始化模块FUN_函数批量处理脚本 v3
# 专门处理 pretty/03_rendering_part287_sub001_sub001.c 文件中剩余的FUN_函数

TARGET_FILE="pretty/03_rendering_part287_sub001_sub001.c"

echo "开始处理渲染系统高级函数注册和初始化模块的剩余FUN_函数..."
echo "目标文件: $TARGET_FILE"

# 统计处理前的FUN_函数数量
FUN_COUNT_BEFORE=$(grep -c "FUN_" "$TARGET_FILE")
echo "处理前FUN_函数数量: $FUN_COUNT_BEFORE"

# 定义剩余FUN_函数到语义化别名的映射
declare -A FUN_MAPPING=(
    # 系统高级功能函数
    ["FUN_1806133d0"]="RenderingSystemAdvancedProcessor2"
    ["FUN_1806133b0"]="RenderingSystemAdvancedManager2"
    ["FUN_1806130d0"]="RenderingSystemAdvancedController2"
    ["FUN_180612e30"]="RenderingSystemAdvancedValidator2"
    ["FUN_180612d20"]="RenderingSystemAdvancedOptimizer2"
    ["FUN_180612c60"]="RenderingSystemAdvancedHandler2"
    ["FUN_180612ae0"]="RenderingSystemAdvancedCleaner2"
    ["FUN_180612950"]="RenderingSystemAdvancedResetter2"
    ["FUN_180612780"]="RenderingSystemAdvancedFinalizer2"
    ["FUN_1806125f0"]="RenderingSystemAdvancedSynchronizer2"
    ["FUN_180612460"]="RenderingSystemAdvancedCoordinator2"
    ["FUN_180612410"]="RenderingSystemAdvancedIntegrator2"
    ["FUN_180612360"]="RenderingSystemAdvancedUnifier2"
    ["FUN_180612270"]="RenderingSystemAdvancedTransformer2"
    ["FUN_1806121d0"]="RenderingSystemAdvancedAnalyzer2"
    ["FUN_180611ff0"]="RenderingSystemAdvancedMonitor2"
    ["FUN_180611f50"]="RenderingSystemAdvancedReporter2"
    ["FUN_180611e90"]="RenderingSystemAdvancedLogger2"
    ["FUN_180611ce0"]="RenderingSystemAdvancedArchiver2"
    ["FUN_180611bc0"]="RenderingSystemAdvancedCompressor2"
    ["FUN_180611b60"]="RenderingSystemAdvancedDecompressor2"
    ["FUN_180611b40"]="RenderingSystemAdvancedEncryptor2"
    ["FUN_180611aa0"]="RenderingSystemAdvancedDecryptor2"
    ["FUN_1806119a0"]="RenderingSystemAdvancedAuthenticator2"
    ["FUN_1806117e0"]="RenderingSystemAdvancedAuthorizer2"
    ["FUN_180611480"]="RenderingSystemAdvancedAuditor2"
    ["FUN_180611440"]="RenderingSystemAdvancedValidator3"
    ["FUN_1806111b0"]="RenderingSystemAdvancedSanitizer2"
    ["FUN_180611010"]="RenderingSystemAdvancedNormalizer2"
    ["FUN_180610f30"]="RenderingSystemAdvancedSerializer2"
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
// 函数: uint8_t $alias_name;  // 渲染系统高级功能处理器" "$TARGET_FILE"
        
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

echo "渲染系统高级函数注册和初始化模块FUN_函数批量处理v3完成!"