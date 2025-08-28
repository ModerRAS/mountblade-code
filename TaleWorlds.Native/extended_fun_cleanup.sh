#!/bin/bash

# 扩展的FUN_函数批量处理脚本
# 处理剩余的FUN_函数调用

FILE_PATH="pretty/06_utilities_part026_sub002_sub002.c"

echo "扩展处理文件: $FILE_PATH"

# 统计当前状态
echo "统计当前FUN_函数调用..."
FUN_COUNT=$(grep -c "FUN_" "$FILE_PATH")
echo "当前剩余 $FUN_COUNT 个FUN_函数调用"

# 读取扩展映射文件并执行替换
while IFS='=' read -r fun_name alias_name; do
    # 跳过注释行和空行
    [[ $fun_name =~ ^#.* ]] && continue
    [[ -z $fun_name ]] && continue
    
    # 统计当前FUN_函数的出现次数
    current_count=$(grep -c "$fun_name" "$FILE_PATH")
    if [ $current_count -gt 0 ]; then
        echo "替换 $fun_name -> $alias_name (出现次数: $current_count)"
        
        # 执行替换
        sed -i "s/$fun_name/$alias_name/g" "$FILE_PATH"
        
        # 验证替换结果
        remaining_count=$(grep -c "$fun_name" "$FILE_PATH")
        if [ $remaining_count -eq 0 ]; then
            echo "✓ $fun_name 替换完成"
        else
            echo "✗ $fun_name 替换失败，剩余 $remaining_count 个"
        fi
    fi
done < extended_mapping.txt

# 统计处理结果
echo "统计处理结果..."
NEW_FUN_COUNT=$(grep -c "FUN_" "$FILE_PATH")
echo "处理后剩余 $NEW_FUN_COUNT 个FUN_函数调用"
TOTAL_REPLACED_COUNT=$((FUN_COUNT - NEW_FUN_COUNT))
echo "本次成功替换 $TOTAL_REPLACED_COUNT 个FUN_函数调用"

# 显示剩余的FUN_函数（如果有）
if [ $NEW_FUN_COUNT -gt 0 ]; then
    echo "剩余的FUN_函数:"
    grep -o "FUN_[0-9a-f]*" "$FILE_PATH" | sort | uniq -c | sort -nr | head -10
else
    echo "✓ 所有FUN_函数已成功替换！"
fi

echo "扩展处理完成"
