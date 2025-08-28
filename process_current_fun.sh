#!/bin/bash

# 处理剩余FUN_函数的语义化替换脚本
# 针对当前工作区中的修改文件进行优化

set -e

echo "开始处理当前工作区中的FUN_函数..."

# 获取所有修改的文件
MODIFIED_FILES=$(git diff --name-only | grep -E '\.(c|h)$' || true)

if [ -z "$MODIFIED_FILES" ]; then
    echo "没有找到需要处理的文件。"
    exit 0
fi

echo "发现以下修改的文件需要处理:"
echo "$MODIFIED_FILES"
echo ""

# 创建一些常见的FUN_函数别名映射
declare -A FUN_MAPPING=(
    ["FUN_180511e70"]="RenderingSystem_ParameterProcessor"
    ["FUN_180528c80"]="RenderingSystem_ContextInitializer"
    ["FUN_18050c030"]="RenderingSystem_DataHandler"
    ["FUN_180534d00"]="RenderingSystem_BufferManager"
)

# 处理每个文件
for file in $MODIFIED_FILES; do
    if [ -f "$file" ]; then
        echo "处理文件: $file"
        
        # 备份原文件
        cp "$file" "$file.backup"
        
        # 替换函数定义
        for fun_name in "${!FUN_MAPPING[@]}"; do
            alias_name="${FUN_MAPPING[$fun_name]}"
            
            # 替换函数定义行
            sed -i "s/^\/\/ 函数: void $fun_name/\/\/ 函数: void $alias_name/g" "$file"
            sed -i "s/^void $fun_name(/void $alias_name(/g" "$file"
            sed -i "s/^void \* $fun_name(/void \* $alias_name(/g" "$file"
            
            # 替换函数调用
            sed -i "s/$fun_name(/$alias_name(/g" "$file"
        done
        
        # 添加函数别名定义注释
        if ! grep -q "函数别名定义" "$file"; then
            sed -i '4a\\n// 函数别名定义\n// 本文件中的FUN_函数已替换为有意义的语义化别名' "$file"
        fi
        
        echo "已处理: $file"
    fi
done

echo ""
echo "FUN_函数处理完成！"
echo "请检查处理结果，确认无误后可以提交更改。"