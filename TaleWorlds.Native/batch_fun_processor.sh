#!/bin/bash

# 批量FUN_函数处理器
# 参数：函数名映射文件

MAPPING_FILE="$1"
if [ -z "$MAPPING_FILE" ]; then
    echo "使用方法: $0 <映射文件>"
    exit 1
fi

echo "开始批量处理FUN_函数..."

# 读取映射文件并处理
while IFS='=' read -r fun_name alias_name; do
    # 跳过注释行和空行
    [[ $fun_name =~ ^#.*$ ]] && continue
    [[ -z $fun_name ]] && continue
    
    echo "处理函数: $fun_name -> $alias_name"
    
    # 统计当前函数出现次数
    count=$(grep -r "$fun_name" --include="*.c" . | wc -l)
    echo "当前出现次数: $count"
    
    if [ $count -gt 0 ]; then
        # 执行替换
        find . -name "*.c" -type f -exec sed -i "s/$fun_name/$alias_name/g" {} \;
        
        # 验证替换结果
        new_count=$(grep -r "$fun_name" --include="*.c" . | wc -l)
        echo "替换后剩余次数: $new_count"
        
        if [ $new_count -eq 0 ]; then
            echo "✓ $fun_name 已完全替换为 $alias_name"
        else
            echo "⚠ $fun_name 仍有 $new_count 个引用未替换"
        fi
    fi
    
    echo "---"
    
done < "$MAPPING_FILE"

echo "批量处理完成"
